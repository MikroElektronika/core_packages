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
 * @brief Mikroe clock initialization API for the Infineon PSOC 4 (CAT2) devices.
 *
 * System library group: cy8c4148lda
 * Device lines:         PSOC 4100S Max
 *
 * Clock tree (configured by NECTO through the config registers of the def file):
 *
 *   IMO (24..48 MHz, 4 MHz steps) -------------------+
 *   EXTCLK pin (external clock) ----------------------+--> HFCLK_SEL --> HFCLK_DIV --> HFCLK
 *   EXCO: ECO crystal (4..33 MHz) / PLL (ECO or IMO) -+                                |
 *                                                                     SYSCLK_DIV --> SYSCLK (CPU)
 *
 * Default configuration: IMO at the maximum HFCLK frequency of the part
 * (CY_HF_CLK_MAX_FREQ: 48 MHz, or 24 MHz for the 24 MHz grades), no dividers.
 *
 * SystemInit() sequence:
 *   1. Disable the watchdog. The PSOC 4 WDT runs out of reset (SRSS-Lite: ILO based
 *      counter that resets the device after ~3 matches, SRSS-HV: basic WDT, upper limit
 *      reset). The vendor start-up (Cy_WDT_Init / PSoC Creator) disables it as well.
 *   2. Program the maximum flash wait states (transition), so the flash is read
 *      correctly whatever the intermediate clock frequency is.
 *   3. Set the IMO frequency with the factory trims from SFLASH (Cy_SysClk_ImoSetFrequency).
 *   4. Optionally start the ECO and/or the PLL (Cy_SysClk_EcoConfigure/EcoEnable,
 *      Cy_SysClk_PllSetSource/PllManualConfigure/PllEnable/PllBypass) or route
 *      the EXTCLK pin, and select the HFCLK source.
 *   5. Set the HFCLK and SYSCLK dividers.
 *   6. Program the final flash wait states for the SYSCLK frequency (Cy_SysLib_SetWaitStates).
 *
 * The IMO, ECO, PLL, EXCO program clock and flash wait state sequences are
 * re-implementations of the Infineon mtb-pdl-cat2 drivers (cy_sysclk.c,
 * cy_syslib.c, cy_wdt.h, PDL 2.22.0):
 *
 *   (c) 2016-2026, Infineon Technologies AG or an affiliate of
 *   Infineon Technologies AG.
 *
 *   SPDX-License-Identifier: Apache-2.0
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 * Note: Changed for MikroE implementation (register level, no PDL dependency,
 * configuration taken from the NECTO VALUE_* macros).
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

/* ------------------------------------------------------------------------- */
/* Device selection                                                          */
/* ------------------------------------------------------------------------- */

#if defined(CY_IP_M0S8SRSSHV)
    #define PSOC4_SRSS              SRSSHV
#elif defined(CY_IP_S8SRSSLT)
    #define PSOC4_SRSS              SRSSLT
#else
    #error "init_clock.c: unsupported PSOC 4 SRSS"
#endif

#if defined(CY_IP_M0S8EXCO) && (CY_IP_M0S8EXCO == 1u)
    #define PSOC4_HAS_EXCO          1
#else
    #define PSOC4_HAS_EXCO          0
#endif

/* EXTCLK (srss.ext_clk) pin of port 0, HSIOM ACT_0 */
#if defined(CY_IP_M0S8SRSSHV)
    #define EXTCLK_PIN              1UL
#elif defined(CY_DEVICE_SERIES_PSOC_4000T) || defined(CY_DEVICE_SERIES_PSOC_4100T_PLUS)
    #define EXTCLK_PIN              4UL
#else
    #define EXTCLK_PIN              6UL
#endif
#define EXTCLK_HSIOM                8UL     /* HSIOM_SEL_ACT_0 */
#define GPIO_DM_HIGHZ               1UL     /* digital high impedance input */

/* ------------------------------------------------------------------------- */
/* Configuration (NECTO config registers)                                    */
/* ------------------------------------------------------------------------- */

#define HZ_PER_MHZ                  1000000UL

