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
 *
 * FM3 MB9AA40NA (cy9afa41): clock generation unit (CRG) setup from the NECTO
 * config registers (VALUE_<register> in core_header.h).
 *
 * Default configuration: high-speed CR (4 MHz, trimmed) -> main PLL
 * (PSW_TMR.PINC = 1, K = 1):
 *   MB9AA40NA: N = 9, M = 3 (VCO 108 MHz) -> HCLK = 36 MHz (max 40),
 *       PCLK0/1/2 = HCLK / 1
 * The PLL multiplier keeps HCLK within the datasheet maximum even with the
 * worst case trimmed CR frequency (4.2 MHz). The main crystal (directly or
 * through the PLL with PINC = 0) and the sub oscillator / low-speed CR can be
 * selected through the config registers.
 *
 * Sequence (FM3 peripheral manual, chapter "Clock"; vendor system_mb9xxxx.c):
 *  1. stop the hardware watchdog (it runs after reset; the vendor SystemInit
 *     stops it as well),
 *  2. load the factory CR trimming data (CRTRMM) - the CR must be trimmed
 *     before it is used as PLL input,
 *  3. run from the high-speed CR and stop the PLL (soft reset / debugger),
 *  4. set the HCLK/PCLK prescalers,
 *  5. start the oscillators needed by the configuration and wait for their
 *     stabilization (CSW_TMR), program and start the PLL (PSW_TMR, PLL_CTL1/2)
 *     and wait for its lock,
 *  6. switch the master clock (SCM_CTL.RCS) and wait until SCM_STR.RCM follows.
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
 * System clock frequency, generated from the top-level "clock" value of the
 * MCU definition (MHz).
 */
#define __SYSTEM_CLOCK    (FOSC_KHZ_VALUE * 1000UL)

/* SCM_CTL / SCM_STR */
#define SCM_CTL_MOSCE       (1UL << 1)
#define SCM_CTL_SOSCE       (1UL << 3)
#define SCM_CTL_PLLE        (1UL << 4)
#define SCM_CTL_RCS_Msk     (7UL << 5)
#define SCM_STR_MORDY       (1UL << 1)
#define SCM_STR_SORDY       (1UL << 3)
#define SCM_STR_PLRDY       (1UL << 4)
#define SCM_STR_RCM_Msk     (7UL << 5)
#define RCS_HIGH_SPEED_CR   (0UL << 5)
#define RCS_MAIN_OSC        (1UL << 5)
#define RCS_MAIN_PLL        (2UL << 5)
#define RCS_SUB_OSC         (5UL << 5)

/* PSW_TMR.PINC: PLL input clock (0 = main oscillator, 1 = high-speed CR) */
#define PSW_TMR_PINC        (1UL << 4)

/* SWC_PSR.TESTB must always be written with 1 */
#define SWC_PSR_TESTB       (1UL << 7)

/* Hardware watchdog unlock keys */
#define HWWDT_UNLOCK_KEY    (0x1ACCE551UL)
#define HWWDT_UNLOCK_KEY_N  (0xE5331AAEUL)

/* CR trimming register unlock key */
#define CRTRIM_UNLOCK_KEY   (0x1ACCE554UL)
#define CRTRMM_FTRM_Msk     (0x3FFUL)

/* Clock sources required by the configuration */
#define CLK_RCS             (VALUE_SCM_CTL & SCM_CTL_RCS_Msk)
#define CLK_PLL_USED        ((RCS_MAIN_PLL == CLK_RCS) || (0 != (VALUE_SCM_CTL & SCM_CTL_PLLE)))
#define CLK_PLL_FROM_MOSC   (0 == (VALUE_PSW_TMR & PSW_TMR_PINC))
#define CLK_MOSC_USED       ((0 != (VALUE_SCM_CTL & SCM_CTL_MOSCE)) || (RCS_MAIN_OSC == CLK_RCS) || \
                             (CLK_PLL_USED && CLK_PLL_FROM_MOSC))
#define CLK_SOSC_USED       ((0 != (VALUE_SCM_CTL & SCM_CTL_SOSCE)) || (RCS_SUB_OSC == CLK_RCS))

uint32_t SystemCoreClock = __SYSTEM_CLOCK;  /*!< System Clock Frequency (Core Clock)*/

void SystemInit(void);
void SystemCoreClockUpdate(void);

/**
 * \brief Stop the hardware watchdog (enabled after reset).
 */
static void _hwwdt_disable(void)
{
    FM3_HWWDT->WDG_LCK = HWWDT_UNLOCK_KEY;
    FM3_HWWDT->WDG_LCK = HWWDT_UNLOCK_KEY_N;
    FM3_HWWDT->WDG_CTL = 0;
}

/**
 * \brief Load the factory trimming data of the high-speed CR from the flash
 *        (CR trimming area, mirrored in FLASH_IF CRTRMM) if it is programmed.
 */
