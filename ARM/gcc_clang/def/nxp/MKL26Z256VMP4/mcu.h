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

#ifndef __MKL26Z256VMP4_H__
#define __MKL26Z256VMP4_H__



//*****************************************************************************
//
// Interrupt assignments
//
//*****************************************************************************

#define NUMBER_OF_INT_VECTORS                   46               // Number of interrupts in the Vector table
#define NotAvail_IRQn                           -34              // Not available device specific interrupt
#define NonMaskableInterrupt_IRQn               -14              // Non-maskable interrupt (NMI)
#define HardFault_IRQn                          -13              // Hard fault
#define SVCall_IRQn                             -5               // Supervisor call (SVCall)
#define PendSV_IRQn                             -2               // Pendable request for system service (PendableSrvReq)
#define SysTick_IRQn                            -1               // System tick timer (SysTick)
#define DMA0_IRQn                               0                // DMA channel 0 transfer complete and error
#define DMA1_IRQn                               1                // DMA channel 1 transfer complete and error
#define DMA2_IRQn                               2                // DMA channel 2 transfer complete and error
#define DMA3_IRQn                               3                // DMA channel 3 transfer complete and error
#define Command_Complete_And_Read_Collision_IRQn 5                // Command complete and read collision
#define PMC_IRQn                                6                // Low-voltage detect, low-voltage warning
#define LLWU_IRQn                               7                // Low Leakage Wakeup
#define I2C0_IRQn                               8                // -
#define I2C1_IRQn                               9                // -
#define SPI0_IRQn                               10               // Single interrupt vector for all sources
#define SPI1_IRQn                               11               // Single interrupt vector for all sources
#define UART0_ERR_IRQn                          12               // Status and error
#define UART1_ERR_IRQn                          13               // Status and error
#define UART2_ERR_IRQn                          14               // Status and error
#define ADC0_IRQn                               15               // -
#define CMP0_IRQn                               16               // -
#define TPM0_IRQn                               17               // -
#define TPM1_IRQn                               18               // -
#define TPM2_IRQn                               19               // -
#define Alarm_Interrupt_IRQn                    20               // Alarm interrupt
#define Seconds_Interrupt_IRQn                  21               // Seconds interrupt
#define SVIC_IRQn                               22               // Single interrupt vector for all channels
#define Single_Interrupt_Vector_For_All_SourceS_IRQn 23               // Single interrupt vector for all sources
#define USB_OTG_IRQn                            24               // -
#define DAC0_IRQn                               25               // -
#define TSI0_IRQn                               26               // -
#define MCG_IRQn                                27               // -
#define LPTMR0_IRQn                             28               // -
#define PORTA_IRQn                              30               // Pin detect (Port A)
#define PORTC_IRQn                              31               // Pin detect (Single interrupt vector for Port C and Port D)



//*****************************************************************************
//
// Port control and interrupt (PORT) registers
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
#define PORTE_PCR23                   (*((volatile uint32_t *)0x4004D05C))      // Pin Control Register n (PORTE_PCR23)
#define PORTE_PCR24                   (*((volatile uint32_t *)0x4004D060))      // Pin Control Register n (PORTE_PCR24)
#define PORTE_PCR25                   (*((volatile uint32_t *)0x4004D064))      // Pin Control Register n (PORTE_PCR25)
#define PORTE_PCR26                   (*((volatile uint32_t *)0x4004D068))      // Pin Control Register n (PORTE_PCR26)
#define PORTE_PCR27                   (*((volatile uint32_t *)0x4004D06C))      // Pin Control Register n (PORTE_PCR27)
#define PORTE_PCR28                   (*((volatile uint32_t *)0x4004D070))      // Pin Control Register n (PORTE_PCR28)
#define PORTE_PCR29                   (*((volatile uint32_t *)0x4004D074))      // Pin Control Register n (PORTE_PCR29)
#define PORTE_PCR30                   (*((volatile uint32_t *)0x4004D078))      // Pin Control Register n (PORTE_PCR30)
#define PORTE_PCR31                   (*((volatile uint32_t *)0x4004D07C))      // Pin Control Register n (PORTE_PCR31)
#define PORTE_GPCLR                   (*((volatile uint32_t *)0x4004D080))      // Global Pin Control Low Register (PORTE_GPCLR)
#define PORTE_GPCHR                   (*((volatile uint32_t *)0x4004D084))      // Global Pin Control High Register (PORTE_GPCHR)
#define PORTE_ISFR                    (*((volatile uint32_t *)0x4004D0A0))      // Interrupt Status Flag Register (PORTE_ISFR)


//*****************************************************************************
//
// System Integration Module (SIM) registers
//
//*****************************************************************************

#define SIM_SOPT1                     (*((volatile uint32_t *)0x40047000))      // System Options Register 1 (SIM_SOPT1)
#define SIM_SOPT1CFG                  (*((volatile uint32_t *)0x40047004))      // SOPT1 Configuration Register (SIM_SOPT1CFG)
#define SIM_SOPT2                     (*((volatile uint32_t *)0x40048004))      // System Options Register 2 (SIM_SOPT2)
#define SIM_SOPT4                     (*((volatile uint32_t *)0x4004800C))      // System Options Register 4 (SIM_SOPT4)
#define SIM_SOPT5                     (*((volatile uint32_t *)0x40048010))      // System Options Register 5 (SIM_SOPT5)
#define SIM_SOPT7                     (*((volatile uint32_t *)0x40048018))      // System Options Register 7 (SIM_SOPT7)
#define SIM_SDID                      (*((volatile uint32_t *)0x40048024))      // System Device Identification Register (SIM_SDID)
#define SIM_SCGC4                     (*((volatile uint32_t *)0x40048034))      // System Clock Gating Control Register 4 (SIM_SCGC4)
#define SIM_SCGC5                     (*((volatile uint32_t *)0x40048038))      // System Clock Gating Control Register 5 (SIM_SCGC5)
#define SIM_SCGC6                     (*((volatile uint32_t *)0x4004803C))      // System Clock Gating Control Register 6 (SIM_SCGC6)
#define SIM_SCGC7                     (*((volatile uint32_t *)0x40048040))      // System Clock Gating Control Register 7 (SIM_SCGC7)
#define SIM_CLKDIV1                   (*((volatile uint32_t *)0x40048044))      // System Clock Divider Register 1 (SIM_CLKDIV1)
#define SIM_FCFG1                     (*((volatile uint32_t *)0x4004804C))      // Flash Configuration Register 1 (SIM_FCFG1)
#define SIM_FCFG2                     (*((volatile uint32_t *)0x40048050))      // Flash Configuration Register 2 (SIM_FCFG2)
#define SIM_UIDMH                     (*((volatile uint32_t *)0x40048058))      // Unique Identification Register Mid-High (SIM_UIDMH)
#define SIM_UIDML                     (*((volatile uint32_t *)0x4004805C))      // Unique Identification Register Mid Low (SIM_UIDML)
#define SIM_UIDL                      (*((volatile uint32_t *)0x40048060))      // Unique Identification Register Low (SIM_UIDL)
#define SIM_COPC                      (*((volatile uint32_t *)0x40048100))      // COP Control Register (SIM_COPC)
#define SIM_SRVCOP                    (*((volatile uint32_t *)0x40048104))      // Service COP (SIM_SRVCOP)


//*****************************************************************************
//
// System Mode Controller (SMC) registers
//
//*****************************************************************************

#define SMC_PMPROT                    (*((volatile uint32_t *)0x4007E000))      // Power Mode Protection register (SMC_PMPROT)
#define SMC_PMCTRL                    (*((volatile uint32_t *)0x4007E001))      // Power Mode Control register (SMC_PMCTRL)
#define SMC_STOPCTRL                  (*((volatile uint32_t *)0x4007E002))      // Stop Control Register (SMC_STOPCTRL)
#define SMC_PMSTAT                    (*((volatile uint32_t *)0x4007E003))      // Power Mode Status register (SMC_PMSTAT)


//*****************************************************************************
//
// Power Management Controller (PMC) registers
//
//*****************************************************************************

#define PMC_LVDSC1                    (*((volatile uint32_t *)0x4007D000))      // Low Voltage Detect Status And Control 1 register
#define PMC_LVDSC2                    (*((volatile uint32_t *)0x4007D001))      // Low Voltage Detect Status And Control 2 register
#define PMC_REGSC                     (*((volatile uint32_t *)0x4007D002))      // Regulator Status And Control register


//*****************************************************************************
//
// Low-Leakage Wakeup Unit (LLWU) registers
//
//*****************************************************************************

#define LLWU_PE1                      (*((volatile uint32_t *)0x4007C000))      // LLWU Pin Enable 1 register (LLWU_PE1)
#define LLWU_PE2                      (*((volatile uint32_t *)0x4007C001))      // LLWU Pin Enable 2 register (LLWU_PE2)
#define LLWU_PE3                      (*((volatile uint32_t *)0x4007C002))      // LLWU Pin Enable 3 register (LLWU_PE3)
#define LLWU_PE4                      (*((volatile uint32_t *)0x4007C003))      // LLWU Pin Enable 4 register (LLWU_PE4)
#define LLWU_ME                       (*((volatile uint32_t *)0x4007C004))      // LLWU Module Enable register (LLWU_ME)
#define LLWU_F1                       (*((volatile uint32_t *)0x4007C005))      // LLWU Flag 1 register (LLWU_F1)
#define LLWU_F2                       (*((volatile uint32_t *)0x4007C006))      // LLWU Flag 2 register (LLWU_F2)
#define LLWU_F3                       (*((volatile uint32_t *)0x4007C007))      // LLWU Flag 3 register (LLWU_F3)
#define LLWU_FILT1                    (*((volatile uint32_t *)0x4007C008))      // LLWU Pin Filter 1 register (LLWU_FILT1)
#define LLWU_FILT2                    (*((volatile uint32_t *)0x4007C009))      // LLWU Pin Filter 2 register (LLWU_FILT2)


//*****************************************************************************
//
// Micro Trace Buffer (MTB) registers
//
//*****************************************************************************

#define MTB_POSITION                  (*((volatile uint32_t *)0xF0000000))      // MTB Position Register
#define MTB_MASTER                    (*((volatile uint32_t *)0xF0000004))      // MTB Master Register
#define MTB_FLOW                      (*((volatile uint32_t *)0xF0000008))      // MTB Flow Register
#define MTB_BASE                      (*((volatile uint32_t *)0xF000000C))      // MTB Base Register
#define MTB_MODECTRL                  (*((volatile uint32_t *)0xF0000F00))      // Integration Mode Control Register
#define MTB_TAGSET                    (*((volatile uint32_t *)0xF0000FA0))      // Claim TAG Set Register
#define MTB_TAGCLEAR                  (*((volatile uint32_t *)0xF0000FA4))      // Claim TAG Clear Register
#define MTB_LOCKACCESS                (*((volatile uint32_t *)0xF0000FB0))      // Lock Access Register
#define MTB_LOCKSTAT                  (*((volatile uint32_t *)0xF0000FB4))      // Lock Status Register
#define MTB_AUTHSTAT                  (*((volatile uint32_t *)0xF0000FB8))      // Authentication Status Register
#define MTB_DEVICEARCH                (*((volatile uint32_t *)0xF0000FBC))      // Device Architecture Register
#define MTB_DEVICECFG                 (*((volatile uint32_t *)0xF0000FC8))      // Device Configuration Register
#define MTB_DEVICETYPID               (*((volatile uint32_t *)0xF0000FCC))      // Device Type Identifier Register
#define MTB_PERIPHID4                 (*((volatile uint32_t *)0xF0000FD0))      // Peripheral ID Register
#define MTB_PERIPHID5                 (*((volatile uint32_t *)0xF0000FD4))      // Peripheral ID Register
#define MTB_PERIPHID6                 (*((volatile uint32_t *)0xF0000FD8))      // Peripheral ID Register
#define MTB_PERIPHID7                 (*((volatile uint32_t *)0xF0000FDC))      // Peripheral ID Register
#define MTB_PERIPHID0                 (*((volatile uint32_t *)0xF0000FE0))      // Peripheral ID Register
#define MTB_PERIPHID1                 (*((volatile uint32_t *)0xF0000FE4))      // Peripheral ID Register
#define MTB_PERIPHID2                 (*((volatile uint32_t *)0xF0000FE8))      // Peripheral ID Register
#define MTB_PERIPHID3                 (*((volatile uint32_t *)0xF0000FEC))      // Peripheral ID Register
#define MTB_COMPID0                   (*((volatile uint32_t *)0xF0000FF0))      // Component ID Register
#define MTB_COMPID1                   (*((volatile uint32_t *)0xF0000FF4))      // Component ID Register
#define MTB_COMPID2                   (*((volatile uint32_t *)0xF0000FF8))      // Component ID Register
#define MTB_COMPID3                   (*((volatile uint32_t *)0xF0000FFC))      // Component ID Register


//*****************************************************************************
//
// Direct Memory Access Multiplexer (DMAMUX) registers
//
//*****************************************************************************

#define DMAMUX0_CHCFG0                (*((volatile uint32_t *)0x40021000))      // Channel Configuration register
#define DMAMUX0_CHCFG1                (*((volatile uint32_t *)0x40021001))      // Channel Configuration register
#define DMAMUX0_CHCFG2                (*((volatile uint32_t *)0x40021002))      // Channel Configuration register
#define DMAMUX0_CHCFG3                (*((volatile uint32_t *)0x40021003))      // Channel Configuration register


//*****************************************************************************
//
// DMA Controller Module registers
//
//*****************************************************************************

#define DMA_SAR0                      (*((volatile uint32_t *)0x40008100))      // Source Address Register
#define DMA_DAR0                      (*((volatile uint32_t *)0x40008104))      // Destination Address Register
#define DMA_DSR_BCR0                  (*((volatile uint32_t *)0x40008108))      // DMA Status Register / Byte Count Register
#define DMA_DCR0                      (*((volatile uint32_t *)0x4000810C))      // DMA Control Register
#define DMA_SAR1                      (*((volatile uint32_t *)0x40008110))      // Source Address Register
#define DMA_DAR1                      (*((volatile uint32_t *)0x40008114))      // Destination Address Register
#define DMA_DSR_BCR1                  (*((volatile uint32_t *)0x40008118))      // DMA Status Register / Byte Count Register
#define DMA_DCR1                      (*((volatile uint32_t *)0x4000811C))      // DMA Control Register
#define DMA_SAR2                      (*((volatile uint32_t *)0x40008120))      // Source Address Register
#define DMA_DAR2                      (*((volatile uint32_t *)0x40008124))      // Destination Address Register
#define DMA_DSR_BCR2                  (*((volatile uint32_t *)0x40008128))      // DMA Status Register / Byte Count Register
#define DMA_DCR2                      (*((volatile uint32_t *)0x4000812C))      // DMA Control Register
#define DMA_SAR3                      (*((volatile uint32_t *)0x40008130))      // Source Address Register
#define DMA_DAR3                      (*((volatile uint32_t *)0x40008134))      // Destination Address Register
#define DMA_DSR_BCR3                  (*((volatile uint32_t *)0x40008138))      // DMA Status Register / Byte Count Register
#define DMA_DCR3                      (*((volatile uint32_t *)0x4000813C))      // DMA Control Register


