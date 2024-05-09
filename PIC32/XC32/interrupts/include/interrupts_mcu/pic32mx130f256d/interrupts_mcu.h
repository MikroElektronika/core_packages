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
* @brief pic32mx130f256d MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

#include "mcu.h"

// Interrupt table
#define  INTERRUPTS_CT (0)
#define  INTERRUPTS_CS0 (1)
#define  INTERRUPTS_CS1 (2)
#define  INTERRUPTS_INT0 (3)
#define  INTERRUPTS_T1 (4)
#define  INTERRUPTS_IC1E (5)
#define  INTERRUPTS_IC1 (6)
#define  INTERRUPTS_OC1 (7)
#define  INTERRUPTS_INT1 (8)
#define  INTERRUPTS_T2 (9)
#define  INTERRUPTS_IC2E (10)
#define  INTERRUPTS_IC2 (11)
#define  INTERRUPTS_OC2 (12)
#define  INTERRUPTS_INT2 (13)
#define  INTERRUPTS_T3 (14)
#define  INTERRUPTS_IC3E (15)
#define  INTERRUPTS_IC3 (16)
#define  INTERRUPTS_OC3 (17)
#define  INTERRUPTS_INT3 (18)
#define  INTERRUPTS_T4 (19)
#define  INTERRUPTS_IC4E (20)
#define  INTERRUPTS_IC4 (21)
#define  INTERRUPTS_OC4 (22)
#define  INTERRUPTS_INT4 (23)
#define  INTERRUPTS_T5 (24)
#define  INTERRUPTS_IC5E (25)
#define  INTERRUPTS_IC5 (26)
#define  INTERRUPTS_OC5 (27)
#define  INTERRUPTS_AD1 (28)
#define  INTERRUPTS_FSCM (29)
#define  INTERRUPTS_RTCC (30)
#define  INTERRUPTS_FCE (31)
#define  INTERRUPTS_CMP1 (32)
#define  INTERRUPTS_CMP2 (33)
#define  INTERRUPTS_CMP3 (34)
#define  INTERRUPTS_SPI1E (35)
#define  INTERRUPTS_SPI1RX (36)
#define  INTERRUPTS_SPI1TX (37)
#define  INTERRUPTS_U1EIECON (38)
#define  INTERRUPTS_U1RX (39)
#define  INTERRUPTS_U1TX (40)
#define  INTERRUPTS_I2C1B (41)
#define  INTERRUPTS_I2C1S (42)
#define  INTERRUPTS_I2C1M (43)
#define  INTERRUPTS_CNA (44)
#define  INTERRUPTS_CNB (45)
#define  INTERRUPTS_CNC (46)
#define  INTERRUPTS_PMP (47)
#define  INTERRUPTS_PMPE (48)
#define  INTERRUPTS_SPI2E (49)
#define  INTERRUPTS_SPI2RX (50)
#define  INTERRUPTS_SPI2TX (51)
#define  INTERRUPTS_U2E (52)
#define  INTERRUPTS_U2RX (53)
#define  INTERRUPTS_U2TX (54)
#define  INTERRUPTS_I2C2B (55)
#define  INTERRUPTS_I2C2S (56)
#define  INTERRUPTS_I2C2M (57)
#define  INTERRUPTS_CTMU (58)
#define  INTERRUPTS_DMA0 (59)
#define  INTERRUPTS_DMA1 (60)
#define  INTERRUPTS_DMA2 (61)
#define  INTERRUPTS_DMA3 (62)
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_CT_REGISTER (IEC0)
#define INTERRUPT_CS0_REGISTER (IEC0)
#define INTERRUPT_CS1_REGISTER (IEC0)
#define INTERRUPT_INT0_REGISTER (IEC0)
#define INTERRUPT_T1_REGISTER (IEC0)
#define INTERRUPT_IC1E_REGISTER (IEC0)
#define INTERRUPT_IC1_REGISTER (IEC0)
#define INTERRUPT_OC1_REGISTER (IEC0)
#define INTERRUPT_INT1_REGISTER (IEC0)
#define INTERRUPT_T2_REGISTER (IEC0)
#define INTERRUPT_IC2E_REGISTER (IEC0)
#define INTERRUPT_IC2_REGISTER (IEC0)
#define INTERRUPT_OC2_REGISTER (IEC0)
#define INTERRUPT_INT2_REGISTER (IEC0)
#define INTERRUPT_T3_REGISTER (IEC0)
#define INTERRUPT_IC3E_REGISTER (IEC0)
#define INTERRUPT_IC3_REGISTER (IEC0)
#define INTERRUPT_OC3_REGISTER (IEC0)
#define INTERRUPT_INT3_REGISTER (IEC0)
#define INTERRUPT_T4_REGISTER (IEC0)
#define INTERRUPT_IC4E_REGISTER (IEC0)
#define INTERRUPT_IC4_REGISTER (IEC0)
#define INTERRUPT_OC4_REGISTER (IEC0)
#define INTERRUPT_INT4_REGISTER (IEC0)
#define INTERRUPT_T5_REGISTER (IEC0)
#define INTERRUPT_IC5E_REGISTER (IEC0)
#define INTERRUPT_IC5_REGISTER (IEC0)
#define INTERRUPT_OC5_REGISTER (IEC0)
#define INTERRUPT_AD1_REGISTER (IEC0)
#define INTERRUPT_FSCM_REGISTER (IEC0)
#define INTERRUPT_RTCC_REGISTER (IEC0)
#define INTERRUPT_FCE_REGISTER (IEC0)
#define INTERRUPT_CMP1_REGISTER (IEC1)
#define INTERRUPT_CMP2_REGISTER (IEC1)
#define INTERRUPT_CMP3_REGISTER (IEC1)
#define INTERRUPT_SPI1E_REGISTER (IEC1)
#define INTERRUPT_SPI1RX_REGISTER (IEC1)
#define INTERRUPT_SPI1TX_REGISTER (IEC1)
#define INTERRUPT_U1EIECON_REGISTER (IEC1)
#define INTERRUPT_U1RX_REGISTER (IEC1)
#define INTERRUPT_U1TX_REGISTER (IEC1)
#define INTERRUPT_I2C1B_REGISTER (IEC1)
#define INTERRUPT_I2C1S_REGISTER (IEC1)
#define INTERRUPT_I2C1M_REGISTER (IEC1)
#define INTERRUPT_CNA_REGISTER (IEC1)
#define INTERRUPT_CNB_REGISTER (IEC1)
#define INTERRUPT_CNC_REGISTER (IEC1)
#define INTERRUPT_PMP_REGISTER (IEC1)
#define INTERRUPT_PMPE_REGISTER (IEC1)
#define INTERRUPT_SPI2E_REGISTER (IEC1)
#define INTERRUPT_SPI2RX_REGISTER (IEC1)
#define INTERRUPT_SPI2TX_REGISTER (IEC1)
#define INTERRUPT_U2E_REGISTER (IEC1)
#define INTERRUPT_U2RX_REGISTER (IEC1)
#define INTERRUPT_U2TX_REGISTER (IEC1)
#define INTERRUPT_I2C2B_REGISTER (IEC1)
#define INTERRUPT_I2C2S_REGISTER (IEC1)
#define INTERRUPT_I2C2M_REGISTER (IEC1)
#define INTERRUPT_CTMU_REGISTER (IEC1)
#define INTERRUPT_DMA0_REGISTER (IEC1)
#define INTERRUPT_DMA1_REGISTER (IEC1)
#define INTERRUPT_DMA2_REGISTER (IEC1)
#define INTERRUPT_DMA3_REGISTER (IEC1)
#define INTERRUPT_INTCON_REGISTER (INTCON)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_CT_BIT (0)
#define INTERRUPT_CS0_BIT (1)
#define INTERRUPT_CS1_BIT (2)
#define INTERRUPT_INT0_BIT (3)
#define INTERRUPT_T1_BIT (4)
#define INTERRUPT_IC1E_BIT (5)
#define INTERRUPT_IC1_BIT (6)
#define INTERRUPT_OC1_BIT (7)
#define INTERRUPT_INT1_BIT (8)
#define INTERRUPT_T2_BIT (9)
#define INTERRUPT_IC2E_BIT (10)
#define INTERRUPT_IC2_BIT (11)
#define INTERRUPT_OC2_BIT (12)
#define INTERRUPT_INT2_BIT (13)
#define INTERRUPT_T3_BIT (14)
#define INTERRUPT_IC3E_BIT (15)
#define INTERRUPT_IC3_BIT (16)
#define INTERRUPT_OC3_BIT (17)
#define INTERRUPT_INT3_BIT (18)
#define INTERRUPT_T4_BIT (19)
#define INTERRUPT_IC4E_BIT (20)
#define INTERRUPT_IC4_BIT (21)
#define INTERRUPT_OC4_BIT (22)
#define INTERRUPT_INT4_BIT (23)
#define INTERRUPT_T5_BIT (24)
#define INTERRUPT_IC5E_BIT (25)
#define INTERRUPT_IC5_BIT (26)
#define INTERRUPT_OC5_BIT (27)
#define INTERRUPT_AD1_BIT (28)
#define INTERRUPT_FSCM_BIT (29)
#define INTERRUPT_RTCC_BIT (30)
#define INTERRUPT_FCE_BIT (31)
#define INTERRUPT_CMP1_BIT (0)
#define INTERRUPT_CMP2_BIT (1)
#define INTERRUPT_CMP3_BIT (2)
#define INTERRUPT_SPI1E_BIT (4)
#define INTERRUPT_SPI1RX_BIT (5)
#define INTERRUPT_SPI1TX_BIT (6)
#define INTERRUPT_U1EIECON_BIT (7)
#define INTERRUPT_U1RX_BIT (8)
#define INTERRUPT_U1TX_BIT (9)
#define INTERRUPT_I2C1B_BIT (10)
#define INTERRUPT_I2C1S_BIT (11)
#define INTERRUPT_I2C1M_BIT (12)
#define INTERRUPT_CNA_BIT (13)
#define INTERRUPT_CNB_BIT (14)
#define INTERRUPT_CNC_BIT (15)
#define INTERRUPT_PMP_BIT (16)
#define INTERRUPT_PMPE_BIT (17)
#define INTERRUPT_SPI2E_BIT (18)
#define INTERRUPT_SPI2RX_BIT (19)
#define INTERRUPT_SPI2TX_BIT (20)
#define INTERRUPT_U2E_BIT (21)
#define INTERRUPT_U2RX_BIT (22)
#define INTERRUPT_U2TX_BIT (23)
#define INTERRUPT_I2C2B_BIT (24)
#define INTERRUPT_I2C2S_BIT (25)
#define INTERRUPT_I2C2M_BIT (26)
#define INTERRUPT_CTMU_BIT (27)
#define INTERRUPT_DMA0_BIT (28)
#define INTERRUPT_DMA1_BIT (29)
#define INTERRUPT_DMA2_BIT (30)
#define INTERRUPT_DMA3_BIT (31)
#define INTERRUPT_INTCON_MVEC_BIT (12)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
