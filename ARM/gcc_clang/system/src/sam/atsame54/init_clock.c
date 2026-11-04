/****************************************************************************
**
** Copyright (C) 2025 MikroElektronika d.o.o.
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

/*
 * The mcu.h of this family does not include the CMSIS core header, which
 * provides the register access qualifiers used by the peripheral headers.
 * Define them (identically to CMSIS) when they are not available yet.
 * The CMSIS core header is not included here either, because its ITM->PORT
 * member clashes with the PORT peripheral macro of the device headers.
 */
#ifndef __IO
#ifdef __cplusplus
#define __I     volatile
#else
#define __I     volatile const
#endif
#define __O     volatile
#define __IO    volatile
#endif

#include "mcu.h"
#include "core_header.h"

/* Coprocessor Access Control Register (System Control Block). */
#define _SCB_CPACR    (*(volatile uint32_t *)0xE000ED88UL)

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
 * Cortex-M Cache Controller (CMCC) policy. The CMCC only caches the NVM/QSPI
 * instruction and data path and is coherent with DMA for SRAM, so it is safe
 * to keep it enabled. It is recommended at 120 MHz.
 */
#ifndef SYSTEM_ENABLE_CMCC
#define SYSTEM_ENABLE_CMCC    1
#endif

/* Generic clock channel indexes (see instance/oscctrl.h). */
#ifndef OSCCTRL_GCLK_ID_DFLL48
#define OSCCTRL_GCLK_ID_DFLL48    (0U)
#endif
#ifndef OSCCTRL_GCLK_ID_FDPLL0
#define OSCCTRL_GCLK_ID_FDPLL0    (1U)
#endif
#ifndef OSCCTRL_GCLK_ID_FDPLL1
#define OSCCTRL_GCLK_ID_FDPLL1    (2U)
#endif

#define _GCLK_GEN_NUM             (12U)
#define _GCLK_GEN_SYNC_MSK(n)     (1UL << (GCLK_SYNCBUSY_GENCTRL_Pos + (n)))
#define _GCLK_GEN_SRC(value)      ((value) & GCLK_GENCTRL_SRC_Msk)
#define _GCLK_GEN_ENABLED(value)  (0 != ((value) & GCLK_GENCTRL_GENEN))

/* Generator configuration (index = generator number). */
static const uint32_t _gclk_genctrl[_GCLK_GEN_NUM] = {
    VALUE_GENCTRL0, VALUE_GENCTRL1, VALUE_GENCTRL2,  VALUE_GENCTRL3,
    VALUE_GENCTRL4, VALUE_GENCTRL5, VALUE_GENCTRL6,  VALUE_GENCTRL7,
    VALUE_GENCTRL8, VALUE_GENCTRL9, VALUE_GENCTRL10, VALUE_GENCTRL11
};

/**
 * \brief Disable the Watchdog Timer.
 *
 * The WDT is disabled after reset unless it was enabled through the NVM user
 * row fuses. It can not be disabled when the Always-On mode is active.
 */
static void _wdt_disable(void)
{
    if ((WDT->CTRLA.reg & WDT_CTRLA_ENABLE) &&
        !(WDT->CTRLA.reg & WDT_CTRLA_ALWAYSON)) {
        WDT->CTRLA.reg &= (uint8_t)~WDT_CTRLA_ENABLE;
        while (WDT->SYNCBUSY.reg & WDT_SYNCBUSY_ENABLE) {
            /* Wait for synchronization */
        }
    }
}

/**
 * \brief Set NVM read wait states and automatic wait state generation.
 *
 * \param only_increase Write the new setting only if it adds wait states.
 */
static void _nvm_set_wait_states(uint8_t only_increase)
{
    uint16_t data = NVMCTRL->CTRLA.reg;

    if (only_increase &&
        ((VALUE_NVMCTRL_CTRLA & NVMCTRL_CTRLA_RWS_Msk) <= (data & NVMCTRL_CTRLA_RWS_Msk))) {
        return;
    }
    data &= (uint16_t)~(NVMCTRL_CTRLA_RWS_Msk | NVMCTRL_CTRLA_AUTOWS);
    data |= (uint16_t)(VALUE_NVMCTRL_CTRLA & (NVMCTRL_CTRLA_RWS_Msk | NVMCTRL_CTRLA_AUTOWS));
    NVMCTRL->CTRLA.reg = data;
}