/* CLK_IMO_SELECT: FREQ [2:0], 0 = 24 MHz ... 6 = 48 MHz */
#define CFG_IMO_SEL                 ((VALUE_CLK_IMO_SELECT) & 0x7UL)
#define CFG_IMO_HZ                  (24000000UL + (CFG_IMO_SEL * 4000000UL))

/* CLK_SELECT: HFCLK_SEL [1:0], HFCLK_DIV [3:2], SYSCLK_DIV [7:6] */
#define HFCLK_SEL_IMO               0UL
#define HFCLK_SEL_EXTCLK            1UL
#define HFCLK_SEL_EXCO              2UL
#define CFG_HFCLK_SEL               ((VALUE_CLK_SELECT) & 0x3UL)
#define CFG_HFCLK_DIV               (((VALUE_CLK_SELECT) >> 2) & 0x3UL)
#define CFG_SYSCLK_DIV              (((VALUE_CLK_SELECT) >> 6) & 0x3UL)

#if (CFG_IMO_SEL > 6)
    #error "init_clock.c: invalid IMO frequency selection"
#endif

#if PSOC4_HAS_EXCO
    /* EXCO_ECO_CONFIG (pseudo layout): FREQ [5:0] MHz, CLOAD [12:6] pF,
     * ESR [22:13] Ohm, DRIVE [30:23] in 10 uW units */
    #define CFG_ECO_HZ              (((VALUE_EXCO_ECO_CONFIG) & 0x3FUL) * HZ_PER_MHZ)
    #define CFG_ECO_CLOAD           (((VALUE_EXCO_ECO_CONFIG) >> 6) & 0x7FUL)
    #define CFG_ECO_ESR             (((VALUE_EXCO_ECO_CONFIG) >> 13) & 0x3FFUL)
    #define CFG_ECO_DRIVE           ((((VALUE_EXCO_ECO_CONFIG) >> 23) & 0xFFUL) * 10UL)

    /* EXCO_PLL_CONFIG: FEEDBACK_DIV [7:0], REFERENCE_DIV [13:8], OUTPUT_DIV [15:14], ENABLE [31] */
    #define CFG_PLL_EN              (((VALUE_EXCO_PLL_CONFIG) >> 31) & 0x1UL)
    #define CFG_PLL_P               ((VALUE_EXCO_PLL_CONFIG) & 0xFFUL)
    #define CFG_PLL_Q               (((VALUE_EXCO_PLL_CONFIG) >> 8) & 0x3FUL)
    #define CFG_PLL_OUT             (((VALUE_EXCO_PLL_CONFIG) >> 14) & 0x3UL)

    /* EXCO_CLK_SELECT: REF_SEL, ECO = 0, IMO = 1 (EXCO v1, 1 bit) or 2 (EXCO v2, 2 bits) */
    #if (CY_IP_M0S8EXCO_VERSION == 1u)
        #define PLL_SRC_IMO         1UL
        #define CFG_PLL_SRC         (((VALUE_EXCO_CLK_SELECT) >> 1) & 0x1UL)
    #else
        #define PLL_SRC_IMO         2UL
        #define CFG_PLL_SRC         (((VALUE_EXCO_CLK_SELECT) >> 1) & 0x3UL)
    #endif
    #define PLL_SRC_ECO             0UL

    #if (CFG_HFCLK_SEL == HFCLK_SEL_EXCO)
        #define CFG_USE_PLL         (CFG_PLL_EN)
        #define CFG_USE_ECO         ((CFG_PLL_EN == 0UL) || (CFG_PLL_SRC == PLL_SRC_ECO))
    #else
        #define CFG_USE_PLL         0
        #define CFG_USE_ECO         0
    #endif

    #if CFG_USE_PLL
        #if (CFG_PLL_SRC == PLL_SRC_ECO)
            #define CFG_PLL_IN_HZ   CFG_ECO_HZ
        #elif (CFG_PLL_SRC == PLL_SRC_IMO)
            #define CFG_PLL_IN_HZ   CFG_IMO_HZ
        #else
            #error "init_clock.c: invalid PLL reference"
        #endif
        /* PLL limits of Cy_SysClk_PllConfigure() */
        #define CFG_PLL_PFD_HZ      (CFG_PLL_IN_HZ / (CFG_PLL_Q + 1UL))
        #define CFG_PLL_VCO_HZ      ((CFG_PLL_IN_HZ * CFG_PLL_P) / (CFG_PLL_Q + 1UL))
        #define CFG_EXCO_HZ         (CFG_PLL_VCO_HZ >> CFG_PLL_OUT)
        #if (CFG_PLL_P < 8UL)
            #error "init_clock.c: PLL multiplier P must be 8..255"
        #endif
        #if (CFG_PLL_PFD_HZ < 1000000UL) || (CFG_PLL_PFD_HZ > 3000000UL)
            #error "init_clock.c: PLL reference / Q must be 1..3 MHz"
        #endif
        #if (CFG_PLL_VCO_HZ < 22500000UL) || (CFG_PLL_VCO_HZ > 104000000UL)
            #error "init_clock.c: PLL VCO (reference / Q * P) must be 22.5..104 MHz"
        #endif
        /* Charge pump current: Cy_SysClk_PllConfigure() */
        #if (CFG_PLL_VCO_HZ > 67000000UL)
            #define CFG_PLL_ICP     3UL
        #else
            #define CFG_PLL_ICP     2UL
        #endif
    #else
        #define CFG_EXCO_HZ         CFG_ECO_HZ
    #endif
