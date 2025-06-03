/****************************************************************************
**
** Copyright (C) ${COPYRIGHT_YEAR} MikroElektronika d.o.o.
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
** OF MERCHANTABILITY, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
** TO THE WARRANTIES FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
* @file  interrupts_mcu.h
* @brief nano110kc2bn MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NONMASKABLEINT = -14;
static const int INTERRUPTS_HARDFAULT = -13;
static const int INTERRUPTS_SVCALL = -5;
static const int INTERRUPTS_PENDSV = -2;
static const int INTERRUPTS_SYSTICK = -1;
static const int INTERRUPTS_BOD = 0;
static const int INTERRUPTS_WDT = 1;
static const int INTERRUPTS_EINT0 = 2;
static const int INTERRUPTS_EINT1 = 3;
static const int INTERRUPTS_GPABC = 4;
static const int INTERRUPTS_GPDEF = 5;
static const int INTERRUPTS_PWM0 = 6;
static const int INTERRUPTS_PWM1 = 7;
static const int INTERRUPTS_TMR0 = 8;
static const int INTERRUPTS_TMR1 = 9;
static const int INTERRUPTS_TMR2 = 10;
static const int INTERRUPTS_TMR3 = 11;
static const int INTERRUPTS_UART0 = 12;
static const int INTERRUPTS_UART1 = 13;
static const int INTERRUPTS_SPI0 = 14;
static const int INTERRUPTS_SPI1 = 15;
static const int INTERRUPTS_SPI2 = 16;
static const int INTERRUPTS_HIRC = 17;
static const int INTERRUPTS_I2C0 = 18;
static const int INTERRUPTS_I2C1 = 19;
static const int INTERRUPTS_SC2 = 20;
static const int INTERRUPTS_SC0 = 21;
static const int INTERRUPTS_SC1 = 22;
static const int INTERRUPTS_USBD = 23;
static const int INTERRUPTS_LCD = 25;
static const int INTERRUPTS_PDMA = 26;
static const int INTERRUPTS_I2S = 27;
static const int INTERRUPTS_PDWU = 28;
static const int INTERRUPTS_ADC = 29;
static const int INTERRUPTS_DAC = 30;
static const int INTERRUPTS_RTC = 31;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for nano110kc2bn.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for nano110kc2bn.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
