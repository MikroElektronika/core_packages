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

#ifndef __MCXC142VFM_H__
#define __MCXC142VFM_H__



//*****************************************************************************
//
// Interrupt assignments
//
//*****************************************************************************

#define NUMBER_OF_INT_VECTORS                   37               // Number of interrupts in the Vector table
#define NotAvail_IRQn                           -30              // Not available device specific interrupt
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
#define I2C0_IRQn                               8                // Status and Timeout and wakeup flags
#define I2C1_IRQn                               9                // Status and Timeout and wakeup flags
#define SPI0_IRQn                               10               // Single interrupt vector for all sources
#define SPI1_IRQn                               11               // Single interrupt vector for all sources
#define Status_And_Error_IRQn                   12               // Status and error
#define Status_And_Error_IRQn                   13               // Status and error
#define Status_And_Error_IRQn                   14               // Status and error
#define ADC0_IRQn                               15               // Conversion complete
#define CMP0_IRQn                               16               // Rising or falling edge of comparator output
#define Overflow_Or_Channel_Interrupt_IRQn      17               // Overflow or channel interrupt
#define Overflow_Or_Channel_Interrupt_IRQn      18               // Overflow or channel interrupt
#define Overflow_Or_Channel_Interrupt_IRQn      19               // Overflow or channel interrupt
#define Alarm_Interrupt_IRQn                    20               // Alarm interrupt
#define Seconds_Interrupt_IRQn                  21               // Seconds interrupt
#define SVIC_IRQn                               22               // Single interrupt vector for all channels
#define USB_IRQn                                24               // -
#define LPTMR0_IRQn                             28               // LP Timer compare match
#define PORTA_IRQn                              30               // Pin detect (Port A)
#define PORTB_IRQn                              31               // Pin detect (Single interrupt vector for Port B, Port C, Port D, and Port E)



//*****************************************************************************
//
// Port Control and Interrupts (PORT) registers
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
// Direct Memory Access Multiplexer (DMAMUX) registers
//
//*****************************************************************************

#define DMAMUX0_CHCFG0                (*((volatile uint32_t *)0x40021000))      // Channel Configuration register
#define DMAMUX0_CHCFG1                (*((volatile uint32_t *)0x40021001))      // Channel Configuration register
#define DMAMUX0_CHCFG2                (*((volatile uint32_t *)0x40021002))      // Channel Configuration register
#define DMAMUX0_CHCFG3                (*((volatile uint32_t *)0x40021003))      // Channel Configuration register


//*****************************************************************************
//
// Reset Control Module (RCM) registers
//
//*****************************************************************************

#define RCM_SRS0                      (*((volatile uint32_t *)0x4007F000))      // System Reset Status Register 0
#define RCM_SRS1                      (*((volatile uint32_t *)0x4007F001))      // System Reset Status Register 1
#define RCM_RPFC                      (*((volatile uint32_t *)0x4007F004))      // Reset Pin Filter Control register
#define RCM_RPFW                      (*((volatile uint32_t *)0x4007F005))      // Reset Pin Filter Width register
#define RCM_FM                        (*((volatile uint32_t *)0x4007F006))      // Force Mode Register
#define RCM_MR                        (*((volatile uint32_t *)0x4007F007))      // Mode Register
#define RCM_SSRS0                     (*((volatile uint32_t *)0x4007F008))      // Sticky System Reset Status Register 0
#define RCM_SSRS1                     (*((volatile uint32_t *)0x4007F009))      // Sticky System Reset Status Register 1


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
// Miscellaneous Control Module (MCM) registers
//
//*****************************************************************************

#define MCM_PLASC                     (*((volatile uint32_t *)0xF0003008))      // Crossbar Switch (AXBS) Slave Configuration
#define MCM_PLAMC                     (*((volatile uint32_t *)0xF000300A))      // Crossbar Switch (AXBS) Master Configuration
#define MCM_PLACR                     (*((volatile uint32_t *)0xF000300C))      // Platform Control Register
#define MCM_CPO                       (*((volatile uint32_t *)0xF0003040))      // Compute Operation Control Register


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
#define TPM0_POL                      (*((volatile uint32_t *)0x40038070))      // Channel Polarity (TPM0_POL)
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
#define TPM1_POL                      (*((volatile uint32_t *)0x40039070))      // Channel Polarity (TPM1_POL)
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
#define TPM2_POL                      (*((volatile uint32_t *)0x4003A070))      // Channel Polarity (TPM2_POL)
#define TPM2_CONF                     (*((volatile uint32_t *)0x4003A084))      // Configuration (TPM2_CONF)


//*****************************************************************************
//
// Analog-to-Digital Converter (ADC) registers
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
// Voltage Reference (VREFV1) registers
//
//*****************************************************************************

#define VREF_TRM                      (*((volatile uint32_t *)0x40074000))      // VREF Trim Register (VREF_TRM)
#define VREF_SC                       (*((volatile uint32_t *)0x40074001))      // VREF Status and Control Register (VREF_SC)


//*****************************************************************************
//
// Multipurpose Clock Generator Lite (MCG_Lite) registers
//
//*****************************************************************************

#define MCG_C1                        (*((volatile uint32_t *)0x40064000))      // MCG Control Register 1
#define MCG_C2                        (*((volatile uint32_t *)0x40064001))      // MCG Control Register 2
#define MCG_S                         (*((volatile uint32_t *)0x40064006))      // MCG Status Register
#define MCG_SC                        (*((volatile uint32_t *)0x40064008))      // MCG Status and Control Register
#define MCG_MC                        (*((volatile uint32_t *)0x40064018))      // MCG Miscellaneous Control Register


//*****************************************************************************
//
// Oscillator (OSC) registers
//
//*****************************************************************************

#define OSC0_CR                       (*((volatile uint32_t *)0x40065000))      // OSC Control Register (OSC0_CR)


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


//*****************************************************************************
//
// Periodic Interrupt Timer (PIT) registers
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
// Low-Power Timer (LPTMR) registers
//
//*****************************************************************************

#define LPTMR0_CSR                    (*((volatile uint32_t *)0x40040000))      // Low Power Timer Control Status Register (LPTMR0_CSR)
#define LPTMR0_PSR                    (*((volatile uint32_t *)0x40040004))      // Low Power Timer Prescale Register (LPTMR0_PSR)
#define LPTMR0_CMR                    (*((volatile uint32_t *)0x40040008))      // Low Power Timer Compare Register (LPTMR0_CMR)
#define LPTMR0_CNR                    (*((volatile uint32_t *)0x4004000C))      // Low Power Timer Counter Register (LPTMR0_CNR)


//*****************************************************************************
//
// Cyclic Redundancy Check (CRC) registers
//
//*****************************************************************************