//*****************************************************************************
//
// Multipurpose Clock Generator (MCG) registers
//
//*****************************************************************************

#define MCG_C1                        (*((volatile uint32_t *)0x40064000))      // MCG Control 1 Register (MCG_C1)
#define MCG_C2                        (*((volatile uint32_t *)0x40064001))      // MCG Control 2 Register (MCG_C2)
#define MCG_C3                        (*((volatile uint32_t *)0x40064002))      // MCG Control 3 Register (MCG_C3)
#define MCG_C4                        (*((volatile uint32_t *)0x40064003))      // MCG Control 4 Register (MCG_C4)
#define MCG_C5                        (*((volatile uint32_t *)0x40064004))      // MCG Control 5 Register (MCG_C5)
#define MCG_C6                        (*((volatile uint32_t *)0x40064005))      // MCG Control 6 Register (MCG_C6)
#define MCG_S                         (*((volatile uint32_t *)0x40064006))      // MCG Status Register (MCG_S)
#define MCG_SC                        (*((volatile uint32_t *)0x40064008))      // MCG Status and Control Register (MCG_SC)
#define MCG_ATCVH                     (*((volatile uint32_t *)0x4006400A))      // MCG Auto Trim Compare Value High Register (MCG_ATCVH)
#define MCG_ATCVL                     (*((volatile uint32_t *)0x4006400B))      // MCG Auto Trim Compare Value Low Register (MCG_ATCVL)
#define MCG_C7                        (*((volatile uint32_t *)0x4006400C))      // MCG Control 7 Register (MCG_C7)
#define MCG_C8                        (*((volatile uint32_t *)0x4006400D))      // MCG Control 8 Register (MCG_C8)
#define MCG_C9                        (*((volatile uint32_t *)0x4006400E))      // MCG Control 9 Register (MCG_C9)
#define MCG_C10                       (*((volatile uint32_t *)0x4006400F))      // MCG Control 10 Register (MCG_C10)


//*****************************************************************************
//
// Oscillator (OSC) registers
//
//*****************************************************************************

#define OSC0_CR                       (*((volatile uint32_t *)0x40065000))      // OSC Control Register (OSC0_CR)


//*****************************************************************************
//
// Analog-to-digital converter (ADC) registers
//
//*****************************************************************************

#define ADC0_SC1A                     (*((volatile uint32_t *)0x4003B000))      // ADC Status and Control Registers 1 (ADC0_SC1A)
#define ADC0_SC1B                     (*((volatile uint32_t *)0x4003B004))      // ADC Status and Control Registers 1 (ADC0_SC1B)
#define ADC0_CFG1                     (*((volatile uint32_t *)0x4003B008))      // ADC Configuration Register 1 (ADC0_CFG1)
#define ADC0_CFG2                     (*((volatile uint32_t *)0x4003B00C))      // ADC Configuration Register 2 (ADC0_CFG2)
#define ADC0_RA                       (*((volatile uint32_t *)0x4003B010))      // ADC Data Result Register (ADC0_RA)
#define ADC0_RB                       (*((volatile uint32_t *)0x4003B014))      // ADC Data Result Register (ADC0_RB)
#define ADC0_CV1                      (*((volatile uint32_t *)0x4003B018))      // Compare Value Registers (ADC0_CV1)
#define ADC0_CV2                      (*((volatile uint32_t *)0x4003B01C))      // Compare Value Registers (ADC0_CV2)
#define ADC0_SC2                      (*((volatile uint32_t *)0x4003B020))      // Status and Control Register 2 (ADC0_SC2)
#define ADC0_SC3                      (*((volatile uint32_t *)0x4003B024))      // Status and Control Register 3 (ADC0_SC3)
#define ADC0_OFS                      (*((volatile uint32_t *)0x4003B028))      // ADC Offset Correction Register (ADC0_OFS)
#define ADC0_PG                       (*((volatile uint32_t *)0x4003B02C))      // ADC Plus-Side Gain Register (ADC0_PG)
#define ADC0_MG                       (*((volatile uint32_t *)0x4003B030))      // ADC Minus-Side Gain Register (ADC0_MG)
#define ADC0_CLPD                     (*((volatile uint32_t *)0x4003B034))      // ADC Plus-Side General Calibration Value Register (ADC0_CLPD)
#define ADC0_CLPS                     (*((volatile uint32_t *)0x4003B038))      // ADC Plus-Side General Calibration Value Register (ADC0_CLPS)
#define ADC0_CLP4                     (*((volatile uint32_t *)0x4003B03C))      // ADC Plus-Side General Calibration Value Register (ADC0_CLP4)
#define ADC0_CLP3                     (*((volatile uint32_t *)0x4003B040))      // ADC Plus-Side General Calibration Value Register (ADC0_CLP3)
#define ADC0_CLP2                     (*((volatile uint32_t *)0x4003B044))      // ADC Plus-Side General Calibration Value Register (ADC0_CLP2)
#define ADC0_CLP1                     (*((volatile uint32_t *)0x4003B048))      // ADC Plus-Side General Calibration Value Register (ADC0_CLP1)
#define ADC0_CLP0                     (*((volatile uint32_t *)0x4003B04C))      // ADC Plus-Side General Calibration Value Register (ADC0_CLP0)
#define ADC0_CLMD                     (*((volatile uint32_t *)0x4003B054))      // ADC Minus-Side General Calibration Value Register (ADC0_CLMD)
#define ADC0_CLMS                     (*((volatile uint32_t *)0x4003B058))      // ADC Minus-Side General Calibration Value Register (ADC0_CLMS)
#define ADC0_CLM4                     (*((volatile uint32_t *)0x4003B05C))      // ADC Minus-Side General Calibration Value Register (ADC0_CLM4)
#define ADC0_CLM3                     (*((volatile uint32_t *)0x4003B060))      // ADC Minus-Side General Calibration Value Register (ADC0_CLM3)
#define ADC0_CLM2                     (*((volatile uint32_t *)0x4003B064))      // ADC Minus-Side General Calibration Value Register (ADC0_CLM2)
#define ADC0_CLM1                     (*((volatile uint32_t *)0x4003B068))      // ADC Minus-Side General Calibration Value Register (ADC0_CLM1)
#define ADC0_CLM0                     (*((volatile uint32_t *)0x4003B06C))      // ADC Minus-Side General Calibration Value Register (ADC0_CLM0)


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


//*****************************************************************************
//
// 12-bit digital-to-analog converter (DAC) registers
//
//*****************************************************************************

#define DAC0_DAT0L                    (*((volatile uint32_t *)0x4003F000))      // DAC Data Low Register
#define DAC0_DAT0H                    (*((volatile uint32_t *)0x4003F001))      // DAC Data High Register
#define DAC0_DAT1L                    (*((volatile uint32_t *)0x4003F002))      // DAC Data Low Register
#define DAC0_DAT1H                    (*((volatile uint32_t *)0x4003F003))      // DAC Data High Register
#define DAC0_SR                       (*((volatile uint32_t *)0x4003F020))      // DAC Status Register
#define DAC0_C0                       (*((volatile uint32_t *)0x4003F021))      // DAC Control Register
#define DAC0_C1                       (*((volatile uint32_t *)0x4003F022))      // DAC Control Register 1
#define DAC0_C2                       (*((volatile uint32_t *)0x4003F023))      // DAC Control Register 2


//*****************************************************************************
//
// Timer/PWM Module (TPM) registers
//
//*****************************************************************************

#define TPM0_SC                       (*((volatile uint32_t *)0x40038000))      // Status and Control (TPM0_SC)
#define TPM0_CNT                      (*((volatile uint32_t *)0x40038004))      // Counter (TPM0_CNT)
#define TPM0_MOD                      (*((volatile uint32_t *)0x40038008))      // Modulo (TPM0_MOD)
#define TPM0_C0SC                     (*((volatile uint32_t *)0x4003800C))      // Channel (n) Status and Control (TPM0_C0SC)
#define TPM0_C0V                      (*((volatile uint32_t *)0x40038010))      // Channel (n) Value (TPM0_C0V)
#define TPM0_C1SC                     (*((volatile uint32_t *)0x40038014))      // Channel (n) Status and Control (TPM0_C1SC)
#define TPM0_C1V                      (*((volatile uint32_t *)0x40038018))      // Channel (n) Value (TPM0_C1V)
#define TPM0_C2SC                     (*((volatile uint32_t *)0x4003801C))      // Channel (n) Status and Control (TPM0_C2SC)
#define TPM0_C2V                      (*((volatile uint32_t *)0x40038020))      // Channel (n) Value (TPM0_C2V)
#define TPM0_C3SC                     (*((volatile uint32_t *)0x40038024))      // Channel (n) Status and Control (TPM0_C3SC)
#define TPM0_C3V                      (*((volatile uint32_t *)0x40038028))      // Channel (n) Value (TPM0_C3V)
#define TPM0_C4SC                     (*((volatile uint32_t *)0x4003802C))      // Channel (n) Status and Control (TPM0_C4SC)
#define TPM0_C4V                      (*((volatile uint32_t *)0x40038030))      // Channel (n) Value (TPM0_C4V)
#define TPM0_C5SC                     (*((volatile uint32_t *)0x40038034))      // Channel (n) Status and Control (TPM0_C5SC)
#define TPM0_C5V                      (*((volatile uint32_t *)0x40038038))      // Channel (n) Value (TPM0_C5V)
#define TPM0_STATUS                   (*((volatile uint32_t *)0x40038050))      // Capture and Compare Status (TPM0_STATUS)
#define TPM0_CONF                     (*((volatile uint32_t *)0x40038084))      // Configuration (TPM0_CONF)
#define TPM1_SC                       (*((volatile uint32_t *)0x40039000))      // Status and Control (TPM1_SC)
#define TPM1_CNT                      (*((volatile uint32_t *)0x40039004))      // Counter (TPM1_CNT)
#define TPM1_MOD                      (*((volatile uint32_t *)0x40039008))      // Modulo (TPM1_MOD)
#define TPM1_C0SC                     (*((volatile uint32_t *)0x4003900C))      // Channel (n) Status and Control (TPM1_C0SC)
#define TPM1_C0V                      (*((volatile uint32_t *)0x40039010))      // Channel (n) Value (TPM1_C0V)
#define TPM1_C1SC                     (*((volatile uint32_t *)0x40039014))      // Channel (n) Status and Control (TPM1_C1SC)
#define TPM1_C1V                      (*((volatile uint32_t *)0x40039018))      // Channel (n) Value (TPM1_C1V)
#define TPM1_C2SC                     (*((volatile uint32_t *)0x4003901C))      // Channel (n) Status and Control (TPM1_C2SC)
#define TPM1_C2V                      (*((volatile uint32_t *)0x40039020))      // Channel (n) Value (TPM1_C2V)
#define TPM1_C3SC                     (*((volatile uint32_t *)0x40039024))      // Channel (n) Status and Control (TPM1_C3SC)
#define TPM1_C3V                      (*((volatile uint32_t *)0x40039028))      // Channel (n) Value (TPM1_C3V)
#define TPM1_C4SC                     (*((volatile uint32_t *)0x4003902C))      // Channel (n) Status and Control (TPM1_C4SC)
#define TPM1_C4V                      (*((volatile uint32_t *)0x40039030))      // Channel (n) Value (TPM1_C4V)
#define TPM1_C5SC                     (*((volatile uint32_t *)0x40039034))      // Channel (n) Status and Control (TPM1_C5SC)
#define TPM1_C5V                      (*((volatile uint32_t *)0x40039038))      // Channel (n) Value (TPM1_C5V)
#define TPM1_STATUS                   (*((volatile uint32_t *)0x40039050))      // Capture and Compare Status (TPM1_STATUS)
#define TPM1_CONF                     (*((volatile uint32_t *)0x40039084))      // Configuration (TPM1_CONF)
#define TPM2_SC                       (*((volatile uint32_t *)0x4003A000))      // Status and Control (TPM2_SC)
#define TPM2_CNT                      (*((volatile uint32_t *)0x4003A004))      // Counter (TPM2_CNT)
#define TPM2_MOD                      (*((volatile uint32_t *)0x4003A008))      // Modulo (TPM2_MOD)
#define TPM2_C0SC                     (*((volatile uint32_t *)0x4003A00C))      // Channel (n) Status and Control (TPM2_C0SC)
#define TPM2_C0V                      (*((volatile uint32_t *)0x4003A010))      // Channel (n) Value (TPM2_C0V)
#define TPM2_C1SC                     (*((volatile uint32_t *)0x4003A014))      // Channel (n) Status and Control (TPM2_C1SC)
#define TPM2_C1V                      (*((volatile uint32_t *)0x4003A018))      // Channel (n) Value (TPM2_C1V)
#define TPM2_C2SC                     (*((volatile uint32_t *)0x4003A01C))      // Channel (n) Status and Control (TPM2_C2SC)
#define TPM2_C2V                      (*((volatile uint32_t *)0x4003A020))      // Channel (n) Value (TPM2_C2V)
#define TPM2_C3SC                     (*((volatile uint32_t *)0x4003A024))      // Channel (n) Status and Control (TPM2_C3SC)
#define TPM2_C3V                      (*((volatile uint32_t *)0x4003A028))      // Channel (n) Value (TPM2_C3V)
#define TPM2_C4SC                     (*((volatile uint32_t *)0x4003A02C))      // Channel (n) Status and Control (TPM2_C4SC)
#define TPM2_C4V                      (*((volatile uint32_t *)0x4003A030))      // Channel (n) Value (TPM2_C4V)
#define TPM2_C5SC                     (*((volatile uint32_t *)0x4003A034))      // Channel (n) Status and Control (TPM2_C5SC)
#define TPM2_C5V                      (*((volatile uint32_t *)0x4003A038))      // Channel (n) Value (TPM2_C5V)
#define TPM2_STATUS                   (*((volatile uint32_t *)0x4003A050))      // Capture and Compare Status (TPM2_STATUS)
#define TPM2_CONF                     (*((volatile uint32_t *)0x4003A084))      // Configuration (TPM2_CONF)


