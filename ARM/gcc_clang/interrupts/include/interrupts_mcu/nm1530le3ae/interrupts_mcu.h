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
* @brief NM1530LE3AE MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_BOD = 16;
static const int INTERRUPTS_WDT = 17;
static const int INTERRUPTS_EINT0 = 18;
static const int INTERRUPTS_EINT1 = 19;
static const int INTERRUPTS_GPG0 = 20;
static const int INTERRUPTS_GPG1 = 21;
static const int INTERRUPTS_BPWM0 = 22;
static const int INTERRUPTS_EADC0 = 23;
static const int INTERRUPTS_TMR0 = 24;
static const int INTERRUPTS_TMR1 = 25;
static const int INTERRUPTS_TMR2 = 26;
static const int INTERRUPTS_TMR3 = 27;
static const int INTERRUPTS_UART0 = 28;
static const int INTERRUPTS_UART1 = 29;
static const int INTERRUPTS_SPI0 = 30;
static const int INTERRUPTS_SPI1 = 31;
static const int INTERRUPTS_SPI2 = 32;
static const int INTERRUPTS_REV = 33;
static const int INTERRUPTS_I2C0 = 34;
static const int INTERRUPTS_CKD = 35;
static const int INTERRUPTS_EPWM0 = 37;
static const int INTERRUPTS_EPWM1 = 38;
static const int INTERRUPTS_ECAP0 = 39;
static const int INTERRUPTS_ECAP1 = 40;
static const int INTERRUPTS_ACMP = 41;
static const int INTERRUPTS_REV0 = 42;
static const int INTERRUPTS_REV1 = 43;
static const int INTERRUPTS_PWRWU = 44;
static const int INTERRUPTS_EADC1 = 45;
static const int INTERRUPTS_EADC2 = 46;
static const int INTERRUPTS_EADC3 = 47;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for NM1530LE3AE.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for NM1530LE3AE.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
