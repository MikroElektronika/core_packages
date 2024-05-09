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
* @brief pic18f67k40 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_INT0 = 0;
static const int INTERRUPTS_INT1 = 1;
static const int INTERRUPTS_INT2 = 2;
static const int INTERRUPTS_INT3 = 3;
static const int INTERRUPTS_IOC = 4;
static const int INTERRUPTS_TMR0 = 5;
static const int INTERRUPTS_AD = 6;
static const int INTERRUPTS_ADT = 7;
static const int INTERRUPTS_CSW = 8;
static const int INTERRUPTS_OSCF = 9;
static const int INTERRUPTS_PSP = 10;
static const int INTERRUPTS_C1 = 11;
static const int INTERRUPTS_C2 = 12;
static const int INTERRUPTS_C3 = 13;
static const int INTERRUPTS_CM = 14;
static const int INTERRUPTS_HLVD = 15;
static const int INTERRUPTS_ZCD = 16;
static const int INTERRUPTS_RXB0 = 17;
static const int INTERRUPTS_BCL1 = 18;
static const int INTERRUPTS_SSP2 = 19;
static const int INTERRUPTS_BCL2 = 20;
static const int INTERRUPTS_TX1 = 21;
static const int INTERRUPTS_RC1 = 22;
static const int INTERRUPTS_TX2 = 23;
static const int INTERRUPTS_RC2 = 24;
static const int INTERRUPTS_RXB1 = 25;
static const int INTERRUPTS_RXBN = 26;
static const int INTERRUPTS_SSP1 = 27;
static const int INTERRUPTS_TXB0 = 28;
static const int INTERRUPTS_TXB1 = 29;
static const int INTERRUPTS_TXB2 = 30;
static const int INTERRUPTS_TXBN = 31;
static const int INTERRUPTS_TX3 = 32;
static const int INTERRUPTS_RC3 = 33;
static const int INTERRUPTS_TX4 = 34;
static const int INTERRUPTS_RC4 = 35;
static const int INTERRUPTS_TX5 = 36;
static const int INTERRUPTS_RC5 = 37;
static const int INTERRUPTS_TMR1 = 38;
static const int INTERRUPTS_TMR2 = 39;
static const int INTERRUPTS_TMR3 = 40;
static const int INTERRUPTS_TMR4 = 41;
static const int INTERRUPTS_TMR5 = 42;
static const int INTERRUPTS_TMR6 = 43;
static const int INTERRUPTS_TMR7 = 44;
static const int INTERRUPTS_TMR8 = 45;
static const int INTERRUPTS_TMR1G = 46;
static const int INTERRUPTS_TMR3G = 47;
static const int INTERRUPTS_TMR5G = 48;
static const int INTERRUPTS_TMR7G = 49;
static const int INTERRUPTS_CCP1 = 50;
static const int INTERRUPTS_CCP2 = 51;
static const int INTERRUPTS_CCP3 = 52;
static const int INTERRUPTS_CCP4 = 53;
static const int INTERRUPTS_CCP5 = 54;
static const int INTERRUPTS_CWG1 = 55;
static const int INTERRUPTS_NVM = 56;
static const int INTERRUPTS_CRC = 57;
static const int INTERRUPTS_SCAN = 58;
static const int INTERRUPTS_SMT1 = 59;
static const int INTERRUPTS_SMT1PRA = 60;
static const int INTERRUPTS_SMT1PWA = 61;
static const int INTERRUPTS_SMT2 = 62;
static const int INTERRUPTS_SMT2PRA = 63;
static const int INTERRUPTS_SMT2PWA = 64;
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
