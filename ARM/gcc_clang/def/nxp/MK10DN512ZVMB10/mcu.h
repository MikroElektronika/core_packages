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

#ifndef __MK10DN512ZVMB10_H__
#define __MK10DN512ZVMB10_H__



//*****************************************************************************
//
// Interrupt assignments
//
//*****************************************************************************

#define NUMBER_OF_INT_VECTORS                   100               // Number of interrupts in the Vector table
#define NotAvail_IRQn                           -78              // Not available device specific interrupt
#define NonMaskableInterrupt_IRQn               -14              // Non-maskable Interrupt (NMI)
#define HardFault_IRQn                          -13              // Hard Fault
#define MemManageFault_IRQn                     -12              // MemManage Fault
#define BusFault_IRQn                           -11              // Bus Fault
#define UsageFault_IRQn                         -10              // Usage Fault
#define DMA0_IRQn                               0                // DMA channel 0 transfer complete
#define DMA1_IRQn                               1                // DMA channel 1 transfer complete
#define DMA2_IRQn                               2                // DMA channel 2 transfer complete
#define DMA3_IRQn                               3                // DMA channel 3 transfer complete
#define DMA4_IRQn                               4                // DMA channel 4 transfer complete
#define DMA5_IRQn                               5                // DMA channel 5 transfer complete
#define DMA6_IRQn                               6                // DMA channel 6 transfer complete
#define DMA7_IRQn                               7                // DMA channel 7 transfer complete
#define DMA8_IRQn                               8                // DMA channel 8 transfer complete
#define DMA9_IRQn                               9                // DMA channel 9 transfer complete
#define DMA10_IRQn                              10               // DMA channel 10 transfer complete
#define DMA11_IRQn                              11               // DMA channel 11 transfer complete
#define DMA12_IRQn                              12               // DMA channel 12 transfer complete
#define DMA13_IRQn                              13               // DMA channel 13 transfer complete
#define DMA14_IRQn                              14               // DMA channel 14 transfer complete
#define DMA15_IRQn                              15               // DMA channel 15 transfer complete
#define DMA_Error_IRQn                          16               // DMA error interrupt channels 0-15
#define Normal_Interrupt_IRQn                   17               // Normal interrupt
#define Command_Complete_IRQn                   18               // Command complete
#define Read_Collision_IRQn                     19               // Read collision
#define PMC_IRQn                                20               // Low-voltage detect, low-voltage warning
#define LLWU_IRQn                               21               // Low Leakage Wakeup
#define Watchdog_Interrupt_IRQn                 22               // Watchdog interrupt
#define I2C0_IRQn                               24               // -
#define I2C1_IRQn                               25               // -
#define SPI0_IRQn                               26               // Single interrupt vector for all sources
#define SPI1_IRQn                               27               // Single interrupt vector for all sources
#define CAN0_0Red_Message_buffer_IRQn           29               // OR'ed Message buffer (0-15)
#define CAN0_Bus_Off_IRQn                       30               // Bus Off
#define CAN0_Error_IRQn                         31               // Error
#define CAN0_Tx_Warning_IRQn                    32               // Transmit Warning
#define CAN0_Rx_Warning_IRQn                    33               // Receive Warning
#define CAN0_Wake_Up_IRQn                       34               // Wake Up
#define CAN1_0Red_Message_buffer_IRQn           37               // OR'ed Message buffer (0-15)
#define CAN1_Bus_Off_IRQn                       38               // Bus off
#define CAN1_Error_IRQn                         39               // Error
#define CAN1_Tx_Warning_IRQn                    40               // Transmit Warning
#define CAN1_Rx_Warning_IRQn                    41               // Receive Warning
#define CAN1_Wake_Up_IRQn                       42               // Wake Up
#define UART0_RX_TX_IRQn                        45               // Single interrupt vector for UART status sources
#define UART0_ERR_IRQn                          46               // Single interrupt vector for UART error sources
#define UART1_RX_TX_IRQn                        47               // Single interrupt vector for UART status sources
#define UART1_ERR_IRQn                          48               // Single interrupt vector for UART error sources
#define UART2_RX_TX_IRQn                        49               // Single interrupt vector for UART status sources
#define UART2_ERR_IRQn                          50               // Single interrupt vector for UART error sources
#define UART3_RX_TX_IRQn                        51               // Single interrupt vector for UART status sources
#define UART3_ERR_IRQn                          52               // Single interrupt vector for UART error sources
#define ADC0_IRQn                               57               // -
#define ADC1_IRQn                               58               // -
#define CMP0_IRQn                               59               // -
#define CMP1_IRQn                               60               // -
#define CMP2_IRQn                               61               // -
#define FTM0_IRQn                               62               // Single interrupt vector for all sources
#define FTM1_IRQn                               63               // Single interrupt vector for all sources
#define FTM2_IRQn                               64               // Single interrupt vector for all sources
#define CMT_IRQn                                65               // -
#define Alarm_Interrupt_IRQn                    66               // Alarm interrupt
#define PIT0_IRQn                               68               // Channel 0
#define PIT1_IRQn                               69               // Channel 1
#define PIT2_IRQn                               70               // Channel 2
#define PIT3_IRQn                               71               // Channel 3
#define PDB_IRQn                                72               // -
#define I2S0_IRQn                               79               // -
#define SDHC_IRQn                               80               // -
#define DAC0_IRQn                               81               // -
#define Single_Interrupt_Vector_For_All_SourceS_IRQn 83               // Single interrupt vector for all sources
#define MCG_IRQn                                84               // -
#define LPTMR0_IRQn                             85               // -
#define PORTA_IRQn                              87               // Pin detect (Port A)
#define PORTB_IRQn                              88               // Pin detect (Port B)
#define PORTC_IRQn                              89               // Pin detect (Port C)
#define PORTD_IRQn                              90               // Pin detect (Port D)
#define PORTE_IRQn                              91               // Pin detect (Port E)
#define Software_Interrupt_IRQn                 94               // Software interrupt



//*****************************************************************************
//
// Port control and interrupts (PORT) registers
//
//*****************************************************************************

#define PORTA_PCR0                    (*((volatile uint32_t *)0x40049000))      // Pin Control Register n (PORTA_PCR0)
#define PORTA_PCR1                    (*((volatile uint32_t *)0x40049004))      // Pin Control Register n (PORTA_PCR1)
#define PORTA_PCR2                    (*((volatile uint32_t *)0x40049008))      // Pin Control Register n (PORTA_PCR2)
#define PORTA_PCR3                    (*((volatile uint32_t *)0x4004900C))      // Pin Control Register n (PORTA_PCR3)
#define PORTA_PCR4                    (*((volatile uint32_t *)0x40049010))      // Pin Control Register n (PORTA_PCR4)
#define PORTA_PCR5                    (*((volatile uint32_t *)0x40049014))      // Pin Control Register n (PORTA_PCR5)
#define PORTA_PCR6                    (*((volatile uint32_t *)0x40049018))      // Pin Control Register n (PORTA_PCR6)
#define PORTA_PCR7                    (*((volatile uint32_t *)0x4004901C))      // Pin Control Register n (PORTA_PCR7)
#define PORTA_PCR8                    (*((volatile uint32_t *)0x40049020))      // Pin Control Register n (PORTA_PCR8)
#define PORTA_PCR9                    (*((volatile uint32_t *)0x40049024))      // Pin Control Register n (PORTA_PCR9)
#define PORTA_PCR10                   (*((volatile uint32_t *)0x40049028))      // Pin Control Register n (PORTA_PCR10)
#define PORTA_PCR11                   (*((volatile uint32_t *)0x4004902C))      // Pin Control Register n (PORTA_PCR11)
#define PORTA_PCR12                   (*((volatile uint32_t *)0x40049030))      // Pin Control Register n (PORTA_PCR12)
#define PORTA_PCR13                   (*((volatile uint32_t *)0x40049034))      // Pin Control Register n (PORTA_PCR13)
#define PORTA_PCR14                   (*((volatile uint32_t *)0x40049038))      // Pin Control Register n (PORTA_PCR14)
#define PORTA_PCR15                   (*((volatile uint32_t *)0x4004903C))      // Pin Control Register n (PORTA_PCR15)
#define PORTA_PCR16                   (*((volatile uint32_t *)0x40049040))      // Pin Control Register n (PORTA_PCR16)
#define PORTA_PCR17                   (*((volatile uint32_t *)0x40049044))      // Pin Control Register n (PORTA_PCR17)
#define PORTA_PCR18                   (*((volatile uint32_t *)0x40049048))      // Pin Control Register n (PORTA_PCR18)
#define PORTA_PCR19                   (*((volatile uint32_t *)0x4004904C))      // Pin Control Register n (PORTA_PCR19)
#define PORTA_PCR20                   (*((volatile uint32_t *)0x40049050))      // Pin Control Register n (PORTA_PCR20)
#define PORTA_PCR21                   (*((volatile uint32_t *)0x40049054))      // Pin Control Register n (PORTA_PCR21)
#define PORTA_PCR22                   (*((volatile uint32_t *)0x40049058))      // Pin Control Register n (PORTA_PCR22)
#define PORTA_PCR23                   (*((volatile uint32_t *)0x4004905C))      // Pin Control Register n (PORTA_PCR23)
#define PORTA_PCR24                   (*((volatile uint32_t *)0x40049060))      // Pin Control Register n (PORTA_PCR24)
#define PORTA_PCR25                   (*((volatile uint32_t *)0x40049064))      // Pin Control Register n (PORTA_PCR25)
#define PORTA_PCR26                   (*((volatile uint32_t *)0x40049068))      // Pin Control Register n (PORTA_PCR26)
#define PORTA_PCR27                   (*((volatile uint32_t *)0x4004906C))      // Pin Control Register n (PORTA_PCR27)
#define PORTA_PCR28                   (*((volatile uint32_t *)0x40049070))      // Pin Control Register n (PORTA_PCR28)
#define PORTA_PCR29                   (*((volatile uint32_t *)0x40049074))      // Pin Control Register n (PORTA_PCR29)
#define PORTA_PCR30                   (*((volatile uint32_t *)0x40049078))      // Pin Control Register n (PORTA_PCR30)
#define PORTA_PCR31                   (*((volatile uint32_t *)0x4004907C))      // Pin Control Register n (PORTA_PCR31)
#define PORTA_GPCLR                   (*((volatile uint32_t *)0x40049080))      // Global Pin Control Low Register (PORTA_GPCLR)
#define PORTA_GPCHR                   (*((volatile uint32_t *)0x40049084))      // Global Pin Control High Register (PORTA_GPCHR)
#define PORTA_ISFR                    (*((volatile uint32_t *)0x400490A0))      // Interrupt Status Flag Register (PORTA_ISFR)
#define PORTA_DFER                    (*((volatile uint32_t *)0x400490C0))      // Digital Filter Enable Register (PORTA_DFER)
#define PORTA_DFCR                    (*((volatile uint32_t *)0x400490C4))      // Digital Filter Clock Register (PORTA_DFCR)
#define PORTA_DFWR                    (*((volatile uint32_t *)0x400490C8))      // Digital Filter Width Register (PORTA_DFWR)
#define PORTB_PCR0                    (*((volatile uint32_t *)0x4004A000))      // Pin Control Register n (PORTB_PCR0)
#define PORTB_PCR1                    (*((volatile uint32_t *)0x4004A004))      // Pin Control Register n (PORTB_PCR1)
#define PORTB_PCR2                    (*((volatile uint32_t *)0x4004A008))      // Pin Control Register n (PORTB_PCR2)
#define PORTB_PCR3                    (*((volatile uint32_t *)0x4004A00C))      // Pin Control Register n (PORTB_PCR3)
#define PORTB_PCR4                    (*((volatile uint32_t *)0x4004A010))      // Pin Control Register n (PORTB_PCR4)
#define PORTB_PCR5                    (*((volatile uint32_t *)0x4004A014))      // Pin Control Register n (PORTB_PCR5)
#define PORTB_PCR6                    (*((volatile uint32_t *)0x4004A018))      // Pin Control Register n (PORTB_PCR6)
#define PORTB_PCR7                    (*((volatile uint32_t *)0x4004A01C))      // Pin Control Register n (PORTB_PCR7)
#define PORTB_PCR8                    (*((volatile uint32_t *)0x4004A020))      // Pin Control Register n (PORTB_PCR8)
#define PORTB_PCR9                    (*((volatile uint32_t *)0x4004A024))      // Pin Control Register n (PORTB_PCR9)
#define PORTB_PCR10                   (*((volatile uint32_t *)0x4004A028))      // Pin Control Register n (PORTB_PCR10)
#define PORTB_PCR11                   (*((volatile uint32_t *)0x4004A02C))      // Pin Control Register n (PORTB_PCR11)
#define PORTB_PCR12                   (*((volatile uint32_t *)0x4004A030))      // Pin Control Register n (PORTB_PCR12)
#define PORTB_PCR13                   (*((volatile uint32_t *)0x4004A034))      // Pin Control Register n (PORTB_PCR13)
#define PORTB_PCR14                   (*((volatile uint32_t *)0x4004A038))      // Pin Control Register n (PORTB_PCR14)
#define PORTB_PCR15                   (*((volatile uint32_t *)0x4004A03C))      // Pin Control Register n (PORTB_PCR15)
#define PORTB_PCR16                   (*((volatile uint32_t *)0x4004A040))      // Pin Control Register n (PORTB_PCR16)
#define PORTB_PCR17                   (*((volatile uint32_t *)0x4004A044))      // Pin Control Register n (PORTB_PCR17)
#define PORTB_PCR18                   (*((volatile uint32_t *)0x4004A048))      // Pin Control Register n (PORTB_PCR18)
#define PORTB_PCR19                   (*((volatile uint32_t *)0x4004A04C))      // Pin Control Register n (PORTB_PCR19)
#define PORTB_PCR20                   (*((volatile uint32_t *)0x4004A050))      // Pin Control Register n (PORTB_PCR20)
#define PORTB_PCR21                   (*((volatile uint32_t *)0x4004A054))      // Pin Control Register n (PORTB_PCR21)
#define PORTB_PCR22                   (*((volatile uint32_t *)0x4004A058))      // Pin Control Register n (PORTB_PCR22)
#define PORTB_PCR23                   (*((volatile uint32_t *)0x4004A05C))      // Pin Control Register n (PORTB_PCR23)
#define PORTB_PCR24                   (*((volatile uint32_t *)0x4004A060))      // Pin Control Register n (PORTB_PCR24)
#define PORTB_PCR25                   (*((volatile uint32_t *)0x4004A064))      // Pin Control Register n (PORTB_PCR25)
#define PORTB_PCR26                   (*((volatile uint32_t *)0x4004A068))      // Pin Control Register n (PORTB_PCR26)
#define PORTB_PCR27                   (*((volatile uint32_t *)0x4004A06C))      // Pin Control Register n (PORTB_PCR27)
#define PORTB_PCR28                   (*((volatile uint32_t *)0x4004A070))      // Pin Control Register n (PORTB_PCR28)
#define PORTB_PCR29                   (*((volatile uint32_t *)0x4004A074))      // Pin Control Register n (PORTB_PCR29)
#define PORTB_PCR30                   (*((volatile uint32_t *)0x4004A078))      // Pin Control Register n (PORTB_PCR30)
#define PORTB_PCR31                   (*((volatile uint32_t *)0x4004A07C))      // Pin Control Register n (PORTB_PCR31)
#define PORTB_GPCLR                   (*((volatile uint32_t *)0x4004A080))      // Global Pin Control Low Register (PORTB_GPCLR)
#define PORTB_GPCHR                   (*((volatile uint32_t *)0x4004A084))      // Global Pin Control High Register (PORTB_GPCHR)
#define PORTB_ISFR                    (*((volatile uint32_t *)0x4004A0A0))      // Interrupt Status Flag Register (PORTB_ISFR)
#define PORTB_DFER                    (*((volatile uint32_t *)0x4004A0C0))      // Digital Filter Enable Register (PORTB_DFER)
#define PORTB_DFCR                    (*((volatile uint32_t *)0x4004A0C4))      // Digital Filter Clock Register (PORTB_DFCR)
#define PORTB_DFWR                    (*((volatile uint32_t *)0x4004A0C8))      // Digital Filter Width Register (PORTB_DFWR)
#define PORTC_PCR0                    (*((volatile uint32_t *)0x4004B000))      // Pin Control Register n (PORTC_PCR0)
#define PORTC_PCR1                    (*((volatile uint32_t *)0x4004B004))      // Pin Control Register n (PORTC_PCR1)
#define PORTC_PCR2                    (*((volatile uint32_t *)0x4004B008))      // Pin Control Register n (PORTC_PCR2)
#define PORTC_PCR3                    (*((volatile uint32_t *)0x4004B00C))      // Pin Control Register n (PORTC_PCR3)
#define PORTC_PCR4                    (*((volatile uint32_t *)0x4004B010))      // Pin Control Register n (PORTC_PCR4)
#define PORTC_PCR5                    (*((volatile uint32_t *)0x4004B014))      // Pin Control Register n (PORTC_PCR5)
#define PORTC_PCR6                    (*((volatile uint32_t *)0x4004B018))      // Pin Control Register n (PORTC_PCR6)
#define PORTC_PCR7                    (*((volatile uint32_t *)0x4004B01C))      // Pin Control Register n (PORTC_PCR7)
#define PORTC_PCR8                    (*((volatile uint32_t *)0x4004B020))      // Pin Control Register n (PORTC_PCR8)
#define PORTC_PCR9                    (*((volatile uint32_t *)0x4004B024))      // Pin Control Register n (PORTC_PCR9)
#define PORTC_PCR10                   (*((volatile uint32_t *)0x4004B028))      // Pin Control Register n (PORTC_PCR10)
#define PORTC_PCR11                   (*((volatile uint32_t *)0x4004B02C))      // Pin Control Register n (PORTC_PCR11)
#define PORTC_PCR12                   (*((volatile uint32_t *)0x4004B030))      // Pin Control Register n (PORTC_PCR12)
#define PORTC_PCR13                   (*((volatile uint32_t *)0x4004B034))      // Pin Control Register n (PORTC_PCR13)
#define PORTC_PCR14                   (*((volatile uint32_t *)0x4004B038))      // Pin Control Register n (PORTC_PCR14)
#define PORTC_PCR15                   (*((volatile uint32_t *)0x4004B03C))      // Pin Control Register n (PORTC_PCR15)
#define PORTC_PCR16                   (*((volatile uint32_t *)0x4004B040))      // Pin Control Register n (PORTC_PCR16)
#define PORTC_PCR17                   (*((volatile uint32_t *)0x4004B044))      // Pin Control Register n (PORTC_PCR17)
#define PORTC_PCR18                   (*((volatile uint32_t *)0x4004B048))      // Pin Control Register n (PORTC_PCR18)
#define PORTC_PCR19                   (*((volatile uint32_t *)0x4004B04C))      // Pin Control Register n (PORTC_PCR19)
#define PORTC_PCR20                   (*((volatile uint32_t *)0x4004B050))      // Pin Control Register n (PORTC_PCR20)
#define PORTC_PCR21                   (*((volatile uint32_t *)0x4004B054))      // Pin Control Register n (PORTC_PCR21)
#define PORTC_PCR22                   (*((volatile uint32_t *)0x4004B058))      // Pin Control Register n (PORTC_PCR22)
#define PORTC_PCR23                   (*((volatile uint32_t *)0x4004B05C))      // Pin Control Register n (PORTC_PCR23)
#define PORTC_PCR24                   (*((volatile uint32_t *)0x4004B060))      // Pin Control Register n (PORTC_PCR24)
#define PORTC_PCR25                   (*((volatile uint32_t *)0x4004B064))      // Pin Control Register n (PORTC_PCR25)
#define PORTC_PCR26                   (*((volatile uint32_t *)0x4004B068))      // Pin Control Register n (PORTC_PCR26)
#define PORTC_PCR27                   (*((volatile uint32_t *)0x4004B06C))      // Pin Control Register n (PORTC_PCR27)
#define PORTC_PCR28                   (*((volatile uint32_t *)0x4004B070))      // Pin Control Register n (PORTC_PCR28)
#define PORTC_PCR29                   (*((volatile uint32_t *)0x4004B074))      // Pin Control Register n (PORTC_PCR29)
#define PORTC_PCR30                   (*((volatile uint32_t *)0x4004B078))      // Pin Control Register n (PORTC_PCR30)
#define PORTC_PCR31                   (*((volatile uint32_t *)0x4004B07C))      // Pin Control Register n (PORTC_PCR31)
#define PORTC_GPCLR                   (*((volatile uint32_t *)0x4004B080))      // Global Pin Control Low Register (PORTC_GPCLR)
#define PORTC_GPCHR                   (*((volatile uint32_t *)0x4004B084))      // Global Pin Control High Register (PORTC_GPCHR)
#define PORTC_ISFR                    (*((volatile uint32_t *)0x4004B0A0))      // Interrupt Status Flag Register (PORTC_ISFR)
#define PORTC_DFER                    (*((volatile uint32_t *)0x4004B0C0))      // Digital Filter Enable Register (PORTC_DFER)
#define PORTC_DFCR                    (*((volatile uint32_t *)0x4004B0C4))      // Digital Filter Clock Register (PORTC_DFCR)
#define PORTC_DFWR                    (*((volatile uint32_t *)0x4004B0C8))      // Digital Filter Width Register (PORTC_DFWR)
#define PORTD_PCR0                    (*((volatile uint32_t *)0x4004C000))      // Pin Control Register n (PORTD_PCR0)
#define PORTD_PCR1                    (*((volatile uint32_t *)0x4004C004))      // Pin Control Register n (PORTD_PCR1)
#define PORTD_PCR2                    (*((volatile uint32_t *)0x4004C008))      // Pin Control Register n (PORTD_PCR2)
#define PORTD_PCR3                    (*((volatile uint32_t *)0x4004C00C))      // Pin Control Register n (PORTD_PCR3)
#define PORTD_PCR4                    (*((volatile uint32_t *)0x4004C010))      // Pin Control Register n (PORTD_PCR4)
#define PORTD_PCR5                    (*((volatile uint32_t *)0x4004C014))      // Pin Control Register n (PORTD_PCR5)
#define PORTD_PCR6                    (*((volatile uint32_t *)0x4004C018))      // Pin Control Register n (PORTD_PCR6)
#define PORTD_PCR7                    (*((volatile uint32_t *)0x4004C01C))      // Pin Control Register n (PORTD_PCR7)
#define PORTD_PCR8                    (*((volatile uint32_t *)0x4004C020))      // Pin Control Register n (PORTD_PCR8)
#define PORTD_PCR9                    (*((volatile uint32_t *)0x4004C024))      // Pin Control Register n (PORTD_PCR9)
#define PORTD_PCR10                   (*((volatile uint32_t *)0x4004C028))      // Pin Control Register n (PORTD_PCR10)
#define PORTD_PCR11                   (*((volatile uint32_t *)0x4004C02C))      // Pin Control Register n (PORTD_PCR11)
#define PORTD_PCR12                   (*((volatile uint32_t *)0x4004C030))      // Pin Control Register n (PORTD_PCR12)
#define PORTD_PCR13                   (*((volatile uint32_t *)0x4004C034))      // Pin Control Register n (PORTD_PCR13)
#define PORTD_PCR14                   (*((volatile uint32_t *)0x4004C038))      // Pin Control Register n (PORTD_PCR14)
#define PORTD_PCR15                   (*((volatile uint32_t *)0x4004C03C))      // Pin Control Register n (PORTD_PCR15)
#define PORTD_PCR16                   (*((volatile uint32_t *)0x4004C040))      // Pin Control Register n (PORTD_PCR16)
#define PORTD_PCR17                   (*((volatile uint32_t *)0x4004C044))      // Pin Control Register n (PORTD_PCR17)
#define PORTD_PCR18                   (*((volatile uint32_t *)0x4004C048))      // Pin Control Register n (PORTD_PCR18)
#define PORTD_PCR19                   (*((volatile uint32_t *)0x4004C04C))      // Pin Control Register n (PORTD_PCR19)
#define PORTD_PCR20                   (*((volatile uint32_t *)0x4004C050))      // Pin Control Register n (PORTD_PCR20)
#define PORTD_PCR21                   (*((volatile uint32_t *)0x4004C054))      // Pin Control Register n (PORTD_PCR21)
#define PORTD_PCR22                   (*((volatile uint32_t *)0x4004C058))      // Pin Control Register n (PORTD_PCR22)
#define PORTD_PCR23                   (*((volatile uint32_t *)0x4004C05C))      // Pin Control Register n (PORTD_PCR23)
#define PORTD_PCR24                   (*((volatile uint32_t *)0x4004C060))      // Pin Control Register n (PORTD_PCR24)
#define PORTD_PCR25                   (*((volatile uint32_t *)0x4004C064))      // Pin Control Register n (PORTD_PCR25)
#define PORTD_PCR26                   (*((volatile uint32_t *)0x4004C068))      // Pin Control Register n (PORTD_PCR26)
#define PORTD_PCR27                   (*((volatile uint32_t *)0x4004C06C))      // Pin Control Register n (PORTD_PCR27)
#define PORTD_PCR28                   (*((volatile uint32_t *)0x4004C070))      // Pin Control Register n (PORTD_PCR28)
#define PORTD_PCR29                   (*((volatile uint32_t *)0x4004C074))      // Pin Control Register n (PORTD_PCR29)
#define PORTD_PCR30                   (*((volatile uint32_t *)0x4004C078))      // Pin Control Register n (PORTD_PCR30)
#define PORTD_PCR31                   (*((volatile uint32_t *)0x4004C07C))      // Pin Control Register n (PORTD_PCR31)
#define PORTD_GPCLR                   (*((volatile uint32_t *)0x4004C080))      // Global Pin Control Low Register (PORTD_GPCLR)
#define PORTD_GPCHR                   (*((volatile uint32_t *)0x4004C084))      // Global Pin Control High Register (PORTD_GPCHR)
#define PORTD_ISFR                    (*((volatile uint32_t *)0x4004C0A0))      // Interrupt Status Flag Register (PORTD_ISFR)
#define PORTD_DFER                    (*((volatile uint32_t *)0x4004C0C0))      // Digital Filter Enable Register (PORTD_DFER)
#define PORTD_DFCR                    (*((volatile uint32_t *)0x4004C0C4))      // Digital Filter Clock Register (PORTD_DFCR)
#define PORTD_DFWR                    (*((volatile uint32_t *)0x4004C0C8))      // Digital Filter Width Register (PORTD_DFWR)
#define PORTE_PCR0                    (*((volatile uint32_t *)0x4004D000))      // Pin Control Register n (PORTE_PCR0)
#define PORTE_PCR1                    (*((volatile uint32_t *)0x4004D004))      // Pin Control Register n (PORTE_PCR1)
#define PORTE_PCR2                    (*((volatile uint32_t *)0x4004D008))      // Pin Control Register n (PORTE_PCR2)
#define PORTE_PCR3                    (*((volatile uint32_t *)0x4004D00C))      // Pin Control Register n (PORTE_PCR3)
#define PORTE_PCR4                    (*((volatile uint32_t *)0x4004D010))      // Pin Control Register n (PORTE_PCR4)
#define PORTE_PCR5                    (*((volatile uint32_t *)0x4004D014))      // Pin Control Register n (PORTE_PCR5)
#define PORTE_PCR6                    (*((volatile uint32_t *)0x4004D018))      // Pin Control Register n (PORTE_PCR6)
#define PORTE_PCR7                    (*((volatile uint32_t *)0x4004D01C))      // Pin Control Register n (PORTE_PCR7)
#define PORTE_PCR8                    (*((volatile uint32_t *)0x4004D020))      // Pin Control Register n (PORTE_PCR8)
#define PORTE_PCR9                    (*((volatile uint32_t *)0x4004D024))      // Pin Control Register n (PORTE_PCR9)
#define PORTE_PCR10                   (*((volatile uint32_t *)0x4004D028))      // Pin Control Register n (PORTE_PCR10)
#define PORTE_PCR11                   (*((volatile uint32_t *)0x4004D02C))      // Pin Control Register n (PORTE_PCR11)
#define PORTE_PCR12                   (*((volatile uint32_t *)0x4004D030))      // Pin Control Register n (PORTE_PCR12)
#define PORTE_PCR13                   (*((volatile uint32_t *)0x4004D034))      // Pin Control Register n (PORTE_PCR13)
#define PORTE_PCR14                   (*((volatile uint32_t *)0x4004D038))      // Pin Control Register n (PORTE_PCR14)
#define PORTE_PCR15                   (*((volatile uint32_t *)0x4004D03C))      // Pin Control Register n (PORTE_PCR15)
#define PORTE_PCR16                   (*((volatile uint32_t *)0x4004D040))      // Pin Control Register n (PORTE_PCR16)
#define PORTE_PCR17                   (*((volatile uint32_t *)0x4004D044))      // Pin Control Register n (PORTE_PCR17)
#define PORTE_PCR18                   (*((volatile uint32_t *)0x4004D048))      // Pin Control Register n (PORTE_PCR18)
#define PORTE_PCR19                   (*((volatile uint32_t *)0x4004D04C))      // Pin Control Register n (PORTE_PCR19)
#define PORTE_PCR20                   (*((volatile uint32_t *)0x4004D050))      // Pin Control Register n (PORTE_PCR20)
#define PORTE_PCR21                   (*((volatile uint32_t *)0x4004D054))      // Pin Control Register n (PORTE_PCR21)
#define PORTE_PCR22                   (*((volatile uint32_t *)0x4004D058))      // Pin Control Register n (PORTE_PCR22)


//*****************************************************************************
//
// System integration module (SIM) registers
//
//*****************************************************************************

#define SIM_SOPT1                     (*((volatile uint32_t *)0x40047000))      // System Options Register 1
#define SIM_SOPT2                     (*((volatile uint32_t *)0x40048004))      // System Options Register 2
#define SIM_SOPT4                     (*((volatile uint32_t *)0x4004800C))      // System Options Register 4
#define SIM_SOPT5                     (*((volatile uint32_t *)0x40048010))      // System Options Register 5
#define SIM_SOPT6                     (*((volatile uint32_t *)0x40048014))      // System Options Register 6
#define SIM_SOPT7                     (*((volatile uint32_t *)0x40048018))      // System Options Register 7
#define SIM_SDID                      (*((volatile uint32_t *)0x40048024))      // System Device Identification Register
#define SIM_SCGC1                     (*((volatile uint32_t *)0x40048028))      // System Clock Gating Control Register 1
#define SIM_SCGC2                     (*((volatile uint32_t *)0x4004802C))      // System Clock Gating Control Register 2
#define SIM_SCGC3                     (*((volatile uint32_t *)0x40048030))      // System Clock Gating Control Register 3
#define SIM_SCGC4                     (*((volatile uint32_t *)0x40048034))      // System Clock Gating Control Register 4
#define SIM_SCGC5                     (*((volatile uint32_t *)0x40048038))      // System Clock Gating Control Register 5
#define SIM_SCGC6                     (*((volatile uint32_t *)0x4004803C))      // System Clock Gating Control Register 6
#define SIM_SCGC7                     (*((volatile uint32_t *)0x40048040))      // System Clock Gating Control Register 7
#define SIM_CLKDIV1                   (*((volatile uint32_t *)0x40048044))      // System Clock Divider Register 1
#define SIM_CLKDIV2                   (*((volatile uint32_t *)0x40048048))      // System Clock Divider Register 2
#define SIM_FCFG1                     (*((volatile uint32_t *)0x4004804C))      // Flash Configuration Register 1
#define SIM_FCFG2                     (*((volatile uint32_t *)0x40048050))      // Flash Configuration Register 2
#define SIM_UIDH                      (*((volatile uint32_t *)0x40048054))      // Unique Identification Register High
#define SIM_UIDMH                     (*((volatile uint32_t *)0x40048058))      // Unique Identification Register Mid-High
#define SIM_UIDML                     (*((volatile uint32_t *)0x4004805C))      // Unique Identification Register Mid Low
#define SIM_UIDL                      (*((volatile uint32_t *)0x40048060))      // Unique Identification Register Low


//*****************************************************************************
//
// Mode Controller registers
//
//*****************************************************************************

#define MC_SRSH                       (*((volatile uint32_t *)0x4007E000))      // System Reset Status Register High (MC_SRSH)
#define MC_SRSL                       (*((volatile uint32_t *)0x4007E001))      // System Reset Status Register Low (MC_SRSL)
#define MC_PMPROT                     (*((volatile uint32_t *)0x4007E002))      // Power Mode Protection Register (MC_PMPROT)
#define MC_PMCTRL                     (*((volatile uint32_t *)0x4007E003))      // Power Mode Control Register (MC_PMCTRL)


//*****************************************************************************
//
// Power Management Controller registers
//
//*****************************************************************************

#define PMC_LVDSC1                    (*((volatile uint32_t *)0x4007D000))      // Low Voltage Detect Status and Control 1 Register
#define PMC_LVDSC2                    (*((volatile uint32_t *)0x4007D001))      // Low Voltage Detect Status and Control 2 Register
#define PMC_REGSC                     (*((volatile uint32_t *)0x4007D002))      // Regulator Status and Control Register


