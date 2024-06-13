/**
 * \file
 *
 * \brief Low-level initialization functions called upon chip startup.
 *
 * Copyright (c) 2018 Microchip Technology Inc.
 *
 * \asf_license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

// Note: Changed for MikroE implementation
#include "mcu.h"
#include "core_header.h"

/**
 * Initial system clock frequency. The System RC Oscillator (RCSYS) provides
 *  the source for the main clock at chip startup.
 */
#define __SYSTEM_CLOCK    (FOSC_KHZ_VALUE * 1000)

#define OSCILLATOR_ENABLE 0x2
#define OSCILLATOR_ONDEMAND 0x80
#define OSCILLATOR_RUNSTDBY 0x40

uint32_t SystemCoreClock = __SYSTEM_CLOCK;/*!< System Clock Frequency (Core Clock)*/

typedef uint32_t hri_osc32kctrl_osculp32k_reg_t;
typedef uint32_t hri_nvmctrl_ctrlb_reg_t;
typedef uint16_t hri_osc32kctrl_xosc32k_reg_t;
typedef uint8_t  hri_osc32kctrl_cfdctrl_reg_t;
typedef uint32_t hri_osc32kctrl_osc32k_reg_t;
typedef uint8_t  hri_osc32kctrl_evctrl_reg_t;
typedef uint32_t hri_osc32kctrl_rtcctrl_reg_t;
typedef uint8_t  hri_oscctrl_osc48mctrl_reg_t;
typedef uint8_t  hri_oscctrl_osc48mdiv_reg_t;
typedef uint32_t hri_oscctrl_osc48msyncbusy_reg_t;
typedef uint32_t hri_gclk_pchctrl_reg_t;
typedef uint32_t hri_oscctrl_dpllratio_reg_t;
typedef uint32_t hri_oscctrl_dpllctrlb_reg_t;
typedef uint8_t  hri_oscctrl_dpllsyncbusy_reg_t;
typedef uint8_t  hri_oscctrl_dpllpresc_reg_t;
typedef uint8_t  hri_oscctrl_dpllctrla_reg_t;
typedef uint8_t  hri_mclk_cpudiv_reg_t;
typedef uint8_t  hri_oscctrl_osc48mstup_reg_t;
typedef uint32_t hri_gclk_syncbusy_reg_t;

#define CONF_GCLK_GENERATOR_0_CONFIG ((VALUE_GENCTRL0 & GCLK_GENCTRL_GENEN) ? 1 : 0)
#define CONF_GCLK_GENERATOR_1_CONFIG ((VALUE_GENCTRL1 & GCLK_GENCTRL_GENEN) ? 1 : 0)
#define CONF_GCLK_GENERATOR_2_CONFIG ((VALUE_GENCTRL2 & GCLK_GENCTRL_GENEN) ? 1 : 0)
#define CONF_GCLK_GENERATOR_3_CONFIG ((VALUE_GENCTRL3 & GCLK_GENCTRL_GENEN) ? 1 : 0)
#define CONF_GCLK_GENERATOR_4_CONFIG ((VALUE_GENCTRL4 & GCLK_GENCTRL_GENEN) ? 1 : 0)
#define CONF_GCLK_GENERATOR_5_CONFIG ((VALUE_GENCTRL5 & GCLK_GENCTRL_GENEN) ? 1 : 0)
#define CONF_GCLK_GENERATOR_6_CONFIG ((VALUE_GENCTRL6 & GCLK_GENCTRL_GENEN) ? 1 : 0)
#define CONF_GCLK_GENERATOR_7_CONFIG ((VALUE_GENCTRL7 & GCLK_GENCTRL_GENEN) ? 1 : 0)
#define CONF_GCLK_GENERATOR_8_CONFIG ((VALUE_GENCTRL8 & GCLK_GENCTRL_GENEN) ? 1 : 0)

