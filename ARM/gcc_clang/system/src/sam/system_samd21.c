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
#include "core_header.h"
#include "mcu.h"

#ifndef CONF_OSC8M_OVERWRITE_CALIBRATION
#define CONF_OSC8M_OVERWRITE_CALIBRATION 0
#endif

#ifndef CONF_OSC8M_CALIB
#define CONF_OSC8M_CALIB 0
#endif

#ifndef CONF_OSC32K_OVERWRITE_CALIBRATION
#define CONF_OSC32K_OVERWRITE_CALIBRATION 0
#endif

#ifndef CONF_OSC32K_CALIB
#define CONF_OSC32K_CALIB 0
#endif

#ifndef CONF_OSCULP32K_OVERWRITE_CALIBRATION
#define CONF_OSCULP32K_OVERWRITE_CALIBRATION 0
#endif

#ifndef CONF_DFLL_OVERWRITE_CALIBRATION
#define CONF_DFLL_OVERWRITE_CALIBRATION 0
#endif

// Coarse Value <0x0-0x3F>
#ifndef CONF_DFLL_COARSE
#define CONF_DFLL_COARSE (VALUE_DFLLVAL & SYSCTRL_DFLLVAL_COARSE_Msk)
#endif

// Fine Value <0x0-0x3FF>
#ifndef CONF_DFLL_FINE
#define CONF_DFLL_FINE (VALUE_DFLLVAL & SYSCTRL_DFLLVAL_FINE_Msk)
#endif

// TODO, Work in progress.
// #if CONF_DFLL_OVERWRITE_CALIBRATION == 0
#if (CONF_DFLL_FINE == 0 && CONF_DFLL_COARSE == 0)
#define CONF_DEFAULT_CORASE \
    ((FUSES_DFLL48M_COARSE_CAL_Msk & (*((uint32_t *)FUSES_DFLL48M_COARSE_CAL_ADDR))) >> FUSES_DFLL48M_COARSE_CAL_Pos)

#define CONF_DFLLVAL                                                                               \
    SYSCTRL_DFLLVAL_COARSE(((CONF_DEFAULT_CORASE) == 0x3F) ? 0x1F : (CONF_DEFAULT_CORASE)) \
    | SYSCTRL_DFLLVAL_FINE(512)

#else
#define CONF_DFLLVAL SYSCTRL_DFLLVAL_COARSE(CONF_DFLL_COARSE) | SYSCTRL_DFLLVAL_FINE(CONF_DFLL_FINE)

#endif

#define CONF_DPLL_REFCLK             ((VALUE_DPLLCTRLB & SYSCTRL_DPLLCTRLB_REFCLK_Msk) >> 4)

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
// #define _GCLK_INIT_1ST 0x00000003
#define _GCLK_INIT_1ST (CONF_GCLK_GENERATOR_0_CONFIG << 0 | \
                        CONF_GCLK_GENERATOR_1_CONFIG << 1 | \
                        CONF_GCLK_GENERATOR_2_CONFIG << 2 | \
                        CONF_GCLK_GENERATOR_3_CONFIG << 3 | \
                        CONF_GCLK_GENERATOR_4_CONFIG << 4 | \
                        CONF_GCLK_GENERATOR_5_CONFIG << 5 | \
                        CONF_GCLK_GENERATOR_6_CONFIG << 6 | \
                        CONF_GCLK_GENERATOR_7_CONFIG << 7 | \
                        CONF_GCLK_GENERATOR_8_CONFIG << 8)
/* Not referenced GCLKs, initialized last */
#define _GCLK_INIT_LAST  (!_GCLK_INIT_1ST & 0xFF)
#define _GCLK_INIT_GCLK0 0x1

#define CONF_CPU_DIV     (VALUE_CPUSEL & PM_CPUSEL_CPUDIV_Msk)
#define CONF_APBA_DIV    (VALUE_APBASEL & PM_APBASEL_APBADIV_Msk)

#if CONF_APBA_DIV < CONF_CPU_DIV
#warning APBA DIV cannot less than CPU DIV
#endif

#define CONF_APBB_DIV (VALUE_APBBSEL & PM_APBBSEL_APBBDIV_Msk)

#if CONF_APBB_DIV < CONF_CPU_DIV
#warning APBB DIV cannot less than CPU DIV
#endif

