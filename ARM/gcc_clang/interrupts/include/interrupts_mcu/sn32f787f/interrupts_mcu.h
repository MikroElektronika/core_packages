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
* @brief SN32F787F MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NDT = 16;
static const int INTERRUPTS_LCD = 18;
static const int INTERRUPTS_I2S0 = 19;
static const int INTERRUPTS_I2S1 = 20;
static const int INTERRUPTS_CMP3 = 21;
static const int INTERRUPTS_SPI0 = 22;
static const int INTERRUPTS_SPI1 = 23;
static const int INTERRUPTS_UART2 = 24;
static const int INTERRUPTS_UART3 = 25;
static const int INTERRUPTS_I2C0 = 26;
static const int INTERRUPTS_I2C1 = 27;
static const int INTERRUPTS_CMP2 = 28;
static const int INTERRUPTS_UART0 = 29;
static const int INTERRUPTS_UART1 = 30;
static const int INTERRUPTS_CT16B0 = 31;
static const int INTERRUPTS_CT16B1 = 32;
static const int INTERRUPTS_CT16B2 = 33;
static const int INTERRUPTS_CMP1 = 34;
static const int INTERRUPTS_CT16B3 = 35;
static const int INTERRUPTS_CT16B4 = 36;
static const int INTERRUPTS_CT16B5 = 37;
static const int INTERRUPTS_EBI = 38;
static const int INTERRUPTS_RTC = 39;
static const int INTERRUPTS_ADC = 40;
static const int INTERRUPTS_WDT = 41;
static const int INTERRUPTS_LVD = 42;
static const int INTERRUPTS_CMP0 = 43;
static const int INTERRUPTS_P3 = 44;
static const int INTERRUPTS_P2 = 45;
static const int INTERRUPTS_P1 = 46;
static const int INTERRUPTS_P0 = 47;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for SN32F787F.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for SN32F787F.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
