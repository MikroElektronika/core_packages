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
* @brief dspic33ev256gm102 MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_SPI1E = 9;
static const int INTERRUPTS_SPI1 = 10;
static const int INTERRUPTS_U1RX = 11;
static const int INTERRUPTS_U1TX = 12;
static const int INTERRUPTS_AD1 = 13;
static const int INTERRUPTS_DMA1 = 14;
static const int INTERRUPTS_NVM = 15;
static const int INTERRUPTS_SI2C1 = 16;
static const int INTERRUPTS_MI2C1 = 17;
static const int INTERRUPTS_CM = 18;
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
static const int INTERRUPTS_CMP = 29;
static const int INTERRUPTS_SPI2E = 30;
static const int INTERRUPTS_SPI2 = 31;
static const int INTERRUPTS_C1RX = 32;
static const int INTERRUPTS_C1 = 33;
static const int INTERRUPTS_DMA3 = 34;
static const int INTERRUPTS_IC3 = 35;
static const int INTERRUPTS_IC4 = 36;
static const int INTERRUPTS_PSEM = 37;
static const int INTERRUPTS_U1E = 38;
static const int INTERRUPTS_U2E = 39;
static const int INTERRUPTS_C1TX = 40;
static const int INTERRUPTS_CTMU = 41;
static const int INTERRUPTS_PWM1 = 42;
static const int INTERRUPTS_PWM2 = 43;
static const int INTERRUPTS_PWM3 = 44;
static const int INTERRUPTS_ICD = 45;
static const int INTERRUPTS_I2C1BC = 46;
static const int INTERRUPTS_SENT1E = 47;
static const int INTERRUPTS_SENT1 = 48;
static const int INTERRUPTS_SENT2E = 49;
static const int INTERRUPTS_SENT2 = 50;
static const int INTERRUPTS_ECCSBE = 51;
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
#define INTERRUPT_SPI1E_REGISTER (IEC0)
#define INTERRUPT_SPI1_REGISTER (IEC0)
#define INTERRUPT_U1RX_REGISTER (IEC0)
#define INTERRUPT_U1TX_REGISTER (IEC0)
#define INTERRUPT_AD1_REGISTER (IEC0)
#define INTERRUPT_DMA1_REGISTER (IEC0)
#define INTERRUPT_NVM_REGISTER (IEC0)
#define INTERRUPT_SI2C1_REGISTER (IEC1)
#define INTERRUPT_MI2C1_REGISTER (IEC1)
#define INTERRUPT_CM_REGISTER (IEC1)
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
#define INTERRUPT_CMP_REGISTER (IEC1)
#define INTERRUPT_SPI2E_REGISTER (IEC2)
#define INTERRUPT_SPI2_REGISTER (IEC2)
#define INTERRUPT_C1RX_REGISTER (IEC2)
#define INTERRUPT_C1_REGISTER (IEC2)
#define INTERRUPT_DMA3_REGISTER (IEC2)
#define INTERRUPT_IC3_REGISTER (IEC2)
#define INTERRUPT_IC4_REGISTER (IEC2)
#define INTERRUPT_PSEM_REGISTER (IEC3)
#define INTERRUPT_U1E_REGISTER (IEC4)
#define INTERRUPT_U2E_REGISTER (IEC4)
#define INTERRUPT_C1TX_REGISTER (IEC4)
#define INTERRUPT_CTMU_REGISTER (IEC4)
#define INTERRUPT_PWM1_REGISTER (IEC5)
#define INTERRUPT_PWM2_REGISTER (IEC5)
#define INTERRUPT_PWM3_REGISTER (IEC6)
#define INTERRUPT_ICD_REGISTER (IEC8)
#define INTERRUPT_I2C1BC_REGISTER (IEC10)
#define INTERRUPT_SENT1E_REGISTER (IEC11)
#define INTERRUPT_SENT1_REGISTER (IEC11)
#define INTERRUPT_SENT2E_REGISTER (IEC11)
#define INTERRUPT_SENT2_REGISTER (IEC11)
#define INTERRUPT_ECCSBE_REGISTER (IEC11)
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
#define INTERRUPT_SPI1E_BIT (9)
#define INTERRUPT_SPI1_BIT (10)
#define INTERRUPT_U1RX_BIT (11)
#define INTERRUPT_U1TX_BIT (12)
#define INTERRUPT_AD1_BIT (13)
#define INTERRUPT_DMA1_BIT (14)
#define INTERRUPT_NVM_BIT (15)
#define INTERRUPT_SI2C1_BIT (0)
#define INTERRUPT_MI2C1_BIT (1)
#define INTERRUPT_CM_BIT (2)
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
#define INTERRUPT_CMP_BIT (2)
#define INTERRUPT_SPI2E_BIT (0)
#define INTERRUPT_SPI2_BIT (1)
#define INTERRUPT_C1RX_BIT (2)
#define INTERRUPT_C1_BIT (3)
#define INTERRUPT_DMA3_BIT (4)
#define INTERRUPT_IC3_BIT (5)
#define INTERRUPT_IC4_BIT (6)
#define INTERRUPT_PSEM_BIT (9)
#define INTERRUPT_U1E_BIT (1)
#define INTERRUPT_U2E_BIT (2)
#define INTERRUPT_C1TX_BIT (6)
#define INTERRUPT_CTMU_BIT (13)
#define INTERRUPT_PWM1_BIT (14)
#define INTERRUPT_PWM2_BIT (15)
#define INTERRUPT_PWM3_BIT (0)
#define INTERRUPT_ICD_BIT (14)
#define INTERRUPT_I2C1BC_BIT (13)
#define INTERRUPT_SENT1E_BIT (6)
#define INTERRUPT_SENT1_BIT (7)
#define INTERRUPT_SENT2E_BIT (8)
#define INTERRUPT_SENT2_BIT (9)
#define INTERRUPT_ECCSBE_BIT (10)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
