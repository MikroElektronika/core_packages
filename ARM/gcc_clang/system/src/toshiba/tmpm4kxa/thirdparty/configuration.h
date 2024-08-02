/**
 *****************************************************************************
 * @file     configuration.h
 * @brief    CMSIS Cortex-M4 Device Peripheral Access Layer Header File.\n
 * @version V1.0.0
 * 
 * DO NOT USE THIS SOFTWARE WITHOUT THE SOFTWARE LICENSE AGREEMENT.
 * 
 * Copyright(C) Toshiba Electronic Device Solutions Corporation 2022
 *****************************************************************************
 */

#ifndef __CONFIGURATION_H
#define __CONFIGURATION_H

#ifdef __cplusplus
extern "C" {
#endif 

/*------------------------------------------------------------------------------*/
/*  Macro Definition                                                            */
/*------------------------------------------------------------------------------*/

#define AVAILABLE               (1)                         /*!< CG RLM function equipped */
#define UNAVAILABLE             (0)                         /*!< CG RLM function not equipped */

#if (__FPU_PRESENT == 1) && (__FPU_USED == 1)   /* FPU setting */
#define FPU_EQUIPPED                        AVAILABLE
#else
#define FPU_EQUIPPED                        UNAVAILABLE
#endif
#define MIDDLE_SPEED_SYSTEM_CLOCK_EQUIPPED  AVAILABLE
#define FC_FCRACCR_EQUIPPED                 UNAVAILABLE


/* register name definition in [MCU_NAME].h */
#define REGISTER_NAME_OF_FCACCR             FCACCR      /* Flash FCACCR */


#define FC_KCR_KEYCODE      (0xA74A9D23UL)              /*!< The specific code that writes the FCKCR register. */
#define FC_ACCR_FDLC_4      (0x00000300UL)              /*!< Data Flash read clock 4clock  */
#define FC_ACCR_FDLC_5      (0x00000400UL)              /*!< Data Flash read clock 5clock  */
#define FC_ACCR_FDLC_6      (0x00000500UL)              /*!< Data Flash read clock 6clock  */
#define FC_ACCR_FDLC_7      (0x00000600UL)              /*!< Data Flash read clock 7clock  */
#define FC_ACCR_FCLC_1      (0x00000000UL)              /*!< Code Flash read clock 1clock  */
#define FC_ACCR_FCLC_2      (0x00000001UL)              /*!< Code Flash read clock 2clock  */
#define FC_ACCR_FCLC_3      (0x00000002UL)              /*!< Code Flash read clock 3clock  */
#define FC_ACCR_FCLC_4      (0x00000003UL)              /*!< Code Flash read clock 4clock  */
#define FC_ACCR_FCLC_5      (0x00000004UL)              /*!< Code Flash read clock 5clock  */
#define FC_ACCR_FCLC_6      (0x00000005UL)              /*!< Code Flash read clock 6clock  */
#define FC_ACCR_FCLC_7      (0x00000006UL)              /*!< Code Flash read clock 7clock  */


#define SYS_CG_GEAR_FC_1            (0x00000000UL)      /*!< CG fc register value */
#define SYS_CG_GEAR_FC_2            (0x00000001UL)      /*!< CG fc/2 register value */
#define SYS_CG_GEAR_FC_4            (0x00000002UL)      /*!< CG fc/4 register value */
#define SYS_CG_GEAR_FC_8            (0x00000003UL)      /*!< CG fc/8 register value */
#define SYS_CG_GEAR_FC_16           (0x00000004UL)      /*!< CG fc/16 register value */
#define SYS_CG_PRCK_FC_1            (0x00000000UL)      /*!< CG φT0 fc register value */
#define SYS_CG_PRCK_FC_2            (0x00000100UL)      /*!< CG φT0 fc/2 register value */
#define SYS_CG_PRCK_FC_4            (0x00000200UL)      /*!< CG φT0 fc/4 register value */
#define SYS_CG_PRCK_FC_8            (0x00000300UL)      /*!< CG φT0 fc/8 register value */
#define SYS_CG_PRCK_FC_16           (0x00000400UL)      /*!< CG φT0 fc/16 register value */
#define SYS_CG_PRCK_FC_32           (0x00000500UL)      /*!< CG φT0 fc/32 register value */
#define SYS_CG_PRCK_FC_64           (0x00000600UL)      /*!< CG φT0 fc/64 register value */
#define SYS_CG_PRCK_FC_128          (0x00000700UL)      /*!< CG φT0 fc/128 register value */
#define SYS_CG_PRCK_FC_256          (0x00000800UL)      /*!< CG φT0 fc/256 register value */
#define SYS_CG_PRCK_FC_512          (0x00000900UL)      /*!< CG φT0 fc/512 register value */

#define SYS_CG_PLL0SEL_PLL0ON_SET   ((uint32_t)0x00000001)

#define SYS_CG_MCKSEL_1             (0x00000000UL)      /*!< CG fsysm, mφT0 fc value */
#define SYS_CG_MCKSEL_2             (0x00000040UL)      /*!< CG fsysm, mφT0 fc/2 value */
#define SYS_CG_MCKSEL_4             (0x00000080UL)      /*!< CG fsysm, mφT0 fc/4 value */

#define SYS_CG_6M_MUL_26_656_FPLL   (0x001C1535UL<<8U)      /* fPLL = 6MHz * 26.656   */
#define SYS_CG_8M_MUL_20_FPLL       (0x00245028UL<<8U)      /* fPLL = 8MHz * 20       */
#define SYS_CG_10M_MUL_16_FPLL      (0x002E9020UL<<8U)      /* fPLL = 10MHz * 16       */
#define SYS_CG_12M_MUL_13_312_FPLL  (0x0036DA1AUL<<8U)      /* fPLL = 12MHz * 13.312   */




#define CG_GEAR_MASK            ((uint32_t)0x00000007)    /*!< CG GEAR mask */
#define CG_PRCK_MASK            ((uint32_t)0x00000F00)    /*!< CG PRCK mask */
#define CG_MCKSEL_MASK          ((uint32_t)0x000000C0)    /*!< CG MCKSEL mask */
#define CG_GEARST_MASK          ((uint32_t)0x00070000)    /*!< CG GEARST mask */
#define CG_PRCKST_MASK          ((uint32_t)0x0F000000)    /*!< CG PRCKST mask */
#define CG_MCKSELPST_MASK       ((uint32_t)0xC0000000)    /*!< CG MCKSELPST mask */
#define CG_MCKSELGST_MASK       ((uint32_t)0x00C00000)    /*!< CG MCKSELGST mask */



#define STBYCR_Val              (0x00000000UL)

/* Define clocks */
#define IOSC_10M                (10000000UL)

#define EOSC_6M                 (6000000UL)
#define EOSC_8M                 (8000000UL)
#define EOSC_10M                (10000000UL)
#define EOSC_12M                (12000000UL)
#define EOSC_16M                (16000000UL)
#define EOSC_24M                (24000000UL)

#define EXTALH                  EOSC_10M        /* External high-speed oscillator freq */
#define IXTALH                  IOSC_10M        /* Internal high-speed oscillator freq */


#define CG_PLL0SEL_FPLL         ((uint32_t)0x00000002)      /*!< CG PLL0SEL fPLL */
#define CG_PLL0SEL_FOSC         ((uint32_t)0x00000000)      /*!< CG PLL0SEL fosc */

#define PLL0SEL_MASK            (0xFFFFFF00UL)              /*!< CG PLL mask */

#define CG_PLL0SEL_PLL0ON_CLEAR                ((uint32_t)0xFFFFFFFE)
#define CG_PLL0SEL_PLL0SEL_SET                 ((uint32_t)0x00000002)
#define CG_PLL0SEL_PLL0SEL_CLEAR               ((uint32_t)0xFFFFFFFD)

#define CG_OSCSEL_EHOSC         ((uint32_t)0x00000100)      /*!< CG OSCSEL EHOSC */

#define CG_OSCCR_IHOSC1EN_CLEAR              ((uint32_t)0xFFFFFFFE)
#define CG_OSCCR_EOSCEN_SET                  ((uint32_t)0x00000002)

#define CG_OSCCR_OSCSEL_SET                  ((uint32_t)0x00000100)


/* Configure Warm-up time */
#define HZ_1M                   (1000000UL)
#define WU_TIME_EXT             (5000UL)                    /* warm-up time for EXT is 5ms */
#define WU_TIME_INT             (1634UL)                    /* warm-up time for INT is 163.4us x 10 */
#define WU_TIME_INT_MIN         (0x03C << 20U)              /* minimum warm-up time for INT */
#define INIT_TIME_PLL           (100UL)                     /* Initial time for PLL is 100us */
#define LOCKUP_TIME_PLL         (400UL)                     /* Lockup time for PLL is 400us  */

#define CG_WUPHCR_WUON_START_SET    ((uint32_t)0x00000001)
#define CGWUPHCR_WUEF_R_DONE        ((uint32_t)0x00000000)      /*!< WUEF    :[R]    :Done */

/* Warm-up setting value */
/* EOSC OSCCR<WUPT11:0> = (warm-up time(us) * EXTALH - 16) / 16 */
/* use IXTALH instead of EXTALH in SystemInit */
#define SYS_WUPHCR_WUPT_EXT         ((uint32_t)(((((uint64_t)WU_TIME_EXT * EXTALH / HZ_1M) - 16UL) /16UL) << 20U))


/* Clock Generator (CG) Configuration */
#ifdef TRM_SETUP
    #define CLOCK_SETUP             (0U)                      /* 1:External HOSC, 0: Internal HOSC */
    #define PLL_SETUP               (0U)                      /* 1:PLL used, 0: PLL not used */
    #define SYSCR_GEAR_Val          (0x00000000)
    #define SYSCR_PRCK_Val          (0x00000000)
    #define SYSCR_MCKSEL_Val        (0x00000000)
#else
    #define CLOCK_SETUP             (0U)                      /* 1:External HOSC, 0: Internal HOSC */
    #define PLL_SETUP               (0U)                      /* 1:PLL used, 0: PLL not used */
    #define SYSCR_GEAR_Val          (SYS_CG_GEAR_FC_1)
    #define SYSCR_PRCK_Val          (SYS_CG_PRCK_FC_1)
    #define SYSCR_MCKSEL_Val        (SYS_CG_MCKSEL_2)
#endif

#define SYSCR_Val                   (SYSCR_GEAR_Val | SYSCR_PRCK_Val | SYSCR_MCKSEL_Val)

#if (PLL_SETUP)
    #if (CLOCK_SETUP)
        #define CG_WUPHCR_WUCLK_SET ((uint32_t)0x00000100)
        #define WUPHCR_INIT_PLL     ((uint32_t)(((((uint64_t)INIT_TIME_PLL * EXTALH / HZ_1M) - 16UL) /16UL) << 20U))
        #define WUPHCR_LUPT_PLL     ((uint32_t)(((((uint64_t)LOCKUP_TIME_PLL * EXTALH / HZ_1M) - 16UL) /16UL) << 20U))
        #define PLL0SEL_Ready       SYS_CG_10M_MUL_16_FPLL
    #else
        #define CG_WUPHCR_WUCLK_SET ((uint32_t)0x00000000)
        #define WUPHCR_INIT_PLL     ((uint32_t)(((((uint64_t)((INIT_TIME_PLL * 10) - 633UL) * (IXTALH / 10) / HZ_1M) - 41UL) /16UL) << 20U))
        #define WUPHCR_LUPT_PLL     ((uint32_t)(((((uint64_t)((LOCKUP_TIME_PLL * 10) - 633UL) * (IXTALH /10) / HZ_1M) - 41UL) /16UL) << 20U))
        #define PLL0SEL_Ready       SYS_CG_10M_MUL_16_FPLL
    #endif
    #define PLL0SEL_Val             (PLL0SEL_Ready|0x00000003UL)
#else
    #if (CLOCK_SETUP)
        #define CG_WUPHCR_WUCLK_SET ((uint32_t)0x00000100)
    #else
        #define CG_WUPHCR_WUCLK_SET ((uint32_t)0x00000000)
    #endif
    #define PLL0SEL_Ready           0x00000000
    #define PLL0SEL_Val             (PLL0SEL_Ready|0x00000000UL)
#endif



#define SIWD_SETUP              (1U)                      /* 1:Disable SIWD, 0:Enable SIWD */
#define SIWDEN_Val              (0x00000000UL)            /* SIWD Disable */
#define SIWDCR_Val              (0x000000B1UL)            /* SIWD Disable code */



#define EOSC_6M_DIV4_PLLON      (79970000UL)    /* 6.00MHz  * 53.3125 / 4 */
#define EOSC_8M_DIV4_PLLON      (80000000UL)    /* 8.00MHz  * 40.0000 / 4 */
#define EOSC_10M_DIV4_PLLON     (80000000UL)    /* 10.00MHz * 32.0000 / 4 */
#define EOSC_12M_DIV4_PLLON     (79880000UL)    /* 12.00MHz * 26.6250 / 4 */
#define EOSC_6M_DIV8_PLLON      (39980000UL)    /* 6.00MHz  * 53.3125 / 8 */
#define EOSC_8M_DIV8_PLLON      (40000000UL)    /* 8.00MHz  * 40.0000 / 8 */
#define EOSC_10M_DIV8_PLLON     (40000000UL)    /* 10.00MHz * 32.0000 / 8 */
#define EOSC_12M_DIV8_PLLON     (39940000UL)    /* 12.00MHz * 26.6250 / 8 */
#define EOSC_6M_DIV2_PLLON      (159900000UL)   /* 6.00MHz  * 53.3125 / 2 */
#define EOSC_8M_DIV2_PLLON      (160000000UL)   /* 8.00MHz  * 40.0000 / 2 */
#define EOSC_10M_DIV2_PLLON     (160000000UL)   /* 10.00MHz * 32.0000 / 2 */
#define EOSC_12M_DIV2_PLLON     (159800000UL)   /* 12.00MHz * 26.6250 / 2 */

#define IOSC_10M_DIV4_PLLON     (80000000UL)    /* 10.00MHz * 32.0000 / 4 */
#define IOSC_10M_DIV8_PLLON     (40000000UL)    /* 10.00MHz * 32.0000 / 8 */
#define IOSC_10M_DIV2_PLLON     (160000000UL)   /* 10.00MHz * 32.0000 / 2 */

#define FIXED_6MHz              (6000000UL)     /* 6.00MHz */
#define FIXED_8MHz              (8000000UL)     /* 8.00MHz */
#define FIXED_10MHz             (10000000UL)    /* 10.00MHz */
#define FIXED_12MHz             (12000000UL)    /* 12.00MHz */
#define FIXED_40MHz             (40000000UL)    /* 40.00MHz */
#define FIXED_80MHz             (80000000UL)    /* 80.00MHz */
#define FIXED_100MHz            (100000000UL)   /* 100.00MHz */
#define FIXED_120MHz            (120000000UL)   /* 120.00MHz */
#define FIXED_160MHz            (160000000UL)   /* 160.00MHz */
#define FIXED_200MHz            (200000000UL)   /* 200.00MHz */

#define SYSCORECLOCK_ACCR       FIXED_80MHz
#define FC_FIXED_CLOCK          FIXED_160MHz
#define MCU_CLOCK_MAX           FIXED_160MHz

#define FC_RACCR_THRESHOLD      FIXED_80MHz
#define FC_RACCR_RAMLC_1CLK     (0x00000000UL)  /*!< 1clock(less than 160MHZ) */
#define FC_RACCR_RAMLC_2CLK     (0x00000010UL)  /*!< 2clock(more than 160MHZ).*/

/* Determine core clock frequency according to settings */
/* System clock is high-speed clock*/
#if (CLOCK_SETUP)
  #define CORE_TALH (EXTALH)
#else
  #define CORE_TALH (IXTALH)
#endif

#if ((PLL0SEL_Val & (1U<<1U)) && (PLL0SEL_Val & (1U<<0U)))  /* If PLL selected and enabled */
    #if   (CORE_TALH == EOSC_6M)        /* If input is 6MHz */
        #if ((PLL0SEL_Val & PLL0SEL_MASK) == (SYS_CG_6M_MUL_26_656_FPLL))
            #define __CORE_CLK   EOSC_6M_DIV2_PLLON                               /* output clock is 159.938MHz */
        #else                                      /* fc -> reserved */
            #define __CORE_CLK   (0U)
        #endif                          /* End input is 6MHz */
    #elif (CORE_TALH == EOSC_8M)        /* If input is 8MHz */
        #if ((PLL0SEL_Val & PLL0SEL_MASK) == (SYS_CG_8M_MUL_20_FPLL))
            #define __CORE_CLK   EOSC_8M_DIV2_PLLON                               /* output clock is 160MHz */
        #else                                     /* fc -> reserved */
            #define __CORE_CLK   (0U)
        #endif                          /* End input is 8MHz */
    #elif (CORE_TALH == EOSC_10M)       /* If input is 10MHz */
        #if ((PLL0SEL_Val & PLL0SEL_MASK) == SYS_CG_10M_MUL_16_FPLL)
            #define __CORE_CLK   EOSC_10M_DIV2_PLLON                              /* output clock is 160MHz */
        #else                                     /* fc -> reserved */
            #define __CORE_CLK   (0U)
        #endif                          /* End input is 10MHz */
    #elif (CORE_TALH == EOSC_12M)       /* If input is 12MHz */
        #if ((PLL0SEL_Val & PLL0SEL_MASK) == SYS_CG_12M_MUL_13_312_FPLL)
            #define __CORE_CLK   EOSC_12M_DIV2_PLLON                              /* output clock is 159.75MHz */
        #else                                    /* fc -> reserved */
            #define __CORE_CLK   (0U)
        #endif                          /* End input is 12MHz    */
    #elif (CORE_TALH == IOSC_10M)       /* If input is 10MHz */
        #if ((PLL0SEL_Val & PLL0SEL_MASK) == SYS_CG_10M_MUL_16_FPLL)
            #define __CORE_CLK   IOSC_10M_DIV2_PLLON                              /* output clock is 160MHz */
        #else                                    /* fc -> reserved */
            #define __CORE_CLK   (0U)
        #endif                          /* End input is 10MHz    */
    #else                               /* input clock not known */
        #define __CORE_CLK   (0U)
        #error "Core Oscillator Frequency invalid!"
    #endif                              /* End switch input clock */
#else                                   /* If PLL not used */
    #define __CORE_CLK   (CORE_TALH)
#endif

#if   ((SYSCR_Val & 7U) == 0U)      /* Gear -> fc                         */
  #define __CORE_SYS   (__CORE_CLK)
#elif ((SYSCR_Val & 7U) == 1U)      /* Gear -> fc/2                       */
  #define __CORE_SYS   (__CORE_CLK / 2U)
#elif ((SYSCR_Val & 7U) == 2U)      /* Gear -> fc/4                       */
  #define __CORE_SYS   (__CORE_CLK / 4U )
#elif ((SYSCR_Val & 7U) == 3U)      /* Gear -> fc/8                       */
  #define __CORE_SYS   (__CORE_CLK / 8U)
#elif ((SYSCR_Val & 7U) == 4U)      /* Gear -> fc/16                      */
  #define __CORE_SYS   (__CORE_CLK / 16U)
#else                               /* Gear -> reserved                   */
  #define __CORE_SYS   (0U)
#endif


/*------------------------------------------------------------------------------*/
/*  Table Definition                                                            */
/*------------------------------------------------------------------------------*/
#define SYSTEM_SYSTEM_CORE_CLOCK_TABLE_MAX       (5U)
static const uint32_t system_system_core_clock_table[SYSTEM_SYSTEM_CORE_CLOCK_TABLE_MAX][3] =
                    {{EOSC_6M,  SYS_CG_6M_MUL_26_656_FPLL,  EOSC_6M_DIV2_PLLON},
                     {EOSC_8M,  SYS_CG_8M_MUL_20_FPLL,      EOSC_8M_DIV2_PLLON},
                     {EOSC_10M, SYS_CG_10M_MUL_16_FPLL,     EOSC_10M_DIV2_PLLON},
                     {EOSC_12M, SYS_CG_12M_MUL_13_312_FPLL, EOSC_12M_DIV2_PLLON},
                     {IOSC_10M, SYS_CG_10M_MUL_16_FPLL,     IOSC_10M_DIV2_PLLON}};

typedef struct {
    uint32_t threshold;
    uint32_t fdlc;
    uint32_t fclc;
} fc_accr_data_t;
#define SYSTEM_FC_ACCR_DATA_TABLE_MAX (2U)
static const fc_accr_data_t system_fc_accr_data_table[SYSTEM_FC_ACCR_DATA_TABLE_MAX] =
{
    /* to specify the register value, define in descending order of threshold. */
    { MCU_CLOCK_MAX,     FC_ACCR_FDLC_5, FC_ACCR_FCLC_5 },
    { SYSCORECLOCK_ACCR, FC_ACCR_FDLC_4, FC_ACCR_FCLC_4 }
};

#if (FC_FCRACCR_EQUIPPED == AVAILABLE)
/* FC RACCR setting  configration */
typedef struct {
    uint32_t threshold;
    uint32_t ramlc;
} fc_raccr_data_t;
/* the below described is sample settings  */
#define SYSTEM_FC_RACCR_DATA_TABLE_MAX (2U)
static const fc_raccr_data_t system_fc_raccr_data_table[SYSTEM_FC_RACCR_DATA_TABLE_MAX] =
{
    /* to specify the register value, define in descending order of threshold. */
    { MCU_CLOCK_MAX, FC_RACCR_RAMLC_2CLK },
    { FIXED_80MHz,   FC_RACCR_RAMLC_1CLK }
};
#endif


#ifdef __cplusplus
}
#endif

#endif /*  __CONFIGURATION_H */
