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
* @brief pic16f19197 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_IN = 0;
static const int INTERRUPTS_IOC = 1;
static const int INTERRUPTS_TMR0 = 2;
static const int INTERRUPTS_AD = 3;
static const int INTERRUPTS_ADT = 4;
static const int INTERRUPTS_CSW = 5;
static const int INTERRUPTS_OSF = 6;
static const int INTERRUPTS_C1 = 7;
static const int INTERRUPTS_C2 = 8;
static const int INTERRUPTS_ZCD = 9;
static const int INTERRUPTS_SSP1 = 10;
static const int INTERRUPTS_BCL1 = 11;
static const int INTERRUPTS_TX1 = 12;
static const int INTERRUPTS_RC1 = 13;
static const int INTERRUPTS_TX2 = 14;
static const int INTERRUPTS_RC2 = 15;
static const int INTERRUPTS_TMR1 = 16;
static const int INTERRUPTS_TMR2 = 17;
static const int INTERRUPTS_TMR4 = 18;
static const int INTERRUPTS_TMR1G = 19;
static const int INTERRUPTS_CLC1 = 20;
static const int INTERRUPTS_CLC2 = 21;
static const int INTERRUPTS_CLC3 = 22;
static const int INTERRUPTS_CLC4 = 23;
static const int INTERRUPTS_CCP1 = 24;
static const int INTERRUPTS_CCP2 = 25;
static const int INTERRUPTS_CR = 26;
static const int INTERRUPTS_CWG1 = 27;
static const int INTERRUPTS_NVM = 28;
static const int INTERRUPTS_SMT1 = 29;
static const int INTERRUPTS_SMT1PRA = 30;
static const int INTERRUPTS_SMT1PWA = 31;
static const int INTERRUPTS_RTCC = 32;
static const int INTERRUPTS_LCD = 33;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_IN_REGISTER (PIE0)
#define INTERRUPT_IOC_REGISTER (PIE0)
#define INTERRUPT_TMR0_REGISTER (PIE0)
#define INTERRUPT_AD_REGISTER (PIE1)
#define INTERRUPT_ADT_REGISTER (PIE1)
#define INTERRUPT_CSW_REGISTER (PIE1)
#define INTERRUPT_OSF_REGISTER (PIE1)
#define INTERRUPT_C1_REGISTER (PIE2)
#define INTERRUPT_C2_REGISTER (PIE2)
#define INTERRUPT_ZCD_REGISTER (PIE2)
#define INTERRUPT_SSP1_REGISTER (PIE3)
#define INTERRUPT_BCL1_REGISTER (PIE3)
#define INTERRUPT_TX1_REGISTER (PIE3)
#define INTERRUPT_RC1_REGISTER (PIE3)
#define INTERRUPT_TX2_REGISTER (PIE3)
#define INTERRUPT_RC2_REGISTER (PIE3)
#define INTERRUPT_TMR1_REGISTER (PIE4)
#define INTERRUPT_TMR2_REGISTER (PIE4)
#define INTERRUPT_TMR4_REGISTER (PIE4)
#define INTERRUPT_TMR1G_REGISTER (PIE5)
#define INTERRUPT_CLC1_REGISTER (PIE5)
#define INTERRUPT_CLC2_REGISTER (PIE5)
#define INTERRUPT_CLC3_REGISTER (PIE5)
#define INTERRUPT_CLC4_REGISTER (PIE5)
#define INTERRUPT_CCP1_REGISTER (PIE6)
#define INTERRUPT_CCP2_REGISTER (PIE6)
#define INTERRUPT_CR_REGISTER (PIE6)
#define INTERRUPT_CWG1_REGISTER (PIE7)
#define INTERRUPT_NVM_REGISTER (PIE7)
#define INTERRUPT_SMT1_REGISTER (PIE8)
#define INTERRUPT_SMT1PRA_REGISTER (PIE8)
#define INTERRUPT_SMT1PWA_REGISTER (PIE8)
#define INTERRUPT_RTCC_REGISTER (PIE8)
#define INTERRUPT_LCD_REGISTER (PIE8)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_IN_BIT (0)
#define INTERRUPT_IOC_BIT (4)
#define INTERRUPT_TMR0_BIT (5)
#define INTERRUPT_AD_BIT (0)
#define INTERRUPT_ADT_BIT (1)
#define INTERRUPT_CSW_BIT (6)
#define INTERRUPT_OSF_BIT (7)
#define INTERRUPT_C1_BIT (0)
#define INTERRUPT_C2_BIT (1)
#define INTERRUPT_ZCD_BIT (6)
#define INTERRUPT_SSP1_BIT (0)
#define INTERRUPT_BCL1_BIT (1)
#define INTERRUPT_TX1_BIT (4)
#define INTERRUPT_RC1_BIT (5)
#define INTERRUPT_TX2_BIT (6)
#define INTERRUPT_RC2_BIT (7)
#define INTERRUPT_TMR1_BIT (0)
#define INTERRUPT_TMR2_BIT (1)
#define INTERRUPT_TMR4_BIT (3)
#define INTERRUPT_TMR1G_BIT (0)
#define INTERRUPT_CLC1_BIT (4)
#define INTERRUPT_CLC2_BIT (5)
#define INTERRUPT_CLC3_BIT (6)
#define INTERRUPT_CLC4_BIT (7)
#define INTERRUPT_CCP1_BIT (0)
#define INTERRUPT_CCP2_BIT (1)
#define INTERRUPT_CR_BIT (7)
#define INTERRUPT_CWG1_BIT (0)
#define INTERRUPT_NVM_BIT (5)
#define INTERRUPT_SMT1_BIT (0)
#define INTERRUPT_SMT1PRA_BIT (1)
#define INTERRUPT_SMT1PWA_BIT (2)
#define INTERRUPT_RTCC_BIT (6)
#define INTERRUPT_LCD_BIT (7)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
