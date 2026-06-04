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
* @brief LPC5536JHI48 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_WDT_BOD = 16;
static const int INTERRUPTS_DMA0 = 17;
static const int INTERRUPTS_GINT0 = 18;
static const int INTERRUPTS_GINT1 = 19;
static const int INTERRUPTS_PIN_INT0 = 20;
static const int INTERRUPTS_PIN_INT1 = 21;
static const int INTERRUPTS_PIN_INT2 = 22;
static const int INTERRUPTS_PIN_INT3 = 23;
static const int INTERRUPTS_UTICK0 = 24;
static const int INTERRUPTS_MRT0 = 25;
static const int INTERRUPTS_CTIMER0 = 26;
static const int INTERRUPTS_CTIMER1 = 27;
static const int INTERRUPTS_SCT0 = 28;
static const int INTERRUPTS_CTIMER3 = 29;
static const int INTERRUPTS_FLEXCOMM0 = 30;
static const int INTERRUPTS_FLEXCOMM1 = 31;
static const int INTERRUPTS_FLEXCOMM2 = 32;
static const int INTERRUPTS_FLEXCOMM3 = 33;
static const int INTERRUPTS_FLEXCOMM4 = 34;
static const int INTERRUPTS_FLEXCOMM5 = 35;
static const int INTERRUPTS_FLEXCOMM6 = 36;
static const int INTERRUPTS_FLEXCOMM7 = 37;
static const int INTERRUPTS_ADC0 = 38;
static const int INTERRUPTS_ADC1 = 39;
static const int INTERRUPTS_ACMP = 40;
static const int INTERRUPTS_DMIC = 41;
static const int INTERRUPTS_HWVAD0 = 42;
static const int INTERRUPTS_USB0_NEEDCLK = 43;
static const int INTERRUPTS_USB0 = 44;
static const int INTERRUPTS_RTC = 45;
static const int INTERRUPTS_EZH_ARCH_B0 = 46;
static const int INTERRUPTS_WAKEUP = 47;
static const int INTERRUPTS_PIN_INT4 = 48;
static const int INTERRUPTS_PIN_INT5 = 49;
static const int INTERRUPTS_PIN_INT6 = 50;
static const int INTERRUPTS_PIN_INT7 = 51;
static const int INTERRUPTS_CTIMER2 = 52;
static const int INTERRUPTS_CTIMER4 = 53;
static const int INTERRUPTS_OS_EVENT = 54;
static const int INTERRUPTS_FlexSPI0 = 55;
static const int INTERRUPTS_Reserved56 = 56;
static const int INTERRUPTS_Reserved57 = 57;
static const int INTERRUPTS_Reserved58 = 58;
static const int INTERRUPTS_CAN0_IRQ0 = 59;
static const int INTERRUPTS_CAN0_IRQ1 = 60;
static const int INTERRUPTS_Reserved61 = 61;
static const int INTERRUPTS_Reserved62 = 62;
static const int INTERRUPTS_Reserved63 = 63;
static const int INTERRUPTS_Reserved64 = 64;
static const int INTERRUPTS_SEC_HYPERVISOR_CALL = 65;
static const int INTERRUPTS_SEC_GPIO_INT0_IRQ0 = 66;
static const int INTERRUPTS_SEC_GPIO_INT0_IRQ1 = 67;
static const int INTERRUPTS_Freqme = 68;
static const int INTERRUPTS_SEC_VIO = 69;
static const int INTERRUPTS_ELS = 70;
static const int INTERRUPTS_PKC = 71;
static const int INTERRUPTS_Reserved72 = 72;
static const int INTERRUPTS_POWERQUAD = 73;
static const int INTERRUPTS_DMA1 = 74;
static const int INTERRUPTS_FLEXCOMM8 = 75;
static const int INTERRUPTS_CDOG = 76;
static const int INTERRUPTS_Reserved77 = 77;
static const int INTERRUPTS_I3C0 = 78;
static const int INTERRUPTS_Reserved79 = 79;
static const int INTERRUPTS_Reserved80 = 80;
static const int INTERRUPTS_ELS_IRQ1 = 81;
static const int INTERRUPTS_Tamper = 82;
static const int INTERRUPTS_Reserved83 = 83;
static const int INTERRUPTS_Reserved84 = 84;
static const int INTERRUPTS_Reserved85 = 85;
static const int INTERRUPTS_Reserved86 = 86;
static const int INTERRUPTS_Reserved87 = 87;
static const int INTERRUPTS_Reserved88 = 88;
static const int INTERRUPTS_Reserved89 = 89;
static const int INTERRUPTS_DAC0 = 90;
static const int INTERRUPTS_DAC1 = 91;
static const int INTERRUPTS_DAC2 = 92;
static const int INTERRUPTS_HSCMP0 = 93;
static const int INTERRUPTS_HSCMP1 = 94;
static const int INTERRUPTS_HSCMP2 = 95;
static const int INTERRUPTS_FLEXPWM0_CAPTURE = 96;
static const int INTERRUPTS_FLEXPWM0_FAULT = 97;
static const int INTERRUPTS_FLEXPWM0_RELOAD_ERROR = 98;
static const int INTERRUPTS_FLEXPWM0_COMPARE0 = 99;
static const int INTERRUPTS_FLEXPWM0_RELOAD0 = 100;
static const int INTERRUPTS_FLEXPWM0_COMPARE1 = 101;
static const int INTERRUPTS_FLEXPWM0_RELOAD1 = 102;
static const int INTERRUPTS_FLEXPWM0_COMPARE2 = 103;
static const int INTERRUPTS_FLEXPWM0_RELOAD2 = 104;
static const int INTERRUPTS_FLEXPWM0_COMPARE3 = 105;
static const int INTERRUPTS_FLEXPWM0_RELOAD3 = 106;
static const int INTERRUPTS_FLEXPWM1_CAPTURE = 107;
static const int INTERRUPTS_FLEXPWM1_FAULT = 108;
static const int INTERRUPTS_FLEXPWM1_RELOAD_ERROR = 109;
static const int INTERRUPTS_FLEXPWM1_COMPARE0 = 110;
static const int INTERRUPTS_FLEXPWM1_RELOAD0 = 111;
static const int INTERRUPTS_FLEXPWM1_COMPARE1 = 112;
static const int INTERRUPTS_FLEXPWM1_RELOAD1 = 113;
static const int INTERRUPTS_FLEXPWM1_COMPARE2 = 114;
static const int INTERRUPTS_FLEXPWM1_RELOAD2 = 115;
static const int INTERRUPTS_FLEXPWM1_COMPARE3 = 116;
static const int INTERRUPTS_FLEXPWM1_RELOAD3 = 117;
static const int INTERRUPTS_ENC0_COMPARE = 118;
static const int INTERRUPTS_ENC0_HOME = 119;
static const int INTERRUPTS_ENC0_WDG = 120;
static const int INTERRUPTS_ENC0_IDX = 121;
static const int INTERRUPTS_ENC1_COMPARE = 122;
static const int INTERRUPTS_ENC1_HOME = 123;
static const int INTERRUPTS_ENC1_WDG = 124;
static const int INTERRUPTS_ENC1_IDX = 125;
static const int INTERRUPTS_Reserved126 = 126;
static const int INTERRUPTS_Reserved127 = 127;
static const int INTERRUPTS_ELS_ERR = 128;
static const int INTERRUPTS_PKC_ERR = 129;
static const int INTERRUPTS_Reserved130 = 130;
static const int INTERRUPTS_Reserved131 = 131;
static const int INTERRUPTS_Reserved132 = 132;
static const int INTERRUPTS_Reserved133 = 133;
static const int INTERRUPTS_FLASH = 134;
static const int INTERRUPTS_RAM_PARITY_ECC_ERR = 135;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for LPC5536JHI48.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for LPC5536JHI48.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
