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
 * @brief ESP32-P4NRW32X MCU specific interrupt per module definitions.
 *        INTERRUPTS_<SOURCE> values are interrupt matrix source numbers (ESP-IDF soc/interrupts.h).
 *        interrupt_enable() routes a source to CPU interrupt line 1; the common trap handler calls
 *        <SOURCE>_IRQHandler for every pending enabled source.
 */

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_LP_RTC = 0;
static const int INTERRUPTS_LP_WDT = 1;
static const int INTERRUPTS_LP_TIMER_REG_0 = 2;
static const int INTERRUPTS_LP_TIMER_REG_1 = 3;
static const int INTERRUPTS_MB_HP = 4;
static const int INTERRUPTS_MB_LP = 5;
static const int INTERRUPTS_PMU_0 = 6;
static const int INTERRUPTS_PMU_1 = 7;
static const int INTERRUPTS_LP_ANAPERI = 8;
static const int INTERRUPTS_LP_ADC = 9;
static const int INTERRUPTS_LP_GPIO = 10;
static const int INTERRUPTS_LP_I2C = 11;
static const int INTERRUPTS_LP_I2S = 12;
static const int INTERRUPTS_LP_SPI = 13;
static const int INTERRUPTS_LP_TOUCH = 14;
static const int INTERRUPTS_LP_TSENS = 15;
static const int INTERRUPTS_LP_UART = 16;
static const int INTERRUPTS_LP_EFUSE = 17;
static const int INTERRUPTS_LP_SW = 18;
static const int INTERRUPTS_LP_SYSREG = 19;
static const int INTERRUPTS_LP_HUK = 20;
static const int INTERRUPTS_SYS_ICM = 21;
static const int INTERRUPTS_USB_SERIAL_JTAG = 22;
static const int INTERRUPTS_SDIO_HOST = 23;
static const int INTERRUPTS_DW_GDMA = 24;
static const int INTERRUPTS_SPI2 = 25;
static const int INTERRUPTS_SPI3 = 26;
static const int INTERRUPTS_I2S0 = 27;
static const int INTERRUPTS_I2S1 = 28;
static const int INTERRUPTS_I2S2 = 29;
static const int INTERRUPTS_UHCI0 = 30;
static const int INTERRUPTS_UART0 = 31;
static const int INTERRUPTS_UART1 = 32;
static const int INTERRUPTS_UART2 = 33;
static const int INTERRUPTS_UART3 = 34;
static const int INTERRUPTS_UART4 = 35;
static const int INTERRUPTS_LCD_CAM = 36;
static const int INTERRUPTS_ADC = 37;
static const int INTERRUPTS_PWM0 = 38;
static const int INTERRUPTS_PWM1 = 39;
static const int INTERRUPTS_TWAI0 = 40;
static const int INTERRUPTS_TWAI1 = 41;
static const int INTERRUPTS_TWAI2 = 42;
static const int INTERRUPTS_RMT = 43;
static const int INTERRUPTS_I2C0 = 44;
static const int INTERRUPTS_I2C1 = 45;
static const int INTERRUPTS_TG0_T0 = 46;
static const int INTERRUPTS_TG0_T1 = 47;
static const int INTERRUPTS_TG0_WDT_LEVEL = 48;
static const int INTERRUPTS_TG1_T0 = 49;
static const int INTERRUPTS_TG1_T1 = 50;
static const int INTERRUPTS_TG1_WDT_LEVEL = 51;
static const int INTERRUPTS_LEDC = 52;
static const int INTERRUPTS_SYSTIMER_TARGET0 = 53;
static const int INTERRUPTS_SYSTIMER_TARGET1 = 54;
static const int INTERRUPTS_SYSTIMER_TARGET2 = 55;
static const int INTERRUPTS_AHB_PDMA_IN_CH0 = 56;
static const int INTERRUPTS_AHB_PDMA_IN_CH1 = 57;
static const int INTERRUPTS_AHB_PDMA_IN_CH2 = 58;
static const int INTERRUPTS_AHB_PDMA_OUT_CH0 = 59;
static const int INTERRUPTS_AHB_PDMA_OUT_CH1 = 60;
static const int INTERRUPTS_AHB_PDMA_OUT_CH2 = 61;
static const int INTERRUPTS_AXI_PDMA_IN_CH0 = 62;
static const int INTERRUPTS_AXI_PDMA_IN_CH1 = 63;
static const int INTERRUPTS_AXI_PDMA_IN_CH2 = 64;
static const int INTERRUPTS_AXI_PDMA_OUT_CH0 = 65;
static const int INTERRUPTS_AXI_PDMA_OUT_CH1 = 66;
static const int INTERRUPTS_AXI_PDMA_OUT_CH2 = 67;
static const int INTERRUPTS_RSA = 68;
static const int INTERRUPTS_AES = 69;
static const int INTERRUPTS_SHA = 70;
static const int INTERRUPTS_ECC = 71;
static const int INTERRUPTS_ECDSA = 72;
static const int INTERRUPTS_KM = 73;
static const int INTERRUPTS_GPIO_INTR0 = 74;
static const int INTERRUPTS_GPIO_INTR1 = 75;
static const int INTERRUPTS_GPIO_INTR2 = 76;
static const int INTERRUPTS_GPIO_INTR3 = 77;
static const int INTERRUPTS_GPIO_PAD_COMP = 78;
static const int INTERRUPTS_FROM_CPU_INTR0 = 79;
static const int INTERRUPTS_FROM_CPU_INTR1 = 80;
static const int INTERRUPTS_FROM_CPU_INTR2 = 81;
static const int INTERRUPTS_FROM_CPU_INTR3 = 82;
static const int INTERRUPTS_CACHE = 83;
static const int INTERRUPTS_MSPI = 84;
static const int INTERRUPTS_CSI_BRIDGE = 85;
static const int INTERRUPTS_DSI_BRIDGE = 86;
static const int INTERRUPTS_CSI = 87;
static const int INTERRUPTS_DSI = 88;
static const int INTERRUPTS_GMII_PHY = 89;
static const int INTERRUPTS_LPI = 90;
static const int INTERRUPTS_PMT = 91;
static const int INTERRUPTS_ETH_MAC = 92;
static const int INTERRUPTS_USB_OTG = 93;
static const int INTERRUPTS_USB_OTG_ENDP_MULTI_PROC = 94;
static const int INTERRUPTS_JPEG = 95;
static const int INTERRUPTS_PPA = 96;
static const int INTERRUPTS_CORE0_TRACE = 97;
static const int INTERRUPTS_CORE1_TRACE = 98;
static const int INTERRUPTS_HP_CORE_CTRL = 99;
static const int INTERRUPTS_ISP = 100;
static const int INTERRUPTS_I3C_MST = 101;
static const int INTERRUPTS_I3C_SLV = 102;
static const int INTERRUPTS_USB_OTG11_CH0 = 103;
static const int INTERRUPTS_DMA2D_IN_CH0 = 104;
static const int INTERRUPTS_DMA2D_IN_CH1 = 105;
static const int INTERRUPTS_DMA2D_OUT_CH0 = 106;
static const int INTERRUPTS_DMA2D_OUT_CH1 = 107;
static const int INTERRUPTS_DMA2D_OUT_CH2 = 108;
static const int INTERRUPTS_PSRAM_MSPI = 109;
static const int INTERRUPTS_HP_SYSREG = 110;
static const int INTERRUPTS_PCNT = 111;
static const int INTERRUPTS_HP_PAU = 112;
static const int INTERRUPTS_HP_PARLIO_RX = 113;
static const int INTERRUPTS_HP_PARLIO_TX = 114;
static const int INTERRUPTS_H264_DMA2D_OUT_CH0 = 115;
static const int INTERRUPTS_H264_DMA2D_OUT_CH1 = 116;
static const int INTERRUPTS_H264_DMA2D_OUT_CH2 = 117;
static const int INTERRUPTS_H264_DMA2D_OUT_CH3 = 118;
static const int INTERRUPTS_H264_DMA2D_OUT_CH4 = 119;
static const int INTERRUPTS_H264_DMA2D_IN_CH0 = 120;
static const int INTERRUPTS_H264_DMA2D_IN_CH1 = 121;
static const int INTERRUPTS_H264_DMA2D_IN_CH2 = 122;
static const int INTERRUPTS_H264_DMA2D_IN_CH3 = 123;
static const int INTERRUPTS_H264_DMA2D_IN_CH4 = 124;
static const int INTERRUPTS_H264_DMA2D_IN_CH5 = 125;
static const int INTERRUPTS_H264_REG = 126;
static const int INTERRUPTS_ASSIST_DEBUG = 127;
static const int INTERRUPTS_DMA2D_IN_CH2 = 133;
static const int INTERRUPTS_DMA2D_OUT_CH3 = 134;
static const int INTERRUPTS_AXI_PERF_MON = 135;
// EOF Interrupt table

// Interrupt controller
#define INTERRUPTS_ESP_MATRIX
#define INTERRUPTS_ESP_CLIC
#define INTERRUPTS_ESP_SOURCES 136
#define INTERRUPTS_ESP_CPU_LINE 1
#define INTERRUPTS_ESP_MAP_BASE 0x500D6000UL
#define INTERRUPTS_ESP_STATUS_COUNT 5
#define INTERRUPTS_ESP_STATUS_REGS { 0x500D6200UL, 0x500D6204UL, 0x500D6208UL, 0x500D620CUL, 0x500D6220UL }
#define INTERRUPTS_ESP_DR_REG_CLIC_CTRL_BASE 0x20801000UL
#define INTERRUPTS_ESP_NLBITS 0x00000003UL
#define INTERRUPTS_ESP_CLIC_EXT_INTR_NUM_OFFSET 0x00000010UL
#define INTERRUPTS_ESP_DR_REG_CLIC_BASE 0x20800000UL
// EOF Interrupt controller

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
