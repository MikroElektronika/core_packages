/****************************************************************************
**
** Copyright (C) 2024 MikroElektronika d.o.o.
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
* @brief ATSAMDA1E14A MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NONMASKABLEINT = 2;
static const int INTERRUPTS_HARDFAULT = 3;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_PENDSV = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_PM = 16;
static const int INTERRUPTS_SYSCTRL = 17;
static const int INTERRUPTS_WDT = 18;
static const int INTERRUPTS_RTC = 19;
static const int INTERRUPTS_EIC = 20;
static const int INTERRUPTS_NVMCTRL = 21;
static const int INTERRUPTS_DMAC = 22;
static const int INTERRUPTS_USB = 23;
static const int INTERRUPTS_EVSYS = 24;
static const int INTERRUPTS_SERCOM0 = 25;
static const int INTERRUPTS_SERCOM1 = 26;
static const int INTERRUPTS_SERCOM2 = 27;
static const int INTERRUPTS_SERCOM3 = 28;
static const int INTERRUPTS_SERCOM4 = 29;
static const int INTERRUPTS_SERCOM5 = 30;
static const int INTERRUPTS_TCC0 = 31;
static const int INTERRUPTS_TCC1 = 32;
static const int INTERRUPTS_TCC2 = 33;
static const int INTERRUPTS_TC3 = 34;
static const int INTERRUPTS_TC4 = 35;
static const int INTERRUPTS_TC5 = 36;
static const int INTERRUPTS_TC6 = 37;
static const int INTERRUPTS_TC7 = 38;
static const int INTERRUPTS_ADC = 39;
static const int INTERRUPTS_AC = 40;
static const int INTERRUPTS_DAC = 41;
static const int INTERRUPTS_PTC = 42;
static const int INTERRUPTS_I2S = 43;
static const int INTERRUPTS_PERIPH_COUNT = 45;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for ATSAMDA1E14A.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for ATSAMDA1E14A.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