#define CONF_APBC_DIV (VALUE_APBCSEL & PM_APBCSEL_APBCDIV_Msk)

#if CONF_APBC_DIV < CONF_CPU_DIV
#warning APBC DIV cannot less than CPU DIV
#endif

typedef uint16_t hri_gclk_clkctrl_reg_t;

typedef uint32_t hri_nvmctrl_ctrlb_reg_t;

typedef uint8_t hri_pm_apbasel_reg_t;
typedef uint8_t hri_pm_apbbsel_reg_t;
typedef uint8_t hri_pm_apbcsel_reg_t;
typedef uint8_t hri_pm_cpusel_reg_t;

typedef uint16_t hri_sysctrl_dfllctrl_reg_t;
typedef uint16_t hri_sysctrl_xosc32k_reg_t;
typedef uint16_t hri_sysctrl_xosc_reg_t;
typedef uint32_t hri_sysctrl_dfllmul_reg_t;
typedef uint32_t hri_sysctrl_dfllval_reg_t;
typedef uint32_t hri_sysctrl_dpllctrlb_reg_t;
typedef uint32_t hri_sysctrl_dpllratio_reg_t;
typedef uint32_t hri_sysctrl_osc32k_reg_t;
typedef uint32_t hri_sysctrl_osc8m_reg_t;
typedef uint32_t hri_sysctrl_pclksr_reg_t;
typedef uint8_t  hri_sysctrl_dpllctrla_reg_t;
typedef uint8_t  hri_sysctrl_osculp32k_reg_t;

#define bool _Bool

// General oscillator macros
#define OSCILLATOR_ENABLE   0x2
#define OSCILLATOR_ONDEMAND 0x80
#define OSCILLATOR_RUNSTDBY 0x40
// OSC8M macros
#define OSC8M_PRESCALER_MASK SYSCTRL_OSC8M_PRESC_Msk
// OSC32K macros
#define OSC32K_EN32K_MASK   SYSCTRL_OSC32K_EN32K
#define OSC32K_WRTLOCK_MASK SYSCTRL_OSC32K_WRTLOCK
#define OSC32K_STARTUP_MASK SYSCTRL_OSC32K_STARTUP_Msk
// OSCULP32K macros
#define OSCULP32K_WRTLOCK_MASK SYSCTRL_OSCULP32K_WRTLOCK
#define OSCULP32K_CALIB_MASK   SYSCTRL_OSCULP32K_CALIB_Msk

/**
 * Initial system clock frequency. The System RC Oscillator (RCSYS) provides
 *  the source for the main clock at chip startup.
 */
#define __SYSTEM_CLOCK (FOSC_KHZ_VALUE * 1000)

uint32_t SystemCoreClock = __SYSTEM_CLOCK; /*!< System Clock Frequency (Core Clock)*/

static inline void hri_nvmctrl_set_CTRLB_RWS_bf( const void *const hw, hri_nvmctrl_ctrlb_reg_t mask )
{
    ( ( Nvmctrl * )hw )->CTRLB.reg |= NVMCTRL_CTRLB_RWS( mask );
}

static inline void hri_pm_set_CPUSEL_CPUDIV_bf( const void *const hw, hri_pm_cpusel_reg_t mask )
{
    ( ( Pm * )hw )->CPUSEL.reg |= PM_CPUSEL_CPUDIV( mask );
}

static inline void hri_pm_set_APBASEL_APBADIV_bf( const void *const hw, hri_pm_apbasel_reg_t mask )
{
    ( ( Pm * )hw )->APBASEL.reg |= PM_APBASEL_APBADIV( mask );
}

static inline void hri_pm_set_APBBSEL_APBBDIV_bf( const void *const hw, hri_pm_apbbsel_reg_t mask )
{
    ( ( Pm * )hw )->APBBSEL.reg |= PM_APBBSEL_APBBDIV( mask );
}

static inline void hri_pm_set_APBCSEL_APBCDIV_bf( const void *const hw, hri_pm_apbcsel_reg_t mask )
{
    ( ( Pm * )hw )->APBCSEL.reg |= PM_APBCSEL_APBCDIV( mask );
}

