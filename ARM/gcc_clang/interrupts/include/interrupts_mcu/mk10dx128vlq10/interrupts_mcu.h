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
* @brief MK10DX128VLQ10 MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_RESERVED39              = 23;
static const int INTERRUPTS_I2C0                    = 24;
static const int INTERRUPTS_I2C1                    = 25;
static const int INTERRUPTS_SPI0                    = 26;
static const int INTERRUPTS_SPI1                    = 27;
static const int INTERRUPTS_SPI2                    = 28;
static const int INTERRUPTS_CAN0_ORED_MESSAGE_BUFFER = 29;
static const int INTERRUPTS_CAN0_BUS_OFF            = 30;
static const int INTERRUPTS_CAN0_ERROR              = 31;
static const int INTERRUPTS_CAN0_TX_WARNING         = 32;
static const int INTERRUPTS_CAN0_RX_WARNING         = 33;
static const int INTERRUPTS_CAN0_WAKE_UP            = 34;
static const int INTERRUPTS_I2S0_TX                 = 35;
static const int INTERRUPTS_I2S0_RX                 = 36;
static const int INTERRUPTS_CAN1_ORED_MESSAGE_BUFFER = 37;
static const int INTERRUPTS_CAN1_BUS_OFF            = 38;
static const int INTERRUPTS_CAN1_ERROR              = 39;
static const int INTERRUPTS_CAN1_TX_WARNING         = 40;
static const int INTERRUPTS_CAN1_RX_WARNING         = 41;
static const int INTERRUPTS_CAN1_WAKE_UP            = 42;
static const int INTERRUPTS_RESERVED59              = 43;
static const int INTERRUPTS_UART0_LON               = 44;
static const int INTERRUPTS_UART0_RX_TX             = 45;
static const int INTERRUPTS_UART0_ERR               = 46;
static const int INTERRUPTS_UART1_RX_TX             = 47;
static const int INTERRUPTS_UART1_ERR               = 48;
static const int INTERRUPTS_UART2_RX_TX             = 49;
static const int INTERRUPTS_UART2_ERR               = 50;
static const int INTERRUPTS_UART3_RX_TX             = 51;
static const int INTERRUPTS_UART3_ERR               = 52;
static const int INTERRUPTS_UART4_RX_TX             = 53;
static const int INTERRUPTS_UART4_ERR               = 54;
static const int INTERRUPTS_UART5_RX_TX             = 55;
static const int INTERRUPTS_UART5_ERR               = 56;
static const int INTERRUPTS_ADC0                    = 57;
static const int INTERRUPTS_ADC1                    = 58;
static const int INTERRUPTS_CMP0                    = 59;
static const int INTERRUPTS_CMP1                    = 60;
static const int INTERRUPTS_CMP2                    = 61;
static const int INTERRUPTS_FTM0                    = 62;
static const int INTERRUPTS_FTM1                    = 63;
static const int INTERRUPTS_FTM2                    = 64;
static const int INTERRUPTS_CMT                     = 65;
static const int INTERRUPTS_RTC                     = 66;
static const int INTERRUPTS_RTC_SECONDS             = 67;
static const int INTERRUPTS_PIT0                    = 68;
static const int INTERRUPTS_PIT1                    = 69;
static const int INTERRUPTS_PIT2                    = 70;
static const int INTERRUPTS_PIT3                    = 71;
static const int INTERRUPTS_PDB0                    = 72;
static const int INTERRUPTS_RESERVED89              = 73;
static const int INTERRUPTS_RESERVED90              = 74;
static const int INTERRUPTS_RESERVED91              = 75;
static const int INTERRUPTS_RESERVED92              = 76;
static const int INTERRUPTS_RESERVED93              = 77;
static const int INTERRUPTS_RESERVED94              = 78;
static const int INTERRUPTS_RESERVED95              = 79;
static const int INTERRUPTS_SDHC                    = 80;
static const int INTERRUPTS_DAC0                    = 81;
static const int INTERRUPTS_DAC1                    = 82;
static const int INTERRUPTS_TSI0                    = 83;
static const int INTERRUPTS_MCG                     = 84;
static const int INTERRUPTS_LPTMR0                  = 85;
static const int INTERRUPTS_RESERVED102             = 86;
static const int INTERRUPTS_PORTA                   = 87;
static const int INTERRUPTS_PORTB                   = 88;
static const int INTERRUPTS_PORTC                   = 89;
static const int INTERRUPTS_PORTD                   = 90;
static const int INTERRUPTS_PORTE                   = 91;
static const int INTERRUPTS_RESERVED108             = 92;
static const int INTERRUPTS_RESERVED109             = 93;
static const int INTERRUPTS_SWI                     = 94;
static const int INTERRUPTS_RESERVED111             = 95;
static const int INTERRUPTS_RESERVED112             = 96;
static const int INTERRUPTS_RESERVED113             = 97;
static const int INTERRUPTS_RESERVED114             = 98;
static const int INTERRUPTS_RESERVED115             = 99;
static const int INTERRUPTS_RESERVED116             = 100;
static const int INTERRUPTS_RESERVED117             = 101;
static const int INTERRUPTS_RESERVED118             = 102;
static const int INTERRUPTS_RESERVED119             = 103;

// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MK10DX128VLQ10.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mk10dx128vlq10.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