#define CRC_DATA                      (*((volatile uint32_t *)0x40032000))      // CRC Data register
#define CRC_GPOLY                     (*((volatile uint32_t *)0x40032004))      // CRC Polynomial register
#define CRC_CTRL                      (*((volatile uint32_t *)0x40032008))      // CRC Control register


//*****************************************************************************
//
// Universal Asynchronous Receiver/Transmitter(UART) registers
//
//*****************************************************************************

#define UART2_BDH                     (*((volatile uint32_t *)0x4006C000))      // UART Baud Rate Registers: High
#define UART2_BDL                     (*((volatile uint32_t *)0x4006C001))      // UART Baud Rate Registers: Low
#define UART2_C1                      (*((volatile uint32_t *)0x4006C002))      // UART Control Register 1
#define UART2_C2                      (*((volatile uint32_t *)0x4006C003))      // UART Control Register 2
#define UART2_S1                      (*((volatile uint32_t *)0x4006C004))      // UART Status Register 1
#define UART2_S2                      (*((volatile uint32_t *)0x4006C005))      // UART Status Register 2
#define UART2_C3                      (*((volatile uint32_t *)0x4006C006))      // UART Control Register 3
#define UART2_D                       (*((volatile uint32_t *)0x4006C007))      // UART Data Register
#define UART2_MA1                     (*((volatile uint32_t *)0x4006C008))      // UART Match Address Registers 1
#define UART2_MA2                     (*((volatile uint32_t *)0x4006C009))      // UART Match Address Registers 2
#define UART2_C4                      (*((volatile uint32_t *)0x4006C00A))      // UART Control Register 4
#define UART2_C5                      (*((volatile uint32_t *)0x4006C00B))      // UART Control Register 5
#define UART2_C7816                   (*((volatile uint32_t *)0x4006C018))      // UART 7816 Control Register
#define UART2_IE7816                  (*((volatile uint32_t *)0x4006C019))      // UART 7816 Interrupt Enable Register
#define UART2_IS7816                  (*((volatile uint32_t *)0x4006C01A))      // UART 7816 Interrupt Status Register
#define UART2_WP7816                  (*((volatile uint32_t *)0x4006C01B))      // UART 7816 Wait Parameter Register
#define UART2_WN7816                  (*((volatile uint32_t *)0x4006C01C))      // UART 7816 Wait N Register
#define UART2_WF7816                  (*((volatile uint32_t *)0x4006C01D))      // UART 7816 Wait FD Register
#define UART2_ET7816                  (*((volatile uint32_t *)0x4006C01E))      // UART 7816 Error Threshold Register
#define UART2_TL7816                  (*((volatile uint32_t *)0x4006C01F))      // UART 7816 Transmit Length Register
#define UART2_AP7816A_T0              (*((volatile uint32_t *)0x4006C03A))      // UART 7816 ATR Duration Timer Register A
#define UART2_AP7816B_T0              (*((volatile uint32_t *)0x4006C03B))      // UART 7816 ATR Duration Timer Register B
#define UART2_WP7816A_T0              (*((volatile uint32_t *)0x4006C03C))      // UART 7816 Wait Parameter Register A
#define UART2_WP7816A_T1              (*((volatile uint32_t *)0x4006C03C))      // UART 7816 Wait Parameter Register A
#define UART2_WP7816B_T0              (*((volatile uint32_t *)0x4006C03D))      // UART 7816 Wait Parameter Register B
#define UART2_WP7816B_T1              (*((volatile uint32_t *)0x4006C03D))      // UART 7816 Wait Parameter Register B
#define UART2_WGP7816_T1              (*((volatile uint32_t *)0x4006C03E))      // UART 7816 Wait and Guard Parameter Register
#define UART2_WP7816C_T1              (*((volatile uint32_t *)0x4006C03F))      // UART 7816 Wait Parameter Register C


//*****************************************************************************
//
// Low Power Universal asynchronous receiver/transmitter (LPUART) registers
//
//*****************************************************************************

#define LPUART0_BAUD                  (*((volatile uint32_t *)0x40054000))      // LPUART Baud Rate Register (LPUART0_BAUD)
#define LPUART0_STAT                  (*((volatile uint32_t *)0x40054004))      // LPUART Status Register (LPUART0_STAT)
#define LPUART0_CTRL                  (*((volatile uint32_t *)0x40054008))      // LPUART Control Register (LPUART0_CTRL)
#define LPUART0_DATA                  (*((volatile uint32_t *)0x4005400C))      // LPUART Data Register (LPUART0_DATA)
#define LPUART0_MATCH                 (*((volatile uint32_t *)0x40054010))      // LPUART Match Address Register (LPUART0_MATCH)
#define LPUART1_BAUD                  (*((volatile uint32_t *)0x40055000))      // LPUART Baud Rate Register (LPUART1_BAUD)
#define LPUART1_STAT                  (*((volatile uint32_t *)0x40055004))      // LPUART Status Register (LPUART1_STAT)
#define LPUART1_CTRL                  (*((volatile uint32_t *)0x40055008))      // LPUART Control Register (LPUART1_CTRL)
#define LPUART1_DATA                  (*((volatile uint32_t *)0x4005500C))      // LPUART Data Register (LPUART1_DATA)
#define LPUART1_MATCH                 (*((volatile uint32_t *)0x40055010))      // LPUART Match Address Register (LPUART1_MATCH)


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

#define I2C0_A1                       (*((volatile uint32_t *)0x40066000))      // I2C Address Register 1
#define I2C0_F                        (*((volatile uint32_t *)0x40066001))      // I2C Frequency Divider register
#define I2C0_C1                       (*((volatile uint32_t *)0x40066002))      // I2C Control Register 1
#define I2C0_S                        (*((volatile uint32_t *)0x40066003))      // I2C Status register
#define I2C0_D                        (*((volatile uint32_t *)0x40066004))      // I2C Data I/O register
#define I2C0_C2                       (*((volatile uint32_t *)0x40066005))      // I2C Control Register 2
#define I2C0_FLT                      (*((volatile uint32_t *)0x40066006))      // I2C Programmable Input Glitch Filter Register
#define I2C0_RA                       (*((volatile uint32_t *)0x40066007))      // I2C Range Address register
#define I2C0_SMB                      (*((volatile uint32_t *)0x40066008))      // I2C SMBus Control and Status register
#define I2C0_A2                       (*((volatile uint32_t *)0x40066009))      // I2C Address Register 2
#define I2C0_SLTH                     (*((volatile uint32_t *)0x4006600A))      // I2C SCL Low Timeout Register High
#define I2C0_SLTL                     (*((volatile uint32_t *)0x4006600B))      // I2C SCL Low Timeout Register Low
#define I2C0_S2                       (*((volatile uint32_t *)0x4006600C))      // I2C Status register 2
#define I2C1_A1                       (*((volatile uint32_t *)0x40067000))      // I2C Address Register 1
#define I2C1_F                        (*((volatile uint32_t *)0x40067001))      // I2C Frequency Divider register
#define I2C1_C1                       (*((volatile uint32_t *)0x40067002))      // I2C Control Register 1
#define I2C1_S                        (*((volatile uint32_t *)0x40067003))      // I2C Status register
#define I2C1_D                        (*((volatile uint32_t *)0x40067004))      // I2C Data I/O register
#define I2C1_C2                       (*((volatile uint32_t *)0x40067005))      // I2C Control Register 2
#define I2C1_FLT                      (*((volatile uint32_t *)0x40067006))      // I2C Programmable Input Glitch Filter Register
#define I2C1_RA                       (*((volatile uint32_t *)0x40067007))      // I2C Range Address register
#define I2C1_SMB                      (*((volatile uint32_t *)0x40067008))      // I2C SMBus Control and Status register
#define I2C1_A2                       (*((volatile uint32_t *)0x40067009))      // I2C Address Register 2
#define I2C1_SLTH                     (*((volatile uint32_t *)0x4006700A))      // I2C SCL Low Timeout Register High
#define I2C1_SLTL                     (*((volatile uint32_t *)0x4006700B))      // I2C SCL Low Timeout Register Low
#define I2C1_S2                       (*((volatile uint32_t *)0x4006700C))      // I2C Status register 2


