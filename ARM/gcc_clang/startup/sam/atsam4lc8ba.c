/**
 * \file
 *
 * \brief gcc starttup file for SAM4L
 *
 * Copyright (c) 2016 Atmel Corporation,
 *                    a wholly owned subsidiary of Microchip Technology Inc.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

// Note: Changed for MikroE implementation.
// #include "sam4l.h"
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

/** \cond DOXYGEN_SHOULD_SKIP_THIS */
int main(void);
/** \endcond */

void __libc_init_array(void);

/* Default empty handler */
void Dummy_Handler(void);

/* Cortex-M4 core handlers */
void NMI_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HardFault_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MemManage_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void BusFault_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UsageFault_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SVC_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DebugMon_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PendSV_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SysTick_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Peripherals handlers */
void HFLASHC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PDCA_0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* PDCA_0 */
void PDCA_1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* PDCA_1 */
void PDCA_2_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* PDCA_2 */
void PDCA_3_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* PDCA_3 */
void PDCA_4_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* PDCA_4 */
void PDCA_5_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* PDCA_5 */
void PDCA_6_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* PDCA_6 */
void PDCA_7_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* PDCA_7 */
void PDCA_8_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* PDCA_8 */
void PDCA_9_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* PDCA_9 */
void PDCA_10_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* PDCA_10 */
void PDCA_11_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* PDCA_11 */
void PDCA_12_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* PDCA_12 */
void PDCA_13_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* PDCA_13 */
void PDCA_14_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* PDCA_14 */
void PDCA_15_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* PDCA_15 */
void CRCCU_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
#ifdef ID_USBC
void USBC_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
#endif
void PEVC_0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* PEVC_TR */
void PEVC_1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* PEVC_OV */
#ifdef ID_AESA
void AESA_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
#endif
void PM_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SCIF_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FREQM_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GPIO_0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* GPIO_0 */
void GPIO_1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* GPIO_1 */
void GPIO_2_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* GPIO_2 */
void GPIO_3_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* GPIO_3 */
void GPIO_4_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* GPIO_4 */
void GPIO_5_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* GPIO_5 */
void GPIO_6_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* GPIO_6 */
void GPIO_7_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* GPIO_7 */
void GPIO_8_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* GPIO_8 */
void GPIO_9_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* GPIO_9 */
void GPIO_10_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* GPIO_10 */
void GPIO_11_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* GPIO_11 */
void BPM_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void BSCIF_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AST_0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* AST_ALARM */
void AST_1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* AST_PER */
void AST_2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* AST_OVF */
void AST_3_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* AST_READY */
void AST_4_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* AST_CLKREADY */
void WDT_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_1 */
void EIC_1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_2 */
void EIC_2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_3 */
void EIC_3_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_4 */
void EIC_4_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_5 */
void EIC_5_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_6 */
void EIC_6_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_7 */
void EIC_7_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* EIC_8 */
void IISC_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SPI_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* TC00 */
void TC0_1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* TC01 */
void TC0_2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* TC02 */
void TC1_0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* TC10 */
void TC1_1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* TC11 */
void TC1_2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler"))); /* TC12 */
void TWIM0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TWIS0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TWIM1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TWIS1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USART0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USART1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USART2_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USART3_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADCIFE_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DACC_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ACIFC_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ABDACB_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TRNG_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PARC_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CATB_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TWIM2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TWIM3_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
#ifdef ID_LCDCA
void LCDCA_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
#endif

