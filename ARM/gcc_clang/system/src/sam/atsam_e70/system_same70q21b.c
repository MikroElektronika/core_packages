/**
 * \file
 *
 * \brief System configuration file for ATSAME70Q21B
 *
 * Copyright (c) 2019 Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \license_stop
 *
 */

// Note: Changed for MikroE implementation
#include "mcu.h"
#include "core_header.h"
#include <stdbool.h>

void sysclk_init(uint8_t host_div);
 bool osc_is_ready(uint32_t ul_id);
 uint32_t pll_is_locked(uint32_t ul_pll_id);
 uint32_t osc_get_rate(uint32_t ul_id);

/** \cond 0 */
/* *INDENT-OFF* */
#ifdef __cplusplus
extern "C" {
#endif
/* *INDENT-ON* */
/** \endcond */

/**
 * Initial system clock frequency. The System RC Oscillator (RCSYS) provides
 *  the source for the main clock at chip startup.
 */
#define __SYSTEM_CLOCK    (FOSC_KHZ_VALUE * 1000)

/** Using external oscillator */
#define PMC_OSC_XTAL            0

/** Oscillator in bypass mode */
#define PMC_OSC_BYPASS          1

#define SYS_BOARD_OSCOUNT   (CKGR_MOR_MOSCXTST(0x8U))
#define SYS_BOARD_PLLAR     (CKGR_PLLAR_ONE | CKGR_PLLAR_MULA(0x31U) | \
                            CKGR_PLLAR_PLLACOUNT(0x3fU) | CKGR_PLLAR_DIVA(0x1U))
#define SYS_BOARD_MCKR      (PMC_MCKR_PRES_CLK_2 | PMC_MCKR_CSS_PLLA_CLK | (1<<8))

#define PLL_OUTPUT_MIN_HZ       160000000
#define PLL_OUTPUT_MAX_HZ       500000000

#define PLL_INPUT_MIN_HZ        3000000
#define PLL_INPUT_MAX_HZ        32000000

#define NR_PLLS             2
#define PLLA_ID             0
#define UPLL_ID             1   //!< USB UTMI PLL.

#define PLL_UPLL_HZ     480000000

#define PLL_COUNT   0x3fU

#  define Assert(expr) ((void) 0)

//! \name Master Clock Prescalers (MCK)
//@{
#define SYSCLK_PRES_1   PMC_MCKR_PRES_CLK_1  //!< Set master clock prescaler to 1
#define SYSCLK_PRES_2   PMC_MCKR_PRES_CLK_2  //!< Set master clock prescaler to 2
#define SYSCLK_PRES_4   PMC_MCKR_PRES_CLK_4  //!< Set master clock prescaler to 4
#define SYSCLK_PRES_8   PMC_MCKR_PRES_CLK_8  //!< Set master clock prescaler to 8
#define SYSCLK_PRES_16  PMC_MCKR_PRES_CLK_16 //!< Set master clock prescaler to 16
#define SYSCLK_PRES_32  PMC_MCKR_PRES_CLK_32 //!< Set master clock prescaler to 32
#define SYSCLK_PRES_64  PMC_MCKR_PRES_CLK_64 //!< Set master clock prescaler to 64
#define SYSCLK_PRES_3   PMC_MCKR_PRES_CLK_3  //!< Set master clock prescaler to 3
//@}

//! \name Master Clock Division (MCK)
//@{
#define SYSCLK_DIV_1   PMC_MCKR_MDIV_EQ_PCK  //!< Set master clock division to 1
#define SYSCLK_DIV_2   PMC_MCKR_MDIV_PCK_DIV2  //!< Set master clock division to 2
#define SYSCLK_DIV_4   PMC_MCKR_MDIV_PCK_DIV4  //!< Set master clock division to 4
#define SYSCLK_DIV_3   PMC_MCKR_MDIV_PCK_DIV3  //!< Set master clock division to 3

#define SYSCLK_SRC_SLCK_RC         0 //!< Internal 32kHz RC oscillator as master source clock
#define SYSCLK_SRC_SLCK_XTAL       1 //!< External 32kHz crystal oscillator as master source clock
#define SYSCLK_SRC_SLCK_BYPASS     2 //!< External 32kHz bypass oscillator as master source clock
#define SYSCLK_SRC_MAINCK_4M_RC    3 //!< Internal 4MHz RC oscillator as master source clock
#define SYSCLK_SRC_MAINCK_8M_RC    4 //!< Internal 8MHz RC oscillator as master source clock
#define SYSCLK_SRC_MAINCK_12M_RC   5 //!< Internal 12MHz RC oscillator as master source clock
#define SYSCLK_SRC_MAINCK_XTAL     6 //!< External crystal oscillator as master source clock
#define SYSCLK_SRC_MAINCK_BYPASS   7 //!< External bypass oscillator as master source clock
#define SYSCLK_SRC_PLLACK          8 //!< Use PLLACK as master source clock
#define SYSCLK_SRC_UPLLCK          9       //!< Use UPLLCK as master source clock

#define OSC_SLCK_32K_RC      0    //!< Internal 32kHz RC oscillator.
#define OSC_SLCK_32K_XTAL    1    //!< External 32kHz crystal oscillator.
#define OSC_SLCK_32K_BYPASS  2    //!< External 32kHz bypass oscillator.
#define OSC_MAINCK_4M_RC     3    //!< Internal 4MHz RC oscillator.
#define OSC_MAINCK_8M_RC     4    //!< Internal 8MHz RC oscillator.
#define OSC_MAINCK_12M_RC    5    //!< Internal 12MHz RC oscillator.
#define OSC_MAINCK_XTAL      6    //!< External crystal oscillator.
#define OSC_MAINCK_BYPASS    7    //!< External bypass oscillator.
//@}

