#include "system_nxp_mkv4xfxx.h"
#include "core_header.h"
#include "common.h"
#include "mcu.h"

#define STABILIZATION_TIMEOUT_VALUE (10000U)

#define SCS_BASE                    (0xE000E000UL)        // System Control Space Base Address  //
#define SCB_BASE                    (SCS_BASE + 0x0D00UL) // System Control Block Base Address  //
#define SCB                         ((SCB_Type *)SCB_BASE)

#define __IM                 /*! Defines 'read only' structure member permissions */
#define __OM                 /*! Defines 'write only' structure member permissions */
#define __IOM                /*! Defines 'read / write' structure member permissions */

/**
  \brief  Structure type to access the System Control Block (SCB).
 */
typedef struct
{
    __I  uint32_t CPUID;                //!< Offset: 0x000 (R/ )  CPUID Base Register                                   //
    __IO uint32_t ICSR;                 //!< Offset: 0x004 (R/W)  Interrupt Control and State Register                  //
    __IO uint32_t VTOR;                 //!< Offset: 0x008 (R/W)  Vector Table Offset Register                          //
    __IO uint32_t AIRCR;                //!< Offset: 0x00C (R/W)  Application Interrupt and Reset Control Register      //
    __IO uint32_t SCR;                  //!< Offset: 0x010 (R/W)  System Control Register                               //
    __IO uint32_t CCR;                  //!< Offset: 0x014 (R/W)  Configuration Control Register                        //
    __IO uint8_t  SHP[ 12 ];            //!< Offset: 0x018 (R/W)  System Handlers Priority Registers (4-7, 8-11, 12-15) //
    __IO uint32_t SHCSR;                //!< Offset: 0x024 (R/W)  System Handler Control and State Register             //
    __IO uint32_t CFSR;                 //!< Offset: 0x028 (R/W)  Configurable Fault Status Register                    //
    __IO uint32_t HFSR;                 //!< Offset: 0x02C (R/W)  HardFault Status Register                             //
    __IO uint32_t DFSR;                 //!< Offset: 0x030 (R/W)  Debug Fault Status Register                           //
    __IO uint32_t MMFAR;                //!< Offset: 0x034 (R/W)  MemManage Fault Address Register                      //
    __IO uint32_t BFAR;                 //!< Offset: 0x038 (R/W)  BusFault Address Register                             //
    __IO uint32_t AFSR;                 //!< Offset: 0x03C (R/W)  Auxiliary Fault Status Register                       //
    __I  uint32_t PFR[ 2 ];             //!< Offset: 0x040 (R/ )  Processor Feature Register                            //
    __I  uint32_t DFR;                  //!< Offset: 0x048 (R/ )  Debug Feature Register                                //
    __I  uint32_t ADR;                  //!< Offset: 0x04C (R/ )  Auxiliary Feature Register                            //
    __I  uint32_t MMFR[ 4 ];            //!< Offset: 0x050 (R/ )  Memory Model Feature Register                         //
    __I  uint32_t ISAR[ 5 ];            //!< Offset: 0x060 (R/ )  Instruction Set Attributes Register                   //
         uint32_t RESERVED0[ 5 ];
    __IO uint32_t CPACR;                //!< Offset: 0x088 (R/W)  Coprocessor Access Control Register                   //
} SCB_Type;

// Low power mode enable //
// SMC_PMPROT: AHSRUN=1,AVLP=1,AVLLS=1 //
#define SYSTEM_SMC_PMPROT_VALUE 0xA2UL

typedef enum {
    SYSTEM_CLOCK_UPDATE_SUCCESS = 0,
    SYSTEM_CLOCK_UPDATE_ERROR
} system_clock_update_t;

typedef enum {
    SYSTEM_CLOCK_SOURCE_USER = 0,
    SYSTEM_CLOCK_SOURCE_DEFAULT
} system_clock_source_t;

