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
* @brief S6E1C32D0AGN20000 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_CSV_SWDT_LVD = 16;
static const int INTERRUPTS_MFS0_RX_TX = 17;
static const int INTERRUPTS_MFS1_RX_TX = 18;
static const int INTERRUPTS_MFS3_RX_TX = 20;
static const int INTERRUPTS_MFS4_RX_TX = 21;
static const int INTERRUPTS_MFS6_RX_TX_I2CSLAVE = 23;
static const int INTERRUPTS_MFS7_RX_TX = 24;
static const int INTERRUPTS_ADC0 = 25;
static const int INTERRUPTS_USB0_F_ED123 = 26;
static const int INTERRUPTS_USB0_F_ED450I = 27;
static const int INTERRUPTS_USB0_F_ED0O_ST = 28;
static const int INTERRUPTS_USB0_H = 29;
static const int INTERRUPTS_TIM = 30;
static const int INTERRUPTS_WC_RTC_DT = 31;
static const int INTERRUPTS_EXINT0_1 = 32;
static const int INTERRUPTS_EXINT2_3 = 33;
static const int INTERRUPTS_EXINT4_5 = 34;
static const int INTERRUPTS_EXINT6_7 = 35;
static const int INTERRUPTS_EXINT8 = 36;
static const int INTERRUPTS_EXINT12_13 = 38;
static const int INTERRUPTS_EXINT15 = 39;
static const int INTERRUPTS_BT0_4 = 40;
static const int INTERRUPTS_BT1_5 = 41;
static const int INTERRUPTS_BT2_6 = 42;
static const int INTERRUPTS_BT3_7 = 43;
static const int INTERRUPTS_HDMICEC0_1 = 44;
static const int INTERRUPTS_SMCIF1_FLASHIF = 45;
static const int INTERRUPTS_DSTC = 46;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for S6E1C32D0AGN20000.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for S6E1C32D0AGN20000.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
