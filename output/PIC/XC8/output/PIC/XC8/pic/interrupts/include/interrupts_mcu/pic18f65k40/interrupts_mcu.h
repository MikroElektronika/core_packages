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
* @brief pic18f65k40 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
#define INTERRUPTS_INT0 (0)
#define INTERRUPTS_INT1 (1)
#define INTERRUPTS_INT2 (2)
#define INTERRUPTS_INT3 (3)
#define INTERRUPTS_IOC (4)
#define INTERRUPTS_TMR0 (5)
#define INTERRUPTS_AD (6)
#define INTERRUPTS_ADT (7)
#define INTERRUPTS_CSW (8)
#define INTERRUPTS_OSCF (9)
#define INTERRUPTS_PSP (10)
#define INTERRUPTS_C1 (11)
#define INTERRUPTS_C2 (12)
#define INTERRUPTS_C3 (13)
#define INTERRUPTS_CM (14)
#define INTERRUPTS_HLVD (15)
#define INTERRUPTS_ZCD (16)
#define INTERRUPTS_RXB0 (17)
#define INTERRUPTS_BCL1 (18)
#define INTERRUPTS_SSP2 (19)
#define INTERRUPTS_BCL2 (20)
#define INTERRUPTS_TX1 (21)
#define INTERRUPTS_RC1 (22)
#define INTERRUPTS_TX2 (23)
#define INTERRUPTS_RC2 (24)
#define INTERRUPTS_RXB1 (25)
#define INTERRUPTS_RXBN (26)
#define INTERRUPTS_SSP1 (27)
#define INTERRUPTS_TXB0 (28)
#define INTERRUPTS_TXB1 (29)
#define INTERRUPTS_TXB2 (30)
#define INTERRUPTS_TXBN (31)
#define INTERRUPTS_TX3 (32)
#define INTERRUPTS_RC3 (33)
#define INTERRUPTS_TX4 (34)
#define INTERRUPTS_RC4 (35)
#define INTERRUPTS_TX5 (36)
#define INTERRUPTS_RC5 (37)
#define INTERRUPTS_TMR1 (38)
#define INTERRUPTS_TMR2 (39)
#define INTERRUPTS_TMR3 (40)
#define INTERRUPTS_TMR4 (41)
#define INTERRUPTS_TMR5 (42)
#define INTERRUPTS_TMR6 (43)
#define INTERRUPTS_TMR7 (44)
#define INTERRUPTS_TMR8 (45)
#define INTERRUPTS_TMR1G (46)
#define INTERRUPTS_TMR3G (47)
#define INTERRUPTS_TMR5G (48)
#define INTERRUPTS_TMR7G (49)
#define INTERRUPTS_CCP1 (50)
#define INTERRUPTS_CCP2 (51)
#define INTERRUPTS_CCP3 (52)
#define INTERRUPTS_CCP4 (53)
#define INTERRUPTS_CCP5 (54)
#define INTERRUPTS_CWG1 (55)
#define INTERRUPTS_NVM (56)
#define INTERRUPTS_CRC (57)
#define INTERRUPTS_SCAN (58)
#define INTERRUPTS_SMT1 (59)
#define INTERRUPTS_SMT1PRA (60)
#define INTERRUPTS_SMT1PWA (61)
#define INTERRUPTS_SMT2 (62)
#define INTERRUPTS_SMT2PRA (63)
#define INTERRUPTS_SMT2PWA (64)
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_INT0_REGISTER (PIE0)
#define INTERRUPT_INT1_REGISTER (PIE0)
#define INTERRUPT_INT2_REGISTER (PIE0)
#define INTERRUPT_INT3_REGISTER (PIE0)
#define INTERRUPT_IOC_REGISTER (PIE0)
#define INTERRUPT_TMR0_REGISTER (PIE0)
#define INTERRUPT_AD_REGISTER (PIE1)
#define INTERRUPT_ADT_REGISTER (PIE1)
#define INTERRUPT_CSW_REGISTER (PIE1)
#define INTERRUPT_OSCF_REGISTER (PIE1)
#define INTERRUPT_PSP_REGISTER (PIE1)
#define INTERRUPT_C1_REGISTER (PIE2)
#define INTERRUPT_C2_REGISTER (PIE2)
#define INTERRUPT_C3_REGISTER (PIE2)
#define INTERRUPT_CM_REGISTER (PIE2)
#define INTERRUPT_HLVD_REGISTER (PIE2)
#define INTERRUPT_ZCD_REGISTER (PIE2)
#define INTERRUPT_RXB0_REGISTER (PIE3)
#define INTERRUPT_BCL1_REGISTER (PIE3)
#define INTERRUPT_SSP2_REGISTER (PIE3)
#define INTERRUPT_BCL2_REGISTER (PIE3)
#define INTERRUPT_TX1_REGISTER (PIE3)
#define INTERRUPT_RC1_REGISTER (PIE3)
#define INTERRUPT_TX2_REGISTER (PIE3)
#define INTERRUPT_RC2_REGISTER (PIE3)
#define INTERRUPT_RXB1_REGISTER (PIE3)
#define INTERRUPT_RXBN_REGISTER (PIE3)
#define INTERRUPT_SSP1_REGISTER (PIE3)
#define INTERRUPT_TXB0_REGISTER (PIE3)
#define INTERRUPT_TXB1_REGISTER (PIE3)
#define INTERRUPT_TXB2_REGISTER (PIE3)
#define INTERRUPT_TXBN_REGISTER (PIE3)
#define INTERRUPT_TX3_REGISTER (PIE4)
#define INTERRUPT_RC3_REGISTER (PIE4)
#define INTERRUPT_TX4_REGISTER (PIE4)
#define INTERRUPT_RC4_REGISTER (PIE4)
#define INTERRUPT_TX5_REGISTER (PIE4)
#define INTERRUPT_RC5_REGISTER (PIE4)
#define INTERRUPT_TMR1_REGISTER (PIE5)
#define INTERRUPT_TMR2_REGISTER (PIE5)
#define INTERRUPT_TMR3_REGISTER (PIE5)
#define INTERRUPT_TMR4_REGISTER (PIE5)
#define INTERRUPT_TMR5_REGISTER (PIE5)
#define INTERRUPT_TMR6_REGISTER (PIE5)
#define INTERRUPT_TMR7_REGISTER (PIE5)
#define INTERRUPT_TMR8_REGISTER (PIE5)
#define INTERRUPT_TMR1G_REGISTER (PIE6)
#define INTERRUPT_TMR3G_REGISTER (PIE6)
#define INTERRUPT_TMR5G_REGISTER (PIE6)
#define INTERRUPT_TMR7G_REGISTER (PIE6)
#define INTERRUPT_CCP1_REGISTER (PIE7)
#define INTERRUPT_CCP2_REGISTER (PIE7)
#define INTERRUPT_CCP3_REGISTER (PIE7)
#define INTERRUPT_CCP4_REGISTER (PIE7)
#define INTERRUPT_CCP5_REGISTER (PIE7)
#define INTERRUPT_CWG1_REGISTER (PIE8)
#define INTERRUPT_NVM_REGISTER (PIE8)
#define INTERRUPT_CRC_REGISTER (PIE8)
#define INTERRUPT_SCAN_REGISTER (PIE8)
#define INTERRUPT_SMT1_REGISTER (PIE9)
#define INTERRUPT_SMT1PRA_REGISTER (PIE9)
#define INTERRUPT_SMT1PWA_REGISTER (PIE9)
#define INTERRUPT_SMT2_REGISTER (PIE9)
#define INTERRUPT_SMT2PRA_REGISTER (PIE9)
#define INTERRUPT_SMT2PWA_REGISTER (PIE9)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_INT0_BIT (0)
#define INTERRUPT_INT1_BIT (1)
#define INTERRUPT_INT2_BIT (2)
#define INTERRUPT_INT3_BIT (3)
#define INTERRUPT_IOC_BIT (4)
#define INTERRUPT_TMR0_BIT (5)
#define INTERRUPT_AD_BIT (0)
#define INTERRUPT_ADT_BIT (1)
#define INTERRUPT_CSW_BIT (6)
#define INTERRUPT_OSCF_BIT (7)
#define INTERRUPT_PSP_BIT (7)
#define INTERRUPT_C1_BIT (0)
#define INTERRUPT_C2_BIT (1)
#define INTERRUPT_C3_BIT (2)
#define INTERRUPT_CM_BIT (6)
#define INTERRUPT_HLVD_BIT (7)
#define INTERRUPT_ZCD_BIT (6)
#define INTERRUPT_RXB0_BIT (0)
#define INTERRUPT_BCL1_BIT (1)
#define INTERRUPT_SSP2_BIT (2)
#define INTERRUPT_BCL2_BIT (3)
#define INTERRUPT_TX1_BIT (4)
#define INTERRUPT_RC1_BIT (5)
#define INTERRUPT_TX2_BIT (6)
#define INTERRUPT_RC2_BIT (7)
#define INTERRUPT_RXB1_BIT (1)
#define INTERRUPT_RXBN_BIT (1)
#define INTERRUPT_SSP1_BIT (0)
#define INTERRUPT_TXB0_BIT (2)
#define INTERRUPT_TXB1_BIT (3)
#define INTERRUPT_TXB2_BIT (4)
#define INTERRUPT_TXBN_BIT (4)
#define INTERRUPT_TX3_BIT (0)
#define INTERRUPT_RC3_BIT (1)
#define INTERRUPT_TX4_BIT (2)
#define INTERRUPT_RC4_BIT (3)
#define INTERRUPT_TX5_BIT (4)
#define INTERRUPT_RC5_BIT (5)
#define INTERRUPT_TMR1_BIT (0)
#define INTERRUPT_TMR2_BIT (1)
#define INTERRUPT_TMR3_BIT (2)
#define INTERRUPT_TMR4_BIT (3)
#define INTERRUPT_TMR5_BIT (4)
#define INTERRUPT_TMR6_BIT (5)
#define INTERRUPT_TMR7_BIT (6)
#define INTERRUPT_TMR8_BIT (7)
#define INTERRUPT_TMR1G_BIT (0)
#define INTERRUPT_TMR3G_BIT (1)
#define INTERRUPT_TMR5G_BIT (2)
#define INTERRUPT_TMR7G_BIT (3)
#define INTERRUPT_CCP1_BIT (0)
#define INTERRUPT_CCP2_BIT (1)
#define INTERRUPT_CCP3_BIT (2)
#define INTERRUPT_CCP4_BIT (3)
#define INTERRUPT_CCP5_BIT (4)
#define INTERRUPT_CWG1_BIT (0)
#define INTERRUPT_NVM_BIT (5)
#define INTERRUPT_CRC_BIT (6)
#define INTERRUPT_SCAN_BIT (7)
#define INTERRUPT_SMT1_BIT (0)
#define INTERRUPT_SMT1PRA_BIT (1)
#define INTERRUPT_SMT1PWA_BIT (2)
#define INTERRUPT_SMT2_BIT (3)
#define INTERRUPT_SMT2PRA_BIT (4)
#define INTERRUPT_SMT2PWA_BIT (5)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
