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
* @brief extracted_ATSAML22G17A MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_RESET = 1;
static const int INTERRUPTS_NONMASKABLEINT = 2;
static const int INTERRUPTS_HARDFAULT = 3;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_PENDSV = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_MCLK = 16;
static const int INTERRUPTS_OSCCTRL = 16;
static const int INTERRUPTS_OSC32KCTRL = 16;
static const int INTERRUPTS_PAC = 16;
static const int INTERRUPTS_PM = 16;
static const int INTERRUPTS_SUPC = 16;
static const int INTERRUPTS_WDT = 17;
static const int INTERRUPTS_RTC = 18;
static const int INTERRUPTS_EIC = 19;
static const int INTERRUPTS_FREQM = 20;
static const int INTERRUPTS_USB = 21;
static const int INTERRUPTS_NVMCTRL = 22;
static const int INTERRUPTS_DMAC = 23;
static const int INTERRUPTS_EVSYS = 24;
static const int INTERRUPTS_SERCOM0 = 25;
static const int INTERRUPTS_SERCOM1 = 26;
static const int INTERRUPTS_SERCOM2 = 27;
static const int INTERRUPTS_SERCOM3 = 28;
static const int INTERRUPTS_TCC0 = 31;
static const int INTERRUPTS_TC0 = 32;
static const int INTERRUPTS_TC1 = 33;
static const int INTERRUPTS_TC2 = 34;
static const int INTERRUPTS_TC3 = 35;
static const int INTERRUPTS_ADC = 36;
static const int INTERRUPTS_AC = 37;
static const int INTERRUPTS_PTC = 38;
static const int INTERRUPTS_SLCD = 39;
static const int INTERRUPTS_AES = 40;
static const int INTERRUPTS_TRNG = 41;
static const int INTERRUPTS_PERIPH_MAX = 41;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for extracted_ATSAML22G17A.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for extracted_ATSAML22G17A.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