//! \name Oscillator clock speed in hertz
//@{
#define OSC_SLCK_32K_RC_HZ      CHIP_FREQ_SLCK_RC         //!< Internal 32kHz RC oscillator.
#define OSC_SLCK_32K_XTAL_HZ    BOARD_FREQ_SLCK_XTAL      //!< External 32kHz crystal oscillator.
#define OSC_SLCK_32K_BYPASS_HZ  BOARD_FREQ_SLCK_BYPASS    //!< External 32kHz bypass oscillator.
#define OSC_MAINCK_4M_RC_HZ     CHIP_FREQ_MAINCK_RC_4MHZ  //!< Internal 4MHz RC oscillator.
#define OSC_MAINCK_8M_RC_HZ     CHIP_FREQ_MAINCK_RC_8MHZ  //!< Internal 8MHz RC oscillator.
#define OSC_MAINCK_12M_RC_HZ    CHIP_FREQ_MAINCK_RC_12MHZ //!< Internal 12MHz RC oscillator.
#define OSC_MAINCK_XTAL_HZ      BOARD_FREQ_MAINCK_XTAL    //!< External crystal oscillator.
#define OSC_MAINCK_BYPASS_HZ    BOARD_FREQ_MAINCK_BYPASS  //!< External bypass oscillator.

enum pll_source {
	PLL_SRC_MAINCK_4M_RC   = OSC_MAINCK_4M_RC,  //!< Internal 4MHz RC oscillator.
	PLL_SRC_MAINCK_8M_RC   = OSC_MAINCK_8M_RC,  //!< Internal 8MHz RC oscillator.
	PLL_SRC_MAINCK_12M_RC  = OSC_MAINCK_12M_RC, //!< Internal 12MHz RC oscillator.
	PLL_SRC_MAINCK_XTAL    = OSC_MAINCK_XTAL,   //!< External crystal oscillator.
	PLL_SRC_MAINCK_BYPASS  = OSC_MAINCK_BYPASS, //!< External bypass oscillator.
	PLL_NR_SOURCES,                             //!< Number of PLL sources.
};

struct pll_config {
	uint32_t ctrl;
};

#define pll_get_default_rate(pll_id)                                     \
	((osc_get_rate((uint32_t)CONFIG_PLL0_SOURCE)                      \
			* CONFIG_PLL0_MUL)                      \
			/ CONFIG_PLL0_DIV)

/* Force UTMI PLL parameters (Hardware defined) */
#ifdef CONFIG_PLL1_SOURCE
# undef CONFIG_PLL1_SOURCE
#endif
#ifdef CONFIG_PLL1_MUL
# undef CONFIG_PLL1_MUL
#endif
#ifdef CONFIG_PLL1_DIV
# undef CONFIG_PLL1_DIV
#endif
#define CONFIG_PLL1_SOURCE  PLL_SRC_MAINCK_XTAL
#define CONFIG_PLL1_MUL     0
#define CONFIG_PLL1_DIV     0

// ===== System Clock (MCK) Source Options
//#define CONFIG_SYSCLK_SOURCE        SYSCLK_SRC_SLCK_RC
//#define CONFIG_SYSCLK_SOURCE        SYSCLK_SRC_SLCK_XTAL
//#define CONFIG_SYSCLK_SOURCE        SYSCLK_SRC_SLCK_BYPASS
//#define CONFIG_SYSCLK_SOURCE        SYSCLK_SRC_MAINCK_4M_RC
//#define CONFIG_SYSCLK_SOURCE        SYSCLK_SRC_MAINCK_8M_RC
//#define CONFIG_SYSCLK_SOURCE        SYSCLK_SRC_MAINCK_12M_RC
//#define CONFIG_SYSCLK_SOURCE        SYSCLK_SRC_MAINCK_XTAL
//#define CONFIG_SYSCLK_SOURCE        SYSCLK_SRC_MAINCK_BYPASS
#define CONFIG_SYSCLK_SOURCE        SYSCLK_SRC_PLLACK
//#define CONFIG_SYSCLK_SOURCE        SYSCLK_SRC_UPLLCK

// ===== Processor Clock (HCLK) Prescaler Options   (Fhclk = Fsys / (SYSCLK_PRES))
#define CONFIG_SYSCLK_PRES          SYSCLK_PRES_1
//#define CONFIG_SYSCLK_PRES          SYSCLK_PRES_2
//#define CONFIG_SYSCLK_PRES          SYSCLK_PRES_4
//#define CONFIG_SYSCLK_PRES          SYSCLK_PRES_8
//#define CONFIG_SYSCLK_PRES          SYSCLK_PRES_16
//#define CONFIG_SYSCLK_PRES          SYSCLK_PRES_32
//#define CONFIG_SYSCLK_PRES          SYSCLK_PRES_64
//#define CONFIG_SYSCLK_PRES          SYSCLK_PRES_3

// ===== System Clock (MCK) Division Options     (Fmck = Fhclk / (SYSCLK_DIV))
#define CONFIG_SYSCLK_DIV            2

// ===== PLL0 (A) Options   (Fpll = (Fclk * PLL_mul) / PLL_div)
// Use mul and div effective values here.
#define CONFIG_PLL0_SOURCE          PLL_SRC_MAINCK_XTAL
#define CONFIG_PLL0_MUL             25
#define CONFIG_PLL0_DIV             1

// ===== UPLL (UTMI) Hardware fixed at 480 MHz.

// ===== USB Clock Source Options   (Fusb = FpllX / USB_div)
// Use div effective value here.
//#define CONFIG_USBCLK_SOURCE        USBCLK_SRC_PLL0
#define CONFIG_USBCLK_SOURCE        USBCLK_SRC_UPLL
#define CONFIG_USBCLK_DIV           1

#define PMC_TIMEOUT             (4096)

#if !defined(BOARD_FREQ_SLCK_XTAL)
#  warning The board slow clock xtal frequency has not been defined.
#  define BOARD_FREQ_SLCK_XTAL      (32768UL)
#endif

#if !defined(BOARD_FREQ_SLCK_BYPASS)
#  warning The board slow clock bypass frequency has not been defined.
#  define BOARD_FREQ_SLCK_BYPASS    (32768UL)
#endif

#if !defined(BOARD_FREQ_MAINCK_XTAL)
#  warning The board main clock xtal frequency has not been defined.
#  define BOARD_FREQ_MAINCK_XTAL    (12000000UL)
#endif

