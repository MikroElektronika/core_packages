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
** GNU Lesser General Public License Usage
**
** Alternatively, this file may be used for non-commercial projects under the
** terms of the GNU Lesser General Public License version 3 as published by the
** Free Software Foundation: https://www.gnu.org/licenses/lgpl-3.0.html.
**
****************************************************************************/
/*!
 * @file  init_clock.c
 * @brief MikroE clock initialization API for Renesas RL78/G24.
 */

#include <stdint.h>
#include "core_header.h"
#include "mcu.h"

#ifndef FOSC_KHZ_VALUE
#define FOSC_KHZ_VALUE ( 48000UL )
#endif

/*
 * Fixed software waits used while starting oscillators and PLL paths.
 * These waits are finite by design.
 */
#ifndef RL78_FLASH_MODE_WAIT
#define RL78_FLASH_MODE_WAIT       ( 40UL )
#endif

#ifndef RL78_HOCO_STARTUP_WAIT
#define RL78_HOCO_STARTUP_WAIT     ( 64UL )
#endif

#ifndef RL78_MOCO_STARTUP_WAIT
#define RL78_MOCO_STARTUP_WAIT     ( 64UL )
#endif

#ifndef RL78_SUBCLOCK_STARTUP_WAIT
#define RL78_SUBCLOCK_STARTUP_WAIT ( 1000000UL )
#endif

#ifndef RL78_LOCO_SELECTION_WAIT
#define RL78_LOCO_SELECTION_WAIT   ( 64UL )
#endif

#ifndef RL78_PLL_PRESTART_WAIT
#define RL78_PLL_PRESTART_WAIT     ( 64UL )
#endif

#ifndef RL78_PLL_LOCK_WAIT
#define RL78_PLL_LOCK_WAIT         ( 256UL )
#endif

/*
 * Maximum number of polling iterations for hardware status bits.
 *
 * No status-bit wait in the system clock initialization is allowed to block
 * forever. If hardware does not acknowledge the requested switch, startup
 * continues and HOCO is kept running as a safe fallback clock.
 */
#ifndef RL78_CLOCK_STATUS_TIMEOUT
#define RL78_CLOCK_STATUS_TIMEOUT  ( 100000UL )
#endif

#define RL78_CSC_HIOSTOP_MASK      ( 0x01U )
#define RL78_CSC_MIOEN_MASK        ( 0x02U )
#define RL78_CSC_XTSTOP_MASK       ( 0x40U )
#define RL78_CSC_MSTOP_MASK        ( 0x80U )

#define RL78_CKC_MCM1_MASK         ( 0x01U )
#define RL78_CKC_MCM0_MASK         ( 0x10U )
#define RL78_CKC_CSS_MASK          ( 0x40U )

#define RL78_CMC_SUBCLOCK_MASK     ( 0x36U )
#define RL78_CMC_X1_MASK           ( 0xC1U )
#define RL78_CMC_X1_OSC_1_10       ( 0x40U )
#define RL78_CMC_X1_OSC_10_20      ( 0x41U )
#define RL78_CMC_XT1_OSC_BASE      ( 0x10U )
#define RL78_CMC_XTSEL_MASK        ( 0x08U )

#define RL78_DSCCTL_DSCON_MASK     ( 0x01U )
#define RL78_MCKC_CKSELR_MASK      ( 0x01U )
#define RL78_PCKC_PLLCK_MASK       ( 0x02U )

typedef struct
{
    uint32_t FCLK_Frequency;       /* CPU/peripheral hardware clock in Hz. */
} SYSTEM_ClocksTypeDef;

/**
 * @brief Configures the RL78/G24 system clock according to generated settings.
 *
 * @return None
 */
static void system_clock_configuration( void );

/**
 * @brief Executes a finite software wait.
 *
 * @param[in] count Number of loop iterations.
 *
 * @return None
 */
static void rl78_clock_wait( uint32_t count );

/**
 * @brief Waits for X1 oscillator stabilization, with a timeout.
 *
 * @return 1 if stabilization was observed, otherwise 0.
 */
static uint8_t rl78_wait_for_x1_stabilization( void );

/**
 * @brief Configures flash mode, HOCO divider and flash high-speed path.
 *
 * @return 1 if the flash high-speed switch completed, otherwise 0.
 */
static uint8_t rl78_configure_flash_and_hoco( void );

/**
 * @brief Configures PLL and selects the requested main/PLL clock path.
 *
 * @return 1 if the selected path was acknowledged, otherwise 0.
 */
static uint8_t rl78_configure_pll( void );

/**
 * @brief Waits for MCS1 to match the requested MCM1 selection.
 */
static uint8_t rl78_wait_for_mcs1( uint8_t expected );

/**
 * @brief Waits for MCS to match the requested MCM0 selection.
 */