//*****************************************************************************
//
// Universal Serial Bus (USB) FS Subsystem registers
//
//*****************************************************************************

#define USB0_PERID                    (*((volatile uint32_t *)0x40072000))      // Peripheral ID register
#define USB0_IDCOMP                   (*((volatile uint32_t *)0x40072004))      // Peripheral ID Complement register
#define USB0_REV                      (*((volatile uint32_t *)0x40072008))      // Peripheral Revision register
#define USB0_ADDINFO                  (*((volatile uint32_t *)0x4007200C))      // Peripheral Additional Info register
#define USB0_ISTAT                    (*((volatile uint32_t *)0x40072080))      // Interrupt Status register
#define USB0_INTEN                    (*((volatile uint32_t *)0x40072084))      // Interrupt Enable register
#define USB0_ERRSTAT                  (*((volatile uint32_t *)0x40072088))      // Error Interrupt Status register
#define USB0_ERREN                    (*((volatile uint32_t *)0x4007208C))      // Error Interrupt Enable register
#define USB0_STAT                     (*((volatile uint32_t *)0x40072090))      // Status register
#define USB0_CTL                      (*((volatile uint32_t *)0x40072094))      // Control register
#define USB0_ADDR                     (*((volatile uint32_t *)0x40072098))      // Address register
#define USB0_BDTPAGE1                 (*((volatile uint32_t *)0x4007209C))      // BDT Page register 1
#define USB0_FRMNUML                  (*((volatile uint32_t *)0x400720A0))      // Frame Number register Low
#define USB0_FRMNUMH                  (*((volatile uint32_t *)0x400720A4))      // Frame Number register High
#define USB0_BDTPAGE2                 (*((volatile uint32_t *)0x400720B0))      // BDT Page Register 2
#define USB0_BDTPAGE3                 (*((volatile uint32_t *)0x400720B4))      // BDT Page Register 3
#define USB0_ENDPT0                   (*((volatile uint32_t *)0x400720C0))      // Endpoint Control register
#define USB0_ENDPT1                   (*((volatile uint32_t *)0x400720C4))      // Endpoint Control register
#define USB0_ENDPT2                   (*((volatile uint32_t *)0x400720C8))      // Endpoint Control register
#define USB0_ENDPT3                   (*((volatile uint32_t *)0x400720CC))      // Endpoint Control register
#define USB0_ENDPT4                   (*((volatile uint32_t *)0x400720D0))      // Endpoint Control register
#define USB0_ENDPT5                   (*((volatile uint32_t *)0x400720D4))      // Endpoint Control register
#define USB0_ENDPT6                   (*((volatile uint32_t *)0x400720D8))      // Endpoint Control register
#define USB0_ENDPT7                   (*((volatile uint32_t *)0x400720DC))      // Endpoint Control register
#define USB0_ENDPT8                   (*((volatile uint32_t *)0x400720E0))      // Endpoint Control register
#define USB0_ENDPT9                   (*((volatile uint32_t *)0x400720E4))      // Endpoint Control register
#define USB0_ENDPT10                  (*((volatile uint32_t *)0x400720E8))      // Endpoint Control register
#define USB0_ENDPT11                  (*((volatile uint32_t *)0x400720EC))      // Endpoint Control register
#define USB0_ENDPT12                  (*((volatile uint32_t *)0x400720F0))      // Endpoint Control register
#define USB0_ENDPT13                  (*((volatile uint32_t *)0x400720F4))      // Endpoint Control register
#define USB0_ENDPT14                  (*((volatile uint32_t *)0x400720F8))      // Endpoint Control register
#define USB0_ENDPT15                  (*((volatile uint32_t *)0x400720FC))      // Endpoint Control register
#define USB0_USBCTRL                  (*((volatile uint32_t *)0x40072100))      // USB Control register
#define USB0_OBSERVE                  (*((volatile uint32_t *)0x40072104))      // USB OTG Observe register
#define USB0_CONTROL                  (*((volatile uint32_t *)0x40072108))      // USB OTG Control register
#define USB0_USBTRC0                  (*((volatile uint32_t *)0x4007210C))      // USB Transceiver Control register 0
#define USB0_USBFRMADJUST             (*((volatile uint32_t *)0x40072114))      // Frame Adjust Register
#define USB0_KEEP_ALIVE_CTRL          (*((volatile uint32_t *)0x40072124))      // Keep Alive mode control
#define USB0_KEEP_ALIVE_WKCTRL        (*((volatile uint32_t *)0x40072128))      // Keep Alive mode wakeup control
#define USB0_CLK_RECOVER_CTRL         (*((volatile uint32_t *)0x40072140))      // USB Clock recovery control
#define USB0_CLK_RECOVER_IRC_EN       (*((volatile uint32_t *)0x40072144))      // IRC48M oscillator enable register
#define USB0_CLK_RECOVER_INT_EN       (*((volatile uint32_t *)0x40072154))      // Clock recovery combined interrupt enable
#define USB0_CLK_RECOVER_INT_STATUS   (*((volatile uint32_t *)0x4007215C))      // Clock recovery separated interrupt status


//*****************************************************************************
//
// FlexIO registers
//
//*****************************************************************************