typedef struct
{
    uint32_t cfg_settings_osc_cr;
    uint32_t cfg_settings_osc_osc_div;
    uint32_t cfg_settings_sim_sopt1;
    uint32_t cfg_settings_sim_sopt2;
    uint32_t cfg_settings_sim_clkdiv1;
    uint32_t cfg_settings_mcg_c1;
    uint32_t cfg_settings_mcg_c2;
    uint32_t cfg_settings_mcg_c4;
    uint32_t cfg_settings_mcg_c5;
    uint32_t cfg_settings_mcg_c6;
    uint32_t cfg_settings_mcg_sc;
    uint32_t cfg_settings_wdog_stctrlh;
    uint32_t cfg_settings_mcg_mode;
} config_settings_t;

static uint32_t clock_value_set = 0;

/**
 * @brief Default clock values - FEI mode.
 */
#define VALUE_OSC_CR_DEFAULT       (0x0UL)
#define VALUE_OSC_OSC_DIV_DEFAULT  (0x0UL)
#define VALUE_SIM_SOPT1_DEFAULT    (0xC0000UL)
#define VALUE_SIM_SOPT2_DEFAULT    (0x0UL)
#define VALUE_SIM_CLKDIV1_DEFAULT  (0x0UL)
#define VALUE_MCG_C1_DEFAULT       (0xEUL)
#define VALUE_MCG_C2_DEFAULT       (0x24UL)
#define VALUE_MCG_C4_DEFAULT       (0x0UL)
#define VALUE_MCG_C5_DEFAULT       (0x2UL)
#define VALUE_MCG_C6_DEFAULT       (0x6UL)
#define VALUE_MCG_SC_DEFAULT       (0x2UL)
#define VALUE_WDOG_STCTRLH_DEFAULT (0x0UL)
#define VALUE_MCG_MODE_DEFAULT     (0x0UL)
#define FOSC_KHZ_VALUE_DEFAULT     (20972UL) // ~20MHz

// MCG modes
#define MCG_MODE_FEI  0ul
#define MCG_MODE_FBI  1ul
#define MCG_MODE_BLPI 2ul
#define MCG_MODE_FEE  3ul
#define MCG_MODE_FBE  4ul
#define MCG_MODE_BLPE 5ul
#define MCG_MODE_PBE  6ul
#define MCG_MODE_PEE  7ul

/**
 * @brief Resets the device.
 *
 * This function performs a software reset of the entire device. The
 * processor and all peripherals are reset, and all device registers will
 * return to their default values (except for the reset cause register,
 * which maintains its current value with the software reset bit set).
 *
 * @return This function does not return.
 */
void SystemReset( void )
{
    // Perform a software reset request.  This will cause the device to reset,
    // no further code is executed.
    SCB->AIRCR = 0x05FA0000 | ( 1ul << 2 );
    // The device should have reset, so this should never be reached.  Just in
    // case, loop forever.
    while ( 1 ) {
    }
}

void systemEnableFPU()
{
    asm( "CPSID I" );
    SCB->CPACR |= ( ( 3UL << 10 * 2 ) | ( 3UL << 11 * 2 ) ); // set CP10, CP11 Full Access //
    asm( "nop" );
    asm( "nop" );
    asm( "nop" );
    asm( "nop" );
    asm( "vmrs R0, FPSCR \n\t \
        MOV R1, #0 \n\t \
        MOVT R1, #0xC0 \n\t \
        ORR R0, R0, R1 \n\t \
        vmsr FPSCR, R0" );
    asm( "CPSIE I" );
}

void SIM_GetClocksFrequency( clocks_typedef * clocks )
{
    uint8_t  clockDiv1, clockDiv2, clockDiv3, clockDiv4;
    uint32_t mcgOutClockFrequency;
    uint32_t systemFrequency;

    // Get system frequency
    systemFrequency = FOSC_KHZ_VALUE * 1000;
    // Get clock dividers for mcgoutclock
    clockDiv1 = SIM->CLKDIV1 >> SIM_CLKDIV1_OUTDIV1_SHIFT;
    clockDiv2 = ( SIM->CLKDIV1 & SIM_CLKDIV1_OUTDIV2_MASK ) >> SIM_CLKDIV1_OUTDIV2_SHIFT;
    clockDiv4 = ( SIM->CLKDIV1 & SIM_CLKDIV1_OUTDIV4_MASK ) >> SIM_CLKDIV1_OUTDIV4_SHIFT;
    // Get mcgout clock frequency
    mcgOutClockFrequency = systemFrequency * ( clockDiv1 + 1 );
    // Set frequencies
    clocks->frequency_system = systemFrequency;
    clocks->frequency_peripheral_fast = mcgOutClockFrequency / ( clockDiv2 + 1 );
    clocks->frequency_flash = mcgOutClockFrequency / ( clockDiv4 + 1 );
}