/* Referenced GCLKs (out of 0~7), should be initialized firstly */
#define _GCLK_INIT_1ST (CONF_GCLK_GENERATOR_1_CONFIG << 1 | \
                        CONF_GCLK_GENERATOR_2_CONFIG << 2 | \
                        CONF_GCLK_GENERATOR_3_CONFIG << 3 | \
                        CONF_GCLK_GENERATOR_4_CONFIG << 4 | \
                        CONF_GCLK_GENERATOR_5_CONFIG << 5 | \
                        CONF_GCLK_GENERATOR_6_CONFIG << 6 | \
                        CONF_GCLK_GENERATOR_7_CONFIG << 7 | \
                        CONF_GCLK_GENERATOR_8_CONFIG << 8 )
/* Not referenced GCLKs, initialized last */
#define _GCLK_INIT_LAST (CONF_GCLK_GENERATOR_0_CONFIG << 0 | \
                         !CONF_GCLK_GENERATOR_1_CONFIG << 1 | \
                         !CONF_GCLK_GENERATOR_2_CONFIG << 2 | \
                         !CONF_GCLK_GENERATOR_3_CONFIG << 3 | \
                         !CONF_GCLK_GENERATOR_4_CONFIG << 4 | \
                         !CONF_GCLK_GENERATOR_5_CONFIG << 5 | \
                         !CONF_GCLK_GENERATOR_6_CONFIG << 6 | \
                         !CONF_GCLK_GENERATOR_7_CONFIG << 7 | \
                         !CONF_GCLK_GENERATOR_8_CONFIG << 8)
#define _GCLK_INIT_GCLK0 0x1

#define bool _Bool

static inline void hri_nvmctrl_set_CTRLB_RWS_bf(const void *const hw, hri_nvmctrl_ctrlb_reg_t mask)
{
    ((Nvmctrl *)hw)->CTRLB.reg |= NVMCTRL_CTRLB_RWS(mask);
}

static inline void hri_osc32kctrl_write_XOSC32K_reg(const void *const hw, hri_osc32kctrl_xosc32k_reg_t data)
{
    ((Osc32kctrl *)hw)->XOSC32K.reg = data;
}

static inline void hri_osc32kctrl_write_CFDCTRL_reg(const void *const hw, hri_osc32kctrl_cfdctrl_reg_t data)
{
    ((Osc32kctrl *)hw)->CFDCTRL.reg = data;
}

static inline void hri_osc32kctrl_write_EVCTRL_reg(const void *const hw, hri_osc32kctrl_evctrl_reg_t data)
{
    ((Osc32kctrl *)hw)->EVCTRL.reg = data;
}

static inline void hri_osc32kctrl_write_OSC32K_reg(const void *const hw, hri_osc32kctrl_osc32k_reg_t data)
{
    ((Osc32kctrl *)hw)->OSC32K.reg = data;
}

static inline hri_osc32kctrl_osculp32k_reg_t hri_osc32kctrl_read_OSCULP32K_CALIB_bf(const void *const hw)
{
    uint32_t tmp;
    tmp = ((Osc32kctrl *)hw)->OSCULP32K.reg;
    tmp = (tmp & OSC32KCTRL_OSCULP32K_CALIB_Msk) >> OSC32KCTRL_OSCULP32K_CALIB_Pos;
    return tmp;
}

static inline void hri_osc32kctrl_write_OSCULP32K_reg(const void *const hw, hri_osc32kctrl_osculp32k_reg_t data)
{
    ((Osc32kctrl *)hw)->OSCULP32K.reg = data;
}

static inline bool hri_osc32kctrl_get_STATUS_XOSC32KRDY_bit(const void *const hw)
{
    return (((Osc32kctrl *)hw)->STATUS.reg & OSC32KCTRL_STATUS_XOSC32KRDY) >> OSC32KCTRL_STATUS_XOSC32KRDY_Pos;
}

static inline void hri_osc32kctrl_set_OSCULP32K_reg(const void *const hw, hri_osc32kctrl_osculp32k_reg_t mask)
{
    ((Osc32kctrl *)hw)->OSCULP32K.reg |= mask;
}

static inline bool hri_osc32kctrl_get_STATUS_OSC32KRDY_bit(const void *const hw)
{
    return (((Osc32kctrl *)hw)->STATUS.reg & OSC32KCTRL_STATUS_OSC32KRDY) >> OSC32KCTRL_STATUS_OSC32KRDY_Pos;
}

