/****************************************************************************
**
** Copyright (C) ${COPYRIGHT_YEAR_MIKROE} MikroElektronika d.o.o.
** Contact: https://www.mikroe.com/contact
**
****************************************************************************/
/*!
 * @file  init_clock.c
 * @brief MSPM0 system-clock initialization generated from NECTO clock JSON.
 *
 * NECTO emits VALUE_<REGISTER_NAME> as a complete 32-bit register value from
 * config_registers.  SystemInit() applies those values in a safe order.
 * SYSPLLPARAM0/1 are intentionally not user-configurable: TI requires their
 * device-specific factory trim values to be loaded for the selected PLL input
 * frequency range.
 */

#include "core_header.h"
#include "mcu.h"

static inline void clock_barrier(void)
{
    __DSB();
    __ISB();
}

#if defined(SYSCTL_SYSPLLCFG0_SYSPLLREF_MASK) && defined(VALUE_SYSPLLCFG0)
static uint32_t pll_input_frequency_mhz(void)
{
    uint32_t ref_mhz = 32U; /* All MSPM0 G1/G3 devices use 32-MHz SYSOSC base. */

#if defined(SYSCTL_SYSPLLCFG0_SYSPLLREF_HFCLK) && defined(VALUE_HFCLKCLKCFG)
    if ((VALUE_SYSPLLCFG0 & SYSCTL_SYSPLLCFG0_SYSPLLREF_MASK) ==
        SYSCTL_SYSPLLCFG0_SYSPLLREF_HFCLK) {
#if defined(SYSCTL_HFCLKCLKCFG_HFXTRSEL_MASK) && defined(SYSCTL_HFCLKCLKCFG_HFXTRSEL_OFS)
        /* A representative value inside the selected HFXT range is sufficient
         * because the factory data itself is stored by frequency range. */
        switch ((VALUE_HFCLKCLKCFG & SYSCTL_HFCLKCLKCFG_HFXTRSEL_MASK) >>
                SYSCTL_HFCLKCLKCFG_HFXTRSEL_OFS) {
            case 0U: ref_mhz = 6U;  break;  /* 4..8 MHz */
            case 1U: ref_mhz = 12U; break;  /* 8..16 MHz */
            case 2U: ref_mhz = 24U; break;  /* 16..32 MHz */
            default: ref_mhz = 40U; break;  /* 32..48 MHz */
        }
#endif
    } else
#endif
    {
#if defined(VALUE_SYSOSCCFG) && defined(SYSCTL_SYSOSCCFG_FREQ_MASK)
        uint32_t f = VALUE_SYSOSCCFG & SYSCTL_SYSOSCCFG_FREQ_MASK;
#if defined(SYSCTL_SYSOSCCFG_FREQ_SYSOSC4M)
        if (f == SYSCTL_SYSOSCCFG_FREQ_SYSOSC4M) {
            ref_mhz = 4U;
        }
#endif
#if defined(SYSCTL_SYSOSCCFG_FREQ_SYSOSCUSER) && defined(VALUE_SYSOSCTRIMUSER) && defined(SYSCTL_SYSOSCTRIMUSER_FREQ_MASK)
        if (f == SYSCTL_SYSOSCCFG_FREQ_SYSOSCUSER) {
#if defined(SYSCTL_SYSOSCTRIMUSER_FREQ_16MHZ)
            ref_mhz = ((VALUE_SYSOSCTRIMUSER & SYSCTL_SYSOSCTRIMUSER_FREQ_MASK) ==
                       SYSCTL_SYSOSCTRIMUSER_FREQ_16MHZ) ? 16U : 24U;
#else
            ref_mhz = 24U;
#endif
        }
#endif
#endif
    }

#if defined(VALUE_SYSPLLCFG1) && defined(SYSCTL_SYSPLLCFG1_PDIV_MASK) && defined(SYSCTL_SYSPLLCFG1_PDIV_OFS)
    ref_mhz >>= ((VALUE_SYSPLLCFG1 & SYSCTL_SYSPLLCFG1_PDIV_MASK) >>
                SYSCTL_SYSPLLCFG1_PDIV_OFS);
#endif
    return ref_mhz;
}