#if !defined(BOARD_FREQ_MAINCK_BYPASS)
#  warning The board main clock bypass frequency has not been defined.
#  define BOARD_FREQ_MAINCK_BYPASS  (12000000UL)
#endif

#if !defined(BOARD_OSC_STARTUP_US)
#  warning The board main clock xtal startup time has not been defined.
#  define BOARD_OSC_STARTUP_US      (15625UL)
#endif

#define pmc_us_to_moscxtst(startup_us, slowck_freq)      \
	((startup_us * slowck_freq / 8 / 1000000) < 0x100 ?  \
		(startup_us * slowck_freq / 8 / 1000000) : 0xFF)

void pmc_enable_upll_clock(void)
{
	PMC->CKGR_UCKR = CKGR_UCKR_UPLLCOUNT(3) | CKGR_UCKR_UPLLEN;

	/* Wait UTMI PLL Lock Status */
	while (!(PMC->PMC_SR & PMC_SR_LOCKU));
}

/**
 * \brief Disable UPLL clock.
 */
void pmc_disable_upll_clock(void)
{
	PMC->CKGR_UCKR &= ~CKGR_UCKR_UPLLEN;
}

/**
 * \brief Is UPLL locked?
 *
 * \retval 0 Not locked.
 * \retval 1 Locked.
 */
uint32_t pmc_is_locked_upll(void)
{
	return (PMC->PMC_SR & PMC_SR_LOCKU);
}

uint32_t pmc_is_locked_pllack(void)
{
	return (PMC->PMC_SR & PMC_SR_LOCKA);
}

uint32_t pmc_osc_is_ready_mainck(void)
{
	return PMC->PMC_SR & PMC_SR_MOSCSELS;
}

uint32_t pmc_osc_is_ready_32kxtal(void)
{
	return ((SUPC->SUPC_SR & SUPC_SR_OSCSEL)
			&& (PMC->PMC_SR & PMC_SR_OSCSELS));
}

void pmc_switch_mainck_to_xtal(uint32_t ul_bypass,
		uint32_t ul_xtal_startup_time)
{
	/* Enable Main Xtal oscillator */
	if (ul_bypass) {
		PMC->CKGR_MOR = (PMC->CKGR_MOR & ~CKGR_MOR_MOSCXTEN) |
				CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTBY |
				CKGR_MOR_MOSCSEL;
	} else {
		PMC->CKGR_MOR = (PMC->CKGR_MOR & ~CKGR_MOR_MOSCXTBY) |
				CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTEN |
				CKGR_MOR_MOSCXTST(ul_xtal_startup_time);
		/* Wait the Xtal to stabilize */
		while (!(PMC->PMC_SR & PMC_SR_MOSCXTS));

		PMC->CKGR_MOR |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCSEL;
	}
}

void pmc_switch_mainck_to_fastrc(uint32_t ul_moscrcf)
{
	/* Enable Fast RC oscillator but DO NOT switch to RC now */
	PMC->CKGR_MOR |= (CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCRCEN);

	/* Wait the Fast RC to stabilize */
	while (!(PMC->PMC_SR & PMC_SR_MOSCRCS));

	/* Change Fast RC oscillator frequency */
	PMC->CKGR_MOR = (PMC->CKGR_MOR & ~CKGR_MOR_MOSCRCF_Msk) |
			CKGR_MOR_KEY_PASSWD | ul_moscrcf;

	/* Wait the Fast RC to stabilize */
	while (!(PMC->PMC_SR & PMC_SR_MOSCRCS));

	/* Switch to Fast RC */
	PMC->CKGR_MOR = (PMC->CKGR_MOR & ~CKGR_MOR_MOSCSEL) |
			CKGR_MOR_KEY_PASSWD;
}

void pmc_switch_sclk_to_32kxtal(uint32_t ul_bypass)
{
	/* Set Bypass mode if required */
	if (ul_bypass == 1) {
		SUPC->SUPC_MR |= SUPC_MR_KEY_PASSWD |
			SUPC_MR_OSCBYPASS;
	}

	SUPC->SUPC_CR = SUPC_CR_KEY_PASSWD | SUPC_CR_XTALSEL;
}

 uint32_t sysclk_get_main_hz(void)
{
	/* Config system clock setting */
	if (CONFIG_SYSCLK_SOURCE == SYSCLK_SRC_SLCK_RC) {
		return OSC_SLCK_32K_RC_HZ;
	} else if (CONFIG_SYSCLK_SOURCE == SYSCLK_SRC_SLCK_XTAL) {
		return OSC_SLCK_32K_XTAL_HZ;
	} else if (CONFIG_SYSCLK_SOURCE == SYSCLK_SRC_SLCK_BYPASS) {
		return OSC_SLCK_32K_BYPASS_HZ;
	} else if (CONFIG_SYSCLK_SOURCE == SYSCLK_SRC_MAINCK_4M_RC) {
		return OSC_MAINCK_4M_RC_HZ;
	} else if (CONFIG_SYSCLK_SOURCE == SYSCLK_SRC_MAINCK_8M_RC) {
		return OSC_MAINCK_8M_RC_HZ;
	} else if (CONFIG_SYSCLK_SOURCE == SYSCLK_SRC_MAINCK_12M_RC) {
		return OSC_MAINCK_12M_RC_HZ;
	} else if (CONFIG_SYSCLK_SOURCE == SYSCLK_SRC_MAINCK_XTAL) {
		return OSC_MAINCK_XTAL_HZ;
	} else if (CONFIG_SYSCLK_SOURCE == SYSCLK_SRC_MAINCK_BYPASS) {
		return OSC_MAINCK_BYPASS_HZ;
	}
	else if (CONFIG_SYSCLK_SOURCE == SYSCLK_SRC_PLLACK) {
		return (osc_get_rate(CONFIG_PLL0_SOURCE) * CONFIG_PLL0_MUL) / CONFIG_PLL0_DIV;
	}

#ifdef CONFIG_PLL1_SOURCE
	else if (CONFIG_SYSCLK_SOURCE == SYSCLK_SRC_UPLLCK) {
		return PLL_UPLL_HZ;
	}
#endif
	else {
		/* unhandled_case(CONFIG_SYSCLK_SOURCE); */
		return 0;
	}
}

 uint32_t sysclk_get_cpu_hz(void)
{
	/* CONFIG_SYSCLK_PRES is the register value for setting the expected */
	/* prescaler, not an immediate value. */
	return sysclk_get_main_hz() /
		((CONFIG_SYSCLK_PRES == SYSCLK_PRES_3) ? 3 :
			(1 << (CONFIG_SYSCLK_PRES >> PMC_MCKR_PRES_Pos)));
}