extern uint32_t __data_load__,
                __data_start__,
                __data_end__,
                __bss_start__,
                __bss_end__;

static void systemDisableWatchdog( void )
{
    if ( ( VALUE_WDOG_STCTRLH & WDOG_STCTRLH_WDOGEN_MASK ) == 0 ) {
        // first we need to unlock wdog registers
        // WDOG->UNLOCK: WDOGUNLOCK=0xC520 //
        WDOG->UNLOCK = WDOG_UNLOCK_WDOGUNLOCK( 0xC520 ); // Key 1 //
        // WDOG->UNLOCK: WDOGUNLOCK=0xD928 //
        WDOG->UNLOCK = WDOG_UNLOCK_WDOGUNLOCK( 0xD928 ); // Key 2 //
        // WDOG->STCTRLH: ?=0,DISTESTWDOG=0,BYTESEL=0,TESTSEL=0,TESTWDOG=0,?=0,?=1,WAITEN=1,STOPEN=1,DBGEN=0,ALLOWUPDATE=1,WINEN=0,IRQRSTEN=0,CLKSRC=1,WDOGEN=0 //
        WDOG->STCTRLH = WDOG_STCTRLH_BYTESEL( 0x00 ) |
                        WDOG_STCTRLH_WAITEN_MASK |
                        WDOG_STCTRLH_STOPEN_MASK |
                        WDOG_STCTRLH_ALLOWUPDATE_MASK |
                        WDOG_STCTRLH_CLKSRC_MASK |
                        0x0100U;
    }
}

void systemPreInit( void )
{
    uint32_t *src = &__data_load__, *dst;

    // Disable interrupts.
    asm( "CPSID I" );

    // Disable watchdog before continuing?
    systemDisableWatchdog();

    // Copy the data segment initializers from flash to SRAM.
    for ( dst = &__data_start__; dst < &__data_end__; dst++ )
        *dst = *src++;

    // Zero fill the bss segment.
    for ( dst = &__bss_start__; dst < &__bss_end__; dst++ )
        *dst = 0;
}

static void fillCfgSettings( config_settings_t * cfgSettings, system_clock_source_t cfgSource )
{
    if ( SYSTEM_CLOCK_SOURCE_USER == cfgSource ) {
        cfgSettings->cfg_settings_osc_cr = VALUE_OSC_CR;
        cfgSettings->cfg_settings_osc_osc_div = VALUE_OSC_OSC_CR;
        cfgSettings->cfg_settings_sim_sopt1 = VALUE_SIM_SOPT1;
        cfgSettings->cfg_settings_sim_sopt2 = VALUE_SIM_SOPT2;
        cfgSettings->cfg_settings_sim_clkdiv1 = VALUE_SIM_CLKDIV1;
        cfgSettings->cfg_settings_mcg_c1 = VALUE_MCG_C1;
        cfgSettings->cfg_settings_mcg_c2 = VALUE_MCG_C2;
        cfgSettings->cfg_settings_mcg_c4 = VALUE_MCG_C4;
        cfgSettings->cfg_settings_mcg_c5 = VALUE_MCG_C5;
        cfgSettings->cfg_settings_mcg_c6 = VALUE_MCG_C6;
        cfgSettings->cfg_settings_mcg_sc = VALUE_MCG_SC;
        cfgSettings->cfg_settings_wdog_stctrlh = VALUE_WDOG_STCTRLH;
        cfgSettings->cfg_settings_mcg_mode = VALUE_MCG_MODE;
        clock_value_set = FOSC_KHZ_VALUE;
    } else {
        // Default settings are FEI/FLL with the slow internal clock set to 20MHz.
        cfgSettings->cfg_settings_osc_cr = VALUE_OSC_CR_DEFAULT;
        cfgSettings->cfg_settings_osc_osc_div = VALUE_OSC_OSC_DIV_DEFAULT;
        cfgSettings->cfg_settings_sim_sopt1 = VALUE_SIM_SOPT1_DEFAULT;
        cfgSettings->cfg_settings_sim_sopt2 = VALUE_SIM_SOPT2_DEFAULT;
        cfgSettings->cfg_settings_sim_clkdiv1 = VALUE_SIM_CLKDIV1_DEFAULT;
        cfgSettings->cfg_settings_mcg_c1 = VALUE_MCG_C1_DEFAULT;
        cfgSettings->cfg_settings_mcg_c2 = VALUE_MCG_C2_DEFAULT;
        cfgSettings->cfg_settings_mcg_c4 = VALUE_MCG_C4_DEFAULT;
        cfgSettings->cfg_settings_mcg_c5 = VALUE_MCG_C5_DEFAULT;
        cfgSettings->cfg_settings_mcg_c6 = VALUE_MCG_C6_DEFAULT;
        cfgSettings->cfg_settings_mcg_sc = VALUE_MCG_SC_DEFAULT;
        cfgSettings->cfg_settings_wdog_stctrlh = VALUE_WDOG_STCTRLH_DEFAULT;
        cfgSettings->cfg_settings_mcg_mode = VALUE_MCG_MODE_DEFAULT;
        clock_value_set = FOSC_KHZ_VALUE_DEFAULT;
    }
}

