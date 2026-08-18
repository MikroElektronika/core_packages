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

#ifndef OPTBYTE_C2
#define OPTBYTE_C2 ( *( volatile const uint8_t * ) 0x000C2UL )
#endif

/* Software waits used by the supplied Renesas G24 BSP clock sequence. */
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
#define RL78_MCKC_RDIV_MASK        ( 0x06U )
#define RL78_PCKC_PLLCK_MASK       ( 0x02U )

typedef struct
{
    uint32_t FCLK_Frequency;       /* CPU/peripheral hardware clock in Hz. */
} SYSTEM_ClocksTypeDef;

/**
 * @brief Configures the RL78/G24 system clock according to the generated clock settings.
 *
 * @return None
 */
static void system_clock_configuration( void );

/**
 * @brief Executes a software delay used while starting or switching clock sources.
 *
 * @param[in] count Number of loop iterations to execute.
 *
 * @return None
 */
static void rl78_clock_wait( uint32_t count );

/**
 * @brief Waits for X1 oscillator stabilization according to the configured OSTS value.
 *
 * @return None
 */
static void rl78_wait_for_x1_stabilization( void );

/**
 * @brief Configures flash operating mode, prefetch and the high-speed on-chip oscillator.
 *
 * @return None
 */
static void rl78_configure_flash_and_hoco( void );

/**
 * @brief Configures and starts the PLL and selects the requested main clock path.
 *
 * @return None
 */
static void rl78_configure_pll( void );

static void rl78_clock_wait( uint32_t count )
{
    while ( count-- > 0U )
    {
        NOP( );
    }
}

static void rl78_wait_for_x1_stabilization( void )
{
    uint8_t tmp_stab_wait;
    uint8_t tmp_stab_set;

    tmp_stab_set = ( uint8_t ) ~( 0x7FU >> ( VALUE_SYSTEM_OSTS & 0x07U ) );

    do
    {
        tmp_stab_wait = ( uint8_t ) ( OSTC & tmp_stab_set );
    }
    while ( tmp_stab_wait != tmp_stab_set );
}

static void rl78_configure_flash_and_hoco( void )
{
    uint8_t desired_prefetch = ( uint8_t ) ( VALUE_SYSTEM_PFBER & 0x01U );
    uint8_t desired_fihsel   = ( uint8_t ) ( VALUE_SYSTEM_HSCLKSEL & 0x01U );

    /* FLMODE writes require FLMWEN. Renesas BSP waits >=225 cycles afterward. */
    FLMWEN = 1U;
    FLMODE = ( uint8_t ) ( VALUE_SYSTEM_FLMODE & 0xC0U );
    rl78_clock_wait( RL78_FLASH_MODE_WAIT );
    FLMWEN = 0U;

    HOCODIV = ( uint8_t ) ( VALUE_SYSTEM_HOCODIV & 0x07U );

    /* Preserve the BSP ordering around FIHSEL when prefetch is toggled. */
    if ( desired_prefetch != 0U )
    {
        PFBE = 1U;
        FIHSEL = desired_fihsel;
    }
    else
    {
        FIHSEL = desired_fihsel;
    }

    /* FIHST polarity depends on option byte C2 bit 4 on G24. */
    if ( 0x10U == ( OPTBYTE_C2 & 0x10U ) )
    {
        while ( FIHST == desired_fihsel )
        {
            ;
        }
    }
    else
    {
        while ( FIHST != desired_fihsel )
        {
            ;
        }
    }

    if ( desired_prefetch == 0U )
    {
        PFBE = 0U;
    }
}

static void rl78_configure_pll( void )
{
    uint8_t desired_dscctl = ( uint8_t ) VALUE_SYSTEM_DSCCTL;
    uint8_t desired_mckc   = ( uint8_t ) VALUE_SYSTEM_MCKC;
    uint8_t pll_enabled    = ( uint8_t ) ( desired_dscctl & RL78_DSCCTL_DSCON_MASK );

    /* Stop PLL before changing its multiplication/division configuration. */
    DSCON = 0U;
    PLLCK = 0U;

    /* 0x4E = x8, 0x56 = x12; DSCON is enabled separately below. */
    DSCCTL = ( uint8_t ) ( desired_dscctl & ( uint8_t ) ~RL78_DSCCTL_DSCON_MASK );

    /* BSP-supported PLL output selections are /2 (00) and /4 (01). */
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
        rl78_clock_wait( RL78_PLL_LOCK_WAIT );
    }

    /* Select normal fMAIN or PLL as the main system/PLL select clock. */
    CKSELR = ( ( desired_mckc & RL78_MCKC_CKSELR_MASK ) != 0U ) ? 1U : 0U;
    while ( CLSTR != CKSELR )
    {
        ;
    }
}

/**
 * @brief Gets the configured CPU/peripheral hardware clock value.
 *
 * The MikroE build supplies FOSC_KHZ_VALUE from the selected clock profile.
 *
 * @param[out] SYSTEM_Clocks Pointer to the structure that receives the configured clock frequency.
 *
 * @return None
 */
