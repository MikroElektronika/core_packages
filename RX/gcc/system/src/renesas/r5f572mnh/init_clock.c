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
 * @brief MikroE clock initialization API for Renesas RX72M.
 */

#include <stdint.h>
#include "core_header.h"
#include "mcu.h"

#define RX72M_PRCR_UNLOCK_CLOCKS    ( 0xA50BU )
#define RX72M_PRCR_LOCK             ( 0xA500U )

#define RX72M_CKSEL_LOCO            ( 0x0000U )
#define RX72M_CKSEL_HOCO            ( 0x0100U )
#define RX72M_CKSEL_MAIN            ( 0x0200U )
#define RX72M_CKSEL_SUBCLOCK        ( 0x0300U )
#define RX72M_CKSEL_PLL             ( 0x0400U )
#define RX72M_CKSEL_MASK            ( 0x0700U )

#define RX72M_PLLSRCSEL_MASK        ( 0x0010U )
#define RX72M_STOP_MASK             ( 0x01U )
#define RX72M_OSCOVFSR_MOOVF_MASK   ( 0x01U )
#define RX72M_OSCOVFSR_SOOVF_MASK   ( 0x02U )
#define RX72M_OSCOVFSR_PLOVF_MASK   ( 0x04U )
#define RX72M_OSCOVFSR_HCOVF_MASK   ( 0x08U )
#define RX72M_OSCOVFSR_ILCOVF_MASK  ( 0x10U )
#define RX72M_MEMWAIT_THRESHOLD_KHZ ( 120000UL )

typedef struct
{
    uint32_t ICLK_Frequency;
    uint32_t PCLKA_Frequency;
    uint32_t PCLKB_Frequency;
    uint32_t PCLKC_Frequency;
    uint32_t PCLKD_Frequency;
    uint32_t FCLK_Frequency;
} SYSTEM_ClocksTypeDef;

/**
 * @brief Applies the configured RX72M clock-register values.
 *
 * @return None.
 */
static void system_clock_configuration( void );

/**
 * @brief Returns the divider represented by an RX SCKCR divider code.
 *
 * @param[in] code Clock-divider field value.
 *
 * @return Integer division ratio. Invalid codes fall back to 1.
 */
static uint32_t rx72m_clock_divider( uint32_t code );

/**
 * @brief Executes a single no-operation instruction.
 *
 * @return None.
 */
static void rx72m_nop( void );

/**
 * @brief Waits until all requested oscillator-stabilization flags are set.
 *
 * @param[in] mask OSCOVFSR flag mask to wait for.
 *
 * @return None.
 */
static void rx72m_wait_oscillator_ready( uint8_t mask );

static uint32_t rx72m_clock_divider( uint32_t code )
{
    static const uint8_t dividers[ 7 ] = { 1U, 2U, 4U, 8U, 16U, 32U, 64U };

    if ( code < 7U )
    {
        return dividers[ code ];
    }

    return 1U;
}

static void rx72m_nop( void )
{
    __asm__ volatile ( "nop" );
}

static void rx72m_wait_oscillator_ready( uint8_t mask )
{
    while ( ( SYSTEM.OSCOVFSR.BYTE & mask ) == 0U )
    {
        rx72m_nop( );
    }
}

/**
 * @brief Gets the configured RX72M system and peripheral clock frequencies.
 *
 * @param[out] SYSTEM_Clocks Destination structure for the calculated clocks.
 *
 * @return None.
 */
void SYSTEM_GetClocksFrequency( SYSTEM_ClocksTypeDef * SYSTEM_Clocks )
{
    uint32_t source_clock;
    uint32_t divider;

    if ( SYSTEM_Clocks == ( SYSTEM_ClocksTypeDef * ) 0 )
    {
        return;
    }

    SYSTEM_Clocks->ICLK_Frequency = ( uint32_t ) FOSC_KHZ_VALUE * 1000UL;

    divider = rx72m_clock_divider( ( VALUE_SYSTEM_SCKCR >> 24 ) & 0x0FU );
    source_clock = SYSTEM_Clocks->ICLK_Frequency * divider;

    SYSTEM_Clocks->PCLKA_Frequency = source_clock / rx72m_clock_divider( ( VALUE_SYSTEM_SCKCR >> 12 ) & 0x0FU );
    SYSTEM_Clocks->PCLKB_Frequency = source_clock / rx72m_clock_divider( ( VALUE_SYSTEM_SCKCR >> 8 ) & 0x0FU );
    SYSTEM_Clocks->PCLKC_Frequency = source_clock / rx72m_clock_divider( ( VALUE_SYSTEM_SCKCR >> 4 ) & 0x0FU );
    SYSTEM_Clocks->PCLKD_Frequency = source_clock / rx72m_clock_divider( VALUE_SYSTEM_SCKCR & 0x0FU );
    SYSTEM_Clocks->FCLK_Frequency = source_clock / rx72m_clock_divider( ( VALUE_SYSTEM_SCKCR >> 28 ) & 0x0FU );
}

/**
 * @brief Initializes the RX72M clock-generation circuit.
 *
 * @return None.
 */
void SystemInit( void )
{
    system_clock_configuration( );
}

