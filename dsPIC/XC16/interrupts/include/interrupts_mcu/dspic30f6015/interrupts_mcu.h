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
* @brief dspic30f6015 MCU specific interrupt per module definitions.
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
#define INTERRUPTS_IC6 (16)
#define INTERRUPTS_IC5 (17)
#define INTERRUPTS_IC4 (18)
#define INTERRUPTS_IC3 (19)
#define INTERRUPTS_C1 (20)
#define INTERRUPTS_SPI2 (21)
#define INTERRUPTS_U2TX (22)
#define INTERRUPTS_U2RX (23)
#define INTERRUPTS_INT2 (24)
#define INTERRUPTS_T5 (25)
#define INTERRUPTS_T4 (26)
#define INTERRUPTS_OC4 (27)
#define INTERRUPTS_OC3 (28)
#define INTERRUPTS_IC8 (29)
#define INTERRUPTS_IC7 (30)
#define INTERRUPTS_INT1 (31)
#define INTERRUPTS_FLTB (32)
#define INTERRUPTS_FLTA (33)
#define INTERRUPTS_QEI (34)
#define INTERRUPTS_PWM (35)
#define INTERRUPTS_INT4 (36)
#define INTERRUPTS_INT3 (37)
#define INTERRUPTS_OC8 (38)
#define INTERRUPTS_OC7 (39)
#define INTERRUPTS_OC6 (40)
#define INTERRUPTS_OC5 (41)
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
#define INTERRUPT_IC6_REGISTER (IEC1)
#define INTERRUPT_IC5_REGISTER (IEC1)
#define INTERRUPT_IC4_REGISTER (IEC1)
#define INTERRUPT_IC3_REGISTER (IEC1)
#define INTERRUPT_C1_REGISTER (IEC1)
#define INTERRUPT_SPI2_REGISTER (IEC1)
#define INTERRUPT_U2TX_REGISTER (IEC1)
#define INTERRUPT_U2RX_REGISTER (IEC1)
#define INTERRUPT_INT2_REGISTER (IEC1)
#define INTERRUPT_T5_REGISTER (IEC1)
#define INTERRUPT_T4_REGISTER (IEC1)
#define INTERRUPT_OC4_REGISTER (IEC1)
#define INTERRUPT_OC3_REGISTER (IEC1)
#define INTERRUPT_IC8_REGISTER (IEC1)
#define INTERRUPT_IC7_REGISTER (IEC1)
#define INTERRUPT_INT1_REGISTER (IEC1)
#define INTERRUPT_FLTB_REGISTER (IEC2)
#define INTERRUPT_FLTA_REGISTER (IEC2)
#define INTERRUPT_QEI_REGISTER (IEC2)
#define INTERRUPT_PWM_REGISTER (IEC2)
#define INTERRUPT_INT4_REGISTER (IEC2)
#define INTERRUPT_INT3_REGISTER (IEC2)
#define INTERRUPT_OC8_REGISTER (IEC2)
#define INTERRUPT_OC7_REGISTER (IEC2)
#define INTERRUPT_OC6_REGISTER (IEC2)
#define INTERRUPT_OC5_REGISTER (IEC2)
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
#define INTERRUPT_IC6_BIT (15)
#define INTERRUPT_IC5_BIT (14)
#define INTERRUPT_IC4_BIT (13)
#define INTERRUPT_IC3_BIT (12)
#define INTERRUPT_C1_BIT (11)
#define INTERRUPT_SPI2_BIT (10)
#define INTERRUPT_U2TX_BIT (9)
#define INTERRUPT_U2RX_BIT (8)
#define INTERRUPT_INT2_BIT (7)
#define INTERRUPT_T5_BIT (6)
#define INTERRUPT_T4_BIT (5)
#define INTERRUPT_OC4_BIT (4)
#define INTERRUPT_OC3_BIT (3)
#define INTERRUPT_IC8_BIT (2)
#define INTERRUPT_IC7_BIT (1)
#define INTERRUPT_INT1_BIT (0)
#define INTERRUPT_FLTB_BIT (12)
#define INTERRUPT_FLTA_BIT (11)
#define INTERRUPT_QEI_BIT (8)
#define INTERRUPT_PWM_BIT (7)
#define INTERRUPT_INT4_BIT (5)
#define INTERRUPT_INT3_BIT (4)
#define INTERRUPT_OC8_BIT (3)
#define INTERRUPT_OC7_BIT (2)
#define INTERRUPT_OC6_BIT (1)
#define INTERRUPT_OC5_BIT (0)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