#else
    #define CFG_USE_PLL             0
    #define CFG_USE_ECO             0
    #if (CFG_HFCLK_SEL == HFCLK_SEL_EXCO)
        #error "init_clock.c: this device has no EXCO (ECO/PLL)"
    #endif
#endif

#if (CFG_HFCLK_SEL == HFCLK_SEL_IMO)
    #define CFG_HFCLK_SRC_HZ        CFG_IMO_HZ
#elif (CFG_HFCLK_SEL == HFCLK_SEL_EXCO)
    #define CFG_HFCLK_SRC_HZ        CFG_EXCO_HZ
#elif (CFG_HFCLK_SEL != HFCLK_SEL_EXTCLK)
    #error "init_clock.c: invalid HFCLK source"
#endif

#if (CFG_HFCLK_SEL == HFCLK_SEL_EXTCLK)
    /* The EXTCLK frequency is not known to the configuration: the CPU clock
     * entered in NECTO is used. */
    #define CFG_SYSCLK_HZ           ((uint32_t)(FOSC_KHZ_VALUE * 1000UL))
#else
    #define CFG_HFCLK_HZ            (CFG_HFCLK_SRC_HZ >> CFG_HFCLK_DIV)
    #define CFG_SYSCLK_HZ           (CFG_HFCLK_HZ >> CFG_SYSCLK_DIV)
    #if (CFG_HFCLK_HZ > CY_HF_CLK_MAX_FREQ)
        #error "init_clock.c: HFCLK exceeds the maximum frequency of the device (CY_HF_CLK_MAX_FREQ)"
    #endif
#endif

/* ------------------------------------------------------------------------- */
/* Hardware constants                                                        */
/* ------------------------------------------------------------------------- */

#define SRSS_HFCLK_SEL_Msk          0x3UL
#define SRSS_HFCLK_DIV_Pos          2UL
#define SRSS_HFCLK_DIV_Msk          0xCUL
#define SRSS_SYSCLK_DIV_Pos         6UL
#define SRSS_SYSCLK_DIV_Msk         0xC0UL
#define SRSS_IMO_SELECT_FREQ_Msk    0x7UL

#define FLASH_CTL_WS_Msk            0x3UL   /* FLASH_WS (2 bits on SRSS-Lite parts, 4 on HV MS) */
#define FLASH_CTL_PREF_EN_Msk       0x10UL

#if defined(CY_IP_S8SRSSLT)
    #define WDT_DISABLE_KEY_VALUE   0xACED8865UL    /* CY_SRSS_WDT_DISABLE_VALUE */
