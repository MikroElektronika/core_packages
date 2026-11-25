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
 * @brief ESP32-S31NRV16 MCU specific interrupt per module definitions.
 *        INTERRUPTS_<SOURCE> values are interrupt matrix source numbers (ESP-IDF soc/interrupts.h).
 *        interrupt_enable() routes a source to CPU interrupt line 1; the common trap handler calls
 *        <SOURCE>_IRQHandler for every pending enabled source.
 */

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_SYS_ICM = 0;
static const int INTERRUPTS_AXI_PERF_MON = 1;
static const int INTERRUPTS_USB_SERIAL_JTAG = 2;
static const int INTERRUPTS_SDIO_HOST = 3;
static const int INTERRUPTS_SPI2 = 4;
static const int INTERRUPTS_SPI3 = 5;
static const int INTERRUPTS_I2S0 = 6;
static const int INTERRUPTS_I2S1 = 7;
static const int INTERRUPTS_UHCI0 = 8;
static const int INTERRUPTS_UART0 = 9;
static const int INTERRUPTS_UART1 = 10;
static const int INTERRUPTS_UART2 = 11;
static const int INTERRUPTS_UART3 = 12;
static const int INTERRUPTS_LCD_CAM = 13;
static const int INTERRUPTS_PWM0 = 14;
static const int INTERRUPTS_PWM1 = 15;
static const int INTERRUPTS_PWM2 = 16;
static const int INTERRUPTS_PWM3 = 17;
static const int INTERRUPTS_TWAI0 = 18;
static const int INTERRUPTS_TWAI0_TIMER = 19;
static const int INTERRUPTS_TWAI1 = 20;
static const int INTERRUPTS_TWAI1_TIMER = 21;
static const int INTERRUPTS_RMT = 22;
static const int INTERRUPTS_I2C0 = 23;
static const int INTERRUPTS_I2C1 = 24;
static const int INTERRUPTS_TIMERGRP0_T0 = 25;
static const int INTERRUPTS_TIMERGRP0_T1 = 26;
static const int INTERRUPTS_TIMERGRP0_WDT = 27;
static const int INTERRUPTS_TIMERGRP1_T0 = 28;
static const int INTERRUPTS_TIMERGRP1_T1 = 29;
static const int INTERRUPTS_TIMERGRP1_WDT = 30;
static const int INTERRUPTS_LEDC0 = 31;
static const int INTERRUPTS_LEDC1 = 32;
static const int INTERRUPTS_SYSTIMER_TARGET0 = 33;
static const int INTERRUPTS_SYSTIMER_TARGET1 = 34;
static const int INTERRUPTS_SYSTIMER_TARGET2 = 35;
static const int INTERRUPTS_AHB_PDMA_IN_CH0 = 36;
static const int INTERRUPTS_AHB_PDMA_IN_CH1 = 37;
static const int INTERRUPTS_AHB_PDMA_IN_CH2 = 38;
static const int INTERRUPTS_AHB_PDMA_IN_CH3 = 39;
static const int INTERRUPTS_AHB_PDMA_IN_CH4 = 40;
static const int INTERRUPTS_AHB_PDMA_OUT_CH0 = 41;
static const int INTERRUPTS_AHB_PDMA_OUT_CH1 = 42;
static const int INTERRUPTS_AHB_PDMA_OUT_CH2 = 43;
static const int INTERRUPTS_AHB_PDMA_OUT_CH3 = 44;
static const int INTERRUPTS_AHB_PDMA_OUT_CH4 = 45;
static const int INTERRUPTS_ASRC_CHNL0 = 46;
static const int INTERRUPTS_ASRC_CHNL1 = 47;
static const int INTERRUPTS_AXI_PDMA_IN_CH0 = 48;
static const int INTERRUPTS_AXI_PDMA_IN_CH1 = 49;
static const int INTERRUPTS_AXI_PDMA_IN_CH2 = 50;
static const int INTERRUPTS_AXI_PDMA_OUT_CH0 = 51;
static const int INTERRUPTS_AXI_PDMA_OUT_CH1 = 52;
static const int INTERRUPTS_AXI_PDMA_OUT_CH2 = 53;
static const int INTERRUPTS_RSA = 54;
static const int INTERRUPTS_AES = 55;
static const int INTERRUPTS_SHA = 56;
static const int INTERRUPTS_ECC = 57;
static const int INTERRUPTS_ECDSA = 58;
static const int INTERRUPTS_KM = 59;
static const int INTERRUPTS_RMA = 60;
static const int INTERRUPTS_GPIO_INTR0 = 61;
static const int INTERRUPTS_GPIO_INTR1 = 62;
static const int INTERRUPTS_GPIO_INTR2 = 63;
static const int INTERRUPTS_GPIO_INTR3 = 64;
static const int INTERRUPTS_CPU_INTR_FROM_CPU_0 = 65;
static const int INTERRUPTS_CPU_INTR_FROM_CPU_1 = 66;
static const int INTERRUPTS_CPU_INTR_FROM_CPU_2 = 67;
static const int INTERRUPTS_CPU_INTR_FROM_CPU_3 = 68;
static const int INTERRUPTS_CACHE = 69;
static const int INTERRUPTS_CPU_APM_M0 = 70;
static const int INTERRUPTS_CPU_APM_M1 = 71;
static const int INTERRUPTS_CPU_APM_M2 = 72;
static const int INTERRUPTS_CPU_APM_M3 = 73;
static const int INTERRUPTS_HP_MEM_APM_M0 = 74;
static const int INTERRUPTS_HP_MEM_APM_M1 = 75;
static const int INTERRUPTS_HP_MEM_APM_M2 = 76;
static const int INTERRUPTS_HP_MEM_APM_M3 = 77;
static const int INTERRUPTS_HP_MEM_APM_M4 = 78;
static const int INTERRUPTS_HP_MEM_APM_M5 = 79;
static const int INTERRUPTS_CPU_PERI0_TIMEOUT = 80;
static const int INTERRUPTS_CPU_PERI1_TIMEOUT = 81;
static const int INTERRUPTS_HP_PERI0_TIMEOUT = 82;
static const int INTERRUPTS_HP_PERI1_TIMEOUT = 83;
static const int INTERRUPTS_HP_APM_M0 = 84;
static const int INTERRUPTS_HP_APM_M1 = 85;
static const int INTERRUPTS_HP_APM_M2 = 86;
static const int INTERRUPTS_HP_APM_M3 = 87;
static const int INTERRUPTS_HP_APM_M4 = 88;
static const int INTERRUPTS_HP_APM_M5 = 89;
static const int INTERRUPTS_HP_APM_M6 = 90;
static const int INTERRUPTS_HP_PERI0_PMS = 91;
static const int INTERRUPTS_HP_PERI1_PMS = 92;
static const int INTERRUPTS_CPU0_PERI_PMS = 93;
static const int INTERRUPTS_CPU1_PERI_PMS = 94;
static const int INTERRUPTS_MSPI_FLASH = 95;
static const int INTERRUPTS_LPI = 96;
static const int INTERRUPTS_PMT = 97;
static const int INTERRUPTS_SBD = 98;
static const int INTERRUPTS_USB_OTGHS = 99;
static const int INTERRUPTS_USB_OTGHS_ENDP_MULTI_PROC = 100;
static const int INTERRUPTS_JPEG = 101;
static const int INTERRUPTS_PPA = 102;
static const int INTERRUPTS_CORE0_TRACE = 103;
static const int INTERRUPTS_CORE1_TRACE = 104;
static const int INTERRUPTS_DMA2D_IN_CH0 = 105;
static const int INTERRUPTS_DMA2D_IN_CH1 = 106;
static const int INTERRUPTS_DMA2D_IN_CH2 = 107;
static const int INTERRUPTS_DMA2D_OUT_CH0 = 108;
static const int INTERRUPTS_DMA2D_OUT_CH1 = 109;
static const int INTERRUPTS_DMA2D_OUT_CH2 = 110;
static const int INTERRUPTS_DMA2D_OUT_CH3 = 111;
static const int INTERRUPTS_MSPI_PSRAM = 112;
static const int INTERRUPTS_HP_SYSREG = 113;
static const int INTERRUPTS_PCNT0 = 114;
static const int INTERRUPTS_PCNT1 = 115;
static const int INTERRUPTS_HP_PAU = 116;
static const int INTERRUPTS_HP_PARLIO_RX = 117;
static const int INTERRUPTS_HP_PARLIO_TX = 118;
static const int INTERRUPTS_ASSIST_DEBUG = 119;
static const int INTERRUPTS_MODEM_WIFI_MAC = 120;
static const int INTERRUPTS_MODEM_WIFI_MAC_NMI = 121;
static const int INTERRUPTS_MODEM_WIFI_PWR = 122;
static const int INTERRUPTS_MODEM_WIFI_BB = 123;
static const int INTERRUPTS_MODEM_BT_MAC = 124;
static const int INTERRUPTS_MODEM_BT_BB = 125;
static const int INTERRUPTS_MODEM_BT_BB_NMI = 126;
static const int INTERRUPTS_MODEM_LP_TIMER = 127;
static const int INTERRUPTS_MODEM_COEX = 128;
static const int INTERRUPTS_MODEM_BLE_TIMER = 129;
static const int INTERRUPTS_MODEM_BLE_SEC = 130;
static const int INTERRUPTS_MODEM_I2C_MST = 131;
static const int INTERRUPTS_MODEM_ZB_MAC = 132;
static const int INTERRUPTS_MODEM_BT_MAC_INT1 = 133;
static const int INTERRUPTS_CORDIC = 134;
static const int INTERRUPTS_ZERO_DET = 135;
static const int INTERRUPTS_LP_WDT = 136;
static const int INTERRUPTS_LP_TIMER_REG_0 = 137;
static const int INTERRUPTS_LP_TIMER_REG_1 = 138;
static const int INTERRUPTS_MB_HP = 139;
static const int INTERRUPTS_MB_LP = 140;
static const int INTERRUPTS_PMU_REG_0 = 141;
static const int INTERRUPTS_PMU_REG_1 = 142;
static const int INTERRUPTS_LP_ANAPERI = 143;
static const int INTERRUPTS_LP_ADC = 144;
static const int INTERRUPTS_LP_DAC = 145;
static const int INTERRUPTS_LP_GPIO = 146;
static const int INTERRUPTS_LP_I2C = 147;
static const int INTERRUPTS_LP_SPI = 148;
static const int INTERRUPTS_LP_TOUCH = 149;
static const int INTERRUPTS_LP_TSENS = 150;
static const int INTERRUPTS_LP_UART = 151;
static const int INTERRUPTS_LP_EFUSE = 152;
static const int INTERRUPTS_LP_SW = 153;
static const int INTERRUPTS_LP_TRNG = 154;
static const int INTERRUPTS_LP_SYSREG = 155;
static const int INTERRUPTS_LP_APM_M0 = 156;
static const int INTERRUPTS_LP_APM_M1 = 157;
static const int INTERRUPTS_LP_APM_M2 = 158;
static const int INTERRUPTS_LP_APM_M3 = 159;
static const int INTERRUPTS_LP_PERI0_PMS = 160;
static const int INTERRUPTS_LP_PERI1_PMS = 161;
static const int INTERRUPTS_LP_HUK = 162;
static const int INTERRUPTS_LP_PERI_TIMEOUT = 163;
static const int INTERRUPTS_LP_AHB_PDMA_IN_CH0 = 164;
static const int INTERRUPTS_LP_AHB_PDMA_IN_CH1 = 165;
static const int INTERRUPTS_LP_AHB_PDMA_OUT_CH0 = 166;
static const int INTERRUPTS_LP_AHB_PDMA_OUT_CH1 = 167;
static const int INTERRUPTS_LP_SW_INVALID_SLEEP = 168;
// EOF Interrupt table

// Interrupt controller
#define INTERRUPTS_ESP_MATRIX
#define INTERRUPTS_ESP_CLIC
#define INTERRUPTS_ESP_SOURCES 169
#define INTERRUPTS_ESP_CPU_LINE 1
#define INTERRUPTS_ESP_MAP_BASE 0x20585000UL
#define INTERRUPTS_ESP_STATUS_COUNT 6
#define INTERRUPTS_ESP_STATUS_REGS { 0x205852A8UL, 0x205852ACUL, 0x205852B0UL, 0x205852B4UL, 0x205852B8UL, 0x205852BCUL }
#define INTERRUPTS_ESP_DR_REG_CLIC_CTRL_BASE 0x10801000UL
#define INTERRUPTS_ESP_NLBITS 0x00000003UL
#define INTERRUPTS_ESP_CLIC_EXT_INTR_NUM_OFFSET 0x00000010UL
#define INTERRUPTS_ESP_DR_REG_CLIC_BASE 0x10800000UL
// EOF Interrupt controller

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
