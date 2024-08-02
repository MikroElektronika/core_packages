/**
 *******************************************************************************
 * @file    system.c
 * @brief   CMSIS Cortex-M3/M4 Device Peripheral Access Layer Source File.
 * @version V1.0.0
 *
 * DO NOT USE THIS SOFTWARE WITHOUT THE SOFTWARE LICENSE AGREEMENT.
 *
 * Copyright(C) Toshiba Electronic Device Solutions Corporation 2022
 *******************************************************************************
 */

// Note: Changed for MikroE implementation
// #include "TSB_CMSIS_CORE.h"
// Note: Added for MikroE implementation
#include "core_header.h"
// Note: Added for MikroE implementation
#include "mcu.h"
#include "configuration.h"

/*-------- <<< Start of configuration section >>> ----------------------------*/

#if defined (__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050) /* Arm Compiler V6.01 or later */
extern uint32_t Load$$FLASH_CODE_RAM$$Base;
extern uint32_t Image$$FLASH_CODE_RAM$$Base;
extern uint32_t Load$$FLASH_CODE_RAM$$Length;

#elif defined ( __CC_ARM   )      /* RealView Compiler */
extern uint32_t Load$$FLASH_CODE_RAM$$Base;
extern uint32_t Image$$FLASH_CODE_RAM$$Base;
extern uint32_t Load$$FLASH_CODE_RAM$$Length;

#elif defined ( __ICCARM__ )    /* IAR Compiler */
#pragma section = "FLASH_CODE_RAM"
#pragma section = "FLASH_CODE_ROM"

#elif defined ( __SES_ARM )     /* Segger Compiler */
extern unsigned char __FLASH_CODE_ROM_segment_used_start__[];
extern unsigned char __FLASH_CODE_RAM_segment_used_start__[];
extern unsigned char __FLASH_CODE_RAM_segment_used_size__[];
#endif

#if defined (__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050) /* Arm Compiler V6.01 or later */
#define FLASH_API_ROM           (uint32_t *)&Load$$FLASH_CODE_RAM$$Base
#define FLASH_API_RAM           (uint32_t *)&Image$$FLASH_CODE_RAM$$Base
#define SIZE_FLASH_API          (uint32_t)&Load$$FLASH_CODE_RAM$$Length

#elif defined ( __CC_ARM   )      /* RealView Compiler */
#define FLASH_API_ROM           (uint32_t *)&Load$$FLASH_CODE_RAM$$Base
#define FLASH_API_RAM           (uint32_t *)&Image$$FLASH_CODE_RAM$$Base
#define SIZE_FLASH_API          (uint32_t)&Load$$FLASH_CODE_RAM$$Length

#elif defined ( __ICCARM__ )    /* IAR Compiler */
#define FLASH_API_ROM           ((uint32_t *)__section_begin("FLASH_CODE_ROM"))
#define FLASH_API_RAM           ((uint32_t *)__section_begin("FLASH_CODE_RAM"))
#define SIZE_FLASH_API          ((uint32_t)__section_size("FLASH_CODE_ROM"))

#elif defined ( __SES_ARM )     /* Segger Compiler */
#define FLASH_API_ROM           (uint32_t *)__FLASH_CODE_ROM_segment_used_start__
#define FLASH_API_RAM           (uint32_t *)__FLASH_CODE_RAM_segment_used_start__
#define SIZE_FLASH_API          (uint32_t)__FLASH_CODE_RAM_segment_used_size__
#endif

/* Clock Variable definitions */
uint32_t SystemCoreClock = __CORE_SYS;  /*!< System Clock Frequency (Core Clock) */
uint32_t CoreClockInput = 0U;

/**
 * Initialize the system
 *
 * @param  none
 * @return none
 *
 * @brief  Update SystemCoreClock according register values.
 */