//*****************************************************************************
//
// Periodic interrupt timer (PIT) registers
//
//*****************************************************************************

#define PIT_MCR                       (*((volatile uint32_t *)0x40037000))      // PIT Module Control Register (PIT_MCR)
#define PIT_LTMR64H                   (*((volatile uint32_t *)0x400370E0))      // PIT Upper Lifetime Timer Register (PIT_LTMR64H)
#define PIT_LTMR64L                   (*((volatile uint32_t *)0x400370E4))      // PIT Lower Lifetime Timer Register (PIT_LTMR64L)
#define PIT_LDVAL0                    (*((volatile uint32_t *)0x40037100))      // Timer Load Value Register (PIT_LDVAL0)
#define PIT_CVAL0                     (*((volatile uint32_t *)0x40037104))      // Current Timer Value Register (PIT_CVAL0)
#define PIT_TCTRL0                    (*((volatile uint32_t *)0x40037108))      // Timer Control Register (PIT_TCTRL0)
#define PIT_TFLG0                     (*((volatile uint32_t *)0x4003710C))      // Timer Flag Register (PIT_TFLG0)
#define PIT_LDVAL1                    (*((volatile uint32_t *)0x40037110))      // Timer Load Value Register (PIT_LDVAL1)
#define PIT_CVAL1                     (*((volatile uint32_t *)0x40037114))      // Current Timer Value Register (PIT_CVAL1)
#define PIT_TCTRL1                    (*((volatile uint32_t *)0x40037118))      // Timer Control Register (PIT_TCTRL1)
#define PIT_TFLG1                     (*((volatile uint32_t *)0x4003711C))      // Timer Flag Register (PIT_TFLG1)


//*****************************************************************************
//
// Low-power timer (LPTMR) registers
//
//*****************************************************************************

#define LPTMR0_CSR                    (*((volatile uint32_t *)0x40040000))      // Low Power Timer Control Status Register (LPTMR0_CSR)
#define LPTMR0_PSR                    (*((volatile uint32_t *)0x40040004))      // Low Power Timer Prescale Register (LPTMR0_PSR)
#define LPTMR0_CMR                    (*((volatile uint32_t *)0x40040008))      // Low Power Timer Compare Register (LPTMR0_CMR)
#define LPTMR0_CNR                    (*((volatile uint32_t *)0x4004000C))      // Low Power Timer Counter Register (LPTMR0_CNR)


//*****************************************************************************
//
// Real Time Clock (RTC) registers
//
//*****************************************************************************

#define RTC_TSR                       (*((volatile uint32_t *)0x4003D000))      // RTC Time Seconds Register (RTC_TSR)
#define RTC_TPR                       (*((volatile uint32_t *)0x4003D004))      // RTC Time Prescaler Register (RTC_TPR)
#define RTC_TAR                       (*((volatile uint32_t *)0x4003D008))      // RTC Time Alarm Register (RTC_TAR)
#define RTC_TCR                       (*((volatile uint32_t *)0x4003D00C))      // RTC Time Compensation Register (RTC_TCR)
#define RTC_CR                        (*((volatile uint32_t *)0x4003D010))      // RTC Control Register (RTC_CR)
#define RTC_SR                        (*((volatile uint32_t *)0x4003D014))      // RTC Status Register (RTC_SR)
#define RTC_LR                        (*((volatile uint32_t *)0x4003D018))      // RTC Lock Register (RTC_LR)
#define RTC_IER                       (*((volatile uint32_t *)0x4003D01C))      // RTC Interrupt Enable Register (RTC_IER)


//*****************************************************************************
//
// Universal Serial Bus OTG Controller (USBOTG) registers
//
//*****************************************************************************

#define USB0_PERID                    (*((volatile uint32_t *)0x40072000))      // Peripheral ID register (USB0_PERID)
#define USB0_IDCOMP                   (*((volatile uint32_t *)0x40072004))      // Peripheral ID Complement register (USB0_IDCOMP)
#define USB0_REV                      (*((volatile uint32_t *)0x40072008))      // Peripheral Revision register (USB0_REV)
#define USB0_ADDINFO                  (*((volatile uint32_t *)0x4007200C))      // Peripheral Additional Info register (USB0_ADDINFO)
#define USB0_OTGISTAT                 (*((volatile uint32_t *)0x40072010))      // OTG Interrupt Status register (USB0_OTGISTAT)
#define USB0_OTGICR                   (*((volatile uint32_t *)0x40072014))      // OTG Interrupt Control register (USB0_OTGICR)
#define USB0_OTGSTAT                  (*((volatile uint32_t *)0x40072018))      // OTG Status register (USB0_OTGSTAT)
#define USB0_OTGCTL                   (*((volatile uint32_t *)0x4007201C))      // OTG Control register (USB0_OTGCTL)
#define USB0_ISTAT                    (*((volatile uint32_t *)0x40072080))      // Interrupt Status register (USB0_ISTAT)
#define USB0_INTEN                    (*((volatile uint32_t *)0x40072084))      // Interrupt Enable register (USB0_INTEN)
#define USB0_ERRSTAT                  (*((volatile uint32_t *)0x40072088))      // Error Interrupt Status register (USB0_ERRSTAT)
#define USB0_ERREN                    (*((volatile uint32_t *)0x4007208C))      // Error Interrupt Enable register (USB0_ERREN)
#define USB0_STAT                     (*((volatile uint32_t *)0x40072090))      // Status register (USB0_STAT)
#define USB0_CTL                      (*((volatile uint32_t *)0x40072094))      // Control register (USB0_CTL)
#define USB0_ADDR                     (*((volatile uint32_t *)0x40072098))      // Address register (USB0_ADDR)
#define USB0_BDTPAGE1                 (*((volatile uint32_t *)0x4007209C))      // BDT Page register 1 (USB0_BDTPAGE1)
#define USB0_FRMNUML                  (*((volatile uint32_t *)0x400720A0))      // Frame Number register Low (USB0_FRMNUML)
#define USB0_FRMNUMH                  (*((volatile uint32_t *)0x400720A4))      // Frame Number register High (USB0_FRMNUMH)
#define USB0_TOKEN                    (*((volatile uint32_t *)0x400720A8))      // Token register (USB0_TOKEN)
#define USB0_SOFTHLD                  (*((volatile uint32_t *)0x400720AC))      // SOF Threshold register (USB0_SOFTHLD)
#define USB0_BDTPAGE2                 (*((volatile uint32_t *)0x400720B0))      // BDT Page Register 2 (USB0_BDTPAGE2)
#define USB0_BDTPAGE3                 (*((volatile uint32_t *)0x400720B4))      // BDT Page Register 3 (USB0_BDTPAGE3)
#define USB0_ENDPT0                   (*((volatile uint32_t *)0x400720C0))      // Endpoint Control register (USB0_ENDPT0)
#define USB0_ENDPT1                   (*((volatile uint32_t *)0x400720C4))      // Endpoint Control register (USB0_ENDPT1)
#define USB0_ENDPT2                   (*((volatile uint32_t *)0x400720C8))      // Endpoint Control register (USB0_ENDPT2)
#define USB0_ENDPT3                   (*((volatile uint32_t *)0x400720CC))      // Endpoint Control register (USB0_ENDPT3)
#define USB0_ENDPT4                   (*((volatile uint32_t *)0x400720D0))      // Endpoint Control register (USB0_ENDPT4)
#define USB0_ENDPT5                   (*((volatile uint32_t *)0x400720D4))      // Endpoint Control register (USB0_ENDPT5)
#define USB0_ENDPT6                   (*((volatile uint32_t *)0x400720D8))      // Endpoint Control register (USB0_ENDPT6)
#define USB0_ENDPT7                   (*((volatile uint32_t *)0x400720DC))      // Endpoint Control register (USB0_ENDPT7)
#define USB0_ENDPT8                   (*((volatile uint32_t *)0x400720E0))      // Endpoint Control register (USB0_ENDPT8)
#define USB0_ENDPT9                   (*((volatile uint32_t *)0x400720E4))      // Endpoint Control register (USB0_ENDPT9)
#define USB0_ENDPT10                  (*((volatile uint32_t *)0x400720E8))      // Endpoint Control register (USB0_ENDPT10)
#define USB0_ENDPT11                  (*((volatile uint32_t *)0x400720EC))      // Endpoint Control register (USB0_ENDPT11)
#define USB0_ENDPT12                  (*((volatile uint32_t *)0x400720F0))      // Endpoint Control register (USB0_ENDPT12)
#define USB0_ENDPT13                  (*((volatile uint32_t *)0x400720F4))      // Endpoint Control register (USB0_ENDPT13)
#define USB0_ENDPT14                  (*((volatile uint32_t *)0x400720F8))      // Endpoint Control register (USB0_ENDPT14)
#define USB0_ENDPT15                  (*((volatile uint32_t *)0x400720FC))      // Endpoint Control register (USB0_ENDPT15)
#define USB0_USBCTRL                  (*((volatile uint32_t *)0x40072100))      // USB Control register (USB0_USBCTRL)
#define USB0_OBSERVE                  (*((volatile uint32_t *)0x40072104))      // USB OTG Observe register (USB0_OBSERVE)
#define USB0_CONTROL                  (*((volatile uint32_t *)0x40072108))      // USB OTG Control register (USB0_CONTROL)
#define USB0_USBTRC0                  (*((volatile uint32_t *)0x4007210C))      // USB Transceiver Control register 0 (USB0_USBTRC0)
#define USB0_USBFRMADJUST             (*((volatile uint32_t *)0x40072114))      // Frame Adjust Register (USB0_USBFRMADJUST)


//*****************************************************************************
//
// Serial Peripheral Interface (SPI) registers
//
//*****************************************************************************

#define SPI0_S                        (*((volatile uint32_t *)0x40076000))      // SPI Status Register (SPI0_S)
#define SPI0_BR                       (*((volatile uint32_t *)0x40076001))      // SPI Baud Rate Register (SPI0_BR)
#define SPI0_C2                       (*((volatile uint32_t *)0x40076002))      // SPI Control Register 2 (SPI0_C2)
#define SPI0_C1                       (*((volatile uint32_t *)0x40076003))      // SPI Control Register 1 (SPI0_C1)
#define SPI0_ML                       (*((volatile uint32_t *)0x40076004))      // SPI Match Register low (SPI0_ML)
#define SPI0_MH                       (*((volatile uint32_t *)0x40076005))      // SPI match register high (SPI0_MH)
#define SPI0_DL                       (*((volatile uint32_t *)0x40076006))      // SPI Data Register low (SPI0_DL)
#define SPI0_DH                       (*((volatile uint32_t *)0x40076007))      // SPI data register high (SPI0_DH)
#define SPI0_CI                       (*((volatile uint32_t *)0x4007600A))      // SPI clear interrupt register (SPI0_CI)
#define SPI0_C3                       (*((volatile uint32_t *)0x4007600B))      // SPI control register 3 (SPI0_C3)
#define SPI1_S                        (*((volatile uint32_t *)0x40077000))      // SPI Status Register (SPI1_S)
#define SPI1_BR                       (*((volatile uint32_t *)0x40077001))      // SPI Baud Rate Register (SPI1_BR)
#define SPI1_C2                       (*((volatile uint32_t *)0x40077002))      // SPI Control Register 2 (SPI1_C2)
#define SPI1_C1                       (*((volatile uint32_t *)0x40077003))      // SPI Control Register 1 (SPI1_C1)
#define SPI1_ML                       (*((volatile uint32_t *)0x40077004))      // SPI Match Register low (SPI1_ML)
#define SPI1_MH                       (*((volatile uint32_t *)0x40077005))      // SPI match register high (SPI1_MH)
#define SPI1_DL                       (*((volatile uint32_t *)0x40077006))      // SPI Data Register low (SPI1_DL)
#define SPI1_DH                       (*((volatile uint32_t *)0x40077007))      // SPI data register high (SPI1_DH)
#define SPI1_CI                       (*((volatile uint32_t *)0x4007700A))      // SPI clear interrupt register (SPI1_CI)
#define SPI1_C3                       (*((volatile uint32_t *)0x4007700B))      // SPI control register 3 (SPI1_C3)


//*****************************************************************************
//
// Inter-Integrated Circuit (I2C) registers
//
//*****************************************************************************

#define I2C0_A1                       (*((volatile uint32_t *)0x40066000))      // I2C Address Register 1 (I2C0_A1)
#define I2C0_F                        (*((volatile uint32_t *)0x40066001))      // I2C Frequency Divider register (I2C0_F)
#define I2C0_C1                       (*((volatile uint32_t *)0x40066002))      // I2C Control Register 1 (I2C0_C1)
#define I2C0_S1                       (*((volatile uint32_t *)0x40066003))      // I2C Status register 1 (I2C0_S1)
#define I2C0_D                        (*((volatile uint32_t *)0x40066004))      // I2C Data I/O register (I2C0_D)
#define I2C0_C2                       (*((volatile uint32_t *)0x40066005))      // I2C Control Register 2 (I2C0_C2)
#define I2C0_FLT                      (*((volatile uint32_t *)0x40066006))      // I2C Programmable Input Glitch Filter register (I2C0_FLT)
#define I2C0_RA                       (*((volatile uint32_t *)0x40066007))      // I2C Range Address register (I2C0_RA)
#define I2C0_SMB                      (*((volatile uint32_t *)0x40066008))      // I2C SMBus Control and Status register (I2C0_SMB)
#define I2C0_A2                       (*((volatile uint32_t *)0x40066009))      // I2C Address Register 2 (I2C0_A2)
#define I2C0_SLTH                     (*((volatile uint32_t *)0x4006600A))      // I2C SCL Low Timeout Register High (I2C0_SLTH)
#define I2C0_SLTL                     (*((volatile uint32_t *)0x4006600B))      // I2C SCL Low Timeout Register Low (I2C0_SLTL)
#define I2C1_A1                       (*((volatile uint32_t *)0x40067000))      // I2C Address Register 1 (I2C1_A1)
#define I2C1_F                        (*((volatile uint32_t *)0x40067001))      // I2C Frequency Divider register (I2C1_F)
#define I2C1_C1                       (*((volatile uint32_t *)0x40067002))      // I2C Control Register 1 (I2C1_C1)
#define I2C1_S1                       (*((volatile uint32_t *)0x40067003))      // I2C Status register 1 (I2C1_S1)
#define I2C1_D                        (*((volatile uint32_t *)0x40067004))      // I2C Data I/O register (I2C1_D)
#define I2C1_C2                       (*((volatile uint32_t *)0x40067005))      // I2C Control Register 2 (I2C1_C2)
#define I2C1_FLT                      (*((volatile uint32_t *)0x40067006))      // I2C Programmable Input Glitch Filter register (I2C1_FLT)
#define I2C1_RA                       (*((volatile uint32_t *)0x40067007))      // I2C Range Address register (I2C1_RA)
#define I2C1_SMB                      (*((volatile uint32_t *)0x40067008))      // I2C SMBus Control and Status register (I2C1_SMB)
#define I2C1_A2                       (*((volatile uint32_t *)0x40067009))      // I2C Address Register 2 (I2C1_A2)
#define I2C1_SLTH                     (*((volatile uint32_t *)0x4006700A))      // I2C SCL Low Timeout Register High (I2C1_SLTH)
#define I2C1_SLTL                     (*((volatile uint32_t *)0x4006700B))      // I2C SCL Low Timeout Register Low (I2C1_SLTL)