#else
    #define SRSS_PROTREG_UNLOCK     0xF08169E7UL    /* CY_SYSCLK_PROTREG_UNLOCK */
    #define WDT_UNLOCK_VALUE_0      1UL
    #define WDT_UNLOCK_VALUE_1      2UL
    #define WDT_LOCK_VALUE          3UL
    #define WDT_CTL_ENABLE_BIT      0x80000000UL
#endif

#if PSOC4_HAS_EXCO
    #define ECO_CONFIG_CLK_EN       0x1UL
    #define ECO_CONFIG_AGC_EN       0x2UL
    #define ECO_CONFIG_ENABLE       0x80000000UL
    #define ECO_STATUS_WD_ERROR     0x1UL
    #define PLL_CONFIG_CFG_Msk      0x7FFFFUL       /* FEEDBACK_DIV | REFERENCE_DIV | OUTPUT_DIV | ICP_SEL */
    #define PLL_CONFIG_ICP_Pos      16UL
    #define PLL_CONFIG_BYPASS_Pos   20UL
    #define PLL_CONFIG_BYPASS_Msk   0x300000UL
    #define PLL_CONFIG_ISOLATE_N    0x40000000UL
    #define PLL_CONFIG_ENABLE       0x80000000UL
    #define PLL_STATUS_LOCKED       0x1UL
    #define PLL_BYP_AUTO            0UL
    #define PLL_BYP_ECO             2UL
    #define PLL_BYP_PLL             3UL
    #define CLK_SELECT_REF_SEL_Pos  1UL
    #if (CY_IP_M0S8EXCO_VERSION == 1u)
        #define CLK_SELECT_REF_SEL_Msk  0x2UL
    #else
        #define CLK_SELECT_REF_SEL_Msk  0x6UL
    #endif
    #define PGM_CLK_ENABLE          0x80000000UL
    #define PGM_CLK_CLK_ECO         0x2UL
#endif

/* ------------------------------------------------------------------------- */
/* Globals                                                                   */
/* ------------------------------------------------------------------------- */

/* System clock frequency (Core clock) */
uint32_t SystemCoreClock = 24000000UL;

/* Current SYSCLK frequency, used for the software delays of SystemInit() */
static uint32_t current_hz = 24000000UL;

/* ------------------------------------------------------------------------- */
/* Helpers                                                                   */
/* ------------------------------------------------------------------------- */

/* Busy wait of at least the given number of CPU cycles (>= 4 cycles per loop). */
static void delay_cycles(uint32_t cycles)
{
    volatile uint32_t count = (cycles + 3UL) / 4UL;

    while (count != 0UL) {
        count--;
    }
}

#if (CFG_HFCLK_SEL == HFCLK_SEL_EXCO)
/* Busy wait of at least the given number of microseconds at the current SYSCLK. */
static void delay_us(uint32_t us)
{
    delay_cycles(us * ((current_hz + HZ_PER_MHZ - 1UL) / HZ_PER_MHZ));
}
#endif

#if defined(CY_IP_M0S8SRSSHV)
/* SRSS-HV: the clock registers are protected by REG_PROT (Cy_SysClk_UnlockProtReg). */
static void srss_unlock(void)
{
    SRSSHV->REG_PROT = SRSS_PROTREG_UNLOCK;
}

static void srss_lock(void)
{
    SRSSHV->REG_PROT = ~SRSS_PROTREG_UNLOCK;
}
#else
static void srss_unlock(void)
{
}

static void srss_lock(void)
{
}
#endif

/* Read-modify-write of CLK_SELECT fields (lock protected on SRSS-HV). */
static void clk_select_write(uint32_t mask, uint32_t value)
{
    srss_unlock();
    PSOC4_SRSS->CLK_SELECT = (PSOC4_SRSS->CLK_SELECT & ~mask) | (value & mask);
    srss_lock();
}

/* Watchdog disable (Cy_WDT_Disable). */
static void watchdog_disable(void)
{
#if defined(CY_IP_S8SRSSLT)
    SRSSLT->WDT_DISABLE_KEY = WDT_DISABLE_KEY_VALUE;
#else
    /* Two different writes unlock the WDT registers. */
    WDT->LOCK = WDT_UNLOCK_VALUE_0;
    WDT->LOCK = WDT_UNLOCK_VALUE_1;
    WDT->CTL &= ~WDT_CTL_ENABLE_BIT;
    WDT->LOCK = WDT_LOCK_VALUE;
#endif
}