//*****************************************************************************
//
// Low-leakage wake-up unit (LLWU) registers
//
//*****************************************************************************

#define LLWU_PE1                      (*((volatile uint32_t *)0x4007C000))      // LLWU Pin Enable 1 Register (LLWU_PE1)
#define LLWU_PE2                      (*((volatile uint32_t *)0x4007C001))      // LLWU Pin Enable 2 Register (LLWU_PE2)
#define LLWU_PE3                      (*((volatile uint32_t *)0x4007C002))      // LLWU Pin Enable 3 Register (LLWU_PE3)
#define LLWU_PE4                      (*((volatile uint32_t *)0x4007C003))      // LLWU Pin Enable 4 Register (LLWU_PE4)
#define LLWU_ME                       (*((volatile uint32_t *)0x4007C004))      // LLWU Module Enable Register (LLWU_ME)
#define LLWU_F1                       (*((volatile uint32_t *)0x4007C005))      // LLWU Flag 1 Register (LLWU_F1)
#define LLWU_F2                       (*((volatile uint32_t *)0x4007C006))      // LLWU Flag 2 Register (LLWU_F2)
#define LLWU_F3                       (*((volatile uint32_t *)0x4007C007))      // LLWU Flag 3 Register (LLWU_F3)
#define LLWU_CS                       (*((volatile uint32_t *)0x4007C008))      // LLWU Control and Status Register (LLWU_CS)


//*****************************************************************************
//
// Miscellaneous Control Module (MCM) registers
//
//*****************************************************************************

#define MCM_PLASC                     (*((volatile uint32_t *)0xE0080008))      // Crossbar switch (AXBS) slave configuration
#define MCM_PLAMC                     (*((volatile uint32_t *)0xE008000A))      // Crossbar switch (AXBS) master configuration
#define MCM_SRAMAP                    (*((volatile uint32_t *)0xE008000C))      // SRAM arbitration and protection
#define MCM_ISR                       (*((volatile uint32_t *)0xE0080010))      // Interrupt status register
#define MCM_ETBCC                     (*((volatile uint32_t *)0xE0080014))      // ETB counter control register
#define MCM_ETBRL                     (*((volatile uint32_t *)0xE0080018))      // ETB reload register
#define MCM_ETBCNT                    (*((volatile uint32_t *)0xE008001C))      // ETB counter value register


//*****************************************************************************
//
// Crossbar Switch (AXBS) registers
//
//*****************************************************************************

#define AXBS_PRS0                     (*((volatile uint32_t *)0x40004000))      // Priority Registers Slave
#define AXBS_CRS0                     (*((volatile uint32_t *)0x40004010))      // Control Register
#define AXBS_PRS1                     (*((volatile uint32_t *)0x40004100))      // Priority Registers Slave
#define AXBS_CRS1                     (*((volatile uint32_t *)0x40004110))      // Control Register
#define AXBS_PRS2                     (*((volatile uint32_t *)0x40004200))      // Priority Registers Slave
#define AXBS_CRS2                     (*((volatile uint32_t *)0x40004210))      // Control Register
#define AXBS_PRS3                     (*((volatile uint32_t *)0x40004300))      // Priority Registers Slave
#define AXBS_CRS3                     (*((volatile uint32_t *)0x40004310))      // Control Register
#define AXBS_PRS4                     (*((volatile uint32_t *)0x40004400))      // Priority Registers Slave
#define AXBS_CRS4                     (*((volatile uint32_t *)0x40004410))      // Control Register
#define AXBS_PRS5                     (*((volatile uint32_t *)0x40004500))      // Priority Registers Slave
#define AXBS_CRS5                     (*((volatile uint32_t *)0x40004510))      // Control Register
#define AXBS_PRS6                     (*((volatile uint32_t *)0x40004600))      // Priority Registers Slave
#define AXBS_CRS6                     (*((volatile uint32_t *)0x40004610))      // Control Register
#define AXBS_PRS7                     (*((volatile uint32_t *)0x40004700))      // Priority Registers Slave
#define AXBS_CRS7                     (*((volatile uint32_t *)0x40004710))      // Control Register
#define AXBS_MGPCR0                   (*((volatile uint32_t *)0x40004800))      // Master General Purpose Control Register
#define AXBS_MGPCR1                   (*((volatile uint32_t *)0x40004900))      // Master General Purpose Control Register
#define AXBS_MGPCR2                   (*((volatile uint32_t *)0x40004A00))      // Master General Purpose Control Register
#define AXBS_MGPCR3                   (*((volatile uint32_t *)0x40004B00))      // Master General Purpose Control Register
#define AXBS_MGPCR4                   (*((volatile uint32_t *)0x40004C00))      // Master General Purpose Control Register
#define AXBS_MGPCR5                   (*((volatile uint32_t *)0x40004D00))      // Master General Purpose Control Register
#define AXBS_MGPCR6                   (*((volatile uint32_t *)0x40004E00))      // Master General Purpose Control Register
#define AXBS_MGPCR7                   (*((volatile uint32_t *)0x40004F00))      // Master General Purpose Control Register


//*****************************************************************************
//
// Memory Protection Unit (MPU) registers
//
//*****************************************************************************

#define MPU_CESR                      (*((volatile uint32_t *)0x4000D000))      // Control/Error Status Register (MPU_CESR)
#define MPU_EAR0                      (*((volatile uint32_t *)0x4000D010))      // Error Address Register, Slave Port n (MPU_EAR0)
#define MPU_EDR0                      (*((volatile uint32_t *)0x4000D014))      // Error Detail Register, Slave Port n (MPU_EDR0)
#define MPU_EAR1                      (*((volatile uint32_t *)0x4000D018))      // Error Address Register, Slave Port n (MPU_EAR1)
#define MPU_EDR1                      (*((volatile uint32_t *)0x4000D01C))      // Error Detail Register, Slave Port n (MPU_EDR1)
#define MPU_EAR2                      (*((volatile uint32_t *)0x4000D020))      // Error Address Register, Slave Port n (MPU_EAR2)
#define MPU_EDR2                      (*((volatile uint32_t *)0x4000D024))      // Error Detail Register, Slave Port n (MPU_EDR2)
#define MPU_EAR3                      (*((volatile uint32_t *)0x4000D028))      // Error Address Register, Slave Port n (MPU_EAR3)
#define MPU_EDR3                      (*((volatile uint32_t *)0x4000D02C))      // Error Detail Register, Slave Port n (MPU_EDR3)
#define MPU_EAR4                      (*((volatile uint32_t *)0x4000D030))      // Error Address Register, Slave Port n (MPU_EAR4)
#define MPU_EDR4                      (*((volatile uint32_t *)0x4000D034))      // Error Detail Register, Slave Port n (MPU_EDR4)
#define MPU_RGD0_WORD0                (*((volatile uint32_t *)0x4000D400))      // Region Descriptor n, Word 0 (MPU_RGD0_WORD0)
#define MPU_RGD0_WORD1                (*((volatile uint32_t *)0x4000D404))      // Region Descriptor n, Word 1 (MPU_RGD0_WORD1)
#define MPU_RGD0_WORD2                (*((volatile uint32_t *)0x4000D408))      // Region Descriptor n, Word 2 (MPU_RGD0_WORD2)
#define MPU_RGD0_WORD3                (*((volatile uint32_t *)0x4000D40C))      // Region Descriptor n, Word 3 (MPU_RGD0_WORD3)
#define MPU_RGD1_WORD0                (*((volatile uint32_t *)0x4000D410))      // Region Descriptor n, Word 0 (MPU_RGD1_WORD0)
#define MPU_RGD1_WORD1                (*((volatile uint32_t *)0x4000D414))      // Region Descriptor n, Word 1 (MPU_RGD1_WORD1)
#define MPU_RGD1_WORD2                (*((volatile uint32_t *)0x4000D418))      // Region Descriptor n, Word 2 (MPU_RGD1_WORD2)
#define MPU_RGD1_WORD3                (*((volatile uint32_t *)0x4000D41C))      // Region Descriptor n, Word 3 (MPU_RGD1_WORD3)
#define MPU_RGD2_WORD0                (*((volatile uint32_t *)0x4000D420))      // Region Descriptor n, Word 0 (MPU_RGD2_WORD0)
#define MPU_RGD2_WORD1                (*((volatile uint32_t *)0x4000D424))      // Region Descriptor n, Word 1 (MPU_RGD2_WORD1)
#define MPU_RGD2_WORD2                (*((volatile uint32_t *)0x4000D428))      // Region Descriptor n, Word 2 (MPU_RGD2_WORD2)
#define MPU_RGD2_WORD3                (*((volatile uint32_t *)0x4000D42C))      // Region Descriptor n, Word 3 (MPU_RGD2_WORD3)
#define MPU_RGD3_WORD0                (*((volatile uint32_t *)0x4000D430))      // Region Descriptor n, Word 0 (MPU_RGD3_WORD0)
#define MPU_RGD3_WORD1                (*((volatile uint32_t *)0x4000D434))      // Region Descriptor n, Word 1 (MPU_RGD3_WORD1)
#define MPU_RGD3_WORD2                (*((volatile uint32_t *)0x4000D438))      // Region Descriptor n, Word 2 (MPU_RGD3_WORD2)
#define MPU_RGD3_WORD3                (*((volatile uint32_t *)0x4000D43C))      // Region Descriptor n, Word 3 (MPU_RGD3_WORD3)
#define MPU_RGD4_WORD0                (*((volatile uint32_t *)0x4000D440))      // Region Descriptor n, Word 0 (MPU_RGD4_WORD0)
#define MPU_RGD4_WORD1                (*((volatile uint32_t *)0x4000D444))      // Region Descriptor n, Word 1 (MPU_RGD4_WORD1)
#define MPU_RGD4_WORD2                (*((volatile uint32_t *)0x4000D448))      // Region Descriptor n, Word 2 (MPU_RGD4_WORD2)
#define MPU_RGD4_WORD3                (*((volatile uint32_t *)0x4000D44C))      // Region Descriptor n, Word 3 (MPU_RGD4_WORD3)
#define MPU_RGD5_WORD0                (*((volatile uint32_t *)0x4000D450))      // Region Descriptor n, Word 0 (MPU_RGD5_WORD0)
#define MPU_RGD5_WORD1                (*((volatile uint32_t *)0x4000D454))      // Region Descriptor n, Word 1 (MPU_RGD5_WORD1)
#define MPU_RGD5_WORD2                (*((volatile uint32_t *)0x4000D458))      // Region Descriptor n, Word 2 (MPU_RGD5_WORD2)
#define MPU_RGD5_WORD3                (*((volatile uint32_t *)0x4000D45C))      // Region Descriptor n, Word 3 (MPU_RGD5_WORD3)
#define MPU_RGD6_WORD0                (*((volatile uint32_t *)0x4000D460))      // Region Descriptor n, Word 0 (MPU_RGD6_WORD0)
#define MPU_RGD6_WORD1                (*((volatile uint32_t *)0x4000D464))      // Region Descriptor n, Word 1 (MPU_RGD6_WORD1)
#define MPU_RGD6_WORD2                (*((volatile uint32_t *)0x4000D468))      // Region Descriptor n, Word 2 (MPU_RGD6_WORD2)
#define MPU_RGD6_WORD3                (*((volatile uint32_t *)0x4000D46C))      // Region Descriptor n, Word 3 (MPU_RGD6_WORD3)
#define MPU_RGD7_WORD0                (*((volatile uint32_t *)0x4000D470))      // Region Descriptor n, Word 0 (MPU_RGD7_WORD0)
#define MPU_RGD7_WORD1                (*((volatile uint32_t *)0x4000D474))      // Region Descriptor n, Word 1 (MPU_RGD7_WORD1)
#define MPU_RGD7_WORD2                (*((volatile uint32_t *)0x4000D478))      // Region Descriptor n, Word 2 (MPU_RGD7_WORD2)
#define MPU_RGD7_WORD3                (*((volatile uint32_t *)0x4000D47C))      // Region Descriptor n, Word 3 (MPU_RGD7_WORD3)
#define MPU_RGD8_WORD0                (*((volatile uint32_t *)0x4000D480))      // Region Descriptor n, Word 0 (MPU_RGD8_WORD0)
#define MPU_RGD8_WORD1                (*((volatile uint32_t *)0x4000D484))      // Region Descriptor n, Word 1 (MPU_RGD8_WORD1)
#define MPU_RGD8_WORD2                (*((volatile uint32_t *)0x4000D488))      // Region Descriptor n, Word 2 (MPU_RGD8_WORD2)
#define MPU_RGD8_WORD3                (*((volatile uint32_t *)0x4000D48C))      // Region Descriptor n, Word 3 (MPU_RGD8_WORD3)
#define MPU_RGD9_WORD0                (*((volatile uint32_t *)0x4000D490))      // Region Descriptor n, Word 0 (MPU_RGD9_WORD0)
#define MPU_RGD9_WORD1                (*((volatile uint32_t *)0x4000D494))      // Region Descriptor n, Word 1 (MPU_RGD9_WORD1)
#define MPU_RGD9_WORD2                (*((volatile uint32_t *)0x4000D498))      // Region Descriptor n, Word 2 (MPU_RGD9_WORD2)
#define MPU_RGD9_WORD3                (*((volatile uint32_t *)0x4000D49C))      // Region Descriptor n, Word 3 (MPU_RGD9_WORD3)
#define MPU_RGD10_WORD0               (*((volatile uint32_t *)0x4000D4A0))      // Region Descriptor n, Word 0 (MPU_RGD10_WORD0)
#define MPU_RGD10_WORD1               (*((volatile uint32_t *)0x4000D4A4))      // Region Descriptor n, Word 1 (MPU_RGD10_WORD1)
#define MPU_RGD10_WORD2               (*((volatile uint32_t *)0x4000D4A8))      // Region Descriptor n, Word 2 (MPU_RGD10_WORD2)
#define MPU_RGD10_WORD3               (*((volatile uint32_t *)0x4000D4AC))      // Region Descriptor n, Word 3 (MPU_RGD10_WORD3)
#define MPU_RGD11_WORD0               (*((volatile uint32_t *)0x4000D4B0))      // Region Descriptor n, Word 0 (MPU_RGD11_WORD0)
#define MPU_RGD11_WORD1               (*((volatile uint32_t *)0x4000D4B4))      // Region Descriptor n, Word 1 (MPU_RGD11_WORD1)
#define MPU_RGD11_WORD2               (*((volatile uint32_t *)0x4000D4B8))      // Region Descriptor n, Word 2 (MPU_RGD11_WORD2)
#define MPU_RGD11_WORD3               (*((volatile uint32_t *)0x4000D4BC))      // Region Descriptor n, Word 3 (MPU_RGD11_WORD3)
#define MPU_RGDAAC0                   (*((volatile uint32_t *)0x4000D800))      // Region Descriptor Alternate Access Control n (MPU_RGDAAC0)
#define MPU_RGDAAC1                   (*((volatile uint32_t *)0x4000D804))      // Region Descriptor Alternate Access Control n (MPU_RGDAAC1)
#define MPU_RGDAAC2                   (*((volatile uint32_t *)0x4000D808))      // Region Descriptor Alternate Access Control n (MPU_RGDAAC2)
#define MPU_RGDAAC3                   (*((volatile uint32_t *)0x4000D80C))      // Region Descriptor Alternate Access Control n (MPU_RGDAAC3)
#define MPU_RGDAAC4                   (*((volatile uint32_t *)0x4000D810))      // Region Descriptor Alternate Access Control n (MPU_RGDAAC4)
#define MPU_RGDAAC5                   (*((volatile uint32_t *)0x4000D814))      // Region Descriptor Alternate Access Control n (MPU_RGDAAC5)
#define MPU_RGDAAC6                   (*((volatile uint32_t *)0x4000D818))      // Region Descriptor Alternate Access Control n (MPU_RGDAAC6)
#define MPU_RGDAAC7                   (*((volatile uint32_t *)0x4000D81C))      // Region Descriptor Alternate Access Control n (MPU_RGDAAC7)
#define MPU_RGDAAC8                   (*((volatile uint32_t *)0x4000D820))      // Region Descriptor Alternate Access Control n (MPU_RGDAAC8)
#define MPU_RGDAAC9                   (*((volatile uint32_t *)0x4000D824))      // Region Descriptor Alternate Access Control n (MPU_RGDAAC9)
#define MPU_RGDAAC10                  (*((volatile uint32_t *)0x4000D828))      // Region Descriptor Alternate Access Control n (MPU_RGDAAC10)
#define MPU_RGDAAC11                  (*((volatile uint32_t *)0x4000D82C))      // Region Descriptor Alternate Access Control n (MPU_RGDAAC11)


//*****************************************************************************
//
// Peripheral Bridge (AIPS-Lite) registers
//
//*****************************************************************************

#define AIPS0_MPRA                    (*((volatile uint32_t *)0x40000000))      // Master Privilege Register A (AIPS0_MPRA)
#define AIPS0_PACRA                   (*((volatile uint32_t *)0x40000020))      // Peripheral Access Control Register (AIPS0_PACRA)
#define AIPS0_PACRB                   (*((volatile uint32_t *)0x40000024))      // Peripheral Access Control Register (AIPS0_PACRB)
#define AIPS0_PACRC                   (*((volatile uint32_t *)0x40000028))      // Peripheral Access Control Register (AIPS0_PACRC)
#define AIPS0_PACRD                   (*((volatile uint32_t *)0x4000002C))      // Peripheral Access Control Register (AIPS0_PACRD)
#define AIPS0_PACRE                   (*((volatile uint32_t *)0x40000040))      // Peripheral Access Control Register (AIPS0_PACRE)
#define AIPS0_PACRF                   (*((volatile uint32_t *)0x40000044))      // Peripheral Access Control Register (AIPS0_PACRF)
#define AIPS0_PACRG                   (*((volatile uint32_t *)0x40000048))      // Peripheral Access Control Register (AIPS0_PACRG)
#define AIPS0_PACRH                   (*((volatile uint32_t *)0x4000004C))      // Peripheral Access Control Register (AIPS0_PACRH)
#define AIPS0_PACRI                   (*((volatile uint32_t *)0x40000050))      // Peripheral Access Control Register (AIPS0_PACRI)
#define AIPS0_PACRJ                   (*((volatile uint32_t *)0x40000054))      // Peripheral Access Control Register (AIPS0_PACRJ)
#define AIPS0_PACRK                   (*((volatile uint32_t *)0x40000058))      // Peripheral Access Control Register (AIPS0_PACRK)
#define AIPS0_PACRL                   (*((volatile uint32_t *)0x4000005C))      // Peripheral Access Control Register (AIPS0_PACRL)
#define AIPS0_PACRM                   (*((volatile uint32_t *)0x40000060))      // Peripheral Access Control Register (AIPS0_PACRM)
#define AIPS0_PACRN                   (*((volatile uint32_t *)0x40000064))      // Peripheral Access Control Register (AIPS0_PACRN)
#define AIPS0_PACRO                   (*((volatile uint32_t *)0x40000068))      // Peripheral Access Control Register (AIPS0_PACRO)
#define AIPS0_PACRP                   (*((volatile uint32_t *)0x4000006C))      // Peripheral Access Control Register (AIPS0_PACRP)
#define AIPS1_MPRA                    (*((volatile uint32_t *)0x40080000))      // Master Privilege Register A (AIPS1_MPRA)
#define AIPS1_PACRA                   (*((volatile uint32_t *)0x40080020))      // Peripheral Access Control Register (AIPS1_PACRA)
#define AIPS1_PACRB                   (*((volatile uint32_t *)0x40080024))      // Peripheral Access Control Register (AIPS1_PACRB)
#define AIPS1_PACRC                   (*((volatile uint32_t *)0x40080028))      // Peripheral Access Control Register (AIPS1_PACRC)
#define AIPS1_PACRD                   (*((volatile uint32_t *)0x4008002C))      // Peripheral Access Control Register (AIPS1_PACRD)
#define AIPS1_PACRE                   (*((volatile uint32_t *)0x40080040))      // Peripheral Access Control Register (AIPS1_PACRE)
#define AIPS1_PACRF                   (*((volatile uint32_t *)0x40080044))      // Peripheral Access Control Register (AIPS1_PACRF)
#define AIPS1_PACRG                   (*((volatile uint32_t *)0x40080048))      // Peripheral Access Control Register (AIPS1_PACRG)
#define AIPS1_PACRH                   (*((volatile uint32_t *)0x4008004C))      // Peripheral Access Control Register (AIPS1_PACRH)
#define AIPS1_PACRI                   (*((volatile uint32_t *)0x40080050))      // Peripheral Access Control Register (AIPS1_PACRI)
#define AIPS1_PACRJ                   (*((volatile uint32_t *)0x40080054))      // Peripheral Access Control Register (AIPS1_PACRJ)
#define AIPS1_PACRK                   (*((volatile uint32_t *)0x40080058))      // Peripheral Access Control Register (AIPS1_PACRK)
#define AIPS1_PACRL                   (*((volatile uint32_t *)0x4008005C))      // Peripheral Access Control Register (AIPS1_PACRL)
#define AIPS1_PACRM                   (*((volatile uint32_t *)0x40080060))      // Peripheral Access Control Register (AIPS1_PACRM)
#define AIPS1_PACRN                   (*((volatile uint32_t *)0x40080064))      // Peripheral Access Control Register (AIPS1_PACRN)
#define AIPS1_PACRO                   (*((volatile uint32_t *)0x40080068))      // Peripheral Access Control Register (AIPS1_PACRO)
#define AIPS1_PACRP                   (*((volatile uint32_t *)0x4008006C))      // Peripheral Access Control Register (AIPS1_PACRP)


//*****************************************************************************
//
// Direct memory access multiplexer (DMAMUX) registers
//
//*****************************************************************************

#define DMAMUX_CHCFG0                 (*((volatile uint32_t *)0x40021000))      // Channel Configuration Register
#define DMAMUX_CHCFG1                 (*((volatile uint32_t *)0x40021001))      // Channel Configuration Register
#define DMAMUX_CHCFG2                 (*((volatile uint32_t *)0x40021002))      // Channel Configuration Register
#define DMAMUX_CHCFG3                 (*((volatile uint32_t *)0x40021003))      // Channel Configuration Register
#define DMAMUX_CHCFG4                 (*((volatile uint32_t *)0x40021004))      // Channel Configuration Register
#define DMAMUX_CHCFG5                 (*((volatile uint32_t *)0x40021005))      // Channel Configuration Register
#define DMAMUX_CHCFG6                 (*((volatile uint32_t *)0x40021006))      // Channel Configuration Register
#define DMAMUX_CHCFG7                 (*((volatile uint32_t *)0x40021007))      // Channel Configuration Register
#define DMAMUX_CHCFG8                 (*((volatile uint32_t *)0x40021008))      // Channel Configuration Register
#define DMAMUX_CHCFG9                 (*((volatile uint32_t *)0x40021009))      // Channel Configuration Register
#define DMAMUX_CHCFG10                (*((volatile uint32_t *)0x4002100A))      // Channel Configuration Register
#define DMAMUX_CHCFG11                (*((volatile uint32_t *)0x4002100B))      // Channel Configuration Register
#define DMAMUX_CHCFG12                (*((volatile uint32_t *)0x4002100C))      // Channel Configuration Register
#define DMAMUX_CHCFG13                (*((volatile uint32_t *)0x4002100D))      // Channel Configuration Register
#define DMAMUX_CHCFG14                (*((volatile uint32_t *)0x4002100E))      // Channel Configuration Register
#define DMAMUX_CHCFG15                (*((volatile uint32_t *)0x4002100F))      // Channel Configuration Register


//*****************************************************************************
//
// Direct Memory Access Controller (eDMA) registers
//
//*****************************************************************************

#define DMA_CR                        (*((volatile uint32_t *)0x40008000))      // Control Register
#define DMA_ES                        (*((volatile uint32_t *)0x40008004))      // Error Status Register
#define DMA_ERQ                       (*((volatile uint32_t *)0x4000800C))      // Enable Request Register
#define DMA_EEI                       (*((volatile uint32_t *)0x40008014))      // Enable Error Interrupt Register
#define DMA_CEEI                      (*((volatile uint32_t *)0x40008018))      // Clear Enable Error Interrupt Register
#define DMA_SEEI                      (*((volatile uint32_t *)0x40008019))      // Set Enable Error Interrupt Register
#define DMA_CERQ                      (*((volatile uint32_t *)0x4000801A))      // Clear Enable Request Register
#define DMA_SERQ                      (*((volatile uint32_t *)0x4000801B))      // Set Enable Request Register
#define DMA_CDNE                      (*((volatile uint32_t *)0x4000801C))      // Clear DONE Status Bit Register
#define DMA_SSRT                      (*((volatile uint32_t *)0x4000801D))      // Set START Bit Register


//*****************************************************************************
//
// External Watchdog Monitor (EWM) registers
//
//*****************************************************************************

#define EWM_CTRL                      (*((volatile uint32_t *)0x40061000))      // Control Register (EWM_CTRL)
#define EWM_SERV                      (*((volatile uint32_t *)0x40061001))      // Service Register (EWM_SERV)
#define EWM_CMPL                      (*((volatile uint32_t *)0x40061002))      // Compare Low Register (EWM_CMPL)
#define EWM_CMPH                      (*((volatile uint32_t *)0x40061003))      // Compare High Register (EWM_CMPH)


//*****************************************************************************
//
// Watchdog Timer (WDOG) registers
//
//*****************************************************************************

#define WDOG_STCTRLH                  (*((volatile uint32_t *)0x40052000))      // Watchdog Status and Control Register High
#define WDOG_STCTRLL                  (*((volatile uint32_t *)0x40052002))      // Watchdog Status and Control Register Low
#define WDOG_TOVALH                   (*((volatile uint32_t *)0x40052004))      // Watchdog Time-out Value Register High
#define WDOG_TOVALL                   (*((volatile uint32_t *)0x40052006))      // Watchdog Time-out Value Register Low
#define WDOG_WINH                     (*((volatile uint32_t *)0x40052008))      // Watchdog Window Register High
#define WDOG_WINL                     (*((volatile uint32_t *)0x4005200A))      // Watchdog Window Register Low
#define WDOG_REFRESH                  (*((volatile uint32_t *)0x4005200C))      // Watchdog Refresh Register
#define WDOG_UNLOCK                   (*((volatile uint32_t *)0x4005200E))      // Watchdog Unlock Register
#define WDOG_TMROUTH                  (*((volatile uint32_t *)0x40052010))      // Watchdog Timer Output Register High
#define WDOG_TMROUTL                  (*((volatile uint32_t *)0x40052012))      // Watchdog Timer Output Register Low
#define WDOG_RSTCNT                   (*((volatile uint32_t *)0x40052014))      // Watchdog Reset Count Register
#define WDOG_PRESC                    (*((volatile uint32_t *)0x40052016))      // Watchdog Prescaler Register


//*****************************************************************************
//
// Multipurpose Clock Generator (MCG) registers
//
//*****************************************************************************

#define MCG_C1                        (*((volatile uint32_t *)0x40064000))      // MCG Control 1 Register
#define MCG_C2                        (*((volatile uint32_t *)0x40064001))      // MCG Control 2 Register
#define MCG_C3                        (*((volatile uint32_t *)0x40064002))      // MCG Control 3 Register
#define MCG_C4                        (*((volatile uint32_t *)0x40064003))      // MCG Control 4 Register
#define MCG_C5                        (*((volatile uint32_t *)0x40064004))      // MCG Control 5 Register
#define MCG_C6                        (*((volatile uint32_t *)0x40064005))      // MCG Control 6 Register
#define MCG_S                         (*((volatile uint32_t *)0x40064006))      // MCG Status Register
#define MCG_ATC                       (*((volatile uint32_t *)0x40064008))      // MCG Auto Trim Control Register
#define MCG_ATCVH                     (*((volatile uint32_t *)0x4006400A))      // MCG Auto Trim Compare Value High Register
#define MCG_ATCVL                     (*((volatile uint32_t *)0x4006400B))      // MCG Auto Trim Compare Value Low Register


//*****************************************************************************
//
// Oscillator (OSC) registers
//
//*****************************************************************************

#define OSC_CR                        (*((volatile uint32_t *)0x40065000))      // OSC Control Register


//*****************************************************************************
//
// Flash Memory Controller (FMC) registers
//
//*****************************************************************************

#define FMC_PFAPR                     (*((volatile uint32_t *)0x4001F000))      // Flash Access Protection Register
#define FMC_PFB0CR                    (*((volatile uint32_t *)0x4001F004))      // Flash Bank 0 Control Register
#define FMC_PFB1CR                    (*((volatile uint32_t *)0x4001F008))      // Flash Bank 1 Control Register
#define FMC_TAGVDW0S0                 (*((volatile uint32_t *)0x4001F100))      // Cache Tag Storage
#define FMC_TAGVDW0S1                 (*((volatile uint32_t *)0x4001F104))      // Cache Tag Storage
#define FMC_TAGVDW0S2                 (*((volatile uint32_t *)0x4001F108))      // Cache Tag Storage
#define FMC_TAGVDW0S3                 (*((volatile uint32_t *)0x4001F10C))      // Cache Tag Storage
#define FMC_TAGVDW0S4                 (*((volatile uint32_t *)0x4001F110))      // Cache Tag Storage
#define FMC_TAGVDW0S5                 (*((volatile uint32_t *)0x4001F114))      // Cache Tag Storage
#define FMC_TAGVDW0S6                 (*((volatile uint32_t *)0x4001F118))      // Cache Tag Storage
#define FMC_TAGVDW0S7                 (*((volatile uint32_t *)0x4001F11C))      // Cache Tag Storage
#define FMC_TAGVDW1S0                 (*((volatile uint32_t *)0x4001F120))      // Cache Tag Storage
#define FMC_TAGVDW1S1                 (*((volatile uint32_t *)0x4001F124))      // Cache Tag Storage
#define FMC_TAGVDW1S2                 (*((volatile uint32_t *)0x4001F128))      // Cache Tag Storage
#define FMC_TAGVDW1S3                 (*((volatile uint32_t *)0x4001F12C))      // Cache Tag Storage
#define FMC_TAGVDW1S4                 (*((volatile uint32_t *)0x4001F130))      // Cache Tag Storage
#define FMC_TAGVDW1S5                 (*((volatile uint32_t *)0x4001F134))      // Cache Tag Storage
#define FMC_TAGVDW1S6                 (*((volatile uint32_t *)0x4001F138))      // Cache Tag Storage
#define FMC_TAGVDW1S7                 (*((volatile uint32_t *)0x4001F13C))      // Cache Tag Storage
#define FMC_TAGVDW2S0                 (*((volatile uint32_t *)0x4001F140))      // Cache Tag Storage


//*****************************************************************************
//
// Flash Memory Module (FTFL) registers
//
//*****************************************************************************

#define FTFL_FSTAT                    (*((volatile uint32_t *)0x40020000))      // Flash Status Register
#define FTFL_FCNFG                    (*((volatile uint32_t *)0x40020001))      // Flash Configuration Register
#define FTFL_FSEC                     (*((volatile uint32_t *)0x40020002))      // Flash Security Register
#define FTFL_FOPT                     (*((volatile uint32_t *)0x40020003))      // Flash Option Register


//*****************************************************************************
//
// External Bus Interface (FlexBus) registers
//
//*****************************************************************************

#define FB_CSAR0                      (*((volatile uint32_t *)0x4000C000))      // Chip select address register (FB_CSAR0)
#define FB_CSMR0                      (*((volatile uint32_t *)0x4000C004))      // Chip select mask register (FB_CSMR0)
#define FB_CSCR0                      (*((volatile uint32_t *)0x4000C008))      // Chip select control register (FB_CSCR0)
#define FB_CSAR1                      (*((volatile uint32_t *)0x4000C00C))      // Chip select address register (FB_CSAR1)
#define FB_CSMR1                      (*((volatile uint32_t *)0x4000C010))      // Chip select mask register (FB_CSMR1)
#define FB_CSCR1                      (*((volatile uint32_t *)0x4000C014))      // Chip select control register (FB_CSCR1)
#define FB_CSAR2                      (*((volatile uint32_t *)0x4000C018))      // Chip select address register (FB_CSAR2)
#define FB_CSMR2                      (*((volatile uint32_t *)0x4000C01C))      // Chip select mask register (FB_CSMR2)
#define FB_CSCR2                      (*((volatile uint32_t *)0x4000C020))      // Chip select control register (FB_CSCR2)
#define FB_CSAR3                      (*((volatile uint32_t *)0x4000C024))      // Chip select address register (FB_CSAR3)
#define FB_CSMR3                      (*((volatile uint32_t *)0x4000C028))      // Chip select mask register (FB_CSMR3)
#define FB_CSCR3                      (*((volatile uint32_t *)0x4000C02C))      // Chip select control register (FB_CSCR3)
#define FB_CSAR4                      (*((volatile uint32_t *)0x4000C030))      // Chip select address register (FB_CSAR4)
#define FB_CSMR4                      (*((volatile uint32_t *)0x4000C034))      // Chip select mask register (FB_CSMR4)
#define FB_CSCR4                      (*((volatile uint32_t *)0x4000C038))      // Chip select control register (FB_CSCR4)
#define FB_CSAR5                      (*((volatile uint32_t *)0x4000C03C))      // Chip select address register (FB_CSAR5)


