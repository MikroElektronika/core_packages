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
* @brief dspic33fj64gs606 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_DMA1 = 0;
static const int INTERRUPTS_AD = 1;
static const int INTERRUPTS_U1TX = 2;
static const int INTERRUPTS_U1RX = 3;
static const int INTERRUPTS_SPI1 = 4;
static const int INTERRUPTS_SPI1E = 5;
static const int INTERRUPTS_T3 = 6;
static const int INTERRUPTS_T2 = 7;
static const int INTERRUPTS_OC2 = 8;
static const int INTERRUPTS_IC2 = 9;
static const int INTERRUPTS_DMA0 = 10;
static const int INTERRUPTS_T1 = 11;
static const int INTERRUPTS_OC1 = 12;
static const int INTERRUPTS_IC1 = 13;
static const int INTERRUPTS_INT0 = 14;
static const int INTERRUPTS_U2TX = 15;
static const int INTERRUPTS_U2RX = 16;
static const int INTERRUPTS_INT2 = 17;
static const int INTERRUPTS_T5 = 18;
static const int INTERRUPTS_T4 = 19;
static const int INTERRUPTS_OC4 = 20;
static const int INTERRUPTS_OC3 = 21;
static const int INTERRUPTS_DMA2 = 22;
static const int INTERRUPTS_INT1 = 23;
static const int INTERRUPTS_CN = 24;
static const int INTERRUPTS_AC1 = 25;
static const int INTERRUPTS_MI2C1 = 26;
static const int INTERRUPTS_SI2C1 = 27;
static const int INTERRUPTS_IC4 = 28;
static const int INTERRUPTS_IC3 = 29;
static const int INTERRUPTS_DMA3 = 30;
static const int INTERRUPTS_C1 = 31;
static const int INTERRUPTS_C1RX = 32;
static const int INTERRUPTS_SPI2 = 33;
static const int INTERRUPTS_SPI2E = 34;
static const int INTERRUPTS_QEI1 = 35;
static const int INTERRUPTS_PSEM = 36;
static const int INTERRUPTS_INT4 = 37;
static const int INTERRUPTS_INT3 = 38;
static const int INTERRUPTS_MI2C2 = 39;
static const int INTERRUPTS_SI2C2 = 40;
static const int INTERRUPTS_QEI2 = 41;
static const int INTERRUPTS_PSESM = 42;
static const int INTERRUPTS_C1TX = 43;
static const int INTERRUPTS_U2E = 44;
static const int INTERRUPTS_U1E = 45;
static const int INTERRUPTS_PWM2 = 46;
static const int INTERRUPTS_PWM1 = 47;
static const int INTERRUPTS_ADCP12 = 48;
static const int INTERRUPTS_ADCP1 = 49;
static const int INTERRUPTS_ADCP0 = 50;
static const int INTERRUPTS_AC4 = 51;
static const int INTERRUPTS_AC3 = 52;
static const int INTERRUPTS_AC2 = 53;
static const int INTERRUPTS_PWM6 = 54;
static const int INTERRUPTS_PWM5 = 55;
static const int INTERRUPTS_PWM4 = 56;
static const int INTERRUPTS_PWM3 = 57;
static const int INTERRUPTS_ADCP7 = 58;
static const int INTERRUPTS_ADCP6 = 59;
static const int INTERRUPTS_ADCP5 = 60;
static const int INTERRUPTS_ADCP4 = 61;
static const int INTERRUPTS_ADCP3 = 62;
static const int INTERRUPTS_ADCP2 = 63;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_DMA1_REGISTER (IEC0)
#define INTERRUPT_AD_REGISTER (IEC0)
#define INTERRUPT_U1TX_REGISTER (IEC0)
#define INTERRUPT_U1RX_REGISTER (IEC0)
#define INTERRUPT_SPI1_REGISTER (IEC0)
#define INTERRUPT_SPI1E_REGISTER (IEC0)
#define INTERRUPT_T3_REGISTER (IEC0)
#define INTERRUPT_T2_REGISTER (IEC0)
#define INTERRUPT_OC2_REGISTER (IEC0)
#define INTERRUPT_IC2_REGISTER (IEC0)
#define INTERRUPT_DMA0_REGISTER (IEC0)
#define INTERRUPT_T1_REGISTER (IEC0)
#define INTERRUPT_OC1_REGISTER (IEC0)
#define INTERRUPT_IC1_REGISTER (IEC0)
#define INTERRUPT_INT0_REGISTER (IEC0)
#define INTERRUPT_U2TX_REGISTER (IEC1)
#define INTERRUPT_U2RX_REGISTER (IEC1)
#define INTERRUPT_INT2_REGISTER (IEC1)
#define INTERRUPT_T5_REGISTER (IEC1)
#define INTERRUPT_T4_REGISTER (IEC1)
#define INTERRUPT_OC4_REGISTER (IEC1)
#define INTERRUPT_OC3_REGISTER (IEC1)
#define INTERRUPT_DMA2_REGISTER (IEC1)
#define INTERRUPT_INT1_REGISTER (IEC1)
#define INTERRUPT_CN_REGISTER (IEC1)
#define INTERRUPT_AC1_REGISTER (IEC1)
#define INTERRUPT_MI2C1_REGISTER (IEC1)
#define INTERRUPT_SI2C1_REGISTER (IEC1)
#define INTERRUPT_IC4_REGISTER (IEC2)
#define INTERRUPT_IC3_REGISTER (IEC2)
#define INTERRUPT_DMA3_REGISTER (IEC2)
#define INTERRUPT_C1_REGISTER (IEC2)
#define INTERRUPT_C1RX_REGISTER (IEC2)
#define INTERRUPT_SPI2_REGISTER (IEC2)
#define INTERRUPT_SPI2E_REGISTER (IEC2)
#define INTERRUPT_QEI1_REGISTER (IEC3)
#define INTERRUPT_PSEM_REGISTER (IEC3)
#define INTERRUPT_INT4_REGISTER (IEC3)
#define INTERRUPT_INT3_REGISTER (IEC3)
#define INTERRUPT_MI2C2_REGISTER (IEC3)
#define INTERRUPT_SI2C2_REGISTER (IEC3)
#define INTERRUPT_QEI2_REGISTER (IEC4)
#define INTERRUPT_PSESM_REGISTER (IEC4)
#define INTERRUPT_C1TX_REGISTER (IEC4)
#define INTERRUPT_U2E_REGISTER (IEC4)
#define INTERRUPT_U1E_REGISTER (IEC4)
#define INTERRUPT_PWM2_REGISTER (IEC5)
#define INTERRUPT_PWM1_REGISTER (IEC5)
#define INTERRUPT_ADCP12_REGISTER (IEC5)
#define INTERRUPT_ADCP1_REGISTER (IEC6)
#define INTERRUPT_ADCP0_REGISTER (IEC6)
#define INTERRUPT_AC4_REGISTER (IEC6)
#define INTERRUPT_AC3_REGISTER (IEC6)
#define INTERRUPT_AC2_REGISTER (IEC6)
#define INTERRUPT_PWM6_REGISTER (IEC6)
#define INTERRUPT_PWM5_REGISTER (IEC6)
#define INTERRUPT_PWM4_REGISTER (IEC6)
#define INTERRUPT_PWM3_REGISTER (IEC6)
#define INTERRUPT_ADCP7_REGISTER (IEC7)
#define INTERRUPT_ADCP6_REGISTER (IEC7)
#define INTERRUPT_ADCP5_REGISTER (IEC7)
#define INTERRUPT_ADCP4_REGISTER (IEC7)
#define INTERRUPT_ADCP3_REGISTER (IEC7)
#define INTERRUPT_ADCP2_REGISTER (IEC7)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_DMA1_BIT (14)
#define INTERRUPT_AD_BIT (13)
#define INTERRUPT_U1TX_BIT (12)
#define INTERRUPT_U1RX_BIT (11)
#define INTERRUPT_SPI1_BIT (10)
#define INTERRUPT_SPI1E_BIT (9)
#define INTERRUPT_T3_BIT (8)
#define INTERRUPT_T2_BIT (7)
#define INTERRUPT_OC2_BIT (6)
#define INTERRUPT_IC2_BIT (5)
#define INTERRUPT_DMA0_BIT (4)
#define INTERRUPT_T1_BIT (3)
#define INTERRUPT_OC1_BIT (2)
#define INTERRUPT_IC1_BIT (1)
#define INTERRUPT_INT0_BIT (0)
#define INTERRUPT_U2TX_BIT (15)
#define INTERRUPT_U2RX_BIT (14)
#define INTERRUPT_INT2_BIT (13)
#define INTERRUPT_T5_BIT (12)
#define INTERRUPT_T4_BIT (11)
#define INTERRUPT_OC4_BIT (10)
#define INTERRUPT_OC3_BIT (9)
#define INTERRUPT_DMA2_BIT (8)
#define INTERRUPT_INT1_BIT (4)
#define INTERRUPT_CN_BIT (3)
#define INTERRUPT_AC1_BIT (2)
#define INTERRUPT_MI2C1_BIT (1)
#define INTERRUPT_SI2C1_BIT (0)
#define INTERRUPT_IC4_BIT (6)
#define INTERRUPT_IC3_BIT (5)
#define INTERRUPT_DMA3_BIT (4)
#define INTERRUPT_C1_BIT (3)
#define INTERRUPT_C1RX_BIT (2)
#define INTERRUPT_SPI2_BIT (1)
#define INTERRUPT_SPI2E_BIT (0)
#define INTERRUPT_QEI1_BIT (10)
#define INTERRUPT_PSEM_BIT (9)
#define INTERRUPT_INT4_BIT (6)
#define INTERRUPT_INT3_BIT (5)
#define INTERRUPT_MI2C2_BIT (2)
#define INTERRUPT_SI2C2_BIT (1)
#define INTERRUPT_QEI2_BIT (11)
#define INTERRUPT_PSESM_BIT (9)
#define INTERRUPT_C1TX_BIT (6)
#define INTERRUPT_U2E_BIT (2)
#define INTERRUPT_U1E_BIT (1)
#define INTERRUPT_PWM2_BIT (15)
#define INTERRUPT_PWM1_BIT (14)
#define INTERRUPT_ADCP12_BIT (13)
#define INTERRUPT_ADCP1_BIT (15)
#define INTERRUPT_ADCP0_BIT (14)
#define INTERRUPT_AC4_BIT (9)
#define INTERRUPT_AC3_BIT (8)
#define INTERRUPT_AC2_BIT (7)
#define INTERRUPT_PWM6_BIT (3)
#define INTERRUPT_PWM5_BIT (2)
#define INTERRUPT_PWM4_BIT (1)
#define INTERRUPT_PWM3_BIT (0)
#define INTERRUPT_ADCP7_BIT (5)
#define INTERRUPT_ADCP6_BIT (4)
#define INTERRUPT_ADCP5_BIT (3)
#define INTERRUPT_ADCP4_BIT (2)
#define INTERRUPT_ADCP3_BIT (1)
#define INTERRUPT_ADCP2_BIT (0)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
