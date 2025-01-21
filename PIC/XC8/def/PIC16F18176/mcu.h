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
** OF MERCHANTABILITY, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
** TO THE WARRANTIES FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/

#ifndef __PIC16F18176_H__
#define __PIC16F18176_H__




//*****************************************************************************
//
// 8. Configuration Settings registers
//
//*****************************************************************************

#define CONFIG1                       (*((volatile uint8_t *)0x8007))      // Configuration Word 1
#define CONFIG2                       (*((volatile uint8_t *)0x8008))      // Configuration Word 2
#define CONFIG3                       (*((volatile uint8_t *)0x8009))      // Configuration Word 3


//*****************************************************************************
//
// 10. Power Control registers
//
//*****************************************************************************

#define BORCON                        (*((volatile uint8_t *)0x0191))      // Brown-out Reset Control Register
#define PCON0                         (*((volatile uint8_t *)0x0192))      // Power Control Register 0
#define PCON1                         (*((volatile uint8_t *)0x0193))      // Power Control Register 1


//*****************************************************************************
//
// 11. OSC - Oscillator Module (With Fail-Safe Clock Monitor) registers
//
//*****************************************************************************

#define OSCCON1                       (*((volatile uint8_t *)0x028D))      // Oscillator Control Register 1
#define OSCCON2                       (*((volatile uint8_t *)0x028E))      // Oscillator Control Register 2
#define OSCCON3                       (*((volatile uint8_t *)0x028F))      // Oscillator Control Register 3
#define OSCSTAT                       (*((volatile uint8_t *)0x0290))      // Oscillator Status Register
#define OSCEN                         (*((volatile uint8_t *)0x0291))      // Oscillator Enable Register
#define OSCTUNE                       (*((volatile uint8_t *)0x0292))      // HFINTOSC Frequency Tuning Register
#define OSCFRQ                        (*((volatile uint8_t *)0x0293))      // HFINTOSC Frequency Selection Register
#define ACTCON                        (*((volatile uint8_t *)0x0294))      // Active Clock Tuning Control Register


//*****************************************************************************
//
// 12. INT - Interrupts registers
//
//*****************************************************************************

#define INTCON                        (*((volatile uint8_t *)0x0B))      // Interrupt Control Register
#define PIE0                          (*((volatile uint8_t *)0x0096))      // Peripheral Interrupt Enable Register 0
#define PIE1                          (*((volatile uint8_t *)0x0097))      // Peripheral Interrupt Enable Register 1
#define PIE2                          (*((volatile uint8_t *)0x0098))      // Peripheral Interrupt Enable Register 2
#define PIE3                          (*((volatile uint8_t *)0x0099))      // Peripheral Interrupt Enable Register 3
#define PIE4                          (*((volatile uint8_t *)0x009A))      // Peripheral Interrupt Enable Register 4
#define PIE5                          (*((volatile uint8_t *)0x009B))      // Peripheral Interrupt Enable Register 5
#define PIE6                          (*((volatile uint8_t *)0x009C))      // Peripheral Interrupt Enable Register 6
#define PIR0                          (*((volatile uint8_t *)0x008C))      // Peripheral Interrupt Request Register 0
#define PIR1                          (*((volatile uint8_t *)0x008D))      // Peripheral Interrupt Request Register 1
#define PIR2                          (*((volatile uint8_t *)0x008E))      // Peripheral Interrupt Request Register 2
#define PIR3                          (*((volatile uint8_t *)0x008F))      // Peripheral Interrupt Request Register 3
#define PIR4                          (*((volatile uint8_t *)0x0090))      // Peripheral Interrupt Request Register 4
#define PIR5                          (*((volatile uint8_t *)0x0091))      // Peripheral Interrupt Request Register 5
#define PIR6                          (*((volatile uint8_t *)0x0092))      // Peripheral Interrupt Request Register 6


//*****************************************************************************
//
// 13. Power-Saving Modes registers
//
//*****************************************************************************

#define CPUDOZE                       (*((volatile uint8_t *)0x028C))      // Doze and Idle Register


//*****************************************************************************
//
// 14. WWDT - Windowed Watchdog Timer registers
//
//*****************************************************************************

#define WDTCON0                       (*((volatile uint8_t *)0x018C))      // Watchdog Timer Control Register 0
#define WDTCON1                       (*((volatile uint8_t *)0x018D))      // Watchdog Timer Control Register 1
#define WDTPSL                        (*((volatile uint8_t *)0x018E))      // WWDT Prescaler Select Register (Read-Only)
#define WDTPSH                        (*((volatile uint8_t *)0x018F))      // WWDT Prescaler Select Register (Read-Only)
#define WDTTMR                        (*((volatile uint8_t *)0x0190))      // WDT Timer Register (Read-Only)


//*****************************************************************************
//
// 15. NVM - Nonvolatile Memory Control registers
//
//*****************************************************************************

#define NVMADR                        (*((volatile uint8_t *)0x1C8C))      // Nonvolatile Memory Address Register
#define NVMDAT                        (*((volatile uint8_t *)0x1C8E))      // Nonvolatile Memory Data Register
#define NVMCON1                       (*((volatile uint8_t *)0x1C90))      // Nonvolatile Memory Control 1 Register
#define NVMCON2                       (*((volatile uint8_t *)0x1C91))      // Nonvolatile Memory Control 2 Register


//*****************************************************************************
//
// 16. I/O Ports registers
//
//*****************************************************************************

#define PORTA                         (*((volatile uint8_t *)0x0C))      // PORTx Register
#define PORTB                         (*((volatile uint8_t *)0x0D))      // PORTx Register
#define PORTC                         (*((volatile uint8_t *)0x0E))      // PORTx Register
#define TRISA                         (*((volatile uint8_t *)0x12))      // Tri-State Control Register
#define TRISB                         (*((volatile uint8_t *)0x13))      // Tri-State Control Register
#define TRISC                         (*((volatile uint8_t *)0x14))      // Tri-State Control Register
#define LATA                          (*((volatile uint8_t *)0x18))      // Output Latch Register
#define LATB                          (*((volatile uint8_t *)0x19))      // Output Latch Register
#define LATC                          (*((volatile uint8_t *)0x1A))      // Output Latch Register
#define ANSELA                        (*((volatile uint8_t *)0x1E8B))      // Analog Select Register
#define WPUA                          (*((volatile uint8_t *)0x1E8D))      // Weak Pull-Up Register
#define ODCONA                        (*((volatile uint8_t *)0x1E8E))      // Open-Drain Control Register
#define SLRCONA                       (*((volatile uint8_t *)0x1E8F))      // Slew Rate Control Register
#define INLVLA                        (*((volatile uint8_t *)0x1E90))      // Input Level Control Register
#define ANSELB                        (*((volatile uint8_t *)0x1E96))      // Analog Select Register
#define WPUB                          (*((volatile uint8_t *)0x1E97))      // Weak Pull-Up Register
#define ODCONB                        (*((volatile uint8_t *)0x1E98))      // Open-Drain Control Register
#define SLRCONB                       (*((volatile uint8_t *)0x1E99))      // Slew Rate Control Register
#define INLVLB                        (*((volatile uint8_t *)0x1E9A))      // Input Level Control Register
#define ANSELC                        (*((volatile uint8_t *)0x1EA0))      // Analog Select Register
#define WPUC                          (*((volatile uint8_t *)0x1EA1))      // Weak Pull-Up Register
#define ODCONC                        (*((volatile uint8_t *)0x1EA2))      // Open-Drain Control Register
#define SLRCONC                       (*((volatile uint8_t *)0x1EA3))      // Slew Rate Control Register
#define INLVLC                        (*((volatile uint8_t *)0x1EA4))      // Input Level Control Register
#define RB4I2C                        (*((volatile uint8_t *)0x1EE5))      // I2C Pad Rxy Control Register
#define RB5I2C                        (*((volatile uint8_t *)0x1EE6))      // I2C Pad Rxy Control Register
#define RB6I2C                        (*((volatile uint8_t *)0x1EE7))      // I2C Pad Rxy Control Register
#define RB7I2C                        (*((volatile uint8_t *)0x1EE8))      // I2C Pad Rxy Control Register
#define RC0I2C                        (*((volatile uint8_t *)0x1EE9))      // I2C Pad Rxy Control Register
#define RC1I2C                        (*((volatile uint8_t *)0x1EEA))      // I2C Pad Rxy Control Register
#define RC4I2C                        (*((volatile uint8_t *)0x1EEC))      // I2C Pad Rxy Control Register
#define RC5I2C                        (*((volatile uint8_t *)0x1EED))      // I2C Pad Rxy Control Register


//*****************************************************************************
//
// 17. IOC - Interrupt-on-Change registers
//
//*****************************************************************************

#define IOCAF                         (*((volatile uint8_t *)0x1E93))      // Interrupt-on-Change Flag Register
#define IOCAN                         (*((volatile uint8_t *)0x1E92))      // Interrupt-on-Change Negative Edge Register
#define IOCAP                         (*((volatile uint8_t *)0x1E91))      // Interrupt-on-Change Positive Edge Register
#define IOCBF                         (*((volatile uint8_t *)0x1E9D))      // Interrupt-on-Change Flag Register
#define IOCBN                         (*((volatile uint8_t *)0x1E9C))      // Interrupt-on-Change Negative Edge Register
#define IOCBP                         (*((volatile uint8_t *)0x1E9B))      // Interrupt-on-Change Positive Edge Register
#define IOCCF                         (*((volatile uint8_t *)0x1EA7))      // Interrupt-on-Change Flag Register
#define IOCCN                         (*((volatile uint8_t *)0x1EA6))      // Interrupt-on-Change Negative Edge Register
#define IOCCP                         (*((volatile uint8_t *)0x1EA5))      // Interrupt-on-Change Positive Edge Register


//*****************************************************************************
//
// 18. PPS - Peripheral Pin Select Module registers
//
//*****************************************************************************

