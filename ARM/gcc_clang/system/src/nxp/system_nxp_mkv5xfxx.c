#include "system_nxp_mkv5xfxx.h"
#include "core_header.h"
#include "common.h"
#include "mcu.h"

#define STABILIZATION_TIMEOUT_VALUE (10000U)

#define SCS_BASE (0xE000E000UL)             // System Control Space Base Address  //
#define SCB_BASE (SCS_BASE + 0x0D00UL)      // System Control Block Base Address  //
#define SCB      ((SCB_Type *)SCB_BASE)

#define __IM                 /*! Defines 'read only' structure member permissions */
#define __OM                 /*! Defines 'write only' structure member permissions */
#define __IOM                /*! Defines 'read / write' structure member permissions */

/**
  \brief  Structure type to access the System Control Block (SCB).
 */
typedef struct
{
    __IM  uint32_t CPUID;                  /*!< Offset: 0x000 (R/ )  CPUID Base Register */
    __IOM uint32_t ICSR;                   /*!< Offset: 0x004 (R/W)  Interrupt Control and State Register */
    __IOM uint32_t VTOR;                   /*!< Offset: 0x008 (R/W)  Vector Table Offset Register */
    __IOM uint32_t AIRCR;                  /*!< Offset: 0x00C (R/W)  Application Interrupt and Reset Control Register */
    __IOM uint32_t SCR;                    /*!< Offset: 0x010 (R/W)  System Control Register */
    __IOM uint32_t CCR;                    /*!< Offset: 0x014 (R/W)  Configuration Control Register */
    __IOM uint8_t  SHPR[12U];              /*!< Offset: 0x018 (R/W)  System Handlers Priority Registers (4-7, 8-11, 12-15) */
    __IOM uint32_t SHCSR;                  /*!< Offset: 0x024 (R/W)  System Handler Control and State Register */
    __IOM uint32_t CFSR;                   /*!< Offset: 0x028 (R/W)  Configurable Fault Status Register */
    __IOM uint32_t HFSR;                   /*!< Offset: 0x02C (R/W)  HardFault Status Register */
    __IOM uint32_t DFSR;                   /*!< Offset: 0x030 (R/W)  Debug Fault Status Register */
    __IOM uint32_t MMFAR;                  /*!< Offset: 0x034 (R/W)  MemManage Fault Address Register */
    __IOM uint32_t BFAR;                   /*!< Offset: 0x038 (R/W)  BusFault Address Register */
    __IOM uint32_t AFSR;                   /*!< Offset: 0x03C (R/W)  Auxiliary Fault Status Register */
    __IM  uint32_t ID_PFR[2U];             /*!< Offset: 0x040 (R/ )  Processor Feature Register */
    __IM  uint32_t ID_DFR;                 /*!< Offset: 0x048 (R/ )  Debug Feature Register */
    __IM  uint32_t ID_AFR;                 /*!< Offset: 0x04C (R/ )  Auxiliary Feature Register */
    __IM  uint32_t ID_MFR[4U];             /*!< Offset: 0x050 (R/ )  Memory Model Feature Register */
    __IM  uint32_t ID_ISAR[5U];            /*!< Offset: 0x060 (R/ )  Instruction Set Attributes Register */
          uint32_t RESERVED0[1U];
    __IM  uint32_t CLIDR;                  /*!< Offset: 0x078 (R/ )  Cache Level ID register */
    __IM  uint32_t CTR;                    /*!< Offset: 0x07C (R/ )  Cache Type register */
    __IM  uint32_t CCSIDR;                 /*!< Offset: 0x080 (R/ )  Cache Size ID Register */
    __IOM uint32_t CSSELR;                 /*!< Offset: 0x084 (R/W)  Cache Size Selection Register */
    __IOM uint32_t CPACR;                  /*!< Offset: 0x088 (R/W)  Coprocessor Access Control Register */
          uint32_t RESERVED3[93U];
    __OM  uint32_t STIR;                   /*!< Offset: 0x200 ( /W)  Software Triggered Interrupt Register */
          uint32_t RESERVED4[15U];
    __IM  uint32_t MVFR0;                  /*!< Offset: 0x240 (R/ )  Media and VFP Feature Register 0 */
    __IM  uint32_t MVFR1;                  /*!< Offset: 0x244 (R/ )  Media and VFP Feature Register 1 */
    __IM  uint32_t MVFR2;                  /*!< Offset: 0x248 (R/ )  Media and VFP Feature Register 1 */
          uint32_t RESERVED5[1U];
    __OM  uint32_t ICIALLU;                /*!< Offset: 0x250 ( /W)  I-Cache Invalidate All to PoU */
          uint32_t RESERVED6[1U];
    __OM  uint32_t ICIMVAU;                /*!< Offset: 0x258 ( /W)  I-Cache Invalidate by MVA to PoU */
    __OM  uint32_t DCIMVAC;                /*!< Offset: 0x25C ( /W)  D-Cache Invalidate by MVA to PoC */
    __OM  uint32_t DCISW;                  /*!< Offset: 0x260 ( /W)  D-Cache Invalidate by Set-way */
    __OM  uint32_t DCCMVAU;                /*!< Offset: 0x264 ( /W)  D-Cache Clean by MVA to PoU */
    __OM  uint32_t DCCMVAC;                /*!< Offset: 0x268 ( /W)  D-Cache Clean by MVA to PoC */
    __OM  uint32_t DCCSW;                  /*!< Offset: 0x26C ( /W)  D-Cache Clean by Set-way */
    __OM  uint32_t DCCIMVAC;               /*!< Offset: 0x270 ( /W)  D-Cache Clean and Invalidate by MVA to PoC */
    __OM  uint32_t DCCISW;                 /*!< Offset: 0x274 ( /W)  D-Cache Clean and Invalidate by Set-way */
          uint32_t RESERVED7[6U];
    __IOM uint32_t ITCMCR;                 /*!< Offset: 0x290 (R/W)  Instruction Tightly-Coupled Memory Control Register */
    __IOM uint32_t DTCMCR;                 /*!< Offset: 0x294 (R/W)  Data Tightly-Coupled Memory Control Registers */
    __IOM uint32_t AHBPCR;                 /*!< Offset: 0x298 (R/W)  AHBP Control Register */
    __IOM uint32_t CACR;                   /*!< Offset: 0x29C (R/W)  L1 Cache Control Register */
    __IOM uint32_t AHBSCR;                 /*!< Offset: 0x2A0 (R/W)  AHB Slave Control Register */
          uint32_t RESERVED8[1U];
    __IOM uint32_t ABFSR;                  /*!< Offset: 0x2A8 (R/W)  Auxiliary Bus Fault Status Register */
} SCB_Type;

