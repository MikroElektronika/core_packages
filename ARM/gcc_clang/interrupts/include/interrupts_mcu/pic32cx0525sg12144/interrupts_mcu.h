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
* @brief PIC32CX0525SG12144 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_GIRQ08 = 16;
static const int INTERRUPTS_GIRQ09 = 17;
static const int INTERRUPTS_GIRQ10 = 18;
static const int INTERRUPTS_GIRQ11 = 19;
static const int INTERRUPTS_GIRQ12 = 20;
static const int INTERRUPTS_GIRQ13 = 21;
static const int INTERRUPTS_GIRQ14 = 22;
static const int INTERRUPTS_GIRQ15 = 23;
static const int INTERRUPTS_GIRQ16 = 24;
static const int INTERRUPTS_GIRQ17 = 25;
static const int INTERRUPTS_GIRQ18 = 26;
static const int INTERRUPTS_GIRQ19 = 27;
static const int INTERRUPTS_GIRQ20 = 28;
static const int INTERRUPTS_GIRQ21 = 29;
static const int INTERRUPTS_GIRQ23 = 30;
static const int INTERRUPTS_GIRQ24 = 31;
static const int INTERRUPTS_GIRQ25 = 32;
static const int INTERRUPTS_GIRQ26 = 33;
static const int INTERRUPTS_I2CSMB0 = 36;
static const int INTERRUPTS_I2CSMB1 = 37;
static const int INTERRUPTS_I2CSMB2 = 38;
static const int INTERRUPTS_I2CSMB3 = 39;
static const int INTERRUPTS_DMA_CH00 = 40;
static const int INTERRUPTS_DMA_CH01 = 41;
static const int INTERRUPTS_DMA_CH02 = 42;
static const int INTERRUPTS_DMA_CH03 = 43;
static const int INTERRUPTS_DMA_CH04 = 44;
static const int INTERRUPTS_DMA_CH05 = 45;
static const int INTERRUPTS_DMA_CH06 = 46;
static const int INTERRUPTS_DMA_CH07 = 47;
static const int INTERRUPTS_DMA_CH08 = 48;
static const int INTERRUPTS_DMA_CH09 = 49;
static const int INTERRUPTS_DMA_CH10 = 50;
static const int INTERRUPTS_DMA_CH11 = 51;
static const int INTERRUPTS_UART0 = 56;
static const int INTERRUPTS_UART1 = 57;
static const int INTERRUPTS_EMI0 = 58;
static const int INTERRUPTS_EMI1 = 59;
static const int INTERRUPTS_UART2 = 60;
static const int INTERRUPTS_AEC0_IBF = 61;
static const int INTERRUPTS_AEC0_OBE = 62;
static const int INTERRUPTS_AEC1_IBF = 63;
static const int INTERRUPTS_AEC1_OBE = 64;
static const int INTERRUPTS_AEC2_IBF = 65;
static const int INTERRUPTS_AEC2_OBE = 66;
static const int INTERRUPTS_AEC3_IBF = 67;
static const int INTERRUPTS_AEC3_OBE = 68;
static const int INTERRUPTS_APM1_CTL = 71;
static const int INTERRUPTS_APM1_EN = 72;
static const int INTERRUPTS_APM1_STS = 73;
static const int INTERRUPTS_KBC_OBE = 74;
static const int INTERRUPTS_KBC_IBF = 75;
static const int INTERRUPTS_MBOX = 76;
static const int INTERRUPTS_P80CAP0 = 78;
static const int INTERRUPTS_P80CAP1 = 79;
static const int INTERRUPTS_PKE_ERR = 81;
static const int INTERRUPTS_PKE_END = 82;
static const int INTERRUPTS_RNG = 83;
static const int INTERRUPTS_AES = 84;
static const int INTERRUPTS_HASH = 85;
static const int INTERRUPTS_PECI = 86;
static const int INTERRUPTS_TACH0 = 87;
static const int INTERRUPTS_TACH1 = 88;
static const int INTERRUPTS_TACH2 = 89;
static const int INTERRUPTS_ADC_SNGL = 94;
static const int INTERRUPTS_ADC_RPT = 95;
static const int INTERRUPTS_LED0 = 99;
static const int INTERRUPTS_LED1 = 100;
static const int INTERRUPTS_LED2 = 101;
static const int INTERRUPTS_PHOT = 103;
static const int INTERRUPTS_SPISLV = 106;
static const int INTERRUPTS_QMSPI = 107;
static const int INTERRUPTS_PS2_0_ACT = 116;
static const int INTERRUPTS_PS2_1_ACT = 117;
static const int INTERRUPTS_INTR_PC = 119;
static const int INTERRUPTS_INTR_BM1 = 120;
static const int INTERRUPTS_INTR_BM2 = 121;
static const int INTERRUPTS_INTR_LTR = 122;
static const int INTERRUPTS_INTR_OOB_UP = 123;
static const int INTERRUPTS_INTR_OOB_DOWN = 124;
static const int INTERRUPTS_INTR_FLASH = 125;
static const int INTERRUPTS_ESPI_RESET = 126;
static const int INTERRUPTS_TMR = 127;
static const int INTERRUPTS_HTMR0 = 128;
static const int INTERRUPTS_HTMR1 = 129;
static const int INTERRUPTS_WK = 130;
static const int INTERRUPTS_WKSUB = 131;
static const int INTERRUPTS_WKSEC = 132;
static const int INTERRUPTS_WKSUBSEC = 133;
static const int INTERRUPTS_SYSPWR = 134;
static const int INTERRUPTS_RTC = 135;
static const int INTERRUPTS_RTC_ALARM = 136;
static const int INTERRUPTS_VCI_OVRD_IN = 137;
static const int INTERRUPTS_VCI_IN0 = 138;
static const int INTERRUPTS_VCI_IN1 = 139;
static const int INTERRUPTS_VCI_IN2 = 140;
static const int INTERRUPTS_VCI_IN3 = 141;
static const int INTERRUPTS_PS2_0A_WAKE = 145;
static const int INTERRUPTS_PS2_0B_WAKE = 146;
static const int INTERRUPTS_PS2_1B_WAKE = 148;
static const int INTERRUPTS_KEYSCAN = 151;
static const int INTERRUPTS_TIMER16_0 = 152;
static const int INTERRUPTS_TIMER16_1 = 153;
static const int INTERRUPTS_TIMER32_0 = 156;
static const int INTERRUPTS_TIMER32_1 = 157;
static const int INTERRUPTS_CCT = 162;
static const int INTERRUPTS_CCT_CAP0 = 163;
static const int INTERRUPTS_CCT_CAP1 = 164;
static const int INTERRUPTS_CCT_CAP2 = 165;
static const int INTERRUPTS_CCT_CAP3 = 166;
static const int INTERRUPTS_CCT_CAP4 = 167;
static const int INTERRUPTS_CCT_CAP5 = 168;
static const int INTERRUPTS_CCT_CMP0 = 169;
static const int INTERRUPTS_CCT_CMP1 = 170;
static const int INTERRUPTS_ESPI_VWIRE = 172;
static const int INTERRUPTS_I2CSMB4 = 174;
static const int INTERRUPTS_TACH3 = 175;
static const int INTERRUPTS_CEC = 176;
static const int INTERRUPTS_SGPIO0 = 177;
static const int INTERRUPTS_SGPIO1 = 178;
static const int INTERRUPTS_SGPIO2 = 179;
static const int INTERRUPTS_SGPIO3 = 180;
static const int INTERRUPTS_SAF_DONE = 182;
static const int INTERRUPTS_SAF_ERR = 183;
static const int INTERRUPTS_I2C0 = 184;
static const int INTERRUPTS_I2C1 = 185;
static const int INTERRUPTS_I2C2 = 186;
static const int INTERRUPTS_WDT = 187;
static const int INTERRUPTS_PERIPH_MAX = 187;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for PIC32CX0525SG12144.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for PIC32CX0525SG12144.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