#define RA0PPS                        (*((volatile uint8_t *)0x1D8C))      // Pin Rxy Output Source Selection Register
#define RA1PPS                        (*((volatile uint8_t *)0x1D8D))      // Pin Rxy Output Source Selection Register
#define RA2PPS                        (*((volatile uint8_t *)0x1D8E))      // Pin Rxy Output Source Selection Register
#define RA4PPS                        (*((volatile uint8_t *)0x1D90))      // Pin Rxy Output Source Selection Register
#define RA5PPS                        (*((volatile uint8_t *)0x1D91))      // Pin Rxy Output Source Selection Register
#define RB4PPS                        (*((volatile uint8_t *)0x1D98))      // Pin Rxy Output Source Selection Register
#define RB5PPS                        (*((volatile uint8_t *)0x1D99))      // Pin Rxy Output Source Selection Register
#define RB6PPS                        (*((volatile uint8_t *)0x1D9A))      // Pin Rxy Output Source Selection Register
#define RB7PPS                        (*((volatile uint8_t *)0x1D9B))      // Pin Rxy Output Source Selection Register
#define RC0PPS                        (*((volatile uint8_t *)0x1D9C))      // Pin Rxy Output Source Selection Register
#define RC1PPS                        (*((volatile uint8_t *)0x1D9D))      // Pin Rxy Output Source Selection Register
#define RC2PPS                        (*((volatile uint8_t *)0x1D9E))      // Pin Rxy Output Source Selection Register
#define RC3PPS                        (*((volatile uint8_t *)0x1D9F))      // Pin Rxy Output Source Selection Register
#define RC4PPS                        (*((volatile uint8_t *)0x1DA0))      // Pin Rxy Output Source Selection Register
#define RC5PPS                        (*((volatile uint8_t *)0x1DA1))      // Pin Rxy Output Source Selection Register
#define RC6PPS                        (*((volatile uint8_t *)0x1DA2))      // Pin Rxy Output Source Selection Register
#define RC7PPS                        (*((volatile uint8_t *)0x1DA3))      // Pin Rxy Output Source Selection Register
#define PPSLOCK                       (*((volatile uint8_t *)0x1E0C))      // PPS Lock Register
#define INTPPS                        (*((volatile uint8_t *)0x1E0D))      // Peripheral Input Selection Register
#define T0CKIPPS                      (*((volatile uint8_t *)0x1E0E))      // Peripheral Input Selection Register
#define T1CKIPPS                      (*((volatile uint8_t *)0x1E0F))      // Peripheral Input Selection Register
#define T1GPPS                        (*((volatile uint8_t *)0x1E10))      // Peripheral Input Selection Register
#define T3CKIPPS                      (*((volatile uint8_t *)0x1E11))      // Peripheral Input Selection Register
#define T3GPPS                        (*((volatile uint8_t *)0x1E12))      // Peripheral Input Selection Register
#define T2INPPS                       (*((volatile uint8_t *)0x1E19))      // Peripheral Input Selection Register
#define T4INPPS                       (*((volatile uint8_t *)0x1E1A))      // Peripheral Input Selection Register
#define CCP1PPS                       (*((volatile uint8_t *)0x1E1E))      // Peripheral Input Selection Register
#define CCP2PPS                       (*((volatile uint8_t *)0x1E1F))      // Peripheral Input Selection Register
#define PWMIN0PPS                     (*((volatile uint8_t *)0x1E24))      // Peripheral Input Selection Register
#define PWMIN1PPS                     (*((volatile uint8_t *)0x1E25))      // Peripheral Input Selection Register
#define PWM1ERSPPS                    (*((volatile uint8_t *)0x1E26))      // Peripheral Input Selection Register
#define PWM2ERSPPS                    (*((volatile uint8_t *)0x1E27))      // Peripheral Input Selection Register
#define CWG1PPS                       (*((volatile uint8_t *)0x1E39))      // Peripheral Input Selection Register
#define CLCIN0PPS                     (*((volatile uint8_t *)0x1E3D))      // Peripheral Input Selection Register
#define CLCIN1PPS                     (*((volatile uint8_t *)0x1E3E))      // Peripheral Input Selection Register


//*****************************************************************************
//
// 19. CRC - Cyclic Redundancy Check Module with Memory Scanner registers
//
//*****************************************************************************

#define SCANHADR                      (*((volatile uint8_t *)0x1C92))      // Scan High Address Registers
#define SCANLADR                      (*((volatile uint8_t *)0x1C95))      // Scan Low Address Registers
#define SCANCON0                      (*((volatile uint8_t *)0x1C98))      // Scanner Access Control Register 0
#define SCANTRIG                      (*((volatile uint8_t *)0x1C99))      // SCAN Trigger Selection Register
#define CRCDATA                       (*((volatile uint8_t *)0x1C9A))      // CRC Data Registers
#define CRCOUT                        (*((volatile uint8_t *)0x1C9E))      // CRC Output Registers
#define CRCSHIFT                      (*((volatile uint8_t *)0x1C9E))      // CRC Shift Registers
#define CRCXOR                        (*((volatile uint8_t *)0x1C9E))      // CRC XOR Registers
#define CRCCON0                       (*((volatile uint8_t *)0x1CA2))      // CRC Control Register 0
#define CRCCON1                       (*((volatile uint8_t *)0x1CA3))      // CRC Control Register 1
#define CRCCON2                       (*((volatile uint8_t *)0x1CA4))      // CRC Control Register 2


//*****************************************************************************
//
// 20. PMD - Peripheral Module Disable registers
//
//*****************************************************************************

#define PMD0                          (*((volatile uint8_t *)0x010C))      // PMD Control Register 0
#define PMD1                          (*((volatile uint8_t *)0x010D))      // PMD Control Register 1
#define PMD2                          (*((volatile uint8_t *)0x010E))      // PMD Control Register 2
#define PMD3                          (*((volatile uint8_t *)0x010F))      // PMD Control Register 3
#define PMD4                          (*((volatile uint8_t *)0x0110))      // PMD Control Register 4


//*****************************************************************************
//
// 21. CLKREF - Reference Clock Output Module registers
//
//*****************************************************************************

#define CLKRCON                       (*((volatile uint8_t *)0x0296))      // Reference Clock Control Register
#define CLKRCLK                       (*((volatile uint8_t *)0x0297))      // Clock Reference Clock Selection Register


//*****************************************************************************
//
// 22. TMR0 - Timer0 Module registers
//
//*****************************************************************************

#define TMR0L                         (*((volatile uint8_t *)0x019C))      // Timer0 Period/Count Low Register
#define TMR0H                         (*((volatile uint8_t *)0x019D))      // Timer0 Period/Count High Register
#define T0CON0                        (*((volatile uint8_t *)0x019E))      // Timer0 Control Register 0
#define T0CON1                        (*((volatile uint8_t *)0x019F))      // Timer0 Control Register 1


//*****************************************************************************
//
// 23. TMR1 - Timer1 Module with Gate Control registers
//
//*****************************************************************************

#define TMR1                          (*((volatile uint8_t *)0x030C))      // Timer Register
#define T1CON                         (*((volatile uint8_t *)0x030E))      // Timer Control Register
#define T1GCON                        (*((volatile uint8_t *)0x030F))      // Timer Gate Control Register
#define T1GATE                        (*((volatile uint8_t *)0x0310))      // Timer Gate Source Selection Register
#define T1CLK                         (*((volatile uint8_t *)0x0311))      // Timer Clock Source Selection Register


//*****************************************************************************
//
// 24. TMR2 - Timer2 Module registers
//
//*****************************************************************************

#define T2TMR                         (*((volatile uint8_t *)0x038C))      // Timer Counter Register
#define T2PR                          (*((volatile uint8_t *)0x038D))      // Timer Period Register
#define T2CON                         (*((volatile uint8_t *)0x038E))      // Timerx Control Register
#define T2HLT                         (*((volatile uint8_t *)0x038F))      // Timer Hardware Limit Control Register
#define T2CLKCON                      (*((volatile uint8_t *)0x0390))      // Timer Clock Source Selection Register
#define T2RST                         (*((volatile uint8_t *)0x0391))      // Timer External Reset Signal Selection Register
#define T4TMR                         (*((volatile uint8_t *)0x0392))      // Timer Counter Register
#define T4PR                          (*((volatile uint8_t *)0x0393))      // Timer Period Register
#define T4CON                         (*((volatile uint8_t *)0x0394))      // Timerx Control Register
#define T4HLT                         (*((volatile uint8_t *)0x0395))      // Timer Hardware Limit Control Register
#define T4CLKCON                      (*((volatile uint8_t *)0x0396))      // Timer Clock Source Selection Register
#define T4RST                         (*((volatile uint8_t *)0x0397))      // Timer External Reset Signal Selection Register


//*****************************************************************************
//
// 25. NCO - Numerically Controlled Oscillator Module registers
//
//*****************************************************************************

#define NCO1ACC                       (*((volatile uint8_t *)0x058C))      // NCO Accumulator Register
#define NCO1INC                       (*((volatile uint8_t *)0x058F))      // NCO Increment Register
#define NCO1CON                       (*((volatile uint8_t *)0x0592))      // NCO Control Register
#define NCO1CLK                       (*((volatile uint8_t *)0x0593))      // NCO Input Clock Control Register


//*****************************************************************************
//
// 26. CWG - Complementary Waveform Generator Module registers
//
//*****************************************************************************

#define CWG1CLK                       (*((volatile uint8_t *)0x060C))      // CWG Clock Input Selection Register
#define CWG1ISM                       (*((volatile uint8_t *)0x060D))      // CWGx Input Selection Register
#define CWG1DBR                       (*((volatile uint8_t *)0x060E))      // CWG Rising Dead-Band Count Register
#define CWG1DBF                       (*((volatile uint8_t *)0x060F))      // CWG Falling Dead-Band Count Register
#define CWG1CON0                      (*((volatile uint8_t *)0x0610))      // CWG Control Register 0
#define CWG1CON1                      (*((volatile uint8_t *)0x0611))      // CWG Control Register 1
#define CWG1AS0                       (*((volatile uint8_t *)0x0612))      // CWG Auto-Shutdown Control Register 0
#define CWG1AS1                       (*((volatile uint8_t *)0x0613))      // CWG Auto-Shutdown Control Register 1
#define CWG1STR                       (*((volatile uint8_t *)0x0614))      // CWG Steering Control Register


//*****************************************************************************
//
// 27. CCP - Capture/Compare/PWM Module registers
//
//*****************************************************************************

