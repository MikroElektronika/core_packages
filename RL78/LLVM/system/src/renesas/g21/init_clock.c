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
 * @brief MikroE clock initialization API for Renesas RL78/G21.
 */

#include <stdint.h>
#include "core_header.h"
#include "mcu.h"

/*
 * RL78/G21 clock sources: HOCO (fIH, 1 to 32 MHz), X1 oscillator or external
 * clock (fMX, 1 to 20 MHz) and LOCO (fIL, 32.768 kHz) as the only subsystem
 * clock. There is no MOCO, PLL or XT1 oscillator on this device.
 *
 * HOCO and LOCO have no stabilization-status flag. Renesas BSP uses software
 * wait loops for those clocks; the defaults below match the RL78/G21 BSP
 * (BSP_CFG_FIHWAITTIME / BSP_CFG_FILWAITTIME).
 */
#define RL78_HOCO_STARTUP_WAIT         ( 30UL )
#define RL78_LOCO_SELECTION_WAIT       ( 450UL )

#define RL78_CSC_HIOSTOP_MASK       ( 0x01U )
#define RL78_CSC_MSTOP_MASK         ( 0x80U )

#define RL78_CKC_MCM0_MASK          ( 0x10U )
#define RL78_CKC_CSS_MASK           ( 0x40U )

#define RL78_CKSEL_SELLOSC_MASK     ( 0x01U )

#define RL78_OSMC_WUTMMCK0_MASK     ( 0x10U )

#define RL78_CMC_X1_MASK            ( 0xC1U )
#define RL78_CMC_X1_OSC_MODE        ( 0x40U )
#define RL78_CMC_X1_OSC_MODE_HF     ( 0x41U )

typedef struct
{
    uint32_t FCLK_Frequency;       /* CPU and peripheral hardware clock in Hz. */
} SYSTEM_ClocksTypeDef;

/**
 * @brief Configures the RL78/G21 system clock according to the generated clock settings.
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
 * @brief Initializes the RL78/G21 clock generation circuit.
 *
 * The ordering follows Renesas' RL78/G21 BSP sequence: configure dividers and
 * the write-once CMC register first, start the high-speed system clock when
 * requested, select fMAIN/fSUB/fCLK, and only then stop clock sources that
 * are not requested.
 *
 * HOCO base frequency (32 MHz) and flash operating mode (HS) are selected by
 * option byte 000C2H in vectors.c, so HOCODIV selects 32/16/8/4/2/1 MHz.
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
    uint8_t use_loco;

    desired_csc = ( uint8_t ) VALUE_SYSTEM_CSC;
    desired_ckc = ( uint8_t ) VALUE_SYSTEM_CKC;
    desired_cmc = ( uint8_t ) VALUE_SYSTEM_CMC;
    x1_mode = ( uint8_t ) ( desired_cmc & RL78_CMC_X1_MASK );

    /* fSUB can only be LOCO, which must be selected before fCLK is switched to fSUB. */
    use_loco = ( uint8_t ) ( ( ( VALUE_SYSTEM_CKSEL & RL78_CKSEL_SELLOSC_MASK ) != 0U ) ||
                             ( ( desired_ckc & RL78_CKC_CSS_MASK ) != 0U ) );

    /* Clock dividers are configured before switching. */
    MOSCDIV = ( uint8_t ) ( VALUE_SYSTEM_MOSCDIV & 0x07U );
    HOCODIV = ( uint8_t ) ( VALUE_SYSTEM_HOCODIV & 0x07U );

    /* CMC is a write-once register after reset on RL78/G21. */
    CMC = desired_cmc;

    OSTS = ( uint8_t ) ( VALUE_SYSTEM_OSTS & 0x07U );

    /* High-speed system clock: X1 oscillator or external clock input. */
    if ( ( desired_csc & RL78_CSC_MSTOP_MASK ) == 0U )
    {
        MSTOP = 0U;

        if ( ( x1_mode == RL78_CMC_X1_OSC_MODE ) || ( x1_mode == RL78_CMC_X1_OSC_MODE_HF ) )
        {
            rl78_wait_for_x1_stabilization( );
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

    /* 32-bit interval timer operating clock (LOCO). */
    OSMC = ( uint8_t ) ( VALUE_SYSTEM_OSMC & RL78_OSMC_WUTMMCK0_MASK );

    /* Select fSUB: LOCO. */
    SELLOSC = ( use_loco != 0U ) ? 1U : 0U;
    if ( use_loco != 0U )
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

    /*
     * HOCO is stopped last because it is the reset clock source. It is never
     * stopped while it still drives fCLK (fMAIN = fIH and fCLK = fMAIN).
     */
    if ( ( desired_csc & RL78_CSC_HIOSTOP_MASK ) != 0U )
    {
        if ( ( ( desired_ckc & RL78_CKC_MCM0_MASK ) != 0U ) || ( ( desired_ckc & RL78_CKC_CSS_MASK ) != 0U ) )
        {
            HIOSTOP = 1U;
        }
    }
    else
    {
        HIOSTOP = 0U;
    }
}
