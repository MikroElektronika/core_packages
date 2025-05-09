/****************************************************************************
**
** Copyright (C) 2024 MikroElektronika d.o.o.
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
 * @file  delays.h
 * @brief Mikroe delays implementation.
 */

#ifndef __DELAYS_H__
#define __DELAYS_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ----------------------PUBLIC FUNCTION DECLARATIONS----------------------- */

/**
 * @brief Creates a delay based on MCU clock.
 * @param[in] cycles_div_by_10 Number of cycles divided by 10.
 * @return None.
 */
void Delay_Cyc( uint32_t cycles_div_by_10 );

/**
 * @brief Creates a software delay in duration of @b time_us microseconds.
 * @param[in] time_ms Delay value in microseconds.
 * @return None.
 */
void Delay_us( uint32_t time_us );

/**
 * @brief Creates a software delay in duration of @b time_ms milliseconds.
 * @param[in] time_ms Delay value in milliseconds.
 * @return None.
 */
void Delay_ms( uint32_t time_ms );

/**
 * @brief Creates a software delay in duration of @b time_ms milliseconds (a variable),
 *        for a given oscillator frequency @b current_fosc_khz.
 * @param[in] time_ms           Delay value in milliseconds.
 * @param[in] current_fosc_khz  Current system clock value in @b KHz.
 * @return None.
 * @note Generated delay is not as precise as the delay created by @ref Delay_ms.
 */
void Delay_Advanced_ms( uint32_t time_ms,
                        uint32_t current_fosc_khz );

/**
 * @brief Creates a software delay in duration of @b 1 microsecond.
 * @return None.
 */
void Delay_1us();

/**
 * @brief Creates a software delay in duration of @b 5 microseconds.
 * @return None.
 */
void Delay_5us();

/**
 * @brief Creates a software delay in duration of @b 6 microseconds.
 * @return None.
 */
void Delay_6us();

/**
 * @brief Creates a software delay in duration of @b 9 microseconds.
 * @return None.
 */
void Delay_9us();

/**
 * @brief Creates a software delay in duration of @b 10 microseconds.
 * @return None.
 */
void Delay_10us();

/**
 * @brief Creates a software delay in duration of @b 22 microseconds.
 * @return None.
 */
void Delay_22us();

/**
 * @brief Creates a software delay in duration of @b 50 microseconds.
 * @return None.
 */
void Delay_50us();

/**
 * @brief Creates a software delay in duration of @b 55 microseconds.
 * @return None.
 */
void Delay_55us();

/**
 * @brief Creates a software delay in duration of @b 60 microseconds.
 * @return None.
 */
void Delay_60us();

/**
 * @brief Creates a software delay in duration of @b 64 microseconds.
 * @return None.
 */
void Delay_64us();

/**
 * @brief Creates a software delay in duration of @b 70 microseconds.
 * @return None.
 */
void Delay_70us();

/**
 * @brief Creates a software delay in duration of @b 80 microseconds.
 * @return None.
 */
void Delay_80us();

/**
 * @brief Creates a software delay in duration of @b 410 microseconds.
 * @return None.
 */
void Delay_410us();

/**
 * @brief Creates a software delay in duration of @b 480 microseconds.
 * @return None.
 */
void Delay_480us();

/**
 * @brief Creates a software delay in duration of @b 500 microseconds.
 * @return None.
 */
void Delay_500us();

/**
 * @brief Creates a software delay in duration of @b 5500 microseconds.
 * @return None.
 */
void Delay_5500us();

/**
 * @brief Creates a software delay in duration of @b 1 millisecond.
 * @return None.
 */
void Delay_1ms( void );

/**
 * @brief Creates a software delay in duration of @b 5 milliseconds.
 * @return None.
 */
void Delay_5ms( void );

/**
 * @brief Creates a software delay in duration of @b 8 milliseconds.
 * @return None.
 */
void Delay_8ms( void );

/**
 * @brief Creates a software delay in duration of @b 10 milliseconds.
 * @return None.
 */
void Delay_10ms( void );

/**
 * @brief Creates a software delay in duration of @b 100 milliseconds.
 * @return None.
 */
void Delay_100ms( void );

/**
 * @brief Creates a software delay in duration of @b 1 second.
 * @return None.
 */
void Delay_1sec( void );

#ifdef __cplusplus
}
#endif

#endif // __DELAYS_H__
