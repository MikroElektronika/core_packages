/****************************************************************************
**
** Copyright (C) 2025 MikroElektronika d.o.o.
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
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
** OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
* @file  interrupts_mcu.h
* @brief CMS32M6513GE40NB MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_LVI = 16;
static const int INTERRUPTS_INTP0 = 17;
static const int INTERRUPTS_INTP1 = 18;
static const int INTERRUPTS_INTP2 = 19;
static const int INTERRUPTS_INTP3 = 20;
static const int INTERRUPTS_TM01H = 21;
static const int INTERRUPTS_CCP = 22;
static const int INTERRUPTS_EPWM = 23;
static const int INTERRUPTS_ADC = 24;
static const int INTERRUPTS_ACMP = 25;
static const int INTERRUPTS_UART0 = 26;
static const int INTERRUPTS_I2C0 = 27;
static const int INTERRUPTS_SSP0 = 28;
static const int INTERRUPTS_TIMER0 = 29;
static const int INTERRUPTS_TIMER1 = 30;
static const int INTERRUPTS_LSITIMER = 31;
static const int INTERRUPTS_TM00 = 33;
static const int INTERRUPTS_TM01 = 34;
static const int INTERRUPTS_TM02 = 35;
static const int INTERRUPTS_TM03 = 36;
static const int INTERRUPTS_FMC = 47;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for CMS32M6513GE40NB.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for CMS32M6513GE40NB.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
