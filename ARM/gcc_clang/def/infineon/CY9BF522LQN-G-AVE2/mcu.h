/************************************************************************/
/*               (C) Fujitsu Semiconductor Europe GmbH (FSEU)           */
/*                                                                      */
/* The following software deliverable is intended for and must only be  */
/* used for reference and in an evaluation laboratory environment.      */
/* It is provided on an as-is basis without charge and is subject to    */
/* alterations.                                                         */
/* It is the user's obligation to fully test the software in its        */
/* environment and to ensure proper functionality, qualification and    */
/* compliance with component specifications.                            */
/*                                                                      */
/* In the event the software deliverable includes the use of open       */
/* source components, the provisions of the governing open source       */
/* license agreement shall apply with respect to such software          */
/* deliverable.                                                         */
/* FSEU does not warrant that the deliverables do not infringe any      */
/* third party intellectual property right (IPR). In the event that     */
/* the deliverables infringe a third party IPR it is the sole           */
/* responsibility of the customer to obtain necessary licenses to       */
/* continue the usage of the deliverable.                               */
/*                                                                      */
/* To the maximum extent permitted by applicable law FSEU disclaims all */
/* warranties, whether express or implied, in particular, but not       */
/* limited to, warranties of merchantability and fitness for a          */
/* particular purpose for which the deliverable is not designated.      */
/*                                                                      */
/* To the maximum extent permitted by applicable law, FSEU's liability  */
/* is restricted to intentional misconduct and gross negligence.        */
/* FSEU is not liable for consequential damages.                        */
/*                                                                      */
/* (V1.5)                                                               */
/************************************************************************/
/*                                                                      */
/*  Header File for Device MB9B520K                                     */
/*  Version V1.1                                                        */
/*  Date    2013-03-15                                                  */
/*                                                                      */
/************************************************************************/

/******************************************************************************
 * History
 * Date       Ver Description
 * 2012-09-10 1.0 New
 * 2013-03-15 1.1 Modified SCFD&PCFD bit band of ADC
 *                Modified WTSR&WTMOR bit band of RTC
 *                Modified bit name of BTSSSR register of BT
 *                Modified DSRAMR bitband of DS
 *                Modified BGR1 bit band of MFS_LIN
 *                Added IGBTC register of PPG
 *                Added QPRCRR register of QPRC
 *
 ******************************************************************************/

#ifndef _MB9B520K_H_
#define _MB9B520K_H_

#ifdef __cplusplus
extern "C" {
#endif 

#define FM3_DEVICE_TYPE 9

/******************************************************************************
 * Configuration of the Cortex-M3 Processor and Core Peripherals
 ******************************************************************************/
#define __MPU_PRESENT           1 /* FM3 provide an MPU                           */
#define __NVIC_PRIO_BITS        4 /* FM3 uses 4 Bits for the Priority Levels      */
#define __Vendor_SysTickConfig  0 /* Set to 1 if different SysTick Config is used */


/******************************************************************************
 * Interrupt Number Definition
 ******************************************************************************/
typedef enum IRQn
{
    NMI_IRQn          = -14, /*  2 Non Maskable      */
    HardFault_IRQn    = -13, /*  3 Hard Fault        */
    MemManage_IRQn    = -12, /*  4 Memory Management */
    BusFault_IRQn     = -11, /*  5 Bus Fault         */
    UsageFault_IRQn   = -10, /*  6 Usage Fault       */
    SVC_IRQn          = -5,  /* 11 SV Call           */
    DebugMonitor_IRQn = -4,  /* 12 Debug Monitor     */
    PendSV_IRQn       = -2,  /* 14 Pend SV           */
    SysTick_IRQn      = -1,  /* 15 System Tick       */

    CSV_IRQn          =  0, /* Clock Super Visor                             */
    SWDT_IRQn         =  1, /* Software Watchdog Timer                       */
    LVD_IRQn          =  2, /* Low Voltage Detector                          */
    WFG_IRQn          =  3, /* Wave Form Generator                           */
    EXINT0_7_IRQn     =  4, /* External Interrupt Request ch.0 to ch.7       */
    EXINT8_23_IRQn    =  5, /* External Interrupt Request ch.8 to ch.23      */
    DTIM_QDU_IRQn     =  6, /* Dual Timer / Quad Decoder                     */
    MFS0RX_IRQn       =  7, /* MultiFunction Serial Reception ch.0           */
    MFS0TX_IRQn       =  8, /* MultiFunction Serial Transmission ch.0        */
    MFS1RX_IRQn       =  9, /* MultiFunction Serial Reception ch.1           */
    MFS1TX_IRQn       = 10, /* MultiFunction Serial Transmission ch.1        */
    MFS2RX_IRQn       = 11, /* MultiFunction Serial Reception ch.2           */
    MFS2TX_IRQn       = 12, /* MultiFunction Serial Transmission ch.2        */
    MFS3RX_IRQn       = 13, /* MultiFunction Serial Reception ch.3           */
    MFS3TX_IRQn       = 14, /* MultiFunction Serial Transmission ch.3        */
    MFS4RX_IRQn       = 15, /* MultiFunction Serial Reception ch.4           */
    MFS4TX_IRQn       = 16, /* MultiFunction Serial Transmission ch.4        */
    MFS5RX_IRQn       = 17, /* MultiFunction Serial Reception ch.5           */
    MFS5TX_IRQn       = 18, /* MultiFunction Serial Transmission ch.5        */
    MFS6RX_IRQn       = 19, /* MultiFunction Serial Reception ch.6           */
    MFS6TX_IRQn       = 20, /* MultiFunction Serial Transmission ch.6        */
    MFS7RX_IRQn       = 21, /* MultiFunction Serial Reception ch.7           */
    MFS7TX_IRQn       = 22, /* MultiFunction Serial Transmission ch.7        */
    PPG_IRQn          = 23, /* PPG                                           */
    OSC_PLL_WC_RTC_IRQn = 24, /* OSC / PLL / Watch Counter / RTC             */
    ADC0_IRQn         = 25, /* ADC0                                          */
    ADC1_IRQn         = 26, /* ADC1                                          */
    /* Reserved       = 27                                                   */
    FRTIM_IRQn        = 28, /* Free-run Timer                                */
    INCAP_IRQn        = 29, /* Input Capture                                 */
    OUTCOMP_IRQn      = 30, /* Output Compare                                */
    BTIM0_7_IRQn      = 31, /* Base Timer ch.0 to ch.7                       */
    /* Reserved       = 32                                                   */
    CAN1_IRQn         = 33, /* CAN ch.1                                      */
    USB0F_IRQn        = 34, /* USB Function ch.0                             */
    USB0F_USB0H_IRQn  = 35, /* USB Function ch.0 / USB Host ch.0             */
    /* Reserved       = 36                                                   */
    /* Reserved       = 37                                                   */
    DMAC0_IRQn        = 38, /* DMAC ch.0                                     */
    DMAC1_IRQn        = 39, /* DMAC ch.1                                     */
    DMAC2_IRQn        = 40, /* DMAC ch.2                                     */
    DMAC3_IRQn        = 41, /* DMAC ch.3                                     */
    DMAC4_IRQn        = 42, /* DMAC ch.4                                     */
    DMAC5_IRQn        = 43, /* DMAC ch.5                                     */
    DMAC6_IRQn        = 44, /* DMAC ch.6                                     */
    DMAC7_IRQn        = 45, /* DMAC ch.7                                     */
    /* Reserved       = 46                                                   */
    FLASH_IRQ         = 47  /* Flash I/F                                     */
} IRQn_Type;


#include "cy9bf522_core_cm3.h"
// #include "system_mb9bf52x.h"  // Note: Changed for MikroE implementation.
#include <stdint.h>

#define SUCCESS  0
#define ERROR    -1

#ifndef NULL
#define NULL 0
#endif


/******************************************************************************/
/*                Device Specific Peripheral Registers structures             */
/******************************************************************************/

#if defined ( __CC_ARM   )
#pragma anon_unions
#endif

/******************************************************************************
 * Peripheral register bit fields
 ******************************************************************************/

/******************************************************************************
 * Flash_IF_MODULE
 ******************************************************************************/
/* Flash_IF_MODULE register bit fields */
typedef struct stc_flash_if_frwtr_field
{
  __IO uint32_t RWT0       : 1;
  __IO uint32_t RWT1       : 1;
} stc_flash_if_frwtr_field_t;

typedef struct stc_flash_if_fstr_field
{
  __IO uint32_t RDY        : 1;
  __IO uint32_t HNG        : 1;
  __IO uint32_t CERS       : 1;
  __IO uint32_t ESPS       : 1;
  __IO uint32_t SERS       : 1;
  __IO uint32_t PGMS       : 1;
} stc_flash_if_fstr_field_t;

typedef struct stc_flash_if_ficr_field
{
  __IO uint32_t RDYIE      : 1;
  __IO uint32_t HANGIE     : 1;
} stc_flash_if_ficr_field_t;

typedef struct stc_flash_if_fisr_field
{
  __IO uint32_t RDYIF      : 1;
  __IO uint32_t HANGIF     : 1;
} stc_flash_if_fisr_field_t;

typedef struct stc_flash_if_ficlr_field
{
  __IO uint32_t RDYC       : 1;
  __IO uint32_t HANGC      : 1;
} stc_flash_if_ficlr_field_t;

typedef struct stc_flash_if_crtrmm_field
{
  __IO uint32_t TRMM0      : 1;
  __IO uint32_t TRMM1      : 1;
  __IO uint32_t TRMM2      : 1;
  __IO uint32_t TRMM3      : 1;
  __IO uint32_t TRMM4      : 1;
  __IO uint32_t TRMM5      : 1;
  __IO uint32_t TRMM6      : 1;
  __IO uint32_t TRMM7      : 1;
  __IO uint32_t TRMM8      : 1;
  __IO uint32_t TRMM9      : 1;
} stc_flash_if_crtrmm_field_t;

/******************************************************************************
 * UNIQUE_ID_MODULE
 ******************************************************************************/
/* Uuique ID register bit fields */
typedef struct stc_unique_id_uidr0_field
{
       uint32_t RESERVED0  : 4;
  __IO uint32_t UID0       : 1;
  __IO uint32_t UID1       : 1;
  __IO uint32_t UID2       : 1;
  __IO uint32_t UID3       : 1;
  __IO uint32_t UID4       : 1;
  __IO uint32_t UID5       : 1;
  __IO uint32_t UID6       : 1;
  __IO uint32_t UID7       : 1;
  __IO uint32_t UID8       : 1;
  __IO uint32_t UID9       : 1;
  __IO uint32_t UID10      : 1;
  __IO uint32_t UID11      : 1;
  __IO uint32_t UID12      : 1;
  __IO uint32_t UID13      : 1;
  __IO uint32_t UID14      : 1;
  __IO uint32_t UID15      : 1;
  __IO uint32_t UID16      : 1;
  __IO uint32_t UID17      : 1;
  __IO uint32_t UID18      : 1;
  __IO uint32_t UID19      : 1;
  __IO uint32_t UID20      : 1;
  __IO uint32_t UID21      : 1;
  __IO uint32_t UID22      : 1;
  __IO uint32_t UID23      : 1;
  __IO uint32_t UID24      : 1;
  __IO uint32_t UID25      : 1;
  __IO uint32_t UID26      : 1;
  __IO uint32_t UID27      : 1;
} stc_unique_id_uidr0_field_t;

typedef struct stc_unique_id_uidr1_field
{
  __IO uint32_t UID28      : 1;
  __IO uint32_t UID29      : 1;
  __IO uint32_t UID30      : 1;
  __IO uint32_t UID31      : 1;
  __IO uint32_t UID32      : 1;
  __IO uint32_t UID33      : 1;
  __IO uint32_t UID34      : 1;
  __IO uint32_t UID35      : 1;
  __IO uint32_t UID36      : 1;
  __IO uint32_t UID37      : 1;
  __IO uint32_t UID38      : 1;
  __IO uint32_t UID39      : 1;
  __IO uint32_t UID40      : 1;
} stc_unique_id_uidr1_field_t;

/******************************************************************************
 * Clock_Reset_MODULE
 ******************************************************************************/
/* Clock_Reset_MODULE register bit fields */
typedef struct stc_crg_scm_ctl_field
{
        uint8_t RESERVED1  : 1;
  __IO  uint8_t MOSCE      : 1;
        uint8_t RESERVED2  : 1;
  __IO  uint8_t SOSCE      : 1;
  __IO  uint8_t PLLE       : 1;
  __IO  uint8_t RCS0       : 1;
  __IO  uint8_t RCS1       : 1;
  __IO  uint8_t RCS2       : 1;
} stc_crg_scm_ctl_field_t;

typedef struct stc_crg_scm_str_field
{
        uint8_t RESERVED1  : 1;
  __IO  uint8_t MORDY      : 1;
        uint8_t RESERVED2  : 1;
  __IO  uint8_t SORDY      : 1;
  __IO  uint8_t PLRDY      : 1;
  __IO  uint8_t RCM0       : 1;
  __IO  uint8_t RCM1       : 1;
  __IO  uint8_t RCM2       : 1;
} stc_crg_scm_str_field_t;

typedef struct stc_crg_rst_str_field
{
  __IO uint16_t PONR       : 1;
  __IO uint16_t INITX      : 1;
       uint16_t RESERVED1  : 2;
  __IO uint16_t SWDT       : 1;
  __IO uint16_t HWDT       : 1;
  __IO uint16_t CSVR       : 1;
  __IO uint16_t FCSR       : 1;
  __IO uint16_t SRST       : 1;
} stc_crg_rst_str_field_t;

typedef struct stc_crg_bsc_psr_field
{
  __IO  uint8_t BSR0       : 1;
  __IO  uint8_t BSR1       : 1;
  __IO  uint8_t BSR2       : 1;
} stc_crg_bsc_psr_field_t;

typedef struct stc_crg_apbc0_psr_field
{
  __IO  uint8_t APBC00     : 1;
  __IO  uint8_t APBC01     : 1;
} stc_crg_apbc0_psr_field_t;

typedef struct stc_crg_apbc1_psr_field
{
  __IO  uint8_t APBC10     : 1;
  __IO  uint8_t APBC11     : 1;
        uint8_t RESERVED1  : 2;
  __IO  uint8_t APBC1RST   : 1;
        uint8_t RESERVED2  : 2;
  __IO  uint8_t APBC1EN    : 1;
} stc_crg_apbc1_psr_field_t;

typedef struct stc_crg_apbc2_psr_field
{
  __IO  uint8_t APBC20     : 1;
  __IO  uint8_t APBC21     : 1;
        uint8_t RESERVED1  : 2;
  __IO  uint8_t APBC2RST   : 1;
        uint8_t RESERVED2  : 2;
  __IO  uint8_t APBC2EN    : 1;
} stc_crg_apbc2_psr_field_t;

typedef struct stc_crg_swc_psr_field
{
  __IO  uint8_t SWDS0      : 1;
  __IO  uint8_t SWDS1      : 1;
        uint8_t RESERVED1  : 5;
  __IO  uint8_t TESTB      : 1;
} stc_crg_swc_psr_field_t;

typedef struct stc_crg_ttc_psr_field
{
  __IO  uint8_t TTC0       : 1;
  __IO  uint8_t TTC1       : 1;
} stc_crg_ttc_psr_field_t;

typedef struct stc_crg_csw_tmr_field
{
  __IO  uint8_t MOWT0      : 1;
  __IO  uint8_t MOWT1      : 1;
  __IO  uint8_t MOWT2      : 1;
  __IO  uint8_t MOWT3      : 1;
  __IO  uint8_t SOWT0      : 1;
  __IO  uint8_t SOWT1      : 1;
  __IO  uint8_t SOWT2      : 1;
} stc_crg_csw_tmr_field_t;

typedef struct stc_crg_psw_tmr_field
{
  __IO  uint8_t POWT0      : 1;
  __IO  uint8_t POWT1      : 1;
  __IO  uint8_t POWT2      : 1;
        uint8_t RESERVED1  : 1;
  __IO  uint8_t PINC       : 1;
} stc_crg_psw_tmr_field_t;

typedef struct stc_crg_pll_ctl1_field
{
  __IO  uint8_t PLLM0      : 1;
  __IO  uint8_t PLLM1      : 1;
  __IO  uint8_t PLLM2      : 1;
  __IO  uint8_t PLLM3      : 1;
  __IO  uint8_t PLLK0      : 1;
  __IO  uint8_t PLLK1      : 1;
  __IO  uint8_t PLLK2      : 1;
  __IO  uint8_t PLLK3      : 1;
} stc_crg_pll_ctl1_field_t;

typedef struct stc_crg_pll_ctl2_field
{
  __IO  uint8_t PLLN0      : 1;
  __IO  uint8_t PLLN1      : 1;
  __IO  uint8_t PLLN2      : 1;
  __IO  uint8_t PLLN3      : 1;
  __IO  uint8_t PLLN4      : 1;
  __IO  uint8_t PLLN5      : 1;
} stc_crg_pll_ctl2_field_t;

typedef struct stc_crg_csv_ctl_field
{
  __IO uint16_t MCSVE      : 1;
  __IO uint16_t SCSVE      : 1;
       uint16_t RESERVED1  : 6;
  __IO uint16_t FCSDE      : 1;
  __IO uint16_t FCSRE      : 1;
       uint16_t RESERVED2  : 2;
  __IO uint16_t FCD0       : 1;
  __IO uint16_t FCD1       : 1;
  __IO uint16_t FCD2       : 1;
} stc_crg_csv_ctl_field_t;

typedef struct stc_crg_csv_str_field
{
  __IO  uint8_t MCMF       : 1;
  __IO  uint8_t SCMF       : 1;
} stc_crg_csv_str_field_t;

typedef struct stc_crg_dbwdt_ctl_field
{
        uint8_t RESERVED1  : 5;
  __IO  uint8_t DPSWBE     : 1;
        uint8_t RESERVED2  : 1;
  __IO  uint8_t DPHWBE     : 1;
} stc_crg_dbwdt_ctl_field_t;

typedef struct stc_crg_int_enr_field
{
  __IO  uint8_t MCSE       : 1;
  __IO  uint8_t SCSE       : 1;
  __IO  uint8_t PCSE       : 1;
        uint8_t RESERVED1  : 2;
  __IO  uint8_t FCSE       : 1;
} stc_crg_int_enr_field_t;

typedef struct stc_crg_int_str_field
{
  __IO  uint8_t MCSI       : 1;
  __IO  uint8_t SCSI       : 1;
  __IO  uint8_t PCSI       : 1;
        uint8_t RESERVED1  : 2;
  __IO  uint8_t FCSI       : 1;
} stc_crg_int_str_field_t;

typedef struct stc_crg_int_clr_field
{
  __IO  uint8_t MCSC       : 1;
  __IO  uint8_t SCSC       : 1;
  __IO  uint8_t PCSC       : 1;
        uint8_t RESERVED1  : 2;
  __IO  uint8_t FCSC       : 1;
} stc_crg_int_clr_field_t;

/******************************************************************************
 * HWWDT_MODULE
 ******************************************************************************/
/* HWWDT_MODULE register bit fields */
typedef struct stc_hwwdt_wdg_ctl_field
{
  __IO  uint8_t INTEN      : 1;
  __IO  uint8_t RESEN      : 1;
} stc_hwwdt_wdg_ctl_field_t;

typedef struct stc_hwwdt_wdg_ris_field
{
  __IO  uint8_t RIS        : 1;
} stc_hwwdt_wdg_ris_field_t;

/******************************************************************************
 * SWWDT_MODULE
 ******************************************************************************/
/* SWWDT_MODULE register bit fields */
typedef struct stc_swwdt_wdogcontrol_field
{
  __IO  uint8_t INTEN      : 1;
  __IO  uint8_t RESEN      : 1;
} stc_swwdt_wdogcontrol_field_t;

typedef struct stc_swwdt_wdogris_field
{
  __IO  uint8_t RIS        : 1;
} stc_swwdt_wdogris_field_t;

/******************************************************************************
 * DTIM_MODULE
 ******************************************************************************/
/* DTIM_MODULE register bit fields */
typedef struct stc_dtim_timer1control_field
{
  __IO uint32_t ONESHOT    : 1;
  __IO uint32_t TIMERSIZE  : 1;
  __IO uint32_t TIMERPRE0  : 1;
  __IO uint32_t TIMERPRE1  : 1;
       uint32_t RESERVED1  : 1;
  __IO uint32_t INTENABLE  : 1;
  __IO uint32_t TIMERMODE  : 1;
  __IO uint32_t TIMEREN    : 1;
} stc_dtim_timer1control_field_t;

typedef struct stc_dtim_timer1ris_field
{
  __IO uint32_t TIMER1RIS  : 1;
} stc_dtim_timer1ris_field_t;

typedef struct stc_dtim_timer1mis_field
{
  __IO uint32_t TIMER1MIS  : 1;
} stc_dtim_timer1mis_field_t;

typedef struct stc_dtim_timer2control_field
{
  __IO uint32_t ONESHOT    : 1;
  __IO uint32_t TIMERSIZE  : 1;
  __IO uint32_t TIMERPRE0  : 1;
  __IO uint32_t TIMERPRE1  : 1;
       uint32_t RESERVED1  : 1;
  __IO uint32_t INTENABLE  : 1;
  __IO uint32_t TIMERMODE  : 1;
  __IO uint32_t TIMEREN    : 1;
} stc_dtim_timer2control_field_t;

typedef struct stc_dtim_timer2ris_field
{
  __IO uint32_t TIMER2RIS  : 1;
} stc_dtim_timer2ris_field_t;

typedef struct stc_dtim_timer2mis_field
{
  __IO uint32_t TIMER2MIS  : 1;
} stc_dtim_timer2mis_field_t;

/******************************************************************************
 * MFT_FRT_MODULE
 ******************************************************************************/
/* MFT_FRT_MODULE register bit fields */
typedef struct stc_mft_frt_tcsa0_field
{
  __IO uint16_t CLK0       : 1;
  __IO uint16_t CLK1       : 1;
  __IO uint16_t CLK2       : 1;
  __IO uint16_t CLK3       : 1;
  __IO uint16_t SCLR       : 1;
  __IO uint16_t MODE       : 1;
  __IO uint16_t STOP       : 1;
  __IO uint16_t BFE        : 1;
  __IO uint16_t ICRE       : 1;
  __IO uint16_t ICLR       : 1;
       uint16_t RESERVED1  : 3;
  __IO uint16_t IRQZE      : 1;
  __IO uint16_t IRQZF      : 1;
  __IO uint16_t ECKE       : 1;
} stc_mft_frt_tcsa0_field_t;

typedef struct stc_mft_frt_tcsb0_field
{
  __IO uint16_t AD0E       : 1;
  __IO uint16_t AD1E       : 1;
  __IO uint16_t AD2E       : 1;
} stc_mft_frt_tcsb0_field_t;

typedef struct stc_mft_frt_tcsa1_field
{
  __IO uint16_t CLK0       : 1;
  __IO uint16_t CLK1       : 1;
  __IO uint16_t CLK2       : 1;
  __IO uint16_t CLK3       : 1;
  __IO uint16_t SCLR       : 1;
  __IO uint16_t MODE       : 1;
  __IO uint16_t STOP       : 1;
  __IO uint16_t BFE        : 1;
  __IO uint16_t ICRE       : 1;
  __IO uint16_t ICLR       : 1;
       uint16_t RESERVED1  : 3;
  __IO uint16_t IRQZE      : 1;
  __IO uint16_t IRQZF      : 1;
  __IO uint16_t ECKE       : 1;
} stc_mft_frt_tcsa1_field_t;

typedef struct stc_mft_frt_tcsb1_field
{
  __IO uint16_t AD0E       : 1;
  __IO uint16_t AD1E       : 1;
  __IO uint16_t AD2E       : 1;
} stc_mft_frt_tcsb1_field_t;

typedef struct stc_mft_frt_tcsa2_field
{
  __IO uint16_t CLK0       : 1;
  __IO uint16_t CLK1       : 1;
  __IO uint16_t CLK2       : 1;
  __IO uint16_t CLK3       : 1;
  __IO uint16_t SCLR       : 1;
  __IO uint16_t MODE       : 1;
  __IO uint16_t STOP       : 1;
  __IO uint16_t BFE        : 1;
  __IO uint16_t ICRE       : 1;
  __IO uint16_t ICLR       : 1;
       uint16_t RESERVED1  : 3;
  __IO uint16_t IRQZE      : 1;
  __IO uint16_t IRQZF      : 1;
  __IO uint16_t ECKE       : 1;
} stc_mft_frt_tcsa2_field_t;

typedef struct stc_mft_frt_tcsb2_field
{
  __IO uint16_t AD0E       : 1;
  __IO uint16_t AD1E       : 1;
  __IO uint16_t AD2E       : 1;
} stc_mft_frt_tcsb2_field_t;

/******************************************************************************
 * MFT_OCU_MODULE
 ******************************************************************************/
/* MFT_OCU_MODULE register bit fields */
typedef struct stc_mft_ocu_ocsa10_field
{
  __IO  uint8_t CST0       : 1;
  __IO  uint8_t CST1       : 1;
  __IO  uint8_t BDIS0      : 1;
  __IO  uint8_t BDIS1      : 1;
  __IO  uint8_t IOE0       : 1;
  __IO  uint8_t IOE1       : 1;
  __IO  uint8_t IOP0       : 1;
  __IO  uint8_t IOP1       : 1;
} stc_mft_ocu_ocsa10_field_t;

typedef struct stc_mft_ocu_ocsb10_field
{
  __IO  uint8_t OTD0       : 1;
  __IO  uint8_t OTD1       : 1;
        uint8_t RESERVED1  : 2;
  __IO  uint8_t CMOD       : 1;
  __IO  uint8_t BTS0       : 1;
  __IO  uint8_t BTS1       : 1;
} stc_mft_ocu_ocsb10_field_t;

typedef struct stc_mft_ocu_ocsa32_field
{
  __IO  uint8_t CST2       : 1;
  __IO  uint8_t CST3       : 1;
  __IO  uint8_t BDIS2      : 1;
  __IO  uint8_t BDIS3      : 1;
  __IO  uint8_t IOE2       : 1;
  __IO  uint8_t IOE3       : 1;
  __IO  uint8_t IOP2       : 1;
  __IO  uint8_t IOP3       : 1;
} stc_mft_ocu_ocsa32_field_t;

typedef struct stc_mft_ocu_ocsb32_field
{
  __IO  uint8_t OTD2       : 1;
  __IO  uint8_t OTD3       : 1;
        uint8_t RESERVED1  : 2;
  __IO  uint8_t CMOD       : 1;
  __IO  uint8_t BTS2       : 1;
  __IO  uint8_t BTS3       : 1;
} stc_mft_ocu_ocsb32_field_t;

typedef struct stc_mft_ocu_ocsa54_field
{
  __IO  uint8_t CST4       : 1;
  __IO  uint8_t CST5       : 1;
  __IO  uint8_t BDIS4      : 1;
  __IO  uint8_t BDIS5      : 1;
  __IO  uint8_t IOE4       : 1;
  __IO  uint8_t IOE5       : 1;
  __IO  uint8_t IOP4       : 1;
  __IO  uint8_t IOP5       : 1;
} stc_mft_ocu_ocsa54_field_t;

typedef struct stc_mft_ocu_ocsb54_field
{
  __IO  uint8_t OTD4       : 1;
  __IO  uint8_t OTD5       : 1;
        uint8_t RESERVED1  : 2;
  __IO  uint8_t CMOD       : 1;
  __IO  uint8_t BTS4       : 1;
  __IO  uint8_t BTS5       : 1;
} stc_mft_ocu_ocsb54_field_t;

typedef struct stc_mft_ocu_ocsc_field
{
  __IO  uint8_t MOD0       : 1;
  __IO  uint8_t MOD1       : 1;
  __IO  uint8_t MOD2       : 1;
  __IO  uint8_t MOD3       : 1;
  __IO  uint8_t MOD4       : 1;
  __IO  uint8_t MOD5       : 1;
} stc_mft_ocu_ocsc_field_t;

typedef struct stc_mft_ocu_ocfs10_field
{
  __IO  uint8_t FSO00      : 1;
  __IO  uint8_t FSO01      : 1;
  __IO  uint8_t FSO02      : 1;
  __IO  uint8_t FSO03      : 1;
  __IO  uint8_t FSO10      : 1;
  __IO  uint8_t FSO11      : 1;
  __IO  uint8_t FSO12      : 1;
  __IO  uint8_t FSO13      : 1;
} stc_mft_ocu_ocfs10_field_t;

typedef struct stc_mft_ocu_ocfs32_field
{
  __IO  uint8_t FSO20      : 1;
  __IO  uint8_t FSO21      : 1;
  __IO  uint8_t FSO22      : 1;
  __IO  uint8_t FSO23      : 1;
  __IO  uint8_t FSO30      : 1;
  __IO  uint8_t FSO31      : 1;
  __IO  uint8_t FSO32      : 1;
  __IO  uint8_t FSO33      : 1;
} stc_mft_ocu_ocfs32_field_t;

typedef struct stc_mft_ocu_ocfs54_field
{
  __IO  uint8_t FSO40      : 1;
  __IO  uint8_t FSO41      : 1;
  __IO  uint8_t FSO42      : 1;
  __IO  uint8_t FSO43      : 1;
  __IO  uint8_t FSO50      : 1;
  __IO  uint8_t FSO51      : 1;
  __IO  uint8_t FSO52      : 1;
  __IO  uint8_t FSO53      : 1;
} stc_mft_ocu_ocfs54_field_t;

/******************************************************************************
 * MFT_WFG_MODULE
 ******************************************************************************/
/* MFT_WFG_MODULE register bit fields */
typedef struct stc_mft_wfg_wfsa10_field
{
  __IO uint16_t DCK0       : 1;
  __IO uint16_t DCK1       : 1;
  __IO uint16_t DCK2       : 1;
  __IO uint16_t TMD        : 3;
  __IO uint16_t GTEN0      : 1;
  __IO uint16_t GTEN1      : 1;
  __IO uint16_t PSEL0      : 1;
  __IO uint16_t PSEL1      : 1;
  __IO uint16_t PGEN0      : 1;
  __IO uint16_t PGEN1      : 1;
  __IO uint16_t DMOD       : 1;
} stc_mft_wfg_wfsa10_field_t;

typedef struct stc_mft_wfg_wfsa32_field
{
  __IO uint16_t DCK0       : 1;
  __IO uint16_t DCK1       : 1;
  __IO uint16_t DCK2       : 1;
  __IO uint16_t TMD        : 3;
  __IO uint16_t GTEN0      : 1;
  __IO uint16_t GTEN1      : 1;
  __IO uint16_t PSEL0      : 1;
  __IO uint16_t PSEL1      : 1;
  __IO uint16_t PGEN0      : 1;
  __IO uint16_t PGEN1      : 1;
  __IO uint16_t DMOD       : 1;
} stc_mft_wfg_wfsa32_field_t;

typedef struct stc_mft_wfg_wfsa54_field
{
  __IO uint16_t DCK0       : 1;
  __IO uint16_t DCK1       : 1;
  __IO uint16_t DCK2       : 1;
  __IO uint16_t TMD        : 3;
  __IO uint16_t GTEN0      : 1;
  __IO uint16_t GTEN1      : 1;
  __IO uint16_t PSEL0      : 1;
  __IO uint16_t PSEL1      : 1;
  __IO uint16_t PGEN0      : 1;
  __IO uint16_t PGEN1      : 1;
  __IO uint16_t DMOD       : 1;
} stc_mft_wfg_wfsa54_field_t;

typedef struct stc_mft_wfg_wfir_field
{
  __IO uint16_t DTIF       : 1;
  __IO uint16_t DTIC       : 1;
       uint16_t RESERVED1  : 2;
  __IO uint16_t TMIF10     : 1;
  __IO uint16_t TMIC10     : 1;
  __IO uint16_t TMIE10     : 1;
  __IO uint16_t TMIS10     : 1;
  __IO uint16_t TMIF32     : 1;
  __IO uint16_t TMIC32     : 1;
  __IO uint16_t TMIE32     : 1;
  __IO uint16_t TMIS32     : 1;
  __IO uint16_t TMIF54     : 1;
  __IO uint16_t TMIC54     : 1;
  __IO uint16_t TMIE54     : 1;
  __IO uint16_t TMIS54     : 1;
} stc_mft_wfg_wfir_field_t;

typedef struct stc_mft_wfg_nzcl_field
{
  __IO uint16_t DTIE       : 1;
  __IO uint16_t NWS0       : 1;
  __IO uint16_t NWS1       : 1;
  __IO uint16_t NWS2       : 1;
  __IO uint16_t SDTI       : 1;
} stc_mft_wfg_nzcl_field_t;

/******************************************************************************
 * MFT_ICU_MODULE
 ******************************************************************************/
/* MFT_ICU_MODULE register bit fields */
typedef struct stc_mft_icu_icfs10_field
{
  __IO  uint8_t FSI00      : 1;
  __IO  uint8_t FSI01      : 1;
  __IO  uint8_t FSI02      : 1;
  __IO  uint8_t FSI03      : 1;
  __IO  uint8_t FSI10      : 1;
  __IO  uint8_t FSI11      : 1;
  __IO  uint8_t FSI12      : 1;
  __IO  uint8_t FSI13      : 1;
} stc_mft_icu_icfs10_field_t;

typedef struct stc_mft_icu_icfs32_field
{
  __IO  uint8_t FSI20      : 1;
  __IO  uint8_t FSI21      : 1;
  __IO  uint8_t FSI22      : 1;
  __IO  uint8_t FSI23      : 1;
  __IO  uint8_t FSI30      : 1;
  __IO  uint8_t FSI31      : 1;
  __IO  uint8_t FSI32      : 1;
  __IO  uint8_t FSI33      : 1;
} stc_mft_icu_icfs32_field_t;

typedef struct stc_mft_icu_icsa10_field
{
  __IO  uint8_t EG00       : 1;
  __IO  uint8_t EG01       : 1;
  __IO  uint8_t EG10       : 1;
  __IO  uint8_t EG11       : 1;
  __IO  uint8_t ICE0       : 1;
  __IO  uint8_t ICE1       : 1;
  __IO  uint8_t ICP0       : 1;
  __IO  uint8_t ICP1       : 1;
} stc_mft_icu_icsa10_field_t;

typedef struct stc_mft_icu_icsb10_field
{
  __IO  uint8_t IEI0       : 1;
  __IO  uint8_t IEI1       : 1;
} stc_mft_icu_icsb10_field_t;

typedef struct stc_mft_icu_icsa32_field
{
  __IO  uint8_t EG20       : 1;
  __IO  uint8_t EG21       : 1;
  __IO  uint8_t EG30       : 1;
  __IO  uint8_t EG31       : 1;
  __IO  uint8_t ICE2       : 1;
  __IO  uint8_t ICE3       : 1;
  __IO  uint8_t ICP2       : 1;
  __IO  uint8_t ICP3       : 1;
} stc_mft_icu_icsa32_field_t;

typedef struct stc_mft_icu_icsb32_field
{
  __IO  uint8_t IEI2       : 1;
  __IO  uint8_t IEI3       : 1;
} stc_mft_icu_icsb32_field_t;

/******************************************************************************
 * MFT_ADCMP_MODULE
 ******************************************************************************/
/* MFT_ADCMP_MODULE register bit fields */
typedef struct stc_mft_adcmp_acsb_field
{
  __IO  uint8_t BDIS0      : 1;
  __IO  uint8_t BDIS1      : 1;
  __IO  uint8_t BDIS2      : 1;
        uint8_t RESERVED1  : 1;
  __IO  uint8_t BTS0       : 1;
  __IO  uint8_t BTS1       : 1;
  __IO  uint8_t BTS2       : 1;
} stc_mft_adcmp_acsb_field_t;

typedef struct stc_mft_adcmp_acsa_field
{
  __IO uint16_t CE00       : 1;
  __IO uint16_t CE01       : 1;
  __IO uint16_t CE10       : 1;
  __IO uint16_t CE11       : 1;
  __IO uint16_t CE20       : 1;
  __IO uint16_t CE21       : 1;
       uint16_t RESERVED1  : 2;
  __IO uint16_t SEL00      : 1;
  __IO uint16_t SEL01      : 1;
  __IO uint16_t SEL10      : 1;
  __IO uint16_t SEL11      : 1;
  __IO uint16_t SEL20      : 1;
  __IO uint16_t SEL21      : 1;
} stc_mft_adcmp_acsa_field_t;

typedef struct stc_mft_adcmp_atsa_field
{
  __IO uint16_t AD0S0      : 1;
  __IO uint16_t AD0S1      : 1;
  __IO uint16_t AD1S0      : 1;
  __IO uint16_t AD1S1      : 1;
  __IO uint16_t AD2S0      : 1;
  __IO uint16_t AD2S1      : 1;
       uint16_t RESERVED1  : 2;
  __IO uint16_t AD0P0      : 1;
  __IO uint16_t AD0P1      : 1;
  __IO uint16_t AD1P0      : 1;
  __IO uint16_t AD1P1      : 1;
  __IO uint16_t AD2P0      : 1;
  __IO uint16_t AD2P1      : 1;
} stc_mft_adcmp_atsa_field_t;

/******************************************************************************
 * MFT_PPG_MODULE
 ******************************************************************************/
/* MFT_PPG_MODULE register bit fields */
typedef struct stc_mft_ppg_ttcr0_field
{
  __IO  uint8_t STR0       : 1;
  __IO  uint8_t MONI0      : 1;
  __IO  uint8_t CS00       : 1;
  __IO  uint8_t CS01       : 1;
  __IO  uint8_t TRG0O      : 1;
  __IO  uint8_t TRG2O      : 1;
  __IO  uint8_t TRG4O      : 1;
  __IO  uint8_t TRG6O      : 1;
} stc_mft_ppg_ttcr0_field_t;

typedef struct stc_mft_ppg_trg_field
{
  __IO uint16_t PEN00      : 1;
  __IO uint16_t PEN01      : 1;
  __IO uint16_t PEN02      : 1;
  __IO uint16_t PEN03      : 1;
  __IO uint16_t PEN04      : 1;
  __IO uint16_t PEN05      : 1;
  __IO uint16_t PEN06      : 1;
  __IO uint16_t PEN07      : 1;
} stc_mft_ppg_trg_field_t;

typedef struct stc_mft_ppg_revc_field
{
  __IO uint16_t REV00      : 1;
  __IO uint16_t REV01      : 1;
  __IO uint16_t REV02      : 1;
  __IO uint16_t REV03      : 1;
  __IO uint16_t REV04      : 1;
  __IO uint16_t REV05      : 1;
  __IO uint16_t REV06      : 1;
  __IO uint16_t REV07      : 1;
} stc_mft_ppg_revc_field_t;

typedef struct stc_mft_ppg_ppgc1_field
{
  __IO  uint8_t TTRG       : 1;
  __IO  uint8_t MD         : 2;
  __IO  uint8_t PCS0       : 1;
  __IO  uint8_t PCS1       : 1;
  __IO  uint8_t INTM       : 1;
  __IO  uint8_t PUF        : 1;
  __IO  uint8_t PIE        : 1;
} stc_mft_ppg_ppgc1_field_t;

typedef struct stc_mft_ppg_ppgc0_field
{
  __IO  uint8_t TTRG       : 1;
  __IO  uint8_t MD         : 2;
  __IO  uint8_t PCS0       : 1;
  __IO  uint8_t PCS1       : 1;
  __IO  uint8_t INTM       : 1;
  __IO  uint8_t PUF        : 1;
  __IO  uint8_t PIE        : 1;
} stc_mft_ppg_ppgc0_field_t;

typedef struct stc_mft_ppg_ppgc2_field
{
  __IO  uint8_t TTRG       : 1;
  __IO  uint8_t MD         : 2;
  __IO  uint8_t PCS0       : 1;
  __IO  uint8_t PCS1       : 1;
  __IO  uint8_t INTM       : 1;
  __IO  uint8_t PUF        : 1;
  __IO  uint8_t PIE        : 1;
} stc_mft_ppg_ppgc2_field_t;

typedef struct stc_mft_ppg_ppgc3_field
{
  __IO  uint8_t TTRG       : 1;
  __IO  uint8_t MD         : 2;
  __IO  uint8_t PCS0       : 1;
  __IO  uint8_t PCS1       : 1;
  __IO  uint8_t INTM       : 1;
  __IO  uint8_t PUF        : 1;
  __IO  uint8_t PIE        : 1;
} stc_mft_ppg_ppgc3_field_t;

typedef struct stc_mft_ppg_gatec0_field
{
  __IO  uint8_t EDGE0      : 1;
  __IO  uint8_t STRG0      : 1;
        uint8_t RESERVED2  : 1;
  __IO  uint8_t EDGE2      : 1;
  __IO  uint8_t STRG2      : 1;
} stc_mft_ppg_gatec0_field_t;

typedef struct stc_mft_ppg_ppgc4_field
{
  __IO  uint8_t TTRG       : 1;
  __IO  uint8_t MD         : 2;
  __IO  uint8_t PCS0       : 1;
  __IO  uint8_t PCS1       : 1;
  __IO  uint8_t INTM       : 1;
  __IO  uint8_t PUF        : 1;
  __IO  uint8_t PIE        : 1;
} stc_mft_ppg_ppgc4_field_t;

typedef struct stc_mft_ppg_ppgc5_field
{
  __IO  uint8_t TTRG       : 1;
  __IO  uint8_t MD         : 2;
  __IO  uint8_t PCS0       : 1;
  __IO  uint8_t PCS1       : 1;
  __IO  uint8_t INTM       : 1;
  __IO  uint8_t PUF        : 1;
  __IO  uint8_t PIE        : 1;
} stc_mft_ppg_ppgc5_field_t;

typedef struct stc_mft_ppg_ppgc6_field
{
  __IO  uint8_t TTRG       : 1;
  __IO  uint8_t MD         : 2;
  __IO  uint8_t PCS0       : 1;
  __IO  uint8_t PCS1       : 1;
  __IO  uint8_t INTM       : 1;
  __IO  uint8_t PUF        : 1;
  __IO  uint8_t PIE        : 1;
} stc_mft_ppg_ppgc6_field_t;

typedef struct stc_mft_ppg_ppgc7_field
{
  __IO  uint8_t TTRG       : 1;
  __IO  uint8_t MD         : 2;
  __IO  uint8_t PCS0       : 1;
  __IO  uint8_t PCS1       : 1;
  __IO  uint8_t INTM       : 1;
  __IO  uint8_t PUF        : 1;
  __IO  uint8_t PIE        : 1;
} stc_mft_ppg_ppgc7_field_t;

typedef struct stc_mft_ppg_gatec4_field
{
  __IO  uint8_t EDGE4      : 1;
  __IO  uint8_t STRG4      : 1;
        uint8_t RESERVED2  : 2;
  __IO  uint8_t EDGE6      : 1;
  __IO  uint8_t STRG6      : 1;
} stc_mft_ppg_gatec4_field_t;

typedef struct stc_mft_ppg_igbtc_field
{
  __IO  uint8_t IGBTMD     : 1;
  __IO  uint8_t IGTRGLV    : 1;
  __IO  uint8_t IGOSEL0    : 1;
  __IO  uint8_t IGOSEL1    : 1;
  __IO  uint8_t IGNFW0     : 1;
  __IO  uint8_t IGNFW1     : 1;
  __IO  uint8_t IGNFW2     : 1;
  __IO  uint8_t IGATIH     : 1;
} stc_mft_ppg_igbtc_field_t;

/******************************************************************************
 * BT_PPG_MODULE
 ******************************************************************************/
/* BT_PPG_MODULE register bit fields */
typedef struct stc_bt_ppg_tmcr_field
{
  __IO uint16_t STRG       : 1;
  __IO uint16_t CTEN       : 1;
  __IO uint16_t MDSE       : 1;
  __IO uint16_t OSEL       : 1;
  __IO uint16_t FMD        : 3;
       uint16_t RESERVED1  : 1;
  __IO uint16_t EGS0       : 1;
  __IO uint16_t EGS1       : 1;
  __IO uint16_t PMSK       : 1;
  __IO uint16_t RTGEN      : 1;
  __IO uint16_t CKS0       : 1;
  __IO uint16_t CKS1       : 1;
  __IO uint16_t CKS2       : 1;
} stc_bt_ppg_tmcr_field_t;

typedef struct stc_bt_ppg_stc_field
{
  __IO  uint8_t UDIR       : 1;
        uint8_t RESERVED1  : 1;
  __IO  uint8_t TGIR       : 1;
        uint8_t RESERVED2  : 1;
  __IO  uint8_t UDIE       : 1;
        uint8_t RESERVED3  : 1;
  __IO  uint8_t TGIE       : 1;
} stc_bt_ppg_stc_field_t;

typedef struct stc_bt_ppg_tmcr2_field
{
  __IO  uint8_t CKS3       : 1;
} stc_bt_ppg_tmcr2_field_t;

/******************************************************************************
 * BT_PWM_MODULE
 ******************************************************************************/
/* BT_PWM_MODULE register bit fields */
typedef struct stc_bt_pwm_tmcr_field
{
  __IO uint16_t STRG       : 1;
  __IO uint16_t CTEN       : 1;
  __IO uint16_t MDSE       : 1;
  __IO uint16_t OSEL       : 1;
  __IO uint16_t FMD        : 3;
       uint16_t RESERVED1  : 1;
  __IO uint16_t EGS0       : 1;
  __IO uint16_t EGS1       : 1;
  __IO uint16_t PMSK       : 1;
  __IO uint16_t RTGEN      : 1;
  __IO uint16_t CKS0       : 1;
  __IO uint16_t CKS1       : 1;
  __IO uint16_t CKS2       : 1;
} stc_bt_pwm_tmcr_field_t;

typedef struct stc_bt_pwm_stc_field
{
  __IO  uint8_t UDIR       : 1;
  __IO  uint8_t DTIR       : 1;
  __IO  uint8_t TGIR       : 1;
        uint8_t RESERVED1  : 1;
  __IO  uint8_t UDIE       : 1;
  __IO  uint8_t DTIE       : 1;
  __IO  uint8_t TGIE       : 1;
} stc_bt_pwm_stc_field_t;

typedef struct stc_bt_pwm_tmcr2_field
{
  __IO  uint8_t CKS3       : 1;
} stc_bt_pwm_tmcr2_field_t;

/******************************************************************************
 * BT_RT_MODULE
 ******************************************************************************/
/* BT_RT_MODULE register bit fields */
typedef struct stc_bt_rt_tmcr_field
{
  __IO uint16_t STRG       : 1;
  __IO uint16_t CTEN       : 1;
  __IO uint16_t MDSE       : 1;
  __IO uint16_t OSEL       : 1;
  __IO uint16_t FMD        : 3;
  __IO uint16_t T32        : 1;
  __IO uint16_t EGS0       : 1;
  __IO uint16_t EGS1       : 1;
       uint16_t RESERVED1  : 2;
  __IO uint16_t CKS0       : 1;
  __IO uint16_t CKS1       : 1;
  __IO uint16_t CKS2       : 1;
} stc_bt_rt_tmcr_field_t;

typedef struct stc_bt_rt_stc_field
{
  __IO  uint8_t UDIR       : 1;
        uint8_t RESERVED1  : 1;
  __IO  uint8_t TGIR       : 1;
        uint8_t RESERVED2  : 1;
  __IO  uint8_t UDIE       : 1;
        uint8_t RESERVED3  : 1;
  __IO  uint8_t TGIE       : 1;
} stc_bt_rt_stc_field_t;

typedef struct stc_bt_rt_tmcr2_field
{
  __IO  uint8_t CKS3       : 1;
} stc_bt_rt_tmcr2_field_t;

/******************************************************************************
 * BT_PWC_MODULE
 ******************************************************************************/
/* BT_PWC_MODULE register bit fields */
typedef struct stc_bt_pwc_tmcr_field
{
       uint16_t RESERVED1  : 1;
  __IO uint16_t CTEN       : 1;
  __IO uint16_t MDSE       : 1;
       uint16_t RESERVED2  : 1;
  __IO uint16_t FMD        : 3;
  __IO uint16_t T32        : 1;
  __IO uint16_t EGS0       : 1;
  __IO uint16_t EGS1       : 1;
  __IO uint16_t EGS2       : 1;
       uint16_t RESERVED3  : 1;
  __IO uint16_t CKS0       : 1;
  __IO uint16_t CKS1       : 1;
  __IO uint16_t CKS2       : 1;
} stc_bt_pwc_tmcr_field_t;

typedef struct stc_bt_pwc_stc_field
{
  __IO  uint8_t OVIR       : 1;
        uint8_t RESERVED1  : 1;
  __IO  uint8_t EDIR       : 1;
        uint8_t RESERVED2  : 1;
  __IO  uint8_t OVIE       : 1;
        uint8_t RESERVED3  : 1;
  __IO  uint8_t EDIE       : 1;
  __IO  uint8_t ERR        : 1;
} stc_bt_pwc_stc_field_t;

typedef struct stc_bt_pwc_tmcr2_field
{
  __IO  uint8_t CKS3       : 1;
} stc_bt_pwc_tmcr2_field_t;

/******************************************************************************
 * BTIOSEL03_MODULE
 ******************************************************************************/
/* BTIOSEL03_MODULE register bit fields */
typedef struct stc_btiosel03_btsel0123_field
{
  __IO  uint8_t SEL01_0    : 1;
  __IO  uint8_t SEL01_1    : 1;
  __IO  uint8_t SEL01_2    : 1;
  __IO  uint8_t SEL01_3    : 1;
  __IO  uint8_t SEL23_0    : 1;
  __IO  uint8_t SEL23_1    : 1;
  __IO  uint8_t SEL23_2    : 1;
  __IO  uint8_t SEL23_3    : 1;
} stc_btiosel03_btsel0123_field_t;

/******************************************************************************
 * BTIOSEL47_MODULE
 ******************************************************************************/
/* BTIOSEL47_MODULE register bit fields */
typedef struct stc_btiosel47_btsel4567_field
{
  __IO  uint8_t SEL45_0    : 1;
  __IO  uint8_t SEL45_1    : 1;
  __IO  uint8_t SEL45_2    : 1;
  __IO  uint8_t SEL45_3    : 1;
  __IO  uint8_t SEL67_0    : 1;
  __IO  uint8_t SEL67_1    : 1;
  __IO  uint8_t SEL67_2    : 1;
  __IO  uint8_t SEL67_3    : 1;
} stc_btiosel47_btsel4567_field_t;

/******************************************************************************
 * SBSSR_MODULE
 ******************************************************************************/
/* SBSSR_MODULE register bit fields */
typedef struct stc_sbssr_btsssr_field
{
  __IO uint16_t SSSR0      : 1;
  __IO uint16_t SSSR1      : 1;
  __IO uint16_t SSSR2      : 1;
  __IO uint16_t SSSR3      : 1;
  __IO uint16_t SSSR4      : 1;
  __IO uint16_t SSSR5      : 1;
  __IO uint16_t SSSR6      : 1;
  __IO uint16_t SSSR7      : 1;
} stc_sbssr_btsssr_field_t;

/******************************************************************************
 * QPRC_MODULE
 ******************************************************************************/
/* QPRC_MODULE register bit fields */
typedef struct stc_qprc_qicr_field
{
  __IO uint16_t QPCMIE     : 1;
  __IO uint16_t QPCMF      : 1;
  __IO uint16_t QPRCMIE    : 1;
  __IO uint16_t QPRCMF     : 1;
  __IO uint16_t OUZIE      : 1;
  __IO uint16_t UFDF       : 1;
  __IO uint16_t OFDF       : 1;
  __IO uint16_t ZIIF       : 1;
  __IO uint16_t CDCIE      : 1;
  __IO uint16_t CDCF       : 1;
  __IO uint16_t DIRPC      : 1;
  __IO uint16_t DIROU      : 1;
  __IO uint16_t QPCNRCMIE  : 1;
  __IO uint16_t QPCNRCMF   : 1;
} stc_qprc_qicr_field_t;

typedef struct stc_qprc_qicrl_field
{
  __IO  uint8_t QPCMIE     : 1;
  __IO  uint8_t QPCMF      : 1;
  __IO  uint8_t QPRCMIE    : 1;
  __IO  uint8_t QPRCMF     : 1;
  __IO  uint8_t OUZIE      : 1;
  __IO  uint8_t UFDF       : 1;
  __IO  uint8_t OFDF       : 1;
  __IO  uint8_t ZIIF       : 1;
} stc_qprc_qicrl_field_t;

typedef struct stc_qprc_qicrh_field
{
  __IO  uint8_t CDCIE      : 1;
  __IO  uint8_t CDCF       : 1;
  __IO  uint8_t DIRPC      : 1;
  __IO  uint8_t DIROU      : 1;
  __IO  uint8_t QPCNRCMIE  : 1;
  __IO  uint8_t QPCNRCMF   : 1;
} stc_qprc_qicrh_field_t;

typedef struct stc_qprc_qcr_field
{
  __IO uint16_t PCM0       : 1;
  __IO uint16_t PCM1       : 1;
  __IO uint16_t RCM0       : 1;
  __IO uint16_t RCM1       : 1;
  __IO uint16_t PSTP       : 1;
  __IO uint16_t CGSC       : 1;
  __IO uint16_t RSEL       : 1;
  __IO uint16_t SWAP       : 1;
  __IO uint16_t PCRM0      : 1;
  __IO uint16_t PCRM1      : 1;
  __IO uint16_t AES0       : 1;
  __IO uint16_t AES1       : 1;
  __IO uint16_t BES0       : 1;
  __IO uint16_t BES1       : 1;
  __IO uint16_t CGE0       : 1;
  __IO uint16_t CGE1       : 1;
} stc_qprc_qcr_field_t;

typedef struct stc_qprc_qcrl_field
{
  __IO  uint8_t PCM0       : 1;
  __IO  uint8_t PCM1       : 1;
  __IO  uint8_t RCM0       : 1;
  __IO  uint8_t RCM1       : 1;
  __IO  uint8_t PSTP       : 1;
  __IO  uint8_t CGSC       : 1;
  __IO  uint8_t RSEL       : 1;
  __IO  uint8_t SWAP       : 1;
} stc_qprc_qcrl_field_t;

typedef struct stc_qprc_qcrh_field
{
  __IO  uint8_t PCRM0      : 1;
  __IO  uint8_t PCRM1      : 1;
  __IO  uint8_t AES0       : 1;
  __IO  uint8_t AES1       : 1;
  __IO  uint8_t BES0       : 1;
  __IO  uint8_t BES1       : 1;
  __IO  uint8_t CGE0       : 1;
  __IO  uint8_t CGE1       : 1;
} stc_qprc_qcrh_field_t;

typedef struct stc_qprc_qecr_field
{
  __IO uint16_t ORNGMD     : 1;
  __IO uint16_t ORNGF      : 1;
  __IO uint16_t ORNGIE     : 1;
} stc_qprc_qecr_field_t;

/******************************************************************************
 * ADC12_MODULE
 ******************************************************************************/
/* ADC12_MODULE register bit fields */
typedef struct stc_adc_adsr_field
{
  __IO  uint8_t SCS        : 1;
  __IO  uint8_t PCS        : 1;
  __IO  uint8_t PCNS       : 1;
        uint8_t RESERVED1  : 3;
  __IO  uint8_t FDAS       : 1;
  __IO  uint8_t ADSTP      : 1;
} stc_adc_adsr_field_t;

typedef struct stc_adc_adcr_field
{
  __IO  uint8_t OVRIE      : 1;
  __IO  uint8_t CMPIE      : 1;
  __IO  uint8_t PCIE       : 1;
  __IO  uint8_t SCIE       : 1;
        uint8_t RESERVED1  : 1;
  __IO  uint8_t CMPIF      : 1;
  __IO  uint8_t PCIF       : 1;
  __IO  uint8_t SCIF       : 1;
} stc_adc_adcr_field_t;

typedef struct stc_adc_sfns_field
{
  __IO  uint8_t SFS0       : 1;
  __IO  uint8_t SFS1       : 1;
  __IO  uint8_t SFS2       : 1;
  __IO  uint8_t SFS3       : 1;
} stc_adc_sfns_field_t;

typedef struct stc_adc_sccr_field
{
  __IO  uint8_t SSTR       : 1;
  __IO  uint8_t SHEN       : 1;
  __IO  uint8_t RPT        : 1;
        uint8_t RESERVED1  : 1;
  __IO  uint8_t SFCLR      : 1;
  __IO  uint8_t SOVR       : 1;
  __IO  uint8_t SFUL       : 1;
  __IO  uint8_t SEMP       : 1;
} stc_adc_sccr_field_t;

typedef struct stc_adc_scfd_field
{
  __IO uint32_t SC0        : 1;
  __IO uint32_t SC1        : 1;
  __IO uint32_t SC2        : 1;
  __IO uint32_t SC3        : 1;
  __IO uint32_t SC4        : 1;
       uint32_t RESERVED1  : 3;
  __IO uint32_t RS0        : 1;
  __IO uint32_t RS1        : 1;
       uint32_t RESERVED2  : 2;
  __IO uint32_t INVL       : 1;
       uint32_t RESERVED3  : 7;
  __IO uint32_t SD0        : 1;
  __IO uint32_t SD1        : 1;
  __IO uint32_t SD2        : 1;
  __IO uint32_t SD3        : 1;
  __IO uint32_t SD4        : 1;
  __IO uint32_t SD5        : 1;
  __IO uint32_t SD6        : 1;
  __IO uint32_t SD7        : 1;
  __IO uint32_t SD8        : 1;
  __IO uint32_t SD9        : 1;
  __IO uint32_t SD10       : 1;
  __IO uint32_t SD11       : 1;
} stc_adc_scfd_field_t;

typedef struct stc_adc_scfdl_field
{
  __IO uint16_t SC0        : 1;
  __IO uint16_t SC1        : 1;
  __IO uint16_t SC2        : 1;
  __IO uint16_t SC3        : 1;
  __IO uint16_t SC4        : 1;
       uint16_t RESERVED1  : 3;
  __IO uint16_t RS0        : 1;
  __IO uint16_t RS1        : 1;
       uint16_t RESERVED2  : 2;
  __IO uint16_t INVL       : 1;
} stc_adc_scfdl_field_t;

typedef struct stc_adc_scfdh_field
{
       uint16_t RESERVED1  : 4;
  __IO uint16_t SD0        : 1;
  __IO uint16_t SD1        : 1;
  __IO uint16_t SD2        : 1;
  __IO uint16_t SD3        : 1;
  __IO uint16_t SD4        : 1;
  __IO uint16_t SD5        : 1;
  __IO uint16_t SD6        : 1;
  __IO uint16_t SD7        : 1;
  __IO uint16_t SD8        : 1;
  __IO uint16_t SD9        : 1;
  __IO uint16_t SD10       : 1;
  __IO uint16_t SD11       : 1;
} stc_adc_scfdh_field_t;

typedef struct stc_adc_scis23_field
{
  __IO uint16_t AN16       : 1;
  __IO uint16_t AN17       : 1;
  __IO uint16_t AN18       : 1;
  __IO uint16_t AN19       : 1;
  __IO uint16_t AN20       : 1;
  __IO uint16_t AN21       : 1;
  __IO uint16_t AN22       : 1;
  __IO uint16_t AN23       : 1;
  __IO uint16_t AN24       : 1;
  __IO uint16_t AN25       : 1;
  __IO uint16_t AN26       : 1;
  __IO uint16_t AN27       : 1;
  __IO uint16_t AN28       : 1;
  __IO uint16_t AN29       : 1;
  __IO uint16_t AN30       : 1;
  __IO uint16_t AN31       : 1;
} stc_adc_scis23_field_t;

typedef struct stc_adc_scis2_field
{
  __IO  uint8_t AN16       : 1;
  __IO  uint8_t AN17       : 1;
  __IO  uint8_t AN18       : 1;
  __IO  uint8_t AN19       : 1;
  __IO  uint8_t AN20       : 1;
  __IO  uint8_t AN21       : 1;
  __IO  uint8_t AN22       : 1;
  __IO  uint8_t AN23       : 1;
} stc_adc_scis2_field_t;

typedef struct stc_adc_scis3_field
{
  __IO  uint8_t AN24       : 1;
  __IO  uint8_t AN25       : 1;
  __IO  uint8_t AN26       : 1;
  __IO  uint8_t AN27       : 1;
  __IO  uint8_t AN28       : 1;
  __IO  uint8_t AN29       : 1;
  __IO  uint8_t AN30       : 1;
  __IO  uint8_t AN31       : 1;
} stc_adc_scis3_field_t;

typedef struct stc_adc_scis01_field
{
  __IO uint16_t AN0        : 1;
  __IO uint16_t AN1        : 1;
  __IO uint16_t AN2        : 1;
  __IO uint16_t AN3        : 1;
  __IO uint16_t AN4        : 1;
  __IO uint16_t AN5        : 1;
  __IO uint16_t AN6        : 1;
  __IO uint16_t AN7        : 1;
  __IO uint16_t AN8        : 1;
  __IO uint16_t AN9        : 1;
  __IO uint16_t AN10       : 1;
  __IO uint16_t AN11       : 1;
  __IO uint16_t AN12       : 1;
  __IO uint16_t AN13       : 1;
  __IO uint16_t AN14       : 1;
  __IO uint16_t AN15       : 1;
} stc_adc_scis01_field_t;

typedef struct stc_adc_scis0_field
{
  __IO  uint8_t AN0        : 1;
  __IO  uint8_t AN1        : 1;
  __IO  uint8_t AN2        : 1;
  __IO  uint8_t AN3        : 1;
  __IO  uint8_t AN4        : 1;
  __IO  uint8_t AN5        : 1;
  __IO  uint8_t AN6        : 1;
  __IO  uint8_t AN7        : 1;
} stc_adc_scis0_field_t;

typedef struct stc_adc_scis1_field
{
  __IO  uint8_t AN8        : 1;
  __IO  uint8_t AN9        : 1;
  __IO  uint8_t AN10       : 1;
  __IO  uint8_t AN11       : 1;
  __IO  uint8_t AN12       : 1;
  __IO  uint8_t AN13       : 1;
  __IO  uint8_t AN14       : 1;
  __IO  uint8_t AN15       : 1;
} stc_adc_scis1_field_t;

typedef struct stc_adc_pfns_field
{
  __IO  uint8_t PFS0       : 1;
  __IO  uint8_t PFS1       : 1;
        uint8_t RESERVED1  : 2;
  __IO  uint8_t TEST0      : 1;
  __IO  uint8_t TEST1      : 1;
} stc_adc_pfns_field_t;

typedef struct stc_adc_pccr_field
{
  __IO  uint8_t PSTR       : 1;
  __IO  uint8_t PHEN       : 1;
  __IO  uint8_t PEEN       : 1;
  __IO  uint8_t ESCE       : 1;
  __IO  uint8_t PFCLR      : 1;
  __IO  uint8_t POVR       : 1;
  __IO  uint8_t PFUL       : 1;
  __IO  uint8_t PEMP       : 1;
} stc_adc_pccr_field_t;

typedef struct stc_adc_pcfd_field
{
  __IO uint32_t PC0        : 1;
  __IO uint32_t PC1        : 1;
  __IO uint32_t PC2        : 1;
  __IO uint32_t PC3        : 1;
  __IO uint32_t PC4        : 1;
       uint32_t RESERVED1  : 3;
  __IO uint32_t RS0        : 1;
  __IO uint32_t RS1        : 1;
  __IO uint32_t RS2        : 1;
       uint32_t RESERVED2  : 1;
  __IO uint32_t INVL       : 1;
       uint32_t RESERVED3  : 7;
  __IO uint32_t PD0        : 1;
  __IO uint32_t PD1        : 1;
  __IO uint32_t PD2        : 1;
  __IO uint32_t PD3        : 1;
  __IO uint32_t PD4        : 1;
  __IO uint32_t PD5        : 1;
  __IO uint32_t PD6        : 1;
  __IO uint32_t PD7        : 1;
  __IO uint32_t PD8        : 1;
  __IO uint32_t PD9        : 1;
  __IO uint32_t PD10       : 1;
  __IO uint32_t PD11       : 1;
} stc_adc_pcfd_field_t;

typedef struct stc_adc_pcfdl_field
{
  __IO uint16_t PC0        : 1;
  __IO uint16_t PC1        : 1;
  __IO uint16_t PC2        : 1;
  __IO uint16_t PC3        : 1;
  __IO uint16_t PC4        : 1;
       uint16_t RESERVED1  : 3;
  __IO uint16_t RS0        : 1;
  __IO uint16_t RS1        : 1;
  __IO uint16_t RS2        : 1;
       uint16_t RESERVED2  : 1;
  __IO uint16_t INVL       : 1;
} stc_adc_pcfdl_field_t;

typedef struct stc_adc_pcfdh_field
{
       uint16_t RESERVED1  : 4;
  __IO uint16_t PD0        : 1;
  __IO uint16_t PD1        : 1;
  __IO uint16_t PD2        : 1;
  __IO uint16_t PD3        : 1;
  __IO uint16_t PD4        : 1;
  __IO uint16_t PD5        : 1;
  __IO uint16_t PD6        : 1;
  __IO uint16_t PD7        : 1;
  __IO uint16_t PD8        : 1;
  __IO uint16_t PD9        : 1;
  __IO uint16_t PD10       : 1;
  __IO uint16_t PD11       : 1;
} stc_adc_pcfdh_field_t;

typedef struct stc_adc_pcis_field
{
  __IO  uint8_t P1A0       : 1;
  __IO  uint8_t P1A1       : 1;
  __IO  uint8_t P1A2       : 1;
  __IO  uint8_t P2A0       : 1;
  __IO  uint8_t P2A1       : 1;
  __IO  uint8_t P2A2       : 1;
  __IO  uint8_t P2A3       : 1;
  __IO  uint8_t P2A4       : 1;
} stc_adc_pcis_field_t;

typedef struct stc_adc_cmpcr_field
{
  __IO  uint8_t CCH0       : 1;
  __IO  uint8_t CCH1       : 1;
  __IO  uint8_t CCH2       : 1;
  __IO  uint8_t CCH3       : 1;
  __IO  uint8_t CCH4       : 1;
  __IO  uint8_t CMD0       : 1;
  __IO  uint8_t CMD1       : 1;
  __IO  uint8_t CMPEN      : 1;
} stc_adc_cmpcr_field_t;

typedef struct stc_adc_cmpd_field
{
       uint16_t RESERVED1  : 6;
  __IO uint16_t CMAD2      : 1;
  __IO uint16_t CMAD3      : 1;
  __IO uint16_t CMAD4      : 1;
  __IO uint16_t CMAD5      : 1;
  __IO uint16_t CMAD6      : 1;
  __IO uint16_t CMAD7      : 1;
  __IO uint16_t CMAD8      : 1;
  __IO uint16_t CMAD9      : 1;
  __IO uint16_t CMAD10     : 1;
  __IO uint16_t CMAD11     : 1;
} stc_adc_cmpd_field_t;

typedef struct stc_adc_adss23_field
{
  __IO uint16_t TS16       : 1;
  __IO uint16_t TS17       : 1;
  __IO uint16_t TS18       : 1;
  __IO uint16_t TS19       : 1;
  __IO uint16_t TS20       : 1;
  __IO uint16_t TS21       : 1;
  __IO uint16_t TS22       : 1;
  __IO uint16_t TS23       : 1;
  __IO uint16_t TS24       : 1;
  __IO uint16_t TS25       : 1;
  __IO uint16_t TS26       : 1;
  __IO uint16_t TS27       : 1;
  __IO uint16_t TS28       : 1;
  __IO uint16_t TS29       : 1;
  __IO uint16_t TS30       : 1;
  __IO uint16_t TS31       : 1;
} stc_adc_adss23_field_t;

typedef struct stc_adc_adss2_field
{
  __IO  uint8_t TS16       : 1;
  __IO  uint8_t TS17       : 1;
  __IO  uint8_t TS18       : 1;
  __IO  uint8_t TS19       : 1;
  __IO  uint8_t TS20       : 1;
  __IO  uint8_t TS21       : 1;
  __IO  uint8_t TS22       : 1;
  __IO  uint8_t TS23       : 1;
} stc_adc_adss2_field_t;

typedef struct stc_adc_adss3_field
{
  __IO  uint8_t TS24       : 1;
  __IO  uint8_t TS25       : 1;
  __IO  uint8_t TS26       : 1;
  __IO  uint8_t TS27       : 1;
  __IO  uint8_t TS28       : 1;
  __IO  uint8_t TS29       : 1;
  __IO  uint8_t TS30       : 1;
  __IO  uint8_t TS31       : 1;
} stc_adc_adss3_field_t;

typedef struct stc_adc_adss01_field
{
  __IO uint16_t TS0        : 1;
  __IO uint16_t TS1        : 1;
  __IO uint16_t TS2        : 1;
  __IO uint16_t TS3        : 1;
  __IO uint16_t TS4        : 1;
  __IO uint16_t TS5        : 1;
  __IO uint16_t TS6        : 1;
  __IO uint16_t TS7        : 1;
  __IO uint16_t TS8        : 1;
  __IO uint16_t TS9        : 1;
  __IO uint16_t TS10       : 1;
  __IO uint16_t TS11       : 1;
  __IO uint16_t TS12       : 1;
  __IO uint16_t TS13       : 1;
  __IO uint16_t TS14       : 1;
  __IO uint16_t TS15       : 1;
} stc_adc_adss01_field_t;

typedef struct stc_adc_adss0_field
{
  __IO  uint8_t TS0        : 1;
  __IO  uint8_t TS1        : 1;
  __IO  uint8_t TS2        : 1;
  __IO  uint8_t TS3        : 1;
  __IO  uint8_t TS4        : 1;
  __IO  uint8_t TS5        : 1;
  __IO  uint8_t TS6        : 1;
  __IO  uint8_t TS7        : 1;
} stc_adc_adss0_field_t;

typedef struct stc_adc_adss1_field
{
  __IO  uint8_t TS8        : 1;
  __IO  uint8_t TS9        : 1;
  __IO  uint8_t TS10       : 1;
  __IO  uint8_t TS11       : 1;
  __IO  uint8_t TS12       : 1;
  __IO  uint8_t TS13       : 1;
  __IO  uint8_t TS14       : 1;
  __IO  uint8_t TS15       : 1;
} stc_adc_adss1_field_t;

typedef struct stc_adc_adst01_field
{
  __IO uint16_t ST10       : 1;
  __IO uint16_t ST11       : 1;
  __IO uint16_t ST12       : 1;
  __IO uint16_t ST13       : 1;
  __IO uint16_t ST14       : 1;
  __IO uint16_t STX10      : 1;
  __IO uint16_t STX11      : 1;
  __IO uint16_t STX12      : 1;
  __IO uint16_t ST00       : 1;
  __IO uint16_t ST01       : 1;
  __IO uint16_t ST02       : 1;
  __IO uint16_t ST03       : 1;
  __IO uint16_t ST04       : 1;
  __IO uint16_t STX00      : 1;
  __IO uint16_t STX01      : 1;
  __IO uint16_t STX02      : 1;
} stc_adc_adst01_field_t;

typedef struct stc_adc_adst1_field
{
  __IO  uint8_t ST10       : 1;
  __IO  uint8_t ST11       : 1;
  __IO  uint8_t ST12       : 1;
  __IO  uint8_t ST13       : 1;
  __IO  uint8_t ST14       : 1;
  __IO  uint8_t STX10      : 1;
  __IO  uint8_t STX11      : 1;
  __IO  uint8_t STX12      : 1;
} stc_adc_adst1_field_t;

typedef struct stc_adc_adst0_field
{
  __IO  uint8_t ST00       : 1;
  __IO  uint8_t ST01       : 1;
  __IO  uint8_t ST02       : 1;
  __IO  uint8_t ST03       : 1;
  __IO  uint8_t ST04       : 1;
  __IO  uint8_t STX00      : 1;
  __IO  uint8_t STX01      : 1;
  __IO  uint8_t STX02      : 1;
} stc_adc_adst0_field_t;

typedef struct stc_adc_adct_field
{
  __IO  uint8_t CT0        : 1;
  __IO  uint8_t CT1        : 1;
  __IO  uint8_t CT2        : 1;
  __IO  uint8_t CT3        : 1;
  __IO  uint8_t CT4        : 1;
  __IO  uint8_t CT5        : 1;
  __IO  uint8_t CT6        : 1;
  __IO  uint8_t CT7        : 1;
} stc_adc_adct_field_t;

typedef struct stc_adc_prtsl_field
{
  __IO  uint8_t PRTSL0     : 1;
  __IO  uint8_t PRTSL1     : 1;
  __IO  uint8_t PRTSL2     : 1;
  __IO  uint8_t PRTSL3     : 1;
} stc_adc_prtsl_field_t;

typedef struct stc_adc_sctsl_field
{
  __IO  uint8_t SCTSL0     : 1;
  __IO  uint8_t SCTSL1     : 1;
  __IO  uint8_t SCTSL2     : 1;
  __IO  uint8_t SCTSL3     : 1;
} stc_adc_sctsl_field_t;

typedef struct stc_adc_adcen_field
{
  __IO uint16_t ENBL       : 1;
  __IO uint16_t READY      : 1;
       uint16_t RESERVED1  : 6;
  __IO uint16_t ENBLTIME8  : 1;
  __IO uint16_t ENBLTIME9  : 1;
  __IO uint16_t ENBLTIME10 : 1;
  __IO uint16_t ENBLTIME11 : 1;
  __IO uint16_t ENBLTIME12 : 1;
  __IO uint16_t ENBLTIME13 : 1;
  __IO uint16_t ENBLTIME14 : 1;
  __IO uint16_t ENBLTIME15 : 1;
} stc_adc_adcen_field_t;

/******************************************************************************
 * DAC_MODULE
 ******************************************************************************/
/* 10-bit DAC registers bit fields */
typedef struct stc_dac_dadr0_field
{
  __IO uint16_t DA0        : 1;
  __IO uint16_t DA1        : 1;
  __IO uint16_t DA2        : 1;
  __IO uint16_t DA3        : 1;
  __IO uint16_t DA4        : 1;
  __IO uint16_t DA5        : 1;
  __IO uint16_t DA6        : 1;
  __IO uint16_t DA7        : 1;
  __IO uint16_t DA8        : 1;
  __IO uint16_t DA9        : 1;
} stc_dac_dadr0_field_t;

typedef struct stc_dac_dacr0_field
{
  __IO  uint8_t DAE        : 1;
} stc_dac_dacr0_field_t;

typedef struct stc_dac_dadr1_field
{
  __IO uint16_t DA0        : 1;
  __IO uint16_t DA1        : 1;
  __IO uint16_t DA2        : 1;
  __IO uint16_t DA3        : 1;
  __IO uint16_t DA4        : 1;
  __IO uint16_t DA5        : 1;
  __IO uint16_t DA6        : 1;
  __IO uint16_t DA7        : 1;
  __IO uint16_t DA8        : 1;
  __IO uint16_t DA9        : 1;
} stc_dac_dadr1_field_t;

typedef struct stc_dac_dacr1_field
{
  __IO  uint8_t DAE        : 1;
} stc_dac_dacr1_field_t;

/******************************************************************************
 * DAC_MODULE
 ******************************************************************************/
/* 10-bit DAC registers */
typedef struct
{
  union {
    __IO uint16_t DADR0;
    stc_dac_dadr0_field_t DADR0_f;
  };
  union {
    __IO  uint8_t DACR0;
    stc_dac_dacr0_field_t DACR0_f;
  };
        uint8_t RESERVED1;
  union {
    __IO uint16_t DADR1;
    stc_dac_dadr1_field_t DADR1_f;
  };
  union {
    __IO  uint8_t DACR1;
    stc_dac_dacr1_field_t DACR1_f;
  };
}FM3_DAC_TypeDef;

/******************************************************************************
 * CRTRIM_MODULE
 ******************************************************************************/
/* CRTRIM_MODULE register bit fields */
typedef struct stc_crtrim_mcr_psr_field
{
  __IO  uint8_t CSR0       : 1;
  __IO  uint8_t CSR1       : 1;
} stc_crtrim_mcr_psr_field_t;

typedef struct stc_crtrim_mcr_ftrm_field
{
  __IO uint16_t TRD0       : 1;
  __IO uint16_t TRD1       : 1;
  __IO uint16_t TRD2       : 1;
  __IO uint16_t TRD3       : 1;
  __IO uint16_t TRD4       : 1;
  __IO uint16_t TRD5       : 1;
  __IO uint16_t TRD6       : 1;
  __IO uint16_t TRD7       : 1;
  __IO uint16_t TRD8       : 1;
  __IO uint16_t TRD9       : 1;
} stc_crtrim_mcr_ftrm_field_t;

/******************************************************************************
 * EXTI_MODULE
 ******************************************************************************/
/* EXTI_MODULE register bit fields */
typedef struct stc_exti_enir_field
{
  __IO uint32_t EN0        : 1;
  __IO uint32_t EN1        : 1;
  __IO uint32_t EN2        : 1;
  __IO uint32_t EN3        : 1;
       uint32_t RESERVED1  : 2;
  __IO uint32_t EN6        : 1;
  __IO uint32_t EN7        : 1;
       uint32_t RESERVED0  : 6;
  __IO uint32_t EN14       : 1;
  __IO uint32_t EN15       : 1;
  __IO uint32_t EN16       : 1;
  __IO uint32_t EN17       : 1;
  __IO uint32_t EN18       : 1;
  __IO uint32_t EN19       : 1;
  __IO uint32_t EN20       : 1;
  __IO uint32_t EN21       : 1;
} stc_exti_enir_field_t;

typedef struct stc_exti_eirr_field
{
  __IO uint32_t ER0        : 1;
  __IO uint32_t ER1        : 1;
  __IO uint32_t ER2        : 1;
  __IO uint32_t ER3        : 1;
       uint32_t RESERVED1  : 2;
  __IO uint32_t ER6        : 1;
  __IO uint32_t ER7        : 1;
       uint32_t RESERVED0  : 6;
  __IO uint32_t ER14       : 1;
  __IO uint32_t ER15       : 1;
  __IO uint32_t ER16       : 1;
  __IO uint32_t ER17       : 1;
  __IO uint32_t ER18       : 1;
  __IO uint32_t ER19       : 1;
  __IO uint32_t ER20       : 1;
  __IO uint32_t ER21       : 1;
} stc_exti_eirr_field_t;

typedef struct stc_exti_eicl_field
{
  __IO uint32_t ECL0       : 1;
  __IO uint32_t ECL1       : 1;
  __IO uint32_t ECL2       : 1;
  __IO uint32_t ECL3       : 1;
       uint32_t RESERVED1  : 2;
  __IO uint32_t ECL6       : 1;
  __IO uint32_t ECL7       : 1;
       uint32_t RESERVED0  : 6;
  __IO uint32_t ECL14      : 1;
  __IO uint32_t ECL15      : 1;
  __IO uint32_t ECL16      : 1;
  __IO uint32_t ECL17      : 1;
  __IO uint32_t ECL18      : 1;
  __IO uint32_t ECL19      : 1;
  __IO uint32_t ECL20      : 1;
  __IO uint32_t ECL21      : 1;
} stc_exti_eicl_field_t;

typedef struct stc_exti_elvr_field
{
  __IO uint32_t LA0        : 1;
  __IO uint32_t LB0        : 1;
  __IO uint32_t LA1        : 1;
  __IO uint32_t LB1        : 1;
  __IO uint32_t LA2        : 1;
  __IO uint32_t LB2        : 1;
  __IO uint32_t LA3        : 1;
  __IO uint32_t LB3        : 1;
       uint32_t RESERVED1  : 4;
  __IO uint32_t LA6        : 1;
  __IO uint32_t LB6        : 1;
  __IO uint32_t LA7        : 1;
  __IO uint32_t LB7        : 1;
       uint32_t RESERVED0  :12;
  __IO uint32_t LA14       : 1;
  __IO uint32_t LB14       : 1;
  __IO uint32_t LA15       : 1;
  __IO uint32_t LB15       : 1;
} stc_exti_elvr_field_t;

typedef struct stc_exti_elvr1_field
{
  __IO uint32_t LA16       : 1;
  __IO uint32_t LB16       : 1;
  __IO uint32_t LA17       : 1;
  __IO uint32_t LB17       : 1;
  __IO uint32_t LA18       : 1;
  __IO uint32_t LB18       : 1;
  __IO uint32_t LA19       : 1;
  __IO uint32_t LB19       : 1;
  __IO uint32_t LA20       : 1;
  __IO uint32_t LB20       : 1;
  __IO uint32_t LA21       : 1;
  __IO uint32_t LB21       : 1;
} stc_exti_elvr1_field_t;

typedef struct stc_exti_nmirr_field
{
  __IO  uint8_t NR         : 1;
} stc_exti_nmirr_field_t;

typedef struct stc_exti_nmicl_field
{
  __IO  uint8_t NCL        : 1;
} stc_exti_nmicl_field_t;

/******************************************************************************
 * INTREQ_MODULE
 ******************************************************************************/
/* INTREQ_MODULE register bit fields */
typedef struct stc_intreq_drqsel_field
{
  __IO uint32_t DRQSEL0    : 1;
  __IO uint32_t DRQSEL1    : 1;
  __IO uint32_t DRQSEL2    : 1;
  __IO uint32_t DRQSEL3    : 1;
  __IO uint32_t DRQSEL4    : 1;
  __IO uint32_t DRQSEL5    : 1;
  __IO uint32_t DRQSEL6    : 1;
  __IO uint32_t DRQSEL7    : 1;
  __IO uint32_t DRQSEL8    : 1;
  __IO uint32_t DRQSEL9    : 1;
  __IO uint32_t DRQSEL10   : 1;
  __IO uint32_t DRQSEL11   : 1;
  __IO uint32_t DRQSEL12   : 1;
  __IO uint32_t DRQSEL13   : 1;
  __IO uint32_t DRQSEL14   : 1;
  __IO uint32_t DRQSEL15   : 1;
  __IO uint32_t DRQSEL16   : 1;
  __IO uint32_t DRQSEL17   : 1;
  __IO uint32_t DRQSEL18   : 1;
  __IO uint32_t DRQSEL19   : 1;
  __IO uint32_t DRQSEL20   : 1;
  __IO uint32_t DRQSEL21   : 1;
  __IO uint32_t DRQSEL22   : 1;
  __IO uint32_t DRQSEL23   : 1;
  __IO uint32_t DRQSEL24   : 1;
  __IO uint32_t DRQSEL25   : 1;
  __IO uint32_t DRQSEL26   : 1;
  __IO uint32_t DRQSEL27   : 1;
  __IO uint32_t DRQSEL28   : 1;
  __IO uint32_t DRQSEL29   : 1;
  __IO uint32_t DRQSEL30   : 1;
  __IO uint32_t DRQSEL31   : 1;
} stc_intreq_drqsel_field_t;

typedef struct stc_intreq_oddpks_field
{
  __IO  uint8_t ODDPKS0    : 1;
  __IO  uint8_t ODDPKS1    : 1;
  __IO  uint8_t ODDPKS2    : 1;
  __IO  uint8_t ODDPKS3    : 1;
  __IO  uint8_t ODDPKS4    : 1;
} stc_intreq_oddpks_field_t;

typedef struct stc_intreq_irqcmode_field
{
  __IO uint32_t IRQCMODE   : 1;
} stc_intreq_irqcmode_field_t;

typedef struct stc_intreq_exc02mon_field
{
  __IO uint32_t NMI        : 1;
  __IO uint32_t HWINT      : 1;
} stc_intreq_exc02mon_field_t;

typedef struct stc_intreq_irq00mon_field
{
  __IO uint32_t FCSINT     : 1;
} stc_intreq_irq00mon_field_t;

typedef struct stc_intreq_irq01mon_field
{
  __IO uint32_t SWWDTINT   : 1;
} stc_intreq_irq01mon_field_t;

typedef struct stc_intreq_irq02mon_field
{
  __IO uint32_t LVDINT     : 1;
} stc_intreq_irq02mon_field_t;

typedef struct stc_intreq_irq03mon_field
{
  __IO uint32_t WAVE0INT0  : 1;
  __IO uint32_t WAVE0INT1  : 1;
  __IO uint32_t WAVE0INT2  : 1;
  __IO uint32_t WAVE0INT3  : 1;
} stc_intreq_irq03mon_field_t;

typedef struct stc_intreq_irq04mon_field
{
  __IO uint32_t EXTINT0    : 1;
  __IO uint32_t EXTINT1    : 1;
  __IO uint32_t EXTINT2    : 1;
  __IO uint32_t EXTINT3    : 1;
       uint32_t RESERVED0  : 2;
  __IO uint32_t EXTINT6    : 1;
  __IO uint32_t EXTINT7    : 1;
} stc_intreq_irq04mon_field_t;

typedef struct stc_intreq_irq05mon_field
{
       uint32_t RESERVED0  : 6;
  __IO uint32_t EXTINT6    : 1;
  __IO uint32_t EXTINT7    : 1;
  __IO uint32_t EXTINT8    : 1;
  __IO uint32_t EXTINT9    : 1;
  __IO uint32_t EXTINT10   : 1;
  __IO uint32_t EXTINT11   : 1;
  __IO uint32_t EXTINT12   : 1;
  __IO uint32_t EXTINT13   : 1;
} stc_intreq_irq05mon_field_t;

typedef struct stc_intreq_irq06mon_field
{
  __IO uint32_t TIMINT1    : 1;
  __IO uint32_t TIMINT2    : 1;
  __IO uint32_t QUD0INT0   : 1;
  __IO uint32_t QUD0INT1   : 1;
  __IO uint32_t QUD0INT2   : 1;
  __IO uint32_t QUD0INT3   : 1;
  __IO uint32_t QUD0INT4   : 1;
  __IO uint32_t QUD0INT5   : 1;
} stc_intreq_irq06mon_field_t;

typedef struct stc_intreq_irq07mon_field
{
  __IO uint32_t MFSINT0    : 1;
} stc_intreq_irq07mon_field_t;

typedef struct stc_intreq_irq08mon_field
{
  __IO uint32_t MFSINT0    : 1;
  __IO uint32_t MFSINT1    : 1;
} stc_intreq_irq08mon_field_t;

typedef struct stc_intreq_irq09mon_field
{
  __IO uint32_t MFSINT0    : 1;
} stc_intreq_irq09mon_field_t;

typedef struct stc_intreq_irq10mon_field
{
  __IO uint32_t MFSINT0    : 1;
  __IO uint32_t MFSINT1    : 1;
} stc_intreq_irq10mon_field_t;

typedef struct stc_intreq_irq11mon_field
{
       uint32_t RESERVED0  :32;
} stc_intreq_irq11mon_field_t;

typedef struct stc_intreq_irq12mon_field
{
       uint32_t RESERVED0  :32;
} stc_intreq_irq12mon_field_t;

typedef struct stc_intreq_irq13mon_field
{
  __IO uint32_t MFSINT0    : 1;
} stc_intreq_irq13mon_field_t;

typedef struct stc_intreq_irq14mon_field
{
  __IO uint32_t MFSINT0    : 1;
  __IO uint32_t MFSINT1    : 1;
} stc_intreq_irq14mon_field_t;

typedef struct stc_intreq_irq15mon_field
{
       uint32_t RESERVED0  :32;
} stc_intreq_irq15mon_field_t;

typedef struct stc_intreq_irq16mon_field
{
       uint32_t RESERVED0  :32;
} stc_intreq_irq16mon_field_t;

typedef struct stc_intreq_irq17mon_field
{
  __IO uint32_t MFSINT0    : 1;
} stc_intreq_irq17mon_field_t;

typedef struct stc_intreq_irq18mon_field
{
  __IO uint32_t MFSINT0    : 1;
  __IO uint32_t MFSINT1    : 1;
} stc_intreq_irq18mon_field_t;

typedef struct stc_intreq_irq19mon_field
{
       uint32_t RESERVED0  :32;
} stc_intreq_irq19mon_field_t;

typedef struct stc_intreq_irq20mon_field
{
       uint32_t RESERVED0  :32;
} stc_intreq_irq20mon_field_t;

typedef struct stc_intreq_irq21mon_field
{
       uint32_t RESERVED0  :32;
} stc_intreq_irq21mon_field_t;

typedef struct stc_intreq_irq22mon_field
{
       uint32_t RESERVED0  :32;
} stc_intreq_irq22mon_field_t;

typedef struct stc_intreq_irq23mon_field
{
  __IO uint32_t PPGINT0    : 1;
  __IO uint32_t PPGINT1    : 1;
  __IO uint32_t PPGINT2    : 1;
} stc_intreq_irq23mon_field_t;

typedef struct stc_intreq_irq24mon_field
{
  __IO uint32_t MOSCINT    : 1;
  __IO uint32_t SOSCINT    : 1;
  __IO uint32_t MPLLINT    : 1;
  __IO uint32_t UPLLINT    : 1;
  __IO uint32_t WCINT      : 1;
  __IO uint32_t RTCINT     : 1;
} stc_intreq_irq24mon_field_t;

typedef struct stc_intreq_irq25mon_field
{
  __IO uint32_t ADCINT0    : 1;
  __IO uint32_t ADCINT1    : 1;
  __IO uint32_t ADCINT2    : 1;
  __IO uint32_t ADCINT3    : 1;
} stc_intreq_irq25mon_field_t;

typedef struct stc_intreq_irq26mon_field
{
  __IO uint32_t ADCINT0    : 1;
  __IO uint32_t ADCINT1    : 1;
  __IO uint32_t ADCINT2    : 1;
  __IO uint32_t ADCINT3    : 1;
} stc_intreq_irq26mon_field_t;

typedef struct stc_intreq_irq28mon_field
{
  __IO uint32_t FRT0INT0   : 1;
  __IO uint32_t FRT0INT1   : 1;
  __IO uint32_t FRT0INT2   : 1;
  __IO uint32_t FRT0INT3   : 1;
  __IO uint32_t FRT0INT4   : 1;
  __IO uint32_t FRT0INT5   : 1;
} stc_intreq_irq28mon_field_t;

typedef struct stc_intreq_irq29mon_field
{
  __IO uint32_t ICU0INT0   : 1;
  __IO uint32_t ICU0INT1   : 1;
  __IO uint32_t ICU0INT2   : 1;
  __IO uint32_t ICU0INT3   : 1;
} stc_intreq_irq29mon_field_t;

typedef struct stc_intreq_irq30mon_field
{
  __IO uint32_t OCU0INT0   : 1;
  __IO uint32_t OCU0INT1   : 1;
  __IO uint32_t OCU0INT2   : 1;
  __IO uint32_t OCU0INT3   : 1;
  __IO uint32_t OCU0INT4   : 1;
  __IO uint32_t OCU0INT5   : 1;
} stc_intreq_irq30mon_field_t;

typedef struct stc_intreq_irq31mon_field
{
  __IO uint32_t BTINT0     : 1;
  __IO uint32_t BTINT1     : 1;
  __IO uint32_t BTINT2     : 1;
  __IO uint32_t BTINT3     : 1;
  __IO uint32_t BTINT4     : 1;
  __IO uint32_t BTINT5     : 1;
  __IO uint32_t BTINT6     : 1;
  __IO uint32_t BTINT7     : 1;
  __IO uint32_t BTINT8     : 1;
  __IO uint32_t BTINT9     : 1;
  __IO uint32_t BTINT10    : 1;
  __IO uint32_t BTINT11    : 1;
  __IO uint32_t BTINT12    : 1;
  __IO uint32_t BTINT13    : 1;
  __IO uint32_t BTINT14    : 1;
  __IO uint32_t BTINT15    : 1;
} stc_intreq_irq31mon_field_t;

typedef struct stc_intreq_irq33mon_field
{
  __IO uint32_t CAN1INT    : 1;
} stc_intreq_irq33mon_field_t;

typedef struct stc_intreq_irq34mon_field
{
  __IO uint32_t USB0INT0   : 1;
  __IO uint32_t USB0INT1   : 1;
  __IO uint32_t USB0INT2   : 1;
  __IO uint32_t USB0INT3   : 1;
  __IO uint32_t USB0INT4   : 1;
} stc_intreq_irq34mon_field_t;

typedef struct stc_intreq_irq35mon_field
{
  __IO uint32_t USB0INT0   : 1;
  __IO uint32_t USB0INT1   : 1;
  __IO uint32_t USB0INT2   : 1;
  __IO uint32_t USB0INT3   : 1;
  __IO uint32_t USB0INT4   : 1;
  __IO uint32_t USB0INT5   : 1;
} stc_intreq_irq35mon_field_t;

typedef struct stc_intreq_irq38mon_field
{
  __IO uint32_t DMAINT     : 1;
} stc_intreq_irq38mon_field_t;

typedef struct stc_intreq_irq39mon_field
{
  __IO uint32_t DMAINT     : 1;
} stc_intreq_irq39mon_field_t;

typedef struct stc_intreq_irq40mon_field
{
  __IO uint32_t DMAINT     : 1;
} stc_intreq_irq40mon_field_t;

typedef struct stc_intreq_irq41mon_field
{
  __IO uint32_t DMAINT     : 1;
} stc_intreq_irq41mon_field_t;

typedef struct stc_intreq_irq42mon_field
{
  __IO uint32_t DMAINT     : 1;
} stc_intreq_irq42mon_field_t;

typedef struct stc_intreq_irq43mon_field
{
  __IO uint32_t DMAINT     : 1;
} stc_intreq_irq43mon_field_t;

typedef struct stc_intreq_irq44mon_field
{
  __IO uint32_t DMAINT     : 1;
} stc_intreq_irq44mon_field_t;

typedef struct stc_intreq_irq45mon_field
{
  __IO uint32_t DMAINT     : 1;
} stc_intreq_irq45mon_field_t;

typedef struct stc_intreq_irq47mon_field
{
       uint32_t RESERVED0  :11;
  __IO uint32_t FLASHINT   : 1;
} stc_intreq_irq47mon_field_t;

typedef struct stc_intreq_rcintsel0_field
{
  __IO uint32_t INTSEL00   : 1;
  __IO uint32_t INTSEL01   : 1;
  __IO uint32_t INTSEL02   : 1;
  __IO uint32_t INTSEL03   : 1;
  __IO uint32_t INTSEL04   : 1;
  __IO uint32_t INTSEL05   : 1;
  __IO uint32_t INTSEL06   : 1;
  __IO uint32_t INTSEL07   : 1;
  __IO uint32_t INTSEL10   : 1;
  __IO uint32_t INTSEL11   : 1;
  __IO uint32_t INTSEL12   : 1;
  __IO uint32_t INTSEL13   : 1;
  __IO uint32_t INTSEL14   : 1;
  __IO uint32_t INTSEL15   : 1;
  __IO uint32_t INTSEL16   : 1;
  __IO uint32_t INTSEL17   : 1;
  __IO uint32_t INTSEL20   : 1;
  __IO uint32_t INTSEL21   : 1;
  __IO uint32_t INTSEL22   : 1;
  __IO uint32_t INTSEL23   : 1;
  __IO uint32_t INTSEL24   : 1;
  __IO uint32_t INTSEL25   : 1;
  __IO uint32_t INTSEL26   : 1;
  __IO uint32_t INTSEL27   : 1;
  __IO uint32_t INTSEL30   : 1;
  __IO uint32_t INTSEL31   : 1;
  __IO uint32_t INTSEL32   : 1;
  __IO uint32_t INTSEL33   : 1;
  __IO uint32_t INTSEL34   : 1;
  __IO uint32_t INTSEL35   : 1;
  __IO uint32_t INTSEL36   : 1;
  __IO uint32_t INTSEL37   : 1;
} stc_intreq_rcintsel0_field_t;

typedef struct stc_intreq_rcintsel1_field
{
  __IO uint32_t INTSEL40   : 1;
  __IO uint32_t INTSEL41   : 1;
  __IO uint32_t INTSEL42   : 1;
  __IO uint32_t INTSEL43   : 1;
  __IO uint32_t INTSEL44   : 1;
  __IO uint32_t INTSEL45   : 1;
  __IO uint32_t INTSEL46   : 1;
  __IO uint32_t INTSEL47   : 1;
  __IO uint32_t INTSEL50   : 1;
  __IO uint32_t INTSEL51   : 1;
  __IO uint32_t INTSEL52   : 1;
  __IO uint32_t INTSEL53   : 1;
  __IO uint32_t INTSEL54   : 1;
  __IO uint32_t INTSEL55   : 1;
  __IO uint32_t INTSEL56   : 1;
  __IO uint32_t INTSEL57   : 1;
  __IO uint32_t INTSEL60   : 1;
  __IO uint32_t INTSEL61   : 1;
  __IO uint32_t INTSEL62   : 1;
  __IO uint32_t INTSEL63   : 1;
  __IO uint32_t INTSEL64   : 1;
  __IO uint32_t INTSEL65   : 1;
  __IO uint32_t INTSEL66   : 1;
  __IO uint32_t INTSEL67   : 1;
  __IO uint32_t INTSEL70   : 1;
  __IO uint32_t INTSEL71   : 1;
  __IO uint32_t INTSEL72   : 1;
  __IO uint32_t INTSEL73   : 1;
  __IO uint32_t INTSEL74   : 1;
  __IO uint32_t INTSEL75   : 1;
  __IO uint32_t INTSEL76   : 1;
  __IO uint32_t INTSEL77   : 1;
} stc_intreq_rcintsel1_field_t;

/******************************************************************************
 * GPIO_MODULE
 ******************************************************************************/
typedef struct stc_gpio_pfr0_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
       uint32_t RESERVED5  :10;
  __IO uint32_t PF         : 1;
} stc_gpio_pfr0_field_t;

typedef struct stc_gpio_pfr1_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
       uint32_t RESERVED3  : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
} stc_gpio_pfr1_field_t;

typedef struct stc_gpio_pfr2_field
{
       uint32_t RESERVED0  : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pfr2_field_t;

typedef struct stc_gpio_pfr3_field
{
       uint32_t RESERVED4  : 9;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pfr3_field_t;

typedef struct stc_gpio_pfr4_field
{
       uint32_t RESERVED0  : 6;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
       uint32_t RESERVED1  : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
} stc_gpio_pfr4_field_t;

typedef struct stc_gpio_pfr5_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
} stc_gpio_pfr5_field_t;

typedef struct stc_gpio_pfr6_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
} stc_gpio_pfr6_field_t;

typedef struct stc_gpio_pfr8_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
} stc_gpio_pfr8_field_t;

typedef struct stc_gpio_pfre_field
{
  __IO uint32_t P0         : 1;
       uint32_t RESERVED1  : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pfre_field_t;

typedef struct stc_gpio_pcr0_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
       uint32_t RESERVED5  :10;
  __IO uint32_t PF         : 1;
} stc_gpio_pcr0_field_t;

typedef struct stc_gpio_pcr1_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
       uint32_t RESERVED3  : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
} stc_gpio_pcr1_field_t;

typedef struct stc_gpio_pcr2_field
{
       uint32_t RESERVED0  : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pcr2_field_t;

typedef struct stc_gpio_pcr3_field
{
       uint32_t RESERVED4  : 9;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pcr3_field_t;

typedef struct stc_gpio_pcr4_field
{
       uint32_t RESERVED0  : 6;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
       uint32_t RESERVED1  : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
} stc_gpio_pcr4_field_t;

typedef struct stc_gpio_pcr5_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
} stc_gpio_pcr5_field_t;

typedef struct stc_gpio_pcr6_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
} stc_gpio_pcr6_field_t;

typedef struct stc_gpio_pcre_field
{
  __IO uint32_t P0         : 1;
       uint32_t RESERVED1  : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pcre_field_t;

typedef struct stc_gpio_ddr0_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
       uint32_t RESERVED5  :10;
  __IO uint32_t PF         : 1;
} stc_gpio_ddr0_field_t;

typedef struct stc_gpio_ddr1_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
       uint32_t RESERVED3  : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
} stc_gpio_ddr1_field_t;

typedef struct stc_gpio_ddr2_field
{
       uint32_t RESERVED0  : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_ddr2_field_t;

typedef struct stc_gpio_ddr3_field
{
       uint32_t RESERVED4  : 9;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_ddr3_field_t;

typedef struct stc_gpio_ddr4_field
{
       uint32_t RESERVED0  : 6;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
       uint32_t RESERVED1  : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
} stc_gpio_ddr4_field_t;

typedef struct stc_gpio_ddr5_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
} stc_gpio_ddr5_field_t;

typedef struct stc_gpio_ddr6_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
} stc_gpio_ddr6_field_t;

typedef struct stc_gpio_ddr8_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
} stc_gpio_ddr8_field_t;

typedef struct stc_gpio_ddre_field
{
  __IO uint32_t P0         : 1;
       uint32_t RESERVED1  : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_ddre_field_t;

typedef struct stc_gpio_pdir0_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
       uint32_t RESERVED5  :10;
  __IO uint32_t PF         : 1;
} stc_gpio_pdir0_field_t;

typedef struct stc_gpio_pdir1_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
       uint32_t RESERVED3  : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
} stc_gpio_pdir1_field_t;

typedef struct stc_gpio_pdir2_field
{
       uint32_t RESERVED0  : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pdir2_field_t;

typedef struct stc_gpio_pdir3_field
{
       uint32_t RESERVED4  : 9;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pdir3_field_t;

typedef struct stc_gpio_pdir4_field
{
       uint32_t RESERVED0  : 6;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
       uint32_t RESERVED1  : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
} stc_gpio_pdir4_field_t;

typedef struct stc_gpio_pdir5_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
} stc_gpio_pdir5_field_t;

typedef struct stc_gpio_pdir6_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
} stc_gpio_pdir6_field_t;

typedef struct stc_gpio_pdir8_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
} stc_gpio_pdir8_field_t;

typedef struct stc_gpio_pdire_field
{
  __IO uint32_t P0         : 1;
       uint32_t RESERVED1  : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pdire_field_t;

typedef struct stc_gpio_pdor0_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
  __IO uint32_t P4         : 1;
       uint32_t RESERVED5  :10;
  __IO uint32_t PF         : 1;
} stc_gpio_pdor0_field_t;

typedef struct stc_gpio_pdor1_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
       uint32_t RESERVED3  : 1;
  __IO uint32_t P4         : 1;
  __IO uint32_t P5         : 1;
} stc_gpio_pdor1_field_t;

typedef struct stc_gpio_pdor2_field
{
       uint32_t RESERVED0  : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pdor2_field_t;

typedef struct stc_gpio_pdor3_field
{
       uint32_t RESERVED4  : 9;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
  __IO uint32_t PF         : 1;
} stc_gpio_pdor3_field_t;

typedef struct stc_gpio_pdor4_field
{
       uint32_t RESERVED0  : 6;
  __IO uint32_t P6         : 1;
  __IO uint32_t P7         : 1;
       uint32_t RESERVED1  : 1;
  __IO uint32_t P9         : 1;
  __IO uint32_t PA         : 1;
} stc_gpio_pdor4_field_t;

typedef struct stc_gpio_pdor5_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
  __IO uint32_t P2         : 1;
} stc_gpio_pdor5_field_t;

typedef struct stc_gpio_pdor6_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
} stc_gpio_pdor6_field_t;

typedef struct stc_gpio_pdor8_field
{
  __IO uint32_t P0         : 1;
  __IO uint32_t P1         : 1;
} stc_gpio_pdor8_field_t;

typedef struct stc_gpio_pdore_field
{
  __IO uint32_t P0         : 1;
       uint32_t RESERVED1  : 1;
  __IO uint32_t P2         : 1;
  __IO uint32_t P3         : 1;
} stc_gpio_pdore_field_t;

typedef struct stc_gpio_ade_field
{
  __IO uint32_t AN0        : 1;
  __IO uint32_t AN1        : 1;
  __IO uint32_t AN2        : 1;
       uint32_t RESERVED3  : 1;
  __IO uint32_t AN4        : 1;
  __IO uint32_t AN5        : 1;
       uint32_t RESERVED6  : 6;
  __IO uint32_t AN12       : 1;
  __IO uint32_t AN13       : 1;
  __IO uint32_t AN14       : 1;
       uint32_t RESERVED0  : 3;
  __IO uint32_t AN18       : 1;
       uint32_t RESERVED1  : 1;
  __IO uint32_t AN20       : 1;
  __IO uint32_t AN21       : 1;
  __IO uint32_t AN22       : 1;
  __IO uint32_t AN23       : 1;
  __IO uint32_t AN24       : 1;
} stc_gpio_ade_field_t;

typedef struct stc_gpio_spsr_field
{
  __IO uint32_t SUBXC      : 2;
  __IO uint32_t MAINXC     : 2;
  __IO uint32_t USB0C      : 1;
} stc_gpio_spsr_field_t;

typedef struct stc_gpio_epfr00_field
{
  __IO uint32_t NMIS       : 1;
  __IO uint32_t CROUTE0    : 1;
  __IO uint32_t CROUTE1    : 1;
       uint32_t RESERVED3  : 1;
  __IO uint32_t RTCCOE0    : 1;
  __IO uint32_t RTCCOE1    : 1;
  __IO uint32_t SUBOUTE0   : 1;
  __IO uint32_t SUBOUTE1   : 1;
       uint32_t RESERVED8  : 1;
  __IO uint32_t USBP0E     : 1;
       uint32_t RESERVED10 : 6;
  __IO uint32_t JTAGEN0B   : 1;
  __IO uint32_t JTAGEN1S   : 1;
       uint32_t RESERVED18 : 6;
} stc_gpio_epfr00_field_t;

typedef struct stc_gpio_epfr01_field
{
  __IO uint32_t RTO00E0    : 1;
  __IO uint32_t RTO00E1    : 1;
  __IO uint32_t RTO01E0    : 1;
  __IO uint32_t RTO01E1    : 1;
  __IO uint32_t RTO02E0    : 1;
  __IO uint32_t RTO02E1    : 1;
  __IO uint32_t RTO03E0    : 1;
  __IO uint32_t RTO03E1    : 1;
  __IO uint32_t RTO04E0    : 1;
  __IO uint32_t RTO04E1    : 1;
  __IO uint32_t RTO05E0    : 1;
  __IO uint32_t RTO05E1    : 1;
  __IO uint32_t DTTI0C     : 1;
       uint32_t RESERVED13 : 3;
  __IO uint32_t DTTI0S0    : 1;
  __IO uint32_t DTTI0S1    : 1;
  __IO uint32_t FRCK0S0    : 1;
  __IO uint32_t FRCK0S1    : 1;
  __IO uint32_t IC00S0     : 1;
  __IO uint32_t IC00S1     : 1;
  __IO uint32_t IC00S2     : 1;
  __IO uint32_t IC01S0     : 1;
  __IO uint32_t IC01S1     : 1;
  __IO uint32_t IC01S2     : 1;
  __IO uint32_t IC02S0     : 1;
  __IO uint32_t IC02S1     : 1;
  __IO uint32_t IC02S2     : 1;
  __IO uint32_t IC03S0     : 1;
  __IO uint32_t IC03S1     : 1;
  __IO uint32_t IC03S2     : 1;
} stc_gpio_epfr01_field_t;

typedef struct stc_gpio_epfr04_field
{
       uint32_t RESERVED0  : 2;
  __IO uint32_t TIOA0E0    : 1;
  __IO uint32_t TIOA0E1    : 1;
  __IO uint32_t TIOB0S0    : 1;
  __IO uint32_t TIOB0S1    : 1;
  __IO uint32_t TIOB0S2    : 1;
       uint32_t RESERVED7  : 1;
  __IO uint32_t TIOA1S0    : 1;
  __IO uint32_t TIOA1S1    : 1;
  __IO uint32_t TIOA1E0    : 1;
  __IO uint32_t TIOA1E1    : 1;
  __IO uint32_t TIOB1S0    : 1;
  __IO uint32_t TIOB1S1    : 1;
       uint32_t RESERVED14 : 4;
  __IO uint32_t TIOA2E0    : 1;
  __IO uint32_t TIOA2E1    : 1;
  __IO uint32_t TIOB2S0    : 1;
  __IO uint32_t TIOB2S1    : 1;
       uint32_t RESERVED22 : 2;
  __IO uint32_t TIOA3S0    : 1;
  __IO uint32_t TIOA3S1    : 1;
  __IO uint32_t TIOA3E0    : 1;
  __IO uint32_t TIOA3E1    : 1;
  __IO uint32_t TIOB3S0    : 1;
  __IO uint32_t TIOB3S1    : 1;
} stc_gpio_epfr04_field_t;

typedef struct stc_gpio_epfr05_field
{
       uint32_t RESERVED0  : 2;
  __IO uint32_t TIOA4E0    : 1;
  __IO uint32_t TIOA4E1    : 1;
  __IO uint32_t TIOB4S0    : 1;
  __IO uint32_t TIOB4S1    : 1;
       uint32_t RESERVED6  : 2;
  __IO uint32_t TIOA5S0    : 1;
  __IO uint32_t TIOA5S1    : 1;
  __IO uint32_t TIOA5E0    : 1;
  __IO uint32_t TIOA5E1    : 1;
  __IO uint32_t TIOB5S0    : 1;
  __IO uint32_t TIOB5S1    : 1;
       uint32_t RESERVED14 : 4;
  __IO uint32_t TIOA6E0    : 1;
  __IO uint32_t TIOA6E1    : 1;
  __IO uint32_t TIOB6S0    : 1;
  __IO uint32_t TIOB6S1    : 1;
       uint32_t RESERVED22 : 2;
  __IO uint32_t TIOA7S0    : 1;
  __IO uint32_t TIOA7S1    : 1;
  __IO uint32_t TIOA7E0    : 1;
  __IO uint32_t TIOA7E1    : 1;
  __IO uint32_t TIOB7S0    : 1;
  __IO uint32_t TIOB7S1    : 1;
} stc_gpio_epfr05_field_t;

typedef struct stc_gpio_epfr06_field
{
  __IO uint32_t EINT00S0   : 1;
  __IO uint32_t EINT00S1   : 1;
  __IO uint32_t EINT01S0   : 1;
  __IO uint32_t EINT01S1   : 1;
  __IO uint32_t EINT02S0   : 1;
  __IO uint32_t EINT02S1   : 1;
  __IO uint32_t EINT03S0   : 1;
  __IO uint32_t EINT03S1   : 1;
       uint32_t RESERVED1  : 4;
  __IO uint32_t EINT06S0   : 1;
  __IO uint32_t EINT06S1   : 1;
  __IO uint32_t EINT07S0   : 1;
  __IO uint32_t EINT07S1   : 1;
       uint32_t RESERVED0  :12;
  __IO uint32_t EINT14S0   : 1;
  __IO uint32_t EINT14S1   : 1;
  __IO uint32_t EINT15S0   : 1;
  __IO uint32_t EINT15S1   : 1;
} stc_gpio_epfr06_field_t;

typedef struct stc_gpio_epfr07_field
{
       uint32_t RESERVED0  : 4;
  __IO uint32_t SIN0S0     : 1;
  __IO uint32_t SIN0S1     : 1;
  __IO uint32_t SOT0B0     : 1;
  __IO uint32_t SOT0B1     : 1;
  __IO uint32_t SCK0B0     : 1;
  __IO uint32_t SCK0B1     : 1;
  __IO uint32_t SIN1S0     : 1;
  __IO uint32_t SIN1S1     : 1;
  __IO uint32_t SOT1B0     : 1;
  __IO uint32_t SOT1B1     : 1;
  __IO uint32_t SCK1B0     : 1;
  __IO uint32_t SCK1B1     : 1;
       uint32_t RESERVED1  : 6;
  __IO uint32_t SIN3S0     : 1;
  __IO uint32_t SIN3S1     : 1;
  __IO uint32_t SOT3B0     : 1;
  __IO uint32_t SOT3B1     : 1;
  __IO uint32_t SCK3B0     : 1;
  __IO uint32_t SCK3B1     : 1;
} stc_gpio_epfr07_field_t;

typedef struct stc_gpio_epfr08_field
{
  __IO uint32_t RTS4E0     : 1;
  __IO uint32_t RTS4E1     : 1;
  __IO uint32_t CTS4S0     : 1;
  __IO uint32_t CTS4S1     : 1;
       uint32_t RESERVED0  : 6;
  __IO uint32_t SIN5S0     : 1;
  __IO uint32_t SIN5S1     : 1;
  __IO uint32_t SOT5B0     : 1;
  __IO uint32_t SOT5B1     : 1;
  __IO uint32_t SCK5B0     : 1;
  __IO uint32_t SCK5B1     : 1;
} stc_gpio_epfr08_field_t;

typedef struct stc_gpio_epfr09_field
{
  __IO uint32_t QAIN0S0    : 1;
  __IO uint32_t QAIN0S1    : 1;
  __IO uint32_t QBIN0S0    : 1;
  __IO uint32_t QBIN0S1    : 1;
  __IO uint32_t QZIN0S0    : 1;
  __IO uint32_t QZIN0S1    : 1;
       uint32_t RESERVED0  : 6;
  __IO uint32_t ADTRG0S0   : 1;
  __IO uint32_t ADTRG0S1   : 1;
  __IO uint32_t ADTRG0S2   : 1;
  __IO uint32_t ADTRG0S3   : 1;
  __IO uint32_t ADTRG1S0   : 1;
  __IO uint32_t ADTRG1S1   : 1;
  __IO uint32_t ADTRG1S2   : 1;
  __IO uint32_t ADTRG1S3   : 1;
       uint32_t RESERVED1  : 8;
  __IO uint32_t CRX1S0     : 1;
  __IO uint32_t CRX1S1     : 1;
  __IO uint32_t CTX1E0     : 1;
  __IO uint32_t CTX1E1     : 1;
} stc_gpio_epfr09_field_t;

typedef struct stc_gpio_epfr15_field
{
  __IO uint32_t EINT16S0   : 1;
  __IO uint32_t EINT16S1   : 1;
  __IO uint32_t EINT17S0   : 1;
  __IO uint32_t EINT17S1   : 1;
  __IO uint32_t EINT18S0   : 1;
  __IO uint32_t EINT18S1   : 1;
  __IO uint32_t EINT19S0   : 1;
  __IO uint32_t EINT19S1   : 1;
  __IO uint32_t EINT20S0   : 1;
  __IO uint32_t EINT20S1   : 1;
  __IO uint32_t EINT21S0   : 1;
  __IO uint32_t EINT21S1   : 1;
} stc_gpio_epfr15_field_t;

typedef struct stc_gpio_pzr0_field
{
       uint32_t RESERVED0  :10;
  __IO uint32_t PA         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t PC         : 1;
} stc_gpio_pzr0_field_t;

typedef struct stc_gpio_pzr4_field
{
       uint32_t RESERVED0  :12;
  __IO uint32_t PC         : 1;
  __IO uint32_t PD         : 1;
  __IO uint32_t PE         : 1;
} stc_gpio_pzr4_field_t;

typedef struct stc_gpio_pzr6_field
{
  __IO uint32_t P0         : 1;
} stc_gpio_pzr6_field_t;

/******************************************************************************
 * LVD_MODULE
 ******************************************************************************/
/* LVD_MODULE register bit fields */
typedef struct stc_lvd_lvd_ctl_field
{
       uint16_t RESERVED1  : 2;
  __IO uint16_t SVHI0      : 1;
  __IO uint16_t SVHI1      : 1;
  __IO uint16_t SVHI2      : 1;
  __IO uint16_t SVHI3      : 1;
  __IO uint16_t SVHI4      : 1;
  __IO uint16_t LVDIE      : 1;
       uint16_t RESERVED2  : 2;
  __IO uint16_t SVHR0      : 1;
  __IO uint16_t SVHR1      : 1;
  __IO uint16_t SVHR2      : 1;
  __IO uint16_t SVHR3      : 1;
  __IO uint16_t SVHR4      : 1;
  __IO uint16_t LVDRE      : 1;
} stc_lvd_lvd_ctl_field_t;

typedef struct stc_lvd_lvd_str_field
{
        uint8_t RESERVED1  : 7;
  __IO  uint8_t LVDIR      : 1;
} stc_lvd_lvd_str_field_t;

typedef struct stc_lvd_lvd_clr_field
{
        uint8_t RESERVED1  : 7;
  __IO  uint8_t LVDCL      : 1;
} stc_lvd_lvd_clr_field_t;

typedef struct stc_lvd_lvd_str2_field
{
        uint8_t RESERVED1  : 6;
  __IO  uint8_t LVDRRDY    : 1;
  __IO  uint8_t LVDIRDY    : 1;
} stc_lvd_lvd_str2_field_t;

/******************************************************************************
 * DS_MODULE
 ******************************************************************************/
/* Deep standby mode control registers bit fields */
typedef struct stc_ds_reg_ctl_field
{
        uint8_t RESERVED0  : 1;
  __IO  uint8_t ISUBSEL0   : 1;
  __IO  uint8_t ISUBSEL1   : 1;
} stc_ds_reg_ctl_field_t;

typedef struct stc_ds_rck_ctl_field
{
  __IO  uint8_t RTCCKE     : 1;
} stc_ds_rck_ctl_field_t;

typedef struct stc_ds_pmd_ctl_field
{
  __IO  uint8_t RTCE       : 1;
} stc_ds_pmd_ctl_field_t;

typedef struct stc_ds_wrfsr_field
{
  __IO  uint8_t WINITX     : 1;
  __IO  uint8_t WLVDH      : 1;
} stc_ds_wrfsr_field_t;

typedef struct stc_ds_wifsr_field
{
  __IO uint16_t WRTCI      : 1;
  __IO uint16_t WLVDI      : 1;
  __IO uint16_t WUI0       : 1;
  __IO uint16_t WUI1       : 1;
  __IO uint16_t WUI2       : 1;
  __IO uint16_t WUI3       : 1;
} stc_ds_wifsr_field_t;

typedef struct stc_ds_wier_field
{
  __IO uint16_t WRTCE      : 1;
  __IO uint16_t WLVDE      : 1;
       uint16_t RESERVED1  : 1;
  __IO uint16_t WUI1E      : 1;
  __IO uint16_t WUI2E      : 1;
  __IO uint16_t WUI3E      : 1;
} stc_ds_wier_field_t;

typedef struct stc_ds_wilvr_field
{
  __IO  uint8_t WUI1LV     : 1;
  __IO  uint8_t WUI2LV     : 1;
  __IO  uint8_t WUI3LV     : 1;
} stc_ds_wilvr_field_t;

typedef struct stc_ds_dsramr_field
{
  __IO  uint8_t SRAMR0     : 1;
  __IO  uint8_t SRAMR1     : 1;
} stc_ds_dsramr_field_t;

/******************************************************************************
 * USBCLK
 ******************************************************************************/
/* USBCLK register bit fields */
typedef struct stc_usbclk_uccr_field
{
  __IO  uint8_t UCEN       : 1;
  __IO  uint8_t UCSEL      : 1;
} stc_usbclk_uccr_field_t;

typedef struct stc_usbclk_upcr1_field
{
  __IO  uint8_t UPLLEN     : 1;
  __IO  uint8_t UPINC      : 1;
} stc_usbclk_upcr1_field_t;

typedef struct stc_usbclk_upcr2_field
{
  __IO  uint8_t UPOWT0     : 1;
  __IO  uint8_t UPOWT1     : 1;
  __IO  uint8_t UPOWT2     : 1;
} stc_usbclk_upcr2_field_t;

typedef struct stc_usbclk_upcr3_field
{
  __IO  uint8_t UPLLK0     : 1;
  __IO  uint8_t UPLLK1     : 1;
  __IO  uint8_t UPLLK2     : 1;
  __IO  uint8_t UPLLK3     : 1;
  __IO  uint8_t UPLLK4     : 1;
} stc_usbclk_upcr3_field_t;

typedef struct stc_usbclk_upcr4_field
{
  __IO  uint8_t UPLLN0     : 1;
  __IO  uint8_t UPLLN1     : 1;
  __IO  uint8_t UPLLN2     : 1;
  __IO  uint8_t UPLLN3     : 1;
  __IO  uint8_t UPLLN4     : 1;
  __IO  uint8_t UPLLN5     : 1;
  __IO  uint8_t UPLLN6     : 1;
} stc_usbclk_upcr4_field_t;

typedef struct stc_usbclk_up_str_field
{
  __IO  uint8_t UPRDY      : 1;
} stc_usbclk_up_str_field_t;

typedef struct stc_usbclk_upint_enr_field
{
  __IO  uint8_t UPCSE      : 1;
} stc_usbclk_upint_enr_field_t;

typedef struct stc_usbclk_upint_clr_field
{
  __IO  uint8_t UPCSC      : 1;
} stc_usbclk_upint_clr_field_t;

typedef struct stc_usbclk_upint_str_field
{
  __IO  uint8_t UPCSI      : 1;
} stc_usbclk_upint_str_field_t;

typedef struct stc_usbclk_upcr5_field
{
  __IO  uint8_t UPLLM0     : 1;
  __IO  uint8_t UPLLM1     : 1;
  __IO  uint8_t UPLLM2     : 1;
  __IO  uint8_t UPLLM3     : 1;
} stc_usbclk_upcr5_field_t;

typedef struct stc_usbclk_usben_field
{
  __IO  uint8_t USBEN      : 1;
} stc_usbclk_usben_field_t;

/******************************************************************************
 * CANPRE_MODULE
 ******************************************************************************/
/* CANPRE_MODULE register bit fields */
typedef struct stc_canpre_canpre_field
{
  __IO  uint8_t CANPRE0    : 1;
  __IO  uint8_t CANPRE1    : 1;
  __IO  uint8_t CANPRE2    : 1;
  __IO  uint8_t CANPRE3    : 1;
} stc_canpre_canpre_field_t;

/******************************************************************************
 * MFS_UART_MODULE
 ******************************************************************************/
/* MFS_UART_MODULE register bit fields */
typedef struct stc_mfs_uart_smr_field
{
  __IO  uint8_t SOE        : 1;
        uint8_t RESERVED1  : 1;
  __IO  uint8_t BDS        : 1;
  __IO  uint8_t SBL        : 1;
  __IO  uint8_t WUCR       : 1;
  __IO  uint8_t MD         : 3;
} stc_mfs_uart_smr_field_t;

typedef struct stc_mfs_uart_scr_field
{
  __IO  uint8_t TXE        : 1;
  __IO  uint8_t RXE        : 1;
  __IO  uint8_t TBIE       : 1;
  __IO  uint8_t TIE        : 1;
  __IO  uint8_t RIE        : 1;
        uint8_t RESERVED5  : 2;
  __IO  uint8_t UPCL       : 1;
} stc_mfs_uart_scr_field_t;

typedef struct stc_mfs_uart_escr_field
{
  __IO  uint8_t L0         : 1;
  __IO  uint8_t L1         : 1;
  __IO  uint8_t L2         : 1;
  __IO  uint8_t P          : 1;
  __IO  uint8_t PEN        : 1;
  __IO  uint8_t INV        : 1;
  __IO  uint8_t ESBL       : 1;
  __IO  uint8_t FLWEN      : 1;
} stc_mfs_uart_escr_field_t;

typedef struct stc_mfs_uart_ssr_field
{
  __IO  uint8_t TBI        : 1;
  __IO  uint8_t TDRE       : 1;
  __IO  uint8_t RDRF       : 1;
  __IO  uint8_t ORE        : 1;
  __IO  uint8_t FRE        : 1;
  __IO  uint8_t PE         : 1;
        uint8_t RESERVED6  : 1;
  __IO  uint8_t REC        : 1;
} stc_mfs_uart_ssr_field_t;

typedef struct stc_mfs_uart_rdr_field
{
       uint16_t RESERVED0  : 8;
  __IO uint16_t AD         : 1;
} stc_mfs_uart_rdr_field_t;

typedef struct stc_mfs_uart_tdr_field
{
       uint16_t RESERVED0  : 8;
  __IO uint16_t AD         : 1;
} stc_mfs_uart_tdr_field_t;

typedef struct stc_mfs_uart_bgr_field
{
       uint16_t RESERVED0  :15;
  __IO uint16_t EXT        : 1;
} stc_mfs_uart_bgr_field_t;

typedef struct stc_mfs_uart_bgr1_field
{
        uint8_t RESERVED0  : 7;
  __IO  uint8_t EXT        : 1;
} stc_mfs_uart_bgr1_field_t;

typedef struct stc_mfs_uart_fcr_field
{
  __IO uint16_t FE1        : 1;
  __IO uint16_t FE2        : 1;
  __IO uint16_t FCL1       : 1;
  __IO uint16_t FCL2       : 1;
  __IO uint16_t FSET       : 1;
  __IO uint16_t FLD        : 1;
  __IO uint16_t FLST       : 1;
       uint16_t RESERVED1  : 1;
  __IO uint16_t FSEL       : 1;
  __IO uint16_t FTIE       : 1;
  __IO uint16_t FDRQ       : 1;
  __IO uint16_t FRIIE      : 1;
  __IO uint16_t FLSTE      : 1;
} stc_mfs_uart_fcr_field_t;

typedef struct stc_mfs_uart_fcr0_field
{
  __IO  uint8_t FE1        : 1;
  __IO  uint8_t FE2        : 1;
  __IO  uint8_t FCL1       : 1;
  __IO  uint8_t FCL2       : 1;
  __IO  uint8_t FSET       : 1;
  __IO  uint8_t FLD        : 1;
  __IO  uint8_t FLST       : 1;
} stc_mfs_uart_fcr0_field_t;

typedef struct stc_mfs_uart_fcr1_field
{
  __IO  uint8_t FSEL       : 1;
  __IO  uint8_t FTIE       : 1;
  __IO  uint8_t FDRQ       : 1;
  __IO  uint8_t FRIIE      : 1;
  __IO  uint8_t FLSTE      : 1;
} stc_mfs_uart_fcr1_field_t;

typedef struct stc_mfs_uart_fbyte_field
{
  __IO uint16_t FD0        : 1;
  __IO uint16_t FD1        : 1;
  __IO uint16_t FD2        : 1;
  __IO uint16_t FD3        : 1;
  __IO uint16_t FD4        : 1;
  __IO uint16_t FD5        : 1;
  __IO uint16_t FD6        : 1;
  __IO uint16_t FD7        : 1;
  __IO uint16_t FD8        : 1;
  __IO uint16_t FD9        : 1;
  __IO uint16_t FD10       : 1;
  __IO uint16_t FD11       : 1;
  __IO uint16_t FD12       : 1;
  __IO uint16_t FD13       : 1;
  __IO uint16_t FD14       : 1;
  __IO uint16_t FD15       : 1;
} stc_mfs_uart_fbyte_field_t;

typedef struct stc_mfs_uart_fbyte1_field
{
  __IO  uint8_t FD0        : 1;
  __IO  uint8_t FD1        : 1;
  __IO  uint8_t FD2        : 1;
  __IO  uint8_t FD3        : 1;
  __IO  uint8_t FD4        : 1;
  __IO  uint8_t FD5        : 1;
  __IO  uint8_t FD6        : 1;
  __IO  uint8_t FD7        : 1;
} stc_mfs_uart_fbyte1_field_t;

typedef struct stc_mfs_uart_fbyte2_field
{
  __IO  uint8_t FD8        : 1;
  __IO  uint8_t FD9        : 1;
  __IO  uint8_t FD10       : 1;
  __IO  uint8_t FD11       : 1;
  __IO  uint8_t FD12       : 1;
  __IO  uint8_t FD13       : 1;
  __IO  uint8_t FD14       : 1;
  __IO  uint8_t FD15       : 1;
} stc_mfs_uart_fbyte2_field_t;


/******************************************************************************
 * MFS_CSIO_MODULE
 ******************************************************************************/
/* MFS_CSIO_MODULE register bit fields */
typedef struct stc_mfs_csio_smr_field
{
  __IO  uint8_t SOE        : 1;
  __IO  uint8_t SCKE       : 1;
  __IO  uint8_t BDS        : 1;
  __IO  uint8_t SCINV      : 1;
  __IO  uint8_t WUCR       : 1;
  __IO  uint8_t MD         : 3;
} stc_mfs_csio_smr_field_t;

typedef struct stc_mfs_csio_scr_field
{
  __IO  uint8_t TXE        : 1;
  __IO  uint8_t RXE        : 1;
  __IO  uint8_t TBIE       : 1;
  __IO  uint8_t TIE        : 1;
  __IO  uint8_t RIE        : 1;
  __IO  uint8_t SPI        : 1;
  __IO  uint8_t MS         : 1;
  __IO  uint8_t UPCL       : 1;
} stc_mfs_csio_scr_field_t;

typedef struct stc_mfs_csio_escr_field
{
  __IO  uint8_t L0         : 1;
  __IO  uint8_t L1         : 1;
  __IO  uint8_t L2         : 1;
  __IO  uint8_t WT0        : 1;
  __IO  uint8_t WT1        : 1;
        uint8_t RESERVED5  : 2;
  __IO  uint8_t SOP        : 1;
} stc_mfs_csio_escr_field_t;

typedef struct stc_mfs_csio_ssr_field
{
  __IO  uint8_t TBI        : 1;
  __IO  uint8_t TDRE       : 1;
  __IO  uint8_t RDRF       : 1;
  __IO  uint8_t ORE        : 1;
        uint8_t RESERVED4  : 3;
  __IO  uint8_t REC        : 1;
} stc_mfs_csio_ssr_field_t;

typedef struct stc_mfs_csio_fcr_field
{
  __IO uint16_t FE1        : 1;
  __IO uint16_t FE2        : 1;
  __IO uint16_t FCL1       : 1;
  __IO uint16_t FCL2       : 1;
  __IO uint16_t FSET       : 1;
  __IO uint16_t FLD        : 1;
  __IO uint16_t FLST       : 1;
       uint16_t RESERVED1  : 1;
  __IO uint16_t FSEL       : 1;
  __IO uint16_t FTIE       : 1;
  __IO uint16_t FDRQ       : 1;
  __IO uint16_t FRIIE      : 1;
  __IO uint16_t FLSTE      : 1;
} stc_mfs_csio_fcr_field_t;

typedef struct stc_mfs_csio_fcr0_field
{
  __IO  uint8_t FE1        : 1;
  __IO  uint8_t FE2        : 1;
  __IO  uint8_t FCL1       : 1;
  __IO  uint8_t FCL2       : 1;
  __IO  uint8_t FSET       : 1;
  __IO  uint8_t FLD        : 1;
  __IO  uint8_t FLST       : 1;
} stc_mfs_csio_fcr0_field_t;

typedef struct stc_mfs_csio_fcr1_field
{
  __IO  uint8_t FSEL       : 1;
  __IO  uint8_t FTIE       : 1;
  __IO  uint8_t FDRQ       : 1;
  __IO  uint8_t FRIIE      : 1;
  __IO  uint8_t FLSTE      : 1;
} stc_mfs_csio_fcr1_field_t;

typedef struct stc_mfs_csio_fbyte_field
{
  __IO uint16_t FD0        : 1;
  __IO uint16_t FD1        : 1;
  __IO uint16_t FD2        : 1;
  __IO uint16_t FD3        : 1;
  __IO uint16_t FD4        : 1;
  __IO uint16_t FD5        : 1;
  __IO uint16_t FD6        : 1;
  __IO uint16_t FD7        : 1;
  __IO uint16_t FD8        : 1;
  __IO uint16_t FD9        : 1;
  __IO uint16_t FD10       : 1;
  __IO uint16_t FD11       : 1;
  __IO uint16_t FD12       : 1;
  __IO uint16_t FD13       : 1;
  __IO uint16_t FD14       : 1;
  __IO uint16_t FD15       : 1;
} stc_mfs_csio_fbyte_field_t;

typedef struct stc_mfs_csio_fbyte1_field
{
  __IO  uint8_t FD0        : 1;
  __IO  uint8_t FD1        : 1;
  __IO  uint8_t FD2        : 1;
  __IO  uint8_t FD3        : 1;
  __IO  uint8_t FD4        : 1;
  __IO  uint8_t FD5        : 1;
  __IO  uint8_t FD6        : 1;
  __IO  uint8_t FD7        : 1;
} stc_mfs_csio_fbyte1_field_t;

typedef struct stc_mfs_csio_fbyte2_field
{
  __IO  uint8_t FD8        : 1;
  __IO  uint8_t FD9        : 1;
  __IO  uint8_t FD10       : 1;
  __IO  uint8_t FD11       : 1;
  __IO  uint8_t FD12       : 1;
  __IO  uint8_t FD13       : 1;
  __IO  uint8_t FD14       : 1;
  __IO  uint8_t FD15       : 1;
} stc_mfs_csio_fbyte2_field_t;


/******************************************************************************
 * MFS_LIN_MODULE
 ******************************************************************************/
/* MFS_LIN_MODULE register bit fields */
typedef struct stc_mfs_lin_smr_field
{
  __IO  uint8_t SOE        : 1;
        uint8_t RESERVED1  : 2;
  __IO  uint8_t SBL        : 1;
  __IO  uint8_t WUCR       : 1;
  __IO  uint8_t MD         : 3;
} stc_mfs_lin_smr_field_t;

typedef struct stc_mfs_lin_scr_field
{
  __IO  uint8_t TXE        : 1;
  __IO  uint8_t RXE        : 1;
  __IO  uint8_t TBIE       : 1;
  __IO  uint8_t TIE        : 1;
  __IO  uint8_t RIE        : 1;
  __IO  uint8_t LBR        : 1;
  __IO  uint8_t MS         : 1;
  __IO  uint8_t UPCL       : 1;
} stc_mfs_lin_scr_field_t;

typedef struct stc_mfs_lin_escr_field
{
  __IO  uint8_t DEL0       : 1;
  __IO  uint8_t DEL1       : 1;
  __IO  uint8_t LBL0       : 1;
  __IO  uint8_t LBL1       : 1;
  __IO  uint8_t LBIE       : 1;
        uint8_t RESERVED5  : 1;
  __IO  uint8_t ESBL       : 1;
} stc_mfs_lin_escr_field_t;

typedef struct stc_mfs_lin_ssr_field
{
  __IO  uint8_t TBI        : 1;
  __IO  uint8_t TDRE       : 1;
  __IO  uint8_t RDRF       : 1;
  __IO  uint8_t ORE        : 1;
  __IO  uint8_t FRE        : 1;
  __IO  uint8_t LBD        : 1;
        uint8_t RESERVED6  : 1;
  __IO  uint8_t REC        : 1;
} stc_mfs_lin_ssr_field_t;

typedef struct stc_mfs_lin_bgr_field
{
       uint16_t RESERVED0  :15;
  __IO uint16_t EXT        : 1;
} stc_mfs_lin_bgr_field_t;

typedef struct stc_mfs_lin_bgr1_field
{
        uint8_t RESERVED0  : 7;
  __IO  uint8_t EXT        : 1;
} stc_mfs_lin_bgr1_field_t;

typedef struct stc_mfs_lin_fcr_field
{
  __IO uint16_t FE1        : 1;
  __IO uint16_t FE2        : 1;
  __IO uint16_t FCL1       : 1;
  __IO uint16_t FCL2       : 1;
  __IO uint16_t FSET       : 1;
  __IO uint16_t FLD        : 1;
  __IO uint16_t FLST       : 1;
       uint16_t RESERVED1  : 1;
  __IO uint16_t FSEL       : 1;
  __IO uint16_t FTIE       : 1;
  __IO uint16_t FDRQ       : 1;
  __IO uint16_t FRIIE      : 1;
  __IO uint16_t FLSTE      : 1;
} stc_mfs_lin_fcr_field_t;

typedef struct stc_mfs_lin_fcr0_field
{
  __IO  uint8_t FE1        : 1;
  __IO  uint8_t FE2        : 1;
  __IO  uint8_t FCL1       : 1;
  __IO  uint8_t FCL2       : 1;
  __IO  uint8_t FSET       : 1;
  __IO  uint8_t FLD        : 1;
  __IO  uint8_t FLST       : 1;
} stc_mfs_lin_fcr0_field_t;

typedef struct stc_mfs_lin_fcr1_field
{
  __IO  uint8_t FSEL       : 1;
  __IO  uint8_t FTIE       : 1;
  __IO  uint8_t FDRQ       : 1;
  __IO  uint8_t FRIIE      : 1;
  __IO  uint8_t FLSTE      : 1;
} stc_mfs_lin_fcr1_field_t;

typedef struct stc_mfs_lin_fbyte_field
{
  __IO uint16_t FD0        : 1;
  __IO uint16_t FD1        : 1;
  __IO uint16_t FD2        : 1;
  __IO uint16_t FD3        : 1;
  __IO uint16_t FD4        : 1;
  __IO uint16_t FD5        : 1;
  __IO uint16_t FD6        : 1;
  __IO uint16_t FD7        : 1;
  __IO uint16_t FD8        : 1;
  __IO uint16_t FD9        : 1;
  __IO uint16_t FD10       : 1;
  __IO uint16_t FD11       : 1;
  __IO uint16_t FD12       : 1;
  __IO uint16_t FD13       : 1;
  __IO uint16_t FD14       : 1;
  __IO uint16_t FD15       : 1;
} stc_mfs_lin_fbyte_field_t;

typedef struct stc_mfs_lin_fbyte1_field
{
  __IO  uint8_t FD0        : 1;
  __IO  uint8_t FD1        : 1;
  __IO  uint8_t FD2        : 1;
  __IO  uint8_t FD3        : 1;
  __IO  uint8_t FD4        : 1;
  __IO  uint8_t FD5        : 1;
  __IO  uint8_t FD6        : 1;
  __IO  uint8_t FD7        : 1;
} stc_mfs_lin_fbyte1_field_t;

typedef struct stc_mfs_lin_fbyte2_field
{
  __IO  uint8_t FD8        : 1;
  __IO  uint8_t FD9        : 1;
  __IO  uint8_t FD10       : 1;
  __IO  uint8_t FD11       : 1;
  __IO  uint8_t FD12       : 1;
  __IO  uint8_t FD13       : 1;
  __IO  uint8_t FD14       : 1;
  __IO  uint8_t FD15       : 1;
} stc_mfs_lin_fbyte2_field_t;


/******************************************************************************
 * MFS_I2C_MODULE
 ******************************************************************************/
/* MFS_I2C_MODULE register bit fields */
typedef struct stc_mfs_i2c_smr_field
{
        uint8_t RESERVED0  : 2;
  __IO  uint8_t TIE        : 1;
  __IO  uint8_t RIE        : 1;
  __IO  uint8_t WUCR       : 1;
  __IO  uint8_t MD         : 3;
} stc_mfs_i2c_smr_field_t;

typedef struct stc_mfs_i2c_ibcr_field
{
  __IO  uint8_t INT        : 1;
  __IO  uint8_t BER        : 1;
  __IO  uint8_t INTE       : 1;
  __IO  uint8_t CNDE       : 1;
  __IO  uint8_t WSEL       : 1;
  __IO  uint8_t ACKE       : 1;
  __IO  uint8_t ACT_SCC    : 1;
  __IO  uint8_t MSS        : 1;
} stc_mfs_i2c_ibcr_field_t;

typedef struct stc_mfs_i2c_ibsr_field
{
  __IO  uint8_t BB         : 1;
  __IO  uint8_t SPC        : 1;
  __IO  uint8_t RSC        : 1;
  __IO  uint8_t AL         : 1;
  __IO  uint8_t TRX        : 1;
  __IO  uint8_t RSA        : 1;
  __IO  uint8_t RACK       : 1;
  __IO  uint8_t FBT        : 1;
} stc_mfs_i2c_ibsr_field_t;

typedef struct stc_mfs_i2c_ssr_field
{
  __IO  uint8_t TBI        : 1;
  __IO  uint8_t TDRE       : 1;
  __IO  uint8_t RDRF       : 1;
  __IO  uint8_t ORE        : 1;
  __IO  uint8_t TBIE       : 1;
  __IO  uint8_t DMA        : 1;
  __IO  uint8_t TSET       : 1;
  __IO  uint8_t REC        : 1;
} stc_mfs_i2c_ssr_field_t;

typedef struct stc_mfs_i2c_isba_field
{
  __IO  uint8_t SA0        : 1;
  __IO  uint8_t SA1        : 1;
  __IO  uint8_t SA2        : 1;
  __IO  uint8_t SA3        : 1;
  __IO  uint8_t SA4        : 1;
  __IO  uint8_t SA5        : 1;
  __IO  uint8_t SA6        : 1;
  __IO  uint8_t SAEN       : 1;
} stc_mfs_i2c_isba_field_t;

typedef struct stc_mfs_i2c_ismk_field
{
  __IO  uint8_t SM0        : 1;
  __IO  uint8_t SM1        : 1;
  __IO  uint8_t SM2        : 1;
  __IO  uint8_t SM3        : 1;
  __IO  uint8_t SM4        : 1;
  __IO  uint8_t SM5        : 1;
  __IO  uint8_t SM6        : 1;
  __IO  uint8_t EN         : 1;
} stc_mfs_i2c_ismk_field_t;

typedef struct stc_mfs_i2c_fcr_field
{
  __IO uint16_t FE1        : 1;
  __IO uint16_t FE2        : 1;
  __IO uint16_t FCL1       : 1;
  __IO uint16_t FCL2       : 1;
  __IO uint16_t FSET       : 1;
  __IO uint16_t FLD        : 1;
  __IO uint16_t FLST       : 1;
       uint16_t RESERVED1  : 1;
  __IO uint16_t FSEL       : 1;
  __IO uint16_t FTIE       : 1;
  __IO uint16_t FDRQ       : 1;
  __IO uint16_t FRIIE      : 1;
  __IO uint16_t FLSTE      : 1;
} stc_mfs_i2c_fcr_field_t;

typedef struct stc_mfs_i2c_fcr0_field
{
  __IO  uint8_t FE1        : 1;
  __IO  uint8_t FE2        : 1;
  __IO  uint8_t FCL1       : 1;
  __IO  uint8_t FCL2       : 1;
  __IO  uint8_t FSET       : 1;
  __IO  uint8_t FLD        : 1;
  __IO  uint8_t FLST       : 1;
} stc_mfs_i2c_fcr0_field_t;

typedef struct stc_mfs_i2c_fcr1_field
{
  __IO  uint8_t FSEL       : 1;
  __IO  uint8_t FTIE       : 1;
  __IO  uint8_t FDRQ       : 1;
  __IO  uint8_t FRIIE      : 1;
  __IO  uint8_t FLSTE      : 1;
} stc_mfs_i2c_fcr1_field_t;

typedef struct stc_mfs_i2c_fbyte_field
{
  __IO uint16_t FD0        : 1;
  __IO uint16_t FD1        : 1;
  __IO uint16_t FD2        : 1;
  __IO uint16_t FD3        : 1;
  __IO uint16_t FD4        : 1;
  __IO uint16_t FD5        : 1;
  __IO uint16_t FD6        : 1;
  __IO uint16_t FD7        : 1;
  __IO uint16_t FD8        : 1;
  __IO uint16_t FD9        : 1;
  __IO uint16_t FD10       : 1;
  __IO uint16_t FD11       : 1;
  __IO uint16_t FD12       : 1;
  __IO uint16_t FD13       : 1;
  __IO uint16_t FD14       : 1;
  __IO uint16_t FD15       : 1;
} stc_mfs_i2c_fbyte_field_t;

typedef struct stc_mfs_i2c_fbyte1_field
{
  __IO  uint8_t FD0        : 1;
  __IO  uint8_t FD1        : 1;
  __IO  uint8_t FD2        : 1;
  __IO  uint8_t FD3        : 1;
  __IO  uint8_t FD4        : 1;
  __IO  uint8_t FD5        : 1;
  __IO  uint8_t FD6        : 1;
  __IO  uint8_t FD7        : 1;
} stc_mfs_i2c_fbyte1_field_t;

typedef struct stc_mfs_i2c_fbyte2_field
{
  __IO  uint8_t FD8        : 1;
  __IO  uint8_t FD9        : 1;
  __IO  uint8_t FD10       : 1;
  __IO  uint8_t FD11       : 1;
  __IO  uint8_t FD12       : 1;
  __IO  uint8_t FD13       : 1;
  __IO  uint8_t FD14       : 1;
  __IO  uint8_t FD15       : 1;
} stc_mfs_i2c_fbyte2_field_t;

typedef struct stc_mfs_i2c_eibcr_field
{
  __IO  uint8_t BEC        : 1;
  __IO  uint8_t SOCE       : 1;
  __IO  uint8_t SCLC       : 1;
  __IO  uint8_t SDAC       : 1;
  __IO  uint8_t SCLS       : 1;
  __IO  uint8_t SDAS       : 1;
} stc_mfs_i2c_eibcr_field_t;

/******************************************************************************
 * CRC_MODULE
 ******************************************************************************/
/* CRC_MODULE register bit fields */
typedef struct stc_crc_crccr_field
{
  __IO  uint8_t INIT       : 1;
  __IO  uint8_t CRC32      : 1;
  __IO  uint8_t LTLEND     : 1;
  __IO  uint8_t LSBFST     : 1;
  __IO  uint8_t CRCLTE     : 1;
  __IO  uint8_t CRCLSF     : 1;
  __IO  uint8_t FXOR       : 1;
} stc_crc_crccr_field_t;

/******************************************************************************
 * WC_MODULE
 ******************************************************************************/
/* WC_MODULE register bit fields */
typedef struct stc_wc_wcrd_field
{
  __IO  uint8_t CTR0       : 1;
  __IO  uint8_t CTR1       : 1;
  __IO  uint8_t CTR2       : 1;
  __IO  uint8_t CTR3       : 1;
  __IO  uint8_t CTR4       : 1;
  __IO  uint8_t CTR5       : 1;
} stc_wc_wcrd_field_t;

typedef struct stc_wc_wcrl_field
{
  __IO  uint8_t RLC0       : 1;
  __IO  uint8_t RLC1       : 1;
  __IO  uint8_t RLC2       : 1;
  __IO  uint8_t RLC3       : 1;
  __IO  uint8_t RLC4       : 1;
  __IO  uint8_t RLC5       : 1;
} stc_wc_wcrl_field_t;

typedef struct stc_wc_wccr_field
{
  __IO  uint8_t WCIF       : 1;
  __IO  uint8_t WCIE       : 1;
  __IO  uint8_t CS0        : 1;
  __IO  uint8_t CS1        : 1;
        uint8_t RESERVED1  : 2;
  __IO  uint8_t WCOP       : 1;
  __IO  uint8_t WCEN       : 1;
} stc_wc_wccr_field_t;

typedef struct stc_wc_clk_sel_field
{
  __IO uint16_t SEL_IN     : 1;
       uint16_t RESERVED1  : 7;
  __IO uint16_t SEL_OUT    : 1;
} stc_wc_clk_sel_field_t;

typedef struct stc_wc_clk_en_field
{
  __IO  uint8_t CLK_EN     : 1;
  __IO  uint8_t CLK_EN_R   : 1;
} stc_wc_clk_en_field_t;

/******************************************************************************
 * RTC_MODULE
 ******************************************************************************/
/* Realtime clock registers bit fields */
typedef struct stc_rtc_wtcr1_field
{
  __IO uint32_t ST         : 1;
       uint32_t RESERVED1  : 1;
  __IO uint32_t RUN        : 1;
  __IO uint32_t SRST       : 1;
  __IO uint32_t SCST       : 1;
  __IO uint32_t SCRST      : 1;
  __IO uint32_t BUSY       : 1;
       uint32_t RESERVED2  : 1;
  __IO uint32_t MIEN       : 1;
  __IO uint32_t HEN        : 1;
  __IO uint32_t DEN        : 1;
  __IO uint32_t MOEN       : 1;
  __IO uint32_t YEN        : 1;
       uint32_t RESERVED3  : 3;
  __IO uint32_t INTSSI     : 1;
  __IO uint32_t INTSI      : 1;
  __IO uint32_t INTMI      : 1;
  __IO uint32_t INTHI      : 1;
  __IO uint32_t INTTMI     : 1;
  __IO uint32_t INTALI     : 1;
  __IO uint32_t INTERI     : 1;
  __IO uint32_t INTCRI     : 1;
  __IO uint32_t INTSSIE    : 1;
  __IO uint32_t INTSIE     : 1;
  __IO uint32_t INTMIE     : 1;
  __IO uint32_t INTHIE     : 1;
  __IO uint32_t INTTMIE    : 1;
  __IO uint32_t INTALIE    : 1;
  __IO uint32_t INTERIE    : 1;
  __IO uint32_t INTCRIE    : 1;
} stc_rtc_wtcr1_field_t;

typedef struct stc_rtc_wtcr2_field
{
  __IO uint32_t CREAD      : 1;
       uint32_t RESERVED1  : 7;
  __IO uint32_t TMST       : 1;
  __IO uint32_t TMEN       : 1;
  __IO uint32_t TMRUN      : 1;
} stc_rtc_wtcr2_field_t;

typedef struct stc_rtc_wtbr_field
{
  __IO uint32_t BR0        : 1;
  __IO uint32_t BR1        : 1;
  __IO uint32_t BR2        : 1;
  __IO uint32_t BR3        : 1;
  __IO uint32_t BR4        : 1;
  __IO uint32_t BR5        : 1;
  __IO uint32_t BR6        : 1;
  __IO uint32_t BR7        : 1;
  __IO uint32_t BR8        : 1;
  __IO uint32_t BR9        : 1;
  __IO uint32_t BR10       : 1;
  __IO uint32_t BR11       : 1;
  __IO uint32_t BR12       : 1;
  __IO uint32_t BR13       : 1;
  __IO uint32_t BR14       : 1;
  __IO uint32_t BR15       : 1;
  __IO uint32_t BR16       : 1;
  __IO uint32_t BR17       : 1;
  __IO uint32_t BR18       : 1;
  __IO uint32_t BR19       : 1;
  __IO uint32_t BR20       : 1;
  __IO uint32_t BR21       : 1;
  __IO uint32_t BR22       : 1;
  __IO uint32_t BR23       : 1;
} stc_rtc_wtbr_field_t;

typedef struct stc_rtc_wtsr_field
{
  __IO  uint8_t S0         : 1;
  __IO  uint8_t S1         : 1;
  __IO  uint8_t S2         : 1;
  __IO  uint8_t S3         : 1;
  __IO  uint8_t TS0        : 1;
  __IO  uint8_t TS1        : 1;
  __IO  uint8_t TS2        : 1;
} stc_rtc_wtsr_field_t;

typedef struct stc_rtc_wtmir_field
{
  __IO  uint8_t MI0        : 1;
  __IO  uint8_t MI1        : 1;
  __IO  uint8_t MI2        : 1;
  __IO  uint8_t MI3        : 1;
  __IO  uint8_t TMI0       : 1;
  __IO  uint8_t TMI1       : 1;
  __IO  uint8_t TMI2       : 1;
} stc_rtc_wtmir_field_t;

typedef struct stc_rtc_wthr_field
{
  __IO  uint8_t H0         : 1;
  __IO  uint8_t H1         : 1;
  __IO  uint8_t H2         : 1;
  __IO  uint8_t H3         : 1;
  __IO  uint8_t TH0        : 1;
  __IO  uint8_t TH1        : 1;
} stc_rtc_wthr_field_t;

typedef struct stc_rtc_wtdr_field
{
  __IO  uint8_t D0         : 1;
  __IO  uint8_t D1         : 1;
  __IO  uint8_t D2         : 1;
  __IO  uint8_t D3         : 1;
  __IO  uint8_t TD0        : 1;
  __IO  uint8_t TD1        : 1;
} stc_rtc_wtdr_field_t;

typedef struct stc_rtc_wtdw_field
{
  __IO  uint8_t DW0        : 1;
  __IO  uint8_t DW1        : 1;
  __IO  uint8_t DW2        : 1;
} stc_rtc_wtdw_field_t;

typedef struct stc_rtc_wtmor_field
{
  __IO  uint8_t MO0        : 1;
  __IO  uint8_t MO1        : 1;
  __IO  uint8_t MO2        : 1;
  __IO  uint8_t MO3        : 1;
  __IO  uint8_t TMO0       : 1;
} stc_rtc_wtmor_field_t;

typedef struct stc_rtc_wtyr_field
{
  __IO  uint8_t Y0         : 1;
  __IO  uint8_t Y1         : 1;
  __IO  uint8_t Y2         : 1;
  __IO  uint8_t Y3         : 1;
  __IO  uint8_t TY0        : 1;
  __IO  uint8_t TY1        : 1;
  __IO  uint8_t TY2        : 1;
  __IO  uint8_t TY3        : 1;
} stc_rtc_wtyr_field_t;

typedef struct stc_rtc_almir_field
{
  __IO  uint8_t AMI0       : 1;
  __IO  uint8_t AMI1       : 1;
  __IO  uint8_t AMI2       : 1;
  __IO  uint8_t AMI3       : 1;
  __IO  uint8_t TAMI0      : 1;
  __IO  uint8_t TAMI1      : 1;
  __IO  uint8_t TAMI2      : 1;
} stc_rtc_almir_field_t;

typedef struct stc_rtc_alhr_field
{
  __IO  uint8_t AH0        : 1;
  __IO  uint8_t AH1        : 1;
  __IO  uint8_t AH2        : 1;
  __IO  uint8_t AH3        : 1;
  __IO  uint8_t TAH0       : 1;
  __IO  uint8_t TAH1       : 1;
} stc_rtc_alhr_field_t;

typedef struct stc_rtc_aldr_field
{
  __IO  uint8_t AD0        : 1;
  __IO  uint8_t AD1        : 1;
  __IO  uint8_t AD2        : 1;
  __IO  uint8_t AD3        : 1;
  __IO  uint8_t TAD0       : 1;
  __IO  uint8_t TAD1       : 1;
} stc_rtc_aldr_field_t;

typedef struct stc_rtc_almor_field
{
  __IO  uint8_t AMO0       : 1;
  __IO  uint8_t AMO1       : 1;
  __IO  uint8_t AMO2       : 1;
  __IO  uint8_t AMO3       : 1;
  __IO  uint8_t TAMO0      : 1;
} stc_rtc_almor_field_t;

typedef struct stc_rtc_alyr_field
{
  __IO  uint8_t AY0        : 1;
  __IO  uint8_t AY1        : 1;
  __IO  uint8_t AY2        : 1;
  __IO  uint8_t AY3        : 1;
  __IO  uint8_t TAY0       : 1;
  __IO  uint8_t TAY1       : 1;
  __IO  uint8_t TAY2       : 1;
  __IO  uint8_t TAY3       : 1;
} stc_rtc_alyr_field_t;

typedef struct stc_rtc_wttr_field
{
  __IO uint32_t TM0        : 1;
  __IO uint32_t TM1        : 1;
  __IO uint32_t TM2        : 1;
  __IO uint32_t TM3        : 1;
  __IO uint32_t TM4        : 1;
  __IO uint32_t TM5        : 1;
  __IO uint32_t TM6        : 1;
  __IO uint32_t TM7        : 1;
  __IO uint32_t TM8        : 1;
  __IO uint32_t TM9        : 1;
  __IO uint32_t TM10       : 1;
  __IO uint32_t TM11       : 1;
  __IO uint32_t TM12       : 1;
  __IO uint32_t TM13       : 1;
  __IO uint32_t TM14       : 1;
  __IO uint32_t TM15       : 1;
  __IO uint32_t TM16       : 1;
  __IO uint32_t TM17       : 1;
} stc_rtc_wttr_field_t;

typedef struct stc_rtc_wtclks_field
{
  __IO  uint8_t WTCLKS     : 1;
} stc_rtc_wtclks_field_t;

typedef struct stc_rtc_wtclkm_field
{
  __IO  uint8_t WTCLKM0    : 1;
  __IO  uint8_t WTCLKM1    : 1;
} stc_rtc_wtclkm_field_t;

typedef struct stc_rtc_wtcal_field
{
  __IO uint16_t WTCAL0     : 1;
  __IO uint16_t WTCAL1     : 1;
  __IO uint16_t WTCAL2     : 1;
  __IO uint16_t WTCAL3     : 1;
  __IO uint16_t WTCAL4     : 1;
  __IO uint16_t WTCAL5     : 1;
  __IO uint16_t WTCAL6     : 1;
  __IO uint16_t WTCAL7     : 1;
  __IO uint16_t WTCAL8     : 1;
  __IO uint16_t WTCAL9     : 1;
} stc_rtc_wtcal_field_t;

typedef struct stc_rtc_wtcalen_field
{
  __IO  uint8_t WTCALEN    : 1;
} stc_rtc_wtcalen_field_t;

typedef struct stc_rtc_wtdiv_field
{
  __IO  uint8_t WTDIV0     : 1;
  __IO  uint8_t WTDIV1     : 1;
  __IO  uint8_t WTDIV2     : 1;
  __IO  uint8_t WTDIV3     : 1;
} stc_rtc_wtdiv_field_t;

typedef struct stc_rtc_wtdiven_field
{
  __IO  uint8_t WTDIVEN    : 1;
  __IO  uint8_t WTDIVRDY   : 1;
} stc_rtc_wtdiven_field_t;

typedef struct stc_rtc_wtcalprd_field
{
  __IO  uint8_t WTCALPRD0  : 1;
  __IO  uint8_t WTCALPRD1  : 1;
  __IO  uint8_t WTCALPRD2  : 1;
  __IO  uint8_t WTCALPRD3  : 1;
  __IO  uint8_t WTCALPRD4  : 1;
  __IO  uint8_t WTCALPRD5  : 1;
} stc_rtc_wtcalprd_field_t;

typedef struct stc_rtc_wtcosel_field
{
  __IO  uint8_t WTCOSEL    : 1;
} stc_rtc_wtcosel_field_t;

/******************************************************************************
 * USB_MODULE
 ******************************************************************************/
/* USB_MODULE register bit fields */
typedef struct stc_usb_hcnt_field
{
  __IO uint16_t HOST       : 1;
  __IO uint16_t URST       : 1;
  __IO uint16_t SOFIRE     : 1;
  __IO uint16_t DIRE       : 1;
  __IO uint16_t CNNIRE     : 1;
  __IO uint16_t CMPIRE     : 1;
  __IO uint16_t URIRE      : 1;
  __IO uint16_t RWKIRE     : 1;
  __IO uint16_t RETRY      : 1;
  __IO uint16_t CANCEL     : 1;
  __IO uint16_t SOFSTEP    : 1;
} stc_usb_hcnt_field_t;

typedef struct stc_usb_hcnt0_field
{
  __IO  uint8_t HOST       : 1;
  __IO  uint8_t URST       : 1;
  __IO  uint8_t SOFIRE     : 1;
  __IO  uint8_t DIRE       : 1;
  __IO  uint8_t CNNIRE     : 1;
  __IO  uint8_t CMPIRE     : 1;
  __IO  uint8_t URIRE      : 1;
  __IO  uint8_t RWKIRE     : 1;
} stc_usb_hcnt0_field_t;

typedef struct stc_usb_hcnt1_field
{
  __IO  uint8_t RETRY      : 1;
  __IO  uint8_t CANCEL     : 1;
  __IO  uint8_t SOFSTEP    : 1;
} stc_usb_hcnt1_field_t;

typedef struct stc_usb_hirq_field
{
  __IO  uint8_t SOFIRQ     : 1;
  __IO  uint8_t DIRQ       : 1;
  __IO  uint8_t CNNIRQ     : 1;
  __IO  uint8_t CMPIRQ     : 1;
  __IO  uint8_t URIRQ      : 1;
  __IO  uint8_t RWKIRQ     : 1;
        uint8_t RESERVED1  : 1;
  __IO  uint8_t TCAN       : 1;
} stc_usb_hirq_field_t;

typedef struct stc_usb_herr_field
{
  __IO  uint8_t HS0        : 1;
  __IO  uint8_t HS1        : 1;
  __IO  uint8_t STUFF      : 1;
  __IO  uint8_t TGERR      : 1;
  __IO  uint8_t CRC        : 1;
  __IO  uint8_t TOUT       : 1;
  __IO  uint8_t RERR       : 1;
  __IO  uint8_t LSTSOF     : 1;
} stc_usb_herr_field_t;

typedef struct stc_usb_hstate_field
{
  __IO  uint8_t CSTAT      : 1;
  __IO  uint8_t TMODE      : 1;
  __IO  uint8_t SUSP       : 1;
  __IO  uint8_t SOFBUSY    : 1;
  __IO  uint8_t CLKSEL     : 1;
  __IO  uint8_t ALIVE      : 1;
} stc_usb_hstate_field_t;

typedef struct stc_usb_hfcomp_field
{
  __IO  uint8_t FRAMECOMP0 : 1;
  __IO  uint8_t FRAMECOMP1 : 1;
  __IO  uint8_t FRAMECOMP2 : 1;
  __IO  uint8_t FRAMECOMP3 : 1;
  __IO  uint8_t FRAMECOMP4 : 1;
  __IO  uint8_t FRAMECOMP5 : 1;
  __IO  uint8_t FRAMECOMP6 : 1;
  __IO  uint8_t FRAMECOMP7 : 1;
} stc_usb_hfcomp_field_t;

typedef struct stc_usb_hrtimer_field
{
  __IO uint16_t RTIMER     :16;
} stc_usb_hrtimer_field_t;

typedef struct stc_usb_hrtimer0_field
{
  __IO  uint8_t RTIMER0    : 8;
} stc_usb_hrtimer0_field_t;

typedef struct stc_usb_hrtimer1_field
{
  __IO  uint8_t RTIMER1    : 8;
} stc_usb_hrtimer1_field_t;

typedef struct stc_usb_hrtimer2_field
{
  __IO  uint8_t RTIMER2    : 2;
} stc_usb_hrtimer2_field_t;

typedef struct stc_usb_hadr_field
{
  __IO  uint8_t ADDRESS0   : 1;
  __IO  uint8_t ADDRESS1   : 1;
  __IO  uint8_t ADDRESS2   : 1;
  __IO  uint8_t ADDRESS3   : 1;
  __IO  uint8_t ADDRESS4   : 1;
  __IO  uint8_t ADDRESS5   : 1;
  __IO  uint8_t ADDRESS6   : 1;
} stc_usb_hadr_field_t;

typedef struct stc_usb_heof_field
{
  __IO uint16_t EOF        :14;
} stc_usb_heof_field_t;

typedef struct stc_usb_heof0_field
{
  __IO  uint8_t EOF0       : 8;
} stc_usb_heof0_field_t;

typedef struct stc_usb_heof1_field
{
  __IO  uint8_t EOF1       : 6;
} stc_usb_heof1_field_t;

typedef struct stc_usb_hframe_field
{
  __IO uint16_t FRAME      :11;
} stc_usb_hframe_field_t;

typedef struct stc_usb_hframe0_field
{
  __IO  uint8_t FRAME0     : 8;
} stc_usb_hframe0_field_t;

typedef struct stc_usb_hframe1_field
{
  __IO  uint8_t FRAME1     : 3;
} stc_usb_hframe1_field_t;

typedef struct stc_usb_htoken_field
{
  __IO  uint8_t ENDPT0     : 1;
  __IO  uint8_t ENDPT1     : 1;
  __IO  uint8_t ENDPT2     : 1;
  __IO  uint8_t ENDPT3     : 1;
  __IO  uint8_t TKNEN0     : 1;
  __IO  uint8_t TKNEN1     : 1;
  __IO  uint8_t TKNEN2     : 1;
  __IO  uint8_t TGGL       : 1;
} stc_usb_htoken_field_t;

typedef struct stc_usb_udcc_field
{
  __IO uint16_t PWC        : 1;
  __IO uint16_t RFBK       : 1;
       uint16_t RESERVED1  : 1;
  __IO uint16_t STALCLREN  : 1;
  __IO uint16_t USTP       : 1;
  __IO uint16_t HCONX      : 1;
  __IO uint16_t RESUM      : 1;
  __IO uint16_t RST        : 1;
} stc_usb_udcc_field_t;

typedef struct stc_usb_ep0c_field
{
  __IO uint16_t PKS00      : 1;
  __IO uint16_t PKS01      : 1;
  __IO uint16_t PKS02      : 1;
  __IO uint16_t PKS03      : 1;
  __IO uint16_t PKS04      : 1;
  __IO uint16_t PKS05      : 1;
  __IO uint16_t PKS06      : 1;
       uint16_t RESERVED1  : 2;
  __IO uint16_t STAL       : 1;
} stc_usb_ep0c_field_t;

typedef struct stc_usb_ep1c_field
{
  __IO uint16_t PKS10      : 1;
  __IO uint16_t PKS11      : 1;
  __IO uint16_t PKS12      : 1;
  __IO uint16_t PKS13      : 1;
  __IO uint16_t PKS14      : 1;
  __IO uint16_t PKS15      : 1;
  __IO uint16_t PKS16      : 1;
  __IO uint16_t PKS17      : 1;
  __IO uint16_t PKS18      : 1;
  __IO uint16_t STAL       : 1;
  __IO uint16_t NULE       : 1;
  __IO uint16_t DMAE       : 1;
  __IO uint16_t DIR        : 1;
  __IO uint16_t TYPE0      : 1;
  __IO uint16_t TYPE1      : 1;
  __IO uint16_t EPEN       : 1;
} stc_usb_ep1c_field_t;

typedef struct stc_usb_ep2c_field
{
  __IO uint16_t PKS20      : 1;
  __IO uint16_t PKS21      : 1;
  __IO uint16_t PKS22      : 1;
  __IO uint16_t PKS23      : 1;
  __IO uint16_t PKS24      : 1;
  __IO uint16_t PKS25      : 1;
  __IO uint16_t PKS26      : 1;
       uint16_t RESERVED1  : 2;
  __IO uint16_t STAL       : 1;
  __IO uint16_t NULE       : 1;
  __IO uint16_t DMAE       : 1;
  __IO uint16_t DIR        : 1;
  __IO uint16_t TYPE0      : 1;
  __IO uint16_t TYPE1      : 1;
  __IO uint16_t EPEN       : 1;
} stc_usb_ep2c_field_t;

typedef struct stc_usb_ep3c_field
{
  __IO uint16_t PKS30      : 1;
  __IO uint16_t PKS31      : 1;
  __IO uint16_t PKS32      : 1;
  __IO uint16_t PKS33      : 1;
  __IO uint16_t PKS34      : 1;
  __IO uint16_t PKS35      : 1;
  __IO uint16_t PKS36      : 1;
       uint16_t RESERVED1  : 2;
  __IO uint16_t STAL       : 1;
  __IO uint16_t NULE       : 1;
  __IO uint16_t DMAE       : 1;
  __IO uint16_t DIR        : 1;
  __IO uint16_t TYPE0      : 1;
  __IO uint16_t TYPE1      : 1;
  __IO uint16_t EPEN       : 1;
} stc_usb_ep3c_field_t;

typedef struct stc_usb_ep4c_field
{
  __IO uint16_t PKS40      : 1;
  __IO uint16_t PKS41      : 1;
  __IO uint16_t PKS42      : 1;
  __IO uint16_t PKS43      : 1;
  __IO uint16_t PKS44      : 1;
  __IO uint16_t PKS45      : 1;
  __IO uint16_t PKS46      : 1;
       uint16_t RESERVED1  : 2;
  __IO uint16_t STAL       : 1;
  __IO uint16_t NULE       : 1;
  __IO uint16_t DMAE       : 1;
  __IO uint16_t DIR        : 1;
  __IO uint16_t TYPE0      : 1;
  __IO uint16_t TYPE1      : 1;
  __IO uint16_t EPEN       : 1;
} stc_usb_ep4c_field_t;

typedef struct stc_usb_ep5c_field
{
  __IO uint16_t PKS50      : 1;
  __IO uint16_t PKS51      : 1;
  __IO uint16_t PKS52      : 1;
  __IO uint16_t PKS53      : 1;
  __IO uint16_t PKS54      : 1;
  __IO uint16_t PKS55      : 1;
  __IO uint16_t PKS56      : 1;
       uint16_t RESERVED1  : 2;
  __IO uint16_t STAL       : 1;
  __IO uint16_t NULE       : 1;
  __IO uint16_t DMAE       : 1;
  __IO uint16_t DIR        : 1;
  __IO uint16_t TYPE0      : 1;
  __IO uint16_t TYPE1      : 1;
  __IO uint16_t EPEN       : 1;
} stc_usb_ep5c_field_t;

typedef struct stc_usb_tmsp_field
{
  __IO uint16_t TMSP0      : 1;
  __IO uint16_t TMSP1      : 1;
  __IO uint16_t TMSP2      : 1;
  __IO uint16_t TMSP3      : 1;
  __IO uint16_t TMSP4      : 1;
  __IO uint16_t TMSP5      : 1;
  __IO uint16_t TMSP6      : 1;
  __IO uint16_t TMSP7      : 1;
  __IO uint16_t TMSP8      : 1;
  __IO uint16_t TMSP9      : 1;
  __IO uint16_t TMSP10     : 1;
} stc_usb_tmsp_field_t;

typedef struct stc_usb_udcs_field
{
  __IO  uint8_t CONF       : 1;
  __IO  uint8_t SETP       : 1;
  __IO  uint8_t WKUP       : 1;
  __IO  uint8_t BRST       : 1;
  __IO  uint8_t SOF        : 1;
  __IO  uint8_t SUSP       : 1;
} stc_usb_udcs_field_t;

typedef struct stc_usb_udcie_field
{
  __IO  uint8_t CONFIE     : 1;
  __IO  uint8_t CONFN      : 1;
  __IO  uint8_t WKUPIE     : 1;
  __IO  uint8_t BRSTIE     : 1;
  __IO  uint8_t SOFIE      : 1;
  __IO  uint8_t SUSPIE     : 1;
} stc_usb_udcie_field_t;

typedef struct stc_usb_ep0is_field
{
       uint16_t RESERVED1  : 10;
  __IO uint16_t DRQI       : 1;
       uint16_t RESERVED2  : 3;
  __IO uint16_t DRQIIE     : 1;
  __IO uint16_t BFINI      : 1;
} stc_usb_ep0is_field_t;

typedef struct stc_usb_ep0os_field
{
  __IO uint16_t SIZE0      : 1;
  __IO uint16_t SIZE1      : 1;
  __IO uint16_t SIZE2      : 1;
  __IO uint16_t SIZE3      : 1;
  __IO uint16_t SIZE4      : 1;
  __IO uint16_t SIZE5      : 1;
  __IO uint16_t SIZE6      : 1;
       uint16_t RESERVED1  : 2;
  __IO uint16_t SPK        : 1;
  __IO uint16_t DRQO       : 1;
       uint16_t RESERVED2  : 2;
  __IO uint16_t SPKIE      : 1;
  __IO uint16_t DRQOIE     : 1;
  __IO uint16_t BFINI      : 1;
} stc_usb_ep0os_field_t;

typedef struct stc_usb_ep1s_field
{
  __IO uint16_t SIZE10     : 1;
  __IO uint16_t SIZE11     : 1;
  __IO uint16_t SIZE12     : 1;
  __IO uint16_t SIZE13     : 1;
  __IO uint16_t SIZE14     : 1;
  __IO uint16_t SIZE15     : 1;
  __IO uint16_t SIZE16     : 1;
  __IO uint16_t SIZE17     : 1;
  __IO uint16_t SIZE18     : 1;
  __IO uint16_t SPK        : 1;
  __IO uint16_t DRQ        : 1;
  __IO uint16_t BUSY       : 1;
       uint16_t RESERVED1  : 1;
  __IO uint16_t SPKIE      : 1;
  __IO uint16_t DRQIE      : 1;
  __IO uint16_t BFINI      : 1;
} stc_usb_ep1s_field_t;

typedef struct stc_usb_ep2s_field
{
  __IO uint16_t SIZE20     : 1;
  __IO uint16_t SIZE21     : 1;
  __IO uint16_t SIZE22     : 1;
  __IO uint16_t SIZE23     : 1;
  __IO uint16_t SIZE24     : 1;
  __IO uint16_t SIZE25     : 1;
  __IO uint16_t SIZE26     : 1;
       uint16_t RESERVED1  : 2;
  __IO uint16_t SPK        : 1;
  __IO uint16_t DRQ        : 1;
  __IO uint16_t BUSY       : 1;
       uint16_t RESERVED2  : 1;
  __IO uint16_t SPKIE      : 1;
  __IO uint16_t DRQIE      : 1;
  __IO uint16_t BFINI      : 1;
} stc_usb_ep2s_field_t;

typedef struct stc_usb_ep4s_field
{
  __IO uint16_t SIZE40     : 1;
  __IO uint16_t SIZE41     : 1;
  __IO uint16_t SIZE42     : 1;
  __IO uint16_t SIZE43     : 1;
  __IO uint16_t SIZE44     : 1;
  __IO uint16_t SIZE45     : 1;
  __IO uint16_t SIZE46     : 1;
       uint16_t RESERVED1  : 2;
  __IO uint16_t SPK        : 1;
  __IO uint16_t DRQ        : 1;
  __IO uint16_t BUSY       : 1;
       uint16_t RESERVED2  : 1;
  __IO uint16_t SPKIE      : 1;
  __IO uint16_t DRQIE      : 1;
  __IO uint16_t BFINI      : 1;
} stc_usb_ep4s_field_t;

typedef struct stc_usb_ep5s_field
{
  __IO uint16_t SIZE50     : 1;
  __IO uint16_t SIZE51     : 1;
  __IO uint16_t SIZE52     : 1;
  __IO uint16_t SIZE53     : 1;
  __IO uint16_t SIZE54     : 1;
  __IO uint16_t SIZE55     : 1;
  __IO uint16_t SIZE56     : 1;
       uint16_t RESERVED1  : 2;
  __IO uint16_t SPK        : 1;
  __IO uint16_t DRQ        : 1;
  __IO uint16_t BUSY       : 1;
       uint16_t RESERVED2  : 1;
  __IO uint16_t SPKIE      : 1;
  __IO uint16_t DRQIE      : 1;
  __IO uint16_t BFINI      : 1;
} stc_usb_ep5s_field_t;

/******************************************************************************
 * DMAC_MODULE
 ******************************************************************************/
/* DMAC_MODULE register bit fields */
typedef struct stc_dmac_dmacr_field
{
       uint32_t RESERVED1  : 24;
  __IO uint32_t DH0        : 1;
  __IO uint32_t DH1        : 1;
  __IO uint32_t DH2        : 1;
  __IO uint32_t DH3        : 1;
  __IO uint32_t PR         : 1;
       uint32_t RESERVED2  : 1;
  __IO uint32_t DS         : 1;
  __IO uint32_t DE         : 1;
} stc_dmac_dmacr_field_t;

typedef struct stc_dmac_dmaca0_field
{
  __IO uint32_t TC0        : 1;
  __IO uint32_t TC1        : 1;
  __IO uint32_t TC2        : 1;
  __IO uint32_t TC3        : 1;
  __IO uint32_t TC4        : 1;
  __IO uint32_t TC5        : 1;
  __IO uint32_t TC6        : 1;
  __IO uint32_t TC7        : 1;
  __IO uint32_t TC8        : 1;
  __IO uint32_t TC9        : 1;
  __IO uint32_t TC10       : 1;
  __IO uint32_t TC11       : 1;
  __IO uint32_t TC12       : 1;
  __IO uint32_t TC13       : 1;
  __IO uint32_t TC14       : 1;
  __IO uint32_t TC15       : 1;
  __IO uint32_t BC0        : 1;
  __IO uint32_t BC1        : 1;
  __IO uint32_t BC2        : 1;
  __IO uint32_t BC3        : 1;
       uint32_t RESERVED1  : 3;
  __IO uint32_t IS0        : 1;
  __IO uint32_t IS1        : 1;
  __IO uint32_t IS2        : 1;
  __IO uint32_t IS3        : 1;
  __IO uint32_t IS4        : 1;
  __IO uint32_t IS5        : 1;
  __IO uint32_t ST         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t EB         : 1;
} stc_dmac_dmaca0_field_t;

typedef struct stc_dmac_dmacb0_field
{
  __IO uint32_t EM         : 1;
       uint32_t RESERVED1  : 15;
  __IO uint32_t SS0        : 1;
  __IO uint32_t SS1        : 1;
  __IO uint32_t SS2        : 1;
  __IO uint32_t CI         : 1;
  __IO uint32_t EI         : 1;
  __IO uint32_t RD         : 1;
  __IO uint32_t RS         : 1;
  __IO uint32_t RC         : 1;
  __IO uint32_t FD         : 1;
  __IO uint32_t FS         : 1;
  __IO uint32_t TW0        : 1;
  __IO uint32_t TW1        : 1;
  __IO uint32_t MS0        : 1;
  __IO uint32_t MS1        : 1;
} stc_dmac_dmacb0_field_t;

typedef struct stc_dmac_dmaca1_field
{
  __IO uint32_t TC0        : 1;
  __IO uint32_t TC1        : 1;
  __IO uint32_t TC2        : 1;
  __IO uint32_t TC3        : 1;
  __IO uint32_t TC4        : 1;
  __IO uint32_t TC5        : 1;
  __IO uint32_t TC6        : 1;
  __IO uint32_t TC7        : 1;
  __IO uint32_t TC8        : 1;
  __IO uint32_t TC9        : 1;
  __IO uint32_t TC10       : 1;
  __IO uint32_t TC11       : 1;
  __IO uint32_t TC12       : 1;
  __IO uint32_t TC13       : 1;
  __IO uint32_t TC14       : 1;
  __IO uint32_t TC15       : 1;
  __IO uint32_t BC0        : 1;
  __IO uint32_t BC1        : 1;
  __IO uint32_t BC2        : 1;
  __IO uint32_t BC3        : 1;
       uint32_t RESERVED1  : 3;
  __IO uint32_t IS0        : 1;
  __IO uint32_t IS1        : 1;
  __IO uint32_t IS2        : 1;
  __IO uint32_t IS3        : 1;
  __IO uint32_t IS4        : 1;
  __IO uint32_t IS5        : 1;
  __IO uint32_t ST         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t EB         : 1;
} stc_dmac_dmaca1_field_t;

typedef struct stc_dmac_dmacb1_field
{
  __IO uint32_t EM         : 1;
       uint32_t RESERVED1  : 15;
  __IO uint32_t SS0        : 1;
  __IO uint32_t SS1        : 1;
  __IO uint32_t SS2        : 1;
  __IO uint32_t CI         : 1;
  __IO uint32_t EI         : 1;
  __IO uint32_t RD         : 1;
  __IO uint32_t RS         : 1;
  __IO uint32_t RC         : 1;
  __IO uint32_t FD         : 1;
  __IO uint32_t FS         : 1;
  __IO uint32_t TW0        : 1;
  __IO uint32_t TW1        : 1;
  __IO uint32_t MS0        : 1;
  __IO uint32_t MS1        : 1;
} stc_dmac_dmacb1_field_t;

typedef struct stc_dmac_dmaca2_field
{
  __IO uint32_t TC0        : 1;
  __IO uint32_t TC1        : 1;
  __IO uint32_t TC2        : 1;
  __IO uint32_t TC3        : 1;
  __IO uint32_t TC4        : 1;
  __IO uint32_t TC5        : 1;
  __IO uint32_t TC6        : 1;
  __IO uint32_t TC7        : 1;
  __IO uint32_t TC8        : 1;
  __IO uint32_t TC9        : 1;
  __IO uint32_t TC10       : 1;
  __IO uint32_t TC11       : 1;
  __IO uint32_t TC12       : 1;
  __IO uint32_t TC13       : 1;
  __IO uint32_t TC14       : 1;
  __IO uint32_t TC15       : 1;
  __IO uint32_t BC0        : 1;
  __IO uint32_t BC1        : 1;
  __IO uint32_t BC2        : 1;
  __IO uint32_t BC3        : 1;
       uint32_t RESERVED1  : 3;
  __IO uint32_t IS0        : 1;
  __IO uint32_t IS1        : 1;
  __IO uint32_t IS2        : 1;
  __IO uint32_t IS3        : 1;
  __IO uint32_t IS4        : 1;
  __IO uint32_t IS5        : 1;
  __IO uint32_t ST         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t EB         : 1;
} stc_dmac_dmaca2_field_t;

typedef struct stc_dmac_dmacb2_field
{
  __IO uint32_t EM         : 1;
       uint32_t RESERVED1  : 15;
  __IO uint32_t SS0        : 1;
  __IO uint32_t SS1        : 1;
  __IO uint32_t SS2        : 1;
  __IO uint32_t CI         : 1;
  __IO uint32_t EI         : 1;
  __IO uint32_t RD         : 1;
  __IO uint32_t RS         : 1;
  __IO uint32_t RC         : 1;
  __IO uint32_t FD         : 1;
  __IO uint32_t FS         : 1;
  __IO uint32_t TW0        : 1;
  __IO uint32_t TW1        : 1;
  __IO uint32_t MS0        : 1;
  __IO uint32_t MS1        : 1;
} stc_dmac_dmacb2_field_t;

typedef struct stc_dmac_dmaca3_field
{
  __IO uint32_t TC0        : 1;
  __IO uint32_t TC1        : 1;
  __IO uint32_t TC2        : 1;
  __IO uint32_t TC3        : 1;
  __IO uint32_t TC4        : 1;
  __IO uint32_t TC5        : 1;
  __IO uint32_t TC6        : 1;
  __IO uint32_t TC7        : 1;
  __IO uint32_t TC8        : 1;
  __IO uint32_t TC9        : 1;
  __IO uint32_t TC10       : 1;
  __IO uint32_t TC11       : 1;
  __IO uint32_t TC12       : 1;
  __IO uint32_t TC13       : 1;
  __IO uint32_t TC14       : 1;
  __IO uint32_t TC15       : 1;
  __IO uint32_t BC0        : 1;
  __IO uint32_t BC1        : 1;
  __IO uint32_t BC2        : 1;
  __IO uint32_t BC3        : 1;
       uint32_t RESERVED1  : 3;
  __IO uint32_t IS0        : 1;
  __IO uint32_t IS1        : 1;
  __IO uint32_t IS2        : 1;
  __IO uint32_t IS3        : 1;
  __IO uint32_t IS4        : 1;
  __IO uint32_t IS5        : 1;
  __IO uint32_t ST         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t EB         : 1;
} stc_dmac_dmaca3_field_t;

typedef struct stc_dmac_dmacb3_field
{
  __IO uint32_t EM         : 1;
       uint32_t RESERVED1  : 15;
  __IO uint32_t SS0        : 1;
  __IO uint32_t SS1        : 1;
  __IO uint32_t SS2        : 1;
  __IO uint32_t CI         : 1;
  __IO uint32_t EI         : 1;
  __IO uint32_t RD         : 1;
  __IO uint32_t RS         : 1;
  __IO uint32_t RC         : 1;
  __IO uint32_t FD         : 1;
  __IO uint32_t FS         : 1;
  __IO uint32_t TW0        : 1;
  __IO uint32_t TW1        : 1;
  __IO uint32_t MS0        : 1;
  __IO uint32_t MS1        : 1;
} stc_dmac_dmacb3_field_t;

typedef struct stc_dmac_dmaca4_field
{
  __IO uint32_t TC0        : 1;
  __IO uint32_t TC1        : 1;
  __IO uint32_t TC2        : 1;
  __IO uint32_t TC3        : 1;
  __IO uint32_t TC4        : 1;
  __IO uint32_t TC5        : 1;
  __IO uint32_t TC6        : 1;
  __IO uint32_t TC7        : 1;
  __IO uint32_t TC8        : 1;
  __IO uint32_t TC9        : 1;
  __IO uint32_t TC10       : 1;
  __IO uint32_t TC11       : 1;
  __IO uint32_t TC12       : 1;
  __IO uint32_t TC13       : 1;
  __IO uint32_t TC14       : 1;
  __IO uint32_t TC15       : 1;
  __IO uint32_t BC0        : 1;
  __IO uint32_t BC1        : 1;
  __IO uint32_t BC2        : 1;
  __IO uint32_t BC3        : 1;
       uint32_t RESERVED1  : 3;
  __IO uint32_t IS0        : 1;
  __IO uint32_t IS1        : 1;
  __IO uint32_t IS2        : 1;
  __IO uint32_t IS3        : 1;
  __IO uint32_t IS4        : 1;
  __IO uint32_t IS5        : 1;
  __IO uint32_t ST         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t EB         : 1;
} stc_dmac_dmaca4_field_t;

typedef struct stc_dmac_dmacb4_field
{
  __IO uint32_t EM         : 1;
       uint32_t RESERVED1  : 15;
  __IO uint32_t SS0        : 1;
  __IO uint32_t SS1        : 1;
  __IO uint32_t SS2        : 1;
  __IO uint32_t CI         : 1;
  __IO uint32_t EI         : 1;
  __IO uint32_t RD         : 1;
  __IO uint32_t RS         : 1;
  __IO uint32_t RC         : 1;
  __IO uint32_t FD         : 1;
  __IO uint32_t FS         : 1;
  __IO uint32_t TW0        : 1;
  __IO uint32_t TW1        : 1;
  __IO uint32_t MS0        : 1;
  __IO uint32_t MS1        : 1;
} stc_dmac_dmacb4_field_t;

typedef struct stc_dmac_dmaca5_field
{
  __IO uint32_t TC0        : 1;
  __IO uint32_t TC1        : 1;
  __IO uint32_t TC2        : 1;
  __IO uint32_t TC3        : 1;
  __IO uint32_t TC4        : 1;
  __IO uint32_t TC5        : 1;
  __IO uint32_t TC6        : 1;
  __IO uint32_t TC7        : 1;
  __IO uint32_t TC8        : 1;
  __IO uint32_t TC9        : 1;
  __IO uint32_t TC10       : 1;
  __IO uint32_t TC11       : 1;
  __IO uint32_t TC12       : 1;
  __IO uint32_t TC13       : 1;
  __IO uint32_t TC14       : 1;
  __IO uint32_t TC15       : 1;
  __IO uint32_t BC0        : 1;
  __IO uint32_t BC1        : 1;
  __IO uint32_t BC2        : 1;
  __IO uint32_t BC3        : 1;
       uint32_t RESERVED1  : 3;
  __IO uint32_t IS0        : 1;
  __IO uint32_t IS1        : 1;
  __IO uint32_t IS2        : 1;
  __IO uint32_t IS3        : 1;
  __IO uint32_t IS4        : 1;
  __IO uint32_t IS5        : 1;
  __IO uint32_t ST         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t EB         : 1;
} stc_dmac_dmaca5_field_t;

typedef struct stc_dmac_dmacb5_field
{
  __IO uint32_t EM         : 1;
       uint32_t RESERVED1  : 15;
  __IO uint32_t SS0        : 1;
  __IO uint32_t SS1        : 1;
  __IO uint32_t SS2        : 1;
  __IO uint32_t CI         : 1;
  __IO uint32_t EI         : 1;
  __IO uint32_t RD         : 1;
  __IO uint32_t RS         : 1;
  __IO uint32_t RC         : 1;
  __IO uint32_t FD         : 1;
  __IO uint32_t FS         : 1;
  __IO uint32_t TW0        : 1;
  __IO uint32_t TW1        : 1;
  __IO uint32_t MS0        : 1;
  __IO uint32_t MS1        : 1;
} stc_dmac_dmacb5_field_t;

typedef struct stc_dmac_dmaca6_field
{
  __IO uint32_t TC0        : 1;
  __IO uint32_t TC1        : 1;
  __IO uint32_t TC2        : 1;
  __IO uint32_t TC3        : 1;
  __IO uint32_t TC4        : 1;
  __IO uint32_t TC5        : 1;
  __IO uint32_t TC6        : 1;
  __IO uint32_t TC7        : 1;
  __IO uint32_t TC8        : 1;
  __IO uint32_t TC9        : 1;
  __IO uint32_t TC10       : 1;
  __IO uint32_t TC11       : 1;
  __IO uint32_t TC12       : 1;
  __IO uint32_t TC13       : 1;
  __IO uint32_t TC14       : 1;
  __IO uint32_t TC15       : 1;
  __IO uint32_t BC0        : 1;
  __IO uint32_t BC1        : 1;
  __IO uint32_t BC2        : 1;
  __IO uint32_t BC3        : 1;
       uint32_t RESERVED1  : 3;
  __IO uint32_t IS0        : 1;
  __IO uint32_t IS1        : 1;
  __IO uint32_t IS2        : 1;
  __IO uint32_t IS3        : 1;
  __IO uint32_t IS4        : 1;
  __IO uint32_t IS5        : 1;
  __IO uint32_t ST         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t EB         : 1;
} stc_dmac_dmaca6_field_t;

typedef struct stc_dmac_dmacb6_field
{
  __IO uint32_t EM         : 1;
       uint32_t RESERVED1  : 15;
  __IO uint32_t SS0        : 1;
  __IO uint32_t SS1        : 1;
  __IO uint32_t SS2        : 1;
  __IO uint32_t CI         : 1;
  __IO uint32_t EI         : 1;
  __IO uint32_t RD         : 1;
  __IO uint32_t RS         : 1;
  __IO uint32_t RC         : 1;
  __IO uint32_t FD         : 1;
  __IO uint32_t FS         : 1;
  __IO uint32_t TW0        : 1;
  __IO uint32_t TW1        : 1;
  __IO uint32_t MS0        : 1;
  __IO uint32_t MS1        : 1;
} stc_dmac_dmacb6_field_t;

typedef struct stc_dmac_dmaca7_field
{
  __IO uint32_t TC0        : 1;
  __IO uint32_t TC1        : 1;
  __IO uint32_t TC2        : 1;
  __IO uint32_t TC3        : 1;
  __IO uint32_t TC4        : 1;
  __IO uint32_t TC5        : 1;
  __IO uint32_t TC6        : 1;
  __IO uint32_t TC7        : 1;
  __IO uint32_t TC8        : 1;
  __IO uint32_t TC9        : 1;
  __IO uint32_t TC10       : 1;
  __IO uint32_t TC11       : 1;
  __IO uint32_t TC12       : 1;
  __IO uint32_t TC13       : 1;
  __IO uint32_t TC14       : 1;
  __IO uint32_t TC15       : 1;
  __IO uint32_t BC0        : 1;
  __IO uint32_t BC1        : 1;
  __IO uint32_t BC2        : 1;
  __IO uint32_t BC3        : 1;
       uint32_t RESERVED1  : 3;
  __IO uint32_t IS0        : 1;
  __IO uint32_t IS1        : 1;
  __IO uint32_t IS2        : 1;
  __IO uint32_t IS3        : 1;
  __IO uint32_t IS4        : 1;
  __IO uint32_t IS5        : 1;
  __IO uint32_t ST         : 1;
  __IO uint32_t PB         : 1;
  __IO uint32_t EB         : 1;
} stc_dmac_dmaca7_field_t;

typedef struct stc_dmac_dmacb7_field
{
  __IO uint32_t EM         : 1;
       uint32_t RESERVED1  : 15;
  __IO uint32_t SS0        : 1;
  __IO uint32_t SS1        : 1;
  __IO uint32_t SS2        : 1;
  __IO uint32_t CI         : 1;
  __IO uint32_t EI         : 1;
  __IO uint32_t RD         : 1;
  __IO uint32_t RS         : 1;
  __IO uint32_t RC         : 1;
  __IO uint32_t FD         : 1;
  __IO uint32_t FS         : 1;
  __IO uint32_t TW0        : 1;
  __IO uint32_t TW1        : 1;
  __IO uint32_t MS0        : 1;
  __IO uint32_t MS1        : 1;
} stc_dmac_dmacb7_field_t;

/******************************************************************************
 * CAN_MODULE
 ******************************************************************************/
/* CAN_MODULE register bit fields */
typedef struct stc_can_ctrlr_field
{
  __IO uint16_t INIT       : 1;
  __IO uint16_t IE         : 1;
  __IO uint16_t SIE        : 1;
  __IO uint16_t EIE        : 1;
       uint16_t RESERVED1  : 1;
  __IO uint16_t DAR        : 1;
  __IO uint16_t CCE        : 1;
  __IO uint16_t TEST       : 1;
} stc_can_ctrlr_field_t;

typedef struct stc_can_statr_field
{
  __IO uint16_t LEC0       : 1;
  __IO uint16_t LEC1       : 1;
  __IO uint16_t LEC2       : 1;
  __IO uint16_t TXOK       : 1;
  __IO uint16_t RXOK       : 1;
  __IO uint16_t EPASS      : 1;
  __IO uint16_t EWARN      : 1;
  __IO uint16_t BOFF       : 1;
} stc_can_statr_field_t;

typedef struct stc_can_errcnt_field
{
  __IO uint16_t TEC0       : 1;
  __IO uint16_t TEC1       : 1;
  __IO uint16_t TEC2       : 1;
  __IO uint16_t TEC3       : 1;
  __IO uint16_t TEC4       : 1;
  __IO uint16_t TEC5       : 1;
  __IO uint16_t TEC6       : 1;
  __IO uint16_t TEC7       : 1;
  __IO uint16_t REC0       : 1;
  __IO uint16_t REC1       : 1;
  __IO uint16_t REC2       : 1;
  __IO uint16_t REC3       : 1;
  __IO uint16_t REC4       : 1;
  __IO uint16_t REC5       : 1;
  __IO uint16_t REC6       : 1;
  __IO uint16_t RP         : 1;
} stc_can_errcnt_field_t;

typedef struct stc_can_btr_field
{
  __IO uint16_t BRP0       : 1;
  __IO uint16_t BRP1       : 1;
  __IO uint16_t BRP2       : 1;
  __IO uint16_t BRP3       : 1;
  __IO uint16_t BRP4       : 1;
  __IO uint16_t BRP5       : 1;
  __IO uint16_t SJW0       : 1;
  __IO uint16_t SJW1       : 1;
  __IO uint16_t TSEG10     : 1;
  __IO uint16_t TSEG11     : 1;
  __IO uint16_t TSEG12     : 1;
  __IO uint16_t TSEG13     : 1;
  __IO uint16_t TSEG20     : 1;
  __IO uint16_t TSEG21     : 1;
  __IO uint16_t TSEG22     : 1;
} stc_can_btr_field_t;

typedef struct stc_can_intr_field
{
  __IO uint16_t INTID0     : 1;
  __IO uint16_t INTID1     : 1;
  __IO uint16_t INTID2     : 1;
  __IO uint16_t INTID3     : 1;
  __IO uint16_t INTID4     : 1;
  __IO uint16_t INTID5     : 1;
  __IO uint16_t INTID6     : 1;
  __IO uint16_t INTID7     : 1;
  __IO uint16_t INTID8     : 1;
  __IO uint16_t INTID9     : 1;
  __IO uint16_t INTID10    : 1;
  __IO uint16_t INTID11    : 1;
  __IO uint16_t INTID12    : 1;
  __IO uint16_t INTID13    : 1;
  __IO uint16_t INTID14    : 1;
  __IO uint16_t INTID15    : 1;
} stc_can_intr_field_t;

typedef struct stc_can_testr_field
{
       uint16_t RESERVED1  : 2;
  __IO uint16_t BASIC      : 1;
  __IO uint16_t SILENT     : 1;
  __IO uint16_t LBACK      : 1;
  __IO uint16_t TX0        : 1;
  __IO uint16_t TX1        : 1;
  __IO uint16_t RX         : 1;
} stc_can_testr_field_t;

typedef struct stc_can_brper_field
{
  __IO uint16_t BRPE0      : 1;
  __IO uint16_t BRPE1      : 1;
  __IO uint16_t BRPE2      : 1;
  __IO uint16_t BRPE3      : 1;
} stc_can_brper_field_t;

typedef struct stc_can_if1creq_field
{
       uint16_t RESERVED1  : 15;
  __IO uint16_t BUSY       : 1;
} stc_can_if1creq_field_t;

typedef struct stc_can_if1cmsk_field
{
  __IO uint16_t DATAB      : 1;
  __IO uint16_t DATAA      : 1;
  __IO uint16_t NEWDAT     : 1;
  __IO uint16_t CIP        : 1;
  __IO uint16_t CONTROL    : 1;
  __IO uint16_t ARB        : 1;
  __IO uint16_t MASK       : 1;
  __IO uint16_t WRRD       : 1;
} stc_can_if1cmsk_field_t;

typedef struct stc_can_if1msk_field
{
  __IO uint32_t MSK        : 29;
       uint32_t RESERVED1  : 1;
  __IO uint32_t MDIR       : 1;
  __IO uint32_t MXTD       : 1;
} stc_can_if1msk_field_t;

typedef struct stc_can_if1msk2_field
{
  __IO uint16_t MSK        : 13;
       uint16_t RESERVED1  : 1;
  __IO uint16_t MDIR       : 1;
  __IO uint16_t MXTD       : 1;
} stc_can_if1msk2_field_t;

typedef struct stc_can_if1arb_field
{
  __IO uint32_t ID         : 29;
  __IO uint32_t DIR        : 1;
  __IO uint32_t XTD        : 1;
  __IO uint32_t MSGVAL     : 1;
} stc_can_if1arb_field_t;

typedef struct stc_can_if1arb2_field
{
  __IO uint16_t ID         : 13;
  __IO uint16_t DIR        : 1;
  __IO uint16_t XTD        : 1;
  __IO uint16_t MSGVAL     : 1;
} stc_can_if1arb2_field_t;

typedef struct stc_can_if1mctr_field
{
  __IO uint16_t DLC0       : 1;
  __IO uint16_t DLC1       : 1;
  __IO uint16_t DLC2       : 1;
  __IO uint16_t DLC3       : 1;
       uint16_t RESERVED1  : 3;
  __IO uint16_t EOB        : 1;
  __IO uint16_t TXRQST     : 1;
  __IO uint16_t RMTEN      : 1;
  __IO uint16_t RXIE       : 1;
  __IO uint16_t TXIE       : 1;
  __IO uint16_t UMASK      : 1;
  __IO uint16_t INTPND     : 1;
  __IO uint16_t MSGLST     : 1;
  __IO uint16_t NEWDAT     : 1;
} stc_can_if1mctr_field_t;

typedef struct stc_can_if2creq_field
{
       uint16_t RESERVED1  : 15;
  __IO uint16_t BUSY       : 1;
} stc_can_if2creq_field_t;

typedef struct stc_can_if2cmsk_field
{
  __IO uint16_t DATAB      : 1;
  __IO uint16_t DATAA      : 1;
  __IO uint16_t NEWDAT     : 1;
  __IO uint16_t CIP        : 1;
  __IO uint16_t CONTROL    : 1;
  __IO uint16_t ARB        : 1;
  __IO uint16_t MASK       : 1;
  __IO uint16_t WRRD       : 1;
} stc_can_if2cmsk_field_t;

typedef struct stc_can_if2msk_field
{
  __IO uint32_t MSK        : 29;
       uint32_t RESERVED1  : 1;
  __IO uint32_t MDIR       : 1;
  __IO uint32_t MXTD       : 1;
} stc_can_if2msk_field_t;

typedef struct stc_can_if2msk2_field
{
  __IO uint16_t MSK        : 13;
       uint16_t RESERVED1  : 1;
  __IO uint16_t MDIR       : 1;
  __IO uint16_t MXTD       : 1;
} stc_can_if2msk2_field_t;

typedef struct stc_can_if2arb_field
{
  __IO uint32_t ID         : 29;
  __IO uint32_t DIR        : 1;
  __IO uint32_t XTD        : 1;
  __IO uint32_t MSGVAL     : 1;
} stc_can_if2arb_field_t;

typedef struct stc_can_if2arb2_field
{
  __IO uint16_t ID         : 13;
  __IO uint16_t DIR        : 1;
  __IO uint16_t XTD        : 1;
  __IO uint16_t MSGVAL     : 1;
} stc_can_if2arb2_field_t;

typedef struct stc_can_if2mctr_field
{
  __IO uint16_t DLC0       : 1;
  __IO uint16_t DLC1       : 1;
  __IO uint16_t DLC2       : 1;
  __IO uint16_t DLC3       : 1;
       uint16_t RESERVED1  : 3;
  __IO uint16_t EOB        : 1;
  __IO uint16_t TXRQST     : 1;
  __IO uint16_t RMTEN      : 1;
  __IO uint16_t RXIE       : 1;
  __IO uint16_t TXIE       : 1;
  __IO uint16_t UMASK      : 1;
  __IO uint16_t INTPND     : 1;
  __IO uint16_t MSGLST     : 1;
  __IO uint16_t NEWDAT     : 1;
} stc_can_if2mctr_field_t;

typedef struct stc_can_treqr_field
{
  __IO uint32_t TXRQST1    : 1;
  __IO uint32_t TXRQST2    : 1;
  __IO uint32_t TXRQST3    : 1;
  __IO uint32_t TXRQST4    : 1;
  __IO uint32_t TXRQST5    : 1;
  __IO uint32_t TXRQST6    : 1;
  __IO uint32_t TXRQST7    : 1;
  __IO uint32_t TXRQST8    : 1;
  __IO uint32_t TXRQST9    : 1;
  __IO uint32_t TXRQST10   : 1;
  __IO uint32_t TXRQST11   : 1;
  __IO uint32_t TXRQST12   : 1;
  __IO uint32_t TXRQST13   : 1;
  __IO uint32_t TXRQST14   : 1;
  __IO uint32_t TXRQST15   : 1;
  __IO uint32_t TXRQST16   : 1;
  __IO uint32_t TXRQST17   : 1;
  __IO uint32_t TXRQST18   : 1;
  __IO uint32_t TXRQST19   : 1;
  __IO uint32_t TXRQST20   : 1;
  __IO uint32_t TXRQST21   : 1;
  __IO uint32_t TXRQST22   : 1;
  __IO uint32_t TXRQST23   : 1;
  __IO uint32_t TXRQST24   : 1;
  __IO uint32_t TXRQST25   : 1;
  __IO uint32_t TXRQST26   : 1;
  __IO uint32_t TXRQST27   : 1;
  __IO uint32_t TXRQST28   : 1;
  __IO uint32_t TXRQST29   : 1;
  __IO uint32_t TXRQST30   : 1;
  __IO uint32_t TXRQST31   : 1;
  __IO uint32_t TXRQST32   : 1;
} stc_can_treqr_field_t;

typedef struct stc_can_treqr1_field
{
  __IO uint16_t TXRQST1    : 1;
  __IO uint16_t TXRQST2    : 1;
  __IO uint16_t TXRQST3    : 1;
  __IO uint16_t TXRQST4    : 1;
  __IO uint16_t TXRQST5    : 1;
  __IO uint16_t TXRQST6    : 1;
  __IO uint16_t TXRQST7    : 1;
  __IO uint16_t TXRQST8    : 1;
  __IO uint16_t TXRQST9    : 1;
  __IO uint16_t TXRQST10   : 1;
  __IO uint16_t TXRQST11   : 1;
  __IO uint16_t TXRQST12   : 1;
  __IO uint16_t TXRQST13   : 1;
  __IO uint16_t TXRQST14   : 1;
  __IO uint16_t TXRQST15   : 1;
  __IO uint16_t TXRQST16   : 1;
} stc_can_treqr1_field_t;

typedef struct stc_can_treqr2_field
{
  __IO uint16_t TXRQST17   : 1;
  __IO uint16_t TXRQST18   : 1;
  __IO uint16_t TXRQST19   : 1;
  __IO uint16_t TXRQST20   : 1;
  __IO uint16_t TXRQST21   : 1;
  __IO uint16_t TXRQST22   : 1;
  __IO uint16_t TXRQST23   : 1;
  __IO uint16_t TXRQST24   : 1;
  __IO uint16_t TXRQST25   : 1;
  __IO uint16_t TXRQST26   : 1;
  __IO uint16_t TXRQST27   : 1;
  __IO uint16_t TXRQST28   : 1;
  __IO uint16_t TXRQST29   : 1;
  __IO uint16_t TXRQST30   : 1;
  __IO uint16_t TXRQST31   : 1;
  __IO uint16_t TXRQST32   : 1;
} stc_can_treqr2_field_t;

typedef struct stc_can_newdt_field
{
  __IO uint32_t NEWDAT1    : 1;
  __IO uint32_t NEWDAT2    : 1;
  __IO uint32_t NEWDAT3    : 1;
  __IO uint32_t NEWDAT4    : 1;
  __IO uint32_t NEWDAT5    : 1;
  __IO uint32_t NEWDAT6    : 1;
  __IO uint32_t NEWDAT7    : 1;
  __IO uint32_t NEWDAT8    : 1;
  __IO uint32_t NEWDAT9    : 1;
  __IO uint32_t NEWDAT10   : 1;
  __IO uint32_t NEWDAT11   : 1;
  __IO uint32_t NEWDAT12   : 1;
  __IO uint32_t NEWDAT13   : 1;
  __IO uint32_t NEWDAT14   : 1;
  __IO uint32_t NEWDAT15   : 1;
  __IO uint32_t NEWDAT16   : 1;
  __IO uint32_t NEWDAT17   : 1;
  __IO uint32_t NEWDAT18   : 1;
  __IO uint32_t NEWDAT19   : 1;
  __IO uint32_t NEWDAT20   : 1;
  __IO uint32_t NEWDAT21   : 1;
  __IO uint32_t NEWDAT22   : 1;
  __IO uint32_t NEWDAT23   : 1;
  __IO uint32_t NEWDAT24   : 1;
  __IO uint32_t NEWDAT25   : 1;
  __IO uint32_t NEWDAT26   : 1;
  __IO uint32_t NEWDAT27   : 1;
  __IO uint32_t NEWDAT28   : 1;
  __IO uint32_t NEWDAT29   : 1;
  __IO uint32_t NEWDAT30   : 1;
  __IO uint32_t NEWDAT31   : 1;
  __IO uint32_t NEWDAT32   : 1;
} stc_can_newdt_field_t;

typedef struct stc_can_newdt1_field
{
  __IO uint16_t NEWDAT1    : 1;
  __IO uint16_t NEWDAT2    : 1;
  __IO uint16_t NEWDAT3    : 1;
  __IO uint16_t NEWDAT4    : 1;
  __IO uint16_t NEWDAT5    : 1;
  __IO uint16_t NEWDAT6    : 1;
  __IO uint16_t NEWDAT7    : 1;
  __IO uint16_t NEWDAT8    : 1;
  __IO uint16_t NEWDAT9    : 1;
  __IO uint16_t NEWDAT10   : 1;
  __IO uint16_t NEWDAT11   : 1;
  __IO uint16_t NEWDAT12   : 1;
  __IO uint16_t NEWDAT13   : 1;
  __IO uint16_t NEWDAT14   : 1;
  __IO uint16_t NEWDAT15   : 1;
  __IO uint16_t NEWDAT16   : 1;
} stc_can_newdt1_field_t;

typedef struct stc_can_intpnd_field
{
  __IO uint32_t INTPND1    : 1;
  __IO uint32_t INTPND2    : 1;
  __IO uint32_t INTPND3    : 1;
  __IO uint32_t INTPND4    : 1;
  __IO uint32_t INTPND5    : 1;
  __IO uint32_t INTPND6    : 1;
  __IO uint32_t INTPND7    : 1;
  __IO uint32_t INTPND8    : 1;
  __IO uint32_t INTPND9    : 1;
  __IO uint32_t INTPND10   : 1;
  __IO uint32_t INTPND11   : 1;
  __IO uint32_t INTPND12   : 1;
  __IO uint32_t INTPND13   : 1;
  __IO uint32_t INTPND14   : 1;
  __IO uint32_t INTPND15   : 1;
  __IO uint32_t INTPND16   : 1;
  __IO uint32_t INTPND17   : 1;
  __IO uint32_t INTPND18   : 1;
  __IO uint32_t INTPND19   : 1;
  __IO uint32_t INTPND20   : 1;
  __IO uint32_t INTPND21   : 1;
  __IO uint32_t INTPND22   : 1;
  __IO uint32_t INTPND23   : 1;
  __IO uint32_t INTPND24   : 1;
  __IO uint32_t INTPND25   : 1;
  __IO uint32_t INTPND26   : 1;
  __IO uint32_t INTPND27   : 1;
  __IO uint32_t INTPND28   : 1;
  __IO uint32_t INTPND29   : 1;
  __IO uint32_t INTPND30   : 1;
  __IO uint32_t INTPND31   : 1;
  __IO uint32_t INTPND32   : 1;
} stc_can_intpnd_field_t;

typedef struct stc_can_intpnd1_field
{
  __IO uint16_t INTPND1    : 1;
  __IO uint16_t INTPND2    : 1;
  __IO uint16_t INTPND3    : 1;
  __IO uint16_t INTPND4    : 1;
  __IO uint16_t INTPND5    : 1;
  __IO uint16_t INTPND6    : 1;
  __IO uint16_t INTPND7    : 1;
  __IO uint16_t INTPND8    : 1;
  __IO uint16_t INTPND9    : 1;
  __IO uint16_t INTPND10   : 1;
  __IO uint16_t INTPND11   : 1;
  __IO uint16_t INTPND12   : 1;
  __IO uint16_t INTPND13   : 1;
  __IO uint16_t INTPND14   : 1;
  __IO uint16_t INTPND15   : 1;
  __IO uint16_t INTPND16   : 1;
} stc_can_intpnd1_field_t;

typedef struct stc_can_intpnd2_field
{
  __IO uint16_t INTPND17   : 1;
  __IO uint16_t INTPND18   : 1;
  __IO uint16_t INTPND19   : 1;
  __IO uint16_t INTPND20   : 1;
  __IO uint16_t INTPND21   : 1;
  __IO uint16_t INTPND22   : 1;
  __IO uint16_t INTPND23   : 1;
  __IO uint16_t INTPND24   : 1;
  __IO uint16_t INTPND25   : 1;
  __IO uint16_t INTPND26   : 1;
  __IO uint16_t INTPND27   : 1;
  __IO uint16_t INTPND28   : 1;
  __IO uint16_t INTPND29   : 1;
  __IO uint16_t INTPND30   : 1;
  __IO uint16_t INTPND31   : 1;
  __IO uint16_t INTPND32   : 1;
} stc_can_intpnd2_field_t;

typedef struct stc_can_msgval_field
{
  __IO uint32_t MSGVAL1    : 1;
  __IO uint32_t MSGVAL2    : 1;
  __IO uint32_t MSGVAL3    : 1;
  __IO uint32_t MSGVAL4    : 1;
  __IO uint32_t MSGVAL5    : 1;
  __IO uint32_t MSGVAL6    : 1;
  __IO uint32_t MSGVAL7    : 1;
  __IO uint32_t MSGVAL8    : 1;
  __IO uint32_t MSGVAL9    : 1;
  __IO uint32_t MSGVAL10   : 1;
  __IO uint32_t MSGVAL11   : 1;
  __IO uint32_t MSGVAL12   : 1;
  __IO uint32_t MSGVAL13   : 1;
  __IO uint32_t MSGVAL14   : 1;
  __IO uint32_t MSGVAL15   : 1;
  __IO uint32_t MSGVAL16   : 1;
  __IO uint32_t MSGVAL17   : 1;
  __IO uint32_t MSGVAL18   : 1;
  __IO uint32_t MSGVAL19   : 1;
  __IO uint32_t MSGVAL20   : 1;
  __IO uint32_t MSGVAL21   : 1;
  __IO uint32_t MSGVAL22   : 1;
  __IO uint32_t MSGVAL23   : 1;
  __IO uint32_t MSGVAL24   : 1;
  __IO uint32_t MSGVAL25   : 1;
  __IO uint32_t MSGVAL26   : 1;
  __IO uint32_t MSGVAL27   : 1;
  __IO uint32_t MSGVAL28   : 1;
  __IO uint32_t MSGVAL29   : 1;
  __IO uint32_t MSGVAL30   : 1;
  __IO uint32_t MSGVAL31   : 1;
  __IO uint32_t MSGVAL32   : 1;
} stc_can_msgval_field_t;

typedef struct stc_can_msgval1_field
{
  __IO uint16_t MSGVAL1    : 1;
  __IO uint16_t MSGVAL2    : 1;
  __IO uint16_t MSGVAL3    : 1;
  __IO uint16_t MSGVAL4    : 1;
  __IO uint16_t MSGVAL5    : 1;
  __IO uint16_t MSGVAL6    : 1;
  __IO uint16_t MSGVAL7    : 1;
  __IO uint16_t MSGVAL8    : 1;
  __IO uint16_t MSGVAL9    : 1;
  __IO uint16_t MSGVAL10   : 1;
  __IO uint16_t MSGVAL11   : 1;
  __IO uint16_t MSGVAL12   : 1;
  __IO uint16_t MSGVAL13   : 1;
  __IO uint16_t MSGVAL14   : 1;
  __IO uint16_t MSGVAL15   : 1;
  __IO uint16_t MSGVAL16   : 1;
} stc_can_msgval1_field_t;

typedef struct stc_can_msgval2_field
{
  __IO uint16_t MSGVAL17   : 1;
  __IO uint16_t MSGVAL18   : 1;
  __IO uint16_t MSGVAL19   : 1;
  __IO uint16_t MSGVAL20   : 1;
  __IO uint16_t MSGVAL21   : 1;
  __IO uint16_t MSGVAL22   : 1;
  __IO uint16_t MSGVAL23   : 1;
  __IO uint16_t MSGVAL24   : 1;
  __IO uint16_t MSGVAL25   : 1;
  __IO uint16_t MSGVAL26   : 1;
  __IO uint16_t MSGVAL27   : 1;
  __IO uint16_t MSGVAL28   : 1;
  __IO uint16_t MSGVAL29   : 1;
  __IO uint16_t MSGVAL30   : 1;
  __IO uint16_t MSGVAL31   : 1;
  __IO uint16_t MSGVAL32   : 1;
} stc_can_msgval2_field_t;

/******************************************************************************
 * Peripheral register structures
 ******************************************************************************/

/******************************************************************************
 * Flash_IF_MODULE
 ******************************************************************************/
/* Flash interface registers */
typedef struct
{
        uint8_t RESERVED0[4];
  union {
    __IO uint32_t FRWTR;
    stc_flash_if_frwtr_field_t FRWTR_f;
  };
  union {
    __IO uint32_t FSTR;
    stc_flash_if_fstr_field_t FSTR_f;
  };
        uint8_t RESERVED1[20];
  union {
    __IO uint32_t FICR;
    stc_flash_if_ficr_field_t FICR_f;
  };
  union {
    __IO uint32_t FISR;
    stc_flash_if_fisr_field_t FISR_f;
  };
  union {
    __IO uint32_t FICLR;
    stc_flash_if_ficlr_field_t FICLR_f;
  };
        uint8_t RESERVED2[212];
  union {
    __IO uint32_t CRTRMM;
    stc_flash_if_crtrmm_field_t CRTRMM_f;
  };
}FM3_FLASH_IF_TypeDef;

/******************************************************************************
 * UNIQUE_ID_MODULE
 ******************************************************************************/
/* Unique ID registers */
typedef struct
{
  union {
    __IO uint32_t UIDR0;
    stc_unique_id_uidr0_field_t UIDR0_f;
  };
  union {
    __IO uint32_t UIDR1;
    stc_unique_id_uidr1_field_t UIDR1_f;
  };
}FM3_UNIQUE_ID_TypeDef;

/******************************************************************************
 * Clock_Reset_MODULE
 ******************************************************************************/
/* Clock and reset registers */
typedef struct
{
  union {
    __IO  uint8_t SCM_CTL;
    stc_crg_scm_ctl_field_t SCM_CTL_f;
  };
        uint8_t RESERVED0[3];
  union {
    __IO  uint8_t SCM_STR;
    stc_crg_scm_str_field_t SCM_STR_f;
  };
        uint8_t RESERVED1[3];
  __IO uint32_t STB_CTL;
  union {
    __IO uint16_t RST_STR;
    stc_crg_rst_str_field_t RST_STR_f;
  };
        uint8_t RESERVED2[2];
  union {
    __IO  uint8_t BSC_PSR;
    stc_crg_bsc_psr_field_t BSC_PSR_f;
  };
        uint8_t RESERVED3[3];
  union {
    __IO  uint8_t APBC0_PSR;
    stc_crg_apbc0_psr_field_t APBC0_PSR_f;
  };
        uint8_t RESERVED4[3];
  union {
    __IO  uint8_t APBC1_PSR;
    stc_crg_apbc1_psr_field_t APBC1_PSR_f;
  };
        uint8_t RESERVED5[3];
  union {
    __IO  uint8_t APBC2_PSR;
    stc_crg_apbc2_psr_field_t APBC2_PSR_f;
  };
        uint8_t RESERVED6[3];
  union {
    __IO  uint8_t SWC_PSR;
    stc_crg_swc_psr_field_t SWC_PSR_f;
  };
        uint8_t RESERVED7[7];
  union {
    __IO  uint8_t TTC_PSR;
    stc_crg_ttc_psr_field_t TTC_PSR_f;
  };
        uint8_t RESERVED8[7];
  union {
    __IO  uint8_t CSW_TMR;
    stc_crg_csw_tmr_field_t CSW_TMR_f;
  };
        uint8_t RESERVED9[3];
  union {
    __IO  uint8_t PSW_TMR;
    stc_crg_psw_tmr_field_t PSW_TMR_f;
  };
        uint8_t RESERVED10[3];
  union {
    __IO  uint8_t PLL_CTL1;
    stc_crg_pll_ctl1_field_t PLL_CTL1_f;
  };
        uint8_t RESERVED11[3];
  union {
    __IO  uint8_t PLL_CTL2;
    stc_crg_pll_ctl2_field_t PLL_CTL2_f;
  };
        uint8_t RESERVED12[3];
  union {
    __IO uint16_t CSV_CTL;
    stc_crg_csv_ctl_field_t CSV_CTL_f;
  };
        uint8_t RESERVED13[2];
  union {
    __IO  uint8_t CSV_STR;
    stc_crg_csv_str_field_t CSV_STR_f;
  };
        uint8_t RESERVED14[3];
  __IO uint16_t FCSWH_CTL;
        uint8_t RESERVED15[2];
  __IO uint16_t FCSWL_CTL;
        uint8_t RESERVED16[2];
  __IO uint16_t FCSWD_CTL;
        uint8_t RESERVED17[2];
  union {
    __IO  uint8_t DBWDT_CTL;
    stc_crg_dbwdt_ctl_field_t DBWDT_CTL_f;
  };
        uint8_t RESERVED18[11];
  union {
    __IO  uint8_t INT_ENR;
    stc_crg_int_enr_field_t INT_ENR_f;
  };
        uint8_t RESERVED19[3];
  union {
    __IO  uint8_t INT_STR;
    stc_crg_int_str_field_t INT_STR_f;
  };
        uint8_t RESERVED20[3];
  union {
    __IO  uint8_t INT_CLR;
    stc_crg_int_clr_field_t INT_CLR_f;
  };
}FM3_CRG_TypeDef;

/******************************************************************************
 * HWWDT_MODULE
 ******************************************************************************/
/* Hardware watchdog registers */
typedef struct
{
  __IO uint32_t WDG_LDR;
  __IO uint32_t WDG_VLR;
  union {
    __IO  uint8_t WDG_CTL;
    stc_hwwdt_wdg_ctl_field_t WDG_CTL_f;
  };
        uint8_t RESERVED0[3];
  __IO  uint8_t WDG_ICL;
        uint8_t RESERVED1[3];
  union {
    __IO  uint8_t WDG_RIS;
    stc_hwwdt_wdg_ris_field_t WDG_RIS_f;
  };
        uint8_t RESERVED2[3055];
  __IO uint32_t WDG_LCK;
}FM3_HWWDT_TypeDef;

/******************************************************************************
 * SWWDT_MODULE
 ******************************************************************************/
/* Software watchdog registers */
typedef struct
{
  __IO uint32_t WDOGLOAD;
  __IO uint32_t WDOGVALUE;
  union {
    __IO  uint8_t WDOGCONTROL;
    stc_swwdt_wdogcontrol_field_t WDOGCONTROL_f;
  };
        uint8_t RESERVED0[3];
  __IO uint32_t WDOGINTCLR;
  union {
    __IO  uint8_t WDOGRIS;
    stc_swwdt_wdogris_field_t WDOGRIS_f;
  };
        uint8_t RESERVED1[3055];
  __IO uint32_t WDOGLOCK;
}FM3_SWWDT_TypeDef;

/******************************************************************************
 * DTIM_MODULE
 ******************************************************************************/
/* Dual timer 1/2 registers */
typedef struct
{
  __IO uint32_t TIMER1LOAD;
  __IO uint32_t TIMER1VALUE;
  union {
    __IO uint32_t TIMER1CONTROL;
    stc_dtim_timer1control_field_t TIMER1CONTROL_f;
  };
  __IO uint32_t TIMER1INTCLR;
  union {
    __IO uint32_t TIMER1RIS;
    stc_dtim_timer1ris_field_t TIMER1RIS_f;
  };
  union {
    __IO uint32_t TIMER1MIS;
    stc_dtim_timer1mis_field_t TIMER1MIS_f;
  };
  __IO uint32_t TIMER1BGLOAD;
        uint8_t RESERVED0[4];
  __IO uint32_t TIMER2LOAD;
  __IO uint32_t TIMER2VALUE;
  union {
    __IO uint32_t TIMER2CONTROL;
    stc_dtim_timer2control_field_t TIMER2CONTROL_f;
  };
  __IO uint32_t TIMER2INTCLR;
  union {
    __IO uint32_t TIMER2RIS;
    stc_dtim_timer2ris_field_t TIMER2RIS_f;
  };
  union {
    __IO uint32_t TIMER2MIS;
    stc_dtim_timer2mis_field_t TIMER2MIS_f;
  };
  __IO uint32_t TIMER2BGLOAD;
}FM3_DTIM_TypeDef;

/******************************************************************************
 * MFT_FRT_MODULE
 ******************************************************************************/
/* Multifunction Timer unit 0 Free Running Timer registers */
typedef struct
{
        uint8_t RESERVED0[40];
  __IO uint16_t TCCP0;
        uint8_t RESERVED1[2];
  __IO uint16_t TCDT0;
        uint8_t RESERVED2[2];
  union {
    __IO uint16_t TCSA0;
    stc_mft_frt_tcsa0_field_t TCSA0_f;
  };
        uint8_t RESERVED3[2];
  union {
    __IO uint16_t TCSB0;
    stc_mft_frt_tcsb0_field_t TCSB0_f;
  };
        uint8_t RESERVED4[2];
  __IO uint16_t TCCP1;
        uint8_t RESERVED5[2];
  __IO uint16_t TCDT1;
        uint8_t RESERVED6[2];
  union {
    __IO uint16_t TCSA1;
    stc_mft_frt_tcsa1_field_t TCSA1_f;
  };
        uint8_t RESERVED7[2];
  union {
    __IO uint16_t TCSB1;
    stc_mft_frt_tcsb1_field_t TCSB1_f;
  };
        uint8_t RESERVED8[2];
  __IO uint16_t TCCP2;
        uint8_t RESERVED9[2];
  __IO uint16_t TCDT2;
        uint8_t RESERVED10[2];
  union {
    __IO uint16_t TCSA2;
    stc_mft_frt_tcsa2_field_t TCSA2_f;
  };
        uint8_t RESERVED11[2];
  union {
    __IO uint16_t TCSB2;
    stc_mft_frt_tcsb2_field_t TCSB2_f;
  };
}FM3_MFT_FRT_TypeDef;

/******************************************************************************
 * MFT_OCU_MODULE
 ******************************************************************************/
/* Multifunction Timer unit 0 Output Compare Unit registers */
typedef struct
{
  __IO uint16_t OCCP0;
        uint8_t RESERVED0[2];
  __IO uint16_t OCCP1;
        uint8_t RESERVED1[2];
  __IO uint16_t OCCP2;
        uint8_t RESERVED2[2];
  __IO uint16_t OCCP3;
        uint8_t RESERVED3[2];
  __IO uint16_t OCCP4;
        uint8_t RESERVED4[2];
  __IO uint16_t OCCP5;
        uint8_t RESERVED5[2];
  union {
    __IO  uint8_t OCSA10;
    stc_mft_ocu_ocsa10_field_t OCSA10_f;
  };
  union {
    __IO  uint8_t OCSB10;
    stc_mft_ocu_ocsb10_field_t OCSB10_f;
  };
        uint8_t RESERVED6[2];
  union {
    __IO  uint8_t OCSA32;
    stc_mft_ocu_ocsa32_field_t OCSA32_f;
  };
  union {
    __IO  uint8_t OCSB32;
    stc_mft_ocu_ocsb32_field_t OCSB32_f;
  };
        uint8_t RESERVED7[2];
  union {
    __IO  uint8_t OCSA54;
    stc_mft_ocu_ocsa54_field_t OCSA54_f;
  };
  union {
    __IO  uint8_t OCSB54;
    stc_mft_ocu_ocsb54_field_t OCSB54_f;
  };
        uint8_t RESERVED8[3];
  union {
    __IO  uint8_t OCSC;
    stc_mft_ocu_ocsc_field_t OCSC_f;
  };
        uint8_t RESERVED9[50];
  union {
    __IO  uint8_t OCFS10;
    stc_mft_ocu_ocfs10_field_t OCFS10_f;
  };
  union {
    __IO  uint8_t OCFS32;
    stc_mft_ocu_ocfs32_field_t OCFS32_f;
  };
        uint8_t RESERVED10[2];
  union {
    __IO  uint8_t OCFS54;
    stc_mft_ocu_ocfs54_field_t OCFS54_f;
  };
}FM3_MFT_OCU_TypeDef;

/******************************************************************************
 * MFT_WFG_MODULE
 ******************************************************************************/
/* Multifunction Timer unit 0 Waveform Generator and Noise Canceler registers */
typedef struct
{
        uint8_t RESERVED0[128];
  __IO uint16_t WFTM10;
        uint8_t RESERVED1[2];
  __IO uint16_t WFTM32;
        uint8_t RESERVED2[2];
  __IO uint16_t WFTM54;
        uint8_t RESERVED3[2];
  union {
    __IO uint16_t WFSA10;
    stc_mft_wfg_wfsa10_field_t WFSA10_f;
  };
        uint8_t RESERVED4[2];
  union {
    __IO uint16_t WFSA32;
    stc_mft_wfg_wfsa32_field_t WFSA32_f;
  };
        uint8_t RESERVED5[2];
  union {
    __IO uint16_t WFSA54;
    stc_mft_wfg_wfsa54_field_t WFSA54_f;
  };
        uint8_t RESERVED6[2];
  union {
    __IO uint16_t WFIR;
    stc_mft_wfg_wfir_field_t WFIR_f;
  };
        uint8_t RESERVED7[2];
  union {
    __IO uint16_t NZCL;
    stc_mft_wfg_nzcl_field_t NZCL_f;
  };
}FM3_MFT_WFG_TypeDef;

/******************************************************************************
 * MFT_ICU_MODULE
 ******************************************************************************/
/* Multifunction Timer unit 0 Input Capture Unit registers */
typedef struct
{
        uint8_t RESERVED0[96];
  union {
    __IO  uint8_t ICFS10;
    stc_mft_icu_icfs10_field_t ICFS10_f;
  };
  union {
    __IO  uint8_t ICFS32;
    stc_mft_icu_icfs32_field_t ICFS32_f;
  };
        uint8_t RESERVED1[6];
  __IO uint16_t ICCP0;
        uint8_t RESERVED2[2];
  __IO uint16_t ICCP1;
        uint8_t RESERVED3[2];
  __IO uint16_t ICCP2;
        uint8_t RESERVED4[2];
  __IO uint16_t ICCP3;
        uint8_t RESERVED5[2];
  union {
    __IO  uint8_t ICSA10;
    stc_mft_icu_icsa10_field_t ICSA10_f;
  };
  union {
    __IO  uint8_t ICSB10;
    stc_mft_icu_icsb10_field_t ICSB10_f;
  };
        uint8_t RESERVED6[2];
  union {
    __IO  uint8_t ICSA32;
    stc_mft_icu_icsa32_field_t ICSA32_f;
  };
  union {
    __IO  uint8_t ICSB32;
    stc_mft_icu_icsb32_field_t ICSB32_f;
  };
}FM3_MFT_ICU_TypeDef;

/******************************************************************************
 * MFT_ADCMP_MODULE
 ******************************************************************************/
/* Multifunction Timer unit 0 ADC Start Compare Unit registers */
typedef struct
{
        uint8_t RESERVED0[160];
  __IO uint16_t ACCP0;
        uint8_t RESERVED1[2];
  __IO uint16_t ACCPDN0;
        uint8_t RESERVED2[2];
  __IO uint16_t ACCP1;
        uint8_t RESERVED3[2];
  __IO uint16_t ACCPDN1;
        uint8_t RESERVED4[2];
  __IO uint16_t ACCP2;
        uint8_t RESERVED5[2];
  __IO uint16_t ACCPDN2;
        uint8_t RESERVED6[2];
  union {
    __IO  uint8_t ACSB;
    stc_mft_adcmp_acsb_field_t ACSB_f;
  };
        uint8_t RESERVED7[3];
  union {
    __IO uint16_t ACSA;
    stc_mft_adcmp_acsa_field_t ACSA_f;
  };
        uint8_t RESERVED8[2];
  union {
    __IO uint16_t ATSA;
    stc_mft_adcmp_atsa_field_t ATSA_f;
  };
}FM3_MFT_ADCMP_TypeDef;

/******************************************************************************
 * MFT_PPG_MODULE
 ******************************************************************************/
/* Multifunction Timer PPG registers */
typedef struct
{
        uint8_t RESERVED50[1];
  union {
    __IO  uint8_t TTCR0;
    stc_mft_ppg_ttcr0_field_t TTCR0_f;
  };
       uint8_t RESERVED0[7];
  __IO  uint8_t COMP0;
       uint8_t RESERVED1[2];
  __IO  uint8_t COMP2;
       uint8_t RESERVED2[4];
  __IO  uint8_t COMP4;
       uint8_t RESERVED3[2];
  __IO  uint8_t COMP6;
       uint8_t RESERVED4[235];
  union {
    __IO uint16_t TRG;
    stc_mft_ppg_trg_field_t TRG_f;
  };
       uint8_t RESERVED5[2];
  union {
    __IO uint16_t REVC;
    stc_mft_ppg_revc_field_t REVC_f;
  };
       uint8_t RESERVED6[250];
  union {
    __IO  uint8_t PPGC1;
    stc_mft_ppg_ppgc1_field_t PPGC1_f;
  };
  union {
    __IO  uint8_t PPGC0;
    stc_mft_ppg_ppgc0_field_t PPGC0_f;
  };
       uint8_t RESERVED8[2];
  union {
    __IO  uint8_t PPGC3;
    stc_mft_ppg_ppgc3_field_t PPGC3_f;
  };
  union {
    __IO  uint8_t PPGC2;
    stc_mft_ppg_ppgc2_field_t PPGC2_f;
  };
       uint8_t RESERVED10[2];
  union {
    __IO uint16_t PRL0;
    struct {
      __IO  uint8_t PRLL0;
      __IO  uint8_t PRLH0;
    };
  };
        uint8_t RESERVED12[2];
  union {
    __IO uint16_t PRL1;
    struct {
      __IO  uint8_t PRLL1;
      __IO  uint8_t PRLH1;
    };
  };
        uint8_t RESERVED13[2];
  union {
    __IO uint16_t PRL2;
    struct {
      __IO  uint8_t PRLL2;
      __IO  uint8_t PRLH2;
    };
  };
        uint8_t RESERVED14[2];
  union {
    __IO uint16_t PRL3;
    struct {
      __IO  uint8_t PRLL3;
      __IO  uint8_t PRLH3;
    };
  };
       uint8_t RESERVED18[2];
  union {
    __IO  uint8_t GATEC0;
    stc_mft_ppg_gatec0_field_t GATEC0_f;
  };
       uint8_t RESERVED19[39];
  union {
    __IO  uint8_t PPGC5;
    stc_mft_ppg_ppgc5_field_t PPGC5_f;
  };
  union {
    __IO  uint8_t PPGC4;
    stc_mft_ppg_ppgc4_field_t PPGC4_f;
  };
       uint8_t RESERVED21[2];
  union {
    __IO  uint8_t PPGC7;
    stc_mft_ppg_ppgc7_field_t PPGC7_f;
  };
  union {
    __IO  uint8_t PPGC6;
    stc_mft_ppg_ppgc6_field_t PPGC6_f;
  };
       uint8_t RESERVED23[2];
  union {
    __IO uint16_t PRL4;
    struct {
      __IO  uint8_t PRLL4;
      __IO  uint8_t PRLH4;
    };
  };
        uint8_t RESERVED29[2];
  union {
    __IO uint16_t PRL5;
    struct {
      __IO  uint8_t PRLL5;
      __IO  uint8_t PRLH5;
    };
  };
        uint8_t RESERVED30[2];
  union {
    __IO uint16_t PRL6;
    struct {
      __IO  uint8_t PRLL6;
      __IO  uint8_t PRLH6;
    };
  };
        uint8_t RESERVED31[2];
  union {
    __IO uint16_t PRL7;
    struct {
      __IO  uint8_t PRLL7;
      __IO  uint8_t PRLH7;
    };
  };
        uint8_t RESERVED32[2];
  union {
    __IO  uint8_t GATEC4;
    stc_mft_ppg_gatec4_field_t GATEC4_f;
  };
        uint8_t RESERVED33[295];
  union {
    __IO  uint8_t IGBTC;
    stc_mft_ppg_igbtc_field_t IGBTC_f;
  };
}FM3_MFT_PPG_TypeDef;

/******************************************************************************
 * BT_PPG_MODULE
 ******************************************************************************/
/* Base Timer 0 PPG registers */
typedef struct
{
  __IO uint16_t PRLL;
        uint8_t RESERVED0[2];
  __IO uint16_t PRLH;
        uint8_t RESERVED1[2];
  __IO uint16_t TMR;
        uint8_t RESERVED2[2];
  union {
    __IO uint16_t TMCR;
    stc_bt_ppg_tmcr_field_t TMCR_f;
  };
        uint8_t RESERVED3[2];
  union {
    __IO  uint8_t STC;
    stc_bt_ppg_stc_field_t STC_f;
  };
  union {
    __IO  uint8_t TMCR2;
    stc_bt_ppg_tmcr2_field_t TMCR2_f;
  };
}FM3_BT_PPG_TypeDef;

/******************************************************************************
 * BT_PWM_MODULE
 ******************************************************************************/
/* Base Timer 0 PWM registers */
typedef struct
{
  __IO uint16_t PCSR;
        uint8_t RESERVED0[2];
  __IO uint16_t PDUT;
        uint8_t RESERVED1[2];
  __IO uint16_t TMR;
        uint8_t RESERVED2[2];
  union {
    __IO uint16_t TMCR;
    stc_bt_pwm_tmcr_field_t TMCR_f;
  };
        uint8_t RESERVED3[2];
  union {
    __IO  uint8_t STC;
    stc_bt_pwm_stc_field_t STC_f;
  };
  union {
    __IO  uint8_t TMCR2;
    stc_bt_pwm_tmcr2_field_t TMCR2_f;
  };
}FM3_BT_PWM_TypeDef;

/******************************************************************************
 * BT_RT_MODULE
 ******************************************************************************/
/* Base Timer 0 RT registers */
typedef struct
{
  __IO uint16_t PCSR;
        uint8_t RESERVED0[6];
  __IO uint16_t TMR;
        uint8_t RESERVED1[2];
  union {
    __IO uint16_t TMCR;
    stc_bt_rt_tmcr_field_t TMCR_f;
  };
        uint8_t RESERVED2[2];
  union {
    __IO  uint8_t STC;
    stc_bt_rt_stc_field_t STC_f;
  };
  union {
    __IO  uint8_t TMCR2;
    stc_bt_rt_tmcr2_field_t TMCR2_f;
  };
}FM3_BT_RT_TypeDef;

/******************************************************************************
 * BT_PWC_MODULE
 ******************************************************************************/
/* Base Timer 0 PWC registers */
typedef struct
{
        uint8_t RESERVED0[4];
  __IO uint16_t DTBF;
        uint8_t RESERVED1[6];
  union {
    __IO uint16_t TMCR;
    stc_bt_pwc_tmcr_field_t TMCR_f;
  };
        uint8_t RESERVED2[2];
  union {
    __IO  uint8_t STC;
    stc_bt_pwc_stc_field_t STC_f;
  };
  union {
    __IO  uint8_t TMCR2;
    stc_bt_pwc_tmcr2_field_t TMCR2_f;
  };
}FM3_BT_PWC_TypeDef;

/******************************************************************************
 * BTIOSEL03_MODULE
 ******************************************************************************/
/* Base Timer I/O selector channel 0 - channel 3 registers */
typedef struct
{
        uint8_t RESERVED0;
  union {
    __IO  uint8_t BTSEL0123;
    stc_btiosel03_btsel0123_field_t BTSEL0123_f;
  };
}FM3_BTIOSEL03_TypeDef;

/******************************************************************************
 * BTIOSEL47_MODULE
 ******************************************************************************/
/* Base Timer I/O selector channel 4 - channel 7 registers */
typedef struct
{
        uint8_t RESERVED0;
  union {
    __IO  uint8_t BTSEL4567;
    stc_btiosel47_btsel4567_field_t BTSEL4567_f;
  };
}FM3_BTIOSEL47_TypeDef;

/******************************************************************************
 * SBSSR_MODULE
 ******************************************************************************/
/* Software based Simulation Startup (Base Timer) register */
typedef struct
{
  union {
    __IO uint16_t BTSSSR;
    stc_sbssr_btsssr_field_t BTSSSR_f;
  };
}FM3_SBSSR_TypeDef;

/******************************************************************************
 * QPRC_MODULE
 ******************************************************************************/
/* Quad position and revolution counter channel 0 registers */
typedef struct
{
  __IO uint16_t QPCR;
        uint8_t RESERVED0[2];
  __IO uint16_t QRCR;
        uint8_t RESERVED1[2];
  __IO uint16_t QPCCR;
        uint8_t RESERVED2[2];
  __IO uint16_t QPRCR;
        uint8_t RESERVED3[2];
  __IO uint16_t QMPR;
        uint8_t RESERVED4[2];
  union {
    union {
      __IO uint16_t QICR;
      stc_qprc_qicr_field_t QICR_f;
    };
    struct {
      union {
        __IO  uint8_t QICRL;
        stc_qprc_qicrl_field_t QICRL_f;
      };
      union {
        __IO  uint8_t QICRH;
        stc_qprc_qicrh_field_t QICRH_f;
      };
    };
  };
        uint8_t RESERVED5[2];
  union {
    union {
      __IO uint16_t QCR;
      stc_qprc_qcr_field_t QCR_f;
    };
    struct {
      union {
        __IO  uint8_t QCRL;
        stc_qprc_qcrl_field_t QCRL_f;
      };
      union {
        __IO  uint8_t QCRH;
        stc_qprc_qcrh_field_t QCRH_f;
      };
    };
  };
        uint8_t RESERVED6[2];
  union {
    __IO uint16_t QECR;
    stc_qprc_qecr_field_t QECR_f;
  };
        uint8_t RESERVED7[30];
  union {
    __IO uint32_t QPRCRR;
    struct {
      __IO uint16_t QRCRR;
      __IO uint16_t QPCRR;
    };
  };
}FM3_QPRC_TypeDef;

/******************************************************************************
 * ADC12_MODULE
 ******************************************************************************/
/* 12-bit ADC unit 0 registers */
typedef struct
{
  union {
    __IO  uint8_t ADSR;
    stc_adc_adsr_field_t ADSR_f;
  };
  union {
    __IO  uint8_t ADCR;
    stc_adc_adcr_field_t ADCR_f;
  };
        uint8_t RESERVED0[6];
  union {
    __IO  uint8_t SFNS;
    stc_adc_sfns_field_t SFNS_f;
  };
  union {
    __IO  uint8_t SCCR;
    stc_adc_sccr_field_t SCCR_f;
  };
        uint8_t RESERVED1[2];
  union {
    union {
      __IO uint32_t SCFD;
      stc_adc_scfd_field_t SCFD_f;
    };
    struct {
      union {
        __IO uint16_t SCFDL;
        stc_adc_scfdl_field_t SCFDL_f;
      };
      union {
        __IO uint16_t SCFDH;
        stc_adc_scfdh_field_t SCFDH_f;
      };
    };
  };
  union {
    union {
      __IO uint16_t SCIS23;
      stc_adc_scis23_field_t SCIS23_f;
    };
    struct {
      union {
        __IO  uint8_t SCIS2;
        stc_adc_scis2_field_t SCIS2_f;
      };
      union {
        __IO  uint8_t SCIS3;
        stc_adc_scis3_field_t SCIS3_f;
      };
    };
  };
        uint8_t RESERVED2[2];
  union {
    union {
      __IO uint16_t SCIS01;
      stc_adc_scis01_field_t SCIS01_f;
    };
    struct {
      union {
        __IO  uint8_t SCIS0;
        stc_adc_scis0_field_t SCIS0_f;
      };
      union {
        __IO  uint8_t SCIS1;
        stc_adc_scis1_field_t SCIS1_f;
      };
    };
  };
        uint8_t RESERVED3[2];
  union {
    __IO  uint8_t PFNS;
    stc_adc_pfns_field_t PFNS_f;
  };
  union {
    __IO  uint8_t PCCR;
    stc_adc_pccr_field_t PCCR_f;
  };
        uint8_t RESERVED4[2];
  union {
    union {
      __IO uint32_t PCFD;
      stc_adc_pcfd_field_t PCFD_f;
    };
    struct {
      union {
        __IO uint16_t PCFDL;
        stc_adc_pcfdl_field_t PCFDL_f;
      };
      union {
        __IO uint16_t PCFDH;
        stc_adc_pcfdh_field_t PCFDH_f;
      };
    };
  };
  union {
    __IO  uint8_t PCIS;
    stc_adc_pcis_field_t PCIS_f;
  };
        uint8_t RESERVED5[3];
  union {
    __IO  uint8_t CMPCR;
    stc_adc_cmpcr_field_t CMPCR_f;
  };
        uint8_t RESERVED6;
  union {
    __IO uint16_t CMPD;
    stc_adc_cmpd_field_t CMPD_f;
  };
  union {
    union {
      __IO uint16_t ADSS23;
      stc_adc_adss23_field_t ADSS23_f;
    };
    struct {
      union {
        __IO  uint8_t ADSS2;
        stc_adc_adss2_field_t ADSS2_f;
      };
      union {
        __IO  uint8_t ADSS3;
        stc_adc_adss3_field_t ADSS3_f;
      };
    };
  };
        uint8_t RESERVED7[2];
  union {
    union {
      __IO uint16_t ADSS01;
      stc_adc_adss01_field_t ADSS01_f;
    };
    struct {
      union {
        __IO  uint8_t ADSS0;
        stc_adc_adss0_field_t ADSS0_f;
      };
      union {
        __IO  uint8_t ADSS1;
        stc_adc_adss1_field_t ADSS1_f;
      };
    };
  };
        uint8_t RESERVED8[2];
  union {
    union {
      __IO uint16_t ADST01;
      stc_adc_adst01_field_t ADST01_f;
    };
    struct {
      union {
        __IO  uint8_t ADST1;
        stc_adc_adst1_field_t ADST1_f;
      };
      union {
        __IO  uint8_t ADST0;
        stc_adc_adst0_field_t ADST0_f;
      };
    };
  };
        uint8_t RESERVED9[2];
  union {
    __IO  uint8_t ADCT;
    stc_adc_adct_field_t ADCT_f;
  };
        uint8_t RESERVED10[3];
  union {
    __IO  uint8_t PRTSL;
    stc_adc_prtsl_field_t PRTSL_f;
  };
  union {
    __IO  uint8_t SCTSL;
    stc_adc_sctsl_field_t SCTSL_f;
  };
        uint8_t RESERVED11[2];
  union {
    __IO uint16_t ADCEN;
    stc_adc_adcen_field_t ADCEN_f;
  };
}FM3_ADC_TypeDef;

/******************************************************************************
 * CRTRIM_MODULE
 ******************************************************************************/
/* CR trimming registers */
typedef struct
{
  union {
    __IO  uint8_t MCR_PSR;
    stc_crtrim_mcr_psr_field_t MCR_PSR_f;
  };
        uint8_t RESERVED0[3];
  union {
    __IO uint16_t MCR_FTRM;
    stc_crtrim_mcr_ftrm_field_t MCR_FTRM_f;
  };
        uint8_t RESERVED1[6];
  __IO uint32_t MCR_RLR;
}FM3_CRTRIM_TypeDef;

/******************************************************************************
 * EXTI_MODULE
 ******************************************************************************/
/* External interrupt registers */
typedef struct
{
  union {
    __IO uint32_t ENIR;
    stc_exti_enir_field_t ENIR_f;
  };
  union {
    __IO uint32_t EIRR;
    stc_exti_eirr_field_t EIRR_f;
  };
  union {
    __IO uint32_t EICL;
    stc_exti_eicl_field_t EICL_f;
  };
  union {
    __IO uint32_t ELVR;
    stc_exti_elvr_field_t ELVR_f;
  };
  union {
    __IO uint32_t ELVR1;
    stc_exti_elvr1_field_t ELVR1_f;
  };
  union {
    __IO  uint8_t NMIRR;
    stc_exti_nmirr_field_t NMIRR_f;
  };
       uint8_t RESERVED5[3];
  union {
    __IO  uint8_t NMICL;
    stc_exti_nmicl_field_t NMICL_f;
  };
}FM3_EXTI_TypeDef;

/******************************************************************************
 * INTREQ_MODULE
 ******************************************************************************/
/* Interrupt request read registers */
typedef struct
{
  union {
    __IO uint32_t DRQSEL;
    stc_intreq_drqsel_field_t DRQSEL_f;
  };
       uint8_t RESERVED0[7];
  union {
    __IO  uint8_t ODDPKS;
    stc_intreq_oddpks_field_t ODDPKS_f;
  };
  union {
    __IO uint32_t IRQCMODE;
    stc_intreq_irqcmode_field_t IRQCMODE_f;
  };
  union {
    __IO uint32_t EXC02MON;
    stc_intreq_exc02mon_field_t EXC02MON_f;
  };
  union {
    __IO uint32_t IRQ00MON;
    stc_intreq_irq00mon_field_t IRQ00MON_f;
  };
  union {
    __IO uint32_t IRQ01MON;
    stc_intreq_irq01mon_field_t IRQ01MON_f;
  };
  union {
    __IO uint32_t IRQ02MON;
    stc_intreq_irq02mon_field_t IRQ02MON_f;
  };
  union {
    __IO uint32_t IRQ03MON;
    stc_intreq_irq03mon_field_t IRQ03MON_f;
  };
  union {
    __IO uint32_t IRQ04MON;
    stc_intreq_irq04mon_field_t IRQ04MON_f;
  };
  union {
    __IO uint32_t IRQ05MON;
    stc_intreq_irq05mon_field_t IRQ05MON_f;
  };
  union {
    __IO uint32_t IRQ06MON;
    stc_intreq_irq06mon_field_t IRQ06MON_f;
  };
  union {
    __IO uint32_t IRQ07MON;
    stc_intreq_irq07mon_field_t IRQ07MON_f;
  };
  union {
    __IO uint32_t IRQ08MON;
    stc_intreq_irq08mon_field_t IRQ08MON_f;
  };
  union {
    __IO uint32_t IRQ09MON;
    stc_intreq_irq09mon_field_t IRQ09MON_f;
  };
  union {
    __IO uint32_t IRQ10MON;
    stc_intreq_irq10mon_field_t IRQ10MON_f;
  };
  union {
    __IO uint32_t IRQ11MON;
    stc_intreq_irq11mon_field_t IRQ11MON_f;
  };
  union {
    __IO uint32_t IRQ12MON;
    stc_intreq_irq12mon_field_t IRQ12MON_f;
  };
  union {
    __IO uint32_t IRQ13MON;
    stc_intreq_irq13mon_field_t IRQ13MON_f;
  };
  union {
    __IO uint32_t IRQ14MON;
    stc_intreq_irq14mon_field_t IRQ14MON_f;
  };
  union {
    __IO uint32_t IRQ15MON;
    stc_intreq_irq15mon_field_t IRQ15MON_f;
  };
  union {
    __IO uint32_t IRQ16MON;
    stc_intreq_irq16mon_field_t IRQ16MON_f;
  };
  union {
    __IO uint32_t IRQ17MON;
    stc_intreq_irq17mon_field_t IRQ17MON_f;
  };
  union {
    __IO uint32_t IRQ18MON;
    stc_intreq_irq18mon_field_t IRQ18MON_f;
  };
  union {
    __IO uint32_t IRQ19MON;
    stc_intreq_irq19mon_field_t IRQ19MON_f;
  };
  union {
    __IO uint32_t IRQ20MON;
    stc_intreq_irq20mon_field_t IRQ20MON_f;
  };
  union {
    __IO uint32_t IRQ21MON;
    stc_intreq_irq21mon_field_t IRQ21MON_f;
  };
  union {
    __IO uint32_t IRQ22MON;
    stc_intreq_irq22mon_field_t IRQ22MON_f;
  };
  union {
    __IO uint32_t IRQ23MON;
    stc_intreq_irq23mon_field_t IRQ23MON_f;
  };
  union {
    __IO uint32_t IRQ24MON;
    stc_intreq_irq24mon_field_t IRQ24MON_f;
  };
  union {
    __IO uint32_t IRQ25MON;
    stc_intreq_irq25mon_field_t IRQ25MON_f;
  };
  union {
    __IO uint32_t IRQ26MON;
    stc_intreq_irq26mon_field_t IRQ26MON_f;
  };

    __IO uint32_t IRQ27MON;

  union {
    __IO uint32_t IRQ28MON;
    stc_intreq_irq28mon_field_t IRQ28MON_f;
  };
  union {
    __IO uint32_t IRQ29MON;
    stc_intreq_irq29mon_field_t IRQ29MON_f;
  };
  union {
    __IO uint32_t IRQ30MON;
    stc_intreq_irq30mon_field_t IRQ30MON_f;
  };
  union {
    __IO uint32_t IRQ31MON;
    stc_intreq_irq31mon_field_t IRQ31MON_f;
  };

    __IO uint32_t IRQ32MON;

  union {
    __IO uint32_t IRQ33MON;
    stc_intreq_irq33mon_field_t IRQ33MON_f;
  };
  union {
    __IO uint32_t IRQ34MON;
    stc_intreq_irq34mon_field_t IRQ34MON_f;
  };
  union {
    __IO uint32_t IRQ35MON;
    stc_intreq_irq35mon_field_t IRQ35MON_f;
  };

    __IO uint32_t IRQ36MON;
    __IO uint32_t IRQ37MON;

  union {
    __IO uint32_t IRQ38MON;
    stc_intreq_irq38mon_field_t IRQ38MON_f;
  };
  union {
    __IO uint32_t IRQ39MON;
    stc_intreq_irq39mon_field_t IRQ39MON_f;
  };
  union {
    __IO uint32_t IRQ40MON;
    stc_intreq_irq40mon_field_t IRQ40MON_f;
  };
  union {
    __IO uint32_t IRQ41MON;
    stc_intreq_irq41mon_field_t IRQ41MON_f;
  };
  union {
    __IO uint32_t IRQ42MON;
    stc_intreq_irq42mon_field_t IRQ42MON_f;
  };
  union {
    __IO uint32_t IRQ43MON;
    stc_intreq_irq43mon_field_t IRQ43MON_f;
  };
  union {
    __IO uint32_t IRQ44MON;
    stc_intreq_irq44mon_field_t IRQ44MON_f;
  };
  union {
    __IO uint32_t IRQ45MON;
    stc_intreq_irq45mon_field_t IRQ45MON_f;
  };

    __IO uint32_t IRQ46MON;

  union {
    __IO uint32_t IRQ47MON;
    stc_intreq_irq47mon_field_t IRQ47MON_f;
  };
       uint8_t RESERVED51[316];
  union {
    __IO uint32_t RCINTSEL0;
    stc_intreq_rcintsel0_field_t RCINTSEL0_f;
  };
  union {
    __IO uint32_t RCINTSEL1;
    stc_intreq_rcintsel1_field_t RCINTSEL1_f;
  };
}FM3_INTREQ_TypeDef;

/******************************************************************************
 * GPIO_MODULE
 ******************************************************************************/
typedef struct
{
  union {
    __IO uint32_t PFR0;
    stc_gpio_pfr0_field_t PFR0_f;
  };
  union {
    __IO uint32_t PFR1;
    stc_gpio_pfr1_field_t PFR1_f;
  };
  union {
    __IO uint32_t PFR2;
    stc_gpio_pfr2_field_t PFR2_f;
  };
  union {
    __IO uint32_t PFR3;
    stc_gpio_pfr3_field_t PFR3_f;
  };
  union {
    __IO uint32_t PFR4;
    stc_gpio_pfr4_field_t PFR4_f;
  };
  union {
    __IO uint32_t PFR5;
    stc_gpio_pfr5_field_t PFR5_f;
  };
  union {
    __IO uint32_t PFR6;
    stc_gpio_pfr6_field_t PFR6_f;
  };
       uint8_t RESERVED6[4];
  union {
    __IO uint32_t PFR8;
    stc_gpio_pfr8_field_t PFR8_f;
  };
       uint8_t RESERVED7[20];
  union {
    __IO uint32_t PFRE;
    stc_gpio_pfre_field_t PFRE_f;
  };
       uint8_t RESERVED8[196];
  union {
    __IO uint32_t PCR0;
    stc_gpio_pcr0_field_t PCR0_f;
  };
  union {
    __IO uint32_t PCR1;
    stc_gpio_pcr1_field_t PCR1_f;
  };
  union {
    __IO uint32_t PCR2;
    stc_gpio_pcr2_field_t PCR2_f;
  };
  union {
    __IO uint32_t PCR3;
    stc_gpio_pcr3_field_t PCR3_f;
  };
  union {
    __IO uint32_t PCR4;
    stc_gpio_pcr4_field_t PCR4_f;
  };
  union {
    __IO uint32_t PCR5;
    stc_gpio_pcr5_field_t PCR5_f;
  };
  union {
    __IO uint32_t PCR6;
    stc_gpio_pcr6_field_t PCR6_f;
  };
       uint8_t RESERVED15[28];
  union {
    __IO uint32_t PCRE;
    stc_gpio_pcre_field_t PCRE_f;
  };
       uint8_t RESERVED16[196];
  union {
    __IO uint32_t DDR0;
    stc_gpio_ddr0_field_t DDR0_f;
  };
  union {
    __IO uint32_t DDR1;
    stc_gpio_ddr1_field_t DDR1_f;
  };
  union {
    __IO uint32_t DDR2;
    stc_gpio_ddr2_field_t DDR2_f;
  };
  union {
    __IO uint32_t DDR3;
    stc_gpio_ddr3_field_t DDR3_f;
  };
  union {
    __IO uint32_t DDR4;
    stc_gpio_ddr4_field_t DDR4_f;
  };
  union {
    __IO uint32_t DDR5;
    stc_gpio_ddr5_field_t DDR5_f;
  };
  union {
    __IO uint32_t DDR6;
    stc_gpio_ddr6_field_t DDR6_f;
  };
       uint8_t RESERVED23[4];
  union {
    __IO uint32_t DDR8;
    stc_gpio_ddr8_field_t DDR8_f;
  };
       uint8_t RESERVED24[20];
  union {
    __IO uint32_t DDRE;
    stc_gpio_ddre_field_t DDRE_f;
  };
       uint8_t RESERVED25[196];
  union {
    __IO uint32_t PDIR0;
    stc_gpio_pdir0_field_t PDIR0_f;
  };
  union {
    __IO uint32_t PDIR1;
    stc_gpio_pdir1_field_t PDIR1_f;
  };
  union {
    __IO uint32_t PDIR2;
    stc_gpio_pdir2_field_t PDIR2_f;
  };
  union {
    __IO uint32_t PDIR3;
    stc_gpio_pdir3_field_t PDIR3_f;
  };
  union {
    __IO uint32_t PDIR4;
    stc_gpio_pdir4_field_t PDIR4_f;
  };
  union {
    __IO uint32_t PDIR5;
    stc_gpio_pdir5_field_t PDIR5_f;
  };
  union {
    __IO uint32_t PDIR6;
    stc_gpio_pdir6_field_t PDIR6_f;
  };
       uint8_t RESERVED32[4];
  union {
    __IO uint32_t PDIR8;
    stc_gpio_pdir8_field_t PDIR8_f;
  };
       uint8_t RESERVED33[20];
  union {
    __IO uint32_t PDIRE;
    stc_gpio_pdire_field_t PDIRE_f;
  };
       uint8_t RESERVED34[196];
  union {
    __IO uint32_t PDOR0;
    stc_gpio_pdor0_field_t PDOR0_f;
  };
  union {
    __IO uint32_t PDOR1;
    stc_gpio_pdor1_field_t PDOR1_f;
  };
  union {
    __IO uint32_t PDOR2;
    stc_gpio_pdor2_field_t PDOR2_f;
  };
  union {
    __IO uint32_t PDOR3;
    stc_gpio_pdor3_field_t PDOR3_f;
  };
  union {
    __IO uint32_t PDOR4;
    stc_gpio_pdor4_field_t PDOR4_f;
  };
  union {
    __IO uint32_t PDOR5;
    stc_gpio_pdor5_field_t PDOR5_f;
  };
  union {
    __IO uint32_t PDOR6;
    stc_gpio_pdor6_field_t PDOR6_f;
  };
       uint8_t RESERVED41[4];
  union {
    __IO uint32_t PDOR8;
    stc_gpio_pdor8_field_t PDOR8_f;
  };
       uint8_t RESERVED42[20];
  union {
    __IO uint32_t PDORE;
    stc_gpio_pdore_field_t PDORE_f;
  };
       uint8_t RESERVED43[196];
  union {
    __IO uint32_t ADE;
    stc_gpio_ade_field_t ADE_f;
  };
       uint8_t RESERVED44[124];
  union {
    __IO uint32_t SPSR;
    stc_gpio_spsr_field_t SPSR_f;
  };
       uint8_t RESERVED45[124];
  union {
    __IO uint32_t EPFR00;
    stc_gpio_epfr00_field_t EPFR00_f;
  };
  union {
    __IO uint32_t EPFR01;
    stc_gpio_epfr01_field_t EPFR01_f;
  };
    __IO uint32_t EPFR02;
    __IO uint32_t EPFR03;
  union {
    __IO uint32_t EPFR04;
    stc_gpio_epfr04_field_t EPFR04_f;
  };
  union {
    __IO uint32_t EPFR05;
    stc_gpio_epfr05_field_t EPFR05_f;
  };
  union {
    __IO uint32_t EPFR06;
    stc_gpio_epfr06_field_t EPFR06_f;
  };
  union {
    __IO uint32_t EPFR07;
    stc_gpio_epfr07_field_t EPFR07_f;
  };
  union {
    __IO uint32_t EPFR08;
    stc_gpio_epfr08_field_t EPFR08_f;
  };
  union {
    __IO uint32_t EPFR09;
    stc_gpio_epfr09_field_t EPFR09_f;
  };
    __IO uint32_t EPFR10;
    __IO uint32_t EPFR11;
    __IO uint32_t EPFR12;
    __IO uint32_t EPFR13;
    __IO uint32_t EPFR14;
  union {
    __IO uint32_t EPFR15;
    stc_gpio_epfr15_field_t EPFR15_f;
  };
    __IO uint32_t EPFR16;
    __IO uint32_t EPFR17;
    __IO uint32_t EPFR18;
       uint8_t RESERVED62[180];
  union {
    __IO uint32_t PZR0;
    stc_gpio_pzr0_field_t PZR0_f;
  };
       uint8_t RESERVED63[12];
  union {
    __IO uint32_t PZR4;
    stc_gpio_pzr4_field_t PZR4_f;
  };
       uint8_t RESERVED64[4];
  union {
    __IO uint32_t PZR6;
    stc_gpio_pzr6_field_t PZR6_f;
  };
}FM3_GPIO_TypeDef;

/******************************************************************************
 * LVD_MODULE
 ******************************************************************************/
/* Low voltage detection registers */
typedef struct
{
  union {
    __IO uint16_t LVD_CTL;
    stc_lvd_lvd_ctl_field_t LVD_CTL_f;
  };
        uint8_t RESERVED0[2];
  union {
    __IO  uint8_t LVD_STR;
    stc_lvd_lvd_str_field_t LVD_STR_f;
  };
        uint8_t RESERVED1[3];
  union {
    __IO  uint8_t LVD_CLR;
    stc_lvd_lvd_clr_field_t LVD_CLR_f;
  };
        uint8_t RESERVED2[3];
  __IO uint32_t LVD_RLR;
  union {
    __IO  uint8_t LVD_STR2;
    stc_lvd_lvd_str2_field_t LVD_STR2_f;
  };
}FM3_LVD_TypeDef;

/******************************************************************************
 * DS_MODULE
 ******************************************************************************/
/* Deep standby mode control registers */
typedef struct
{
  union {
    __IO  uint8_t REG_CTL;
    stc_ds_reg_ctl_field_t REG_CTL_f;
  };
       uint8_t RESERVED0[3];
  union {
    __IO  uint8_t RCK_CTL;
    stc_ds_rck_ctl_field_t RCK_CTL_f;
  };
       uint8_t RESERVED1[1787];
  union {
    __IO  uint8_t PMD_CTL;
    stc_ds_pmd_ctl_field_t PMD_CTL_f;
  };
       uint8_t RESERVED2[3];
  union {
    __IO  uint8_t WRFSR;
    stc_ds_wrfsr_field_t WRFSR_f;
  };
       uint8_t RESERVED3[3];
  union {
    __IO uint16_t WIFSR;
    stc_ds_wifsr_field_t WIFSR_f;
  };
       uint8_t RESERVED4[2];
  union {
    __IO uint16_t WIER;
    stc_ds_wier_field_t WIER_f;
  };
       uint8_t RESERVED5[2];
  union {
    __IO  uint8_t WILVR;
    stc_ds_wilvr_field_t WILVR_f;
  };
       uint8_t RESERVED6[3];
  union {
    __IO  uint8_t DSRAMR;
    stc_ds_dsramr_field_t DSRAMR_f;
  };
       uint8_t RESERVED7[235];
  __IO  uint8_t BUR01;
  __IO  uint8_t BUR02;
  __IO  uint8_t BUR03;
  __IO  uint8_t BUR04;
  __IO  uint8_t BUR05;
  __IO  uint8_t BUR06;
  __IO  uint8_t BUR07;
  __IO  uint8_t BUR08;
  __IO  uint8_t BUR09;
  __IO  uint8_t BUR10;
  __IO  uint8_t BUR11;
  __IO  uint8_t BUR12;
  __IO  uint8_t BUR13;
  __IO  uint8_t BUR14;
  __IO  uint8_t BUR15;
  __IO  uint8_t BUR16;
}FM3_DS_TypeDef;

/******************************************************************************
 * USBCLK
 ******************************************************************************/
/* USB clock registers */
typedef struct
{
  union {
    __IO  uint8_t UCCR;
    stc_usbclk_uccr_field_t UCCR_f;
  };
        uint8_t RESERVED0[3];
  union {
    __IO  uint8_t UPCR1;
    stc_usbclk_upcr1_field_t UPCR1_f;
  };
        uint8_t RESERVED1[3];
  union {
    __IO  uint8_t UPCR2;
    stc_usbclk_upcr2_field_t UPCR2_f;
  };
        uint8_t RESERVED2[3];
  union {
    __IO  uint8_t UPCR3;
    stc_usbclk_upcr3_field_t UPCR3_f;
  };
        uint8_t RESERVED3[3];
  union {
    __IO  uint8_t UPCR4;
    stc_usbclk_upcr4_field_t UPCR4_f;
  };
        uint8_t RESERVED4[3];
  union {
    __IO  uint8_t UP_STR;
    stc_usbclk_up_str_field_t UP_STR_f;
  };
        uint8_t RESERVED5[3];
  union {
    __IO  uint8_t UPINT_ENR;
    stc_usbclk_upint_enr_field_t UPINT_ENR_f;
  };
        uint8_t RESERVED6[3];
  union {
    __IO  uint8_t UPINT_CLR;
    stc_usbclk_upint_clr_field_t UPINT_CLR_f;
  };
        uint8_t RESERVED7[3];
  union {
    __IO  uint8_t UPINT_STR;
    stc_usbclk_upint_str_field_t UPINT_STR_f;
  };
        uint8_t RESERVED8[3];
  union {
    __IO  uint8_t UPCR5;
    stc_usbclk_upcr5_field_t UPCR5_f;
  };
        uint8_t RESERVED9[11];
  union {
    __IO  uint8_t USBEN;
    stc_usbclk_usben_field_t USBEN_f;
  };
}FM3_USBCLK_TypeDef;

/******************************************************************************
 * CANPRE_MODULE
 ******************************************************************************/
/* CAN prescaler register */
typedef struct
{
  union {
    __IO  uint8_t CANPRE;
    stc_canpre_canpre_field_t CANPRE_f;
  };
}FM3_CANPRE_TypeDef;

/******************************************************************************
 * MFS_UART_MODULE
 ******************************************************************************/
/* UART asynchronous registers */
typedef struct
{
  union {
    __IO  uint8_t SMR;
    stc_mfs_uart_smr_field_t SMR_f;
  };
  union {
    __IO  uint8_t SCR;
    stc_mfs_uart_scr_field_t SCR_f;
  };
       uint8_t RESERVED1[2];
  union {
    __IO  uint8_t ESCR;
    stc_mfs_uart_escr_field_t ESCR_f;
  };
  union {
    __IO  uint8_t SSR;
    stc_mfs_uart_ssr_field_t SSR_f;
  };
       uint8_t RESERVED3[2];
  union {
    union {
      __IO uint16_t RDR;
      stc_mfs_uart_rdr_field_t RDR_f;
    };
    union {
      __IO uint16_t TDR;
      stc_mfs_uart_tdr_field_t TDR_f;
    };
  };
       uint8_t RESERVED5[2];
  union {
    union {
      __IO uint16_t BGR;
      stc_mfs_uart_bgr_field_t BGR_f;
    };
    struct {
      __IO  uint8_t BGR0;
      union {
        __IO  uint8_t BGR1;
        stc_mfs_uart_bgr1_field_t BGR1_f;
      };
    };
  };
       uint8_t RESERVED6[6];
  union {
    union {
      __IO uint16_t FCR;
      stc_mfs_uart_fcr_field_t FCR_f;
    };
    struct {
      union {
        __IO  uint8_t FCR0;
        stc_mfs_uart_fcr0_field_t FCR0_f;
      };
      union {
        __IO  uint8_t FCR1;
        stc_mfs_uart_fcr1_field_t FCR1_f;
      };
    };
  };
       uint8_t RESERVED8[2];
  union {
    union {
      __IO uint16_t FBYTE;
      stc_mfs_uart_fbyte_field_t FBYTE_f;
    };
    struct {
      union {
        __IO  uint8_t FBYTE1;
        stc_mfs_uart_fbyte1_field_t FBYTE1_f;
      };
      union {
        __IO  uint8_t FBYTE2;
        stc_mfs_uart_fbyte2_field_t FBYTE2_f;
      };
    };
  };
}FM3_MFS_UART_TypeDef;

/******************************************************************************
 * MFS_CSIO_MODULE
 ******************************************************************************/
/* UART synchronous channel 4 registers */
typedef struct
{
  union {
    __IO  uint8_t SMR;
    stc_mfs_csio_smr_field_t SMR_f;
  };
  union {
    __IO  uint8_t SCR;
    stc_mfs_csio_scr_field_t SCR_f;
  };
       uint8_t RESERVED1[2];
  union {
    __IO  uint8_t ESCR;
    stc_mfs_csio_escr_field_t ESCR_f;
  };
  union {
    __IO  uint8_t SSR;
    stc_mfs_csio_ssr_field_t SSR_f;
  };
       uint8_t RESERVED3[2];
  union {
    __IO uint16_t RDR;
    __IO uint16_t TDR;
  };
       uint8_t RESERVED5[2];
  union {
    __IO uint16_t BGR;
    struct {
      __IO  uint8_t BGR0;
      __IO  uint8_t BGR1;
    };
  };
       uint8_t RESERVED6[6];
  union {
    union {
      __IO uint16_t FCR;
      stc_mfs_csio_fcr_field_t FCR_f;
    };
    struct {
      union {
        __IO  uint8_t FCR0;
        stc_mfs_csio_fcr0_field_t FCR0_f;
      };
      union {
        __IO  uint8_t FCR1;
        stc_mfs_csio_fcr1_field_t FCR1_f;
      };
    };
  };
       uint8_t RESERVED8[2];
  union {
    union {
      __IO uint16_t FBYTE;
      stc_mfs_csio_fbyte_field_t FBYTE_f;
    };
    struct {
      union {
        __IO  uint8_t FBYTE1;
        stc_mfs_csio_fbyte1_field_t FBYTE1_f;
      };
      union {
        __IO  uint8_t FBYTE2;
        stc_mfs_csio_fbyte2_field_t FBYTE2_f;
      };
    };
  };
}FM3_MFS_CSIO_TypeDef;

/******************************************************************************
 * MFS_LIN_MODULE
 ******************************************************************************/
/* LIN registers */
typedef struct
{
  union {
    __IO  uint8_t SMR;
    stc_mfs_lin_smr_field_t SMR_f;
  };
  union {
    __IO  uint8_t SCR;
    stc_mfs_lin_scr_field_t SCR_f;
  };
       uint8_t RESERVED1[2];
  union {
    __IO  uint8_t ESCR;
    stc_mfs_lin_escr_field_t ESCR_f;
  };
  union {
    __IO  uint8_t SSR;
    stc_mfs_lin_ssr_field_t SSR_f;
  };
       uint8_t RESERVED3[2];
  union {
    __IO uint16_t RDR;
    __IO uint16_t TDR;
  };
       uint8_t RESERVED5[2];
  union {
    union {
      __IO uint16_t BGR;
      stc_mfs_lin_bgr_field_t BGR_f;
    };
    struct {
      __IO  uint8_t BGR0;
      union {
        __IO  uint8_t BGR1;
        stc_mfs_lin_bgr1_field_t BGR1_f;
      };
    };
  };
       uint8_t RESERVED6[6];
  union {
    union {
      __IO uint16_t FCR;
      stc_mfs_lin_fcr_field_t FCR_f;
    };
    struct {
      union {
        __IO  uint8_t FCR0;
        stc_mfs_lin_fcr0_field_t FCR0_f;
      };
      union {
        __IO  uint8_t FCR1;
        stc_mfs_lin_fcr1_field_t FCR1_f;
      };
    };
  };
       uint8_t RESERVED8[2];
  union {
    union {
      __IO uint16_t FBYTE;
      stc_mfs_lin_fbyte_field_t FBYTE_f;
    };
    struct {
      union {
        __IO  uint8_t FBYTE1;
        stc_mfs_lin_fbyte1_field_t FBYTE1_f;
      };
      union {
        __IO  uint8_t FBYTE2;
        stc_mfs_lin_fbyte2_field_t FBYTE2_f;
      };
    };
  };
}FM3_MFS_LIN_TypeDef;

/******************************************************************************
 * MFS_I2C_MODULE
 ******************************************************************************/
/* I2C registers */
typedef struct
{
  union {
    __IO  uint8_t SMR;
    stc_mfs_i2c_smr_field_t SMR_f;
  };
  union {
    __IO  uint8_t IBCR;
    stc_mfs_i2c_ibcr_field_t IBCR_f;
  };
       uint8_t RESERVED1[2];
  union {
    __IO  uint8_t IBSR;
    stc_mfs_i2c_ibsr_field_t IBSR_f;
  };
  union {
    __IO  uint8_t SSR;
    stc_mfs_i2c_ssr_field_t SSR_f;
  };
       uint8_t RESERVED3[2];
  union {
    __IO uint16_t RDR;
    __IO uint16_t TDR;
  };
       uint8_t RESERVED5[2];
  union {
    __IO uint16_t BGR;
    struct {
      __IO  uint8_t BGR0;
      __IO  uint8_t BGR1;
    };
  };
       uint8_t RESERVED8[2];
  union {
    __IO  uint8_t ISBA;
    stc_mfs_i2c_isba_field_t ISBA_f;
  };
  union {
    __IO  uint8_t ISMK;
    stc_mfs_i2c_ismk_field_t ISMK_f;
  };
       uint8_t RESERVED10[2];
  union {
    union {
      __IO uint16_t FCR;
      stc_mfs_i2c_fcr_field_t FCR_f;
    };
    struct {
      union {
        __IO  uint8_t FCR0;
        stc_mfs_i2c_fcr0_field_t FCR0_f;
      };
      union {
        __IO  uint8_t FCR1;
        stc_mfs_i2c_fcr1_field_t FCR1_f;
      };
    };
  };
       uint8_t RESERVED12[2];
  union {
    union {
      __IO uint16_t FBYTE;
      stc_mfs_i2c_fbyte_field_t FBYTE_f;
    };
    struct {
      union {
        __IO  uint8_t FBYTE1;
        stc_mfs_i2c_fbyte1_field_t FBYTE1_f;
      };
      union {
        __IO  uint8_t FBYTE2;
        stc_mfs_i2c_fbyte2_field_t FBYTE2_f;
      };
    };
  };
       uint8_t RESERVED14[3];
  union {
    __IO  uint8_t EIBCR;
    stc_mfs_i2c_eibcr_field_t EIBCR_f;
  };
}FM3_MFS_I2C_TypeDef;

/******************************************************************************
 * CRC_MODULE
 ******************************************************************************/
/* CRC registers */
typedef struct
{
  union {
    __IO  uint8_t CRCCR;
    stc_crc_crccr_field_t CRCCR_f;
  };
        uint8_t RESERVED0[3];
  __IO uint32_t CRCINIT;
  union {
    __IO uint32_t CRCIN;
    struct {
      union {
        __IO uint16_t CRCINL;
        struct {
          __IO  uint8_t CRCINLL;
          __IO  uint8_t CRCINLH;
        };
      };
      union {
        __IO uint16_t CRCINH;
        struct {
          __IO  uint8_t CRCINHL;
          __IO  uint8_t CRCINHH;
        };
      };
    };
  };
  __IO uint32_t CRCR;
}FM3_CRC_TypeDef;

/******************************************************************************
 * WC_MODULE
 ******************************************************************************/
/* Watch counter registers */
typedef struct
{
  union {
    __IO  uint8_t WCRD;
    stc_wc_wcrd_field_t WCRD_f;
  };
  union {
    __IO  uint8_t WCRL;
    stc_wc_wcrl_field_t WCRL_f;
  };
  union {
    __IO  uint8_t WCCR;
    stc_wc_wccr_field_t WCCR_f;
  };
        uint8_t RESERVED0[13];
  union {
    __IO uint16_t CLK_SEL;
    stc_wc_clk_sel_field_t CLK_SEL_f;
  };
        uint8_t RESERVED1[2];
  union {
    __IO  uint8_t CLK_EN;
    stc_wc_clk_en_field_t CLK_EN_f;
  };
}FM3_WC_TypeDef;

/******************************************************************************
 * RTC_MODULE
 ******************************************************************************/
/* Realtime clock registers */
typedef struct
{
  union {
    __IO uint32_t WTCR1;
    stc_rtc_wtcr1_field_t WTCR1_f;
  };
  union {
    __IO uint32_t WTCR2;
    stc_rtc_wtcr2_field_t WTCR2_f;
  };
  union {
    __IO uint32_t WTBR;
    stc_rtc_wtbr_field_t WTBR_f;
  };
  union {
    __IO  uint8_t WTSR;
    stc_rtc_wtsr_field_t WTSR_f;
  };
  union {
    __IO  uint8_t WTMIR;
    stc_rtc_wtmir_field_t WTMIR_f;
  };
  union {
    __IO  uint8_t WTHR;
    stc_rtc_wthr_field_t WTHR_f;
  };
  union {
    __IO  uint8_t WTDR;
    stc_rtc_wtdr_field_t WTDR_f;
  };
  union {
    __IO  uint8_t WTDW;
    stc_rtc_wtdw_field_t WTDW_f;
  };
  union {
    __IO  uint8_t WTMOR;
    stc_rtc_wtmor_field_t WTMOR_f;
  };
  union {
    __IO  uint8_t WTYR;
    stc_rtc_wtyr_field_t WTYR_f;
  };
        uint8_t RESERVED0[2];
  union {
    __IO  uint8_t ALMIR;
    stc_rtc_almir_field_t ALMIR_f;
  };
  union {
    __IO  uint8_t ALHR;
    stc_rtc_alhr_field_t ALHR_f;
  };
  union {
    __IO  uint8_t ALDR;
    stc_rtc_aldr_field_t ALDR_f;
  };
        uint8_t RESERVED1;
  union {
    __IO  uint8_t ALMOR;
    stc_rtc_almor_field_t ALMOR_f;
  };
  union {
    __IO  uint8_t ALYR;
    stc_rtc_alyr_field_t ALYR_f;
  };
        uint8_t RESERVED2;
  union {
    __IO uint32_t WTTR;
    stc_rtc_wttr_field_t WTTR_f;
  };
  union {
    __IO  uint8_t WTCLKS;
    stc_rtc_wtclks_field_t WTCLKS_f;
  };
  union {
    __IO  uint8_t WTCLKM;
    stc_rtc_wtclkm_field_t WTCLKM_f;
  };
        uint8_t RESERVED3[2];
  union {
    __IO  uint16_t WTCAL;
    stc_rtc_wtcal_field_t WTCAL_f;
  };
  union {
    __IO  uint8_t WTCALEN;
    stc_rtc_wtcalen_field_t WTCALEN_f;
  };
        uint8_t RESERVED4[1];
  union {
    __IO  uint8_t WTDIV;
    stc_rtc_wtdiv_field_t WTDIV_f;
  };
  union {
    __IO  uint8_t WTDIVEN;
    stc_rtc_wtdiven_field_t WTDIVEN_f;
  };
        uint8_t RESERVED5[2];
  union {
    __IO  uint8_t WTCALPRD;
    stc_rtc_wtcalprd_field_t WTCALPRD_f;
  };
        uint8_t RESERVED6[3];
  union {
    __IO  uint8_t WTCOSEL;
    stc_rtc_wtcosel_field_t WTCOSEL_f;
  };
}FM3_RTC_TypeDef;

/******************************************************************************
 * USB_MODULE
 ******************************************************************************/
/* USB channel 0 registers */
typedef struct
{
  union {
    union {
      __IO uint16_t HCNT;
      stc_usb_hcnt_field_t HCNT_f;
    };
    struct {
      union {
        __IO  uint8_t HCNT0;
        stc_usb_hcnt0_field_t HCNT0_f;
      };
      union {
        __IO  uint8_t HCNT1;
        stc_usb_hcnt1_field_t HCNT1_f;
      };
    };
  };
        uint8_t RESERVED0[2];
  union {
    __IO  uint8_t HIRQ;
    stc_usb_hirq_field_t HIRQ_f;
  };
  union {
    __IO  uint8_t HERR;
    stc_usb_herr_field_t HERR_f;
  };
        uint8_t RESERVED1[2];
  union {
    __IO  uint8_t HSTATE;
    stc_usb_hstate_field_t HSTATE_f;
  };
  union {
    __IO  uint8_t HFCOMP;
    stc_usb_hfcomp_field_t HFCOMP_f;
  };
        uint8_t RESERVED2[2];
  union {
    union {
      __IO uint16_t HRTIMER;
      stc_usb_hrtimer_field_t HRTIMER_f;
    };
    struct {
      union {
        __IO  uint8_t HRTIMER0;
        stc_usb_hrtimer0_field_t HRTIMER0_f;
      };
      union {
        __IO  uint8_t HRTIMER1;
        stc_usb_hrtimer1_field_t HRTIMER1_f;
      };
    };
  };
        uint8_t RESERVED3[2];
  union {
    __IO  uint8_t HRTIMER2;
    stc_usb_hrtimer2_field_t HRTIMER2_f;
  };
  union {
    __IO  uint8_t HADR;
    stc_usb_hadr_field_t HADR_f;
  };
        uint8_t RESERVED4[2];
  union {
    union {
      __IO uint16_t HEOF;
      stc_usb_heof_field_t HEOF_f;
    };
    struct {
      union {
        __IO  uint8_t HEOF0;
        stc_usb_heof0_field_t HEOF0_f;
      };
      union {
        __IO  uint8_t HEOF1;
        stc_usb_heof1_field_t HEOF1_f;
      };
    };
  };
        uint8_t RESERVED5[2];
  union {
    union {
      __IO uint16_t HFRAME;
      stc_usb_hframe_field_t HFRAME_f;
    };
    struct {
      union {
        __IO  uint8_t HFRAME0;
        stc_usb_hframe0_field_t HFRAME0_f;
      };
      union {
        __IO  uint8_t HFRAME1;
        stc_usb_hframe1_field_t HFRAME1_f;
      };
    };
  };
        uint8_t RESERVED6[2];
  union {
    __IO  uint8_t HTOKEN;
    stc_usb_htoken_field_t HTOKEN_f;
  };
        uint8_t RESERVED7[3];
  union {
    __IO uint16_t UDCC;
    stc_usb_udcc_field_t UDCC_f;
  };
        uint8_t RESERVED8[2];
  union {
    __IO uint16_t EP0C;
    stc_usb_ep0c_field_t EP0C_f;
  };
        uint8_t RESERVED9[2];
  union {
    __IO uint16_t EP1C;
    stc_usb_ep1c_field_t EP1C_f;
  };
        uint8_t RESERVED10[2];
  union {
    __IO uint16_t EP2C;
    stc_usb_ep2c_field_t EP2C_f;
  };
        uint8_t RESERVED11[2];
  union {
    __IO uint16_t EP3C;
    stc_usb_ep3c_field_t EP3C_f;
  };
        uint8_t RESERVED12[2];
  union {
    __IO uint16_t EP4C;
    stc_usb_ep4c_field_t EP4C_f;
  };
        uint8_t RESERVED13[2];
  union {
    __IO uint16_t EP5C;
    stc_usb_ep5c_field_t EP5C_f;
  };
        uint8_t RESERVED14[2];
  union {
    __IO uint16_t TMSP;
    stc_usb_tmsp_field_t TMSP_f;
  };
        uint8_t RESERVED15[2];
  union {
    __IO  uint8_t UDCS;
    stc_usb_udcs_field_t UDCS_f;
  };
  union {
    __IO  uint8_t UDCIE;
    stc_usb_udcie_field_t UDCIE_f;
  };
        uint8_t RESERVED16[2];
  union {
    __IO uint16_t EP0IS;
    stc_usb_ep0is_field_t EP0IS_f;
  };
        uint8_t RESERVED17[2];
  union {
    __IO uint16_t EP0OS;
    stc_usb_ep0os_field_t EP0OS_f;
  };
        uint8_t RESERVED18[2];
  union {
    __IO uint16_t EP1S;
    stc_usb_ep1s_field_t EP1S_f;
  };
        uint8_t RESERVED19[2];
  union {
    __IO uint16_t EP2S;
    stc_usb_ep2s_field_t EP2S_f;
  };
        uint8_t RESERVED20[2];
  __IO uint16_t EP3S;
        uint8_t RESERVED21[2];
  union {
    __IO uint16_t EP4S;
    stc_usb_ep4s_field_t EP4S_f;
  };
        uint8_t RESERVED22[2];
  union {
    __IO uint16_t EP5S;
    stc_usb_ep5s_field_t EP5S_f;
  };
        uint8_t RESERVED23[2];
  union {
    __IO uint16_t EP0DT;
    struct {
      __IO  uint8_t EP0DTL;
      __IO  uint8_t EP0DTH;
    };
  };
        uint8_t RESERVED24[2];
  union {
    __IO uint16_t EP1DT;
    struct {
      __IO  uint8_t EP1DTL;
      __IO  uint8_t EP1DTH;
    };
  };
        uint8_t RESERVED25[2];
  union {
    __IO uint16_t EP2DT;
    struct {
      __IO  uint8_t EP2DTL;
      __IO  uint8_t EP2DTH;
    };
  };
        uint8_t RESERVED26[2];
  union {
    __IO uint16_t EP3DT;
    struct {
      __IO  uint8_t EP3DTL;
      __IO  uint8_t EP3DTH;
    };
  };
        uint8_t RESERVED27[2];
  union {
    __IO uint16_t EP4DT;
    struct {
      __IO  uint8_t EP4DTL;
      __IO  uint8_t EP4DTH;
    };
  };
        uint8_t RESERVED28[2];
  union {
    __IO uint16_t EP5DT;
    struct {
      __IO  uint8_t EP5DTL;
      __IO  uint8_t EP5DTH;
    };
  };
}FM3_USB_TypeDef;

/******************************************************************************
 * DMAC_MODULE
 ******************************************************************************/
/* DMA controller */
typedef struct
{
  union {
    __IO uint32_t DMACR;
    stc_dmac_dmacr_field_t DMACR_f;
  };
        uint8_t RESERVED0[12];
  union {
    __IO uint32_t DMACA0;
    stc_dmac_dmaca0_field_t DMACA0_f;
  };
  union {
    __IO uint32_t DMACB0;
    stc_dmac_dmacb0_field_t DMACB0_f;
  };
  __IO uint32_t DMACSA0;
  __IO uint32_t DMACDA0;
  union {
    __IO uint32_t DMACA1;
    stc_dmac_dmaca1_field_t DMACA1_f;
  };
  union {
    __IO uint32_t DMACB1;
    stc_dmac_dmacb1_field_t DMACB1_f;
  };
  __IO uint32_t DMACSA1;
  __IO uint32_t DMACDA1;
  union {
    __IO uint32_t DMACA2;
    stc_dmac_dmaca2_field_t DMACA2_f;
  };
  union {
    __IO uint32_t DMACB2;
    stc_dmac_dmacb2_field_t DMACB2_f;
  };
  __IO uint32_t DMACSA2;
  __IO uint32_t DMACDA2;
  union {
    __IO uint32_t DMACA3;
    stc_dmac_dmaca3_field_t DMACA3_f;
  };
  union {
    __IO uint32_t DMACB3;
    stc_dmac_dmacb3_field_t DMACB3_f;
  };
  __IO uint32_t DMACSA3;
  __IO uint32_t DMACDA3;
  union {
    __IO uint32_t DMACA4;
    stc_dmac_dmaca4_field_t DMACA4_f;
  };
  union {
    __IO uint32_t DMACB4;
    stc_dmac_dmacb4_field_t DMACB4_f;
  };
  __IO uint32_t DMACSA4;
  __IO uint32_t DMACDA4;
  union {
    __IO uint32_t DMACA5;
    stc_dmac_dmaca5_field_t DMACA5_f;
  };
  union {
    __IO uint32_t DMACB5;
    stc_dmac_dmacb5_field_t DMACB5_f;
  };
  __IO uint32_t DMACSA5;
  __IO uint32_t DMACDA5;
  union {
    __IO uint32_t DMACA6;
    stc_dmac_dmaca6_field_t DMACA6_f;
  };
  union {
    __IO uint32_t DMACB6;
    stc_dmac_dmacb6_field_t DMACB6_f;
  };
  __IO uint32_t DMACSA6;
  __IO uint32_t DMACDA6;
  union {
    __IO uint32_t DMACA7;
    stc_dmac_dmaca7_field_t DMACA7_f;
  };
  union {
    __IO uint32_t DMACB7;
    stc_dmac_dmacb7_field_t DMACB7_f;
  };
  __IO uint32_t DMACSA7;
  __IO uint32_t DMACDA7;
}FM3_DMAC_TypeDef;

/******************************************************************************
 * CAN_MODULE
 ******************************************************************************/
/* CAN channel 0 registers */
typedef struct
{
  union {
    __IO uint16_t CTRLR;
    stc_can_ctrlr_field_t CTRLR_f;
  };
  union {
    __IO uint16_t STATR;
    stc_can_statr_field_t STATR_f;
  };
  union {
    __IO uint16_t ERRCNT;
    stc_can_errcnt_field_t ERRCNT_f;
  };
  union {
    __IO uint16_t BTR;
    stc_can_btr_field_t BTR_f;
  };
  union {
    __IO uint16_t INTR;
    stc_can_intr_field_t INTR_f;
  };
  union {
    __IO uint16_t TESTR;
    stc_can_testr_field_t TESTR_f;
  };
  union {
    __IO uint16_t BRPER;
    stc_can_brper_field_t BRPER_f;
  };
        uint8_t RESERVED0[2];
  union {
    __IO uint16_t IF1CREQ;
    stc_can_if1creq_field_t IF1CREQ_f;
  };
  union {
    __IO uint16_t IF1CMSK;
    stc_can_if1cmsk_field_t IF1CMSK_f;
  };
  union {
    union {
      __IO uint32_t IF1MSK;
      stc_can_if1msk_field_t IF1MSK_f;
    };
    struct {
      __IO uint16_t IF1MSK1;
      union {
        __IO uint16_t IF1MSK2;
        stc_can_if1msk2_field_t IF1MSK2_f;
      };
    };
  };
  union {
    union {
      __IO uint32_t IF1ARB;
      stc_can_if1arb_field_t IF1ARB_f;
    };
    struct {
      __IO uint16_t IF1ARB1;
      union {
        __IO uint16_t IF1ARB2;
        stc_can_if1arb2_field_t IF1ARB2_f;
      };
    };
  };
  union {
    __IO uint16_t IF1MCTR;
    stc_can_if1mctr_field_t IF1MCTR_f;
  };
        uint8_t RESERVED1[2];
  union {
    __IO uint32_t IF1DTA_L;
    struct {
      __IO uint16_t IF1DTA1_L;
      __IO uint16_t IF1DTA2_L;
    };
  };
  union {
    __IO uint32_t IF1DTB_L;
    struct {
      __IO uint16_t IF1DTB1_L;
      __IO uint16_t IF1DTB2_L;
    };
  };
        uint8_t RESERVED2[8];
  union {
    __IO uint32_t IF1DTA_B;
    struct {
      __IO uint16_t IF1DTA2_B;
      __IO uint16_t IF1DTA1_B;
    };
  };
  union {
    __IO uint32_t IF1DTB_B;
    struct {
      __IO uint16_t IF1DTB2_B;
      __IO uint16_t IF1DTB1_B;
    };
  };
        uint8_t RESERVED3[8];
  union {
    __IO uint16_t IF2CREQ;
    stc_can_if2creq_field_t IF2CREQ_f;
  };
  union {
    __IO uint16_t IF2CMSK;
    stc_can_if2cmsk_field_t IF2CMSK_f;
  };
  union {
    union {
      __IO uint32_t IF2MSK;
      stc_can_if2msk_field_t IF2MSK_f;
    };
    struct {
      __IO uint16_t IF2MSK1;
      union {
        __IO uint16_t IF2MSK2;
        stc_can_if2msk2_field_t IF2MSK2_f;
      };
    };
  };
  union {
    union {
      __IO uint32_t IF2ARB;
      stc_can_if2arb_field_t IF2ARB_f;
    };
    struct {
      __IO uint16_t IF2ARB1;
      union {
        __IO uint16_t IF2ARB2;
        stc_can_if2arb2_field_t IF2ARB2_f;
      };
    };
  };
  union {
    __IO uint16_t IF2MCTR;
    stc_can_if2mctr_field_t IF2MCTR_f;
  };
        uint8_t RESERVED4[2];
  union {
    __IO uint32_t IF2DTA_L;
    struct {
      __IO uint16_t IF2DTA1_L;
      __IO uint16_t IF2DTA2_L;
    };
  };
  union {
    __IO uint32_t IF2DTB_L;
    struct {
      __IO uint16_t IF2DTB1_L;
      __IO uint16_t IF2DTB2_L;
    };
  };
        uint8_t RESERVED5[8];
  union {
    __IO uint32_t IF2DTA_B;
    struct {
      __IO uint16_t IF2DTA2_B;
      __IO uint16_t IF2DTA1_B;
    };
  };
  union {
    __IO uint32_t IF2DTB_B;
    struct {
      __IO uint16_t IF2DTB2_B;
      __IO uint16_t IF2DTB1_B;
    };
  };
        uint8_t RESERVED6[24];
  union {
    union {
      __IO uint32_t TREQR;
      stc_can_treqr_field_t TREQR_f;
    };
    struct {
      union {
        __IO uint16_t TREQR1;
        stc_can_treqr1_field_t TREQR1_f;
      };
      union {
        __IO uint16_t TREQR2;
        stc_can_treqr2_field_t TREQR2_f;
      };
    };
  };
        uint8_t RESERVED7[12];
  union {
    union {
      __IO uint32_t NEWDT;
      stc_can_newdt_field_t NEWDT_f;
    };
    struct {
      union {
        __IO uint16_t NEWDT1;
        stc_can_newdt1_field_t NEWDT1_f;
      };
      __IO uint16_t NEWDT2;
    };
  };
        uint8_t RESERVED8[12];
  union {
    union {
      __IO uint32_t INTPND;
      stc_can_intpnd_field_t INTPND_f;
    };
    struct {
      union {
        __IO uint16_t INTPND1;
        stc_can_intpnd1_field_t INTPND1_f;
      };
      union {
        __IO uint16_t INTPND2;
        stc_can_intpnd2_field_t INTPND2_f;
      };
    };
  };
        uint8_t RESERVED9[12];
  union {
    union {
      __IO uint32_t MSGVAL;
      stc_can_msgval_field_t MSGVAL_f;
    };
    struct {
      union {
        __IO uint16_t MSGVAL1;
        stc_can_msgval1_field_t MSGVAL1_f;
      };
      union {
        __IO uint16_t MSGVAL2;
        stc_can_msgval2_field_t MSGVAL2_f;
      };
    };
  };
}FM3_CAN_TypeDef;

/******************************************************************************
 * Peripheral memory map
 ******************************************************************************/
#define FM3_FLASH_BASE        (0x00000000UL)                 /* Flash Base                             */
#define FM3_PERIPH_BASE       (0x40000000UL)                 /* Peripheral  Base                       */
#define FM3_CM3_BASE          (0xE0100000UL)                 /* CM3 Private                            */

#define FM3_FLASH_IF_BASE     (FM3_PERIPH_BASE + 0x00000UL)  /* Flash interface registers              */
#define FM3_UNIQUE_ID_BASE    (FM3_PERIPH_BASE + 0x00200UL)  /* Unique ID registers                    */
#define FM3_CRG_BASE          (FM3_PERIPH_BASE + 0x10000UL)  /* Clock and reset registers              */
#define FM3_HWWDT_BASE        (FM3_PERIPH_BASE + 0x11000UL)  /* Hardware watchdog registers            */
#define FM3_SWWDT_BASE        (FM3_PERIPH_BASE + 0x12000UL)  /* Software watchdog registers            */
#define FM3_DTIM_BASE         (FM3_PERIPH_BASE + 0x15000UL)  /* Dual timer 1/2 registers               */
#define FM3_MFT0_FRT_BASE     (FM3_PERIPH_BASE + 0x20000UL)  /* Multifunction Timer unit 0 Free Running Timer registers */
#define FM3_MFT0_OCU_BASE     (FM3_PERIPH_BASE + 0x20000UL)  /* Multifunction Timer unit 0 Output Compare Unit registers */
#define FM3_MFT0_WFG_BASE     (FM3_PERIPH_BASE + 0x20000UL)  /* Multifunction Timer unit 0 Waveform Generator and Noise Canceler registers */
#define FM3_MFT0_ICU_BASE     (FM3_PERIPH_BASE + 0x20000UL)  /* Multifunction Timer unit 0 Input Capture Unit registers */
#define FM3_MFT0_ADCMP_BASE   (FM3_PERIPH_BASE + 0x20000UL)  /* Multifunction Timer unit 0 ADC Start Compare Unit registers */
#define FM3_MFT_PPG_BASE      (FM3_PERIPH_BASE + 0x24000UL)  /* Multifunction Timer PPG registers      */
#define FM3_BT0_PPG_BASE      (FM3_PERIPH_BASE + 0x25000UL)  /* Base Timer 0 PPG registers             */
#define FM3_BT0_PWM_BASE      (FM3_PERIPH_BASE + 0x25000UL)  /* Base Timer 0 PWM registers             */
#define FM3_BT0_RT_BASE       (FM3_PERIPH_BASE + 0x25000UL)  /* Base Timer 0 RT registers              */
#define FM3_BT0_PWC_BASE      (FM3_PERIPH_BASE + 0x25000UL)  /* Base Timer 0 PWC registers             */
#define FM3_BT1_PPG_BASE      (FM3_PERIPH_BASE + 0x25040UL)  /* Base Timer 1 PPG registers             */
#define FM3_BT1_PWM_BASE      (FM3_PERIPH_BASE + 0x25040UL)  /* Base Timer 1 PWM registers             */
#define FM3_BT1_RT_BASE       (FM3_PERIPH_BASE + 0x25040UL)  /* Base Timer 1 RT registers              */
#define FM3_BT1_PWC_BASE      (FM3_PERIPH_BASE + 0x25040UL)  /* Base Timer 1 PWC registers             */
#define FM3_BT2_PPG_BASE      (FM3_PERIPH_BASE + 0x25080UL)  /* Base Timer 2 PPG registers             */
#define FM3_BT2_PWM_BASE      (FM3_PERIPH_BASE + 0x25080UL)  /* Base Timer 2 PWM registers             */
#define FM3_BT2_RT_BASE       (FM3_PERIPH_BASE + 0x25080UL)  /* Base Timer 2 RT registers              */
#define FM3_BT2_PWC_BASE      (FM3_PERIPH_BASE + 0x25080UL)  /* Base Timer 2 PWC registers             */
#define FM3_BT3_PPG_BASE      (FM3_PERIPH_BASE + 0x250C0UL)  /* Base Timer 3 PPG registers             */
#define FM3_BT3_PWM_BASE      (FM3_PERIPH_BASE + 0x250C0UL)  /* Base Timer 3 PWM registers             */
#define FM3_BT3_RT_BASE       (FM3_PERIPH_BASE + 0x250C0UL)  /* Base Timer 3 RT registers              */
#define FM3_BT3_PWC_BASE      (FM3_PERIPH_BASE + 0x250C0UL)  /* Base Timer 3 PWC registers             */
#define FM3_BT4_PPG_BASE      (FM3_PERIPH_BASE + 0x25200UL)  /* Base Timer 4 PPG registers             */
#define FM3_BT4_PWM_BASE      (FM3_PERIPH_BASE + 0x25200UL)  /* Base Timer 4 PWM registers             */
#define FM3_BT4_RT_BASE       (FM3_PERIPH_BASE + 0x25200UL)  /* Base Timer 4 RT registers              */
#define FM3_BT4_PWC_BASE      (FM3_PERIPH_BASE + 0x25200UL)  /* Base Timer 4 PWC registers             */
#define FM3_BT5_PPG_BASE      (FM3_PERIPH_BASE + 0x25240UL)  /* Base Timer 5 PPG registers             */
#define FM3_BT5_PWM_BASE      (FM3_PERIPH_BASE + 0x25240UL)  /* Base Timer 5 PWM registers             */
#define FM3_BT5_RT_BASE       (FM3_PERIPH_BASE + 0x25240UL)  /* Base Timer 5 RT registers              */
#define FM3_BT5_PWC_BASE      (FM3_PERIPH_BASE + 0x25240UL)  /* Base Timer 5 PWC registers             */
#define FM3_BT6_PPG_BASE      (FM3_PERIPH_BASE + 0x25280UL)  /* Base Timer 6 PPG registers             */
#define FM3_BT6_PWM_BASE      (FM3_PERIPH_BASE + 0x25280UL)  /* Base Timer 6 PWM registers             */
#define FM3_BT6_RT_BASE       (FM3_PERIPH_BASE + 0x25280UL)  /* Base Timer 6 RT registers              */
#define FM3_BT6_PWC_BASE      (FM3_PERIPH_BASE + 0x25280UL)  /* Base Timer 6 PWC registers             */
#define FM3_BT7_PPG_BASE      (FM3_PERIPH_BASE + 0x252C0UL)  /* Base Timer 7 PPG registers             */
#define FM3_BT7_PWM_BASE      (FM3_PERIPH_BASE + 0x252C0UL)  /* Base Timer 7 PWM registers             */
#define FM3_BT7_RT_BASE       (FM3_PERIPH_BASE + 0x252C0UL)  /* Base Timer 7 RT registers              */
#define FM3_BT7_PWC_BASE      (FM3_PERIPH_BASE + 0x252C0UL)  /* Base Timer 7 PWC registers             */
#define FM3_BTIOSEL03_BASE    (FM3_PERIPH_BASE + 0x25100UL)  /* Base Timer I/O selector channel 0 - channel 3 registers */
#define FM3_BTIOSEL47_BASE    (FM3_PERIPH_BASE + 0x25300UL)  /* Base Timer I/O selector channel 4 - channel 7 registers */
#define FM3_SBSSR_BASE        (FM3_PERIPH_BASE + 0x25FFCUL)  /* Software based Simulation Startup (Base Timer) register */
#define FM3_QPRC0_BASE        (FM3_PERIPH_BASE + 0x26000UL)  /* Quad position and revolution counter channel 0 registers */
#define FM3_ADC0_BASE         (FM3_PERIPH_BASE + 0x27000UL)  /* 12-bit ADC unit 0 registers            */
#define FM3_ADC1_BASE         (FM3_PERIPH_BASE + 0x27100UL)  /* 12-bit ADC unit 1 registers            */
#define FM3_DAC_BASE          (FM3_PERIPH_BASE + 0x28000UL)  /* 10-bit DAC registers                   */
#define FM3_CRTRIM_BASE       (FM3_PERIPH_BASE + 0x2E000UL)  /* CR trimming registers                  */
#define FM3_EXTI_BASE         (FM3_PERIPH_BASE + 0x30000UL)  /* External interrupt registers           */
#define FM3_INTREQ_BASE       (FM3_PERIPH_BASE + 0x31000UL)  /* Interrupt request read registers       */
#define FM3_GPIO_BASE         (FM3_PERIPH_BASE + 0x33000UL)  /* General purpose I/O registers          */
#define FM3_LVD_BASE          (FM3_PERIPH_BASE + 0x35000UL)  /* Low voltage detection registers        */
#define FM3_USBCLK_BASE       (FM3_PERIPH_BASE + 0x36000UL)  /* USB clock registers                    */
#define FM3_CANPRES_BASE      (FM3_PERIPH_BASE + 0x37000UL)  /* CAN prescaler register                 */
#define FM3_DS_BASE           (FM3_PERIPH_BASE + 0x35100UL)  /* Deep stanby mode control registers     */
#define FM3_MFS0_UART_BASE    (FM3_PERIPH_BASE + 0x38000UL)  /* UART asynchronous channel 0 registers  */
#define FM3_MFS0_CSIO_BASE    (FM3_PERIPH_BASE + 0x38000UL)  /* UART synchronous channel 0 registers   */
#define FM3_MFS0_LIN_BASE     (FM3_PERIPH_BASE + 0x38000UL)  /* LIN channel 0 registers                */
#define FM3_MFS0_I2C_BASE     (FM3_PERIPH_BASE + 0x38000UL)  /* I2C channel 0 registers                */
#define FM3_MFS1_UART_BASE    (FM3_PERIPH_BASE + 0x38100UL)  /* UART asynchronous channel 1 registers  */
#define FM3_MFS1_CSIO_BASE    (FM3_PERIPH_BASE + 0x38100UL)  /* UART synchronous channel 1 registers   */
#define FM3_MFS1_LIN_BASE     (FM3_PERIPH_BASE + 0x38100UL)  /* LIN channel 1 registers                */
#define FM3_MFS1_I2C_BASE     (FM3_PERIPH_BASE + 0x38100UL)  /* I2C channel 1 registers                */
#define FM3_MFS3_UART_BASE    (FM3_PERIPH_BASE + 0x38300UL)  /* UART asynchronous channel 3 registers  */
#define FM3_MFS3_CSIO_BASE    (FM3_PERIPH_BASE + 0x38300UL)  /* UART synchronous channel 3 registers   */
#define FM3_MFS3_LIN_BASE     (FM3_PERIPH_BASE + 0x38300UL)  /* LIN channel 3 registers                */
#define FM3_MFS3_I2C_BASE     (FM3_PERIPH_BASE + 0x38300UL)  /* I2C channel 3 registers                */
#define FM3_MFS5_UART_BASE    (FM3_PERIPH_BASE + 0x38500UL)  /* UART asynchronous channel 5 registers  */
#define FM3_MFS5_CSIO_BASE    (FM3_PERIPH_BASE + 0x38500UL)  /* UART synchronous channel 5 registers   */
#define FM3_MFS5_LIN_BASE     (FM3_PERIPH_BASE + 0x38500UL)  /* LIN channel 5 registers                */
#define FM3_MFS5_I2C_BASE     (FM3_PERIPH_BASE + 0x38500UL)  /* I2C channel 5 registers                */
#define FM3_CRC_BASE          (FM3_PERIPH_BASE + 0x39000UL)  /* CRC registers                          */
#define FM3_WC_BASE           (FM3_PERIPH_BASE + 0x3A000UL)  /* Watch counter registers                */
#define FM3_RTC_BASE          (FM3_PERIPH_BASE + 0x3B000UL)  /* Realtime clock  registers              */
#define FM3_USB0_BASE         (FM3_PERIPH_BASE + 0x42100UL)  /* USB channel 0 registers                */
#define FM3_DMAC_BASE         (FM3_PERIPH_BASE + 0x60000UL)  /* DMA controller                         */
#define FM3_CAN1_BASE         (FM3_PERIPH_BASE + 0x63000UL)  /* CAN channel 1 registers                */

/******************************************************************************
 * Peripheral declaration
 ******************************************************************************/
#define FM3_FLASH_IF    ((FM3_FLASH_IF_TypeDef *)FM3_FLASH_IF_BASE)
#define FM3_UNIQUE_ID   ((FM3_UNIQUE_ID_TypeDef *)FM3_UNIQUE_ID_BASE)
#define FM3_CRG         ((FM3_CRG_TypeDef *)FM3_CRG_BASE)
#define FM3_HWWDT       ((FM3_HWWDT_TypeDef *)FM3_HWWDT_BASE)
#define FM3_SWWDT       ((FM3_SWWDT_TypeDef *)FM3_SWWDT_BASE)
#define FM3_DTIM        ((FM3_DTIM_TypeDef *)FM3_DTIM_BASE)
#define FM3_MFT0_FRT    ((FM3_MFT_FRT_TypeDef *)FM3_MFT0_FRT_BASE)
#define FM3_MFT0_OCU    ((FM3_MFT_OCU_TypeDef *)FM3_MFT0_OCU_BASE)
#define FM3_MFT0_WFG    ((FM3_MFT_WFG_TypeDef *)FM3_MFT0_WFG_BASE)
#define FM3_MFT0_ICU    ((FM3_MFT_ICU_TypeDef *)FM3_MFT0_ICU_BASE)
#define FM3_MFT0_ADCMP  ((FM3_MFT_ADCMP_TypeDef *)FM3_MFT0_ADCMP_BASE)
#define FM3_MFT_PPG     ((FM3_MFT_PPG_TypeDef *)FM3_MFT_PPG_BASE)
#define FM3_BT0_PPG     ((FM3_BT_PPG_TypeDef *)FM3_BT0_PPG_BASE)
#define FM3_BT0_PWM     ((FM3_BT_PWM_TypeDef *)FM3_BT0_PWM_BASE)
#define FM3_BT0_RT      ((FM3_BT_RT_TypeDef *)FM3_BT0_RT_BASE)
#define FM3_BT0_PWC     ((FM3_BT_PWC_TypeDef *)FM3_BT0_PWC_BASE)
#define FM3_BT1_PPG     ((FM3_BT_PPG_TypeDef *)FM3_BT1_PPG_BASE)
#define FM3_BT1_PWM     ((FM3_BT_PWM_TypeDef *)FM3_BT1_PWM_BASE)
#define FM3_BT1_RT      ((FM3_BT_RT_TypeDef *)FM3_BT1_RT_BASE)
#define FM3_BT1_PWC     ((FM3_BT_PWC_TypeDef *)FM3_BT1_PWC_BASE)
#define FM3_BT2_PPG     ((FM3_BT_PPG_TypeDef *)FM3_BT2_PPG_BASE)
#define FM3_BT2_PWM     ((FM3_BT_PWM_TypeDef *)FM3_BT2_PWM_BASE)
#define FM3_BT2_RT      ((FM3_BT_RT_TypeDef *)FM3_BT2_RT_BASE)
#define FM3_BT2_PWC     ((FM3_BT_PWC_TypeDef *)FM3_BT2_PWC_BASE)
#define FM3_BT3_PPG     ((FM3_BT_PPG_TypeDef *)FM3_BT3_PPG_BASE)
#define FM3_BT3_PWM     ((FM3_BT_PWM_TypeDef *)FM3_BT3_PWM_BASE)
#define FM3_BT3_RT      ((FM3_BT_RT_TypeDef *)FM3_BT3_RT_BASE)
#define FM3_BT3_PWC     ((FM3_BT_PWC_TypeDef *)FM3_BT3_PWC_BASE)
#define FM3_BT4_PPG     ((FM3_BT_PPG_TypeDef *)FM3_BT4_PPG_BASE)
#define FM3_BT4_PWM     ((FM3_BT_PWM_TypeDef *)FM3_BT4_PWM_BASE)
#define FM3_BT4_RT      ((FM3_BT_RT_TypeDef *)FM3_BT4_RT_BASE)
#define FM3_BT4_PWC     ((FM3_BT_PWC_TypeDef *)FM3_BT4_PWC_BASE)
#define FM3_BT5_PPG     ((FM3_BT_PPG_TypeDef *)FM3_BT5_PPG_BASE)
#define FM3_BT5_PWM     ((FM3_BT_PWM_TypeDef *)FM3_BT5_PWM_BASE)
#define FM3_BT5_RT      ((FM3_BT_RT_TypeDef *)FM3_BT5_RT_BASE)
#define FM3_BT5_PWC     ((FM3_BT_PWC_TypeDef *)FM3_BT5_PWC_BASE)
#define FM3_BT6_PPG     ((FM3_BT_PPG_TypeDef *)FM3_BT6_PPG_BASE)
#define FM3_BT6_PWM     ((FM3_BT_PWM_TypeDef *)FM3_BT6_PWM_BASE)
#define FM3_BT6_RT      ((FM3_BT_RT_TypeDef *)FM3_BT6_RT_BASE)
#define FM3_BT6_PWC     ((FM3_BT_PWC_TypeDef *)FM3_BT6_PWC_BASE)
#define FM3_BT7_PPG     ((FM3_BT_PPG_TypeDef *)FM3_BT7_PPG_BASE)
#define FM3_BT7_PWM     ((FM3_BT_PWM_TypeDef *)FM3_BT7_PWM_BASE)
#define FM3_BT7_RT      ((FM3_BT_RT_TypeDef *)FM3_BT7_RT_BASE)
#define FM3_BT7_PWC     ((FM3_BT_PWC_TypeDef *)FM3_BT7_PWC_BASE)
#define FM3_BTIOSEL03   ((FM3_BTIOSEL03_TypeDef *)FM3_BTIOSEL03_BASE)
#define FM3_BTIOSEL47   ((FM3_BTIOSEL47_TypeDef *)FM3_BTIOSEL47_BASE)
#define FM3_SBSSR       ((FM3_SBSSR_TypeDef *)FM3_SBSSR_BASE)
#define FM3_QPRC0       ((FM3_QPRC_TypeDef *)FM3_QPRC0_BASE)
#define FM3_ADC0        ((FM3_ADC_TypeDef *)FM3_ADC0_BASE)
#define FM3_ADC1        ((FM3_ADC_TypeDef *)FM3_ADC1_BASE)
#define FM3_DAC         ((FM3_DAC_TypeDef *)FM3_DAC_BASE)
#define FM3_CRTRIM      ((FM3_CRTRIM_TypeDef *)FM3_CRTRIM_BASE)
#define FM3_EXTI        ((FM3_EXTI_TypeDef *)FM3_EXTI_BASE)
#define FM3_INTREQ      ((FM3_INTREQ_TypeDef *)FM3_INTREQ_BASE)
#define FM3_GPIO        ((FM3_GPIO_TypeDef *)FM3_GPIO_BASE)
#define FM3_LVD         ((FM3_LVD_TypeDef *)FM3_LVD_BASE)
#define FM3_USBCLK      ((FM3_USBCLK_TypeDef *)FM3_USBCLK_BASE)
#define FM3_CANPRES     ((FM3_CANPRE_TypeDef *)FM3_CANPRES_BASE)
#define FM3_DS          ((FM3_DS_TypeDef *)FM3_DS_BASE)
#define FM3_MFS0_UART   ((FM3_MFS_UART_TypeDef *)FM3_MFS0_UART_BASE)
#define FM3_MFS0_CSIO   ((FM3_MFS_CSIO_TypeDef *)FM3_MFS0_CSIO_BASE)
#define FM3_MFS0_LIN    ((FM3_MFS_LIN_TypeDef *)FM3_MFS0_LIN_BASE)
#define FM3_MFS0_I2C    ((FM3_MFS_I2C_TypeDef *)FM3_MFS0_I2C_BASE)
#define FM3_MFS1_UART   ((FM3_MFS_UART_TypeDef *)FM3_MFS1_UART_BASE)
#define FM3_MFS1_CSIO   ((FM3_MFS_CSIO_TypeDef *)FM3_MFS1_CSIO_BASE)
#define FM3_MFS1_LIN    ((FM3_MFS_LIN_TypeDef *)FM3_MFS1_LIN_BASE)
#define FM3_MFS1_I2C    ((FM3_MFS_I2C_TypeDef *)FM3_MFS1_I2C_BASE)
#define FM3_MFS3_UART   ((FM3_MFS_UART_TypeDef *)FM3_MFS3_UART_BASE)
#define FM3_MFS3_CSIO   ((FM3_MFS_CSIO_TypeDef *)FM3_MFS3_CSIO_BASE)
#define FM3_MFS3_LIN    ((FM3_MFS_LIN_TypeDef *)FM3_MFS3_LIN_BASE)
#define FM3_MFS3_I2C    ((FM3_MFS_I2C_TypeDef *)FM3_MFS3_I2C_BASE)
#define FM3_MFS5_UART   ((FM3_MFS_UART_TypeDef *)FM3_MFS5_UART_BASE)
#define FM3_MFS5_CSIO   ((FM3_MFS_CSIO_TypeDef *)FM3_MFS5_CSIO_BASE)
#define FM3_MFS5_LIN    ((FM3_MFS_LIN_TypeDef *)FM3_MFS5_LIN_BASE)
#define FM3_MFS5_I2C    ((FM3_MFS_I2C_TypeDef *)FM3_MFS5_I2C_BASE)
#define FM3_CRC         ((FM3_CRC_TypeDef *)FM3_CRC_BASE)
#define FM3_WC          ((FM3_WC_TypeDef *)FM3_WC_BASE)
#define FM3_RTC         ((FM3_RTC_TypeDef *)FM3_RTC_BASE)
#define FM3_USB0        ((FM3_USB_TypeDef *)FM3_USB0_BASE)
#define FM3_DMAC        ((FM3_DMAC_TypeDef *)FM3_DMAC_BASE)
#define FM3_CAN1        ((FM3_CAN_TypeDef *)FM3_CAN1_BASE)

/******************************************************************************
 * Peripheral Bit Band Alias declaration
 ******************************************************************************/

/* Flash interface registers */
#define bFM3_FLASH_IF_FRWTR_RWT0               *((volatile unsigned int*)(0x42000080UL))
#define bFM3_FLASH_IF_FRWTR_RWT1               *((volatile unsigned int*)(0x42000084UL))
#define bFM3_FLASH_IF_FSTR_RDY                 *((volatile unsigned int*)(0x42000100UL))
#define bFM3_FLASH_IF_FSTR_HNG                 *((volatile unsigned int*)(0x42000104UL))
#define bFM3_FLASH_IF_FSTR_CERS                *((volatile unsigned int*)(0x42000108UL))
#define bFM3_FLASH_IF_FSTR_ESPS                *((volatile unsigned int*)(0x4200010CUL))
#define bFM3_FLASH_IF_FSTR_SERS                *((volatile unsigned int*)(0x42000110UL))
#define bFM3_FLASH_IF_FSTR_PGMS                *((volatile unsigned int*)(0x42000114UL))
#define bFM3_FLASH_IF_FICR_RDYIE               *((volatile unsigned int*)(0x42000400UL))
#define bFM3_FLASH_IF_FICR_HANGIE              *((volatile unsigned int*)(0x42000404UL))
#define bFM3_FLASH_IF_FISR_RDYIF               *((volatile unsigned int*)(0x42000480UL))
#define bFM3_FLASH_IF_FISR_HANGIF              *((volatile unsigned int*)(0x42000484UL))
#define bFM3_FLASH_IF_FICLR_RDYC               *((volatile unsigned int*)(0x42000500UL))
#define bFM3_FLASH_IF_FICLR_HANGC              *((volatile unsigned int*)(0x42000504UL))
#define bFM3_FLASH_IF_CRTRMM_TRMM0             *((volatile unsigned int*)(0x42002000UL))
#define bFM3_FLASH_IF_CRTRMM_TRMM1             *((volatile unsigned int*)(0x42002004UL))
#define bFM3_FLASH_IF_CRTRMM_TRMM2             *((volatile unsigned int*)(0x42002008UL))
#define bFM3_FLASH_IF_CRTRMM_TRMM3             *((volatile unsigned int*)(0x4200200CUL))
#define bFM3_FLASH_IF_CRTRMM_TRMM4             *((volatile unsigned int*)(0x42002010UL))
#define bFM3_FLASH_IF_CRTRMM_TRMM5             *((volatile unsigned int*)(0x42002014UL))
#define bFM3_FLASH_IF_CRTRMM_TRMM6             *((volatile unsigned int*)(0x42002018UL))
#define bFM3_FLASH_IF_CRTRMM_TRMM7             *((volatile unsigned int*)(0x4200201CUL))
#define bFM3_FLASH_IF_CRTRMM_TRMM8             *((volatile unsigned int*)(0x42002020UL))
#define bFM3_FLASH_IF_CRTRMM_TRMM9             *((volatile unsigned int*)(0x42002024UL))

/* Unique ID registers */
#define bFM3_UNIQUE_ID_UIDR0_UID0              *((volatile unsigned int*)(0x42004010UL))
#define bFM3_UNIQUE_ID_UIDR0_UID1              *((volatile unsigned int*)(0x42004014UL))
#define bFM3_UNIQUE_ID_UIDR0_UID2              *((volatile unsigned int*)(0x42004018UL))
#define bFM3_UNIQUE_ID_UIDR0_UID3              *((volatile unsigned int*)(0x4200401CUL))
#define bFM3_UNIQUE_ID_UIDR0_UID4              *((volatile unsigned int*)(0x42004020UL))
#define bFM3_UNIQUE_ID_UIDR0_UID5              *((volatile unsigned int*)(0x42004024UL))
#define bFM3_UNIQUE_ID_UIDR0_UID6              *((volatile unsigned int*)(0x42004028UL))
#define bFM3_UNIQUE_ID_UIDR0_UID7              *((volatile unsigned int*)(0x4200402CUL))
#define bFM3_UNIQUE_ID_UIDR0_UID8              *((volatile unsigned int*)(0x42004030UL))
#define bFM3_UNIQUE_ID_UIDR0_UID9              *((volatile unsigned int*)(0x42004034UL))
#define bFM3_UNIQUE_ID_UIDR0_UID10             *((volatile unsigned int*)(0x42004038UL))
#define bFM3_UNIQUE_ID_UIDR0_UID11             *((volatile unsigned int*)(0x4200403CUL))
#define bFM3_UNIQUE_ID_UIDR0_UID12             *((volatile unsigned int*)(0x42004040UL))
#define bFM3_UNIQUE_ID_UIDR0_UID13             *((volatile unsigned int*)(0x42004044UL))
#define bFM3_UNIQUE_ID_UIDR0_UID14             *((volatile unsigned int*)(0x42004048UL))
#define bFM3_UNIQUE_ID_UIDR0_UID15             *((volatile unsigned int*)(0x4200404CUL))
#define bFM3_UNIQUE_ID_UIDR0_UID16             *((volatile unsigned int*)(0x42004050UL))
#define bFM3_UNIQUE_ID_UIDR0_UID17             *((volatile unsigned int*)(0x42004054UL))
#define bFM3_UNIQUE_ID_UIDR0_UID18             *((volatile unsigned int*)(0x42004058UL))
#define bFM3_UNIQUE_ID_UIDR0_UID19             *((volatile unsigned int*)(0x4200405CUL))
#define bFM3_UNIQUE_ID_UIDR0_UID20             *((volatile unsigned int*)(0x42004060UL))
#define bFM3_UNIQUE_ID_UIDR0_UID21             *((volatile unsigned int*)(0x42004064UL))
#define bFM3_UNIQUE_ID_UIDR0_UID22             *((volatile unsigned int*)(0x42004068UL))
#define bFM3_UNIQUE_ID_UIDR0_UID23             *((volatile unsigned int*)(0x4200406CUL))
#define bFM3_UNIQUE_ID_UIDR0_UID24             *((volatile unsigned int*)(0x42004070UL))
#define bFM3_UNIQUE_ID_UIDR0_UID25             *((volatile unsigned int*)(0x42004074UL))
#define bFM3_UNIQUE_ID_UIDR0_UID26             *((volatile unsigned int*)(0x42004078UL))
#define bFM3_UNIQUE_ID_UIDR0_UID27             *((volatile unsigned int*)(0x4200407CUL))
#define bFM3_UNIQUE_ID_UIDR1_UID28             *((volatile unsigned int*)(0x42004080UL))
#define bFM3_UNIQUE_ID_UIDR1_UID29             *((volatile unsigned int*)(0x42004084UL))
#define bFM3_UNIQUE_ID_UIDR1_UID30             *((volatile unsigned int*)(0x42004088UL))
#define bFM3_UNIQUE_ID_UIDR1_UID31             *((volatile unsigned int*)(0x4200408CUL))
#define bFM3_UNIQUE_ID_UIDR1_UID32             *((volatile unsigned int*)(0x42004090UL))
#define bFM3_UNIQUE_ID_UIDR1_UID33             *((volatile unsigned int*)(0x42004094UL))
#define bFM3_UNIQUE_ID_UIDR1_UID34             *((volatile unsigned int*)(0x42004098UL))
#define bFM3_UNIQUE_ID_UIDR1_UID35             *((volatile unsigned int*)(0x4200409CUL))
#define bFM3_UNIQUE_ID_UIDR1_UID36             *((volatile unsigned int*)(0x420040A0UL))
#define bFM3_UNIQUE_ID_UIDR1_UID37             *((volatile unsigned int*)(0x420040A4UL))
#define bFM3_UNIQUE_ID_UIDR1_UID38             *((volatile unsigned int*)(0x420040A8UL))
#define bFM3_UNIQUE_ID_UIDR1_UID39             *((volatile unsigned int*)(0x420040ACUL))
#define bFM3_UNIQUE_ID_UIDR1_UID40             *((volatile unsigned int*)(0x420040B0UL))

/* Clock and reset registers */
#define bFM3_CRG_SCM_CTL_MOSCE                 *((volatile unsigned int*)(0x42200004UL))
#define bFM3_CRG_SCM_CTL_SOSCE                 *((volatile unsigned int*)(0x4220000CUL))
#define bFM3_CRG_SCM_CTL_PLLE                  *((volatile unsigned int*)(0x42200010UL))
#define bFM3_CRG_SCM_CTL_RCS0                  *((volatile unsigned int*)(0x42200014UL))
#define bFM3_CRG_SCM_CTL_RCS1                  *((volatile unsigned int*)(0x42200018UL))
#define bFM3_CRG_SCM_CTL_RCS2                  *((volatile unsigned int*)(0x4220001CUL))
#define bFM3_CRG_SCM_STR_MORDY                 *((volatile unsigned int*)(0x42200084UL))
#define bFM3_CRG_SCM_STR_SORDY                 *((volatile unsigned int*)(0x4220008CUL))
#define bFM3_CRG_SCM_STR_PLRDY                 *((volatile unsigned int*)(0x42200090UL))
#define bFM3_CRG_SCM_STR_RCM0                  *((volatile unsigned int*)(0x42200094UL))
#define bFM3_CRG_SCM_STR_RCM1                  *((volatile unsigned int*)(0x42200098UL))
#define bFM3_CRG_SCM_STR_RCM2                  *((volatile unsigned int*)(0x4220009CUL))
#define bFM3_CRG_STB_CTL_STM0                  *((volatile unsigned int*)(0x42200100UL))
#define bFM3_CRG_STB_CTL_STM1                  *((volatile unsigned int*)(0x42200104UL))
#define bFM3_CRG_STB_CTL_DSTM                  *((volatile unsigned int*)(0x42200108UL))
#define bFM3_CRG_STB_CTL_SPL                   *((volatile unsigned int*)(0x42200110UL))
#define bFM3_CRG_RST_STR_PONR                  *((volatile unsigned int*)(0x42200180UL))
#define bFM3_CRG_RST_STR_INITX                 *((volatile unsigned int*)(0x42200184UL))
#define bFM3_CRG_RST_STR_SWDT                  *((volatile unsigned int*)(0x42200190UL))
#define bFM3_CRG_RST_STR_HWDT                  *((volatile unsigned int*)(0x42200194UL))
#define bFM3_CRG_RST_STR_CSVR                  *((volatile unsigned int*)(0x42200198UL))
#define bFM3_CRG_RST_STR_FCSR                  *((volatile unsigned int*)(0x4220019CUL))
#define bFM3_CRG_RST_STR_SRST                  *((volatile unsigned int*)(0x422001A0UL))
#define bFM3_CRG_BSC_PSR_BSR0                  *((volatile unsigned int*)(0x42200200UL))
#define bFM3_CRG_BSC_PSR_BSR1                  *((volatile unsigned int*)(0x42200204UL))
#define bFM3_CRG_BSC_PSR_BSR2                  *((volatile unsigned int*)(0x42200208UL))
#define bFM3_CRG_APBC0_PSR_APBC00              *((volatile unsigned int*)(0x42200280UL))
#define bFM3_CRG_APBC0_PSR_APBC01              *((volatile unsigned int*)(0x42200284UL))
#define bFM3_CRG_APBC1_PSR_APBC10              *((volatile unsigned int*)(0x42200300UL))
#define bFM3_CRG_APBC1_PSR_APBC11              *((volatile unsigned int*)(0x42200304UL))
#define bFM3_CRG_APBC1_PSR_APBC1RST            *((volatile unsigned int*)(0x42200310UL))
#define bFM3_CRG_APBC1_PSR_APBC1EN             *((volatile unsigned int*)(0x4220031CUL))
#define bFM3_CRG_APBC2_PSR_APBC20              *((volatile unsigned int*)(0x42200380UL))
#define bFM3_CRG_APBC2_PSR_APBC21              *((volatile unsigned int*)(0x42200384UL))
#define bFM3_CRG_APBC2_PSR_APBC2RST            *((volatile unsigned int*)(0x42200390UL))
#define bFM3_CRG_APBC2_PSR_APBC2EN             *((volatile unsigned int*)(0x4220039CUL))
#define bFM3_CRG_SWC_PSR_SWDS0                 *((volatile unsigned int*)(0x42200400UL))
#define bFM3_CRG_SWC_PSR_SWDS1                 *((volatile unsigned int*)(0x42200404UL))
#define bFM3_CRG_SWC_PSR_TESTB                 *((volatile unsigned int*)(0x4220041CUL))
#define bFM3_CRG_TTC_PSR_TTC0                  *((volatile unsigned int*)(0x42200500UL))
#define bFM3_CRG_TTC_PSR_TTC1                  *((volatile unsigned int*)(0x42200504UL))
#define bFM3_CRG_CSW_TMR_MOWT0                 *((volatile unsigned int*)(0x42200600UL))
#define bFM3_CRG_CSW_TMR_MOWT1                 *((volatile unsigned int*)(0x42200604UL))
#define bFM3_CRG_CSW_TMR_MOWT2                 *((volatile unsigned int*)(0x42200608UL))
#define bFM3_CRG_CSW_TMR_MOWT3                 *((volatile unsigned int*)(0x4220060CUL))
#define bFM3_CRG_CSW_TMR_SOWT0                 *((volatile unsigned int*)(0x42200610UL))
#define bFM3_CRG_CSW_TMR_SOWT1                 *((volatile unsigned int*)(0x42200614UL))
#define bFM3_CRG_CSW_TMR_SOWT2                 *((volatile unsigned int*)(0x42200618UL))
#define bFM3_CRG_PSW_TMR_POWT0                 *((volatile unsigned int*)(0x42200680UL))
#define bFM3_CRG_PSW_TMR_POWT1                 *((volatile unsigned int*)(0x42200684UL))
#define bFM3_CRG_PSW_TMR_POWT2                 *((volatile unsigned int*)(0x42200688UL))
#define bFM3_CRG_PSW_TMR_PINC                  *((volatile unsigned int*)(0x42200690UL))
#define bFM3_CRG_PLL_CTL1_PLLM0                *((volatile unsigned int*)(0x42200700UL))
#define bFM3_CRG_PLL_CTL1_PLLM1                *((volatile unsigned int*)(0x42200704UL))
#define bFM3_CRG_PLL_CTL1_PLLM2                *((volatile unsigned int*)(0x42200708UL))
#define bFM3_CRG_PLL_CTL1_PLLM3                *((volatile unsigned int*)(0x4220070CUL))
#define bFM3_CRG_PLL_CTL1_PLLK0                *((volatile unsigned int*)(0x42200710UL))
#define bFM3_CRG_PLL_CTL1_PLLK1                *((volatile unsigned int*)(0x42200714UL))
#define bFM3_CRG_PLL_CTL1_PLLK2                *((volatile unsigned int*)(0x42200718UL))
#define bFM3_CRG_PLL_CTL1_PLLK3                *((volatile unsigned int*)(0x4220071CUL))
#define bFM3_CRG_PLL_CTL2_PLLN0                *((volatile unsigned int*)(0x42200780UL))
#define bFM3_CRG_PLL_CTL2_PLLN1                *((volatile unsigned int*)(0x42200784UL))
#define bFM3_CRG_PLL_CTL2_PLLN2                *((volatile unsigned int*)(0x42200788UL))
#define bFM3_CRG_PLL_CTL2_PLLN3                *((volatile unsigned int*)(0x4220078CUL))
#define bFM3_CRG_PLL_CTL2_PLLN4                *((volatile unsigned int*)(0x42200790UL))
#define bFM3_CRG_PLL_CTL2_PLLN5                *((volatile unsigned int*)(0x42200794UL))
#define bFM3_CRG_CSV_CTL_MCSVE                 *((volatile unsigned int*)(0x42200800UL))
#define bFM3_CRG_CSV_CTL_SCSVE                 *((volatile unsigned int*)(0x42200804UL))
#define bFM3_CRG_CSV_CTL_FCSDE                 *((volatile unsigned int*)(0x42200820UL))
#define bFM3_CRG_CSV_CTL_FCSRE                 *((volatile unsigned int*)(0x42200824UL))
#define bFM3_CRG_CSV_CTL_FCD0                  *((volatile unsigned int*)(0x42200830UL))
#define bFM3_CRG_CSV_CTL_FCD1                  *((volatile unsigned int*)(0x42200834UL))
#define bFM3_CRG_CSV_CTL_FCD2                  *((volatile unsigned int*)(0x42200838UL))
#define bFM3_CRG_CSV_STR_MCMF                  *((volatile unsigned int*)(0x42200880UL))
#define bFM3_CRG_CSV_STR_SCMF                  *((volatile unsigned int*)(0x42200884UL))
#define bFM3_CRG_DBWDT_CTL_DPSWBE              *((volatile unsigned int*)(0x42200A94UL))
#define bFM3_CRG_DBWDT_CTL_DPHWBE              *((volatile unsigned int*)(0x42200A9CUL))
#define bFM3_CRG_INT_ENR_MCSE                  *((volatile unsigned int*)(0x42200C00UL))
#define bFM3_CRG_INT_ENR_SCSE                  *((volatile unsigned int*)(0x42200C04UL))
#define bFM3_CRG_INT_ENR_PCSE                  *((volatile unsigned int*)(0x42200C08UL))
#define bFM3_CRG_INT_ENR_FCSE                  *((volatile unsigned int*)(0x42200C14UL))
#define bFM3_CRG_INT_STR_MCSI                  *((volatile unsigned int*)(0x42200C80UL))
#define bFM3_CRG_INT_STR_SCSI                  *((volatile unsigned int*)(0x42200C84UL))
#define bFM3_CRG_INT_STR_PCSI                  *((volatile unsigned int*)(0x42200C88UL))
#define bFM3_CRG_INT_STR_FCSI                  *((volatile unsigned int*)(0x42200C94UL))
#define bFM3_CRG_INT_CLR_MCSC                  *((volatile unsigned int*)(0x42200D00UL))
#define bFM3_CRG_INT_CLR_SCSC                  *((volatile unsigned int*)(0x42200D04UL))
#define bFM3_CRG_INT_CLR_PCSC                  *((volatile unsigned int*)(0x42200D08UL))
#define bFM3_CRG_INT_CLR_FCSC                  *((volatile unsigned int*)(0x42200D14UL))

/* Hardware watchdog registers */
#define bFM3_HWWDT_WDG_CTL_INTEN               *((volatile unsigned int*)(0x42220100UL))
#define bFM3_HWWDT_WDG_CTL_RESEN               *((volatile unsigned int*)(0x42220104UL))
#define bFM3_HWWDT_WDG_RIS_RIS                 *((volatile unsigned int*)(0x42220200UL))

/* Software watchdog registers */
#define bFM3_SWWDT_WDOGCONTROL_INTEN           *((volatile unsigned int*)(0x42240100UL))
#define bFM3_SWWDT_WDOGCONTROL_RESEN           *((volatile unsigned int*)(0x42240104UL))
#define bFM3_SWWDT_WDOGRIS_RIS                 *((volatile unsigned int*)(0x42240200UL))

/* Dual timer 1/2 registers */
#define bFM3_DTIM_TIMER1CONTROL_ONESHOT        *((volatile unsigned int*)(0x422A0100UL))
#define bFM3_DTIM_TIMER1CONTROL_TIMERSIZE      *((volatile unsigned int*)(0x422A0104UL))
#define bFM3_DTIM_TIMER1CONTROL_TIMERPRE0      *((volatile unsigned int*)(0x422A0108UL))
#define bFM3_DTIM_TIMER1CONTROL_TIMERPRE1      *((volatile unsigned int*)(0x422A010CUL))
#define bFM3_DTIM_TIMER1CONTROL_INTENABLE      *((volatile unsigned int*)(0x422A0114UL))
#define bFM3_DTIM_TIMER1CONTROL_TIMERMODE      *((volatile unsigned int*)(0x422A0118UL))
#define bFM3_DTIM_TIMER1CONTROL_TIMEREN        *((volatile unsigned int*)(0x422A011CUL))
#define bFM3_DTIM_TIMER1RIS_TIMER1RIS          *((volatile unsigned int*)(0x422A0200UL))
#define bFM3_DTIM_TIMER1MIS_TIMER1MIS          *((volatile unsigned int*)(0x422A0280UL))
#define bFM3_DTIM_TIMER2CONTROL_ONESHOT        *((volatile unsigned int*)(0x422A0500UL))
#define bFM3_DTIM_TIMER2CONTROL_TIMERSIZE      *((volatile unsigned int*)(0x422A0504UL))
#define bFM3_DTIM_TIMER2CONTROL_TIMERPRE0      *((volatile unsigned int*)(0x422A0508UL))
#define bFM3_DTIM_TIMER2CONTROL_TIMERPRE1      *((volatile unsigned int*)(0x422A050CUL))
#define bFM3_DTIM_TIMER2CONTROL_INTENABLE      *((volatile unsigned int*)(0x422A0514UL))
#define bFM3_DTIM_TIMER2CONTROL_TIMERMODE      *((volatile unsigned int*)(0x422A0518UL))
#define bFM3_DTIM_TIMER2CONTROL_TIMEREN        *((volatile unsigned int*)(0x422A051CUL))
#define bFM3_DTIM_TIMER2RIS_TIMER2RIS          *((volatile unsigned int*)(0x422A0600UL))
#define bFM3_DTIM_TIMER2MIS_TIMER2MIS          *((volatile unsigned int*)(0x422A0680UL))

/* Multifunction Timer unit 0 Free Running Timer registers */
#define bFM3_MFT0_FRT_TCSA0_CLK0               *((volatile unsigned int*)(0x42400600UL))
#define bFM3_MFT0_FRT_TCSA0_CLK1               *((volatile unsigned int*)(0x42400604UL))
#define bFM3_MFT0_FRT_TCSA0_CLK2               *((volatile unsigned int*)(0x42400608UL))
#define bFM3_MFT0_FRT_TCSA0_CLK3               *((volatile unsigned int*)(0x4240060CUL))
#define bFM3_MFT0_FRT_TCSA0_SCLR               *((volatile unsigned int*)(0x42400610UL))
#define bFM3_MFT0_FRT_TCSA0_MODE               *((volatile unsigned int*)(0x42400614UL))
#define bFM3_MFT0_FRT_TCSA0_STOP               *((volatile unsigned int*)(0x42400618UL))
#define bFM3_MFT0_FRT_TCSA0_BFE                *((volatile unsigned int*)(0x4240061CUL))
#define bFM3_MFT0_FRT_TCSA0_ICRE               *((volatile unsigned int*)(0x42400620UL))
#define bFM3_MFT0_FRT_TCSA0_ICLR               *((volatile unsigned int*)(0x42400624UL))
#define bFM3_MFT0_FRT_TCSA0_IRQZE              *((volatile unsigned int*)(0x42400634UL))
#define bFM3_MFT0_FRT_TCSA0_IRQZF              *((volatile unsigned int*)(0x42400638UL))
#define bFM3_MFT0_FRT_TCSA0_ECKE               *((volatile unsigned int*)(0x4240063CUL))
#define bFM3_MFT0_FRT_TCSB0_AD0E               *((volatile unsigned int*)(0x42400680UL))
#define bFM3_MFT0_FRT_TCSB0_AD1E               *((volatile unsigned int*)(0x42400684UL))
#define bFM3_MFT0_FRT_TCSB0_AD2E               *((volatile unsigned int*)(0x42400688UL))
#define bFM3_MFT0_FRT_TCSA1_CLK0               *((volatile unsigned int*)(0x42400800UL))
#define bFM3_MFT0_FRT_TCSA1_CLK1               *((volatile unsigned int*)(0x42400804UL))
#define bFM3_MFT0_FRT_TCSA1_CLK2               *((volatile unsigned int*)(0x42400808UL))
#define bFM3_MFT0_FRT_TCSA1_CLK3               *((volatile unsigned int*)(0x4240080CUL))
#define bFM3_MFT0_FRT_TCSA1_SCLR               *((volatile unsigned int*)(0x42400810UL))
#define bFM3_MFT0_FRT_TCSA1_MODE               *((volatile unsigned int*)(0x42400814UL))
#define bFM3_MFT0_FRT_TCSA1_STOP               *((volatile unsigned int*)(0x42400818UL))
#define bFM3_MFT0_FRT_TCSA1_BFE                *((volatile unsigned int*)(0x4240081CUL))
#define bFM3_MFT0_FRT_TCSA1_ICRE               *((volatile unsigned int*)(0x42400820UL))
#define bFM3_MFT0_FRT_TCSA1_ICLR               *((volatile unsigned int*)(0x42400824UL))
#define bFM3_MFT0_FRT_TCSA1_IRQZE              *((volatile unsigned int*)(0x42400834UL))
#define bFM3_MFT0_FRT_TCSA1_IRQZF              *((volatile unsigned int*)(0x42400838UL))
#define bFM3_MFT0_FRT_TCSA1_ECKE               *((volatile unsigned int*)(0x4240083CUL))
#define bFM3_MFT0_FRT_TCSB1_AD0E               *((volatile unsigned int*)(0x42400880UL))
#define bFM3_MFT0_FRT_TCSB1_AD1E               *((volatile unsigned int*)(0x42400884UL))
#define bFM3_MFT0_FRT_TCSB1_AD2E               *((volatile unsigned int*)(0x42400888UL))
#define bFM3_MFT0_FRT_TCSA2_CLK0               *((volatile unsigned int*)(0x42400A00UL))
#define bFM3_MFT0_FRT_TCSA2_CLK1               *((volatile unsigned int*)(0x42400A04UL))
#define bFM3_MFT0_FRT_TCSA2_CLK2               *((volatile unsigned int*)(0x42400A08UL))
#define bFM3_MFT0_FRT_TCSA2_CLK3               *((volatile unsigned int*)(0x42400A0CUL))
#define bFM3_MFT0_FRT_TCSA2_SCLR               *((volatile unsigned int*)(0x42400A10UL))
#define bFM3_MFT0_FRT_TCSA2_MODE               *((volatile unsigned int*)(0x42400A14UL))
#define bFM3_MFT0_FRT_TCSA2_STOP               *((volatile unsigned int*)(0x42400A18UL))
#define bFM3_MFT0_FRT_TCSA2_BFE                *((volatile unsigned int*)(0x42400A1CUL))
#define bFM3_MFT0_FRT_TCSA2_ICRE               *((volatile unsigned int*)(0x42400A20UL))
#define bFM3_MFT0_FRT_TCSA2_ICLR               *((volatile unsigned int*)(0x42400A24UL))
#define bFM3_MFT0_FRT_TCSA2_IRQZE              *((volatile unsigned int*)(0x42400A34UL))
#define bFM3_MFT0_FRT_TCSA2_IRQZF              *((volatile unsigned int*)(0x42400A38UL))
#define bFM3_MFT0_FRT_TCSA2_ECKE               *((volatile unsigned int*)(0x42400A3CUL))
#define bFM3_MFT0_FRT_TCSB2_AD0E               *((volatile unsigned int*)(0x42400A80UL))
#define bFM3_MFT0_FRT_TCSB2_AD1E               *((volatile unsigned int*)(0x42400A84UL))
#define bFM3_MFT0_FRT_TCSB2_AD2E               *((volatile unsigned int*)(0x42400A88UL))

/* Multifunction Timer unit 0 Output Compare Unit registers */
#define bFM3_MFT0_OCU_OCSA10_CST0              *((volatile unsigned int*)(0x42400300UL))
#define bFM3_MFT0_OCU_OCSA10_CST1              *((volatile unsigned int*)(0x42400304UL))
#define bFM3_MFT0_OCU_OCSA10_BDIS0             *((volatile unsigned int*)(0x42400308UL))
#define bFM3_MFT0_OCU_OCSA10_BDIS1             *((volatile unsigned int*)(0x4240030CUL))
#define bFM3_MFT0_OCU_OCSA10_IOE0              *((volatile unsigned int*)(0x42400310UL))
#define bFM3_MFT0_OCU_OCSA10_IOE1              *((volatile unsigned int*)(0x42400314UL))
#define bFM3_MFT0_OCU_OCSA10_IOP0              *((volatile unsigned int*)(0x42400318UL))
#define bFM3_MFT0_OCU_OCSA10_IOP1              *((volatile unsigned int*)(0x4240031CUL))
#define bFM3_MFT0_OCU_OCSB10_OTD0              *((volatile unsigned int*)(0x42400320UL))
#define bFM3_MFT0_OCU_OCSB10_OTD1              *((volatile unsigned int*)(0x42400324UL))
#define bFM3_MFT0_OCU_OCSB10_CMOD              *((volatile unsigned int*)(0x42400330UL))
#define bFM3_MFT0_OCU_OCSB10_BTS0              *((volatile unsigned int*)(0x42400334UL))
#define bFM3_MFT0_OCU_OCSB10_BTS1              *((volatile unsigned int*)(0x42400338UL))
#define bFM3_MFT0_OCU_OCSA32_CST2              *((volatile unsigned int*)(0x42400380UL))
#define bFM3_MFT0_OCU_OCSA32_CST3              *((volatile unsigned int*)(0x42400384UL))
#define bFM3_MFT0_OCU_OCSA32_BDIS2             *((volatile unsigned int*)(0x42400388UL))
#define bFM3_MFT0_OCU_OCSA32_BDIS3             *((volatile unsigned int*)(0x4240038CUL))
#define bFM3_MFT0_OCU_OCSA32_IOE2              *((volatile unsigned int*)(0x42400390UL))
#define bFM3_MFT0_OCU_OCSA32_IOE3              *((volatile unsigned int*)(0x42400394UL))
#define bFM3_MFT0_OCU_OCSA32_IOP2              *((volatile unsigned int*)(0x42400398UL))
#define bFM3_MFT0_OCU_OCSA32_IOP3              *((volatile unsigned int*)(0x4240039CUL))
#define bFM3_MFT0_OCU_OCSB32_OTD2              *((volatile unsigned int*)(0x424003A0UL))
#define bFM3_MFT0_OCU_OCSB32_OTD3              *((volatile unsigned int*)(0x424003A4UL))
#define bFM3_MFT0_OCU_OCSB32_CMOD              *((volatile unsigned int*)(0x424003B0UL))
#define bFM3_MFT0_OCU_OCSB32_BTS2              *((volatile unsigned int*)(0x424003B4UL))
#define bFM3_MFT0_OCU_OCSB32_BTS3              *((volatile unsigned int*)(0x424003B8UL))
#define bFM3_MFT0_OCU_OCSA54_CST4              *((volatile unsigned int*)(0x42400400UL))
#define bFM3_MFT0_OCU_OCSA54_CST5              *((volatile unsigned int*)(0x42400404UL))
#define bFM3_MFT0_OCU_OCSA54_BDIS4             *((volatile unsigned int*)(0x42400408UL))
#define bFM3_MFT0_OCU_OCSA54_BDIS5             *((volatile unsigned int*)(0x4240040CUL))
#define bFM3_MFT0_OCU_OCSA54_IOE4              *((volatile unsigned int*)(0x42400410UL))
#define bFM3_MFT0_OCU_OCSA54_IOE5              *((volatile unsigned int*)(0x42400414UL))
#define bFM3_MFT0_OCU_OCSA54_IOP4              *((volatile unsigned int*)(0x42400418UL))
#define bFM3_MFT0_OCU_OCSA54_IOP5              *((volatile unsigned int*)(0x4240041CUL))
#define bFM3_MFT0_OCU_OCSB54_OTD4              *((volatile unsigned int*)(0x42400420UL))
#define bFM3_MFT0_OCU_OCSB54_OTD5              *((volatile unsigned int*)(0x42400424UL))
#define bFM3_MFT0_OCU_OCSB54_CMOD              *((volatile unsigned int*)(0x42400430UL))
#define bFM3_MFT0_OCU_OCSB54_BTS4              *((volatile unsigned int*)(0x42400434UL))
#define bFM3_MFT0_OCU_OCSB54_BTS5              *((volatile unsigned int*)(0x42400438UL))
#define bFM3_MFT0_OCU_OCSC_MOD0                *((volatile unsigned int*)(0x424004A0UL))
#define bFM3_MFT0_OCU_OCSC_MOD1                *((volatile unsigned int*)(0x424004A4UL))
#define bFM3_MFT0_OCU_OCSC_MOD2                *((volatile unsigned int*)(0x424004A8UL))
#define bFM3_MFT0_OCU_OCSC_MOD3                *((volatile unsigned int*)(0x424004ACUL))
#define bFM3_MFT0_OCU_OCSC_MOD4                *((volatile unsigned int*)(0x424004B0UL))
#define bFM3_MFT0_OCU_OCSC_MOD5                *((volatile unsigned int*)(0x424004B4UL))
#define bFM3_MFT0_OCU_OCFS10_FSO00             *((volatile unsigned int*)(0x42400B00UL))
#define bFM3_MFT0_OCU_OCFS10_FSO01             *((volatile unsigned int*)(0x42400B04UL))
#define bFM3_MFT0_OCU_OCFS10_FSO02             *((volatile unsigned int*)(0x42400B08UL))
#define bFM3_MFT0_OCU_OCFS10_FSO03             *((volatile unsigned int*)(0x42400B0CUL))
#define bFM3_MFT0_OCU_OCFS10_FSO10             *((volatile unsigned int*)(0x42400B10UL))
#define bFM3_MFT0_OCU_OCFS10_FSO11             *((volatile unsigned int*)(0x42400B14UL))
#define bFM3_MFT0_OCU_OCFS10_FSO12             *((volatile unsigned int*)(0x42400B18UL))
#define bFM3_MFT0_OCU_OCFS10_FSO13             *((volatile unsigned int*)(0x42400B1CUL))
#define bFM3_MFT0_OCU_OCFS32_FSO20             *((volatile unsigned int*)(0x42400B20UL))
#define bFM3_MFT0_OCU_OCFS32_FSO21             *((volatile unsigned int*)(0x42400B24UL))
#define bFM3_MFT0_OCU_OCFS32_FSO22             *((volatile unsigned int*)(0x42400B28UL))
#define bFM3_MFT0_OCU_OCFS32_FSO23             *((volatile unsigned int*)(0x42400B2CUL))
#define bFM3_MFT0_OCU_OCFS32_FSO30             *((volatile unsigned int*)(0x42400B30UL))
#define bFM3_MFT0_OCU_OCFS32_FSO31             *((volatile unsigned int*)(0x42400B34UL))
#define bFM3_MFT0_OCU_OCFS32_FSO32             *((volatile unsigned int*)(0x42400B38UL))
#define bFM3_MFT0_OCU_OCFS32_FSO33             *((volatile unsigned int*)(0x42400B3CUL))
#define bFM3_MFT0_OCU_OCFS54_FSO40             *((volatile unsigned int*)(0x42400B80UL))
#define bFM3_MFT0_OCU_OCFS54_FSO41             *((volatile unsigned int*)(0x42400B84UL))
#define bFM3_MFT0_OCU_OCFS54_FSO42             *((volatile unsigned int*)(0x42400B88UL))
#define bFM3_MFT0_OCU_OCFS54_FSO43             *((volatile unsigned int*)(0x42400B8CUL))
#define bFM3_MFT0_OCU_OCFS54_FSO50             *((volatile unsigned int*)(0x42400B90UL))
#define bFM3_MFT0_OCU_OCFS54_FSO51             *((volatile unsigned int*)(0x42400B94UL))
#define bFM3_MFT0_OCU_OCFS54_FSO52             *((volatile unsigned int*)(0x42400B98UL))
#define bFM3_MFT0_OCU_OCFS54_FSO53             *((volatile unsigned int*)(0x42400B9CUL))

/* Multifunction Timer unit 0 Waveform Generator and Noise Canceler registers */
#define bFM3_MFT0_WFG_WFSA10_DCK0              *((volatile unsigned int*)(0x42401180UL))
#define bFM3_MFT0_WFG_WFSA10_DCK1              *((volatile unsigned int*)(0x42401184UL))
#define bFM3_MFT0_WFG_WFSA10_DCK2              *((volatile unsigned int*)(0x42401188UL))
#define bFM3_MFT0_WFG_WFSA10_GTEN0             *((volatile unsigned int*)(0x42401198UL))
#define bFM3_MFT0_WFG_WFSA10_GTEN1             *((volatile unsigned int*)(0x4240119CUL))
#define bFM3_MFT0_WFG_WFSA10_PSEL0             *((volatile unsigned int*)(0x424011A0UL))
#define bFM3_MFT0_WFG_WFSA10_PSEL1             *((volatile unsigned int*)(0x424011A4UL))
#define bFM3_MFT0_WFG_WFSA10_PGEN0             *((volatile unsigned int*)(0x424011A8UL))
#define bFM3_MFT0_WFG_WFSA10_PGEN1             *((volatile unsigned int*)(0x424011ACUL))
#define bFM3_MFT0_WFG_WFSA10_DMOD              *((volatile unsigned int*)(0x424011B0UL))
#define bFM3_MFT0_WFG_WFSA32_DCK0              *((volatile unsigned int*)(0x42401200UL))
#define bFM3_MFT0_WFG_WFSA32_DCK1              *((volatile unsigned int*)(0x42401204UL))
#define bFM3_MFT0_WFG_WFSA32_DCK2              *((volatile unsigned int*)(0x42401208UL))
#define bFM3_MFT0_WFG_WFSA32_GTEN0             *((volatile unsigned int*)(0x42401218UL))
#define bFM3_MFT0_WFG_WFSA32_GTEN1             *((volatile unsigned int*)(0x4240121CUL))
#define bFM3_MFT0_WFG_WFSA32_PSEL0             *((volatile unsigned int*)(0x42401220UL))
#define bFM3_MFT0_WFG_WFSA32_PSEL1             *((volatile unsigned int*)(0x42401224UL))
#define bFM3_MFT0_WFG_WFSA32_PGEN0             *((volatile unsigned int*)(0x42401228UL))
#define bFM3_MFT0_WFG_WFSA32_PGEN1             *((volatile unsigned int*)(0x4240122CUL))
#define bFM3_MFT0_WFG_WFSA32_DMOD              *((volatile unsigned int*)(0x42401230UL))
#define bFM3_MFT0_WFG_WFSA54_DCK0              *((volatile unsigned int*)(0x42401280UL))
#define bFM3_MFT0_WFG_WFSA54_DCK1              *((volatile unsigned int*)(0x42401284UL))
#define bFM3_MFT0_WFG_WFSA54_DCK2              *((volatile unsigned int*)(0x42401288UL))
#define bFM3_MFT0_WFG_WFSA54_GTEN0             *((volatile unsigned int*)(0x42401298UL))
#define bFM3_MFT0_WFG_WFSA54_GTEN1             *((volatile unsigned int*)(0x4240129CUL))
#define bFM3_MFT0_WFG_WFSA54_PSEL0             *((volatile unsigned int*)(0x424012A0UL))
#define bFM3_MFT0_WFG_WFSA54_PSEL1             *((volatile unsigned int*)(0x424012A4UL))
#define bFM3_MFT0_WFG_WFSA54_PGEN0             *((volatile unsigned int*)(0x424012A8UL))
#define bFM3_MFT0_WFG_WFSA54_PGEN1             *((volatile unsigned int*)(0x424012ACUL))
#define bFM3_MFT0_WFG_WFSA54_DMOD              *((volatile unsigned int*)(0x424012B0UL))
#define bFM3_MFT0_WFG_WFIR_DTIF                *((volatile unsigned int*)(0x42401300UL))
#define bFM3_MFT0_WFG_WFIR_DTIC                *((volatile unsigned int*)(0x42401304UL))
#define bFM3_MFT0_WFG_WFIR_TMIF10              *((volatile unsigned int*)(0x42401310UL))
#define bFM3_MFT0_WFG_WFIR_TMIC10              *((volatile unsigned int*)(0x42401314UL))
#define bFM3_MFT0_WFG_WFIR_TMIE10              *((volatile unsigned int*)(0x42401318UL))
#define bFM3_MFT0_WFG_WFIR_TMIS10              *((volatile unsigned int*)(0x4240131CUL))
#define bFM3_MFT0_WFG_WFIR_TMIF32              *((volatile unsigned int*)(0x42401320UL))
#define bFM3_MFT0_WFG_WFIR_TMIC32              *((volatile unsigned int*)(0x42401324UL))
#define bFM3_MFT0_WFG_WFIR_TMIE32              *((volatile unsigned int*)(0x42401328UL))
#define bFM3_MFT0_WFG_WFIR_TMIS32              *((volatile unsigned int*)(0x4240132CUL))
#define bFM3_MFT0_WFG_WFIR_TMIF54              *((volatile unsigned int*)(0x42401330UL))
#define bFM3_MFT0_WFG_WFIR_TMIC54              *((volatile unsigned int*)(0x42401334UL))
#define bFM3_MFT0_WFG_WFIR_TMIE54              *((volatile unsigned int*)(0x42401338UL))
#define bFM3_MFT0_WFG_WFIR_TMIS54              *((volatile unsigned int*)(0x4240133CUL))
#define bFM3_MFT0_WFG_NZCL_DTIE                *((volatile unsigned int*)(0x42401380UL))
#define bFM3_MFT0_WFG_NZCL_NWS0                *((volatile unsigned int*)(0x42401384UL))
#define bFM3_MFT0_WFG_NZCL_NWS1                *((volatile unsigned int*)(0x42401388UL))
#define bFM3_MFT0_WFG_NZCL_NWS2                *((volatile unsigned int*)(0x4240138CUL))
#define bFM3_MFT0_WFG_NZCL_SDTI                *((volatile unsigned int*)(0x42401390UL))

/* Multifunction Timer unit 0 Input Capture Unit registers */
#define bFM3_MFT0_ICU_ICFS10_FSI00             *((volatile unsigned int*)(0x42400C00UL))
#define bFM3_MFT0_ICU_ICFS10_FSI01             *((volatile unsigned int*)(0x42400C04UL))
#define bFM3_MFT0_ICU_ICFS10_FSI02             *((volatile unsigned int*)(0x42400C08UL))
#define bFM3_MFT0_ICU_ICFS10_FSI03             *((volatile unsigned int*)(0x42400C0CUL))
#define bFM3_MFT0_ICU_ICFS10_FSI10             *((volatile unsigned int*)(0x42400C10UL))
#define bFM3_MFT0_ICU_ICFS10_FSI11             *((volatile unsigned int*)(0x42400C14UL))
#define bFM3_MFT0_ICU_ICFS10_FSI12             *((volatile unsigned int*)(0x42400C18UL))
#define bFM3_MFT0_ICU_ICFS10_FSI13             *((volatile unsigned int*)(0x42400C1CUL))
#define bFM3_MFT0_ICU_ICFS32_FSI20             *((volatile unsigned int*)(0x42400C20UL))
#define bFM3_MFT0_ICU_ICFS32_FSI21             *((volatile unsigned int*)(0x42400C24UL))
#define bFM3_MFT0_ICU_ICFS32_FSI22             *((volatile unsigned int*)(0x42400C28UL))
#define bFM3_MFT0_ICU_ICFS32_FSI23             *((volatile unsigned int*)(0x42400C2CUL))
#define bFM3_MFT0_ICU_ICFS32_FSI30             *((volatile unsigned int*)(0x42400C30UL))
#define bFM3_MFT0_ICU_ICFS32_FSI31             *((volatile unsigned int*)(0x42400C34UL))
#define bFM3_MFT0_ICU_ICFS32_FSI32             *((volatile unsigned int*)(0x42400C38UL))
#define bFM3_MFT0_ICU_ICFS32_FSI33             *((volatile unsigned int*)(0x42400C3CUL))
#define bFM3_MFT0_ICU_ICSA10_EG00              *((volatile unsigned int*)(0x42400F00UL))
#define bFM3_MFT0_ICU_ICSA10_EG01              *((volatile unsigned int*)(0x42400F04UL))
#define bFM3_MFT0_ICU_ICSA10_EG10              *((volatile unsigned int*)(0x42400F08UL))
#define bFM3_MFT0_ICU_ICSA10_EG11              *((volatile unsigned int*)(0x42400F0CUL))
#define bFM3_MFT0_ICU_ICSA10_ICE0              *((volatile unsigned int*)(0x42400F10UL))
#define bFM3_MFT0_ICU_ICSA10_ICE1              *((volatile unsigned int*)(0x42400F14UL))
#define bFM3_MFT0_ICU_ICSA10_ICP0              *((volatile unsigned int*)(0x42400F18UL))
#define bFM3_MFT0_ICU_ICSA10_ICP1              *((volatile unsigned int*)(0x42400F1CUL))
#define bFM3_MFT0_ICU_ICSB10_IEI0              *((volatile unsigned int*)(0x42400F20UL))
#define bFM3_MFT0_ICU_ICSB10_IEI1              *((volatile unsigned int*)(0x42400F24UL))
#define bFM3_MFT0_ICU_ICSA32_EG20              *((volatile unsigned int*)(0x42400F80UL))
#define bFM3_MFT0_ICU_ICSA32_EG21              *((volatile unsigned int*)(0x42400F84UL))
#define bFM3_MFT0_ICU_ICSA32_EG30              *((volatile unsigned int*)(0x42400F88UL))
#define bFM3_MFT0_ICU_ICSA32_EG31              *((volatile unsigned int*)(0x42400F8CUL))
#define bFM3_MFT0_ICU_ICSA32_ICE2              *((volatile unsigned int*)(0x42400F90UL))
#define bFM3_MFT0_ICU_ICSA32_ICE3              *((volatile unsigned int*)(0x42400F94UL))
#define bFM3_MFT0_ICU_ICSA32_ICP2              *((volatile unsigned int*)(0x42400F98UL))
#define bFM3_MFT0_ICU_ICSA32_ICP3              *((volatile unsigned int*)(0x42400F9CUL))
#define bFM3_MFT0_ICU_ICSB32_IEI2              *((volatile unsigned int*)(0x42400FA0UL))
#define bFM3_MFT0_ICU_ICSB32_IEI3              *((volatile unsigned int*)(0x42400FA4UL))

/* Multifunction Timer unit 0 ADC Start Compare Unit registers */
#define bFM3_MFT0_ADCMP_ACSB_BDIS0             *((volatile unsigned int*)(0x42401700UL))
#define bFM3_MFT0_ADCMP_ACSB_BDIS1             *((volatile unsigned int*)(0x42401704UL))
#define bFM3_MFT0_ADCMP_ACSB_BDIS2             *((volatile unsigned int*)(0x42401708UL))
#define bFM3_MFT0_ADCMP_ACSB_BTS0              *((volatile unsigned int*)(0x42401710UL))
#define bFM3_MFT0_ADCMP_ACSB_BTS1              *((volatile unsigned int*)(0x42401714UL))
#define bFM3_MFT0_ADCMP_ACSB_BTS2              *((volatile unsigned int*)(0x42401718UL))
#define bFM3_MFT0_ADCMP_ACSA_CE00              *((volatile unsigned int*)(0x42401780UL))
#define bFM3_MFT0_ADCMP_ACSA_CE01              *((volatile unsigned int*)(0x42401784UL))
#define bFM3_MFT0_ADCMP_ACSA_CE10              *((volatile unsigned int*)(0x42401788UL))
#define bFM3_MFT0_ADCMP_ACSA_CE11              *((volatile unsigned int*)(0x4240178CUL))
#define bFM3_MFT0_ADCMP_ACSA_CE20              *((volatile unsigned int*)(0x42401790UL))
#define bFM3_MFT0_ADCMP_ACSA_CE21              *((volatile unsigned int*)(0x42401794UL))
#define bFM3_MFT0_ADCMP_ACSA_SEL00             *((volatile unsigned int*)(0x424017A0UL))
#define bFM3_MFT0_ADCMP_ACSA_SEL01             *((volatile unsigned int*)(0x424017A4UL))
#define bFM3_MFT0_ADCMP_ACSA_SEL10             *((volatile unsigned int*)(0x424017A8UL))
#define bFM3_MFT0_ADCMP_ACSA_SEL11             *((volatile unsigned int*)(0x424017ACUL))
#define bFM3_MFT0_ADCMP_ACSA_SEL20             *((volatile unsigned int*)(0x424017B0UL))
#define bFM3_MFT0_ADCMP_ACSA_SEL21             *((volatile unsigned int*)(0x424017B4UL))
#define bFM3_MFT0_ADCMP_ATSA_AD0S0             *((volatile unsigned int*)(0x42401800UL))
#define bFM3_MFT0_ADCMP_ATSA_AD0S1             *((volatile unsigned int*)(0x42401804UL))
#define bFM3_MFT0_ADCMP_ATSA_AD1S0             *((volatile unsigned int*)(0x42401808UL))
#define bFM3_MFT0_ADCMP_ATSA_AD1S1             *((volatile unsigned int*)(0x4240180CUL))
#define bFM3_MFT0_ADCMP_ATSA_AD2S0             *((volatile unsigned int*)(0x42401810UL))
#define bFM3_MFT0_ADCMP_ATSA_AD2S1             *((volatile unsigned int*)(0x42401814UL))
#define bFM3_MFT0_ADCMP_ATSA_AD0P0             *((volatile unsigned int*)(0x42401820UL))
#define bFM3_MFT0_ADCMP_ATSA_AD0P1             *((volatile unsigned int*)(0x42401824UL))
#define bFM3_MFT0_ADCMP_ATSA_AD1P0             *((volatile unsigned int*)(0x42401828UL))
#define bFM3_MFT0_ADCMP_ATSA_AD1P1             *((volatile unsigned int*)(0x4240182CUL))
#define bFM3_MFT0_ADCMP_ATSA_AD2P0             *((volatile unsigned int*)(0x42401830UL))
#define bFM3_MFT0_ADCMP_ATSA_AD2P1             *((volatile unsigned int*)(0x42401834UL))

/* Multifunction Timer PPG registers */
#define bFM3_MFT_PPG_TTCR0_STR0                *((volatile unsigned int*)(0x42480020UL))
#define bFM3_MFT_PPG_TTCR0_MONI0               *((volatile unsigned int*)(0x42480024UL))
#define bFM3_MFT_PPG_TTCR0_CS00                *((volatile unsigned int*)(0x42480028UL))
#define bFM3_MFT_PPG_TTCR0_CS01                *((volatile unsigned int*)(0x4248002CUL))
#define bFM3_MFT_PPG_TTCR0_TRG0O               *((volatile unsigned int*)(0x42480030UL))
#define bFM3_MFT_PPG_TTCR0_TRG2O               *((volatile unsigned int*)(0x42480034UL))
#define bFM3_MFT_PPG_TTCR0_TRG4O               *((volatile unsigned int*)(0x42480038UL))
#define bFM3_MFT_PPG_TTCR0_TRG6O               *((volatile unsigned int*)(0x4248003CUL))
#define bFM3_MFT_PPG_TRG_PEN00                 *((volatile unsigned int*)(0x42482000UL))
#define bFM3_MFT_PPG_TRG_PEN01                 *((volatile unsigned int*)(0x42482004UL))
#define bFM3_MFT_PPG_TRG_PEN02                 *((volatile unsigned int*)(0x42482008UL))
#define bFM3_MFT_PPG_TRG_PEN03                 *((volatile unsigned int*)(0x4248200CUL))
#define bFM3_MFT_PPG_TRG_PEN04                 *((volatile unsigned int*)(0x42482010UL))
#define bFM3_MFT_PPG_TRG_PEN05                 *((volatile unsigned int*)(0x42482014UL))
#define bFM3_MFT_PPG_TRG_PEN06                 *((volatile unsigned int*)(0x42482018UL))
#define bFM3_MFT_PPG_TRG_PEN07                 *((volatile unsigned int*)(0x4248201CUL))
#define bFM3_MFT_PPG_REVC_REV00                *((volatile unsigned int*)(0x42482080UL))
#define bFM3_MFT_PPG_REVC_REV01                *((volatile unsigned int*)(0x42482084UL))
#define bFM3_MFT_PPG_REVC_REV02                *((volatile unsigned int*)(0x42482088UL))
#define bFM3_MFT_PPG_REVC_REV03                *((volatile unsigned int*)(0x4248208CUL))
#define bFM3_MFT_PPG_REVC_REV04                *((volatile unsigned int*)(0x42482090UL))
#define bFM3_MFT_PPG_REVC_REV05                *((volatile unsigned int*)(0x42482094UL))
#define bFM3_MFT_PPG_REVC_REV06                *((volatile unsigned int*)(0x42482098UL))
#define bFM3_MFT_PPG_REVC_REV07                *((volatile unsigned int*)(0x4248209CUL))
#define bFM3_MFT_PPG_PPGC1_TTRG                *((volatile unsigned int*)(0x42484000UL))
#define bFM3_MFT_PPG_PPGC1_PCS0                *((volatile unsigned int*)(0x4248400CUL))
#define bFM3_MFT_PPG_PPGC1_PCS1                *((volatile unsigned int*)(0x42484010UL))
#define bFM3_MFT_PPG_PPGC1_INTM                *((volatile unsigned int*)(0x42484014UL))
#define bFM3_MFT_PPG_PPGC1_PUF                 *((volatile unsigned int*)(0x42484018UL))
#define bFM3_MFT_PPG_PPGC1_PIE                 *((volatile unsigned int*)(0x4248401CUL))
#define bFM3_MFT_PPG_PPGC0_TTRG                *((volatile unsigned int*)(0x42484020UL))
#define bFM3_MFT_PPG_PPGC0_PCS0                *((volatile unsigned int*)(0x4248402CUL))
#define bFM3_MFT_PPG_PPGC0_PCS1                *((volatile unsigned int*)(0x42484030UL))
#define bFM3_MFT_PPG_PPGC0_INTM                *((volatile unsigned int*)(0x42484034UL))
#define bFM3_MFT_PPG_PPGC0_PUF                 *((volatile unsigned int*)(0x42484038UL))
#define bFM3_MFT_PPG_PPGC0_PIE                 *((volatile unsigned int*)(0x4248403CUL))
#define bFM3_MFT_PPG_PPGC3_TTRG                *((volatile unsigned int*)(0x42484080UL))
#define bFM3_MFT_PPG_PPGC3_PCS0                *((volatile unsigned int*)(0x4248408CUL))
#define bFM3_MFT_PPG_PPGC3_PCS1                *((volatile unsigned int*)(0x42484090UL))
#define bFM3_MFT_PPG_PPGC3_INTM                *((volatile unsigned int*)(0x42484094UL))
#define bFM3_MFT_PPG_PPGC3_PUF                 *((volatile unsigned int*)(0x42484098UL))
#define bFM3_MFT_PPG_PPGC3_PIE                 *((volatile unsigned int*)(0x4248409CUL))
#define bFM3_MFT_PPG_PPGC2_TTRG                *((volatile unsigned int*)(0x424840A0UL))
#define bFM3_MFT_PPG_PPGC2_PCS0                *((volatile unsigned int*)(0x424840ACUL))
#define bFM3_MFT_PPG_PPGC2_PCS1                *((volatile unsigned int*)(0x424840B0UL))
#define bFM3_MFT_PPG_PPGC2_INTM                *((volatile unsigned int*)(0x424840B4UL))
#define bFM3_MFT_PPG_PPGC2_PUF                 *((volatile unsigned int*)(0x424840B8UL))
#define bFM3_MFT_PPG_PPGC2_PIE                 *((volatile unsigned int*)(0x424840BCUL))
#define bFM3_MFT_PPG_GATEC0_EDGE0              *((volatile unsigned int*)(0x42484300UL))
#define bFM3_MFT_PPG_GATEC0_STRG0              *((volatile unsigned int*)(0x42484304UL))
#define bFM3_MFT_PPG_GATEC0_EDGE2              *((volatile unsigned int*)(0x42484310UL))
#define bFM3_MFT_PPG_GATEC0_STRG2              *((volatile unsigned int*)(0x42484314UL))
#define bFM3_MFT_PPG_PPGC5_TTRG                *((volatile unsigned int*)(0x42484800UL))
#define bFM3_MFT_PPG_PPGC5_PCS0                *((volatile unsigned int*)(0x4248480CUL))
#define bFM3_MFT_PPG_PPGC5_PCS1                *((volatile unsigned int*)(0x42484810UL))
#define bFM3_MFT_PPG_PPGC5_INTM                *((volatile unsigned int*)(0x42484814UL))
#define bFM3_MFT_PPG_PPGC5_PUF                 *((volatile unsigned int*)(0x42484818UL))
#define bFM3_MFT_PPG_PPGC5_PIE                 *((volatile unsigned int*)(0x4248481CUL))
#define bFM3_MFT_PPG_PPGC4_TTRG                *((volatile unsigned int*)(0x42484820UL))
#define bFM3_MFT_PPG_PPGC4_PCS0                *((volatile unsigned int*)(0x4248482CUL))
#define bFM3_MFT_PPG_PPGC4_PCS1                *((volatile unsigned int*)(0x42484830UL))
#define bFM3_MFT_PPG_PPGC4_INTM                *((volatile unsigned int*)(0x42484834UL))
#define bFM3_MFT_PPG_PPGC4_PUF                 *((volatile unsigned int*)(0x42484838UL))
#define bFM3_MFT_PPG_PPGC4_PIE                 *((volatile unsigned int*)(0x4248483CUL))
#define bFM3_MFT_PPG_PPGC7_TTRG                *((volatile unsigned int*)(0x42484880UL))
#define bFM3_MFT_PPG_PPGC7_PCS0                *((volatile unsigned int*)(0x4248488CUL))
#define bFM3_MFT_PPG_PPGC7_PCS1                *((volatile unsigned int*)(0x42484890UL))
#define bFM3_MFT_PPG_PPGC7_INTM                *((volatile unsigned int*)(0x42484894UL))
#define bFM3_MFT_PPG_PPGC7_PUF                 *((volatile unsigned int*)(0x42484898UL))
#define bFM3_MFT_PPG_PPGC7_PIE                 *((volatile unsigned int*)(0x4248489CUL))
#define bFM3_MFT_PPG_PPGC6_TTRG                *((volatile unsigned int*)(0x424848A0UL))
#define bFM3_MFT_PPG_PPGC6_PCS0                *((volatile unsigned int*)(0x424848ACUL))
#define bFM3_MFT_PPG_PPGC6_PCS1                *((volatile unsigned int*)(0x424848B0UL))
#define bFM3_MFT_PPG_PPGC6_INTM                *((volatile unsigned int*)(0x424848B4UL))
#define bFM3_MFT_PPG_PPGC6_PUF                 *((volatile unsigned int*)(0x424848B8UL))
#define bFM3_MFT_PPG_PPGC6_PIE                 *((volatile unsigned int*)(0x424848BCUL))
#define bFM3_MFT_PPG_GATEC4_EDGE4              *((volatile unsigned int*)(0x42484B00UL))
#define bFM3_MFT_PPG_GATEC4_STRG4              *((volatile unsigned int*)(0x42484B04UL))
#define bFM3_MFT_PPG_GATEC4_EDGE6              *((volatile unsigned int*)(0x42484B10UL))
#define bFM3_MFT_PPG_GATEC4_STRG6              *((volatile unsigned int*)(0x42484B14UL))
#define bFM3_MFT_PPG_IGBTC_IGBTMD              *((volatile unsigned int*)(0x42487000UL))
#define bFM3_MFT_PPG_IGBTC_IGTRGLV             *((volatile unsigned int*)(0x42487004UL))
#define bFM3_MFT_PPG_IGBTC_IGOSEL0             *((volatile unsigned int*)(0x42487008UL))
#define bFM3_MFT_PPG_IGBTC_IGOSEL1             *((volatile unsigned int*)(0x4248700CUL))
#define bFM3_MFT_PPG_IGBTC_IGNFW0              *((volatile unsigned int*)(0x42487010UL))
#define bFM3_MFT_PPG_IGBTC_IGNFW1              *((volatile unsigned int*)(0x42487014UL))
#define bFM3_MFT_PPG_IGBTC_IGNFW2              *((volatile unsigned int*)(0x42487018UL))
#define bFM3_MFT_PPG_IGBTC_IGATIH              *((volatile unsigned int*)(0x4248701CUL))

/* Base Timer 0 PPG registers */
#define bFM3_BT0_PPG_TMCR_STRG                 *((volatile unsigned int*)(0x424A0180UL))
#define bFM3_BT0_PPG_TMCR_CTEN                 *((volatile unsigned int*)(0x424A0184UL))
#define bFM3_BT0_PPG_TMCR_MDSE                 *((volatile unsigned int*)(0x424A0188UL))
#define bFM3_BT0_PPG_TMCR_OSEL                 *((volatile unsigned int*)(0x424A018CUL))
#define bFM3_BT0_PPG_TMCR_EGS0                 *((volatile unsigned int*)(0x424A01A0UL))
#define bFM3_BT0_PPG_TMCR_EGS1                 *((volatile unsigned int*)(0x424A01A4UL))
#define bFM3_BT0_PPG_TMCR_PMSK                 *((volatile unsigned int*)(0x424A01A8UL))
#define bFM3_BT0_PPG_TMCR_RTGEN                *((volatile unsigned int*)(0x424A01ACUL))
#define bFM3_BT0_PPG_TMCR_CKS0                 *((volatile unsigned int*)(0x424A01B0UL))
#define bFM3_BT0_PPG_TMCR_CKS1                 *((volatile unsigned int*)(0x424A01B4UL))
#define bFM3_BT0_PPG_TMCR_CKS2                 *((volatile unsigned int*)(0x424A01B8UL))
#define bFM3_BT0_PPG_STC_UDIR                  *((volatile unsigned int*)(0x424A0200UL))
#define bFM3_BT0_PPG_STC_TGIR                  *((volatile unsigned int*)(0x424A0208UL))
#define bFM3_BT0_PPG_STC_UDIE                  *((volatile unsigned int*)(0x424A0210UL))
#define bFM3_BT0_PPG_STC_TGIE                  *((volatile unsigned int*)(0x424A0218UL))
#define bFM3_BT0_PPG_TMCR2_CKS3                *((volatile unsigned int*)(0x424A0220UL))

/* Base Timer 0 PWM registers */
#define bFM3_BT0_PWM_TMCR_STRG                 *((volatile unsigned int*)(0x424A0180UL))
#define bFM3_BT0_PWM_TMCR_CTEN                 *((volatile unsigned int*)(0x424A0184UL))
#define bFM3_BT0_PWM_TMCR_MDSE                 *((volatile unsigned int*)(0x424A0188UL))
#define bFM3_BT0_PWM_TMCR_OSEL                 *((volatile unsigned int*)(0x424A018CUL))
#define bFM3_BT0_PWM_TMCR_EGS0                 *((volatile unsigned int*)(0x424A01A0UL))
#define bFM3_BT0_PWM_TMCR_EGS1                 *((volatile unsigned int*)(0x424A01A4UL))
#define bFM3_BT0_PWM_TMCR_PMSK                 *((volatile unsigned int*)(0x424A01A8UL))
#define bFM3_BT0_PWM_TMCR_RTGEN                *((volatile unsigned int*)(0x424A01ACUL))
#define bFM3_BT0_PWM_TMCR_CKS0                 *((volatile unsigned int*)(0x424A01B0UL))
#define bFM3_BT0_PWM_TMCR_CKS1                 *((volatile unsigned int*)(0x424A01B4UL))
#define bFM3_BT0_PWM_TMCR_CKS2                 *((volatile unsigned int*)(0x424A01B8UL))
#define bFM3_BT0_PWM_STC_UDIR                  *((volatile unsigned int*)(0x424A0200UL))
#define bFM3_BT0_PWM_STC_DTIR                  *((volatile unsigned int*)(0x424A0204UL))
#define bFM3_BT0_PWM_STC_TGIR                  *((volatile unsigned int*)(0x424A0208UL))
#define bFM3_BT0_PWM_STC_UDIE                  *((volatile unsigned int*)(0x424A0210UL))
#define bFM3_BT0_PWM_STC_DTIE                  *((volatile unsigned int*)(0x424A0214UL))
#define bFM3_BT0_PWM_STC_TGIE                  *((volatile unsigned int*)(0x424A0218UL))
#define bFM3_BT0_PWM_TMCR2_CKS3                *((volatile unsigned int*)(0x424A0220UL))

/* Base Timer 0 RT registers */
#define bFM3_BT0_RT_TMCR_STRG                  *((volatile unsigned int*)(0x424A0180UL))
#define bFM3_BT0_RT_TMCR_CTEN                  *((volatile unsigned int*)(0x424A0184UL))
#define bFM3_BT0_RT_TMCR_MDSE                  *((volatile unsigned int*)(0x424A0188UL))
#define bFM3_BT0_RT_TMCR_OSEL                  *((volatile unsigned int*)(0x424A018CUL))
#define bFM3_BT0_RT_TMCR_T32                   *((volatile unsigned int*)(0x424A019CUL))
#define bFM3_BT0_RT_TMCR_EGS0                  *((volatile unsigned int*)(0x424A01A0UL))
#define bFM3_BT0_RT_TMCR_EGS1                  *((volatile unsigned int*)(0x424A01A4UL))
#define bFM3_BT0_RT_TMCR_CKS0                  *((volatile unsigned int*)(0x424A01B0UL))
#define bFM3_BT0_RT_TMCR_CKS1                  *((volatile unsigned int*)(0x424A01B4UL))
#define bFM3_BT0_RT_TMCR_CKS2                  *((volatile unsigned int*)(0x424A01B8UL))
#define bFM3_BT0_RT_STC_UDIR                   *((volatile unsigned int*)(0x424A0200UL))
#define bFM3_BT0_RT_STC_TGIR                   *((volatile unsigned int*)(0x424A0208UL))
#define bFM3_BT0_RT_STC_UDIE                   *((volatile unsigned int*)(0x424A0210UL))
#define bFM3_BT0_RT_STC_TGIE                   *((volatile unsigned int*)(0x424A0218UL))
#define bFM3_BT0_RT_TMCR2_CKS3                 *((volatile unsigned int*)(0x424A0220UL))

/* Base Timer 0 PWC registers */
#define bFM3_BT0_PWC_TMCR_CTEN                 *((volatile unsigned int*)(0x424A0184UL))
#define bFM3_BT0_PWC_TMCR_MDSE                 *((volatile unsigned int*)(0x424A0188UL))
#define bFM3_BT0_PWC_TMCR_T32                  *((volatile unsigned int*)(0x424A019CUL))
#define bFM3_BT0_PWC_TMCR_EGS0                 *((volatile unsigned int*)(0x424A01A0UL))
#define bFM3_BT0_PWC_TMCR_EGS1                 *((volatile unsigned int*)(0x424A01A4UL))
#define bFM3_BT0_PWC_TMCR_EGS2                 *((volatile unsigned int*)(0x424A01A8UL))
#define bFM3_BT0_PWC_TMCR_CKS0                 *((volatile unsigned int*)(0x424A01B0UL))
#define bFM3_BT0_PWC_TMCR_CKS1                 *((volatile unsigned int*)(0x424A01B4UL))
#define bFM3_BT0_PWC_TMCR_CKS2                 *((volatile unsigned int*)(0x424A01B8UL))
#define bFM3_BT0_PWC_STC_OVIR                  *((volatile unsigned int*)(0x424A0200UL))
#define bFM3_BT0_PWC_STC_EDIR                  *((volatile unsigned int*)(0x424A0208UL))
#define bFM3_BT0_PWC_STC_OVIE                  *((volatile unsigned int*)(0x424A0210UL))
#define bFM3_BT0_PWC_STC_EDIE                  *((volatile unsigned int*)(0x424A0218UL))
#define bFM3_BT0_PWC_STC_ERR                   *((volatile unsigned int*)(0x424A021CUL))
#define bFM3_BT0_PWC_TMCR2_CKS3                *((volatile unsigned int*)(0x424A0220UL))

/* Base Timer 1 PPG registers */
#define bFM3_BT1_PPG_TMCR_STRG                 *((volatile unsigned int*)(0x424A0980UL))
#define bFM3_BT1_PPG_TMCR_CTEN                 *((volatile unsigned int*)(0x424A0984UL))
#define bFM3_BT1_PPG_TMCR_MDSE                 *((volatile unsigned int*)(0x424A0988UL))
#define bFM3_BT1_PPG_TMCR_OSEL                 *((volatile unsigned int*)(0x424A098CUL))
#define bFM3_BT1_PPG_TMCR_EGS0                 *((volatile unsigned int*)(0x424A09A0UL))
#define bFM3_BT1_PPG_TMCR_EGS1                 *((volatile unsigned int*)(0x424A09A4UL))
#define bFM3_BT1_PPG_TMCR_PMSK                 *((volatile unsigned int*)(0x424A09A8UL))
#define bFM3_BT1_PPG_TMCR_RTGEN                *((volatile unsigned int*)(0x424A09ACUL))
#define bFM3_BT1_PPG_TMCR_CKS0                 *((volatile unsigned int*)(0x424A09B0UL))
#define bFM3_BT1_PPG_TMCR_CKS1                 *((volatile unsigned int*)(0x424A09B4UL))
#define bFM3_BT1_PPG_TMCR_CKS2                 *((volatile unsigned int*)(0x424A09B8UL))
#define bFM3_BT1_PPG_STC_UDIR                  *((volatile unsigned int*)(0x424A0A00UL))
#define bFM3_BT1_PPG_STC_TGIR                  *((volatile unsigned int*)(0x424A0A08UL))
#define bFM3_BT1_PPG_STC_UDIE                  *((volatile unsigned int*)(0x424A0A10UL))
#define bFM3_BT1_PPG_STC_TGIE                  *((volatile unsigned int*)(0x424A0A18UL))
#define bFM3_BT1_PPG_TMCR2_CKS3                *((volatile unsigned int*)(0x424A0A20UL))

/* Base Timer 1 PWM registers */
#define bFM3_BT1_PWM_TMCR_STRG                 *((volatile unsigned int*)(0x424A0980UL))
#define bFM3_BT1_PWM_TMCR_CTEN                 *((volatile unsigned int*)(0x424A0984UL))
#define bFM3_BT1_PWM_TMCR_MDSE                 *((volatile unsigned int*)(0x424A0988UL))
#define bFM3_BT1_PWM_TMCR_OSEL                 *((volatile unsigned int*)(0x424A098CUL))
#define bFM3_BT1_PWM_TMCR_EGS0                 *((volatile unsigned int*)(0x424A09A0UL))
#define bFM3_BT1_PWM_TMCR_EGS1                 *((volatile unsigned int*)(0x424A09A4UL))
#define bFM3_BT1_PWM_TMCR_PMSK                 *((volatile unsigned int*)(0x424A09A8UL))
#define bFM3_BT1_PWM_TMCR_RTGEN                *((volatile unsigned int*)(0x424A09ACUL))
#define bFM3_BT1_PWM_TMCR_CKS0                 *((volatile unsigned int*)(0x424A09B0UL))
#define bFM3_BT1_PWM_TMCR_CKS1                 *((volatile unsigned int*)(0x424A09B4UL))
#define bFM3_BT1_PWM_TMCR_CKS2                 *((volatile unsigned int*)(0x424A09B8UL))
#define bFM3_BT1_PWM_STC_UDIR                  *((volatile unsigned int*)(0x424A0A00UL))
#define bFM3_BT1_PWM_STC_DTIR                  *((volatile unsigned int*)(0x424A0A04UL))
#define bFM3_BT1_PWM_STC_TGIR                  *((volatile unsigned int*)(0x424A0A08UL))
#define bFM3_BT1_PWM_STC_UDIE                  *((volatile unsigned int*)(0x424A0A10UL))
#define bFM3_BT1_PWM_STC_DTIE                  *((volatile unsigned int*)(0x424A0A14UL))
#define bFM3_BT1_PWM_STC_TGIE                  *((volatile unsigned int*)(0x424A0A18UL))
#define bFM3_BT1_PWM_TMCR2_CKS3                *((volatile unsigned int*)(0x424A0A20UL))

/* Base Timer 1 RT registers */
#define bFM3_BT1_RT_TMCR_STRG                  *((volatile unsigned int*)(0x424A0980UL))
#define bFM3_BT1_RT_TMCR_CTEN                  *((volatile unsigned int*)(0x424A0984UL))
#define bFM3_BT1_RT_TMCR_MDSE                  *((volatile unsigned int*)(0x424A0988UL))
#define bFM3_BT1_RT_TMCR_OSEL                  *((volatile unsigned int*)(0x424A098CUL))
#define bFM3_BT1_RT_TMCR_T32                   *((volatile unsigned int*)(0x424A099CUL))
#define bFM3_BT1_RT_TMCR_EGS0                  *((volatile unsigned int*)(0x424A09A0UL))
#define bFM3_BT1_RT_TMCR_EGS1                  *((volatile unsigned int*)(0x424A09A4UL))
#define bFM3_BT1_RT_TMCR_CKS0                  *((volatile unsigned int*)(0x424A09B0UL))
#define bFM3_BT1_RT_TMCR_CKS1                  *((volatile unsigned int*)(0x424A09B4UL))
#define bFM3_BT1_RT_TMCR_CKS2                  *((volatile unsigned int*)(0x424A09B8UL))
#define bFM3_BT1_RT_STC_UDIR                   *((volatile unsigned int*)(0x424A0A00UL))
#define bFM3_BT1_RT_STC_TGIR                   *((volatile unsigned int*)(0x424A0A08UL))
#define bFM3_BT1_RT_STC_UDIE                   *((volatile unsigned int*)(0x424A0A10UL))
#define bFM3_BT1_RT_STC_TGIE                   *((volatile unsigned int*)(0x424A0A18UL))
#define bFM3_BT1_RT_TMCR2_CKS3                 *((volatile unsigned int*)(0x424A0A20UL))

/* Base Timer 1 PWC registers */
#define bFM3_BT1_PWC_TMCR_CTEN                 *((volatile unsigned int*)(0x424A0984UL))
#define bFM3_BT1_PWC_TMCR_MDSE                 *((volatile unsigned int*)(0x424A0988UL))
#define bFM3_BT1_PWC_TMCR_T32                  *((volatile unsigned int*)(0x424A099CUL))
#define bFM3_BT1_PWC_TMCR_EGS0                 *((volatile unsigned int*)(0x424A09A0UL))
#define bFM3_BT1_PWC_TMCR_EGS1                 *((volatile unsigned int*)(0x424A09A4UL))
#define bFM3_BT1_PWC_TMCR_EGS2                 *((volatile unsigned int*)(0x424A09A8UL))
#define bFM3_BT1_PWC_TMCR_CKS0                 *((volatile unsigned int*)(0x424A09B0UL))
#define bFM3_BT1_PWC_TMCR_CKS1                 *((volatile unsigned int*)(0x424A09B4UL))
#define bFM3_BT1_PWC_TMCR_CKS2                 *((volatile unsigned int*)(0x424A09B8UL))
#define bFM3_BT1_PWC_STC_OVIR                  *((volatile unsigned int*)(0x424A0A00UL))
#define bFM3_BT1_PWC_STC_EDIR                  *((volatile unsigned int*)(0x424A0A08UL))
#define bFM3_BT1_PWC_STC_OVIE                  *((volatile unsigned int*)(0x424A0A10UL))
#define bFM3_BT1_PWC_STC_EDIE                  *((volatile unsigned int*)(0x424A0A18UL))
#define bFM3_BT1_PWC_STC_ERR                   *((volatile unsigned int*)(0x424A0A1CUL))
#define bFM3_BT1_PWC_TMCR2_CKS3                *((volatile unsigned int*)(0x424A0A20UL))

/* Base Timer 2 PPG registers */
#define bFM3_BT2_PPG_TMCR_STRG                 *((volatile unsigned int*)(0x424A1180UL))
#define bFM3_BT2_PPG_TMCR_CTEN                 *((volatile unsigned int*)(0x424A1184UL))
#define bFM3_BT2_PPG_TMCR_MDSE                 *((volatile unsigned int*)(0x424A1188UL))
#define bFM3_BT2_PPG_TMCR_OSEL                 *((volatile unsigned int*)(0x424A118CUL))
#define bFM3_BT2_PPG_TMCR_EGS0                 *((volatile unsigned int*)(0x424A11A0UL))
#define bFM3_BT2_PPG_TMCR_EGS1                 *((volatile unsigned int*)(0x424A11A4UL))
#define bFM3_BT2_PPG_TMCR_PMSK                 *((volatile unsigned int*)(0x424A11A8UL))
#define bFM3_BT2_PPG_TMCR_RTGEN                *((volatile unsigned int*)(0x424A11ACUL))
#define bFM3_BT2_PPG_TMCR_CKS0                 *((volatile unsigned int*)(0x424A11B0UL))
#define bFM3_BT2_PPG_TMCR_CKS1                 *((volatile unsigned int*)(0x424A11B4UL))
#define bFM3_BT2_PPG_TMCR_CKS2                 *((volatile unsigned int*)(0x424A11B8UL))
#define bFM3_BT2_PPG_STC_UDIR                  *((volatile unsigned int*)(0x424A1200UL))
#define bFM3_BT2_PPG_STC_TGIR                  *((volatile unsigned int*)(0x424A1208UL))
#define bFM3_BT2_PPG_STC_UDIE                  *((volatile unsigned int*)(0x424A1210UL))
#define bFM3_BT2_PPG_STC_TGIE                  *((volatile unsigned int*)(0x424A1218UL))
#define bFM3_BT2_PPG_TMCR2_CKS3                *((volatile unsigned int*)(0x424A1220UL))

/* Base Timer 2 PWM registers */
#define bFM3_BT2_PWM_TMCR_STRG                 *((volatile unsigned int*)(0x424A1180UL))
#define bFM3_BT2_PWM_TMCR_CTEN                 *((volatile unsigned int*)(0x424A1184UL))
#define bFM3_BT2_PWM_TMCR_MDSE                 *((volatile unsigned int*)(0x424A1188UL))
#define bFM3_BT2_PWM_TMCR_OSEL                 *((volatile unsigned int*)(0x424A118CUL))
#define bFM3_BT2_PWM_TMCR_EGS0                 *((volatile unsigned int*)(0x424A11A0UL))
#define bFM3_BT2_PWM_TMCR_EGS1                 *((volatile unsigned int*)(0x424A11A4UL))
#define bFM3_BT2_PWM_TMCR_PMSK                 *((volatile unsigned int*)(0x424A11A8UL))
#define bFM3_BT2_PWM_TMCR_RTGEN                *((volatile unsigned int*)(0x424A11ACUL))
#define bFM3_BT2_PWM_TMCR_CKS0                 *((volatile unsigned int*)(0x424A11B0UL))
#define bFM3_BT2_PWM_TMCR_CKS1                 *((volatile unsigned int*)(0x424A11B4UL))
#define bFM3_BT2_PWM_TMCR_CKS2                 *((volatile unsigned int*)(0x424A11B8UL))
#define bFM3_BT2_PWM_STC_UDIR                  *((volatile unsigned int*)(0x424A1200UL))
#define bFM3_BT2_PWM_STC_DTIR                  *((volatile unsigned int*)(0x424A1204UL))
#define bFM3_BT2_PWM_STC_TGIR                  *((volatile unsigned int*)(0x424A1208UL))
#define bFM3_BT2_PWM_STC_UDIE                  *((volatile unsigned int*)(0x424A1210UL))
#define bFM3_BT2_PWM_STC_DTIE                  *((volatile unsigned int*)(0x424A1214UL))
#define bFM3_BT2_PWM_STC_TGIE                  *((volatile unsigned int*)(0x424A1218UL))
#define bFM3_BT2_PWM_TMCR2_CKS3                *((volatile unsigned int*)(0x424A1220UL))

/* Base Timer 2 RT registers */
#define bFM3_BT2_RT_TMCR_STRG                  *((volatile unsigned int*)(0x424A1180UL))
#define bFM3_BT2_RT_TMCR_CTEN                  *((volatile unsigned int*)(0x424A1184UL))
#define bFM3_BT2_RT_TMCR_MDSE                  *((volatile unsigned int*)(0x424A1188UL))
#define bFM3_BT2_RT_TMCR_OSEL                  *((volatile unsigned int*)(0x424A118CUL))
#define bFM3_BT2_RT_TMCR_T32                   *((volatile unsigned int*)(0x424A119CUL))
#define bFM3_BT2_RT_TMCR_EGS0                  *((volatile unsigned int*)(0x424A11A0UL))
#define bFM3_BT2_RT_TMCR_EGS1                  *((volatile unsigned int*)(0x424A11A4UL))
#define bFM3_BT2_RT_TMCR_CKS0                  *((volatile unsigned int*)(0x424A11B0UL))
#define bFM3_BT2_RT_TMCR_CKS1                  *((volatile unsigned int*)(0x424A11B4UL))
#define bFM3_BT2_RT_TMCR_CKS2                  *((volatile unsigned int*)(0x424A11B8UL))
#define bFM3_BT2_RT_STC_UDIR                   *((volatile unsigned int*)(0x424A1200UL))
#define bFM3_BT2_RT_STC_TGIR                   *((volatile unsigned int*)(0x424A1208UL))
#define bFM3_BT2_RT_STC_UDIE                   *((volatile unsigned int*)(0x424A1210UL))
#define bFM3_BT2_RT_STC_TGIE                   *((volatile unsigned int*)(0x424A1218UL))
#define bFM3_BT2_RT_TMCR2_CKS3                 *((volatile unsigned int*)(0x424A1220UL))

/* Base Timer 2 PWC registers */
#define bFM3_BT2_PWC_TMCR_CTEN                 *((volatile unsigned int*)(0x424A1184UL))
#define bFM3_BT2_PWC_TMCR_MDSE                 *((volatile unsigned int*)(0x424A1188UL))
#define bFM3_BT2_PWC_TMCR_T32                  *((volatile unsigned int*)(0x424A119CUL))
#define bFM3_BT2_PWC_TMCR_EGS0                 *((volatile unsigned int*)(0x424A11A0UL))
#define bFM3_BT2_PWC_TMCR_EGS1                 *((volatile unsigned int*)(0x424A11A4UL))
#define bFM3_BT2_PWC_TMCR_EGS2                 *((volatile unsigned int*)(0x424A11A8UL))
#define bFM3_BT2_PWC_TMCR_CKS0                 *((volatile unsigned int*)(0x424A11B0UL))
#define bFM3_BT2_PWC_TMCR_CKS1                 *((volatile unsigned int*)(0x424A11B4UL))
#define bFM3_BT2_PWC_TMCR_CKS2                 *((volatile unsigned int*)(0x424A11B8UL))
#define bFM3_BT2_PWC_STC_OVIR                  *((volatile unsigned int*)(0x424A1200UL))
#define bFM3_BT2_PWC_STC_EDIR                  *((volatile unsigned int*)(0x424A1208UL))
#define bFM3_BT2_PWC_STC_OVIE                  *((volatile unsigned int*)(0x424A1210UL))
#define bFM3_BT2_PWC_STC_EDIE                  *((volatile unsigned int*)(0x424A1218UL))
#define bFM3_BT2_PWC_STC_ERR                   *((volatile unsigned int*)(0x424A121CUL))
#define bFM3_BT2_PWC_TMCR2_CKS3                *((volatile unsigned int*)(0x424A1220UL))

/* Base Timer 3 PPG registers */
#define bFM3_BT3_PPG_TMCR_STRG                 *((volatile unsigned int*)(0x424A1980UL))
#define bFM3_BT3_PPG_TMCR_CTEN                 *((volatile unsigned int*)(0x424A1984UL))
#define bFM3_BT3_PPG_TMCR_MDSE                 *((volatile unsigned int*)(0x424A1988UL))
#define bFM3_BT3_PPG_TMCR_OSEL                 *((volatile unsigned int*)(0x424A198CUL))
#define bFM3_BT3_PPG_TMCR_EGS0                 *((volatile unsigned int*)(0x424A19A0UL))
#define bFM3_BT3_PPG_TMCR_EGS1                 *((volatile unsigned int*)(0x424A19A4UL))
#define bFM3_BT3_PPG_TMCR_PMSK                 *((volatile unsigned int*)(0x424A19A8UL))
#define bFM3_BT3_PPG_TMCR_RTGEN                *((volatile unsigned int*)(0x424A19ACUL))
#define bFM3_BT3_PPG_TMCR_CKS0                 *((volatile unsigned int*)(0x424A19B0UL))
#define bFM3_BT3_PPG_TMCR_CKS1                 *((volatile unsigned int*)(0x424A19B4UL))
#define bFM3_BT3_PPG_TMCR_CKS2                 *((volatile unsigned int*)(0x424A19B8UL))
#define bFM3_BT3_PPG_STC_UDIR                  *((volatile unsigned int*)(0x424A1A00UL))
#define bFM3_BT3_PPG_STC_TGIR                  *((volatile unsigned int*)(0x424A1A08UL))
#define bFM3_BT3_PPG_STC_UDIE                  *((volatile unsigned int*)(0x424A1A10UL))
#define bFM3_BT3_PPG_STC_TGIE                  *((volatile unsigned int*)(0x424A1A18UL))
#define bFM3_BT3_PPG_TMCR2_CKS3                *((volatile unsigned int*)(0x424A1A20UL))

/* Base Timer 3 PWM registers */
#define bFM3_BT3_PWM_TMCR_STRG                 *((volatile unsigned int*)(0x424A1980UL))
#define bFM3_BT3_PWM_TMCR_CTEN                 *((volatile unsigned int*)(0x424A1984UL))
#define bFM3_BT3_PWM_TMCR_MDSE                 *((volatile unsigned int*)(0x424A1988UL))
#define bFM3_BT3_PWM_TMCR_OSEL                 *((volatile unsigned int*)(0x424A198CUL))
#define bFM3_BT3_PWM_TMCR_EGS0                 *((volatile unsigned int*)(0x424A19A0UL))
#define bFM3_BT3_PWM_TMCR_EGS1                 *((volatile unsigned int*)(0x424A19A4UL))
#define bFM3_BT3_PWM_TMCR_PMSK                 *((volatile unsigned int*)(0x424A19A8UL))
#define bFM3_BT3_PWM_TMCR_RTGEN                *((volatile unsigned int*)(0x424A19ACUL))
#define bFM3_BT3_PWM_TMCR_CKS0                 *((volatile unsigned int*)(0x424A19B0UL))
#define bFM3_BT3_PWM_TMCR_CKS1                 *((volatile unsigned int*)(0x424A19B4UL))
#define bFM3_BT3_PWM_TMCR_CKS2                 *((volatile unsigned int*)(0x424A19B8UL))
#define bFM3_BT3_PWM_STC_UDIR                  *((volatile unsigned int*)(0x424A1A00UL))
#define bFM3_BT3_PWM_STC_DTIR                  *((volatile unsigned int*)(0x424A1A04UL))
#define bFM3_BT3_PWM_STC_TGIR                  *((volatile unsigned int*)(0x424A1A08UL))
#define bFM3_BT3_PWM_STC_UDIE                  *((volatile unsigned int*)(0x424A1A10UL))
#define bFM3_BT3_PWM_STC_DTIE                  *((volatile unsigned int*)(0x424A1A14UL))
#define bFM3_BT3_PWM_STC_TGIE                  *((volatile unsigned int*)(0x424A1A18UL))
#define bFM3_BT3_PWM_TMCR2_CKS3                *((volatile unsigned int*)(0x424A1A20UL))

/* Base Timer 3 RT registers */
#define bFM3_BT3_RT_TMCR_STRG                  *((volatile unsigned int*)(0x424A1980UL))
#define bFM3_BT3_RT_TMCR_CTEN                  *((volatile unsigned int*)(0x424A1984UL))
#define bFM3_BT3_RT_TMCR_MDSE                  *((volatile unsigned int*)(0x424A1988UL))
#define bFM3_BT3_RT_TMCR_OSEL                  *((volatile unsigned int*)(0x424A198CUL))
#define bFM3_BT3_RT_TMCR_T32                   *((volatile unsigned int*)(0x424A199CUL))
#define bFM3_BT3_RT_TMCR_EGS0                  *((volatile unsigned int*)(0x424A19A0UL))
#define bFM3_BT3_RT_TMCR_EGS1                  *((volatile unsigned int*)(0x424A19A4UL))
#define bFM3_BT3_RT_TMCR_CKS0                  *((volatile unsigned int*)(0x424A19B0UL))
#define bFM3_BT3_RT_TMCR_CKS1                  *((volatile unsigned int*)(0x424A19B4UL))
#define bFM3_BT3_RT_TMCR_CKS2                  *((volatile unsigned int*)(0x424A19B8UL))
#define bFM3_BT3_RT_STC_UDIR                   *((volatile unsigned int*)(0x424A1A00UL))
#define bFM3_BT3_RT_STC_TGIR                   *((volatile unsigned int*)(0x424A1A08UL))
#define bFM3_BT3_RT_STC_UDIE                   *((volatile unsigned int*)(0x424A1A10UL))
#define bFM3_BT3_RT_STC_TGIE                   *((volatile unsigned int*)(0x424A1A18UL))
#define bFM3_BT3_RT_TMCR2_CKS3                 *((volatile unsigned int*)(0x424A1A20UL))

/* Base Timer 3 PWC registers */
#define bFM3_BT3_PWC_TMCR_CTEN                 *((volatile unsigned int*)(0x424A1984UL))
#define bFM3_BT3_PWC_TMCR_MDSE                 *((volatile unsigned int*)(0x424A1988UL))
#define bFM3_BT3_PWC_TMCR_T32                  *((volatile unsigned int*)(0x424A199CUL))
#define bFM3_BT3_PWC_TMCR_EGS0                 *((volatile unsigned int*)(0x424A19A0UL))
#define bFM3_BT3_PWC_TMCR_EGS1                 *((volatile unsigned int*)(0x424A19A4UL))
#define bFM3_BT3_PWC_TMCR_EGS2                 *((volatile unsigned int*)(0x424A19A8UL))
#define bFM3_BT3_PWC_TMCR_CKS0                 *((volatile unsigned int*)(0x424A19B0UL))
#define bFM3_BT3_PWC_TMCR_CKS1                 *((volatile unsigned int*)(0x424A19B4UL))
#define bFM3_BT3_PWC_TMCR_CKS2                 *((volatile unsigned int*)(0x424A19B8UL))
#define bFM3_BT3_PWC_STC_OVIR                  *((volatile unsigned int*)(0x424A1A00UL))
#define bFM3_BT3_PWC_STC_EDIR                  *((volatile unsigned int*)(0x424A1A08UL))
#define bFM3_BT3_PWC_STC_OVIE                  *((volatile unsigned int*)(0x424A1A10UL))
#define bFM3_BT3_PWC_STC_EDIE                  *((volatile unsigned int*)(0x424A1A18UL))
#define bFM3_BT3_PWC_STC_ERR                   *((volatile unsigned int*)(0x424A1A1CUL))
#define bFM3_BT3_PWC_TMCR2_CKS3                *((volatile unsigned int*)(0x424A1A20UL))

/* Base Timer 4 PPG registers */
#define bFM3_BT4_PPG_TMCR_STRG                 *((volatile unsigned int*)(0x424A4180UL))
#define bFM3_BT4_PPG_TMCR_CTEN                 *((volatile unsigned int*)(0x424A4184UL))
#define bFM3_BT4_PPG_TMCR_MDSE                 *((volatile unsigned int*)(0x424A4188UL))
#define bFM3_BT4_PPG_TMCR_OSEL                 *((volatile unsigned int*)(0x424A418CUL))
#define bFM3_BT4_PPG_TMCR_EGS0                 *((volatile unsigned int*)(0x424A41A0UL))
#define bFM3_BT4_PPG_TMCR_EGS1                 *((volatile unsigned int*)(0x424A41A4UL))
#define bFM3_BT4_PPG_TMCR_PMSK                 *((volatile unsigned int*)(0x424A41A8UL))
#define bFM3_BT4_PPG_TMCR_RTGEN                *((volatile unsigned int*)(0x424A41ACUL))
#define bFM3_BT4_PPG_TMCR_CKS0                 *((volatile unsigned int*)(0x424A41B0UL))
#define bFM3_BT4_PPG_TMCR_CKS1                 *((volatile unsigned int*)(0x424A41B4UL))
#define bFM3_BT4_PPG_TMCR_CKS2                 *((volatile unsigned int*)(0x424A41B8UL))
#define bFM3_BT4_PPG_STC_UDIR                  *((volatile unsigned int*)(0x424A4200UL))
#define bFM3_BT4_PPG_STC_TGIR                  *((volatile unsigned int*)(0x424A4208UL))
#define bFM3_BT4_PPG_STC_UDIE                  *((volatile unsigned int*)(0x424A4210UL))
#define bFM3_BT4_PPG_STC_TGIE                  *((volatile unsigned int*)(0x424A4218UL))
#define bFM3_BT4_PPG_TMCR2_CKS3                *((volatile unsigned int*)(0x424A4220UL))

/* Base Timer 4 PWM registers */
#define bFM3_BT4_PWM_TMCR_STRG                 *((volatile unsigned int*)(0x424A4180UL))
#define bFM3_BT4_PWM_TMCR_CTEN                 *((volatile unsigned int*)(0x424A4184UL))
#define bFM3_BT4_PWM_TMCR_MDSE                 *((volatile unsigned int*)(0x424A4188UL))
#define bFM3_BT4_PWM_TMCR_OSEL                 *((volatile unsigned int*)(0x424A418CUL))
#define bFM3_BT4_PWM_TMCR_EGS0                 *((volatile unsigned int*)(0x424A41A0UL))
#define bFM3_BT4_PWM_TMCR_EGS1                 *((volatile unsigned int*)(0x424A41A4UL))
#define bFM3_BT4_PWM_TMCR_PMSK                 *((volatile unsigned int*)(0x424A41A8UL))
#define bFM3_BT4_PWM_TMCR_RTGEN                *((volatile unsigned int*)(0x424A41ACUL))
#define bFM3_BT4_PWM_TMCR_CKS0                 *((volatile unsigned int*)(0x424A41B0UL))
#define bFM3_BT4_PWM_TMCR_CKS1                 *((volatile unsigned int*)(0x424A41B4UL))
#define bFM3_BT4_PWM_TMCR_CKS2                 *((volatile unsigned int*)(0x424A41B8UL))
#define bFM3_BT4_PWM_STC_UDIR                  *((volatile unsigned int*)(0x424A4200UL))
#define bFM3_BT4_PWM_STC_DTIR                  *((volatile unsigned int*)(0x424A4204UL))
#define bFM3_BT4_PWM_STC_TGIR                  *((volatile unsigned int*)(0x424A4208UL))
#define bFM3_BT4_PWM_STC_UDIE                  *((volatile unsigned int*)(0x424A4210UL))
#define bFM3_BT4_PWM_STC_DTIE                  *((volatile unsigned int*)(0x424A4214UL))
#define bFM3_BT4_PWM_STC_TGIE                  *((volatile unsigned int*)(0x424A4218UL))
#define bFM3_BT4_PWM_TMCR2_CKS3                *((volatile unsigned int*)(0x424A4220UL))

/* Base Timer 4 RT registers */
#define bFM3_BT4_RT_TMCR_STRG                  *((volatile unsigned int*)(0x424A4180UL))
#define bFM3_BT4_RT_TMCR_CTEN                  *((volatile unsigned int*)(0x424A4184UL))
#define bFM3_BT4_RT_TMCR_MDSE                  *((volatile unsigned int*)(0x424A4188UL))
#define bFM3_BT4_RT_TMCR_OSEL                  *((volatile unsigned int*)(0x424A418CUL))
#define bFM3_BT4_RT_TMCR_T32                   *((volatile unsigned int*)(0x424A419CUL))
#define bFM3_BT4_RT_TMCR_EGS0                  *((volatile unsigned int*)(0x424A41A0UL))
#define bFM3_BT4_RT_TMCR_EGS1                  *((volatile unsigned int*)(0x424A41A4UL))
#define bFM3_BT4_RT_TMCR_CKS0                  *((volatile unsigned int*)(0x424A41B0UL))
#define bFM3_BT4_RT_TMCR_CKS1                  *((volatile unsigned int*)(0x424A41B4UL))
#define bFM3_BT4_RT_TMCR_CKS2                  *((volatile unsigned int*)(0x424A41B8UL))
#define bFM3_BT4_RT_STC_UDIR                   *((volatile unsigned int*)(0x424A4200UL))
#define bFM3_BT4_RT_STC_TGIR                   *((volatile unsigned int*)(0x424A4208UL))
#define bFM3_BT4_RT_STC_UDIE                   *((volatile unsigned int*)(0x424A4210UL))
#define bFM3_BT4_RT_STC_TGIE                   *((volatile unsigned int*)(0x424A4218UL))
#define bFM3_BT4_RT_TMCR2_CKS3                 *((volatile unsigned int*)(0x424A4220UL))

/* Base Timer 4 PWC registers */
#define bFM3_BT4_PWC_TMCR_CTEN                 *((volatile unsigned int*)(0x424A4184UL))
#define bFM3_BT4_PWC_TMCR_MDSE                 *((volatile unsigned int*)(0x424A4188UL))
#define bFM3_BT4_PWC_TMCR_T32                  *((volatile unsigned int*)(0x424A419CUL))
#define bFM3_BT4_PWC_TMCR_EGS0                 *((volatile unsigned int*)(0x424A41A0UL))
#define bFM3_BT4_PWC_TMCR_EGS1                 *((volatile unsigned int*)(0x424A41A4UL))
#define bFM3_BT4_PWC_TMCR_EGS2                 *((volatile unsigned int*)(0x424A41A8UL))
#define bFM3_BT4_PWC_TMCR_CKS0                 *((volatile unsigned int*)(0x424A41B0UL))
#define bFM3_BT4_PWC_TMCR_CKS1                 *((volatile unsigned int*)(0x424A41B4UL))
#define bFM3_BT4_PWC_TMCR_CKS2                 *((volatile unsigned int*)(0x424A41B8UL))
#define bFM3_BT4_PWC_STC_OVIR                  *((volatile unsigned int*)(0x424A4200UL))
#define bFM3_BT4_PWC_STC_EDIR                  *((volatile unsigned int*)(0x424A4208UL))
#define bFM3_BT4_PWC_STC_OVIE                  *((volatile unsigned int*)(0x424A4210UL))
#define bFM3_BT4_PWC_STC_EDIE                  *((volatile unsigned int*)(0x424A4218UL))
#define bFM3_BT4_PWC_STC_ERR                   *((volatile unsigned int*)(0x424A421CUL))
#define bFM3_BT4_PWC_TMCR2_CKS3                *((volatile unsigned int*)(0x424A4220UL))

/* Base Timer 5 PPG registers */
#define bFM3_BT5_PPG_TMCR_STRG                 *((volatile unsigned int*)(0x424A4980UL))
#define bFM3_BT5_PPG_TMCR_CTEN                 *((volatile unsigned int*)(0x424A4984UL))
#define bFM3_BT5_PPG_TMCR_MDSE                 *((volatile unsigned int*)(0x424A4988UL))
#define bFM3_BT5_PPG_TMCR_OSEL                 *((volatile unsigned int*)(0x424A498CUL))
#define bFM3_BT5_PPG_TMCR_EGS0                 *((volatile unsigned int*)(0x424A49A0UL))
#define bFM3_BT5_PPG_TMCR_EGS1                 *((volatile unsigned int*)(0x424A49A4UL))
#define bFM3_BT5_PPG_TMCR_PMSK                 *((volatile unsigned int*)(0x424A49A8UL))
#define bFM3_BT5_PPG_TMCR_RTGEN                *((volatile unsigned int*)(0x424A49ACUL))
#define bFM3_BT5_PPG_TMCR_CKS0                 *((volatile unsigned int*)(0x424A49B0UL))
#define bFM3_BT5_PPG_TMCR_CKS1                 *((volatile unsigned int*)(0x424A49B4UL))
#define bFM3_BT5_PPG_TMCR_CKS2                 *((volatile unsigned int*)(0x424A49B8UL))
#define bFM3_BT5_PPG_STC_UDIR                  *((volatile unsigned int*)(0x424A4A00UL))
#define bFM3_BT5_PPG_STC_TGIR                  *((volatile unsigned int*)(0x424A4A08UL))
#define bFM3_BT5_PPG_STC_UDIE                  *((volatile unsigned int*)(0x424A4A10UL))
#define bFM3_BT5_PPG_STC_TGIE                  *((volatile unsigned int*)(0x424A4A18UL))
#define bFM3_BT5_PPG_TMCR2_CKS3                *((volatile unsigned int*)(0x424A4A20UL))

/* Base Timer 5 PWM registers */
#define bFM3_BT5_PWM_TMCR_STRG                 *((volatile unsigned int*)(0x424A4980UL))
#define bFM3_BT5_PWM_TMCR_CTEN                 *((volatile unsigned int*)(0x424A4984UL))
#define bFM3_BT5_PWM_TMCR_MDSE                 *((volatile unsigned int*)(0x424A4988UL))
#define bFM3_BT5_PWM_TMCR_OSEL                 *((volatile unsigned int*)(0x424A498CUL))
#define bFM3_BT5_PWM_TMCR_EGS0                 *((volatile unsigned int*)(0x424A49A0UL))
#define bFM3_BT5_PWM_TMCR_EGS1                 *((volatile unsigned int*)(0x424A49A4UL))
#define bFM3_BT5_PWM_TMCR_PMSK                 *((volatile unsigned int*)(0x424A49A8UL))
#define bFM3_BT5_PWM_TMCR_RTGEN                *((volatile unsigned int*)(0x424A49ACUL))
#define bFM3_BT5_PWM_TMCR_CKS0                 *((volatile unsigned int*)(0x424A49B0UL))
#define bFM3_BT5_PWM_TMCR_CKS1                 *((volatile unsigned int*)(0x424A49B4UL))
#define bFM3_BT5_PWM_TMCR_CKS2                 *((volatile unsigned int*)(0x424A49B8UL))
#define bFM3_BT5_PWM_STC_UDIR                  *((volatile unsigned int*)(0x424A4A00UL))
#define bFM3_BT5_PWM_STC_DTIR                  *((volatile unsigned int*)(0x424A4A04UL))
#define bFM3_BT5_PWM_STC_TGIR                  *((volatile unsigned int*)(0x424A4A08UL))
#define bFM3_BT5_PWM_STC_UDIE                  *((volatile unsigned int*)(0x424A4A10UL))
#define bFM3_BT5_PWM_STC_DTIE                  *((volatile unsigned int*)(0x424A4A14UL))
#define bFM3_BT5_PWM_STC_TGIE                  *((volatile unsigned int*)(0x424A4A18UL))
#define bFM3_BT5_PWM_TMCR2_CKS3                *((volatile unsigned int*)(0x424A4A20UL))

/* Base Timer 5 RT registers */
#define bFM3_BT5_RT_TMCR_STRG                  *((volatile unsigned int*)(0x424A4980UL))
#define bFM3_BT5_RT_TMCR_CTEN                  *((volatile unsigned int*)(0x424A4984UL))
#define bFM3_BT5_RT_TMCR_MDSE                  *((volatile unsigned int*)(0x424A4988UL))
#define bFM3_BT5_RT_TMCR_OSEL                  *((volatile unsigned int*)(0x424A498CUL))
#define bFM3_BT5_RT_TMCR_T32                   *((volatile unsigned int*)(0x424A499CUL))
#define bFM3_BT5_RT_TMCR_EGS0                  *((volatile unsigned int*)(0x424A49A0UL))
#define bFM3_BT5_RT_TMCR_EGS1                  *((volatile unsigned int*)(0x424A49A4UL))
#define bFM3_BT5_RT_TMCR_CKS0                  *((volatile unsigned int*)(0x424A49B0UL))
#define bFM3_BT5_RT_TMCR_CKS1                  *((volatile unsigned int*)(0x424A49B4UL))
#define bFM3_BT5_RT_TMCR_CKS2                  *((volatile unsigned int*)(0x424A49B8UL))
#define bFM3_BT5_RT_STC_UDIR                   *((volatile unsigned int*)(0x424A4A00UL))
#define bFM3_BT5_RT_STC_TGIR                   *((volatile unsigned int*)(0x424A4A08UL))
#define bFM3_BT5_RT_STC_UDIE                   *((volatile unsigned int*)(0x424A4A10UL))
#define bFM3_BT5_RT_STC_TGIE                   *((volatile unsigned int*)(0x424A4A18UL))
#define bFM3_BT5_RT_TMCR2_CKS3                 *((volatile unsigned int*)(0x424A4A20UL))

/* Base Timer 5 PWC registers */
#define bFM3_BT5_PWC_TMCR_CTEN                 *((volatile unsigned int*)(0x424A4984UL))
#define bFM3_BT5_PWC_TMCR_MDSE                 *((volatile unsigned int*)(0x424A4988UL))
#define bFM3_BT5_PWC_TMCR_T32                  *((volatile unsigned int*)(0x424A499CUL))
#define bFM3_BT5_PWC_TMCR_EGS0                 *((volatile unsigned int*)(0x424A49A0UL))
#define bFM3_BT5_PWC_TMCR_EGS1                 *((volatile unsigned int*)(0x424A49A4UL))
#define bFM3_BT5_PWC_TMCR_EGS2                 *((volatile unsigned int*)(0x424A49A8UL))
#define bFM3_BT5_PWC_TMCR_CKS0                 *((volatile unsigned int*)(0x424A49B0UL))
#define bFM3_BT5_PWC_TMCR_CKS1                 *((volatile unsigned int*)(0x424A49B4UL))
#define bFM3_BT5_PWC_TMCR_CKS2                 *((volatile unsigned int*)(0x424A49B8UL))
#define bFM3_BT5_PWC_STC_OVIR                  *((volatile unsigned int*)(0x424A4A00UL))
#define bFM3_BT5_PWC_STC_EDIR                  *((volatile unsigned int*)(0x424A4A08UL))
#define bFM3_BT5_PWC_STC_OVIE                  *((volatile unsigned int*)(0x424A4A10UL))
#define bFM3_BT5_PWC_STC_EDIE                  *((volatile unsigned int*)(0x424A4A18UL))
#define bFM3_BT5_PWC_STC_ERR                   *((volatile unsigned int*)(0x424A4A1CUL))
#define bFM3_BT5_PWC_TMCR2_CKS3                *((volatile unsigned int*)(0x424A4A20UL))

/* Base Timer 6 PPG registers */
#define bFM3_BT6_PPG_TMCR_STRG                 *((volatile unsigned int*)(0x424A5180UL))
#define bFM3_BT6_PPG_TMCR_CTEN                 *((volatile unsigned int*)(0x424A5184UL))
#define bFM3_BT6_PPG_TMCR_MDSE                 *((volatile unsigned int*)(0x424A5188UL))
#define bFM3_BT6_PPG_TMCR_OSEL                 *((volatile unsigned int*)(0x424A518CUL))
#define bFM3_BT6_PPG_TMCR_EGS0                 *((volatile unsigned int*)(0x424A51A0UL))
#define bFM3_BT6_PPG_TMCR_EGS1                 *((volatile unsigned int*)(0x424A51A4UL))
#define bFM3_BT6_PPG_TMCR_PMSK                 *((volatile unsigned int*)(0x424A51A8UL))
#define bFM3_BT6_PPG_TMCR_RTGEN                *((volatile unsigned int*)(0x424A51ACUL))
#define bFM3_BT6_PPG_TMCR_CKS0                 *((volatile unsigned int*)(0x424A51B0UL))
#define bFM3_BT6_PPG_TMCR_CKS1                 *((volatile unsigned int*)(0x424A51B4UL))
#define bFM3_BT6_PPG_TMCR_CKS2                 *((volatile unsigned int*)(0x424A51B8UL))
#define bFM3_BT6_PPG_STC_UDIR                  *((volatile unsigned int*)(0x424A5200UL))
#define bFM3_BT6_PPG_STC_TGIR                  *((volatile unsigned int*)(0x424A5208UL))
#define bFM3_BT6_PPG_STC_UDIE                  *((volatile unsigned int*)(0x424A5210UL))
#define bFM3_BT6_PPG_STC_TGIE                  *((volatile unsigned int*)(0x424A5218UL))
#define bFM3_BT6_PPG_TMCR2_CKS3                *((volatile unsigned int*)(0x424A5220UL))

/* Base Timer 6 PWM registers */
#define bFM3_BT6_PWM_TMCR_STRG                 *((volatile unsigned int*)(0x424A5180UL))
#define bFM3_BT6_PWM_TMCR_CTEN                 *((volatile unsigned int*)(0x424A5184UL))
#define bFM3_BT6_PWM_TMCR_MDSE                 *((volatile unsigned int*)(0x424A5188UL))
#define bFM3_BT6_PWM_TMCR_OSEL                 *((volatile unsigned int*)(0x424A518CUL))
#define bFM3_BT6_PWM_TMCR_EGS0                 *((volatile unsigned int*)(0x424A51A0UL))
#define bFM3_BT6_PWM_TMCR_EGS1                 *((volatile unsigned int*)(0x424A51A4UL))
#define bFM3_BT6_PWM_TMCR_PMSK                 *((volatile unsigned int*)(0x424A51A8UL))
#define bFM3_BT6_PWM_TMCR_RTGEN                *((volatile unsigned int*)(0x424A51ACUL))
#define bFM3_BT6_PWM_TMCR_CKS0                 *((volatile unsigned int*)(0x424A51B0UL))
#define bFM3_BT6_PWM_TMCR_CKS1                 *((volatile unsigned int*)(0x424A51B4UL))
#define bFM3_BT6_PWM_TMCR_CKS2                 *((volatile unsigned int*)(0x424A51B8UL))
#define bFM3_BT6_PWM_STC_UDIR                  *((volatile unsigned int*)(0x424A5200UL))
#define bFM3_BT6_PWM_STC_DTIR                  *((volatile unsigned int*)(0x424A5204UL))
#define bFM3_BT6_PWM_STC_TGIR                  *((volatile unsigned int*)(0x424A5208UL))
#define bFM3_BT6_PWM_STC_UDIE                  *((volatile unsigned int*)(0x424A5210UL))
#define bFM3_BT6_PWM_STC_DTIE                  *((volatile unsigned int*)(0x424A5214UL))
#define bFM3_BT6_PWM_STC_TGIE                  *((volatile unsigned int*)(0x424A5218UL))
#define bFM3_BT6_PWM_TMCR2_CKS3                *((volatile unsigned int*)(0x424A5220UL))

/* Base Timer 6 RT registers */
#define bFM3_BT6_RT_TMCR_STRG                  *((volatile unsigned int*)(0x424A5180UL))
#define bFM3_BT6_RT_TMCR_CTEN                  *((volatile unsigned int*)(0x424A5184UL))
#define bFM3_BT6_RT_TMCR_MDSE                  *((volatile unsigned int*)(0x424A5188UL))
#define bFM3_BT6_RT_TMCR_OSEL                  *((volatile unsigned int*)(0x424A518CUL))
#define bFM3_BT6_RT_TMCR_T32                   *((volatile unsigned int*)(0x424A519CUL))
#define bFM3_BT6_RT_TMCR_EGS0                  *((volatile unsigned int*)(0x424A51A0UL))
#define bFM3_BT6_RT_TMCR_EGS1                  *((volatile unsigned int*)(0x424A51A4UL))
#define bFM3_BT6_RT_TMCR_CKS0                  *((volatile unsigned int*)(0x424A51B0UL))
#define bFM3_BT6_RT_TMCR_CKS1                  *((volatile unsigned int*)(0x424A51B4UL))
#define bFM3_BT6_RT_TMCR_CKS2                  *((volatile unsigned int*)(0x424A51B8UL))
#define bFM3_BT6_RT_STC_UDIR                   *((volatile unsigned int*)(0x424A5200UL))
#define bFM3_BT6_RT_STC_TGIR                   *((volatile unsigned int*)(0x424A5208UL))
#define bFM3_BT6_RT_STC_UDIE                   *((volatile unsigned int*)(0x424A5210UL))
#define bFM3_BT6_RT_STC_TGIE                   *((volatile unsigned int*)(0x424A5218UL))
#define bFM3_BT6_RT_TMCR2_CKS3                 *((volatile unsigned int*)(0x424A5220UL))

/* Base Timer 6 PWC registers */
#define bFM3_BT6_PWC_TMCR_CTEN                 *((volatile unsigned int*)(0x424A5184UL))
#define bFM3_BT6_PWC_TMCR_MDSE                 *((volatile unsigned int*)(0x424A5188UL))
#define bFM3_BT6_PWC_TMCR_T32                  *((volatile unsigned int*)(0x424A519CUL))
#define bFM3_BT6_PWC_TMCR_EGS0                 *((volatile unsigned int*)(0x424A51A0UL))
#define bFM3_BT6_PWC_TMCR_EGS1                 *((volatile unsigned int*)(0x424A51A4UL))
#define bFM3_BT6_PWC_TMCR_EGS2                 *((volatile unsigned int*)(0x424A51A8UL))
#define bFM3_BT6_PWC_TMCR_CKS0                 *((volatile unsigned int*)(0x424A51B0UL))
#define bFM3_BT6_PWC_TMCR_CKS1                 *((volatile unsigned int*)(0x424A51B4UL))
#define bFM3_BT6_PWC_TMCR_CKS2                 *((volatile unsigned int*)(0x424A51B8UL))
#define bFM3_BT6_PWC_STC_OVIR                  *((volatile unsigned int*)(0x424A5200UL))
#define bFM3_BT6_PWC_STC_EDIR                  *((volatile unsigned int*)(0x424A5208UL))
#define bFM3_BT6_PWC_STC_OVIE                  *((volatile unsigned int*)(0x424A5210UL))
#define bFM3_BT6_PWC_STC_EDIE                  *((volatile unsigned int*)(0x424A5218UL))
#define bFM3_BT6_PWC_STC_ERR                   *((volatile unsigned int*)(0x424A521CUL))
#define bFM3_BT6_PWC_TMCR2_CKS3                *((volatile unsigned int*)(0x424A5220UL))

/* Base Timer 7 PPG registers */
#define bFM3_BT7_PPG_TMCR_STRG                 *((volatile unsigned int*)(0x424A5980UL))
#define bFM3_BT7_PPG_TMCR_CTEN                 *((volatile unsigned int*)(0x424A5984UL))
#define bFM3_BT7_PPG_TMCR_MDSE                 *((volatile unsigned int*)(0x424A5988UL))
#define bFM3_BT7_PPG_TMCR_OSEL                 *((volatile unsigned int*)(0x424A598CUL))
#define bFM3_BT7_PPG_TMCR_EGS0                 *((volatile unsigned int*)(0x424A59A0UL))
#define bFM3_BT7_PPG_TMCR_EGS1                 *((volatile unsigned int*)(0x424A59A4UL))
#define bFM3_BT7_PPG_TMCR_PMSK                 *((volatile unsigned int*)(0x424A59A8UL))
#define bFM3_BT7_PPG_TMCR_RTGEN                *((volatile unsigned int*)(0x424A59ACUL))
#define bFM3_BT7_PPG_TMCR_CKS0                 *((volatile unsigned int*)(0x424A59B0UL))
#define bFM3_BT7_PPG_TMCR_CKS1                 *((volatile unsigned int*)(0x424A59B4UL))
#define bFM3_BT7_PPG_TMCR_CKS2                 *((volatile unsigned int*)(0x424A59B8UL))
#define bFM3_BT7_PPG_STC_UDIR                  *((volatile unsigned int*)(0x424A5A00UL))
#define bFM3_BT7_PPG_STC_TGIR                  *((volatile unsigned int*)(0x424A5A08UL))
#define bFM3_BT7_PPG_STC_UDIE                  *((volatile unsigned int*)(0x424A5A10UL))
#define bFM3_BT7_PPG_STC_TGIE                  *((volatile unsigned int*)(0x424A5A18UL))
#define bFM3_BT7_PPG_TMCR2_CKS3                *((volatile unsigned int*)(0x424A5A20UL))

/* Base Timer 7 PWM registers */
#define bFM3_BT7_PWM_TMCR_STRG                 *((volatile unsigned int*)(0x424A5980UL))
#define bFM3_BT7_PWM_TMCR_CTEN                 *((volatile unsigned int*)(0x424A5984UL))
#define bFM3_BT7_PWM_TMCR_MDSE                 *((volatile unsigned int*)(0x424A5988UL))
#define bFM3_BT7_PWM_TMCR_OSEL                 *((volatile unsigned int*)(0x424A598CUL))
#define bFM3_BT7_PWM_TMCR_EGS0                 *((volatile unsigned int*)(0x424A59A0UL))
#define bFM3_BT7_PWM_TMCR_EGS1                 *((volatile unsigned int*)(0x424A59A4UL))
#define bFM3_BT7_PWM_TMCR_PMSK                 *((volatile unsigned int*)(0x424A59A8UL))
#define bFM3_BT7_PWM_TMCR_RTGEN                *((volatile unsigned int*)(0x424A59ACUL))
#define bFM3_BT7_PWM_TMCR_CKS0                 *((volatile unsigned int*)(0x424A59B0UL))
#define bFM3_BT7_PWM_TMCR_CKS1                 *((volatile unsigned int*)(0x424A59B4UL))
#define bFM3_BT7_PWM_TMCR_CKS2                 *((volatile unsigned int*)(0x424A59B8UL))
#define bFM3_BT7_PWM_STC_UDIR                  *((volatile unsigned int*)(0x424A5A00UL))
#define bFM3_BT7_PWM_STC_DTIR                  *((volatile unsigned int*)(0x424A5A04UL))
#define bFM3_BT7_PWM_STC_TGIR                  *((volatile unsigned int*)(0x424A5A08UL))
#define bFM3_BT7_PWM_STC_UDIE                  *((volatile unsigned int*)(0x424A5A10UL))
#define bFM3_BT7_PWM_STC_DTIE                  *((volatile unsigned int*)(0x424A5A14UL))
#define bFM3_BT7_PWM_STC_TGIE                  *((volatile unsigned int*)(0x424A5A18UL))
#define bFM3_BT7_PWM_TMCR2_CKS3                *((volatile unsigned int*)(0x424A5A20UL))

/* Base Timer 7 RT registers */
#define bFM3_BT7_RT_TMCR_STRG                  *((volatile unsigned int*)(0x424A5980UL))
#define bFM3_BT7_RT_TMCR_CTEN                  *((volatile unsigned int*)(0x424A5984UL))
#define bFM3_BT7_RT_TMCR_MDSE                  *((volatile unsigned int*)(0x424A5988UL))
#define bFM3_BT7_RT_TMCR_OSEL                  *((volatile unsigned int*)(0x424A598CUL))
#define bFM3_BT7_RT_TMCR_T32                   *((volatile unsigned int*)(0x424A599CUL))
#define bFM3_BT7_RT_TMCR_EGS0                  *((volatile unsigned int*)(0x424A59A0UL))
#define bFM3_BT7_RT_TMCR_EGS1                  *((volatile unsigned int*)(0x424A59A4UL))
#define bFM3_BT7_RT_TMCR_CKS0                  *((volatile unsigned int*)(0x424A59B0UL))
#define bFM3_BT7_RT_TMCR_CKS1                  *((volatile unsigned int*)(0x424A59B4UL))
#define bFM3_BT7_RT_TMCR_CKS2                  *((volatile unsigned int*)(0x424A59B8UL))
#define bFM3_BT7_RT_STC_UDIR                   *((volatile unsigned int*)(0x424A5A00UL))
#define bFM3_BT7_RT_STC_TGIR                   *((volatile unsigned int*)(0x424A5A08UL))
#define bFM3_BT7_RT_STC_UDIE                   *((volatile unsigned int*)(0x424A5A10UL))
#define bFM3_BT7_RT_STC_TGIE                   *((volatile unsigned int*)(0x424A5A18UL))
#define bFM3_BT7_RT_TMCR2_CKS3                 *((volatile unsigned int*)(0x424A5A20UL))

/* Base Timer 7 PWC registers */
#define bFM3_BT7_PWC_TMCR_CTEN                 *((volatile unsigned int*)(0x424A5984UL))
#define bFM3_BT7_PWC_TMCR_MDSE                 *((volatile unsigned int*)(0x424A5988UL))
#define bFM3_BT7_PWC_TMCR_T32                  *((volatile unsigned int*)(0x424A599CUL))
#define bFM3_BT7_PWC_TMCR_EGS0                 *((volatile unsigned int*)(0x424A59A0UL))
#define bFM3_BT7_PWC_TMCR_EGS1                 *((volatile unsigned int*)(0x424A59A4UL))
#define bFM3_BT7_PWC_TMCR_EGS2                 *((volatile unsigned int*)(0x424A59A8UL))
#define bFM3_BT7_PWC_TMCR_CKS0                 *((volatile unsigned int*)(0x424A59B0UL))
#define bFM3_BT7_PWC_TMCR_CKS1                 *((volatile unsigned int*)(0x424A59B4UL))
#define bFM3_BT7_PWC_TMCR_CKS2                 *((volatile unsigned int*)(0x424A59B8UL))
#define bFM3_BT7_PWC_STC_OVIR                  *((volatile unsigned int*)(0x424A5A00UL))
#define bFM3_BT7_PWC_STC_EDIR                  *((volatile unsigned int*)(0x424A5A08UL))
#define bFM3_BT7_PWC_STC_OVIE                  *((volatile unsigned int*)(0x424A5A10UL))
#define bFM3_BT7_PWC_STC_EDIE                  *((volatile unsigned int*)(0x424A5A18UL))
#define bFM3_BT7_PWC_STC_ERR                   *((volatile unsigned int*)(0x424A5A1CUL))
#define bFM3_BT7_PWC_TMCR2_CKS3                *((volatile unsigned int*)(0x424A5A20UL))

/* Base Timer I/O selector channel 0 - channel 3 registers */
#define bFM3_BTIOSEL03_BTSEL0123_SEL01_0       *((volatile unsigned int*)(0x424A2020UL))
#define bFM3_BTIOSEL03_BTSEL0123_SEL01_1       *((volatile unsigned int*)(0x424A2024UL))
#define bFM3_BTIOSEL03_BTSEL0123_SEL01_2       *((volatile unsigned int*)(0x424A2028UL))
#define bFM3_BTIOSEL03_BTSEL0123_SEL01_3       *((volatile unsigned int*)(0x424A202CUL))
#define bFM3_BTIOSEL03_BTSEL0123_SEL23_0       *((volatile unsigned int*)(0x424A2030UL))
#define bFM3_BTIOSEL03_BTSEL0123_SEL23_1       *((volatile unsigned int*)(0x424A2034UL))
#define bFM3_BTIOSEL03_BTSEL0123_SEL23_2       *((volatile unsigned int*)(0x424A2038UL))
#define bFM3_BTIOSEL03_BTSEL0123_SEL23_3       *((volatile unsigned int*)(0x424A203CUL))

/* Base Timer I/O selector channel 4 - channel 7 registers */
#define bFM3_BTIOSEL47_BTSEL4567_SEL45_0       *((volatile unsigned int*)(0x424A6020UL))
#define bFM3_BTIOSEL47_BTSEL4567_SEL45_1       *((volatile unsigned int*)(0x424A6024UL))
#define bFM3_BTIOSEL47_BTSEL4567_SEL45_2       *((volatile unsigned int*)(0x424A6028UL))
#define bFM3_BTIOSEL47_BTSEL4567_SEL45_3       *((volatile unsigned int*)(0x424A602CUL))
#define bFM3_BTIOSEL47_BTSEL4567_SEL67_0       *((volatile unsigned int*)(0x424A6030UL))
#define bFM3_BTIOSEL47_BTSEL4567_SEL67_1       *((volatile unsigned int*)(0x424A6034UL))
#define bFM3_BTIOSEL47_BTSEL4567_SEL67_2       *((volatile unsigned int*)(0x424A6038UL))
#define bFM3_BTIOSEL47_BTSEL4567_SEL67_3       *((volatile unsigned int*)(0x424A603CUL))

/* Software based Simulation Startup (Base Timer) register */
#define bFM3_SBSSR_BTSSSR_SSSR0                *((volatile unsigned int*)(0x424BFF80UL))
#define bFM3_SBSSR_BTSSSR_SSSR1                *((volatile unsigned int*)(0x424BFF84UL))
#define bFM3_SBSSR_BTSSSR_SSSR2                *((volatile unsigned int*)(0x424BFF88UL))
#define bFM3_SBSSR_BTSSSR_SSSR3                *((volatile unsigned int*)(0x424BFF8CUL))
#define bFM3_SBSSR_BTSSSR_SSSR4                *((volatile unsigned int*)(0x424BFF90UL))
#define bFM3_SBSSR_BTSSSR_SSSR5                *((volatile unsigned int*)(0x424BFF94UL))
#define bFM3_SBSSR_BTSSSR_SSSR6                *((volatile unsigned int*)(0x424BFF98UL))
#define bFM3_SBSSR_BTSSSR_SSSR7                *((volatile unsigned int*)(0x424BFF9CUL))

/* Quad position and revolution counter channel 0 registers */
#define bFM3_QPRC0_QICR_QPCMIE                 *((volatile unsigned int*)(0x424C0280UL))
#define bFM3_QPRC0_QICR_QPCMF                  *((volatile unsigned int*)(0x424C0284UL))
#define bFM3_QPRC0_QICR_QPRCMIE                *((volatile unsigned int*)(0x424C0288UL))
#define bFM3_QPRC0_QICR_QPRCMF                 *((volatile unsigned int*)(0x424C028CUL))
#define bFM3_QPRC0_QICR_OUZIE                  *((volatile unsigned int*)(0x424C0290UL))
#define bFM3_QPRC0_QICR_UFDF                   *((volatile unsigned int*)(0x424C0294UL))
#define bFM3_QPRC0_QICR_OFDF                   *((volatile unsigned int*)(0x424C0298UL))
#define bFM3_QPRC0_QICR_ZIIF                   *((volatile unsigned int*)(0x424C029CUL))
#define bFM3_QPRC0_QICR_CDCIE                  *((volatile unsigned int*)(0x424C02A0UL))
#define bFM3_QPRC0_QICR_CDCF                   *((volatile unsigned int*)(0x424C02A4UL))
#define bFM3_QPRC0_QICR_DIRPC                  *((volatile unsigned int*)(0x424C02A8UL))
#define bFM3_QPRC0_QICR_DIROU                  *((volatile unsigned int*)(0x424C02ACUL))
#define bFM3_QPRC0_QICR_QPCNRCMIE              *((volatile unsigned int*)(0x424C02B0UL))
#define bFM3_QPRC0_QICR_QPCNRCMF               *((volatile unsigned int*)(0x424C02B4UL))
#define bFM3_QPRC0_QICRL_QPCMIE                *((volatile unsigned int*)(0x424C0280UL))
#define bFM3_QPRC0_QICRL_QPCMF                 *((volatile unsigned int*)(0x424C0284UL))
#define bFM3_QPRC0_QICRL_QPRCMIE               *((volatile unsigned int*)(0x424C0288UL))
#define bFM3_QPRC0_QICRL_QPRCMF                *((volatile unsigned int*)(0x424C028CUL))
#define bFM3_QPRC0_QICRL_OUZIE                 *((volatile unsigned int*)(0x424C0290UL))
#define bFM3_QPRC0_QICRL_UFDF                  *((volatile unsigned int*)(0x424C0294UL))
#define bFM3_QPRC0_QICRL_OFDF                  *((volatile unsigned int*)(0x424C0298UL))
#define bFM3_QPRC0_QICRL_ZIIF                  *((volatile unsigned int*)(0x424C029CUL))
#define bFM3_QPRC0_QICRH_CDCIE                 *((volatile unsigned int*)(0x424C02A0UL))
#define bFM3_QPRC0_QICRH_CDCF                  *((volatile unsigned int*)(0x424C02A4UL))
#define bFM3_QPRC0_QICRH_DIRPC                 *((volatile unsigned int*)(0x424C02A8UL))
#define bFM3_QPRC0_QICRH_DIROU                 *((volatile unsigned int*)(0x424C02ACUL))
#define bFM3_QPRC0_QICRH_QPCNRCMIE             *((volatile unsigned int*)(0x424C02B0UL))
#define bFM3_QPRC0_QICRH_QPCNRCMF              *((volatile unsigned int*)(0x424C02B4UL))
#define bFM3_QPRC0_QCR_PCM0                    *((volatile unsigned int*)(0x424C0300UL))
#define bFM3_QPRC0_QCR_PCM1                    *((volatile unsigned int*)(0x424C0304UL))
#define bFM3_QPRC0_QCR_RCM0                    *((volatile unsigned int*)(0x424C0308UL))
#define bFM3_QPRC0_QCR_RCM1                    *((volatile unsigned int*)(0x424C030CUL))
#define bFM3_QPRC0_QCR_PSTP                    *((volatile unsigned int*)(0x424C0310UL))
#define bFM3_QPRC0_QCR_CGSC                    *((volatile unsigned int*)(0x424C0314UL))
#define bFM3_QPRC0_QCR_RSEL                    *((volatile unsigned int*)(0x424C0318UL))
#define bFM3_QPRC0_QCR_SWAP                    *((volatile unsigned int*)(0x424C031CUL))
#define bFM3_QPRC0_QCR_PCRM0                   *((volatile unsigned int*)(0x424C0320UL))
#define bFM3_QPRC0_QCR_PCRM1                   *((volatile unsigned int*)(0x424C0324UL))
#define bFM3_QPRC0_QCR_AES0                    *((volatile unsigned int*)(0x424C0328UL))
#define bFM3_QPRC0_QCR_AES1                    *((volatile unsigned int*)(0x424C032CUL))
#define bFM3_QPRC0_QCR_BES0                    *((volatile unsigned int*)(0x424C0330UL))
#define bFM3_QPRC0_QCR_BES1                    *((volatile unsigned int*)(0x424C0334UL))
#define bFM3_QPRC0_QCR_CGE0                    *((volatile unsigned int*)(0x424C0338UL))
#define bFM3_QPRC0_QCR_CGE1                    *((volatile unsigned int*)(0x424C033CUL))
#define bFM3_QPRC0_QCRL_PCM0                   *((volatile unsigned int*)(0x424C0300UL))
#define bFM3_QPRC0_QCRL_PCM1                   *((volatile unsigned int*)(0x424C0304UL))
#define bFM3_QPRC0_QCRL_RCM0                   *((volatile unsigned int*)(0x424C0308UL))
#define bFM3_QPRC0_QCRL_RCM1                   *((volatile unsigned int*)(0x424C030CUL))
#define bFM3_QPRC0_QCRL_PSTP                   *((volatile unsigned int*)(0x424C0310UL))
#define bFM3_QPRC0_QCRL_CGSC                   *((volatile unsigned int*)(0x424C0314UL))
#define bFM3_QPRC0_QCRL_RSEL                   *((volatile unsigned int*)(0x424C0318UL))
#define bFM3_QPRC0_QCRL_SWAP                   *((volatile unsigned int*)(0x424C031CUL))
#define bFM3_QPRC0_QCRH_PCRM0                  *((volatile unsigned int*)(0x424C0320UL))
#define bFM3_QPRC0_QCRH_PCRM1                  *((volatile unsigned int*)(0x424C0324UL))
#define bFM3_QPRC0_QCRH_AES0                   *((volatile unsigned int*)(0x424C0328UL))
#define bFM3_QPRC0_QCRH_AES1                   *((volatile unsigned int*)(0x424C032CUL))
#define bFM3_QPRC0_QCRH_BES0                   *((volatile unsigned int*)(0x424C0330UL))
#define bFM3_QPRC0_QCRH_BES1                   *((volatile unsigned int*)(0x424C0334UL))
#define bFM3_QPRC0_QCRH_CGE0                   *((volatile unsigned int*)(0x424C0338UL))
#define bFM3_QPRC0_QCRH_CGE1                   *((volatile unsigned int*)(0x424C033CUL))
#define bFM3_QPRC0_QECR_ORNGMD                 *((volatile unsigned int*)(0x424C0380UL))
#define bFM3_QPRC0_QECR_ORNGF                  *((volatile unsigned int*)(0x424C0384UL))
#define bFM3_QPRC0_QECR_ORNGIE                 *((volatile unsigned int*)(0x424C0388UL))


/* 12-bit ADC unit 0 registers */
#define bFM3_ADC0_ADSR_SCS                     *((volatile unsigned int*)(0x424E0000UL))
#define bFM3_ADC0_ADSR_PCS                     *((volatile unsigned int*)(0x424E0004UL))
#define bFM3_ADC0_ADSR_PCNS                    *((volatile unsigned int*)(0x424E0008UL))
#define bFM3_ADC0_ADSR_FDAS                    *((volatile unsigned int*)(0x424E0018UL))
#define bFM3_ADC0_ADSR_ADSTP                   *((volatile unsigned int*)(0x424E001CUL))
#define bFM3_ADC0_ADCR_OVRIE                   *((volatile unsigned int*)(0x424E0020UL))
#define bFM3_ADC0_ADCR_CMPIE                   *((volatile unsigned int*)(0x424E0024UL))
#define bFM3_ADC0_ADCR_PCIE                    *((volatile unsigned int*)(0x424E0028UL))
#define bFM3_ADC0_ADCR_SCIE                    *((volatile unsigned int*)(0x424E002CUL))
#define bFM3_ADC0_ADCR_CMPIF                   *((volatile unsigned int*)(0x424E0034UL))
#define bFM3_ADC0_ADCR_PCIF                    *((volatile unsigned int*)(0x424E0038UL))
#define bFM3_ADC0_ADCR_SCIF                    *((volatile unsigned int*)(0x424E003CUL))
#define bFM3_ADC0_SFNS_SFS0                    *((volatile unsigned int*)(0x424E0100UL))
#define bFM3_ADC0_SFNS_SFS1                    *((volatile unsigned int*)(0x424E0104UL))
#define bFM3_ADC0_SFNS_SFS2                    *((volatile unsigned int*)(0x424E0108UL))
#define bFM3_ADC0_SFNS_SFS3                    *((volatile unsigned int*)(0x424E010CUL))
#define bFM3_ADC0_SCCR_SSTR                    *((volatile unsigned int*)(0x424E0120UL))
#define bFM3_ADC0_SCCR_SHEN                    *((volatile unsigned int*)(0x424E0124UL))
#define bFM3_ADC0_SCCR_RPT                     *((volatile unsigned int*)(0x424E0128UL))
#define bFM3_ADC0_SCCR_SFCLR                   *((volatile unsigned int*)(0x424E0130UL))
#define bFM3_ADC0_SCCR_SOVR                    *((volatile unsigned int*)(0x424E0134UL))
#define bFM3_ADC0_SCCR_SFUL                    *((volatile unsigned int*)(0x424E0138UL))
#define bFM3_ADC0_SCCR_SEMP                    *((volatile unsigned int*)(0x424E013CUL))
#define bFM3_ADC0_SCFDL_SC0                    *((volatile unsigned short*)(0x424E0180UL))
#define bFM3_ADC0_SCFDL_SC1                    *((volatile unsigned short*)(0x424E0184UL))
#define bFM3_ADC0_SCFDL_SC2                    *((volatile unsigned short*)(0x424E0188UL))
#define bFM3_ADC0_SCFDL_SC3                    *((volatile unsigned short*)(0x424E018CUL))
#define bFM3_ADC0_SCFDL_SC4                    *((volatile unsigned short*)(0x424E0190UL))
#define bFM3_ADC0_SCFDL_RS0                    *((volatile unsigned short*)(0x424E01A0UL))
#define bFM3_ADC0_SCFDL_RS1                    *((volatile unsigned short*)(0x424E01A4UL))
#define bFM3_ADC0_SCFDL_INVL                   *((volatile unsigned short*)(0x424E01B0UL))
#define bFM3_ADC0_SCFDH_SD0                    *((volatile unsigned short*)(0x424E01D0UL))
#define bFM3_ADC0_SCFDH_SD1                    *((volatile unsigned short*)(0x424E01D4UL))
#define bFM3_ADC0_SCFDH_SD2                    *((volatile unsigned short*)(0x424E01D8UL))
#define bFM3_ADC0_SCFDH_SD3                    *((volatile unsigned short*)(0x424E01DCUL))
#define bFM3_ADC0_SCFDH_SD4                    *((volatile unsigned short*)(0x424E01E0UL))
#define bFM3_ADC0_SCFDH_SD5                    *((volatile unsigned short*)(0x424E01E4UL))
#define bFM3_ADC0_SCFDH_SD6                    *((volatile unsigned short*)(0x424E01E8UL))
#define bFM3_ADC0_SCFDH_SD7                    *((volatile unsigned short*)(0x424E01ECUL))
#define bFM3_ADC0_SCFDH_SD8                    *((volatile unsigned short*)(0x424E01F0UL))
#define bFM3_ADC0_SCFDH_SD9                    *((volatile unsigned short*)(0x424E01F4UL))
#define bFM3_ADC0_SCFDH_SD10                   *((volatile unsigned short*)(0x424E01F8UL))
#define bFM3_ADC0_SCFDH_SD11                   *((volatile unsigned short*)(0x424E01FCUL))
#define bFM3_ADC0_SCIS23_AN16                  *((volatile unsigned int*)(0x424E0200UL))
#define bFM3_ADC0_SCIS23_AN17                  *((volatile unsigned int*)(0x424E0204UL))
#define bFM3_ADC0_SCIS23_AN18                  *((volatile unsigned int*)(0x424E0208UL))
#define bFM3_ADC0_SCIS23_AN19                  *((volatile unsigned int*)(0x424E020CUL))
#define bFM3_ADC0_SCIS23_AN20                  *((volatile unsigned int*)(0x424E0210UL))
#define bFM3_ADC0_SCIS23_AN21                  *((volatile unsigned int*)(0x424E0214UL))
#define bFM3_ADC0_SCIS23_AN22                  *((volatile unsigned int*)(0x424E0218UL))
#define bFM3_ADC0_SCIS23_AN23                  *((volatile unsigned int*)(0x424E021CUL))
#define bFM3_ADC0_SCIS23_AN24                  *((volatile unsigned int*)(0x424E0220UL))
#define bFM3_ADC0_SCIS23_AN25                  *((volatile unsigned int*)(0x424E0224UL))
#define bFM3_ADC0_SCIS23_AN26                  *((volatile unsigned int*)(0x424E0228UL))
#define bFM3_ADC0_SCIS23_AN27                  *((volatile unsigned int*)(0x424E022CUL))
#define bFM3_ADC0_SCIS23_AN28                  *((volatile unsigned int*)(0x424E0230UL))
#define bFM3_ADC0_SCIS23_AN29                  *((volatile unsigned int*)(0x424E0234UL))
#define bFM3_ADC0_SCIS23_AN30                  *((volatile unsigned int*)(0x424E0238UL))
#define bFM3_ADC0_SCIS23_AN31                  *((volatile unsigned int*)(0x424E023CUL))
#define bFM3_ADC0_SCIS2_AN16                   *((volatile unsigned int*)(0x424E0200UL))
#define bFM3_ADC0_SCIS2_AN17                   *((volatile unsigned int*)(0x424E0204UL))
#define bFM3_ADC0_SCIS2_AN18                   *((volatile unsigned int*)(0x424E0208UL))
#define bFM3_ADC0_SCIS2_AN19                   *((volatile unsigned int*)(0x424E020CUL))
#define bFM3_ADC0_SCIS2_AN20                   *((volatile unsigned int*)(0x424E0210UL))
#define bFM3_ADC0_SCIS2_AN21                   *((volatile unsigned int*)(0x424E0214UL))
#define bFM3_ADC0_SCIS2_AN22                   *((volatile unsigned int*)(0x424E0218UL))
#define bFM3_ADC0_SCIS2_AN23                   *((volatile unsigned int*)(0x424E021CUL))
#define bFM3_ADC0_SCIS3_AN24                   *((volatile unsigned int*)(0x424E0220UL))
#define bFM3_ADC0_SCIS3_AN25                   *((volatile unsigned int*)(0x424E0224UL))
#define bFM3_ADC0_SCIS3_AN26                   *((volatile unsigned int*)(0x424E0228UL))
#define bFM3_ADC0_SCIS3_AN27                   *((volatile unsigned int*)(0x424E022CUL))
#define bFM3_ADC0_SCIS3_AN28                   *((volatile unsigned int*)(0x424E0230UL))
#define bFM3_ADC0_SCIS3_AN29                   *((volatile unsigned int*)(0x424E0234UL))
#define bFM3_ADC0_SCIS3_AN30                   *((volatile unsigned int*)(0x424E0238UL))
#define bFM3_ADC0_SCIS3_AN31                   *((volatile unsigned int*)(0x424E023CUL))
#define bFM3_ADC0_SCIS01_AN0                   *((volatile unsigned int*)(0x424E0280UL))
#define bFM3_ADC0_SCIS01_AN1                   *((volatile unsigned int*)(0x424E0284UL))
#define bFM3_ADC0_SCIS01_AN2                   *((volatile unsigned int*)(0x424E0288UL))
#define bFM3_ADC0_SCIS01_AN3                   *((volatile unsigned int*)(0x424E028CUL))
#define bFM3_ADC0_SCIS01_AN4                   *((volatile unsigned int*)(0x424E0290UL))
#define bFM3_ADC0_SCIS01_AN5                   *((volatile unsigned int*)(0x424E0294UL))
#define bFM3_ADC0_SCIS01_AN6                   *((volatile unsigned int*)(0x424E0298UL))
#define bFM3_ADC0_SCIS01_AN7                   *((volatile unsigned int*)(0x424E029CUL))
#define bFM3_ADC0_SCIS01_AN8                   *((volatile unsigned int*)(0x424E02A0UL))
#define bFM3_ADC0_SCIS01_AN9                   *((volatile unsigned int*)(0x424E02A4UL))
#define bFM3_ADC0_SCIS01_AN10                  *((volatile unsigned int*)(0x424E02A8UL))
#define bFM3_ADC0_SCIS01_AN11                  *((volatile unsigned int*)(0x424E02ACUL))
#define bFM3_ADC0_SCIS01_AN12                  *((volatile unsigned int*)(0x424E02B0UL))
#define bFM3_ADC0_SCIS01_AN13                  *((volatile unsigned int*)(0x424E02B4UL))
#define bFM3_ADC0_SCIS01_AN14                  *((volatile unsigned int*)(0x424E02B8UL))
#define bFM3_ADC0_SCIS01_AN15                  *((volatile unsigned int*)(0x424E02BCUL))
#define bFM3_ADC0_SCIS0_AN0                    *((volatile unsigned int*)(0x424E0280UL))
#define bFM3_ADC0_SCIS0_AN1                    *((volatile unsigned int*)(0x424E0284UL))
#define bFM3_ADC0_SCIS0_AN2                    *((volatile unsigned int*)(0x424E0288UL))
#define bFM3_ADC0_SCIS0_AN3                    *((volatile unsigned int*)(0x424E028CUL))
#define bFM3_ADC0_SCIS0_AN4                    *((volatile unsigned int*)(0x424E0290UL))
#define bFM3_ADC0_SCIS0_AN5                    *((volatile unsigned int*)(0x424E0294UL))
#define bFM3_ADC0_SCIS0_AN6                    *((volatile unsigned int*)(0x424E0298UL))
#define bFM3_ADC0_SCIS0_AN7                    *((volatile unsigned int*)(0x424E029CUL))
#define bFM3_ADC0_SCIS1_AN8                    *((volatile unsigned int*)(0x424E02A0UL))
#define bFM3_ADC0_SCIS1_AN9                    *((volatile unsigned int*)(0x424E02A4UL))
#define bFM3_ADC0_SCIS1_AN10                   *((volatile unsigned int*)(0x424E02A8UL))
#define bFM3_ADC0_SCIS1_AN11                   *((volatile unsigned int*)(0x424E02ACUL))
#define bFM3_ADC0_SCIS1_AN12                   *((volatile unsigned int*)(0x424E02B0UL))
#define bFM3_ADC0_SCIS1_AN13                   *((volatile unsigned int*)(0x424E02B4UL))
#define bFM3_ADC0_SCIS1_AN14                   *((volatile unsigned int*)(0x424E02B8UL))
#define bFM3_ADC0_SCIS1_AN15                   *((volatile unsigned int*)(0x424E02BCUL))
#define bFM3_ADC0_PFNS_PFS0                    *((volatile unsigned int*)(0x424E0300UL))
#define bFM3_ADC0_PFNS_PFS1                    *((volatile unsigned int*)(0x424E0304UL))
#define bFM3_ADC0_PFNS_TEST0                   *((volatile unsigned int*)(0x424E0310UL))
#define bFM3_ADC0_PFNS_TEST1                   *((volatile unsigned int*)(0x424E0314UL))
#define bFM3_ADC0_PCCR_PSTR                    *((volatile unsigned int*)(0x424E0320UL))
#define bFM3_ADC0_PCCR_PHEN                    *((volatile unsigned int*)(0x424E0324UL))
#define bFM3_ADC0_PCCR_PEEN                    *((volatile unsigned int*)(0x424E0328UL))
#define bFM3_ADC0_PCCR_ESCE                    *((volatile unsigned int*)(0x424E032CUL))
#define bFM3_ADC0_PCCR_PFCLR                   *((volatile unsigned int*)(0x424E0330UL))
#define bFM3_ADC0_PCCR_POVR                    *((volatile unsigned int*)(0x424E0334UL))
#define bFM3_ADC0_PCCR_PFUL                    *((volatile unsigned int*)(0x424E0338UL))
#define bFM3_ADC0_PCCR_PEMP                    *((volatile unsigned int*)(0x424E033CUL))
#define bFM3_ADC0_PCFDL_PC0                    *((volatile unsigned short*)(0x424E0380UL))
#define bFM3_ADC0_PCFDL_PC1                    *((volatile unsigned short*)(0x424E0384UL))
#define bFM3_ADC0_PCFDL_PC2                    *((volatile unsigned short*)(0x424E0388UL))
#define bFM3_ADC0_PCFDL_PC3                    *((volatile unsigned short*)(0x424E038CUL))
#define bFM3_ADC0_PCFDL_PC4                    *((volatile unsigned short*)(0x424E0390UL))
#define bFM3_ADC0_PCFDL_RS0                    *((volatile unsigned short*)(0x424E03A0UL))
#define bFM3_ADC0_PCFDL_RS1                    *((volatile unsigned short*)(0x424E03A4UL))
#define bFM3_ADC0_PCFDL_RS2                    *((volatile unsigned short*)(0x424E03A8UL))
#define bFM3_ADC0_PCFDL_INVL                   *((volatile unsigned short*)(0x424E03B0UL))
#define bFM3_ADC0_PCFDH_PD0                    *((volatile unsigned short*)(0x424E03D0UL))
#define bFM3_ADC0_PCFDH_PD1                    *((volatile unsigned short*)(0x424E03D4UL))
#define bFM3_ADC0_PCFDH_PD2                    *((volatile unsigned short*)(0x424E03D8UL))
#define bFM3_ADC0_PCFDH_PD3                    *((volatile unsigned short*)(0x424E03DCUL))
#define bFM3_ADC0_PCFDH_PD4                    *((volatile unsigned short*)(0x424E03E0UL))
#define bFM3_ADC0_PCFDH_PD5                    *((volatile unsigned short*)(0x424E03E4UL))
#define bFM3_ADC0_PCFDH_PD6                    *((volatile unsigned short*)(0x424E03E8UL))
#define bFM3_ADC0_PCFDH_PD7                    *((volatile unsigned short*)(0x424E03ECUL))
#define bFM3_ADC0_PCFDH_PD8                    *((volatile unsigned short*)(0x424E03F0UL))
#define bFM3_ADC0_PCFDH_PD9                    *((volatile unsigned short*)(0x424E03F4UL))
#define bFM3_ADC0_PCFDH_PD10                   *((volatile unsigned short*)(0x424E03F8UL))
#define bFM3_ADC0_PCFDH_PD11                   *((volatile unsigned short*)(0x424E03FCUL))
#define bFM3_ADC0_PCIS_P1A0                    *((volatile unsigned int*)(0x424E0400UL))
#define bFM3_ADC0_PCIS_P1A1                    *((volatile unsigned int*)(0x424E0404UL))
#define bFM3_ADC0_PCIS_P1A2                    *((volatile unsigned int*)(0x424E0408UL))
#define bFM3_ADC0_PCIS_P2A0                    *((volatile unsigned int*)(0x424E040CUL))
#define bFM3_ADC0_PCIS_P2A1                    *((volatile unsigned int*)(0x424E0410UL))
#define bFM3_ADC0_PCIS_P2A2                    *((volatile unsigned int*)(0x424E0414UL))
#define bFM3_ADC0_PCIS_P2A3                    *((volatile unsigned int*)(0x424E0418UL))
#define bFM3_ADC0_PCIS_P2A4                    *((volatile unsigned int*)(0x424E041CUL))
#define bFM3_ADC0_CMPCR_CCH0                   *((volatile unsigned int*)(0x424E0480UL))
#define bFM3_ADC0_CMPCR_CCH1                   *((volatile unsigned int*)(0x424E0484UL))
#define bFM3_ADC0_CMPCR_CCH2                   *((volatile unsigned int*)(0x424E0488UL))
#define bFM3_ADC0_CMPCR_CCH3                   *((volatile unsigned int*)(0x424E048CUL))
#define bFM3_ADC0_CMPCR_CCH4                   *((volatile unsigned int*)(0x424E0490UL))
#define bFM3_ADC0_CMPCR_CMD0                   *((volatile unsigned int*)(0x424E0494UL))
#define bFM3_ADC0_CMPCR_CMD1                   *((volatile unsigned int*)(0x424E0498UL))
#define bFM3_ADC0_CMPCR_CMPEN                  *((volatile unsigned int*)(0x424E049CUL))
#define bFM3_ADC0_CMPD_CMAD2                   *((volatile unsigned int*)(0x424E04D8UL))
#define bFM3_ADC0_CMPD_CMAD3                   *((volatile unsigned int*)(0x424E04DCUL))
#define bFM3_ADC0_CMPD_CMAD4                   *((volatile unsigned int*)(0x424E04E0UL))
#define bFM3_ADC0_CMPD_CMAD5                   *((volatile unsigned int*)(0x424E04E4UL))
#define bFM3_ADC0_CMPD_CMAD6                   *((volatile unsigned int*)(0x424E04E8UL))
#define bFM3_ADC0_CMPD_CMAD7                   *((volatile unsigned int*)(0x424E04ECUL))
#define bFM3_ADC0_CMPD_CMAD8                   *((volatile unsigned int*)(0x424E04F0UL))
#define bFM3_ADC0_CMPD_CMAD9                   *((volatile unsigned int*)(0x424E04F4UL))
#define bFM3_ADC0_CMPD_CMAD10                  *((volatile unsigned int*)(0x424E04F8UL))
#define bFM3_ADC0_CMPD_CMAD11                  *((volatile unsigned int*)(0x424E04FCUL))
#define bFM3_ADC0_ADSS23_TS16                  *((volatile unsigned int*)(0x424E0500UL))
#define bFM3_ADC0_ADSS23_TS17                  *((volatile unsigned int*)(0x424E0504UL))
#define bFM3_ADC0_ADSS23_TS18                  *((volatile unsigned int*)(0x424E0508UL))
#define bFM3_ADC0_ADSS23_TS19                  *((volatile unsigned int*)(0x424E050CUL))
#define bFM3_ADC0_ADSS23_TS20                  *((volatile unsigned int*)(0x424E0510UL))
#define bFM3_ADC0_ADSS23_TS21                  *((volatile unsigned int*)(0x424E0514UL))
#define bFM3_ADC0_ADSS23_TS22                  *((volatile unsigned int*)(0x424E0518UL))
#define bFM3_ADC0_ADSS23_TS23                  *((volatile unsigned int*)(0x424E051CUL))
#define bFM3_ADC0_ADSS23_TS24                  *((volatile unsigned int*)(0x424E0520UL))
#define bFM3_ADC0_ADSS23_TS25                  *((volatile unsigned int*)(0x424E0524UL))
#define bFM3_ADC0_ADSS23_TS26                  *((volatile unsigned int*)(0x424E0528UL))
#define bFM3_ADC0_ADSS23_TS27                  *((volatile unsigned int*)(0x424E052CUL))
#define bFM3_ADC0_ADSS23_TS28                  *((volatile unsigned int*)(0x424E0530UL))
#define bFM3_ADC0_ADSS23_TS29                  *((volatile unsigned int*)(0x424E0534UL))
#define bFM3_ADC0_ADSS23_TS30                  *((volatile unsigned int*)(0x424E0538UL))
#define bFM3_ADC0_ADSS23_TS31                  *((volatile unsigned int*)(0x424E053CUL))
#define bFM3_ADC0_ADSS2_TS16                   *((volatile unsigned int*)(0x424E0500UL))
#define bFM3_ADC0_ADSS2_TS17                   *((volatile unsigned int*)(0x424E0504UL))
#define bFM3_ADC0_ADSS2_TS18                   *((volatile unsigned int*)(0x424E0508UL))
#define bFM3_ADC0_ADSS2_TS19                   *((volatile unsigned int*)(0x424E050CUL))
#define bFM3_ADC0_ADSS2_TS20                   *((volatile unsigned int*)(0x424E0510UL))
#define bFM3_ADC0_ADSS2_TS21                   *((volatile unsigned int*)(0x424E0514UL))
#define bFM3_ADC0_ADSS2_TS22                   *((volatile unsigned int*)(0x424E0518UL))
#define bFM3_ADC0_ADSS2_TS23                   *((volatile unsigned int*)(0x424E051CUL))
#define bFM3_ADC0_ADSS3_TS24                   *((volatile unsigned int*)(0x424E0520UL))
#define bFM3_ADC0_ADSS3_TS25                   *((volatile unsigned int*)(0x424E0524UL))
#define bFM3_ADC0_ADSS3_TS26                   *((volatile unsigned int*)(0x424E0528UL))
#define bFM3_ADC0_ADSS3_TS27                   *((volatile unsigned int*)(0x424E052CUL))
#define bFM3_ADC0_ADSS3_TS28                   *((volatile unsigned int*)(0x424E0530UL))
#define bFM3_ADC0_ADSS3_TS29                   *((volatile unsigned int*)(0x424E0534UL))
#define bFM3_ADC0_ADSS3_TS30                   *((volatile unsigned int*)(0x424E0538UL))
#define bFM3_ADC0_ADSS3_TS31                   *((volatile unsigned int*)(0x424E053CUL))
#define bFM3_ADC0_ADSS01_TS0                   *((volatile unsigned int*)(0x424E0580UL))
#define bFM3_ADC0_ADSS01_TS1                   *((volatile unsigned int*)(0x424E0584UL))
#define bFM3_ADC0_ADSS01_TS2                   *((volatile unsigned int*)(0x424E0588UL))
#define bFM3_ADC0_ADSS01_TS3                   *((volatile unsigned int*)(0x424E058CUL))
#define bFM3_ADC0_ADSS01_TS4                   *((volatile unsigned int*)(0x424E0590UL))
#define bFM3_ADC0_ADSS01_TS5                   *((volatile unsigned int*)(0x424E0594UL))
#define bFM3_ADC0_ADSS01_TS6                   *((volatile unsigned int*)(0x424E0598UL))
#define bFM3_ADC0_ADSS01_TS7                   *((volatile unsigned int*)(0x424E059CUL))
#define bFM3_ADC0_ADSS01_TS8                   *((volatile unsigned int*)(0x424E05A0UL))
#define bFM3_ADC0_ADSS01_TS9                   *((volatile unsigned int*)(0x424E05A4UL))
#define bFM3_ADC0_ADSS01_TS10                  *((volatile unsigned int*)(0x424E05A8UL))
#define bFM3_ADC0_ADSS01_TS11                  *((volatile unsigned int*)(0x424E05ACUL))
#define bFM3_ADC0_ADSS01_TS12                  *((volatile unsigned int*)(0x424E05B0UL))
#define bFM3_ADC0_ADSS01_TS13                  *((volatile unsigned int*)(0x424E05B4UL))
#define bFM3_ADC0_ADSS01_TS14                  *((volatile unsigned int*)(0x424E05B8UL))
#define bFM3_ADC0_ADSS01_TS15                  *((volatile unsigned int*)(0x424E05BCUL))
#define bFM3_ADC0_ADSS0_TS0                    *((volatile unsigned int*)(0x424E0580UL))
#define bFM3_ADC0_ADSS0_TS1                    *((volatile unsigned int*)(0x424E0584UL))
#define bFM3_ADC0_ADSS0_TS2                    *((volatile unsigned int*)(0x424E0588UL))
#define bFM3_ADC0_ADSS0_TS3                    *((volatile unsigned int*)(0x424E058CUL))
#define bFM3_ADC0_ADSS0_TS4                    *((volatile unsigned int*)(0x424E0590UL))
#define bFM3_ADC0_ADSS0_TS5                    *((volatile unsigned int*)(0x424E0594UL))
#define bFM3_ADC0_ADSS0_TS6                    *((volatile unsigned int*)(0x424E0598UL))
#define bFM3_ADC0_ADSS0_TS7                    *((volatile unsigned int*)(0x424E059CUL))
#define bFM3_ADC0_ADSS1_TS8                    *((volatile unsigned int*)(0x424E05A0UL))
#define bFM3_ADC0_ADSS1_TS9                    *((volatile unsigned int*)(0x424E05A4UL))
#define bFM3_ADC0_ADSS1_TS10                   *((volatile unsigned int*)(0x424E05A8UL))
#define bFM3_ADC0_ADSS1_TS11                   *((volatile unsigned int*)(0x424E05ACUL))
#define bFM3_ADC0_ADSS1_TS12                   *((volatile unsigned int*)(0x424E05B0UL))
#define bFM3_ADC0_ADSS1_TS13                   *((volatile unsigned int*)(0x424E05B4UL))
#define bFM3_ADC0_ADSS1_TS14                   *((volatile unsigned int*)(0x424E05B8UL))
#define bFM3_ADC0_ADSS1_TS15                   *((volatile unsigned int*)(0x424E05BCUL))
#define bFM3_ADC0_ADST01_ST10                  *((volatile unsigned int*)(0x424E0600UL))
#define bFM3_ADC0_ADST01_ST11                  *((volatile unsigned int*)(0x424E0604UL))
#define bFM3_ADC0_ADST01_ST12                  *((volatile unsigned int*)(0x424E0608UL))
#define bFM3_ADC0_ADST01_ST13                  *((volatile unsigned int*)(0x424E060CUL))
#define bFM3_ADC0_ADST01_ST14                  *((volatile unsigned int*)(0x424E0610UL))
#define bFM3_ADC0_ADST01_STX10                 *((volatile unsigned int*)(0x424E0614UL))
#define bFM3_ADC0_ADST01_STX11                 *((volatile unsigned int*)(0x424E0618UL))
#define bFM3_ADC0_ADST01_STX12                 *((volatile unsigned int*)(0x424E061CUL))
#define bFM3_ADC0_ADST01_ST00                  *((volatile unsigned int*)(0x424E0620UL))
#define bFM3_ADC0_ADST01_ST01                  *((volatile unsigned int*)(0x424E0624UL))
#define bFM3_ADC0_ADST01_ST02                  *((volatile unsigned int*)(0x424E0628UL))
#define bFM3_ADC0_ADST01_ST03                  *((volatile unsigned int*)(0x424E062CUL))
#define bFM3_ADC0_ADST01_ST04                  *((volatile unsigned int*)(0x424E0630UL))
#define bFM3_ADC0_ADST01_STX00                 *((volatile unsigned int*)(0x424E0634UL))
#define bFM3_ADC0_ADST01_STX01                 *((volatile unsigned int*)(0x424E0638UL))
#define bFM3_ADC0_ADST01_STX02                 *((volatile unsigned int*)(0x424E063CUL))
#define bFM3_ADC0_ADST1_ST10                   *((volatile unsigned int*)(0x424E0600UL))
#define bFM3_ADC0_ADST1_ST11                   *((volatile unsigned int*)(0x424E0604UL))
#define bFM3_ADC0_ADST1_ST12                   *((volatile unsigned int*)(0x424E0608UL))
#define bFM3_ADC0_ADST1_ST13                   *((volatile unsigned int*)(0x424E060CUL))
#define bFM3_ADC0_ADST1_ST14                   *((volatile unsigned int*)(0x424E0610UL))
#define bFM3_ADC0_ADST1_STX10                  *((volatile unsigned int*)(0x424E0614UL))
#define bFM3_ADC0_ADST1_STX11                  *((volatile unsigned int*)(0x424E0618UL))
#define bFM3_ADC0_ADST1_STX12                  *((volatile unsigned int*)(0x424E061CUL))
#define bFM3_ADC0_ADST0_ST00                   *((volatile unsigned int*)(0x424E0620UL))
#define bFM3_ADC0_ADST0_ST01                   *((volatile unsigned int*)(0x424E0624UL))
#define bFM3_ADC0_ADST0_ST02                   *((volatile unsigned int*)(0x424E0628UL))
#define bFM3_ADC0_ADST0_ST03                   *((volatile unsigned int*)(0x424E062CUL))
#define bFM3_ADC0_ADST0_ST04                   *((volatile unsigned int*)(0x424E0630UL))
#define bFM3_ADC0_ADST0_STX00                  *((volatile unsigned int*)(0x424E0634UL))
#define bFM3_ADC0_ADST0_STX01                  *((volatile unsigned int*)(0x424E0638UL))
#define bFM3_ADC0_ADST0_STX02                  *((volatile unsigned int*)(0x424E063CUL))
#define bFM3_ADC0_ADCT_CT0                     *((volatile unsigned int*)(0x424E0680UL))
#define bFM3_ADC0_ADCT_CT1                     *((volatile unsigned int*)(0x424E0684UL))
#define bFM3_ADC0_ADCT_CT2                     *((volatile unsigned int*)(0x424E0688UL))
#define bFM3_ADC0_ADCT_CT3                     *((volatile unsigned int*)(0x424E068CUL))
#define bFM3_ADC0_ADCT_CT4                     *((volatile unsigned int*)(0x424E0690UL))
#define bFM3_ADC0_ADCT_CT5                     *((volatile unsigned int*)(0x424E0694UL))
#define bFM3_ADC0_ADCT_CT6                     *((volatile unsigned int*)(0x424E0698UL))
#define bFM3_ADC0_ADCT_CT7                     *((volatile unsigned int*)(0x424E069CUL))
#define bFM3_ADC0_PRTSL_PRTSL0                 *((volatile unsigned int*)(0x424E0700UL))
#define bFM3_ADC0_PRTSL_PRTSL1                 *((volatile unsigned int*)(0x424E0704UL))
#define bFM3_ADC0_PRTSL_PRTSL2                 *((volatile unsigned int*)(0x424E0708UL))
#define bFM3_ADC0_PRTSL_PRTSL3                 *((volatile unsigned int*)(0x424E070CUL))
#define bFM3_ADC0_SCTSL_SCTSL0                 *((volatile unsigned int*)(0x424E0720UL))
#define bFM3_ADC0_SCTSL_SCTSL1                 *((volatile unsigned int*)(0x424E0724UL))
#define bFM3_ADC0_SCTSL_SCTSL2                 *((volatile unsigned int*)(0x424E0728UL))
#define bFM3_ADC0_SCTSL_SCTSL3                 *((volatile unsigned int*)(0x424E072CUL))
#define bFM3_ADC0_ADCEN_ENBL                   *((volatile unsigned int*)(0x424E0780UL))
#define bFM3_ADC0_ADCEN_READY                  *((volatile unsigned int*)(0x424E0784UL))
#define bFM3_ADC0_ADCEN_ENBLTIME8              *((volatile unsigned int*)(0x424E07A0UL))
#define bFM3_ADC0_ADCEN_ENBLTIME9              *((volatile unsigned int*)(0x424E07A4UL))
#define bFM3_ADC0_ADCEN_ENBLTIME10             *((volatile unsigned int*)(0x424E07A8UL))
#define bFM3_ADC0_ADCEN_ENBLTIME11             *((volatile unsigned int*)(0x424E07ACUL))
#define bFM3_ADC0_ADCEN_ENBLTIME12             *((volatile unsigned int*)(0x424E07B0UL))
#define bFM3_ADC0_ADCEN_ENBLTIME13             *((volatile unsigned int*)(0x424E07B4UL))
#define bFM3_ADC0_ADCEN_ENBLTIME14             *((volatile unsigned int*)(0x424E07B8UL))
#define bFM3_ADC0_ADCEN_ENBLTIME15             *((volatile unsigned int*)(0x424E07BCUL))

/* 12-bit ADC unit 1 registers */
#define bFM3_ADC1_ADSR_SCS                     *((volatile unsigned int*)(0x424E2000UL))
#define bFM3_ADC1_ADSR_PCS                     *((volatile unsigned int*)(0x424E2004UL))
#define bFM3_ADC1_ADSR_PCNS                    *((volatile unsigned int*)(0x424E2008UL))
#define bFM3_ADC1_ADSR_FDAS                    *((volatile unsigned int*)(0x424E2018UL))
#define bFM3_ADC1_ADSR_ADSTP                   *((volatile unsigned int*)(0x424E201CUL))
#define bFM3_ADC1_ADCR_OVRIE                   *((volatile unsigned int*)(0x424E2020UL))
#define bFM3_ADC1_ADCR_CMPIE                   *((volatile unsigned int*)(0x424E2024UL))
#define bFM3_ADC1_ADCR_PCIE                    *((volatile unsigned int*)(0x424E2028UL))
#define bFM3_ADC1_ADCR_SCIE                    *((volatile unsigned int*)(0x424E202CUL))
#define bFM3_ADC1_ADCR_CMPIF                   *((volatile unsigned int*)(0x424E2034UL))
#define bFM3_ADC1_ADCR_PCIF                    *((volatile unsigned int*)(0x424E2038UL))
#define bFM3_ADC1_ADCR_SCIF                    *((volatile unsigned int*)(0x424E203CUL))
#define bFM3_ADC1_SFNS_SFS0                    *((volatile unsigned int*)(0x424E2100UL))
#define bFM3_ADC1_SFNS_SFS1                    *((volatile unsigned int*)(0x424E2104UL))
#define bFM3_ADC1_SFNS_SFS2                    *((volatile unsigned int*)(0x424E2108UL))
#define bFM3_ADC1_SFNS_SFS3                    *((volatile unsigned int*)(0x424E210CUL))
#define bFM3_ADC1_SCCR_SSTR                    *((volatile unsigned int*)(0x424E2120UL))
#define bFM3_ADC1_SCCR_SHEN                    *((volatile unsigned int*)(0x424E2124UL))
#define bFM3_ADC1_SCCR_RPT                     *((volatile unsigned int*)(0x424E2128UL))
#define bFM3_ADC1_SCCR_SFCLR                   *((volatile unsigned int*)(0x424E2130UL))
#define bFM3_ADC1_SCCR_SOVR                    *((volatile unsigned int*)(0x424E2134UL))
#define bFM3_ADC1_SCCR_SFUL                    *((volatile unsigned int*)(0x424E2138UL))
#define bFM3_ADC1_SCCR_SEMP                    *((volatile unsigned int*)(0x424E213CUL))
#define bFM3_ADC1_SCFDL_SC0                    *((volatile unsigned short*)(0x424E2180UL))
#define bFM3_ADC1_SCFDL_SC1                    *((volatile unsigned short*)(0x424E2184UL))
#define bFM3_ADC1_SCFDL_SC2                    *((volatile unsigned short*)(0x424E2188UL))
#define bFM3_ADC1_SCFDL_SC3                    *((volatile unsigned short*)(0x424E218CUL))
#define bFM3_ADC1_SCFDL_SC4                    *((volatile unsigned short*)(0x424E2190UL))
#define bFM3_ADC1_SCFDL_RS0                    *((volatile unsigned short*)(0x424E21A0UL))
#define bFM3_ADC1_SCFDL_RS1                    *((volatile unsigned short*)(0x424E21A4UL))
#define bFM3_ADC1_SCFDL_INVL                   *((volatile unsigned short*)(0x424E21B0UL))
#define bFM3_ADC1_SCFDH_SD0                    *((volatile unsigned short*)(0x424E21D0UL))
#define bFM3_ADC1_SCFDH_SD1                    *((volatile unsigned short*)(0x424E21D4UL))
#define bFM3_ADC1_SCFDH_SD2                    *((volatile unsigned short*)(0x424E21D8UL))
#define bFM3_ADC1_SCFDH_SD3                    *((volatile unsigned short*)(0x424E21DCUL))
#define bFM3_ADC1_SCFDH_SD4                    *((volatile unsigned short*)(0x424E21E0UL))
#define bFM3_ADC1_SCFDH_SD5                    *((volatile unsigned short*)(0x424E21E4UL))
#define bFM3_ADC1_SCFDH_SD6                    *((volatile unsigned short*)(0x424E21E8UL))
#define bFM3_ADC1_SCFDH_SD7                    *((volatile unsigned short*)(0x424E21ECUL))
#define bFM3_ADC1_SCFDH_SD8                    *((volatile unsigned short*)(0x424E21F0UL))
#define bFM3_ADC1_SCFDH_SD9                    *((volatile unsigned short*)(0x424E21F4UL))
#define bFM3_ADC1_SCFDH_SD10                   *((volatile unsigned short*)(0x424E21F8UL))
#define bFM3_ADC1_SCFDH_SD11                   *((volatile unsigned short*)(0x424E21FCUL))
#define bFM3_ADC1_SCIS23_AN16                  *((volatile unsigned int*)(0x424E2200UL))
#define bFM3_ADC1_SCIS23_AN17                  *((volatile unsigned int*)(0x424E2204UL))
#define bFM3_ADC1_SCIS23_AN18                  *((volatile unsigned int*)(0x424E2208UL))
#define bFM3_ADC1_SCIS23_AN19                  *((volatile unsigned int*)(0x424E220CUL))
#define bFM3_ADC1_SCIS23_AN20                  *((volatile unsigned int*)(0x424E2210UL))
#define bFM3_ADC1_SCIS23_AN21                  *((volatile unsigned int*)(0x424E2214UL))
#define bFM3_ADC1_SCIS23_AN22                  *((volatile unsigned int*)(0x424E2218UL))
#define bFM3_ADC1_SCIS23_AN23                  *((volatile unsigned int*)(0x424E221CUL))
#define bFM3_ADC1_SCIS23_AN24                  *((volatile unsigned int*)(0x424E2220UL))
#define bFM3_ADC1_SCIS23_AN25                  *((volatile unsigned int*)(0x424E2224UL))
#define bFM3_ADC1_SCIS23_AN26                  *((volatile unsigned int*)(0x424E2228UL))
#define bFM3_ADC1_SCIS23_AN27                  *((volatile unsigned int*)(0x424E222CUL))
#define bFM3_ADC1_SCIS23_AN28                  *((volatile unsigned int*)(0x424E2230UL))
#define bFM3_ADC1_SCIS23_AN29                  *((volatile unsigned int*)(0x424E2234UL))
#define bFM3_ADC1_SCIS23_AN30                  *((volatile unsigned int*)(0x424E2238UL))
#define bFM3_ADC1_SCIS23_AN31                  *((volatile unsigned int*)(0x424E223CUL))
#define bFM3_ADC1_SCIS2_AN16                   *((volatile unsigned int*)(0x424E2200UL))
#define bFM3_ADC1_SCIS2_AN17                   *((volatile unsigned int*)(0x424E2204UL))
#define bFM3_ADC1_SCIS2_AN18                   *((volatile unsigned int*)(0x424E2208UL))
#define bFM3_ADC1_SCIS2_AN19                   *((volatile unsigned int*)(0x424E220CUL))
#define bFM3_ADC1_SCIS2_AN20                   *((volatile unsigned int*)(0x424E2210UL))
#define bFM3_ADC1_SCIS2_AN21                   *((volatile unsigned int*)(0x424E2214UL))
#define bFM3_ADC1_SCIS2_AN22                   *((volatile unsigned int*)(0x424E2218UL))
#define bFM3_ADC1_SCIS2_AN23                   *((volatile unsigned int*)(0x424E221CUL))
#define bFM3_ADC1_SCIS3_AN24                   *((volatile unsigned int*)(0x424E2220UL))
#define bFM3_ADC1_SCIS3_AN25                   *((volatile unsigned int*)(0x424E2224UL))
#define bFM3_ADC1_SCIS3_AN26                   *((volatile unsigned int*)(0x424E2228UL))
#define bFM3_ADC1_SCIS3_AN27                   *((volatile unsigned int*)(0x424E222CUL))
#define bFM3_ADC1_SCIS3_AN28                   *((volatile unsigned int*)(0x424E2230UL))
#define bFM3_ADC1_SCIS3_AN29                   *((volatile unsigned int*)(0x424E2234UL))
#define bFM3_ADC1_SCIS3_AN30                   *((volatile unsigned int*)(0x424E2238UL))
#define bFM3_ADC1_SCIS3_AN31                   *((volatile unsigned int*)(0x424E223CUL))
#define bFM3_ADC1_SCIS01_AN0                   *((volatile unsigned int*)(0x424E2280UL))
#define bFM3_ADC1_SCIS01_AN1                   *((volatile unsigned int*)(0x424E2284UL))
#define bFM3_ADC1_SCIS01_AN2                   *((volatile unsigned int*)(0x424E2288UL))
#define bFM3_ADC1_SCIS01_AN3                   *((volatile unsigned int*)(0x424E228CUL))
#define bFM3_ADC1_SCIS01_AN4                   *((volatile unsigned int*)(0x424E2290UL))
#define bFM3_ADC1_SCIS01_AN5                   *((volatile unsigned int*)(0x424E2294UL))
#define bFM3_ADC1_SCIS01_AN6                   *((volatile unsigned int*)(0x424E2298UL))
#define bFM3_ADC1_SCIS01_AN7                   *((volatile unsigned int*)(0x424E229CUL))
#define bFM3_ADC1_SCIS01_AN8                   *((volatile unsigned int*)(0x424E22A0UL))
#define bFM3_ADC1_SCIS01_AN9                   *((volatile unsigned int*)(0x424E22A4UL))
#define bFM3_ADC1_SCIS01_AN10                  *((volatile unsigned int*)(0x424E22A8UL))
#define bFM3_ADC1_SCIS01_AN11                  *((volatile unsigned int*)(0x424E22ACUL))
#define bFM3_ADC1_SCIS01_AN12                  *((volatile unsigned int*)(0x424E22B0UL))
#define bFM3_ADC1_SCIS01_AN13                  *((volatile unsigned int*)(0x424E22B4UL))
#define bFM3_ADC1_SCIS01_AN14                  *((volatile unsigned int*)(0x424E22B8UL))
#define bFM3_ADC1_SCIS01_AN15                  *((volatile unsigned int*)(0x424E22BCUL))
#define bFM3_ADC1_SCIS0_AN0                    *((volatile unsigned int*)(0x424E2280UL))
#define bFM3_ADC1_SCIS0_AN1                    *((volatile unsigned int*)(0x424E2284UL))
#define bFM3_ADC1_SCIS0_AN2                    *((volatile unsigned int*)(0x424E2288UL))
#define bFM3_ADC1_SCIS0_AN3                    *((volatile unsigned int*)(0x424E228CUL))
#define bFM3_ADC1_SCIS0_AN4                    *((volatile unsigned int*)(0x424E2290UL))
#define bFM3_ADC1_SCIS0_AN5                    *((volatile unsigned int*)(0x424E2294UL))
#define bFM3_ADC1_SCIS0_AN6                    *((volatile unsigned int*)(0x424E2298UL))
#define bFM3_ADC1_SCIS0_AN7                    *((volatile unsigned int*)(0x424E229CUL))
#define bFM3_ADC1_SCIS1_AN8                    *((volatile unsigned int*)(0x424E22A0UL))
#define bFM3_ADC1_SCIS1_AN9                    *((volatile unsigned int*)(0x424E22A4UL))
#define bFM3_ADC1_SCIS1_AN10                   *((volatile unsigned int*)(0x424E22A8UL))
#define bFM3_ADC1_SCIS1_AN11                   *((volatile unsigned int*)(0x424E22ACUL))
#define bFM3_ADC1_SCIS1_AN12                   *((volatile unsigned int*)(0x424E22B0UL))
#define bFM3_ADC1_SCIS1_AN13                   *((volatile unsigned int*)(0x424E22B4UL))
#define bFM3_ADC1_SCIS1_AN14                   *((volatile unsigned int*)(0x424E22B8UL))
#define bFM3_ADC1_SCIS1_AN15                   *((volatile unsigned int*)(0x424E22BCUL))
#define bFM3_ADC1_PFNS_PFS0                    *((volatile unsigned int*)(0x424E2300UL))
#define bFM3_ADC1_PFNS_PFS1                    *((volatile unsigned int*)(0x424E2304UL))
#define bFM3_ADC1_PFNS_TEST0                   *((volatile unsigned int*)(0x424E2310UL))
#define bFM3_ADC1_PFNS_TEST1                   *((volatile unsigned int*)(0x424E2314UL))
#define bFM3_ADC1_PCCR_PSTR                    *((volatile unsigned int*)(0x424E2320UL))
#define bFM3_ADC1_PCCR_PHEN                    *((volatile unsigned int*)(0x424E2324UL))
#define bFM3_ADC1_PCCR_PEEN                    *((volatile unsigned int*)(0x424E2328UL))
#define bFM3_ADC1_PCCR_ESCE                    *((volatile unsigned int*)(0x424E232CUL))
#define bFM3_ADC1_PCCR_PFCLR                   *((volatile unsigned int*)(0x424E2330UL))
#define bFM3_ADC1_PCCR_POVR                    *((volatile unsigned int*)(0x424E2334UL))
#define bFM3_ADC1_PCCR_PFUL                    *((volatile unsigned int*)(0x424E2338UL))
#define bFM3_ADC1_PCCR_PEMP                    *((volatile unsigned int*)(0x424E233CUL))
#define bFM3_ADC1_PCFDL_PC0                    *((volatile unsigned short*)(0x424E2380UL))
#define bFM3_ADC1_PCFDL_PC1                    *((volatile unsigned short*)(0x424E2384UL))
#define bFM3_ADC1_PCFDL_PC2                    *((volatile unsigned short*)(0x424E2388UL))
#define bFM3_ADC1_PCFDL_PC3                    *((volatile unsigned short*)(0x424E238CUL))
#define bFM3_ADC1_PCFDL_PC4                    *((volatile unsigned short*)(0x424E2390UL))
#define bFM3_ADC1_PCFDL_RS0                    *((volatile unsigned short*)(0x424E23A0UL))
#define bFM3_ADC1_PCFDL_RS1                    *((volatile unsigned short*)(0x424E23A4UL))
#define bFM3_ADC1_PCFDL_RS2                    *((volatile unsigned short*)(0x424E23A8UL))
#define bFM3_ADC1_PCFDL_INVL                   *((volatile unsigned short*)(0x424E23B0UL))
#define bFM3_ADC1_PCFDH_PD0                    *((volatile unsigned short*)(0x424E23D0UL))
#define bFM3_ADC1_PCFDH_PD1                    *((volatile unsigned short*)(0x424E23D4UL))
#define bFM3_ADC1_PCFDH_PD2                    *((volatile unsigned short*)(0x424E23D8UL))
#define bFM3_ADC1_PCFDH_PD3                    *((volatile unsigned short*)(0x424E23DCUL))
#define bFM3_ADC1_PCFDH_PD4                    *((volatile unsigned short*)(0x424E23E0UL))
#define bFM3_ADC1_PCFDH_PD5                    *((volatile unsigned short*)(0x424E23E4UL))
#define bFM3_ADC1_PCFDH_PD6                    *((volatile unsigned short*)(0x424E23E8UL))
#define bFM3_ADC1_PCFDH_PD7                    *((volatile unsigned short*)(0x424E23ECUL))
#define bFM3_ADC1_PCFDH_PD8                    *((volatile unsigned short*)(0x424E23F0UL))
#define bFM3_ADC1_PCFDH_PD9                    *((volatile unsigned short*)(0x424E23F4UL))
#define bFM3_ADC1_PCFDH_PD10                   *((volatile unsigned short*)(0x424E23F8UL))
#define bFM3_ADC1_PCFDH_PD11                   *((volatile unsigned short*)(0x424E23FCUL))
#define bFM3_ADC1_PCIS_P1A0                    *((volatile unsigned int*)(0x424E2400UL))
#define bFM3_ADC1_PCIS_P1A1                    *((volatile unsigned int*)(0x424E2404UL))
#define bFM3_ADC1_PCIS_P1A2                    *((volatile unsigned int*)(0x424E2408UL))
#define bFM3_ADC1_PCIS_P2A0                    *((volatile unsigned int*)(0x424E240CUL))
#define bFM3_ADC1_PCIS_P2A1                    *((volatile unsigned int*)(0x424E2410UL))
#define bFM3_ADC1_PCIS_P2A2                    *((volatile unsigned int*)(0x424E2414UL))
#define bFM3_ADC1_PCIS_P2A3                    *((volatile unsigned int*)(0x424E2418UL))
#define bFM3_ADC1_PCIS_P2A4                    *((volatile unsigned int*)(0x424E241CUL))
#define bFM3_ADC1_CMPCR_CCH0                   *((volatile unsigned int*)(0x424E2480UL))
#define bFM3_ADC1_CMPCR_CCH1                   *((volatile unsigned int*)(0x424E2484UL))
#define bFM3_ADC1_CMPCR_CCH2                   *((volatile unsigned int*)(0x424E2488UL))
#define bFM3_ADC1_CMPCR_CCH3                   *((volatile unsigned int*)(0x424E248CUL))
#define bFM3_ADC1_CMPCR_CCH4                   *((volatile unsigned int*)(0x424E2490UL))
#define bFM3_ADC1_CMPCR_CMD0                   *((volatile unsigned int*)(0x424E2494UL))
#define bFM3_ADC1_CMPCR_CMD1                   *((volatile unsigned int*)(0x424E2498UL))
#define bFM3_ADC1_CMPCR_CMPEN                  *((volatile unsigned int*)(0x424E249CUL))
#define bFM3_ADC1_CMPD_CMAD2                   *((volatile unsigned int*)(0x424E24D8UL))
#define bFM3_ADC1_CMPD_CMAD3                   *((volatile unsigned int*)(0x424E24DCUL))
#define bFM3_ADC1_CMPD_CMAD4                   *((volatile unsigned int*)(0x424E24E0UL))
#define bFM3_ADC1_CMPD_CMAD5                   *((volatile unsigned int*)(0x424E24E4UL))
#define bFM3_ADC1_CMPD_CMAD6                   *((volatile unsigned int*)(0x424E24E8UL))
#define bFM3_ADC1_CMPD_CMAD7                   *((volatile unsigned int*)(0x424E24ECUL))
#define bFM3_ADC1_CMPD_CMAD8                   *((volatile unsigned int*)(0x424E24F0UL))
#define bFM3_ADC1_CMPD_CMAD9                   *((volatile unsigned int*)(0x424E24F4UL))
#define bFM3_ADC1_CMPD_CMAD10                  *((volatile unsigned int*)(0x424E24F8UL))
#define bFM3_ADC1_CMPD_CMAD11                  *((volatile unsigned int*)(0x424E24FCUL))
#define bFM3_ADC1_ADSS23_TS16                  *((volatile unsigned int*)(0x424E2500UL))
#define bFM3_ADC1_ADSS23_TS17                  *((volatile unsigned int*)(0x424E2504UL))
#define bFM3_ADC1_ADSS23_TS18                  *((volatile unsigned int*)(0x424E2508UL))
#define bFM3_ADC1_ADSS23_TS19                  *((volatile unsigned int*)(0x424E250CUL))
#define bFM3_ADC1_ADSS23_TS20                  *((volatile unsigned int*)(0x424E2510UL))
#define bFM3_ADC1_ADSS23_TS21                  *((volatile unsigned int*)(0x424E2514UL))
#define bFM3_ADC1_ADSS23_TS22                  *((volatile unsigned int*)(0x424E2518UL))
#define bFM3_ADC1_ADSS23_TS23                  *((volatile unsigned int*)(0x424E251CUL))
#define bFM3_ADC1_ADSS23_TS24                  *((volatile unsigned int*)(0x424E2520UL))
#define bFM3_ADC1_ADSS23_TS25                  *((volatile unsigned int*)(0x424E2524UL))
#define bFM3_ADC1_ADSS23_TS26                  *((volatile unsigned int*)(0x424E2528UL))
#define bFM3_ADC1_ADSS23_TS27                  *((volatile unsigned int*)(0x424E252CUL))
#define bFM3_ADC1_ADSS23_TS28                  *((volatile unsigned int*)(0x424E2530UL))
#define bFM3_ADC1_ADSS23_TS29                  *((volatile unsigned int*)(0x424E2534UL))
#define bFM3_ADC1_ADSS23_TS30                  *((volatile unsigned int*)(0x424E2538UL))
#define bFM3_ADC1_ADSS23_TS31                  *((volatile unsigned int*)(0x424E253CUL))
#define bFM3_ADC1_ADSS2_TS16                   *((volatile unsigned int*)(0x424E2500UL))
#define bFM3_ADC1_ADSS2_TS17                   *((volatile unsigned int*)(0x424E2504UL))
#define bFM3_ADC1_ADSS2_TS18                   *((volatile unsigned int*)(0x424E2508UL))
#define bFM3_ADC1_ADSS2_TS19                   *((volatile unsigned int*)(0x424E250CUL))
#define bFM3_ADC1_ADSS2_TS20                   *((volatile unsigned int*)(0x424E2510UL))
#define bFM3_ADC1_ADSS2_TS21                   *((volatile unsigned int*)(0x424E2514UL))
#define bFM3_ADC1_ADSS2_TS22                   *((volatile unsigned int*)(0x424E2518UL))
#define bFM3_ADC1_ADSS2_TS23                   *((volatile unsigned int*)(0x424E251CUL))
#define bFM3_ADC1_ADSS3_TS24                   *((volatile unsigned int*)(0x424E2520UL))
#define bFM3_ADC1_ADSS3_TS25                   *((volatile unsigned int*)(0x424E2524UL))
#define bFM3_ADC1_ADSS3_TS26                   *((volatile unsigned int*)(0x424E2528UL))
#define bFM3_ADC1_ADSS3_TS27                   *((volatile unsigned int*)(0x424E252CUL))
#define bFM3_ADC1_ADSS3_TS28                   *((volatile unsigned int*)(0x424E2530UL))
#define bFM3_ADC1_ADSS3_TS29                   *((volatile unsigned int*)(0x424E2534UL))
#define bFM3_ADC1_ADSS3_TS30                   *((volatile unsigned int*)(0x424E2538UL))
#define bFM3_ADC1_ADSS3_TS31                   *((volatile unsigned int*)(0x424E253CUL))
#define bFM3_ADC1_ADSS01_TS0                   *((volatile unsigned int*)(0x424E2580UL))
#define bFM3_ADC1_ADSS01_TS1                   *((volatile unsigned int*)(0x424E2584UL))
#define bFM3_ADC1_ADSS01_TS2                   *((volatile unsigned int*)(0x424E2588UL))
#define bFM3_ADC1_ADSS01_TS3                   *((volatile unsigned int*)(0x424E258CUL))
#define bFM3_ADC1_ADSS01_TS4                   *((volatile unsigned int*)(0x424E2590UL))
#define bFM3_ADC1_ADSS01_TS5                   *((volatile unsigned int*)(0x424E2594UL))
#define bFM3_ADC1_ADSS01_TS6                   *((volatile unsigned int*)(0x424E2598UL))
#define bFM3_ADC1_ADSS01_TS7                   *((volatile unsigned int*)(0x424E259CUL))
#define bFM3_ADC1_ADSS01_TS8                   *((volatile unsigned int*)(0x424E25A0UL))
#define bFM3_ADC1_ADSS01_TS9                   *((volatile unsigned int*)(0x424E25A4UL))
#define bFM3_ADC1_ADSS01_TS10                  *((volatile unsigned int*)(0x424E25A8UL))
#define bFM3_ADC1_ADSS01_TS11                  *((volatile unsigned int*)(0x424E25ACUL))
#define bFM3_ADC1_ADSS01_TS12                  *((volatile unsigned int*)(0x424E25B0UL))
#define bFM3_ADC1_ADSS01_TS13                  *((volatile unsigned int*)(0x424E25B4UL))
#define bFM3_ADC1_ADSS01_TS14                  *((volatile unsigned int*)(0x424E25B8UL))
#define bFM3_ADC1_ADSS01_TS15                  *((volatile unsigned int*)(0x424E25BCUL))
#define bFM3_ADC1_ADSS0_TS0                    *((volatile unsigned int*)(0x424E2580UL))
#define bFM3_ADC1_ADSS0_TS1                    *((volatile unsigned int*)(0x424E2584UL))
#define bFM3_ADC1_ADSS0_TS2                    *((volatile unsigned int*)(0x424E2588UL))
#define bFM3_ADC1_ADSS0_TS3                    *((volatile unsigned int*)(0x424E258CUL))
#define bFM3_ADC1_ADSS0_TS4                    *((volatile unsigned int*)(0x424E2590UL))
#define bFM3_ADC1_ADSS0_TS5                    *((volatile unsigned int*)(0x424E2594UL))
#define bFM3_ADC1_ADSS0_TS6                    *((volatile unsigned int*)(0x424E2598UL))
#define bFM3_ADC1_ADSS0_TS7                    *((volatile unsigned int*)(0x424E259CUL))
#define bFM3_ADC1_ADSS1_TS8                    *((volatile unsigned int*)(0x424E25A0UL))
#define bFM3_ADC1_ADSS1_TS9                    *((volatile unsigned int*)(0x424E25A4UL))
#define bFM3_ADC1_ADSS1_TS10                   *((volatile unsigned int*)(0x424E25A8UL))
#define bFM3_ADC1_ADSS1_TS11                   *((volatile unsigned int*)(0x424E25ACUL))
#define bFM3_ADC1_ADSS1_TS12                   *((volatile unsigned int*)(0x424E25B0UL))
#define bFM3_ADC1_ADSS1_TS13                   *((volatile unsigned int*)(0x424E25B4UL))
#define bFM3_ADC1_ADSS1_TS14                   *((volatile unsigned int*)(0x424E25B8UL))
#define bFM3_ADC1_ADSS1_TS15                   *((volatile unsigned int*)(0x424E25BCUL))
#define bFM3_ADC1_ADST01_ST10                  *((volatile unsigned int*)(0x424E2600UL))
#define bFM3_ADC1_ADST01_ST11                  *((volatile unsigned int*)(0x424E2604UL))
#define bFM3_ADC1_ADST01_ST12                  *((volatile unsigned int*)(0x424E2608UL))
#define bFM3_ADC1_ADST01_ST13                  *((volatile unsigned int*)(0x424E260CUL))
#define bFM3_ADC1_ADST01_ST14                  *((volatile unsigned int*)(0x424E2610UL))
#define bFM3_ADC1_ADST01_STX10                 *((volatile unsigned int*)(0x424E2614UL))
#define bFM3_ADC1_ADST01_STX11                 *((volatile unsigned int*)(0x424E2618UL))
#define bFM3_ADC1_ADST01_STX12                 *((volatile unsigned int*)(0x424E261CUL))
#define bFM3_ADC1_ADST01_ST00                  *((volatile unsigned int*)(0x424E2620UL))
#define bFM3_ADC1_ADST01_ST01                  *((volatile unsigned int*)(0x424E2624UL))
#define bFM3_ADC1_ADST01_ST02                  *((volatile unsigned int*)(0x424E2628UL))
#define bFM3_ADC1_ADST01_ST03                  *((volatile unsigned int*)(0x424E262CUL))
#define bFM3_ADC1_ADST01_ST04                  *((volatile unsigned int*)(0x424E2630UL))
#define bFM3_ADC1_ADST01_STX00                 *((volatile unsigned int*)(0x424E2634UL))
#define bFM3_ADC1_ADST01_STX01                 *((volatile unsigned int*)(0x424E2638UL))
#define bFM3_ADC1_ADST01_STX02                 *((volatile unsigned int*)(0x424E263CUL))
#define bFM3_ADC1_ADST1_ST10                   *((volatile unsigned int*)(0x424E2600UL))
#define bFM3_ADC1_ADST1_ST11                   *((volatile unsigned int*)(0x424E2604UL))
#define bFM3_ADC1_ADST1_ST12                   *((volatile unsigned int*)(0x424E2608UL))
#define bFM3_ADC1_ADST1_ST13                   *((volatile unsigned int*)(0x424E260CUL))
#define bFM3_ADC1_ADST1_ST14                   *((volatile unsigned int*)(0x424E2610UL))
#define bFM3_ADC1_ADST1_STX10                  *((volatile unsigned int*)(0x424E2614UL))
#define bFM3_ADC1_ADST1_STX11                  *((volatile unsigned int*)(0x424E2618UL))
#define bFM3_ADC1_ADST1_STX12                  *((volatile unsigned int*)(0x424E261CUL))
#define bFM3_ADC1_ADST0_ST00                   *((volatile unsigned int*)(0x424E2620UL))
#define bFM3_ADC1_ADST0_ST01                   *((volatile unsigned int*)(0x424E2624UL))
#define bFM3_ADC1_ADST0_ST02                   *((volatile unsigned int*)(0x424E2628UL))
#define bFM3_ADC1_ADST0_ST03                   *((volatile unsigned int*)(0x424E262CUL))
#define bFM3_ADC1_ADST0_ST04                   *((volatile unsigned int*)(0x424E2630UL))
#define bFM3_ADC1_ADST0_STX00                  *((volatile unsigned int*)(0x424E2634UL))
#define bFM3_ADC1_ADST0_STX01                  *((volatile unsigned int*)(0x424E2638UL))
#define bFM3_ADC1_ADST0_STX02                  *((volatile unsigned int*)(0x424E263CUL))
#define bFM3_ADC1_ADCT_CT0                     *((volatile unsigned int*)(0x424E2680UL))
#define bFM3_ADC1_ADCT_CT1                     *((volatile unsigned int*)(0x424E2684UL))
#define bFM3_ADC1_ADCT_CT2                     *((volatile unsigned int*)(0x424E2688UL))
#define bFM3_ADC1_ADCT_CT3                     *((volatile unsigned int*)(0x424E268CUL))
#define bFM3_ADC1_ADCT_CT4                     *((volatile unsigned int*)(0x424E2690UL))
#define bFM3_ADC1_ADCT_CT5                     *((volatile unsigned int*)(0x424E2694UL))
#define bFM3_ADC1_ADCT_CT6                     *((volatile unsigned int*)(0x424E2698UL))
#define bFM3_ADC1_ADCT_CT7                     *((volatile unsigned int*)(0x424E269CUL))
#define bFM3_ADC1_PRTSL_PRTSL0                 *((volatile unsigned int*)(0x424E2700UL))
#define bFM3_ADC1_PRTSL_PRTSL1                 *((volatile unsigned int*)(0x424E2704UL))
#define bFM3_ADC1_PRTSL_PRTSL2                 *((volatile unsigned int*)(0x424E2708UL))
#define bFM3_ADC1_PRTSL_PRTSL3                 *((volatile unsigned int*)(0x424E270CUL))
#define bFM3_ADC1_SCTSL_SCTSL0                 *((volatile unsigned int*)(0x424E2720UL))
#define bFM3_ADC1_SCTSL_SCTSL1                 *((volatile unsigned int*)(0x424E2724UL))
#define bFM3_ADC1_SCTSL_SCTSL2                 *((volatile unsigned int*)(0x424E2728UL))
#define bFM3_ADC1_SCTSL_SCTSL3                 *((volatile unsigned int*)(0x424E272CUL))
#define bFM3_ADC1_ADCEN_ENBL                   *((volatile unsigned int*)(0x424E2780UL))
#define bFM3_ADC1_ADCEN_READY                  *((volatile unsigned int*)(0x424E2784UL))
#define bFM3_ADC1_ADCEN_ENBLTIME8              *((volatile unsigned int*)(0x424E27A0UL))
#define bFM3_ADC1_ADCEN_ENBLTIME9              *((volatile unsigned int*)(0x424E27A4UL))
#define bFM3_ADC1_ADCEN_ENBLTIME10             *((volatile unsigned int*)(0x424E27A8UL))
#define bFM3_ADC1_ADCEN_ENBLTIME11             *((volatile unsigned int*)(0x424E27ACUL))
#define bFM3_ADC1_ADCEN_ENBLTIME12             *((volatile unsigned int*)(0x424E27B0UL))
#define bFM3_ADC1_ADCEN_ENBLTIME13             *((volatile unsigned int*)(0x424E27B4UL))
#define bFM3_ADC1_ADCEN_ENBLTIME14             *((volatile unsigned int*)(0x424E27B8UL))
#define bFM3_ADC1_ADCEN_ENBLTIME15             *((volatile unsigned int*)(0x424E27BCUL))

/* 10-bit DAC registers */
#define bFM3_DAC_DADR0_DA0                     *((volatile unsigned int*)(0x42500000UL))
#define bFM3_DAC_DADR0_DA1                     *((volatile unsigned int*)(0x42500004UL))
#define bFM3_DAC_DADR0_DA2                     *((volatile unsigned int*)(0x42500008UL))
#define bFM3_DAC_DADR0_DA3                     *((volatile unsigned int*)(0x4250000CUL))
#define bFM3_DAC_DADR0_DA4                     *((volatile unsigned int*)(0x42500010UL))
#define bFM3_DAC_DADR0_DA5                     *((volatile unsigned int*)(0x42500014UL))
#define bFM3_DAC_DADR0_DA6                     *((volatile unsigned int*)(0x42500018UL))
#define bFM3_DAC_DADR0_DA7                     *((volatile unsigned int*)(0x4250001CUL))
#define bFM3_DAC_DADR0_DA8                     *((volatile unsigned int*)(0x42500020UL))
#define bFM3_DAC_DADR0_DA9                     *((volatile unsigned int*)(0x42500024UL))
#define bFM3_DAC_DACR0_DAE                     *((volatile unsigned int*)(0x42500040UL))
#define bFM3_DAC_DADR1_DA0                     *((volatile unsigned int*)(0x42500080UL))
#define bFM3_DAC_DADR1_DA1                     *((volatile unsigned int*)(0x42500084UL))
#define bFM3_DAC_DADR1_DA2                     *((volatile unsigned int*)(0x42500088UL))
#define bFM3_DAC_DADR1_DA3                     *((volatile unsigned int*)(0x4250008CUL))
#define bFM3_DAC_DADR1_DA4                     *((volatile unsigned int*)(0x42500090UL))
#define bFM3_DAC_DADR1_DA5                     *((volatile unsigned int*)(0x42500094UL))
#define bFM3_DAC_DADR1_DA6                     *((volatile unsigned int*)(0x42500098UL))
#define bFM3_DAC_DADR1_DA7                     *((volatile unsigned int*)(0x4250009CUL))
#define bFM3_DAC_DADR1_DA8                     *((volatile unsigned int*)(0x425000A0UL))
#define bFM3_DAC_DADR1_DA9                     *((volatile unsigned int*)(0x425000A4UL))
#define bFM3_DAC_DACR1_DAE                     *((volatile unsigned int*)(0x425000C0UL))

/* CR trimming registers */
#define bFM3_CRTRIM_MCR_PSR_CSR0               *((volatile unsigned int*)(0x425C0000UL))
#define bFM3_CRTRIM_MCR_PSR_CSR1               *((volatile unsigned int*)(0x425C0004UL))
#define bFM3_CRTRIM_MCR_FTRM_TRD0              *((volatile unsigned int*)(0x425C0080UL))
#define bFM3_CRTRIM_MCR_FTRM_TRD1              *((volatile unsigned int*)(0x425C0084UL))
#define bFM3_CRTRIM_MCR_FTRM_TRD2              *((volatile unsigned int*)(0x425C0088UL))
#define bFM3_CRTRIM_MCR_FTRM_TRD3              *((volatile unsigned int*)(0x425C008CUL))
#define bFM3_CRTRIM_MCR_FTRM_TRD4              *((volatile unsigned int*)(0x425C0090UL))
#define bFM3_CRTRIM_MCR_FTRM_TRD5              *((volatile unsigned int*)(0x425C0094UL))
#define bFM3_CRTRIM_MCR_FTRM_TRD6              *((volatile unsigned int*)(0x425C0098UL))
#define bFM3_CRTRIM_MCR_FTRM_TRD7              *((volatile unsigned int*)(0x425C009CUL))
#define bFM3_CRTRIM_MCR_FTRM_TRD8              *((volatile unsigned int*)(0x425C00A0UL))
#define bFM3_CRTRIM_MCR_FTRM_TRD9              *((volatile unsigned int*)(0x425C00A4UL))

/* External interrupt registers */
#define bFM3_EXTI_ENIR_EN0                     *((volatile unsigned int*)(0x42600000UL))
#define bFM3_EXTI_ENIR_EN1                     *((volatile unsigned int*)(0x42600004UL))
#define bFM3_EXTI_ENIR_EN2                     *((volatile unsigned int*)(0x42600008UL))
#define bFM3_EXTI_ENIR_EN3                     *((volatile unsigned int*)(0x4260000CUL))
#define bFM3_EXTI_ENIR_EN6                     *((volatile unsigned int*)(0x42600018UL))
#define bFM3_EXTI_ENIR_EN7                     *((volatile unsigned int*)(0x4260001CUL))
#define bFM3_EXTI_ENIR_EN14                    *((volatile unsigned int*)(0x42600038UL))
#define bFM3_EXTI_ENIR_EN15                    *((volatile unsigned int*)(0x4260003CUL))
#define bFM3_EXTI_ENIR_EN16                    *((volatile unsigned int*)(0x42600040UL))
#define bFM3_EXTI_ENIR_EN17                    *((volatile unsigned int*)(0x42600044UL))
#define bFM3_EXTI_ENIR_EN18                    *((volatile unsigned int*)(0x42600048UL))
#define bFM3_EXTI_ENIR_EN19                    *((volatile unsigned int*)(0x4260004CUL))
#define bFM3_EXTI_ENIR_EN20                    *((volatile unsigned int*)(0x42600050UL))
#define bFM3_EXTI_ENIR_EN21                    *((volatile unsigned int*)(0x42600054UL))
#define bFM3_EXTI_EIRR_ER0                     *((volatile unsigned int*)(0x42600080UL))
#define bFM3_EXTI_EIRR_ER1                     *((volatile unsigned int*)(0x42600084UL))
#define bFM3_EXTI_EIRR_ER2                     *((volatile unsigned int*)(0x42600088UL))
#define bFM3_EXTI_EIRR_ER3                     *((volatile unsigned int*)(0x4260008CUL))
#define bFM3_EXTI_EIRR_ER6                     *((volatile unsigned int*)(0x42600098UL))
#define bFM3_EXTI_EIRR_ER7                     *((volatile unsigned int*)(0x4260009CUL))
#define bFM3_EXTI_EIRR_ER14                    *((volatile unsigned int*)(0x426000B8UL))
#define bFM3_EXTI_EIRR_ER15                    *((volatile unsigned int*)(0x426000BCUL))
#define bFM3_EXTI_EIRR_ER16                    *((volatile unsigned int*)(0x426000C0UL))
#define bFM3_EXTI_EIRR_ER17                    *((volatile unsigned int*)(0x426000C4UL))
#define bFM3_EXTI_EIRR_ER18                    *((volatile unsigned int*)(0x426000C8UL))
#define bFM3_EXTI_EIRR_ER19                    *((volatile unsigned int*)(0x426000CCUL))
#define bFM3_EXTI_EIRR_ER20                    *((volatile unsigned int*)(0x426000D0UL))
#define bFM3_EXTI_EIRR_ER21                    *((volatile unsigned int*)(0x426000D4UL))
#define bFM3_EXTI_EICL_ECL0                    *((volatile unsigned int*)(0x42600100UL))
#define bFM3_EXTI_EICL_ECL1                    *((volatile unsigned int*)(0x42600104UL))
#define bFM3_EXTI_EICL_ECL2                    *((volatile unsigned int*)(0x42600108UL))
#define bFM3_EXTI_EICL_ECL3                    *((volatile unsigned int*)(0x4260010CUL))
#define bFM3_EXTI_EICL_ECL6                    *((volatile unsigned int*)(0x42600118UL))
#define bFM3_EXTI_EICL_ECL7                    *((volatile unsigned int*)(0x4260011CUL))
#define bFM3_EXTI_EICL_ECL14                   *((volatile unsigned int*)(0x42600138UL))
#define bFM3_EXTI_EICL_ECL15                   *((volatile unsigned int*)(0x4260013CUL))
#define bFM3_EXTI_EICL_ECL16                   *((volatile unsigned int*)(0x42600140UL))
#define bFM3_EXTI_EICL_ECL17                   *((volatile unsigned int*)(0x42600144UL))
#define bFM3_EXTI_EICL_ECL18                   *((volatile unsigned int*)(0x42600148UL))
#define bFM3_EXTI_EICL_ECL19                   *((volatile unsigned int*)(0x4260014CUL))
#define bFM3_EXTI_EICL_ECL20                   *((volatile unsigned int*)(0x42600150UL))
#define bFM3_EXTI_EICL_ECL21                   *((volatile unsigned int*)(0x42600154UL))
#define bFM3_EXTI_ELVR_LA0                     *((volatile unsigned int*)(0x42600180UL))
#define bFM3_EXTI_ELVR_LB0                     *((volatile unsigned int*)(0x42600184UL))
#define bFM3_EXTI_ELVR_LA1                     *((volatile unsigned int*)(0x42600188UL))
#define bFM3_EXTI_ELVR_LB1                     *((volatile unsigned int*)(0x4260018CUL))
#define bFM3_EXTI_ELVR_LA2                     *((volatile unsigned int*)(0x42600190UL))
#define bFM3_EXTI_ELVR_LB2                     *((volatile unsigned int*)(0x42600194UL))
#define bFM3_EXTI_ELVR_LA3                     *((volatile unsigned int*)(0x42600198UL))
#define bFM3_EXTI_ELVR_LB3                     *((volatile unsigned int*)(0x4260019CUL))
#define bFM3_EXTI_ELVR_LA6                     *((volatile unsigned int*)(0x426001B0UL))
#define bFM3_EXTI_ELVR_LB6                     *((volatile unsigned int*)(0x426001B4UL))
#define bFM3_EXTI_ELVR_LA7                     *((volatile unsigned int*)(0x426001B8UL))
#define bFM3_EXTI_ELVR_LB7                     *((volatile unsigned int*)(0x426001BCUL))
#define bFM3_EXTI_ELVR_LA14                    *((volatile unsigned int*)(0x426001F0UL))
#define bFM3_EXTI_ELVR_LB14                    *((volatile unsigned int*)(0x426001F4UL))
#define bFM3_EXTI_ELVR_LA15                    *((volatile unsigned int*)(0x426001F8UL))
#define bFM3_EXTI_ELVR_LB15                    *((volatile unsigned int*)(0x426001FCUL))
#define bFM3_EXTI_ELVR1_LA16                   *((volatile unsigned int*)(0x42600200UL))
#define bFM3_EXTI_ELVR1_LB16                   *((volatile unsigned int*)(0x42600204UL))
#define bFM3_EXTI_ELVR1_LA17                   *((volatile unsigned int*)(0x42600208UL))
#define bFM3_EXTI_ELVR1_LB17                   *((volatile unsigned int*)(0x4260020CUL))
#define bFM3_EXTI_ELVR1_LA18                   *((volatile unsigned int*)(0x42600210UL))
#define bFM3_EXTI_ELVR1_LB18                   *((volatile unsigned int*)(0x42600214UL))
#define bFM3_EXTI_ELVR1_LA19                   *((volatile unsigned int*)(0x42600218UL))
#define bFM3_EXTI_ELVR1_LB19                   *((volatile unsigned int*)(0x4260021CUL))
#define bFM3_EXTI_ELVR1_LA20                   *((volatile unsigned int*)(0x42600220UL))
#define bFM3_EXTI_ELVR1_LB20                   *((volatile unsigned int*)(0x42600224UL))
#define bFM3_EXTI_ELVR1_LA21                   *((volatile unsigned int*)(0x42600228UL))
#define bFM3_EXTI_ELVR1_LB21                   *((volatile unsigned int*)(0x4260022CUL))
#define bFM3_EXTI_NMIRR_NR                     *((volatile unsigned int*)(0x42600280UL))
#define bFM3_EXTI_NMICL_NCL                    *((volatile unsigned int*)(0x42600300UL))

/* Interrupt request read registers */
#define bFM3_INTREQ_DRQSEL_DRQSEL0             *((volatile unsigned int*)(0x42620000UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL1             *((volatile unsigned int*)(0x42620004UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL2             *((volatile unsigned int*)(0x42620008UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL3             *((volatile unsigned int*)(0x4262000CUL))
#define bFM3_INTREQ_DRQSEL_DRQSEL4             *((volatile unsigned int*)(0x42620010UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL5             *((volatile unsigned int*)(0x42620014UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL6             *((volatile unsigned int*)(0x42620018UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL7             *((volatile unsigned int*)(0x4262001CUL))
#define bFM3_INTREQ_DRQSEL_DRQSEL8             *((volatile unsigned int*)(0x42620020UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL9             *((volatile unsigned int*)(0x42620024UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL10            *((volatile unsigned int*)(0x42620028UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL11            *((volatile unsigned int*)(0x4262002CUL))
#define bFM3_INTREQ_DRQSEL_DRQSEL12            *((volatile unsigned int*)(0x42620030UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL13            *((volatile unsigned int*)(0x42620034UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL14            *((volatile unsigned int*)(0x42620038UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL15            *((volatile unsigned int*)(0x4262003CUL))
#define bFM3_INTREQ_DRQSEL_DRQSEL16            *((volatile unsigned int*)(0x42620040UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL17            *((volatile unsigned int*)(0x42620044UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL18            *((volatile unsigned int*)(0x42620048UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL19            *((volatile unsigned int*)(0x4262004CUL))
#define bFM3_INTREQ_DRQSEL_DRQSEL20            *((volatile unsigned int*)(0x42620050UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL21            *((volatile unsigned int*)(0x42620054UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL22            *((volatile unsigned int*)(0x42620058UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL23            *((volatile unsigned int*)(0x4262005CUL))
#define bFM3_INTREQ_DRQSEL_DRQSEL24            *((volatile unsigned int*)(0x42620060UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL25            *((volatile unsigned int*)(0x42620064UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL26            *((volatile unsigned int*)(0x42620068UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL27            *((volatile unsigned int*)(0x4262006CUL))
#define bFM3_INTREQ_DRQSEL_DRQSEL28            *((volatile unsigned int*)(0x42620070UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL29            *((volatile unsigned int*)(0x42620074UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL30            *((volatile unsigned int*)(0x42620078UL))
#define bFM3_INTREQ_DRQSEL_DRQSEL31            *((volatile unsigned int*)(0x4262007CUL))
#define bFM3_INTREQ_ODDPKS_ODDPKS0             *((volatile unsigned char*)(0x42620160UL))
#define bFM3_INTREQ_ODDPKS_ODDPKS1             *((volatile unsigned char*)(0x42620164UL))
#define bFM3_INTREQ_ODDPKS_ODDPKS2             *((volatile unsigned char*)(0x42620168UL))
#define bFM3_INTREQ_ODDPKS_ODDPKS3             *((volatile unsigned char*)(0x4262016CUL))
#define bFM3_INTREQ_ODDPKS_ODDPKS4             *((volatile unsigned char*)(0x42620170UL))
#define bFM3_INTREQ_IRQCMODE_IRQCMODE          *((volatile unsigned int*)(0x42620180UL))
#define bFM3_INTREQ_EXC02MON_NMI               *((volatile unsigned int*)(0x42620200UL))
#define bFM3_INTREQ_EXC02MON_HWINT             *((volatile unsigned int*)(0x42620204UL))
#define bFM3_INTREQ_IRQ00MON_FCSINT            *((volatile unsigned int*)(0x42620280UL))
#define bFM3_INTREQ_IRQ01MON_SWWDTINT          *((volatile unsigned int*)(0x42620300UL))
#define bFM3_INTREQ_IRQ02MON_LVDINT            *((volatile unsigned int*)(0x42620380UL))
#define bFM3_INTREQ_IRQ03MON_WAVE0INT0         *((volatile unsigned int*)(0x42620400UL))
#define bFM3_INTREQ_IRQ03MON_WAVE0INT1         *((volatile unsigned int*)(0x42620404UL))
#define bFM3_INTREQ_IRQ03MON_WAVE0INT2         *((volatile unsigned int*)(0x42620408UL))
#define bFM3_INTREQ_IRQ03MON_WAVE0INT3         *((volatile unsigned int*)(0x4262040CUL))
#define bFM3_INTREQ_IRQ04MON_EXTINT0           *((volatile unsigned int*)(0x42620480UL))
#define bFM3_INTREQ_IRQ04MON_EXTINT1           *((volatile unsigned int*)(0x42620484UL))
#define bFM3_INTREQ_IRQ04MON_EXTINT2           *((volatile unsigned int*)(0x42620488UL))
#define bFM3_INTREQ_IRQ04MON_EXTINT3           *((volatile unsigned int*)(0x4262048CUL))
#define bFM3_INTREQ_IRQ04MON_EXTINT6           *((volatile unsigned int*)(0x42620498UL))
#define bFM3_INTREQ_IRQ04MON_EXTINT7           *((volatile unsigned int*)(0x4262049CUL))
#define bFM3_INTREQ_IRQ05MON_EXTINT6           *((volatile unsigned int*)(0x42620518UL))
#define bFM3_INTREQ_IRQ05MON_EXTINT7           *((volatile unsigned int*)(0x4262051CUL))
#define bFM3_INTREQ_IRQ05MON_EXTINT8           *((volatile unsigned int*)(0x42620520UL))
#define bFM3_INTREQ_IRQ05MON_EXTINT9           *((volatile unsigned int*)(0x42620524UL))
#define bFM3_INTREQ_IRQ05MON_EXTINT10          *((volatile unsigned int*)(0x42620528UL))
#define bFM3_INTREQ_IRQ05MON_EXTINT11          *((volatile unsigned int*)(0x4262052CUL))
#define bFM3_INTREQ_IRQ05MON_EXTINT12          *((volatile unsigned int*)(0x42620530UL))
#define bFM3_INTREQ_IRQ05MON_EXTINT13          *((volatile unsigned int*)(0x42620534UL))
#define bFM3_INTREQ_IRQ06MON_TIMINT1           *((volatile unsigned int*)(0x42620580UL))
#define bFM3_INTREQ_IRQ06MON_TIMINT2           *((volatile unsigned int*)(0x42620584UL))
#define bFM3_INTREQ_IRQ06MON_QUD0INT0          *((volatile unsigned int*)(0x42620588UL))
#define bFM3_INTREQ_IRQ06MON_QUD0INT1          *((volatile unsigned int*)(0x4262058CUL))
#define bFM3_INTREQ_IRQ06MON_QUD0INT2          *((volatile unsigned int*)(0x42620590UL))
#define bFM3_INTREQ_IRQ06MON_QUD0INT3          *((volatile unsigned int*)(0x42620594UL))
#define bFM3_INTREQ_IRQ06MON_QUD0INT4          *((volatile unsigned int*)(0x42620598UL))
#define bFM3_INTREQ_IRQ06MON_QUD0INT5          *((volatile unsigned int*)(0x4262059CUL))
#define bFM3_INTREQ_IRQ07MON_MFSINT0           *((volatile unsigned int*)(0x42620600UL))
#define bFM3_INTREQ_IRQ08MON_MFSINT0           *((volatile unsigned int*)(0x42620680UL))
#define bFM3_INTREQ_IRQ08MON_MFSINT1           *((volatile unsigned int*)(0x42620684UL))
#define bFM3_INTREQ_IRQ09MON_MFSINT0           *((volatile unsigned int*)(0x42620700UL))
#define bFM3_INTREQ_IRQ10MON_MFSINT0           *((volatile unsigned int*)(0x42620780UL))
#define bFM3_INTREQ_IRQ10MON_MFSINT1           *((volatile unsigned int*)(0x42620784UL))
#define bFM3_INTREQ_IRQ13MON_MFSINT0           *((volatile unsigned int*)(0x42620900UL))
#define bFM3_INTREQ_IRQ14MON_MFSINT0           *((volatile unsigned int*)(0x42620980UL))
#define bFM3_INTREQ_IRQ14MON_MFSINT1           *((volatile unsigned int*)(0x42620984UL))
#define bFM3_INTREQ_IRQ17MON_MFSINT0           *((volatile unsigned int*)(0x42620B00UL))
#define bFM3_INTREQ_IRQ18MON_MFSINT0           *((volatile unsigned int*)(0x42620B80UL))
#define bFM3_INTREQ_IRQ18MON_MFSINT1           *((volatile unsigned int*)(0x42620B84UL))
#define bFM3_INTREQ_IRQ23MON_PPGINT0           *((volatile unsigned int*)(0x42620E00UL))
#define bFM3_INTREQ_IRQ23MON_PPGINT1           *((volatile unsigned int*)(0x42620E04UL))
#define bFM3_INTREQ_IRQ23MON_PPGINT2           *((volatile unsigned int*)(0x42620E08UL))
#define bFM3_INTREQ_IRQ24MON_MOSCINT           *((volatile unsigned int*)(0x42620E80UL))
#define bFM3_INTREQ_IRQ24MON_SOSCINT           *((volatile unsigned int*)(0x42620E84UL))
#define bFM3_INTREQ_IRQ24MON_MPLLINT           *((volatile unsigned int*)(0x42620E88UL))
#define bFM3_INTREQ_IRQ24MON_UPLLINT           *((volatile unsigned int*)(0x42620E8CUL))
#define bFM3_INTREQ_IRQ24MON_WCINT             *((volatile unsigned int*)(0x42620E90UL))
#define bFM3_INTREQ_IRQ24MON_RTCINT            *((volatile unsigned int*)(0x42620E94UL))
#define bFM3_INTREQ_IRQ25MON_ADCINT0           *((volatile unsigned int*)(0x42620F00UL))
#define bFM3_INTREQ_IRQ25MON_ADCINT1           *((volatile unsigned int*)(0x42620F04UL))
#define bFM3_INTREQ_IRQ25MON_ADCINT2           *((volatile unsigned int*)(0x42620F08UL))
#define bFM3_INTREQ_IRQ25MON_ADCINT3           *((volatile unsigned int*)(0x42620F0CUL))
#define bFM3_INTREQ_IRQ26MON_ADCINT0           *((volatile unsigned int*)(0x42620F80UL))
#define bFM3_INTREQ_IRQ26MON_ADCINT1           *((volatile unsigned int*)(0x42620F84UL))
#define bFM3_INTREQ_IRQ26MON_ADCINT2           *((volatile unsigned int*)(0x42620F88UL))
#define bFM3_INTREQ_IRQ26MON_ADCINT3           *((volatile unsigned int*)(0x42620F8CUL))
#define bFM3_INTREQ_IRQ28MON_FRT0INT0          *((volatile unsigned int*)(0x42621080UL))
#define bFM3_INTREQ_IRQ28MON_FRT0INT1          *((volatile unsigned int*)(0x42621084UL))
#define bFM3_INTREQ_IRQ28MON_FRT0INT2          *((volatile unsigned int*)(0x42621088UL))
#define bFM3_INTREQ_IRQ28MON_FRT0INT3          *((volatile unsigned int*)(0x4262108CUL))
#define bFM3_INTREQ_IRQ28MON_FRT0INT4          *((volatile unsigned int*)(0x42621090UL))
#define bFM3_INTREQ_IRQ28MON_FRT0INT5          *((volatile unsigned int*)(0x42621094UL))
#define bFM3_INTREQ_IRQ29MON_ICU0INT0          *((volatile unsigned int*)(0x42621100UL))
#define bFM3_INTREQ_IRQ29MON_ICU0INT1          *((volatile unsigned int*)(0x42621104UL))
#define bFM3_INTREQ_IRQ29MON_ICU0INT2          *((volatile unsigned int*)(0x42621108UL))
#define bFM3_INTREQ_IRQ29MON_ICU0INT3          *((volatile unsigned int*)(0x4262110CUL))
#define bFM3_INTREQ_IRQ30MON_OCU0INT0          *((volatile unsigned int*)(0x42621180UL))
#define bFM3_INTREQ_IRQ30MON_OCU0INT1          *((volatile unsigned int*)(0x42621184UL))
#define bFM3_INTREQ_IRQ30MON_OCU0INT2          *((volatile unsigned int*)(0x42621188UL))
#define bFM3_INTREQ_IRQ30MON_OCU0INT3          *((volatile unsigned int*)(0x4262118CUL))
#define bFM3_INTREQ_IRQ30MON_OCU0INT4          *((volatile unsigned int*)(0x42621190UL))
#define bFM3_INTREQ_IRQ30MON_OCU0INT5          *((volatile unsigned int*)(0x42621194UL))
#define bFM3_INTREQ_IRQ31MON_BTINT0            *((volatile unsigned int*)(0x42621200UL))
#define bFM3_INTREQ_IRQ31MON_BTINT1            *((volatile unsigned int*)(0x42621204UL))
#define bFM3_INTREQ_IRQ31MON_BTINT2            *((volatile unsigned int*)(0x42621208UL))
#define bFM3_INTREQ_IRQ31MON_BTINT3            *((volatile unsigned int*)(0x4262120CUL))
#define bFM3_INTREQ_IRQ31MON_BTINT4            *((volatile unsigned int*)(0x42621210UL))
#define bFM3_INTREQ_IRQ31MON_BTINT5            *((volatile unsigned int*)(0x42621214UL))
#define bFM3_INTREQ_IRQ31MON_BTINT6            *((volatile unsigned int*)(0x42621218UL))
#define bFM3_INTREQ_IRQ31MON_BTINT7            *((volatile unsigned int*)(0x4262121CUL))
#define bFM3_INTREQ_IRQ31MON_BTINT8            *((volatile unsigned int*)(0x42621220UL))
#define bFM3_INTREQ_IRQ31MON_BTINT9            *((volatile unsigned int*)(0x42621224UL))
#define bFM3_INTREQ_IRQ31MON_BTINT10           *((volatile unsigned int*)(0x42621228UL))
#define bFM3_INTREQ_IRQ31MON_BTINT11           *((volatile unsigned int*)(0x4262122CUL))
#define bFM3_INTREQ_IRQ31MON_BTINT12           *((volatile unsigned int*)(0x42621230UL))
#define bFM3_INTREQ_IRQ31MON_BTINT13           *((volatile unsigned int*)(0x42621234UL))
#define bFM3_INTREQ_IRQ31MON_BTINT14           *((volatile unsigned int*)(0x42621238UL))
#define bFM3_INTREQ_IRQ31MON_BTINT15           *((volatile unsigned int*)(0x4262123CUL))
#define bFM3_INTREQ_IRQ33MON_CAN1INT           *((volatile unsigned int*)(0x42621300UL))
#define bFM3_INTREQ_IRQ34MON_USB0INT0          *((volatile unsigned int*)(0x42621380UL))
#define bFM3_INTREQ_IRQ34MON_USB0INT1          *((volatile unsigned int*)(0x42621384UL))
#define bFM3_INTREQ_IRQ34MON_USB0INT2          *((volatile unsigned int*)(0x42621388UL))
#define bFM3_INTREQ_IRQ34MON_USB0INT3          *((volatile unsigned int*)(0x4262138CUL))
#define bFM3_INTREQ_IRQ34MON_USB0INT4          *((volatile unsigned int*)(0x42621390UL))
#define bFM3_INTREQ_IRQ35MON_USB0INT0          *((volatile unsigned int*)(0x42621400UL))
#define bFM3_INTREQ_IRQ35MON_USB0INT1          *((volatile unsigned int*)(0x42621404UL))
#define bFM3_INTREQ_IRQ35MON_USB0INT2          *((volatile unsigned int*)(0x42621408UL))
#define bFM3_INTREQ_IRQ35MON_USB0INT3          *((volatile unsigned int*)(0x4262140CUL))
#define bFM3_INTREQ_IRQ35MON_USB0INT4          *((volatile unsigned int*)(0x42621410UL))
#define bFM3_INTREQ_IRQ35MON_USB0INT5          *((volatile unsigned int*)(0x42621414UL))
#define bFM3_INTREQ_IRQ38MON_DMAINT            *((volatile unsigned int*)(0x42621580UL))
#define bFM3_INTREQ_IRQ39MON_DMAINT            *((volatile unsigned int*)(0x42621600UL))
#define bFM3_INTREQ_IRQ40MON_DMAINT            *((volatile unsigned int*)(0x42621680UL))
#define bFM3_INTREQ_IRQ41MON_DMAINT            *((volatile unsigned int*)(0x42621700UL))
#define bFM3_INTREQ_IRQ42MON_DMAINT            *((volatile unsigned int*)(0x42621780UL))
#define bFM3_INTREQ_IRQ43MON_DMAINT            *((volatile unsigned int*)(0x42621800UL))
#define bFM3_INTREQ_IRQ44MON_DMAINT            *((volatile unsigned int*)(0x42621880UL))
#define bFM3_INTREQ_IRQ45MON_DMAINT            *((volatile unsigned int*)(0x42621900UL))
#define bFM3_INTREQ_IRQ47MON_FLASHINT          *((volatile unsigned int*)(0x42621A2CUL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL00         *((volatile unsigned int*)(0x42624200UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL01         *((volatile unsigned int*)(0x42624204UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL02         *((volatile unsigned int*)(0x42624208UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL03         *((volatile unsigned int*)(0x4262420CUL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL04         *((volatile unsigned int*)(0x42624210UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL05         *((volatile unsigned int*)(0x42624214UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL06         *((volatile unsigned int*)(0x42624218UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL07         *((volatile unsigned int*)(0x4262421CUL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL10         *((volatile unsigned int*)(0x42624220UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL11         *((volatile unsigned int*)(0x42624224UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL12         *((volatile unsigned int*)(0x42624228UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL13         *((volatile unsigned int*)(0x4262422CUL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL14         *((volatile unsigned int*)(0x42624230UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL15         *((volatile unsigned int*)(0x42624234UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL16         *((volatile unsigned int*)(0x42624238UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL17         *((volatile unsigned int*)(0x4262423CUL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL20         *((volatile unsigned int*)(0x42624240UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL21         *((volatile unsigned int*)(0x42624244UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL22         *((volatile unsigned int*)(0x42624248UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL23         *((volatile unsigned int*)(0x4262424CUL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL24         *((volatile unsigned int*)(0x42624250UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL25         *((volatile unsigned int*)(0x42624254UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL26         *((volatile unsigned int*)(0x42624258UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL27         *((volatile unsigned int*)(0x4262425CUL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL30         *((volatile unsigned int*)(0x42624260UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL31         *((volatile unsigned int*)(0x42624264UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL32         *((volatile unsigned int*)(0x42624268UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL33         *((volatile unsigned int*)(0x4262426CUL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL34         *((volatile unsigned int*)(0x42624270UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL35         *((volatile unsigned int*)(0x42624274UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL36         *((volatile unsigned int*)(0x42624278UL))
#define bFM3_INTREQ_RCINTSEL0_INTSEL37         *((volatile unsigned int*)(0x4262427CUL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL40         *((volatile unsigned int*)(0x42624280UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL41         *((volatile unsigned int*)(0x42624284UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL42         *((volatile unsigned int*)(0x42624288UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL43         *((volatile unsigned int*)(0x4262428CUL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL44         *((volatile unsigned int*)(0x42624290UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL45         *((volatile unsigned int*)(0x42624294UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL46         *((volatile unsigned int*)(0x42624298UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL47         *((volatile unsigned int*)(0x4262429CUL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL50         *((volatile unsigned int*)(0x426242A0UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL51         *((volatile unsigned int*)(0x426242A4UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL52         *((volatile unsigned int*)(0x426242A8UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL53         *((volatile unsigned int*)(0x426242ACUL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL54         *((volatile unsigned int*)(0x426242B0UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL55         *((volatile unsigned int*)(0x426242B4UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL56         *((volatile unsigned int*)(0x426242B8UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL57         *((volatile unsigned int*)(0x426242BCUL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL60         *((volatile unsigned int*)(0x426242C0UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL61         *((volatile unsigned int*)(0x426242C4UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL62         *((volatile unsigned int*)(0x426242C8UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL63         *((volatile unsigned int*)(0x426242CCUL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL64         *((volatile unsigned int*)(0x426242D0UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL65         *((volatile unsigned int*)(0x426242D4UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL66         *((volatile unsigned int*)(0x426242D8UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL67         *((volatile unsigned int*)(0x426242DCUL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL70         *((volatile unsigned int*)(0x426242E0UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL71         *((volatile unsigned int*)(0x426242E4UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL72         *((volatile unsigned int*)(0x426242E8UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL73         *((volatile unsigned int*)(0x426242ECUL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL74         *((volatile unsigned int*)(0x426242F0UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL75         *((volatile unsigned int*)(0x426242F4UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL76         *((volatile unsigned int*)(0x426242F8UL))
#define bFM3_INTREQ_RCINTSEL1_INTSEL77         *((volatile unsigned int*)(0x426242FCUL))

/* General purpose I/O registers */
#define bFM3_GPIO_PFR0_P0                      *((volatile unsigned int*)(0x42660000UL))
#define bFM3_GPIO_PFR0_P1                      *((volatile unsigned int*)(0x42660004UL))
#define bFM3_GPIO_PFR0_P2                      *((volatile unsigned int*)(0x42660008UL))
#define bFM3_GPIO_PFR0_P3                      *((volatile unsigned int*)(0x4266000CUL))
#define bFM3_GPIO_PFR0_P4                      *((volatile unsigned int*)(0x42660010UL))
#define bFM3_GPIO_PFR0_PF                      *((volatile unsigned int*)(0x4266003CUL))
#define bFM3_GPIO_PFR1_P0                      *((volatile unsigned int*)(0x42660080UL))
#define bFM3_GPIO_PFR1_P1                      *((volatile unsigned int*)(0x42660084UL))
#define bFM3_GPIO_PFR1_P2                      *((volatile unsigned int*)(0x42660088UL))
#define bFM3_GPIO_PFR1_P4                      *((volatile unsigned int*)(0x42660090UL))
#define bFM3_GPIO_PFR1_P5                      *((volatile unsigned int*)(0x42660094UL))
#define bFM3_GPIO_PFR2_P1                      *((volatile unsigned int*)(0x42660104UL))
#define bFM3_GPIO_PFR2_P2                      *((volatile unsigned int*)(0x42660108UL))
#define bFM3_GPIO_PFR2_P3                      *((volatile unsigned int*)(0x4266010CUL))
#define bFM3_GPIO_PFR3_P9                      *((volatile unsigned int*)(0x426601A4UL))
#define bFM3_GPIO_PFR3_PA                      *((volatile unsigned int*)(0x426601A8UL))
#define bFM3_GPIO_PFR3_PB                      *((volatile unsigned int*)(0x426601ACUL))
#define bFM3_GPIO_PFR3_PC                      *((volatile unsigned int*)(0x426601B0UL))
#define bFM3_GPIO_PFR3_PD                      *((volatile unsigned int*)(0x426601B4UL))
#define bFM3_GPIO_PFR3_PE                      *((volatile unsigned int*)(0x426601B8UL))
#define bFM3_GPIO_PFR3_PF                      *((volatile unsigned int*)(0x426601BCUL))
#define bFM3_GPIO_PFR4_P6                      *((volatile unsigned int*)(0x42660218UL))
#define bFM3_GPIO_PFR4_P7                      *((volatile unsigned int*)(0x4266021CUL))
#define bFM3_GPIO_PFR4_P9                      *((volatile unsigned int*)(0x42660224UL))
#define bFM3_GPIO_PFR4_PA                      *((volatile unsigned int*)(0x42660228UL))
#define bFM3_GPIO_PFR5_P0                      *((volatile unsigned int*)(0x42660280UL))
#define bFM3_GPIO_PFR5_P1                      *((volatile unsigned int*)(0x42660284UL))
#define bFM3_GPIO_PFR5_P2                      *((volatile unsigned int*)(0x42660288UL))
#define bFM3_GPIO_PFR6_P0                      *((volatile unsigned int*)(0x42660300UL))
#define bFM3_GPIO_PFR6_P1                      *((volatile unsigned int*)(0x42660304UL))
#define bFM3_GPIO_PFR8_P0                      *((volatile unsigned int*)(0x42660400UL))
#define bFM3_GPIO_PFR8_P1                      *((volatile unsigned int*)(0x42660404UL))
#define bFM3_GPIO_PFRE_P0                      *((volatile unsigned int*)(0x42660700UL))
#define bFM3_GPIO_PFRE_P2                      *((volatile unsigned int*)(0x42660708UL))
#define bFM3_GPIO_PFRE_P3                      *((volatile unsigned int*)(0x4266070CUL))
#define bFM3_GPIO_PCR0_P0                      *((volatile unsigned int*)(0x42662000UL))
#define bFM3_GPIO_PCR0_P1                      *((volatile unsigned int*)(0x42662004UL))
#define bFM3_GPIO_PCR0_P2                      *((volatile unsigned int*)(0x42662008UL))
#define bFM3_GPIO_PCR0_P3                      *((volatile unsigned int*)(0x4266200CUL))
#define bFM3_GPIO_PCR0_P4                      *((volatile unsigned int*)(0x42662010UL))
#define bFM3_GPIO_PCR0_PF                      *((volatile unsigned int*)(0x4266203CUL))
#define bFM3_GPIO_PCR1_P0                      *((volatile unsigned int*)(0x42662080UL))
#define bFM3_GPIO_PCR1_P1                      *((volatile unsigned int*)(0x42662084UL))
#define bFM3_GPIO_PCR1_P2                      *((volatile unsigned int*)(0x42662088UL))
#define bFM3_GPIO_PCR1_P4                      *((volatile unsigned int*)(0x42662090UL))
#define bFM3_GPIO_PCR1_P5                      *((volatile unsigned int*)(0x42662094UL))
#define bFM3_GPIO_PCR2_P1                      *((volatile unsigned int*)(0x42662104UL))
#define bFM3_GPIO_PCR2_P2                      *((volatile unsigned int*)(0x42662108UL))
#define bFM3_GPIO_PCR2_P3                      *((volatile unsigned int*)(0x4266210CUL))
#define bFM3_GPIO_PCR3_P9                      *((volatile unsigned int*)(0x426621A4UL))
#define bFM3_GPIO_PCR3_PA                      *((volatile unsigned int*)(0x426621A8UL))
#define bFM3_GPIO_PCR3_PB                      *((volatile unsigned int*)(0x426621ACUL))
#define bFM3_GPIO_PCR3_PC                      *((volatile unsigned int*)(0x426621B0UL))
#define bFM3_GPIO_PCR3_PD                      *((volatile unsigned int*)(0x426621B4UL))
#define bFM3_GPIO_PCR3_PE                      *((volatile unsigned int*)(0x426621B8UL))
#define bFM3_GPIO_PCR3_PF                      *((volatile unsigned int*)(0x426621BCUL))
#define bFM3_GPIO_PCR4_P6                      *((volatile unsigned int*)(0x42662218UL))
#define bFM3_GPIO_PCR4_P7                      *((volatile unsigned int*)(0x4266221CUL))
#define bFM3_GPIO_PCR4_P9                      *((volatile unsigned int*)(0x42662224UL))
#define bFM3_GPIO_PCR4_PA                      *((volatile unsigned int*)(0x42662228UL))
#define bFM3_GPIO_PCR5_P0                      *((volatile unsigned int*)(0x42662280UL))
#define bFM3_GPIO_PCR5_P1                      *((volatile unsigned int*)(0x42662284UL))
#define bFM3_GPIO_PCR5_P2                      *((volatile unsigned int*)(0x42662288UL))
#define bFM3_GPIO_PCR6_P0                      *((volatile unsigned int*)(0x42662300UL))
#define bFM3_GPIO_PCR6_P1                      *((volatile unsigned int*)(0x42662304UL))
#define bFM3_GPIO_PCRE_P0                      *((volatile unsigned int*)(0x42662700UL))
#define bFM3_GPIO_PCRE_P2                      *((volatile unsigned int*)(0x42662708UL))
#define bFM3_GPIO_PCRE_P3                      *((volatile unsigned int*)(0x4266270CUL))
#define bFM3_GPIO_DDR0_P0                      *((volatile unsigned int*)(0x42664000UL))
#define bFM3_GPIO_DDR0_P1                      *((volatile unsigned int*)(0x42664004UL))
#define bFM3_GPIO_DDR0_P2                      *((volatile unsigned int*)(0x42664008UL))
#define bFM3_GPIO_DDR0_P3                      *((volatile unsigned int*)(0x4266400CUL))
#define bFM3_GPIO_DDR0_P4                      *((volatile unsigned int*)(0x42664010UL))
#define bFM3_GPIO_DDR0_PF                      *((volatile unsigned int*)(0x4266403CUL))
#define bFM3_GPIO_DDR1_P0                      *((volatile unsigned int*)(0x42664080UL))
#define bFM3_GPIO_DDR1_P1                      *((volatile unsigned int*)(0x42664084UL))
#define bFM3_GPIO_DDR1_P2                      *((volatile unsigned int*)(0x42664088UL))
#define bFM3_GPIO_DDR1_P4                      *((volatile unsigned int*)(0x42664090UL))
#define bFM3_GPIO_DDR1_P5                      *((volatile unsigned int*)(0x42664094UL))
#define bFM3_GPIO_DDR2_P1                      *((volatile unsigned int*)(0x42664104UL))
#define bFM3_GPIO_DDR2_P2                      *((volatile unsigned int*)(0x42664108UL))
#define bFM3_GPIO_DDR2_P3                      *((volatile unsigned int*)(0x4266410CUL))
#define bFM3_GPIO_DDR3_P9                      *((volatile unsigned int*)(0x426641A4UL))
#define bFM3_GPIO_DDR3_PA                      *((volatile unsigned int*)(0x426641A8UL))
#define bFM3_GPIO_DDR3_PB                      *((volatile unsigned int*)(0x426641ACUL))
#define bFM3_GPIO_DDR3_PC                      *((volatile unsigned int*)(0x426641B0UL))
#define bFM3_GPIO_DDR3_PD                      *((volatile unsigned int*)(0x426641B4UL))
#define bFM3_GPIO_DDR3_PE                      *((volatile unsigned int*)(0x426641B8UL))
#define bFM3_GPIO_DDR3_PF                      *((volatile unsigned int*)(0x426641BCUL))
#define bFM3_GPIO_DDR4_P6                      *((volatile unsigned int*)(0x42664218UL))
#define bFM3_GPIO_DDR4_P7                      *((volatile unsigned int*)(0x4266421CUL))
#define bFM3_GPIO_DDR4_P9                      *((volatile unsigned int*)(0x42664224UL))
#define bFM3_GPIO_DDR4_PA                      *((volatile unsigned int*)(0x42664228UL))
#define bFM3_GPIO_DDR5_P0                      *((volatile unsigned int*)(0x42664280UL))
#define bFM3_GPIO_DDR5_P1                      *((volatile unsigned int*)(0x42664284UL))
#define bFM3_GPIO_DDR5_P2                      *((volatile unsigned int*)(0x42664288UL))
#define bFM3_GPIO_DDR6_P0                      *((volatile unsigned int*)(0x42664300UL))
#define bFM3_GPIO_DDR6_P1                      *((volatile unsigned int*)(0x42664304UL))
#define bFM3_GPIO_DDR8_P0                      *((volatile unsigned int*)(0x42664400UL))
#define bFM3_GPIO_DDR8_P1                      *((volatile unsigned int*)(0x42664404UL))
#define bFM3_GPIO_DDRE_P0                      *((volatile unsigned int*)(0x42664700UL))
#define bFM3_GPIO_DDRE_P2                      *((volatile unsigned int*)(0x42664708UL))
#define bFM3_GPIO_DDRE_P3                      *((volatile unsigned int*)(0x4266470CUL))
#define bFM3_GPIO_PDIR0_P0                     *((volatile unsigned int*)(0x42666000UL))
#define bFM3_GPIO_PDIR0_P1                     *((volatile unsigned int*)(0x42666004UL))
#define bFM3_GPIO_PDIR0_P2                     *((volatile unsigned int*)(0x42666008UL))
#define bFM3_GPIO_PDIR0_P3                     *((volatile unsigned int*)(0x4266600CUL))
#define bFM3_GPIO_PDIR0_P4                     *((volatile unsigned int*)(0x42666010UL))
#define bFM3_GPIO_PDIR0_PF                     *((volatile unsigned int*)(0x4266603CUL))
#define bFM3_GPIO_PDIR1_P0                     *((volatile unsigned int*)(0x42666080UL))
#define bFM3_GPIO_PDIR1_P1                     *((volatile unsigned int*)(0x42666084UL))
#define bFM3_GPIO_PDIR1_P2                     *((volatile unsigned int*)(0x42666088UL))
#define bFM3_GPIO_PDIR1_P4                     *((volatile unsigned int*)(0x42666090UL))
#define bFM3_GPIO_PDIR1_P5                     *((volatile unsigned int*)(0x42666094UL))
#define bFM3_GPIO_PDIR2_P1                     *((volatile unsigned int*)(0x42666104UL))
#define bFM3_GPIO_PDIR2_P2                     *((volatile unsigned int*)(0x42666108UL))
#define bFM3_GPIO_PDIR2_P3                     *((volatile unsigned int*)(0x4266610CUL))
#define bFM3_GPIO_PDIR3_P9                     *((volatile unsigned int*)(0x426661A4UL))
#define bFM3_GPIO_PDIR3_PA                     *((volatile unsigned int*)(0x426661A8UL))
#define bFM3_GPIO_PDIR3_PB                     *((volatile unsigned int*)(0x426661ACUL))
#define bFM3_GPIO_PDIR3_PC                     *((volatile unsigned int*)(0x426661B0UL))
#define bFM3_GPIO_PDIR3_PD                     *((volatile unsigned int*)(0x426661B4UL))
#define bFM3_GPIO_PDIR3_PE                     *((volatile unsigned int*)(0x426661B8UL))
#define bFM3_GPIO_PDIR3_PF                     *((volatile unsigned int*)(0x426661BCUL))
#define bFM3_GPIO_PDIR4_P6                     *((volatile unsigned int*)(0x42666218UL))
#define bFM3_GPIO_PDIR4_P7                     *((volatile unsigned int*)(0x4266621CUL))
#define bFM3_GPIO_PDIR4_P9                     *((volatile unsigned int*)(0x42666224UL))
#define bFM3_GPIO_PDIR4_PA                     *((volatile unsigned int*)(0x42666228UL))
#define bFM3_GPIO_PDIR5_P0                     *((volatile unsigned int*)(0x42666280UL))
#define bFM3_GPIO_PDIR5_P1                     *((volatile unsigned int*)(0x42666284UL))
#define bFM3_GPIO_PDIR5_P2                     *((volatile unsigned int*)(0x42666288UL))
#define bFM3_GPIO_PDIR6_P0                     *((volatile unsigned int*)(0x42666300UL))
#define bFM3_GPIO_PDIR6_P1                     *((volatile unsigned int*)(0x42666304UL))
#define bFM3_GPIO_PDIR8_P0                     *((volatile unsigned int*)(0x42666400UL))
#define bFM3_GPIO_PDIR8_P1                     *((volatile unsigned int*)(0x42666404UL))
#define bFM3_GPIO_PDIRE_P0                     *((volatile unsigned int*)(0x42666700UL))
#define bFM3_GPIO_PDIRE_P2                     *((volatile unsigned int*)(0x42666708UL))
#define bFM3_GPIO_PDIRE_P3                     *((volatile unsigned int*)(0x4266670CUL))
#define bFM3_GPIO_PDOR0_P0                     *((volatile unsigned int*)(0x42668000UL))
#define bFM3_GPIO_PDOR0_P1                     *((volatile unsigned int*)(0x42668004UL))
#define bFM3_GPIO_PDOR0_P2                     *((volatile unsigned int*)(0x42668008UL))
#define bFM3_GPIO_PDOR0_P3                     *((volatile unsigned int*)(0x4266800CUL))
#define bFM3_GPIO_PDOR0_P4                     *((volatile unsigned int*)(0x42668010UL))
#define bFM3_GPIO_PDOR0_PF                     *((volatile unsigned int*)(0x4266803CUL))
#define bFM3_GPIO_PDOR1_P0                     *((volatile unsigned int*)(0x42668080UL))
#define bFM3_GPIO_PDOR1_P1                     *((volatile unsigned int*)(0x42668084UL))
#define bFM3_GPIO_PDOR1_P2                     *((volatile unsigned int*)(0x42668088UL))
#define bFM3_GPIO_PDOR1_P4                     *((volatile unsigned int*)(0x42668090UL))
#define bFM3_GPIO_PDOR1_P5                     *((volatile unsigned int*)(0x42668094UL))
#define bFM3_GPIO_PDOR2_P1                     *((volatile unsigned int*)(0x42668104UL))
#define bFM3_GPIO_PDOR2_P2                     *((volatile unsigned int*)(0x42668108UL))
#define bFM3_GPIO_PDOR2_P3                     *((volatile unsigned int*)(0x4266810CUL))
#define bFM3_GPIO_PDOR3_P9                     *((volatile unsigned int*)(0x426681A4UL))
#define bFM3_GPIO_PDOR3_PA                     *((volatile unsigned int*)(0x426681A8UL))
#define bFM3_GPIO_PDOR3_PB                     *((volatile unsigned int*)(0x426681ACUL))
#define bFM3_GPIO_PDOR3_PC                     *((volatile unsigned int*)(0x426681B0UL))
#define bFM3_GPIO_PDOR3_PD                     *((volatile unsigned int*)(0x426681B4UL))
#define bFM3_GPIO_PDOR3_PE                     *((volatile unsigned int*)(0x426681B8UL))
#define bFM3_GPIO_PDOR3_PF                     *((volatile unsigned int*)(0x426681BCUL))
#define bFM3_GPIO_PDOR4_P6                     *((volatile unsigned int*)(0x42668218UL))
#define bFM3_GPIO_PDOR4_P7                     *((volatile unsigned int*)(0x4266821CUL))
#define bFM3_GPIO_PDOR4_P9                     *((volatile unsigned int*)(0x42668224UL))
#define bFM3_GPIO_PDOR4_PA                     *((volatile unsigned int*)(0x42668228UL))
#define bFM3_GPIO_PDOR5_P0                     *((volatile unsigned int*)(0x42668280UL))
#define bFM3_GPIO_PDOR5_P1                     *((volatile unsigned int*)(0x42668284UL))
#define bFM3_GPIO_PDOR5_P2                     *((volatile unsigned int*)(0x42668288UL))
#define bFM3_GPIO_PDOR6_P0                     *((volatile unsigned int*)(0x42668300UL))
#define bFM3_GPIO_PDOR6_P1                     *((volatile unsigned int*)(0x42668304UL))
#define bFM3_GPIO_PDOR8_P0                     *((volatile unsigned int*)(0x42668400UL))
#define bFM3_GPIO_PDOR8_P1                     *((volatile unsigned int*)(0x42668404UL))
#define bFM3_GPIO_PDORE_P0                     *((volatile unsigned int*)(0x42668700UL))
#define bFM3_GPIO_PDORE_P2                     *((volatile unsigned int*)(0x42668708UL))
#define bFM3_GPIO_PDORE_P3                     *((volatile unsigned int*)(0x4266870CUL))
#define bFM3_GPIO_ADE_AN0                      *((volatile unsigned int*)(0x4266A000UL))
#define bFM3_GPIO_ADE_AN1                      *((volatile unsigned int*)(0x4266A004UL))
#define bFM3_GPIO_ADE_AN2                      *((volatile unsigned int*)(0x4266A008UL))
#define bFM3_GPIO_ADE_AN4                      *((volatile unsigned int*)(0x4266A010UL))
#define bFM3_GPIO_ADE_AN5                      *((volatile unsigned int*)(0x4266A014UL))
#define bFM3_GPIO_ADE_AN12                     *((volatile unsigned int*)(0x4266A030UL))
#define bFM3_GPIO_ADE_AN13                     *((volatile unsigned int*)(0x4266A034UL))
#define bFM3_GPIO_ADE_AN14                     *((volatile unsigned int*)(0x4266A038UL))
#define bFM3_GPIO_ADE_AN18                     *((volatile unsigned int*)(0x4266A048UL))
#define bFM3_GPIO_ADE_AN20                     *((volatile unsigned int*)(0x4266A050UL))
#define bFM3_GPIO_ADE_AN21                     *((volatile unsigned int*)(0x4266A054UL))
#define bFM3_GPIO_ADE_AN22                     *((volatile unsigned int*)(0x4266A058UL))
#define bFM3_GPIO_ADE_AN23                     *((volatile unsigned int*)(0x4266A05CUL))
#define bFM3_GPIO_ADE_AN24                     *((volatile unsigned int*)(0x4266A060UL))
#define bFM3_GPIO_SPSR_SUBXC0                  *((volatile unsigned int*)(0x4266B000UL))
#define bFM3_GPIO_SPSR_SUBXC1                  *((volatile unsigned int*)(0x4266B004UL))
#define bFM3_GPIO_SPSR_MAINXC0                 *((volatile unsigned int*)(0x4266B008UL))
#define bFM3_GPIO_SPSR_MAINXC1                 *((volatile unsigned int*)(0x4266B00CUL))
#define bFM3_GPIO_SPSR_USB0C                   *((volatile unsigned int*)(0x4266B010UL))
#define bFM3_GPIO_EPFR00_NMIS                  *((volatile unsigned int*)(0x4266C000UL))
#define bFM3_GPIO_EPFR00_CROUTE0               *((volatile unsigned int*)(0x4266C004UL))
#define bFM3_GPIO_EPFR00_CROUTE1               *((volatile unsigned int*)(0x4266C008UL))
#define bFM3_GPIO_EPFR00_RTCCOE0               *((volatile unsigned int*)(0x4266C010UL))
#define bFM3_GPIO_EPFR00_RTCCOE1               *((volatile unsigned int*)(0x4266C014UL))
#define bFM3_GPIO_EPFR00_SUBOUTE0              *((volatile unsigned int*)(0x4266C018UL))
#define bFM3_GPIO_EPFR00_SUBOUTE1              *((volatile unsigned int*)(0x4266C01CUL))
#define bFM3_GPIO_EPFR00_USBP0E                *((volatile unsigned int*)(0x4266C024UL))
#define bFM3_GPIO_EPFR00_JTAGEN0B              *((volatile unsigned int*)(0x4266C040UL))
#define bFM3_GPIO_EPFR00_JTAGEN1S              *((volatile unsigned int*)(0x4266C044UL))
#define bFM3_GPIO_EPFR01_RTO00E0               *((volatile unsigned int*)(0x4266C080UL))
#define bFM3_GPIO_EPFR01_RTO00E1               *((volatile unsigned int*)(0x4266C084UL))
#define bFM3_GPIO_EPFR01_RTO01E0               *((volatile unsigned int*)(0x4266C088UL))
#define bFM3_GPIO_EPFR01_RTO01E1               *((volatile unsigned int*)(0x4266C08CUL))
#define bFM3_GPIO_EPFR01_RTO02E0               *((volatile unsigned int*)(0x4266C090UL))
#define bFM3_GPIO_EPFR01_RTO02E1               *((volatile unsigned int*)(0x4266C094UL))
#define bFM3_GPIO_EPFR01_RTO03E0               *((volatile unsigned int*)(0x4266C098UL))
#define bFM3_GPIO_EPFR01_RTO03E1               *((volatile unsigned int*)(0x4266C09CUL))
#define bFM3_GPIO_EPFR01_RTO04E0               *((volatile unsigned int*)(0x4266C0A0UL))
#define bFM3_GPIO_EPFR01_RTO04E1               *((volatile unsigned int*)(0x4266C0A4UL))
#define bFM3_GPIO_EPFR01_RTO05E0               *((volatile unsigned int*)(0x4266C0A8UL))
#define bFM3_GPIO_EPFR01_RTO05E1               *((volatile unsigned int*)(0x4266C0ACUL))
#define bFM3_GPIO_EPFR01_DTTI0C                *((volatile unsigned int*)(0x4266C0B0UL))
#define bFM3_GPIO_EPFR01_DTTI0S0               *((volatile unsigned int*)(0x4266C0C0UL))
#define bFM3_GPIO_EPFR01_DTTI0S1               *((volatile unsigned int*)(0x4266C0C4UL))
#define bFM3_GPIO_EPFR01_FRCK0S0               *((volatile unsigned int*)(0x4266C0C8UL))
#define bFM3_GPIO_EPFR01_FRCK0S1               *((volatile unsigned int*)(0x4266C0CCUL))
#define bFM3_GPIO_EPFR01_IC00S0                *((volatile unsigned int*)(0x4266C0D0UL))
#define bFM3_GPIO_EPFR01_IC00S1                *((volatile unsigned int*)(0x4266C0D4UL))
#define bFM3_GPIO_EPFR01_IC00S2                *((volatile unsigned int*)(0x4266C0D8UL))
#define bFM3_GPIO_EPFR01_IC01S0                *((volatile unsigned int*)(0x4266C0DCUL))
#define bFM3_GPIO_EPFR01_IC01S1                *((volatile unsigned int*)(0x4266C0E0UL))
#define bFM3_GPIO_EPFR01_IC01S2                *((volatile unsigned int*)(0x4266C0E4UL))
#define bFM3_GPIO_EPFR01_IC02S0                *((volatile unsigned int*)(0x4266C0E8UL))
#define bFM3_GPIO_EPFR01_IC02S1                *((volatile unsigned int*)(0x4266C0ECUL))
#define bFM3_GPIO_EPFR01_IC02S2                *((volatile unsigned int*)(0x4266C0F0UL))
#define bFM3_GPIO_EPFR01_IC03S0                *((volatile unsigned int*)(0x4266C0F4UL))
#define bFM3_GPIO_EPFR01_IC03S1                *((volatile unsigned int*)(0x4266C0F8UL))
#define bFM3_GPIO_EPFR01_IC03S2                *((volatile unsigned int*)(0x4266C0FCUL))
#define bFM3_GPIO_EPFR04_TIOA0E0               *((volatile unsigned int*)(0x4266C208UL))
#define bFM3_GPIO_EPFR04_TIOA0E1               *((volatile unsigned int*)(0x4266C20CUL))
#define bFM3_GPIO_EPFR04_TIOB0S0               *((volatile unsigned int*)(0x4266C210UL))
#define bFM3_GPIO_EPFR04_TIOB0S1               *((volatile unsigned int*)(0x4266C214UL))
#define bFM3_GPIO_EPFR04_TIOB0S2               *((volatile unsigned int*)(0x4266C218UL))
#define bFM3_GPIO_EPFR04_TIOA1S0               *((volatile unsigned int*)(0x4266C220UL))
#define bFM3_GPIO_EPFR04_TIOA1S1               *((volatile unsigned int*)(0x4266C224UL))
#define bFM3_GPIO_EPFR04_TIOA1E0               *((volatile unsigned int*)(0x4266C228UL))
#define bFM3_GPIO_EPFR04_TIOA1E1               *((volatile unsigned int*)(0x4266C22CUL))
#define bFM3_GPIO_EPFR04_TIOB1S0               *((volatile unsigned int*)(0x4266C230UL))
#define bFM3_GPIO_EPFR04_TIOB1S1               *((volatile unsigned int*)(0x4266C234UL))
#define bFM3_GPIO_EPFR04_TIOA2E0               *((volatile unsigned int*)(0x4266C248UL))
#define bFM3_GPIO_EPFR04_TIOA2E1               *((volatile unsigned int*)(0x4266C24CUL))
#define bFM3_GPIO_EPFR04_TIOB2S0               *((volatile unsigned int*)(0x4266C250UL))
#define bFM3_GPIO_EPFR04_TIOB2S1               *((volatile unsigned int*)(0x4266C254UL))
#define bFM3_GPIO_EPFR04_TIOA3S0               *((volatile unsigned int*)(0x4266C260UL))
#define bFM3_GPIO_EPFR04_TIOA3S1               *((volatile unsigned int*)(0x4266C264UL))
#define bFM3_GPIO_EPFR04_TIOA3E0               *((volatile unsigned int*)(0x4266C268UL))
#define bFM3_GPIO_EPFR04_TIOA3E1               *((volatile unsigned int*)(0x4266C26CUL))
#define bFM3_GPIO_EPFR04_TIOB3S0               *((volatile unsigned int*)(0x4266C270UL))
#define bFM3_GPIO_EPFR04_TIOB3S1               *((volatile unsigned int*)(0x4266C274UL))
#define bFM3_GPIO_EPFR05_TIOA4E0               *((volatile unsigned int*)(0x4266C288UL))
#define bFM3_GPIO_EPFR05_TIOA4E1               *((volatile unsigned int*)(0x4266C28CUL))
#define bFM3_GPIO_EPFR05_TIOB4S0               *((volatile unsigned int*)(0x4266C290UL))
#define bFM3_GPIO_EPFR05_TIOB4S1               *((volatile unsigned int*)(0x4266C294UL))
#define bFM3_GPIO_EPFR05_TIOA5S0               *((volatile unsigned int*)(0x4266C2A0UL))
#define bFM3_GPIO_EPFR05_TIOA5S1               *((volatile unsigned int*)(0x4266C2A4UL))
#define bFM3_GPIO_EPFR05_TIOA5E0               *((volatile unsigned int*)(0x4266C2A8UL))
#define bFM3_GPIO_EPFR05_TIOA5E1               *((volatile unsigned int*)(0x4266C2ACUL))
#define bFM3_GPIO_EPFR05_TIOB5S0               *((volatile unsigned int*)(0x4266C2B0UL))
#define bFM3_GPIO_EPFR05_TIOB5S1               *((volatile unsigned int*)(0x4266C2B4UL))
#define bFM3_GPIO_EPFR05_TIOA6E0               *((volatile unsigned int*)(0x4266C2C8UL))
#define bFM3_GPIO_EPFR05_TIOA6E1               *((volatile unsigned int*)(0x4266C2CCUL))
#define bFM3_GPIO_EPFR05_TIOB6S0               *((volatile unsigned int*)(0x4266C2D0UL))
#define bFM3_GPIO_EPFR05_TIOB6S1               *((volatile unsigned int*)(0x4266C2D4UL))
#define bFM3_GPIO_EPFR05_TIOA7S0               *((volatile unsigned int*)(0x4266C2E0UL))
#define bFM3_GPIO_EPFR05_TIOA7S1               *((volatile unsigned int*)(0x4266C2E4UL))
#define bFM3_GPIO_EPFR05_TIOA7E0               *((volatile unsigned int*)(0x4266C2E8UL))
#define bFM3_GPIO_EPFR05_TIOA7E1               *((volatile unsigned int*)(0x4266C2ECUL))
#define bFM3_GPIO_EPFR05_TIOB7S0               *((volatile unsigned int*)(0x4266C2F0UL))
#define bFM3_GPIO_EPFR05_TIOB7S1               *((volatile unsigned int*)(0x4266C2F4UL))
#define bFM3_GPIO_EPFR06_EINT00S0              *((volatile unsigned int*)(0x4266C300UL))
#define bFM3_GPIO_EPFR06_EINT00S1              *((volatile unsigned int*)(0x4266C304UL))
#define bFM3_GPIO_EPFR06_EINT01S0              *((volatile unsigned int*)(0x4266C308UL))
#define bFM3_GPIO_EPFR06_EINT01S1              *((volatile unsigned int*)(0x4266C30CUL))
#define bFM3_GPIO_EPFR06_EINT02S0              *((volatile unsigned int*)(0x4266C310UL))
#define bFM3_GPIO_EPFR06_EINT02S1              *((volatile unsigned int*)(0x4266C314UL))
#define bFM3_GPIO_EPFR06_EINT03S0              *((volatile unsigned int*)(0x4266C318UL))
#define bFM3_GPIO_EPFR06_EINT03S1              *((volatile unsigned int*)(0x4266C31CUL))
#define bFM3_GPIO_EPFR06_EINT06S0              *((volatile unsigned int*)(0x4266C330UL))
#define bFM3_GPIO_EPFR06_EINT06S1              *((volatile unsigned int*)(0x4266C334UL))
#define bFM3_GPIO_EPFR06_EINT07S0              *((volatile unsigned int*)(0x4266C338UL))
#define bFM3_GPIO_EPFR06_EINT07S1              *((volatile unsigned int*)(0x4266C33CUL))
#define bFM3_GPIO_EPFR06_EINT14S0              *((volatile unsigned int*)(0x4266C370UL))
#define bFM3_GPIO_EPFR06_EINT14S1              *((volatile unsigned int*)(0x4266C374UL))
#define bFM3_GPIO_EPFR06_EINT15S0              *((volatile unsigned int*)(0x4266C378UL))
#define bFM3_GPIO_EPFR06_EINT15S1              *((volatile unsigned int*)(0x4266C37CUL))
#define bFM3_GPIO_EPFR07_SIN0S0                *((volatile unsigned int*)(0x4266C390UL))
#define bFM3_GPIO_EPFR07_SIN0S1                *((volatile unsigned int*)(0x4266C394UL))
#define bFM3_GPIO_EPFR07_SOT0B0                *((volatile unsigned int*)(0x4266C398UL))
#define bFM3_GPIO_EPFR07_SOT0B1                *((volatile unsigned int*)(0x4266C39CUL))
#define bFM3_GPIO_EPFR07_SCK0B0                *((volatile unsigned int*)(0x4266C3A0UL))
#define bFM3_GPIO_EPFR07_SCK0B1                *((volatile unsigned int*)(0x4266C3A4UL))
#define bFM3_GPIO_EPFR07_SIN1S0                *((volatile unsigned int*)(0x4266C3A8UL))
#define bFM3_GPIO_EPFR07_SIN1S1                *((volatile unsigned int*)(0x4266C3ACUL))
#define bFM3_GPIO_EPFR07_SOT1B0                *((volatile unsigned int*)(0x4266C3B0UL))
#define bFM3_GPIO_EPFR07_SOT1B1                *((volatile unsigned int*)(0x4266C3B4UL))
#define bFM3_GPIO_EPFR07_SCK1B0                *((volatile unsigned int*)(0x4266C3B8UL))
#define bFM3_GPIO_EPFR07_SCK1B1                *((volatile unsigned int*)(0x4266C3BCUL))
#define bFM3_GPIO_EPFR07_SIN3S0                *((volatile unsigned int*)(0x4266C3D8UL))
#define bFM3_GPIO_EPFR07_SIN3S1                *((volatile unsigned int*)(0x4266C3DCUL))
#define bFM3_GPIO_EPFR07_SOT3B0                *((volatile unsigned int*)(0x4266C3E0UL))
#define bFM3_GPIO_EPFR07_SOT3B1                *((volatile unsigned int*)(0x4266C3E4UL))
#define bFM3_GPIO_EPFR07_SCK3B0                *((volatile unsigned int*)(0x4266C3E8UL))
#define bFM3_GPIO_EPFR07_SCK3B1                *((volatile unsigned int*)(0x4266C3ECUL))
#define bFM3_GPIO_EPFR08_RTS4E0                *((volatile unsigned int*)(0x4266C400UL))
#define bFM3_GPIO_EPFR08_RTS4E1                *((volatile unsigned int*)(0x4266C404UL))
#define bFM3_GPIO_EPFR08_CTS4S0                *((volatile unsigned int*)(0x4266C408UL))
#define bFM3_GPIO_EPFR08_CTS4S1                *((volatile unsigned int*)(0x4266C40CUL))
#define bFM3_GPIO_EPFR08_SIN5S0                *((volatile unsigned int*)(0x4266C428UL))
#define bFM3_GPIO_EPFR08_SIN5S1                *((volatile unsigned int*)(0x4266C42CUL))
#define bFM3_GPIO_EPFR08_SOT5B0                *((volatile unsigned int*)(0x4266C430UL))
#define bFM3_GPIO_EPFR08_SOT5B1                *((volatile unsigned int*)(0x4266C434UL))
#define bFM3_GPIO_EPFR08_SCK5B0                *((volatile unsigned int*)(0x4266C438UL))
#define bFM3_GPIO_EPFR08_SCK5B1                *((volatile unsigned int*)(0x4266C43CUL))
#define bFM3_GPIO_EPFR09_QAIN0S0               *((volatile unsigned int*)(0x4266C480UL))
#define bFM3_GPIO_EPFR09_QAIN0S1               *((volatile unsigned int*)(0x4266C484UL))
#define bFM3_GPIO_EPFR09_QBIN0S0               *((volatile unsigned int*)(0x4266C488UL))
#define bFM3_GPIO_EPFR09_QBIN0S1               *((volatile unsigned int*)(0x4266C48CUL))
#define bFM3_GPIO_EPFR09_QZIN0S0               *((volatile unsigned int*)(0x4266C490UL))
#define bFM3_GPIO_EPFR09_QZIN0S1               *((volatile unsigned int*)(0x4266C494UL))
#define bFM3_GPIO_EPFR09_ADTRG0S0              *((volatile unsigned int*)(0x4266C4B0UL))
#define bFM3_GPIO_EPFR09_ADTRG0S1              *((volatile unsigned int*)(0x4266C4B4UL))
#define bFM3_GPIO_EPFR09_ADTRG0S2              *((volatile unsigned int*)(0x4266C4B8UL))
#define bFM3_GPIO_EPFR09_ADTRG0S3              *((volatile unsigned int*)(0x4266C4BCUL))
#define bFM3_GPIO_EPFR09_ADTRG1S0              *((volatile unsigned int*)(0x4266C4C0UL))
#define bFM3_GPIO_EPFR09_ADTRG1S1              *((volatile unsigned int*)(0x4266C4C4UL))
#define bFM3_GPIO_EPFR09_ADTRG1S2              *((volatile unsigned int*)(0x4266C4C8UL))
#define bFM3_GPIO_EPFR09_ADTRG1S3              *((volatile unsigned int*)(0x4266C4CCUL))
#define bFM3_GPIO_EPFR09_CRX1S0                *((volatile unsigned int*)(0x4266C4F0UL))
#define bFM3_GPIO_EPFR09_CRX1S1                *((volatile unsigned int*)(0x4266C4F4UL))
#define bFM3_GPIO_EPFR09_CTX1E0                *((volatile unsigned int*)(0x4266C4F8UL))
#define bFM3_GPIO_EPFR09_CTX1E1                *((volatile unsigned int*)(0x4266C4FCUL))
#define bFM3_GPIO_EPFR15_EINT16S0              *((volatile unsigned int*)(0x4266C780UL))
#define bFM3_GPIO_EPFR15_EINT16S1              *((volatile unsigned int*)(0x4266C784UL))
#define bFM3_GPIO_EPFR15_EINT17S0              *((volatile unsigned int*)(0x4266C788UL))
#define bFM3_GPIO_EPFR15_EINT17S1              *((volatile unsigned int*)(0x4266C78CUL))
#define bFM3_GPIO_EPFR15_EINT18S0              *((volatile unsigned int*)(0x4266C790UL))
#define bFM3_GPIO_EPFR15_EINT18S1              *((volatile unsigned int*)(0x4266C794UL))
#define bFM3_GPIO_EPFR15_EINT19S0              *((volatile unsigned int*)(0x4266C798UL))
#define bFM3_GPIO_EPFR15_EINT19S1              *((volatile unsigned int*)(0x4266C79CUL))
#define bFM3_GPIO_EPFR15_EINT20S0              *((volatile unsigned int*)(0x4266C7A0UL))
#define bFM3_GPIO_EPFR15_EINT20S1              *((volatile unsigned int*)(0x4266C7A4UL))
#define bFM3_GPIO_EPFR15_EINT21S0              *((volatile unsigned int*)(0x4266C7A8UL))
#define bFM3_GPIO_EPFR15_EINT21S1              *((volatile unsigned int*)(0x4266C7ACUL))
#define bFM3_GPIO_PZR6_P0                      *((volatile unsigned int*)(0x4266E300UL))

/* Low voltage detection registers */
#define bFM3_LVD_LVD_CTL_SVHI0                 *((volatile unsigned int*)(0x426A0008UL))
#define bFM3_LVD_LVD_CTL_SVHI1                 *((volatile unsigned int*)(0x426A000CUL))
#define bFM3_LVD_LVD_CTL_SVHI2                 *((volatile unsigned int*)(0x426A0010UL))
#define bFM3_LVD_LVD_CTL_SVHI3                 *((volatile unsigned int*)(0x426A0014UL))
#define bFM3_LVD_LVD_CTL_SVHI4                 *((volatile unsigned int*)(0x426A0018UL))
#define bFM3_LVD_LVD_CTL_LVDIE                 *((volatile unsigned int*)(0x426A001CUL))
#define bFM3_LVD_LVD_CTL_SVHR0                 *((volatile unsigned int*)(0x426A0028UL))
#define bFM3_LVD_LVD_CTL_SVHR1                 *((volatile unsigned int*)(0x426A002CUL))
#define bFM3_LVD_LVD_CTL_SVHR2                 *((volatile unsigned int*)(0x426A0030UL))
#define bFM3_LVD_LVD_CTL_SVHR3                 *((volatile unsigned int*)(0x426A0034UL))
#define bFM3_LVD_LVD_CTL_SVHR4                 *((volatile unsigned int*)(0x426A0038UL))
#define bFM3_LVD_LVD_CTL_LVDRE                 *((volatile unsigned int*)(0x426A003CUL))
#define bFM3_LVD_LVD_STR_LVDIR                 *((volatile unsigned int*)(0x426A009CUL))
#define bFM3_LVD_LVD_CLR_LVDCL                 *((volatile unsigned int*)(0x426A011CUL))
#define bFM3_LVD_LVD_STR2_LVDRRDY              *((volatile unsigned int*)(0x426A0218UL))
#define bFM3_LVD_LVD_STR2_LVDIRDY              *((volatile unsigned int*)(0x426A021CUL))

/* Deep standby mode control registers */
#define bFM3_DS_REG_CTL_ISUBSEL0               *((volatile unsigned int*)(0x426A2004UL))
#define bFM3_DS_REG_CTL_ISUBSEL1               *((volatile unsigned int*)(0x426A2008UL))
#define bFM3_DS_RCK_CTL_RTCCKE                 *((volatile unsigned int*)(0x426A2080UL))
#define bFM3_DS_PMD_CTL_RTCE                   *((volatile unsigned int*)(0x426B0000UL))
#define bFM3_DS_WRFSR_WINITX                   *((volatile unsigned int*)(0x426B0080UL))
#define bFM3_DS_WRFSR_WLVDH                    *((volatile unsigned int*)(0x426B0084UL))
#define bFM3_DS_WIFSR_WRTCI                    *((volatile unsigned int*)(0x426B0100UL))
#define bFM3_DS_WIFSR_WLVDI                    *((volatile unsigned int*)(0x426B0104UL))
#define bFM3_DS_WIFSR_WUI0                     *((volatile unsigned int*)(0x426B0108UL))
#define bFM3_DS_WIFSR_WUI1                     *((volatile unsigned int*)(0x426B010CUL))
#define bFM3_DS_WIFSR_WUI2                     *((volatile unsigned int*)(0x426B0110UL))
#define bFM3_DS_WIFSR_WUI3                     *((volatile unsigned int*)(0x426B0114UL))
#define bFM3_DS_WIER_WRTCE                     *((volatile unsigned int*)(0x426B0180UL))
#define bFM3_DS_WIER_WLVDE                     *((volatile unsigned int*)(0x426B0184UL))
#define bFM3_DS_WIER_WUI1E                     *((volatile unsigned int*)(0x426B018CUL))
#define bFM3_DS_WIER_WUI2E                     *((volatile unsigned int*)(0x426B0190UL))
#define bFM3_DS_WIER_WUI3E                     *((volatile unsigned int*)(0x426B0194UL))
#define bFM3_DS_WILVR_WUI1LV                   *((volatile unsigned int*)(0x426B0200UL))
#define bFM3_DS_WILVR_WUI2LV                   *((volatile unsigned int*)(0x426B0204UL))
#define bFM3_DS_WILVR_WUI3LV                   *((volatile unsigned int*)(0x426B0208UL))
#define bFM3_DS_DSRAMR_SRAMR0                  *((volatile unsigned int*)(0x426B0280UL))
#define bFM3_DS_DSRAMR_SRAMR1                  *((volatile unsigned int*)(0x426B0284UL))

/* USB clock registers */
#define bFM3_USBCLK_UCCR_UCEN                  *((volatile unsigned int*)(0x426C0000UL))
#define bFM3_USBCLK_UCCR_UCSEL                 *((volatile unsigned int*)(0x426C0004UL))
#define bFM3_USBCLK_UPCR1_UPLLEN               *((volatile unsigned int*)(0x426C0080UL))
#define bFM3_USBCLK_UPCR1_UPINC                *((volatile unsigned int*)(0x426C0084UL))
#define bFM3_USBCLK_UPCR2_UPOWT0               *((volatile unsigned int*)(0x426C0100UL))
#define bFM3_USBCLK_UPCR2_UPOWT1               *((volatile unsigned int*)(0x426C0104UL))
#define bFM3_USBCLK_UPCR2_UPOWT2               *((volatile unsigned int*)(0x426C0108UL))
#define bFM3_USBCLK_UPCR3_UPLLK0               *((volatile unsigned int*)(0x426C0180UL))
#define bFM3_USBCLK_UPCR3_UPLLK1               *((volatile unsigned int*)(0x426C0184UL))
#define bFM3_USBCLK_UPCR3_UPLLK2               *((volatile unsigned int*)(0x426C0188UL))
#define bFM3_USBCLK_UPCR3_UPLLK3               *((volatile unsigned int*)(0x426C018CUL))
#define bFM3_USBCLK_UPCR3_UPLLK4               *((volatile unsigned int*)(0x426C0190UL))
#define bFM3_USBCLK_UPCR4_UPLLN0               *((volatile unsigned int*)(0x426C0200UL))
#define bFM3_USBCLK_UPCR4_UPLLN1               *((volatile unsigned int*)(0x426C0204UL))
#define bFM3_USBCLK_UPCR4_UPLLN2               *((volatile unsigned int*)(0x426C0208UL))
#define bFM3_USBCLK_UPCR4_UPLLN3               *((volatile unsigned int*)(0x426C020CUL))
#define bFM3_USBCLK_UPCR4_UPLLN4               *((volatile unsigned int*)(0x426C0210UL))
#define bFM3_USBCLK_UPCR4_UPLLN5               *((volatile unsigned int*)(0x426C0214UL))
#define bFM3_USBCLK_UPCR4_UPLLN6               *((volatile unsigned int*)(0x426C0218UL))
#define bFM3_USBCLK_UP_STR_UPRDY               *((volatile unsigned int*)(0x426C0280UL))
#define bFM3_USBCLK_UPINT_ENR_UPCSE            *((volatile unsigned int*)(0x426C0300UL))
#define bFM3_USBCLK_UPINT_CLR_UPCSC            *((volatile unsigned int*)(0x426C0380UL))
#define bFM3_USBCLK_UPINT_STR_UPCSI            *((volatile unsigned int*)(0x426C0400UL))
#define bFM3_USBCLK_UPCR5_UPLLM0               *((volatile unsigned int*)(0x426C0480UL))
#define bFM3_USBCLK_UPCR5_UPLLM1               *((volatile unsigned int*)(0x426C0484UL))
#define bFM3_USBCLK_UPCR5_UPLLM2               *((volatile unsigned int*)(0x426C0488UL))
#define bFM3_USBCLK_UPCR5_UPLLM3               *((volatile unsigned int*)(0x426C048CUL))
#define bFM3_USBCLK_USBEN_USBEN                *((volatile unsigned int*)(0x426C0600UL))

/* CAN prescaler register */
#define bFM3_CANPRES_CANPRE_CANPRE0            *((volatile unsigned int*)(0x426E0000UL))
#define bFM3_CANPRES_CANPRE_CANPRE1            *((volatile unsigned int*)(0x426E0004UL))
#define bFM3_CANPRES_CANPRE_CANPRE2            *((volatile unsigned int*)(0x426E0008UL))
#define bFM3_CANPRES_CANPRE_CANPRE3            *((volatile unsigned int*)(0x426E000CUL))

/* UART asynchronous channel 0 registers */
#define bFM3_MFS0_UART_SMR_SOE                 *((volatile unsigned int*)(0x42700000UL))
#define bFM3_MFS0_UART_SMR_BDS                 *((volatile unsigned int*)(0x42700008UL))
#define bFM3_MFS0_UART_SMR_SBL                 *((volatile unsigned int*)(0x4270000CUL))
#define bFM3_MFS0_UART_SMR_WUCR                *((volatile unsigned int*)(0x42700010UL))
#define bFM3_MFS0_UART_SCR_TXE                 *((volatile unsigned int*)(0x42700020UL))
#define bFM3_MFS0_UART_SCR_RXE                 *((volatile unsigned int*)(0x42700024UL))
#define bFM3_MFS0_UART_SCR_TBIE                *((volatile unsigned int*)(0x42700028UL))
#define bFM3_MFS0_UART_SCR_TIE                 *((volatile unsigned int*)(0x4270002CUL))
#define bFM3_MFS0_UART_SCR_RIE                 *((volatile unsigned int*)(0x42700030UL))
#define bFM3_MFS0_UART_SCR_UPCL                *((volatile unsigned int*)(0x4270003CUL))
#define bFM3_MFS0_UART_ESCR_L0                 *((volatile unsigned int*)(0x42700080UL))
#define bFM3_MFS0_UART_ESCR_L1                 *((volatile unsigned int*)(0x42700084UL))
#define bFM3_MFS0_UART_ESCR_L2                 *((volatile unsigned int*)(0x42700088UL))
#define bFM3_MFS0_UART_ESCR_P                  *((volatile unsigned int*)(0x4270008CUL))
#define bFM3_MFS0_UART_ESCR_PEN                *((volatile unsigned int*)(0x42700090UL))
#define bFM3_MFS0_UART_ESCR_INV                *((volatile unsigned int*)(0x42700094UL))
#define bFM3_MFS0_UART_ESCR_ESBL               *((volatile unsigned int*)(0x42700098UL))
#define bFM3_MFS0_UART_ESCR_FLWEN              *((volatile unsigned int*)(0x4270009CUL))
#define bFM3_MFS0_UART_SSR_TBI                 *((volatile unsigned int*)(0x427000A0UL))
#define bFM3_MFS0_UART_SSR_TDRE                *((volatile unsigned int*)(0x427000A4UL))
#define bFM3_MFS0_UART_SSR_RDRF                *((volatile unsigned int*)(0x427000A8UL))
#define bFM3_MFS0_UART_SSR_ORE                 *((volatile unsigned int*)(0x427000ACUL))
#define bFM3_MFS0_UART_SSR_FRE                 *((volatile unsigned int*)(0x427000B0UL))
#define bFM3_MFS0_UART_SSR_PE                  *((volatile unsigned int*)(0x427000B4UL))
#define bFM3_MFS0_UART_SSR_REC                 *((volatile unsigned int*)(0x427000BCUL))
#define bFM3_MFS0_UART_RDR_AD                  *((volatile unsigned int*)(0x42700120UL))
#define bFM3_MFS0_UART_TDR_AD                  *((volatile unsigned int*)(0x42700120UL))
#define bFM3_MFS0_UART_BGR_EXT                 *((volatile unsigned int*)(0x427001BCUL))
#define bFM3_MFS0_UART_BGR1_EXT                *((volatile unsigned int*)(0x427001BCUL))
#define bFM3_MFS0_UART_FCR_FE1                 *((volatile unsigned int*)(0x42700280UL))
#define bFM3_MFS0_UART_FCR_FE2                 *((volatile unsigned int*)(0x42700284UL))
#define bFM3_MFS0_UART_FCR_FCL1                *((volatile unsigned int*)(0x42700288UL))
#define bFM3_MFS0_UART_FCR_FCL2                *((volatile unsigned int*)(0x4270028CUL))
#define bFM3_MFS0_UART_FCR_FSET                *((volatile unsigned int*)(0x42700290UL))
#define bFM3_MFS0_UART_FCR_FLD                 *((volatile unsigned int*)(0x42700294UL))
#define bFM3_MFS0_UART_FCR_FLST                *((volatile unsigned int*)(0x42700298UL))
#define bFM3_MFS0_UART_FCR_FSEL                *((volatile unsigned int*)(0x427002A0UL))
#define bFM3_MFS0_UART_FCR_FTIE                *((volatile unsigned int*)(0x427002A4UL))
#define bFM3_MFS0_UART_FCR_FDRQ                *((volatile unsigned int*)(0x427002A8UL))
#define bFM3_MFS0_UART_FCR_FRIIE               *((volatile unsigned int*)(0x427002ACUL))
#define bFM3_MFS0_UART_FCR_FLSTE               *((volatile unsigned int*)(0x427002B0UL))
#define bFM3_MFS0_UART_FCR0_FE1                *((volatile unsigned int*)(0x42700280UL))
#define bFM3_MFS0_UART_FCR0_FE2                *((volatile unsigned int*)(0x42700284UL))
#define bFM3_MFS0_UART_FCR0_FCL1               *((volatile unsigned int*)(0x42700288UL))
#define bFM3_MFS0_UART_FCR0_FCL2               *((volatile unsigned int*)(0x4270028CUL))
#define bFM3_MFS0_UART_FCR0_FSET               *((volatile unsigned int*)(0x42700290UL))
#define bFM3_MFS0_UART_FCR0_FLD                *((volatile unsigned int*)(0x42700294UL))
#define bFM3_MFS0_UART_FCR0_FLST               *((volatile unsigned int*)(0x42700298UL))
#define bFM3_MFS0_UART_FCR1_FSEL               *((volatile unsigned int*)(0x427002A0UL))
#define bFM3_MFS0_UART_FCR1_FTIE               *((volatile unsigned int*)(0x427002A4UL))
#define bFM3_MFS0_UART_FCR1_FDRQ               *((volatile unsigned int*)(0x427002A8UL))
#define bFM3_MFS0_UART_FCR1_FRIIE              *((volatile unsigned int*)(0x427002ACUL))
#define bFM3_MFS0_UART_FCR1_FLSTE              *((volatile unsigned int*)(0x427002B0UL))
#define bFM3_MFS0_UART_FBYTE_FD0               *((volatile unsigned int*)(0x42700300UL))
#define bFM3_MFS0_UART_FBYTE_FD1               *((volatile unsigned int*)(0x42700304UL))
#define bFM3_MFS0_UART_FBYTE_FD2               *((volatile unsigned int*)(0x42700308UL))
#define bFM3_MFS0_UART_FBYTE_FD3               *((volatile unsigned int*)(0x4270030CUL))
#define bFM3_MFS0_UART_FBYTE_FD4               *((volatile unsigned int*)(0x42700310UL))
#define bFM3_MFS0_UART_FBYTE_FD5               *((volatile unsigned int*)(0x42700314UL))
#define bFM3_MFS0_UART_FBYTE_FD6               *((volatile unsigned int*)(0x42700318UL))
#define bFM3_MFS0_UART_FBYTE_FD7               *((volatile unsigned int*)(0x4270031CUL))
#define bFM3_MFS0_UART_FBYTE_FD8               *((volatile unsigned int*)(0x42700320UL))
#define bFM3_MFS0_UART_FBYTE_FD9               *((volatile unsigned int*)(0x42700324UL))
#define bFM3_MFS0_UART_FBYTE_FD10              *((volatile unsigned int*)(0x42700328UL))
#define bFM3_MFS0_UART_FBYTE_FD11              *((volatile unsigned int*)(0x4270032CUL))
#define bFM3_MFS0_UART_FBYTE_FD12              *((volatile unsigned int*)(0x42700330UL))
#define bFM3_MFS0_UART_FBYTE_FD13              *((volatile unsigned int*)(0x42700334UL))
#define bFM3_MFS0_UART_FBYTE_FD14              *((volatile unsigned int*)(0x42700338UL))
#define bFM3_MFS0_UART_FBYTE_FD15              *((volatile unsigned int*)(0x4270033CUL))
#define bFM3_MFS0_UART_FBYTE1_FD0              *((volatile unsigned int*)(0x42700300UL))
#define bFM3_MFS0_UART_FBYTE1_FD1              *((volatile unsigned int*)(0x42700304UL))
#define bFM3_MFS0_UART_FBYTE1_FD2              *((volatile unsigned int*)(0x42700308UL))
#define bFM3_MFS0_UART_FBYTE1_FD3              *((volatile unsigned int*)(0x4270030CUL))
#define bFM3_MFS0_UART_FBYTE1_FD4              *((volatile unsigned int*)(0x42700310UL))
#define bFM3_MFS0_UART_FBYTE1_FD5              *((volatile unsigned int*)(0x42700314UL))
#define bFM3_MFS0_UART_FBYTE1_FD6              *((volatile unsigned int*)(0x42700318UL))
#define bFM3_MFS0_UART_FBYTE1_FD7              *((volatile unsigned int*)(0x4270031CUL))
#define bFM3_MFS0_UART_FBYTE2_FD8              *((volatile unsigned int*)(0x42700320UL))
#define bFM3_MFS0_UART_FBYTE2_FD9              *((volatile unsigned int*)(0x42700324UL))
#define bFM3_MFS0_UART_FBYTE2_FD10             *((volatile unsigned int*)(0x42700328UL))
#define bFM3_MFS0_UART_FBYTE2_FD11             *((volatile unsigned int*)(0x4270032CUL))
#define bFM3_MFS0_UART_FBYTE2_FD12             *((volatile unsigned int*)(0x42700330UL))
#define bFM3_MFS0_UART_FBYTE2_FD13             *((volatile unsigned int*)(0x42700334UL))
#define bFM3_MFS0_UART_FBYTE2_FD14             *((volatile unsigned int*)(0x42700338UL))
#define bFM3_MFS0_UART_FBYTE2_FD15             *((volatile unsigned int*)(0x4270033CUL))

/* CSIO channel 0 registers */
#define bFM3_MFS0_CSIO_SMR_SOE                 *((volatile unsigned int*)(0x42700000UL))
#define bFM3_MFS0_CSIO_SMR_SCKE                *((volatile unsigned int*)(0x42700004UL))
#define bFM3_MFS0_CSIO_SMR_BDS                 *((volatile unsigned int*)(0x42700008UL))
#define bFM3_MFS0_CSIO_SMR_SCINV               *((volatile unsigned int*)(0x4270000CUL))
#define bFM3_MFS0_CSIO_SMR_WUCR                *((volatile unsigned int*)(0x42700010UL))
#define bFM3_MFS0_CSIO_SCR_TXE                 *((volatile unsigned int*)(0x42700020UL))
#define bFM3_MFS0_CSIO_SCR_RXE                 *((volatile unsigned int*)(0x42700024UL))
#define bFM3_MFS0_CSIO_SCR_TBIE                *((volatile unsigned int*)(0x42700028UL))
#define bFM3_MFS0_CSIO_SCR_TIE                 *((volatile unsigned int*)(0x4270002CUL))
#define bFM3_MFS0_CSIO_SCR_RIE                 *((volatile unsigned int*)(0x42700030UL))
#define bFM3_MFS0_CSIO_SCR_SPI                 *((volatile unsigned int*)(0x42700034UL))
#define bFM3_MFS0_CSIO_SCR_MS                  *((volatile unsigned int*)(0x42700038UL))
#define bFM3_MFS0_CSIO_SCR_UPCL                *((volatile unsigned int*)(0x4270003CUL))
#define bFM3_MFS0_CSIO_ESCR_L0                 *((volatile unsigned int*)(0x42700080UL))
#define bFM3_MFS0_CSIO_ESCR_L1                 *((volatile unsigned int*)(0x42700084UL))
#define bFM3_MFS0_CSIO_ESCR_L2                 *((volatile unsigned int*)(0x42700088UL))
#define bFM3_MFS0_CSIO_ESCR_WT0                *((volatile unsigned int*)(0x4270008CUL))
#define bFM3_MFS0_CSIO_ESCR_WT1                *((volatile unsigned int*)(0x42700090UL))
#define bFM3_MFS0_CSIO_ESCR_SOP                *((volatile unsigned int*)(0x4270009CUL))
#define bFM3_MFS0_CSIO_SSR_TBI                 *((volatile unsigned int*)(0x427000A0UL))
#define bFM3_MFS0_CSIO_SSR_TDRE                *((volatile unsigned int*)(0x427000A4UL))
#define bFM3_MFS0_CSIO_SSR_RDRF                *((volatile unsigned int*)(0x427000A8UL))
#define bFM3_MFS0_CSIO_SSR_ORE                 *((volatile unsigned int*)(0x427000ACUL))
#define bFM3_MFS0_CSIO_SSR_REC                 *((volatile unsigned int*)(0x427000BCUL))
#define bFM3_MFS0_CSIO_FCR_FE1                 *((volatile unsigned int*)(0x42700280UL))
#define bFM3_MFS0_CSIO_FCR_FE2                 *((volatile unsigned int*)(0x42700284UL))
#define bFM3_MFS0_CSIO_FCR_FCL1                *((volatile unsigned int*)(0x42700288UL))
#define bFM3_MFS0_CSIO_FCR_FCL2                *((volatile unsigned int*)(0x4270028CUL))
#define bFM3_MFS0_CSIO_FCR_FSET                *((volatile unsigned int*)(0x42700290UL))
#define bFM3_MFS0_CSIO_FCR_FLD                 *((volatile unsigned int*)(0x42700294UL))
#define bFM3_MFS0_CSIO_FCR_FLST                *((volatile unsigned int*)(0x42700298UL))
#define bFM3_MFS0_CSIO_FCR_FSEL                *((volatile unsigned int*)(0x427002A0UL))
#define bFM3_MFS0_CSIO_FCR_FTIE                *((volatile unsigned int*)(0x427002A4UL))
#define bFM3_MFS0_CSIO_FCR_FDRQ                *((volatile unsigned int*)(0x427002A8UL))
#define bFM3_MFS0_CSIO_FCR_FRIIE               *((volatile unsigned int*)(0x427002ACUL))
#define bFM3_MFS0_CSIO_FCR_FLSTE               *((volatile unsigned int*)(0x427002B0UL))
#define bFM3_MFS0_CSIO_FCR0_FE1                *((volatile unsigned int*)(0x42700280UL))
#define bFM3_MFS0_CSIO_FCR0_FE2                *((volatile unsigned int*)(0x42700284UL))
#define bFM3_MFS0_CSIO_FCR0_FCL1               *((volatile unsigned int*)(0x42700288UL))
#define bFM3_MFS0_CSIO_FCR0_FCL2               *((volatile unsigned int*)(0x4270028CUL))
#define bFM3_MFS0_CSIO_FCR0_FSET               *((volatile unsigned int*)(0x42700290UL))
#define bFM3_MFS0_CSIO_FCR0_FLD                *((volatile unsigned int*)(0x42700294UL))
#define bFM3_MFS0_CSIO_FCR0_FLST               *((volatile unsigned int*)(0x42700298UL))
#define bFM3_MFS0_CSIO_FCR1_FSEL               *((volatile unsigned int*)(0x427002A0UL))
#define bFM3_MFS0_CSIO_FCR1_FTIE               *((volatile unsigned int*)(0x427002A4UL))
#define bFM3_MFS0_CSIO_FCR1_FDRQ               *((volatile unsigned int*)(0x427002A8UL))
#define bFM3_MFS0_CSIO_FCR1_FRIIE              *((volatile unsigned int*)(0x427002ACUL))
#define bFM3_MFS0_CSIO_FCR1_FLSTE              *((volatile unsigned int*)(0x427002B0UL))
#define bFM3_MFS0_CSIO_FBYTE_FD0               *((volatile unsigned int*)(0x42700300UL))
#define bFM3_MFS0_CSIO_FBYTE_FD1               *((volatile unsigned int*)(0x42700304UL))
#define bFM3_MFS0_CSIO_FBYTE_FD2               *((volatile unsigned int*)(0x42700308UL))
#define bFM3_MFS0_CSIO_FBYTE_FD3               *((volatile unsigned int*)(0x4270030CUL))
#define bFM3_MFS0_CSIO_FBYTE_FD4               *((volatile unsigned int*)(0x42700310UL))
#define bFM3_MFS0_CSIO_FBYTE_FD5               *((volatile unsigned int*)(0x42700314UL))
#define bFM3_MFS0_CSIO_FBYTE_FD6               *((volatile unsigned int*)(0x42700318UL))
#define bFM3_MFS0_CSIO_FBYTE_FD7               *((volatile unsigned int*)(0x4270031CUL))
#define bFM3_MFS0_CSIO_FBYTE_FD8               *((volatile unsigned int*)(0x42700320UL))
#define bFM3_MFS0_CSIO_FBYTE_FD9               *((volatile unsigned int*)(0x42700324UL))
#define bFM3_MFS0_CSIO_FBYTE_FD10              *((volatile unsigned int*)(0x42700328UL))
#define bFM3_MFS0_CSIO_FBYTE_FD11              *((volatile unsigned int*)(0x4270032CUL))
#define bFM3_MFS0_CSIO_FBYTE_FD12              *((volatile unsigned int*)(0x42700330UL))
#define bFM3_MFS0_CSIO_FBYTE_FD13              *((volatile unsigned int*)(0x42700334UL))
#define bFM3_MFS0_CSIO_FBYTE_FD14              *((volatile unsigned int*)(0x42700338UL))
#define bFM3_MFS0_CSIO_FBYTE_FD15              *((volatile unsigned int*)(0x4270033CUL))
#define bFM3_MFS0_CSIO_FBYTE1_FD0              *((volatile unsigned int*)(0x42700300UL))
#define bFM3_MFS0_CSIO_FBYTE1_FD1              *((volatile unsigned int*)(0x42700304UL))
#define bFM3_MFS0_CSIO_FBYTE1_FD2              *((volatile unsigned int*)(0x42700308UL))
#define bFM3_MFS0_CSIO_FBYTE1_FD3              *((volatile unsigned int*)(0x4270030CUL))
#define bFM3_MFS0_CSIO_FBYTE1_FD4              *((volatile unsigned int*)(0x42700310UL))
#define bFM3_MFS0_CSIO_FBYTE1_FD5              *((volatile unsigned int*)(0x42700314UL))
#define bFM3_MFS0_CSIO_FBYTE1_FD6              *((volatile unsigned int*)(0x42700318UL))
#define bFM3_MFS0_CSIO_FBYTE1_FD7              *((volatile unsigned int*)(0x4270031CUL))
#define bFM3_MFS0_CSIO_FBYTE2_FD8              *((volatile unsigned int*)(0x42700320UL))
#define bFM3_MFS0_CSIO_FBYTE2_FD9              *((volatile unsigned int*)(0x42700324UL))
#define bFM3_MFS0_CSIO_FBYTE2_FD10             *((volatile unsigned int*)(0x42700328UL))
#define bFM3_MFS0_CSIO_FBYTE2_FD11             *((volatile unsigned int*)(0x4270032CUL))
#define bFM3_MFS0_CSIO_FBYTE2_FD12             *((volatile unsigned int*)(0x42700330UL))
#define bFM3_MFS0_CSIO_FBYTE2_FD13             *((volatile unsigned int*)(0x42700334UL))
#define bFM3_MFS0_CSIO_FBYTE2_FD14             *((volatile unsigned int*)(0x42700338UL))
#define bFM3_MFS0_CSIO_FBYTE2_FD15             *((volatile unsigned int*)(0x4270033CUL))

/* LIN channel 0 registers */
#define bFM3_MFS0_LIN_SMR_SOE                  *((volatile unsigned int*)(0x42700000UL))
#define bFM3_MFS0_LIN_SMR_SBL                  *((volatile unsigned int*)(0x4270000CUL))
#define bFM3_MFS0_LIN_SMR_WUCR                 *((volatile unsigned int*)(0x42700010UL))
#define bFM3_MFS0_LIN_SCR_TXE                  *((volatile unsigned int*)(0x42700020UL))
#define bFM3_MFS0_LIN_SCR_RXE                  *((volatile unsigned int*)(0x42700024UL))
#define bFM3_MFS0_LIN_SCR_TBIE                 *((volatile unsigned int*)(0x42700028UL))
#define bFM3_MFS0_LIN_SCR_TIE                  *((volatile unsigned int*)(0x4270002CUL))
#define bFM3_MFS0_LIN_SCR_RIE                  *((volatile unsigned int*)(0x42700030UL))
#define bFM3_MFS0_LIN_SCR_LBR                  *((volatile unsigned int*)(0x42700034UL))
#define bFM3_MFS0_LIN_SCR_MS                   *((volatile unsigned int*)(0x42700038UL))
#define bFM3_MFS0_LIN_SCR_UPCL                 *((volatile unsigned int*)(0x4270003CUL))
#define bFM3_MFS0_LIN_ESCR_DEL0                *((volatile unsigned int*)(0x42700080UL))
#define bFM3_MFS0_LIN_ESCR_DEL1                *((volatile unsigned int*)(0x42700084UL))
#define bFM3_MFS0_LIN_ESCR_LBL0                *((volatile unsigned int*)(0x42700088UL))
#define bFM3_MFS0_LIN_ESCR_LBL1                *((volatile unsigned int*)(0x4270008CUL))
#define bFM3_MFS0_LIN_ESCR_LBIE                *((volatile unsigned int*)(0x42700090UL))
#define bFM3_MFS0_LIN_ESCR_ESBL                *((volatile unsigned int*)(0x42700098UL))
#define bFM3_MFS0_LIN_SSR_TBI                  *((volatile unsigned int*)(0x427000A0UL))
#define bFM3_MFS0_LIN_SSR_TDRE                 *((volatile unsigned int*)(0x427000A4UL))
#define bFM3_MFS0_LIN_SSR_RDRF                 *((volatile unsigned int*)(0x427000A8UL))
#define bFM3_MFS0_LIN_SSR_ORE                  *((volatile unsigned int*)(0x427000ACUL))
#define bFM3_MFS0_LIN_SSR_FRE                  *((volatile unsigned int*)(0x427000B0UL))
#define bFM3_MFS0_LIN_SSR_LBD                  *((volatile unsigned int*)(0x427000B4UL))
#define bFM3_MFS0_LIN_SSR_REC                  *((volatile unsigned int*)(0x427000BCUL))
#define bFM3_MFS0_LIN_BGR_EXT                  *((volatile unsigned int*)(0x427001BCUL))
#define bFM3_MFS0_LIN_BGR1_EXT                 *((volatile unsigned int*)(0x427001BCUL))
#define bFM3_MFS0_LIN_FCR_FE1                  *((volatile unsigned int*)(0x42700280UL))
#define bFM3_MFS0_LIN_FCR_FE2                  *((volatile unsigned int*)(0x42700284UL))
#define bFM3_MFS0_LIN_FCR_FCL1                 *((volatile unsigned int*)(0x42700288UL))
#define bFM3_MFS0_LIN_FCR_FCL2                 *((volatile unsigned int*)(0x4270028CUL))
#define bFM3_MFS0_LIN_FCR_FSET                 *((volatile unsigned int*)(0x42700290UL))
#define bFM3_MFS0_LIN_FCR_FLD                  *((volatile unsigned int*)(0x42700294UL))
#define bFM3_MFS0_LIN_FCR_FLST                 *((volatile unsigned int*)(0x42700298UL))
#define bFM3_MFS0_LIN_FCR_FSEL                 *((volatile unsigned int*)(0x427002A0UL))
#define bFM3_MFS0_LIN_FCR_FTIE                 *((volatile unsigned int*)(0x427002A4UL))
#define bFM3_MFS0_LIN_FCR_FDRQ                 *((volatile unsigned int*)(0x427002A8UL))
#define bFM3_MFS0_LIN_FCR_FRIIE                *((volatile unsigned int*)(0x427002ACUL))
#define bFM3_MFS0_LIN_FCR_FLSTE                *((volatile unsigned int*)(0x427002B0UL))
#define bFM3_MFS0_LIN_FCR0_FE1                 *((volatile unsigned int*)(0x42700280UL))
#define bFM3_MFS0_LIN_FCR0_FE2                 *((volatile unsigned int*)(0x42700284UL))
#define bFM3_MFS0_LIN_FCR0_FCL1                *((volatile unsigned int*)(0x42700288UL))
#define bFM3_MFS0_LIN_FCR0_FCL2                *((volatile unsigned int*)(0x4270028CUL))
#define bFM3_MFS0_LIN_FCR0_FSET                *((volatile unsigned int*)(0x42700290UL))
#define bFM3_MFS0_LIN_FCR0_FLD                 *((volatile unsigned int*)(0x42700294UL))
#define bFM3_MFS0_LIN_FCR0_FLST                *((volatile unsigned int*)(0x42700298UL))
#define bFM3_MFS0_LIN_FCR1_FSEL                *((volatile unsigned int*)(0x427002A0UL))
#define bFM3_MFS0_LIN_FCR1_FTIE                *((volatile unsigned int*)(0x427002A4UL))
#define bFM3_MFS0_LIN_FCR1_FDRQ                *((volatile unsigned int*)(0x427002A8UL))
#define bFM3_MFS0_LIN_FCR1_FRIIE               *((volatile unsigned int*)(0x427002ACUL))
#define bFM3_MFS0_LIN_FCR1_FLSTE               *((volatile unsigned int*)(0x427002B0UL))
#define bFM3_MFS0_LIN_FBYTE_FD0                *((volatile unsigned int*)(0x42700300UL))
#define bFM3_MFS0_LIN_FBYTE_FD1                *((volatile unsigned int*)(0x42700304UL))
#define bFM3_MFS0_LIN_FBYTE_FD2                *((volatile unsigned int*)(0x42700308UL))
#define bFM3_MFS0_LIN_FBYTE_FD3                *((volatile unsigned int*)(0x4270030CUL))
#define bFM3_MFS0_LIN_FBYTE_FD4                *((volatile unsigned int*)(0x42700310UL))
#define bFM3_MFS0_LIN_FBYTE_FD5                *((volatile unsigned int*)(0x42700314UL))
#define bFM3_MFS0_LIN_FBYTE_FD6                *((volatile unsigned int*)(0x42700318UL))
#define bFM3_MFS0_LIN_FBYTE_FD7                *((volatile unsigned int*)(0x4270031CUL))
#define bFM3_MFS0_LIN_FBYTE_FD8                *((volatile unsigned int*)(0x42700320UL))
#define bFM3_MFS0_LIN_FBYTE_FD9                *((volatile unsigned int*)(0x42700324UL))
#define bFM3_MFS0_LIN_FBYTE_FD10               *((volatile unsigned int*)(0x42700328UL))
#define bFM3_MFS0_LIN_FBYTE_FD11               *((volatile unsigned int*)(0x4270032CUL))
#define bFM3_MFS0_LIN_FBYTE_FD12               *((volatile unsigned int*)(0x42700330UL))
#define bFM3_MFS0_LIN_FBYTE_FD13               *((volatile unsigned int*)(0x42700334UL))
#define bFM3_MFS0_LIN_FBYTE_FD14               *((volatile unsigned int*)(0x42700338UL))
#define bFM3_MFS0_LIN_FBYTE_FD15               *((volatile unsigned int*)(0x4270033CUL))
#define bFM3_MFS0_LIN_FBYTE1_FD0               *((volatile unsigned int*)(0x42700300UL))
#define bFM3_MFS0_LIN_FBYTE1_FD1               *((volatile unsigned int*)(0x42700304UL))
#define bFM3_MFS0_LIN_FBYTE1_FD2               *((volatile unsigned int*)(0x42700308UL))
#define bFM3_MFS0_LIN_FBYTE1_FD3               *((volatile unsigned int*)(0x4270030CUL))
#define bFM3_MFS0_LIN_FBYTE1_FD4               *((volatile unsigned int*)(0x42700310UL))
#define bFM3_MFS0_LIN_FBYTE1_FD5               *((volatile unsigned int*)(0x42700314UL))
#define bFM3_MFS0_LIN_FBYTE1_FD6               *((volatile unsigned int*)(0x42700318UL))
#define bFM3_MFS0_LIN_FBYTE1_FD7               *((volatile unsigned int*)(0x4270031CUL))
#define bFM3_MFS0_LIN_FBYTE2_FD8               *((volatile unsigned int*)(0x42700320UL))
#define bFM3_MFS0_LIN_FBYTE2_FD9               *((volatile unsigned int*)(0x42700324UL))
#define bFM3_MFS0_LIN_FBYTE2_FD10              *((volatile unsigned int*)(0x42700328UL))
#define bFM3_MFS0_LIN_FBYTE2_FD11              *((volatile unsigned int*)(0x4270032CUL))
#define bFM3_MFS0_LIN_FBYTE2_FD12              *((volatile unsigned int*)(0x42700330UL))
#define bFM3_MFS0_LIN_FBYTE2_FD13              *((volatile unsigned int*)(0x42700334UL))
#define bFM3_MFS0_LIN_FBYTE2_FD14              *((volatile unsigned int*)(0x42700338UL))
#define bFM3_MFS0_LIN_FBYTE2_FD15              *((volatile unsigned int*)(0x4270033CUL))

/* I2C channel 0 registers */
#define bFM3_MFS0_I2C_SMR_TIE                  *((volatile unsigned int*)(0x42700008UL))
#define bFM3_MFS0_I2C_SMR_RIE                  *((volatile unsigned int*)(0x4270000CUL))
#define bFM3_MFS0_I2C_SMR_WUCR                 *((volatile unsigned int*)(0x42700010UL))
#define bFM3_MFS0_I2C_IBCR_INT                 *((volatile unsigned int*)(0x42700020UL))
#define bFM3_MFS0_I2C_IBCR_BER                 *((volatile unsigned int*)(0x42700024UL))
#define bFM3_MFS0_I2C_IBCR_INTE                *((volatile unsigned int*)(0x42700028UL))
#define bFM3_MFS0_I2C_IBCR_CNDE                *((volatile unsigned int*)(0x4270002CUL))
#define bFM3_MFS0_I2C_IBCR_WSEL                *((volatile unsigned int*)(0x42700030UL))
#define bFM3_MFS0_I2C_IBCR_ACKE                *((volatile unsigned int*)(0x42700034UL))
#define bFM3_MFS0_I2C_IBCR_ACT                 *((volatile unsigned int*)(0x42700038UL))
#define bFM3_MFS0_I2C_IBCR_SCC                 *((volatile unsigned int*)(0x42700038UL))
#define bFM3_MFS0_I2C_IBCR_MSS                 *((volatile unsigned int*)(0x4270003CUL))
#define bFM3_MFS0_I2C_IBSR_BB                  *((volatile unsigned int*)(0x42700080UL))
#define bFM3_MFS0_I2C_IBSR_SPC                 *((volatile unsigned int*)(0x42700084UL))
#define bFM3_MFS0_I2C_IBSR_RSC                 *((volatile unsigned int*)(0x42700088UL))
#define bFM3_MFS0_I2C_IBSR_AL                  *((volatile unsigned int*)(0x4270008CUL))
#define bFM3_MFS0_I2C_IBSR_TRX                 *((volatile unsigned int*)(0x42700090UL))
#define bFM3_MFS0_I2C_IBSR_RSA                 *((volatile unsigned int*)(0x42700094UL))
#define bFM3_MFS0_I2C_IBSR_RACK                *((volatile unsigned int*)(0x42700098UL))
#define bFM3_MFS0_I2C_IBSR_FBT                 *((volatile unsigned int*)(0x4270009CUL))
#define bFM3_MFS0_I2C_SSR_TBI                  *((volatile unsigned int*)(0x427000A0UL))
#define bFM3_MFS0_I2C_SSR_TDRE                 *((volatile unsigned int*)(0x427000A4UL))
#define bFM3_MFS0_I2C_SSR_RDRF                 *((volatile unsigned int*)(0x427000A8UL))
#define bFM3_MFS0_I2C_SSR_ORE                  *((volatile unsigned int*)(0x427000ACUL))
#define bFM3_MFS0_I2C_SSR_TBIE                 *((volatile unsigned int*)(0x427000B0UL))
#define bFM3_MFS0_I2C_SSR_DMA                  *((volatile unsigned int*)(0x427000B4UL))
#define bFM3_MFS0_I2C_SSR_TSET                 *((volatile unsigned int*)(0x427000B8UL))
#define bFM3_MFS0_I2C_SSR_REC                  *((volatile unsigned int*)(0x427000BCUL))
#define bFM3_MFS0_I2C_ISBA_SA0                 *((volatile unsigned int*)(0x42700200UL))
#define bFM3_MFS0_I2C_ISBA_SA1                 *((volatile unsigned int*)(0x42700204UL))
#define bFM3_MFS0_I2C_ISBA_SA2                 *((volatile unsigned int*)(0x42700208UL))
#define bFM3_MFS0_I2C_ISBA_SA3                 *((volatile unsigned int*)(0x4270020CUL))
#define bFM3_MFS0_I2C_ISBA_SA4                 *((volatile unsigned int*)(0x42700210UL))
#define bFM3_MFS0_I2C_ISBA_SA5                 *((volatile unsigned int*)(0x42700214UL))
#define bFM3_MFS0_I2C_ISBA_SA6                 *((volatile unsigned int*)(0x42700218UL))
#define bFM3_MFS0_I2C_ISBA_SAEN                *((volatile unsigned int*)(0x4270021CUL))
#define bFM3_MFS0_I2C_ISMK_SM0                 *((volatile unsigned int*)(0x42700220UL))
#define bFM3_MFS0_I2C_ISMK_SM1                 *((volatile unsigned int*)(0x42700224UL))
#define bFM3_MFS0_I2C_ISMK_SM2                 *((volatile unsigned int*)(0x42700228UL))
#define bFM3_MFS0_I2C_ISMK_SM3                 *((volatile unsigned int*)(0x4270022CUL))
#define bFM3_MFS0_I2C_ISMK_SM4                 *((volatile unsigned int*)(0x42700230UL))
#define bFM3_MFS0_I2C_ISMK_SM5                 *((volatile unsigned int*)(0x42700234UL))
#define bFM3_MFS0_I2C_ISMK_SM6                 *((volatile unsigned int*)(0x42700238UL))
#define bFM3_MFS0_I2C_ISMK_EN                  *((volatile unsigned int*)(0x4270023CUL))
#define bFM3_MFS0_I2C_FCR_FE1                  *((volatile unsigned int*)(0x42700280UL))
#define bFM3_MFS0_I2C_FCR_FE2                  *((volatile unsigned int*)(0x42700284UL))
#define bFM3_MFS0_I2C_FCR_FCL1                 *((volatile unsigned int*)(0x42700288UL))
#define bFM3_MFS0_I2C_FCR_FCL2                 *((volatile unsigned int*)(0x4270028CUL))
#define bFM3_MFS0_I2C_FCR_FSET                 *((volatile unsigned int*)(0x42700290UL))
#define bFM3_MFS0_I2C_FCR_FLD                  *((volatile unsigned int*)(0x42700294UL))
#define bFM3_MFS0_I2C_FCR_FLST                 *((volatile unsigned int*)(0x42700298UL))
#define bFM3_MFS0_I2C_FCR_FSEL                 *((volatile unsigned int*)(0x427002A0UL))
#define bFM3_MFS0_I2C_FCR_FTIE                 *((volatile unsigned int*)(0x427002A4UL))
#define bFM3_MFS0_I2C_FCR_FDRQ                 *((volatile unsigned int*)(0x427002A8UL))
#define bFM3_MFS0_I2C_FCR_FRIIE                *((volatile unsigned int*)(0x427002ACUL))
#define bFM3_MFS0_I2C_FCR_FLSTE                *((volatile unsigned int*)(0x427002B0UL))
#define bFM3_MFS0_I2C_FCR0_FE1                 *((volatile unsigned int*)(0x42700280UL))
#define bFM3_MFS0_I2C_FCR0_FE2                 *((volatile unsigned int*)(0x42700284UL))
#define bFM3_MFS0_I2C_FCR0_FCL1                *((volatile unsigned int*)(0x42700288UL))
#define bFM3_MFS0_I2C_FCR0_FCL2                *((volatile unsigned int*)(0x4270028CUL))
#define bFM3_MFS0_I2C_FCR0_FSET                *((volatile unsigned int*)(0x42700290UL))
#define bFM3_MFS0_I2C_FCR0_FLD                 *((volatile unsigned int*)(0x42700294UL))
#define bFM3_MFS0_I2C_FCR0_FLST                *((volatile unsigned int*)(0x42700298UL))
#define bFM3_MFS0_I2C_FCR1_FSEL                *((volatile unsigned int*)(0x427002A0UL))
#define bFM3_MFS0_I2C_FCR1_FTIE                *((volatile unsigned int*)(0x427002A4UL))
#define bFM3_MFS0_I2C_FCR1_FDRQ                *((volatile unsigned int*)(0x427002A8UL))
#define bFM3_MFS0_I2C_FCR1_FRIIE               *((volatile unsigned int*)(0x427002ACUL))
#define bFM3_MFS0_I2C_FCR1_FLSTE               *((volatile unsigned int*)(0x427002B0UL))
#define bFM3_MFS0_I2C_FBYTE_FD0                *((volatile unsigned int*)(0x42700300UL))
#define bFM3_MFS0_I2C_FBYTE_FD1                *((volatile unsigned int*)(0x42700304UL))
#define bFM3_MFS0_I2C_FBYTE_FD2                *((volatile unsigned int*)(0x42700308UL))
#define bFM3_MFS0_I2C_FBYTE_FD3                *((volatile unsigned int*)(0x4270030CUL))
#define bFM3_MFS0_I2C_FBYTE_FD4                *((volatile unsigned int*)(0x42700310UL))
#define bFM3_MFS0_I2C_FBYTE_FD5                *((volatile unsigned int*)(0x42700314UL))
#define bFM3_MFS0_I2C_FBYTE_FD6                *((volatile unsigned int*)(0x42700318UL))
#define bFM3_MFS0_I2C_FBYTE_FD7                *((volatile unsigned int*)(0x4270031CUL))
#define bFM3_MFS0_I2C_FBYTE_FD8                *((volatile unsigned int*)(0x42700320UL))
#define bFM3_MFS0_I2C_FBYTE_FD9                *((volatile unsigned int*)(0x42700324UL))
#define bFM3_MFS0_I2C_FBYTE_FD10               *((volatile unsigned int*)(0x42700328UL))
#define bFM3_MFS0_I2C_FBYTE_FD11               *((volatile unsigned int*)(0x4270032CUL))
#define bFM3_MFS0_I2C_FBYTE_FD12               *((volatile unsigned int*)(0x42700330UL))
#define bFM3_MFS0_I2C_FBYTE_FD13               *((volatile unsigned int*)(0x42700334UL))
#define bFM3_MFS0_I2C_FBYTE_FD14               *((volatile unsigned int*)(0x42700338UL))
#define bFM3_MFS0_I2C_FBYTE_FD15               *((volatile unsigned int*)(0x4270033CUL))
#define bFM3_MFS0_I2C_FBYTE1_FD0               *((volatile unsigned int*)(0x42700300UL))
#define bFM3_MFS0_I2C_FBYTE1_FD1               *((volatile unsigned int*)(0x42700304UL))
#define bFM3_MFS0_I2C_FBYTE1_FD2               *((volatile unsigned int*)(0x42700308UL))
#define bFM3_MFS0_I2C_FBYTE1_FD3               *((volatile unsigned int*)(0x4270030CUL))
#define bFM3_MFS0_I2C_FBYTE1_FD4               *((volatile unsigned int*)(0x42700310UL))
#define bFM3_MFS0_I2C_FBYTE1_FD5               *((volatile unsigned int*)(0x42700314UL))
#define bFM3_MFS0_I2C_FBYTE1_FD6               *((volatile unsigned int*)(0x42700318UL))
#define bFM3_MFS0_I2C_FBYTE1_FD7               *((volatile unsigned int*)(0x4270031CUL))
#define bFM3_MFS0_I2C_FBYTE2_FD8               *((volatile unsigned int*)(0x42700320UL))
#define bFM3_MFS0_I2C_FBYTE2_FD9               *((volatile unsigned int*)(0x42700324UL))
#define bFM3_MFS0_I2C_FBYTE2_FD10              *((volatile unsigned int*)(0x42700328UL))
#define bFM3_MFS0_I2C_FBYTE2_FD11              *((volatile unsigned int*)(0x4270032CUL))
#define bFM3_MFS0_I2C_FBYTE2_FD12              *((volatile unsigned int*)(0x42700330UL))
#define bFM3_MFS0_I2C_FBYTE2_FD13              *((volatile unsigned int*)(0x42700334UL))
#define bFM3_MFS0_I2C_FBYTE2_FD14              *((volatile unsigned int*)(0x42700338UL))
#define bFM3_MFS0_I2C_FBYTE2_FD15              *((volatile unsigned int*)(0x4270033CUL))
#define bFM3_MFS0_I2C_EIBCR_BEC                *((volatile unsigned int*)(0x427003A0UL))
#define bFM3_MFS0_I2C_EIBCR_SOCE               *((volatile unsigned int*)(0x427003A4UL))
#define bFM3_MFS0_I2C_EIBCR_SCLC               *((volatile unsigned int*)(0x427003A8UL))
#define bFM3_MFS0_I2C_EIBCR_SDAC               *((volatile unsigned int*)(0x427003ACUL))
#define bFM3_MFS0_I2C_EIBCR_SCLS               *((volatile unsigned int*)(0x427003B0UL))
#define bFM3_MFS0_I2C_EIBCR_SDAS               *((volatile unsigned int*)(0x427003B4UL))

/* UART asynchronous channel 1 registers */
#define bFM3_MFS1_UART_SMR_SOE                 *((volatile unsigned int*)(0x42702000UL))
#define bFM3_MFS1_UART_SMR_BDS                 *((volatile unsigned int*)(0x42702008UL))
#define bFM3_MFS1_UART_SMR_SBL                 *((volatile unsigned int*)(0x4270200CUL))
#define bFM3_MFS1_UART_SMR_WUCR                *((volatile unsigned int*)(0x42702010UL))
#define bFM3_MFS1_UART_SCR_TXE                 *((volatile unsigned int*)(0x42702020UL))
#define bFM3_MFS1_UART_SCR_RXE                 *((volatile unsigned int*)(0x42702024UL))
#define bFM3_MFS1_UART_SCR_TBIE                *((volatile unsigned int*)(0x42702028UL))
#define bFM3_MFS1_UART_SCR_TIE                 *((volatile unsigned int*)(0x4270202CUL))
#define bFM3_MFS1_UART_SCR_RIE                 *((volatile unsigned int*)(0x42702030UL))
#define bFM3_MFS1_UART_SCR_UPCL                *((volatile unsigned int*)(0x4270203CUL))
#define bFM3_MFS1_UART_ESCR_L0                 *((volatile unsigned int*)(0x42702080UL))
#define bFM3_MFS1_UART_ESCR_L1                 *((volatile unsigned int*)(0x42702084UL))
#define bFM3_MFS1_UART_ESCR_L2                 *((volatile unsigned int*)(0x42702088UL))
#define bFM3_MFS1_UART_ESCR_P                  *((volatile unsigned int*)(0x4270208CUL))
#define bFM3_MFS1_UART_ESCR_PEN                *((volatile unsigned int*)(0x42702090UL))
#define bFM3_MFS1_UART_ESCR_INV                *((volatile unsigned int*)(0x42702094UL))
#define bFM3_MFS1_UART_ESCR_ESBL               *((volatile unsigned int*)(0x42702098UL))
#define bFM3_MFS1_UART_ESCR_FLWEN              *((volatile unsigned int*)(0x4270209CUL))
#define bFM3_MFS1_UART_SSR_TBI                 *((volatile unsigned int*)(0x427020A0UL))
#define bFM3_MFS1_UART_SSR_TDRE                *((volatile unsigned int*)(0x427020A4UL))
#define bFM3_MFS1_UART_SSR_RDRF                *((volatile unsigned int*)(0x427020A8UL))
#define bFM3_MFS1_UART_SSR_ORE                 *((volatile unsigned int*)(0x427020ACUL))
#define bFM3_MFS1_UART_SSR_FRE                 *((volatile unsigned int*)(0x427020B0UL))
#define bFM3_MFS1_UART_SSR_PE                  *((volatile unsigned int*)(0x427020B4UL))
#define bFM3_MFS1_UART_SSR_REC                 *((volatile unsigned int*)(0x427020BCUL))
#define bFM3_MFS1_UART_RDR_AD                  *((volatile unsigned int*)(0x42702120UL))
#define bFM3_MFS1_UART_TDR_AD                  *((volatile unsigned int*)(0x42702120UL))
#define bFM3_MFS1_UART_BGR_EXT                 *((volatile unsigned int*)(0x427021BCUL))
#define bFM3_MFS1_UART_BGR1_EXT                *((volatile unsigned int*)(0x427021BCUL))
#define bFM3_MFS1_UART_FCR_FE1                 *((volatile unsigned int*)(0x42702280UL))
#define bFM3_MFS1_UART_FCR_FE2                 *((volatile unsigned int*)(0x42702284UL))
#define bFM3_MFS1_UART_FCR_FCL1                *((volatile unsigned int*)(0x42702288UL))
#define bFM3_MFS1_UART_FCR_FCL2                *((volatile unsigned int*)(0x4270228CUL))
#define bFM3_MFS1_UART_FCR_FSET                *((volatile unsigned int*)(0x42702290UL))
#define bFM3_MFS1_UART_FCR_FLD                 *((volatile unsigned int*)(0x42702294UL))
#define bFM3_MFS1_UART_FCR_FLST                *((volatile unsigned int*)(0x42702298UL))
#define bFM3_MFS1_UART_FCR_FSEL                *((volatile unsigned int*)(0x427022A0UL))
#define bFM3_MFS1_UART_FCR_FTIE                *((volatile unsigned int*)(0x427022A4UL))
#define bFM3_MFS1_UART_FCR_FDRQ                *((volatile unsigned int*)(0x427022A8UL))
#define bFM3_MFS1_UART_FCR_FRIIE               *((volatile unsigned int*)(0x427022ACUL))
#define bFM3_MFS1_UART_FCR_FLSTE               *((volatile unsigned int*)(0x427022B0UL))
#define bFM3_MFS1_UART_FCR0_FE1                *((volatile unsigned int*)(0x42702280UL))
#define bFM3_MFS1_UART_FCR0_FE2                *((volatile unsigned int*)(0x42702284UL))
#define bFM3_MFS1_UART_FCR0_FCL1               *((volatile unsigned int*)(0x42702288UL))
#define bFM3_MFS1_UART_FCR0_FCL2               *((volatile unsigned int*)(0x4270228CUL))
#define bFM3_MFS1_UART_FCR0_FSET               *((volatile unsigned int*)(0x42702290UL))
#define bFM3_MFS1_UART_FCR0_FLD                *((volatile unsigned int*)(0x42702294UL))
#define bFM3_MFS1_UART_FCR0_FLST               *((volatile unsigned int*)(0x42702298UL))
#define bFM3_MFS1_UART_FCR1_FSEL               *((volatile unsigned int*)(0x427022A0UL))
#define bFM3_MFS1_UART_FCR1_FTIE               *((volatile unsigned int*)(0x427022A4UL))
#define bFM3_MFS1_UART_FCR1_FDRQ               *((volatile unsigned int*)(0x427022A8UL))
#define bFM3_MFS1_UART_FCR1_FRIIE              *((volatile unsigned int*)(0x427022ACUL))
#define bFM3_MFS1_UART_FCR1_FLSTE              *((volatile unsigned int*)(0x427022B0UL))
#define bFM3_MFS1_UART_FBYTE_FD0               *((volatile unsigned int*)(0x42702300UL))
#define bFM3_MFS1_UART_FBYTE_FD1               *((volatile unsigned int*)(0x42702304UL))
#define bFM3_MFS1_UART_FBYTE_FD2               *((volatile unsigned int*)(0x42702308UL))
#define bFM3_MFS1_UART_FBYTE_FD3               *((volatile unsigned int*)(0x4270230CUL))
#define bFM3_MFS1_UART_FBYTE_FD4               *((volatile unsigned int*)(0x42702310UL))
#define bFM3_MFS1_UART_FBYTE_FD5               *((volatile unsigned int*)(0x42702314UL))
#define bFM3_MFS1_UART_FBYTE_FD6               *((volatile unsigned int*)(0x42702318UL))
#define bFM3_MFS1_UART_FBYTE_FD7               *((volatile unsigned int*)(0x4270231CUL))
#define bFM3_MFS1_UART_FBYTE_FD8               *((volatile unsigned int*)(0x42702320UL))
#define bFM3_MFS1_UART_FBYTE_FD9               *((volatile unsigned int*)(0x42702324UL))
#define bFM3_MFS1_UART_FBYTE_FD10              *((volatile unsigned int*)(0x42702328UL))
#define bFM3_MFS1_UART_FBYTE_FD11              *((volatile unsigned int*)(0x4270232CUL))
#define bFM3_MFS1_UART_FBYTE_FD12              *((volatile unsigned int*)(0x42702330UL))
#define bFM3_MFS1_UART_FBYTE_FD13              *((volatile unsigned int*)(0x42702334UL))
#define bFM3_MFS1_UART_FBYTE_FD14              *((volatile unsigned int*)(0x42702338UL))
#define bFM3_MFS1_UART_FBYTE_FD15              *((volatile unsigned int*)(0x4270233CUL))
#define bFM3_MFS1_UART_FBYTE1_FD0              *((volatile unsigned int*)(0x42702300UL))
#define bFM3_MFS1_UART_FBYTE1_FD1              *((volatile unsigned int*)(0x42702304UL))
#define bFM3_MFS1_UART_FBYTE1_FD2              *((volatile unsigned int*)(0x42702308UL))
#define bFM3_MFS1_UART_FBYTE1_FD3              *((volatile unsigned int*)(0x4270230CUL))
#define bFM3_MFS1_UART_FBYTE1_FD4              *((volatile unsigned int*)(0x42702310UL))
#define bFM3_MFS1_UART_FBYTE1_FD5              *((volatile unsigned int*)(0x42702314UL))
#define bFM3_MFS1_UART_FBYTE1_FD6              *((volatile unsigned int*)(0x42702318UL))
#define bFM3_MFS1_UART_FBYTE1_FD7              *((volatile unsigned int*)(0x4270231CUL))
#define bFM3_MFS1_UART_FBYTE2_FD8              *((volatile unsigned int*)(0x42702320UL))
#define bFM3_MFS1_UART_FBYTE2_FD9              *((volatile unsigned int*)(0x42702324UL))
#define bFM3_MFS1_UART_FBYTE2_FD10             *((volatile unsigned int*)(0x42702328UL))
#define bFM3_MFS1_UART_FBYTE2_FD11             *((volatile unsigned int*)(0x4270232CUL))
#define bFM3_MFS1_UART_FBYTE2_FD12             *((volatile unsigned int*)(0x42702330UL))
#define bFM3_MFS1_UART_FBYTE2_FD13             *((volatile unsigned int*)(0x42702334UL))
#define bFM3_MFS1_UART_FBYTE2_FD14             *((volatile unsigned int*)(0x42702338UL))
#define bFM3_MFS1_UART_FBYTE2_FD15             *((volatile unsigned int*)(0x4270233CUL))

/* CSIO channel 1 registers */
#define bFM3_MFS1_CSIO_SMR_SOE                 *((volatile unsigned int*)(0x42702000UL))
#define bFM3_MFS1_CSIO_SMR_SCKE                *((volatile unsigned int*)(0x42702004UL))
#define bFM3_MFS1_CSIO_SMR_BDS                 *((volatile unsigned int*)(0x42702008UL))
#define bFM3_MFS1_CSIO_SMR_SCINV               *((volatile unsigned int*)(0x4270200CUL))
#define bFM3_MFS1_CSIO_SMR_WUCR                *((volatile unsigned int*)(0x42702010UL))
#define bFM3_MFS1_CSIO_SCR_TXE                 *((volatile unsigned int*)(0x42702020UL))
#define bFM3_MFS1_CSIO_SCR_RXE                 *((volatile unsigned int*)(0x42702024UL))
#define bFM3_MFS1_CSIO_SCR_TBIE                *((volatile unsigned int*)(0x42702028UL))
#define bFM3_MFS1_CSIO_SCR_TIE                 *((volatile unsigned int*)(0x4270202CUL))
#define bFM3_MFS1_CSIO_SCR_RIE                 *((volatile unsigned int*)(0x42702030UL))
#define bFM3_MFS1_CSIO_SCR_SPI                 *((volatile unsigned int*)(0x42702034UL))
#define bFM3_MFS1_CSIO_SCR_MS                  *((volatile unsigned int*)(0x42702038UL))
#define bFM3_MFS1_CSIO_SCR_UPCL                *((volatile unsigned int*)(0x4270203CUL))
#define bFM3_MFS1_CSIO_ESCR_L0                 *((volatile unsigned int*)(0x42702080UL))
#define bFM3_MFS1_CSIO_ESCR_L1                 *((volatile unsigned int*)(0x42702084UL))
#define bFM3_MFS1_CSIO_ESCR_L2                 *((volatile unsigned int*)(0x42702088UL))
#define bFM3_MFS1_CSIO_ESCR_WT0                *((volatile unsigned int*)(0x4270208CUL))
#define bFM3_MFS1_CSIO_ESCR_WT1                *((volatile unsigned int*)(0x42702090UL))
#define bFM3_MFS1_CSIO_ESCR_SOP                *((volatile unsigned int*)(0x4270209CUL))
#define bFM3_MFS1_CSIO_SSR_TBI                 *((volatile unsigned int*)(0x427020A0UL))
#define bFM3_MFS1_CSIO_SSR_TDRE                *((volatile unsigned int*)(0x427020A4UL))
#define bFM3_MFS1_CSIO_SSR_RDRF                *((volatile unsigned int*)(0x427020A8UL))
#define bFM3_MFS1_CSIO_SSR_ORE                 *((volatile unsigned int*)(0x427020ACUL))
#define bFM3_MFS1_CSIO_SSR_REC                 *((volatile unsigned int*)(0x427020BCUL))
#define bFM3_MFS1_CSIO_FCR_FE1                 *((volatile unsigned int*)(0x42702280UL))
#define bFM3_MFS1_CSIO_FCR_FE2                 *((volatile unsigned int*)(0x42702284UL))
#define bFM3_MFS1_CSIO_FCR_FCL1                *((volatile unsigned int*)(0x42702288UL))
#define bFM3_MFS1_CSIO_FCR_FCL2                *((volatile unsigned int*)(0x4270228CUL))
#define bFM3_MFS1_CSIO_FCR_FSET                *((volatile unsigned int*)(0x42702290UL))
#define bFM3_MFS1_CSIO_FCR_FLD                 *((volatile unsigned int*)(0x42702294UL))
#define bFM3_MFS1_CSIO_FCR_FLST                *((volatile unsigned int*)(0x42702298UL))
#define bFM3_MFS1_CSIO_FCR_FSEL                *((volatile unsigned int*)(0x427022A0UL))
#define bFM3_MFS1_CSIO_FCR_FTIE                *((volatile unsigned int*)(0x427022A4UL))
#define bFM3_MFS1_CSIO_FCR_FDRQ                *((volatile unsigned int*)(0x427022A8UL))
#define bFM3_MFS1_CSIO_FCR_FRIIE               *((volatile unsigned int*)(0x427022ACUL))
#define bFM3_MFS1_CSIO_FCR_FLSTE               *((volatile unsigned int*)(0x427022B0UL))
#define bFM3_MFS1_CSIO_FCR0_FE1                *((volatile unsigned int*)(0x42702280UL))
#define bFM3_MFS1_CSIO_FCR0_FE2                *((volatile unsigned int*)(0x42702284UL))
#define bFM3_MFS1_CSIO_FCR0_FCL1               *((volatile unsigned int*)(0x42702288UL))
#define bFM3_MFS1_CSIO_FCR0_FCL2               *((volatile unsigned int*)(0x4270228CUL))
#define bFM3_MFS1_CSIO_FCR0_FSET               *((volatile unsigned int*)(0x42702290UL))
#define bFM3_MFS1_CSIO_FCR0_FLD                *((volatile unsigned int*)(0x42702294UL))
#define bFM3_MFS1_CSIO_FCR0_FLST               *((volatile unsigned int*)(0x42702298UL))
#define bFM3_MFS1_CSIO_FCR1_FSEL               *((volatile unsigned int*)(0x427022A0UL))
#define bFM3_MFS1_CSIO_FCR1_FTIE               *((volatile unsigned int*)(0x427022A4UL))
#define bFM3_MFS1_CSIO_FCR1_FDRQ               *((volatile unsigned int*)(0x427022A8UL))
#define bFM3_MFS1_CSIO_FCR1_FRIIE              *((volatile unsigned int*)(0x427022ACUL))
#define bFM3_MFS1_CSIO_FCR1_FLSTE              *((volatile unsigned int*)(0x427022B0UL))
#define bFM3_MFS1_CSIO_FBYTE_FD0               *((volatile unsigned int*)(0x42702300UL))
#define bFM3_MFS1_CSIO_FBYTE_FD1               *((volatile unsigned int*)(0x42702304UL))
#define bFM3_MFS1_CSIO_FBYTE_FD2               *((volatile unsigned int*)(0x42702308UL))
#define bFM3_MFS1_CSIO_FBYTE_FD3               *((volatile unsigned int*)(0x4270230CUL))
#define bFM3_MFS1_CSIO_FBYTE_FD4               *((volatile unsigned int*)(0x42702310UL))
#define bFM3_MFS1_CSIO_FBYTE_FD5               *((volatile unsigned int*)(0x42702314UL))
#define bFM3_MFS1_CSIO_FBYTE_FD6               *((volatile unsigned int*)(0x42702318UL))
#define bFM3_MFS1_CSIO_FBYTE_FD7               *((volatile unsigned int*)(0x4270231CUL))
#define bFM3_MFS1_CSIO_FBYTE_FD8               *((volatile unsigned int*)(0x42702320UL))
#define bFM3_MFS1_CSIO_FBYTE_FD9               *((volatile unsigned int*)(0x42702324UL))
#define bFM3_MFS1_CSIO_FBYTE_FD10              *((volatile unsigned int*)(0x42702328UL))
#define bFM3_MFS1_CSIO_FBYTE_FD11              *((volatile unsigned int*)(0x4270232CUL))
#define bFM3_MFS1_CSIO_FBYTE_FD12              *((volatile unsigned int*)(0x42702330UL))
#define bFM3_MFS1_CSIO_FBYTE_FD13              *((volatile unsigned int*)(0x42702334UL))
#define bFM3_MFS1_CSIO_FBYTE_FD14              *((volatile unsigned int*)(0x42702338UL))
#define bFM3_MFS1_CSIO_FBYTE_FD15              *((volatile unsigned int*)(0x4270233CUL))
#define bFM3_MFS1_CSIO_FBYTE1_FD0              *((volatile unsigned int*)(0x42702300UL))
#define bFM3_MFS1_CSIO_FBYTE1_FD1              *((volatile unsigned int*)(0x42702304UL))
#define bFM3_MFS1_CSIO_FBYTE1_FD2              *((volatile unsigned int*)(0x42702308UL))
#define bFM3_MFS1_CSIO_FBYTE1_FD3              *((volatile unsigned int*)(0x4270230CUL))
#define bFM3_MFS1_CSIO_FBYTE1_FD4              *((volatile unsigned int*)(0x42702310UL))
#define bFM3_MFS1_CSIO_FBYTE1_FD5              *((volatile unsigned int*)(0x42702314UL))
#define bFM3_MFS1_CSIO_FBYTE1_FD6              *((volatile unsigned int*)(0x42702318UL))
#define bFM3_MFS1_CSIO_FBYTE1_FD7              *((volatile unsigned int*)(0x4270231CUL))
#define bFM3_MFS1_CSIO_FBYTE2_FD8              *((volatile unsigned int*)(0x42702320UL))
#define bFM3_MFS1_CSIO_FBYTE2_FD9              *((volatile unsigned int*)(0x42702324UL))
#define bFM3_MFS1_CSIO_FBYTE2_FD10             *((volatile unsigned int*)(0x42702328UL))
#define bFM3_MFS1_CSIO_FBYTE2_FD11             *((volatile unsigned int*)(0x4270232CUL))
#define bFM3_MFS1_CSIO_FBYTE2_FD12             *((volatile unsigned int*)(0x42702330UL))
#define bFM3_MFS1_CSIO_FBYTE2_FD13             *((volatile unsigned int*)(0x42702334UL))
#define bFM3_MFS1_CSIO_FBYTE2_FD14             *((volatile unsigned int*)(0x42702338UL))
#define bFM3_MFS1_CSIO_FBYTE2_FD15             *((volatile unsigned int*)(0x4270233CUL))

/* LIN channel 1 registers */
#define bFM3_MFS1_LIN_SMR_SOE                  *((volatile unsigned int*)(0x42702000UL))
#define bFM3_MFS1_LIN_SMR_SBL                  *((volatile unsigned int*)(0x4270200CUL))
#define bFM3_MFS1_LIN_SMR_WUCR                 *((volatile unsigned int*)(0x42702010UL))
#define bFM3_MFS1_LIN_SCR_TXE                  *((volatile unsigned int*)(0x42702020UL))
#define bFM3_MFS1_LIN_SCR_RXE                  *((volatile unsigned int*)(0x42702024UL))
#define bFM3_MFS1_LIN_SCR_TBIE                 *((volatile unsigned int*)(0x42702028UL))
#define bFM3_MFS1_LIN_SCR_TIE                  *((volatile unsigned int*)(0x4270202CUL))
#define bFM3_MFS1_LIN_SCR_RIE                  *((volatile unsigned int*)(0x42702030UL))
#define bFM3_MFS1_LIN_SCR_LBR                  *((volatile unsigned int*)(0x42702034UL))
#define bFM3_MFS1_LIN_SCR_MS                   *((volatile unsigned int*)(0x42702038UL))
#define bFM3_MFS1_LIN_SCR_UPCL                 *((volatile unsigned int*)(0x4270203CUL))
#define bFM3_MFS1_LIN_ESCR_DEL0                *((volatile unsigned int*)(0x42702080UL))
#define bFM3_MFS1_LIN_ESCR_DEL1                *((volatile unsigned int*)(0x42702084UL))
#define bFM3_MFS1_LIN_ESCR_LBL0                *((volatile unsigned int*)(0x42702088UL))
#define bFM3_MFS1_LIN_ESCR_LBL1                *((volatile unsigned int*)(0x4270208CUL))
#define bFM3_MFS1_LIN_ESCR_LBIE                *((volatile unsigned int*)(0x42702090UL))
#define bFM3_MFS1_LIN_ESCR_ESBL                *((volatile unsigned int*)(0x42702098UL))
#define bFM3_MFS1_LIN_SSR_TBI                  *((volatile unsigned int*)(0x427020A0UL))
#define bFM3_MFS1_LIN_SSR_TDRE                 *((volatile unsigned int*)(0x427020A4UL))
#define bFM3_MFS1_LIN_SSR_RDRF                 *((volatile unsigned int*)(0x427020A8UL))
#define bFM3_MFS1_LIN_SSR_ORE                  *((volatile unsigned int*)(0x427020ACUL))
#define bFM3_MFS1_LIN_SSR_FRE                  *((volatile unsigned int*)(0x427020B0UL))
#define bFM3_MFS1_LIN_SSR_LBD                  *((volatile unsigned int*)(0x427020B4UL))
#define bFM3_MFS1_LIN_SSR_REC                  *((volatile unsigned int*)(0x427020BCUL))
#define bFM3_MFS1_LIN_BGR_EXT                  *((volatile unsigned int*)(0x427021BCUL))
#define bFM3_MFS1_LIN_BGR1_EXT                 *((volatile unsigned int*)(0x427021BCUL))
#define bFM3_MFS1_LIN_FCR_FE1                  *((volatile unsigned int*)(0x42702280UL))
#define bFM3_MFS1_LIN_FCR_FE2                  *((volatile unsigned int*)(0x42702284UL))
#define bFM3_MFS1_LIN_FCR_FCL1                 *((volatile unsigned int*)(0x42702288UL))
#define bFM3_MFS1_LIN_FCR_FCL2                 *((volatile unsigned int*)(0x4270228CUL))
#define bFM3_MFS1_LIN_FCR_FSET                 *((volatile unsigned int*)(0x42702290UL))
#define bFM3_MFS1_LIN_FCR_FLD                  *((volatile unsigned int*)(0x42702294UL))
#define bFM3_MFS1_LIN_FCR_FLST                 *((volatile unsigned int*)(0x42702298UL))
#define bFM3_MFS1_LIN_FCR_FSEL                 *((volatile unsigned int*)(0x427022A0UL))
#define bFM3_MFS1_LIN_FCR_FTIE                 *((volatile unsigned int*)(0x427022A4UL))
#define bFM3_MFS1_LIN_FCR_FDRQ                 *((volatile unsigned int*)(0x427022A8UL))
#define bFM3_MFS1_LIN_FCR_FRIIE                *((volatile unsigned int*)(0x427022ACUL))
#define bFM3_MFS1_LIN_FCR_FLSTE                *((volatile unsigned int*)(0x427022B0UL))
#define bFM3_MFS1_LIN_FCR0_FE1                 *((volatile unsigned int*)(0x42702280UL))
#define bFM3_MFS1_LIN_FCR0_FE2                 *((volatile unsigned int*)(0x42702284UL))
#define bFM3_MFS1_LIN_FCR0_FCL1                *((volatile unsigned int*)(0x42702288UL))
#define bFM3_MFS1_LIN_FCR0_FCL2                *((volatile unsigned int*)(0x4270228CUL))
#define bFM3_MFS1_LIN_FCR0_FSET                *((volatile unsigned int*)(0x42702290UL))
#define bFM3_MFS1_LIN_FCR0_FLD                 *((volatile unsigned int*)(0x42702294UL))
#define bFM3_MFS1_LIN_FCR0_FLST                *((volatile unsigned int*)(0x42702298UL))
#define bFM3_MFS1_LIN_FCR1_FSEL                *((volatile unsigned int*)(0x427022A0UL))
#define bFM3_MFS1_LIN_FCR1_FTIE                *((volatile unsigned int*)(0x427022A4UL))
#define bFM3_MFS1_LIN_FCR1_FDRQ                *((volatile unsigned int*)(0x427022A8UL))
#define bFM3_MFS1_LIN_FCR1_FRIIE               *((volatile unsigned int*)(0x427022ACUL))
#define bFM3_MFS1_LIN_FCR1_FLSTE               *((volatile unsigned int*)(0x427022B0UL))
#define bFM3_MFS1_LIN_FBYTE_FD0                *((volatile unsigned int*)(0x42702300UL))
#define bFM3_MFS1_LIN_FBYTE_FD1                *((volatile unsigned int*)(0x42702304UL))
#define bFM3_MFS1_LIN_FBYTE_FD2                *((volatile unsigned int*)(0x42702308UL))
#define bFM3_MFS1_LIN_FBYTE_FD3                *((volatile unsigned int*)(0x4270230CUL))
#define bFM3_MFS1_LIN_FBYTE_FD4                *((volatile unsigned int*)(0x42702310UL))
#define bFM3_MFS1_LIN_FBYTE_FD5                *((volatile unsigned int*)(0x42702314UL))
#define bFM3_MFS1_LIN_FBYTE_FD6                *((volatile unsigned int*)(0x42702318UL))
#define bFM3_MFS1_LIN_FBYTE_FD7                *((volatile unsigned int*)(0x4270231CUL))
#define bFM3_MFS1_LIN_FBYTE_FD8                *((volatile unsigned int*)(0x42702320UL))
#define bFM3_MFS1_LIN_FBYTE_FD9                *((volatile unsigned int*)(0x42702324UL))
#define bFM3_MFS1_LIN_FBYTE_FD10               *((volatile unsigned int*)(0x42702328UL))
#define bFM3_MFS1_LIN_FBYTE_FD11               *((volatile unsigned int*)(0x4270232CUL))
#define bFM3_MFS1_LIN_FBYTE_FD12               *((volatile unsigned int*)(0x42702330UL))
#define bFM3_MFS1_LIN_FBYTE_FD13               *((volatile unsigned int*)(0x42702334UL))
#define bFM3_MFS1_LIN_FBYTE_FD14               *((volatile unsigned int*)(0x42702338UL))
#define bFM3_MFS1_LIN_FBYTE_FD15               *((volatile unsigned int*)(0x4270233CUL))
#define bFM3_MFS1_LIN_FBYTE1_FD0               *((volatile unsigned int*)(0x42702300UL))
#define bFM3_MFS1_LIN_FBYTE1_FD1               *((volatile unsigned int*)(0x42702304UL))
#define bFM3_MFS1_LIN_FBYTE1_FD2               *((volatile unsigned int*)(0x42702308UL))
#define bFM3_MFS1_LIN_FBYTE1_FD3               *((volatile unsigned int*)(0x4270230CUL))
#define bFM3_MFS1_LIN_FBYTE1_FD4               *((volatile unsigned int*)(0x42702310UL))
#define bFM3_MFS1_LIN_FBYTE1_FD5               *((volatile unsigned int*)(0x42702314UL))
#define bFM3_MFS1_LIN_FBYTE1_FD6               *((volatile unsigned int*)(0x42702318UL))
#define bFM3_MFS1_LIN_FBYTE1_FD7               *((volatile unsigned int*)(0x4270231CUL))
#define bFM3_MFS1_LIN_FBYTE2_FD8               *((volatile unsigned int*)(0x42702320UL))
#define bFM3_MFS1_LIN_FBYTE2_FD9               *((volatile unsigned int*)(0x42702324UL))
#define bFM3_MFS1_LIN_FBYTE2_FD10              *((volatile unsigned int*)(0x42702328UL))
#define bFM3_MFS1_LIN_FBYTE2_FD11              *((volatile unsigned int*)(0x4270232CUL))
#define bFM3_MFS1_LIN_FBYTE2_FD12              *((volatile unsigned int*)(0x42702330UL))
#define bFM3_MFS1_LIN_FBYTE2_FD13              *((volatile unsigned int*)(0x42702334UL))
#define bFM3_MFS1_LIN_FBYTE2_FD14              *((volatile unsigned int*)(0x42702338UL))
#define bFM3_MFS1_LIN_FBYTE2_FD15              *((volatile unsigned int*)(0x4270233CUL))

/* I2C channel 1 registers */
#define bFM3_MFS1_I2C_SMR_TIE                  *((volatile unsigned int*)(0x42702008UL))
#define bFM3_MFS1_I2C_SMR_RIE                  *((volatile unsigned int*)(0x4270200CUL))
#define bFM3_MFS1_I2C_SMR_WUCR                 *((volatile unsigned int*)(0x42702010UL))
#define bFM3_MFS1_I2C_IBCR_INT                 *((volatile unsigned int*)(0x42702020UL))
#define bFM3_MFS1_I2C_IBCR_BER                 *((volatile unsigned int*)(0x42702024UL))
#define bFM3_MFS1_I2C_IBCR_INTE                *((volatile unsigned int*)(0x42702028UL))
#define bFM3_MFS1_I2C_IBCR_CNDE                *((volatile unsigned int*)(0x4270202CUL))
#define bFM3_MFS1_I2C_IBCR_WSEL                *((volatile unsigned int*)(0x42702030UL))
#define bFM3_MFS1_I2C_IBCR_ACKE                *((volatile unsigned int*)(0x42702034UL))
#define bFM3_MFS1_I2C_IBCR_ACT                 *((volatile unsigned int*)(0x42702038UL))
#define bFM3_MFS1_I2C_IBCR_SCC                 *((volatile unsigned int*)(0x42702038UL))
#define bFM3_MFS1_I2C_IBCR_MSS                 *((volatile unsigned int*)(0x4270203CUL))
#define bFM3_MFS1_I2C_IBSR_BB                  *((volatile unsigned int*)(0x42702080UL))
#define bFM3_MFS1_I2C_IBSR_SPC                 *((volatile unsigned int*)(0x42702084UL))
#define bFM3_MFS1_I2C_IBSR_RSC                 *((volatile unsigned int*)(0x42702088UL))
#define bFM3_MFS1_I2C_IBSR_AL                  *((volatile unsigned int*)(0x4270208CUL))
#define bFM3_MFS1_I2C_IBSR_TRX                 *((volatile unsigned int*)(0x42702090UL))
#define bFM3_MFS1_I2C_IBSR_RSA                 *((volatile unsigned int*)(0x42702094UL))
#define bFM3_MFS1_I2C_IBSR_RACK                *((volatile unsigned int*)(0x42702098UL))
#define bFM3_MFS1_I2C_IBSR_FBT                 *((volatile unsigned int*)(0x4270209CUL))
#define bFM3_MFS1_I2C_SSR_TBI                  *((volatile unsigned int*)(0x427020A0UL))
#define bFM3_MFS1_I2C_SSR_TDRE                 *((volatile unsigned int*)(0x427020A4UL))
#define bFM3_MFS1_I2C_SSR_RDRF                 *((volatile unsigned int*)(0x427020A8UL))
#define bFM3_MFS1_I2C_SSR_ORE                  *((volatile unsigned int*)(0x427020ACUL))
#define bFM3_MFS1_I2C_SSR_TBIE                 *((volatile unsigned int*)(0x427020B0UL))
#define bFM3_MFS1_I2C_SSR_DMA                  *((volatile unsigned int*)(0x427020B4UL))
#define bFM3_MFS1_I2C_SSR_TSET                 *((volatile unsigned int*)(0x427020B8UL))
#define bFM3_MFS1_I2C_SSR_REC                  *((volatile unsigned int*)(0x427020BCUL))
#define bFM3_MFS1_I2C_ISBA_SA0                 *((volatile unsigned int*)(0x42702200UL))
#define bFM3_MFS1_I2C_ISBA_SA1                 *((volatile unsigned int*)(0x42702204UL))
#define bFM3_MFS1_I2C_ISBA_SA2                 *((volatile unsigned int*)(0x42702208UL))
#define bFM3_MFS1_I2C_ISBA_SA3                 *((volatile unsigned int*)(0x4270220CUL))
#define bFM3_MFS1_I2C_ISBA_SA4                 *((volatile unsigned int*)(0x42702210UL))
#define bFM3_MFS1_I2C_ISBA_SA5                 *((volatile unsigned int*)(0x42702214UL))
#define bFM3_MFS1_I2C_ISBA_SA6                 *((volatile unsigned int*)(0x42702218UL))
#define bFM3_MFS1_I2C_ISBA_SAEN                *((volatile unsigned int*)(0x4270221CUL))
#define bFM3_MFS1_I2C_ISMK_SM0                 *((volatile unsigned int*)(0x42702220UL))
#define bFM3_MFS1_I2C_ISMK_SM1                 *((volatile unsigned int*)(0x42702224UL))
#define bFM3_MFS1_I2C_ISMK_SM2                 *((volatile unsigned int*)(0x42702228UL))
#define bFM3_MFS1_I2C_ISMK_SM3                 *((volatile unsigned int*)(0x4270222CUL))
#define bFM3_MFS1_I2C_ISMK_SM4                 *((volatile unsigned int*)(0x42702230UL))
#define bFM3_MFS1_I2C_ISMK_SM5                 *((volatile unsigned int*)(0x42702234UL))
#define bFM3_MFS1_I2C_ISMK_SM6                 *((volatile unsigned int*)(0x42702238UL))
#define bFM3_MFS1_I2C_ISMK_EN                  *((volatile unsigned int*)(0x4270223CUL))
#define bFM3_MFS1_I2C_FCR_FE1                  *((volatile unsigned int*)(0x42702280UL))
#define bFM3_MFS1_I2C_FCR_FE2                  *((volatile unsigned int*)(0x42702284UL))
#define bFM3_MFS1_I2C_FCR_FCL1                 *((volatile unsigned int*)(0x42702288UL))
#define bFM3_MFS1_I2C_FCR_FCL2                 *((volatile unsigned int*)(0x4270228CUL))
#define bFM3_MFS1_I2C_FCR_FSET                 *((volatile unsigned int*)(0x42702290UL))
#define bFM3_MFS1_I2C_FCR_FLD                  *((volatile unsigned int*)(0x42702294UL))
#define bFM3_MFS1_I2C_FCR_FLST                 *((volatile unsigned int*)(0x42702298UL))
#define bFM3_MFS1_I2C_FCR_FSEL                 *((volatile unsigned int*)(0x427022A0UL))
#define bFM3_MFS1_I2C_FCR_FTIE                 *((volatile unsigned int*)(0x427022A4UL))
#define bFM3_MFS1_I2C_FCR_FDRQ                 *((volatile unsigned int*)(0x427022A8UL))
#define bFM3_MFS1_I2C_FCR_FRIIE                *((volatile unsigned int*)(0x427022ACUL))
#define bFM3_MFS1_I2C_FCR_FLSTE                *((volatile unsigned int*)(0x427022B0UL))
#define bFM3_MFS1_I2C_FCR0_FE1                 *((volatile unsigned int*)(0x42702280UL))
#define bFM3_MFS1_I2C_FCR0_FE2                 *((volatile unsigned int*)(0x42702284UL))
#define bFM3_MFS1_I2C_FCR0_FCL1                *((volatile unsigned int*)(0x42702288UL))
#define bFM3_MFS1_I2C_FCR0_FCL2                *((volatile unsigned int*)(0x4270228CUL))
#define bFM3_MFS1_I2C_FCR0_FSET                *((volatile unsigned int*)(0x42702290UL))
#define bFM3_MFS1_I2C_FCR0_FLD                 *((volatile unsigned int*)(0x42702294UL))
#define bFM3_MFS1_I2C_FCR0_FLST                *((volatile unsigned int*)(0x42702298UL))
#define bFM3_MFS1_I2C_FCR1_FSEL                *((volatile unsigned int*)(0x427022A0UL))
#define bFM3_MFS1_I2C_FCR1_FTIE                *((volatile unsigned int*)(0x427022A4UL))
#define bFM3_MFS1_I2C_FCR1_FDRQ                *((volatile unsigned int*)(0x427022A8UL))
#define bFM3_MFS1_I2C_FCR1_FRIIE               *((volatile unsigned int*)(0x427022ACUL))
#define bFM3_MFS1_I2C_FCR1_FLSTE               *((volatile unsigned int*)(0x427022B0UL))
#define bFM3_MFS1_I2C_FBYTE_FD0                *((volatile unsigned int*)(0x42702300UL))
#define bFM3_MFS1_I2C_FBYTE_FD1                *((volatile unsigned int*)(0x42702304UL))
#define bFM3_MFS1_I2C_FBYTE_FD2                *((volatile unsigned int*)(0x42702308UL))
#define bFM3_MFS1_I2C_FBYTE_FD3                *((volatile unsigned int*)(0x4270230CUL))
#define bFM3_MFS1_I2C_FBYTE_FD4                *((volatile unsigned int*)(0x42702310UL))
#define bFM3_MFS1_I2C_FBYTE_FD5                *((volatile unsigned int*)(0x42702314UL))
#define bFM3_MFS1_I2C_FBYTE_FD6                *((volatile unsigned int*)(0x42702318UL))
#define bFM3_MFS1_I2C_FBYTE_FD7                *((volatile unsigned int*)(0x4270231CUL))
#define bFM3_MFS1_I2C_FBYTE_FD8                *((volatile unsigned int*)(0x42702320UL))
#define bFM3_MFS1_I2C_FBYTE_FD9                *((volatile unsigned int*)(0x42702324UL))
#define bFM3_MFS1_I2C_FBYTE_FD10               *((volatile unsigned int*)(0x42702328UL))
#define bFM3_MFS1_I2C_FBYTE_FD11               *((volatile unsigned int*)(0x4270232CUL))
#define bFM3_MFS1_I2C_FBYTE_FD12               *((volatile unsigned int*)(0x42702330UL))
#define bFM3_MFS1_I2C_FBYTE_FD13               *((volatile unsigned int*)(0x42702334UL))
#define bFM3_MFS1_I2C_FBYTE_FD14               *((volatile unsigned int*)(0x42702338UL))
#define bFM3_MFS1_I2C_FBYTE_FD15               *((volatile unsigned int*)(0x4270233CUL))
#define bFM3_MFS1_I2C_FBYTE1_FD0               *((volatile unsigned int*)(0x42702300UL))
#define bFM3_MFS1_I2C_FBYTE1_FD1               *((volatile unsigned int*)(0x42702304UL))
#define bFM3_MFS1_I2C_FBYTE1_FD2               *((volatile unsigned int*)(0x42702308UL))
#define bFM3_MFS1_I2C_FBYTE1_FD3               *((volatile unsigned int*)(0x4270230CUL))
#define bFM3_MFS1_I2C_FBYTE1_FD4               *((volatile unsigned int*)(0x42702310UL))
#define bFM3_MFS1_I2C_FBYTE1_FD5               *((volatile unsigned int*)(0x42702314UL))
#define bFM3_MFS1_I2C_FBYTE1_FD6               *((volatile unsigned int*)(0x42702318UL))
#define bFM3_MFS1_I2C_FBYTE1_FD7               *((volatile unsigned int*)(0x4270231CUL))
#define bFM3_MFS1_I2C_FBYTE2_FD8               *((volatile unsigned int*)(0x42702320UL))
#define bFM3_MFS1_I2C_FBYTE2_FD9               *((volatile unsigned int*)(0x42702324UL))
#define bFM3_MFS1_I2C_FBYTE2_FD10              *((volatile unsigned int*)(0x42702328UL))
#define bFM3_MFS1_I2C_FBYTE2_FD11              *((volatile unsigned int*)(0x4270232CUL))
#define bFM3_MFS1_I2C_FBYTE2_FD12              *((volatile unsigned int*)(0x42702330UL))
#define bFM3_MFS1_I2C_FBYTE2_FD13              *((volatile unsigned int*)(0x42702334UL))
#define bFM3_MFS1_I2C_FBYTE2_FD14              *((volatile unsigned int*)(0x42702338UL))
#define bFM3_MFS1_I2C_FBYTE2_FD15              *((volatile unsigned int*)(0x4270233CUL))
#define bFM3_MFS1_I2C_EIBCR_BEC                *((volatile unsigned int*)(0x427023A0UL))
#define bFM3_MFS1_I2C_EIBCR_SOCE               *((volatile unsigned int*)(0x427023A4UL))
#define bFM3_MFS1_I2C_EIBCR_SCLC               *((volatile unsigned int*)(0x427023A8UL))
#define bFM3_MFS1_I2C_EIBCR_SDAC               *((volatile unsigned int*)(0x427023ACUL))
#define bFM3_MFS1_I2C_EIBCR_SCLS               *((volatile unsigned int*)(0x427023B0UL))
#define bFM3_MFS1_I2C_EIBCR_SDAS               *((volatile unsigned int*)(0x427023B4UL))





/* UART asynchronous channel 3 registers */
#define bFM3_MFS3_UART_SMR_SOE                 *((volatile unsigned int*)(0x42706000UL))
#define bFM3_MFS3_UART_SMR_BDS                 *((volatile unsigned int*)(0x42706008UL))
#define bFM3_MFS3_UART_SMR_SBL                 *((volatile unsigned int*)(0x4270600CUL))
#define bFM3_MFS3_UART_SMR_WUCR                *((volatile unsigned int*)(0x42706010UL))
#define bFM3_MFS3_UART_SCR_TXE                 *((volatile unsigned int*)(0x42706020UL))
#define bFM3_MFS3_UART_SCR_RXE                 *((volatile unsigned int*)(0x42706024UL))
#define bFM3_MFS3_UART_SCR_TBIE                *((volatile unsigned int*)(0x42706028UL))
#define bFM3_MFS3_UART_SCR_TIE                 *((volatile unsigned int*)(0x4270602CUL))
#define bFM3_MFS3_UART_SCR_RIE                 *((volatile unsigned int*)(0x42706030UL))
#define bFM3_MFS3_UART_SCR_UPCL                *((volatile unsigned int*)(0x4270603CUL))
#define bFM3_MFS3_UART_ESCR_L0                 *((volatile unsigned int*)(0x42706080UL))
#define bFM3_MFS3_UART_ESCR_L1                 *((volatile unsigned int*)(0x42706084UL))
#define bFM3_MFS3_UART_ESCR_L2                 *((volatile unsigned int*)(0x42706088UL))
#define bFM3_MFS3_UART_ESCR_P                  *((volatile unsigned int*)(0x4270608CUL))
#define bFM3_MFS3_UART_ESCR_PEN                *((volatile unsigned int*)(0x42706090UL))
#define bFM3_MFS3_UART_ESCR_INV                *((volatile unsigned int*)(0x42706094UL))
#define bFM3_MFS3_UART_ESCR_ESBL               *((volatile unsigned int*)(0x42706098UL))
#define bFM3_MFS3_UART_ESCR_FLWEN              *((volatile unsigned int*)(0x4270609CUL))
#define bFM3_MFS3_UART_SSR_TBI                 *((volatile unsigned int*)(0x427060A0UL))
#define bFM3_MFS3_UART_SSR_TDRE                *((volatile unsigned int*)(0x427060A4UL))
#define bFM3_MFS3_UART_SSR_RDRF                *((volatile unsigned int*)(0x427060A8UL))
#define bFM3_MFS3_UART_SSR_ORE                 *((volatile unsigned int*)(0x427060ACUL))
#define bFM3_MFS3_UART_SSR_FRE                 *((volatile unsigned int*)(0x427060B0UL))
#define bFM3_MFS3_UART_SSR_PE                  *((volatile unsigned int*)(0x427060B4UL))
#define bFM3_MFS3_UART_SSR_REC                 *((volatile unsigned int*)(0x427060BCUL))
#define bFM3_MFS3_UART_RDR_AD                  *((volatile unsigned int*)(0x42706120UL))
#define bFM3_MFS3_UART_TDR_AD                  *((volatile unsigned int*)(0x42706120UL))
#define bFM3_MFS3_UART_BGR_EXT                 *((volatile unsigned int*)(0x427061BCUL))
#define bFM3_MFS3_UART_BGR1_EXT                *((volatile unsigned int*)(0x427061BCUL))
#define bFM3_MFS3_UART_FCR_FE1                 *((volatile unsigned int*)(0x42706280UL))
#define bFM3_MFS3_UART_FCR_FE2                 *((volatile unsigned int*)(0x42706284UL))
#define bFM3_MFS3_UART_FCR_FCL1                *((volatile unsigned int*)(0x42706288UL))
#define bFM3_MFS3_UART_FCR_FCL2                *((volatile unsigned int*)(0x4270628CUL))
#define bFM3_MFS3_UART_FCR_FSET                *((volatile unsigned int*)(0x42706290UL))
#define bFM3_MFS3_UART_FCR_FLD                 *((volatile unsigned int*)(0x42706294UL))
#define bFM3_MFS3_UART_FCR_FLST                *((volatile unsigned int*)(0x42706298UL))
#define bFM3_MFS3_UART_FCR_FSEL                *((volatile unsigned int*)(0x427062A0UL))
#define bFM3_MFS3_UART_FCR_FTIE                *((volatile unsigned int*)(0x427062A4UL))
#define bFM3_MFS3_UART_FCR_FDRQ                *((volatile unsigned int*)(0x427062A8UL))
#define bFM3_MFS3_UART_FCR_FRIIE               *((volatile unsigned int*)(0x427062ACUL))
#define bFM3_MFS3_UART_FCR_FLSTE               *((volatile unsigned int*)(0x427062B0UL))
#define bFM3_MFS3_UART_FCR0_FE1                *((volatile unsigned int*)(0x42706280UL))
#define bFM3_MFS3_UART_FCR0_FE2                *((volatile unsigned int*)(0x42706284UL))
#define bFM3_MFS3_UART_FCR0_FCL1               *((volatile unsigned int*)(0x42706288UL))
#define bFM3_MFS3_UART_FCR0_FCL2               *((volatile unsigned int*)(0x4270628CUL))
#define bFM3_MFS3_UART_FCR0_FSET               *((volatile unsigned int*)(0x42706290UL))
#define bFM3_MFS3_UART_FCR0_FLD                *((volatile unsigned int*)(0x42706294UL))
#define bFM3_MFS3_UART_FCR0_FLST               *((volatile unsigned int*)(0x42706298UL))
#define bFM3_MFS3_UART_FCR1_FSEL               *((volatile unsigned int*)(0x427062A0UL))
#define bFM3_MFS3_UART_FCR1_FTIE               *((volatile unsigned int*)(0x427062A4UL))
#define bFM3_MFS3_UART_FCR1_FDRQ               *((volatile unsigned int*)(0x427062A8UL))
#define bFM3_MFS3_UART_FCR1_FRIIE              *((volatile unsigned int*)(0x427062ACUL))
#define bFM3_MFS3_UART_FCR1_FLSTE              *((volatile unsigned int*)(0x427062B0UL))
#define bFM3_MFS3_UART_FBYTE_FD0               *((volatile unsigned int*)(0x42706300UL))
#define bFM3_MFS3_UART_FBYTE_FD1               *((volatile unsigned int*)(0x42706304UL))
#define bFM3_MFS3_UART_FBYTE_FD2               *((volatile unsigned int*)(0x42706308UL))
#define bFM3_MFS3_UART_FBYTE_FD3               *((volatile unsigned int*)(0x4270630CUL))
#define bFM3_MFS3_UART_FBYTE_FD4               *((volatile unsigned int*)(0x42706310UL))
#define bFM3_MFS3_UART_FBYTE_FD5               *((volatile unsigned int*)(0x42706314UL))
#define bFM3_MFS3_UART_FBYTE_FD6               *((volatile unsigned int*)(0x42706318UL))
#define bFM3_MFS3_UART_FBYTE_FD7               *((volatile unsigned int*)(0x4270631CUL))
#define bFM3_MFS3_UART_FBYTE_FD8               *((volatile unsigned int*)(0x42706320UL))
#define bFM3_MFS3_UART_FBYTE_FD9               *((volatile unsigned int*)(0x42706324UL))
#define bFM3_MFS3_UART_FBYTE_FD10              *((volatile unsigned int*)(0x42706328UL))
#define bFM3_MFS3_UART_FBYTE_FD11              *((volatile unsigned int*)(0x4270632CUL))
#define bFM3_MFS3_UART_FBYTE_FD12              *((volatile unsigned int*)(0x42706330UL))
#define bFM3_MFS3_UART_FBYTE_FD13              *((volatile unsigned int*)(0x42706334UL))
#define bFM3_MFS3_UART_FBYTE_FD14              *((volatile unsigned int*)(0x42706338UL))
#define bFM3_MFS3_UART_FBYTE_FD15              *((volatile unsigned int*)(0x4270633CUL))
#define bFM3_MFS3_UART_FBYTE1_FD0              *((volatile unsigned int*)(0x42706300UL))
#define bFM3_MFS3_UART_FBYTE1_FD1              *((volatile unsigned int*)(0x42706304UL))
#define bFM3_MFS3_UART_FBYTE1_FD2              *((volatile unsigned int*)(0x42706308UL))
#define bFM3_MFS3_UART_FBYTE1_FD3              *((volatile unsigned int*)(0x4270630CUL))
#define bFM3_MFS3_UART_FBYTE1_FD4              *((volatile unsigned int*)(0x42706310UL))
#define bFM3_MFS3_UART_FBYTE1_FD5              *((volatile unsigned int*)(0x42706314UL))
#define bFM3_MFS3_UART_FBYTE1_FD6              *((volatile unsigned int*)(0x42706318UL))
#define bFM3_MFS3_UART_FBYTE1_FD7              *((volatile unsigned int*)(0x4270631CUL))
#define bFM3_MFS3_UART_FBYTE2_FD8              *((volatile unsigned int*)(0x42706320UL))
#define bFM3_MFS3_UART_FBYTE2_FD9              *((volatile unsigned int*)(0x42706324UL))
#define bFM3_MFS3_UART_FBYTE2_FD10             *((volatile unsigned int*)(0x42706328UL))
#define bFM3_MFS3_UART_FBYTE2_FD11             *((volatile unsigned int*)(0x4270632CUL))
#define bFM3_MFS3_UART_FBYTE2_FD12             *((volatile unsigned int*)(0x42706330UL))
#define bFM3_MFS3_UART_FBYTE2_FD13             *((volatile unsigned int*)(0x42706334UL))
#define bFM3_MFS3_UART_FBYTE2_FD14             *((volatile unsigned int*)(0x42706338UL))
#define bFM3_MFS3_UART_FBYTE2_FD15             *((volatile unsigned int*)(0x4270633CUL))

/* CSIO channel 3 registers */
#define bFM3_MFS3_CSIO_SMR_SOE                 *((volatile unsigned int*)(0x42706000UL))
#define bFM3_MFS3_CSIO_SMR_SCKE                *((volatile unsigned int*)(0x42706004UL))
#define bFM3_MFS3_CSIO_SMR_BDS                 *((volatile unsigned int*)(0x42706008UL))
#define bFM3_MFS3_CSIO_SMR_SCINV               *((volatile unsigned int*)(0x4270600CUL))
#define bFM3_MFS3_CSIO_SMR_WUCR                *((volatile unsigned int*)(0x42706010UL))
#define bFM3_MFS3_CSIO_SCR_TXE                 *((volatile unsigned int*)(0x42706020UL))
#define bFM3_MFS3_CSIO_SCR_RXE                 *((volatile unsigned int*)(0x42706024UL))
#define bFM3_MFS3_CSIO_SCR_TBIE                *((volatile unsigned int*)(0x42706028UL))
#define bFM3_MFS3_CSIO_SCR_TIE                 *((volatile unsigned int*)(0x4270602CUL))
#define bFM3_MFS3_CSIO_SCR_RIE                 *((volatile unsigned int*)(0x42706030UL))
#define bFM3_MFS3_CSIO_SCR_SPI                 *((volatile unsigned int*)(0x42706034UL))
#define bFM3_MFS3_CSIO_SCR_MS                  *((volatile unsigned int*)(0x42706038UL))
#define bFM3_MFS3_CSIO_SCR_UPCL                *((volatile unsigned int*)(0x4270603CUL))
#define bFM3_MFS3_CSIO_ESCR_L0                 *((volatile unsigned int*)(0x42706080UL))
#define bFM3_MFS3_CSIO_ESCR_L1                 *((volatile unsigned int*)(0x42706084UL))
#define bFM3_MFS3_CSIO_ESCR_L2                 *((volatile unsigned int*)(0x42706088UL))
#define bFM3_MFS3_CSIO_ESCR_WT0                *((volatile unsigned int*)(0x4270608CUL))
#define bFM3_MFS3_CSIO_ESCR_WT1                *((volatile unsigned int*)(0x42706090UL))
#define bFM3_MFS3_CSIO_ESCR_SOP                *((volatile unsigned int*)(0x4270609CUL))
#define bFM3_MFS3_CSIO_SSR_TBI                 *((volatile unsigned int*)(0x427060A0UL))
#define bFM3_MFS3_CSIO_SSR_TDRE                *((volatile unsigned int*)(0x427060A4UL))
#define bFM3_MFS3_CSIO_SSR_RDRF                *((volatile unsigned int*)(0x427060A8UL))
#define bFM3_MFS3_CSIO_SSR_ORE                 *((volatile unsigned int*)(0x427060ACUL))
#define bFM3_MFS3_CSIO_SSR_REC                 *((volatile unsigned int*)(0x427060BCUL))
#define bFM3_MFS3_CSIO_FCR_FE1                 *((volatile unsigned int*)(0x42706280UL))
#define bFM3_MFS3_CSIO_FCR_FE2                 *((volatile unsigned int*)(0x42706284UL))
#define bFM3_MFS3_CSIO_FCR_FCL1                *((volatile unsigned int*)(0x42706288UL))
#define bFM3_MFS3_CSIO_FCR_FCL2                *((volatile unsigned int*)(0x4270628CUL))
#define bFM3_MFS3_CSIO_FCR_FSET                *((volatile unsigned int*)(0x42706290UL))
#define bFM3_MFS3_CSIO_FCR_FLD                 *((volatile unsigned int*)(0x42706294UL))
#define bFM3_MFS3_CSIO_FCR_FLST                *((volatile unsigned int*)(0x42706298UL))
#define bFM3_MFS3_CSIO_FCR_FSEL                *((volatile unsigned int*)(0x427062A0UL))
#define bFM3_MFS3_CSIO_FCR_FTIE                *((volatile unsigned int*)(0x427062A4UL))
#define bFM3_MFS3_CSIO_FCR_FDRQ                *((volatile unsigned int*)(0x427062A8UL))
#define bFM3_MFS3_CSIO_FCR_FRIIE               *((volatile unsigned int*)(0x427062ACUL))
#define bFM3_MFS3_CSIO_FCR_FLSTE               *((volatile unsigned int*)(0x427062B0UL))
#define bFM3_MFS3_CSIO_FCR0_FE1                *((volatile unsigned int*)(0x42706280UL))
#define bFM3_MFS3_CSIO_FCR0_FE2                *((volatile unsigned int*)(0x42706284UL))
#define bFM3_MFS3_CSIO_FCR0_FCL1               *((volatile unsigned int*)(0x42706288UL))
#define bFM3_MFS3_CSIO_FCR0_FCL2               *((volatile unsigned int*)(0x4270628CUL))
#define bFM3_MFS3_CSIO_FCR0_FSET               *((volatile unsigned int*)(0x42706290UL))
#define bFM3_MFS3_CSIO_FCR0_FLD                *((volatile unsigned int*)(0x42706294UL))
#define bFM3_MFS3_CSIO_FCR0_FLST               *((volatile unsigned int*)(0x42706298UL))
#define bFM3_MFS3_CSIO_FCR1_FSEL               *((volatile unsigned int*)(0x427062A0UL))
#define bFM3_MFS3_CSIO_FCR1_FTIE               *((volatile unsigned int*)(0x427062A4UL))
#define bFM3_MFS3_CSIO_FCR1_FDRQ               *((volatile unsigned int*)(0x427062A8UL))
#define bFM3_MFS3_CSIO_FCR1_FRIIE              *((volatile unsigned int*)(0x427062ACUL))
#define bFM3_MFS3_CSIO_FCR1_FLSTE              *((volatile unsigned int*)(0x427062B0UL))
#define bFM3_MFS3_CSIO_FBYTE_FD0               *((volatile unsigned int*)(0x42706300UL))
#define bFM3_MFS3_CSIO_FBYTE_FD1               *((volatile unsigned int*)(0x42706304UL))
#define bFM3_MFS3_CSIO_FBYTE_FD2               *((volatile unsigned int*)(0x42706308UL))
#define bFM3_MFS3_CSIO_FBYTE_FD3               *((volatile unsigned int*)(0x4270630CUL))
#define bFM3_MFS3_CSIO_FBYTE_FD4               *((volatile unsigned int*)(0x42706310UL))
#define bFM3_MFS3_CSIO_FBYTE_FD5               *((volatile unsigned int*)(0x42706314UL))
#define bFM3_MFS3_CSIO_FBYTE_FD6               *((volatile unsigned int*)(0x42706318UL))
#define bFM3_MFS3_CSIO_FBYTE_FD7               *((volatile unsigned int*)(0x4270631CUL))
#define bFM3_MFS3_CSIO_FBYTE_FD8               *((volatile unsigned int*)(0x42706320UL))
#define bFM3_MFS3_CSIO_FBYTE_FD9               *((volatile unsigned int*)(0x42706324UL))
#define bFM3_MFS3_CSIO_FBYTE_FD10              *((volatile unsigned int*)(0x42706328UL))
#define bFM3_MFS3_CSIO_FBYTE_FD11              *((volatile unsigned int*)(0x4270632CUL))
#define bFM3_MFS3_CSIO_FBYTE_FD12              *((volatile unsigned int*)(0x42706330UL))
#define bFM3_MFS3_CSIO_FBYTE_FD13              *((volatile unsigned int*)(0x42706334UL))
#define bFM3_MFS3_CSIO_FBYTE_FD14              *((volatile unsigned int*)(0x42706338UL))
#define bFM3_MFS3_CSIO_FBYTE_FD15              *((volatile unsigned int*)(0x4270633CUL))
#define bFM3_MFS3_CSIO_FBYTE1_FD0              *((volatile unsigned int*)(0x42706300UL))
#define bFM3_MFS3_CSIO_FBYTE1_FD1              *((volatile unsigned int*)(0x42706304UL))
#define bFM3_MFS3_CSIO_FBYTE1_FD2              *((volatile unsigned int*)(0x42706308UL))
#define bFM3_MFS3_CSIO_FBYTE1_FD3              *((volatile unsigned int*)(0x4270630CUL))
#define bFM3_MFS3_CSIO_FBYTE1_FD4              *((volatile unsigned int*)(0x42706310UL))
#define bFM3_MFS3_CSIO_FBYTE1_FD5              *((volatile unsigned int*)(0x42706314UL))
#define bFM3_MFS3_CSIO_FBYTE1_FD6              *((volatile unsigned int*)(0x42706318UL))
#define bFM3_MFS3_CSIO_FBYTE1_FD7              *((volatile unsigned int*)(0x4270631CUL))
#define bFM3_MFS3_CSIO_FBYTE2_FD8              *((volatile unsigned int*)(0x42706320UL))
#define bFM3_MFS3_CSIO_FBYTE2_FD9              *((volatile unsigned int*)(0x42706324UL))
#define bFM3_MFS3_CSIO_FBYTE2_FD10             *((volatile unsigned int*)(0x42706328UL))
#define bFM3_MFS3_CSIO_FBYTE2_FD11             *((volatile unsigned int*)(0x4270632CUL))
#define bFM3_MFS3_CSIO_FBYTE2_FD12             *((volatile unsigned int*)(0x42706330UL))
#define bFM3_MFS3_CSIO_FBYTE2_FD13             *((volatile unsigned int*)(0x42706334UL))
#define bFM3_MFS3_CSIO_FBYTE2_FD14             *((volatile unsigned int*)(0x42706338UL))
#define bFM3_MFS3_CSIO_FBYTE2_FD15             *((volatile unsigned int*)(0x4270633CUL))

/* LIN channel 3 registers */
#define bFM3_MFS3_LIN_SMR_SOE                  *((volatile unsigned int*)(0x42706000UL))
#define bFM3_MFS3_LIN_SMR_SBL                  *((volatile unsigned int*)(0x4270600CUL))
#define bFM3_MFS3_LIN_SMR_WUCR                 *((volatile unsigned int*)(0x42706010UL))
#define bFM3_MFS3_LIN_SCR_TXE                  *((volatile unsigned int*)(0x42706020UL))
#define bFM3_MFS3_LIN_SCR_RXE                  *((volatile unsigned int*)(0x42706024UL))
#define bFM3_MFS3_LIN_SCR_TBIE                 *((volatile unsigned int*)(0x42706028UL))
#define bFM3_MFS3_LIN_SCR_TIE                  *((volatile unsigned int*)(0x4270602CUL))
#define bFM3_MFS3_LIN_SCR_RIE                  *((volatile unsigned int*)(0x42706030UL))
#define bFM3_MFS3_LIN_SCR_LBR                  *((volatile unsigned int*)(0x42706034UL))
#define bFM3_MFS3_LIN_SCR_MS                   *((volatile unsigned int*)(0x42706038UL))
#define bFM3_MFS3_LIN_SCR_UPCL                 *((volatile unsigned int*)(0x4270603CUL))
#define bFM3_MFS3_LIN_ESCR_DEL0                *((volatile unsigned int*)(0x42706080UL))
#define bFM3_MFS3_LIN_ESCR_DEL1                *((volatile unsigned int*)(0x42706084UL))
#define bFM3_MFS3_LIN_ESCR_LBL0                *((volatile unsigned int*)(0x42706088UL))
#define bFM3_MFS3_LIN_ESCR_LBL1                *((volatile unsigned int*)(0x4270608CUL))
#define bFM3_MFS3_LIN_ESCR_LBIE                *((volatile unsigned int*)(0x42706090UL))
#define bFM3_MFS3_LIN_ESCR_ESBL                *((volatile unsigned int*)(0x42706098UL))
#define bFM3_MFS3_LIN_SSR_TBI                  *((volatile unsigned int*)(0x427060A0UL))
#define bFM3_MFS3_LIN_SSR_TDRE                 *((volatile unsigned int*)(0x427060A4UL))
#define bFM3_MFS3_LIN_SSR_RDRF                 *((volatile unsigned int*)(0x427060A8UL))
#define bFM3_MFS3_LIN_SSR_ORE                  *((volatile unsigned int*)(0x427060ACUL))
#define bFM3_MFS3_LIN_SSR_FRE                  *((volatile unsigned int*)(0x427060B0UL))
#define bFM3_MFS3_LIN_SSR_LBD                  *((volatile unsigned int*)(0x427060B4UL))
#define bFM3_MFS3_LIN_SSR_REC                  *((volatile unsigned int*)(0x427060BCUL))
#define bFM3_MFS3_LIN_BGR_EXT                  *((volatile unsigned int*)(0x427061BCUL))
#define bFM3_MFS3_LIN_BGR1_EXT                 *((volatile unsigned int*)(0x427061BCUL))
#define bFM3_MFS3_LIN_FCR_FE1                  *((volatile unsigned int*)(0x42706280UL))
#define bFM3_MFS3_LIN_FCR_FE2                  *((volatile unsigned int*)(0x42706284UL))
#define bFM3_MFS3_LIN_FCR_FCL1                 *((volatile unsigned int*)(0x42706288UL))
#define bFM3_MFS3_LIN_FCR_FCL2                 *((volatile unsigned int*)(0x4270628CUL))
#define bFM3_MFS3_LIN_FCR_FSET                 *((volatile unsigned int*)(0x42706290UL))
#define bFM3_MFS3_LIN_FCR_FLD                  *((volatile unsigned int*)(0x42706294UL))
#define bFM3_MFS3_LIN_FCR_FLST                 *((volatile unsigned int*)(0x42706298UL))
#define bFM3_MFS3_LIN_FCR_FSEL                 *((volatile unsigned int*)(0x427062A0UL))
#define bFM3_MFS3_LIN_FCR_FTIE                 *((volatile unsigned int*)(0x427062A4UL))
#define bFM3_MFS3_LIN_FCR_FDRQ                 *((volatile unsigned int*)(0x427062A8UL))
#define bFM3_MFS3_LIN_FCR_FRIIE                *((volatile unsigned int*)(0x427062ACUL))
#define bFM3_MFS3_LIN_FCR_FLSTE                *((volatile unsigned int*)(0x427062B0UL))
#define bFM3_MFS3_LIN_FCR0_FE1                 *((volatile unsigned int*)(0x42706280UL))
#define bFM3_MFS3_LIN_FCR0_FE2                 *((volatile unsigned int*)(0x42706284UL))
#define bFM3_MFS3_LIN_FCR0_FCL1                *((volatile unsigned int*)(0x42706288UL))
#define bFM3_MFS3_LIN_FCR0_FCL2                *((volatile unsigned int*)(0x4270628CUL))
#define bFM3_MFS3_LIN_FCR0_FSET                *((volatile unsigned int*)(0x42706290UL))
#define bFM3_MFS3_LIN_FCR0_FLD                 *((volatile unsigned int*)(0x42706294UL))
#define bFM3_MFS3_LIN_FCR0_FLST                *((volatile unsigned int*)(0x42706298UL))
#define bFM3_MFS3_LIN_FCR1_FSEL                *((volatile unsigned int*)(0x427062A0UL))
#define bFM3_MFS3_LIN_FCR1_FTIE                *((volatile unsigned int*)(0x427062A4UL))
#define bFM3_MFS3_LIN_FCR1_FDRQ                *((volatile unsigned int*)(0x427062A8UL))
#define bFM3_MFS3_LIN_FCR1_FRIIE               *((volatile unsigned int*)(0x427062ACUL))
#define bFM3_MFS3_LIN_FCR1_FLSTE               *((volatile unsigned int*)(0x427062B0UL))
#define bFM3_MFS3_LIN_FBYTE_FD0                *((volatile unsigned int*)(0x42706300UL))
#define bFM3_MFS3_LIN_FBYTE_FD1                *((volatile unsigned int*)(0x42706304UL))
#define bFM3_MFS3_LIN_FBYTE_FD2                *((volatile unsigned int*)(0x42706308UL))
#define bFM3_MFS3_LIN_FBYTE_FD3                *((volatile unsigned int*)(0x4270630CUL))
#define bFM3_MFS3_LIN_FBYTE_FD4                *((volatile unsigned int*)(0x42706310UL))
#define bFM3_MFS3_LIN_FBYTE_FD5                *((volatile unsigned int*)(0x42706314UL))
#define bFM3_MFS3_LIN_FBYTE_FD6                *((volatile unsigned int*)(0x42706318UL))
#define bFM3_MFS3_LIN_FBYTE_FD7                *((volatile unsigned int*)(0x4270631CUL))
#define bFM3_MFS3_LIN_FBYTE_FD8                *((volatile unsigned int*)(0x42706320UL))
#define bFM3_MFS3_LIN_FBYTE_FD9                *((volatile unsigned int*)(0x42706324UL))
#define bFM3_MFS3_LIN_FBYTE_FD10               *((volatile unsigned int*)(0x42706328UL))
#define bFM3_MFS3_LIN_FBYTE_FD11               *((volatile unsigned int*)(0x4270632CUL))
#define bFM3_MFS3_LIN_FBYTE_FD12               *((volatile unsigned int*)(0x42706330UL))
#define bFM3_MFS3_LIN_FBYTE_FD13               *((volatile unsigned int*)(0x42706334UL))
#define bFM3_MFS3_LIN_FBYTE_FD14               *((volatile unsigned int*)(0x42706338UL))
#define bFM3_MFS3_LIN_FBYTE_FD15               *((volatile unsigned int*)(0x4270633CUL))
#define bFM3_MFS3_LIN_FBYTE1_FD0               *((volatile unsigned int*)(0x42706300UL))
#define bFM3_MFS3_LIN_FBYTE1_FD1               *((volatile unsigned int*)(0x42706304UL))
#define bFM3_MFS3_LIN_FBYTE1_FD2               *((volatile unsigned int*)(0x42706308UL))
#define bFM3_MFS3_LIN_FBYTE1_FD3               *((volatile unsigned int*)(0x4270630CUL))
#define bFM3_MFS3_LIN_FBYTE1_FD4               *((volatile unsigned int*)(0x42706310UL))
#define bFM3_MFS3_LIN_FBYTE1_FD5               *((volatile unsigned int*)(0x42706314UL))
#define bFM3_MFS3_LIN_FBYTE1_FD6               *((volatile unsigned int*)(0x42706318UL))
#define bFM3_MFS3_LIN_FBYTE1_FD7               *((volatile unsigned int*)(0x4270631CUL))
#define bFM3_MFS3_LIN_FBYTE2_FD8               *((volatile unsigned int*)(0x42706320UL))
#define bFM3_MFS3_LIN_FBYTE2_FD9               *((volatile unsigned int*)(0x42706324UL))
#define bFM3_MFS3_LIN_FBYTE2_FD10              *((volatile unsigned int*)(0x42706328UL))
#define bFM3_MFS3_LIN_FBYTE2_FD11              *((volatile unsigned int*)(0x4270632CUL))
#define bFM3_MFS3_LIN_FBYTE2_FD12              *((volatile unsigned int*)(0x42706330UL))
#define bFM3_MFS3_LIN_FBYTE2_FD13              *((volatile unsigned int*)(0x42706334UL))
#define bFM3_MFS3_LIN_FBYTE2_FD14              *((volatile unsigned int*)(0x42706338UL))
#define bFM3_MFS3_LIN_FBYTE2_FD15              *((volatile unsigned int*)(0x4270633CUL))

/* I2C channel 3 registers */
#define bFM3_MFS3_I2C_SMR_TIE                  *((volatile unsigned int*)(0x42706008UL))
#define bFM3_MFS3_I2C_SMR_RIE                  *((volatile unsigned int*)(0x4270600CUL))
#define bFM3_MFS3_I2C_SMR_WUCR                 *((volatile unsigned int*)(0x42706010UL))
#define bFM3_MFS3_I2C_IBCR_INT                 *((volatile unsigned int*)(0x42706020UL))
#define bFM3_MFS3_I2C_IBCR_BER                 *((volatile unsigned int*)(0x42706024UL))
#define bFM3_MFS3_I2C_IBCR_INTE                *((volatile unsigned int*)(0x42706028UL))
#define bFM3_MFS3_I2C_IBCR_CNDE                *((volatile unsigned int*)(0x4270602CUL))
#define bFM3_MFS3_I2C_IBCR_WSEL                *((volatile unsigned int*)(0x42706030UL))
#define bFM3_MFS3_I2C_IBCR_ACKE                *((volatile unsigned int*)(0x42706034UL))
#define bFM3_MFS3_I2C_IBCR_ACT                 *((volatile unsigned int*)(0x42706038UL))
#define bFM3_MFS3_I2C_IBCR_SCC                 *((volatile unsigned int*)(0x42706038UL))
#define bFM3_MFS3_I2C_IBCR_MSS                 *((volatile unsigned int*)(0x4270603CUL))
#define bFM3_MFS3_I2C_IBSR_BB                  *((volatile unsigned int*)(0x42706080UL))
#define bFM3_MFS3_I2C_IBSR_SPC                 *((volatile unsigned int*)(0x42706084UL))
#define bFM3_MFS3_I2C_IBSR_RSC                 *((volatile unsigned int*)(0x42706088UL))
#define bFM3_MFS3_I2C_IBSR_AL                  *((volatile unsigned int*)(0x4270608CUL))
#define bFM3_MFS3_I2C_IBSR_TRX                 *((volatile unsigned int*)(0x42706090UL))
#define bFM3_MFS3_I2C_IBSR_RSA                 *((volatile unsigned int*)(0x42706094UL))
#define bFM3_MFS3_I2C_IBSR_RACK                *((volatile unsigned int*)(0x42706098UL))
#define bFM3_MFS3_I2C_IBSR_FBT                 *((volatile unsigned int*)(0x4270609CUL))
#define bFM3_MFS3_I2C_SSR_TBI                  *((volatile unsigned int*)(0x427060A0UL))
#define bFM3_MFS3_I2C_SSR_TDRE                 *((volatile unsigned int*)(0x427060A4UL))
#define bFM3_MFS3_I2C_SSR_RDRF                 *((volatile unsigned int*)(0x427060A8UL))
#define bFM3_MFS3_I2C_SSR_ORE                  *((volatile unsigned int*)(0x427060ACUL))
#define bFM3_MFS3_I2C_SSR_TBIE                 *((volatile unsigned int*)(0x427060B0UL))
#define bFM3_MFS3_I2C_SSR_DMA                  *((volatile unsigned int*)(0x427060B4UL))
#define bFM3_MFS3_I2C_SSR_TSET                 *((volatile unsigned int*)(0x427060B8UL))
#define bFM3_MFS3_I2C_SSR_REC                  *((volatile unsigned int*)(0x427060BCUL))
#define bFM3_MFS3_I2C_ISBA_SA0                 *((volatile unsigned int*)(0x42706200UL))
#define bFM3_MFS3_I2C_ISBA_SA1                 *((volatile unsigned int*)(0x42706204UL))
#define bFM3_MFS3_I2C_ISBA_SA2                 *((volatile unsigned int*)(0x42706208UL))
#define bFM3_MFS3_I2C_ISBA_SA3                 *((volatile unsigned int*)(0x4270620CUL))
#define bFM3_MFS3_I2C_ISBA_SA4                 *((volatile unsigned int*)(0x42706210UL))
#define bFM3_MFS3_I2C_ISBA_SA5                 *((volatile unsigned int*)(0x42706214UL))
#define bFM3_MFS3_I2C_ISBA_SA6                 *((volatile unsigned int*)(0x42706218UL))
#define bFM3_MFS3_I2C_ISBA_SAEN                *((volatile unsigned int*)(0x4270621CUL))
#define bFM3_MFS3_I2C_ISMK_SM0                 *((volatile unsigned int*)(0x42706220UL))
#define bFM3_MFS3_I2C_ISMK_SM1                 *((volatile unsigned int*)(0x42706224UL))
#define bFM3_MFS3_I2C_ISMK_SM2                 *((volatile unsigned int*)(0x42706228UL))
#define bFM3_MFS3_I2C_ISMK_SM3                 *((volatile unsigned int*)(0x4270622CUL))
#define bFM3_MFS3_I2C_ISMK_SM4                 *((volatile unsigned int*)(0x42706230UL))
#define bFM3_MFS3_I2C_ISMK_SM5                 *((volatile unsigned int*)(0x42706234UL))
#define bFM3_MFS3_I2C_ISMK_SM6                 *((volatile unsigned int*)(0x42706238UL))
#define bFM3_MFS3_I2C_ISMK_EN                  *((volatile unsigned int*)(0x4270623CUL))
#define bFM3_MFS3_I2C_FCR_FE1                  *((volatile unsigned int*)(0x42706280UL))
#define bFM3_MFS3_I2C_FCR_FE2                  *((volatile unsigned int*)(0x42706284UL))
#define bFM3_MFS3_I2C_FCR_FCL1                 *((volatile unsigned int*)(0x42706288UL))
#define bFM3_MFS3_I2C_FCR_FCL2                 *((volatile unsigned int*)(0x4270628CUL))
#define bFM3_MFS3_I2C_FCR_FSET                 *((volatile unsigned int*)(0x42706290UL))
#define bFM3_MFS3_I2C_FCR_FLD                  *((volatile unsigned int*)(0x42706294UL))
#define bFM3_MFS3_I2C_FCR_FLST                 *((volatile unsigned int*)(0x42706298UL))
#define bFM3_MFS3_I2C_FCR_FSEL                 *((volatile unsigned int*)(0x427062A0UL))
#define bFM3_MFS3_I2C_FCR_FTIE                 *((volatile unsigned int*)(0x427062A4UL))
#define bFM3_MFS3_I2C_FCR_FDRQ                 *((volatile unsigned int*)(0x427062A8UL))
#define bFM3_MFS3_I2C_FCR_FRIIE                *((volatile unsigned int*)(0x427062ACUL))
#define bFM3_MFS3_I2C_FCR_FLSTE                *((volatile unsigned int*)(0x427062B0UL))
#define bFM3_MFS3_I2C_FCR0_FE1                 *((volatile unsigned int*)(0x42706280UL))
#define bFM3_MFS3_I2C_FCR0_FE2                 *((volatile unsigned int*)(0x42706284UL))
#define bFM3_MFS3_I2C_FCR0_FCL1                *((volatile unsigned int*)(0x42706288UL))
#define bFM3_MFS3_I2C_FCR0_FCL2                *((volatile unsigned int*)(0x4270628CUL))
#define bFM3_MFS3_I2C_FCR0_FSET                *((volatile unsigned int*)(0x42706290UL))
#define bFM3_MFS3_I2C_FCR0_FLD                 *((volatile unsigned int*)(0x42706294UL))
#define bFM3_MFS3_I2C_FCR0_FLST                *((volatile unsigned int*)(0x42706298UL))
#define bFM3_MFS3_I2C_FCR1_FSEL                *((volatile unsigned int*)(0x427062A0UL))
#define bFM3_MFS3_I2C_FCR1_FTIE                *((volatile unsigned int*)(0x427062A4UL))
#define bFM3_MFS3_I2C_FCR1_FDRQ                *((volatile unsigned int*)(0x427062A8UL))
#define bFM3_MFS3_I2C_FCR1_FRIIE               *((volatile unsigned int*)(0x427062ACUL))
#define bFM3_MFS3_I2C_FCR1_FLSTE               *((volatile unsigned int*)(0x427062B0UL))
#define bFM3_MFS3_I2C_FBYTE_FD0                *((volatile unsigned int*)(0x42706300UL))
#define bFM3_MFS3_I2C_FBYTE_FD1                *((volatile unsigned int*)(0x42706304UL))
#define bFM3_MFS3_I2C_FBYTE_FD2                *((volatile unsigned int*)(0x42706308UL))
#define bFM3_MFS3_I2C_FBYTE_FD3                *((volatile unsigned int*)(0x4270630CUL))
#define bFM3_MFS3_I2C_FBYTE_FD4                *((volatile unsigned int*)(0x42706310UL))
#define bFM3_MFS3_I2C_FBYTE_FD5                *((volatile unsigned int*)(0x42706314UL))
#define bFM3_MFS3_I2C_FBYTE_FD6                *((volatile unsigned int*)(0x42706318UL))
#define bFM3_MFS3_I2C_FBYTE_FD7                *((volatile unsigned int*)(0x4270631CUL))
#define bFM3_MFS3_I2C_FBYTE_FD8                *((volatile unsigned int*)(0x42706320UL))
#define bFM3_MFS3_I2C_FBYTE_FD9                *((volatile unsigned int*)(0x42706324UL))
#define bFM3_MFS3_I2C_FBYTE_FD10               *((volatile unsigned int*)(0x42706328UL))
#define bFM3_MFS3_I2C_FBYTE_FD11               *((volatile unsigned int*)(0x4270632CUL))
#define bFM3_MFS3_I2C_FBYTE_FD12               *((volatile unsigned int*)(0x42706330UL))
#define bFM3_MFS3_I2C_FBYTE_FD13               *((volatile unsigned int*)(0x42706334UL))
#define bFM3_MFS3_I2C_FBYTE_FD14               *((volatile unsigned int*)(0x42706338UL))
#define bFM3_MFS3_I2C_FBYTE_FD15               *((volatile unsigned int*)(0x4270633CUL))
#define bFM3_MFS3_I2C_FBYTE1_FD0               *((volatile unsigned int*)(0x42706300UL))
#define bFM3_MFS3_I2C_FBYTE1_FD1               *((volatile unsigned int*)(0x42706304UL))
#define bFM3_MFS3_I2C_FBYTE1_FD2               *((volatile unsigned int*)(0x42706308UL))
#define bFM3_MFS3_I2C_FBYTE1_FD3               *((volatile unsigned int*)(0x4270630CUL))
#define bFM3_MFS3_I2C_FBYTE1_FD4               *((volatile unsigned int*)(0x42706310UL))
#define bFM3_MFS3_I2C_FBYTE1_FD5               *((volatile unsigned int*)(0x42706314UL))
#define bFM3_MFS3_I2C_FBYTE1_FD6               *((volatile unsigned int*)(0x42706318UL))
#define bFM3_MFS3_I2C_FBYTE1_FD7               *((volatile unsigned int*)(0x4270631CUL))
#define bFM3_MFS3_I2C_FBYTE2_FD8               *((volatile unsigned int*)(0x42706320UL))
#define bFM3_MFS3_I2C_FBYTE2_FD9               *((volatile unsigned int*)(0x42706324UL))
#define bFM3_MFS3_I2C_FBYTE2_FD10              *((volatile unsigned int*)(0x42706328UL))
#define bFM3_MFS3_I2C_FBYTE2_FD11              *((volatile unsigned int*)(0x4270632CUL))
#define bFM3_MFS3_I2C_FBYTE2_FD12              *((volatile unsigned int*)(0x42706330UL))
#define bFM3_MFS3_I2C_FBYTE2_FD13              *((volatile unsigned int*)(0x42706334UL))
#define bFM3_MFS3_I2C_FBYTE2_FD14              *((volatile unsigned int*)(0x42706338UL))
#define bFM3_MFS3_I2C_FBYTE2_FD15              *((volatile unsigned int*)(0x4270633CUL))
#define bFM3_MFS3_I2C_EIBCR_BEC                *((volatile unsigned int*)(0x427063A0UL))
#define bFM3_MFS3_I2C_EIBCR_SOCE               *((volatile unsigned int*)(0x427063A4UL))
#define bFM3_MFS3_I2C_EIBCR_SCLC               *((volatile unsigned int*)(0x427063A8UL))
#define bFM3_MFS3_I2C_EIBCR_SDAC               *((volatile unsigned int*)(0x427063ACUL))
#define bFM3_MFS3_I2C_EIBCR_SCLS               *((volatile unsigned int*)(0x427063B0UL))
#define bFM3_MFS3_I2C_EIBCR_SDAS               *((volatile unsigned int*)(0x427063B4UL))





/* UART asynchronous channel 5 registers */
#define bFM3_MFS5_UART_SMR_SOE                 *((volatile unsigned int*)(0x4270A000UL))
#define bFM3_MFS5_UART_SMR_BDS                 *((volatile unsigned int*)(0x4270A008UL))
#define bFM3_MFS5_UART_SMR_SBL                 *((volatile unsigned int*)(0x4270A00CUL))
#define bFM3_MFS5_UART_SMR_WUCR                *((volatile unsigned int*)(0x4270A010UL))
#define bFM3_MFS5_UART_SCR_TXE                 *((volatile unsigned int*)(0x4270A020UL))
#define bFM3_MFS5_UART_SCR_RXE                 *((volatile unsigned int*)(0x4270A024UL))
#define bFM3_MFS5_UART_SCR_TBIE                *((volatile unsigned int*)(0x4270A028UL))
#define bFM3_MFS5_UART_SCR_TIE                 *((volatile unsigned int*)(0x4270A02CUL))
#define bFM3_MFS5_UART_SCR_RIE                 *((volatile unsigned int*)(0x4270A030UL))
#define bFM3_MFS5_UART_SCR_UPCL                *((volatile unsigned int*)(0x4270A03CUL))
#define bFM3_MFS5_UART_ESCR_L0                 *((volatile unsigned int*)(0x4270A080UL))
#define bFM3_MFS5_UART_ESCR_L1                 *((volatile unsigned int*)(0x4270A084UL))
#define bFM3_MFS5_UART_ESCR_L2                 *((volatile unsigned int*)(0x4270A088UL))
#define bFM3_MFS5_UART_ESCR_P                  *((volatile unsigned int*)(0x4270A08CUL))
#define bFM3_MFS5_UART_ESCR_PEN                *((volatile unsigned int*)(0x4270A090UL))
#define bFM3_MFS5_UART_ESCR_INV                *((volatile unsigned int*)(0x4270A094UL))
#define bFM3_MFS5_UART_ESCR_ESBL               *((volatile unsigned int*)(0x4270A098UL))
#define bFM3_MFS5_UART_ESCR_FLWEN              *((volatile unsigned int*)(0x4270A09CUL))
#define bFM3_MFS5_UART_SSR_TBI                 *((volatile unsigned int*)(0x4270A0A0UL))
#define bFM3_MFS5_UART_SSR_TDRE                *((volatile unsigned int*)(0x4270A0A4UL))
#define bFM3_MFS5_UART_SSR_RDRF                *((volatile unsigned int*)(0x4270A0A8UL))
#define bFM3_MFS5_UART_SSR_ORE                 *((volatile unsigned int*)(0x4270A0ACUL))
#define bFM3_MFS5_UART_SSR_FRE                 *((volatile unsigned int*)(0x4270A0B0UL))
#define bFM3_MFS5_UART_SSR_PE                  *((volatile unsigned int*)(0x4270A0B4UL))
#define bFM3_MFS5_UART_SSR_REC                 *((volatile unsigned int*)(0x4270A0BCUL))
#define bFM3_MFS5_UART_RDR_AD                  *((volatile unsigned int*)(0x4270A120UL))
#define bFM3_MFS5_UART_TDR_AD                  *((volatile unsigned int*)(0x4270A120UL))
#define bFM3_MFS5_UART_BGR_EXT                 *((volatile unsigned int*)(0x4270A1BCUL))
#define bFM3_MFS5_UART_BGR1_EXT                *((volatile unsigned int*)(0x4270A1BCUL))

/* CSIO channel 5 registers */
#define bFM3_MFS5_CSIO_SMR_SOE                 *((volatile unsigned int*)(0x4270A000UL))
#define bFM3_MFS5_CSIO_SMR_SCKE                *((volatile unsigned int*)(0x4270A004UL))
#define bFM3_MFS5_CSIO_SMR_BDS                 *((volatile unsigned int*)(0x4270A008UL))
#define bFM3_MFS5_CSIO_SMR_SCINV               *((volatile unsigned int*)(0x4270A00CUL))
#define bFM3_MFS5_CSIO_SMR_WUCR                *((volatile unsigned int*)(0x4270A010UL))
#define bFM3_MFS5_CSIO_SCR_TXE                 *((volatile unsigned int*)(0x4270A020UL))
#define bFM3_MFS5_CSIO_SCR_RXE                 *((volatile unsigned int*)(0x4270A024UL))
#define bFM3_MFS5_CSIO_SCR_TBIE                *((volatile unsigned int*)(0x4270A028UL))
#define bFM3_MFS5_CSIO_SCR_TIE                 *((volatile unsigned int*)(0x4270A02CUL))
#define bFM3_MFS5_CSIO_SCR_RIE                 *((volatile unsigned int*)(0x4270A030UL))
#define bFM3_MFS5_CSIO_SCR_SPI                 *((volatile unsigned int*)(0x4270A034UL))
#define bFM3_MFS5_CSIO_SCR_MS                  *((volatile unsigned int*)(0x4270A038UL))
#define bFM3_MFS5_CSIO_SCR_UPCL                *((volatile unsigned int*)(0x4270A03CUL))
#define bFM3_MFS5_CSIO_ESCR_L0                 *((volatile unsigned int*)(0x4270A080UL))
#define bFM3_MFS5_CSIO_ESCR_L1                 *((volatile unsigned int*)(0x4270A084UL))
#define bFM3_MFS5_CSIO_ESCR_L2                 *((volatile unsigned int*)(0x4270A088UL))
#define bFM3_MFS5_CSIO_ESCR_WT0                *((volatile unsigned int*)(0x4270A08CUL))
#define bFM3_MFS5_CSIO_ESCR_WT1                *((volatile unsigned int*)(0x4270A090UL))
#define bFM3_MFS5_CSIO_ESCR_SOP                *((volatile unsigned int*)(0x4270A09CUL))
#define bFM3_MFS5_CSIO_SSR_TBI                 *((volatile unsigned int*)(0x4270A0A0UL))
#define bFM3_MFS5_CSIO_SSR_TDRE                *((volatile unsigned int*)(0x4270A0A4UL))
#define bFM3_MFS5_CSIO_SSR_RDRF                *((volatile unsigned int*)(0x4270A0A8UL))
#define bFM3_MFS5_CSIO_SSR_ORE                 *((volatile unsigned int*)(0x4270A0ACUL))
#define bFM3_MFS5_CSIO_SSR_REC                 *((volatile unsigned int*)(0x4270A0BCUL))

/* LIN channel 5 registers */
#define bFM3_MFS5_LIN_SMR_SOE                  *((volatile unsigned int*)(0x4270A000UL))
#define bFM3_MFS5_LIN_SMR_SBL                  *((volatile unsigned int*)(0x4270A00CUL))
#define bFM3_MFS5_LIN_SMR_WUCR                 *((volatile unsigned int*)(0x4270A010UL))
#define bFM3_MFS5_LIN_SCR_TXE                  *((volatile unsigned int*)(0x4270A020UL))
#define bFM3_MFS5_LIN_SCR_RXE                  *((volatile unsigned int*)(0x4270A024UL))
#define bFM3_MFS5_LIN_SCR_TBIE                 *((volatile unsigned int*)(0x4270A028UL))
#define bFM3_MFS5_LIN_SCR_TIE                  *((volatile unsigned int*)(0x4270A02CUL))
#define bFM3_MFS5_LIN_SCR_RIE                  *((volatile unsigned int*)(0x4270A030UL))
#define bFM3_MFS5_LIN_SCR_LBR                  *((volatile unsigned int*)(0x4270A034UL))
#define bFM3_MFS5_LIN_SCR_MS                   *((volatile unsigned int*)(0x4270A038UL))
#define bFM3_MFS5_LIN_SCR_UPCL                 *((volatile unsigned int*)(0x4270A03CUL))
#define bFM3_MFS5_LIN_ESCR_DEL0                *((volatile unsigned int*)(0x4270A080UL))
#define bFM3_MFS5_LIN_ESCR_DEL1                *((volatile unsigned int*)(0x4270A084UL))
#define bFM3_MFS5_LIN_ESCR_LBL0                *((volatile unsigned int*)(0x4270A088UL))
#define bFM3_MFS5_LIN_ESCR_LBL1                *((volatile unsigned int*)(0x4270A08CUL))
#define bFM3_MFS5_LIN_ESCR_LBIE                *((volatile unsigned int*)(0x4270A090UL))
#define bFM3_MFS5_LIN_ESCR_ESBL                *((volatile unsigned int*)(0x4270A098UL))
#define bFM3_MFS5_LIN_SSR_TBI                  *((volatile unsigned int*)(0x4270A0A0UL))
#define bFM3_MFS5_LIN_SSR_TDRE                 *((volatile unsigned int*)(0x4270A0A4UL))
#define bFM3_MFS5_LIN_SSR_RDRF                 *((volatile unsigned int*)(0x4270A0A8UL))
#define bFM3_MFS5_LIN_SSR_ORE                  *((volatile unsigned int*)(0x4270A0ACUL))
#define bFM3_MFS5_LIN_SSR_FRE                  *((volatile unsigned int*)(0x4270A0B0UL))
#define bFM3_MFS5_LIN_SSR_LBD                  *((volatile unsigned int*)(0x4270A0B4UL))
#define bFM3_MFS5_LIN_SSR_REC                  *((volatile unsigned int*)(0x4270A0BCUL))
#define bFM3_MFS5_LIN_BGR_EXT                  *((volatile unsigned int*)(0x4270A1BCUL))
#define bFM3_MFS5_LIN_BGR1_EXT                 *((volatile unsigned int*)(0x4270A1BCUL))

/* I2C channel 5 registers */
#define bFM3_MFS5_I2C_SMR_TIE                  *((volatile unsigned int*)(0x4270A008UL))
#define bFM3_MFS5_I2C_SMR_RIE                  *((volatile unsigned int*)(0x4270A00CUL))
#define bFM3_MFS5_I2C_SMR_WUCR                 *((volatile unsigned int*)(0x4270A010UL))
#define bFM3_MFS5_I2C_IBCR_INT                 *((volatile unsigned int*)(0x4270A020UL))
#define bFM3_MFS5_I2C_IBCR_BER                 *((volatile unsigned int*)(0x4270A024UL))
#define bFM3_MFS5_I2C_IBCR_INTE                *((volatile unsigned int*)(0x4270A028UL))
#define bFM3_MFS5_I2C_IBCR_CNDE                *((volatile unsigned int*)(0x4270A02CUL))
#define bFM3_MFS5_I2C_IBCR_WSEL                *((volatile unsigned int*)(0x4270A030UL))
#define bFM3_MFS5_I2C_IBCR_ACKE                *((volatile unsigned int*)(0x4270A034UL))
#define bFM3_MFS5_I2C_IBCR_ACT                 *((volatile unsigned int*)(0x4270A038UL))
#define bFM3_MFS5_I2C_IBCR_SCC                 *((volatile unsigned int*)(0x4270A038UL))
#define bFM3_MFS5_I2C_IBCR_MSS                 *((volatile unsigned int*)(0x4270A03CUL))
#define bFM3_MFS5_I2C_IBSR_BB                  *((volatile unsigned int*)(0x4270A080UL))
#define bFM3_MFS5_I2C_IBSR_SPC                 *((volatile unsigned int*)(0x4270A084UL))
#define bFM3_MFS5_I2C_IBSR_RSC                 *((volatile unsigned int*)(0x4270A088UL))
#define bFM3_MFS5_I2C_IBSR_AL                  *((volatile unsigned int*)(0x4270A08CUL))
#define bFM3_MFS5_I2C_IBSR_TRX                 *((volatile unsigned int*)(0x4270A090UL))
#define bFM3_MFS5_I2C_IBSR_RSA                 *((volatile unsigned int*)(0x4270A094UL))
#define bFM3_MFS5_I2C_IBSR_RACK                *((volatile unsigned int*)(0x4270A098UL))
#define bFM3_MFS5_I2C_IBSR_FBT                 *((volatile unsigned int*)(0x4270A09CUL))
#define bFM3_MFS5_I2C_SSR_TBI                  *((volatile unsigned int*)(0x4270A0A0UL))
#define bFM3_MFS5_I2C_SSR_TDRE                 *((volatile unsigned int*)(0x4270A0A4UL))
#define bFM3_MFS5_I2C_SSR_RDRF                 *((volatile unsigned int*)(0x4270A0A8UL))
#define bFM3_MFS5_I2C_SSR_ORE                  *((volatile unsigned int*)(0x4270A0ACUL))
#define bFM3_MFS5_I2C_SSR_TBIE                 *((volatile unsigned int*)(0x4270A0B0UL))
#define bFM3_MFS5_I2C_SSR_DMA                  *((volatile unsigned int*)(0x4270A0B4UL))
#define bFM3_MFS5_I2C_SSR_TSET                 *((volatile unsigned int*)(0x4270A0B8UL))
#define bFM3_MFS5_I2C_SSR_REC                  *((volatile unsigned int*)(0x4270A0BCUL))
#define bFM3_MFS5_I2C_ISBA_SA0                 *((volatile unsigned int*)(0x4270A200UL))
#define bFM3_MFS5_I2C_ISBA_SA1                 *((volatile unsigned int*)(0x4270A204UL))
#define bFM3_MFS5_I2C_ISBA_SA2                 *((volatile unsigned int*)(0x4270A208UL))
#define bFM3_MFS5_I2C_ISBA_SA3                 *((volatile unsigned int*)(0x4270A20CUL))
#define bFM3_MFS5_I2C_ISBA_SA4                 *((volatile unsigned int*)(0x4270A210UL))
#define bFM3_MFS5_I2C_ISBA_SA5                 *((volatile unsigned int*)(0x4270A214UL))
#define bFM3_MFS5_I2C_ISBA_SA6                 *((volatile unsigned int*)(0x4270A218UL))
#define bFM3_MFS5_I2C_ISBA_SAEN                *((volatile unsigned int*)(0x4270A21CUL))
#define bFM3_MFS5_I2C_ISMK_SM0                 *((volatile unsigned int*)(0x4270A220UL))
#define bFM3_MFS5_I2C_ISMK_SM1                 *((volatile unsigned int*)(0x4270A224UL))
#define bFM3_MFS5_I2C_ISMK_SM2                 *((volatile unsigned int*)(0x4270A228UL))
#define bFM3_MFS5_I2C_ISMK_SM3                 *((volatile unsigned int*)(0x4270A22CUL))
#define bFM3_MFS5_I2C_ISMK_SM4                 *((volatile unsigned int*)(0x4270A230UL))
#define bFM3_MFS5_I2C_ISMK_SM5                 *((volatile unsigned int*)(0x4270A234UL))
#define bFM3_MFS5_I2C_ISMK_SM6                 *((volatile unsigned int*)(0x4270A238UL))
#define bFM3_MFS5_I2C_ISMK_EN                  *((volatile unsigned int*)(0x4270A23CUL))
#define bFM3_MFS5_I2C_EIBCR_BEC                *((volatile unsigned int*)(0x4270A3A0UL))
#define bFM3_MFS5_I2C_EIBCR_SOCE               *((volatile unsigned int*)(0x4270A3A4UL))
#define bFM3_MFS5_I2C_EIBCR_SCLC               *((volatile unsigned int*)(0x4270A3A8UL))
#define bFM3_MFS5_I2C_EIBCR_SDAC               *((volatile unsigned int*)(0x4270A3ACUL))
#define bFM3_MFS5_I2C_EIBCR_SCLS               *((volatile unsigned int*)(0x4270A3B0UL))
#define bFM3_MFS5_I2C_EIBCR_SDAS               *((volatile unsigned int*)(0x4270A3B4UL))









/* CRC registers */
#define bFM3_CRC_CRCCR_INIT                    *((volatile unsigned int*)(0x42720000UL))
#define bFM3_CRC_CRCCR_CRC32                   *((volatile unsigned int*)(0x42720004UL))
#define bFM3_CRC_CRCCR_LTLEND                  *((volatile unsigned int*)(0x42720008UL))
#define bFM3_CRC_CRCCR_LSBFST                  *((volatile unsigned int*)(0x4272000CUL))
#define bFM3_CRC_CRCCR_CRCLTE                  *((volatile unsigned int*)(0x42720010UL))
#define bFM3_CRC_CRCCR_CRCLSF                  *((volatile unsigned int*)(0x42720014UL))
#define bFM3_CRC_CRCCR_FXOR                    *((volatile unsigned int*)(0x42720018UL))

/* Watch counter registers */
#define bFM3_WC_WCRD_CTR0                      *((volatile unsigned int*)(0x42740000UL))
#define bFM3_WC_WCRD_CTR1                      *((volatile unsigned int*)(0x42740004UL))
#define bFM3_WC_WCRD_CTR2                      *((volatile unsigned int*)(0x42740008UL))
#define bFM3_WC_WCRD_CTR3                      *((volatile unsigned int*)(0x4274000CUL))
#define bFM3_WC_WCRD_CTR4                      *((volatile unsigned int*)(0x42740010UL))
#define bFM3_WC_WCRD_CTR5                      *((volatile unsigned int*)(0x42740014UL))
#define bFM3_WC_WCRL_RLC0                      *((volatile unsigned int*)(0x42740020UL))
#define bFM3_WC_WCRL_RLC1                      *((volatile unsigned int*)(0x42740024UL))
#define bFM3_WC_WCRL_RLC2                      *((volatile unsigned int*)(0x42740028UL))
#define bFM3_WC_WCRL_RLC3                      *((volatile unsigned int*)(0x4274002CUL))
#define bFM3_WC_WCRL_RLC4                      *((volatile unsigned int*)(0x42740030UL))
#define bFM3_WC_WCRL_RLC5                      *((volatile unsigned int*)(0x42740034UL))
#define bFM3_WC_WCCR_WCIF                      *((volatile unsigned int*)(0x42740040UL))
#define bFM3_WC_WCCR_WCIE                      *((volatile unsigned int*)(0x42740044UL))
#define bFM3_WC_WCCR_CS0                       *((volatile unsigned int*)(0x42740048UL))
#define bFM3_WC_WCCR_CS1                       *((volatile unsigned int*)(0x4274004CUL))
#define bFM3_WC_WCCR_WCOP                      *((volatile unsigned int*)(0x42740058UL))
#define bFM3_WC_WCCR_WCEN                      *((volatile unsigned int*)(0x4274005CUL))
#define bFM3_WC_CLK_SEL_SEL_IN                 *((volatile unsigned int*)(0x42740200UL))
#define bFM3_WC_CLK_SEL_SEL_OUT                *((volatile unsigned int*)(0x42740220UL))
#define bFM3_WC_CLK_EN_CLK_EN                  *((volatile unsigned int*)(0x42740280UL))
#define bFM3_WC_CLK_EN_CLK_EN_R                *((volatile unsigned int*)(0x42740284UL))

/* Realtime clock registers */
#define bFM3_RTC_WTCR1_ST                      *((volatile unsigned int*)(0x42760000UL))
#define bFM3_RTC_WTCR1_RUN                     *((volatile unsigned int*)(0x42760008UL))
#define bFM3_RTC_WTCR1_SRST                    *((volatile unsigned int*)(0x4276000CUL))
#define bFM3_RTC_WTCR1_SCST                    *((volatile unsigned int*)(0x42760010UL))
#define bFM3_RTC_WTCR1_SCRST                   *((volatile unsigned int*)(0x42760014UL))
#define bFM3_RTC_WTCR1_BUSY                    *((volatile unsigned int*)(0x42760018UL))
#define bFM3_RTC_WTCR1_MIEN                    *((volatile unsigned int*)(0x42760020UL))
#define bFM3_RTC_WTCR1_HEN                     *((volatile unsigned int*)(0x42760024UL))
#define bFM3_RTC_WTCR1_DEN                     *((volatile unsigned int*)(0x42760028UL))
#define bFM3_RTC_WTCR1_MOEN                    *((volatile unsigned int*)(0x4276002CUL))
#define bFM3_RTC_WTCR1_YEN                     *((volatile unsigned int*)(0x42760030UL))
#define bFM3_RTC_WTCR1_INTSSI                  *((volatile unsigned int*)(0x42760040UL))
#define bFM3_RTC_WTCR1_INTSI                   *((volatile unsigned int*)(0x42760044UL))
#define bFM3_RTC_WTCR1_INTMI                   *((volatile unsigned int*)(0x42760048UL))
#define bFM3_RTC_WTCR1_INTHI                   *((volatile unsigned int*)(0x4276004CUL))
#define bFM3_RTC_WTCR1_INTTMI                  *((volatile unsigned int*)(0x42760050UL))
#define bFM3_RTC_WTCR1_INTALI                  *((volatile unsigned int*)(0x42760054UL))
#define bFM3_RTC_WTCR1_INTERI                  *((volatile unsigned int*)(0x42760058UL))
#define bFM3_RTC_WTCR1_INTCRI                  *((volatile unsigned int*)(0x4276005CUL))
#define bFM3_RTC_WTCR1_INTSSIE                 *((volatile unsigned int*)(0x42760060UL))
#define bFM3_RTC_WTCR1_INTSIE                  *((volatile unsigned int*)(0x42760064UL))
#define bFM3_RTC_WTCR1_INTMIE                  *((volatile unsigned int*)(0x42760068UL))
#define bFM3_RTC_WTCR1_INTHIE                  *((volatile unsigned int*)(0x4276006CUL))
#define bFM3_RTC_WTCR1_INTTMIE                 *((volatile unsigned int*)(0x42760070UL))
#define bFM3_RTC_WTCR1_INTALIE                 *((volatile unsigned int*)(0x42760074UL))
#define bFM3_RTC_WTCR1_INTERIE                 *((volatile unsigned int*)(0x42760078UL))
#define bFM3_RTC_WTCR1_INTCRIE                 *((volatile unsigned int*)(0x4276007CUL))
#define bFM3_RTC_WTCR2_CREAD                   *((volatile unsigned int*)(0x42760080UL))
#define bFM3_RTC_WTCR2_TMST                    *((volatile unsigned int*)(0x427600A0UL))
#define bFM3_RTC_WTCR2_TMEN                    *((volatile unsigned int*)(0x427600A4UL))
#define bFM3_RTC_WTCR2_TMRUN                   *((volatile unsigned int*)(0x427600A8UL))
#define bFM3_RTC_WTBR_BR0                      *((volatile unsigned int*)(0x42760100UL))
#define bFM3_RTC_WTBR_BR1                      *((volatile unsigned int*)(0x42760104UL))
#define bFM3_RTC_WTBR_BR2                      *((volatile unsigned int*)(0x42760108UL))
#define bFM3_RTC_WTBR_BR3                      *((volatile unsigned int*)(0x4276010CUL))
#define bFM3_RTC_WTBR_BR4                      *((volatile unsigned int*)(0x42760110UL))
#define bFM3_RTC_WTBR_BR5                      *((volatile unsigned int*)(0x42760114UL))
#define bFM3_RTC_WTBR_BR6                      *((volatile unsigned int*)(0x42760118UL))
#define bFM3_RTC_WTBR_BR7                      *((volatile unsigned int*)(0x4276011CUL))
#define bFM3_RTC_WTBR_BR8                      *((volatile unsigned int*)(0x42760120UL))
#define bFM3_RTC_WTBR_BR9                      *((volatile unsigned int*)(0x42760124UL))
#define bFM3_RTC_WTBR_BR10                     *((volatile unsigned int*)(0x42760128UL))
#define bFM3_RTC_WTBR_BR11                     *((volatile unsigned int*)(0x4276012CUL))
#define bFM3_RTC_WTBR_BR12                     *((volatile unsigned int*)(0x42760130UL))
#define bFM3_RTC_WTBR_BR13                     *((volatile unsigned int*)(0x42760134UL))
#define bFM3_RTC_WTBR_BR14                     *((volatile unsigned int*)(0x42760138UL))
#define bFM3_RTC_WTBR_BR15                     *((volatile unsigned int*)(0x4276013CUL))
#define bFM3_RTC_WTBR_BR16                     *((volatile unsigned int*)(0x42760140UL))
#define bFM3_RTC_WTBR_BR17                     *((volatile unsigned int*)(0x42760144UL))
#define bFM3_RTC_WTBR_BR18                     *((volatile unsigned int*)(0x42760148UL))
#define bFM3_RTC_WTBR_BR19                     *((volatile unsigned int*)(0x4276014CUL))
#define bFM3_RTC_WTBR_BR20                     *((volatile unsigned int*)(0x42760150UL))
#define bFM3_RTC_WTBR_BR21                     *((volatile unsigned int*)(0x42760154UL))
#define bFM3_RTC_WTBR_BR22                     *((volatile unsigned int*)(0x42760158UL))
#define bFM3_RTC_WTBR_BR23                     *((volatile unsigned int*)(0x4276015CUL))
#define bFM3_RTC_WTSR_S0                       *((volatile unsigned int*)(0x42760180UL))
#define bFM3_RTC_WTSR_S1                       *((volatile unsigned int*)(0x42760184UL))
#define bFM3_RTC_WTSR_S2                       *((volatile unsigned int*)(0x42760188UL))
#define bFM3_RTC_WTSR_S3                       *((volatile unsigned int*)(0x4276018CUL))
#define bFM3_RTC_WTSR_TS0                      *((volatile unsigned int*)(0x42760190UL))
#define bFM3_RTC_WTSR_TS1                      *((volatile unsigned int*)(0x42760194UL))
#define bFM3_RTC_WTSR_TS2                      *((volatile unsigned int*)(0x42760198UL))
#define bFM3_RTC_WTMIR_MI0                     *((volatile unsigned int*)(0x427601A0UL))
#define bFM3_RTC_WTMIR_MI1                     *((volatile unsigned int*)(0x427601A4UL))
#define bFM3_RTC_WTMIR_MI2                     *((volatile unsigned int*)(0x427601A8UL))
#define bFM3_RTC_WTMIR_MI3                     *((volatile unsigned int*)(0x427601ACUL))
#define bFM3_RTC_WTMIR_TMI0                    *((volatile unsigned int*)(0x427601B0UL))
#define bFM3_RTC_WTMIR_TMI1                    *((volatile unsigned int*)(0x427601B4UL))
#define bFM3_RTC_WTMIR_TMI2                    *((volatile unsigned int*)(0x427601B8UL))
#define bFM3_RTC_WTHR_H0                       *((volatile unsigned int*)(0x427601C0UL))
#define bFM3_RTC_WTHR_H1                       *((volatile unsigned int*)(0x427601C4UL))
#define bFM3_RTC_WTHR_H2                       *((volatile unsigned int*)(0x427601C8UL))
#define bFM3_RTC_WTHR_H3                       *((volatile unsigned int*)(0x427601CCUL))
#define bFM3_RTC_WTHR_TH0                      *((volatile unsigned int*)(0x427601D0UL))
#define bFM3_RTC_WTHR_TH1                      *((volatile unsigned int*)(0x427601D4UL))
#define bFM3_RTC_WTDR_D0                       *((volatile unsigned int*)(0x427601E0UL))
#define bFM3_RTC_WTDR_D1                       *((volatile unsigned int*)(0x427601E4UL))
#define bFM3_RTC_WTDR_D2                       *((volatile unsigned int*)(0x427601E8UL))
#define bFM3_RTC_WTDR_D3                       *((volatile unsigned int*)(0x427601ECUL))
#define bFM3_RTC_WTDR_TD0                      *((volatile unsigned int*)(0x427601F0UL))
#define bFM3_RTC_WTDR_TD1                      *((volatile unsigned int*)(0x427601F4UL))
#define bFM3_RTC_WTDW_DW0                      *((volatile unsigned int*)(0x42760200UL))
#define bFM3_RTC_WTDW_DW1                      *((volatile unsigned int*)(0x42760204UL))
#define bFM3_RTC_WTDW_DW2                      *((volatile unsigned int*)(0x42760208UL))
#define bFM3_RTC_WTMOR_MO0                     *((volatile unsigned int*)(0x42760220UL))
#define bFM3_RTC_WTMOR_MO1                     *((volatile unsigned int*)(0x42760224UL))
#define bFM3_RTC_WTMOR_MO2                     *((volatile unsigned int*)(0x42760228UL))
#define bFM3_RTC_WTMOR_MO3                     *((volatile unsigned int*)(0x4276022CUL))
#define bFM3_RTC_WTMOR_TMO0                    *((volatile unsigned int*)(0x42760230UL))
#define bFM3_RTC_WTYR_Y0                       *((volatile unsigned int*)(0x42760240UL))
#define bFM3_RTC_WTYR_Y1                       *((volatile unsigned int*)(0x42760244UL))
#define bFM3_RTC_WTYR_Y2                       *((volatile unsigned int*)(0x42760248UL))
#define bFM3_RTC_WTYR_Y3                       *((volatile unsigned int*)(0x4276024CUL))
#define bFM3_RTC_WTYR_TY0                      *((volatile unsigned int*)(0x42760250UL))
#define bFM3_RTC_WTYR_TY1                      *((volatile unsigned int*)(0x42760254UL))
#define bFM3_RTC_WTYR_TY2                      *((volatile unsigned int*)(0x42760258UL))
#define bFM3_RTC_WTYR_TY3                      *((volatile unsigned int*)(0x4276025CUL))
#define bFM3_RTC_ALMIR_AMI0                    *((volatile unsigned int*)(0x427602A0UL))
#define bFM3_RTC_ALMIR_AMI1                    *((volatile unsigned int*)(0x427602A4UL))
#define bFM3_RTC_ALMIR_AMI2                    *((volatile unsigned int*)(0x427602A8UL))
#define bFM3_RTC_ALMIR_AMI3                    *((volatile unsigned int*)(0x427602ACUL))
#define bFM3_RTC_ALMIR_TAMI0                   *((volatile unsigned int*)(0x427602B0UL))
#define bFM3_RTC_ALMIR_TAMI1                   *((volatile unsigned int*)(0x427602B4UL))
#define bFM3_RTC_ALMIR_TAMI2                   *((volatile unsigned int*)(0x427602B8UL))
#define bFM3_RTC_ALHR_AH0                      *((volatile unsigned int*)(0x427602C0UL))
#define bFM3_RTC_ALHR_AH1                      *((volatile unsigned int*)(0x427602C4UL))
#define bFM3_RTC_ALHR_AH2                      *((volatile unsigned int*)(0x427602C8UL))
#define bFM3_RTC_ALHR_AH3                      *((volatile unsigned int*)(0x427602CCUL))
#define bFM3_RTC_ALHR_TAH0                     *((volatile unsigned int*)(0x427602D0UL))
#define bFM3_RTC_ALHR_TAH1                     *((volatile unsigned int*)(0x427602D4UL))
#define bFM3_RTC_ALDR_AD0                      *((volatile unsigned int*)(0x427602E0UL))
#define bFM3_RTC_ALDR_AD1                      *((volatile unsigned int*)(0x427602E4UL))
#define bFM3_RTC_ALDR_AD2                      *((volatile unsigned int*)(0x427602E8UL))
#define bFM3_RTC_ALDR_AD3                      *((volatile unsigned int*)(0x427602ECUL))
#define bFM3_RTC_ALDR_TAD0                     *((volatile unsigned int*)(0x427602F0UL))
#define bFM3_RTC_ALDR_TAD1                     *((volatile unsigned int*)(0x427602F4UL))
#define bFM3_RTC_ALMOR_AMO0                    *((volatile unsigned int*)(0x42760320UL))
#define bFM3_RTC_ALMOR_AMO1                    *((volatile unsigned int*)(0x42760324UL))
#define bFM3_RTC_ALMOR_AMO2                    *((volatile unsigned int*)(0x42760328UL))
#define bFM3_RTC_ALMOR_AMO3                    *((volatile unsigned int*)(0x4276032CUL))
#define bFM3_RTC_ALMOR_TAMO0                   *((volatile unsigned int*)(0x42760330UL))
#define bFM3_RTC_ALYR_AY0                      *((volatile unsigned int*)(0x42760340UL))
#define bFM3_RTC_ALYR_AY1                      *((volatile unsigned int*)(0x42760344UL))
#define bFM3_RTC_ALYR_AY2                      *((volatile unsigned int*)(0x42760348UL))
#define bFM3_RTC_ALYR_AY3                      *((volatile unsigned int*)(0x4276034CUL))
#define bFM3_RTC_ALYR_TAY0                     *((volatile unsigned int*)(0x42760350UL))
#define bFM3_RTC_ALYR_TAY1                     *((volatile unsigned int*)(0x42760354UL))
#define bFM3_RTC_ALYR_TAY2                     *((volatile unsigned int*)(0x42760358UL))
#define bFM3_RTC_ALYR_TAY3                     *((volatile unsigned int*)(0x4276035CUL))
#define bFM3_RTC_WTTR_TM0                      *((volatile unsigned int*)(0x42760380UL))
#define bFM3_RTC_WTTR_TM1                      *((volatile unsigned int*)(0x42760384UL))
#define bFM3_RTC_WTTR_TM2                      *((volatile unsigned int*)(0x42760388UL))
#define bFM3_RTC_WTTR_TM3                      *((volatile unsigned int*)(0x4276038CUL))
#define bFM3_RTC_WTTR_TM4                      *((volatile unsigned int*)(0x42760390UL))
#define bFM3_RTC_WTTR_TM5                      *((volatile unsigned int*)(0x42760394UL))
#define bFM3_RTC_WTTR_TM6                      *((volatile unsigned int*)(0x42760398UL))
#define bFM3_RTC_WTTR_TM7                      *((volatile unsigned int*)(0x4276039CUL))
#define bFM3_RTC_WTTR_TM8                      *((volatile unsigned int*)(0x427603A0UL))
#define bFM3_RTC_WTTR_TM9                      *((volatile unsigned int*)(0x427603A4UL))
#define bFM3_RTC_WTTR_TM10                     *((volatile unsigned int*)(0x427603A8UL))
#define bFM3_RTC_WTTR_TM11                     *((volatile unsigned int*)(0x427603ACUL))
#define bFM3_RTC_WTTR_TM12                     *((volatile unsigned int*)(0x427603B0UL))
#define bFM3_RTC_WTTR_TM13                     *((volatile unsigned int*)(0x427603B4UL))
#define bFM3_RTC_WTTR_TM14                     *((volatile unsigned int*)(0x427603B8UL))
#define bFM3_RTC_WTTR_TM15                     *((volatile unsigned int*)(0x427603BCUL))
#define bFM3_RTC_WTTR_TM16                     *((volatile unsigned int*)(0x427603C0UL))
#define bFM3_RTC_WTTR_TM17                     *((volatile unsigned int*)(0x427603C4UL))
#define bFM3_RTC_WTCLKS_WTCLKS                 *((volatile unsigned int*)(0x42760400UL))
#define bFM3_RTC_WTCLKM_WTCLKM0                *((volatile unsigned int*)(0x42760420UL))
#define bFM3_RTC_WTCLKM_WTCLKM1                *((volatile unsigned int*)(0x42760424UL))
#define bFM3_RTC_WTCAL_WTCAL0                  *((volatile unsigned int*)(0x42760480UL))
#define bFM3_RTC_WTCAL_WTCAL1                  *((volatile unsigned int*)(0x42760484UL))
#define bFM3_RTC_WTCAL_WTCAL2                  *((volatile unsigned int*)(0x42760488UL))
#define bFM3_RTC_WTCAL_WTCAL3                  *((volatile unsigned int*)(0x4276048CUL))
#define bFM3_RTC_WTCAL_WTCAL4                  *((volatile unsigned int*)(0x42760490UL))
#define bFM3_RTC_WTCAL_WTCAL5                  *((volatile unsigned int*)(0x42760494UL))
#define bFM3_RTC_WTCAL_WTCAL6                  *((volatile unsigned int*)(0x42760498UL))
#define bFM3_RTC_WTCAL_WTCAL7                  *((volatile unsigned int*)(0x4276049CUL))
#define bFM3_RTC_WTCAL_WTCAL8                  *((volatile unsigned int*)(0x427604A0UL))
#define bFM3_RTC_WTCAL_WTCAL9                  *((volatile unsigned int*)(0x427604A4UL))
#define bFM3_RTC_WTCALEN_WTCALEN               *((volatile unsigned int*)(0x427604C0UL))
#define bFM3_RTC_WTDIV_WTDIV0                  *((volatile unsigned int*)(0x42760500UL))
#define bFM3_RTC_WTDIV_WTDIV1                  *((volatile unsigned int*)(0x42760504UL))
#define bFM3_RTC_WTDIV_WTDIV2                  *((volatile unsigned int*)(0x42760508UL))
#define bFM3_RTC_WTDIV_WTDIV3                  *((volatile unsigned int*)(0x4276050CUL))
#define bFM3_RTC_WTDIVEN_WTDIVEN               *((volatile unsigned int*)(0x42760520UL))
#define bFM3_RTC_WTDIVEN_WTDIVRDY              *((volatile unsigned int*)(0x42760524UL))
#define bFM3_RTC_WTCALPRD_WTCALPRD0            *((volatile unsigned int*)(0x42760580UL))
#define bFM3_RTC_WTCALPRD_WTCALPRD1            *((volatile unsigned int*)(0x42760584UL))
#define bFM3_RTC_WTCALPRD_WTCALPRD2            *((volatile unsigned int*)(0x42760588UL))
#define bFM3_RTC_WTCALPRD_WTCALPRD3            *((volatile unsigned int*)(0x4276058CUL))
#define bFM3_RTC_WTCALPRD_WTCALPRD4            *((volatile unsigned int*)(0x42760590UL))
#define bFM3_RTC_WTCALPRD_WTCALPRD5            *((volatile unsigned int*)(0x42760594UL))
#define bFM3_RTC_WTCOSEL_WTCOSEL               *((volatile unsigned int*)(0x42760600UL))

/* USB channel 0 registers */
#define bFM3_USB0_HCNT_HOST                    *((volatile unsigned int*)(0x42842000UL))
#define bFM3_USB0_HCNT_URST                    *((volatile unsigned int*)(0x42842004UL))
#define bFM3_USB0_HCNT_SOFIRE                  *((volatile unsigned int*)(0x42842008UL))
#define bFM3_USB0_HCNT_DIRE                    *((volatile unsigned int*)(0x4284200CUL))
#define bFM3_USB0_HCNT_CNNIRE                  *((volatile unsigned int*)(0x42842010UL))
#define bFM3_USB0_HCNT_CMPIRE                  *((volatile unsigned int*)(0x42842014UL))
#define bFM3_USB0_HCNT_URIRE                   *((volatile unsigned int*)(0x42842018UL))
#define bFM3_USB0_HCNT_RWKIRE                  *((volatile unsigned int*)(0x4284201CUL))
#define bFM3_USB0_HCNT_RETRY                   *((volatile unsigned int*)(0x42842020UL))
#define bFM3_USB0_HCNT_CANCEL                  *((volatile unsigned int*)(0x42842024UL))
#define bFM3_USB0_HCNT_SOFSTEP                 *((volatile unsigned int*)(0x42842028UL))
#define bFM3_USB0_HCNT0_HOST                   *((volatile unsigned int*)(0x42842000UL))
#define bFM3_USB0_HCNT0_URST                   *((volatile unsigned int*)(0x42842004UL))
#define bFM3_USB0_HCNT0_SOFIRE                 *((volatile unsigned int*)(0x42842008UL))
#define bFM3_USB0_HCNT0_DIRE                   *((volatile unsigned int*)(0x4284200CUL))
#define bFM3_USB0_HCNT0_CNNIRE                 *((volatile unsigned int*)(0x42842010UL))
#define bFM3_USB0_HCNT0_CMPIRE                 *((volatile unsigned int*)(0x42842014UL))
#define bFM3_USB0_HCNT0_URIRE                  *((volatile unsigned int*)(0x42842018UL))
#define bFM3_USB0_HCNT0_RWKIRE                 *((volatile unsigned int*)(0x4284201CUL))
#define bFM3_USB0_HCNT1_RETRY                  *((volatile unsigned int*)(0x42842020UL))
#define bFM3_USB0_HCNT1_CANCEL                 *((volatile unsigned int*)(0x42842024UL))
#define bFM3_USB0_HCNT1_SOFSTEP                *((volatile unsigned int*)(0x42842028UL))
#define bFM3_USB0_HIRQ_SOFIRQ                  *((volatile unsigned int*)(0x42842080UL))
#define bFM3_USB0_HIRQ_DIRQ                    *((volatile unsigned int*)(0x42842084UL))
#define bFM3_USB0_HIRQ_CNNIRQ                  *((volatile unsigned int*)(0x42842088UL))
#define bFM3_USB0_HIRQ_CMPIRQ                  *((volatile unsigned int*)(0x4284208CUL))
#define bFM3_USB0_HIRQ_URIRQ                   *((volatile unsigned int*)(0x42842090UL))
#define bFM3_USB0_HIRQ_RWKIRQ                  *((volatile unsigned int*)(0x42842094UL))
#define bFM3_USB0_HIRQ_TCAN                    *((volatile unsigned int*)(0x4284209CUL))
#define bFM3_USB0_HERR_HS0                     *((volatile unsigned int*)(0x428420A0UL))
#define bFM3_USB0_HERR_HS1                     *((volatile unsigned int*)(0x428420A4UL))
#define bFM3_USB0_HERR_STUFF                   *((volatile unsigned int*)(0x428420A8UL))
#define bFM3_USB0_HERR_TGERR                   *((volatile unsigned int*)(0x428420ACUL))
#define bFM3_USB0_HERR_CRC                     *((volatile unsigned int*)(0x428420B0UL))
#define bFM3_USB0_HERR_TOUT                    *((volatile unsigned int*)(0x428420B4UL))
#define bFM3_USB0_HERR_RERR                    *((volatile unsigned int*)(0x428420B8UL))
#define bFM3_USB0_HERR_LSTSOF                  *((volatile unsigned int*)(0x428420BCUL))
#define bFM3_USB0_HSTATE_CSTAT                 *((volatile unsigned int*)(0x42842100UL))
#define bFM3_USB0_HSTATE_TMODE                 *((volatile unsigned int*)(0x42842104UL))
#define bFM3_USB0_HSTATE_SUSP                  *((volatile unsigned int*)(0x42842108UL))
#define bFM3_USB0_HSTATE_SOFBUSY               *((volatile unsigned int*)(0x4284210CUL))
#define bFM3_USB0_HSTATE_CLKSEL                *((volatile unsigned int*)(0x42842110UL))
#define bFM3_USB0_HSTATE_ALIVE                 *((volatile unsigned int*)(0x42842114UL))
#define bFM3_USB0_HFCOMP_FRAMECOMP0            *((volatile unsigned int*)(0x42842120UL))
#define bFM3_USB0_HFCOMP_FRAMECOMP1            *((volatile unsigned int*)(0x42842124UL))
#define bFM3_USB0_HFCOMP_FRAMECOMP2            *((volatile unsigned int*)(0x42842128UL))
#define bFM3_USB0_HFCOMP_FRAMECOMP3            *((volatile unsigned int*)(0x4284212CUL))
#define bFM3_USB0_HFCOMP_FRAMECOMP4            *((volatile unsigned int*)(0x42842130UL))
#define bFM3_USB0_HFCOMP_FRAMECOMP5            *((volatile unsigned int*)(0x42842134UL))
#define bFM3_USB0_HFCOMP_FRAMECOMP6            *((volatile unsigned int*)(0x42842138UL))
#define bFM3_USB0_HFCOMP_FRAMECOMP7            *((volatile unsigned int*)(0x4284213CUL))
#define bFM3_USB0_HADR_ADDRESS0                *((volatile unsigned int*)(0x42842220UL))
#define bFM3_USB0_HADR_ADDRESS1                *((volatile unsigned int*)(0x42842224UL))
#define bFM3_USB0_HADR_ADDRESS2                *((volatile unsigned int*)(0x42842228UL))
#define bFM3_USB0_HADR_ADDRESS3                *((volatile unsigned int*)(0x4284222CUL))
#define bFM3_USB0_HADR_ADDRESS4                *((volatile unsigned int*)(0x42842230UL))
#define bFM3_USB0_HADR_ADDRESS5                *((volatile unsigned int*)(0x42842234UL))
#define bFM3_USB0_HADR_ADDRESS6                *((volatile unsigned int*)(0x42842238UL))
#define bFM3_USB0_HTOKEN_ENDPT0                *((volatile unsigned int*)(0x42842380UL))
#define bFM3_USB0_HTOKEN_ENDPT1                *((volatile unsigned int*)(0x42842384UL))
#define bFM3_USB0_HTOKEN_ENDPT2                *((volatile unsigned int*)(0x42842388UL))
#define bFM3_USB0_HTOKEN_ENDPT3                *((volatile unsigned int*)(0x4284238CUL))
#define bFM3_USB0_HTOKEN_TKNEN0                *((volatile unsigned int*)(0x42842390UL))
#define bFM3_USB0_HTOKEN_TKNEN1                *((volatile unsigned int*)(0x42842394UL))
#define bFM3_USB0_HTOKEN_TKNEN2                *((volatile unsigned int*)(0x42842398UL))
#define bFM3_USB0_HTOKEN_TGGL                  *((volatile unsigned int*)(0x4284239CUL))
#define bFM3_USB0_UDCC_PWC                     *((volatile unsigned int*)(0x42842400UL))
#define bFM3_USB0_UDCC_RFBK                    *((volatile unsigned int*)(0x42842404UL))
#define bFM3_USB0_UDCC_STALCLREN               *((volatile unsigned int*)(0x4284240CUL))
#define bFM3_USB0_UDCC_USTP                    *((volatile unsigned int*)(0x42842410UL))
#define bFM3_USB0_UDCC_HCONX                   *((volatile unsigned int*)(0x42842414UL))
#define bFM3_USB0_UDCC_RESUM                   *((volatile unsigned int*)(0x42842418UL))
#define bFM3_USB0_UDCC_RST                     *((volatile unsigned int*)(0x4284241CUL))
#define bFM3_USB0_EP0C_PKS00                   *((volatile unsigned int*)(0x42842480UL))
#define bFM3_USB0_EP0C_PKS01                   *((volatile unsigned int*)(0x42842484UL))
#define bFM3_USB0_EP0C_PKS02                   *((volatile unsigned int*)(0x42842488UL))
#define bFM3_USB0_EP0C_PKS03                   *((volatile unsigned int*)(0x4284248CUL))
#define bFM3_USB0_EP0C_PKS04                   *((volatile unsigned int*)(0x42842490UL))
#define bFM3_USB0_EP0C_PKS05                   *((volatile unsigned int*)(0x42842494UL))
#define bFM3_USB0_EP0C_PKS06                   *((volatile unsigned int*)(0x42842498UL))
#define bFM3_USB0_EP0C_STAL                    *((volatile unsigned int*)(0x428424A4UL))
#define bFM3_USB0_EP1C_PKS10                   *((volatile unsigned int*)(0x42842500UL))
#define bFM3_USB0_EP1C_PKS11                   *((volatile unsigned int*)(0x42842504UL))
#define bFM3_USB0_EP1C_PKS12                   *((volatile unsigned int*)(0x42842508UL))
#define bFM3_USB0_EP1C_PKS13                   *((volatile unsigned int*)(0x4284250CUL))
#define bFM3_USB0_EP1C_PKS14                   *((volatile unsigned int*)(0x42842510UL))
#define bFM3_USB0_EP1C_PKS15                   *((volatile unsigned int*)(0x42842514UL))
#define bFM3_USB0_EP1C_PKS16                   *((volatile unsigned int*)(0x42842518UL))
#define bFM3_USB0_EP1C_PKS17                   *((volatile unsigned int*)(0x4284251CUL))
#define bFM3_USB0_EP1C_PKS18                   *((volatile unsigned int*)(0x42842520UL))
#define bFM3_USB0_EP1C_STAL                    *((volatile unsigned int*)(0x42842524UL))
#define bFM3_USB0_EP1C_NULE                    *((volatile unsigned int*)(0x42842528UL))
#define bFM3_USB0_EP1C_DMAE                    *((volatile unsigned int*)(0x4284252CUL))
#define bFM3_USB0_EP1C_DIR                     *((volatile unsigned int*)(0x42842530UL))
#define bFM3_USB0_EP1C_TYPE0                   *((volatile unsigned int*)(0x42842534UL))
#define bFM3_USB0_EP1C_TYPE1                   *((volatile unsigned int*)(0x42842538UL))
#define bFM3_USB0_EP1C_EPEN                    *((volatile unsigned int*)(0x4284253CUL))
#define bFM3_USB0_EP2C_PKS20                   *((volatile unsigned int*)(0x42842580UL))
#define bFM3_USB0_EP2C_PKS21                   *((volatile unsigned int*)(0x42842584UL))
#define bFM3_USB0_EP2C_PKS22                   *((volatile unsigned int*)(0x42842588UL))
#define bFM3_USB0_EP2C_PKS23                   *((volatile unsigned int*)(0x4284258CUL))
#define bFM3_USB0_EP2C_PKS24                   *((volatile unsigned int*)(0x42842590UL))
#define bFM3_USB0_EP2C_PKS25                   *((volatile unsigned int*)(0x42842594UL))
#define bFM3_USB0_EP2C_PKS26                   *((volatile unsigned int*)(0x42842598UL))
#define bFM3_USB0_EP2C_STAL                    *((volatile unsigned int*)(0x428425A4UL))
#define bFM3_USB0_EP2C_NULE                    *((volatile unsigned int*)(0x428425A8UL))
#define bFM3_USB0_EP2C_DMAE                    *((volatile unsigned int*)(0x428425ACUL))
#define bFM3_USB0_EP2C_DIR                     *((volatile unsigned int*)(0x428425B0UL))
#define bFM3_USB0_EP2C_TYPE0                   *((volatile unsigned int*)(0x428425B4UL))
#define bFM3_USB0_EP2C_TYPE1                   *((volatile unsigned int*)(0x428425B8UL))
#define bFM3_USB0_EP2C_EPEN                    *((volatile unsigned int*)(0x428425BCUL))
#define bFM3_USB0_EP3C_PKS30                   *((volatile unsigned int*)(0x42842600UL))
#define bFM3_USB0_EP3C_PKS31                   *((volatile unsigned int*)(0x42842604UL))
#define bFM3_USB0_EP3C_PKS32                   *((volatile unsigned int*)(0x42842608UL))
#define bFM3_USB0_EP3C_PKS33                   *((volatile unsigned int*)(0x4284260CUL))
#define bFM3_USB0_EP3C_PKS34                   *((volatile unsigned int*)(0x42842610UL))
#define bFM3_USB0_EP3C_PKS35                   *((volatile unsigned int*)(0x42842614UL))
#define bFM3_USB0_EP3C_PKS36                   *((volatile unsigned int*)(0x42842618UL))
#define bFM3_USB0_EP3C_STAL                    *((volatile unsigned int*)(0x42842624UL))
#define bFM3_USB0_EP3C_NULE                    *((volatile unsigned int*)(0x42842628UL))
#define bFM3_USB0_EP3C_DMAE                    *((volatile unsigned int*)(0x4284262CUL))
#define bFM3_USB0_EP3C_DIR                     *((volatile unsigned int*)(0x42842630UL))
#define bFM3_USB0_EP3C_TYPE0                   *((volatile unsigned int*)(0x42842634UL))
#define bFM3_USB0_EP3C_TYPE1                   *((volatile unsigned int*)(0x42842638UL))
#define bFM3_USB0_EP3C_EPEN                    *((volatile unsigned int*)(0x4284263CUL))
#define bFM3_USB0_EP4C_PKS40                   *((volatile unsigned int*)(0x42842680UL))
#define bFM3_USB0_EP4C_PKS41                   *((volatile unsigned int*)(0x42842684UL))
#define bFM3_USB0_EP4C_PKS42                   *((volatile unsigned int*)(0x42842688UL))
#define bFM3_USB0_EP4C_PKS43                   *((volatile unsigned int*)(0x4284268CUL))
#define bFM3_USB0_EP4C_PKS44                   *((volatile unsigned int*)(0x42842690UL))
#define bFM3_USB0_EP4C_PKS45                   *((volatile unsigned int*)(0x42842694UL))
#define bFM3_USB0_EP4C_PKS46                   *((volatile unsigned int*)(0x42842698UL))
#define bFM3_USB0_EP4C_STAL                    *((volatile unsigned int*)(0x428426A4UL))
#define bFM3_USB0_EP4C_NULE                    *((volatile unsigned int*)(0x428426A8UL))
#define bFM3_USB0_EP4C_DMAE                    *((volatile unsigned int*)(0x428426ACUL))
#define bFM3_USB0_EP4C_DIR                     *((volatile unsigned int*)(0x428426B0UL))
#define bFM3_USB0_EP4C_TYPE0                   *((volatile unsigned int*)(0x428426B4UL))
#define bFM3_USB0_EP4C_TYPE1                   *((volatile unsigned int*)(0x428426B8UL))
#define bFM3_USB0_EP4C_EPEN                    *((volatile unsigned int*)(0x428426BCUL))
#define bFM3_USB0_EP5C_PKS50                   *((volatile unsigned int*)(0x42842700UL))
#define bFM3_USB0_EP5C_PKS51                   *((volatile unsigned int*)(0x42842704UL))
#define bFM3_USB0_EP5C_PKS52                   *((volatile unsigned int*)(0x42842708UL))
#define bFM3_USB0_EP5C_PKS53                   *((volatile unsigned int*)(0x4284270CUL))
#define bFM3_USB0_EP5C_PKS54                   *((volatile unsigned int*)(0x42842710UL))
#define bFM3_USB0_EP5C_PKS55                   *((volatile unsigned int*)(0x42842714UL))
#define bFM3_USB0_EP5C_PKS56                   *((volatile unsigned int*)(0x42842718UL))
#define bFM3_USB0_EP5C_STAL                    *((volatile unsigned int*)(0x42842724UL))
#define bFM3_USB0_EP5C_NULE                    *((volatile unsigned int*)(0x42842728UL))
#define bFM3_USB0_EP5C_DMAE                    *((volatile unsigned int*)(0x4284272CUL))
#define bFM3_USB0_EP5C_DIR                     *((volatile unsigned int*)(0x42842730UL))
#define bFM3_USB0_EP5C_TYPE0                   *((volatile unsigned int*)(0x42842734UL))
#define bFM3_USB0_EP5C_TYPE1                   *((volatile unsigned int*)(0x42842738UL))
#define bFM3_USB0_EP5C_EPEN                    *((volatile unsigned int*)(0x4284273CUL))
#define bFM3_USB0_TMSP_TMSP0                   *((volatile unsigned int*)(0x42842780UL))
#define bFM3_USB0_TMSP_TMSP1                   *((volatile unsigned int*)(0x42842784UL))
#define bFM3_USB0_TMSP_TMSP2                   *((volatile unsigned int*)(0x42842788UL))
#define bFM3_USB0_TMSP_TMSP3                   *((volatile unsigned int*)(0x4284278CUL))
#define bFM3_USB0_TMSP_TMSP4                   *((volatile unsigned int*)(0x42842790UL))
#define bFM3_USB0_TMSP_TMSP5                   *((volatile unsigned int*)(0x42842794UL))
#define bFM3_USB0_TMSP_TMSP6                   *((volatile unsigned int*)(0x42842798UL))
#define bFM3_USB0_TMSP_TMSP7                   *((volatile unsigned int*)(0x4284279CUL))
#define bFM3_USB0_TMSP_TMSP8                   *((volatile unsigned int*)(0x428427A0UL))
#define bFM3_USB0_TMSP_TMSP9                   *((volatile unsigned int*)(0x428427A4UL))
#define bFM3_USB0_TMSP_TMSP10                  *((volatile unsigned int*)(0x428427A8UL))
#define bFM3_USB0_UDCS_CONF                    *((volatile unsigned int*)(0x42842800UL))
#define bFM3_USB0_UDCS_SETP                    *((volatile unsigned int*)(0x42842804UL))
#define bFM3_USB0_UDCS_WKUP                    *((volatile unsigned int*)(0x42842808UL))
#define bFM3_USB0_UDCS_BRST                    *((volatile unsigned int*)(0x4284280CUL))
#define bFM3_USB0_UDCS_SOF                     *((volatile unsigned int*)(0x42842810UL))
#define bFM3_USB0_UDCS_SUSP                    *((volatile unsigned int*)(0x42842814UL))
#define bFM3_USB0_UDCIE_CONFIE                 *((volatile unsigned int*)(0x42842820UL))
#define bFM3_USB0_UDCIE_CONFN                  *((volatile unsigned int*)(0x42842824UL))
#define bFM3_USB0_UDCIE_WKUPIE                 *((volatile unsigned int*)(0x42842828UL))
#define bFM3_USB0_UDCIE_BRSTIE                 *((volatile unsigned int*)(0x4284282CUL))
#define bFM3_USB0_UDCIE_SOFIE                  *((volatile unsigned int*)(0x42842830UL))
#define bFM3_USB0_UDCIE_SUSPIE                 *((volatile unsigned int*)(0x42842834UL))
#define bFM3_USB0_EP0IS_DRQI                   *((volatile unsigned int*)(0x428428A8UL))
#define bFM3_USB0_EP0IS_DRQIIE                 *((volatile unsigned int*)(0x428428B8UL))
#define bFM3_USB0_EP0IS_BFINI                  *((volatile unsigned int*)(0x428428BCUL))
#define bFM3_USB0_EP0OS_SIZE0                  *((volatile unsigned int*)(0x42842900UL))
#define bFM3_USB0_EP0OS_SIZE1                  *((volatile unsigned int*)(0x42842904UL))
#define bFM3_USB0_EP0OS_SIZE2                  *((volatile unsigned int*)(0x42842908UL))
#define bFM3_USB0_EP0OS_SIZE3                  *((volatile unsigned int*)(0x4284290CUL))
#define bFM3_USB0_EP0OS_SIZE4                  *((volatile unsigned int*)(0x42842910UL))
#define bFM3_USB0_EP0OS_SIZE5                  *((volatile unsigned int*)(0x42842914UL))
#define bFM3_USB0_EP0OS_SIZE6                  *((volatile unsigned int*)(0x42842918UL))
#define bFM3_USB0_EP0OS_SPK                    *((volatile unsigned int*)(0x42842924UL))
#define bFM3_USB0_EP0OS_DRQO                   *((volatile unsigned int*)(0x42842928UL))
#define bFM3_USB0_EP0OS_SPKIE                  *((volatile unsigned int*)(0x42842934UL))
#define bFM3_USB0_EP0OS_DRQOIE                 *((volatile unsigned int*)(0x42842938UL))
#define bFM3_USB0_EP0OS_BFINI                  *((volatile unsigned int*)(0x4284293CUL))
#define bFM3_USB0_EP1S_SIZE10                  *((volatile unsigned int*)(0x42842980UL))
#define bFM3_USB0_EP1S_SIZE11                  *((volatile unsigned int*)(0x42842984UL))
#define bFM3_USB0_EP1S_SIZE12                  *((volatile unsigned int*)(0x42842988UL))
#define bFM3_USB0_EP1S_SIZE13                  *((volatile unsigned int*)(0x4284298CUL))
#define bFM3_USB0_EP1S_SIZE14                  *((volatile unsigned int*)(0x42842990UL))
#define bFM3_USB0_EP1S_SIZE15                  *((volatile unsigned int*)(0x42842994UL))
#define bFM3_USB0_EP1S_SIZE16                  *((volatile unsigned int*)(0x42842998UL))
#define bFM3_USB0_EP1S_SIZE17                  *((volatile unsigned int*)(0x4284299CUL))
#define bFM3_USB0_EP1S_SIZE18                  *((volatile unsigned int*)(0x428429A0UL))
#define bFM3_USB0_EP1S_SPK                     *((volatile unsigned int*)(0x428429A4UL))
#define bFM3_USB0_EP1S_DRQ                     *((volatile unsigned int*)(0x428429A8UL))
#define bFM3_USB0_EP1S_BUSY                    *((volatile unsigned int*)(0x428429ACUL))
#define bFM3_USB0_EP1S_SPKIE                   *((volatile unsigned int*)(0x428429B4UL))
#define bFM3_USB0_EP1S_DRQIE                   *((volatile unsigned int*)(0x428429B8UL))
#define bFM3_USB0_EP1S_BFINI                   *((volatile unsigned int*)(0x428429BCUL))
#define bFM3_USB0_EP2S_SIZE20                  *((volatile unsigned int*)(0x42842A00UL))
#define bFM3_USB0_EP2S_SIZE21                  *((volatile unsigned int*)(0x42842A04UL))
#define bFM3_USB0_EP2S_SIZE22                  *((volatile unsigned int*)(0x42842A08UL))
#define bFM3_USB0_EP2S_SIZE23                  *((volatile unsigned int*)(0x42842A0CUL))
#define bFM3_USB0_EP2S_SIZE24                  *((volatile unsigned int*)(0x42842A10UL))
#define bFM3_USB0_EP2S_SIZE25                  *((volatile unsigned int*)(0x42842A14UL))
#define bFM3_USB0_EP2S_SIZE26                  *((volatile unsigned int*)(0x42842A18UL))
#define bFM3_USB0_EP2S_SPK                     *((volatile unsigned int*)(0x42842A24UL))
#define bFM3_USB0_EP2S_DRQ                     *((volatile unsigned int*)(0x42842A28UL))
#define bFM3_USB0_EP2S_BUSY                    *((volatile unsigned int*)(0x42842A2CUL))
#define bFM3_USB0_EP2S_SPKIE                   *((volatile unsigned int*)(0x42842A34UL))
#define bFM3_USB0_EP2S_DRQIE                   *((volatile unsigned int*)(0x42842A38UL))
#define bFM3_USB0_EP2S_BFINI                   *((volatile unsigned int*)(0x42842A3CUL))
#define bFM3_USB0_EP3S_SIZE30                  *((volatile unsigned int*)(0x42842A80UL))
#define bFM3_USB0_EP3S_SIZE31                  *((volatile unsigned int*)(0x42842A84UL))
#define bFM3_USB0_EP3S_SIZE32                  *((volatile unsigned int*)(0x42842A88UL))
#define bFM3_USB0_EP3S_SIZE33                  *((volatile unsigned int*)(0x42842A8CUL))
#define bFM3_USB0_EP3S_SIZE34                  *((volatile unsigned int*)(0x42842A90UL))
#define bFM3_USB0_EP3S_SIZE35                  *((volatile unsigned int*)(0x42842A94UL))
#define bFM3_USB0_EP3S_SIZE36                  *((volatile unsigned int*)(0x42842A98UL))
#define bFM3_USB0_EP3S_SPK                     *((volatile unsigned int*)(0x42842AA4UL))
#define bFM3_USB0_EP3S_DRQ                     *((volatile unsigned int*)(0x42842AA8UL))
#define bFM3_USB0_EP3S_BUSY                    *((volatile unsigned int*)(0x42842AACUL))
#define bFM3_USB0_EP3S_SPKIE                   *((volatile unsigned int*)(0x42842AB4UL))
#define bFM3_USB0_EP3S_DRQIE                   *((volatile unsigned int*)(0x42842AB8UL))
#define bFM3_USB0_EP3S_BFINI                   *((volatile unsigned int*)(0x42842ABCUL))
#define bFM3_USB0_EP4S_SIZE40                  *((volatile unsigned int*)(0x42842B00UL))
#define bFM3_USB0_EP4S_SIZE41                  *((volatile unsigned int*)(0x42842B04UL))
#define bFM3_USB0_EP4S_SIZE42                  *((volatile unsigned int*)(0x42842B08UL))
#define bFM3_USB0_EP4S_SIZE43                  *((volatile unsigned int*)(0x42842B0CUL))
#define bFM3_USB0_EP4S_SIZE44                  *((volatile unsigned int*)(0x42842B10UL))
#define bFM3_USB0_EP4S_SIZE45                  *((volatile unsigned int*)(0x42842B14UL))
#define bFM3_USB0_EP4S_SIZE46                  *((volatile unsigned int*)(0x42842B18UL))
#define bFM3_USB0_EP4S_SPK                     *((volatile unsigned int*)(0x42842B24UL))
#define bFM3_USB0_EP4S_DRQ                     *((volatile unsigned int*)(0x42842B28UL))
#define bFM3_USB0_EP4S_BUSY                    *((volatile unsigned int*)(0x42842B2CUL))
#define bFM3_USB0_EP4S_SPKIE                   *((volatile unsigned int*)(0x42842B34UL))
#define bFM3_USB0_EP4S_DRQIE                   *((volatile unsigned int*)(0x42842B38UL))
#define bFM3_USB0_EP4S_BFINI                   *((volatile unsigned int*)(0x42842B3CUL))
#define bFM3_USB0_EP5S_SIZE50                  *((volatile unsigned int*)(0x42842B80UL))
#define bFM3_USB0_EP5S_SIZE51                  *((volatile unsigned int*)(0x42842B84UL))
#define bFM3_USB0_EP5S_SIZE52                  *((volatile unsigned int*)(0x42842B88UL))
#define bFM3_USB0_EP5S_SIZE53                  *((volatile unsigned int*)(0x42842B8CUL))
#define bFM3_USB0_EP5S_SIZE54                  *((volatile unsigned int*)(0x42842B90UL))
#define bFM3_USB0_EP5S_SIZE55                  *((volatile unsigned int*)(0x42842B94UL))
#define bFM3_USB0_EP5S_SIZE56                  *((volatile unsigned int*)(0x42842B98UL))
#define bFM3_USB0_EP5S_SPK                     *((volatile unsigned int*)(0x42842BA4UL))
#define bFM3_USB0_EP5S_DRQ                     *((volatile unsigned int*)(0x42842BA8UL))
#define bFM3_USB0_EP5S_BUSY                    *((volatile unsigned int*)(0x42842BACUL))
#define bFM3_USB0_EP5S_SPKIE                   *((volatile unsigned int*)(0x42842BB4UL))
#define bFM3_USB0_EP5S_DRQIE                   *((volatile unsigned int*)(0x42842BB8UL))
#define bFM3_USB0_EP5S_BFINI                   *((volatile unsigned int*)(0x42842BBCUL))

/* DMA controller */
#define bFM3_DMAC_DMACR_DH0                    *((volatile unsigned int*)(0x42C00060UL))
#define bFM3_DMAC_DMACR_DH1                    *((volatile unsigned int*)(0x42C00064UL))
#define bFM3_DMAC_DMACR_DH2                    *((volatile unsigned int*)(0x42C00068UL))
#define bFM3_DMAC_DMACR_DH3                    *((volatile unsigned int*)(0x42C0006CUL))
#define bFM3_DMAC_DMACR_PR                     *((volatile unsigned int*)(0x42C00070UL))
#define bFM3_DMAC_DMACR_DS                     *((volatile unsigned int*)(0x42C00078UL))
#define bFM3_DMAC_DMACR_DE                     *((volatile unsigned int*)(0x42C0007CUL))
#define bFM3_DMAC_DMACA0_TC0                   *((volatile unsigned int*)(0x42C00200UL))
#define bFM3_DMAC_DMACA0_TC1                   *((volatile unsigned int*)(0x42C00204UL))
#define bFM3_DMAC_DMACA0_TC2                   *((volatile unsigned int*)(0x42C00208UL))
#define bFM3_DMAC_DMACA0_TC3                   *((volatile unsigned int*)(0x42C0020CUL))
#define bFM3_DMAC_DMACA0_TC4                   *((volatile unsigned int*)(0x42C00210UL))
#define bFM3_DMAC_DMACA0_TC5                   *((volatile unsigned int*)(0x42C00214UL))
#define bFM3_DMAC_DMACA0_TC6                   *((volatile unsigned int*)(0x42C00218UL))
#define bFM3_DMAC_DMACA0_TC7                   *((volatile unsigned int*)(0x42C0021CUL))
#define bFM3_DMAC_DMACA0_TC8                   *((volatile unsigned int*)(0x42C00220UL))
#define bFM3_DMAC_DMACA0_TC9                   *((volatile unsigned int*)(0x42C00224UL))
#define bFM3_DMAC_DMACA0_TC10                  *((volatile unsigned int*)(0x42C00228UL))
#define bFM3_DMAC_DMACA0_TC11                  *((volatile unsigned int*)(0x42C0022CUL))
#define bFM3_DMAC_DMACA0_TC12                  *((volatile unsigned int*)(0x42C00230UL))
#define bFM3_DMAC_DMACA0_TC13                  *((volatile unsigned int*)(0x42C00234UL))
#define bFM3_DMAC_DMACA0_TC14                  *((volatile unsigned int*)(0x42C00238UL))
#define bFM3_DMAC_DMACA0_TC15                  *((volatile unsigned int*)(0x42C0023CUL))
#define bFM3_DMAC_DMACA0_BC0                   *((volatile unsigned int*)(0x42C00240UL))
#define bFM3_DMAC_DMACA0_BC1                   *((volatile unsigned int*)(0x42C00244UL))
#define bFM3_DMAC_DMACA0_BC2                   *((volatile unsigned int*)(0x42C00248UL))
#define bFM3_DMAC_DMACA0_BC3                   *((volatile unsigned int*)(0x42C0024CUL))
#define bFM3_DMAC_DMACA0_IS0                   *((volatile unsigned int*)(0x42C0025CUL))
#define bFM3_DMAC_DMACA0_IS1                   *((volatile unsigned int*)(0x42C00260UL))
#define bFM3_DMAC_DMACA0_IS2                   *((volatile unsigned int*)(0x42C00264UL))
#define bFM3_DMAC_DMACA0_IS3                   *((volatile unsigned int*)(0x42C00268UL))
#define bFM3_DMAC_DMACA0_IS4                   *((volatile unsigned int*)(0x42C0026CUL))
#define bFM3_DMAC_DMACA0_IS5                   *((volatile unsigned int*)(0x42C00270UL))
#define bFM3_DMAC_DMACA0_ST                    *((volatile unsigned int*)(0x42C00274UL))
#define bFM3_DMAC_DMACA0_PB                    *((volatile unsigned int*)(0x42C00278UL))
#define bFM3_DMAC_DMACA0_EB                    *((volatile unsigned int*)(0x42C0027CUL))
#define bFM3_DMAC_DMACB0_EM                    *((volatile unsigned int*)(0x42C00280UL))
#define bFM3_DMAC_DMACB0_SS0                   *((volatile unsigned int*)(0x42C002C0UL))
#define bFM3_DMAC_DMACB0_SS1                   *((volatile unsigned int*)(0x42C002C4UL))
#define bFM3_DMAC_DMACB0_SS2                   *((volatile unsigned int*)(0x42C002C8UL))
#define bFM3_DMAC_DMACB0_CI                    *((volatile unsigned int*)(0x42C002CCUL))
#define bFM3_DMAC_DMACB0_EI                    *((volatile unsigned int*)(0x42C002D0UL))
#define bFM3_DMAC_DMACB0_RD                    *((volatile unsigned int*)(0x42C002D4UL))
#define bFM3_DMAC_DMACB0_RS                    *((volatile unsigned int*)(0x42C002D8UL))
#define bFM3_DMAC_DMACB0_RC                    *((volatile unsigned int*)(0x42C002DCUL))
#define bFM3_DMAC_DMACB0_FD                    *((volatile unsigned int*)(0x42C002E0UL))
#define bFM3_DMAC_DMACB0_FS                    *((volatile unsigned int*)(0x42C002E4UL))
#define bFM3_DMAC_DMACB0_TW0                   *((volatile unsigned int*)(0x42C002E8UL))
#define bFM3_DMAC_DMACB0_TW1                   *((volatile unsigned int*)(0x42C002ECUL))
#define bFM3_DMAC_DMACB0_MS0                   *((volatile unsigned int*)(0x42C002F0UL))
#define bFM3_DMAC_DMACB0_MS1                   *((volatile unsigned int*)(0x42C002F4UL))
#define bFM3_DMAC_DMACA1_TC0                   *((volatile unsigned int*)(0x42C00400UL))
#define bFM3_DMAC_DMACA1_TC1                   *((volatile unsigned int*)(0x42C00404UL))
#define bFM3_DMAC_DMACA1_TC2                   *((volatile unsigned int*)(0x42C00408UL))
#define bFM3_DMAC_DMACA1_TC3                   *((volatile unsigned int*)(0x42C0040CUL))
#define bFM3_DMAC_DMACA1_TC4                   *((volatile unsigned int*)(0x42C00410UL))
#define bFM3_DMAC_DMACA1_TC5                   *((volatile unsigned int*)(0x42C00414UL))
#define bFM3_DMAC_DMACA1_TC6                   *((volatile unsigned int*)(0x42C00418UL))
#define bFM3_DMAC_DMACA1_TC7                   *((volatile unsigned int*)(0x42C0041CUL))
#define bFM3_DMAC_DMACA1_TC8                   *((volatile unsigned int*)(0x42C00420UL))
#define bFM3_DMAC_DMACA1_TC9                   *((volatile unsigned int*)(0x42C00424UL))
#define bFM3_DMAC_DMACA1_TC10                  *((volatile unsigned int*)(0x42C00428UL))
#define bFM3_DMAC_DMACA1_TC11                  *((volatile unsigned int*)(0x42C0042CUL))
#define bFM3_DMAC_DMACA1_TC12                  *((volatile unsigned int*)(0x42C00430UL))
#define bFM3_DMAC_DMACA1_TC13                  *((volatile unsigned int*)(0x42C00434UL))
#define bFM3_DMAC_DMACA1_TC14                  *((volatile unsigned int*)(0x42C00438UL))
#define bFM3_DMAC_DMACA1_TC15                  *((volatile unsigned int*)(0x42C0043CUL))
#define bFM3_DMAC_DMACA1_BC0                   *((volatile unsigned int*)(0x42C00440UL))
#define bFM3_DMAC_DMACA1_BC1                   *((volatile unsigned int*)(0x42C00444UL))
#define bFM3_DMAC_DMACA1_BC2                   *((volatile unsigned int*)(0x42C00448UL))
#define bFM3_DMAC_DMACA1_BC3                   *((volatile unsigned int*)(0x42C0044CUL))
#define bFM3_DMAC_DMACA1_IS0                   *((volatile unsigned int*)(0x42C0045CUL))
#define bFM3_DMAC_DMACA1_IS1                   *((volatile unsigned int*)(0x42C00460UL))
#define bFM3_DMAC_DMACA1_IS2                   *((volatile unsigned int*)(0x42C00464UL))
#define bFM3_DMAC_DMACA1_IS3                   *((volatile unsigned int*)(0x42C00468UL))
#define bFM3_DMAC_DMACA1_IS4                   *((volatile unsigned int*)(0x42C0046CUL))
#define bFM3_DMAC_DMACA1_IS5                   *((volatile unsigned int*)(0x42C00470UL))
#define bFM3_DMAC_DMACA1_ST                    *((volatile unsigned int*)(0x42C00474UL))
#define bFM3_DMAC_DMACA1_PB                    *((volatile unsigned int*)(0x42C00478UL))
#define bFM3_DMAC_DMACA1_EB                    *((volatile unsigned int*)(0x42C0047CUL))
#define bFM3_DMAC_DMACB1_EM                    *((volatile unsigned int*)(0x42C00480UL))
#define bFM3_DMAC_DMACB1_SS0                   *((volatile unsigned int*)(0x42C004C0UL))
#define bFM3_DMAC_DMACB1_SS1                   *((volatile unsigned int*)(0x42C004C4UL))
#define bFM3_DMAC_DMACB1_SS2                   *((volatile unsigned int*)(0x42C004C8UL))
#define bFM3_DMAC_DMACB1_CI                    *((volatile unsigned int*)(0x42C004CCUL))
#define bFM3_DMAC_DMACB1_EI                    *((volatile unsigned int*)(0x42C004D0UL))
#define bFM3_DMAC_DMACB1_RD                    *((volatile unsigned int*)(0x42C004D4UL))
#define bFM3_DMAC_DMACB1_RS                    *((volatile unsigned int*)(0x42C004D8UL))
#define bFM3_DMAC_DMACB1_RC                    *((volatile unsigned int*)(0x42C004DCUL))
#define bFM3_DMAC_DMACB1_FD                    *((volatile unsigned int*)(0x42C004E0UL))
#define bFM3_DMAC_DMACB1_FS                    *((volatile unsigned int*)(0x42C004E4UL))
#define bFM3_DMAC_DMACB1_TW0                   *((volatile unsigned int*)(0x42C004E8UL))
#define bFM3_DMAC_DMACB1_TW1                   *((volatile unsigned int*)(0x42C004ECUL))
#define bFM3_DMAC_DMACB1_MS0                   *((volatile unsigned int*)(0x42C004F0UL))
#define bFM3_DMAC_DMACB1_MS1                   *((volatile unsigned int*)(0x42C004F4UL))
#define bFM3_DMAC_DMACA2_TC0                   *((volatile unsigned int*)(0x42C00600UL))
#define bFM3_DMAC_DMACA2_TC1                   *((volatile unsigned int*)(0x42C00604UL))
#define bFM3_DMAC_DMACA2_TC2                   *((volatile unsigned int*)(0x42C00608UL))
#define bFM3_DMAC_DMACA2_TC3                   *((volatile unsigned int*)(0x42C0060CUL))
#define bFM3_DMAC_DMACA2_TC4                   *((volatile unsigned int*)(0x42C00610UL))
#define bFM3_DMAC_DMACA2_TC5                   *((volatile unsigned int*)(0x42C00614UL))
#define bFM3_DMAC_DMACA2_TC6                   *((volatile unsigned int*)(0x42C00618UL))
#define bFM3_DMAC_DMACA2_TC7                   *((volatile unsigned int*)(0x42C0061CUL))
#define bFM3_DMAC_DMACA2_TC8                   *((volatile unsigned int*)(0x42C00620UL))
#define bFM3_DMAC_DMACA2_TC9                   *((volatile unsigned int*)(0x42C00624UL))
#define bFM3_DMAC_DMACA2_TC10                  *((volatile unsigned int*)(0x42C00628UL))
#define bFM3_DMAC_DMACA2_TC11                  *((volatile unsigned int*)(0x42C0062CUL))
#define bFM3_DMAC_DMACA2_TC12                  *((volatile unsigned int*)(0x42C00630UL))
#define bFM3_DMAC_DMACA2_TC13                  *((volatile unsigned int*)(0x42C00634UL))
#define bFM3_DMAC_DMACA2_TC14                  *((volatile unsigned int*)(0x42C00638UL))
#define bFM3_DMAC_DMACA2_TC15                  *((volatile unsigned int*)(0x42C0063CUL))
#define bFM3_DMAC_DMACA2_BC0                   *((volatile unsigned int*)(0x42C00640UL))
#define bFM3_DMAC_DMACA2_BC1                   *((volatile unsigned int*)(0x42C00644UL))
#define bFM3_DMAC_DMACA2_BC2                   *((volatile unsigned int*)(0x42C00648UL))
#define bFM3_DMAC_DMACA2_BC3                   *((volatile unsigned int*)(0x42C0064CUL))
#define bFM3_DMAC_DMACA2_IS0                   *((volatile unsigned int*)(0x42C0065CUL))
#define bFM3_DMAC_DMACA2_IS1                   *((volatile unsigned int*)(0x42C00660UL))
#define bFM3_DMAC_DMACA2_IS2                   *((volatile unsigned int*)(0x42C00664UL))
#define bFM3_DMAC_DMACA2_IS3                   *((volatile unsigned int*)(0x42C00668UL))
#define bFM3_DMAC_DMACA2_IS4                   *((volatile unsigned int*)(0x42C0066CUL))
#define bFM3_DMAC_DMACA2_IS5                   *((volatile unsigned int*)(0x42C00670UL))
#define bFM3_DMAC_DMACA2_ST                    *((volatile unsigned int*)(0x42C00674UL))
#define bFM3_DMAC_DMACA2_PB                    *((volatile unsigned int*)(0x42C00678UL))
#define bFM3_DMAC_DMACA2_EB                    *((volatile unsigned int*)(0x42C0067CUL))
#define bFM3_DMAC_DMACB2_EM                    *((volatile unsigned int*)(0x42C00680UL))
#define bFM3_DMAC_DMACB2_SS0                   *((volatile unsigned int*)(0x42C006C0UL))
#define bFM3_DMAC_DMACB2_SS1                   *((volatile unsigned int*)(0x42C006C4UL))
#define bFM3_DMAC_DMACB2_SS2                   *((volatile unsigned int*)(0x42C006C8UL))
#define bFM3_DMAC_DMACB2_CI                    *((volatile unsigned int*)(0x42C006CCUL))
#define bFM3_DMAC_DMACB2_EI                    *((volatile unsigned int*)(0x42C006D0UL))
#define bFM3_DMAC_DMACB2_RD                    *((volatile unsigned int*)(0x42C006D4UL))
#define bFM3_DMAC_DMACB2_RS                    *((volatile unsigned int*)(0x42C006D8UL))
#define bFM3_DMAC_DMACB2_RC                    *((volatile unsigned int*)(0x42C006DCUL))
#define bFM3_DMAC_DMACB2_FD                    *((volatile unsigned int*)(0x42C006E0UL))
#define bFM3_DMAC_DMACB2_FS                    *((volatile unsigned int*)(0x42C006E4UL))
#define bFM3_DMAC_DMACB2_TW0                   *((volatile unsigned int*)(0x42C006E8UL))
#define bFM3_DMAC_DMACB2_TW1                   *((volatile unsigned int*)(0x42C006ECUL))
#define bFM3_DMAC_DMACB2_MS0                   *((volatile unsigned int*)(0x42C006F0UL))
#define bFM3_DMAC_DMACB2_MS1                   *((volatile unsigned int*)(0x42C006F4UL))
#define bFM3_DMAC_DMACA3_TC0                   *((volatile unsigned int*)(0x42C00800UL))
#define bFM3_DMAC_DMACA3_TC1                   *((volatile unsigned int*)(0x42C00804UL))
#define bFM3_DMAC_DMACA3_TC2                   *((volatile unsigned int*)(0x42C00808UL))
#define bFM3_DMAC_DMACA3_TC3                   *((volatile unsigned int*)(0x42C0080CUL))
#define bFM3_DMAC_DMACA3_TC4                   *((volatile unsigned int*)(0x42C00810UL))
#define bFM3_DMAC_DMACA3_TC5                   *((volatile unsigned int*)(0x42C00814UL))
#define bFM3_DMAC_DMACA3_TC6                   *((volatile unsigned int*)(0x42C00818UL))
#define bFM3_DMAC_DMACA3_TC7                   *((volatile unsigned int*)(0x42C0081CUL))
#define bFM3_DMAC_DMACA3_TC8                   *((volatile unsigned int*)(0x42C00820UL))
#define bFM3_DMAC_DMACA3_TC9                   *((volatile unsigned int*)(0x42C00824UL))
#define bFM3_DMAC_DMACA3_TC10                  *((volatile unsigned int*)(0x42C00828UL))
#define bFM3_DMAC_DMACA3_TC11                  *((volatile unsigned int*)(0x42C0082CUL))
#define bFM3_DMAC_DMACA3_TC12                  *((volatile unsigned int*)(0x42C00830UL))
#define bFM3_DMAC_DMACA3_TC13                  *((volatile unsigned int*)(0x42C00834UL))
#define bFM3_DMAC_DMACA3_TC14                  *((volatile unsigned int*)(0x42C00838UL))
#define bFM3_DMAC_DMACA3_TC15                  *((volatile unsigned int*)(0x42C0083CUL))
#define bFM3_DMAC_DMACA3_BC0                   *((volatile unsigned int*)(0x42C00840UL))
#define bFM3_DMAC_DMACA3_BC1                   *((volatile unsigned int*)(0x42C00844UL))
#define bFM3_DMAC_DMACA3_BC2                   *((volatile unsigned int*)(0x42C00848UL))
#define bFM3_DMAC_DMACA3_BC3                   *((volatile unsigned int*)(0x42C0084CUL))
#define bFM3_DMAC_DMACA3_IS0                   *((volatile unsigned int*)(0x42C0085CUL))
#define bFM3_DMAC_DMACA3_IS1                   *((volatile unsigned int*)(0x42C00860UL))
#define bFM3_DMAC_DMACA3_IS2                   *((volatile unsigned int*)(0x42C00864UL))
#define bFM3_DMAC_DMACA3_IS3                   *((volatile unsigned int*)(0x42C00868UL))
#define bFM3_DMAC_DMACA3_IS4                   *((volatile unsigned int*)(0x42C0086CUL))
#define bFM3_DMAC_DMACA3_IS5                   *((volatile unsigned int*)(0x42C00870UL))
#define bFM3_DMAC_DMACA3_ST                    *((volatile unsigned int*)(0x42C00874UL))
#define bFM3_DMAC_DMACA3_PB                    *((volatile unsigned int*)(0x42C00878UL))
#define bFM3_DMAC_DMACA3_EB                    *((volatile unsigned int*)(0x42C0087CUL))
#define bFM3_DMAC_DMACB3_EM                    *((volatile unsigned int*)(0x42C00880UL))
#define bFM3_DMAC_DMACB3_SS0                   *((volatile unsigned int*)(0x42C008C0UL))
#define bFM3_DMAC_DMACB3_SS1                   *((volatile unsigned int*)(0x42C008C4UL))
#define bFM3_DMAC_DMACB3_SS2                   *((volatile unsigned int*)(0x42C008C8UL))
#define bFM3_DMAC_DMACB3_CI                    *((volatile unsigned int*)(0x42C008CCUL))
#define bFM3_DMAC_DMACB3_EI                    *((volatile unsigned int*)(0x42C008D0UL))
#define bFM3_DMAC_DMACB3_RD                    *((volatile unsigned int*)(0x42C008D4UL))
#define bFM3_DMAC_DMACB3_RS                    *((volatile unsigned int*)(0x42C008D8UL))
#define bFM3_DMAC_DMACB3_RC                    *((volatile unsigned int*)(0x42C008DCUL))
#define bFM3_DMAC_DMACB3_FD                    *((volatile unsigned int*)(0x42C008E0UL))
#define bFM3_DMAC_DMACB3_FS                    *((volatile unsigned int*)(0x42C008E4UL))
#define bFM3_DMAC_DMACB3_TW0                   *((volatile unsigned int*)(0x42C008E8UL))
#define bFM3_DMAC_DMACB3_TW1                   *((volatile unsigned int*)(0x42C008ECUL))
#define bFM3_DMAC_DMACB3_MS0                   *((volatile unsigned int*)(0x42C008F0UL))
#define bFM3_DMAC_DMACB3_MS1                   *((volatile unsigned int*)(0x42C008F4UL))
#define bFM3_DMAC_DMACA4_TC0                   *((volatile unsigned int*)(0x42C00A00UL))
#define bFM3_DMAC_DMACA4_TC1                   *((volatile unsigned int*)(0x42C00A04UL))
#define bFM3_DMAC_DMACA4_TC2                   *((volatile unsigned int*)(0x42C00A08UL))
#define bFM3_DMAC_DMACA4_TC3                   *((volatile unsigned int*)(0x42C00A0CUL))
#define bFM3_DMAC_DMACA4_TC4                   *((volatile unsigned int*)(0x42C00A10UL))
#define bFM3_DMAC_DMACA4_TC5                   *((volatile unsigned int*)(0x42C00A14UL))
#define bFM3_DMAC_DMACA4_TC6                   *((volatile unsigned int*)(0x42C00A18UL))
#define bFM3_DMAC_DMACA4_TC7                   *((volatile unsigned int*)(0x42C00A1CUL))
#define bFM3_DMAC_DMACA4_TC8                   *((volatile unsigned int*)(0x42C00A20UL))
#define bFM3_DMAC_DMACA4_TC9                   *((volatile unsigned int*)(0x42C00A24UL))
#define bFM3_DMAC_DMACA4_TC10                  *((volatile unsigned int*)(0x42C00A28UL))
#define bFM3_DMAC_DMACA4_TC11                  *((volatile unsigned int*)(0x42C00A2CUL))
#define bFM3_DMAC_DMACA4_TC12                  *((volatile unsigned int*)(0x42C00A30UL))
#define bFM3_DMAC_DMACA4_TC13                  *((volatile unsigned int*)(0x42C00A34UL))
#define bFM3_DMAC_DMACA4_TC14                  *((volatile unsigned int*)(0x42C00A38UL))
#define bFM3_DMAC_DMACA4_TC15                  *((volatile unsigned int*)(0x42C00A3CUL))
#define bFM3_DMAC_DMACA4_BC0                   *((volatile unsigned int*)(0x42C00A40UL))
#define bFM3_DMAC_DMACA4_BC1                   *((volatile unsigned int*)(0x42C00A44UL))
#define bFM3_DMAC_DMACA4_BC2                   *((volatile unsigned int*)(0x42C00A48UL))
#define bFM3_DMAC_DMACA4_BC3                   *((volatile unsigned int*)(0x42C00A4CUL))
#define bFM3_DMAC_DMACA4_IS0                   *((volatile unsigned int*)(0x42C00A5CUL))
#define bFM3_DMAC_DMACA4_IS1                   *((volatile unsigned int*)(0x42C00A60UL))
#define bFM3_DMAC_DMACA4_IS2                   *((volatile unsigned int*)(0x42C00A64UL))
#define bFM3_DMAC_DMACA4_IS3                   *((volatile unsigned int*)(0x42C00A68UL))
#define bFM3_DMAC_DMACA4_IS4                   *((volatile unsigned int*)(0x42C00A6CUL))
#define bFM3_DMAC_DMACA4_IS5                   *((volatile unsigned int*)(0x42C00A70UL))
#define bFM3_DMAC_DMACA4_ST                    *((volatile unsigned int*)(0x42C00A74UL))
#define bFM3_DMAC_DMACA4_PB                    *((volatile unsigned int*)(0x42C00A78UL))
#define bFM3_DMAC_DMACA4_EB                    *((volatile unsigned int*)(0x42C00A7CUL))
#define bFM3_DMAC_DMACB4_EM                    *((volatile unsigned int*)(0x42C00A80UL))
#define bFM3_DMAC_DMACB4_SS0                   *((volatile unsigned int*)(0x42C00AC0UL))
#define bFM3_DMAC_DMACB4_SS1                   *((volatile unsigned int*)(0x42C00AC4UL))
#define bFM3_DMAC_DMACB4_SS2                   *((volatile unsigned int*)(0x42C00AC8UL))
#define bFM3_DMAC_DMACB4_CI                    *((volatile unsigned int*)(0x42C00ACCUL))
#define bFM3_DMAC_DMACB4_EI                    *((volatile unsigned int*)(0x42C00AD0UL))
#define bFM3_DMAC_DMACB4_RD                    *((volatile unsigned int*)(0x42C00AD4UL))
#define bFM3_DMAC_DMACB4_RS                    *((volatile unsigned int*)(0x42C00AD8UL))
#define bFM3_DMAC_DMACB4_RC                    *((volatile unsigned int*)(0x42C00ADCUL))
#define bFM3_DMAC_DMACB4_FD                    *((volatile unsigned int*)(0x42C00AE0UL))
#define bFM3_DMAC_DMACB4_FS                    *((volatile unsigned int*)(0x42C00AE4UL))
#define bFM3_DMAC_DMACB4_TW0                   *((volatile unsigned int*)(0x42C00AE8UL))
#define bFM3_DMAC_DMACB4_TW1                   *((volatile unsigned int*)(0x42C00AECUL))
#define bFM3_DMAC_DMACB4_MS0                   *((volatile unsigned int*)(0x42C00AF0UL))
#define bFM3_DMAC_DMACB4_MS1                   *((volatile unsigned int*)(0x42C00AF4UL))
#define bFM3_DMAC_DMACA5_TC0                   *((volatile unsigned int*)(0x42C00C00UL))
#define bFM3_DMAC_DMACA5_TC1                   *((volatile unsigned int*)(0x42C00C04UL))
#define bFM3_DMAC_DMACA5_TC2                   *((volatile unsigned int*)(0x42C00C08UL))
#define bFM3_DMAC_DMACA5_TC3                   *((volatile unsigned int*)(0x42C00C0CUL))
#define bFM3_DMAC_DMACA5_TC4                   *((volatile unsigned int*)(0x42C00C10UL))
#define bFM3_DMAC_DMACA5_TC5                   *((volatile unsigned int*)(0x42C00C14UL))
#define bFM3_DMAC_DMACA5_TC6                   *((volatile unsigned int*)(0x42C00C18UL))
#define bFM3_DMAC_DMACA5_TC7                   *((volatile unsigned int*)(0x42C00C1CUL))
#define bFM3_DMAC_DMACA5_TC8                   *((volatile unsigned int*)(0x42C00C20UL))
#define bFM3_DMAC_DMACA5_TC9                   *((volatile unsigned int*)(0x42C00C24UL))
#define bFM3_DMAC_DMACA5_TC10                  *((volatile unsigned int*)(0x42C00C28UL))
#define bFM3_DMAC_DMACA5_TC11                  *((volatile unsigned int*)(0x42C00C2CUL))
#define bFM3_DMAC_DMACA5_TC12                  *((volatile unsigned int*)(0x42C00C30UL))
#define bFM3_DMAC_DMACA5_TC13                  *((volatile unsigned int*)(0x42C00C34UL))
#define bFM3_DMAC_DMACA5_TC14                  *((volatile unsigned int*)(0x42C00C38UL))
#define bFM3_DMAC_DMACA5_TC15                  *((volatile unsigned int*)(0x42C00C3CUL))
#define bFM3_DMAC_DMACA5_BC0                   *((volatile unsigned int*)(0x42C00C40UL))
#define bFM3_DMAC_DMACA5_BC1                   *((volatile unsigned int*)(0x42C00C44UL))
#define bFM3_DMAC_DMACA5_BC2                   *((volatile unsigned int*)(0x42C00C48UL))
#define bFM3_DMAC_DMACA5_BC3                   *((volatile unsigned int*)(0x42C00C4CUL))
#define bFM3_DMAC_DMACA5_IS0                   *((volatile unsigned int*)(0x42C00C5CUL))
#define bFM3_DMAC_DMACA5_IS1                   *((volatile unsigned int*)(0x42C00C60UL))
#define bFM3_DMAC_DMACA5_IS2                   *((volatile unsigned int*)(0x42C00C64UL))
#define bFM3_DMAC_DMACA5_IS3                   *((volatile unsigned int*)(0x42C00C68UL))
#define bFM3_DMAC_DMACA5_IS4                   *((volatile unsigned int*)(0x42C00C6CUL))
#define bFM3_DMAC_DMACA5_IS5                   *((volatile unsigned int*)(0x42C00C70UL))
#define bFM3_DMAC_DMACA5_ST                    *((volatile unsigned int*)(0x42C00C74UL))
#define bFM3_DMAC_DMACA5_PB                    *((volatile unsigned int*)(0x42C00C78UL))
#define bFM3_DMAC_DMACA5_EB                    *((volatile unsigned int*)(0x42C00C7CUL))
#define bFM3_DMAC_DMACB5_EM                    *((volatile unsigned int*)(0x42C00C80UL))
#define bFM3_DMAC_DMACB5_SS0                   *((volatile unsigned int*)(0x42C00CC0UL))
#define bFM3_DMAC_DMACB5_SS1                   *((volatile unsigned int*)(0x42C00CC4UL))
#define bFM3_DMAC_DMACB5_SS2                   *((volatile unsigned int*)(0x42C00CC8UL))
#define bFM3_DMAC_DMACB5_CI                    *((volatile unsigned int*)(0x42C00CCCUL))
#define bFM3_DMAC_DMACB5_EI                    *((volatile unsigned int*)(0x42C00CD0UL))
#define bFM3_DMAC_DMACB5_RD                    *((volatile unsigned int*)(0x42C00CD4UL))
#define bFM3_DMAC_DMACB5_RS                    *((volatile unsigned int*)(0x42C00CD8UL))
#define bFM3_DMAC_DMACB5_RC                    *((volatile unsigned int*)(0x42C00CDCUL))
#define bFM3_DMAC_DMACB5_FD                    *((volatile unsigned int*)(0x42C00CE0UL))
#define bFM3_DMAC_DMACB5_FS                    *((volatile unsigned int*)(0x42C00CE4UL))
#define bFM3_DMAC_DMACB5_TW0                   *((volatile unsigned int*)(0x42C00CE8UL))
#define bFM3_DMAC_DMACB5_TW1                   *((volatile unsigned int*)(0x42C00CECUL))
#define bFM3_DMAC_DMACB5_MS0                   *((volatile unsigned int*)(0x42C00CF0UL))
#define bFM3_DMAC_DMACB5_MS1                   *((volatile unsigned int*)(0x42C00CF4UL))
#define bFM3_DMAC_DMACA6_TC0                   *((volatile unsigned int*)(0x42C00E00UL))
#define bFM3_DMAC_DMACA6_TC1                   *((volatile unsigned int*)(0x42C00E04UL))
#define bFM3_DMAC_DMACA6_TC2                   *((volatile unsigned int*)(0x42C00E08UL))
#define bFM3_DMAC_DMACA6_TC3                   *((volatile unsigned int*)(0x42C00E0CUL))
#define bFM3_DMAC_DMACA6_TC4                   *((volatile unsigned int*)(0x42C00E10UL))
#define bFM3_DMAC_DMACA6_TC5                   *((volatile unsigned int*)(0x42C00E14UL))
#define bFM3_DMAC_DMACA6_TC6                   *((volatile unsigned int*)(0x42C00E18UL))
#define bFM3_DMAC_DMACA6_TC7                   *((volatile unsigned int*)(0x42C00E1CUL))
#define bFM3_DMAC_DMACA6_TC8                   *((volatile unsigned int*)(0x42C00E20UL))
#define bFM3_DMAC_DMACA6_TC9                   *((volatile unsigned int*)(0x42C00E24UL))
#define bFM3_DMAC_DMACA6_TC10                  *((volatile unsigned int*)(0x42C00E28UL))
#define bFM3_DMAC_DMACA6_TC11                  *((volatile unsigned int*)(0x42C00E2CUL))
#define bFM3_DMAC_DMACA6_TC12                  *((volatile unsigned int*)(0x42C00E30UL))
#define bFM3_DMAC_DMACA6_TC13                  *((volatile unsigned int*)(0x42C00E34UL))
#define bFM3_DMAC_DMACA6_TC14                  *((volatile unsigned int*)(0x42C00E38UL))
#define bFM3_DMAC_DMACA6_TC15                  *((volatile unsigned int*)(0x42C00E3CUL))
#define bFM3_DMAC_DMACA6_BC0                   *((volatile unsigned int*)(0x42C00E40UL))
#define bFM3_DMAC_DMACA6_BC1                   *((volatile unsigned int*)(0x42C00E44UL))
#define bFM3_DMAC_DMACA6_BC2                   *((volatile unsigned int*)(0x42C00E48UL))
#define bFM3_DMAC_DMACA6_BC3                   *((volatile unsigned int*)(0x42C00E4CUL))
#define bFM3_DMAC_DMACA6_IS0                   *((volatile unsigned int*)(0x42C00E5CUL))
#define bFM3_DMAC_DMACA6_IS1                   *((volatile unsigned int*)(0x42C00E60UL))
#define bFM3_DMAC_DMACA6_IS2                   *((volatile unsigned int*)(0x42C00E64UL))
#define bFM3_DMAC_DMACA6_IS3                   *((volatile unsigned int*)(0x42C00E68UL))
#define bFM3_DMAC_DMACA6_IS4                   *((volatile unsigned int*)(0x42C00E6CUL))
#define bFM3_DMAC_DMACA6_IS5                   *((volatile unsigned int*)(0x42C00E70UL))
#define bFM3_DMAC_DMACA6_ST                    *((volatile unsigned int*)(0x42C00E74UL))
#define bFM3_DMAC_DMACA6_PB                    *((volatile unsigned int*)(0x42C00E78UL))
#define bFM3_DMAC_DMACA6_EB                    *((volatile unsigned int*)(0x42C00E7CUL))
#define bFM3_DMAC_DMACB6_EM                    *((volatile unsigned int*)(0x42C00E80UL))
#define bFM3_DMAC_DMACB6_SS0                   *((volatile unsigned int*)(0x42C00EC0UL))
#define bFM3_DMAC_DMACB6_SS1                   *((volatile unsigned int*)(0x42C00EC4UL))
#define bFM3_DMAC_DMACB6_SS2                   *((volatile unsigned int*)(0x42C00EC8UL))
#define bFM3_DMAC_DMACB6_CI                    *((volatile unsigned int*)(0x42C00ECCUL))
#define bFM3_DMAC_DMACB6_EI                    *((volatile unsigned int*)(0x42C00ED0UL))
#define bFM3_DMAC_DMACB6_RD                    *((volatile unsigned int*)(0x42C00ED4UL))
#define bFM3_DMAC_DMACB6_RS                    *((volatile unsigned int*)(0x42C00ED8UL))
#define bFM3_DMAC_DMACB6_RC                    *((volatile unsigned int*)(0x42C00EDCUL))
#define bFM3_DMAC_DMACB6_FD                    *((volatile unsigned int*)(0x42C00EE0UL))
#define bFM3_DMAC_DMACB6_FS                    *((volatile unsigned int*)(0x42C00EE4UL))
#define bFM3_DMAC_DMACB6_TW0                   *((volatile unsigned int*)(0x42C00EE8UL))
#define bFM3_DMAC_DMACB6_TW1                   *((volatile unsigned int*)(0x42C00EECUL))
#define bFM3_DMAC_DMACB6_MS0                   *((volatile unsigned int*)(0x42C00EF0UL))
#define bFM3_DMAC_DMACB6_MS1                   *((volatile unsigned int*)(0x42C00EF4UL))
#define bFM3_DMAC_DMACA7_TC0                   *((volatile unsigned int*)(0x42C01000UL))
#define bFM3_DMAC_DMACA7_TC1                   *((volatile unsigned int*)(0x42C01004UL))
#define bFM3_DMAC_DMACA7_TC2                   *((volatile unsigned int*)(0x42C01008UL))
#define bFM3_DMAC_DMACA7_TC3                   *((volatile unsigned int*)(0x42C0100CUL))
#define bFM3_DMAC_DMACA7_TC4                   *((volatile unsigned int*)(0x42C01010UL))
#define bFM3_DMAC_DMACA7_TC5                   *((volatile unsigned int*)(0x42C01014UL))
#define bFM3_DMAC_DMACA7_TC6                   *((volatile unsigned int*)(0x42C01018UL))
#define bFM3_DMAC_DMACA7_TC7                   *((volatile unsigned int*)(0x42C0101CUL))
#define bFM3_DMAC_DMACA7_TC8                   *((volatile unsigned int*)(0x42C01020UL))
#define bFM3_DMAC_DMACA7_TC9                   *((volatile unsigned int*)(0x42C01024UL))
#define bFM3_DMAC_DMACA7_TC10                  *((volatile unsigned int*)(0x42C01028UL))
#define bFM3_DMAC_DMACA7_TC11                  *((volatile unsigned int*)(0x42C0102CUL))
#define bFM3_DMAC_DMACA7_TC12                  *((volatile unsigned int*)(0x42C01030UL))
#define bFM3_DMAC_DMACA7_TC13                  *((volatile unsigned int*)(0x42C01034UL))
#define bFM3_DMAC_DMACA7_TC14                  *((volatile unsigned int*)(0x42C01038UL))
#define bFM3_DMAC_DMACA7_TC15                  *((volatile unsigned int*)(0x42C0103CUL))
#define bFM3_DMAC_DMACA7_BC0                   *((volatile unsigned int*)(0x42C01040UL))
#define bFM3_DMAC_DMACA7_BC1                   *((volatile unsigned int*)(0x42C01044UL))
#define bFM3_DMAC_DMACA7_BC2                   *((volatile unsigned int*)(0x42C01048UL))
#define bFM3_DMAC_DMACA7_BC3                   *((volatile unsigned int*)(0x42C0104CUL))
#define bFM3_DMAC_DMACA7_IS0                   *((volatile unsigned int*)(0x42C0105CUL))
#define bFM3_DMAC_DMACA7_IS1                   *((volatile unsigned int*)(0x42C01060UL))
#define bFM3_DMAC_DMACA7_IS2                   *((volatile unsigned int*)(0x42C01064UL))
#define bFM3_DMAC_DMACA7_IS3                   *((volatile unsigned int*)(0x42C01068UL))
#define bFM3_DMAC_DMACA7_IS4                   *((volatile unsigned int*)(0x42C0106CUL))
#define bFM3_DMAC_DMACA7_IS5                   *((volatile unsigned int*)(0x42C01070UL))
#define bFM3_DMAC_DMACA7_ST                    *((volatile unsigned int*)(0x42C01074UL))
#define bFM3_DMAC_DMACA7_PB                    *((volatile unsigned int*)(0x42C01078UL))
#define bFM3_DMAC_DMACA7_EB                    *((volatile unsigned int*)(0x42C0107CUL))
#define bFM3_DMAC_DMACB7_EM                    *((volatile unsigned int*)(0x42C01080UL))
#define bFM3_DMAC_DMACB7_SS0                   *((volatile unsigned int*)(0x42C010C0UL))
#define bFM3_DMAC_DMACB7_SS1                   *((volatile unsigned int*)(0x42C010C4UL))
#define bFM3_DMAC_DMACB7_SS2                   *((volatile unsigned int*)(0x42C010C8UL))
#define bFM3_DMAC_DMACB7_CI                    *((volatile unsigned int*)(0x42C010CCUL))
#define bFM3_DMAC_DMACB7_EI                    *((volatile unsigned int*)(0x42C010D0UL))
#define bFM3_DMAC_DMACB7_RD                    *((volatile unsigned int*)(0x42C010D4UL))
#define bFM3_DMAC_DMACB7_RS                    *((volatile unsigned int*)(0x42C010D8UL))
#define bFM3_DMAC_DMACB7_RC                    *((volatile unsigned int*)(0x42C010DCUL))
#define bFM3_DMAC_DMACB7_FD                    *((volatile unsigned int*)(0x42C010E0UL))
#define bFM3_DMAC_DMACB7_FS                    *((volatile unsigned int*)(0x42C010E4UL))
#define bFM3_DMAC_DMACB7_TW0                   *((volatile unsigned int*)(0x42C010E8UL))
#define bFM3_DMAC_DMACB7_TW1                   *((volatile unsigned int*)(0x42C010ECUL))
#define bFM3_DMAC_DMACB7_MS0                   *((volatile unsigned int*)(0x42C010F0UL))
#define bFM3_DMAC_DMACB7_MS1                   *((volatile unsigned int*)(0x42C010F4UL))

/* CAN channel 1 registers */
#define bFM3_CAN1_CTRLR_INIT                   *((volatile unsigned int*)(0x42C60000UL))
#define bFM3_CAN1_CTRLR_IE                     *((volatile unsigned int*)(0x42C60004UL))
#define bFM3_CAN1_CTRLR_SIE                    *((volatile unsigned int*)(0x42C60008UL))
#define bFM3_CAN1_CTRLR_EIE                    *((volatile unsigned int*)(0x42C6000CUL))
#define bFM3_CAN1_CTRLR_DAR                    *((volatile unsigned int*)(0x42C60014UL))
#define bFM3_CAN1_CTRLR_CCE                    *((volatile unsigned int*)(0x42C60018UL))
#define bFM3_CAN1_CTRLR_TEST                   *((volatile unsigned int*)(0x42C6001CUL))
#define bFM3_CAN1_STATR_LEC0                   *((volatile unsigned int*)(0x42C60040UL))
#define bFM3_CAN1_STATR_LEC1                   *((volatile unsigned int*)(0x42C60044UL))
#define bFM3_CAN1_STATR_LEC2                   *((volatile unsigned int*)(0x42C60048UL))
#define bFM3_CAN1_STATR_TXOK                   *((volatile unsigned int*)(0x42C6004CUL))
#define bFM3_CAN1_STATR_RXOK                   *((volatile unsigned int*)(0x42C60050UL))
#define bFM3_CAN1_STATR_EPASS                  *((volatile unsigned int*)(0x42C60054UL))
#define bFM3_CAN1_STATR_EWARN                  *((volatile unsigned int*)(0x42C60058UL))
#define bFM3_CAN1_STATR_BOFF                   *((volatile unsigned int*)(0x42C6005CUL))
#define bFM3_CAN1_ERRCNT_TEC0                  *((volatile unsigned int*)(0x42C60080UL))
#define bFM3_CAN1_ERRCNT_TEC1                  *((volatile unsigned int*)(0x42C60084UL))
#define bFM3_CAN1_ERRCNT_TEC2                  *((volatile unsigned int*)(0x42C60088UL))
#define bFM3_CAN1_ERRCNT_TEC3                  *((volatile unsigned int*)(0x42C6008CUL))
#define bFM3_CAN1_ERRCNT_TEC4                  *((volatile unsigned int*)(0x42C60090UL))
#define bFM3_CAN1_ERRCNT_TEC5                  *((volatile unsigned int*)(0x42C60094UL))
#define bFM3_CAN1_ERRCNT_TEC6                  *((volatile unsigned int*)(0x42C60098UL))
#define bFM3_CAN1_ERRCNT_TEC7                  *((volatile unsigned int*)(0x42C6009CUL))
#define bFM3_CAN1_ERRCNT_REC0                  *((volatile unsigned int*)(0x42C600A0UL))
#define bFM3_CAN1_ERRCNT_REC1                  *((volatile unsigned int*)(0x42C600A4UL))
#define bFM3_CAN1_ERRCNT_REC2                  *((volatile unsigned int*)(0x42C600A8UL))
#define bFM3_CAN1_ERRCNT_REC3                  *((volatile unsigned int*)(0x42C600ACUL))
#define bFM3_CAN1_ERRCNT_REC4                  *((volatile unsigned int*)(0x42C600B0UL))
#define bFM3_CAN1_ERRCNT_REC5                  *((volatile unsigned int*)(0x42C600B4UL))
#define bFM3_CAN1_ERRCNT_REC6                  *((volatile unsigned int*)(0x42C600B8UL))
#define bFM3_CAN1_ERRCNT_RP                    *((volatile unsigned int*)(0x42C600BCUL))
#define bFM3_CAN1_BTR_BRP0                     *((volatile unsigned int*)(0x42C600C0UL))
#define bFM3_CAN1_BTR_BRP1                     *((volatile unsigned int*)(0x42C600C4UL))
#define bFM3_CAN1_BTR_BRP2                     *((volatile unsigned int*)(0x42C600C8UL))
#define bFM3_CAN1_BTR_BRP3                     *((volatile unsigned int*)(0x42C600CCUL))
#define bFM3_CAN1_BTR_BRP4                     *((volatile unsigned int*)(0x42C600D0UL))
#define bFM3_CAN1_BTR_BRP5                     *((volatile unsigned int*)(0x42C600D4UL))
#define bFM3_CAN1_BTR_SJW0                     *((volatile unsigned int*)(0x42C600D8UL))
#define bFM3_CAN1_BTR_SJW1                     *((volatile unsigned int*)(0x42C600DCUL))
#define bFM3_CAN1_BTR_TSEG10                   *((volatile unsigned int*)(0x42C600E0UL))
#define bFM3_CAN1_BTR_TSEG11                   *((volatile unsigned int*)(0x42C600E4UL))
#define bFM3_CAN1_BTR_TSEG12                   *((volatile unsigned int*)(0x42C600E8UL))
#define bFM3_CAN1_BTR_TSEG13                   *((volatile unsigned int*)(0x42C600ECUL))
#define bFM3_CAN1_BTR_TSEG20                   *((volatile unsigned int*)(0x42C600F0UL))
#define bFM3_CAN1_BTR_TSEG21                   *((volatile unsigned int*)(0x42C600F4UL))
#define bFM3_CAN1_BTR_TSEG22                   *((volatile unsigned int*)(0x42C600F8UL))
#define bFM3_CAN1_INTR_INTID0                  *((volatile unsigned int*)(0x42C60100UL))
#define bFM3_CAN1_INTR_INTID1                  *((volatile unsigned int*)(0x42C60104UL))
#define bFM3_CAN1_INTR_INTID2                  *((volatile unsigned int*)(0x42C60108UL))
#define bFM3_CAN1_INTR_INTID3                  *((volatile unsigned int*)(0x42C6010CUL))
#define bFM3_CAN1_INTR_INTID4                  *((volatile unsigned int*)(0x42C60110UL))
#define bFM3_CAN1_INTR_INTID5                  *((volatile unsigned int*)(0x42C60114UL))
#define bFM3_CAN1_INTR_INTID6                  *((volatile unsigned int*)(0x42C60118UL))
#define bFM3_CAN1_INTR_INTID7                  *((volatile unsigned int*)(0x42C6011CUL))
#define bFM3_CAN1_INTR_INTID8                  *((volatile unsigned int*)(0x42C60120UL))
#define bFM3_CAN1_INTR_INTID9                  *((volatile unsigned int*)(0x42C60124UL))
#define bFM3_CAN1_INTR_INTID10                 *((volatile unsigned int*)(0x42C60128UL))
#define bFM3_CAN1_INTR_INTID11                 *((volatile unsigned int*)(0x42C6012CUL))
#define bFM3_CAN1_INTR_INTID12                 *((volatile unsigned int*)(0x42C60130UL))
#define bFM3_CAN1_INTR_INTID13                 *((volatile unsigned int*)(0x42C60134UL))
#define bFM3_CAN1_INTR_INTID14                 *((volatile unsigned int*)(0x42C60138UL))
#define bFM3_CAN1_INTR_INTID15                 *((volatile unsigned int*)(0x42C6013CUL))
#define bFM3_CAN1_TESTR_BASIC                  *((volatile unsigned int*)(0x42C60148UL))
#define bFM3_CAN1_TESTR_SILENT                 *((volatile unsigned int*)(0x42C6014CUL))
#define bFM3_CAN1_TESTR_LBACK                  *((volatile unsigned int*)(0x42C60150UL))
#define bFM3_CAN1_TESTR_TX0                    *((volatile unsigned int*)(0x42C60154UL))
#define bFM3_CAN1_TESTR_TX1                    *((volatile unsigned int*)(0x42C60158UL))
#define bFM3_CAN1_TESTR_RX                     *((volatile unsigned int*)(0x42C6015CUL))
#define bFM3_CAN1_BRPER_BRPE0                  *((volatile unsigned int*)(0x42C60180UL))
#define bFM3_CAN1_BRPER_BRPE1                  *((volatile unsigned int*)(0x42C60184UL))
#define bFM3_CAN1_BRPER_BRPE2                  *((volatile unsigned int*)(0x42C60188UL))
#define bFM3_CAN1_BRPER_BRPE3                  *((volatile unsigned int*)(0x42C6018CUL))
#define bFM3_CAN1_IF1CREQ_BUSY                 *((volatile unsigned int*)(0x42C6023CUL))
#define bFM3_CAN1_IF1CMSK_DATAB                *((volatile unsigned int*)(0x42C60240UL))
#define bFM3_CAN1_IF1CMSK_DATAA                *((volatile unsigned int*)(0x42C60244UL))
#define bFM3_CAN1_IF1CMSK_TXRQST               *((volatile unsigned int*)(0x42C60248UL))
#define bFM3_CAN1_IF1CMSK_NEWDAT               *((volatile unsigned int*)(0x42C60248UL))
#define bFM3_CAN1_IF1CMSK_CIP                  *((volatile unsigned int*)(0x42C6024CUL))
#define bFM3_CAN1_IF1CMSK_CONTROL              *((volatile unsigned int*)(0x42C60250UL))
#define bFM3_CAN1_IF1CMSK_ARB                  *((volatile unsigned int*)(0x42C60254UL))
#define bFM3_CAN1_IF1CMSK_MASK                 *((volatile unsigned int*)(0x42C60258UL))
#define bFM3_CAN1_IF1CMSK_WRRD                 *((volatile unsigned int*)(0x42C6025CUL))
#define bFM3_CAN1_IF1MSK_MDIR                  *((volatile unsigned int*)(0x42C602F8UL))
#define bFM3_CAN1_IF1MSK_MXTD                  *((volatile unsigned int*)(0x42C602FCUL))
#define bFM3_CAN1_IF1MSK2_MDIR                 *((volatile unsigned int*)(0x42C602F8UL))
#define bFM3_CAN1_IF1MSK2_MXTD                 *((volatile unsigned int*)(0x42C602FCUL))
#define bFM3_CAN1_IF1ARB_DIR                   *((volatile unsigned int*)(0x42C60374UL))
#define bFM3_CAN1_IF1ARB_XTD                   *((volatile unsigned int*)(0x42C60378UL))
#define bFM3_CAN1_IF1ARB_MSGVAL                *((volatile unsigned int*)(0x42C6037CUL))
#define bFM3_CAN1_IF1ARB2_DIR                  *((volatile unsigned int*)(0x42C60374UL))
#define bFM3_CAN1_IF1ARB2_XTD                  *((volatile unsigned int*)(0x42C60378UL))
#define bFM3_CAN1_IF1ARB2_MSGVAL               *((volatile unsigned int*)(0x42C6037CUL))
#define bFM3_CAN1_IF1MCTR_DLC0                 *((volatile unsigned int*)(0x42C60380UL))
#define bFM3_CAN1_IF1MCTR_DLC1                 *((volatile unsigned int*)(0x42C60384UL))
#define bFM3_CAN1_IF1MCTR_DLC2                 *((volatile unsigned int*)(0x42C60388UL))
#define bFM3_CAN1_IF1MCTR_DLC3                 *((volatile unsigned int*)(0x42C6038CUL))
#define bFM3_CAN1_IF1MCTR_EOB                  *((volatile unsigned int*)(0x42C6039CUL))
#define bFM3_CAN1_IF1MCTR_TXRQST               *((volatile unsigned int*)(0x42C603A0UL))
#define bFM3_CAN1_IF1MCTR_RMTEN                *((volatile unsigned int*)(0x42C603A4UL))
#define bFM3_CAN1_IF1MCTR_RXIE                 *((volatile unsigned int*)(0x42C603A8UL))
#define bFM3_CAN1_IF1MCTR_TXIE                 *((volatile unsigned int*)(0x42C603ACUL))
#define bFM3_CAN1_IF1MCTR_UMASK                *((volatile unsigned int*)(0x42C603B0UL))
#define bFM3_CAN1_IF1MCTR_INTPND               *((volatile unsigned int*)(0x42C603B4UL))
#define bFM3_CAN1_IF1MCTR_MSGLST               *((volatile unsigned int*)(0x42C603B8UL))
#define bFM3_CAN1_IF1MCTR_NEWDAT               *((volatile unsigned int*)(0x42C603BCUL))
#define bFM3_CAN1_IF2CREQ_BUSY                 *((volatile unsigned int*)(0x42C6083CUL))
#define bFM3_CAN1_IF2CMSK_DATAB                *((volatile unsigned int*)(0x42C60840UL))
#define bFM3_CAN1_IF2CMSK_DATAA                *((volatile unsigned int*)(0x42C60844UL))
#define bFM3_CAN1_IF2CMSK_TXRQST               *((volatile unsigned int*)(0x42C60848UL))
#define bFM3_CAN1_IF2CMSK_NEWDAT               *((volatile unsigned int*)(0x42C60848UL))
#define bFM3_CAN1_IF2CMSK_CIP                  *((volatile unsigned int*)(0x42C6084CUL))
#define bFM3_CAN1_IF2CMSK_CONTROL              *((volatile unsigned int*)(0x42C60850UL))
#define bFM3_CAN1_IF2CMSK_ARB                  *((volatile unsigned int*)(0x42C60854UL))
#define bFM3_CAN1_IF2CMSK_MASK                 *((volatile unsigned int*)(0x42C60858UL))
#define bFM3_CAN1_IF2CMSK_WRRD                 *((volatile unsigned int*)(0x42C6085CUL))
#define bFM3_CAN1_IF2MSK_MDIR                  *((volatile unsigned int*)(0x42C608F8UL))
#define bFM3_CAN1_IF2MSK_MXTD                  *((volatile unsigned int*)(0x42C608FCUL))
#define bFM3_CAN1_IF2MSK2_MDIR                 *((volatile unsigned int*)(0x42C608F8UL))
#define bFM3_CAN1_IF2MSK2_MXTD                 *((volatile unsigned int*)(0x42C608FCUL))
#define bFM3_CAN1_IF2ARB_DIR                   *((volatile unsigned int*)(0x42C60974UL))
#define bFM3_CAN1_IF2ARB_XTD                   *((volatile unsigned int*)(0x42C60978UL))
#define bFM3_CAN1_IF2ARB_MSGVAL                *((volatile unsigned int*)(0x42C6097CUL))
#define bFM3_CAN1_IF2ARB2_DIR                  *((volatile unsigned int*)(0x42C60974UL))
#define bFM3_CAN1_IF2ARB2_XTD                  *((volatile unsigned int*)(0x42C60978UL))
#define bFM3_CAN1_IF2ARB2_MSGVAL               *((volatile unsigned int*)(0x42C6097CUL))
#define bFM3_CAN1_IF2MCTR_DLC0                 *((volatile unsigned int*)(0x42C60980UL))
#define bFM3_CAN1_IF2MCTR_DLC1                 *((volatile unsigned int*)(0x42C60984UL))
#define bFM3_CAN1_IF2MCTR_DLC2                 *((volatile unsigned int*)(0x42C60988UL))
#define bFM3_CAN1_IF2MCTR_DLC3                 *((volatile unsigned int*)(0x42C6098CUL))
#define bFM3_CAN1_IF2MCTR_EOB                  *((volatile unsigned int*)(0x42C6099CUL))
#define bFM3_CAN1_IF2MCTR_TXRQST               *((volatile unsigned int*)(0x42C609A0UL))
#define bFM3_CAN1_IF2MCTR_RMTEN                *((volatile unsigned int*)(0x42C609A4UL))
#define bFM3_CAN1_IF2MCTR_RXIE                 *((volatile unsigned int*)(0x42C609A8UL))
#define bFM3_CAN1_IF2MCTR_TXIE                 *((volatile unsigned int*)(0x42C609ACUL))
#define bFM3_CAN1_IF2MCTR_UMASK                *((volatile unsigned int*)(0x42C609B0UL))
#define bFM3_CAN1_IF2MCTR_INTPND               *((volatile unsigned int*)(0x42C609B4UL))
#define bFM3_CAN1_IF2MCTR_MSGLST               *((volatile unsigned int*)(0x42C609B8UL))
#define bFM3_CAN1_IF2MCTR_NEWDAT               *((volatile unsigned int*)(0x42C609BCUL))
#define bFM3_CAN1_TREQR_TXRQST1                *((volatile unsigned int*)(0x42C61000UL))
#define bFM3_CAN1_TREQR_TXRQST2                *((volatile unsigned int*)(0x42C61004UL))
#define bFM3_CAN1_TREQR_TXRQST3                *((volatile unsigned int*)(0x42C61008UL))
#define bFM3_CAN1_TREQR_TXRQST4                *((volatile unsigned int*)(0x42C6100CUL))
#define bFM3_CAN1_TREQR_TXRQST5                *((volatile unsigned int*)(0x42C61010UL))
#define bFM3_CAN1_TREQR_TXRQST6                *((volatile unsigned int*)(0x42C61014UL))
#define bFM3_CAN1_TREQR_TXRQST7                *((volatile unsigned int*)(0x42C61018UL))
#define bFM3_CAN1_TREQR_TXRQST8                *((volatile unsigned int*)(0x42C6101CUL))
#define bFM3_CAN1_TREQR_TXRQST9                *((volatile unsigned int*)(0x42C61020UL))
#define bFM3_CAN1_TREQR_TXRQST10               *((volatile unsigned int*)(0x42C61024UL))
#define bFM3_CAN1_TREQR_TXRQST11               *((volatile unsigned int*)(0x42C61028UL))
#define bFM3_CAN1_TREQR_TXRQST12               *((volatile unsigned int*)(0x42C6102CUL))
#define bFM3_CAN1_TREQR_TXRQST13               *((volatile unsigned int*)(0x42C61030UL))
#define bFM3_CAN1_TREQR_TXRQST14               *((volatile unsigned int*)(0x42C61034UL))
#define bFM3_CAN1_TREQR_TXRQST15               *((volatile unsigned int*)(0x42C61038UL))
#define bFM3_CAN1_TREQR_TXRQST16               *((volatile unsigned int*)(0x42C6103CUL))
#define bFM3_CAN1_TREQR_TXRQST17               *((volatile unsigned int*)(0x42C61040UL))
#define bFM3_CAN1_TREQR_TXRQST18               *((volatile unsigned int*)(0x42C61044UL))
#define bFM3_CAN1_TREQR_TXRQST19               *((volatile unsigned int*)(0x42C61048UL))
#define bFM3_CAN1_TREQR_TXRQST20               *((volatile unsigned int*)(0x42C6104CUL))
#define bFM3_CAN1_TREQR_TXRQST21               *((volatile unsigned int*)(0x42C61050UL))
#define bFM3_CAN1_TREQR_TXRQST22               *((volatile unsigned int*)(0x42C61054UL))
#define bFM3_CAN1_TREQR_TXRQST23               *((volatile unsigned int*)(0x42C61058UL))
#define bFM3_CAN1_TREQR_TXRQST24               *((volatile unsigned int*)(0x42C6105CUL))
#define bFM3_CAN1_TREQR_TXRQST25               *((volatile unsigned int*)(0x42C61060UL))
#define bFM3_CAN1_TREQR_TXRQST26               *((volatile unsigned int*)(0x42C61064UL))
#define bFM3_CAN1_TREQR_TXRQST27               *((volatile unsigned int*)(0x42C61068UL))
#define bFM3_CAN1_TREQR_TXRQST28               *((volatile unsigned int*)(0x42C6106CUL))
#define bFM3_CAN1_TREQR_TXRQST29               *((volatile unsigned int*)(0x42C61070UL))
#define bFM3_CAN1_TREQR_TXRQST30               *((volatile unsigned int*)(0x42C61074UL))
#define bFM3_CAN1_TREQR_TXRQST31               *((volatile unsigned int*)(0x42C61078UL))
#define bFM3_CAN1_TREQR_TXRQST32               *((volatile unsigned int*)(0x42C6107CUL))
#define bFM3_CAN1_TREQR1_TXRQST1               *((volatile unsigned int*)(0x42C61000UL))
#define bFM3_CAN1_TREQR1_TXRQST2               *((volatile unsigned int*)(0x42C61004UL))
#define bFM3_CAN1_TREQR1_TXRQST3               *((volatile unsigned int*)(0x42C61008UL))
#define bFM3_CAN1_TREQR1_TXRQST4               *((volatile unsigned int*)(0x42C6100CUL))
#define bFM3_CAN1_TREQR1_TXRQST5               *((volatile unsigned int*)(0x42C61010UL))
#define bFM3_CAN1_TREQR1_TXRQST6               *((volatile unsigned int*)(0x42C61014UL))
#define bFM3_CAN1_TREQR1_TXRQST7               *((volatile unsigned int*)(0x42C61018UL))
#define bFM3_CAN1_TREQR1_TXRQST8               *((volatile unsigned int*)(0x42C6101CUL))
#define bFM3_CAN1_TREQR1_TXRQST9               *((volatile unsigned int*)(0x42C61020UL))
#define bFM3_CAN1_TREQR1_TXRQST10              *((volatile unsigned int*)(0x42C61024UL))
#define bFM3_CAN1_TREQR1_TXRQST11              *((volatile unsigned int*)(0x42C61028UL))
#define bFM3_CAN1_TREQR1_TXRQST12              *((volatile unsigned int*)(0x42C6102CUL))
#define bFM3_CAN1_TREQR1_TXRQST13              *((volatile unsigned int*)(0x42C61030UL))
#define bFM3_CAN1_TREQR1_TXRQST14              *((volatile unsigned int*)(0x42C61034UL))
#define bFM3_CAN1_TREQR1_TXRQST15              *((volatile unsigned int*)(0x42C61038UL))
#define bFM3_CAN1_TREQR1_TXRQST16              *((volatile unsigned int*)(0x42C6103CUL))
#define bFM3_CAN1_TREQR2_TXRQST17              *((volatile unsigned int*)(0x42C61040UL))
#define bFM3_CAN1_TREQR2_TXRQST18              *((volatile unsigned int*)(0x42C61044UL))
#define bFM3_CAN1_TREQR2_TXRQST19              *((volatile unsigned int*)(0x42C61048UL))
#define bFM3_CAN1_TREQR2_TXRQST20              *((volatile unsigned int*)(0x42C6104CUL))
#define bFM3_CAN1_TREQR2_TXRQST21              *((volatile unsigned int*)(0x42C61050UL))
#define bFM3_CAN1_TREQR2_TXRQST22              *((volatile unsigned int*)(0x42C61054UL))
#define bFM3_CAN1_TREQR2_TXRQST23              *((volatile unsigned int*)(0x42C61058UL))
#define bFM3_CAN1_TREQR2_TXRQST24              *((volatile unsigned int*)(0x42C6105CUL))
#define bFM3_CAN1_TREQR2_TXRQST25              *((volatile unsigned int*)(0x42C61060UL))
#define bFM3_CAN1_TREQR2_TXRQST26              *((volatile unsigned int*)(0x42C61064UL))
#define bFM3_CAN1_TREQR2_TXRQST27              *((volatile unsigned int*)(0x42C61068UL))
#define bFM3_CAN1_TREQR2_TXRQST28              *((volatile unsigned int*)(0x42C6106CUL))
#define bFM3_CAN1_TREQR2_TXRQST29              *((volatile unsigned int*)(0x42C61070UL))
#define bFM3_CAN1_TREQR2_TXRQST30              *((volatile unsigned int*)(0x42C61074UL))
#define bFM3_CAN1_TREQR2_TXRQST31              *((volatile unsigned int*)(0x42C61078UL))
#define bFM3_CAN1_TREQR2_TXRQST32              *((volatile unsigned int*)(0x42C6107CUL))
#define bFM3_CAN1_NEWDT_NEWDAT1                *((volatile unsigned int*)(0x42C61200UL))
#define bFM3_CAN1_NEWDT_NEWDAT2                *((volatile unsigned int*)(0x42C61204UL))
#define bFM3_CAN1_NEWDT_NEWDAT3                *((volatile unsigned int*)(0x42C61208UL))
#define bFM3_CAN1_NEWDT_NEWDAT4                *((volatile unsigned int*)(0x42C6120CUL))
#define bFM3_CAN1_NEWDT_NEWDAT5                *((volatile unsigned int*)(0x42C61210UL))
#define bFM3_CAN1_NEWDT_NEWDAT6                *((volatile unsigned int*)(0x42C61214UL))
#define bFM3_CAN1_NEWDT_NEWDAT7                *((volatile unsigned int*)(0x42C61218UL))
#define bFM3_CAN1_NEWDT_NEWDAT8                *((volatile unsigned int*)(0x42C6121CUL))
#define bFM3_CAN1_NEWDT_NEWDAT9                *((volatile unsigned int*)(0x42C61220UL))
#define bFM3_CAN1_NEWDT_NEWDAT10               *((volatile unsigned int*)(0x42C61224UL))
#define bFM3_CAN1_NEWDT_NEWDAT11               *((volatile unsigned int*)(0x42C61228UL))
#define bFM3_CAN1_NEWDT_NEWDAT12               *((volatile unsigned int*)(0x42C6122CUL))
#define bFM3_CAN1_NEWDT_NEWDAT13               *((volatile unsigned int*)(0x42C61230UL))
#define bFM3_CAN1_NEWDT_NEWDAT14               *((volatile unsigned int*)(0x42C61234UL))
#define bFM3_CAN1_NEWDT_NEWDAT15               *((volatile unsigned int*)(0x42C61238UL))
#define bFM3_CAN1_NEWDT_NEWDAT16               *((volatile unsigned int*)(0x42C6123CUL))
#define bFM3_CAN1_NEWDT_NEWDAT17               *((volatile unsigned int*)(0x42C61240UL))
#define bFM3_CAN1_NEWDT_NEWDAT18               *((volatile unsigned int*)(0x42C61244UL))
#define bFM3_CAN1_NEWDT_NEWDAT19               *((volatile unsigned int*)(0x42C61248UL))
#define bFM3_CAN1_NEWDT_NEWDAT20               *((volatile unsigned int*)(0x42C6124CUL))
#define bFM3_CAN1_NEWDT_NEWDAT21               *((volatile unsigned int*)(0x42C61250UL))
#define bFM3_CAN1_NEWDT_NEWDAT22               *((volatile unsigned int*)(0x42C61254UL))
#define bFM3_CAN1_NEWDT_NEWDAT23               *((volatile unsigned int*)(0x42C61258UL))
#define bFM3_CAN1_NEWDT_NEWDAT24               *((volatile unsigned int*)(0x42C6125CUL))
#define bFM3_CAN1_NEWDT_NEWDAT25               *((volatile unsigned int*)(0x42C61260UL))
#define bFM3_CAN1_NEWDT_NEWDAT26               *((volatile unsigned int*)(0x42C61264UL))
#define bFM3_CAN1_NEWDT_NEWDAT27               *((volatile unsigned int*)(0x42C61268UL))
#define bFM3_CAN1_NEWDT_NEWDAT28               *((volatile unsigned int*)(0x42C6126CUL))
#define bFM3_CAN1_NEWDT_NEWDAT29               *((volatile unsigned int*)(0x42C61270UL))
#define bFM3_CAN1_NEWDT_NEWDAT30               *((volatile unsigned int*)(0x42C61274UL))
#define bFM3_CAN1_NEWDT_NEWDAT31               *((volatile unsigned int*)(0x42C61278UL))
#define bFM3_CAN1_NEWDT_NEWDAT32               *((volatile unsigned int*)(0x42C6127CUL))
#define bFM3_CAN1_NEWDT1_NEWDAT1               *((volatile unsigned int*)(0x42C61200UL))
#define bFM3_CAN1_NEWDT1_NEWDAT2               *((volatile unsigned int*)(0x42C61204UL))
#define bFM3_CAN1_NEWDT1_NEWDAT3               *((volatile unsigned int*)(0x42C61208UL))
#define bFM3_CAN1_NEWDT1_NEWDAT4               *((volatile unsigned int*)(0x42C6120CUL))
#define bFM3_CAN1_NEWDT1_NEWDAT5               *((volatile unsigned int*)(0x42C61210UL))
#define bFM3_CAN1_NEWDT1_NEWDAT6               *((volatile unsigned int*)(0x42C61214UL))
#define bFM3_CAN1_NEWDT1_NEWDAT7               *((volatile unsigned int*)(0x42C61218UL))
#define bFM3_CAN1_NEWDT1_NEWDAT8               *((volatile unsigned int*)(0x42C6121CUL))
#define bFM3_CAN1_NEWDT1_NEWDAT9               *((volatile unsigned int*)(0x42C61220UL))
#define bFM3_CAN1_NEWDT1_NEWDAT10              *((volatile unsigned int*)(0x42C61224UL))
#define bFM3_CAN1_NEWDT1_NEWDAT11              *((volatile unsigned int*)(0x42C61228UL))
#define bFM3_CAN1_NEWDT1_NEWDAT12              *((volatile unsigned int*)(0x42C6122CUL))
#define bFM3_CAN1_NEWDT1_NEWDAT13              *((volatile unsigned int*)(0x42C61230UL))
#define bFM3_CAN1_NEWDT1_NEWDAT14              *((volatile unsigned int*)(0x42C61234UL))
#define bFM3_CAN1_NEWDT1_NEWDAT15              *((volatile unsigned int*)(0x42C61238UL))
#define bFM3_CAN1_NEWDT1_NEWDAT16              *((volatile unsigned int*)(0x42C6123CUL))
#define bFM3_CAN1_NEWDT2_NEWDAT17              *((volatile unsigned int*)(0x42C61240UL))
#define bFM3_CAN1_NEWDT2_NEWDAT18              *((volatile unsigned int*)(0x42C61244UL))
#define bFM3_CAN1_NEWDT2_NEWDAT19              *((volatile unsigned int*)(0x42C61248UL))
#define bFM3_CAN1_NEWDT2_NEWDAT20              *((volatile unsigned int*)(0x42C6124CUL))
#define bFM3_CAN1_NEWDT2_NEWDAT21              *((volatile unsigned int*)(0x42C61250UL))
#define bFM3_CAN1_NEWDT2_NEWDAT22              *((volatile unsigned int*)(0x42C61254UL))
#define bFM3_CAN1_NEWDT2_NEWDAT23              *((volatile unsigned int*)(0x42C61258UL))
#define bFM3_CAN1_NEWDT2_NEWDAT24              *((volatile unsigned int*)(0x42C6125CUL))
#define bFM3_CAN1_NEWDT2_NEWDAT25              *((volatile unsigned int*)(0x42C61260UL))
#define bFM3_CAN1_NEWDT2_NEWDAT26              *((volatile unsigned int*)(0x42C61264UL))
#define bFM3_CAN1_NEWDT2_NEWDAT27              *((volatile unsigned int*)(0x42C61268UL))
#define bFM3_CAN1_NEWDT2_NEWDAT28              *((volatile unsigned int*)(0x42C6126CUL))
#define bFM3_CAN1_NEWDT2_NEWDAT29              *((volatile unsigned int*)(0x42C61270UL))
#define bFM3_CAN1_NEWDT2_NEWDAT30              *((volatile unsigned int*)(0x42C61274UL))
#define bFM3_CAN1_NEWDT2_NEWDAT31              *((volatile unsigned int*)(0x42C61278UL))
#define bFM3_CAN1_NEWDT2_NEWDAT32              *((volatile unsigned int*)(0x42C6127CUL))
#define bFM3_CAN1_INTPND_INTPND1               *((volatile unsigned int*)(0x42C61400UL))
#define bFM3_CAN1_INTPND_INTPND2               *((volatile unsigned int*)(0x42C61404UL))
#define bFM3_CAN1_INTPND_INTPND3               *((volatile unsigned int*)(0x42C61408UL))
#define bFM3_CAN1_INTPND_INTPND4               *((volatile unsigned int*)(0x42C6140CUL))
#define bFM3_CAN1_INTPND_INTPND5               *((volatile unsigned int*)(0x42C61410UL))
#define bFM3_CAN1_INTPND_INTPND6               *((volatile unsigned int*)(0x42C61414UL))
#define bFM3_CAN1_INTPND_INTPND7               *((volatile unsigned int*)(0x42C61418UL))
#define bFM3_CAN1_INTPND_INTPND8               *((volatile unsigned int*)(0x42C6141CUL))
#define bFM3_CAN1_INTPND_INTPND9               *((volatile unsigned int*)(0x42C61420UL))
#define bFM3_CAN1_INTPND_INTPND10              *((volatile unsigned int*)(0x42C61424UL))
#define bFM3_CAN1_INTPND_INTPND11              *((volatile unsigned int*)(0x42C61428UL))
#define bFM3_CAN1_INTPND_INTPND12              *((volatile unsigned int*)(0x42C6142CUL))
#define bFM3_CAN1_INTPND_INTPND13              *((volatile unsigned int*)(0x42C61430UL))
#define bFM3_CAN1_INTPND_INTPND14              *((volatile unsigned int*)(0x42C61434UL))
#define bFM3_CAN1_INTPND_INTPND15              *((volatile unsigned int*)(0x42C61438UL))
#define bFM3_CAN1_INTPND_INTPND16              *((volatile unsigned int*)(0x42C6143CUL))
#define bFM3_CAN1_INTPND_INTPND17              *((volatile unsigned int*)(0x42C61440UL))
#define bFM3_CAN1_INTPND_INTPND18              *((volatile unsigned int*)(0x42C61444UL))
#define bFM3_CAN1_INTPND_INTPND19              *((volatile unsigned int*)(0x42C61448UL))
#define bFM3_CAN1_INTPND_INTPND20              *((volatile unsigned int*)(0x42C6144CUL))
#define bFM3_CAN1_INTPND_INTPND21              *((volatile unsigned int*)(0x42C61450UL))
#define bFM3_CAN1_INTPND_INTPND22              *((volatile unsigned int*)(0x42C61454UL))
#define bFM3_CAN1_INTPND_INTPND23              *((volatile unsigned int*)(0x42C61458UL))
#define bFM3_CAN1_INTPND_INTPND24              *((volatile unsigned int*)(0x42C6145CUL))
#define bFM3_CAN1_INTPND_INTPND25              *((volatile unsigned int*)(0x42C61460UL))
#define bFM3_CAN1_INTPND_INTPND26              *((volatile unsigned int*)(0x42C61464UL))
#define bFM3_CAN1_INTPND_INTPND27              *((volatile unsigned int*)(0x42C61468UL))
#define bFM3_CAN1_INTPND_INTPND28              *((volatile unsigned int*)(0x42C6146CUL))
#define bFM3_CAN1_INTPND_INTPND29              *((volatile unsigned int*)(0x42C61470UL))
#define bFM3_CAN1_INTPND_INTPND30              *((volatile unsigned int*)(0x42C61474UL))
#define bFM3_CAN1_INTPND_INTPND31              *((volatile unsigned int*)(0x42C61478UL))
#define bFM3_CAN1_INTPND_INTPND32              *((volatile unsigned int*)(0x42C6147CUL))
#define bFM3_CAN1_INTPND1_INTPND1              *((volatile unsigned int*)(0x42C61400UL))
#define bFM3_CAN1_INTPND1_INTPND2              *((volatile unsigned int*)(0x42C61404UL))
#define bFM3_CAN1_INTPND1_INTPND3              *((volatile unsigned int*)(0x42C61408UL))
#define bFM3_CAN1_INTPND1_INTPND4              *((volatile unsigned int*)(0x42C6140CUL))
#define bFM3_CAN1_INTPND1_INTPND5              *((volatile unsigned int*)(0x42C61410UL))
#define bFM3_CAN1_INTPND1_INTPND6              *((volatile unsigned int*)(0x42C61414UL))
#define bFM3_CAN1_INTPND1_INTPND7              *((volatile unsigned int*)(0x42C61418UL))
#define bFM3_CAN1_INTPND1_INTPND8              *((volatile unsigned int*)(0x42C6141CUL))
#define bFM3_CAN1_INTPND1_INTPND9              *((volatile unsigned int*)(0x42C61420UL))
#define bFM3_CAN1_INTPND1_INTPND10             *((volatile unsigned int*)(0x42C61424UL))
#define bFM3_CAN1_INTPND1_INTPND11             *((volatile unsigned int*)(0x42C61428UL))
#define bFM3_CAN1_INTPND1_INTPND12             *((volatile unsigned int*)(0x42C6142CUL))
#define bFM3_CAN1_INTPND1_INTPND13             *((volatile unsigned int*)(0x42C61430UL))
#define bFM3_CAN1_INTPND1_INTPND14             *((volatile unsigned int*)(0x42C61434UL))
#define bFM3_CAN1_INTPND1_INTPND15             *((volatile unsigned int*)(0x42C61438UL))
#define bFM3_CAN1_INTPND1_INTPND16             *((volatile unsigned int*)(0x42C6143CUL))
#define bFM3_CAN1_INTPND2_INTPND17             *((volatile unsigned int*)(0x42C61440UL))
#define bFM3_CAN1_INTPND2_INTPND18             *((volatile unsigned int*)(0x42C61444UL))
#define bFM3_CAN1_INTPND2_INTPND19             *((volatile unsigned int*)(0x42C61448UL))
#define bFM3_CAN1_INTPND2_INTPND20             *((volatile unsigned int*)(0x42C6144CUL))
#define bFM3_CAN1_INTPND2_INTPND21             *((volatile unsigned int*)(0x42C61450UL))
#define bFM3_CAN1_INTPND2_INTPND22             *((volatile unsigned int*)(0x42C61454UL))
#define bFM3_CAN1_INTPND2_INTPND23             *((volatile unsigned int*)(0x42C61458UL))
#define bFM3_CAN1_INTPND2_INTPND24             *((volatile unsigned int*)(0x42C6145CUL))
#define bFM3_CAN1_INTPND2_INTPND25             *((volatile unsigned int*)(0x42C61460UL))
#define bFM3_CAN1_INTPND2_INTPND26             *((volatile unsigned int*)(0x42C61464UL))
#define bFM3_CAN1_INTPND2_INTPND27             *((volatile unsigned int*)(0x42C61468UL))
#define bFM3_CAN1_INTPND2_INTPND28             *((volatile unsigned int*)(0x42C6146CUL))
#define bFM3_CAN1_INTPND2_INTPND29             *((volatile unsigned int*)(0x42C61470UL))
#define bFM3_CAN1_INTPND2_INTPND30             *((volatile unsigned int*)(0x42C61474UL))
#define bFM3_CAN1_INTPND2_INTPND31             *((volatile unsigned int*)(0x42C61478UL))
#define bFM3_CAN1_INTPND2_INTPND32             *((volatile unsigned int*)(0x42C6147CUL))
#define bFM3_CAN1_MSGVAL_MSGVAL1               *((volatile unsigned int*)(0x42C61600UL))
#define bFM3_CAN1_MSGVAL_MSGVAL2               *((volatile unsigned int*)(0x42C61604UL))
#define bFM3_CAN1_MSGVAL_MSGVAL3               *((volatile unsigned int*)(0x42C61608UL))
#define bFM3_CAN1_MSGVAL_MSGVAL4               *((volatile unsigned int*)(0x42C6160CUL))
#define bFM3_CAN1_MSGVAL_MSGVAL5               *((volatile unsigned int*)(0x42C61610UL))
#define bFM3_CAN1_MSGVAL_MSGVAL6               *((volatile unsigned int*)(0x42C61614UL))
#define bFM3_CAN1_MSGVAL_MSGVAL7               *((volatile unsigned int*)(0x42C61618UL))
#define bFM3_CAN1_MSGVAL_MSGVAL8               *((volatile unsigned int*)(0x42C6161CUL))
#define bFM3_CAN1_MSGVAL_MSGVAL9               *((volatile unsigned int*)(0x42C61620UL))
#define bFM3_CAN1_MSGVAL_MSGVAL10              *((volatile unsigned int*)(0x42C61624UL))
#define bFM3_CAN1_MSGVAL_MSGVAL11              *((volatile unsigned int*)(0x42C61628UL))
#define bFM3_CAN1_MSGVAL_MSGVAL12              *((volatile unsigned int*)(0x42C6162CUL))
#define bFM3_CAN1_MSGVAL_MSGVAL13              *((volatile unsigned int*)(0x42C61630UL))
#define bFM3_CAN1_MSGVAL_MSGVAL14              *((volatile unsigned int*)(0x42C61634UL))
#define bFM3_CAN1_MSGVAL_MSGVAL15              *((volatile unsigned int*)(0x42C61638UL))
#define bFM3_CAN1_MSGVAL_MSGVAL16              *((volatile unsigned int*)(0x42C6163CUL))
#define bFM3_CAN1_MSGVAL_MSGVAL17              *((volatile unsigned int*)(0x42C61640UL))
#define bFM3_CAN1_MSGVAL_MSGVAL18              *((volatile unsigned int*)(0x42C61644UL))
#define bFM3_CAN1_MSGVAL_MSGVAL19              *((volatile unsigned int*)(0x42C61648UL))
#define bFM3_CAN1_MSGVAL_MSGVAL20              *((volatile unsigned int*)(0x42C6164CUL))
#define bFM3_CAN1_MSGVAL_MSGVAL21              *((volatile unsigned int*)(0x42C61650UL))
#define bFM3_CAN1_MSGVAL_MSGVAL22              *((volatile unsigned int*)(0x42C61654UL))
#define bFM3_CAN1_MSGVAL_MSGVAL23              *((volatile unsigned int*)(0x42C61658UL))
#define bFM3_CAN1_MSGVAL_MSGVAL24              *((volatile unsigned int*)(0x42C6165CUL))
#define bFM3_CAN1_MSGVAL_MSGVAL25              *((volatile unsigned int*)(0x42C61660UL))
#define bFM3_CAN1_MSGVAL_MSGVAL26              *((volatile unsigned int*)(0x42C61664UL))
#define bFM3_CAN1_MSGVAL_MSGVAL27              *((volatile unsigned int*)(0x42C61668UL))
#define bFM3_CAN1_MSGVAL_MSGVAL28              *((volatile unsigned int*)(0x42C6166CUL))
#define bFM3_CAN1_MSGVAL_MSGVAL29              *((volatile unsigned int*)(0x42C61670UL))
#define bFM3_CAN1_MSGVAL_MSGVAL30              *((volatile unsigned int*)(0x42C61674UL))
#define bFM3_CAN1_MSGVAL_MSGVAL31              *((volatile unsigned int*)(0x42C61678UL))
#define bFM3_CAN1_MSGVAL_MSGVAL32              *((volatile unsigned int*)(0x42C6167CUL))
#define bFM3_CAN1_MSGVAL1_MSGVAL1              *((volatile unsigned int*)(0x42C61600UL))
#define bFM3_CAN1_MSGVAL1_MSGVAL2              *((volatile unsigned int*)(0x42C61604UL))
#define bFM3_CAN1_MSGVAL1_MSGVAL3              *((volatile unsigned int*)(0x42C61608UL))
#define bFM3_CAN1_MSGVAL1_MSGVAL4              *((volatile unsigned int*)(0x42C6160CUL))
#define bFM3_CAN1_MSGVAL1_MSGVAL5              *((volatile unsigned int*)(0x42C61610UL))
#define bFM3_CAN1_MSGVAL1_MSGVAL6              *((volatile unsigned int*)(0x42C61614UL))
#define bFM3_CAN1_MSGVAL1_MSGVAL7              *((volatile unsigned int*)(0x42C61618UL))
#define bFM3_CAN1_MSGVAL1_MSGVAL8              *((volatile unsigned int*)(0x42C6161CUL))
#define bFM3_CAN1_MSGVAL1_MSGVAL9              *((volatile unsigned int*)(0x42C61620UL))
#define bFM3_CAN1_MSGVAL1_MSGVAL10             *((volatile unsigned int*)(0x42C61624UL))
#define bFM3_CAN1_MSGVAL1_MSGVAL11             *((volatile unsigned int*)(0x42C61628UL))
#define bFM3_CAN1_MSGVAL1_MSGVAL12             *((volatile unsigned int*)(0x42C6162CUL))
#define bFM3_CAN1_MSGVAL1_MSGVAL13             *((volatile unsigned int*)(0x42C61630UL))
#define bFM3_CAN1_MSGVAL1_MSGVAL14             *((volatile unsigned int*)(0x42C61634UL))
#define bFM3_CAN1_MSGVAL1_MSGVAL15             *((volatile unsigned int*)(0x42C61638UL))
#define bFM3_CAN1_MSGVAL1_MSGVAL16             *((volatile unsigned int*)(0x42C6163CUL))
#define bFM3_CAN1_MSGVAL2_MSGVAL17             *((volatile unsigned int*)(0x42C61640UL))
#define bFM3_CAN1_MSGVAL2_MSGVAL18             *((volatile unsigned int*)(0x42C61644UL))
#define bFM3_CAN1_MSGVAL2_MSGVAL19             *((volatile unsigned int*)(0x42C61648UL))
#define bFM3_CAN1_MSGVAL2_MSGVAL20             *((volatile unsigned int*)(0x42C6164CUL))
#define bFM3_CAN1_MSGVAL2_MSGVAL21             *((volatile unsigned int*)(0x42C61650UL))
#define bFM3_CAN1_MSGVAL2_MSGVAL22             *((volatile unsigned int*)(0x42C61654UL))
#define bFM3_CAN1_MSGVAL2_MSGVAL23             *((volatile unsigned int*)(0x42C61658UL))
#define bFM3_CAN1_MSGVAL2_MSGVAL24             *((volatile unsigned int*)(0x42C6165CUL))
#define bFM3_CAN1_MSGVAL2_MSGVAL25             *((volatile unsigned int*)(0x42C61660UL))
#define bFM3_CAN1_MSGVAL2_MSGVAL26             *((volatile unsigned int*)(0x42C61664UL))
#define bFM3_CAN1_MSGVAL2_MSGVAL27             *((volatile unsigned int*)(0x42C61668UL))
#define bFM3_CAN1_MSGVAL2_MSGVAL28             *((volatile unsigned int*)(0x42C6166CUL))
#define bFM3_CAN1_MSGVAL2_MSGVAL29             *((volatile unsigned int*)(0x42C61670UL))
#define bFM3_CAN1_MSGVAL2_MSGVAL30             *((volatile unsigned int*)(0x42C61674UL))
#define bFM3_CAN1_MSGVAL2_MSGVAL31             *((volatile unsigned int*)(0x42C61678UL))
#define bFM3_CAN1_MSGVAL2_MSGVAL32             *((volatile unsigned int*)(0x42C6167CUL))

#ifdef __cplusplus
}
#endif

#endif /* _MB9B520K_H_ */