/* Exception Table */
__attribute__ ((section(".vectors")))
const DeviceVectors exception_table = {

        /* Configure Initial Stack Pointer, using linker-generated symbols */
        .pvStack                = (void*) (&_estack),

        .pfnReset_Handler       = (void*) Reset_Handler,
        .pfnNMI_Handler         = (void*) NMI_Handler,
        .pfnHardFault_Handler   = (void*) HardFault_Handler,
        .pfnMemManage_Handler   = (void*) MemManage_Handler,
        .pfnBusFault_Handler    = (void*) BusFault_Handler,
        .pfnUsageFault_Handler  = (void*) UsageFault_Handler,
        .pvReservedM9           = (void*) (0UL), /* Reserved */
        .pvReservedM8           = (void*) (0UL), /* Reserved */
        .pvReservedM7           = (void*) (0UL), /* Reserved */
        .pvReservedM6           = (void*) (0UL), /* Reserved */
        .pfnSVC_Handler         = (void*) SVC_Handler,
        .pfnDebugMon_Handler    = (void*) DebugMon_Handler,
        .pvReservedM3           = (void*) (0UL), /* Reserved */
        .pfnPendSV_Handler      = (void*) PendSV_Handler,
        .pfnSysTick_Handler     = (void*) SysTick_Handler,

        /* Configurable interrupts */
        .pfnHFLASHC_Handler     = (void*) HFLASHC_Handler,        /*  0 Flash Controller */
        .pfnPDCA_0_Handler      = (void*) PDCA_0_Handler,         /*  1 PDCA_0 */
        .pfnPDCA_1_Handler      = (void*) PDCA_1_Handler,         /*  2 PDCA_1 */
        .pfnPDCA_2_Handler      = (void*) PDCA_2_Handler,         /*  3 PDCA_2 */
        .pfnPDCA_3_Handler      = (void*) PDCA_3_Handler,         /*  4 PDCA_3 */
        .pfnPDCA_4_Handler      = (void*) PDCA_4_Handler,         /*  5 PDCA_4 */
        .pfnPDCA_5_Handler      = (void*) PDCA_5_Handler,         /*  6 PDCA_5 */
        .pfnPDCA_6_Handler      = (void*) PDCA_6_Handler,         /*  7 PDCA_6 */
        .pfnPDCA_7_Handler      = (void*) PDCA_7_Handler,         /*  8 PDCA_7 */
        .pfnPDCA_8_Handler      = (void*) PDCA_8_Handler,         /*  9 PDCA_8 */
        .pfnPDCA_9_Handler      = (void*) PDCA_9_Handler,         /* 10 PDCA_9 */
        .pfnPDCA_10_Handler     = (void*) PDCA_10_Handler,        /* 11 PDCA_10 */
        .pfnPDCA_11_Handler     = (void*) PDCA_11_Handler,        /* 12 PDCA_11 */
        .pfnPDCA_12_Handler     = (void*) PDCA_12_Handler,        /* 13 PDCA_12 */
        .pfnPDCA_13_Handler     = (void*) PDCA_13_Handler,        /* 14 PDCA_13 */
        .pfnPDCA_14_Handler     = (void*) PDCA_14_Handler,        /* 15 PDCA_14 */
        .pfnPDCA_15_Handler     = (void*) PDCA_15_Handler,        /* 16 PDCA_15 */
        .pfnCRCCU_Handler       = (void*) CRCCU_Handler,          /* 17 CRC Calculation Unit */
#ifdef ID_USBC
        .pfnUSBC_Handler        = (void*) USBC_Handler,           /* 18 USB 2.0 Interface */
#else
        .pvReserved18           = (void*) (0UL),                  /* 18 Reserved */
#endif
        .pfnPEVC_0_Handler      = (void*) PEVC_0_Handler,         /* 19 PEVC_TR */
        .pfnPEVC_1_Handler      = (void*) PEVC_1_Handler,         /* 20 PEVC_OV */
#ifdef ID_AESA
        .pfnAESA_Handler        = (void*) AESA_Handler,           /* 21 Advanced Encryption Standard */
#else
        .pvReserved21           = (void*) (0UL),                  /* 21 Reserved */
#endif
        .pfnPM_Handler          = (void*) PM_Handler,             /* 22 Power Manager */
        .pfnSCIF_Handler        = (void*) SCIF_Handler,           /* 23 System Control Interface */
        .pfnFREQM_Handler       = (void*) FREQM_Handler,          /* 24 Frequency Meter */
        .pfnGPIO_0_Handler      = (void*) GPIO_0_Handler,         /* 25 GPIO_0 */
        .pfnGPIO_1_Handler      = (void*) GPIO_1_Handler,         /* 26 GPIO_1 */
        .pfnGPIO_2_Handler      = (void*) GPIO_2_Handler,         /* 27 GPIO_2 */
        .pfnGPIO_3_Handler      = (void*) GPIO_3_Handler,         /* 28 GPIO_3 */
        .pfnGPIO_4_Handler      = (void*) GPIO_4_Handler,         /* 29 GPIO_4 */
        .pfnGPIO_5_Handler      = (void*) GPIO_5_Handler,         /* 30 GPIO_5 */
        .pfnGPIO_6_Handler      = (void*) GPIO_6_Handler,         /* 31 GPIO_6 */
        .pfnGPIO_7_Handler      = (void*) GPIO_7_Handler,         /* 32 GPIO_7 */
        .pfnGPIO_8_Handler      = (void*) GPIO_8_Handler,         /* 33 GPIO_8 */
        .pfnGPIO_9_Handler      = (void*) GPIO_9_Handler,         /* 34 GPIO_9 */
        .pfnGPIO_10_Handler     = (void*) GPIO_10_Handler,        /* 35 GPIO_10 */
        .pfnGPIO_11_Handler     = (void*) GPIO_11_Handler,        /* 36 GPIO_11 */
        .pfnBPM_Handler         = (void*) BPM_Handler,            /* 37 Backup Power Manager */
        .pfnBSCIF_Handler       = (void*) BSCIF_Handler,          /* 38 Backup System Control Interface */
        .pfnAST_0_Handler       = (void*) AST_0_Handler,          /* 39 AST_ALARM */
        .pfnAST_1_Handler       = (void*) AST_1_Handler,          /* 40 AST_PER */
        .pfnAST_2_Handler       = (void*) AST_2_Handler,          /* 41 AST_OVF */
        .pfnAST_3_Handler       = (void*) AST_3_Handler,          /* 42 AST_READY */
        .pfnAST_4_Handler       = (void*) AST_4_Handler,          /* 43 AST_CLKREADY */
        .pfnWDT_Handler         = (void*) WDT_Handler,            /* 44 Watchdog Timer */
        .pfnEIC_0_Handler       = (void*) EIC_0_Handler,          /* 45 EIC_1 */
        .pfnEIC_1_Handler       = (void*) EIC_1_Handler,          /* 46 EIC_2 */
        .pfnEIC_2_Handler       = (void*) EIC_2_Handler,          /* 47 EIC_3 */
        .pfnEIC_3_Handler       = (void*) EIC_3_Handler,          /* 48 EIC_4 */
        .pfnEIC_4_Handler       = (void*) EIC_4_Handler,          /* 49 EIC_5 */
        .pfnEIC_5_Handler       = (void*) EIC_5_Handler,          /* 50 EIC_6 */
        .pfnEIC_6_Handler       = (void*) EIC_6_Handler,          /* 51 EIC_7 */
        .pfnEIC_7_Handler       = (void*) EIC_7_Handler,          /* 52 EIC_8 */
        .pfnIISC_Handler        = (void*) IISC_Handler,           /* 53 Inter-IC Sound (I2S) Controller */
        .pfnSPI_Handler         = (void*) SPI_Handler,            /* 54 Serial Peripheral Interface */
        .pfnTC0_0_Handler       = (void*) TC0_0_Handler,          /* 55 TC00 */
        .pfnTC0_1_Handler       = (void*) TC0_1_Handler,          /* 56 TC01 */
        .pfnTC0_2_Handler       = (void*) TC0_2_Handler,          /* 57 TC02 */
        .pfnTC1_0_Handler       = (void*) TC1_0_Handler,          /* 58 TC10 */
        .pfnTC1_1_Handler       = (void*) TC1_1_Handler,          /* 59 TC11 */
        .pfnTC1_2_Handler       = (void*) TC1_2_Handler,          /* 60 TC12 */
        .pfnTWIM0_Handler       = (void*) TWIM0_Handler,          /* 61 Two-wire Master Interface 0 */
        .pfnTWIS0_Handler       = (void*) TWIS0_Handler,          /* 62 Two-wire Slave Interface 0 */
        .pfnTWIM1_Handler       = (void*) TWIM1_Handler,          /* 63 Two-wire Master Interface 1 */
        .pfnTWIS1_Handler       = (void*) TWIS1_Handler,          /* 64 Two-wire Slave Interface 1 */
        .pfnUSART0_Handler      = (void*) USART0_Handler,         /* 65 Universal Synchronous Asynchronous Receiver Transmitter 0 */
        .pfnUSART1_Handler      = (void*) USART1_Handler,         /* 66 Universal Synchronous Asynchronous Receiver Transmitter 1 */
        .pfnUSART2_Handler      = (void*) USART2_Handler,         /* 67 Universal Synchronous Asynchronous Receiver Transmitter 2 */
        .pfnUSART3_Handler      = (void*) USART3_Handler,         /* 68 Universal Synchronous Asynchronous Receiver Transmitter 3 */
        .pfnADCIFE_Handler      = (void*) ADCIFE_Handler,         /* 69 ADC controller interface */
        .pfnDACC_Handler        = (void*) DACC_Handler,           /* 70 DAC Controller */
        .pfnACIFC_Handler       = (void*) ACIFC_Handler,          /* 71 Analog Comparator Interface */
        .pfnABDACB_Handler      = (void*) ABDACB_Handler,         /* 72 Audio Bitstream DAC */
        .pfnTRNG_Handler        = (void*) TRNG_Handler,           /* 73 True Random Number Generator */
        .pfnPARC_Handler        = (void*) PARC_Handler,           /* 74 Parallel Capture */
        .pfnCATB_Handler        = (void*) CATB_Handler,           /* 75 Capacitive Touch Module B */
        .pvReserved76           = (void*) (0UL),                  /* 76 Reserved */
        .pfnTWIM2_Handler       = (void*) TWIM2_Handler,          /* 77 Two-wire Master Interface 2 */
        .pfnTWIM3_Handler       = (void*) TWIM3_Handler,          /* 78 Two-wire Master Interface 3 */
#ifdef ID_LCDCA
        .pfnLCDCA_Handler       = (void*) LCDCA_Handler           /* 79 LCD Controller */
#else
        .pvReserved79           = (void*) (0UL)                   /* 79 Reserved */
#endif
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

        /* Initialize the C library */
        __libc_init_array();

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
