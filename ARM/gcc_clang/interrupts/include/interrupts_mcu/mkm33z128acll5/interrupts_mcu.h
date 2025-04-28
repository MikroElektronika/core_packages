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
* @brief MKM33Z128ACLL5 MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_DMA0                    = 0;
static const int INTERRUPTS_DMA1                    = 1;
static const int INTERRUPTS_DMA2                    = 2;
static const int INTERRUPTS_DMA3                    = 3;
static const int INTERRUPTS_SPI0                    = 4;
static const int INTERRUPTS_SPI1                    = 5;
static const int INTERRUPTS_PMC                     = 6;
static const int INTERRUPTS_TMR0                    = 7;
static const int INTERRUPTS_TMR1                    = 8;
static const int INTERRUPTS_TMR2                    = 9;
static const int INTERRUPTS_TMR3                    = 10;
static const int INTERRUPTS_PIT0_PIT1               = 11;
static const int INTERRUPTS_LLWU                    = 12;
static const int INTERRUPTS_FTFA                    = 13;
static const int INTERRUPTS_CMP0_CMP1               = 14;
static const int INTERRUPTS_LCD                     = 15;
static const int INTERRUPTS_ADC                     = 16;
static const int INTERRUPTS_PTX                     = 17;
static const int INTERRUPTS_RNGA                    = 18;
static const int INTERRUPTS_UART0_UART1             = 19;
static const int INTERRUPTS_UART2_UART3             = 20;
static const int INTERRUPTS_AFE_CH0                 = 21;
static const int INTERRUPTS_AFE_CH1                 = 22;
static const int INTERRUPTS_AFE_CH2                 = 23;
static const int INTERRUPTS_AFE_CH3                 = 24;
static const int INTERRUPTS_RTC                     = 25;
static const int INTERRUPTS_I2C0_I2C1               = 26;
static const int INTERRUPTS_EWM                     = 27;
static const int INTERRUPTS_MCG                     = 28;
static const int INTERRUPTS_WDOG                    = 29;
static const int INTERRUPTS_LPTMR                   = 30;
static const int INTERRUPTS_XBAR                    = 31;

// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MKM33Z128ACLL5.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mkm33z128acll5.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