static uint8_t rl78_wait_for_mcs( uint8_t expected );

/**
 * @brief Waits for CLS to match the requested CSS selection.
 */
static uint8_t rl78_wait_for_cls( uint8_t expected );

/**
 * @brief Waits for CLSTR to match the requested CKSELR selection.
 */
static uint8_t rl78_wait_for_clstr( uint8_t expected );

static void rl78_clock_wait( uint32_t count )
{
    while ( count-- > 0U )
    {
        NOP( );
    }
}

static uint8_t rl78_wait_for_mcs1( uint8_t expected )
{
    uint32_t timeout = RL78_CLOCK_STATUS_TIMEOUT;

    while ( ( MCS1 != expected ) && ( timeout > 0UL ) )
    {
        timeout--;
        NOP( );
    }

    return ( MCS1 == expected ) ? 1U : 0U;
}

static uint8_t rl78_wait_for_mcs( uint8_t expected )
{
    uint32_t timeout = RL78_CLOCK_STATUS_TIMEOUT;

    while ( ( MCS != expected ) && ( timeout > 0UL ) )
    {
        timeout--;
        NOP( );
    }

    return ( MCS == expected ) ? 1U : 0U;
}

static uint8_t rl78_wait_for_cls( uint8_t expected )
{
    uint32_t timeout = RL78_CLOCK_STATUS_TIMEOUT;

    while ( ( CLS != expected ) && ( timeout > 0UL ) )
    {
        timeout--;
        NOP( );
    }

    return ( CLS == expected ) ? 1U : 0U;
}

static uint8_t rl78_wait_for_clstr( uint8_t expected )
{
    uint32_t timeout = RL78_CLOCK_STATUS_TIMEOUT;

    while ( ( CLSTR != expected ) && ( timeout > 0UL ) )
    {
        timeout--;
        NOP( );
    }

    return ( CLSTR == expected ) ? 1U : 0U;
}

static uint8_t rl78_wait_for_x1_stabilization( void )
{
    uint8_t tmp_stab_wait;
    uint8_t tmp_stab_set;
    uint32_t timeout = RL78_CLOCK_STATUS_TIMEOUT;

    tmp_stab_set = ( uint8_t ) ~( 0x7FU >> ( VALUE_SYSTEM_OSTS & 0x07U ) );

    do
    {
        tmp_stab_wait = ( uint8_t ) ( OSTC & tmp_stab_set );

        if ( tmp_stab_wait == tmp_stab_set )
        {
            return 1U;
        }

        timeout--;
        NOP( );
    }
    while ( timeout > 0UL );

    return 0U;
}

static uint8_t rl78_configure_flash_and_hoco( void )
{
    uint8_t desired_prefetch = ( uint8_t ) ( VALUE_SYSTEM_PFBER & 0x01U );
    uint8_t desired_fihsel   = ( uint8_t ) ( VALUE_SYSTEM_HSCLKSEL & 0x01U );
    uint32_t timeout;

    /*
     * Keep HOCO alive while the flash clock path is being configured.
     *
     * The device comes out of reset on an on-chip clock path according to the
     * option bytes. Starting/keeping HOCO here gives the rest of the clock
     * setup a safe source to fall back to.
     */
    HIOSTOP = 0U;
    rl78_clock_wait( RL78_HOCO_STARTUP_WAIT );

    /*
     * Preserve the JSON-controlled flash operating mode.
     * FLMODE writes require FLMWEN.
     */
    FLMWEN = 1U;
    FLMODE = ( uint8_t ) ( VALUE_SYSTEM_FLMODE & 0xC0U );
    rl78_clock_wait( RL78_FLASH_MODE_WAIT );
    FLMWEN = 0U;

    /*
     * Configure the requested HOCO divider from the clock JSON.
     */
    HOCODIV = ( uint8_t ) ( VALUE_SYSTEM_HOCODIV & 0x07U );

    /*
     * Configure flash prefetch/high-speed clock selection.
     *
     * Enable prefetch before selecting the high-speed flash clock.
     */
    if ( desired_prefetch != 0U )
    {
        PFBE = 1U;
    }

    FIHSEL = desired_fihsel;

    /*
     * FIHST indicates that the flash high-speed clock switch is in progress.
     * Wait for the switch to finish, but never block startup forever.
     */
    timeout = RL78_CLOCK_STATUS_TIMEOUT;

    while ( ( FIHST != 0U ) && ( timeout > 0UL ) )
    {
        timeout--;
        NOP( );
    }

    /*
     * If prefetch is not requested, disable it only after the switch attempt.
     */
    if ( desired_prefetch == 0U )
    {
        PFBE = 0U;
    }

    return ( FIHST == 0U ) ? 1U : 0U;
}