static inline void hri_osc32kctrl_write_RTCCTRL_reg(const void *const hw, hri_osc32kctrl_rtcctrl_reg_t data)
{
    ((Osc32kctrl *)hw)->RTCCTRL.reg = data;
}

static inline void hri_oscctrl_write_OSC48MCTRL_reg(const void *const hw, hri_oscctrl_osc48mctrl_reg_t data)
{
	((Oscctrl *)hw)->OSC48MCTRL.reg = data;
}

static inline void hri_oscctrl_osc48msyncbusy_wait_for_sync(const void *const hw, hri_oscctrl_osc48msyncbusy_reg_t reg)
{
	while (((Oscctrl *)hw)->OSC48MSYNCBUSY.reg & reg) {
	};
}

static inline void hri_oscctrl_write_OSC48MDIV_reg(const void *const hw, hri_oscctrl_osc48mdiv_reg_t data)
{
	((Oscctrl *)hw)->OSC48MDIV.reg = data;
	hri_oscctrl_osc48msyncbusy_wait_for_sync(hw, OSCCTRL_OSC48MSYNCBUSY_MASK);
}

void _osc32kctrl_init_sources(void)
{
    void *   hw    = (void *)OSC32KCTRL;
    uint16_t calib = 0;
    /** TODO, Work in progress.
     *   #if (VALUE_XOSC32K & OSCILLATOR_ENABLE)
     *       hri_osc32kctrl_write_XOSC32K_reg(hw, VALUE_XOSC32K);
     *       hri_osc32kctrl_write_CFDCTRL_reg(hw, VALUE_CFDCTRL);
     *       hri_osc32kctrl_write_EVCTRL_reg(hw, VALUE_EVCTRL);
     *   #endif
     */
    #if (VALUE_OSC32K & OSCILLATOR_ENABLE)
    /* OSC32K calibration value at bit 18:12 of memory 0x00806020 */
    calib = (*((uint32_t *)0x00806020) & 0x007F000) >> 12;
    hri_osc32kctrl_write_OSC32K_reg(
        hw,
    #if CONF_OSC32K_CALIB_ENABLE == 1
        OSC32KCTRL_OSC32K_CALIB(CONF_OSC32K_CALIB) |
    #else
        OSC32KCTRL_OSC32K_CALIB(calib) |
    #endif
        VALUE_OSC32K);
    #endif

    #if (VALUE_OSCULP32K & OSCILLATOR_ENABLE)
        calib = hri_osc32kctrl_read_OSCULP32K_CALIB_bf(hw);
        hri_osc32kctrl_write_OSCULP32K_reg(
            hw,
        #if CONF_OSC32K_CALIB_ENABLE == 1
            OSC32KCTRL_OSCULP32K_CALIB(CONF_OSC32K_CALIB)
        #else
            OSC32KCTRL_OSCULP32K_CALIB(calib)
        #endif
            );
    #endif
    /** TODO, Work in progress 
     *  #if (VALUE_XOSC32K & OSCILLATOR_ENABLE)
     *      #if (!VALUE_XOSC32K & OSCILLATOR_ONDEMAND)
     *          while (!hri_osc32kctrl_get_STATUS_XOSC32KRDY_bit(hw))
     *              ;
     *      #endif
     *      #if CONF_OSCULP32K_ULP32KSW == 1
     *          hri_osc32kctrl_set_OSCULP32K_reg(hw, OSC32KCTRL_OSCULP32K_ULP32KSW);
     *          while (!hri_osc32kctrl_get_STATUS_ULP32KSW_bit(hw))
     *              ;
     *      #endif
     *  #endif
     */
    #if (VALUE_OSC32K & OSCILLATOR_ENABLE)
        #if (VALUE_OSC32K & OSCILLATOR_ONDEMAND)
            while (!hri_osc32kctrl_get_STATUS_OSC32KRDY_bit(hw))
                ;
        #endif
    #endif

    hri_osc32kctrl_write_RTCCTRL_reg(hw, VALUE_RTCCTRL);

    (void)calib;
}