#define FLEXIO_VERID                  (*((volatile uint32_t *)0x4005F000))      // Version ID Register
#define FLEXIO_PARAM                  (*((volatile uint32_t *)0x4005F004))      // Parameter Register
#define FLEXIO_CTRL                   (*((volatile uint32_t *)0x4005F008))      // FlexIO Control Register
#define FLEXIO_SHIFTSTAT              (*((volatile uint32_t *)0x4005F010))      // Shifter Status Register
#define FLEXIO_SHIFTERR               (*((volatile uint32_t *)0x4005F014))      // Shifter Error Register
#define FLEXIO_TIMSTAT                (*((volatile uint32_t *)0x4005F018))      // Timer Status Register
#define FLEXIO_SHIFTSIEN              (*((volatile uint32_t *)0x4005F020))      // Shifter Status Interrupt Enable
#define FLEXIO_SHIFTEIEN              (*((volatile uint32_t *)0x4005F024))      // Shifter Error Interrupt Enable
#define FLEXIO_TIMIEN                 (*((volatile uint32_t *)0x4005F028))      // Timer Interrupt Enable Register
#define FLEXIO_SHIFTSDEN              (*((volatile uint32_t *)0x4005F030))      // Shifter Status DMA Enable
#define FLEXIO_SHIFTCTL0              (*((volatile uint32_t *)0x4005F080))      // Shifter Control N Register
#define FLEXIO_SHIFTCTL1              (*((volatile uint32_t *)0x4005F084))      // Shifter Control N Register
#define FLEXIO_SHIFTCTL2              (*((volatile uint32_t *)0x4005F088))      // Shifter Control N Register
#define FLEXIO_SHIFTCTL3              (*((volatile uint32_t *)0x4005F08C))      // Shifter Control N Register
#define FLEXIO_SHIFTCFG0              (*((volatile uint32_t *)0x4005F100))      // Shifter Configuration N Register
#define FLEXIO_SHIFTCFG1              (*((volatile uint32_t *)0x4005F104))      // Shifter Configuration N Register
#define FLEXIO_SHIFTCFG2              (*((volatile uint32_t *)0x4005F108))      // Shifter Configuration N Register
#define FLEXIO_SHIFTCFG3              (*((volatile uint32_t *)0x4005F10C))      // Shifter Configuration N Register
#define FLEXIO_SHIFTBUF0              (*((volatile uint32_t *)0x4005F200))      // Shifter Buffer N Register
#define FLEXIO_SHIFTBUF1              (*((volatile uint32_t *)0x4005F204))      // Shifter Buffer N Register
#define FLEXIO_SHIFTBUF2              (*((volatile uint32_t *)0x4005F208))      // Shifter Buffer N Register
#define FLEXIO_SHIFTBUF3              (*((volatile uint32_t *)0x4005F20C))      // Shifter Buffer N Register
#define FLEXIO_SHIFTBUFBIS0           (*((volatile uint32_t *)0x4005F280))      // Shifter Buffer N Bit Swapped Register
#define FLEXIO_SHIFTBUFBIS1           (*((volatile uint32_t *)0x4005F284))      // Shifter Buffer N Bit Swapped Register
#define FLEXIO_SHIFTBUFBIS2           (*((volatile uint32_t *)0x4005F288))      // Shifter Buffer N Bit Swapped Register
#define FLEXIO_SHIFTBUFBIS3           (*((volatile uint32_t *)0x4005F28C))      // Shifter Buffer N Bit Swapped Register
#define FLEXIO_SHIFTBUFBYS0           (*((volatile uint32_t *)0x4005F300))      // Shifter Buffer N Byte Swapped Register
#define FLEXIO_SHIFTBUFBYS1           (*((volatile uint32_t *)0x4005F304))      // Shifter Buffer N Byte Swapped Register
#define FLEXIO_SHIFTBUFBYS2           (*((volatile uint32_t *)0x4005F308))      // Shifter Buffer N Byte Swapped Register
#define FLEXIO_SHIFTBUFBYS3           (*((volatile uint32_t *)0x4005F30C))      // Shifter Buffer N Byte Swapped Register
#define FLEXIO_SHIFTBUFBBS0           (*((volatile uint32_t *)0x4005F380))      // Shifter Buffer N Bit Byte Swapped Register
#define FLEXIO_SHIFTBUFBBS1           (*((volatile uint32_t *)0x4005F384))      // Shifter Buffer N Bit Byte Swapped Register
#define FLEXIO_SHIFTBUFBBS2           (*((volatile uint32_t *)0x4005F388))      // Shifter Buffer N Bit Byte Swapped Register
#define FLEXIO_SHIFTBUFBBS3           (*((volatile uint32_t *)0x4005F38C))      // Shifter Buffer N Bit Byte Swapped Register
#define FLEXIO_TIMCTL0                (*((volatile uint32_t *)0x4005F400))      // Timer Control N Register
#define FLEXIO_TIMCTL1                (*((volatile uint32_t *)0x4005F404))      // Timer Control N Register
#define FLEXIO_TIMCTL2                (*((volatile uint32_t *)0x4005F408))      // Timer Control N Register
#define FLEXIO_TIMCTL3                (*((volatile uint32_t *)0x4005F40C))      // Timer Control N Register
#define FLEXIO_TIMCFG0                (*((volatile uint32_t *)0x4005F480))      // Timer Configuration N Register
#define FLEXIO_TIMCFG1                (*((volatile uint32_t *)0x4005F484))      // Timer Configuration N Register
#define FLEXIO_TIMCFG2                (*((volatile uint32_t *)0x4005F488))      // Timer Configuration N Register
#define FLEXIO_TIMCFG3                (*((volatile uint32_t *)0x4005F48C))      // Timer Configuration N Register
#define FLEXIO_TIMCMP0                (*((volatile uint32_t *)0x4005F500))      // Timer Compare N Register
#define FLEXIO_TIMCMP1                (*((volatile uint32_t *)0x4005F504))      // Timer Compare N Register
#define FLEXIO_TIMCMP2                (*((volatile uint32_t *)0x4005F508))      // Timer Compare N Register
#define FLEXIO_TIMCMP3                (*((volatile uint32_t *)0x4005F50C))      // Timer Compare N Register


//*****************************************************************************
//
// General-Purpose Input/Output (GPIO) registers
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
// Micro Trace Buffer (MTB) registers
//
//*****************************************************************************

