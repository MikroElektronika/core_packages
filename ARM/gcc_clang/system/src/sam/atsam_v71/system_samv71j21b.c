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
 * @file  system_atsamv71j21b.c
 * @brief Mikroe clock initialization API.
 */

#include "mcu.h"
#include "core_header.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Initialize programmable clock generators
 * @details The function enables requested programmable clocks.
 * @param None
 * @return None
 */
void program_clock_init( void )
{
	// Programmable Clock 0 is enabled.
    if ( PMC_SCER_PCK0 == ( VALUE_PMC_SCER & PMC_SCER_PCK0_Msk ) )
	{
		// Set requested parameters for PCK0.
        PMC->PMC_PCK[0] = VALUE_PMC_PCK0;
		// Enable PCK0.
        PMC->PMC_SCER |= PMC_SCER_PCK0;
		// Wait until PCK0 clock is ready.
        while ( !( PMC->PMC_SR & PMC_SR_PCKRDY0_Msk ) );
	}

	// Programmable Clock 1 is enabled.
    if ( PMC_SCER_PCK1 == ( VALUE_PMC_SCER & PMC_SCER_PCK1_Msk ) )
	{
		// Set requested parameters for PCK1.
        PMC->PMC_PCK[1] = VALUE_PMC_PCK1;
		// Enable PCK1.
        PMC->PMC_SCER |= PMC_SCER_PCK1;
		// Wait until PCK1 clock is ready.
        while (!(PMC->PMC_SR & PMC_SR_PCKRDY1_Msk));
    }

	// Programmable Clock 2 is enabled.
    if ( PMC_SCER_PCK2 == ( VALUE_PMC_SCER & PMC_SCER_PCK2_Msk ) )
	{
		// Set requested parameters for PCK2.
        PMC->PMC_PCK[2] = VALUE_PMC_PCK2;
		// Enable PCK2.
        PMC->PMC_SCER |= PMC_SCER_PCK2;
		// Wait until PCK2 clock is ready.
        while (!(PMC->PMC_SR & PMC_SR_PCKRDY2_Msk));
    }

	// Programmable Clock 3 is enabled.
    if ( PMC_SCER_PCK3 == ( VALUE_PMC_SCER & PMC_SCER_PCK3_Msk ) )
	{
		// Set requested parameters for PCK3.
        PMC->PMC_PCK[3] = VALUE_PMC_PCK3;
		// Enable PCK3.
        PMC->PMC_SCER |= PMC_SCER_PCK3;
		// Wait until PCK3 clock is ready.
        while ( !( PMC->PMC_SR & PMC_SR_PCKRDY3_Msk ) );
    }

	// Programmable Clock 4 is enabled.
    if ( PMC_SCER_PCK4 == ( VALUE_PMC_SCER & PMC_SCER_PCK4_Msk ) )
	{
		// Set requested parameters for PCK4.
        PMC->PMC_PCK[4] = VALUE_PMC_PCK4;
		// Enable PCK4.
        PMC->PMC_SCER |= PMC_SCER_PCK4;
		// Wait until PCK4 clock is ready.
        while ( !( PMC->PMC_SR & PMC_SR_PCKRDY4_Msk ) );
    }

	// Programmable Clock 5 is enabled.
    if ( PMC_SCER_PCK5 == ( VALUE_PMC_SCER & PMC_SCER_PCK5_Msk ) )
	{
		// Set requested parameters for PCK5.
        PMC->PMC_PCK[5] = VALUE_PMC_PCK5;
		// Enable PCK5.
        PMC->PMC_SCER |= PMC_SCER_PCK5;
		// Wait until PCK5 clock is ready.
        while ( !( PMC->PMC_SR & PMC_SR_PCKRDY5_Msk ) );
    }

	// Programmable Clock 6 is enabled.
    if ( PMC_SCER_PCK6 == ( VALUE_PMC_SCER & PMC_SCER_PCK6_Msk ) )
	{
		// Set requested parameters for PCK6.
        PMC->PMC_PCK[6] = VALUE_PMC_PCK6;
		// Enable PCK6.
        PMC->PMC_SCER |= PMC_SCER_PCK6;
		// Wait until PCK6 clock is ready.
        while ( !( PMC->PMC_SR & PMC_SR_PCKRDY6_Msk ) );
    }

	// Programmable Clock 7 is enabled.
    if ( PMC_SCER_PCK7 == ( VALUE_PMC_SCER & PMC_SCER_PCK7_Msk ) )
	{
		// Set requested parameters for PCK7.
        PMC->PMC_PCK[7] = VALUE_PMC_PCK7;
		// Enable PCK7.
        PMC->PMC_SCER |= PMC_SCER_PCK7;
		// Wait until PCK7 clock is ready.
        while ( !( PMC->PMC_SR & PMC_SR_PCKRDY7_Msk ) );
    }
}

