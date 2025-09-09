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
* @brief PIC32CX5109BZ31048 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_RTC = 16;
static const int INTERRUPTS_EIC = 17;
static const int INTERRUPTS_FREQM = 18;
static const int INTERRUPTS_NVM = 19;
static const int INTERRUPTS_CHANGE_NOTICE_A = 20;
static const int INTERRUPTS_CHANGE_NOTICE_B = 21;
static const int INTERRUPTS_DMAC_0_3 = 22;
static const int INTERRUPTS_DMAC_4_15 = 23;
static const int INTERRUPTS_EVSYS_0_3 = 24;
static const int INTERRUPTS_EVSYS_4_11 = 25;
static const int INTERRUPTS_PAC = 26;
static const int INTERRUPTS_RAMECC = 27;
static const int INTERRUPTS_SERCOM0 = 28;
static const int INTERRUPTS_SERCOM1 = 29;
static const int INTERRUPTS_TCC0 = 30;
static const int INTERRUPTS_TCC1 = 31;
static const int INTERRUPTS_TCC2 = 32;
static const int INTERRUPTS_TC0 = 33;
static const int INTERRUPTS_TC1 = 34;
static const int INTERRUPTS_TC2 = 35;
static const int INTERRUPTS_TC3 = 36;
static const int INTERRUPTS_TC4 = 37;
static const int INTERRUPTS_TC5 = 38;
static const int INTERRUPTS_TC6 = 39;
static const int INTERRUPTS_TC7 = 40;
static const int INTERRUPTS_ADCHS_IRQ = 41;
static const int INTERRUPTS_AC = 42;
static const int INTERRUPTS_SILEX_0 = 43;
static const int INTERRUPTS_SILEX_1 = 44;
static const int INTERRUPTS_QSPI = 45;
static const int INTERRUPTS_ZB_INT0 = 46;
static const int INTERRUPTS_BT_INT0 = 47;
static const int INTERRUPTS_BT_INT1 = 48;
static const int INTERRUPTS_ARBITER = 49;
static const int INTERRUPTS_ADCHS_FAULT = 50;
static const int INTERRUPTS_ADCHS_FCC = 51;
static const int INTERRUPTS_ADCHS_BGVR_RDY = 52;
static const int INTERRUPTS_CLKI_WAKEUP_NMI = 53;
static const int INTERRUPTS_CVD = 54;
static const int INTERRUPTS_DGI_SPI = 55;
static const int INTERRUPTS_SERCOM2 = 56;
static const int INTERRUPTS_BT_LC = 58;
static const int INTERRUPTS_PERIPH_MAX = 58;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for PIC32CX5109BZ31048.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for PIC32CX5109BZ31048.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