static inline bool hri_oscctrl_get_OSC48MSYNCBUSY_OSC48MDIV_bit(const void *const hw)
{
	return (((Oscctrl *)hw)->OSC48MSYNCBUSY.reg & OSCCTRL_OSC48MSYNCBUSY_OSC48MDIV)
	       >> OSCCTRL_OSC48MSYNCBUSY_OSC48MDIV_Pos;
}

static inline void hri_oscctrl_write_OSC48MSTUP_reg(const void *const hw, hri_oscctrl_osc48mstup_reg_t data)
{
	((Oscctrl *)hw)->OSC48MSTUP.reg = data;
}

static inline void hri_oscctrl_set_OSC48MCTRL_ONDEMAND_bit(const void *const hw)
{
	((Oscctrl *)hw)->OSC48MCTRL.reg |= OSCCTRL_OSC48MCTRL_ONDEMAND;
}

static inline bool hri_oscctrl_get_STATUS_OSC48MRDY_bit(const void *const hw)
{
	return (((Oscctrl *)hw)->STATUS.reg & OSCCTRL_STATUS_OSC48MRDY) >> OSCCTRL_STATUS_OSC48MRDY_Pos;
}

void _oscctrl_init_sources(void)
{
    void *hw = (void *)OSCCTRL;
    /** TODO, Work in progress.
     *   #if (VALUE_XOSCCTRL & OSCILLATOR_ENABLE)
     *       hri_oscctrl_write_XOSCCTRL_reg(hw, VALUE_XOSCCTRL);
     *       hri_oscctrl_write_EVCTRL_reg(hw, (CONF_XOSC_CFDEO << OSCCTRL_EVCTRL_CFDEO_Pos));
     *   #endif
     */
    #if (VALUE_OSC48MCTRL & OSCILLATOR_ENABLE)
        hri_oscctrl_write_OSC48MCTRL_reg(hw, VALUE_OSC48MCTRL);

        hri_oscctrl_write_OSC48MDIV_reg(hw, VALUE_OSC48MDIV);
        while (hri_oscctrl_get_OSC48MSYNCBUSY_OSC48MDIV_bit(hw))
            ;
        hri_oscctrl_write_OSC48MSTUP_reg(hw, VALUE_OSC48MSTUP);
    #endif
    /** TODO, Work in progress.
     *   #if (VALUE_XOSCCTRL & OSCILLATOR_ENABLE)
     *       while (!hri_oscctrl_get_STATUS_XOSCRDY_bit(hw))
     *           ;
     *       #if CONF_XOSC_AMPGC == 1
     *           hri_oscctrl_set_XOSCCTRL_AMPGC_bit(hw);
     *       #endif
     *       #if (VALUE_XOSCCTRL & OSCILLATOR_ONDEMAND)
     *           hri_oscctrl_set_XOSCCTRL_ONDEMAND_bit(hw);
     *       #endif
     *   #endif
     */
    #if (VALUE_OSC48MCTRL & OSCILLATOR_ENABLE)
        while (!hri_oscctrl_get_STATUS_OSC48MRDY_bit(hw))
            ;
        #if (VALUE_OSC48MCTRL & OSCILLATOR_ONDEMAND)
            hri_oscctrl_set_OSC48MCTRL_ONDEMAND_bit(hw);
        #endif
    #endif

    (void)hw;
}

static inline void hri_mclk_write_CPUDIV_reg(const void *const hw, hri_mclk_cpudiv_reg_t data)
{
	((Mclk *)hw)->CPUDIV.reg = data;
}

void _mclk_init(void)
{
    void *hw = (void *)MCLK;
    hri_mclk_write_CPUDIV_reg(hw, VALUE_CPUDIV);
}

static inline void hri_gclk_wait_for_sync(const void *const hw, hri_gclk_syncbusy_reg_t reg)
{
	while (((Gclk *)hw)->SYNCBUSY.reg & reg) {
	};
}