#define CCPR1                         (*((volatile uint8_t *)0x040C))      // Capture/Compare/Pulse-Width Register
#define CCP1CON                       (*((volatile uint8_t *)0x040E))      // CCP Control Register
#define CCP1CAP                       (*((volatile uint8_t *)0x040F))      // Capture Trigger Input Selection Register
#define CCPR2                         (*((volatile uint8_t *)0x0410))      // Capture/Compare/Pulse-Width Register
#define CCP2CON                       (*((volatile uint8_t *)0x0412))      // CCP Control Register
#define CCP2CAP                       (*((volatile uint8_t *)0x0413))      // Capture Trigger Input Selection Register


//*****************************************************************************
//
// 28. Capture, Compare, and PWM Timers Selection registers
//
//*****************************************************************************

#define CCPTMRS0                      (*((volatile uint8_t *)0x041F))      // CCP Timers Selection Register


//*****************************************************************************
//
// 29. PWM - Pulse-Width Modulator with Compare registers
//
//*****************************************************************************

#define PWM1ERS                       (*((volatile uint8_t *)0x048C))      // PWM1 External Reset Source
#define PWM1CLK                       (*((volatile uint8_t *)0x048D))      // PWM1 Clock Source
#define PWM1LDS                       (*((volatile uint8_t *)0x048E))      // PWM1 Auto-load Trigger Source Select Register
#define PWM1PR                        (*((volatile uint8_t *)0x048F))      // PWM1 Period Register
#define PWM1CPRE                      (*((volatile uint8_t *)0x0491))      // PWM1 Clock Prescaler Register
#define PWM1PIPOS                     (*((volatile uint8_t *)0x0492))      // PWM1 Period Interrupt Postscaler Register
#define PWM1GIR                       (*((volatile uint8_t *)0x0493))      // PWM1 Interrupt Register
#define PWM1GIE                       (*((volatile uint8_t *)0x0494))      // PWM1 Interrupt Enable Register
#define PWM1CON                       (*((volatile uint8_t *)0x0495))      // PWM Control Register
#define PWM1S1CFG                     (*((volatile uint8_t *)0x0496))      // PWM Slice “a” Configuration Register
#define PWM1S1P1                      (*((volatile uint8_t *)0x0497))      // PWM Slice “a” Parameter 1 Register
#define PWM1S1P2                      (*((volatile uint8_t *)0x0499))      // PWM Slice “a” Parameter 2 Register
#define PWMLOAD                       (*((volatile uint8_t *)0x049E))      // Mirror copies of all PWMxLD bits
#define PWMEN                         (*((volatile uint8_t *)0x049F))      // Mirror copies of all PWMxEN bits
#define PWM2ERS                       (*((volatile uint8_t *)0x050C))      // PWM2 External Reset Source
#define PWM2CLK                       (*((volatile uint8_t *)0x050D))      // PWM2 Clock Source
#define PWM2LDS                       (*((volatile uint8_t *)0x050E))      // PWM2 Auto-load Trigger Source Select Register
#define PWM2PR                        (*((volatile uint8_t *)0x050F))      // PWM2 Period Register
#define PWM2CPRE                      (*((volatile uint8_t *)0x0511))      // PWM2 Clock Prescaler Register
#define PWM2PIPOS                     (*((volatile uint8_t *)0x0512))      // PWM2 Period Interrupt Postscaler Register
#define PWM2GIR                       (*((volatile uint8_t *)0x0513))      // PWM2 Interrupt Register
#define PWM2GIE                       (*((volatile uint8_t *)0x0514))      // PWM2 Interrupt Enable Register
#define PWM2CON                       (*((volatile uint8_t *)0x0515))      // PWM Control Register
#define PWM2S1CFG                     (*((volatile uint8_t *)0x0516))      // PWM Slice “a” Configuration Register
#define PWM2S1P1                      (*((volatile uint8_t *)0x0517))      // PWM Slice “a” Parameter 1 Register
#define PWM2S1P2                      (*((volatile uint8_t *)0x0519))      // PWM Slice “a” Parameter 2 Register


//*****************************************************************************
//
// 30. CLC - Configurable Logic Cell registers
//
//*****************************************************************************

#define CLCSELECT                     (*((volatile uint8_t *)0x0696))      // CLC Instance Selection Register
#define CLCDATA                       (*((volatile uint8_t *)0x0697))      // CLC Data Output Register


//*****************************************************************************
//
// 32. EUSART - Enhanced Universal Synchronous Asynchronous Receiver Transmitter registers
//
//*****************************************************************************

#define RCREG                         (*((volatile uint8_t *)0x070C))      // Receive data
#define TXREG                         (*((volatile uint8_t *)0x070D))      // Transmit Data
#define SPBRG                         (*((volatile uint8_t *)0x070E))      // Baud Rate Register
#define RCSTA                         (*((volatile uint8_t *)0x0710))      // Receive Status and Control Register
#define TXSTA                         (*((volatile uint8_t *)0x0711))      // Transmit Status and Control Register
#define BAUDCON                       (*((volatile uint8_t *)0x0712))      // Baud Rate Control Register
#define RCREG                         (*((volatile uint8_t *)0x0716))      // Receive data
#define TXREG                         (*((volatile uint8_t *)0x0717))      // Transmit Data
#define SPBRG                         (*((volatile uint8_t *)0x0718))      // Baud Rate Register
#define RCSTA                         (*((volatile uint8_t *)0x071A))      // Receive Status and Control Register
#define TXSTA                         (*((volatile uint8_t *)0x071B))      // Transmit Status and Control Register
#define BAUDCON                       (*((volatile uint8_t *)0x071C))      // Baud Rate Control Register


//*****************************************************************************
//
// 33. ADC - Analog-to-Digital Converter with Computation Module registers
//
//*****************************************************************************

#define ADSTAT                        (*((volatile uint8_t *)0x1D2A))      // ADC Status Register
#define ADCLK                         (*((volatile uint8_t *)0x1D2D))      // ADC Clock divider Register
#define ADREF                         (*((volatile uint8_t *)0x1D2B))      // ADC Reference Selection Register
#define ADPCH                         (*((volatile uint8_t *)0x1D1F))      // ADC Positive Channel Selection Register
#define ADNCH                         (*((volatile uint8_t *)0x1D20))      // ADC Negative Channel Selection Register
#define ADACQ                         (*((volatile uint8_t *)0x1D21))      // ADC Acquisition Time Control Register
#define ADCAP                         (*((volatile uint8_t *)0x1D23))      // ADC Additional Sample Capacitor Selection Register
#define ADPRE                         (*((volatile uint8_t *)0x1D24))      // ADC Precharge Time Control Register
#define ADCON0                        (*((volatile uint8_t *)0x1D26))      // ADC Control Register 0
#define ADCON1                        (*((volatile uint8_t *)0x1D27))      // ADC Control Register 1
#define ADCON2                        (*((volatile uint8_t *)0x1D28))      // ADC Control Register 2
#define ADCON3                        (*((volatile uint8_t *)0x1D29))      // ADC Control Register 3
#define ADACT                         (*((volatile uint8_t *)0x1D2C))      // ADC Auto-Conversion Trigger Source Selection Register
#define ADLTH                         (*((volatile uint8_t *)0x1D0C))      // ADC Lower Threshold Register
#define ADUTH                         (*((volatile uint8_t *)0x1D0E))      // ADC Upper Threshold Register
#define ADERR                         (*((volatile uint8_t *)0x1D10))      // ADC Setpoint Error Register
#define ADSTPT                        (*((volatile uint8_t *)0x1D12))      // ADC Threshold Setpoint Register
#define ADFLTR                        (*((volatile uint8_t *)0x1D14))      // ADC Filter Register
#define ADACC                         (*((volatile uint8_t *)0x1D16))      // ADC Accumulator Register
#define ADCNT                         (*((volatile uint8_t *)0x1D19))      // ADC Repeat Counter Register
#define ADRPT                         (*((volatile uint8_t *)0x1D1A))      // ADC Repeat Setting Register
#define ADPREV                        (*((volatile uint8_t *)0x1D1B))      // ADC Previous Result Register
#define ADRES                         (*((volatile uint8_t *)0x1D1D))      // ADC Result Register


//*****************************************************************************
//
// 34. DAC - Digital-to-Analog Converter Module registers
//
//*****************************************************************************

#define DAC1CON                       (*((volatile uint8_t *)0x088C))      // Digital-to-Analog Converter Control Register
#define DAC1DATL                      (*((volatile uint8_t *)0x088D))      // Digital-to-Analog Converter Data Register
#define DAC2CON                       (*((volatile uint8_t *)0x0890))      // Digital-to-Analog Converter Control Register
#define DAC2DATL                      (*((volatile uint8_t *)0x0891))      // Digital-to-Analog Converter Data Register


//*****************************************************************************
//
// 35. CMP - Comparator Module registers
//
//*****************************************************************************

#define CM1CON0                       (*((volatile uint8_t *)0x080C))      // Comparator Control Register 0
#define CM1CON1                       (*((volatile uint8_t *)0x080D))      // Comparator Control Register 1
#define CM1NCH                        (*((volatile uint8_t *)0x080E))      // Comparator Inverting Channel Select Register
#define CM1PCH                        (*((volatile uint8_t *)0x080F))      // Comparator Noninverting Channel Select Register
#define CM2CON0                       (*((volatile uint8_t *)0x0810))      // Comparator Control Register 0
#define CM2CON1                       (*((volatile uint8_t *)0x0811))      // Comparator Control Register 1
#define CM2NCH                        (*((volatile uint8_t *)0x0812))      // Comparator Inverting Channel Select Register
#define CM2PCH                        (*((volatile uint8_t *)0x0813))      // Comparator Noninverting Channel Select Register
#define CMOUT                         (*((volatile uint8_t *)0x081F))      // Comparator Output Register


//*****************************************************************************
//
// 36. FVR - Fixed Voltage Reference registers
//
//*****************************************************************************

#define FVRCON                        (*((volatile uint8_t *)0x020C))      // FVR Control Register


//*****************************************************************************
//
// 37. Temperature Indicator Module registers
//
//*****************************************************************************

#define FVRCON                        (*((volatile uint8_t *)0x020C))      // FVR Control Register


//*****************************************************************************
//
// 38. ZCD - Zero-Cross Detection Module registers
//
//*****************************************************************************

#define ZCDCON                        (*((volatile uint8_t *)0x021F))      // Zero-Cross Detect Control Register


//*****************************************************************************
//
// 39. Charge Pump registers
//
//*****************************************************************************

