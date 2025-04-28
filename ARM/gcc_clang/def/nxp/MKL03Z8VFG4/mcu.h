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

#ifndef __MKL03Z8VFG4_H__
#define __MKL03Z8VFG4_H__



//*****************************************************************************
//
// Interrupt assignments
//
//*****************************************************************************

#define NUMBER_OF_INT_VECTORS                   33               // Number of interrupts in the Vector table
#define NotAvail_IRQn                           -15              // Not available device specific interrupt
#define NonMaskableInterrupt_IRQn               -14              // Non-maskable interrupt (NMI)
#define Command_Complete_And_Read_Collision_IRQn 5                // Command complete and read collision
#define PMC_IRQn                                6                // Low-voltage detect, low-voltage warning
#define LLWU_IRQn                               7                // Low Leakage Wakeup
#define I2C0_IRQn                               8                // Status and Timeout and wakeup flags
#define SPI0_IRQn                               10               // Single interrupt vector for all sources
#define Status_And_Error_IRQn                   12               // Status and error
#define ADC0_IRQn                               15               // Conversion complete
#define CMP0_IRQn                               16               // Rising or falling edge of comparator output
#define Overflow_Or_Channel_Interrupt_IRQn      17               // Overflow or channel interrupt
#define Overflow_Or_Channel_Interrupt_IRQn      18               // Overflow or channel interrupt
#define Alarm_Interrupt_IRQn                    20               // Alarm interrupt
#define Seconds_Interrupt_IRQn                  21               // Seconds interrupt
#define LPTMR0_IRQn                             28               // LP Timer compare match
#define PORTA_IRQn                              30               // Pin detect (Port A)
#define PORTB_IRQn                              31               // Pin detect (Port B)



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
// Miscellaneous Control Module (MCM) registers
//
//*****************************************************************************

#define MCM_PLASC                     (*((volatile uint32_t *)0xF0003008))      // Crossbar Switch (AXBS) Slave Configuration
#define MCM_PLAMC                     (*((volatile uint32_t *)0xF000300A))      // Crossbar Switch (AXBS) Master Configuration
#define MCM_PLACR                     (*((volatile uint32_t *)0xF000300C))      // Platform Control Register
#define MCM_CPO                       (*((volatile uint32_t *)0xF0003040))      // Compute Operation Control Register


//*****************************************************************************
//
// Reset Control Module (RCM) registers
//
//*****************************************************************************

#define RCM_SRS0                      (*((volatile uint32_t *)0x4007F000))      // System Reset Status Register 0 (RCM_SRS0)
#define RCM_SRS1                      (*((volatile uint32_t *)0x4007F001))      // System Reset Status Register 1 (RCM_SRS1)
#define RCM_RPFC                      (*((volatile uint32_t *)0x4007F004))      // Reset Pin Filter Control register (RCM_RPFC)
#define RCM_RPFW                      (*((volatile uint32_t *)0x4007F005))      // Reset Pin Filter Width register (RCM_RPFW)
#define RCM_FM                        (*((volatile uint32_t *)0x4007F006))      // Force Mode Register (RCM_FM)
#define RCM_MR                        (*((volatile uint32_t *)0x4007F007))      // Mode Register (RCM_MR)
#define RCM_SSRS0                     (*((volatile uint32_t *)0x4007F008))      // Sticky System Reset Status Register 0 (RCM_SSRS0)
#define RCM_SSRS1                     (*((volatile uint32_t *)0x4007F009))      // Sticky System Reset Status Register 1 (RCM_SSRS1)


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
// Multipurpose Clock Generator Lite (MCG_Lite) registers
//
//*****************************************************************************

#define MCG_C1                        (*((volatile uint32_t *)0x40064000))      // MCG Control Register 1 (MCG_C1)
#define MCG_C2                        (*((volatile uint32_t *)0x40064001))      // MCG Control Register 2 (MCG_C2)
#define MCG_S                         (*((volatile uint32_t *)0x40064006))      // MCG Status Register (MCG_S)
#define MCG_SC                        (*((volatile uint32_t *)0x40064008))      // MCG Status and Control Register (MCG_SC)
#define MCG_MC                        (*((volatile uint32_t *)0x40064018))      // MCG Miscellaneous Control Register (MCG_MC)


