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
* @brief attiny417 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_INTCTRL_LUNF = 0; 
static const int INTERRUPTS_INTCTRL_HUNF = 1; 
static const int INTERRUPTS_INTCTRL_LCMP0 = 2; 
static const int INTERRUPTS_INTCTRL_LCMP1 = 3; 
static const int INTERRUPTS_INTCTRL_LCMP2 = 4; 
static const int INTERRUPTS_SREG_I = 5; 
static const int INTERRUPTS_INTCTRL_OVF = 6; 
static const int INTERRUPTS_INTCTRL_CMP = 7; 
static const int INTERRUPTS_INTCTRL_RESRDY = 8; 
static const int INTERRUPTS_INTCTRL_WCMP = 9; 
static const int INTERRUPTS_CTRLA_ABEIE = 10; 
static const int INTERRUPTS_CTRLA_RXSIE = 11; 
static const int INTERRUPTS_CTRLA_DREIE = 12; 
static const int INTERRUPTS_CTRLA_TXCIE = 13; 
static const int INTERRUPTS_CTRLA_RXCIE = 14; 
static const int INTERRUPTS_MCTRLA_WIEN = 15; 
static const int INTERRUPTS_MCTRLA_RIEN = 16; 
static const int INTERRUPTS_SCTRLA_PIEN = 17; 
static const int INTERRUPTS_SCTRLA_APIEN = 18; 
static const int INTERRUPTS_SCTRLA_DIEN = 19; 
static const int INTERRUPTS_INTCTRL_IE = 20; 
static const int INTERRUPTS_INTCTRL_SSIE = 21; 
static const int INTERRUPTS_INTCTRL_DREIE = 22; 
static const int INTERRUPTS_INTCTRL_TXCIE = 23; 
static const int INTERRUPTS_INTCTRL_RXCIE = 24; 
static const int INTERRUPTS_INTCTRL_TRIGA = 25; 
static const int INTERRUPTS_INTCTRL_TRIGB = 26; 
static const int INTERRUPTS_INTFLAGS_OVF = 27; 
static const int INTERRUPTS_INTFLAGS_TRIGA = 28; 
static const int INTERRUPTS_INTFLAGS_TRIGB = 29;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_INTCTRL_LUNF_REGISTER (0xA0A)
#define INTERRUPT_INTCTRL_HUNF_REGISTER (0xA0A)
#define INTERRUPT_INTCTRL_LCMP0_REGISTER (0xA0A)
#define INTERRUPT_INTCTRL_LCMP1_REGISTER (0xA0A)
#define INTERRUPT_INTCTRL_LCMP2_REGISTER (0xA0A)
#define INTERRUPT_SREG_I_REGISTER (0x3F)
#define INTERRUPT_INTCTRL_OVF_REGISTER (0x142)
#define INTERRUPT_INTCTRL_CMP_REGISTER (0x142)
#define INTERRUPT_INTCTRL_RESRDY_REGISTER (0x60A)
#define INTERRUPT_INTCTRL_WCMP_REGISTER (0x60A)
#define INTERRUPT_CTRLA_ABEIE_REGISTER (0x805)
#define INTERRUPT_CTRLA_RXSIE_REGISTER (0x805)
#define INTERRUPT_CTRLA_DREIE_REGISTER (0x805)
#define INTERRUPT_CTRLA_TXCIE_REGISTER (0x805)
#define INTERRUPT_CTRLA_RXCIE_REGISTER (0x805)
#define INTERRUPT_MCTRLA_WIEN_REGISTER (0x813)
#define INTERRUPT_MCTRLA_RIEN_REGISTER (0x813)
#define INTERRUPT_SCTRLA_PIEN_REGISTER (0x819)
#define INTERRUPT_SCTRLA_APIEN_REGISTER (0x819)
#define INTERRUPT_SCTRLA_DIEN_REGISTER (0x819)
#define INTERRUPT_INTCTRL_IE_REGISTER (0x822)
#define INTERRUPT_INTCTRL_SSIE_REGISTER (0x822)
#define INTERRUPT_INTCTRL_DREIE_REGISTER (0x822)
#define INTERRUPT_INTCTRL_TXCIE_REGISTER (0x822)
#define INTERRUPT_INTCTRL_RXCIE_REGISTER (0x822)
#define INTERRUPT_INTCTRL_TRIGA_REGISTER (0xA8C)
#define INTERRUPT_INTCTRL_TRIGB_REGISTER (0xA8C)
#define INTERRUPT_INTFLAGS_OVF_REGISTER (0xA8D)
#define INTERRUPT_INTFLAGS_TRIGA_REGISTER (0xA8D)
#define INTERRUPT_INTFLAGS_TRIGB_REGISTER (0xA8D)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_INTCTRL_LUNF_BIT (0)
#define INTERRUPT_INTCTRL_HUNF_BIT (1)
#define INTERRUPT_INTCTRL_LCMP0_BIT (2)
#define INTERRUPT_INTCTRL_LCMP1_BIT (3)
#define INTERRUPT_INTCTRL_LCMP2_BIT (4)
#define INTERRUPT_SREG_I_BIT (7)
#define INTERRUPT_INTCTRL_OVF_BIT (0)
#define INTERRUPT_INTCTRL_CMP_BIT (1)
#define INTERRUPT_INTCTRL_RESRDY_BIT (0)
#define INTERRUPT_INTCTRL_WCMP_BIT (1)
#define INTERRUPT_CTRLA_ABEIE_BIT (2)
#define INTERRUPT_CTRLA_RXSIE_BIT (4)
#define INTERRUPT_CTRLA_DREIE_BIT (5)
#define INTERRUPT_CTRLA_TXCIE_BIT (6)
#define INTERRUPT_CTRLA_RXCIE_BIT (7)
#define INTERRUPT_MCTRLA_WIEN_BIT (5)
#define INTERRUPT_MCTRLA_RIEN_BIT (6)
#define INTERRUPT_SCTRLA_PIEN_BIT (3)
#define INTERRUPT_SCTRLA_APIEN_BIT (4)
#define INTERRUPT_SCTRLA_DIEN_BIT (5)
#define INTERRUPT_INTCTRL_IE_BIT (0)
#define INTERRUPT_INTCTRL_SSIE_BIT (1)
#define INTERRUPT_INTCTRL_DREIE_BIT (2)
#define INTERRUPT_INTCTRL_TXCIE_BIT (3)
#define INTERRUPT_INTCTRL_RXCIE_BIT (4)
#define INTERRUPT_INTCTRL_TRIGA_BIT (1)
#define INTERRUPT_INTCTRL_TRIGB_BIT (2)
#define INTERRUPT_INTFLAGS_OVF_BIT (0)
#define INTERRUPT_INTFLAGS_TRIGA_BIT (1)
#define INTERRUPT_INTFLAGS_TRIGB_BIT (2)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
