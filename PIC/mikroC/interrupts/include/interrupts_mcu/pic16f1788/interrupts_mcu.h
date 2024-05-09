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
* @brief pic16f1788 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_TMR1 = 0;
static const int INTERRUPTS_TMR2 = 1;
static const int INTERRUPTS_CCP1 = 2;
static const int INTERRUPTS_SSP1 = 3;
static const int INTERRUPTS_TX = 4;
static const int INTERRUPTS_RC = 5;
static const int INTERRUPTS_AD = 6;
static const int INTERRUPTS_TMR1G = 7;
static const int INTERRUPTS_CCP2 = 8;
static const int INTERRUPTS_C3 = 9;
static const int INTERRUPTS_C4 = 10;
static const int INTERRUPTS_BCL1 = 11;
static const int INTERRUPTS_EE = 12;
static const int INTERRUPTS_C1 = 13;
static const int INTERRUPTS_C2 = 14;
static const int INTERRUPTS_OSF = 15;
static const int INTERRUPTS_CCP3 = 16;
static const int INTERRUPTS_PSMC1S = 17;
static const int INTERRUPTS_PSMC2S = 18;
static const int INTERRUPTS_PSMC3S = 19;
static const int INTERRUPTS_PSMC4S = 20;
static const int INTERRUPTS_PSMC1T = 21;
static const int INTERRUPTS_PSMC2T = 22;
static const int INTERRUPTS_PMSC3T = 23;
static const int INTERRUPTS_PSMC4T = 24;
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
#define INTERRUPT_CCP2_REGISTER (PIE2)
#define INTERRUPT_C3_REGISTER (PIE2)
#define INTERRUPT_C4_REGISTER (PIE2)
#define INTERRUPT_BCL1_REGISTER (PIE2)
#define INTERRUPT_EE_REGISTER (PIE2)
#define INTERRUPT_C1_REGISTER (PIE2)
#define INTERRUPT_C2_REGISTER (PIE2)
#define INTERRUPT_OSF_REGISTER (PIE2)
#define INTERRUPT_CCP3_REGISTER (PIE3)
#define INTERRUPT_PSMC1S_REGISTER (PIE4)
#define INTERRUPT_PSMC2S_REGISTER (PIE4)
#define INTERRUPT_PSMC3S_REGISTER (PIE4)
#define INTERRUPT_PSMC4S_REGISTER (PIE4)
#define INTERRUPT_PSMC1T_REGISTER (PIE4)
#define INTERRUPT_PSMC2T_REGISTER (PIE4)
#define INTERRUPT_PMSC3T_REGISTER (PIE4)
#define INTERRUPT_PSMC4T_REGISTER (PIE4)
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
#define INTERRUPT_CCP2_BIT (0)
#define INTERRUPT_C3_BIT (1)
#define INTERRUPT_C4_BIT (2)
#define INTERRUPT_BCL1_BIT (3)
#define INTERRUPT_EE_BIT (4)
#define INTERRUPT_C1_BIT (5)
#define INTERRUPT_C2_BIT (6)
#define INTERRUPT_OSF_BIT (7)
#define INTERRUPT_CCP3_BIT (4)
#define INTERRUPT_PSMC1S_BIT (0)
#define INTERRUPT_PSMC2S_BIT (1)
#define INTERRUPT_PSMC3S_BIT (2)
#define INTERRUPT_PSMC4S_BIT (3)
#define INTERRUPT_PSMC1T_BIT (4)
#define INTERRUPT_PSMC2T_BIT (5)
#define INTERRUPT_PMSC3T_BIT (6)
#define INTERRUPT_PSMC4T_BIT (7)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