void _gclk_init_generators_by_fref(uint32_t bm)
{
    #if CONF_GCLK_GENERATOR_0_CONFIG == 1
    if (bm & (1ul << 0))
        GCLK->GENCTRL[0].reg = VALUE_GENCTRL0;

	    hri_gclk_wait_for_sync(GCLK, GCLK_SYNCBUSY_MASK);
    #endif

    #if CONF_GCLK_GENERATOR_1_CONFIG == 1
    if (bm & (1ul << 1))
        GCLK->GENCTRL[1].reg = VALUE_GENCTRL1;

	    hri_gclk_wait_for_sync(GCLK, GCLK_SYNCBUSY_MASK);
    #endif

    #if CONF_GCLK_GENERATOR_2_CONFIG == 1
    if (bm & (1ul << 2))
        GCLK->GENCTRL[2].reg = VALUE_GENCTRL2;

	    hri_gclk_wait_for_sync(GCLK, GCLK_SYNCBUSY_MASK);
    #endif

    #if CONF_GCLK_GENERATOR_3_CONFIG == 1
    if (bm & (1ul << 3))
        GCLK->GENCTRL[3].reg = VALUE_GENCTRL3;

	    hri_gclk_wait_for_sync(GCLK, GCLK_SYNCBUSY_MASK);
    #endif

    #if CONF_GCLK_GENERATOR_4_CONFIG == 1
    if (bm & (1ul << 4))
        GCLK->GENCTRL[4].reg = VALUE_GENCTRL4;

	    hri_gclk_wait_for_sync(GCLK, GCLK_SYNCBUSY_MASK);
    #endif

    #if CONF_GCLK_GENERATOR_5_CONFIG == 1
    if (bm & (1ul << 5))
        GCLK->GENCTRL[5].reg = VALUE_GENCTRL5;

	    hri_gclk_wait_for_sync(GCLK, GCLK_SYNCBUSY_MASK);
    #endif

    #if CONF_GCLK_GENERATOR_6_CONFIG == 1
    if (bm & (1ul << 6))
        GCLK->GENCTRL[6].reg = VALUE_GENCTRL6;

	    hri_gclk_wait_for_sync(GCLK, GCLK_SYNCBUSY_MASK);
    #endif

    #if CONF_GCLK_GENERATOR_7_CONFIG == 1
    if (bm & (1ul << 7))
        GCLK->GENCTRL[7].reg = VALUE_GENCTRL7;

	    hri_gclk_wait_for_sync(GCLK, GCLK_SYNCBUSY_MASK);
    #endif

    #if CONF_GCLK_GENERATOR_8_CONFIG == 1
    if (bm & (1ul << 8))
        GCLK->GENCTRL[8].reg = VALUE_GENCTRL8;

	    hri_gclk_wait_for_sync(GCLK, GCLK_SYNCBUSY_MASK);
    #endif
}

static inline void hri_gclk_write_PCHCTRL_reg(const void *const hw, uint8_t index, hri_gclk_pchctrl_reg_t data)
{
    ((Gclk *)hw)->PCHCTRL[index].reg = data;
}

static inline void hri_oscctrl_dpllsyncbusy_wait_for_sync(const void *const hw, hri_oscctrl_dpllsyncbusy_reg_t reg)
{
    while (((Oscctrl *)hw)->DPLLSYNCBUSY.reg & reg) {
    };
}

static inline void hri_oscctrl_write_DPLLRATIO_reg(const void *const hw, hri_oscctrl_dpllratio_reg_t data)
{
    ((Oscctrl *)hw)->DPLLRATIO.reg = data;
    hri_oscctrl_dpllsyncbusy_wait_for_sync(hw, OSCCTRL_DPLLSYNCBUSY_MASK);
}

static inline void hri_oscctrl_write_DPLLCTRLB_reg(const void *const hw, hri_oscctrl_dpllctrlb_reg_t data)
{
    ((Oscctrl *)hw)->DPLLCTRLB.reg = data;
}

static inline void hri_oscctrl_write_DPLLPRESC_reg(const void *const hw, hri_oscctrl_dpllpresc_reg_t data)
{
	((Oscctrl *)hw)->DPLLPRESC.reg = data;
	hri_oscctrl_dpllsyncbusy_wait_for_sync(hw, OSCCTRL_DPLLSYNCBUSY_MASK);
}

