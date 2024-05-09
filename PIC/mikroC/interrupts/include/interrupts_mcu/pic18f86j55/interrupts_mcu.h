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
* @brief pic18f86j55 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_TMR1 = 0;
static const int INTERRUPTS_TMR2 = 1;
static const int INTERRUPTS_CCP1 = 2;
static const int INTERRUPTS_SSP1 = 3;
static const int INTERRUPTS_TX1 = 4;
static const int INTERRUPTS_RC1 = 5;
static const int INTERRUPTS_AD = 6;
static const int INTERRUPTS_PMP = 7;
static const int INTERRUPTS_SSP = 8;
static const int INTERRUPTS_TX = 9;
static const int INTERRUPTS_RC = 10;
static const int INTERRUPTS_CCP2 = 11;
static const int INTERRUPTS_TMR3 = 12;
static const int INTERRUPTS_LVD = 13;
static const int INTERRUPTS_BCL1 = 14;
static const int INTERRUPTS_USB = 15;
static const int INTERRUPTS_CM1 = 16;
static const int INTERRUPTS_CM2 = 17;
static const int INTERRUPTS_OSCF = 18;
static const int INTERRUPTS_BCL = 19;
static const int INTERRUPTS_CCP3 = 20;
static const int INTERRUPTS_CCP4 = 21;
static const int INTERRUPTS_CCP5 = 22;
static const int INTERRUPTS_TMR4 = 23;
static const int INTERRUPTS_TX2 = 24;
static const int INTERRUPTS_RC2 = 25;
static const int INTERRUPTS_BCL2 = 26;
static const int INTERRUPTS_SSP2 = 27;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_TMR1_REGISTER (PIE1)
#define INTERRUPT_TMR2_REGISTER (PIE1)
#define INTERRUPT_CCP1_REGISTER (PIE1)
#define INTERRUPT_SSP1_REGISTER (PIE1)
#define INTERRUPT_TX1_REGISTER (PIE1)
#define INTERRUPT_RC1_REGISTER (PIE1)
#define INTERRUPT_AD_REGISTER (PIE1)
#define INTERRUPT_PMP_REGISTER (PIE1)
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
#define INTERRUPT_BCL_REGISTER (PIE2)
#define INTERRUPT_CCP3_REGISTER (PIE3)
#define INTERRUPT_CCP4_REGISTER (PIE3)
#define INTERRUPT_CCP5_REGISTER (PIE3)
#define INTERRUPT_TMR4_REGISTER (PIE3)
#define INTERRUPT_TX2_REGISTER (PIE3)
#define INTERRUPT_RC2_REGISTER (PIE3)
#define INTERRUPT_BCL2_REGISTER (PIE3)
#define INTERRUPT_SSP2_REGISTER (PIE3)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_TMR1_BIT (0)
#define INTERRUPT_TMR2_BIT (1)
#define INTERRUPT_CCP1_BIT (2)
#define INTERRUPT_SSP1_BIT (3)
#define INTERRUPT_TX1_BIT (4)
#define INTERRUPT_RC1_BIT (5)
#define INTERRUPT_AD_BIT (6)
#define INTERRUPT_PMP_BIT (7)
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
#define INTERRUPT_BCL_BIT (3)
#define INTERRUPT_CCP3_BIT (0)
#define INTERRUPT_CCP4_BIT (1)
#define INTERRUPT_CCP5_BIT (2)
#define INTERRUPT_TMR4_BIT (3)
#define INTERRUPT_TX2_BIT (4)
#define INTERRUPT_RC2_BIT (5)
#define INTERRUPT_BCL2_BIT (6)
#define INTERRUPT_SSP2_BIT (7)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