/**
 * @brief Initialize USB Clock generators
 * @details The function enables USB Clock if requested.
 * @param None
 * @return None
 */
static void usb_clock_init( void )
{
	// USB Clock is enabled.
    if ( PMC_SCER_USBCLK == ( VALUE_PMC_SCER & PMC_SCER_USBCLK_Msk ) )
	{
        // Configure USB Clock with requested parameters.
		PMC->PMC_USB = VALUE_PMC_USB;
		// Enable USB Clock.
        PMC->PMC_SCER |= PMC_SCER_USBCLK;
    }
}

/**
 * @brief Initialize Generic Clock generators
 * @details The function enables Generic Clock if requested.
 * @param None
 * @return None
 */
static void generic_clock_init( void )
{
    // Put PMC_PCR register into read mode for GCLK0/I2SC0
    PMC->PMC_PCR = PMC_PCR_PID( 69 );
    // If GCLK0 is enabled.
    if ( PMC_PCR_GCLKEN == ( VALUE_PMC_PCR_I2SC0 & PMC_PCR_GCLKEN_Msk ) )
	{
        // Select generic clock for I2SC0.
        MATRIX->CCFG_PCCR |= CCFG_PCCR_I2SC0CC;
        // If GCLK0 is not actually enabled.
        if ( PMC_PCR_GCLKEN != ( PMC->PMC_PCR & PMC_PCR_GCLKEN_Msk ) )
            // Put PMC_PCR register into write mode and configure GCLK0.
            PMC->PMC_PCR = PMC_PCR_CMD | VALUE_PMC_PCR_I2SC0;
    }
	else
	{
        // Select peripheral clock for I2SC0.
        MATRIX->CCFG_PCCR &= ~CCFG_PCCR_I2SC0CC_Msk;
        // If GCLK0 is actually enabled.
        if ( PMC_PCR_GCLKEN != ( PMC->PMC_PCR & PMC_PCR_GCLKEN_Msk ) )
            // Put PMC_PCR register into write mode and disable GCLK0.
            PMC->PMC_PCR = PMC_PCR_CMD | PMC_PCR_PID( 69 );
    }

    // Put PMC_PCR register into read mode for GCLK1/I2SC1
    PMC->PMC_PCR = PMC_PCR_PID( 70 );
    // If GCLK0 is enabled.
    if ( PMC_PCR_GCLKEN == ( VALUE_PMC_PCR_I2SC1 & PMC_PCR_GCLKEN_Msk ) ) {
        // Select generic clock for I2SC1.
        MATRIX->CCFG_PCCR |= CCFG_PCCR_I2SC1CC;
        // If GCLK0 is not actually enabled.
        if ( PMC_PCR_GCLKEN != ( PMC->PMC_PCR & PMC_PCR_GCLKEN_Msk ) )
            // Put PMC_PCR register into write mode and configure GCLK0.
            PMC->PMC_PCR = PMC_PCR_CMD | VALUE_PMC_PCR_I2SC1;
    }
	else
	{
        // Select peripheral clock for I2SC1.
        MATRIX->CCFG_PCCR &= ~CCFG_PCCR_I2SC1CC_Msk;
        // If GCLK0 is actually enabled.
        if ( PMC_PCR_GCLKEN != ( PMC->PMC_PCR & PMC_PCR_GCLKEN_Msk ) )
            // Put PMC_PCR register into write mode and disable GCLK0.
            PMC->PMC_PCR = PMC_PCR_CMD | PMC_PCR_PID( 70 );
    }
}

/**
 * @brief Set internal Flash Wait State
 * @details The function sets FWS for embedded
 *			Flash access according to operating frequency.
 * @param ul_clk FWS chip frequency
 * @return None
 */