void _pm_init( void )
{
    hri_pm_set_CPUSEL_CPUDIV_bf( PM, CONF_CPU_DIV );
    hri_pm_set_APBASEL_APBADIV_bf( PM, CONF_APBA_DIV );
    hri_pm_set_APBBSEL_APBBDIV_bf( PM, CONF_APBB_DIV );
    hri_pm_set_APBCSEL_APBCDIV_bf( PM, CONF_APBC_DIV );
}

static inline void hri_sysctrl_write_XOSC32K_reg( const void *const hw, hri_sysctrl_xosc32k_reg_t data )
{
    ( ( Sysctrl * )hw )->XOSC32K.reg = data;
}

static inline void hri_sysctrl_write_XOSC_reg( const void *const hw, hri_sysctrl_xosc_reg_t data )
{
    ( ( Sysctrl * )hw )->XOSC.reg = data;
}

static inline hri_sysctrl_osc8m_reg_t hri_sysctrl_read_OSC8M_CALIB_bf( const void *const hw )
{
    uint32_t tmp;
    tmp = ( ( Sysctrl * )hw )->OSC8M.reg;
    tmp = ( tmp & SYSCTRL_OSC8M_CALIB_Msk ) >> SYSCTRL_OSC8M_CALIB_Pos;
    return tmp;
}

static inline void hri_sysctrl_write_OSC8M_reg( const void *const hw, hri_sysctrl_osc8m_reg_t data )
{
    ( ( Sysctrl * )hw )->OSC8M.reg = data;
}

static inline hri_sysctrl_osc32k_reg_t hri_sysctrl_read_OSC32K_CALIB_bf( const void *const hw )
{
    uint32_t tmp;
    tmp = ( ( Sysctrl * )hw )->OSC32K.reg;
    tmp = ( tmp & SYSCTRL_OSC32K_CALIB_Msk ) >> SYSCTRL_OSC32K_CALIB_Pos;
    return tmp;
}

static inline void hri_sysctrl_write_OSC32K_reg( const void *const hw, hri_sysctrl_osc32k_reg_t data )
{
    ( ( Sysctrl * )hw )->OSC32K.reg = data;
}

static inline void hri_sysctrl_set_OSC32K_ENABLE_bit( const void *const hw )
{
    ( ( Sysctrl * )hw )->OSC32K.reg |= SYSCTRL_OSC32K_ENABLE;
}

static inline hri_sysctrl_osculp32k_reg_t hri_sysctrl_read_OSCULP32K_CALIB_bf( const void *const hw )
{
    uint8_t tmp;
    tmp = ( ( Sysctrl * )hw )->OSCULP32K.reg;
    tmp = ( tmp & SYSCTRL_OSCULP32K_CALIB_Msk ) >> SYSCTRL_OSCULP32K_CALIB_Pos;
    return tmp;
}

static inline void hri_sysctrl_write_OSCULP32K_reg( const void *const hw, hri_sysctrl_osculp32k_reg_t data )
{
    ( ( Sysctrl * )hw )->OSCULP32K.reg = data;
}

static inline bool hri_sysctrl_get_PCLKSR_XOSC32KRDY_bit( const void *const hw )
{
    return ( ( ( Sysctrl * )hw )->PCLKSR.reg & SYSCTRL_PCLKSR_XOSC32KRDY ) >> SYSCTRL_PCLKSR_XOSC32KRDY_Pos;
}

static inline void hri_sysctrl_set_XOSC32K_ONDEMAND_bit( const void *const hw )
{
    ( ( Sysctrl * )hw )->XOSC32K.reg |= SYSCTRL_XOSC32K_ONDEMAND;
}

static inline bool hri_sysctrl_get_PCLKSR_XOSCRDY_bit( const void *const hw )
{
    return ( ( ( Sysctrl * )hw )->PCLKSR.reg & SYSCTRL_PCLKSR_XOSCRDY ) >> SYSCTRL_PCLKSR_XOSCRDY_Pos;
}

static inline void hri_sysctrl_set_XOSC_AMPGC_bit( const void *const hw )
{
    ( ( Sysctrl * )hw )->XOSC.reg |= SYSCTRL_XOSC_AMPGC;
}

static inline void hri_sysctrl_set_XOSC_ONDEMAND_bit( const void *const hw )
{
    ( ( Sysctrl * )hw )->XOSC.reg |= SYSCTRL_XOSC_ONDEMAND;
}