//*****************************************************************************
//
// Cyclic redundancy check (CRC) registers
//
//*****************************************************************************

#define CRC_CRC                       (*((volatile uint32_t *)0x40032000))      // CRC Data Register
#define CRC_GPOLY                     (*((volatile uint32_t *)0x40032004))      // CRC Polynomial Register
#define CRC_CTRL                      (*((volatile uint32_t *)0x40032008))      // CRC Control Register


//*****************************************************************************
//
// Analog-to-Digital Converter (ADC) registers
//
//*****************************************************************************

#define ADC0_SC1A                     (*((volatile uint32_t *)0x4003B000))      // ADC status and control registers 1 (ADC0_SC1A)
#define ADC0_SC1B                     (*((volatile uint32_t *)0x4003B004))      // ADC status and control registers 1 (ADC0_SC1B)
#define ADC0_CFG1                     (*((volatile uint32_t *)0x4003B008))      // ADC configuration register 1 (ADC0_CFG1)
#define ADC0_CFG2                     (*((volatile uint32_t *)0x4003B00C))      // Configuration register 2 (ADC0_CFG2)
#define ADC0_RA                       (*((volatile uint32_t *)0x4003B010))      // ADC data result register (ADC0_RA)
#define ADC0_RB                       (*((volatile uint32_t *)0x4003B014))      // ADC data result register (ADC0_RB)
#define ADC0_CV1                      (*((volatile uint32_t *)0x4003B018))      // Compare value registers (ADC0_CV1)
#define ADC0_CV2                      (*((volatile uint32_t *)0x4003B01C))      // Compare value registers (ADC0_CV2)
#define ADC0_SC2                      (*((volatile uint32_t *)0x4003B020))      // Status and control register 2 (ADC0_SC2)
#define ADC0_SC3                      (*((volatile uint32_t *)0x4003B024))      // Status and control register 3 (ADC0_SC3)
#define ADC0_OFS                      (*((volatile uint32_t *)0x4003B028))      // ADC offset correction register (ADC0_OFS)
#define ADC0_PG                       (*((volatile uint32_t *)0x4003B02C))      // ADC plus-side gain register (ADC0_PG)
#define ADC0_MG                       (*((volatile uint32_t *)0x4003B030))      // ADC minus-side gain register (ADC0_MG)
#define ADC0_CLPD                     (*((volatile uint32_t *)0x4003B034))      // ADC plus-side general calibration value register (ADC0_CLPD)
#define ADC0_CLPS                     (*((volatile uint32_t *)0x4003B038))      // ADC plus-side general calibration value register (ADC0_CLPS)
#define ADC0_CLP4                     (*((volatile uint32_t *)0x4003B03C))      // ADC plus-side general calibration value register (ADC0_CLP4)
#define ADC0_CLP3                     (*((volatile uint32_t *)0x4003B040))      // ADC plus-side general calibration value register (ADC0_CLP3)
#define ADC0_CLP2                     (*((volatile uint32_t *)0x4003B044))      // ADC plus-side general calibration value register (ADC0_CLP2)
#define ADC0_CLP1                     (*((volatile uint32_t *)0x4003B048))      // ADC plus-side general calibration value register (ADC0_CLP1)
#define ADC0_CLP0                     (*((volatile uint32_t *)0x4003B04C))      // ADC plus-side general calibration value register (ADC0_CLP0)
#define ADC0_PGA                      (*((volatile uint32_t *)0x4003B050))      // ADC PGA register (ADC0_PGA)
#define ADC0_CLMD                     (*((volatile uint32_t *)0x4003B054))      // ADC minus-side general calibration value register (ADC0_CLMD)
#define ADC0_CLMS                     (*((volatile uint32_t *)0x4003B058))      // ADC minus-side general calibration value register (ADC0_CLMS)
#define ADC0_CLM4                     (*((volatile uint32_t *)0x4003B05C))      // ADC minus-side general calibration value register (ADC0_CLM4)
#define ADC0_CLM3                     (*((volatile uint32_t *)0x4003B060))      // ADC minus-side general calibration value register (ADC0_CLM3)
#define ADC0_CLM2                     (*((volatile uint32_t *)0x4003B064))      // ADC minus-side general calibration value register (ADC0_CLM2)
#define ADC0_CLM1                     (*((volatile uint32_t *)0x4003B068))      // ADC minus-side general calibration value register (ADC0_CLM1)
#define ADC0_CLM0                     (*((volatile uint32_t *)0x4003B06C))      // ADC minus-side general calibration value register (ADC0_CLM0)
#define ADC1_SC1A                     (*((volatile uint32_t *)0x400BB000))      // ADC status and control registers 1 (ADC1_SC1A)
#define ADC1_SC1B                     (*((volatile uint32_t *)0x400BB004))      // ADC status and control registers 1 (ADC1_SC1B)
#define ADC1_CFG1                     (*((volatile uint32_t *)0x400BB008))      // ADC configuration register 1 (ADC1_CFG1)
#define ADC1_CFG2                     (*((volatile uint32_t *)0x400BB00C))      // Configuration register 2 (ADC1_CFG2)
#define ADC1_RA                       (*((volatile uint32_t *)0x400BB010))      // ADC data result register (ADC1_RA)
#define ADC1_RB                       (*((volatile uint32_t *)0x400BB014))      // ADC data result register (ADC1_RB)
#define ADC1_CV1                      (*((volatile uint32_t *)0x400BB018))      // Compare value registers (ADC1_CV1)
#define ADC1_CV2                      (*((volatile uint32_t *)0x400BB01C))      // Compare value registers (ADC1_CV2)
#define ADC1_SC2                      (*((volatile uint32_t *)0x400BB020))      // Status and control register 2 (ADC1_SC2)
#define ADC1_SC3                      (*((volatile uint32_t *)0x400BB024))      // Status and control register 3 (ADC1_SC3)
#define ADC1_OFS                      (*((volatile uint32_t *)0x400BB028))      // ADC offset correction register (ADC1_OFS)
#define ADC1_PG                       (*((volatile uint32_t *)0x400BB02C))      // ADC plus-side gain register (ADC1_PG)
#define ADC1_MG                       (*((volatile uint32_t *)0x400BB030))      // ADC minus-side gain register (ADC1_MG)
#define ADC1_CLPD                     (*((volatile uint32_t *)0x400BB034))      // ADC plus-side general calibration value register (ADC1_CLPD)
#define ADC1_CLPS                     (*((volatile uint32_t *)0x400BB038))      // ADC plus-side general calibration value register (ADC1_CLPS)
#define ADC1_CLP4                     (*((volatile uint32_t *)0x400BB03C))      // ADC plus-side general calibration value register (ADC1_CLP4)
#define ADC1_CLP3                     (*((volatile uint32_t *)0x400BB040))      // ADC plus-side general calibration value register (ADC1_CLP3)
#define ADC1_CLP2                     (*((volatile uint32_t *)0x400BB044))      // ADC plus-side general calibration value register (ADC1_CLP2)
#define ADC1_CLP1                     (*((volatile uint32_t *)0x400BB048))      // ADC plus-side general calibration value register (ADC1_CLP1)
#define ADC1_CLP0                     (*((volatile uint32_t *)0x400BB04C))      // ADC plus-side general calibration value register (ADC1_CLP0)
#define ADC1_PGA                      (*((volatile uint32_t *)0x400BB050))      // ADC PGA register (ADC1_PGA)
#define ADC1_CLMD                     (*((volatile uint32_t *)0x400BB054))      // ADC minus-side general calibration value register (ADC1_CLMD)
#define ADC1_CLMS                     (*((volatile uint32_t *)0x400BB058))      // ADC minus-side general calibration value register (ADC1_CLMS)
#define ADC1_CLM4                     (*((volatile uint32_t *)0x400BB05C))      // ADC minus-side general calibration value register (ADC1_CLM4)
#define ADC1_CLM3                     (*((volatile uint32_t *)0x400BB060))      // ADC minus-side general calibration value register (ADC1_CLM3)
#define ADC1_CLM2                     (*((volatile uint32_t *)0x400BB064))      // ADC minus-side general calibration value register (ADC1_CLM2)
#define ADC1_CLM1                     (*((volatile uint32_t *)0x400BB068))      // ADC minus-side general calibration value register (ADC1_CLM1)
#define ADC1_CLM0                     (*((volatile uint32_t *)0x400BB06C))      // ADC minus-side general calibration value register (ADC1_CLM0)


//*****************************************************************************
//
// Comparator (CMP) registers
//
//*****************************************************************************

#define CMP0_CR0                      (*((volatile uint32_t *)0x40073000))      // CMP Control Register 0 (CMP0_CR0)
#define CMP0_CR1                      (*((volatile uint32_t *)0x40073001))      // CMP Control Register 1 (CMP0_CR1)
#define CMP0_FPR                      (*((volatile uint32_t *)0x40073002))      // CMP Filter Period Register (CMP0_FPR)
#define CMP0_SCR                      (*((volatile uint32_t *)0x40073003))      // CMP Status and Control Register (CMP0_SCR)
#define CMP0_DACCR                    (*((volatile uint32_t *)0x40073004))      // DAC Control Register (CMP0_DACCR)
#define CMP0_MUXCR                    (*((volatile uint32_t *)0x40073005))      // MUX Control Register (CMP0_MUXCR)
#define CMP1_CR0                      (*((volatile uint32_t *)0x40073008))      // CMP Control Register 0 (CMP1_CR0)
#define CMP1_CR1                      (*((volatile uint32_t *)0x40073009))      // CMP Control Register 1 (CMP1_CR1)
#define CMP1_FPR                      (*((volatile uint32_t *)0x4007300A))      // CMP Filter Period Register (CMP1_FPR)
#define CMP1_SCR                      (*((volatile uint32_t *)0x4007300B))      // CMP Status and Control Register (CMP1_SCR)
#define CMP1_DACCR                    (*((volatile uint32_t *)0x4007300C))      // DAC Control Register (CMP1_DACCR)
#define CMP1_MUXCR                    (*((volatile uint32_t *)0x4007300D))      // MUX Control Register (CMP1_MUXCR)
#define CMP2_CR0                      (*((volatile uint32_t *)0x40073010))      // CMP Control Register 0 (CMP2_CR0)
#define CMP2_CR1                      (*((volatile uint32_t *)0x40073011))      // CMP Control Register 1 (CMP2_CR1)
#define CMP2_FPR                      (*((volatile uint32_t *)0x40073012))      // CMP Filter Period Register (CMP2_FPR)
#define CMP2_SCR                      (*((volatile uint32_t *)0x40073013))      // CMP Status and Control Register (CMP2_SCR)
#define CMP2_DACCR                    (*((volatile uint32_t *)0x40073014))      // DAC Control Register (CMP2_DACCR)
#define CMP2_MUXCR                    (*((volatile uint32_t *)0x40073015))      // MUX Control Register (CMP2_MUXCR)


//*****************************************************************************
//
// 12-bit Digital-to-Analog Converter (DAC) registers
//
//*****************************************************************************

#define DAC0_DAT0L                    (*((volatile uint32_t *)0x400CC000))      // DAC Data Low Register
#define DAC0_DAT0H                    (*((volatile uint32_t *)0x400CC001))      // DAC Data High Register
#define DAC0_DAT1L                    (*((volatile uint32_t *)0x400CC002))      // DAC Data Low Register
#define DAC0_DAT1H                    (*((volatile uint32_t *)0x400CC003))      // DAC Data High Register
#define DAC0_DAT2L                    (*((volatile uint32_t *)0x400CC004))      // DAC Data Low Register
#define DAC0_DAT2H                    (*((volatile uint32_t *)0x400CC005))      // DAC Data High Register
#define DAC0_DAT3L                    (*((volatile uint32_t *)0x400CC006))      // DAC Data Low Register
#define DAC0_DAT3H                    (*((volatile uint32_t *)0x400CC007))      // DAC Data High Register
#define DAC0_DAT4L                    (*((volatile uint32_t *)0x400CC008))      // DAC Data Low Register
#define DAC0_DAT4H                    (*((volatile uint32_t *)0x400CC009))      // DAC Data High Register
#define DAC0_DAT5L                    (*((volatile uint32_t *)0x400CC00A))      // DAC Data Low Register
#define DAC0_DAT5H                    (*((volatile uint32_t *)0x400CC00B))      // DAC Data High Register
#define DAC0_DAT6L                    (*((volatile uint32_t *)0x400CC00C))      // DAC Data Low Register
#define DAC0_DAT6H                    (*((volatile uint32_t *)0x400CC00D))      // DAC Data High Register
#define DAC0_DAT7L                    (*((volatile uint32_t *)0x400CC00E))      // DAC Data Low Register
#define DAC0_DAT7H                    (*((volatile uint32_t *)0x400CC00F))      // DAC Data High Register
#define DAC0_DAT8L                    (*((volatile uint32_t *)0x400CC010))      // DAC Data Low Register
#define DAC0_DAT8H                    (*((volatile uint32_t *)0x400CC011))      // DAC Data High Register
#define DAC0_DAT9L                    (*((volatile uint32_t *)0x400CC012))      // DAC Data Low Register
#define DAC0_DAT9H                    (*((volatile uint32_t *)0x400CC013))      // DAC Data High Register
#define DAC0_DAT10L                   (*((volatile uint32_t *)0x400CC014))      // DAC Data Low Register
#define DAC0_DAT10H                   (*((volatile uint32_t *)0x400CC015))      // DAC Data High Register
#define DAC0_DAT11L                   (*((volatile uint32_t *)0x400CC016))      // DAC Data Low Register
#define DAC0_DAT11H                   (*((volatile uint32_t *)0x400CC017))      // DAC Data High Register
#define DAC0_DAT12L                   (*((volatile uint32_t *)0x400CC018))      // DAC Data Low Register
#define DAC0_DAT12H                   (*((volatile uint32_t *)0x400CC019))      // DAC Data High Register
#define DAC0_DAT13L                   (*((volatile uint32_t *)0x400CC01A))      // DAC Data Low Register
#define DAC0_DAT13H                   (*((volatile uint32_t *)0x400CC01B))      // DAC Data High Register
#define DAC0_DAT14L                   (*((volatile uint32_t *)0x400CC01C))      // DAC Data Low Register
#define DAC0_DAT14H                   (*((volatile uint32_t *)0x400CC01D))      // DAC Data High Register
#define DAC0_DAT15L                   (*((volatile uint32_t *)0x400CC01E))      // DAC Data Low Register
#define DAC0_DAT15H                   (*((volatile uint32_t *)0x400CC01F))      // DAC Data High Register
#define DAC0_SR                       (*((volatile uint32_t *)0x400CC020))      // DAC Status Register
#define DAC0_C0                       (*((volatile uint32_t *)0x400CC021))      // DAC Control Register
#define DAC0_C1                       (*((volatile uint32_t *)0x400CC022))      // DAC Control Register 1
#define DAC0_C2                       (*((volatile uint32_t *)0x400CC023))      // DAC Control Register 2


//*****************************************************************************
//
// Voltage Reference (VREFV1) registers
//
//*****************************************************************************

#define VREF_TRM                      (*((volatile uint32_t *)0x40074000))      // VREF Trim Register
#define VREF_SC                       (*((volatile uint32_t *)0x40074001))      // VREF Status and Control Register


//*****************************************************************************
//
// Programmable Delay Block (PDB) registers
//
//*****************************************************************************

#define PDB0_SC                       (*((volatile uint32_t *)0x40036000))      // Status and Control Register (PDB0_SC)
#define PDB0_MOD                      (*((volatile uint32_t *)0x40036004))      // Modulus Register (PDB0_MOD)
#define PDB0_CNT                      (*((volatile uint32_t *)0x40036008))      // Counter Register (PDB0_CNT)
#define PDB0_IDLY                     (*((volatile uint32_t *)0x4003600C))      // Interrupt Delay Register (PDB0_IDLY)
#define PDB0_CH0C1                    (*((volatile uint32_t *)0x40036010))      // Channel n Control Register 1 (PDB0_CH0C1)
#define PDB0_CH0S                     (*((volatile uint32_t *)0x40036014))      // Channel n Status Register (PDB0_CH0S)
#define PDB0_CH0DLY0                  (*((volatile uint32_t *)0x40036018))      // Channel n Delay 0 Register (PDB0_CH0DLY0)
#define PDB0_CH0DLY1                  (*((volatile uint32_t *)0x4003601C))      // Channel n Delay 1 Register (PDB0_CH0DLY1)
#define PDB0_CH1C1                    (*((volatile uint32_t *)0x40036038))      // Channel n Control Register 1 (PDB0_CH1C1)
#define PDB0_CH1S                     (*((volatile uint32_t *)0x4003603C))      // Channel n Status Register (PDB0_CH1S)
#define PDB0_CH1DLY0                  (*((volatile uint32_t *)0x40036040))      // Channel n Delay 0 Register (PDB0_CH1DLY0)
#define PDB0_CH1DLY1                  (*((volatile uint32_t *)0x40036044))      // Channel n Delay 1 Register (PDB0_CH1DLY1)
#define PDB0_DACINTC0                 (*((volatile uint32_t *)0x40036150))      // DAC Interval Trigger n Control Register (PDB0_DACINTC0)
#define PDB0_DACINT0                  (*((volatile uint32_t *)0x40036154))      // DAC Interval n Register (PDB0_DACINT0)
#define PDB0_DACINTC1                 (*((volatile uint32_t *)0x40036158))      // DAC Interval Trigger n Control Register (PDB0_DACINTC1)
#define PDB0_DACINT1                  (*((volatile uint32_t *)0x4003615C))      // DAC Interval n Register (PDB0_DACINT1)
#define PDB0_PO0EN                    (*((volatile uint32_t *)0x40036190))      // Pulse-Out n Enable Register (PDB0_PO0EN)
#define PDB0_PO0DLY                   (*((volatile uint32_t *)0x40036194))      // Pulse-Out n Delay Register (PDB0_PO0DLY)


//*****************************************************************************
//
// FlexTimer (FTM) registers
//
//*****************************************************************************

#define FTM0_SC                       (*((volatile uint32_t *)0x40038000))      // Status and Control (FTM0_SC)
#define FTM0_CNT                      (*((volatile uint32_t *)0x40038004))      // Counter (FTM0_CNT)
#define FTM0_MOD                      (*((volatile uint32_t *)0x40038008))      // Modulo (FTM0_MOD)
#define FTM0_C0SC                     (*((volatile uint32_t *)0x4003800C))      // Channel (n) Status and Control (FTM0_C0SC)
#define FTM0_C0V                      (*((volatile uint32_t *)0x40038010))      // Channel (n) Value (FTM0_C0V)
#define FTM0_C1SC                     (*((volatile uint32_t *)0x40038014))      // Channel (n) Status and Control (FTM0_C1SC)
#define FTM0_C1V                      (*((volatile uint32_t *)0x40038018))      // Channel (n) Value (FTM0_C1V)
#define FTM0_C2SC                     (*((volatile uint32_t *)0x4003801C))      // Channel (n) Status and Control (FTM0_C2SC)
#define FTM0_C2V                      (*((volatile uint32_t *)0x40038020))      // Channel (n) Value (FTM0_C2V)
#define FTM0_C3SC                     (*((volatile uint32_t *)0x40038024))      // Channel (n) Status and Control (FTM0_C3SC)
#define FTM0_C3V                      (*((volatile uint32_t *)0x40038028))      // Channel (n) Value (FTM0_C3V)
#define FTM0_C4SC                     (*((volatile uint32_t *)0x4003802C))      // Channel (n) Status and Control (FTM0_C4SC)
#define FTM0_C4V                      (*((volatile uint32_t *)0x40038030))      // Channel (n) Value (FTM0_C4V)
#define FTM0_C5SC                     (*((volatile uint32_t *)0x40038034))      // Channel (n) Status and Control (FTM0_C5SC)
#define FTM0_C5V                      (*((volatile uint32_t *)0x40038038))      // Channel (n) Value (FTM0_C5V)
#define FTM0_C6SC                     (*((volatile uint32_t *)0x4003803C))      // Channel (n) Status and Control (FTM0_C6SC)
#define FTM0_C6V                      (*((volatile uint32_t *)0x40038040))      // Channel (n) Value (FTM0_C6V)
#define FTM0_C7SC                     (*((volatile uint32_t *)0x40038044))      // Channel (n) Status and Control (FTM0_C7SC)
#define FTM0_C7V                      (*((volatile uint32_t *)0x40038048))      // Channel (n) Value (FTM0_C7V)
#define FTM0_CNTIN                    (*((volatile uint32_t *)0x4003804C))      // Counter Initial Value (FTM0_CNTIN)
#define FTM0_STATUS                   (*((volatile uint32_t *)0x40038050))      // Capture and Compare Status (FTM0_STATUS)
#define FTM0_MODE                     (*((volatile uint32_t *)0x40038054))      // Features Mode Selection (FTM0_MODE)
#define FTM0_SYNC                     (*((volatile uint32_t *)0x40038058))      // Synchronization (FTM0_SYNC)
#define FTM0_OUTINIT                  (*((volatile uint32_t *)0x4003805C))      // Initial State for Channels Output (FTM0_OUTINIT)
#define FTM0_OUTMASK                  (*((volatile uint32_t *)0x40038060))      // Output Mask (FTM0_OUTMASK)
#define FTM0_COMBINE                  (*((volatile uint32_t *)0x40038064))      // Function for Linked Channels (FTM0_COMBINE)
#define FTM0_DEADTIME                 (*((volatile uint32_t *)0x40038068))      // Deadtime Insertion Control (FTM0_DEADTIME)
#define FTM0_EXTTRIG                  (*((volatile uint32_t *)0x4003806C))      // FTM External Trigger (FTM0_EXTTRIG)
#define FTM0_POL                      (*((volatile uint32_t *)0x40038070))      // Channels Polarity (FTM0_POL)
#define FTM0_FMS                      (*((volatile uint32_t *)0x40038074))      // Fault Mode Status (FTM0_FMS)
#define FTM0_FILTER                   (*((volatile uint32_t *)0x40038078))      // Input Capture Filter Control (FTM0_FILTER)
#define FTM0_FLTCTRL                  (*((volatile uint32_t *)0x4003807C))      // Fault Control (FTM0_FLTCTRL)
#define FTM0_QDCTRL                   (*((volatile uint32_t *)0x40038080))      // Quadrature Decoder Control and Status (FTM0_QDCTRL)
#define FTM0_CONF                     (*((volatile uint32_t *)0x40038084))      // Configuration (FTM0_CONF)
#define FTM0_FLTPOL                   (*((volatile uint32_t *)0x40038088))      // FTM Fault Input Polarity (FTM0_FLTPOL)
#define FTM0_SYNCONF                  (*((volatile uint32_t *)0x4003808C))      // Synchronization Configuration (FTM0_SYNCONF)
#define FTM0_INVCTRL                  (*((volatile uint32_t *)0x40038090))      // FTM Inverting Control (FTM0_INVCTRL)
#define FTM0_SWOCTRL                  (*((volatile uint32_t *)0x40038094))      // FTM Software Output Control (FTM0_SWOCTRL)
#define FTM0_PWMLOAD                  (*((volatile uint32_t *)0x40038098))      // FTM PWM Load (FTM0_PWMLOAD)
#define FTM1_SC                       (*((volatile uint32_t *)0x40039000))      // Status and Control (FTM1_SC)
#define FTM1_CNT                      (*((volatile uint32_t *)0x40039004))      // Counter (FTM1_CNT)
#define FTM1_MOD                      (*((volatile uint32_t *)0x40039008))      // Modulo (FTM1_MOD)
#define FTM1_C0SC                     (*((volatile uint32_t *)0x4003900C))      // Channel (n) Status and Control (FTM1_C0SC)
#define FTM1_C0V                      (*((volatile uint32_t *)0x40039010))      // Channel (n) Value (FTM1_C0V)
#define FTM1_C1SC                     (*((volatile uint32_t *)0x40039014))      // Channel (n) Status and Control (FTM1_C1SC)
#define FTM1_C1V                      (*((volatile uint32_t *)0x40039018))      // Channel (n) Value (FTM1_C1V)
#define FTM1_C2SC                     (*((volatile uint32_t *)0x4003901C))      // Channel (n) Status and Control (FTM1_C2SC)
#define FTM1_C2V                      (*((volatile uint32_t *)0x40039020))      // Channel (n) Value (FTM1_C2V)
#define FTM1_C3SC                     (*((volatile uint32_t *)0x40039024))      // Channel (n) Status and Control (FTM1_C3SC)
#define FTM1_C3V                      (*((volatile uint32_t *)0x40039028))      // Channel (n) Value (FTM1_C3V)
#define FTM1_C4SC                     (*((volatile uint32_t *)0x4003902C))      // Channel (n) Status and Control (FTM1_C4SC)
#define FTM1_C4V                      (*((volatile uint32_t *)0x40039030))      // Channel (n) Value (FTM1_C4V)
#define FTM1_C5SC                     (*((volatile uint32_t *)0x40039034))      // Channel (n) Status and Control (FTM1_C5SC)
#define FTM1_C5V                      (*((volatile uint32_t *)0x40039038))      // Channel (n) Value (FTM1_C5V)
#define FTM1_C6SC                     (*((volatile uint32_t *)0x4003903C))      // Channel (n) Status and Control (FTM1_C6SC)
#define FTM1_C6V                      (*((volatile uint32_t *)0x40039040))      // Channel (n) Value (FTM1_C6V)
#define FTM1_C7SC                     (*((volatile uint32_t *)0x40039044))      // Channel (n) Status and Control (FTM1_C7SC)
#define FTM1_C7V                      (*((volatile uint32_t *)0x40039048))      // Channel (n) Value (FTM1_C7V)
#define FTM1_CNTIN                    (*((volatile uint32_t *)0x4003904C))      // Counter Initial Value (FTM1_CNTIN)
#define FTM1_STATUS                   (*((volatile uint32_t *)0x40039050))      // Capture and Compare Status (FTM1_STATUS)
#define FTM1_MODE                     (*((volatile uint32_t *)0x40039054))      // Features Mode Selection (FTM1_MODE)
#define FTM1_SYNC                     (*((volatile uint32_t *)0x40039058))      // Synchronization (FTM1_SYNC)
#define FTM1_OUTINIT                  (*((volatile uint32_t *)0x4003905C))      // Initial State for Channels Output (FTM1_OUTINIT)
#define FTM1_OUTMASK                  (*((volatile uint32_t *)0x40039060))      // Output Mask (FTM1_OUTMASK)
#define FTM1_COMBINE                  (*((volatile uint32_t *)0x40039064))      // Function for Linked Channels (FTM1_COMBINE)
#define FTM1_DEADTIME                 (*((volatile uint32_t *)0x40039068))      // Deadtime Insertion Control (FTM1_DEADTIME)
#define FTM1_EXTTRIG                  (*((volatile uint32_t *)0x4003906C))      // FTM External Trigger (FTM1_EXTTRIG)
#define FTM1_POL                      (*((volatile uint32_t *)0x40039070))      // Channels Polarity (FTM1_POL)
#define FTM1_FMS                      (*((volatile uint32_t *)0x40039074))      // Fault Mode Status (FTM1_FMS)
#define FTM1_FILTER                   (*((volatile uint32_t *)0x40039078))      // Input Capture Filter Control (FTM1_FILTER)
#define FTM1_FLTCTRL                  (*((volatile uint32_t *)0x4003907C))      // Fault Control (FTM1_FLTCTRL)
#define FTM1_QDCTRL                   (*((volatile uint32_t *)0x40039080))      // Quadrature Decoder Control and Status (FTM1_QDCTRL)
#define FTM1_CONF                     (*((volatile uint32_t *)0x40039084))      // Configuration (FTM1_CONF)
#define FTM1_FLTPOL                   (*((volatile uint32_t *)0x40039088))      // FTM Fault Input Polarity (FTM1_FLTPOL)
#define FTM1_SYNCONF                  (*((volatile uint32_t *)0x4003908C))      // Synchronization Configuration (FTM1_SYNCONF)
#define FTM1_INVCTRL                  (*((volatile uint32_t *)0x40039090))      // FTM Inverting Control (FTM1_INVCTRL)
#define FTM1_SWOCTRL                  (*((volatile uint32_t *)0x40039094))      // FTM Software Output Control (FTM1_SWOCTRL)
#define FTM1_PWMLOAD                  (*((volatile uint32_t *)0x40039098))      // FTM PWM Load (FTM1_PWMLOAD)
#define FTM2_SC                       (*((volatile uint32_t *)0x400B8000))      // Status and Control (FTM2_SC)
#define FTM2_CNT                      (*((volatile uint32_t *)0x400B8004))      // Counter (FTM2_CNT)
#define FTM2_MOD                      (*((volatile uint32_t *)0x400B8008))      // Modulo (FTM2_MOD)
#define FTM2_C0SC                     (*((volatile uint32_t *)0x400B800C))      // Channel (n) Status and Control (FTM2_C0SC)
#define FTM2_C0V                      (*((volatile uint32_t *)0x400B8010))      // Channel (n) Value (FTM2_C0V)
#define FTM2_C1SC                     (*((volatile uint32_t *)0x400B8014))      // Channel (n) Status and Control (FTM2_C1SC)
#define FTM2_C1V                      (*((volatile uint32_t *)0x400B8018))      // Channel (n) Value (FTM2_C1V)
#define FTM2_C2SC                     (*((volatile uint32_t *)0x400B801C))      // Channel (n) Status and Control (FTM2_C2SC)
#define FTM2_C2V                      (*((volatile uint32_t *)0x400B8020))      // Channel (n) Value (FTM2_C2V)
#define FTM2_C3SC                     (*((volatile uint32_t *)0x400B8024))      // Channel (n) Status and Control (FTM2_C3SC)
#define FTM2_C3V                      (*((volatile uint32_t *)0x400B8028))      // Channel (n) Value (FTM2_C3V)
#define FTM2_C4SC                     (*((volatile uint32_t *)0x400B802C))      // Channel (n) Status and Control (FTM2_C4SC)
#define FTM2_C4V                      (*((volatile uint32_t *)0x400B8030))      // Channel (n) Value (FTM2_C4V)
#define FTM2_C5SC                     (*((volatile uint32_t *)0x400B8034))      // Channel (n) Status and Control (FTM2_C5SC)
#define FTM2_C5V                      (*((volatile uint32_t *)0x400B8038))      // Channel (n) Value (FTM2_C5V)
#define FTM2_C6SC                     (*((volatile uint32_t *)0x400B803C))      // Channel (n) Status and Control (FTM2_C6SC)
#define FTM2_C6V                      (*((volatile uint32_t *)0x400B8040))      // Channel (n) Value (FTM2_C6V)
#define FTM2_C7SC                     (*((volatile uint32_t *)0x400B8044))      // Channel (n) Status and Control (FTM2_C7SC)
#define FTM2_C7V                      (*((volatile uint32_t *)0x400B8048))      // Channel (n) Value (FTM2_C7V)
#define FTM2_CNTIN                    (*((volatile uint32_t *)0x400B804C))      // Counter Initial Value (FTM2_CNTIN)
#define FTM2_STATUS                   (*((volatile uint32_t *)0x400B8050))      // Capture and Compare Status (FTM2_STATUS)
#define FTM2_MODE                     (*((volatile uint32_t *)0x400B8054))      // Features Mode Selection (FTM2_MODE)
#define FTM2_SYNC                     (*((volatile uint32_t *)0x400B8058))      // Synchronization (FTM2_SYNC)
#define FTM2_OUTINIT                  (*((volatile uint32_t *)0x400B805C))      // Initial State for Channels Output (FTM2_OUTINIT)
#define FTM2_OUTMASK                  (*((volatile uint32_t *)0x400B8060))      // Output Mask (FTM2_OUTMASK)
#define FTM2_COMBINE                  (*((volatile uint32_t *)0x400B8064))      // Function for Linked Channels (FTM2_COMBINE)
#define FTM2_DEADTIME                 (*((volatile uint32_t *)0x400B8068))      // Deadtime Insertion Control (FTM2_DEADTIME)
#define FTM2_EXTTRIG                  (*((volatile uint32_t *)0x400B806C))      // FTM External Trigger (FTM2_EXTTRIG)
#define FTM2_POL                      (*((volatile uint32_t *)0x400B8070))      // Channels Polarity (FTM2_POL)
#define FTM2_FMS                      (*((volatile uint32_t *)0x400B8074))      // Fault Mode Status (FTM2_FMS)
#define FTM2_FILTER                   (*((volatile uint32_t *)0x400B8078))      // Input Capture Filter Control (FTM2_FILTER)
#define FTM2_FLTCTRL                  (*((volatile uint32_t *)0x400B807C))      // Fault Control (FTM2_FLTCTRL)
#define FTM2_QDCTRL                   (*((volatile uint32_t *)0x400B8080))      // Quadrature Decoder Control and Status (FTM2_QDCTRL)
#define FTM2_CONF                     (*((volatile uint32_t *)0x400B8084))      // Configuration (FTM2_CONF)
#define FTM2_FLTPOL                   (*((volatile uint32_t *)0x400B8088))      // FTM Fault Input Polarity (FTM2_FLTPOL)
#define FTM2_SYNCONF                  (*((volatile uint32_t *)0x400B808C))      // Synchronization Configuration (FTM2_SYNCONF)
#define FTM2_INVCTRL                  (*((volatile uint32_t *)0x400B8090))      // FTM Inverting Control (FTM2_INVCTRL)
#define FTM2_SWOCTRL                  (*((volatile uint32_t *)0x400B8094))      // FTM Software Output Control (FTM2_SWOCTRL)
#define FTM2_PWMLOAD                  (*((volatile uint32_t *)0x400B8098))      // FTM PWM Load (FTM2_PWMLOAD)


