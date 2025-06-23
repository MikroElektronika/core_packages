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
* @brief extracted_ATSAML21J16B MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_NVMCTRL = 20;
static const int INTERRUPTS_DMAC = 21;
static const int INTERRUPTS_USB = 22;
static const int INTERRUPTS_EVSYS = 23;
static const int INTERRUPTS_SERCOM0 = 24;
static const int INTERRUPTS_SERCOM1 = 25;
static const int INTERRUPTS_SERCOM2 = 26;
static const int INTERRUPTS_SERCOM3 = 27;
static const int INTERRUPTS_SERCOM4 = 28;
static const int INTERRUPTS_SERCOM5 = 29;
static const int INTERRUPTS_TCC0 = 30;
static const int INTERRUPTS_TCC1 = 31;
static const int INTERRUPTS_TCC2 = 32;
static const int INTERRUPTS_TC0 = 33;
static const int INTERRUPTS_TC1 = 34;
static const int INTERRUPTS_TC2 = 35;
static const int INTERRUPTS_TC3 = 36;
static const int INTERRUPTS_TC4 = 37;
static const int INTERRUPTS_ADC = 38;
static const int INTERRUPTS_AC = 39;
static const int INTERRUPTS_DAC = 40;
static const int INTERRUPTS_PTC = 41;
static const int INTERRUPTS_AES = 42;
static const int INTERRUPTS_TRNG = 43;
static const int INTERRUPTS_PERIPH_MAX = 43;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for extracted_ATSAML21J16B.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for extracted_ATSAML21J16B.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