static inline bool hri_sysctrl_get_PCLKSR_OSC32KRDY_bit( const void *const hw )
{
    return ( ( ( Sysctrl * )hw )->PCLKSR.reg & SYSCTRL_PCLKSR_OSC32KRDY ) >> SYSCTRL_PCLKSR_OSC32KRDY_Pos;
}

static inline void hri_sysctrl_set_OSC32K_ONDEMAND_bit( const void *const hw )
{
    ( ( Sysctrl * )hw )->OSC32K.reg |= SYSCTRL_OSC32K_ONDEMAND;
}

static inline bool hri_sysctrl_get_PCLKSR_OSC8MRDY_bit( const void *const hw )
{
    return ( ( ( Sysctrl * )hw )->PCLKSR.reg & SYSCTRL_PCLKSR_OSC8MRDY ) >> SYSCTRL_PCLKSR_OSC8MRDY_Pos;
}

static inline void hri_sysctrl_set_OSC8M_ONDEMAND_bit( const void *const hw )
{
    ( ( Sysctrl * )hw )->OSC8M.reg |= SYSCTRL_OSC8M_ONDEMAND;
}

static inline hri_sysctrl_osc8m_reg_t hri_sysctrl_read_OSC8M_FRANGE_bf( const void *const hw )
{
    uint32_t tmp;
    tmp = ( ( Sysctrl * )hw )->OSC8M.reg;
    tmp = ( tmp & SYSCTRL_OSC8M_FRANGE_Msk ) >> SYSCTRL_OSC8M_FRANGE_Pos;
    return tmp;
}