typedef enum
{
    SYSTEM_CLOCK_UPDATE_SUCCESS = 0,
    SYSTEM_CLOCK_UPDATE_ERROR
} system_clock_update_t;

typedef enum
{
    SYSTEM_CLOCK_SOURCE_USER = 0,
    SYSTEM_CLOCK_SOURCE_DEFAULT
} system_clock_source_t;

typedef struct
{
    uint32_t cfg_settings_osc0_cr;
    uint32_t cfg_settings_osc0_osc_div;
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
#define VALUE_OSC_CR_DEFAULT (0x0UL)
#define VALUE_OSC_OSC_DIV_DEFAULT (0x0UL)
#define VALUE_SIM_SOPT1_DEFAULT (0xC0000UL)
#define VALUE_SIM_SOPT2_DEFAULT (0x0UL)
#define VALUE_SIM_CLKDIV1_DEFAULT (0x0UL)
#define VALUE_MCG_C1_DEFAULT (0xEUL)
#define VALUE_MCG_C2_DEFAULT (0x24UL)
#define VALUE_MCG_C4_DEFAULT (0x0UL)
#define VALUE_MCG_C5_DEFAULT (0x2UL)
#define VALUE_MCG_C6_DEFAULT (0x6UL)
#define VALUE_MCG_SC_DEFAULT (0x2UL)
#define VALUE_WDOG_STCTRLH_DEFAULT (0x0UL)
#define VALUE_MCG_MODE_DEFAULT (0x0UL)
#define FOSC_KHZ_VALUE_DEFAULT (20972UL) // ~20MHz

// MCG modes
#define MCG_MODE_FEI                   0ul
#define MCG_MODE_FBI                   1ul
#define MCG_MODE_BLPI                  2ul
#define MCG_MODE_FEE                   3ul
#define MCG_MODE_FBE                   4ul
#define MCG_MODE_BLPE                  5ul
#define MCG_MODE_PBE                   6ul
#define MCG_MODE_PEE                   7ul

// Low power mode enable //
// SMC->PMPROT: AHSRUN=1,AVLP=1,AVLLS=1 //
#define SYSTEM_SMC_PMPROT_VALUE        0xA2UL

#define SCB_CCR_IC_Pos                     (17U)                                            /*!< SCB CCR: Instruction cache enable bit Position */
#define SCB_CCR_IC_Msk                     (1UL << SCB_CCR_IC_Pos)                          /*!< SCB CCR: Instruction cache enable bit Mask */

#define SCB_DCISW_WAY_Pos                  (30U)                                            /*!< SCB DCISW: Way Position */
#define SCB_DCISW_WAY_Msk                  (3UL << SCB_DCISW_WAY_Pos)                       /*!< SCB DCISW: Way Mask */

#define SCB_CCSIDR_NUMSETS_Pos             (13U)                                            /*!< SCB CCSIDR: NumSets Position */
#define SCB_CCSIDR_NUMSETS_Msk             (0x7FFFUL << SCB_CCSIDR_NUMSETS_Pos)             /*!< SCB CCSIDR: NumSets Mask */

#define SCB_CCSIDR_ASSOCIATIVITY_Pos       (3U)                                             /*!< SCB CCSIDR: Associativity Position */
#define SCB_CCSIDR_ASSOCIATIVITY_Msk       (0x3FFUL << SCB_CCSIDR_ASSOCIATIVITY_Pos)        /*!< SCB CCSIDR: Associativity Mask */

#define CCSIDR_WAYS(x)         (((x) & SCB_CCSIDR_ASSOCIATIVITY_Msk) >> SCB_CCSIDR_ASSOCIATIVITY_Pos)
#define CCSIDR_SETS(x)         (((x) & SCB_CCSIDR_NUMSETS_Msk) >> SCB_CCSIDR_NUMSETS_Pos)

#define SCB_DCISW_SET_Pos                  (5U)                                           /*!< SCB DCISW: Set Position */
#define SCB_DCISW_SET_Msk                  (0x1FFUL << SCB_DCISW_SET_Pos)                 /*!< SCB DCISW: Set Mask */

#define SCB_CCR_DC_Pos                     (16U)                                          /*!< SCB CCR: Cache enable bit Position */
#define SCB_CCR_DC_Msk                     (1UL << SCB_CCR_DC_Pos)                        /*!< SCB CCR: Cache enable bit Mask */

/**
  \brief   Instruction Synchronization Barrier
  \details Instruction Synchronization Barrier flushes the pipeline in the processor,
           so that all instructions following the ISB are fetched from cache or memory,
           after the instruction has been completed.
 */
__attribute__((always_inline)) static inline void __ISB(void)
{
  asm volatile ("isb 0xF":::"memory");
}

/**
  \brief   Data Synchronization Barrier
  \details Acts as a special kind of Data Memory Barrier.
           It completes when all explicit memory accesses before this instruction complete.
 */
__attribute__((always_inline)) static inline void __DSB(void)
{
  asm volatile ("dsb 0xF":::"memory");
}

///****************************************************************************
//
//! Resets the device.
//!
//! This function will perform a software reset of the entire device.  The
//! processor and all peripherals are reset and all device registers will
//! return to their default values (with the exception of the reset cause
//! register, which will maintain its current value but have the software reset
//! bit set as well).
//!
//! \return This function does not return.
//
///****************************************************************************
void SystemReset(void)
{
    //
    // Perform a software reset request.  This will cause the device to reset,
    // no further code is executed.
    //
    SCB->AIRCR = 0x05FA0000 | (1ul << 2);
    //
    // The device should have reset, so this should never be reached.  Just in
    // case, loop forever.
    //
    while(1)
    {
    }
}

void systemEnableFPU()
{
    asm ("CPSID I");
    SCB->CPACR |= ((3UL << 10*2) | (3UL << 11*2));    // set CP10, CP11 Full Access //
    asm ("nop");
    asm ("nop");
    asm ("nop");
    asm ("nop");
    //
    asm ("nop");
    asm ("nop");
    asm ("nop");
    asm ("nop");
    asm ("nop");
    asm("vmrs R0, FPSCR \n\t \
         MOV R1, #0 \n\t \
         MOVT R1, #0xC0 \n\t \
         ORR R0, R0, R1 \n\t \
         vmsr FPSCR, R0");
    asm ("CPSIE I");
}

void SIM_GetClocksFrequency(clocks_typedef *clocks)
{
    uint8_t clockDiv1, clockDiv2, clockDiv3, clockDiv4;
    uint32_t mcgOutClockFrequency;
    uint32_t systemFrequency;

    // get system frequency
    systemFrequency = FOSC_KHZ_VALUE * 1000;
    // get clock dividers for mcgoutclock
    clockDiv1 = SIM->CLKDIV1 >> SIM_CLKDIV1_OUTDIV1_SHIFT;
    clockDiv2 = (SIM->CLKDIV1 & SIM_CLKDIV1_OUTDIV2_MASK) >> SIM_CLKDIV1_OUTDIV2_SHIFT;
    clockDiv3 = (SIM->CLKDIV1 & SIM_CLKDIV1_OUTDIV3_MASK) >> SIM_CLKDIV1_OUTDIV3_SHIFT;
    clockDiv4 = (SIM->CLKDIV1 & SIM_CLKDIV1_OUTDIV4_MASK) >> SIM_CLKDIV1_OUTDIV4_SHIFT;
    // get mcgout clock freqeuncy
    mcgOutClockFrequency = systemFrequency * (clockDiv1 + 1);
    // set frequencies
    clocks->frequency_system   = systemFrequency;
    clocks->frequency_peripheral_fast = mcgOutClockFrequency / (clockDiv2 + 1);
    clocks->frequency_flexbus  = mcgOutClockFrequency / (clockDiv3 + 1);
    clocks->frequency_flash    = mcgOutClockFrequency / (clockDiv4 + 1);
}

extern uint32_t __data_load__,
                __data_start__,
                __data_end__,
                __bss_start__,
                __bss_end__;

static void systemDisableWatchdog(void) {
    if ((VALUE_WDOG_STCTRLH & WDOG_STCTRLH_WDOGEN_MASK) == 0)
    {
        // first we need to unlock wdog registers
        // WDOG->UNLOCK: WDOGUNLOCK=0xC520 //
        WDOG->UNLOCK = WDOG_UNLOCK_WDOGUNLOCK(0xC520); // Key 1 //
        // WDOG->UNLOCK: WDOGUNLOCK=0xD928 //
        WDOG->UNLOCK = WDOG_UNLOCK_WDOGUNLOCK(0xD928); // Key 2 //
        // WDOG->STCTRLH: ?=0,DISTESTWDOG=0,BYTESEL=0,TESTSEL=0,TESTWDOG=0,?=0,?=1,WAITEN=1,STOPEN=1,DBGEN=0,ALLOWUPDATE=1,WINEN=0,IRQRSTEN=0,CLKSRC=1,WDOGEN=0 //
        WDOG->STCTRLH = WDOG_STCTRLH_BYTESEL(0x00) |
                        WDOG_STCTRLH_WAITEN_MASK |
                        WDOG_STCTRLH_STOPEN_MASK |
                        WDOG_STCTRLH_ALLOWUPDATE_MASK |
                        WDOG_STCTRLH_CLKSRC_MASK |
                        0x0100U;
    }
}

void systemPreInit(void)
{
    uint32_t *src = &__data_load__, *dst;

    //
    // Disable interrupts.
    //
    asm("CPSID I");

    //
    // Disable watchdog before continuing?
    //
    systemDisableWatchdog();

    //
    // Copy the data segment initializers from flash to SRAM.
    //
    for(dst = &__data_start__; dst < &__data_end__; dst++)
        *dst = *src++;

    //
    // Zero fill the bss segment.
    //
    for(dst = &__bss_start__; dst < &__bss_end__; dst++)
        *dst = 0;
}

static void fillCfgSettings(config_settings_t *cfgSettings, system_clock_source_t cfgSource)
{
    if (SYSTEM_CLOCK_SOURCE_USER == cfgSource) {
        cfgSettings->cfg_settings_osc0_cr = VALUE_OSC0_CR;
        cfgSettings->cfg_settings_osc0_osc_div = VALUE_OSC0_OSC_CR;
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
        cfgSettings->cfg_settings_osc0_cr = VALUE_OSC_CR_DEFAULT;
        cfgSettings->cfg_settings_osc0_osc_div = VALUE_OSC_OSC_DIV_DEFAULT;
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

static void __attribute__((noinline)) SCB_EnableCache()
{
    // Enable Instruction Cache
    if (SCB->CCR & SCB_CCR_IC_Msk) return;  /* return if ICache is already enabled */

    __DSB();
    __ISB();
    SCB->ICIALLU = 0UL;                     /* invalidate I-Cache */
    __DSB();
    __ISB();
    SCB->CCR |=  (uint32_t)SCB_CCR_IC_Msk;  /* enable I-Cache */
    __DSB();
    __ISB();

    // Enable Data Cache
    uint32_t ccsidr;
    uint32_t sets;
    uint32_t ways;

    if (SCB->CCR & SCB_CCR_DC_Msk) return;  /* return if DCache is already enabled */

    SCB->CSSELR = 0U;                       /* select Level 1 data cache */
    __DSB();

    ccsidr = SCB->CCSIDR;

    sets = (uint32_t)(CCSIDR_SETS(ccsidr)); /* invalidate D-Cache */
    do {
        ways = (uint32_t)(CCSIDR_WAYS(ccsidr));
        do {
            SCB->DCISW = (((sets << SCB_DCISW_SET_Pos) & SCB_DCISW_SET_Msk) |
                        ((ways << SCB_DCISW_WAY_Pos) & SCB_DCISW_WAY_Msk)  );
        } while (ways-- != 0U);
    } while(sets-- != 0U);

    __DSB();

    SCB->CCR |=  (uint32_t)SCB_CCR_DC_Msk;  /* enable D-Cache */

    __DSB();
    __ISB();
}

static system_clock_update_t systemUpdateClock(config_settings_t cfgSettings)
{
    uint32_t mcg_mode = cfgSettings.cfg_settings_mcg_mode & 0x7;
    uint32_t stabilization_timeout_interval = STABILIZATION_TIMEOUT_VALUE;

    SCB->VTOR = 0x10000000;

    SCB_EnableCache();

    if((RCM->SRS0 & RCM_SRS0_WAKEUP_MASK) != 0x00)
    {
        if((PMC->REGSC & PMC_REGSC_ACKISO_MASK) != 0x00)
        {
            PMC->REGSC |= PMC_REGSC_ACKISO_MASK; // Release hold with ACKISO:  Only has an effect if recovering from VLLSx.//
        }
    }

    // Power mode protection initialization //
    SMC->PMPROT = SYSTEM_SMC_PMPROT_VALUE; // Enable all modes; mcu familly dependant

    if((cfgSettings.cfg_settings_mcg_mode & 0x10))
    {
        // If freq > 160MHz -> HSRUN, else RUN mode
        if (FOSC_KHZ_VALUE > 160000)
        {
            SMC->PMCTRL = SMC_PMCTRL_RUNM_MASK;
            // wait for HSRUN mode
            while(SMC->PMSTAT != 0x80) {
                if (!stabilization_timeout_interval--)
                    return SYSTEM_CLOCK_UPDATE_ERROR;
            }
        }
        else
        {
            SMC->PMCTRL &= ~SMC_PMCTRL_RUNM_MASK;
            while(SMC->PMSTAT != 0x01) {
                if (!stabilization_timeout_interval--)
                    return SYSTEM_CLOCK_UPDATE_ERROR;
            }
        }
    }
    // set prescalers
    SIM->CLKDIV1 = cfgSettings.cfg_settings_sim_clkdiv1;
    // Set 32 kHz clock source (ERCLK32K)
    SIM->SOPT1   = ((SIM->SOPT1 & (uint32_t)(~SIM_SOPT1_OSC32KSEL_MASK)) | (cfgSettings.cfg_settings_sim_sopt1 & SIM_SOPT1_OSC32KSEL_MASK));
    // Selects the high frequency clock for various peripheral clocking options
    SIM->SOPT2   = ((SIM->SOPT2 & (uint32_t)(~SIM_SOPT2_PLLFLLSEL_MASK)) | (cfgSettings.cfg_settings_sim_sopt2 & SIM_SOPT2_PLLFLLSEL_MASK));
    // check if FEI, FBI, BLPI mode is selected
    if ((mcg_mode == MCG_MODE_FEI) || (mcg_mode == MCG_MODE_FBI) || (mcg_mode == MCG_MODE_BLPI))
    {
        // Set MCG and OSC
        if (((cfgSettings.cfg_settings_osc0_cr & OSC_CR_ERCLKEN_MASK) != 0x00) || (((cfgSettings.cfg_settings_mcg_c5 & MCG_C5_PLLCLKEN0_MASK) != 0x00)))
        {
            // SIM->SCGC5: PORTA=1
            SIM->SCGC5 |= SIM_SCGC5_PORTA_MASK;
            // PORTA->PCR18: ISF=0,MUX=0
            PORTA->PCR[18] &= (uint32_t)~(uint32_t)((PORT_PCR_ISF_MASK | PORT_PCR_MUX(0x07)));
            if ((cfgSettings.cfg_settings_mcg_c2 & MCG_C2_EREFS_MASK) != 0x00)
            {
                // PORTA->PCR19: ISF=0,MUX=0
                PORTA->PCR[19] &= (uint32_t)~(uint32_t)((PORT_PCR_ISF_MASK | PORT_PCR_MUX(0x07)));
            }
        }
        MCG->SC = cfgSettings.cfg_settings_mcg_sc;       // Set SC (fast clock internal reference divider)
        MCG->C1 = cfgSettings.cfg_settings_mcg_c1;       // Set C1 (clock source selection, FLL ext. reference divider, int. reference enable etc.)
        stabilization_timeout_interval = STABILIZATION_TIMEOUT_VALUE;
        // Check that the source of the FLL reference clock is the requested one.
        if ((cfgSettings.cfg_settings_mcg_c1 & MCG_C1_IREFS_MASK) != 0x00)
        {
            while((MCG->S & MCG_S_IREFST_MASK) == 0x00) {
                if (!stabilization_timeout_interval--)
                    return SYSTEM_CLOCK_UPDATE_ERROR;
            }
        }
        else
        {
            while((MCG->S & MCG_S_IREFST_MASK) != 0x00) {
                if (!stabilization_timeout_interval--)
                    return SYSTEM_CLOCK_UPDATE_ERROR;
            }
        }
        MCG->C2 = (MCG->C2 & (uint8_t)(~MCG_C2_FCFTRIM_MASK)) | (cfgSettings.cfg_settings_mcg_c2 & (uint8_t)(~MCG_C2_LP_MASK)); // Set C2 (freq. range, ext. and int. reference selection etc. excluding trim bits; low power bit is set later)
        MCG->C4 = (cfgSettings.cfg_settings_mcg_c4 & (uint8_t)(~(MCG_C4_FCTRIM_MASK | MCG_C4_SCFTRIM_MASK))) | (MCG->C4 & (MCG_C4_FCTRIM_MASK | MCG_C4_SCFTRIM_MASK)); // Set C4 (FLL output; trim values not changed)
        OSC0->CR = cfgSettings.cfg_settings_osc0_cr;       // Set OSC->CR (OSCERCLK enable, oscillator capacitor load)
        OSC0->DIV = cfgSettings.cfg_settings_osc0_osc_div;
        if (mcg_mode == MCG_MODE_BLPI)
        {
            // BLPI specific
            MCG->C2 |= MCG_C2_LP_MASK;         // Disable FLL and PLL in bypass mode
        }
    }
    else
    {   // MCG->MODE
        // Set MCG and OSC
        if ((cfgSettings.cfg_settings_osc0_cr & OSC_CR_ERCLKEN_MASK) != 0x00)
        {
            // SIM->SCGC5: PORTA=1
            SIM->SCGC5 |= SIM_SCGC5_PORTA_MASK;
            // PORTA->PCR18: ISF=0,MUX=0
            PORTA->PCR[18] &= (uint32_t)~(uint32_t)((PORT_PCR_ISF_MASK | PORT_PCR_MUX(0x07)));
            if ((cfgSettings.cfg_settings_mcg_c2 & MCG_C2_EREFS_MASK) != 0x00)
            {
                // PORTA->PCR19: ISF=0,MUX=0
                PORTA->PCR[19] &= (uint32_t)~(uint32_t)((PORT_PCR_ISF_MASK | PORT_PCR_MUX(0x07)));
            }
        }
        // Set SC (fast clock internal reference divider)
        MCG->SC = cfgSettings.cfg_settings_mcg_sc;
         // Set C2 (freq. range, ext. and int. reference selection etc. excluding trim bits; low power bit is set later)
        MCG->C2 = (MCG->C2 & (uint8_t)(~(MCG_C2_FCFTRIM_MASK))) |
                  (cfgSettings.cfg_settings_mcg_c2 & (uint8_t)(~MCG_C2_LP_MASK));
        // Set OSC->CR (OSCERCLK enable, oscillator capacitor load)
        OSC0->CR = cfgSettings.cfg_settings_osc0_cr;
        OSC0->DIV = cfgSettings.cfg_settings_osc0_osc_div;
        if (mcg_mode == MCG_MODE_PEE)
            MCG->C1 = cfgSettings.cfg_settings_mcg_c1 | MCG_C1_CLKS(0x02); // Set C1 (clock source selection, FLL ext. reference divider, int. reference enable etc.) - PBE mode
        else
            MCG->C1 = cfgSettings.cfg_settings_mcg_c1;       // Set C1 (clock source selection, FLL ext. reference divider, int. reference enable etc.)

        stabilization_timeout_interval = STABILIZATION_TIMEOUT_VALUE;
        if ((cfgSettings.cfg_settings_mcg_c2 & MCG_C2_EREFS_MASK) != 0x00)
        {
            while((MCG->S & MCG_S_OSCINIT0_MASK) == 0x00) { // Check that the oscillator is running
                if (!stabilization_timeout_interval--)
                    return SYSTEM_CLOCK_UPDATE_ERROR;
            }
        }
        stabilization_timeout_interval = STABILIZATION_TIMEOUT_VALUE;
        // Check that the source of the FLL reference clock is the requested one.
        if ((cfgSettings.cfg_settings_mcg_c1 & MCG_C1_IREFS_MASK) != 0x00)
        {
            while((MCG->S & MCG_S_IREFST_MASK) == 0x00) {
                if (!stabilization_timeout_interval--)
                    return SYSTEM_CLOCK_UPDATE_ERROR;
            }
        }
        else
        {
            while((MCG->S & MCG_S_IREFST_MASK) != 0x00) {
                if (!stabilization_timeout_interval--)
                    return SYSTEM_CLOCK_UPDATE_ERROR;
            }
        }
        MCG->C4 = (cfgSettings.cfg_settings_mcg_c4 & (uint8_t)(~(MCG_C4_FCTRIM_MASK | MCG_C4_SCFTRIM_MASK))) | (MCG->C4 & (MCG_C4_FCTRIM_MASK | MCG_C4_SCFTRIM_MASK)); // Set C4 (FLL output; trim values not changed)
    } // end MCG->MODE

    // Common for all MCG modes
    // PLL clock can be used to generate clock for some devices regardless of clock generator (MCGOUTCLK) mode.
    MCG->C5 = cfgSettings.cfg_settings_mcg_c5 & (uint8_t)(~MCG_C5_PLLCLKEN0_MASK); // Set C5 (PLL settings, PLL reference divider etc.)
    MCG->C6 = cfgSettings.cfg_settings_mcg_c6 & (uint8_t)~(MCG_C6_PLLS_MASK); // Set C6 (PLL select, VCO divider etc.)
    if (cfgSettings.cfg_settings_mcg_c5 & MCG_C5_PLLCLKEN0_MASK)
    {
        MCG->C5 |= MCG_C5_PLLCLKEN0_MASK;  // PLL clock enable in mode other than PEE or PBE
    }

    stabilization_timeout_interval = STABILIZATION_TIMEOUT_VALUE;
    // BLPE, PEE and PBE MCG mode specific
    if (mcg_mode == MCG_MODE_BLPE)
    {
        MCG->C2 |= (MCG_C2_LP_MASK);         // Disable FLL and PLL in bypass mode
    }
    else if ((mcg_mode == MCG_MODE_PBE) || (mcg_mode == MCG_MODE_PEE))
    {
        MCG->C6 |= (MCG_C6_PLLS_MASK);       // Set C6 (PLL select, VCO divider etc.)
        while((MCG->S & MCG_S_LOCK0_MASK) == 0x00) { // Wait until PLL is locked
            if (!stabilization_timeout_interval--)
                return SYSTEM_CLOCK_UPDATE_ERROR;
        }
        if (mcg_mode == MCG_MODE_PEE)
        {
            MCG->C1 &= (uint8_t)~(MCG_C1_CLKS_MASK);
        }
    }

    stabilization_timeout_interval = STABILIZATION_TIMEOUT_VALUE;
    if ((mcg_mode == MCG_MODE_FEI) || (mcg_mode == MCG_MODE_FEE)){
        while((MCG->S & MCG_S_CLKST_MASK) != 0x00) { // Wait until output of the FLL is selected
            if (!stabilization_timeout_interval--)
                return SYSTEM_CLOCK_UPDATE_ERROR;
        }
        // Use LPTMR to wait for 1ms for FLL clock stabilization
        SIM->SCGC5 |= SIM_SCGC5_LPTMR_MASK;   // Alow software control of LPMTR
        LPTMR0->CMR = LPTMR_CMR_COMPARE(0);   // Default 1 LPO tick
        LPTMR0->CSR = (LPTMR_CSR_TCF_MASK | LPTMR_CSR_TPS(0x00));
        LPTMR0->PSR = (LPTMR_PSR_PCS(0x01) | LPTMR_PSR_PBYP_MASK); // Clock source: LPO, Prescaler bypass enable
        LPTMR0->CSR = LPTMR_CSR_TEN_MASK;     // LPMTR enable
        stabilization_timeout_interval = STABILIZATION_TIMEOUT_VALUE;
        while((LPTMR0->CSR & LPTMR_CSR_TCF_MASK) == 0x00) {
            if (!stabilization_timeout_interval--)
                return SYSTEM_CLOCK_UPDATE_ERROR;
        }
        LPTMR0->CSR = 0x00;                   // Disable LPTMR
        SIM->SCGC5 &= (uint32_t)~(uint32_t)SIM_SCGC5_LPTMR_MASK;
    }
    else if ((mcg_mode == MCG_MODE_FBI) || (mcg_mode == MCG_MODE_BLPI))
    {
        while((MCG->S & MCG_S_CLKST_MASK) != 0x04) { // Wait until internal reference clock is selected as MCG output
            if (!stabilization_timeout_interval--)
                return SYSTEM_CLOCK_UPDATE_ERROR;
        }
    }
    else if ((mcg_mode == MCG_MODE_FBE) || (mcg_mode == MCG_MODE_PBE) || (mcg_mode == MCG_MODE_BLPE))
    {
        while((MCG->S & MCG_S_CLKST_MASK) != 0x08) { // Wait until external reference clock is selected as MCG output
            if (!stabilization_timeout_interval--)
                return SYSTEM_CLOCK_UPDATE_ERROR;
        }
    }
    else if (mcg_mode == MCG_MODE_PEE) {
        while((MCG->S & MCG_S_CLKST_MASK) != 0x0C) { // Wait until output of the PLL is selected
            if (!stabilization_timeout_interval--)
                return SYSTEM_CLOCK_UPDATE_ERROR;
        }
    }
    return SYSTEM_CLOCK_UPDATE_SUCCESS;
}

void systemInit()
{
    config_settings_t cfg_settings;

    fillCfgSettings(&cfg_settings, SYSTEM_CLOCK_SOURCE_USER);

    if (SYSTEM_CLOCK_UPDATE_ERROR == systemUpdateClock(cfg_settings)) {

        /**
         * @brief Clock not set correctly.
         */
        while(1);

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