/* Flash wait states for a SYSCLK frequency (Cy_SysLib_SetWaitStates). */
static void flash_set_wait_states(uint32_t sysclk_hz)
{
    uint32_t mhz = (sysclk_hz + HZ_PER_MHZ - 1UL) / HZ_PER_MHZ;
    uint32_t ws;

#if defined(CPUSS_FLASHC_PRESENT_WITH_ECC) && (CPUSS_FLASHC_PRESENT_WITH_ECC == 1u)
    ws = (mhz <= 12UL) ? 0UL : ((mhz <= 24UL) ? 1UL : ((mhz <= 36UL) ? 2UL : 3UL));
#else
    ws = (mhz <= 16UL) ? 0UL : ((mhz <= 32UL) ? 1UL : 2UL);
#endif
    /* Flash prefetch buffer for wait states greater than zero */
    CPUSS->FLASH_CTL = (CPUSS->FLASH_CTL & ~(FLASH_CTL_WS_Msk | FLASH_CTL_PREF_EN_Msk)) |
                       ws | ((ws != 0UL) ? FLASH_CTL_PREF_EN_Msk : 0UL);
}

/* IMO nominal frequency from CLK_IMO_SELECT. */
static uint32_t imo_get_hz(void)
{
    return 24000000UL + ((PSOC4_SRSS->CLK_IMO_SELECT & SRSS_IMO_SELECT_FREQ_Msk) * 4000000UL);
}

/*
 * IMO frequency change with the factory trims from SFLASH
 * (Cy_SysClk_ImoSetFrequency): select 24 MHz, load the trims of the target
 * frequency, then step to the target frequency through the nearby one.
 */
static void imo_set_frequency(uint32_t sel)
{
    if ((PSOC4_SRSS->CLK_IMO_SELECT & SRSS_IMO_SELECT_FREQ_Msk) == sel) {
        return;
    }

#if defined(CY_IP_M0S8SRSSHV)
    /* SRSS-HV: trim tables indexed in 4 MHz steps */
    srss_unlock();
    SRSSHV->CLK_IMO_SELECT = 0UL;
    SRSSHV->CLK_IMO_TRIM1 = (uint32_t)SFLASH->IMO_TRIM_LT[sel];
    SRSSHV->CLK_IMO_TRIM2 = (uint32_t)SFLASH->IMO_TCTRIM_LT[sel];
    SRSSHV->CLK_IMO_TRIM3 = (uint32_t)SFLASH->IMO_STEPSIZE_LT[sel];
    srss_lock();
#else
    /* SRSS-Lite: trim tables indexed in 1 MHz steps */
    SRSSLT->CLK_IMO_SELECT = 0UL;
    SRSSLT->CLK_IMO_TRIM1 = (uint32_t)SFLASH->IMO_TRIM_LT[sel * 4UL];   /* coarse trim */
    SRSSLT->CLK_IMO_TRIM2 = 0UL;                                       /* fine trim */
    SRSSLT->CLK_IMO_TRIM3 = (uint32_t)SFLASH->IMO_TCTRIM_LT[sel * 4UL]; /* TC trim */
#endif
    current_hz = 24000000UL;
    delay_cycles(50UL);

    if (sel != 0UL) {
        srss_unlock();
        /* Select the nearby intermediate frequency ... */
        PSOC4_SRSS->CLK_IMO_SELECT = (PSOC4_SRSS->CLK_IMO_SELECT & ~SRSS_IMO_SELECT_FREQ_Msk) | (sel - 1UL);
        delay_cycles(50UL);
        /* ... and make the small step to the final frequency */
        PSOC4_SRSS->CLK_IMO_SELECT = (PSOC4_SRSS->CLK_IMO_SELECT & ~SRSS_IMO_SELECT_FREQ_Msk) | sel;
        srss_lock();
    }
}

#define DIV_ROUND(a, b)     (((a) + ((b) / 2UL)) / (b))