#define CPCON                         (*((volatile uint8_t *)0x020D))      // Charge Pump Control Register



//*****************************************************************************
//
// The following are defines for the bit fields in the CONFIG1 register.
//
//*****************************************************************************

#define SBOREN                        0x00000080      // Software Brown-Out Reset Enable
#define BORRDY                        0x00000001      // Brown-Out Reset Circuit Ready Status


//*****************************************************************************
//
// The following are defines for the bit fields in the CONFIG2 register.
//
//*****************************************************************************

#define STKOVF                        0x00000080      // Stack Overflow Flag
#define STKUNF                        0x00000040      // Stack Underflow Flag
#define WDTWV                         0x00000020      // WDT Window Violation
#define RWDT                          0x00000010      // WDT Reset Flag
#define RMCLR                         0x00000008      // MCLR Reset Flag
#define RI                            0x00000004      // RESET Instruction Flag
#define POR                           0x00000002      // Power-on Reset Status
#define BOR                           0x00000001      // Brown-out Reset Status


//*****************************************************************************
//
// The following are defines for the bit fields in the CONFIG3 register.
//
//*****************************************************************************

#define MEMV                          0x00000002      // Memory Violation Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the BORCON register.
//
//*****************************************************************************

#define SBOREN                        0x00000080      // Software Brown-Out Reset Enable
#define BORRDY                        0x00000001      // Brown-Out Reset Circuit Ready Status


//*****************************************************************************
//
// The following are defines for the bit fields in the PCON0 register.
//
//*****************************************************************************

#define STKOVF                        0x00000080      // Stack Overflow Flag
#define STKUNF                        0x00000040      // Stack Underflow Flag
#define WDTWV                         0x00000020      // WDT Window Violation
#define RWDT                          0x00000010      // WDT Reset Flag
#define RMCLR                         0x00000008      // MCLR Reset Flag
#define RI                            0x00000004      // RESET Instruction Flag
#define POR                           0x00000002      // Power-on Reset Status
#define BOR                           0x00000001      // Brown-out Reset Status


//*****************************************************************************
//
// The following are defines for the bit fields in the PCON1 register.
//
//*****************************************************************************

#define MEMV                          0x00000002      // Memory Violation Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the ACTCON register.
//
//*****************************************************************************

#define ACTEN                         0x00000080      // Active Clock Tuning Enable
#define ACTUD                         0x00000040      // Active Clock Tuning Update Disable
#define ACTLOCK                       0x00000008      // Active Clock Tuning Lock Status
#define ACTORS                        0x00000002      // Active Clock Tuning Out-of-Range Status


//*****************************************************************************
//
// The following are defines for the bit fields in the OSCCON1 register.
//
//*****************************************************************************

#define NOSC[2:0]                     0x000001C0      // New Oscillator Source Request
#define NDIV[3:0]                     0x00000078      // New Divider Selection Request


//*****************************************************************************
//
// The following are defines for the bit fields in the OSCCON2 register.
//
//*****************************************************************************

#define COSC[2:0]                     0x000001C0      // Current Oscillator Source Select
#define CDIV[3:0]                     0x00000078      // Current Divider Select


//*****************************************************************************
//
// The following are defines for the bit fields in the OSCCON3 register.
//
//*****************************************************************************

#define CSWHOLD                       0x00000080      // Clock Switch Hold Control
#define SOSCPWR                       0x00000040      // Secondary Oscillator Power Mode Select
#define ORDY                          0x00000010      // Oscillator Ready
#define NOSCR                         0x00000008      // New Oscillator is Ready


//*****************************************************************************
//
// The following are defines for the bit fields in the OSCTUNE register.
//
//*****************************************************************************

#define TUN[5:0]                      0x000007E0      // HFINTOSC Frequency Tuning


//*****************************************************************************
//
// The following are defines for the bit fields in the OSCFRQ register.
//
//*****************************************************************************

#define FRQ[2:0]                      0x0000001C      // HFINTOSC  Frequency Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the OSCSTAT register.
//
//*****************************************************************************

#define EXTOR                         0x00000080      // External Oscillator Ready
#define HFOR                          0x00000040      // HFINTOSC Ready
#define MFOR                          0x00000020      // MFINTOSC Ready
#define LFOR                          0x00000010      // LFINTOSC Ready
#define SOR                           0x00000008      // Secondary Oscillator (SOSC) Ready
#define ADOR                          0x00000004      // ADCRC Oscillator Ready
#define SFOR                          0x00000002      // SFINTOSC Oscillator Ready
#define PLLR                          0x00000001      // PLL is Ready


//*****************************************************************************
//
// The following are defines for the bit fields in the OSCEN register.
//
//*****************************************************************************

#define EXTOEN                        0x00000080      // External Oscillator Enable
#define HFOEN                         0x00000040      // HFINTOSC Enable
#define MFOEN                         0x00000020      // MFINTOSC Enable
#define LFOEN                         0x00000010      // LFINTOSC Enable
#define SOSCEN                        0x00000008      // Secondary Oscillator Enable
#define ADOEN                         0x00000004      // ADCRC Oscillator Enable
#define PLLEN                         0x00000001      // PLL Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the INTCON register.
//
//*****************************************************************************

#define GIE                           0x00000080      // Global Interrupt Enable
#define PEIE                          0x00000040      // Peripheral Interrupt Enable
#define INTEDG                        0x00000001      // External Interrupt Edge Select


//*****************************************************************************
//
// The following are defines for the bit fields in the PIE0 register.
//
//*****************************************************************************

#define TMR0IE                        0x00000020      // Timer0 Interrupt Enable
#define IOCIE                         0x00000010      // Interrupt-on-Change Enable
#define INTE                          0x00000001      // External Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PIE1 register.
//
//*****************************************************************************

#define TMR1GIE                       0x00000080      // TMR1 Gate Interrupt Enable
#define TMR1IE                        0x00000040      // TMR1 Interrupt Enable
#define OSFIE                         0x00000020      // Oscillator Failure Interrupt Enable
#define CSWIE                         0x00000010      // Clock Switch Interrupt Enable
#define ACTIE                         0x00000008      // Active Clock Tuning Interrupt Enable
#define SCANIE                        0x00000004      // Memory Scanner Interrupt Enable
#define CRCIE                         0x00000002      // CRC Interrupt Enable
#define NVMIE                         0x00000001      // NVM Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PIE2 register.
//
//*****************************************************************************

#define CCP2IE                        0x00000040      // CCP2 Interrupt Enable
#define CCP1IE                        0x00000020      // CCP1 Interrupt Enable
#define TMR4IE                        0x00000008      // TMR4 Interrupt Enable
#define TMR2IE                        0x00000004      // TMR2 Interrupt Enable
#define TMR3GIE                       0x00000002      // TMR3 Gate Interrupt Enable
#define TMR3IE                        0x00000001      // TMR3 Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PIE3 register.
//
//*****************************************************************************

#define PWM2IE                        0x00000008      // PWM2 Parameter Interrupt Enable
#define PWM2PIE                       0x00000004      // PWM2 Period Interrupt Enable
#define PWM1IE                        0x00000002      // PWM1 Parameter Interrupt Enable
#define PWM1PIE                       0x00000001      // PWM1 Period Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PIE4 register.
//
//*****************************************************************************

#define RC1IE                         0x00000080      // EUSART1 Receive Interrupt Enable
#define TX1IE                         0x00000040      // EUSART1 Transmit Interrupt Enable
#define CLC4IE                        0x00000020      // CLC4 Interrupt Enable
#define CLC3IE                        0x00000010      // CLC3 Interrupt Enable
#define CLC2IE                        0x00000008      // CLC2 Interrupt Enable
#define CLC1IE                        0x00000004      // CLC1 Interrupt Enable
#define CWG1IE                        0x00000002      // CWG1 Interrupt Enable
#define NCO1IE                        0x00000001      // NCO1 Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PIE5 register.
//
//*****************************************************************************

#define CM2IE                         0x00000080      // Comparator 2 Interrupt Enable
#define CM1IE                         0x00000040      // Comparator 1 Interrupt Enable
#define BCL2IE                        0x00000020      // MSSP2 Bus Collision Interrupt Enable
#define SSP2IE                        0x00000010      // MSSP2 Interrupt Enable
#define BCL1IE                        0x00000008      // MSSP1 Bus Collision Interrupt Enable
#define SSP1IE                        0x00000004      // MSSP1 Interrupt Enable
#define RC2IE                         0x00000002      // EUSART2 Receive Interrupt Enable
#define TX2IE                         0x00000001      // EUSART2 Transmit Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PIE6 register.
//
//*****************************************************************************

#define ZCDIE                         0x00000004      // ZCD Interrupt Enable
#define ADTIE                         0x00000002      // ADC Threshold Interrupt Enable
#define ADIE                          0x00000001      // ADC Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PIR0 register.
//
//*****************************************************************************

#define TMR0IF                        0x00000020      // Timer0 Interrupt Flag
#define IOCIF                         0x00000010      // Interrupt-on-Change Flag
#define INTF                          0x00000001      // External Interrupt Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the PIR1 register.
//
//*****************************************************************************

#define TMR1GIF                       0x00000080      // TMR1 Gate Interrupt Flag
#define TMR1IF                        0x00000040      // TMR1 Interrupt Flag
#define OSFIF                         0x00000020      // Oscillator Failure Interrupt Flag
#define CSWIF                         0x00000010      // Clock Switch Interrupt Flag
#define ACTIF                         0x00000008      // Active Clock Tuning Interrupt Flag
#define SCANIF                        0x00000004      // Memory Scanner Interrupt Flag
#define CRCIF                         0x00000002      // CRC Interrupt Flag
#define NVMIF                         0x00000001      // Nonvolatile Memory (NVM) Interrupt Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the PIR2 register.
//
//*****************************************************************************

#define CCP2IF                        0x00000040      // CCP2 Interrupt Flag
#define CCP1IF                        0x00000020      // CCP1 Interrupt Flag
#define TMR4IF                        0x00000008      // TMR4 Interrupt Flag
#define TMR2IF                        0x00000004      // TMR2 Interrupt Flag
#define TMR3GIF                       0x00000002      // TMR3 Gate Interrupt Flag
#define TMR3IF                        0x00000001      // TMR3 Interrupt Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the PIR3 register.
//
//*****************************************************************************

