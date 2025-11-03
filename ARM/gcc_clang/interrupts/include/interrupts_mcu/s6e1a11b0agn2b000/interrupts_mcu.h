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
* @brief S6E1A11B0AGN2B000 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_CSV = 16;
static const int INTERRUPTS_SWDT = 17;
static const int INTERRUPTS_LVD = 18;
static const int INTERRUPTS_MFT0_WFG_DTIF = 19;
static const int INTERRUPTS_EXINT0_7 = 20;
static const int INTERRUPTS_DT_QPRC = 22;
static const int INTERRUPTS_MFS0_RX = 23;
static const int INTERRUPTS_MFS0_TX = 24;
static const int INTERRUPTS_MFS1_RX = 25;
static const int INTERRUPTS_MFS1_TX = 26;
static const int INTERRUPTS_MFS3_RX = 29;
static const int INTERRUPTS_MFS3_TX = 30;
static const int INTERRUPTS_DMAC0 = 35;
static const int INTERRUPTS_DMAC1 = 36;
static const int INTERRUPTS_PPG00_02_04_08_10_12_16_18_20 = 39;
static const int INTERRUPTS_TIM = 40;
static const int INTERRUPTS_ADC0 = 41;
static const int INTERRUPTS_MFT0_FRT = 44;
static const int INTERRUPTS_MFT0_ICU = 45;
static const int INTERRUPTS_MFT0_OCU = 46;
static const int INTERRUPTS_BT0_3_FLASHIF = 47;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for S6E1A11B0AGN2B000.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for S6E1A11B0AGN2B000.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
