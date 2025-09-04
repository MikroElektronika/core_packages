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
* @brief PIC32CX2051MTC128 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_SUPC = 16;
static const int INTERRUPTS_RSTC = 17;
static const int INTERRUPTS_RTC = 18;
static const int INTERRUPTS_RTT = 19;
static const int INTERRUPTS_DWDT0 = 20;
static const int INTERRUPTS_DWDT1 = 21;
static const int INTERRUPTS_PMC = 22;
static const int INTERRUPTS_SEFC0 = 23;
static const int INTERRUPTS_SEFC1 = 24;
static const int INTERRUPTS_FLEXCOM0 = 25;
static const int INTERRUPTS_FLEXCOM1 = 26;
static const int INTERRUPTS_FLEXCOM2 = 27;
static const int INTERRUPTS_FLEXCOM3 = 28;
static const int INTERRUPTS_FLEXCOM4 = 29;
static const int INTERRUPTS_FLEXCOM5 = 30;
static const int INTERRUPTS_FLEXCOM6 = 31;
static const int INTERRUPTS_FLEXCOM7 = 32;
static const int INTERRUPTS_PIOA = 33;
static const int INTERRUPTS_PIOA_SEC = 34;
static const int INTERRUPTS_PIOB = 35;
static const int INTERRUPTS_PIOB_SEC = 36;
static const int INTERRUPTS_PIOC = 37;
static const int INTERRUPTS_PIOC_SEC = 38;
static const int INTERRUPTS_QSPI = 39;
static const int INTERRUPTS_ADC = 40;
static const int INTERRUPTS_ACC = 41;
static const int INTERRUPTS_IPC0 = 44;
static const int INTERRUPTS_SLCDC = 45;
static const int INTERRUPTS_MEM2MEM0 = 46;
static const int INTERRUPTS_TC0_CH0 = 47;
static const int INTERRUPTS_TC0_CH1 = 48;
static const int INTERRUPTS_TC0_CH2 = 49;
static const int INTERRUPTS_TC1_CH0 = 50;
static const int INTERRUPTS_TC1_CH1 = 51;
static const int INTERRUPTS_TC1_CH2 = 52;
static const int INTERRUPTS_TC2_CH0 = 53;
static const int INTERRUPTS_TC2_CH1 = 54;
static const int INTERRUPTS_TC2_CH2 = 55;
static const int INTERRUPTS_TC0_C0SEC = 56;
static const int INTERRUPTS_TC0_C1SEC = 57;
static const int INTERRUPTS_TC0_C2SEC = 58;
static const int INTERRUPTS_TC1_C0SEC = 59;
static const int INTERRUPTS_TC1_C1SEC = 60;
static const int INTERRUPTS_TC1_C2SEC = 61;
static const int INTERRUPTS_TC2_C0SEC = 62;
static const int INTERRUPTS_TC2_C1SEC = 63;
static const int INTERRUPTS_TC2_C2SEC = 64;
static const int INTERRUPTS_AES = 65;
static const int INTERRUPTS_AES_AESSEC = 66;
static const int INTERRUPTS_AESB = 67;
static const int INTERRUPTS_AESB_AESBSEC = 68;
static const int INTERRUPTS_SHA = 69;
static const int INTERRUPTS_SHA_SHASEC = 70;
static const int INTERRUPTS_TRNG = 71;
static const int INTERRUPTS_TRNG_TRNGSEC = 72;
static const int INTERRUPTS_ICM = 73;
static const int INTERRUPTS_ICM_ICMSEC = 74;
static const int INTERRUPTS_CPKCC = 75;
static const int INTERRUPTS_MATRIX0 = 76;
static const int INTERRUPTS_MATRIX1 = 77;
static const int INTERRUPTS_SUPC_WKUP3 = 78;
static const int INTERRUPTS_SUPC_WKUP4 = 79;
static const int INTERRUPTS_SUPC_WKUP5 = 80;
static const int INTERRUPTS_SUPC_WKUP6 = 81;
static const int INTERRUPTS_SUPC_WKUP7 = 82;
static const int INTERRUPTS_SUPC_WKUP8 = 83;
static const int INTERRUPTS_SUPC_WKUP9 = 84;
static const int INTERRUPTS_SUPC_WKUP10 = 85;
static const int INTERRUPTS_SUPC_WKUP11 = 86;
static const int INTERRUPTS_SUPC_WKUP12 = 87;
static const int INTERRUPTS_SUPC_WKUP13 = 88;
static const int INTERRUPTS_SUPC_WKUP14 = 89;
static const int INTERRUPTS_SUPC_WKUP15 = 90;
static const int INTERRUPTS_MEM2MEM1 = 94;
static const int INTERRUPTS_TC3_CH0 = 95;
static const int INTERRUPTS_TC3_CH1 = 96;
static const int INTERRUPTS_TC3_CH2 = 97;
static const int INTERRUPTS_TC3_C0SEC = 98;
static const int INTERRUPTS_TC3_C1SEC = 99;
static const int INTERRUPTS_TC3_C2SEC = 100;
static const int INTERRUPTS_PIOD = 101;
static const int INTERRUPTS_PIOD_SEC = 102;
static const int INTERRUPTS_UART = 103;
static const int INTERRUPTS_IPC1 = 104;
static const int INTERRUPTS_MCSPI = 105;
static const int INTERRUPTS_PWM = 106;
static const int INTERRUPTS_MATRIX2 = 110;
static const int INTERRUPTS_MATRIX3 = 111;
static const int INTERRUPTS_PERIPH_MAX = 111;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for PIC32CX2051MTC128.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for PIC32CX2051MTC128.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
