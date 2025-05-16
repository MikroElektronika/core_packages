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
* @brief extracted_ATSAMD51J20A MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_RESET = 1;
static const int INTERRUPTS_NONMASKABLEINT = 2;
static const int INTERRUPTS_HARDFAULT = 3;
static const int INTERRUPTS_MEMORYMANAGEMENT = 4;
static const int INTERRUPTS_BUSFAULT = 5;
static const int INTERRUPTS_USAGEFAULT = 6;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_DEBUGMONITOR = 12;
static const int INTERRUPTS_PENDSV = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_PM = 16;
static const int INTERRUPTS_MCLK = 17;
static const int INTERRUPTS_OSCCTRL_XOSC0 = 18;
static const int INTERRUPTS_OSCCTRL_XOSC1 = 19;
static const int INTERRUPTS_OSCCTRL_DFLL = 20;
static const int INTERRUPTS_OSCCTRL_DPLL0 = 21;
static const int INTERRUPTS_OSCCTRL_DPLL1 = 22;
static const int INTERRUPTS_OSC32KCTRL = 23;
static const int INTERRUPTS_SUPC_OTHER = 24;
static const int INTERRUPTS_SUPC_BODDET = 25;
static const int INTERRUPTS_WDT = 26;
static const int INTERRUPTS_RTC = 27;
static const int INTERRUPTS_EIC_EXTINT_0 = 28;
static const int INTERRUPTS_EIC_EXTINT_1 = 29;
static const int INTERRUPTS_EIC_EXTINT_2 = 30;
static const int INTERRUPTS_EIC_EXTINT_3 = 31;
static const int INTERRUPTS_EIC_EXTINT_4 = 32;
static const int INTERRUPTS_EIC_EXTINT_5 = 33;
static const int INTERRUPTS_EIC_EXTINT_6 = 34;
static const int INTERRUPTS_EIC_EXTINT_7 = 35;
static const int INTERRUPTS_EIC_EXTINT_8 = 36;
static const int INTERRUPTS_EIC_EXTINT_9 = 37;
static const int INTERRUPTS_EIC_EXTINT_10 = 38;
static const int INTERRUPTS_EIC_EXTINT_11 = 39;
static const int INTERRUPTS_EIC_EXTINT_12 = 40;
static const int INTERRUPTS_EIC_EXTINT_13 = 41;
static const int INTERRUPTS_EIC_EXTINT_14 = 42;
static const int INTERRUPTS_EIC_EXTINT_15 = 43;
static const int INTERRUPTS_FREQM = 44;
static const int INTERRUPTS_NVMCTRL_0 = 45;
static const int INTERRUPTS_NVMCTRL_1 = 46;
static const int INTERRUPTS_DMAC_0 = 47;
static const int INTERRUPTS_DMAC_1 = 48;
static const int INTERRUPTS_DMAC_2 = 49;
static const int INTERRUPTS_DMAC_3 = 50;
static const int INTERRUPTS_DMAC_OTHER = 51;
static const int INTERRUPTS_EVSYS_0 = 52;
static const int INTERRUPTS_EVSYS_1 = 53;
static const int INTERRUPTS_EVSYS_2 = 54;
static const int INTERRUPTS_EVSYS_3 = 55;
static const int INTERRUPTS_EVSYS_OTHER = 56;
static const int INTERRUPTS_PAC = 57;
static const int INTERRUPTS_RAMECC = 61;
static const int INTERRUPTS_SERCOM0_0 = 62;
static const int INTERRUPTS_SERCOM0_1 = 63;
static const int INTERRUPTS_SERCOM0_2 = 64;
static const int INTERRUPTS_SERCOM0_OTHER = 65;
static const int INTERRUPTS_SERCOM1_0 = 66;
static const int INTERRUPTS_SERCOM1_1 = 67;
static const int INTERRUPTS_SERCOM1_2 = 68;
static const int INTERRUPTS_SERCOM1_OTHER = 69;
static const int INTERRUPTS_SERCOM2_0 = 70;
static const int INTERRUPTS_SERCOM2_1 = 71;
static const int INTERRUPTS_SERCOM2_2 = 72;
static const int INTERRUPTS_SERCOM2_OTHER = 73;
static const int INTERRUPTS_SERCOM3_0 = 74;
static const int INTERRUPTS_SERCOM3_1 = 75;
static const int INTERRUPTS_SERCOM3_2 = 76;
static const int INTERRUPTS_SERCOM3_OTHER = 77;
static const int INTERRUPTS_SERCOM4_0 = 78;
static const int INTERRUPTS_SERCOM4_1 = 79;
static const int INTERRUPTS_SERCOM4_2 = 80;
static const int INTERRUPTS_SERCOM4_OTHER = 81;
static const int INTERRUPTS_SERCOM5_0 = 82;
static const int INTERRUPTS_SERCOM5_1 = 83;
static const int INTERRUPTS_SERCOM5_2 = 84;
static const int INTERRUPTS_SERCOM5_OTHER = 85;
static const int INTERRUPTS_USB_OTHER = 96;
static const int INTERRUPTS_USB_SOF_HSOF = 97;
static const int INTERRUPTS_USB_TRCPT0 = 98;
static const int INTERRUPTS_USB_TRCPT1 = 99;
static const int INTERRUPTS_TCC0_OTHER = 101;
static const int INTERRUPTS_TCC0_MC0 = 102;
static const int INTERRUPTS_TCC0_MC1 = 103;
static const int INTERRUPTS_TCC0_MC2 = 104;
static const int INTERRUPTS_TCC0_MC3 = 105;
static const int INTERRUPTS_TCC0_MC4 = 106;
static const int INTERRUPTS_TCC0_MC5 = 107;
static const int INTERRUPTS_TCC1_OTHER = 108;
static const int INTERRUPTS_TCC1_MC0 = 109;
static const int INTERRUPTS_TCC1_MC1 = 110;
static const int INTERRUPTS_TCC1_MC2 = 111;
static const int INTERRUPTS_TCC1_MC3 = 112;
static const int INTERRUPTS_TCC2_OTHER = 113;
static const int INTERRUPTS_TCC2_MC0 = 114;
static const int INTERRUPTS_TCC2_MC1 = 115;
static const int INTERRUPTS_TCC2_MC2 = 116;
static const int INTERRUPTS_TCC3_OTHER = 117;
static const int INTERRUPTS_TCC3_MC0 = 118;
static const int INTERRUPTS_TCC3_MC1 = 119;
static const int INTERRUPTS_TCC4_OTHER = 120;
static const int INTERRUPTS_TCC4_MC0 = 121;
static const int INTERRUPTS_TCC4_MC1 = 122;
static const int INTERRUPTS_TC0 = 123;
static const int INTERRUPTS_TC1 = 124;
static const int INTERRUPTS_TC2 = 125;
static const int INTERRUPTS_TC3 = 126;
static const int INTERRUPTS_TC4 = 127;
static const int INTERRUPTS_TC5 = 128;
static const int INTERRUPTS_PDEC_OTHER = 131;
static const int INTERRUPTS_PDEC_MC0 = 132;
static const int INTERRUPTS_PDEC_MC1 = 133;
static const int INTERRUPTS_ADC0_OTHER = 134;
static const int INTERRUPTS_ADC0_RESRDY = 135;
static const int INTERRUPTS_ADC1_OTHER = 136;
static const int INTERRUPTS_ADC1_RESRDY = 137;
static const int INTERRUPTS_AC = 138;
static const int INTERRUPTS_DAC_OTHER = 139;
static const int INTERRUPTS_DAC_EMPTY_0 = 140;
static const int INTERRUPTS_DAC_EMPTY_1 = 141;
static const int INTERRUPTS_DAC_RESRDY_0 = 142;
static const int INTERRUPTS_DAC_RESRDY_1 = 143;
static const int INTERRUPTS_I2S = 144;
static const int INTERRUPTS_PCC = 145;
static const int INTERRUPTS_AES = 146;
static const int INTERRUPTS_TRNG = 147;
static const int INTERRUPTS_ICM = 148;
static const int INTERRUPTS_PUKCC = 149;
static const int INTERRUPTS_QSPI = 150;
static const int INTERRUPTS_SDHC0 = 151;
static const int INTERRUPTS_PERIPH_MAX = 151;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for extracted_ATSAMD51J20A.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for extracted_ATSAMD51J20A.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
