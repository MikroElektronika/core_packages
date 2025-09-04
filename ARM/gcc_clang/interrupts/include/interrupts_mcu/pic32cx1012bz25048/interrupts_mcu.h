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
* @brief PIC32CX1012BZ25048 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_RTC = 16;
static const int INTERRUPTS_EIC = 17;
static const int INTERRUPTS_FREQM = 18;
static const int INTERRUPTS_FLASH_CONTROL = 19;
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
static const int INTERRUPTS_SERCOM2 = 30;
static const int INTERRUPTS_SERCOM3 = 31;
static const int INTERRUPTS_TCC0 = 32;
static const int INTERRUPTS_TCC1 = 33;
static const int INTERRUPTS_TCC2 = 34;
static const int INTERRUPTS_TC0 = 35;
static const int INTERRUPTS_TC1 = 36;
static const int INTERRUPTS_TC2 = 37;
static const int INTERRUPTS_TC3 = 38;
static const int INTERRUPTS_ADCHS = 39;
static const int INTERRUPTS_AC = 40;
static const int INTERRUPTS_AES = 41;
static const int INTERRUPTS_TRNG = 42;
static const int INTERRUPTS_ICM = 43;
static const int INTERRUPTS_PUKCC = 44;
static const int INTERRUPTS_QSPI = 45;
static const int INTERRUPTS_ZB_INT0 = 46;
static const int INTERRUPTS_BT_INT0 = 47;
static const int INTERRUPTS_BT_INT1 = 48;
static const int INTERRUPTS_ARBITER = 49;
static const int INTERRUPTS_ADC_FAULT = 50;
static const int INTERRUPTS_ADC_EOS = 51;
static const int INTERRUPTS_ADC_BGVR_RDY = 52;
static const int INTERRUPTS_CLKI_WAKEUP_NMI = 53;
static const int INTERRUPTS_BT_LC = 54;
static const int INTERRUPTS_BT_RC = 55;
static const int INTERRUPTS_PERIPH_MAX = 55;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for PIC32CX1012BZ25048.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for PIC32CX1012BZ25048.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
