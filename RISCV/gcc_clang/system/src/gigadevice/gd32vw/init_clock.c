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
 * @file  system_gd32vw.c
 * @brief Mikroe GD32VW chip series system implementation.
 */

/* -----INCLUDE SECTION----- */

#include "rcu_typedef.h"
#include "core_header.h"
#include "cstdio.h"
#ifdef CLANG_RISCV
#include <stdio.h>
#endif

/* -----VARIABLES AND CONSTANTS----- */

extern uint32_t  _sdata;
extern uint32_t  _edata;
extern uint32_t  _data_load;
extern uint32_t  _sbss;
extern uint32_t  _ebss;

/* -----------------------PUBLIC FUNCTION DECLARATIONS ---------------------- */

/**
 * @brief Initialize adequate system clock.
 * @param None.
 * @return None.
 *
 * @note If initializing adequate system clock fails,
 * clock will be set to default 8MHz clocked by
 * internal oscillator.
 */
void system_init( void );

/* -----------------------PUBLIC FUNCTION DEFINITIONS------------------------ */

#ifdef CLANG_RISCV
void _exit()
{
    // No return function in clang-llvm.
    while ( 1 )
        ;
}
#endif

void system_init( void ) {
}

void __attribute__( ( noinline ) ) Delay_Cyc( uint32_t cycles_div_by_10 )
{
    while ( cycles_div_by_10-- ) {
        asm( "\n\t \
            nop \n\t \
            nop \n\t \
            nop \n\t \
            nop \n\t \
        " );
    }
}

void __attribute__( ( noinline ) ) Delay_us( uint32_t time_us )
{
    register int temp asm( "a0" );

    temp = ( ( ( FOSC_KHZ_VALUE / 100 ) * time_us ) / 10 ) - 76;

    if ( temp <= 0 )
        return;

    asm( "\n\t \
        rdcycleh t2 \n\t \
        rdcycle  t1 \n\t \
        add      t3,t1,a0 \n\t \
        mv       a6,t3 \n\t \
        sltu     a6,a6,t1 \n\t \
        add      a3, t2,zero \n\t \
        add      t4,a6,a3 \n\t \
    delay_me_loop: \n\t \
        rdcycleh t6 \n\t \
        rdcycle  t5 \n\t \
        blt      t6, t4, delay_me_loop  \n\t \
        blt      t5, t3, delay_me_loop  \n\t \
    " );
}

void __attribute__( ( noinline ) ) Delay_ms( uint32_t time_ms )
{
    uint32_t number_of_cyc = FOSC_KHZ_VALUE * time_ms;

    Delay_Cyc( number_of_cyc / 10 - 3 );
    asm( "\n\t \
        nop \n\t \
        nop \n\t \
        nop \n\t \
        nop \n\t \
        nop \n\t \
        nop \n\t \
    " );
}

void __attribute__( ( noinline ) ) Delay_Advanced_ms( uint32_t time_ms,
                                                      uint32_t current_fosc_khz )
{
    uint32_t number_of_cyc = current_fosc_khz * time_ms;

    Delay_Cyc( number_of_cyc / 10 - 3 );
    asm( "\n\t \
        nop \n\t \
        nop \n\t \
        nop \n\t \
        nop \n\t \
        nop \n\t \
        nop \n\t \
    " );
}

void Delay_1us()
{
    Delay_us( 1 );
}

void Delay_5us()
{
    Delay_us( 5 );
}

void Delay_6us()
{
    Delay_us( 6 );
}

void Delay_9us()
{
    Delay_us( 9 );
}

void Delay_10us()
{
    Delay_us( 10 );
}

void Delay_22us()
{
    Delay_us( 22 );
}

void Delay_50us()
{
    Delay_us( 50 );
}

void Delay_55us()
{
    Delay_us( 55 );
}

void Delay_60us()
{
    Delay_us( 60 );
}

void Delay_64us()
{
    Delay_us( 64 );
}

void Delay_70us()
{
    Delay_us( 70 );
}

void Delay_80us()
{
    Delay_us( 78 );
}

void Delay_410us()
{
    Delay_us( 410 );
}

void Delay_480us()
{
    Delay_us( 480 );
}

void Delay_500us()
{
    Delay_us( 498 );
}

void Delay_5500us()
{
    Delay_us( 5500 );
}

void Delay_1ms()
{
    Delay_ms( 1 );
}

void Delay_5ms()
{
    Delay_ms( 5 );
}

void Delay_8ms()
{
    Delay_ms( 8 );
}

void Delay_10ms()
{
    Delay_ms( 10 );
}

void Delay_100ms()
{
    Delay_ms( 100 );
}

void Delay_1sec()
{
    Delay_ms( 1000 );
}

/* -----END OF FILE----- */
