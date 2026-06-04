/*******************************************************************************
* Copyright (C) 2017, Huada Semiconductor Co.,Ltd All rights reserved.
*
* This software is owned and published by:
* Huada Semiconductor Co.,Ltd ("HDSC").
*
* BY DOWNLOADING, INSTALLING OR USING THIS SOFTWARE, YOU AGREE TO BE BOUND
* BY ALL THE TERMS AND CONDITIONS OF THIS AGREEMENT.
*
* This software contains source code for use with HDSC
* components. This software is licensed by HDSC to be adapted only
* for use in systems utilizing HDSC components. HDSC shall not be
* responsible for misuse or illegal use of this software for devices not
* supported herein. HDSC is providing this software "AS IS" and will
* not be responsible for issues arising from incorrect user implementation
* of the software.
*
* Disclaimer:
* HDSC MAKES NO WARRANTY, EXPRESS OR IMPLIED, ARISING BY LAW OR OTHERWISE,
* REGARDING THE SOFTWARE (INCLUDING ANY ACOOMPANYING WRITTEN MATERIALS),
* ITS PERFORMANCE OR SUITABILITY FOR YOUR INTENDED USE, INCLUDING,
* WITHOUT LIMITATION, THE IMPLIED WARRANTY OF MERCHANTABILITY, THE IMPLIED
* WARRANTY OF FITNESS FOR A PARTICULAR PURPOSE OR USE, AND THE IMPLIED
* WARRANTY OF NONINFRINGEMENT.
* HDSC SHALL HAVE NO LIABILITY (WHETHER IN CONTRACT, WARRANTY, TORT,
* NEGLIGENCE OR OTHERWISE) FOR ANY DAMAGES WHATSOEVER (INCLUDING, WITHOUT
* LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS, BUSINESS INTERRUPTION,
* LOSS OF BUSINESS INFORMATION, OR OTHER PECUNIARY LOSS) ARISING FROM USE OR
* INABILITY TO USE THE SOFTWARE, INCLUDING, WITHOUT LIMITATION, ANY DIRECT,
* INDIRECT, INCIDENTAL, SPECIAL OR CONSEQUENTIAL DAMAGES OR LOSS OF DATA,
* SAVINGS OR PROFITS,
* EVEN IF Disclaimer HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* YOU ASSUME ALL RESPONSIBILITIES FOR SELECTION OF THE SOFTWARE TO ACHIEVE YOUR
* INTENDED RESULTS, AND FOR THE INSTALLATION OF, USE OF, AND RESULTS OBTAINED
* FROM, THE SOFTWARE.
*
* This software may be replicated in part or whole for the licensed use,
* with the restriction that this Disclaimer and Copyright notice must be
* included with each copy of this software, whether used in part or whole,
* at all times.
*/
/******************************************************************************/
/** \\file HC32M140FX.h
**
** Auto generate.
** Headerfile for HC32M140FX series MCU
**
** History:
**
**   - 2019-07-30  0.1   First version for Device Driver Library of Module.
**
******************************************************************************/

#ifndef __HC32M140FX_H__
#define __HC32M140FX_H__

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************
* Configuration of the Cortex-M0P Processor and Core Peripherals
******************************************************************************/
#define __MPU_PRESENT           0 /* No MPU                                       */
#define __NVIC_PRIO_BITS        2 /* M0P uses 2 Bits for the Priority Levels      */
#define __Vendor_SysTickConfig  0 /* Set to 1 if different SysTick Config is used */

/******************************************************************************
* Interrupt Number Definition
******************************************************************************/
typedef enum IRQn
{
    NMI_IRQn            = -14, /*  2 Non Maskable                            */
    HardFault_IRQn      = -13, /*  3 Hard Fault                              */
    SVC_IRQn            = -5,  /* 11 SV Call                                 */
    PendSV_IRQn         = -2,  /* 14 Pend SV                                 */
    SysTick_IRQn        = -1,  /* 15 System Tick                             */
    
    CSV_IRQn            = 0 ,
    SWWDT_IRQn          = 1 ,
    LVD_IRQn            = 2 ,
    TIM4PWM_EMI_IRQn    = 3 ,
    EXINT0_7_IRQn       = 4 ,
    EXINT8_15_IRQn      = 5 ,
    DTIM_IRQn           = 6 ,
    MSC4RX_IRQn         = 15,
    MSC4TX_IRQn         = 16,
    MSC5RX_IRQn         = 17,
    MSC5TX_IRQn         = 18,
    MSC6RX_DMAC0_IRQn   = 19,
    MSC6TX_DMAC1_IRQn   = 20,
    OSC_CC_RP_IRQn      = 24,
    ADC0_IRQn           = 25,
    VC_IRQn             = 26,
    TIM4CNT_IRQn        = 28,
    TIM4OCO_IRQn        = 30,
    CTIM0_3_FLASH_IRQn  = 31,
    
    
} IRQn_Type;


#include <core_cm0plus.h>
#include <stdint.h>

#define SUCCESS         (0)
#define ERROR           (-1)

#ifndef NULL
#define NULL            (0)
#endif


/******************************************************************************/
/*                Device Specific Peripheral Registers structures             */
/******************************************************************************/

#if defined ( __CC_ARM   )
#pragma anon_unions
#endif

typedef struct
{
    __IO uint16_t SCF                       : 1;
    __IO uint16_t PCF                       : 1;
    __IO uint16_t PCP                       : 1;
    uint16_t RESERVED3                      : 2;
    __IO uint16_t REFS                      : 1;
    __IO uint16_t ALGN                      : 1;
    __IO uint16_t SP                        : 1;
} stc_adc_adctl_field_t;

typedef struct
{
    __IO uint16_t ADINT0E                   : 1;
    __IO uint16_t ADINT1E                   : 1;
    __IO uint16_t ADINT2E                   : 1;
    __IO uint16_t ADINT3E                   : 1;
    __IO uint16_t ADINT0F                   : 1;
    __IO uint16_t ADINT1F                   : 1;
    uint16_t RESERVED6                      : 1;
    __IO uint16_t ADINT3F                   : 1;
    __IO uint16_t ADINT4E                   : 1;
    uint16_t RESERVED9                      : 3;
    __IO uint16_t ADINT4F                   : 1;
} stc_adc_adcint_field_t;

typedef struct
{
    __IO uint8_t SCST                       : 1;
    __IO uint8_t SCTMEN                     : 1;
    __IO uint8_t RPT                        : 1;
    __IO uint8_t SMOD                       : 1;
    __IO uint8_t SCCLR                      : 1;
    __IO uint8_t SOV                        : 1;
    __IO uint8_t SCFUL                      : 1;
    __IO uint8_t SCEMP                      : 1;
} stc_adc_adcsctl_field_t;

typedef struct
{
    __IO uint8_t SDPTH                      : 4;
} stc_adc_sfs_field_t;

typedef struct
{
    __IO uint32_t SCH                       : 5;
    uint32_t RESERVED5                      : 3;
    __IO uint32_t STRGM                     : 2;
    uint32_t RESERVED10                     : 2;
    __IO uint32_t SVLD                      : 1;
    uint32_t RESERVED13                     : 7;
    __IO uint32_t SFD                       :12;
} stc_adc_sfd_field_t;

typedef struct
{
    __IO uint32_t CHSL0                     : 1;
    __IO uint32_t CHSL1                     : 1;
    __IO uint32_t CHSL2                     : 1;
    __IO uint32_t CHSL3                     : 1;
    uint32_t RESERVED4                      : 4;
    __IO uint32_t CHSL8                     : 1;
    __IO uint32_t CHSL9                     : 1;
    __IO uint32_t CHSL10                    : 1;
    __IO uint32_t CHSL11                    : 1;
    __IO uint32_t CHSL12                    : 1;
    __IO uint32_t CHSL13                    : 1;
    __IO uint32_t CHSL14                    : 1;
    __IO uint32_t CHSL15                    : 1;
} stc_adc_adsin0_field_t;

typedef struct
{
    __IO uint32_t SCHSL0                    : 5;
    __IO uint32_t SCHSL1                    : 5;
    __IO uint32_t SCHSL2                    : 5;
    __IO uint32_t SCHSL3                    : 5;
    __IO uint32_t SCHSL4                    : 5;
    __IO uint32_t SCHSL5                    : 5;
} stc_adc_adsin1_field_t;

typedef struct
{
    __IO uint8_t PCST                       : 1;
    __IO uint8_t PCTMEN                     : 1;
    __IO uint8_t EXTEN                      : 1;
    uint8_t RESERVED3                       : 1;
    __IO uint8_t PCCLR                      : 1;
    __IO uint8_t POV                        : 1;
    __IO uint8_t PCFUL                      : 1;
    __IO uint8_t PCEMP                      : 1;
} stc_adc_adcpctl_field_t;

typedef struct
{
    __IO uint8_t PDPTH                      : 2;
} stc_adc_pfs_field_t;

typedef struct
{
    __IO uint32_t PCH                       : 5;
    uint32_t RESERVED5                      : 3;
    __IO uint32_t PTRGM                     : 3;
    uint32_t RESERVED11                     : 1;
    __IO uint32_t PVLD                      : 1;
    uint32_t RESERVED13                     : 7;
    __IO uint32_t PFD                       :12;
} stc_adc_pfd_field_t;

typedef struct
{
    __IO uint16_t L1CH                      : 5;
    uint16_t RESERVED5                      : 3;
    __IO uint16_t L2CH                      : 5;
} stc_adc_adpin_field_t;

typedef struct
{
    __IO uint8_t CMPCH                      : 5;
    __IO uint8_t CMPMD0                     : 1;
    __IO uint8_t CMPMD1                     : 1;
    __IO uint8_t CMPEN                      : 1;
} stc_adc_adcmpctl_field_t;

typedef struct
{
    uint16_t RESERVED0                      : 6;
    __IO uint16_t CD                        :10;
} stc_adc_adcmpd_field_t;

typedef struct
{
    __IO uint32_t STCH0                     : 1;
    __IO uint32_t STCH1                     : 1;
    __IO uint32_t STCH2                     : 1;
    __IO uint32_t STCH3                     : 1;
    uint32_t RESERVED4                      : 4;
    __IO uint32_t STCH8                     : 1;
    __IO uint32_t STCH9                     : 1;
    __IO uint32_t STCH10                    : 1;
    __IO uint32_t STCH11                    : 1;
    __IO uint32_t STCH12                    : 1;
    __IO uint32_t STCH13                    : 1;
    __IO uint32_t STCH14                    : 1;
    __IO uint32_t STCH15                    : 1;
} stc_adc_stsel_field_t;

typedef struct
{
    __IO uint8_t TM0                        : 2;
} stc_adc_sts0_field_t;

typedef struct
{
    __IO uint8_t TM1                        : 2;
} stc_adc_sts1_field_t;

typedef struct
{
    __IO uint8_t DIV                        : 7;
} stc_adc_adcdiv_field_t;

typedef struct
{
    __IO uint8_t STRGIN                     : 4;
} stc_adc_adcstsl_field_t;

typedef struct
{
    __IO uint8_t PTRGIN                     : 4;
} stc_adc_adcptsl_field_t;

typedef struct
{
    __IO uint16_t AD_EN                     : 1;
    __IO uint16_t ENRDY                     : 1;
    uint16_t RESERVED2                      : 6;
    __IO uint16_t ENTM                      : 8;
} stc_adc_aden_field_t;

typedef struct
{
    uint16_t RESERVED0                      : 2;
    __IO uint16_t RCMPEN                    : 1;
    uint16_t RESERVED3                      : 1;
    __IO uint16_t RCMPTRG                   : 1;
    __IO uint16_t RCMPCNT                   : 3;
    uint16_t RESERVED8                      : 5;
    __IO uint16_t RCMPCN_ST                 : 3;
} stc_adc_adrcmpctl_field_t;

typedef struct
{
    __IO uint8_t RCMPCH                     : 5;
    __IO uint8_t RCMPMD                     : 1;
} stc_adc_adrcmps_field_t;

typedef struct
{
    uint16_t RESERVED0                      : 6;
    __IO uint16_t CDL                       :10;
} stc_adc_adrcmpl_field_t;

typedef struct
{
    uint16_t RESERVED0                      : 6;
    __IO uint16_t CDH                       :10;
} stc_adc_adrcmph_field_t;

typedef struct
{
    __IO uint32_t RCMPF                     : 1;
} stc_adc_adrcmpf_field_t;

typedef struct
{
    __IO uint8_t HC_EN                      : 1;
    __IO uint8_t MAIN_EN                    : 1;
    uint8_t RESERVED2                       : 1;
    __IO uint8_t SUB_EN                     : 1;
    __IO uint8_t PLL_EN                     : 1;
    __IO uint8_t INPUT                      : 3;
} stc_clock_ctrl_field_t;

typedef struct
{
    __IO uint8_t HC_RDY                     : 1;
    __IO uint8_t MAIN_RDY                   : 1;
    uint8_t RESERVED2                       : 1;
    __IO uint8_t SUB_RDY                    : 1;
    __IO uint8_t PLL_RDY                    : 1;
    __IO uint8_t SRC                        : 3;
} stc_clock_clk_stb_field_t;

typedef struct
{
    __IO uint32_t STBM                      : 2;
    uint32_t RESERVED2                      : 2;
    __IO uint32_t SPLV                      : 1;
    uint32_t RESERVED5                      :11;
    __IO uint32_t KEY                       :16;
} stc_clock_lpm_ctl_field_t;

typedef struct
{
    __IO uint16_t PWR                       : 1;
    __IO uint16_t RSTB                      : 1;
    uint16_t RESERVED2                      : 1;
    __IO uint16_t LVD                       : 1;
    __IO uint16_t SWWDG                     : 1;
    __IO uint16_t HWWDG                     : 1;
    __IO uint16_t CF                        : 1;
    __IO uint16_t AF                        : 1;
    __IO uint16_t SW                        : 1;
} stc_clock_stat_field_t;

typedef struct
{
    __IO uint8_t DIV                        : 3;
} stc_clock_bc_div_field_t;

typedef struct
{
    __IO uint8_t DIV                        : 2;
} stc_clock_apb0_ctrl_field_t;

typedef struct
{
    __IO uint8_t DIV                        : 2;
    uint8_t RESERVED2                       : 2;
    __IO uint8_t RST                        : 1;
    uint8_t RESERVED5                       : 2;
    __IO uint8_t EN                         : 1;
} stc_clock_apb1_ctrl_field_t;

typedef struct
{
    __IO uint8_t DIV                        : 2;
    uint8_t RESERVED2                       : 2;
    __IO uint8_t SWCKE                      : 1;
    __IO uint8_t HWCKE                      : 1;
    __IO uint8_t DTCKE                      : 1;
} stc_clock_swdg_ctrl_field_t;

typedef struct
{
    __IO uint8_t MAINWT                     : 4;
    __IO uint8_t SUBWT                      : 4;
} stc_clock_cswt_field_t;

typedef struct
{
    __IO uint8_t PLLWT                      : 2;
} stc_clock_pswt_field_t;

typedef struct
{
    __IO uint8_t PLLFO                      : 3;
    uint8_t RESERVED3                       : 1;
    __IO uint8_t PLLFR                      : 2;
} stc_clock_pll_ctl1_field_t;

typedef struct
{
    __IO uint8_t PLLN                       : 4;
    __IO uint8_t PRS                        : 1;
} stc_clock_pll_ctl2_field_t;

typedef struct
{
    __IO uint16_t MFCME                     : 1;
    __IO uint16_t SFCME                     : 1;
    __IO uint16_t MFCMRE                    : 1;
    __IO uint16_t SFCMRE                    : 1;
    uint16_t RESERVED4                      : 4;
    __IO uint16_t AFDE                      : 1;
    __IO uint16_t AFDRE                     : 1;
    uint16_t RESERVED10                     : 2;
    __IO uint16_t AFDCC                     : 3;
} stc_clock_fcm_ctl_field_t;

typedef struct
{
    __IO uint8_t MCFDF                      : 1;
    __IO uint8_t SCFDF                      : 1;
} stc_clock_fcm_str_field_t;

typedef struct
{
    uint8_t RESERVED0                       : 5;
    __IO uint8_t SWWDG_BRK                  : 1;
    uint8_t RESERVED6                       : 1;
    __IO uint8_t HWWDG_BRK                  : 1;
} stc_clock_dbwdt_ctrl_field_t;

typedef struct
{
    __IO uint8_t MAINEN                     : 1;
    __IO uint8_t SUBEN                      : 1;
    __IO uint8_t PLLEN                      : 1;
    uint8_t RESERVED3                       : 2;
    __IO uint8_t AFDEN                      : 1;
} stc_clock_int_ctrl_field_t;

typedef struct
{
    __IO uint8_t MAIN                       : 1;
    __IO uint8_t SUB                        : 1;
    __IO uint8_t PLL                        : 1;
    uint8_t RESERVED3                       : 2;
    __IO uint8_t AFD                        : 1;
} stc_clock_int_pend_field_t;

typedef struct
{
    __IO uint8_t MAIN                       : 1;
    __IO uint8_t SUB                        : 1;
    __IO uint8_t PLL                        : 1;
    uint8_t RESERVED3                       : 2;
    __IO uint8_t AFD                        : 1;
} stc_clock_int_clr_field_t;

typedef struct
{
    __IO uint8_t CNT                        : 6;
} stc_clock_counter_cntrd_field_t;

typedef struct
{
    __IO uint8_t RLC                        : 6;
} stc_clock_counter_cntrl_field_t;

typedef struct
{
    __IO uint8_t CNTIF                      : 1;
    __IO uint8_t CNTIE                      : 1;
    __IO uint8_t CCS                        : 2;
    uint8_t RESERVED4                       : 2;
    __IO uint8_t CNTOP                      : 1;
    __IO uint8_t CNTEN                      : 1;
} stc_clock_counter_cntc_field_t;

typedef struct
{
    __IO uint16_t CKSEL                     : 2;
    uint16_t RESERVED2                      : 6;
    __IO uint16_t DIV                       : 3;
} stc_clock_counter_cnt_clk0_field_t;

typedef struct
{
    __IO uint8_t CKEN                       : 1;
    __IO uint8_t RCKEN                      : 1;
} stc_clock_counter_cnt_clk1_field_t;

typedef struct
{
    uint16_t RESERVED0                      : 8;
    __IO uint16_t SEL01                     : 4;
    __IO uint16_t SEL23                     : 4;
} stc_ctiosel03_ctsel0123_field_t;

typedef struct
{
    __IO uint8_t SSSR0                      : 1;
    __IO uint8_t SSSR1                      : 1;
    __IO uint8_t SSSR2                      : 1;
    __IO uint8_t SSSR3                      : 1;
    __IO uint8_t SSSR4                      : 1;
    __IO uint8_t SSSR5                      : 1;
    __IO uint8_t SSSR6                      : 1;
    __IO uint8_t SSSR7                      : 1;
} stc_ctsssr_field_t;

typedef struct
{
    __IO uint16_t START                     : 1;
    __IO uint16_t ENCNT                     : 1;
    __IO uint16_t MODS                      : 1;
    __IO uint16_t PLRT                      : 1;
    __IO uint16_t FUNC                      : 3;
    uint16_t RESERVED7                      : 1;
    __IO uint16_t EDGS                      : 2;
    __IO uint16_t MASK                      : 1;
    __IO uint16_t RSTEN                     : 1;
    __IO uint16_t CLKS                      : 3;
} stc_ct_ppg_tcr_field_t;

typedef struct
{
    __IO uint8_t UDFIR                      : 1;
    uint8_t RESERVED1                       : 1;
    __IO uint8_t TRGIR                      : 1;
    uint8_t RESERVED3                       : 1;
    __IO uint8_t UDFIE                      : 1;
    uint8_t RESERVED5                       : 1;
    __IO uint8_t TRGIE                      : 1;
} stc_ct_ppg_sta_field_t;

typedef struct
{
    __IO uint8_t CLKS3                      : 1;
} stc_ct_ppg_tcr2_field_t;

typedef struct
{
    uint16_t RESERVED0                      : 1;
    __IO uint16_t ENCNT                     : 1;
    __IO uint16_t MODS                      : 1;
    uint16_t RESERVED3                      : 1;
    __IO uint16_t FUNC                      : 3;
    __IO uint16_t T32                       : 1;
    __IO uint16_t EDGS                      : 3;
    uint16_t RESERVED11                     : 1;
    __IO uint16_t CLKS                      : 3;
} stc_ct_pwc_tcr_field_t;

typedef struct
{
    __IO uint8_t OVIR                       : 1;
    uint8_t RESERVED1                       : 1;
    __IO uint8_t MCIR                       : 1;
    uint8_t RESERVED3                       : 1;
    __IO uint8_t OVIE                       : 1;
    uint8_t RESERVED5                       : 1;
    __IO uint8_t MCIE                       : 1;
    __IO uint8_t ERR                        : 1;
} stc_ct_pwc_sta_field_t;

typedef struct
{
    __IO uint8_t CLKS3                      : 1;
} stc_ct_pwc_tcr2_field_t;

typedef struct
{
    __IO uint16_t START                     : 1;
    __IO uint16_t ENCNT                     : 1;
    __IO uint16_t MODS                      : 1;
    __IO uint16_t PLRT                      : 1;
    __IO uint16_t FUNC                      : 3;
    uint16_t RESERVED7                      : 1;
    __IO uint16_t EDGS                      : 2;
    __IO uint16_t MASK                      : 1;
    __IO uint16_t RSTEN                     : 1;
    __IO uint16_t CLKS                      : 3;
} stc_ct_pwm_tcr_field_t;

typedef struct
{
    __IO uint8_t UDFIR                      : 1;
    __IO uint8_t DTMIR                      : 1;
    __IO uint8_t TRGIR                      : 1;
    uint8_t RESERVED3                       : 1;
    __IO uint8_t UDFIE                      : 1;
    __IO uint8_t DTMIE                      : 1;
    __IO uint8_t TRGIE                      : 1;
} stc_ct_pwm_sta_field_t;

typedef struct
{
    __IO uint8_t CLKS3                      : 1;
} stc_ct_pwm_tcr2_field_t;

typedef struct
{
    __IO uint16_t START                     : 1;
    __IO uint16_t ENCNT                     : 1;
    __IO uint16_t MODS                      : 1;
    __IO uint16_t PLRT                      : 1;
    __IO uint16_t FUNC                      : 3;
    __IO uint16_t T32                       : 1;
    __IO uint16_t EDGS                      : 2;
    uint16_t RESERVED10                     : 2;
    __IO uint16_t CLKS                      : 3;
} stc_ct_rt_tcr_field_t;

typedef struct
{
    __IO uint8_t UDFIR                      : 1;
    uint8_t RESERVED1                       : 1;
    __IO uint8_t TRGIR                      : 1;
    uint8_t RESERVED3                       : 1;
    __IO uint8_t UDFIE                      : 1;
    uint8_t RESERVED5                       : 1;
    __IO uint8_t TRGIE                      : 1;
} stc_ct_rt_sta_field_t;

typedef struct
{
    __IO uint8_t CLKS3                      : 1;
    uint8_t RESERVED1                       : 6;
    __IO uint8_t GTIE                       : 1;
} stc_ct_rt_tcr2_field_t;

typedef struct
{
    uint32_t RESERVED0                      :24;
    __IO uint32_t HALT                      : 4;
    __IO uint32_t PRIO                      : 1;
    uint32_t RESERVED29                     : 1;
    __IO uint32_t ST                        : 1;
    __IO uint32_t EN                        : 1;
} stc_dmac_conf_field_t;

typedef struct
{
    __IO uint32_t TC                        :16;
    __IO uint32_t BC                        : 4;
    uint32_t RESERVED20                     : 3;
    __IO uint32_t TRI_SEL                   : 6;
    __IO uint32_t ST                        : 1;
    __IO uint32_t PAS                       : 1;
    __IO uint32_t ENS                       : 1;
} stc_dmac_confa0_field_t;

typedef struct
{
    __IO uint32_t MSK                       : 1;
    uint32_t RESERVED1                      :15;
    __IO uint32_t STAT                      : 3;
    __IO uint32_t FIS_IE                    : 1;
    __IO uint32_t ERR_IE                    : 1;
    __IO uint32_t RD                        : 1;
    __IO uint32_t RS                        : 1;
    __IO uint32_t RC                        : 1;
    __IO uint32_t FD                        : 1;
    __IO uint32_t FS                        : 1;
    __IO uint32_t WIDTH                     : 2;
    __IO uint32_t MODE                      : 2;
} stc_dmac_confb0_field_t;

typedef struct
{
    __IO uint32_t SRC_ADR                   :32;
} stc_dmac_src_adr0_field_t;

typedef struct
{
    __IO uint32_t DST_ADR                   :32;
} stc_dmac_dst_adr0_field_t;

typedef struct
{
    __IO uint32_t TC                        :16;
    __IO uint32_t BC                        : 4;
    uint32_t RESERVED20                     : 3;
    __IO uint32_t TRI_SEL                   : 6;
    __IO uint32_t ST                        : 1;
    __IO uint32_t PAS                       : 1;
    __IO uint32_t ENS                       : 1;
} stc_dmac_confa1_field_t;

typedef struct
{
    __IO uint32_t MSK                       : 1;
    uint32_t RESERVED1                      :15;
    __IO uint32_t STAT                      : 3;
    __IO uint32_t FIS_IE                    : 1;
    __IO uint32_t ERR_IE                    : 1;
    __IO uint32_t RD                        : 1;
    __IO uint32_t RS                        : 1;
    __IO uint32_t RC                        : 1;
    __IO uint32_t FD                        : 1;
    __IO uint32_t FS                        : 1;
    __IO uint32_t WIDTH                     : 2;
    __IO uint32_t MODE                      : 2;
} stc_dmac_confb1_field_t;

typedef struct
{
    __IO uint32_t SRC_ADR                   :32;
} stc_dmac_src_adr1_field_t;

typedef struct
{
    __IO uint32_t DST_ADR                   :32;
} stc_dmac_dst_adr1_field_t;

typedef struct
{
    __IO uint32_t ONESHOT                   : 1;
    __IO uint32_t TMRSIZE                   : 1;
    __IO uint32_t TMRPRE                    : 2;
    uint32_t RESERVED4                      : 1;
    __IO uint32_t INTEN                     : 1;
    __IO uint32_t TMRMODE                   : 1;
    __IO uint32_t TMREN                     : 1;
} stc_dtim_timerctrl_field_t;

typedef struct
{
    __IO uint32_t TMRINTST                  : 1;
} stc_dtim_timerris_field_t;

typedef struct
{
    __IO uint32_t TMRMINTST                 : 1;
} stc_dtim_timermis_field_t;

typedef struct
{
    __IO uint32_t EN0                       : 1;
    __IO uint32_t EN1                       : 1;
    __IO uint32_t EN2                       : 1;
    __IO uint32_t EN3                       : 1;
    __IO uint32_t EN4                       : 1;
    __IO uint32_t EN5                       : 1;
    __IO uint32_t EN6                       : 1;
    __IO uint32_t EN7                       : 1;
    __IO uint32_t EN8                       : 1;
    __IO uint32_t EN9                       : 1;
    __IO uint32_t EN10                      : 1;
    __IO uint32_t EN11                      : 1;
    __IO uint32_t EN12                      : 1;
    __IO uint32_t EN13                      : 1;
    __IO uint32_t EN14                      : 1;
    __IO uint32_t EN15                      : 1;
} stc_extint_inten_field_t;

typedef struct
{
    __IO uint32_t SRC0                      : 1;
    __IO uint32_t SRC1                      : 1;
    __IO uint32_t SRC2                      : 1;
    __IO uint32_t SRC3                      : 1;
    __IO uint32_t SRC4                      : 1;
    __IO uint32_t SRC5                      : 1;
    __IO uint32_t SRC6                      : 1;
    __IO uint32_t SRC7                      : 1;
    __IO uint32_t SRC8                      : 1;
    __IO uint32_t SRC9                      : 1;
    __IO uint32_t SRC10                     : 1;
    __IO uint32_t SRC11                     : 1;
    __IO uint32_t SRC12                     : 1;
    __IO uint32_t SRC13                     : 1;
    __IO uint32_t SRC14                     : 1;
    __IO uint32_t SRC15                     : 1;
} stc_extint_intsrc_field_t;

typedef struct
{
    __IO uint32_t CLR0                      : 1;
    __IO uint32_t CLR1                      : 1;
    __IO uint32_t CLR2                      : 1;
    __IO uint32_t CLR3                      : 1;
    __IO uint32_t CLR4                      : 1;
    __IO uint32_t CLR5                      : 1;
    __IO uint32_t CLR6                      : 1;
    __IO uint32_t CLR7                      : 1;
    __IO uint32_t CLR8                      : 1;
    __IO uint32_t CLR9                      : 1;
    __IO uint32_t CLR10                     : 1;
    __IO uint32_t CLR11                     : 1;
    __IO uint32_t CLR12                     : 1;
    __IO uint32_t CLR13                     : 1;
    __IO uint32_t CLR14                     : 1;
    __IO uint32_t CLR15                     : 1;
} stc_extint_intclr_field_t;

typedef struct
{
    __IO uint32_t LVLL0                     : 1;
    __IO uint32_t LVLH0                     : 1;
    __IO uint32_t LVLL1                     : 1;
    __IO uint32_t LVLH1                     : 1;
    __IO uint32_t LVLL2                     : 1;
    __IO uint32_t LVLH2                     : 1;
    __IO uint32_t LVLL3                     : 1;
    __IO uint32_t LVLH3                     : 1;
    __IO uint32_t LVLL4                     : 1;
    __IO uint32_t LVLH4                     : 1;
    __IO uint32_t LVLL5                     : 1;
    __IO uint32_t LVLH5                     : 1;
    __IO uint32_t LVLL6                     : 1;
    __IO uint32_t LVLH6                     : 1;
    __IO uint32_t LVLL7                     : 1;
    __IO uint32_t LVLH7                     : 1;
    __IO uint32_t LVLL8                     : 1;
    __IO uint32_t LVLH8                     : 1;
    __IO uint32_t LVLL9                     : 1;
    __IO uint32_t LVLH9                     : 1;
    __IO uint32_t LVLL10                    : 1;
    __IO uint32_t LVLH10                    : 1;
    __IO uint32_t LVLL11                    : 1;
    __IO uint32_t LVLH11                    : 1;
    __IO uint32_t LVLL12                    : 1;
    __IO uint32_t LVLH12                    : 1;
    __IO uint32_t LVLL13                    : 1;
    __IO uint32_t LVLH13                    : 1;
    __IO uint32_t LVLL14                    : 1;
    __IO uint32_t LVLH14                    : 1;
    __IO uint32_t LVLL15                    : 1;
    __IO uint32_t LVLH15                    : 1;
} stc_extint_intlvl_field_t;

typedef struct
{
    __IO uint16_t SRC                       : 1;
} stc_extint_nmisrc_field_t;

typedef struct
{
    __IO uint16_t CLR                       : 1;
} stc_extint_nmiclr_field_t;

typedef struct
{
    uint8_t RESERVED0                       : 7;
    __IO uint8_t P07                        : 1;
} stc_fastio_fget0_field_t;

typedef struct
{
    __IO uint8_t P10                        : 1;
    __IO uint8_t P11                        : 1;
    __IO uint8_t P12                        : 1;
    __IO uint8_t P13                        : 1;
    __IO uint8_t P14                        : 1;
    __IO uint8_t P15                        : 1;
    __IO uint8_t P16                        : 1;
} stc_fastio_fget1_field_t;

typedef struct
{
    __IO uint8_t P20                        : 1;
} stc_fastio_fget2_field_t;

typedef struct
{
    __IO uint8_t P30                        : 1;
    __IO uint8_t P31                        : 1;
    __IO uint8_t P32                        : 1;
} stc_fastio_fget3_field_t;

typedef struct
{
    __IO uint8_t P40                        : 1;
    __IO uint8_t P41                        : 1;
    __IO uint8_t P42                        : 1;
    __IO uint8_t P43                        : 1;
    __IO uint8_t P44                        : 1;
    __IO uint8_t P45                        : 1;
    __IO uint8_t P46                        : 1;
} stc_fastio_fget4_field_t;

typedef struct
{
    __IO uint8_t P60                        : 1;
    __IO uint8_t P61                        : 1;
} stc_fastio_fget6_field_t;

typedef struct
{
    __IO uint8_t P70                        : 1;
    __IO uint8_t P71                        : 1;
    __IO uint8_t P72                        : 1;
    __IO uint8_t P73                        : 1;
    __IO uint8_t P74                        : 1;
    __IO uint8_t P75                        : 1;
} stc_fastio_fget7_field_t;

typedef struct
{
    uint8_t RESERVED0                       : 7;
    __IO uint8_t P07                        : 1;
} stc_fastio_fset0_field_t;

typedef struct
{
    __IO uint8_t P10                        : 1;
    __IO uint8_t P11                        : 1;
    __IO uint8_t P12                        : 1;
    __IO uint8_t P13                        : 1;
    __IO uint8_t P14                        : 1;
    __IO uint8_t P15                        : 1;
    __IO uint8_t P16                        : 1;
} stc_fastio_fset1_field_t;

typedef struct
{
    __IO uint8_t P20                        : 1;
} stc_fastio_fset2_field_t;

typedef struct
{
    __IO uint8_t P30                        : 1;
    __IO uint8_t P31                        : 1;
    __IO uint8_t P32                        : 1;
} stc_fastio_fset3_field_t;

typedef struct
{
    __IO uint8_t P40                        : 1;
    __IO uint8_t P41                        : 1;
    __IO uint8_t P42                        : 1;
    __IO uint8_t P43                        : 1;
    __IO uint8_t P44                        : 1;
    __IO uint8_t P45                        : 1;
    __IO uint8_t P46                        : 1;
} stc_fastio_fset4_field_t;

typedef struct
{
    __IO uint8_t P60                        : 1;
    __IO uint8_t P61                        : 1;
} stc_fastio_fset6_field_t;

typedef struct
{
    __IO uint8_t P70                        : 1;
    __IO uint8_t P71                        : 1;
    __IO uint8_t P72                        : 1;
    __IO uint8_t P73                        : 1;
    __IO uint8_t P74                        : 1;
    __IO uint8_t P75                        : 1;
} stc_fastio_fset7_field_t;

typedef struct
{
    __IO uint32_t PRGM                      : 1;
    __IO uint32_t PERS                      : 1;
    __IO uint32_t CERS                      : 1;
    __IO uint32_t DPSTB                     : 1;
    uint32_t RESERVED4                      : 1;
    __IO uint32_t PER_EN                    : 1;
    uint32_t RESERVED6                      :10;
    __IO uint32_t FRWPW                     :16;
} stc_flash_if_focr_field_t;

typedef struct
{
    __IO uint32_t BUSY                      : 1;
    __IO uint32_t KEYVIO                    : 1;
    __IO uint32_t ACCVIO                    : 1;
    __IO uint32_t ERR                       : 1;
    __IO uint32_t OPVIO                     : 1;
    uint32_t RESERVED5                      :11;
    __IO uint32_t FRWPW                     :16;
} stc_flash_if_fstr_field_t;

typedef struct
{
    __IO uint32_t FIE                       : 1;
    uint32_t RESERVED1                      : 3;
    __IO uint32_t FWTC                      : 2;
} stc_flash_if_fwcicr_field_t;

typedef struct
{
    uint32_t RESERVED0                      : 8;
    __IO uint32_t F4M_ITC                   : 4;
    uint32_t RESERVED12                     : 4;
    __IO uint32_t F4M_OPT                   : 8;
} stc_flash_if_fudr0_field_t;

typedef struct
{
    __IO uint16_t TNVS                      : 9;
} stc_flash_if_tnvs_field_t;

typedef struct
{
    __IO uint16_t TPROG                     : 9;
} stc_flash_if_tprog_field_t;

typedef struct
{
    __IO uint16_t TPGS                      : 9;
} stc_flash_if_tpgs_field_t;

typedef struct
{
    __IO uint16_t TRCVPGM                   : 9;
} stc_flash_if_trcvpgm_field_t;

typedef struct
{
    __IO uint16_t TRCVPERS                  : 9;
} stc_flash_if_trcvpers_field_t;

typedef struct
{
    __IO uint16_t TRCVCERS                  : 9;
} stc_flash_if_trcvcers_field_t;

typedef struct
{
    __IO uint16_t TPERS                     : 9;
} stc_flash_if_tpers_field_t;

typedef struct
{
    __IO uint16_t TCERS                     : 9;
} stc_flash_if_tcers_field_t;

typedef struct
{
    uint8_t RESERVED0                       : 7;
    __IO uint8_t P07                        : 1;
} stc_gpio_fn0_field_t;

typedef struct
{
    __IO uint8_t P10                        : 1;
    __IO uint8_t P11                        : 1;
    __IO uint8_t P12                        : 1;
    __IO uint8_t P13                        : 1;
    __IO uint8_t P14                        : 1;
    __IO uint8_t P15                        : 1;
    __IO uint8_t P16                        : 1;
} stc_gpio_fn1_field_t;

typedef struct
{
    __IO uint8_t P20                        : 1;
} stc_gpio_fn2_field_t;

typedef struct
{
    __IO uint8_t P30                        : 1;
    __IO uint8_t P31                        : 1;
    __IO uint8_t P32                        : 1;
} stc_gpio_fn3_field_t;

typedef struct
{
    __IO uint8_t P40                        : 1;
    __IO uint8_t P41                        : 1;
    __IO uint8_t P42                        : 1;
    __IO uint8_t P43                        : 1;
    __IO uint8_t P44                        : 1;
    __IO uint8_t P45                        : 1;
    __IO uint8_t P46                        : 1;
} stc_gpio_fn4_field_t;

typedef struct
{
    __IO uint8_t P60                        : 1;
    __IO uint8_t P61                        : 1;
} stc_gpio_fn6_field_t;

typedef struct
{
    __IO uint8_t P70                        : 1;
    __IO uint8_t P71                        : 1;
    __IO uint8_t P72                        : 1;
    __IO uint8_t P73                        : 1;
    __IO uint8_t P74                        : 1;
    __IO uint8_t P75                        : 1;
} stc_gpio_fn7_field_t;

typedef struct
{
    uint8_t RESERVED0                       : 7;
    __IO uint8_t P07                        : 1;
} stc_gpio_pu0_field_t;

typedef struct
{
    __IO uint8_t P10                        : 1;
    __IO uint8_t P11                        : 1;
    __IO uint8_t P12                        : 1;
    __IO uint8_t P13                        : 1;
    __IO uint8_t P14                        : 1;
    __IO uint8_t P15                        : 1;
    __IO uint8_t P16                        : 1;
} stc_gpio_pu1_field_t;

typedef struct
{
    __IO uint8_t P30                        : 1;
    __IO uint8_t P31                        : 1;
    __IO uint8_t P32                        : 1;
} stc_gpio_pu3_field_t;

typedef struct
{
    __IO uint8_t P40                        : 1;
    __IO uint8_t P41                        : 1;
    __IO uint8_t P42                        : 1;
    __IO uint8_t P43                        : 1;
    __IO uint8_t P44                        : 1;
    __IO uint8_t P45                        : 1;
    __IO uint8_t P46                        : 1;
} stc_gpio_pu4_field_t;

typedef struct
{
    __IO uint8_t P60                        : 1;
    __IO uint8_t P61                        : 1;
} stc_gpio_pu6_field_t;

typedef struct
{
    __IO uint8_t P70                        : 1;
    __IO uint8_t P71                        : 1;
    __IO uint8_t P72                        : 1;
    __IO uint8_t P73                        : 1;
    __IO uint8_t P74                        : 1;
    __IO uint8_t P75                        : 1;
} stc_gpio_pu7_field_t;

typedef struct
{
    uint8_t RESERVED0                       : 7;
    __IO uint8_t P07                        : 1;
} stc_gpio_dir0_field_t;

typedef struct
{
    __IO uint8_t P10                        : 1;
    __IO uint8_t P11                        : 1;
    __IO uint8_t P12                        : 1;
    __IO uint8_t P13                        : 1;
    __IO uint8_t P14                        : 1;
    __IO uint8_t P15                        : 1;
    __IO uint8_t P16                        : 1;
} stc_gpio_dir1_field_t;

typedef struct
{
    __IO uint8_t P20                        : 1;
} stc_gpio_dir2_field_t;

typedef struct
{
    __IO uint8_t P30                        : 1;
    __IO uint8_t P31                        : 1;
    __IO uint8_t P32                        : 1;
} stc_gpio_dir3_field_t;

typedef struct
{
    __IO uint8_t P40                        : 1;
    __IO uint8_t P41                        : 1;
    __IO uint8_t P42                        : 1;
    __IO uint8_t P43                        : 1;
    __IO uint8_t P44                        : 1;
    __IO uint8_t P45                        : 1;
    __IO uint8_t P46                        : 1;
} stc_gpio_dir4_field_t;

typedef struct
{
    __IO uint8_t P60                        : 1;
    __IO uint8_t P61                        : 1;
} stc_gpio_dir6_field_t;

typedef struct
{
    __IO uint8_t P70                        : 1;
    __IO uint8_t P71                        : 1;
    __IO uint8_t P72                        : 1;
    __IO uint8_t P73                        : 1;
    __IO uint8_t P74                        : 1;
    __IO uint8_t P75                        : 1;
} stc_gpio_dir7_field_t;

typedef struct
{
    uint8_t RESERVED0                       : 7;
    __IO uint8_t P07                        : 1;
} stc_gpio_get0_field_t;

typedef struct
{
    __IO uint8_t P10                        : 1;
    __IO uint8_t P11                        : 1;
    __IO uint8_t P12                        : 1;
    __IO uint8_t P13                        : 1;
    __IO uint8_t P14                        : 1;
    __IO uint8_t P15                        : 1;
    __IO uint8_t P16                        : 1;
} stc_gpio_get1_field_t;

typedef struct
{
    __IO uint8_t P20                        : 1;
} stc_gpio_get2_field_t;

typedef struct
{
    __IO uint8_t P30                        : 1;
    __IO uint8_t P31                        : 1;
    __IO uint8_t P32                        : 1;
} stc_gpio_get3_field_t;

typedef struct
{
    __IO uint8_t P40                        : 1;
    __IO uint8_t P41                        : 1;
    __IO uint8_t P42                        : 1;
    __IO uint8_t P43                        : 1;
    __IO uint8_t P44                        : 1;
    __IO uint8_t P45                        : 1;
    __IO uint8_t P46                        : 1;
} stc_gpio_get4_field_t;

typedef struct
{
    __IO uint8_t P60                        : 1;
    __IO uint8_t P61                        : 1;
} stc_gpio_get6_field_t;

typedef struct
{
    __IO uint8_t P70                        : 1;
    __IO uint8_t P71                        : 1;
    __IO uint8_t P72                        : 1;
    __IO uint8_t P73                        : 1;
    __IO uint8_t P74                        : 1;
    __IO uint8_t P75                        : 1;
} stc_gpio_get7_field_t;

typedef struct
{
    uint8_t RESERVED0                       : 7;
    __IO uint8_t P07                        : 1;
} stc_gpio_set0_field_t;

typedef struct
{
    __IO uint8_t P10                        : 1;
    __IO uint8_t P11                        : 1;
    __IO uint8_t P12                        : 1;
    __IO uint8_t P13                        : 1;
    __IO uint8_t P14                        : 1;
    __IO uint8_t P15                        : 1;
    __IO uint8_t P16                        : 1;
} stc_gpio_set1_field_t;

typedef struct
{
    __IO uint8_t P20                        : 1;
} stc_gpio_set2_field_t;

typedef struct
{
    __IO uint8_t P30                        : 1;
    __IO uint8_t P31                        : 1;
    __IO uint8_t P32                        : 1;
} stc_gpio_set3_field_t;

typedef struct
{
    __IO uint8_t P40                        : 1;
    __IO uint8_t P41                        : 1;
    __IO uint8_t P42                        : 1;
    __IO uint8_t P43                        : 1;
    __IO uint8_t P44                        : 1;
    __IO uint8_t P45                        : 1;
    __IO uint8_t P46                        : 1;
} stc_gpio_set4_field_t;

typedef struct
{
    __IO uint8_t P60                        : 1;
    __IO uint8_t P61                        : 1;
} stc_gpio_set6_field_t;

typedef struct
{
    __IO uint8_t P70                        : 1;
    __IO uint8_t P71                        : 1;
    __IO uint8_t P72                        : 1;
    __IO uint8_t P73                        : 1;
    __IO uint8_t P74                        : 1;
    __IO uint8_t P75                        : 1;
} stc_gpio_set7_field_t;

typedef struct
{
    __IO uint32_t ADE00                     : 1;
    __IO uint32_t ADE01                     : 1;
    __IO uint32_t ADE02                     : 1;
    __IO uint32_t ADE03                     : 1;
    uint32_t RESERVED4                      : 4;
    __IO uint32_t ADE08                     : 1;
    __IO uint32_t ADE09                     : 1;
    __IO uint32_t ADE10                     : 1;
    __IO uint32_t ADE11                     : 1;
    __IO uint32_t ADE12                     : 1;
    __IO uint32_t ADE13                     : 1;
    __IO uint32_t ADE14                     : 1;
    __IO uint32_t ADE15                     : 1;
    __IO uint32_t ADE16                     : 1;
    __IO uint32_t ADE17                     : 1;
    __IO uint32_t ADE18                     : 1;
    __IO uint32_t ADE19                     : 1;
    __IO uint32_t ADE20                     : 1;
    __IO uint32_t ADE21                     : 1;
    __IO uint32_t ADE22                     : 1;
    __IO uint32_t ADE23                     : 1;
} stc_gpio_analog_field_t;

typedef struct
{
    __IO uint8_t SUBCS                      : 2;
    __IO uint8_t MAINCS                     : 2;
} stc_gpio_sps_field_t;

typedef struct
{
    __IO uint32_t NMIS                      : 1;
    __IO uint32_t CROUTE                    : 2;
    uint32_t RESERVED3                      : 5;
    __IO uint32_t SWDEN                     : 1;
} stc_gpio_fn_sel00_field_t;

typedef struct
{
    __IO uint32_t PWM00E                    : 2;
    __IO uint32_t PWM01E                    : 2;
    __IO uint32_t PWM02E                    : 2;
    __IO uint32_t PWM03E                    : 2;
    __IO uint32_t PWM04E                    : 2;
    __IO uint32_t PWM05E                    : 2;
    __IO uint32_t EMII0C                    : 1;
    uint32_t RESERVED13                     : 3;
    __IO uint32_t EMII0S                    : 1;
    uint32_t RESERVED17                     : 1;
    __IO uint32_t EXCK0S                    : 1;
} stc_gpio_fn_sel01_field_t;

typedef struct
{
    uint32_t RESERVED0                      : 2;
    __IO uint32_t TIOA0E                    : 2;
    __IO uint32_t TIOB0S                    : 3;
    uint32_t RESERVED7                      : 1;
    __IO uint32_t TIOA1S                    : 2;
    __IO uint32_t TIOA1E                    : 2;
    __IO uint32_t TIOB1S                    : 2;
    uint32_t RESERVED14                     : 4;
    __IO uint32_t TIOA2E                    : 2;
    __IO uint32_t TIOB2S                    : 3;
    uint32_t RESERVED23                     : 1;
    __IO uint32_t TIOA3S                    : 2;
    __IO uint32_t TIOA3E                    : 2;
    __IO uint32_t TIOB3S                    : 2;
} stc_gpio_fn_sel02_field_t;

typedef struct
{
    __IO uint32_t EINT00S                   : 2;
    __IO uint32_t EINT01S                   : 2;
    __IO uint32_t EINT02S                   : 2;
    __IO uint32_t EINT03S                   : 2;
    __IO uint32_t EINT04S                   : 2;
    __IO uint32_t EINT05S                   : 2;
    __IO uint32_t EINT06S                   : 2;
    __IO uint32_t EINT07S                   : 2;
    __IO uint32_t EINT08S                   : 2;
    __IO uint32_t EINT09S                   : 2;
    __IO uint32_t EINT10S                   : 2;
    __IO uint32_t EINT11S                   : 2;
    __IO uint32_t EINT12S                   : 2;
    __IO uint32_t EINT13S                   : 2;
    __IO uint32_t EINT14S                   : 2;
    __IO uint32_t EINT15S                   : 2;
} stc_gpio_fn_sel04_field_t;

typedef struct
{
    __IO uint32_t RTS4E                     : 2;
    __IO uint32_t CTS4S                     : 2;
    __IO uint32_t SIN4S                     : 2;
    __IO uint32_t SOT4B                     : 2;
    __IO uint32_t SCK4B                     : 2;
    __IO uint32_t SCS40B                    : 2;
    __IO uint32_t SCS41E                    : 2;
    uint32_t RESERVED14                     : 6;
    __IO uint32_t SIN5S                     : 2;
    __IO uint32_t SOT5B                     : 2;
    __IO uint32_t SCK5B                     : 2;
    __IO uint32_t SCS50B                    : 2;
} stc_gpio_fn_sel07_field_t;

typedef struct
{
    __IO uint32_t RTS6E                     : 2;
    __IO uint32_t CTS6S                     : 2;
    __IO uint32_t SIN6S                     : 2;
    __IO uint32_t SOT6B                     : 2;
    __IO uint32_t SCK6B                     : 2;
    __IO uint32_t SCS60B                    : 2;
    __IO uint32_t SCS61E                    : 2;
    __IO uint32_t SCS62E                    : 2;
} stc_gpio_fn_sel08_field_t;

typedef struct
{
    __IO uint32_t VCOE                      : 2;
    uint32_t RESERVED2                      :22;
    __IO uint32_t ADTGS                     : 1;
} stc_gpio_fn_sel09_field_t;

typedef struct
{
    uint8_t RESERVED0                       : 7;
    __IO uint8_t P07                        : 1;
} stc_gpio_odr0_field_t;

typedef struct
{
    __IO uint8_t P10                        : 1;
    __IO uint8_t P11                        : 1;
    __IO uint8_t P12                        : 1;
    __IO uint8_t P13                        : 1;
    __IO uint8_t P14                        : 1;
    __IO uint8_t P15                        : 1;
    __IO uint8_t P16                        : 1;
} stc_gpio_odr1_field_t;

typedef struct
{
    __IO uint8_t P20                        : 1;
} stc_gpio_odr2_field_t;

typedef struct
{
    __IO uint8_t P30                        : 1;
    __IO uint8_t P31                        : 1;
    __IO uint8_t P32                        : 1;
} stc_gpio_odr3_field_t;

typedef struct
{
    __IO uint8_t P40                        : 1;
    __IO uint8_t P41                        : 1;
    __IO uint8_t P42                        : 1;
    __IO uint8_t P43                        : 1;
    __IO uint8_t P44                        : 1;
    __IO uint8_t P45                        : 1;
    __IO uint8_t P46                        : 1;
} stc_gpio_odr4_field_t;

typedef struct
{
    __IO uint8_t P60                        : 1;
    __IO uint8_t P61                        : 1;
} stc_gpio_odr6_field_t;

typedef struct
{
    __IO uint8_t P70                        : 1;
    __IO uint8_t P71                        : 1;
    __IO uint8_t P72                        : 1;
    __IO uint8_t P73                        : 1;
    __IO uint8_t P74                        : 1;
    __IO uint8_t P75                        : 1;
} stc_gpio_odr7_field_t;

typedef struct
{
    uint8_t RESERVED0                       : 7;
    __IO uint8_t P07                        : 1;
} stc_gpio_fsete0_field_t;

typedef struct
{
    __IO uint8_t P10                        : 1;
    __IO uint8_t P11                        : 1;
    __IO uint8_t P12                        : 1;
    __IO uint8_t P13                        : 1;
    __IO uint8_t P14                        : 1;
    __IO uint8_t P15                        : 1;
    __IO uint8_t P16                        : 1;
} stc_gpio_fsete1_field_t;

typedef struct
{
    __IO uint8_t P20                        : 1;
} stc_gpio_fsete2_field_t;

typedef struct
{
    __IO uint8_t P30                        : 1;
    __IO uint8_t P31                        : 1;
    __IO uint8_t P32                        : 1;
} stc_gpio_fsete3_field_t;

typedef struct
{
    __IO uint8_t P40                        : 1;
    __IO uint8_t P41                        : 1;
    __IO uint8_t P42                        : 1;
    __IO uint8_t P43                        : 1;
    __IO uint8_t P44                        : 1;
    __IO uint8_t P45                        : 1;
    __IO uint8_t P46                        : 1;
} stc_gpio_fsete4_field_t;

typedef struct
{
    __IO uint8_t P60                        : 1;
    __IO uint8_t P61                        : 1;
} stc_gpio_fsete6_field_t;

typedef struct
{
    __IO uint8_t P70                        : 1;
    __IO uint8_t P71                        : 1;
    __IO uint8_t P72                        : 1;
    __IO uint8_t P73                        : 1;
    __IO uint8_t P74                        : 1;
    __IO uint8_t P75                        : 1;
} stc_gpio_fsete7_field_t;

typedef struct
{
    __IO uint8_t IE                         : 1;
    __IO uint8_t RSTEN                      : 1;
} stc_hwwdt_wdt_ctl_field_t;

typedef struct
{
    __IO uint8_t STA                        : 1;
} stc_hwwdt_wdt_sta_field_t;

typedef struct
{
    uint32_t RESERVED0                      : 5;
    __IO uint32_t AD0IS                     : 1;
    uint32_t RESERVED6                      : 2;
    __IO uint32_t CT0IS                     : 1;
    __IO uint32_t CT2IS                     : 1;
    uint32_t RESERVED10                     :10;
    __IO uint32_t MSC4RXIS                  : 1;
    __IO uint32_t MSC4TXIS                  : 1;
    __IO uint32_t MSC5RXIS                  : 1;
    __IO uint32_t MSC5TXIS                  : 1;
    __IO uint32_t MSC6RXIS                  : 1;
    __IO uint32_t MSC6TXIS                  : 1;
    uint32_t RESERVED26                     : 2;
    __IO uint32_t E0IS                      : 1;
    __IO uint32_t E1IS                      : 1;
    __IO uint32_t E2IS                      : 1;
    __IO uint32_t E3IS                      : 1;
} stc_irqc_irq_dsel_field_t;

typedef struct
{
    __IO uint32_t NMI                       : 1;
    __IO uint32_t HWWDG                     : 1;
} stc_irqc_irq_st02_field_t;

typedef struct
{
    __IO uint32_t AFDI                      : 1;
} stc_irqc_irq00pend_field_t;

typedef struct
{
    __IO uint32_t SWWDG                     : 1;
} stc_irqc_irq01pend_field_t;

typedef struct
{
    __IO uint32_t LVD                       : 1;
} stc_irqc_irq02pend_field_t;

typedef struct
{
    __IO uint32_t MEMIF                     : 1;
    __IO uint32_t WOU10                     : 1;
    __IO uint32_t WOU32                     : 1;
    __IO uint32_t WOU54                     : 1;
} stc_irqc_irq03pend_field_t;

typedef struct
{
    __IO uint32_t EXTI0                     : 1;
    __IO uint32_t EXTI1                     : 1;
    __IO uint32_t EXTI2                     : 1;
    __IO uint32_t EXTI3                     : 1;
    __IO uint32_t EXTI4                     : 1;
    __IO uint32_t EXTI5                     : 1;
    __IO uint32_t EXTI6                     : 1;
    __IO uint32_t EXTI7                     : 1;
} stc_irqc_irq04pend_field_t;

typedef struct
{
    __IO uint32_t EXTI8                     : 1;
    __IO uint32_t EXTI9                     : 1;
    __IO uint32_t EXTI10                    : 1;
    __IO uint32_t EXTI11                    : 1;
    __IO uint32_t EXTI12                    : 1;
    __IO uint32_t EXTI13                    : 1;
    __IO uint32_t EXTI14                    : 1;
    __IO uint32_t EXTI15                    : 1;
} stc_irqc_irq05pend_field_t;

typedef struct
{
    __IO uint32_t DT1                       : 2;
} stc_irqc_irq06pend_field_t;

typedef struct
{
    __IO uint32_t MSC4INT                   : 1;
} stc_irqc_irq15pend_field_t;

typedef struct
{
    __IO uint32_t MSC4INT                   : 2;
} stc_irqc_irq16pend_field_t;

typedef struct
{
    __IO uint32_t MSC5NT                    : 1;
} stc_irqc_irq17pend_field_t;

typedef struct
{
    __IO uint32_t MSC5INT                   : 2;
} stc_irqc_irq18pend_field_t;

typedef struct
{
    __IO uint32_t MSC6INT                   : 1;
    uint32_t RESERVED1                      : 3;
    __IO uint32_t DMA0INT                   : 1;
} stc_irqc_irq19pend_field_t;

typedef struct
{
    __IO uint32_t MSC6INT                   : 1;
    uint32_t RESERVED1                      : 3;
    __IO uint32_t DMA1INT                   : 1;
} stc_irqc_irq20pend_field_t;

typedef struct
{
    __IO uint32_t MOSCI                     : 1;
    __IO uint32_t SOSCI                     : 1;
    __IO uint32_t MPLLI                     : 1;
    uint32_t RESERVED3                      : 1;
    __IO uint32_t WCI                       : 1;
    uint32_t RESERVED5                      : 1;
    __IO uint32_t MSWKUP                    : 1;
    __IO uint32_t RAMI                      : 1;
} stc_irqc_irq24pend_field_t;

typedef struct
{
    __IO uint32_t ADCI                      : 5;
} stc_irqc_irq25pend_field_t;

typedef struct
{
    uint32_t RESERVED0                      : 5;
    __IO uint32_t VCI                       : 1;
} stc_irqc_irq26pend_field_t;

typedef struct
{
    __IO uint32_t TPI                       : 1;
    uint32_t RESERVED1                      : 2;
    __IO uint32_t TZI                       : 1;
} stc_irqc_irq28pend_field_t;

typedef struct
{
    __IO uint32_t OCMPU0                    : 1;
    __IO uint32_t OCMPU1                    : 1;
    __IO uint32_t OCMPU2                    : 1;
    __IO uint32_t OCMPU3                    : 1;
    __IO uint32_t OCMPU4                    : 1;
    __IO uint32_t OCMPU5                    : 1;
} stc_irqc_irq30pend_field_t;

typedef struct
{
    __IO uint32_t CTI0IRQ                   : 1;
    __IO uint32_t CTI1IRQ                   : 1;
    __IO uint32_t CTI2IRQ                   : 1;
    __IO uint32_t CTI3IRQ                   : 1;
    __IO uint32_t CTI4IRQ                   : 1;
    __IO uint32_t CTI5IRQ                   : 1;
    __IO uint32_t CTI6IRQ                   : 1;
    __IO uint32_t CTI7IRQ                   : 1;
    uint32_t RESERVED8                      :19;
    __IO uint32_t FLASHI                    : 1;
} stc_irqc_irq31pend_field_t;

typedef struct
{
    uint8_t RESERVED0                       : 2;
    __IO uint8_t TXIE                       : 1;
    __IO uint8_t RXIE                       : 1;
    uint8_t RESERVED4                       : 1;
    __IO uint8_t MODE                       : 3;
} stc_msc_i2c_mr_field_t;

typedef struct
{
    __IO uint8_t INTF                       : 1;
    __IO uint8_t BERF                       : 1;
    __IO uint8_t INTE                       : 1;
    __IO uint8_t CNDDIE                     : 1;
    __IO uint8_t WTSEL                      : 1;
    __IO uint8_t ACKE                       : 1;
    __IO uint8_t OFITS                      : 1;
    __IO uint8_t MSS                        : 1;
} stc_msc_i2c_bc_field_t;

typedef struct
{
    __IO uint8_t BSS                        : 1;
    __IO uint8_t STPCC                      : 1;
    __IO uint8_t ITSCC                      : 1;
    __IO uint8_t ABL                        : 1;
    __IO uint8_t TRX                        : 1;
    __IO uint8_t RAD                        : 1;
    __IO uint8_t ACKF                       : 1;
    __IO uint8_t FBB                        : 1;
} stc_msc_i2c_bs_field_t;

typedef struct
{
    __IO uint8_t TBIF                       : 1;
    __IO uint8_t TDEF                       : 1;
    __IO uint8_t RDFF                       : 1;
    __IO uint8_t ORF                        : 1;
    __IO uint8_t TBIIE                      : 1;
    __IO uint8_t DMAE                       : 1;
    __IO uint8_t TEFS                       : 1;
    __IO uint8_t RECLR                      : 1;
} stc_msc_i2c_sr_field_t;

typedef struct
{
    __IO uint16_t BRS                       :15;
} stc_msc_i2c_brs_field_t;

typedef struct
{
    __IO uint8_t ADDR                       : 7;
    __IO uint8_t AE                         : 1;
} stc_msc_i2c_sa_field_t;

typedef struct
{
    __IO uint8_t MSK                        : 7;
    __IO uint8_t EN                         : 1;
} stc_msc_i2c_samsk_field_t;

typedef struct
{
    __IO uint8_t BEC                        : 1;
    __IO uint8_t DOE                        : 1;
    __IO uint8_t SCLOC                      : 1;
    __IO uint8_t SDAOC                      : 1;
    __IO uint8_t SCLS                       : 1;
    __IO uint8_t SDAS                       : 1;
} stc_msc_i2c_ebcr_field_t;

typedef struct
{
    __IO uint8_t DOE                        : 1;
    __IO uint8_t CKE                        : 1;
    __IO uint8_t TDS                        : 1;
    __IO uint8_t CINV                       : 1;
    uint8_t RESERVED4                       : 1;
    __IO uint8_t MODE                       : 3;
} stc_msc_spi_mr_field_t;

typedef struct
{
    __IO uint8_t TXE                        : 1;
    __IO uint8_t RXE                        : 1;
    __IO uint8_t TBIE                       : 1;
    __IO uint8_t TXIE                       : 1;
    __IO uint8_t RXIE                       : 1;
    __IO uint8_t SPIMODE                    : 1;
    __IO uint8_t MSS                        : 1;
    __IO uint8_t PCL                        : 1;
} stc_msc_spi_cr_field_t;

typedef struct
{
    __IO uint8_t DL                         : 3;
    __IO uint8_t DTRWS                      : 2;
    __IO uint8_t CSFE                       : 1;
    __IO uint8_t DL3                        : 1;
    __IO uint8_t SOPS                       : 1;
} stc_msc_spi_ecr_field_t;

typedef struct
{
    __IO uint8_t TBIF                       : 1;
    __IO uint8_t TDEF                       : 1;
    __IO uint8_t RDFF                       : 1;
    __IO uint8_t ORF                        : 1;
    uint8_t RESERVED4                       : 3;
    __IO uint8_t RECLR                      : 1;
} stc_msc_spi_sr_field_t;

typedef struct
{
    __IO uint16_t BRS                       :15;
} stc_msc_spi_brs_field_t;

typedef struct
{
    __IO uint8_t CSHDLY                     : 8;
} stc_msc_spi_cstmg0_field_t;

typedef struct
{
    __IO uint8_t CSSDLY                     : 8;
} stc_msc_spi_cstmg1_field_t;

typedef struct
{
    __IO uint16_t CSDS                      :16;
} stc_msc_spi_cstmg32_field_t;

typedef struct
{
    __IO uint16_t TMRE                      : 1;
    __IO uint16_t CLKDIV                    : 4;
    uint16_t RESERVED5                      : 1;
    __IO uint16_t SYNTE                     : 1;
    __IO uint16_t TIE                       : 1;
    __IO uint16_t TIF                       : 1;
    uint16_t RESERVED9                      : 2;
    __IO uint16_t CSER                      : 1;
    __IO uint16_t CSEIE                     : 1;
    __IO uint16_t TBEE                      : 1;
} stc_msc_spi_eacr_field_t;

typedef struct
{
    __IO uint16_t TMR                       :16;
} stc_msc_spi_tmr_field_t;

typedef struct
{
    __IO uint16_t TMC                       :16;
} stc_msc_spi_tmc_field_t;

typedef struct
{
    __IO uint16_t CSOE                      : 1;
    __IO uint16_t CSEN0                     : 1;
    __IO uint16_t CSEN1                     : 1;
    __IO uint16_t CSEN2                     : 1;
    __IO uint16_t CSEN3                     : 1;
    __IO uint16_t CSLVS                     : 1;
    __IO uint16_t CSTODIV                   : 3;
    __IO uint16_t CSAH                      : 1;
    __IO uint16_t CASD                      : 2;
    __IO uint16_t CSAE                      : 2;
    __IO uint16_t CSAS                      : 2;
} stc_msc_spi_cscr_field_t;

typedef struct
{
    __IO uint8_t CS1DL                      : 4;
    __IO uint8_t CS1TDS                     : 1;
    __IO uint8_t CS1SPI                     : 1;
    __IO uint8_t CS1CINV                    : 1;
    __IO uint8_t CS1CSLVS                   : 1;
} stc_msc_spi_csfr0_field_t;

typedef struct
{
    __IO uint8_t CS2DL                      : 4;
    __IO uint8_t CS2TDS                     : 1;
    __IO uint8_t CS2SPI                     : 1;
    __IO uint8_t CS2CINV                    : 1;
    __IO uint8_t CS2CSLVS                   : 1;
} stc_msc_spi_csfr1_field_t;

typedef struct
{
    __IO uint8_t CS3DL                      : 4;
    __IO uint8_t CS3TDS                     : 1;
    __IO uint8_t CS3SPI                     : 1;
    __IO uint8_t CS3CINV                    : 1;
    __IO uint8_t CS3CSLVS                   : 1;
} stc_msc_spi_csfr2_field_t;

typedef struct
{
    __IO uint8_t TDTCNT0                    : 8;
} stc_msc_spi_tdtcnt0_field_t;

typedef struct
{
    __IO uint8_t TDTCNT1                    : 8;
} stc_msc_spi_tdtcnt1_field_t;

typedef struct
{
    __IO uint8_t TDTCNT2                    : 8;
} stc_msc_spi_tdtcnt2_field_t;

typedef struct
{
    __IO uint8_t TDTCNT3                    : 8;
} stc_msc_spi_tdtcnt3_field_t;

typedef struct
{
    __IO uint8_t DOE                        : 1;
    uint8_t RESERVED1                       : 1;
    __IO uint8_t TDS                        : 1;
    __IO uint8_t SBLS                       : 1;
    uint8_t RESERVED4                       : 1;
    __IO uint8_t MODE                       : 3;
} stc_msc_uart_mr_field_t;

typedef struct
{
    __IO uint8_t TXE                        : 1;
    __IO uint8_t RXE                        : 1;
    __IO uint8_t TBIE                       : 1;
    __IO uint8_t TXIE                       : 1;
    __IO uint8_t RXIE                       : 1;
    uint8_t RESERVED5                       : 2;
    __IO uint8_t PCL                        : 1;
} stc_msc_uart_cr_field_t;

typedef struct
{
    __IO uint8_t DL                         : 3;
    __IO uint8_t PS                         : 1;
    __IO uint8_t PE                         : 1;
    __IO uint8_t INV                        : 1;
    __IO uint8_t ESBLS                      : 1;
    __IO uint8_t FCEB                       : 1;
} stc_msc_uart_ecr_field_t;

typedef struct
{
    __IO uint8_t TBIF                       : 1;
    __IO uint8_t TDEF                       : 1;
    __IO uint8_t RDFF                       : 1;
    __IO uint8_t ORF                        : 1;
    __IO uint8_t FEF                        : 1;
    __IO uint8_t PEF                        : 1;
    uint8_t RESERVED6                       : 1;
    __IO uint8_t RECLR                      : 1;
} stc_msc_uart_sr_field_t;

typedef struct
{
    __IO uint16_t BRS                       :15;
    __IO uint16_t EXT                       : 1;
} stc_msc_uart_brs_field_t;

typedef struct
{
    __IO uint16_t COMP                      :10;
    uint16_t RESERVED10                     : 5;
    __IO uint16_t CE                        : 1;
} stc_msc_uart_comp_field_t;

typedef struct
{
    __IO uint32_t AC_ST                     :32;
} stc_mtb_dwt_acstr_field_t;

typedef struct
{
    __IO uint32_t DC_ST                     :32;
} stc_mtb_dwt_dcstr_field_t;

typedef struct
{
    __IO uint32_t MDC_ST                    :32;
} stc_mtb_dwt_mdcstr_field_t;

typedef struct
{
    __IO uint32_t AC_SP                     :32;
} stc_mtb_dwt_acspr_field_t;

typedef struct
{
    __IO uint32_t DC_SP                     :32;
} stc_mtb_dwt_dcspr_field_t;

typedef struct
{
    __IO uint32_t MDC_SP                    :32;
} stc_mtb_dwt_mdcspr_field_t;

typedef struct
{
    __IO uint8_t STAEN                      : 2;
    __IO uint8_t STPEN                      : 2;
    __IO uint8_t DSTA                       : 2;
    __IO uint8_t DSTP                       : 2;
} stc_mtb_dwt_fct_field_t;

typedef struct
{
    __IO uint32_t PERID                     :32;
} stc_mtb_dwt_pid4_field_t;

typedef struct
{
    __IO uint32_t PERID                     :32;
} stc_mtb_dwt_pid5_field_t;

typedef struct
{
    __IO uint32_t PERID                     :32;
} stc_mtb_dwt_pid6_field_t;

typedef struct
{
    __IO uint32_t PERID                     :32;
} stc_mtb_dwt_pid7_field_t;

typedef struct
{
    __IO uint32_t PERID                     :32;
} stc_mtb_dwt_pid0_field_t;

typedef struct
{
    __IO uint32_t PERID                     :32;
} stc_mtb_dwt_pid1_field_t;

typedef struct
{
    __IO uint32_t PERID                     :32;
} stc_mtb_dwt_pid2_field_t;

typedef struct
{
    __IO uint32_t PERID                     :32;
} stc_mtb_dwt_pid3_field_t;

typedef struct
{
    __IO uint32_t CPNTID                    :32;
} stc_mtb_dwt_cid0_field_t;

typedef struct
{
    __IO uint32_t CPNTID                    :32;
} stc_mtb_dwt_cid1_field_t;

typedef struct
{
    __IO uint32_t CPNTID                    :32;
} stc_mtb_dwt_cid2_field_t;

typedef struct
{
    __IO uint32_t CPNTID                    :32;
} stc_mtb_dwt_cid3_field_t;

typedef struct
{
    __IO uint8_t OPA_EN                     : 1;
} stc_opa_ctl_field_t;

typedef struct
{
    __IO uint32_t TRMKEY                    :32;
} stc_osc_ctl_hicr_trmkey_field_t;

typedef struct
{
    __IO uint32_t CR4MFTRM                  : 8;
} stc_osc_ctl_hicr_ftrm_field_t;

typedef struct
{
    __IO uint32_t CR4MTTRM                  : 4;
} stc_osc_ctl_hicr_ttrm_field_t;

typedef struct
{
    __IO uint8_t FDIV                       : 3;
} stc_osc_ctl_hicr_fdiv_field_t;

typedef struct
{
    __IO uint32_t HXSEL                     : 2;
    uint32_t RESERVED2                      :14;
    __IO uint32_t HIBS                      : 2;
} stc_osc_ctl_hsxt_pwrctl_field_t;

typedef struct
{
    uint32_t RESERVED0                      :16;
    __IO uint32_t LIBS                      : 3;
} stc_osc_ctl_lsxt_pwrctl_field_t;

typedef struct
{
    __IO uint8_t PE                         : 1;
    __IO uint8_t PIE                        : 1;
    uint8_t RESERVED2                       : 2;
    __IO uint8_t PERROR                     : 1;
} stc_parity_ctl_field_t;

typedef struct
{
    __IO uint32_t ADDR                      :32;
} stc_parity_addr_field_t;

typedef struct
{
    uint32_t RESERVED0                      : 4;
    __IO uint32_t MSC4CK                    : 1;
    __IO uint32_t MSC5CK                    : 1;
    __IO uint32_t MSC6CK                    : 1;
    uint32_t RESERVED7                      : 9;
    __IO uint32_t ADCCK                     : 1;
    uint32_t RESERVED17                     : 7;
    __IO uint32_t DMACK                     : 1;
    uint32_t RESERVED25                     : 3;
    __IO uint32_t GIOCK                     : 1;
} stc_pcg_clken0_field_t;

typedef struct
{
    uint32_t RESERVED0                      : 4;
    __IO uint32_t MSC4RST                   : 1;
    __IO uint32_t MSC5RST                   : 1;
    __IO uint32_t MSC6RST                   : 1;
    uint32_t RESERVED7                      : 9;
    __IO uint32_t ADCRST                    : 1;
    uint32_t RESERVED17                     : 7;
    __IO uint32_t DMARST                    : 1;
} stc_pcg_rstctl0_field_t;

typedef struct
{
    __IO uint32_t CTCK                      : 1;
    uint32_t RESERVED1                      : 3;
    __IO uint32_t VCCK                      : 1;
    uint32_t RESERVED5                      : 3;
    __IO uint32_t TM4CK                     : 1;
    uint32_t RESERVED9                      : 3;
    __IO uint32_t OPA0CK                    : 1;
    __IO uint32_t OPA1CK                    : 1;
} stc_pcg_clken1_field_t;

typedef struct
{
    __IO uint32_t CTMRST                    : 1;
    uint32_t RESERVED1                      : 3;
    __IO uint32_t VCRST                     : 1;
    uint32_t RESERVED5                      : 3;
    __IO uint32_t TM4RST                    : 1;
    uint32_t RESERVED9                      : 3;
    __IO uint32_t OPA0RST                   : 1;
    __IO uint32_t OPA1RST                   : 1;
} stc_pcg_rstctl1_field_t;

typedef struct
{
    __IO uint8_t IE                         : 1;
    __IO uint8_t RSTEN                      : 1;
    __IO uint8_t TMWD                       : 2;
    __IO uint8_t WDM                        : 1;
} stc_swwdt_wdt_ctl_field_t;

typedef struct
{
    __IO uint8_t STA                        : 1;
} stc_swwdt_wdt_sta_field_t;

typedef struct
{
    __IO uint8_t TRG                        : 1;
} stc_swwdt_wdt_mdc_field_t;

typedef struct
{
    __IO uint8_t OCE0                       : 1;
    __IO uint8_t OCE1                       : 1;
    __IO uint8_t OCP0                       : 1;
    __IO uint8_t OCP1                       : 1;
    __IO uint8_t OCIE0                      : 1;
    __IO uint8_t OCIE1                      : 1;
    __IO uint8_t OCF0                       : 1;
    __IO uint8_t OCF1                       : 1;
} stc_timer4_ocsr10_field_t;

typedef struct
{
    __IO uint16_t C0BUFEN                   : 2;
    __IO uint16_t C1BUFEN                   : 2;
    __IO uint16_t M0BUFEN                   : 2;
    __IO uint16_t M1BUFEN                   : 2;
    __IO uint16_t LMC0                      : 1;
    __IO uint16_t LMC1                      : 1;
    __IO uint16_t LMM0                      : 1;
    __IO uint16_t LMM1                      : 1;
    __IO uint16_t MCEC0                     : 1;
    __IO uint16_t MCEC1                     : 1;
} stc_timer4_ocer10_field_t;

typedef struct
{
    __IO uint8_t OCE0                       : 1;
    __IO uint8_t OCE1                       : 1;
    __IO uint8_t OCP0                       : 1;
    __IO uint8_t OCP1                       : 1;
    __IO uint8_t OCIE0                      : 1;
    __IO uint8_t OCIE1                      : 1;
    __IO uint8_t OCF0                       : 1;
    __IO uint8_t OCF1                       : 1;
} stc_timer4_ocsr32_field_t;

typedef struct
{
    __IO uint16_t C0BUFEN                   : 2;
    __IO uint16_t C1BUFEN                   : 2;
    __IO uint16_t M0BUFEN                   : 2;
    __IO uint16_t M1BUFEN                   : 2;
    __IO uint16_t LMC0                      : 1;
    __IO uint16_t LMC1                      : 1;
    __IO uint16_t LMM0                      : 1;
    __IO uint16_t LMM1                      : 1;
    __IO uint16_t MCEC0                     : 1;
    __IO uint16_t MCEC1                     : 1;
} stc_timer4_ocer32_field_t;

typedef struct
{
    __IO uint8_t OCE0                       : 1;
    __IO uint8_t OCE1                       : 1;
    __IO uint8_t OCP0                       : 1;
    __IO uint8_t OCP1                       : 1;
    __IO uint8_t OCIE0                      : 1;
    __IO uint8_t OCIE1                      : 1;
    __IO uint8_t OCF0                       : 1;
    __IO uint8_t OCF1                       : 1;
} stc_timer4_ocsr54_field_t;

typedef struct
{
    __IO uint16_t C0BUFEN                   : 2;
    __IO uint16_t C1BUFEN                   : 2;
    __IO uint16_t M0BUFEN                   : 2;
    __IO uint16_t M1BUFEN                   : 2;
    __IO uint16_t LMC0                      : 1;
    __IO uint16_t LMC1                      : 1;
    __IO uint16_t LMM0                      : 1;
    __IO uint16_t LMM1                      : 1;
    __IO uint16_t MCEC0                     : 1;
    __IO uint16_t MCEC1                     : 1;
} stc_timer4_ocer54_field_t;

typedef struct
{
    __IO uint16_t OCMR                      :16;
} stc_timer4_ocmr0_field_t;

typedef struct
{
    __IO uint32_t OCMR                      :32;
} stc_timer4_ocmr1_field_t;

typedef struct
{
    __IO uint16_t OCMR                      :16;
} stc_timer4_ocmr2_field_t;

typedef struct
{
    __IO uint32_t OCMR                      :32;
} stc_timer4_ocmr3_field_t;

typedef struct
{
    __IO uint16_t OCMR                      :16;
} stc_timer4_ocmr4_field_t;

typedef struct
{
    __IO uint32_t OCMR                      :32;
} stc_timer4_ocmr5_field_t;

typedef struct
{
    __IO uint16_t DCLK                      : 4;
    __IO uint16_t CLEAR                     : 1;
    __IO uint16_t CNTMD                     : 1;
    __IO uint16_t STOP                      : 1;
    __IO uint16_t BUFEN                     : 1;
    __IO uint16_t ICLEN                     : 1;
    __IO uint16_t ICLR                      : 1;
    uint16_t RESERVED10                     : 3;
    __IO uint16_t IRQZEN                    : 1;
    __IO uint16_t IRQZF                     : 1;
    __IO uint16_t ECKEN                     : 1;
} stc_timer4_ccsr_field_t;

typedef struct
{
    __IO uint16_t ZIM                       : 4;
    __IO uint16_t PIM                       : 4;
    __IO uint16_t ZIC                       : 4;
    __IO uint16_t PIC                       : 4;
} stc_timer4_cimr_field_t;

typedef struct
{
    __IO uint8_t DIVCK                      : 3;
    uint8_t RESERVED3                       : 1;
    __IO uint8_t WMD                        : 2;
    __IO uint8_t LVLS                       : 2;
} stc_timer4_pocr10_field_t;

typedef struct
{
    __IO uint8_t DIVCK                      : 3;
    uint8_t RESERVED3                       : 1;
    __IO uint8_t WMD                        : 2;
    __IO uint8_t LVLS                       : 2;
} stc_timer4_pocr32_field_t;

typedef struct
{
    __IO uint8_t DIVCK                      : 3;
    uint8_t RESERVED3                       : 1;
    __IO uint8_t WMD                        : 2;
    __IO uint8_t LVLS                       : 2;
} stc_timer4_pocr54_field_t;

typedef struct
{
    __IO uint16_t RTID10                    : 1;
    __IO uint16_t RTID32                    : 1;
    __IO uint16_t RTID54                    : 1;
    uint16_t RESERVED3                      : 1;
    __IO uint16_t RTIF10                    : 1;
    __IO uint16_t RTIC10                    : 1;
    __IO uint16_t RTE10                     : 1;
    __IO uint16_t RTS10                     : 1;
    __IO uint16_t RTIF32                    : 1;
    __IO uint16_t RTIC32                    : 1;
    __IO uint16_t RTE32                     : 1;
    __IO uint16_t RTS32                     : 1;
    __IO uint16_t RTIF54                    : 1;
    __IO uint16_t RTIC54                    : 1;
    __IO uint16_t RTE54                     : 1;
    __IO uint16_t RTS54                     : 1;
} stc_timer4_rcsr_field_t;

typedef struct
{
    __IO uint8_t BUFEN                      : 2;
    __IO uint8_t ADTRGS                     : 3;
    __IO uint8_t LMC                        : 1;
} stc_timer4_atcr0_field_t;

typedef struct
{
    __IO uint8_t TRGMD                      : 1;
    __IO uint8_t OCS                        : 1;
    uint8_t RESERVED2                       : 2;
    __IO uint8_t DEN                        : 1;
    __IO uint8_t PEN                        : 1;
    __IO uint8_t UEN                        : 1;
    __IO uint8_t ZEN                        : 1;
} stc_timer4_ater0_field_t;

typedef struct
{
    __IO uint8_t AMC                        : 4;
    uint8_t RESERVED4                       : 2;
    __IO uint8_t MZCE                       : 1;
    __IO uint8_t MPCE                       : 1;
} stc_timer4_atmr0_field_t;

typedef struct
{
    __IO uint8_t BUFEN                      : 2;
    __IO uint8_t ADTRGS                     : 3;
    __IO uint8_t LMC                        : 1;
} stc_timer4_atcr1_field_t;

typedef struct
{
    __IO uint8_t TRGMD                      : 1;
    __IO uint8_t OCS                        : 1;
    uint8_t RESERVED2                       : 2;
    __IO uint8_t DEN                        : 1;
    __IO uint8_t PEN                        : 1;
    __IO uint8_t UEN                        : 1;
    __IO uint8_t ZEN                        : 1;
} stc_timer4_ater1_field_t;

typedef struct
{
    __IO uint8_t AMC                        : 4;
    uint8_t RESERVED4                       : 2;
    __IO uint8_t MZCE                       : 1;
    __IO uint8_t MPCE                       : 1;
} stc_timer4_atmr1_field_t;

typedef struct
{
    __IO uint8_t BUFEN                      : 2;
    __IO uint8_t ADTRGS                     : 3;
    __IO uint8_t LMC                        : 1;
} stc_timer4_atcr2_field_t;

typedef struct
{
    __IO uint8_t TRGMD                      : 1;
    __IO uint8_t OCS                        : 1;
    uint8_t RESERVED2                       : 2;
    __IO uint8_t DEN                        : 1;
    __IO uint8_t PEN                        : 1;
    __IO uint8_t UEN                        : 1;
    __IO uint8_t ZEN                        : 1;
} stc_timer4_ater2_field_t;

typedef struct
{
    __IO uint8_t AMC                        : 4;
    uint8_t RESERVED4                       : 2;
    __IO uint8_t MZCE                       : 1;
    __IO uint8_t MPCE                       : 1;
} stc_timer4_atmr2_field_t;

typedef struct
{
    __IO uint8_t BUFEN                      : 2;
    __IO uint8_t ADTRGS                     : 3;
    __IO uint8_t LMC                        : 1;
} stc_timer4_atcr3_field_t;

typedef struct
{
    __IO uint8_t TRGMD                      : 1;
    __IO uint8_t OCS                        : 1;
    uint8_t RESERVED2                       : 2;
    __IO uint8_t DEN                        : 1;
    __IO uint8_t PEN                        : 1;
    __IO uint8_t UEN                        : 1;
    __IO uint8_t ZEN                        : 1;
} stc_timer4_ater3_field_t;

typedef struct
{
    __IO uint8_t AMC                        : 4;
    uint8_t RESERVED4                       : 2;
    __IO uint8_t MZCE                       : 1;
    __IO uint8_t MPCE                       : 1;
} stc_timer4_atmr3_field_t;

typedef struct
{
    __IO uint8_t BUFEN                      : 2;
    __IO uint8_t ADTRGS                     : 3;
    __IO uint8_t LMC                        : 1;
} stc_timer4_atcr4_field_t;

typedef struct
{
    __IO uint8_t TRGMD                      : 1;
    __IO uint8_t OCS                        : 1;
    uint8_t RESERVED2                       : 2;
    __IO uint8_t DEN                        : 1;
    __IO uint8_t PEN                        : 1;
    __IO uint8_t UEN                        : 1;
    __IO uint8_t ZEN                        : 1;
} stc_timer4_ater4_field_t;

typedef struct
{
    __IO uint8_t AMC                        : 4;
    uint8_t RESERVED4                       : 2;
    __IO uint8_t MZCE                       : 1;
    __IO uint8_t MPCE                       : 1;
} stc_timer4_atmr4_field_t;

typedef struct
{
    __IO uint8_t BUFEN                      : 2;
    __IO uint8_t ADTRGS                     : 3;
    __IO uint8_t LMC                        : 1;
} stc_timer4_atcr5_field_t;

typedef struct
{
    __IO uint8_t TRGMD                      : 1;
    __IO uint8_t OCS                        : 1;
    uint8_t RESERVED2                       : 2;
    __IO uint8_t DEN                        : 1;
    __IO uint8_t PEN                        : 1;
    __IO uint8_t UEN                        : 1;
    __IO uint8_t ZEN                        : 1;
} stc_timer4_ater5_field_t;

typedef struct
{
    __IO uint8_t AMC                        : 4;
    uint8_t RESERVED4                       : 2;
    __IO uint8_t MZCE                       : 1;
    __IO uint8_t MPCE                       : 1;
} stc_timer4_atmr5_field_t;

typedef struct
{
    __IO uint16_t DPE                       : 1;
    __IO uint16_t NCS                       : 3;
    __IO uint16_t SDI                       : 1;
    __IO uint16_t APE                       : 1;
    uint16_t RESERVED6                      : 1;
    __IO uint16_t HOLD                      : 1;
    __IO uint16_t DID                       : 1;
    __IO uint16_t AID                       : 1;
    uint16_t RESERVED10                     : 2;
    __IO uint16_t DIF                       : 1;
    __IO uint16_t DIFC                      : 1;
    __IO uint16_t AIF                       : 1;
    __IO uint16_t AIFC                      : 1;
} stc_timer4_escr_field_t;

typedef struct
{
    __IO uint32_t UID                       :32;
} stc_uid_uidr0_field_t;

typedef struct
{
    __IO uint32_t UID                       :32;
} stc_uid_uidr1_field_t;

typedef struct
{
    __IO uint32_t UID                       :16;
} stc_uid_uidr2_field_t;

typedef struct
{
    __IO uint8_t VC_EN                      : 1;
    __IO uint8_t VC_OUT                     : 1;
    __IO uint8_t VC_NMODE                   : 1;
    __IO uint8_t VC_COMPSL                  : 2;
} stc_vc_ctl1_field_t;

typedef struct
{
    __IO uint16_t VC_FILTER_EN              : 1;
    __IO uint16_t VC_RESPONSE               : 3;
    uint16_t RESERVED4                      : 1;
    __IO uint16_t VCINT_EDGE                : 2;
    __IO uint16_t VCINT_HIGH                : 1;
    __IO uint16_t VC2PT                     : 1;
    __IO uint16_t VCIE                      : 1;
    __IO uint16_t VCIF                      : 1;
    __IO uint16_t VC_HYS_SEL                : 1;
} stc_vc_ctl2_field_t;

typedef struct
{
    __IO uint8_t VC_TM0G                    : 1;
    __IO uint8_t VC_TM2G                    : 1;
} stc_vc_ctl3_field_t;

typedef struct
{
    __IO uint32_t LVD1_SVHR                 : 5;
    uint32_t RESERVED5                      : 3;
    __IO uint32_t LVD1_SVHD                 : 5;
    uint32_t RESERVED13                     : 3;
    __IO uint32_t LVD1_SRST                 : 1;
    uint32_t RESERVED17                     : 7;
    __IO uint32_t LVD1_EN                   : 1;
} stc_wsunit_lvd1_set_field_t;

typedef struct
{
    __IO uint32_t LVD1_IF                   : 1;
    uint32_t RESERVED1                      :15;
    __IO uint32_t LVD2_IF                   : 1;
} stc_wsunit_lvd_int_str_field_t;

typedef struct
{
    __IO uint32_t LVD1_CLR                  : 1;
    uint32_t RESERVED1                      :15;
    __IO uint32_t LVD2_CLR                  : 1;
} stc_wsunit_lvd_clr_field_t;

typedef struct
{
    __IO uint32_t LVD2_SVHR                 : 5;
    uint32_t RESERVED5                      : 3;
    __IO uint32_t LVD2_SVHD                 : 5;
    uint32_t RESERVED13                     : 3;
    __IO uint32_t LVD2_SRST                 : 1;
    uint32_t RESERVED17                     : 7;
    __IO uint32_t LVD2_EN                   : 1;
} stc_wsunit_lvd2_set_field_t;

typedef struct
{
    __IO uint8_t BUR01                      : 8;
} stc_wsunit_bur01_field_t;

typedef struct
{
    __IO uint8_t BUR02                      : 8;
} stc_wsunit_bur02_field_t;

typedef struct
{
    __IO uint8_t BUR03                      : 8;
} stc_wsunit_bur03_field_t;

typedef struct
{
    __IO uint8_t BUR04                      : 8;
} stc_wsunit_bur04_field_t;

typedef struct
{
    __IO uint8_t BUR05                      : 8;
} stc_wsunit_bur05_field_t;

typedef struct
{
    __IO uint8_t BUR06                      : 8;
} stc_wsunit_bur06_field_t;

typedef struct
{
    __IO uint8_t BUR07                      : 8;
} stc_wsunit_bur07_field_t;

typedef struct
{
    __IO uint8_t BUR08                      : 8;
} stc_wsunit_bur08_field_t;

typedef struct
{
    __IO uint8_t BUR09                      : 8;
} stc_wsunit_bur09_field_t;

typedef struct
{
    __IO uint8_t BUR10                      : 8;
} stc_wsunit_bur10_field_t;

typedef struct
{
    __IO uint8_t BUR11                      : 8;
} stc_wsunit_bur11_field_t;

typedef struct
{
    __IO uint8_t BUR12                      : 8;
} stc_wsunit_bur12_field_t;

typedef struct
{
    __IO uint8_t BUR13                      : 8;
} stc_wsunit_bur13_field_t;

typedef struct
{
    __IO uint8_t BUR14                      : 8;
} stc_wsunit_bur14_field_t;

typedef struct
{
    __IO uint8_t BUR15                      : 8;
} stc_wsunit_bur15_field_t;

typedef struct
{
    __IO uint8_t BUR16                      : 8;
} stc_wsunit_bur16_field_t;


typedef struct
{
    union
    {
        __IO uint16_t ADCTL;
        stc_adc_adctl_field_t ADCTL_f;
    };
    union
    {
        __IO uint16_t ADCINT;
        stc_adc_adcint_field_t ADCINT_f;
    };
    uint8_t RESERVED2[4];
    union
    {
        __IO uint8_t ADCSCTL;
        stc_adc_adcsctl_field_t ADCSCTL_f;
    };
    union
    {
        __IO uint8_t SFS;
        stc_adc_sfs_field_t SFS_f;
    };
    uint8_t RESERVED4[2];
    union
    {
        __IO uint32_t SFD;
        stc_adc_sfd_field_t SFD_f;
    };
    union
    {
        __IO uint32_t ADSIN0;
        stc_adc_adsin0_field_t ADSIN0_f;
        __IO uint32_t ADSIN1;
        stc_adc_adsin1_field_t ADSIN1_f;
    };
    uint8_t RESERVED7[4];
    union
    {
        __IO uint8_t ADCPCTL;
        stc_adc_adcpctl_field_t ADCPCTL_f;
    };
    union
    {
        __IO uint8_t PFS;
        stc_adc_pfs_field_t PFS_f;
    };
    uint8_t RESERVED9[2];
    union
    {
        __IO uint32_t PFD;
        stc_adc_pfd_field_t PFD_f;
    };
    union
    {
        __IO uint16_t ADPIN;
        stc_adc_adpin_field_t ADPIN_f;
    };
    uint8_t RESERVED11[2];
    union
    {
        __IO uint8_t ADCMPCTL;
        stc_adc_adcmpctl_field_t ADCMPCTL_f;
    };
    uint8_t RESERVED12[1];
    union
    {
        __IO uint16_t ADCMPD;
        stc_adc_adcmpd_field_t ADCMPD_f;
    };
    union
    {
        __IO uint32_t STSEL;
        stc_adc_stsel_field_t STSEL_f;
    };
    uint8_t RESERVED14[4];
    union
    {
        __IO uint8_t STS0;
        stc_adc_sts0_field_t STS0_f;
    };
    union
    {
        __IO uint8_t STS1;
        stc_adc_sts1_field_t STS1_f;
    };
    uint8_t RESERVED16[2];
    union
    {
        __IO uint8_t ADCDIV;
        stc_adc_adcdiv_field_t ADCDIV_f;
    };
    uint8_t RESERVED17[3];
    union
    {
        __IO uint8_t ADCSTSL;
        stc_adc_adcstsl_field_t ADCSTSL_f;
    };
    union
    {
        __IO uint8_t ADCPTSL;
        stc_adc_adcptsl_field_t ADCPTSL_f;
    };
    uint8_t RESERVED19[2];
    union
    {
        __IO uint16_t ADEN;
        stc_adc_aden_field_t ADEN_f;
    };
    uint8_t RESERVED20[10];
    union
    {
        __IO uint16_t ADRCMPCTL;
        stc_adc_adrcmpctl_field_t ADRCMPCTL_f;
    };
    uint8_t RESERVED21[2];
    union
    {
        __IO uint8_t ADRCMPS;
        stc_adc_adrcmps_field_t ADRCMPS_f;
    };
    uint8_t RESERVED22[3];
    union
    {
        __IO uint16_t ADRCMPL;
        stc_adc_adrcmpl_field_t ADRCMPL_f;
    };
    union
    {
        __IO uint16_t ADRCMPH;
        stc_adc_adrcmph_field_t ADRCMPH_f;
    };
    union
    {
        __IO uint32_t ADRCMPF;
        stc_adc_adrcmpf_field_t ADRCMPF_f;
    };
}M0P_ADC_TypeDef;

typedef struct
{
    union
    {
        __IO uint8_t CTRL;
        stc_clock_ctrl_field_t CTRL_f;
    };
    uint8_t RESERVED1[3];
    union
    {
        __IO uint8_t CLK_STB;
        stc_clock_clk_stb_field_t CLK_STB_f;
    };
    uint8_t RESERVED2[3];
    union
    {
        __IO uint32_t LPM_CTL;
        stc_clock_lpm_ctl_field_t LPM_CTL_f;
    };
    union
    {
        __IO uint16_t STAT;
        stc_clock_stat_field_t STAT_f;
    };
    uint8_t RESERVED4[2];
    union
    {
        __IO uint8_t BC_DIV;
        stc_clock_bc_div_field_t BC_DIV_f;
    };
    uint8_t RESERVED5[3];
    union
    {
        __IO uint8_t APB0_CTRL;
        stc_clock_apb0_ctrl_field_t APB0_CTRL_f;
    };
    uint8_t RESERVED6[3];
    union
    {
        __IO uint8_t APB1_CTRL;
        stc_clock_apb1_ctrl_field_t APB1_CTRL_f;
    };
    uint8_t RESERVED7[7];
    union
    {
        __IO uint8_t SWDG_CTRL;
        stc_clock_swdg_ctrl_field_t SWDG_CTRL_f;
    };
    uint8_t RESERVED8[15];
    union
    {
        __IO uint8_t CSWT;
        stc_clock_cswt_field_t CSWT_f;
    };
    uint8_t RESERVED9[3];
    union
    {
        __IO uint8_t PSWT;
        stc_clock_pswt_field_t PSWT_f;
    };
    uint8_t RESERVED10[3];
    union
    {
        __IO uint8_t PLL_CTL1;
        stc_clock_pll_ctl1_field_t PLL_CTL1_f;
    };
    uint8_t RESERVED11[3];
    union
    {
        __IO uint8_t PLL_CTL2;
        stc_clock_pll_ctl2_field_t PLL_CTL2_f;
    };
    uint8_t RESERVED12[3];
    union
    {
        __IO uint16_t FCM_CTL;
        stc_clock_fcm_ctl_field_t FCM_CTL_f;
    };
    uint8_t RESERVED13[2];
    union
    {
        __IO uint8_t FCM_STR;
        stc_clock_fcm_str_field_t FCM_STR_f;
    };
    uint8_t RESERVED14[3];
    __IO uint16_t AFDWH;
    uint8_t RESERVED15[2];
    __IO uint16_t AFDWL;
    uint8_t RESERVED16[2];
    __IO uint16_t AFDC;
    uint8_t RESERVED17[2];
    union
    {
        __IO uint8_t DBWDT_CTRL;
        stc_clock_dbwdt_ctrl_field_t DBWDT_CTRL_f;
    };
    uint8_t RESERVED18[11];
    union
    {
        __IO uint8_t INT_CTRL;
        stc_clock_int_ctrl_field_t INT_CTRL_f;
    };
    uint8_t RESERVED19[3];
    union
    {
        __IO uint8_t INT_PEND;
        stc_clock_int_pend_field_t INT_PEND_f;
    };
    uint8_t RESERVED20[3];
    union
    {
        __IO uint8_t INT_CLR;
        stc_clock_int_clr_field_t INT_CLR_f;
    };
}M0P_CLOCK_TypeDef;

typedef struct
{
    union
    {
        __IO uint8_t CNTRD;
        stc_clock_counter_cntrd_field_t CNTRD_f;
    };
    union
    {
        __IO uint8_t CNTRL;
        stc_clock_counter_cntrl_field_t CNTRL_f;
    };
    union
    {
        __IO uint8_t CNTC;
        stc_clock_counter_cntc_field_t CNTC_f;
    };
    uint8_t RESERVED3[13];
    union
    {
        __IO uint16_t CNT_CLK0;
        stc_clock_counter_cnt_clk0_field_t CNT_CLK0_f;
    };
    uint8_t RESERVED4[2];
    union
    {
        __IO uint8_t CNT_CLK1;
        stc_clock_counter_cnt_clk1_field_t CNT_CLK1_f;
    };
}M0P_CLOCK_COUNTER_TypeDef;

typedef struct
{
    union
    {
        __IO uint16_t CTSEL0123;
        stc_ctiosel03_ctsel0123_field_t CTSEL0123_f;
    };
}M0P_CTIOSEL03_TypeDef;

typedef struct
{
    uint8_t RESERVED0[252];
    union
    {
        __IO uint8_t CTSSSR;
        stc_ctsssr_field_t CTSSSR_f;
    };
}M0P_CTSSSR_TypeDef;

typedef struct
{
    __IO uint16_t LWRR;
    uint8_t RESERVED1[2];
    __IO uint16_t HWRR;
    uint8_t RESERVED2[2];
    __IO uint16_t TCNT;
    uint8_t RESERVED3[2];
    union
    {
        __IO uint16_t TCR;
        stc_ct_ppg_tcr_field_t TCR_f;
    };
    uint8_t RESERVED4[2];
    union
    {
        __IO uint8_t STA;
        stc_ct_ppg_sta_field_t STA_f;
    };
    union
    {
        __IO uint8_t TCR2;
        stc_ct_ppg_tcr2_field_t TCR2_f;
    };
}M0P_CT_PPG_TypeDef;

typedef struct
{
    uint8_t RESERVED0[4];
    __IO uint16_t DBUF;
    uint8_t RESERVED1[6];
    union
    {
        __IO uint16_t TCR;
        stc_ct_pwc_tcr_field_t TCR_f;
    };
    uint8_t RESERVED2[2];
    union
    {
        __IO uint8_t STA;
        stc_ct_pwc_sta_field_t STA_f;
    };
    union
    {
        __IO uint8_t TCR2;
        stc_ct_pwc_tcr2_field_t TCR2_f;
    };
}M0P_CT_PWC_TypeDef;

typedef struct
{
    __IO uint16_t CSR;
    uint8_t RESERVED1[2];
    __IO uint16_t DUT;
    uint8_t RESERVED2[2];
    __IO uint16_t TCNT;
    uint8_t RESERVED3[2];
    union
    {
        __IO uint16_t TCR;
        stc_ct_pwm_tcr_field_t TCR_f;
    };
    uint8_t RESERVED4[2];
    union
    {
        __IO uint8_t STA;
        stc_ct_pwm_sta_field_t STA_f;
    };
    union
    {
        __IO uint8_t TCR2;
        stc_ct_pwm_tcr2_field_t TCR2_f;
    };
}M0P_CT_PWM_TypeDef;

typedef struct
{
    __IO uint16_t CSR;
    uint8_t RESERVED1[6];
    __IO uint16_t TCNT;
    uint8_t RESERVED2[2];
    union
    {
        __IO uint16_t TCR;
        stc_ct_rt_tcr_field_t TCR_f;
    };
    uint8_t RESERVED3[2];
    union
    {
        __IO uint8_t STA;
        stc_ct_rt_sta_field_t STA_f;
    };
    union
    {
        __IO uint8_t TCR2;
        stc_ct_rt_tcr2_field_t TCR2_f;
    };
}M0P_CT_RT_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t CONF;
        stc_dmac_conf_field_t CONF_f;
    };
    uint8_t RESERVED1[12];
    union
    {
        __IO uint32_t CONFA0;
        stc_dmac_confa0_field_t CONFA0_f;
    };
    union
    {
        __IO uint32_t CONFB0;
        stc_dmac_confb0_field_t CONFB0_f;
    };
    union
    {
        __IO uint32_t SRC_ADR0;
        stc_dmac_src_adr0_field_t SRC_ADR0_f;
    };
    union
    {
        __IO uint32_t DST_ADR0;
        stc_dmac_dst_adr0_field_t DST_ADR0_f;
    };
    union
    {
        __IO uint32_t CONFA1;
        stc_dmac_confa1_field_t CONFA1_f;
    };
    union
    {
        __IO uint32_t CONFB1;
        stc_dmac_confb1_field_t CONFB1_f;
    };
    union
    {
        __IO uint32_t SRC_ADR1;
        stc_dmac_src_adr1_field_t SRC_ADR1_f;
    };
    union
    {
        __IO uint32_t DST_ADR1;
        stc_dmac_dst_adr1_field_t DST_ADR1_f;
    };
}M0P_DMAC_TypeDef;

typedef struct
{
    __IO uint32_t TIMERLOAD;
    __IO uint32_t TIMERVALUE;
    union
    {
        __IO uint32_t TIMERCTRL;
        stc_dtim_timerctrl_field_t TIMERCTRL_f;
    };
    __IO uint32_t TIMERINTCLR;
    union
    {
        __IO uint32_t TIMERRIS;
        stc_dtim_timerris_field_t TIMERRIS_f;
    };
    union
    {
        __IO uint32_t TIMERMIS;
        stc_dtim_timermis_field_t TIMERMIS_f;
    };
    __IO uint32_t TIMERBGLOAD;
}M0P_DTIM_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t INTEN;
        stc_extint_inten_field_t INTEN_f;
    };
    union
    {
        __IO uint32_t INTSRC;
        stc_extint_intsrc_field_t INTSRC_f;
    };
    union
    {
        __IO uint32_t INTCLR;
        stc_extint_intclr_field_t INTCLR_f;
    };
    union
    {
        __IO uint32_t INTLVL;
        stc_extint_intlvl_field_t INTLVL_f;
    };
    uint8_t RESERVED4[4];
    union
    {
        __IO uint16_t NMISRC;
        stc_extint_nmisrc_field_t NMISRC_f;
    };
    uint8_t RESERVED5[2];
    union
    {
        __IO uint16_t NMICLR;
        stc_extint_nmiclr_field_t NMICLR_f;
    };
}M0P_EXTINT_TypeDef;

typedef struct
{
    union
    {
        __IO uint8_t FGET0;
        stc_fastio_fget0_field_t FGET0_f;
    };
    uint8_t RESERVED1[3];
    union
    {
        __IO uint8_t FGET1;
        stc_fastio_fget1_field_t FGET1_f;
    };
    uint8_t RESERVED2[3];
    union
    {
        __IO uint8_t FGET2;
        stc_fastio_fget2_field_t FGET2_f;
    };
    uint8_t RESERVED3[3];
    union
    {
        __IO uint8_t FGET3;
        stc_fastio_fget3_field_t FGET3_f;
    };
    uint8_t RESERVED4[3];
    union
    {
        __IO uint8_t FGET4;
        stc_fastio_fget4_field_t FGET4_f;
    };
    uint8_t RESERVED5[7];
    union
    {
        __IO uint8_t FGET6;
        stc_fastio_fget6_field_t FGET6_f;
    };
    uint8_t RESERVED6[3];
    union
    {
        __IO uint8_t FGET7;
        stc_fastio_fget7_field_t FGET7_f;
    };
    uint8_t RESERVED7[35];
    union
    {
        __IO uint8_t FSET0;
        stc_fastio_fset0_field_t FSET0_f;
    };
    uint8_t RESERVED8[3];
    union
    {
        __IO uint8_t FSET1;
        stc_fastio_fset1_field_t FSET1_f;
    };
    uint8_t RESERVED9[3];
    union
    {
        __IO uint8_t FSET2;
        stc_fastio_fset2_field_t FSET2_f;
    };
    uint8_t RESERVED10[3];
    union
    {
        __IO uint8_t FSET3;
        stc_fastio_fset3_field_t FSET3_f;
    };
    uint8_t RESERVED11[3];
    union
    {
        __IO uint8_t FSET4;
        stc_fastio_fset4_field_t FSET4_f;
    };
    uint8_t RESERVED12[7];
    union
    {
        __IO uint8_t FSET6;
        stc_fastio_fset6_field_t FSET6_f;
    };
    uint8_t RESERVED13[3];
    union
    {
        __IO uint8_t FSET7;
        stc_fastio_fset7_field_t FSET7_f;
    };
}M0P_FASTIO_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t FOCR;
        stc_flash_if_focr_field_t FOCR_f;
    };
    __IO uint32_t FLCR0;
    __IO uint32_t FLCR1;
    union
    {
        __IO uint32_t FSTR;
        stc_flash_if_fstr_field_t FSTR_f;
    };
    union
    {
        __IO uint32_t FWCICR;
        stc_flash_if_fwcicr_field_t FWCICR_f;
    };
    union
    {
        __IO uint32_t FUDR0;
        stc_flash_if_fudr0_field_t FUDR0_f;
    };
    uint8_t RESERVED6[12];
    union
    {
        __IO uint16_t TNVS;
        stc_flash_if_tnvs_field_t TNVS_f;
    };
    uint8_t RESERVED7[2];
    union
    {
        __IO uint16_t TPROG;
        stc_flash_if_tprog_field_t TPROG_f;
    };
    uint8_t RESERVED8[2];
    union
    {
        __IO uint16_t TPGS;
        stc_flash_if_tpgs_field_t TPGS_f;
    };
    uint8_t RESERVED9[2];
    union
    {
        __IO uint16_t TRCVPGM;
        stc_flash_if_trcvpgm_field_t TRCVPGM_f;
    };
    uint8_t RESERVED10[2];
    union
    {
        __IO uint16_t TRCVPERS;
        stc_flash_if_trcvpers_field_t TRCVPERS_f;
    };
    uint8_t RESERVED11[2];
    union
    {
        __IO uint16_t TRCVCERS;
        stc_flash_if_trcvcers_field_t TRCVCERS_f;
    };
    uint8_t RESERVED12[2];
    union
    {
        __IO uint16_t TPERS;
        stc_flash_if_tpers_field_t TPERS_f;
    };
    uint8_t RESERVED13[2];
    union
    {
        __IO uint16_t TCERS;
        stc_flash_if_tcers_field_t TCERS_f;
    };
}M0P_FLASH_IF_TypeDef;

typedef struct
{
    union
    {
        __IO uint8_t FN0;
        stc_gpio_fn0_field_t FN0_f;
    };
    uint8_t RESERVED1[3];
    union
    {
        __IO uint8_t FN1;
        stc_gpio_fn1_field_t FN1_f;
    };
    uint8_t RESERVED2[3];
    union
    {
        __IO uint8_t FN2;
        stc_gpio_fn2_field_t FN2_f;
    };
    uint8_t RESERVED3[3];
    union
    {
        __IO uint8_t FN3;
        stc_gpio_fn3_field_t FN3_f;
    };
    uint8_t RESERVED4[3];
    union
    {
        __IO uint8_t FN4;
        stc_gpio_fn4_field_t FN4_f;
    };
    uint8_t RESERVED5[7];
    union
    {
        __IO uint8_t FN6;
        stc_gpio_fn6_field_t FN6_f;
    };
    uint8_t RESERVED6[3];
    union
    {
        __IO uint8_t FN7;
        stc_gpio_fn7_field_t FN7_f;
    };
    uint8_t RESERVED7[227];
    union
    {
        __IO uint8_t PU0;
        stc_gpio_pu0_field_t PU0_f;
    };
    uint8_t RESERVED8[3];
    union
    {
        __IO uint8_t PU1;
        stc_gpio_pu1_field_t PU1_f;
    };
    uint8_t RESERVED9[7];
    union
    {
        __IO uint8_t PU3;
        stc_gpio_pu3_field_t PU3_f;
    };
    uint8_t RESERVED10[3];
    union
    {
        __IO uint8_t PU4;
        stc_gpio_pu4_field_t PU4_f;
    };
    uint8_t RESERVED11[7];
    union
    {
        __IO uint8_t PU6;
        stc_gpio_pu6_field_t PU6_f;
    };
    uint8_t RESERVED12[3];
    union
    {
        __IO uint8_t PU7;
        stc_gpio_pu7_field_t PU7_f;
    };
    uint8_t RESERVED13[227];
    union
    {
        __IO uint8_t DIR0;
        stc_gpio_dir0_field_t DIR0_f;
    };
    uint8_t RESERVED14[3];
    union
    {
        __IO uint8_t DIR1;
        stc_gpio_dir1_field_t DIR1_f;
    };
    uint8_t RESERVED15[3];
    union
    {
        __IO uint8_t DIR2;
        stc_gpio_dir2_field_t DIR2_f;
    };
    uint8_t RESERVED16[3];
    union
    {
        __IO uint8_t DIR3;
        stc_gpio_dir3_field_t DIR3_f;
    };
    uint8_t RESERVED17[3];
    union
    {
        __IO uint8_t DIR4;
        stc_gpio_dir4_field_t DIR4_f;
    };
    uint8_t RESERVED18[7];
    union
    {
        __IO uint8_t DIR6;
        stc_gpio_dir6_field_t DIR6_f;
    };
    uint8_t RESERVED19[3];
    union
    {
        __IO uint8_t DIR7;
        stc_gpio_dir7_field_t DIR7_f;
    };
    uint8_t RESERVED20[227];
    union
    {
        __IO uint8_t GET0;
        stc_gpio_get0_field_t GET0_f;
    };
    uint8_t RESERVED21[3];
    union
    {
        __IO uint8_t GET1;
        stc_gpio_get1_field_t GET1_f;
    };
    uint8_t RESERVED22[3];
    union
    {
        __IO uint8_t GET2;
        stc_gpio_get2_field_t GET2_f;
    };
    uint8_t RESERVED23[3];
    union
    {
        __IO uint8_t GET3;
        stc_gpio_get3_field_t GET3_f;
    };
    uint8_t RESERVED24[3];
    union
    {
        __IO uint8_t GET4;
        stc_gpio_get4_field_t GET4_f;
    };
    uint8_t RESERVED25[7];
    union
    {
        __IO uint8_t GET6;
        stc_gpio_get6_field_t GET6_f;
    };
    uint8_t RESERVED26[3];
    union
    {
        __IO uint8_t GET7;
        stc_gpio_get7_field_t GET7_f;
    };
    uint8_t RESERVED27[227];
    union
    {
        __IO uint8_t SET0;
        stc_gpio_set0_field_t SET0_f;
    };
    uint8_t RESERVED28[3];
    union
    {
        __IO uint8_t SET1;
        stc_gpio_set1_field_t SET1_f;
    };
    uint8_t RESERVED29[3];
    union
    {
        __IO uint8_t SET2;
        stc_gpio_set2_field_t SET2_f;
    };
    uint8_t RESERVED30[3];
    union
    {
        __IO uint8_t SET3;
        stc_gpio_set3_field_t SET3_f;
    };
    uint8_t RESERVED31[3];
    union
    {
        __IO uint8_t SET4;
        stc_gpio_set4_field_t SET4_f;
    };
    uint8_t RESERVED32[7];
    union
    {
        __IO uint8_t SET6;
        stc_gpio_set6_field_t SET6_f;
    };
    uint8_t RESERVED33[3];
    union
    {
        __IO uint8_t SET7;
        stc_gpio_set7_field_t SET7_f;
    };
    uint8_t RESERVED34[227];
    union
    {
        __IO uint32_t ANALOG;
        stc_gpio_analog_field_t ANALOG_f;
    };
    uint8_t RESERVED35[124];
    union
    {
        __IO uint8_t SPS;
        stc_gpio_sps_field_t SPS_f;
    };
    uint8_t RESERVED36[127];
    union
    {
        __IO uint32_t FN_SEL00;
        stc_gpio_fn_sel00_field_t FN_SEL00_f;
    };
    union
    {
        __IO uint32_t FN_SEL01;
        stc_gpio_fn_sel01_field_t FN_SEL01_f;
    };
    union
    {
        __IO uint32_t FN_SEL02;
        stc_gpio_fn_sel02_field_t FN_SEL02_f;
    };
    uint8_t RESERVED39[4];
    union
    {
        __IO uint32_t FN_SEL04;
        stc_gpio_fn_sel04_field_t FN_SEL04_f;
    };
    uint8_t RESERVED40[8];
    union
    {
        __IO uint32_t FN_SEL07;
        stc_gpio_fn_sel07_field_t FN_SEL07_f;
    };
    union
    {
        __IO uint32_t FN_SEL08;
        stc_gpio_fn_sel08_field_t FN_SEL08_f;
    };
    union
    {
        __IO uint32_t FN_SEL09;
        stc_gpio_fn_sel09_field_t FN_SEL09_f;
    };
    uint8_t RESERVED43[216];
    union
    {
        __IO uint8_t ODR0;
        stc_gpio_odr0_field_t ODR0_f;
    };
    uint8_t RESERVED44[3];
    union
    {
        __IO uint8_t ODR1;
        stc_gpio_odr1_field_t ODR1_f;
    };
    uint8_t RESERVED45[3];
    union
    {
        __IO uint8_t ODR2;
        stc_gpio_odr2_field_t ODR2_f;
    };
    uint8_t RESERVED46[3];
    union
    {
        __IO uint8_t ODR3;
        stc_gpio_odr3_field_t ODR3_f;
    };
    uint8_t RESERVED47[3];
    union
    {
        __IO uint8_t ODR4;
        stc_gpio_odr4_field_t ODR4_f;
    };
    uint8_t RESERVED48[7];
    union
    {
        __IO uint8_t ODR6;
        stc_gpio_odr6_field_t ODR6_f;
    };
    uint8_t RESERVED49[3];
    union
    {
        __IO uint8_t ODR7;
        stc_gpio_odr7_field_t ODR7_f;
    };
    uint8_t RESERVED50[483];
    union
    {
        __IO uint8_t FSETE0;
        stc_gpio_fsete0_field_t FSETE0_f;
    };
    uint8_t RESERVED51[3];
    union
    {
        __IO uint8_t FSETE1;
        stc_gpio_fsete1_field_t FSETE1_f;
    };
    uint8_t RESERVED52[3];
    union
    {
        __IO uint8_t FSETE2;
        stc_gpio_fsete2_field_t FSETE2_f;
    };
    uint8_t RESERVED53[3];
    union
    {
        __IO uint8_t FSETE3;
        stc_gpio_fsete3_field_t FSETE3_f;
    };
    uint8_t RESERVED54[3];
    union
    {
        __IO uint8_t FSETE4;
        stc_gpio_fsete4_field_t FSETE4_f;
    };
    uint8_t RESERVED55[7];
    union
    {
        __IO uint8_t FSETE6;
        stc_gpio_fsete6_field_t FSETE6_f;
    };
    uint8_t RESERVED56[3];
    union
    {
        __IO uint8_t FSETE7;
        stc_gpio_fsete7_field_t FSETE7_f;
    };
}M0P_GPIO_TypeDef;

typedef struct
{
    __IO uint32_t WDT_LD;
    __IO uint32_t WDT_VL;
    union
    {
        __IO uint8_t WDT_CTL;
        stc_hwwdt_wdt_ctl_field_t WDT_CTL_f;
    };
    uint8_t RESERVED3[3];
    __IO uint8_t WDT_CLR;
    uint8_t RESERVED4[3];
    union
    {
        __IO uint8_t WDT_STA;
        stc_hwwdt_wdt_sta_field_t WDT_STA_f;
    };
    uint8_t RESERVED5[3];
    __IO uint32_t WDT_LCK;
}M0P_HWWDT_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t IRQ_DSEL;
        stc_irqc_irq_dsel_field_t IRQ_DSEL_f;
    };
    uint8_t RESERVED1[12];
    union
    {
        __IO uint32_t IRQ_ST02;
        stc_irqc_irq_st02_field_t IRQ_ST02_f;
    };
    union
    {
        __IO uint32_t IRQ00PEND;
        stc_irqc_irq00pend_field_t IRQ00PEND_f;
    };
    union
    {
        __IO uint32_t IRQ01PEND;
        stc_irqc_irq01pend_field_t IRQ01PEND_f;
    };
    union
    {
        __IO uint32_t IRQ02PEND;
        stc_irqc_irq02pend_field_t IRQ02PEND_f;
    };
    union
    {
        __IO uint32_t IRQ03PEND;
        stc_irqc_irq03pend_field_t IRQ03PEND_f;
    };
    union
    {
        __IO uint32_t IRQ04PEND;
        stc_irqc_irq04pend_field_t IRQ04PEND_f;
    };
    union
    {
        __IO uint32_t IRQ05PEND;
        stc_irqc_irq05pend_field_t IRQ05PEND_f;
    };
    union
    {
        __IO uint32_t IRQ06PEND;
        stc_irqc_irq06pend_field_t IRQ06PEND_f;
    };
    uint8_t RESERVED9[32];
    union
    {
        __IO uint32_t IRQ15PEND;
        stc_irqc_irq15pend_field_t IRQ15PEND_f;
    };
    union
    {
        __IO uint32_t IRQ16PEND;
        stc_irqc_irq16pend_field_t IRQ16PEND_f;
    };
    union
    {
        __IO uint32_t IRQ17PEND;
        stc_irqc_irq17pend_field_t IRQ17PEND_f;
    };
    union
    {
        __IO uint32_t IRQ18PEND;
        stc_irqc_irq18pend_field_t IRQ18PEND_f;
    };
    union
    {
        __IO uint32_t IRQ19PEND;
        stc_irqc_irq19pend_field_t IRQ19PEND_f;
    };
    union
    {
        __IO uint32_t IRQ20PEND;
        stc_irqc_irq20pend_field_t IRQ20PEND_f;
    };
    uint8_t RESERVED15[12];
    union
    {
        __IO uint32_t IRQ24PEND;
        stc_irqc_irq24pend_field_t IRQ24PEND_f;
    };
    union
    {
        __IO uint32_t IRQ25PEND;
        stc_irqc_irq25pend_field_t IRQ25PEND_f;
    };
    union
    {
        __IO uint32_t IRQ26PEND;
        stc_irqc_irq26pend_field_t IRQ26PEND_f;
    };
    uint8_t RESERVED18[4];
    union
    {
        __IO uint32_t IRQ28PEND;
        stc_irqc_irq28pend_field_t IRQ28PEND_f;
    };
    uint8_t RESERVED19[4];
    union
    {
        __IO uint32_t IRQ30PEND;
        stc_irqc_irq30pend_field_t IRQ30PEND_f;
    };
    union
    {
        __IO uint32_t IRQ31PEND;
        stc_irqc_irq31pend_field_t IRQ31PEND_f;
    };
}M0P_IRQC_TypeDef;

typedef struct
{
    union
    {
        __IO uint8_t MR;
        stc_msc_i2c_mr_field_t MR_f;
    };
    union
    {
        __IO uint8_t BC;
        stc_msc_i2c_bc_field_t BC_f;
    };
    uint8_t RESERVED2[2];
    union
    {
        __IO uint8_t BS;
        stc_msc_i2c_bs_field_t BS_f;
    };
    union
    {
        __IO uint8_t SR;
        stc_msc_i2c_sr_field_t SR_f;
    };
    uint8_t RESERVED4[2];
    union
    {
        __IO uint16_t RXDR;
        __IO uint16_t TXDR;
    };
    uint8_t RESERVED6[2];
    union
    {
        __IO uint16_t BRS;
        stc_msc_i2c_brs_field_t BRS_f;
    };
    uint8_t RESERVED7[2];
    union
    {
        __IO uint8_t SA;
        stc_msc_i2c_sa_field_t SA_f;
    };
    union
    {
        __IO uint8_t SAMSK;
        stc_msc_i2c_samsk_field_t SAMSK_f;
    };
    uint8_t RESERVED9[11];
    union
    {
        __IO uint8_t EBCR;
        stc_msc_i2c_ebcr_field_t EBCR_f;
    };
}M0P_MSC_I2C_TypeDef;

typedef struct
{
    union
    {
        __IO uint8_t MR;
        stc_msc_spi_mr_field_t MR_f;
    };
    union
    {
        __IO uint8_t CR;
        stc_msc_spi_cr_field_t CR_f;
    };
    uint8_t RESERVED2[2];
    union
    {
        __IO uint8_t ECR;
        stc_msc_spi_ecr_field_t ECR_f;
    };
    union
    {
        __IO uint8_t SR;
        stc_msc_spi_sr_field_t SR_f;
    };
    uint8_t RESERVED4[2];
    union
    {
        __IO uint16_t RXDR;
        __IO uint16_t TXDR;
    };
    uint8_t RESERVED6[2];
    union
    {
        __IO uint16_t BRS;
        stc_msc_spi_brs_field_t BRS_f;
    };
    uint8_t RESERVED7[14];
    union
    {
        __IO uint8_t CSTMG0;
        stc_msc_spi_cstmg0_field_t CSTMG0_f;
    };
    union
    {
        __IO uint8_t CSTMG1;
        stc_msc_spi_cstmg1_field_t CSTMG1_f;
    };
    uint8_t RESERVED9[2];
    union
    {
        __IO uint16_t CSTMG32;
        stc_msc_spi_cstmg32_field_t CSTMG32_f;
    };
    uint8_t RESERVED10[2];
    union
    {
        __IO uint16_t EACR;
        stc_msc_spi_eacr_field_t EACR_f;
    };
    uint8_t RESERVED11[2];
    union
    {
        __IO uint16_t TMR;
        stc_msc_spi_tmr_field_t TMR_f;
    };
    uint8_t RESERVED12[2];
    union
    {
        __IO uint16_t TMC;
        stc_msc_spi_tmc_field_t TMC_f;
    };
    uint8_t RESERVED13[2];
    union
    {
        __IO uint16_t CSCR;
        stc_msc_spi_cscr_field_t CSCR_f;
    };
    uint8_t RESERVED14[2];
    union
    {
        __IO uint8_t CSFR0;
        stc_msc_spi_csfr0_field_t CSFR0_f;
    };
    union
    {
        __IO uint8_t CSFR1;
        stc_msc_spi_csfr1_field_t CSFR1_f;
    };
    uint8_t RESERVED16[2];
    union
    {
        __IO uint8_t CSFR2;
        stc_msc_spi_csfr2_field_t CSFR2_f;
    };
    uint8_t RESERVED17[3];
    union
    {
        __IO uint8_t TDTCNT0;
        stc_msc_spi_tdtcnt0_field_t TDTCNT0_f;
    };
    union
    {
        __IO uint8_t TDTCNT1;
        stc_msc_spi_tdtcnt1_field_t TDTCNT1_f;
    };
    uint8_t RESERVED19[2];
    union
    {
        __IO uint8_t TDTCNT2;
        stc_msc_spi_tdtcnt2_field_t TDTCNT2_f;
    };
    union
    {
        __IO uint8_t TDTCNT3;
        stc_msc_spi_tdtcnt3_field_t TDTCNT3_f;
    };
}M0P_MSC_SPI_TypeDef;

typedef struct
{
    union
    {
        __IO uint8_t MR;
        stc_msc_uart_mr_field_t MR_f;
    };
    union
    {
        __IO uint8_t CR;
        stc_msc_uart_cr_field_t CR_f;
    };
    uint8_t RESERVED2[2];
    union
    {
        __IO uint8_t ECR;
        stc_msc_uart_ecr_field_t ECR_f;
    };
    union
    {
        __IO uint8_t SR;
        stc_msc_uart_sr_field_t SR_f;
    };
    uint8_t RESERVED4[2];
    union
    {
        __IO uint16_t RXDR;
        __IO uint16_t TXDR;
    };
    uint8_t RESERVED6[2];
    union
    {
        __IO uint16_t BRS;
        stc_msc_uart_brs_field_t BRS_f;
    };
    uint8_t RESERVED7[66];
    union
    {
        __IO uint16_t COMP;
        stc_msc_uart_comp_field_t COMP_f;
    };
}M0P_MSC_UART_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t ACSTR;
        stc_mtb_dwt_acstr_field_t ACSTR_f;
    };
    union
    {
        __IO uint32_t DCSTR;
        stc_mtb_dwt_dcstr_field_t DCSTR_f;
    };
    union
    {
        __IO uint32_t MDCSTR;
        stc_mtb_dwt_mdcstr_field_t MDCSTR_f;
    };
    uint8_t RESERVED3[4];
    union
    {
        __IO uint32_t ACSPR;
        stc_mtb_dwt_acspr_field_t ACSPR_f;
    };
    union
    {
        __IO uint32_t DCSPR;
        stc_mtb_dwt_dcspr_field_t DCSPR_f;
    };
    union
    {
        __IO uint32_t MDCSPR;
        stc_mtb_dwt_mdcspr_field_t MDCSPR_f;
    };
    uint8_t RESERVED6[4];
    union
    {
        __IO uint8_t FCT;
        stc_mtb_dwt_fct_field_t FCT_f;
    };
    uint8_t RESERVED7[4015];
    union
    {
        __IO uint32_t PID4;
        stc_mtb_dwt_pid4_field_t PID4_f;
    };
    union
    {
        __IO uint32_t PID5;
        stc_mtb_dwt_pid5_field_t PID5_f;
    };
    union
    {
        __IO uint32_t PID6;
        stc_mtb_dwt_pid6_field_t PID6_f;
    };
    union
    {
        __IO uint32_t PID7;
        stc_mtb_dwt_pid7_field_t PID7_f;
    };
    union
    {
        __IO uint32_t PID0;
        stc_mtb_dwt_pid0_field_t PID0_f;
    };
    union
    {
        __IO uint32_t PID1;
        stc_mtb_dwt_pid1_field_t PID1_f;
    };
    union
    {
        __IO uint32_t PID2;
        stc_mtb_dwt_pid2_field_t PID2_f;
    };
    union
    {
        __IO uint32_t PID3;
        stc_mtb_dwt_pid3_field_t PID3_f;
    };
    union
    {
        __IO uint32_t CID0;
        stc_mtb_dwt_cid0_field_t CID0_f;
    };
    union
    {
        __IO uint32_t CID1;
        stc_mtb_dwt_cid1_field_t CID1_f;
    };
    union
    {
        __IO uint32_t CID2;
        stc_mtb_dwt_cid2_field_t CID2_f;
    };
    union
    {
        __IO uint32_t CID3;
        stc_mtb_dwt_cid3_field_t CID3_f;
    };
}M0P_MTB_DWT_TypeDef;

typedef struct
{
    union
    {
        __IO uint8_t OPA_CTL;
        stc_opa_ctl_field_t OPA_CTL_f;
    };
}M0P_OPA_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t HICR_TRMKEY;
        stc_osc_ctl_hicr_trmkey_field_t HICR_TRMKEY_f;
    };
    union
    {
        __IO uint32_t HICR_FTRM;
        stc_osc_ctl_hicr_ftrm_field_t HICR_FTRM_f;
    };
    union
    {
        __IO uint32_t HICR_TTRM;
        stc_osc_ctl_hicr_ttrm_field_t HICR_TTRM_f;
    };
    uint8_t RESERVED3[4];
    union
    {
        __IO uint8_t HICR_FDIV;
        stc_osc_ctl_hicr_fdiv_field_t HICR_FDIV_f;
    };
    uint8_t RESERVED4[15];
    union
    {
        __IO uint32_t HSXT_PWRCTL;
        stc_osc_ctl_hsxt_pwrctl_field_t HSXT_PWRCTL_f;
    };
    uint8_t RESERVED5[12];
    union
    {
        __IO uint32_t LSXT_PWRCTL;
        stc_osc_ctl_lsxt_pwrctl_field_t LSXT_PWRCTL_f;
    };
}M0P_OSC_CTL_TypeDef;

typedef struct
{
    union
    {
        __IO uint8_t PARITY_CTL;
        stc_parity_ctl_field_t PARITY_CTL_f;
    };
    uint8_t RESERVED1[3];
    union
    {
        __IO uint32_t PARITY_ADDR;
        stc_parity_addr_field_t PARITY_ADDR_f;
    };
}M0P_PARITY_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t CLKEN0;
        stc_pcg_clken0_field_t CLKEN0_f;
    };
    union
    {
        __IO uint32_t RSTCTL0;
        stc_pcg_rstctl0_field_t RSTCTL0_f;
    };
    uint8_t RESERVED2[8];
    union
    {
        __IO uint32_t CLKEN1;
        stc_pcg_clken1_field_t CLKEN1_f;
    };
    union
    {
        __IO uint32_t RSTCTL1;
        stc_pcg_rstctl1_field_t RSTCTL1_f;
    };
}M0P_PCG_TypeDef;

typedef struct
{
    __IO uint32_t WDT_LD;
    __IO uint32_t WDT_VL;
    union
    {
        __IO uint8_t WDT_CTL;
        stc_swwdt_wdt_ctl_field_t WDT_CTL_f;
    };
    uint8_t RESERVED3[3];
    __IO uint32_t WDT_INTCLR;
    union
    {
        __IO uint8_t WDT_STA;
        stc_swwdt_wdt_sta_field_t WDT_STA_f;
    };
    uint8_t RESERVED5[7];
    union
    {
        __IO uint8_t WDT_MDC;
        stc_swwdt_wdt_mdc_field_t WDT_MDC_f;
    };
    uint8_t RESERVED6[3047];
    __IO uint32_t WDT_LCK;
}M0P_SWWDT_TypeDef;

typedef struct
{
    uint8_t RESERVED0[2];
    __IO uint16_t OCCR0;
    uint8_t RESERVED1[2];
    __IO uint16_t OCCR1;
    uint8_t RESERVED2[2];
    __IO uint16_t OCCR2;
    uint8_t RESERVED3[2];
    __IO uint16_t OCCR3;
    uint8_t RESERVED4[2];
    __IO uint16_t OCCR4;
    uint8_t RESERVED5[2];
    __IO uint16_t OCCR5;
    union
    {
        __IO uint8_t OCSR10;
        stc_timer4_ocsr10_field_t OCSR10_f;
    };
    uint8_t RESERVED7[1];
    union
    {
        __IO uint16_t OCER10;
        stc_timer4_ocer10_field_t OCER10_f;
    };
    union
    {
        __IO uint8_t OCSR32;
        stc_timer4_ocsr32_field_t OCSR32_f;
    };
    uint8_t RESERVED9[1];
    union
    {
        __IO uint16_t OCER32;
        stc_timer4_ocer32_field_t OCER32_f;
    };
    union
    {
        __IO uint8_t OCSR54;
        stc_timer4_ocsr54_field_t OCSR54_f;
    };
    uint8_t RESERVED11[1];
    union
    {
        __IO uint16_t OCER54;
        stc_timer4_ocer54_field_t OCER54_f;
    };
    union
    {
        __IO uint16_t OCMR0;
        stc_timer4_ocmr0_field_t OCMR0_f;
    };
    uint8_t RESERVED13[2];
    union
    {
        __IO uint32_t OCMR1;
        stc_timer4_ocmr1_field_t OCMR1_f;
    };
    union
    {
        __IO uint16_t OCMR2;
        stc_timer4_ocmr2_field_t OCMR2_f;
    };
    uint8_t RESERVED15[2];
    union
    {
        __IO uint32_t OCMR3;
        stc_timer4_ocmr3_field_t OCMR3_f;
    };
    union
    {
        __IO uint16_t OCMR4;
        stc_timer4_ocmr4_field_t OCMR4_f;
    };
    uint8_t RESERVED17[2];
    union
    {
        __IO uint32_t OCMR5;
        stc_timer4_ocmr5_field_t OCMR5_f;
    };
    uint8_t RESERVED18[6];
    __IO uint16_t CPSR;
    uint8_t RESERVED19[2];
    __IO uint16_t CISR;
    union
    {
        __IO uint16_t CCSR;
        stc_timer4_ccsr_field_t CCSR_f;
    };
    union
    {
        __IO uint16_t CIMR;
        stc_timer4_cimr_field_t CIMR_f;
    };
    uint8_t RESERVED22[54];
    __IO uint16_t PFSR10;
    __IO uint16_t PDRA10;
    __IO uint16_t PDRB10;
    uint8_t RESERVED25[2];
    __IO uint16_t PFSR32;
    __IO uint16_t PDRA32;
    __IO uint16_t PDRB32;
    uint8_t RESERVED28[2];
    __IO uint16_t PFSR54;
    __IO uint16_t PDRA54;
    __IO uint16_t PDRB54;
    union
    {
        __IO uint8_t POCR10;
        stc_timer4_pocr10_field_t POCR10_f;
    };
    uint8_t RESERVED32[3];
    union
    {
        __IO uint8_t POCR32;
        stc_timer4_pocr32_field_t POCR32_f;
    };
    uint8_t RESERVED33[3];
    union
    {
        __IO uint8_t POCR54;
        stc_timer4_pocr54_field_t POCR54_f;
    };
    uint8_t RESERVED34[3];
    union
    {
        __IO uint16_t RCSR;
        stc_timer4_rcsr_field_t RCSR_f;
    };
    uint8_t RESERVED35[12];
    __IO uint16_t ATVR0;
    uint8_t RESERVED36[2];
    __IO uint16_t ATVR1;
    uint8_t RESERVED37[2];
    __IO uint16_t ATVR2;
    uint8_t RESERVED38[2];
    __IO uint16_t ATVR3;
    uint8_t RESERVED39[2];
    __IO uint16_t ATVR4;
    uint8_t RESERVED40[2];
    __IO uint16_t ATVR5;
    union
    {
        __IO uint8_t ATCR0;
        stc_timer4_atcr0_field_t ATCR0_f;
    };
    union
    {
        __IO uint8_t ATER0;
        stc_timer4_ater0_field_t ATER0_f;
    };
    union
    {
        __IO uint8_t ATMR0;
        stc_timer4_atmr0_field_t ATMR0_f;
    };
    uint8_t RESERVED44[1];
    union
    {
        __IO uint8_t ATCR1;
        stc_timer4_atcr1_field_t ATCR1_f;
    };
    union
    {
        __IO uint8_t ATER1;
        stc_timer4_ater1_field_t ATER1_f;
    };
    union
    {
        __IO uint8_t ATMR1;
        stc_timer4_atmr1_field_t ATMR1_f;
    };
    uint8_t RESERVED47[1];
    union
    {
        __IO uint8_t ATCR2;
        stc_timer4_atcr2_field_t ATCR2_f;
    };
    union
    {
        __IO uint8_t ATER2;
        stc_timer4_ater2_field_t ATER2_f;
    };
    union
    {
        __IO uint8_t ATMR2;
        stc_timer4_atmr2_field_t ATMR2_f;
    };
    uint8_t RESERVED50[1];
    union
    {
        __IO uint8_t ATCR3;
        stc_timer4_atcr3_field_t ATCR3_f;
    };
    union
    {
        __IO uint8_t ATER3;
        stc_timer4_ater3_field_t ATER3_f;
    };
    union
    {
        __IO uint8_t ATMR3;
        stc_timer4_atmr3_field_t ATMR3_f;
    };
    uint8_t RESERVED53[1];
    union
    {
        __IO uint8_t ATCR4;
        stc_timer4_atcr4_field_t ATCR4_f;
    };
    union
    {
        __IO uint8_t ATER4;
        stc_timer4_ater4_field_t ATER4_f;
    };
    union
    {
        __IO uint8_t ATMR4;
        stc_timer4_atmr4_field_t ATMR4_f;
    };
    uint8_t RESERVED56[1];
    union
    {
        __IO uint8_t ATCR5;
        stc_timer4_atcr5_field_t ATCR5_f;
    };
    union
    {
        __IO uint8_t ATER5;
        stc_timer4_ater5_field_t ATER5_f;
    };
    union
    {
        __IO uint8_t ATMR5;
        stc_timer4_atmr5_field_t ATMR5_f;
    };
    uint8_t RESERVED59[17];
    union
    {
        __IO uint16_t ESCR;
        stc_timer4_escr_field_t ESCR_f;
    };
}M0P_TIMER4_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t UIDR0;
        stc_uid_uidr0_field_t UIDR0_f;
    };
    union
    {
        __IO uint32_t UIDR1;
        stc_uid_uidr1_field_t UIDR1_f;
    };
    union
    {
        __IO uint32_t UIDR2;
        stc_uid_uidr2_field_t UIDR2_f;
    };
}M0P_UID_TypeDef;

typedef struct
{
    union
    {
        __IO uint8_t VC_CTL1;
        stc_vc_ctl1_field_t VC_CTL1_f;
    };
    uint8_t RESERVED1[3];
    union
    {
        __IO uint16_t VC_CTL2;
        stc_vc_ctl2_field_t VC_CTL2_f;
    };
    uint8_t RESERVED2[2];
    union
    {
        __IO uint8_t VC_CTL3;
        stc_vc_ctl3_field_t VC_CTL3_f;
    };
}M0P_VC_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t LVD1_SET;
        stc_wsunit_lvd1_set_field_t LVD1_SET_f;
    };
    union
    {
        __IO uint32_t LVD_INT_STR;
        stc_wsunit_lvd_int_str_field_t LVD_INT_STR_f;
    };
    union
    {
        __IO uint32_t LVD_CLR;
        stc_wsunit_lvd_clr_field_t LVD_CLR_f;
    };
    uint8_t RESERVED3[4];
    union
    {
        __IO uint32_t LVD2_SET;
        stc_wsunit_lvd2_set_field_t LVD2_SET_f;
    };
    uint8_t RESERVED4[1772];
    union
    {
        __IO uint8_t BUR01;
        stc_wsunit_bur01_field_t BUR01_f;
    };
    union
    {
        __IO uint8_t BUR02;
        stc_wsunit_bur02_field_t BUR02_f;
    };
    union
    {
        __IO uint8_t BUR03;
        stc_wsunit_bur03_field_t BUR03_f;
    };
    union
    {
        __IO uint8_t BUR04;
        stc_wsunit_bur04_field_t BUR04_f;
    };
    union
    {
        __IO uint8_t BUR05;
        stc_wsunit_bur05_field_t BUR05_f;
    };
    union
    {
        __IO uint8_t BUR06;
        stc_wsunit_bur06_field_t BUR06_f;
    };
    union
    {
        __IO uint8_t BUR07;
        stc_wsunit_bur07_field_t BUR07_f;
    };
    union
    {
        __IO uint8_t BUR08;
        stc_wsunit_bur08_field_t BUR08_f;
    };
    union
    {
        __IO uint8_t BUR09;
        stc_wsunit_bur09_field_t BUR09_f;
    };
    union
    {
        __IO uint8_t BUR10;
        stc_wsunit_bur10_field_t BUR10_f;
    };
    union
    {
        __IO uint8_t BUR11;
        stc_wsunit_bur11_field_t BUR11_f;
    };
    union
    {
        __IO uint8_t BUR12;
        stc_wsunit_bur12_field_t BUR12_f;
    };
    union
    {
        __IO uint8_t BUR13;
        stc_wsunit_bur13_field_t BUR13_f;
    };
    union
    {
        __IO uint8_t BUR14;
        stc_wsunit_bur14_field_t BUR14_f;
    };
    union
    {
        __IO uint8_t BUR15;
        stc_wsunit_bur15_field_t BUR15_f;
    };
    union
    {
        __IO uint8_t BUR16;
        stc_wsunit_bur16_field_t BUR16_f;
    };
}M0P_WSUNIT_TypeDef;



#define M0P_PERIPH_BASE                        (0x40000000UL)
#define M0P_ADC_BASE                           (M0P_PERIPH_BASE + 0x00027000UL)
#define M0P_CLOCK_BASE                         (M0P_PERIPH_BASE + 0x00010000UL)
#define M0P_CLOCK_COUNTER_BASE                 (M0P_PERIPH_BASE + 0x0003A000UL)
#define M0P_CTIOSEL03_BASE                     (M0P_PERIPH_BASE + 0x00025100UL)
#define M0P_CTSSSR_BASE                        (M0P_PERIPH_BASE + 0x00025F00UL)
#define M0P_CT0_PPG_BASE                       (M0P_PERIPH_BASE + 0x00025000UL)
#define M0P_CT1_PPG_BASE                       (M0P_PERIPH_BASE + 0x00025040UL)
#define M0P_CT2_PPG_BASE                       (M0P_PERIPH_BASE + 0x00025080UL)
#define M0P_CT3_PPG_BASE                       (M0P_PERIPH_BASE + 0x000250C0UL)
#define M0P_CT0_PWC_BASE                       (M0P_PERIPH_BASE + 0x00025000UL)
#define M0P_CT1_PWC_BASE                       (M0P_PERIPH_BASE + 0x00025040UL)
#define M0P_CT2_PWC_BASE                       (M0P_PERIPH_BASE + 0x00025080UL)
#define M0P_CT3_PWC_BASE                       (M0P_PERIPH_BASE + 0x000250C0UL)
#define M0P_CT0_PWM_BASE                       (M0P_PERIPH_BASE + 0x00025000UL)
#define M0P_CT1_PWM_BASE                       (M0P_PERIPH_BASE + 0x00025040UL)
#define M0P_CT2_PWM_BASE                       (M0P_PERIPH_BASE + 0x00025080UL)
#define M0P_CT3_PWM_BASE                       (M0P_PERIPH_BASE + 0x000250C0UL)
#define M0P_CT0_RT_BASE                        (M0P_PERIPH_BASE + 0x00025000UL)
#define M0P_CT1_RT_BASE                        (M0P_PERIPH_BASE + 0x00025040UL)
#define M0P_CT2_RT_BASE                        (M0P_PERIPH_BASE + 0x00025080UL)
#define M0P_CT3_RT_BASE                        (M0P_PERIPH_BASE + 0x000250C0UL)
#define M0P_DMAC_BASE                          (M0P_PERIPH_BASE + 0x00060000UL)
#define M0P_DTIM1_BASE                         (M0P_PERIPH_BASE + 0x00015000UL)
#define M0P_DTIM2_BASE                         (M0P_PERIPH_BASE + 0x00015020UL)
#define M0P_EXTINT_BASE                        (M0P_PERIPH_BASE + 0x00030000UL)
#define M0P_FLASH_IF_BASE                      (M0P_PERIPH_BASE + 0x00000000UL)
#define M0P_GPIO_BASE                          (M0P_PERIPH_BASE + 0x00033000UL)
#define M0P_HWWDT_BASE                         (M0P_PERIPH_BASE + 0x00011000UL)
#define M0P_IRQC_BASE                          (M0P_PERIPH_BASE + 0x00031000UL)
#define M0P_MSC4_I2C_BASE                      (M0P_PERIPH_BASE + 0x00037000UL)
#define M0P_MSC5_I2C_BASE                      (M0P_PERIPH_BASE + 0x00037100UL)
#define M0P_MSC6_I2C_BASE                      (M0P_PERIPH_BASE + 0x00037200UL)
#define M0P_MSC4_SPI_BASE                      (M0P_PERIPH_BASE + 0x00037000UL)
#define M0P_MSC5_SPI_BASE                      (M0P_PERIPH_BASE + 0x00037100UL)
#define M0P_MSC6_SPI_BASE                      (M0P_PERIPH_BASE + 0x00037200UL)
#define M0P_MSC4_UART_BASE                     (M0P_PERIPH_BASE + 0x00037000UL)
#define M0P_MSC5_UART_BASE                     (M0P_PERIPH_BASE + 0x00037100UL)
#define M0P_MSC6_UART_BASE                     (M0P_PERIPH_BASE + 0x00037200UL)
#define M0P_MTB_DWT_BASE                       (M0P_PERIPH_BASE + 0xB0001000UL)
#define M0P_OPA0_BASE                          (M0P_PERIPH_BASE + 0x0003C400UL)
#define M0P_OPA1_BASE                          (M0P_PERIPH_BASE + 0x0003C480UL)
#define M0P_OSC_CTL_BASE                       (M0P_PERIPH_BASE + 0x0002E000UL)
#define M0P_PARITY_BASE                        (M0P_PERIPH_BASE + 0x0003C000UL)
#define M0P_PCG_BASE                           (M0P_PERIPH_BASE + 0x0003C100UL)
#define M0P_SWWDT_BASE                         (M0P_PERIPH_BASE + 0x00012000UL)
#define M0P_TIMER4_BASE                        (M0P_PERIPH_BASE + 0x00020000UL)
#define M0P_UID_BASE                           (M0P_PERIPH_BASE + 0x00000100UL)
#define M0P_VC_BASE                            (M0P_PERIPH_BASE + 0x0003C300UL)
#define M0P_WSUNIT_BASE                        (M0P_PERIPH_BASE + 0x00035000UL)


#define M0P_ADC                                ((M0P_ADC_TypeDef *)0x40027000UL)
#define M0P_CLOCK                              ((M0P_CLOCK_TypeDef *)0x40010000UL)
#define M0P_CLOCK_COUNTER                      ((M0P_CLOCK_COUNTER_TypeDef *)0x4003A000UL)
#define M0P_CTIOSEL03                          ((M0P_CTIOSEL03_TypeDef *)0x40025100UL)
#define M0P_CTSSSR                             ((M0P_CTSSSR_TypeDef *)0x40025F00UL)
#define M0P_CT0_PPG                            ((M0P_CT_PPG_TypeDef *)0x40025000UL)
#define M0P_CT1_PPG                            ((M0P_CT_PPG_TypeDef *)0x40025040UL)
#define M0P_CT2_PPG                            ((M0P_CT_PPG_TypeDef *)0x40025080UL)
#define M0P_CT3_PPG                            ((M0P_CT_PPG_TypeDef *)0x400250C0UL)
#define M0P_CT0_PWC                            ((M0P_CT_PWC_TypeDef *)0x40025000UL)
#define M0P_CT1_PWC                            ((M0P_CT_PWC_TypeDef *)0x40025040UL)
#define M0P_CT2_PWC                            ((M0P_CT_PWC_TypeDef *)0x40025080UL)
#define M0P_CT3_PWC                            ((M0P_CT_PWC_TypeDef *)0x400250C0UL)
#define M0P_CT0_PWM                            ((M0P_CT_PWM_TypeDef *)0x40025000UL)
#define M0P_CT1_PWM                            ((M0P_CT_PWM_TypeDef *)0x40025040UL)
#define M0P_CT2_PWM                            ((M0P_CT_PWM_TypeDef *)0x40025080UL)
#define M0P_CT3_PWM                            ((M0P_CT_PWM_TypeDef *)0x400250C0UL)
#define M0P_CT0_RT                             ((M0P_CT_RT_TypeDef *)0x40025000UL)
#define M0P_CT1_RT                             ((M0P_CT_RT_TypeDef *)0x40025040UL)
#define M0P_CT2_RT                             ((M0P_CT_RT_TypeDef *)0x40025080UL)
#define M0P_CT3_RT                             ((M0P_CT_RT_TypeDef *)0x400250C0UL)
#define M0P_DMAC                               ((M0P_DMAC_TypeDef *)0x40060000UL)
#define M0P_DTIM1                              ((M0P_DTIM_TypeDef *)0x40015000UL)
#define M0P_DTIM2                              ((M0P_DTIM_TypeDef *)0x40015020UL)
#define M0P_EXTINT                             ((M0P_EXTINT_TypeDef *)0x40030000UL)
#define M0P_FASTIO                             ((M0P_FASTIO_TypeDef *)0xF8000000UL)
#define M0P_FLASH_IF                           ((M0P_FLASH_IF_TypeDef *)0x40000000UL)
#define M0P_GPIO                               ((M0P_GPIO_TypeDef *)0x40033000UL)
#define M0P_HWWDT                              ((M0P_HWWDT_TypeDef *)0x40011000UL)
#define M0P_IRQC                               ((M0P_IRQC_TypeDef *)0x40031000UL)
#define M0P_MSC4_I2C                           ((M0P_MSC_I2C_TypeDef *)0x40037000UL)
#define M0P_MSC5_I2C                           ((M0P_MSC_I2C_TypeDef *)0x40037100UL)
#define M0P_MSC6_I2C                           ((M0P_MSC_I2C_TypeDef *)0x40037200UL)
#define M0P_MSC4_SPI                           ((M0P_MSC_SPI_TypeDef *)0x40037000UL)
#define M0P_MSC5_SPI                           ((M0P_MSC_SPI_TypeDef *)0x40037100UL)
#define M0P_MSC6_SPI                           ((M0P_MSC_SPI_TypeDef *)0x40037200UL)
#define M0P_MSC4_UART                          ((M0P_MSC_UART_TypeDef *)0x40037000UL)
#define M0P_MSC5_UART                          ((M0P_MSC_UART_TypeDef *)0x40037100UL)
#define M0P_MSC6_UART                          ((M0P_MSC_UART_TypeDef *)0x40037200UL)
#define M0P_MTB_DWT                            ((M0P_MTB_DWT_TypeDef *)0xF0001000UL)
#define M0P_OPA0                               ((M0P_OPA_TypeDef *)0x4003C400UL)
#define M0P_OPA1                               ((M0P_OPA_TypeDef *)0x4003C480UL)
#define M0P_OSC_CTL                            ((M0P_OSC_CTL_TypeDef *)0x4002E000UL)
#define M0P_PARITY                             ((M0P_PARITY_TypeDef *)0x4003C000UL)
#define M0P_PCG                                ((M0P_PCG_TypeDef *)0x4003C100UL)
#define M0P_SWWDT                              ((M0P_SWWDT_TypeDef *)0x40012000UL)
#define M0P_TIMER4                             ((M0P_TIMER4_TypeDef *)0x40020000UL)
#define M0P_UID                                ((M0P_UID_TypeDef *)0x40000100UL)
#define M0P_VC                                 ((M0P_VC_TypeDef *)0x4003C300UL)
#define M0P_WSUNIT                             ((M0P_WSUNIT_TypeDef *)0x40035000UL)


#define bM0P_ADC_ADCTL_SCF                              *((volatile unsigned int*)(0x424E0000UL))
#define bM0P_ADC_ADCTL_PCF                              *((volatile unsigned int*)(0x424E0004UL))
#define bM0P_ADC_ADCTL_PCP                              *((volatile unsigned int*)(0x424E0008UL))
#define bM0P_ADC_ADCTL_REFS                             *((volatile unsigned int*)(0x424E0014UL))
#define bM0P_ADC_ADCTL_ALGN                             *((volatile unsigned int*)(0x424E0018UL))
#define bM0P_ADC_ADCTL_SP                               *((volatile unsigned int*)(0x424E001CUL))
#define bM0P_ADC_ADCINT_ADINT0E                         *((volatile unsigned int*)(0x424E0040UL))
#define bM0P_ADC_ADCINT_ADINT1E                         *((volatile unsigned int*)(0x424E0044UL))
#define bM0P_ADC_ADCINT_ADINT2E                         *((volatile unsigned int*)(0x424E0048UL))
#define bM0P_ADC_ADCINT_ADINT3E                         *((volatile unsigned int*)(0x424E004CUL))
#define bM0P_ADC_ADCINT_ADINT0F                         *((volatile unsigned int*)(0x424E0050UL))
#define bM0P_ADC_ADCINT_ADINT1F                         *((volatile unsigned int*)(0x424E0054UL))
#define bM0P_ADC_ADCINT_ADINT3F                         *((volatile unsigned int*)(0x424E005CUL))
#define bM0P_ADC_ADCINT_ADINT4E                         *((volatile unsigned int*)(0x424E0060UL))
#define bM0P_ADC_ADCINT_ADINT4F                         *((volatile unsigned int*)(0x424E0070UL))
#define bM0P_ADC_ADCSCTL_SCST                           *((volatile unsigned int*)(0x424E0100UL))
#define bM0P_ADC_ADCSCTL_SCTMEN                         *((volatile unsigned int*)(0x424E0104UL))
#define bM0P_ADC_ADCSCTL_RPT                            *((volatile unsigned int*)(0x424E0108UL))
#define bM0P_ADC_ADCSCTL_SMOD                           *((volatile unsigned int*)(0x424E010CUL))
#define bM0P_ADC_ADCSCTL_SCCLR                          *((volatile unsigned int*)(0x424E0110UL))
#define bM0P_ADC_ADCSCTL_SOV                            *((volatile unsigned int*)(0x424E0114UL))
#define bM0P_ADC_ADCSCTL_SCFUL                          *((volatile unsigned int*)(0x424E0118UL))
#define bM0P_ADC_ADCSCTL_SCEMP                          *((volatile unsigned int*)(0x424E011CUL))
#define bM0P_ADC_SFS_SDPTH0                             *((volatile unsigned int*)(0x424E0120UL))
#define bM0P_ADC_SFS_SDPTH1                             *((volatile unsigned int*)(0x424E0124UL))
#define bM0P_ADC_SFS_SDPTH2                             *((volatile unsigned int*)(0x424E0128UL))
#define bM0P_ADC_SFS_SDPTH3                             *((volatile unsigned int*)(0x424E012CUL))
#define bM0P_ADC_SFD_SCH0                               *((volatile unsigned int*)(0x424E0180UL))
#define bM0P_ADC_SFD_SCH1                               *((volatile unsigned int*)(0x424E0184UL))
#define bM0P_ADC_SFD_SCH2                               *((volatile unsigned int*)(0x424E0188UL))
#define bM0P_ADC_SFD_SCH3                               *((volatile unsigned int*)(0x424E018CUL))
#define bM0P_ADC_SFD_SCH4                               *((volatile unsigned int*)(0x424E0190UL))
#define bM0P_ADC_SFD_STRGM0                             *((volatile unsigned int*)(0x424E01A0UL))
#define bM0P_ADC_SFD_STRGM1                             *((volatile unsigned int*)(0x424E01A4UL))
#define bM0P_ADC_SFD_SVLD                               *((volatile unsigned int*)(0x424E01B0UL))
#define bM0P_ADC_SFD_SFD0                               *((volatile unsigned int*)(0x424E01D0UL))
#define bM0P_ADC_SFD_SFD1                               *((volatile unsigned int*)(0x424E01D4UL))
#define bM0P_ADC_SFD_SFD2                               *((volatile unsigned int*)(0x424E01D8UL))
#define bM0P_ADC_SFD_SFD3                               *((volatile unsigned int*)(0x424E01DCUL))
#define bM0P_ADC_SFD_SFD4                               *((volatile unsigned int*)(0x424E01E0UL))
#define bM0P_ADC_SFD_SFD5                               *((volatile unsigned int*)(0x424E01E4UL))
#define bM0P_ADC_SFD_SFD6                               *((volatile unsigned int*)(0x424E01E8UL))
#define bM0P_ADC_SFD_SFD7                               *((volatile unsigned int*)(0x424E01ECUL))
#define bM0P_ADC_SFD_SFD8                               *((volatile unsigned int*)(0x424E01F0UL))
#define bM0P_ADC_SFD_SFD9                               *((volatile unsigned int*)(0x424E01F4UL))
#define bM0P_ADC_SFD_SFD10                              *((volatile unsigned int*)(0x424E01F8UL))
#define bM0P_ADC_SFD_SFD11                              *((volatile unsigned int*)(0x424E01FCUL))
#define bM0P_ADC_ADSIN0_CHSL0                           *((volatile unsigned int*)(0x424E0200UL))
#define bM0P_ADC_ADSIN0_CHSL1                           *((volatile unsigned int*)(0x424E0204UL))
#define bM0P_ADC_ADSIN0_CHSL2                           *((volatile unsigned int*)(0x424E0208UL))
#define bM0P_ADC_ADSIN0_CHSL3                           *((volatile unsigned int*)(0x424E020CUL))
#define bM0P_ADC_ADSIN0_CHSL8                           *((volatile unsigned int*)(0x424E0220UL))
#define bM0P_ADC_ADSIN0_CHSL9                           *((volatile unsigned int*)(0x424E0224UL))
#define bM0P_ADC_ADSIN0_CHSL10                          *((volatile unsigned int*)(0x424E0228UL))
#define bM0P_ADC_ADSIN0_CHSL11                          *((volatile unsigned int*)(0x424E022CUL))
#define bM0P_ADC_ADSIN0_CHSL12                          *((volatile unsigned int*)(0x424E0230UL))
#define bM0P_ADC_ADSIN0_CHSL13                          *((volatile unsigned int*)(0x424E0234UL))
#define bM0P_ADC_ADSIN0_CHSL14                          *((volatile unsigned int*)(0x424E0238UL))
#define bM0P_ADC_ADSIN0_CHSL15                          *((volatile unsigned int*)(0x424E023CUL))
#define bM0P_ADC_ADSIN1_SCHSL00                         *((volatile unsigned int*)(0x424E0200UL))
#define bM0P_ADC_ADSIN1_SCHSL01                         *((volatile unsigned int*)(0x424E0204UL))
#define bM0P_ADC_ADSIN1_SCHSL02                         *((volatile unsigned int*)(0x424E0208UL))
#define bM0P_ADC_ADSIN1_SCHSL03                         *((volatile unsigned int*)(0x424E020CUL))
#define bM0P_ADC_ADSIN1_SCHSL04                         *((volatile unsigned int*)(0x424E0210UL))
#define bM0P_ADC_ADSIN1_SCHSL10                         *((volatile unsigned int*)(0x424E0214UL))
#define bM0P_ADC_ADSIN1_SCHSL11                         *((volatile unsigned int*)(0x424E0218UL))
#define bM0P_ADC_ADSIN1_SCHSL12                         *((volatile unsigned int*)(0x424E021CUL))
#define bM0P_ADC_ADSIN1_SCHSL13                         *((volatile unsigned int*)(0x424E0220UL))
#define bM0P_ADC_ADSIN1_SCHSL14                         *((volatile unsigned int*)(0x424E0224UL))
#define bM0P_ADC_ADSIN1_SCHSL20                         *((volatile unsigned int*)(0x424E0228UL))
#define bM0P_ADC_ADSIN1_SCHSL21                         *((volatile unsigned int*)(0x424E022CUL))
#define bM0P_ADC_ADSIN1_SCHSL22                         *((volatile unsigned int*)(0x424E0230UL))
#define bM0P_ADC_ADSIN1_SCHSL23                         *((volatile unsigned int*)(0x424E0234UL))
#define bM0P_ADC_ADSIN1_SCHSL24                         *((volatile unsigned int*)(0x424E0238UL))
#define bM0P_ADC_ADSIN1_SCHSL30                         *((volatile unsigned int*)(0x424E023CUL))
#define bM0P_ADC_ADSIN1_SCHSL31                         *((volatile unsigned int*)(0x424E0240UL))
#define bM0P_ADC_ADSIN1_SCHSL32                         *((volatile unsigned int*)(0x424E0244UL))
#define bM0P_ADC_ADSIN1_SCHSL33                         *((volatile unsigned int*)(0x424E0248UL))
#define bM0P_ADC_ADSIN1_SCHSL34                         *((volatile unsigned int*)(0x424E024CUL))
#define bM0P_ADC_ADSIN1_SCHSL40                         *((volatile unsigned int*)(0x424E0250UL))
#define bM0P_ADC_ADSIN1_SCHSL41                         *((volatile unsigned int*)(0x424E0254UL))
#define bM0P_ADC_ADSIN1_SCHSL42                         *((volatile unsigned int*)(0x424E0258UL))
#define bM0P_ADC_ADSIN1_SCHSL43                         *((volatile unsigned int*)(0x424E025CUL))
#define bM0P_ADC_ADSIN1_SCHSL44                         *((volatile unsigned int*)(0x424E0260UL))
#define bM0P_ADC_ADSIN1_SCHSL50                         *((volatile unsigned int*)(0x424E0264UL))
#define bM0P_ADC_ADSIN1_SCHSL51                         *((volatile unsigned int*)(0x424E0268UL))
#define bM0P_ADC_ADSIN1_SCHSL52                         *((volatile unsigned int*)(0x424E026CUL))
#define bM0P_ADC_ADSIN1_SCHSL53                         *((volatile unsigned int*)(0x424E0270UL))
#define bM0P_ADC_ADSIN1_SCHSL54                         *((volatile unsigned int*)(0x424E0274UL))
#define bM0P_ADC_ADCPCTL_PCST                           *((volatile unsigned int*)(0x424E0300UL))
#define bM0P_ADC_ADCPCTL_PCTMEN                         *((volatile unsigned int*)(0x424E0304UL))
#define bM0P_ADC_ADCPCTL_EXTEN                          *((volatile unsigned int*)(0x424E0308UL))
#define bM0P_ADC_ADCPCTL_PCCLR                          *((volatile unsigned int*)(0x424E0310UL))
#define bM0P_ADC_ADCPCTL_POV                            *((volatile unsigned int*)(0x424E0314UL))
#define bM0P_ADC_ADCPCTL_PCFUL                          *((volatile unsigned int*)(0x424E0318UL))
#define bM0P_ADC_ADCPCTL_PCEMP                          *((volatile unsigned int*)(0x424E031CUL))
#define bM0P_ADC_PFS_PDPTH0                             *((volatile unsigned int*)(0x424E0320UL))
#define bM0P_ADC_PFS_PDPTH1                             *((volatile unsigned int*)(0x424E0324UL))
#define bM0P_ADC_PFD_PCH0                               *((volatile unsigned int*)(0x424E0380UL))
#define bM0P_ADC_PFD_PCH1                               *((volatile unsigned int*)(0x424E0384UL))
#define bM0P_ADC_PFD_PCH2                               *((volatile unsigned int*)(0x424E0388UL))
#define bM0P_ADC_PFD_PCH3                               *((volatile unsigned int*)(0x424E038CUL))
#define bM0P_ADC_PFD_PCH4                               *((volatile unsigned int*)(0x424E0390UL))
#define bM0P_ADC_PFD_PTRGM0                             *((volatile unsigned int*)(0x424E03A0UL))
#define bM0P_ADC_PFD_PTRGM1                             *((volatile unsigned int*)(0x424E03A4UL))
#define bM0P_ADC_PFD_PTRGM2                             *((volatile unsigned int*)(0x424E03A8UL))
#define bM0P_ADC_PFD_PVLD                               *((volatile unsigned int*)(0x424E03B0UL))
#define bM0P_ADC_PFD_PFD0                               *((volatile unsigned int*)(0x424E03D0UL))
#define bM0P_ADC_PFD_PFD1                               *((volatile unsigned int*)(0x424E03D4UL))
#define bM0P_ADC_PFD_PFD2                               *((volatile unsigned int*)(0x424E03D8UL))
#define bM0P_ADC_PFD_PFD3                               *((volatile unsigned int*)(0x424E03DCUL))
#define bM0P_ADC_PFD_PFD4                               *((volatile unsigned int*)(0x424E03E0UL))
#define bM0P_ADC_PFD_PFD5                               *((volatile unsigned int*)(0x424E03E4UL))
#define bM0P_ADC_PFD_PFD6                               *((volatile unsigned int*)(0x424E03E8UL))
#define bM0P_ADC_PFD_PFD7                               *((volatile unsigned int*)(0x424E03ECUL))
#define bM0P_ADC_PFD_PFD8                               *((volatile unsigned int*)(0x424E03F0UL))
#define bM0P_ADC_PFD_PFD9                               *((volatile unsigned int*)(0x424E03F4UL))
#define bM0P_ADC_PFD_PFD10                              *((volatile unsigned int*)(0x424E03F8UL))
#define bM0P_ADC_PFD_PFD11                              *((volatile unsigned int*)(0x424E03FCUL))
#define bM0P_ADC_ADPIN_L1CH0                            *((volatile unsigned int*)(0x424E0400UL))
#define bM0P_ADC_ADPIN_L1CH1                            *((volatile unsigned int*)(0x424E0404UL))
#define bM0P_ADC_ADPIN_L1CH2                            *((volatile unsigned int*)(0x424E0408UL))
#define bM0P_ADC_ADPIN_L1CH3                            *((volatile unsigned int*)(0x424E040CUL))
#define bM0P_ADC_ADPIN_L1CH4                            *((volatile unsigned int*)(0x424E0410UL))
#define bM0P_ADC_ADPIN_L2CH0                            *((volatile unsigned int*)(0x424E0420UL))
#define bM0P_ADC_ADPIN_L2CH1                            *((volatile unsigned int*)(0x424E0424UL))
#define bM0P_ADC_ADPIN_L2CH2                            *((volatile unsigned int*)(0x424E0428UL))
#define bM0P_ADC_ADPIN_L2CH3                            *((volatile unsigned int*)(0x424E042CUL))
#define bM0P_ADC_ADPIN_L2CH4                            *((volatile unsigned int*)(0x424E0430UL))
#define bM0P_ADC_ADCMPCTL_CMPCH0                        *((volatile unsigned int*)(0x424E0480UL))
#define bM0P_ADC_ADCMPCTL_CMPCH1                        *((volatile unsigned int*)(0x424E0484UL))
#define bM0P_ADC_ADCMPCTL_CMPCH2                        *((volatile unsigned int*)(0x424E0488UL))
#define bM0P_ADC_ADCMPCTL_CMPCH3                        *((volatile unsigned int*)(0x424E048CUL))
#define bM0P_ADC_ADCMPCTL_CMPCH4                        *((volatile unsigned int*)(0x424E0490UL))
#define bM0P_ADC_ADCMPCTL_CMPMD0                        *((volatile unsigned int*)(0x424E0494UL))
#define bM0P_ADC_ADCMPCTL_CMPMD1                        *((volatile unsigned int*)(0x424E0498UL))
#define bM0P_ADC_ADCMPCTL_CMPEN                         *((volatile unsigned int*)(0x424E049CUL))
#define bM0P_ADC_ADCMPD_CD0                             *((volatile unsigned int*)(0x424E04D8UL))
#define bM0P_ADC_ADCMPD_CD1                             *((volatile unsigned int*)(0x424E04DCUL))
#define bM0P_ADC_ADCMPD_CD2                             *((volatile unsigned int*)(0x424E04E0UL))
#define bM0P_ADC_ADCMPD_CD3                             *((volatile unsigned int*)(0x424E04E4UL))
#define bM0P_ADC_ADCMPD_CD4                             *((volatile unsigned int*)(0x424E04E8UL))
#define bM0P_ADC_ADCMPD_CD5                             *((volatile unsigned int*)(0x424E04ECUL))
#define bM0P_ADC_ADCMPD_CD6                             *((volatile unsigned int*)(0x424E04F0UL))
#define bM0P_ADC_ADCMPD_CD7                             *((volatile unsigned int*)(0x424E04F4UL))
#define bM0P_ADC_ADCMPD_CD8                             *((volatile unsigned int*)(0x424E04F8UL))
#define bM0P_ADC_ADCMPD_CD9                             *((volatile unsigned int*)(0x424E04FCUL))
#define bM0P_ADC_STSEL_STCH0                            *((volatile unsigned int*)(0x424E0500UL))
#define bM0P_ADC_STSEL_STCH1                            *((volatile unsigned int*)(0x424E0504UL))
#define bM0P_ADC_STSEL_STCH2                            *((volatile unsigned int*)(0x424E0508UL))
#define bM0P_ADC_STSEL_STCH3                            *((volatile unsigned int*)(0x424E050CUL))
#define bM0P_ADC_STSEL_STCH8                            *((volatile unsigned int*)(0x424E0520UL))
#define bM0P_ADC_STSEL_STCH9                            *((volatile unsigned int*)(0x424E0524UL))
#define bM0P_ADC_STSEL_STCH10                           *((volatile unsigned int*)(0x424E0528UL))
#define bM0P_ADC_STSEL_STCH11                           *((volatile unsigned int*)(0x424E052CUL))
#define bM0P_ADC_STSEL_STCH12                           *((volatile unsigned int*)(0x424E0530UL))
#define bM0P_ADC_STSEL_STCH13                           *((volatile unsigned int*)(0x424E0534UL))
#define bM0P_ADC_STSEL_STCH14                           *((volatile unsigned int*)(0x424E0538UL))
#define bM0P_ADC_STSEL_STCH15                           *((volatile unsigned int*)(0x424E053CUL))
#define bM0P_ADC_STS0_TM00                              *((volatile unsigned int*)(0x424E0600UL))
#define bM0P_ADC_STS0_TM01                              *((volatile unsigned int*)(0x424E0604UL))
#define bM0P_ADC_STS1_TM10                              *((volatile unsigned int*)(0x424E0620UL))
#define bM0P_ADC_STS1_TM11                              *((volatile unsigned int*)(0x424E0624UL))
#define bM0P_ADC_ADCDIV_DIV0                            *((volatile unsigned int*)(0x424E0680UL))
#define bM0P_ADC_ADCDIV_DIV1                            *((volatile unsigned int*)(0x424E0684UL))
#define bM0P_ADC_ADCDIV_DIV2                            *((volatile unsigned int*)(0x424E0688UL))
#define bM0P_ADC_ADCDIV_DIV3                            *((volatile unsigned int*)(0x424E068CUL))
#define bM0P_ADC_ADCDIV_DIV4                            *((volatile unsigned int*)(0x424E0690UL))
#define bM0P_ADC_ADCDIV_DIV5                            *((volatile unsigned int*)(0x424E0694UL))
#define bM0P_ADC_ADCDIV_DIV6                            *((volatile unsigned int*)(0x424E0698UL))
#define bM0P_ADC_ADCSTSL_STRGIN0                        *((volatile unsigned int*)(0x424E0700UL))
#define bM0P_ADC_ADCSTSL_STRGIN1                        *((volatile unsigned int*)(0x424E0704UL))
#define bM0P_ADC_ADCSTSL_STRGIN2                        *((volatile unsigned int*)(0x424E0708UL))
#define bM0P_ADC_ADCSTSL_STRGIN3                        *((volatile unsigned int*)(0x424E070CUL))
#define bM0P_ADC_ADCPTSL_PTRGIN0                        *((volatile unsigned int*)(0x424E0720UL))
#define bM0P_ADC_ADCPTSL_PTRGIN1                        *((volatile unsigned int*)(0x424E0724UL))
#define bM0P_ADC_ADCPTSL_PTRGIN2                        *((volatile unsigned int*)(0x424E0728UL))
#define bM0P_ADC_ADCPTSL_PTRGIN3                        *((volatile unsigned int*)(0x424E072CUL))
#define bM0P_ADC_ADEN_AD_EN                             *((volatile unsigned int*)(0x424E0780UL))
#define bM0P_ADC_ADEN_ENRDY                             *((volatile unsigned int*)(0x424E0784UL))
#define bM0P_ADC_ADEN_ENTM0                             *((volatile unsigned int*)(0x424E07A0UL))
#define bM0P_ADC_ADEN_ENTM1                             *((volatile unsigned int*)(0x424E07A4UL))
#define bM0P_ADC_ADEN_ENTM2                             *((volatile unsigned int*)(0x424E07A8UL))
#define bM0P_ADC_ADEN_ENTM3                             *((volatile unsigned int*)(0x424E07ACUL))
#define bM0P_ADC_ADEN_ENTM4                             *((volatile unsigned int*)(0x424E07B0UL))
#define bM0P_ADC_ADEN_ENTM5                             *((volatile unsigned int*)(0x424E07B4UL))
#define bM0P_ADC_ADEN_ENTM6                             *((volatile unsigned int*)(0x424E07B8UL))
#define bM0P_ADC_ADEN_ENTM7                             *((volatile unsigned int*)(0x424E07BCUL))
#define bM0P_ADC_ADRCMPCTL_RCMPEN                       *((volatile unsigned int*)(0x424E0908UL))
#define bM0P_ADC_ADRCMPCTL_RCMPTRG                      *((volatile unsigned int*)(0x424E0910UL))
#define bM0P_ADC_ADRCMPCTL_RCMPCNT0                     *((volatile unsigned int*)(0x424E0914UL))
#define bM0P_ADC_ADRCMPCTL_RCMPCNT1                     *((volatile unsigned int*)(0x424E0918UL))
#define bM0P_ADC_ADRCMPCTL_RCMPCNT2                     *((volatile unsigned int*)(0x424E091CUL))
#define bM0P_ADC_ADRCMPCTL_RCMPCN_ST0                   *((volatile unsigned int*)(0x424E0934UL))
#define bM0P_ADC_ADRCMPCTL_RCMPCN_ST1                   *((volatile unsigned int*)(0x424E0938UL))
#define bM0P_ADC_ADRCMPCTL_RCMPCN_ST2                   *((volatile unsigned int*)(0x424E093CUL))
#define bM0P_ADC_ADRCMPS_RCMPCH0                        *((volatile unsigned int*)(0x424E0980UL))
#define bM0P_ADC_ADRCMPS_RCMPCH1                        *((volatile unsigned int*)(0x424E0984UL))
#define bM0P_ADC_ADRCMPS_RCMPCH2                        *((volatile unsigned int*)(0x424E0988UL))
#define bM0P_ADC_ADRCMPS_RCMPCH3                        *((volatile unsigned int*)(0x424E098CUL))
#define bM0P_ADC_ADRCMPS_RCMPCH4                        *((volatile unsigned int*)(0x424E0990UL))
#define bM0P_ADC_ADRCMPS_RCMPMD                         *((volatile unsigned int*)(0x424E0994UL))
#define bM0P_ADC_ADRCMPL_CDL0                           *((volatile unsigned int*)(0x424E0A18UL))
#define bM0P_ADC_ADRCMPL_CDL1                           *((volatile unsigned int*)(0x424E0A1CUL))
#define bM0P_ADC_ADRCMPL_CDL2                           *((volatile unsigned int*)(0x424E0A20UL))
#define bM0P_ADC_ADRCMPL_CDL3                           *((volatile unsigned int*)(0x424E0A24UL))
#define bM0P_ADC_ADRCMPL_CDL4                           *((volatile unsigned int*)(0x424E0A28UL))
#define bM0P_ADC_ADRCMPL_CDL5                           *((volatile unsigned int*)(0x424E0A2CUL))
#define bM0P_ADC_ADRCMPL_CDL6                           *((volatile unsigned int*)(0x424E0A30UL))
#define bM0P_ADC_ADRCMPL_CDL7                           *((volatile unsigned int*)(0x424E0A34UL))
#define bM0P_ADC_ADRCMPL_CDL8                           *((volatile unsigned int*)(0x424E0A38UL))
#define bM0P_ADC_ADRCMPL_CDL9                           *((volatile unsigned int*)(0x424E0A3CUL))
#define bM0P_ADC_ADRCMPH_CDH0                           *((volatile unsigned int*)(0x424E0A58UL))
#define bM0P_ADC_ADRCMPH_CDH1                           *((volatile unsigned int*)(0x424E0A5CUL))
#define bM0P_ADC_ADRCMPH_CDH2                           *((volatile unsigned int*)(0x424E0A60UL))
#define bM0P_ADC_ADRCMPH_CDH3                           *((volatile unsigned int*)(0x424E0A64UL))
#define bM0P_ADC_ADRCMPH_CDH4                           *((volatile unsigned int*)(0x424E0A68UL))
#define bM0P_ADC_ADRCMPH_CDH5                           *((volatile unsigned int*)(0x424E0A6CUL))
#define bM0P_ADC_ADRCMPH_CDH6                           *((volatile unsigned int*)(0x424E0A70UL))
#define bM0P_ADC_ADRCMPH_CDH7                           *((volatile unsigned int*)(0x424E0A74UL))
#define bM0P_ADC_ADRCMPH_CDH8                           *((volatile unsigned int*)(0x424E0A78UL))
#define bM0P_ADC_ADRCMPH_CDH9                           *((volatile unsigned int*)(0x424E0A7CUL))
#define bM0P_ADC_ADRCMPF_RCMPF                          *((volatile unsigned int*)(0x424E0A80UL))
#define bM0P_CLOCK_CTRL_HC_EN                           *((volatile unsigned int*)(0x42200000UL))
#define bM0P_CLOCK_CTRL_MAIN_EN                         *((volatile unsigned int*)(0x42200004UL))
#define bM0P_CLOCK_CTRL_SUB_EN                          *((volatile unsigned int*)(0x4220000CUL))
#define bM0P_CLOCK_CTRL_PLL_EN                          *((volatile unsigned int*)(0x42200010UL))
#define bM0P_CLOCK_CTRL_INPUT0                          *((volatile unsigned int*)(0x42200014UL))
#define bM0P_CLOCK_CTRL_INPUT1                          *((volatile unsigned int*)(0x42200018UL))
#define bM0P_CLOCK_CTRL_INPUT2                          *((volatile unsigned int*)(0x4220001CUL))
#define bM0P_CLOCK_CLK_STB_HC_RDY                       *((volatile unsigned int*)(0x42200080UL))
#define bM0P_CLOCK_CLK_STB_MAIN_RDY                     *((volatile unsigned int*)(0x42200084UL))
#define bM0P_CLOCK_CLK_STB_SUB_RDY                      *((volatile unsigned int*)(0x4220008CUL))
#define bM0P_CLOCK_CLK_STB_PLL_RDY                      *((volatile unsigned int*)(0x42200090UL))
#define bM0P_CLOCK_CLK_STB_SRC0                         *((volatile unsigned int*)(0x42200094UL))
#define bM0P_CLOCK_CLK_STB_SRC1                         *((volatile unsigned int*)(0x42200098UL))
#define bM0P_CLOCK_CLK_STB_SRC2                         *((volatile unsigned int*)(0x4220009CUL))
#define bM0P_CLOCK_LPM_CTL_STBM0                        *((volatile unsigned int*)(0x42200100UL))
#define bM0P_CLOCK_LPM_CTL_STBM1                        *((volatile unsigned int*)(0x42200104UL))
#define bM0P_CLOCK_LPM_CTL_SPLV                         *((volatile unsigned int*)(0x42200110UL))
#define bM0P_CLOCK_LPM_CTL_KEY0                         *((volatile unsigned int*)(0x42200140UL))
#define bM0P_CLOCK_LPM_CTL_KEY1                         *((volatile unsigned int*)(0x42200144UL))
#define bM0P_CLOCK_LPM_CTL_KEY2                         *((volatile unsigned int*)(0x42200148UL))
#define bM0P_CLOCK_LPM_CTL_KEY3                         *((volatile unsigned int*)(0x4220014CUL))
#define bM0P_CLOCK_LPM_CTL_KEY4                         *((volatile unsigned int*)(0x42200150UL))
#define bM0P_CLOCK_LPM_CTL_KEY5                         *((volatile unsigned int*)(0x42200154UL))
#define bM0P_CLOCK_LPM_CTL_KEY6                         *((volatile unsigned int*)(0x42200158UL))
#define bM0P_CLOCK_LPM_CTL_KEY7                         *((volatile unsigned int*)(0x4220015CUL))
#define bM0P_CLOCK_LPM_CTL_KEY8                         *((volatile unsigned int*)(0x42200160UL))
#define bM0P_CLOCK_LPM_CTL_KEY9                         *((volatile unsigned int*)(0x42200164UL))
#define bM0P_CLOCK_LPM_CTL_KEY10                        *((volatile unsigned int*)(0x42200168UL))
#define bM0P_CLOCK_LPM_CTL_KEY11                        *((volatile unsigned int*)(0x4220016CUL))
#define bM0P_CLOCK_LPM_CTL_KEY12                        *((volatile unsigned int*)(0x42200170UL))
#define bM0P_CLOCK_LPM_CTL_KEY13                        *((volatile unsigned int*)(0x42200174UL))
#define bM0P_CLOCK_LPM_CTL_KEY14                        *((volatile unsigned int*)(0x42200178UL))
#define bM0P_CLOCK_LPM_CTL_KEY15                        *((volatile unsigned int*)(0x4220017CUL))
#define bM0P_CLOCK_STAT_PWR                             *((volatile unsigned int*)(0x42200180UL))
#define bM0P_CLOCK_STAT_RSTB                            *((volatile unsigned int*)(0x42200184UL))
#define bM0P_CLOCK_STAT_LVD                             *((volatile unsigned int*)(0x4220018CUL))
#define bM0P_CLOCK_STAT_SWWDG                           *((volatile unsigned int*)(0x42200190UL))
#define bM0P_CLOCK_STAT_HWWDG                           *((volatile unsigned int*)(0x42200194UL))
#define bM0P_CLOCK_STAT_CF                              *((volatile unsigned int*)(0x42200198UL))
#define bM0P_CLOCK_STAT_AF                              *((volatile unsigned int*)(0x4220019CUL))
#define bM0P_CLOCK_STAT_SW                              *((volatile unsigned int*)(0x422001A0UL))
#define bM0P_CLOCK_BC_DIV_DIV0                          *((volatile unsigned int*)(0x42200200UL))
#define bM0P_CLOCK_BC_DIV_DIV1                          *((volatile unsigned int*)(0x42200204UL))
#define bM0P_CLOCK_BC_DIV_DIV2                          *((volatile unsigned int*)(0x42200208UL))
#define bM0P_CLOCK_APB0_CTRL_DIV0                       *((volatile unsigned int*)(0x42200280UL))
#define bM0P_CLOCK_APB0_CTRL_DIV1                       *((volatile unsigned int*)(0x42200284UL))
#define bM0P_CLOCK_APB1_CTRL_DIV0                       *((volatile unsigned int*)(0x42200300UL))
#define bM0P_CLOCK_APB1_CTRL_DIV1                       *((volatile unsigned int*)(0x42200304UL))
#define bM0P_CLOCK_APB1_CTRL_RST                        *((volatile unsigned int*)(0x42200310UL))
#define bM0P_CLOCK_APB1_CTRL_EN                         *((volatile unsigned int*)(0x4220031CUL))
#define bM0P_CLOCK_SWDG_CTRL_DIV0                       *((volatile unsigned int*)(0x42200400UL))
#define bM0P_CLOCK_SWDG_CTRL_DIV1                       *((volatile unsigned int*)(0x42200404UL))
#define bM0P_CLOCK_SWDG_CTRL_SWCKE                      *((volatile unsigned int*)(0x42200410UL))
#define bM0P_CLOCK_SWDG_CTRL_HWCKE                      *((volatile unsigned int*)(0x42200414UL))
#define bM0P_CLOCK_SWDG_CTRL_DTCKE                      *((volatile unsigned int*)(0x42200418UL))
#define bM0P_CLOCK_CSWT_MAINWT0                         *((volatile unsigned int*)(0x42200600UL))
#define bM0P_CLOCK_CSWT_MAINWT1                         *((volatile unsigned int*)(0x42200604UL))
#define bM0P_CLOCK_CSWT_MAINWT2                         *((volatile unsigned int*)(0x42200608UL))
#define bM0P_CLOCK_CSWT_MAINWT3                         *((volatile unsigned int*)(0x4220060CUL))
#define bM0P_CLOCK_CSWT_SUBWT0                          *((volatile unsigned int*)(0x42200610UL))
#define bM0P_CLOCK_CSWT_SUBWT1                          *((volatile unsigned int*)(0x42200614UL))
#define bM0P_CLOCK_CSWT_SUBWT2                          *((volatile unsigned int*)(0x42200618UL))
#define bM0P_CLOCK_CSWT_SUBWT3                          *((volatile unsigned int*)(0x4220061CUL))
#define bM0P_CLOCK_PSWT_PLLWT0                          *((volatile unsigned int*)(0x42200680UL))
#define bM0P_CLOCK_PSWT_PLLWT1                          *((volatile unsigned int*)(0x42200684UL))
#define bM0P_CLOCK_PLL_CTL1_PLLFO0                      *((volatile unsigned int*)(0x42200700UL))
#define bM0P_CLOCK_PLL_CTL1_PLLFO1                      *((volatile unsigned int*)(0x42200704UL))
#define bM0P_CLOCK_PLL_CTL1_PLLFO2                      *((volatile unsigned int*)(0x42200708UL))
#define bM0P_CLOCK_PLL_CTL1_PLLFR0                      *((volatile unsigned int*)(0x42200710UL))
#define bM0P_CLOCK_PLL_CTL1_PLLFR1                      *((volatile unsigned int*)(0x42200714UL))
#define bM0P_CLOCK_PLL_CTL2_PLLN0                       *((volatile unsigned int*)(0x42200780UL))
#define bM0P_CLOCK_PLL_CTL2_PLLN1                       *((volatile unsigned int*)(0x42200784UL))
#define bM0P_CLOCK_PLL_CTL2_PLLN2                       *((volatile unsigned int*)(0x42200788UL))
#define bM0P_CLOCK_PLL_CTL2_PLLN3                       *((volatile unsigned int*)(0x4220078CUL))
#define bM0P_CLOCK_PLL_CTL2_PRS                         *((volatile unsigned int*)(0x42200790UL))
#define bM0P_CLOCK_FCM_CTL_MFCME                        *((volatile unsigned int*)(0x42200800UL))
#define bM0P_CLOCK_FCM_CTL_SFCME                        *((volatile unsigned int*)(0x42200804UL))
#define bM0P_CLOCK_FCM_CTL_MFCMRE                       *((volatile unsigned int*)(0x42200808UL))
#define bM0P_CLOCK_FCM_CTL_SFCMRE                       *((volatile unsigned int*)(0x4220080CUL))
#define bM0P_CLOCK_FCM_CTL_AFDE                         *((volatile unsigned int*)(0x42200820UL))
#define bM0P_CLOCK_FCM_CTL_AFDRE                        *((volatile unsigned int*)(0x42200824UL))
#define bM0P_CLOCK_FCM_CTL_AFDCC0                       *((volatile unsigned int*)(0x42200830UL))
#define bM0P_CLOCK_FCM_CTL_AFDCC1                       *((volatile unsigned int*)(0x42200834UL))
#define bM0P_CLOCK_FCM_CTL_AFDCC2                       *((volatile unsigned int*)(0x42200838UL))
#define bM0P_CLOCK_FCM_STR_MCFDF                        *((volatile unsigned int*)(0x42200880UL))
#define bM0P_CLOCK_FCM_STR_SCFDF                        *((volatile unsigned int*)(0x42200884UL))
#define bM0P_CLOCK_DBWDT_CTRL_SWWDG_BRK                 *((volatile unsigned int*)(0x42200A94UL))
#define bM0P_CLOCK_DBWDT_CTRL_HWWDG_BRK                 *((volatile unsigned int*)(0x42200A9CUL))
#define bM0P_CLOCK_INT_CTRL_MAINEN                      *((volatile unsigned int*)(0x42200C00UL))
#define bM0P_CLOCK_INT_CTRL_SUBEN                       *((volatile unsigned int*)(0x42200C04UL))
#define bM0P_CLOCK_INT_CTRL_PLLEN                       *((volatile unsigned int*)(0x42200C08UL))
#define bM0P_CLOCK_INT_CTRL_AFDEN                       *((volatile unsigned int*)(0x42200C14UL))
#define bM0P_CLOCK_INT_PEND_MAIN                        *((volatile unsigned int*)(0x42200C80UL))
#define bM0P_CLOCK_INT_PEND_SUB                         *((volatile unsigned int*)(0x42200C84UL))
#define bM0P_CLOCK_INT_PEND_PLL                         *((volatile unsigned int*)(0x42200C88UL))
#define bM0P_CLOCK_INT_PEND_AFD                         *((volatile unsigned int*)(0x42200C94UL))
#define bM0P_CLOCK_INT_CLR_MAIN                         *((volatile unsigned int*)(0x42200D00UL))
#define bM0P_CLOCK_INT_CLR_SUB                          *((volatile unsigned int*)(0x42200D04UL))
#define bM0P_CLOCK_INT_CLR_PLL                          *((volatile unsigned int*)(0x42200D08UL))
#define bM0P_CLOCK_INT_CLR_AFD                          *((volatile unsigned int*)(0x42200D14UL))
#define bM0P_CLOCK_COUNTER_CNTRD_CNT0                   *((volatile unsigned int*)(0x42740000UL))
#define bM0P_CLOCK_COUNTER_CNTRD_CNT1                   *((volatile unsigned int*)(0x42740004UL))
#define bM0P_CLOCK_COUNTER_CNTRD_CNT2                   *((volatile unsigned int*)(0x42740008UL))
#define bM0P_CLOCK_COUNTER_CNTRD_CNT3                   *((volatile unsigned int*)(0x4274000CUL))
#define bM0P_CLOCK_COUNTER_CNTRD_CNT4                   *((volatile unsigned int*)(0x42740010UL))
#define bM0P_CLOCK_COUNTER_CNTRD_CNT5                   *((volatile unsigned int*)(0x42740014UL))
#define bM0P_CLOCK_COUNTER_CNTRL_RLC0                   *((volatile unsigned int*)(0x42740020UL))
#define bM0P_CLOCK_COUNTER_CNTRL_RLC1                   *((volatile unsigned int*)(0x42740024UL))
#define bM0P_CLOCK_COUNTER_CNTRL_RLC2                   *((volatile unsigned int*)(0x42740028UL))
#define bM0P_CLOCK_COUNTER_CNTRL_RLC3                   *((volatile unsigned int*)(0x4274002CUL))
#define bM0P_CLOCK_COUNTER_CNTRL_RLC4                   *((volatile unsigned int*)(0x42740030UL))
#define bM0P_CLOCK_COUNTER_CNTRL_RLC5                   *((volatile unsigned int*)(0x42740034UL))
#define bM0P_CLOCK_COUNTER_CNTC_CNTIF                   *((volatile unsigned int*)(0x42740040UL))
#define bM0P_CLOCK_COUNTER_CNTC_CNTIE                   *((volatile unsigned int*)(0x42740044UL))
#define bM0P_CLOCK_COUNTER_CNTC_CCS0                    *((volatile unsigned int*)(0x42740048UL))
#define bM0P_CLOCK_COUNTER_CNTC_CCS1                    *((volatile unsigned int*)(0x4274004CUL))
#define bM0P_CLOCK_COUNTER_CNTC_CNTOP                   *((volatile unsigned int*)(0x42740058UL))
#define bM0P_CLOCK_COUNTER_CNTC_CNTEN                   *((volatile unsigned int*)(0x4274005CUL))
#define bM0P_CLOCK_COUNTER_CNT_CLK0_CKSEL0              *((volatile unsigned int*)(0x42740200UL))
#define bM0P_CLOCK_COUNTER_CNT_CLK0_CKSEL1              *((volatile unsigned int*)(0x42740204UL))
#define bM0P_CLOCK_COUNTER_CNT_CLK0_DIV0                *((volatile unsigned int*)(0x42740220UL))
#define bM0P_CLOCK_COUNTER_CNT_CLK0_DIV1                *((volatile unsigned int*)(0x42740224UL))
#define bM0P_CLOCK_COUNTER_CNT_CLK0_DIV2                *((volatile unsigned int*)(0x42740228UL))
#define bM0P_CLOCK_COUNTER_CNT_CLK1_CKEN                *((volatile unsigned int*)(0x42740280UL))
#define bM0P_CLOCK_COUNTER_CNT_CLK1_RCKEN               *((volatile unsigned int*)(0x42740284UL))
#define bM0P_CTIOSEL03_CTSEL0123_SEL010                 *((volatile unsigned int*)(0x424A2020UL))
#define bM0P_CTIOSEL03_CTSEL0123_SEL011                 *((volatile unsigned int*)(0x424A2024UL))
#define bM0P_CTIOSEL03_CTSEL0123_SEL012                 *((volatile unsigned int*)(0x424A2028UL))
#define bM0P_CTIOSEL03_CTSEL0123_SEL013                 *((volatile unsigned int*)(0x424A202CUL))
#define bM0P_CTIOSEL03_CTSEL0123_SEL230                 *((volatile unsigned int*)(0x424A2030UL))
#define bM0P_CTIOSEL03_CTSEL0123_SEL231                 *((volatile unsigned int*)(0x424A2034UL))
#define bM0P_CTIOSEL03_CTSEL0123_SEL232                 *((volatile unsigned int*)(0x424A2038UL))
#define bM0P_CTIOSEL03_CTSEL0123_SEL233                 *((volatile unsigned int*)(0x424A203CUL))
#define bM0P_CTSSSR_CTSSSR_SSSR0                        *((volatile unsigned int*)(0x424BFF80UL))
#define bM0P_CTSSSR_CTSSSR_SSSR1                        *((volatile unsigned int*)(0x424BFF84UL))
#define bM0P_CTSSSR_CTSSSR_SSSR2                        *((volatile unsigned int*)(0x424BFF88UL))
#define bM0P_CTSSSR_CTSSSR_SSSR3                        *((volatile unsigned int*)(0x424BFF8CUL))
#define bM0P_CTSSSR_CTSSSR_SSSR4                        *((volatile unsigned int*)(0x424BFF90UL))
#define bM0P_CTSSSR_CTSSSR_SSSR5                        *((volatile unsigned int*)(0x424BFF94UL))
#define bM0P_CTSSSR_CTSSSR_SSSR6                        *((volatile unsigned int*)(0x424BFF98UL))
#define bM0P_CTSSSR_CTSSSR_SSSR7                        *((volatile unsigned int*)(0x424BFF9CUL))
#define bM0P_CT0_PPG_TCR_START                          *((volatile unsigned int*)(0x424A0180UL))
#define bM0P_CT0_PPG_TCR_ENCNT                          *((volatile unsigned int*)(0x424A0184UL))
#define bM0P_CT0_PPG_TCR_MODS                           *((volatile unsigned int*)(0x424A0188UL))
#define bM0P_CT0_PPG_TCR_PLRT                           *((volatile unsigned int*)(0x424A018CUL))
#define bM0P_CT0_PPG_TCR_FUNC0                          *((volatile unsigned int*)(0x424A0190UL))
#define bM0P_CT0_PPG_TCR_FUNC1                          *((volatile unsigned int*)(0x424A0194UL))
#define bM0P_CT0_PPG_TCR_FUNC2                          *((volatile unsigned int*)(0x424A0198UL))
#define bM0P_CT0_PPG_TCR_EDGS0                          *((volatile unsigned int*)(0x424A01A0UL))
#define bM0P_CT0_PPG_TCR_EDGS1                          *((volatile unsigned int*)(0x424A01A4UL))
#define bM0P_CT0_PPG_TCR_MASK                           *((volatile unsigned int*)(0x424A01A8UL))
#define bM0P_CT0_PPG_TCR_RSTEN                          *((volatile unsigned int*)(0x424A01ACUL))
#define bM0P_CT0_PPG_TCR_CLKS0                          *((volatile unsigned int*)(0x424A01B0UL))
#define bM0P_CT0_PPG_TCR_CLKS1                          *((volatile unsigned int*)(0x424A01B4UL))
#define bM0P_CT0_PPG_TCR_CLKS2                          *((volatile unsigned int*)(0x424A01B8UL))
#define bM0P_CT0_PPG_STA_UDFIR                          *((volatile unsigned int*)(0x424A0200UL))
#define bM0P_CT0_PPG_STA_TRGIR                          *((volatile unsigned int*)(0x424A0208UL))
#define bM0P_CT0_PPG_STA_UDFIE                          *((volatile unsigned int*)(0x424A0210UL))
#define bM0P_CT0_PPG_STA_TRGIE                          *((volatile unsigned int*)(0x424A0218UL))
#define bM0P_CT0_PPG_TCR2_CLKS3                         *((volatile unsigned int*)(0x424A0220UL))
#define bM0P_CT1_PPG_TCR_START                          *((volatile unsigned int*)(0x424A0980UL))
#define bM0P_CT1_PPG_TCR_ENCNT                          *((volatile unsigned int*)(0x424A0984UL))
#define bM0P_CT1_PPG_TCR_MODS                           *((volatile unsigned int*)(0x424A0988UL))
#define bM0P_CT1_PPG_TCR_PLRT                           *((volatile unsigned int*)(0x424A098CUL))
#define bM0P_CT1_PPG_TCR_FUNC0                          *((volatile unsigned int*)(0x424A0990UL))
#define bM0P_CT1_PPG_TCR_FUNC1                          *((volatile unsigned int*)(0x424A0994UL))
#define bM0P_CT1_PPG_TCR_FUNC2                          *((volatile unsigned int*)(0x424A0998UL))
#define bM0P_CT1_PPG_TCR_EDGS0                          *((volatile unsigned int*)(0x424A09A0UL))
#define bM0P_CT1_PPG_TCR_EDGS1                          *((volatile unsigned int*)(0x424A09A4UL))
#define bM0P_CT1_PPG_TCR_MASK                           *((volatile unsigned int*)(0x424A09A8UL))
#define bM0P_CT1_PPG_TCR_RSTEN                          *((volatile unsigned int*)(0x424A09ACUL))
#define bM0P_CT1_PPG_TCR_CLKS0                          *((volatile unsigned int*)(0x424A09B0UL))
#define bM0P_CT1_PPG_TCR_CLKS1                          *((volatile unsigned int*)(0x424A09B4UL))
#define bM0P_CT1_PPG_TCR_CLKS2                          *((volatile unsigned int*)(0x424A09B8UL))
#define bM0P_CT1_PPG_STA_UDFIR                          *((volatile unsigned int*)(0x424A0A00UL))
#define bM0P_CT1_PPG_STA_TRGIR                          *((volatile unsigned int*)(0x424A0A08UL))
#define bM0P_CT1_PPG_STA_UDFIE                          *((volatile unsigned int*)(0x424A0A10UL))
#define bM0P_CT1_PPG_STA_TRGIE                          *((volatile unsigned int*)(0x424A0A18UL))
#define bM0P_CT1_PPG_TCR2_CLKS3                         *((volatile unsigned int*)(0x424A0A20UL))
#define bM0P_CT2_PPG_TCR_START                          *((volatile unsigned int*)(0x424A1180UL))
#define bM0P_CT2_PPG_TCR_ENCNT                          *((volatile unsigned int*)(0x424A1184UL))
#define bM0P_CT2_PPG_TCR_MODS                           *((volatile unsigned int*)(0x424A1188UL))
#define bM0P_CT2_PPG_TCR_PLRT                           *((volatile unsigned int*)(0x424A118CUL))
#define bM0P_CT2_PPG_TCR_FUNC0                          *((volatile unsigned int*)(0x424A1190UL))
#define bM0P_CT2_PPG_TCR_FUNC1                          *((volatile unsigned int*)(0x424A1194UL))
#define bM0P_CT2_PPG_TCR_FUNC2                          *((volatile unsigned int*)(0x424A1198UL))
#define bM0P_CT2_PPG_TCR_EDGS0                          *((volatile unsigned int*)(0x424A11A0UL))
#define bM0P_CT2_PPG_TCR_EDGS1                          *((volatile unsigned int*)(0x424A11A4UL))
#define bM0P_CT2_PPG_TCR_MASK                           *((volatile unsigned int*)(0x424A11A8UL))
#define bM0P_CT2_PPG_TCR_RSTEN                          *((volatile unsigned int*)(0x424A11ACUL))
#define bM0P_CT2_PPG_TCR_CLKS0                          *((volatile unsigned int*)(0x424A11B0UL))
#define bM0P_CT2_PPG_TCR_CLKS1                          *((volatile unsigned int*)(0x424A11B4UL))
#define bM0P_CT2_PPG_TCR_CLKS2                          *((volatile unsigned int*)(0x424A11B8UL))
#define bM0P_CT2_PPG_STA_UDFIR                          *((volatile unsigned int*)(0x424A1200UL))
#define bM0P_CT2_PPG_STA_TRGIR                          *((volatile unsigned int*)(0x424A1208UL))
#define bM0P_CT2_PPG_STA_UDFIE                          *((volatile unsigned int*)(0x424A1210UL))
#define bM0P_CT2_PPG_STA_TRGIE                          *((volatile unsigned int*)(0x424A1218UL))
#define bM0P_CT2_PPG_TCR2_CLKS3                         *((volatile unsigned int*)(0x424A1220UL))
#define bM0P_CT3_PPG_TCR_START                          *((volatile unsigned int*)(0x424A1980UL))
#define bM0P_CT3_PPG_TCR_ENCNT                          *((volatile unsigned int*)(0x424A1984UL))
#define bM0P_CT3_PPG_TCR_MODS                           *((volatile unsigned int*)(0x424A1988UL))
#define bM0P_CT3_PPG_TCR_PLRT                           *((volatile unsigned int*)(0x424A198CUL))
#define bM0P_CT3_PPG_TCR_FUNC0                          *((volatile unsigned int*)(0x424A1990UL))
#define bM0P_CT3_PPG_TCR_FUNC1                          *((volatile unsigned int*)(0x424A1994UL))
#define bM0P_CT3_PPG_TCR_FUNC2                          *((volatile unsigned int*)(0x424A1998UL))
#define bM0P_CT3_PPG_TCR_EDGS0                          *((volatile unsigned int*)(0x424A19A0UL))
#define bM0P_CT3_PPG_TCR_EDGS1                          *((volatile unsigned int*)(0x424A19A4UL))
#define bM0P_CT3_PPG_TCR_MASK                           *((volatile unsigned int*)(0x424A19A8UL))
#define bM0P_CT3_PPG_TCR_RSTEN                          *((volatile unsigned int*)(0x424A19ACUL))
#define bM0P_CT3_PPG_TCR_CLKS0                          *((volatile unsigned int*)(0x424A19B0UL))
#define bM0P_CT3_PPG_TCR_CLKS1                          *((volatile unsigned int*)(0x424A19B4UL))
#define bM0P_CT3_PPG_TCR_CLKS2                          *((volatile unsigned int*)(0x424A19B8UL))
#define bM0P_CT3_PPG_STA_UDFIR                          *((volatile unsigned int*)(0x424A1A00UL))
#define bM0P_CT3_PPG_STA_TRGIR                          *((volatile unsigned int*)(0x424A1A08UL))
#define bM0P_CT3_PPG_STA_UDFIE                          *((volatile unsigned int*)(0x424A1A10UL))
#define bM0P_CT3_PPG_STA_TRGIE                          *((volatile unsigned int*)(0x424A1A18UL))
#define bM0P_CT3_PPG_TCR2_CLKS3                         *((volatile unsigned int*)(0x424A1A20UL))
#define bM0P_CT0_PWC_TCR_ENCNT                          *((volatile unsigned int*)(0x424A0184UL))
#define bM0P_CT0_PWC_TCR_MODS                           *((volatile unsigned int*)(0x424A0188UL))
#define bM0P_CT0_PWC_TCR_FUNC0                          *((volatile unsigned int*)(0x424A0190UL))
#define bM0P_CT0_PWC_TCR_FUNC1                          *((volatile unsigned int*)(0x424A0194UL))
#define bM0P_CT0_PWC_TCR_FUNC2                          *((volatile unsigned int*)(0x424A0198UL))
#define bM0P_CT0_PWC_TCR_T32                            *((volatile unsigned int*)(0x424A019CUL))
#define bM0P_CT0_PWC_TCR_EDGS0                          *((volatile unsigned int*)(0x424A01A0UL))
#define bM0P_CT0_PWC_TCR_EDGS1                          *((volatile unsigned int*)(0x424A01A4UL))
#define bM0P_CT0_PWC_TCR_EDGS2                          *((volatile unsigned int*)(0x424A01A8UL))
#define bM0P_CT0_PWC_TCR_CLKS0                          *((volatile unsigned int*)(0x424A01B0UL))
#define bM0P_CT0_PWC_TCR_CLKS1                          *((volatile unsigned int*)(0x424A01B4UL))
#define bM0P_CT0_PWC_TCR_CLKS2                          *((volatile unsigned int*)(0x424A01B8UL))
#define bM0P_CT0_PWC_STA_OVIR                           *((volatile unsigned int*)(0x424A0200UL))
#define bM0P_CT0_PWC_STA_MCIR                           *((volatile unsigned int*)(0x424A0208UL))
#define bM0P_CT0_PWC_STA_OVIE                           *((volatile unsigned int*)(0x424A0210UL))
#define bM0P_CT0_PWC_STA_MCIE                           *((volatile unsigned int*)(0x424A0218UL))
#define bM0P_CT0_PWC_STA_ERR                            *((volatile unsigned int*)(0x424A021CUL))
#define bM0P_CT0_PWC_TCR2_CLKS3                         *((volatile unsigned int*)(0x424A0220UL))
#define bM0P_CT1_PWC_TCR_ENCNT                          *((volatile unsigned int*)(0x424A0984UL))
#define bM0P_CT1_PWC_TCR_MODS                           *((volatile unsigned int*)(0x424A0988UL))
#define bM0P_CT1_PWC_TCR_FUNC0                          *((volatile unsigned int*)(0x424A0990UL))
#define bM0P_CT1_PWC_TCR_FUNC1                          *((volatile unsigned int*)(0x424A0994UL))
#define bM0P_CT1_PWC_TCR_FUNC2                          *((volatile unsigned int*)(0x424A0998UL))
#define bM0P_CT1_PWC_TCR_T32                            *((volatile unsigned int*)(0x424A099CUL))
#define bM0P_CT1_PWC_TCR_EDGS0                          *((volatile unsigned int*)(0x424A09A0UL))
#define bM0P_CT1_PWC_TCR_EDGS1                          *((volatile unsigned int*)(0x424A09A4UL))
#define bM0P_CT1_PWC_TCR_EDGS2                          *((volatile unsigned int*)(0x424A09A8UL))
#define bM0P_CT1_PWC_TCR_CLKS0                          *((volatile unsigned int*)(0x424A09B0UL))
#define bM0P_CT1_PWC_TCR_CLKS1                          *((volatile unsigned int*)(0x424A09B4UL))
#define bM0P_CT1_PWC_TCR_CLKS2                          *((volatile unsigned int*)(0x424A09B8UL))
#define bM0P_CT1_PWC_STA_OVIR                           *((volatile unsigned int*)(0x424A0A00UL))
#define bM0P_CT1_PWC_STA_MCIR                           *((volatile unsigned int*)(0x424A0A08UL))
#define bM0P_CT1_PWC_STA_OVIE                           *((volatile unsigned int*)(0x424A0A10UL))
#define bM0P_CT1_PWC_STA_MCIE                           *((volatile unsigned int*)(0x424A0A18UL))
#define bM0P_CT1_PWC_STA_ERR                            *((volatile unsigned int*)(0x424A0A1CUL))
#define bM0P_CT1_PWC_TCR2_CLKS3                         *((volatile unsigned int*)(0x424A0A20UL))
#define bM0P_CT2_PWC_TCR_ENCNT                          *((volatile unsigned int*)(0x424A1184UL))
#define bM0P_CT2_PWC_TCR_MODS                           *((volatile unsigned int*)(0x424A1188UL))
#define bM0P_CT2_PWC_TCR_FUNC0                          *((volatile unsigned int*)(0x424A1190UL))
#define bM0P_CT2_PWC_TCR_FUNC1                          *((volatile unsigned int*)(0x424A1194UL))
#define bM0P_CT2_PWC_TCR_FUNC2                          *((volatile unsigned int*)(0x424A1198UL))
#define bM0P_CT2_PWC_TCR_T32                            *((volatile unsigned int*)(0x424A119CUL))
#define bM0P_CT2_PWC_TCR_EDGS0                          *((volatile unsigned int*)(0x424A11A0UL))
#define bM0P_CT2_PWC_TCR_EDGS1                          *((volatile unsigned int*)(0x424A11A4UL))
#define bM0P_CT2_PWC_TCR_EDGS2                          *((volatile unsigned int*)(0x424A11A8UL))
#define bM0P_CT2_PWC_TCR_CLKS0                          *((volatile unsigned int*)(0x424A11B0UL))
#define bM0P_CT2_PWC_TCR_CLKS1                          *((volatile unsigned int*)(0x424A11B4UL))
#define bM0P_CT2_PWC_TCR_CLKS2                          *((volatile unsigned int*)(0x424A11B8UL))
#define bM0P_CT2_PWC_STA_OVIR                           *((volatile unsigned int*)(0x424A1200UL))
#define bM0P_CT2_PWC_STA_MCIR                           *((volatile unsigned int*)(0x424A1208UL))
#define bM0P_CT2_PWC_STA_OVIE                           *((volatile unsigned int*)(0x424A1210UL))
#define bM0P_CT2_PWC_STA_MCIE                           *((volatile unsigned int*)(0x424A1218UL))
#define bM0P_CT2_PWC_STA_ERR                            *((volatile unsigned int*)(0x424A121CUL))
#define bM0P_CT2_PWC_TCR2_CLKS3                         *((volatile unsigned int*)(0x424A1220UL))
#define bM0P_CT3_PWC_TCR_ENCNT                          *((volatile unsigned int*)(0x424A1984UL))
#define bM0P_CT3_PWC_TCR_MODS                           *((volatile unsigned int*)(0x424A1988UL))
#define bM0P_CT3_PWC_TCR_FUNC0                          *((volatile unsigned int*)(0x424A1990UL))
#define bM0P_CT3_PWC_TCR_FUNC1                          *((volatile unsigned int*)(0x424A1994UL))
#define bM0P_CT3_PWC_TCR_FUNC2                          *((volatile unsigned int*)(0x424A1998UL))
#define bM0P_CT3_PWC_TCR_T32                            *((volatile unsigned int*)(0x424A199CUL))
#define bM0P_CT3_PWC_TCR_EDGS0                          *((volatile unsigned int*)(0x424A19A0UL))
#define bM0P_CT3_PWC_TCR_EDGS1                          *((volatile unsigned int*)(0x424A19A4UL))
#define bM0P_CT3_PWC_TCR_EDGS2                          *((volatile unsigned int*)(0x424A19A8UL))
#define bM0P_CT3_PWC_TCR_CLKS0                          *((volatile unsigned int*)(0x424A19B0UL))
#define bM0P_CT3_PWC_TCR_CLKS1                          *((volatile unsigned int*)(0x424A19B4UL))
#define bM0P_CT3_PWC_TCR_CLKS2                          *((volatile unsigned int*)(0x424A19B8UL))
#define bM0P_CT3_PWC_STA_OVIR                           *((volatile unsigned int*)(0x424A1A00UL))
#define bM0P_CT3_PWC_STA_MCIR                           *((volatile unsigned int*)(0x424A1A08UL))
#define bM0P_CT3_PWC_STA_OVIE                           *((volatile unsigned int*)(0x424A1A10UL))
#define bM0P_CT3_PWC_STA_MCIE                           *((volatile unsigned int*)(0x424A1A18UL))
#define bM0P_CT3_PWC_STA_ERR                            *((volatile unsigned int*)(0x424A1A1CUL))
#define bM0P_CT3_PWC_TCR2_CLKS3                         *((volatile unsigned int*)(0x424A1A20UL))
#define bM0P_CT0_PWM_TCR_START                          *((volatile unsigned int*)(0x424A0180UL))
#define bM0P_CT0_PWM_TCR_ENCNT                          *((volatile unsigned int*)(0x424A0184UL))
#define bM0P_CT0_PWM_TCR_MODS                           *((volatile unsigned int*)(0x424A0188UL))
#define bM0P_CT0_PWM_TCR_PLRT                           *((volatile unsigned int*)(0x424A018CUL))
#define bM0P_CT0_PWM_TCR_FUNC0                          *((volatile unsigned int*)(0x424A0190UL))
#define bM0P_CT0_PWM_TCR_FUNC1                          *((volatile unsigned int*)(0x424A0194UL))
#define bM0P_CT0_PWM_TCR_FUNC2                          *((volatile unsigned int*)(0x424A0198UL))
#define bM0P_CT0_PWM_TCR_EDGS0                          *((volatile unsigned int*)(0x424A01A0UL))
#define bM0P_CT0_PWM_TCR_EDGS1                          *((volatile unsigned int*)(0x424A01A4UL))
#define bM0P_CT0_PWM_TCR_MASK                           *((volatile unsigned int*)(0x424A01A8UL))
#define bM0P_CT0_PWM_TCR_RSTEN                          *((volatile unsigned int*)(0x424A01ACUL))
#define bM0P_CT0_PWM_TCR_CLKS0                          *((volatile unsigned int*)(0x424A01B0UL))
#define bM0P_CT0_PWM_TCR_CLKS1                          *((volatile unsigned int*)(0x424A01B4UL))
#define bM0P_CT0_PWM_TCR_CLKS2                          *((volatile unsigned int*)(0x424A01B8UL))
#define bM0P_CT0_PWM_STA_UDFIR                          *((volatile unsigned int*)(0x424A0200UL))
#define bM0P_CT0_PWM_STA_DTMIR                          *((volatile unsigned int*)(0x424A0204UL))
#define bM0P_CT0_PWM_STA_TRGIR                          *((volatile unsigned int*)(0x424A0208UL))
#define bM0P_CT0_PWM_STA_UDFIE                          *((volatile unsigned int*)(0x424A0210UL))
#define bM0P_CT0_PWM_STA_DTMIE                          *((volatile unsigned int*)(0x424A0214UL))
#define bM0P_CT0_PWM_STA_TRGIE                          *((volatile unsigned int*)(0x424A0218UL))
#define bM0P_CT0_PWM_TCR2_CLKS3                         *((volatile unsigned int*)(0x424A0220UL))
#define bM0P_CT1_PWM_TCR_START                          *((volatile unsigned int*)(0x424A0980UL))
#define bM0P_CT1_PWM_TCR_ENCNT                          *((volatile unsigned int*)(0x424A0984UL))
#define bM0P_CT1_PWM_TCR_MODS                           *((volatile unsigned int*)(0x424A0988UL))
#define bM0P_CT1_PWM_TCR_PLRT                           *((volatile unsigned int*)(0x424A098CUL))
#define bM0P_CT1_PWM_TCR_FUNC0                          *((volatile unsigned int*)(0x424A0990UL))
#define bM0P_CT1_PWM_TCR_FUNC1                          *((volatile unsigned int*)(0x424A0994UL))
#define bM0P_CT1_PWM_TCR_FUNC2                          *((volatile unsigned int*)(0x424A0998UL))
#define bM0P_CT1_PWM_TCR_EDGS0                          *((volatile unsigned int*)(0x424A09A0UL))
#define bM0P_CT1_PWM_TCR_EDGS1                          *((volatile unsigned int*)(0x424A09A4UL))
#define bM0P_CT1_PWM_TCR_MASK                           *((volatile unsigned int*)(0x424A09A8UL))
#define bM0P_CT1_PWM_TCR_RSTEN                          *((volatile unsigned int*)(0x424A09ACUL))
#define bM0P_CT1_PWM_TCR_CLKS0                          *((volatile unsigned int*)(0x424A09B0UL))
#define bM0P_CT1_PWM_TCR_CLKS1                          *((volatile unsigned int*)(0x424A09B4UL))
#define bM0P_CT1_PWM_TCR_CLKS2                          *((volatile unsigned int*)(0x424A09B8UL))
#define bM0P_CT1_PWM_STA_UDFIR                          *((volatile unsigned int*)(0x424A0A00UL))
#define bM0P_CT1_PWM_STA_DTMIR                          *((volatile unsigned int*)(0x424A0A04UL))
#define bM0P_CT1_PWM_STA_TRGIR                          *((volatile unsigned int*)(0x424A0A08UL))
#define bM0P_CT1_PWM_STA_UDFIE                          *((volatile unsigned int*)(0x424A0A10UL))
#define bM0P_CT1_PWM_STA_DTMIE                          *((volatile unsigned int*)(0x424A0A14UL))
#define bM0P_CT1_PWM_STA_TRGIE                          *((volatile unsigned int*)(0x424A0A18UL))
#define bM0P_CT1_PWM_TCR2_CLKS3                         *((volatile unsigned int*)(0x424A0A20UL))
#define bM0P_CT2_PWM_TCR_START                          *((volatile unsigned int*)(0x424A1180UL))
#define bM0P_CT2_PWM_TCR_ENCNT                          *((volatile unsigned int*)(0x424A1184UL))
#define bM0P_CT2_PWM_TCR_MODS                           *((volatile unsigned int*)(0x424A1188UL))
#define bM0P_CT2_PWM_TCR_PLRT                           *((volatile unsigned int*)(0x424A118CUL))
#define bM0P_CT2_PWM_TCR_FUNC0                          *((volatile unsigned int*)(0x424A1190UL))
#define bM0P_CT2_PWM_TCR_FUNC1                          *((volatile unsigned int*)(0x424A1194UL))
#define bM0P_CT2_PWM_TCR_FUNC2                          *((volatile unsigned int*)(0x424A1198UL))
#define bM0P_CT2_PWM_TCR_EDGS0                          *((volatile unsigned int*)(0x424A11A0UL))
#define bM0P_CT2_PWM_TCR_EDGS1                          *((volatile unsigned int*)(0x424A11A4UL))
#define bM0P_CT2_PWM_TCR_MASK                           *((volatile unsigned int*)(0x424A11A8UL))
#define bM0P_CT2_PWM_TCR_RSTEN                          *((volatile unsigned int*)(0x424A11ACUL))
#define bM0P_CT2_PWM_TCR_CLKS0                          *((volatile unsigned int*)(0x424A11B0UL))
#define bM0P_CT2_PWM_TCR_CLKS1                          *((volatile unsigned int*)(0x424A11B4UL))
#define bM0P_CT2_PWM_TCR_CLKS2                          *((volatile unsigned int*)(0x424A11B8UL))
#define bM0P_CT2_PWM_STA_UDFIR                          *((volatile unsigned int*)(0x424A1200UL))
#define bM0P_CT2_PWM_STA_DTMIR                          *((volatile unsigned int*)(0x424A1204UL))
#define bM0P_CT2_PWM_STA_TRGIR                          *((volatile unsigned int*)(0x424A1208UL))
#define bM0P_CT2_PWM_STA_UDFIE                          *((volatile unsigned int*)(0x424A1210UL))
#define bM0P_CT2_PWM_STA_DTMIE                          *((volatile unsigned int*)(0x424A1214UL))
#define bM0P_CT2_PWM_STA_TRGIE                          *((volatile unsigned int*)(0x424A1218UL))
#define bM0P_CT2_PWM_TCR2_CLKS3                         *((volatile unsigned int*)(0x424A1220UL))
#define bM0P_CT3_PWM_TCR_START                          *((volatile unsigned int*)(0x424A1980UL))
#define bM0P_CT3_PWM_TCR_ENCNT                          *((volatile unsigned int*)(0x424A1984UL))
#define bM0P_CT3_PWM_TCR_MODS                           *((volatile unsigned int*)(0x424A1988UL))
#define bM0P_CT3_PWM_TCR_PLRT                           *((volatile unsigned int*)(0x424A198CUL))
#define bM0P_CT3_PWM_TCR_FUNC0                          *((volatile unsigned int*)(0x424A1990UL))
#define bM0P_CT3_PWM_TCR_FUNC1                          *((volatile unsigned int*)(0x424A1994UL))
#define bM0P_CT3_PWM_TCR_FUNC2                          *((volatile unsigned int*)(0x424A1998UL))
#define bM0P_CT3_PWM_TCR_EDGS0                          *((volatile unsigned int*)(0x424A19A0UL))
#define bM0P_CT3_PWM_TCR_EDGS1                          *((volatile unsigned int*)(0x424A19A4UL))
#define bM0P_CT3_PWM_TCR_MASK                           *((volatile unsigned int*)(0x424A19A8UL))
#define bM0P_CT3_PWM_TCR_RSTEN                          *((volatile unsigned int*)(0x424A19ACUL))
#define bM0P_CT3_PWM_TCR_CLKS0                          *((volatile unsigned int*)(0x424A19B0UL))
#define bM0P_CT3_PWM_TCR_CLKS1                          *((volatile unsigned int*)(0x424A19B4UL))
#define bM0P_CT3_PWM_TCR_CLKS2                          *((volatile unsigned int*)(0x424A19B8UL))
#define bM0P_CT3_PWM_STA_UDFIR                          *((volatile unsigned int*)(0x424A1A00UL))
#define bM0P_CT3_PWM_STA_DTMIR                          *((volatile unsigned int*)(0x424A1A04UL))
#define bM0P_CT3_PWM_STA_TRGIR                          *((volatile unsigned int*)(0x424A1A08UL))
#define bM0P_CT3_PWM_STA_UDFIE                          *((volatile unsigned int*)(0x424A1A10UL))
#define bM0P_CT3_PWM_STA_DTMIE                          *((volatile unsigned int*)(0x424A1A14UL))
#define bM0P_CT3_PWM_STA_TRGIE                          *((volatile unsigned int*)(0x424A1A18UL))
#define bM0P_CT3_PWM_TCR2_CLKS3                         *((volatile unsigned int*)(0x424A1A20UL))
#define bM0P_CT0_RT_TCR_START                           *((volatile unsigned int*)(0x424A0180UL))
#define bM0P_CT0_RT_TCR_ENCNT                           *((volatile unsigned int*)(0x424A0184UL))
#define bM0P_CT0_RT_TCR_MODS                            *((volatile unsigned int*)(0x424A0188UL))
#define bM0P_CT0_RT_TCR_PLRT                            *((volatile unsigned int*)(0x424A018CUL))
#define bM0P_CT0_RT_TCR_FUNC0                           *((volatile unsigned int*)(0x424A0190UL))
#define bM0P_CT0_RT_TCR_FUNC1                           *((volatile unsigned int*)(0x424A0194UL))
#define bM0P_CT0_RT_TCR_FUNC2                           *((volatile unsigned int*)(0x424A0198UL))
#define bM0P_CT0_RT_TCR_T32                             *((volatile unsigned int*)(0x424A019CUL))
#define bM0P_CT0_RT_TCR_EDGS0                           *((volatile unsigned int*)(0x424A01A0UL))
#define bM0P_CT0_RT_TCR_EDGS1                           *((volatile unsigned int*)(0x424A01A4UL))
#define bM0P_CT0_RT_TCR_CLKS0                           *((volatile unsigned int*)(0x424A01B0UL))
#define bM0P_CT0_RT_TCR_CLKS1                           *((volatile unsigned int*)(0x424A01B4UL))
#define bM0P_CT0_RT_TCR_CLKS2                           *((volatile unsigned int*)(0x424A01B8UL))
#define bM0P_CT0_RT_STA_UDFIR                           *((volatile unsigned int*)(0x424A0200UL))
#define bM0P_CT0_RT_STA_TRGIR                           *((volatile unsigned int*)(0x424A0208UL))
#define bM0P_CT0_RT_STA_UDFIE                           *((volatile unsigned int*)(0x424A0210UL))
#define bM0P_CT0_RT_STA_TRGIE                           *((volatile unsigned int*)(0x424A0218UL))
#define bM0P_CT0_RT_TCR2_CLKS3                          *((volatile unsigned int*)(0x424A0220UL))
#define bM0P_CT0_RT_TCR2_GTIE                           *((volatile unsigned int*)(0x424A023CUL))
#define bM0P_CT1_RT_TCR_START                           *((volatile unsigned int*)(0x424A0980UL))
#define bM0P_CT1_RT_TCR_ENCNT                           *((volatile unsigned int*)(0x424A0984UL))
#define bM0P_CT1_RT_TCR_MODS                            *((volatile unsigned int*)(0x424A0988UL))
#define bM0P_CT1_RT_TCR_PLRT                            *((volatile unsigned int*)(0x424A098CUL))
#define bM0P_CT1_RT_TCR_FUNC0                           *((volatile unsigned int*)(0x424A0990UL))
#define bM0P_CT1_RT_TCR_FUNC1                           *((volatile unsigned int*)(0x424A0994UL))
#define bM0P_CT1_RT_TCR_FUNC2                           *((volatile unsigned int*)(0x424A0998UL))
#define bM0P_CT1_RT_TCR_T32                             *((volatile unsigned int*)(0x424A099CUL))
#define bM0P_CT1_RT_TCR_EDGS0                           *((volatile unsigned int*)(0x424A09A0UL))
#define bM0P_CT1_RT_TCR_EDGS1                           *((volatile unsigned int*)(0x424A09A4UL))
#define bM0P_CT1_RT_TCR_CLKS0                           *((volatile unsigned int*)(0x424A09B0UL))
#define bM0P_CT1_RT_TCR_CLKS1                           *((volatile unsigned int*)(0x424A09B4UL))
#define bM0P_CT1_RT_TCR_CLKS2                           *((volatile unsigned int*)(0x424A09B8UL))
#define bM0P_CT1_RT_STA_UDFIR                           *((volatile unsigned int*)(0x424A0A00UL))
#define bM0P_CT1_RT_STA_TRGIR                           *((volatile unsigned int*)(0x424A0A08UL))
#define bM0P_CT1_RT_STA_UDFIE                           *((volatile unsigned int*)(0x424A0A10UL))
#define bM0P_CT1_RT_STA_TRGIE                           *((volatile unsigned int*)(0x424A0A18UL))
#define bM0P_CT1_RT_TCR2_CLKS3                          *((volatile unsigned int*)(0x424A0A20UL))
#define bM0P_CT1_RT_TCR2_GTIE                           *((volatile unsigned int*)(0x424A0A3CUL))
#define bM0P_CT2_RT_TCR_START                           *((volatile unsigned int*)(0x424A1180UL))
#define bM0P_CT2_RT_TCR_ENCNT                           *((volatile unsigned int*)(0x424A1184UL))
#define bM0P_CT2_RT_TCR_MODS                            *((volatile unsigned int*)(0x424A1188UL))
#define bM0P_CT2_RT_TCR_PLRT                            *((volatile unsigned int*)(0x424A118CUL))
#define bM0P_CT2_RT_TCR_FUNC0                           *((volatile unsigned int*)(0x424A1190UL))
#define bM0P_CT2_RT_TCR_FUNC1                           *((volatile unsigned int*)(0x424A1194UL))
#define bM0P_CT2_RT_TCR_FUNC2                           *((volatile unsigned int*)(0x424A1198UL))
#define bM0P_CT2_RT_TCR_T32                             *((volatile unsigned int*)(0x424A119CUL))
#define bM0P_CT2_RT_TCR_EDGS0                           *((volatile unsigned int*)(0x424A11A0UL))
#define bM0P_CT2_RT_TCR_EDGS1                           *((volatile unsigned int*)(0x424A11A4UL))
#define bM0P_CT2_RT_TCR_CLKS0                           *((volatile unsigned int*)(0x424A11B0UL))
#define bM0P_CT2_RT_TCR_CLKS1                           *((volatile unsigned int*)(0x424A11B4UL))
#define bM0P_CT2_RT_TCR_CLKS2                           *((volatile unsigned int*)(0x424A11B8UL))
#define bM0P_CT2_RT_STA_UDFIR                           *((volatile unsigned int*)(0x424A1200UL))
#define bM0P_CT2_RT_STA_TRGIR                           *((volatile unsigned int*)(0x424A1208UL))
#define bM0P_CT2_RT_STA_UDFIE                           *((volatile unsigned int*)(0x424A1210UL))
#define bM0P_CT2_RT_STA_TRGIE                           *((volatile unsigned int*)(0x424A1218UL))
#define bM0P_CT2_RT_TCR2_CLKS3                          *((volatile unsigned int*)(0x424A1220UL))
#define bM0P_CT2_RT_TCR2_GTIE                           *((volatile unsigned int*)(0x424A123CUL))
#define bM0P_CT3_RT_TCR_START                           *((volatile unsigned int*)(0x424A1980UL))
#define bM0P_CT3_RT_TCR_ENCNT                           *((volatile unsigned int*)(0x424A1984UL))
#define bM0P_CT3_RT_TCR_MODS                            *((volatile unsigned int*)(0x424A1988UL))
#define bM0P_CT3_RT_TCR_PLRT                            *((volatile unsigned int*)(0x424A198CUL))
#define bM0P_CT3_RT_TCR_FUNC0                           *((volatile unsigned int*)(0x424A1990UL))
#define bM0P_CT3_RT_TCR_FUNC1                           *((volatile unsigned int*)(0x424A1994UL))
#define bM0P_CT3_RT_TCR_FUNC2                           *((volatile unsigned int*)(0x424A1998UL))
#define bM0P_CT3_RT_TCR_T32                             *((volatile unsigned int*)(0x424A199CUL))
#define bM0P_CT3_RT_TCR_EDGS0                           *((volatile unsigned int*)(0x424A19A0UL))
#define bM0P_CT3_RT_TCR_EDGS1                           *((volatile unsigned int*)(0x424A19A4UL))
#define bM0P_CT3_RT_TCR_CLKS0                           *((volatile unsigned int*)(0x424A19B0UL))
#define bM0P_CT3_RT_TCR_CLKS1                           *((volatile unsigned int*)(0x424A19B4UL))
#define bM0P_CT3_RT_TCR_CLKS2                           *((volatile unsigned int*)(0x424A19B8UL))
#define bM0P_CT3_RT_STA_UDFIR                           *((volatile unsigned int*)(0x424A1A00UL))
#define bM0P_CT3_RT_STA_TRGIR                           *((volatile unsigned int*)(0x424A1A08UL))
#define bM0P_CT3_RT_STA_UDFIE                           *((volatile unsigned int*)(0x424A1A10UL))
#define bM0P_CT3_RT_STA_TRGIE                           *((volatile unsigned int*)(0x424A1A18UL))
#define bM0P_CT3_RT_TCR2_CLKS3                          *((volatile unsigned int*)(0x424A1A20UL))
#define bM0P_CT3_RT_TCR2_GTIE                           *((volatile unsigned int*)(0x424A1A3CUL))
#define bM0P_DMAC_CONF_HALT0                            *((volatile unsigned int*)(0x42C00060UL))
#define bM0P_DMAC_CONF_HALT1                            *((volatile unsigned int*)(0x42C00064UL))
#define bM0P_DMAC_CONF_HALT2                            *((volatile unsigned int*)(0x42C00068UL))
#define bM0P_DMAC_CONF_HALT3                            *((volatile unsigned int*)(0x42C0006CUL))
#define bM0P_DMAC_CONF_PRIO                             *((volatile unsigned int*)(0x42C00070UL))
#define bM0P_DMAC_CONF_ST                               *((volatile unsigned int*)(0x42C00078UL))
#define bM0P_DMAC_CONF_EN                               *((volatile unsigned int*)(0x42C0007CUL))
#define bM0P_DMAC_CONFA0_TC0                            *((volatile unsigned int*)(0x42C00200UL))
#define bM0P_DMAC_CONFA0_TC1                            *((volatile unsigned int*)(0x42C00204UL))
#define bM0P_DMAC_CONFA0_TC2                            *((volatile unsigned int*)(0x42C00208UL))
#define bM0P_DMAC_CONFA0_TC3                            *((volatile unsigned int*)(0x42C0020CUL))
#define bM0P_DMAC_CONFA0_TC4                            *((volatile unsigned int*)(0x42C00210UL))
#define bM0P_DMAC_CONFA0_TC5                            *((volatile unsigned int*)(0x42C00214UL))
#define bM0P_DMAC_CONFA0_TC6                            *((volatile unsigned int*)(0x42C00218UL))
#define bM0P_DMAC_CONFA0_TC7                            *((volatile unsigned int*)(0x42C0021CUL))
#define bM0P_DMAC_CONFA0_TC8                            *((volatile unsigned int*)(0x42C00220UL))
#define bM0P_DMAC_CONFA0_TC9                            *((volatile unsigned int*)(0x42C00224UL))
#define bM0P_DMAC_CONFA0_TC10                           *((volatile unsigned int*)(0x42C00228UL))
#define bM0P_DMAC_CONFA0_TC11                           *((volatile unsigned int*)(0x42C0022CUL))
#define bM0P_DMAC_CONFA0_TC12                           *((volatile unsigned int*)(0x42C00230UL))
#define bM0P_DMAC_CONFA0_TC13                           *((volatile unsigned int*)(0x42C00234UL))
#define bM0P_DMAC_CONFA0_TC14                           *((volatile unsigned int*)(0x42C00238UL))
#define bM0P_DMAC_CONFA0_TC15                           *((volatile unsigned int*)(0x42C0023CUL))
#define bM0P_DMAC_CONFA0_BC0                            *((volatile unsigned int*)(0x42C00240UL))
#define bM0P_DMAC_CONFA0_BC1                            *((volatile unsigned int*)(0x42C00244UL))
#define bM0P_DMAC_CONFA0_BC2                            *((volatile unsigned int*)(0x42C00248UL))
#define bM0P_DMAC_CONFA0_BC3                            *((volatile unsigned int*)(0x42C0024CUL))
#define bM0P_DMAC_CONFA0_TRI_SEL0                       *((volatile unsigned int*)(0x42C0025CUL))
#define bM0P_DMAC_CONFA0_TRI_SEL1                       *((volatile unsigned int*)(0x42C00260UL))
#define bM0P_DMAC_CONFA0_TRI_SEL2                       *((volatile unsigned int*)(0x42C00264UL))
#define bM0P_DMAC_CONFA0_TRI_SEL3                       *((volatile unsigned int*)(0x42C00268UL))
#define bM0P_DMAC_CONFA0_TRI_SEL4                       *((volatile unsigned int*)(0x42C0026CUL))
#define bM0P_DMAC_CONFA0_TRI_SEL5                       *((volatile unsigned int*)(0x42C00270UL))
#define bM0P_DMAC_CONFA0_ST                             *((volatile unsigned int*)(0x42C00274UL))
#define bM0P_DMAC_CONFA0_PAS                            *((volatile unsigned int*)(0x42C00278UL))
#define bM0P_DMAC_CONFA0_ENS                            *((volatile unsigned int*)(0x42C0027CUL))
#define bM0P_DMAC_CONFB0_MSK                            *((volatile unsigned int*)(0x42C00280UL))
#define bM0P_DMAC_CONFB0_STAT0                          *((volatile unsigned int*)(0x42C002C0UL))
#define bM0P_DMAC_CONFB0_STAT1                          *((volatile unsigned int*)(0x42C002C4UL))
#define bM0P_DMAC_CONFB0_STAT2                          *((volatile unsigned int*)(0x42C002C8UL))
#define bM0P_DMAC_CONFB0_FIS_IE                         *((volatile unsigned int*)(0x42C002CCUL))
#define bM0P_DMAC_CONFB0_ERR_IE                         *((volatile unsigned int*)(0x42C002D0UL))
#define bM0P_DMAC_CONFB0_RD                             *((volatile unsigned int*)(0x42C002D4UL))
#define bM0P_DMAC_CONFB0_RS                             *((volatile unsigned int*)(0x42C002D8UL))
#define bM0P_DMAC_CONFB0_RC                             *((volatile unsigned int*)(0x42C002DCUL))
#define bM0P_DMAC_CONFB0_FD                             *((volatile unsigned int*)(0x42C002E0UL))
#define bM0P_DMAC_CONFB0_FS                             *((volatile unsigned int*)(0x42C002E4UL))
#define bM0P_DMAC_CONFB0_WIDTH0                         *((volatile unsigned int*)(0x42C002E8UL))
#define bM0P_DMAC_CONFB0_WIDTH1                         *((volatile unsigned int*)(0x42C002ECUL))
#define bM0P_DMAC_CONFB0_MODE0                          *((volatile unsigned int*)(0x42C002F0UL))
#define bM0P_DMAC_CONFB0_MODE1                          *((volatile unsigned int*)(0x42C002F4UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR0                     *((volatile unsigned int*)(0x42C00300UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR1                     *((volatile unsigned int*)(0x42C00304UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR2                     *((volatile unsigned int*)(0x42C00308UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR3                     *((volatile unsigned int*)(0x42C0030CUL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR4                     *((volatile unsigned int*)(0x42C00310UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR5                     *((volatile unsigned int*)(0x42C00314UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR6                     *((volatile unsigned int*)(0x42C00318UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR7                     *((volatile unsigned int*)(0x42C0031CUL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR8                     *((volatile unsigned int*)(0x42C00320UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR9                     *((volatile unsigned int*)(0x42C00324UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR10                    *((volatile unsigned int*)(0x42C00328UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR11                    *((volatile unsigned int*)(0x42C0032CUL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR12                    *((volatile unsigned int*)(0x42C00330UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR13                    *((volatile unsigned int*)(0x42C00334UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR14                    *((volatile unsigned int*)(0x42C00338UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR15                    *((volatile unsigned int*)(0x42C0033CUL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR16                    *((volatile unsigned int*)(0x42C00340UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR17                    *((volatile unsigned int*)(0x42C00344UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR18                    *((volatile unsigned int*)(0x42C00348UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR19                    *((volatile unsigned int*)(0x42C0034CUL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR20                    *((volatile unsigned int*)(0x42C00350UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR21                    *((volatile unsigned int*)(0x42C00354UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR22                    *((volatile unsigned int*)(0x42C00358UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR23                    *((volatile unsigned int*)(0x42C0035CUL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR24                    *((volatile unsigned int*)(0x42C00360UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR25                    *((volatile unsigned int*)(0x42C00364UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR26                    *((volatile unsigned int*)(0x42C00368UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR27                    *((volatile unsigned int*)(0x42C0036CUL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR28                    *((volatile unsigned int*)(0x42C00370UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR29                    *((volatile unsigned int*)(0x42C00374UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR30                    *((volatile unsigned int*)(0x42C00378UL))
#define bM0P_DMAC_SRC_ADR0_SRC_ADR31                    *((volatile unsigned int*)(0x42C0037CUL))
#define bM0P_DMAC_DST_ADR0_DST_ADR0                     *((volatile unsigned int*)(0x42C00380UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR1                     *((volatile unsigned int*)(0x42C00384UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR2                     *((volatile unsigned int*)(0x42C00388UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR3                     *((volatile unsigned int*)(0x42C0038CUL))
#define bM0P_DMAC_DST_ADR0_DST_ADR4                     *((volatile unsigned int*)(0x42C00390UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR5                     *((volatile unsigned int*)(0x42C00394UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR6                     *((volatile unsigned int*)(0x42C00398UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR7                     *((volatile unsigned int*)(0x42C0039CUL))
#define bM0P_DMAC_DST_ADR0_DST_ADR8                     *((volatile unsigned int*)(0x42C003A0UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR9                     *((volatile unsigned int*)(0x42C003A4UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR10                    *((volatile unsigned int*)(0x42C003A8UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR11                    *((volatile unsigned int*)(0x42C003ACUL))
#define bM0P_DMAC_DST_ADR0_DST_ADR12                    *((volatile unsigned int*)(0x42C003B0UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR13                    *((volatile unsigned int*)(0x42C003B4UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR14                    *((volatile unsigned int*)(0x42C003B8UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR15                    *((volatile unsigned int*)(0x42C003BCUL))
#define bM0P_DMAC_DST_ADR0_DST_ADR16                    *((volatile unsigned int*)(0x42C003C0UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR17                    *((volatile unsigned int*)(0x42C003C4UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR18                    *((volatile unsigned int*)(0x42C003C8UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR19                    *((volatile unsigned int*)(0x42C003CCUL))
#define bM0P_DMAC_DST_ADR0_DST_ADR20                    *((volatile unsigned int*)(0x42C003D0UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR21                    *((volatile unsigned int*)(0x42C003D4UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR22                    *((volatile unsigned int*)(0x42C003D8UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR23                    *((volatile unsigned int*)(0x42C003DCUL))
#define bM0P_DMAC_DST_ADR0_DST_ADR24                    *((volatile unsigned int*)(0x42C003E0UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR25                    *((volatile unsigned int*)(0x42C003E4UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR26                    *((volatile unsigned int*)(0x42C003E8UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR27                    *((volatile unsigned int*)(0x42C003ECUL))
#define bM0P_DMAC_DST_ADR0_DST_ADR28                    *((volatile unsigned int*)(0x42C003F0UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR29                    *((volatile unsigned int*)(0x42C003F4UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR30                    *((volatile unsigned int*)(0x42C003F8UL))
#define bM0P_DMAC_DST_ADR0_DST_ADR31                    *((volatile unsigned int*)(0x42C003FCUL))
#define bM0P_DMAC_CONFA1_TC0                            *((volatile unsigned int*)(0x42C00400UL))
#define bM0P_DMAC_CONFA1_TC1                            *((volatile unsigned int*)(0x42C00404UL))
#define bM0P_DMAC_CONFA1_TC2                            *((volatile unsigned int*)(0x42C00408UL))
#define bM0P_DMAC_CONFA1_TC3                            *((volatile unsigned int*)(0x42C0040CUL))
#define bM0P_DMAC_CONFA1_TC4                            *((volatile unsigned int*)(0x42C00410UL))
#define bM0P_DMAC_CONFA1_TC5                            *((volatile unsigned int*)(0x42C00414UL))
#define bM0P_DMAC_CONFA1_TC6                            *((volatile unsigned int*)(0x42C00418UL))
#define bM0P_DMAC_CONFA1_TC7                            *((volatile unsigned int*)(0x42C0041CUL))
#define bM0P_DMAC_CONFA1_TC8                            *((volatile unsigned int*)(0x42C00420UL))
#define bM0P_DMAC_CONFA1_TC9                            *((volatile unsigned int*)(0x42C00424UL))
#define bM0P_DMAC_CONFA1_TC10                           *((volatile unsigned int*)(0x42C00428UL))
#define bM0P_DMAC_CONFA1_TC11                           *((volatile unsigned int*)(0x42C0042CUL))
#define bM0P_DMAC_CONFA1_TC12                           *((volatile unsigned int*)(0x42C00430UL))
#define bM0P_DMAC_CONFA1_TC13                           *((volatile unsigned int*)(0x42C00434UL))
#define bM0P_DMAC_CONFA1_TC14                           *((volatile unsigned int*)(0x42C00438UL))
#define bM0P_DMAC_CONFA1_TC15                           *((volatile unsigned int*)(0x42C0043CUL))
#define bM0P_DMAC_CONFA1_BC0                            *((volatile unsigned int*)(0x42C00440UL))
#define bM0P_DMAC_CONFA1_BC1                            *((volatile unsigned int*)(0x42C00444UL))
#define bM0P_DMAC_CONFA1_BC2                            *((volatile unsigned int*)(0x42C00448UL))
#define bM0P_DMAC_CONFA1_BC3                            *((volatile unsigned int*)(0x42C0044CUL))
#define bM0P_DMAC_CONFA1_TRI_SEL0                       *((volatile unsigned int*)(0x42C0045CUL))
#define bM0P_DMAC_CONFA1_TRI_SEL1                       *((volatile unsigned int*)(0x42C00460UL))
#define bM0P_DMAC_CONFA1_TRI_SEL2                       *((volatile unsigned int*)(0x42C00464UL))
#define bM0P_DMAC_CONFA1_TRI_SEL3                       *((volatile unsigned int*)(0x42C00468UL))
#define bM0P_DMAC_CONFA1_TRI_SEL4                       *((volatile unsigned int*)(0x42C0046CUL))
#define bM0P_DMAC_CONFA1_TRI_SEL5                       *((volatile unsigned int*)(0x42C00470UL))
#define bM0P_DMAC_CONFA1_ST                             *((volatile unsigned int*)(0x42C00474UL))
#define bM0P_DMAC_CONFA1_PAS                            *((volatile unsigned int*)(0x42C00478UL))
#define bM0P_DMAC_CONFA1_ENS                            *((volatile unsigned int*)(0x42C0047CUL))
#define bM0P_DMAC_CONFB1_MSK                            *((volatile unsigned int*)(0x42C00480UL))
#define bM0P_DMAC_CONFB1_STAT0                          *((volatile unsigned int*)(0x42C004C0UL))
#define bM0P_DMAC_CONFB1_STAT1                          *((volatile unsigned int*)(0x42C004C4UL))
#define bM0P_DMAC_CONFB1_STAT2                          *((volatile unsigned int*)(0x42C004C8UL))
#define bM0P_DMAC_CONFB1_FIS_IE                         *((volatile unsigned int*)(0x42C004CCUL))
#define bM0P_DMAC_CONFB1_ERR_IE                         *((volatile unsigned int*)(0x42C004D0UL))
#define bM0P_DMAC_CONFB1_RD                             *((volatile unsigned int*)(0x42C004D4UL))
#define bM0P_DMAC_CONFB1_RS                             *((volatile unsigned int*)(0x42C004D8UL))
#define bM0P_DMAC_CONFB1_RC                             *((volatile unsigned int*)(0x42C004DCUL))
#define bM0P_DMAC_CONFB1_FD                             *((volatile unsigned int*)(0x42C004E0UL))
#define bM0P_DMAC_CONFB1_FS                             *((volatile unsigned int*)(0x42C004E4UL))
#define bM0P_DMAC_CONFB1_WIDTH0                         *((volatile unsigned int*)(0x42C004E8UL))
#define bM0P_DMAC_CONFB1_WIDTH1                         *((volatile unsigned int*)(0x42C004ECUL))
#define bM0P_DMAC_CONFB1_MODE0                          *((volatile unsigned int*)(0x42C004F0UL))
#define bM0P_DMAC_CONFB1_MODE1                          *((volatile unsigned int*)(0x42C004F4UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR0                     *((volatile unsigned int*)(0x42C00500UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR1                     *((volatile unsigned int*)(0x42C00504UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR2                     *((volatile unsigned int*)(0x42C00508UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR3                     *((volatile unsigned int*)(0x42C0050CUL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR4                     *((volatile unsigned int*)(0x42C00510UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR5                     *((volatile unsigned int*)(0x42C00514UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR6                     *((volatile unsigned int*)(0x42C00518UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR7                     *((volatile unsigned int*)(0x42C0051CUL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR8                     *((volatile unsigned int*)(0x42C00520UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR9                     *((volatile unsigned int*)(0x42C00524UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR10                    *((volatile unsigned int*)(0x42C00528UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR11                    *((volatile unsigned int*)(0x42C0052CUL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR12                    *((volatile unsigned int*)(0x42C00530UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR13                    *((volatile unsigned int*)(0x42C00534UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR14                    *((volatile unsigned int*)(0x42C00538UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR15                    *((volatile unsigned int*)(0x42C0053CUL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR16                    *((volatile unsigned int*)(0x42C00540UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR17                    *((volatile unsigned int*)(0x42C00544UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR18                    *((volatile unsigned int*)(0x42C00548UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR19                    *((volatile unsigned int*)(0x42C0054CUL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR20                    *((volatile unsigned int*)(0x42C00550UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR21                    *((volatile unsigned int*)(0x42C00554UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR22                    *((volatile unsigned int*)(0x42C00558UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR23                    *((volatile unsigned int*)(0x42C0055CUL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR24                    *((volatile unsigned int*)(0x42C00560UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR25                    *((volatile unsigned int*)(0x42C00564UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR26                    *((volatile unsigned int*)(0x42C00568UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR27                    *((volatile unsigned int*)(0x42C0056CUL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR28                    *((volatile unsigned int*)(0x42C00570UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR29                    *((volatile unsigned int*)(0x42C00574UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR30                    *((volatile unsigned int*)(0x42C00578UL))
#define bM0P_DMAC_SRC_ADR1_SRC_ADR31                    *((volatile unsigned int*)(0x42C0057CUL))
#define bM0P_DMAC_DST_ADR1_DST_ADR0                     *((volatile unsigned int*)(0x42C00580UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR1                     *((volatile unsigned int*)(0x42C00584UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR2                     *((volatile unsigned int*)(0x42C00588UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR3                     *((volatile unsigned int*)(0x42C0058CUL))
#define bM0P_DMAC_DST_ADR1_DST_ADR4                     *((volatile unsigned int*)(0x42C00590UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR5                     *((volatile unsigned int*)(0x42C00594UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR6                     *((volatile unsigned int*)(0x42C00598UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR7                     *((volatile unsigned int*)(0x42C0059CUL))
#define bM0P_DMAC_DST_ADR1_DST_ADR8                     *((volatile unsigned int*)(0x42C005A0UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR9                     *((volatile unsigned int*)(0x42C005A4UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR10                    *((volatile unsigned int*)(0x42C005A8UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR11                    *((volatile unsigned int*)(0x42C005ACUL))
#define bM0P_DMAC_DST_ADR1_DST_ADR12                    *((volatile unsigned int*)(0x42C005B0UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR13                    *((volatile unsigned int*)(0x42C005B4UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR14                    *((volatile unsigned int*)(0x42C005B8UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR15                    *((volatile unsigned int*)(0x42C005BCUL))
#define bM0P_DMAC_DST_ADR1_DST_ADR16                    *((volatile unsigned int*)(0x42C005C0UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR17                    *((volatile unsigned int*)(0x42C005C4UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR18                    *((volatile unsigned int*)(0x42C005C8UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR19                    *((volatile unsigned int*)(0x42C005CCUL))
#define bM0P_DMAC_DST_ADR1_DST_ADR20                    *((volatile unsigned int*)(0x42C005D0UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR21                    *((volatile unsigned int*)(0x42C005D4UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR22                    *((volatile unsigned int*)(0x42C005D8UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR23                    *((volatile unsigned int*)(0x42C005DCUL))
#define bM0P_DMAC_DST_ADR1_DST_ADR24                    *((volatile unsigned int*)(0x42C005E0UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR25                    *((volatile unsigned int*)(0x42C005E4UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR26                    *((volatile unsigned int*)(0x42C005E8UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR27                    *((volatile unsigned int*)(0x42C005ECUL))
#define bM0P_DMAC_DST_ADR1_DST_ADR28                    *((volatile unsigned int*)(0x42C005F0UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR29                    *((volatile unsigned int*)(0x42C005F4UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR30                    *((volatile unsigned int*)(0x42C005F8UL))
#define bM0P_DMAC_DST_ADR1_DST_ADR31                    *((volatile unsigned int*)(0x42C005FCUL))
#define bM0P_DTIM1_TIMERCTRL_ONESHOT                    *((volatile unsigned int*)(0x422A0100UL))
#define bM0P_DTIM1_TIMERCTRL_TMRSIZE                    *((volatile unsigned int*)(0x422A0104UL))
#define bM0P_DTIM1_TIMERCTRL_TMRPRE0                    *((volatile unsigned int*)(0x422A0108UL))
#define bM0P_DTIM1_TIMERCTRL_TMRPRE1                    *((volatile unsigned int*)(0x422A010CUL))
#define bM0P_DTIM1_TIMERCTRL_INTEN                      *((volatile unsigned int*)(0x422A0114UL))
#define bM0P_DTIM1_TIMERCTRL_TMRMODE                    *((volatile unsigned int*)(0x422A0118UL))
#define bM0P_DTIM1_TIMERCTRL_TMREN                      *((volatile unsigned int*)(0x422A011CUL))
#define bM0P_DTIM1_TIMERRIS_TMRINTST                    *((volatile unsigned int*)(0x422A0200UL))
#define bM0P_DTIM1_TIMERMIS_TMRMINTST                   *((volatile unsigned int*)(0x422A0280UL))
#define bM0P_DTIM2_TIMERCTRL_ONESHOT                    *((volatile unsigned int*)(0x422A0500UL))
#define bM0P_DTIM2_TIMERCTRL_TMRSIZE                    *((volatile unsigned int*)(0x422A0504UL))
#define bM0P_DTIM2_TIMERCTRL_TMRPRE0                    *((volatile unsigned int*)(0x422A0508UL))
#define bM0P_DTIM2_TIMERCTRL_TMRPRE1                    *((volatile unsigned int*)(0x422A050CUL))
#define bM0P_DTIM2_TIMERCTRL_INTEN                      *((volatile unsigned int*)(0x422A0514UL))
#define bM0P_DTIM2_TIMERCTRL_TMRMODE                    *((volatile unsigned int*)(0x422A0518UL))
#define bM0P_DTIM2_TIMERCTRL_TMREN                      *((volatile unsigned int*)(0x422A051CUL))
#define bM0P_DTIM2_TIMERRIS_TMRINTST                    *((volatile unsigned int*)(0x422A0600UL))
#define bM0P_DTIM2_TIMERMIS_TMRMINTST                   *((volatile unsigned int*)(0x422A0680UL))
#define bM0P_EXTINT_INTEN_EN0                           *((volatile unsigned int*)(0x42600000UL))
#define bM0P_EXTINT_INTEN_EN1                           *((volatile unsigned int*)(0x42600004UL))
#define bM0P_EXTINT_INTEN_EN2                           *((volatile unsigned int*)(0x42600008UL))
#define bM0P_EXTINT_INTEN_EN3                           *((volatile unsigned int*)(0x4260000CUL))
#define bM0P_EXTINT_INTEN_EN4                           *((volatile unsigned int*)(0x42600010UL))
#define bM0P_EXTINT_INTEN_EN5                           *((volatile unsigned int*)(0x42600014UL))
#define bM0P_EXTINT_INTEN_EN6                           *((volatile unsigned int*)(0x42600018UL))
#define bM0P_EXTINT_INTEN_EN7                           *((volatile unsigned int*)(0x4260001CUL))
#define bM0P_EXTINT_INTEN_EN8                           *((volatile unsigned int*)(0x42600020UL))
#define bM0P_EXTINT_INTEN_EN9                           *((volatile unsigned int*)(0x42600024UL))
#define bM0P_EXTINT_INTEN_EN10                          *((volatile unsigned int*)(0x42600028UL))
#define bM0P_EXTINT_INTEN_EN11                          *((volatile unsigned int*)(0x4260002CUL))
#define bM0P_EXTINT_INTEN_EN12                          *((volatile unsigned int*)(0x42600030UL))
#define bM0P_EXTINT_INTEN_EN13                          *((volatile unsigned int*)(0x42600034UL))
#define bM0P_EXTINT_INTEN_EN14                          *((volatile unsigned int*)(0x42600038UL))
#define bM0P_EXTINT_INTEN_EN15                          *((volatile unsigned int*)(0x4260003CUL))
#define bM0P_EXTINT_INTSRC_SRC0                         *((volatile unsigned int*)(0x42600080UL))
#define bM0P_EXTINT_INTSRC_SRC1                         *((volatile unsigned int*)(0x42600084UL))
#define bM0P_EXTINT_INTSRC_SRC2                         *((volatile unsigned int*)(0x42600088UL))
#define bM0P_EXTINT_INTSRC_SRC3                         *((volatile unsigned int*)(0x4260008CUL))
#define bM0P_EXTINT_INTSRC_SRC4                         *((volatile unsigned int*)(0x42600090UL))
#define bM0P_EXTINT_INTSRC_SRC5                         *((volatile unsigned int*)(0x42600094UL))
#define bM0P_EXTINT_INTSRC_SRC6                         *((volatile unsigned int*)(0x42600098UL))
#define bM0P_EXTINT_INTSRC_SRC7                         *((volatile unsigned int*)(0x4260009CUL))
#define bM0P_EXTINT_INTSRC_SRC8                         *((volatile unsigned int*)(0x426000A0UL))
#define bM0P_EXTINT_INTSRC_SRC9                         *((volatile unsigned int*)(0x426000A4UL))
#define bM0P_EXTINT_INTSRC_SRC10                        *((volatile unsigned int*)(0x426000A8UL))
#define bM0P_EXTINT_INTSRC_SRC11                        *((volatile unsigned int*)(0x426000ACUL))
#define bM0P_EXTINT_INTSRC_SRC12                        *((volatile unsigned int*)(0x426000B0UL))
#define bM0P_EXTINT_INTSRC_SRC13                        *((volatile unsigned int*)(0x426000B4UL))
#define bM0P_EXTINT_INTSRC_SRC14                        *((volatile unsigned int*)(0x426000B8UL))
#define bM0P_EXTINT_INTSRC_SRC15                        *((volatile unsigned int*)(0x426000BCUL))
#define bM0P_EXTINT_INTCLR_CLR0                         *((volatile unsigned int*)(0x42600100UL))
#define bM0P_EXTINT_INTCLR_CLR1                         *((volatile unsigned int*)(0x42600104UL))
#define bM0P_EXTINT_INTCLR_CLR2                         *((volatile unsigned int*)(0x42600108UL))
#define bM0P_EXTINT_INTCLR_CLR3                         *((volatile unsigned int*)(0x4260010CUL))
#define bM0P_EXTINT_INTCLR_CLR4                         *((volatile unsigned int*)(0x42600110UL))
#define bM0P_EXTINT_INTCLR_CLR5                         *((volatile unsigned int*)(0x42600114UL))
#define bM0P_EXTINT_INTCLR_CLR6                         *((volatile unsigned int*)(0x42600118UL))
#define bM0P_EXTINT_INTCLR_CLR7                         *((volatile unsigned int*)(0x4260011CUL))
#define bM0P_EXTINT_INTCLR_CLR8                         *((volatile unsigned int*)(0x42600120UL))
#define bM0P_EXTINT_INTCLR_CLR9                         *((volatile unsigned int*)(0x42600124UL))
#define bM0P_EXTINT_INTCLR_CLR10                        *((volatile unsigned int*)(0x42600128UL))
#define bM0P_EXTINT_INTCLR_CLR11                        *((volatile unsigned int*)(0x4260012CUL))
#define bM0P_EXTINT_INTCLR_CLR12                        *((volatile unsigned int*)(0x42600130UL))
#define bM0P_EXTINT_INTCLR_CLR13                        *((volatile unsigned int*)(0x42600134UL))
#define bM0P_EXTINT_INTCLR_CLR14                        *((volatile unsigned int*)(0x42600138UL))
#define bM0P_EXTINT_INTCLR_CLR15                        *((volatile unsigned int*)(0x4260013CUL))
#define bM0P_EXTINT_INTLVL_LVLL0                        *((volatile unsigned int*)(0x42600180UL))
#define bM0P_EXTINT_INTLVL_LVLH0                        *((volatile unsigned int*)(0x42600184UL))
#define bM0P_EXTINT_INTLVL_LVLL1                        *((volatile unsigned int*)(0x42600188UL))
#define bM0P_EXTINT_INTLVL_LVLH1                        *((volatile unsigned int*)(0x4260018CUL))
#define bM0P_EXTINT_INTLVL_LVLL2                        *((volatile unsigned int*)(0x42600190UL))
#define bM0P_EXTINT_INTLVL_LVLH2                        *((volatile unsigned int*)(0x42600194UL))
#define bM0P_EXTINT_INTLVL_LVLL3                        *((volatile unsigned int*)(0x42600198UL))
#define bM0P_EXTINT_INTLVL_LVLH3                        *((volatile unsigned int*)(0x4260019CUL))
#define bM0P_EXTINT_INTLVL_LVLL4                        *((volatile unsigned int*)(0x426001A0UL))
#define bM0P_EXTINT_INTLVL_LVLH4                        *((volatile unsigned int*)(0x426001A4UL))
#define bM0P_EXTINT_INTLVL_LVLL5                        *((volatile unsigned int*)(0x426001A8UL))
#define bM0P_EXTINT_INTLVL_LVLH5                        *((volatile unsigned int*)(0x426001ACUL))
#define bM0P_EXTINT_INTLVL_LVLL6                        *((volatile unsigned int*)(0x426001B0UL))
#define bM0P_EXTINT_INTLVL_LVLH6                        *((volatile unsigned int*)(0x426001B4UL))
#define bM0P_EXTINT_INTLVL_LVLL7                        *((volatile unsigned int*)(0x426001B8UL))
#define bM0P_EXTINT_INTLVL_LVLH7                        *((volatile unsigned int*)(0x426001BCUL))
#define bM0P_EXTINT_INTLVL_LVLL8                        *((volatile unsigned int*)(0x426001C0UL))
#define bM0P_EXTINT_INTLVL_LVLH8                        *((volatile unsigned int*)(0x426001C4UL))
#define bM0P_EXTINT_INTLVL_LVLL9                        *((volatile unsigned int*)(0x426001C8UL))
#define bM0P_EXTINT_INTLVL_LVLH9                        *((volatile unsigned int*)(0x426001CCUL))
#define bM0P_EXTINT_INTLVL_LVLL10                       *((volatile unsigned int*)(0x426001D0UL))
#define bM0P_EXTINT_INTLVL_LVLH10                       *((volatile unsigned int*)(0x426001D4UL))
#define bM0P_EXTINT_INTLVL_LVLL11                       *((volatile unsigned int*)(0x426001D8UL))
#define bM0P_EXTINT_INTLVL_LVLH11                       *((volatile unsigned int*)(0x426001DCUL))
#define bM0P_EXTINT_INTLVL_LVLL12                       *((volatile unsigned int*)(0x426001E0UL))
#define bM0P_EXTINT_INTLVL_LVLH12                       *((volatile unsigned int*)(0x426001E4UL))
#define bM0P_EXTINT_INTLVL_LVLL13                       *((volatile unsigned int*)(0x426001E8UL))
#define bM0P_EXTINT_INTLVL_LVLH13                       *((volatile unsigned int*)(0x426001ECUL))
#define bM0P_EXTINT_INTLVL_LVLL14                       *((volatile unsigned int*)(0x426001F0UL))
#define bM0P_EXTINT_INTLVL_LVLH14                       *((volatile unsigned int*)(0x426001F4UL))
#define bM0P_EXTINT_INTLVL_LVLL15                       *((volatile unsigned int*)(0x426001F8UL))
#define bM0P_EXTINT_INTLVL_LVLH15                       *((volatile unsigned int*)(0x426001FCUL))
#define bM0P_EXTINT_NMISRC_SRC                          *((volatile unsigned int*)(0x42600280UL))
#define bM0P_EXTINT_NMICLR_CLR                          *((volatile unsigned int*)(0x42600300UL))
#define bM0P_FLASH_IF_FOCR_PRGM                         *((volatile unsigned int*)(0x42000000UL))
#define bM0P_FLASH_IF_FOCR_PERS                         *((volatile unsigned int*)(0x42000004UL))
#define bM0P_FLASH_IF_FOCR_CERS                         *((volatile unsigned int*)(0x42000008UL))
#define bM0P_FLASH_IF_FOCR_DPSTB                        *((volatile unsigned int*)(0x4200000CUL))
#define bM0P_FLASH_IF_FOCR_PER_EN                       *((volatile unsigned int*)(0x42000014UL))
#define bM0P_FLASH_IF_FOCR_FRWPW0                       *((volatile unsigned int*)(0x42000040UL))
#define bM0P_FLASH_IF_FOCR_FRWPW1                       *((volatile unsigned int*)(0x42000044UL))
#define bM0P_FLASH_IF_FOCR_FRWPW2                       *((volatile unsigned int*)(0x42000048UL))
#define bM0P_FLASH_IF_FOCR_FRWPW3                       *((volatile unsigned int*)(0x4200004CUL))
#define bM0P_FLASH_IF_FOCR_FRWPW4                       *((volatile unsigned int*)(0x42000050UL))
#define bM0P_FLASH_IF_FOCR_FRWPW5                       *((volatile unsigned int*)(0x42000054UL))
#define bM0P_FLASH_IF_FOCR_FRWPW6                       *((volatile unsigned int*)(0x42000058UL))
#define bM0P_FLASH_IF_FOCR_FRWPW7                       *((volatile unsigned int*)(0x4200005CUL))
#define bM0P_FLASH_IF_FOCR_FRWPW8                       *((volatile unsigned int*)(0x42000060UL))
#define bM0P_FLASH_IF_FOCR_FRWPW9                       *((volatile unsigned int*)(0x42000064UL))
#define bM0P_FLASH_IF_FOCR_FRWPW10                      *((volatile unsigned int*)(0x42000068UL))
#define bM0P_FLASH_IF_FOCR_FRWPW11                      *((volatile unsigned int*)(0x4200006CUL))
#define bM0P_FLASH_IF_FOCR_FRWPW12                      *((volatile unsigned int*)(0x42000070UL))
#define bM0P_FLASH_IF_FOCR_FRWPW13                      *((volatile unsigned int*)(0x42000074UL))
#define bM0P_FLASH_IF_FOCR_FRWPW14                      *((volatile unsigned int*)(0x42000078UL))
#define bM0P_FLASH_IF_FOCR_FRWPW15                      *((volatile unsigned int*)(0x4200007CUL))
#define bM0P_FLASH_IF_FSTR_BUSY                         *((volatile unsigned int*)(0x42000180UL))
#define bM0P_FLASH_IF_FSTR_KEYVIO                       *((volatile unsigned int*)(0x42000184UL))
#define bM0P_FLASH_IF_FSTR_ACCVIO                       *((volatile unsigned int*)(0x42000188UL))
#define bM0P_FLASH_IF_FSTR_ERR                          *((volatile unsigned int*)(0x4200018CUL))
#define bM0P_FLASH_IF_FSTR_OPVIO                        *((volatile unsigned int*)(0x42000190UL))
#define bM0P_FLASH_IF_FSTR_FRWPW0                       *((volatile unsigned int*)(0x420001C0UL))
#define bM0P_FLASH_IF_FSTR_FRWPW1                       *((volatile unsigned int*)(0x420001C4UL))
#define bM0P_FLASH_IF_FSTR_FRWPW2                       *((volatile unsigned int*)(0x420001C8UL))
#define bM0P_FLASH_IF_FSTR_FRWPW3                       *((volatile unsigned int*)(0x420001CCUL))
#define bM0P_FLASH_IF_FSTR_FRWPW4                       *((volatile unsigned int*)(0x420001D0UL))
#define bM0P_FLASH_IF_FSTR_FRWPW5                       *((volatile unsigned int*)(0x420001D4UL))
#define bM0P_FLASH_IF_FSTR_FRWPW6                       *((volatile unsigned int*)(0x420001D8UL))
#define bM0P_FLASH_IF_FSTR_FRWPW7                       *((volatile unsigned int*)(0x420001DCUL))
#define bM0P_FLASH_IF_FSTR_FRWPW8                       *((volatile unsigned int*)(0x420001E0UL))
#define bM0P_FLASH_IF_FSTR_FRWPW9                       *((volatile unsigned int*)(0x420001E4UL))
#define bM0P_FLASH_IF_FSTR_FRWPW10                      *((volatile unsigned int*)(0x420001E8UL))
#define bM0P_FLASH_IF_FSTR_FRWPW11                      *((volatile unsigned int*)(0x420001ECUL))
#define bM0P_FLASH_IF_FSTR_FRWPW12                      *((volatile unsigned int*)(0x420001F0UL))
#define bM0P_FLASH_IF_FSTR_FRWPW13                      *((volatile unsigned int*)(0x420001F4UL))
#define bM0P_FLASH_IF_FSTR_FRWPW14                      *((volatile unsigned int*)(0x420001F8UL))
#define bM0P_FLASH_IF_FSTR_FRWPW15                      *((volatile unsigned int*)(0x420001FCUL))
#define bM0P_FLASH_IF_FWCICR_FIE                        *((volatile unsigned int*)(0x42000200UL))
#define bM0P_FLASH_IF_FWCICR_FWTC0                      *((volatile unsigned int*)(0x42000210UL))
#define bM0P_FLASH_IF_FWCICR_FWTC1                      *((volatile unsigned int*)(0x42000214UL))
#define bM0P_FLASH_IF_FUDR0_F4M_ITC0                    *((volatile unsigned int*)(0x420002A0UL))
#define bM0P_FLASH_IF_FUDR0_F4M_ITC1                    *((volatile unsigned int*)(0x420002A4UL))
#define bM0P_FLASH_IF_FUDR0_F4M_ITC2                    *((volatile unsigned int*)(0x420002A8UL))
#define bM0P_FLASH_IF_FUDR0_F4M_ITC3                    *((volatile unsigned int*)(0x420002ACUL))
#define bM0P_FLASH_IF_FUDR0_F4M_OPT0                    *((volatile unsigned int*)(0x420002C0UL))
#define bM0P_FLASH_IF_FUDR0_F4M_OPT1                    *((volatile unsigned int*)(0x420002C4UL))
#define bM0P_FLASH_IF_FUDR0_F4M_OPT2                    *((volatile unsigned int*)(0x420002C8UL))
#define bM0P_FLASH_IF_FUDR0_F4M_OPT3                    *((volatile unsigned int*)(0x420002CCUL))
#define bM0P_FLASH_IF_FUDR0_F4M_OPT4                    *((volatile unsigned int*)(0x420002D0UL))
#define bM0P_FLASH_IF_FUDR0_F4M_OPT5                    *((volatile unsigned int*)(0x420002D4UL))
#define bM0P_FLASH_IF_FUDR0_F4M_OPT6                    *((volatile unsigned int*)(0x420002D8UL))
#define bM0P_FLASH_IF_FUDR0_F4M_OPT7                    *((volatile unsigned int*)(0x420002DCUL))
#define bM0P_FLASH_IF_TNVS_TNVS0                        *((volatile unsigned int*)(0x42000480UL))
#define bM0P_FLASH_IF_TNVS_TNVS1                        *((volatile unsigned int*)(0x42000484UL))
#define bM0P_FLASH_IF_TNVS_TNVS2                        *((volatile unsigned int*)(0x42000488UL))
#define bM0P_FLASH_IF_TNVS_TNVS3                        *((volatile unsigned int*)(0x4200048CUL))
#define bM0P_FLASH_IF_TNVS_TNVS4                        *((volatile unsigned int*)(0x42000490UL))
#define bM0P_FLASH_IF_TNVS_TNVS5                        *((volatile unsigned int*)(0x42000494UL))
#define bM0P_FLASH_IF_TNVS_TNVS6                        *((volatile unsigned int*)(0x42000498UL))
#define bM0P_FLASH_IF_TNVS_TNVS7                        *((volatile unsigned int*)(0x4200049CUL))
#define bM0P_FLASH_IF_TNVS_TNVS8                        *((volatile unsigned int*)(0x420004A0UL))
#define bM0P_FLASH_IF_TPROG_TPROG0                      *((volatile unsigned int*)(0x42000500UL))
#define bM0P_FLASH_IF_TPROG_TPROG1                      *((volatile unsigned int*)(0x42000504UL))
#define bM0P_FLASH_IF_TPROG_TPROG2                      *((volatile unsigned int*)(0x42000508UL))
#define bM0P_FLASH_IF_TPROG_TPROG3                      *((volatile unsigned int*)(0x4200050CUL))
#define bM0P_FLASH_IF_TPROG_TPROG4                      *((volatile unsigned int*)(0x42000510UL))
#define bM0P_FLASH_IF_TPROG_TPROG5                      *((volatile unsigned int*)(0x42000514UL))
#define bM0P_FLASH_IF_TPROG_TPROG6                      *((volatile unsigned int*)(0x42000518UL))
#define bM0P_FLASH_IF_TPROG_TPROG7                      *((volatile unsigned int*)(0x4200051CUL))
#define bM0P_FLASH_IF_TPROG_TPROG8                      *((volatile unsigned int*)(0x42000520UL))
#define bM0P_FLASH_IF_TPGS_TPGS0                        *((volatile unsigned int*)(0x42000580UL))
#define bM0P_FLASH_IF_TPGS_TPGS1                        *((volatile unsigned int*)(0x42000584UL))
#define bM0P_FLASH_IF_TPGS_TPGS2                        *((volatile unsigned int*)(0x42000588UL))
#define bM0P_FLASH_IF_TPGS_TPGS3                        *((volatile unsigned int*)(0x4200058CUL))
#define bM0P_FLASH_IF_TPGS_TPGS4                        *((volatile unsigned int*)(0x42000590UL))
#define bM0P_FLASH_IF_TPGS_TPGS5                        *((volatile unsigned int*)(0x42000594UL))
#define bM0P_FLASH_IF_TPGS_TPGS6                        *((volatile unsigned int*)(0x42000598UL))
#define bM0P_FLASH_IF_TPGS_TPGS7                        *((volatile unsigned int*)(0x4200059CUL))
#define bM0P_FLASH_IF_TPGS_TPGS8                        *((volatile unsigned int*)(0x420005A0UL))
#define bM0P_FLASH_IF_TRCVPGM_TRCVPGM0                  *((volatile unsigned int*)(0x42000600UL))
#define bM0P_FLASH_IF_TRCVPGM_TRCVPGM1                  *((volatile unsigned int*)(0x42000604UL))
#define bM0P_FLASH_IF_TRCVPGM_TRCVPGM2                  *((volatile unsigned int*)(0x42000608UL))
#define bM0P_FLASH_IF_TRCVPGM_TRCVPGM3                  *((volatile unsigned int*)(0x4200060CUL))
#define bM0P_FLASH_IF_TRCVPGM_TRCVPGM4                  *((volatile unsigned int*)(0x42000610UL))
#define bM0P_FLASH_IF_TRCVPGM_TRCVPGM5                  *((volatile unsigned int*)(0x42000614UL))
#define bM0P_FLASH_IF_TRCVPGM_TRCVPGM6                  *((volatile unsigned int*)(0x42000618UL))
#define bM0P_FLASH_IF_TRCVPGM_TRCVPGM7                  *((volatile unsigned int*)(0x4200061CUL))
#define bM0P_FLASH_IF_TRCVPGM_TRCVPGM8                  *((volatile unsigned int*)(0x42000620UL))
#define bM0P_FLASH_IF_TRCVPERS_TRCVPERS0                *((volatile unsigned int*)(0x42000680UL))
#define bM0P_FLASH_IF_TRCVPERS_TRCVPERS1                *((volatile unsigned int*)(0x42000684UL))
#define bM0P_FLASH_IF_TRCVPERS_TRCVPERS2                *((volatile unsigned int*)(0x42000688UL))
#define bM0P_FLASH_IF_TRCVPERS_TRCVPERS3                *((volatile unsigned int*)(0x4200068CUL))
#define bM0P_FLASH_IF_TRCVPERS_TRCVPERS4                *((volatile unsigned int*)(0x42000690UL))
#define bM0P_FLASH_IF_TRCVPERS_TRCVPERS5                *((volatile unsigned int*)(0x42000694UL))
#define bM0P_FLASH_IF_TRCVPERS_TRCVPERS6                *((volatile unsigned int*)(0x42000698UL))
#define bM0P_FLASH_IF_TRCVPERS_TRCVPERS7                *((volatile unsigned int*)(0x4200069CUL))
#define bM0P_FLASH_IF_TRCVPERS_TRCVPERS8                *((volatile unsigned int*)(0x420006A0UL))
#define bM0P_FLASH_IF_TRCVCERS_TRCVCERS0                *((volatile unsigned int*)(0x42000700UL))
#define bM0P_FLASH_IF_TRCVCERS_TRCVCERS1                *((volatile unsigned int*)(0x42000704UL))
#define bM0P_FLASH_IF_TRCVCERS_TRCVCERS2                *((volatile unsigned int*)(0x42000708UL))
#define bM0P_FLASH_IF_TRCVCERS_TRCVCERS3                *((volatile unsigned int*)(0x4200070CUL))
#define bM0P_FLASH_IF_TRCVCERS_TRCVCERS4                *((volatile unsigned int*)(0x42000710UL))
#define bM0P_FLASH_IF_TRCVCERS_TRCVCERS5                *((volatile unsigned int*)(0x42000714UL))
#define bM0P_FLASH_IF_TRCVCERS_TRCVCERS6                *((volatile unsigned int*)(0x42000718UL))
#define bM0P_FLASH_IF_TRCVCERS_TRCVCERS7                *((volatile unsigned int*)(0x4200071CUL))
#define bM0P_FLASH_IF_TRCVCERS_TRCVCERS8                *((volatile unsigned int*)(0x42000720UL))
#define bM0P_FLASH_IF_TPERS_TPERS0                      *((volatile unsigned int*)(0x42000780UL))
#define bM0P_FLASH_IF_TPERS_TPERS1                      *((volatile unsigned int*)(0x42000784UL))
#define bM0P_FLASH_IF_TPERS_TPERS2                      *((volatile unsigned int*)(0x42000788UL))
#define bM0P_FLASH_IF_TPERS_TPERS3                      *((volatile unsigned int*)(0x4200078CUL))
#define bM0P_FLASH_IF_TPERS_TPERS4                      *((volatile unsigned int*)(0x42000790UL))
#define bM0P_FLASH_IF_TPERS_TPERS5                      *((volatile unsigned int*)(0x42000794UL))
#define bM0P_FLASH_IF_TPERS_TPERS6                      *((volatile unsigned int*)(0x42000798UL))
#define bM0P_FLASH_IF_TPERS_TPERS7                      *((volatile unsigned int*)(0x4200079CUL))
#define bM0P_FLASH_IF_TPERS_TPERS8                      *((volatile unsigned int*)(0x420007A0UL))
#define bM0P_FLASH_IF_TCERS_TCERS0                      *((volatile unsigned int*)(0x42000800UL))
#define bM0P_FLASH_IF_TCERS_TCERS1                      *((volatile unsigned int*)(0x42000804UL))
#define bM0P_FLASH_IF_TCERS_TCERS2                      *((volatile unsigned int*)(0x42000808UL))
#define bM0P_FLASH_IF_TCERS_TCERS3                      *((volatile unsigned int*)(0x4200080CUL))
#define bM0P_FLASH_IF_TCERS_TCERS4                      *((volatile unsigned int*)(0x42000810UL))
#define bM0P_FLASH_IF_TCERS_TCERS5                      *((volatile unsigned int*)(0x42000814UL))
#define bM0P_FLASH_IF_TCERS_TCERS6                      *((volatile unsigned int*)(0x42000818UL))
#define bM0P_FLASH_IF_TCERS_TCERS7                      *((volatile unsigned int*)(0x4200081CUL))
#define bM0P_FLASH_IF_TCERS_TCERS8                      *((volatile unsigned int*)(0x42000820UL))
#define bM0P_GPIO_FN0_P07                               *((volatile unsigned int*)(0x4266001CUL))
#define bM0P_GPIO_FN1_P10                               *((volatile unsigned int*)(0x42660080UL))
#define bM0P_GPIO_FN1_P11                               *((volatile unsigned int*)(0x42660084UL))
#define bM0P_GPIO_FN1_P12                               *((volatile unsigned int*)(0x42660088UL))
#define bM0P_GPIO_FN1_P13                               *((volatile unsigned int*)(0x4266008CUL))
#define bM0P_GPIO_FN1_P14                               *((volatile unsigned int*)(0x42660090UL))
#define bM0P_GPIO_FN1_P15                               *((volatile unsigned int*)(0x42660094UL))
#define bM0P_GPIO_FN1_P16                               *((volatile unsigned int*)(0x42660098UL))
#define bM0P_GPIO_FN2_P20                               *((volatile unsigned int*)(0x42660100UL))
#define bM0P_GPIO_FN3_P30                               *((volatile unsigned int*)(0x42660180UL))
#define bM0P_GPIO_FN3_P31                               *((volatile unsigned int*)(0x42660184UL))
#define bM0P_GPIO_FN3_P32                               *((volatile unsigned int*)(0x42660188UL))
#define bM0P_GPIO_FN4_P40                               *((volatile unsigned int*)(0x42660200UL))
#define bM0P_GPIO_FN4_P41                               *((volatile unsigned int*)(0x42660204UL))
#define bM0P_GPIO_FN4_P42                               *((volatile unsigned int*)(0x42660208UL))
#define bM0P_GPIO_FN4_P43                               *((volatile unsigned int*)(0x4266020CUL))
#define bM0P_GPIO_FN4_P44                               *((volatile unsigned int*)(0x42660210UL))
#define bM0P_GPIO_FN4_P45                               *((volatile unsigned int*)(0x42660214UL))
#define bM0P_GPIO_FN4_P46                               *((volatile unsigned int*)(0x42660218UL))
#define bM0P_GPIO_FN6_P60                               *((volatile unsigned int*)(0x42660300UL))
#define bM0P_GPIO_FN6_P61                               *((volatile unsigned int*)(0x42660304UL))
#define bM0P_GPIO_FN7_P70                               *((volatile unsigned int*)(0x42660380UL))
#define bM0P_GPIO_FN7_P71                               *((volatile unsigned int*)(0x42660384UL))
#define bM0P_GPIO_FN7_P72                               *((volatile unsigned int*)(0x42660388UL))
#define bM0P_GPIO_FN7_P73                               *((volatile unsigned int*)(0x4266038CUL))
#define bM0P_GPIO_FN7_P74                               *((volatile unsigned int*)(0x42660390UL))
#define bM0P_GPIO_FN7_P75                               *((volatile unsigned int*)(0x42660394UL))
#define bM0P_GPIO_PU0_P07                               *((volatile unsigned int*)(0x4266201CUL))
#define bM0P_GPIO_PU1_P10                               *((volatile unsigned int*)(0x42662080UL))
#define bM0P_GPIO_PU1_P11                               *((volatile unsigned int*)(0x42662084UL))
#define bM0P_GPIO_PU1_P12                               *((volatile unsigned int*)(0x42662088UL))
#define bM0P_GPIO_PU1_P13                               *((volatile unsigned int*)(0x4266208CUL))
#define bM0P_GPIO_PU1_P14                               *((volatile unsigned int*)(0x42662090UL))
#define bM0P_GPIO_PU1_P15                               *((volatile unsigned int*)(0x42662094UL))
#define bM0P_GPIO_PU1_P16                               *((volatile unsigned int*)(0x42662098UL))
#define bM0P_GPIO_PU3_P30                               *((volatile unsigned int*)(0x42662180UL))
#define bM0P_GPIO_PU3_P31                               *((volatile unsigned int*)(0x42662184UL))
#define bM0P_GPIO_PU3_P32                               *((volatile unsigned int*)(0x42662188UL))
#define bM0P_GPIO_PU4_P40                               *((volatile unsigned int*)(0x42662200UL))
#define bM0P_GPIO_PU4_P41                               *((volatile unsigned int*)(0x42662204UL))
#define bM0P_GPIO_PU4_P42                               *((volatile unsigned int*)(0x42662208UL))
#define bM0P_GPIO_PU4_P43                               *((volatile unsigned int*)(0x4266220CUL))
#define bM0P_GPIO_PU4_P44                               *((volatile unsigned int*)(0x42662210UL))
#define bM0P_GPIO_PU4_P45                               *((volatile unsigned int*)(0x42662214UL))
#define bM0P_GPIO_PU4_P46                               *((volatile unsigned int*)(0x42662218UL))
#define bM0P_GPIO_PU6_P60                               *((volatile unsigned int*)(0x42662300UL))
#define bM0P_GPIO_PU6_P61                               *((volatile unsigned int*)(0x42662304UL))
#define bM0P_GPIO_PU7_P70                               *((volatile unsigned int*)(0x42662380UL))
#define bM0P_GPIO_PU7_P71                               *((volatile unsigned int*)(0x42662384UL))
#define bM0P_GPIO_PU7_P72                               *((volatile unsigned int*)(0x42662388UL))
#define bM0P_GPIO_PU7_P73                               *((volatile unsigned int*)(0x4266238CUL))
#define bM0P_GPIO_PU7_P74                               *((volatile unsigned int*)(0x42662390UL))
#define bM0P_GPIO_PU7_P75                               *((volatile unsigned int*)(0x42662394UL))
#define bM0P_GPIO_DIR0_P07                              *((volatile unsigned int*)(0x4266401CUL))
#define bM0P_GPIO_DIR1_P10                              *((volatile unsigned int*)(0x42664080UL))
#define bM0P_GPIO_DIR1_P11                              *((volatile unsigned int*)(0x42664084UL))
#define bM0P_GPIO_DIR1_P12                              *((volatile unsigned int*)(0x42664088UL))
#define bM0P_GPIO_DIR1_P13                              *((volatile unsigned int*)(0x4266408CUL))
#define bM0P_GPIO_DIR1_P14                              *((volatile unsigned int*)(0x42664090UL))
#define bM0P_GPIO_DIR1_P15                              *((volatile unsigned int*)(0x42664094UL))
#define bM0P_GPIO_DIR1_P16                              *((volatile unsigned int*)(0x42664098UL))
#define bM0P_GPIO_DIR2_P20                              *((volatile unsigned int*)(0x42664100UL))
#define bM0P_GPIO_DIR3_P30                              *((volatile unsigned int*)(0x42664180UL))
#define bM0P_GPIO_DIR3_P31                              *((volatile unsigned int*)(0x42664184UL))
#define bM0P_GPIO_DIR3_P32                              *((volatile unsigned int*)(0x42664188UL))
#define bM0P_GPIO_DIR4_P40                              *((volatile unsigned int*)(0x42664200UL))
#define bM0P_GPIO_DIR4_P41                              *((volatile unsigned int*)(0x42664204UL))
#define bM0P_GPIO_DIR4_P42                              *((volatile unsigned int*)(0x42664208UL))
#define bM0P_GPIO_DIR4_P43                              *((volatile unsigned int*)(0x4266420CUL))
#define bM0P_GPIO_DIR4_P44                              *((volatile unsigned int*)(0x42664210UL))
#define bM0P_GPIO_DIR4_P45                              *((volatile unsigned int*)(0x42664214UL))
#define bM0P_GPIO_DIR4_P46                              *((volatile unsigned int*)(0x42664218UL))
#define bM0P_GPIO_DIR6_P60                              *((volatile unsigned int*)(0x42664300UL))
#define bM0P_GPIO_DIR6_P61                              *((volatile unsigned int*)(0x42664304UL))
#define bM0P_GPIO_DIR7_P70                              *((volatile unsigned int*)(0x42664380UL))
#define bM0P_GPIO_DIR7_P71                              *((volatile unsigned int*)(0x42664384UL))
#define bM0P_GPIO_DIR7_P72                              *((volatile unsigned int*)(0x42664388UL))
#define bM0P_GPIO_DIR7_P73                              *((volatile unsigned int*)(0x4266438CUL))
#define bM0P_GPIO_DIR7_P74                              *((volatile unsigned int*)(0x42664390UL))
#define bM0P_GPIO_DIR7_P75                              *((volatile unsigned int*)(0x42664394UL))
#define bM0P_GPIO_GET0_P07                              *((volatile unsigned int*)(0x4266601CUL))
#define bM0P_GPIO_GET1_P10                              *((volatile unsigned int*)(0x42666080UL))
#define bM0P_GPIO_GET1_P11                              *((volatile unsigned int*)(0x42666084UL))
#define bM0P_GPIO_GET1_P12                              *((volatile unsigned int*)(0x42666088UL))
#define bM0P_GPIO_GET1_P13                              *((volatile unsigned int*)(0x4266608CUL))
#define bM0P_GPIO_GET1_P14                              *((volatile unsigned int*)(0x42666090UL))
#define bM0P_GPIO_GET1_P15                              *((volatile unsigned int*)(0x42666094UL))
#define bM0P_GPIO_GET1_P16                              *((volatile unsigned int*)(0x42666098UL))
#define bM0P_GPIO_GET2_P20                              *((volatile unsigned int*)(0x42666100UL))
#define bM0P_GPIO_GET3_P30                              *((volatile unsigned int*)(0x42666180UL))
#define bM0P_GPIO_GET3_P31                              *((volatile unsigned int*)(0x42666184UL))
#define bM0P_GPIO_GET3_P32                              *((volatile unsigned int*)(0x42666188UL))
#define bM0P_GPIO_GET4_P40                              *((volatile unsigned int*)(0x42666200UL))
#define bM0P_GPIO_GET4_P41                              *((volatile unsigned int*)(0x42666204UL))
#define bM0P_GPIO_GET4_P42                              *((volatile unsigned int*)(0x42666208UL))
#define bM0P_GPIO_GET4_P43                              *((volatile unsigned int*)(0x4266620CUL))
#define bM0P_GPIO_GET4_P44                              *((volatile unsigned int*)(0x42666210UL))
#define bM0P_GPIO_GET4_P45                              *((volatile unsigned int*)(0x42666214UL))
#define bM0P_GPIO_GET4_P46                              *((volatile unsigned int*)(0x42666218UL))
#define bM0P_GPIO_GET6_P60                              *((volatile unsigned int*)(0x42666300UL))
#define bM0P_GPIO_GET6_P61                              *((volatile unsigned int*)(0x42666304UL))
#define bM0P_GPIO_GET7_P70                              *((volatile unsigned int*)(0x42666380UL))
#define bM0P_GPIO_GET7_P71                              *((volatile unsigned int*)(0x42666384UL))
#define bM0P_GPIO_GET7_P72                              *((volatile unsigned int*)(0x42666388UL))
#define bM0P_GPIO_GET7_P73                              *((volatile unsigned int*)(0x4266638CUL))
#define bM0P_GPIO_GET7_P74                              *((volatile unsigned int*)(0x42666390UL))
#define bM0P_GPIO_GET7_P75                              *((volatile unsigned int*)(0x42666394UL))
#define bM0P_GPIO_SET0_P07                              *((volatile unsigned int*)(0x4266801CUL))
#define bM0P_GPIO_SET1_P10                              *((volatile unsigned int*)(0x42668080UL))
#define bM0P_GPIO_SET1_P11                              *((volatile unsigned int*)(0x42668084UL))
#define bM0P_GPIO_SET1_P12                              *((volatile unsigned int*)(0x42668088UL))
#define bM0P_GPIO_SET1_P13                              *((volatile unsigned int*)(0x4266808CUL))
#define bM0P_GPIO_SET1_P14                              *((volatile unsigned int*)(0x42668090UL))
#define bM0P_GPIO_SET1_P15                              *((volatile unsigned int*)(0x42668094UL))
#define bM0P_GPIO_SET1_P16                              *((volatile unsigned int*)(0x42668098UL))
#define bM0P_GPIO_SET2_P20                              *((volatile unsigned int*)(0x42668100UL))
#define bM0P_GPIO_SET3_P30                              *((volatile unsigned int*)(0x42668180UL))
#define bM0P_GPIO_SET3_P31                              *((volatile unsigned int*)(0x42668184UL))
#define bM0P_GPIO_SET3_P32                              *((volatile unsigned int*)(0x42668188UL))
#define bM0P_GPIO_SET4_P40                              *((volatile unsigned int*)(0x42668200UL))
#define bM0P_GPIO_SET4_P41                              *((volatile unsigned int*)(0x42668204UL))
#define bM0P_GPIO_SET4_P42                              *((volatile unsigned int*)(0x42668208UL))
#define bM0P_GPIO_SET4_P43                              *((volatile unsigned int*)(0x4266820CUL))
#define bM0P_GPIO_SET4_P44                              *((volatile unsigned int*)(0x42668210UL))
#define bM0P_GPIO_SET4_P45                              *((volatile unsigned int*)(0x42668214UL))
#define bM0P_GPIO_SET4_P46                              *((volatile unsigned int*)(0x42668218UL))
#define bM0P_GPIO_SET6_P60                              *((volatile unsigned int*)(0x42668300UL))
#define bM0P_GPIO_SET6_P61                              *((volatile unsigned int*)(0x42668304UL))
#define bM0P_GPIO_SET7_P70                              *((volatile unsigned int*)(0x42668380UL))
#define bM0P_GPIO_SET7_P71                              *((volatile unsigned int*)(0x42668384UL))
#define bM0P_GPIO_SET7_P72                              *((volatile unsigned int*)(0x42668388UL))
#define bM0P_GPIO_SET7_P73                              *((volatile unsigned int*)(0x4266838CUL))
#define bM0P_GPIO_SET7_P74                              *((volatile unsigned int*)(0x42668390UL))
#define bM0P_GPIO_SET7_P75                              *((volatile unsigned int*)(0x42668394UL))
#define bM0P_GPIO_ANALOG_ADE00                          *((volatile unsigned int*)(0x4266A000UL))
#define bM0P_GPIO_ANALOG_ADE01                          *((volatile unsigned int*)(0x4266A004UL))
#define bM0P_GPIO_ANALOG_ADE02                          *((volatile unsigned int*)(0x4266A008UL))
#define bM0P_GPIO_ANALOG_ADE03                          *((volatile unsigned int*)(0x4266A00CUL))
#define bM0P_GPIO_ANALOG_ADE08                          *((volatile unsigned int*)(0x4266A020UL))
#define bM0P_GPIO_ANALOG_ADE09                          *((volatile unsigned int*)(0x4266A024UL))
#define bM0P_GPIO_ANALOG_ADE10                          *((volatile unsigned int*)(0x4266A028UL))
#define bM0P_GPIO_ANALOG_ADE11                          *((volatile unsigned int*)(0x4266A02CUL))
#define bM0P_GPIO_ANALOG_ADE12                          *((volatile unsigned int*)(0x4266A030UL))
#define bM0P_GPIO_ANALOG_ADE13                          *((volatile unsigned int*)(0x4266A034UL))
#define bM0P_GPIO_ANALOG_ADE14                          *((volatile unsigned int*)(0x4266A038UL))
#define bM0P_GPIO_ANALOG_ADE15                          *((volatile unsigned int*)(0x4266A03CUL))
#define bM0P_GPIO_ANALOG_ADE16                          *((volatile unsigned int*)(0x4266A040UL))
#define bM0P_GPIO_ANALOG_ADE17                          *((volatile unsigned int*)(0x4266A044UL))
#define bM0P_GPIO_ANALOG_ADE18                          *((volatile unsigned int*)(0x4266A048UL))
#define bM0P_GPIO_ANALOG_ADE19                          *((volatile unsigned int*)(0x4266A04CUL))
#define bM0P_GPIO_ANALOG_ADE20                          *((volatile unsigned int*)(0x4266A050UL))
#define bM0P_GPIO_ANALOG_ADE21                          *((volatile unsigned int*)(0x4266A054UL))
#define bM0P_GPIO_ANALOG_ADE22                          *((volatile unsigned int*)(0x4266A058UL))
#define bM0P_GPIO_ANALOG_ADE23                          *((volatile unsigned int*)(0x4266A05CUL))
#define bM0P_GPIO_SPS_SUBCS0                            *((volatile unsigned int*)(0x4266B000UL))
#define bM0P_GPIO_SPS_SUBCS1                            *((volatile unsigned int*)(0x4266B004UL))
#define bM0P_GPIO_SPS_MAINCS0                           *((volatile unsigned int*)(0x4266B008UL))
#define bM0P_GPIO_SPS_MAINCS1                           *((volatile unsigned int*)(0x4266B00CUL))
#define bM0P_GPIO_FN_SEL00_NMIS                         *((volatile unsigned int*)(0x4266C000UL))
#define bM0P_GPIO_FN_SEL00_CROUTE0                      *((volatile unsigned int*)(0x4266C004UL))
#define bM0P_GPIO_FN_SEL00_CROUTE1                      *((volatile unsigned int*)(0x4266C008UL))
#define bM0P_GPIO_FN_SEL00_SWDEN                        *((volatile unsigned int*)(0x4266C020UL))
#define bM0P_GPIO_FN_SEL01_PWM00E0                      *((volatile unsigned int*)(0x4266C080UL))
#define bM0P_GPIO_FN_SEL01_PWM00E1                      *((volatile unsigned int*)(0x4266C084UL))
#define bM0P_GPIO_FN_SEL01_PWM01E0                      *((volatile unsigned int*)(0x4266C088UL))
#define bM0P_GPIO_FN_SEL01_PWM01E1                      *((volatile unsigned int*)(0x4266C08CUL))
#define bM0P_GPIO_FN_SEL01_PWM02E0                      *((volatile unsigned int*)(0x4266C090UL))
#define bM0P_GPIO_FN_SEL01_PWM02E1                      *((volatile unsigned int*)(0x4266C094UL))
#define bM0P_GPIO_FN_SEL01_PWM03E0                      *((volatile unsigned int*)(0x4266C098UL))
#define bM0P_GPIO_FN_SEL01_PWM03E1                      *((volatile unsigned int*)(0x4266C09CUL))
#define bM0P_GPIO_FN_SEL01_PWM04E0                      *((volatile unsigned int*)(0x4266C0A0UL))
#define bM0P_GPIO_FN_SEL01_PWM04E1                      *((volatile unsigned int*)(0x4266C0A4UL))
#define bM0P_GPIO_FN_SEL01_PWM05E0                      *((volatile unsigned int*)(0x4266C0A8UL))
#define bM0P_GPIO_FN_SEL01_PWM05E1                      *((volatile unsigned int*)(0x4266C0ACUL))
#define bM0P_GPIO_FN_SEL01_EMII0C                       *((volatile unsigned int*)(0x4266C0B0UL))
#define bM0P_GPIO_FN_SEL01_EMII0S                       *((volatile unsigned int*)(0x4266C0C0UL))
#define bM0P_GPIO_FN_SEL01_EXCK0S                       *((volatile unsigned int*)(0x4266C0C8UL))
#define bM0P_GPIO_FN_SEL02_TIOA0E0                      *((volatile unsigned int*)(0x4266C108UL))
#define bM0P_GPIO_FN_SEL02_TIOA0E1                      *((volatile unsigned int*)(0x4266C10CUL))
#define bM0P_GPIO_FN_SEL02_TIOB0S0                      *((volatile unsigned int*)(0x4266C110UL))
#define bM0P_GPIO_FN_SEL02_TIOB0S1                      *((volatile unsigned int*)(0x4266C114UL))
#define bM0P_GPIO_FN_SEL02_TIOB0S2                      *((volatile unsigned int*)(0x4266C118UL))
#define bM0P_GPIO_FN_SEL02_TIOA1S0                      *((volatile unsigned int*)(0x4266C120UL))
#define bM0P_GPIO_FN_SEL02_TIOA1S1                      *((volatile unsigned int*)(0x4266C124UL))
#define bM0P_GPIO_FN_SEL02_TIOA1E0                      *((volatile unsigned int*)(0x4266C128UL))
#define bM0P_GPIO_FN_SEL02_TIOA1E1                      *((volatile unsigned int*)(0x4266C12CUL))
#define bM0P_GPIO_FN_SEL02_TIOB1S0                      *((volatile unsigned int*)(0x4266C130UL))
#define bM0P_GPIO_FN_SEL02_TIOB1S1                      *((volatile unsigned int*)(0x4266C134UL))
#define bM0P_GPIO_FN_SEL02_TIOA2E0                      *((volatile unsigned int*)(0x4266C148UL))
#define bM0P_GPIO_FN_SEL02_TIOA2E1                      *((volatile unsigned int*)(0x4266C14CUL))
#define bM0P_GPIO_FN_SEL02_TIOB2S0                      *((volatile unsigned int*)(0x4266C150UL))
#define bM0P_GPIO_FN_SEL02_TIOB2S1                      *((volatile unsigned int*)(0x4266C154UL))
#define bM0P_GPIO_FN_SEL02_TIOB2S2                      *((volatile unsigned int*)(0x4266C158UL))
#define bM0P_GPIO_FN_SEL02_TIOA3S0                      *((volatile unsigned int*)(0x4266C160UL))
#define bM0P_GPIO_FN_SEL02_TIOA3S1                      *((volatile unsigned int*)(0x4266C164UL))
#define bM0P_GPIO_FN_SEL02_TIOA3E0                      *((volatile unsigned int*)(0x4266C168UL))
#define bM0P_GPIO_FN_SEL02_TIOA3E1                      *((volatile unsigned int*)(0x4266C16CUL))
#define bM0P_GPIO_FN_SEL02_TIOB3S0                      *((volatile unsigned int*)(0x4266C170UL))
#define bM0P_GPIO_FN_SEL02_TIOB3S1                      *((volatile unsigned int*)(0x4266C174UL))
#define bM0P_GPIO_FN_SEL04_EINT00S0                     *((volatile unsigned int*)(0x4266C200UL))
#define bM0P_GPIO_FN_SEL04_EINT00S1                     *((volatile unsigned int*)(0x4266C204UL))
#define bM0P_GPIO_FN_SEL04_EINT01S0                     *((volatile unsigned int*)(0x4266C208UL))
#define bM0P_GPIO_FN_SEL04_EINT01S1                     *((volatile unsigned int*)(0x4266C20CUL))
#define bM0P_GPIO_FN_SEL04_EINT02S0                     *((volatile unsigned int*)(0x4266C210UL))
#define bM0P_GPIO_FN_SEL04_EINT02S1                     *((volatile unsigned int*)(0x4266C214UL))
#define bM0P_GPIO_FN_SEL04_EINT03S0                     *((volatile unsigned int*)(0x4266C218UL))
#define bM0P_GPIO_FN_SEL04_EINT03S1                     *((volatile unsigned int*)(0x4266C21CUL))
#define bM0P_GPIO_FN_SEL04_EINT04S0                     *((volatile unsigned int*)(0x4266C220UL))
#define bM0P_GPIO_FN_SEL04_EINT04S1                     *((volatile unsigned int*)(0x4266C224UL))
#define bM0P_GPIO_FN_SEL04_EINT05S0                     *((volatile unsigned int*)(0x4266C228UL))
#define bM0P_GPIO_FN_SEL04_EINT05S1                     *((volatile unsigned int*)(0x4266C22CUL))
#define bM0P_GPIO_FN_SEL04_EINT06S0                     *((volatile unsigned int*)(0x4266C230UL))
#define bM0P_GPIO_FN_SEL04_EINT06S1                     *((volatile unsigned int*)(0x4266C234UL))
#define bM0P_GPIO_FN_SEL04_EINT07S0                     *((volatile unsigned int*)(0x4266C238UL))
#define bM0P_GPIO_FN_SEL04_EINT07S1                     *((volatile unsigned int*)(0x4266C23CUL))
#define bM0P_GPIO_FN_SEL04_EINT08S0                     *((volatile unsigned int*)(0x4266C240UL))
#define bM0P_GPIO_FN_SEL04_EINT08S1                     *((volatile unsigned int*)(0x4266C244UL))
#define bM0P_GPIO_FN_SEL04_EINT09S0                     *((volatile unsigned int*)(0x4266C248UL))
#define bM0P_GPIO_FN_SEL04_EINT09S1                     *((volatile unsigned int*)(0x4266C24CUL))
#define bM0P_GPIO_FN_SEL04_EINT10S0                     *((volatile unsigned int*)(0x4266C250UL))
#define bM0P_GPIO_FN_SEL04_EINT10S1                     *((volatile unsigned int*)(0x4266C254UL))
#define bM0P_GPIO_FN_SEL04_EINT11S0                     *((volatile unsigned int*)(0x4266C258UL))
#define bM0P_GPIO_FN_SEL04_EINT11S1                     *((volatile unsigned int*)(0x4266C25CUL))
#define bM0P_GPIO_FN_SEL04_EINT12S0                     *((volatile unsigned int*)(0x4266C260UL))
#define bM0P_GPIO_FN_SEL04_EINT12S1                     *((volatile unsigned int*)(0x4266C264UL))
#define bM0P_GPIO_FN_SEL04_EINT13S0                     *((volatile unsigned int*)(0x4266C268UL))
#define bM0P_GPIO_FN_SEL04_EINT13S1                     *((volatile unsigned int*)(0x4266C26CUL))
#define bM0P_GPIO_FN_SEL04_EINT14S0                     *((volatile unsigned int*)(0x4266C270UL))
#define bM0P_GPIO_FN_SEL04_EINT14S1                     *((volatile unsigned int*)(0x4266C274UL))
#define bM0P_GPIO_FN_SEL04_EINT15S0                     *((volatile unsigned int*)(0x4266C278UL))
#define bM0P_GPIO_FN_SEL04_EINT15S1                     *((volatile unsigned int*)(0x4266C27CUL))
#define bM0P_GPIO_FN_SEL07_RTS4E0                       *((volatile unsigned int*)(0x4266C380UL))
#define bM0P_GPIO_FN_SEL07_RTS4E1                       *((volatile unsigned int*)(0x4266C384UL))
#define bM0P_GPIO_FN_SEL07_CTS4S0                       *((volatile unsigned int*)(0x4266C388UL))
#define bM0P_GPIO_FN_SEL07_CTS4S1                       *((volatile unsigned int*)(0x4266C38CUL))
#define bM0P_GPIO_FN_SEL07_SIN4S0                       *((volatile unsigned int*)(0x4266C390UL))
#define bM0P_GPIO_FN_SEL07_SIN4S1                       *((volatile unsigned int*)(0x4266C394UL))
#define bM0P_GPIO_FN_SEL07_SOT4B0                       *((volatile unsigned int*)(0x4266C398UL))
#define bM0P_GPIO_FN_SEL07_SOT4B1                       *((volatile unsigned int*)(0x4266C39CUL))
#define bM0P_GPIO_FN_SEL07_SCK4B0                       *((volatile unsigned int*)(0x4266C3A0UL))
#define bM0P_GPIO_FN_SEL07_SCK4B1                       *((volatile unsigned int*)(0x4266C3A4UL))
#define bM0P_GPIO_FN_SEL07_SCS40B0                      *((volatile unsigned int*)(0x4266C3A8UL))
#define bM0P_GPIO_FN_SEL07_SCS40B1                      *((volatile unsigned int*)(0x4266C3ACUL))
#define bM0P_GPIO_FN_SEL07_SCS41E0                      *((volatile unsigned int*)(0x4266C3B0UL))
#define bM0P_GPIO_FN_SEL07_SCS41E1                      *((volatile unsigned int*)(0x4266C3B4UL))
#define bM0P_GPIO_FN_SEL07_SIN5S0                       *((volatile unsigned int*)(0x4266C3D0UL))
#define bM0P_GPIO_FN_SEL07_SIN5S1                       *((volatile unsigned int*)(0x4266C3D4UL))
#define bM0P_GPIO_FN_SEL07_SOT5B0                       *((volatile unsigned int*)(0x4266C3D8UL))
#define bM0P_GPIO_FN_SEL07_SOT5B1                       *((volatile unsigned int*)(0x4266C3DCUL))
#define bM0P_GPIO_FN_SEL07_SCK5B0                       *((volatile unsigned int*)(0x4266C3E0UL))
#define bM0P_GPIO_FN_SEL07_SCK5B1                       *((volatile unsigned int*)(0x4266C3E4UL))
#define bM0P_GPIO_FN_SEL07_SCS50B0                      *((volatile unsigned int*)(0x4266C3E8UL))
#define bM0P_GPIO_FN_SEL07_SCS50B1                      *((volatile unsigned int*)(0x4266C3ECUL))
#define bM0P_GPIO_FN_SEL08_RTS6E0                       *((volatile unsigned int*)(0x4266C400UL))
#define bM0P_GPIO_FN_SEL08_RTS6E1                       *((volatile unsigned int*)(0x4266C404UL))
#define bM0P_GPIO_FN_SEL08_CTS6S0                       *((volatile unsigned int*)(0x4266C408UL))
#define bM0P_GPIO_FN_SEL08_CTS6S1                       *((volatile unsigned int*)(0x4266C40CUL))
#define bM0P_GPIO_FN_SEL08_SIN6S0                       *((volatile unsigned int*)(0x4266C410UL))
#define bM0P_GPIO_FN_SEL08_SIN6S1                       *((volatile unsigned int*)(0x4266C414UL))
#define bM0P_GPIO_FN_SEL08_SOT6B0                       *((volatile unsigned int*)(0x4266C418UL))
#define bM0P_GPIO_FN_SEL08_SOT6B1                       *((volatile unsigned int*)(0x4266C41CUL))
#define bM0P_GPIO_FN_SEL08_SCK6B0                       *((volatile unsigned int*)(0x4266C420UL))
#define bM0P_GPIO_FN_SEL08_SCK6B1                       *((volatile unsigned int*)(0x4266C424UL))
#define bM0P_GPIO_FN_SEL08_SCS60B0                      *((volatile unsigned int*)(0x4266C428UL))
#define bM0P_GPIO_FN_SEL08_SCS60B1                      *((volatile unsigned int*)(0x4266C42CUL))
#define bM0P_GPIO_FN_SEL08_SCS61E0                      *((volatile unsigned int*)(0x4266C430UL))
#define bM0P_GPIO_FN_SEL08_SCS61E1                      *((volatile unsigned int*)(0x4266C434UL))
#define bM0P_GPIO_FN_SEL08_SCS62E0                      *((volatile unsigned int*)(0x4266C438UL))
#define bM0P_GPIO_FN_SEL08_SCS62E1                      *((volatile unsigned int*)(0x4266C43CUL))
#define bM0P_GPIO_FN_SEL09_VCOE0                        *((volatile unsigned int*)(0x4266C480UL))
#define bM0P_GPIO_FN_SEL09_VCOE1                        *((volatile unsigned int*)(0x4266C484UL))
#define bM0P_GPIO_FN_SEL09_ADTGS                        *((volatile unsigned int*)(0x4266C4E0UL))
#define bM0P_GPIO_ODR0_P07                              *((volatile unsigned int*)(0x4266E01CUL))
#define bM0P_GPIO_ODR1_P10                              *((volatile unsigned int*)(0x4266E080UL))
#define bM0P_GPIO_ODR1_P11                              *((volatile unsigned int*)(0x4266E084UL))
#define bM0P_GPIO_ODR1_P12                              *((volatile unsigned int*)(0x4266E088UL))
#define bM0P_GPIO_ODR1_P13                              *((volatile unsigned int*)(0x4266E08CUL))
#define bM0P_GPIO_ODR1_P14                              *((volatile unsigned int*)(0x4266E090UL))
#define bM0P_GPIO_ODR1_P15                              *((volatile unsigned int*)(0x4266E094UL))
#define bM0P_GPIO_ODR1_P16                              *((volatile unsigned int*)(0x4266E098UL))
#define bM0P_GPIO_ODR2_P20                              *((volatile unsigned int*)(0x4266E100UL))
#define bM0P_GPIO_ODR3_P30                              *((volatile unsigned int*)(0x4266E180UL))
#define bM0P_GPIO_ODR3_P31                              *((volatile unsigned int*)(0x4266E184UL))
#define bM0P_GPIO_ODR3_P32                              *((volatile unsigned int*)(0x4266E188UL))
#define bM0P_GPIO_ODR4_P40                              *((volatile unsigned int*)(0x4266E200UL))
#define bM0P_GPIO_ODR4_P41                              *((volatile unsigned int*)(0x4266E204UL))
#define bM0P_GPIO_ODR4_P42                              *((volatile unsigned int*)(0x4266E208UL))
#define bM0P_GPIO_ODR4_P43                              *((volatile unsigned int*)(0x4266E20CUL))
#define bM0P_GPIO_ODR4_P44                              *((volatile unsigned int*)(0x4266E210UL))
#define bM0P_GPIO_ODR4_P45                              *((volatile unsigned int*)(0x4266E214UL))
#define bM0P_GPIO_ODR4_P46                              *((volatile unsigned int*)(0x4266E218UL))
#define bM0P_GPIO_ODR6_P60                              *((volatile unsigned int*)(0x4266E300UL))
#define bM0P_GPIO_ODR6_P61                              *((volatile unsigned int*)(0x4266E304UL))
#define bM0P_GPIO_ODR7_P70                              *((volatile unsigned int*)(0x4266E380UL))
#define bM0P_GPIO_ODR7_P71                              *((volatile unsigned int*)(0x4266E384UL))
#define bM0P_GPIO_ODR7_P72                              *((volatile unsigned int*)(0x4266E388UL))
#define bM0P_GPIO_ODR7_P73                              *((volatile unsigned int*)(0x4266E38CUL))
#define bM0P_GPIO_ODR7_P74                              *((volatile unsigned int*)(0x4266E390UL))
#define bM0P_GPIO_ODR7_P75                              *((volatile unsigned int*)(0x4266E394UL))
#define bM0P_GPIO_FSETE0_P07                            *((volatile unsigned int*)(0x4267201CUL))
#define bM0P_GPIO_FSETE1_P10                            *((volatile unsigned int*)(0x42672080UL))
#define bM0P_GPIO_FSETE1_P11                            *((volatile unsigned int*)(0x42672084UL))
#define bM0P_GPIO_FSETE1_P12                            *((volatile unsigned int*)(0x42672088UL))
#define bM0P_GPIO_FSETE1_P13                            *((volatile unsigned int*)(0x4267208CUL))
#define bM0P_GPIO_FSETE1_P14                            *((volatile unsigned int*)(0x42672090UL))
#define bM0P_GPIO_FSETE1_P15                            *((volatile unsigned int*)(0x42672094UL))
#define bM0P_GPIO_FSETE1_P16                            *((volatile unsigned int*)(0x42672098UL))
#define bM0P_GPIO_FSETE2_P20                            *((volatile unsigned int*)(0x42672100UL))
#define bM0P_GPIO_FSETE3_P30                            *((volatile unsigned int*)(0x42672180UL))
#define bM0P_GPIO_FSETE3_P31                            *((volatile unsigned int*)(0x42672184UL))
#define bM0P_GPIO_FSETE3_P32                            *((volatile unsigned int*)(0x42672188UL))
#define bM0P_GPIO_FSETE4_P40                            *((volatile unsigned int*)(0x42672200UL))
#define bM0P_GPIO_FSETE4_P41                            *((volatile unsigned int*)(0x42672204UL))
#define bM0P_GPIO_FSETE4_P42                            *((volatile unsigned int*)(0x42672208UL))
#define bM0P_GPIO_FSETE4_P43                            *((volatile unsigned int*)(0x4267220CUL))
#define bM0P_GPIO_FSETE4_P44                            *((volatile unsigned int*)(0x42672210UL))
#define bM0P_GPIO_FSETE4_P45                            *((volatile unsigned int*)(0x42672214UL))
#define bM0P_GPIO_FSETE4_P46                            *((volatile unsigned int*)(0x42672218UL))
#define bM0P_GPIO_FSETE6_P60                            *((volatile unsigned int*)(0x42672300UL))
#define bM0P_GPIO_FSETE6_P61                            *((volatile unsigned int*)(0x42672304UL))
#define bM0P_GPIO_FSETE7_P70                            *((volatile unsigned int*)(0x42672380UL))
#define bM0P_GPIO_FSETE7_P71                            *((volatile unsigned int*)(0x42672384UL))
#define bM0P_GPIO_FSETE7_P72                            *((volatile unsigned int*)(0x42672388UL))
#define bM0P_GPIO_FSETE7_P73                            *((volatile unsigned int*)(0x4267238CUL))
#define bM0P_GPIO_FSETE7_P74                            *((volatile unsigned int*)(0x42672390UL))
#define bM0P_GPIO_FSETE7_P75                            *((volatile unsigned int*)(0x42672394UL))
#define bM0P_HWWDT_WDT_CTL_IE                           *((volatile unsigned int*)(0x42220100UL))
#define bM0P_HWWDT_WDT_CTL_RSTEN                        *((volatile unsigned int*)(0x42220104UL))
#define bM0P_HWWDT_WDT_STA_STA                          *((volatile unsigned int*)(0x42220200UL))
#define bM0P_IRQC_IRQ_DSEL_AD0IS                        *((volatile unsigned int*)(0x42620014UL))
#define bM0P_IRQC_IRQ_DSEL_CT0IS                        *((volatile unsigned int*)(0x42620020UL))
#define bM0P_IRQC_IRQ_DSEL_CT2IS                        *((volatile unsigned int*)(0x42620024UL))
#define bM0P_IRQC_IRQ_DSEL_MSC4RXIS                     *((volatile unsigned int*)(0x42620050UL))
#define bM0P_IRQC_IRQ_DSEL_MSC4TXIS                     *((volatile unsigned int*)(0x42620054UL))
#define bM0P_IRQC_IRQ_DSEL_MSC5RXIS                     *((volatile unsigned int*)(0x42620058UL))
#define bM0P_IRQC_IRQ_DSEL_MSC5TXIS                     *((volatile unsigned int*)(0x4262005CUL))
#define bM0P_IRQC_IRQ_DSEL_MSC6RXIS                     *((volatile unsigned int*)(0x42620060UL))
#define bM0P_IRQC_IRQ_DSEL_MSC6TXIS                     *((volatile unsigned int*)(0x42620064UL))
#define bM0P_IRQC_IRQ_DSEL_E0IS                         *((volatile unsigned int*)(0x42620070UL))
#define bM0P_IRQC_IRQ_DSEL_E1IS                         *((volatile unsigned int*)(0x42620074UL))
#define bM0P_IRQC_IRQ_DSEL_E2IS                         *((volatile unsigned int*)(0x42620078UL))
#define bM0P_IRQC_IRQ_DSEL_E3IS                         *((volatile unsigned int*)(0x4262007CUL))
#define bM0P_IRQC_IRQ_ST02_NMI                          *((volatile unsigned int*)(0x42620200UL))
#define bM0P_IRQC_IRQ_ST02_HWWDG                        *((volatile unsigned int*)(0x42620204UL))
#define bM0P_IRQC_IRQ00PEND_AFDI                        *((volatile unsigned int*)(0x42620280UL))
#define bM0P_IRQC_IRQ01PEND_SWWDG                       *((volatile unsigned int*)(0x42620300UL))
#define bM0P_IRQC_IRQ02PEND_LVD                         *((volatile unsigned int*)(0x42620380UL))
#define bM0P_IRQC_IRQ03PEND_MEMIF                       *((volatile unsigned int*)(0x42620400UL))
#define bM0P_IRQC_IRQ03PEND_WOU10                       *((volatile unsigned int*)(0x42620404UL))
#define bM0P_IRQC_IRQ03PEND_WOU32                       *((volatile unsigned int*)(0x42620408UL))
#define bM0P_IRQC_IRQ03PEND_WOU54                       *((volatile unsigned int*)(0x4262040CUL))
#define bM0P_IRQC_IRQ04PEND_EXTI0                       *((volatile unsigned int*)(0x42620480UL))
#define bM0P_IRQC_IRQ04PEND_EXTI1                       *((volatile unsigned int*)(0x42620484UL))
#define bM0P_IRQC_IRQ04PEND_EXTI2                       *((volatile unsigned int*)(0x42620488UL))
#define bM0P_IRQC_IRQ04PEND_EXTI3                       *((volatile unsigned int*)(0x4262048CUL))
#define bM0P_IRQC_IRQ04PEND_EXTI4                       *((volatile unsigned int*)(0x42620490UL))
#define bM0P_IRQC_IRQ04PEND_EXTI5                       *((volatile unsigned int*)(0x42620494UL))
#define bM0P_IRQC_IRQ04PEND_EXTI6                       *((volatile unsigned int*)(0x42620498UL))
#define bM0P_IRQC_IRQ04PEND_EXTI7                       *((volatile unsigned int*)(0x4262049CUL))
#define bM0P_IRQC_IRQ05PEND_EXTI8                       *((volatile unsigned int*)(0x42620500UL))
#define bM0P_IRQC_IRQ05PEND_EXTI9                       *((volatile unsigned int*)(0x42620504UL))
#define bM0P_IRQC_IRQ05PEND_EXTI10                      *((volatile unsigned int*)(0x42620508UL))
#define bM0P_IRQC_IRQ05PEND_EXTI11                      *((volatile unsigned int*)(0x4262050CUL))
#define bM0P_IRQC_IRQ05PEND_EXTI12                      *((volatile unsigned int*)(0x42620510UL))
#define bM0P_IRQC_IRQ05PEND_EXTI13                      *((volatile unsigned int*)(0x42620514UL))
#define bM0P_IRQC_IRQ05PEND_EXTI14                      *((volatile unsigned int*)(0x42620518UL))
#define bM0P_IRQC_IRQ05PEND_EXTI15                      *((volatile unsigned int*)(0x4262051CUL))
#define bM0P_IRQC_IRQ06PEND_DT10                        *((volatile unsigned int*)(0x42620580UL))
#define bM0P_IRQC_IRQ06PEND_DT11                        *((volatile unsigned int*)(0x42620584UL))
#define bM0P_IRQC_IRQ15PEND_MSC4INT                     *((volatile unsigned int*)(0x42620A00UL))
#define bM0P_IRQC_IRQ16PEND_MSC4INT0                    *((volatile unsigned int*)(0x42620A80UL))
#define bM0P_IRQC_IRQ16PEND_MSC4INT1                    *((volatile unsigned int*)(0x42620A84UL))
#define bM0P_IRQC_IRQ17PEND_MSC5NT                      *((volatile unsigned int*)(0x42620B00UL))
#define bM0P_IRQC_IRQ18PEND_MSC5INT0                    *((volatile unsigned int*)(0x42620B80UL))
#define bM0P_IRQC_IRQ18PEND_MSC5INT1                    *((volatile unsigned int*)(0x42620B84UL))
#define bM0P_IRQC_IRQ19PEND_MSC6INT                     *((volatile unsigned int*)(0x42620C00UL))
#define bM0P_IRQC_IRQ19PEND_DMA0INT                     *((volatile unsigned int*)(0x42620C10UL))
#define bM0P_IRQC_IRQ20PEND_MSC6INT                     *((volatile unsigned int*)(0x42620C80UL))
#define bM0P_IRQC_IRQ20PEND_DMA1INT                     *((volatile unsigned int*)(0x42620C90UL))
#define bM0P_IRQC_IRQ24PEND_MOSCI                       *((volatile unsigned int*)(0x42620E80UL))
#define bM0P_IRQC_IRQ24PEND_SOSCI                       *((volatile unsigned int*)(0x42620E84UL))
#define bM0P_IRQC_IRQ24PEND_MPLLI                       *((volatile unsigned int*)(0x42620E88UL))
#define bM0P_IRQC_IRQ24PEND_WCI                         *((volatile unsigned int*)(0x42620E90UL))
#define bM0P_IRQC_IRQ24PEND_MSWKUP                      *((volatile unsigned int*)(0x42620E98UL))
#define bM0P_IRQC_IRQ24PEND_RAMI                        *((volatile unsigned int*)(0x42620E9CUL))
#define bM0P_IRQC_IRQ25PEND_ADCI0                       *((volatile unsigned int*)(0x42620F00UL))
#define bM0P_IRQC_IRQ25PEND_ADCI1                       *((volatile unsigned int*)(0x42620F04UL))
#define bM0P_IRQC_IRQ25PEND_ADCI2                       *((volatile unsigned int*)(0x42620F08UL))
#define bM0P_IRQC_IRQ25PEND_ADCI3                       *((volatile unsigned int*)(0x42620F0CUL))
#define bM0P_IRQC_IRQ25PEND_ADCI4                       *((volatile unsigned int*)(0x42620F10UL))
#define bM0P_IRQC_IRQ26PEND_VCI                         *((volatile unsigned int*)(0x42620F94UL))
#define bM0P_IRQC_IRQ28PEND_TPI                         *((volatile unsigned int*)(0x42621080UL))
#define bM0P_IRQC_IRQ28PEND_TZI                         *((volatile unsigned int*)(0x4262108CUL))
#define bM0P_IRQC_IRQ30PEND_OCMPU0                      *((volatile unsigned int*)(0x42621180UL))
#define bM0P_IRQC_IRQ30PEND_OCMPU1                      *((volatile unsigned int*)(0x42621184UL))
#define bM0P_IRQC_IRQ30PEND_OCMPU2                      *((volatile unsigned int*)(0x42621188UL))
#define bM0P_IRQC_IRQ30PEND_OCMPU3                      *((volatile unsigned int*)(0x4262118CUL))
#define bM0P_IRQC_IRQ30PEND_OCMPU4                      *((volatile unsigned int*)(0x42621190UL))
#define bM0P_IRQC_IRQ30PEND_OCMPU5                      *((volatile unsigned int*)(0x42621194UL))
#define bM0P_IRQC_IRQ31PEND_CTI0IRQ                     *((volatile unsigned int*)(0x42621200UL))
#define bM0P_IRQC_IRQ31PEND_CTI1IRQ                     *((volatile unsigned int*)(0x42621204UL))
#define bM0P_IRQC_IRQ31PEND_CTI2IRQ                     *((volatile unsigned int*)(0x42621208UL))
#define bM0P_IRQC_IRQ31PEND_CTI3IRQ                     *((volatile unsigned int*)(0x4262120CUL))
#define bM0P_IRQC_IRQ31PEND_CTI4IRQ                     *((volatile unsigned int*)(0x42621210UL))
#define bM0P_IRQC_IRQ31PEND_CTI5IRQ                     *((volatile unsigned int*)(0x42621214UL))
#define bM0P_IRQC_IRQ31PEND_CTI6IRQ                     *((volatile unsigned int*)(0x42621218UL))
#define bM0P_IRQC_IRQ31PEND_CTI7IRQ                     *((volatile unsigned int*)(0x4262121CUL))
#define bM0P_IRQC_IRQ31PEND_FLASHI                      *((volatile unsigned int*)(0x4262126CUL))
#define bM0P_MSC4_I2C_MR_TXIE                           *((volatile unsigned int*)(0x426E0008UL))
#define bM0P_MSC4_I2C_MR_RXIE                           *((volatile unsigned int*)(0x426E000CUL))
#define bM0P_MSC4_I2C_MR_MODE0                          *((volatile unsigned int*)(0x426E0014UL))
#define bM0P_MSC4_I2C_MR_MODE1                          *((volatile unsigned int*)(0x426E0018UL))
#define bM0P_MSC4_I2C_MR_MODE2                          *((volatile unsigned int*)(0x426E001CUL))
#define bM0P_MSC4_I2C_BC_INTF                           *((volatile unsigned int*)(0x426E0020UL))
#define bM0P_MSC4_I2C_BC_BERF                           *((volatile unsigned int*)(0x426E0024UL))
#define bM0P_MSC4_I2C_BC_INTE                           *((volatile unsigned int*)(0x426E0028UL))
#define bM0P_MSC4_I2C_BC_CNDDIE                         *((volatile unsigned int*)(0x426E002CUL))
#define bM0P_MSC4_I2C_BC_WTSEL                          *((volatile unsigned int*)(0x426E0030UL))
#define bM0P_MSC4_I2C_BC_ACKE                           *((volatile unsigned int*)(0x426E0034UL))
#define bM0P_MSC4_I2C_BC_OFITS                          *((volatile unsigned int*)(0x426E0038UL))
#define bM0P_MSC4_I2C_BC_MSS                            *((volatile unsigned int*)(0x426E003CUL))
#define bM0P_MSC4_I2C_BS_BSS                            *((volatile unsigned int*)(0x426E0080UL))
#define bM0P_MSC4_I2C_BS_STPCC                          *((volatile unsigned int*)(0x426E0084UL))
#define bM0P_MSC4_I2C_BS_ITSCC                          *((volatile unsigned int*)(0x426E0088UL))
#define bM0P_MSC4_I2C_BS_ABL                            *((volatile unsigned int*)(0x426E008CUL))
#define bM0P_MSC4_I2C_BS_TRX                            *((volatile unsigned int*)(0x426E0090UL))
#define bM0P_MSC4_I2C_BS_RAD                            *((volatile unsigned int*)(0x426E0094UL))
#define bM0P_MSC4_I2C_BS_ACKF                           *((volatile unsigned int*)(0x426E0098UL))
#define bM0P_MSC4_I2C_BS_FBB                            *((volatile unsigned int*)(0x426E009CUL))
#define bM0P_MSC4_I2C_SR_TBIF                           *((volatile unsigned int*)(0x426E00A0UL))
#define bM0P_MSC4_I2C_SR_TDEF                           *((volatile unsigned int*)(0x426E00A4UL))
#define bM0P_MSC4_I2C_SR_RDFF                           *((volatile unsigned int*)(0x426E00A8UL))
#define bM0P_MSC4_I2C_SR_ORF                            *((volatile unsigned int*)(0x426E00ACUL))
#define bM0P_MSC4_I2C_SR_TBIIE                          *((volatile unsigned int*)(0x426E00B0UL))
#define bM0P_MSC4_I2C_SR_DMAE                           *((volatile unsigned int*)(0x426E00B4UL))
#define bM0P_MSC4_I2C_SR_TEFS                           *((volatile unsigned int*)(0x426E00B8UL))
#define bM0P_MSC4_I2C_SR_RECLR                          *((volatile unsigned int*)(0x426E00BCUL))
#define bM0P_MSC4_I2C_BRS_BRS0                          *((volatile unsigned int*)(0x426E0180UL))
#define bM0P_MSC4_I2C_BRS_BRS1                          *((volatile unsigned int*)(0x426E0184UL))
#define bM0P_MSC4_I2C_BRS_BRS2                          *((volatile unsigned int*)(0x426E0188UL))
#define bM0P_MSC4_I2C_BRS_BRS3                          *((volatile unsigned int*)(0x426E018CUL))
#define bM0P_MSC4_I2C_BRS_BRS4                          *((volatile unsigned int*)(0x426E0190UL))
#define bM0P_MSC4_I2C_BRS_BRS5                          *((volatile unsigned int*)(0x426E0194UL))
#define bM0P_MSC4_I2C_BRS_BRS6                          *((volatile unsigned int*)(0x426E0198UL))
#define bM0P_MSC4_I2C_BRS_BRS7                          *((volatile unsigned int*)(0x426E019CUL))
#define bM0P_MSC4_I2C_BRS_BRS8                          *((volatile unsigned int*)(0x426E01A0UL))
#define bM0P_MSC4_I2C_BRS_BRS9                          *((volatile unsigned int*)(0x426E01A4UL))
#define bM0P_MSC4_I2C_BRS_BRS10                         *((volatile unsigned int*)(0x426E01A8UL))
#define bM0P_MSC4_I2C_BRS_BRS11                         *((volatile unsigned int*)(0x426E01ACUL))
#define bM0P_MSC4_I2C_BRS_BRS12                         *((volatile unsigned int*)(0x426E01B0UL))
#define bM0P_MSC4_I2C_BRS_BRS13                         *((volatile unsigned int*)(0x426E01B4UL))
#define bM0P_MSC4_I2C_BRS_BRS14                         *((volatile unsigned int*)(0x426E01B8UL))
#define bM0P_MSC4_I2C_SA_ADDR0                          *((volatile unsigned int*)(0x426E0200UL))
#define bM0P_MSC4_I2C_SA_ADDR1                          *((volatile unsigned int*)(0x426E0204UL))
#define bM0P_MSC4_I2C_SA_ADDR2                          *((volatile unsigned int*)(0x426E0208UL))
#define bM0P_MSC4_I2C_SA_ADDR3                          *((volatile unsigned int*)(0x426E020CUL))
#define bM0P_MSC4_I2C_SA_ADDR4                          *((volatile unsigned int*)(0x426E0210UL))
#define bM0P_MSC4_I2C_SA_ADDR5                          *((volatile unsigned int*)(0x426E0214UL))
#define bM0P_MSC4_I2C_SA_ADDR6                          *((volatile unsigned int*)(0x426E0218UL))
#define bM0P_MSC4_I2C_SA_AE                             *((volatile unsigned int*)(0x426E021CUL))
#define bM0P_MSC4_I2C_SAMSK_MSK0                        *((volatile unsigned int*)(0x426E0220UL))
#define bM0P_MSC4_I2C_SAMSK_MSK1                        *((volatile unsigned int*)(0x426E0224UL))
#define bM0P_MSC4_I2C_SAMSK_MSK2                        *((volatile unsigned int*)(0x426E0228UL))
#define bM0P_MSC4_I2C_SAMSK_MSK3                        *((volatile unsigned int*)(0x426E022CUL))
#define bM0P_MSC4_I2C_SAMSK_MSK4                        *((volatile unsigned int*)(0x426E0230UL))
#define bM0P_MSC4_I2C_SAMSK_MSK5                        *((volatile unsigned int*)(0x426E0234UL))
#define bM0P_MSC4_I2C_SAMSK_MSK6                        *((volatile unsigned int*)(0x426E0238UL))
#define bM0P_MSC4_I2C_SAMSK_EN                          *((volatile unsigned int*)(0x426E023CUL))
#define bM0P_MSC4_I2C_EBCR_BEC                          *((volatile unsigned int*)(0x426E03A0UL))
#define bM0P_MSC4_I2C_EBCR_DOE                          *((volatile unsigned int*)(0x426E03A4UL))
#define bM0P_MSC4_I2C_EBCR_SCLOC                        *((volatile unsigned int*)(0x426E03A8UL))
#define bM0P_MSC4_I2C_EBCR_SDAOC                        *((volatile unsigned int*)(0x426E03ACUL))
#define bM0P_MSC4_I2C_EBCR_SCLS                         *((volatile unsigned int*)(0x426E03B0UL))
#define bM0P_MSC4_I2C_EBCR_SDAS                         *((volatile unsigned int*)(0x426E03B4UL))
#define bM0P_MSC5_I2C_MR_TXIE                           *((volatile unsigned int*)(0x426E2008UL))
#define bM0P_MSC5_I2C_MR_RXIE                           *((volatile unsigned int*)(0x426E200CUL))
#define bM0P_MSC5_I2C_MR_MODE0                          *((volatile unsigned int*)(0x426E2014UL))
#define bM0P_MSC5_I2C_MR_MODE1                          *((volatile unsigned int*)(0x426E2018UL))
#define bM0P_MSC5_I2C_MR_MODE2                          *((volatile unsigned int*)(0x426E201CUL))
#define bM0P_MSC5_I2C_BC_INTF                           *((volatile unsigned int*)(0x426E2020UL))
#define bM0P_MSC5_I2C_BC_BERF                           *((volatile unsigned int*)(0x426E2024UL))
#define bM0P_MSC5_I2C_BC_INTE                           *((volatile unsigned int*)(0x426E2028UL))
#define bM0P_MSC5_I2C_BC_CNDDIE                         *((volatile unsigned int*)(0x426E202CUL))
#define bM0P_MSC5_I2C_BC_WTSEL                          *((volatile unsigned int*)(0x426E2030UL))
#define bM0P_MSC5_I2C_BC_ACKE                           *((volatile unsigned int*)(0x426E2034UL))
#define bM0P_MSC5_I2C_BC_OFITS                          *((volatile unsigned int*)(0x426E2038UL))
#define bM0P_MSC5_I2C_BC_MSS                            *((volatile unsigned int*)(0x426E203CUL))
#define bM0P_MSC5_I2C_BS_BSS                            *((volatile unsigned int*)(0x426E2080UL))
#define bM0P_MSC5_I2C_BS_STPCC                          *((volatile unsigned int*)(0x426E2084UL))
#define bM0P_MSC5_I2C_BS_ITSCC                          *((volatile unsigned int*)(0x426E2088UL))
#define bM0P_MSC5_I2C_BS_ABL                            *((volatile unsigned int*)(0x426E208CUL))
#define bM0P_MSC5_I2C_BS_TRX                            *((volatile unsigned int*)(0x426E2090UL))
#define bM0P_MSC5_I2C_BS_RAD                            *((volatile unsigned int*)(0x426E2094UL))
#define bM0P_MSC5_I2C_BS_ACKF                           *((volatile unsigned int*)(0x426E2098UL))
#define bM0P_MSC5_I2C_BS_FBB                            *((volatile unsigned int*)(0x426E209CUL))
#define bM0P_MSC5_I2C_SR_TBIF                           *((volatile unsigned int*)(0x426E20A0UL))
#define bM0P_MSC5_I2C_SR_TDEF                           *((volatile unsigned int*)(0x426E20A4UL))
#define bM0P_MSC5_I2C_SR_RDFF                           *((volatile unsigned int*)(0x426E20A8UL))
#define bM0P_MSC5_I2C_SR_ORF                            *((volatile unsigned int*)(0x426E20ACUL))
#define bM0P_MSC5_I2C_SR_TBIIE                          *((volatile unsigned int*)(0x426E20B0UL))
#define bM0P_MSC5_I2C_SR_DMAE                           *((volatile unsigned int*)(0x426E20B4UL))
#define bM0P_MSC5_I2C_SR_TEFS                           *((volatile unsigned int*)(0x426E20B8UL))
#define bM0P_MSC5_I2C_SR_RECLR                          *((volatile unsigned int*)(0x426E20BCUL))
#define bM0P_MSC5_I2C_BRS_BRS0                          *((volatile unsigned int*)(0x426E2180UL))
#define bM0P_MSC5_I2C_BRS_BRS1                          *((volatile unsigned int*)(0x426E2184UL))
#define bM0P_MSC5_I2C_BRS_BRS2                          *((volatile unsigned int*)(0x426E2188UL))
#define bM0P_MSC5_I2C_BRS_BRS3                          *((volatile unsigned int*)(0x426E218CUL))
#define bM0P_MSC5_I2C_BRS_BRS4                          *((volatile unsigned int*)(0x426E2190UL))
#define bM0P_MSC5_I2C_BRS_BRS5                          *((volatile unsigned int*)(0x426E2194UL))
#define bM0P_MSC5_I2C_BRS_BRS6                          *((volatile unsigned int*)(0x426E2198UL))
#define bM0P_MSC5_I2C_BRS_BRS7                          *((volatile unsigned int*)(0x426E219CUL))
#define bM0P_MSC5_I2C_BRS_BRS8                          *((volatile unsigned int*)(0x426E21A0UL))
#define bM0P_MSC5_I2C_BRS_BRS9                          *((volatile unsigned int*)(0x426E21A4UL))
#define bM0P_MSC5_I2C_BRS_BRS10                         *((volatile unsigned int*)(0x426E21A8UL))
#define bM0P_MSC5_I2C_BRS_BRS11                         *((volatile unsigned int*)(0x426E21ACUL))
#define bM0P_MSC5_I2C_BRS_BRS12                         *((volatile unsigned int*)(0x426E21B0UL))
#define bM0P_MSC5_I2C_BRS_BRS13                         *((volatile unsigned int*)(0x426E21B4UL))
#define bM0P_MSC5_I2C_BRS_BRS14                         *((volatile unsigned int*)(0x426E21B8UL))
#define bM0P_MSC5_I2C_SA_ADDR0                          *((volatile unsigned int*)(0x426E2200UL))
#define bM0P_MSC5_I2C_SA_ADDR1                          *((volatile unsigned int*)(0x426E2204UL))
#define bM0P_MSC5_I2C_SA_ADDR2                          *((volatile unsigned int*)(0x426E2208UL))
#define bM0P_MSC5_I2C_SA_ADDR3                          *((volatile unsigned int*)(0x426E220CUL))
#define bM0P_MSC5_I2C_SA_ADDR4                          *((volatile unsigned int*)(0x426E2210UL))
#define bM0P_MSC5_I2C_SA_ADDR5                          *((volatile unsigned int*)(0x426E2214UL))
#define bM0P_MSC5_I2C_SA_ADDR6                          *((volatile unsigned int*)(0x426E2218UL))
#define bM0P_MSC5_I2C_SA_AE                             *((volatile unsigned int*)(0x426E221CUL))
#define bM0P_MSC5_I2C_SAMSK_MSK0                        *((volatile unsigned int*)(0x426E2220UL))
#define bM0P_MSC5_I2C_SAMSK_MSK1                        *((volatile unsigned int*)(0x426E2224UL))
#define bM0P_MSC5_I2C_SAMSK_MSK2                        *((volatile unsigned int*)(0x426E2228UL))
#define bM0P_MSC5_I2C_SAMSK_MSK3                        *((volatile unsigned int*)(0x426E222CUL))
#define bM0P_MSC5_I2C_SAMSK_MSK4                        *((volatile unsigned int*)(0x426E2230UL))
#define bM0P_MSC5_I2C_SAMSK_MSK5                        *((volatile unsigned int*)(0x426E2234UL))
#define bM0P_MSC5_I2C_SAMSK_MSK6                        *((volatile unsigned int*)(0x426E2238UL))
#define bM0P_MSC5_I2C_SAMSK_EN                          *((volatile unsigned int*)(0x426E223CUL))
#define bM0P_MSC5_I2C_EBCR_BEC                          *((volatile unsigned int*)(0x426E23A0UL))
#define bM0P_MSC5_I2C_EBCR_DOE                          *((volatile unsigned int*)(0x426E23A4UL))
#define bM0P_MSC5_I2C_EBCR_SCLOC                        *((volatile unsigned int*)(0x426E23A8UL))
#define bM0P_MSC5_I2C_EBCR_SDAOC                        *((volatile unsigned int*)(0x426E23ACUL))
#define bM0P_MSC5_I2C_EBCR_SCLS                         *((volatile unsigned int*)(0x426E23B0UL))
#define bM0P_MSC5_I2C_EBCR_SDAS                         *((volatile unsigned int*)(0x426E23B4UL))
#define bM0P_MSC6_I2C_MR_TXIE                           *((volatile unsigned int*)(0x426E4008UL))
#define bM0P_MSC6_I2C_MR_RXIE                           *((volatile unsigned int*)(0x426E400CUL))
#define bM0P_MSC6_I2C_MR_MODE0                          *((volatile unsigned int*)(0x426E4014UL))
#define bM0P_MSC6_I2C_MR_MODE1                          *((volatile unsigned int*)(0x426E4018UL))
#define bM0P_MSC6_I2C_MR_MODE2                          *((volatile unsigned int*)(0x426E401CUL))
#define bM0P_MSC6_I2C_BC_INTF                           *((volatile unsigned int*)(0x426E4020UL))
#define bM0P_MSC6_I2C_BC_BERF                           *((volatile unsigned int*)(0x426E4024UL))
#define bM0P_MSC6_I2C_BC_INTE                           *((volatile unsigned int*)(0x426E4028UL))
#define bM0P_MSC6_I2C_BC_CNDDIE                         *((volatile unsigned int*)(0x426E402CUL))
#define bM0P_MSC6_I2C_BC_WTSEL                          *((volatile unsigned int*)(0x426E4030UL))
#define bM0P_MSC6_I2C_BC_ACKE                           *((volatile unsigned int*)(0x426E4034UL))
#define bM0P_MSC6_I2C_BC_OFITS                          *((volatile unsigned int*)(0x426E4038UL))
#define bM0P_MSC6_I2C_BC_MSS                            *((volatile unsigned int*)(0x426E403CUL))
#define bM0P_MSC6_I2C_BS_BSS                            *((volatile unsigned int*)(0x426E4080UL))
#define bM0P_MSC6_I2C_BS_STPCC                          *((volatile unsigned int*)(0x426E4084UL))
#define bM0P_MSC6_I2C_BS_ITSCC                          *((volatile unsigned int*)(0x426E4088UL))
#define bM0P_MSC6_I2C_BS_ABL                            *((volatile unsigned int*)(0x426E408CUL))
#define bM0P_MSC6_I2C_BS_TRX                            *((volatile unsigned int*)(0x426E4090UL))
#define bM0P_MSC6_I2C_BS_RAD                            *((volatile unsigned int*)(0x426E4094UL))
#define bM0P_MSC6_I2C_BS_ACKF                           *((volatile unsigned int*)(0x426E4098UL))
#define bM0P_MSC6_I2C_BS_FBB                            *((volatile unsigned int*)(0x426E409CUL))
#define bM0P_MSC6_I2C_SR_TBIF                           *((volatile unsigned int*)(0x426E40A0UL))
#define bM0P_MSC6_I2C_SR_TDEF                           *((volatile unsigned int*)(0x426E40A4UL))
#define bM0P_MSC6_I2C_SR_RDFF                           *((volatile unsigned int*)(0x426E40A8UL))
#define bM0P_MSC6_I2C_SR_ORF                            *((volatile unsigned int*)(0x426E40ACUL))
#define bM0P_MSC6_I2C_SR_TBIIE                          *((volatile unsigned int*)(0x426E40B0UL))
#define bM0P_MSC6_I2C_SR_DMAE                           *((volatile unsigned int*)(0x426E40B4UL))
#define bM0P_MSC6_I2C_SR_TEFS                           *((volatile unsigned int*)(0x426E40B8UL))
#define bM0P_MSC6_I2C_SR_RECLR                          *((volatile unsigned int*)(0x426E40BCUL))
#define bM0P_MSC6_I2C_BRS_BRS0                          *((volatile unsigned int*)(0x426E4180UL))
#define bM0P_MSC6_I2C_BRS_BRS1                          *((volatile unsigned int*)(0x426E4184UL))
#define bM0P_MSC6_I2C_BRS_BRS2                          *((volatile unsigned int*)(0x426E4188UL))
#define bM0P_MSC6_I2C_BRS_BRS3                          *((volatile unsigned int*)(0x426E418CUL))
#define bM0P_MSC6_I2C_BRS_BRS4                          *((volatile unsigned int*)(0x426E4190UL))
#define bM0P_MSC6_I2C_BRS_BRS5                          *((volatile unsigned int*)(0x426E4194UL))
#define bM0P_MSC6_I2C_BRS_BRS6                          *((volatile unsigned int*)(0x426E4198UL))
#define bM0P_MSC6_I2C_BRS_BRS7                          *((volatile unsigned int*)(0x426E419CUL))
#define bM0P_MSC6_I2C_BRS_BRS8                          *((volatile unsigned int*)(0x426E41A0UL))
#define bM0P_MSC6_I2C_BRS_BRS9                          *((volatile unsigned int*)(0x426E41A4UL))
#define bM0P_MSC6_I2C_BRS_BRS10                         *((volatile unsigned int*)(0x426E41A8UL))
#define bM0P_MSC6_I2C_BRS_BRS11                         *((volatile unsigned int*)(0x426E41ACUL))
#define bM0P_MSC6_I2C_BRS_BRS12                         *((volatile unsigned int*)(0x426E41B0UL))
#define bM0P_MSC6_I2C_BRS_BRS13                         *((volatile unsigned int*)(0x426E41B4UL))
#define bM0P_MSC6_I2C_BRS_BRS14                         *((volatile unsigned int*)(0x426E41B8UL))
#define bM0P_MSC6_I2C_SA_ADDR0                          *((volatile unsigned int*)(0x426E4200UL))
#define bM0P_MSC6_I2C_SA_ADDR1                          *((volatile unsigned int*)(0x426E4204UL))
#define bM0P_MSC6_I2C_SA_ADDR2                          *((volatile unsigned int*)(0x426E4208UL))
#define bM0P_MSC6_I2C_SA_ADDR3                          *((volatile unsigned int*)(0x426E420CUL))
#define bM0P_MSC6_I2C_SA_ADDR4                          *((volatile unsigned int*)(0x426E4210UL))
#define bM0P_MSC6_I2C_SA_ADDR5                          *((volatile unsigned int*)(0x426E4214UL))
#define bM0P_MSC6_I2C_SA_ADDR6                          *((volatile unsigned int*)(0x426E4218UL))
#define bM0P_MSC6_I2C_SA_AE                             *((volatile unsigned int*)(0x426E421CUL))
#define bM0P_MSC6_I2C_SAMSK_MSK0                        *((volatile unsigned int*)(0x426E4220UL))
#define bM0P_MSC6_I2C_SAMSK_MSK1                        *((volatile unsigned int*)(0x426E4224UL))
#define bM0P_MSC6_I2C_SAMSK_MSK2                        *((volatile unsigned int*)(0x426E4228UL))
#define bM0P_MSC6_I2C_SAMSK_MSK3                        *((volatile unsigned int*)(0x426E422CUL))
#define bM0P_MSC6_I2C_SAMSK_MSK4                        *((volatile unsigned int*)(0x426E4230UL))
#define bM0P_MSC6_I2C_SAMSK_MSK5                        *((volatile unsigned int*)(0x426E4234UL))
#define bM0P_MSC6_I2C_SAMSK_MSK6                        *((volatile unsigned int*)(0x426E4238UL))
#define bM0P_MSC6_I2C_SAMSK_EN                          *((volatile unsigned int*)(0x426E423CUL))
#define bM0P_MSC6_I2C_EBCR_BEC                          *((volatile unsigned int*)(0x426E43A0UL))
#define bM0P_MSC6_I2C_EBCR_DOE                          *((volatile unsigned int*)(0x426E43A4UL))
#define bM0P_MSC6_I2C_EBCR_SCLOC                        *((volatile unsigned int*)(0x426E43A8UL))
#define bM0P_MSC6_I2C_EBCR_SDAOC                        *((volatile unsigned int*)(0x426E43ACUL))
#define bM0P_MSC6_I2C_EBCR_SCLS                         *((volatile unsigned int*)(0x426E43B0UL))
#define bM0P_MSC6_I2C_EBCR_SDAS                         *((volatile unsigned int*)(0x426E43B4UL))
#define bM0P_MSC4_SPI_MR_DOE                            *((volatile unsigned int*)(0x426E0000UL))
#define bM0P_MSC4_SPI_MR_CKE                            *((volatile unsigned int*)(0x426E0004UL))
#define bM0P_MSC4_SPI_MR_TDS                            *((volatile unsigned int*)(0x426E0008UL))
#define bM0P_MSC4_SPI_MR_CINV                           *((volatile unsigned int*)(0x426E000CUL))
#define bM0P_MSC4_SPI_MR_MODE0                          *((volatile unsigned int*)(0x426E0014UL))
#define bM0P_MSC4_SPI_MR_MODE1                          *((volatile unsigned int*)(0x426E0018UL))
#define bM0P_MSC4_SPI_MR_MODE2                          *((volatile unsigned int*)(0x426E001CUL))
#define bM0P_MSC4_SPI_CR_TXE                            *((volatile unsigned int*)(0x426E0020UL))
#define bM0P_MSC4_SPI_CR_RXE                            *((volatile unsigned int*)(0x426E0024UL))
#define bM0P_MSC4_SPI_CR_TBIE                           *((volatile unsigned int*)(0x426E0028UL))
#define bM0P_MSC4_SPI_CR_TXIE                           *((volatile unsigned int*)(0x426E002CUL))
#define bM0P_MSC4_SPI_CR_RXIE                           *((volatile unsigned int*)(0x426E0030UL))
#define bM0P_MSC4_SPI_CR_SPIMODE                        *((volatile unsigned int*)(0x426E0034UL))
#define bM0P_MSC4_SPI_CR_MSS                            *((volatile unsigned int*)(0x426E0038UL))
#define bM0P_MSC4_SPI_CR_PCL                            *((volatile unsigned int*)(0x426E003CUL))
#define bM0P_MSC4_SPI_ECR_DL0                           *((volatile unsigned int*)(0x426E0080UL))
#define bM0P_MSC4_SPI_ECR_DL1                           *((volatile unsigned int*)(0x426E0084UL))
#define bM0P_MSC4_SPI_ECR_DL2                           *((volatile unsigned int*)(0x426E0088UL))
#define bM0P_MSC4_SPI_ECR_DTRWS0                        *((volatile unsigned int*)(0x426E008CUL))
#define bM0P_MSC4_SPI_ECR_DTRWS1                        *((volatile unsigned int*)(0x426E0090UL))
#define bM0P_MSC4_SPI_ECR_CSFE                          *((volatile unsigned int*)(0x426E0094UL))
#define bM0P_MSC4_SPI_ECR_DL3                           *((volatile unsigned int*)(0x426E0098UL))
#define bM0P_MSC4_SPI_ECR_SOPS                          *((volatile unsigned int*)(0x426E009CUL))
#define bM0P_MSC4_SPI_SR_TBIF                           *((volatile unsigned int*)(0x426E00A0UL))
#define bM0P_MSC4_SPI_SR_TDEF                           *((volatile unsigned int*)(0x426E00A4UL))
#define bM0P_MSC4_SPI_SR_RDFF                           *((volatile unsigned int*)(0x426E00A8UL))
#define bM0P_MSC4_SPI_SR_ORF                            *((volatile unsigned int*)(0x426E00ACUL))
#define bM0P_MSC4_SPI_SR_RECLR                          *((volatile unsigned int*)(0x426E00BCUL))
#define bM0P_MSC4_SPI_BRS_BRS0                          *((volatile unsigned int*)(0x426E0180UL))
#define bM0P_MSC4_SPI_BRS_BRS1                          *((volatile unsigned int*)(0x426E0184UL))
#define bM0P_MSC4_SPI_BRS_BRS2                          *((volatile unsigned int*)(0x426E0188UL))
#define bM0P_MSC4_SPI_BRS_BRS3                          *((volatile unsigned int*)(0x426E018CUL))
#define bM0P_MSC4_SPI_BRS_BRS4                          *((volatile unsigned int*)(0x426E0190UL))
#define bM0P_MSC4_SPI_BRS_BRS5                          *((volatile unsigned int*)(0x426E0194UL))
#define bM0P_MSC4_SPI_BRS_BRS6                          *((volatile unsigned int*)(0x426E0198UL))
#define bM0P_MSC4_SPI_BRS_BRS7                          *((volatile unsigned int*)(0x426E019CUL))
#define bM0P_MSC4_SPI_BRS_BRS8                          *((volatile unsigned int*)(0x426E01A0UL))
#define bM0P_MSC4_SPI_BRS_BRS9                          *((volatile unsigned int*)(0x426E01A4UL))
#define bM0P_MSC4_SPI_BRS_BRS10                         *((volatile unsigned int*)(0x426E01A8UL))
#define bM0P_MSC4_SPI_BRS_BRS11                         *((volatile unsigned int*)(0x426E01ACUL))
#define bM0P_MSC4_SPI_BRS_BRS12                         *((volatile unsigned int*)(0x426E01B0UL))
#define bM0P_MSC4_SPI_BRS_BRS13                         *((volatile unsigned int*)(0x426E01B4UL))
#define bM0P_MSC4_SPI_BRS_BRS14                         *((volatile unsigned int*)(0x426E01B8UL))
#define bM0P_MSC4_SPI_CSTMG0_CSHDLY0                    *((volatile unsigned int*)(0x426E0380UL))
#define bM0P_MSC4_SPI_CSTMG0_CSHDLY1                    *((volatile unsigned int*)(0x426E0384UL))
#define bM0P_MSC4_SPI_CSTMG0_CSHDLY2                    *((volatile unsigned int*)(0x426E0388UL))
#define bM0P_MSC4_SPI_CSTMG0_CSHDLY3                    *((volatile unsigned int*)(0x426E038CUL))
#define bM0P_MSC4_SPI_CSTMG0_CSHDLY4                    *((volatile unsigned int*)(0x426E0390UL))
#define bM0P_MSC4_SPI_CSTMG0_CSHDLY5                    *((volatile unsigned int*)(0x426E0394UL))
#define bM0P_MSC4_SPI_CSTMG0_CSHDLY6                    *((volatile unsigned int*)(0x426E0398UL))
#define bM0P_MSC4_SPI_CSTMG0_CSHDLY7                    *((volatile unsigned int*)(0x426E039CUL))
#define bM0P_MSC4_SPI_CSTMG1_CSSDLY0                    *((volatile unsigned int*)(0x426E03A0UL))
#define bM0P_MSC4_SPI_CSTMG1_CSSDLY1                    *((volatile unsigned int*)(0x426E03A4UL))
#define bM0P_MSC4_SPI_CSTMG1_CSSDLY2                    *((volatile unsigned int*)(0x426E03A8UL))
#define bM0P_MSC4_SPI_CSTMG1_CSSDLY3                    *((volatile unsigned int*)(0x426E03ACUL))
#define bM0P_MSC4_SPI_CSTMG1_CSSDLY4                    *((volatile unsigned int*)(0x426E03B0UL))
#define bM0P_MSC4_SPI_CSTMG1_CSSDLY5                    *((volatile unsigned int*)(0x426E03B4UL))
#define bM0P_MSC4_SPI_CSTMG1_CSSDLY6                    *((volatile unsigned int*)(0x426E03B8UL))
#define bM0P_MSC4_SPI_CSTMG1_CSSDLY7                    *((volatile unsigned int*)(0x426E03BCUL))
#define bM0P_MSC4_SPI_CSTMG32_CSDS0                     *((volatile unsigned int*)(0x426E0400UL))
#define bM0P_MSC4_SPI_CSTMG32_CSDS1                     *((volatile unsigned int*)(0x426E0404UL))
#define bM0P_MSC4_SPI_CSTMG32_CSDS2                     *((volatile unsigned int*)(0x426E0408UL))
#define bM0P_MSC4_SPI_CSTMG32_CSDS3                     *((volatile unsigned int*)(0x426E040CUL))
#define bM0P_MSC4_SPI_CSTMG32_CSDS4                     *((volatile unsigned int*)(0x426E0410UL))
#define bM0P_MSC4_SPI_CSTMG32_CSDS5                     *((volatile unsigned int*)(0x426E0414UL))
#define bM0P_MSC4_SPI_CSTMG32_CSDS6                     *((volatile unsigned int*)(0x426E0418UL))
#define bM0P_MSC4_SPI_CSTMG32_CSDS7                     *((volatile unsigned int*)(0x426E041CUL))
#define bM0P_MSC4_SPI_CSTMG32_CSDS8                     *((volatile unsigned int*)(0x426E0420UL))
#define bM0P_MSC4_SPI_CSTMG32_CSDS9                     *((volatile unsigned int*)(0x426E0424UL))
#define bM0P_MSC4_SPI_CSTMG32_CSDS10                    *((volatile unsigned int*)(0x426E0428UL))
#define bM0P_MSC4_SPI_CSTMG32_CSDS11                    *((volatile unsigned int*)(0x426E042CUL))
#define bM0P_MSC4_SPI_CSTMG32_CSDS12                    *((volatile unsigned int*)(0x426E0430UL))
#define bM0P_MSC4_SPI_CSTMG32_CSDS13                    *((volatile unsigned int*)(0x426E0434UL))
#define bM0P_MSC4_SPI_CSTMG32_CSDS14                    *((volatile unsigned int*)(0x426E0438UL))
#define bM0P_MSC4_SPI_CSTMG32_CSDS15                    *((volatile unsigned int*)(0x426E043CUL))
#define bM0P_MSC4_SPI_EACR_TMRE                         *((volatile unsigned int*)(0x426E0480UL))
#define bM0P_MSC4_SPI_EACR_CLKDIV0                      *((volatile unsigned int*)(0x426E0484UL))
#define bM0P_MSC4_SPI_EACR_CLKDIV1                      *((volatile unsigned int*)(0x426E0488UL))
#define bM0P_MSC4_SPI_EACR_CLKDIV2                      *((volatile unsigned int*)(0x426E048CUL))
#define bM0P_MSC4_SPI_EACR_CLKDIV3                      *((volatile unsigned int*)(0x426E0490UL))
#define bM0P_MSC4_SPI_EACR_SYNTE                        *((volatile unsigned int*)(0x426E0498UL))
#define bM0P_MSC4_SPI_EACR_TIE                          *((volatile unsigned int*)(0x426E049CUL))
#define bM0P_MSC4_SPI_EACR_TIF                          *((volatile unsigned int*)(0x426E04A0UL))
#define bM0P_MSC4_SPI_EACR_CSER                         *((volatile unsigned int*)(0x426E04ACUL))
#define bM0P_MSC4_SPI_EACR_CSEIE                        *((volatile unsigned int*)(0x426E04B0UL))
#define bM0P_MSC4_SPI_EACR_TBEE                         *((volatile unsigned int*)(0x426E04B4UL))
#define bM0P_MSC4_SPI_TMR_TMR0                          *((volatile unsigned int*)(0x426E0500UL))
#define bM0P_MSC4_SPI_TMR_TMR1                          *((volatile unsigned int*)(0x426E0504UL))
#define bM0P_MSC4_SPI_TMR_TMR2                          *((volatile unsigned int*)(0x426E0508UL))
#define bM0P_MSC4_SPI_TMR_TMR3                          *((volatile unsigned int*)(0x426E050CUL))
#define bM0P_MSC4_SPI_TMR_TMR4                          *((volatile unsigned int*)(0x426E0510UL))
#define bM0P_MSC4_SPI_TMR_TMR5                          *((volatile unsigned int*)(0x426E0514UL))
#define bM0P_MSC4_SPI_TMR_TMR6                          *((volatile unsigned int*)(0x426E0518UL))
#define bM0P_MSC4_SPI_TMR_TMR7                          *((volatile unsigned int*)(0x426E051CUL))
#define bM0P_MSC4_SPI_TMR_TMR8                          *((volatile unsigned int*)(0x426E0520UL))
#define bM0P_MSC4_SPI_TMR_TMR9                          *((volatile unsigned int*)(0x426E0524UL))
#define bM0P_MSC4_SPI_TMR_TMR10                         *((volatile unsigned int*)(0x426E0528UL))
#define bM0P_MSC4_SPI_TMR_TMR11                         *((volatile unsigned int*)(0x426E052CUL))
#define bM0P_MSC4_SPI_TMR_TMR12                         *((volatile unsigned int*)(0x426E0530UL))
#define bM0P_MSC4_SPI_TMR_TMR13                         *((volatile unsigned int*)(0x426E0534UL))
#define bM0P_MSC4_SPI_TMR_TMR14                         *((volatile unsigned int*)(0x426E0538UL))
#define bM0P_MSC4_SPI_TMR_TMR15                         *((volatile unsigned int*)(0x426E053CUL))
#define bM0P_MSC4_SPI_TMC_TMC0                          *((volatile unsigned int*)(0x426E0580UL))
#define bM0P_MSC4_SPI_TMC_TMC1                          *((volatile unsigned int*)(0x426E0584UL))
#define bM0P_MSC4_SPI_TMC_TMC2                          *((volatile unsigned int*)(0x426E0588UL))
#define bM0P_MSC4_SPI_TMC_TMC3                          *((volatile unsigned int*)(0x426E058CUL))
#define bM0P_MSC4_SPI_TMC_TMC4                          *((volatile unsigned int*)(0x426E0590UL))
#define bM0P_MSC4_SPI_TMC_TMC5                          *((volatile unsigned int*)(0x426E0594UL))
#define bM0P_MSC4_SPI_TMC_TMC6                          *((volatile unsigned int*)(0x426E0598UL))
#define bM0P_MSC4_SPI_TMC_TMC7                          *((volatile unsigned int*)(0x426E059CUL))
#define bM0P_MSC4_SPI_TMC_TMC8                          *((volatile unsigned int*)(0x426E05A0UL))
#define bM0P_MSC4_SPI_TMC_TMC9                          *((volatile unsigned int*)(0x426E05A4UL))
#define bM0P_MSC4_SPI_TMC_TMC10                         *((volatile unsigned int*)(0x426E05A8UL))
#define bM0P_MSC4_SPI_TMC_TMC11                         *((volatile unsigned int*)(0x426E05ACUL))
#define bM0P_MSC4_SPI_TMC_TMC12                         *((volatile unsigned int*)(0x426E05B0UL))
#define bM0P_MSC4_SPI_TMC_TMC13                         *((volatile unsigned int*)(0x426E05B4UL))
#define bM0P_MSC4_SPI_TMC_TMC14                         *((volatile unsigned int*)(0x426E05B8UL))
#define bM0P_MSC4_SPI_TMC_TMC15                         *((volatile unsigned int*)(0x426E05BCUL))
#define bM0P_MSC4_SPI_CSCR_CSOE                         *((volatile unsigned int*)(0x426E0600UL))
#define bM0P_MSC4_SPI_CSCR_CSEN0                        *((volatile unsigned int*)(0x426E0604UL))
#define bM0P_MSC4_SPI_CSCR_CSEN1                        *((volatile unsigned int*)(0x426E0608UL))
#define bM0P_MSC4_SPI_CSCR_CSEN2                        *((volatile unsigned int*)(0x426E060CUL))
#define bM0P_MSC4_SPI_CSCR_CSEN3                        *((volatile unsigned int*)(0x426E0610UL))
#define bM0P_MSC4_SPI_CSCR_CSLVS                        *((volatile unsigned int*)(0x426E0614UL))
#define bM0P_MSC4_SPI_CSCR_CSTODIV0                     *((volatile unsigned int*)(0x426E0618UL))
#define bM0P_MSC4_SPI_CSCR_CSTODIV1                     *((volatile unsigned int*)(0x426E061CUL))
#define bM0P_MSC4_SPI_CSCR_CSTODIV2                     *((volatile unsigned int*)(0x426E0620UL))
#define bM0P_MSC4_SPI_CSCR_CSAH                         *((volatile unsigned int*)(0x426E0624UL))
#define bM0P_MSC4_SPI_CSCR_CASD0                        *((volatile unsigned int*)(0x426E0628UL))
#define bM0P_MSC4_SPI_CSCR_CASD1                        *((volatile unsigned int*)(0x426E062CUL))
#define bM0P_MSC4_SPI_CSCR_CSAE0                        *((volatile unsigned int*)(0x426E0630UL))
#define bM0P_MSC4_SPI_CSCR_CSAE1                        *((volatile unsigned int*)(0x426E0634UL))
#define bM0P_MSC4_SPI_CSCR_CSAS0                        *((volatile unsigned int*)(0x426E0638UL))
#define bM0P_MSC4_SPI_CSCR_CSAS1                        *((volatile unsigned int*)(0x426E063CUL))
#define bM0P_MSC4_SPI_CSFR0_CS1DL0                      *((volatile unsigned int*)(0x426E0680UL))
#define bM0P_MSC4_SPI_CSFR0_CS1DL1                      *((volatile unsigned int*)(0x426E0684UL))
#define bM0P_MSC4_SPI_CSFR0_CS1DL2                      *((volatile unsigned int*)(0x426E0688UL))
#define bM0P_MSC4_SPI_CSFR0_CS1DL3                      *((volatile unsigned int*)(0x426E068CUL))
#define bM0P_MSC4_SPI_CSFR0_CS1TDS                      *((volatile unsigned int*)(0x426E0690UL))
#define bM0P_MSC4_SPI_CSFR0_CS1SPI                      *((volatile unsigned int*)(0x426E0694UL))
#define bM0P_MSC4_SPI_CSFR0_CS1CINV                     *((volatile unsigned int*)(0x426E0698UL))
#define bM0P_MSC4_SPI_CSFR0_CS1CSLVS                    *((volatile unsigned int*)(0x426E069CUL))
#define bM0P_MSC4_SPI_CSFR1_CS2DL0                      *((volatile unsigned int*)(0x426E06A0UL))
#define bM0P_MSC4_SPI_CSFR1_CS2DL1                      *((volatile unsigned int*)(0x426E06A4UL))
#define bM0P_MSC4_SPI_CSFR1_CS2DL2                      *((volatile unsigned int*)(0x426E06A8UL))
#define bM0P_MSC4_SPI_CSFR1_CS2DL3                      *((volatile unsigned int*)(0x426E06ACUL))
#define bM0P_MSC4_SPI_CSFR1_CS2TDS                      *((volatile unsigned int*)(0x426E06B0UL))
#define bM0P_MSC4_SPI_CSFR1_CS2SPI                      *((volatile unsigned int*)(0x426E06B4UL))
#define bM0P_MSC4_SPI_CSFR1_CS2CINV                     *((volatile unsigned int*)(0x426E06B8UL))
#define bM0P_MSC4_SPI_CSFR1_CS2CSLVS                    *((volatile unsigned int*)(0x426E06BCUL))
#define bM0P_MSC4_SPI_CSFR2_CS3DL0                      *((volatile unsigned int*)(0x426E0700UL))
#define bM0P_MSC4_SPI_CSFR2_CS3DL1                      *((volatile unsigned int*)(0x426E0704UL))
#define bM0P_MSC4_SPI_CSFR2_CS3DL2                      *((volatile unsigned int*)(0x426E0708UL))
#define bM0P_MSC4_SPI_CSFR2_CS3DL3                      *((volatile unsigned int*)(0x426E070CUL))
#define bM0P_MSC4_SPI_CSFR2_CS3TDS                      *((volatile unsigned int*)(0x426E0710UL))
#define bM0P_MSC4_SPI_CSFR2_CS3SPI                      *((volatile unsigned int*)(0x426E0714UL))
#define bM0P_MSC4_SPI_CSFR2_CS3CINV                     *((volatile unsigned int*)(0x426E0718UL))
#define bM0P_MSC4_SPI_CSFR2_CS3CSLVS                    *((volatile unsigned int*)(0x426E071CUL))
#define bM0P_MSC4_SPI_TDTCNT0_TDTCNT00                  *((volatile unsigned int*)(0x426E0780UL))
#define bM0P_MSC4_SPI_TDTCNT0_TDTCNT01                  *((volatile unsigned int*)(0x426E0784UL))
#define bM0P_MSC4_SPI_TDTCNT0_TDTCNT02                  *((volatile unsigned int*)(0x426E0788UL))
#define bM0P_MSC4_SPI_TDTCNT0_TDTCNT03                  *((volatile unsigned int*)(0x426E078CUL))
#define bM0P_MSC4_SPI_TDTCNT0_TDTCNT04                  *((volatile unsigned int*)(0x426E0790UL))
#define bM0P_MSC4_SPI_TDTCNT0_TDTCNT05                  *((volatile unsigned int*)(0x426E0794UL))
#define bM0P_MSC4_SPI_TDTCNT0_TDTCNT06                  *((volatile unsigned int*)(0x426E0798UL))
#define bM0P_MSC4_SPI_TDTCNT0_TDTCNT07                  *((volatile unsigned int*)(0x426E079CUL))
#define bM0P_MSC4_SPI_TDTCNT1_TDTCNT10                  *((volatile unsigned int*)(0x426E07A0UL))
#define bM0P_MSC4_SPI_TDTCNT1_TDTCNT11                  *((volatile unsigned int*)(0x426E07A4UL))
#define bM0P_MSC4_SPI_TDTCNT1_TDTCNT12                  *((volatile unsigned int*)(0x426E07A8UL))
#define bM0P_MSC4_SPI_TDTCNT1_TDTCNT13                  *((volatile unsigned int*)(0x426E07ACUL))
#define bM0P_MSC4_SPI_TDTCNT1_TDTCNT14                  *((volatile unsigned int*)(0x426E07B0UL))
#define bM0P_MSC4_SPI_TDTCNT1_TDTCNT15                  *((volatile unsigned int*)(0x426E07B4UL))
#define bM0P_MSC4_SPI_TDTCNT1_TDTCNT16                  *((volatile unsigned int*)(0x426E07B8UL))
#define bM0P_MSC4_SPI_TDTCNT1_TDTCNT17                  *((volatile unsigned int*)(0x426E07BCUL))
#define bM0P_MSC4_SPI_TDTCNT2_TDTCNT20                  *((volatile unsigned int*)(0x426E0800UL))
#define bM0P_MSC4_SPI_TDTCNT2_TDTCNT21                  *((volatile unsigned int*)(0x426E0804UL))
#define bM0P_MSC4_SPI_TDTCNT2_TDTCNT22                  *((volatile unsigned int*)(0x426E0808UL))
#define bM0P_MSC4_SPI_TDTCNT2_TDTCNT23                  *((volatile unsigned int*)(0x426E080CUL))
#define bM0P_MSC4_SPI_TDTCNT2_TDTCNT24                  *((volatile unsigned int*)(0x426E0810UL))
#define bM0P_MSC4_SPI_TDTCNT2_TDTCNT25                  *((volatile unsigned int*)(0x426E0814UL))
#define bM0P_MSC4_SPI_TDTCNT2_TDTCNT26                  *((volatile unsigned int*)(0x426E0818UL))
#define bM0P_MSC4_SPI_TDTCNT2_TDTCNT27                  *((volatile unsigned int*)(0x426E081CUL))
#define bM0P_MSC4_SPI_TDTCNT3_TDTCNT30                  *((volatile unsigned int*)(0x426E0820UL))
#define bM0P_MSC4_SPI_TDTCNT3_TDTCNT31                  *((volatile unsigned int*)(0x426E0824UL))
#define bM0P_MSC4_SPI_TDTCNT3_TDTCNT32                  *((volatile unsigned int*)(0x426E0828UL))
#define bM0P_MSC4_SPI_TDTCNT3_TDTCNT33                  *((volatile unsigned int*)(0x426E082CUL))
#define bM0P_MSC4_SPI_TDTCNT3_TDTCNT34                  *((volatile unsigned int*)(0x426E0830UL))
#define bM0P_MSC4_SPI_TDTCNT3_TDTCNT35                  *((volatile unsigned int*)(0x426E0834UL))
#define bM0P_MSC4_SPI_TDTCNT3_TDTCNT36                  *((volatile unsigned int*)(0x426E0838UL))
#define bM0P_MSC4_SPI_TDTCNT3_TDTCNT37                  *((volatile unsigned int*)(0x426E083CUL))
#define bM0P_MSC5_SPI_MR_DOE                            *((volatile unsigned int*)(0x426E2000UL))
#define bM0P_MSC5_SPI_MR_CKE                            *((volatile unsigned int*)(0x426E2004UL))
#define bM0P_MSC5_SPI_MR_TDS                            *((volatile unsigned int*)(0x426E2008UL))
#define bM0P_MSC5_SPI_MR_CINV                           *((volatile unsigned int*)(0x426E200CUL))
#define bM0P_MSC5_SPI_MR_MODE0                          *((volatile unsigned int*)(0x426E2014UL))
#define bM0P_MSC5_SPI_MR_MODE1                          *((volatile unsigned int*)(0x426E2018UL))
#define bM0P_MSC5_SPI_MR_MODE2                          *((volatile unsigned int*)(0x426E201CUL))
#define bM0P_MSC5_SPI_CR_TXE                            *((volatile unsigned int*)(0x426E2020UL))
#define bM0P_MSC5_SPI_CR_RXE                            *((volatile unsigned int*)(0x426E2024UL))
#define bM0P_MSC5_SPI_CR_TBIE                           *((volatile unsigned int*)(0x426E2028UL))
#define bM0P_MSC5_SPI_CR_TXIE                           *((volatile unsigned int*)(0x426E202CUL))
#define bM0P_MSC5_SPI_CR_RXIE                           *((volatile unsigned int*)(0x426E2030UL))
#define bM0P_MSC5_SPI_CR_SPIMODE                        *((volatile unsigned int*)(0x426E2034UL))
#define bM0P_MSC5_SPI_CR_MSS                            *((volatile unsigned int*)(0x426E2038UL))
#define bM0P_MSC5_SPI_CR_PCL                            *((volatile unsigned int*)(0x426E203CUL))
#define bM0P_MSC5_SPI_ECR_DL0                           *((volatile unsigned int*)(0x426E2080UL))
#define bM0P_MSC5_SPI_ECR_DL1                           *((volatile unsigned int*)(0x426E2084UL))
#define bM0P_MSC5_SPI_ECR_DL2                           *((volatile unsigned int*)(0x426E2088UL))
#define bM0P_MSC5_SPI_ECR_DTRWS0                        *((volatile unsigned int*)(0x426E208CUL))
#define bM0P_MSC5_SPI_ECR_DTRWS1                        *((volatile unsigned int*)(0x426E2090UL))
#define bM0P_MSC5_SPI_ECR_CSFE                          *((volatile unsigned int*)(0x426E2094UL))
#define bM0P_MSC5_SPI_ECR_DL3                           *((volatile unsigned int*)(0x426E2098UL))
#define bM0P_MSC5_SPI_ECR_SOPS                          *((volatile unsigned int*)(0x426E209CUL))
#define bM0P_MSC5_SPI_SR_TBIF                           *((volatile unsigned int*)(0x426E20A0UL))
#define bM0P_MSC5_SPI_SR_TDEF                           *((volatile unsigned int*)(0x426E20A4UL))
#define bM0P_MSC5_SPI_SR_RDFF                           *((volatile unsigned int*)(0x426E20A8UL))
#define bM0P_MSC5_SPI_SR_ORF                            *((volatile unsigned int*)(0x426E20ACUL))
#define bM0P_MSC5_SPI_SR_RECLR                          *((volatile unsigned int*)(0x426E20BCUL))
#define bM0P_MSC5_SPI_BRS_BRS0                          *((volatile unsigned int*)(0x426E2180UL))
#define bM0P_MSC5_SPI_BRS_BRS1                          *((volatile unsigned int*)(0x426E2184UL))
#define bM0P_MSC5_SPI_BRS_BRS2                          *((volatile unsigned int*)(0x426E2188UL))
#define bM0P_MSC5_SPI_BRS_BRS3                          *((volatile unsigned int*)(0x426E218CUL))
#define bM0P_MSC5_SPI_BRS_BRS4                          *((volatile unsigned int*)(0x426E2190UL))
#define bM0P_MSC5_SPI_BRS_BRS5                          *((volatile unsigned int*)(0x426E2194UL))
#define bM0P_MSC5_SPI_BRS_BRS6                          *((volatile unsigned int*)(0x426E2198UL))
#define bM0P_MSC5_SPI_BRS_BRS7                          *((volatile unsigned int*)(0x426E219CUL))
#define bM0P_MSC5_SPI_BRS_BRS8                          *((volatile unsigned int*)(0x426E21A0UL))
#define bM0P_MSC5_SPI_BRS_BRS9                          *((volatile unsigned int*)(0x426E21A4UL))
#define bM0P_MSC5_SPI_BRS_BRS10                         *((volatile unsigned int*)(0x426E21A8UL))
#define bM0P_MSC5_SPI_BRS_BRS11                         *((volatile unsigned int*)(0x426E21ACUL))
#define bM0P_MSC5_SPI_BRS_BRS12                         *((volatile unsigned int*)(0x426E21B0UL))
#define bM0P_MSC5_SPI_BRS_BRS13                         *((volatile unsigned int*)(0x426E21B4UL))
#define bM0P_MSC5_SPI_BRS_BRS14                         *((volatile unsigned int*)(0x426E21B8UL))
#define bM0P_MSC5_SPI_CSTMG0_CSHDLY0                    *((volatile unsigned int*)(0x426E2380UL))
#define bM0P_MSC5_SPI_CSTMG0_CSHDLY1                    *((volatile unsigned int*)(0x426E2384UL))
#define bM0P_MSC5_SPI_CSTMG0_CSHDLY2                    *((volatile unsigned int*)(0x426E2388UL))
#define bM0P_MSC5_SPI_CSTMG0_CSHDLY3                    *((volatile unsigned int*)(0x426E238CUL))
#define bM0P_MSC5_SPI_CSTMG0_CSHDLY4                    *((volatile unsigned int*)(0x426E2390UL))
#define bM0P_MSC5_SPI_CSTMG0_CSHDLY5                    *((volatile unsigned int*)(0x426E2394UL))
#define bM0P_MSC5_SPI_CSTMG0_CSHDLY6                    *((volatile unsigned int*)(0x426E2398UL))
#define bM0P_MSC5_SPI_CSTMG0_CSHDLY7                    *((volatile unsigned int*)(0x426E239CUL))
#define bM0P_MSC5_SPI_CSTMG1_CSSDLY0                    *((volatile unsigned int*)(0x426E23A0UL))
#define bM0P_MSC5_SPI_CSTMG1_CSSDLY1                    *((volatile unsigned int*)(0x426E23A4UL))
#define bM0P_MSC5_SPI_CSTMG1_CSSDLY2                    *((volatile unsigned int*)(0x426E23A8UL))
#define bM0P_MSC5_SPI_CSTMG1_CSSDLY3                    *((volatile unsigned int*)(0x426E23ACUL))
#define bM0P_MSC5_SPI_CSTMG1_CSSDLY4                    *((volatile unsigned int*)(0x426E23B0UL))
#define bM0P_MSC5_SPI_CSTMG1_CSSDLY5                    *((volatile unsigned int*)(0x426E23B4UL))
#define bM0P_MSC5_SPI_CSTMG1_CSSDLY6                    *((volatile unsigned int*)(0x426E23B8UL))
#define bM0P_MSC5_SPI_CSTMG1_CSSDLY7                    *((volatile unsigned int*)(0x426E23BCUL))
#define bM0P_MSC5_SPI_CSTMG32_CSDS0                     *((volatile unsigned int*)(0x426E2400UL))
#define bM0P_MSC5_SPI_CSTMG32_CSDS1                     *((volatile unsigned int*)(0x426E2404UL))
#define bM0P_MSC5_SPI_CSTMG32_CSDS2                     *((volatile unsigned int*)(0x426E2408UL))
#define bM0P_MSC5_SPI_CSTMG32_CSDS3                     *((volatile unsigned int*)(0x426E240CUL))
#define bM0P_MSC5_SPI_CSTMG32_CSDS4                     *((volatile unsigned int*)(0x426E2410UL))
#define bM0P_MSC5_SPI_CSTMG32_CSDS5                     *((volatile unsigned int*)(0x426E2414UL))
#define bM0P_MSC5_SPI_CSTMG32_CSDS6                     *((volatile unsigned int*)(0x426E2418UL))
#define bM0P_MSC5_SPI_CSTMG32_CSDS7                     *((volatile unsigned int*)(0x426E241CUL))
#define bM0P_MSC5_SPI_CSTMG32_CSDS8                     *((volatile unsigned int*)(0x426E2420UL))
#define bM0P_MSC5_SPI_CSTMG32_CSDS9                     *((volatile unsigned int*)(0x426E2424UL))
#define bM0P_MSC5_SPI_CSTMG32_CSDS10                    *((volatile unsigned int*)(0x426E2428UL))
#define bM0P_MSC5_SPI_CSTMG32_CSDS11                    *((volatile unsigned int*)(0x426E242CUL))
#define bM0P_MSC5_SPI_CSTMG32_CSDS12                    *((volatile unsigned int*)(0x426E2430UL))
#define bM0P_MSC5_SPI_CSTMG32_CSDS13                    *((volatile unsigned int*)(0x426E2434UL))
#define bM0P_MSC5_SPI_CSTMG32_CSDS14                    *((volatile unsigned int*)(0x426E2438UL))
#define bM0P_MSC5_SPI_CSTMG32_CSDS15                    *((volatile unsigned int*)(0x426E243CUL))
#define bM0P_MSC5_SPI_EACR_TMRE                         *((volatile unsigned int*)(0x426E2480UL))
#define bM0P_MSC5_SPI_EACR_CLKDIV0                      *((volatile unsigned int*)(0x426E2484UL))
#define bM0P_MSC5_SPI_EACR_CLKDIV1                      *((volatile unsigned int*)(0x426E2488UL))
#define bM0P_MSC5_SPI_EACR_CLKDIV2                      *((volatile unsigned int*)(0x426E248CUL))
#define bM0P_MSC5_SPI_EACR_CLKDIV3                      *((volatile unsigned int*)(0x426E2490UL))
#define bM0P_MSC5_SPI_EACR_SYNTE                        *((volatile unsigned int*)(0x426E2498UL))
#define bM0P_MSC5_SPI_EACR_TIE                          *((volatile unsigned int*)(0x426E249CUL))
#define bM0P_MSC5_SPI_EACR_TIF                          *((volatile unsigned int*)(0x426E24A0UL))
#define bM0P_MSC5_SPI_EACR_CSER                         *((volatile unsigned int*)(0x426E24ACUL))
#define bM0P_MSC5_SPI_EACR_CSEIE                        *((volatile unsigned int*)(0x426E24B0UL))
#define bM0P_MSC5_SPI_EACR_TBEE                         *((volatile unsigned int*)(0x426E24B4UL))
#define bM0P_MSC5_SPI_TMR_TMR0                          *((volatile unsigned int*)(0x426E2500UL))
#define bM0P_MSC5_SPI_TMR_TMR1                          *((volatile unsigned int*)(0x426E2504UL))
#define bM0P_MSC5_SPI_TMR_TMR2                          *((volatile unsigned int*)(0x426E2508UL))
#define bM0P_MSC5_SPI_TMR_TMR3                          *((volatile unsigned int*)(0x426E250CUL))
#define bM0P_MSC5_SPI_TMR_TMR4                          *((volatile unsigned int*)(0x426E2510UL))
#define bM0P_MSC5_SPI_TMR_TMR5                          *((volatile unsigned int*)(0x426E2514UL))
#define bM0P_MSC5_SPI_TMR_TMR6                          *((volatile unsigned int*)(0x426E2518UL))
#define bM0P_MSC5_SPI_TMR_TMR7                          *((volatile unsigned int*)(0x426E251CUL))
#define bM0P_MSC5_SPI_TMR_TMR8                          *((volatile unsigned int*)(0x426E2520UL))
#define bM0P_MSC5_SPI_TMR_TMR9                          *((volatile unsigned int*)(0x426E2524UL))
#define bM0P_MSC5_SPI_TMR_TMR10                         *((volatile unsigned int*)(0x426E2528UL))
#define bM0P_MSC5_SPI_TMR_TMR11                         *((volatile unsigned int*)(0x426E252CUL))
#define bM0P_MSC5_SPI_TMR_TMR12                         *((volatile unsigned int*)(0x426E2530UL))
#define bM0P_MSC5_SPI_TMR_TMR13                         *((volatile unsigned int*)(0x426E2534UL))
#define bM0P_MSC5_SPI_TMR_TMR14                         *((volatile unsigned int*)(0x426E2538UL))
#define bM0P_MSC5_SPI_TMR_TMR15                         *((volatile unsigned int*)(0x426E253CUL))
#define bM0P_MSC5_SPI_TMC_TMC0                          *((volatile unsigned int*)(0x426E2580UL))
#define bM0P_MSC5_SPI_TMC_TMC1                          *((volatile unsigned int*)(0x426E2584UL))
#define bM0P_MSC5_SPI_TMC_TMC2                          *((volatile unsigned int*)(0x426E2588UL))
#define bM0P_MSC5_SPI_TMC_TMC3                          *((volatile unsigned int*)(0x426E258CUL))
#define bM0P_MSC5_SPI_TMC_TMC4                          *((volatile unsigned int*)(0x426E2590UL))
#define bM0P_MSC5_SPI_TMC_TMC5                          *((volatile unsigned int*)(0x426E2594UL))
#define bM0P_MSC5_SPI_TMC_TMC6                          *((volatile unsigned int*)(0x426E2598UL))
#define bM0P_MSC5_SPI_TMC_TMC7                          *((volatile unsigned int*)(0x426E259CUL))
#define bM0P_MSC5_SPI_TMC_TMC8                          *((volatile unsigned int*)(0x426E25A0UL))
#define bM0P_MSC5_SPI_TMC_TMC9                          *((volatile unsigned int*)(0x426E25A4UL))
#define bM0P_MSC5_SPI_TMC_TMC10                         *((volatile unsigned int*)(0x426E25A8UL))
#define bM0P_MSC5_SPI_TMC_TMC11                         *((volatile unsigned int*)(0x426E25ACUL))
#define bM0P_MSC5_SPI_TMC_TMC12                         *((volatile unsigned int*)(0x426E25B0UL))
#define bM0P_MSC5_SPI_TMC_TMC13                         *((volatile unsigned int*)(0x426E25B4UL))
#define bM0P_MSC5_SPI_TMC_TMC14                         *((volatile unsigned int*)(0x426E25B8UL))
#define bM0P_MSC5_SPI_TMC_TMC15                         *((volatile unsigned int*)(0x426E25BCUL))
#define bM0P_MSC5_SPI_CSCR_CSOE                         *((volatile unsigned int*)(0x426E2600UL))
#define bM0P_MSC5_SPI_CSCR_CSEN0                        *((volatile unsigned int*)(0x426E2604UL))
#define bM0P_MSC5_SPI_CSCR_CSEN1                        *((volatile unsigned int*)(0x426E2608UL))
#define bM0P_MSC5_SPI_CSCR_CSEN2                        *((volatile unsigned int*)(0x426E260CUL))
#define bM0P_MSC5_SPI_CSCR_CSEN3                        *((volatile unsigned int*)(0x426E2610UL))
#define bM0P_MSC5_SPI_CSCR_CSLVS                        *((volatile unsigned int*)(0x426E2614UL))
#define bM0P_MSC5_SPI_CSCR_CSTODIV0                     *((volatile unsigned int*)(0x426E2618UL))
#define bM0P_MSC5_SPI_CSCR_CSTODIV1                     *((volatile unsigned int*)(0x426E261CUL))
#define bM0P_MSC5_SPI_CSCR_CSTODIV2                     *((volatile unsigned int*)(0x426E2620UL))
#define bM0P_MSC5_SPI_CSCR_CSAH                         *((volatile unsigned int*)(0x426E2624UL))
#define bM0P_MSC5_SPI_CSCR_CASD0                        *((volatile unsigned int*)(0x426E2628UL))
#define bM0P_MSC5_SPI_CSCR_CASD1                        *((volatile unsigned int*)(0x426E262CUL))
#define bM0P_MSC5_SPI_CSCR_CSAE0                        *((volatile unsigned int*)(0x426E2630UL))
#define bM0P_MSC5_SPI_CSCR_CSAE1                        *((volatile unsigned int*)(0x426E2634UL))
#define bM0P_MSC5_SPI_CSCR_CSAS0                        *((volatile unsigned int*)(0x426E2638UL))
#define bM0P_MSC5_SPI_CSCR_CSAS1                        *((volatile unsigned int*)(0x426E263CUL))
#define bM0P_MSC5_SPI_CSFR0_CS1DL0                      *((volatile unsigned int*)(0x426E2680UL))
#define bM0P_MSC5_SPI_CSFR0_CS1DL1                      *((volatile unsigned int*)(0x426E2684UL))
#define bM0P_MSC5_SPI_CSFR0_CS1DL2                      *((volatile unsigned int*)(0x426E2688UL))
#define bM0P_MSC5_SPI_CSFR0_CS1DL3                      *((volatile unsigned int*)(0x426E268CUL))
#define bM0P_MSC5_SPI_CSFR0_CS1TDS                      *((volatile unsigned int*)(0x426E2690UL))
#define bM0P_MSC5_SPI_CSFR0_CS1SPI                      *((volatile unsigned int*)(0x426E2694UL))
#define bM0P_MSC5_SPI_CSFR0_CS1CINV                     *((volatile unsigned int*)(0x426E2698UL))
#define bM0P_MSC5_SPI_CSFR0_CS1CSLVS                    *((volatile unsigned int*)(0x426E269CUL))
#define bM0P_MSC5_SPI_CSFR1_CS2DL0                      *((volatile unsigned int*)(0x426E26A0UL))
#define bM0P_MSC5_SPI_CSFR1_CS2DL1                      *((volatile unsigned int*)(0x426E26A4UL))
#define bM0P_MSC5_SPI_CSFR1_CS2DL2                      *((volatile unsigned int*)(0x426E26A8UL))
#define bM0P_MSC5_SPI_CSFR1_CS2DL3                      *((volatile unsigned int*)(0x426E26ACUL))
#define bM0P_MSC5_SPI_CSFR1_CS2TDS                      *((volatile unsigned int*)(0x426E26B0UL))
#define bM0P_MSC5_SPI_CSFR1_CS2SPI                      *((volatile unsigned int*)(0x426E26B4UL))
#define bM0P_MSC5_SPI_CSFR1_CS2CINV                     *((volatile unsigned int*)(0x426E26B8UL))
#define bM0P_MSC5_SPI_CSFR1_CS2CSLVS                    *((volatile unsigned int*)(0x426E26BCUL))
#define bM0P_MSC5_SPI_CSFR2_CS3DL0                      *((volatile unsigned int*)(0x426E2700UL))
#define bM0P_MSC5_SPI_CSFR2_CS3DL1                      *((volatile unsigned int*)(0x426E2704UL))
#define bM0P_MSC5_SPI_CSFR2_CS3DL2                      *((volatile unsigned int*)(0x426E2708UL))
#define bM0P_MSC5_SPI_CSFR2_CS3DL3                      *((volatile unsigned int*)(0x426E270CUL))
#define bM0P_MSC5_SPI_CSFR2_CS3TDS                      *((volatile unsigned int*)(0x426E2710UL))
#define bM0P_MSC5_SPI_CSFR2_CS3SPI                      *((volatile unsigned int*)(0x426E2714UL))
#define bM0P_MSC5_SPI_CSFR2_CS3CINV                     *((volatile unsigned int*)(0x426E2718UL))
#define bM0P_MSC5_SPI_CSFR2_CS3CSLVS                    *((volatile unsigned int*)(0x426E271CUL))
#define bM0P_MSC5_SPI_TDTCNT0_TDTCNT00                  *((volatile unsigned int*)(0x426E2780UL))
#define bM0P_MSC5_SPI_TDTCNT0_TDTCNT01                  *((volatile unsigned int*)(0x426E2784UL))
#define bM0P_MSC5_SPI_TDTCNT0_TDTCNT02                  *((volatile unsigned int*)(0x426E2788UL))
#define bM0P_MSC5_SPI_TDTCNT0_TDTCNT03                  *((volatile unsigned int*)(0x426E278CUL))
#define bM0P_MSC5_SPI_TDTCNT0_TDTCNT04                  *((volatile unsigned int*)(0x426E2790UL))
#define bM0P_MSC5_SPI_TDTCNT0_TDTCNT05                  *((volatile unsigned int*)(0x426E2794UL))
#define bM0P_MSC5_SPI_TDTCNT0_TDTCNT06                  *((volatile unsigned int*)(0x426E2798UL))
#define bM0P_MSC5_SPI_TDTCNT0_TDTCNT07                  *((volatile unsigned int*)(0x426E279CUL))
#define bM0P_MSC5_SPI_TDTCNT1_TDTCNT10                  *((volatile unsigned int*)(0x426E27A0UL))
#define bM0P_MSC5_SPI_TDTCNT1_TDTCNT11                  *((volatile unsigned int*)(0x426E27A4UL))
#define bM0P_MSC5_SPI_TDTCNT1_TDTCNT12                  *((volatile unsigned int*)(0x426E27A8UL))
#define bM0P_MSC5_SPI_TDTCNT1_TDTCNT13                  *((volatile unsigned int*)(0x426E27ACUL))
#define bM0P_MSC5_SPI_TDTCNT1_TDTCNT14                  *((volatile unsigned int*)(0x426E27B0UL))
#define bM0P_MSC5_SPI_TDTCNT1_TDTCNT15                  *((volatile unsigned int*)(0x426E27B4UL))
#define bM0P_MSC5_SPI_TDTCNT1_TDTCNT16                  *((volatile unsigned int*)(0x426E27B8UL))
#define bM0P_MSC5_SPI_TDTCNT1_TDTCNT17                  *((volatile unsigned int*)(0x426E27BCUL))
#define bM0P_MSC5_SPI_TDTCNT2_TDTCNT20                  *((volatile unsigned int*)(0x426E2800UL))
#define bM0P_MSC5_SPI_TDTCNT2_TDTCNT21                  *((volatile unsigned int*)(0x426E2804UL))
#define bM0P_MSC5_SPI_TDTCNT2_TDTCNT22                  *((volatile unsigned int*)(0x426E2808UL))
#define bM0P_MSC5_SPI_TDTCNT2_TDTCNT23                  *((volatile unsigned int*)(0x426E280CUL))
#define bM0P_MSC5_SPI_TDTCNT2_TDTCNT24                  *((volatile unsigned int*)(0x426E2810UL))
#define bM0P_MSC5_SPI_TDTCNT2_TDTCNT25                  *((volatile unsigned int*)(0x426E2814UL))
#define bM0P_MSC5_SPI_TDTCNT2_TDTCNT26                  *((volatile unsigned int*)(0x426E2818UL))
#define bM0P_MSC5_SPI_TDTCNT2_TDTCNT27                  *((volatile unsigned int*)(0x426E281CUL))
#define bM0P_MSC5_SPI_TDTCNT3_TDTCNT30                  *((volatile unsigned int*)(0x426E2820UL))
#define bM0P_MSC5_SPI_TDTCNT3_TDTCNT31                  *((volatile unsigned int*)(0x426E2824UL))
#define bM0P_MSC5_SPI_TDTCNT3_TDTCNT32                  *((volatile unsigned int*)(0x426E2828UL))
#define bM0P_MSC5_SPI_TDTCNT3_TDTCNT33                  *((volatile unsigned int*)(0x426E282CUL))
#define bM0P_MSC5_SPI_TDTCNT3_TDTCNT34                  *((volatile unsigned int*)(0x426E2830UL))
#define bM0P_MSC5_SPI_TDTCNT3_TDTCNT35                  *((volatile unsigned int*)(0x426E2834UL))
#define bM0P_MSC5_SPI_TDTCNT3_TDTCNT36                  *((volatile unsigned int*)(0x426E2838UL))
#define bM0P_MSC5_SPI_TDTCNT3_TDTCNT37                  *((volatile unsigned int*)(0x426E283CUL))
#define bM0P_MSC6_SPI_MR_DOE                            *((volatile unsigned int*)(0x426E4000UL))
#define bM0P_MSC6_SPI_MR_CKE                            *((volatile unsigned int*)(0x426E4004UL))
#define bM0P_MSC6_SPI_MR_TDS                            *((volatile unsigned int*)(0x426E4008UL))
#define bM0P_MSC6_SPI_MR_CINV                           *((volatile unsigned int*)(0x426E400CUL))
#define bM0P_MSC6_SPI_MR_MODE0                          *((volatile unsigned int*)(0x426E4014UL))
#define bM0P_MSC6_SPI_MR_MODE1                          *((volatile unsigned int*)(0x426E4018UL))
#define bM0P_MSC6_SPI_MR_MODE2                          *((volatile unsigned int*)(0x426E401CUL))
#define bM0P_MSC6_SPI_CR_TXE                            *((volatile unsigned int*)(0x426E4020UL))
#define bM0P_MSC6_SPI_CR_RXE                            *((volatile unsigned int*)(0x426E4024UL))
#define bM0P_MSC6_SPI_CR_TBIE                           *((volatile unsigned int*)(0x426E4028UL))
#define bM0P_MSC6_SPI_CR_TXIE                           *((volatile unsigned int*)(0x426E402CUL))
#define bM0P_MSC6_SPI_CR_RXIE                           *((volatile unsigned int*)(0x426E4030UL))
#define bM0P_MSC6_SPI_CR_SPIMODE                        *((volatile unsigned int*)(0x426E4034UL))
#define bM0P_MSC6_SPI_CR_MSS                            *((volatile unsigned int*)(0x426E4038UL))
#define bM0P_MSC6_SPI_CR_PCL                            *((volatile unsigned int*)(0x426E403CUL))
#define bM0P_MSC6_SPI_ECR_DL0                           *((volatile unsigned int*)(0x426E4080UL))
#define bM0P_MSC6_SPI_ECR_DL1                           *((volatile unsigned int*)(0x426E4084UL))
#define bM0P_MSC6_SPI_ECR_DL2                           *((volatile unsigned int*)(0x426E4088UL))
#define bM0P_MSC6_SPI_ECR_DTRWS0                        *((volatile unsigned int*)(0x426E408CUL))
#define bM0P_MSC6_SPI_ECR_DTRWS1                        *((volatile unsigned int*)(0x426E4090UL))
#define bM0P_MSC6_SPI_ECR_CSFE                          *((volatile unsigned int*)(0x426E4094UL))
#define bM0P_MSC6_SPI_ECR_DL3                           *((volatile unsigned int*)(0x426E4098UL))
#define bM0P_MSC6_SPI_ECR_SOPS                          *((volatile unsigned int*)(0x426E409CUL))
#define bM0P_MSC6_SPI_SR_TBIF                           *((volatile unsigned int*)(0x426E40A0UL))
#define bM0P_MSC6_SPI_SR_TDEF                           *((volatile unsigned int*)(0x426E40A4UL))
#define bM0P_MSC6_SPI_SR_RDFF                           *((volatile unsigned int*)(0x426E40A8UL))
#define bM0P_MSC6_SPI_SR_ORF                            *((volatile unsigned int*)(0x426E40ACUL))
#define bM0P_MSC6_SPI_SR_RECLR                          *((volatile unsigned int*)(0x426E40BCUL))
#define bM0P_MSC6_SPI_BRS_BRS0                          *((volatile unsigned int*)(0x426E4180UL))
#define bM0P_MSC6_SPI_BRS_BRS1                          *((volatile unsigned int*)(0x426E4184UL))
#define bM0P_MSC6_SPI_BRS_BRS2                          *((volatile unsigned int*)(0x426E4188UL))
#define bM0P_MSC6_SPI_BRS_BRS3                          *((volatile unsigned int*)(0x426E418CUL))
#define bM0P_MSC6_SPI_BRS_BRS4                          *((volatile unsigned int*)(0x426E4190UL))
#define bM0P_MSC6_SPI_BRS_BRS5                          *((volatile unsigned int*)(0x426E4194UL))
#define bM0P_MSC6_SPI_BRS_BRS6                          *((volatile unsigned int*)(0x426E4198UL))
#define bM0P_MSC6_SPI_BRS_BRS7                          *((volatile unsigned int*)(0x426E419CUL))
#define bM0P_MSC6_SPI_BRS_BRS8                          *((volatile unsigned int*)(0x426E41A0UL))
#define bM0P_MSC6_SPI_BRS_BRS9                          *((volatile unsigned int*)(0x426E41A4UL))
#define bM0P_MSC6_SPI_BRS_BRS10                         *((volatile unsigned int*)(0x426E41A8UL))
#define bM0P_MSC6_SPI_BRS_BRS11                         *((volatile unsigned int*)(0x426E41ACUL))
#define bM0P_MSC6_SPI_BRS_BRS12                         *((volatile unsigned int*)(0x426E41B0UL))
#define bM0P_MSC6_SPI_BRS_BRS13                         *((volatile unsigned int*)(0x426E41B4UL))
#define bM0P_MSC6_SPI_BRS_BRS14                         *((volatile unsigned int*)(0x426E41B8UL))
#define bM0P_MSC6_SPI_CSTMG0_CSHDLY0                    *((volatile unsigned int*)(0x426E4380UL))
#define bM0P_MSC6_SPI_CSTMG0_CSHDLY1                    *((volatile unsigned int*)(0x426E4384UL))
#define bM0P_MSC6_SPI_CSTMG0_CSHDLY2                    *((volatile unsigned int*)(0x426E4388UL))
#define bM0P_MSC6_SPI_CSTMG0_CSHDLY3                    *((volatile unsigned int*)(0x426E438CUL))
#define bM0P_MSC6_SPI_CSTMG0_CSHDLY4                    *((volatile unsigned int*)(0x426E4390UL))
#define bM0P_MSC6_SPI_CSTMG0_CSHDLY5                    *((volatile unsigned int*)(0x426E4394UL))
#define bM0P_MSC6_SPI_CSTMG0_CSHDLY6                    *((volatile unsigned int*)(0x426E4398UL))
#define bM0P_MSC6_SPI_CSTMG0_CSHDLY7                    *((volatile unsigned int*)(0x426E439CUL))
#define bM0P_MSC6_SPI_CSTMG1_CSSDLY0                    *((volatile unsigned int*)(0x426E43A0UL))
#define bM0P_MSC6_SPI_CSTMG1_CSSDLY1                    *((volatile unsigned int*)(0x426E43A4UL))
#define bM0P_MSC6_SPI_CSTMG1_CSSDLY2                    *((volatile unsigned int*)(0x426E43A8UL))
#define bM0P_MSC6_SPI_CSTMG1_CSSDLY3                    *((volatile unsigned int*)(0x426E43ACUL))
#define bM0P_MSC6_SPI_CSTMG1_CSSDLY4                    *((volatile unsigned int*)(0x426E43B0UL))
#define bM0P_MSC6_SPI_CSTMG1_CSSDLY5                    *((volatile unsigned int*)(0x426E43B4UL))
#define bM0P_MSC6_SPI_CSTMG1_CSSDLY6                    *((volatile unsigned int*)(0x426E43B8UL))
#define bM0P_MSC6_SPI_CSTMG1_CSSDLY7                    *((volatile unsigned int*)(0x426E43BCUL))
#define bM0P_MSC6_SPI_CSTMG32_CSDS0                     *((volatile unsigned int*)(0x426E4400UL))
#define bM0P_MSC6_SPI_CSTMG32_CSDS1                     *((volatile unsigned int*)(0x426E4404UL))
#define bM0P_MSC6_SPI_CSTMG32_CSDS2                     *((volatile unsigned int*)(0x426E4408UL))
#define bM0P_MSC6_SPI_CSTMG32_CSDS3                     *((volatile unsigned int*)(0x426E440CUL))
#define bM0P_MSC6_SPI_CSTMG32_CSDS4                     *((volatile unsigned int*)(0x426E4410UL))
#define bM0P_MSC6_SPI_CSTMG32_CSDS5                     *((volatile unsigned int*)(0x426E4414UL))
#define bM0P_MSC6_SPI_CSTMG32_CSDS6                     *((volatile unsigned int*)(0x426E4418UL))
#define bM0P_MSC6_SPI_CSTMG32_CSDS7                     *((volatile unsigned int*)(0x426E441CUL))
#define bM0P_MSC6_SPI_CSTMG32_CSDS8                     *((volatile unsigned int*)(0x426E4420UL))
#define bM0P_MSC6_SPI_CSTMG32_CSDS9                     *((volatile unsigned int*)(0x426E4424UL))
#define bM0P_MSC6_SPI_CSTMG32_CSDS10                    *((volatile unsigned int*)(0x426E4428UL))
#define bM0P_MSC6_SPI_CSTMG32_CSDS11                    *((volatile unsigned int*)(0x426E442CUL))
#define bM0P_MSC6_SPI_CSTMG32_CSDS12                    *((volatile unsigned int*)(0x426E4430UL))
#define bM0P_MSC6_SPI_CSTMG32_CSDS13                    *((volatile unsigned int*)(0x426E4434UL))
#define bM0P_MSC6_SPI_CSTMG32_CSDS14                    *((volatile unsigned int*)(0x426E4438UL))
#define bM0P_MSC6_SPI_CSTMG32_CSDS15                    *((volatile unsigned int*)(0x426E443CUL))
#define bM0P_MSC6_SPI_EACR_TMRE                         *((volatile unsigned int*)(0x426E4480UL))
#define bM0P_MSC6_SPI_EACR_CLKDIV0                      *((volatile unsigned int*)(0x426E4484UL))
#define bM0P_MSC6_SPI_EACR_CLKDIV1                      *((volatile unsigned int*)(0x426E4488UL))
#define bM0P_MSC6_SPI_EACR_CLKDIV2                      *((volatile unsigned int*)(0x426E448CUL))
#define bM0P_MSC6_SPI_EACR_CLKDIV3                      *((volatile unsigned int*)(0x426E4490UL))
#define bM0P_MSC6_SPI_EACR_SYNTE                        *((volatile unsigned int*)(0x426E4498UL))
#define bM0P_MSC6_SPI_EACR_TIE                          *((volatile unsigned int*)(0x426E449CUL))
#define bM0P_MSC6_SPI_EACR_TIF                          *((volatile unsigned int*)(0x426E44A0UL))
#define bM0P_MSC6_SPI_EACR_CSER                         *((volatile unsigned int*)(0x426E44ACUL))
#define bM0P_MSC6_SPI_EACR_CSEIE                        *((volatile unsigned int*)(0x426E44B0UL))
#define bM0P_MSC6_SPI_EACR_TBEE                         *((volatile unsigned int*)(0x426E44B4UL))
#define bM0P_MSC6_SPI_TMR_TMR0                          *((volatile unsigned int*)(0x426E4500UL))
#define bM0P_MSC6_SPI_TMR_TMR1                          *((volatile unsigned int*)(0x426E4504UL))
#define bM0P_MSC6_SPI_TMR_TMR2                          *((volatile unsigned int*)(0x426E4508UL))
#define bM0P_MSC6_SPI_TMR_TMR3                          *((volatile unsigned int*)(0x426E450CUL))
#define bM0P_MSC6_SPI_TMR_TMR4                          *((volatile unsigned int*)(0x426E4510UL))
#define bM0P_MSC6_SPI_TMR_TMR5                          *((volatile unsigned int*)(0x426E4514UL))
#define bM0P_MSC6_SPI_TMR_TMR6                          *((volatile unsigned int*)(0x426E4518UL))
#define bM0P_MSC6_SPI_TMR_TMR7                          *((volatile unsigned int*)(0x426E451CUL))
#define bM0P_MSC6_SPI_TMR_TMR8                          *((volatile unsigned int*)(0x426E4520UL))
#define bM0P_MSC6_SPI_TMR_TMR9                          *((volatile unsigned int*)(0x426E4524UL))
#define bM0P_MSC6_SPI_TMR_TMR10                         *((volatile unsigned int*)(0x426E4528UL))
#define bM0P_MSC6_SPI_TMR_TMR11                         *((volatile unsigned int*)(0x426E452CUL))
#define bM0P_MSC6_SPI_TMR_TMR12                         *((volatile unsigned int*)(0x426E4530UL))
#define bM0P_MSC6_SPI_TMR_TMR13                         *((volatile unsigned int*)(0x426E4534UL))
#define bM0P_MSC6_SPI_TMR_TMR14                         *((volatile unsigned int*)(0x426E4538UL))
#define bM0P_MSC6_SPI_TMR_TMR15                         *((volatile unsigned int*)(0x426E453CUL))
#define bM0P_MSC6_SPI_TMC_TMC0                          *((volatile unsigned int*)(0x426E4580UL))
#define bM0P_MSC6_SPI_TMC_TMC1                          *((volatile unsigned int*)(0x426E4584UL))
#define bM0P_MSC6_SPI_TMC_TMC2                          *((volatile unsigned int*)(0x426E4588UL))
#define bM0P_MSC6_SPI_TMC_TMC3                          *((volatile unsigned int*)(0x426E458CUL))
#define bM0P_MSC6_SPI_TMC_TMC4                          *((volatile unsigned int*)(0x426E4590UL))
#define bM0P_MSC6_SPI_TMC_TMC5                          *((volatile unsigned int*)(0x426E4594UL))
#define bM0P_MSC6_SPI_TMC_TMC6                          *((volatile unsigned int*)(0x426E4598UL))
#define bM0P_MSC6_SPI_TMC_TMC7                          *((volatile unsigned int*)(0x426E459CUL))
#define bM0P_MSC6_SPI_TMC_TMC8                          *((volatile unsigned int*)(0x426E45A0UL))
#define bM0P_MSC6_SPI_TMC_TMC9                          *((volatile unsigned int*)(0x426E45A4UL))
#define bM0P_MSC6_SPI_TMC_TMC10                         *((volatile unsigned int*)(0x426E45A8UL))
#define bM0P_MSC6_SPI_TMC_TMC11                         *((volatile unsigned int*)(0x426E45ACUL))
#define bM0P_MSC6_SPI_TMC_TMC12                         *((volatile unsigned int*)(0x426E45B0UL))
#define bM0P_MSC6_SPI_TMC_TMC13                         *((volatile unsigned int*)(0x426E45B4UL))
#define bM0P_MSC6_SPI_TMC_TMC14                         *((volatile unsigned int*)(0x426E45B8UL))
#define bM0P_MSC6_SPI_TMC_TMC15                         *((volatile unsigned int*)(0x426E45BCUL))
#define bM0P_MSC6_SPI_CSCR_CSOE                         *((volatile unsigned int*)(0x426E4600UL))
#define bM0P_MSC6_SPI_CSCR_CSEN0                        *((volatile unsigned int*)(0x426E4604UL))
#define bM0P_MSC6_SPI_CSCR_CSEN1                        *((volatile unsigned int*)(0x426E4608UL))
#define bM0P_MSC6_SPI_CSCR_CSEN2                        *((volatile unsigned int*)(0x426E460CUL))
#define bM0P_MSC6_SPI_CSCR_CSEN3                        *((volatile unsigned int*)(0x426E4610UL))
#define bM0P_MSC6_SPI_CSCR_CSLVS                        *((volatile unsigned int*)(0x426E4614UL))
#define bM0P_MSC6_SPI_CSCR_CSTODIV0                     *((volatile unsigned int*)(0x426E4618UL))
#define bM0P_MSC6_SPI_CSCR_CSTODIV1                     *((volatile unsigned int*)(0x426E461CUL))
#define bM0P_MSC6_SPI_CSCR_CSTODIV2                     *((volatile unsigned int*)(0x426E4620UL))
#define bM0P_MSC6_SPI_CSCR_CSAH                         *((volatile unsigned int*)(0x426E4624UL))
#define bM0P_MSC6_SPI_CSCR_CASD0                        *((volatile unsigned int*)(0x426E4628UL))
#define bM0P_MSC6_SPI_CSCR_CASD1                        *((volatile unsigned int*)(0x426E462CUL))
#define bM0P_MSC6_SPI_CSCR_CSAE0                        *((volatile unsigned int*)(0x426E4630UL))
#define bM0P_MSC6_SPI_CSCR_CSAE1                        *((volatile unsigned int*)(0x426E4634UL))
#define bM0P_MSC6_SPI_CSCR_CSAS0                        *((volatile unsigned int*)(0x426E4638UL))
#define bM0P_MSC6_SPI_CSCR_CSAS1                        *((volatile unsigned int*)(0x426E463CUL))
#define bM0P_MSC6_SPI_CSFR0_CS1DL0                      *((volatile unsigned int*)(0x426E4680UL))
#define bM0P_MSC6_SPI_CSFR0_CS1DL1                      *((volatile unsigned int*)(0x426E4684UL))
#define bM0P_MSC6_SPI_CSFR0_CS1DL2                      *((volatile unsigned int*)(0x426E4688UL))
#define bM0P_MSC6_SPI_CSFR0_CS1DL3                      *((volatile unsigned int*)(0x426E468CUL))
#define bM0P_MSC6_SPI_CSFR0_CS1TDS                      *((volatile unsigned int*)(0x426E4690UL))
#define bM0P_MSC6_SPI_CSFR0_CS1SPI                      *((volatile unsigned int*)(0x426E4694UL))
#define bM0P_MSC6_SPI_CSFR0_CS1CINV                     *((volatile unsigned int*)(0x426E4698UL))
#define bM0P_MSC6_SPI_CSFR0_CS1CSLVS                    *((volatile unsigned int*)(0x426E469CUL))
#define bM0P_MSC6_SPI_CSFR1_CS2DL0                      *((volatile unsigned int*)(0x426E46A0UL))
#define bM0P_MSC6_SPI_CSFR1_CS2DL1                      *((volatile unsigned int*)(0x426E46A4UL))
#define bM0P_MSC6_SPI_CSFR1_CS2DL2                      *((volatile unsigned int*)(0x426E46A8UL))
#define bM0P_MSC6_SPI_CSFR1_CS2DL3                      *((volatile unsigned int*)(0x426E46ACUL))
#define bM0P_MSC6_SPI_CSFR1_CS2TDS                      *((volatile unsigned int*)(0x426E46B0UL))
#define bM0P_MSC6_SPI_CSFR1_CS2SPI                      *((volatile unsigned int*)(0x426E46B4UL))
#define bM0P_MSC6_SPI_CSFR1_CS2CINV                     *((volatile unsigned int*)(0x426E46B8UL))
#define bM0P_MSC6_SPI_CSFR1_CS2CSLVS                    *((volatile unsigned int*)(0x426E46BCUL))
#define bM0P_MSC6_SPI_CSFR2_CS3DL0                      *((volatile unsigned int*)(0x426E4700UL))
#define bM0P_MSC6_SPI_CSFR2_CS3DL1                      *((volatile unsigned int*)(0x426E4704UL))
#define bM0P_MSC6_SPI_CSFR2_CS3DL2                      *((volatile unsigned int*)(0x426E4708UL))
#define bM0P_MSC6_SPI_CSFR2_CS3DL3                      *((volatile unsigned int*)(0x426E470CUL))
#define bM0P_MSC6_SPI_CSFR2_CS3TDS                      *((volatile unsigned int*)(0x426E4710UL))
#define bM0P_MSC6_SPI_CSFR2_CS3SPI                      *((volatile unsigned int*)(0x426E4714UL))
#define bM0P_MSC6_SPI_CSFR2_CS3CINV                     *((volatile unsigned int*)(0x426E4718UL))
#define bM0P_MSC6_SPI_CSFR2_CS3CSLVS                    *((volatile unsigned int*)(0x426E471CUL))
#define bM0P_MSC6_SPI_TDTCNT0_TDTCNT00                  *((volatile unsigned int*)(0x426E4780UL))
#define bM0P_MSC6_SPI_TDTCNT0_TDTCNT01                  *((volatile unsigned int*)(0x426E4784UL))
#define bM0P_MSC6_SPI_TDTCNT0_TDTCNT02                  *((volatile unsigned int*)(0x426E4788UL))
#define bM0P_MSC6_SPI_TDTCNT0_TDTCNT03                  *((volatile unsigned int*)(0x426E478CUL))
#define bM0P_MSC6_SPI_TDTCNT0_TDTCNT04                  *((volatile unsigned int*)(0x426E4790UL))
#define bM0P_MSC6_SPI_TDTCNT0_TDTCNT05                  *((volatile unsigned int*)(0x426E4794UL))
#define bM0P_MSC6_SPI_TDTCNT0_TDTCNT06                  *((volatile unsigned int*)(0x426E4798UL))
#define bM0P_MSC6_SPI_TDTCNT0_TDTCNT07                  *((volatile unsigned int*)(0x426E479CUL))
#define bM0P_MSC6_SPI_TDTCNT1_TDTCNT10                  *((volatile unsigned int*)(0x426E47A0UL))
#define bM0P_MSC6_SPI_TDTCNT1_TDTCNT11                  *((volatile unsigned int*)(0x426E47A4UL))
#define bM0P_MSC6_SPI_TDTCNT1_TDTCNT12                  *((volatile unsigned int*)(0x426E47A8UL))
#define bM0P_MSC6_SPI_TDTCNT1_TDTCNT13                  *((volatile unsigned int*)(0x426E47ACUL))
#define bM0P_MSC6_SPI_TDTCNT1_TDTCNT14                  *((volatile unsigned int*)(0x426E47B0UL))
#define bM0P_MSC6_SPI_TDTCNT1_TDTCNT15                  *((volatile unsigned int*)(0x426E47B4UL))
#define bM0P_MSC6_SPI_TDTCNT1_TDTCNT16                  *((volatile unsigned int*)(0x426E47B8UL))
#define bM0P_MSC6_SPI_TDTCNT1_TDTCNT17                  *((volatile unsigned int*)(0x426E47BCUL))
#define bM0P_MSC6_SPI_TDTCNT2_TDTCNT20                  *((volatile unsigned int*)(0x426E4800UL))
#define bM0P_MSC6_SPI_TDTCNT2_TDTCNT21                  *((volatile unsigned int*)(0x426E4804UL))
#define bM0P_MSC6_SPI_TDTCNT2_TDTCNT22                  *((volatile unsigned int*)(0x426E4808UL))
#define bM0P_MSC6_SPI_TDTCNT2_TDTCNT23                  *((volatile unsigned int*)(0x426E480CUL))
#define bM0P_MSC6_SPI_TDTCNT2_TDTCNT24                  *((volatile unsigned int*)(0x426E4810UL))
#define bM0P_MSC6_SPI_TDTCNT2_TDTCNT25                  *((volatile unsigned int*)(0x426E4814UL))
#define bM0P_MSC6_SPI_TDTCNT2_TDTCNT26                  *((volatile unsigned int*)(0x426E4818UL))
#define bM0P_MSC6_SPI_TDTCNT2_TDTCNT27                  *((volatile unsigned int*)(0x426E481CUL))
#define bM0P_MSC6_SPI_TDTCNT3_TDTCNT30                  *((volatile unsigned int*)(0x426E4820UL))
#define bM0P_MSC6_SPI_TDTCNT3_TDTCNT31                  *((volatile unsigned int*)(0x426E4824UL))
#define bM0P_MSC6_SPI_TDTCNT3_TDTCNT32                  *((volatile unsigned int*)(0x426E4828UL))
#define bM0P_MSC6_SPI_TDTCNT3_TDTCNT33                  *((volatile unsigned int*)(0x426E482CUL))
#define bM0P_MSC6_SPI_TDTCNT3_TDTCNT34                  *((volatile unsigned int*)(0x426E4830UL))
#define bM0P_MSC6_SPI_TDTCNT3_TDTCNT35                  *((volatile unsigned int*)(0x426E4834UL))
#define bM0P_MSC6_SPI_TDTCNT3_TDTCNT36                  *((volatile unsigned int*)(0x426E4838UL))
#define bM0P_MSC6_SPI_TDTCNT3_TDTCNT37                  *((volatile unsigned int*)(0x426E483CUL))
#define bM0P_MSC4_UART_MR_DOE                           *((volatile unsigned int*)(0x426E0000UL))
#define bM0P_MSC4_UART_MR_TDS                           *((volatile unsigned int*)(0x426E0008UL))
#define bM0P_MSC4_UART_MR_SBLS                          *((volatile unsigned int*)(0x426E000CUL))
#define bM0P_MSC4_UART_MR_MODE0                         *((volatile unsigned int*)(0x426E0014UL))
#define bM0P_MSC4_UART_MR_MODE1                         *((volatile unsigned int*)(0x426E0018UL))
#define bM0P_MSC4_UART_MR_MODE2                         *((volatile unsigned int*)(0x426E001CUL))
#define bM0P_MSC4_UART_CR_TXE                           *((volatile unsigned int*)(0x426E0020UL))
#define bM0P_MSC4_UART_CR_RXE                           *((volatile unsigned int*)(0x426E0024UL))
#define bM0P_MSC4_UART_CR_TBIE                          *((volatile unsigned int*)(0x426E0028UL))
#define bM0P_MSC4_UART_CR_TXIE                          *((volatile unsigned int*)(0x426E002CUL))
#define bM0P_MSC4_UART_CR_RXIE                          *((volatile unsigned int*)(0x426E0030UL))
#define bM0P_MSC4_UART_CR_PCL                           *((volatile unsigned int*)(0x426E003CUL))
#define bM0P_MSC4_UART_ECR_DL0                          *((volatile unsigned int*)(0x426E0080UL))
#define bM0P_MSC4_UART_ECR_DL1                          *((volatile unsigned int*)(0x426E0084UL))
#define bM0P_MSC4_UART_ECR_DL2                          *((volatile unsigned int*)(0x426E0088UL))
#define bM0P_MSC4_UART_ECR_PS                           *((volatile unsigned int*)(0x426E008CUL))
#define bM0P_MSC4_UART_ECR_PE                           *((volatile unsigned int*)(0x426E0090UL))
#define bM0P_MSC4_UART_ECR_INV                          *((volatile unsigned int*)(0x426E0094UL))
#define bM0P_MSC4_UART_ECR_ESBLS                        *((volatile unsigned int*)(0x426E0098UL))
#define bM0P_MSC4_UART_ECR_FCEB                         *((volatile unsigned int*)(0x426E009CUL))
#define bM0P_MSC4_UART_SR_TBIF                          *((volatile unsigned int*)(0x426E00A0UL))
#define bM0P_MSC4_UART_SR_TDEF                          *((volatile unsigned int*)(0x426E00A4UL))
#define bM0P_MSC4_UART_SR_RDFF                          *((volatile unsigned int*)(0x426E00A8UL))
#define bM0P_MSC4_UART_SR_ORF                           *((volatile unsigned int*)(0x426E00ACUL))
#define bM0P_MSC4_UART_SR_FEF                           *((volatile unsigned int*)(0x426E00B0UL))
#define bM0P_MSC4_UART_SR_PEF                           *((volatile unsigned int*)(0x426E00B4UL))
#define bM0P_MSC4_UART_SR_RECLR                         *((volatile unsigned int*)(0x426E00BCUL))
#define bM0P_MSC4_UART_BRS_BRS0                         *((volatile unsigned int*)(0x426E0180UL))
#define bM0P_MSC4_UART_BRS_BRS1                         *((volatile unsigned int*)(0x426E0184UL))
#define bM0P_MSC4_UART_BRS_BRS2                         *((volatile unsigned int*)(0x426E0188UL))
#define bM0P_MSC4_UART_BRS_BRS3                         *((volatile unsigned int*)(0x426E018CUL))
#define bM0P_MSC4_UART_BRS_BRS4                         *((volatile unsigned int*)(0x426E0190UL))
#define bM0P_MSC4_UART_BRS_BRS5                         *((volatile unsigned int*)(0x426E0194UL))
#define bM0P_MSC4_UART_BRS_BRS6                         *((volatile unsigned int*)(0x426E0198UL))
#define bM0P_MSC4_UART_BRS_BRS7                         *((volatile unsigned int*)(0x426E019CUL))
#define bM0P_MSC4_UART_BRS_BRS8                         *((volatile unsigned int*)(0x426E01A0UL))
#define bM0P_MSC4_UART_BRS_BRS9                         *((volatile unsigned int*)(0x426E01A4UL))
#define bM0P_MSC4_UART_BRS_BRS10                        *((volatile unsigned int*)(0x426E01A8UL))
#define bM0P_MSC4_UART_BRS_BRS11                        *((volatile unsigned int*)(0x426E01ACUL))
#define bM0P_MSC4_UART_BRS_BRS12                        *((volatile unsigned int*)(0x426E01B0UL))
#define bM0P_MSC4_UART_BRS_BRS13                        *((volatile unsigned int*)(0x426E01B4UL))
#define bM0P_MSC4_UART_BRS_BRS14                        *((volatile unsigned int*)(0x426E01B8UL))
#define bM0P_MSC4_UART_BRS_EXT                          *((volatile unsigned int*)(0x426E01BCUL))
#define bM0P_MSC4_UART_COMP_COMP0                       *((volatile unsigned int*)(0x426E0A00UL))
#define bM0P_MSC4_UART_COMP_COMP1                       *((volatile unsigned int*)(0x426E0A04UL))
#define bM0P_MSC4_UART_COMP_COMP2                       *((volatile unsigned int*)(0x426E0A08UL))
#define bM0P_MSC4_UART_COMP_COMP3                       *((volatile unsigned int*)(0x426E0A0CUL))
#define bM0P_MSC4_UART_COMP_COMP4                       *((volatile unsigned int*)(0x426E0A10UL))
#define bM0P_MSC4_UART_COMP_COMP5                       *((volatile unsigned int*)(0x426E0A14UL))
#define bM0P_MSC4_UART_COMP_COMP6                       *((volatile unsigned int*)(0x426E0A18UL))
#define bM0P_MSC4_UART_COMP_COMP7                       *((volatile unsigned int*)(0x426E0A1CUL))
#define bM0P_MSC4_UART_COMP_COMP8                       *((volatile unsigned int*)(0x426E0A20UL))
#define bM0P_MSC4_UART_COMP_COMP9                       *((volatile unsigned int*)(0x426E0A24UL))
#define bM0P_MSC4_UART_COMP_CE                          *((volatile unsigned int*)(0x426E0A3CUL))
#define bM0P_MSC5_UART_MR_DOE                           *((volatile unsigned int*)(0x426E2000UL))
#define bM0P_MSC5_UART_MR_TDS                           *((volatile unsigned int*)(0x426E2008UL))
#define bM0P_MSC5_UART_MR_SBLS                          *((volatile unsigned int*)(0x426E200CUL))
#define bM0P_MSC5_UART_MR_MODE0                         *((volatile unsigned int*)(0x426E2014UL))
#define bM0P_MSC5_UART_MR_MODE1                         *((volatile unsigned int*)(0x426E2018UL))
#define bM0P_MSC5_UART_MR_MODE2                         *((volatile unsigned int*)(0x426E201CUL))
#define bM0P_MSC5_UART_CR_TXE                           *((volatile unsigned int*)(0x426E2020UL))
#define bM0P_MSC5_UART_CR_RXE                           *((volatile unsigned int*)(0x426E2024UL))
#define bM0P_MSC5_UART_CR_TBIE                          *((volatile unsigned int*)(0x426E2028UL))
#define bM0P_MSC5_UART_CR_TXIE                          *((volatile unsigned int*)(0x426E202CUL))
#define bM0P_MSC5_UART_CR_RXIE                          *((volatile unsigned int*)(0x426E2030UL))
#define bM0P_MSC5_UART_CR_PCL                           *((volatile unsigned int*)(0x426E203CUL))
#define bM0P_MSC5_UART_ECR_DL0                          *((volatile unsigned int*)(0x426E2080UL))
#define bM0P_MSC5_UART_ECR_DL1                          *((volatile unsigned int*)(0x426E2084UL))
#define bM0P_MSC5_UART_ECR_DL2                          *((volatile unsigned int*)(0x426E2088UL))
#define bM0P_MSC5_UART_ECR_PS                           *((volatile unsigned int*)(0x426E208CUL))
#define bM0P_MSC5_UART_ECR_PE                           *((volatile unsigned int*)(0x426E2090UL))
#define bM0P_MSC5_UART_ECR_INV                          *((volatile unsigned int*)(0x426E2094UL))
#define bM0P_MSC5_UART_ECR_ESBLS                        *((volatile unsigned int*)(0x426E2098UL))
#define bM0P_MSC5_UART_ECR_FCEB                         *((volatile unsigned int*)(0x426E209CUL))
#define bM0P_MSC5_UART_SR_TBIF                          *((volatile unsigned int*)(0x426E20A0UL))
#define bM0P_MSC5_UART_SR_TDEF                          *((volatile unsigned int*)(0x426E20A4UL))
#define bM0P_MSC5_UART_SR_RDFF                          *((volatile unsigned int*)(0x426E20A8UL))
#define bM0P_MSC5_UART_SR_ORF                           *((volatile unsigned int*)(0x426E20ACUL))
#define bM0P_MSC5_UART_SR_FEF                           *((volatile unsigned int*)(0x426E20B0UL))
#define bM0P_MSC5_UART_SR_PEF                           *((volatile unsigned int*)(0x426E20B4UL))
#define bM0P_MSC5_UART_SR_RECLR                         *((volatile unsigned int*)(0x426E20BCUL))
#define bM0P_MSC5_UART_BRS_BRS0                         *((volatile unsigned int*)(0x426E2180UL))
#define bM0P_MSC5_UART_BRS_BRS1                         *((volatile unsigned int*)(0x426E2184UL))
#define bM0P_MSC5_UART_BRS_BRS2                         *((volatile unsigned int*)(0x426E2188UL))
#define bM0P_MSC5_UART_BRS_BRS3                         *((volatile unsigned int*)(0x426E218CUL))
#define bM0P_MSC5_UART_BRS_BRS4                         *((volatile unsigned int*)(0x426E2190UL))
#define bM0P_MSC5_UART_BRS_BRS5                         *((volatile unsigned int*)(0x426E2194UL))
#define bM0P_MSC5_UART_BRS_BRS6                         *((volatile unsigned int*)(0x426E2198UL))
#define bM0P_MSC5_UART_BRS_BRS7                         *((volatile unsigned int*)(0x426E219CUL))
#define bM0P_MSC5_UART_BRS_BRS8                         *((volatile unsigned int*)(0x426E21A0UL))
#define bM0P_MSC5_UART_BRS_BRS9                         *((volatile unsigned int*)(0x426E21A4UL))
#define bM0P_MSC5_UART_BRS_BRS10                        *((volatile unsigned int*)(0x426E21A8UL))
#define bM0P_MSC5_UART_BRS_BRS11                        *((volatile unsigned int*)(0x426E21ACUL))
#define bM0P_MSC5_UART_BRS_BRS12                        *((volatile unsigned int*)(0x426E21B0UL))
#define bM0P_MSC5_UART_BRS_BRS13                        *((volatile unsigned int*)(0x426E21B4UL))
#define bM0P_MSC5_UART_BRS_BRS14                        *((volatile unsigned int*)(0x426E21B8UL))
#define bM0P_MSC5_UART_BRS_EXT                          *((volatile unsigned int*)(0x426E21BCUL))
#define bM0P_MSC5_UART_COMP_COMP0                       *((volatile unsigned int*)(0x426E2A00UL))
#define bM0P_MSC5_UART_COMP_COMP1                       *((volatile unsigned int*)(0x426E2A04UL))
#define bM0P_MSC5_UART_COMP_COMP2                       *((volatile unsigned int*)(0x426E2A08UL))
#define bM0P_MSC5_UART_COMP_COMP3                       *((volatile unsigned int*)(0x426E2A0CUL))
#define bM0P_MSC5_UART_COMP_COMP4                       *((volatile unsigned int*)(0x426E2A10UL))
#define bM0P_MSC5_UART_COMP_COMP5                       *((volatile unsigned int*)(0x426E2A14UL))
#define bM0P_MSC5_UART_COMP_COMP6                       *((volatile unsigned int*)(0x426E2A18UL))
#define bM0P_MSC5_UART_COMP_COMP7                       *((volatile unsigned int*)(0x426E2A1CUL))
#define bM0P_MSC5_UART_COMP_COMP8                       *((volatile unsigned int*)(0x426E2A20UL))
#define bM0P_MSC5_UART_COMP_COMP9                       *((volatile unsigned int*)(0x426E2A24UL))
#define bM0P_MSC5_UART_COMP_CE                          *((volatile unsigned int*)(0x426E2A3CUL))
#define bM0P_MSC6_UART_MR_DOE                           *((volatile unsigned int*)(0x426E4000UL))
#define bM0P_MSC6_UART_MR_TDS                           *((volatile unsigned int*)(0x426E4008UL))
#define bM0P_MSC6_UART_MR_SBLS                          *((volatile unsigned int*)(0x426E400CUL))
#define bM0P_MSC6_UART_MR_MODE0                         *((volatile unsigned int*)(0x426E4014UL))
#define bM0P_MSC6_UART_MR_MODE1                         *((volatile unsigned int*)(0x426E4018UL))
#define bM0P_MSC6_UART_MR_MODE2                         *((volatile unsigned int*)(0x426E401CUL))
#define bM0P_MSC6_UART_CR_TXE                           *((volatile unsigned int*)(0x426E4020UL))
#define bM0P_MSC6_UART_CR_RXE                           *((volatile unsigned int*)(0x426E4024UL))
#define bM0P_MSC6_UART_CR_TBIE                          *((volatile unsigned int*)(0x426E4028UL))
#define bM0P_MSC6_UART_CR_TXIE                          *((volatile unsigned int*)(0x426E402CUL))
#define bM0P_MSC6_UART_CR_RXIE                          *((volatile unsigned int*)(0x426E4030UL))
#define bM0P_MSC6_UART_CR_PCL                           *((volatile unsigned int*)(0x426E403CUL))
#define bM0P_MSC6_UART_ECR_DL0                          *((volatile unsigned int*)(0x426E4080UL))
#define bM0P_MSC6_UART_ECR_DL1                          *((volatile unsigned int*)(0x426E4084UL))
#define bM0P_MSC6_UART_ECR_DL2                          *((volatile unsigned int*)(0x426E4088UL))
#define bM0P_MSC6_UART_ECR_PS                           *((volatile unsigned int*)(0x426E408CUL))
#define bM0P_MSC6_UART_ECR_PE                           *((volatile unsigned int*)(0x426E4090UL))
#define bM0P_MSC6_UART_ECR_INV                          *((volatile unsigned int*)(0x426E4094UL))
#define bM0P_MSC6_UART_ECR_ESBLS                        *((volatile unsigned int*)(0x426E4098UL))
#define bM0P_MSC6_UART_ECR_FCEB                         *((volatile unsigned int*)(0x426E409CUL))
#define bM0P_MSC6_UART_SR_TBIF                          *((volatile unsigned int*)(0x426E40A0UL))
#define bM0P_MSC6_UART_SR_TDEF                          *((volatile unsigned int*)(0x426E40A4UL))
#define bM0P_MSC6_UART_SR_RDFF                          *((volatile unsigned int*)(0x426E40A8UL))
#define bM0P_MSC6_UART_SR_ORF                           *((volatile unsigned int*)(0x426E40ACUL))
#define bM0P_MSC6_UART_SR_FEF                           *((volatile unsigned int*)(0x426E40B0UL))
#define bM0P_MSC6_UART_SR_PEF                           *((volatile unsigned int*)(0x426E40B4UL))
#define bM0P_MSC6_UART_SR_RECLR                         *((volatile unsigned int*)(0x426E40BCUL))
#define bM0P_MSC6_UART_BRS_BRS0                         *((volatile unsigned int*)(0x426E4180UL))
#define bM0P_MSC6_UART_BRS_BRS1                         *((volatile unsigned int*)(0x426E4184UL))
#define bM0P_MSC6_UART_BRS_BRS2                         *((volatile unsigned int*)(0x426E4188UL))
#define bM0P_MSC6_UART_BRS_BRS3                         *((volatile unsigned int*)(0x426E418CUL))
#define bM0P_MSC6_UART_BRS_BRS4                         *((volatile unsigned int*)(0x426E4190UL))
#define bM0P_MSC6_UART_BRS_BRS5                         *((volatile unsigned int*)(0x426E4194UL))
#define bM0P_MSC6_UART_BRS_BRS6                         *((volatile unsigned int*)(0x426E4198UL))
#define bM0P_MSC6_UART_BRS_BRS7                         *((volatile unsigned int*)(0x426E419CUL))
#define bM0P_MSC6_UART_BRS_BRS8                         *((volatile unsigned int*)(0x426E41A0UL))
#define bM0P_MSC6_UART_BRS_BRS9                         *((volatile unsigned int*)(0x426E41A4UL))
#define bM0P_MSC6_UART_BRS_BRS10                        *((volatile unsigned int*)(0x426E41A8UL))
#define bM0P_MSC6_UART_BRS_BRS11                        *((volatile unsigned int*)(0x426E41ACUL))
#define bM0P_MSC6_UART_BRS_BRS12                        *((volatile unsigned int*)(0x426E41B0UL))
#define bM0P_MSC6_UART_BRS_BRS13                        *((volatile unsigned int*)(0x426E41B4UL))
#define bM0P_MSC6_UART_BRS_BRS14                        *((volatile unsigned int*)(0x426E41B8UL))
#define bM0P_MSC6_UART_BRS_EXT                          *((volatile unsigned int*)(0x426E41BCUL))
#define bM0P_MSC6_UART_COMP_COMP0                       *((volatile unsigned int*)(0x426E4A00UL))
#define bM0P_MSC6_UART_COMP_COMP1                       *((volatile unsigned int*)(0x426E4A04UL))
#define bM0P_MSC6_UART_COMP_COMP2                       *((volatile unsigned int*)(0x426E4A08UL))
#define bM0P_MSC6_UART_COMP_COMP3                       *((volatile unsigned int*)(0x426E4A0CUL))
#define bM0P_MSC6_UART_COMP_COMP4                       *((volatile unsigned int*)(0x426E4A10UL))
#define bM0P_MSC6_UART_COMP_COMP5                       *((volatile unsigned int*)(0x426E4A14UL))
#define bM0P_MSC6_UART_COMP_COMP6                       *((volatile unsigned int*)(0x426E4A18UL))
#define bM0P_MSC6_UART_COMP_COMP7                       *((volatile unsigned int*)(0x426E4A1CUL))
#define bM0P_MSC6_UART_COMP_COMP8                       *((volatile unsigned int*)(0x426E4A20UL))
#define bM0P_MSC6_UART_COMP_COMP9                       *((volatile unsigned int*)(0x426E4A24UL))
#define bM0P_MSC6_UART_COMP_CE                          *((volatile unsigned int*)(0x426E4A3CUL))
#define bM0P_OPA0_OPA_CTL_OPA_EN                        *((volatile unsigned int*)(0x42788000UL))
#define bM0P_OPA1_OPA_CTL_OPA_EN                        *((volatile unsigned int*)(0x42789000UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY0                *((volatile unsigned int*)(0x425C0000UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY1                *((volatile unsigned int*)(0x425C0004UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY2                *((volatile unsigned int*)(0x425C0008UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY3                *((volatile unsigned int*)(0x425C000CUL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY4                *((volatile unsigned int*)(0x425C0010UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY5                *((volatile unsigned int*)(0x425C0014UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY6                *((volatile unsigned int*)(0x425C0018UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY7                *((volatile unsigned int*)(0x425C001CUL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY8                *((volatile unsigned int*)(0x425C0020UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY9                *((volatile unsigned int*)(0x425C0024UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY10               *((volatile unsigned int*)(0x425C0028UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY11               *((volatile unsigned int*)(0x425C002CUL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY12               *((volatile unsigned int*)(0x425C0030UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY13               *((volatile unsigned int*)(0x425C0034UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY14               *((volatile unsigned int*)(0x425C0038UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY15               *((volatile unsigned int*)(0x425C003CUL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY16               *((volatile unsigned int*)(0x425C0040UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY17               *((volatile unsigned int*)(0x425C0044UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY18               *((volatile unsigned int*)(0x425C0048UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY19               *((volatile unsigned int*)(0x425C004CUL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY20               *((volatile unsigned int*)(0x425C0050UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY21               *((volatile unsigned int*)(0x425C0054UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY22               *((volatile unsigned int*)(0x425C0058UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY23               *((volatile unsigned int*)(0x425C005CUL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY24               *((volatile unsigned int*)(0x425C0060UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY25               *((volatile unsigned int*)(0x425C0064UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY26               *((volatile unsigned int*)(0x425C0068UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY27               *((volatile unsigned int*)(0x425C006CUL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY28               *((volatile unsigned int*)(0x425C0070UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY29               *((volatile unsigned int*)(0x425C0074UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY30               *((volatile unsigned int*)(0x425C0078UL))
#define bM0P_OSC_CTL_HICR_TRMKEY_TRMKEY31               *((volatile unsigned int*)(0x425C007CUL))
#define bM0P_OSC_CTL_HICR_FTRM_CR4MFTRM0                *((volatile unsigned int*)(0x425C0080UL))
#define bM0P_OSC_CTL_HICR_FTRM_CR4MFTRM1                *((volatile unsigned int*)(0x425C0084UL))
#define bM0P_OSC_CTL_HICR_FTRM_CR4MFTRM2                *((volatile unsigned int*)(0x425C0088UL))
#define bM0P_OSC_CTL_HICR_FTRM_CR4MFTRM3                *((volatile unsigned int*)(0x425C008CUL))
#define bM0P_OSC_CTL_HICR_FTRM_CR4MFTRM4                *((volatile unsigned int*)(0x425C0090UL))
#define bM0P_OSC_CTL_HICR_FTRM_CR4MFTRM5                *((volatile unsigned int*)(0x425C0094UL))
#define bM0P_OSC_CTL_HICR_FTRM_CR4MFTRM6                *((volatile unsigned int*)(0x425C0098UL))
#define bM0P_OSC_CTL_HICR_FTRM_CR4MFTRM7                *((volatile unsigned int*)(0x425C009CUL))
#define bM0P_OSC_CTL_HICR_TTRM_CR4MTTRM0                *((volatile unsigned int*)(0x425C0100UL))
#define bM0P_OSC_CTL_HICR_TTRM_CR4MTTRM1                *((volatile unsigned int*)(0x425C0104UL))
#define bM0P_OSC_CTL_HICR_TTRM_CR4MTTRM2                *((volatile unsigned int*)(0x425C0108UL))
#define bM0P_OSC_CTL_HICR_TTRM_CR4MTTRM3                *((volatile unsigned int*)(0x425C010CUL))
#define bM0P_OSC_CTL_HICR_FDIV_FDIV0                    *((volatile unsigned int*)(0x425C0200UL))
#define bM0P_OSC_CTL_HICR_FDIV_FDIV1                    *((volatile unsigned int*)(0x425C0204UL))
#define bM0P_OSC_CTL_HICR_FDIV_FDIV2                    *((volatile unsigned int*)(0x425C0208UL))
#define bM0P_OSC_CTL_HSXT_PWRCTL_HXSEL0                 *((volatile unsigned int*)(0x425C0400UL))
#define bM0P_OSC_CTL_HSXT_PWRCTL_HXSEL1                 *((volatile unsigned int*)(0x425C0404UL))
#define bM0P_OSC_CTL_HSXT_PWRCTL_HIBS0                  *((volatile unsigned int*)(0x425C0440UL))
#define bM0P_OSC_CTL_HSXT_PWRCTL_HIBS1                  *((volatile unsigned int*)(0x425C0444UL))
#define bM0P_OSC_CTL_LSXT_PWRCTL_LIBS0                  *((volatile unsigned int*)(0x425C0640UL))
#define bM0P_OSC_CTL_LSXT_PWRCTL_LIBS1                  *((volatile unsigned int*)(0x425C0644UL))
#define bM0P_OSC_CTL_LSXT_PWRCTL_LIBS2                  *((volatile unsigned int*)(0x425C0648UL))
#define bM0P_PARITY_PARITY_CTL_PE                       *((volatile unsigned int*)(0x42780000UL))
#define bM0P_PARITY_PARITY_CTL_PIE                      *((volatile unsigned int*)(0x42780004UL))
#define bM0P_PARITY_PARITY_CTL_PERROR                   *((volatile unsigned int*)(0x42780010UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR0                   *((volatile unsigned int*)(0x42780080UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR1                   *((volatile unsigned int*)(0x42780084UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR2                   *((volatile unsigned int*)(0x42780088UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR3                   *((volatile unsigned int*)(0x4278008CUL))
#define bM0P_PARITY_PARITY_ADDR_ADDR4                   *((volatile unsigned int*)(0x42780090UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR5                   *((volatile unsigned int*)(0x42780094UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR6                   *((volatile unsigned int*)(0x42780098UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR7                   *((volatile unsigned int*)(0x4278009CUL))
#define bM0P_PARITY_PARITY_ADDR_ADDR8                   *((volatile unsigned int*)(0x427800A0UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR9                   *((volatile unsigned int*)(0x427800A4UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR10                  *((volatile unsigned int*)(0x427800A8UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR11                  *((volatile unsigned int*)(0x427800ACUL))
#define bM0P_PARITY_PARITY_ADDR_ADDR12                  *((volatile unsigned int*)(0x427800B0UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR13                  *((volatile unsigned int*)(0x427800B4UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR14                  *((volatile unsigned int*)(0x427800B8UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR15                  *((volatile unsigned int*)(0x427800BCUL))
#define bM0P_PARITY_PARITY_ADDR_ADDR16                  *((volatile unsigned int*)(0x427800C0UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR17                  *((volatile unsigned int*)(0x427800C4UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR18                  *((volatile unsigned int*)(0x427800C8UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR19                  *((volatile unsigned int*)(0x427800CCUL))
#define bM0P_PARITY_PARITY_ADDR_ADDR20                  *((volatile unsigned int*)(0x427800D0UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR21                  *((volatile unsigned int*)(0x427800D4UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR22                  *((volatile unsigned int*)(0x427800D8UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR23                  *((volatile unsigned int*)(0x427800DCUL))
#define bM0P_PARITY_PARITY_ADDR_ADDR24                  *((volatile unsigned int*)(0x427800E0UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR25                  *((volatile unsigned int*)(0x427800E4UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR26                  *((volatile unsigned int*)(0x427800E8UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR27                  *((volatile unsigned int*)(0x427800ECUL))
#define bM0P_PARITY_PARITY_ADDR_ADDR28                  *((volatile unsigned int*)(0x427800F0UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR29                  *((volatile unsigned int*)(0x427800F4UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR30                  *((volatile unsigned int*)(0x427800F8UL))
#define bM0P_PARITY_PARITY_ADDR_ADDR31                  *((volatile unsigned int*)(0x427800FCUL))
#define bM0P_PCG_CLKEN0_MSC4CK                          *((volatile unsigned int*)(0x42782010UL))
#define bM0P_PCG_CLKEN0_MSC5CK                          *((volatile unsigned int*)(0x42782014UL))
#define bM0P_PCG_CLKEN0_MSC6CK                          *((volatile unsigned int*)(0x42782018UL))
#define bM0P_PCG_CLKEN0_ADCCK                           *((volatile unsigned int*)(0x42782040UL))
#define bM0P_PCG_CLKEN0_DMACK                           *((volatile unsigned int*)(0x42782060UL))
#define bM0P_PCG_CLKEN0_GIOCK                           *((volatile unsigned int*)(0x42782070UL))
#define bM0P_PCG_RSTCTL0_MSC4RST                        *((volatile unsigned int*)(0x42782090UL))
#define bM0P_PCG_RSTCTL0_MSC5RST                        *((volatile unsigned int*)(0x42782094UL))
#define bM0P_PCG_RSTCTL0_MSC6RST                        *((volatile unsigned int*)(0x42782098UL))
#define bM0P_PCG_RSTCTL0_ADCRST                         *((volatile unsigned int*)(0x427820C0UL))
#define bM0P_PCG_RSTCTL0_DMARST                         *((volatile unsigned int*)(0x427820E0UL))
#define bM0P_PCG_CLKEN1_CTCK                            *((volatile unsigned int*)(0x42782200UL))
#define bM0P_PCG_CLKEN1_VCCK                            *((volatile unsigned int*)(0x42782210UL))
#define bM0P_PCG_CLKEN1_TM4CK                           *((volatile unsigned int*)(0x42782220UL))
#define bM0P_PCG_CLKEN1_OPA0CK                          *((volatile unsigned int*)(0x42782230UL))
#define bM0P_PCG_CLKEN1_OPA1CK                          *((volatile unsigned int*)(0x42782234UL))
#define bM0P_PCG_RSTCTL1_CTMRST                         *((volatile unsigned int*)(0x42782280UL))
#define bM0P_PCG_RSTCTL1_VCRST                          *((volatile unsigned int*)(0x42782290UL))
#define bM0P_PCG_RSTCTL1_TM4RST                         *((volatile unsigned int*)(0x427822A0UL))
#define bM0P_PCG_RSTCTL1_OPA0RST                        *((volatile unsigned int*)(0x427822B0UL))
#define bM0P_PCG_RSTCTL1_OPA1RST                        *((volatile unsigned int*)(0x427822B4UL))
#define bM0P_SWWDT_WDT_CTL_IE                           *((volatile unsigned int*)(0x42240100UL))
#define bM0P_SWWDT_WDT_CTL_RSTEN                        *((volatile unsigned int*)(0x42240104UL))
#define bM0P_SWWDT_WDT_CTL_TMWD0                        *((volatile unsigned int*)(0x42240108UL))
#define bM0P_SWWDT_WDT_CTL_TMWD1                        *((volatile unsigned int*)(0x4224010CUL))
#define bM0P_SWWDT_WDT_CTL_WDM                          *((volatile unsigned int*)(0x42240110UL))
#define bM0P_SWWDT_WDT_STA_STA                          *((volatile unsigned int*)(0x42240200UL))
#define bM0P_SWWDT_WDT_MDC_TRG                          *((volatile unsigned int*)(0x42240300UL))
#define bM0P_TIMER4_OCSR10_OCE0                         *((volatile unsigned int*)(0x42400300UL))
#define bM0P_TIMER4_OCSR10_OCE1                         *((volatile unsigned int*)(0x42400304UL))
#define bM0P_TIMER4_OCSR10_OCP0                         *((volatile unsigned int*)(0x42400308UL))
#define bM0P_TIMER4_OCSR10_OCP1                         *((volatile unsigned int*)(0x4240030CUL))
#define bM0P_TIMER4_OCSR10_OCIE0                        *((volatile unsigned int*)(0x42400310UL))
#define bM0P_TIMER4_OCSR10_OCIE1                        *((volatile unsigned int*)(0x42400314UL))
#define bM0P_TIMER4_OCSR10_OCF0                         *((volatile unsigned int*)(0x42400318UL))
#define bM0P_TIMER4_OCSR10_OCF1                         *((volatile unsigned int*)(0x4240031CUL))
#define bM0P_TIMER4_OCER10_C0BUFEN0                     *((volatile unsigned int*)(0x42400340UL))
#define bM0P_TIMER4_OCER10_C0BUFEN1                     *((volatile unsigned int*)(0x42400344UL))
#define bM0P_TIMER4_OCER10_C1BUFEN0                     *((volatile unsigned int*)(0x42400348UL))
#define bM0P_TIMER4_OCER10_C1BUFEN1                     *((volatile unsigned int*)(0x4240034CUL))
#define bM0P_TIMER4_OCER10_M0BUFEN0                     *((volatile unsigned int*)(0x42400350UL))
#define bM0P_TIMER4_OCER10_M0BUFEN1                     *((volatile unsigned int*)(0x42400354UL))
#define bM0P_TIMER4_OCER10_M1BUFEN0                     *((volatile unsigned int*)(0x42400358UL))
#define bM0P_TIMER4_OCER10_M1BUFEN1                     *((volatile unsigned int*)(0x4240035CUL))
#define bM0P_TIMER4_OCER10_LMC0                         *((volatile unsigned int*)(0x42400360UL))
#define bM0P_TIMER4_OCER10_LMC1                         *((volatile unsigned int*)(0x42400364UL))
#define bM0P_TIMER4_OCER10_LMM0                         *((volatile unsigned int*)(0x42400368UL))
#define bM0P_TIMER4_OCER10_LMM1                         *((volatile unsigned int*)(0x4240036CUL))
#define bM0P_TIMER4_OCER10_MCEC0                        *((volatile unsigned int*)(0x42400370UL))
#define bM0P_TIMER4_OCER10_MCEC1                        *((volatile unsigned int*)(0x42400374UL))
#define bM0P_TIMER4_OCSR32_OCE0                         *((volatile unsigned int*)(0x42400380UL))
#define bM0P_TIMER4_OCSR32_OCE1                         *((volatile unsigned int*)(0x42400384UL))
#define bM0P_TIMER4_OCSR32_OCP0                         *((volatile unsigned int*)(0x42400388UL))
#define bM0P_TIMER4_OCSR32_OCP1                         *((volatile unsigned int*)(0x4240038CUL))
#define bM0P_TIMER4_OCSR32_OCIE0                        *((volatile unsigned int*)(0x42400390UL))
#define bM0P_TIMER4_OCSR32_OCIE1                        *((volatile unsigned int*)(0x42400394UL))
#define bM0P_TIMER4_OCSR32_OCF0                         *((volatile unsigned int*)(0x42400398UL))
#define bM0P_TIMER4_OCSR32_OCF1                         *((volatile unsigned int*)(0x4240039CUL))
#define bM0P_TIMER4_OCER32_C0BUFEN0                     *((volatile unsigned int*)(0x424003C0UL))
#define bM0P_TIMER4_OCER32_C0BUFEN1                     *((volatile unsigned int*)(0x424003C4UL))
#define bM0P_TIMER4_OCER32_C1BUFEN0                     *((volatile unsigned int*)(0x424003C8UL))
#define bM0P_TIMER4_OCER32_C1BUFEN1                     *((volatile unsigned int*)(0x424003CCUL))
#define bM0P_TIMER4_OCER32_M0BUFEN0                     *((volatile unsigned int*)(0x424003D0UL))
#define bM0P_TIMER4_OCER32_M0BUFEN1                     *((volatile unsigned int*)(0x424003D4UL))
#define bM0P_TIMER4_OCER32_M1BUFEN0                     *((volatile unsigned int*)(0x424003D8UL))
#define bM0P_TIMER4_OCER32_M1BUFEN1                     *((volatile unsigned int*)(0x424003DCUL))
#define bM0P_TIMER4_OCER32_LMC0                         *((volatile unsigned int*)(0x424003E0UL))
#define bM0P_TIMER4_OCER32_LMC1                         *((volatile unsigned int*)(0x424003E4UL))
#define bM0P_TIMER4_OCER32_LMM0                         *((volatile unsigned int*)(0x424003E8UL))
#define bM0P_TIMER4_OCER32_LMM1                         *((volatile unsigned int*)(0x424003ECUL))
#define bM0P_TIMER4_OCER32_MCEC0                        *((volatile unsigned int*)(0x424003F0UL))
#define bM0P_TIMER4_OCER32_MCEC1                        *((volatile unsigned int*)(0x424003F4UL))
#define bM0P_TIMER4_OCSR54_OCE0                         *((volatile unsigned int*)(0x42400400UL))
#define bM0P_TIMER4_OCSR54_OCE1                         *((volatile unsigned int*)(0x42400404UL))
#define bM0P_TIMER4_OCSR54_OCP0                         *((volatile unsigned int*)(0x42400408UL))
#define bM0P_TIMER4_OCSR54_OCP1                         *((volatile unsigned int*)(0x4240040CUL))
#define bM0P_TIMER4_OCSR54_OCIE0                        *((volatile unsigned int*)(0x42400410UL))
#define bM0P_TIMER4_OCSR54_OCIE1                        *((volatile unsigned int*)(0x42400414UL))
#define bM0P_TIMER4_OCSR54_OCF0                         *((volatile unsigned int*)(0x42400418UL))
#define bM0P_TIMER4_OCSR54_OCF1                         *((volatile unsigned int*)(0x4240041CUL))
#define bM0P_TIMER4_OCER54_C0BUFEN0                     *((volatile unsigned int*)(0x42400440UL))
#define bM0P_TIMER4_OCER54_C0BUFEN1                     *((volatile unsigned int*)(0x42400444UL))
#define bM0P_TIMER4_OCER54_C1BUFEN0                     *((volatile unsigned int*)(0x42400448UL))
#define bM0P_TIMER4_OCER54_C1BUFEN1                     *((volatile unsigned int*)(0x4240044CUL))
#define bM0P_TIMER4_OCER54_M0BUFEN0                     *((volatile unsigned int*)(0x42400450UL))
#define bM0P_TIMER4_OCER54_M0BUFEN1                     *((volatile unsigned int*)(0x42400454UL))
#define bM0P_TIMER4_OCER54_M1BUFEN0                     *((volatile unsigned int*)(0x42400458UL))
#define bM0P_TIMER4_OCER54_M1BUFEN1                     *((volatile unsigned int*)(0x4240045CUL))
#define bM0P_TIMER4_OCER54_LMC0                         *((volatile unsigned int*)(0x42400460UL))
#define bM0P_TIMER4_OCER54_LMC1                         *((volatile unsigned int*)(0x42400464UL))
#define bM0P_TIMER4_OCER54_LMM0                         *((volatile unsigned int*)(0x42400468UL))
#define bM0P_TIMER4_OCER54_LMM1                         *((volatile unsigned int*)(0x4240046CUL))
#define bM0P_TIMER4_OCER54_MCEC0                        *((volatile unsigned int*)(0x42400470UL))
#define bM0P_TIMER4_OCER54_MCEC1                        *((volatile unsigned int*)(0x42400474UL))
#define bM0P_TIMER4_OCMR0_OCMR0                         *((volatile unsigned int*)(0x42400480UL))
#define bM0P_TIMER4_OCMR0_OCMR1                         *((volatile unsigned int*)(0x42400484UL))
#define bM0P_TIMER4_OCMR0_OCMR2                         *((volatile unsigned int*)(0x42400488UL))
#define bM0P_TIMER4_OCMR0_OCMR3                         *((volatile unsigned int*)(0x4240048CUL))
#define bM0P_TIMER4_OCMR0_OCMR4                         *((volatile unsigned int*)(0x42400490UL))
#define bM0P_TIMER4_OCMR0_OCMR5                         *((volatile unsigned int*)(0x42400494UL))
#define bM0P_TIMER4_OCMR0_OCMR6                         *((volatile unsigned int*)(0x42400498UL))
#define bM0P_TIMER4_OCMR0_OCMR7                         *((volatile unsigned int*)(0x4240049CUL))
#define bM0P_TIMER4_OCMR0_OCMR8                         *((volatile unsigned int*)(0x424004A0UL))
#define bM0P_TIMER4_OCMR0_OCMR9                         *((volatile unsigned int*)(0x424004A4UL))
#define bM0P_TIMER4_OCMR0_OCMR10                        *((volatile unsigned int*)(0x424004A8UL))
#define bM0P_TIMER4_OCMR0_OCMR11                        *((volatile unsigned int*)(0x424004ACUL))
#define bM0P_TIMER4_OCMR0_OCMR12                        *((volatile unsigned int*)(0x424004B0UL))
#define bM0P_TIMER4_OCMR0_OCMR13                        *((volatile unsigned int*)(0x424004B4UL))
#define bM0P_TIMER4_OCMR0_OCMR14                        *((volatile unsigned int*)(0x424004B8UL))
#define bM0P_TIMER4_OCMR0_OCMR15                        *((volatile unsigned int*)(0x424004BCUL))
#define bM0P_TIMER4_OCMR1_OCMR0                         *((volatile unsigned int*)(0x42400500UL))
#define bM0P_TIMER4_OCMR1_OCMR1                         *((volatile unsigned int*)(0x42400504UL))
#define bM0P_TIMER4_OCMR1_OCMR2                         *((volatile unsigned int*)(0x42400508UL))
#define bM0P_TIMER4_OCMR1_OCMR3                         *((volatile unsigned int*)(0x4240050CUL))
#define bM0P_TIMER4_OCMR1_OCMR4                         *((volatile unsigned int*)(0x42400510UL))
#define bM0P_TIMER4_OCMR1_OCMR5                         *((volatile unsigned int*)(0x42400514UL))
#define bM0P_TIMER4_OCMR1_OCMR6                         *((volatile unsigned int*)(0x42400518UL))
#define bM0P_TIMER4_OCMR1_OCMR7                         *((volatile unsigned int*)(0x4240051CUL))
#define bM0P_TIMER4_OCMR1_OCMR8                         *((volatile unsigned int*)(0x42400520UL))
#define bM0P_TIMER4_OCMR1_OCMR9                         *((volatile unsigned int*)(0x42400524UL))
#define bM0P_TIMER4_OCMR1_OCMR10                        *((volatile unsigned int*)(0x42400528UL))
#define bM0P_TIMER4_OCMR1_OCMR11                        *((volatile unsigned int*)(0x4240052CUL))
#define bM0P_TIMER4_OCMR1_OCMR12                        *((volatile unsigned int*)(0x42400530UL))
#define bM0P_TIMER4_OCMR1_OCMR13                        *((volatile unsigned int*)(0x42400534UL))
#define bM0P_TIMER4_OCMR1_OCMR14                        *((volatile unsigned int*)(0x42400538UL))
#define bM0P_TIMER4_OCMR1_OCMR15                        *((volatile unsigned int*)(0x4240053CUL))
#define bM0P_TIMER4_OCMR1_OCMR16                        *((volatile unsigned int*)(0x42400540UL))
#define bM0P_TIMER4_OCMR1_OCMR17                        *((volatile unsigned int*)(0x42400544UL))
#define bM0P_TIMER4_OCMR1_OCMR18                        *((volatile unsigned int*)(0x42400548UL))
#define bM0P_TIMER4_OCMR1_OCMR19                        *((volatile unsigned int*)(0x4240054CUL))
#define bM0P_TIMER4_OCMR1_OCMR20                        *((volatile unsigned int*)(0x42400550UL))
#define bM0P_TIMER4_OCMR1_OCMR21                        *((volatile unsigned int*)(0x42400554UL))
#define bM0P_TIMER4_OCMR1_OCMR22                        *((volatile unsigned int*)(0x42400558UL))
#define bM0P_TIMER4_OCMR1_OCMR23                        *((volatile unsigned int*)(0x4240055CUL))
#define bM0P_TIMER4_OCMR1_OCMR24                        *((volatile unsigned int*)(0x42400560UL))
#define bM0P_TIMER4_OCMR1_OCMR25                        *((volatile unsigned int*)(0x42400564UL))
#define bM0P_TIMER4_OCMR1_OCMR26                        *((volatile unsigned int*)(0x42400568UL))
#define bM0P_TIMER4_OCMR1_OCMR27                        *((volatile unsigned int*)(0x4240056CUL))
#define bM0P_TIMER4_OCMR1_OCMR28                        *((volatile unsigned int*)(0x42400570UL))
#define bM0P_TIMER4_OCMR1_OCMR29                        *((volatile unsigned int*)(0x42400574UL))
#define bM0P_TIMER4_OCMR1_OCMR30                        *((volatile unsigned int*)(0x42400578UL))
#define bM0P_TIMER4_OCMR1_OCMR31                        *((volatile unsigned int*)(0x4240057CUL))
#define bM0P_TIMER4_OCMR2_OCMR0                         *((volatile unsigned int*)(0x42400580UL))
#define bM0P_TIMER4_OCMR2_OCMR1                         *((volatile unsigned int*)(0x42400584UL))
#define bM0P_TIMER4_OCMR2_OCMR2                         *((volatile unsigned int*)(0x42400588UL))
#define bM0P_TIMER4_OCMR2_OCMR3                         *((volatile unsigned int*)(0x4240058CUL))
#define bM0P_TIMER4_OCMR2_OCMR4                         *((volatile unsigned int*)(0x42400590UL))
#define bM0P_TIMER4_OCMR2_OCMR5                         *((volatile unsigned int*)(0x42400594UL))
#define bM0P_TIMER4_OCMR2_OCMR6                         *((volatile unsigned int*)(0x42400598UL))
#define bM0P_TIMER4_OCMR2_OCMR7                         *((volatile unsigned int*)(0x4240059CUL))
#define bM0P_TIMER4_OCMR2_OCMR8                         *((volatile unsigned int*)(0x424005A0UL))
#define bM0P_TIMER4_OCMR2_OCMR9                         *((volatile unsigned int*)(0x424005A4UL))
#define bM0P_TIMER4_OCMR2_OCMR10                        *((volatile unsigned int*)(0x424005A8UL))
#define bM0P_TIMER4_OCMR2_OCMR11                        *((volatile unsigned int*)(0x424005ACUL))
#define bM0P_TIMER4_OCMR2_OCMR12                        *((volatile unsigned int*)(0x424005B0UL))
#define bM0P_TIMER4_OCMR2_OCMR13                        *((volatile unsigned int*)(0x424005B4UL))
#define bM0P_TIMER4_OCMR2_OCMR14                        *((volatile unsigned int*)(0x424005B8UL))
#define bM0P_TIMER4_OCMR2_OCMR15                        *((volatile unsigned int*)(0x424005BCUL))
#define bM0P_TIMER4_OCMR3_OCMR0                         *((volatile unsigned int*)(0x42400600UL))
#define bM0P_TIMER4_OCMR3_OCMR1                         *((volatile unsigned int*)(0x42400604UL))
#define bM0P_TIMER4_OCMR3_OCMR2                         *((volatile unsigned int*)(0x42400608UL))
#define bM0P_TIMER4_OCMR3_OCMR3                         *((volatile unsigned int*)(0x4240060CUL))
#define bM0P_TIMER4_OCMR3_OCMR4                         *((volatile unsigned int*)(0x42400610UL))
#define bM0P_TIMER4_OCMR3_OCMR5                         *((volatile unsigned int*)(0x42400614UL))
#define bM0P_TIMER4_OCMR3_OCMR6                         *((volatile unsigned int*)(0x42400618UL))
#define bM0P_TIMER4_OCMR3_OCMR7                         *((volatile unsigned int*)(0x4240061CUL))
#define bM0P_TIMER4_OCMR3_OCMR8                         *((volatile unsigned int*)(0x42400620UL))
#define bM0P_TIMER4_OCMR3_OCMR9                         *((volatile unsigned int*)(0x42400624UL))
#define bM0P_TIMER4_OCMR3_OCMR10                        *((volatile unsigned int*)(0x42400628UL))
#define bM0P_TIMER4_OCMR3_OCMR11                        *((volatile unsigned int*)(0x4240062CUL))
#define bM0P_TIMER4_OCMR3_OCMR12                        *((volatile unsigned int*)(0x42400630UL))
#define bM0P_TIMER4_OCMR3_OCMR13                        *((volatile unsigned int*)(0x42400634UL))
#define bM0P_TIMER4_OCMR3_OCMR14                        *((volatile unsigned int*)(0x42400638UL))
#define bM0P_TIMER4_OCMR3_OCMR15                        *((volatile unsigned int*)(0x4240063CUL))
#define bM0P_TIMER4_OCMR3_OCMR16                        *((volatile unsigned int*)(0x42400640UL))
#define bM0P_TIMER4_OCMR3_OCMR17                        *((volatile unsigned int*)(0x42400644UL))
#define bM0P_TIMER4_OCMR3_OCMR18                        *((volatile unsigned int*)(0x42400648UL))
#define bM0P_TIMER4_OCMR3_OCMR19                        *((volatile unsigned int*)(0x4240064CUL))
#define bM0P_TIMER4_OCMR3_OCMR20                        *((volatile unsigned int*)(0x42400650UL))
#define bM0P_TIMER4_OCMR3_OCMR21                        *((volatile unsigned int*)(0x42400654UL))
#define bM0P_TIMER4_OCMR3_OCMR22                        *((volatile unsigned int*)(0x42400658UL))
#define bM0P_TIMER4_OCMR3_OCMR23                        *((volatile unsigned int*)(0x4240065CUL))
#define bM0P_TIMER4_OCMR3_OCMR24                        *((volatile unsigned int*)(0x42400660UL))
#define bM0P_TIMER4_OCMR3_OCMR25                        *((volatile unsigned int*)(0x42400664UL))
#define bM0P_TIMER4_OCMR3_OCMR26                        *((volatile unsigned int*)(0x42400668UL))
#define bM0P_TIMER4_OCMR3_OCMR27                        *((volatile unsigned int*)(0x4240066CUL))
#define bM0P_TIMER4_OCMR3_OCMR28                        *((volatile unsigned int*)(0x42400670UL))
#define bM0P_TIMER4_OCMR3_OCMR29                        *((volatile unsigned int*)(0x42400674UL))
#define bM0P_TIMER4_OCMR3_OCMR30                        *((volatile unsigned int*)(0x42400678UL))
#define bM0P_TIMER4_OCMR3_OCMR31                        *((volatile unsigned int*)(0x4240067CUL))
#define bM0P_TIMER4_OCMR4_OCMR0                         *((volatile unsigned int*)(0x42400680UL))
#define bM0P_TIMER4_OCMR4_OCMR1                         *((volatile unsigned int*)(0x42400684UL))
#define bM0P_TIMER4_OCMR4_OCMR2                         *((volatile unsigned int*)(0x42400688UL))
#define bM0P_TIMER4_OCMR4_OCMR3                         *((volatile unsigned int*)(0x4240068CUL))
#define bM0P_TIMER4_OCMR4_OCMR4                         *((volatile unsigned int*)(0x42400690UL))
#define bM0P_TIMER4_OCMR4_OCMR5                         *((volatile unsigned int*)(0x42400694UL))
#define bM0P_TIMER4_OCMR4_OCMR6                         *((volatile unsigned int*)(0x42400698UL))
#define bM0P_TIMER4_OCMR4_OCMR7                         *((volatile unsigned int*)(0x4240069CUL))
#define bM0P_TIMER4_OCMR4_OCMR8                         *((volatile unsigned int*)(0x424006A0UL))
#define bM0P_TIMER4_OCMR4_OCMR9                         *((volatile unsigned int*)(0x424006A4UL))
#define bM0P_TIMER4_OCMR4_OCMR10                        *((volatile unsigned int*)(0x424006A8UL))
#define bM0P_TIMER4_OCMR4_OCMR11                        *((volatile unsigned int*)(0x424006ACUL))
#define bM0P_TIMER4_OCMR4_OCMR12                        *((volatile unsigned int*)(0x424006B0UL))
#define bM0P_TIMER4_OCMR4_OCMR13                        *((volatile unsigned int*)(0x424006B4UL))
#define bM0P_TIMER4_OCMR4_OCMR14                        *((volatile unsigned int*)(0x424006B8UL))
#define bM0P_TIMER4_OCMR4_OCMR15                        *((volatile unsigned int*)(0x424006BCUL))
#define bM0P_TIMER4_OCMR5_OCMR0                         *((volatile unsigned int*)(0x42400700UL))
#define bM0P_TIMER4_OCMR5_OCMR1                         *((volatile unsigned int*)(0x42400704UL))
#define bM0P_TIMER4_OCMR5_OCMR2                         *((volatile unsigned int*)(0x42400708UL))
#define bM0P_TIMER4_OCMR5_OCMR3                         *((volatile unsigned int*)(0x4240070CUL))
#define bM0P_TIMER4_OCMR5_OCMR4                         *((volatile unsigned int*)(0x42400710UL))
#define bM0P_TIMER4_OCMR5_OCMR5                         *((volatile unsigned int*)(0x42400714UL))
#define bM0P_TIMER4_OCMR5_OCMR6                         *((volatile unsigned int*)(0x42400718UL))
#define bM0P_TIMER4_OCMR5_OCMR7                         *((volatile unsigned int*)(0x4240071CUL))
#define bM0P_TIMER4_OCMR5_OCMR8                         *((volatile unsigned int*)(0x42400720UL))
#define bM0P_TIMER4_OCMR5_OCMR9                         *((volatile unsigned int*)(0x42400724UL))
#define bM0P_TIMER4_OCMR5_OCMR10                        *((volatile unsigned int*)(0x42400728UL))
#define bM0P_TIMER4_OCMR5_OCMR11                        *((volatile unsigned int*)(0x4240072CUL))
#define bM0P_TIMER4_OCMR5_OCMR12                        *((volatile unsigned int*)(0x42400730UL))
#define bM0P_TIMER4_OCMR5_OCMR13                        *((volatile unsigned int*)(0x42400734UL))
#define bM0P_TIMER4_OCMR5_OCMR14                        *((volatile unsigned int*)(0x42400738UL))
#define bM0P_TIMER4_OCMR5_OCMR15                        *((volatile unsigned int*)(0x4240073CUL))
#define bM0P_TIMER4_OCMR5_OCMR16                        *((volatile unsigned int*)(0x42400740UL))
#define bM0P_TIMER4_OCMR5_OCMR17                        *((volatile unsigned int*)(0x42400744UL))
#define bM0P_TIMER4_OCMR5_OCMR18                        *((volatile unsigned int*)(0x42400748UL))
#define bM0P_TIMER4_OCMR5_OCMR19                        *((volatile unsigned int*)(0x4240074CUL))
#define bM0P_TIMER4_OCMR5_OCMR20                        *((volatile unsigned int*)(0x42400750UL))
#define bM0P_TIMER4_OCMR5_OCMR21                        *((volatile unsigned int*)(0x42400754UL))
#define bM0P_TIMER4_OCMR5_OCMR22                        *((volatile unsigned int*)(0x42400758UL))
#define bM0P_TIMER4_OCMR5_OCMR23                        *((volatile unsigned int*)(0x4240075CUL))
#define bM0P_TIMER4_OCMR5_OCMR24                        *((volatile unsigned int*)(0x42400760UL))
#define bM0P_TIMER4_OCMR5_OCMR25                        *((volatile unsigned int*)(0x42400764UL))
#define bM0P_TIMER4_OCMR5_OCMR26                        *((volatile unsigned int*)(0x42400768UL))
#define bM0P_TIMER4_OCMR5_OCMR27                        *((volatile unsigned int*)(0x4240076CUL))
#define bM0P_TIMER4_OCMR5_OCMR28                        *((volatile unsigned int*)(0x42400770UL))
#define bM0P_TIMER4_OCMR5_OCMR29                        *((volatile unsigned int*)(0x42400774UL))
#define bM0P_TIMER4_OCMR5_OCMR30                        *((volatile unsigned int*)(0x42400778UL))
#define bM0P_TIMER4_OCMR5_OCMR31                        *((volatile unsigned int*)(0x4240077CUL))
#define bM0P_TIMER4_CCSR_DCLK0                          *((volatile unsigned int*)(0x42400900UL))
#define bM0P_TIMER4_CCSR_DCLK1                          *((volatile unsigned int*)(0x42400904UL))
#define bM0P_TIMER4_CCSR_DCLK2                          *((volatile unsigned int*)(0x42400908UL))
#define bM0P_TIMER4_CCSR_DCLK3                          *((volatile unsigned int*)(0x4240090CUL))
#define bM0P_TIMER4_CCSR_CLEAR                          *((volatile unsigned int*)(0x42400910UL))
#define bM0P_TIMER4_CCSR_CNTMD                          *((volatile unsigned int*)(0x42400914UL))
#define bM0P_TIMER4_CCSR_STOP                           *((volatile unsigned int*)(0x42400918UL))
#define bM0P_TIMER4_CCSR_BUFEN                          *((volatile unsigned int*)(0x4240091CUL))
#define bM0P_TIMER4_CCSR_ICLEN                          *((volatile unsigned int*)(0x42400920UL))
#define bM0P_TIMER4_CCSR_ICLR                           *((volatile unsigned int*)(0x42400924UL))
#define bM0P_TIMER4_CCSR_IRQZEN                         *((volatile unsigned int*)(0x42400934UL))
#define bM0P_TIMER4_CCSR_IRQZF                          *((volatile unsigned int*)(0x42400938UL))
#define bM0P_TIMER4_CCSR_ECKEN                          *((volatile unsigned int*)(0x4240093CUL))
#define bM0P_TIMER4_CIMR_ZIM0                           *((volatile unsigned int*)(0x42400940UL))
#define bM0P_TIMER4_CIMR_ZIM1                           *((volatile unsigned int*)(0x42400944UL))
#define bM0P_TIMER4_CIMR_ZIM2                           *((volatile unsigned int*)(0x42400948UL))
#define bM0P_TIMER4_CIMR_ZIM3                           *((volatile unsigned int*)(0x4240094CUL))
#define bM0P_TIMER4_CIMR_PIM0                           *((volatile unsigned int*)(0x42400950UL))
#define bM0P_TIMER4_CIMR_PIM1                           *((volatile unsigned int*)(0x42400954UL))
#define bM0P_TIMER4_CIMR_PIM2                           *((volatile unsigned int*)(0x42400958UL))
#define bM0P_TIMER4_CIMR_PIM3                           *((volatile unsigned int*)(0x4240095CUL))
#define bM0P_TIMER4_CIMR_ZIC0                           *((volatile unsigned int*)(0x42400960UL))
#define bM0P_TIMER4_CIMR_ZIC1                           *((volatile unsigned int*)(0x42400964UL))
#define bM0P_TIMER4_CIMR_ZIC2                           *((volatile unsigned int*)(0x42400968UL))
#define bM0P_TIMER4_CIMR_ZIC3                           *((volatile unsigned int*)(0x4240096CUL))
#define bM0P_TIMER4_CIMR_PIC0                           *((volatile unsigned int*)(0x42400970UL))
#define bM0P_TIMER4_CIMR_PIC1                           *((volatile unsigned int*)(0x42400974UL))
#define bM0P_TIMER4_CIMR_PIC2                           *((volatile unsigned int*)(0x42400978UL))
#define bM0P_TIMER4_CIMR_PIC3                           *((volatile unsigned int*)(0x4240097CUL))
#define bM0P_TIMER4_POCR10_DIVCK0                       *((volatile unsigned int*)(0x42401300UL))
#define bM0P_TIMER4_POCR10_DIVCK1                       *((volatile unsigned int*)(0x42401304UL))
#define bM0P_TIMER4_POCR10_DIVCK2                       *((volatile unsigned int*)(0x42401308UL))
#define bM0P_TIMER4_POCR10_WMD0                         *((volatile unsigned int*)(0x42401310UL))
#define bM0P_TIMER4_POCR10_WMD1                         *((volatile unsigned int*)(0x42401314UL))
#define bM0P_TIMER4_POCR10_LVLS0                        *((volatile unsigned int*)(0x42401318UL))
#define bM0P_TIMER4_POCR10_LVLS1                        *((volatile unsigned int*)(0x4240131CUL))
#define bM0P_TIMER4_POCR32_DIVCK0                       *((volatile unsigned int*)(0x42401380UL))
#define bM0P_TIMER4_POCR32_DIVCK1                       *((volatile unsigned int*)(0x42401384UL))
#define bM0P_TIMER4_POCR32_DIVCK2                       *((volatile unsigned int*)(0x42401388UL))
#define bM0P_TIMER4_POCR32_WMD0                         *((volatile unsigned int*)(0x42401390UL))
#define bM0P_TIMER4_POCR32_WMD1                         *((volatile unsigned int*)(0x42401394UL))
#define bM0P_TIMER4_POCR32_LVLS0                        *((volatile unsigned int*)(0x42401398UL))
#define bM0P_TIMER4_POCR32_LVLS1                        *((volatile unsigned int*)(0x4240139CUL))
#define bM0P_TIMER4_POCR54_DIVCK0                       *((volatile unsigned int*)(0x42401400UL))
#define bM0P_TIMER4_POCR54_DIVCK1                       *((volatile unsigned int*)(0x42401404UL))
#define bM0P_TIMER4_POCR54_DIVCK2                       *((volatile unsigned int*)(0x42401408UL))
#define bM0P_TIMER4_POCR54_WMD0                         *((volatile unsigned int*)(0x42401410UL))
#define bM0P_TIMER4_POCR54_WMD1                         *((volatile unsigned int*)(0x42401414UL))
#define bM0P_TIMER4_POCR54_LVLS0                        *((volatile unsigned int*)(0x42401418UL))
#define bM0P_TIMER4_POCR54_LVLS1                        *((volatile unsigned int*)(0x4240141CUL))
#define bM0P_TIMER4_RCSR_RTID10                         *((volatile unsigned int*)(0x42401480UL))
#define bM0P_TIMER4_RCSR_RTID32                         *((volatile unsigned int*)(0x42401484UL))
#define bM0P_TIMER4_RCSR_RTID54                         *((volatile unsigned int*)(0x42401488UL))
#define bM0P_TIMER4_RCSR_RTIF10                         *((volatile unsigned int*)(0x42401490UL))
#define bM0P_TIMER4_RCSR_RTIC10                         *((volatile unsigned int*)(0x42401494UL))
#define bM0P_TIMER4_RCSR_RTE10                          *((volatile unsigned int*)(0x42401498UL))
#define bM0P_TIMER4_RCSR_RTS10                          *((volatile unsigned int*)(0x4240149CUL))
#define bM0P_TIMER4_RCSR_RTIF32                         *((volatile unsigned int*)(0x424014A0UL))
#define bM0P_TIMER4_RCSR_RTIC32                         *((volatile unsigned int*)(0x424014A4UL))
#define bM0P_TIMER4_RCSR_RTE32                          *((volatile unsigned int*)(0x424014A8UL))
#define bM0P_TIMER4_RCSR_RTS32                          *((volatile unsigned int*)(0x424014ACUL))
#define bM0P_TIMER4_RCSR_RTIF54                         *((volatile unsigned int*)(0x424014B0UL))
#define bM0P_TIMER4_RCSR_RTIC54                         *((volatile unsigned int*)(0x424014B4UL))
#define bM0P_TIMER4_RCSR_RTE54                          *((volatile unsigned int*)(0x424014B8UL))
#define bM0P_TIMER4_RCSR_RTS54                          *((volatile unsigned int*)(0x424014BCUL))
#define bM0P_TIMER4_ATCR0_BUFEN0                        *((volatile unsigned int*)(0x42401900UL))
#define bM0P_TIMER4_ATCR0_BUFEN1                        *((volatile unsigned int*)(0x42401904UL))
#define bM0P_TIMER4_ATCR0_ADTRGS0                       *((volatile unsigned int*)(0x42401908UL))
#define bM0P_TIMER4_ATCR0_ADTRGS1                       *((volatile unsigned int*)(0x4240190CUL))
#define bM0P_TIMER4_ATCR0_ADTRGS2                       *((volatile unsigned int*)(0x42401910UL))
#define bM0P_TIMER4_ATCR0_LMC                           *((volatile unsigned int*)(0x42401914UL))
#define bM0P_TIMER4_ATER0_TRGMD                         *((volatile unsigned int*)(0x42401920UL))
#define bM0P_TIMER4_ATER0_OCS                           *((volatile unsigned int*)(0x42401924UL))
#define bM0P_TIMER4_ATER0_DEN                           *((volatile unsigned int*)(0x42401930UL))
#define bM0P_TIMER4_ATER0_PEN                           *((volatile unsigned int*)(0x42401934UL))
#define bM0P_TIMER4_ATER0_UEN                           *((volatile unsigned int*)(0x42401938UL))
#define bM0P_TIMER4_ATER0_ZEN                           *((volatile unsigned int*)(0x4240193CUL))
#define bM0P_TIMER4_ATMR0_AMC0                          *((volatile unsigned int*)(0x42401940UL))
#define bM0P_TIMER4_ATMR0_AMC1                          *((volatile unsigned int*)(0x42401944UL))
#define bM0P_TIMER4_ATMR0_AMC2                          *((volatile unsigned int*)(0x42401948UL))
#define bM0P_TIMER4_ATMR0_AMC3                          *((volatile unsigned int*)(0x4240194CUL))
#define bM0P_TIMER4_ATMR0_MZCE                          *((volatile unsigned int*)(0x42401958UL))
#define bM0P_TIMER4_ATMR0_MPCE                          *((volatile unsigned int*)(0x4240195CUL))
#define bM0P_TIMER4_ATCR1_BUFEN0                        *((volatile unsigned int*)(0x42401980UL))
#define bM0P_TIMER4_ATCR1_BUFEN1                        *((volatile unsigned int*)(0x42401984UL))
#define bM0P_TIMER4_ATCR1_ADTRGS0                       *((volatile unsigned int*)(0x42401988UL))
#define bM0P_TIMER4_ATCR1_ADTRGS1                       *((volatile unsigned int*)(0x4240198CUL))
#define bM0P_TIMER4_ATCR1_ADTRGS2                       *((volatile unsigned int*)(0x42401990UL))
#define bM0P_TIMER4_ATCR1_LMC                           *((volatile unsigned int*)(0x42401994UL))
#define bM0P_TIMER4_ATER1_TRGMD                         *((volatile unsigned int*)(0x424019A0UL))
#define bM0P_TIMER4_ATER1_OCS                           *((volatile unsigned int*)(0x424019A4UL))
#define bM0P_TIMER4_ATER1_DEN                           *((volatile unsigned int*)(0x424019B0UL))
#define bM0P_TIMER4_ATER1_PEN                           *((volatile unsigned int*)(0x424019B4UL))
#define bM0P_TIMER4_ATER1_UEN                           *((volatile unsigned int*)(0x424019B8UL))
#define bM0P_TIMER4_ATER1_ZEN                           *((volatile unsigned int*)(0x424019BCUL))
#define bM0P_TIMER4_ATMR1_AMC0                          *((volatile unsigned int*)(0x424019C0UL))
#define bM0P_TIMER4_ATMR1_AMC1                          *((volatile unsigned int*)(0x424019C4UL))
#define bM0P_TIMER4_ATMR1_AMC2                          *((volatile unsigned int*)(0x424019C8UL))
#define bM0P_TIMER4_ATMR1_AMC3                          *((volatile unsigned int*)(0x424019CCUL))
#define bM0P_TIMER4_ATMR1_MZCE                          *((volatile unsigned int*)(0x424019D8UL))
#define bM0P_TIMER4_ATMR1_MPCE                          *((volatile unsigned int*)(0x424019DCUL))
#define bM0P_TIMER4_ATCR2_BUFEN0                        *((volatile unsigned int*)(0x42401A00UL))
#define bM0P_TIMER4_ATCR2_BUFEN1                        *((volatile unsigned int*)(0x42401A04UL))
#define bM0P_TIMER4_ATCR2_ADTRGS0                       *((volatile unsigned int*)(0x42401A08UL))
#define bM0P_TIMER4_ATCR2_ADTRGS1                       *((volatile unsigned int*)(0x42401A0CUL))
#define bM0P_TIMER4_ATCR2_ADTRGS2                       *((volatile unsigned int*)(0x42401A10UL))
#define bM0P_TIMER4_ATCR2_LMC                           *((volatile unsigned int*)(0x42401A14UL))
#define bM0P_TIMER4_ATER2_TRGMD                         *((volatile unsigned int*)(0x42401A20UL))
#define bM0P_TIMER4_ATER2_OCS                           *((volatile unsigned int*)(0x42401A24UL))
#define bM0P_TIMER4_ATER2_DEN                           *((volatile unsigned int*)(0x42401A30UL))
#define bM0P_TIMER4_ATER2_PEN                           *((volatile unsigned int*)(0x42401A34UL))
#define bM0P_TIMER4_ATER2_UEN                           *((volatile unsigned int*)(0x42401A38UL))
#define bM0P_TIMER4_ATER2_ZEN                           *((volatile unsigned int*)(0x42401A3CUL))
#define bM0P_TIMER4_ATMR2_AMC0                          *((volatile unsigned int*)(0x42401A40UL))
#define bM0P_TIMER4_ATMR2_AMC1                          *((volatile unsigned int*)(0x42401A44UL))
#define bM0P_TIMER4_ATMR2_AMC2                          *((volatile unsigned int*)(0x42401A48UL))
#define bM0P_TIMER4_ATMR2_AMC3                          *((volatile unsigned int*)(0x42401A4CUL))
#define bM0P_TIMER4_ATMR2_MZCE                          *((volatile unsigned int*)(0x42401A58UL))
#define bM0P_TIMER4_ATMR2_MPCE                          *((volatile unsigned int*)(0x42401A5CUL))
#define bM0P_TIMER4_ATCR3_BUFEN0                        *((volatile unsigned int*)(0x42401A80UL))
#define bM0P_TIMER4_ATCR3_BUFEN1                        *((volatile unsigned int*)(0x42401A84UL))
#define bM0P_TIMER4_ATCR3_ADTRGS0                       *((volatile unsigned int*)(0x42401A88UL))
#define bM0P_TIMER4_ATCR3_ADTRGS1                       *((volatile unsigned int*)(0x42401A8CUL))
#define bM0P_TIMER4_ATCR3_ADTRGS2                       *((volatile unsigned int*)(0x42401A90UL))
#define bM0P_TIMER4_ATCR3_LMC                           *((volatile unsigned int*)(0x42401A94UL))
#define bM0P_TIMER4_ATER3_TRGMD                         *((volatile unsigned int*)(0x42401AA0UL))
#define bM0P_TIMER4_ATER3_OCS                           *((volatile unsigned int*)(0x42401AA4UL))
#define bM0P_TIMER4_ATER3_DEN                           *((volatile unsigned int*)(0x42401AB0UL))
#define bM0P_TIMER4_ATER3_PEN                           *((volatile unsigned int*)(0x42401AB4UL))
#define bM0P_TIMER4_ATER3_UEN                           *((volatile unsigned int*)(0x42401AB8UL))
#define bM0P_TIMER4_ATER3_ZEN                           *((volatile unsigned int*)(0x42401ABCUL))
#define bM0P_TIMER4_ATMR3_AMC0                          *((volatile unsigned int*)(0x42401AC0UL))
#define bM0P_TIMER4_ATMR3_AMC1                          *((volatile unsigned int*)(0x42401AC4UL))
#define bM0P_TIMER4_ATMR3_AMC2                          *((volatile unsigned int*)(0x42401AC8UL))
#define bM0P_TIMER4_ATMR3_AMC3                          *((volatile unsigned int*)(0x42401ACCUL))
#define bM0P_TIMER4_ATMR3_MZCE                          *((volatile unsigned int*)(0x42401AD8UL))
#define bM0P_TIMER4_ATMR3_MPCE                          *((volatile unsigned int*)(0x42401ADCUL))
#define bM0P_TIMER4_ATCR4_BUFEN0                        *((volatile unsigned int*)(0x42401B00UL))
#define bM0P_TIMER4_ATCR4_BUFEN1                        *((volatile unsigned int*)(0x42401B04UL))
#define bM0P_TIMER4_ATCR4_ADTRGS0                       *((volatile unsigned int*)(0x42401B08UL))
#define bM0P_TIMER4_ATCR4_ADTRGS1                       *((volatile unsigned int*)(0x42401B0CUL))
#define bM0P_TIMER4_ATCR4_ADTRGS2                       *((volatile unsigned int*)(0x42401B10UL))
#define bM0P_TIMER4_ATCR4_LMC                           *((volatile unsigned int*)(0x42401B14UL))
#define bM0P_TIMER4_ATER4_TRGMD                         *((volatile unsigned int*)(0x42401B20UL))
#define bM0P_TIMER4_ATER4_OCS                           *((volatile unsigned int*)(0x42401B24UL))
#define bM0P_TIMER4_ATER4_DEN                           *((volatile unsigned int*)(0x42401B30UL))
#define bM0P_TIMER4_ATER4_PEN                           *((volatile unsigned int*)(0x42401B34UL))
#define bM0P_TIMER4_ATER4_UEN                           *((volatile unsigned int*)(0x42401B38UL))
#define bM0P_TIMER4_ATER4_ZEN                           *((volatile unsigned int*)(0x42401B3CUL))
#define bM0P_TIMER4_ATMR4_AMC0                          *((volatile unsigned int*)(0x42401B40UL))
#define bM0P_TIMER4_ATMR4_AMC1                          *((volatile unsigned int*)(0x42401B44UL))
#define bM0P_TIMER4_ATMR4_AMC2                          *((volatile unsigned int*)(0x42401B48UL))
#define bM0P_TIMER4_ATMR4_AMC3                          *((volatile unsigned int*)(0x42401B4CUL))
#define bM0P_TIMER4_ATMR4_MZCE                          *((volatile unsigned int*)(0x42401B58UL))
#define bM0P_TIMER4_ATMR4_MPCE                          *((volatile unsigned int*)(0x42401B5CUL))
#define bM0P_TIMER4_ATCR5_BUFEN0                        *((volatile unsigned int*)(0x42401B80UL))
#define bM0P_TIMER4_ATCR5_BUFEN1                        *((volatile unsigned int*)(0x42401B84UL))
#define bM0P_TIMER4_ATCR5_ADTRGS0                       *((volatile unsigned int*)(0x42401B88UL))
#define bM0P_TIMER4_ATCR5_ADTRGS1                       *((volatile unsigned int*)(0x42401B8CUL))
#define bM0P_TIMER4_ATCR5_ADTRGS2                       *((volatile unsigned int*)(0x42401B90UL))
#define bM0P_TIMER4_ATCR5_LMC                           *((volatile unsigned int*)(0x42401B94UL))
#define bM0P_TIMER4_ATER5_TRGMD                         *((volatile unsigned int*)(0x42401BA0UL))
#define bM0P_TIMER4_ATER5_OCS                           *((volatile unsigned int*)(0x42401BA4UL))
#define bM0P_TIMER4_ATER5_DEN                           *((volatile unsigned int*)(0x42401BB0UL))
#define bM0P_TIMER4_ATER5_PEN                           *((volatile unsigned int*)(0x42401BB4UL))
#define bM0P_TIMER4_ATER5_UEN                           *((volatile unsigned int*)(0x42401BB8UL))
#define bM0P_TIMER4_ATER5_ZEN                           *((volatile unsigned int*)(0x42401BBCUL))
#define bM0P_TIMER4_ATMR5_AMC0                          *((volatile unsigned int*)(0x42401BC0UL))
#define bM0P_TIMER4_ATMR5_AMC1                          *((volatile unsigned int*)(0x42401BC4UL))
#define bM0P_TIMER4_ATMR5_AMC2                          *((volatile unsigned int*)(0x42401BC8UL))
#define bM0P_TIMER4_ATMR5_AMC3                          *((volatile unsigned int*)(0x42401BCCUL))
#define bM0P_TIMER4_ATMR5_MZCE                          *((volatile unsigned int*)(0x42401BD8UL))
#define bM0P_TIMER4_ATMR5_MPCE                          *((volatile unsigned int*)(0x42401BDCUL))
#define bM0P_TIMER4_ESCR_DPE                            *((volatile unsigned int*)(0x42401E00UL))
#define bM0P_TIMER4_ESCR_NCS0                           *((volatile unsigned int*)(0x42401E04UL))
#define bM0P_TIMER4_ESCR_NCS1                           *((volatile unsigned int*)(0x42401E08UL))
#define bM0P_TIMER4_ESCR_NCS2                           *((volatile unsigned int*)(0x42401E0CUL))
#define bM0P_TIMER4_ESCR_SDI                            *((volatile unsigned int*)(0x42401E10UL))
#define bM0P_TIMER4_ESCR_APE                            *((volatile unsigned int*)(0x42401E14UL))
#define bM0P_TIMER4_ESCR_HOLD                           *((volatile unsigned int*)(0x42401E1CUL))
#define bM0P_TIMER4_ESCR_DID                            *((volatile unsigned int*)(0x42401E20UL))
#define bM0P_TIMER4_ESCR_AID                            *((volatile unsigned int*)(0x42401E24UL))
#define bM0P_TIMER4_ESCR_DIF                            *((volatile unsigned int*)(0x42401E30UL))
#define bM0P_TIMER4_ESCR_DIFC                           *((volatile unsigned int*)(0x42401E34UL))
#define bM0P_TIMER4_ESCR_AIF                            *((volatile unsigned int*)(0x42401E38UL))
#define bM0P_TIMER4_ESCR_AIFC                           *((volatile unsigned int*)(0x42401E3CUL))
#define bM0P_UID_UIDR0_UID0                             *((volatile unsigned int*)(0x42002000UL))
#define bM0P_UID_UIDR0_UID1                             *((volatile unsigned int*)(0x42002004UL))
#define bM0P_UID_UIDR0_UID2                             *((volatile unsigned int*)(0x42002008UL))
#define bM0P_UID_UIDR0_UID3                             *((volatile unsigned int*)(0x4200200CUL))
#define bM0P_UID_UIDR0_UID4                             *((volatile unsigned int*)(0x42002010UL))
#define bM0P_UID_UIDR0_UID5                             *((volatile unsigned int*)(0x42002014UL))
#define bM0P_UID_UIDR0_UID6                             *((volatile unsigned int*)(0x42002018UL))
#define bM0P_UID_UIDR0_UID7                             *((volatile unsigned int*)(0x4200201CUL))
#define bM0P_UID_UIDR0_UID8                             *((volatile unsigned int*)(0x42002020UL))
#define bM0P_UID_UIDR0_UID9                             *((volatile unsigned int*)(0x42002024UL))
#define bM0P_UID_UIDR0_UID10                            *((volatile unsigned int*)(0x42002028UL))
#define bM0P_UID_UIDR0_UID11                            *((volatile unsigned int*)(0x4200202CUL))
#define bM0P_UID_UIDR0_UID12                            *((volatile unsigned int*)(0x42002030UL))
#define bM0P_UID_UIDR0_UID13                            *((volatile unsigned int*)(0x42002034UL))
#define bM0P_UID_UIDR0_UID14                            *((volatile unsigned int*)(0x42002038UL))
#define bM0P_UID_UIDR0_UID15                            *((volatile unsigned int*)(0x4200203CUL))
#define bM0P_UID_UIDR0_UID16                            *((volatile unsigned int*)(0x42002040UL))
#define bM0P_UID_UIDR0_UID17                            *((volatile unsigned int*)(0x42002044UL))
#define bM0P_UID_UIDR0_UID18                            *((volatile unsigned int*)(0x42002048UL))
#define bM0P_UID_UIDR0_UID19                            *((volatile unsigned int*)(0x4200204CUL))
#define bM0P_UID_UIDR0_UID20                            *((volatile unsigned int*)(0x42002050UL))
#define bM0P_UID_UIDR0_UID21                            *((volatile unsigned int*)(0x42002054UL))
#define bM0P_UID_UIDR0_UID22                            *((volatile unsigned int*)(0x42002058UL))
#define bM0P_UID_UIDR0_UID23                            *((volatile unsigned int*)(0x4200205CUL))
#define bM0P_UID_UIDR0_UID24                            *((volatile unsigned int*)(0x42002060UL))
#define bM0P_UID_UIDR0_UID25                            *((volatile unsigned int*)(0x42002064UL))
#define bM0P_UID_UIDR0_UID26                            *((volatile unsigned int*)(0x42002068UL))
#define bM0P_UID_UIDR0_UID27                            *((volatile unsigned int*)(0x4200206CUL))
#define bM0P_UID_UIDR0_UID28                            *((volatile unsigned int*)(0x42002070UL))
#define bM0P_UID_UIDR0_UID29                            *((volatile unsigned int*)(0x42002074UL))
#define bM0P_UID_UIDR0_UID30                            *((volatile unsigned int*)(0x42002078UL))
#define bM0P_UID_UIDR0_UID31                            *((volatile unsigned int*)(0x4200207CUL))
#define bM0P_UID_UIDR1_UID0                             *((volatile unsigned int*)(0x42002080UL))
#define bM0P_UID_UIDR1_UID1                             *((volatile unsigned int*)(0x42002084UL))
#define bM0P_UID_UIDR1_UID2                             *((volatile unsigned int*)(0x42002088UL))
#define bM0P_UID_UIDR1_UID3                             *((volatile unsigned int*)(0x4200208CUL))
#define bM0P_UID_UIDR1_UID4                             *((volatile unsigned int*)(0x42002090UL))
#define bM0P_UID_UIDR1_UID5                             *((volatile unsigned int*)(0x42002094UL))
#define bM0P_UID_UIDR1_UID6                             *((volatile unsigned int*)(0x42002098UL))
#define bM0P_UID_UIDR1_UID7                             *((volatile unsigned int*)(0x4200209CUL))
#define bM0P_UID_UIDR1_UID8                             *((volatile unsigned int*)(0x420020A0UL))
#define bM0P_UID_UIDR1_UID9                             *((volatile unsigned int*)(0x420020A4UL))
#define bM0P_UID_UIDR1_UID10                            *((volatile unsigned int*)(0x420020A8UL))
#define bM0P_UID_UIDR1_UID11                            *((volatile unsigned int*)(0x420020ACUL))
#define bM0P_UID_UIDR1_UID12                            *((volatile unsigned int*)(0x420020B0UL))
#define bM0P_UID_UIDR1_UID13                            *((volatile unsigned int*)(0x420020B4UL))
#define bM0P_UID_UIDR1_UID14                            *((volatile unsigned int*)(0x420020B8UL))
#define bM0P_UID_UIDR1_UID15                            *((volatile unsigned int*)(0x420020BCUL))
#define bM0P_UID_UIDR1_UID16                            *((volatile unsigned int*)(0x420020C0UL))
#define bM0P_UID_UIDR1_UID17                            *((volatile unsigned int*)(0x420020C4UL))
#define bM0P_UID_UIDR1_UID18                            *((volatile unsigned int*)(0x420020C8UL))
#define bM0P_UID_UIDR1_UID19                            *((volatile unsigned int*)(0x420020CCUL))
#define bM0P_UID_UIDR1_UID20                            *((volatile unsigned int*)(0x420020D0UL))
#define bM0P_UID_UIDR1_UID21                            *((volatile unsigned int*)(0x420020D4UL))
#define bM0P_UID_UIDR1_UID22                            *((volatile unsigned int*)(0x420020D8UL))
#define bM0P_UID_UIDR1_UID23                            *((volatile unsigned int*)(0x420020DCUL))
#define bM0P_UID_UIDR1_UID24                            *((volatile unsigned int*)(0x420020E0UL))
#define bM0P_UID_UIDR1_UID25                            *((volatile unsigned int*)(0x420020E4UL))
#define bM0P_UID_UIDR1_UID26                            *((volatile unsigned int*)(0x420020E8UL))
#define bM0P_UID_UIDR1_UID27                            *((volatile unsigned int*)(0x420020ECUL))
#define bM0P_UID_UIDR1_UID28                            *((volatile unsigned int*)(0x420020F0UL))
#define bM0P_UID_UIDR1_UID29                            *((volatile unsigned int*)(0x420020F4UL))
#define bM0P_UID_UIDR1_UID30                            *((volatile unsigned int*)(0x420020F8UL))
#define bM0P_UID_UIDR1_UID31                            *((volatile unsigned int*)(0x420020FCUL))
#define bM0P_UID_UIDR2_UID0                             *((volatile unsigned int*)(0x42002100UL))
#define bM0P_UID_UIDR2_UID1                             *((volatile unsigned int*)(0x42002104UL))
#define bM0P_UID_UIDR2_UID2                             *((volatile unsigned int*)(0x42002108UL))
#define bM0P_UID_UIDR2_UID3                             *((volatile unsigned int*)(0x4200210CUL))
#define bM0P_UID_UIDR2_UID4                             *((volatile unsigned int*)(0x42002110UL))
#define bM0P_UID_UIDR2_UID5                             *((volatile unsigned int*)(0x42002114UL))
#define bM0P_UID_UIDR2_UID6                             *((volatile unsigned int*)(0x42002118UL))
#define bM0P_UID_UIDR2_UID7                             *((volatile unsigned int*)(0x4200211CUL))
#define bM0P_UID_UIDR2_UID8                             *((volatile unsigned int*)(0x42002120UL))
#define bM0P_UID_UIDR2_UID9                             *((volatile unsigned int*)(0x42002124UL))
#define bM0P_UID_UIDR2_UID10                            *((volatile unsigned int*)(0x42002128UL))
#define bM0P_UID_UIDR2_UID11                            *((volatile unsigned int*)(0x4200212CUL))
#define bM0P_UID_UIDR2_UID12                            *((volatile unsigned int*)(0x42002130UL))
#define bM0P_UID_UIDR2_UID13                            *((volatile unsigned int*)(0x42002134UL))
#define bM0P_UID_UIDR2_UID14                            *((volatile unsigned int*)(0x42002138UL))
#define bM0P_UID_UIDR2_UID15                            *((volatile unsigned int*)(0x4200213CUL))
#define bM0P_VC_VC_CTL1_VC_EN                           *((volatile unsigned int*)(0x42786000UL))
#define bM0P_VC_VC_CTL1_VC_OUT                          *((volatile unsigned int*)(0x42786004UL))
#define bM0P_VC_VC_CTL1_VC_NMODE                        *((volatile unsigned int*)(0x42786008UL))
#define bM0P_VC_VC_CTL1_VC_COMPSL0                      *((volatile unsigned int*)(0x4278600CUL))
#define bM0P_VC_VC_CTL1_VC_COMPSL1                      *((volatile unsigned int*)(0x42786010UL))
#define bM0P_VC_VC_CTL2_VC_FILTER_EN                    *((volatile unsigned int*)(0x42786080UL))
#define bM0P_VC_VC_CTL2_VC_RESPONSE0                    *((volatile unsigned int*)(0x42786084UL))
#define bM0P_VC_VC_CTL2_VC_RESPONSE1                    *((volatile unsigned int*)(0x42786088UL))
#define bM0P_VC_VC_CTL2_VC_RESPONSE2                    *((volatile unsigned int*)(0x4278608CUL))
#define bM0P_VC_VC_CTL2_VCINT_EDGE0                     *((volatile unsigned int*)(0x42786094UL))
#define bM0P_VC_VC_CTL2_VCINT_EDGE1                     *((volatile unsigned int*)(0x42786098UL))
#define bM0P_VC_VC_CTL2_VCINT_HIGH                      *((volatile unsigned int*)(0x4278609CUL))
#define bM0P_VC_VC_CTL2_VC2PT                           *((volatile unsigned int*)(0x427860A0UL))
#define bM0P_VC_VC_CTL2_VCIE                            *((volatile unsigned int*)(0x427860A4UL))
#define bM0P_VC_VC_CTL2_VCIF                            *((volatile unsigned int*)(0x427860A8UL))
#define bM0P_VC_VC_CTL2_VC_HYS_SEL                      *((volatile unsigned int*)(0x427860ACUL))
#define bM0P_VC_VC_CTL3_VC_TM0G                         *((volatile unsigned int*)(0x42786100UL))
#define bM0P_VC_VC_CTL3_VC_TM2G                         *((volatile unsigned int*)(0x42786104UL))
#define bM0P_WSUNIT_LVD1_SET_LVD1_SVHR0                 *((volatile unsigned int*)(0x426A0000UL))
#define bM0P_WSUNIT_LVD1_SET_LVD1_SVHR1                 *((volatile unsigned int*)(0x426A0004UL))
#define bM0P_WSUNIT_LVD1_SET_LVD1_SVHR2                 *((volatile unsigned int*)(0x426A0008UL))
#define bM0P_WSUNIT_LVD1_SET_LVD1_SVHR3                 *((volatile unsigned int*)(0x426A000CUL))
#define bM0P_WSUNIT_LVD1_SET_LVD1_SVHR4                 *((volatile unsigned int*)(0x426A0010UL))
#define bM0P_WSUNIT_LVD1_SET_LVD1_SVHD0                 *((volatile unsigned int*)(0x426A0020UL))
#define bM0P_WSUNIT_LVD1_SET_LVD1_SVHD1                 *((volatile unsigned int*)(0x426A0024UL))
#define bM0P_WSUNIT_LVD1_SET_LVD1_SVHD2                 *((volatile unsigned int*)(0x426A0028UL))
#define bM0P_WSUNIT_LVD1_SET_LVD1_SVHD3                 *((volatile unsigned int*)(0x426A002CUL))
#define bM0P_WSUNIT_LVD1_SET_LVD1_SVHD4                 *((volatile unsigned int*)(0x426A0030UL))
#define bM0P_WSUNIT_LVD1_SET_LVD1_SRST                  *((volatile unsigned int*)(0x426A0040UL))
#define bM0P_WSUNIT_LVD1_SET_LVD1_EN                    *((volatile unsigned int*)(0x426A0060UL))
#define bM0P_WSUNIT_LVD_INT_STR_LVD1_IF                 *((volatile unsigned int*)(0x426A0080UL))
#define bM0P_WSUNIT_LVD_INT_STR_LVD2_IF                 *((volatile unsigned int*)(0x426A00C0UL))
#define bM0P_WSUNIT_LVD_CLR_LVD1_CLR                    *((volatile unsigned int*)(0x426A0100UL))
#define bM0P_WSUNIT_LVD_CLR_LVD2_CLR                    *((volatile unsigned int*)(0x426A0140UL))
#define bM0P_WSUNIT_LVD2_SET_LVD2_SVHR0                 *((volatile unsigned int*)(0x426A0200UL))
#define bM0P_WSUNIT_LVD2_SET_LVD2_SVHR1                 *((volatile unsigned int*)(0x426A0204UL))
#define bM0P_WSUNIT_LVD2_SET_LVD2_SVHR2                 *((volatile unsigned int*)(0x426A0208UL))
#define bM0P_WSUNIT_LVD2_SET_LVD2_SVHR3                 *((volatile unsigned int*)(0x426A020CUL))
#define bM0P_WSUNIT_LVD2_SET_LVD2_SVHR4                 *((volatile unsigned int*)(0x426A0210UL))
#define bM0P_WSUNIT_LVD2_SET_LVD2_SVHD0                 *((volatile unsigned int*)(0x426A0220UL))
#define bM0P_WSUNIT_LVD2_SET_LVD2_SVHD1                 *((volatile unsigned int*)(0x426A0224UL))
#define bM0P_WSUNIT_LVD2_SET_LVD2_SVHD2                 *((volatile unsigned int*)(0x426A0228UL))
#define bM0P_WSUNIT_LVD2_SET_LVD2_SVHD3                 *((volatile unsigned int*)(0x426A022CUL))
#define bM0P_WSUNIT_LVD2_SET_LVD2_SVHD4                 *((volatile unsigned int*)(0x426A0230UL))
#define bM0P_WSUNIT_LVD2_SET_LVD2_SRST                  *((volatile unsigned int*)(0x426A0240UL))
#define bM0P_WSUNIT_LVD2_SET_LVD2_EN                    *((volatile unsigned int*)(0x426A0260UL))
#define bM0P_WSUNIT_BUR01_BUR010                        *((volatile unsigned int*)(0x426AE000UL))
#define bM0P_WSUNIT_BUR01_BUR011                        *((volatile unsigned int*)(0x426AE004UL))
#define bM0P_WSUNIT_BUR01_BUR012                        *((volatile unsigned int*)(0x426AE008UL))
#define bM0P_WSUNIT_BUR01_BUR013                        *((volatile unsigned int*)(0x426AE00CUL))
#define bM0P_WSUNIT_BUR01_BUR014                        *((volatile unsigned int*)(0x426AE010UL))
#define bM0P_WSUNIT_BUR01_BUR015                        *((volatile unsigned int*)(0x426AE014UL))
#define bM0P_WSUNIT_BUR01_BUR016                        *((volatile unsigned int*)(0x426AE018UL))
#define bM0P_WSUNIT_BUR01_BUR017                        *((volatile unsigned int*)(0x426AE01CUL))
#define bM0P_WSUNIT_BUR02_BUR020                        *((volatile unsigned int*)(0x426AE020UL))
#define bM0P_WSUNIT_BUR02_BUR021                        *((volatile unsigned int*)(0x426AE024UL))
#define bM0P_WSUNIT_BUR02_BUR022                        *((volatile unsigned int*)(0x426AE028UL))
#define bM0P_WSUNIT_BUR02_BUR023                        *((volatile unsigned int*)(0x426AE02CUL))
#define bM0P_WSUNIT_BUR02_BUR024                        *((volatile unsigned int*)(0x426AE030UL))
#define bM0P_WSUNIT_BUR02_BUR025                        *((volatile unsigned int*)(0x426AE034UL))
#define bM0P_WSUNIT_BUR02_BUR026                        *((volatile unsigned int*)(0x426AE038UL))
#define bM0P_WSUNIT_BUR02_BUR027                        *((volatile unsigned int*)(0x426AE03CUL))
#define bM0P_WSUNIT_BUR03_BUR030                        *((volatile unsigned int*)(0x426AE040UL))
#define bM0P_WSUNIT_BUR03_BUR031                        *((volatile unsigned int*)(0x426AE044UL))
#define bM0P_WSUNIT_BUR03_BUR032                        *((volatile unsigned int*)(0x426AE048UL))
#define bM0P_WSUNIT_BUR03_BUR033                        *((volatile unsigned int*)(0x426AE04CUL))
#define bM0P_WSUNIT_BUR03_BUR034                        *((volatile unsigned int*)(0x426AE050UL))
#define bM0P_WSUNIT_BUR03_BUR035                        *((volatile unsigned int*)(0x426AE054UL))
#define bM0P_WSUNIT_BUR03_BUR036                        *((volatile unsigned int*)(0x426AE058UL))
#define bM0P_WSUNIT_BUR03_BUR037                        *((volatile unsigned int*)(0x426AE05CUL))
#define bM0P_WSUNIT_BUR04_BUR040                        *((volatile unsigned int*)(0x426AE060UL))
#define bM0P_WSUNIT_BUR04_BUR041                        *((volatile unsigned int*)(0x426AE064UL))
#define bM0P_WSUNIT_BUR04_BUR042                        *((volatile unsigned int*)(0x426AE068UL))
#define bM0P_WSUNIT_BUR04_BUR043                        *((volatile unsigned int*)(0x426AE06CUL))
#define bM0P_WSUNIT_BUR04_BUR044                        *((volatile unsigned int*)(0x426AE070UL))
#define bM0P_WSUNIT_BUR04_BUR045                        *((volatile unsigned int*)(0x426AE074UL))
#define bM0P_WSUNIT_BUR04_BUR046                        *((volatile unsigned int*)(0x426AE078UL))
#define bM0P_WSUNIT_BUR04_BUR047                        *((volatile unsigned int*)(0x426AE07CUL))
#define bM0P_WSUNIT_BUR05_BUR050                        *((volatile unsigned int*)(0x426AE080UL))
#define bM0P_WSUNIT_BUR05_BUR051                        *((volatile unsigned int*)(0x426AE084UL))
#define bM0P_WSUNIT_BUR05_BUR052                        *((volatile unsigned int*)(0x426AE088UL))
#define bM0P_WSUNIT_BUR05_BUR053                        *((volatile unsigned int*)(0x426AE08CUL))
#define bM0P_WSUNIT_BUR05_BUR054                        *((volatile unsigned int*)(0x426AE090UL))
#define bM0P_WSUNIT_BUR05_BUR055                        *((volatile unsigned int*)(0x426AE094UL))
#define bM0P_WSUNIT_BUR05_BUR056                        *((volatile unsigned int*)(0x426AE098UL))
#define bM0P_WSUNIT_BUR05_BUR057                        *((volatile unsigned int*)(0x426AE09CUL))
#define bM0P_WSUNIT_BUR06_BUR060                        *((volatile unsigned int*)(0x426AE0A0UL))
#define bM0P_WSUNIT_BUR06_BUR061                        *((volatile unsigned int*)(0x426AE0A4UL))
#define bM0P_WSUNIT_BUR06_BUR062                        *((volatile unsigned int*)(0x426AE0A8UL))
#define bM0P_WSUNIT_BUR06_BUR063                        *((volatile unsigned int*)(0x426AE0ACUL))
#define bM0P_WSUNIT_BUR06_BUR064                        *((volatile unsigned int*)(0x426AE0B0UL))
#define bM0P_WSUNIT_BUR06_BUR065                        *((volatile unsigned int*)(0x426AE0B4UL))
#define bM0P_WSUNIT_BUR06_BUR066                        *((volatile unsigned int*)(0x426AE0B8UL))
#define bM0P_WSUNIT_BUR06_BUR067                        *((volatile unsigned int*)(0x426AE0BCUL))
#define bM0P_WSUNIT_BUR07_BUR070                        *((volatile unsigned int*)(0x426AE0C0UL))
#define bM0P_WSUNIT_BUR07_BUR071                        *((volatile unsigned int*)(0x426AE0C4UL))
#define bM0P_WSUNIT_BUR07_BUR072                        *((volatile unsigned int*)(0x426AE0C8UL))
#define bM0P_WSUNIT_BUR07_BUR073                        *((volatile unsigned int*)(0x426AE0CCUL))
#define bM0P_WSUNIT_BUR07_BUR074                        *((volatile unsigned int*)(0x426AE0D0UL))
#define bM0P_WSUNIT_BUR07_BUR075                        *((volatile unsigned int*)(0x426AE0D4UL))
#define bM0P_WSUNIT_BUR07_BUR076                        *((volatile unsigned int*)(0x426AE0D8UL))
#define bM0P_WSUNIT_BUR07_BUR077                        *((volatile unsigned int*)(0x426AE0DCUL))
#define bM0P_WSUNIT_BUR08_BUR080                        *((volatile unsigned int*)(0x426AE0E0UL))
#define bM0P_WSUNIT_BUR08_BUR081                        *((volatile unsigned int*)(0x426AE0E4UL))
#define bM0P_WSUNIT_BUR08_BUR082                        *((volatile unsigned int*)(0x426AE0E8UL))
#define bM0P_WSUNIT_BUR08_BUR083                        *((volatile unsigned int*)(0x426AE0ECUL))
#define bM0P_WSUNIT_BUR08_BUR084                        *((volatile unsigned int*)(0x426AE0F0UL))
#define bM0P_WSUNIT_BUR08_BUR085                        *((volatile unsigned int*)(0x426AE0F4UL))
#define bM0P_WSUNIT_BUR08_BUR086                        *((volatile unsigned int*)(0x426AE0F8UL))
#define bM0P_WSUNIT_BUR08_BUR087                        *((volatile unsigned int*)(0x426AE0FCUL))
#define bM0P_WSUNIT_BUR09_BUR090                        *((volatile unsigned int*)(0x426AE100UL))
#define bM0P_WSUNIT_BUR09_BUR091                        *((volatile unsigned int*)(0x426AE104UL))
#define bM0P_WSUNIT_BUR09_BUR092                        *((volatile unsigned int*)(0x426AE108UL))
#define bM0P_WSUNIT_BUR09_BUR093                        *((volatile unsigned int*)(0x426AE10CUL))
#define bM0P_WSUNIT_BUR09_BUR094                        *((volatile unsigned int*)(0x426AE110UL))
#define bM0P_WSUNIT_BUR09_BUR095                        *((volatile unsigned int*)(0x426AE114UL))
#define bM0P_WSUNIT_BUR09_BUR096                        *((volatile unsigned int*)(0x426AE118UL))
#define bM0P_WSUNIT_BUR09_BUR097                        *((volatile unsigned int*)(0x426AE11CUL))
#define bM0P_WSUNIT_BUR10_BUR100                        *((volatile unsigned int*)(0x426AE120UL))
#define bM0P_WSUNIT_BUR10_BUR101                        *((volatile unsigned int*)(0x426AE124UL))
#define bM0P_WSUNIT_BUR10_BUR102                        *((volatile unsigned int*)(0x426AE128UL))
#define bM0P_WSUNIT_BUR10_BUR103                        *((volatile unsigned int*)(0x426AE12CUL))
#define bM0P_WSUNIT_BUR10_BUR104                        *((volatile unsigned int*)(0x426AE130UL))
#define bM0P_WSUNIT_BUR10_BUR105                        *((volatile unsigned int*)(0x426AE134UL))
#define bM0P_WSUNIT_BUR10_BUR106                        *((volatile unsigned int*)(0x426AE138UL))
#define bM0P_WSUNIT_BUR10_BUR107                        *((volatile unsigned int*)(0x426AE13CUL))
#define bM0P_WSUNIT_BUR11_BUR110                        *((volatile unsigned int*)(0x426AE140UL))
#define bM0P_WSUNIT_BUR11_BUR111                        *((volatile unsigned int*)(0x426AE144UL))
#define bM0P_WSUNIT_BUR11_BUR112                        *((volatile unsigned int*)(0x426AE148UL))
#define bM0P_WSUNIT_BUR11_BUR113                        *((volatile unsigned int*)(0x426AE14CUL))
#define bM0P_WSUNIT_BUR11_BUR114                        *((volatile unsigned int*)(0x426AE150UL))
#define bM0P_WSUNIT_BUR11_BUR115                        *((volatile unsigned int*)(0x426AE154UL))
#define bM0P_WSUNIT_BUR11_BUR116                        *((volatile unsigned int*)(0x426AE158UL))
#define bM0P_WSUNIT_BUR11_BUR117                        *((volatile unsigned int*)(0x426AE15CUL))
#define bM0P_WSUNIT_BUR12_BUR120                        *((volatile unsigned int*)(0x426AE160UL))
#define bM0P_WSUNIT_BUR12_BUR121                        *((volatile unsigned int*)(0x426AE164UL))
#define bM0P_WSUNIT_BUR12_BUR122                        *((volatile unsigned int*)(0x426AE168UL))
#define bM0P_WSUNIT_BUR12_BUR123                        *((volatile unsigned int*)(0x426AE16CUL))
#define bM0P_WSUNIT_BUR12_BUR124                        *((volatile unsigned int*)(0x426AE170UL))
#define bM0P_WSUNIT_BUR12_BUR125                        *((volatile unsigned int*)(0x426AE174UL))
#define bM0P_WSUNIT_BUR12_BUR126                        *((volatile unsigned int*)(0x426AE178UL))
#define bM0P_WSUNIT_BUR12_BUR127                        *((volatile unsigned int*)(0x426AE17CUL))
#define bM0P_WSUNIT_BUR13_BUR130                        *((volatile unsigned int*)(0x426AE180UL))
#define bM0P_WSUNIT_BUR13_BUR131                        *((volatile unsigned int*)(0x426AE184UL))
#define bM0P_WSUNIT_BUR13_BUR132                        *((volatile unsigned int*)(0x426AE188UL))
#define bM0P_WSUNIT_BUR13_BUR133                        *((volatile unsigned int*)(0x426AE18CUL))
#define bM0P_WSUNIT_BUR13_BUR134                        *((volatile unsigned int*)(0x426AE190UL))
#define bM0P_WSUNIT_BUR13_BUR135                        *((volatile unsigned int*)(0x426AE194UL))
#define bM0P_WSUNIT_BUR13_BUR136                        *((volatile unsigned int*)(0x426AE198UL))
#define bM0P_WSUNIT_BUR13_BUR137                        *((volatile unsigned int*)(0x426AE19CUL))
#define bM0P_WSUNIT_BUR14_BUR140                        *((volatile unsigned int*)(0x426AE1A0UL))
#define bM0P_WSUNIT_BUR14_BUR141                        *((volatile unsigned int*)(0x426AE1A4UL))
#define bM0P_WSUNIT_BUR14_BUR142                        *((volatile unsigned int*)(0x426AE1A8UL))
#define bM0P_WSUNIT_BUR14_BUR143                        *((volatile unsigned int*)(0x426AE1ACUL))
#define bM0P_WSUNIT_BUR14_BUR144                        *((volatile unsigned int*)(0x426AE1B0UL))
#define bM0P_WSUNIT_BUR14_BUR145                        *((volatile unsigned int*)(0x426AE1B4UL))
#define bM0P_WSUNIT_BUR14_BUR146                        *((volatile unsigned int*)(0x426AE1B8UL))
#define bM0P_WSUNIT_BUR14_BUR147                        *((volatile unsigned int*)(0x426AE1BCUL))
#define bM0P_WSUNIT_BUR15_BUR150                        *((volatile unsigned int*)(0x426AE1C0UL))
#define bM0P_WSUNIT_BUR15_BUR151                        *((volatile unsigned int*)(0x426AE1C4UL))
#define bM0P_WSUNIT_BUR15_BUR152                        *((volatile unsigned int*)(0x426AE1C8UL))
#define bM0P_WSUNIT_BUR15_BUR153                        *((volatile unsigned int*)(0x426AE1CCUL))
#define bM0P_WSUNIT_BUR15_BUR154                        *((volatile unsigned int*)(0x426AE1D0UL))
#define bM0P_WSUNIT_BUR15_BUR155                        *((volatile unsigned int*)(0x426AE1D4UL))
#define bM0P_WSUNIT_BUR15_BUR156                        *((volatile unsigned int*)(0x426AE1D8UL))
#define bM0P_WSUNIT_BUR15_BUR157                        *((volatile unsigned int*)(0x426AE1DCUL))
#define bM0P_WSUNIT_BUR16_BUR160                        *((volatile unsigned int*)(0x426AE1E0UL))
#define bM0P_WSUNIT_BUR16_BUR161                        *((volatile unsigned int*)(0x426AE1E4UL))
#define bM0P_WSUNIT_BUR16_BUR162                        *((volatile unsigned int*)(0x426AE1E8UL))
#define bM0P_WSUNIT_BUR16_BUR163                        *((volatile unsigned int*)(0x426AE1ECUL))
#define bM0P_WSUNIT_BUR16_BUR164                        *((volatile unsigned int*)(0x426AE1F0UL))
#define bM0P_WSUNIT_BUR16_BUR165                        *((volatile unsigned int*)(0x426AE1F4UL))
#define bM0P_WSUNIT_BUR16_BUR166                        *((volatile unsigned int*)(0x426AE1F8UL))
#define bM0P_WSUNIT_BUR16_BUR167                        *((volatile unsigned int*)(0x426AE1FCUL))


#ifdef __cplusplus
}
#endif

#endif /* __HC32M140FX_H__ */