/**
 * \brief Write a generic clock generator and wait for synchronization.
 */
static void _gclk_gen_write(uint32_t gen, uint32_t value)
{
    GCLK->GENCTRL[gen].reg = value;
    while (GCLK->SYNCBUSY.reg & _GCLK_GEN_SYNC_MSK(gen)) {
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
    value &= (GCLK_PCHCTRL_GEN_Msk | GCLK_PCHCTRL_CHEN);

    if ((GCLK->PCHCTRL[id].reg & GCLK_PCHCTRL_CHEN) &&
        ((GCLK->PCHCTRL[id].reg & GCLK_PCHCTRL_GEN_Msk) != (value & GCLK_PCHCTRL_GEN_Msk))) {
        GCLK->PCHCTRL[id].reg &= ~GCLK_PCHCTRL_CHEN;
        while (GCLK->PCHCTRL[id].reg & GCLK_PCHCTRL_CHEN) {
            /* Wait until the channel is disabled */
        }
    }
    GCLK->PCHCTRL[id].reg = value;
    if (value & GCLK_PCHCTRL_CHEN) {
        while (!(GCLK->PCHCTRL[id].reg & GCLK_PCHCTRL_CHEN)) {
            /* Wait until the channel is enabled */
        }
    }
}

/**
 * \brief Make sure the CPU runs from the DFLL48M before the clock tree is
 * (re)configured. This is the reset state, so normally nothing is done.
 */
static void _gclk0_to_dfll(void)
{
    if (!(OSCCTRL->DFLLCTRLA.reg & OSCCTRL_DFLLCTRLA_ENABLE)) {
        OSCCTRL->DFLLCTRLA.reg |= OSCCTRL_DFLLCTRLA_ENABLE;
        while (OSCCTRL->DFLLSYNC.reg & OSCCTRL_DFLLSYNC_ENABLE) {
            /* Wait for synchronization */
        }
        while (!(OSCCTRL->STATUS.reg & OSCCTRL_STATUS_DFLLRDY)) {
            /* Wait until the DFLL is ready */
        }
    }
    if (GCLK_GENCTRL_SRC_DFLL != _GCLK_GEN_SRC(GCLK->GENCTRL[0].reg)) {
        _gclk_gen_write(0, GCLK_GENCTRL_SRC_DFLL | GCLK_GENCTRL_GENEN | GCLK_GENCTRL_DIV(1));
    }
}

/**
 * \brief Initialize the crystal oscillators (XOSC0, XOSC1 and XOSC32K).
 *
 * Every enabled oscillator is running when this function returns.
 */
static void _osc_init_sources(void)
{
    // If XOSC0 is enabled.
    if (VALUE_XOSCCTRL0 & OSCCTRL_XOSCCTRL_ENABLE) {
        OSCCTRL->XOSCCTRL[0].reg = VALUE_XOSCCTRL0;
        if (!(VALUE_XOSCCTRL0 & OSCCTRL_XOSCCTRL_ONDEMAND)) {
            while (!(OSCCTRL->STATUS.reg & OSCCTRL_STATUS_XOSCRDY0)) {
                /* Wait until XOSC0 is stable */
            }
        }
    }

    // If XOSC1 is enabled.
    if (VALUE_XOSCCTRL1 & OSCCTRL_XOSCCTRL_ENABLE) {
        OSCCTRL->XOSCCTRL[1].reg = VALUE_XOSCCTRL1;
        if (!(VALUE_XOSCCTRL1 & OSCCTRL_XOSCCTRL_ONDEMAND)) {
            while (!(OSCCTRL->STATUS.reg & OSCCTRL_STATUS_XOSCRDY1)) {
                /* Wait until XOSC1 is stable */
            }
        }
    }

    // If XOSC32K is enabled.
    if (VALUE_XOSC32K & OSC32KCTRL_XOSC32K_ENABLE) {
        OSC32KCTRL->XOSC32K.reg = (uint16_t)VALUE_XOSC32K;
        if (!(VALUE_XOSC32K & OSC32KCTRL_XOSC32K_ONDEMAND)) {
            while (!(OSC32KCTRL->STATUS.reg & OSC32KCTRL_STATUS_XOSC32KRDY)) {
                /* Wait until XOSC32K is stable */
            }
        }
    }
}

/**
 * \brief Initialize the generic clock generators 1..11.
 *
 * \param after_dpll 0: generators that do not depend on a DPLL or on GCLK1,
 *                   1: generators sourced by DPLL0, DPLL1 or GCLK1.
 */
static void _gclk_init_generators(uint8_t after_dpll)
{
    uint32_t gen;
    uint32_t src;
    uint8_t late;

    for (gen = 1; gen < _GCLK_GEN_NUM; gen++) {
        if (!_GCLK_GEN_ENABLED(_gclk_genctrl[gen])) {
            continue;
        }
        src = _GCLK_GEN_SRC(_gclk_genctrl[gen]);
        late = (GCLK_GENCTRL_SRC_DPLL0 == src) || (GCLK_GENCTRL_SRC_DPLL1 == src) ||
               (GCLK_GENCTRL_SRC_GCLKGEN1 == src);
        if (late == after_dpll) {
            _gclk_gen_write(gen, _gclk_genctrl[gen]);
        }
    }
}

/**
 * \brief Initialize the DFLL48M.
 *
 * The DFLL48M runs in open loop mode after reset. It is never disabled here
 * because it may be clocking the CPU.
 */
static void _dfll_init(void)
{
    // If closed loop (or USB clock recovery) mode is selected.
    if (VALUE_DFLLCTRLB & OSCCTRL_DFLLCTRLB_MODE) {
        if (!(VALUE_DFLLCTRLB & OSCCTRL_DFLLCTRLB_USBCRM)) {
            // Reference clock from a generic clock generator.
            _gclk_channel_write(OSCCTRL_GCLK_ID_DFLL48, VALUE_PCHCTRL_DFLL48 | GCLK_PCHCTRL_CHEN);
        }
        OSCCTRL->DFLLMUL.reg = VALUE_DFLLMUL;
        while (OSCCTRL->DFLLSYNC.reg & OSCCTRL_DFLLSYNC_DFLLMUL) {
            /* Wait for synchronization */
        }
        // Reload the current tuning values (recommended before closed loop).
        OSCCTRL->DFLLVAL.reg = OSCCTRL->DFLLVAL.reg;
        while (OSCCTRL->DFLLSYNC.reg & OSCCTRL_DFLLSYNC_DFLLVAL) {
            /* Wait for synchronization */
        }
        OSCCTRL->DFLLCTRLB.reg = (uint8_t)VALUE_DFLLCTRLB;
        while (OSCCTRL->DFLLSYNC.reg & OSCCTRL_DFLLSYNC_DFLLCTRLB) {
            /* Wait for synchronization */
        }
        while (!(OSCCTRL->STATUS.reg & OSCCTRL_STATUS_DFLLRDY)) {
            /* Wait until the DFLL is ready */
        }
        if (!(VALUE_DFLLCTRLB & OSCCTRL_DFLLCTRLB_USBCRM)) {
            while (!(OSCCTRL->STATUS.reg & OSCCTRL_STATUS_DFLLLCKC)) {
                /* Wait for the coarse lock */
            }
        }
    }

    // Apply RUNSTDBY/ONDEMAND while keeping the DFLL enabled.
    if ((OSCCTRL->DFLLCTRLA.reg & ~OSCCTRL_DFLLCTRLA_ENABLE) !=
        (VALUE_DFLLCTRLA & ~OSCCTRL_DFLLCTRLA_ENABLE)) {
        OSCCTRL->DFLLCTRLA.reg = (uint8_t)(VALUE_DFLLCTRLA | OSCCTRL_DFLLCTRLA_ENABLE);
        while (OSCCTRL->DFLLSYNC.reg & OSCCTRL_DFLLSYNC_ENABLE) {
            /* Wait for synchronization */
        }
    }
}

/**
 * \brief Initialize one fractional digital PLL.
 *
 * The DPLL is locked and ready when this function returns (unless it runs on
 * demand).
 */
static void _dpll_init(uint32_t n, uint32_t ctrla, uint32_t ratio, uint32_t ctrlb,
                       uint32_t pchctrl, uint32_t gclk_id)
{
    if (!(ctrla & OSCCTRL_DPLLCTRLA_ENABLE)) {
        return;
    }

    // Stop the DPLL first if it is already running.
    if (OSCCTRL->Dpll[n].DPLLCTRLA.reg & OSCCTRL_DPLLCTRLA_ENABLE) {
        OSCCTRL->Dpll[n].DPLLCTRLA.reg = 0;
        while (OSCCTRL->Dpll[n].DPLLSYNCBUSY.reg & OSCCTRL_DPLLSYNCBUSY_ENABLE) {
            /* Wait for synchronization */
        }
    }

    // If the dedicated generic clock is selected as reference.
    if (OSCCTRL_DPLLCTRLB_REFCLK_GCLK == (ctrlb & OSCCTRL_DPLLCTRLB_REFCLK_Msk)) {
        _gclk_channel_write(gclk_id, pchctrl | GCLK_PCHCTRL_CHEN);
    }

    OSCCTRL->Dpll[n].DPLLCTRLB.reg = ctrlb;
    OSCCTRL->Dpll[n].DPLLRATIO.reg = ratio;
    while (OSCCTRL->Dpll[n].DPLLSYNCBUSY.reg & OSCCTRL_DPLLSYNCBUSY_DPLLRATIO) {
        /* Wait for synchronization */
    }
    OSCCTRL->Dpll[n].DPLLCTRLA.reg = (uint8_t)ctrla;
    while (OSCCTRL->Dpll[n].DPLLSYNCBUSY.reg & OSCCTRL_DPLLSYNCBUSY_ENABLE) {
        /* Wait for synchronization */
    }
    if (!(ctrla & OSCCTRL_DPLLCTRLA_ONDEMAND)) {
        while ((OSCCTRL->Dpll[n].DPLLSTATUS.reg &
                (OSCCTRL_DPLLSTATUS_LOCK | OSCCTRL_DPLLSTATUS_CLKRDY)) !=
               (OSCCTRL_DPLLSTATUS_LOCK | OSCCTRL_DPLLSTATUS_CLKRDY)) {
            /* Wait until the DPLL is locked and ready */
        }
    }
}

/**
 * \brief Initialize the main clock: CPU divider and generator 0.
 */
static void _mclk_init(void)
{
    MCLK->CPUDIV.reg = (uint8_t)VALUE_CPUDIV;
    while (!(MCLK->INTFLAG.reg & MCLK_INTFLAG_CKRDY)) {
        /* Wait until the main clock is ready */
    }

    // Switch generator 0 (CPU/main clock) to the configured source.
    _gclk_gen_write(0, VALUE_GENCTRL0 | GCLK_GENCTRL_GENEN);
}

/**
 * \brief Return 1 if an enabled generator uses the given source.
 */
static uint8_t _gclk_source_used(uint32_t src)
{
    uint32_t gen;

    for (gen = 0; gen < _GCLK_GEN_NUM; gen++) {
        if (_GCLK_GEN_ENABLED(_gclk_genctrl[gen]) && (src == _GCLK_GEN_SRC(_gclk_genctrl[gen]))) {
            return 1;
        }
    }
    return 0;
}

/**
 * \brief Disable the clocks that are not used by the configuration.
 */
static void _disable_unused_clocks(void)
{
    uint32_t gen;

    // Disable generators 1..11 that are not enabled in the configuration.
    for (gen = 1; gen < _GCLK_GEN_NUM; gen++) {
        if (!_GCLK_GEN_ENABLED(_gclk_genctrl[gen]) &&
            (GCLK->GENCTRL[gen].reg & GCLK_GENCTRL_GENEN)) {
            _gclk_gen_write(gen, _gclk_genctrl[gen]);
        }
    }

    // Disable DPLL0 if it is not enabled in the configuration.
    if (!(VALUE_DPLL0CTRLA & OSCCTRL_DPLLCTRLA_ENABLE) &&
        !_gclk_source_used(GCLK_GENCTRL_SRC_DPLL0) &&
        (OSCCTRL->Dpll[0].DPLLCTRLA.reg & OSCCTRL_DPLLCTRLA_ENABLE)) {
        OSCCTRL->Dpll[0].DPLLCTRLA.reg = 0;
        while (OSCCTRL->Dpll[0].DPLLSYNCBUSY.reg & OSCCTRL_DPLLSYNCBUSY_ENABLE) {
            /* Wait for synchronization */
        }
    }

    // Disable DPLL1 if it is not enabled in the configuration.
    if (!(VALUE_DPLL1CTRLA & OSCCTRL_DPLLCTRLA_ENABLE) &&
        !_gclk_source_used(GCLK_GENCTRL_SRC_DPLL1) &&
        (OSCCTRL->Dpll[1].DPLLCTRLA.reg & OSCCTRL_DPLLCTRLA_ENABLE)) {
        OSCCTRL->Dpll[1].DPLLCTRLA.reg = 0;
        while (OSCCTRL->Dpll[1].DPLLSYNCBUSY.reg & OSCCTRL_DPLLSYNCBUSY_ENABLE) {
            /* Wait for synchronization */
        }
    }

    // Disable the DFLL48M if it is not enabled and no generator uses it.
    if (!(VALUE_DFLLCTRLA & OSCCTRL_DFLLCTRLA_ENABLE) &&
        !_gclk_source_used(GCLK_GENCTRL_SRC_DFLL)) {
        OSCCTRL->DFLLCTRLA.reg = (uint8_t)VALUE_DFLLCTRLA;
        while (OSCCTRL->DFLLSYNC.reg & OSCCTRL_DFLLSYNC_ENABLE) {
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

    // Disable Watchdog Timer (only enabled after reset by the user row fuses).
    _wdt_disable();

    // Add NVM wait states before the clock frequency is raised.
    _nvm_set_wait_states(1);

    _gclk0_to_dfll();
    _osc_init_sources();
    _gclk_init_generators(0);
    _dfll_init();
    _dpll_init(0, VALUE_DPLL0CTRLA, VALUE_DPLL0RATIO, VALUE_DPLL0CTRLB,
               VALUE_PCHCTRL_FDPLL0, OSCCTRL_GCLK_ID_FDPLL0);
    _dpll_init(1, VALUE_DPLL1CTRLA, VALUE_DPLL1RATIO, VALUE_DPLL1CTRLB,
               VALUE_PCHCTRL_FDPLL1, OSCCTRL_GCLK_ID_FDPLL1);
    _gclk_init_generators(1);
    _mclk_init();

    // Final NVM wait states (may remove wait states for lower frequencies).
    _nvm_set_wait_states(0);

    _disable_unused_clocks();

    // The configured clock is now active.
    SystemCoreClockUpdate();

    // Enable Floating Point Unit and synchronize the pipeline.
    _SCB_CPACR |= ((3UL << 20) | (3UL << 22));
    __asm volatile ("dsb 0xF" ::: "memory");
    __asm volatile ("isb 0xF" ::: "memory");

#if SYSTEM_ENABLE_CMCC
    // Enable the Cortex-M Cache Controller.
    if (!(CMCC->SR.reg & CMCC_SR_CSTS)) {
        CMCC->CTRL.reg = CMCC_CTRL_CEN;
    }
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
     * For the default configuration it is 120000 kHz
     * (DFLL48M -> GCLK1 /48 = 1 MHz -> DPLL0 x120 -> GCLK0 /1 -> CPU /1).
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