static uint8_t rl78_configure_pll( void )
{
    uint8_t desired_dscctl = ( uint8_t ) VALUE_SYSTEM_DSCCTL;
    uint8_t desired_mckc   = ( uint8_t ) VALUE_SYSTEM_MCKC;
    uint8_t desired_ckselr;
    uint8_t pll_enabled;

    desired_ckselr =
        ( ( desired_mckc & RL78_MCKC_CKSELR_MASK ) != 0U ) ? 1U : 0U;

    pll_enabled =
        ( uint8_t ) ( desired_dscctl & RL78_DSCCTL_DSCON_MASK );

    /*
     * Stop PLL before changing its multiplication/division configuration.
     */
    DSCON = 0U;
    PLLCK = 0U;

    /*
     * Preserve the JSON-controlled DSCCTL configuration while controlling
     * DSCON separately below.
     */
    DSCCTL =
        ( uint8_t )
        ( desired_dscctl & ( uint8_t ) ~RL78_DSCCTL_DSCON_MASK );

    /*
     * Preserve the JSON-controlled PLL output divider selection.
     */
    RDIV1 = ( ( desired_mckc & 0x04U ) != 0U ) ? 1U : 0U;
    RDIV0 = ( ( desired_mckc & 0x02U ) != 0U ) ? 1U : 0U;

    if ( pll_enabled != 0U )
    {
        rl78_clock_wait( RL78_PLL_PRESTART_WAIT );

        if ( ( VALUE_SYSTEM_PCKC & RL78_PCKC_PLLCK_MASK ) != 0U )
        {
            PLLCK = 1U;
        }

        DSCON = 1U;

        /*
         * The original Renesas sequence uses a finite stabilization delay here
         * rather than an unbounded status wait.
         */
        rl78_clock_wait( RL78_PLL_LOCK_WAIT );
    }

    /*
     * Select normal fMAIN or PLL as requested by the clock JSON.
     */
    CKSELR = desired_ckselr;

    return rl78_wait_for_clstr( desired_ckselr );
}

/**
 * @brief Gets the configured CPU/peripheral hardware clock value.
 *
 * The MikroE build supplies FOSC_KHZ_VALUE from the selected clock profile.
 *
 * @param[out] SYSTEM_Clocks Pointer to the configured clock structure.
 *
 * @return None
 */
void SYSTEM_GetClocksFrequency( SYSTEM_ClocksTypeDef * SYSTEM_Clocks )
{
    if ( SYSTEM_Clocks != ( SYSTEM_ClocksTypeDef * ) 0 )
    {
        SYSTEM_Clocks->FCLK_Frequency =
            ( uint32_t ) FOSC_KHZ_VALUE * 1000UL;
    }
}

/**
 * @brief Initializes the RL78/G24 clock generation circuit.
 *
 * All clock settings exposed by the generated JSON are still applied.
 * Hardware status waits are bounded so a failed status transition cannot
 * permanently stop startup before main().
 *
 * @return None
 */
void SystemInit( void )
{
    system_clock_configuration( );
}

