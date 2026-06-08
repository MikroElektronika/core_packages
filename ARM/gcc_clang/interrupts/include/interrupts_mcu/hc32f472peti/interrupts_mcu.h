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
* @brief HC32F472PETI MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_INT000 = 16;
static const int INTERRUPTS_INT001 = 17;
static const int INTERRUPTS_INT002 = 18;
static const int INTERRUPTS_INT003 = 19;
static const int INTERRUPTS_INT004 = 20;
static const int INTERRUPTS_INT005 = 21;
static const int INTERRUPTS_INT006 = 22;
static const int INTERRUPTS_INT007 = 23;
static const int INTERRUPTS_INT008 = 24;
static const int INTERRUPTS_INT009 = 25;
static const int INTERRUPTS_INT010 = 26;
static const int INTERRUPTS_INT011 = 27;
static const int INTERRUPTS_INT012 = 28;
static const int INTERRUPTS_INT013 = 29;
static const int INTERRUPTS_INT014 = 30;
static const int INTERRUPTS_INT015 = 31;
static const int INTERRUPTS_EXTINT_PORT_EIRQ0 = 32;
static const int INTERRUPTS_EXTINT_PORT_EIRQ1 = 33;
static const int INTERRUPTS_EXTINT_PORT_EIRQ2 = 34;
static const int INTERRUPTS_EXTINT_PORT_EIRQ3 = 35;
static const int INTERRUPTS_EXTINT_PORT_EIRQ4 = 36;
static const int INTERRUPTS_EXTINT_PORT_EIRQ5 = 37;
static const int INTERRUPTS_EXTINT_PORT_EIRQ6 = 38;
static const int INTERRUPTS_EXTINT_PORT_EIRQ7 = 39;
static const int INTERRUPTS_EXTINT_PORT_EIRQ8 = 40;
static const int INTERRUPTS_EXTINT_PORT_EIRQ9 = 41;
static const int INTERRUPTS_EXTINT_PORT_EIRQ10 = 42;
static const int INTERRUPTS_EXTINT_PORT_EIRQ11 = 43;
static const int INTERRUPTS_EXTINT_PORT_EIRQ12 = 44;
static const int INTERRUPTS_EXTINT_PORT_EIRQ13 = 45;
static const int INTERRUPTS_EXTINT_PORT_EIRQ14 = 46;
static const int INTERRUPTS_EXTINT_PORT_EIRQ15 = 47;
static const int INTERRUPTS_SWINT0 = 16;
static const int INTERRUPTS_SWINT1 = 17;
static const int INTERRUPTS_SWINT2 = 18;
static const int INTERRUPTS_SWINT3 = 19;
static const int INTERRUPTS_SWINT4 = 20;
static const int INTERRUPTS_SWINT5 = 21;
static const int INTERRUPTS_SWINT6 = 22;
static const int INTERRUPTS_SWINT7 = 23;
static const int INTERRUPTS_SWINT8 = 24;
static const int INTERRUPTS_SWINT9 = 25;
static const int INTERRUPTS_SWINT10 = 26;
static const int INTERRUPTS_SWINT11 = 27;
static const int INTERRUPTS_SWINT12 = 28;
static const int INTERRUPTS_SWINT13 = 29;
static const int INTERRUPTS_SWINT14 = 30;
static const int INTERRUPTS_SWINT15 = 31;
static const int INTERRUPTS_SWINT16 = 32;
static const int INTERRUPTS_SWINT17 = 33;
static const int INTERRUPTS_SWINT18 = 34;
static const int INTERRUPTS_SWINT19 = 35;
static const int INTERRUPTS_SWINT20 = 36;
static const int INTERRUPTS_SWINT21 = 37;
static const int INTERRUPTS_SWINT22 = 38;
static const int INTERRUPTS_SWINT23 = 39;
static const int INTERRUPTS_SWINT24 = 40;
static const int INTERRUPTS_SWINT25 = 41;
static const int INTERRUPTS_SWINT26 = 42;
static const int INTERRUPTS_SWINT27 = 43;
static const int INTERRUPTS_SWINT28 = 44;
static const int INTERRUPTS_SWINT29 = 45;
static const int INTERRUPTS_SWINT30 = 46;
static const int INTERRUPTS_SWINT31 = 47;
static const int INTERRUPTS_DMA1_ERR = 48;
static const int INTERRUPTS_DMA1_TC0_BTC0 = 49;
static const int INTERRUPTS_DMA1_TC1_BTC1 = 50;
static const int INTERRUPTS_DMA1_TC2_BTC2 = 51;
static const int INTERRUPTS_DMA1_TC3_BTC3 = 52;
static const int INTERRUPTS_DMA1_TC4_BTC4 = 53;
static const int INTERRUPTS_DMA1_TC5_BTC5 = 54;
static const int INTERRUPTS_DMA1_TC6_BTC6 = 55;
static const int INTERRUPTS_DMA1_TC7_BTC7 = 56;
static const int INTERRUPTS_EFM_PEERR_RDCOL = 57;
static const int INTERRUPTS_EFM_OPTEND = 58;
static const int INTERRUPTS_QSPI = 59;
static const int INTERRUPTS_DCU1 = 60;
static const int INTERRUPTS_DCU2 = 61;
static const int INTERRUPTS_DCU3 = 62;
static const int INTERRUPTS_DMA2_ERR = 63;
static const int INTERRUPTS_DMA2_TC0_BTC0 = 64;
static const int INTERRUPTS_DMA2_TC1_BTC1 = 65;
static const int INTERRUPTS_DMA2_TC2_BTC2 = 66;
static const int INTERRUPTS_DMA2_TC3_BTC3 = 67;
static const int INTERRUPTS_DMA2_TC4_BTC4 = 68;
static const int INTERRUPTS_DMA2_TC5_BTC5 = 69;
static const int INTERRUPTS_DMA2_TC6_BTC6 = 70;
static const int INTERRUPTS_DMA2_TC7_BTC7 = 71;
static const int INTERRUPTS_MAU = 72;
static const int INTERRUPTS_FMAC1_FIR = 73;
static const int INTERRUPTS_FMAC2_FIR = 74;
static const int INTERRUPTS_FMAC3_FIR = 75;
static const int INTERRUPTS_FMAC4_FIR = 76;
static const int INTERRUPTS_TMR0_1_CMP = 77;
static const int INTERRUPTS_TMR0_2_CMP = 78;
static const int INTERRUPTS_TMR2_1_CMP = 79;
static const int INTERRUPTS_TMR2_1_OVF = 80;
static const int INTERRUPTS_TMR2_2_CMP = 81;
static const int INTERRUPTS_TMR2_2_OVF = 82;
static const int INTERRUPTS_TMR2_3_CMP = 83;
static const int INTERRUPTS_TMR2_3_OVF = 84;
static const int INTERRUPTS_TMR2_4_CMP = 85;
static const int INTERRUPTS_TMR2_4_OVF = 86;
static const int INTERRUPTS_RTC = 87;
static const int INTERRUPTS_XTAL = 88;
static const int INTERRUPTS_WKTM = 89;
static const int INTERRUPTS_SWDT = 90;
static const int INTERRUPTS_TMR6_1_GCMP = 91;
static const int INTERRUPTS_TMR6_1_OVF_UDF = 92;
static const int INTERRUPTS_TMR6_1_DTE = 93;
static const int INTERRUPTS_TMR6_1_SCMP = 94;
static const int INTERRUPTS_TMRA_1_OVF_UDF = 95;
static const int INTERRUPTS_TMRA_1_CMP = 96;
static const int INTERRUPTS_TMR6_2_GCMP = 97;
static const int INTERRUPTS_TMR6_2_OVF_UDF = 98;
static const int INTERRUPTS_TMR6_2_DTE = 99;
static const int INTERRUPTS_TMR6_2_SCMP = 100;
static const int INTERRUPTS_TMRA_2_OVF_UDF = 101;
static const int INTERRUPTS_TMRA_2_CMP = 102;
static const int INTERRUPTS_TMR6_3_GCMP = 103;
static const int INTERRUPTS_TMR6_3_OVF_UDF = 104;
static const int INTERRUPTS_TMR6_3_DTE = 105;
static const int INTERRUPTS_TMR6_3_SCMP = 106;
static const int INTERRUPTS_TMRA_3_OVF_UDF = 107;
static const int INTERRUPTS_TMRA_3_CMP = 108;
static const int INTERRUPTS_TMR6_4_GCMP = 109;
static const int INTERRUPTS_TMR6_4_OVF_UDF = 110;
static const int INTERRUPTS_TMR6_4_DTE = 111;
static const int INTERRUPTS_TMR6_4_SCMP = 112;
static const int INTERRUPTS_TMRA_4_OVF_UDF = 113;
static const int INTERRUPTS_TMRA_4_CMP = 114;
static const int INTERRUPTS_TMR6_5_GCMP = 115;
static const int INTERRUPTS_TMR6_5_OVF_UDF = 116;
static const int INTERRUPTS_TMR6_5_DTE = 117;
static const int INTERRUPTS_TMR6_5_SCMP = 118;
static const int INTERRUPTS_TMR6_6_GCMP = 120;
static const int INTERRUPTS_TMR6_6_OVF_UDF = 121;
static const int INTERRUPTS_TMR6_6_DTE = 122;
static const int INTERRUPTS_TMR6_6_SCMP = 123;
static const int INTERRUPTS_TMR6_7_GCMP = 124;
static const int INTERRUPTS_TMR6_7_OVF_UDF = 125;
static const int INTERRUPTS_TMR6_7_DTE = 126;
static const int INTERRUPTS_TMR6_7_SCMP = 127;
static const int INTERRUPTS_TMR6_8_GCMP = 128;
static const int INTERRUPTS_TMR6_8_OVF_UDF = 129;
static const int INTERRUPTS_TMR6_8_DTE = 130;
static const int INTERRUPTS_TMR6_8_SCMP = 131;
static const int INTERRUPTS_TMR6_9_GCMP = 132;
static const int INTERRUPTS_TMR6_9_OVF_UDF = 133;
static const int INTERRUPTS_TMR6_9_DTE = 134;
static const int INTERRUPTS_TMR6_9_SCMP = 135;
static const int INTERRUPTS_TMR6_10_GCMP = 136;
static const int INTERRUPTS_TMR6_10_OVF_UDF = 137;
static const int INTERRUPTS_TMR6_10_DTE = 138;
static const int INTERRUPTS_TMR6_10_SCMP = 139;
static const int INTERRUPTS_TMR4_1_GCMP = 140;
static const int INTERRUPTS_TMR4_1_OVF_UDF = 141;
static const int INTERRUPTS_TMR4_1_RELOAD = 142;
static const int INTERRUPTS_TMR4_1_SCMP = 143;
static const int INTERRUPTS_CMP1_IRQ = 144;
static const int INTERRUPTS_CMP2_IRQ = 145;
static const int INTERRUPTS_CMP3_IRQ = 146;
static const int INTERRUPTS_CMP4_IRQ = 147;
static const int INTERRUPTS_CAN1_INT = 148;
static const int INTERRUPTS_CAN2_INT = 149;
static const int INTERRUPTS_CAN3_INT = 150;
static const int INTERRUPTS_USART1 = 151;
static const int INTERRUPTS_USART2 = 152;
static const int INTERRUPTS_SPI1 = 153;
static const int INTERRUPTS_SPI2 = 154;
static const int INTERRUPTS_TMRA_5_OVF_UDF = 155;
static const int INTERRUPTS_TMRA_5_CMP = 156;
static const int INTERRUPTS_TMRA_6_OVF_UDF = 157;
static const int INTERRUPTS_TMRA_6_CMP = 158;
static const int INTERRUPTS_USBFS_GLB = 159;
static const int INTERRUPTS_EVENT_PORT1 = 160;
static const int INTERRUPTS_EVENT_PORT2 = 161;
static const int INTERRUPTS_EVENT_PORT3 = 162;
static const int INTERRUPTS_EVENT_PORT4 = 163;
static const int INTERRUPTS_USART3 = 164;
static const int INTERRUPTS_USART4 = 165;
static const int INTERRUPTS_SPI3 = 166;
static const int INTERRUPTS_SPI4 = 167;
static const int INTERRUPTS_EMB_GR0 = 168;
static const int INTERRUPTS_EMB_GR1 = 169;
static const int INTERRUPTS_EMB_GR2 = 170;
static const int INTERRUPTS_EMB_GR3 = 171;
static const int INTERRUPTS_EMB_GR4 = 172;
static const int INTERRUPTS_EMB_GR5 = 173;
static const int INTERRUPTS_EMB_GR6 = 174;
static const int INTERRUPTS_HASH = 175;
static const int INTERRUPTS_USART5 = 176;
static const int INTERRUPTS_USART6 = 177;
static const int INTERRUPTS_MDIO = 178;
static const int INTERRUPTS_PLA = 179;
static const int INTERRUPTS_I2C1 = 180;
static const int INTERRUPTS_I2C2 = 181;
static const int INTERRUPTS_I2C3 = 182;
static const int INTERRUPTS_USART1_WUPI = 183;
static const int INTERRUPTS_LVD1 = 184;
static const int INTERRUPTS_LVD2 = 185;
static const int INTERRUPTS_OTS = 186;
static const int INTERRUPTS_FCM = 187;
static const int INTERRUPTS_WDT = 188;
static const int INTERRUPTS_CTC = 189;
static const int INTERRUPTS_ADC1 = 190;
static const int INTERRUPTS_ADC2 = 191;
static const int INTERRUPTS_ADC3 = 192;
static const int INTERRUPTS_TRNG = 193;
static const int INTERRUPTS_USART1_TCI = 194;
static const int INTERRUPTS_USART2_TCI = 195;
static const int INTERRUPTS_USART3_TCI = 196;
static const int INTERRUPTS_USART4_TCI = 197;
static const int INTERRUPTS_USART5_TCI = 198;
static const int INTERRUPTS_USART6_TCI = 199;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for HC32F472PETI.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for HC32F472PETI.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
