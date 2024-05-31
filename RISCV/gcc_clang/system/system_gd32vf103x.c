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
 * @file  system_gd32vf103x.c
 * @brief Mikroe GD32VF103 chip series system implementation.
 */

/* -----INCLUDE SECTION----- */

#include "rcu_typedef.h"
#include "core_header.h"
#include "cstdio.h"
#if !defined (__GNUC__)
#include <stdio.h>
#endif

/* -----PREPROCESSOR DIRECTIVES----- */

#define STABILIZATION_TIMEOUT_VALUE             (10000ul)

#define __pointer(__address)                    (*(uint32_t *)__address)

#define REGISTER_RCU_CTL                        __pointer(ADDRESS_RCU_CTL)
#define REGISTER_RCU_BDCTL                      __pointer(ADDRESS_RCU_BDCTL)
#define REGISTER_RCU_RSTSCK                     __pointer(ADDRESS_RCU_RSTSCK)
#define REGISTER_RCU_CFG0                       __pointer(ADDRESS_RCU_CFG0)
#define REGISTER_RCU_CFG1                       __pointer(ADDRESS_RCU_CFG1)
#define REGISTER_RCU_DSV                        __pointer(ADDRESS_RCU_DSV)
#define ADDRESS_RCU_INT                         (0x40021008)
#define REGISTER_RCU_INT                        __pointer(ADDRESS_RCU_INT)

#define MASK_REGISTER_RCU_CFG0_ADCPSC           (0xC000ul)
#define MASK_REGISTER_RCU_CFG0_ADCPSC_MSB       (0x10000000ul)

#define RCU_CTL_IRC8MEN_BIT                     (0)
#define RCU_CTL_IRC8MEN_MASK                    (1ul<<RCU_CTL_IRC8MEN_BIT)
#define RCU_CTL_IRC8STB_BIT                     (1)
#define RCU_CTL_IRC8STB_MASK                    (1ul<<RCU_CTL_IRC8STB_BIT)
#define RCU_CTL_HXTALSTB_BIT                    (17)
#define RCU_CTL_HXTALSTB_MASK                   (1ul<<RCU_CTL_HXTALSTB_BIT)
#define RCU_CTL_IRC8MADJ_MASK                   (0XF8ul)
#define RCU_CTL_HXTALEN_MASK                    (0x10000ul)
#define RCU_CTL_CKMEN_MASK                      (0x80000ul)
#define RCU_CTL_PLLEN_MASK                      (0x1000000ul)
#define RCU_CTL_PLLSTB_MASK                     (0x2000000ul)
#define RCU_CTL_HXTALBPS_MASK                   (0x40000ul)
#define RCU_CTL_PLL1EN_MASK                     (0x4000000ul)
#define RCU_CTL_PLL1STB_MASK                    (0x8000000ul)
#define RCU_CTL_PLL2EN_MASK                     (0x10000000ul)
#define RCU_CTL_PLL2STB_MASK                    (0x20000000ul)

#define RCU_CFGO_SCS_MASK                       (0x3ul)
#define RCU_CFGO_SCS_HXTAL_MASK                 (0x1ul)
#define RCU_CFGO_SCS_PLL_MASK                   (0x2ul)
#define RCU_CFGO_SCSS_MASK                      (0xCul)
#define RCU_CFGO_SCSS_IRC8M_MASK                (0x0ul)
#define RCU_CFGO_SCSS_HXTAL_MASK                (0x4ul)
#define RCU_CFGO_SCSS_PLL_MASK                  (0x8ul)
#define RCU_CFG0_AHBPSC_MASK                    (0xF0ul)
#define RCU_CFG0_APB1PSC_MASK                   (0x700ul)
#define RCU_CFG0_APB2PSC_MASK                   (0x3800ul)
#define RCU_CFG0_PLLSEL_MASK                    (0x10000ul)
#define RCU_CFG0_PREDV0_LSB_MASK                (0x20000ul)
#define RCU_CFG0_USBFSPSC_MASK                  (0xC00000ul)
#define RCU_CFG0_ADCPSC_MASK                    (0x1000C000ul)
#define RCU_CFG0_CKOUT0SEL_MASK                 (0x0F000000ul)
#define RCU_CFG0_PLLMF_MASK                     (0x203C0000ul)
#define RCU_CFG0_DEFAULT_VALUE                  (0xC000000Cul)

