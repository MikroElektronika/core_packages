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
* @brief ATSAM4E16CA MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_EFC = 22;
static const int INTERRUPTS_UART0 = 23;
static const int INTERRUPTS_PIOA = 25;
static const int INTERRUPTS_PIOB = 26;
static const int INTERRUPTS_PIOC = 27;
static const int INTERRUPTS_PIOD = 28;
static const int INTERRUPTS_PIOE = 29;
static const int INTERRUPTS_USART0 = 30;
static const int INTERRUPTS_USART1 = 31;
static const int INTERRUPTS_HSMCI = 32;
static const int INTERRUPTS_TWI0 = 33;
static const int INTERRUPTS_TWI1 = 34;
static const int INTERRUPTS_SPI = 35;
static const int INTERRUPTS_DMAC = 36;
static const int INTERRUPTS_TC0 = 37;
static const int INTERRUPTS_TC1 = 38;
static const int INTERRUPTS_TC2 = 39;
static const int INTERRUPTS_TC3 = 40;
static const int INTERRUPTS_TC4 = 41;
static const int INTERRUPTS_TC5 = 42;
static const int INTERRUPTS_TC6 = 43;
static const int INTERRUPTS_TC7 = 44;
static const int INTERRUPTS_TC8 = 45;
static const int INTERRUPTS_AFEC0 = 46;
static const int INTERRUPTS_AFEC1 = 47;
static const int INTERRUPTS_DACC = 48;
static const int INTERRUPTS_ACC = 49;
static const int INTERRUPTS_ARM = 50;
static const int INTERRUPTS_UDP = 51;
static const int INTERRUPTS_PWM = 52;
static const int INTERRUPTS_CAN0 = 53;
static const int INTERRUPTS_CAN1 = 54;
static const int INTERRUPTS_AES = 55;
static const int INTERRUPTS_GMAC = 60;
static const int INTERRUPTS_UART1 = 61;
static const int INTERRUPTS_PERIPH_COUNT = 62;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for ATSAM4E16CA.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for ATSAM4E16CA.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
