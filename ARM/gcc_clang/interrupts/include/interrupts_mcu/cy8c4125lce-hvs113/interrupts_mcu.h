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
* @brief CY8C4125LCE-HVS113 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_srss_interrupt_srss = 16;
static const int INTERRUPTS_srss_wdt_irq = 17;
static const int INTERRUPTS_ioss_interrupt_gpio = 18;
static const int INTERRUPTS_ioss_interrupts_gpio_0 = 19;
static const int INTERRUPTS_ioss_interrupts_gpio_1 = 20;
static const int INTERRUPTS_ioss_interrupts_gpio_2 = 21;
static const int INTERRUPTS_ioss_interrupts_gpio_3 = 22;
static const int INTERRUPTS_ioss_interrupts_gpio_4 = 23;
static const int INTERRUPTS_ioss_interrupts_gpio_5 = 24;
static const int INTERRUPTS_ioss_interrupts_gpio_6 = 25;
static const int INTERRUPTS_ioss_interrupts_gpio_7 = 26;
static const int INTERRUPTS_hvss_interrupt_hvss = 27;
static const int INTERRUPTS_lpcomp_0_interrupt = 28;
static const int INTERRUPTS_lpcomp_1_interrupt = 29;
static const int INTERRUPTS_scb_0_interrupt = 30;
static const int INTERRUPTS_scb_1_interrupt = 31;
static const int INTERRUPTS_cpuss_interrupt_dma = 32;
static const int INTERRUPTS_cpuss_interrupt_spcif = 33;
static const int INTERRUPTS_cpuss_interrupt_fault_0 = 34;
static const int INTERRUPTS_cpuss_interrupt_fault_1 = 35;
static const int INTERRUPTS_lin_interrupts_0 = 36;
static const int INTERRUPTS_lin_interrupts_1 = 37;
static const int INTERRUPTS_tcpwm_interrupts_0 = 38;
static const int INTERRUPTS_tcpwm_interrupts_1 = 39;
static const int INTERRUPTS_tcpwm_interrupts_2 = 40;
static const int INTERRUPTS_tcpwm_interrupts_3 = 41;
static const int INTERRUPTS_tcpwm_interrupts_4 = 42;
static const int INTERRUPTS_pass_0_interrupt_sar = 43;
static const int INTERRUPTS_msc_0_interrupt = 44;
static const int INTERRUPTS_cxpi_interrupts_0 = 45;
static const int INTERRUPTS_cxpi_interrupts_1 = 46;
static const int INTERRUPTS_unconnected = 256;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for CY8C4125LCE-HVS113.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for CY8C4125LCE-HVS113.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
