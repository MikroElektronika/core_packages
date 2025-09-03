/*
 * Header file for PIC32CX0525SG12084
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/* File generated from device description file (ATDF) version 2020-03-24T11:15:30Z */
#ifndef _PIC32CX0525SG12084_H_
#define _PIC32CX0525SG12084_H_

/* Header version uses Semantic Versioning 2.0.0 (https://semver.org/) */
#define HEADER_FORMAT_VERSION "2.1.1"

#define HEADER_FORMAT_VERSION_MAJOR (2)
#define HEADER_FORMAT_VERSION_MINOR (1)
#define HEADER_FORMAT_VERSION_PATCH (1)

/* PIC32CX0525SG12084 definitions
  This file defines all structures and symbols for PIC32CX0525SG12084:
    - registers and bitfields
    - peripheral base address
    - peripheral ID
    - PIO definitions
*/

#ifdef __cplusplus
 extern "C" {
#endif

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#  include <stdint.h>
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !defined(SKIP_INTEGER_LITERALS)
#  if defined(_UINT8_) || defined(_UINT16_) || defined(_UINT32_)
#    error "Integer constant value macros already defined elsewhere"
#  endif

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Macros that deal with sizes of integer constants for C/C++ */
#  define _UINT8_(x)   ((uint8_t)(x))    /* C code: 8-bits unsigned integer constant value */
#  define _UINT16_(x)  ((uint16_t)(x))   /* C code: 16-bits unsigned integer constant value */
#  define _UINT32_(x)  ((uint32_t)(x))   /* C code: 32-bits unsigned integer constant value */

#else /* Assembler */

#  define _UINT8_(x) x    /* Assembler: 8-bits unsigned integer constant value */
#  define _UINT16_(x) x   /* Assembler: 16-bits unsigned integer constant value */
#  define _UINT32_(x) x   /* Assembler: 32-bits unsigned integer constant value */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* SKIP_INTEGER_LITERALS */

/* ************************************************************************** */
/* CMSIS DEFINITIONS FOR PIC32CX0525SG12084                                 */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Interrupt Number Definition */
typedef enum IRQn
{
/******  CORTEX-M4 Processor Exceptions Numbers ******************************/
  Reset_IRQn                = -15, /* -15 Reset Vector, invoked on Power up and warm reset */
  NonMaskableInt_IRQn       = -14, /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  HardFault_IRQn            = -13, /* -13 Hard Fault, all classes of Fault    */
  BusFault_IRQn             = -11, /* -11 Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory related Fault */
  UsageFault_IRQn           = -10, /* -10 Usage Fault, i.e. Undef Instruction, Illegal State Transition */
  SVCall_IRQn               =  -5, /* -5  System Service Call via SVC instruction */
  DebugMonitor_IRQn         =  -4, /* -4  Debug Monitor                       */
  PendSV_IRQn               =  -2, /* -2  Pendable request for system service */
  SysTick_IRQn              =  -1, /* -1  System Tick Timer                   */

/******  PIC32CX0525SG12084 specific Interrupt Numbers ***********************************/
  GIRQ08_IRQn               =   0, /* 0   GPIO Pin Control Registers (GPIO)   */
  GIRQ09_IRQn               =   1, /* 1   GPIO Pin Control Registers (GPIO)   */
  GIRQ10_IRQn               =   2, /* 2   GPIO Pin Control Registers (GPIO)   */
  GIRQ11_IRQn               =   3, /* 3   GPIO Pin Control Registers (GPIO)   */
  GIRQ12_IRQn               =   4, /* 4   GPIO Pin Control Registers (GPIO)   */
  GIRQ13_IRQn               =   5, /* 5   The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB0) */
  GIRQ14_IRQn               =   6, /* 6   DMA Channel 00 Registers (DMA_CHAN00) */
  GIRQ15_IRQn               =   7, /* 7   The 16550 UART is a full-function Two Pin Serial Port that supports the standard RS-232 Interface. (UART0) */
  GIRQ16_IRQn               =   8, /* 8   Crypto block interrupt (PKE_ERR)    */
  GIRQ17_IRQn               =   9, /* 9   GIRQ17 (PECI)                       */
  GIRQ18_IRQn               =  10, /* 10  The QMSPI may be used to communicate with various peripheral devices that use a Serial Peripheral Interface (QMSPI) */
  GIRQ19_IRQn               =  11, /* 11  GIRQ19 (ESPI_IO)                    */
  GIRQ20_IRQn               =  12, /* 12  OTP Programming registers.\n (OTP)  */
  GIRQ21_IRQn               =  13, /* 13  The function of the Watchdog Timer is to provide a mechanism to detect if the internal embedded controller has failed. (WDT) */
  GIRQ23_IRQn               =  14, /* 14  This 16-bit timer block offers a simple mechanism for firmware to maintain a time base (TIMER16_0) */
  GIRQ26_IRQn               =  17, /* 17  GPIO Pin Control Registers (GPIO)   */
  I2CSMB0_IRQn              =  20, /* 20  The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB0) */
  I2CSMB1_IRQn              =  21, /* 21  The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB1) */
  I2CSMB2_IRQn              =  22, /* 22  The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB2) */
  I2CSMB3_IRQn              =  23, /* 23  The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB3) */
  DMA_CH00_IRQn             =  24, /* 24  DMA Channel 00 Registers (DMA_CHAN00) */
  DMA_CH01_IRQn             =  25, /* 25  DMA Channel 01 Registers (DMA_CHAN01) */
  DMA_CH02_IRQn             =  26, /* 26  DMA Channel 02 Registers (DMA_CHAN02) */
  DMA_CH03_IRQn             =  27, /* 27  DMA Channel 02 Registers (DMA_CHAN03) */
  DMA_CH04_IRQn             =  28, /* 28  DMA Channel 02 Registers (DMA_CHAN04) */
  DMA_CH05_IRQn             =  29, /* 29  DMA Channel 02 Registers (DMA_CHAN05) */
  DMA_CH06_IRQn             =  30, /* 30  DMA Channel 02 Registers (DMA_CHAN06) */
  DMA_CH07_IRQn             =  31, /* 31  DMA Channel 02 Registers (DMA_CHAN07) */
  DMA_CH08_IRQn             =  32, /* 32  DMA Channel 02 Registers (DMA_CHAN08) */
  DMA_CH09_IRQn             =  33, /* 33  DMA Channel 02 Registers (DMA_CHAN09) */
  DMA_CH10_IRQn             =  34, /* 34  DMA Channel 02 Registers (DMA_CHAN10) */
  DMA_CH11_IRQn             =  35, /* 35  DMA Channel 02 Registers (DMA_CHAN11) */
  UART0_IRQn                =  40, /* 40  The 16550 UART is a full-function Two Pin Serial Port that supports the standard RS-232 Interface. (UART0) */
  UART1_IRQn                =  41, /* 41  The 16550 UART is a full-function Two Pin Serial Port that supports the standard RS-232 Interface. (UART1) */
  EMI0_IRQn                 =  42, /* 42  The EMI provides a communication between system host and Embedded Controller (EMI0) */
  EMI1_IRQn                 =  43, /* 43  The EMI provides a communication between system host and Embedded Controller (EMI1) */
  UART2_IRQn                =  44, /* 44  The 16550 UART is a full-function Two Pin Serial Port that supports the standard RS-232 Interface. (UART2) */
  AEC0_IBF_IRQn             =  45, /* 45  The ACPI-ECI provides a four byte full duplex data interface. (ACPI_EC0) */
  AEC0_OBE_IRQn             =  46, /* 46  The ACPI-ECI provides a four byte full duplex data interface. (ACPI_EC0) */
  AEC1_IBF_IRQn             =  47, /* 47  The ACPI-ECI provides a four byte full duplex data interface. (ACPI_EC1) */
  AEC1_OBE_IRQn             =  48, /* 48  The ACPI-ECI provides a four byte full duplex data interface. (ACPI_EC1) */
  AEC2_IBF_IRQn             =  49, /* 49  The ACPI-ECI provides a four byte full duplex data interface. (ACPI_EC2) */
  AEC2_OBE_IRQn             =  50, /* 50  The ACPI-ECI provides a four byte full duplex data interface. (ACPI_EC2) */
  AEC3_IBF_IRQn             =  51, /* 51  The ACPI-ECI provides a four byte full duplex data interface. (ACPI_EC3) */
  AEC3_OBE_IRQn             =  52, /* 52  The ACPI-ECI provides a four byte full duplex data interface. (ACPI_EC3) */
  APM1_CTL_IRQn             =  55, /* 55  These features comply with the ACPI Specification through a combination of hardware and EC software (PM1) */
  APM1_EN_IRQn              =  56, /* 56  These features comply with the ACPI Specification through a combination of hardware and EC software (PM1) */
  APM1_STS_IRQn             =  57, /* 57  These features comply with the ACPI Specification through a combination of hardware and EC software (PM1) */
  MBOX_IRQn                 =  60, /* 60  The Mailbox provides a standard run-time mechanism for the host to communicate with the Embedded Controller (EC). (MBX) */
  P80CAP0_IRQn              =  62, /* 62  Diagnostic data is written by the Host Interface to the Port 80 BIOS Debug Port (PORT_80_DEBUG0) */
  P80CAP1_IRQn              =  63, /* 63  Diagnostic data is written by the Host Interface to the Port 80 BIOS Debug Port (PORT_80_DEBUG1) */
  PKE_ERR_IRQn              =  65, /* 65  Crypto block interrupt (PKE_ERR)    */
  PKE_END_IRQn              =  66, /* 66  Crypto block interrupt (PKE_END)    */
  RNG_IRQn                  =  67, /* 67  Crypto block interrupt (RNG)        */
  AES_IRQn                  =  68, /* 68  Crypto block interrupt (AES)        */
  HASH_IRQn                 =  69, /* 69  Crypto block interrupt (HASH)       */
  TACH0_IRQn                =  71, /* 71  This block monitors TACH output signals from various types of fans, and determines their speed. (TACH0) */
  TACH2_IRQn                =  73, /* 73  This block monitors TACH output signals from various types of fans, and determines their speed. (TACH2) */
  ADC_SNGL_IRQn             =  78, /* 78  This block is designed to convert external analog voltage readings into digital values. (ADC) */
  ADC_RPT_IRQn              =  79, /* 79  This block is designed to convert external analog voltage readings into digital values. (ADC) */
  LED0_IRQn                 =  83, /* 83  The LED is implemented using a PWM that can be driven either by the 48 MHz clock or by a 32.768 KHz clock input. (LED0) */
  SPISLV_IRQn               =  90, /* 90  SPI Slave Register. (SPI_SLAVE)     */
  QMSPI_IRQn                =  91, /* 91  The QMSPI may be used to communicate with various peripheral devices that use a Serial Peripheral Interface (QMSPI) */
  PS2_0_ACT_IRQn            = 100, /* 100 The four PS/2 Ports implementation eliminates the need to bit bang I/O ports to generate PS/2 traffic (PS2_0) */
  TMR_IRQn                  = 111, /* 111 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. (RTOS) */
  HTMR0_IRQn                = 112, /* 112 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode (HTM0) */
  HTMR1_IRQn                = 113, /* 113 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode (HTM1) */
  WK_IRQn                   = 114, /* 114 The Week Timer and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state (WEEK) */
  WKSUB_IRQn                = 115, /* 115 The Week Timer and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state (WEEK) */
  WKSEC_IRQn                = 116, /* 116 The Week Timer and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state (WEEK) */
  WKSUBSEC_IRQn             = 117, /* 117 The Week Timer and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state (WEEK) */
  SYSPWR_IRQn               = 118, /* 118 The Week Timer and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state (WEEK) */
  RTC_IRQn                  = 119, /* 119 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled (RTC) */
  RTC_ALARM_IRQn            = 120, /* 120 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled (RTC) */
  VCI_OVRD_IN_IRQn          = 121, /* 121 The VBAT-Powered Control Interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  VCI_IN0_IRQn              = 122, /* 122 The VBAT-Powered Control Interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  VCI_IN1_IRQn              = 123, /* 123 The VBAT-Powered Control Interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  VCI_IN2_IRQn              = 124, /* 124 The VBAT-Powered Control Interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  VCI_IN3_IRQn              = 125, /* 125 The VBAT-Powered Control Interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  PS2_0A_WAKE_IRQn          = 129, /* 129 The four PS/2 Ports implementation eliminates the need to bit bang I/O ports to generate PS/2 traffic (PS2_0) */
  TIMER16_0_IRQn            = 136, /* 136 This 16-bit timer block offers a simple mechanism for firmware to maintain a time base (TIMER16_0) */
  TIMER16_1_IRQn            = 137, /* 137 This 16-bit timer block offers a simple mechanism for firmware to maintain a time base (TIMER16_1) */
  TIMER32_0_IRQn            = 140, /* 140 This 32-bit timer block offers a simple mechanism for firmware to maintain a time base (TIMER32_0) */
  TIMER32_1_IRQn            = 141, /* 141 This 32-bit timer block offers a simple mechanism for firmware to maintain a time base (TIMER32_1) */
  CCT_IRQn                  = 146, /* 146 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CCT_CAP0_IRQn             = 147, /* 147 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CCT_CAP1_IRQn             = 148, /* 148 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CCT_CAP2_IRQn             = 149, /* 149 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CCT_CAP3_IRQn             = 150, /* 150 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CCT_CAP4_IRQn             = 151, /* 151 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CCT_CAP5_IRQn             = 152, /* 152 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CCT_CMP0_IRQn             = 153, /* 153 This is a 16-bit auto-reloading timer/counter. (CCT) */
  CCT_CMP1_IRQn             = 154, /* 154 This is a 16-bit auto-reloading timer/counter. (CCT) */
  I2CSMB4_IRQn              = 158, /* 158 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB4) */
  CEC_IRQn                  = 160, /* 160 The HDMI-CEC provides high-level control functions between all the various audiovisual products in a users environment. (HDMI_CEC) */
  SGPIO0_IRQn               = 161, /* 161 This is Serial General Purpous Input Output block (SGPIO0) */
  SGPIO1_IRQn               = 162, /* 162 This is Serial General Purpous Input Output block (SGPIO1) */
  I2C0_IRQn                 = 168, /* 168 The I2C interface can handle standard I2C interface. (I2C0) */
  I2C1_IRQn                 = 169, /* 169 The I2C interface can handle standard I2C interface. (I2C1) */
  I2C2_IRQn                 = 170, /* 170 The I2C interface can handle standard I2C interface. (I2C2) */
  WDT_IRQn                  = 171, /* 171 The function of the Watchdog Timer is to provide a mechanism to detect if the internal embedded controller has failed. (WDT) */

  PERIPH_MAX_IRQn           = 171  /* Max peripheral ID */
} IRQn_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;
  /* CORTEX-M4 handlers */
  void* pfnReset_Handler;                        /* -15 Reset Vector, invoked on Power up and warm reset */
  void* pfnNonMaskableInt_Handler;               /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  void* pfnHardFault_Handler;                    /* -13 Hard Fault, all classes of Fault */
  void* pvReservedC12;
  void* pfnBusFault_Handler;                     /* -11 Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory related Fault */
  void* pfnUsageFault_Handler;                   /* -10 Usage Fault, i.e. Undef Instruction, Illegal State Transition */
  void* pvReservedC9;
  void* pvReservedC8;
  void* pvReservedC7;
  void* pvReservedC6;
  void* pfnSVCall_Handler;                       /*  -5 System Service Call via SVC instruction */
  void* pfnDebugMonitor_Handler;                 /*  -4 Debug Monitor */
  void* pvReservedC3;
  void* pfnPendSV_Handler;                       /*  -2 Pendable request for system service */
  void* pfnSysTick_Handler;                      /*  -1 System Tick Timer */

  /* Peripheral handlers */
  void* pfnGIRQ08_Handler;                       /*   0 GPIO Pin Control Registers (GPIO) */
  void* pfnGIRQ09_Handler;                       /*   1 GPIO Pin Control Registers (GPIO) */
  void* pfnGIRQ10_Handler;                       /*   2 GPIO Pin Control Registers (GPIO) */
  void* pfnGIRQ11_Handler;                       /*   3 GPIO Pin Control Registers (GPIO) */
  void* pfnGIRQ12_Handler;                       /*   4 GPIO Pin Control Registers (GPIO) */
  void* pfnGIRQ13_Handler;                       /*   5 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB0) */
  void* pfnGIRQ14_Handler;                       /*   6 DMA Channel 00 Registers (DMA_CHAN00) */
  void* pfnGIRQ15_Handler;                       /*   7 The 16550 UART is a full-function Two Pin Serial Port that supports the standard RS-232 Interface. (UART0) */
  void* pfnGIRQ16_Handler;                       /*   8 Crypto block interrupt (PKE_ERR) */
  void* pvReserved9;
  void* pfnGIRQ18_Handler;                       /*  10 The QMSPI may be used to communicate with various peripheral devices that use a Serial Peripheral Interface (QMSPI) */
  void* pvReserved11;
  void* pfnGIRQ20_Handler;                       /*  12 OTP Programming registers.\n (OTP) */
  void* pfnGIRQ21_Handler;                       /*  13 The function of the Watchdog Timer is to provide a mechanism to detect if the internal embedded controller has failed. (WDT) */
  void* pfnGIRQ23_Handler;                       /*  14 This 16-bit timer block offers a simple mechanism for firmware to maintain a time base (TIMER16_0) */
  void* pvReserved15;
  void* pvReserved16;
  void* pfnGIRQ26_Handler;                       /*  17 GPIO Pin Control Registers (GPIO) */
  void* pvReserved18;
  void* pvReserved19;
  void* pfnI2CSMB0_Handler;                      /*  20 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB0) */
  void* pfnI2CSMB1_Handler;                      /*  21 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB1) */
  void* pfnI2CSMB2_Handler;                      /*  22 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB2) */
  void* pfnI2CSMB3_Handler;                      /*  23 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB3) */
  void* pfnDMA_CH00_Handler;                     /*  24 DMA Channel 00 Registers (DMA_CHAN00) */
  void* pfnDMA_CH01_Handler;                     /*  25 DMA Channel 01 Registers (DMA_CHAN01) */
  void* pfnDMA_CH02_Handler;                     /*  26 DMA Channel 02 Registers (DMA_CHAN02) */
  void* pfnDMA_CH03_Handler;                     /*  27 DMA Channel 02 Registers (DMA_CHAN03) */
  void* pfnDMA_CH04_Handler;                     /*  28 DMA Channel 02 Registers (DMA_CHAN04) */
  void* pfnDMA_CH05_Handler;                     /*  29 DMA Channel 02 Registers (DMA_CHAN05) */
  void* pfnDMA_CH06_Handler;                     /*  30 DMA Channel 02 Registers (DMA_CHAN06) */
  void* pfnDMA_CH07_Handler;                     /*  31 DMA Channel 02 Registers (DMA_CHAN07) */
  void* pfnDMA_CH08_Handler;                     /*  32 DMA Channel 02 Registers (DMA_CHAN08) */
  void* pfnDMA_CH09_Handler;                     /*  33 DMA Channel 02 Registers (DMA_CHAN09) */
  void* pfnDMA_CH10_Handler;                     /*  34 DMA Channel 02 Registers (DMA_CHAN10) */
  void* pfnDMA_CH11_Handler;                     /*  35 DMA Channel 02 Registers (DMA_CHAN11) */
  void* pvReserved36;
  void* pvReserved37;
  void* pvReserved38;
  void* pvReserved39;
  void* pfnUART0_Handler;                        /*  40 The 16550 UART is a full-function Two Pin Serial Port that supports the standard RS-232 Interface. (UART0) */
  void* pfnUART1_Handler;                        /*  41 The 16550 UART is a full-function Two Pin Serial Port that supports the standard RS-232 Interface. (UART1) */
  void* pfnEMI0_Handler;                         /*  42 The EMI provides a communication between system host and Embedded Controller (EMI0) */
  void* pfnEMI1_Handler;                         /*  43 The EMI provides a communication between system host and Embedded Controller (EMI1) */
  void* pfnUART2_Handler;                        /*  44 The 16550 UART is a full-function Two Pin Serial Port that supports the standard RS-232 Interface. (UART2) */
  void* pfnAEC0_IBF_Handler;                     /*  45 The ACPI-ECI provides a four byte full duplex data interface. (ACPI_EC0) */
  void* pfnAEC0_OBE_Handler;                     /*  46 The ACPI-ECI provides a four byte full duplex data interface. (ACPI_EC0) */
  void* pfnAEC1_IBF_Handler;                     /*  47 The ACPI-ECI provides a four byte full duplex data interface. (ACPI_EC1) */
  void* pfnAEC1_OBE_Handler;                     /*  48 The ACPI-ECI provides a four byte full duplex data interface. (ACPI_EC1) */
  void* pfnAEC2_IBF_Handler;                     /*  49 The ACPI-ECI provides a four byte full duplex data interface. (ACPI_EC2) */
  void* pfnAEC2_OBE_Handler;                     /*  50 The ACPI-ECI provides a four byte full duplex data interface. (ACPI_EC2) */
  void* pfnAEC3_IBF_Handler;                     /*  51 The ACPI-ECI provides a four byte full duplex data interface. (ACPI_EC3) */
  void* pfnAEC3_OBE_Handler;                     /*  52 The ACPI-ECI provides a four byte full duplex data interface. (ACPI_EC3) */
  void* pvReserved53;
  void* pvReserved54;
  void* pfnAPM1_CTL_Handler;                     /*  55 These features comply with the ACPI Specification through a combination of hardware and EC software (PM1) */
  void* pfnAPM1_EN_Handler;                      /*  56 These features comply with the ACPI Specification through a combination of hardware and EC software (PM1) */
  void* pfnAPM1_STS_Handler;                     /*  57 These features comply with the ACPI Specification through a combination of hardware and EC software (PM1) */
  void* pvReserved58;
  void* pvReserved59;
  void* pfnMBOX_Handler;                         /*  60 The Mailbox provides a standard run-time mechanism for the host to communicate with the Embedded Controller (EC). (MBX) */
  void* pvReserved61;
  void* pfnP80CAP0_Handler;                      /*  62 Diagnostic data is written by the Host Interface to the Port 80 BIOS Debug Port (PORT_80_DEBUG0) */
  void* pfnP80CAP1_Handler;                      /*  63 Diagnostic data is written by the Host Interface to the Port 80 BIOS Debug Port (PORT_80_DEBUG1) */
  void* pvReserved64;
  void* pfnPKE_ERR_Handler;                      /*  65 Crypto block interrupt (PKE_ERR) */
  void* pfnPKE_END_Handler;                      /*  66 Crypto block interrupt (PKE_END) */
  void* pfnRNG_Handler;                          /*  67 Crypto block interrupt (RNG) */
  void* pfnAES_Handler;                          /*  68 Crypto block interrupt (AES) */
  void* pfnHASH_Handler;                         /*  69 Crypto block interrupt (HASH) */
  void* pvReserved70;
  void* pfnTACH0_Handler;                        /*  71 This block monitors TACH output signals from various types of fans, and determines their speed. (TACH0) */
  void* pvReserved72;
  void* pfnTACH2_Handler;                        /*  73 This block monitors TACH output signals from various types of fans, and determines their speed. (TACH2) */
  void* pvReserved74;
  void* pvReserved75;
  void* pvReserved76;
  void* pvReserved77;
  void* pfnADC_SNGL_Handler;                     /*  78 This block is designed to convert external analog voltage readings into digital values. (ADC) */
  void* pfnADC_RPT_Handler;                      /*  79 This block is designed to convert external analog voltage readings into digital values. (ADC) */
  void* pvReserved80;
  void* pvReserved81;
  void* pvReserved82;
  void* pfnLED0_Handler;                         /*  83 The LED is implemented using a PWM that can be driven either by the 48 MHz clock or by a 32.768 KHz clock input. (LED0) */
  void* pvReserved84;
  void* pvReserved85;
  void* pvReserved86;
  void* pvReserved87;
  void* pvReserved88;
  void* pvReserved89;
  void* pfnSPISLV_Handler;                       /*  90 SPI Slave Register. (SPI_SLAVE) */
  void* pfnQMSPI_Handler;                        /*  91 The QMSPI may be used to communicate with various peripheral devices that use a Serial Peripheral Interface (QMSPI) */
  void* pvReserved92;
  void* pvReserved93;
  void* pvReserved94;
  void* pvReserved95;
  void* pvReserved96;
  void* pvReserved97;
  void* pvReserved98;
  void* pvReserved99;
  void* pfnPS2_0_ACT_Handler;                    /* 100 The four PS/2 Ports implementation eliminates the need to bit bang I/O ports to generate PS/2 traffic (PS2_0) */
  void* pvReserved101;
  void* pvReserved102;
  void* pvReserved103;
  void* pvReserved104;
  void* pvReserved105;
  void* pvReserved106;
  void* pvReserved107;
  void* pvReserved108;
  void* pvReserved109;
  void* pvReserved110;
  void* pfnTMR_Handler;                          /* 111 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. (RTOS) */
  void* pfnHTMR0_Handler;                        /* 112 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode (HTM0) */
  void* pfnHTMR1_Handler;                        /* 113 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode (HTM1) */
  void* pfnWK_Handler;                           /* 114 The Week Timer and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state (WEEK) */
  void* pfnWKSUB_Handler;                        /* 115 The Week Timer and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state (WEEK) */
  void* pfnWKSEC_Handler;                        /* 116 The Week Timer and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state (WEEK) */
  void* pfnWKSUBSEC_Handler;                     /* 117 The Week Timer and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state (WEEK) */
  void* pfnSYSPWR_Handler;                       /* 118 The Week Timer and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state (WEEK) */
  void* pfnRTC_Handler;                          /* 119 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled (RTC) */
  void* pfnRTC_ALARM_Handler;                    /* 120 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled (RTC) */
  void* pfnVCI_OVRD_IN_Handler;                  /* 121 The VBAT-Powered Control Interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  void* pfnVCI_IN0_Handler;                      /* 122 The VBAT-Powered Control Interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  void* pfnVCI_IN1_Handler;                      /* 123 The VBAT-Powered Control Interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  void* pfnVCI_IN2_Handler;                      /* 124 The VBAT-Powered Control Interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  void* pfnVCI_IN3_Handler;                      /* 125 The VBAT-Powered Control Interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  void* pvReserved126;
  void* pvReserved127;
  void* pvReserved128;
  void* pfnPS2_0A_WAKE_Handler;                  /* 129 The four PS/2 Ports implementation eliminates the need to bit bang I/O ports to generate PS/2 traffic (PS2_0) */
  void* pvReserved130;
  void* pvReserved131;
  void* pvReserved132;
  void* pvReserved133;
  void* pvReserved134;
  void* pvReserved135;
  void* pfnTIMER16_0_Handler;                    /* 136 This 16-bit timer block offers a simple mechanism for firmware to maintain a time base (TIMER16_0) */
  void* pfnTIMER16_1_Handler;                    /* 137 This 16-bit timer block offers a simple mechanism for firmware to maintain a time base (TIMER16_1) */
  void* pvReserved138;
  void* pvReserved139;
  void* pfnTIMER32_0_Handler;                    /* 140 This 32-bit timer block offers a simple mechanism for firmware to maintain a time base (TIMER32_0) */
  void* pfnTIMER32_1_Handler;                    /* 141 This 32-bit timer block offers a simple mechanism for firmware to maintain a time base (TIMER32_1) */
  void* pvReserved142;
  void* pvReserved143;
  void* pvReserved144;
  void* pvReserved145;
  void* pfnCCT_Handler;                          /* 146 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCCT_CAP0_Handler;                     /* 147 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCCT_CAP1_Handler;                     /* 148 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCCT_CAP2_Handler;                     /* 149 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCCT_CAP3_Handler;                     /* 150 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCCT_CAP4_Handler;                     /* 151 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCCT_CAP5_Handler;                     /* 152 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCCT_CMP0_Handler;                     /* 153 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pfnCCT_CMP1_Handler;                     /* 154 This is a 16-bit auto-reloading timer/counter. (CCT) */
  void* pvReserved155;
  void* pvReserved156;
  void* pvReserved157;
  void* pfnI2CSMB4_Handler;                      /* 158 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB4) */
  void* pvReserved159;
  void* pfnCEC_Handler;                          /* 160 The HDMI-CEC provides high-level control functions between all the various audiovisual products in a users environment. (HDMI_CEC) */
  void* pfnSGPIO0_Handler;                       /* 161 This is Serial General Purpous Input Output block (SGPIO0) */
  void* pfnSGPIO1_Handler;                       /* 162 This is Serial General Purpous Input Output block (SGPIO1) */
  void* pvReserved163;
  void* pvReserved164;
  void* pvReserved165;
  void* pvReserved166;
  void* pvReserved167;
  void* pfnI2C0_Handler;                         /* 168 The I2C interface can handle standard I2C interface. (I2C0) */
  void* pfnI2C1_Handler;                         /* 169 The I2C interface can handle standard I2C interface. (I2C1) */
  void* pfnI2C2_Handler;                         /* 170 The I2C interface can handle standard I2C interface. (I2C2) */
  void* pfnWDT_Handler;                          /* 171 The function of the Watchdog Timer is to provide a mechanism to detect if the internal embedded controller has failed. (WDT) */
} DeviceVectors;

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if !defined DONT_USE_PREDEFINED_CORE_HANDLERS
/* CORTEX-M4 exception handlers */
void Reset_Handler                 ( void );
void NonMaskableInt_Handler        ( void );
void HardFault_Handler             ( void );
void BusFault_Handler              ( void );
void UsageFault_Handler            ( void );
void SVCall_Handler                ( void );
void DebugMonitor_Handler          ( void );
void PendSV_Handler                ( void );
void SysTick_Handler               ( void );
#endif /* DONT_USE_PREDEFINED_CORE_HANDLERS */