#define MTB_POSITION                  (*((volatile uint32_t *)0xF0000000))      // MTB Position Register (MTB_POSITION)
#define MTB_MASTER                    (*((volatile uint32_t *)0xF0000004))      // MTB Master Register (MTB_MASTER)
#define MTB_FLOW                      (*((volatile uint32_t *)0xF0000008))      // MTB Flow Register (MTB_FLOW)
#define MTB_BASE                      (*((volatile uint32_t *)0xF000000C))      // MTB Base Register (MTB_BASE)
#define MTB_MODECTRL                  (*((volatile uint32_t *)0xF0000F00))      // Integration Mode Control Register (MTB_MODECTRL)
#define MTB_TAGSET                    (*((volatile uint32_t *)0xF0000FA0))      // Claim TAG Set Register (MTB_TAGSET)
#define MTB_TAGCLEAR                  (*((volatile uint32_t *)0xF0000FA4))      // Claim TAG Clear Register (MTB_TAGCLEAR)
#define MTB_LOCKACCESS                (*((volatile uint32_t *)0xF0000FB0))      // Lock Access Register (MTB_LOCKACCESS)
#define MTB_LOCKSTAT                  (*((volatile uint32_t *)0xF0000FB4))      // Lock Status Register (MTB_LOCKSTAT)
#define MTB_AUTHSTAT                  (*((volatile uint32_t *)0xF0000FB8))      // Authentication Status Register (MTB_AUTHSTAT)
#define MTB_DEVICEARCH                (*((volatile uint32_t *)0xF0000FBC))      // Device Architecture Register (MTB_DEVICEARCH)
#define MTB_DEVICECFG                 (*((volatile uint32_t *)0xF0000FC8))      // Device Configuration Register (MTB_DEVICECFG)
#define MTB_DEVICETYPID               (*((volatile uint32_t *)0xF0000FCC))      // Device Type Identifier Register (MTB_DEVICETYPID)
#define MTB_PERIPHID4                 (*((volatile uint32_t *)0xF0000FD0))      // Peripheral ID Register (MTB_PERIPHID4)
#define MTB_PERIPHID5                 (*((volatile uint32_t *)0xF0000FD4))      // Peripheral ID Register (MTB_PERIPHID5)
#define MTB_PERIPHID6                 (*((volatile uint32_t *)0xF0000FD8))      // Peripheral ID Register (MTB_PERIPHID6)
#define MTB_PERIPHID7                 (*((volatile uint32_t *)0xF0000FDC))      // Peripheral ID Register (MTB_PERIPHID7)
#define MTB_PERIPHID0                 (*((volatile uint32_t *)0xF0000FE0))      // Peripheral ID Register (MTB_PERIPHID0)
#define MTB_PERIPHID1                 (*((volatile uint32_t *)0xF0000FE4))      // Peripheral ID Register (MTB_PERIPHID1)
#define MTB_PERIPHID2                 (*((volatile uint32_t *)0xF0000FE8))      // Peripheral ID Register (MTB_PERIPHID2)
#define MTB_PERIPHID3                 (*((volatile uint32_t *)0xF0000FEC))      // Peripheral ID Register (MTB_PERIPHID3)
#define MTB_COMPID0                   (*((volatile uint32_t *)0xF0000FF0))      // Component ID Register (MTB_COMPID0)
#define MTB_COMPID1                   (*((volatile uint32_t *)0xF0000FF4))      // Component ID Register (MTB_COMPID1)
#define MTB_COMPID2                   (*((volatile uint32_t *)0xF0000FF8))      // Component ID Register (MTB_COMPID2)
#define MTB_COMPID3                   (*((volatile uint32_t *)0xF0000FFC))      // Component ID Register (MTB_COMPID3)



//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT1 register.
//
//*****************************************************************************

#define OSC32KSEL                     0x00180000      // 32K Oscillator Clock Select
#define OSC32KOUT                     0x00060000      // 32K oscillator clock output


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT2 register.
//
//*****************************************************************************

#define LPUART1SRC                    0x60000000      // LPUART1 Clock Source Select
#define LPUART0SRC                    0x18000000      // LPUART0 Clock Source Select
#define TPMSRC                        0x06000000      // TPM Clock Source Select
#define FLEXIOSRC                     0x01800000      // FlexIO Module Clock Source Select
#define USBSRC                        0x00040000      // USB clock source select
#define CLKOUTSEL                     0x00000380      // CLKOUT select
#define RTCCLKOUTSEL                  0x00000010      // RTC  Clock Out Select


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
#define LPUART1ODE                    0x00020000      // LPUART1 Open Drain Enable
#define LPUART0ODE                    0x00010000      // LPUART0 Open Drain Enable
#define LPUART1RXSRC                  0x00000040      // LPUART1 Receive Data Source Select
#define LPUART1TXSRC                  0x00000060      // LPUART1 Transmit Data Source Select
#define LPUART0RXSRC                  0x00000004      // LPUART0 Receive Data Source Select
#define LPUART0TXSRC                  0x00000006      // LPUART0 Transmit Data Source Select


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

#define FAMID                         0x780000000      // MCX C family ID
#define SUBFAMID                      0x78000000      // Sub-Family ID
#define SERIESID                      0x07800000      // Series ID
#define SRAMSIZE                      0x00780000      // SRAM Size
#define REVID                         0x00078000      // Device Revision Number
#define DIEID                         0x0000F800      // Device Die Number
#define PINID                         0x000001C0      // Pincount Identification


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC4 register.
//
//*****************************************************************************

#define SPI1                          0x00800000      // SPI1 Clock Gate Control
#define SPI0                          0x00400000      // SPI0 Clock Gate Control
#define VREF                          0x00100000      // VREF Clock Gate Control
#define CMP0                          0x00080000      // Comparator Clock Gate Control
#define USBFS                         0x00040000      // USB Clock Gate Control
#define UART2                         0x00001000      // UART2 Clock Gate Control
#define I2C1                          0x00000080      // I2C1 Clock Gate Control
#define I2C0                          0x00000040      // I2C0 Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC5 register.
//
//*****************************************************************************

#define LPUART1                       0x00200000      // LPUART1 Clock Gate Control
#define LPUART0                       0x00100000      // LPUART0 Clock Gate Control
#define PORTE                         0x00002000      // Port E Clock Gate Control
#define PORTD                         0x00001000      // Port D Clock Gate Control
#define PORTC                         0x00000800      // Port C Clock Gate Control
#define PORTB                         0x00000400      // Port B Clock Gate Control
#define PORTA                         0x00000200      // Port A Clock Gate Control
#define LPTMR                         0x00000001      // Low Power Timer Access Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC6 register.
//
//*****************************************************************************

#define RTC                           0x20000000      // RTC Access Control
#define ADC0                          0x08000000      // ADC0 Clock Gate Control
#define TPM2                          0x04000000      // TPM2 Clock Gate Control
#define TPM1                          0x02000000      // TPM1 Clock Gate Control
#define TPM0                          0x01000000      // TPM0 Clock Gate Control
#define PIT                           0x00800000      // PIT Clock Gate Control
#define CRC                           0x00040000      // CRC Clock Gate Control
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

#define COPCLKSEL                     0x00000180      // COP Clock Select
#define COPDBGEN                      0x00000020      // COP Debug Enable
#define COPSTPEN                      0x00000010      // COP Stop Enable
#define COPT                          0x00000018      // COP Watchdog Timeout
#define COPCLKS                       0x00000002      // COP Clock Select
#define COPW                          0x00000001      // COP Windowed Mode


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SRVCOP register.
//
//*****************************************************************************