#define RCU_BDCTL_LXTALEN_BIT                   (0)
#define RCU_BDCTL_LXTALEN_MASK                  (1ul<<RCU_BDCTL_LXTALEN_BIT)
#define RCU_BDCTL_LXTALSTB_BIT                  (1)
#define RCU_BDCTL_LXTALSTB_MASK                 (1ul<<RCU_BDCTL_LXTALSTB_BIT)
#define RCU_BDCTL_LXTALBPS_BIT                  (2)
#define RCU_BDCTL_LXTALBPS_MASK                 (1ul<<RCU_BDCTL_LXTALBPS_BIT)
#define RCU_BDCTL_RTCSRC_MASK                   (0x300ul)
#define RCU_BDCTL_RTCEN_MASK                    (0x8000ul)

#define RCU_RSTCK_IRC40KEN_BIT                  (0)
#define RCU_RSTCK_IRC40KEN_MASK                 (1ul<<RCU_RSTCK_IRC40KEN_BIT)
#define RCU_RSTCK_IRC40KSTB_BIT                 (1)
#define RCU_RSTCK_IRC40KSTB_MASK                (1ul<<RCU_RSTCK_IRC40KSTB_BIT)

#define RCU_CFG1_PREDV0_MASK                    (0xFul)
#define RCU_CFG1_PREDV1_MASK                    (0xF0ul)
#define RCU_CFG1_PLL1MF_MASK                    (0xF00ul)
#define RCU_CFG1_PLL2MF_MASK                    (0xF000ul)
#define RCU_CFG1_PREDV0SEL_BIT                  (16)
#define RCU_CFG1_PREDV0SEL_MASK                 (1ul<<RCU_CFG1_PREDV0SEL_BIT)
#define RCU_CFG1_I2S1SEL_BIT                    (17)
#define RCU_CFG1_I2S1SEL_MASK                   (1ul<<RCU_CFG1_I2S1SEL_BIT)
#define RCU_CFG1_I2S2SEL_BIT                    (18)
#define RCU_CFG1_I2S2SEL_MASK                   (1ul<<RCU_CFG1_I2S2SEL_BIT)
#define RCU_CFG1_MASK                           (0x7FFFFul)

#define RCU_DSV_DSLPVS_MASK                     (0x3ul)
#define RCU_DSV_CORE_VOLTAGE_1V2                (0x0ul)
#define RCU_DSV_CORE_VOLTAGE_1V1                (0x1ul)
#define RCU_DSV_CORE_VOLTAGE_1V0                (0x2ul)
#define RCU_DSV_CORE_VOLTAGE_0V9                (0x3ul)

#define RCU_INT_MASK                            (0x00FF0000ul)

/* -----VARIABLES AND CONSTANTS----- */

extern uint32_t  _sdata;
extern uint32_t  _edata;
extern uint32_t  _data_load;
extern uint32_t  _sbss;
extern uint32_t  _ebss;

typedef enum {
    SYSTEM_CLOCK_UPDATE_SUCCESS = 0,
    SYSTEM_CLOCK_UPDATE_ERROR
} system_clock_update_t;

static const uint8_t array_divider_apb1_2[ 4 ] = { 2, 4, 8, 16 };
static const uint8_t array_divider_ahb[ 8 ] = { 0, 1, 2, 3, 5, 6, 7, 8 };

#if !defined (__GNUC__)
// stderr stream declaration.
FILE * const stderr;
#endif
/* -----PUBLIC FUNCTION DECLARATIONS------ */

/**
 * @brief Initialize adequate system clock.
 * @param None.
 * @retval Nothing.
 *
 * @note If initializing adequate system clock fails,
 * clock will be set to default 8MHz clocked by
 * internal oscillator.
 */
void system_init( void );

/* -----PRIVATE FUNCTION DECLARATIONS----- */

/**
 * @brief Enables floating point unit.
 * @retval Nothing.
 */
static void system_enable_fpu( void );

/**
 * @brief Clears all RCUx registers to default state.
 * @retval Nothing.
 */
static void system_rcu_clock_reset( void );