static void system_clock_configuration( void )
{
    uint8_t desired_csc;
    uint8_t desired_ckc;
    uint8_t desired_cmc;
    uint8_t desired_mcm1;
    uint8_t desired_mcm0;
    uint8_t desired_css;
    uint8_t x1_mode;
    uint8_t sub_mode;

    uint8_t flash_switch_ok;
    uint8_t mcm1_switch_ok;
    uint8_t mcm0_switch_ok;
    uint8_t css_switch_ok;
    uint8_t pll_switch_ok;

    desired_csc  = ( uint8_t ) VALUE_SYSTEM_CSC;
    desired_ckc  = ( uint8_t ) VALUE_SYSTEM_CKC;
    desired_cmc  = ( uint8_t ) VALUE_SYSTEM_CMC;

    desired_mcm1 =
        ( ( desired_ckc & RL78_CKC_MCM1_MASK ) != 0U ) ? 1U : 0U;

    desired_mcm0 =
        ( ( desired_ckc & RL78_CKC_MCM0_MASK ) != 0U ) ? 1U : 0U;

    desired_css =
        ( ( desired_ckc & RL78_CKC_CSS_MASK ) != 0U ) ? 1U : 0U;

    x1_mode  = ( uint8_t ) ( desired_cmc & RL78_CMC_X1_MASK );
    sub_mode = ( uint8_t ) ( desired_cmc & RL78_CMC_SUBCLOCK_MASK );

    flash_switch_ok = 1U;
    mcm1_switch_ok  = 1U;
    mcm0_switch_ok  = 1U;
    css_switch_ok   = 1U;
    pll_switch_ok   = 1U;

    /*
     * G24 20-32 pin products require CMC.XTSEL when fSX is used.
     */
#if defined( MIKROE_MCU_PIN_COUNT ) && ( MIKROE_MCU_PIN_COUNT <= 32 )
    if ( ( sub_mode & 0x30U ) != 0U )
    {
        desired_cmc |= RL78_CMC_XTSEL_MASK;
    }
#endif

    /*
     * High-speed system clock divider.
     */
    MOSCDIV = ( uint8_t ) ( VALUE_SYSTEM_MOSCDIV & 0x07U );

    /*
     * Configure flash mode, HOCO divider, prefetch and flash high-speed path.
     *
     * HOCO is also explicitly kept running here as a safe startup source.
     */
    flash_switch_ok = rl78_configure_flash_and_hoco( );

    /*
     * CMC is a write-once-after-reset configuration register.
     * Apply the JSON-generated value before oscillator startup.
     */
    CMC = desired_cmc;

    /*
     * Remaining oscillator configuration registers from the JSON.
     */
    MOCODIV = ( uint8_t ) ( VALUE_SYSTEM_MOCODIV & 0x03U );
    OSTS    = ( uint8_t ) ( VALUE_SYSTEM_OSTS & 0x07U );

    /*
     * High-speed system clock: X1 oscillator or external clock input.
     */
    if ( ( desired_csc & RL78_CSC_MSTOP_MASK ) == 0U )
    {
        MSTOP = 0U;

        if ( ( x1_mode == RL78_CMC_X1_OSC_1_10 ) ||
             ( x1_mode == RL78_CMC_X1_OSC_10_20 ) )
        {
            /*
             * Failure to stabilize no longer blocks startup forever.
             * A later status check will determine whether switching succeeded.
             */
            ( void ) rl78_wait_for_x1_stabilization( );
        }
    }
    else
    {
        MSTOP = 1U;
    }

    /*
     * Middle-speed on-chip oscillator.
     */
    if ( ( desired_csc & RL78_CSC_MIOEN_MASK ) != 0U )
    {
        MIOEN = 1U;
        rl78_clock_wait( RL78_MOCO_STARTUP_WAIT );
    }
    else
    {
        MIOEN = 0U;
    }

    /*
     * Select fOCO source and wait only for a bounded time.
     */
    MCM1 = desired_mcm1;
    mcm1_switch_ok = rl78_wait_for_mcs1( desired_mcm1 );

    /*
     * Select fMAIN source and wait only for a bounded time.
     */
    MCM0 = desired_mcm0;
    mcm0_switch_ok = rl78_wait_for_mcs( desired_mcm0 );

    /*
     * Preserve OSMC settings from the clock JSON.
     */
    OSMC =
        ( uint8_t )
        ( ( OSMC & ( uint8_t ) ~0x90U ) |
          ( VALUE_SYSTEM_OSMC & 0x90U ) );

    /*
     * Subsystem oscillator/external source.
     */
    if ( ( desired_csc & RL78_CSC_XTSTOP_MASK ) == 0U )
    {
        XTSTOP = 0U;

        if ( ( sub_mode & 0x30U ) == RL78_CMC_XT1_OSC_BASE )
        {
            rl78_clock_wait( RL78_SUBCLOCK_STARTUP_WAIT );
        }
    }
    else
    {
        XTSTOP = 1U;
    }

    /*
     * Subsystem clock source.
     */
    SELLOSC =
        ( ( VALUE_SYSTEM_CKSEL & 0x01U ) != 0U ) ? 1U : 0U;

    if ( ( VALUE_SYSTEM_CKSEL & 0x01U ) != 0U )
    {
        rl78_clock_wait( RL78_LOCO_SELECTION_WAIT );
    }

    /*
     * CPU/peripheral fCLK source.
     */
    CSS = desired_css;
    css_switch_ok = rl78_wait_for_cls( desired_css );

    /*
     * PLL configuration and normal/PLL path selection.
     */
    pll_switch_ok = rl78_configure_pll( );

    /*
     * Fast HOCO startup selection for STOP/SNOOZE release.
     */
    FWKUP =
        ( ( VALUE_SYSTEM_WKUPMD & 0x01U ) != 0U ) ? 1U : 0U;

    /*
     * Stop HOCO only when ALL of the requested clock transitions that can
     * affect execution were acknowledged.
     *
     * If any status transition timed out, keep HOCO running as a safe fallback
     * so startup can still return to the runtime and reach main().
     */
    if ( ( desired_csc & RL78_CSC_HIOSTOP_MASK ) != 0U )
    {
        if ( ( flash_switch_ok != 0U ) &&
             ( mcm1_switch_ok  != 0U ) &&
             ( mcm0_switch_ok  != 0U ) &&
             ( css_switch_ok   != 0U ) &&
             ( pll_switch_ok   != 0U ) )
        {
            HIOSTOP = 1U;
        }
        else
        {
            HIOSTOP = 0U;
        }
    }
    else
    {
        HIOSTOP = 0U;
        rl78_clock_wait( RL78_HOCO_STARTUP_WAIT );
    }
}