uint32_t pmc_switch_mck_to_sclk(uint32_t ul_pres)
{
	uint32_t ul_timeout;

	PMC->PMC_MCKR = (PMC->PMC_MCKR & (~PMC_MCKR_CSS_Msk)) |
			PMC_MCKR_CSS_SLOW_CLK;
	for (ul_timeout = PMC_TIMEOUT; !(PMC->PMC_SR & PMC_SR_MCKRDY);
			--ul_timeout) {
		if (ul_timeout == 0) {
			return 1;
		}
	}

	PMC->PMC_MCKR = (PMC->PMC_MCKR & (~PMC_MCKR_PRES_Msk)) | ul_pres;
	for (ul_timeout = PMC_TIMEOUT; !(PMC->PMC_SR & PMC_SR_MCKRDY);
			--ul_timeout) {
		if (ul_timeout == 0) {
			return 1;
		}
	}

	return 0;
}

uint32_t pmc_switch_mck_to_mainck(uint32_t ul_pres)
{
	uint32_t ul_timeout;

	PMC->PMC_MCKR = (PMC->PMC_MCKR & (~PMC_MCKR_CSS_Msk)) |
			PMC_MCKR_CSS_MAIN_CLK;
	for (ul_timeout = PMC_TIMEOUT; !(PMC->PMC_SR & PMC_SR_MCKRDY);
			--ul_timeout) {
		if (ul_timeout == 0) {
			return 1;
		}
	}

	PMC->PMC_MCKR = (PMC->PMC_MCKR & (~PMC_MCKR_PRES_Msk)) | ul_pres;
	for (ul_timeout = PMC_TIMEOUT; !(PMC->PMC_SR & PMC_SR_MCKRDY);
			--ul_timeout) {
		if (ul_timeout == 0) {
			return 1;
		}
	}

	return 0;
}

uint32_t pmc_switch_mck_to_pllack(uint32_t ul_pres)
{
	uint32_t ul_timeout;

	PMC->PMC_MCKR = (PMC->PMC_MCKR & (~PMC_MCKR_PRES_Msk)) | ul_pres;
	for (ul_timeout = PMC_TIMEOUT; !(PMC->PMC_SR & PMC_SR_MCKRDY);
			--ul_timeout) {
		if (ul_timeout == 0) {
			return 1;
		}
	}

	PMC->PMC_MCKR = (PMC->PMC_MCKR & (~PMC_MCKR_CSS_Msk)) |
			PMC_MCKR_CSS_PLLA_CLK;

	for (ul_timeout = PMC_TIMEOUT; !(PMC->PMC_SR & PMC_SR_MCKRDY);
			--ul_timeout) {
		if (ul_timeout == 0) {
			return 1;
		}
	}

	return 0;
}

uint32_t pmc_switch_mck_to_upllck(uint32_t ul_pres)
{
	uint32_t ul_timeout;

	PMC->PMC_MCKR = (PMC->PMC_MCKR & (~PMC_MCKR_PRES_Msk)) | ul_pres;
	for (ul_timeout = PMC_TIMEOUT; !(PMC->PMC_SR & PMC_SR_MCKRDY);
			--ul_timeout) {
		if (ul_timeout == 0) {
			return 1;
		}
	}

	PMC->PMC_MCKR = (PMC->PMC_MCKR & (~PMC_MCKR_CSS_Msk)) |
			PMC_MCKR_CSS_UPLL_CLK;
	for (ul_timeout = PMC_TIMEOUT; !(PMC->PMC_SR & PMC_SR_MCKRDY);
			--ul_timeout) {
		if (ul_timeout == 0) {
			return 1;
		}
	}

	return 0;
}

void pmc_mck_set_division( uint32_t ul_div )
{
	switch (ul_div) {
		case 1:
			PMC->PMC_MCKR = ( PMC->PMC_MCKR & ( ~PMC_MCKR_MDIV_Msk ) ) | PMC_MCKR_MDIV_EQ_PCK;
			break;
		case 2:
			PMC->PMC_MCKR = ( PMC->PMC_MCKR & ( ~PMC_MCKR_MDIV_Msk ) ) | PMC_MCKR_MDIV_PCK_DIV2;
			break;
		case 3:
			PMC->PMC_MCKR = ( PMC->PMC_MCKR & ( ~PMC_MCKR_MDIV_Msk ) ) | PMC_MCKR_MDIV_PCK_DIV3;
			break;
		case 4:
			PMC->PMC_MCKR = ( PMC->PMC_MCKR & ( ~PMC_MCKR_MDIV_Msk ) ) | PMC_MCKR_MDIV_PCK_DIV4;
			break;

		default:
			PMC->PMC_MCKR = ( PMC->PMC_MCKR & ( ~PMC_MCKR_MDIV_Msk ) ) | PMC_MCKR_MDIV_EQ_PCK;
			break;
	}

	// Wait till Power Module is ready.
	while ( !( PMC->PMC_SR & PMC_SR_MCKRDY ) );
}

 int pll_wait_for_lock(unsigned int pll_id)
{
	Assert(pll_id < NR_PLLS);

	while (!pll_is_locked(pll_id)) {
		/* Do nothing */
	}

	return 0;
}

 void osc_wait_ready(uint8_t id)
{
	while (!osc_is_ready(id)) {
		/* Do nothing */
	}
}

