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
 * @brief MikroE clock initialization API for Renesas RL78/L23.
 */

#include <stdint.h>
#include "mcu.h"


/*
 * RL78/L23 has no stabilization-status flag for HOCO, MOCO or XT1. Renesas BSP
 * uses configurable software wait loops for those clocks. These defaults only
 * affect configurations that explicitly start the respective source and may
 * be overridden from the build if a board/crystal requires a longer interval.
 */
#define RL78_HOCO_STARTUP_WAIT         ( 64UL )
#define RL78_MOCO_STARTUP_WAIT         ( 64UL )
#define RL78_SUBCLOCK_STARTUP_WAIT     ( 1000000UL )
#define RL78_LOCO_SELECTION_WAIT       ( 64UL )

#define RL78_CSC_HIOSTOP_MASK       ( 0x01U )
#define RL78_CSC_MIOEN_MASK         ( 0x02U )
#define RL78_CSC_XTSTOP_MASK        ( 0x40U )
#define RL78_CSC_MSTOP_MASK         ( 0x80U )

#define RL78_CKC_MCM1_MASK          ( 0x01U )
#define RL78_CKC_MCS1_MASK          ( 0x02U )
#define RL78_CKC_MCM0_MASK          ( 0x10U )
#define RL78_CKC_MCS_MASK           ( 0x20U )
#define RL78_CKC_CSS_MASK           ( 0x40U )
#define RL78_CKC_CLS_MASK           ( 0x80U )

#define RL78_CMC_SUBCLOCK_MASK      ( 0x36U )
#define RL78_CMC_X1_MASK            ( 0xC1U )
#define RL78_CMC_X1_OSC_MODE        ( 0x40U )
#define RL78_CMC_X1_OSC_MODE_HF     ( 0x41U )
#define RL78_CMC_X1_EXTERNAL_MODE   ( 0xC0U )
#define RL78_CMC_XT1_OSC_MODE       ( 0x10U )
#define RL78_CMC_XT1_EXTERNAL_MODE  ( 0x30U )

typedef struct
{
    uint32_t FCLK_Frequency;       /* CPU and peripheral hardware clock in Hz. */
} SYSTEM_ClocksTypeDef;

