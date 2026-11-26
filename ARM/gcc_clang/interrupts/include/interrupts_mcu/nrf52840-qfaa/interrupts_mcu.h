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
 * @brief NRF52840-QFAA MCU specific interrupt per module definitions.
 */

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_CLOCK_POWER = 16;
static const int INTERRUPTS_RADIO = 17;
static const int INTERRUPTS_UART0_UARTE0 = 18;
static const int INTERRUPTS_SPI0_SPIM0_SPIS0_TWI0_TWIM0_TWIS0 = 19;
static const int INTERRUPTS_SPI1_SPIM1_SPIS1_TWI1_TWIM1_TWIS1 = 20;
static const int INTERRUPTS_NFCT = 21;
static const int INTERRUPTS_GPIOTE = 22;
static const int INTERRUPTS_SAADC = 23;
static const int INTERRUPTS_TIMER0 = 24;
static const int INTERRUPTS_TIMER1 = 25;
static const int INTERRUPTS_TIMER2 = 26;
static const int INTERRUPTS_RTC0 = 27;
static const int INTERRUPTS_TEMP = 28;
static const int INTERRUPTS_RNG = 29;
static const int INTERRUPTS_ECB = 30;
static const int INTERRUPTS_AAR_CCM = 31;
static const int INTERRUPTS_WDT = 32;
static const int INTERRUPTS_RTC1 = 33;
static const int INTERRUPTS_QDEC = 34;
static const int INTERRUPTS_COMP_LPCOMP = 35;
static const int INTERRUPTS_EGU0_SWI0 = 36;
static const int INTERRUPTS_EGU1_SWI1 = 37;
static const int INTERRUPTS_EGU2_SWI2 = 38;
static const int INTERRUPTS_EGU3_SWI3 = 39;
static const int INTERRUPTS_EGU4_SWI4 = 40;
static const int INTERRUPTS_EGU5_SWI5 = 41;
static const int INTERRUPTS_TIMER3 = 42;
static const int INTERRUPTS_TIMER4 = 43;
static const int INTERRUPTS_PWM0 = 44;
static const int INTERRUPTS_PDM = 45;
static const int INTERRUPTS_MWU = 48;
static const int INTERRUPTS_PWM1 = 49;
static const int INTERRUPTS_PWM2 = 50;
static const int INTERRUPTS_SPI2_SPIM2_SPIS2 = 51;
static const int INTERRUPTS_RTC2 = 52;
static const int INTERRUPTS_I2S = 53;
static const int INTERRUPTS_FPU = 54;
static const int INTERRUPTS_USBD = 55;
static const int INTERRUPTS_UARTE1 = 56;
static const int INTERRUPTS_QSPI = 57;
static const int INTERRUPTS_CRYPTOCELL = 58;
static const int INTERRUPTS_PWM3 = 61;
static const int INTERRUPTS_SPIM3 = 63;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for NRF52840-QFAA.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for NRF52840-QFAA.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