void pmc_disable_pllack(void)
{
	PMC->CKGR_PLLAR = CKGR_PLLAR_ONE | CKGR_PLLAR_MULA(0);
}

 void osc_enable(uint32_t ul_id)
{
	switch (ul_id) {
	case OSC_SLCK_32K_RC:
		break;

	case OSC_SLCK_32K_XTAL:
		pmc_switch_sclk_to_32kxtal(PMC_OSC_XTAL);
		break;

	case OSC_SLCK_32K_BYPASS:
		pmc_switch_sclk_to_32kxtal(PMC_OSC_BYPASS);
		break;


	case OSC_MAINCK_4M_RC:
		pmc_switch_mainck_to_fastrc(CKGR_MOR_MOSCRCF_4_MHz);
		break;

	case OSC_MAINCK_8M_RC:
		pmc_switch_mainck_to_fastrc(CKGR_MOR_MOSCRCF_8_MHz);
		break;

	case OSC_MAINCK_12M_RC:
		pmc_switch_mainck_to_fastrc(CKGR_MOR_MOSCRCF_12_MHz);
		break;


	case OSC_MAINCK_XTAL:
		pmc_switch_mainck_to_xtal(PMC_OSC_XTAL,
			pmc_us_to_moscxtst(BOARD_OSC_STARTUP_US,
				OSC_SLCK_32K_RC_HZ));
		break;

	case OSC_MAINCK_BYPASS:
		pmc_switch_mainck_to_xtal(PMC_OSC_BYPASS,
			pmc_us_to_moscxtst(BOARD_OSC_STARTUP_US,
				OSC_SLCK_32K_RC_HZ));
		break;
	}
}

 void osc_disable(uint32_t ul_id)
{
	switch (ul_id) {
	case OSC_SLCK_32K_RC:
	case OSC_SLCK_32K_XTAL:
	case OSC_SLCK_32K_BYPASS:
		break;

	case OSC_MAINCK_4M_RC:
	case OSC_MAINCK_8M_RC:
	case OSC_MAINCK_12M_RC:
		pmc_osc_disable_fastrc();
		break;

	case OSC_MAINCK_XTAL:
		pmc_osc_disable_xtal(PMC_OSC_XTAL);
		break;

	case OSC_MAINCK_BYPASS:
		pmc_osc_disable_xtal(PMC_OSC_BYPASS);
		break;
	}
}

 bool osc_is_ready(uint32_t ul_id)
{
	switch (ul_id) {
	case OSC_SLCK_32K_RC:
		return 1;

	case OSC_SLCK_32K_XTAL:
	case OSC_SLCK_32K_BYPASS:
		return pmc_osc_is_ready_32kxtal();

	case OSC_MAINCK_4M_RC:
	case OSC_MAINCK_8M_RC:
	case OSC_MAINCK_12M_RC:
	case OSC_MAINCK_XTAL:
	case OSC_MAINCK_BYPASS:
		return pmc_osc_is_ready_mainck();
	}

	return 0;
}

uint32_t osc_get_rate(uint32_t ul_id)
{
	switch (ul_id) {
	case OSC_SLCK_32K_RC:
		return OSC_SLCK_32K_RC_HZ;

	case OSC_SLCK_32K_XTAL:
		return BOARD_FREQ_SLCK_XTAL;

	case OSC_SLCK_32K_BYPASS:
		return BOARD_FREQ_SLCK_BYPASS;

	case OSC_MAINCK_4M_RC:
		return OSC_MAINCK_4M_RC_HZ;

	case OSC_MAINCK_8M_RC:
		return OSC_MAINCK_8M_RC_HZ;

	case OSC_MAINCK_12M_RC:
		return OSC_MAINCK_12M_RC_HZ;

	case OSC_MAINCK_XTAL:
		return BOARD_FREQ_MAINCK_XTAL;

	case OSC_MAINCK_BYPASS:
		return BOARD_FREQ_MAINCK_BYPASS;
	}

	return 0;
}

/**
 * \note The SAMV71 PLL hardware interprets mul as mul+1. For readability the
 * hardware mul+1 is hidden in this implementation. Use mul as mul effective
 * value.
 */
 void pll_config_init(uint32_t *p_cfg,
		enum pll_source e_src, uint32_t ul_div, uint32_t ul_mul)
{
	uint32_t vco_hz;

	Assert(e_src < PLL_NR_SOURCES);

	if (ul_div == 0 && ul_mul == 0) { /* Must only be true for UTMI PLL */
		*p_cfg = CKGR_UCKR_UPLLCOUNT(PLL_COUNT);
	} else { /* PLLA */
	/* Calculate internal VCO frequency */
	vco_hz = osc_get_rate(e_src) / ul_div;
	Assert(vco_hz >= PLL_INPUT_MIN_HZ);
	Assert(vco_hz <= PLL_INPUT_MAX_HZ);

	vco_hz *= ul_mul;
	Assert(vco_hz >= PLL_OUTPUT_MIN_HZ);
	Assert(vco_hz <= PLL_OUTPUT_MAX_HZ);

	/* PMC hardware will automatically make it mul+1 */
		*p_cfg = CKGR_PLLAR_MULA(ul_mul - 1) | CKGR_PLLAR_DIVA(ul_div)  \
		| CKGR_PLLAR_PLLACOUNT(PLL_COUNT);
	}
}