//*****************************************************************************
//
// Periodic Interrupt Timer (PIT) registers
//
//*****************************************************************************

#define PIT_MCR                       (*((volatile uint32_t *)0x40037000))      // PIT Module Control Register
#define PIT_LDVAL0                    (*((volatile uint32_t *)0x40037100))      // Timer Load Value Register
#define PIT_CVAL0                     (*((volatile uint32_t *)0x40037104))      // Current Timer Value Register
#define PIT_TCTRL0                    (*((volatile uint32_t *)0x40037108))      // Timer Control Register
#define PIT_TFLG0                     (*((volatile uint32_t *)0x4003710C))      // Timer Flag Register
#define PIT_LDVAL1                    (*((volatile uint32_t *)0x40037110))      // Timer Load Value Register
#define PIT_CVAL1                     (*((volatile uint32_t *)0x40037114))      // Current Timer Value Register
#define PIT_TCTRL1                    (*((volatile uint32_t *)0x40037118))      // Timer Control Register
#define PIT_TFLG1                     (*((volatile uint32_t *)0x4003711C))      // Timer Flag Register
#define PIT_LDVAL2                    (*((volatile uint32_t *)0x40037120))      // Timer Load Value Register
#define PIT_CVAL2                     (*((volatile uint32_t *)0x40037124))      // Current Timer Value Register
#define PIT_TCTRL2                    (*((volatile uint32_t *)0x40037128))      // Timer Control Register
#define PIT_TFLG2                     (*((volatile uint32_t *)0x4003712C))      // Timer Flag Register
#define PIT_LDVAL3                    (*((volatile uint32_t *)0x40037130))      // Timer Load Value Register
#define PIT_CVAL3                     (*((volatile uint32_t *)0x40037134))      // Current Timer Value Register
#define PIT_TCTRL3                    (*((volatile uint32_t *)0x40037138))      // Timer Control Register
#define PIT_TFLG3                     (*((volatile uint32_t *)0x4003713C))      // Timer Flag Register


//*****************************************************************************
//
// Low power timer (LPTMR) registers
//
//*****************************************************************************

#define LPTMR0_CSR                    (*((volatile uint32_t *)0x40040000))      // Low Power Timer Control Status Register
#define LPTMR0_PSR                    (*((volatile uint32_t *)0x40040004))      // Low Power Timer Prescale Register
#define LPTMR0_CMR                    (*((volatile uint32_t *)0x40040008))      // Low Power Timer Compare Register
#define LPTMR0_CNR                    (*((volatile uint32_t *)0x4004000C))      // Low Power Timer Counter Register


//*****************************************************************************
//
// Carrier Modulator Transmitter (CMT) registers
//
//*****************************************************************************

#define CMT_CGH1                      (*((volatile uint32_t *)0x40062000))      // CMT Carrier Generator High Data Register 1 (CMT_CGH1)
#define CMT_CGL1                      (*((volatile uint32_t *)0x40062001))      // CMT Carrier Generator Low Data Register 1 (CMT_CGL1)
#define CMT_CGH2                      (*((volatile uint32_t *)0x40062002))      // CMT Carrier Generator High Data Register 2 (CMT_CGH2)
#define CMT_CGL2                      (*((volatile uint32_t *)0x40062003))      // CMT Carrier Generator Low Data Register 2 (CMT_CGL2)
#define CMT_OC                        (*((volatile uint32_t *)0x40062004))      // CMT Output Control Register (CMT_OC)
#define CMT_MSC                       (*((volatile uint32_t *)0x40062005))      // CMT Modulator Status and Control Register (CMT_MSC)
#define CMT_CMD1                      (*((volatile uint32_t *)0x40062006))      // CMT Modulator Data Register Mark High (CMT_CMD1)
#define CMT_CMD2                      (*((volatile uint32_t *)0x40062007))      // CMT Modulator Data Register Mark Low (CMT_CMD2)
#define CMT_CMD3                      (*((volatile uint32_t *)0x40062008))      // CMT Modulator Data Register Space High (CMT_CMD3)
#define CMT_CMD4                      (*((volatile uint32_t *)0x40062009))      // CMT Modulator Data Register Space Low (CMT_CMD4)
#define CMT_PPS                       (*((volatile uint32_t *)0x4006200A))      // CMT Primary Prescaler Register (CMT_PPS)
#define CMT_DMA                       (*((volatile uint32_t *)0x4006200B))      // CMT Direct Memory Access (CMT_DMA)


//*****************************************************************************
//
// Real Time Clock (RTC) registers
//
//*****************************************************************************

#define RTC_TSR                       (*((volatile uint32_t *)0x4003D000))      // RTC Time Seconds Register
#define RTC_TPR                       (*((volatile uint32_t *)0x4003D004))      // RTC Time Prescaler Register
#define RTC_TAR                       (*((volatile uint32_t *)0x4003D008))      // RTC Time Alarm Register
#define RTC_TCR                       (*((volatile uint32_t *)0x4003D00C))      // RTC Time Compensation Register
#define RTC_CR                        (*((volatile uint32_t *)0x4003D010))      // RTC Control Register
#define RTC_SR                        (*((volatile uint32_t *)0x4003D014))      // RTC Status Register
#define RTC_LR                        (*((volatile uint32_t *)0x4003D018))      // RTC Lock Register
#define RTC_IER                       (*((volatile uint32_t *)0x4003D01C))      // RTC Interrupt Enable Register
#define RTC_WAR                       (*((volatile uint32_t *)0x4003D800))      // RTC Write Access Register
#define RTC_RAR                       (*((volatile uint32_t *)0x4003D804))      // RTC Read Access Register


//*****************************************************************************
//
// SPI (DSPI) registers
//
//*****************************************************************************

#define SPI0_MCR                      (*((volatile uint32_t *)0x4002C000))      // DSPI Module Configuration Register
#define SPI0_TCR                      (*((volatile uint32_t *)0x4002C008))      // DSPI Transfer Count Register
#define SPI0_CTAR0                    (*((volatile uint32_t *)0x4002C00C))      // DSPI Clock and Transfer Attributes Register (In Master Mode)
#define SPI0_CTAR0_SLAVE              (*((volatile uint32_t *)0x4002C00C))      // DSPI Clock and Transfer Attributes Register (In Slave Mode)
#define SPI0_CTAR1                    (*((volatile uint32_t *)0x4002C010))      // DSPI Clock and Transfer Attributes Register (In Master Mode)
#define SPI0_SR                       (*((volatile uint32_t *)0x4002C02C))      // DSPI Status Register
#define SPI0_RSER                     (*((volatile uint32_t *)0x4002C030))      // DSPI DMA/Interrupt Request Select and Enable Register
#define SPI0_PUSHR                    (*((volatile uint32_t *)0x4002C034))      // DSPI PUSH TX FIFO Register In Master Mode
#define SPI0_PUSHR_SLAVE              (*((volatile uint32_t *)0x4002C034))      // DSPI PUSH TX FIFO Register In Slave Mode
#define SPI0_POPR                     (*((volatile uint32_t *)0x4002C038))      // DSPI POP RX FIFO Register
#define SPI0_TXFR0                    (*((volatile uint32_t *)0x4002C03C))      // DSPI Transmit FIFO Registers
#define SPI0_TXFR1                    (*((volatile uint32_t *)0x4002C040))      // DSPI Transmit FIFO Registers
#define SPI0_TXFR2                    (*((volatile uint32_t *)0x4002C044))      // DSPI Transmit FIFO Registers
#define SPI0_TXFR3                    (*((volatile uint32_t *)0x4002C048))      // DSPI Transmit FIFO Registers
#define SPI0_RXFR0                    (*((volatile uint32_t *)0x4002C07C))      // DSPI Receive FIFO Registers
#define SPI0_RXFR1                    (*((volatile uint32_t *)0x4002C080))      // DSPI Receive FIFO Registers
#define SPI0_RXFR2                    (*((volatile uint32_t *)0x4002C084))      // DSPI Receive FIFO Registers
#define SPI0_RXFR3                    (*((volatile uint32_t *)0x4002C088))      // DSPI Receive FIFO Registers
#define SPI1_MCR                      (*((volatile uint32_t *)0x4002D000))      // DSPI Module Configuration Register
#define SPI1_TCR                      (*((volatile uint32_t *)0x4002D008))      // DSPI Transfer Count Register
#define SPI1_CTAR0                    (*((volatile uint32_t *)0x4002D00C))      // DSPI Clock and Transfer Attributes Register (In Master Mode)
#define SPI1_CTAR0_SLAVE              (*((volatile uint32_t *)0x4002D00C))      // DSPI Clock and Transfer Attributes Register (In Slave Mode)
#define SPI1_CTAR1                    (*((volatile uint32_t *)0x4002D010))      // DSPI Clock and Transfer Attributes Register (In Master Mode)
#define SPI1_SR                       (*((volatile uint32_t *)0x4002D02C))      // DSPI Status Register
#define SPI1_RSER                     (*((volatile uint32_t *)0x4002D030))      // DSPI DMA/Interrupt Request Select and Enable Register
#define SPI1_PUSHR                    (*((volatile uint32_t *)0x4002D034))      // DSPI PUSH TX FIFO Register In Master Mode
#define SPI1_PUSHR_SLAVE              (*((volatile uint32_t *)0x4002D034))      // DSPI PUSH TX FIFO Register In Slave Mode
#define SPI1_POPR                     (*((volatile uint32_t *)0x4002D038))      // DSPI POP RX FIFO Register
#define SPI1_TXFR0                    (*((volatile uint32_t *)0x4002D03C))      // DSPI Transmit FIFO Registers
#define SPI1_TXFR1                    (*((volatile uint32_t *)0x4002D040))      // DSPI Transmit FIFO Registers
#define SPI1_TXFR2                    (*((volatile uint32_t *)0x4002D044))      // DSPI Transmit FIFO Registers
#define SPI1_TXFR3                    (*((volatile uint32_t *)0x4002D048))      // DSPI Transmit FIFO Registers
#define SPI1_RXFR0                    (*((volatile uint32_t *)0x4002D07C))      // DSPI Receive FIFO Registers
#define SPI1_RXFR1                    (*((volatile uint32_t *)0x4002D080))      // DSPI Receive FIFO Registers
#define SPI1_RXFR2                    (*((volatile uint32_t *)0x4002D084))      // DSPI Receive FIFO Registers
#define SPI1_RXFR3                    (*((volatile uint32_t *)0x4002D088))      // DSPI Receive FIFO Registers


//*****************************************************************************
//
// Inter-Integrated Circuit (I2C) registers
//
//*****************************************************************************

#define I2C0_A1                       (*((volatile uint32_t *)0x40066000))      // I2C Address Register 1
#define I2C0_F                        (*((volatile uint32_t *)0x40066001))      // I2C Frequency Divider register
#define I2C0_C1                       (*((volatile uint32_t *)0x40066002))      // I2C Control Register 1
#define I2C0_S                        (*((volatile uint32_t *)0x40066003))      // I2C Status Register
#define I2C0_D                        (*((volatile uint32_t *)0x40066004))      // I2C Data I/O register
#define I2C0_C2                       (*((volatile uint32_t *)0x40066005))      // I2C Control Register 2
#define I2C0_FLT                      (*((volatile uint32_t *)0x40066006))      // I2C Programmable Input Glitch Filter register
#define I2C0_RA                       (*((volatile uint32_t *)0x40066007))      // I2C Range Address register
#define I2C0_SMB                      (*((volatile uint32_t *)0x40066008))      // I2C SMBus Control and Status register
#define I2C0_A2                       (*((volatile uint32_t *)0x40066009))      // I2C Address Register 2
#define I2C0_SLTH                     (*((volatile uint32_t *)0x4006600A))      // I2C SCL Low Timeout Register High
#define I2C0_SLTL                     (*((volatile uint32_t *)0x4006600B))      // I2C SCL Low Timeout Register Low
#define I2C1_A1                       (*((volatile uint32_t *)0x40067000))      // I2C Address Register 1
#define I2C1_F                        (*((volatile uint32_t *)0x40067001))      // I2C Frequency Divider register
#define I2C1_C1                       (*((volatile uint32_t *)0x40067002))      // I2C Control Register 1
#define I2C1_S                        (*((volatile uint32_t *)0x40067003))      // I2C Status Register
#define I2C1_D                        (*((volatile uint32_t *)0x40067004))      // I2C Data I/O register
#define I2C1_C2                       (*((volatile uint32_t *)0x40067005))      // I2C Control Register 2
#define I2C1_FLT                      (*((volatile uint32_t *)0x40067006))      // I2C Programmable Input Glitch Filter register
#define I2C1_RA                       (*((volatile uint32_t *)0x40067007))      // I2C Range Address register
#define I2C1_SMB                      (*((volatile uint32_t *)0x40067008))      // I2C SMBus Control and Status register
#define I2C1_A2                       (*((volatile uint32_t *)0x40067009))      // I2C Address Register 2
#define I2C1_SLTH                     (*((volatile uint32_t *)0x4006700A))      // I2C SCL Low Timeout Register High
#define I2C1_SLTL                     (*((volatile uint32_t *)0x4006700B))      // I2C SCL Low Timeout Register Low


//*****************************************************************************
//
// Universal Asynchronous Receiver/Transmitter (UART) registers
//
//*****************************************************************************

#define UART0_BDH                     (*((volatile uint32_t *)0x4006A000))      // UART Baud Rate Registers:High (UART0_BDH)
#define UART0_BDL                     (*((volatile uint32_t *)0x4006A001))      // UART Baud Rate Registers: Low (UART0_BDL)
#define UART0_C1                      (*((volatile uint32_t *)0x4006A002))      // UART Control Register 1 (UART0_C1)
#define UART0_C2                      (*((volatile uint32_t *)0x4006A003))      // UART Control Register 2 (UART0_C2)
#define UART0_S1                      (*((volatile uint32_t *)0x4006A004))      // UART Status Register 1 (UART0_S1)
#define UART0_S2                      (*((volatile uint32_t *)0x4006A005))      // UART Status Register 2 (UART0_S2)
#define UART0_C3                      (*((volatile uint32_t *)0x4006A006))      // UART Control Register 3 (UART0_C3)
#define UART0_D                       (*((volatile uint32_t *)0x4006A007))      // UART Data Register (UART0_D)
#define UART0_MA1                     (*((volatile uint32_t *)0x4006A008))      // UART Match Address Registers 1 (UART0_MA1)
#define UART0_MA2                     (*((volatile uint32_t *)0x4006A009))      // UART Match Address Registers 2 (UART0_MA2)
#define UART0_C4                      (*((volatile uint32_t *)0x4006A00A))      // UART Control Register 4 (UART0_C4)
#define UART0_C5                      (*((volatile uint32_t *)0x4006A00B))      // UART Control Register 5 (UART0_C5)
#define UART0_ED                      (*((volatile uint32_t *)0x4006A00C))      // UART Extended Data Register (UART0_ED)
#define UART0_MODEM                   (*((volatile uint32_t *)0x4006A00D))      // UART Modem Register (UART0_MODEM)
#define UART0_IR                      (*((volatile uint32_t *)0x4006A00E))      // UART Infrared Register (UART0_IR)
#define UART0_PFIFO                   (*((volatile uint32_t *)0x4006A010))      // UART FIFO Parameters (UART0_PFIFO)
#define UART0_CFIFO                   (*((volatile uint32_t *)0x4006A011))      // UART FIFO Control Register (UART0_CFIFO)
#define UART0_SFIFO                   (*((volatile uint32_t *)0x4006A012))      // UART FIFO Status Register (UART0_SFIFO)
#define UART0_TWFIFO                  (*((volatile uint32_t *)0x4006A013))      // UART FIFO Transmit Watermark (UART0_TWFIFO)
#define UART0_TCFIFO                  (*((volatile uint32_t *)0x4006A014))      // UART FIFO Transmit Count (UART0_TCFIFO)
#define UART0_RWFIFO                  (*((volatile uint32_t *)0x4006A015))      // UART FIFO Receive Watermark (UART0_RWFIFO)
#define UART0_RCFIFO                  (*((volatile uint32_t *)0x4006A016))      // UART FIFO Receive Count (UART0_RCFIFO)
#define UART0_C7816                   (*((volatile uint32_t *)0x4006A018))      // UART 7816 Control Register (UART0_C7816)
#define UART0_IE7816                  (*((volatile uint32_t *)0x4006A019))      // UART 7816 Interrupt Enable Register (UART0_IE7816)
#define UART0_IS7816                  (*((volatile uint32_t *)0x4006A01A))      // UART 7816 Interrupt Status Register (UART0_IS7816)
#define UART0_WP7816T0                (*((volatile uint32_t *)0x4006A01B))      // UART 7816 Wait Parameter Register (UART0_WP7816T0)
#define UART0_WP7816T1                (*((volatile uint32_t *)0x4006A01B))      // UART 7816 Wait Parameter Register (UART0_WP7816T1)
#define UART0_WN7816                  (*((volatile uint32_t *)0x4006A01C))      // UART 7816 Wait N Register (UART0_WN7816)
#define UART0_WF7816                  (*((volatile uint32_t *)0x4006A01D))      // UART 7816 Wait FD Register (UART0_WF7816)
#define UART0_ET7816                  (*((volatile uint32_t *)0x4006A01E))      // UART 7816 Error Threshold Register (UART0_ET7816)
#define UART0_TL7816                  (*((volatile uint32_t *)0x4006A01F))      // UART 7816 Transmit Length Register (UART0_TL7816)
#define UART1_BDH                     (*((volatile uint32_t *)0x4006B000))      // UART Baud Rate Registers:High (UART1_BDH)
#define UART1_BDL                     (*((volatile uint32_t *)0x4006B001))      // UART Baud Rate Registers: Low (UART1_BDL)
#define UART1_C1                      (*((volatile uint32_t *)0x4006B002))      // UART Control Register 1 (UART1_C1)
#define UART1_C2                      (*((volatile uint32_t *)0x4006B003))      // UART Control Register 2 (UART1_C2)
#define UART1_S1                      (*((volatile uint32_t *)0x4006B004))      // UART Status Register 1 (UART1_S1)
#define UART1_S2                      (*((volatile uint32_t *)0x4006B005))      // UART Status Register 2 (UART1_S2)
#define UART1_C3                      (*((volatile uint32_t *)0x4006B006))      // UART Control Register 3 (UART1_C3)
#define UART1_D                       (*((volatile uint32_t *)0x4006B007))      // UART Data Register (UART1_D)
#define UART1_MA1                     (*((volatile uint32_t *)0x4006B008))      // UART Match Address Registers 1 (UART1_MA1)
#define UART1_MA2                     (*((volatile uint32_t *)0x4006B009))      // UART Match Address Registers 2 (UART1_MA2)
#define UART1_C4                      (*((volatile uint32_t *)0x4006B00A))      // UART Control Register 4 (UART1_C4)
#define UART1_C5                      (*((volatile uint32_t *)0x4006B00B))      // UART Control Register 5 (UART1_C5)
#define UART1_ED                      (*((volatile uint32_t *)0x4006B00C))      // UART Extended Data Register (UART1_ED)
#define UART1_MODEM                   (*((volatile uint32_t *)0x4006B00D))      // UART Modem Register (UART1_MODEM)
#define UART1_IR                      (*((volatile uint32_t *)0x4006B00E))      // UART Infrared Register (UART1_IR)
#define UART1_PFIFO                   (*((volatile uint32_t *)0x4006B010))      // UART FIFO Parameters (UART1_PFIFO)
#define UART1_CFIFO                   (*((volatile uint32_t *)0x4006B011))      // UART FIFO Control Register (UART1_CFIFO)
#define UART1_SFIFO                   (*((volatile uint32_t *)0x4006B012))      // UART FIFO Status Register (UART1_SFIFO)
#define UART1_TWFIFO                  (*((volatile uint32_t *)0x4006B013))      // UART FIFO Transmit Watermark (UART1_TWFIFO)
#define UART1_TCFIFO                  (*((volatile uint32_t *)0x4006B014))      // UART FIFO Transmit Count (UART1_TCFIFO)
#define UART1_RWFIFO                  (*((volatile uint32_t *)0x4006B015))      // UART FIFO Receive Watermark (UART1_RWFIFO)
#define UART1_RCFIFO                  (*((volatile uint32_t *)0x4006B016))      // UART FIFO Receive Count (UART1_RCFIFO)
#define UART1_C7816                   (*((volatile uint32_t *)0x4006B018))      // UART 7816 Control Register (UART1_C7816)
#define UART1_IE7816                  (*((volatile uint32_t *)0x4006B019))      // UART 7816 Interrupt Enable Register (UART1_IE7816)
#define UART1_IS7816                  (*((volatile uint32_t *)0x4006B01A))      // UART 7816 Interrupt Status Register (UART1_IS7816)
#define UART1_WP7816T0                (*((volatile uint32_t *)0x4006B01B))      // UART 7816 Wait Parameter Register (UART1_WP7816T0)
#define UART1_WP7816T1                (*((volatile uint32_t *)0x4006B01B))      // UART 7816 Wait Parameter Register (UART1_WP7816T1)
#define UART1_WN7816                  (*((volatile uint32_t *)0x4006B01C))      // UART 7816 Wait N Register (UART1_WN7816)
#define UART1_WF7816                  (*((volatile uint32_t *)0x4006B01D))      // UART 7816 Wait FD Register (UART1_WF7816)
#define UART1_ET7816                  (*((volatile uint32_t *)0x4006B01E))      // UART 7816 Error Threshold Register (UART1_ET7816)
#define UART1_TL7816                  (*((volatile uint32_t *)0x4006B01F))      // UART 7816 Transmit Length Register (UART1_TL7816)
#define UART2_BDH                     (*((volatile uint32_t *)0x4006C000))      // UART Baud Rate Registers:High (UART2_BDH)
#define UART2_BDL                     (*((volatile uint32_t *)0x4006C001))      // UART Baud Rate Registers: Low (UART2_BDL)
#define UART2_C1                      (*((volatile uint32_t *)0x4006C002))      // UART Control Register 1 (UART2_C1)
#define UART2_C2                      (*((volatile uint32_t *)0x4006C003))      // UART Control Register 2 (UART2_C2)
#define UART2_S1                      (*((volatile uint32_t *)0x4006C004))      // UART Status Register 1 (UART2_S1)
#define UART2_S2                      (*((volatile uint32_t *)0x4006C005))      // UART Status Register 2 (UART2_S2)
#define UART2_C3                      (*((volatile uint32_t *)0x4006C006))      // UART Control Register 3 (UART2_C3)
#define UART2_D                       (*((volatile uint32_t *)0x4006C007))      // UART Data Register (UART2_D)
#define UART2_MA1                     (*((volatile uint32_t *)0x4006C008))      // UART Match Address Registers 1 (UART2_MA1)
#define UART2_MA2                     (*((volatile uint32_t *)0x4006C009))      // UART Match Address Registers 2 (UART2_MA2)
#define UART2_C4                      (*((volatile uint32_t *)0x4006C00A))      // UART Control Register 4 (UART2_C4)
#define UART2_C5                      (*((volatile uint32_t *)0x4006C00B))      // UART Control Register 5 (UART2_C5)
#define UART2_ED                      (*((volatile uint32_t *)0x4006C00C))      // UART Extended Data Register (UART2_ED)
#define UART2_MODEM                   (*((volatile uint32_t *)0x4006C00D))      // UART Modem Register (UART2_MODEM)
#define UART2_IR                      (*((volatile uint32_t *)0x4006C00E))      // UART Infrared Register (UART2_IR)
#define UART2_PFIFO                   (*((volatile uint32_t *)0x4006C010))      // UART FIFO Parameters (UART2_PFIFO)
#define UART2_CFIFO                   (*((volatile uint32_t *)0x4006C011))      // UART FIFO Control Register (UART2_CFIFO)
#define UART2_SFIFO                   (*((volatile uint32_t *)0x4006C012))      // UART FIFO Status Register (UART2_SFIFO)
#define UART2_TWFIFO                  (*((volatile uint32_t *)0x4006C013))      // UART FIFO Transmit Watermark (UART2_TWFIFO)
#define UART2_TCFIFO                  (*((volatile uint32_t *)0x4006C014))      // UART FIFO Transmit Count (UART2_TCFIFO)
#define UART2_RWFIFO                  (*((volatile uint32_t *)0x4006C015))      // UART FIFO Receive Watermark (UART2_RWFIFO)
#define UART2_RCFIFO                  (*((volatile uint32_t *)0x4006C016))      // UART FIFO Receive Count (UART2_RCFIFO)
#define UART2_C7816                   (*((volatile uint32_t *)0x4006C018))      // UART 7816 Control Register (UART2_C7816)
#define UART2_IE7816                  (*((volatile uint32_t *)0x4006C019))      // UART 7816 Interrupt Enable Register (UART2_IE7816)
#define UART2_IS7816                  (*((volatile uint32_t *)0x4006C01A))      // UART 7816 Interrupt Status Register (UART2_IS7816)
#define UART2_WP7816T0                (*((volatile uint32_t *)0x4006C01B))      // UART 7816 Wait Parameter Register (UART2_WP7816T0)
#define UART2_WP7816T1                (*((volatile uint32_t *)0x4006C01B))      // UART 7816 Wait Parameter Register (UART2_WP7816T1)
#define UART2_WN7816                  (*((volatile uint32_t *)0x4006C01C))      // UART 7816 Wait N Register (UART2_WN7816)
#define UART2_WF7816                  (*((volatile uint32_t *)0x4006C01D))      // UART 7816 Wait FD Register (UART2_WF7816)
#define UART2_ET7816                  (*((volatile uint32_t *)0x4006C01E))      // UART 7816 Error Threshold Register (UART2_ET7816)
#define UART2_TL7816                  (*((volatile uint32_t *)0x4006C01F))      // UART 7816 Transmit Length Register (UART2_TL7816)
#define UART3_BDH                     (*((volatile uint32_t *)0x4006D000))      // UART Baud Rate Registers:High (UART3_BDH)
#define UART3_BDL                     (*((volatile uint32_t *)0x4006D001))      // UART Baud Rate Registers: Low (UART3_BDL)
#define UART3_C1                      (*((volatile uint32_t *)0x4006D002))      // UART Control Register 1 (UART3_C1)
#define UART3_C2                      (*((volatile uint32_t *)0x4006D003))      // UART Control Register 2 (UART3_C2)
#define UART3_S1                      (*((volatile uint32_t *)0x4006D004))      // UART Status Register 1 (UART3_S1)
#define UART3_S2                      (*((volatile uint32_t *)0x4006D005))      // UART Status Register 2 (UART3_S2)
#define UART3_C3                      (*((volatile uint32_t *)0x4006D006))      // UART Control Register 3 (UART3_C3)
#define UART3_D                       (*((volatile uint32_t *)0x4006D007))      // UART Data Register (UART3_D)
#define UART3_MA1                     (*((volatile uint32_t *)0x4006D008))      // UART Match Address Registers 1 (UART3_MA1)
#define UART3_MA2                     (*((volatile uint32_t *)0x4006D009))      // UART Match Address Registers 2 (UART3_MA2)
#define UART3_C4                      (*((volatile uint32_t *)0x4006D00A))      // UART Control Register 4 (UART3_C4)
#define UART3_C5                      (*((volatile uint32_t *)0x4006D00B))      // UART Control Register 5 (UART3_C5)
#define UART3_ED                      (*((volatile uint32_t *)0x4006D00C))      // UART Extended Data Register (UART3_ED)
#define UART3_MODEM                   (*((volatile uint32_t *)0x4006D00D))      // UART Modem Register (UART3_MODEM)
#define UART3_IR                      (*((volatile uint32_t *)0x4006D00E))      // UART Infrared Register (UART3_IR)
#define UART3_PFIFO                   (*((volatile uint32_t *)0x4006D010))      // UART FIFO Parameters (UART3_PFIFO)
#define UART3_CFIFO                   (*((volatile uint32_t *)0x4006D011))      // UART FIFO Control Register (UART3_CFIFO)
#define UART3_SFIFO                   (*((volatile uint32_t *)0x4006D012))      // UART FIFO Status Register (UART3_SFIFO)
#define UART3_TWFIFO                  (*((volatile uint32_t *)0x4006D013))      // UART FIFO Transmit Watermark (UART3_TWFIFO)
#define UART3_TCFIFO                  (*((volatile uint32_t *)0x4006D014))      // UART FIFO Transmit Count (UART3_TCFIFO)
#define UART3_RWFIFO                  (*((volatile uint32_t *)0x4006D015))      // UART FIFO Receive Watermark (UART3_RWFIFO)
#define UART3_RCFIFO                  (*((volatile uint32_t *)0x4006D016))      // UART FIFO Receive Count (UART3_RCFIFO)
#define UART3_C7816                   (*((volatile uint32_t *)0x4006D018))      // UART 7816 Control Register (UART3_C7816)
#define UART3_IE7816                  (*((volatile uint32_t *)0x4006D019))      // UART 7816 Interrupt Enable Register (UART3_IE7816)
#define UART3_IS7816                  (*((volatile uint32_t *)0x4006D01A))      // UART 7816 Interrupt Status Register (UART3_IS7816)
#define UART3_WP7816T0                (*((volatile uint32_t *)0x4006D01B))      // UART 7816 Wait Parameter Register (UART3_WP7816T0)
#define UART3_WP7816T1                (*((volatile uint32_t *)0x4006D01B))      // UART 7816 Wait Parameter Register (UART3_WP7816T1)
#define UART3_WN7816                  (*((volatile uint32_t *)0x4006D01C))      // UART 7816 Wait N Register (UART3_WN7816)
#define UART3_WF7816                  (*((volatile uint32_t *)0x4006D01D))      // UART 7816 Wait FD Register (UART3_WF7816)
#define UART3_ET7816                  (*((volatile uint32_t *)0x4006D01E))      // UART 7816 Error Threshold Register (UART3_ET7816)
#define UART3_TL7816                  (*((volatile uint32_t *)0x4006D01F))      // UART 7816 Transmit Length Register (UART3_TL7816)


//*****************************************************************************
//
// Secured digital host controller (SDHC) registers
//
//*****************************************************************************

#define SDHC_DSADDR                   (*((volatile uint32_t *)0x400B1000))      // DMA System Address Register
#define SDHC_BLKATTR                  (*((volatile uint32_t *)0x400B1004))      // Block Attributes Register
#define SDHC_CMDARG                   (*((volatile uint32_t *)0x400B1008))      // Command Argument Register
#define SDHC_XFERTYP                  (*((volatile uint32_t *)0x400B100C))      // Transfer Type Register
#define SDHC_CMDRSP0                  (*((volatile uint32_t *)0x400B1010))      // Command Response 0
#define SDHC_CMDRSP1                  (*((volatile uint32_t *)0x400B1014))      // Command Response 1
#define SDHC_CMDRSP2                  (*((volatile uint32_t *)0x400B1018))      // Command Response 2
#define SDHC_CMDRSP3                  (*((volatile uint32_t *)0x400B101C))      // Command Response 3
#define SDHC_DATPORT                  (*((volatile uint32_t *)0x400B1020))      // Buffer Data Port Register
#define SDHC_PRSSTAT                  (*((volatile uint32_t *)0x400B1024))      // Present State Register
#define SDHC_PROCTL                   (*((volatile uint32_t *)0x400B1028))      // Protocol Control Register
#define SDHC_SYSCTL                   (*((volatile uint32_t *)0x400B102C))      // System Control Register
#define SDHC_IRQSTAT                  (*((volatile uint32_t *)0x400B1030))      // Interrupt Status Register
#define SDHC_IRQSTATEN                (*((volatile uint32_t *)0x400B1034))      // Interrupt Status Enable Register
#define SDHC_IRQSIGEN                 (*((volatile uint32_t *)0x400B1038))      // Interrupt Signal Enable Register
#define SDHC_AC12ERR                  (*((volatile uint32_t *)0x400B103C))      // Auto CMD12 Error Status Register
#define SDHC_HTCAPBLT                 (*((volatile uint32_t *)0x400B1040))      // Host Controller Capabilities
#define SDHC_WML                      (*((volatile uint32_t *)0x400B1044))      // Watermark Level Register
#define SDHC_FEVT                     (*((volatile uint32_t *)0x400B1050))      // Force Event Register
#define SDHC_ADMAES                   (*((volatile uint32_t *)0x400B1054))      // ADMA Error Status Register
#define SDHC_ADSADDR                  (*((volatile uint32_t *)0x400B1058))      // ADMA System Address Register
#define SDHC_VENDOR                   (*((volatile uint32_t *)0x400B10C0))      // Vendor Specific Register
#define SDHC_MMCBOOT                  (*((volatile uint32_t *)0x400B10C4))      // MMC Boot Register
#define SDHC_HOSTVER                  (*((volatile uint32_t *)0x400B10FC))      // Host Controller Version


