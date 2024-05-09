/****************************************************************************
**
** Copyright (C) 2024 MikroElektronika d.o.o.
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
* @brief dspic33fj06gs001 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_
#include "mcu.h"

// Interrupt table
#define INTERRUPTS_AD (0)
#define INTERRUPTS_T2 (1)
#define INTERRUPTS_T1 (2)
#define INTERRUPTS_INT0 (3)
#define INTERRUPTS_INT2 (4)
#define INTERRUPTS_INT1 (5)
#define INTERRUPTS_CN (6)
#define INTERRUPTS_AC1 (7)
#define INTERRUPTS_MI2C1 (8)
#define INTERRUPTS_SI2C1 (9)
#define INTERRUPTS_PSEM (10)
#define INTERRUPTS_PWM1 (11)
#define INTERRUPTS_JTAG (12)
#define INTERRUPTS_ADCP1 (13)
#define INTERRUPTS_ADCP0 (14)
#define INTERRUPTS_AC2 (15)
#define INTERRUPTS_PWM4 (16)
#define INTERRUPTS_ADCP6 (17)
#define INTERRUPTS_ADCP3 (18)
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_AD_REGISTER (IEC0)
#define INTERRUPT_T2_REGISTER (IEC0)
#define INTERRUPT_T1_REGISTER (IEC0)
#define INTERRUPT_INT0_REGISTER (IEC0)
#define INTERRUPT_INT2_REGISTER (IEC1)
#define INTERRUPT_INT1_REGISTER (IEC1)
#define INTERRUPT_CN_REGISTER (IEC1)
#define INTERRUPT_AC1_REGISTER (IEC1)
#define INTERRUPT_MI2C1_REGISTER (IEC1)
#define INTERRUPT_SI2C1_REGISTER (IEC1)
#define INTERRUPT_PSEM_REGISTER (IEC3)
#define INTERRUPT_PWM1_REGISTER (IEC5)
#define INTERRUPT_JTAG_REGISTER (IEC5)
#define INTERRUPT_ADCP1_REGISTER (IEC6)
#define INTERRUPT_ADCP0_REGISTER (IEC6)
#define INTERRUPT_AC2_REGISTER (IEC6)
#define INTERRUPT_PWM4_REGISTER (IEC6)
#define INTERRUPT_ADCP6_REGISTER (IEC7)
#define INTERRUPT_ADCP3_REGISTER (IEC7)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_AD_BIT (13)
#define INTERRUPT_T2_BIT (7)
#define INTERRUPT_T1_BIT (3)
#define INTERRUPT_INT0_BIT (0)
#define INTERRUPT_INT2_BIT (13)
#define INTERRUPT_INT1_BIT (4)
#define INTERRUPT_CN_BIT (3)
#define INTERRUPT_AC1_BIT (2)
#define INTERRUPT_MI2C1_BIT (1)
#define INTERRUPT_SI2C1_BIT (0)
#define INTERRUPT_PSEM_BIT (9)
#define INTERRUPT_PWM1_BIT (14)
#define INTERRUPT_JTAG_BIT (0)
#define INTERRUPT_ADCP1_BIT (15)
#define INTERRUPT_ADCP0_BIT (14)
#define INTERRUPT_AC2_BIT (7)
#define INTERRUPT_PWM4_BIT (1)
#define INTERRUPT_ADCP6_BIT (4)
#define INTERRUPT_ADCP3_BIT (1)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
