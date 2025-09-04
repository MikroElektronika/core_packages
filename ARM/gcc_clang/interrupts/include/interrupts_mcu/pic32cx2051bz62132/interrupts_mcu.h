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
* @brief PIC32CX2051BZ62132 MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_CHANGE_NOTICE_C = 22;
static const int INTERRUPTS_CHANGE_NOTICE_D = 23;
static const int INTERRUPTS_CHANGE_NOTICE_E = 24;
static const int INTERRUPTS_DMAC_0_3 = 25;
static const int INTERRUPTS_DMAC_4_15 = 26;
static const int INTERRUPTS_EVSYS_0_3 = 27;
static const int INTERRUPTS_EVSYS_4_11 = 28;
static const int INTERRUPTS_PAC = 29;
static const int INTERRUPTS_RAMECC = 30;
static const int INTERRUPTS_SERCOM0 = 31;
static const int INTERRUPTS_SERCOM1 = 32;
static const int INTERRUPTS_SERCOM2 = 33;
static const int INTERRUPTS_SERCOM3 = 34;
static const int INTERRUPTS_SERCOM4 = 35;
static const int INTERRUPTS_SERCOM5 = 36;
static const int INTERRUPTS_SERCOM6 = 37;
static const int INTERRUPTS_TCC0 = 38;
static const int INTERRUPTS_TCC1 = 39;
static const int INTERRUPTS_TCC2 = 40;
static const int INTERRUPTS_TC0 = 41;
static const int INTERRUPTS_TC1 = 42;
static const int INTERRUPTS_TC2 = 43;
static const int INTERRUPTS_TC3 = 44;
static const int INTERRUPTS_TC4 = 45;
static const int INTERRUPTS_TC5 = 46;
static const int INTERRUPTS_TC6 = 47;
static const int INTERRUPTS_TC7 = 48;
static const int INTERRUPTS_TC8 = 49;
static const int INTERRUPTS_TC9 = 50;
static const int INTERRUPTS_ADCHS_IRQ = 51;
static const int INTERRUPTS_ADCHS_FAULT = 52;
static const int INTERRUPTS_ADCHS_FCC = 53;
static const int INTERRUPTS_ADCHS_BGVR_RDY = 54;
static const int INTERRUPTS_AC = 55;
static const int INTERRUPTS_CRYPTO_0 = 56;
static const int INTERRUPTS_CRYPTO_1 = 57;
static const int INTERRUPTS_QSPI = 58;
static const int INTERRUPTS_ZB_INT0 = 59;
static const int INTERRUPTS_BT_INT0 = 60;
static const int INTERRUPTS_BT_INT1 = 61;
static const int INTERRUPTS_ARBITER = 62;
static const int INTERRUPTS_CLKI_WAKEUP_NMI = 63;
static const int INTERRUPTS_CVD = 64;
static const int INTERRUPTS_CRYPTO_2 = 65;
static const int INTERRUPTS_QEI = 66;
static const int INTERRUPTS_CAN0 = 67;
static const int INTERRUPTS_CAN1 = 68;
static const int INTERRUPTS_ETH = 69;
static const int INTERRUPTS_USB = 70;
static const int INTERRUPTS_PLL_LOCK_BOOT = 71;
static const int INTERRUPTS_PLL_LOCK_USER = 72;
static const int INTERRUPTS_BT_LC = 73;
static const int INTERRUPTS_PERIPH_MAX = 73;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for PIC32CX2051BZ62132.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for PIC32CX2051BZ62132.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