/**
 * @brief Sets clock to default value.
 * @retval Nothing.
 * @note Clock is set to default 8MHz clocked by
 * internal oscillator.
 */
static void system_rcu_clock_default( void );

/**
 * @brief Updates clock values based on set configuration.
 * @retval Nothing.
 * @warning If initializing adequate system clock fails,
 * clock will be set to default 8MHz clocked by
 * internal oscillator.
 */
static system_clock_update_t system_rcu_clock_update( void );

/**
 * @brief Supporting fuction.
 * @retval system_clock_update_t 1(fail) or 0(success).
 * @details Checks for clock stabilization with a defined timeout
 */
static system_clock_update_t system_rcu_clock_check_err( uint32_t register_address,
                                                         uint32_t register_mask );

/* -----PUBLIC FUNCTION DEFINITIONS----- */
#if !defined(__GNUC__)
void _exit()
{
    // No return function in clang-llvm.
    while ( 1 )
        ;
}
#endif
void system_init( void )
{
    register uint32_t volatile *src, *dst;

    /* First, reset the values. */
    system_rcu_clock_reset();

    /**
     * Second, set the new values.
     * @warning If clock update failed, values
     * will be reset to default settings.
     * @note Default clock setting is internal
     * oscillator 8MHz to 108MHz via PLL.
     */
    if ( SYSTEM_CLOCK_UPDATE_ERROR == system_rcu_clock_update() ) {
        system_rcu_clock_reset();
        system_rcu_clock_default();
    }

    /* Copy the .data section (initialized data) from flash to RAM */
    src = ( uint32_t * )&_data_load;
    dst = ( uint32_t * )&_sdata;
    while ( dst < ( uint32_t * )&_edata ) {
        *dst++ = *src++;
    }

    /* Zero initialize the BSS section (zero initialized data) */
    dst = &_sbss;
    while ( dst < ( uint32_t * )&_ebss ) {
        *dst++ = 0U;
    }

    /**
     * Call printf in system_init so gcc linker does not optimize whole cstdio module.
     * Fix for gdb throwing errors when variables from cstdio are not present.
     */
    if ( printf_me( "" ) ) {
    }
}