//*****************************************************************************
//
// Integrated interchip sound (I2S) registers
//
//*****************************************************************************

#define I2S0_TX0                      (*((volatile uint32_t *)0x4002F000))      // I2S Transmit Data Registers 0 (I2S0_TX0)
#define I2S0_TX1                      (*((volatile uint32_t *)0x4002F004))      // I2S Transmit Data Registers 1 (I2S0_TX1)
#define I2S0_RX0                      (*((volatile uint32_t *)0x4002F008))      // I2S Receive Data Registers 0 (I2S0_RX0)
#define I2S0_RX1                      (*((volatile uint32_t *)0x4002F00C))      // I2S Receive Data Registers 1 (I2S0_RX1)
#define I2S0_CR                       (*((volatile uint32_t *)0x4002F010))      // I2S Control Register (I2S0_CR)
#define I2S0_ISR                      (*((volatile uint32_t *)0x4002F014))      // I2S Interrupt Status Register (I2S0_ISR)
#define I2S0_IER                      (*((volatile uint32_t *)0x4002F018))      // I2S Interrupt Enable Register (I2S0_IER)
#define I2S0_TCR                      (*((volatile uint32_t *)0x4002F01C))      // I2S Transmit Configuration Register (I2S0_TCR)
#define I2S0_RCR                      (*((volatile uint32_t *)0x4002F020))      // I2S Receive Configuration Register (I2S0_RCR)
#define I2S0_TCCR                     (*((volatile uint32_t *)0x4002F024))      // I2S Transmit Clock Control Registers (I2S0_TCCR)
#define I2S0_RCCR                     (*((volatile uint32_t *)0x4002F028))      // I2S Receive Clock Control Registers (I2S0_RCCR)
#define I2S0_FCSR                     (*((volatile uint32_t *)0x4002F02C))      // I2S FIFO Control/Status Register (I2S0_FCSR)
#define I2S0_ACNT                     (*((volatile uint32_t *)0x4002F038))      // I2S AC97 Control Register (I2S0_ACNT)
#define I2S0_ACADD                    (*((volatile uint32_t *)0x4002F03C))      // I2S AC97 Command Address Register (I2S0_ACADD)
#define I2S0_ACDAT                    (*((volatile uint32_t *)0x4002F040))      // I2S AC97 Command Data Register (I2S0_ACDAT)
#define I2S0_ATAG                     (*((volatile uint32_t *)0x4002F044))      // I2S AC97 Tag Register (I2S0_ATAG)
#define I2S0_TMSK                     (*((volatile uint32_t *)0x4002F048))      // I2S Transmit Time Slot Mask Register (I2S0_TMSK)
#define I2S0_RMSK                     (*((volatile uint32_t *)0x4002F04C))      // I2S Receive Time Slot Mask Register (I2S0_RMSK)
#define I2S0_ACCST                    (*((volatile uint32_t *)0x4002F050))      // I2S AC97 Channel Status Register (I2S0_ACCST)
#define I2S0_ACCEN                    (*((volatile uint32_t *)0x4002F054))      // I2S AC97 Channel Enable Register (I2S0_ACCEN)
#define I2S0_ACCDIS                   (*((volatile uint32_t *)0x4002F058))      // I2S AC97 Channel Disable Register (I2S0_ACCDIS)


//*****************************************************************************
//
// General purpose input/output (GPIO) registers
//
//*****************************************************************************

#define GPIOA_PDOR                    (*((volatile uint32_t *)0x400FF000))      // Port Data Output Register
#define GPIOA_PSOR                    (*((volatile uint32_t *)0x400FF004))      // Port Set Output Register
#define GPIOA_PCOR                    (*((volatile uint32_t *)0x400FF008))      // Port Clear Output Register
#define GPIOA_PTOR                    (*((volatile uint32_t *)0x400FF00C))      // Port Toggle Output Register
#define GPIOA_PDIR                    (*((volatile uint32_t *)0x400FF010))      // Port Data Input Register
#define GPIOA_PDDR                    (*((volatile uint32_t *)0x400FF014))      // Port Data Direction Register
#define GPIOB_PDOR                    (*((volatile uint32_t *)0x400FF040))      // Port Data Output Register
#define GPIOB_PSOR                    (*((volatile uint32_t *)0x400FF044))      // Port Set Output Register
#define GPIOB_PCOR                    (*((volatile uint32_t *)0x400FF048))      // Port Clear Output Register
#define GPIOB_PTOR                    (*((volatile uint32_t *)0x400FF04C))      // Port Toggle Output Register
#define GPIOB_PDIR                    (*((volatile uint32_t *)0x400FF050))      // Port Data Input Register
#define GPIOB_PDDR                    (*((volatile uint32_t *)0x400FF054))      // Port Data Direction Register
#define GPIOC_PDOR                    (*((volatile uint32_t *)0x400FF080))      // Port Data Output Register
#define GPIOC_PSOR                    (*((volatile uint32_t *)0x400FF084))      // Port Set Output Register
#define GPIOC_PCOR                    (*((volatile uint32_t *)0x400FF088))      // Port Clear Output Register
#define GPIOC_PTOR                    (*((volatile uint32_t *)0x400FF08C))      // Port Toggle Output Register
#define GPIOC_PDIR                    (*((volatile uint32_t *)0x400FF090))      // Port Data Input Register
#define GPIOC_PDDR                    (*((volatile uint32_t *)0x400FF094))      // Port Data Direction Register
#define GPIOD_PDOR                    (*((volatile uint32_t *)0x400FF0C0))      // Port Data Output Register
#define GPIOD_PSOR                    (*((volatile uint32_t *)0x400FF0C4))      // Port Set Output Register
#define GPIOD_PCOR                    (*((volatile uint32_t *)0x400FF0C8))      // Port Clear Output Register
#define GPIOD_PTOR                    (*((volatile uint32_t *)0x400FF0CC))      // Port Toggle Output Register
#define GPIOD_PDIR                    (*((volatile uint32_t *)0x400FF0D0))      // Port Data Input Register
#define GPIOD_PDDR                    (*((volatile uint32_t *)0x400FF0D4))      // Port Data Direction Register
#define GPIOE_PDOR                    (*((volatile uint32_t *)0x400FF100))      // Port Data Output Register
#define GPIOE_PSOR                    (*((volatile uint32_t *)0x400FF104))      // Port Set Output Register
#define GPIOE_PCOR                    (*((volatile uint32_t *)0x400FF108))      // Port Clear Output Register
#define GPIOE_PTOR                    (*((volatile uint32_t *)0x400FF10C))      // Port Toggle Output Register
#define GPIOE_PDIR                    (*((volatile uint32_t *)0x400FF110))      // Port Data Input Register
#define GPIOE_PDDR                    (*((volatile uint32_t *)0x400FF114))      // Port Data Direction Register


//*****************************************************************************
//
// Touch sense input (TSI) registers
//
//*****************************************************************************

#define TSI0_GENCS                    (*((volatile uint32_t *)0x40045000))      // General Control and Status Register (TSI0_GENCS)
#define TSI0_SCANC                    (*((volatile uint32_t *)0x40045004))      // SCAN control register (TSI0_SCANC)
#define TSI0_PEN                      (*((volatile uint32_t *)0x40045008))      // Pin enable register (TSI0_PEN)
#define TSI0_STATUS                   (*((volatile uint32_t *)0x4004500C))      // Status Register (TSI0_STATUS)
#define TSI0_CNTR1                    (*((volatile uint32_t *)0x40045100))      // Counter Register (TSI0_CNTR1)
#define TSI0_CNTR3                    (*((volatile uint32_t *)0x40045104))      // Counter Register (TSI0_CNTR3)
#define TSI0_CNTR5                    (*((volatile uint32_t *)0x40045108))      // Counter Register (TSI0_CNTR5)
#define TSI0_CNTR7                    (*((volatile uint32_t *)0x4004510C))      // Counter Register (TSI0_CNTR7)
#define TSI0_CNTR9                    (*((volatile uint32_t *)0x40045110))      // Counter Register (TSI0_CNTR9)
#define TSI0_CNTR11                   (*((volatile uint32_t *)0x40045114))      // Counter Register (TSI0_CNTR11)
#define TSI0_CNTR13                   (*((volatile uint32_t *)0x40045118))      // Counter Register (TSI0_CNTR13)
#define TSI0_CNTR15                   (*((volatile uint32_t *)0x4004511C))      // Counter Register (TSI0_CNTR15)
#define TSI0_THRESHLD0                (*((volatile uint32_t *)0x40045120))      // Channel n threshold register (TSI0_THRESHLD0)
#define TSI0_THRESHLD1                (*((volatile uint32_t *)0x40045124))      // Channel n threshold register (TSI0_THRESHLD1)
#define TSI0_THRESHLD2                (*((volatile uint32_t *)0x40045128))      // Channel n threshold register (TSI0_THRESHLD2)
#define TSI0_THRESHLD3                (*((volatile uint32_t *)0x4004512C))      // Channel n threshold register (TSI0_THRESHLD3)
#define TSI0_THRESHLD4                (*((volatile uint32_t *)0x40045130))      // Channel n threshold register (TSI0_THRESHLD4)
#define TSI0_THRESHLD5                (*((volatile uint32_t *)0x40045134))      // Channel n threshold register (TSI0_THRESHLD5)
#define TSI0_THRESHLD6                (*((volatile uint32_t *)0x40045138))      // Channel n threshold register (TSI0_THRESHLD6)
#define TSI0_THRESHLD7                (*((volatile uint32_t *)0x4004513C))      // Channel n threshold register (TSI0_THRESHLD7)
#define TSI0_THRESHLD8                (*((volatile uint32_t *)0x40045140))      // Channel n threshold register (TSI0_THRESHLD8)
#define TSI0_THRESHLD9                (*((volatile uint32_t *)0x40045144))      // Channel n threshold register (TSI0_THRESHLD9)
#define TSI0_THRESHLD10               (*((volatile uint32_t *)0x40045148))      // Channel n threshold register (TSI0_THRESHLD10)
#define TSI0_THRESHLD11               (*((volatile uint32_t *)0x4004514C))      // Channel n threshold register (TSI0_THRESHLD11)
#define TSI0_THRESHLD12               (*((volatile uint32_t *)0x40045150))      // Channel n threshold register (TSI0_THRESHLD12)
#define TSI0_THRESHLD13               (*((volatile uint32_t *)0x40045154))      // Channel n threshold register (TSI0_THRESHLD13)
#define TSI0_THRESHLD14               (*((volatile uint32_t *)0x40045158))      // Channel n threshold register (TSI0_THRESHLD14)
#define TSI0_THRESHLD15               (*((volatile uint32_t *)0x4004515C))      // Channel n threshold register (TSI0_THRESHLD15)



//*****************************************************************************
//
// The following are defines for the bit fields in the PORTx_PCRn register.
//
//*****************************************************************************

#define ISF                           0x01000000      // Interrupt Status Flag
#define IRQC                          0x00780000      // Interrupt Configuration
#define LK                            0x00008000      // Lock Register
#define MUX                           0x00001C00      // Pin Mux Control
#define DSE                           0x00000040      // Drive Strength Enable
#define ODE                           0x00000020      // Open Drain Enable
#define PFE                           0x00000010      // Passive Filter Enable
#define SRE                           0x00000004      // Slew Rate Enable
#define PE                            0x00000002      // Pull Enable
#define PS                            0x00000001      // Pull Select


//*****************************************************************************
//
// The following are defines for the bit fields in the PORTx_GPCLR register.
//
//*****************************************************************************

#define GPWE                          0x7FFF80000000      // Global Pin Write Enable
#define GPWD                          0x7FFF8000      // Global Pin Write Data


//*****************************************************************************
//
// The following are defines for the bit fields in the PORTx_GPCHR register.
//
//*****************************************************************************

#define GPWE                          0x7FFF80000000      // Global Pin Write Enable
#define GPWD                          0x7FFF8000      // Global Pin Write Data


//*****************************************************************************
//
// The following are defines for the bit fields in the PORTx_ISFR register.
//
//*****************************************************************************

#define ISF                           0x7FFFFFFF80000000      // Interrupt Status Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the PORTx_DFER register.
//
//*****************************************************************************

#define DFE                           0x7FFFFFFF80000000      // Digital Filter Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PORTx_DFCR register.
//
//*****************************************************************************

#define CS                            0x00000001      // Clock Source


//*****************************************************************************
//
// The following are defines for the bit fields in the PORTx_DFWR register.
//
//*****************************************************************************

#define FILT                          0x7FFFFFFF80000000      // Digital Filter Width


//*****************************************************************************
//
// The following are defines for the bit fields in the PMC_LVDSC2 register.
//
//*****************************************************************************

#define LVWF                          0x00000080      // Low-Voltage Warning Flag
#define LVWACK                        0x00000040      // Low-Voltage Warning Acknowledge
#define LVWIE                         0x00000020      // Low-Voltage Warning Interrupt Enable
#define LVWV                          0x00000006      // Low-Voltage Warning Voltage Select


//*****************************************************************************
//
// The following are defines for the bit fields in the PMC_REGSC register.
//
//*****************************************************************************

#define VLPRS                         0x00000008      // Very Low Power Run Status
#define REGONS                        0x00000004      // Regulator in Run Regulation Status
#define BGBE                          0x00000001      // Bandgap Buffer Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE2 register.
//
//*****************************************************************************

#define WUPE7                         0x00000180      // Wakeup Pin Enable for LLWU_P7
#define WUPE6                         0x00000060      // Wakeup Pin Enable for LLWU_P6
#define WUPE5                         0x00000018      // Wakeup Pin Enable for LLWU_P5
#define WUPE4                         0x00000006      // Wakeup Pin Enable for LLWU_P4


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE3 register.
//
//*****************************************************************************

#define WUPE11                        0x00000180      // Wakeup Pin Enable for LLWU_P11
#define WUPE10                        0x00000060      // Wakeup Pin Enable for LLWU_P10
#define WUPE9                         0x00000018      // Wakeup Pin Enable for LLWU_P9
#define WUPE8                         0x00000006      // Wakeup Pin Enable for LLWU_P8


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE4 register.
//
//*****************************************************************************

#define WUPE15                        0x00000180      // Wakeup Pin Enable for LLWU_P15
#define WUPE14                        0x00000060      // Wakeup Pin Enable for LLWU_P14
#define WUPE13                        0x00000018      // Wakeup Pin Enable for LLWU_P13
#define WUPE12                        0x00000006      // Wakeup Pin Enable for LLWU_P12


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_ME register.
//
//*****************************************************************************

#define WUME7                         0x00000080      // Wakeup Module Enable for Module 7
#define WUME6                         0x00000040      // Wakeup Module Enable for Module 6
#define WUME5                         0x00000020      // Wakeup Module Enable for Module 5
#define WUME4                         0x00000010      // Wakeup Module Enable for Module 4
#define WUME3                         0x00000008      // Wakeup Module Enable for Module 3
#define WUME2                         0x00000004      // Wakeup Module Enable for Module 2
#define WUME1                         0x00000002      // Wakeup Module Enable for Module 1
#define WUME0                         0x00000001      // Wakeup Module Enable for Module 0


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_F1 register.
//
//*****************************************************************************

#define WUF7                          0x00000080      // Wakeup Flag for LLWU_P7
#define WUF6                          0x00000040      // Wakeup Flag for LLWU_P6
#define WUF5                          0x00000020      // Wakeup Flag for LLWU_P5
#define WUF4                          0x00000010      // Wakeup Flag for LLWU_P4
#define WUF3                          0x00000008      // Wakeup Flag for LLWU_P3
#define WUF2                          0x00000004      // Wakeup Flag for LLWU_P2
#define WUF1                          0x00000002      // Wakeup Flag for LLWU_P1
#define WUF0                          0x00000001      // Wakeup Flag for LLWU_P0


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_F2 register.
//
//*****************************************************************************

#define WUF15                         0x00000080      // Wakeup Flag for LLWU_P15
#define WUF14                         0x00000040      // Wakeup Flag for LLWU_P14
#define WUF13                         0x00000020      // Wakeup Flag for LLWU_P13
#define WUF12                         0x00000010      // Wakeup Flag for LLWU_P12
#define WUF11                         0x00000008      // Wakeup Flag for LLWU_P11
#define WUF10                         0x00000004      // Wakeup Flag for LLWU_P10
#define WUF9                          0x00000002      // Wakeup Flag for LLWU_P9
#define WUF8                          0x00000001      // Wakeup Flag for LLWU_P8


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_F3 register.
//
//*****************************************************************************

#define MWUF7                         0x00000080      // Wakeup flag for module 7 (Error Detect)
#define MWUF6                         0x00000040      // Wakeup flag for module 6
#define MWUF5                         0x00000020      // Wakeup flag for module 5
#define MWUF4                         0x00000010      // Wakeup flag for module 4
#define MWUF3                         0x00000008      // Wakeup flag for module 3
#define MWUF2                         0x00000004      // Wakeup flag for module 2
#define MWUF1                         0x00000002      // Wakeup flag for module 1
#define MWUF0                         0x00000001      // Wakeup flag for module 0


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_PLASC register.
//
//*****************************************************************************

#define ASC                           0x00007F80      // Each bit in the ASC field indicates if there is a corresponding connection to the crossbar switch's slave input port.


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_PLAMC register.
//
//*****************************************************************************

#define AMC                           0x00007F80      // Each bit in the AMC field indicates if there is a corresponding connection to the AXBS master input port.


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_SRAMAP register.
//
//*****************************************************************************

#define SRAMLWP                       0x40000000      // SRAM_L write protect
#define SRAMLAP                       0x60000000      // SRAM_L arbitration priority
#define SRAMUWP                       0x04000000      // SRAM_U write protect
#define SRAMUAP                       0x06000000      // SRAM_U arbitration priority


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_ISR register.
//
//*****************************************************************************

#define NMI                           0x00000004      // Non-maskable interrupt pending
#define IRQ                           0x00000002      // Normal interrupt pending


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_ETBCC register.
//
//*****************************************************************************

#define ITDIS                         0x00000020      // ITM-to-TPIU disable
#define ETDIS                         0x00000010      // ETM-to-TPIU disable
#define RLRQ                          0x00000008      // Reload request
#define RSPT                          0x0000000C      // Response type
#define CNTEN                         0x00000001      // Counter enable


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_ETBRL register.
//
//*****************************************************************************

#define RELOAD                        0x001FFC00      // Byte count reload value


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_ETBCNT register.
//
//*****************************************************************************

#define COUNTER                       0x001FFC00      // Byte count counter value ::


//*****************************************************************************
//
// The following are defines for the bit fields in the AXBS_PRSn register.
//
//*****************************************************************************

#define M7                            0x1C0000000      // Master 7 priority. Sets the arbitration priority for this port on the associated slave port.
#define M6                            0x1C000000      // Master 6 priority. Sets the arbitration priority for this port on the associated slave port.
#define M5                            0x01C00000      // Master 5 priority. Sets the arbitration priority for this port on the associated slave port.
#define M4                            0x001C0000      // Master 4 priority. Sets the arbitration priority for this port on the associated slave port.
#define M3                            0x0001C000      // Master 3 priority. Sets the arbitration priority for this port on the associated slave port.
#define M2                            0x00001C00      // Master 2 priority. Sets the arbitration priority for this port on the associated slave port.
#define M1                            0x000001C0      // Master 1 priority. Sets the arbitration priority for this port on the associated slave port.
#define M0                            0x0000001C      // Master 0 priority. Sets the arbitration priority for this port on the associated slave port.


//*****************************************************************************
//
// The following are defines for the bit fields in the AXBS_CRSn register.
//
//*****************************************************************************

#define RO                            0x80000000      // Forces the slave port’s CSRn and PRSn registers to be read-only. After set, only a hardware reset clears it.
#define HLP                           0x40000000      // Sets the initial arbitration priority for low power mode requests. Setting this bit will not effect the request for low power mode from attaining highest priority once it has control of the slave ports.
#define ARB                           0x00000600      // Selects the arbitration policy for the slave port.
#define PCTL                          0x00000060      // Determines the slave port’s parking control. The low-power park feature results in an overall power savings if the slave port is not saturated. However, this forces an extra latency clock when any master tries to access the slave port while not in use because it is not parked on any master.
#define PARK                          0x0000001C      // Determines which master port the current slave port parks on when no masters are actively making requests and the PCTL bits are cleared.


//*****************************************************************************
//
// The following are defines for the bit fields in the AXBS_MGPCRn register.
//
//*****************************************************************************

#define AULB                          0x0000001C      // Determines whether, and when, the crossbar switch arbitrates away the slave port the master owns when the master is performing undefined length burst accesses.


//*****************************************************************************
//
// The following are defines for the bit fields in the MPU_CESR register.
//
//*****************************************************************************

#define SPERR                         0xF80000000      // Slave port n error
#define Reserved                      0x00800000      // This read-only field is reserved and always has the value one
#define HRL                           0x00780000      // Hardware revision level
#define NSP                           0x00007800      // Number of slave ports
#define NRGD                          0x00000780      // Number of region descriptors
#define VLD                           0x00000001      // Valid (global enable/disable for the MPU)


//*****************************************************************************
//
// The following are defines for the bit fields in the MPU_EARn register.
//
//*****************************************************************************

#define EADDR                         0x7FFFFFFF80000000      // Error address


//*****************************************************************************
//
// The following are defines for the bit fields in the MPU_EDRn register.
//
//*****************************************************************************

#define EACD                          0x7FFF80000000      // Error access control detail
#define EMN                           0x00000780      // Error master number
#define EATTR                         0x00000038      // Error attributes
#define ERW                           0x00000001      // Error read/write


//*****************************************************************************
//
// The following are defines for the bit fields in the MPU_RGDn_WORD0 register.
//
//*****************************************************************************

#define SRTADDR                       0x3FFFFFF80000000      // Start address


//*****************************************************************************
//
// The following are defines for the bit fields in the MPU_RGDn_WORD1 register.
//
//*****************************************************************************

#define ENDADDR                       0x3FFFFFF80000000      // End address


//*****************************************************************************
//
// The following are defines for the bit fields in the MPU_RGDn_WORD2 register.
//
//*****************************************************************************

#define M7RE                          0x80000000      // Bus master 7 read enable
#define M7WE                          0x40000000      // Bus master 7 write enable
#define M6RE                          0x20000000      // Bus master 6 read enable
#define M6WE                          0x10000000      // Bus master 6 write enable
#define M5RE                          0x08000000      // Bus master 5 read enable
#define M5WE                          0x04000000      // Bus master 5 write enable
#define M4RE                          0x02000000      // Bus master 4 read enable
#define M4WE                          0x01000000      // Bus master 4 write enable
#define M3SM                          0x00C00000      // Bus master 3 supervisor mode access control
#define M3UM                          0x00700000      // Bus master 3 user mode access control
#define M2SM                          0x00030000      // Bus master 2 supervisor mode access control
#define M2UM                          0x0001C000      // Bus master 2 user mode access control
#define M1SM                          0x00000C00      // Bus master 1 supervisor mode access control
#define M1UM                          0x00000700      // Bus master 1 user mode access control
#define M0SM                          0x00000030      // Bus master 0 supervisor mode access control
#define M0UM                          0x0000001C      // Bus master 0 user mode access control


//*****************************************************************************
//
// The following are defines for the bit fields in the MPU_RGDn_WORD3 register.
//
//*****************************************************************************

#define VLD                           0x00000001      // Valid


//*****************************************************************************
//
// The following are defines for the bit fields in the MPU_RGDAACn register.
//
//*****************************************************************************

#define M7RE                          0x80000000      // Bus master 7 read enable
#define M7WE                          0x40000000      // Bus master 7 write enable
#define M6RE                          0x20000000      // Bus master 6 read enable
#define M6WE                          0x10000000      // Bus master 6 write enable
#define M5RE                          0x08000000      // Bus master 5 read enable
#define M5WE                          0x04000000      // Bus master 5 write enable
#define M4RE                          0x02000000      // Bus master 4 read enable
#define M4WE                          0x01000000      // Bus master 4 write enable
#define M3SM                          0x00C00000      // Bus master 3 supervisor mode access control
#define M3UM                          0x00700000      // Bus master 3 user mode access control
#define M2SM                          0x00030000      // Bus master 2 supervisor mode access control
#define M2UM                          0x0001C000      // Bus master 2 user mode access control
#define M1SM                          0x00000C00      // Bus master 1 supervisor mode access control
#define M1UM                          0x00000700      // Bus master 1 user mode access control
#define M0SM                          0x00000030      // Bus master 0 supervisor mode access control
#define M0UM                          0x0000001C      // Bus master 0 user mode access control


//*****************************************************************************
//
// The following are defines for the bit fields in the AIPSx_MPRA register.
//
//*****************************************************************************

#define MTR0                          0x40000000      // Master trusted for read
#define MTW0                          0x20000000      // Master trusted for writes
#define MPL0                          0x10000000      // Master privilege level
#define MTR1                          0x04000000      // Master trusted for read
#define MTW1                          0x02000000      // Master trusted for writes
#define MPL1                          0x01000000      // Master privilege level
#define MTR2                          0x00400000      // Master trusted for read
#define MTW2                          0x00200000      // Master trusted for writes
#define MPL2                          0x00100000      // Master privilege level
#define MTR3                          0x00040000      // Master trusted for read
#define MTW3                          0x00020000      // Master trusted for writes
#define MPL3                          0x00010000      // Master privilege level
#define MTR4                          0x00004000      // Master trusted for read
#define MTW4                          0x00002000      // Master trusted for writes
#define MPL4                          0x00001000      // Master privilege level
#define MTR5                          0x00000400      // Master trusted for read
#define MTW5                          0x00000200      // Master trusted for writes
#define MPL5                          0x00000100      // Master privilege level


//*****************************************************************************
//
// The following are defines for the bit fields in the AIPSx_PACRn register.
//
//*****************************************************************************

#define SP0                           0x40000000      // Supervisor protect
#define WP0                           0x20000000      // Write protect
#define TP0                           0x10000000      // Trusted protect
#define SP1                           0x04000000      // Supervisor protect
#define WP1                           0x02000000      // Write protect
#define TP1                           0x01000000      // Trusted protect
#define SP2                           0x00400000      // Supervisor protect
#define WP2                           0x00200000      // Write protect
#define TP2                           0x00100000      // Trusted protect
#define SP3                           0x00040000      // Supervisor protect
#define WP3                           0x00020000      // Write protect
#define TP3                           0x00010000      // Trusted protect
#define SP4                           0x00004000      // Supervisor protect
#define WP4                           0x00002000      // Write protect
#define TP4                           0x00001000      // Trusted protect
#define SP5                           0x00000400      // Supervisor protect
#define WP5                           0x00000200      // Write protect
#define TP5                           0x00000100      // Trusted protect
#define SP6                           0x00000040      // Supervisor protect
#define WP6                           0x00000020      // Write protect
#define TP6                           0x00000010      // Trusted protect
#define SP7                           0x00000004      // Supervisor protect
#define WP7                           0x00000002      // Write protect
#define TP7                           0x00000001      // Trusted protect


//*****************************************************************************
//
// The following are defines for the bit fields in the DMAMUX_CHCFGn register.
//
//*****************************************************************************

#define ENBL                          0x00000080      // Channel enable
#define TRIG                          0x00000040      // Trigger configuration
#define SOURCE                        0x000007E0      // Source selection


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CR register.
//
//*****************************************************************************

#define CX                            0x00020000      // Cancel Transfer
#define ECX                           0x00010000      // Error Cancel Transfer
#define Reserved                      0x007F8000      // This read-only field is reserved and always has the value zero
#define EMLM                          0x00000080      // Enable Minor Loop Mapping
#define CLM                           0x00000040      // Continuous Link Mode
#define HALT                          0x00000020      // Halt DMA Operations
#define HOE                           0x00000010      // Halt On Error
#define ERCA                          0x00000004      // Enable Round Robin Channel Arbitration
#define EDBG                          0x00000002      // Enable Debug


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_ES register.
//
//*****************************************************************************

#define VLD                           0x80000000      // Logical OR of all ERR status bits
#define ECX                           0x00010000      // Transfer Cancelled
#define CPE                           0x00004000      // Channel Priority Error
#define ERRCHN                        0x00007800      // Error Channel Number or Cancelled Channel Number
#define SAE                           0x00000080      // Source Address Error
#define SOE                           0x00000040      // Source Offset Error
#define DAE                           0x00000020      // Destination Address Error
#define DOE                           0x00000010      // Destination Offset Error
#define NCE                           0x00000008      // NBYTES/CITER Configuration Error
#define SGE                           0x00000004      // Scatter/Gather Configuration Error
#define SBE                           0x00000002      // Source Bus Error
#define DBE                           0x00000001      // Destination Bus Error


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_ERQ register.
//
//*****************************************************************************

#define ERQn                          0x7FFF8000      // Enable DMA Request n


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_EEI register.
//
//*****************************************************************************

#define EEIn                          0x7FFF8000      // Enable Error Interrupt n


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CEEI register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation, ignore the other bits in this register
#define CAEE                          0x00000040      // Clear All Enable Error Interrupts
#define CEEI                          0x00000078      // Clear Enable Error Interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_SEEI register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation, ignore the other bits in this register
#define SAEE                          0x00000040      // Sets All Enable Error Interrupts
#define SEEI                          0x00000078      // Set Enable Error Interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CERQ register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation, ignore the other bits in this register
#define CAER                          0x00000040      // Clear All Enable Requests
#define CERQ                          0x00000078      // Clear Enable Request


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_SERQ register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation, ignore the other bits in this register
#define SAER                          0x00000040      // Set All Enable Requests
#define SERQ                          0x00000078      // Set enable request


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CDNE register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation, ignore the other bits in this register
#define CADN                          0x00000040      // Clears All DONE Bits
#define CDNE                          0x00000078      // Clear DONE Bit


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_SSRT register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation, ignore the other bits in this register
#define SAST                          0x00000040      // Set All START Bits (activates all channels)
#define SSRT                          0x00000078      // Set START Bit


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CERR register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation, ignore the other bits in this register
#define CAEI                          0x00000040      // Clear All Error Indicators
#define CERR                          0x00000078      // Clear Error Indicator


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CINT register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation, ignore the other bits in this register
#define CAIR                          0x00000040      // Clear All Interrupt Requests
#define CINT                          0x00000078      // Clear Interrupt Request


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_INT register.
//
//*****************************************************************************

#define INTn                          0x7FFF8000      // Interrupt Request n


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_ERR register.
//
//*****************************************************************************

#define ERRn                          0x7FFF8000      // Error In Channel n


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_HRS register.
//
//*****************************************************************************

#define HRSn                          0x7FFF8000      // Hardware Request Status Channel n


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_DCHPRIn register.
//
//*****************************************************************************

#define ECP                           0x00000080      // Enable Channel Preemption
#define DPA                           0x00000040      // Disable Preempt Ability
#define CHPRI                         0x00000078      // Channel n Arbitration Priority


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_SADDR register.
//
//*****************************************************************************

#define SADDR                         0x7FFFFFFF80000000      // Source Address


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_SOFF register.
//
//*****************************************************************************

#define SOFF                          0x7FFF8000      // Source address signed offset


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_ATTR register.
//
//*****************************************************************************

#define SMOD                          0x000F8000      // Source Address Modulo
#define SSIZE                         0x00001C00      // Source data transfer size
#define DMOD                          0x00000F80      // Destination Address Modulo
#define DSIZE                         0x0000001C      // Destination Data Transfer Size


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_NBYTES_MLNO register.
//
//*****************************************************************************

#define NBYTES                        0x7FFFFFFF80000000      // Minor Byte Transfer Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_NBYTES_MLOFFNO register.
//
//*****************************************************************************

#define SMLOE                         0x80000000      // Source Minor Loop Offset Enable
#define DMLOE                         0x40000000      // Destination Minor Loop Offset enable
#define NBYTES                        0x7FFFFFFE0000000      // Minor Byte Transfer Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_NBYTES_MLOFFYES register.
//
//*****************************************************************************

#define SMLOE                         0x80000000      // Source Minor Loop Offset Enable
#define DMLOE                         0x40000000      // Destination Minor Loop Offset enable
#define MLOFF                         0x1FFFFE0000000      // If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes
#define NBYTES                        0x0007FE00      // Minor Byte Transfer Count
#define MLOFF                         0x1FFFFE0000000      // Minor loop offset


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_SLAST register.
//
//*****************************************************************************

#define SLAST                         0x7FFFFFFF80000000      // Last source Address Adjustment


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_DADDR register.
//
//*****************************************************************************

