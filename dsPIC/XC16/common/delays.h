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
** OF MERCHANTABILITY, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
** TO THE WARRANTIES FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
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

#define FCY OSC_KHZ*1000ul/FOSC_PER_CYC
#include <libpic30.h>

/* -----DELAY MACROS------ */

/*!< @brief Macro for creating a software delay in duration of @b time_us microseconds. */
#define Delay_us(time_us) __delay_us(time_us)

/*!< @brief Macro for creating a software delay in duration of @b time_ms milliseconds. */
#define Delay_ms(time_ms) __delay_ms(time_ms)

/*!< @brief Macro for creating a software delay in duration of 1us. */
#define Delay_1us() __delay_us(1)

/*!< @brief Macro for creating a software delay in duration of 5us. */
#define Delay_5us() __delay_us(5)

/*!< @brief Macro for creating a software delay in duration of 6us. */
#define Delay_6us() __delay_us(6)

/*!< @brief Macro for creating a software delay in duration of 9us. */
#define Delay_9us() __delay_us(9)

/*!< @brief Macro for creating a software delay in duration of 10us. */
#define Delay_10us() __delay_us(10)

/*!< @brief Macro for creating a software delay in duration of 22us. */
#define Delay_22us() __delay_us(22)

/*!< @brief Macro for creating a software delay in duration of 50us. */
#define Delay_50us() __delay_us(50)

/*!< @brief Macro for creating a software delay in duration of 55us. */
#define Delay_55us() __delay_us(55)

/*!< @brief Macro for creating a software delay in duration of 60us. */
#define Delay_60us() __delay_us(60)

/*!< @brief Macro for creating a software delay in duration of 64us. */
#define Delay_64us() __delay_us(64)

/*!< @brief Macro for creating a software delay in duration of 70us. */
#define Delay_70us() __delay_us(70)

/*!< @brief Macro for creating a software delay in duration of 80us. */
#define Delay_80us() __delay_us(80)

/*!< @brief Macro for creating a software delay in duration of 410us. */
#define Delay_410us() __delay_us(410)

/*!< @brief Macro for creating a software delay in duration of 480us. */
#define Delay_480us() __delay_us(480)

/*!< @brief Macro for creating a software delay in duration of 500us. */
#define Delay_500us() __delay_us(500)

/*!< @brief Macro for creating a software delay in duration of 5500us. */
#define Delay_5500us() __delay_us(5500)

/*!< @brief Macro for creating a software delay in duration of 1ms. */
#define Delay_1ms() __delay_ms(1)

/*!< @brief Macro for creating a software delay in duration of 5ms. */
#define Delay_5ms() __delay_ms(5)

/*!< @brief Macro for creating a software delay in duration of 8ms. */
#define Delay_8ms() __delay_ms(8)

/*!< @brief Macro for creating a software delay in duration of 10ms. */
#define Delay_10ms() __delay_ms(10)

/*!< @brief Macro for creating a software delay in duration of 100ms. */
#define Delay_100ms() __delay_ms(100)

/*!< @brief Macro for creating a software delay in duration of 1sec. */
#define Delay_1sec() __delay_ms(1000)

#ifdef __cplusplus
}
#endif

#endif // __DELAYS_H__
