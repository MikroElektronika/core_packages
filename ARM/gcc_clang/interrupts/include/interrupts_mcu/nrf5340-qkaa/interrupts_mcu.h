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
 * @brief NRF5340-QKAA MCU specific interrupt per module definitions.
 */

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_FPU = 16;
static const int INTERRUPTS_CACHE = 17;
static const int INTERRUPTS_SPU = 19;
static const int INTERRUPTS_CLOCK_POWER = 21;
static const int INTERRUPTS_SERIAL0 = 24;
static const int INTERRUPTS_SERIAL1 = 25;
static const int INTERRUPTS_SPIM4 = 26;
static const int INTERRUPTS_SERIAL2 = 27;
static const int INTERRUPTS_SERIAL3 = 28;
static const int INTERRUPTS_GPIOTE0 = 29;
static const int INTERRUPTS_SAADC = 30;
static const int INTERRUPTS_TIMER0 = 31;
static const int INTERRUPTS_TIMER1 = 32;
static const int INTERRUPTS_TIMER2 = 33;
static const int INTERRUPTS_RTC0 = 36;
static const int INTERRUPTS_RTC1 = 37;
static const int INTERRUPTS_WDT0 = 40;
static const int INTERRUPTS_WDT1 = 41;
static const int INTERRUPTS_COMP_LPCOMP = 42;
static const int INTERRUPTS_EGU0 = 43;
static const int INTERRUPTS_EGU1 = 44;
static const int INTERRUPTS_EGU2 = 45;
static const int INTERRUPTS_EGU3 = 46;
static const int INTERRUPTS_EGU4 = 47;
static const int INTERRUPTS_EGU5 = 48;
static const int INTERRUPTS_PWM0 = 49;
static const int INTERRUPTS_PWM1 = 50;
static const int INTERRUPTS_PWM2 = 51;
static const int INTERRUPTS_PWM3 = 52;
static const int INTERRUPTS_PDM0 = 54;
static const int INTERRUPTS_I2S0 = 56;
static const int INTERRUPTS_IPC = 58;
static const int INTERRUPTS_QSPI = 59;
static const int INTERRUPTS_NFCT = 61;
static const int INTERRUPTS_GPIOTE1 = 63;
static const int INTERRUPTS_QDEC0 = 67;
static const int INTERRUPTS_QDEC1 = 68;
static const int INTERRUPTS_USBD = 70;
static const int INTERRUPTS_USBREGULATOR = 71;
static const int INTERRUPTS_KMU = 73;
static const int INTERRUPTS_CRYPTOCELL = 84;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for NRF5340-QKAA.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for NRF5340-QKAA.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
