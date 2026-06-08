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
* @brief LPC54607J256ET180 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_WDT_BOD = 16;
static const int INTERRUPTS_DMA0 = 17;
static const int INTERRUPTS_GINT0 = 18;
static const int INTERRUPTS_GINT1 = 19;
static const int INTERRUPTS_PIN_INT0 = 20;
static const int INTERRUPTS_PIN_INT1 = 21;
static const int INTERRUPTS_PIN_INT2 = 22;
static const int INTERRUPTS_PIN_INT3 = 23;
static const int INTERRUPTS_UTICK0 = 24;
static const int INTERRUPTS_MRT0 = 25;
static const int INTERRUPTS_CTIMER0 = 26;
static const int INTERRUPTS_CTIMER1 = 27;
static const int INTERRUPTS_SCT0 = 28;
static const int INTERRUPTS_CTIMER3 = 29;
static const int INTERRUPTS_FLEXCOMM0 = 30;
static const int INTERRUPTS_FLEXCOMM1 = 31;
static const int INTERRUPTS_FLEXCOMM2 = 32;
static const int INTERRUPTS_FLEXCOMM3 = 33;
static const int INTERRUPTS_FLEXCOMM4 = 34;
static const int INTERRUPTS_FLEXCOMM5 = 35;
static const int INTERRUPTS_FLEXCOMM6 = 36;
static const int INTERRUPTS_FLEXCOMM7 = 37;
static const int INTERRUPTS_ADC0_SEQA = 38;
static const int INTERRUPTS_ADC0_SEQB = 39;
static const int INTERRUPTS_ADC0_THCMP = 40;
static const int INTERRUPTS_DMIC0 = 41;
static const int INTERRUPTS_HWVAD0 = 42;
static const int INTERRUPTS_USB0_NEEDCLK = 43;
static const int INTERRUPTS_USB0 = 44;
static const int INTERRUPTS_RTC = 45;
static const int INTERRUPTS_Reserved46 = 46;
static const int INTERRUPTS_Reserved47 = 47;
static const int INTERRUPTS_PIN_INT4 = 48;
static const int INTERRUPTS_PIN_INT5 = 49;
static const int INTERRUPTS_PIN_INT6 = 50;
static const int INTERRUPTS_PIN_INT7 = 51;
static const int INTERRUPTS_CTIMER2 = 52;
static const int INTERRUPTS_CTIMER4 = 53;
static const int INTERRUPTS_RIT = 54;
static const int INTERRUPTS_SPIFI0 = 55;
static const int INTERRUPTS_FLEXCOMM8 = 56;
static const int INTERRUPTS_FLEXCOMM9 = 57;
static const int INTERRUPTS_SDIO = 58;
static const int INTERRUPTS_CAN0_IRQ0 = 59;
static const int INTERRUPTS_CAN0_IRQ1 = 60;
static const int INTERRUPTS_CAN1_IRQ0 = 61;
static const int INTERRUPTS_CAN1_IRQ1 = 62;
static const int INTERRUPTS_USB1 = 63;
static const int INTERRUPTS_USB1_NEEDCLK = 64;
static const int INTERRUPTS_ETHERNET = 65;
static const int INTERRUPTS_ETHERNET_PMT = 66;
static const int INTERRUPTS_ETHERNET_MACLP = 67;
static const int INTERRUPTS_EEPROM = 68;
static const int INTERRUPTS_LCD = 69;
static const int INTERRUPTS_SHA = 70;
static const int INTERRUPTS_SMARTCARD0 = 71;
static const int INTERRUPTS_SMARTCARD1 = 72;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for LPC54607J256ET180.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for LPC54607J256ET180.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