//*****************************************************************************
//
// Oscillator (OSC) registers
//
//*****************************************************************************

#define OSC_CR                        (*((volatile uint32_t *)0x40065000))      // OSC Control Register


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
#define ADC0_CLPD                     (*((volatile uint32_t *)0x4003B034))      // ADC Plus-Side General Calibration Value Register (ADC0_CLPD)
#define ADC0_CLPS                     (*((volatile uint32_t *)0x4003B038))      // ADC Plus-Side General Calibration Value Register (ADC0_CLPS)
#define ADC0_CLP4                     (*((volatile uint32_t *)0x4003B03C))      // ADC Plus-Side General Calibration Value Register (ADC0_CLP4)
#define ADC0_CLP3                     (*((volatile uint32_t *)0x4003B040))      // ADC Plus-Side General Calibration Value Register (ADC0_CLP3)
#define ADC0_CLP2                     (*((volatile uint32_t *)0x4003B044))      // ADC Plus-Side General Calibration Value Register (ADC0_CLP2)
#define ADC0_CLP1                     (*((volatile uint32_t *)0x4003B048))      // ADC Plus-Side General Calibration Value Register (ADC0_CLP1)
#define ADC0_CLP0                     (*((volatile uint32_t *)0x4003B04C))      // ADC Plus-Side General Calibration Value Register (ADC0_CLP0)


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
// Voltage Reference (VREF) registers
//
//*****************************************************************************

#define VREF_TRM                      (*((volatile uint32_t *)0x40074000))      // VREF Trim Register (VREF_TRM)
#define VREF_SC                       (*((volatile uint32_t *)0x40074001))      // VREF Status and Control Register (VREF_SC)


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
#define TPM0_STATUS                   (*((volatile uint32_t *)0x40038050))      // Capture and Compare Status (TPM0_STATUS)
#define TPM0_CONF                     (*((volatile uint32_t *)0x40038084))      // Configuration (TPM0_CONF)
#define TPM1_SC                       (*((volatile uint32_t *)0x40039000))      // Status and Control (TPM1_SC)
#define TPM1_CNT                      (*((volatile uint32_t *)0x40039004))      // Counter (TPM1_CNT)
#define TPM1_MOD                      (*((volatile uint32_t *)0x40039008))      // Modulo (TPM1_MOD)
#define TPM1_C0SC                     (*((volatile uint32_t *)0x4003900C))      // Channel (n) Status and Control (TPM1_C0SC)
#define TPM1_C0V                      (*((volatile uint32_t *)0x40039010))      // Channel (n) Value (TPM1_C0V)
#define TPM1_C1SC                     (*((volatile uint32_t *)0x40039014))      // Channel (n) Status and Control (TPM1_C1SC)
#define TPM1_C1V                      (*((volatile uint32_t *)0x40039018))      // Channel (n) Value (TPM1_C1V)
#define TPM1_STATUS                   (*((volatile uint32_t *)0x40039050))      // Capture and Compare Status (TPM1_STATUS)
#define TPM1_CONF                     (*((volatile uint32_t *)0x40039084))      // Configuration (TPM1_CONF)


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
// Serial Peripheral Interface (SPI) registers
//
//*****************************************************************************

#define SPI0_S                        (*((volatile uint32_t *)0x0))      // SPI Status Register (SPI0_S)
#define SPI0_BR                       (*((volatile uint32_t *)0x1))      // SPI Baud Rate Register (SPI0_BR)
#define SPI0_C2                       (*((volatile uint32_t *)0x2))      // SPI Control Register 2 (SPI0_C2)
#define SPI0_C1                       (*((volatile uint32_t *)0x3))      // SPI Control Register 1 (SPI0_C1)
#define SPI0_M                        (*((volatile uint32_t *)0x4))      // SPI Match Register (SPI0_M)
#define SPI0_D                        (*((volatile uint32_t *)0x6))      // SPI Data Register (SPI0_D)


//*****************************************************************************
//
// Inter-Integrated Circuit (I2C) registers
//
//*****************************************************************************