void SystemCoreClockUpdate(void)
{                               /* Get Core Clock Frequency */
#ifndef TRM_SETUP               /* Not TRM project */
    uint32_t CoreClock = 0U;
    uint32_t regval = 0U;
    uint32_t oscsel = 0U;
    uint32_t pll0sel = 0U;
    uint32_t pll0on = 0U;
    uint32_t pll0setval = 0U;
    uint32_t i = 0U;

    /* Determine clock frequency according to clock register values */
    /* System clock is high-speed clock */
    regval = TSB_CG->OSCCR;
    oscsel = regval & CG_OSCSEL_EHOSC;
    if (oscsel) {  /* If system clock is External high-speed oscillator freq */
        CoreClock = EXTALH;
    } else {                    /* If system clock is Internal high-speed oscillator freq */
        CoreClock = IXTALH;
    }
    regval = TSB_CG->PLL0SEL;
    pll0sel = regval & CG_PLL0SEL_FPLL;
    pll0on = regval & SYS_CG_PLL0SEL_PLL0ON_SET;
    if (pll0sel && pll0on) {                        /* If PLL enabled  */
        pll0setval = regval & PLL0SEL_MASK;
        for (i = 0; i < SYSTEM_SYSTEM_CORE_CLOCK_TABLE_MAX; i++) {
            if((CoreClock == system_system_core_clock_table[i][0]) && (pll0setval == system_system_core_clock_table[i][1])){
                CoreClockInput = system_system_core_clock_table[i][2];
            }
        }
    } else {                                       /* If PLL not used */
        CoreClockInput = CoreClock;
    }

    switch (TSB_CG->SYSCR & 7U) {
    case 0U:                                 /* Gear -> fc */
        SystemCoreClock = CoreClockInput;
        break;
    case 1U:                                 /* Gear -> fc/2 */
        SystemCoreClock = CoreClockInput / 2U;
        break;
    case 2U:                                 /* Gear -> fc/4 */
        SystemCoreClock = CoreClockInput / 4U;
        break;
    case 3U:                                 /* Gear -> fc/8 */
        if (CoreClockInput >= EOSC_8M) {
            SystemCoreClock = CoreClockInput / 8U;
        } else {
            SystemCoreClock = 0U;
        }
        break;
    case 4U:                                 /* Gear -> fc/16 */
        if (CoreClockInput > EOSC_12M) {
            SystemCoreClock = CoreClockInput / 16U;
        } else {
            SystemCoreClock = 0U;
        }
        break;
    case 5U:
    case 6U:
    case 7U:
        SystemCoreClock = 0U;
        break;
    default:
        SystemCoreClock = 0U;
        break;
    }
#else
    SystemCoreClock = __CORE_SYS;
#endif               /* Not TRM project */
}

/*--------------------------------------------------*/
/**
  * @brief  copy 32-bit data from source to dest
  * @param  the address of source and dast, the data size
  * @retval none.
  * @note   -
  */
/*--------------------------------------------------*/
static void CopyRoutine(uint32_t * dest, uint32_t * source, uint32_t size)
{
    uint32_t *dest_addr, *source_addr, tmpsize;
    uint32_t i, tmps, tmpd, mask;

    dest_addr = dest;
    source_addr = source;

    tmpsize = size >> 2U;
    for (i = 0U; i < tmpsize; i++) {    /* 32bits copy */
        *dest_addr = *source_addr;
        dest_addr++;
        source_addr++;
    }
    if (size & 0x00000003U) {   /* if the last data size is not 0(maybe 1,2 or 3), copy the last data */
        mask = 0xFFFFFF00U;
        i = size & 0x00000003U;
        tmps = *source_addr;
        tmpd = *dest_addr;
        while (i - 1U) {
            mask = mask << 8U;
            i--;
        }
        tmps = tmps & (~mask);
        tmpd = tmpd & (mask);
        *dest_addr = tmps + tmpd;       /* 32bits copy, but only change the bytes need to be changed */
    } else {
        /* Do nothing */
    }
}

#if defined (__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050) /* Arm Compiler V6.01 or later */
#pragma clang section text="FLASH_ROM"
#elif defined ( __CC_ARM   )      /* RealView Compiler */
#pragma arm section code="FLASH_ROM"
#elif defined ( __ICCARM__ )    /* IAR Compiler */
#pragma location = "FLASH_ROM"
#elif defined ( __SES_ARM )
__attribute__ ((section("FLASH_ROM"), noinline))
#endif
static void FCRegSet(volatile uint32_t r0, volatile uint32_t r1, volatile uint32_t r2, volatile uint32_t r3)
{
    __asm("str r1, [r2]");
    __asm("str r0, [r3]");
    return;
}
#if defined (__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050) /* Arm Compiler V6.01 or later */
#pragma clang section text=""
#elif defined ( __CC_ARM   )      /* RealView Compiler */
#pragma arm section code
#endif

/*--------------------------------------------------*/
/**
  * @brief  Raed clock set.
  * @param  none.
  * @retval none.
  * @note   It works in the inner RAM.
  */