#define SRVCOP                        0x00000001      // Service COP Register


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
#define LPOPO                         0x00000008      // LPO Power Option
#define VLLSM                         0x0000001C      // VLLS Mode Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_PMSTAT register.
//
//*****************************************************************************

#define PMSTAT                        0x00000001      // Power Mode Status


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_SRS0 register.
//
//*****************************************************************************

#define POR                           0x00000080      // Power-On Reset
#define PIN                           0x00000040      // External Reset Pin
#define WDOG                          0x00000020      // Watchdog
#define LVD                           0x00000002      // Low-Voltage Detect Reset
#define WAKEUP                        0x00000001      // Low Leakage Wakeup Reset


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_SRS1 register.
//
//*****************************************************************************

#define SACKERR                       0x00000020      // Stop Mode Acknowledge Error Reset
#define MDM_AP                        0x00000008      // MDM-AP System Reset Request
#define SW                            0x00000004      // Software
#define LOCKUP                        0x00000002      // Core Lockup


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_RPFC register.
//
//*****************************************************************************

#define RSTFLTSS                      0x00000004      // Reset Pin Filter Select in Stop Mode
#define RSTFLTSRW                     0x00000006      // Reset Pin Filter Select in Run and Wait Modes


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_RPFW register.
//
//*****************************************************************************

#define RSTFLTSEL                     0x000001F0      // Reset Pin Filter Bus Clock Select


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_FM register.
//
//*****************************************************************************

#define FORCEROM                      0x0000000C      // Force ROM Boot


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_MR register.
//
//*****************************************************************************

#define BOOTROM                       0x0000000C      // Boot ROM Configuration


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_SSRS0 register.
//
//*****************************************************************************

#define SPOR                          0x00000080      // Sticky Power-On Reset
#define SPIN                          0x00000040      // Sticky External Reset Pin
#define SWDOG                         0x00000020      // Sticky Watchdog
#define SLVD                          0x00000002      // Sticky Low-Voltage Detect Reset
#define SWAKEUP                       0x00000001      // Sticky Low Leakage Wakeup Reset


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_SSRS1 register.
//
//*****************************************************************************

#define SSACKERR                      0x00000020      // Sticky Stop Mode Acknowledge Error Reset
#define SMDM_AP                       0x00000008      // Sticky MDM-AP System Reset Request
#define SSW                           0x00000004      // Sticky Software
#define SLOCKUP                       0x00000002      // Sticky Core Lockup


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_SARn register.
//
//*****************************************************************************

#define SAR                           0x7FFFF80000      // Each SAR contains the byte address used by the DMA controller to read data. The SARn is typically aligned on a 0-modulo-ssize boundarythat is, on the natural alignment of the source data.


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_DARn register.
//
//*****************************************************************************

#define DAR                           0x7FFFF80000      // Each DAR contains the byte address used by the DMA controller to write data. The DARn is typically aligned on a 0-modulo-dsize boundarythat is, on the natural alignment of the destination data.


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
#define ERQ                           0x40000000      // Enable Request
#define CS                            0x20000000      // Cycle Steal
#define AA                            0x10000000      // Auto-allocate
#define Reserved                      0x78000000      // This read-only field is reserved and always has the value 0.
#define EADREQ                        0x00800000      // Enable Asynchronous DMA Request
#define SINC                          0x00400000      // Source Increment
#define SSIZE                         0x00600000      // Source Size
#define DINC                          0x00080000      // Destination Increment
#define DSIZE                         0x000C0000      // Destination Size
#define START                         0x00010000      // Start
#define SMOD                          0x00018000      // Source Mode
#define DMOD                          0x00006000      // Destination Mode
#define D_REQ                         0x00001800      // Destination Request
#define LINKCC                        0x00000600      // Link Channel Control
#define LCH1                          0x00000180      // Linked Channel 1
#define LCH2                          0x00000060      // Linked Channel 2
#define Reserved                      0x00000078      // This read-only field is reserved and always has the value 0.


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_PLASC register.
//
//*****************************************************************************

#define ASC                           0x00007F80      // Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_PLAMC register.
//
//*****************************************************************************

#define AMC                           0x00007F80      // Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_PLACR register.
//
//*****************************************************************************

#define ESFC                          0x00010000      // Enable Stalling Flash Controller
#define DFCS                          0x00008000      // Disable Flash Controller Speculation
#define EFDS                          0x00004000      // Enable Flash Data Speculation
#define DFCC                          0x00002000      // Disable Flash Controller Cache
#define DFCIC                         0x00001000      // Disable Flash Controller Instruction Caching
#define DFCDA                         0x00000800      // Disable Flash Controller Data Caching
#define CFCC                          0x00000400      // Clear Flash Controller Cache
#define ARB                           0x00000200      // Arbitration select


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_CPO register.
//
//*****************************************************************************

#define CPOWOI                        0x00000004      // Compute Operation Wake-up on Interrupt
#define CPOACK                        0x00000002      // Compute Operation Acknowledge
#define CPOREQ                        0x00000001      // Compute Operation Request


//*****************************************************************************
//
// The following are defines for the bit fields in the CRC_DATA register.
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

#define HIGH                          0x7FFF80000000      // High Polynominal Half-word
#define LOW                           0x7FFF8000      // Low Polynominal Half-word


//*****************************************************************************
//
// The following are defines for the bit fields in the CRC_CTRL register.
//
//*****************************************************************************

#define TOT                           0x04000000      // -
#define TOTR                          0x02000000      // -
#define FXOR                          0x01000000      // -
#define WAS                           0x00800000      // -
#define TCRC                          0x00400000      // -


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_PERID register.
//
//*****************************************************************************

#define ID                            0x00000078      // Peripheral Identification


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_IDCOMP register.
//
//*****************************************************************************

#define NID                           0x00000078      // Ones' complement of PERID[ID] bits


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

#define IEHOST                        0x00000001      // Host mode enable


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_ISTAT register.
//
//*****************************************************************************

#define STALL                         0x00000080      // Stall Interrupt
#define RESUME                        0x00000020      // Resume Interrupt
#define SLEEP                         0x00000010      // Sleep Interrupt
#define TOKDNE                        0x00000008      // Token Done Interrupt
#define SOFTOK                        0x00000004      // Start Of Frame Interrupt
#define ERROR                         0x00000002      // Error Interrupt
#define USBRST                        0x00000001      // USB Reset Interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_INTEN register.
//
//*****************************************************************************

#define STALLEN                       0x00000080      // Stall Interrupt Enable
#define RESUMEEN                      0x00000020      // Resume Interrupt Enable
#define SLEEPEN                       0x00000010      // Sleep Interrupt Enable
#define TOKDNEEN                      0x00000008      // Token Done Interrupt Enable
#define SOFTOKEN                      0x00000004      // Start Of Frame Interrupt Enable
#define ERROREN                       0x00000002      // Error Interrupt Enable
#define USBRSTEN                      0x00000001      // USB Reset Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_ERRSTAT register.
//
//*****************************************************************************