#define I2C0_A1                       (*((volatile uint32_t *)0x40066000))      // I2C Address Register 1 (I2C0_A1)
#define I2C0_F                        (*((volatile uint32_t *)0x40066001))      // I2C Frequency Divider register (I2C0_F)
#define I2C0_C1                       (*((volatile uint32_t *)0x40066002))      // I2C Control Register 1 (I2C0_C1)
#define I2C0_S                        (*((volatile uint32_t *)0x40066003))      // I2C Status register (I2C0_S)
#define I2C0_D                        (*((volatile uint32_t *)0x40066004))      // I2C Data I/O register (I2C0_D)
#define I2C0_C2                       (*((volatile uint32_t *)0x40066005))      // I2C Control Register 2 (I2C0_C2)
#define I2C0_FLT                      (*((volatile uint32_t *)0x40066006))      // I2C Programmable Input Glitch Filter Register (I2C0_FLT)
#define I2C0_RA                       (*((volatile uint32_t *)0x40066007))      // I2C Range Address register (I2C0_RA)
#define I2C0_SMB                      (*((volatile uint32_t *)0x40066008))      // I2C SMBus Control and Status register (I2C0_SMB)
#define I2C0_A2                       (*((volatile uint32_t *)0x40066009))      // I2C Address Register 2 (I2C0_A2)
#define I2C0_SLTH                     (*((volatile uint32_t *)0x4006600A))      // I2C SCL Low Timeout Register High (I2C0_SLTH)
#define I2C0_SLTL                     (*((volatile uint32_t *)0x4006600B))      // I2C SCL Low Timeout Register Low (I2C0_SLTL)
#define I2C0_S2                       (*((volatile uint32_t *)0x4006600C))      // I2C Status register 2 (I2C0_S2)


//*****************************************************************************
//
// Low Power Universal Asynchronous Receiver/Transmitter (LPUART) registers
//
//*****************************************************************************

#define LPUART0_BAUD                  (*((volatile uint32_t *)0x40054000))      // LPUART Baud Rate Register
#define LPUART0_STAT                  (*((volatile uint32_t *)0x40054004))      // LPUART Status Register
#define LPUART0_CTRL                  (*((volatile uint32_t *)0x40054008))      // LPUART Control Register
#define LPUART0_DATA                  (*((volatile uint32_t *)0x4005400C))      // LPUART Data Register
#define LPUART0_MATCH                 (*((volatile uint32_t *)0x40054010))      // LPUART Match Address Register



//*****************************************************************************
//
// The following are defines for the bit fields in the PORTx_PCRn register.
//
//*****************************************************************************

#define ISF                           0x01000000      // Interrupt Status Flag
#define IRQC                          0x00780000      // Interrupt Configuration
#define MUX                           0x00001C00      // Pin Mux Control
#define DSE                           0x00000080      // Drive Strength Enable
#define PFE                           0x00000040      // Passive Filter Enable
#define SRE                           0x00000020      // Slew Rate Enable
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

#define LPUART0SRC                    0x18000000      // LPUART0 Clock Source Select
#define TPMSRC                        0x06000000      // TPM Clock Source Select
#define CLKOUTSEL                     0x00000380      // CLKOUT select
#define RTCCLKOUTSEL                  0x00000010      // RTC   Clock Out Select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT4 register.
//
//*****************************************************************************

#define TPM1CLKSEL                    0x02000000      // TPM1 External Clock Pin Select
#define TPM0CLKSEL                    0x01000000      // TPM0 External Clock Pin Select
#define TPM1CH0SRC                    0x00040000      // TPM1 Channel 0 Input Capture Source Select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT5 register.
//
//*****************************************************************************

#define LPUART0ODE                    0x00010000      // LPUART0 Open Drain Enable
#define LPUART0RXSRC                  0x00000004      // LPUART0 Receive Data Source Select
#define LPUART0TXSRC                  0x00000001      // LPUART0 transmit data source select


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
#define PINID                         0x000001C0      // Pincount Identification


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC4 register.
//
//*****************************************************************************

#define SPI0                          0x00400000      // SPI0 Clock Gate Control
#define VREF                          0x00100000      // VREF Clock Gate Control
#define CMP0                          0x00080000      // Comparator Clock Gate Control
#define I2C0                          0x00000040      // I2C0 Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC5 register.
//
//*****************************************************************************

