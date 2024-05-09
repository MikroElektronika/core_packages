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
* @brief pic18lf56k42 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_SW = 0;
static const int INTERRUPTS_HLVD = 1;
static const int INTERRUPTS_OSF = 2;
static const int INTERRUPTS_CSW = 3;
static const int INTERRUPTS_NVM = 4;
static const int INTERRUPTS_SCAN = 5;
static const int INTERRUPTS_CRC = 6;
static const int INTERRUPTS_IOC = 7;
static const int INTERRUPTS_INT0 = 8;
static const int INTERRUPTS_ZCD = 9;
static const int INTERRUPTS_AD = 10;
static const int INTERRUPTS_ADT = 11;
static const int INTERRUPTS_C1 = 12;
static const int INTERRUPTS_RC1 = 13;
static const int INTERRUPTS_SMT1PRA = 14;
static const int INTERRUPTS_PSP = 15;
static const int INTERRUPTS_SMT1 = 16;
static const int INTERRUPTS_SMT1PWA = 17;
static const int INTERRUPTS_TX1 = 18;
static const int INTERRUPTS_TX = 19;
static const int INTERRUPTS_DMA1SCNT = 20;
static const int INTERRUPTS_DMA1DCNT = 21;
static const int INTERRUPTS_DMA1OR = 22;
static const int INTERRUPTS_DMA1A = 23;
static const int INTERRUPTS_SPI1RX = 24;
static const int INTERRUPTS_SPI1TX = 25;
static const int INTERRUPTS_CM = 26;
static const int INTERRUPTS_I2C1RX = 27;
static const int INTERRUPTS_SPI1 = 28;
static const int INTERRUPTS_I2C1TX = 29;
static const int INTERRUPTS_I2C1 = 30;
static const int INTERRUPTS_I2C1E = 31;
static const int INTERRUPTS_TXB1 = 32;
static const int INTERRUPTS_TXB2 = 33;
static const int INTERRUPTS_U1E = 34;
static const int INTERRUPTS_U1 = 35;
static const int INTERRUPTS_TMR0 = 36;
static const int INTERRUPTS_RXB0 = 37;
static const int INTERRUPTS_RXB1 = 38;
static const int INTERRUPTS_RXBN = 39;
static const int INTERRUPTS_TXB0 = 40;
static const int INTERRUPTS_TXBN = 41;
static const int INTERRUPTS_U1RX = 42;
static const int INTERRUPTS_U1TX = 43;
static const int INTERRUPTS_TMR1 = 44;
static const int INTERRUPTS_TMR1G = 45;
static const int INTERRUPTS_TMR2 = 46;
static const int INTERRUPTS_CCP1 = 47;
static const int INTERRUPTS_NCO1 = 48;
static const int INTERRUPTS_CWG1 = 49;
static const int INTERRUPTS_CLC1 = 50;
static const int INTERRUPTS_INT1 = 51;
static const int INTERRUPTS_C2 = 52;
static const int INTERRUPTS_DMA2SCNT = 53;
static const int INTERRUPTS_DMA2DCNT = 54;
static const int INTERRUPTS_DMA2OR = 55;
static const int INTERRUPTS_DMA2A = 56;
static const int INTERRUPTS_I2C2RX = 57;
static const int INTERRUPTS_I2C2TX = 58;
static const int INTERRUPTS_I2C2 = 59;
static const int INTERRUPTS_I2C2E = 60;
static const int INTERRUPTS_U2RX = 61;
static const int INTERRUPTS_U2TX = 62;
static const int INTERRUPTS_U2E = 63;
static const int INTERRUPTS_U2 = 64;
static const int INTERRUPTS_TMR3 = 65;
static const int INTERRUPTS_TMR3G = 66;
static const int INTERRUPTS_TMR4 = 67;
static const int INTERRUPTS_CCP2 = 68;
static const int INTERRUPTS_CWG2 = 69;
static const int INTERRUPTS_CLC2 = 70;
static const int INTERRUPTS_INT2 = 71;
static const int INTERRUPTS_TMR5 = 72;
static const int INTERRUPTS_TMR5G = 73;
static const int INTERRUPTS_TMR6 = 74;
static const int INTERRUPTS_CCP3 = 75;
static const int INTERRUPTS_CWG3 = 76;
static const int INTERRUPTS_CLC3 = 77;
static const int INTERRUPTS_CCP4 = 78;
static const int INTERRUPTS_CLC4 = 79;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_SW_REGISTER (PIE0)
#define INTERRUPT_HLVD_REGISTER (PIE0)
#define INTERRUPT_OSF_REGISTER (PIE0)
#define INTERRUPT_CSW_REGISTER (PIE0)
#define INTERRUPT_NVM_REGISTER (PIE0)
#define INTERRUPT_SCAN_REGISTER (PIE0)
#define INTERRUPT_CRC_REGISTER (PIE0)
#define INTERRUPT_IOC_REGISTER (PIE0)
#define INTERRUPT_INT0_REGISTER (PIE1)
#define INTERRUPT_ZCD_REGISTER (PIE1)
#define INTERRUPT_AD_REGISTER (PIE1)
#define INTERRUPT_ADT_REGISTER (PIE1)
#define INTERRUPT_C1_REGISTER (PIE1)
#define INTERRUPT_RC1_REGISTER (PIE1)
#define INTERRUPT_SMT1PRA_REGISTER (PIE1)
#define INTERRUPT_PSP_REGISTER (PIE1)
#define INTERRUPT_SMT1_REGISTER (PIE1)
#define INTERRUPT_SMT1PWA_REGISTER (PIE1)
#define INTERRUPT_TX1_REGISTER (PIE1)
#define INTERRUPT_TX_REGISTER (PIE1)
#define INTERRUPT_DMA1SCNT_REGISTER (PIE2)
#define INTERRUPT_DMA1DCNT_REGISTER (PIE2)
#define INTERRUPT_DMA1OR_REGISTER (PIE2)
#define INTERRUPT_DMA1A_REGISTER (PIE2)
#define INTERRUPT_SPI1RX_REGISTER (PIE2)
#define INTERRUPT_SPI1TX_REGISTER (PIE2)
#define INTERRUPT_CM_REGISTER (PIE2)
#define INTERRUPT_I2C1RX_REGISTER (PIE2)
#define INTERRUPT_SPI1_REGISTER (PIE2)
#define INTERRUPT_I2C1TX_REGISTER (PIE3)
#define INTERRUPT_I2C1_REGISTER (PIE3)
#define INTERRUPT_I2C1E_REGISTER (PIE3)
#define INTERRUPT_TXB1_REGISTER (PIE3)
#define INTERRUPT_TXB2_REGISTER (PIE3)
#define INTERRUPT_U1E_REGISTER (PIE3)
#define INTERRUPT_U1_REGISTER (PIE3)
#define INTERRUPT_TMR0_REGISTER (PIE3)
#define INTERRUPT_RXB0_REGISTER (PIE3)
#define INTERRUPT_RXB1_REGISTER (PIE3)
#define INTERRUPT_RXBN_REGISTER (PIE3)
#define INTERRUPT_TXB0_REGISTER (PIE3)
#define INTERRUPT_TXBN_REGISTER (PIE3)
#define INTERRUPT_U1RX_REGISTER (PIE3)
#define INTERRUPT_U1TX_REGISTER (PIE3)
#define INTERRUPT_TMR1_REGISTER (PIE4)
#define INTERRUPT_TMR1G_REGISTER (PIE4)
#define INTERRUPT_TMR2_REGISTER (PIE4)
#define INTERRUPT_CCP1_REGISTER (PIE4)
#define INTERRUPT_NCO1_REGISTER (PIE4)
#define INTERRUPT_CWG1_REGISTER (PIE4)
#define INTERRUPT_CLC1_REGISTER (PIE4)
#define INTERRUPT_INT1_REGISTER (PIE5)
#define INTERRUPT_C2_REGISTER (PIE5)
#define INTERRUPT_DMA2SCNT_REGISTER (PIE5)
#define INTERRUPT_DMA2DCNT_REGISTER (PIE5)
#define INTERRUPT_DMA2OR_REGISTER (PIE5)
#define INTERRUPT_DMA2A_REGISTER (PIE5)
#define INTERRUPT_I2C2RX_REGISTER (PIE5)
#define INTERRUPT_I2C2TX_REGISTER (PIE5)
#define INTERRUPT_I2C2_REGISTER (PIE6)
#define INTERRUPT_I2C2E_REGISTER (PIE6)
#define INTERRUPT_U2RX_REGISTER (PIE6)
#define INTERRUPT_U2TX_REGISTER (PIE6)
#define INTERRUPT_U2E_REGISTER (PIE6)
#define INTERRUPT_U2_REGISTER (PIE6)
#define INTERRUPT_TMR3_REGISTER (PIE6)
#define INTERRUPT_TMR3G_REGISTER (PIE6)
#define INTERRUPT_TMR4_REGISTER (PIE7)
#define INTERRUPT_CCP2_REGISTER (PIE7)
#define INTERRUPT_CWG2_REGISTER (PIE7)
#define INTERRUPT_CLC2_REGISTER (PIE7)
#define INTERRUPT_INT2_REGISTER (PIE7)
#define INTERRUPT_TMR5_REGISTER (PIE8)
#define INTERRUPT_TMR5G_REGISTER (PIE8)
#define INTERRUPT_TMR6_REGISTER (PIE9)
#define INTERRUPT_CCP3_REGISTER (PIE9)
#define INTERRUPT_CWG3_REGISTER (PIE9)
#define INTERRUPT_CLC3_REGISTER (PIE9)
#define INTERRUPT_CCP4_REGISTER (PIE10)
#define INTERRUPT_CLC4_REGISTER (PIE10)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_SW_BIT (0)
#define INTERRUPT_HLVD_BIT (1)
#define INTERRUPT_OSF_BIT (2)
#define INTERRUPT_CSW_BIT (3)
#define INTERRUPT_NVM_BIT (4)
#define INTERRUPT_SCAN_BIT (5)
#define INTERRUPT_CRC_BIT (6)
#define INTERRUPT_IOC_BIT (7)
#define INTERRUPT_INT0_BIT (0)
#define INTERRUPT_ZCD_BIT (1)
#define INTERRUPT_AD_BIT (2)
#define INTERRUPT_ADT_BIT (3)
#define INTERRUPT_C1_BIT (4)
#define INTERRUPT_RC1_BIT (5)
#define INTERRUPT_SMT1PRA_BIT (6)
#define INTERRUPT_PSP_BIT (7)
#define INTERRUPT_SMT1_BIT (5)
#define INTERRUPT_SMT1PWA_BIT (7)
#define INTERRUPT_TX1_BIT (4)
#define INTERRUPT_TX_BIT (4)
#define INTERRUPT_DMA1SCNT_BIT (0)
#define INTERRUPT_DMA1DCNT_BIT (1)
#define INTERRUPT_DMA1OR_BIT (2)
#define INTERRUPT_DMA1A_BIT (3)
#define INTERRUPT_SPI1RX_BIT (4)
#define INTERRUPT_SPI1TX_BIT (5)
#define INTERRUPT_CM_BIT (6)
#define INTERRUPT_I2C1RX_BIT (7)
#define INTERRUPT_SPI1_BIT (6)
#define INTERRUPT_I2C1TX_BIT (0)
#define INTERRUPT_I2C1_BIT (1)
#define INTERRUPT_I2C1E_BIT (2)
#define INTERRUPT_TXB1_BIT (3)
#define INTERRUPT_TXB2_BIT (4)
#define INTERRUPT_U1E_BIT (5)
#define INTERRUPT_U1_BIT (6)
#define INTERRUPT_TMR0_BIT (7)
#define INTERRUPT_RXB0_BIT (0)
#define INTERRUPT_RXB1_BIT (1)
#define INTERRUPT_RXBN_BIT (1)
#define INTERRUPT_TXB0_BIT (2)
#define INTERRUPT_TXBN_BIT (4)
#define INTERRUPT_U1RX_BIT (3)
#define INTERRUPT_U1TX_BIT (4)
#define INTERRUPT_TMR1_BIT (0)
#define INTERRUPT_TMR1G_BIT (1)
#define INTERRUPT_TMR2_BIT (2)
#define INTERRUPT_CCP1_BIT (3)
#define INTERRUPT_NCO1_BIT (5)
#define INTERRUPT_CWG1_BIT (6)
#define INTERRUPT_CLC1_BIT (7)
#define INTERRUPT_INT1_BIT (0)
#define INTERRUPT_C2_BIT (1)
#define INTERRUPT_DMA2SCNT_BIT (2)
#define INTERRUPT_DMA2DCNT_BIT (3)
#define INTERRUPT_DMA2OR_BIT (4)
#define INTERRUPT_DMA2A_BIT (5)
#define INTERRUPT_I2C2RX_BIT (6)
#define INTERRUPT_I2C2TX_BIT (7)
#define INTERRUPT_I2C2_BIT (0)
#define INTERRUPT_I2C2E_BIT (1)
#define INTERRUPT_U2RX_BIT (2)
#define INTERRUPT_U2TX_BIT (3)
#define INTERRUPT_U2E_BIT (4)
#define INTERRUPT_U2_BIT (5)
#define INTERRUPT_TMR3_BIT (6)
#define INTERRUPT_TMR3G_BIT (7)
#define INTERRUPT_TMR4_BIT (0)
#define INTERRUPT_CCP2_BIT (1)
#define INTERRUPT_CWG2_BIT (3)
#define INTERRUPT_CLC2_BIT (4)
#define INTERRUPT_INT2_BIT (5)
#define INTERRUPT_TMR5_BIT (6)
#define INTERRUPT_TMR5G_BIT (7)
#define INTERRUPT_TMR6_BIT (0)
#define INTERRUPT_CCP3_BIT (1)
#define INTERRUPT_CWG3_BIT (2)
#define INTERRUPT_CLC3_BIT (3)
#define INTERRUPT_CCP4_BIT (0)
#define INTERRUPT_CLC4_BIT (1)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
