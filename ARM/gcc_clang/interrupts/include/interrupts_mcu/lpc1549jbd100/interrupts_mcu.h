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
* @brief LPC1549JBD100 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_WDT = 16;
static const int INTERRUPTS_BOD = 17;
static const int INTERRUPTS_FLASH = 18;
static const int INTERRUPTS_EE = 19;
static const int INTERRUPTS_DMA = 20;
static const int INTERRUPTS_GINT0 = 21;
static const int INTERRUPTS_GINT1 = 22;
static const int INTERRUPTS_PIN_INT0 = 23;
static const int INTERRUPTS_PIN_INT1 = 24;
static const int INTERRUPTS_PIN_INT2 = 25;
static const int INTERRUPTS_PIN_INT3 = 26;
static const int INTERRUPTS_PIN_INT4 = 27;
static const int INTERRUPTS_PIN_INT5 = 28;
static const int INTERRUPTS_PIN_INT6 = 29;
static const int INTERRUPTS_PIN_INT7 = 30;
static const int INTERRUPTS_RIT = 31;
static const int INTERRUPTS_SCT0 = 32;
static const int INTERRUPTS_SCT1 = 33;
static const int INTERRUPTS_SCT2 = 34;
static const int INTERRUPTS_SCT3 = 35;
static const int INTERRUPTS_MRT = 36;
static const int INTERRUPTS_UART0 = 37;
static const int INTERRUPTS_UART1 = 38;
static const int INTERRUPTS_UART2 = 39;
static const int INTERRUPTS_I2C0 = 40;
static const int INTERRUPTS_SPI0 = 41;
static const int INTERRUPTS_SPI1 = 42;
static const int INTERRUPTS_C_CAN0 = 43;
static const int INTERRUPTS_USB_IRQ = 44;
static const int INTERRUPTS_USB_FIQ = 45;
static const int INTERRUPTS_USBWAKEUP = 46;
static const int INTERRUPTS_ADC0_SEQA = 47;
static const int INTERRUPTS_ADC0_SEQB = 48;
static const int INTERRUPTS_ADC0_THCMP = 49;
static const int INTERRUPTS_ADC0_OVR = 50;
static const int INTERRUPTS_ADC1_SEQA = 51;
static const int INTERRUPTS_ADC1_SEQB = 52;
static const int INTERRUPTS_ADC1_THCMP = 53;
static const int INTERRUPTS_ADC1_OVR = 54;
static const int INTERRUPTS_DAC = 55;
static const int INTERRUPTS_CMP0 = 56;
static const int INTERRUPTS_CMP1 = 57;
static const int INTERRUPTS_CMP2 = 58;
static const int INTERRUPTS_CMP3 = 59;
static const int INTERRUPTS_QEI = 60;
static const int INTERRUPTS_RTC_ALARM = 61;
static const int INTERRUPTS_RTC_WAKE = 62;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for LPC1549JBD100.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for LPC1549JBD100.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
