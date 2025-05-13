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
** OF MERCHANTABILITY,  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
* @file  interrupts_mcu.h
* @brief MKE04Z8VWJ4 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
/* Auxiliary constants */
static const int INTERRUPTS_NOTAVAIL                = -128;

/* Core interrupts */
static const int INTERRUPTS_NONMASKABLEINT          = -14;
static const int INTERRUPTS_HARDFAULT               = -13;
static const int INTERRUPTS_SVCALL                  = -5;
static const int INTERRUPTS_PENDSV                  = -2;
static const int INTERRUPTS_SYSTICK                 = -1;

/* Device specific interrupts */
static const int INTERRUPTS_RESERVED16              = 0;
static const int INTERRUPTS_RESERVED17              = 1;
static const int INTERRUPTS_RESERVED18              = 2;
static const int INTERRUPTS_RESERVED19              = 3;
static const int INTERRUPTS_RESERVED20              = 4;
static const int INTERRUPTS_FTMRE                   = 5;
static const int INTERRUPTS_PMC                     = 6;
static const int INTERRUPTS_IRQ                     = 7;
static const int INTERRUPTS_I2C0                    = 8;
static const int INTERRUPTS_RESERVED25              = 9;
static const int INTERRUPTS_SPI0                    = 10;
static const int INTERRUPTS_RESERVED27              = 11;
static const int INTERRUPTS_UART0                   = 12;
static const int INTERRUPTS_RESERVED29              = 13;
static const int INTERRUPTS_RESERVED30              = 14;
static const int INTERRUPTS_ADC                     = 15;
static const int INTERRUPTS_ACMP0                   = 16;
static const int INTERRUPTS_FTM0                    = 17;
static const int INTERRUPTS_RESERVED34              = 18;
static const int INTERRUPTS_FTM2                    = 19;
static const int INTERRUPTS_RTC                     = 20;
static const int INTERRUPTS_ACMP1                   = 21;
static const int INTERRUPTS_PIT_CH0                 = 22;
static const int INTERRUPTS_PIT_CH1                 = 23;
static const int INTERRUPTS_KBI0                    = 24;
static const int INTERRUPTS_KBI1                    = 25;
static const int INTERRUPTS_RESERVED42              = 26;
static const int INTERRUPTS_ICS                     = 27;
static const int INTERRUPTS_WDOG                    = 28;
static const int INTERRUPTS_PWT                     = 29;
static const int INTERRUPTS_RESERVED46              = 30;
static const int INTERRUPTS_RESERVED47              = 31;

// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MKE04Z8VWJ4.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mke04z8vwj4.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