void system_rcu_get_clocks( rcu_clocks_t * rcu_clocks )
{
    /* System clock equals the value set during setup. */
    rcu_clocks->rcu_clocks_system = FOSC_KHZ_VALUE * 1000;

    /**
     * AHB clock equals system clock divided by
     * AHB prescaler value.
     * @note Bits[7:4] of RCU_CFG0 register.
     */
    if ( ( VALUE_RCU_CFG0 & RCU_CFG0_AHBPSC_MASK ) >> 4 ) {
        rcu_clocks->rcu_clocks_ahb = 2 << array_divider_ahb[ ( ( VALUE_RCU_CFG0 & RCU_CFG0_AHBPSC_MASK ) >> 4 ) - 1 ];
    } else {
        rcu_clocks->rcu_clocks_ahb = rcu_clocks->rcu_clocks_system;
    }

    /* EXMC clock equals AHB clock value. */
    rcu_clocks->rcu_clocks_exmc = rcu_clocks->rcu_clocks_ahb;

    /* HCLK clock equals AHB clock value. */
    rcu_clocks->rcu_clocks_hclk = rcu_clocks->rcu_clocks_ahb;

    /* SysTick clock equals AHB clock divided by 4. */
    rcu_clocks->rcu_clocks_sys_tick = rcu_clocks->rcu_clocks_ahb / 4;

    /* FCLK clock equals AHB clock value. */
    rcu_clocks->rcu_clocks_fclk = rcu_clocks->rcu_clocks_ahb;

    /**
     * APB1(PCLK1) clock equals AHB clock divided by
     * APB1 prescaler value.
     * @note Bits [10:8] of RCU_CFG0 register.
     */
    if ( ( VALUE_RCU_CFG0 & RCU_CFG0_APB1PSC_MASK ) >> 8 ) {
        rcu_clocks->rcu_clocks_apb1 = rcu_clocks->rcu_clocks_ahb /
                                      array_divider_apb1_2[ ( ( VALUE_RCU_CFG0 & RCU_CFG0_APB1PSC_MASK ) >> 8 ) - 4 ];
        /**
         * Timer module 1,2,3,4,5,6 clock value.
         * @note If APB1 divider is greater than 1, clock equals
         * APB1 clock value multiplied by 2.
         */
        rcu_clocks->rcu_clocks_timer.rcu_clocks_timer_others = rcu_clocks->rcu_clocks_apb1 * 2;
    } else {
        rcu_clocks->rcu_clocks_apb1 = rcu_clocks->rcu_clocks_ahb;
        /**
         * Timer module 1,2,3,4,5,6 clock value.
         * @note If APB1 divider is 1, clock equals
         * APB1 clock value.
         */
        rcu_clocks->rcu_clocks_timer.rcu_clocks_timer_others = rcu_clocks->rcu_clocks_apb1;
    }

    /**
     * APB2(PCLK2) clock equals AHB clock divided by
     * APB2 prescaler value.
     * @note Bits [13:11] of RCU_CFG0 register.
     */
    if ( ( VALUE_RCU_CFG0 & RCU_CFG0_APB2PSC_MASK ) >> 11 ) {
        rcu_clocks->rcu_clocks_apb2 = rcu_clocks->rcu_clocks_ahb /
                                      array_divider_apb1_2[ ( ( VALUE_RCU_CFG0 & RCU_CFG0_APB2PSC_MASK ) >> 11 ) - 4 ];
        /**
         * Timer module 0 clock value.
         * @note If APB2 divider is greater than 1, clock equals
         * APB2 clock value multiplied by 2.
         */
        rcu_clocks->rcu_clocks_timer.rcu_clocks_timer_0 = rcu_clocks->rcu_clocks_apb2 * 2;
    } else {
        rcu_clocks->rcu_clocks_apb2 = rcu_clocks->rcu_clocks_ahb;
        /**
         * Timer module 0 clock value.
         * @note If APB2 divider is 1, clock equals
         * APB2 clock value.
         */
        rcu_clocks->rcu_clocks_timer.rcu_clocks_timer_0 = rcu_clocks->rcu_clocks_apb2;
    }

    /**
     * ADC module 0,1 clock value.
     * @note Bits[15:14] and Bit[28] of RCU_CFG0 register.
     */
    if ( ( VALUE_RCU_CFG0 & MASK_REGISTER_RCU_CFG0_ADCPSC_MSB ) ) {
        if ( 1 == ( ( VALUE_RCU_CFG0 & MASK_REGISTER_RCU_CFG0_ADCPSC ) >> 14 ) ) {
            rcu_clocks->rcu_clocks_adc = rcu_clocks->rcu_clocks_apb2 / 12;
        } else {
            rcu_clocks->rcu_clocks_adc = rcu_clocks->rcu_clocks_apb2 / 16;
        }
    } else {
        switch ( ( ( VALUE_RCU_CFG0 & MASK_REGISTER_RCU_CFG0_ADCPSC ) >> 14 ) ) {
            case 1:
                rcu_clocks->rcu_clocks_adc = rcu_clocks->rcu_clocks_apb2 / 4;
                break;
            case 2:
                rcu_clocks->rcu_clocks_adc = rcu_clocks->rcu_clocks_apb2 / 6;
                break;
            case 3:
                rcu_clocks->rcu_clocks_adc = rcu_clocks->rcu_clocks_apb2 / 8;
                break;

            default:
                rcu_clocks->rcu_clocks_adc = rcu_clocks->rcu_clocks_apb2 / 2;
                break;
        }
    }
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

/* -----PRIVATE FUNCTION DEFINITIONS----- */

static void system_enable_fpu( void )
{
    asm( "\n\t \
        li t0, 0x00006000 \n\t \
        csrs mstatus, t0 \n\t \
        csrw fcsr, x0 \n\t \
    " );
}

static void system_rcu_clock_reset( void )
{
    REGISTER_RCU_CTL |= RCU_CTL_IRC8MEN_MASK;

    /* Wait for IRC8M to stabilize. */
    while ( !( REGISTER_RCU_CTL & RCU_CTL_IRC8STB_MASK ) )
        ;

    /**
     * Reset SCS, AHBPSC, APB1PSC, ADCPSC, CKOUT0SEL bits,
     * PLLSEL, PREDV0_LSB, PLLMF, USBFSPSC bits.
     * @note Effectively selecting IRC8M as clock source.
     */
    REGISTER_RCU_CFG0 &= ~( RCU_CFGO_SCS_MASK | RCU_CFG0_AHBPSC_MASK |
                            RCU_CFG0_APB1PSC_MASK | RCU_CFG0_APB2PSC_MASK |
                            RCU_CFG0_ADCPSC_MASK | RCU_CFG0_CKOUT0SEL_MASK |
                            RCU_CFG0_PLLSEL_MASK | RCU_CFG0_PREDV0_LSB_MASK |
                            RCU_CFG0_PLLMF_MASK | RCU_CFG0_USBFSPSC_MASK );

    /* Reset HXTALEN, CKMEN, PLLEN bits. */
    REGISTER_RCU_CTL &= ~( RCU_CTL_HXTALEN_MASK | RCU_CTL_CKMEN_MASK |
                           RCU_CTL_PLLEN_MASK );

    /**
     * Reset HXTALBPS bit.
     * @note HXTAL @b MUST be disabled first.
     */
    while ( ( REGISTER_RCU_CTL & RCU_CTL_HXTALEN_MASK ) )
        ;
    REGISTER_RCU_CTL &= ~( RCU_CTL_HXTALBPS_MASK );

    /* Reset PLLSEL, PREDV0_LSB, PLLMF, USBFSPSC bits */
    REGISTER_RCU_CFG0 &= ~( RCU_CFG0_PLLSEL_MASK | RCU_CFG0_PREDV0_LSB_MASK |
                            RCU_CFG0_PLLMF_MASK | RCU_CFG0_USBFSPSC_MASK );

    /**
     * Reset PREDV0, PREDV1, PLL1MF, PLL2MF,
     * PREDV0_SEL, I2S1SEL and I2S2SEL bits.
     */
    REGISTER_RCU_CFG1 &= ~( RCU_CFG1_MASK );

    /* Reset HXTALEN, CKMEN, PLLEN, PLL1EN and PLL2EN bits. */
    REGISTER_RCU_CTL &= ~( RCU_CTL_PLLEN_MASK | RCU_CTL_PLL1EN_MASK |
                           RCU_CTL_PLL2EN_MASK | RCU_CTL_CKMEN_MASK |
                           RCU_CTL_HXTALEN_MASK );

    /**
     * Desable all interrupts and clear flags.
     * @note This register is the same for all GD32VF103 chips.
     */
    REGISTER_RCU_INT |= RCU_INT_MASK;
}

static system_clock_update_t system_rcu_clock_update( void )
{
    /**
     * Trim clock value for IRC8M oscillator.
     * @note The trimming value should trim the IRC8M to 8 MHz ± 1%.
     */
    if ( VALUE_RCU_CTL & RCU_CTL_IRC8MADJ_MASK ) {
        REGISTER_RCU_CTL |= ( VALUE_RCU_CTL & RCU_CTL_IRC8MADJ_MASK );
    }

    /* Enable IRC8M and wait for it to stabilize. */
    if ( VALUE_RCU_CTL & RCU_CTL_IRC8MEN_MASK ) {
        REGISTER_RCU_CTL |= RCU_CTL_IRC8MEN_MASK;
        if ( system_rcu_clock_check_err( ADDRESS_RCU_CTL, RCU_CTL_IRC8STB_MASK ) )
            return SYSTEM_CLOCK_UPDATE_ERROR;
    }

    /* Disable HXTAL if it remained enabled. */
    if ( REGISTER_RCU_CTL & RCU_CTL_HXTALEN_MASK ) {
        REGISTER_RCU_CTL &= ~( RCU_CTL_HXTALEN_MASK );
    }

    /**
     * Enable bypass mode.
     * @note This can only be done while HXTAL is disabled.
     */
    if ( VALUE_RCU_CTL & RCU_CTL_HXTALBPS_MASK ) {
        REGISTER_RCU_CTL |= RCU_CTL_HXTALBPS_MASK;
    }

    /* Enable HXTAL clock monitor. */
    if ( VALUE_RCU_CTL & RCU_CTL_CKMEN_MASK ) {
        REGISTER_RCU_CTL |= RCU_CTL_CKMEN_MASK;
    }

    /* Enable HXTAL and wait for it to stabilize. */
    if ( VALUE_RCU_CTL & RCU_CTL_HXTALEN_MASK ) {
        REGISTER_RCU_CTL |= RCU_CTL_HXTALEN_MASK;
        if ( system_rcu_clock_check_err( ADDRESS_RCU_CTL, RCU_CTL_HXTALSTB_MASK ) )
            return SYSTEM_CLOCK_UPDATE_ERROR;
    }

    /**
     * Enable bypass mode.
     * @note This can only be done while LXTAL is disabled.
     */
    if ( VALUE_RCU_BDCTL & RCU_BDCTL_LXTALBPS_MASK ) {
        REGISTER_RCU_BDCTL |= RCU_BDCTL_LXTALBPS_MASK;
    }

    /* Enable LXTAL and wait for it to stabilize. */
    if ( VALUE_RCU_BDCTL & RCU_BDCTL_LXTALEN_MASK ) {
        REGISTER_RCU_BDCTL |= RCU_BDCTL_LXTALEN_MASK;
        if ( system_rcu_clock_check_err( ADDRESS_RCU_BDCTL, RCU_BDCTL_LXTALSTB_MASK ) )
            return SYSTEM_CLOCK_UPDATE_ERROR;
    }

    /* Select RTC clock entry and enable/disable clock output. */
    if ( VALUE_RCU_BDCTL & RCU_BDCTL_RTCSRC_MASK ) {
        REGISTER_RCU_BDCTL |= ( VALUE_RCU_BDCTL & ( RCU_BDCTL_RTCSRC_MASK | RCU_BDCTL_RTCEN_MASK ) );
    }

    /* Enable IRC40K and wait for it to stabilize. */
    if ( VALUE_RCU_RSTSCK & RCU_RSTCK_IRC40KEN_MASK ) {
        REGISTER_RCU_RSTSCK |= RCU_RSTCK_IRC40KEN_MASK;
        if ( system_rcu_clock_check_err( ADDRESS_RCU_RSTSCK, RCU_RSTCK_IRC40KSTB_MASK ) )
            return SYSTEM_CLOCK_UPDATE_ERROR;
    }

    /* Set adequate prescaler/divider values. */
    REGISTER_RCU_CFG0 |= ( VALUE_RCU_CFG0 & ( RCU_CFG0_AHBPSC_MASK |
                                              RCU_CFG0_APB1PSC_MASK |
                                              RCU_CFG0_APB2PSC_MASK |
                                              RCU_CFG0_ADCPSC_MASK |
                                              RCU_CFG0_PLLMF_MASK |
                                              RCU_CFG0_PLLSEL_MASK |
                                              RCU_CFG0_USBFSPSC_MASK |
                                              RCU_CFG0_CKOUT0SEL_MASK ) );

    /**
     * Set adequate clock dividers/multipliers for following bits:
     * @b PREDV0, @b PREDV1, @b PLL1MF, @b PLL2MF.
     */
    REGISTER_RCU_CFG1 |= ( VALUE_RCU_CFG1 & ( RCU_CFG1_PREDV0_MASK |
                                              RCU_CFG1_PREDV1_MASK |
                                              RCU_CFG1_PLL1MF_MASK |
                                              RCU_CFG1_PLL2MF_MASK ) );

    /* Select PREDV0 clock source. */
    REGISTER_RCU_CFG1 |= ( VALUE_RCU_CFG1 & RCU_CFG1_PREDV0SEL_MASK );

    /* Select I2S1/I2S2 clock source. */
    REGISTER_RCU_CFG1 |= ( VALUE_RCU_CFG1 & ( RCU_CFG1_I2S1SEL_MASK |
                                              RCU_CFG1_I2S2SEL_MASK ) );

    /* Set Deep-sleep mode voltage. */
    REGISTER_RCU_DSV |= ( VALUE_RCU_DSV & RCU_DSV_DSLPVS_MASK );

    /**
     * Set PLL state.
     * @note PLLS affected:
     *   - @b PLL.
     *   - @b PLL1.
     *   - @b PLL2.
     */
    if ( VALUE_RCU_CTL & RCU_CTL_PLLEN_MASK ) {
        REGISTER_RCU_CTL |= ( uint32_t )( VALUE_RCU_CTL & RCU_CTL_PLLEN_MASK );
        if ( system_rcu_clock_check_err( ADDRESS_RCU_CTL, RCU_CTL_PLLSTB_MASK ) )
            return SYSTEM_CLOCK_UPDATE_ERROR;
    }

    if ( VALUE_RCU_CTL & RCU_CTL_PLL1EN_MASK ) {
        REGISTER_RCU_CTL |= ( uint32_t )( VALUE_RCU_CTL & RCU_CTL_PLL1EN_MASK );
        if ( system_rcu_clock_check_err( ADDRESS_RCU_CTL, RCU_CTL_PLL1STB_MASK ) )
            return SYSTEM_CLOCK_UPDATE_ERROR;
    }

    if ( VALUE_RCU_CTL & RCU_CTL_PLL2EN_MASK ) {
        REGISTER_RCU_CTL |= ( uint32_t )( VALUE_RCU_CTL & RCU_CTL_PLL2EN_MASK );
        if ( system_rcu_clock_check_err( ADDRESS_RCU_CTL, RCU_CTL_PLL2STB_MASK ) )
            return SYSTEM_CLOCK_UPDATE_ERROR;
    }

    /* Select system clock supply. */
    if ( ( VALUE_RCU_CFG0 & RCU_CFGO_SCS_HXTAL_MASK ) ||
         ( VALUE_RCU_CFG0 & RCU_CFGO_SCS_PLL_MASK ) ) {
        REGISTER_RCU_CFG0 |= ( VALUE_RCU_CFG0 & RCU_CFGO_SCS_MASK );
        if ( VALUE_RCU_CFG0 & RCU_CFGO_SCS_HXTAL_MASK ) {
            if ( system_rcu_clock_check_err( ADDRESS_RCU_CFG0, RCU_CFGO_SCSS_HXTAL_MASK ) )
                return SYSTEM_CLOCK_UPDATE_ERROR;
        } else {
            if ( system_rcu_clock_check_err( ADDRESS_RCU_CFG0, RCU_CFGO_SCSS_PLL_MASK ) )
                return SYSTEM_CLOCK_UPDATE_ERROR;
        }
    } else {
        uint32_t stabilization_timeout_interval = STABILIZATION_TIMEOUT_VALUE;
        REGISTER_RCU_CFG0 &= ~RCU_CFGO_SCS_MASK;

        while ( stabilization_timeout_interval-- )
            ;
        if ( __pointer( ADDRESS_RCU_CFG0 ) & ( RCU_CFGO_SCSS_HXTAL_MASK ||
                                               RCU_CFGO_SCSS_PLL_MASK ) ) {
            return SYSTEM_CLOCK_UPDATE_ERROR;
        }
    }

    return SYSTEM_CLOCK_UPDATE_SUCCESS;
}

static void system_rcu_clock_default( void )
{
    /* Enable IRC8M and wait for it to stabilize. */
    REGISTER_RCU_CTL |= RCU_CTL_IRC8MEN_MASK;
    while ( !( REGISTER_RCU_CTL & RCU_CTL_IRC8STB_MASK ) )
        ;

    /* Set adequate prescaler/divider values. */
    REGISTER_RCU_CFG0 &= RCU_CFG0_DEFAULT_VALUE;

    /**
     * Set Deep-sleep mode voltage.
     * @note Set to default @b 0.9V.
     */
    REGISTER_RCU_DSV &= RCU_DSV_CORE_VOLTAGE_0V9;
}

static system_clock_update_t system_rcu_clock_check_err( uint32_t register_address,
                                                         uint32_t register_mask )
{
    uint32_t stabilization_timeout_interval = STABILIZATION_TIMEOUT_VALUE;

    do {
        if ( !( stabilization_timeout_interval-- ) )
            return SYSTEM_CLOCK_UPDATE_ERROR;
    } while ( !( __pointer( register_address ) & register_mask ) );

    return SYSTEM_CLOCK_UPDATE_SUCCESS;
}

/* -----END OF FILE----- */
