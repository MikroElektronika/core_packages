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
* @brief pic18f248 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
#define INTERRUPTS_TMR1 (0)
#define INTERRUPTS_TMR2 (1)
#define INTERRUPTS_CCP1 (2)
#define INTERRUPTS_SSP (3)
#define INTERRUPTS_TX (4)
#define INTERRUPTS_RC (5)
#define INTERRUPTS_AD (6)
#define INTERRUPTS_TMR3 (7)
#define INTERRUPTS_LVD (8)
#define INTERRUPTS_BCL (9)
#define INTERRUPTS_EE (10)
#define INTERRUPTS_RXB0 (11)
#define INTERRUPTS_RXB1 (12)
#define INTERRUPTS_TXB0 (13)
#define INTERRUPTS_TXB1 (14)
#define INTERRUPTS_TXB2 (15)
#define INTERRUPTS_ERR (16)
#define INTERRUPTS_WAK (17)
#define INTERRUPTS_IRX (18)
#define INTERRUPTS_RX0 (19)
#define INTERRUPTS_RX1 (20)
#define INTERRUPTS_TX0 (21)
#define INTERRUPTS_TX1 (22)
#define INTERRUPTS_TX2 (23)
#define INTERRUPTS_IV (24)
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_TMR1_REGISTER (PIE1)
#define INTERRUPT_TMR2_REGISTER (PIE1)
#define INTERRUPT_CCP1_REGISTER (PIE1)
#define INTERRUPT_SSP_REGISTER (PIE1)
#define INTERRUPT_TX_REGISTER (PIE1)
#define INTERRUPT_RC_REGISTER (PIE1)
#define INTERRUPT_AD_REGISTER (PIE1)
#define INTERRUPT_TMR3_REGISTER (PIE2)
#define INTERRUPT_LVD_REGISTER (PIE2)
#define INTERRUPT_BCL_REGISTER (PIE2)
#define INTERRUPT_EE_REGISTER (PIE2)
#define INTERRUPT_RXB0_REGISTER (PIE3)
#define INTERRUPT_RXB1_REGISTER (PIE3)
#define INTERRUPT_TXB0_REGISTER (PIE3)
#define INTERRUPT_TXB1_REGISTER (PIE3)
#define INTERRUPT_TXB2_REGISTER (PIE3)
#define INTERRUPT_ERR_REGISTER (PIE3)
#define INTERRUPT_WAK_REGISTER (PIE3)
#define INTERRUPT_IRX_REGISTER (PIE3)
#define INTERRUPT_RX0_REGISTER (PIE3)
#define INTERRUPT_RX1_REGISTER (PIE3)
#define INTERRUPT_TX0_REGISTER (PIE3)
#define INTERRUPT_TX1_REGISTER (PIE3)
#define INTERRUPT_TX2_REGISTER (PIE3)
#define INTERRUPT_IV_REGISTER (PIE3)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_TMR1_BIT (0)
#define INTERRUPT_TMR2_BIT (1)
#define INTERRUPT_CCP1_BIT (2)
#define INTERRUPT_SSP_BIT (3)
#define INTERRUPT_TX_BIT (4)
#define INTERRUPT_RC_BIT (5)
#define INTERRUPT_AD_BIT (6)
#define INTERRUPT_TMR3_BIT (1)
#define INTERRUPT_LVD_BIT (2)
#define INTERRUPT_BCL_BIT (3)
#define INTERRUPT_EE_BIT (4)
#define INTERRUPT_RXB0_BIT (0)
#define INTERRUPT_RXB1_BIT (1)
#define INTERRUPT_TXB0_BIT (2)
#define INTERRUPT_TXB1_BIT (3)
#define INTERRUPT_TXB2_BIT (4)
#define INTERRUPT_ERR_BIT (5)
#define INTERRUPT_WAK_BIT (6)
#define INTERRUPT_IRX_BIT (7)
#define INTERRUPT_RX0_BIT (0)
#define INTERRUPT_RX1_BIT (1)
#define INTERRUPT_TX0_BIT (2)
#define INTERRUPT_TX1_BIT (3)
#define INTERRUPT_TX2_BIT (4)
#define INTERRUPT_IV_BIT (7)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
