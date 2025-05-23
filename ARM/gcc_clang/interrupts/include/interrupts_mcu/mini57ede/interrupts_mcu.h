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
* @brief mini57ede MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_USCI0 = 2;
static const int INTERRUPTS_USCI1 = 3;
static const int INTERRUPTS_GP = 4;
static const int INTERRUPTS_EPWM = 5;
static const int INTERRUPTS_BRAKE0 = 6;
static const int INTERRUPTS_BRAKE1 = 7;
static const int INTERRUPTS_BPWM0 = 8;
static const int INTERRUPTS_BPWM1 = 9;
static const int INTERRUPTS_ECAP = 15;
static const int INTERRUPTS_CCAP = 16;
static const int INTERRUPTS_HIRCTRIM = 21;
static const int INTERRUPTS_TMR0 = 22;
static const int INTERRUPTS_TMR1 = 23;
static const int INTERRUPTS_ACMP = 26;
static const int INTERRUPTS_PWRWU = 28;
static const int INTERRUPTS_EADC0 = 29;
static const int INTERRUPTS_EADC1 = 30;
static const int INTERRUPTS_EADCWCMP = 31;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for mini57ede.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mini57ede.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
