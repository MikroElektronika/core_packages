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
* @brief ATSAM4SD16BB MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_SUPC = 16;
static const int INTERRUPTS_RSTC = 17;
static const int INTERRUPTS_RTC = 18;
static const int INTERRUPTS_RTT = 19;
static const int INTERRUPTS_WDT = 20;
static const int INTERRUPTS_PMC = 21;
static const int INTERRUPTS_EFC0 = 22;
static const int INTERRUPTS_EFC1 = 23;
static const int INTERRUPTS_UART0 = 24;
static const int INTERRUPTS_UART1 = 25;
static const int INTERRUPTS_PIOA = 27;
static const int INTERRUPTS_PIOB = 28;
static const int INTERRUPTS_USART0 = 30;
static const int INTERRUPTS_USART1 = 31;
static const int INTERRUPTS_HSMCI = 34;
static const int INTERRUPTS_TWI0 = 35;
static const int INTERRUPTS_TWI1 = 36;
static const int INTERRUPTS_SPI = 37;
static const int INTERRUPTS_SSC = 38;
static const int INTERRUPTS_TC0 = 39;
static const int INTERRUPTS_TC1 = 40;
static const int INTERRUPTS_TC2 = 41;
static const int INTERRUPTS_ADC = 45;
static const int INTERRUPTS_DACC = 46;
static const int INTERRUPTS_PWM = 47;
static const int INTERRUPTS_CRCCU = 48;
static const int INTERRUPTS_ACC = 49;
static const int INTERRUPTS_UDP = 50;
static const int INTERRUPTS_PERIPH_COUNT = 51;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for ATSAM4SD16BB.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for ATSAM4SD16BB.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
