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
* @brief dspic33fj64gs406 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_
#include "mcu.h"

// Interrupt table
#define INTERRUPTS_AD (0)
#define INTERRUPTS_U1TX (1)
#define INTERRUPTS_U1RX (2)
#define INTERRUPTS_SPI1 (3)
#define INTERRUPTS_SPI1E (4)
#define INTERRUPTS_T3 (5)
#define INTERRUPTS_T2 (6)
#define INTERRUPTS_OC2 (7)
#define INTERRUPTS_IC2 (8)
#define INTERRUPTS_T1 (9)
#define INTERRUPTS_OC1 (10)
#define INTERRUPTS_IC1 (11)
#define INTERRUPTS_INT0 (12)
#define INTERRUPTS_U2TX (13)
#define INTERRUPTS_U2RX (14)
#define INTERRUPTS_INT2 (15)
#define INTERRUPTS_T5 (16)
#define INTERRUPTS_T4 (17)
#define INTERRUPTS_OC4 (18)
#define INTERRUPTS_OC3 (19)
#define INTERRUPTS_INT1 (20)
#define INTERRUPTS_CN (21)
#define INTERRUPTS_MI2C1 (22)
#define INTERRUPTS_SI2C1 (23)
#define INTERRUPTS_IC4 (24)
#define INTERRUPTS_IC3 (25)
#define INTERRUPTS_SPI2 (26)
#define INTERRUPTS_SPI2E (27)
#define INTERRUPTS_QEI1 (28)
#define INTERRUPTS_PSEM (29)
#define INTERRUPTS_INT4 (30)
#define INTERRUPTS_INT3 (31)
#define INTERRUPTS_MI2C2 (32)
#define INTERRUPTS_SI2C2 (33)
#define INTERRUPTS_PSESM (34)
#define INTERRUPTS_U2E (35)
#define INTERRUPTS_U1E (36)
#define INTERRUPTS_PWM2 (37)
#define INTERRUPTS_PWM1 (38)
#define INTERRUPTS_ADCP12 (39)
#define INTERRUPTS_ADCP1 (40)
#define INTERRUPTS_ADCP0 (41)
#define INTERRUPTS_PWM6 (42)
#define INTERRUPTS_PWM5 (43)
#define INTERRUPTS_PWM4 (44)
#define INTERRUPTS_PWM3 (45)
#define INTERRUPTS_ADCP7 (46)
#define INTERRUPTS_ADCP6 (47)
#define INTERRUPTS_ADCP5 (48)
#define INTERRUPTS_ADCP4 (49)
#define INTERRUPTS_ADCP3 (50)
#define INTERRUPTS_ADCP2 (51)
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_AD_REGISTER (IEC0)
#define INTERRUPT_U1TX_REGISTER (IEC0)
#define INTERRUPT_U1RX_REGISTER (IEC0)
#define INTERRUPT_SPI1_REGISTER (IEC0)
#define INTERRUPT_SPI1E_REGISTER (IEC0)
#define INTERRUPT_T3_REGISTER (IEC0)
#define INTERRUPT_T2_REGISTER (IEC0)
#define INTERRUPT_OC2_REGISTER (IEC0)
#define INTERRUPT_IC2_REGISTER (IEC0)
#define INTERRUPT_T1_REGISTER (IEC0)
#define INTERRUPT_OC1_REGISTER (IEC0)
#define INTERRUPT_IC1_REGISTER (IEC0)
#define INTERRUPT_INT0_REGISTER (IEC0)
#define INTERRUPT_U2TX_REGISTER (IEC1)
#define INTERRUPT_U2RX_REGISTER (IEC1)
#define INTERRUPT_INT2_REGISTER (IEC1)
#define INTERRUPT_T5_REGISTER (IEC1)
#define INTERRUPT_T4_REGISTER (IEC1)
#define INTERRUPT_OC4_REGISTER (IEC1)
#define INTERRUPT_OC3_REGISTER (IEC1)
#define INTERRUPT_INT1_REGISTER (IEC1)
#define INTERRUPT_CN_REGISTER (IEC1)
#define INTERRUPT_MI2C1_REGISTER (IEC1)
#define INTERRUPT_SI2C1_REGISTER (IEC1)
#define INTERRUPT_IC4_REGISTER (IEC2)
#define INTERRUPT_IC3_REGISTER (IEC2)
#define INTERRUPT_SPI2_REGISTER (IEC2)
#define INTERRUPT_SPI2E_REGISTER (IEC2)
#define INTERRUPT_QEI1_REGISTER (IEC3)
#define INTERRUPT_PSEM_REGISTER (IEC3)
#define INTERRUPT_INT4_REGISTER (IEC3)
#define INTERRUPT_INT3_REGISTER (IEC3)
#define INTERRUPT_MI2C2_REGISTER (IEC3)
#define INTERRUPT_SI2C2_REGISTER (IEC3)
#define INTERRUPT_PSESM_REGISTER (IEC4)
#define INTERRUPT_U2E_REGISTER (IEC4)
#define INTERRUPT_U1E_REGISTER (IEC4)
#define INTERRUPT_PWM2_REGISTER (IEC5)
#define INTERRUPT_PWM1_REGISTER (IEC5)
#define INTERRUPT_ADCP12_REGISTER (IEC5)
#define INTERRUPT_ADCP1_REGISTER (IEC6)
#define INTERRUPT_ADCP0_REGISTER (IEC6)
#define INTERRUPT_PWM6_REGISTER (IEC6)
#define INTERRUPT_PWM5_REGISTER (IEC6)
#define INTERRUPT_PWM4_REGISTER (IEC6)
#define INTERRUPT_PWM3_REGISTER (IEC6)
#define INTERRUPT_ADCP7_REGISTER (IEC7)
#define INTERRUPT_ADCP6_REGISTER (IEC7)
#define INTERRUPT_ADCP5_REGISTER (IEC7)
#define INTERRUPT_ADCP4_REGISTER (IEC7)
#define INTERRUPT_ADCP3_REGISTER (IEC7)
#define INTERRUPT_ADCP2_REGISTER (IEC7)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_AD_BIT (13)
#define INTERRUPT_U1TX_BIT (12)
#define INTERRUPT_U1RX_BIT (11)
#define INTERRUPT_SPI1_BIT (10)
#define INTERRUPT_SPI1E_BIT (9)
#define INTERRUPT_T3_BIT (8)
#define INTERRUPT_T2_BIT (7)
#define INTERRUPT_OC2_BIT (6)
#define INTERRUPT_IC2_BIT (5)
#define INTERRUPT_T1_BIT (3)
#define INTERRUPT_OC1_BIT (2)
#define INTERRUPT_IC1_BIT (1)
#define INTERRUPT_INT0_BIT (0)
#define INTERRUPT_U2TX_BIT (15)
#define INTERRUPT_U2RX_BIT (14)
#define INTERRUPT_INT2_BIT (13)
#define INTERRUPT_T5_BIT (12)
#define INTERRUPT_T4_BIT (11)
#define INTERRUPT_OC4_BIT (10)
#define INTERRUPT_OC3_BIT (9)
#define INTERRUPT_INT1_BIT (4)
#define INTERRUPT_CN_BIT (3)
#define INTERRUPT_MI2C1_BIT (1)
#define INTERRUPT_SI2C1_BIT (0)
#define INTERRUPT_IC4_BIT (6)
#define INTERRUPT_IC3_BIT (5)
#define INTERRUPT_SPI2_BIT (1)
#define INTERRUPT_SPI2E_BIT (0)
#define INTERRUPT_QEI1_BIT (10)
#define INTERRUPT_PSEM_BIT (9)
#define INTERRUPT_INT4_BIT (6)
#define INTERRUPT_INT3_BIT (5)
#define INTERRUPT_MI2C2_BIT (2)
#define INTERRUPT_SI2C2_BIT (1)
#define INTERRUPT_PSESM_BIT (9)
#define INTERRUPT_U2E_BIT (2)
#define INTERRUPT_U1E_BIT (1)
#define INTERRUPT_PWM2_BIT (15)
#define INTERRUPT_PWM1_BIT (14)
#define INTERRUPT_ADCP12_BIT (13)
#define INTERRUPT_ADCP1_BIT (15)
#define INTERRUPT_ADCP0_BIT (14)
#define INTERRUPT_PWM6_BIT (3)
#define INTERRUPT_PWM5_BIT (2)
#define INTERRUPT_PWM4_BIT (1)
#define INTERRUPT_PWM3_BIT (0)
#define INTERRUPT_ADCP7_BIT (5)
#define INTERRUPT_ADCP6_BIT (4)
#define INTERRUPT_ADCP5_BIT (3)
#define INTERRUPT_ADCP4_BIT (2)
#define INTERRUPT_ADCP3_BIT (1)
#define INTERRUPT_ADCP2_BIT (0)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