static void load_pll_factory_trim(void)
{
    uint32_t input_mhz = pll_input_frequency_mhz();
    uint32_t p0, p1;
#if defined(CPUSS_CTL_ICACHE_MASK)
    uint32_t cpuss_ctl = CPUSS->CTL;
    CPUSS->CTL = (cpuss_ctl & ~CPUSS_CTL_ICACHE_MASK)
#if defined(CPUSS_CTL_PREFETCH_ENABLE)
               | CPUSS_CTL_PREFETCH_ENABLE
#endif
#if defined(CPUSS_CTL_LITEN_ENABLE)
               | CPUSS_CTL_LITEN_ENABLE
#endif
               ;
    clock_barrier();
#endif

    if (input_mhz < 8U) {
        p0 = FACTORYREGION->PLLSTARTUP0_4_8MHZ;
        p1 = FACTORYREGION->PLLSTARTUP1_4_8MHZ;
    } else if (input_mhz < 16U) {
        p0 = FACTORYREGION->PLLSTARTUP0_8_16MHZ;
        p1 = FACTORYREGION->PLLSTARTUP1_8_16MHZ;
    } else if (input_mhz < 32U) {
        p0 = FACTORYREGION->PLLSTARTUP0_16_32MHZ;
        p1 = FACTORYREGION->PLLSTARTUP1_16_32MHZ;
    } else {
        p0 = FACTORYREGION->PLLSTARTUP0_32_48MHZ;
        p1 = FACTORYREGION->PLLSTARTUP1_32_48MHZ;
    }

#if defined(CPUSS_CTL_ICACHE_MASK)
    CPUSS->CTL = cpuss_ctl;
    clock_barrier();
#endif
    SYSCTL->SOCLOCK.SYSPLLPARAM0 = p0;
    SYSCTL->SOCLOCK.SYSPLLPARAM1 = p1;
}
#endif

