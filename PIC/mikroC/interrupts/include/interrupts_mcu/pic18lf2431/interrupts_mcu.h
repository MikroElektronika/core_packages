/****************************************************************************
**
** Copyright (C) 2023 MikroElektronika d.o.o.
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
* @brief pic18lf2431 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_TMR1 = 0;
static const int INTERRUPTS_TMR2 = 1;
static const int INTERRUPTS_CCP1 = 2;
static const int INTERRUPTS_SSP = 3;
static const int INTERRUPTS_TB = 4;
static const int INTERRUPTS_RC1 = 5;
static const int INTERRUPTS_AD = 6;
static const int INTERRUPTS_RC = 7;
static const int INTERRUPTS_TX1 = 8;
static const int INTERRUPTS_TX = 9;
static const int INTERRUPTS_CCP2 = 10;
static const int INTERRUPTS_LVD = 11;
static const int INTERRUPTS_EE = 12;
static const int INTERRUPTS_OSF = 13;
static const int INTERRUPTS_RXB0 = 14;
static const int INTERRUPTS_IC1 = 15;
static const int INTERRUPTS_IC2QE = 16;
static const int INTERRUPTS_IC3DR = 17;
static const int INTERRUPTS_PT = 18;
static const int INTERRUPTS_RXB1 = 19;
static const int INTERRUPTS_RXBN = 20;
static const int INTERRUPTS_TMR5 = 21;
static const int INTERRUPTS_TXB0 = 22;
static const int INTERRUPTS_TXB1 = 23;
static const int INTERRUPTS_TXB2 = 24;
static const int INTERRUPTS_TXBN = 25;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_TMR1_REGISTER (PIE1)
#define INTERRUPT_TMR2_REGISTER (PIE1)
#define INTERRUPT_CCP1_REGISTER (PIE1)
#define INTERRUPT_SSP_REGISTER (PIE1)
#define INTERRUPT_TB_REGISTER (PIE1)
#define INTERRUPT_RC1_REGISTER (PIE1)
#define INTERRUPT_AD_REGISTER (PIE1)
#define INTERRUPT_RC_REGISTER (PIE1)
#define INTERRUPT_TX1_REGISTER (PIE1)
#define INTERRUPT_TX_REGISTER (PIE1)
#define INTERRUPT_CCP2_REGISTER (PIE2)
#define INTERRUPT_LVD_REGISTER (PIE2)
#define INTERRUPT_EE_REGISTER (PIE2)
#define INTERRUPT_OSF_REGISTER (PIE2)
#define INTERRUPT_RXB0_REGISTER (PIE3)
#define INTERRUPT_IC1_REGISTER (PIE3)
#define INTERRUPT_IC2QE_REGISTER (PIE3)
#define INTERRUPT_IC3DR_REGISTER (PIE3)
#define INTERRUPT_PT_REGISTER (PIE3)
#define INTERRUPT_RXB1_REGISTER (PIE3)
#define INTERRUPT_RXBN_REGISTER (PIE3)
#define INTERRUPT_TMR5_REGISTER (PIE3)
#define INTERRUPT_TXB0_REGISTER (PIE3)
#define INTERRUPT_TXB1_REGISTER (PIE3)
#define INTERRUPT_TXB2_REGISTER (PIE3)
#define INTERRUPT_TXBN_REGISTER (PIE3)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_TMR1_BIT (0)
#define INTERRUPT_TMR2_BIT (1)
#define INTERRUPT_CCP1_BIT (2)
#define INTERRUPT_SSP_BIT (3)
#define INTERRUPT_TB_BIT (4)
#define INTERRUPT_RC1_BIT (5)
#define INTERRUPT_AD_BIT (6)
#define INTERRUPT_RC_BIT (5)
#define INTERRUPT_TX1_BIT (4)
#define INTERRUPT_TX_BIT (4)
#define INTERRUPT_CCP2_BIT (0)
#define INTERRUPT_LVD_BIT (2)
#define INTERRUPT_EE_BIT (4)
#define INTERRUPT_OSF_BIT (7)
#define INTERRUPT_RXB0_BIT (0)
#define INTERRUPT_IC1_BIT (1)
#define INTERRUPT_IC2QE_BIT (2)
#define INTERRUPT_IC3DR_BIT (3)
#define INTERRUPT_PT_BIT (4)
#define INTERRUPT_RXB1_BIT (1)
#define INTERRUPT_RXBN_BIT (1)
#define INTERRUPT_TMR5_BIT (0)
#define INTERRUPT_TXB0_BIT (2)
#define INTERRUPT_TXB1_BIT (3)
#define INTERRUPT_TXB2_BIT (4)
#define INTERRUPT_TXBN_BIT (4)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
