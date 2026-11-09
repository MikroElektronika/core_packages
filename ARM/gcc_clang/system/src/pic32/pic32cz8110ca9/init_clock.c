/****************************************************************************
**
** Copyright (C) ${COPYRIGHT_YEAR_MIKROE} MikroElektronika d.o.o.
** Contact: https://www.mikroe.com/contact
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
/*!
 * @file  init_clock.c
 * @brief Mikroe clock initialization API.
 */

#include "core_header.h"
#include "mcu.h"

/** \cond 0 */
/* *INDENT-OFF* */
#ifdef __cplusplus
extern "C" {
#endif
/* *INDENT-ON* */
/** \endcond */

/**
 * System clock frequency. The DFLL48M (48 MHz, open loop) is the source for
 * the main clock at chip startup. The configured value is taken from the
 * NECTO generated FOSC_KHZ_VALUE.
 */
#define __SYSTEM_CLOCK    (FOSC_KHZ_VALUE * 1000UL)

/*
 * Cortex-M7 cache policy. Instruction cache is recommended at 300 MHz.
 * Keep data cache disabled until every DMA buffer/descriptor
 * is either placed in a non-cacheable MPU region or maintained with
 * clean/invalidate operations.
 */
#ifndef SYSTEM_ENABLE_ICACHE
#define SYSTEM_ENABLE_ICACHE    1
#endif

#ifndef SYSTEM_ENABLE_DCACHE
#define SYSTEM_ENABLE_DCACHE    0
#endif

/* Generic clock channel indexes (see instance/oscctrl.h). */
#ifndef OSCCTRL_GCLK_ID_DFLL48M
#define OSCCTRL_GCLK_ID_DFLL48M    (0U)
#endif
#ifndef OSCCTRL_GCLK_ID_PLL_0
#define OSCCTRL_GCLK_ID_PLL_0      (1U)
#endif

#define _GCLK_GEN_NUM             (16U)
#define _GCLK_GEN_SYNC_MSK(n)     (1UL << (GCLK_SYNCBUSY_GENCTRL0_Pos + (n)))
#define _GCLK_GEN_SRC(value)      ((value) & GCLK_GENCTRL_SRC_Msk)
#define _GCLK_GEN_ENABLED(value)  (0 != ((value) & GCLK_GENCTRL_GENEN_Msk))

/* PLLn output k is generator source GCLK_GENCTRL_SRC_PLLn_(k + 1). */
#define _GCLK_SRC_IS_PLL0(src)    (((src) >= GCLK_GENCTRL_SRC_PLL0_1) && ((src) <= GCLK_GENCTRL_SRC_PLL0_4))
#define _GCLK_SRC_IS_PLL1(src)    (((src) >= GCLK_GENCTRL_SRC_PLL1_1) && ((src) <= GCLK_GENCTRL_SRC_PLL1_4))

/* Additional voltage regulator ready flags of the enabled regulators. */
#define _SUPC_AVREG_READY(avregen) \
    ((((avregen) & SUPC_VREGCTRL_AVREGEN_Msk) >> SUPC_VREGCTRL_AVREGEN_Pos) << SUPC_STATUS_ADDVREGRDY_Pos)

/* Flash read controller fields applied from the configuration. */
#define _FCR_CTRLA_CFG_MSK        (FCR_CTRLA_FWS_Msk | FCR_CTRLA_ADRWS_Msk | FCR_CTRLA_AUTOWS_Msk)

/*
 * PLLnCTRL, PLLnFBDIV, PLLnREFDIV and PLLnPOSTDIVA are consecutive registers
 * with the same layout for PLL0 and PLL1 (the PLL0 field macros are used).
 */
typedef struct {
    volatile uint32_t CTRL;
    volatile uint32_t FBDIV;
    volatile uint32_t REFDIV;
    volatile uint32_t POSTDIVA;
} _pll_regs_t;

#define _PLL_REGS(n)  ((_pll_regs_t *)((n) ? &OSCCTRL_REGS->OSCCTRL_PLL1CTRL : &OSCCTRL_REGS->OSCCTRL_PLL0CTRL))
#define _PLL_LOCK_MSK(n)  ((n) ? OSCCTRL_STATUS_PLL1LOCK_Msk : OSCCTRL_STATUS_PLL0LOCK_Msk)

/* Generator configuration (index = generator number). */
static const uint32_t _gclk_genctrl[_GCLK_GEN_NUM] = {
    VALUE_GENCTRL0,  VALUE_GENCTRL1,  VALUE_GENCTRL2,  VALUE_GENCTRL3,
    VALUE_GENCTRL4,  VALUE_GENCTRL5,  VALUE_GENCTRL6,  VALUE_GENCTRL7,
    VALUE_GENCTRL8,  VALUE_GENCTRL9,  VALUE_GENCTRL10, VALUE_GENCTRL11,
    VALUE_GENCTRL12, VALUE_GENCTRL13, VALUE_GENCTRL14, VALUE_GENCTRL15
};

/**
 * \brief Disable the Watchdog Timer.
 *
 * The WDT is disabled after reset unless it was enabled through the user
 * configuration fuses. It can not be disabled when the Always-On mode is active.
 */
static void _wdt_disable(void)
{
    if ((WDT_REGS->WDT_CTRLA & WDT_CTRLA_ENABLE_Msk) &&
        !(WDT_REGS->WDT_CTRLA & WDT_CTRLA_ALWAYSON_Msk)) {
        WDT_REGS->WDT_CTRLA &= (uint8_t)~WDT_CTRLA_ENABLE_Msk;
        while (WDT_REGS->WDT_SYNCBUSY & WDT_SYNCBUSY_ENABLE_Msk) {
            /* Wait for synchronization */
        }
    }
}

/**
 * \brief Set the flash read wait states.
 *
 * \param before_switch 1: keep the slowest of the current and the configured
 *                      setting while the clock frequency changes,
 *                      0: apply the configured setting.
 *
 * The AHB arbitration (ARB) and read buffer (RDBUFWS) settings are kept.
 */
static void _fcr_set_wait_states(uint8_t before_switch)
{
    uint32_t data = FCR_REGS->FCR_CTRLA;
    uint32_t config = VALUE_FCR_CTRLA & _FCR_CTRLA_CFG_MSK;

    if (before_switch) {
        if ((data & FCR_CTRLA_FWS_Msk) > (config & FCR_CTRLA_FWS_Msk)) {
            config = (config & ~FCR_CTRLA_FWS_Msk) | (data & FCR_CTRLA_FWS_Msk);
        }
        config |= data & (FCR_CTRLA_ADRWS_Msk | FCR_CTRLA_AUTOWS_Msk);
    }
    FCR_REGS->FCR_CTRLA = (data & ~_FCR_CTRLA_CFG_MSK) | config;
}

/**
 * \brief Write a generic clock generator and wait for synchronization.
 */
static void _gclk_gen_write(uint32_t gen, uint32_t value)
{
    GCLK_REGS->GCLK_GENCTRL[gen] = value;
    while (GCLK_REGS->GCLK_SYNCBUSY & _GCLK_GEN_SYNC_MSK(gen)) {
        /* Wait for synchronization */
    }
}

/**
 * \brief Write a peripheral clock channel.
 *
 * The channel is disabled before its generator is changed, as required by
 * the datasheet.
 */
static void _gclk_channel_write(uint32_t id, uint32_t value)
{
    value &= (GCLK_PCHCTRL_GEN_Msk | GCLK_PCHCTRL_CHEN_Msk);

    if ((GCLK_REGS->GCLK_PCHCTRL[id] & GCLK_PCHCTRL_CHEN_Msk) &&
        ((GCLK_REGS->GCLK_PCHCTRL[id] & GCLK_PCHCTRL_GEN_Msk) != (value & GCLK_PCHCTRL_GEN_Msk))) {
        GCLK_REGS->GCLK_PCHCTRL[id] &= ~GCLK_PCHCTRL_CHEN_Msk;
        while (GCLK_REGS->GCLK_PCHCTRL[id] & GCLK_PCHCTRL_CHEN_Msk) {
            /* Wait until the channel is disabled */
        }
    }
    GCLK_REGS->GCLK_PCHCTRL[id] = value;
    if (value & GCLK_PCHCTRL_CHEN_Msk) {
        while (!(GCLK_REGS->GCLK_PCHCTRL[id] & GCLK_PCHCTRL_CHEN_Msk)) {
            /* Wait until the channel is enabled */
        }
    }
}

/**
 * \brief Busy wait of at least 1 us at up to 300 MHz.
 */
static void _delay_1us(void)
{
    volatile uint32_t count;

    for (count = 0; count < 300U; count++) {
        /* Wait */
    }
}

/**
 * \brief Make sure the CPU runs from the DFLL48M before the clock tree is
 * (re)configured. This is the reset state; the boot ROM may have switched the
 * main clock to PLL0 (BOOTCFG fuses), so PLL0 can be reprogrammed safely.
 */
static void _gclk0_to_dfll(void)
{
    if (!(OSCCTRL_REGS->OSCCTRL_DFLLCTRLA & OSCCTRL_DFLLCTRLA_ENABLE_Msk)) {
        OSCCTRL_REGS->OSCCTRL_DFLLCTRLA |= OSCCTRL_DFLLCTRLA_ENABLE_Msk;
        while (OSCCTRL_REGS->OSCCTRL_SYNCBUSY & OSCCTRL_SYNCBUSY_DFLLENABLE_Msk) {
            /* Wait for synchronization */
        }
        if (!(OSCCTRL_REGS->OSCCTRL_DFLLCTRLA & OSCCTRL_DFLLCTRLA_ONDEMAND_Msk)) {
            while (!(OSCCTRL_REGS->OSCCTRL_STATUS & OSCCTRL_STATUS_DFLLRDY_Msk)) {
                /* Wait until the DFLL is ready */
            }
        }
    }
    if (GCLK_GENCTRL_SRC_DFLL != _GCLK_GEN_SRC(GCLK_REGS->GCLK_GENCTRL[0])) {
        _gclk_gen_write(0, GCLK_GENCTRL_SRC_DFLL | GCLK_GENCTRL_GENEN_Msk | GCLK_GENCTRL_DIV(1));
    }
}

/**
 * \brief Enable the additional voltage regulators of the configuration.
 *
 * The PLLs need the PLL regulator (AVREGEN bit 2). Regulators are only
 * switched on here, never off.
 */
static void _supc_init(void)
{
    uint32_t avregen = VALUE_VREGCTRL & SUPC_VREGCTRL_AVREGEN_Msk;

    if ((SUPC_REGS->SUPC_VREGCTRL & avregen) != avregen) {
        SUPC_REGS->SUPC_VREGCTRL |= avregen;
    }
    while ((SUPC_REGS->SUPC_STATUS & _SUPC_AVREG_READY(avregen)) != _SUPC_AVREG_READY(avregen)) {
        /* Wait until the regulators are ready */
    }
}

/**
 * \brief Initialize the crystal oscillators (XOSC and XOSC32K).
 *
 * Every enabled oscillator is running when this function returns (unless it
 * runs on demand).
 */
static void _osc_init_sources(void)
{
    // If XOSC is enabled.
    if (VALUE_XOSCCTRLA & OSCCTRL_XOSCCTRLA_ENABLE_Msk) {
        OSCCTRL_REGS->OSCCTRL_XOSCCTRLA = VALUE_XOSCCTRLA;
        if (!(VALUE_XOSCCTRLA & OSCCTRL_XOSCCTRLA_ONDEMAND_Msk)) {
            while (!(OSCCTRL_REGS->OSCCTRL_STATUS & OSCCTRL_STATUS_XOSCRDY_Msk)) {
                /* Wait until XOSC is stable */
            }
        }
    }

    // If XOSC32K is enabled.
    if (VALUE_XOSC32K & OSC32KCTRL_XOSC32K_ENABLE_Msk) {
        OSC32KCTRL_REGS->OSC32KCTRL_XOSC32K = VALUE_XOSC32K;
        if (!(VALUE_XOSC32K & OSC32KCTRL_XOSC32K_ONDEMAND_Msk)) {
            while (!(OSC32KCTRL_REGS->OSC32KCTRL_STATUS & OSC32KCTRL_STATUS_XOSC32KRDY_Msk)) {
                /* Wait until XOSC32K is stable */
            }
        }
    }
}

/**
 * \brief Initialize the generic clock generators 1..15.
 *
 * \param after_pll 0: generators that do not depend on a PLL or on GCLK1,
 *                  1: generators sourced by PLL0, PLL1 or GCLK1.
 */
static void _gclk_init_generators(uint8_t after_pll)
{
    uint32_t gen;
    uint32_t src;
    uint8_t late;

    for (gen = 1; gen < _GCLK_GEN_NUM; gen++) {
        if (!_GCLK_GEN_ENABLED(_gclk_genctrl[gen])) {
            continue;
        }
        src = _GCLK_GEN_SRC(_gclk_genctrl[gen]);
        late = _GCLK_SRC_IS_PLL0(src) || _GCLK_SRC_IS_PLL1(src) || (GCLK_GENCTRL_SRC_GCLKGEN1 == src);
        if (late == after_pll) {
            _gclk_gen_write(gen, _gclk_genctrl[gen]);
        }
    }
}

/**
 * \brief Initialize the DFLL48M.
 *
 * The DFLL48M runs in open loop mode after reset and clocks the CPU while
 * this function runs. It is never disabled here.
 */
static void _dfll_init(void)
{
    // If closed loop mode is selected.
    if (VALUE_DFLLCTRLB & OSCCTRL_DFLLCTRLB_LOOPEN_Msk) {
        if (!(VALUE_DFLLCTRLB & OSCCTRL_DFLLCTRLB_USBCRM_Msk)) {
            // Reference clock from a generic clock generator.
            _gclk_channel_write(OSCCTRL_GCLK_ID_DFLL48M, VALUE_PCHCTRL_DFLL48 | GCLK_PCHCTRL_CHEN_Msk);
        }
        OSCCTRL_REGS->OSCCTRL_DFLLMUL = VALUE_DFLLMUL;
        while (OSCCTRL_REGS->OSCCTRL_SYNCBUSY & OSCCTRL_SYNCBUSY_DFLLMUL_Msk) {
            /* Wait for synchronization */
        }
    }

    // Apply the operating mode (open/closed loop) when it changes.
    if (OSCCTRL_REGS->OSCCTRL_DFLLCTRLB != VALUE_DFLLCTRLB) {
        OSCCTRL_REGS->OSCCTRL_DFLLCTRLB = VALUE_DFLLCTRLB;
        while (OSCCTRL_REGS->OSCCTRL_SYNCBUSY & OSCCTRL_SYNCBUSY_DFLLCTRLB_Msk) {
            /* Wait for synchronization */
        }
        // The DFLL48M clocks generator 0 here, so it is requested and must get ready.
        while (!(OSCCTRL_REGS->OSCCTRL_STATUS & OSCCTRL_STATUS_DFLLRDY_Msk)) {
            /* Wait until the DFLL is ready */
        }
    }

    // Apply ONDEMAND while keeping the DFLL enabled.
    if ((OSCCTRL_REGS->OSCCTRL_DFLLCTRLA & OSCCTRL_DFLLCTRLA_ONDEMAND_Msk) !=
        (VALUE_DFLLCTRLA & OSCCTRL_DFLLCTRLA_ONDEMAND_Msk)) {
        OSCCTRL_REGS->OSCCTRL_DFLLCTRLA = (VALUE_DFLLCTRLA & OSCCTRL_DFLLCTRLA_ONDEMAND_Msk) |
                                          OSCCTRL_DFLLCTRLA_ENABLE_Msk;
        while (OSCCTRL_REGS->OSCCTRL_SYNCBUSY & OSCCTRL_SYNCBUSY_DFLLENABLE_Msk) {
            /* Wait for synchronization */
        }
    }
}

/**
 * \brief Initialize one PLL.
 *
 * Fpfd = reference / REFDIV (4..60 MHz), Fvco = Fpfd x FBDIV (800..1600 MHz),
 * output k = Fvco / POSTDIVk. The PLL is locked when this function returns
 * (unless it runs on demand).
 */
static void _pll_init(uint32_t n, uint32_t ctrl, uint32_t fbdiv, uint32_t refdiv,
                      uint32_t postdiva, uint32_t pchctrl)
{
    _pll_regs_t *pll = _PLL_REGS(n);

    if (!(ctrl & OSCCTRL_PLL0CTRL_ENABLE_Msk)) {
        return;
    }

    // Disable the PLL and clear its control register first.
    pll->CTRL = 0;

    // If the dedicated generic clock is selected as reference.
    if (OSCCTRL_PLL0CTRL_REFSEL_GCLK == (ctrl & OSCCTRL_PLL0CTRL_REFSEL_Msk)) {
        _gclk_channel_write(OSCCTRL_GCLK_ID_PLL_0 + n, pchctrl | GCLK_PCHCTRL_CHEN_Msk);
    }

    pll->REFDIV = refdiv;
    pll->FBDIV = fbdiv;
    pll->POSTDIVA = postdiva;
    pll->CTRL = ctrl & ~OSCCTRL_PLL0CTRL_WRTLOCK_Msk;
    if (!(ctrl & OSCCTRL_PLL0CTRL_ONDEMAND_Msk)) {
        while (!(OSCCTRL_REGS->OSCCTRL_STATUS & _PLL_LOCK_MSK(n))) {
            /* Wait until the PLL is locked */
        }
    }
}

/**
 * \brief Initialize the main clock: clock domain dividers and generator 0.
 *
 * When generator 0 runs from PLL0 output 0, the CPU clock is stepped up
 * through the slower enabled PLL0 outputs (3, 2, 1) first, as MPLAB Harmony
 * does, to limit the load step on the core regulator.
 */
static void _mclk_init(void)
{
    uint32_t k;
    uint32_t postdiv;
    uint32_t previous = 0xFFFFFFFFUL;
    uint32_t postdiv0 = (VALUE_PLL0POSTDIVA & OSCCTRL_PLL0POSTDIVA_POSTDIV0_Msk) >> OSCCTRL_PLL0POSTDIVA_POSTDIV0_Pos;

    // Bus clock (domain 1) first, then CPU clock (domain 0).
    MCLK_REGS->MCLK_CLKDIV[1] = VALUE_CLKDIV1 & MCLK_CLKDIV_DIV_Msk;
    while (!(MCLK_REGS->MCLK_INTFLAG & MCLK_INTFLAG_CKRDY_Msk)) {
        /* Wait until the main clock is ready */
    }
    MCLK_REGS->MCLK_CLKDIV[0] = VALUE_CLKDIV0 & MCLK_CLKDIV_DIV_Msk;
    while (!(MCLK_REGS->MCLK_INTFLAG & MCLK_INTFLAG_CKRDY_Msk)) {
        /* Wait until the main clock is ready */
    }

    // Step up through the slower PLL0 outputs.
    if (GCLK_GENCTRL_SRC_PLL0_1 == _GCLK_GEN_SRC(VALUE_GENCTRL0)) {
        for (k = 3; k > 0; k--) {
            postdiv = (VALUE_PLL0POSTDIVA >> (8U * k)) & OSCCTRL_PLL0POSTDIVA_POSTDIV0_Msk;
            if ((VALUE_PLL0POSTDIVA & (OSCCTRL_PLL0POSTDIVA_OUTEN0_Msk << (8U * k))) &&
                (postdiv > postdiv0) && (postdiv < previous)) {
                _gclk_gen_write(0, (VALUE_GENCTRL0 & ~GCLK_GENCTRL_SRC_Msk) |
                                   GCLK_GENCTRL_SRC(GCLK_GENCTRL_SRC_PLL0_1_Val + k) | GCLK_GENCTRL_GENEN_Msk);
                _delay_1us();
                previous = postdiv;
            }
        }
    }

    // Switch generator 0 (main clock) to the configured source.
    _gclk_gen_write(0, VALUE_GENCTRL0 | GCLK_GENCTRL_GENEN_Msk);
}

/**
 * \brief Return 1 if an enabled generator uses a source in [first, last].
 */
static uint8_t _gclk_source_used(uint32_t first, uint32_t last)
{
    uint32_t gen;
    uint32_t src;

    for (gen = 0; gen < _GCLK_GEN_NUM; gen++) {
        src = _GCLK_GEN_SRC(_gclk_genctrl[gen]);
        if (_GCLK_GEN_ENABLED(_gclk_genctrl[gen]) && (src >= first) && (src <= last)) {
            return 1;
        }
    }
    return 0;
}

/**
 * \brief Return 1 if an enabled PLL uses the given reference.
 */
static uint8_t _pll_reference_used(uint32_t refsel)
{
    return ((VALUE_PLL0CTRL & OSCCTRL_PLL0CTRL_ENABLE_Msk) &&
            (refsel == (VALUE_PLL0CTRL & OSCCTRL_PLL0CTRL_REFSEL_Msk))) ||
           ((VALUE_PLL1CTRL & OSCCTRL_PLL0CTRL_ENABLE_Msk) &&
            (refsel == (VALUE_PLL1CTRL & OSCCTRL_PLL0CTRL_REFSEL_Msk)));
}

/**
 * \brief Disable the clocks that are not used by the configuration.
 */
static void _disable_unused_clocks(void)
{
    uint32_t gen;

    // Disable generators 1..15 that are not enabled in the configuration.
    for (gen = 1; gen < _GCLK_GEN_NUM; gen++) {
        if (!_GCLK_GEN_ENABLED(_gclk_genctrl[gen]) &&
            (GCLK_REGS->GCLK_GENCTRL[gen] & GCLK_GENCTRL_GENEN_Msk)) {
            _gclk_gen_write(gen, _gclk_genctrl[gen]);
        }
    }

    // Disable PLL0 if it is not enabled in the configuration.
    if (!(VALUE_PLL0CTRL & OSCCTRL_PLL0CTRL_ENABLE_Msk) &&
        !_gclk_source_used(GCLK_GENCTRL_SRC_PLL0_1, GCLK_GENCTRL_SRC_PLL0_4) &&
        (OSCCTRL_REGS->OSCCTRL_PLL0CTRL & OSCCTRL_PLL0CTRL_ENABLE_Msk)) {
        OSCCTRL_REGS->OSCCTRL_PLL0CTRL = 0;
    }

    // Disable PLL1 if it is not enabled in the configuration.
    if (!(VALUE_PLL1CTRL & OSCCTRL_PLL0CTRL_ENABLE_Msk) &&
        !_gclk_source_used(GCLK_GENCTRL_SRC_PLL1_1, GCLK_GENCTRL_SRC_PLL1_4) &&
        (OSCCTRL_REGS->OSCCTRL_PLL1CTRL & OSCCTRL_PLL0CTRL_ENABLE_Msk)) {
        OSCCTRL_REGS->OSCCTRL_PLL1CTRL = 0;
    }

    // Disable the DFLL48M if it is not enabled and nothing uses it.
    if (!(VALUE_DFLLCTRLA & OSCCTRL_DFLLCTRLA_ENABLE_Msk) &&
        !_gclk_source_used(GCLK_GENCTRL_SRC_DFLL, GCLK_GENCTRL_SRC_DFLL) &&
        !_pll_reference_used(OSCCTRL_PLL0CTRL_REFSEL_DFLL48M)) {
        OSCCTRL_REGS->OSCCTRL_DFLLCTRLA = VALUE_DFLLCTRLA & OSCCTRL_DFLLCTRLA_ONDEMAND_Msk;
        while (OSCCTRL_REGS->OSCCTRL_SYNCBUSY & OSCCTRL_SYNCBUSY_DFLLENABLE_Msk) {
            /* Wait for synchronization */
        }
    }
}

uint32_t SystemCoreClock = __SYSTEM_CLOCK;  /*!< System Clock Frequency (Core Clock)*/

void SystemCoreClockUpdate(void);

/**
 * Initialize the system
 *
 * \brief  Setup the microcontroller system.
 *         Initialize the System and update the SystemCoreClock variable.
 */
void SystemInit(void)
{
    // Keep the default device state after reset
    SystemCoreClock = __SYSTEM_CLOCK;

    // Disable Watchdog Timer (only enabled after reset by the user configuration fuses).
    _wdt_disable();

    // Add flash wait states before the clock frequency is raised.
    _fcr_set_wait_states(1);

    _gclk0_to_dfll();
    _supc_init();
    _osc_init_sources();
    _gclk_init_generators(0);
    _dfll_init();
    _pll_init(0, VALUE_PLL0CTRL, VALUE_PLL0FBDIV, VALUE_PLL0REFDIV, VALUE_PLL0POSTDIVA, VALUE_PCHCTRL_PLL0);
    _pll_init(1, VALUE_PLL1CTRL, VALUE_PLL1FBDIV, VALUE_PLL1REFDIV, VALUE_PLL1POSTDIVA, VALUE_PCHCTRL_PLL1);
    _gclk_init_generators(1);
    _mclk_init();

    // Final flash wait states (may remove wait states for lower frequencies).
    _fcr_set_wait_states(0);

    _disable_unused_clocks();

    // The configured clock is now active.
    SystemCoreClockUpdate();

    // Enable Floating Point Unit and synchronize the pipeline.
    SCB->CPACR |= ((3UL << 20) | (3UL << 22));
    __DSB();
    __ISB();

#if SYSTEM_ENABLE_ICACHE
    SCB_EnableICache();
#endif

#if SYSTEM_ENABLE_DCACHE
    SCB_EnableDCache();
#endif

    return;
}

/**
 * Update SystemCoreClock variable
 *
 * \brief  Updates the SystemCoreClock with current core Clock
 *         retrieved from cpu registers.
 */
void SystemCoreClockUpdate(void)
{
    /*
     * FOSC_KHZ_VALUE is generated from the JSON top-level "clock" value.
     * For the default configuration it is 300000 kHz
     * (DFLL48M 48 MHz -> PLL0 /12 = 4 MHz x225 = 900 MHz VCO -> POSTDIV0 /3 = 300 MHz
     * -> GCLK0 /1 -> CPU (CLKDIV0) /1 = 300 MHz, bus (CLKDIV1) /2 = 150 MHz).
     */
    SystemCoreClock = __SYSTEM_CLOCK;
    return;
}

/** \cond 0 */
/* *INDENT-OFF* */
#ifdef __cplusplus
}
#endif
/* *INDENT-ON* */
/** \endcond */
