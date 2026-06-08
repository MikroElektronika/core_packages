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
* @brief LPC8N04FHI24 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_PIO0_0 = 16;
static const int INTERRUPTS_PIO0_1 = 17;
static const int INTERRUPTS_PIO0_2 = 18;
static const int INTERRUPTS_PIO0_3 = 19;
static const int INTERRUPTS_PIO0_4 = 20;
static const int INTERRUPTS_PIO0_5 = 21;
static const int INTERRUPTS_PIO0_6 = 22;
static const int INTERRUPTS_PIO0_7 = 23;
static const int INTERRUPTS_PIO0_8 = 24;
static const int INTERRUPTS_PIO0_9 = 25;
static const int INTERRUPTS_PIO0_10 = 26;
static const int INTERRUPTS_RFFIELD = 27;
static const int INTERRUPTS_RTCPWREQ = 28;
static const int INTERRUPTS_NFC = 29;
static const int INTERRUPTS_RTC = 30;
static const int INTERRUPTS_I2C0 = 31;
static const int INTERRUPTS_CTIMER0 = 32;
static const int INTERRUPTS_PMUFLD = 33;
static const int INTERRUPTS_CTIMER1 = 34;
static const int INTERRUPTS_PMUBOD = 35;
static const int INTERRUPTS_SSP0 = 36;
static const int INTERRUPTS_TSEN = 37;
static const int INTERRUPTS_C2D = 38;
static const int INTERRUPTS_Reserved39 = 39;
static const int INTERRUPTS_I2D = 40;
static const int INTERRUPTS_ADCDAC = 41;
static const int INTERRUPTS_WDT = 42;
static const int INTERRUPTS_FLASH = 43;
static const int INTERRUPTS_EEPROM = 44;
static const int INTERRUPTS_Reserved45 = 45;
static const int INTERRUPTS_Reserved46 = 46;
static const int INTERRUPTS_PIO0 = 47;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for LPC8N04FHI24.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for LPC8N04FHI24.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
