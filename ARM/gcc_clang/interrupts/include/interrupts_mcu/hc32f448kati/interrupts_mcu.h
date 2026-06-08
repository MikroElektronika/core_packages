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
* @brief HC32F448KATI MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_INT000 = 16;
static const int INTERRUPTS_INT001 = 17;
static const int INTERRUPTS_INT002 = 18;
static const int INTERRUPTS_INT003 = 19;
static const int INTERRUPTS_INT004 = 20;
static const int INTERRUPTS_INT005 = 21;
static const int INTERRUPTS_INT006 = 22;
static const int INTERRUPTS_INT007 = 23;
static const int INTERRUPTS_INT008 = 24;
static const int INTERRUPTS_INT009 = 25;
static const int INTERRUPTS_INT010 = 26;
static const int INTERRUPTS_INT011 = 27;
static const int INTERRUPTS_INT012 = 28;
static const int INTERRUPTS_INT013 = 29;
static const int INTERRUPTS_INT014 = 30;
static const int INTERRUPTS_INT015 = 31;
static const int INTERRUPTS_EXTINT_PORT_EIRQ0 = 32;
static const int INTERRUPTS_EXTINT_PORT_EIRQ1 = 33;
static const int INTERRUPTS_EXTINT_PORT_EIRQ2 = 34;
static const int INTERRUPTS_EXTINT_PORT_EIRQ3 = 35;
static const int INTERRUPTS_EXTINT_PORT_EIRQ4 = 36;
static const int INTERRUPTS_EXTINT_PORT_EIRQ5 = 37;
static const int INTERRUPTS_EXTINT_PORT_EIRQ6 = 38;
static const int INTERRUPTS_EXTINT_PORT_EIRQ7 = 39;
static const int INTERRUPTS_EXTINT_PORT_EIRQ8 = 40;
static const int INTERRUPTS_EXTINT_PORT_EIRQ9 = 41;
static const int INTERRUPTS_EXTINT_PORT_EIRQ10 = 42;
static const int INTERRUPTS_EXTINT_PORT_EIRQ11 = 43;
static const int INTERRUPTS_EXTINT_PORT_EIRQ12 = 44;
static const int INTERRUPTS_EXTINT_PORT_EIRQ13 = 45;
static const int INTERRUPTS_EXTINT_PORT_EIRQ14 = 46;
static const int INTERRUPTS_EXTINT_PORT_EIRQ15 = 47;
static const int INTERRUPTS_SWINT0 = 16;
static const int INTERRUPTS_SWINT1 = 17;
static const int INTERRUPTS_SWINT2 = 18;
static const int INTERRUPTS_SWINT3 = 19;
static const int INTERRUPTS_SWINT4 = 20;
static const int INTERRUPTS_SWINT5 = 21;
static const int INTERRUPTS_SWINT6 = 22;
static const int INTERRUPTS_SWINT7 = 23;
static const int INTERRUPTS_SWINT8 = 24;
static const int INTERRUPTS_SWINT9 = 25;
static const int INTERRUPTS_SWINT10 = 26;
static const int INTERRUPTS_SWINT11 = 27;
static const int INTERRUPTS_SWINT12 = 28;
static const int INTERRUPTS_SWINT13 = 29;
static const int INTERRUPTS_SWINT14 = 30;
static const int INTERRUPTS_SWINT15 = 31;
static const int INTERRUPTS_SWINT16 = 32;
static const int INTERRUPTS_SWINT17 = 33;
static const int INTERRUPTS_SWINT18 = 34;
static const int INTERRUPTS_SWINT19 = 35;
static const int INTERRUPTS_SWINT20 = 36;
static const int INTERRUPTS_SWINT21 = 37;
static const int INTERRUPTS_SWINT22 = 38;
static const int INTERRUPTS_SWINT23 = 39;
static const int INTERRUPTS_SWINT24 = 40;
static const int INTERRUPTS_SWINT25 = 41;
static const int INTERRUPTS_SWINT26 = 42;
static const int INTERRUPTS_SWINT27 = 43;
static const int INTERRUPTS_SWINT28 = 44;
static const int INTERRUPTS_SWINT29 = 45;
static const int INTERRUPTS_SWINT30 = 46;
static const int INTERRUPTS_SWINT31 = 47;
static const int INTERRUPTS_DMA1_ERR = 48;
static const int INTERRUPTS_DMA1_TC0_BTC0 = 49;
static const int INTERRUPTS_DMA1_TC1_BTC1 = 50;
static const int INTERRUPTS_DMA1_TC2_BTC2 = 51;
static const int INTERRUPTS_DMA1_TC3_BTC3 = 52;
static const int INTERRUPTS_DMA1_TC4_BTC4 = 53;
static const int INTERRUPTS_DMA1_TC5_BTC5 = 54;
static const int INTERRUPTS_EFM_PEERR_RDCOL = 55;
static const int INTERRUPTS_EFM_OPTEND = 56;
static const int INTERRUPTS_QSPI = 57;
static const int INTERRUPTS_DCU1 = 58;
static const int INTERRUPTS_DCU2 = 59;
static const int INTERRUPTS_DCU3 = 60;
static const int INTERRUPTS_DCU4 = 61;
static const int INTERRUPTS_DMA2_ERR = 62;
static const int INTERRUPTS_DMA2_TC0_BTC0 = 63;
static const int INTERRUPTS_DMA2_TC1_BTC1 = 64;
static const int INTERRUPTS_DMA2_TC2_BTC2 = 65;
static const int INTERRUPTS_DMA2_TC3_BTC3 = 66;
static const int INTERRUPTS_DMA2_TC4_BTC4 = 67;
static const int INTERRUPTS_DMA2_TC5_BTC5 = 68;
static const int INTERRUPTS_TMR0_1 = 69;
static const int INTERRUPTS_TMR0_2 = 70;
static const int INTERRUPTS_RTC = 71;
static const int INTERRUPTS_XTAL = 72;
static const int INTERRUPTS_WKTM = 73;
static const int INTERRUPTS_SWDT = 74;
static const int INTERRUPTS_TMR6_1_GCMP = 75;
static const int INTERRUPTS_TMR6_1_OVF_UDF = 76;
static const int INTERRUPTS_TMR6_1_DTE = 77;
static const int INTERRUPTS_TMR6_1_SCMP = 78;
static const int INTERRUPTS_TMRA_1_OVF_UDF = 79;
static const int INTERRUPTS_TMRA_1_CMP = 80;
static const int INTERRUPTS_TMR6_2_GCMP = 81;
static const int INTERRUPTS_TMR6_2_OVF_UDF = 82;
static const int INTERRUPTS_TMR6_2_DTE = 83;
static const int INTERRUPTS_TMR6_2_SCMP = 84;
static const int INTERRUPTS_TMRA_2_OVF_UDF = 85;
static const int INTERRUPTS_TMRA_2_CMP = 86;
static const int INTERRUPTS_TMRA_3_OVF_UDF = 87;
static const int INTERRUPTS_TMRA_3_CMP = 88;
static const int INTERRUPTS_TMRA_4_OVF_UDF = 89;
static const int INTERRUPTS_TMRA_4_CMP = 90;
static const int INTERRUPTS_TMR4_1_GCMP = 91;
static const int INTERRUPTS_TMR4_1_OVF_UDF = 92;
static const int INTERRUPTS_TMR4_1_RELOAD = 93;
static const int INTERRUPTS_TMR4_1_SCMP = 94;
static const int INTERRUPTS_TMR4_2_GCMP = 95;
static const int INTERRUPTS_TMR4_2_OVF_UDF = 96;
static const int INTERRUPTS_TMR4_2_RELOAD = 97;
static const int INTERRUPTS_TMR4_2_SCMP = 98;
static const int INTERRUPTS_TMR4_3_GCMP = 99;
static const int INTERRUPTS_TMR4_3_OVF_UDF = 100;
static const int INTERRUPTS_TMR4_3_RELOAD = 101;
static const int INTERRUPTS_TMR4_3_SCMP = 102;
static const int INTERRUPTS_I2C1 = 103;
static const int INTERRUPTS_I2C2 = 104;
static const int INTERRUPTS_CMP1_IRQ = 105;
static const int INTERRUPTS_CMP2_IRQ = 106;
static const int INTERRUPTS_CMP3_IRQ = 107;
static const int INTERRUPTS_CMP4_IRQ = 108;
static const int INTERRUPTS_USART1 = 109;
static const int INTERRUPTS_USART1_TCI = 110;
static const int INTERRUPTS_USART2 = 111;
static const int INTERRUPTS_USART2_TCI = 112;
static const int INTERRUPTS_SPI1 = 113;
static const int INTERRUPTS_TMRA_5_OVF_UDF = 114;
static const int INTERRUPTS_TMRA_5_CMP = 115;
static const int INTERRUPTS_EVENT_PORT1 = 116;
static const int INTERRUPTS_EVENT_PORT2 = 117;
static const int INTERRUPTS_EVENT_PORT3 = 118;
static const int INTERRUPTS_EVENT_PORT4 = 119;
static const int INTERRUPTS_USART3 = 120;
static const int INTERRUPTS_USART3_TCI = 121;
static const int INTERRUPTS_USART4 = 122;
static const int INTERRUPTS_USART4_TCI = 123;
static const int INTERRUPTS_SPI2 = 124;
static const int INTERRUPTS_SPI3 = 125;
static const int INTERRUPTS_EMB_GR0 = 126;
static const int INTERRUPTS_EMB_GR1 = 127;
static const int INTERRUPTS_EMB_GR2 = 128;
static const int INTERRUPTS_EMB_GR3 = 129;
static const int INTERRUPTS_USART5 = 130;
static const int INTERRUPTS_USART5_TCI = 131;
static const int INTERRUPTS_USART6 = 132;
static const int INTERRUPTS_USART6_TCI = 133;
static const int INTERRUPTS_MCAN1_INT0 = 134;
static const int INTERRUPTS_MCAN1_INT1 = 135;
static const int INTERRUPTS_MCAN2_INT0 = 136;
static const int INTERRUPTS_MCAN2_INT1 = 137;
static const int INTERRUPTS_USART1_WUPI = 138;
static const int INTERRUPTS_FCM = 141;
static const int INTERRUPTS_WDT = 142;
static const int INTERRUPTS_CTC = 143;
static const int INTERRUPTS_ADC1 = 144;
static const int INTERRUPTS_ADC2 = 145;
static const int INTERRUPTS_ADC3 = 146;
static const int INTERRUPTS_TRNG = 147;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for HC32F448KATI.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for HC32F448KATI.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