static system_clock_update_t systemUpdateClock( config_settings_t cfgSettings )
{
    uint32_t mcg_mode = cfgSettings.cfg_settings_mcg_mode & 0x7;
    uint32_t stabilization_timeout_interval = STABILIZATION_TIMEOUT_VALUE;

    if ( ( RCM->SRS0 & RCM_SRS0_WAKEUP_MASK ) != 0x00 ) {
        if ( ( PMC->REGSC & PMC_REGSC_ACKISO_MASK ) != 0x00 ) {
            PMC->REGSC |= PMC_REGSC_ACKISO_MASK; // Release hold with ACKISO:  Only has an effect if recovering from VLLSx.//
        }
    }
    // Power mode protection initialization //
    SMC->PMPROT = SYSTEM_SMC_PMPROT_VALUE; // Enable all modes; MCU family dependent

    if ( ( cfgSettings.cfg_settings_mcg_mode & 0x10 ) ) {
        // If freq > 100MHz -> HSRUN, else RUN mode
        if ( FOSC_KHZ_VALUE > 100000 ) {
            SMC->PMCTRL = SMC_PMCTRL_RUNM_MASK;
            // wait for HSRUN mode
            while ( SMC->PMSTAT != 0x80 ) {
                if ( !stabilization_timeout_interval-- )
                    return SYSTEM_CLOCK_UPDATE_ERROR;
            }
        } else {
            SMC->PMCTRL &= ~SMC_PMCTRL_RUNM_MASK;
            while ( SMC->PMSTAT != 0x01 ) {
                if ( !stabilization_timeout_interval-- )
                    return SYSTEM_CLOCK_UPDATE_ERROR;
            }
        }
    }
    // set prescalers
    SIM->CLKDIV1 = cfgSettings.cfg_settings_sim_clkdiv1;
    // Set 32 kHz clock source (ERCLK32K)
    SIM->SOPT1 = ( ( SIM->SOPT1 & ( uint32_t )( ~SIM_SOPT1_OSC32KSEL_MASK ) ) | ( cfgSettings.cfg_settings_sim_sopt1 & SIM_SOPT1_OSC32KSEL_MASK ) );
    // Selects the high frequency clock for various peripheral clocking options
    SIM->SOPT2 = ( SIM->SOPT2 | cfgSettings.cfg_settings_sim_sopt2 );
    // check if FEI, FBI, BLPI mode is selected
    if ( ( mcg_mode == MCG_MODE_FEI ) || ( mcg_mode == MCG_MODE_FBI ) || ( mcg_mode == MCG_MODE_BLPI ) ) {
        // Set MCG and OSC
        if ( ( ( cfgSettings.cfg_settings_osc_cr & OSC_CR_ERCLKEN_MASK ) != 0x00 ) || ( ( ( cfgSettings.cfg_settings_mcg_c5 & MCG_C5_PLLCLKEN0_MASK ) != 0x00 ) ) ) {
            // SIM_SCGC5: PORTA=1
            SIM->SCGC5 |= SIM_SCGC5_PORTA_MASK;
            // PORTA_PCR18: ISF=0,MUX=0
            PORTA->PCR[ 18 ] &= ( uint32_t ) ~( uint32_t )( ( PORT_PCR_ISF_MASK | PORT_PCR_MUX( 0x07 ) ) );
            if ( ( cfgSettings.cfg_settings_mcg_c2 & MCG_C2_EREFS_MASK ) != 0x00 ) {
                // PORTA_PCR19: ISF=0,MUX=0
                PORTA->PCR[ 19 ] &= ( uint32_t ) ~( uint32_t )( ( PORT_PCR_ISF_MASK | PORT_PCR_MUX( 0x07 ) ) );
            }
        }
        MCG->SC = cfgSettings.cfg_settings_mcg_sc; // Set SC (fast clock internal reference divider)
        MCG->C1 = cfgSettings.cfg_settings_mcg_c1; // Set C1 (clock source selection, FLL ext. reference divider, int. reference enable etc.)

        stabilization_timeout_interval = STABILIZATION_TIMEOUT_VALUE;
        // Check that the source of the FLL reference clock is the requested one.
        if ( ( cfgSettings.cfg_settings_mcg_c1 & MCG_C1_IREFS_MASK ) != 0x00 ) {
            while ( ( MCG->S & MCG_S_IREFST_MASK ) == 0x00 ) {
                if ( !stabilization_timeout_interval-- )
                    return SYSTEM_CLOCK_UPDATE_ERROR;
            }
        } else {
            while ( ( MCG->S & MCG_S_IREFST_MASK ) != 0x00 ) {
                if ( !stabilization_timeout_interval-- )
                    return SYSTEM_CLOCK_UPDATE_ERROR;
            }
        }
        // Set C2 (freq. range, ext. and int. reference selection etc. excluding trim bits; low power bit is set later)
        MCG->C2 = ( MCG->C2 & ( uint8_t )( ~MCG_C2_FCFTRIM_MASK ) ) |
                  ( cfgSettings.cfg_settings_mcg_c2 & ( uint8_t )( ~MCG_C2_LP_MASK ) );
        // Set C4 (FLL output; trim values not changed)
        MCG->C4 = ( cfgSettings.cfg_settings_mcg_c4 & ( uint8_t )( ~( MCG_C4_FCTRIM_MASK | MCG_C4_SCFTRIM_MASK ) ) ) |
                  ( MCG->C4 & ( MCG_C4_FCTRIM_MASK | MCG_C4_SCFTRIM_MASK ) );
        OSC->CR = cfgSettings.cfg_settings_osc_cr; // Set OSC_CR (OSCERCLK enable, oscillator capacitor load)
        OSC->DIV = cfgSettings.cfg_settings_osc_osc_div;
        if ( mcg_mode == MCG_MODE_BLPI ) {
            // BLPI specific
            MCG->C2 |= MCG_C2_LP_MASK; // Disable FLL and PLL in bypass mode
        }
    } else {                           // MCG_MODE
        // Set MCG and OSC
        if ( ( cfgSettings.cfg_settings_osc_cr & OSC_CR_ERCLKEN_MASK ) != 0x00 ) {
            // SIM_SCGC5: PORTA=1
            SIM->SCGC5 |= SIM_SCGC5_PORTA_MASK;
            // PORTA_PCR18: ISF=0,MUX=0
            PORTA->PCR[ 18 ] &= ( uint32_t ) ~( uint32_t )( ( PORT_PCR_ISF_MASK | PORT_PCR_MUX( 0x07 ) ) );
            if ( ( cfgSettings.cfg_settings_mcg_c2 & MCG_C2_EREFS_MASK ) != 0x00 ) {
                // PORTA_PCR19: ISF=0,MUX=0
                PORTA->PCR[ 19 ] &= ( uint32_t ) ~( uint32_t )( ( PORT_PCR_ISF_MASK | PORT_PCR_MUX( 0x07 ) ) );
            }
        }
        // Set SC (fast clock internal reference divider)
        MCG->SC = cfgSettings.cfg_settings_mcg_sc;
        // Set C2 (freq. range, ext. and int. reference selection etc. excluding trim bits; low power bit is set later)
        MCG->C2 = ( MCG->C2 & ( uint8_t )( ~( MCG_C2_FCFTRIM_MASK ) ) ) |
                  ( cfgSettings.cfg_settings_mcg_c2 & ( uint8_t )( ~MCG_C2_LP_MASK ) );
        // Set OSC_CR (OSCERCLK enable, oscillator capacitor load)
        OSC->CR = cfgSettings.cfg_settings_osc_cr;
        OSC->DIV = cfgSettings.cfg_settings_osc_osc_div;
        if ( mcg_mode == MCG_MODE_PEE )
            MCG->C1 = cfgSettings.cfg_settings_mcg_c1 | MCG_C1_CLKS( 0x02 ); // Set C1 (clock source selection, FLL ext. reference divider, int. reference enable etc.) - PBE mode
        else
            MCG->C1 = cfgSettings.cfg_settings_mcg_c1;                       // Set C1 (clock source selection, FLL ext. reference divider, int. reference enable etc.)

        stabilization_timeout_interval = STABILIZATION_TIMEOUT_VALUE;
        if ( ( cfgSettings.cfg_settings_mcg_c2 & MCG_C2_EREFS_MASK ) != 0x00 ) {
            while ( ( MCG->S & MCG_S_OSCINIT0_MASK ) == 0x00 ) { // Check that the oscillator is running
                if ( !stabilization_timeout_interval-- )
                    return SYSTEM_CLOCK_UPDATE_ERROR;
            }
        }
        stabilization_timeout_interval = STABILIZATION_TIMEOUT_VALUE;
        // Check that the source of the FLL reference clock is the requested one.
        if ( ( cfgSettings.cfg_settings_mcg_c1 & MCG_C1_IREFS_MASK ) != 0x00 ) {
            while ( ( MCG->S & MCG_S_IREFST_MASK ) == 0x00 ) {
                if ( !stabilization_timeout_interval-- )
                    return SYSTEM_CLOCK_UPDATE_ERROR;
            }
        } else {
            while ( ( MCG->S & MCG_S_IREFST_MASK ) != 0x00 ) {
                if ( !stabilization_timeout_interval-- )
                    return SYSTEM_CLOCK_UPDATE_ERROR;
            }
        }
        MCG->C4 = ( cfgSettings.cfg_settings_mcg_c4 & ( uint8_t )( ~( MCG_C4_FCTRIM_MASK | MCG_C4_SCFTRIM_MASK ) ) ) | ( MCG->C4 & ( MCG_C4_FCTRIM_MASK | MCG_C4_SCFTRIM_MASK ) ); // Set C4 (FLL output; trim values not changed)
    } // end MCG_MODE

    // Common for all MCG modes
    // PLL clock can be used to generate clock for some devices regardless of clock generator (MCGOUTCLK) mode.
    MCG->C5 = cfgSettings.cfg_settings_mcg_c5 & ( uint8_t )( ~MCG_C5_PLLCLKEN0_MASK ); // Set C5 (PLL settings, PLL reference divider etc.)
    MCG->C6 = cfgSettings.cfg_settings_mcg_c6 & ( uint8_t ) ~( MCG_C6_PLLS_MASK );     // Set C6 (PLL select, VCO divider etc.)
    if ( cfgSettings.cfg_settings_mcg_c5 & MCG_C5_PLLCLKEN0_MASK ) {
        MCG->C5 |= MCG_C5_PLLCLKEN0_MASK;                                              // PLL clock enable in mode other than PEE or PBE
    }

    // BLPE, PEE and PBE MCG mode specific
    if ( mcg_mode == MCG_MODE_BLPE ) {
        MCG->C2 |= ( MCG_C2_LP_MASK );                    // Disable FLL and PLL in bypass mode
    } else if ( ( mcg_mode == MCG_MODE_PBE ) || ( mcg_mode == MCG_MODE_PEE ) ) {
        stabilization_timeout_interval = STABILIZATION_TIMEOUT_VALUE;
        MCG->C6 |= ( MCG_C6_PLLS_MASK );                  // Set C6 (PLL select, VCO divider etc.)
        while ( ( MCG->S & MCG_S_LOCK0_MASK ) == 0x00 ) { // Wait until PLL is locked
            if ( !stabilization_timeout_interval-- )
                return SYSTEM_CLOCK_UPDATE_ERROR;
        }
        if ( mcg_mode == MCG_MODE_PEE ) {
            MCG->C1 &= ( uint8_t ) ~( MCG_C1_CLKS_MASK );
        }
    }

    stabilization_timeout_interval = STABILIZATION_TIMEOUT_VALUE;
    if ( ( mcg_mode == MCG_MODE_FEI ) || ( mcg_mode == MCG_MODE_FEE ) ) {
        while ( ( MCG->S & MCG_S_CLKST_MASK ) != 0x00 ) { // Wait until output of the FLL is selected
            if ( !stabilization_timeout_interval-- )
                return SYSTEM_CLOCK_UPDATE_ERROR;
        }
        // Use LPTMR to wait for 1ms for FLL clock stabilization
        SIM->SCGC5 |= SIM_SCGC5_LPTMR_MASK;                            // Allow software control of LPMTR
        LPTMR0->CMR = LPTMR_CMR_COMPARE( 0 );                          // Default 1 LPO tick
        LPTMR0->CSR = ( LPTMR_CSR_TCF_MASK | LPTMR_CSR_TPS( 0x00 ) );
        LPTMR0->PSR = ( LPTMR_PSR_PCS( 0x01 ) | LPTMR_PSR_PBYP_MASK ); // Clock source: LPO, Prescaler bypass enable
        LPTMR0->CSR = LPTMR_CSR_TEN_MASK;                              // LPMTR enable
        stabilization_timeout_interval = STABILIZATION_TIMEOUT_VALUE;
        while ( ( LPTMR0->CSR & LPTMR_CSR_TCF_MASK ) == 0x00 ) {
            if ( !stabilization_timeout_interval-- )
                return SYSTEM_CLOCK_UPDATE_ERROR;
        }
        LPTMR0->CSR = 0x00;                               // Disable LPTMR
        SIM->SCGC5 &= ( uint32_t ) ~( uint32_t )SIM_SCGC5_LPTMR_MASK;
    } else if ( ( mcg_mode == MCG_MODE_FBI ) || ( mcg_mode == MCG_MODE_BLPI ) ) {
        while ( ( MCG->S & MCG_S_CLKST_MASK ) != 0x04 ) { // Wait until internal reference clock is selected as MCG output
            if ( !stabilization_timeout_interval-- )
                return SYSTEM_CLOCK_UPDATE_ERROR;
        }
    } else if ( ( mcg_mode == MCG_MODE_FBE ) || ( mcg_mode == MCG_MODE_PBE ) || ( mcg_mode == MCG_MODE_BLPE ) ) {
        while ( ( MCG->S & MCG_S_CLKST_MASK ) != 0x08 ) { // Wait until external reference clock is selected as MCG output
            if ( !stabilization_timeout_interval-- )
                return SYSTEM_CLOCK_UPDATE_ERROR;
        }
    } else if ( mcg_mode == MCG_MODE_PEE ) {
        while ( ( MCG->S & MCG_S_CLKST_MASK ) != 0x0C ) { // Wait until output of the PLL is selected
            if ( !stabilization_timeout_interval-- )
                return SYSTEM_CLOCK_UPDATE_ERROR;
        }
    }

    return SYSTEM_CLOCK_UPDATE_SUCCESS;
}

void systemInit()
{
    config_settings_t cfg_settings;

    fillCfgSettings( &cfg_settings, SYSTEM_CLOCK_SOURCE_USER );

    if ( SYSTEM_CLOCK_UPDATE_ERROR == systemUpdateClock( cfg_settings ) ) {

        /**
         * @brief Clock not set correctly.
         */
        while ( 1 )
            ;

        /**
         * @brief Default clock setting if user setting fails.
         * @details To be implemented in a future release.
         */
        /*
        fillCfgSettings(&cfg_settings, SYSTEM_CLOCK_SOURCE_DEFAULT);
        if (SYSTEM_CLOCK_UPDATE_ERROR == systemUpdateClock(cfg_settings)) {
            // printf_me("Warning: User clock setting failed.\r\nSetting to default 20.972MHz value.");
            while(1);
        }
        */
    }

    systemEnableFPU();
}
