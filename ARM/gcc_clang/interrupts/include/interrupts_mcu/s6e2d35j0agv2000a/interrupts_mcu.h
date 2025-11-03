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
* @brief S6E2D35J0AGV2000A MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_WFG0_DTIF0 = 37;
static const int INTERRUPTS_FRT0_PEAK = 40;
static const int INTERRUPTS_FRT0_ZERO = 41;
static const int INTERRUPTS_ICU0 = 42;
static const int INTERRUPTS_OCU0 = 43;
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
static const int INTERRUPTS_EXTBUS_ERR_GDC_SDRAM = 65;
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
static const int INTERRUPTS_CANFD = 97;
static const int INTERRUPTS_DMAC0 = 99;
static const int INTERRUPTS_DMAC1 = 100;
static const int INTERRUPTS_DMAC2 = 101;
static const int INTERRUPTS_DMAC3 = 102;
static const int INTERRUPTS_DMAC4 = 103;
static const int INTERRUPTS_DMAC5 = 104;
static const int INTERRUPTS_DMAC6 = 105;
static const int INTERRUPTS_DMAC7 = 106;
static const int INTERRUPTS_DSTC = 107;
static const int INTERRUPTS_GDC_CMD_SEQ = 108;
static const int INTERRUPTS_GDC_BLT_ENG = 109;
static const int INTERRUPTS_GDC_DRW_ENG = 110;
static const int INTERRUPTS_GDC_CONT_STRM0 = 111;
static const int INTERRUPTS_GDC_SAFE_STRM0 = 112;
static const int INTERRUPTS_GDC_DISP_STRM0 = 113;
static const int INTERRUPTS_GDC_SIGNA0 = 114;
static const int INTERRUPTS_GDC_DISP0_SYNC0 = 115;
static const int INTERRUPTS_GDC_DISP0_SYNC1 = 116;
static const int INTERRUPTS_GDC_CONT_STRM1 = 117;
static const int INTERRUPTS_GDC_SAFE_STRM1 = 118;
static const int INTERRUPTS_GDC_DISP_STRM1 = 119;
static const int INTERRUPTS_GDC_SIGNA1 = 120;
static const int INTERRUPTS_GDC_DISP1_SYNC0 = 121;
static const int INTERRUPTS_GDC_DISP1_SYNC1 = 122;
static const int INTERRUPTS_GDC_CAP_PLN0 = 123;
static const int INTERRUPTS_GDC_DISP_PLN0 = 124;
static const int INTERRUPTS_GDC_STRG_STRM0 = 125;
static const int INTERRUPTS_GDC_HISTGRM = 126;
static const int INTERRUPTS_DSTC_HW = 128;
static const int INTERRUPTS_PRGCRC_I2S = 133;
static const int INTERRUPTS_SD = 134;
static const int INTERRUPTS_FLASH = 135;
static const int INTERRUPTS_GDC_HSSPI_RX = 136;
static const int INTERRUPTS_GDC_HSSPI_TX = 137;
static const int INTERRUPTS_GDC_HSSPI_FAULT = 138;
static const int INTERRUPTS_GDC_HYPERBUS = 139;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for S6E2D35J0AGV2000A.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for S6E2D35J0AGV2000A.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