#if !defined DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS
/* Peripherals interrupt handlers */
void GIRQ08_Handler                ( void );
void GIRQ09_Handler                ( void );
void GIRQ10_Handler                ( void );
void GIRQ11_Handler                ( void );
void GIRQ12_Handler                ( void );
void GIRQ13_Handler                ( void );
void GIRQ14_Handler                ( void );
void GIRQ15_Handler                ( void );
void GIRQ16_Handler                ( void );
void GIRQ18_Handler                ( void );
void GIRQ20_Handler                ( void );
void GIRQ21_Handler                ( void );
void GIRQ23_Handler                ( void );
void GIRQ26_Handler                ( void );
void I2CSMB0_Handler               ( void );
void I2CSMB1_Handler               ( void );
void I2CSMB2_Handler               ( void );
void I2CSMB3_Handler               ( void );
void DMA_CH00_Handler              ( void );
void DMA_CH01_Handler              ( void );
void DMA_CH02_Handler              ( void );
void DMA_CH03_Handler              ( void );
void DMA_CH04_Handler              ( void );
void DMA_CH05_Handler              ( void );
void DMA_CH06_Handler              ( void );
void DMA_CH07_Handler              ( void );
void DMA_CH08_Handler              ( void );
void DMA_CH09_Handler              ( void );
void DMA_CH10_Handler              ( void );
void DMA_CH11_Handler              ( void );
void UART0_Handler                 ( void );
void UART1_Handler                 ( void );
void EMI0_Handler                  ( void );
void EMI1_Handler                  ( void );
void UART2_Handler                 ( void );
void AEC0_IBF_Handler              ( void );
void AEC0_OBE_Handler              ( void );
void AEC1_IBF_Handler              ( void );
void AEC1_OBE_Handler              ( void );
void AEC2_IBF_Handler              ( void );
void AEC2_OBE_Handler              ( void );
void AEC3_IBF_Handler              ( void );
void AEC3_OBE_Handler              ( void );
void APM1_CTL_Handler              ( void );
void APM1_EN_Handler               ( void );
void APM1_STS_Handler              ( void );
void MBOX_Handler                  ( void );
void P80CAP0_Handler               ( void );
void P80CAP1_Handler               ( void );
void PKE_ERR_Handler               ( void );
void PKE_END_Handler               ( void );
void RNG_Handler                   ( void );
void AES_Handler                   ( void );
void HASH_Handler                  ( void );
void TACH0_Handler                 ( void );
void TACH2_Handler                 ( void );
void ADC_SNGL_Handler              ( void );
void ADC_RPT_Handler               ( void );
void LED0_Handler                  ( void );
void SPISLV_Handler                ( void );
void QMSPI_Handler                 ( void );
void PS2_0_ACT_Handler             ( void );
void TMR_Handler                   ( void );
void HTMR0_Handler                 ( void );
void HTMR1_Handler                 ( void );
void WK_Handler                    ( void );
void WKSUB_Handler                 ( void );
void WKSEC_Handler                 ( void );
void WKSUBSEC_Handler              ( void );
void SYSPWR_Handler                ( void );
void RTC_Handler                   ( void );
void RTC_ALARM_Handler             ( void );
void VCI_OVRD_IN_Handler           ( void );
void VCI_IN0_Handler               ( void );
void VCI_IN1_Handler               ( void );
void VCI_IN2_Handler               ( void );
void VCI_IN3_Handler               ( void );
void PS2_0A_WAKE_Handler           ( void );
void TIMER16_0_Handler             ( void );
void TIMER16_1_Handler             ( void );
void TIMER32_0_Handler             ( void );
void TIMER32_1_Handler             ( void );
void CCT_Handler                   ( void );
void CCT_CAP0_Handler              ( void );
void CCT_CAP1_Handler              ( void );
void CCT_CAP2_Handler              ( void );
void CCT_CAP3_Handler              ( void );
void CCT_CAP4_Handler              ( void );
void CCT_CAP5_Handler              ( void );
void CCT_CMP0_Handler              ( void );
void CCT_CMP1_Handler              ( void );
void I2CSMB4_Handler               ( void );
void CEC_Handler                   ( void );
void SGPIO0_Handler                ( void );
void SGPIO1_Handler                ( void );
void I2C0_Handler                  ( void );
void I2C1_Handler                  ( void );
void I2C2_Handler                  ( void );
void WDT_Handler                   ( void );
#endif /* DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* Configuration of the CORTEX-M4 Processor and Core Peripherals */
#define __SOFTFP__ // Note: Added for MikroE implementation.
#define __FPU_PRESENT                      0 /* FPU present or not                                                        */
#define __MPU_PRESENT                      0 /* MPU present or not                                                        */
#define __CM4_REV                     0x0100 /* CM4 Core Revision                                                         */
#define __NVIC_PRIO_BITS                   3 /* Number of Bits used for Priority Levels                                   */
#define __Vendor_SysTickConfig             0 /* Set to 1 if different SysTick Config is used                              */
#define __VTOR_PRESENT                     1 /* Vector Table Offset Regisrer present or not                               */
#define __ARCH_ARM                         1
#define __ARCH_ARM_CORTEX_M                1