void _sysctrl_init_sources( void )
{
    void    *hw = ( void    *)SYSCTRL;
    uint16_t calib;

    #if ( VALUE_XOSC32K & OSCILLATOR_ENABLE )
        hri_sysctrl_write_XOSC32K_reg( hw, VALUE_XOSC32K );
    #endif

    #if ( VALUE_XOSC & OSCILLATOR_ENABLE )
        hri_sysctrl_write_XOSC_reg( hw, VALUE_XOSC );
    #endif

    uint8_t  osc8m_enable = ( VALUE_OSC8M & OSCILLATOR_ENABLE ) ? 1 : 0;
    uint8_t  osc8m_runstdby = ( VALUE_OSC8M & OSCILLATOR_RUNSTDBY ) ? 1 : 0;
    uint16_t osc8m_prescaler = ( VALUE_OSC8M & OSC8M_PRESCALER_MASK ) >> 8;

    #if ( VALUE_OSC8M & OSCILLATOR_ENABLE )
        calib = hri_sysctrl_read_OSC8M_CALIB_bf( hw );

        hri_sysctrl_write_OSC8M_reg( hw,
                                    SYSCTRL_OSC8M_FRANGE( hri_sysctrl_read_OSC8M_FRANGE_bf( hw ) ) |
        /* TODO, Work in progress */
        #if CONF_OSC8M_OVERWRITE_CALIBRATION == 1
                                            SYSCTRL_OSC8M_CALIB( CONF_OSC8M_CALIB ) |
        #else
                                            SYSCTRL_OSC8M_CALIB( calib ) |
        #endif
                                        SYSCTRL_OSC8M_PRESC( osc8m_prescaler ) | ( osc8m_runstdby << SYSCTRL_OSC8M_RUNSTDBY_Pos ) | ( osc8m_enable << SYSCTRL_OSC8M_ENABLE_Pos ) );
    #endif

    uint8_t  osc32k_enable = ( VALUE_OSC32K & OSCILLATOR_ENABLE ) ? 1 : 0;
    uint8_t  osc32k_runstdby = ( VALUE_OSC32K & OSCILLATOR_RUNSTDBY ) ? 1 : 0;
    uint8_t  osc32k_en32k = ( VALUE_OSC32K & OSC32K_EN32K_MASK ) ? 1 : 0;
    uint8_t  osc32k_wrtlock = ( VALUE_OSC32K & OSC32K_WRTLOCK_MASK ) ? 1 : 0;
    uint16_t osc32k_startup = ( VALUE_OSC32K & OSC32K_STARTUP_MASK ) >> 8;
    #if ( VALUE_OSC32K & OSCILLATOR_ENABLE )
        calib = hri_sysctrl_read_OSC32K_CALIB_bf( hw );

        hri_sysctrl_write_OSC32K_reg(
            hw,
        /* TODO, Work in progress */
        #if CONF_OSC32K_OVERWRITE_CALIBRATION == 1
                SYSCTRL_OSC32K_CALIB( CONF_OSC32K_CALIB ) |
        #else
                SYSCTRL_OSC32K_CALIB( calib ) |
        #endif
                ( osc32k_wrtlock << SYSCTRL_OSC32K_WRTLOCK_Pos ) | SYSCTRL_OSC32K_STARTUP( osc32k_startup ) | ( osc32k_runstdby << SYSCTRL_OSC32K_RUNSTDBY_Pos ) | ( osc32k_en32k << SYSCTRL_OSC32K_EN32K_Pos ) | ( osc32k_enable << SYSCTRL_OSC32K_ENABLE_Pos ) );
    #else
        /* Enable OSC32K anyway since GCLK configuration may need it to sync */
        hri_sysctrl_set_OSC32K_ENABLE_bit( hw );
    #endif

    uint8_t osculp32k_wrtlock = ( VALUE_OSCULP32K & OSCULP32K_WRTLOCK_MASK ) ? 1 : 0;
    uint8_t osculp32k_calib = VALUE_OSCULP32K & OSCULP32K_CALIB_MASK;

    #if ( VALUE_OSCULP32K & OSCILLATOR_ENABLE )
        calib = hri_sysctrl_read_OSCULP32K_CALIB_bf( hw );

        hri_sysctrl_write_OSCULP32K_reg( hw,
        /* TODO, Work in progress */
        #if OSC32K_OVERWRITE_CALIBRATION == 1
                                            SYSCTRL_OSCULP32K_CALIB( osculp32k_calib ) |
        #else
                                            SYSCTRL_OSCULP32K_CALIB( calib ) |
        #endif
                                            ( osculp32k_wrtlock << SYSCTRL_OSCULP32K_WRTLOCK_Pos ) );
    #endif

    #if ( VALUE_XOSC32K & OSCILLATOR_ENABLE )
        while ( !hri_sysctrl_get_PCLKSR_XOSC32KRDY_bit( hw ) )
            ;
        #if ( VALUE_XOSC32K & OSCILLATOR_ONDEMAND )
            hri_sysctrl_set_XOSC32K_ONDEMAND_bit( hw );
        #endif
    #endif

    #if ( VALUE_XOSC & OSCILLATOR_ENABLE )
        while ( !hri_sysctrl_get_PCLKSR_XOSCRDY_bit( hw ) )
            ;
        #if ( VALUE_XOSC & SYSCTRL_XOSC_AMPGC )
            hri_sysctrl_set_XOSC_AMPGC_bit( hw );
        #endif
        #if ( VALUE_XOSC & OSCILLATOR_ONDEMAND )
            hri_sysctrl_set_XOSC_ONDEMAND_bit( hw );
        #endif
    #endif

    #if ( VALUE_OSC32K & OSCILLATOR_ENABLE )
        while ( !hri_sysctrl_get_PCLKSR_OSC32KRDY_bit( hw ) )
            ;
        #if ( VALUE_OSC32K & OSCILLATOR_ONDEMAND )
            hri_sysctrl_set_OSC32K_ONDEMAND_bit( hw );
        #endif
    #endif

    #if ( VALUE_OSC8M & OSCILLATOR_ENABLE )
        while ( !hri_sysctrl_get_PCLKSR_OSC8MRDY_bit( hw ) )
            ;
        #if ( VALUE_OSC8M & OSCILLATOR_ENABLE )
            hri_sysctrl_set_OSC8M_ONDEMAND_bit( hw );
        #endif
    #endif

    ( void )calib, ( void )hw;
}

static inline void hri_sysctrl_write_DFLLMUL_reg( const void *const hw, hri_sysctrl_dfllmul_reg_t data )
{
    ( ( Sysctrl * )hw )->DFLLMUL.reg = data;
}

static inline void hri_sysctrl_write_DFLLVAL_reg( const void *const hw, hri_sysctrl_dfllval_reg_t data )
{
    ( ( Sysctrl * )hw )->DFLLVAL.reg = data;
}

