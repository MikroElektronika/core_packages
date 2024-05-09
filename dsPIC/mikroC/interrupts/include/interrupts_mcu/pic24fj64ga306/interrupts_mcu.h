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
* @brief pic24fj64ga306 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_DMA1 = 0;
static const int INTERRUPTS_AD1 = 1;
static const int INTERRUPTS_U1TX = 2;
static const int INTERRUPTS_U1RX = 3;
static const int INTERRUPTS_SPI1 = 4;
static const int INTERRUPTS_SPF1 = 5;
static const int INTERRUPTS_T3 = 6;
static const int INTERRUPTS_T2 = 7;
static const int INTERRUPTS_OC2 = 8;
static const int INTERRUPTS_IC2 = 9;
static const int INTERRUPTS_DMA0 = 10;
static const int INTERRUPTS_T1 = 11;
static const int INTERRUPTS_OC1 = 12;
static const int INTERRUPTS_IC1 = 13;
static const int INTERRUPTS_INT0 = 14;
static const int INTERRUPTS_U2TX = 15;
static const int INTERRUPTS_U2RX = 16;
static const int INTERRUPTS_INT2 = 17;
static const int INTERRUPTS_T5 = 18;
static const int INTERRUPTS_T4 = 19;
static const int INTERRUPTS_OC4 = 20;
static const int INTERRUPTS_OC3 = 21;
static const int INTERRUPTS_DMA2 = 22;
static const int INTERRUPTS_IC7 = 23;
static const int INTERRUPTS_INT1 = 24;
static const int INTERRUPTS_CN = 25;
static const int INTERRUPTS_CM = 26;
static const int INTERRUPTS_MI2C1 = 27;
static const int INTERRUPTS_SI2C1 = 28;
static const int INTERRUPTS_DMA4 = 29;
static const int INTERRUPTS_PMP = 30;
static const int INTERRUPTS_OC7 = 31;
static const int INTERRUPTS_OC6 = 32;
static const int INTERRUPTS_OC5 = 33;
static const int INTERRUPTS_IC6 = 34;
static const int INTERRUPTS_IC5 = 35;
static const int INTERRUPTS_IC4 = 36;
static const int INTERRUPTS_IC3 = 37;
static const int INTERRUPTS_DMA3 = 38;
static const int INTERRUPTS_SPI2 = 39;
static const int INTERRUPTS_SPF2 = 40;
static const int INTERRUPTS_RTC = 41;
static const int INTERRUPTS_DMA5 = 42;
static const int INTERRUPTS_INT4 = 43;
static const int INTERRUPTS_INT3 = 44;
static const int INTERRUPTS_MI2C2 = 45;
static const int INTERRUPTS_SI2C2 = 46;
static const int INTERRUPTS_CTMU = 47;
static const int INTERRUPTS_LVD = 48;
static const int INTERRUPTS_CRC = 49;
static const int INTERRUPTS_U2ER = 50;
static const int INTERRUPTS_U1ER = 51;
static const int INTERRUPTS_U4TX = 52;
static const int INTERRUPTS_U4RX = 53;
static const int INTERRUPTS_U4ER = 54;
static const int INTERRUPTS_U3TX = 55;
static const int INTERRUPTS_U3RX = 56;
static const int INTERRUPTS_U3ER = 57;
static const int INTERRUPTS_LCD = 58;
static const int INTERRUPTS_JTAG = 59;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_DMA1_REGISTER (IEC0)
#define INTERRUPT_AD1_REGISTER (IEC0)
#define INTERRUPT_U1TX_REGISTER (IEC0)
#define INTERRUPT_U1RX_REGISTER (IEC0)
#define INTERRUPT_SPI1_REGISTER (IEC0)
#define INTERRUPT_SPF1_REGISTER (IEC0)
#define INTERRUPT_T3_REGISTER (IEC0)
#define INTERRUPT_T2_REGISTER (IEC0)
#define INTERRUPT_OC2_REGISTER (IEC0)
#define INTERRUPT_IC2_REGISTER (IEC0)
#define INTERRUPT_DMA0_REGISTER (IEC0)
#define INTERRUPT_T1_REGISTER (IEC0)
#define INTERRUPT_OC1_REGISTER (IEC0)
#define INTERRUPT_IC1_REGISTER (IEC0)
#define INTERRUPT_INT0_REGISTER (IEC0)
#define INTERRUPT_U2TX_REGISTER (IEC1)
#define INTERRUPT_U2RX_REGISTER (IEC1)
#define INTERRUPT_INT2_REGISTER (IEC1)
#define INTERRUPT_T5_REGISTER (IEC1)
#define INTERRUPT_T4_REGISTER (IEC1)
#define INTERRUPT_OC4_REGISTER (IEC1)
#define INTERRUPT_OC3_REGISTER (IEC1)
#define INTERRUPT_DMA2_REGISTER (IEC1)
#define INTERRUPT_IC7_REGISTER (IEC1)
#define INTERRUPT_INT1_REGISTER (IEC1)
#define INTERRUPT_CN_REGISTER (IEC1)
#define INTERRUPT_CM_REGISTER (IEC1)
#define INTERRUPT_MI2C1_REGISTER (IEC1)
#define INTERRUPT_SI2C1_REGISTER (IEC1)
#define INTERRUPT_DMA4_REGISTER (IEC2)
#define INTERRUPT_PMP_REGISTER (IEC2)
#define INTERRUPT_OC7_REGISTER (IEC2)
#define INTERRUPT_OC6_REGISTER (IEC2)
#define INTERRUPT_OC5_REGISTER (IEC2)
#define INTERRUPT_IC6_REGISTER (IEC2)
#define INTERRUPT_IC5_REGISTER (IEC2)
#define INTERRUPT_IC4_REGISTER (IEC2)
#define INTERRUPT_IC3_REGISTER (IEC2)
#define INTERRUPT_DMA3_REGISTER (IEC2)
#define INTERRUPT_SPI2_REGISTER (IEC2)
#define INTERRUPT_SPF2_REGISTER (IEC2)
#define INTERRUPT_RTC_REGISTER (IEC3)
#define INTERRUPT_DMA5_REGISTER (IEC3)
#define INTERRUPT_INT4_REGISTER (IEC3)
#define INTERRUPT_INT3_REGISTER (IEC3)
#define INTERRUPT_MI2C2_REGISTER (IEC3)
#define INTERRUPT_SI2C2_REGISTER (IEC3)
#define INTERRUPT_CTMU_REGISTER (IEC4)
#define INTERRUPT_LVD_REGISTER (IEC4)
#define INTERRUPT_CRC_REGISTER (IEC4)
#define INTERRUPT_U2ER_REGISTER (IEC4)
#define INTERRUPT_U1ER_REGISTER (IEC4)
#define INTERRUPT_U4TX_REGISTER (IEC5)
#define INTERRUPT_U4RX_REGISTER (IEC5)
#define INTERRUPT_U4ER_REGISTER (IEC5)
#define INTERRUPT_U3TX_REGISTER (IEC5)
#define INTERRUPT_U3RX_REGISTER (IEC5)
#define INTERRUPT_U3ER_REGISTER (IEC5)
#define INTERRUPT_LCD_REGISTER (IEC6)
#define INTERRUPT_JTAG_REGISTER (IEC7)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_DMA1_BIT (14)
#define INTERRUPT_AD1_BIT (13)
#define INTERRUPT_U1TX_BIT (12)
#define INTERRUPT_U1RX_BIT (11)
#define INTERRUPT_SPI1_BIT (10)
#define INTERRUPT_SPF1_BIT (9)
#define INTERRUPT_T3_BIT (8)
#define INTERRUPT_T2_BIT (7)
#define INTERRUPT_OC2_BIT (6)
#define INTERRUPT_IC2_BIT (5)
#define INTERRUPT_DMA0_BIT (4)
#define INTERRUPT_T1_BIT (3)
#define INTERRUPT_OC1_BIT (2)
#define INTERRUPT_IC1_BIT (1)
#define INTERRUPT_INT0_BIT (0)
#define INTERRUPT_U2TX_BIT (15)
#define INTERRUPT_U2RX_BIT (14)
#define INTERRUPT_INT2_BIT (13)
#define INTERRUPT_T5_BIT (12)
#define INTERRUPT_T4_BIT (11)
#define INTERRUPT_OC4_BIT (10)
#define INTERRUPT_OC3_BIT (9)
#define INTERRUPT_DMA2_BIT (8)
#define INTERRUPT_IC7_BIT (6)
#define INTERRUPT_INT1_BIT (4)
#define INTERRUPT_CN_BIT (3)
#define INTERRUPT_CM_BIT (2)
#define INTERRUPT_MI2C1_BIT (1)
#define INTERRUPT_SI2C1_BIT (0)
#define INTERRUPT_DMA4_BIT (14)
#define INTERRUPT_PMP_BIT (13)
#define INTERRUPT_OC7_BIT (11)
#define INTERRUPT_OC6_BIT (10)
#define INTERRUPT_OC5_BIT (9)
#define INTERRUPT_IC6_BIT (8)
#define INTERRUPT_IC5_BIT (7)
#define INTERRUPT_IC4_BIT (6)
#define INTERRUPT_IC3_BIT (5)
#define INTERRUPT_DMA3_BIT (4)
#define INTERRUPT_SPI2_BIT (1)
#define INTERRUPT_SPF2_BIT (0)
#define INTERRUPT_RTC_BIT (14)
#define INTERRUPT_DMA5_BIT (13)
#define INTERRUPT_INT4_BIT (6)
#define INTERRUPT_INT3_BIT (5)
#define INTERRUPT_MI2C2_BIT (2)
#define INTERRUPT_SI2C2_BIT (1)
#define INTERRUPT_CTMU_BIT (13)
#define INTERRUPT_LVD_BIT (8)
#define INTERRUPT_CRC_BIT (3)
#define INTERRUPT_U2ER_BIT (2)
#define INTERRUPT_U1ER_BIT (1)
#define INTERRUPT_U4TX_BIT (9)
#define INTERRUPT_U4RX_BIT (8)
#define INTERRUPT_U4ER_BIT (7)
#define INTERRUPT_U3TX_BIT (3)
#define INTERRUPT_U3RX_BIT (2)
#define INTERRUPT_U3ER_BIT (1)
#define INTERRUPT_LCD_BIT (4)
#define INTERRUPT_JTAG_BIT (5)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