#define LPUART0                       0x00100000      // LPUART0 Clock Gate Control
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
#define TPM1                          0x02000000      // TPM1 Clock Gate Control
#define TPM0                          0x01000000      // TPM0 Clock Gate Control
#define FTF                           0x00000001      // Flash Memory Clock Gate Control


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
// The following are defines for the bit fields in the SIM_UIDL register.
//
//*****************************************************************************

#define UID                           0x7FFFFFFF80000000      // Unique Identification


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

#define PMSTAT                        0x00007F80      // Power Mode Status


//*****************************************************************************
//
// The following are defines for the bit fields in the PMC_LVDSC1 register.
//
//*****************************************************************************

#define LVDF                          0x00000080      // Low-Voltage Detect Flag
#define LVDACK                        0x00000040      // Low-Voltage Detect Acknowledge
#define LVDIE                         0x00000020      // Low-Voltage Detect Interrupt Enable
#define LVDRE                         0x00000010      // Low-Voltage Detect Reset Enable
#define LVDV                          0x00000001      // Low-Voltage Detect Voltage Select


//*****************************************************************************
//
// The following are defines for the bit fields in the PMC_LVDSC2 register.
//
//*****************************************************************************

#define LVWF                          0x00000080      // Low-Voltage Warning Flag
#define LVWACK                        0x00000040      // Low-Voltage Warning Acknowledge
#define LVWIE                         0x00000020      // Low-Voltage Warning Interrupt Enable
#define LVWV                          0x00000001      // Low-Voltage Warning Voltage Select


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
// The following are defines for the bit fields in the MTB_POSITION register.
//
//*****************************************************************************

#define Trace Packet Address Pointer[28:0]0xFFFFFFF80000000      // Trace Packet Address Pointer[28:0]


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_MASTER register.
//
//*****************************************************************************

#define Main Trace Enable             0x80000000      // Main Trace Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_FLOW register.
//
//*****************************************************************************

#define WATERMARK[28:0]               0xFFFFFFF80000000      // WATERMARK[28:0]


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_BASE register.
//
//*****************************************************************************

#define BASEADDR                      0x7FFFFFFF80000000      // BASEADDR


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_MODECTRL register.
//
//*****************************************************************************

#define MODECTRL                      0x7FFFFFFF80000000      // MODECTRL


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_TAGSET register.
//
//*****************************************************************************

#define TAGSET                        0x7FFFFFFF80000000      // TAGSET


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_TAGCLEAR register.
//
//*****************************************************************************

#define TAGCLEAR                      0x7FFFFFFF80000000      // TAGCLEAR


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_LOCKACCESS register.
//
//*****************************************************************************

#define LOCKACCESS                    0x7FFFFFFF80000000      // LOCKACCESS


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_LOCKSTAT register.
//
//*****************************************************************************

#define LOCKSTAT                      0x7FFFFFFF80000000      // LOCKSTAT


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_AUTHSTAT register.
//
//*****************************************************************************

#define BIT3-BIT2                     0x00000018      // BIT3-BIT2


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_DEVICEARCH register.
//
//*****************************************************************************

#define DEVICEARCH                    0x7FFFFFFF80000000      // DEVICEARCH


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_DEVICECFG register.
//
//*****************************************************************************

#define DEVICECFG                     0x7FFFFFFF80000000      // DEVICECFG


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_DEVICETYPID register.
//
//*****************************************************************************

#define DEVICETYPID                   0x7FFFFFFF80000000      // DEVICETYPID


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_PERIPHIDn register.
//
//*****************************************************************************

#define PERIPHID                      0x7FFFFFFF80000000      // Peripheral ID


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_COMPIDn register.
//
//*****************************************************************************

#define COMPID                        0x7FFFFFFF80000000      // Component ID


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

#define MASK                          0x000001F0      // MASK


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_FCT0 register.
//
//*****************************************************************************

#define MATCHED                       0x01000000      // Comparator match
#define DATAVADDR0                    0x00780000      // Data Value Address 0
#define DATAVSIZE                     0x00078000      // Data Value Size
#define DATAVMATCH                    0x00000100      // Data Value Match
#define FUNCTION                      0x00000078      // Function


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_FCT1 register.
//
//*****************************************************************************