static inline void hri_oscctrl_write_DPLLCTRLA_reg(const void *const hw, hri_oscctrl_dpllctrla_reg_t data)
{
	((Oscctrl *)hw)->DPLLCTRLA.reg = data;
	hri_oscctrl_dpllsyncbusy_wait_for_sync(hw, OSCCTRL_DPLLSYNCBUSY_ENABLE);
}

static inline bool hri_oscctrl_get_DPLLSTATUS_CLKRDY_bit(const void *const hw)
{
	return (((Oscctrl *)hw)->DPLLSTATUS.reg & OSCCTRL_DPLLSTATUS_CLKRDY) >> OSCCTRL_DPLLSTATUS_CLKRDY_Pos;
}

static inline bool hri_oscctrl_get_DPLLSTATUS_LOCK_bit(const void *const hw)
{
	return (((Oscctrl *)hw)->DPLLSTATUS.reg & OSCCTRL_DPLLSTATUS_LOCK) >> OSCCTRL_DPLLSTATUS_LOCK_Pos;
}

void _oscctrl_init_referenced_generators(void)
{
    void *hw = (void *)OSCCTRL;
    #if (VALUE_DPLLCTRLA & OSCILLATOR_ENABLE)
        #if ((VALUE_DPLLCTRLB & OSCCTRL_DPLLCTRLB_REFCLK_Msk) == 0x20)
            hri_gclk_write_PCHCTRL_reg(GCLK, 0, VALUE_PCHCTRL0);
        #endif
    hri_oscctrl_write_DPLLRATIO_reg(hw, VALUE_DPLLRATIO);

    hri_oscctrl_write_DPLLCTRLB_reg(hw, VALUE_DPLLCTRLB);

    hri_oscctrl_write_DPLLPRESC_reg(hw, VALUE_DPLLPRESC);

    hri_oscctrl_write_DPLLCTRLA_reg(hw, VALUE_DPLLCTRLA);
    #endif

    #if (VALUE_DPLLCTRLA & OSCILLATOR_ENABLE)
        #if (VALUE_DPLLCTRLA & OSCILLATOR_ONDEMAND)
            hri_oscctrl_set_DPLLCTRLA_ONDEMAND_bit(hw);
        #endif
    #endif

    (void)hw;
}

static inline void hri_divas_write_CTRLA_DLZ_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	tmp = ((Divas *)hw)->CTRLA.reg;
	tmp &= ~DIVAS_CTRLA_DLZ;
	tmp |= value << DIVAS_CTRLA_DLZ_Pos;
	((Divas *)hw)->CTRLA.reg = tmp;
}

void _div_init(void)
{
	hri_divas_write_CTRLA_DLZ_bit(DIVAS, 0);// TODO CONF_DIVAS_DLZ);
}

/**
 * Initialize the system
 *
 * @brief  Setup the microcontroller system.
 *         Initialize the System and update the SystemCoreClock variable.
 */
void SystemInit(void)
{
    // Keep the default device state after reset
    SystemCoreClock = __SYSTEM_CLOCK;

    uint8_t nvmctrl_ctrlb_rws = (VALUE_NVMCTRL_CTRLB & NVMCTRL_CTRLB_RWS_Msk) >> 1;
    hri_nvmctrl_set_CTRLB_RWS_bf(NVMCTRL, nvmctrl_ctrlb_rws);

    _osc32kctrl_init_sources();
    _oscctrl_init_sources();
    _mclk_init();
    #if _GCLK_INIT_1ST
    _gclk_init_generators_by_fref(_GCLK_INIT_1ST);
    #endif
    _oscctrl_init_referenced_generators();

    _gclk_init_generators_by_fref(_GCLK_INIT_LAST);

    _div_init();

    return;
}

/**
 * Update SystemCoreClock variable
 *
 * @brief  Updates the SystemCoreClock with current core Clock
 *         retrieved from cpu registers.
 */
void SystemCoreClockUpdate(void)
{
        // Not implemented
        SystemCoreClock = __SYSTEM_CLOCK;
        return;
}