static inline void hri_sysctrl_write_DFLLCTRL_reg( const void *const hw, hri_sysctrl_dfllctrl_reg_t data )
{
    ( ( Sysctrl * )hw )->DFLLCTRL.reg = data;
}

static inline void hri_gclk_write_CLKCTRL_reg( const void *const hw, hri_gclk_clkctrl_reg_t data )
{
    ( ( Gclk * )hw )->CLKCTRL.reg = data;
}

static inline void hri_sysctrl_write_DPLLCTRLA_reg( const void *const hw, hri_sysctrl_dpllctrla_reg_t data )
{
    ( ( Sysctrl * )hw )->DPLLCTRLA.reg = data;
}

static inline void hri_sysctrl_write_DPLLRATIO_reg( const void *const hw, hri_sysctrl_dpllratio_reg_t data )
{
    ( ( Sysctrl * )hw )->DPLLRATIO.reg = data;
}

static inline void hri_sysctrl_write_DPLLCTRLB_reg( const void *const hw, hri_sysctrl_dpllctrlb_reg_t data )
{
    ( ( Sysctrl * )hw )->DPLLCTRLB.reg = data;
}

static inline bool hri_sysctrl_get_DFLLCTRL_MODE_bit( const void *const hw )
{
    uint16_t tmp;
    tmp = ( ( Sysctrl * )hw )->DFLLCTRL.reg;
    tmp = ( tmp & SYSCTRL_DFLLCTRL_MODE ) >> SYSCTRL_DFLLCTRL_MODE_Pos;
    return ( bool )tmp;
}

static inline bool hri_sysctrl_get_PCLKSR_DFLLRDY_bit( const void *const hw )
{
    return ( ( ( Sysctrl * )hw )->PCLKSR.reg & SYSCTRL_PCLKSR_DFLLRDY ) >> SYSCTRL_PCLKSR_DFLLRDY_Pos;
}

static inline hri_sysctrl_pclksr_reg_t hri_sysctrl_get_PCLKSR_reg( const void *const hw, hri_sysctrl_pclksr_reg_t mask )
{
    uint32_t tmp;
    tmp = ( ( Sysctrl * )hw )->PCLKSR.reg;
    tmp &= mask;
    return tmp;
}

static inline void hri_sysctrl_set_DFLLCTRL_ONDEMAND_bit( const void *const hw )
{
    ( ( Sysctrl * )hw )->DFLLCTRL.reg |= SYSCTRL_DFLLCTRL_ONDEMAND;
}

static inline bool hri_sysctrl_get_DPLLSTATUS_ENABLE_bit( const void *const hw )
{
    return ( ( ( Sysctrl * )hw )->DPLLSTATUS.reg & SYSCTRL_DPLLSTATUS_ENABLE ) >> SYSCTRL_DPLLSTATUS_ENABLE_Pos;
}

static inline bool hri_sysctrl_get_DPLLSTATUS_LOCK_bit( const void *const hw )
{
    return ( ( ( Sysctrl * )hw )->DPLLSTATUS.reg & SYSCTRL_DPLLSTATUS_LOCK ) >> SYSCTRL_DPLLSTATUS_LOCK_Pos;
}

static inline bool hri_sysctrl_get_DPLLSTATUS_CLKRDY_bit( const void *const hw )
{
    return ( ( ( Sysctrl * )hw )->DPLLSTATUS.reg & SYSCTRL_DPLLSTATUS_CLKRDY ) >> SYSCTRL_DPLLSTATUS_CLKRDY_Pos;
}

static inline void hri_sysctrl_set_DPLLCTRLA_ONDEMAND_bit( const void *const hw )
{
    ( ( Sysctrl * )hw )->DPLLCTRLA.reg |= SYSCTRL_DPLLCTRLA_ONDEMAND;
}

static inline bool hri_gclk_get_STATUS_SYNCBUSY_bit( const void *const hw )
{
    return ( ( ( Gclk * )hw )->STATUS.reg & GCLK_STATUS_SYNCBUSY ) >> GCLK_STATUS_SYNCBUSY_Pos;
}

static inline void hri_sysctrl_clear_OSC32K_ENABLE_bit( const void *const hw )
{
    ( ( Sysctrl * )hw )->OSC32K.reg &= ~SYSCTRL_OSC32K_ENABLE;
}