/* CMSIS includes */
#include "core_cm4.h"
#if defined USE_CMSIS_INIT
// Note: Changed for MikroE implementation.
//#include "system_0525sg12.h"
#define __I volatile // Note: Added for MikroE implementation.
#define __O __I // Note: Added for MikroE implementation.
#define __IO __I // Note: Added for MikroE implementation.
#include <stdint.h>
#endif /* USE_CMSIS_INIT */

/* ************************************************************************** */
/*   SOFTWARE PERIPHERAL API DEFINITION FOR PIC32CX0525SG12084                */
/* ************************************************************************** */
#include "component/acpi_ec.h"
#include "component/adc.h"
#include "component/cct.h"
#include "component/dma_chan00.h"
#include "component/dma_chan01.h"
#include "component/dma_chan02.h"
#include "component/dma_main.h"
#include "component/ecia.h"
#include "component/ec_reg_bank.h"
#include "component/emi.h"
#include "component/espi_scratch.h"
#include "component/gcr.h"
#include "component/gpio.h"
#include "component/hdmi_cec.h"
#include "component/htm.h"
#include "component/i2c.h"
#include "component/led.h"
#include "component/mbx.h"
#include "component/otp.h"
#include "component/pcr.h"
#include "component/pm1.h"
#include "component/port92.h"
#include "component/port_80_debug.h"
#include "component/ps2.h"
#include "component/pwm.h"
#include "component/qmspi.h"
#include "component/rtc.h"
#include "component/rtos.h"
#include "component/sgpio.h"
#include "component/smb.h"
#include "component/spi_slave.h"
#include "component/tach.h"
#include "component/tfdp.h"
#include "component/timer16.h"
#include "component/timer32.h"
#include "component/uart.h"
#include "component/vbat.h"
#include "component/vbat_ram.h"
#include "component/vci.h"
#include "component/wdt.h"
#include "component/week.h"