#define PWM2IF                        0x00000008      // PWM2 Parameter Interrupt Flag
#define PWM2PIF                       0x00000004      // PWM2 Period Interrupt Flag
#define PWM1IF                        0x00000002      // PWM1 Parameter Interrupt Flag
#define PWM1PIF                       0x00000001      // PWM1 Period Interrupt Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the PIR4 register.
//
//*****************************************************************************

#define RC1IF                         0x00000080      // EUSART1 Receive Interrupt Flag
#define TX1IF                         0x00000040      // EUSART1 Transmit Interrupt Flag
#define CLC4IF                        0x00000020      // CLC4 Interrupt Flag
#define CLC3IF                        0x00000010      // CLC3 Interrupt Flag
#define CLC2IF                        0x00000008      // CLC2 Interrupt Flag
#define CLC1IF                        0x00000004      // CLC1 Interrupt Flag
#define CWG1IF                        0x00000002      // CWG1 Interrupt Flag
#define NCO1IF                        0x00000001      // NCO1 Interrupt Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the PIR5 register.
//
//*****************************************************************************

#define CM2IF                         0x00000080      // Comparator 2 Interrupt Flag
#define CM1IF                         0x00000040      // Comparator 1 Interrupt Flag
#define BCL2IF                        0x00000020      // MSSP2 Bus Collision Interrupt Flag
#define SSP2IF                        0x00000010      // MSSP2 Interrupt Flag
#define BCL1IF                        0x00000008      // MSSP1 Bus Collision Interrupt Flag
#define SSP1IF                        0x00000004      // MSSP1 Interrupt Flag
#define RC2IF                         0x00000002      // EUSART2 Receive Interrupt Flag
#define TX2IF                         0x00000001      // EUSART2 Transmit Interrupt Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the PIR6 register.
//
//*****************************************************************************

#define ZCDIF                         0x00000004      // Zero-Cross Detect (ZCD) Interrupt Flag
#define ADTIF                         0x00000002      // ADC Threshold Interrupt Flag
#define ADIF                          0x00000001      // ADC Interrupt Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the CPUDOZE register.
//
//*****************************************************************************

#define IDLEN                         0x00000080      // Idle Enable
#define DOZEN                         0x00000040      // Doze Enable
#define ROI                           0x00000020      // Recover-on-Interrupt
#define DOE                           0x00000010      // Doze-on-Exit
#define DOZE[2:0]                     0x00000004      // Ratio of CPU Instruction Cycles to Peripheral Instruction Cycles


//*****************************************************************************
//
// The following are defines for the bit fields in the WDTCON0 register.
//
//*****************************************************************************

#define PS[4:0]                       0x00000020      // Watchdog Timer Prescaler Select
#define SEN                           0x00000001      // Software Enable/Disable for Watchdog Timer


//*****************************************************************************
//
// The following are defines for the bit fields in the WDTCON1 register.
//
//*****************************************************************************

#define CS[2:0]                       0x00000040      // Watchdog Timer Clock Select
#define WINDOW[2:0]                   0x00000004      // Watchdog Timer Window Select


//*****************************************************************************
//
// The following are defines for the bit fields in the WDTPSH register.
//
//*****************************************************************************

#define PSCNTH[7:0]                   0x00000080      // Prescaler Select High Byte


//*****************************************************************************
//
// The following are defines for the bit fields in the WDTPSL register.
//
//*****************************************************************************

#define PSCNTL[7:0]                   0x00000080      // Prescaler Select Low Byte


//*****************************************************************************
//
// The following are defines for the bit fields in the WDTTMR register.
//
//*****************************************************************************

#define TMR[4:0]                      0x00000080      // Watchdog Window Value
#define STATE                         0x00000004      // WDT Armed Status
#define PSCNT[17:16]                  0x00000002      // Prescaler Select Upper Byte


//*****************************************************************************
//
// The following are defines for the bit fields in the NVMADR register.
//
//*****************************************************************************

#define NVMADR[14:0]                  0x00004000      // NVM Address Bits


//*****************************************************************************
//
// The following are defines for the bit fields in the NVMDAT register.
//
//*****************************************************************************

#define NVMDAT[13:0]                  0x00002000      // NVM Data bits


//*****************************************************************************
//
// The following are defines for the bit fields in the NVMCON1 register.
//
//*****************************************************************************

#define NVMREGS                       0x00000040      // NVM Region Selection
#define LWLO                          0x00000020      // Load Write Latches Only
#define FREE                          0x00000010      // Program Flash Memory Erase Enable
#define WRERR                         0x00000008      // Write-Reset Error Flag
#define WREN                          0x00000004      // Program/Erase Enable
#define WR                            0x00000002      // Write Control
#define RD                            0x00000001      // Read Control


//*****************************************************************************
//
// The following are defines for the bit fields in the NVMCON2 register.
//
//*****************************************************************************

#define NVMCON2[7:0]                  0x00000080      // Flash Memory Unlock Pattern bits


//*****************************************************************************
//
// The following are defines for the bit fields in the PORTx register.
//
//*****************************************************************************

#define Rxn                           0x00007F80      // Port I/O Value


//*****************************************************************************
//
// The following are defines for the bit fields in the LATx register.
//
//*****************************************************************************

#define LATxn                         0x00007F80      // Output Latch Value


//*****************************************************************************
//
// The following are defines for the bit fields in the TRISx register.
//
//*****************************************************************************

#define TRISxn                        0x00007F80      // Port I/O Tri-state Control


//*****************************************************************************
//
// The following are defines for the bit fields in the ANSELx register.
//
//*****************************************************************************

#define ANSELxn                       0x00007F80      // Analog Select on RX Pin


//*****************************************************************************
//
// The following are defines for the bit fields in the WPUx register.
//
//*****************************************************************************

#define WPUxn                         0x00007F80      // Weak Pull-up PORTx Control


//*****************************************************************************
//
// The following are defines for the bit fields in the INLVLx register.
//
//*****************************************************************************

#define INLVLxn                       0x00007F80      // Input Level Select on RX Pin


//*****************************************************************************
//
// The following are defines for the bit fields in the SLRCONx register.
//
//*****************************************************************************

#define SLRxn                         0x00007F80      // Slew Rate Control on RX Pin


//*****************************************************************************
//
// The following are defines for the bit fields in the ODCONx register.
//
//*****************************************************************************

#define ODCxn                         0x00007F80      // Open-Drain Configuration on Rx Pin


//*****************************************************************************
//
// The following are defines for the bit fields in the RxyI2C register.
//
//*****************************************************************************

#define SLEW                          0x00000040      // I2C Specific Slew Rate Limiting Control
#define PU[1:0]                       0x00000060      // I2C Pull-Up Selection
#define TH[1:0]                       0x00000006      // I2C Input Threshold Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the IOCxF register.
//
//*****************************************************************************

#define IOCxFn                        0x00007F80      // Interrupt-on-Change Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the IOCxN register.
//
//*****************************************************************************

#define IOCxNn                        0x00007F80      // Interrupt-on-Change Negative Edge Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the IOCxP register.
//
//*****************************************************************************

#define IOCxPn                        0x00007F80      // Interrupt-on-Change Positive Edge Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the xxxPPS register.
//
//*****************************************************************************

#define PORT[2:0]                     0x00000020      // Peripheral Input PORT Selection
#define PIN[2:0]                      0x00000004      // Peripheral Input PORT Pin Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the RxyPPS register.
//
//*****************************************************************************

#define RxyPPS[5:0]                   0x00000020      // Pin Rxy Output Source Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the PPSLOCK register.
//
//*****************************************************************************

#define PPSLOCKED                     0x00000001      // PPS Locked


//*****************************************************************************
//
// The following are defines for the bit fields in the CRCCON0 register.
//
//*****************************************************************************

#define EN                            0x00000080      // CRC Enable
#define GO                            0x00000040      // CRC Start
#define BUSY                          0x00000020      // CRC Busy
#define ACCM                          0x00000010      // Accumulator Mode
#define SETUP[1:0]                    0x00000018      // Register Overlay Setup
#define SHIFTM                        0x00000002      // Shift Mode
#define FULL                          0x00000001      // Data Path Full Indicator


//*****************************************************************************
//
// The following are defines for the bit fields in the CRCCON1 register.
//
//*****************************************************************************

#define PLEN[4:0]                     0x000001F0      // Polynomial Length


//*****************************************************************************
//
// The following are defines for the bit fields in the CRCCON2 register.
//
//*****************************************************************************

#define DLEN[4:0]                     0x000001F0      // Data Length


//*****************************************************************************
//
// The following are defines for the bit fields in the CRCDATA register.
//
//*****************************************************************************

#define CRCDATAT[7:0]                 0x7F80000000      // CRC Data Top Byte
#define CRCDATAU[7:0]                 0x7F800000      // CRC Data Upper Byte
#define CRCDATAH[7:0]                 0x007F8000      // CRC Data High Byte
#define CRCDATAL[7:0]                 0x00007F80      // CRC Data Low Byte


//*****************************************************************************
//
// The following are defines for the bit fields in the CRCOUT register.
//
//*****************************************************************************

#define CRCOUTT[7:0]                  0x7F80000000      // CRC Output Register Top Byte
#define CRCOUTU[7:0]                  0x7F800000      // CRC Output Register Upper Byte
#define CRCOUTH[7:0]                  0x007F8000      // CRC Output Register High Byte
#define CRCOUTL[7:0]                  0x00007F80      // CRC Output Register Low Byte


//*****************************************************************************
//
// The following are defines for the bit fields in the CRCSHIFT register.
//
//*****************************************************************************

#define CRCSHIFTT[7:0]                0x7F80000000      // CRC Shift Register Top Byte
#define CRCSHIFTU[7:0]                0x7F800000      // CRC Shift Register Upper Byte
#define CRCSHIFTH[7:0]                0x007F8000      // CRC Shift Register High Byte
#define CRCSHIFTL[7:0]                0x00007F80      // CRC Shift Register Low Byte


//*****************************************************************************
//
// The following are defines for the bit fields in the CRCXOR register.
//
//*****************************************************************************

#define CRCXORT[7:0]                  0x7F80000000      // XOR of Polynomial Term XN Enable Top Byte
#define CRCXORU[7:0]                  0x7F800000      // XOR of Polynomial Term XN Enable Upper Byte
#define CRCXORH[7:0]                  0x007F8000      // XOR of Polynomial Term XN Enable High Byte
#define CRCXORL[7:0]                  0x00007F80      // XOR of Polynomial Term XN Enable Low Byte