#if PSOC4_HAS_EXCO && (CFG_HFCLK_SEL == HFCLK_SEL_EXCO)
/*
 * EXCO program clock sequence (Cy_SysClk_EcoSeqGen): the EXCO clock
 * multiplexers are clocked by the ECO; when the ECO does not run, clock
 * edges are generated by software so that a new selection takes effect.
 */
static void exco_seq_gen(void)
{
    uint32_t i;

    if (!((EXCO->ECO_CONFIG & ECO_CONFIG_ENABLE) != 0UL &&
          (EXCO->ECO_STATUS & ECO_STATUS_WD_ERROR) == 0UL)) {
        EXCO->EXCO_PGM_CLK |= PGM_CLK_ENABLE;
        for (i = 0UL; i < 8UL; i++) {
            EXCO->EXCO_PGM_CLK |= PGM_CLK_CLK_ECO;
            EXCO->EXCO_PGM_CLK &= ~PGM_CLK_CLK_ECO;
        }
        EXCO->EXCO_PGM_CLK &= ~PGM_CLK_ENABLE;
    }
}

#if CFG_USE_ECO
/* Integer square root (cy_sqrt of cy_sysclk.c). */
static uint32_t isqrt(uint32_t x)
{
    uint32_t i;
    uint32_t res = 0UL;
    uint32_t add = 0x8000UL;

    for (i = 0UL; i < 16UL; i++) {
        uint32_t tmp = res | add;

        if (x >= (tmp * tmp)) {
            res = tmp;
        }
        add >>= 1U;
    }
    return res;
}

/*
 * ECO trims from the crystal parameters (Cy_SysClk_EcoConfigure).
 * Returns 0 if the parameters are out of the supported range.
 */
static uint32_t eco_configure(uint32_t freq, uint32_t cload, uint32_t esr, uint32_t drive)
{
    uint32_t freq_khz, max_ampl, amp_sect, wdtrim, atrim, ftrim, gtrim;

    if ((freq < 4000000UL) || (freq > 33330000UL) || (cload == 0UL) || (cload > 100UL) ||
        (esr == 0UL) || (esr > 1000UL) || (drive == 0UL) || (drive > 2000UL)) {
        return 0UL;
    }
    freq_khz = DIV_ROUND(freq, 1000UL);
    /* 5 * 100000 / PI, result scaled by 10^3 */
    max_ampl = DIV_ROUND(159155UL * isqrt(DIV_ROUND(2000000UL * drive, esr)), freq_khz * cload);
    /* (4.5 * 10^9) / (5 * 4 * 4 * PI^2), scaled by 100 */
    amp_sect = (DIV_ROUND(cload * cload * DIV_ROUND(freq_khz * freq_khz, 56993UL), 1000UL) * esr) / 1000000UL;
    if ((max_ampl < 500UL) || (amp_sect > 3UL)) {
        return 0UL;
    }
    wdtrim = (max_ampl < 1200UL) ? ((5UL * max_ampl / 1000UL) - 2UL) : 3UL;
    atrim = (max_ampl < 600UL) ? 0UL :
            ((max_ampl < 700UL) ? 1UL :
            ((max_ampl < 800UL) ? 2UL :
            ((max_ampl < 900UL) ? 3UL :
            ((max_ampl < 1025UL) ? 4UL :
            ((max_ampl < 1150UL) ? 5UL :
            ((max_ampl < 1275UL) ? 6UL : 7UL))))));
    ftrim = (freq > 30000000UL) ? 0UL : ((freq > 24000000UL) ? 1UL : ((freq > 17000000UL) ? 2UL : 3UL));
    gtrim = (amp_sect > 1UL) ? amp_sect : ((amp_sect == 1UL) ? 0UL : 1UL);

    EXCO->ECO_CONFIG = (max_ampl < 2000UL) ? ECO_CONFIG_AGC_EN : 0UL;
    EXCO->ECO_TRIM0 = (wdtrim & 0x3UL) | ((atrim & 0x7UL) << 2);
    EXCO->ECO_TRIM1 = (ftrim & 0x3UL) | ((ftrim & 0x3UL) << 2) | ((gtrim & 0x3UL) << 4); /* rtrim = ftrim */
    return 1UL;
}

