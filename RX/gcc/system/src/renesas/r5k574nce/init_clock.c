/* RX74 clock startup adapted from the supplied Renesas FSP bsp_clocks.c.
 * Copyright (c) 2020 - 2026 Renesas Electronics Corporation and/or its affiliates
 * SPDX-License-Identifier: BSD-3-Clause
 * Internal HOCO only. The clock UI intentionally does not expose PLL sources.
 * Use the flat/secure address map and start from reset, as in this package.
 */
#include <stdint.h>
#include "core_header.h"
#include "mcu.h"

#define RX_HOCO_HZ ((VALUE_SYSTEM_HOCOCR2 == 0) ? 16000000UL : \
                    (VALUE_SYSTEM_HOCOCR2 == 1) ? 18000000UL : \
                    (VALUE_SYSTEM_HOCOCR2 == 2) ? 20000000UL : \
                    (VALUE_SYSTEM_HOCOCR2 == 4) ? 32000000UL : 48000000UL)
#define RX_CPU_DIV (1UL << (VALUE_SYSTEM_SCKDIVCR2 & 15UL))
#define RX_ICLK_DIV (1UL << ((VALUE_SYSTEM_SCKDIVCR >> 24) & 15UL))
#define RX_MRICLK_DIV (1UL << ((VALUE_SYSTEM_SCKDIVCR2 >> 12) & 15UL))
#define RX_MRPCLK_DIV (1UL << ((VALUE_SYSTEM_SCKDIVCR >> 28) & 15UL))
#if VALUE_SYSTEM_HOCOCR2 != 0 && VALUE_SYSTEM_HOCOCR2 != 1 && \
    VALUE_SYSTEM_HOCOCR2 != 2 && VALUE_SYSTEM_HOCOCR2 != 4 && VALUE_SYSTEM_HOCOCR2 != 7
#error "Invalid RX74 HOCO frequency selection"
#endif
#if RX_CPU_DIV > RX_ICLK_DIV
#error "RX74 CPUCLK must be greater than or equal to ICLK"
#endif
#if (VALUE_SYSTEM_SCKDIVCR2 & 15UL) > 6 || ((VALUE_SYSTEM_SCKDIVCR2 >> 12) & 15UL) > 6
#error "Invalid RX74 CPUCLK/MRICLK divider"
#endif
#if ((VALUE_SYSTEM_SCKDIVCR >> 0) & 15UL) > 6 || \
    ((VALUE_SYSTEM_SCKDIVCR >> 4) & 15UL) > 6 || \
    ((VALUE_SYSTEM_SCKDIVCR >> 8) & 15UL) > 6 || \
    ((VALUE_SYSTEM_SCKDIVCR >> 12) & 15UL) > 6 || \
    ((VALUE_SYSTEM_SCKDIVCR >> 16) & 15UL) > 6 || \
    ((VALUE_SYSTEM_SCKDIVCR >> 20) & 15UL) > 6 || \
    ((VALUE_SYSTEM_SCKDIVCR >> 24) & 15UL) > 6 || \
    ((VALUE_SYSTEM_SCKDIVCR >> 28) & 15UL) > 6
#error "Invalid RX74 system/peripheral divider"
#endif
#if FOSC_KHZ_VALUE * 1000UL != RX_HOCO_HZ / RX_CPU_DIV
#error "FOSC_KHZ_VALUE must match the selected RX74 HOCO and CPUCLK divider"
#endif
#if defined(_RX_PZ_NONSECURE) || defined(_RX_PZ_SECURE)
#error "This startup/linker is a flat RX74 image; ProtectZone partitions need separate runtime profiles"
#endif

uint32_t SystemCoreClock;

typedef struct {
    uint32_t ICLK_Frequency;
    uint32_t PCLKA_Frequency;
    uint32_t PCLKB_Frequency;
    uint32_t PCLKC_Frequency;
    uint32_t PCLKD_Frequency;
    uint32_t FCLK_Frequency; /* RX74 MRAM peripheral bus clock, MRPCLK. */
} SYSTEM_ClocksTypeDef;

void SYSTEM_GetClocksFrequency(SYSTEM_ClocksTypeDef *clocks)
{
    uint32_t div = VALUE_SYSTEM_SCKDIVCR;
    if (!clocks) return;
    clocks->ICLK_Frequency = RX_HOCO_HZ / RX_ICLK_DIV;
    clocks->PCLKA_Frequency = RX_HOCO_HZ >> ((div >> 12) & 15UL);
    clocks->PCLKB_Frequency = RX_HOCO_HZ >> ((div >> 8) & 15UL);
    clocks->PCLKC_Frequency = RX_HOCO_HZ >> ((div >> 4) & 15UL);
    clocks->PCLKD_Frequency = RX_HOCO_HZ >> (div & 15UL);
    clocks->FCLK_Frequency = RX_HOCO_HZ / RX_MRPCLK_DIV;
}

