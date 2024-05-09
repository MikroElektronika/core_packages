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
* @brief pic32mx570f512l MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_CT = 0;
static const int INTERRUPTS_CS0 = 1;
static const int INTERRUPTS_CS1 = 2;
static const int INTERRUPTS_INT0 = 3;
static const int INTERRUPTS_T1 = 4;
static const int INTERRUPTS_IC1E = 5;
static const int INTERRUPTS_IC1 = 6;
static const int INTERRUPTS_OC1 = 7;
static const int INTERRUPTS_INT1 = 8;
static const int INTERRUPTS_T2 = 9;
static const int INTERRUPTS_IC2E = 10;
static const int INTERRUPTS_IC2 = 11;
static const int INTERRUPTS_OC2 = 12;
static const int INTERRUPTS_INT2 = 13;
static const int INTERRUPTS_T3 = 14;
static const int INTERRUPTS_IC3E = 15;
static const int INTERRUPTS_IC3 = 16;
static const int INTERRUPTS_OC3 = 17;
static const int INTERRUPTS_INT3 = 18;
static const int INTERRUPTS_T4 = 19;
static const int INTERRUPTS_IC4E = 20;
static const int INTERRUPTS_IC4 = 21;
static const int INTERRUPTS_OC4 = 22;
static const int INTERRUPTS_INT4 = 23;
static const int INTERRUPTS_T5 = 24;
static const int INTERRUPTS_IC5E = 25;
static const int INTERRUPTS_IC5 = 26;
static const int INTERRUPTS_OC5 = 27;
static const int INTERRUPTS_AD1 = 28;
static const int INTERRUPTS_FSCM = 29;
static const int INTERRUPTS_RTCC = 30;
static const int INTERRUPTS_FCE = 31;
static const int INTERRUPTS_CMP1 = 32;
static const int INTERRUPTS_CMP2 = 33;
static const int INTERRUPTS_USB = 34;
static const int INTERRUPTS_SPI1E = 35;
static const int INTERRUPTS_SPI1RX = 36;
static const int INTERRUPTS_SPI1TX = 37;
static const int INTERRUPTS_U1EIECON = 38;
static const int INTERRUPTS_U1RX = 39;
static const int INTERRUPTS_U1TX = 40;
static const int INTERRUPTS_I2C1B = 41;
static const int INTERRUPTS_I2C1S = 42;
static const int INTERRUPTS_I2C1M = 43;
static const int INTERRUPTS_CNA = 44;
static const int INTERRUPTS_CNB = 45;
static const int INTERRUPTS_CNC = 46;
static const int INTERRUPTS_CND = 47;
static const int INTERRUPTS_CNE = 48;
static const int INTERRUPTS_CNF = 49;
static const int INTERRUPTS_CNG = 50;
static const int INTERRUPTS_PMP = 51;
static const int INTERRUPTS_PMPE = 52;
static const int INTERRUPTS_SPI2E = 53;
static const int INTERRUPTS_SPI2RX = 54;
static const int INTERRUPTS_SPI2TX = 55;
static const int INTERRUPTS_U2E = 56;
static const int INTERRUPTS_U2RX = 57;
static const int INTERRUPTS_U2TX = 58;
static const int INTERRUPTS_I2C2B = 59;
static const int INTERRUPTS_I2C2S = 60;
static const int INTERRUPTS_I2C2M = 61;
static const int INTERRUPTS_U3E = 62;
static const int INTERRUPTS_U3RX = 63;
static const int INTERRUPTS_U3TX = 64;
static const int INTERRUPTS_U4E = 65;
static const int INTERRUPTS_U4RX = 66;
static const int INTERRUPTS_U4TX = 67;
static const int INTERRUPTS_U5E = 68;
static const int INTERRUPTS_U5RX = 69;
static const int INTERRUPTS_U5TX = 70;
static const int INTERRUPTS_CTMU = 71;
static const int INTERRUPTS_DMA0 = 72;
static const int INTERRUPTS_DMA1 = 73;
static const int INTERRUPTS_DMA2 = 74;
static const int INTERRUPTS_DMA3 = 75;
static const int INTERRUPTS_CMP3 = 76;
static const int INTERRUPTS_CAN1 = 77;
static const int INTERRUPTS_SPI3E = 78;
static const int INTERRUPTS_SPI3RX = 79;
static const int INTERRUPTS_SPI3TX = 80;
static const int INTERRUPTS_SPI4E = 81;
static const int INTERRUPTS_SPI4RX = 82;
static const int INTERRUPTS_SPI4TX = 83;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_CT_REGISTER (IEC0)
#define INTERRUPT_CS0_REGISTER (IEC0)
#define INTERRUPT_CS1_REGISTER (IEC0)
#define INTERRUPT_INT0_REGISTER (IEC0)
#define INTERRUPT_T1_REGISTER (IEC0)
#define INTERRUPT_IC1E_REGISTER (IEC0)
#define INTERRUPT_IC1_REGISTER (IEC0)
#define INTERRUPT_OC1_REGISTER (IEC0)
#define INTERRUPT_INT1_REGISTER (IEC0)
#define INTERRUPT_T2_REGISTER (IEC0)
#define INTERRUPT_IC2E_REGISTER (IEC0)
#define INTERRUPT_IC2_REGISTER (IEC0)
#define INTERRUPT_OC2_REGISTER (IEC0)
#define INTERRUPT_INT2_REGISTER (IEC0)
#define INTERRUPT_T3_REGISTER (IEC0)
#define INTERRUPT_IC3E_REGISTER (IEC0)
#define INTERRUPT_IC3_REGISTER (IEC0)
#define INTERRUPT_OC3_REGISTER (IEC0)
#define INTERRUPT_INT3_REGISTER (IEC0)
#define INTERRUPT_T4_REGISTER (IEC0)
#define INTERRUPT_IC4E_REGISTER (IEC0)
#define INTERRUPT_IC4_REGISTER (IEC0)
#define INTERRUPT_OC4_REGISTER (IEC0)
#define INTERRUPT_INT4_REGISTER (IEC0)
#define INTERRUPT_T5_REGISTER (IEC0)
#define INTERRUPT_IC5E_REGISTER (IEC0)
#define INTERRUPT_IC5_REGISTER (IEC0)
#define INTERRUPT_OC5_REGISTER (IEC0)
#define INTERRUPT_AD1_REGISTER (IEC0)
#define INTERRUPT_FSCM_REGISTER (IEC0)
#define INTERRUPT_RTCC_REGISTER (IEC0)
#define INTERRUPT_FCE_REGISTER (IEC0)
#define INTERRUPT_CMP1_REGISTER (IEC1)
#define INTERRUPT_CMP2_REGISTER (IEC1)
#define INTERRUPT_USB_REGISTER (IEC1)
#define INTERRUPT_SPI1E_REGISTER (IEC1)
#define INTERRUPT_SPI1RX_REGISTER (IEC1)
#define INTERRUPT_SPI1TX_REGISTER (IEC1)
#define INTERRUPT_U1EIECON_REGISTER (IEC1)
#define INTERRUPT_U1RX_REGISTER (IEC1)
#define INTERRUPT_U1TX_REGISTER (IEC1)
#define INTERRUPT_I2C1B_REGISTER (IEC1)
#define INTERRUPT_I2C1S_REGISTER (IEC1)
#define INTERRUPT_I2C1M_REGISTER (IEC1)
#define INTERRUPT_CNA_REGISTER (IEC1)
#define INTERRUPT_CNB_REGISTER (IEC1)
#define INTERRUPT_CNC_REGISTER (IEC1)
#define INTERRUPT_CND_REGISTER (IEC1)
#define INTERRUPT_CNE_REGISTER (IEC1)
#define INTERRUPT_CNF_REGISTER (IEC1)
#define INTERRUPT_CNG_REGISTER (IEC1)
#define INTERRUPT_PMP_REGISTER (IEC1)
#define INTERRUPT_PMPE_REGISTER (IEC1)
#define INTERRUPT_SPI2E_REGISTER (IEC1)
#define INTERRUPT_SPI2RX_REGISTER (IEC1)
#define INTERRUPT_SPI2TX_REGISTER (IEC1)
#define INTERRUPT_U2E_REGISTER (IEC1)
#define INTERRUPT_U2RX_REGISTER (IEC1)
#define INTERRUPT_U2TX_REGISTER (IEC1)
#define INTERRUPT_I2C2B_REGISTER (IEC1)
#define INTERRUPT_I2C2S_REGISTER (IEC1)
#define INTERRUPT_I2C2M_REGISTER (IEC1)
#define INTERRUPT_U3E_REGISTER (IEC1)
#define INTERRUPT_U3RX_REGISTER (IEC1)
#define INTERRUPT_U3TX_REGISTER (IEC2)
#define INTERRUPT_U4E_REGISTER (IEC2)
#define INTERRUPT_U4RX_REGISTER (IEC2)
#define INTERRUPT_U4TX_REGISTER (IEC2)
#define INTERRUPT_U5E_REGISTER (IEC2)
#define INTERRUPT_U5RX_REGISTER (IEC2)
#define INTERRUPT_U5TX_REGISTER (IEC2)
#define INTERRUPT_CTMU_REGISTER (IEC2)
#define INTERRUPT_DMA0_REGISTER (IEC2)
#define INTERRUPT_DMA1_REGISTER (IEC2)
#define INTERRUPT_DMA2_REGISTER (IEC2)
#define INTERRUPT_DMA3_REGISTER (IEC2)
#define INTERRUPT_CMP3_REGISTER (IEC2)
#define INTERRUPT_CAN1_REGISTER (IEC2)
#define INTERRUPT_SPI3E_REGISTER (IEC2)
#define INTERRUPT_SPI3RX_REGISTER (IEC2)
#define INTERRUPT_SPI3TX_REGISTER (IEC2)
#define INTERRUPT_SPI4E_REGISTER (IEC2)
#define INTERRUPT_SPI4RX_REGISTER (IEC2)
#define INTERRUPT_SPI4TX_REGISTER (IEC2)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_CT_BIT (0)
#define INTERRUPT_CS0_BIT (1)
#define INTERRUPT_CS1_BIT (2)
#define INTERRUPT_INT0_BIT (3)
#define INTERRUPT_T1_BIT (4)
#define INTERRUPT_IC1E_BIT (5)
#define INTERRUPT_IC1_BIT (6)
#define INTERRUPT_OC1_BIT (7)
#define INTERRUPT_INT1_BIT (8)
#define INTERRUPT_T2_BIT (9)
#define INTERRUPT_IC2E_BIT (10)
#define INTERRUPT_IC2_BIT (11)
#define INTERRUPT_OC2_BIT (12)
#define INTERRUPT_INT2_BIT (13)
#define INTERRUPT_T3_BIT (14)
#define INTERRUPT_IC3E_BIT (15)
#define INTERRUPT_IC3_BIT (16)
#define INTERRUPT_OC3_BIT (17)
#define INTERRUPT_INT3_BIT (18)
#define INTERRUPT_T4_BIT (19)
#define INTERRUPT_IC4E_BIT (20)
#define INTERRUPT_IC4_BIT (21)
#define INTERRUPT_OC4_BIT (22)
#define INTERRUPT_INT4_BIT (23)
#define INTERRUPT_T5_BIT (24)
#define INTERRUPT_IC5E_BIT (25)
#define INTERRUPT_IC5_BIT (26)
#define INTERRUPT_OC5_BIT (27)
#define INTERRUPT_AD1_BIT (28)
#define INTERRUPT_FSCM_BIT (29)
#define INTERRUPT_RTCC_BIT (30)
#define INTERRUPT_FCE_BIT (31)
#define INTERRUPT_CMP1_BIT (0)
#define INTERRUPT_CMP2_BIT (1)
#define INTERRUPT_USB_BIT (2)
#define INTERRUPT_SPI1E_BIT (3)
#define INTERRUPT_SPI1RX_BIT (4)
#define INTERRUPT_SPI1TX_BIT (5)
#define INTERRUPT_U1EIECON_BIT (6)
#define INTERRUPT_U1RX_BIT (7)
#define INTERRUPT_U1TX_BIT (8)
#define INTERRUPT_I2C1B_BIT (9)
#define INTERRUPT_I2C1S_BIT (10)
#define INTERRUPT_I2C1M_BIT (11)
#define INTERRUPT_CNA_BIT (12)
#define INTERRUPT_CNB_BIT (13)
#define INTERRUPT_CNC_BIT (14)
#define INTERRUPT_CND_BIT (15)
#define INTERRUPT_CNE_BIT (16)
#define INTERRUPT_CNF_BIT (17)
#define INTERRUPT_CNG_BIT (18)
#define INTERRUPT_PMP_BIT (19)
#define INTERRUPT_PMPE_BIT (20)
#define INTERRUPT_SPI2E_BIT (21)
#define INTERRUPT_SPI2RX_BIT (22)
#define INTERRUPT_SPI2TX_BIT (23)
#define INTERRUPT_U2E_BIT (24)
#define INTERRUPT_U2RX_BIT (25)
#define INTERRUPT_U2TX_BIT (26)
#define INTERRUPT_I2C2B_BIT (27)
#define INTERRUPT_I2C2S_BIT (28)
#define INTERRUPT_I2C2M_BIT (29)
#define INTERRUPT_U3E_BIT (30)
#define INTERRUPT_U3RX_BIT (31)
#define INTERRUPT_U3TX_BIT (0)
#define INTERRUPT_U4E_BIT (1)
#define INTERRUPT_U4RX_BIT (2)
#define INTERRUPT_U4TX_BIT (3)
#define INTERRUPT_U5E_BIT (4)
#define INTERRUPT_U5RX_BIT (5)
#define INTERRUPT_U5TX_BIT (6)
#define INTERRUPT_CTMU_BIT (7)
#define INTERRUPT_DMA0_BIT (8)
#define INTERRUPT_DMA1_BIT (9)
#define INTERRUPT_DMA2_BIT (10)
#define INTERRUPT_DMA3_BIT (11)
#define INTERRUPT_CMP3_BIT (12)
#define INTERRUPT_CAN1_BIT (13)
#define INTERRUPT_SPI3E_BIT (14)
#define INTERRUPT_SPI3RX_BIT (15)
#define INTERRUPT_SPI3TX_BIT (16)
#define INTERRUPT_SPI4E_BIT (17)
#define INTERRUPT_SPI4RX_BIT (18)
#define INTERRUPT_SPI4TX_BIT (19)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
