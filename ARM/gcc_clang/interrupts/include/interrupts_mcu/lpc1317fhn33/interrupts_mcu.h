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
* @brief LPC1317FHN33 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_PIN_INT0 = 16;
static const int INTERRUPTS_PIN_INT1 = 17;
static const int INTERRUPTS_PIN_INT2 = 18;
static const int INTERRUPTS_PIN_INT3 = 19;
static const int INTERRUPTS_PIN_INT4 = 20;
static const int INTERRUPTS_PIN_INT5 = 21;
static const int INTERRUPTS_PIN_INT6 = 22;
static const int INTERRUPTS_PIN_INT7 = 23;
static const int INTERRUPTS_GINT0 = 24;
static const int INTERRUPTS_GINT1 = 25;
static const int INTERRUPTS_Reserved0 = 26;
static const int INTERRUPTS_Reserved1 = 27;
static const int INTERRUPTS_RIT = 28;
static const int INTERRUPTS_Reserved2 = 29;
static const int INTERRUPTS_SSP1 = 30;
static const int INTERRUPTS_I2C = 31;
static const int INTERRUPTS_CT16B0 = 32;
static const int INTERRUPTS_CT16B1 = 33;
static const int INTERRUPTS_CT32B0 = 34;
static const int INTERRUPTS_CT32B1 = 35;
static const int INTERRUPTS_SSP0 = 36;
static const int INTERRUPTS_USART = 37;
static const int INTERRUPTS_USB_IRQ = 38;
static const int INTERRUPTS_USB_FIQ = 39;
static const int INTERRUPTS_ADC = 40;
static const int INTERRUPTS_WDT = 41;
static const int INTERRUPTS_BOD = 42;
static const int INTERRUPTS_FMC = 43;
static const int INTERRUPTS_Reserved3 = 44;
static const int INTERRUPTS_Reserved4 = 45;
static const int INTERRUPTS_USBWAKEUP = 46;
static const int INTERRUPTS_Reserved5 = 47;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for LPC1317FHN33.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for LPC1317FHN33.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
