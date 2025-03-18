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
* @brief pic18lf8723 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
#define INTERRUPTS_TMR1 (0)
#define INTERRUPTS_TMR2 (1)
#define INTERRUPTS_CCP1 (2)
#define INTERRUPTS_SSP1 (3)
#define INTERRUPTS_TX1 (4)
#define INTERRUPTS_RC1 (5)
#define INTERRUPTS_AD (6)
#define INTERRUPTS_PSP (7)
#define INTERRUPTS_RC (8)
#define INTERRUPTS_SSP (9)
#define INTERRUPTS_TX (10)
#define INTERRUPTS_CCP2 (11)
#define INTERRUPTS_TMR3 (12)
#define INTERRUPTS_HLVD (13)
#define INTERRUPTS_BCL1 (14)
#define INTERRUPTS_EE (15)
#define INTERRUPTS_CM (16)
#define INTERRUPTS_OSCF (17)
#define INTERRUPTS_BCL (18)
#define INTERRUPTS_LVD (19)
#define INTERRUPTS_CCP3 (20)
#define INTERRUPTS_CCP4 (21)
#define INTERRUPTS_CCP5 (22)
#define INTERRUPTS_TMR4 (23)
#define INTERRUPTS_TX2 (24)
#define INTERRUPTS_RC2 (25)
#define INTERRUPTS_BCL2 (26)
#define INTERRUPTS_SSP2 (27)
#define INTERRUPTS_RXB0 (28)
#define INTERRUPTS_RXB1 (29)
#define INTERRUPTS_RXBN (30)
#define INTERRUPTS_TXB0 (31)
#define INTERRUPTS_TXB1 (32)
#define INTERRUPTS_TXB2 (33)
#define INTERRUPTS_TXBN (34)
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_TMR1_REGISTER (PIE1)
#define INTERRUPT_TMR2_REGISTER (PIE1)
#define INTERRUPT_CCP1_REGISTER (PIE1)
#define INTERRUPT_SSP1_REGISTER (PIE1)
#define INTERRUPT_TX1_REGISTER (PIE1)
#define INTERRUPT_RC1_REGISTER (PIE1)
#define INTERRUPT_AD_REGISTER (PIE1)
#define INTERRUPT_PSP_REGISTER (PIE1)
#define INTERRUPT_RC_REGISTER (PIE1)
#define INTERRUPT_SSP_REGISTER (PIE1)
#define INTERRUPT_TX_REGISTER (PIE1)
#define INTERRUPT_CCP2_REGISTER (PIE2)
#define INTERRUPT_TMR3_REGISTER (PIE2)
#define INTERRUPT_HLVD_REGISTER (PIE2)
#define INTERRUPT_BCL1_REGISTER (PIE2)
#define INTERRUPT_EE_REGISTER (PIE2)
#define INTERRUPT_CM_REGISTER (PIE2)
#define INTERRUPT_OSCF_REGISTER (PIE2)
#define INTERRUPT_BCL_REGISTER (PIE2)
#define INTERRUPT_LVD_REGISTER (PIE2)
#define INTERRUPT_CCP3_REGISTER (PIE3)
#define INTERRUPT_CCP4_REGISTER (PIE3)
#define INTERRUPT_CCP5_REGISTER (PIE3)
#define INTERRUPT_TMR4_REGISTER (PIE3)
#define INTERRUPT_TX2_REGISTER (PIE3)
#define INTERRUPT_RC2_REGISTER (PIE3)
#define INTERRUPT_BCL2_REGISTER (PIE3)
#define INTERRUPT_SSP2_REGISTER (PIE3)
#define INTERRUPT_RXB0_REGISTER (PIE3)
#define INTERRUPT_RXB1_REGISTER (PIE3)
#define INTERRUPT_RXBN_REGISTER (PIE3)
#define INTERRUPT_TXB0_REGISTER (PIE3)
#define INTERRUPT_TXB1_REGISTER (PIE3)
#define INTERRUPT_TXB2_REGISTER (PIE3)
#define INTERRUPT_TXBN_REGISTER (PIE3)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_TMR1_BIT (0)
#define INTERRUPT_TMR2_BIT (1)
#define INTERRUPT_CCP1_BIT (2)
#define INTERRUPT_SSP1_BIT (3)
#define INTERRUPT_TX1_BIT (4)
#define INTERRUPT_RC1_BIT (5)
#define INTERRUPT_AD_BIT (6)
#define INTERRUPT_PSP_BIT (7)
#define INTERRUPT_RC_BIT (5)
#define INTERRUPT_SSP_BIT (3)
#define INTERRUPT_TX_BIT (4)
#define INTERRUPT_CCP2_BIT (0)
#define INTERRUPT_TMR3_BIT (1)
#define INTERRUPT_HLVD_BIT (2)
#define INTERRUPT_BCL1_BIT (3)
#define INTERRUPT_EE_BIT (4)
#define INTERRUPT_CM_BIT (6)
#define INTERRUPT_OSCF_BIT (7)
#define INTERRUPT_BCL_BIT (3)
#define INTERRUPT_LVD_BIT (2)
#define INTERRUPT_CCP3_BIT (0)
#define INTERRUPT_CCP4_BIT (1)
#define INTERRUPT_CCP5_BIT (2)
#define INTERRUPT_TMR4_BIT (3)
#define INTERRUPT_TX2_BIT (4)
#define INTERRUPT_RC2_BIT (5)
#define INTERRUPT_BCL2_BIT (6)
#define INTERRUPT_SSP2_BIT (7)
#define INTERRUPT_RXB0_BIT (0)
#define INTERRUPT_RXB1_BIT (1)
#define INTERRUPT_RXBN_BIT (1)
#define INTERRUPT_TXB0_BIT (2)
#define INTERRUPT_TXB1_BIT (3)
#define INTERRUPT_TXB2_BIT (4)
#define INTERRUPT_TXBN_BIT (4)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
