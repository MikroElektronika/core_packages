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
* @brief pic18f26j53 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
#define INTERRUPTS_CCP3 (0)
#define INTERRUPTS_CCP4 (1)
#define INTERRUPTS_CCP5 (2)
#define INTERRUPTS_CCP6 (3)
#define INTERRUPTS_CCP7 (4)
#define INTERRUPTS_CCP8 (5)
#define INTERRUPTS_CCP9 (6)
#define INTERRUPTS_CCP10 (7)
#define INTERRUPTS_TMR1G (8)
#define INTERRUPTS_TMR5G (9)
#define INTERRUPTS_TMR5 (10)
#define INTERRUPTS_TMR6 (11)
#define INTERRUPTS_TMR8 (12)
#define INTERRUPTS_CM3 (13)
#define INTERRUPTS_TMR1 (14)
#define INTERRUPTS_TMR2 (15)
#define INTERRUPTS_CCP1 (16)
#define INTERRUPTS_SSP1 (17)
#define INTERRUPTS_TX1 (18)
#define INTERRUPTS_RC1 (19)
#define INTERRUPTS_AD (20)
#define INTERRUPTS_SSP (21)
#define INTERRUPTS_TX (22)
#define INTERRUPTS_RC (23)
#define INTERRUPTS_CCP2 (24)
#define INTERRUPTS_TMR3 (25)
#define INTERRUPTS_LVD (26)
#define INTERRUPTS_BCL1 (27)
#define INTERRUPTS_USB (28)
#define INTERRUPTS_CM1 (29)
#define INTERRUPTS_CM2 (30)
#define INTERRUPTS_OSCF (31)
#define INTERRUPTS_HLVD (32)
#define INTERRUPTS_BCL (33)
#define INTERRUPTS_RTCC (34)
#define INTERRUPTS_TMR3G (35)
#define INTERRUPTS_CTMU (36)
#define INTERRUPTS_TMR4 (37)
#define INTERRUPTS_TX2 (38)
#define INTERRUPTS_RC2 (39)
#define INTERRUPTS_BCL2 (40)
#define INTERRUPTS_SSP2 (41)
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_CCP3_REGISTER (PIE4)
#define INTERRUPT_CCP4_REGISTER (PIE4)
#define INTERRUPT_CCP5_REGISTER (PIE4)
#define INTERRUPT_CCP6_REGISTER (PIE4)
#define INTERRUPT_CCP7_REGISTER (PIE4)
#define INTERRUPT_CCP8_REGISTER (PIE4)
#define INTERRUPT_CCP9_REGISTER (PIE4)
#define INTERRUPT_CCP10_REGISTER (PIE4)
#define INTERRUPT_TMR1G_REGISTER (PIE5)
#define INTERRUPT_TMR5G_REGISTER (PIE5)
#define INTERRUPT_TMR5_REGISTER (PIE5)
#define INTERRUPT_TMR6_REGISTER (PIE5)
#define INTERRUPT_TMR8_REGISTER (PIE5)
#define INTERRUPT_CM3_REGISTER (PIE5)
#define INTERRUPT_TMR1_REGISTER (PIE1)
#define INTERRUPT_TMR2_REGISTER (PIE1)
#define INTERRUPT_CCP1_REGISTER (PIE1)
#define INTERRUPT_SSP1_REGISTER (PIE1)
#define INTERRUPT_TX1_REGISTER (PIE1)
#define INTERRUPT_RC1_REGISTER (PIE1)
#define INTERRUPT_AD_REGISTER (PIE1)
#define INTERRUPT_SSP_REGISTER (PIE1)
#define INTERRUPT_TX_REGISTER (PIE1)
#define INTERRUPT_RC_REGISTER (PIE1)
#define INTERRUPT_CCP2_REGISTER (PIE2)
#define INTERRUPT_TMR3_REGISTER (PIE2)
#define INTERRUPT_LVD_REGISTER (PIE2)
#define INTERRUPT_BCL1_REGISTER (PIE2)
#define INTERRUPT_USB_REGISTER (PIE2)
#define INTERRUPT_CM1_REGISTER (PIE2)
#define INTERRUPT_CM2_REGISTER (PIE2)
#define INTERRUPT_OSCF_REGISTER (PIE2)
#define INTERRUPT_HLVD_REGISTER (PIE2)
#define INTERRUPT_BCL_REGISTER (PIE2)
#define INTERRUPT_RTCC_REGISTER (PIE3)
#define INTERRUPT_TMR3G_REGISTER (PIE3)
#define INTERRUPT_CTMU_REGISTER (PIE3)
#define INTERRUPT_TMR4_REGISTER (PIE3)
#define INTERRUPT_TX2_REGISTER (PIE3)
#define INTERRUPT_RC2_REGISTER (PIE3)
#define INTERRUPT_BCL2_REGISTER (PIE3)
#define INTERRUPT_SSP2_REGISTER (PIE3)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_CCP3_BIT (0)
#define INTERRUPT_CCP4_BIT (1)
#define INTERRUPT_CCP5_BIT (2)
#define INTERRUPT_CCP6_BIT (3)
#define INTERRUPT_CCP7_BIT (4)
#define INTERRUPT_CCP8_BIT (5)
#define INTERRUPT_CCP9_BIT (6)
#define INTERRUPT_CCP10_BIT (7)
#define INTERRUPT_TMR1G_BIT (0)
#define INTERRUPT_TMR5G_BIT (1)
#define INTERRUPT_TMR5_BIT (2)
#define INTERRUPT_TMR6_BIT (3)
#define INTERRUPT_TMR8_BIT (4)
#define INTERRUPT_CM3_BIT (5)
#define INTERRUPT_TMR1_BIT (0)
#define INTERRUPT_TMR2_BIT (1)
#define INTERRUPT_CCP1_BIT (2)
#define INTERRUPT_SSP1_BIT (3)
#define INTERRUPT_TX1_BIT (4)
#define INTERRUPT_RC1_BIT (5)
#define INTERRUPT_AD_BIT (6)
#define INTERRUPT_SSP_BIT (3)
#define INTERRUPT_TX_BIT (4)
#define INTERRUPT_RC_BIT (5)
#define INTERRUPT_CCP2_BIT (0)
#define INTERRUPT_TMR3_BIT (1)
#define INTERRUPT_LVD_BIT (2)
#define INTERRUPT_BCL1_BIT (3)
#define INTERRUPT_USB_BIT (4)
#define INTERRUPT_CM1_BIT (5)
#define INTERRUPT_CM2_BIT (6)
#define INTERRUPT_OSCF_BIT (7)
#define INTERRUPT_HLVD_BIT (2)
#define INTERRUPT_BCL_BIT (3)
#define INTERRUPT_RTCC_BIT (0)
#define INTERRUPT_TMR3G_BIT (1)
#define INTERRUPT_CTMU_BIT (2)
#define INTERRUPT_TMR4_BIT (3)
#define INTERRUPT_TX2_BIT (4)
#define INTERRUPT_RC2_BIT (5)
#define INTERRUPT_BCL2_BIT (6)
#define INTERRUPT_SSP2_BIT (7)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