void _sysctrl_init_referenced_generators( void )
{
    void *hw = ( void * )SYSCTRL;

    #if ( VALUE_DFLLCTRL & OSCILLATOR_ENABLE )
        #if ( !VALUE_DFLLCTRL & 0x20 ) && ( VALUE_DFLLCTRL & 0x4 )
            ( ( Gclk * )hw )->CLKCTRL.reg = VALUE_CLKCTRL;
        #endif

        ( ( Sysctrl * )hw )->DFLLCTRL.reg = SYSCTRL_DFLLCTRL_ENABLE;

        while ( !hri_sysctrl_get_PCLKSR_DFLLRDY_bit( hw ) )
            ;

        ( ( Sysctrl * )hw )->DFLLMUL.reg = VALUE_DFLLMUL;

        ( ( Sysctrl * )hw )->DFLLVAL.reg = CONF_DFLLVAL;

        ( ( Sysctrl * )hw )->DFLLCTRL.reg = VALUE_DFLLCTRL;
    #endif

    #if ( VALUE_DPLLCTRLA & OSCILLATOR_ENABLE )
        #if CONF_DPLL_REFCLK == SYSCTRL_DPLLCTRLB_REFCLK_GCLK_Val
            hri_gclk_write_CLKCTRL_reg( GCLK,
                                        GCLK_CLKCTRL_ID( 1 ) | GCLK_CLKCTRL_GEN( CONF_DPLL_GCLK ) | ( 1 << GCLK_CLKCTRL_CLKEN_Pos ) );
        #endif

        hri_sysctrl_write_DPLLCTRLA_reg( hw, VALUE_DPLLCTRLA );
        hri_sysctrl_write_DPLLRATIO_reg( hw, VALUE_DPLLRATIO );
        hri_sysctrl_write_DPLLCTRLB_reg( hw, VALUE_DPLLCTRLB );
    #endif

    #if ( VALUE_DFLLCTRL & OSCILLATOR_ENABLE )
        if ( hri_sysctrl_get_DFLLCTRL_MODE_bit( hw ) ) {

            #if ( !VALUE_DFLLCTRL & 0x20 )
                hri_sysctrl_pclksr_reg_t status_mask = SYSCTRL_PCLKSR_DFLLRDY | SYSCTRL_PCLKSR_DFLLLCKF | SYSCTRL_PCLKSR_DFLLLCKC;
            #else
                hri_sysctrl_pclksr_reg_t status_mask = SYSCTRL_PCLKSR_DFLLRDY;
            #endif

            while ( hri_sysctrl_get_PCLKSR_reg( hw, status_mask ) != status_mask )
                ;

        } else {
            while ( !hri_sysctrl_get_PCLKSR_DFLLRDY_bit( hw ) )
                ;
        }
    #endif

    #if ( VALUE_DFLLCTRL & OSCILLATOR_ONDEMAND )
        hri_sysctrl_set_DFLLCTRL_ONDEMAND_bit( hw );
    #endif

    #if ( VALUE_DPLLCTRLA & OSCILLATOR_ENABLE )
        while ( !( hri_sysctrl_get_DPLLSTATUS_ENABLE_bit( hw ) || hri_sysctrl_get_DPLLSTATUS_LOCK_bit( hw ) || hri_sysctrl_get_DPLLSTATUS_CLKRDY_bit( hw ) ) )
            ;
    #endif

    #if ( VALUE_DPLLCTRLA & OSCILLATOR_ONDEMAND )
        hri_sysctrl_set_DPLLCTRLA_ONDEMAND_bit( hw );
    #endif

    #if ( VALUE_DFLLCTRL & OSCILLATOR_ENABLE )
        while ( hri_gclk_get_STATUS_SYNCBUSY_bit( GCLK ) )
            ;
    #endif

    #if ( VALUE_OSC32K & OSCILLATOR_ENABLE == 0 )
        /* Disable after all possible configurations needs sync written. */
        hri_sysctrl_clear_OSC32K_ENABLE_bit( hw );
    #endif

    ( void )hw;
}

