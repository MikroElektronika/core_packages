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
* @brief dspic30f6010a MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_CN = 0;
static const int INTERRUPTS_MI2C = 1;
static const int INTERRUPTS_SI2C = 2;
static const int INTERRUPTS_NVM = 3;
static const int INTERRUPTS_AD = 4;
static const int INTERRUPTS_U1TX = 5;
static const int INTERRUPTS_U1RX = 6;
static const int INTERRUPTS_SPI1 = 7;
static const int INTERRUPTS_T3 = 8;
static const int INTERRUPTS_T2 = 9;
static const int INTERRUPTS_OC2 = 10;
static const int INTERRUPTS_IC2 = 11;
static const int INTERRUPTS_T1 = 12;
static const int INTERRUPTS_OC1 = 13;
static const int INTERRUPTS_IC1 = 14;
static const int INTERRUPTS_INT0 = 15;
static const int INTERRUPTS_IC6 = 16;
static const int INTERRUPTS_IC5 = 17;
static const int INTERRUPTS_IC4 = 18;
static const int INTERRUPTS_IC3 = 19;
static const int INTERRUPTS_C1 = 20;
static const int INTERRUPTS_SPI2 = 21;
static const int INTERRUPTS_U2TX = 22;
static const int INTERRUPTS_U2RX = 23;
static const int INTERRUPTS_INT2 = 24;
static const int INTERRUPTS_T5 = 25;
static const int INTERRUPTS_T4 = 26;
static const int INTERRUPTS_OC4 = 27;
static const int INTERRUPTS_OC3 = 28;
static const int INTERRUPTS_IC8 = 29;
static const int INTERRUPTS_IC7 = 30;
static const int INTERRUPTS_INT1 = 31;
static const int INTERRUPTS_FLTB = 32;
static const int INTERRUPTS_FLTA = 33;
static const int INTERRUPTS_QEI = 34;
static const int INTERRUPTS_PWM = 35;
static const int INTERRUPTS_C2 = 36;
static const int INTERRUPTS_INT4 = 37;
static const int INTERRUPTS_INT3 = 38;
static const int INTERRUPTS_OC8 = 39;
static const int INTERRUPTS_OC7 = 40;
static const int INTERRUPTS_OC6 = 41;
static const int INTERRUPTS_OC5 = 42;
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
#define INTERRUPT_C2_REGISTER (IEC2)
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
#define INTERRUPT_C2_BIT (6)
#define INTERRUPT_INT4_BIT (5)
#define INTERRUPT_INT3_BIT (4)
#define INTERRUPT_OC8_BIT (3)
#define INTERRUPT_OC7_BIT (2)
#define INTERRUPT_OC6_BIT (1)
#define INTERRUPT_OC5_BIT (0)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
