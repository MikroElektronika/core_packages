/* RL78/G23 internal clock startup adapted from the supplied Renesas BSP.
 * Copyright (c) 2021 - 2026 Renesas Electronics Corporation and/or its affiliates
 * SPDX-License-Identifier: BSD-3-Clause
 * The supplied project option bytes select a 32 MHz HOCO base frequency.
 * No package-specific pin initializers are reused on other pin counts.
 */
#include <stdint.h>
#include "core_header.h"
#include "mcu.h"

#if VALUE_SYSTEM_HOCODIV > 5
#error "G23 HOCO divider must select 32, 16, 8, 4, 2, or 1 MHz"
#endif
#if FOSC_KHZ_VALUE != (32000UL >> VALUE_SYSTEM_HOCODIV)
#error "FOSC_KHZ_VALUE must match the selected G23 HOCODIV"
#endif

typedef struct { uint32_t FCLK_Frequency; } SYSTEM_ClocksTypeDef;

void SYSTEM_GetClocksFrequency(SYSTEM_ClocksTypeDef *clocks)
{
    if (clocks) clocks->FCLK_Frequency = 32000000UL >> VALUE_SYSTEM_HOCODIV;
}

void SystemInit(void)
{
    /* Called before C data/BSS initialization: only registers and automatic
     * variables may be used here. These are the G23 BSP HOCO selections. */
    uint8_t wait;
    HIOSTOP = 0U;
    for (wait = 0; wait < 64U; ++wait) { NOP(); }
    MCM1 = 0U;
    while (MCS1 != 0U) { NOP(); }
    MCM0 = 0U;
    while (MCS != 0U) { NOP(); }
    CSS = 0U;
    while (CLS != 0U) { NOP(); }
    HOCODIV = (uint8_t)VALUE_SYSTEM_HOCODIV;
    CMC = 0U; /* Clock pins remain GPIO; no board oscillator is assumed. */
    MIOEN = 0U;
    MSTOP = 1U;
    XTSTOP = 1U;
    OSMC = 0U;
}