void SYSTEM_GetClocksFrequency( SYSTEM_ClocksTypeDef * SYSTEM_Clocks )
{
    if ( SYSTEM_Clocks != ( SYSTEM_ClocksTypeDef * ) 0 )
    {
        SYSTEM_Clocks->FCLK_Frequency = ( uint32_t ) FOSC_KHZ_VALUE * 1000UL;
    }
}

/**
 * @brief Initializes the RL78/G24 clock generation circuit.
 *
 * Configures the requested oscillator, flash, divider and PLL settings, then
 * switches the CPU/peripheral hardware clock to the selected source.
 *
 * @return None
 */
void SystemInit( void )
{
    system_clock_configuration( );
}

static void system_clock_configuration( void )
{
    uint8_t desired_csc = ( uint8_t ) VALUE_SYSTEM_CSC;
    uint8_t desired_ckc = ( uint8_t ) VALUE_SYSTEM_CKC;
    uint8_t desired_cmc = ( uint8_t ) VALUE_SYSTEM_CMC;
    uint8_t x1_mode     = ( uint8_t ) ( desired_cmc & RL78_CMC_X1_MASK );
    uint8_t sub_mode    = ( uint8_t ) ( desired_cmc & RL78_CMC_SUBCLOCK_MASK );

    /* G24 20-32 pin products require CMC.XTSEL when fSX is used. */
#if defined( MIKROE_MCU_PIN_COUNT ) && ( MIKROE_MCU_PIN_COUNT <= 32 )
    if ( ( sub_mode & 0x30U ) != 0U )
    {
        desired_cmc |= RL78_CMC_XTSEL_MASK;
    }
#endif

    /* High-speed system clock divider first, as in the Renesas BSP. */
    MOSCDIV = ( uint8_t ) ( VALUE_SYSTEM_MOSCDIV & 0x07U );

    rl78_configure_flash_and_hoco( );

    /* CMC is configured before clock sources are started. */
    CMC = desired_cmc;

    MOCODIV = ( uint8_t ) ( VALUE_SYSTEM_MOCODIV & 0x03U );
    OSTS = ( uint8_t ) ( VALUE_SYSTEM_OSTS & 0x07U );

    /* High-speed system clock: X1 oscillator or external clock input. */
    if ( ( desired_csc & RL78_CSC_MSTOP_MASK ) == 0U )
    {
        MSTOP = 0U;
        if ( ( x1_mode == RL78_CMC_X1_OSC_1_10 ) || ( x1_mode == RL78_CMC_X1_OSC_10_20 ) )
        {
            rl78_wait_for_x1_stabilization( );
        }
    }
    else
    {
        MSTOP = 1U;
    }

    /* Middle-speed on-chip oscillator. */
    if ( ( desired_csc & RL78_CSC_MIOEN_MASK ) != 0U )
    {
        MIOEN = 1U;
        rl78_clock_wait( RL78_MOCO_STARTUP_WAIT );
    }
    else
    {
        MIOEN = 0U;
    }

    /* fOCO source. */
    MCM1 = ( ( desired_ckc & RL78_CKC_MCM1_MASK ) != 0U ) ? 1U : 0U;
    while ( MCS1 != MCM1 )
    {
        ;
    }

    /* fMAIN source. */
    MCM0 = ( ( desired_ckc & RL78_CKC_MCM0_MASK ) != 0U ) ? 1U : 0U;
    while ( MCS != MCM0 )
    {
        ;
    }

    OSMC = ( uint8_t ) ( ( OSMC & ( uint8_t ) ~0x90U ) | ( VALUE_SYSTEM_OSMC & 0x90U ) );

    /* Subsystem oscillator/external source. */
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

    SELLOSC = ( ( VALUE_SYSTEM_CKSEL & 0x01U ) != 0U ) ? 1U : 0U;
    if ( ( VALUE_SYSTEM_CKSEL & 0x01U ) != 0U )
    {
        rl78_clock_wait( RL78_LOCO_SELECTION_WAIT );
    }

    /* fCLK source selection is performed before PLL setup in the Renesas BSP. */
    CSS = ( ( desired_ckc & RL78_CKC_CSS_MASK ) != 0U ) ? 1U : 0U;
    while ( CLS != CSS )
    {
        ;
    }

    rl78_configure_pll( );

    /* Fast HOCO startup selection for STOP/SNOOZE release. */
    FWKUP = ( ( VALUE_SYSTEM_WKUPMD & 0x01U ) != 0U ) ? 1U : 0U;

    /* HOCO is the active reset source; stop it last when the profile requests it. */
    if ( ( desired_csc & RL78_CSC_HIOSTOP_MASK ) != 0U )
    {
        HIOSTOP = 1U;
    }
    else
    {
        HIOSTOP = 0U;
        rl78_clock_wait( RL78_HOCO_STARTUP_WAIT );
    }
}