/**
 * @brief Configures the RL78/L23 system clock according to the generated clock settings.
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
 * @brief Initializes the RL78/L23 clock generation circuit.
 *
 * The ordering follows Renesas' RL78/L23 BSP sequence: configure one-time and
 * divider registers first, start requested clock sources, select fOCO/fMAIN/
 * fSUB/fCLK, and only then stop clock sources that are not requested.
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
    uint8_t x1_mode;
    uint8_t sub_mode;

    desired_csc = ( uint8_t ) VALUE_SYSTEM_CSC;
    desired_ckc = ( uint8_t ) VALUE_SYSTEM_CKC;
    desired_cmc = ( uint8_t ) VALUE_SYSTEM_CMC;
    x1_mode = ( uint8_t ) ( desired_cmc & RL78_CMC_X1_MASK );
    sub_mode = ( uint8_t ) ( desired_cmc & RL78_CMC_SUBCLOCK_MASK );

    /* XT1 margin check selection. */
    SOMRG = ( uint8_t ) ( VALUE_SYSTEM_SOMRG & 0x03U );

    /* Clock dividers and subsystem supply mode are configured before switching. */
    MOSCDIV = ( uint8_t ) ( VALUE_SYSTEM_MOSCDIV & 0x07U );
    HOCODIV = ( uint8_t ) ( VALUE_SYSTEM_HOCODIV & 0x07U );
    OSMC = ( uint8_t ) ( ( OSMC & ( uint8_t ) ~0x90U ) | ( VALUE_SYSTEM_OSMC & 0x90U ) );

    /* CMC is a write-once register after reset on RL78/L23. */
    CMC = desired_cmc;

    MODRV = ( uint8_t ) ( VALUE_SYSTEM_MODRV & 0x01U );
    MOCODIV = ( uint8_t ) ( VALUE_SYSTEM_MOCODIV & 0x03U );
    OSTS = ( uint8_t ) ( VALUE_SYSTEM_OSTS & 0x07U );
    WKUPMD = ( uint8_t ) ( ( WKUPMD & ( uint8_t ) ~0x01U ) | ( VALUE_SYSTEM_WKUPMD & 0x01U ) );

    /* Ensure HOCO is available before clock-source switching when requested. */
    if ( ( desired_csc & RL78_CSC_HIOSTOP_MASK ) == 0U )
    {
        if ( HIOSTOP != 0U )
        {
            HIOSTOP = 0U;
            rl78_clock_wait( RL78_HOCO_STARTUP_WAIT );
        }
    }

    /* High-speed system clock: X1 oscillator or external clock input. */
    if ( ( desired_csc & RL78_CSC_MSTOP_MASK ) == 0U )
    {
        MSTOP = 0U;

        if ( ( x1_mode == RL78_CMC_X1_OSC_MODE ) || ( x1_mode == RL78_CMC_X1_OSC_MODE_HF ) )
        {
            rl78_wait_for_x1_stabilization( );
        }
    }

    /* Middle-speed on-chip oscillator. */
    if ( ( desired_csc & RL78_CSC_MIOEN_MASK ) != 0U )
    {
        if ( MIOEN == 0U )
        {
            MIOEN = 1U;
            rl78_clock_wait( RL78_MOCO_STARTUP_WAIT );
        }
    }

    /* Select the source of the main on-chip oscillator clock (fOCO). */
    MCM1 = ( ( desired_ckc & RL78_CKC_MCM1_MASK ) != 0U ) ? 1U : 0U;
    if ( ( desired_ckc & RL78_CKC_MCM1_MASK ) != 0U )
    {
        while ( MCS1 == 0U )
        {
            ;
        }
    }
    else
    {
        while ( MCS1 != 0U )
        {
            ;
        }
    }

    /* Select the source of the main system clock (fMAIN). */
    MCM0 = ( ( desired_ckc & RL78_CKC_MCM0_MASK ) != 0U ) ? 1U : 0U;
    if ( ( desired_ckc & RL78_CKC_MCM0_MASK ) != 0U )
    {
        while ( MCS == 0U )
        {
            ;
        }
    }
    else
    {
        while ( MCS != 0U )
        {
            ;
        }
    }

    /* Start the subsystem oscillator/external source when requested. */
    if ( ( desired_csc & RL78_CSC_XTSTOP_MASK ) == 0U )
    {
        XTSTOP = 0U;

        if ( ( sub_mode & 0x30U ) == RL78_CMC_XT1_OSC_MODE )
        {
            rl78_clock_wait( RL78_SUBCLOCK_STARTUP_WAIT );
        }
    }

    /* Select fSUB: XT1/external subsystem clock or LOCO. */
    SELLOSC = ( ( VALUE_SYSTEM_CKSEL & 0x01U ) != 0U ) ? 1U : 0U;
    if ( ( VALUE_SYSTEM_CKSEL & 0x01U ) != 0U )
    {
        rl78_clock_wait( RL78_LOCO_SELECTION_WAIT );
    }

    /* Select CPU/peripheral hardware clock fCLK and confirm the switch. */
    CSS = ( ( desired_ckc & RL78_CKC_CSS_MASK ) != 0U ) ? 1U : 0U;
    if ( ( desired_ckc & RL78_CKC_CSS_MASK ) != 0U )
    {
        while ( CLS == 0U )
        {
            ;
        }
    }
    else
    {
        while ( CLS != 0U )
        {
            ;
        }
    }

    /* Stop sources that the final configuration does not require. */
    if ( ( desired_csc & RL78_CSC_MSTOP_MASK ) != 0U )
    {
        MSTOP = 1U;
    }
    if ( ( desired_csc & RL78_CSC_XTSTOP_MASK ) != 0U )
    {
        XTSTOP = 1U;
    }
    if ( ( desired_csc & RL78_CSC_MIOEN_MASK ) == 0U )
    {
        MIOEN = 0U;
    }

    /* HOCO is stopped last because it is the reset clock source. */
    if ( ( desired_csc & RL78_CSC_HIOSTOP_MASK ) != 0U )
    {
        HIOSTOP = 1U;
    }
}