#define MATCHED                       0x01000000      // Comparator match
#define FUNCTION                      0x00000078      // Function


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_TBCTRL register.
//
//*****************************************************************************

#define NUMCOMP                       0x780000000      // Number of Comparators
#define ACOMP1                        0x00000002      // Action based on Comparator 1 match
#define ACOMP0                        0x00000001      // Action based on Comparator 0 match


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_DEVICECFG register.
//
//*****************************************************************************

#define DEVICECFG                     0x7FFFFFFF80000000      // DEVICECFG


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_DEVICETYPID register.
//
//*****************************************************************************

#define DEVICETYPID                   0x7FFFFFFF80000000      // DEVICETYPID


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_PERIPHIDn register.
//
//*****************************************************************************

#define PERIPHID                      0x7FFFFFFF80000000      // PERIPHID


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_COMPIDn register.
//
//*****************************************************************************

#define COMPID                        0x7FFFFFFF80000000      // Component ID


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

#define SYSACCESS                     0x00000001      // SYSACCESS


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C1 register.
//
//*****************************************************************************

#define CLKS                          0x00000180      // Clock Source Select
#define IRCLKEN                       0x00000002      // Internal Reference Clock Enable
#define IREFSTEN                      0x00000001      // Internal Reference Stop Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C2 register.
//
//*****************************************************************************

#define EREFS0                        0x00000004      // External Clock Source Select
#define IRCS                          0x00000001      // Low-frequency Internal Reference Clock Select


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_S register.
//
//*****************************************************************************

#define CLKST                         0x00000018      // Clock Mode Status
#define OSCINIT0                      0x00000002      // OSC Initialization Status


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_SC register.
//
//*****************************************************************************

#define FCRDIV                        0x00000038      // Low-frequency Internal Reference Clock Divider


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_MC register.
//
//*****************************************************************************

#define HIRCEN                        0x00000080      // High-frequency IRC Enable
#define LIRC_DIV2                     0x0000001C      // Second Low-frequency Internal Reference Clock Divider


//*****************************************************************************
//
// The following are defines for the bit fields in the OSC_CR register.
//
//*****************************************************************************

#define ERCLKEN                       0x00000080      // Enable External Reference Clock
#define 0                             0x00000040      // -
#define EREFSTEN                      0x00000020      // Enable External Reference Stop
#define 0                             0x00000010      // -
#define SC2P                          0x00000008      // Select Clock 2 divider to PLL/FLL clock
#define SC4P                          0x00000004      // Select Clock 4 divider to PLL/FLL clock
#define SC8P                          0x00000002      // Select Clock 8 divider to PLL/FLL clock
#define SC16P                         0x00000001      // Select Clock 16 divider to PLL/FLL clock


//*****************************************************************************
//
// The following are defines for the bit fields in the VREF_TRM register.
//
//*****************************************************************************

#define CHOPEN                        0x00000040      // Chop oscillator enable
#define TRIM                          0x000001F0      // Trim bits


//*****************************************************************************
//
// The following are defines for the bit fields in the VREF_SC register.
//
//*****************************************************************************

#define VREFEN                        0x00000080      // Internal Voltage Reference enable
#define REGEN                         0x00000040      // Regulator enable
#define ICOMPEN                       0x00000020      // Second order curvature compensation enable
#define 0                             0x00000030      // 0: ....;; 1: ....
#define VREFST                        0x00000004      // VREF status
#define MODE_LV                       0x00000002      // Buffer mode select


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

#define Reserved                      0x7FFF80000000      // This field is reserved.;; 15-0


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


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_CR register.
//
//*****************************************************************************

#define SC2P                          0x00002000      // Oscillator 2pF Load Configure


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_SR register.
//
//*****************************************************************************

#define TCE                           0x00000010      // Time Counter Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_LR register.
//
//*****************************************************************************

#define LRL                           0x00000080      // Lock Register Lock


//*****************************************************************************
//
// The following are defines for the bit fields in the RTC_IER register.
//
//*****************************************************************************

#define WPON                          0x00000080      // Wakeup Pin On



#endif // __MKL03Z8VFG4_H__

