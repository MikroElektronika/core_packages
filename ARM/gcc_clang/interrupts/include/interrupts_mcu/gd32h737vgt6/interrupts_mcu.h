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
* @brief GD32H737VGT6 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_WWDGT = 16;
static const int INTERRUPTS_VAVD_LVD_VOVD = 17;
static const int INTERRUPTS_TAMPER_STAMP_LXTAL = 18;
static const int INTERRUPTS_RTC_WKUP = 19;
static const int INTERRUPTS_FMC = 20;
static const int INTERRUPTS_RCU = 21;
static const int INTERRUPTS_EXTI0 = 22;
static const int INTERRUPTS_EXTI1 = 23;
static const int INTERRUPTS_EXTI2 = 24;
static const int INTERRUPTS_EXTI3 = 25;
static const int INTERRUPTS_EXTI4 = 26;
static const int INTERRUPTS_DMA0_Channel0 = 27;
static const int INTERRUPTS_DMA0_Channel1 = 28;
static const int INTERRUPTS_DMA0_Channel2 = 29;
static const int INTERRUPTS_DMA0_Channel3 = 30;
static const int INTERRUPTS_DMA0_Channel4 = 31;
static const int INTERRUPTS_DMA0_Channel5 = 32;
static const int INTERRUPTS_DMA0_Channel6 = 33;
static const int INTERRUPTS_ADC0_1 = 34;
static const int INTERRUPTS_EXTI5_9 = 39;
static const int INTERRUPTS_TIMER0_BRK = 40;
static const int INTERRUPTS_TIMER0_UP = 41;
static const int INTERRUPTS_TIMER0_TRG_CMT = 42;
static const int INTERRUPTS_TIMER0_Channel = 43;
static const int INTERRUPTS_TIMER1 = 44;
static const int INTERRUPTS_TIMER2 = 45;
static const int INTERRUPTS_TIMER3 = 46;
static const int INTERRUPTS_I2C0_EV = 47;
static const int INTERRUPTS_I2C0_ER = 48;
static const int INTERRUPTS_I2C1_EV = 49;
static const int INTERRUPTS_I2C1_ER = 50;
static const int INTERRUPTS_SPI0 = 51;
static const int INTERRUPTS_SPI1 = 52;
static const int INTERRUPTS_USART0 = 53;
static const int INTERRUPTS_USART1 = 54;
static const int INTERRUPTS_USART2 = 55;
static const int INTERRUPTS_EXTI10_15 = 56;
static const int INTERRUPTS_RTC_Alarm = 57;
static const int INTERRUPTS_TIMER7_BRK = 59;
static const int INTERRUPTS_TIMER7_UP = 60;
static const int INTERRUPTS_TIMER7_TRG_CMT = 61;
static const int INTERRUPTS_TIMER7_Channel = 62;
static const int INTERRUPTS_DMA0_Channel7 = 63;
static const int INTERRUPTS_EXMC = 64;
static const int INTERRUPTS_SDIO0 = 65;
static const int INTERRUPTS_TIMER4 = 66;
static const int INTERRUPTS_SPI2 = 67;
static const int INTERRUPTS_UART3 = 68;
static const int INTERRUPTS_UART4 = 69;
static const int INTERRUPTS_TIMER5_DAC_UDR = 70;
static const int INTERRUPTS_TIMER6 = 71;
static const int INTERRUPTS_DMA1_Channel0 = 72;
static const int INTERRUPTS_DMA1_Channel1 = 73;
static const int INTERRUPTS_DMA1_Channel2 = 74;
static const int INTERRUPTS_DMA1_Channel3 = 75;
static const int INTERRUPTS_DMA1_Channel4 = 76;
static const int INTERRUPTS_ENET0 = 77;
static const int INTERRUPTS_ENET0_WKUP = 78;
static const int INTERRUPTS_DMA1_Channel5 = 84;
static const int INTERRUPTS_DMA1_Channel6 = 85;
static const int INTERRUPTS_DMA1_Channel7 = 86;
static const int INTERRUPTS_USART5 = 87;
static const int INTERRUPTS_I2C2_EV = 88;
static const int INTERRUPTS_I2C2_ER = 89;
static const int INTERRUPTS_USBHS0_EP1_OUT = 90;
static const int INTERRUPTS_USBHS0_EP1_IN = 91;
static const int INTERRUPTS_USBHS0_WKUP = 92;
static const int INTERRUPTS_USBHS0 = 93;
static const int INTERRUPTS_DCI = 94;
static const int INTERRUPTS_CAU = 95;
static const int INTERRUPTS_HAU_TRNG = 96;
static const int INTERRUPTS_FPU = 97;
static const int INTERRUPTS_UART6 = 98;
static const int INTERRUPTS_UART7 = 99;
static const int INTERRUPTS_SPI3 = 100;
static const int INTERRUPTS_SPI4 = 101;
static const int INTERRUPTS_SPI5 = 102;
static const int INTERRUPTS_SAI0 = 103;
static const int INTERRUPTS_TLI = 104;
static const int INTERRUPTS_TLI_ER = 105;
static const int INTERRUPTS_IPA = 106;
static const int INTERRUPTS_SAI1 = 107;
static const int INTERRUPTS_OSPI0 = 108;
static const int INTERRUPTS_I2C3_EV = 111;
static const int INTERRUPTS_I2C3_ER = 112;
static const int INTERRUPTS_RSPDIF = 113;
static const int INTERRUPTS_DMAMUX_OVR = 118;
static const int INTERRUPTS_HPDF_INT0 = 126;
static const int INTERRUPTS_HPDF_INT1 = 127;
static const int INTERRUPTS_HPDF_INT2 = 128;
static const int INTERRUPTS_HPDF_INT3 = 129;
static const int INTERRUPTS_SAI2 = 130;
static const int INTERRUPTS_TIMER14 = 132;
static const int INTERRUPTS_TIMER15 = 133;
static const int INTERRUPTS_TIMER16 = 134;
static const int INTERRUPTS_MDIO = 136;
static const int INTERRUPTS_MDMA = 138;
static const int INTERRUPTS_SDIO1 = 140;
static const int INTERRUPTS_HWSEM = 141;
static const int INTERRUPTS_ADC2 = 143;
static const int INTERRUPTS_CMP0_1 = 153;
static const int INTERRUPTS_CTC = 160;
static const int INTERRUPTS_RAMECCMU = 161;
static const int INTERRUPTS_OSPI1 = 166;
static const int INTERRUPTS_RTDEC0 = 167;
static const int INTERRUPTS_RTDEC1 = 168;
static const int INTERRUPTS_FAC = 169;
static const int INTERRUPTS_TMU = 170;
static const int INTERRUPTS_TIMER22 = 177;
static const int INTERRUPTS_TIMER23 = 178;
static const int INTERRUPTS_TIMER30 = 179;
static const int INTERRUPTS_TIMER31 = 180;
static const int INTERRUPTS_TIMER40 = 181;
static const int INTERRUPTS_TIMER41 = 182;
static const int INTERRUPTS_TIMER42 = 183;
static const int INTERRUPTS_TIMER43 = 184;
static const int INTERRUPTS_TIMER44 = 185;
static const int INTERRUPTS_TIMER50 = 186;
static const int INTERRUPTS_TIMER51 = 187;
static const int INTERRUPTS_USBHS1_EP1_OUT = 188;
static const int INTERRUPTS_USBHS1_EP1_IN = 189;
static const int INTERRUPTS_USBHS1_WKUP = 190;
static const int INTERRUPTS_USBHS1 = 191;
static const int INTERRUPTS_ENET1 = 192;
static const int INTERRUPTS_ENET1_WKUP = 193;
static const int INTERRUPTS_CAN0_WKUP = 195;
static const int INTERRUPTS_CAN0_Message = 196;
static const int INTERRUPTS_CAN0_Busoff = 197;
static const int INTERRUPTS_CAN0_Error = 198;
static const int INTERRUPTS_CAN0_FastError = 199;
static const int INTERRUPTS_CAN0_TEC = 200;
static const int INTERRUPTS_CAN0_REC = 201;
static const int INTERRUPTS_CAN1_WKUP = 202;
static const int INTERRUPTS_CAN1_Message = 203;
static const int INTERRUPTS_CAN1_Busoff = 204;
static const int INTERRUPTS_CAN1_Error = 205;
static const int INTERRUPTS_CAN1_FastError = 206;
static const int INTERRUPTS_CAN1_TEC = 207;
static const int INTERRUPTS_CAN1_REC = 208;
static const int INTERRUPTS_CAN2_WKUP = 209;
static const int INTERRUPTS_CAN2_Message = 210;
static const int INTERRUPTS_CAN2_Busoff = 211;
static const int INTERRUPTS_CAN2_Error = 212;
static const int INTERRUPTS_CAN2_FastError = 213;
static const int INTERRUPTS_CAN2_TEC = 214;
static const int INTERRUPTS_CAN2_REC = 215;
static const int INTERRUPTS_EFUSE = 216;
static const int INTERRUPTS_I2C0_WKUP = 217;
static const int INTERRUPTS_I2C1_WKUP = 218;
static const int INTERRUPTS_I2C2_WKUP = 219;
static const int INTERRUPTS_I2C3_WKUP = 220;
static const int INTERRUPTS_LPDTS = 221;
static const int INTERRUPTS_LPDTS_WKUP = 222;
static const int INTERRUPTS_TIMER0_DEC = 223;
static const int INTERRUPTS_TIMER7_DEC = 224;
static const int INTERRUPTS_TIMER1_DEC = 225;
static const int INTERRUPTS_TIMER2_DEC = 226;
static const int INTERRUPTS_TIMER3_DEC = 227;
static const int INTERRUPTS_TIMER4_DEC = 228;
static const int INTERRUPTS_TIMER22_DEC = 229;
static const int INTERRUPTS_TIMER23_DEC = 230;
static const int INTERRUPTS_TIMER30_DEC = 231;
static const int INTERRUPTS_TIMER31_DEC = 232;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for GD32H737VGT6.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for GD32H737VGT6.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