/* ************************************************************************** */
/*   INSTANCE DEFINITIONS FOR PIC32CX0525SG12084 */
/* ************************************************************************** */
#include "instance/acpi_ec0.h"
#include "instance/acpi_ec1.h"
#include "instance/acpi_ec2.h"
#include "instance/acpi_ec3.h"
#include "instance/adc.h"
#include "instance/cct.h"
#include "instance/dma_chan00.h"
#include "instance/dma_chan01.h"
#include "instance/dma_chan02.h"
#include "instance/dma_chan03.h"
#include "instance/dma_chan04.h"
#include "instance/dma_chan05.h"
#include "instance/dma_chan06.h"
#include "instance/dma_chan07.h"
#include "instance/dma_chan08.h"
#include "instance/dma_chan09.h"
#include "instance/dma_chan10.h"
#include "instance/dma_chan11.h"
#include "instance/dma_main.h"
#include "instance/ecia.h"
#include "instance/ec_reg_bank.h"
#include "instance/emi0.h"
#include "instance/emi1.h"
#include "instance/gcr.h"
#include "instance/gpio.h"
#include "instance/hdmi_cec.h"
#include "instance/htm0.h"
#include "instance/htm1.h"
#include "instance/i2c0.h"
#include "instance/i2c1.h"
#include "instance/i2c2.h"
#include "instance/led0.h"
#include "instance/mbx.h"
#include "instance/otp.h"
#include "instance/pcr.h"
#include "instance/pm1.h"
#include "instance/port92.h"
#include "instance/port_80_debug0.h"
#include "instance/port_80_debug1.h"
#include "instance/ps2_0.h"
#include "instance/pwm0.h"
#include "instance/pwm1.h"
#include "instance/pwm4.h"
#include "instance/pwm6.h"
#include "instance/pwm7.h"
#include "instance/qmspi.h"
#include "instance/rtc.h"
#include "instance/rtos.h"
#include "instance/sgpio0.h"
#include "instance/sgpio1.h"
#include "instance/smb0.h"
#include "instance/smb1.h"
#include "instance/smb2.h"
#include "instance/smb3.h"
#include "instance/smb4.h"
#include "instance/spi_slave.h"
#include "instance/tach0.h"
#include "instance/tach2.h"
#include "instance/tfdp.h"
#include "instance/timer16_0.h"
#include "instance/timer16_1.h"
#include "instance/timer32_0.h"
#include "instance/timer32_1.h"
#include "instance/uart0.h"
#include "instance/uart1.h"
#include "instance/uart2.h"
#include "instance/vbat.h"
#include "instance/vbat_ram.h"
#include "instance/vci.h"
#include "instance/wdt.h"
#include "instance/week.h"