void system_init_flash( uint32_t fws_clk )
{
	if ( fws_clk < CHIP_FREQ_FWS_0 )
		EFC->EEFC_FMR = EEFC_FMR_FWS( 0 ) | EEFC_FMR_CLOE;
	else if ( fws_clk < CHIP_FREQ_FWS_1 )
		EFC->EEFC_FMR = EEFC_FMR_FWS( 1 ) | EEFC_FMR_CLOE;
	else if ( fws_clk < CHIP_FREQ_FWS_2 )
		EFC->EEFC_FMR = EEFC_FMR_FWS( 2 ) | EEFC_FMR_CLOE;
	else if ( fws_clk < CHIP_FREQ_FWS_3 )
		EFC->EEFC_FMR = EEFC_FMR_FWS( 3 ) | EEFC_FMR_CLOE;
	else if ( fws_clk < CHIP_FREQ_FWS_4 )
		EFC->EEFC_FMR = EEFC_FMR_FWS( 4 ) | EEFC_FMR_CLOE;
	else if ( fws_clk < CHIP_FREQ_FWS_5 )
		EFC->EEFC_FMR = EEFC_FMR_FWS( 5 ) | EEFC_FMR_CLOE;
	else
		EFC->EEFC_FMR = EEFC_FMR_FWS( 6 ) | EEFC_FMR_CLOE;
}

/**
 * @brief Set System Clock parameters
 * @details The function enables requested oscillators,
 *			sets Host Clock dividers, PLL prescalers
 *			and multipliers.
 * @param None
 * @return None
 */
void sysclk_init( void )
{
	// Internal Slow Clock is enabled.
	if ( !( VALUE_SUPC_CR & SUPC_CR_XTALSEL_Msk ) ) {
		// No special setup is required as Internal Slow Clock is always enabled.
	}
	// External Slow Clock is enabled.
	else {
		// Set External Slow Clock to be Bypassed if requested.
		if ( VALUE_SUPC_MR & SUPC_MR_OSCBYPASS_Msk ) {
			SUPC->SUPC_MR |= SUPC_MR_KEY_PASSWD | SUPC_MR_OSCBYPASS;
		}

		// Set External Slow Clock to be a source for Slow Clock.
		SUPC->SUPC_CR = SUPC_CR_KEY_PASSWD | SUPC_CR_XTALSEL;
		// Wait for these changes to be processed.
		while ( !( ( SUPC->SUPC_SR & SUPC_SR_OSCSEL ) && ( PMC->PMC_SR & PMC_SR_OSCSELS ) ) );
	}

	// Internal Main Clock is enabled.
	if ( VALUE_CKGR_MOR & CKGR_MOR_MOSCRCEN_Msk ) {
		// Enable Fast RC oscillator but DO NOT switch to RC now.
		PMC->CKGR_MOR |= ( CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCRCEN );
		// Wait for these changes to be processed.
		while ( !( PMC->PMC_SR & PMC_SR_MOSCRCS ) );

		// Change Fast RC oscillator frequency.
		PMC->CKGR_MOR = ( PMC->CKGR_MOR & ~CKGR_MOR_MOSCRCF_Msk ) | CKGR_MOR_KEY_PASSWD | ( VALUE_CKGR_MOR & CKGR_MOR_MOSCRCF_Msk );
		// Wait for these changes to be processed.
		while ( !( PMC->PMC_SR & PMC_SR_MOSCRCS ) );

		// Switch to Fast RC.
		PMC->CKGR_MOR = ( PMC->CKGR_MOR & ~CKGR_MOR_MOSCSEL ) | CKGR_MOR_KEY_PASSWD;
		// Wait for these changes to be processed.
		while ( !( PMC->PMC_SR & PMC_SR_MOSCSELS ) );
	}

	// External Main Clock is enabled.
	if ( VALUE_CKGR_MOR & CKGR_MOR_MOSCXTEN_Msk ) {
		// External Main Clock without Bypass is chosen.
		if ( !( VALUE_CKGR_MOR & CKGR_MOR_MOSCXTBY_Msk ) ) {
			// Enable Main Xtal oscillator.
			PMC->CKGR_MOR = ( PMC->CKGR_MOR & ~CKGR_MOR_MOSCXTBY ) | CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTEN | ( VALUE_CKGR_MOR & CKGR_MOR_MOSCXTST_Msk );
			// Wait for these changes to be processed.
			while ( !( PMC->PMC_SR & PMC_SR_MOSCXTS ) );

			// Switch to Main Xtal oscillator.
			PMC->CKGR_MOR |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCSEL;
		}
		// External Main Clock with Bypass is chosen.
		else {
			// Enable Main Xtal oscillator with Bypass and switch to it.
			PMC->CKGR_MOR = ( PMC->CKGR_MOR & ~CKGR_MOR_MOSCXTEN ) | CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTBY | CKGR_MOR_MOSCSEL;
		}
		// Wait for these changes to be processed.
		while ( !( PMC->PMC_SR & PMC_SR_MOSCSELS ) );
	}

	// PLLA is enabled.
	else if ( VALUE_CKGR_PLLAR & CKGR_PLLAR_MULA_Msk ) {
		// PLLA is always driven from Main Clock.
		if ( !( VALUE_CKGR_MOR & CKGR_MOR_MOSCRCEN ) && !( VALUE_CKGR_MOR & CKGR_MOR_MOSCXTEN ) )
		{
			// Stop initializing process not to lock the MCU.
			while ( 1 );
		}
		// First disable PLLA.
		PMC->CKGR_PLLAR = CKGR_PLLAR_ONE | CKGR_PLLAR_MULA( 0 );
		// Enable PLLA with requested configuration.
		PMC->CKGR_PLLAR = CKGR_PLLAR_ONE | VALUE_CKGR_PLLAR;

		// Wait for PLLA locking.
		while ( !( PMC->PMC_SR & PMC_SR_LOCKA ) );
	}

	// UPLL is enabled.
	else if ( VALUE_CKGR_UCKR & CKGR_UCKR_UPLLEN_Msk ) {
		// Only External Main Clock can be chosen for UPLL!!!
		if ( !( VALUE_CKGR_MOR & CKGR_MOR_MOSCSEL_Msk ) && !( VALUE_CKGR_MOR & CKGR_MOR_MOSCXTEN ) )
		{
			// Stop initializing process not to lock the MCU.
			while ( 1 );
		}
		// Enable UPLL with requested configuration.
		PMC->CKGR_UCKR = VALUE_CKGR_UCKR | CKGR_UCKR_UPLLEN;

		// Wait for UPLL locking.
		while ( !( PMC->PMC_SR & PMC_SR_LOCKU ) );
	}

	// Set Host Clock division.
	PMC->PMC_MCKR = ( PMC->PMC_MCKR & ( ~PMC_MCKR_MDIV_Msk ) ) | ( VALUE_PMC_MCKR & PMC_MCKR_MDIV_Msk );
	// Wait till Power Module is ready.
	while ( !( PMC->PMC_SR & PMC_SR_MCKRDY ) );

	// Set Processor Clock prescaler.
	PMC->PMC_MCKR = ( PMC->PMC_MCKR & ( ~PMC_MCKR_PRES_Msk ) ) | ( VALUE_PMC_MCKR & PMC_MCKR_PRES_Msk );
	// Wait for these changes to be processed.
	while ( !( PMC->PMC_SR & PMC_SR_MCKRDY ) );

	// Set the source for Host Clock. 
	PMC->PMC_MCKR = ( PMC->PMC_MCKR & ( ~PMC_MCKR_CSS_Msk ) ) | ( VALUE_PMC_MCKR & PMC_MCKR_CSS_Msk );
	// Wait for these changes to be processed.
	while ( !( PMC->PMC_SR & PMC_SR_MCKRDY ) );
}