/* ECO start (Cy_SysClk_EcoEnable), waits until the ECO is stable. */
static void eco_enable(void)
{
    EXCO->ECO_CONFIG |= ECO_CONFIG_ENABLE;
    delay_us(10UL);
    EXCO->ECO_CONFIG |= ECO_CONFIG_CLK_EN;
    /* Crystal start-up margin (the PDL default timeout is 10 ms) */
    delay_us(5000UL);
    while ((EXCO->ECO_STATUS & ECO_STATUS_WD_ERROR) != 0UL) {
    }
}
#endif /* CFG_USE_ECO */

#if CFG_USE_PLL
/* PLL reference selection (Cy_SysClk_PllSetSource). */
static void pll_set_source(uint32_t src)
{
    EXCO->CLK_SELECT = (EXCO->CLK_SELECT & ~CLK_SELECT_REF_SEL_Msk) |
                       ((src << CLK_SELECT_REF_SEL_Pos) & CLK_SELECT_REF_SEL_Msk);
    exco_seq_gen();
}
#endif /* CFG_USE_PLL */

/* EXCO output selection (Cy_SysClk_PllBypass). */
static void pll_bypass(uint32_t mode)
{
    EXCO->PLL_CONFIG = (EXCO->PLL_CONFIG & ~PLL_CONFIG_BYPASS_Msk) | (mode << PLL_CONFIG_BYPASS_Pos);
    exco_seq_gen();
}
#endif /* EXCO selected */

#if (CFG_HFCLK_SEL == HFCLK_SEL_EXTCLK)
/* EXTCLK pin: HSIOM ACT_0 (srss.ext_clk), digital high impedance input. */
static void extclk_pin_init(void)
{
    HSIOM_PRT0->PORT_SEL = (HSIOM_PRT0->PORT_SEL & ~(0xFUL << (EXTCLK_PIN * 4UL))) |
                           (EXTCLK_HSIOM << (EXTCLK_PIN * 4UL));
    GPIO_PRT0->PC = (GPIO_PRT0->PC & ~(0x7UL << (EXTCLK_PIN * 3UL))) |
                    (GPIO_DM_HIGHZ << (EXTCLK_PIN * 3UL));
}
#endif

/* ------------------------------------------------------------------------- */
/* API                                                                       */
/* ------------------------------------------------------------------------- */

/**
 * Update SystemCoreClock from the clock registers.
 */
void SystemCoreClockUpdate(void)
{
    uint32_t sel = PSOC4_SRSS->CLK_SELECT;
    uint32_t hz;

    switch (sel & SRSS_HFCLK_SEL_Msk) {
        case HFCLK_SEL_IMO:
            hz = imo_get_hz();
            break;
#if PSOC4_HAS_EXCO
        case HFCLK_SEL_EXCO:
            hz = CFG_ECO_HZ;
            if ((EXCO->PLL_CONFIG & PLL_CONFIG_ENABLE) != 0UL &&
                ((EXCO->PLL_CONFIG & PLL_CONFIG_BYPASS_Msk) >> PLL_CONFIG_BYPASS_Pos) != PLL_BYP_ECO) {
                uint32_t pll = EXCO->PLL_CONFIG;
                uint32_t src = (EXCO->CLK_SELECT & CLK_SELECT_REF_SEL_Msk) >> CLK_SELECT_REF_SEL_Pos;
                uint32_t in = (src == PLL_SRC_IMO) ? imo_get_hz() : CFG_ECO_HZ;

                hz = (in / 2UL) * (pll & 0xFFUL);
                hz = DIV_ROUND(hz, (1UL + ((pll >> 8) & 0x3FUL)) * (1UL << ((pll >> 14) & 0x3UL))) * 2UL;
            }
            break;
#endif
        default:
            /* EXTCLK: frequency entered in NECTO */
            SystemCoreClock = (uint32_t)(FOSC_KHZ_VALUE * 1000UL);
            return;
    }
    hz >>= (sel & SRSS_HFCLK_DIV_Msk) >> SRSS_HFCLK_DIV_Pos;
    hz >>= (sel & SRSS_SYSCLK_DIV_Msk) >> SRSS_SYSCLK_DIV_Pos;
    SystemCoreClock = hz;
}

