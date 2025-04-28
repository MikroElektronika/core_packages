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
* @brief MKV31F128VLL10 MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_RESERVED20              = 4;
static const int INTERRUPTS_RESERVED21              = 5;
static const int INTERRUPTS_RESERVED22              = 6;
static const int INTERRUPTS_RESERVED23              = 7;
static const int INTERRUPTS_RESERVED24              = 8;
static const int INTERRUPTS_RESERVED25              = 9;
static const int INTERRUPTS_RESERVED26              = 10;
static const int INTERRUPTS_RESERVED27              = 11;
static const int INTERRUPTS_RESERVED28              = 12;
static const int INTERRUPTS_RESERVED29              = 13;
static const int INTERRUPTS_RESERVED30              = 14;
static const int INTERRUPTS_RESERVED31              = 15;
static const int INTERRUPTS_DMA_ERROR               = 16;
static const int INTERRUPTS_MCM                     = 17;
static const int INTERRUPTS_FTF                     = 18;
static const int INTERRUPTS_READ_COLLISION          = 19;
static const int INTERRUPTS_LVD_LVW                 = 20;
static const int INTERRUPTS_LLWU                    = 21;
static const int INTERRUPTS_WDOG_EWM                = 22;
static const int INTERRUPTS_RESERVED39              = 23;
static const int INTERRUPTS_I2C0                    = 24;
static const int INTERRUPTS_I2C1                    = 25;
static const int INTERRUPTS_SPI0                    = 26;
static const int INTERRUPTS_SPI1                    = 27;
static const int INTERRUPTS_RESERVED44              = 28;
static const int INTERRUPTS_RESERVED45              = 29;
static const int INTERRUPTS_LPUART0                 = 30;
static const int INTERRUPTS_UART0_RX_TX             = 31;
static const int INTERRUPTS_UART0_ERR               = 32;
static const int INTERRUPTS_UART1_RX_TX             = 33;
static const int INTERRUPTS_UART1_ERR               = 34;
static const int INTERRUPTS_UART2_RX_TX             = 35;
static const int INTERRUPTS_UART2_ERR               = 36;
static const int INTERRUPTS_RESERVED53              = 37;
static const int INTERRUPTS_RESERVED54              = 38;
static const int INTERRUPTS_ADC0                    = 39;
static const int INTERRUPTS_CMP0                    = 40;
static const int INTERRUPTS_CMP1                    = 41;
static const int INTERRUPTS_FTM0                    = 42;
static const int INTERRUPTS_FTM1                    = 43;
static const int INTERRUPTS_FTM2                    = 44;
static const int INTERRUPTS_RESERVED61              = 45;
static const int INTERRUPTS_RESERVED62              = 46;
static const int INTERRUPTS_RESERVED63              = 47;
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
static const int INTERRUPTS_RESERVED81              = 65;
static const int INTERRUPTS_RESERVED82              = 66;
static const int INTERRUPTS_RESERVED83              = 67;
static const int INTERRUPTS_RESERVED84              = 68;
static const int INTERRUPTS_RESERVED85              = 69;
static const int INTERRUPTS_RESERVED86              = 70;
static const int INTERRUPTS_RESERVED87              = 71;
static const int INTERRUPTS_RESERVED88              = 72;
static const int INTERRUPTS_ADC1                    = 73;
static const int INTERRUPTS_RESERVED90              = 74;
static const int INTERRUPTS_RESERVED91              = 75;
static const int INTERRUPTS_RESERVED92              = 76;
static const int INTERRUPTS_RESERVED93              = 77;
static const int INTERRUPTS_RESERVED94              = 78;
static const int INTERRUPTS_RESERVED95              = 79;
static const int INTERRUPTS_RESERVED96              = 80;
static const int INTERRUPTS_RESERVED97              = 81;
static const int INTERRUPTS_RESERVED98              = 82;
static const int INTERRUPTS_RESERVED99              = 83;
static const int INTERRUPTS_RESERVED100             = 84;
static const int INTERRUPTS_RESERVED101             = 85;

// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MKV31F128VLL10.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mkv31f128vll10.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