//*****************************************************************************
//
// The following are defines for the bit fields in the SCANCON0 register.
//
//*****************************************************************************

#define EN                            0x00000080      // Scanner Enable
#define SGO                           0x00000040      // Scanner GO
#define BUSY                          0x00000020      // Scanner Busy Indicator
#define DABORT                        0x00000010      // Scanner Abort Signal
#define INTM                          0x00000008      // Scanner Interrupt Management Mode Select
#define MD[1:0]                       0x00000006      // Scanner Memory Access Mode Select


//*****************************************************************************
//
// The following are defines for the bit fields in the SCANLADR register.
//
//*****************************************************************************

#define SCANLADRH[7:0]                0x007F8000      // Scan Start/Current Address high byte
#define SCANLADRL[7:0]                0x00007F80      // Scan Start/Current Address low byte


//*****************************************************************************
//
// The following are defines for the bit fields in the SCANHADR register.
//
//*****************************************************************************

#define SCANHADRH[7:0]                0x007F8000      // Scan End Address
#define SCANHADRL[7:0]                0x00007F80      // Scan End Address


//*****************************************************************************
//
// The following are defines for the bit fields in the SCANTRIG register.
//
//*****************************************************************************

#define TSEL[3:0]                     0x00000078      // Scanner Data Trigger Input Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the PMD0 register.
//
//*****************************************************************************

#define TMR0MD                        0x00000080      // Disable TMR0
#define CLKRMD                        0x00000040      // Disable Clock Reference
#define IOCMD                         0x00000020      // Disable Interrupt-on-Change
#define ACTMD                         0x00000010      // Disable Active Clock Tuning
#define SYSCMD                        0x00000008      // Disable Peripheral System Clock Network(1)
#define SCANMD                        0x00000004      // Disable NVM Memory Scanner
#define CRCMD                         0x00000002      // Disable CRC Module
#define NVMMD                         0x00000001      // Disable NVM access


//*****************************************************************************
//
// The following are defines for the bit fields in the PMD1 register.
//
//*****************************************************************************

#define PWM1MD                        0x00000080      // Disable PWM1 Module
#define CCP2MD                        0x00000040      // Disable CCP2 Module
#define CCP1MD                        0x00000020      // Disable CCP1 Module
#define TMR4MD                        0x00000010      // Disable Timer TMR4
#define TMR2MD                        0x00000008      // Disable Timer TMR2
#define TMR3MD                        0x00000004      // Disable Timer TMR3
#define TMR1MD                        0x00000002      // Disable Timer TMR1


//*****************************************************************************
//
// The following are defines for the bit fields in the PMD2 register.
//
//*****************************************************************************

#define CLC3MD                        0x00000080      // Disable CLC3
#define CLC2MD                        0x00000040      // Disable CLC2
#define CLC1MD                        0x00000020      // Disable CLC1
#define CWG1MD                        0x00000010      // Disable CWG1
#define NCO1MD                        0x00000008      // Disable NCO1
#define PWM2MD                        0x00000001      // Disable PWM2


//*****************************************************************************
//
// The following are defines for the bit fields in the PMD3 register.
//
//*****************************************************************************

#define CM2MD                         0x00000080      // Disable Comparator 2
#define CM1MD                         0x00000040      // Disable Comparator 1
#define FVRMD                         0x00000020      // Disable Fixed Voltage Reference Module
#define MSSP2MD                       0x00000010      // Disable MSSP2 Module
#define MSSP1MD                       0x00000008      // Disable MSSP1 Module
#define UART2MD                       0x00000004      // Disable UART2 Module
#define UART1MD                       0x00000002      // Disable UART1 Module
#define CLC4MD                        0x00000001      // Disable CLC4


//*****************************************************************************
//
// The following are defines for the bit fields in the PMD4 register.
//
//*****************************************************************************

#define ZCDMD                         0x00000010      // Disable Zero Cross Detect(1)
#define DAC2MD                        0x00000004      // Disable Digital-to-Analog Converter 2
#define DAC1MD                        0x00000002      // Disable Digital-to-Analog Converter 1
#define ADCMD                         0x00000001      // Disable Analog-to-Digital Converter


//*****************************************************************************
//
// The following are defines for the bit fields in the CLKRCON register.
//
//*****************************************************************************

#define EN                            0x00000080      // Reference Clock Module Enable
#define DC[1:0]                       0x00000030      // Reference Clock Duty Cycle
#define DIV[2:0]                      0x0000001C      // Reference Clock Divider


//*****************************************************************************
//
// The following are defines for the bit fields in the CLKRCLK register.
//
//*****************************************************************************

#define CLK[3:0]                      0x00000078      // CLKR Clock Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the T0CON0 register.
//
//*****************************************************************************

#define EN                            0x00000080      // TMR0 Enable
#define OUT                           0x00000020      // TMR0 Output
#define MD16                          0x00000010      // 16-Bit Timer Operation Select
#define OUTPS[3:0]                    0x00000008      // TMR0 Output Postscaler (Divider) Select


//*****************************************************************************
//
// The following are defines for the bit fields in the T0CON1 register.
//
//*****************************************************************************

#define CS[2:0]                       0x00000080      // Timer0 Clock Source Select
#define ASYNC                         0x00000010      // TMR0 Input Asynchronization Enable
#define CKPS[3:0]                     0x00000008      // Prescaler Rate Select


//*****************************************************************************
//
// The following are defines for the bit fields in the TMR0H register.
//
//*****************************************************************************

#define TMR0H[7:0]                    0x00000080      // TMR0 Most Significant Counter


//*****************************************************************************
//
// The following are defines for the bit fields in the TMR0L register.
//
//*****************************************************************************

#define TMR0L[7:0]                    0x00000080      // TMR0 Least Significant Counter


//*****************************************************************************
//
// The following are defines for the bit fields in the TxCON register.
//
//*****************************************************************************

#define CKPS[1:0]                     0x00000060      // Timer Input Clock Prescaler Select
#define SYNC                          0x00000004      // Timer External Clock Input Synchronization Control
#define RD16                          0x00000002      // 16-Bit Read/Write Mode Enable
#define ON                            0x00000001      // Timer On


//*****************************************************************************
//
// The following are defines for the bit fields in the TxGCON register.
//
//*****************************************************************************

#define GE                            0x00000080      // Timer Gate Enable
#define GPOL                          0x00000040      // Timer Gate Polarity
#define GTM                           0x00000020      // Timer Gate Toggle Mode
#define GSPM                          0x00000010      // Timer Gate Single Pulse Mode
#define GGO/DONE                      0x00000008      // Timer Gate Single Pulse Acquisition Status
#define GVAL                          0x00000004      // Timer Gate Current State


//*****************************************************************************
//
// The following are defines for the bit fields in the TxCLK register.
//
//*****************************************************************************

#define CS[4:0]                       0x000001F0      // Timer Clock Source Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the TxGATE register.
//
//*****************************************************************************

#define GSS[4:0]                      0x000001F0      // Timer Gate Source Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the TMRx register.
//
//*****************************************************************************

#define TMRx[15:0]                    0x7FFF8000      // Timer Register Value


//*****************************************************************************
//
// The following are defines for the bit fields in the TxTMR register.
//
//*****************************************************************************

#define TxTMR[7:0]                    0x00000080      // Timerx Counter


//*****************************************************************************
//
// The following are defines for the bit fields in the TxPR register.
//
//*****************************************************************************

#define TxPR[7:0]                     0x00000080      // Timer Period Register


//*****************************************************************************
//
// The following are defines for the bit fields in the TxCON register.
//
//*****************************************************************************

#define ON                            0x00000080      // Timer On
#define CKPS[2:0]                     0x00000040      // Timer Clock Prescale Select
#define OUTPS[3:0]                    0x00000008      // Timer Output Postscaler Select


//*****************************************************************************
//
// The following are defines for the bit fields in the TxHLT register.
//
//*****************************************************************************

#define PSYNC                         0x00000080      // Timer Prescaler Synchronization Enable
#define CPOL                          0x00000040      // Timer Clock Polarity Selection
#define CSYNC                         0x00000020      // Timer Clock Synchronization Enable
#define MODE[4:0]                     0x00000010      // Timer Control Mode Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the TxCLKCON register.
//
//*****************************************************************************

#define CS[3:0]                       0x00000008      // Timer Clock Source Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the TxRST register.
//
//*****************************************************************************

#define RSEL[4:0]                     0x00000010      // External Reset Source Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the NCOxCON register.
//
//*****************************************************************************

#define EN                            0x00000080      // NCO Enable
#define OUT                           0x00000020      // NCO Output
#define POL                           0x00000010      // NCO Polarity
#define PFM                           0x00000001      // NCO Pulse Frequency Mode


//*****************************************************************************
//
// The following are defines for the bit fields in the NCOxCLK register.
//
//*****************************************************************************

#define PWS[2:0]                      0x00000380      // NCO Output Pulse-Width Select
#define CKS[3:0]                      0x00000078      // NCO Clock Source Select


//*****************************************************************************
//
// The following are defines for the bit fields in the NCOxACC register.
//
//*****************************************************************************

#define ACC[19:0]                     0x7FFFF80000      // Accumulated sum of NCO additions


//*****************************************************************************
//
// The following are defines for the bit fields in the NCOxINC register.
//
//*****************************************************************************

#define INC[19:0]                     0x7FFFF80000      // Value by which the NCOxACC is increased by each NCO clock


//*****************************************************************************
//
// The following are defines for the bit fields in the CWGxCON0 register.
//
//*****************************************************************************

#define EN                            0x00000080      // CWG Enable
#define LD                            0x00000040      // CWG1 Load Buffers
#define MODE[2:0]                     0x0000001C      // CWG Mode


//*****************************************************************************
//
// The following are defines for the bit fields in the CWGxCON1 register.
//
//*****************************************************************************

#define IN                            0x00000020      // CWG Input Value
#define POLy                          0x00000078      // CWG Output ‘y’ Polarity


//*****************************************************************************
//
// The following are defines for the bit fields in the CWGxCLK register.
//
//*****************************************************************************

#define CS                            0x00000001      // CWG Clock Source Selection Select


