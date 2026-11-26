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
 * @brief Mikroe clock initialization API (S6E2C).
 *
 * Clock generation unit (CRG) of the FM4 S6E2C (Cortex-M4F) devices of this group.
 *
 * Default configuration (def file "config_registers"):
 *   High-speed CR (4 MHz) -> PLL (K=1, N=47, M=2, VCO 376 MHz) = 188 MHz HCLK
 * The main oscillator (crystal) and the main PLL fed by the crystal are
 * selectable through SCM_CTL.RCS / PSW_TMR.PINC; this file brings up
 * whatever the VALUE_* macros select.
 *
 * Limits (data sheets: S6E2C1..S6E2CC DS709-00009..14):
 *   HCLK <= 200 MHz, PCLK0 <= 100 MHz, PCLK1 <= 200 MHz, PCLK2 <= 100 MHz
 *   High-speed CR trimmed 3.88..4.12 MHz; with the CR as PLL input:
 *   N*M = 50..95, PLL macro clock 190..400 MHz, CLKPLL <= 200 MHz.
 */

#include "core_header.h"
#include "mcu.h"
#include <stdint.h>

/** \cond 0 */
/* *INDENT-OFF* */
#ifdef __cplusplus
extern "C" {
#endif
/* *INDENT-ON* */
/** \endcond */

/** System core clock (HCLK) frequency in Hz, from the def file "clock" value. */
#define __SYSTEM_CLOCK    ((uint32_t)(FOSC_KHZ_VALUE * 1000UL))

/* Register access helpers (the device headers of the FM series name the
 * register structures differently, so the registers are accessed by address). */
#define FM_REG8(addr)     (*(volatile uint8_t *)(addr))
#define FM_REG16(addr)    (*(volatile uint16_t *)(addr))
#define FM_REG32(addr)    (*(volatile uint32_t *)(addr))

/* Clock generation unit (CRG) */
#define CRG_SCM_CTL       FM_REG8(ADDRESS_SCM_CTL)
#define CRG_SCM_STR       FM_REG8(0x40010004UL)
#define CRG_BSC_PSR       FM_REG8(ADDRESS_BSC_PSR)
#define CRG_APBC0_PSR     FM_REG8(ADDRESS_APBC0_PSR)
#define CRG_APBC1_PSR     FM_REG8(ADDRESS_APBC1_PSR)
#define CRG_APBC2_PSR     FM_REG8(ADDRESS_APBC2_PSR)
#define CRG_CSW_TMR       FM_REG8(ADDRESS_CSW_TMR)
#define CRG_PSW_TMR       FM_REG8(ADDRESS_PSW_TMR)
#define CRG_PLL_CTL1      FM_REG8(ADDRESS_PLL_CTL1)
#define CRG_PLL_CTL2      FM_REG8(ADDRESS_PLL_CTL2)

#define SCM_CTL_MOSCE     (0x02U)    /* main oscillator enable */
#define SCM_CTL_PLLE      (0x10U)    /* main PLL enable */
#define SCM_CTL_RCS_MSK   (0xE0U)    /* master clock switch */
#define SCM_STR_MORDY     (0x02U)    /* main oscillator stable */
#define SCM_STR_PLRDY     (0x10U)    /* main PLL stable */
#define SCM_STR_RCM_MSK   (0xE0U)    /* active master clock */
#define PSW_TMR_PINC      (0x10U)    /* PLL input: 0 = main oscillator, 1 = high-speed CR */

#define RCS_HIGH_SPEED_CR (0x00U)
#define RCS_MAIN_OSC      (0x20U)
#define RCS_MAIN_PLL      (0x40U)

/* Hardware watchdog (enabled after reset) */
#define HWWDT_WDG_CTL     FM_REG8(0x40011008UL)
#define HWWDT_WDG_LCK     FM_REG32(0x40011C00UL)

/* CR trimming: factory trimming data (flash interface CRTRMM) -> CRTRIM unit */
#define FLASH_IF_FRWTR    FM_REG32(0x40000004UL)
#define FLASH_IF_CRTRMM   FM_REG32(0x40000100UL)
#define CRTRIM_MCR_FTRM   FM_REG16(0x4002E004UL)
#define CRTRIM_MCR_TTRM   FM_REG8(0x4002E008UL)
#define CRTRIM_MCR_RLR    FM_REG32(0x4002E00CUL)
#define CRTRIM_UNLOCK     (0x1ACCE554UL)

/* Clock source selected by the configuration */
#define CFG_RCS           (VALUE_SCM_CTL & SCM_CTL_RCS_MSK)
#define CFG_PLL_FROM_CR   (0U != (VALUE_PSW_TMR & PSW_TMR_PINC))
#define CFG_NEEDS_MAIN_OSC ((RCS_MAIN_OSC == CFG_RCS) || ((RCS_MAIN_PLL == CFG_RCS) && !CFG_PLL_FROM_CR))

/* FRWTR.RWT valid up to 200 MHz HCLK (data sheet current tables: RWT=00 <= 72 MHz, RWT=10 <= 160 MHz, RWT=11 above). */
#define FLASH_RWT         (3UL)

/* Busy-wait loop iterations covering the CR frequency stabilization time
 * after trimming (30 us at <= 5.2 MHz, >= 1 cycle per iteration). */
#define CR_TRIM_SETTLE_LOOPS (156UL)

uint32_t SystemCoreClock = __SYSTEM_CLOCK;

/*
 * The hardware watchdog runs after every reset and would reset a typical
 * application, so it is stopped here (like the vendor SystemInit with
 * HWWD_DISABLE = 1). The application can restart it with its own driver.
 */
static void _hw_watchdog_disable(void)
{
    HWWDT_WDG_LCK = 0x1ACCE551UL;    /* unlock sequence */
    HWWDT_WDG_LCK = 0xE5331AAEUL;    /* (inverted key) */
    HWWDT_WDG_CTL = 0x00U;           /* stop counter and reset output */
}

#if defined(__FPU_PRESENT) && (__FPU_PRESENT == 1U)
/* Cortex-M4F: grant full access to CP10/CP11 (FPU) - the code is built for
 * the hard-float ABI. */
static void _fpu_enable(void)
{
    SCB->CPACR |= (3UL << 20) | (3UL << 22);
    __DSB();
    __ISB();
}
#endif

/*
 * The high-speed CR is not trimmed out of reset. Load the factory trimming
 * data (frequency and temperature) when it is programmed; the trimmed CR is
 * mandatory when it feeds the main PLL.
 */
static void _cr_trimming_load(void)
{
    uint32_t trim = FLASH_IF_CRTRMM;
    volatile uint32_t i;

    if (0x3FFUL != (trim & 0x3FFUL)) {
        CRTRIM_MCR_RLR = CRTRIM_UNLOCK;
        CRTRIM_MCR_TTRM = (uint8_t)(trim >> 16);
        CRTRIM_MCR_FTRM = (uint16_t)(trim & 0xFFFFUL);
        CRTRIM_MCR_RLR = 0UL;
        for (i = 0; i < CR_TRIM_SETTLE_LOOPS; i++) {
        }
    }
}

/* Switch the master clock and wait until the switch is effective. */
static void _master_clock_select(uint8_t rcs)
{
    CRG_SCM_CTL = (uint8_t)((CRG_SCM_CTL & (uint8_t)~SCM_CTL_RCS_MSK) | rcs);
    while ((CRG_SCM_STR & SCM_STR_RCM_MSK) != rcs) {
    }
}

/*
 * The CRG registers are not initialized by a software reset. Bring the
 * clock tree back to its reset state (high-speed CR, PLL off) so the PLL
 * can be reprogrammed.
 */
static void _clock_safe_state(void)
{
    if (RCS_HIGH_SPEED_CR != (CRG_SCM_STR & SCM_STR_RCM_MSK)) {
        _master_clock_select(RCS_HIGH_SPEED_CR);
    }
    if (0U != (CRG_SCM_CTL & SCM_CTL_PLLE)) {
        CRG_SCM_CTL &= (uint8_t)~SCM_CTL_PLLE;
        while (0U != (CRG_SCM_STR & SCM_STR_PLRDY)) {
        }
    }
}

/* Bus clock dividers must be set before the master clock is raised. */
static void _bus_prescalers_set(void)
{
    CRG_BSC_PSR = (uint8_t)VALUE_BSC_PSR;
    CRG_APBC0_PSR = (uint8_t)VALUE_APBC0_PSR;
    CRG_APBC1_PSR = (uint8_t)VALUE_APBC1_PSR;
    CRG_APBC2_PSR = (uint8_t)VALUE_APBC2_PSR;
}

/*
 * Flash read wait cycles (FRWTR.RWT). The value written is valid up to the
 * maximum HCLK of the device (200 MHz), so it covers every clock the
 * configuration can select and is set before the clock is raised.
 */
static void _flash_wait_set(void)
{
    FLASH_IF_FRWTR = FLASH_RWT;
    while (FLASH_RWT != (FLASH_IF_FRWTR & 0x3UL)) {
    }
}

static void _main_oscillator_start(void)
{
    if (0U == (CRG_SCM_STR & SCM_STR_MORDY)) {
        /* the stabilization wait time must be set before MOSCE is set */
        CRG_CSW_TMR = (uint8_t)((CRG_CSW_TMR & 0xF0U) | (VALUE_CSW_TMR & 0x0FU));
        CRG_SCM_CTL |= SCM_CTL_MOSCE;
        while (0U == (CRG_SCM_STR & SCM_STR_MORDY)) {
        }
    }
}

static void _main_pll_start(void)
{
    /* input clock, lock wait time and dividers must be set while PLLE = 0 */
    CRG_PSW_TMR = (uint8_t)VALUE_PSW_TMR;
    CRG_PLL_CTL1 = (uint8_t)VALUE_PLL_CTL1;
    CRG_PLL_CTL2 = (uint8_t)VALUE_PLL_CTL2;
    CRG_SCM_CTL |= SCM_CTL_PLLE;
    while (0U == (CRG_SCM_STR & SCM_STR_PLRDY)) {
    }
}

void SystemInit(void)
{
    _hw_watchdog_disable();
#if defined(__FPU_PRESENT) && (__FPU_PRESENT == 1U)
    _fpu_enable();
#endif
    _cr_trimming_load();
    _clock_safe_state();
    _bus_prescalers_set();
    _flash_wait_set();

    if (CFG_NEEDS_MAIN_OSC) {
        _main_oscillator_start();
    }
    if (RCS_MAIN_PLL == CFG_RCS) {
        _main_pll_start();
    }
    if (RCS_HIGH_SPEED_CR != CFG_RCS) {
        _master_clock_select((uint8_t)CFG_RCS);
    }

    SystemCoreClock = __SYSTEM_CLOCK;
}

void SystemCoreClockUpdate(void)
{
    SystemCoreClock = __SYSTEM_CLOCK;
}

/** \cond 0 */
/* *INDENT-OFF* */
#ifdef __cplusplus
}
#endif
/* *INDENT-ON* */
/** \endcond */

// ------------------------------------------------------------------------- END