#define DADDR                         0x7FFFFFFF80000000      // Destination Address


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_DOFF register.
//
//*****************************************************************************

#define DOFF                          0x7FFF8000      // Destination Address Signed offset


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_CITER_ELINKYES register.
//
//*****************************************************************************

#define ELINK                         0x00008000      // Enable channel-to-channel linking on minor-loop complete
#define Reserved                      0x0000C000      // This read-only field is reserved and always has the value zero
#define LINKCH                        0x0000F000      // Link Channel Number
#define CITER                         0x0001FF00      // Current Major Iteration Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_CITER_ELINKNO register.
//
//*****************************************************************************

#define ELINK                         0x00008000      // Enable channel-to-channel linking on minor-loop complete
#define CITER                         0x1FFFC000      // Current Major Iteration Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_DLASTSGA register.
//
//*****************************************************************************

#define DLASTSGA                      0x7FFFFFFF80000000      // Destination last address adjustment or the memory address for the next transfer control descriptor to be loaded into this channel (scatter/gather)


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_CSR register.
//
//*****************************************************************************

#define BWC                           0x00018000      // Bandwidth Control
#define Reserved                      0x00006000      // This read-only field is reserved and always has the value zero
#define MAJORLINKCH                   0x00007800      // Link Channel Number
#define DONE                          0x00000080      // Channel Done
#define ACTIVE                        0x00000040      // Channel Active
#define MAJORELINK                    0x00000020      // Enable channel-to-channel linking on major loop complete
#define ESG                           0x00000010      // Enable Scatter/Gather Processing
#define DREQ                          0x00000008      // Disable Request
#define INTHALF                       0x00000004      // Enable an interrupt when major counter is half complete
#define INTMAJOR                      0x00000002      // Enable an interrupt when major iteration count completes
#define START                         0x00000001      // Channel Start
#define MAJORLINKCH                   0x00007800      // Link Channel Number


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_BITER_ELINKYES register.
//
//*****************************************************************************

#define ELINK                         0x00008000      // Enables channel-to-channel linking on minor loop complete
#define Reserved                      0x0000C000      // This read-only field is reserved and always has the value zero
#define LINKCH                        0x0000F000      // Link Channel Number
#define BITER                         0x0001FF00      // Starting Major Iteration Count
#define LINKCH                        0x0000F000      // Link Channel Number
#define BITER                         0x0001FF00      // Starting Major Iteration Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_BITER_ELINKNO register.
//
//*****************************************************************************

#define ELINK                         0x00008000      // Enables channel-to-channel linking on minor loop complete
#define BITER                         0x1FFFC000      // Starting Major Iteration Count
#define BITER                         0x1FFFC000      // Starting Major Iteration Count


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_SERV register.
//
//*****************************************************************************

#define SERVICE                       0x00007F80      // The EWM service mechanism requires the CPU to write two values to the SERV register: a first data byte of 0xB4, followed by a second data byte of 0x2C. The EWM service is illegal if either of the following conditions is true.;; The first or second data byte is not written correctly.;; The second data byte is not written within a fixed number of peripheral bus cycles of the first data byte. This fixed number of cycles is called EWM_service_time.


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_CMPL register.
//
//*****************************************************************************

#define COMPAREL                      0x00007F80      // To prevent runaway code from changing this field, software should  write  to  this  field  after  a  CPU  reset even if the (default) minimum service time is required.


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_CTRL register.
//
//*****************************************************************************

#define INEN                          0x00000004      // Input Enable.;; This bit when set, enables the EWM_in port.
#define ASSIN                         0x00000002      // EWM_in's Assertion State Select.;; Default assert state of the EWM_in signal is logic zero. Setting ASSIN bit inverts the assert state to a logic one.
#define EWMEN                         0x00000001      // EWM enable.;; This bit when set, enables the EWM module. This resets the EWM counter to zero and deasserts the EWM_out signal. Clearing EWMEN bit disables the EWM, and therefore it cannot be enabled until a reset occurs, due to the write-once nature of this bit.


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_CMPH register.
//
//*****************************************************************************

#define COMPAREH                      0x00007F80      // The valid values for CMPH are up to 0xFE because the EWM counter never expires when CMPH = 0xFF. The expiration happens only if EWM counter is greater than CMPH.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_STCTRLH register.
//
//*****************************************************************************

#define DISTESTWDOG                   0x00004000      // Allows the WDOG’s functional test mode to be disabled permanently. Once set, it can only be cleared by a reset. It cannot be unlocked for editing once it is set.
#define BYTESEL[1:0]                  0x00006000      // This 2-bit field select the byte to be tested when the watchdog is in the byte test mode.
#define TESTSEL                       0x00000800      // Selects the test to be run on the watchdog timer. Effective only if TESTWDOG is set.
#define TESTWDOG                      0x00000400      // Puts the watchdog in the functional test mode. In this mode the watchdog timer and the associated compare and reset generation logic is tested for correct operation. The clock for the timer is switched from the main watchdog clock to the fast clock input for watchdog functional test. The TESTSEL bit selects the test to be run.
#define STNDBYEN                      0x00000100      // Enables or disables WDOG in Standby mode.
#define WAITEN                        0x00000080      // Enables or disables WDOG in wait mode.
#define STOPEN                        0x00000040      // Enables or disables WDOG in stop mode.
#define DBGEN                         0x00000020      // Enables or disables WDOG in Debug mode.
#define ALLOWUPDATE                   0x00000010      // Enables updates to watchdog write once registers, after initial configuration window (WCT) closes, through unlock sequence.
#define WINEN                         0x00000008      // Enable windowing mode.
#define IRQRSTEN                      0x00000004      // Used to enable the debug breadcrumbs feature. A change in this bit is updated immediately, as opposed to updating after WCT.
#define CLKSRC                        0x00000002      // Selects clock source for the WDOG timer and other internal timing operations.
#define WDOGEN                        0x00000001      // Enables or disables the WDOG’s operation. In the disabled state, the watchdog timer is kept in the reset state, but the other exception conditions can still trigger a reset/interrupt. A change in the value of this bit must be held for more than one WDOG_CLK cycle for the WDOG to be enabled or disabled.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_STCTRLL register.
//
//*****************************************************************************

#define INTFLG                        0x00008000      // Interrupt flag. It is set when an exception occurs. IRQRSTEN = 1 is a precondition to set this flag. INTFLG = 1 results in an interrupt being issued followed by a reset, WCT time later. The interrupt can be cleared by writing 1 to this bit. It also gets cleared on a system reset.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_TOVALH register.
//
//*****************************************************************************

#define TOVALHIGH                     0x7FFF8000      // Defines the upper 16 bits of the 32-bit time-out value for the watchdog timer. It is defined in terms of cycles of the watchdog clock.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_TOVALL register.
//
//*****************************************************************************

#define TOVALLOW                      0x7FFF8000      // Defines the lower 16 bits of the 32-bit time-out value for the watchdog timer. It is defined in terms of cycles of the watchdog clock.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_WINH register.
//
//*****************************************************************************

#define WINHIGH                       0x7FFF8000      // Defines the upper 16 bits of the 32-bit window for the windowed mode of operation of the watchdog. It is defined in terms of cycles of the watchdog clock. In this mode the watchdog can be refreshed only when the timer has reached a value greater than or equal to this window length. A refresh outside this window resets the system or if IRQRSTEN is set, it interrupts and then resets the system.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_WINL register.
//
//*****************************************************************************

#define WINLOW                        0x7FFF8000      // Defines the lower 16 bits of the 32-bit window for the windowed mode of operation of the watchdog. It is defined in terms of cycles of the pre-scaled watchdog clock. In this mode, the watchdog can be refreshed only when the timer reaches a value greater than or equal to this window length value. A refresh outside this window resets the system or if IRQRSTEN is set, it interrupts and then resets the system.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_REFRESH register.
//
//*****************************************************************************

#define WDOGREFRESH                   0x7FFF8000      // Watchdog refresh register. A sequence of 0xA602 followed by 0xB480 within 20 bus clock cycles when written to this register, refreshes the WDOG and prevents it from resetting the system. Writing a value other than the above mentioned sequence or if the sequence is longer than 20 bus cycles, resets the system or if IRQRSTEN is set, it interrupts and then resets the system).


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_UNLOCK register.
//
//*****************************************************************************

#define WDOGUNLOCK                    0x7FFF8000      // You can write the unlock sequence values to this register to make the watchdog write once registers writable again. The required unlock sequence is 0xC520 followed by 0xD928 within 20 bus clock cycles. A valid unlock sequence opens up a window equal in length to the WCT within which you can update the registers. Writing a value other than the above mentioned sequence or if the sequence is longer than 20 bus cycles, resets the system or if IRQRSTEN is set, it interrupts and then resets the system). The unlock sequence is effective only if ALLOWUPDATE is set.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_TMROUTH register.
//
//*****************************************************************************

#define TIMEROUTHIGH                  0x7FFF8000      // Shows the value of the upper 16 bits of the watchdog timer.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_TMROUTL register.
//
//*****************************************************************************

#define TIMEROUTLOW                   0x7FFF8000      // Shows the value of the lower 16 bits of the watchdog timer.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_RSTCNT register.
//
//*****************************************************************************

#define RSTCNT                        0x7FFF8000      // Counts the number of times the watchdog resets the system. This register is reset only on a POR. Writing 1 to the bit to be cleared, enables you to clear the contents of this register.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_PRESC register.
//
//*****************************************************************************

#define PRESCVAL                      0x00001C00      // 3-bit prescaler for the watchdog clock source. A value of zero indicates no division of the input WDOG clock. The watchdog clock is divided by (PRESCVAL + 1) to provide the prescaled WDOG_CLK. ::


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C1 register.
//
//*****************************************************************************

#define CLKS                          0x00000180      // Clock Source Select
#define FRDIV                         0x000000E0      // FLL External Reference Divider
#define IREFS                         0x00000004      // Internal Reference Select
#define IRCLKEN                       0x00000002      // Internal Reference Clock Enable
#define IREFSTEN                      0x00000001      // Internal Reference Stop Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C2 register.
//
//*****************************************************************************

#define RANGE                         0x00000060      // Frequency Range Select
#define HGO                           0x00000008      // High Gain Oscillator Select
#define EREFS                         0x00000004      // External Reference Select
#define LP                            0x00000002      // Low Power Select
#define IRCS                          0x00000001      // Internal Reference Clock Select


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C3 register.
//
//*****************************************************************************

#define SCTRIM                        0x00007F80      // Slow Internal Reference Clock Trim Setting


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C4 register.
//
//*****************************************************************************

#define DMX32                         0x00000080      // DCO Maximum Frequency with 32.768 kHz Reference
#define DRST_DRS                      0x000000C0      // DCO Range Select
#define FCTRIM                        0x000000F0      // Fast Internal Reference Clock Trim Setting
#define SCFTRIM                       0x00000001      // Slow Internal Reference Clock Fine Trim


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C5 register.
//
//*****************************************************************************

#define PLLCLKEN                      0x00000040      // PLL Clock Enable
#define PLLSTEN                       0x00000020      // PLL Stop Enable
#define PRDIV                         0x000001F0      // PLL External Reference Divider


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C6 register.
//
//*****************************************************************************

#define LOLIE                         0x00000080      // Loss of Lock Interrrupt Enable
#define PLLS                          0x00000040      // PLL Select
#define CME                           0x00000020      // Clock Monitor Enable
#define VDIV                          0x000001F0      // VCO Divider


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_S register.
//
//*****************************************************************************

#define LOLS                          0x00000080      // Loss of Lock Status
#define LOCK                          0x00000040      // Lock Status
#define PLLST                         0x00000020      // PLL Select Status
#define IREFST                        0x00000010      // Internal Reference Status
#define CLKST                         0x00000018      // Clock Mode Status
#define OSCINIT                       0x00000002      // OSC Initialization
#define IRCST                         0x00000001      // Internal Reference Clock Status


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_ATC register.
//
//*****************************************************************************

#define ATME                          0x00000080      // Automatic Trim Machine Enable
#define ATMS                          0x00000040      // Automatic Trim Machine Select
#define ATMF                          0x00000020      // Automatic Trim machine Fail Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_ATCVH register.
//
//*****************************************************************************

#define ATCVH                         0x00007F80      // ATM Compare Value High


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_ATCVL register.
//
//*****************************************************************************

#define ATCVL                         0x00007F80      // ATM Compare Value Low


//*****************************************************************************
//
// The following are defines for the bit fields in the OSC_CR register.
//
//*****************************************************************************

#define ERCLKEN                       0x00000080      // External Reference Enable
#define EREFSTEN                      0x00000040      // External Reference Stop Enable
#define SC2P                          0x00000020      // Oscillator 2P Gain Control
#define SC4P                          0x00000010      // Oscillator 4P Gain Control
#define SC8P                          0x00000008      // Oscillator 8P Gain Control
#define SC16P                         0x00000004      // Oscillator 16P Gain Control


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_PFAPR register.
//
//*****************************************************************************

#define M7PFD                         0x00800000      // Master 7 Prefetch Disable
#define M6PFD                         0x00400000      // Master 6 Prefetch Disable
#define M5PFD                         0x00200000      // Master 5 Prefetch Disable
#define M4PFD                         0x00100000      // Master 4 Prefetch Disable
#define M3PFD                         0x00080000      // Master 3 Prefetch Disable
#define M2PFD                         0x00040000      // Master 2 Prefetch Disable
#define M1PFD                         0x00020000      // Master 1 Prefetch Disable
#define M0PFD                         0x00010000      // Master 0 Prefetch Disable
#define M7AP[1:0]                     0x00018000      // Master 7 Access Protection
#define M6AP[1:0]                     0x00006000      // Master 6 Access Protection
#define M5AP[1:0]                     0x00001800      // Master 5 Access Protection
#define M4AP[1:0]                     0x00000600      // Master 4 Access Protection
#define M3AP[1:0]                     0x00000180      // Master 3 Access Protection
#define M2AP[1:0]                     0x00000060      // Master 2 Access Protection
#define M1AP[1:0]                     0x00000018      // Master 1 Access Protection
#define M0AP[1:0]                     0x00000006      // Master 0 Access Protection


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_PFB0CR register.
//
//*****************************************************************************

#define B0RWSC[3:0]                   0x780000000      // Bank 0 Read Wait State Control
#define CLCK_WAY[3:0]                 0x78000000      // Cache Lock Way x
#define CINV_WAY[3:0]                 0x07800000      // Cache Invalidate Way x
#define S_B_INV                       0x00080000      // Invalidate Prefetch Speculation Buffer
#define B0MW[1:0]                     0x000C0000      // Bank 0 Memory Width
#define CRC[2:0]                      0x00000380      // Cache Replacement Control
#define B0DCE                         0x00000010      // Bank 0 Data Cache Enable
#define B0ICE                         0x00000008      // Bank 0 Instruction Cache Enable
#define B0DPE                         0x00000004      // Bank 0 Data Prefetch Enable
#define B0IPE                         0x00000002      // Bank 0 Instruction Prefetch Enable
#define B0SEBE                        0x00000001      // Bank 0 Single Entry Buffer Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_PFB1CR register.
//
//*****************************************************************************

#define B1RWSC[3:0]                   0x780000000      // Bank 1 Read Wait State Control
#define CLCK_WAY[3:0]                 0x78000000      // Cache Lock Way x
#define CINV_WAY[3:0]                 0x07800000      // Cache Invalidate Way x
#define S_B_INV                       0x00080000      // Invalidate Prefetch Speculation Buffer
#define B1MW[1:0]                     0x000C0000      // Bank 1 Memory Width
#define CRC[2:0]                      0x00000380      // Cache Replacement Control
#define B1DCE                         0x00000010      // Bank 1 Data Cache Enable
#define B1ICE                         0x00000008      // Bank 1 Instruction Cache Enable
#define B1DPE                         0x00000004      // Bank 1 Data Prefetch Enable
#define B1IPE                         0x00000002      // Bank 1 Instruction Prefetch Enable
#define B1SEBE                        0x00000001      // Bank 1 Single Entry Buffer Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_TAGVDW0Sn register.
//
//*****************************************************************************

#define tag[18:6]                     0x7FFC0000      // 13-bit tag for cache entry
#define valid                         0x00000001      // 1-bit valid for cache entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_TAGVDW1Sn register.
//
//*****************************************************************************

#define tag[18:6]                     0x7FFC0000      // 13-bit tag for cache entry
#define valid                         0x00000001      // 1-bit valid for cache entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_TAGVDW2Sn register.
//
//*****************************************************************************

#define tag[18:6]                     0x7FFC0000      // 13-bit tag for cache entry
#define valid                         0x00000001      // 1-bit valid for cache entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_TAGVDW3Sn register.
//
//*****************************************************************************

#define tag[18:6]                     0x7FFC0000      // 13-bit tag for cache entry
#define valid                         0x00000001      // 1-bit valid for cache entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW0SnU register.
//
//*****************************************************************************

#define data[63:32]                   0x7FFFFFFF80000000      // Bits [63:32] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW0SnL register.
//
//*****************************************************************************

#define data[31:0]                    0x7FFFFFFF80000000      // Bits [31:0] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW1SnU register.
//
//*****************************************************************************

#define data[63:32]                   0x7FFFFFFF80000000      // Bits [63:32] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW1SnL register.
//
//*****************************************************************************

#define data[31:0]                    0x7FFFFFFF80000000      // Bits [31:0] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW2SnU register.
//
//*****************************************************************************

#define data[63:32]                   0x7FFFFFFF80000000      // Bits [63:32] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW2SnL register.
//
//*****************************************************************************

#define data[31:0]                    0x7FFFFFFF80000000      // Bits [31:0] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW3SnU register.
//
//*****************************************************************************

#define data[63:32]                   0x7FFFFFFF80000000      // Bits [63:32] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW3SnL register.
//
//*****************************************************************************

#define data[31:0]                    0x7FFFFFFF80000000      // Bits [31:0] of data entry ::
#define data[31:0]                    0x7FFFFFFF80000000      // Bits [31:0] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FTFL_FSTAT register.
//
//*****************************************************************************

#define CCIF                          0x00000080      // Command Complete Interrupt Flag
#define RDCOLERR                      0x00000040      // FTFL Read Collision Error Flag
#define ACCERR                        0x00000020      // Flash Access Error Flag
#define FPVIOL                        0x00000010      // Flash Protection Violation Flag
#define MGSTAT0                       0x00000001      // Memory Controller Command Completion Status Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the FTFL_FCNFG register.
//
//*****************************************************************************

#define CCIE                          0x00000080      // Command Complete Interrupt Enable
#define RDCOLLIE                      0x00000040      // Read Collision Error Interrupt Enable
#define ERSAREQ                       0x00000020      // Erase All Request
#define ERSSUSP                       0x00000010      // Erase Suspend
#define SWAP                          0x00000008      // Swap
#define PFLSH                         0x00000004      // FTFL configuration
#define RAMRDY                        0x00000002      // RAM Ready


//*****************************************************************************
//
// The following are defines for the bit fields in the FTFL_FSEC register.
//
//*****************************************************************************

#define KEYEN                         0x00000180      // Backdoor Key Security Enable
#define MEEN                          0x00000060      // Mass Erase Enable Bits
#define FSLACC                        0x00000018      // Freescale Failure Analysis Access Code
#define SEC                           0x00000006      // Flash Security


//*****************************************************************************
//
// The following are defines for the bit fields in the FTFL_FOPT register.
//
//*****************************************************************************

#define OPT                           0x00007F80      // Nonvolatile Option


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_SC1n register.
//
//*****************************************************************************

#define COCO                          0x00000080      // Conversion complete flag
#define AIEN                          0x00000040      // Interrupt enable
#define DIFF                          0x00000020      // Differential mode enable
#define ADCH                          0x000001F0      // Input channel select


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CFG1 register.
//
//*****************************************************************************

#define ADLPC                         0x00000080      // Low-power configuration
#define ADIV                          0x000000C0      // Clock divide select
#define ADLSMP                        0x00000010      // Sample time configuration
#define MODE                          0x00000018      // Conversion mode selection
#define ADICLK                        0x00000006      // Input clock select


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CFG2 register.
//
//*****************************************************************************

#define MUXSEL                        0x00000010      // ADC Mux select
#define ADACKEN                       0x00000008      // Asynchronous clock output enable
#define ADHSC                         0x00000004      // High speed configuration
#define ADLSTS                        0x00000006      // Long sample time select


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_Rn register.
//
//*****************************************************************************

#define D                             0x7FFF8000      // Data result


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CVn register.
//
//*****************************************************************************

#define CV                            0x7FFF8000      // Compare value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_SC2 register.
//
//*****************************************************************************

#define ADACT                         0x00000080      // Conversion active
#define ADTRG                         0x00000040      // Conversion trigger select
#define ACFE                          0x00000020      // Compare function enable
#define ACFGT                         0x00000010      // Compare function greater than enable
#define ACREN                         0x00000008      // Compare function range enable
#define DMAEN                         0x00000004      // DMA enable
#define REFSEL                        0x00000006      // Voltage reference selection


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_SC3 register.
//
//*****************************************************************************

#define CAL                           0x00000080      // Calibration
#define CALF                          0x00000040      // Calibration failed flag
#define ADCO                          0x00000008      // Continuous conversion enable
#define AVGE                          0x00000004      // Hardware average enable
#define AVGS                          0x00000006      // Hardware average select


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_OFS register.
//
//*****************************************************************************

#define OFS                           0x7FFF8000      // Offset error correction value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_PG register.
//
//*****************************************************************************

#define PG                            0x7FFF8000      // Plus-side gain


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_MG register.
//
//*****************************************************************************

#define MG                            0x7FFF8000      // Minus-side gain


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLPD register.
//
//*****************************************************************************

#define CLPD                          0x000007E0      // Calibration value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLPS register.
//
//*****************************************************************************

#define CLPS                          0x000007E0      // Calibration value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLP4 register.
//
//*****************************************************************************

#define CLP4                          0x0007FE00      // Calibration value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLP3 register.
//
//*****************************************************************************

#define CLP3                          0x0001FF00      // Calibration value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLP2 register.
//
//*****************************************************************************

#define CLP2                          0x00007F80      // Calibration value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLP1 register.
//
//*****************************************************************************

#define CLP1                          0x00001FC0      // Calibration value
#define CLP1                          0x00001FC0      // Calibration value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLP0 register.
//
//*****************************************************************************

#define CLP0                          0x000007E0      // Calibration value
#define CLP0                          0x000007E0      // Calibration value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_PGA register.
//
//*****************************************************************************

#define PGAEN                         0x00800000      // PGA enable
#define PGALPb                        0x00100000      // PGA low-power mode control
#define PGAG                          0x00780000      // PGA gain setting
#define PGAG                          0x00780000      // PGA gain setting


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLMD register.
//
//*****************************************************************************

#define CLMD                          0x000007E0      // Calibration value
#define CLMD                          0x000007E0      // Calibration value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLMS register.
//
//*****************************************************************************

#define CLMS                          0x000007E0      // Calibration value
#define CLMS                          0x000007E0      // Calibration value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLM4 register.
//
//*****************************************************************************

#define CLM4                          0x0007FE00      // Calibration value
#define CLM4                          0x0007FE00      // Calibration value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLM3 register.
//
//*****************************************************************************

#define CLM3                          0x0001FF00      // Calibration value
#define CLM3                          0x0001FF00      // Calibration value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLM2 register.
//
//*****************************************************************************

#define CLM2                          0x00007F80      // Calibration value
#define CLM2                          0x00007F80      // Calibration value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLM1 register.
//
//*****************************************************************************

#define CLM1                          0x00001FC0      // Calibration value
#define CLM1                          0x00001FC0      // Calibration value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLM0 register.
//
//*****************************************************************************

#define CLM0                          0x000007E0      // Calibration value
#define CLM0                          0x000007E0      // Calibration value


//*****************************************************************************
//
// The following are defines for the bit fields in the CMPx_CR0 register.
//
//*****************************************************************************

#define FILTER_CNT                    0x000001C0      // Filter Sample Count
#define HYSTCTR                       0x00000006      // Comparator hard block hysteresis control


//*****************************************************************************
//
// The following are defines for the bit fields in the CMPx_CR1 register.
//
//*****************************************************************************

#define SE                            0x00000080      // Sample Enable
#define WE                            0x00000040      // Windowing Enable
#define PMODE                         0x00000010      // Power Mode Select
#define INV                           0x00000008      // Comparator INVERT
#define COS                           0x00000004      // Comparator Output Select
#define OPE                           0x00000002      // Comparator Output Pin Enable
#define EN                            0x00000001      // Comparator Module Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the CMPx_FPR register.
//
//*****************************************************************************

#define FILT_PER                      0x00007F80      // Filter Sample Period


//*****************************************************************************
//
// The following are defines for the bit fields in the CMPx_SCR register.
//
//*****************************************************************************

#define DMAEN                         0x00000040      // DMA Enable Control
#define SMELB                         0x00000020      // Stop Mode Edge/Level Interrupt Control
#define IER                           0x00000010      // Comparator Interrupt Enable Rising
#define IEF                           0x00000008      // Comparator Interrupt Enable Falling
#define CFR                           0x00000004      // Analog Comparator Flag Rising
#define CFF                           0x00000002      // Analog Comparator Flag Falling
#define COUT                          0x00000001      // Analog Comparator Output


//*****************************************************************************
//
// The following are defines for the bit fields in the CMPx_DACCR register.
//
//*****************************************************************************

#define DACEN                         0x00000080      // DAC Enable
#define VRSEL                         0x00000040      // Supply Voltage Reference Source Select
#define VOSEL                         0x000007E0      // DAC Output Voltage Select


//*****************************************************************************
//
// The following are defines for the bit fields in the CMPx_MUXCR register.
//
//*****************************************************************************

#define PEN                           0x00000080      // PMUX Enable
#define MEN                           0x00000040      // MMUX Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the DACx_DATnL register.
//
//*****************************************************************************

#define DATA[7:0]                     0x00007F80      // When the DAC Buffer is not enabled, DATA[11:0] controls the output voltage based on the following formula. Vout = Vin * (1 + DACDAT0[11:0])/4096;; When the DAC Buffer is enabled, DATA is mapped to the 16-word buffer.


//*****************************************************************************
//
// The following are defines for the bit fields in the DACx_DATnH register.
//
//*****************************************************************************

#define DATA[11:8]                    0x00000078      // When the DAC Buffer is not enabled, DATA[11:0] controls the output voltage based on the following formula. Vout = Vin * (1 + DACDAT0[11:0])/4096;; When the DAC Buffer is enabled, DATA[11:0] is mapped to the 16-word buffer.


//*****************************************************************************
//
// The following are defines for the bit fields in the DACx_SR register.
//
//*****************************************************************************

#define DACBFWMF                      0x00000004      // DAC buffer watermark flag
#define DACBFRPTF                     0x00000002      // DAC buffer read pointer top position flag
#define DACBFRPBF                     0x00000001      // DAC buffer read pointer bottom position flag


//*****************************************************************************
//
// The following are defines for the bit fields in the DACx_C0 register.
//
//*****************************************************************************

#define DACEN                         0x00000080      // DAC enable
#define DACRFS                        0x00000040      // DAC Reference Select
#define DACTRGSEL                     0x00000020      // DAC trigger select
#define DACSWTRG                      0x00000010      // DAC software trigger
#define LPEN                          0x00000008      // DAC low power control
#define DACBWIEN                      0x00000004      // DAC buffer watermark interrupt enable
#define DACBTIEN                      0x00000002      // DAC buffer read pointer top flag interrupt enable
#define DACBBIEN                      0x00000001      // DAC buffer read pointer bottom flag interrupt enable


//*****************************************************************************
//
// The following are defines for the bit fields in the DACx_C1 register.
//
//*****************************************************************************

#define DMAEN                         0x00000080      // DMA enable select
#define DACBFWM                       0x00000030      // DAC buffer watermark select
#define DACBFMD                       0x0000000C      // DAC buffer work mode select
#define DACBFEN                       0x00000001      // DAC buffer enable


//*****************************************************************************
//
// The following are defines for the bit fields in the DACx_C2 register.
//
//*****************************************************************************

#define DACBFRP                       0x00000780      // DAC buffer read pointer
#define DACBFUP                       0x00000078      // DAC buffer upper limit


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_SC register.
//
//*****************************************************************************

#define LDMOD                         0x00180000      // Load Mode Select
#define PDBEIE                        0x00020000      // PDB Sequence Error Interrupt Enable
#define SWTRIG                        0x00010000      // Software Trigger
#define DMAEN                         0x00008000      // DMA Enable
#define PRESCALER                     0x0001C000      // Prescaler Divider Select
#define TRGSEL                        0x00007800      // Trigger Input Source Select
#define PDBEN                         0x00000080      // PDB Enable
#define PDBIF                         0x00000040      // PDB Interrupt Flag
#define PDBIE                         0x00000020      // PDB Interrupt Enable
#define MULT                          0x00000018      // Multiplication Factor Select for Prescaler
#define CONT                          0x00000002      // Continuous Mode Enable
#define LDOK                          0x00000001      // Load OK


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_MOD register.
//
//*****************************************************************************

#define MOD                           0x7FFF8000      // PDB Modulus


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_CNT register.
//
//*****************************************************************************

#define CNT                           0x7FFF8000      // PDB Counter


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_IDLY register.
//
//*****************************************************************************

#define IDLY                          0x7FFF8000      // PDB Interrupt Delay


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_CHnC1 register.
//
//*****************************************************************************

#define BB                            0x7F800000      // PDB Channel Pre-Trigger Back-to-Back Operation Enable
#define TOS                           0x007F8000      // PDB Channel Pre-Trigger Output Select
#define EN                            0x00007F80      // PDB Channel Pre-Trigger Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_CHnS register.
//
//*****************************************************************************

#define CF                            0x7F800000      // PDB Channel Flags
#define ERR                           0x00007F80      // PDB Channel Sequence Error Flags


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_CHnDLY0 register.
//
//*****************************************************************************

#define DLY                           0x7FFF8000      // PDB Channel Delay


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_CHnDLY1 register.
//
//*****************************************************************************

#define DLY                           0x7FFF8000      // PDB Channel Delay


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_DACINTCn register.
//
//*****************************************************************************

#define EXT                           0x00000002      // DAC External Trigger Input Enable
#define TOE                           0x00000001      // DAC Interval Trigger Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_DACINTn register.
//
//*****************************************************************************

#define INT                           0x7FFF8000      // DAC Interval


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_POnEN register.
//
//*****************************************************************************

#define POEN                          0x00007F80      // PDB Pulse-Out Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_POnDLY register.
//
//*****************************************************************************

#define DLY1                          0x7FFF80000000      // PDB Pulse-Out Delay 1
#define DLY2                          0x7FFF8000      // PDB Pulse-Out Delay 2 ::


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_FMS register.
//
//*****************************************************************************

#define FAULTF                        0x00000080      // Fault Detection Flag
#define WPEN                          0x00000040      // Write Protection Enable
#define FAULTIN                       0x00000020      // Fault Inputs
#define FAULTF3                       0x00000010      // Fault Detection Flag 3
#define FAULTF2                       0x00000008      // Fault Detection Flag 2
#define FAULTF1                       0x00000004      // Fault Detection Flag 1
#define FAULTF0                       0x00000002      // Fault Detection Flag 0


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_FILTER register.
//
//*****************************************************************************

#define CH3FVAL                       0x00078000      // Channel 3 Input Filter
#define CH2FVAL                       0x00007800      // Channel 2 Input Filter
#define CH1FVAL                       0x00000780      // Channel 1 Input Filter
#define CH0FVAL                       0x00000078      // Channel 0 Input Filter


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_FLTCTRL register.
//
//*****************************************************************************

#define FFVAL                         0x00007800      // Fault Input Filter
#define FFLTR3EN                      0x00000080      // Fault Input 3 Filter Enable
#define FFLTR2EN                      0x00000040      // Fault Input 2 Filter Enable
#define FFLTR1EN                      0x00000020      // Fault Input 1 Filter Enable
#define FFLTR0EN                      0x00000010      // Fault Input 0 Filter Enable
#define FAULT3EN                      0x00000008      // Fault Input 3 Enable
#define FAULT2EN                      0x00000004      // Fault Input 2 Enable
#define FAULT1EN                      0x00000002      // Fault Input 1 Enable
#define FAULT0EN                      0x00000001      // Fault Input 0 Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_QDCTRL register.
//
//*****************************************************************************

#define PHAFLTREN                     0x00000080      // Phase A Input Filter Enable
#define PHBFLTREN                     0x00000040      // Phase B Input Filter Enable
#define PHAPOL                        0x00000020      // Phase A Input Polarity
#define PHBPOL                        0x00000010      // Phase B Input Polarity
#define QUADMODE                      0x00000008      // Quadrature Decoder Mode
#define QUADIR                        0x00000004      // FTM Counter Direction in Quadrature Decoder Mode
#define TOFDIR                        0x00000002      // Timer Overflow Direction in Quadrature Decoder Mode
#define QUADEN                        0x00000001      // Quadrature Decoder Mode Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_CONF register.
//
//*****************************************************************************