//*****************************************************************************
//
// The following are defines for the bit fields in the CWGxISM register.
//
//*****************************************************************************

#define ISM[4:0]                      0x000001F0      // CWG Data Input Source Select


//*****************************************************************************
//
// The following are defines for the bit fields in the CWGxSTR register.
//
//*****************************************************************************

#define OVRy                          0x00000780      // Steering Data OVR'y'
#define STRy                          0x00000078      // STR'y' Steering Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the CWGxAS0 register.
//
//*****************************************************************************

#define SHUTDOWN                      0x00000080      // Auto-Shutdown Event Status
#define REN                           0x00000040      // Auto-Restart Enable
#define LSBD[1:0]                     0x00000060      // CWGxB and CWGxD Auto-Shutdown State Control
#define LSAC[1:0]                     0x00000018      // CWGxA and CWGxC Auto-Shutdown State Control


//*****************************************************************************
//
// The following are defines for the bit fields in the CWGxAS1 register.
//
//*****************************************************************************

#define ASyE                          0x00007F80      // CWG Auto-Shutdown Source Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the CWGxDBR register.
//
//*****************************************************************************

#define DBR[5:0]                      0x000007E0      // CWG Rising Edge-Triggered Dead-Band Count


//*****************************************************************************
//
// The following are defines for the bit fields in the CWGxDBF register.
//
//*****************************************************************************

#define DBF[5:0]                      0x000007E0      // CWG Falling Edge-Triggered Dead-Band Count


//*****************************************************************************
//
// The following are defines for the bit fields in the CCPxCON register.
//
//*****************************************************************************

#define EN                            0x00000080      // CCP Module Enable
#define OUT                           0x00000020      // CCP Output Data (read-only)
#define FMT                           0x00000010      // CCPxRH:L Value Alignment (PWM mode)
#define MODE[3:0]                     0x00000078      // CCP Mode Select


//*****************************************************************************
//
// The following are defines for the bit fields in the CCPxCAP register.
//
//*****************************************************************************

#define CTS[3:0]                      0x00000078      // Capture Trigger Input Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the CCPTMRS0 register.
//
//*****************************************************************************

#define C1TSEL                        0x00000004      // CCP1 Timer Selection
#define C2TSEL                        0x00000001      // CCP2 Timer Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the 29.9.1. PWMxERS register.
//
//*****************************************************************************

#define ERS[3:0]                      0x00000008      // External Reset Source Select


//*****************************************************************************
//
// The following are defines for the bit fields in the 29.9.2. PWMxCLK register.
//
//*****************************************************************************

#define CLK[3:0]                      0x00000008      // PWM Clock Source Select


//*****************************************************************************
//
// The following are defines for the bit fields in the 29.9.3. PWMxLDS register.
//
//*****************************************************************************

#define LDS[2:0]                      0x00000004      // Auto-load Trigger Source Select


//*****************************************************************************
//
// The following are defines for the bit fields in the 29.9.4. PWMxPR register.
//
//*****************************************************************************

#define PR[15:0]                      0x00008000      // PWM Period


//*****************************************************************************
//
// The following are defines for the bit fields in the 29.9.5. PWMxCPRE register.
//
//*****************************************************************************

#define CPRE[7:0]                     0x00000080      // PWM Clock Prescale Value


//*****************************************************************************
//
// The following are defines for the bit fields in the 29.9.6. PWMxPIPOS register.
//
//*****************************************************************************

#define PIPOS[7:0]                    0x00000080      // Period Interrupt Postscale Value


//*****************************************************************************
//
// The following are defines for the bit fields in the 29.9.7. PWMxGIR register.
//
//*****************************************************************************

#define S1P2                          0x00000002      // Slice “a” Parameter 2 Interrupt Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the 29.9.8. PWMxGIE register.
//
//*****************************************************************************

#define S1P2                          0x00000002      // Slice “a” Parameter 2 Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the 29.9.9. PWMxCON register.
//
//*****************************************************************************

#define EN                            0x00000080      // PWM Module Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the 29.9.10. PWMxSaCFG register.
//
//*****************************************************************************

#define POL2                          0x00000080      // PWM Slice “a” Parameter 2 Output Polarity


//*****************************************************************************
//
// The following are defines for the bit fields in the 29.9.11. PWMxSaP1 register.
//
//*****************************************************************************

#define P1[15:0]                      0x00008000      // Parameter 1 Value


//*****************************************************************************
//
// The following are defines for the bit fields in the 29.9.12. PWMxSaP2 register.
//
//*****************************************************************************

#define P2[15:0]                      0x00008000      // Parameter 2 Value


//*****************************************************************************
//
// The following are defines for the bit fields in the 29.9.13. PWMLOAD register.
//
//*****************************************************************************

#define MPWM2LD                       0x00000002      // Mirror copy of PWMxLD bit


//*****************************************************************************
//
// The following are defines for the bit fields in the 29.9.14. PWMEN register.
//
//*****************************************************************************

#define MPWM2EN                       0x00000002      // Mirror copy of PWMxEN bit


//*****************************************************************************
//
// The following are defines for the bit fields in the CLCSELECT register.
//
//*****************************************************************************

#define SLCT[3:0]                     0x00000008      // CLC instance selection


//*****************************************************************************
//
// The following are defines for the bit fields in the CLCnCON register.
//
//*****************************************************************************

#define EN                            0x00000080      // CLC Enable
#define OUT                           0x00000020      // Logic cell output data, after LCPOL. Sampled from CLCxOUT.
#define INTP                          0x00000010      // Configurable Logic Cell Positive Edge Going Interrupt Enable
#define INTN                          0x00000008      // Configurable Logic Cell Negative Edge Going Interrupt Enable
#define MODE[2:0]                     0x00000004      // Configurable Logic Cell Functional Mode Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the CLCnPOL register.
//
//*****************************************************************************

#define POL                           0x00000080      // CLCxOUT Output Polarity Control
#define G4POL, G3POL, G2POL, G1POL    0x00000001      // Gate Output Polarity Control


//*****************************************************************************
//
// The following are defines for the bit fields in the CLCnSEL0 register.
//
//*****************************************************************************

#define D1S[6:0]                      0x00000040      // CLCn Data1 Input Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the CLCnSEL1 register.
//
//*****************************************************************************

#define D2S[6:0]                      0x00000040      // CLCn Data2 Input Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the CLCnSEL2 register.
//
//*****************************************************************************

#define D3S[6:0]                      0x00000040      // CLCn Data3 Input Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the CLCnSEL3 register.
//
//*****************************************************************************

#define D4S[6:0]                      0x00000040      // CLCn Data4 Input Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the CLCnGLS0 register.
//
//*****************************************************************************

#define G1DyT                         0x00000002      // dyT: Gate1 Data ‘y’ True (noninverted)
#define G1DyN                         0x00000001      // dyN: Gate1 Data ‘y’ Negated (inverted)


//*****************************************************************************
//
// The following are defines for the bit fields in the CLCnGLS1 register.
//
//*****************************************************************************

#define G2DyT                         0x00000002      // dyT: Gate2 Data ‘y’ True (noninverted)
#define G2DyN                         0x00000001      // dyN: Gate2 Data ‘y’ Negated (inverted)


//*****************************************************************************
//
// The following are defines for the bit fields in the CLCnGLS2 register.
//
//*****************************************************************************

#define G3DyT                         0x00000002      // dyT: Gate3 Data ‘y’ True (noninverted)
#define G3DyN                         0x00000001      // dyN: Gate3 Data ‘y’ Negated (inverted)


//*****************************************************************************
//
// The following are defines for the bit fields in the CLCnGLS3 register.
//
//*****************************************************************************

#define G4DyT                         0x00000002      // dyT: Gate4 Data ‘y’ True (noninverted)
#define G4DyN                         0x00000001      // dyN: Gate4 Data ‘y’ Negated (inverted)


//*****************************************************************************
//
// The following are defines for the bit fields in the CLCDATA register.
//
//*****************************************************************************

#define CLCxOUT                       0x00000001      // Mirror copy of CLCx_out


//*****************************************************************************
//
// The following are defines for the bit fields in the TXxSTA register.
//
//*****************************************************************************

#define CSRC                          0x00000080      // Clock Source Select
#define TX9                           0x00000040      // 9-Bit Transmit Enable
#define TXEN                          0x00000020      // Transmit Enable
#define SYNC                          0x00000010      // EUSART Mode Select
#define SENDB                         0x00000008      // Send Break Character
#define BRGH                          0x00000004      // High Baud Rate Select
#define TRMT                          0x00000002      // Transmit Shift Register (TSR) Status
#define TX9D                          0x00000001      // Ninth Bit of Transmit Data


//*****************************************************************************
//
// The following are defines for the bit fields in the RCxSTA register.
//
//*****************************************************************************

#define SPEN                          0x00000080      // Serial Port Enable
#define RX9                           0x00000040      // 9-Bit Receive Enable
#define SREN                          0x00000020      // Single Receive Enable
#define CREN                          0x00000010      // Continuous Receive Enable
#define ADDEN                         0x00000008      // Address Detect Enable
#define FERR                          0x00000004      // Framing Error
#define OERR                          0x00000002      // Overrun Error
#define RX9D                          0x00000001      // Ninth bit of Received Data


//*****************************************************************************
//
// The following are defines for the bit fields in the BAUDxCON register.
//
//*****************************************************************************

#define ABDOVF                        0x00000080      // Auto-Baud Detect Overflow
#define RCIDL                         0x00000040      // Receive Idle Flag
#define SCKP                          0x00000010      // Clock/Transmit Polarity Select
#define BRG16                         0x00000008      // 16-bit Baud Rate Generator Select
#define WUE                           0x00000002      // Wake-Up Enable
#define ABDEN                         0x00000001      // Auto-Baud Detect Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the RCxREG register.
//
//*****************************************************************************

#define RCREG[7:0]                    0x00007F80      // Receive data


//*****************************************************************************
//
// The following are defines for the bit fields in the TXxREG register.
//
//*****************************************************************************

#define TXREG[7:0]                    0x00007F80      // Transmit Data


//*****************************************************************************
//
// The following are defines for the bit fields in the SPxBRG register.
//
//*****************************************************************************

#define SPBRG[15:0]                   0x7FFF8000      // Baud Rate Register ::


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCON0 register.
//
//*****************************************************************************

