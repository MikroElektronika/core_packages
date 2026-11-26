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
 * @brief NRF9161-LACA MCU specific interrupt per module definitions.
 */

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_SPU = 19;
static const int INTERRUPTS_CLOCK_POWER = 21;
static const int INTERRUPTS_SPIM0_SPIS0_TWIM0_TWIS0_UARTE0 = 24;
static const int INTERRUPTS_SPIM1_SPIS1_TWIM1_TWIS1_UARTE1 = 25;
static const int INTERRUPTS_SPIM2_SPIS2_TWIM2_TWIS2_UARTE2 = 26;
static const int INTERRUPTS_SPIM3_SPIS3_TWIM3_TWIS3_UARTE3 = 27;
static const int INTERRUPTS_GPIOTE0 = 29;
static const int INTERRUPTS_SAADC = 30;
static const int INTERRUPTS_TIMER0 = 31;
static const int INTERRUPTS_TIMER1 = 32;
static const int INTERRUPTS_TIMER2 = 33;
static const int INTERRUPTS_RTC0 = 36;
static const int INTERRUPTS_RTC1 = 37;
static const int INTERRUPTS_WDT = 40;
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
static const int INTERRUPTS_PDM = 54;
static const int INTERRUPTS_I2S = 56;
static const int INTERRUPTS_IPC = 58;
static const int INTERRUPTS_FPU = 60;
static const int INTERRUPTS_GPIOTE1 = 65;
static const int INTERRUPTS_KMU = 73;
static const int INTERRUPTS_CRYPTOCELL = 80;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for NRF9161-LACA.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for NRF9161-LACA.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
