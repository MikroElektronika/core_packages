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
* @brief pic18f95j94 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
#define INTERRUPTS_CMP1 (0)
#define INTERRUPTS_CMP2 (1)
#define INTERRUPTS_CMP3 (2)
#define INTERRUPTS_TX3 (3)
#define INTERRUPTS_RC3 (4)
#define INTERRUPTS_TX4 (5)
#define INTERRUPTS_RC4 (6)
#define INTERRUPTS_TMR1 (7)
#define INTERRUPTS_TMR2 (8)
#define INTERRUPTS_TMR1G (9)
#define INTERRUPTS_SSP1 (10)
#define INTERRUPTS_TX1 (11)
#define INTERRUPTS_RC1 (12)
#define INTERRUPTS_AD (13)
#define INTERRUPTS_PSP (14)
#define INTERRUPTS_TMR3G (15)
#define INTERRUPTS_TMR3 (16)
#define INTERRUPTS_HLVD (17)
#define INTERRUPTS_BCL1 (18)
#define INTERRUPTS_USB (19)
#define INTERRUPTS_BCL2 (20)
#define INTERRUPTS_SSP2 (21)
#define INTERRUPTS_OSCF (22)
#define INTERRUPTS_RTCC (23)
#define INTERRUPTS_CCP1 (24)
#define INTERRUPTS_CCP2 (25)
#define INTERRUPTS_CTMU (26)
#define INTERRUPTS_TX2 (27)
#define INTERRUPTS_RC2 (28)
#define INTERRUPTS_LCD (29)
#define INTERRUPTS_TMR5G (30)
#define INTERRUPTS_ECCP3 (31)
#define INTERRUPTS_CCP4 (32)
#define INTERRUPTS_CCP5 (33)
#define INTERRUPTS_CCP6 (34)
#define INTERRUPTS_CCP7 (35)
#define INTERRUPTS_CCP8 (36)
#define INTERRUPTS_CCP9 (37)
#define INTERRUPTS_CCP10 (38)
#define INTERRUPTS_TMR4 (39)
#define INTERRUPTS_TMR5 (40)
#define INTERRUPTS_TMR6 (41)
#define INTERRUPTS_TMR8 (42)
#define INTERRUPTS_ACTLOCK (43)
#define INTERRUPTS_ACTORS (44)
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_CMP1_REGISTER (PIE6)
#define INTERRUPT_CMP2_REGISTER (PIE6)
#define INTERRUPT_CMP3_REGISTER (PIE6)
#define INTERRUPT_TX3_REGISTER (PIE6)
#define INTERRUPT_RC3_REGISTER (PIE6)
#define INTERRUPT_TX4_REGISTER (PIE6)
#define INTERRUPT_RC4_REGISTER (PIE6)
#define INTERRUPT_TMR1_REGISTER (PIE1)
#define INTERRUPT_TMR2_REGISTER (PIE1)
#define INTERRUPT_TMR1G_REGISTER (PIE1)
#define INTERRUPT_SSP1_REGISTER (PIE1)
#define INTERRUPT_TX1_REGISTER (PIE1)
#define INTERRUPT_RC1_REGISTER (PIE1)
#define INTERRUPT_AD_REGISTER (PIE1)
#define INTERRUPT_PSP_REGISTER (PIE1)
#define INTERRUPT_TMR3G_REGISTER (PIE2)
#define INTERRUPT_TMR3_REGISTER (PIE2)
#define INTERRUPT_HLVD_REGISTER (PIE2)
#define INTERRUPT_BCL1_REGISTER (PIE2)
#define INTERRUPT_USB_REGISTER (PIE2)
#define INTERRUPT_BCL2_REGISTER (PIE2)
#define INTERRUPT_SSP2_REGISTER (PIE2)
#define INTERRUPT_OSCF_REGISTER (PIE2)
#define INTERRUPT_RTCC_REGISTER (PIE3)
#define INTERRUPT_CCP1_REGISTER (PIE3)
#define INTERRUPT_CCP2_REGISTER (PIE3)
#define INTERRUPT_CTMU_REGISTER (PIE3)
#define INTERRUPT_TX2_REGISTER (PIE3)
#define INTERRUPT_RC2_REGISTER (PIE3)
#define INTERRUPT_LCD_REGISTER (PIE3)
#define INTERRUPT_TMR5G_REGISTER (PIE3)
#define INTERRUPT_ECCP3_REGISTER (PIE4)
#define INTERRUPT_CCP4_REGISTER (PIE4)
#define INTERRUPT_CCP5_REGISTER (PIE4)
#define INTERRUPT_CCP6_REGISTER (PIE4)
#define INTERRUPT_CCP7_REGISTER (PIE4)
#define INTERRUPT_CCP8_REGISTER (PIE4)
#define INTERRUPT_CCP9_REGISTER (PIE4)
#define INTERRUPT_CCP10_REGISTER (PIE4)
#define INTERRUPT_TMR4_REGISTER (PIE5)
#define INTERRUPT_TMR5_REGISTER (PIE5)
#define INTERRUPT_TMR6_REGISTER (PIE5)
#define INTERRUPT_TMR8_REGISTER (PIE5)
#define INTERRUPT_ACTLOCK_REGISTER (PIE5)
#define INTERRUPT_ACTORS_REGISTER (PIE5)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_CMP1_BIT (0)
#define INTERRUPT_CMP2_BIT (1)
#define INTERRUPT_CMP3_BIT (2)
#define INTERRUPT_TX3_BIT (4)
#define INTERRUPT_RC3_BIT (5)
#define INTERRUPT_TX4_BIT (6)
#define INTERRUPT_RC4_BIT (7)
#define INTERRUPT_TMR1_BIT (0)
#define INTERRUPT_TMR2_BIT (1)
#define INTERRUPT_TMR1G_BIT (2)
#define INTERRUPT_SSP1_BIT (3)
#define INTERRUPT_TX1_BIT (4)
#define INTERRUPT_RC1_BIT (5)
#define INTERRUPT_AD_BIT (6)
#define INTERRUPT_PSP_BIT (7)
#define INTERRUPT_TMR3G_BIT (0)
#define INTERRUPT_TMR3_BIT (1)
#define INTERRUPT_HLVD_BIT (2)
#define INTERRUPT_BCL1_BIT (3)
#define INTERRUPT_USB_BIT (4)
#define INTERRUPT_BCL2_BIT (5)
#define INTERRUPT_SSP2_BIT (6)
#define INTERRUPT_OSCF_BIT (7)
#define INTERRUPT_RTCC_BIT (0)
#define INTERRUPT_CCP1_BIT (1)
#define INTERRUPT_CCP2_BIT (2)
#define INTERRUPT_CTMU_BIT (3)
#define INTERRUPT_TX2_BIT (4)
#define INTERRUPT_RC2_BIT (5)
#define INTERRUPT_LCD_BIT (6)
#define INTERRUPT_TMR5G_BIT (7)
#define INTERRUPT_ECCP3_BIT (0)
#define INTERRUPT_CCP4_BIT (1)
#define INTERRUPT_CCP5_BIT (2)
#define INTERRUPT_CCP6_BIT (3)
#define INTERRUPT_CCP7_BIT (4)
#define INTERRUPT_CCP8_BIT (5)
#define INTERRUPT_CCP9_BIT (6)
#define INTERRUPT_CCP10_BIT (7)
#define INTERRUPT_TMR4_BIT (0)
#define INTERRUPT_TMR5_BIT (1)
#define INTERRUPT_TMR6_BIT (2)
#define INTERRUPT_TMR8_BIT (4)
#define INTERRUPT_ACTLOCK_BIT (5)
#define INTERRUPT_ACTORS_BIT (6)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