#define ON                            0x00000080      // ADC Enable
#define CONT                          0x00000040      // ADC Continuous Operation Enable
#define CS                            0x00000010      // ADC Clock Selection
#define FM[1:0]                       0x00000018      // ADC Results Format/Alignment Selection
#define IC                            0x00000002      // ADC Input Configuration
#define GO                            0x00000001      // ADC Conversion Status


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCON1 register.
//
//*****************************************************************************

#define PPOL                          0x00000080      // Precharge Polarity
#define IPEN                          0x00000040      // A/D Inverted Precharge Enable
#define GPOL                          0x00000020      // Guard Ring Polarity Selection
#define PCSC                          0x00000002      // Precharge Sample Capacitor Only
#define DSEN                          0x00000001      // Double-Sample Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCON2 register.
//
//*****************************************************************************

#define PSIS                          0x00000080      // ADC Previous Sample Input Select
#define CRS[2:0]                      0x000001C0      // ADC Accumulated Calculation Right Shift Select
#define ACLR                          0x00000008      // A/D Accumulator Clear Command
#define MD[2:0]                       0x0000001C      // ADC Operating Mode Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCON3 register.
//
//*****************************************************************************

#define CALC[2:0]                     0x000001C0      // ADC Error Calculation Mode Select
#define SOI                           0x00000008      // ADC Stop-on-Interrupt
#define TMD[2:0]                      0x0000001C      // Threshold Interrupt Mode Select


//*****************************************************************************
//
// The following are defines for the bit fields in the ADSTAT register.
//
//*****************************************************************************

#define AOV                           0x00000080      // ADC Accumulator Overflow
#define UTHR                          0x00000040      // ADC Module Greater-than Upper Threshold Flag
#define LTHR                          0x00000020      // ADC Module Less-than Lower Threshold Flag
#define MATH                          0x00000010      // ADC Module Computation Status
#define STAT[2:0]                     0x0000001C      // ADC Module Cycle Multi-Stage Status


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCLK register.
//
//*****************************************************************************

#define CS[5:0]                       0x000007E0      // ADC Clock divider Select


//*****************************************************************************
//
// The following are defines for the bit fields in the ADREF register.
//
//*****************************************************************************

#define PREF[1:0]                     0x00000006      // ADC Positive Voltage Reference Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the ADPCH register.
//
//*****************************************************************************

#define PCH[5:0]                      0x000007E0      // ADC Positive Input Channel Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the ADNCH register.
//
//*****************************************************************************

#define NCH[5:0]                      0x000007E0      // ADC Negative Input Channel Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the ADPRE register.
//
//*****************************************************************************

#define PRE[12:0]                     0x01FFF000      // Precharge Time Select


//*****************************************************************************
//
// The following are defines for the bit fields in the ADACQ register.
//
//*****************************************************************************

#define ACQ[12:0]                     0x01FFF000      // Acquisition (charge share time) Select


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCAP register.
//
//*****************************************************************************

#define CAP[4:0]                      0x000001F0      // ADC Additional Sample Capacitor Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the ADRPT register.
//
//*****************************************************************************

#define RPT[7:0]                      0x00007F80      // ADC Repeat Threshold


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCNT register.
//
//*****************************************************************************

#define CNT[7:0]                      0x00007F80      // ADC Repeat Count


//*****************************************************************************
//
// The following are defines for the bit fields in the ADFLTR register.
//
//*****************************************************************************

#define FLTR[15:0]                    0x7FFF8000      // ADC Filter Output - Signed two’s complement


//*****************************************************************************
//
// The following are defines for the bit fields in the ADRES register.
//
//*****************************************************************************

#define RES[15:0]                     0x7FFF8000      // ADC Sample Result ::
#define RES                           0x00008000      // ADC Sample Result


//*****************************************************************************
//
// The following are defines for the bit fields in the ADPREV register.
//
//*****************************************************************************

#define PREV[15:0]                    0x7FFF8000      // Previous ADC Result
#define PREV                          0x00008000      // Previous ADC Result


//*****************************************************************************
//
// The following are defines for the bit fields in the ADACC register.
//
//*****************************************************************************

#define ACC[17:0]                     0x7FFFE0000      // ADC Accumulator - Signed two’s complement ::
#define ACC                           0x00020000      // ADC Accumulator - Signed two’s complement


//*****************************************************************************
//
// The following are defines for the bit fields in the ADSTPT register.
//
//*****************************************************************************

#define STPT[15:0]                    0x7FFF8000      // ADC Threshold Setpoint - Signed two’s complement ::
#define STPT                          0x00008000      // ADC Threshold Setpoint - Signed two’s complement


//*****************************************************************************
//
// The following are defines for the bit fields in the ADERR register.
//
//*****************************************************************************

#define ERR[15:0]                     0x7FFF8000      // ADC Setpoint Error - Signed two’s complement ::
#define ERR                           0x00008000      // ADC Setpoint Error - Signed two’s complement


//*****************************************************************************
//
// The following are defines for the bit fields in the ADLTH register.
//
//*****************************************************************************

#define LTH[15:0]                     0x7FFF8000      // ADC Lower Threshold - Signed two’s complement ::
#define LTH                           0x00008000      // ADC Lower Threshold - Signed two’s complement


//*****************************************************************************
//
// The following are defines for the bit fields in the ADUTH register.
//
//*****************************************************************************

#define UTH[15:0]                     0x7FFF8000      // ADC Upper Threshold - Signed two’s complement ::
#define UTH                           0x00008000      // ADC Upper Threshold - Signed two’s complement


//*****************************************************************************
//
// The following are defines for the bit fields in the ADACT register.
//
//*****************************************************************************

#define ACT[4:0]                      0x000001F0      // Auto-Conversion Trigger Select
#define ACT                           0x00000010      // Auto-Conversion Trigger Select


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCGxA register.
//
//*****************************************************************************

#define CGA4, CGA5                    0x00000010      // Channel Group Selection Enable on RA Pins
#define CGA0, CGA1, CGA2              0x00000001      // Channel Group Selection Enable on RA Pins


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCGxB register.
//
//*****************************************************************************

#define CGB4, CGB5, CGB6, CGB7        0x00000010      // Channel Group Selection Enable on RB Pins


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCGxC register.
//
//*****************************************************************************

#define CGC3, CGC4, CGC5, CGC6, CGC7  0x00000008      // Channel Group Selection Enable on RC Pins
#define CGC0, CGC1, CGC2              0x00000001      // Channel Group Selection Enable on RC Pins ::


//*****************************************************************************
//
// The following are defines for the bit fields in the DACxCON register.
//
//*****************************************************************************

#define EN                            0x00000080      // DAC Enable
#define REFRNG                        0x00000040      // Buffer Reference Range Selection
#define OE                            0x00000060      // DAC Output Enable
#define PSS                           0x00000018      // DAC Positive Reference Selection
#define NSS                           0x00000001      // DAC Negative Reference Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the DACxDATL register.
//
//*****************************************************************************

#define DACxR                         0x00007F80      // Data Input Bits for DAC Value
#define DACxR                         0x00007F80      // Data Input Bits for DAC Value ::


//*****************************************************************************
//
// The following are defines for the bit fields in the CMxCON0 register.
//
//*****************************************************************************

#define EN                            0x00000080      // Comparator Enable
#define OUT                           0x00000040      // Comparator Output
#define POL                           0x00000010      // Comparator Output Polarity Select
#define HYS                           0x00000002      // Comparator Hysteresis Enable
#define SYNC                          0x00000001      // Comparator Output Synchronous Mode


//*****************************************************************************
//
// The following are defines for the bit fields in the CMxCON1 register.
//
//*****************************************************************************

#define INTP                          0x00000002      // Comparator Interrupt on Positive-Going Edge Enable
#define INTN                          0x00000001      // Comparator Interrupt on Negative-Going Edge Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the CMxNCH register.
//
//*****************************************************************************

#define NCH[2:0]                      0x0000001C      // Comparator Inverting Input Channel Select


//*****************************************************************************
//
// The following are defines for the bit fields in the CMxPCH register.
//
//*****************************************************************************

#define PCH[2:0]                      0x0000001C      // Comparator Noninverting Input Channel Select


//*****************************************************************************
//
// The following are defines for the bit fields in the CMOUT register.
//
//*****************************************************************************

#define CxOUT                         0x00000006      // Mirror copy of the CMxCON0.OUT


//*****************************************************************************
//
// The following are defines for the bit fields in the FVRCON register.
//
//*****************************************************************************

#define EN                            0x00000080      // Fixed Voltage Reference Enable
#define RDY                           0x00000040      // Fixed Voltage Reference Ready Flag
#define TSEN                          0x00000020      // Temperature Indicator Enable
#define TSRNG                         0x00000010      // Temperature Indicator Range Selection
#define CDAFVR[1:0]                   0x00000018      // FVR Buffer 2 Gain Selection
#define ADFVR[1:0]                    0x00000006      // FVR Buffer 1 Gain Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the FVRCON register.
//
//*****************************************************************************

#define EN                            0x00000080      // Fixed Voltage Reference Enable
#define RDY                           0x00000040      // Fixed Voltage Reference Ready Flag
#define TSEN                          0x00000020      // Temperature Indicator Enable
#define TSRNG                         0x00000010      // Temperature Indicator Range Selection
#define CDAFVR[1:0]                   0x00000018      // FVR Buffer 2 Gain Selection
#define ADFVR[1:0]                    0x00000006      // FVR Buffer 1 Gain Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the ZCDCON register.
//
//*****************************************************************************

#define SEN                           0x00000080      // Zero-Cross Detect Software Enable
#define OUT                           0x00000020      // Zero-Cross Detect Data Output
#define POL                           0x00000010      // Zero-Cross Detect Polarity
#define INTP                          0x00000002      // Zero-Cross Detect Positive-Going Edge Interrupt Enable
#define INTN                          0x00000001      // Zero-Cross Detect Negative-Going Edge Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the CPCON register.
//
//*****************************************************************************

#define CPON[1:0]                     0x00000180      // Charge Pump Enable
#define CPOS                          0x00000020      // Charge Pump Oscillator Selection
#define CPREQ                         0x00000004      // Charge Pump Request Status
#define CPT                           0x00000002      // Charge Pump Threshold
#define CPRDY                         0x00000001      // Charge Pump Ready Status



#endif // __PIC16F18176_H__