//*****************************************************************************
//
//  Universal Asynchronous Receiver/Transmitter (UART0) registers
//
//*****************************************************************************

#define UART0_BDH                     (*((volatile uint32_t *)0x4006A000))      // UART Baud Rate Register High
#define UART0_BDL                     (*((volatile uint32_t *)0x4006A001))      // UART Baud Rate Register Low
#define UART0_C1                      (*((volatile uint32_t *)0x4006A002))      // UART Control Register 1
#define UART0_C2                      (*((volatile uint32_t *)0x4006A003))      // UART Control Register 2
#define UART0_S1                      (*((volatile uint32_t *)0x4006A004))      // UART Status Register 1
#define UART0_S2                      (*((volatile uint32_t *)0x4006A005))      // UART Status Register 2
#define UART0_C3                      (*((volatile uint32_t *)0x4006A006))      // UART Control Register 3
#define UART0_D                       (*((volatile uint32_t *)0x4006A007))      // UART Data Register
#define UART0_MA1                     (*((volatile uint32_t *)0x4006A008))      // UART Match Address Registers 1
#define UART0_MA2                     (*((volatile uint32_t *)0x4006A009))      // UART Match Address Registers 2
#define UART0_C4                      (*((volatile uint32_t *)0x4006A00A))      // UART Control Register 4
#define UART0_C5                      (*((volatile uint32_t *)0x4006A00B))      // UART Control Register 5


//*****************************************************************************
//
// Universal Asynchronous Receiver/Transmitter (UART1 and UART2) registers
//
//*****************************************************************************

#define UART1_BDH                     (*((volatile uint32_t *)0x4006B000))      // UART Baud Rate Register: High
#define UART1_BDL                     (*((volatile uint32_t *)0x4006B001))      // UART Baud Rate Register: Low
#define UART1_C1                      (*((volatile uint32_t *)0x4006B002))      // UART Control Register 1
#define UART1_C2                      (*((volatile uint32_t *)0x4006B003))      // UART Control Register 2
#define UART1_S1                      (*((volatile uint32_t *)0x4006B004))      // UART Status Register 1
#define UART1_S2                      (*((volatile uint32_t *)0x4006B005))      // UART Status Register 2
#define UART1_C3                      (*((volatile uint32_t *)0x4006B006))      // UART Control Register 3
#define UART1_D                       (*((volatile uint32_t *)0x4006B007))      // UART Data Register
#define UART1_C4                      (*((volatile uint32_t *)0x4006B008))      // UART Control Register 4
#define UART2_BDH                     (*((volatile uint32_t *)0x4006C000))      // UART Baud Rate Register: High
#define UART2_BDL                     (*((volatile uint32_t *)0x4006C001))      // UART Baud Rate Register: Low
#define UART2_C1                      (*((volatile uint32_t *)0x4006C002))      // UART Control Register 1
#define UART2_C2                      (*((volatile uint32_t *)0x4006C003))      // UART Control Register 2
#define UART2_S1                      (*((volatile uint32_t *)0x4006C004))      // UART Status Register 1
#define UART2_S2                      (*((volatile uint32_t *)0x4006C005))      // UART Status Register 2
#define UART2_C3                      (*((volatile uint32_t *)0x4006C006))      // UART Control Register 3
#define UART2_D                       (*((volatile uint32_t *)0x4006C007))      // UART Data Register
#define UART2_C4                      (*((volatile uint32_t *)0x4006C008))      // UART Control Register 4


//*****************************************************************************
//
// Integrated Interchip Sound (I2S) / Synchronous Audio Interface (SAI) registers
//
//*****************************************************************************

#define I2S0_TCSR                     (*((volatile uint32_t *)0x4002F000))      // SAI Transmit Control Register (I2S0_TCSR)
#define I2S0_TCR2                     (*((volatile uint32_t *)0x4002F008))      // SAI Transmit Configuration 2 Register (I2S0_TCR2)
#define I2S0_TCR3                     (*((volatile uint32_t *)0x4002F00C))      // SAI Transmit Configuration 3 Register (I2S0_TCR3)
#define I2S0_TCR4                     (*((volatile uint32_t *)0x4002F010))      // SAI Transmit Configuration 4 Register (I2S0_TCR4)
#define I2S0_TCR5                     (*((volatile uint32_t *)0x4002F014))      // SAI Transmit Configuration 5 Register (I2S0_TCR5)
#define I2S0_TDR0                     (*((volatile uint32_t *)0x4002F020))      // SAI Transmit Data Register (I2S0_TDR0)
#define I2S0_TMR                      (*((volatile uint32_t *)0x4002F060))      // SAI Transmit Mask Register (I2S0_TMR)
#define I2S0_RCSR                     (*((volatile uint32_t *)0x4002F080))      // SAI Receive Control Register (I2S0_RCSR)
#define I2S0_RCR2                     (*((volatile uint32_t *)0x4002F088))      // SAI Receive Configuration 2 Register (I2S0_RCR2)
#define I2S0_RCR3                     (*((volatile uint32_t *)0x4002F08C))      // SAI Receive Configuration 3 Register (I2S0_RCR3)
#define I2S0_RCR4                     (*((volatile uint32_t *)0x4002F090))      // SAI Receive Configuration 4 Register (I2S0_RCR4)
#define I2S0_RCR5                     (*((volatile uint32_t *)0x4002F094))      // SAI Receive Configuration 5 Register (I2S0_RCR5)
#define I2S0_RDR0                     (*((volatile uint32_t *)0x4002F0A0))      // SAI Receive Data Register (I2S0_RDR0)
#define I2S0_RMR                      (*((volatile uint32_t *)0x4002F0E0))      // SAI Receive Mask Register (I2S0_RMR)
#define I2S0_MCR                      (*((volatile uint32_t *)0x4002F100))      // SAI MCLK Control Register (I2S0_MCR)
#define I2S0_MDR                      (*((volatile uint32_t *)0x4002F104))      // SAI MCLK Divide Register (I2S0_MDR)


//*****************************************************************************
//
// General-purpose input/output (GPIO) registers
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
// Touch Sensing Input (TSI) registers
//
//*****************************************************************************

#define TSI0_GENCS                    (*((volatile uint32_t *)0x40045000))      // TSI General Control and Status Register (TSI0_GENCS)
#define TSI0_DATA                     (*((volatile uint32_t *)0x40045004))      // TSI DATA Register (TSI0_DATA)
#define TSI0_TSHD                     (*((volatile uint32_t *)0x40045008))      // TSI Threshold Register (TSI0_TSHD)



//*****************************************************************************
//
// The following are defines for the bit fields in the PORTx_PCRn register.
//
//*****************************************************************************

#define ISF                           0x01000000      // Interrupt Status Flag
#define IRQC                          0x00780000      // Interrupt Configuration
#define MUX                           0x00001C00      // Pin Mux Control
#define DSE                           0x00000040      // Drive Strength Enable
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




//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT1 register.
//
//*****************************************************************************

#define USBREGEN                      0x80000000      // USB voltage regulator enable
#define USBSSTBY                      0x40000000      // USB voltage regulator in standby mode during Stop, VLPS, LLS and VLLS modes
#define USBVSTBY                      0x20000000      // USB voltage regulator in standby mode during VLPR and VLPW modes
#define OSC32KSEL                     0x00180000      // 32K Oscillator Clock Select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT1CFG register.
//
//*****************************************************************************

#define USSWE                         0x04000000      // USB voltage regulator stop standby write enable
#define UVSWE                         0x02000000      // USB voltage regulator VLP standby write enable
#define URWE                          0x01000000      // USB voltage regulator enable write enable


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT2 register.
//
//*****************************************************************************

#define UART0SRC                      0x18000000      // UART0 Clock Source Select
#define TPMSRC                        0x06000000      // TPM Clock Source Select
#define USBSRC                        0x00040000      // USB clock source select
#define PLLFLLSEL                     0x00010000      // PLL/FLL clock select
#define CLKOUTSEL                     0x00000380      // CLKOUT select
#define RTCCLKOUTSEL                  0x00000010      // RTC Clock Out Select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT4 register.
//
//*****************************************************************************

#define TPM2CLKSEL                    0x04000000      // TPM2 External Clock Pin Select
#define TPM1CLKSEL                    0x02000000      // TPM1 External Clock Pin Select
#define TPM0CLKSEL                    0x01000000      // TPM0 External Clock Pin Select
#define TPM2CH0SRC                    0x00100000      // TPM2 Channel 0 Input Capture Source Select
#define TPM1CH0SRC                    0x00180000      // TPM1 channel 0 input capture source select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT5 register.
//
//*****************************************************************************

#define UART2ODE                      0x00040000      // UART2 Open Drain Enable
#define UART1ODE                      0x00020000      // UART1 Open Drain Enable
#define UART0ODE                      0x00010000      // UART0 Open Drain Enable
#define UART1RXSRC                    0x00000040      // UART1 Receive Data Source Select
#define UART1TXSRC                    0x00000060      // UART1 Transmit Data Source Select
#define UART0RXSRC                    0x00000004      // UART0 Receive Data Source Select
#define UART0TXSRC                    0x00000006      // UART0 Transmit Data Source Select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT7 register.
//
//*****************************************************************************

#define ADC0ALTTRGEN                  0x00000080      // ADC0 Alternate Trigger Enable
#define ADC0PRETRGSEL                 0x00000010      // ADC0 Pretrigger Select
#define ADC0TRGSEL                    0x00000078      // ADC0 Trigger Select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SDID register.
//
//*****************************************************************************

#define FAMID                         0x780000000      // Kinetis family ID
#define SUBFAMID                      0x78000000      // Kinetis Sub-Family ID
#define SERIESID                      0x07800000      // Kinetis Series ID
#define SRAMSIZE                      0x00780000      // System SRAM Size
#define REVID                         0x00078000      // Device Revision Number
#define DIEID                         0x0000F800      // Device Die Number
#define PINID                         0x00000078      // Pincount Identification


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC4 register.
//
//*****************************************************************************

#define SPI1                          0x00800000      // SPI1 Clock Gate Control
#define SPI0                          0x00400000      // SPI0 Clock Gate Control
#define CMP                           0x00200000      // Comparator Clock Gate Control
#define USBOTG                        0x00040000      // USB Clock Gate Control
#define UART2                         0x00001000      // UART2 Clock Gate Control
#define UART1                         0x00000800      // UART1 Clock Gate Control
#define UART0                         0x00000400      // UART0 Clock Gate Control
#define I2C1                          0x00000080      // I2C1 Clock Gate Control
#define I2C0                          0x00000040      // I2C0 Clock Gate Control


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
#define TSI                           0x00000020      // TSI Access Control
#define LPTMR                         0x00000001      // Low Power Timer Access Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC6 register.
//
//*****************************************************************************

#define DAC0                          0x80000000      // DAC0 Clock Gate Control
#define RTC                           0x20000000      // RTC Access Control
#define ADC0                          0x08000000      // ADC0 Clock Gate Control
#define TPM2                          0x04000000      // TPM2 Clock Gate Control
#define TPM1                          0x02000000      // TPM1 Clock Gate Control
#define TPM0                          0x01000000      // TPM0 Clock Gate Control
#define PIT                           0x00800000      // PIT Clock Gate Control
#define I2S                           0x00008000      // I2S Clock Gate Control
#define DMAMUX                        0x00000002      // DMA Mux Clock Gate Control
#define FTF                           0x00000001      // Flash Memory Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC7 register.
//
//*****************************************************************************

#define DMA                           0x00000100      // DMA Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_CLKDIV1 register.
//
//*****************************************************************************

#define OUTDIV1                       0x780000000      // Clock 1 Output Divider value
#define OUTDIV4                       0x001C0000      // Clock 4 Output Divider value


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_FCFG1 register.
//
//*****************************************************************************

#define PFSIZE                        0x78000000      // Program Flash Size
#define FLASHDOZE                     0x00000002      // Flash Doze
#define FLASHDIS                      0x00000001      // Flash Disable


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_FCFG2 register.
//
//*****************************************************************************

#define MAXADDR0                      0x1FC0000000      // Max Address lock
#define MAXADDR1                      0x1FC00000      // Max Address lock


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_UIDMH register.
//
//*****************************************************************************

#define UID                           0x7FFF8000      // Unique Identification


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_UIDML register.
//
//*****************************************************************************

#define UID                           0x7FFFFFFF80000000      // Unique Identification


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_UIDL register.
//
//*****************************************************************************

#define UID                           0x7FFFFFFF80000000      // Unique Identification


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_COPC register.
//
//*****************************************************************************

#define COPT                          0x00000018      // COP Watchdog Timeout
#define COPCLKS                       0x00000002      // COP Clock Select
#define COPW                          0x00000001      // COP Windowed Mode


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SRVCOP register.
//
//*****************************************************************************

#define SRVCOP                        0x00007F80      // Service COP Register


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_PMPROT register.
//
//*****************************************************************************

#define AVLP                          0x00000020      // Allow Very-Low-Power Modes
#define ALLS                          0x00000008      // Allow Low-Leakage Stop Mode
#define AVLLS                         0x00000002      // Allow Very-Low-Leakage Stop Mode


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_PMCTRL register.
//
//*****************************************************************************

#define RUNM                          0x000000C0      // Run Mode Control
#define STOPA                         0x00000008      // Stop Aborted
#define STOPM                         0x0000001C      // Stop Mode Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_STOPCTRL register.
//
//*****************************************************************************

#define PSTOPO                        0x00000180      // Partial Stop Option
#define PORPO                         0x00000020      // POR Power Option
#define VLLSM                         0x0000001C      // VLLS Mode Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_PMSTAT register.
//
//*****************************************************************************

