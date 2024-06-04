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
* @brief dspic33ep128gs806 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_INT0 = 0;
static const int INTERRUPTS_IC1 = 1;
static const int INTERRUPTS_OC1 = 2;
static const int INTERRUPTS_T1 = 3;
static const int INTERRUPTS_DMA0 = 4;
static const int INTERRUPTS_IC2 = 5;
static const int INTERRUPTS_OC2 = 6;
static const int INTERRUPTS_T2 = 7;
static const int INTERRUPTS_T3 = 8;
static const int INTERRUPTS_SPI1TX = 9;
static const int INTERRUPTS_SPI1RX = 10;
static const int INTERRUPTS_U1RX = 11;
static const int INTERRUPTS_U1TX = 12;
static const int INTERRUPTS_ADC = 13;
static const int INTERRUPTS_DMA1 = 14;
static const int INTERRUPTS_NVM = 15;
static const int INTERRUPTS_SI2C1 = 16;
static const int INTERRUPTS_MI2C1 = 17;
static const int INTERRUPTS_AC1 = 18;
static const int INTERRUPTS_CN = 19;
static const int INTERRUPTS_INT1 = 20;
static const int INTERRUPTS_DMA2 = 21;
static const int INTERRUPTS_OC3 = 22;
static const int INTERRUPTS_OC4 = 23;
static const int INTERRUPTS_T4 = 24;
static const int INTERRUPTS_T5 = 25;
static const int INTERRUPTS_INT2 = 26;
static const int INTERRUPTS_U2RX = 27;
static const int INTERRUPTS_U2TX = 28;
static const int INTERRUPTS_SPI2TX = 29;
static const int INTERRUPTS_SPI2RX = 30;
static const int INTERRUPTS_C1RX = 31;
static const int INTERRUPTS_C1 = 32;
static const int INTERRUPTS_DMA3 = 33;
static const int INTERRUPTS_IC3 = 34;
static const int INTERRUPTS_IC4 = 35;
static const int INTERRUPTS_SI2C2 = 36;
static const int INTERRUPTS_MI2C2 = 37;
static const int INTERRUPTS_INT4 = 38;
static const int INTERRUPTS_C2RX = 39;
static const int INTERRUPTS_C2 = 40;
static const int INTERRUPTS_PSEM = 41;
static const int INTERRUPTS_U1E = 42;
static const int INTERRUPTS_U2E = 43;
static const int INTERRUPTS_C1TX = 44;
static const int INTERRUPTS_C2TX = 45;
static const int INTERRUPTS_PSES = 46;
static const int INTERRUPTS_SPI3TX = 47;
static const int INTERRUPTS_SPI3RX = 48;
static const int INTERRUPTS_PWM1 = 49;
static const int INTERRUPTS_PWM2 = 50;
static const int INTERRUPTS_PWM3 = 51;
static const int INTERRUPTS_PWM4 = 52;
static const int INTERRUPTS_PWM5 = 53;
static const int INTERRUPTS_PWM6 = 54;
static const int INTERRUPTS_PWM7 = 55;
static const int INTERRUPTS_PWM8 = 56;
static const int INTERRUPTS_AC2 = 57;
static const int INTERRUPTS_AC3 = 58;
static const int INTERRUPTS_AC4 = 59;
static const int INTERRUPTS_ADCAN0 = 60;
static const int INTERRUPTS_ADCAN1 = 61;
static const int INTERRUPTS_ADCAN2 = 62;
static const int INTERRUPTS_ADCAN3 = 63;
static const int INTERRUPTS_ADCAN4 = 64;
static const int INTERRUPTS_ADCAN5 = 65;
static const int INTERRUPTS_ADCAN6 = 66;
static const int INTERRUPTS_ADCAN7 = 67;
static const int INTERRUPTS_SPI1E = 68;
static const int INTERRUPTS_SPI2E = 69;
static const int INTERRUPTS_SPI3E = 70;
static const int INTERRUPTS_CLC1 = 71;
static const int INTERRUPTS_CLC2 = 72;
static const int INTERRUPTS_CLC3 = 73;
static const int INTERRUPTS_CLC4 = 74;
static const int INTERRUPTS_JTAG = 75;
static const int INTERRUPTS_PTGSTEP = 76;
static const int INTERRUPTS_PTGWDT = 77;
static const int INTERRUPTS_PTG0 = 78;
static const int INTERRUPTS_PTG1 = 79;
static const int INTERRUPTS_PTG2 = 80;
static const int INTERRUPTS_PTG3 = 81;
static const int INTERRUPTS_ADCAN8 = 82;
static const int INTERRUPTS_ADCAN9 = 83;
static const int INTERRUPTS_ADCAN10 = 84;
static const int INTERRUPTS_ADCAN11 = 85;
static const int INTERRUPTS_ADCAN12 = 86;
static const int INTERRUPTS_ADCAN13 = 87;
static const int INTERRUPTS_ADCAN14 = 88;
static const int INTERRUPTS_ADCAN15 = 89;
static const int INTERRUPTS_ADCAN16 = 90;
static const int INTERRUPTS_ADCAN17 = 91;
static const int INTERRUPTS_ADCAN18 = 92;
static const int INTERRUPTS_ADCAN19 = 93;
static const int INTERRUPTS_ADCAN20 = 94;
static const int INTERRUPTS_ADCAN21 = 95;
static const int INTERRUPTS_I2C1BC = 96;
static const int INTERRUPTS_I2C2BC = 97;
static const int INTERRUPTS_ADCMP0 = 98;
static const int INTERRUPTS_ADCMP1 = 99;
static const int INTERRUPTS_ADFLTR0 = 100;
static const int INTERRUPTS_ADFLTR1 = 101;
static const int INTERRUPTS_ADCC0E = 102;
static const int INTERRUPTS_ADCC1E = 103;
static const int INTERRUPTS_ADCC2E = 104;
static const int INTERRUPTS_ADCC3E = 105;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_INT0_REGISTER (IEC0)
#define INTERRUPT_IC1_REGISTER (IEC0)
#define INTERRUPT_OC1_REGISTER (IEC0)
#define INTERRUPT_T1_REGISTER (IEC0)
#define INTERRUPT_DMA0_REGISTER (IEC0)
#define INTERRUPT_IC2_REGISTER (IEC0)
#define INTERRUPT_OC2_REGISTER (IEC0)
#define INTERRUPT_T2_REGISTER (IEC0)
#define INTERRUPT_T3_REGISTER (IEC0)
#define INTERRUPT_SPI1TX_REGISTER (IEC0)
#define INTERRUPT_SPI1RX_REGISTER (IEC0)
#define INTERRUPT_U1RX_REGISTER (IEC0)
#define INTERRUPT_U1TX_REGISTER (IEC0)
#define INTERRUPT_ADC_REGISTER (IEC0)
#define INTERRUPT_DMA1_REGISTER (IEC0)
#define INTERRUPT_NVM_REGISTER (IEC0)
#define INTERRUPT_SI2C1_REGISTER (IEC1)
#define INTERRUPT_MI2C1_REGISTER (IEC1)
#define INTERRUPT_AC1_REGISTER (IEC1)
#define INTERRUPT_CN_REGISTER (IEC1)
#define INTERRUPT_INT1_REGISTER (IEC1)
#define INTERRUPT_DMA2_REGISTER (IEC1)
#define INTERRUPT_OC3_REGISTER (IEC1)
#define INTERRUPT_OC4_REGISTER (IEC1)
#define INTERRUPT_T4_REGISTER (IEC1)
#define INTERRUPT_T5_REGISTER (IEC1)
#define INTERRUPT_INT2_REGISTER (IEC1)
#define INTERRUPT_U2RX_REGISTER (IEC1)
#define INTERRUPT_U2TX_REGISTER (IEC1)
#define INTERRUPT_SPI2TX_REGISTER (IEC2)
#define INTERRUPT_SPI2RX_REGISTER (IEC2)
#define INTERRUPT_C1RX_REGISTER (IEC2)
#define INTERRUPT_C1_REGISTER (IEC2)
#define INTERRUPT_DMA3_REGISTER (IEC2)
#define INTERRUPT_IC3_REGISTER (IEC2)
#define INTERRUPT_IC4_REGISTER (IEC2)
#define INTERRUPT_SI2C2_REGISTER (IEC3)
#define INTERRUPT_MI2C2_REGISTER (IEC3)
#define INTERRUPT_INT4_REGISTER (IEC3)
#define INTERRUPT_C2RX_REGISTER (IEC3)
#define INTERRUPT_C2_REGISTER (IEC3)
#define INTERRUPT_PSEM_REGISTER (IEC3)
#define INTERRUPT_U1E_REGISTER (IEC4)
#define INTERRUPT_U2E_REGISTER (IEC4)
#define INTERRUPT_C1TX_REGISTER (IEC4)
#define INTERRUPT_C2TX_REGISTER (IEC4)
#define INTERRUPT_PSES_REGISTER (IEC4)
#define INTERRUPT_SPI3TX_REGISTER (IEC5)
#define INTERRUPT_SPI3RX_REGISTER (IEC5)
#define INTERRUPT_PWM1_REGISTER (IEC5)
#define INTERRUPT_PWM2_REGISTER (IEC5)
#define INTERRUPT_PWM3_REGISTER (IEC6)
#define INTERRUPT_PWM4_REGISTER (IEC6)
#define INTERRUPT_PWM5_REGISTER (IEC6)
#define INTERRUPT_PWM6_REGISTER (IEC6)
#define INTERRUPT_PWM7_REGISTER (IEC6)
#define INTERRUPT_PWM8_REGISTER (IEC6)
#define INTERRUPT_AC2_REGISTER (IEC6)
#define INTERRUPT_AC3_REGISTER (IEC6)
#define INTERRUPT_AC4_REGISTER (IEC6)
#define INTERRUPT_ADCAN0_REGISTER (IEC6)
#define INTERRUPT_ADCAN1_REGISTER (IEC6)
#define INTERRUPT_ADCAN2_REGISTER (IEC7)
#define INTERRUPT_ADCAN3_REGISTER (IEC7)
#define INTERRUPT_ADCAN4_REGISTER (IEC7)
#define INTERRUPT_ADCAN5_REGISTER (IEC7)
#define INTERRUPT_ADCAN6_REGISTER (IEC7)
#define INTERRUPT_ADCAN7_REGISTER (IEC7)
#define INTERRUPT_SPI1E_REGISTER (IEC7)
#define INTERRUPT_SPI2E_REGISTER (IEC7)
#define INTERRUPT_SPI3E_REGISTER (IEC7)
#define INTERRUPT_CLC1_REGISTER (IEC8)
#define INTERRUPT_CLC2_REGISTER (IEC8)
#define INTERRUPT_CLC3_REGISTER (IEC8)
#define INTERRUPT_CLC4_REGISTER (IEC8)
#define INTERRUPT_JTAG_REGISTER (IEC8)
#define INTERRUPT_PTGSTEP_REGISTER (IEC9)
#define INTERRUPT_PTGWDT_REGISTER (IEC9)
#define INTERRUPT_PTG0_REGISTER (IEC9)
#define INTERRUPT_PTG1_REGISTER (IEC9)
#define INTERRUPT_PTG2_REGISTER (IEC9)
#define INTERRUPT_PTG3_REGISTER (IEC9)
#define INTERRUPT_ADCAN8_REGISTER (IEC9)
#define INTERRUPT_ADCAN9_REGISTER (IEC9)
#define INTERRUPT_ADCAN10_REGISTER (IEC9)
#define INTERRUPT_ADCAN11_REGISTER (IEC9)
#define INTERRUPT_ADCAN12_REGISTER (IEC9)
#define INTERRUPT_ADCAN13_REGISTER (IEC9)
#define INTERRUPT_ADCAN14_REGISTER (IEC9)
#define INTERRUPT_ADCAN15_REGISTER (IEC9)
#define INTERRUPT_ADCAN16_REGISTER (IEC9)
#define INTERRUPT_ADCAN17_REGISTER (IEC10)
#define INTERRUPT_ADCAN18_REGISTER (IEC10)
#define INTERRUPT_ADCAN19_REGISTER (IEC10)
#define INTERRUPT_ADCAN20_REGISTER (IEC10)
#define INTERRUPT_ADCAN21_REGISTER (IEC10)
#define INTERRUPT_I2C1BC_REGISTER (IEC10)
#define INTERRUPT_I2C2BC_REGISTER (IEC10)
#define INTERRUPT_ADCMP0_REGISTER (IEC11)
#define INTERRUPT_ADCMP1_REGISTER (IEC11)
#define INTERRUPT_ADFLTR0_REGISTER (IEC11)
#define INTERRUPT_ADFLTR1_REGISTER (IEC11)
#define INTERRUPT_ADCC0E_REGISTER (IEC11)
#define INTERRUPT_ADCC1E_REGISTER (IEC11)
#define INTERRUPT_ADCC2E_REGISTER (IEC11)
#define INTERRUPT_ADCC3E_REGISTER (IEC11)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_INT0_BIT (0)
#define INTERRUPT_IC1_BIT (1)
#define INTERRUPT_OC1_BIT (2)
#define INTERRUPT_T1_BIT (3)
#define INTERRUPT_DMA0_BIT (4)
#define INTERRUPT_IC2_BIT (5)
#define INTERRUPT_OC2_BIT (6)
#define INTERRUPT_T2_BIT (7)
#define INTERRUPT_T3_BIT (8)
#define INTERRUPT_SPI1TX_BIT (9)
#define INTERRUPT_SPI1RX_BIT (10)
#define INTERRUPT_U1RX_BIT (11)
#define INTERRUPT_U1TX_BIT (12)
#define INTERRUPT_ADC_BIT (13)
#define INTERRUPT_DMA1_BIT (14)
#define INTERRUPT_NVM_BIT (15)
#define INTERRUPT_SI2C1_BIT (0)
#define INTERRUPT_MI2C1_BIT (1)
#define INTERRUPT_AC1_BIT (2)
#define INTERRUPT_CN_BIT (3)
#define INTERRUPT_INT1_BIT (4)
#define INTERRUPT_DMA2_BIT (8)
#define INTERRUPT_OC3_BIT (9)
#define INTERRUPT_OC4_BIT (10)
#define INTERRUPT_T4_BIT (11)
#define INTERRUPT_T5_BIT (12)
#define INTERRUPT_INT2_BIT (13)
#define INTERRUPT_U2RX_BIT (14)
#define INTERRUPT_U2TX_BIT (15)
#define INTERRUPT_SPI2TX_BIT (0)
#define INTERRUPT_SPI2RX_BIT (1)
#define INTERRUPT_C1RX_BIT (2)
#define INTERRUPT_C1_BIT (3)
#define INTERRUPT_DMA3_BIT (4)
#define INTERRUPT_IC3_BIT (5)
#define INTERRUPT_IC4_BIT (6)
#define INTERRUPT_SI2C2_BIT (1)
#define INTERRUPT_MI2C2_BIT (2)
#define INTERRUPT_INT4_BIT (6)
#define INTERRUPT_C2RX_BIT (7)
#define INTERRUPT_C2_BIT (8)
#define INTERRUPT_PSEM_BIT (9)
#define INTERRUPT_U1E_BIT (1)
#define INTERRUPT_U2E_BIT (2)
#define INTERRUPT_C1TX_BIT (6)
#define INTERRUPT_C2TX_BIT (7)
#define INTERRUPT_PSES_BIT (9)
#define INTERRUPT_SPI3TX_BIT (10)
#define INTERRUPT_SPI3RX_BIT (11)
#define INTERRUPT_PWM1_BIT (14)
#define INTERRUPT_PWM2_BIT (15)
#define INTERRUPT_PWM3_BIT (0)
#define INTERRUPT_PWM4_BIT (1)
#define INTERRUPT_PWM5_BIT (2)
#define INTERRUPT_PWM6_BIT (3)
#define INTERRUPT_PWM7_BIT (4)
#define INTERRUPT_PWM8_BIT (5)
#define INTERRUPT_AC2_BIT (7)
#define INTERRUPT_AC3_BIT (8)
#define INTERRUPT_AC4_BIT (9)
#define INTERRUPT_ADCAN0_BIT (14)
#define INTERRUPT_ADCAN1_BIT (15)
#define INTERRUPT_ADCAN2_BIT (0)
#define INTERRUPT_ADCAN3_BIT (1)
#define INTERRUPT_ADCAN4_BIT (2)
#define INTERRUPT_ADCAN5_BIT (3)
#define INTERRUPT_ADCAN6_BIT (4)
#define INTERRUPT_ADCAN7_BIT (5)
#define INTERRUPT_SPI1E_BIT (12)
#define INTERRUPT_SPI2E_BIT (13)
#define INTERRUPT_SPI3E_BIT (14)
#define INTERRUPT_CLC1_BIT (10)
#define INTERRUPT_CLC2_BIT (11)
#define INTERRUPT_CLC3_BIT (12)
#define INTERRUPT_CLC4_BIT (13)
#define INTERRUPT_JTAG_BIT (15)
#define INTERRUPT_PTGSTEP_BIT (1)
#define INTERRUPT_PTGWDT_BIT (2)
#define INTERRUPT_PTG0_BIT (3)
#define INTERRUPT_PTG1_BIT (4)
#define INTERRUPT_PTG2_BIT (5)
#define INTERRUPT_PTG3_BIT (6)
#define INTERRUPT_ADCAN8_BIT (7)
#define INTERRUPT_ADCAN9_BIT (8)
#define INTERRUPT_ADCAN10_BIT (9)
#define INTERRUPT_ADCAN11_BIT (10)
#define INTERRUPT_ADCAN12_BIT (11)
#define INTERRUPT_ADCAN13_BIT (12)
#define INTERRUPT_ADCAN14_BIT (13)
#define INTERRUPT_ADCAN15_BIT (14)
#define INTERRUPT_ADCAN16_BIT (15)
#define INTERRUPT_ADCAN17_BIT (0)
#define INTERRUPT_ADCAN18_BIT (1)
#define INTERRUPT_ADCAN19_BIT (2)
#define INTERRUPT_ADCAN20_BIT (3)
#define INTERRUPT_ADCAN21_BIT (4)
#define INTERRUPT_I2C1BC_BIT (13)
#define INTERRUPT_I2C2BC_BIT (14)
#define INTERRUPT_ADCMP0_BIT (1)
#define INTERRUPT_ADCMP1_BIT (2)
#define INTERRUPT_ADFLTR0_BIT (3)
#define INTERRUPT_ADFLTR1_BIT (4)
#define INTERRUPT_ADCC0E_BIT (11)
#define INTERRUPT_ADCC1E_BIT (12)
#define INTERRUPT_ADCC2E_BIT (13)
#define INTERRUPT_ADCC3E_BIT (14)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
