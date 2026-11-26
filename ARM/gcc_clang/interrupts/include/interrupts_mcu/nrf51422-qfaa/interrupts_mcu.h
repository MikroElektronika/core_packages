/****************************************************************************
**
** Copyright (C) ${COPYRIGHT_YEAR} MikroElektronika d.o.o.
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
 * @brief NRF51422-QFAA MCU specific interrupt per module definitions.
 */

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_POWER_CLOCK = 16;
static const int INTERRUPTS_RADIO = 17;
static const int INTERRUPTS_UART0 = 18;
static const int INTERRUPTS_SPI0_TWI0 = 19;
static const int INTERRUPTS_SPI1_TWI1 = 20;
static const int INTERRUPTS_GPIOTE = 22;
static const int INTERRUPTS_ADC = 23;
static const int INTERRUPTS_TIMER0 = 24;
static const int INTERRUPTS_TIMER1 = 25;
static const int INTERRUPTS_TIMER2 = 26;
static const int INTERRUPTS_RTC0 = 27;
static const int INTERRUPTS_TEMP = 28;
static const int INTERRUPTS_RNG = 29;
static const int INTERRUPTS_ECB = 30;
static const int INTERRUPTS_CCM_AAR = 31;
static const int INTERRUPTS_WDT = 32;
static const int INTERRUPTS_RTC1 = 33;
static const int INTERRUPTS_QDEC = 34;
static const int INTERRUPTS_LPCOMP = 35;
static const int INTERRUPTS_SWI0 = 36;
static const int INTERRUPTS_SWI1 = 37;
static const int INTERRUPTS_SWI2 = 38;
static const int INTERRUPTS_SWI3 = 39;
static const int INTERRUPTS_SWI4 = 40;
static const int INTERRUPTS_SWI5 = 41;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for NRF51422-QFAA.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for NRF51422-QFAA.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