static void rx_wait_oscsf(uint8_t mask, uint8_t set)
{
    while (((R_SYSTEM->OSCSF & mask) != 0U) != (set != 0U)) {
        __asm__ volatile("nop");
    }
}

void SystemCoreClockUpdate(void)
{
    SystemCoreClock = RX_HOCO_HZ / RX_CPU_DIV;
}

void SystemInit(void)
{
    uint32_t mriclk_mhz = ((RX_HOCO_HZ / RX_MRICLK_DIV) + 999999UL) / 1000000UL;
    uint32_t mrpclk_mhz = ((RX_HOCO_HZ / RX_MRPCLK_DIV) + 999999UL) / 1000000UL;
    uint32_t wait;

    R_SYSTEM->PRCR = 0xA503U;
    /* MOCO is the hardware reset clock. Keep it running during HOCO setup. */
    R_SYSTEM->MOCOCR = 0U;
    /* Conservative MOCO stabilization delay, independent of compiler loop cost. */
    for (wait = 0; wait < 48000UL; ++wait) { __asm__ volatile("nop"); }
    R_MRAM->MRCPFB = 0U;
    R_SYSTEM->SCKSCR = 1U; /* MOCO */
    R_SYSTEM->HOCOCR = 1U;
    rx_wait_oscsf(R_SYSTEM_OSCSF_HOCOSF_Msk, 0U);
    R_SYSTEM->HOCOCR2 = (uint8_t)VALUE_SYSTEM_HOCOCR2;
    R_SYSTEM->HOCOCR = 0U;
    rx_wait_oscsf(R_SYSTEM_OSCSF_HOCOSF_Msk, 1U);

    /* Vendor frequency notifications must precede an increase in MRAM clocks. */
    while (R_MRAM->MRCFREQ != mriclk_mhz) {
        R_MRAM->MRCFREQ = 0x1E000000UL | mriclk_mhz;
    }
    while (R_MRAM->MREFREQ != mrpclk_mhz) {
        R_MRAM->MREFREQ = 0xE1000000UL | mrpclk_mhz;
    }
    R_SRAM->SRAMPRCR_S = 0xA501U;
    R_SRAM->SRAMWTSC = 0U; /* HOCO <=48 MHz, below vendor 150 MHz threshold. */
    R_SRAM->SRAMPRCR_S = 0xA500U;

    /* Preserve CPUCLK >= ICLK during changes, as required by FSP. */
    if (((VALUE_SYSTEM_SCKDIVCR >> 24) & 15UL) >= R_SYSTEM->SCKDIVCR_b.ICK) {
        R_SYSTEM->SCKDIVCR = VALUE_SYSTEM_SCKDIVCR;
        R_SYSTEM->SCKDIVCR2 = (uint16_t)VALUE_SYSTEM_SCKDIVCR2;
    } else {
        R_SYSTEM->SCKDIVCR2 = (uint16_t)VALUE_SYSTEM_SCKDIVCR2;
        R_SYSTEM->SCKDIVCR = VALUE_SYSTEM_SCKDIVCR;
    }
    R_SYSTEM->SCKSCR = 0U; /* HOCO */
    /* The supplied BSP requires 150 us after a clock change. Even considering
     * dual issue, 48000 explicit NOPs at <=48 MHz exceed that interval. */
    for (wait = 0; wait < 48000UL; ++wait) { __asm__ volatile("nop"); }
    R_MRAM->MRCPFB = 1U;
    /* FSP flat projects use the secure peripheral aliases and clear these
     * peripheral attribution registers during SystemInit. PRC4 protects SARs.
     * This configures a flat application, not a ProtectZone secure partition. */
    R_SYSTEM->PRCR = 0xA513U;
    R_PSCU->PSARB = 0U; while (R_PSCU->PSARB != 0U) { ; }
    R_PSCU->PSARC = 0U; while (R_PSCU->PSARC != 0U) { ; }
    R_PSCU->PSARD = 0U; while (R_PSCU->PSARD != 0U) { ; }
    R_PSCU->PSARE = 0U; while (R_PSCU->PSARE != 0U) { ; }
    R_PSCU->PSARF = 0U; while (R_PSCU->PSARF != 0U) { ; }
    R_PSCU->MSSAR = 0U; while (R_PSCU->MSSAR != 0U) { ; }
    R_SYSTEM->PRCR = 0xA500U;
    SystemCoreClockUpdate();
}
