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
* @brief MSPM0L1306 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_FLASHCTL_INT = 16;
static const int INTERRUPTS_WWDT0_INT = 16;
static const int INTERRUPTS_DEBUGSS_INT = 16;
static const int INTERRUPTS_SYSCTL_INT = 16;
static const int INTERRUPTS_GPIOA_INT = 17;
static const int INTERRUPTS_COMP0_INT = 17;
static const int INTERRUPTS_TIMG1_INT = 18;
static const int INTERRUPTS_ADC0_INT = 20;
static const int INTERRUPTS_SPI0_INT = 25;
static const int INTERRUPTS_UART1_INT = 29;
static const int INTERRUPTS_UART0_INT = 31;
static const int INTERRUPTS_TIMG0_INT = 32;
static const int INTERRUPTS_TIMG2_INT = 34;
static const int INTERRUPTS_TIMG4_INT = 36;
static const int INTERRUPTS_I2C0_INT = 40;
static const int INTERRUPTS_I2C1_INT = 41;
static const int INTERRUPTS_DMA_INT = 47;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MSPM0L1306.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for MSPM0L1306.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
