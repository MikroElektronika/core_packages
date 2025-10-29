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
* @brief CY9AF421KPMC1-G-JNE2 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_CSV = 16;
static const int INTERRUPTS_SWDT = 17;
static const int INTERRUPTS_LVD = 18;
static const int INTERRUPTS_WFG = 19;
static const int INTERRUPTS_EXINT0_7 = 20;
static const int INTERRUPTS_EXINT8_23 = 21;
static const int INTERRUPTS_DTIM_QDU = 22;
static const int INTERRUPTS_MFS0RX = 23;
static const int INTERRUPTS_MFS0TX = 24;
static const int INTERRUPTS_MFS1RX = 25;
static const int INTERRUPTS_MFS1TX = 26;
static const int INTERRUPTS_MFS3RX = 29;
static const int INTERRUPTS_MFS3TX = 30;
static const int INTERRUPTS_MFS5RX = 33;
static const int INTERRUPTS_MFS5TX = 34;
static const int INTERRUPTS_PPG = 39;
static const int INTERRUPTS_OSC_PLL_RTC = 40;
static const int INTERRUPTS_ADC0 = 41;
static const int INTERRUPTS_FRTIM = 44;
static const int INTERRUPTS_INCAP = 45;
static const int INTERRUPTS_OUTCOMP = 46;
static const int INTERRUPTS_BTIM0_7 = 47;
static const int INTERRUPTS_CAN1 = 49;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for CY9AF421KPMC1-G-JNE2.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for CY9AF421KPMC1-G-JNE2.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