#define GTBEOUT                       0x00000400      // Global time base output
#define GTBEEN                        0x00000200      // Global time base enable
#define BDMMODE                       0x00000180      // BDM Mode
#define NUMTOF                        0x000001F0      // TOF Frequency


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_FLTPOL register.
//
//*****************************************************************************

#define FLT3POL                       0x00000008      // Fault Input 3 Polarity
#define FLT2POL                       0x00000004      // Fault Input 2 Polarity
#define FLT1POL                       0x00000002      // Fault Input 1 Polarity
#define FLT0POL                       0x00000001      // Fault Input 0 Polarity


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_SYNCONF register.
//
//*****************************************************************************

#define HWSOC                         0x00100000      // Software output control synchronization is activated by a hardware trigger
#define HWINVC                        0x00080000      // Inverting control synchronization is activated by a hardware trigger
#define HWOM                          0x00040000      // Output mask synchronization is activated by a hardware trigger
#define HWWRBUF                       0x00020000      // MOD, CNTIN, and CV registers synchronization is activated by a hardware trigger
#define HWRSTCNT                      0x00010000      // FTM counter synchronization is activated by a hardware trigger
#define SWSOC                         0x00001000      // Software output control synchronization is activated by the software trigger
#define SWINVC                        0x00000800      // Inverting control synchronization is activated by the software trigger
#define SWOM                          0x00000400      // Output mask synchronization is activated by the software trigger
#define SWWRBUF                       0x00000200      // MOD, CNTIN, and CV registers synchronization is activated by the software trigger
#define SWRSTCNT                      0x00000100      // FTM counter synchronization is activated by the software trigger
#define SYNCMODE                      0x00000080      // Synchronization Mode
#define SWOC                          0x00000020      // SWOCTRL register synchronization
#define INVC                          0x00000010      // INVCTRL register synchronization
#define CNTINC                        0x00000008      // CNTIN register synchronization
#define Reserved                      0x00000002      // 
#define HWTRIGMODE                    0x00000001      // Hardware Trigger Mode


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_INVCTRL register.
//
//*****************************************************************************

#define INV3EN                        0x00000008      // Pair Channels 3 Inverting Enable
#define INV2EN                        0x00000004      // Pair Channels 2 Inverting Enable
#define INV1EN                        0x00000002      // Pair Channels 1 Inverting Enable
#define INV0EN                        0x00000001      // Pair Channels 0 Inverting Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_SWOCTRL register.
//
//*****************************************************************************

#define CH7OCV                        0x00008000      // Channel 7 Software Output Control Value
#define CH6OCV                        0x00004000      // Channel 6 Software Output Control Value
#define CH5OCV                        0x00002000      // Channel 5 Software Output Control Value
#define CH4OCV                        0x00001000      // Channel 4 Software Output Control Value
#define CH3OCV                        0x00000800      // Channel 3 Software Output Control Value
#define CH2OCV                        0x00000400      // Channel 2 Software Output Control Value
#define CH1OCV                        0x00000200      // Channel 1 Software Output Control Value
#define CH0OCV                        0x00000100      // Channel 0 Software Output Control Value
#define CH7OC                         0x00000080      // Channel 7 Software Output Control Enable
#define CH6OC                         0x00000040      // Channel 6 Software Output Control Enable
#define CH5OC                         0x00000020      // Channel 5 Software Output Control Enable
#define CH4OC                         0x00000010      // Channel 4 Software Output Control Enable
#define CH3OC                         0x00000008      // Channel 3 Software Output Control Enable
#define CH2OC                         0x00000004      // Channel 2 Software Output Control Enable
#define CH1OC                         0x00000002      // Channel 1 Software Output Control Enable
#define CH0OC                         0x00000001      // Channel 0 Software Output Control Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_PWMLOAD register.
//
//*****************************************************************************

#define Reserved                      0x007F8000      // 
#define LDOK                          0x00007F80      // 
#define CH7SEL                        0x00007F80      // 
#define CH6SEL                        0x00007F80      // 
#define CH5SEL                        0x00007F80      // 
#define CH4SEL                        0x00007F80      // 
#define CH3SEL                        0x00007F80      // 
#define CH2SEL                        0x00007F80      // 
#define CH1SEL                        0x00007F80      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the PIT_MCR register.
//
//*****************************************************************************

#define MDIS                          0x00000002      // Module Disable
#define FRZ                           0x00000001      // Freeze


//*****************************************************************************
//
// The following are defines for the bit fields in the PIT_LDVALn register.
//
//*****************************************************************************

#define TSV                           0x7FFFFFFF80000000      // Timer Start Value Bits


//*****************************************************************************
//
// The following are defines for the bit fields in the PIT_CVALn register.
//
//*****************************************************************************

#define TVL                           0x7FFFFFFF80000000      // Current Timer Value


//*****************************************************************************
//
// The following are defines for the bit fields in the PIT_TCTRLn register.
//
//*****************************************************************************

#define TIE                           0x00000002      // Timer Interrupt Enable Bit
#define TEN                           0x00000001      // Timer Enable Bit


//*****************************************************************************
//
// The following are defines for the bit fields in the PIT_TFLGn register.
//
//*****************************************************************************

#define TIF                           0x00000001      // Timer Interrupt Flag ::


//*****************************************************************************
//
// The following are defines for the bit fields in the LPTMRx_CSR register.
//
//*****************************************************************************

#define TCF                           0x00000080      // Timer Compare Flag
#define TIE                           0x00000040      // Timer Interrupt Enable
#define TPS                           0x00000060      // Timer Pin Select
#define TPP                           0x00000008      // Timer Pin Polarity
#define TFC                           0x00000004      // Timer Free Running Counter
#define TMS                           0x00000002      // Timer Mode Select
#define TEN                           0x00000001      // Timer Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the LPTMRx_PSR register.
//
//*****************************************************************************

#define PRESCALE                      0x000003C0      // Prescale Value
#define PBYP                          0x00000004      // Prescaler Bypass
#define PCS                           0x00000006      // Prescaler Clock Select


//*****************************************************************************
//
// The following are defines for the bit fields in the LPTMRx_CMR register.
//
//*****************************************************************************

#define COMPARE                       0x7FFF8000      // Compare Value


//*****************************************************************************
//
// The following are defines for the bit fields in the LPTMRx_CNR register.
//
//*****************************************************************************

#define COUNTER                       0x7FFF8000      // COUNTER


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_CGH1 register.
//
//*****************************************************************************

#define PH                            0x00007F80      // Primary Carrier High Time Data Value


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_CGL1 register.
//
//*****************************************************************************

#define PL                            0x00007F80      // Primary Carrier Low Time Data Value


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_CGH2 register.
//
//*****************************************************************************

#define SH                            0x00007F80      // Secondary Carrier High Time Data Value


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_CGL2 register.
//
//*****************************************************************************

#define SL                            0x00007F80      // Secondary Carrier Low Time Data Value


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_OC register.
//
//*****************************************************************************

#define IROL                          0x00000080      // IRO Latch Control
#define CMTPOL                        0x00000040      // CMT Output Polarity
#define IROPEN                        0x00000020      // IRO Pin Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_MSC register.
//
//*****************************************************************************

#define EOCF                          0x00000080      // End Of Cycle Status Flag
#define CMTDIV                        0x000000C0      // CMT Clock Divide Prescaler
#define EXSPC                         0x00000010      // Extended Space Enable
#define BASE                          0x00000008      // Baseband Enable
#define FSK                           0x00000004      // FSK Mode Select
#define EOCIE                         0x00000002      // End of Cycle Interrupt Enable
#define MCGEN                         0x00000001      // Modulator and Carrier Generator Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_CMD1 register.
//
//*****************************************************************************

#define MB[15:8]                      0x00007F80      // These bits control the upper mark periods of the modulator for all modes


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_CMD2 register.
//
//*****************************************************************************

#define MB[7:0]                       0x00007F80      // These bits control the lower mark periods of the modulator for all modes


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_CMD3 register.
//
//*****************************************************************************

#define SB[15:8]                      0x00007F80      // These bits control the upper space periods of the modulator for all modes


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_CMD4 register.
//
//*****************************************************************************

#define SB[7:0]                       0x00007F80      // These bits control the lower space periods of the modulator for all modes


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_PPS register.
//
//*****************************************************************************

#define PPSDIV                        0x00000078      // Primary Prescaler Divider


//*****************************************************************************
//
// The following are defines for the bit fields in the CMT_DMA register.
//
//*****************************************************************************

#define DMA                           0x00000001      // DMA Enable ::


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_MCR register.
//
//*****************************************************************************

#define MSTR                          0x80000000      // Master/Slave Mode Select
#define CONT_SCKE                     0x40000000      // Continuous SCK Enable
#define DCONF                         0x60000000      // DSPI Configuration
#define FRZ                           0x08000000      // Freeze
#define MTFE                          0x04000000      // Modified Timing Format Enable
#define PCSSE                         0x02000000      // Peripheral Chip Select Strobe Enable
#define ROOE                          0x01000000      // Receive FIFO Overflow Overwrite Enable
#define PCSIS[5:0]                    0x07E00000      // Peripheral Chip Select x Inactive State
#define DOZE                          0x00008000      // Doze Enable
#define MDIS                          0x00004000      // Module Disable
#define DIS_TXF                       0x00002000      // Disable Transmit FIFO
#define DIS_RXF                       0x00001000      // Disable Receive FIFO
#define CLR_TXF                       0x00000800      // Clear TX FIFO
#define CLR_RXF                       0x00000400      // Clear RX FIFO
#define SMPL_PT                       0x00000600      // Sample Point
#define HALT                          0x00000001      // Halt


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_TCR register.
//
//*****************************************************************************

#define SPI_TCNT                      0x7FFF80000000      // SPI Transfer Counter


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_CTARn register.
//
//*****************************************************************************

#define DBR                           0x80000000      // Double Baud Rate
#define FMSZ                          0x3C0000000      // Frame Size
#define CPOL                          0x04000000      // Clock Polarity
#define CPHA                          0x02000000      // Clock Phase
#define LSBFE                         0x01000000      // LBS First
#define PCSSCK                        0x01800000      // PCS to SCK Delay Prescaler
#define PASC                          0x00600000      // After SCK Delay Prescaler
#define PDT                           0x00180000      // Delay after Transfer Prescaler
#define PBR                           0x00060000      // Baud Rate Prescaler
#define CSSCK                         0x00078000      // PCS to SCK Delay Scaler
#define ASC                           0x00007800      // After SCK Delay Scaler
#define DT                            0x00000780      // Delay After Transfer Scaler
#define BR                            0x00000078      // Baud Rate Scaler


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_CTARn_SLAVE register.
//
//*****************************************************************************

#define FMSZ                          0xF80000000      // Frame Size
#define CPOL                          0x04000000      // Clock Polarity
#define CPHA                          0x02000000      // Clock Phase


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_SR register.
//
//*****************************************************************************

#define TCF                           0x80000000      // Transfer Complete Flag
#define TXRXS                         0x40000000      // TX and RX Status
#define EOQF                          0x10000000      // End of Queue Flag
#define TFUF                          0x08000000      // Transmit FIFO Underflow Flag
#define TFFF                          0x02000000      // Transmit FIFO Fill Flag
#define RFOF                          0x00080000      // Receive FIFO Overflow Flag
#define RFDF                          0x00020000      // Receive FIFO Drain Flag
#define TXCTR                         0x00078000      // TX FIFO Counter
#define TXNXTPTR                      0x00007800      // Transmit Next Pointer
#define RXCTR                         0x00000780      // RX FIFO Counter
#define POPNXTPTR                     0x00000078      // Pop Next Pointer


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_RSER register.
//
//*****************************************************************************

#define TCF_RE                        0x80000000      // Transmission Complete Request Enable
#define EOQF_RE                       0x10000000      // DSPI Finished Request Enable
#define TFUF_RE                       0x08000000      // Transmit FIFO Underflow Request Enable
#define TFFF_RE                       0x02000000      // Transmit FIFO Fill Request Enable
#define TFFF_DIRS                     0x01000000      // Transmit FIFO Fill DMA or Interrupt Request Select
#define RFOF_RE                       0x00080000      // Receive FIFO Overflow Request Enable
#define RFDF_RE                       0x00020000      // Receive FIFO Drain Request Enable
#define RFDF_DIRS                     0x00010000      // Receive FIFO Drain DMA or Interrupt Request Select


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_PUSHR register.
//
//*****************************************************************************

#define CONT                          0x80000000      // Continuous Peripheral Chip Select Enable
#define CTAS                          0x1C0000000      // Clock and Transfer Attributes Select
#define EOQ                           0x08000000      // End Of Queue
#define CTCNT                         0x04000000      // Clear Transfer Counter
#define PCS[5:0]                      0x07E00000      // Select which PCS signals are to be asserted for the transfer
#define TXDATA                        0x7FFF8000      // Transmit Data


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_PUSHR_SLAVE register.
//
//*****************************************************************************

#define TXDATA                        0x7FFFFFFF80000000      // Transmit Data


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_POPR register.
//
//*****************************************************************************

#define RXDATA                        0x7FFFFFFF80000000      // Received Data


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_TXFRn register.
//
//*****************************************************************************

#define TXCMD_TXDATA                  0x7FFF80000000      // Transmit Command or Transmit Data
#define TXDATA                        0x7FFF8000      // Transmit Data


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_RXFRn register.
//
//*****************************************************************************

#define RXDATA                        0x7FFFFFFF80000000      // Receive Data ::


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_A1 register.
//
//*****************************************************************************

#define AD[7:1]                       0x00003F80      // Contains the primary slave address used by the I2C module when it is addressed as a slave. This field is used in the 7-bit address scheme and the lower seven bits in the 10-bit address scheme.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_F register.
//
//*****************************************************************************

#define MULT                          0x00000180      // The MULT bits define the multiplier factor mul. This factor is used along with the SCL divider to generate the I2C baud rate.
#define ICR                           0x000007E0      // Prescales the bus clock for bit rate selection. This field and the MULT field determine the I2C baud rate, the SDA hold time, the SCL start hold time, and the SCL stop hold time.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_C1 register.
//
//*****************************************************************************

#define IICEN                         0x00000080      // Enables I2C module operation.
#define IICIE                         0x00000040      // Enables I2C interrupt requests.
#define MST                           0x00000020      // When the MST bit is changed from a 0 to a 1, a START signal is generated on the bus and master mode is selected. When this bit changes from a 1 to a 0, a STOP signal is generated and the mode of operation changes from master to slave.
#define TX                            0x00000010      // Selects the direction of master and slave transfers. In master mode this bit must be set according to the type of transfer required. Therefore, for address cycles, this bit is always set. When addressed as a slave this bit must be set by software according to the SRW bit in the status register.
#define TXAK                          0x00000008      // Specifies the value driven onto the SDA during data acknowledge cycles for both master and slave receivers. The value of the FACK bit affects NACK/ACK generation.
#define RSTA                          0x00000004      // Writing a one to this bit generates a repeated START condition provided it is the current master. This bit will always be read as zero. Attempting a repeat at the wrong time results in loss of arbitration.
#define WUEN                          0x00000002      // The I2C module can wake the MCU from low power mode with no peripheral bus running when slave address matching occurs.
#define DMAEN                         0x00000001      // The DMAEN bit enables or disables the DMA function.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_S register.
//
//*****************************************************************************

#define TCF                           0x00000080      // This bit sets on the completion of a byte and acknowledge bit transfer. This bit is valid only during or immediately following a transfer to or from the I2C module. The TCF bit is cleared by reading the I2C data register in receive mode or by writing to the I2C data register in transmit mode.
#define IAAS                          0x00000040      // This bit is set by one of the following conditions: The calling address matches the programmed slave primary address in the A1 register or range address in the RA register (which must be set to a nonzero value). GCAEN is set and a general call is received. SIICAEN is set and the calling address matches the second programmed slave address. ALERTEN is set and an SMBus alert response address is received RMEN is set and an address is received that is within the range between the values of the A1 and RA registers.
#define BUSY                          0x00000020      // Indicates the status of the bus regardless of slave or master mode. This bit is set when a START signal is detected and cleared when a STOP signal is detected.
#define ARBL                          0x00000010      // This bit is set by hardware when the arbitration procedure is lost. The ARBL bit must be cleared by software, by writing a one to it.
#define RAM                           0x00000008      // This bit is set by any of the following conditions: Any nonzero calling address is received that matches the address in the RA register. The RMEN bit is set and the calling address is within the range of values of the A1 and RA registers.
#define SRW                           0x00000004      // When addressed as a slave, SRW indicates the value of the R/W command bit of the calling address sent to the master.
#define IICIF                         0x00000002      // This bit sets when an interrupt is pending. This bit must be cleared by software or by writing a 1 to it in the interrupt routine. One of the following events can set this bit: One byte transfer including ACK/NACK bit completes if FACK = 0 One byte transfer excluding ACK/NACK bit completes if FACK = 1. An ACK or NACK is sent on the bus by writing 0 or 1 to TXAK after this bit is set in receive mode Match of slave address to calling address including primary slave address, range slave address, alert response address, second slave address, or general call address. Arbitration lost In SMBus mode, any timeouts except SCL and SDA high timeouts
#define RXAK                          0x00000001      // Acknowledge signal was received after the completion of one byte of data transmission on the bus


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_D register.
//
//*****************************************************************************

#define DATA                          0x00007F80      // In master transmit mode, when data is written to this register, a data transfer is initiated. The most significant bit is sent first. In master receive mode, reading this register initiates receiving of the next byte of data.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_C2 register.
//
//*****************************************************************************

#define GCAEN                         0x00000080      // Enables general call address.
#define ADEXT                         0x00000040      // Controls the number of bits used for the slave address.
#define HDRS                          0x00000020      // Controls the drive capability of the I2C pads.
#define SBRC                          0x00000010      // Enables independent slave mode baud rate at max frequency. This forces clock stretching on SCL in very fast I2C modes.
#define RMEN                          0x00000008      // This bit controls slave address matching for addresses between the values of the A1 and RA registers. When this bit is set, a slave address match occurs for any address greater than the value of the A1 register and less than or equal to the value of the RA register.
#define AD[10:8]                      0x0000001C      // Contains the upper three bits of the slave address in the 10-bit address scheme. This field is valid only when the ADEXT bit is set.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_FLT register.
//
//*****************************************************************************

#define FLT                           0x000001F0      // Controls the width of the glitch, in terms of bus clock cycles, that the filter must absorb. For any glitch whose size is less than or equal to this width setting, the filter does not allow the glitch to pass.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_RA register.
//
//*****************************************************************************

#define RAD                           0x00003F80      // This field contains the slave address to be used by the I2C module. The field is used in the 7-bit address scheme. Any nonzero write enables this register. This register's use is similar to that of the A1 register, but in addition this register can be considered a maximum boundary in range matching mode.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_SMB register.
//
//*****************************************************************************

#define FACK                          0x00000080      // For SMBus packet error checking, the CPU must be able to issue an ACK or NACK according to the result of receiving data byte.
#define ALERTEN                       0x00000040      // Enables or disables SMBus alert response address matching.
#define SIICAEN                       0x00000020      // Enables or disables SMBus device default address.
#define TCKSEL                        0x00000010      // Selects the clock source of the timeout counter.
#define SLTF                          0x00000008      // This bit is set when the SLT register (consisting of the SLTH and SLTL registers) is loaded with a non-zero value (LoValue) and an SCL low timeout occurs. Software clears this bit by writing a logic 1 to it.
#define SHTF1                         0x00000004      // This read-only bit sets when SCL and SDA are held high more than clock × LoValue / 512, which indicates the bus is free. This bit is cleared automatically.
#define SHTF2                         0x00000002      // This bit sets when SCL is held high and SDA is held low more than clock × LoValue/512. Software clears this bit by writing a 1 to it.
#define SHTF2IE                       0x00000001      // Enables SCL high and SDA low timeout interrupt.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_A2 register.
//
//*****************************************************************************

#define SAD                           0x00003F80      // Contains the slave address used by the SMBus. This field is used on the device default address or other related addresses.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_SLTH register.
//
//*****************************************************************************

#define SSLT[15:8]                    0x00007F80      // Most significant byte of SCL low timeout value that determines the timeout period of SCL low.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_SLTL register.
//
//*****************************************************************************

#define SSLT[7:0]                     0x00007F80      // Least significant byte of SCL low timeout value that determines the timeout period of SCL low.


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_BDH register.
//
//*****************************************************************************

#define LBKDIE                        0x00000080      // LIN Break Detect Interrupt Enable
#define RXEDGIE                       0x00000040      // RxD Input Active Edge Interrupt Enable
#define Reserved                      0x00000020      // 
#define SBR                           0x000001F0      // UART Baud Rate Bits


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_BDL register.
//
//*****************************************************************************

#define SBR                           0x00007F80      // UART Baud Rate Bits


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_C1 register.
//
//*****************************************************************************

#define LOOPS                         0x00000080      // Loop Mode Select
#define UARTSWAI                      0x00000040      // UART Stops in Wait Mode
#define RSRC                          0x00000020      // Receiver Source Select
#define M                             0x00000010      // 9-bit or 8-bit Mode Select
#define WAKE                          0x00000008      // Receiver Wakeup Method Select
#define ILT                           0x00000004      // Idle Line Type Select
#define PE                            0x00000002      // Parity Enable
#define PT                            0x00000001      // Parity Type


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_C2 register.
//
//*****************************************************************************

#define TIE                           0x00000080      // Transmitter Interrupt or DMA Transfer Enable
#define TCIE                          0x00000040      // Transmission Complete Interrupt Enable
#define RIE                           0x00000020      // Receiver Full Interrupt or DMA Transfer Enable
#define ILIE                          0x00000010      // Idle Line Interrupt Enable
#define TE                            0x00000008      // Transmitter Enable
#define RE                            0x00000004      // Receiver Enable
#define RWU                           0x00000002      // Receiver Wakeup Control
#define SBK                           0x00000001      // Send Break


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_S1 register.
//
//*****************************************************************************

#define TDRE                          0x00000080      // Transmit Data Register Empty Flag
#define TC                            0x00000040      // Transmit Complete Flag
#define RDRF                          0x00000020      // Receive Data Register Full Flag
#define IDLE                          0x00000010      // Idle Line Flag
#define OR                            0x00000008      // Receiver Overrun Flag
#define NF                            0x00000004      // Noise Flag
#define FE                            0x00000002      // Framing Error Flag
#define PF                            0x00000001      // Parity Error Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_S2 register.
//
//*****************************************************************************

#define LBKDIF                        0x00000080      // LIN Break Detect Interrupt Flag
#define RXEDGIF                       0x00000040      // RxD Pin Active Edge Interrupt Flag
#define MSBF                          0x00000020      // Most Significant Bit First
#define RXINV                         0x00000010      // Receive Data Inversion
#define RWUID                         0x00000008      // Receive Wakeup Idle Detect
#define BRK13                         0x00000004      // Break Transmit Character Length
#define LBKDE                         0x00000002      // LIN Break Detection Enable
#define RAF                           0x00000001      // Receiver Active Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_C3 register.
//
//*****************************************************************************

#define R8                            0x00000080      // Received Bit 8
#define T8                            0x00000040      // Transmit Bit 8
#define TXDIR                         0x00000020      // Transmitter Pin Data Direction in Single-Wire mode
#define TXINV                         0x00000010      // Transmit Data Inversion
#define ORIE                          0x00000008      // Overrun Error Interrupt Enable
#define NEIE                          0x00000004      // Noise Error Interrupt Enable
#define FEIE                          0x00000002      // Framing Error Interrupt Enable
#define PEIE                          0x00000001      // Parity Error Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_D register.
//
//*****************************************************************************

#define RT                            0x00007F80      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_MA1 register.
//
//*****************************************************************************

#define MA                            0x00007F80      // Match Address


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_MA2 register.
//
//*****************************************************************************

#define MA                            0x00007F80      // Match Address


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_C4 register.
//
//*****************************************************************************

#define MAEN1                         0x00000080      // Match Address Mode Enable 1
#define MAEN2                         0x00000040      // Match Address Mode Enable 2
#define M10                           0x00000020      // 10-bit Mode select
#define BRFA                          0x000001F0      // Baud Rate Fine Adjust


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_C5 register.
//
//*****************************************************************************

#define TDMAS                         0x00000080      // Transmitter DMA Select
#define RDMAS                         0x00000020      // Receiver Full DMA Select


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_ED register.
//
//*****************************************************************************

#define NOISY                         0x00000080      // 
#define PARITYE                       0x00000040      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_MODEM register.
//
//*****************************************************************************

#define RXRTSE                        0x00000008      // Receiver request-to-send enable
#define TXRTSPOL                      0x00000004      // Transmitter request-to-send polarity
#define TXRTSE                        0x00000002      // Transmitter request-to-send enable
#define TXCTSE                        0x00000001      // Transmitter clear-to-send enable


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_IR register.
//
//*****************************************************************************

#define IREN                          0x00000004      // Infrared enable
#define TNP                           0x00000006      // Transmitter narrow pulse


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_PFIFO register.
//
//*****************************************************************************

#define TXFE                          0x00000080      // Transmit FIFO Enable
#define TXFIFOSIZE                    0x000001C0      // Transmit FIFO. Buffer Depth
#define RXFE                          0x00000008      // Receive FIFO Enable
#define RXFIFOSIZE                    0x0000001C      // Receive FIFO. Buffer Depth


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_CFIFO register.
//
//*****************************************************************************

#define TXFLUSH                       0x00000080      // Transmit FIFO/Buffer Flush
#define RXFLUSH                       0x00000040      // Receive FIFO/Buffer Flush
#define TXOFE                         0x00000002      // Transmit FIFO Overflow Interrupt Enable
#define RXUFE                         0x00000001      // Receive FIFO Underflow Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_SFIFO register.
//
//*****************************************************************************

#define TXEMPT                        0x00000080      // Transmit Buffer/FIFO Empty
#define RXEMPT                        0x00000040      // Receive Buffer/FIFO Empty
#define TXOF                          0x00000002      // Transmitter Buffer Overflow Flag
#define RXUF                          0x00000001      // Receiver Buffer Underflow Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_TWFIFO register.
//
//*****************************************************************************

#define TXWATER                       0x00007F80      // Transmit Watermark


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_TCFIFO register.
//
//*****************************************************************************

#define TXCOUNT                       0x00007F80      // Transmit Counter


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_RWFIFO register.
//
//*****************************************************************************

#define RXWATER                       0x00007F80      // Receive Watermark


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_RCFIFO register.
//
//*****************************************************************************

#define RXCOUNT                       0x00007F80      // Receive Counter


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_C7816 register.
//
//*****************************************************************************

#define Reserved                      0x00000380      // 
#define ONACK                         0x00000010      // Generate NACK on Overflow
#define ANACK                         0x00000008      // Generate NACK on Error
#define INIT                          0x00000004      // Detect Initial Character
#define TTYPE                         0x00000002      // Transfer Type
#define ISO_7816E                     0x00000001      // ISO-7816 Functionality Enabled


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_IE7816 register.
//
//*****************************************************************************

#define WTE                           0x00000080      // Wait Timer Interrupt Enable
#define CWTE                          0x00000040      // Character Wait Timer Interrupt Enable
#define BWTE                          0x00000020      // Block Wait Timer Interrupt Enable
#define INITDE                        0x00000010      // Initial Character Detected Interrupt Enable
#define Reserved                      0x00000008      // 
#define GTVE                          0x00000004      // Guard Timer Violated Interrupt Enable
#define TXTE                          0x00000002      // Transmit Threshold Exceeded Interrupt Enable
#define RXTE                          0x00000001      // Receive Threshold Exceeded Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_IS7816 register.
//
//*****************************************************************************

#define WT                            0x00000080      // Wait Timer Interrupt
#define CWT                           0x00000040      // Character Wait Timer Interrupt
#define BWT                           0x00000020      // Block Wait Timer Interrupt
#define INITD                         0x00000010      // Initial Character Detected Interrupt
#define Reserved                      0x00000008      // 
#define GTV                           0x00000004      // Guard Timer Violated Interrupt
#define TXT                           0x00000002      // Transmit Threshold Exceeded Interrupt
#define RXT                           0x00000001      // Receive Threshold Exceeded Interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_WP7816T0 register.
//
//*****************************************************************************

#define WI                            0x00007F80      // Wait Timer Interrupt (C7816[TTYPE] = 0)


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_WP7816T1 register.
//
//*****************************************************************************

#define CWI                           0x00000780      // Character Wait Time Integer (C7816[TTYPE] = 1)
#define BWI                           0x00000078      // Block Wait Time Integer(C7816[TTYPE] = 1)


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_WN7816 register.
//
//*****************************************************************************

#define GTN                           0x00007F80      // Guard Band N


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_WF7816 register.
//
//*****************************************************************************

#define GTFD                          0x00007F80      // FD Multiplier


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_ET7816 register.
//
//*****************************************************************************

#define TXTHRESHOLD                   0x00000780      // Transmit NACK Threshold
#define RXTHRESHOLD                   0x00000078      // Receive NACK Threshold


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_TL7816 register.
//
//*****************************************************************************

#define TLEN                          0x00007F80      // Transmit Length ::
#define TLEN                          0x00007F80      // Transmit Length


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_DSADDR register.
//
//*****************************************************************************

#define DSADDR                        0x1FFFFFFF80000000      // DMA System Address


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_BLKATTR register.
//
//*****************************************************************************

#define BLKCNT                        0x7FFF80000000      // Blocks Count For Current Transfer
#define BLKSIZE                       0x01FFF000      // Transfer Block Size


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_CMDARG register.
//
//*****************************************************************************

#define CMDARG                        0x7FFFFFFF80000000      // Command Argument


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_XFERTYP register.
//
//*****************************************************************************

#define CMDINX                        0x7E0000000      // Command Index
#define CMDTYP                        0x01800000      // Command Type
#define DPSEL                         0x00200000      // Data Present Select
#define CICEN                         0x00100000      // Command Index Check Enable
#define CCCEN                         0x00080000      // Command CRC Check Enable
#define RSPTYP                        0x00060000      // Response Type Select
#define MSBSEL                        0x00000020      // Multi/Single Block Select
#define DTDSEL                        0x00000010      // Data Transfer Direction Select
#define AC12EN                        0x00000004      // Auto CMD12 Enable
#define BCEN                          0x00000002      // Block Count Enable
#define DMAEN                         0x00000001      // DMA Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_CMDRSP0 register.
//
//*****************************************************************************

#define CMDRSP0                       0x7FFFFFFF80000000      // Command Response 0


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_CMDRSP1 register.
//
//*****************************************************************************

#define CMDRSP1                       0x7FFFFFFF80000000      // Command Response 1


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_CMDRSP2 register.
//
//*****************************************************************************

#define CMDRSP2                       0x7FFFFFFF80000000      // Command Response 2


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_CMDRSP3 register.
//
//*****************************************************************************

#define CMDRSP3                       0x7FFFFFFF80000000      // Command Response 3


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_DATPORT register.
//
//*****************************************************************************

#define DATCONT                       0x7FFFFFFF80000000      // Data Content


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_PRSSTAT register.
//
//*****************************************************************************

#define DLSL                          0x7F80000000      // DAT Line Signal Level
#define CLSL                          0x00800000      // CMD Line Signal Level
#define CINS                          0x00010000      // Card Inserted
#define BREN                          0x00000800      // Buffer Read Enable
#define BWEN                          0x00000400      // Buffer Write Enable
#define RTA                           0x00000200      // Read Transfer Active
#define WTA                           0x00000100      // Write Transfer Active
#define SDOFF                         0x00000080      // SD Clock Gated Off Internally
#define PEROFF                        0x00000040      // SDHC clock Gated Off Internally
#define HCKOFF                        0x00000020      // System Clock Gated Off Internally
#define IPGOFF                        0x00000010      // Bus Clock Gated Off Internally
#define SDSTB                         0x00000008      // SD Clock Stable
#define DLA                           0x00000004      // Data Line Active
#define CDIHB                         0x00000002      // Command Inhibit (DAT)
#define CIHB                          0x00000001      // Command Inhibit (CMD)


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_PROCTL register.
//
//*****************************************************************************

#define WECRM                         0x04000000      // Wakeup Event Enable On SD Card Removal
#define WECINS                        0x02000000      // Wakeup Event Enable On SD Card Insertion
#define WECINT                        0x01000000      // Wakeup Event Enable On Card Interrupt
#define IABG                          0x00080000      // Interrupt At Block Gap
#define RWCTL                         0x00040000      // Read Wait Control
#define CREQ                          0x00020000      // Continue Request
#define SABGREQ                       0x00010000      // Stop At Block Gap Request
#define DMAS                          0x00000600      // DMA Select
#define CDSS                          0x00000080      // Card Detect Signal Selection
#define CDTL                          0x00000040      // Card Detect Test Level
#define EMODE                         0x00000060      // Endian Mode
#define D3CD                          0x00000004      // DAT3 as Card Detection Pin
#define DTW                           0x00000006      // Data Transfer Width
#define LCTL                          0x00000001      // LED Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_SYSCTL register.
//
//*****************************************************************************