/*--------------------------------------------------*/
#if defined (__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050) /* Arm Compiler V6.01 or later */
#pragma clang optimize off
#pragma clang section text="FLASH_ROM"
#elif defined ( __CC_ARM   )      /* RealView Compiler */
#pragma arm section code="FLASH_ROM"
#elif defined ( __ICCARM__ )    /* IAR Compiler */
#pragma location = "FLASH_ROM"
#elif defined ( __SES_ARM )
__attribute__ ((section("FLASH_ROM"), noinline))
#endif
static void FlashReadClockSet(uint32_t sysclock)
{
    volatile uint32_t regval       = 0;
    volatile uint32_t kcr          = FC_KCR_KEYCODE;
    volatile uint32_t kcr_address  = (uint32_t)&TSB_FC->KCR;
    volatile uint32_t accr_address = (uint32_t)&TSB_FC->REGISTER_NAME_OF_FCACCR;
    uint32_t kcr_tmp               = kcr;
    uint32_t kcr_addr_tmp          = kcr_address;
    uint32_t accr_addr_tmp         = accr_address;
    uint32_t max = 0;
    uint32_t expected = 0;
    uint32_t i = 0;

    max = system_fc_accr_data_table[0].threshold;
    if (sysclock > max) {
        return;  /* sysclock error */
    }

    for (i = 0; i < SYSTEM_FC_ACCR_DATA_TABLE_MAX; i++) {
        fc_accr_data_t data = system_fc_accr_data_table[i];
        if (sysclock <= data.threshold)
        {
            regval = (uint32_t)(data.fdlc | data.fclc);
        }
    }

    FCRegSet(regval, kcr_tmp, kcr_addr_tmp, accr_addr_tmp);
    expected = regval;
    while(TSB_FC->REGISTER_NAME_OF_FCACCR != expected)
    {
        /* no processing */
    }
}
#if defined (__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050) /* Arm Compiler V6.01 or later */
#pragma clang section text= ""
#pragma clang optimize on
#elif defined ( __CC_ARM   )      /* RealView Compiler */
#pragma arm section code
#endif

/*--------------------------------------------------*/
/**
  * @brief  RAM register set.
  * @param  none.
  * @retval none.
  * @note   -
  */
/*--------------------------------------------------*/
#if (FC_FCRACCR_EQUIPPED == AVAILABLE)
static void FcRamConRegSet(uint32_t sysclock)
{
    volatile uint32_t regval       = 0;
    volatile uint32_t kcr          = FC_KCR_KEYCODE;
    volatile uint32_t kcr_address  = (uint32_t)&TSB_FC->KCR;
    volatile uint32_t raccr_address = (uint32_t)&TSB_FC->RACCR;
    uint32_t kcr_tmp               = kcr;
    uint32_t kcr_addr_tmp          = kcr_address;
    uint32_t raccr_addr_tmp        = raccr_address;
    uint32_t max = 0;
    uint32_t expected = 0;
    uint32_t i = 0;

    max = system_fc_raccr_data_table[0].threshold;
    if (sysclock > max) {
        return;  /* sysclock error */
    }

    for (i = 0; i < SYSTEM_FC_RACCR_DATA_TABLE_MAX; i++) {
        fc_raccr_data_t data = system_fc_raccr_data_table[i];
        if (sysclock <= data.threshold)
        {
            regval = data.ramlc;
        }
    }

    FCRegSet(regval, kcr_tmp, kcr_addr_tmp, raccr_addr_tmp);
    expected = regval;
    while(TSB_FC->RACCR != expected)
    {
        /* no processing */
    }
}
#else
static void FcRamConRegSet(uint32_t sysclock) { /* not equipped */ }
#endif /* FC_FCRACCR_EQUIPPED */

/**
 * Initialize the system
 *
 * @param  none
 * @return none
 *
 * @brief  Setup the microcontroller system.
 *         Initialize the System.
 */
