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
* @brief MK11DX128AVMC5 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
/* Auxiliary constants */
static const int INTERRUPTS_NOTAVAIL                = -128;

/* Core interrupts */
static const int INTERRUPTS_NONMASKABLEINT          = -14;
static const int INTERRUPTS_HARDFAULT               = -13;
static const int INTERRUPTS_MEMORYMANAGEMENT        = -12;
static const int INTERRUPTS_BUSFAULT                = -11;
static const int INTERRUPTS_USAGEFAULT              = -10;
static const int INTERRUPTS_SVCALL                  = -5;
static const int INTERRUPTS_DEBUGMONITOR            = -4;
static const int INTERRUPTS_PENDSV                  = -2;
static const int INTERRUPTS_SYSTICK                 = -1;

/* Device specific interrupts */
static const int INTERRUPTS_DMA0                    = 0;
static const int INTERRUPTS_DMA1                    = 1;
static const int INTERRUPTS_DMA2                    = 2;
static const int INTERRUPTS_DMA3                    = 3;
static const int INTERRUPTS_DMA4                    = 4;
static const int INTERRUPTS_DMA5                    = 5;
static const int INTERRUPTS_DMA6                    = 6;
static const int INTERRUPTS_DMA7                    = 7;
static const int INTERRUPTS_DMA8                    = 8;
static const int INTERRUPTS_DMA9                    = 9;
static const int INTERRUPTS_DMA10                   = 10;
static const int INTERRUPTS_DMA11                   = 11;
static const int INTERRUPTS_DMA12                   = 12;
static const int INTERRUPTS_DMA13                   = 13;
static const int INTERRUPTS_DMA14                   = 14;
static const int INTERRUPTS_DMA15                   = 15;
static const int INTERRUPTS_DMA_ERROR               = 16;
static const int INTERRUPTS_MCM                     = 17;
static const int INTERRUPTS_FTFL                    = 18;
static const int INTERRUPTS_READ_COLLISION          = 19;
static const int INTERRUPTS_LVD_LVW                 = 20;
static const int INTERRUPTS_LLWU                    = 21;
static const int INTERRUPTS_WDOG_EWM                = 22;
static const int INTERRUPTS_RNG                     = 23;
static const int INTERRUPTS_I2C0                    = 24;
static const int INTERRUPTS_I2C1                    = 25;
static const int INTERRUPTS_SPI0                    = 26;
static const int INTERRUPTS_SPI1                    = 27;
static const int INTERRUPTS_I2S0_TX                 = 28;
static const int INTERRUPTS_I2S0_RX                 = 29;
static const int INTERRUPTS_RESERVED46              = 30;
static const int INTERRUPTS_UART0_RX_TX             = 31;
static const int INTERRUPTS_UART0_ERR               = 32;
static const int INTERRUPTS_UART1_RX_TX             = 33;
static const int INTERRUPTS_UART1_ERR               = 34;
static const int INTERRUPTS_UART2_RX_TX             = 35;
static const int INTERRUPTS_UART2_ERR               = 36;
static const int INTERRUPTS_UART3_RX_TX             = 37;
static const int INTERRUPTS_UART3_ERR               = 38;
static const int INTERRUPTS_ADC0                    = 39;
static const int INTERRUPTS_CMP0                    = 40;
static const int INTERRUPTS_CMP1                    = 41;
static const int INTERRUPTS_FTM0                    = 42;
static const int INTERRUPTS_FTM1                    = 43;
static const int INTERRUPTS_FTM2                    = 44;
static const int INTERRUPTS_CMT                     = 45;
static const int INTERRUPTS_RTC                     = 46;
static const int INTERRUPTS_RTC_SECONDS             = 47;
static const int INTERRUPTS_PIT0                    = 48;
static const int INTERRUPTS_PIT1                    = 49;
static const int INTERRUPTS_PIT2                    = 50;
static const int INTERRUPTS_PIT3                    = 51;
static const int INTERRUPTS_PDB0                    = 52;
static const int INTERRUPTS_RESERVED69              = 53;
static const int INTERRUPTS_RESERVED70              = 54;
static const int INTERRUPTS_RESERVED71              = 55;
static const int INTERRUPTS_DAC0                    = 56;
static const int INTERRUPTS_MCG                     = 57;
static const int INTERRUPTS_LPTMR0                  = 58;
static const int INTERRUPTS_PORTA                   = 59;
static const int INTERRUPTS_PORTB                   = 60;
static const int INTERRUPTS_PORTC                   = 61;
static const int INTERRUPTS_PORTD                   = 62;
static const int INTERRUPTS_PORTE                   = 63;
static const int INTERRUPTS_SWI                     = 64;

// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MK11DX128AVMC5.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mk11dx128avmc5.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
