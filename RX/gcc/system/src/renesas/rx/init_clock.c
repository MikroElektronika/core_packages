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

typedef struct
{
} SYSTEM_ClocksTypeDef;

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
}
