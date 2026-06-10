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
* @brief LPC11E14FBD64-401 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_PIO0_0 = 16;
static const int INTERRUPTS_PIO0_1 = 17;
static const int INTERRUPTS_PIO0_2 = 18;
static const int INTERRUPTS_PIO0_3 = 19;
static const int INTERRUPTS_PIO0_4 = 20;
static const int INTERRUPTS_PIO0_5 = 21;
static const int INTERRUPTS_PIO0_6 = 22;
static const int INTERRUPTS_PIO0_7 = 23;
static const int INTERRUPTS_PIO0_8 = 24;
static const int INTERRUPTS_PIO0_9 = 25;
static const int INTERRUPTS_PIO0_10 = 26;
static const int INTERRUPTS_PIO0_11 = 27;
static const int INTERRUPTS_PIO1_0 = 28;
static const int INTERRUPTS_ADC_B = 29;
static const int INTERRUPTS_SSP1 = 30;
static const int INTERRUPTS_I2C = 31;
static const int INTERRUPTS_CT16B0 = 32;
static const int INTERRUPTS_CT16B1 = 33;
static const int INTERRUPTS_CT32B0 = 34;
static const int INTERRUPTS_CT32B1 = 35;
static const int INTERRUPTS_SSP0 = 36;
static const int INTERRUPTS_UART0 = 37;
static const int INTERRUPTS_UART1 = 38;
static const int INTERRUPTS_UART2 = 39;
static const int INTERRUPTS_ADC_A = 40;
static const int INTERRUPTS_WDT = 41;
static const int INTERRUPTS_BOD = 42;
static const int INTERRUPTS_FLASH = 43;
static const int INTERRUPTS_GPIO3 = 44;
static const int INTERRUPTS_GPIO2 = 45;
static const int INTERRUPTS_GPIO1 = 46;
static const int INTERRUPTS_GPIO0 = 47;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for LPC11E14FBD64-401.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for LPC11E14FBD64-401.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