void SystemInit(void)
{
	uint8_t host_div;

	// Get the Host Clock divider value.
	switch ( ( VALUE_PMC_MCKR & PMC_MCKR_MDIV_Msk ) >> PMC_MCKR_MDIV_Pos ) {
		case 0:
			host_div = 1;
			break;
		case 1:
			host_div = 2;
			break;
		case 2:
			host_div = 4;
			break;
		case 3:
			host_div = 3;
			break;

		default:
			host_div = 2;
			break;
	}

	// Set flash wait state to max in case the below clock switching.
	system_init_flash( CHIP_FREQ_CPU_MAX / 2 );

	// Config System Clock settings.
    sysclk_init();
	// Config programmable Clock settings.
    program_clock_init();
	// Config USB Clock settings.
    usb_clock_init();
	// Config Generic Clock settings.
    generic_clock_init();

	// Set a Flash Wait State depending on the Host Clock frequency.
	system_init_flash( ( FOSC_KHZ_VALUE * 1000 ) / host_div );

    // Disable Watchdog Timer.
    WDT->WDT_MR = WDT_MR_WDDIS;

    // Enable Floating Point unit.
    SCB->CPACR |= ( ( 3UL << 20 ) | ( 3UL << 22 ) );

    return;
}

#ifdef __cplusplus
}
#endif
