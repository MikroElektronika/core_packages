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
* @brief pic18lf24k40 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_INT0 = 0;
static const int INTERRUPTS_INT1 = 1;
static const int INTERRUPTS_INT2 = 2;
static const int INTERRUPTS_IOC = 3;
static const int INTERRUPTS_TMR0 = 4;
static const int INTERRUPTS_AD = 5;
static const int INTERRUPTS_ADT = 6;
static const int INTERRUPTS_CSW = 7;
static const int INTERRUPTS_OSCF = 8;
static const int INTERRUPTS_PSP = 9;
static const int INTERRUPTS_C1 = 10;
static const int INTERRUPTS_C2 = 11;
static const int INTERRUPTS_CM = 12;
static const int INTERRUPTS_HLVD = 13;
static const int INTERRUPTS_ZCD = 14;
static const int INTERRUPTS_RXB0 = 15;
static const int INTERRUPTS_BCL1 = 16;
static const int INTERRUPTS_TX1 = 17;
static const int INTERRUPTS_RC1 = 18;
static const int INTERRUPTS_BCL = 19;
static const int INTERRUPTS_RC = 20;
static const int INTERRUPTS_RXB1 = 21;
static const int INTERRUPTS_RXBN = 22;
static const int INTERRUPTS_SSP1 = 23;
static const int INTERRUPTS_SSP = 24;
static const int INTERRUPTS_TXB2 = 25;
static const int INTERRUPTS_TXBN = 26;
static const int INTERRUPTS_TX = 27;
static const int INTERRUPTS_TMR1 = 28;
static const int INTERRUPTS_TMR2 = 29;
static const int INTERRUPTS_TMR3 = 30;
static const int INTERRUPTS_TMR4 = 31;
static const int INTERRUPTS_TMR5 = 32;
static const int INTERRUPTS_TMR6 = 33;
static const int INTERRUPTS_TMR1G = 34;
static const int INTERRUPTS_TMR3G = 35;
static const int INTERRUPTS_TMR5G = 36;
static const int INTERRUPTS_CCP1 = 37;
static const int INTERRUPTS_CCP2 = 38;
static const int INTERRUPTS_CWG1 = 39;
static const int INTERRUPTS_NVM = 40;
static const int INTERRUPTS_CRC = 41;
static const int INTERRUPTS_SCAN = 42;
static const int INTERRUPTS_CWG = 43;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_INT0_REGISTER (PIE0)
#define INTERRUPT_INT1_REGISTER (PIE0)
#define INTERRUPT_INT2_REGISTER (PIE0)
#define INTERRUPT_IOC_REGISTER (PIE0)
#define INTERRUPT_TMR0_REGISTER (PIE0)
#define INTERRUPT_AD_REGISTER (PIE1)
#define INTERRUPT_ADT_REGISTER (PIE1)
#define INTERRUPT_CSW_REGISTER (PIE1)
#define INTERRUPT_OSCF_REGISTER (PIE1)
#define INTERRUPT_PSP_REGISTER (PIE1)
#define INTERRUPT_C1_REGISTER (PIE2)
#define INTERRUPT_C2_REGISTER (PIE2)
#define INTERRUPT_CM_REGISTER (PIE2)
#define INTERRUPT_HLVD_REGISTER (PIE2)
#define INTERRUPT_ZCD_REGISTER (PIE2)
#define INTERRUPT_RXB0_REGISTER (PIE3)
#define INTERRUPT_BCL1_REGISTER (PIE3)
#define INTERRUPT_TX1_REGISTER (PIE3)
#define INTERRUPT_RC1_REGISTER (PIE3)
#define INTERRUPT_BCL_REGISTER (PIE3)
#define INTERRUPT_RC_REGISTER (PIE3)
#define INTERRUPT_RXB1_REGISTER (PIE3)
#define INTERRUPT_RXBN_REGISTER (PIE3)
#define INTERRUPT_SSP1_REGISTER (PIE3)
#define INTERRUPT_SSP_REGISTER (PIE3)
#define INTERRUPT_TXB2_REGISTER (PIE3)
#define INTERRUPT_TXBN_REGISTER (PIE3)
#define INTERRUPT_TX_REGISTER (PIE3)
#define INTERRUPT_TMR1_REGISTER (PIE4)
#define INTERRUPT_TMR2_REGISTER (PIE4)
#define INTERRUPT_TMR3_REGISTER (PIE4)
#define INTERRUPT_TMR4_REGISTER (PIE4)
#define INTERRUPT_TMR5_REGISTER (PIE4)
#define INTERRUPT_TMR6_REGISTER (PIE4)
#define INTERRUPT_TMR1G_REGISTER (PIE5)
#define INTERRUPT_TMR3G_REGISTER (PIE5)
#define INTERRUPT_TMR5G_REGISTER (PIE5)
#define INTERRUPT_CCP1_REGISTER (PIE6)
#define INTERRUPT_CCP2_REGISTER (PIE6)
#define INTERRUPT_CWG1_REGISTER (PIE7)
#define INTERRUPT_NVM_REGISTER (PIE7)
#define INTERRUPT_CRC_REGISTER (PIE7)
#define INTERRUPT_SCAN_REGISTER (PIE7)
#define INTERRUPT_CWG_REGISTER (PIE7)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_INT0_BIT (0)
#define INTERRUPT_INT1_BIT (1)
#define INTERRUPT_INT2_BIT (2)
#define INTERRUPT_IOC_BIT (4)
#define INTERRUPT_TMR0_BIT (5)
#define INTERRUPT_AD_BIT (0)
#define INTERRUPT_ADT_BIT (1)
#define INTERRUPT_CSW_BIT (6)
#define INTERRUPT_OSCF_BIT (7)
#define INTERRUPT_PSP_BIT (7)
#define INTERRUPT_C1_BIT (0)
#define INTERRUPT_C2_BIT (1)
#define INTERRUPT_CM_BIT (6)
#define INTERRUPT_HLVD_BIT (7)
#define INTERRUPT_ZCD_BIT (6)
#define INTERRUPT_RXB0_BIT (0)
#define INTERRUPT_BCL1_BIT (1)
#define INTERRUPT_TX1_BIT (4)
#define INTERRUPT_RC1_BIT (5)
#define INTERRUPT_BCL_BIT (1)
#define INTERRUPT_RC_BIT (5)
#define INTERRUPT_RXB1_BIT (1)
#define INTERRUPT_RXBN_BIT (1)
#define INTERRUPT_SSP1_BIT (0)
#define INTERRUPT_SSP_BIT (0)
#define INTERRUPT_TXB2_BIT (4)
#define INTERRUPT_TXBN_BIT (4)
#define INTERRUPT_TX_BIT (4)
#define INTERRUPT_TMR1_BIT (0)
#define INTERRUPT_TMR2_BIT (1)
#define INTERRUPT_TMR3_BIT (2)
#define INTERRUPT_TMR4_BIT (3)
#define INTERRUPT_TMR5_BIT (4)
#define INTERRUPT_TMR6_BIT (5)
#define INTERRUPT_TMR1G_BIT (0)
#define INTERRUPT_TMR3G_BIT (1)
#define INTERRUPT_TMR5G_BIT (2)
#define INTERRUPT_CCP1_BIT (0)
#define INTERRUPT_CCP2_BIT (1)
#define INTERRUPT_CWG1_BIT (0)
#define INTERRUPT_NVM_BIT (5)
#define INTERRUPT_CRC_BIT (6)
#define INTERRUPT_SCAN_BIT (7)
#define INTERRUPT_CWG_BIT (0)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