/* ************************************************************************** */
/*  PERIPHERAL ID DEFINITIONS FOR PIC32CX0525SG12084                          */
/* ************************************************************************** */

#define ID_PERIPH_MAX    (  0) /* Number of peripheral IDs */

/* ************************************************************************** */
/*   REGISTER STRUCTURE ADDRESS DEFINITIONS FOR PIC32CX0525SG12084            */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define PCR_REGS                         ((pcr_registers_t*)0x40080100)                /* PCR Registers Address        */
#define DMA_MAIN_REGS                    ((dma_main_registers_t*)0x40002400)           /* DMA_MAIN Registers Address   */
#define DMA_CHAN00_REGS                  ((dma_chan00_registers_t*)0x40002440)         /* DMA_CHAN00 Registers Address */
#define DMA_CHAN01_REGS                  ((dma_chan01_registers_t*)0x40002480)         /* DMA_CHAN01 Registers Address */
#define DMA_CHAN02_REGS                  ((dma_chan02_registers_t*)0x400024c0)         /* DMA_CHAN02 Registers Address */
#define DMA_CHAN03_REGS                  ((dma_chan02_registers_t*)0x40002500)         /* DMA_CHAN03 Registers Address */
#define DMA_CHAN04_REGS                  ((dma_chan02_registers_t*)0x40002540)         /* DMA_CHAN04 Registers Address */
#define DMA_CHAN05_REGS                  ((dma_chan02_registers_t*)0x40002580)         /* DMA_CHAN05 Registers Address */
#define DMA_CHAN06_REGS                  ((dma_chan02_registers_t*)0x400025c0)         /* DMA_CHAN06 Registers Address */
#define DMA_CHAN07_REGS                  ((dma_chan02_registers_t*)0x40002600)         /* DMA_CHAN07 Registers Address */
#define DMA_CHAN08_REGS                  ((dma_chan02_registers_t*)0x40002640)         /* DMA_CHAN08 Registers Address */
#define DMA_CHAN09_REGS                  ((dma_chan02_registers_t*)0x40002680)         /* DMA_CHAN09 Registers Address */
#define DMA_CHAN10_REGS                  ((dma_chan02_registers_t*)0x400026c0)         /* DMA_CHAN10 Registers Address */
#define DMA_CHAN11_REGS                  ((dma_chan02_registers_t*)0x40002700)         /* DMA_CHAN11 Registers Address */
#define ECIA_REGS                        ((ecia_registers_t*)0x4000e000)               /* ECIA Registers Address       */
#define GCR_REGS                         ((gcr_registers_t*)0x400fff00)                /* GCR Registers Address        */
#define PORT92_REGS                      ((port92_registers_t*)0x400f2000)             /* PORT92 Registers Address     */
#define ACPI_EC0_REGS                    ((acpi_ec_registers_t*)0x400f0800)            /* ACPI_EC0 Registers Address   */
#define ACPI_EC1_REGS                    ((acpi_ec_registers_t*)0x400f0c00)            /* ACPI_EC1 Registers Address   */
#define ACPI_EC2_REGS                    ((acpi_ec_registers_t*)0x400f1000)            /* ACPI_EC2 Registers Address   */
#define ACPI_EC3_REGS                    ((acpi_ec_registers_t*)0x400f1400)            /* ACPI_EC3 Registers Address   */
#define PM1_REGS                         ((pm1_registers_t*)0x400f1c00)                /* PM1 Registers Address        */
#define EMI0_REGS                        ((emi_registers_t*)0x400f4000)                /* EMI0 Registers Address       */
#define EMI1_REGS                        ((emi_registers_t*)0x400f4400)                /* EMI1 Registers Address       */
#define MBX_REGS                         ((mbx_registers_t*)0x400f0000)                /* MBX Registers Address        */
#define UART0_REGS                       ((uart_registers_t*)0x400f2400)               /* UART0 Registers Address      */
#define UART1_REGS                       ((uart_registers_t*)0x400f2800)               /* UART1 Registers Address      */
#define UART2_REGS                       ((uart_registers_t*)0x400f2c00)               /* UART2 Registers Address      */
#define GPIO_REGS                        ((gpio_registers_t*)0x40081000)               /* GPIO Registers Address       */
#define WDT_REGS                         ((wdt_registers_t*)0x40000400)                /* WDT Registers Address        */
#define TIMER16_0_REGS                   ((timer16_registers_t*)0x40000c00)            /* TIMER16_0 Registers Address  */
#define TIMER16_1_REGS                   ((timer16_registers_t*)0x40000c20)            /* TIMER16_1 Registers Address  */
#define TIMER32_0_REGS                   ((timer32_registers_t*)0x40000c80)            /* TIMER32_0 Registers Address  */
#define TIMER32_1_REGS                   ((timer32_registers_t*)0x40000ca0)            /* TIMER32_1 Registers Address  */
#define CCT_REGS                         ((cct_registers_t*)0x40001000)                /* CCT Registers Address        */
#define HTM0_REGS                        ((htm_registers_t*)0x40009800)                /* HTM0 Registers Address       */
#define HTM1_REGS                        ((htm_registers_t*)0x40009820)                /* HTM1 Registers Address       */
#define RTOS_REGS                        ((rtos_registers_t*)0x40007400)               /* RTOS Registers Address       */
#define RTC_REGS                         ((rtc_registers_t*)0x400f5000)                /* RTC Registers Address        */
#define WEEK_REGS                        ((week_registers_t*)0x4000ac80)               /* WEEK Registers Address       */
#define TACH0_REGS                       ((tach_registers_t*)0x40006000)               /* TACH0 Registers Address      */
#define TACH2_REGS                       ((tach_registers_t*)0x40006020)               /* TACH2 Registers Address      */
#define PWM0_REGS                        ((pwm_registers_t*)0x40005800)                /* PWM0 Registers Address       */
#define PWM1_REGS                        ((pwm_registers_t*)0x40005810)                /* PWM1 Registers Address       */
#define PWM4_REGS                        ((pwm_registers_t*)0x40005840)                /* PWM4 Registers Address       */
#define PWM6_REGS                        ((pwm_registers_t*)0x40005860)                /* PWM6 Registers Address       */
#define PWM7_REGS                        ((pwm_registers_t*)0x40005870)                /* PWM7 Registers Address       */
#define ADC_REGS                         ((adc_registers_t*)0x40007c00)                /* ADC Registers Address        */
#define LED0_REGS                        ((led_registers_t*)0x4000b800)                /* LED0 Registers Address       */
#define SMB0_REGS                        ((smb_registers_t*)0x40004000)                /* SMB0 Registers Address       */
#define SMB1_REGS                        ((smb_registers_t*)0x40004400)                /* SMB1 Registers Address       */
#define SMB2_REGS                        ((smb_registers_t*)0x40004800)                /* SMB2 Registers Address       */
#define SMB3_REGS                        ((smb_registers_t*)0x40004c00)                /* SMB3 Registers Address       */
#define SMB4_REGS                        ((smb_registers_t*)0x40005000)                /* SMB4 Registers Address       */
#define I2C0_REGS                        ((i2c_registers_t*)0x40005100)                /* I2C0 Registers Address       */
#define I2C1_REGS                        ((i2c_registers_t*)0x40005200)                /* I2C1 Registers Address       */
#define I2C2_REGS                        ((i2c_registers_t*)0x40005300)                /* I2C2 Registers Address       */
#define QMSPI_REGS                       ((qmspi_registers_t*)0x40070000)              /* QMSPI Registers Address      */
#define PS2_0_REGS                       ((ps2_registers_t*)0x40009000)                /* PS2_0 Registers Address      */
#define TFDP_REGS                        ((tfdp_registers_t*)0x40008c00)               /* TFDP Registers Address       */
#define PORT_80_DEBUG0_REGS              ((port_80_debug_registers_t*)0x400f8000)      /* PORT_80_DEBUG0 Registers Address */
#define PORT_80_DEBUG1_REGS              ((port_80_debug_registers_t*)0x400f8400)      /* PORT_80_DEBUG1 Registers Address */
#define VCI_REGS                         ((vci_registers_t*)0x4000ae00)                /* VCI Registers Address        */
#define VBAT_RAM_REGS                    ((vbat_ram_registers_t*)0x4000a800)           /* VBAT_RAM Registers Address   */
#define VBAT_REGS                        ((vbat_registers_t*)0x4000a400)               /* VBAT Registers Address       */
#define EC_REG_BANK_REGS                 ((ec_reg_bank_registers_t*)0x4000fc00)        /* EC_REG_BANK Registers Address */
#define HDMI_CEC_REGS                    ((hdmi_cec_registers_t*)0x40006800)           /* HDMI_CEC Registers Address   */
#define SGPIO0_REGS                      ((sgpio_registers_t*)0x4000a000)              /* SGPIO0 Registers Address     */
#define SGPIO1_REGS                      ((sgpio_registers_t*)0x4000a100)              /* SGPIO1 Registers Address     */
#define OTP_REGS                         ((otp_registers_t*)0x40082000)                /* OTP Registers Address        */
#define SPI_SLAVE_REGS                   ((spi_slave_registers_t*)0x40007000)          /* SPI_SLAVE Registers Address  */
#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR PIC32CX0525SG12084                          */
/* ************************************************************************** */
#define PCR_BASE_ADDRESS                 _UINT32_(0x40080100)                          /* PCR Base Address */
#define DMA_MAIN_BASE_ADDRESS            _UINT32_(0x40002400)                          /* DMA_MAIN Base Address */
#define DMA_CHAN00_BASE_ADDRESS          _UINT32_(0x40002440)                          /* DMA_CHAN00 Base Address */
#define DMA_CHAN01_BASE_ADDRESS          _UINT32_(0x40002480)                          /* DMA_CHAN01 Base Address */
#define DMA_CHAN02_BASE_ADDRESS          _UINT32_(0x400024c0)                          /* DMA_CHAN02 Base Address */
#define DMA_CHAN03_BASE_ADDRESS          _UINT32_(0x40002500)                          /* DMA_CHAN03 Base Address */
#define DMA_CHAN04_BASE_ADDRESS          _UINT32_(0x40002540)                          /* DMA_CHAN04 Base Address */
#define DMA_CHAN05_BASE_ADDRESS          _UINT32_(0x40002580)                          /* DMA_CHAN05 Base Address */
#define DMA_CHAN06_BASE_ADDRESS          _UINT32_(0x400025c0)                          /* DMA_CHAN06 Base Address */
#define DMA_CHAN07_BASE_ADDRESS          _UINT32_(0x40002600)                          /* DMA_CHAN07 Base Address */
#define DMA_CHAN08_BASE_ADDRESS          _UINT32_(0x40002640)                          /* DMA_CHAN08 Base Address */
#define DMA_CHAN09_BASE_ADDRESS          _UINT32_(0x40002680)                          /* DMA_CHAN09 Base Address */
#define DMA_CHAN10_BASE_ADDRESS          _UINT32_(0x400026c0)                          /* DMA_CHAN10 Base Address */
#define DMA_CHAN11_BASE_ADDRESS          _UINT32_(0x40002700)                          /* DMA_CHAN11 Base Address */
#define ECIA_BASE_ADDRESS                _UINT32_(0x4000e000)                          /* ECIA Base Address */
#define GCR_BASE_ADDRESS                 _UINT32_(0x400fff00)                          /* GCR Base Address */
#define PORT92_BASE_ADDRESS              _UINT32_(0x400f2000)                          /* PORT92 Base Address */
#define ACPI_EC0_BASE_ADDRESS            _UINT32_(0x400f0800)                          /* ACPI_EC0 Base Address */
#define ACPI_EC1_BASE_ADDRESS            _UINT32_(0x400f0c00)                          /* ACPI_EC1 Base Address */
#define ACPI_EC2_BASE_ADDRESS            _UINT32_(0x400f1000)                          /* ACPI_EC2 Base Address */
#define ACPI_EC3_BASE_ADDRESS            _UINT32_(0x400f1400)                          /* ACPI_EC3 Base Address */
#define PM1_BASE_ADDRESS                 _UINT32_(0x400f1c00)                          /* PM1 Base Address */
#define EMI0_BASE_ADDRESS                _UINT32_(0x400f4000)                          /* EMI0 Base Address */
#define EMI1_BASE_ADDRESS                _UINT32_(0x400f4400)                          /* EMI1 Base Address */
#define MBX_BASE_ADDRESS                 _UINT32_(0x400f0000)                          /* MBX Base Address */
#define UART0_BASE_ADDRESS               _UINT32_(0x400f2400)                          /* UART0 Base Address */
#define UART1_BASE_ADDRESS               _UINT32_(0x400f2800)                          /* UART1 Base Address */
#define UART2_BASE_ADDRESS               _UINT32_(0x400f2c00)                          /* UART2 Base Address */
#define GPIO_BASE_ADDRESS                _UINT32_(0x40081000)                          /* GPIO Base Address */
#define WDT_BASE_ADDRESS                 _UINT32_(0x40000400)                          /* WDT Base Address */
#define TIMER16_0_BASE_ADDRESS           _UINT32_(0x40000c00)                          /* TIMER16_0 Base Address */
#define TIMER16_1_BASE_ADDRESS           _UINT32_(0x40000c20)                          /* TIMER16_1 Base Address */
#define TIMER32_0_BASE_ADDRESS           _UINT32_(0x40000c80)                          /* TIMER32_0 Base Address */
#define TIMER32_1_BASE_ADDRESS           _UINT32_(0x40000ca0)                          /* TIMER32_1 Base Address */
#define CCT_BASE_ADDRESS                 _UINT32_(0x40001000)                          /* CCT Base Address */
#define HTM0_BASE_ADDRESS                _UINT32_(0x40009800)                          /* HTM0 Base Address */
#define HTM1_BASE_ADDRESS                _UINT32_(0x40009820)                          /* HTM1 Base Address */
#define RTOS_BASE_ADDRESS                _UINT32_(0x40007400)                          /* RTOS Base Address */
#define RTC_BASE_ADDRESS                 _UINT32_(0x400f5000)                          /* RTC Base Address */
#define WEEK_BASE_ADDRESS                _UINT32_(0x4000ac80)                          /* WEEK Base Address */
#define TACH0_BASE_ADDRESS               _UINT32_(0x40006000)                          /* TACH0 Base Address */
#define TACH2_BASE_ADDRESS               _UINT32_(0x40006020)                          /* TACH2 Base Address */
#define PWM0_BASE_ADDRESS                _UINT32_(0x40005800)                          /* PWM0 Base Address */
#define PWM1_BASE_ADDRESS                _UINT32_(0x40005810)                          /* PWM1 Base Address */
#define PWM4_BASE_ADDRESS                _UINT32_(0x40005840)                          /* PWM4 Base Address */
#define PWM6_BASE_ADDRESS                _UINT32_(0x40005860)                          /* PWM6 Base Address */
#define PWM7_BASE_ADDRESS                _UINT32_(0x40005870)                          /* PWM7 Base Address */
#define ADC_BASE_ADDRESS                 _UINT32_(0x40007c00)                          /* ADC Base Address */
#define LED0_BASE_ADDRESS                _UINT32_(0x4000b800)                          /* LED0 Base Address */
#define SMB0_BASE_ADDRESS                _UINT32_(0x40004000)                          /* SMB0 Base Address */
#define SMB1_BASE_ADDRESS                _UINT32_(0x40004400)                          /* SMB1 Base Address */
#define SMB2_BASE_ADDRESS                _UINT32_(0x40004800)                          /* SMB2 Base Address */
#define SMB3_BASE_ADDRESS                _UINT32_(0x40004c00)                          /* SMB3 Base Address */
#define SMB4_BASE_ADDRESS                _UINT32_(0x40005000)                          /* SMB4 Base Address */
#define I2C0_BASE_ADDRESS                _UINT32_(0x40005100)                          /* I2C0 Base Address */
#define I2C1_BASE_ADDRESS                _UINT32_(0x40005200)                          /* I2C1 Base Address */
#define I2C2_BASE_ADDRESS                _UINT32_(0x40005300)                          /* I2C2 Base Address */
#define QMSPI_BASE_ADDRESS               _UINT32_(0x40070000)                          /* QMSPI Base Address */
#define PS2_0_BASE_ADDRESS               _UINT32_(0x40009000)                          /* PS2_0 Base Address */
#define TFDP_BASE_ADDRESS                _UINT32_(0x40008c00)                          /* TFDP Base Address */
#define PORT_80_DEBUG0_BASE_ADDRESS      _UINT32_(0x400f8000)                          /* PORT_80_DEBUG0 Base Address */
#define PORT_80_DEBUG1_BASE_ADDRESS      _UINT32_(0x400f8400)                          /* PORT_80_DEBUG1 Base Address */
#define VCI_BASE_ADDRESS                 _UINT32_(0x4000ae00)                          /* VCI Base Address */
#define VBAT_RAM_BASE_ADDRESS            _UINT32_(0x4000a800)                          /* VBAT_RAM Base Address */
#define VBAT_BASE_ADDRESS                _UINT32_(0x4000a400)                          /* VBAT Base Address */
#define EC_REG_BANK_BASE_ADDRESS         _UINT32_(0x4000fc00)                          /* EC_REG_BANK Base Address */
#define HDMI_CEC_BASE_ADDRESS            _UINT32_(0x40006800)                          /* HDMI_CEC Base Address */
#define SGPIO0_BASE_ADDRESS              _UINT32_(0x4000a000)                          /* SGPIO0 Base Address */
#define SGPIO1_BASE_ADDRESS              _UINT32_(0x4000a100)                          /* SGPIO1 Base Address */
#define OTP_BASE_ADDRESS                 _UINT32_(0x40082000)                          /* OTP Base Address */
#define SPI_SLAVE_BASE_ADDRESS           _UINT32_(0x40007000)                          /* SPI_SLAVE Base Address */

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR PIC32CX0525SG12084                                   */
/* ************************************************************************** */
// Note: Changed for MikroE implementation.
//#include "pio/pic32cx0525sg12084.h"

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR PIC32CX0525SG12084                        */
/* ************************************************************************** */
#define CODE_SRAM_SIZE                 _UINT32_(0x00038000)    /*  224kB Memory segment type: ram */
#define DATA_SRAM_SIZE                 _UINT32_(0x00008000)    /*   32kB Memory segment type: ram */
#define DATA_SRAM_ALIAS_SIZE           _UINT32_(0x00008000)    /*   32kB Memory segment type: ram */
#define EC_DEVICE_REGISTERS_SIZE       _UINT32_(0x00080000)    /*  512kB Memory segment type: io */
#define GPIO_REGISTERS_SIZE            _UINT32_(0x00010000)    /*   64kB Memory segment type: io */
#define HOST_DEVICE_REGISTERS_SIZE     _UINT32_(0x00100000)    /* 1024kB Memory segment type: io */
#define CRYPTO_RAM_SIZE                _UINT32_(0x00006000)    /*   24kB Memory segment type: ram */
#define SCS_SIZE                       _UINT32_(0x00001000)    /*    4kB Memory segment type: io */
#define EXTERNAL_FLASH_SIZE            _UINT32_(0x08000000)    /* 131072kB Memory segment type: flash */

