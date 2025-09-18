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
* @brief PIC32CZ2051CA91100 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_FCW = 16;
static const int INTERRUPTS_FCR_ECCERR = 17;
static const int INTERRUPTS_FCR_CRC_FAULT = 18;
static const int INTERRUPTS_PM = 19;
static const int INTERRUPTS_SUPC = 20;
static const int INTERRUPTS_OSCCTRL_FAIL = 21;
static const int INTERRUPTS_OSCCTRL_XOSCRDY = 22;
static const int INTERRUPTS_OSCCTRL_DFLLRDY = 23;
static const int INTERRUPTS_OSCCTRL_OTHER = 24;
static const int INTERRUPTS_OSCCTRL_LOCK = 25;
static const int INTERRUPTS_OSC32KCTRL_FAIL = 26;
static const int INTERRUPTS_OSC32KCTRL_RDY = 27;
static const int INTERRUPTS_MCLK = 28;
static const int INTERRUPTS_FREQM = 29;
static const int INTERRUPTS_WDT = 30;
static const int INTERRUPTS_RTC_TAMPER = 31;
static const int INTERRUPTS_RTC_OVF = 32;
static const int INTERRUPTS_RTC_PERIOD = 33;
static const int INTERRUPTS_RTC_COMPARE = 34;
static const int INTERRUPTS_EIC_EXTINT_0 = 35;
static const int INTERRUPTS_EIC_EXTINT_1 = 36;
static const int INTERRUPTS_EIC_EXTINT_2 = 37;
static const int INTERRUPTS_EIC_EXTINT_3 = 38;
static const int INTERRUPTS_EIC_EXTINT_4 = 39;
static const int INTERRUPTS_EIC_EXTINT_5 = 40;
static const int INTERRUPTS_EIC_EXTINT_6 = 41;
static const int INTERRUPTS_EIC_EXTINT_7 = 42;
static const int INTERRUPTS_EIC_EXTINT_8 = 43;
static const int INTERRUPTS_EIC_EXTINT_9 = 44;
static const int INTERRUPTS_EIC_EXTINT_10 = 45;
static const int INTERRUPTS_EIC_EXTINT_11 = 46;
static const int INTERRUPTS_EIC_EXTINT_12 = 47;
static const int INTERRUPTS_EIC_EXTINT_13 = 48;
static const int INTERRUPTS_EIC_EXTINT_14 = 49;
static const int INTERRUPTS_EIC_EXTINT_15 = 50;
static const int INTERRUPTS_PAC = 51;
static const int INTERRUPTS_DRMTCM = 52;
static const int INTERRUPTS_MCRAMC = 53;
static const int INTERRUPTS_TRAM = 54;
static const int INTERRUPTS_DMA_PRI3 = 55;
static const int INTERRUPTS_DMA_PRI2 = 56;
static const int INTERRUPTS_DMA_PRI1 = 57;
static const int INTERRUPTS_DMA_PRI0 = 58;
static const int INTERRUPTS_EVSYS_0 = 59;
static const int INTERRUPTS_EVSYS_1 = 60;
static const int INTERRUPTS_EVSYS_2 = 61;
static const int INTERRUPTS_EVSYS_3 = 62;
static const int INTERRUPTS_EVSYS_4 = 63;
static const int INTERRUPTS_EVSYS_5 = 64;
static const int INTERRUPTS_EVSYS_6 = 65;
static const int INTERRUPTS_EVSYS_7 = 66;
static const int INTERRUPTS_EVSYS_8 = 67;
static const int INTERRUPTS_EVSYS_9 = 68;
static const int INTERRUPTS_EVSYS_10 = 69;
static const int INTERRUPTS_EVSYS_11 = 70;
static const int INTERRUPTS_SERCOM0_6 = 71;
static const int INTERRUPTS_SERCOM0_5 = 72;
static const int INTERRUPTS_SERCOM0_0 = 73;
static const int INTERRUPTS_SERCOM0_1 = 74;
static const int INTERRUPTS_SERCOM0_2 = 75;
static const int INTERRUPTS_SERCOM0_3 = 76;
static const int INTERRUPTS_SERCOM0_4 = 77;
static const int INTERRUPTS_SERCOM1_6 = 78;
static const int INTERRUPTS_SERCOM1_5 = 79;
static const int INTERRUPTS_SERCOM1_0 = 80;
static const int INTERRUPTS_SERCOM1_1 = 81;
static const int INTERRUPTS_SERCOM1_2 = 82;
static const int INTERRUPTS_SERCOM1_3 = 83;
static const int INTERRUPTS_SERCOM1_4 = 84;
static const int INTERRUPTS_SERCOM2_6 = 85;
static const int INTERRUPTS_SERCOM2_5 = 86;
static const int INTERRUPTS_SERCOM2_0 = 87;
static const int INTERRUPTS_SERCOM2_1 = 88;
static const int INTERRUPTS_SERCOM2_2 = 89;
static const int INTERRUPTS_SERCOM2_3 = 90;
static const int INTERRUPTS_SERCOM2_4 = 91;
static const int INTERRUPTS_SERCOM3_6 = 92;
static const int INTERRUPTS_SERCOM3_5 = 93;
static const int INTERRUPTS_SERCOM3_0 = 94;
static const int INTERRUPTS_SERCOM3_1 = 95;
static const int INTERRUPTS_SERCOM3_2 = 96;
static const int INTERRUPTS_SERCOM3_3 = 97;
static const int INTERRUPTS_SERCOM3_4 = 98;
static const int INTERRUPTS_TCC0_OTHER = 141;
static const int INTERRUPTS_TCC0_CNT_TRIG = 142;
static const int INTERRUPTS_TCC0_MC0 = 143;
static const int INTERRUPTS_TCC0_MC1 = 144;
static const int INTERRUPTS_TCC0_MC2 = 145;
static const int INTERRUPTS_TCC0_MC3 = 146;
static const int INTERRUPTS_TCC0_MC4 = 147;
static const int INTERRUPTS_TCC0_MC5 = 148;
static const int INTERRUPTS_TCC0_MC6 = 149;
static const int INTERRUPTS_TCC0_MC7 = 150;
static const int INTERRUPTS_TCC1_OTHER = 151;
static const int INTERRUPTS_TCC1_CNT_TRIG = 152;
static const int INTERRUPTS_TCC1_MC0 = 153;
static const int INTERRUPTS_TCC1_MC1 = 154;
static const int INTERRUPTS_TCC1_MC2 = 155;
static const int INTERRUPTS_TCC1_MC3 = 156;
static const int INTERRUPTS_TCC1_MC4 = 157;
static const int INTERRUPTS_TCC1_MC5 = 158;
static const int INTERRUPTS_TCC1_MC6 = 159;
static const int INTERRUPTS_TCC1_MC7 = 160;
static const int INTERRUPTS_TCC2_OTHER = 161;
static const int INTERRUPTS_TCC2_CNT_TRIG = 162;
static const int INTERRUPTS_TCC2_MC0 = 163;
static const int INTERRUPTS_TCC2_MC1 = 164;
static const int INTERRUPTS_TCC2_MC2 = 165;
static const int INTERRUPTS_TCC2_MC3 = 166;
static const int INTERRUPTS_TCC2_MC4 = 167;
static const int INTERRUPTS_TCC2_MC5 = 168;
static const int INTERRUPTS_TCC3_OTHER = 169;
static const int INTERRUPTS_TCC3_CNT_TRIG = 170;
static const int INTERRUPTS_TCC3_MC0 = 171;
static const int INTERRUPTS_TCC3_MC1 = 172;
static const int INTERRUPTS_TCC4_OTHER = 173;
static const int INTERRUPTS_TCC4_CNT_TRIG = 174;
static const int INTERRUPTS_TCC4_MC0 = 175;
static const int INTERRUPTS_TCC4_MC1 = 176;
static const int INTERRUPTS_TCC5_OTHER = 177;
static const int INTERRUPTS_TCC5_CNT_TRIG = 178;
static const int INTERRUPTS_TCC5_MC0 = 179;
static const int INTERRUPTS_TCC5_MC1 = 180;
static const int INTERRUPTS_TCC6_OTHER = 181;
static const int INTERRUPTS_TCC6_CNT_TRIG = 182;
static const int INTERRUPTS_TCC6_MC0 = 183;
static const int INTERRUPTS_TCC6_MC1 = 184;
static const int INTERRUPTS_TCC7_OTHER = 185;
static const int INTERRUPTS_TCC7_CNT_TRIG = 186;
static const int INTERRUPTS_TCC7_MC0 = 187;
static const int INTERRUPTS_TCC7_MC1 = 188;
static const int INTERRUPTS_TCC8_OTHER = 189;
static const int INTERRUPTS_TCC8_CNT_TRIG = 190;
static const int INTERRUPTS_TCC8_MC0 = 191;
static const int INTERRUPTS_TCC8_MC1 = 192;
static const int INTERRUPTS_TCC9_OTHER = 193;
static const int INTERRUPTS_TCC9_CNT_TRIG = 194;
static const int INTERRUPTS_TCC9_MC0 = 195;
static const int INTERRUPTS_TCC9_MC1 = 196;
static const int INTERRUPTS_TCC9_MC2 = 197;
static const int INTERRUPTS_TCC9_MC3 = 198;
static const int INTERRUPTS_TCC9_MC4 = 199;
static const int INTERRUPTS_TCC9_MC5 = 200;
static const int INTERRUPTS_ADC_GLOBAL = 201;
static const int INTERRUPTS_ADC_CORE1 = 202;
static const int INTERRUPTS_ADC_CORE2 = 203;
static const int INTERRUPTS_ADC_CORE3 = 204;
static const int INTERRUPTS_ADC_CORE4 = 205;
static const int INTERRUPTS_AC = 206;
static const int INTERRUPTS_PTC = 207;
static const int INTERRUPTS_SPI_IXS0 = 208;
static const int INTERRUPTS_CAN0 = 210;
static const int INTERRUPTS_CAN1 = 211;
static const int INTERRUPTS_ETH_PRI_Q_0 = 218;
static const int INTERRUPTS_ETH_PRI_Q_1 = 219;
static const int INTERRUPTS_ETH_PRI_Q_2 = 220;
static const int INTERRUPTS_ETH_PRI_Q_3 = 221;
static const int INTERRUPTS_ETH_PRI_Q_4 = 222;
static const int INTERRUPTS_ETH_PRI_Q_5 = 223;
static const int INTERRUPTS_SQI0 = 224;
static const int INTERRUPTS_TRNG = 226;
static const int INTERRUPTS_SDMMC0 = 227;
static const int INTERRUPTS_USBHS0 = 229;
static const int INTERRUPTS_HSM_TAMPER = 231;
static const int INTERRUPTS_HSM_TXINT = 232;
static const int INTERRUPTS_HSM_RXINT = 233;
static const int INTERRUPTS_MLB_GENERAL = 234;
static const int INTERRUPTS_MLB_BUSREQ = 235;
static const int INTERRUPTS_CM7H_CTIIRQ_0 = 236;
static const int INTERRUPTS_CM7H_CTIIRQ_1 = 237;
static const int INTERRUPTS_PERIPH_MAX = 237;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for PIC32CZ2051CA91100.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for PIC32CZ2051CA91100.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