#define pll_config_defaults(cfg, pll_id)                                 \
	pll_config_init(cfg,                                             \
			CONFIG_PLL##pll_id##_SOURCE,                     \
			CONFIG_PLL##pll_id##_DIV,                        \
			CONFIG_PLL##pll_id##_MUL)

 void pll_config_read(struct pll_config *p_cfg, uint32_t ul_pll_id)
{
	Assert(ul_pll_id < NR_PLLS);

	if (ul_pll_id == PLLA_ID) {
		p_cfg->ctrl = PMC->CKGR_PLLAR;
	} else {
		p_cfg->ctrl = PMC->CKGR_UCKR;
	}
}

 void pll_config_write(const struct pll_config *p_cfg, uint32_t ul_pll_id)
{
	Assert(ul_pll_id < NR_PLLS);

	if (ul_pll_id == PLLA_ID) {
		pmc_disable_pllack(); // Always stop PLL first!
		PMC->CKGR_PLLAR = CKGR_PLLAR_ONE | p_cfg->ctrl;
	} else {
		PMC->CKGR_UCKR = p_cfg->ctrl;
	}
}

 void pll_enable(uint32_t p_cfg, uint32_t ul_pll_id)
{
	if (ul_pll_id == PLLA_ID) {
		// Always stop PLL first!
		pmc_disable_pllack();
		PMC->CKGR_PLLAR = CKGR_PLLAR_ONE | p_cfg;
	} else {
		PMC->CKGR_UCKR = p_cfg | CKGR_UCKR_UPLLEN;
	}
}

/**
 * \note This will only disable the selected PLL, not the underlying oscillator (mainck).
 */
 void pll_disable(uint32_t ul_pll_id)
{
	Assert(ul_pll_id < NR_PLLS);

	if (ul_pll_id == PLLA_ID) {
		pmc_disable_pllack();
	} else {
		PMC->CKGR_UCKR &= ~CKGR_UCKR_UPLLEN;
	}
}

 uint32_t pll_is_locked(uint32_t ul_pll_id)
{
	Assert(ul_pll_id < NR_PLLS);

	if (ul_pll_id == PLLA_ID) {
	return pmc_is_locked_pllack();
	} else {
		return pmc_is_locked_upll();
	}
}

 void pll_enable_source(enum pll_source e_src)
{
	switch (e_src) {
	case PLL_SRC_MAINCK_4M_RC:
	case PLL_SRC_MAINCK_8M_RC:
	case PLL_SRC_MAINCK_12M_RC:
	case PLL_SRC_MAINCK_XTAL:
	case PLL_SRC_MAINCK_BYPASS:
		osc_enable(e_src);
		osc_wait_ready(e_src);
		break;

	default:
		Assert(false);
		break;
	}
}

 void pll_enable_config_defaults(unsigned int ul_pll_id)
{
	struct pll_config pllcfg;

	if (pll_is_locked(ul_pll_id)) {
		return; // Pll already running
	}
	switch (ul_pll_id) {
#ifdef CONFIG_PLL0_SOURCE
	case 0:
		pll_enable_source(CONFIG_PLL0_SOURCE);
		pll_config_init(&pllcfg,
				CONFIG_PLL0_SOURCE,
				CONFIG_PLL0_DIV,
				CONFIG_PLL0_MUL);
		break;
#endif
#ifdef CONFIG_PLL1_SOURCE
	case 1:
		pll_enable_source(CONFIG_PLL1_SOURCE);
		pll_config_init(&pllcfg,
				CONFIG_PLL1_SOURCE,
				CONFIG_PLL1_DIV,
				CONFIG_PLL1_MUL);
		break;
#endif
	default:
		Assert(false);
		break;
	}
	pll_enable(&pllcfg, ul_pll_id);
	while (!pll_is_locked(ul_pll_id));
}

void system_init_flash( uint32_t ul_clk )
{
  /* Set FWS for embedded Flash access according to operating frequency */
  if ( ul_clk < CHIP_FREQ_FWS_0 )
  {
    EFC->EEFC_FMR = EEFC_FMR_FWS(0)|EEFC_FMR_CLOE;
  }
  else
  {
    if (ul_clk < CHIP_FREQ_FWS_1)
    {
      EFC->EEFC_FMR = EEFC_FMR_FWS(1)|EEFC_FMR_CLOE;
    }
    else
    {
      if (ul_clk < CHIP_FREQ_FWS_2)
      {
        EFC->EEFC_FMR = EEFC_FMR_FWS(2)|EEFC_FMR_CLOE;
      }
      else
      {
        if ( ul_clk < CHIP_FREQ_FWS_3 )
        {
          EFC->EEFC_FMR = EEFC_FMR_FWS(3)|EEFC_FMR_CLOE;
        }
        else
        {
          if ( ul_clk < CHIP_FREQ_FWS_4 )
          {
            EFC->EEFC_FMR = EEFC_FMR_FWS(4)|EEFC_FMR_CLOE;
          }
          else
          {
            if ( ul_clk < CHIP_FREQ_FWS_5 )
            {
              EFC->EEFC_FMR = EEFC_FMR_FWS(5)|EEFC_FMR_CLOE;
            }
            else
            {
              EFC->EEFC_FMR = EEFC_FMR_FWS(6)|EEFC_FMR_CLOE;
            }
          }
        }
      }
    }
  }
}

void extra_config()
{
	// Set FWS according. 
	EFC->EEFC_FMR = EEFC_FMR_FWS(5);

	// Initialize main oscillator.
	if ( !(PMC->CKGR_MOR & CKGR_MOR_MOSCSEL) )
	{
		PMC->CKGR_MOR = CKGR_MOR_KEY_PASSWD | SYS_BOARD_OSCOUNT | CKGR_MOR_MOSCRCEN | CKGR_MOR_MOSCXTEN;

		while ( !(PMC->PMC_SR & PMC_SR_MOSCXTS) )
		{
		}
	}

	/* Switch to 3-20MHz Xtal oscillator */
	PMC->CKGR_MOR = CKGR_MOR_KEY_PASSWD | SYS_BOARD_OSCOUNT | CKGR_MOR_MOSCRCEN | CKGR_MOR_MOSCXTEN | CKGR_MOR_MOSCSEL;

	while ( !(PMC->PMC_SR & PMC_SR_MOSCSELS) )
	{
	}

	PMC->PMC_MCKR = (PMC->PMC_MCKR & ~(uint32_t)PMC_MCKR_CSS_Msk) | PMC_MCKR_CSS_MAIN_CLK;

	while ( !(PMC->PMC_SR & PMC_SR_MCKRDY) )
	{
	}

	/* Initialize PLLA */
	PMC->CKGR_PLLAR = SYS_BOARD_PLLAR;
	while ( !(PMC->PMC_SR & PMC_SR_LOCKA) )
	{
	}

	/* Switch to main clock */
	PMC->PMC_MCKR = (SYS_BOARD_MCKR & ~PMC_MCKR_CSS_Msk) | PMC_MCKR_CSS_MAIN_CLK;
	while ( !(PMC->PMC_SR & PMC_SR_MCKRDY) )
	{
	}

	/* Switch to PLLA */
	PMC->PMC_MCKR = SYS_BOARD_MCKR;
	while ( !(PMC->PMC_SR & PMC_SR_MCKRDY) )
	{
	}
}

void sysclk_init( uint8_t host_div )
{
	// Slow Clock is chosen.
	if ( PMC_MCKR_CSS_SLOW_CLK ==  ( VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk ) )
	{
		// Internal Slow Clock is chosen.
		if ( !( VALUE_SUPC_CR & SUPC_CR_XTALSEL_Msk ) ) {
			// No special setup is required as Internal Slow Clock is always enabled.
		}

		// External Slow Clock is chosen.
		else {
			// Set External Slow Clock to be Bypassed if requested.
			if ( VALUE_SUPC_MR & SUPC_MR_OSCBYPASS_Msk ) {
				SUPC->SUPC_MR |= SUPC_MR_KEY_PASSWD | SUPC_MR_OSCBYPASS;
			}

			// Set External Slow Clock to be a source for Slow Clock.
			SUPC->SUPC_CR = SUPC_CR_KEY_PASSWD | SUPC_CR_XTALSEL;
			// Wait for these changes to be processed.
			while ( !( ( SUPC->SUPC_SR & SUPC_SR_OSCSEL ) && ( PMC->PMC_SR & PMC_SR_OSCSELS ) ) );
		}
		// Set Host Clock division.
		pmc_mck_set_division( host_div );

		// Set Slow Clock to be as a source for Host Clock. 
		PMC->PMC_MCKR = ( PMC->PMC_MCKR & ( ~PMC_MCKR_CSS_Msk ) ) | PMC_MCKR_CSS_SLOW_CLK;
		// Wait for these changes to be processed.
		while ( !( PMC->PMC_SR & PMC_SR_MCKRDY ) );

		// Set Processor Clock prescaler.
		PMC->PMC_MCKR = ( PMC->PMC_MCKR & ( ~PMC_MCKR_PRES_Msk ) ) | ( VALUE_PMC_MCKR & PMC_MCKR_PRES_Msk );
		// Wait for these changes to be processed.
		while ( !( PMC->PMC_SR & PMC_SR_MCKRDY ) );
	}

	// Main CLock is chosen.
	else if ( PMC_MCKR_CSS_MAIN_CLK == ( VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk ) )
	{
		// Internal Main Clock is chosen.
		if ( !( VALUE_CKGR_MOR & CKGR_MOR_MOSCSEL_Msk ) ) {
			// Enable Fast RC oscillator but DO NOT switch to RC now.
			PMC->CKGR_MOR |= ( CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCRCEN );
			// Wait for these changes to be processed.
			while ( !( PMC->PMC_SR & PMC_SR_MOSCRCS ) );

			// Change Fast RC oscillator frequency.
			PMC->CKGR_MOR = ( PMC->CKGR_MOR & ~CKGR_MOR_MOSCRCF_Msk ) | CKGR_MOR_KEY_PASSWD | ( VALUE_CKGR_MOR & CKGR_MOR_MOSCRCF_Msk );
			// Wait for these changes to be processed.
			while ( !( PMC->PMC_SR & PMC_SR_MOSCRCS ) );

			// Switch to Fast RC.
			PMC->CKGR_MOR = ( PMC->CKGR_MOR & ~CKGR_MOR_MOSCSEL ) | CKGR_MOR_KEY_PASSWD;
			// Wait for these changes to be processed.
			while ( !( PMC->PMC_SR & PMC_SR_MOSCSELS ) );

			// Set Host Clock division.
			pmc_mck_set_division( host_div );

			// Set Fast Clock to be as a source for Host Clock. 
			PMC->PMC_MCKR = ( PMC->PMC_MCKR & ( ~PMC_MCKR_CSS_Msk ) ) | PMC_MCKR_CSS_MAIN_CLK;
			// Wait for these changes to be processed.
			while ( !( PMC->PMC_SR & PMC_SR_MCKRDY ) );

			// Set Processor Clock prescaler.
			PMC->PMC_MCKR = (PMC->PMC_MCKR & (~PMC_MCKR_PRES_Msk)) | ( VALUE_PMC_MCKR & PMC_MCKR_PRES_Msk );
			// Wait for these changes to be processed.
			while ( !( PMC->PMC_SR & PMC_SR_MCKRDY ) );
		}

		// External Main Clock is chosen.
		else {
			// External Main Clock without Bypass is chosen.
			if ( !( VALUE_CKGR_MOR & CKGR_MOR_MOSCXTBY_Msk ) ) {
				// Enable Main Xtal oscillator.
				PMC->CKGR_MOR = ( PMC->CKGR_MOR & ~CKGR_MOR_MOSCXTBY ) | CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTEN | ( VALUE_CKGR_MOR & CKGR_MOR_MOSCXTST_Msk );
				// Wait for these changes to be processed.
				while ( !( PMC->PMC_SR & PMC_SR_MOSCXTS ) );

				// Switch to Main Xtal oscillator.
				PMC->CKGR_MOR |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCSEL;
			}
			// External Main Clock with Bypass is chosen.
			else {
				// Enable Main Xtal oscillator with Bypass and switch to it.
				PMC->CKGR_MOR = ( PMC->CKGR_MOR & ~CKGR_MOR_MOSCXTEN ) | CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTBY | CKGR_MOR_MOSCSEL;
			}
			// Wait for these changes to be processed.
			while ( !( PMC->PMC_SR & PMC_SR_MOSCSELS ) );

			// Set Host Clock division.
			pmc_mck_set_division( host_div );

			// Set Fast Clock to be as a source for Host Clock. 
			PMC->PMC_MCKR = ( PMC->PMC_MCKR & ( ~PMC_MCKR_CSS_Msk ) ) | PMC_MCKR_CSS_MAIN_CLK;
			// Wait for these changes to be processed.
			while ( !( PMC->PMC_SR & PMC_SR_MCKRDY ) );

			// Set Processor Clock prescaler.
			PMC->PMC_MCKR = (PMC->PMC_MCKR & (~PMC_MCKR_PRES_Msk)) | ( VALUE_PMC_MCKR & PMC_MCKR_PRES_Msk );
			// Wait for these changes to be processed.
			while ( !( PMC->PMC_SR & PMC_SR_MCKRDY ) );
		}
	}

	// PLLA is chosen.
	else if ( ( PMC_MCKR_CSS_PLLA_CLK == ( VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk ) ) ) {
		// Internal Main Clock is chosen.
		if ( !( VALUE_CKGR_MOR & CKGR_MOR_MOSCSEL_Msk ) ) {
			// No special setup is required as internal Main Clock is always enabled for PLLA.
		}
		// External Main Clock is chosen.
		else {
			// External Main Clock without Bypass is chosen.
			if ( !( VALUE_CKGR_MOR & CKGR_MOR_MOSCXTBY_Msk ) ) {
				// Enable Main Xtal oscillator.
				PMC->CKGR_MOR = ( PMC->CKGR_MOR & ~CKGR_MOR_MOSCXTBY ) | CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTEN | ( VALUE_CKGR_MOR & CKGR_MOR_MOSCXTST_Msk );
				// Wait for these changes to be processed.
				while ( !( PMC->PMC_SR & PMC_SR_MOSCXTS ) );

				// Switch to Main Xtal oscillator.
				PMC->CKGR_MOR |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCSEL;
			}
			// External Main Clock with Bypass is chosen.
			else {
				// Enable Main Xtal oscillator with Bypass and switch to it.
				PMC->CKGR_MOR = ( PMC->CKGR_MOR & ~CKGR_MOR_MOSCXTEN ) | CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTBY | CKGR_MOR_MOSCSEL;
			}
		}
		// Wait for these changes to be processed.
		while ( !( PMC->PMC_SR & PMC_SR_MOSCSELS ) );

		// Enable PLLA with requested configuration.
		pll_enable( VALUE_CKGR_PLLAR, PLLA_ID );

		// Wait for PLLA locking.
		while ( !( PMC->PMC_SR & PMC_SR_LOCKA ) );

		// Set Host Clock division.
		pmc_mck_set_division( host_div );

		// Set Processor Clock prescaler.
		PMC->PMC_MCKR = (PMC->PMC_MCKR & (~PMC_MCKR_PRES_Msk)) | ( VALUE_PMC_MCKR & PMC_MCKR_PRES_Msk );
		// Wait for these changes to be processed.
		while ( !( PMC->PMC_SR & PMC_SR_MCKRDY ) );

		// Set PLLA Clock to be as a source for Host Clock. 
		PMC->PMC_MCKR = ( PMC->PMC_MCKR & ( ~PMC_MCKR_CSS_Msk ) ) | PMC_MCKR_CSS_PLLA_CLK;
		// Wait for these changes to be processed.
		while ( !( PMC->PMC_SR & PMC_SR_MCKRDY ) );
	}

	// UPLL is chosen.
	else if ( PMC_MCKR_CSS_UPLL_CLK == ( VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk ) ) {
		// Only External Main Clock can be chosen for UPLL.
		if ( ( VALUE_CKGR_MOR & CKGR_MOR_MOSCSEL_Msk ) ) {
			// External Main Clock without Bypass is chosen.
			if ( !( VALUE_CKGR_MOR & CKGR_MOR_MOSCXTBY_Msk ) ) {
				// Enable Main Xtal oscillator.
				PMC->CKGR_MOR = ( PMC->CKGR_MOR & ~CKGR_MOR_MOSCXTBY ) | CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTEN | ( VALUE_CKGR_MOR & CKGR_MOR_MOSCXTST_Msk );
				// Wait for these changes to be processed.
				while ( !( PMC->PMC_SR & PMC_SR_MOSCXTS ) );

				// Switch to Main Xtal oscillator.
				PMC->CKGR_MOR |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCSEL;
			}
			// External Main Clock with Bypass is chosen.
			else {
				// Enable Main Xtal oscillator with Bypass and switch to it.
				PMC->CKGR_MOR = ( PMC->CKGR_MOR & ~CKGR_MOR_MOSCXTEN ) | CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTBY | CKGR_MOR_MOSCSEL;
			}
		}
		// Wait for these changes to be processed.
		while ( !( PMC->PMC_SR & PMC_SR_MOSCSELS ) );

		// Enable UPLL with requested configuration.
		pll_enable( VALUE_CKGR_UCKR, UPLL_ID );

		// Wait for UPLL locking.
		while ( !( PMC->PMC_SR & PMC_SR_LOCKU ) );

		// Set Host Clock division.
		pmc_mck_set_division( host_div );

		// Set Processor Clock prescaler.
		PMC->PMC_MCKR = ( PMC->PMC_MCKR & ( ~PMC_MCKR_PRES_Msk ) ) | ( VALUE_PMC_MCKR & PMC_MCKR_PRES_Msk );
		// Wait for these changes to be processed.
		while ( !( PMC->PMC_SR & PMC_SR_MCKRDY ) );

		// Set UPLL Clock to be as a source for Host Clock. 
		PMC->PMC_MCKR = ( PMC->PMC_MCKR & ( ~PMC_MCKR_CSS_Msk ) ) | PMC_MCKR_CSS_UPLL_CLK;
		// Wait for these changes to be processed.
		while ( !( PMC->PMC_SR & PMC_SR_MCKRDY ) );
	}
}

void SystemInit(void)
{
	uint8_t host_div;

	/* Get the Host Clock divider value. */ 
	switch ( ( VALUE_PMC_MCKR & PMC_MCKR_MDIV_Msk ) >> PMC_MCKR_MDIV_Pos ) {
		case 0:
			host_div = 1;
			break;
		case 1:
			host_div = 2;
			break;
		case 2:
			host_div = 4;
			break;
		case 3:
			host_div = 3;
			break;

		default:
			host_div = 2;
			break;
	}

	/* Set flash wait state to max in case the below clock switching. */
	system_init_flash( CHIP_FREQ_CPU_MAX / 2 );

	/* Config system clock settings. */
    sysclk_init( host_div );

	/* Set a flash wait state depending on the Host Clock frequency. */
	system_init_flash( ( FOSC_KHZ_VALUE * 1000 ) / host_div );

    return;
}

#ifdef __cplusplus
}
#endif
