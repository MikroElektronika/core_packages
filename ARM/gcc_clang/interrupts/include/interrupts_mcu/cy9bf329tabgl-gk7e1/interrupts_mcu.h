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
* @brief CY9BF329TABGL-GK7E1 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_CSV = 16;
static const int INTERRUPTS_SWDT = 17;
static const int INTERRUPTS_LVD = 18;
static const int INTERRUPTS_WFG = 19;
static const int INTERRUPTS_EXINT0_7 = 20;
static const int INTERRUPTS_EXINT8_31 = 21;
static const int INTERRUPTS_DTIM_QDU = 22;
static const int INTERRUPTS_MFS0_8_RX = 23;
static const int INTERRUPTS_MFS0_8_TX = 24;
static const int INTERRUPTS_MFS1_9_RX = 25;
static const int INTERRUPTS_MFS1_9_TX = 26;
static const int INTERRUPTS_MFS2_10_RX = 27;
static const int INTERRUPTS_MFS2_10_TX = 28;
static const int INTERRUPTS_MFS3_11_RX = 29;
static const int INTERRUPTS_MFS3_11_TX = 30;
static const int INTERRUPTS_MFS4_12_RX = 31;
static const int INTERRUPTS_MFS4_12_TX = 32;
static const int INTERRUPTS_MFS5_13_RX = 33;
static const int INTERRUPTS_MFS5_13_TX = 34;
static const int INTERRUPTS_MFS6_14_RX = 35;
static const int INTERRUPTS_MFS6_14_TX = 36;
static const int INTERRUPTS_MFS7_15_RX = 37;
static const int INTERRUPTS_MFS7_15_TX = 38;
static const int INTERRUPTS_PPG = 39;
static const int INTERRUPTS_OSC_PLL_WC_RTC = 40;
static const int INTERRUPTS_ADC0 = 41;
static const int INTERRUPTS_ADC1 = 42;
static const int INTERRUPTS_FRTIM = 44;
static const int INTERRUPTS_INCAP = 45;
static const int INTERRUPTS_OUTCOMP = 46;
static const int INTERRUPTS_BTIM0_7 = 47;
static const int INTERRUPTS_USB0F = 50;
static const int INTERRUPTS_USB0F_USB0H = 51;
static const int INTERRUPTS_HDMICEC0 = 52;
static const int INTERRUPTS_HDMICEC1 = 53;
static const int INTERRUPTS_DMAC0 = 54;
static const int INTERRUPTS_DMAC1 = 55;
static const int INTERRUPTS_DMAC2 = 56;
static const int INTERRUPTS_DMAC3 = 57;
static const int INTERRUPTS_DMAC4 = 58;
static const int INTERRUPTS_DMAC5 = 59;
static const int INTERRUPTS_DMAC6 = 60;
static const int INTERRUPTS_DMAC7 = 61;
static const int INTERRUPTS_BTIM8_15 = 62;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for CY9BF329TABGL-GK7E1.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for CY9BF329TABGL-GK7E1.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
