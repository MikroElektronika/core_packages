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
* @brief cec1702 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NMI = 2;
static const int INTERRUPTS_HARDFAULT = 3;
static const int INTERRUPTS_MEMMANAGE = 4;
static const int INTERRUPTS_BUSFAULT = 5;
static const int INTERRUPTS_USAGEFAULT = 6;
static const int INTERRUPTS_RESERVED1 = 7;
static const int INTERRUPTS_RESERVED2 = 8;
static const int INTERRUPTS_RESERVED3 = 9;
static const int INTERRUPTS_RESERVED4 = 10;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_DEBUGMON = 12;
static const int INTERRUPTS_RESERVED5 = 13;
static const int INTERRUPTS_PENDSV = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_GPIO_140_176 = 16;
static const int INTERRUPTS_GPIO_100_137 = 17;
static const int INTERRUPTS_GPIO_040_076 = 18;
static const int INTERRUPTS_GPIO_000_036 = 19;
static const int INTERRUPTS_GPIO_200_236 = 20;
static const int INTERRUPTS_GIRQ13 = 21;
static const int INTERRUPTS_GIRQ14 = 22;
static const int INTERRUPTS_GIRQ15 = 23;
static const int INTERRUPTS_GIRQ16 = 24;
static const int INTERRUPTS_GIRQ17 = 25;
static const int INTERRUPTS_GIRQ18 = 26;
static const int INTERRUPTS_GIRQ19 = 27;
static const int INTERRUPTS_GIRQ20 = 28;
static const int INTERRUPTS_GIRQ21 = 29;
static const int INTERRUPTS_GIRQ23 = 30;
static const int INTERRUPTS_RESERVED16 = 31;
static const int INTERRUPTS_RESERVED17 = 32;
static const int INTERRUPTS_GPIO_240_257 = 33;
static const int INTERRUPTS_RESERVED18 = 34;
static const int INTERRUPTS_RESERVED19 = 35;
static const int INTERRUPTS_SMB_0 = 36;
static const int INTERRUPTS_SMB_1 = 37;
static const int INTERRUPTS_SMB_2 = 38;
static const int INTERRUPTS_SMB_3 = 39;
static const int INTERRUPTS_DMA0 = 40;
static const int INTERRUPTS_DMA1 = 41;
static const int INTERRUPTS_DMA2 = 42;
static const int INTERRUPTS_DMA3 = 43;
static const int INTERRUPTS_DMA4 = 44;
static const int INTERRUPTS_DMA5 = 45;
static const int INTERRUPTS_DMA6 = 46;
static const int INTERRUPTS_DMA7 = 47;
static const int INTERRUPTS_DMA8 = 48;
static const int INTERRUPTS_DMA9 = 49;
static const int INTERRUPTS_DMA10 = 50;
static const int INTERRUPTS_DMA11 = 51;
static const int INTERRUPTS_DMA12 = 52;
static const int INTERRUPTS_DMA13 = 53;
static const int INTERRUPTS_RESERVED20 = 54;
static const int INTERRUPTS_RESERVED21 = 55;
static const int INTERRUPTS_UART_0 = 56;
static const int INTERRUPTS_UART_1 = 57;
static const int INTERRUPTS_RESERVED22 = 58;
static const int INTERRUPTS_RESERVED23 = 59;
static const int INTERRUPTS_RESERVED24 = 60;
static const int INTERRUPTS_RESERVED25 = 61;
static const int INTERRUPTS_RESERVED26 = 62;
static const int INTERRUPTS_RESERVED27 = 63;
static const int INTERRUPTS_RESERVED28 = 64;
static const int INTERRUPTS_RESERVED29 = 65;
static const int INTERRUPTS_RESERVED30 = 66;
static const int INTERRUPTS_RESERVED31 = 67;
static const int INTERRUPTS_RESERVED32 = 68;
static const int INTERRUPTS_RESERVED33 = 69;
static const int INTERRUPTS_RESERVED34 = 70;
static const int INTERRUPTS_RESERVED35 = 71;
static const int INTERRUPTS_RESERVED36 = 72;
static const int INTERRUPTS_RESERVED37 = 73;
static const int INTERRUPTS_RESERVED38 = 74;
static const int INTERRUPTS_RESERVED39 = 75;
static const int INTERRUPTS_RESERVED40 = 76;
static const int INTERRUPTS_RESERVED41 = 77;
static const int INTERRUPTS_RESERVED42 = 78;
static const int INTERRUPTS_RESERVED43 = 79;
static const int INTERRUPTS_RESERVED44 = 80;
static const int INTERRUPTS_RESERVED45 = 81;
static const int INTERRUPTS_RESERVED46 = 82;
static const int INTERRUPTS_RESERVED47 = 83;
static const int INTERRUPTS_RESERVED48 = 84;
static const int INTERRUPTS_RESERVED49 = 85;
static const int INTERRUPTS_RESERVED50 = 86;
static const int INTERRUPTS_TACH_0 = 87;
static const int INTERRUPTS_TACH_1 = 88;
static const int INTERRUPTS_TACH_3 = 89;
static const int INTERRUPTS_RPM2PWM_0_FAIL = 90;
static const int INTERRUPTS_RPM2PWM_0_STALL = 91;
static const int INTERRUPTS_RPM2PWM_1_FAIL = 92;
static const int INTERRUPTS_RPM2PWM_1_STALL = 93;
static const int INTERRUPTS_ADC_SNGL = 94;
static const int INTERRUPTS_ADC_RPT = 95;
static const int INTERRUPTS_RC_ID_0 = 96;
static const int INTERRUPTS_RC_ID_1 = 97;
static const int INTERRUPTS_RC_ID_2 = 98;
static const int INTERRUPTS_LED_0 = 99;
static const int INTERRUPTS_LED_1 = 100;
static const int INTERRUPTS_LED_2 = 101;
static const int INTERRUPTS_LED_3 = 102;
static const int INTERRUPTS_RESERVED51 = 103;
static const int INTERRUPTS_RESERVED52 = 104;
static const int INTERRUPTS_RESERVED53 = 105;
static const int INTERRUPTS_RESERVED54 = 106;
static const int INTERRUPTS_RESERVED55 = 107;
static const int INTERRUPTS_SPI0_TX = 108;
static const int INTERRUPTS_SPI0_RX = 109;
static const int INTERRUPTS_RESERVED56 = 110;
static const int INTERRUPTS_RESERVED57 = 111;
static const int INTERRUPTS_RESERVED58 = 112;
static const int INTERRUPTS_RESERVED59 = 113;
static const int INTERRUPTS_RESERVED60 = 114;
static const int INTERRUPTS_RESERVED61 = 115;
static const int INTERRUPTS_RESERVED62 = 116;
static const int INTERRUPTS_RESERVED63 = 117;
static const int INTERRUPTS_RESERVED64 = 118;
static const int INTERRUPTS_RESERVED65 = 119;
static const int INTERRUPTS_RESERVED66 = 120;
static const int INTERRUPTS_RESERVED67 = 121;
static const int INTERRUPTS_RESERVED68 = 122;
static const int INTERRUPTS_RESERVED69 = 123;
static const int INTERRUPTS_RESERVED70 = 124;
static const int INTERRUPTS_RESERVED71 = 125;
static const int INTERRUPTS_RESERVED72 = 126;
static const int INTERRUPTS_RTOS_TIMER = 127;
static const int INTERRUPTS_RTOS_HTIMER0 = 128;
static const int INTERRUPTS_RTOS_HTIMER1 = 129;
static const int INTERRUPTS_WEEK_ALARM_INT = 130;
static const int INTERRUPTS_SUB_WEEK_ALARM = 131;
static const int INTERRUPTS_ONE_SECOND = 132;
static const int INTERRUPTS_SUB_SECOND = 133;
static const int INTERRUPTS_SYSPWR_PRES = 134;
static const int INTERRUPTS_RTC_INT = 135;
static const int INTERRUPTS_RTC_ALARM = 136;
static const int INTERRUPTS_VCI_OVRD_IN = 137;
static const int INTERRUPTS_VCI_IN0 = 138;
static const int INTERRUPTS_VCI_IN1 = 139;
static const int INTERRUPTS_VCI_IN2 = 140;
static const int INTERRUPTS_VCI_IN3 = 141;
static const int INTERRUPTS_VCI_IN4 = 142;
static const int INTERRUPTS_VCI_IN5 = 143;
static const int INTERRUPTS_VCI_IN6 = 144;
static const int INTERRUPTS_RESERVED73 = 145;
static const int INTERRUPTS_RESERVED74 = 146;
static const int INTERRUPTS_RESERVED75 = 147;
static const int INTERRUPTS_RESERVED76 = 148;
static const int INTERRUPTS_RESERVED77 = 149;
static const int INTERRUPTS_RESERVED78 = 150;
static const int INTERRUPTS_KSC_INT = 151;
static const int INTERRUPTS_TIMER_0 = 152;
static const int INTERRUPTS_TIMER_1 = 153;
static const int INTERRUPTS_TIMER_2 = 154;
static const int INTERRUPTS_TIMER_3 = 155;
static const int INTERRUPTS_TIMER_4 = 156;
static const int INTERRUPTS_TIMER_5 = 157;
static const int INTERRUPTS_COUNTER_TIMER_0 = 158;
static const int INTERRUPTS_COUNTER_TIMER_1 = 159;
static const int INTERRUPTS_COUNTER_TIMER_2 = 160;
static const int INTERRUPTS_COUNTER_TIMER_3 = 161;
static const int INTERRUPTS_COUNTER_CAPTURE_TIMER = 162;
static const int INTERRUPTS_CAPTURE_0 = 163;
static const int INTERRUPTS_CAPTURE_1 = 164;
static const int INTERRUPTS_CAPTURE_2 = 165;
static const int INTERRUPTS_CAPTURE_3 = 166;
static const int INTERRUPTS_CAPTURE_4 = 167;
static const int INTERRUPTS_CAPTURE_5 = 168;
static const int INTERRUPTS_COMPARE_0 = 169;
static const int INTERRUPTS_COMPARE_1 = 170;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for cec1702.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for cec1702.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
