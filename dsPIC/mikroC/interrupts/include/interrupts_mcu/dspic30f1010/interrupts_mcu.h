/****************************************************************************
**
** Copyright (C) 2023 MikroElektronika d.o.o.
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
* @brief dspic30f1010 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_MI2C = 0;
static const int INTERRUPTS_SI2C = 1;
static const int INTERRUPTS_NVM = 2;
static const int INTERRUPTS_AD = 3;
static const int INTERRUPTS_U1TX = 4;
static const int INTERRUPTS_U1RX = 5;
static const int INTERRUPTS_SPI1 = 6;
static const int INTERRUPTS_T2 = 7;
static const int INTERRUPTS_T1 = 8;
static const int INTERRUPTS_OC1 = 9;
static const int INTERRUPTS_INT0 = 10;
static const int INTERRUPTS_AC2 = 11;
static const int INTERRUPTS_AC1 = 12;
static const int INTERRUPTS_CN = 13;
static const int INTERRUPTS_PWM2 = 14;
static const int INTERRUPTS_PWM1 = 15;
static const int INTERRUPTS_PSEM = 16;
static const int INTERRUPTS_INT2 = 17;
static const int INTERRUPTS_INT1 = 18;
static const int INTERRUPTS_ADCP2 = 19;
static const int INTERRUPTS_ADCP1 = 20;
static const int INTERRUPTS_ADCP0 = 21;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_MI2C_REGISTER (IEC0)
#define INTERRUPT_SI2C_REGISTER (IEC0)
#define INTERRUPT_NVM_REGISTER (IEC0)
#define INTERRUPT_AD_REGISTER (IEC0)
#define INTERRUPT_U1TX_REGISTER (IEC0)
#define INTERRUPT_U1RX_REGISTER (IEC0)
#define INTERRUPT_SPI1_REGISTER (IEC0)
#define INTERRUPT_T2_REGISTER (IEC0)
#define INTERRUPT_T1_REGISTER (IEC0)
#define INTERRUPT_OC1_REGISTER (IEC0)
#define INTERRUPT_INT0_REGISTER (IEC0)
#define INTERRUPT_AC2_REGISTER (IEC1)
#define INTERRUPT_AC1_REGISTER (IEC1)
#define INTERRUPT_CN_REGISTER (IEC1)
#define INTERRUPT_PWM2_REGISTER (IEC1)
#define INTERRUPT_PWM1_REGISTER (IEC1)
#define INTERRUPT_PSEM_REGISTER (IEC1)
#define INTERRUPT_INT2_REGISTER (IEC1)
#define INTERRUPT_INT1_REGISTER (IEC1)
#define INTERRUPT_ADCP2_REGISTER (IEC2)
#define INTERRUPT_ADCP1_REGISTER (IEC2)
#define INTERRUPT_ADCP0_REGISTER (IEC2)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_MI2C_BIT (14)
#define INTERRUPT_SI2C_BIT (13)
#define INTERRUPT_NVM_BIT (12)
#define INTERRUPT_AD_BIT (11)
#define INTERRUPT_U1TX_BIT (10)
#define INTERRUPT_U1RX_BIT (9)
#define INTERRUPT_SPI1_BIT (8)
#define INTERRUPT_T2_BIT (6)
#define INTERRUPT_T1_BIT (3)
#define INTERRUPT_OC1_BIT (2)
#define INTERRUPT_INT0_BIT (0)
#define INTERRUPT_AC2_BIT (14)
#define INTERRUPT_AC1_BIT (13)
#define INTERRUPT_CN_BIT (11)
#define INTERRUPT_PWM2_BIT (4)
#define INTERRUPT_PWM1_BIT (3)
#define INTERRUPT_PSEM_BIT (2)
#define INTERRUPT_INT2_BIT (1)
#define INTERRUPT_INT1_BIT (0)
#define INTERRUPT_ADCP2_BIT (7)
#define INTERRUPT_ADCP1_BIT (6)
#define INTERRUPT_ADCP0_BIT (5)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
