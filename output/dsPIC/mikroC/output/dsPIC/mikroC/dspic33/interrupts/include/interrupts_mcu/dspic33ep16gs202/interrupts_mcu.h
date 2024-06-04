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
* @brief dspic33ep16gs202 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_INT0 = 0;
static const int INTERRUPTS_IC1 = 1;
static const int INTERRUPTS_OC1 = 2;
static const int INTERRUPTS_T1 = 3;
static const int INTERRUPTS_T2 = 4;
static const int INTERRUPTS_T3 = 5;
static const int INTERRUPTS_SPI1E = 6;
static const int INTERRUPTS_SPI1 = 7;
static const int INTERRUPTS_U1RX = 8;
static const int INTERRUPTS_U1TX = 9;
static const int INTERRUPTS_ADC = 10;
static const int INTERRUPTS_NVM = 11;
static const int INTERRUPTS_SI2C1 = 12;
static const int INTERRUPTS_MI2C1 = 13;
static const int INTERRUPTS_AC1 = 14;
static const int INTERRUPTS_CN = 15;
static const int INTERRUPTS_INT1 = 16;
static const int INTERRUPTS_INT2 = 17;
static const int INTERRUPTS_PSEM = 18;
static const int INTERRUPTS_U1E = 19;
static const int INTERRUPTS_PSES = 20;
static const int INTERRUPTS_PWM1 = 21;
static const int INTERRUPTS_PWM2 = 22;
static const int INTERRUPTS_PWM3 = 23;
static const int INTERRUPTS_AC2 = 24;
static const int INTERRUPTS_ADCAN0 = 25;
static const int INTERRUPTS_ADCAN1 = 26;
static const int INTERRUPTS_ADCAN2 = 27;
static const int INTERRUPTS_ADCAN3 = 28;
static const int INTERRUPTS_ADCAN4 = 29;
static const int INTERRUPTS_ADCAN5 = 30;
static const int INTERRUPTS_ADCAN6 = 31;
static const int INTERRUPTS_ADCAN7 = 32;
static const int INTERRUPTS_ADCAN8 = 33;
static const int INTERRUPTS_ADCAN9 = 34;
static const int INTERRUPTS_ADCAN10 = 35;
static const int INTERRUPTS_ADCAN11 = 36;
static const int INTERRUPTS_ADCAN14 = 37;
static const int INTERRUPTS_I2C1BC = 38;
static const int INTERRUPTS_ADCMP0 = 39;
static const int INTERRUPTS_ADCMP1 = 40;
static const int INTERRUPTS_ADFL0 = 41;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_INT0_REGISTER (IEC0)
#define INTERRUPT_IC1_REGISTER (IEC0)
#define INTERRUPT_OC1_REGISTER (IEC0)
#define INTERRUPT_T1_REGISTER (IEC0)
#define INTERRUPT_T2_REGISTER (IEC0)
#define INTERRUPT_T3_REGISTER (IEC0)
#define INTERRUPT_SPI1E_REGISTER (IEC0)
#define INTERRUPT_SPI1_REGISTER (IEC0)
#define INTERRUPT_U1RX_REGISTER (IEC0)
#define INTERRUPT_U1TX_REGISTER (IEC0)
#define INTERRUPT_ADC_REGISTER (IEC0)
#define INTERRUPT_NVM_REGISTER (IEC0)
#define INTERRUPT_SI2C1_REGISTER (IEC1)
#define INTERRUPT_MI2C1_REGISTER (IEC1)
#define INTERRUPT_AC1_REGISTER (IEC1)
#define INTERRUPT_CN_REGISTER (IEC1)
#define INTERRUPT_INT1_REGISTER (IEC1)
#define INTERRUPT_INT2_REGISTER (IEC1)
#define INTERRUPT_PSEM_REGISTER (IEC3)
#define INTERRUPT_U1E_REGISTER (IEC4)
#define INTERRUPT_PSES_REGISTER (IEC4)
#define INTERRUPT_PWM1_REGISTER (IEC5)
#define INTERRUPT_PWM2_REGISTER (IEC5)
#define INTERRUPT_PWM3_REGISTER (IEC6)
#define INTERRUPT_AC2_REGISTER (IEC6)
#define INTERRUPT_ADCAN0_REGISTER (IEC6)
#define INTERRUPT_ADCAN1_REGISTER (IEC6)
#define INTERRUPT_ADCAN2_REGISTER (IEC7)
#define INTERRUPT_ADCAN3_REGISTER (IEC7)
#define INTERRUPT_ADCAN4_REGISTER (IEC7)
#define INTERRUPT_ADCAN5_REGISTER (IEC7)
#define INTERRUPT_ADCAN6_REGISTER (IEC7)
#define INTERRUPT_ADCAN7_REGISTER (IEC7)
#define INTERRUPT_ADCAN8_REGISTER (IEC9)
#define INTERRUPT_ADCAN9_REGISTER (IEC9)
#define INTERRUPT_ADCAN10_REGISTER (IEC9)
#define INTERRUPT_ADCAN11_REGISTER (IEC9)
#define INTERRUPT_ADCAN14_REGISTER (IEC9)
#define INTERRUPT_I2C1BC_REGISTER (IEC10)
#define INTERRUPT_ADCMP0_REGISTER (IEC11)
#define INTERRUPT_ADCMP1_REGISTER (IEC11)
#define INTERRUPT_ADFL0_REGISTER (IEC11)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_INT0_BIT (0)
#define INTERRUPT_IC1_BIT (1)
#define INTERRUPT_OC1_BIT (2)
#define INTERRUPT_T1_BIT (3)
#define INTERRUPT_T2_BIT (7)
#define INTERRUPT_T3_BIT (8)
#define INTERRUPT_SPI1E_BIT (9)
#define INTERRUPT_SPI1_BIT (10)
#define INTERRUPT_U1RX_BIT (11)
#define INTERRUPT_U1TX_BIT (12)
#define INTERRUPT_ADC_BIT (13)
#define INTERRUPT_NVM_BIT (15)
#define INTERRUPT_SI2C1_BIT (0)
#define INTERRUPT_MI2C1_BIT (1)
#define INTERRUPT_AC1_BIT (2)
#define INTERRUPT_CN_BIT (3)
#define INTERRUPT_INT1_BIT (4)
#define INTERRUPT_INT2_BIT (13)
#define INTERRUPT_PSEM_BIT (9)
#define INTERRUPT_U1E_BIT (1)
#define INTERRUPT_PSES_BIT (9)
#define INTERRUPT_PWM1_BIT (14)
#define INTERRUPT_PWM2_BIT (15)
#define INTERRUPT_PWM3_BIT (0)
#define INTERRUPT_AC2_BIT (7)
#define INTERRUPT_ADCAN0_BIT (14)
#define INTERRUPT_ADCAN1_BIT (15)
#define INTERRUPT_ADCAN2_BIT (0)
#define INTERRUPT_ADCAN3_BIT (1)
#define INTERRUPT_ADCAN4_BIT (2)
#define INTERRUPT_ADCAN5_BIT (3)
#define INTERRUPT_ADCAN6_BIT (4)
#define INTERRUPT_ADCAN7_BIT (5)
#define INTERRUPT_ADCAN8_BIT (7)
#define INTERRUPT_ADCAN9_BIT (8)
#define INTERRUPT_ADCAN10_BIT (9)
#define INTERRUPT_ADCAN11_BIT (10)
#define INTERRUPT_ADCAN14_BIT (13)
#define INTERRUPT_I2C1BC_BIT (13)
#define INTERRUPT_ADCMP0_BIT (1)
#define INTERRUPT_ADCMP1_BIT (2)
#define INTERRUPT_ADFL0_BIT (3)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
