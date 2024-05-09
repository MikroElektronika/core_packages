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
* @brief pic24ep32gp204 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_
#include "mcu.h"

// Interrupt table
#define INTERRUPTS_DMA1 (0)
#define INTERRUPTS_AD1 (1)
#define INTERRUPTS_U1TX (2)
#define INTERRUPTS_U1RX (3)
#define INTERRUPTS_SPI1 (4)
#define INTERRUPTS_SPI1E (5)
#define INTERRUPTS_T3 (6)
#define INTERRUPTS_T2 (7)
#define INTERRUPTS_OC2 (8)
#define INTERRUPTS_IC2 (9)
#define INTERRUPTS_DMA0 (10)
#define INTERRUPTS_T1 (11)
#define INTERRUPTS_OC1 (12)
#define INTERRUPTS_IC1 (13)
#define INTERRUPTS_INT0 (14)
#define INTERRUPTS_U2TX (15)
#define INTERRUPTS_U2RX (16)
#define INTERRUPTS_INT2 (17)
#define INTERRUPTS_T5 (18)
#define INTERRUPTS_T4 (19)
#define INTERRUPTS_OC4 (20)
#define INTERRUPTS_OC3 (21)
#define INTERRUPTS_DMA2 (22)
#define INTERRUPTS_INT1 (23)
#define INTERRUPTS_CN (24)
#define INTERRUPTS_CM (25)
#define INTERRUPTS_MI2C1 (26)
#define INTERRUPTS_SI2C1 (27)
#define INTERRUPTS_IC4 (28)
#define INTERRUPTS_IC3 (29)
#define INTERRUPTS_DMA3 (30)
#define INTERRUPTS_SPI2 (31)
#define INTERRUPTS_SPI2E (32)
#define INTERRUPTS_PSEM (33)
#define INTERRUPTS_MI2C2 (34)
#define INTERRUPTS_SI2C2 (35)
#define INTERRUPTS_CTMU (36)
#define INTERRUPTS_CRC (37)
#define INTERRUPTS_U2E (38)
#define INTERRUPTS_U1E (39)
#define INTERRUPTS_JTAG (40)
#define INTERRUPTS_ICDIFIE (41)
#define INTERRUPTS_PTG3 (42)
#define INTERRUPTS_PTG2 (43)
#define INTERRUPTS_PTG1 (44)
#define INTERRUPTS_PTG0 (45)
#define INTERRUPTS_PTGWDT (46)
#define INTERRUPTS_PTGSTEP (47)
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_DMA1_REGISTER (IEC0)
#define INTERRUPT_AD1_REGISTER (IEC0)
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
#define INTERRUPT_CM_REGISTER (IEC1)
#define INTERRUPT_MI2C1_REGISTER (IEC1)
#define INTERRUPT_SI2C1_REGISTER (IEC1)
#define INTERRUPT_IC4_REGISTER (IEC2)
#define INTERRUPT_IC3_REGISTER (IEC2)
#define INTERRUPT_DMA3_REGISTER (IEC2)
#define INTERRUPT_SPI2_REGISTER (IEC2)
#define INTERRUPT_SPI2E_REGISTER (IEC2)
#define INTERRUPT_PSEM_REGISTER (IEC3)
#define INTERRUPT_MI2C2_REGISTER (IEC3)
#define INTERRUPT_SI2C2_REGISTER (IEC3)
#define INTERRUPT_CTMU_REGISTER (IEC4)
#define INTERRUPT_CRC_REGISTER (IEC4)
#define INTERRUPT_U2E_REGISTER (IEC4)
#define INTERRUPT_U1E_REGISTER (IEC4)
#define INTERRUPT_JTAG_REGISTER (IEC8)
#define INTERRUPT_ICDIFIE_REGISTER (IEC8)
#define INTERRUPT_PTG3_REGISTER (IEC9)
#define INTERRUPT_PTG2_REGISTER (IEC9)
#define INTERRUPT_PTG1_REGISTER (IEC9)
#define INTERRUPT_PTG0_REGISTER (IEC9)
#define INTERRUPT_PTGWDT_REGISTER (IEC9)
#define INTERRUPT_PTGSTEP_REGISTER (IEC9)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_DMA1_BIT (14)
#define INTERRUPT_AD1_BIT (13)
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
#define INTERRUPT_CM_BIT (2)
#define INTERRUPT_MI2C1_BIT (1)
#define INTERRUPT_SI2C1_BIT (0)
#define INTERRUPT_IC4_BIT (6)
#define INTERRUPT_IC3_BIT (5)
#define INTERRUPT_DMA3_BIT (4)
#define INTERRUPT_SPI2_BIT (1)
#define INTERRUPT_SPI2E_BIT (0)
#define INTERRUPT_PSEM_BIT (9)
#define INTERRUPT_MI2C2_BIT (2)
#define INTERRUPT_SI2C2_BIT (1)
#define INTERRUPT_CTMU_BIT (13)
#define INTERRUPT_CRC_BIT (3)
#define INTERRUPT_U2E_BIT (2)
#define INTERRUPT_U1E_BIT (1)
#define INTERRUPT_JTAG_BIT (15)
#define INTERRUPT_ICDIFIE_BIT (14)
#define INTERRUPT_PTG3_BIT (6)
#define INTERRUPT_PTG2_BIT (5)
#define INTERRUPT_PTG1_BIT (4)
#define INTERRUPT_PTG0_BIT (3)
#define INTERRUPT_PTGWDT_BIT (2)
#define INTERRUPT_PTGSTEP_BIT (1)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
