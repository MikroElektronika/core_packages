/*
 * GCC startup file for PIC32CX0525SG12084
 *
 * Copyright (c) 2023 Microchip Technology Inc.  and its subsidiaries.
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

// Note: Changed for MikroE implementation.
// #include "pic32cx0525sg12084.h"
#include "mcu.h" // Note: Added for MikroE implementation.

/* Initialize segments */
extern uint32_t _sfixed;
extern uint32_t _efixed;
extern uint32_t _etext;
extern uint32_t _srelocate;
extern uint32_t _erelocate;
extern uint32_t _szero;
extern uint32_t _ezero;
extern uint32_t _sstack;
extern uint32_t _estack;

/* Optional application-provided functions */
extern void __attribute__((weak,long_call)) _on_reset(void);
extern void __attribute__((weak,long_call)) _on_bootstrap(void);

/** \cond DOXYGEN_SHOULD_SKIP_THIS */
int main(void);
/** \endcond */

void __libc_init_array(void);

/* Reset handler */
void Reset_Handler(void);

/* Default empty handler */
void Dummy_Handler(void);

/* Cortex-M4 core handlers */
void NonMaskableInt_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HardFault_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void BusFault_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UsageFault_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SVCall_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DebugMonitor_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PendSV_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SysTick_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Peripherals handlers */
void GIRQ08_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GIRQ09_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GIRQ10_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GIRQ11_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GIRQ12_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GIRQ13_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GIRQ14_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GIRQ15_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GIRQ16_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GIRQ18_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GIRQ20_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GIRQ21_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GIRQ23_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GIRQ26_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void I2CSMB0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void I2CSMB1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void I2CSMB2_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void I2CSMB3_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH00_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH01_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH02_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH03_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH04_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH05_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH06_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH07_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH08_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH09_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH10_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CH11_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART0_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART1_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EMI0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EMI1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART2_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AEC0_IBF_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AEC0_OBE_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AEC1_IBF_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AEC1_OBE_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AEC2_IBF_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AEC2_OBE_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AEC3_IBF_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AEC3_OBE_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void APM1_CTL_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void APM1_EN_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void APM1_STS_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MBOX_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void P80CAP0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void P80CAP1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PKE_ERR_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PKE_END_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RNG_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AES_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HASH_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TACH0_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TACH2_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC_SNGL_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC_RPT_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void LED0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SPISLV_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void QMSPI_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PS2_0_ACT_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TMR_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HTMR0_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HTMR1_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void WK_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void WKSUB_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void WKSEC_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void WKSUBSEC_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SYSPWR_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTC_ALARM_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void VCI_OVRD_IN_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void VCI_IN0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void VCI_IN1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void VCI_IN2_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void VCI_IN3_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PS2_0A_WAKE_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TIMER16_0_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TIMER16_1_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TIMER32_0_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TIMER32_1_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CCT_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CCT_CAP0_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CCT_CAP1_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CCT_CAP2_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CCT_CAP3_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CCT_CAP4_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CCT_CAP5_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CCT_CMP0_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CCT_CMP1_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void I2CSMB4_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CEC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SGPIO0_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SGPIO1_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void I2C0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void I2C1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void I2C2_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void WDT_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Exception Table */
__attribute__ ((section(".vectors")))
const DeviceVectors exception_table = {

        /* Configure Initial Stack Pointer, using linker-generated symbols */
        .pvStack = (void*) (&_estack),

        .pfnReset_Handler              = (void*) Reset_Handler,
        .pfnNonMaskableInt_Handler     = (void*) NonMaskableInt_Handler,
        .pfnHardFault_Handler          = (void*) HardFault_Handler,
        .pvReservedC12                 = (void*) (0UL), /* Reserved */
        .pfnBusFault_Handler           = (void*) BusFault_Handler,
        .pfnUsageFault_Handler         = (void*) UsageFault_Handler,
        .pvReservedC9                  = (void*) (0UL), /* Reserved */
        .pvReservedC8                  = (void*) (0UL), /* Reserved */
        .pvReservedC7                  = (void*) (0UL), /* Reserved */
        .pvReservedC6                  = (void*) (0UL), /* Reserved */
        .pfnSVCall_Handler             = (void*) SVCall_Handler,
        .pfnDebugMonitor_Handler       = (void*) DebugMonitor_Handler,
        .pvReservedC3                  = (void*) (0UL), /* Reserved */
        .pfnPendSV_Handler             = (void*) PendSV_Handler,
        .pfnSysTick_Handler            = (void*) SysTick_Handler,

        /* Configurable interrupts */
        .pfnGIRQ08_Handler             = (void*) GIRQ08_Handler, /* 0  GPIO Pin Control Registers */
        .pfnGIRQ09_Handler             = (void*) GIRQ09_Handler, /* 1  GPIO Pin Control Registers */
        .pfnGIRQ10_Handler             = (void*) GIRQ10_Handler, /* 2  GPIO Pin Control Registers */
        .pfnGIRQ11_Handler             = (void*) GIRQ11_Handler, /* 3  GPIO Pin Control Registers */
        .pfnGIRQ12_Handler             = (void*) GIRQ12_Handler, /* 4  GPIO Pin Control Registers */
        .pfnGIRQ13_Handler             = (void*) GIRQ13_Handler, /* 5  The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        .pfnGIRQ14_Handler             = (void*) GIRQ14_Handler, /* 6  DMA Channel 00 Registers */
        .pfnGIRQ15_Handler             = (void*) GIRQ15_Handler, /* 7  The 16550 UART is a full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
        .pfnGIRQ16_Handler             = (void*) GIRQ16_Handler, /* 8  Crypto block interrupt */
        .pvReserved9                   = (void*) (0UL),          /* 9  Reserved */
        .pfnGIRQ18_Handler             = (void*) GIRQ18_Handler, /* 10 The QMSPI may be used to communicate with various peripheral devices that use a Serial Peripheral Interface */
        .pvReserved11                  = (void*) (0UL),          /* 11 Reserved */
        .pfnGIRQ20_Handler             = (void*) GIRQ20_Handler, /* 12 OTP Programming registers.\n */
        .pfnGIRQ21_Handler             = (void*) GIRQ21_Handler, /* 13 The function of the Watchdog Timer is to provide a mechanism to detect if the internal embedded controller has failed. */
        .pfnGIRQ23_Handler             = (void*) GIRQ23_Handler, /* 14 This 16-bit timer block offers a simple mechanism for firmware to maintain a time base */
        .pvReserved15                  = (void*) (0UL),          /* 15 Reserved */
        .pvReserved16                  = (void*) (0UL),          /* 16 Reserved */
        .pfnGIRQ26_Handler             = (void*) GIRQ26_Handler, /* 17 GPIO Pin Control Registers */
        .pvReserved18                  = (void*) (0UL),          /* 18 Reserved */
        .pvReserved19                  = (void*) (0UL),          /* 19 Reserved */
        .pfnI2CSMB0_Handler            = (void*) I2CSMB0_Handler, /* 20 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        .pfnI2CSMB1_Handler            = (void*) I2CSMB1_Handler, /* 21 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        .pfnI2CSMB2_Handler            = (void*) I2CSMB2_Handler, /* 22 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        .pfnI2CSMB3_Handler            = (void*) I2CSMB3_Handler, /* 23 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        .pfnDMA_CH00_Handler           = (void*) DMA_CH00_Handler, /* 24 DMA Channel 00 Registers */
        .pfnDMA_CH01_Handler           = (void*) DMA_CH01_Handler, /* 25 DMA Channel 01 Registers */
        .pfnDMA_CH02_Handler           = (void*) DMA_CH02_Handler, /* 26 DMA Channel 02 Registers */
        .pfnDMA_CH03_Handler           = (void*) DMA_CH03_Handler, /* 27 DMA Channel 02 Registers */
        .pfnDMA_CH04_Handler           = (void*) DMA_CH04_Handler, /* 28 DMA Channel 02 Registers */
        .pfnDMA_CH05_Handler           = (void*) DMA_CH05_Handler, /* 29 DMA Channel 02 Registers */
        .pfnDMA_CH06_Handler           = (void*) DMA_CH06_Handler, /* 30 DMA Channel 02 Registers */
        .pfnDMA_CH07_Handler           = (void*) DMA_CH07_Handler, /* 31 DMA Channel 02 Registers */
        .pfnDMA_CH08_Handler           = (void*) DMA_CH08_Handler, /* 32 DMA Channel 02 Registers */
        .pfnDMA_CH09_Handler           = (void*) DMA_CH09_Handler, /* 33 DMA Channel 02 Registers */
        .pfnDMA_CH10_Handler           = (void*) DMA_CH10_Handler, /* 34 DMA Channel 02 Registers */
        .pfnDMA_CH11_Handler           = (void*) DMA_CH11_Handler, /* 35 DMA Channel 02 Registers */
        .pvReserved36                  = (void*) (0UL),          /* 36 Reserved */
        .pvReserved37                  = (void*) (0UL),          /* 37 Reserved */
        .pvReserved38                  = (void*) (0UL),          /* 38 Reserved */
        .pvReserved39                  = (void*) (0UL),          /* 39 Reserved */
        .pfnUART0_Handler              = (void*) UART0_Handler,  /* 40 The 16550 UART is a full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
        .pfnUART1_Handler              = (void*) UART1_Handler,  /* 41 The 16550 UART is a full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
        .pfnEMI0_Handler               = (void*) EMI0_Handler,   /* 42 The EMI provides a communication between system host and Embedded Controller */
        .pfnEMI1_Handler               = (void*) EMI1_Handler,   /* 43 The EMI provides a communication between system host and Embedded Controller */
        .pfnUART2_Handler              = (void*) UART2_Handler,  /* 44 The 16550 UART is a full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
        .pfnAEC0_IBF_Handler           = (void*) AEC0_IBF_Handler, /* 45 The ACPI-ECI provides a four byte full duplex data interface. */
        .pfnAEC0_OBE_Handler           = (void*) AEC0_OBE_Handler, /* 46 The ACPI-ECI provides a four byte full duplex data interface. */
        .pfnAEC1_IBF_Handler           = (void*) AEC1_IBF_Handler, /* 47 The ACPI-ECI provides a four byte full duplex data interface. */
        .pfnAEC1_OBE_Handler           = (void*) AEC1_OBE_Handler, /* 48 The ACPI-ECI provides a four byte full duplex data interface. */
        .pfnAEC2_IBF_Handler           = (void*) AEC2_IBF_Handler, /* 49 The ACPI-ECI provides a four byte full duplex data interface. */
        .pfnAEC2_OBE_Handler           = (void*) AEC2_OBE_Handler, /* 50 The ACPI-ECI provides a four byte full duplex data interface. */
        .pfnAEC3_IBF_Handler           = (void*) AEC3_IBF_Handler, /* 51 The ACPI-ECI provides a four byte full duplex data interface. */
        .pfnAEC3_OBE_Handler           = (void*) AEC3_OBE_Handler, /* 52 The ACPI-ECI provides a four byte full duplex data interface. */
        .pvReserved53                  = (void*) (0UL),          /* 53 Reserved */
        .pvReserved54                  = (void*) (0UL),          /* 54 Reserved */
        .pfnAPM1_CTL_Handler           = (void*) APM1_CTL_Handler, /* 55 These features comply with the ACPI Specification through a combination of hardware and EC software */
        .pfnAPM1_EN_Handler            = (void*) APM1_EN_Handler, /* 56 These features comply with the ACPI Specification through a combination of hardware and EC software */
        .pfnAPM1_STS_Handler           = (void*) APM1_STS_Handler, /* 57 These features comply with the ACPI Specification through a combination of hardware and EC software */
        .pvReserved58                  = (void*) (0UL),          /* 58 Reserved */
        .pvReserved59                  = (void*) (0UL),          /* 59 Reserved */
        .pfnMBOX_Handler               = (void*) MBOX_Handler,   /* 60 The Mailbox provides a standard run-time mechanism for the host to communicate with the Embedded Controller (EC). */
        .pvReserved61                  = (void*) (0UL),          /* 61 Reserved */
        .pfnP80CAP0_Handler            = (void*) P80CAP0_Handler, /* 62 Diagnostic data is written by the Host Interface to the Port 80 BIOS Debug Port */
        .pfnP80CAP1_Handler            = (void*) P80CAP1_Handler, /* 63 Diagnostic data is written by the Host Interface to the Port 80 BIOS Debug Port */
        .pvReserved64                  = (void*) (0UL),          /* 64 Reserved */
        .pfnPKE_ERR_Handler            = (void*) PKE_ERR_Handler, /* 65 Crypto block interrupt */
        .pfnPKE_END_Handler            = (void*) PKE_END_Handler, /* 66 Crypto block interrupt */
        .pfnRNG_Handler                = (void*) RNG_Handler,    /* 67 Crypto block interrupt */
        .pfnAES_Handler                = (void*) AES_Handler,    /* 68 Crypto block interrupt */
        .pfnHASH_Handler               = (void*) HASH_Handler,   /* 69 Crypto block interrupt */
        .pvReserved70                  = (void*) (0UL),          /* 70 Reserved */
        .pfnTACH0_Handler              = (void*) TACH0_Handler,  /* 71 This block monitors TACH output signals from various types of fans, and determines their speed. */
        .pvReserved72                  = (void*) (0UL),          /* 72 Reserved */
        .pfnTACH2_Handler              = (void*) TACH2_Handler,  /* 73 This block monitors TACH output signals from various types of fans, and determines their speed. */
        .pvReserved74                  = (void*) (0UL),          /* 74 Reserved */
        .pvReserved75                  = (void*) (0UL),          /* 75 Reserved */
        .pvReserved76                  = (void*) (0UL),          /* 76 Reserved */
        .pvReserved77                  = (void*) (0UL),          /* 77 Reserved */
        .pfnADC_SNGL_Handler           = (void*) ADC_SNGL_Handler, /* 78 This block is designed to convert external analog voltage readings into digital values. */
        .pfnADC_RPT_Handler            = (void*) ADC_RPT_Handler, /* 79 This block is designed to convert external analog voltage readings into digital values. */
        .pvReserved80                  = (void*) (0UL),          /* 80 Reserved */
        .pvReserved81                  = (void*) (0UL),          /* 81 Reserved */
        .pvReserved82                  = (void*) (0UL),          /* 82 Reserved */
        .pfnLED0_Handler               = (void*) LED0_Handler,   /* 83 The LED is implemented using a PWM that can be driven either by the 48 MHz clock or by a 32.768 KHz clock input. */
        .pvReserved84                  = (void*) (0UL),          /* 84 Reserved */
        .pvReserved85                  = (void*) (0UL),          /* 85 Reserved */
        .pvReserved86                  = (void*) (0UL),          /* 86 Reserved */
        .pvReserved87                  = (void*) (0UL),          /* 87 Reserved */
        .pvReserved88                  = (void*) (0UL),          /* 88 Reserved */
        .pvReserved89                  = (void*) (0UL),          /* 89 Reserved */
        .pfnSPISLV_Handler             = (void*) SPISLV_Handler, /* 90 SPI Slave Register. */
        .pfnQMSPI_Handler              = (void*) QMSPI_Handler,  /* 91 The QMSPI may be used to communicate with various peripheral devices that use a Serial Peripheral Interface */
        .pvReserved92                  = (void*) (0UL),          /* 92 Reserved */
        .pvReserved93                  = (void*) (0UL),          /* 93 Reserved */
        .pvReserved94                  = (void*) (0UL),          /* 94 Reserved */
        .pvReserved95                  = (void*) (0UL),          /* 95 Reserved */
        .pvReserved96                  = (void*) (0UL),          /* 96 Reserved */
        .pvReserved97                  = (void*) (0UL),          /* 97 Reserved */
        .pvReserved98                  = (void*) (0UL),          /* 98 Reserved */
        .pvReserved99                  = (void*) (0UL),          /* 99 Reserved */
        .pfnPS2_0_ACT_Handler          = (void*) PS2_0_ACT_Handler, /* 100 The four PS/2 Ports implementation eliminates the need to bit bang I/O ports to generate PS/2 traffic */
        .pvReserved101                 = (void*) (0UL),          /* 101 Reserved */
        .pvReserved102                 = (void*) (0UL),          /* 102 Reserved */
        .pvReserved103                 = (void*) (0UL),          /* 103 Reserved */
        .pvReserved104                 = (void*) (0UL),          /* 104 Reserved */
        .pvReserved105                 = (void*) (0UL),          /* 105 Reserved */
        .pvReserved106                 = (void*) (0UL),          /* 106 Reserved */
        .pvReserved107                 = (void*) (0UL),          /* 107 Reserved */
        .pvReserved108                 = (void*) (0UL),          /* 108 Reserved */
        .pvReserved109                 = (void*) (0UL),          /* 109 Reserved */
        .pvReserved110                 = (void*) (0UL),          /* 110 Reserved */
        .pfnTMR_Handler                = (void*) TMR_Handler,    /* 111 RTOS is a 32-bit timer designed to operate on the 32kHz oscillator which is available during all chip sleep states. */
        .pfnHTMR0_Handler              = (void*) HTMR0_Handler,  /* 112 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode */
        .pfnHTMR1_Handler              = (void*) HTMR1_Handler,  /* 113 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode */
        .pfnWK_Handler                 = (void*) WK_Handler,     /* 114 The Week Timer and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state */
        .pfnWKSUB_Handler              = (void*) WKSUB_Handler,  /* 115 The Week Timer and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state */
        .pfnWKSEC_Handler              = (void*) WKSEC_Handler,  /* 116 The Week Timer and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state */
        .pfnWKSUBSEC_Handler           = (void*) WKSUBSEC_Handler, /* 117 The Week Timer and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state */
        .pfnSYSPWR_Handler             = (void*) SYSPWR_Handler, /* 118 The Week Timer and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state */
        .pfnRTC_Handler                = (void*) RTC_Handler,    /* 119 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled */
        .pfnRTC_ALARM_Handler          = (void*) RTC_ALARM_Handler, /* 120 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled */
        .pfnVCI_OVRD_IN_Handler        = (void*) VCI_OVRD_IN_Handler, /* 121 The VBAT-Powered Control Interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        .pfnVCI_IN0_Handler            = (void*) VCI_IN0_Handler, /* 122 The VBAT-Powered Control Interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        .pfnVCI_IN1_Handler            = (void*) VCI_IN1_Handler, /* 123 The VBAT-Powered Control Interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        .pfnVCI_IN2_Handler            = (void*) VCI_IN2_Handler, /* 124 The VBAT-Powered Control Interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        .pfnVCI_IN3_Handler            = (void*) VCI_IN3_Handler, /* 125 The VBAT-Powered Control Interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        .pvReserved126                 = (void*) (0UL),          /* 126 Reserved */
        .pvReserved127                 = (void*) (0UL),          /* 127 Reserved */
        .pvReserved128                 = (void*) (0UL),          /* 128 Reserved */
        .pfnPS2_0A_WAKE_Handler        = (void*) PS2_0A_WAKE_Handler, /* 129 The four PS/2 Ports implementation eliminates the need to bit bang I/O ports to generate PS/2 traffic */
        .pvReserved130                 = (void*) (0UL),          /* 130 Reserved */
        .pvReserved131                 = (void*) (0UL),          /* 131 Reserved */
        .pvReserved132                 = (void*) (0UL),          /* 132 Reserved */
        .pvReserved133                 = (void*) (0UL),          /* 133 Reserved */
        .pvReserved134                 = (void*) (0UL),          /* 134 Reserved */
        .pvReserved135                 = (void*) (0UL),          /* 135 Reserved */
        .pfnTIMER16_0_Handler          = (void*) TIMER16_0_Handler, /* 136 This 16-bit timer block offers a simple mechanism for firmware to maintain a time base */
        .pfnTIMER16_1_Handler          = (void*) TIMER16_1_Handler, /* 137 This 16-bit timer block offers a simple mechanism for firmware to maintain a time base */
        .pvReserved138                 = (void*) (0UL),          /* 138 Reserved */
        .pvReserved139                 = (void*) (0UL),          /* 139 Reserved */
        .pfnTIMER32_0_Handler          = (void*) TIMER32_0_Handler, /* 140 This 32-bit timer block offers a simple mechanism for firmware to maintain a time base */
        .pfnTIMER32_1_Handler          = (void*) TIMER32_1_Handler, /* 141 This 32-bit timer block offers a simple mechanism for firmware to maintain a time base */
        .pvReserved142                 = (void*) (0UL),          /* 142 Reserved */
        .pvReserved143                 = (void*) (0UL),          /* 143 Reserved */
        .pvReserved144                 = (void*) (0UL),          /* 144 Reserved */
        .pvReserved145                 = (void*) (0UL),          /* 145 Reserved */
        .pfnCCT_Handler                = (void*) CCT_Handler,    /* 146 This is a 16-bit auto-reloading timer/counter. */
        .pfnCCT_CAP0_Handler           = (void*) CCT_CAP0_Handler, /* 147 This is a 16-bit auto-reloading timer/counter. */
        .pfnCCT_CAP1_Handler           = (void*) CCT_CAP1_Handler, /* 148 This is a 16-bit auto-reloading timer/counter. */
        .pfnCCT_CAP2_Handler           = (void*) CCT_CAP2_Handler, /* 149 This is a 16-bit auto-reloading timer/counter. */
        .pfnCCT_CAP3_Handler           = (void*) CCT_CAP3_Handler, /* 150 This is a 16-bit auto-reloading timer/counter. */
        .pfnCCT_CAP4_Handler           = (void*) CCT_CAP4_Handler, /* 151 This is a 16-bit auto-reloading timer/counter. */
        .pfnCCT_CAP5_Handler           = (void*) CCT_CAP5_Handler, /* 152 This is a 16-bit auto-reloading timer/counter. */
        .pfnCCT_CMP0_Handler           = (void*) CCT_CMP0_Handler, /* 153 This is a 16-bit auto-reloading timer/counter. */
        .pfnCCT_CMP1_Handler           = (void*) CCT_CMP1_Handler, /* 154 This is a 16-bit auto-reloading timer/counter. */
        .pvReserved155                 = (void*) (0UL),          /* 155 Reserved */
        .pvReserved156                 = (void*) (0UL),          /* 156 Reserved */
        .pvReserved157                 = (void*) (0UL),          /* 157 Reserved */
        .pfnI2CSMB4_Handler            = (void*) I2CSMB4_Handler, /* 158 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        .pvReserved159                 = (void*) (0UL),          /* 159 Reserved */
        .pfnCEC_Handler                = (void*) CEC_Handler,    /* 160 The HDMI-CEC provides high-level control functions between all the various audiovisual products in a users environment. */
        .pfnSGPIO0_Handler             = (void*) SGPIO0_Handler, /* 161 This is Serial General Purpous Input Output block */
        .pfnSGPIO1_Handler             = (void*) SGPIO1_Handler, /* 162 This is Serial General Purpous Input Output block */
        .pvReserved163                 = (void*) (0UL),          /* 163 Reserved */
        .pvReserved164                 = (void*) (0UL),          /* 164 Reserved */
        .pvReserved165                 = (void*) (0UL),          /* 165 Reserved */
        .pvReserved166                 = (void*) (0UL),          /* 166 Reserved */
        .pvReserved167                 = (void*) (0UL),          /* 167 Reserved */
        .pfnI2C0_Handler               = (void*) I2C0_Handler,   /* 168 The I2C interface can handle standard I2C interface. */
        .pfnI2C1_Handler               = (void*) I2C1_Handler,   /* 169 The I2C interface can handle standard I2C interface. */
        .pfnI2C2_Handler               = (void*) I2C2_Handler,   /* 170 The I2C interface can handle standard I2C interface. */
        .pfnWDT_Handler                = (void*) WDT_Handler     /* 171 The function of the Watchdog Timer is to provide a mechanism to detect if the internal embedded controller has failed. */
};

/**
 * \brief This is the code that gets called on processor reset.
 * To initialize the device, and call the main() routine.
 */
void Reset_Handler(void)
{
        uint32_t *pSrc, *pDest;

        /* Initialize the relocate segment */
        pSrc = &_etext;
        pDest = &_srelocate;

        if (pSrc != pDest) {
                for (; pDest < &_erelocate;) {
                        *pDest++ = *pSrc++;
                }
        }

        /* Clear the zero segment */
        for (pDest = &_szero; pDest < &_ezero;) {
                *pDest++ = 0;
        }

        /* Set the vector table base address */
        pSrc = (uint32_t *) & _sfixed;
        SCB->VTOR = ((uint32_t) pSrc & SCB_VTOR_TBLOFF_Msk);

        /* Call the optional application-provided _on_reset() function. */
        if (_on_reset) {
                _on_reset();
        }

        /* Initialize the C library */
        __libc_init_array();

        /* Call the optional application-provided _on_bootstrap() function. */
        if (_on_bootstrap) {
                _on_bootstrap();
        }

        /* Branch to main function */
        main();

        /* Infinite loop */
        while (1);
}

/**
 * \brief Default interrupt handler for unused IRQs.
 */
void Dummy_Handler(void)
{
        while (1) {
        }
}
