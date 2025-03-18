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
* @brief pic18f66k22 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_CMP1 = 0;
static const int INTERRUPTS_CMP2 = 1;
static const int INTERRUPTS_CMP3 = 2;
static const int INTERRUPTS_EE = 3;
static const int INTERRUPTS_TMR1 = 4;
static const int INTERRUPTS_TMR2 = 5;
static const int INTERRUPTS_TMR1G = 6;
static const int INTERRUPTS_SSP1 = 7;
static const int INTERRUPTS_TX1 = 8;
static const int INTERRUPTS_RC1 = 9;
static const int INTERRUPTS_AD = 10;
static const int INTERRUPTS_PSP = 11;
static const int INTERRUPTS_SSP = 12;
static const int INTERRUPTS_TX = 13;
static const int INTERRUPTS_RC = 14;
static const int INTERRUPTS_TMR3G = 15;
static const int INTERRUPTS_TMR3 = 16;
static const int INTERRUPTS_HLVD = 17;
static const int INTERRUPTS_BCL1 = 18;
static const int INTERRUPTS_BCL2 = 19;
static const int INTERRUPTS_SSP2 = 20;
static const int INTERRUPTS_OSCF = 21;
static const int INTERRUPTS_LVD = 22;
static const int INTERRUPTS_BCL = 23;
static const int INTERRUPTS_RTCC = 24;
static const int INTERRUPTS_CCP1 = 25;
static const int INTERRUPTS_CCP2 = 26;
static const int INTERRUPTS_CTMU = 27;
static const int INTERRUPTS_TX2 = 28;
static const int INTERRUPTS_RC2 = 29;
static const int INTERRUPTS_TMR5G = 30;
static const int INTERRUPTS_CCP3 = 31;
static const int INTERRUPTS_CCP4 = 32;
static const int INTERRUPTS_CCP5 = 33;
static const int INTERRUPTS_CCP6 = 34;
static const int INTERRUPTS_CCP7 = 35;
static const int INTERRUPTS_CCP8 = 36;
static const int INTERRUPTS_CCP9 = 37;
static const int INTERRUPTS_CCP10 = 38;
static const int INTERRUPTS_TMR4 = 39;
static const int INTERRUPTS_TMR5 = 40;
static const int INTERRUPTS_TMR6 = 41;
static const int INTERRUPTS_TMR7 = 42;
static const int INTERRUPTS_TMR8 = 43;
static const int INTERRUPTS_TMR10 = 44;
static const int INTERRUPTS_TMR12 = 45;
static const int INTERRUPTS_TMR7G = 46;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_CMP1_REGISTER (PIE6)
#define INTERRUPT_CMP2_REGISTER (PIE6)
#define INTERRUPT_CMP3_REGISTER (PIE6)
#define INTERRUPT_EE_REGISTER (PIE6)
#define INTERRUPT_TMR1_REGISTER (PIE1)
#define INTERRUPT_TMR2_REGISTER (PIE1)
#define INTERRUPT_TMR1G_REGISTER (PIE1)
#define INTERRUPT_SSP1_REGISTER (PIE1)
#define INTERRUPT_TX1_REGISTER (PIE1)
#define INTERRUPT_RC1_REGISTER (PIE1)
#define INTERRUPT_AD_REGISTER (PIE1)
#define INTERRUPT_PSP_REGISTER (PIE1)
#define INTERRUPT_SSP_REGISTER (PIE1)
#define INTERRUPT_TX_REGISTER (PIE1)
#define INTERRUPT_RC_REGISTER (PIE1)
#define INTERRUPT_TMR3G_REGISTER (PIE2)
#define INTERRUPT_TMR3_REGISTER (PIE2)
#define INTERRUPT_HLVD_REGISTER (PIE2)
#define INTERRUPT_BCL1_REGISTER (PIE2)
#define INTERRUPT_BCL2_REGISTER (PIE2)
#define INTERRUPT_SSP2_REGISTER (PIE2)
#define INTERRUPT_OSCF_REGISTER (PIE2)
#define INTERRUPT_LVD_REGISTER (PIE2)
#define INTERRUPT_BCL_REGISTER (PIE2)
#define INTERRUPT_RTCC_REGISTER (PIE3)
#define INTERRUPT_CCP1_REGISTER (PIE3)
#define INTERRUPT_CCP2_REGISTER (PIE3)
#define INTERRUPT_CTMU_REGISTER (PIE3)
#define INTERRUPT_TX2_REGISTER (PIE3)
#define INTERRUPT_RC2_REGISTER (PIE3)
#define INTERRUPT_TMR5G_REGISTER (PIE3)
#define INTERRUPT_CCP3_REGISTER (PIE4)
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
#define INTERRUPT_TMR7_REGISTER (PIE5)
#define INTERRUPT_TMR8_REGISTER (PIE5)
#define INTERRUPT_TMR10_REGISTER (PIE5)
#define INTERRUPT_TMR12_REGISTER (PIE5)
#define INTERRUPT_TMR7G_REGISTER (PIE5)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_CMP1_BIT (0)
#define INTERRUPT_CMP2_BIT (1)
#define INTERRUPT_CMP3_BIT (2)
#define INTERRUPT_EE_BIT (4)
#define INTERRUPT_TMR1_BIT (0)
#define INTERRUPT_TMR2_BIT (1)
#define INTERRUPT_TMR1G_BIT (2)
#define INTERRUPT_SSP1_BIT (3)
#define INTERRUPT_TX1_BIT (4)
#define INTERRUPT_RC1_BIT (5)
#define INTERRUPT_AD_BIT (6)
#define INTERRUPT_PSP_BIT (7)
#define INTERRUPT_SSP_BIT (3)
#define INTERRUPT_TX_BIT (4)
#define INTERRUPT_RC_BIT (5)
#define INTERRUPT_TMR3G_BIT (0)
#define INTERRUPT_TMR3_BIT (1)
#define INTERRUPT_HLVD_BIT (2)
#define INTERRUPT_BCL1_BIT (3)
#define INTERRUPT_BCL2_BIT (4)
#define INTERRUPT_SSP2_BIT (5)
#define INTERRUPT_OSCF_BIT (7)
#define INTERRUPT_LVD_BIT (2)
#define INTERRUPT_BCL_BIT (3)
#define INTERRUPT_RTCC_BIT (0)
#define INTERRUPT_CCP1_BIT (1)
#define INTERRUPT_CCP2_BIT (2)
#define INTERRUPT_CTMU_BIT (3)
#define INTERRUPT_TX2_BIT (4)
#define INTERRUPT_RC2_BIT (5)
#define INTERRUPT_TMR5G_BIT (7)
#define INTERRUPT_CCP3_BIT (0)
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
#define INTERRUPT_TMR7_BIT (3)
#define INTERRUPT_TMR8_BIT (4)
#define INTERRUPT_TMR10_BIT (5)
#define INTERRUPT_TMR12_BIT (6)
#define INTERRUPT_TMR7G_BIT (7)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