#define BTSERR                        0x00000080      // Bit Stuff Error Interrupt
#define DMAERR                        0x00000020      // DMA Error Interrupt
#define BTOERR                        0x00000010      // Bus Turnaround Timeout Error Interrupt
#define DFN8                          0x00000008      // Data Field Not 8 Bits Interrupt
#define CRC16                         0x00000004      // CRC16 Error Interrupt
#define CRC5                          0x00000002      // CRC5 Error Interrupt
#define PIDERR                        0x00000001      // PID Check Failure Interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_ERREN register.
//
//*****************************************************************************

#define BTSERREN                      0x00000080      // Bit Stuff Error Interrupt Enable
#define DMAERREN                      0x00000020      // DMA Error Interrupt Enable
#define BTOERREN                      0x00000010      // Bus Turnaround Timeout Error Interrupt Enable
#define DFN8EN                        0x00000008      // Data Field Not 8 Bits Interrupt Enable
#define CRC16EN                       0x00000004      // CRC16 Error Interrupt Enable
#define CRC5EOFEN                     0x00000002      // CRC5/EOF Error Interrupt Enable
#define PIDERREN                      0x00000001      // PID Check Failure Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_STAT register.
//
//*****************************************************************************

#define ENDP                          0x00000780      // Endpoint Address
#define TX                            0x00000008      // Transmit Indicator
#define ODD                           0x00000004      // Odd Bank Indicator


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_CTL register.
//
//*****************************************************************************

#define JSTATE                        0x00000080      // Live USB differential receiver JSTATE signal
#define SE0                           0x00000040      // Live USB Single Ended Zero signal
#define TXSUSPENDTOKENBUSY            0x00000020      // TXD_SUSPEND is set when the SIE has disabled packet transmission and reception
#define RESUME                        0x00000004      // Resume Signaling Enable
#define ODDRST                        0x00000002      // Odd Bank Reset
#define USBENSOFEN                    0x00000001      // USB Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_ADDR register.
//
//*****************************************************************************

#define ADDR                          0x00001FC0      // USB Address


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_BDTPAGE1 register.
//
//*****************************************************************************

#define BDTBA                         0x00007F80      // BDT Base Address


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_FRMNUML register.
//
//*****************************************************************************

#define FRM[7:0]                      0x00007F80      // Frame Number


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_FRMNUMH register.
//
//*****************************************************************************

#define FRM[10:8]                     0x0000001C      // Frame Number
#define FRM[10:8]                     0x00000004      // This 3-bit field and the 8-bit field in the Frame Number Register Low are used to compute the address where the current Buffer Descriptor Table (BDT) resides in system memory.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_BDTPAGE2 register.
//
//*****************************************************************************

#define BDTBA                         0x00000080      // Provides address bits 23 through 16 of the BDT base address that defines the location of Buffer Descriptor Table resides in system memory.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_BDTPAGE3 register.
//
//*****************************************************************************

#define BDTBA                         0x00000080      // Provides address bits 31 through 24 of the BDT base address that defines the location of Buffer Descriptor Table resides in system memory.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_ENDPTn register.
//
//*****************************************************************************

#define EPCTLDIS                      0x00000010      // This bit, when set, disables control (SETUP) transfers. When cleared, control transfers are enabled. This applies if and only if the EPRXEN and EPTXEN bits are also set. See Table 37-7
#define EPRXEN                        0x00000008      // This bit, when set, enables the endpoint for RX transfers. See Table 37-7
#define EPTXEN                        0x00000004      // This bit, when set, enables the endpoint for TX transfers. See Table 37-7
#define EPSTALL                       0x00000002      // When set this bit indicates that the endpoint is stalled. This bit has priority over all other control bits in this register, but it is only valid if EPTXEN=1 or EPRXEN=1. Any access to this endpoint causes the USB Module to return a STALL handshake. After an endpoint is stalled it requires intervention from the Host Controller.
#define EPHSHK                        0x00000001      // When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint. This bit is generally 1 unless the endpoint is Isochronous.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_USBCTRL register.
//
//*****************************************************************************

#define SUSP                          0x00000080      // Places the USB transceiver into the suspend state.;; 0: USB transceiver is not in suspend state;; 1: USB transceiver is in suspend state.
#define PDE                           0x00000040      // Enables the weak pulldowns on the USB transceiver.;; 0: Weak pulldowns are disabled on D+ and D;; 1: Weak pulldowns are enabled on D+ and D


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_OBSERVE register.
//
//*****************************************************************************

#define DPPU                          0x00000080      // Provides observability of the D+ Pullup signal output from USB.;; 0: D+ pullup disabled;; 1: D+ pullup enabled.
#define DPPD                          0x00000040      // Provides observability of the D+ Pulldown signal output from USB.;; 0: D+ pulldown disabled;; 1: D+ pulldown enabled.
#define DMPD                          0x00000010      // Provides observability of the D- Pulldown signal output from USB.;; 0: D pulldown disabled;; 1: D pulldown enabled.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_CONTROL register.
//
//*****************************************************************************

#define DPPULLUPNONOTG                0x00000010      // Provides control of the DP Pullup in USB, if USB is configured in non-OTG device mode.;; 0: DP Pullup in non-OTG device mode is not enabled;; 1: DP Pullup in non-OTG device mode is enabled.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_USBTRC0 register.
//
//*****************************************************************************

#define USBRESET                      0x00000080      // Generates a hard reset to USB. After this bit is set and the reset occurs, this bit is automatically cleared.;; 0: Normal USB module operation;; 1: Returns the USB module to its reset state.
#define USBRESMEN                     0x00000020      // Asynchronous Resume Interrupt Enable.;; 0: USB asynchronous wakeup from suspend mode disabled;; 1: USB asynchronous wakeup from suspend mode enabled.
#define USB_CLK_RECOVERY_INT          0x00000004      // Combined USB Clock Recovery interrupt status.;; 0: No interrupt was generated;; 1: Interrupt was generated
#define SYNC_DET                      0x00000002      // Synchronous USB Interrupt Detect.;; 0: Synchronous interrupt has not been detected;; 1: Synchronous interrupt has been detected.
#define USB_RESUME_INT                0x00000001      // USB Asynchronous Interrupt.;; 0: No interrupt was generated;; 1: Interrupt was generated because of the USB asynchronous interrupt.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_USBFRMADJUST register.
//
//*****************************************************************************

#define ADJ                           0x00000080      // Frame Adjustment.;; In Host mode, the frame adjustment is a twos complement number that adjusts the period of each USB frame in 12-MHz clock periods.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_KEEP_ALIVE_CTRL register.
//
//*****************************************************************************

