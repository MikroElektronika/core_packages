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
* @brief pic18f25k80 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_RXB0IEPI = 0;
static const int INTERRUPTS_RXB1IEPI = 1;
static const int INTERRUPTS_TXB0IEPI = 2;
static const int INTERRUPTS_TXB1IEPI = 3;
static const int INTERRUPTS_TXB2IEPI = 4;
static const int INTERRUPTS_ERR = 5;
static const int INTERRUPTS_WAK = 6;
static const int INTERRUPTS_IRX = 7;
static const int INTERRUPTS_FIFOWM = 8;
static const int INTERRUPTS_RXBn = 9;
static const int INTERRUPTS_TXBn = 10;
static const int INTERRUPTS_TMR1 = 11;
static const int INTERRUPTS_TMR2 = 12;
static const int INTERRUPTS_TMR1G = 13;
static const int INTERRUPTS_SSP = 14;
static const int INTERRUPTS_TX1 = 15;
static const int INTERRUPTS_RC1 = 16;
static const int INTERRUPTS_AD = 17;
static const int INTERRUPTS_TX = 18;
static const int INTERRUPTS_RC = 19;
static const int INTERRUPTS_TMR3G = 20;
static const int INTERRUPTS_TMR3 = 21;
static const int INTERRUPTS_HLVD = 22;
static const int INTERRUPTS_BCL = 23;
static const int INTERRUPTS_OSCF = 24;
static const int INTERRUPTS_LVD = 25;
static const int INTERRUPTS_CCP1 = 26;
static const int INTERRUPTS_CCP2 = 27;
static const int INTERRUPTS_CTMU = 28;
static const int INTERRUPTS_TX2 = 29;
static const int INTERRUPTS_RC2 = 30;
static const int INTERRUPTS_CCP3 = 31;
static const int INTERRUPTS_CCP4 = 32;
static const int INTERRUPTS_CCP5 = 33;
static const int INTERRUPTS_CMP1 = 34;
static const int INTERRUPTS_CMP2 = 35;
static const int INTERRUPTS_EE = 36;
static const int INTERRUPTS_TMR4 = 37;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_RXB0IEPI_REGISTER (PIE5)
#define INTERRUPT_RXB1IEPI_REGISTER (PIE5)
#define INTERRUPT_TXB0IEPI_REGISTER (PIE5)
#define INTERRUPT_TXB1IEPI_REGISTER (PIE5)
#define INTERRUPT_TXB2IEPI_REGISTER (PIE5)
#define INTERRUPT_ERR_REGISTER (PIE5)
#define INTERRUPT_WAK_REGISTER (PIE5)
#define INTERRUPT_IRX_REGISTER (PIE5)
#define INTERRUPT_FIFOWM_REGISTER (PIE5)
#define INTERRUPT_RXBn_REGISTER (PIE5)
#define INTERRUPT_TXBn_REGISTER (PIE5)
#define INTERRUPT_TMR1_REGISTER (PIE1)
#define INTERRUPT_TMR2_REGISTER (PIE1)
#define INTERRUPT_TMR1G_REGISTER (PIE1)
#define INTERRUPT_SSP_REGISTER (PIE1)
#define INTERRUPT_TX1_REGISTER (PIE1)
#define INTERRUPT_RC1_REGISTER (PIE1)
#define INTERRUPT_AD_REGISTER (PIE1)
#define INTERRUPT_TX_REGISTER (PIE1)
#define INTERRUPT_RC_REGISTER (PIE1)
#define INTERRUPT_TMR3G_REGISTER (PIE2)
#define INTERRUPT_TMR3_REGISTER (PIE2)
#define INTERRUPT_HLVD_REGISTER (PIE2)
#define INTERRUPT_BCL_REGISTER (PIE2)
#define INTERRUPT_OSCF_REGISTER (PIE2)
#define INTERRUPT_LVD_REGISTER (PIE2)
#define INTERRUPT_CCP1_REGISTER (PIE3)
#define INTERRUPT_CCP2_REGISTER (PIE3)
#define INTERRUPT_CTMU_REGISTER (PIE3)
#define INTERRUPT_TX2_REGISTER (PIE3)
#define INTERRUPT_RC2_REGISTER (PIE3)
#define INTERRUPT_CCP3_REGISTER (PIE4)
#define INTERRUPT_CCP4_REGISTER (PIE4)
#define INTERRUPT_CCP5_REGISTER (PIE4)
#define INTERRUPT_CMP1_REGISTER (PIE4)
#define INTERRUPT_CMP2_REGISTER (PIE4)
#define INTERRUPT_EE_REGISTER (PIE4)
#define INTERRUPT_TMR4_REGISTER (PIE4)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_RXB0IEPI_BIT (0)
#define INTERRUPT_RXB1IEPI_BIT (1)
#define INTERRUPT_TXB0IEPI_BIT (2)
#define INTERRUPT_TXB1IEPI_BIT (3)
#define INTERRUPT_TXB2IEPI_BIT (4)
#define INTERRUPT_ERR_BIT (5)
#define INTERRUPT_WAK_BIT (6)
#define INTERRUPT_IRX_BIT (7)
#define INTERRUPT_FIFOWM_BIT (0)
#define INTERRUPT_RXBn_BIT (1)
#define INTERRUPT_TXBn_BIT (4)
#define INTERRUPT_TMR1_BIT (0)
#define INTERRUPT_TMR2_BIT (1)
#define INTERRUPT_TMR1G_BIT (2)
#define INTERRUPT_SSP_BIT (3)
#define INTERRUPT_TX1_BIT (4)
#define INTERRUPT_RC1_BIT (5)
#define INTERRUPT_AD_BIT (6)
#define INTERRUPT_TX_BIT (4)
#define INTERRUPT_RC_BIT (5)
#define INTERRUPT_TMR3G_BIT (0)
#define INTERRUPT_TMR3_BIT (1)
#define INTERRUPT_HLVD_BIT (2)
#define INTERRUPT_BCL_BIT (3)
#define INTERRUPT_OSCF_BIT (7)
#define INTERRUPT_LVD_BIT (2)
#define INTERRUPT_CCP1_BIT (1)
#define INTERRUPT_CCP2_BIT (2)
#define INTERRUPT_CTMU_BIT (3)
#define INTERRUPT_TX2_BIT (4)
#define INTERRUPT_RC2_BIT (5)
#define INTERRUPT_CCP3_BIT (0)
#define INTERRUPT_CCP4_BIT (1)
#define INTERRUPT_CCP5_BIT (2)
#define INTERRUPT_CMP1_BIT (4)
#define INTERRUPT_CMP2_BIT (5)
#define INTERRUPT_EE_BIT (6)
#define INTERRUPT_TMR4_BIT (7)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