/**
 * Clock system initialization, called by the startup code before main().
 */
void SystemInit(void)
{
    /* 1. Watchdog (enabled out of reset) */
    watchdog_disable();

    /* 2. Transition flash wait states (maximum) */
    flash_set_wait_states(CY_HF_CLK_MAX_FREQ);

    /* Run from the IMO with no dividers while the clock tree is reconfigured */
    clk_select_write(SRSS_HFCLK_SEL_Msk | SRSS_HFCLK_DIV_Msk | SRSS_SYSCLK_DIV_Msk, HFCLK_SEL_IMO);
    current_hz = imo_get_hz();

    /* 3. IMO frequency (trims from SFLASH) */
    imo_set_frequency(CFG_IMO_SEL);
    current_hz = CFG_IMO_HZ;

    /* 4. HFCLK source */
#if (CFG_HFCLK_SEL == HFCLK_SEL_EXTCLK)
    extclk_pin_init();
    clk_select_write(SRSS_HFCLK_SEL_Msk, HFCLK_SEL_EXTCLK);
#elif (CFG_HFCLK_SEL == HFCLK_SEL_EXCO)
    {
        uint32_t ok = 1UL;

    #if CFG_USE_ECO
        ok = eco_configure(CFG_ECO_HZ, CFG_ECO_CLOAD, CFG_ECO_ESR, CFG_ECO_DRIVE);
        if (ok != 0UL) {
            eco_enable();
        }
    #endif
    #if CFG_USE_PLL
        if (ok != 0UL) {
            pll_set_source(CFG_PLL_SRC);
            /* Cy_SysClk_PllManualConfigure (keeps BYPASS_SEL) */
            EXCO->PLL_CONFIG = (EXCO->PLL_CONFIG & ~PLL_CONFIG_CFG_Msk) |
                               (CFG_PLL_P | (CFG_PLL_Q << 8) | (CFG_PLL_OUT << 14) |
                                (CFG_PLL_ICP << PLL_CONFIG_ICP_Pos));
            /* Cy_SysClk_PllEnable: isolate the output, enable, de-isolate, wait for lock */
            EXCO->PLL_CONFIG &= ~PLL_CONFIG_ISOLATE_N;
            EXCO->PLL_CONFIG |= PLL_CONFIG_ENABLE;
            delay_us(5UL);
            EXCO->PLL_CONFIG |= PLL_CONFIG_ISOLATE_N;
            while ((EXCO->PLL_STATUS & PLL_STATUS_LOCKED) == 0UL) {
            }
            /* EXCO output = PLL (AUTO when the ECO runs, as Cy_SysClk_ClkHfSetSource) */
            pll_bypass((CFG_PLL_SRC == PLL_SRC_ECO) ? PLL_BYP_AUTO : PLL_BYP_PLL);
        }
    #else
        if (ok != 0UL) {
            /* EXCO output = ECO */
            pll_bypass(PLL_BYP_ECO);
        }
    #endif
        if (ok != 0UL) {
            exco_seq_gen();
            clk_select_write(SRSS_HFCLK_SEL_Msk, HFCLK_SEL_EXCO);
        }
    }
#endif

    /* 5. HFCLK and SYSCLK dividers */
    clk_select_write(SRSS_HFCLK_DIV_Msk | SRSS_SYSCLK_DIV_Msk,
                     (CFG_HFCLK_DIV << SRSS_HFCLK_DIV_Pos) | (CFG_SYSCLK_DIV << SRSS_SYSCLK_DIV_Pos));

    SystemCoreClockUpdate();
    current_hz = SystemCoreClock;

    /* 6. Final flash wait states */
    flash_set_wait_states(SystemCoreClock);
}

/** \cond 0 */
/* *INDENT-OFF* */
#ifdef __cplusplus
}
#endif
/* *INDENT-ON* */
/** \endcond */