#define WAKE_INT_STS                  0x00000080      // Wakeup Interrupt Status.;; If KEEP_ALIVE mode is enabled and a SETUP token or software assigned token is received, this interrupt is set only when the token is processed and the USB state is IDLE. Reset to 0. Software read only, and write 1 to clear.
#define WAKE_INT_EN                   0x00000010      // Wakeup Interrupt Enable.;; 0: Wakeup interrupt disabled;; 1: Wakeup interrupt enabled.
#define AHB_DLY_EN                    0x00000008      // Must be set to 1 to delay the first USB AHB bus transfer until after the USB has exited KEEP_ALIVE mode.;; 0: Do not delay the USB AHB transfer if the USB AHB transfer occurs while exiting KEEP_ALIVE mode;; 1: Delay the USB AHB transfer until the clock is recovered, if the USB AHB transfer occurs while exiting KEEP_ALIVE mode.
#define STOP_ACK_DLY_EN               0x00000004      // When set to 1, will respond the ipg_stop when usb core state is idle and no AHB transfer; when set to 0, will respond the ipg_stop when no AHB transfer.;; 0: Enter and exit KEEP_ALIVE mode until the USB core is idle and there is no USB AHB transfer;; 1: Enter and exit KEEP_ALIVE mode immediately when there is no USB AHB transfer.
#define OWN_OVERRD_EN                 0x00000002      // When set to 1, during KEEP_ALIVE mode, if received token is not SETUP, the OWN bit of current BD will be forced to 0, so usb core will response with NAK.;; 0: OWN bit of current BD will not be forced to 0;; 1: OWN bit of current BD will be forced to 0.
#define KEEP_ALIVE_EN                 0x00000001      // Global enable for USB_KEEP_ALIVE mode. When assert, usb shall enter USB_KEEP_ALIVE mode after asserting ipg_stop; when de-assert, everything is same as before.;; 0: USB_KEEP_ALIVE mode disabled;; 1: USB_KEEP_ALIVE mode enabled.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_KEEP_ALIVE_WKCTRL register.
//
//*****************************************************************************

#define WAKE_ON_THIS                  0x00000008      // Software configure it to which token can wakeup usb during KEEP_ALIVE mode.;; 0001: Wake up on receiving OUT/SETUP token packet;; 1101: Wake up on receiving SETUP token packet.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_CLK_RECOVER_CTRL register.
//
//*****************************************************************************

#define CLOCK_RECOVER_EN              0x00000080      // Crystal-less USB enable.;; 0: Disable clock recovery block;; 1: Enable clock recovery block.
#define RESET_ROUGH_EN                0x00000040      // Reset/resume to rough phase enable.;; 0: Always works in tracking phase after the first time rough to track transition;; 1: Go back to rough stage whenever bus reset or bus resume occurs.
#define RESTART_IFRTRIM_EN            0x00000020      // Restart from IFR trim value.;; 0: Trim fine adjustment always works based on the previous updated trim fine value;; 1: Trim fine restarts from the IFR trim value whenever bus_reset/bus_resume is detected or module enable is desasserted.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_CLK_RECOVER_IRC_EN register.
//
//*****************************************************************************

#define IRC_EN                        0x00000002      // IRC48M enable.;; 0: Disable the IRC48M module;; 1: Enable the IRC48M module.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_CLK_RECOVER_INT_EN register.
//
//*****************************************************************************

#define OVF_ERROR_EN                  0x00000010      // Determines whether OVF_ERROR condition signal is used in generation of USB_CLK_RECOVERY_INT.;; 0: The interrupt will be masked;; 1: The interrupt will be enabled.


//*****************************************************************************
//
// The following are defines for the bit fields in the USBx_CLK_RECOVER_INT_STATUS register.
//
//*****************************************************************************

#define OVF_ERROR                     0x00000010      // Write operation with value high at 1'b1 on any combination of individual bits will clear those bits.


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_POSITION register.
//
//*****************************************************************************

#define Trace Packet Address Pointer[28:0]0xFFFFFFF80000000      // POINTER
#define WRAP                          0x00000004      // WRAP


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
#define AUTOHALT                      0x00000002      // AUTOHALT
#define AUTOSTOP                      0x00000001      // AUTOSTOP


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_BASE register.
//
//*****************************************************************************

#define BASEADDR                      0x7FFFFFFF80000000      // This value is defined with a hardwired signal and the expression: 0x2000_0000 - (RAM_Size/4). For example, if the total RAM capacity is 16 KB, this field is 0x1FFF_F000.


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_AUTHSTAT register.
//
//*****************************************************************************

#define BIT3-BIT2                     0x00000018      // BIT3-BIT2


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_CTRL register.
//
//*****************************************************************************

#define Number of comparators         0x780000000      // NUMCMP
#define DWT configuration controls    0x18000000      // DWTCFGCTRL


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_COMPn register.
//
//*****************************************************************************

#define Reference value for comparison0x7FFFFFFF80000000      // COMP


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_MASKn register.
//
//*****************************************************************************

#define This field is reserved.;; MASK0x3FFFFFF80000000      // MASK


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_FCT0 register.
//
//*****************************************************************************

#define Comparator match              0x01000000      // MATCHED
#define Data Value Address 0          0x00078000      // DATAVADDR0
#define Data Value Size               0x00001800      // DATAVSIZE
#define Data Value Match              0x00000100      // DATAVMATCH
#define Function                      0x000001F0      // FUNCTION


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_FCT1 register.
//
//*****************************************************************************

#define Comparator match              0x01000000      // MATCHED
#define Function                      0x000001F0      // FUNCTION


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_TBCTRL register.
//
//*****************************************************************************

#define Number of Comparators         0x780000000      // NUMCOMP
#define Action based on Comparator 1 match0x00000002      // ACOMP1
#define Action based on Comparator 0 match0x00000001      // ACOMP0


//*****************************************************************************
//
// The following are defines for the bit fields in the ROM_ENTRYn register.
//
//*****************************************************************************

#define ENTRY                         0x7FFFFFFF80000000      // ENTRY


//*****************************************************************************
//
// The following are defines for the bit fields in the ROM_TABLEMARK register.
//
//*****************************************************************************

#define MARK                          0x7FFFFFFF80000000      // MARK


//*****************************************************************************
//
// The following are defines for the bit fields in the ROM_SYSACCESS register.
//
//*****************************************************************************

#define SYSACCESS                     0x7FFFFFFF80000000      // SYSACCESS
#define -                             0x3FFFFFFF80000000      // -
#define SYSACCESS                     0x00000001      // SYSACCESS


//*****************************************************************************
//
// The following are defines for the bit fields in the ROM_PERIPHIDn register.
//
//*****************************************************************************

#define PERIPHID                      0x7FFFFFFF80000000      // PERIPHID


//*****************************************************************************
//
// The following are defines for the bit fields in the ROM_COMPIDn register.
//
//*****************************************************************************

#define COMPID                        0x7FFFFFFF80000000      // Component ID



#endif // __MCXC142VFM_H__