#define PMSTAT                        0x00001FC0      // 000_0001: Current power mode is RUN;; 000_0010: Current power mode is STOP;; 000_0100: Current power mode is VLPR;; 000_1000: Current power mode is VLPW;; 001_0000: Current power mode is VLPS;; 010_0000: Current power mode is LLS;; 100_0000: Current power mode is VLLS


//*****************************************************************************
//
// The following are defines for the bit fields in the PMC_LVDSC1 register.
//
//*****************************************************************************

#define LVDF                          0x00000080      // Low-Voltage Detect Flag
#define LVDACK                        0x00000040      // Low-Voltage Detect Acknowledge
#define LVDIE                         0x00000020      // Low-Voltage Detect Interrupt Enable
#define LVDRE                         0x00000010      // Low-Voltage Detect Reset Enable
#define LVDV                          0x00000006      // Low-Voltage Detect Voltage Select


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
// The following are defines for the bit fields in the LLWU_PE1 register.
//
//*****************************************************************************

#define WUPE3                         0x00000180      // Wakeup Pin Enable For LLWU_P3
#define WUPE2                         0x00000060      // Wakeup Pin Enable For LLWU_P2
#define WUPE1                         0x00000018      // Wakeup Pin Enable For LLWU_P1
#define WUPE0                         0x00000006      // Wakeup Pin Enable For LLWU_P0


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE2 register.
//
//*****************************************************************************

#define WUPE7                         0x00000180      // Wakeup Pin Enable For LLWU_P7
#define WUPE6                         0x00000060      // Wakeup Pin Enable For LLWU_P6
#define WUPE5                         0x00000018      // Wakeup Pin Enable For LLWU_P5
#define WUPE4                         0x00000006      // Wakeup Pin Enable For LLWU_P4


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE3 register.
//
//*****************************************************************************

#define WUPE11                        0x00000180      // Wakeup Pin Enable For LLWU_P11
#define WUPE10                        0x00000060      // Wakeup Pin Enable For LLWU_P10
#define WUPE9                         0x00000018      // Wakeup Pin Enable For LLWU_P9
#define WUPE8                         0x00000006      // Wakeup Pin Enable For LLWU_P8


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE4 register.
//
//*****************************************************************************

#define WUPE15                        0x00000180      // Wakeup Pin Enable For LLWU_P15
#define WUPE14                        0x00000060      // Wakeup Pin Enable For LLWU_P14
#define WUPE13                        0x00000018      // Wakeup Pin Enable For LLWU_P13
#define WUPE12                        0x00000006      // Wakeup Pin Enable For LLWU_P12


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_ME register.
//
//*****************************************************************************

#define WUME7                         0x00000080      // Wakeup Module Enable For Module 7
#define WUME6                         0x00000040      // Wakeup Module Enable For Module 6
#define WUME5                         0x00000020      // Wakeup Module Enable For Module 5
#define WUME4                         0x00000010      // Wakeup Module Enable For Module 4
#define WUME3                         0x00000008      // Wakeup Module Enable For Module 3
#define WUME2                         0x00000004      // Wakeup Module Enable For Module 2
#define WUME1                         0x00000002      // Wakeup Module Enable for Module 1
#define WUME0                         0x00000001      // Wakeup Module Enable For Module 0


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_F1 register.
//
//*****************************************************************************

#define WUF7                          0x00000080      // Wakeup Flag For LLWU_P7
#define WUF6                          0x00000040      // Wakeup Flag For LLWU_P6
#define WUF5                          0x00000020      // Wakeup Flag For LLWU_P5
#define WUF4                          0x00000010      // Wakeup Flag For LLWU_P4
#define WUF3                          0x00000008      // Wakeup Flag For LLWU_P3
#define WUF2                          0x00000004      // Wakeup Flag For LLWU_P2
#define WUF1                          0x00000002      // Wakeup Flag For LLWU_P1
#define WUF0                          0x00000001      // Wakeup Flag For LLWU_P0


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_F2 register.
//
//*****************************************************************************

#define WUF15                         0x00000080      // Wakeup Flag For LLWU_P15
#define WUF14                         0x00000040      // Wakeup Flag For LLWU_P14
#define WUF13                         0x00000020      // Wakeup Flag For LLWU_P13
#define WUF12                         0x00000010      // Wakeup Flag For LLWU_P12
#define WUF11                         0x00000008      // Wakeup Flag For LLWU_P11
#define WUF10                         0x00000004      // Wakeup Flag For LLWU_P10
#define WUF9                          0x00000002      // Wakeup Flag For LLWU_P9
#define WUF8                          0x00000001      // Wakeup Flag For LLWU_P8


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_F3 register.
//
//*****************************************************************************

#define MWUF7                         0x00000080      // Wakeup flag For module 7
#define MWUF6                         0x00000040      // Wakeup flag For module 6
#define MWUF5                         0x00000020      // Wakeup flag For module 5
#define MWUF4                         0x00000010      // Wakeup flag For module 4
#define MWUF3                         0x00000008      // Wakeup flag For module 3
#define MWUF2                         0x00000004      // Wakeup flag For module 2
#define MWUF1                         0x00000002      // Wakeup flag For module 1
#define MWUF0                         0x00000001      // Wakeup flag For module 0


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_FILT1 register.
//
//*****************************************************************************

#define FILTF                         0x00000080      // Filter Detect Flag
#define FILTE                         0x000000C0      // Digital Filter On External Pin
#define FILTSEL                       0x00000078      // Filter Pin Select


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_FILT2 register.
//
//*****************************************************************************

#define FILTF                         0x00000080      // Filter Detect Flag
#define FILTE                         0x000000C0      // Digital Filter On External Pin
#define FILTSEL                       0x00000078      // Filter Pin Select


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_POSITION register.
//
//*****************************************************************************

#define Trace Packet Address Pointer[28:0]0xFFFFFFF80000000      // POINTER
#define WRAP                          0x00000004      // This field is set to 1 automatically when the POINTER value wraps as determined by the MTB_MASTER[MASK] field in the MASTER Trace Control Register.;; A debug agent might use the WRAP field to determine whether the trace information above and below the pointer address is valid.


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_MASTER register.
//
//*****************************************************************************

#define Main Trace Enable             0x80000000      // EN
#define Halt Request                  0x00000200      // HALTREQ
#define RAM Privilege                 0x00000100      // RAMPRIV
#define Special Function Register Write Privilege0x00000080      // SFRWPRIV
#define Trace Stop Input Enable       0x00000040      // TSTOPEN
#define Trace Start Input Enable      0x00000020      // TSTARTEN
#define Mask                          0x000001F0      // MASK


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_FLOW register.
//
//*****************************************************************************

#define WATERMARK[28:0]               0xFFFFFFF80000000      // WATERMARK
#define AUTOHALT                      0x00000002      // If this field is 1 and WATERMARK is equal to MTB_POSITION[POINTER], then MTB_MASTER[HALTREQ] is automatically set to 1.;; If the DBGEN signal is HIGH, the MTB asserts this halt request to the Cortex-M0+ processor by asserting the EDBGRQ signal.
#define AUTOSTOP                      0x00000001      // If this field is 1 and WATERMARK is equal to MTB_POSITION[POINTER], then MTB_MASTER[EN] is automatically set to 0.;; This stops tracing.


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_BASE register.
//
//*****************************************************************************

#define BASEADDR                      0x7FFFFFFF80000000      // This value is defined with a hardwired signal and the expression: 0x2000_0000 - (RAM_Size/4).;; For example, if the total RAM capacity is 16 KB, this field is 0x1FFF_F000.


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_MODECTRL register.
//
//*****************************************************************************

#define MODECTRL                      0x7FFFFFFF80000000      // Hardwired to 0x0000_0000.


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_TAGSET register.
//
//*****************************************************************************

#define TAGSET                        0x7FFFFFFF80000000      // Hardwired to 0x0000_0000.


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_TAGCLEAR register.
//
//*****************************************************************************

#define TAGCLEAR                      0x7FFFFFFF80000000      // Hardwired to 0x0000_0000.


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_LOCKACCESS register.
//
//*****************************************************************************

#define LOCKACCESS                    0x7FFFFFFF80000000      // Hardwired to 0x0000_0000.


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_LOCKSTAT register.
//
//*****************************************************************************

#define LOCKSTAT                      0x7FFFFFFF80000000      // Hardwired to 0x0000_0000.


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_AUTHSTAT register.
//
//*****************************************************************************

#define BIT2                          0x00000018      // Connected to NIDEN or DBGEN signal.
#define BIT0                          0x00000006      // Connected to DBGEN.


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_DEVICEARCH register.
//
//*****************************************************************************

#define DEVICEARCH                    0x7FFFFFFF80000000      // Hardwired to 0x4770_0A31.


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_DEVICECFG register.
//
//*****************************************************************************

#define DEVICECFG                     0x7FFFFFFF80000000      // Hardwired to 0x0000_0000.


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_DEVICETYPID register.
//
//*****************************************************************************

#define DEVICETYPID                   0x7FFFFFFF80000000      // Hardwired to 0x0000_0031.


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_PERIPHIDn register.
//
//*****************************************************************************

#define PERIPHID                      0x7FFFFFFF80000000      // Peripheral ID4 is hardwired to 0x0000_0004; ID0 to 0x0000_0032; ID1 to 0x0000_00B9; ID2 to 0x0000_000B; and all the others to 0x0000_0000.


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_COMPIDn register.
//
//*****************************************************************************

#define COMPID                        0x7FFFFFFF80000000      // Component ID0 is hardwired to 0x0000_000D; ID1 to 0x0000_0090; ID2 to 0x0000_0005; ID3 to 0x0000_00B1.


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_CTRL register.
//
//*****************************************************************************

#define NUMCMP                        0x780000000      // Number of comparators
#define DWTCFGCTRL                    0x7FFFFFF8000000      // DWT configuration controls


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_COMPn register.
//
//*****************************************************************************

#define COMP                          0x7FFFFFFF80000000      // Reference value for comparison


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_MASKn register.
//
//*****************************************************************************

#define Reserved                      0x3FFFFFF80000000      // This read-only field is reserved and always has the value 0
#define MASK                          0x000001F0      // The value of the ignore mask, 0-31 bits, is applied to address range matching


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_FCT0 register.
//
//*****************************************************************************

#define Reserved                      0x3F80000000      // This read-only field is reserved and always has the value 0
#define MATCHED                       0x01000000      // Comparator match
#define Reserved                      0x07800000      // This read-only field is reserved and always has the value 0
#define Reserved                      0x00780000      // This read-only field is reserved and always has the value 0
#define DATAVADDR0                    0x00078000      // Data Value Address 0
#define DATAVSIZE                     0x00001800      // Data Value Size
#define Reserved                      0x00000200      // This read-only field is reserved and always has the value 0
#define DATAVMATCH                    0x00000100      // Data Value Match
#define Reserved                      0x00000780      // This read-only field is reserved and always has the value 0
#define FUNCTION                      0x00000078      // Selects the action taken on a comparator match


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_FCT1 register.
//
//*****************************************************************************

#define Reserved                      0x3F80000000      // This read-only field is reserved and always has the value 0
#define MATCHED                       0x01000000      // Comparator match
#define Reserved                      0x7FFFF800000      // This read-only field is reserved and always has the value 0
#define FUNCTION                      0x00000078      // Selects the action taken on a comparator match


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_TBCTRL register.
//
//*****************************************************************************

#define NUMCOMP                       0x780000000      // Number of Comparators
#define Reserved                      0x1FFFFFF8000000      // This read-only field is reserved and always has the value 0
#define ACOMP1                        0x00000002      // Action based on Comparator 1 match
#define ACOMP0                        0x00000001      // Action based on Comparator 0 match


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_DEVICECFG register.
//
//*****************************************************************************

#define DEVICECFG                     0x7FFFFFFF80000000      // Hardwired to 0x0000_0000


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_DEVICETYPID register.
//
//*****************************************************************************

#define DEVICETYPID                   0x7FFFFFFF80000000      // Hardwired to 0x0000_0004


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_PERIPHIDn register.
//
//*****************************************************************************

#define PERIPHID                      0x7FFFFFFF80000000      // Peripheral ID1 is hardwired to 0x0000_00E0; ID2 to 0x0000_0008; and all the others to 0x0000_0000


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_COMPIDn register.
//
//*****************************************************************************

#define COMPID                        0x7FFFFFFF80000000      // Component ID0 is hardwired to 0x0000_000D; ID1 to 0x0000_0090; ID2 to 0x0000_0005; ID3 to 0x0000_00B1


//*****************************************************************************
//
// The following are defines for the bit fields in the ROM_ENTRYn register.
//
//*****************************************************************************

#define ENTRY                         0x7FFFFFFF80000000      // Entry 0 (MTB) is hardwired to 0xFFFF_E003; Entry 1 (MTBDWT) to 0xFFFF_F003; Entry 2 (CM0+ ROM Table) to 0xF00F_D003


//*****************************************************************************
//
// The following are defines for the bit fields in the ROM_TABLEMARK register.
//
//*****************************************************************************

#define MARK                          0x7FFFFFFF80000000      // Hardwired to 0x0000_0000


//*****************************************************************************
//
// The following are defines for the bit fields in the ROM_SYSACCESS register.
//
//*****************************************************************************

#define SYSACCESS                     0x7FFFFFFF80000000      // Hardwired to 0x0000_0001


//*****************************************************************************
//
// The following are defines for the bit fields in the ROM_PERIPHIDn register.
//
//*****************************************************************************

#define PERIPHID                      0x7FFFFFFF80000000      // Peripheral ID1 is hardwired to 0x0000_00E0; ID2 to 0x0000_0008; and all the others to 0x0000_0000


//*****************************************************************************
//
// The following are defines for the bit fields in the ROM_COMPIDn register.
//
//*****************************************************************************

#define COMPID                        0x7FFFFFFF80000000      // Component ID0 is hardwired to 0x0000_000D; ID1 to 0x0000_0010; ID2 to 0x0000_0005; ID3 to 0x0000_00B1


//*****************************************************************************
//
// The following are defines for the bit fields in the DMAMUXx_CHCFGn register.
//
//*****************************************************************************

#define ENBL                          0x00000080      // DMA Channel Enable
#define TRIG                          0x00000040      // DMA Channel Trigger Enable
#define SOURCE                        0x000007E0      // DMA Channel Source (Slot)


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_SARn register.
//
//*****************************************************************************

#define SAR                           0x7FFFFFFF80000000      // Each SAR contains the byte address used by the DMA controller to read data. The SARn is typically aligned on a 0-modulo-ssize boundarythat is, on the natural alignment of the source data.


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_DARn register.
//
//*****************************************************************************

