/****************************************************************************
**
** Copyright (C) 2024 MikroElektronika d.o.o.
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
** OF MERCHANTABILITY, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
** TO THE WARRANTIES FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
* @file  interrupts_mcu.h
* @brief dspic30f2011e MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_
#include "mcu.h"

// Interrupt table
#define INTERRUPTS_CN (0)
#define INTERRUPTS_MI2C (1)
#define INTERRUPTS_SI2C (2)
#define INTERRUPTS_NVM (3)
#define INTERRUPTS_AD (4)
#define INTERRUPTS_U1TX (5)
#define INTERRUPTS_U1RX (6)
#define INTERRUPTS_SPI1 (7)
#define INTERRUPTS_T3 (8)
#define INTERRUPTS_T2 (9)
#define INTERRUPTS_OC2 (10)
#define INTERRUPTS_IC2 (11)
#define INTERRUPTS_T1 (12)
#define INTERRUPTS_OC1 (13)
#define INTERRUPTS_IC1 (14)
#define INTERRUPTS_INT0 (15)
#define INTERRUPTS_INT2 (16)
#define INTERRUPTS_INT1 (17)
#define INTERRUPTS_LVD (18)
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_CN_REGISTER (IEC0)
#define INTERRUPT_MI2C_REGISTER (IEC0)
#define INTERRUPT_SI2C_REGISTER (IEC0)
#define INTERRUPT_NVM_REGISTER (IEC0)
#define INTERRUPT_AD_REGISTER (IEC0)
#define INTERRUPT_U1TX_REGISTER (IEC0)
#define INTERRUPT_U1RX_REGISTER (IEC0)
#define INTERRUPT_SPI1_REGISTER (IEC0)
#define INTERRUPT_T3_REGISTER (IEC0)
#define INTERRUPT_T2_REGISTER (IEC0)
#define INTERRUPT_OC2_REGISTER (IEC0)
#define INTERRUPT_IC2_REGISTER (IEC0)
#define INTERRUPT_T1_REGISTER (IEC0)
#define INTERRUPT_OC1_REGISTER (IEC0)
#define INTERRUPT_IC1_REGISTER (IEC0)
#define INTERRUPT_INT0_REGISTER (IEC0)
#define INTERRUPT_INT2_REGISTER (IEC1)
#define INTERRUPT_INT1_REGISTER (IEC1)
#define INTERRUPT_LVD_REGISTER (IEC2)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_CN_BIT (15)
#define INTERRUPT_MI2C_BIT (14)
#define INTERRUPT_SI2C_BIT (13)
#define INTERRUPT_NVM_BIT (12)
#define INTERRUPT_AD_BIT (11)
#define INTERRUPT_U1TX_BIT (10)
#define INTERRUPT_U1RX_BIT (9)
#define INTERRUPT_SPI1_BIT (8)
#define INTERRUPT_T3_BIT (7)
#define INTERRUPT_T2_BIT (6)
#define INTERRUPT_OC2_BIT (5)
#define INTERRUPT_IC2_BIT (4)
#define INTERRUPT_T1_BIT (3)
#define INTERRUPT_OC1_BIT (2)
#define INTERRUPT_IC1_BIT (1)
#define INTERRUPT_INT0_BIT (0)
#define INTERRUPT_INT2_BIT (7)
#define INTERRUPT_INT1_BIT (0)
#define INTERRUPT_LVD_BIT (10)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
