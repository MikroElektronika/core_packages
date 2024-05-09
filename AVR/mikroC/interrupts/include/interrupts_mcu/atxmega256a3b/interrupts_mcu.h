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
* @brief atxmega256a3b MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_SREG_I = 0; 
static const int INTERRUPTS_MASTERCTRLA_WIEN = 1; 
static const int INTERRUPTS_MASTERCTRLA_RIEN = 2; 
static const int INTERRUPTS_SLAVECTRLA_PIEN = 3; 
static const int INTERRUPTS_SLAVECTRLA_APIEN = 4; 
static const int INTERRUPTS_SLAVECTRLA_DIEN = 5;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_SREG_I_REGISTER (0x3F)
#define INTERRUPT_MASTERCTRLA_WIEN_REGISTER (0x481)
#define INTERRUPT_MASTERCTRLA_RIEN_REGISTER (0x481)
#define INTERRUPT_SLAVECTRLA_PIEN_REGISTER (0x488)
#define INTERRUPT_SLAVECTRLA_APIEN_REGISTER (0x488)
#define INTERRUPT_SLAVECTRLA_DIEN_REGISTER (0x488)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_SREG_I_BIT (6)
#define INTERRUPT_MASTERCTRLA_WIEN_BIT (0)
#define INTERRUPT_MASTERCTRLA_RIEN_BIT (1)
#define INTERRUPT_SLAVECTRLA_PIEN_BIT (1)
#define INTERRUPT_SLAVECTRLA_APIEN_BIT (3)
#define INTERRUPT_SLAVECTRLA_DIEN_BIT (4)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