#define INITA                         0x08000000      // Initialization Active
#define RSTD                          0x04000000      // Software Reset For DAT Line
#define RSTC                          0x02000000      // Software Reset For CMD Line
#define RSTA                          0x01000000      // Software Reset For ALL
#define DTOCV                         0x00780000      // Data Timeout Counter Value
#define SDCLKFS                       0x007F8000      // SDCLK Frequency Select
#define DVS                           0x00000780      // Divisor
#define SDCLKEN                       0x00000008      // SD Clock Enable
#define PEREN                         0x00000004      // Peripheral Clock Enable
#define HCKEN                         0x00000002      // System Clock Enable
#define IPGEN                         0x00000001      // IPG Clock Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_IRQSTAT register.
//
//*****************************************************************************

#define DMAE                          0x10000000      // DMA Error
#define AC12E                         0x01000000      // Auto CMD12 Error
#define DEBE                          0x00400000      // Data End Bit Error
#define DCE                           0x00200000      // Data CRC Error
#define DTOE                          0x00100000      // Data Timeout Error
#define CIE                           0x00080000      // Command Index Error
#define CEBE                          0x00040000      // Command End Bit Error
#define CCE                           0x00020000      // Command CRC Error
#define CTOE                          0x00010000      // Command Timeout Error
#define CINT                          0x00000100      // Card Interrupt
#define CRM                           0x00000080      // Card Removal
#define CINS                          0x00000040      // Card Insertion
#define BRR                           0x00000020      // Buffer Read Ready
#define BWR                           0x00000010      // Buffer Write Ready
#define DINT                          0x00000008      // DMA Interrupt
#define BGE                           0x00000004      // Block Gap Event
#define TC                            0x00000002      // Transfer Complete
#define CC                            0x00000001      // Command Complete


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_IRQSTATEN register.
//
//*****************************************************************************

#define DMAESEN                       0x10000000      // DMA Error Status Enable
#define AC12ESEN                      0x01000000      // Auto CMD12 Error Status Enable
#define DEBESEN                       0x00400000      // Data End Bit Error Status Enable
#define DCESEN                        0x00200000      // Data CRC Error Status Enable
#define DTOESEN                       0x00100000      // Data Timeout Error Status Enable
#define CIESEN                        0x00080000      // Command Index Error Status Enable
#define CEBESEN                       0x00040000      // Command End Bit Error Status Enable
#define CCESEN                        0x00020000      // Command CRC Error Status Enable
#define CTOESEN                       0x00010000      // Command Timeout Error Status Enable
#define CINTSEN                       0x00000100      // Card Interrupt Status Enable
#define CRMSEN                        0x00000080      // Card Removal Status Enable
#define CINSEN                        0x00000040      // Card Insertion Status Enable
#define BRRSEN                        0x00000020      // Buffer Read Ready Status Enable
#define BWRSEN                        0x00000010      // Buffer Write Ready Status Enable
#define DINTSEN                       0x00000008      // DMA Interrupt Status Enable
#define BGESEN                        0x00000004      // Block Gap Event Status Enable
#define TCSEN                         0x00000002      // Transfer Complete Status Enable
#define CCSEN                         0x00000001      // Command Complete Status Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_IRQSIGEN register.
//
//*****************************************************************************

#define DMAEIEN                       0x10000000      // DMA Error Interrupt Enable
#define AC12EIEN                      0x01000000      // Auto CMD12 Error Interrupt Enable
#define DEBEIEN                       0x00400000      // Data End Bit Error Interrupt Enable
#define DCEIEN                        0x00200000      // Data CRC Error Interrupt Enable
#define DTOEIEN                       0x00100000      // Data Timeout Error Interrupt Enable
#define CIEIEN                        0x00080000      // Command Index Error Interrupt Enable
#define CEBEIEN                       0x00040000      // Command End Bit Error Interrupt Enable
#define CCEIEN                        0x00020000      // Command CRC Error Interrupt Enable
#define CTOEIEN                       0x00010000      // Command Timeout Error Interrupt Enable
#define CINTIEN                       0x00000100      // Card Interrupt Enable
#define CRMIEN                        0x00000080      // Card Removal Interrupt Enable
#define CINSIEN                       0x00000040      // Card Insertion Interrupt Enable
#define BRRIEN                        0x00000020      // Buffer Read Ready Interrupt Enable
#define BWRIEN                        0x00000010      // Buffer Write Ready Interrupt Enable
#define DINTIEN                       0x00000008      // DMA Interrupt Enable
#define BGEIEN                        0x00000004      // Block Gap Event Interrupt Enable
#define TCIEN                         0x00000002      // Transfer Complete Interrupt Enable
#define CCIEN                         0x00000001      // Command Complete Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_AC12ERR register.
//
//*****************************************************************************

#define CNIBAC12E                     0x00000080      // Command Not Issued By Auto CMD12 Error
#define AC12IE                        0x00000010      // Auto CMD12 Index Error
#define AC12CE                        0x00000008      // Auto CMD12 CRC Error
#define AC12EBE                       0x00000004      // Auto CMD12 End Bit Error
#define AC12TOE                       0x00000002      // Auto CMD12 Timeout Error
#define AC12NE                        0x00000001      // Auto CMD12 Not Executed
#define CNIBAC12E                     0x00000080      // Command Not Issued By Auto CMD12 Error
#define AC12IE                        0x00000010      // Auto CMD12 Index Error
#define AC12CE                        0x00000008      // Auto CMD12 CRC Error
#define AC12EBE                       0x00000004      // Auto CMD12 End Bit Error
#define AC12TOE                       0x00000002      // Auto CMD12 Timeout Error
#define AC12NE                        0x00000001      // Auto CMD12 Not Executed


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_HTCAPBLT register.
//
//*****************************************************************************

#define VS18                          0x04000000      // Voltage Support 1.8 V
#define VS30                          0x02000000      // Voltage Support 3.0 V
#define VS33                          0x01000000      // Voltage Support 3.3 V
#define SRS                           0x00800000      // Suspend/Resume Support
#define DMAS                          0x00400000      // DMA Support
#define HSS                           0x00200000      // High Speed Support
#define ADMAS                         0x00100000      // ADMA Support
#define MBL                           0x001C0000      // Max Block Length
#define VS18                          0x04000000      // Voltage Support 1.8 V
#define VS30                          0x02000000      // Voltage Support 3.0 V
#define VS33                          0x01000000      // Voltage Support 3.3 V
#define SRS                           0x00800000      // Suspend/Resume Support
#define DMAS                          0x00400000      // DMA Support
#define HSS                           0x00200000      // High Speed Support
#define ADMAS                         0x00100000      // ADMA Support
#define MBL                           0x001C0000      // Max Block Length


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_WML register.
//
//*****************************************************************************

#define WRWML                         0x1F0000000      // Write Watermark Level
#define RDWML                         0x00007F80      // Read Watermark Level
#define WRWML                         0x7F800000      // Write Watermark Level
#define RDWML                         0x00007F80      // Read Watermark Level


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_ADMAES register.
//
//*****************************************************************************

#define ADMADCE                       0x00000008      // ADMA Descritor Error
#define ADMALME                       0x00000004      // ADMA Length Mismatch Error
#define ADMAES                        0x00000006      // ADMA Error State (when ADMA Error is occurred.)
#define ADMADCE                       0x00000008      // ADMA Descritor Error
#define ADMALME                       0x00000004      // ADMA Length Mismatch Error
#define ADMAES                        0x00000006      // ADMA Error State (when ADMA Error is occurred.)


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_ADSADDR register.
//
//*****************************************************************************

#define ADSADDR                       0x1FFFFFFF80000000      // ADMA System Address
#define Reserved                      0x00000006      // - 
#define ADSADDR                       0x1FFFFFFF80000000      // ADMA System Address


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_VENDOR register.
//
//*****************************************************************************

#define EXBLKNU                       0x00000002      // Exact block number block read enable for SDIO CMD53
#define EXTDMAEN                      0x00000001      // External DMA Request Enable
#define EXBLKNU                       0x00000002      // Exact block number block read enable for SDIO CMD53
#define EXTDMAEN                      0x00000001      // External DMA Request Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_MMCBOOT register.
//
//*****************************************************************************

#define BOOTBLKCNT                    0x7FFF80000000      // The value defines the stop at block gap value of automatic mode. When received card block cnt is equal to BOOTBLKCNT and AUTOSABGEN is 1, then stop at block gap
#define AUTOSABGEN                    0x00000080      // When boot, enable auto stop at block gap function. This function will be triggered, and host will stop at block gap when received card block cnt is equal to BOOTBLKCNT
#define BOOTEN                        0x00000040      // Boot mode enable
#define BOOTMODE                      0x00000020      // Boot mode select
#define BOOTACK                       0x00000010      // Boot ack mode select
#define DTOCVACK                      0x00000078      // Boot ACK time out counter value
#define BOOTBLKCNT                    0x7FFF80000000      // The value defines the stop at block gap value of automatic mode. When received card block cnt is equal to BOOTBLKCNT and AUTOSABGEN is 1, then stop at block gap.
#define AUTOSABGEN                    0x00000080      // When boot, enable auto stop at block gap function. This function will be triggered, and host will stop at block gap when received card block cnt is equal to BOOTBLKCNT.
#define BOOTEN                        0x00000040      // Boot mode enable
#define BOOTMODE                      0x00000020      // Boot mode select
#define BOOTACK                       0x00000010      // Boot ack mode select
#define DTOCVACK                      0x00000078      // Boot ACK time out counter value.


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_HOSTVER register.
//
//*****************************************************************************

#define VVN                           0x007F8000      // Vendor Version Number
#define SVN                           0x00007F80      // Specification Version Number
#define VVN                           0x007F8000      // Vendor Version Number
#define SVN                           0x00007F80      // Specification Version Number


//*****************************************************************************
//
// The following are defines for the bit fields in the SDHC_FEVT register.
//
//*****************************************************************************

#define CINT                          0x80000000      // Force Event Card Interrupt
#define DMAE                          0x10000000      // Force Event DMA Error
#define AC12E                         0x01000000      // Force Event Auto Command 12 Error
#define DEBE                          0x00400000      // Force Event Data End Bit Error
#define DCE                           0x00200000      // Force Event Data CRC Error
#define DTOE                          0x00100000      // Force Event Data Time Out Error
#define CIE                           0x00080000      // Force Event Command Index Error
#define CEBE                          0x00040000      // Force Event Command End Bit Error
#define CCE                           0x00020000      // Force Event Command CRC Error
#define CTOE                          0x00010000      // Force Event Command Time Out Error
#define CNIBAC12E                     0x00000080      // Command Not Executed By Auto Command 12 Error
#define AC12IE                        0x00000010      // Force Event Auto Command 12 Index Error
#define AC12EBE                       0x00000008      // Force Event Auto Command 12 End Bit Error
#define AC12CE                        0x00000004      // Force Event Auto Command 12 CRC Error
#define AC12TOE                       0x00000002      // Force Event Auto Command 12 Time Out Error
#define AC12NE                        0x00000001      // Force Event Auto Command 12 Not Executed


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_ATAG register.
//
//*****************************************************************************

#define ATAG                          0x7FFF8000      // AC97 Tag Value


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TMSK register.
//
//*****************************************************************************

#define TMSK                          0x7FFFFFFF80000000      // Transmit Mask


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RMSK register.
//
//*****************************************************************************

#define RMSK                          0x7FFFFFFF80000000      // Receive Mask


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_ACCST register.
//
//*****************************************************************************

#define ACCST                         0x0007FE00      // AC97 Channel Status


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_ACCEN register.
//
//*****************************************************************************

#define ACCEN                         0x0007FE00      // AC97 Channel Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_ACCDIS register.
//
//*****************************************************************************

#define ACCDIS                        0x0007FE00      // AC97 Channel Disable


//*****************************************************************************
//
// The following are defines for the bit fields in the GPIOx_PDOR register.
//
//*****************************************************************************

#define PDO                           0x7FFFFFFF80000000      // Port Data Output


//*****************************************************************************
//
// The following are defines for the bit fields in the GPIOx_PSOR register.
//
//*****************************************************************************

#define PTSO                          0x7FFFFFFF80000000      // Port Set Output


//*****************************************************************************
//
// The following are defines for the bit fields in the GPIOx_PCOR register.
//
//*****************************************************************************

#define PTCO                          0x7FFFFFFF80000000      // Port Clear Output


//*****************************************************************************
//
// The following are defines for the bit fields in the GPIOx_PTOR register.
//
//*****************************************************************************

#define PTTO                          0x7FFFFFFF80000000      // Port Toggle Output


//*****************************************************************************
//
// The following are defines for the bit fields in the GPIOx_PDIR register.
//
//*****************************************************************************

#define PDI                           0x7FFFFFFF80000000      // Port Data Input


//*****************************************************************************
//
// The following are defines for the bit fields in the GPIOx_PDDR register.
//
//*****************************************************************************

#define PDD                           0x7FFFFFFF80000000      // Port Data Direction


//*****************************************************************************
//
// The following are defines for the bit fields in the TSIx_GENCS register.
//
//*****************************************************************************

#define LPCLKS                        0x10000000      // Low Power Mode Clock Source Selection
#define LPSCNITV                      0x78000000      // TSI Low Power Mode Scan Interval
#define NSCN                          0x0F800000      // Number of Consecutive Scans per Electrode
#define PS                            0x001C0000      // Electrode oscillator prescaler
#define EOSF                          0x00008000      // End of scan flag
#define OUTRGF                        0x00004000      // Out of Range Flag
#define EXTERF                        0x00002000      // External electrode error occurred
#define OVRF                          0x00001000      // Overrun error flag
#define SCNIP                         0x00000200      // Scan-in-progress status
#define SWTS                          0x00000100      // Software trigger start
#define TSIEN                         0x00000080      // TSI module enable
#define TSIIE                         0x00000040      // TSI interrupt enable
#define ERIE                          0x00000020      // TSI error interrupt Enable
#define ESOR                          0x00000010      // End-of-scan or out-of-range interrupt select
#define STM                           0x00000002      // Scan trigger mode
#define STPE                          0x00000001      // TSI stop enable while in low-power modes (STOP, VLPS, LLS, and VLLS{3,2,1})


//*****************************************************************************
//
// The following are defines for the bit fields in the TSIx_SCANC register.
//
//*****************************************************************************

#define REFCHRG                       0xF80000000      // Reference oscillator charge current select
#define CAPTRM                        0x1C000000      // Internal capacitance trim value
#define EXTCHRG                       0x0F800000      // External oscillator charge current select
#define DELVOL                        0x001C0000      // Delta voltage select applied to analog oscillators
#define SMOD                          0x007F8000      // Scan modulo
#define AMCLKDIV                      0x00000020      // Active mode clock divider
#define AMCLKS                        0x00000030      // Active mode clock source
#define AMPSC                         0x0000001C      // Active mode prescaler


//*****************************************************************************
//
// The following are defines for the bit fields in the TSIx_PEN register.
//
//*****************************************************************************

#define LPSP                          0x00780000      // Low-power scan pin
#define PEN15                         0x00008000      // TSI pin 15 enable
#define PEN14                         0x00004000      // TSI pin 14 enable
#define PEN13                         0x00002000      // TSI pin 13 enable
#define PEN12                         0x00001000      // TSI pin 12 enable
#define PEN11                         0x00000800      // TSI pin 11 enable
#define PEN10                         0x00000400      // TSI pin 10 enable
#define PEN9                          0x00000200      // TSI pin 9 enable
#define PEN8                          0x00000100      // TSI pin 8 enable
#define PEN7                          0x00000080      // TSI pin 7 enable
#define PEN6                          0x00000040      // TSI pin 6 enable
#define PEN5                          0x00000020      // TSI pin 5 enable
#define PEN4                          0x00000010      // TSI pin 4 enable
#define PEN3                          0x00000008      // TSI pin 3 enable
#define PEN2                          0x00000004      // TSI pin 2 enable
#define PEN1                          0x00000002      // TSI pin 1 enable
#define PEN0                          0x00000001      // TSI pin 0 enable


//*****************************************************************************
//
// The following are defines for the bit fields in the TSIx_STATUS register.
//
//*****************************************************************************

#define ERROF15-ERROF0                0x7FFF80000000      // TouchSensing Error Flag 15-0
#define ORNGF15-ORNGF0                0x7FFF8000      // Touch Sensing Electrode Out-of-Range Flag 15-0


//*****************************************************************************
//
// The following are defines for the bit fields in the TSIx_CNTRn register.
//
//*****************************************************************************

#define CTN                           0x7FFF80000000      // TouchSensing channel n counter value
#define CTN1                          0x7FFF8000      // TouchSensing channel n-1 counter value


//*****************************************************************************
//
// The following are defines for the bit fields in the TSIx_THRESHLDn register.
//
//*****************************************************************************

#define LTHH                          0x7FFF80000000      // Low threshold value
#define HTHH                          0x7FFF8000      // High threshold value ::


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT1 register.
//
//*****************************************************************************

#define MS                            0x00400000      // EzPort chip select pin state
#define OSC32KSEL                     0x00080000      // 32K oscillator clock select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT2 register.
//
//*****************************************************************************

#define SDHCSRC                       0x60000000      // SDHC clock source select
#define I2SSRC                        0x06000000      // I2S master clock source select
#define PLLFLLSEL                     0x00010000      // PLL/FLL clock select
#define TRACECLKSEL                   0x00001000      // Debug trace clock select
#define CMTUARTPAD                    0x00000800      // CMT/UART pad drive strength
#define FBSL                          0x00000600      // FlexBus security level
#define MCGCLKSEL                     0x00000001      // MCG clock select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT4 register.
//
//*****************************************************************************

#define FTM2CLKSEL                    0x04000000      // FlexTimer 2 External Clock Pin Select
#define FTM1CLKSEL                    0x02000000      // FTM1 External Clock Pin Select
#define FTM0CLKSEL                    0x01000000      // FlexTimer 0 External Clock Pin Select
#define FTM2CH0SRC                    0x00600000      // FTM2 channel 0 input capture source select
#define FTM1CH0SRC                    0x00180000      // FTM1 channel 0 input capture source select
#define FTM2FLT0                      0x00000100      // FTM2 Fault 0 Select
#define FTM1FLT0                      0x00000010      // FTM1 Fault 0 Select
#define FTM0FLT2                      0x00000004      // FTM0 Fault 2 Select
#define FTM0FLT1                      0x00000002      // FTM0 Fault 1 Select
#define FTM0FLT0                      0x00000001      // FTM0 Fault 0 Select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT5 register.
//
//*****************************************************************************

#define UART1RXSRC                    0x00000180      // UART 1 receive data source select
#define UARTTXSRC                     0x00000060      // UART 1 transmit data source select
#define UART0RXSRC                    0x00000018      // UART 0 receive data source select
#define UART0TXSRC                    0x00000006      // UART 0 transmit data source select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT6 register.
//
//*****************************************************************************

#define RSTFLTEN                      0x380000000      // Reset pin filter enable
#define RSTFLTSEL                     0x1F0000000      // Reset pin filter select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT7 register.
//
//*****************************************************************************

#define ADC1ALTTRGEN                  0x00008000      // ADC1 alternate trigger enable
#define ADC1PRETRGSEL                 0x0000C000      // ADC1 pre-trigger select
#define ADC1TRGSEL                    0x00007800      // ADC1 trigger select
#define ADC0ALTTRGEN                  0x00000080      // ADC0 alternate trigger enable
#define ADC0PRETRGSEL                 0x000000C0      // ADC0 pre-trigger select
#define ADC0TRGSEL                    0x00000078      // ADC0 trigger select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SDID register.
//
//*****************************************************************************

#define REVID                         0x00078000      // Device revision number
#define FAMID                         0x000001C0      // Kinetis family identification
#define PINID                         0x00000078      // Pincount identification


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC2 register.
//
//*****************************************************************************

#define DAC0                          0x00001000      // DAC0 Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC3 register.
//
//*****************************************************************************

#define ADC1                          0x08000000      // ADC1 Clock Gate Control
#define FTM2                          0x01000000      // FTM2 Clock Gate Control
#define SDHC                          0x00020000      // SDHC Clock Gate Control
#define FLEXCAN1                      0x00000010      // FlexCAN1 Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC4 register.
//
//*****************************************************************************

#define LLWU                          0x10000000      // LLWU Clock Gate Control
#define VREF                          0x00100000      // VREF Clock Gate Control
#define CMP                           0x00080000      // Comparator Clock Gate Control
#define UART3                         0x00002000      // UART3 Clock Gate Control
#define UART2                         0x00001000      // UART2 Clock Gate Control
#define UART1                         0x00000800      // UART1 Clock Gate Control
#define UART0                         0x00000400      // UART0 Clock Gate Control
#define I2C1                          0x00000080      // I2C1 Clock Gate Control
#define I2C0                          0x00000040      // I2C0 Clock Gate Control
#define CMT                           0x00000004      // CMT Clock Gate Control
#define EWM                           0x00000002      // EWM Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC5 register.
//
//*****************************************************************************

#define PORTE                         0x00002000      // Port E Clock Gate Control
#define PORTD                         0x00001000      // Port D Clock Gate Control
#define PORTC                         0x00000800      // Port C Clock Gate Control
#define PORTB                         0x00000400      // Port B Clock Gate Control
#define PORTA                         0x00000200      // Port A Clock Gate Control
#define TSI                           0x00000020      // TSI Clock Gate Control
#define REGFILE                       0x00000002      // Register File Clock Gate Control
#define LPTIMER                       0x00000001      // Low Power Timer Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC6 register.
//
//*****************************************************************************

#define RTC                           0x20000000      // RTC Clock Gate Control
#define ADC0                          0x08000000      // ADC0 Clock Gate Control
#define FTM1                          0x02000000      // FTM1 Clock Gate Control
#define FTM0                          0x01000000      // FTM0 Clock Gate Control
#define PIT                           0x00800000      // PIT Clock Gate Control
#define PDB                           0x00400000      // PDB Clock Gate Control
#define CRC                           0x00040000      // CRC Clock Gate Control
#define I2S                           0x00008000      // I2S Clock Gate Control
#define SPI1                          0x00004000      // SPI1 Clock Gate Control
#define SPI0                          0x00002000      // SPI0 Clock Gate Control
#define FLEXCAN0                      0x00000010      // FlexCAN0 Clock Gate Control
#define DMAMUX                        0x00000002      // DMA Mux Clock Gate Control
#define FTFL                          0x00000001      // Flash Memory Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC7 register.
//
//*****************************************************************************

#define MPU                           0x00000004      // MPU Clock Gate Control
#define DMA                           0x00000002      // DMA Clock Gate Control
#define FLEXBUS                       0x00000001      // FlexBus Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_CLKDIV1 register.
//
//*****************************************************************************

#define OUTDIV1                       0x780000000      // Clock 1 output divider value
#define OUTDIV2                       0x78000000      // Clock 2 output divider value
#define OUTDIV3                       0x07800000      // Clock 3 output divider value
#define OUTDIV4                       0x00780000      // Clock 4 output divider value


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_CLKDIV2 register.
//
//*****************************************************************************

#define I2SDIV                        0x7FF80000000      // I2S clock divider value
#define I2SFRAC                       0x007F8000      // I2S clock divider fraction ::
#define I2SDIV                        0x7FF80000000      // I2S clock divider value
#define I2SFRAC                       0x007F8000      // I2S clock divider fraction


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_FCFG1 register.
//
//*****************************************************************************

#define NVMSIZE                       0x780000000      // FlexNVM size
#define PFSIZE                        0x78000000      // Program flash size
#define EESIZE                        0x00780000      // EEPROM size


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_FCFG2 register.
//
//*****************************************************************************

#define SWAPPFLSH                     0x80000000      // Swap program flash
#define MAXADDR0                      0x7E0000000      // Max address block 0
#define PFLSH                         0x00800000      // Program flash
#define MAXADDR1                      0x07E00000      // Max address block 1


//*****************************************************************************
//
// The following are defines for the bit fields in the CRC_CRC register.
//
//*****************************************************************************

#define HU                            0x7F80000000      // CRC High Upper Byte
#define HL                            0x7F800000      // CRC High Lower Byte
#define LU                            0x007F8000      // CRC Low Upper Byte
#define LL                            0x00007F80      // CRC Low Lower Byte


//*****************************************************************************
//
// The following are defines for the bit fields in the CRC_GPOLY register.
//
//*****************************************************************************

#define HIGH                          0x7FFF80000000      // High polynominal half-word
#define LOW                           0x7FFF8000      // Low polynominal half-word


//*****************************************************************************
//
// The following are defines for the bit fields in the CRC_CTRL register.
//
//*****************************************************************************

#define TOT                           0x180000000      // Type of Transpose for Writes
#define TOTR                          0x60000000      // Type of Transpose for Read
#define FXOR                          0x04000000      // Complement Read of CRC data register
#define WAS                           0x02000000      // Write CRC data register as seed


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_TSR register.
//
//*****************************************************************************

#define TSR                           0x7FFFFFFF80000000      // Time Seconds Register


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_TPR register.
//
//*****************************************************************************

#define Reserved                      0x7FFF80000000      // This read-only field is reserved and always has the value zero
#define TPR                           0x7FFF8000      // Time Prescaler Register


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_TAR register.
//
//*****************************************************************************

#define TAR                           0x7FFFFFFF80000000      // Time Alarm Register


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_TCR register.
//
//*****************************************************************************

#define CIC                           0x7F80000000      // Compensation Interval Counter
#define TCV                           0x7F800000      // Time Compensation Value
#define CIR                           0x007F8000      // Compensation Interval Register
#define TCR                           0x00007F80      // Time Compensation Register


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_CR register.
//
//*****************************************************************************

#define SC2P                          0x00002000      // Oscillator 2pF load configure
#define SC4P                          0x00001000      // Oscillator 4pF load configure
#define SC8P                          0x00000800      // Oscillator 8pF load configure
#define SC16P                         0x00000400      // Oscillator 16pF load configure
#define CLKO                          0x00000200      // Clock Output
#define OSCE                          0x00000100      // Oscillator Enable
#define UM                            0x00000008      // Update Mode
#define SUP                           0x00000004      // Supervisor Access
#define WPE                           0x00000002      // Wakeup Pin Enable
#define SWR                           0x00000001      // Software Reset


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_SR register.
//
//*****************************************************************************

#define TCE                           0x00000010      // Time Counter Enable
#define TAF                           0x00000004      // Time Alarm Flag
#define TOF                           0x00000002      // Time Overflow Flag
#define TIF                           0x00000001      // Time Invalid Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_LR register.
//
//*****************************************************************************

#define Reserved                      0x00000080      // This read-only field is reserved and always has the value one
#define LRL                           0x00000040      // Lock Register Lock
#define SRL                           0x00000020      // Status Register Lock
#define CRL                           0x00000010      // Control Register Lock
#define TCL                           0x00000008      // Time Compensation Lock


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_IER register.
//
//*****************************************************************************

#define TAIE                          0x00000004      // Time Alarm Interrupt Enable
#define TOIE                          0x00000002      // Time Overflow Interrupt Enable
#define TIIE                          0x00000001      // Time Invalid Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_WAR register.
//
//*****************************************************************************

#define IERW                          0x00000080      // Interrupt Enable Register Write
#define LRW                           0x00000040      // Lock Register Write
#define SRW                           0x00000020      // Status Register Write
#define CRW                           0x00000010      // Control Register Write
#define TCRW                          0x00000008      // Time Compensation Register Write
#define TARW                          0x00000004      // Time Alarm Register Write
#define TPRW                          0x00000002      // Time Prescaler Register Write
#define TSRW                          0x00000001      // Time Seconds Register Write


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_RAR register.
//
//*****************************************************************************

#define IERR                          0x00000080      // Interrupt Enable Register Read
#define LRR                           0x00000040      // Lock Register Read
#define SRR                           0x00000020      // Status Register Read
#define CRR                           0x00000010      // Control Register Read
#define TCRR                          0x00000008      // Time Compensation Register Read
#define TARR                          0x00000004      // Time Alarm Register Read
#define TPRR                          0x00000002      // Time Prescaler Register Read
#define TSRR                          0x00000001      // Time Seconds Register Read


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSAR0 register.
//
//*****************************************************************************

#define BASE_ADDR                     0x7FFFFFFF80000000      // Chip select address register


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSMR0 register.
//
//*****************************************************************************

#define MASK                          0x7FFFFFFF80000000      // Chip select mask register


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSCR0 register.
//
//*****************************************************************************

#define AROFFSETOFFSET                0x80000000      // Address offset enable
#define AROFFSETOFFSET                0x40000000      // Address offset size
#define BURST                         0x20000000      // Burst mode enable
#define WAITENA                       0x10000000      // Wait enable
#define WAITCNT                       0x78000000      // Wait count
#define EXRW                          0x00800000      // Extended read/write
#define WRACC                         0x00400000      // Write access
#define RDACC                         0x00200000      // Read access
#define AA                            0x00100000      // Auto-acknowledge enable
#define PCSISWIDTH                    0x00780000      // Chip select width
#define BL                            0x007F8000      // Burst length
#define WRTHRESHWRTHRESH              0x00007F80      // Write threshold


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSAR1 register.
//
//*****************************************************************************

#define BASE_ADDR                     0x7FFFFFFF80000000      // Chip select address register


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSMR1 register.
//
//*****************************************************************************

#define MASK                          0x7FFFFFFF80000000      // Chip select mask register


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSCR1 register.
//
//*****************************************************************************

#define AROFFSETOFFSET                0x80000000      // Address offset enable
#define AROFFSETOFFSET                0x40000000      // Address offset size
#define BURST                         0x20000000      // Burst mode enable
#define WAITENA                       0x10000000      // Wait enable
#define WAITCNT                       0x78000000      // Wait count
#define EXRW                          0x00800000      // Extended read/write
#define WRACC                         0x00400000      // Write access
#define RDACC                         0x00200000      // Read access
#define AA                            0x00100000      // Auto-acknowledge enable
#define PCSISWIDTH                    0x00780000      // Chip select width
#define BL                            0x007F8000      // Burst length
#define WRTHRESHWRTHRESH              0x00007F80      // Write threshold


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSAR2 register.
//
//*****************************************************************************

#define BASE_ADDR                     0x7FFFFFFF80000000      // Chip select address register


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSMR2 register.
//
//*****************************************************************************

#define MASK                          0x7FFFFFFF80000000      // Chip select mask register


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSCR2 register.
//
//*****************************************************************************

#define AROFFSETOFFSET                0x80000000      // Address offset enable
#define AROFFSETOFFSET                0x40000000      // Address offset size
#define BURST                         0x20000000      // Burst mode enable
#define WAITENA                       0x10000000      // Wait enable
#define WAITCNT                       0x78000000      // Wait count
#define EXRW                          0x00800000      // Extended read/write
#define WRACC                         0x00400000      // Write access
#define RDACC                         0x00200000      // Read access
#define AA                            0x00100000      // Auto-acknowledge enable
#define PCSISWIDTH                    0x00780000      // Chip select width
#define BL                            0x007F8000      // Burst length
#define WRTHRESHWRTHRESH              0x00007F80      // Write threshold


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSAR3 register.
//
//*****************************************************************************

#define BASE_ADDR                     0x7FFFFFFF80000000      // Chip select address register


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSMR3 register.
//
//*****************************************************************************

#define MASK                          0x7FFFFFFF80000000      // Chip select mask register


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSCR3 register.
//
//*****************************************************************************

#define AROFFSETOFFSET                0x80000000      // Address offset enable
#define AROFFSETOFFSET                0x40000000      // Address offset size
#define BURST                         0x20000000      // Burst mode enable
#define WAITENA                       0x10000000      // Wait enable
#define WAITCNT                       0x78000000      // Wait count
#define EXRW                          0x00800000      // Extended read/write
#define WRACC                         0x00400000      // Write access
#define RDACC                         0x00200000      // Read access
#define AA                            0x00100000      // Auto-acknowledge enable
#define PCSISWIDTH                    0x00780000      // Chip select width
#define BL                            0x007F8000      // Burst length
#define WRTHRESHWRTHRESH              0x00007F80      // Write threshold


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSAR4 register.
//
//*****************************************************************************

#define BASE_ADDR                     0x7FFFFFFF80000000      // Chip select address register


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSMR4 register.
//
//*****************************************************************************

#define MASK                          0x7FFFFFFF80000000      // Chip select mask register


//*****************************************************************************
//
// The following are defines for the bit fields in the FB_CSCR4 register.
//
//*****************************************************************************

#define AROFFSETOFFSET                0x80000000      // Address offset enable
#define AROFFSETOFFSET                0x40000000      // Address offset size
#define BURST                         0x20000000      // Burst mode enable
#define WAITENA                       0x10000000      // Wait enable
#define WAITCNT                       0x78000000      // Wait count
#define EXRW                          0x00800000      // Extended read/write
#define WRACC                         0x00400000      // Write access
#define RDACC                         0x00200000      // Read access
#define AA                            0x00100000      // Auto-acknowledge enable
#define PCSISWIDTH                    0x00780000      // Chip select width
#define BL                            0x007F8000      // Burst length
#define WRTHRESHWRTHRESH              0x00007F80      // Write threshold



#endif // __MK10DN512ZVMB10_H__

