/*
 * GCC startup file for PIC32CX2051BZ62132
 *
 * Copyright (c) 2025 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

// Note: Changed for MikroE implementation.
// #include "pic32cx2051bz62132.h"
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
extern void __attribute__((weak,long_call)) _on_exit(void);

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
void MemoryManagement_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void BusFault_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UsageFault_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SVCall_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DebugMonitor_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PendSV_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SysTick_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Peripherals handlers */
void RTC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FREQM_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVM_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CHANGE_NOTICE_A_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CHANGE_NOTICE_B_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CHANGE_NOTICE_C_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CHANGE_NOTICE_D_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CHANGE_NOTICE_E_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMAC_0_3_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMAC_4_15_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_0_3_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_4_11_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PAC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RAMECC_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM2_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM3_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM4_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM5_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM6_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TCC2_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC4_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC5_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC6_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC7_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC8_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC9_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADCHS_IRQ_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADCHS_FAULT_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADCHS_FCC_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADCHS_BGVR_RDY_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AC_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CRYPTO_0_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CRYPTO_1_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void QSPI_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ZB_INT0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void BT_INT0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void BT_INT1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ARBITER_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CLKI_WAKEUP_NMI_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CVD_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CRYPTO_2_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void QEI_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CAN0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CAN1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ETH_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USB_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PLL_LOCK_BOOT_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PLL_LOCK_USER_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void BT_LC_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Exception Table */
__attribute__ ((section(".vectors")))
const DeviceVectors exception_table = {

        /* Configure Initial Stack Pointer, using linker-generated symbols */
        .pvStack = (void*) (&_estack),



        .pfnReset_Handler              = (void*) Reset_Handler,
        .pfnNonMaskableInt_Handler     = (void*) NonMaskableInt_Handler,
        .pfnHardFault_Handler          = (void*) HardFault_Handler,
        .pfnMemoryManagement_Handler   = (void*) MemoryManagement_Handler,
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
        .pfnRTC_Handler                = (void*) RTC_Handler,    /* 0  Real-Time Counter */
        .pfnEIC_Handler                = (void*) EIC_Handler,    /* 1  External Interrupt Controller */
        .pfnFREQM_Handler              = (void*) FREQM_Handler,  /* 2  Frequency Meter */
        .pfnNVM_Handler                = (void*) NVM_Handler,    /* 3  flash controller */
        .pfnCHANGE_NOTICE_A_Handler    = (void*) CHANGE_NOTICE_A_Handler, /* 4  GPIO */
        .pfnCHANGE_NOTICE_B_Handler    = (void*) CHANGE_NOTICE_B_Handler, /* 5  GPIO */
        .pfnCHANGE_NOTICE_C_Handler    = (void*) CHANGE_NOTICE_C_Handler, /* 6  GPIO */
        .pfnCHANGE_NOTICE_D_Handler    = (void*) CHANGE_NOTICE_D_Handler, /* 7  GPIO */
        .pfnCHANGE_NOTICE_E_Handler    = (void*) CHANGE_NOTICE_E_Handler, /* 8  GPIO */
        .pfnDMAC_0_3_Handler           = (void*) DMAC_0_3_Handler, /* 9  Direct Memory Access Controller */
        .pfnDMAC_4_15_Handler          = (void*) DMAC_4_15_Handler, /* 10 Direct Memory Access Controller */
        .pfnEVSYS_0_3_Handler          = (void*) EVSYS_0_3_Handler, /* 11 Event System Interface */
        .pfnEVSYS_4_11_Handler         = (void*) EVSYS_4_11_Handler, /* 12 Event System Interface */
        .pfnPAC_Handler                = (void*) PAC_Handler,    /* 13 Peripheral Access Controller */
        .pfnRAMECC_Handler             = (void*) RAMECC_Handler, /* 14 RAM ECC */
        .pfnSERCOM0_Handler            = (void*) SERCOM0_Handler, /* 15 Serial Communication Interface */
        .pfnSERCOM1_Handler            = (void*) SERCOM1_Handler, /* 16 Serial Communication Interface */
        .pfnSERCOM2_Handler            = (void*) SERCOM2_Handler, /* 17 Serial Communication Interface */
        .pfnSERCOM3_Handler            = (void*) SERCOM3_Handler, /* 18 Serial Communication Interface */
        .pfnSERCOM4_Handler            = (void*) SERCOM4_Handler, /* 19 Serial Communication Interface */
        .pfnSERCOM5_Handler            = (void*) SERCOM5_Handler, /* 20 Serial Communication Interface */
        .pfnSERCOM6_Handler            = (void*) SERCOM6_Handler, /* 21 Serial Communication Interface */
        .pfnTCC0_Handler               = (void*) TCC0_Handler,   /* 22 Timer Counter Control */
        .pfnTCC1_Handler               = (void*) TCC1_Handler,   /* 23 Timer Counter Control */
        .pfnTCC2_Handler               = (void*) TCC2_Handler,   /* 24 Timer Counter Control */
        .pfnTC0_Handler                = (void*) TC0_Handler,    /* 25 Basic Timer Counter */
        .pfnTC1_Handler                = (void*) TC1_Handler,    /* 26 Basic Timer Counter */
        .pfnTC2_Handler                = (void*) TC2_Handler,    /* 27 Basic Timer Counter */
        .pfnTC3_Handler                = (void*) TC3_Handler,    /* 28 Basic Timer Counter */
        .pfnTC4_Handler                = (void*) TC4_Handler,    /* 29 Basic Timer Counter */
        .pfnTC5_Handler                = (void*) TC5_Handler,    /* 30 Basic Timer Counter */
        .pfnTC6_Handler                = (void*) TC6_Handler,    /* 31 Basic Timer Counter */
        .pfnTC7_Handler                = (void*) TC7_Handler,    /* 32 Basic Timer Counter */
        .pfnTC8_Handler                = (void*) TC8_Handler,    /* 33 Basic Timer Counter */
        .pfnTC9_Handler                = (void*) TC9_Handler,    /* 34 Basic Timer Counter */
        .pfnADCHS_IRQ_Handler          = (void*) ADCHS_IRQ_Handler, /* 35 12-bit Analog to Digital Converter */
        .pfnADCHS_FAULT_Handler        = (void*) ADCHS_FAULT_Handler, /* 36 12-bit Analog to Digital Converter */
        .pfnADCHS_FCC_Handler          = (void*) ADCHS_FCC_Handler, /* 37 12-bit Analog to Digital Converter */
        .pfnADCHS_BGVR_RDY_Handler     = (void*) ADCHS_BGVR_RDY_Handler, /* 38 12-bit Analog to Digital Converter */
        .pfnAC_Handler                 = (void*) AC_Handler,     /* 39 Analog Comparators */
        .pfnCRYPTO_0_Handler           = (void*) CRYPTO_0_Handler, /* 40  */
        .pfnCRYPTO_1_Handler           = (void*) CRYPTO_1_Handler, /* 41  */
        .pfnQSPI_Handler               = (void*) QSPI_Handler,   /* 42 Quad SPI interface */
        .pfnZB_INT0_Handler            = (void*) ZB_INT0_Handler, /* 43 ZigBee MAC DOS */
        .pfnBT_INT0_Handler            = (void*) BT_INT0_Handler, /* 44 BLE */
        .pfnBT_INT1_Handler            = (void*) BT_INT1_Handler, /* 45 BLE */
        .pfnARBITER_Handler            = (void*) ARBITER_Handler, /* 46 Radio Arbiter */
        .pfnCLKI_WAKEUP_NMI_Handler    = (void*) CLKI_WAKEUP_NMI_Handler, /* 47 BLE */
        .pfnCVD_Handler                = (void*) CVD_Handler,    /* 48 Hardware CVD Controller Macro */
        .pfnCRYPTO_2_Handler           = (void*) CRYPTO_2_Handler, /* 49  */
        .pfnQEI_Handler                = (void*) QEI_Handler,    /* 50  */
        .pfnCAN0_Handler               = (void*) CAN0_Handler,   /* 51 Control Area Network */
        .pfnCAN1_Handler               = (void*) CAN1_Handler,   /* 52 Control Area Network */
        .pfnETH_Handler                = (void*) ETH_Handler,    /* 53 Ethernet Controller */
        .pfnUSB_Handler                = (void*) USB_Handler,    /* 54 USB */
        .pfnPLL_LOCK_BOOT_Handler      = (void*) PLL_LOCK_BOOT_Handler, /* 55 BT ZB Subsystem */
        .pfnPLL_LOCK_USER_Handler      = (void*) PLL_LOCK_USER_Handler, /* 56 BT ZB Subsystem */
        .pfnBT_LC_Handler              = (void*) BT_LC_Handler   /* 57 BLE */
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

        /* Call the optional application-provided _on_exit() function. */
        if (_on_exit) {
                _on_exit();
        } else {
                /* Infinite loop */
                while (1);
        }
}

/**
 * \brief Default interrupt handler for unused IRQs.
 */
void Dummy_Handler(void)
{
        while (1) {
        }
}
