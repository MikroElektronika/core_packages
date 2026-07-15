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
* @brief MAX32690 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_PF = 16;
static const int INTERRUPTS_WDT0 = 17;
static const int INTERRUPTS_USB = 18;
static const int INTERRUPTS_RTC = 19;
static const int INTERRUPTS_TRNG = 20;
static const int INTERRUPTS_TMR0 = 21;
static const int INTERRUPTS_TMR1 = 22;
static const int INTERRUPTS_TMR2 = 23;
static const int INTERRUPTS_TMR3 = 24;
static const int INTERRUPTS_TMR4 = 25;
static const int INTERRUPTS_TMR5 = 26;
static const int INTERRUPTS_RSV11 = 27;
static const int INTERRUPTS_RSV12 = 28;
static const int INTERRUPTS_I2C0 = 29;
static const int INTERRUPTS_UART0 = 30;
static const int INTERRUPTS_UART1 = 31;
static const int INTERRUPTS_SPI0 = 32;
static const int INTERRUPTS_SPI1 = 33;
static const int INTERRUPTS_SPI2 = 34;
static const int INTERRUPTS_RSV19 = 35;
static const int INTERRUPTS_ADC = 36;
static const int INTERRUPTS_RSV21 = 37;
static const int INTERRUPTS_RSV22 = 38;
static const int INTERRUPTS_FLC0 = 39;
static const int INTERRUPTS_GPIO0 = 40;
static const int INTERRUPTS_GPIO1 = 41;
static const int INTERRUPTS_GPIO2 = 42;
static const int INTERRUPTS_CRYPTO = 43;
static const int INTERRUPTS_DMA0 = 44;
static const int INTERRUPTS_DMA1 = 45;
static const int INTERRUPTS_DMA2 = 46;
static const int INTERRUPTS_DMA3 = 47;
static const int INTERRUPTS_RSV32 = 48;
static const int INTERRUPTS_RSV33 = 49;
static const int INTERRUPTS_UART2 = 50;
static const int INTERRUPTS_RSV35 = 51;
static const int INTERRUPTS_I2C1 = 52;
static const int INTERRUPTS_RSV37 = 53;
static const int INTERRUPTS_SPIXC = 54;
static const int INTERRUPTS_BTLE_TX_DONE = 55;
static const int INTERRUPTS_BTLE_RX_RCVD = 56;
static const int INTERRUPTS_BTLE_RX_ENG_DET = 57;
static const int INTERRUPTS_BTLE_SFD_DET = 58;
static const int INTERRUPTS_BTLE_SFD_TO = 59;
static const int INTERRUPTS_BTLE_GP_EVENT = 60;
static const int INTERRUPTS_BTLE_CFO = 61;
static const int INTERRUPTS_BTLE_SIG_DET = 62;
static const int INTERRUPTS_BTLE_AGC_EVENT = 63;
static const int INTERRUPTS_BTLE_RFFE_SPIM = 64;
static const int INTERRUPTS_BTLE_TX_AES = 65;
static const int INTERRUPTS_BTLE_RX_AES = 66;
static const int INTERRUPTS_BTLE_INV_APB_ADDR = 67;
static const int INTERRUPTS_BTLE_IQ_DATA_VALID = 68;
static const int INTERRUPTS_WUT0 = 69;
static const int INTERRUPTS_GPIOWAKE = 70;
static const int INTERRUPTS_RSV55 = 71;
static const int INTERRUPTS_SPI3 = 72;
static const int INTERRUPTS_WDT1 = 73;
static const int INTERRUPTS_GPIO3 = 74;
static const int INTERRUPTS_PT = 75;
static const int INTERRUPTS_RSV60 = 76;
static const int INTERRUPTS_HPB = 77;
static const int INTERRUPTS_I2C2 = 78;
static const int INTERRUPTS_RISCV = 79;
static const int INTERRUPTS_RSV64 = 80;
static const int INTERRUPTS_RSV65 = 81;
static const int INTERRUPTS_RSV66 = 82;
static const int INTERRUPTS_OWM = 83;
static const int INTERRUPTS_DMA4 = 84;
static const int INTERRUPTS_DMA5 = 85;
static const int INTERRUPTS_DMA6 = 86;
static const int INTERRUPTS_DMA7 = 87;
static const int INTERRUPTS_DMA8 = 88;
static const int INTERRUPTS_DMA9 = 89;
static const int INTERRUPTS_DMA10 = 90;
static const int INTERRUPTS_DMA11 = 91;
static const int INTERRUPTS_DMA12 = 92;
static const int INTERRUPTS_DMA13 = 93;
static const int INTERRUPTS_DMA14 = 94;
static const int INTERRUPTS_DMA15 = 95;
static const int INTERRUPTS_USBDMA = 96;
static const int INTERRUPTS_RSV81 = 97;
static const int INTERRUPTS_ECC = 98;
static const int INTERRUPTS_RSV83 = 99;
static const int INTERRUPTS_RSV84 = 100;
static const int INTERRUPTS_SCA = 101;
static const int INTERRUPTS_RSV86 = 102;
static const int INTERRUPTS_FLC1 = 103;
static const int INTERRUPTS_UART3 = 104;
static const int INTERRUPTS_RSV89 = 105;
static const int INTERRUPTS_RSV90 = 106;
static const int INTERRUPTS_RSV91 = 107;
static const int INTERRUPTS_RSV92 = 108;
static const int INTERRUPTS_RSV93 = 109;
static const int INTERRUPTS_RSV94 = 110;
static const int INTERRUPTS_RSV95 = 111;
static const int INTERRUPTS_RSV96 = 112;
static const int INTERRUPTS_RSV97 = 113;
static const int INTERRUPTS_RSV98 = 114;
static const int INTERRUPTS_I2S = 115;
static const int INTERRUPTS_RSV100 = 116;
static const int INTERRUPTS_RSV101 = 117;
static const int INTERRUPTS_RSV102 = 118;
static const int INTERRUPTS_LPCMP = 119;
static const int INTERRUPTS_RSV104 = 120;
static const int INTERRUPTS_SPI4 = 121;
static const int INTERRUPTS_RSV106 = 122;
static const int INTERRUPTS_CAN0 = 123;
static const int INTERRUPTS_CAN1 = 124;
static const int INTERRUPTS_WUT1 = 125;
static const int INTERRUPTS_RSV110 = 126;
static const int INTERRUPTS_RSV111 = 127;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MAX32690.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for MAX32690.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