static void system_clock_configuration( void )
{
    uint16_t desired_source;
    uint16_t pll_value;
    uint8_t main_required;
    uint8_t hoco_required;
    uint8_t pll_required;
    uint8_t subclock_required;

    desired_source = ( uint16_t ) ( VALUE_SYSTEM_SCKCR3 & RX72M_CKSEL_MASK );
    pll_value = ( uint16_t ) VALUE_SYSTEM_PLLCR;

    pll_required = ( desired_source == RX72M_CKSEL_PLL ) ? 1U : 0U;
    subclock_required = ( desired_source == RX72M_CKSEL_SUBCLOCK ) ? 1U : 0U;
    main_required = ( ( desired_source == RX72M_CKSEL_MAIN ) ||
                      ( ( pll_required != 0U ) && ( ( pll_value & RX72M_PLLSRCSEL_MASK ) == 0U ) ) ) ? 1U : 0U;
    hoco_required = ( ( desired_source == RX72M_CKSEL_HOCO ) ||
                      ( ( pll_required != 0U ) && ( ( pll_value & RX72M_PLLSRCSEL_MASK ) != 0U ) ) ) ? 1U : 0U;

    SYSTEM.PRCR.WORD = RX72M_PRCR_UNLOCK_CLOCKS;

    if ( hoco_required != 0U )
    {
        SYSTEM.HOCOPCR.BYTE = 0x00U;
        SYSTEM.HOCOCR.BYTE = RX72M_STOP_MASK;

        while ( ( SYSTEM.OSCOVFSR.BYTE & RX72M_OSCOVFSR_HCOVF_MASK ) != 0U )
        {
            rx72m_nop( );
        }

        SYSTEM.HOCOCR2.BYTE = ( uint8_t ) ( VALUE_SYSTEM_HOCOCR2 & 0x03U );
        SYSTEM.HOCOCR.BYTE = 0x00U;
        rx72m_wait_oscillator_ready( RX72M_OSCOVFSR_HCOVF_MASK );
    }

    if ( main_required != 0U )
    {
        SYSTEM.MOFCR.BYTE = ( uint8_t ) VALUE_SYSTEM_MOFCR;
        SYSTEM.MOSCWTCR.BYTE = ( uint8_t ) VALUE_SYSTEM_MOSCWTCR;
        SYSTEM.MOSCCR.BYTE = 0x00U;
        rx72m_wait_oscillator_ready( RX72M_OSCOVFSR_MOOVF_MASK );
    }

    if ( subclock_required != 0U )
    {
        SYSTEM.SOSCWTCR.BYTE = ( uint8_t ) VALUE_SYSTEM_SOSCWTCR;
        SYSTEM.SOSCCR.BYTE = 0x00U;
        rx72m_wait_oscillator_ready( RX72M_OSCOVFSR_SOOVF_MASK );
    }

    if ( pll_required != 0U )
    {
        SYSTEM.PLLCR2.BYTE = RX72M_STOP_MASK;
        SYSTEM.PLLCR.WORD = pll_value;
        SYSTEM.PLLCR2.BYTE = 0x00U;
        rx72m_wait_oscillator_ready( RX72M_OSCOVFSR_PLOVF_MASK );
    }
    else
    {
        SYSTEM.PLLCR2.BYTE = RX72M_STOP_MASK;
    }

    SYSTEM.MEMWAIT.BYTE = ( FOSC_KHZ_VALUE > RX72M_MEMWAIT_THRESHOLD_KHZ ) ? 0x01U : 0x00U;
    SYSTEM.BCKCR.BYTE = ( uint8_t ) VALUE_SYSTEM_BCKCR;
    SYSTEM.SCKCR.LONG = ( uint32_t ) VALUE_SYSTEM_SCKCR;
    SYSTEM.SCKCR2.WORD = ( uint16_t ) VALUE_SYSTEM_SCKCR2;
    SYSTEM.SCKCR3.WORD = desired_source;

    if ( ( VALUE_SYSTEM_ILOCOCR & RX72M_STOP_MASK ) == 0U )
    {
        SYSTEM.ILOCOCR.BYTE = 0x00U;
        rx72m_wait_oscillator_ready( RX72M_OSCOVFSR_ILCOVF_MASK );
    }
    else
    {
        SYSTEM.ILOCOCR.BYTE = RX72M_STOP_MASK;
    }

    SYSTEM.LOCOCR.BYTE = ( desired_source == RX72M_CKSEL_LOCO ) ? 0x00U : ( uint8_t ) ( VALUE_SYSTEM_LOCOCR & RX72M_STOP_MASK );

    if ( ( subclock_required == 0U ) && ( ( VALUE_SYSTEM_SOSCCR & RX72M_STOP_MASK ) != 0U ) )
    {
        SYSTEM.SOSCCR.BYTE = RX72M_STOP_MASK;
    }

    if ( ( main_required == 0U ) && ( ( VALUE_SYSTEM_MOSCCR & RX72M_STOP_MASK ) != 0U ) )
    {
        SYSTEM.MOSCCR.BYTE = RX72M_STOP_MASK;
    }

    if ( ( hoco_required == 0U ) && ( ( VALUE_SYSTEM_HOCOCR & RX72M_STOP_MASK ) != 0U ) )
    {
        SYSTEM.HOCOCR.BYTE = RX72M_STOP_MASK;
        SYSTEM.HOCOPCR.BYTE = ( uint8_t ) ( VALUE_SYSTEM_HOCOPCR & RX72M_STOP_MASK );
    }

    SYSTEM.PRCR.WORD = RX72M_PRCR_LOCK;
}
