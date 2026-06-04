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
* @brief A33G526VL MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_LVDDETECT = 16;
static const int INTERRUPTS_SCLKFAIL = 17;
static const int INTERRUPTS_MXOSCFAIL = 18;
static const int INTERRUPTS_WDT = 19;
static const int INTERRUPTS_FRT = 20;
static const int INTERRUPTS_TIMER0 = 21;
static const int INTERRUPTS_TIMER1 = 22;
static const int INTERRUPTS_TIMER2 = 23;
static const int INTERRUPTS_TIMER3 = 24;
static const int INTERRUPTS_TIMER4 = 25;
static const int INTERRUPTS_TIMER5 = 26;
static const int INTERRUPTS_TIMER6 = 27;
static const int INTERRUPTS_TIMER7 = 28;
static const int INTERRUPTS_TIMER8 = 29;
static const int INTERRUPTS_TIMER9 = 30;
static const int INTERRUPTS_MCKFAIL = 31;
static const int INTERRUPTS_GPIOA = 32;
static const int INTERRUPTS_GPIOB = 33;
static const int INTERRUPTS_GPIOC = 34;
static const int INTERRUPTS_GPIOD = 35;
static const int INTERRUPTS_GPIOE = 36;
static const int INTERRUPTS_GPIOF = 37;
static const int INTERRUPTS_PWM0 = 40;
static const int INTERRUPTS_PWM1 = 41;
static const int INTERRUPTS_PWM2 = 42;
static const int INTERRUPTS_PWM3 = 43;
static const int INTERRUPTS_PWM4 = 44;
static const int INTERRUPTS_PWM5 = 45;
static const int INTERRUPTS_PWM6 = 46;
static const int INTERRUPTS_PWM7 = 47;
static const int INTERRUPTS_SPI0 = 48;
static const int INTERRUPTS_SPI1 = 49;
static const int INTERRUPTS_I2C0 = 52;
static const int INTERRUPTS_I2C1 = 53;
static const int INTERRUPTS_UART0 = 54;
static const int INTERRUPTS_UART1 = 55;
static const int INTERRUPTS_UART2 = 56;
static const int INTERRUPTS_UART3 = 57;
static const int INTERRUPTS_ADC = 59;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for A33G526VL.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for A33G526VL.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
