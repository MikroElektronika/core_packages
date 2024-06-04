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
* @brief pic16f1777 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
#define INTERRUPTS_TMR1 (0)
#define INTERRUPTS_TMR2 (1)
#define INTERRUPTS_CCP1 (2)
#define INTERRUPTS_SSP1 (3)
#define INTERRUPTS_TX (4)
#define INTERRUPTS_RC (5)
#define INTERRUPTS_AD (6)
#define INTERRUPTS_TMR1G (7)
#define INTERRUPTS_CCP (8)
#define INTERRUPTS_CCP2 (9)
#define INTERRUPTS_C3 (10)
#define INTERRUPTS_C4 (11)
#define INTERRUPTS_BCL1 (12)
#define INTERRUPTS_COG (13)
#define INTERRUPTS_C1 (14)
#define INTERRUPTS_C2 (15)
#define INTERRUPTS_OSF (16)
#define INTERRUPTS_CLC1 (17)
#define INTERRUPTS_CLC2 (18)
#define INTERRUPTS_CLC3 (19)
#define INTERRUPTS_CLC4 (20)
#define INTERRUPTS_ZCD (21)
#define INTERRUPTS_COG2 (22)
#define INTERRUPTS_TMR4 (23)
#define INTERRUPTS_TMR6 (24)
#define INTERRUPTS_TMR3 (25)
#define INTERRUPTS_TMR3G (26)
#define INTERRUPTS_TMR5 (27)
#define INTERRUPTS_TMR5G (28)
#define INTERRUPTS_TMR8 (29)
#define INTERRUPTS_C5 (30)
#define INTERRUPTS_C6 (31)
#define INTERRUPTS_C7 (32)
#define INTERRUPTS_C8 (33)
#define INTERRUPTS_COG3 (34)
#define INTERRUPTS_COG4 (35)
#define INTERRUPTS_CCP7 (36)
#define INTERRUPTS_CCP8 (37)
#define INTERRUPTS_PWM5 (38)
#define INTERRUPTS_PWM6 (39)
#define INTERRUPTS_PWM11 (40)
#define INTERRUPTS_PWM12 (41)
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_TMR1_REGISTER (PIE1)
#define INTERRUPT_TMR2_REGISTER (PIE1)
#define INTERRUPT_CCP1_REGISTER (PIE1)
#define INTERRUPT_SSP1_REGISTER (PIE1)
#define INTERRUPT_TX_REGISTER (PIE1)
#define INTERRUPT_RC_REGISTER (PIE1)
#define INTERRUPT_AD_REGISTER (PIE1)
#define INTERRUPT_TMR1G_REGISTER (PIE1)
#define INTERRUPT_CCP_REGISTER (PIE1)
#define INTERRUPT_CCP2_REGISTER (PIE2)
#define INTERRUPT_C3_REGISTER (PIE2)
#define INTERRUPT_C4_REGISTER (PIE2)
#define INTERRUPT_BCL1_REGISTER (PIE2)
#define INTERRUPT_COG_REGISTER (PIE2)
#define INTERRUPT_C1_REGISTER (PIE2)
#define INTERRUPT_C2_REGISTER (PIE2)
#define INTERRUPT_OSF_REGISTER (PIE2)
#define INTERRUPT_CLC1_REGISTER (PIE3)
#define INTERRUPT_CLC2_REGISTER (PIE3)
#define INTERRUPT_CLC3_REGISTER (PIE3)
#define INTERRUPT_CLC4_REGISTER (PIE3)
#define INTERRUPT_ZCD_REGISTER (PIE3)
#define INTERRUPT_COG2_REGISTER (PIE3)
#define INTERRUPT_TMR4_REGISTER (PIE4)
#define INTERRUPT_TMR6_REGISTER (PIE4)
#define INTERRUPT_TMR3_REGISTER (PIE4)
#define INTERRUPT_TMR3G_REGISTER (PIE4)
#define INTERRUPT_TMR5_REGISTER (PIE4)
#define INTERRUPT_TMR5G_REGISTER (PIE4)
#define INTERRUPT_TMR8_REGISTER (PIE4)
#define INTERRUPT_C5_REGISTER (PIE5)
#define INTERRUPT_C6_REGISTER (PIE5)
#define INTERRUPT_C7_REGISTER (PIE5)
#define INTERRUPT_C8_REGISTER (PIE5)
#define INTERRUPT_COG3_REGISTER (PIE5)
#define INTERRUPT_COG4_REGISTER (PIE5)
#define INTERRUPT_CCP7_REGISTER (PIE5)
#define INTERRUPT_CCP8_REGISTER (PIE5)
#define INTERRUPT_PWM5_REGISTER (PIE6)
#define INTERRUPT_PWM6_REGISTER (PIE6)
#define INTERRUPT_PWM11_REGISTER (PIE6)
#define INTERRUPT_PWM12_REGISTER (PIE6)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_TMR1_BIT (0)
#define INTERRUPT_TMR2_BIT (1)
#define INTERRUPT_CCP1_BIT (2)
#define INTERRUPT_SSP1_BIT (3)
#define INTERRUPT_TX_BIT (4)
#define INTERRUPT_RC_BIT (5)
#define INTERRUPT_AD_BIT (6)
#define INTERRUPT_TMR1G_BIT (7)
#define INTERRUPT_CCP_BIT (2)
#define INTERRUPT_CCP2_BIT (0)
#define INTERRUPT_C3_BIT (1)
#define INTERRUPT_C4_BIT (2)
#define INTERRUPT_BCL1_BIT (3)
#define INTERRUPT_COG_BIT (4)
#define INTERRUPT_C1_BIT (5)
#define INTERRUPT_C2_BIT (6)
#define INTERRUPT_OSF_BIT (7)
#define INTERRUPT_CLC1_BIT (0)
#define INTERRUPT_CLC2_BIT (1)
#define INTERRUPT_CLC3_BIT (2)
#define INTERRUPT_CLC4_BIT (3)
#define INTERRUPT_ZCD_BIT (4)
#define INTERRUPT_COG2_BIT (5)
#define INTERRUPT_TMR4_BIT (0)
#define INTERRUPT_TMR6_BIT (1)
#define INTERRUPT_TMR3_BIT (2)
#define INTERRUPT_TMR3G_BIT (3)
#define INTERRUPT_TMR5_BIT (4)
#define INTERRUPT_TMR5G_BIT (5)
#define INTERRUPT_TMR8_BIT (6)
#define INTERRUPT_C5_BIT (0)
#define INTERRUPT_C6_BIT (1)
#define INTERRUPT_C7_BIT (2)
#define INTERRUPT_C8_BIT (3)
#define INTERRUPT_COG3_BIT (4)
#define INTERRUPT_COG4_BIT (5)
#define INTERRUPT_CCP7_BIT (6)
#define INTERRUPT_CCP8_BIT (7)
#define INTERRUPT_PWM5_BIT (0)
#define INTERRUPT_PWM6_BIT (1)
#define INTERRUPT_PWM11_BIT (2)
#define INTERRUPT_PWM12_BIT (3)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