#define DAR                           0x7FFFFFFF80000000      // Each DAR contains the byte address used by the DMA controller to write data. The DARn is typically aligned on a 0-modulo-dsize boundarythat is, on the natural alignment of the destination data.


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_DSR_BCRn register.
//
//*****************************************************************************

#define CE                            0x40000000      // Configuration Error
#define BES                           0x20000000      // Bus Error on Source
#define BED                           0x10000000      // Bus Error on Destination
#define REQ                           0x04000000      // Request
#define BSY                           0x02000000      // Busy
#define DONE                          0x01000000      // Transactions Done
#define BCR                           0x7FFFFF800000      // This field contains the number of bytes yet to be transferred for a given block.


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_DCRn register.
//
//*****************************************************************************

#define EINT                          0x80000000      // Enable Interrupt on Completion of Transfer
#define ERQ                           0x40000000      // Enable Peripheral Request
#define CS                            0x20000000      // Cycle Steal
#define AA                            0x10000000      // Auto-align
#define SSIZE                         0x0C000000      // 
#define DINC                          0x03000000      // 
#define DSIZE                         0x00C00000      // 
#define START                         0x00100000      // 
#define EADREQ                        0x00180000      // 
#define SMOD                          0x00060000      // 
#define DMOD                          0x00018000      // 
#define D_REQ                         0x00006000      // 
#define LINKCC                        0x00001800      // 
#define LCH1                          0x00000600      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the OSC0_CR register.
//
//*****************************************************************************

#define ERCLKEN                       0x00000080      // External Reference Enable
#define EREFSTEN                      0x00000020      // External Reference Stop Enable
#define SC2P                          0x00000010      // Oscillator 2P Gain Control
#define SC4P                          0x00000008      // Oscillator 4P Gain Control
#define SC8P                          0x00000004      // Oscillator 8P Gain Control
#define SC16P                         0x00000002      // Oscillator 16P Gain Control


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_SC1n register.
//
//*****************************************************************************

#define COCO                          0x00000080      // Conversion Complete Flag
#define AIEN                          0x00000040      // Interrupt Enable
#define DIFF                          0x00000020      // Differential Mode Enable
#define ADCH                          0x000001F0      // Input channel select


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CFG1 register.
//
//*****************************************************************************

#define ADLPC                         0x00000080      // Low-Power Configuration
#define ADIV                          0x000000C0      // Clock Divide Select
#define ADLSMP                        0x00000010      // Sample Time Configuration
#define MODE                          0x00000018      // Conversion mode selection
#define ADICLK                        0x00000006      // Input Clock Select


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CFG2 register.
//
//*****************************************************************************

#define MUXSEL                        0x00000010      // ADC Mux Select
#define ADACKEN                       0x00000008      // Asynchronous Clock Output Enable
#define ADHSC                         0x00000004      // High-Speed Configuration
#define ADLSTS                        0x00000006      // Long Sample Time Select


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

#define CV                            0x7FFF8000      // Compare Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_SC2 register.
//
//*****************************************************************************

#define ADACT                         0x00000080      // Conversion Active
#define ADTRG                         0x00000040      // Conversion Trigger Select
#define ACFE                          0x00000020      // Compare Function Enable
#define ACFGT                         0x00000010      // Compare Function Greater Than Enable
#define ACREN                         0x00000008      // Compare Function Range Enable
#define DMAEN                         0x00000004      // DMA Enable
#define REFSEL                        0x00000006      // Voltage Reference Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_SC3 register.
//
//*****************************************************************************

#define CAL                           0x00000080      // Calibration
#define CALF                          0x00000040      // Calibration Failed Flag
#define ADCO                          0x00000008      // Continuous Conversion Enable
#define AVGE                          0x00000004      // Hardware Average Enable
#define AVGS                          0x00000006      // Hardware Average Select


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_OFS register.
//
//*****************************************************************************

#define OFS                           0x7FFF8000      // Offset Error Correction Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_PG register.
//
//*****************************************************************************

#define PG                            0x7FFF8000      // Plus-Side Gain


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_MG register.
//
//*****************************************************************************

#define MG                            0x7FFF8000      // Minus-Side Gain


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLPD register.
//
//*****************************************************************************

#define CLPD                          0x000007E0      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLPS register.
//
//*****************************************************************************

#define CLPS                          0x000007E0      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLP4 register.
//
//*****************************************************************************

#define CLP4                          0x0007FE00      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLP3 register.
//
//*****************************************************************************

#define CLP3                          0x0001FF00      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLP2 register.
//
//*****************************************************************************

#define CLP2                          0x00007F80      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLP1 register.
//
//*****************************************************************************

#define CLP1                          0x00001FC0      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLP0 register.
//
//*****************************************************************************

#define CLP0                          0x000007E0      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLMD register.
//
//*****************************************************************************

#define CLMD                          0x000007E0      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLMS register.
//
//*****************************************************************************

#define CLMS                          0x000007E0      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLM4 register.
//
//*****************************************************************************

#define CLM4                          0x0007FE00      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLM3 register.
//
//*****************************************************************************

#define CLM3                          0x0001FF00      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLM2 register.
//
//*****************************************************************************

#define CLM2                          0x00007F80      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLM1 register.
//
//*****************************************************************************

#define CLM1                          0x00001FC0      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLM0 register.
//
//*****************************************************************************

#define CLM0                          0x000007E0      // Calibration Value


//*****************************************************************************
//
// The following are defines for the bit fields in the CMPx_CR1 register.
//
//*****************************************************************************

#define SE                            0x00000080      // Sample Enable
#define WE                            0x00000040      // Windowing Enable
#define TRIGM                         0x00000020      // Trigger Mode Enable
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

#define PSTM                          0x00000080      // Pass Through Mode Enable
#define PSEL                          0x000000E0      // Plus Input Mux Control
#define MSEL                          0x0000001C      // Minus Input Mux Control


//*****************************************************************************
//
// The following are defines for the bit fields in the DACx_DATnL register.
//
//*****************************************************************************

#define DATA0                         0x00007F80      // When the DAC buffer is not enabled, DATA[11:0] controls the output voltage based on the following formula: V out = V in * (1 + DACDAT0[11:0])/4096. When the DAC buffer is enabled, DATA is mapped to the 16-word buffer.


//*****************************************************************************
//
// The following are defines for the bit fields in the DACx_DATnH register.
//
//*****************************************************************************

#define DATA1                         0x00000078      // When the DAC Buffer is not enabled, DATA[11:0] controls the output voltage based on the following formula. V out = V in * (1 + DACDAT0[11:0])/4096. When the DAC buffer is enabled, DATA[11:0] is mapped to the 16-word buffer.


//*****************************************************************************
//
// The following are defines for the bit fields in the DACx_SR register.
//
//*****************************************************************************

#define DACBFRPTF                     0x00000002      // DAC Buffer Read Pointer Top Position Flag
#define DACBFRPBF                     0x00000001      // DAC Buffer Read Pointer Bottom Position Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the DACx_C0 register.
//
//*****************************************************************************

#define DACEN                         0x00000080      // DAC Enable
#define DACRFS                        0x00000040      // DAC Reference Select
#define DACTRGSEL                     0x00000020      // DAC Trigger Select
#define DACSWTRG                      0x00000010      // DAC Software Trigger
#define LPEN                          0x00000008      // DAC Low Power Control
#define DACBTIEN                      0x00000002      // DAC Buffer Read Pointer Top Flag Interrupt Enable
#define DACBBIEN                      0x00000001      // DAC Buffer Read Pointer Bottom Flag Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the DACx_C1 register.
//
//*****************************************************************************

#define DMAEN                         0x00000080      // DMA Enable Select
#define DACBFMD                       0x00000004      // DAC Buffer Work Mode Select
#define DACBFEN                       0x00000001      // DAC Buffer Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the DACx_C2 register.
//
//*****************************************************************************

#define DACBFRP                       0x00000060      // DAC Buffer Read Pointer
#define DACBFUP                       0x00000001      // DAC Buffer Update Pointer


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_SC register.
//
//*****************************************************************************

#define DMA                           0x00000100      // DMA Enable
#define TOF                           0x00000080      // Timer Overflow Flag
#define TOIE                          0x00000040      // Timer Overflow Interrupt Enable
#define CPWMS                         0x00000020      // Center-Aligned PWM Select
#define CMOD                          0x00000030      // Clock Mode Selection
#define PS                            0x0000001C      // Prescale Factor Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_CNT register.
//
//*****************************************************************************

#define COUNT                         0x7FFF8000      // Counter value


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_MOD register.
//
//*****************************************************************************

#define MOD                           0x7FFF8000      // Modulo value


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_CnSC register.
//
//*****************************************************************************

#define CHF                           0x00000080      // Channel Flag
#define CHIE                          0x00000040      // Channel Interrupt Enable
#define MSB                           0x00000020      // Channel Mode Select
#define MSA                           0x00000010      // Channel Mode Select
#define ELSB                          0x00000008      // Edge or Level Select
#define ELSA                          0x00000004      // Edge or Level Select
#define DMA                           0x00000001      // DMA Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_CnV register.
//
//*****************************************************************************

#define VAL                           0x7FFF8000      // Channel Value


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_STATUS register.
//
//*****************************************************************************

#define TOF                           0x00000100      // Timer Overflow Flag
#define CH5F-CH0F                     0x00007F80      // Channel Flags


//*****************************************************************************
//
// The following are defines for the bit fields in the TPMx_CONF register.
//
//*****************************************************************************

#define TRGSEL                        0x78000000      // Trigger Select
#define CROT                          0x00040000      // Counter Reload On Trigger
#define CSOO                          0x00020000      // Counter Stop On Overflow


//*****************************************************************************
//
// The following are defines for the bit fields in the PIT_LTMR64H register.
//
//*****************************************************************************

#define LTH                           0x7FFFFFFF80000000      // Life Timer value


//*****************************************************************************
//
// The following are defines for the bit fields in the PIT_LTMR64L register.
//
//*****************************************************************************

#define LTL                           0x7FFFFFFF80000000      // Life Timer value


//*****************************************************************************
//
// The following are defines for the bit fields in the PIT_LDVALn register.
//
//*****************************************************************************

#define TSV                           0x7FFFFFFF80000000      // Timer Start Value


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

#define CHN                           0x00000004      // Chain Mode
#define TIE                           0x00000002      // Timer Interrupt Enable
#define TEN                           0x00000001      // Timer Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PIT_TFLGn register.
//
//*****************************************************************************

#define TIF                           0x00000001      // Timer Interrupt Flag


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

#define COUNTER                       0x7FFF8000      // Counter Value ::


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_BR register.
//
//*****************************************************************************

#define SPPR[2:0]                     0x000001C0      // SPI Baud Rate Prescale Divisor
#define SPR[3:0]                      0x00000078      // SPI Baud Rate Divisor


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_C2 register.
//
//*****************************************************************************

#define SPMIE                         0x00000080      // SPI Match Interrupt Enable
#define SPIMODE                       0x00000040      // SPI 8-bit or 16-bit mode
#define TXDMAE                        0x00000020      // Transmit DMA enable
#define MODFEN                        0x00000010      // Master Mode-Fault Function Enable
#define BIDIROE                       0x00000008      // Bidirectional Mode Output Enable
#define RXDMAE                        0x00000004      // Receive DMA enable
#define SPISWAI                       0x00000002      // SPI Stop in Wait Mode
#define SPC0                          0x00000001      // SPI Pin Control 0


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_C1 register.
//
//*****************************************************************************

#define SPIE                          0x00000080      // SPI Interrupt Enable: for SPRF and MODF (when FIFO is not supported or not enabled) or for read FIFO (when FIFO is supported and enabled)
#define SPE                           0x00000040      // SPI System Enable
#define SPTIE                         0x00000020      // SPI Transmit Interrupt Enable
#define MSTR                          0x00000010      // Master/Slave Mode Select
#define CPOL                          0x00000008      // Clock Polarity
#define CPHA                          0x00000004      // Clock Phase
#define SSOE                          0x00000002      // Slave Select Output Enable
#define LSBFE                         0x00000001      // LSB First (shifter direction)


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_ML register.
//
//*****************************************************************************

#define Bits[7:0]                     0x00007F80      // Hardware compare value (low byte)


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_MH register.
//
//*****************************************************************************

#define Bits[15:8]                    0x00007F80      // Hardware compare value (high byte)


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_DL register.
//
//*****************************************************************************

#define Bits[7:0]                     0x00007F80      // Data (low byte)


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_DH register.
//
//*****************************************************************************

#define Bits[15:8]                    0x00007F80      // Data (high byte)


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_CI register.
//
//*****************************************************************************

#define TXFERR                        0x00000080      // Transmit FIFO error flag
#define RXFERR                        0x00000040      // Receive FIFO error flag
#define TXFOF                         0x00000020      // Transmit FIFO overflow flag
#define RXFOF                         0x00000010      // Receive FIFO overflow flag
#define TNEAREFCI                     0x00000008      // Transmit FIFO nearly empty flag clear interrupt
#define RNFULLFCI                     0x00000004      // Receive FIFO nearly full flag clear interrupt
#define SPTEFCI                       0x00000002      // Transmit FIFO empty flag clear interrupt
#define SPRFCI                        0x00000001      // Receive FIFO full flag clear interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIx_C3 register.
//
//*****************************************************************************

#define TNEAREF_                      0x00000080      // Transmit FIFO nearly empty flag
#define RNFULLF_                      0x00000040      // Receive FIFO nearly full flag
#define INTCLR                        0x00000020      // Interrupt clear
#define TNEARIEN                      0x00000010      // Transmit FIFO nearly empty interrupt enable
#define RNFULLIEN                     0x00000008      // Receive FIFO nearly full interrupt enable
#define FIFOMODE                      0x00000001      // FIFO mode enable ::


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

#define MULT                          0x00000180      // Defines the multiplier factor (mul). This factor is used along with the SCL divider to generate the I2C baud rate.
#define ICR                           0x000007E0      // Prescales the I2C module clock for bit rate selection. This field and the MULT field determine the I2C baud rate, the SDA hold time, the SCL start hold time, and the SCL stop hold time.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_C1 register.
//
//*****************************************************************************

