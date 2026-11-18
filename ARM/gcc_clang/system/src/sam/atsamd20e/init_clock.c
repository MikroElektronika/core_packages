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

#include <stdint.h>

/*
 * CMSIS core header is not included by mcu.h of this package, so provide the
 * register qualifiers used by the component headers (same definitions as CMSIS).
 */
#ifndef __I
#ifdef __cplusplus
#define __I     volatile
#else
#define __I     volatile const
#endif
#endif
#ifndef __O
#define __O     volatile
#endif
#ifndef __IO
#define __IO    volatile
#endif

#include "mcu.h"
#include "core_header.h"

/*
 * Some device headers (mcu.h) of this package predate the component headers and
 * do not define the integer-literal helpers used by the component bit-field macros.
 */
#ifndef _UINT8_
#define _UINT8_(x)     ((uint8_t)(x))
#endif
#ifndef _UINT16_
#define _UINT16_(x)    ((uint16_t)(x))
#endif
#ifndef _UINT32_
#define _UINT32_(x)    ((uint32_t)(x))
#endif
#ifndef _U_
#define _U_(x)         (x ## U)
#endif

/** \cond 0 */
/* *INDENT-OFF* */
#ifdef __cplusplus
extern "C" {
#endif
/* *INDENT-ON* */
/** \endcond */

/**
 * System clock frequency, generated from the JSON top-level "clock" value.
 * Default configuration (internal oscillators only):
 *   OSC8M (8 MHz) -> GCLK1 (/256) = 31.25 kHz -> DFLL48M closed loop (MUL 1536)
 *   -> 48 MHz -> GCLK0 -> CPU/AHB/APB (/1), NVM read wait states = 1.
 */
#define __SYSTEM_CLOCK    (FOSC_KHZ_VALUE * 1000UL)

/*
 * Library specific configuration.
 * CLOCK_DFLL_NVM_COARSE_CAL: 1 if the NVM software calibration area holds the
 * DFLL48M coarse calibration value (bits 63:58), 0 otherwise.
 */
#define CLOCK_DFLL_NVM_COARSE_CAL    0

/* NVM software calibration area, second 32-bit word (OTP4 + 4). */
#define CLOCK_NVM_SW_CALIB_WORD1     (*(const volatile uint32_t *)0x00806024UL)
#define CLOCK_NVM_OSC32K_CAL_Pos     6u      /* Bits 44:38 */
#define CLOCK_NVM_OSC32K_CAL_Msk     0x7Fu
#define CLOCK_NVM_DFLL_COARSE_Pos    26u     /* Bits 63:58 */
#define CLOCK_NVM_DFLL_COARSE_Msk    0x3Fu

/*
 * Register access.
 * Harmony style headers (`SYSCTRL_REGS->SYSCTRL_xxx`) are used when available.
 * Otherwise (header packages without Harmony register structures) the registers
 * are accessed at their fixed addresses, which are identical for all SYSCTRL/GCLK
 * based SAM D09/D10/D11/D20/D21/R21/HA devices.
 */
#if defined(SYSCTRL_REGS) && defined(SYSCTRL_PCLKSR_REG_OFST)
#define CLOCK_SYSCTRL(reg)    (SYSCTRL_REGS->SYSCTRL_##reg)
#define CLOCK_GCLK(reg)       (GCLK_REGS->GCLK_##reg)
#define CLOCK_PM(reg)         (PM_REGS->PM_##reg)
#define CLOCK_NVMCTRL(reg)    (NVMCTRL_REGS->NVMCTRL_##reg)
#else
#define CLOCK_REG(type, address)    (*(volatile type *)(address))
#define CLOCK_SYSCTRL(reg)          CLOCK_SYSCTRL_##reg
#define CLOCK_GCLK(reg)             CLOCK_GCLK_##reg
#define CLOCK_PM(reg)               CLOCK_PM_##reg
#define CLOCK_NVMCTRL(reg)          CLOCK_NVMCTRL_##reg
#define CLOCK_SYSCTRL_PCLKSR        CLOCK_REG(uint32_t, 0x4000080CUL)
#define CLOCK_SYSCTRL_XOSC          CLOCK_REG(uint16_t, 0x40000810UL)
#define CLOCK_SYSCTRL_XOSC32K       CLOCK_REG(uint16_t, 0x40000814UL)
#define CLOCK_SYSCTRL_OSC32K        CLOCK_REG(uint32_t, 0x40000818UL)
#define CLOCK_SYSCTRL_OSCULP32K     CLOCK_REG(uint8_t,  0x4000081CUL)
#define CLOCK_SYSCTRL_OSC8M         CLOCK_REG(uint32_t, 0x40000820UL)
#define CLOCK_SYSCTRL_DFLLCTRL      CLOCK_REG(uint16_t, 0x40000824UL)
#define CLOCK_SYSCTRL_DFLLVAL       CLOCK_REG(uint32_t, 0x40000828UL)
#define CLOCK_SYSCTRL_DFLLMUL       CLOCK_REG(uint32_t, 0x4000082CUL)
#define CLOCK_SYSCTRL_DPLLCTRLA     CLOCK_REG(uint8_t,  0x40000844UL)
#define CLOCK_SYSCTRL_DPLLRATIO     CLOCK_REG(uint32_t, 0x40000848UL)
#define CLOCK_SYSCTRL_DPLLCTRLB     CLOCK_REG(uint32_t, 0x4000084CUL)
#define CLOCK_SYSCTRL_DPLLSTATUS    CLOCK_REG(uint8_t,  0x40000850UL)
#define CLOCK_GCLK_STATUS           CLOCK_REG(uint8_t,  0x40000C01UL)
#define CLOCK_GCLK_CLKCTRL          CLOCK_REG(uint16_t, 0x40000C02UL)
#define CLOCK_GCLK_GENCTRL          CLOCK_REG(uint32_t, 0x40000C04UL)
#define CLOCK_GCLK_GENDIV           CLOCK_REG(uint32_t, 0x40000C08UL)
#define CLOCK_PM_CPUSEL             CLOCK_REG(uint8_t,  0x40000408UL)
#define CLOCK_PM_APBASEL            CLOCK_REG(uint8_t,  0x40000409UL)
#define CLOCK_PM_APBBSEL            CLOCK_REG(uint8_t,  0x4000040AUL)
#define CLOCK_PM_APBCSEL            CLOCK_REG(uint8_t,  0x4000040BUL)
#define CLOCK_NVMCTRL_CTRLB         CLOCK_REG(uint32_t, 0x41004004UL)
#endif

/* Single bit mask from a header bit position (works with every header style). */
#define CLOCK_BIT(pos)                ((uint32_t)1u << (pos))
#define CLOCK_IS_SET(value, pos)      (0u != ((uint32_t)(value) & CLOCK_BIT(pos)))
#define CLOCK_GEN_SRC(genctrl)        (((uint32_t)(genctrl) & GCLK_GENCTRL_SRC_Msk) >> GCLK_GENCTRL_SRC_Pos)

/* Generic clock generators, configured from the per-generator "virtual" registers. */
typedef struct {
    uint32_t genctrl;
    uint32_t gendiv;
} clock_generator_t;

static const clock_generator_t clock_generators[] = {
#if defined(VALUE_GENCTRL1) && defined(VALUE_GENDIV1)
    { VALUE_GENCTRL1, VALUE_GENDIV1 },
#endif
#if defined(VALUE_GENCTRL2) && defined(VALUE_GENDIV2)
    { VALUE_GENCTRL2, VALUE_GENDIV2 },
#endif
#if defined(VALUE_GENCTRL3) && defined(VALUE_GENDIV3)
    { VALUE_GENCTRL3, VALUE_GENDIV3 },
#endif
#if defined(VALUE_GENCTRL4) && defined(VALUE_GENDIV4)
    { VALUE_GENCTRL4, VALUE_GENDIV4 },
#endif
#if defined(VALUE_GENCTRL5) && defined(VALUE_GENDIV5)
    { VALUE_GENCTRL5, VALUE_GENDIV5 },
#endif
#if defined(VALUE_GENCTRL6) && defined(VALUE_GENDIV6)
    { VALUE_GENCTRL6, VALUE_GENDIV6 },
#endif
#if defined(VALUE_GENCTRL7) && defined(VALUE_GENDIV7)
    { VALUE_GENCTRL7, VALUE_GENDIV7 },
#endif
#if defined(VALUE_GENCTRL8) && defined(VALUE_GENDIV8)
    { VALUE_GENCTRL8, VALUE_GENDIV8 },
#endif
    { 0u, 0u }  /* End marker (GENEN cleared). */
};

static void _gclk_sync(void)
{
    while (CLOCK_GCLK(STATUS) & CLOCK_BIT(GCLK_STATUS_SYNCBUSY_Pos)) {
        /* Wait for GCLK register synchronization */
    }
}

static void _dfll_sync(void)
{
    while (!(CLOCK_SYSCTRL(PCLKSR) & CLOCK_BIT(SYSCTRL_PCLKSR_DFLLRDY_Pos))) {
        /* Wait until DFLL registers are synchronized */
    }
}

static void _gclk_write_generator(uint32_t genctrl, uint32_t gendiv)
{
    // GENDIV/GENCTRL are indirectly addressed: ID field selects the generator.
    CLOCK_GCLK(GENDIV) = gendiv;
    _gclk_sync();
    CLOCK_GCLK(GENCTRL) = genctrl;
    _gclk_sync();
}

/**
 * \brief Generators that are sourced from DFLL48M/FDPLL96M or from GCLKGEN1
 *        must be configured after their source is running.
 */
static uint32_t _gclk_generator_is_late(uint32_t genctrl)
{
    uint32_t src = CLOCK_GEN_SRC(genctrl);

    return (src >= GCLK_GENCTRL_SRC_DFLL48M_Val) || (src == GCLK_GENCTRL_SRC_GCLKGEN1_Val);
}

/**
 * \brief Configure generators 1..n which are enabled in the configuration.
 *        Disabled generators are left in their reset state.
 */
static void _gclk_init_generators(uint32_t late)
{
    const clock_generator_t *gen;

    for (gen = clock_generators; gen->genctrl || gen->gendiv; gen++) {
        if (!CLOCK_IS_SET(gen->genctrl, GCLK_GENCTRL_GENEN_Pos)) {
            continue;
        }
        if (late == _gclk_generator_is_late(gen->genctrl)) {
            _gclk_write_generator(gen->genctrl, gen->gendiv);
        }
    }
}

/**
 * \brief Flash wait states. Must be set before the frequency is raised
 *        (SystemInit runs from reset at 1 MHz, OSC8M/8).
 */
static void _nvmctrl_set_wait_states(void)
{
    uint32_t data = CLOCK_NVMCTRL(CTRLB) & ~NVMCTRL_CTRLB_RWS_Msk;

    data |= VALUE_NVMCTRL_CTRLB & NVMCTRL_CTRLB_RWS_Msk;
    CLOCK_NVMCTRL(CTRLB) = data;
}

/**
 * \brief CPU and APB bus dividers. APBx dividers are written first so that an
 *        APB clock never becomes faster than the CPU clock.
 */
static void _pm_init_dividers(void)
{
    CLOCK_PM(APBASEL) = (uint8_t)(VALUE_APBASEL & PM_APBASEL_APBADIV_Msk);
    CLOCK_PM(APBBSEL) = (uint8_t)(VALUE_APBBSEL & PM_APBBSEL_APBBDIV_Msk);
    CLOCK_PM(APBCSEL) = (uint8_t)(VALUE_APBCSEL & PM_APBCSEL_APBCDIV_Msk);
    CLOCK_PM(CPUSEL) = (uint8_t)(VALUE_CPUSEL & PM_CPUSEL_CPUDIV_Msk);
}

/**
 * \brief Initialize clock sources.
 *
 * Every oscillator is first started with ONDEMAND cleared (otherwise it would
 * not run without a request and the ready flag would never be set), then the
 * final ONDEMAND/WRTLOCK/AMPGC settings are applied.
 */
static void _sysctrl_init_sources(void)
{
    uint32_t data;

    /* OSC8M: keep the factory CALIB/FRANGE, apply prescaler. OSC8M stays
       enabled here because it clocks GCLK0 at reset; it is disabled later if requested. */
    data = CLOCK_SYSCTRL(OSC8M) & (SYSCTRL_OSC8M_CALIB_Msk | SYSCTRL_OSC8M_FRANGE_Msk);
    data |= VALUE_OSC8M & (SYSCTRL_OSC8M_PRESC_Msk | CLOCK_BIT(SYSCTRL_OSC8M_RUNSTDBY_Pos));
    data |= CLOCK_BIT(SYSCTRL_OSC8M_ENABLE_Pos);
    CLOCK_SYSCTRL(OSC8M) = data;
    while (!(CLOCK_SYSCTRL(PCLKSR) & CLOCK_BIT(SYSCTRL_PCLKSR_OSC8MRDY_Pos))) {
        /* Wait until OSC8M is ready */
    }

    /* OSC32K: calibration value must be loaded from NVM by software. */
    if (CLOCK_IS_SET(VALUE_OSC32K, SYSCTRL_OSC32K_ENABLE_Pos)) {
        uint32_t calib = (CLOCK_NVM_SW_CALIB_WORD1 >> CLOCK_NVM_OSC32K_CAL_Pos) & CLOCK_NVM_OSC32K_CAL_Msk;

        data = VALUE_OSC32K & ~(SYSCTRL_OSC32K_CALIB_Msk | CLOCK_BIT(SYSCTRL_OSC32K_ONDEMAND_Pos) |
                                CLOCK_BIT(SYSCTRL_OSC32K_WRTLOCK_Pos));
        data |= (calib << SYSCTRL_OSC32K_CALIB_Pos) & SYSCTRL_OSC32K_CALIB_Msk;
        CLOCK_SYSCTRL(OSC32K) = data;
        while (!(CLOCK_SYSCTRL(PCLKSR) & CLOCK_BIT(SYSCTRL_PCLKSR_OSC32KRDY_Pos))) {
            /* Wait until OSC32K is ready */
        }
        CLOCK_SYSCTRL(OSC32K) = data | (VALUE_OSC32K & (CLOCK_BIT(SYSCTRL_OSC32K_ONDEMAND_Pos) |
                                                        CLOCK_BIT(SYSCTRL_OSC32K_WRTLOCK_Pos)));
    }

    /* XOSC32K: external 32.768 kHz crystal / clock. */
    if (CLOCK_IS_SET(VALUE_XOSC32K, SYSCTRL_XOSC32K_ENABLE_Pos)) {
        data = VALUE_XOSC32K & ~(CLOCK_BIT(SYSCTRL_XOSC32K_ONDEMAND_Pos) | CLOCK_BIT(SYSCTRL_XOSC32K_WRTLOCK_Pos));
        CLOCK_SYSCTRL(XOSC32K) = (uint16_t)data;
        while (!(CLOCK_SYSCTRL(PCLKSR) & CLOCK_BIT(SYSCTRL_PCLKSR_XOSC32KRDY_Pos))) {
            /* Wait until XOSC32K is ready */
        }
        CLOCK_SYSCTRL(XOSC32K) = (uint16_t)VALUE_XOSC32K;
    }

    /* XOSC: AMPGC must only be enabled after the oscillator is stable. */
    if (CLOCK_IS_SET(VALUE_XOSC, SYSCTRL_XOSC_ENABLE_Pos)) {
        data = VALUE_XOSC & ~(CLOCK_BIT(SYSCTRL_XOSC_ONDEMAND_Pos) | CLOCK_BIT(SYSCTRL_XOSC_AMPGC_Pos));
        CLOCK_SYSCTRL(XOSC) = (uint16_t)data;
        while (!(CLOCK_SYSCTRL(PCLKSR) & CLOCK_BIT(SYSCTRL_PCLKSR_XOSCRDY_Pos))) {
            /* Wait until XOSC is ready */
        }
        CLOCK_SYSCTRL(XOSC) = (uint16_t)VALUE_XOSC;
    }

    /* OSCULP32K is always running; only the write lock is configurable. */
    if (CLOCK_IS_SET(VALUE_OSCULP32K, SYSCTRL_OSCULP32K_WRTLOCK_Pos)) {
        CLOCK_SYSCTRL(OSCULP32K) |= (uint8_t)CLOCK_BIT(SYSCTRL_OSCULP32K_WRTLOCK_Pos);
    }
}

/**
 * \brief DFLL48M value: user value, or NVM factory coarse calibration with
 *        mid-range fine value when COARSE = FINE = 0.
 */
static uint32_t _dfll_value(void)
{
    uint32_t coarse = 0x1Fu;

    if (0u != (VALUE_DFLLVAL & (SYSCTRL_DFLLVAL_COARSE_Msk | SYSCTRL_DFLLVAL_FINE_Msk))) {
        return VALUE_DFLLVAL & (SYSCTRL_DFLLVAL_COARSE_Msk | SYSCTRL_DFLLVAL_FINE_Msk);
    }
#if CLOCK_DFLL_NVM_COARSE_CAL
    coarse = (CLOCK_NVM_SW_CALIB_WORD1 >> CLOCK_NVM_DFLL_COARSE_Pos) & CLOCK_NVM_DFLL_COARSE_Msk;
    if (CLOCK_NVM_DFLL_COARSE_Msk == coarse) {
        coarse = 0x1Fu;  // Erased/invalid calibration, use mid-range.
    }
#endif
    return ((coarse << SYSCTRL_DFLLVAL_COARSE_Pos) & SYSCTRL_DFLLVAL_COARSE_Msk) |
           ((512u << SYSCTRL_DFLLVAL_FINE_Pos) & SYSCTRL_DFLLVAL_FINE_Msk);
}

/**
 * \brief Initialize DFLL48M.
 */
static void _sysctrl_init_dfll(void)
{
    uint32_t closed_loop = CLOCK_IS_SET(VALUE_DFLLCTRL, SYSCTRL_DFLLCTRL_MODE_Pos);
    uint32_t usb_recovery = 0u;

    if (!CLOCK_IS_SET(VALUE_DFLLCTRL, SYSCTRL_DFLLCTRL_ENABLE_Pos)) {
        return;
    }
#ifdef SYSCTRL_DFLLCTRL_USBCRM_Pos
    usb_recovery = CLOCK_IS_SET(VALUE_DFLLCTRL, SYSCTRL_DFLLCTRL_USBCRM_Pos);
#endif

    /* Errata: the DFLL must be requested (ONDEMAND cleared) before any DFLL
       register is written, otherwise the device can freeze. */
    CLOCK_SYSCTRL(DFLLCTRL) &= (uint16_t)~CLOCK_BIT(SYSCTRL_DFLLCTRL_ONDEMAND_Pos);
    _dfll_sync();

    if (closed_loop && !usb_recovery) {
        /* Connect the reference generator to GCLK_DFLL48M_REF before enabling. */
        CLOCK_GCLK(CLKCTRL) = (uint16_t)(VALUE_CLKCTRL | CLOCK_BIT(GCLK_CLKCTRL_CLKEN_Pos));
        _gclk_sync();
    }

    CLOCK_SYSCTRL(DFLLMUL) = VALUE_DFLLMUL;
    _dfll_sync();
    CLOCK_SYSCTRL(DFLLVAL) = _dfll_value();
    _dfll_sync();
    CLOCK_SYSCTRL(DFLLCTRL) = (uint16_t)(VALUE_DFLLCTRL & ~CLOCK_BIT(SYSCTRL_DFLLCTRL_ONDEMAND_Pos));
    _dfll_sync();

    if (closed_loop && !usb_recovery) {
        uint32_t mask = CLOCK_BIT(SYSCTRL_PCLKSR_DFLLRDY_Pos) | CLOCK_BIT(SYSCTRL_PCLKSR_DFLLLCKC_Pos) |
                        CLOCK_BIT(SYSCTRL_PCLKSR_DFLLLCKF_Pos);
        while ((CLOCK_SYSCTRL(PCLKSR) & mask) != mask) {
            /* Wait for DFLL coarse and fine lock */
        }
    }

    if (CLOCK_IS_SET(VALUE_DFLLCTRL, SYSCTRL_DFLLCTRL_ONDEMAND_Pos)) {
        CLOCK_SYSCTRL(DFLLCTRL) |= (uint16_t)CLOCK_BIT(SYSCTRL_DFLLCTRL_ONDEMAND_Pos);
        _dfll_sync();
    }
}

/**
 * \brief Initialize FDPLL96M (not present on every device).
 */
static void _sysctrl_init_dpll(void)
{
#if defined(VALUE_DPLLCTRLA) && defined(VALUE_DPLLRATIO) && defined(VALUE_DPLLCTRLB) && \
    defined(SYSCTRL_DPLLCTRLA_ENABLE_Pos)
    uint32_t mask = CLOCK_BIT(SYSCTRL_DPLLSTATUS_CLKRDY_Pos);

    if (!CLOCK_IS_SET(VALUE_DPLLCTRLA, SYSCTRL_DPLLCTRLA_ENABLE_Pos)) {
        return;
    }
    #ifdef VALUE_CLKCTRL_FDPLL
    /* REFCLK = 2: generic clock GCLK_DPLL. */
    if (2u == ((VALUE_DPLLCTRLB & SYSCTRL_DPLLCTRLB_REFCLK_Msk) >> SYSCTRL_DPLLCTRLB_REFCLK_Pos)) {
        CLOCK_GCLK(CLKCTRL) = (uint16_t)(VALUE_CLKCTRL_FDPLL | CLOCK_BIT(GCLK_CLKCTRL_CLKEN_Pos));
        _gclk_sync();
    }
    #endif
    CLOCK_SYSCTRL(DPLLRATIO) = VALUE_DPLLRATIO;
    CLOCK_SYSCTRL(DPLLCTRLB) = VALUE_DPLLCTRLB;
    CLOCK_SYSCTRL(DPLLCTRLA) = (uint8_t)(VALUE_DPLLCTRLA & ~CLOCK_BIT(SYSCTRL_DPLLCTRLA_ONDEMAND_Pos));

    if (!CLOCK_IS_SET(VALUE_DPLLCTRLB, SYSCTRL_DPLLCTRLB_LBYPASS_Pos)) {
        mask |= CLOCK_BIT(SYSCTRL_DPLLSTATUS_LOCK_Pos);
    }
    while ((CLOCK_SYSCTRL(DPLLSTATUS) & mask) != mask) {
        /* Wait for FDPLL96M lock and clock ready */
    }

    if (CLOCK_IS_SET(VALUE_DPLLCTRLA, SYSCTRL_DPLLCTRLA_ONDEMAND_Pos)) {
        CLOCK_SYSCTRL(DPLLCTRLA) |= (uint8_t)CLOCK_BIT(SYSCTRL_DPLLCTRLA_ONDEMAND_Pos);
    }
#endif
}

/**
 * \brief Switch GCLK0 (main clock) to its configured source and apply the
 *        final OSC8M settings.
 */
static void _gclk_init_main_clock(void)
{
    // GCLK0 is always enabled; it clocks the CPU and the buses.
    _gclk_write_generator(VALUE_GENCTRL0 | CLOCK_BIT(GCLK_GENCTRL_GENEN_Pos), VALUE_GENDIV0);

    if (CLOCK_IS_SET(VALUE_OSC8M, SYSCTRL_OSC8M_ONDEMAND_Pos)) {
        CLOCK_SYSCTRL(OSC8M) |= CLOCK_BIT(SYSCTRL_OSC8M_ONDEMAND_Pos);
    }
    if (!CLOCK_IS_SET(VALUE_OSC8M, SYSCTRL_OSC8M_ENABLE_Pos) &&
        (GCLK_GENCTRL_SRC_OSC8M_Val != CLOCK_GEN_SRC(VALUE_GENCTRL0))) {
        CLOCK_SYSCTRL(OSC8M) &= ~CLOCK_BIT(SYSCTRL_OSC8M_ENABLE_Pos);
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

    _nvmctrl_set_wait_states();
    _pm_init_dividers();
    _sysctrl_init_sources();
    // Generators used as DFLL/FDPLL references first.
    _gclk_init_generators(0u);
    _sysctrl_init_dfll();
    _sysctrl_init_dpll();
    // Generators sourced from DFLL48M/FDPLL96M/GCLKGEN1.
    _gclk_init_generators(1u);
    _gclk_init_main_clock();

    // The configured clock is now active.
    SystemCoreClockUpdate();

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
     * For the default configuration it is 48000 kHz.
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