#define CODE_SRAM_ADDR                 _UINT32_(0x000e0000)    /* CODE_SRAM base address (type: ram)*/
#define DATA_SRAM_ADDR                 _UINT32_(0x00118000)    /* DATA_SRAM base address (type: ram)*/
#define DATA_SRAM_ALIAS_ADDR           _UINT32_(0x20000000)    /* DATA_SRAM_ALIAS base address (type: ram)*/
#define EC_DEVICE_REGISTERS_ADDR       _UINT32_(0x40000000)    /* EC_DEVICE_REGISTERS base address (type: io)*/
#define GPIO_REGISTERS_ADDR            _UINT32_(0x40080000)    /* GPIO_REGISTERS base address (type: io)*/
#define HOST_DEVICE_REGISTERS_ADDR     _UINT32_(0x400f0000)    /* HOST_DEVICE_REGISTERS base address (type: io)*/
#define CRYPTO_RAM_ADDR                _UINT32_(0x40100000)    /* CRYPTO_RAM base address (type: ram)*/
#define SCS_ADDR                       _UINT32_(0xe000e000)    /* SCS base address (type: io)*/
#define EXTERNAL_FLASH_ADDR            _UINT32_(0x50000000)    /* EXTERNAL_FLASH base address (type: flash)*/

/* ************************************************************************** */
/*   DEVICE SIGNATURES FOR PIC32CX0525SG12084                                 */
/* ************************************************************************** */

/* ************************************************************************** */
/*   ELECTRICAL DEFINITIONS FOR PIC32CX0525SG12084                            */
/* ************************************************************************** */



#ifdef __cplusplus
}
#endif

#endif /* _PIC32CX0525SG12084_H_ */