void SystemInit(void)
{
/* 1. SetupWatchdog */
#if (SIWD_SETUP)                  /* Watchdog Setup */
    /* SIWD Disable */
    TSB_SIWD0->EN = SIWDEN_Val;
    TSB_SIWD0->CR = SIWDCR_Val;
#else
    /* SIWD Enable (Setting after a Reset) */
#endif


/* 2. SetupFPUSetting */
#if (FPU_EQUIPPED == AVAILABLE)
    SCB->CPACR |= ((3UL << (10*2)) | (3UL << (11*2)));  /* set CP10 and CP11 Full Access */
#endif


/* 3. SetupFlash */
    // Note: Changed for MikroE implementation
    // CopyRoutine(FLASH_API_RAM, FLASH_API_ROM, SIZE_FLASH_API);     /* copy flash API to RAM */
    FlashReadClockSet(__CORE_SYS);
    FcRamConRegSet(__CORE_SYS);


/* 4. SetupSystemClock */
#if (CLOCK_SETUP)               /* Clock(external) Setup */
    TSB_CG->SYSCR |= SYSCR_GEAR_Val;
    TSB_CG->SYSCR |= SYSCR_PRCK_Val;
    TSB_CG->OSCCR |= CG_OSCCR_EOSCEN_SET;
    TSB_CG->WUPHCR = (SYS_WUPHCR_WUPT_EXT | CG_WUPHCR_WUCLK_SET);
    TSB_CG->WUPHCR = (SYS_WUPHCR_WUPT_EXT | CG_WUPHCR_WUCLK_SET | CG_WUPHCR_WUON_START_SET);
    while (TSB_CG_WUPHCR_WUEF) {
        ;
    }                           /* Warm-up */
    TSB_CG->OSCCR |= CG_OSCCR_OSCSEL_SET;
    while (!TSB_CG_OSCCR_OSCF) {
        ;
    }                         /* Confirm CGOSCCR<OSCF>="1" */
#else
    /* Internal HOSC Enable (Setting after a Reset) */
#endif


/* 5. ConfirmSystemClockSettings */
#if (MIDDLE_SPEED_SYSTEM_CLOCK_EQUIPPED == AVAILABLE)
    TSB_CG->SYSCR |= SYSCR_MCKSEL_Val;
    while ((TSB_CG->SYSCR & CG_MCKSELGST_MASK) != (SYSCR_MCKSEL_Val << 16U)) {
        ;
    }                         /* Confirm CGSYSCCR<MCKSELGST>="01" */
    while ((TSB_CG->SYSCR & CG_MCKSELPST_MASK) != (SYSCR_MCKSEL_Val << 24U)) {
        ;
    }                         /* Confirm CGSYSCR<MCKSELPST>="01" */
#endif
    while ((TSB_CG->SYSCR & CG_GEARST_MASK) != (SYSCR_GEAR_Val << 16U)) {
        ;
    }                         /* Confirm CGSYSCR<GEARST>="00" */
    while ((TSB_CG->SYSCR & CG_PRCKST_MASK) != (SYSCR_PRCK_Val << 16U)) {
        ;
    }                         /* Confirm CGSYSCR<PRCKST>="0000" */

#if (PLL_SETUP)
/* 6. SetupClockForFsys */
#if (CLOCK_SETUP)               /* Clock(external) Setup */
    TSB_CG->WUPHCR = (WUPHCR_INIT_PLL | CG_WUPHCR_WUCLK_SET);
#else
    TSB_CG->WUPHCR = (WUPHCR_INIT_PLL);
#endif
    TSB_CG->PLL0SEL &= CG_PLL0SEL_PLL0SEL_CLEAR;    /* PLL-->fOsc */
    TSB_CG->PLL0SEL &= CG_PLL0SEL_PLL0ON_CLEAR;
    TSB_CG->PLL0SEL = PLL0SEL_Ready;
#if (CLOCK_SETUP)               /* Clock(external) Setup */
    TSB_CG->WUPHCR = (WUPHCR_INIT_PLL | CG_WUPHCR_WUCLK_SET | CG_WUPHCR_WUON_START_SET);
#else
    TSB_CG->WUPHCR = (WUPHCR_INIT_PLL | CG_WUPHCR_WUON_START_SET);
#endif
    while (TSB_CG_WUPHCR_WUEF) {
        ;
    }                           /* Warm-up */


/* 7. EnablePllForFsys */
#if (CLOCK_SETUP)               /* Clock(external) Setup */
    TSB_CG->WUPHCR = (WUPHCR_LUPT_PLL | CG_WUPHCR_WUCLK_SET);
#else
    TSB_CG->WUPHCR = (WUPHCR_LUPT_PLL);
#endif
    TSB_CG->PLL0SEL |= SYS_CG_PLL0SEL_PLL0ON_SET;    /* PLL enabled */
    TSB_CG->STBYCR = STBYCR_Val;


/* 8. StartHighSpeedOscillationWarmingup */
#if (CLOCK_SETUP)               /* Clock(external) Setup */
    TSB_CG->WUPHCR = (WUPHCR_LUPT_PLL | CG_WUPHCR_WUCLK_SET | CG_WUPHCR_WUON_START_SET);
#else
    TSB_CG->WUPHCR = (WUPHCR_LUPT_PLL | CG_WUPHCR_WUON_START_SET);
#endif
    while (TSB_CG_WUPHCR_WUEF) {
        ;
    }                           /* Warm-up */


/* 9. SelectClockfPllForFsys */
    TSB_CG->PLL0SEL |= CG_PLL0SEL_PLL0SEL_SET;
    while (!TSB_CG_PLL0SEL_PLL0ST) {
        ;
    }                        /*Confirm CGPLL0SEL<PLL0ST> = "1" */
#else
    TSB_CG->STBYCR = STBYCR_Val;    /* PLL not used */
#endif/* PLL_SETUP */

/* 10. StopInternalHighSpeedOscillator1 */
#if (CLOCK_SETUP)               /* Clock(external) Setup */
    TSB_CG->OSCCR &= CG_OSCCR_IHOSC1EN_CLEAR;
#endif
}