#define IICEN                         0x00000080      // Enables I2C module operation.
#define IICIE                         0x00000040      // Enables I2C interrupt requests.
#define MST                           0x00000020      // When MST is changed from 0 to 1, a START signal is generated on the bus and master mode is selected. When this bit changes from 1 to 0, a STOP signal is generated and the mode of operation changes from master to slave.
#define TX                            0x00000010      // Selects the direction of master and slave transfers. In master mode this bit must be set according to the type of transfer required. Therefore, for address cycles, this bit is always set. When addressed as a slave this bit must be set by software according to the SRW bit in the status register.
#define TXAK                          0x00000008      // Specifies the value driven onto the SDA during data acknowledge cycles for both master and slave receivers. The value of SMB[FACK] affects NACK/ACK generation.
#define RSTA                          0x00000004      // Writing 1 to this bit generates a repeated START condition provided it is the current master. This bit will always be read as 0. Attempting a repeat at the wrong time results in loss of arbitration.
#define WUEN                          0x00000002      // The I2C module can wake the MCU from low power mode with no peripheral bus running when slave address matching occurs.
#define DMAEN                         0x00000001      // Enables or disables the DMA function.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_S1 register.
//
//*****************************************************************************

#define TCF                           0x00000080      // Acknowledges a byte transfer; TCF sets on the completion of a byte transfer. This bit is valid only during or immediately following a transfer to or from the I2C module. TCF is cleared by reading the I2C data register in receive mode or by writing to the I2C data register in transmit mode.
#define IAAS                          0x00000040      // This bit is set by one of the following conditions:;; The calling address matches the programmed slave primary address in the A1 register or range address in the RA register (which must be set to a nonzero value).;; C2[GCAEN] is set and a general call is received.;; SMB[SIICAEN] is set and the calling address matches the second programmed slave address.;; ALERTEN is set and an SMBus alert response address is received;; RMEN is set and an address is received that is within the range between the values of the A1 and RA registers.
#define BUSY                          0x00000020      // Indicates the status of the bus regardless of slave or master mode. This bit is set when a START signal is detected and cleared when a STOP signal is detected.
#define ARBL                          0x00000010      // This bit is set by hardware when the arbitration procedure is lost. The ARBL bit must be cleared by software, by writing 1 to it.
#define RAM                           0x00000008      // This bit is set to 1 by any of the following conditions:;; Any nonzero calling address is received that matches the address in the RA register.;; The RMEN bit is set and the calling address is within the range of values of the A1 and RA registers.
#define SRW                           0x00000004      // When addressed as a slave, SRW indicates the value of the R/W command bit of the calling address sent to the master.
#define IICIF                         0x00000002      // This bit sets when an interrupt is pending. This bit must be cleared by software by writing 1 to it, such as in the interrupt routine. One of the following events can set this bit:;; One byte transfer, including ACK/NACK bit, completes if FACK is 0. An ACK or NACK is sent on the bus by writing 0 or 1 to TXAK after this bit is set in receive mode.;; One byte transfer, excluding ACK/NACK bit, completes if FACK is 1.;; Match of slave address to calling address including primary slave address, range slave address, alert response address, second slave address, or general call address.;; Arbitration lost;; In SMBus mode, any timeouts except SCL and SDA high timeouts;; I2C bus stop detection if the STOPIE bit in the Input Glitch Filter register is 1
#define RXAK                          0x00000001      // 


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
#define SBRC                          0x00000010      // Enables independent slave mode baud rate at maximum frequency, which forces clock stretching on SCL in very fast I2C modes. To a slave, an example of a "very fast" mode is when the master transfers at 40 kbit/s but the slave can capture the master's data at only 10 kbit/s.
#define RMEN                          0x00000008      // This bit controls slave address matching for addresses between the values of the A1 and RA registers. When this bit is set, a slave address match occurs for any address greater than the value of the A1 register and less than or equal to the value of the RA register.
#define AD[10:8]                      0x0000001C      // Contains the upper three bits of the slave address in the 10-bit address scheme. This field is valid only while the ADEXT bit is set.


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Cx_FLT register.
//
//*****************************************************************************

#define SHEN                          0x00000080      // Set this bit to hold off entry to stop mode when any data transmission or reception is occurring.
#define STOPF                         0x00000040      // Hardware sets this bit when the I2C bus's stop status is detected. The STOPF bit must be cleared by writing 1 to it.
#define STOPIE                        0x00000020      // This bit enables the interrupt for I2C bus stop detection.
#define FLT                           0x000001F0      // Controls the width of the glitch, in terms of I2C module clock cycles, that the filter must absorb. For any glitch whose size is less than or equal to this width setting, the filter does not allow the glitch to pass.


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
#define SHTF2                         0x00000004      // This bit sets when SCL is held high and SDA is held low more than clock  LoValue / 512. Software clears this bit by writing 1 to it.
#define SHTF2IE                       0x00000002      // Enables SCL high and SDA low timeout interrupt.
#define SHTF1                         0x00000001      // This read-only bit sets when SCL and SDA are held high more than clock  LoValue / 512, which indicates the bus is free. This bit is cleared automatically.


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

#define LBKDIE                        0x00000080      // LIN Break Detect Interrupt Enable (for LBKDIF)
#define RXEDGIE                       0x00000040      // RX Input Active Edge Interrupt Enable (for RXEDGIF)
#define SBNS                          0x00000020      // Stop Bit Number Select
#define SBR                           0x000001F0      // Baud Rate Modulo Divisor


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_BDL register.
//
//*****************************************************************************

#define SBR                           0x00007F80      // Baud Rate Modulo Divisor


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_C1 register.
//
//*****************************************************************************

#define LOOPS                         0x00000080      // Loop Mode Select
#define DOZEEN                        0x00000040      // Doze Enable
#define RSRC                          0x00000020      // Receiver Source Select
#define M                             0x00000010      // 9-Bit or 8-Bit Mode Select
#define WAKE                          0x00000008      // Receiver Wakeup Method Select
#define ILT                           0x00000004      // Idle Line Type Select
#define PE                            0x00000002      // Parity Enable
#define PT                            0x00000001      // Parity Type


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_C2 register.
//
//*****************************************************************************

#define TIE                           0x00000080      // Transmit Interrupt Enable for TDRE
#define TCIE                          0x00000040      // Transmission Complete Interrupt Enable for TC
#define RIE                           0x00000020      // Receiver Interrupt Enable for RDRF
#define ILIE                          0x00000010      // Idle Line Interrupt Enable for IDLE
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
#define TC                            0x00000040      // Transmission Complete Flag
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
#define RXEDGIF                       0x00000040      // UART_RX Pin Active Edge Interrupt Flag
#define MSBF                          0x00000020      // MSB First
#define RXINV                         0x00000010      // Receive Data Inversion
#define RWUID                         0x00000008      // Receive Wake Up Idle Detect
#define BRK13                         0x00000004      // Break Character Generation Length
#define LBKDE                         0x00000002      // LIN Break Detection Enable
#define RAF                           0x00000001      // Receiver Active Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_C3 register.
//
//*****************************************************************************

#define R8T9                          0x00000080      // Receive Bit 8 / Transmit Bit 9
#define R9T8                          0x00000040      // Receive Bit 9 / Transmit Bit 8
#define TXDIR                         0x00000020      // UART_TX Pin Direction in Single-Wire Mode
#define TXINV                         0x00000010      // Transmit Data Inversion
#define ORIE                          0x00000008      // Overrun Interrupt Enable
#define NEIE                          0x00000004      // Noise Error Interrupt Enable
#define FEIE                          0x00000002      // Framing Error Interrupt Enable
#define PEIE                          0x00000001      // Parity Error Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_C4 register.
//
//*****************************************************************************

#define MAEN1                         0x00000080      // Match Address Mode Enable 1
#define MAEN2                         0x00000040      // Match Address Mode Enable 2
#define M10                           0x00000020      // 10-bit Mode select
#define OSR                           0x000001F0      // Over Sampling Ratio


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_C5 register.
//
//*****************************************************************************

#define TDMAE                         0x00000080      // Transmitter DMA Enable
#define RDMAE                         0x00000020      // Receiver Full DMA Enable
#define BOTHEDGE                      0x00000002      // Both Edge Sampling


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_BDH register.
//
//*****************************************************************************

#define LBKDIE                        0x00000080      // LIN Break Detect Interrupt Enable (for LBKDIF)
#define RXEDGIE                       0x00000040      // RxD Input Active Edge Interrupt Enable (for RXEDGIF)
#define SBNS                          0x00000020      // Stop Bit Number Select
#define SBR                           0x000001F0      // Baud Rate Modulo Divisor


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_BDL register.
//
//*****************************************************************************

#define SBR                           0x00007F80      // Baud Rate Modulo Divisor


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_C1 register.
//
//*****************************************************************************

#define LOOPS                         0x00000080      // Loop Mode Select
#define UARTSWAI                      0x00000040      // UART Stops in Wait Mode
#define RSRC                          0x00000020      // Receiver Source Select
#define M                             0x00000010      // 9-Bit or 8-Bit Mode Select
#define WAKE                          0x00000008      // Receiver Wakeup Method Select
#define ILT                           0x00000004      // Idle Line Type Select
#define PE                            0x00000002      // Parity Enable
#define PT                            0x00000001      // Parity Type


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_C2 register.
//
//*****************************************************************************

#define TIE                           0x00000080      // Transmit Interrupt Enable for TDRE
#define TCIE                          0x00000040      // Transmission Complete Interrupt Enable for TC
#define RIE                           0x00000020      // Receiver Interrupt Enable for RDRF
#define ILIE                          0x00000010      // Idle Line Interrupt Enable for IDLE
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
#define TC                            0x00000040      // Transmission Complete Flag
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
#define RXINV                         0x00000010      // Receive Data Inversion
#define RWUID                         0x00000008      // Receive Wake Up Idle Detect
#define BRK13                         0x00000004      // Break Character Generation Length
#define LBKDE                         0x00000002      // LIN Break Detection Enable
#define RAF                           0x00000001      // Receiver Active Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_C3 register.
//
//*****************************************************************************

#define R8                            0x00000080      // Ninth Data Bit for Receiver
#define T8                            0x00000040      // Ninth Data Bit for Transmitter
#define TXDIR                         0x00000020      // TxD Pin Direction in Single-Wire Mode
#define TXINV                         0x00000010      // Transmit Data Inversion
#define ORIE                          0x00000008      // Overrun Interrupt Enable
#define NEIE                          0x00000004      // Noise Error Interrupt Enable
#define FEIE                          0x00000002      // Framing Error Interrupt Enable
#define PEIE                          0x00000001      // Parity Error Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the UARTx_C4 register.
//
//*****************************************************************************

#define TDMAS                         0x00000080      // Transmitter DMA Select
#define RDMAS                         0x00000020      // Receiver Full DMA Select


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_PERID register.
//
//*****************************************************************************

#define ID                            0x000007E0      // Peripheral Identification


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_IDCOMP register.
//
//*****************************************************************************

#define NID                           0x000007E0      // Ones complement of peripheral identification bits


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_REV register.
//
//*****************************************************************************

#define REV                           0x00007F80      // Revision


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_ADDINFO register.
//
//*****************************************************************************

#define IRQNUM                        0x00000F80      // Assigned Interrupt Request Number
#define IEHOST                        0x00000001      // Host Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_OTGISTAT register.
//
//*****************************************************************************

#define IDCHG                         0x00000080      // ID change
#define ONEMSEC                       0x00000040      // One millisecond timer
#define LINE_STATE_CHG                0x00000020      // Line state change
#define SESSVLDC                      0x00000008      // Session valid change
#define B_SESS_CHG                    0x00000004      // B session change
#define AVBUSCHG                      0x00000001      // A VBUS change


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_OTGICR register.
//
//*****************************************************************************

#define IDEN                          0x00000080      // ID Interrupt Enable
#define ONEMSECEN                     0x00000040      // One Millisecond Interrupt Enable
#define LINESTATEEN                   0x00000020      // Line State Change Interrupt Enable
#define SESSVLDEN                     0x00000008      // Session Valid Interrupt Enable
#define BSESSEN                       0x00000004      // B Session END Interrupt Enable
#define AVBUSEN                       0x00000001      // A VBUS Valid Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_OTGSTAT register.
//
//*****************************************************************************

#define ID                            0x00000080      // ID pin state
#define ONEMSECEN                     0x00000040      // One millisecond timer
#define LINESTATESTABLE               0x00000020      // Line state stable
#define SESS_VLD                      0x00000008      // Session valid
#define BSESSEND                      0x00000004      // B session end
#define AVBUSVLD                      0x00000001      // A VBUS valid


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_OTGCTL register.
//
//*****************************************************************************

#define DPHIGH                        0x00000080      // D+ Data Line pullup resistor enable
#define DPLOW                         0x00000020      // D+ Data Line pull-down resistor enable
#define DMLOW                         0x00000010      // D Data Line pull-down resistor enable
#define OTGEN                         0x00000004      // On-The-Go pullup/pulldown resistor enable


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_ISTAT register.
//
//*****************************************************************************

#define STALL                         0x00000080      // Stall Interrupt
#define ATTACH                        0x00000040      // Attach Interrupt
#define RESUME                        0x00000020      // Resume Interrupt
#define SLEEP                         0x00000010      // Sleep Interrupt
#define TOKDNE                        0x00000008      // TOKDNE Interrupt
#define SOFTOK                        0x00000004      // SOFTOK Interrupt
#define ERROR                         0x00000002      // ERROR Interrupt
#define USBRST                        0x00000001      // USBRST Interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_INTEN register.
//
//*****************************************************************************

#define STALLEN                       0x00000080      // STALL Interrupt Enable
#define ATTACHEN                      0x00000040      // ATTACH Interrupt Enable
#define RESUMEEN                      0x00000020      // RESUME Interrupt Enable
#define SLEEPEN                       0x00000010      // SLEEP Interrupt Enable
#define TOKDNEEN                      0x00000008      // TOKDNE Interrupt Enable
#define SOFTOKEN                      0x00000004      // SOFTOK Interrupt Enable
#define ERROREN                       0x00000002      // ERROR Interrupt Enable
#define USBRSTEN                      0x00000001      // USBRST Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_ERRSTAT register.
//
//*****************************************************************************

#define BTSERR                        0x00000080      // Bit Stuff Error
#define DMAERR                        0x00000020      // DMA Error
#define BTOERR                        0x00000010      // Bus Turnaround Time Error
#define DFN8                          0x00000008      // Data Field Not 8 bits
#define CRC16                         0x00000004      // CRC16 Error
#define CRC5EOF                       0x00000002      // CRC5/EOF Error
#define PIDERR                        0x00000001      // PID Error


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_ERREN register.
//
//*****************************************************************************

#define BTSERREN                      0x00000080      // BTSERR Interrupt Enable
#define DMAERREN                      0x00000020      // DMAERR Interrupt Enable
#define BTOERREN                      0x00000010      // BTOERR Interrupt Enable
#define DFN8EN                        0x00000008      // DFN8 Interrupt Enable
#define CRC16EN                       0x00000004      // CRC16 Interrupt Enable
#define CRC5EOFEN                     0x00000002      // CRC5/EOF Interrupt Enable
#define PIDERREN                      0x00000001      // PIDERR Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_STAT register.
//
//*****************************************************************************

