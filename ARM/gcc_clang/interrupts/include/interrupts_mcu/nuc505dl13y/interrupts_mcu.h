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
* @brief nuc505dl13y MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NONMASKABLEINT = -14;
static const int INTERRUPTS_MEMORYMANAGEMENT = -12;
static const int INTERRUPTS_BUSFAULT = -11;
static const int INTERRUPTS_USAGEFAULT = -10;
static const int INTERRUPTS_SVCALL = -5;
static const int INTERRUPTS_DEBUGMONITOR = -4;
static const int INTERRUPTS_PENDSV = -2;
static const int INTERRUPTS_SYSTICK = -1;
static const int INTERRUPTS_PWR = 0;
static const int INTERRUPTS_WDT = 1;
static const int INTERRUPTS_APU = 2;
static const int INTERRUPTS_I2S = 3;
static const int INTERRUPTS_EINT0 = 4;
static const int INTERRUPTS_EINT1 = 5;
static const int INTERRUPTS_EINT2 = 6;
static const int INTERRUPTS_EINT3 = 7;
static const int INTERRUPTS_SPIM = 8;
static const int INTERRUPTS_USBD = 9;
static const int INTERRUPTS_TMR0 = 10;
static const int INTERRUPTS_TMR1 = 11;
static const int INTERRUPTS_TMR2 = 12;
static const int INTERRUPTS_TMR3 = 13;
static const int INTERRUPTS_SDH = 14;
static const int INTERRUPTS_PWM0 = 15;
static const int INTERRUPTS_PWM1 = 16;
static const int INTERRUPTS_PWM2 = 17;
static const int INTERRUPTS_PWM3 = 18;
static const int INTERRUPTS_RTC = 19;
static const int INTERRUPTS_SPI0 = 20;
static const int INTERRUPTS_I2C1 = 21;
static const int INTERRUPTS_I2C0 = 22;
static const int INTERRUPTS_UART0 = 23;
static const int INTERRUPTS_UART1 = 24;
static const int INTERRUPTS_ADC = 25;
static const int INTERRUPTS_WWDT = 26;
static const int INTERRUPTS_USBH = 27;
static const int INTERRUPTS_UART2 = 28;
static const int INTERRUPTS_LVD = 29;
static const int INTERRUPTS_SPI1 = 30;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for nuc505dl13y.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for nuc505dl13y.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
