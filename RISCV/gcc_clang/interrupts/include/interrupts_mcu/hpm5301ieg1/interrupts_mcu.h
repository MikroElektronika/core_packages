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

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt controller: PLIC (machine mode target 0), see interrupts.c.
#define INTERRUPTS_PLIC_BASE (0xE4000000UL)
#define INTERRUPTS_PLIC_SOURCES (73)

// Interrupt table (PLIC source numbers, handlers are <NAME>_IRQHandler)
static const int INTERRUPTS_GPIO0_A = 1;
static const int INTERRUPTS_GPIO0_B = 2;
static const int INTERRUPTS_GPIO0_X = 3;
static const int INTERRUPTS_GPIO0_Y = 4;
static const int INTERRUPTS_GPTMR0 = 5;
static const int INTERRUPTS_GPTMR1 = 6;
static const int INTERRUPTS_UART0 = 13;
static const int INTERRUPTS_UART1 = 14;
static const int INTERRUPTS_UART2 = 15;
static const int INTERRUPTS_UART3 = 16;
static const int INTERRUPTS_I2C0 = 21;
static const int INTERRUPTS_I2C1 = 22;
static const int INTERRUPTS_I2C2 = 23;
static const int INTERRUPTS_I2C3 = 24;
static const int INTERRUPTS_SPI0 = 25;
static const int INTERRUPTS_SPI1 = 26;
static const int INTERRUPTS_SPI2 = 27;
static const int INTERRUPTS_SPI3 = 28;
static const int INTERRUPTS_TSNS = 29;
static const int INTERRUPTS_MBX0A = 30;
static const int INTERRUPTS_MBX0B = 31;
static const int INTERRUPTS_EWDG0 = 32;
static const int INTERRUPTS_EWDG1 = 33;
static const int INTERRUPTS_HDMA = 34;
static const int INTERRUPTS_TRGMUX0 = 44;
static const int INTERRUPTS_TRGMUX1 = 49;
static const int INTERRUPTS_USB0 = 51;
static const int INTERRUPTS_XPI0 = 52;
static const int INTERRUPTS_FUSE = 57;
static const int INTERRUPTS_ADC0 = 58;
static const int INTERRUPTS_ACMP_0 = 62;
static const int INTERRUPTS_ACMP_1 = 63;
static const int INTERRUPTS_SYSCTL = 64;
static const int INTERRUPTS_PGPIO = 65;
static const int INTERRUPTS_PTMR = 66;
static const int INTERRUPTS_PUART = 67;
static const int INTERRUPTS_PEWDG = 68;
static const int INTERRUPTS_BROWNOUT = 69;
static const int INTERRUPTS_PAD_WAKEUP = 70;
static const int INTERRUPTS_DEBUG0 = 71;
static const int INTERRUPTS_DEBUG1 = 72;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for HPM5301IEG1.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for HPM5301IEG1.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
