/****************************************************************************
**
** Copyright (C) 2025 MikroElektronika d.o.o.
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
* @brief CY9BF166NPQC-G-JNE2 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_CSV = 16;
static const int INTERRUPTS_SWDT = 17;
static const int INTERRUPTS_LVD = 18;
static const int INTERRUPTS_IRQ003SEL = 19;
static const int INTERRUPTS_IRQ004SEL = 20;
static const int INTERRUPTS_IRQ005SEL = 21;
static const int INTERRUPTS_IRQ006SEL = 22;
static const int INTERRUPTS_IRQ007SEL = 23;
static const int INTERRUPTS_IRQ008SEL = 24;
static const int INTERRUPTS_IRQ009SEL = 25;
static const int INTERRUPTS_IRQ010SEL = 26;
static const int INTERRUPTS_EXINT0 = 27;
static const int INTERRUPTS_EXINT1 = 28;
static const int INTERRUPTS_EXINT2 = 29;
static const int INTERRUPTS_EXINT3 = 30;
static const int INTERRUPTS_EXINT4 = 31;
static const int INTERRUPTS_EXINT5 = 32;
static const int INTERRUPTS_EXINT6 = 33;
static const int INTERRUPTS_EXINT7 = 34;
static const int INTERRUPTS_QPRC0 = 35;
static const int INTERRUPTS_QPRC1 = 36;
static const int INTERRUPTS_WFG0_DTIF0 = 37;
static const int INTERRUPTS_WFG1_DTIF1 = 38;
static const int INTERRUPTS_WFG2_DTIF2 = 39;
static const int INTERRUPTS_FRT0_PEAK = 40;
static const int INTERRUPTS_FRT0_ZERO = 41;
static const int INTERRUPTS_ICU0 = 42;
static const int INTERRUPTS_OCU0 = 43;
static const int INTERRUPTS_FRT1_PEAK = 44;
static const int INTERRUPTS_FRT1_ZERO = 45;
static const int INTERRUPTS_ICU1 = 46;
static const int INTERRUPTS_OCU1 = 47;
static const int INTERRUPTS_FRT2_PEAK = 48;
static const int INTERRUPTS_FRT2_ZERO = 49;
static const int INTERRUPTS_ICU2 = 50;
static const int INTERRUPTS_OCU2 = 51;
static const int INTERRUPTS_PPG00_02_04 = 52;
static const int INTERRUPTS_PPG08_10_12 = 53;
static const int INTERRUPTS_PPG16_18_20 = 54;
static const int INTERRUPTS_BT0 = 55;
static const int INTERRUPTS_BT1 = 56;
static const int INTERRUPTS_BT2 = 57;
static const int INTERRUPTS_BT3 = 58;
static const int INTERRUPTS_BT4 = 59;
static const int INTERRUPTS_BT5 = 60;
static const int INTERRUPTS_BT6 = 61;
static const int INTERRUPTS_BT7 = 62;
static const int INTERRUPTS_DT1_2 = 63;
static const int INTERRUPTS_WC = 64;
static const int INTERRUPTS_EXTBUS_ERR = 65;
static const int INTERRUPTS_RTC = 66;
static const int INTERRUPTS_EXINT8 = 67;
static const int INTERRUPTS_EXINT9 = 68;
static const int INTERRUPTS_EXINT10 = 69;
static const int INTERRUPTS_EXINT11 = 70;
static const int INTERRUPTS_EXINT12 = 71;
static const int INTERRUPTS_EXINT13 = 72;
static const int INTERRUPTS_EXINT14 = 73;
static const int INTERRUPTS_EXINT15 = 74;
static const int INTERRUPTS_TIM = 75;
static const int INTERRUPTS_MFS0_RX = 76;
static const int INTERRUPTS_MFS0_TX = 77;
static const int INTERRUPTS_MFS1_RX = 78;
static const int INTERRUPTS_MFS1_TX = 79;
static const int INTERRUPTS_MFS2_RX = 80;
static const int INTERRUPTS_MFS2_TX = 81;
static const int INTERRUPTS_MFS3_RX = 82;
static const int INTERRUPTS_MFS3_TX = 83;
static const int INTERRUPTS_MFS4_RX = 84;
static const int INTERRUPTS_MFS4_TX = 85;
static const int INTERRUPTS_MFS5_RX = 86;
static const int INTERRUPTS_MFS5_TX = 87;
static const int INTERRUPTS_MFS6_RX = 88;
static const int INTERRUPTS_MFS6_TX = 89;
static const int INTERRUPTS_MFS7_RX = 90;
static const int INTERRUPTS_MFS7_TX = 91;
static const int INTERRUPTS_ADC0 = 92;
static const int INTERRUPTS_ADC1 = 93;
static const int INTERRUPTS_USB0 = 94;
static const int INTERRUPTS_USB0_HOST = 95;
static const int INTERRUPTS_CAN0 = 96;
static const int INTERRUPTS_CAN1 = 97;
static const int INTERRUPTS_ETHER0 = 98;
static const int INTERRUPTS_DMAC0 = 99;
static const int INTERRUPTS_DMAC1 = 100;
static const int INTERRUPTS_DMAC2 = 101;
static const int INTERRUPTS_DMAC3 = 102;
static const int INTERRUPTS_DMAC4 = 103;
static const int INTERRUPTS_DMAC5 = 104;
static const int INTERRUPTS_DMAC6 = 105;
static const int INTERRUPTS_DMAC7 = 106;
static const int INTERRUPTS_DSTC = 107;
static const int INTERRUPTS_EXINT16_17_18_19 = 108;
static const int INTERRUPTS_EXINT20_21_22_23 = 109;
static const int INTERRUPTS_EXINT24_25_26_27 = 110;
static const int INTERRUPTS_EXINT28_29_30_31 = 111;
static const int INTERRUPTS_QPRC2 = 112;
static const int INTERRUPTS_QPRC3 = 113;
static const int INTERRUPTS_BT8 = 114;
static const int INTERRUPTS_BT9 = 115;
static const int INTERRUPTS_BT10 = 116;
static const int INTERRUPTS_BT11 = 117;
static const int INTERRUPTS_BT12 = 118;
static const int INTERRUPTS_MFS8_RX = 119;
static const int INTERRUPTS_MFS8_TX = 120;
static const int INTERRUPTS_MFS9_RX = 121;
static const int INTERRUPTS_MFS9_TX = 122;
static const int INTERRUPTS_MFS10_RX = 123;
static const int INTERRUPTS_MFS10_TX = 124;
static const int INTERRUPTS_MFS11_RX = 125;
static const int INTERRUPTS_MFS11_TX = 126;
static const int INTERRUPTS_ADC2 = 127;
static const int INTERRUPTS_USB1 = 129;
static const int INTERRUPTS_USB1_HOST = 130;
static const int INTERRUPTS_SD = 134;
static const int INTERRUPTS_FLASH = 135;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for CY9BF166NPQC-G-JNE2.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for CY9BF166NPQC-G-JNE2.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