static void _cr_trim(void)
{
    uint32_t trim = FM3_FLASH_IF->CRTRMM;

    if (CRTRMM_FTRM_Msk != (trim & CRTRMM_FTRM_Msk)) {
        FM3_CRTRIM->MCR_RLR = CRTRIM_UNLOCK_KEY;
        FM3_CRTRIM->MCR_FTRM = (uint16_t)(trim & CRTRMM_FTRM_Msk);
        FM3_CRTRIM->MCR_RLR = 0;
    }
}

/**
 * \brief Make sure the master clock is the high-speed CR and the PLL is
 *        stopped before the clock tree is reprogrammed.
 */
static void _clock_switch_to_high_speed_cr(void)
{
    if (RCS_HIGH_SPEED_CR != (FM3_CRG->SCM_STR & SCM_STR_RCM_Msk)) {
        FM3_CRG->SCM_CTL = (uint8_t)((FM3_CRG->SCM_CTL & ~SCM_CTL_RCS_Msk) | RCS_HIGH_SPEED_CR);
        while (RCS_HIGH_SPEED_CR != (FM3_CRG->SCM_STR & SCM_STR_RCM_Msk)) {
            /* Wait until the master clock is switched */
        }
    }
    FM3_CRG->SCM_CTL = (uint8_t)(FM3_CRG->SCM_CTL & ~SCM_CTL_PLLE);
}

/**
 * \brief Set the base clock (HCLK) and the APB / watchdog / trace prescalers.
 */
static void _clock_set_prescalers(void)
{
    FM3_CRG->BSC_PSR = (uint8_t)VALUE_BSC_PSR;
    FM3_CRG->APBC0_PSR = (uint8_t)VALUE_APBC0_PSR;
    FM3_CRG->APBC1_PSR = (uint8_t)VALUE_APBC1_PSR;
    FM3_CRG->APBC2_PSR = (uint8_t)VALUE_APBC2_PSR;
    FM3_CRG->SWC_PSR = (uint8_t)(VALUE_SWC_PSR | SWC_PSR_TESTB);
    FM3_CRG->TTC_PSR = (uint8_t)VALUE_TTC_PSR;
}

/**
 * \brief Start the oscillators and the PLL required by the configuration.
 *
 * All required clock sources are stable when this function returns.
 */
static void _clock_init_sources(void)
{
    FM3_CRG->CSW_TMR = (uint8_t)VALUE_CSW_TMR;

    if (CLK_MOSC_USED) {
        FM3_CRG->SCM_CTL = (uint8_t)(FM3_CRG->SCM_CTL | SCM_CTL_MOSCE);
        while (0 == (FM3_CRG->SCM_STR & SCM_STR_MORDY)) {
            /* Wait for the main oscillator stabilization */
        }
    }

    if (CLK_SOSC_USED) {
        FM3_CRG->SCM_CTL = (uint8_t)(FM3_CRG->SCM_CTL | SCM_CTL_SOSCE);
        while (0 == (FM3_CRG->SCM_STR & SCM_STR_SORDY)) {
            /* Wait for the sub oscillator stabilization */
        }
    }

    if (CLK_PLL_USED) {
        // PLL input (PINC), lock wait time, K, M and N; the PLL is stopped here.
        FM3_CRG->PSW_TMR = (uint8_t)VALUE_PSW_TMR;
        FM3_CRG->PLL_CTL1 = (uint8_t)VALUE_PLL_CTL1;
        FM3_CRG->PLL_CTL2 = (uint8_t)VALUE_PLL_CTL2;
        FM3_CRG->SCM_CTL = (uint8_t)(FM3_CRG->SCM_CTL | SCM_CTL_PLLE);
        while (0 == (FM3_CRG->SCM_STR & SCM_STR_PLRDY)) {
            /* Wait for the PLL lock */
        }
    }
}

/**
 * \brief Switch the master clock to the configured source.
 */
static void _clock_switch_master(void)
{
    FM3_CRG->SCM_CTL = (uint8_t)((FM3_CRG->SCM_CTL & ~SCM_CTL_RCS_Msk) | CLK_RCS);
    while (CLK_RCS != (FM3_CRG->SCM_STR & SCM_STR_RCM_Msk)) {
        /* Wait until the master clock is switched */
    }
}

/**
 * Initialize the system
 *
 * \brief  Setup the microcontroller system.
 *         Initialize the System and update the SystemCoreClock variable.
 */
void SystemInit(void)
{
    // The hardware watchdog runs after reset (vendor SystemInit stops it too).
    _hwwdt_disable();

    _cr_trim();
    _clock_switch_to_high_speed_cr();
    _clock_set_prescalers();
    _clock_init_sources();
    _clock_switch_master();

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