#define ENDP                          0x00000780      // Endpoint Number
#define TX                            0x00000008      // Transmit Indicator
#define ODD                           0x00000004      // Odd Bank Indicator


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_CTL register.
//
//*****************************************************************************

#define JSTATE                        0x00000080      // JSTATE Signal
#define SE0                           0x00000040      // SE0 Signal
#define TXSUSPENDTOKENBUSY            0x00000020      // TXSUSPENDTOKENBUSY Signal
#define RESET                         0x00000010      // RESET Signal
#define HOSTMODEEN                    0x00000008      // HOSTMODEEN Signal
#define RESUME                        0x00000004      // RESUME Signal
#define ODDRST                        0x00000002      // ODDRST Signal
#define USBENSOFEN                    0x00000001      // USBENSOFEN Signal


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_ADDR register.
//
//*****************************************************************************

#define LSEN                          0x00000080      // Low Speed Enable
#define ADDR                          0x00001FC0      // Address


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_BDTPAGE1 register.
//
//*****************************************************************************

#define BDTBA                         0x00003F80      // Provides address bits 15 through 9 of the BDT base address.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_FRMNUML register.
//
//*****************************************************************************

#define FRM[7:0]                      0x00007F80      // This 8-bit field and the 3-bit field in the Frame Number Register High are used  to  compute  the  address where the current Buffer Descriptor Table (BDT) resides in system memory.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_FRMNUMH register.
//
//*****************************************************************************

#define FRM[10:8]                     0x0000001C      // This 3-bit field and the 8-bit field in the Frame Number Register Low are used  to  compute the  address where the current Buffer Descriptor Table (BDT) resides in system memory.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_TOKEN register.
//
//*****************************************************************************

#define TOKENPID                      0x00000780      // Contains the token type executed by the USB module.
#define TOKENENDPT                    0x00000078      // Holds the Endpoint address for the token command. The four bit value written must be a valid endpoint.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_SOFTHLD register.
//
//*****************************************************************************

#define CNT                           0x00007F80      // Represents the SOF count threshold in byte times.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_BDTPAGE2 register.
//
//*****************************************************************************

#define BDTBA                         0x00007F80      // Provides address bits 23 through 16 of the BDT base address that defines     the  location  of  Buffer  Descriptor Table resides in system memory.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_BDTPAGE3 register.
//
//*****************************************************************************

#define BDTBA                         0x00007F80      // Provides address bits 31 through 24 of the BDT base address that defines     the  location  of  Buffer  Descriptor Table resides in system memory.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_ENDPTn register.
//
//*****************************************************************************

#define HOSTWOHUB                     0x00000080      // This is a Host mode only field and is present in the control register for endpoint 0 (ENDPT0) only. When set this bit allows the host to communicate to a directly connected low speed device. When cleared, the host produces the PRE_PID. It then switches to low-speed signaling when sends a token to a low speed device as required to communicate with a low speed device through a hub.
#define RETRYDIS                      0x00000040      // This is a Host mode only bit and is present in the control register for endpoint 0 (ENDPT0) only. When set this bit causes the host to not retry NAK'ed (Negative Acknowledgement) transactions. When a transaction is NAKed, the BDT PID field is updated with the NAK PID, and the TOKEN_DNE interrupt is set. When this bit is cleared NAKed transactions is retried in hardware. This bit must be set when the host is attempting to poll an interrupt endpoint.
#define EPCTLDIS                      0x00000010      // This bit, when set, disables control (SETUP) transfers. When cleared, control transfers are enabled. This applies if and only if the EPRXEN and EPTXEN bits are also set.
#define EPRXEN                        0x00000008      // This bit, when set, enables the endpoint for RX transfers.
#define EPTXEN                        0x00000004      // This bit, when set, enables the endpoint for TX transfers.
#define EPSTALL                       0x00000002      // When set this bit indicates that the endpoint is called. This bit has priority over all other control bits in the EndPoint Enable Register, but it is only valid if EPTXEN=1 or EPRXEN=1. Any access to this endpoint causes the USB Module to return a STALL handshake. After an endpoint is stalled it requires intervention from the Host Controller.
#define EPHSHK                        0x00000001      // When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint. This bit is generally 1 unless the endpoint is Isochronous.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_USBCTRL register.
//
//*****************************************************************************

#define SUSP                          0x00000080      // Places the USB transceiver into the suspend state.
#define PDE                           0x00000040      // Enables the weak pulldowns on the USB transceiver.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_OBSERVE register.
//
//*****************************************************************************

#define DPPU                          0x00000080      // Provides observability of the D+ Pullup . signal output from the USB OTG module
#define DPPD                          0x00000040      // Provides observability of the D+ Pulldown . signal output from the USB OTG module
#define DMPD                          0x00000010      // Provides observability of the D- Pulldown signal output from the USB OTG module


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_CONTROL register.
//
//*****************************************************************************

#define DPPULLUPNONOTG                0x00000010      // Provides control of the DP Pullup in the USB OTG module, if USB     is  configured in non-OTG device mode.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_USBTRC0 register.
//
//*****************************************************************************

#define USBRESET                      0x00000080      // Generates a hard reset to the USB_OTG module. After this bit is set and the reset occurs, this bit is automatically cleared.
#define USBRESMEN                     0x00000020      // Asynchronous Resume Interrupt Enable
#define SYNC_DET                      0x00000002      // Synchronous USB Interrupt Detect
#define USB_RESUME_INT                0x00000001      // USB Asynchronous Interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_USBFRMADJUST register.
//
//*****************************************************************************

#define ADJ                           0x00007F80      // Frame Adjustment


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TCSR register.
//
//*****************************************************************************

#define TE                            0x80000000      // Transmitter Enable
#define STOPE                         0x40000000      // Stop Enable
#define DBGE                          0x20000000      // Debug Enable
#define BCE                           0x10000000      // Bit Clock Enable
#define FR                            0x02000000      // FIFO Reset
#define SR                            0x01000000      // Software Reset
#define WSF                           0x00100000      // Word Start Flag
#define SEF                           0x00080000      // Sync Error Flag
#define FEF                           0x00040000      // FIFO Error Flag
#define FWF                           0x00020000      // FIFO Warning Flag
#define WSIE                          0x00001000      // Word Start Interrupt Enable
#define SEIE                          0x00000800      // Sync Error Interrupt Enable
#define FEIE                          0x00000400      // FIFO Error Interrupt Enable
#define FWIE                          0x00000200      // FIFO Warning Interrupt Enable
#define FWDE                          0x00000002      // FIFO Warning DMA Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TCR2 register.
//
//*****************************************************************************

#define SYNC                          0x180000000      // Synchronous Mode
#define BCS                           0x20000000      // Bit Clock Swap
#define BCI                           0x10000000      // Bit Clock Input
#define MSEL                          0x18000000      // MCLK Select
#define BCP                           0x02000000      // Bit Clock Polarity
#define BCD                           0x01000000      // Bit Clock Direction
#define DIV                           0x00007F80      // Bit Clock Divide


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TCR3 register.
//
//*****************************************************************************

#define TCE                           0x00010000      // Transmit Channel Enable
#define WDFL                          0x00000001      // Word Flag Configuration


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TCR4 register.
//
//*****************************************************************************

#define FRSZ                          0x00010000      // Frame size
#define SYWD                          0x0001F000      // Sync Width
#define MF                            0x00000010      // MSB First
#define FSE                           0x00000008      // Frame Sync Early
#define FSP                           0x00000002      // Frame Sync Polarity
#define FSD                           0x00000001      // Frame Sync Direction


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TCR5 register.
//
//*****************************************************************************

#define WNW                           0x1F0000000      // Word N Width
#define W0W                           0x01F00000      // Word 0 Width
#define FBT                           0x0001F000      // First Bit Shifted


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TDRn register.
//
//*****************************************************************************

#define TDR[31:0]                     0x7FFFFFFF80000000      // Transmit Data Register


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TMR register.
//
//*****************************************************************************

#define TWM                           0x00000006      // Transmit Word Mask


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RCSR register.
//
//*****************************************************************************

#define RE                            0x80000000      // Receiver Enable
#define STOPE                         0x40000000      // Stop Enable
#define DBGE                          0x20000000      // Debug Enable
#define BCE                           0x10000000      // Bit Clock Enable
#define FR                            0x02000000      // FIFO Reset
#define SR                            0x01000000      // Software Reset
#define WSF                           0x00100000      // Word Start Flag
#define SEF                           0x00080000      // Sync Error Flag
#define FEF                           0x00040000      // FIFO Error Flag
#define FWF                           0x00020000      // FIFO Warning Flag
#define WSIE                          0x00001000      // Word Start Interrupt Enable
#define SEIE                          0x00000800      // Sync Error Interrupt Enable
#define FEIE                          0x00000400      // FIFO Error Interrupt Enable
#define FWIE                          0x00000200      // FIFO Warning Interrupt Enable
#define FWDE                          0x00000002      // FIFO Warning DMA Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RCR2 register.
//
//*****************************************************************************

#define SYNC                          0x180000000      // Synchronous Mode
#define BCS                           0x20000000      // Bit Clock Swap
#define BCI                           0x10000000      // Bit Clock Input
#define MSEL                          0x18000000      // MCLK Select
#define BCP                           0x02000000      // Bit Clock Polarity
#define BCD                           0x01000000      // Bit Clock Direction
#define DIV                           0x00007F80      // Bit Clock Divide


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RCR3 register.
//
//*****************************************************************************

#define RCE                           0x00010000      // Receive Channel Enable
#define WDFL                          0x00000001      // Word Flag Configuration


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RCR4 register.
//
//*****************************************************************************

#define FRSZ                          0x00010000      // Frame Size
#define SYWD                          0x0001F000      // Sync Width
#define MF                            0x00000010      // MSB First
#define FSE                           0x00000008      // Frame Sync Early
#define FSP                           0x00000002      // Frame Sync Polarity
#define FSD                           0x00000001      // Frame Sync Direction


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RCR5 register.
//
//*****************************************************************************

#define WNW                           0x1F0000000      // Word N Width
#define W0W                           0x01F00000      // Word 0 Width
#define FBT                           0x0001F000      // First Bit Shifted


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RDRn register.
//
//*****************************************************************************

#define RDR[31:0]                     0x7FFFFFFF80000000      // Receive Data Register


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RMR register.
//
//*****************************************************************************

#define RWM                           0x00000006      // Receive Word Mask


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_MCR register.
//
//*****************************************************************************

#define DUF                           0x80000000      // Divider Update Flag
#define MOE                           0x40000000      // MCLK Output Enable
#define MICS                          0x06000000      // MCLK Input Clock Select


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_MDR register.
//
//*****************************************************************************

#define FRACT                         0x07F80000      // MCLK Fraction
#define DIVIDE                        0x007FF800      // MCLK Divide


//*****************************************************************************
//
// The following are defines for the bit fields in the GPIOx_PDOR register.
//
//*****************************************************************************

#define PDO                           0x7FFFFFFF80000000      // Port Data Output Register bits for unbonded pins return a undefined value when read.


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
// The following are defines for the bit fields in the TSIx_DATA register.
//
//*****************************************************************************

#define TSICH                         0x780000000      // These bits specify current channel to be measured. In hardware trigger mode (TSI_GENCS[STM] = 1), the scan will not start until the hardware trigger occurs. In software trigger mode (TSI_GENCS[STM] = 0), the scan starts immediately when TSI_DATA[SWTS] bit is written by 1.
#define DMAEN                         0x00800000      // This bit is used together with the TSI interrupt enable bits(TSIIE, ESOR) to generate a DMA transfer request instead of an interrupt.
#define SWTS                          0x00400000      // This write-only bit is a software start trigger. When STM bit is clear, write "1" to this bit will start a scan. The electrode channel to be scanned is determinated by TSI_DATA[TSICH] bits.
#define TSICNT                        0x7FFF8000      // These read-only bits record the accumulated scan counter value ticked by the reference oscillator.


//*****************************************************************************
//
// The following are defines for the bit fields in the TSIx_TSHD register.
//
//*****************************************************************************

#define THRESH                        0x7FFF80000000      // This half-word specifies the high threshold of the wakeup channel.
#define THRESL                        0x7FFF8000      // This half-word specifies the low threshold of the wakeup channel.


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

#define LOCRE0                        0x00000080      // Loss of Clock Reset Enable
#define FCFTRIM                       0x00000040      // Fast Internal Reference Clock Fine Trim
#define RANGE0                        0x00000060      // Frequency Range Select
#define HGO0                          0x00000008      // High Gain Oscillator Select
#define EREFS0                        0x00000004      // External Reference Select
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

#define PLLCLKEN0                     0x00000040      // PLL Clock Enable
#define PLLSTEN0                      0x00000020      // PLL Stop Enable
#define PRDIV0                        0x000001F0      // PLL External Reference Divider


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C6 register.
//
//*****************************************************************************

#define LOLIE0                        0x00000080      // Loss of Lock Interrupt Enable
#define PLLS                          0x00000040      // PLL Select
#define CME0                          0x00000020      // Clock Monitor Enable
#define VDIV0                         0x000001F0      // VCO 0 Divider


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_S register.
//
//*****************************************************************************

#define LOLS0                         0x00000080      // Loss of Lock Status
#define LOCK0                         0x00000040      // Lock Status
#define PLLST                         0x00000020      // PLL Select Status
#define IREFST                        0x00000010      // Internal Reference Status
#define CLKST                         0x00000018      // Clock Mode Status
#define OSCINIT0                      0x00000002      // OSC Initialization
#define IRCST                         0x00000001      // Internal Reference Clock Status


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_SC register.
//
//*****************************************************************************

#define ATME                          0x00000080      // Automatic Trim Machine Enable
#define ATMS                          0x00000040      // Automatic Trim Machine Select
#define ATMF                          0x00000020      // Automatic Trim Machine Fail Flag
#define FLTPRSRV                      0x00000010      // FLL Filter Preserve Enable
#define FCRDIV                        0x00000038      // Fast Clock Internal Reference Divider
#define LOCS0                         0x00000001      // OSC0 Loss of Clock Status


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
// The following are defines for the bit fields in the MCG_C7 register.
//
//*****************************************************************************

#define OSCSEL                        0x00000001      // MCG OSC Clock Select


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C8 register.
//
//*****************************************************************************

#define LOLRE                         0x00000040      // PLL Loss of Lock Reset Enable



#endif // __MKL26Z256VMP4_H__