void SystemInit(void)
{
#if defined(VALUE_SYSOSCTRIMUSER) && defined(SYSCTL_SYSOSCTRIMUSER_FREQ_MASK)
    SYSCTL->SOCLOCK.SYSOSCTRIMUSER = VALUE_SYSOSCTRIMUSER;
#endif

    /* Keep SYSOSC available while changing the tree.  It is the safe source
     * during PLL reconfiguration and TI requires it while SYSPLL is enabled. */
#if defined(VALUE_SYSOSCCFG) && defined(SYSCTL_SYSOSCCFG_DISABLE_MASK)
    SYSCTL->SOCLOCK.SYSOSCCFG = VALUE_SYSOSCCFG & ~SYSCTL_SYSOSCCFG_DISABLE_MASK;
#elif defined(VALUE_SYSOSCCFG)
    SYSCTL->SOCLOCK.SYSOSCCFG = VALUE_SYSOSCCFG;
#endif

    /* Apply divider/flash-wait settings first, but temporarily stay on SYSOSC. */
#if defined(VALUE_MCLKCFG)
    {
        uint32_t safe_mclk = VALUE_MCLKCFG;
#if defined(SYSCTL_MCLKCFG_USEHSCLK_MASK)
        safe_mclk &= ~SYSCTL_MCLKCFG_USEHSCLK_MASK;
#endif
#if defined(SYSCTL_MCLKCFG_USELFCLK_MASK)
        safe_mclk &= ~SYSCTL_MCLKCFG_USELFCLK_MASK;
#endif
        SYSCTL->SOCLOCK.MCLKCFG = safe_mclk;
    }
#endif

#if defined(VALUE_LFCLKCFG)
    SYSCTL->SOCLOCK.LFCLKCFG = VALUE_LFCLKCFG;
#endif
#if defined(VALUE_HFCLKCLKCFG)
    SYSCTL->SOCLOCK.HFCLKCLKCFG = VALUE_HFCLKCLKCFG;
#endif

    /* Command registers are one-way/locked until reset on MSPM0.  A JSON
     * default contains only KEY, so issue the command only if an action bit is set. */
#if defined(VALUE_SYSOSCFCLCTL) && defined(SYSCTL_SYSOSCFCLCTL_KEY_MASK)
    if ((VALUE_SYSOSCFCLCTL & ~SYSCTL_SYSOSCFCLCTL_KEY_MASK) != 0U)
        SYSCTL->SOCLOCK.SYSOSCFCLCTL = VALUE_SYSOSCFCLCTL;
#endif
#if defined(VALUE_LFXTCTL) && defined(SYSCTL_LFXTCTL_KEY_MASK)
    if ((VALUE_LFXTCTL & ~SYSCTL_LFXTCTL_KEY_MASK) != 0U)
        SYSCTL->SOCLOCK.LFXTCTL = VALUE_LFXTCTL;
#endif
#if defined(VALUE_EXLFCTL) && defined(SYSCTL_EXLFCTL_KEY_MASK)
    if ((VALUE_EXLFCTL & ~SYSCTL_EXLFCTL_KEY_MASK) != 0U)
        SYSCTL->SOCLOCK.EXLFCTL = VALUE_EXLFCTL;
#endif

#if defined(VALUE_HSCLKEN)
    /* Enable HFXT/external HFCLK first, but keep SYSPLL disabled until configured. */
    {
        uint32_t hs = VALUE_HSCLKEN;
#if defined(SYSCTL_HSCLKEN_SYSPLLEN_MASK)
        hs &= ~SYSCTL_HSCLKEN_SYSPLLEN_MASK;
#endif
        SYSCTL->SOCLOCK.HSCLKEN = hs;
    }
#if defined(SYSCTL_CLKSTATUS_HFCLKGOOD_MASK) && defined(SYSCTL_HSCLKEN_HFXTEN_MASK)
    if ((VALUE_HSCLKEN & SYSCTL_HSCLKEN_HFXTEN_MASK) != 0U) {
        while ((SYSCTL->SOCLOCK.CLKSTATUS & SYSCTL_CLKSTATUS_HFCLKGOOD_MASK) == 0U) { }
    }
#endif
#endif

#if defined(VALUE_SYSPLLCFG0) && defined(VALUE_SYSPLLCFG1) && defined(SYSCTL_HSCLKEN_SYSPLLEN_MASK)
    if ((VALUE_HSCLKEN & SYSCTL_HSCLKEN_SYSPLLEN_MASK) != 0U) {
        SYSCTL->SOCLOCK.HSCLKEN &= ~SYSCTL_HSCLKEN_SYSPLLEN_MASK;
#if defined(SYSCTL_CLKSTATUS_SYSPLLOFF_MASK)
        while ((SYSCTL->SOCLOCK.CLKSTATUS & SYSCTL_CLKSTATUS_SYSPLLOFF_MASK) == 0U) { }
#endif
        SYSCTL->SOCLOCK.SYSPLLCFG0 = VALUE_SYSPLLCFG0;
        SYSCTL->SOCLOCK.SYSPLLCFG1 = VALUE_SYSPLLCFG1;
        load_pll_factory_trim();
        SYSCTL->SOCLOCK.HSCLKEN = VALUE_HSCLKEN;
#if defined(SYSCTL_CLKSTATUS_SYSPLLGOOD_MASK)
        while ((SYSCTL->SOCLOCK.CLKSTATUS & SYSCTL_CLKSTATUS_SYSPLLGOOD_MASK) == 0U) { }
#endif
    } else {
        SYSCTL->SOCLOCK.SYSPLLCFG0 = VALUE_SYSPLLCFG0;
        SYSCTL->SOCLOCK.SYSPLLCFG1 = VALUE_SYSPLLCFG1;
    }
#elif defined(VALUE_HSCLKEN)
    SYSCTL->SOCLOCK.HSCLKEN = VALUE_HSCLKEN;
#endif

#if defined(VALUE_HSCLKCFG)
    SYSCTL->SOCLOCK.HSCLKCFG = VALUE_HSCLKCFG;
#endif
#if defined(VALUE_GENCLKCFG)
    SYSCTL->SOCLOCK.GENCLKCFG = VALUE_GENCLKCFG;
#endif
#if defined(VALUE_GENCLKEN)
    SYSCTL->SOCLOCK.GENCLKEN = VALUE_GENCLKEN;
#endif

#if defined(VALUE_MCLKCFG)
    SYSCTL->SOCLOCK.MCLKCFG = VALUE_MCLKCFG;
#endif

    /* SYSOSC cannot be disabled while SYSPLL is enabled.  Otherwise honor the
     * configured final SYSOSCCFG value after MCLK has moved away from SYSOSC. */
#if defined(VALUE_SYSOSCCFG) && defined(SYSCTL_SYSOSCCFG_DISABLE_MASK)
#if defined(VALUE_HSCLKEN) && defined(SYSCTL_HSCLKEN_SYSPLLEN_MASK)
    if ((VALUE_HSCLKEN & SYSCTL_HSCLKEN_SYSPLLEN_MASK) == 0U)
#endif
    {
        SYSCTL->SOCLOCK.SYSOSCCFG = VALUE_SYSOSCCFG;
    }
#endif
    clock_barrier();
}