void _gclk_init_generators_by_fref( uint32_t bm )
{
    #if CONF_GCLK_GENERATOR_0_CONFIG == 1
        if ( bm & ( 1ul << 0 ) ) {
            GCLK->GENCTRL.reg = VALUE_GENCTRL0;

            /* Wait for the write to complete */
            while ( GCLK->STATUS.bit.SYNCBUSY )
                ;
        }
    #endif

    #if CONF_GCLK_GENERATOR_1_CONFIG == 1
        if ( bm & ( 1ul << 1 ) ) {
            GCLK->GENCTRL.reg = VALUE_GENCTRL1;

            /* Wait for the write to complete */
            while ( GCLK->STATUS.bit.SYNCBUSY )
                ;
        }
    #endif

    #if CONF_GCLK_GENERATOR_2_CONFIG == 1
        if ( bm & ( 1ul << 2 ) ) {
            GCLK->GENCTRL.reg = VALUE_GENCTRL2;

            /* Wait for the write to complete */
            while ( GCLK->STATUS.bit.SYNCBUSY )
                ;
        }
    #endif

    #if CONF_GCLK_GENERATOR_3_CONFIG == 1
        if ( bm & ( 1ul << 3 ) ) {
            GCLK->GENCTRL.reg = VALUE_GENCTRL3;

            /* Wait for the write to complete */
            while ( GCLK->STATUS.bit.SYNCBUSY )
                ;
        }
    #endif

    #if CONF_GCLK_GENERATOR_4_CONFIG == 1
        if ( bm & ( 1ul << 4 ) ) {
            GCLK->GENCTRL.reg = VALUE_GENCTRL4;

            /* Wait for the write to complete */
            while ( GCLK->STATUS.bit.SYNCBUSY )
                ;
        }
    #endif

    #if CONF_GCLK_GENERATOR_5_CONFIG == 1
        if ( bm & ( 1ul << 5 ) ) {
            GCLK->GENCTRL.reg = VALUE_GENCTRL5;

            /* Wait for the write to complete */
            while ( GCLK->STATUS.bit.SYNCBUSY )
                ;
        }
    #endif

    #if CONF_GCLK_GENERATOR_6_CONFIG == 1
        if ( bm & ( 1ul << 6 ) ) {
            GCLK->GENCTRL.reg = VALUE_GENCTRL6;

            /* Wait for the write to complete */
            while ( GCLK->STATUS.bit.SYNCBUSY )
                ;
        }
    #endif

    #if CONF_GCLK_GENERATOR_7_CONFIG == 1
        if ( bm & ( 1ul << 7 ) ) {
            GCLK->GENCTRL.reg = VALUE_GENCTRL7;

            /* Wait for the write to complete */
            while ( GCLK->STATUS.bit.SYNCBUSY )
                ;
        }
    #endif

    #if CONF_GCLK_GENERATOR_8_CONFIG == 1
        if ( bm & ( 1ul << 8 ) ) {
            GCLK->GENCTRL.reg = VALUE_GENCTRL8;

            /* Wait for the write to complete */
            while ( GCLK->STATUS.bit.SYNCBUSY )
                ;
        }
    #endif
}

/**
 * Initialize the system
 *
 * @brief  Setup the microcontroller system.
 *         Initialize the System and update the SystemCoreClock variable.
 */
void SystemInit( void )
{
    // Keep the default device state after reset
    SystemCoreClock = __SYSTEM_CLOCK;
    uint8_t nvmctrl_ctrlb_rws = ( VALUE_NVMCTRL_CTRLB & NVMCTRL_CTRLB_RWS_Msk ) >> 1;
    hri_nvmctrl_set_CTRLB_RWS_bf( NVMCTRL, nvmctrl_ctrlb_rws );
    _pm_init();
    _sysctrl_init_sources();

    #if _GCLK_INIT_1ST
        _gclk_init_generators_by_fref( _GCLK_INIT_1ST );
    #endif

    _sysctrl_init_referenced_generators();

    _gclk_init_generators_by_fref( _GCLK_INIT_GCLK0 );
    _gclk_init_generators_by_fref( _GCLK_INIT_LAST );

    return;
}

/**
 * Update SystemCoreClock variable
 *
 * @brief  Updates the SystemCoreClock with current core Clock
 *         retrieved from cpu registers.
 */
void SystemCoreClockUpdate( void )
{
    // Not implemented
    SystemCoreClock = __SYSTEM_CLOCK;

    return;
}
