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
* @brief extracted_ATSAMRH71F20C MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_SUPC = 16;
static const int INTERRUPTS_RSTC = 17;
static const int INTERRUPTS_RTC = 18;
static const int INTERRUPTS_RTT = 19;
static const int INTERRUPTS_WDT = 20;
static const int INTERRUPTS_PMC = 21;
static const int INTERRUPTS_MATRIX0 = 22;
static const int INTERRUPTS_FLEXCOM0 = 23;
static const int INTERRUPTS_FLEXCOM1 = 24;
static const int INTERRUPTS_NMIC = 25;
static const int INTERRUPTS_PIOA = 26;
static const int INTERRUPTS_PIOB = 27;
static const int INTERRUPTS_PIOC = 28;
static const int INTERRUPTS_FLEXCOM2 = 29;
static const int INTERRUPTS_FLEXCOM3 = 30;
static const int INTERRUPTS_FLEXCOM4 = 31;
static const int INTERRUPTS_PIOD = 32;
static const int INTERRUPTS_PIOE = 33;
static const int INTERRUPTS_CCW = 34;
static const int INTERRUPTS_CCF = 35;
static const int INTERRUPTS_FPU = 36;
static const int INTERRUPTS_IXC = 37;
static const int INTERRUPTS_FLEXCOM5 = 38;
static const int INTERRUPTS_FLEXCOM6 = 39;
static const int INTERRUPTS_FLEXCOM7 = 40;
static const int INTERRUPTS_TC0_CH0 = 41;
static const int INTERRUPTS_TC0_CH1 = 42;
static const int INTERRUPTS_TC0_CH2 = 43;
static const int INTERRUPTS_TC1_CH0 = 44;
static const int INTERRUPTS_TC1_CH1 = 45;
static const int INTERRUPTS_TC1_CH2 = 46;
static const int INTERRUPTS_PWM0 = 47;
static const int INTERRUPTS_PWM1 = 48;
static const int INTERRUPTS_ICM = 49;
static const int INTERRUPTS_PIOF = 50;
static const int INTERRUPTS_PIOG = 51;
static const int INTERRUPTS_MCAN0_INT0 = 52;
static const int INTERRUPTS_MCAN0_INT1 = 53;
static const int INTERRUPTS_MCAN1_INT0 = 54;
static const int INTERRUPTS_MCAN1_INT1 = 55;
static const int INTERRUPTS_TCMECC_INTFIX = 56;
static const int INTERRUPTS_TCMECC_INTNOFIX = 57;
static const int INTERRUPTS_FLEXRAMECC_INTFIX = 58;
static const int INTERRUPTS_FLEXRAMECC_INTNOFIX = 59;
static const int INTERRUPTS_SHA = 60;
static const int INTERRUPTS_FLEXCOM8 = 61;
static const int INTERRUPTS_FLEXCOM9 = 62;
static const int INTERRUPTS_WDT1 = 63;
static const int INTERRUPTS_QSPI = 65;
static const int INTERRUPTS_HEFC_INT0 = 66;
static const int INTERRUPTS_HEFC_INTFIX = 67;
static const int INTERRUPTS_HEFC_INTNOFIX = 68;
static const int INTERRUPTS_TC2_CH0 = 69;
static const int INTERRUPTS_TC2_CH1 = 70;
static const int INTERRUPTS_TC2_CH2 = 71;
static const int INTERRUPTS_TC3_CH0 = 72;
static const int INTERRUPTS_TC3_CH1 = 73;
static const int INTERRUPTS_TC3_CH2 = 74;
static const int INTERRUPTS_HEMC_INTSDRAMC = 75;
static const int INTERRUPTS_HEMC_INTFIX = 76;
static const int INTERRUPTS_HEMC_INTNOFIX = 77;
static const int INTERRUPTS_SFR = 78;
static const int INTERRUPTS_TRNG = 79;
static const int INTERRUPTS_XDMAC = 80;
static const int INTERRUPTS_SPW = 81;
static const int INTERRUPTS_IP1553 = 84;
static const int INTERRUPTS_GMAC = 85;
static const int INTERRUPTS_GMAC_Q1 = 86;
static const int INTERRUPTS_GMAC_Q2 = 87;
static const int INTERRUPTS_GMAC_Q3 = 88;
static const int INTERRUPTS_GMAC_Q4 = 89;
static const int INTERRUPTS_GMAC_Q5 = 90;
static const int INTERRUPTS_PERIPH_MAX = 90;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for extracted_ATSAMRH71F20C.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for extracted_ATSAMRH71F20C.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
