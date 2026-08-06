/**
 *******************************************************************************
 * @file    TMPM37A.h
 * @brief   CMSIS Cortex-M3 Core Peripheral Access Layer Header File for the
 *          TOSHIBA 'TMPM37A' Device Series
 * @version V2.0.2.1 (Tentative)
 * @date    2015/10/08
 * 
 * DO NOT USE THIS SOFTWARE WITHOUT THE SOFTWARE LISENCE AGREEMENT.
 * 
 * (C)Copyright TOSHIBA CORPORATION 2015 All rights reserved
 *******************************************************************************
 */

/** @addtogroup TOSHIBA_TX03_MICROCONTROLLER
  * @{
  */

/** @addtogroup TMPM37A
  * @{
  */

#ifndef __TMPM37A_H__
#define __TMPM37A_H__

#ifdef __cplusplus
extern "C" {
#endif

/** @addtogroup Configuration_of_CMSIS
  * @{
  */

/** Interrupt Number Definition */
    typedef enum IRQn {
/******  Cortex-M3 Processor Exceptions Numbers ***************************************************************/
        NonMaskableInt_IRQn = -14,      /*!< 2 Non Maskable Interrupt                                    */
        HardFault_IRQn = -13,   /*!< 3 Cortex-M3 Hard Fault Interrupt                            */
        MemoryManagement_IRQn = -12,    /*!< 4 Cortex-M3 Memory Management Interrupt                     */
        BusFault_IRQn = -11,    /*!< 5 Cortex-M3 Bus Fault Interrupt                             */
        UsageFault_IRQn = -10,  /*!< 6 Cortex-M3 Usage Fault Interrupt                           */
        SVCall_IRQn = -5,       /*!< 11 Cortex-M3 SV Call Interrupt                              */
        DebugMonitor_IRQn = -4, /*!< 12 Cortex-M3 Debug Monitor Interrupt                        */
        PendSV_IRQn = -2,       /*!< 14 Cortex-M3 Pend SV Interrupt                              */
        SysTick_IRQn = -1,      /*!< 15 Cortex-M3 System Tick Interrupt                          */

/******  TMPM37A Specific Interrupt Numbers *******************************************************************/
        INTRX0_IRQn = 0,        /*!< Serial reception (channel.0)                                */
        INTTX0_IRQn = 1,        /*!< Serial transmit (channel.0)                                 */
        INTVCNB_IRQn = 4,       /*!< Vector Engine interrupt B                                   */
        INTEMG_IRQn = 5,        /*!< PMD EMG interrupt                                           */
        INTOVV_IRQn = 6,        /*!< PMD OVV interrupt                                           */
        INTADPDB_IRQn = 7,      /*!< ADC conversion triggered by PMD is finished                 */
        INTTB00_IRQn = 8,       /*!< 16bit TMRB0 compare match detection 0/ Over flow            */
        INTTB01_IRQn = 9,       /*!< 16bit TMRB0 compare match detection 1                       */
        INTTB40_IRQn = 10,      /*!< 16bit TMRB4 compare match detection 0/ Over flow            */
        INTTB41_IRQn = 11,      /*!< 16bit TMRB4 compare match detection 1                       */
        INTTB50_IRQn = 12,      /*!< 16bit TMRB5 compare match detection 0/ Over flow            */
        INTTB51_IRQn = 13,      /*!< 16bit TMRB5 compare match detection 1                       */
        INTPMD_IRQn = 14,       /*!< PMD PWM interrupt                                           */
        INTCAP00_IRQn = 15,     /*!< 16bit TMRB0 input capture 0                                 */
        INTCAP01_IRQn = 16,     /*!< 16bit TMRB0 input capture 1                                 */
        INTCAP40_IRQn = 17,     /*!< 16bit TMRB4 input capture 0                                 */
        INTCAP41_IRQn = 18,     /*!< 16bit TMRB4 input capture 1                                 */
        INT6_IRQn = 19,         /*!< Interrupt Pin (PE0/14pin)                                   */
        INT7_IRQn = 20,         /*!< Interrupt Pin (PE2/16pin)                                   */
        INTADCPA_IRQn = 21,     /*!< ADC conversion monitoring function interrupt A              */
        INTADCPB_IRQn = 22,     /*!< ADC conversion monitoring function interrupt B              */
        INTADSFT_IRQn = 23,     /*!< ADC conversion started by software is finished              */
        INTADTMR_IRQn = 24,     /*!< ADC conversion triggered by timer is finished               */
        INTTB70_IRQn = 26,      /*!< 16bit TMRB7 compare match detection 0 / Over flow           */
        INTTB71_IRQn = 27,      /*!< 16bit TMRB7 compare match detection 1                       */
        INTCAP70_IRQn = 28,     /*!< 16bit TMRB7 input capture 0                                 */
        INTCAP71_IRQn = 29,     /*!< 16bit TMRB7 input capture 1                                 */
        INTC_IRQn = 30,         /*!< Interrupt Pin (PF0/17pin)                                   */
        INTSBI0_IRQn = 31       /*!< Serial Bus Interface0                                       */
    } IRQn_Type;

/** Processor and Core Peripheral Section */

/* Configuration of the Cortex-M3 Processor and Core Peripherals */
#define __CM3_REV              0x0201   /*!< Cortex-M3 Core Revision                           */
#define __MPU_PRESENT             0     /*!< MPU present or not                                */
#define __NVIC_PRIO_BITS          3     /*!< Number of Bits used for Priority Levels           */
#define __Vendor_SysTickConfig    0     /*!< Set to 1 if different SysTick Config is used      */

    /** @} *//* End of group Configuration_of_CMSIS */

#include "core_cm3.h"           /* Cortex-M3 processor and core peripherals            */
// Note: Changed for MikroE implementation.
// #include "system_TMPM37A.h"     /* TMPM37A System                                      */

/** @addtogroup Device_Peripheral_registers
  * @{
  */

/** Device Specific Peripheral registers structures */

/**
  * @brief General Purpose Input/Output Port (PB)
  */
    typedef struct {
        __IO uint32_t DATA;     /*!< PB Register                                  */
        __IO uint32_t CR;       /*!< PB Control Register                          */
        __IO uint32_t FR1;      /*!< PB Function Register 1                       */
        __IO uint32_t FR2;      /*!< PB Function Register 2                       */
        uint32_t RESERVED0;
        __IO uint32_t FR4;      /*!< PB Function Register 4                       */
        uint32_t RESERVED1[4];
        __IO uint32_t OD;       /*!< PB Open Drain Control Register               */
        __IO uint32_t PUP;      /*!< PB Pull-Up Control Register                  */
        __IO uint32_t PDN;      /*!< PB Pull-Down Control Register                */
        uint32_t RESERVED2;
        __IO uint32_t IE;       /*!< PB Input Enable Control Register             */
    } TSB_PB_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PE)
  */
    typedef struct {
        __IO uint32_t DATA;     /*!< PE Register                                  */
        __IO uint32_t CR;       /*!< PE Control Register                          */
        __IO uint32_t FR1;      /*!< PE Function Register 1                       */
        __IO uint32_t FR2;      /*!< PE Function Register 2                       */
        uint32_t RESERVED0;
        __IO uint32_t FR4;      /*!< PE Function Register 4                       */
        __IO uint32_t FR5;      /*!< PE Function Register 5                       */
        __IO uint32_t FR6;      /*!< PE Function Register 6                       */
        uint32_t RESERVED1[2];
        __IO uint32_t OD;       /*!< PE Open Drain Control Register               */
        __IO uint32_t PUP;      /*!< PE Pull-Up Control Register                  */
        __IO uint32_t PDN;      /*!< PE Pull-Down Control Register                */
        uint32_t RESERVED2;
        __IO uint32_t IE;       /*!< PE Input Enable Control Register             */
    } TSB_PE_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PF)
  */
    typedef struct {
        __IO uint32_t DATA;     /*!< PF Register                                  */
        __IO uint32_t CR;       /*!< PF Control Register                          */
        __IO uint32_t FR1;      /*!< PF Function Register 1                       */
        __IO uint32_t FR2;      /*!< PF Function Register 2                       */
        uint32_t RESERVED0;
        __IO uint32_t FR4;      /*!< PF Function Register 4                       */
        uint32_t RESERVED1[4];
        __IO uint32_t OD;       /*!< PF Open Drain Control Register               */
        __IO uint32_t PUP;      /*!< PF Pull-Up Control Register                  */
        __IO uint32_t PDN;      /*!< PF Pull-Down Control Register                */
        uint32_t RESERVED2;
        __IO uint32_t IE;       /*!< PF Input Enable Control Register             */
    } TSB_PF_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PJ)
  */
    typedef struct {
        __IO uint32_t DATA;     /*!< PJ Register                                  */
        __IO uint32_t CR;       /*!< PJ Control Register                          */
        uint32_t RESERVED0[8];
        __IO uint32_t OD;       /*!< PJ Open Drain Control Register               */
        __IO uint32_t PUP;      /*!< PJ Pull-Up Control Register                  */
        __IO uint32_t PDN;      /*!< PJ Pull-Down Control Register                */
        uint32_t RESERVED1;
        __IO uint32_t IE;       /*!< PJ Input Enable Control Register             */
    } TSB_PJ_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PK)
  */
    typedef struct {
        __IO uint32_t DATA;     /*!< PK Register                                  */
        __IO uint32_t CR;       /*!< PK Control Register                          */
        uint32_t RESERVED0[8];
        __IO uint32_t OD;       /*!< PK Open Drain Control Register               */
        __IO uint32_t PUP;      /*!< PK Pull-Up Control Register                  */
        __IO uint32_t PDN;      /*!< PK Pull-Down Control Register                */
        uint32_t RESERVED1;
        __IO uint32_t IE;       /*!< PK Input Enable Control Register             */
    } TSB_PK_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PM)
  */
    typedef struct {
        __IO uint32_t DATA;     /*!< PM Register                                  */
        __IO uint32_t CR;       /*!< PM Control Register                          */
        uint32_t RESERVED0[8];
        __IO uint32_t OD;       /*!< PM Open Drain Control Register               */
        __IO uint32_t PUP;      /*!< PM Pull-Up Control Register                  */
        __IO uint32_t PDN;      /*!< PM Pull-Down Control Register                */
        uint32_t RESERVED1;
        __IO uint32_t IE;       /*!< PM Input Enable Control Register             */
    } TSB_PM_TypeDef;

/**
  * @brief 16-bit Timer/Event Counter (TB)
  */
    typedef struct {
        __IO uint32_t EN;       /*!< TB Enable Register                           */
        __IO uint32_t RUN;      /*!< TB RUN Register                              */
        __IO uint32_t CR;       /*!< TB Control Register                          */
        __IO uint32_t MOD;      /*!< TB Mode Register                             */
        __IO uint32_t FFCR;     /*!< TB Flip-Flop Control Register                */
        __I uint32_t ST;        /*!< TB Status Register                           */
        __IO uint32_t IM;       /*!< TB Interrupt Mask Register                   */
        __I uint32_t UC;        /*!< TB Read Capture Register                     */
        __IO uint32_t RG0;      /*!< TB RG0 Timer Register                        */
        __IO uint32_t RG1;      /*!< TB RG1 Timer Register                        */
        __I uint32_t CP0;       /*!< TB CP0 Capture Register                      */
        __I uint32_t CP1;       /*!< TB CP1 Capture Register                      */
    } TSB_TB_TypeDef;

#if defined ( __CC_ARM   )      /* RealView Compiler */
#pragma anon_unions
#elif (defined (__ICCARM__))    /*  ICC Compiler     */
#pragma language=extended
#endif

/**
  * @brief Serial BusInterface(SBI)
  */
    typedef struct {
        __IO uint32_t CR0;      /*!< SBI Control Register 0                       */
        __IO uint32_t CR1;      /*!< SBI Control Register 1 (I2C Mode)            */
        __IO uint32_t DBR;      /*!< SBI Data Buffer Register                     */
        __IO uint32_t I2CAR;    /*!< SBI I2C Bus Address Register                 */
        union {
            __O uint32_t CR2;   /*!< SBI Control Register 2 (I2C Mode)            */
            __I uint32_t SR;    /*!< SBI Status Register (I2C Mode)               */
        };
        __IO uint32_t BR0;      /*!< SBI Baud Rate Register 0                     */
    } TSB_SBI_TypeDef;

/**
  * @brief Serial Channel (SC)
  */
    typedef struct {
        __IO uint32_t EN;       /*!< SC Enable Register                           */
        __IO uint32_t BUF;      /*!< SC Buffer Register                           */
        __IO uint32_t CR;       /*!< SC Control Register                          */
        __IO uint32_t MOD0;     /*!< SC Mode Control Register 0                   */
        __IO uint32_t BRCR;     /*!< SC Baud Rate Generator Control Register      */
        __IO uint32_t BRADD;    /*!< SC Baud Rate Generator Control Register 2    */
        __IO uint32_t MOD1;     /*!< SC Mode Control Register 1                   */
        __IO uint32_t MOD2;     /*!< SC Mode Control Register 2                   */
        __IO uint32_t RFC;      /*!< SC RX FIFO Configuration Register            */
        __IO uint32_t TFC;      /*!< SC TX FIFO Configuration Register            */
        __I uint32_t RST;       /*!< SC RX FIFO Status Register                   */
        __I uint32_t TST;       /*!< SC TX FIFO Status Register                   */
        __IO uint32_t FCNF;     /*!< SC FIFO Configuration Register               */
    } TSB_SC_TypeDef;

/**
  * @brief Analog-to-Digital Converter (AD)
  */
    typedef struct {
        __IO uint32_t CLK;      /*!< AD Conversion Clock Setting Register         */
        __IO uint32_t MOD0;     /*!< AD Mode Setting Register 0                   */
        __IO uint32_t MOD1;     /*!< AD Mode Setting Register 1                   */
        __I uint32_t MOD2;      /*!< AD Mode Setting Register 2                   */
        __IO uint32_t CMPCR0;   /*!< AD Monitoring Setting Register 0             */
        __IO uint32_t CMPCR1;   /*!< AD Monitoring Setting Register 1             */
        __IO uint32_t CMP0;     /*!< AD Conversion Result Compare Register 0      */
        __IO uint32_t CMP1;     /*!< AD Conversion Result Compare Register 1      */
        __I uint32_t REG0;      /*!< AD Conversion Result Register 0              */
        __I uint32_t REG1;      /*!< AD Conversion Result Register 1              */
        __I uint32_t REG2;      /*!< AD Conversion Result Register 2              */
        __I uint32_t REG3;      /*!< AD Conversion Result Register 3              */
        __I uint32_t REG4;      /*!< AD Conversion Result Register 4              */
        __I uint32_t REG5;      /*!< AD Conversion Result Register 5              */
        __I uint32_t REG6;      /*!< AD Conversion Result Register 6              */
        __I uint32_t REG7;      /*!< AD Conversion Result Register 7              */
        __I uint32_t REG8;      /*!< AD Conversion Result Register 8              */
        __I uint32_t REG9;      /*!< AD Conversion Result Register 9              */
        __I uint32_t REG10;     /*!< AD Conversion Result Register 10             */
        __I uint32_t REG11;     /*!< AD Conversion Result Register 11             */
        uint32_t RESERVED0[6];
        __IO uint32_t PSEL6;    /*!< PMD Trigger ProgramNumber Select Register 6  */
        __IO uint32_t PSEL7;    /*!< PMD Trigger ProgramNumber Select Register 7  */
        __IO uint32_t PSEL8;    /*!< PMD Trigger ProgramNumber Select Register 8  */
        __IO uint32_t PSEL9;    /*!< PMD Trigger ProgramNumber Select Register 9  */
        __IO uint32_t PSEL10;   /*!< PMD Trigger ProgramNumber Select Register 10 */
        __IO uint32_t PSEL11;   /*!< PMD Trigger ProgramNumber Select Register 11 */
        __IO uint32_t PINTS0;   /*!< PMD Trigger Interrupt Select Register 0      */
        __IO uint32_t PINTS1;   /*!< PMD Trigger Interrupt Select Register 1      */
        __IO uint32_t PINTS2;   /*!< PMD Trigger Interrupt Select Register 2      */
        __IO uint32_t PINTS3;   /*!< PMD Trigger Interrupt Select Register 3      */
        __IO uint32_t PINTS4;   /*!< PMD Trigger Interrupt Select Register 4      */
        __IO uint32_t PINTS5;   /*!< PMD Trigger Interrupt Select Register 5      */
        __IO uint32_t PSET0;    /*!< PMD Trigger Program Register 0               */
        __IO uint32_t PSET1;    /*!< PMD Trigger Program Register 1               */
        __IO uint32_t PSET2;    /*!< PMD Trigger Program Register 2               */
        __IO uint32_t PSET3;    /*!< PMD Trigger Program Register 3               */
        __IO uint32_t PSET4;    /*!< PMD Trigger Program Register 4               */
        __IO uint32_t PSET5;    /*!< PMD Trigger Program Register 5               */
        __IO uint32_t TSET03;   /*!< Timer Trigger Program Register 03            */
        __IO uint32_t TSET47;   /*!< Timer Trigger Program Register 47            */
        __IO uint32_t TSET811;  /*!< Timer Trigger Program Register 811           */
        __IO uint32_t SSET03;   /*!< Software Trigger Program Register 03         */
        __IO uint32_t SSET47;   /*!< Software Trigger Program Register 47         */
        __IO uint32_t SSET811;  /*!< Software Trigger Program Register 811        */
        __IO uint32_t ASET03;   /*!< Constant Trigger Program Register 03         */
        __IO uint32_t ASET47;   /*!< Constant Trigger Program Register 47         */
        __IO uint32_t ASET811;  /*!< Constant Trigger Program Register 811        */
        __IO uint32_t MOD3;     /*!< Mode setting Register3                       */
    } TSB_AD_TypeDef;

/**
  * @brief Ope-AMP control 
  */
    typedef struct {
        uint32_t RESERVED0[6];
        __IO uint32_t CTLD;     /*!< Amp D Register                               */
    } TSB_AMP_TypeDef;

/**
  * @brief Watchdog Timer (WD)
  */
    typedef struct {
        __IO uint32_t MOD;      /*!< WD Mode Register                             */
        __O uint32_t CR;        /*!< WD Control Register                          */
    } TSB_WD_TypeDef;

/**
  * @brief Clock Generator (CG)
  */
    typedef struct {
        __IO uint32_t SYSCR;    /*!< System Control Register                      */
        __IO uint32_t OSCCR;    /*!< Oscillation Control Register                 */
        __IO uint32_t STBYCR;   /*!< Standby Control Register                     */
        __IO uint32_t PLLSEL;   /*!< PLL Selection Register                       */
        uint32_t RESERVED0;
        __O uint32_t ICRCG;     /*!< CG Interrupt Request Clear Register          */
        __I uint32_t NMIFLG;    /*!< NMI Flag Register                            */
        __IO uint32_t RSTFLG;   /*!< Reset Flag Register                          */
        __IO uint32_t IMCGA;    /*!< CG Interrupt Mode Control Register A         */
    } TSB_CG_TypeDef;

/**
  * @brief Internal High-speed Oscillation Adjustment
  */
    typedef struct {
        __IO uint32_t PRO;      /*!< Protect Register                             */
        __IO uint32_t EN;       /*!< Enable Register                              */
        __I uint32_t INIT;      /*!< Initial Trimming Value Monitor Register      */
        __IO uint32_t SET;      /*!< Timming Value Setting Register               */
    } TSB_TRMOSC_TypeDef;

/**
  * @brief Oscillation Frequency Detector (OFD)
  */
    typedef struct {
        __IO uint32_t CR1;      /*!< OFD Control Register 1                       */
        __IO uint32_t CR2;      /*!< OFD Control Register 2                       */
        __IO uint32_t MNPLLOFF; /*!< OFD Lower Detection Frequency Setting Register */
        __IO uint32_t MNPLLON;  /*!< OFD Lower Detection Frequency Setting Register */
        __IO uint32_t MXPLLOFF; /*!< OFD Higher Detection Frequency Setting Register */
        __IO uint32_t MXPLLON;  /*!< OFD Higher Detection Frequency Setting Register */
    } TSB_OFD_TypeDef;

/**
  * @brief Low Voltage Detection Circuit
  */
    typedef struct {
        __IO uint32_t CR;       /*!< VD Control Register                          */
    } TSB_VD_TypeDef;

/**
  * @brief Vector Engine (VE)
  */
    typedef struct {
        __IO uint32_t EN;       /*!< VE enable/disable R/W                        */
        __O uint32_t CPURUNTRG; /*!< CPU start trigger selection W                */
        __IO uint32_t TASKAPP;  /*!< Task selection R/W                           */
        __IO uint32_t ACTSCH;   /*!< Operation schedule selection R/W             */
        __IO uint32_t REPTIME;  /*!< Schedule repeat count R/W                    */
        __IO uint32_t TRGMODE;  /*!< Start trigger mode R/W                       */
        __IO uint32_t ERRINTEN; /*!< Error interrupt enable/disable R/W           */
        __O uint32_t COMPEND;   /*!< VE forced termination W                      */
        __I uint32_t ERRDET;    /*!< Error detection R                            */
        __I uint32_t SCHTASKRUN;        /*!< Schedule executing flag/executing task R     */
        uint32_t RESERVED0;
        __IO uint32_t TMPREG0;  /*!< Temporary register R/W                       */
        __IO uint32_t TMPREG1;  /*!< Temporary register R/W                       */
        __IO uint32_t TMPREG2;  /*!< Temporary register R/W                       */
        __IO uint32_t TMPREG3;  /*!< Temporary register R/W                       */
        __IO uint32_t TMPREG4;  /*!< Temporary register R/W                       */
        __IO uint32_t TMPREG5;  /*!< Temporary register R/W                       */
        uint32_t RESERVED1[38];
        __IO uint32_t MCTLF1;   /*!< Status flags R/W                             */
        __IO uint32_t MODE1;    /*!< Task control mode R/W                        */
        __IO uint32_t FMODE1;   /*!< Flow control R/W                             */
        __IO uint32_t TPWM1;    /*!< 0PWM period rate (PWM period [s] * maximum speed*1 * 2^16) R/W */
        __IO uint32_t OMEGA1;   /*!< Rotation speed (speed [Hz] / maximum speed *1*1 * 2^15) R/W */
        __IO uint32_t THETA1;   /*!< Motor phase (motor phase [deg] / 360 * 2^16) R/W */
        __IO uint32_t IDREF1;   /*!< d-axis reference value (current [A] / maximum current*2 * 2^15) R/W */
        __IO uint32_t IQREF1;   /*!< q-axis reference value (current [A] / maximum current *2 * 2^15) R/W */
        __IO uint32_t VD1;      /*!< d-axis voltage (voltage [V] / maximum voltage *3 * 2^31) R/W */
        __IO uint32_t VQ1;      /*!< q-axis voltage (voltage [V] / maximum voltage *3 * 2^31) R/W */
        __IO uint32_t CIDKI1;   /*!< Integral coefficient for PI control of d-axis R/W */
        __IO uint32_t CIDKP1;   /*!< Proportional coefficient for PI control of d-axis R/W */
        __IO uint32_t CIQKI1;   /*!< Integral coefficient for PI control of q-axis R/W */
        __IO uint32_t CIQKP1;   /*!< Proportional coefficient for PI control of q-axis R/W */
        __IO uint32_t VDIH1;    /*!< Upper 32 bits of integral term (VDI ) of d-axis voltage R/W */
        __IO uint32_t VDILH1;   /*!< Lower 32 bits of integral term (VDI) of d-axis voltage R/W */
        __IO uint32_t VQIH1;    /*!< Upper 32 bits of integral term (VQI) of q-axis voltage R/W */
        __IO uint32_t VQILH1;   /*!< Lower 32 bits of integral term (VQI) of q-axis voltage R/W */
        __IO uint32_t FPWMCHG1; /*!< Switching speed (for 2-phase modulation and shift PWM) R/W */
        __IO uint32_t MDPRD1;   /*!< PWM period (to be set identically with PMD's PWM period) R/W */
        __IO uint32_t MINPLS1;  /*!< Minimum pulse width R/W                      */
        __IO uint32_t TRGCRC1;  /*!< Synchronizing trigger correction value R/W   */
        uint32_t RESERVED2;
        __IO uint32_t COS1;     /*!< Cosine value at THETA for output conversion (Q15 data) R/W */
        __IO uint32_t SIN1;     /*!< Sine value at THETA for output conversion (Q15 data) R/W */
        __IO uint32_t COSM1;    /*!< Previous cosine value for input processing (Q15 data) R/W */
        __IO uint32_t SINM1;    /*!< Previous sine value for input processing (Q15 data) R/W */
        __IO uint32_t SECTOR1;  /*!< Sector information (0-11) R/W                */
        __IO uint32_t SECTORM1; /*!< Previous sector information for input processing (0-11) R/W */
        __IO uint32_t IAO1;     /*!< AD conversion result of a-phase zero-current *4 R/W */
        __IO uint32_t IBO1;     /*!< AD conversion result of b-phase zero-current *4 R/W */
        __IO uint32_t ICO1;     /*!< AD conversion result of c-phase zero-current *4 R/W */
        __IO uint32_t IAADC1;   /*!< AD conversion result of a-phase current *4 R/W */
        __IO uint32_t IBADC1;   /*!< AD conversion result of b-phase current *4 R/W */
        __IO uint32_t ICADC1;   /*!< AD conversion result of c-phase current *4 R/W */
        __IO uint32_t VDC1;     /*!< DC supply voltage (voltage [V] / maximum voltage *3 * 2^15) R/W */
        __IO uint32_t ID1;      /*!< d-axis current (current [A] / maximum current *2 * 2^31) R/W */
        __IO uint32_t IQ1;      /*!< q-axis current (current [A] / maximum current *2 * 2^31) R/W */
        uint32_t RESERVED3;
        __IO uint32_t TADC;     /*!< Common ADC conversion time (based on PWM clock) R */
        uint32_t RESERVED4[8];
        __IO uint32_t VCMPU1;   /*!< PMD control: CMPU setting R/W                */
        __IO uint32_t VCMPV1;   /*!< PMD control: CMPV setting R/W                */
        __IO uint32_t VCMPW1;   /*!< PMD control: CMPW setting R/W                */
        __IO uint32_t OUTCR1;   /*!< PMD control: Output control (MDOUT) R/W      */
        __IO uint32_t VTRGCMP01;        /*!< PMD control: TRGCMP0 setting R/W             */
        __IO uint32_t VTRGCMP11;        /*!< PMD control: TRGCMP1 setting R/W             */
        __IO uint32_t VTRGSEL1; /*!< PMD control: Trigger selection R/W           */
        __IO uint32_t EMGRS1;   /*!< PMD control: EMG return (EMGCR[EMGRS]) W     */
    } TSB_VE_TypeDef;

/**
  * @brief 16-bit Multi-Purpose Timer (MPT-PMD)
  */
    typedef struct {
        __IO uint32_t MDEN;     /*!< PMD Enable Register                          */
        __IO uint32_t PORTMD;   /*!< Port Output Mode Register                    */
        __IO uint32_t MDCR;     /*!< PMD Control Register                         */
        __I uint32_t CNTSTA;    /*!< PWM Counter Status Register                  */
        __I uint32_t MDCNT;     /*!< PWM Counter Register                         */
        __IO uint32_t MDPRD;    /*!< PWM Period Register                          */
        __IO uint32_t CMPU;     /*!< PWM Compare Register                         */
        __IO uint32_t CMPV;     /*!< PWM Compare Register                         */
        __IO uint32_t CMPW;     /*!< PWM Compare Register                         */
        __IO uint32_t MODESEL;  /*!< PWM Mode Select Register                     */
        __IO uint32_t MDOUT;    /*!< PMD Output Control Register                  */
        __IO uint32_t MDPOT;    /*!< PMD Output Setting Register                  */
        __IO uint32_t EMGREL;   /*!< EMG Release Register                         */
        __IO uint32_t EMGCR;    /*!< EMG Control Register                         */
        __I uint32_t EMGSTA;    /*!< EMG Status Register                          */
        __IO uint32_t OVVCR;    /*!< OVV Control Register                         */
        __I uint32_t OVVSTA;    /*!< OVV Status Register                          */
        __IO uint32_t DTR;      /*!< Dead Time Register                           */
        __IO uint32_t TRGCMP0;  /*!< Trigger Compare Register 0                   */
        __IO uint32_t TRGCMP1;  /*!< Trigger Compare Register 1                   */
        __IO uint32_t TRGCMP2;  /*!< Trigger Compare Register 2                   */
        __IO uint32_t TRGCMP3;  /*!< Trigger Compare Register 3                   */
        __IO uint32_t TRGCR;    /*!< Trigger Control Register                     */
        __IO uint32_t TRGMD;    /*!< Trigger Output Mode Setting Register         */
        __IO uint32_t TRGSEL;   /*!< Trigger Output Select Register               */
        __IO uint32_t TRGSYNCR; /*!< TriggerReflashSetting Register               */
    } TSB_PMD_TypeDef;

/**
  * @brief DigitalNoizeFilterClockControl
  */
    typedef struct {
        __IO uint32_t CKCR;     /*!< Clcok Control                                */
        __IO uint32_t ENCR;     /*!< EnableControl                                */
    } TSB_NF_TypeDef;

/**
  * @brief Flash Control (FC)
  */
    typedef struct {
        uint32_t RESERVED0[4];
        __IO uint32_t SECBIT;   /*!< FC Security Bit Register                     */
        uint32_t RESERVED1[2];
        __IO uint32_t CR;       /*!< Flash Interface Control Register             */
        __I uint32_t SR;        /*!< FC Status Register                           */
        uint32_t RESERVED2[3];
        __I uint32_t PSRA;      /*!< Flash Protect status Register                */
    } TSB_FC_TypeDef;


/* Memory map */
#define FLASH_BASE            (0x00000000UL)
#define RAM_BASE              (0x20000000UL)
#define PERI_BASE             (0x40000000UL)


#define TSB_PB_BASE                (PERI_BASE  + 0x0000040UL)
#define TSB_PE_BASE                (PERI_BASE  + 0x0000100UL)
#define TSB_PF_BASE                (PERI_BASE  + 0x0000140UL)
#define TSB_PJ_BASE                (PERI_BASE  + 0x0000240UL)
#define TSB_PK_BASE                (PERI_BASE  + 0x0000280UL)
#define TSB_PM_BASE                (PERI_BASE  + 0x0000300UL)
#define TSB_TB0_BASE               (PERI_BASE  + 0x0010000UL)
#define TSB_TB4_BASE               (PERI_BASE  + 0x0010100UL)
#define TSB_TB5_BASE               (PERI_BASE  + 0x0010140UL)
#define TSB_TB7_BASE               (PERI_BASE  + 0x00101C0UL)
#define TSB_SBI0_BASE              (PERI_BASE  + 0x0020000UL)
#define TSB_SC0_BASE               (PERI_BASE  + 0x0020080UL)
#define TSB_AD_BASE                (PERI_BASE  + 0x0030200UL)
#define TSB_AMP_BASE               (PERI_BASE  + 0x0030400UL)
#define TSB_WD_BASE                (PERI_BASE  + 0x0040000UL)
#define TSB_CG_BASE                (PERI_BASE  + 0x0040200UL)
#define TSB_TRMOSC_BASE            (PERI_BASE  + 0x0040300UL)
#define TSB_OFD_BASE               (PERI_BASE  + 0x0040800UL)
#define TSB_VD_BASE                (PERI_BASE  + 0x0040900UL)
#define TSB_VE_BASE                (PERI_BASE  + 0x0050000UL)
#define TSB_PMD_BASE               (PERI_BASE  + 0x0050480UL)
#define TSB_NF_BASE                (PERI_BASE  + 0x0060000UL)
#define TSB_FC_BASE                (PERI_BASE  + 0x1FFF000UL)


/* Peripheral declaration */
#define TSB_PB                     ((     TSB_PB_TypeDef *)    TSB_PB_BASE)
#define TSB_PE                     ((     TSB_PE_TypeDef *)    TSB_PE_BASE)
#define TSB_PF                     ((     TSB_PF_TypeDef *)    TSB_PF_BASE)
#define TSB_PJ                     ((     TSB_PJ_TypeDef *)    TSB_PJ_BASE)
#define TSB_PK                     ((     TSB_PK_TypeDef *)    TSB_PK_BASE)
#define TSB_PM                     ((     TSB_PM_TypeDef *)    TSB_PM_BASE)
#define TSB_TB0                    ((     TSB_TB_TypeDef *)   TSB_TB0_BASE)
#define TSB_TB4                    ((     TSB_TB_TypeDef *)   TSB_TB4_BASE)
#define TSB_TB5                    ((     TSB_TB_TypeDef *)   TSB_TB5_BASE)
#define TSB_TB7                    ((     TSB_TB_TypeDef *)   TSB_TB7_BASE)
#define TSB_SBI0                   ((    TSB_SBI_TypeDef *)  TSB_SBI0_BASE)
#define TSB_SC0                    ((     TSB_SC_TypeDef *)   TSB_SC0_BASE)
#define TSB_AD                     ((     TSB_AD_TypeDef *)    TSB_AD_BASE)
#define TSB_AMP                    ((    TSB_AMP_TypeDef *)   TSB_AMP_BASE)
#define TSB_WD                     ((     TSB_WD_TypeDef *)    TSB_WD_BASE)
#define TSB_CG                     ((     TSB_CG_TypeDef *)    TSB_CG_BASE)
#define TSB_TRMOSC                 (( TSB_TRMOSC_TypeDef *)TSB_TRMOSC_BASE)
#define TSB_OFD                    ((    TSB_OFD_TypeDef *)   TSB_OFD_BASE)
#define TSB_VD                     ((     TSB_VD_TypeDef *)    TSB_VD_BASE)
#define TSB_VE                     ((     TSB_VE_TypeDef *)    TSB_VE_BASE)
#define TSB_PMD                    ((    TSB_PMD_TypeDef *)   TSB_PMD_BASE)
#define TSB_NF                     ((     TSB_NF_TypeDef *)    TSB_NF_BASE)
#define TSB_FC                     ((     TSB_FC_TypeDef *)    TSB_FC_BASE)


/* Bit-Band for Device Specific Peripheral Registers */
#define BITBAND_OFFSET (0x02000000UL)
#define BITBAND_PERI_BASE (PERI_BASE + BITBAND_OFFSET)
#define BITBAND_PERI(addr, bitnum) (BITBAND_PERI_BASE + (((uint32_t)(addr) - PERI_BASE) << 5) + ((uint32_t)(bitnum) << 2))



/* General Purpose Input/Output Port (PB) */
#define TSB_PB_DATA_PB3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->DATA,3)))
#define TSB_PB_DATA_PB4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->DATA,4)))
#define TSB_PB_CR_PB3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->CR,3)))
#define TSB_PB_CR_PB4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->CR,4)))
#define TSB_PB_FR1_PB3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR1,3)))
#define TSB_PB_FR1_PB4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR1,4)))
#define TSB_PB_FR2_PB3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR2,3)))
#define TSB_PB_FR2_PB4F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR2,4)))
#define TSB_PB_FR4_PB3F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR4,3)))
#define TSB_PB_FR4_PB4F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR4,4)))
#define TSB_PB_OD_PB3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,3)))
#define TSB_PB_OD_PB4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,4)))
#define TSB_PB_PUP_PB3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,3)))
#define TSB_PB_PUP_PB4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,4)))
#define TSB_PB_PDN_PB3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PDN,3)))
#define TSB_PB_PDN_PB4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PDN,4)))
#define TSB_PB_IE_PB3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,3)))
#define TSB_PB_IE_PB4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,4)))


/* General Purpose Input/Output Port (PE) */
#define TSB_PE_DATA_PE0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,0)))
#define TSB_PE_DATA_PE1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,1)))
#define TSB_PE_DATA_PE2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,2)))
#define TSB_PE_CR_PE0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,0)))
#define TSB_PE_CR_PE1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,1)))
#define TSB_PE_CR_PE2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,2)))
#define TSB_PE_FR1_PE0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,0)))
#define TSB_PE_FR1_PE1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,1)))
#define TSB_PE_FR1_PE2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,2)))
#define TSB_PE_FR2_PE0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR2,0)))
#define TSB_PE_FR2_PE1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR2,1)))
#define TSB_PE_FR2_PE2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR2,2)))
#define TSB_PE_FR4_PE0F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR4,0)))
#define TSB_PE_FR4_PE2F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR4,2)))
#define TSB_PE_FR5_PE0F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR5,0)))
#define TSB_PE_FR6_PE2F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR6,2)))
#define TSB_PE_OD_PE0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->OD,0)))
#define TSB_PE_OD_PE1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->OD,1)))
#define TSB_PE_OD_PE2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->OD,2)))
#define TSB_PE_PUP_PE0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PUP,0)))
#define TSB_PE_PUP_PE1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PUP,1)))
#define TSB_PE_PUP_PE2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PUP,2)))
#define TSB_PE_PDN_PE0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PDN,0)))
#define TSB_PE_PDN_PE1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PDN,1)))
#define TSB_PE_PDN_PE2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PDN,2)))
#define TSB_PE_IE_PE0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,0)))
#define TSB_PE_IE_PE1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,1)))
#define TSB_PE_IE_PE2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,2)))


/* General Purpose Input/Output Port (PF) */
#define TSB_PF_DATA_PF0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->DATA,0)))
#define TSB_PF_CR_PF0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->CR,0)))
#define TSB_PF_FR1_PF0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR1,0)))
#define TSB_PF_FR2_PF0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR2,0)))
#define TSB_PF_FR4_PF0F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR4,1)))
#define TSB_PF_OD_PF0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->OD,0)))
#define TSB_PF_PUP_PF0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PUP,0)))
#define TSB_PF_PDN_PF0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PDN,0)))
#define TSB_PF_IE_PF0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->IE,0)))


/* General Purpose Input/Output Port (PJ) */
#define TSB_PJ_DATA_PJ5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,5)))
#define TSB_PJ_DATA_PJ6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,6)))
#define TSB_PJ_DATA_PJ7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,7)))
#define TSB_PJ_CR_PJ5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->CR,5)))
#define TSB_PJ_CR_PJ6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->CR,6)))
#define TSB_PJ_CR_PJ7C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->CR,7)))
#define TSB_PJ_OD_PJ5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->OD,5)))
#define TSB_PJ_OD_PJ6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->OD,6)))
#define TSB_PJ_OD_PJ7OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->OD,7)))
#define TSB_PJ_PUP_PJ5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,5)))
#define TSB_PJ_PUP_PJ6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,6)))
#define TSB_PJ_PUP_PJ7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,7)))
#define TSB_PJ_PDN_PJ5DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PDN,5)))
#define TSB_PJ_PDN_PJ6DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PDN,6)))
#define TSB_PJ_PDN_PJ7DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PDN,7)))
#define TSB_PJ_IE_PJ5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->IE,5)))
#define TSB_PJ_IE_PJ6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->IE,6)))
#define TSB_PJ_IE_PJ7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->IE,7)))


/* General Purpose Input/Output Port (PK) */
#define TSB_PK_DATA_PK0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,0)))
#define TSB_PK_DATA_PK1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,1)))
#define TSB_PK_CR_PK0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->CR,0)))
#define TSB_PK_CR_PK1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->CR,1)))
#define TSB_PK_OD_PK0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->OD,0)))
#define TSB_PK_OD_PK1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->OD,1)))
#define TSB_PK_PUP_PK0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,0)))
#define TSB_PK_PUP_PK1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,1)))
#define TSB_PK_PDN_PK0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PDN,0)))
#define TSB_PK_PDN_PK1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PDN,1)))
#define TSB_PK_IE_PK0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->IE,0)))
#define TSB_PK_IE_PK1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->IE,1)))


/* General Purpose Input/Output Port (PM) */
#define TSB_PM_DATA_PM0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->DATA,0)))
#define TSB_PM_DATA_PM1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->DATA,1)))
#define TSB_PM_CR_PM0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->CR,0)))
#define TSB_PM_CR_PM1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->CR,1)))
#define TSB_PM_OD_PM0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->OD,0)))
#define TSB_PM_OD_PM1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->OD,1)))
#define TSB_PM_PUP_PM0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PUP,0)))
#define TSB_PM_PUP_PM1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PUP,1)))
#define TSB_PM_PDN_PM0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PDN,0)))
#define TSB_PM_PDN_PM1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PDN,1)))
#define TSB_PM_IE_PM0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->IE,0)))
#define TSB_PM_IE_PM1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->IE,1)))


/* 16-bit Timer/Event Counter (TB) */
#define TSB_TB0_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->EN,6)))
#define TSB_TB0_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->EN,7)))
#define TSB_TB0_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->RUN,0)))
#define TSB_TB0_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->RUN,2)))
#define TSB_TB0_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,0)))
#define TSB_TB0_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,1)))
#define TSB_TB0_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,3)))
#define TSB_TB0_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,7)))
#define TSB_TB0_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->MOD,3)))
#define TSB_TB0_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB0->MOD,6)))
#define TSB_TB0_MOD_TBRSWR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->MOD,7)))
#define TSB_TB0_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->FFCR,2)))
#define TSB_TB0_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->FFCR,3)))
#define TSB_TB0_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->FFCR,4)))
#define TSB_TB0_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->FFCR,5)))
#define TSB_TB0_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->IM,0)))
#define TSB_TB0_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->IM,1)))
#define TSB_TB0_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->IM,2)))

#define TSB_TB4_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->EN,6)))
#define TSB_TB4_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->EN,7)))
#define TSB_TB4_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->RUN,0)))
#define TSB_TB4_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->RUN,2)))
#define TSB_TB4_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,0)))
#define TSB_TB4_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,1)))
#define TSB_TB4_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,3)))
#define TSB_TB4_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,7)))
#define TSB_TB4_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->MOD,3)))
#define TSB_TB4_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB4->MOD,6)))
#define TSB_TB4_MOD_TBRSWR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->MOD,7)))
#define TSB_TB4_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->FFCR,2)))
#define TSB_TB4_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->FFCR,3)))
#define TSB_TB4_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->FFCR,4)))
#define TSB_TB4_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->FFCR,5)))
#define TSB_TB4_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->IM,0)))
#define TSB_TB4_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->IM,1)))
#define TSB_TB4_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->IM,2)))

#define TSB_TB5_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->EN,6)))
#define TSB_TB5_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->EN,7)))
#define TSB_TB5_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->RUN,0)))
#define TSB_TB5_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->RUN,2)))
#define TSB_TB5_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,0)))
#define TSB_TB5_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,1)))
#define TSB_TB5_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,3)))
#define TSB_TB5_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,7)))
#define TSB_TB5_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->MOD,3)))
#define TSB_TB5_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB5->MOD,6)))
#define TSB_TB5_MOD_TBRSWR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->MOD,7)))
#define TSB_TB5_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->FFCR,2)))
#define TSB_TB5_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->FFCR,3)))
#define TSB_TB5_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->FFCR,4)))
#define TSB_TB5_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->FFCR,5)))
#define TSB_TB5_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->IM,0)))
#define TSB_TB5_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->IM,1)))
#define TSB_TB5_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->IM,2)))

#define TSB_TB7_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->EN,6)))
#define TSB_TB7_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->EN,7)))
#define TSB_TB7_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->RUN,0)))
#define TSB_TB7_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->RUN,2)))
#define TSB_TB7_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,0)))
#define TSB_TB7_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,1)))
#define TSB_TB7_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,3)))
#define TSB_TB7_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,7)))
#define TSB_TB7_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->MOD,3)))
#define TSB_TB7_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB7->MOD,6)))
#define TSB_TB7_MOD_TBRSWR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->MOD,7)))
#define TSB_TB7_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->FFCR,2)))
#define TSB_TB7_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->FFCR,3)))
#define TSB_TB7_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->FFCR,4)))
#define TSB_TB7_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->FFCR,5)))
#define TSB_TB7_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->IM,0)))
#define TSB_TB7_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->IM,1)))
#define TSB_TB7_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->IM,2)))


/* Serial BusInterface(SBI) */
#define TSB_SBI0_CR0_SBIEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI0->CR0,7)))
#define TSB_SBI0_CR1_SWRMON                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->CR1,0)))
#define TSB_SBI0_CR1_ACK                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI0->CR1,4)))
#define TSB_SBI0_CR1_SIOINH                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI0->CR1,6)))
#define TSB_SBI0_CR1_SIOS                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI0->CR1,7)))
#define TSB_SBI0_I2CAR_ALS                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI0->I2CAR,0)))
#define TSB_SBI0_CR2_PIN                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SBI0->CR2,4)))
#define TSB_SBI0_CR2_BB                           (*((__O  uint32_t *)BITBAND_PERI(&TSB_SBI0->CR2,5)))
#define TSB_SBI0_CR2_TRX                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SBI0->CR2,6)))
#define TSB_SBI0_CR2_MST                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SBI0->CR2,7)))
#define TSB_SBI0_SR_LRB                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->SR,0)))
#define TSB_SBI0_SR_ADO                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->SR,1)))
#define TSB_SBI0_SR_AAS                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->SR,2)))
#define TSB_SBI0_SR_AL                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->SR,3)))
#define TSB_SBI0_SR_PIN                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->SR,4)))
#define TSB_SBI0_SR_BB                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->SR,5)))
#define TSB_SBI0_SR_TRX                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->SR,6)))
#define TSB_SBI0_SR_MST                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->SR,7)))
#define TSB_SBI0_SR_SEF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->SR,2)))
#define TSB_SBI0_SR_SIOF                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->SR,3)))
#define TSB_SBI0_BR0_I2SBI                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI0->BR0,6)))


/* Serial Channel (SC) */
#define TSB_SC0_EN_SIOE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->EN,0)))
#define TSB_SC0_EN_BRCKSEL                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->EN,1)))
#define TSB_SC0_CR_TXDEMP                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->CR,10)))
#define TSB_SC0_MOD0_WU                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->MOD0,4)))
#define TSB_SC0_MOD0_RXE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->MOD0,5)))
#define TSB_SC0_MOD0_CTSE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->MOD0,6)))
#define TSB_SC0_MOD0_TB8                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->MOD0,7)))
#define TSB_SC0_BRCR_BRADDE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->BRCR,6)))
#define TSB_SC0_MOD1_TXE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->MOD1,4)))
#define TSB_SC0_MOD1_I2S0                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->MOD1,7)))
#define TSB_SC0_MOD2_WBUF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->MOD2,2)))
#define TSB_SC0_MOD2_DRCHG                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->MOD2,3)))
#define TSB_SC0_MOD2_SBLEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->MOD2,4)))
#define TSB_SC0_MOD2_TXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC0->MOD2,5)))
#define TSB_SC0_MOD2_RBFLL                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC0->MOD2,6)))
#define TSB_SC0_MOD2_TBEMP                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC0->MOD2,7)))
#define TSB_SC0_RFC_RFIS                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->RFC,6)))
#define TSB_SC0_RFC_RFCS                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SC0->RFC,7)))
#define TSB_SC0_TFC_TFIS                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->TFC,6)))
#define TSB_SC0_TFC_TFCS                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SC0->TFC,7)))
#define TSB_SC0_TFC_TBCLR                         (*((__O  uint32_t *)BITBAND_PERI(&TSB_SC0->TFC,8)))
#define TSB_SC0_RST_ROR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC0->RST,7)))
#define TSB_SC0_TST_TUR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC0->TST,7)))
#define TSB_SC0_FCNF_CNFG                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->FCNF,0)))
#define TSB_SC0_FCNF_RXTXCNT                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->FCNF,1)))
#define TSB_SC0_FCNF_RFIE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->FCNF,2)))
#define TSB_SC0_FCNF_TFIE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->FCNF,3)))
#define TSB_SC0_FCNF_RFST                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->FCNF,4)))


/* Analog-to-Digital Converter (AD) */
#define TSB_AD_MOD0_ADSS                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_AD->MOD0,0)))
#define TSB_AD_MOD1_ADAS                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD1,0)))
#define TSB_AD_MOD1_ADEN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD1,7)))
#define TSB_AD_MOD2_ADBFN                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->MOD2,0)))
#define TSB_AD_MOD2_ADSFN                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->MOD2,1)))
#define TSB_AD_CMPCR0_ADBIG0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->CMPCR0,4)))
#define TSB_AD_CMPCR0_CMP0EN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->CMPCR0,7)))
#define TSB_AD_CMPCR1_ADBIG1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->CMPCR1,4)))
#define TSB_AD_CMPCR1_CMP1EN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->CMPCR1,7)))
#define TSB_AD_PSEL6_PENS6                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSEL6,7)))
#define TSB_AD_PSEL7_PENS7                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSEL7,7)))
#define TSB_AD_PSEL8_PENS8                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSEL8,7)))
#define TSB_AD_PSEL9_PENS9                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSEL9,7)))
#define TSB_AD_PSEL10_PENS10                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSEL10,7)))
#define TSB_AD_PSEL11_PENS11                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSEL11,7)))
#define TSB_AD_PSET0_ENSP00                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET0,7)))
#define TSB_AD_PSET0_ENSP01                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET0,15)))
#define TSB_AD_PSET0_ENSP02                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET0,23)))
#define TSB_AD_PSET0_ENSP03                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET0,31)))
#define TSB_AD_PSET1_ENSP10                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET1,7)))
#define TSB_AD_PSET1_ENSP11                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET1,15)))
#define TSB_AD_PSET1_ENSP12                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET1,23)))
#define TSB_AD_PSET1_ENSP13                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET1,31)))
#define TSB_AD_PSET2_ENSP20                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET2,7)))
#define TSB_AD_PSET2_ENSP21                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET2,15)))
#define TSB_AD_PSET2_ENSP22                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET2,23)))
#define TSB_AD_PSET2_ENSP23                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET2,31)))
#define TSB_AD_PSET3_ENSP30                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET3,7)))
#define TSB_AD_PSET3_ENSP31                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET3,15)))
#define TSB_AD_PSET3_ENSP32                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET3,23)))
#define TSB_AD_PSET3_ENSP33                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET3,31)))
#define TSB_AD_PSET4_ENSP40                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET4,7)))
#define TSB_AD_PSET4_ENSP41                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET4,15)))
#define TSB_AD_PSET4_ENSP42                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET4,23)))
#define TSB_AD_PSET4_ENSP43                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET4,31)))
#define TSB_AD_PSET5_ENSP50                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET5,7)))
#define TSB_AD_PSET5_ENSP51                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET5,15)))
#define TSB_AD_PSET5_ENSP52                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET5,23)))
#define TSB_AD_PSET5_ENSP53                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->PSET5,31)))
#define TSB_AD_TSET03_ENST0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->TSET03,7)))
#define TSB_AD_TSET03_ENST1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->TSET03,15)))
#define TSB_AD_TSET03_ENST2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->TSET03,23)))
#define TSB_AD_TSET03_ENST3                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->TSET03,31)))
#define TSB_AD_TSET47_ENST4                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->TSET47,7)))
#define TSB_AD_TSET47_ENST5                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->TSET47,15)))
#define TSB_AD_TSET47_ENST6                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->TSET47,23)))
#define TSB_AD_TSET47_ENST7                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->TSET47,31)))
#define TSB_AD_TSET811_ENST8                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->TSET811,7)))
#define TSB_AD_TSET811_ENST9                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->TSET811,15)))
#define TSB_AD_TSET811_ENST10                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->TSET811,23)))
#define TSB_AD_TSET811_ENST11                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->TSET811,31)))
#define TSB_AD_SSET03_ENSS0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->SSET03,7)))
#define TSB_AD_SSET03_ENSS1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->SSET03,15)))
#define TSB_AD_SSET03_ENSS2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->SSET03,23)))
#define TSB_AD_SSET03_ENSS3                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->SSET03,31)))
#define TSB_AD_SSET47_ENSS4                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->SSET47,7)))
#define TSB_AD_SSET47_ENSS5                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->SSET47,15)))
#define TSB_AD_SSET47_ENSS6                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->SSET47,23)))
#define TSB_AD_SSET47_ENSS7                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->SSET47,31)))
#define TSB_AD_SSET811_ENSS8                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->SSET811,7)))
#define TSB_AD_SSET811_ENSS9                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->SSET811,15)))
#define TSB_AD_SSET811_ENSS10                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->SSET811,23)))
#define TSB_AD_SSET811_ENSS11                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->SSET811,31)))
#define TSB_AD_ASET03_ENSA0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->ASET03,7)))
#define TSB_AD_ASET03_ENSA1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->ASET03,15)))
#define TSB_AD_ASET03_ENSA2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->ASET03,23)))
#define TSB_AD_ASET03_ENSA3                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->ASET03,31)))
#define TSB_AD_ASET47_ENSA4                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->ASET47,7)))
#define TSB_AD_ASET47_ENSA5                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->ASET47,15)))
#define TSB_AD_ASET47_ENSA6                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->ASET47,23)))
#define TSB_AD_ASET47_ENSA7                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->ASET47,31)))
#define TSB_AD_ASET811_ENSA8                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->ASET811,7)))
#define TSB_AD_ASET811_ENSA9                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->ASET811,15)))
#define TSB_AD_ASET811_ENSA10                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->ASET811,23)))
#define TSB_AD_ASET811_ENSA11                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->ASET811,31)))
#define TSB_AD_MOD3_RCUT                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD3,8)))


/* Ope-AMP control  */
#define TSB_AMP_CTLD_AMPEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_AMP->CTLD,0)))


/* Watchdog Timer (WD) */
#define TSB_WD_MOD_RESCR                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_WD->MOD,1)))
#define TSB_WD_MOD_I2WDT                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_WD->MOD,2)))
#define TSB_WD_MOD_WDTE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_WD->MOD,7)))


/* Clock Generator (CG) */
#define TSB_CG_SYSCR_FPSEL                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->SYSCR,12)))
#define TSB_CG_OSCCR_WUEON                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,0)))
#define TSB_CG_OSCCR_WUEF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,1)))
#define TSB_CG_OSCCR_PLLON                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,2)))
#define TSB_CG_OSCCR_WUPSEL1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,3)))
#define TSB_CG_OSCCR_XEN1                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,8)))
#define TSB_CG_OSCCR_XEN2                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,16)))
#define TSB_CG_OSCCR_OSCSEL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,17)))
#define TSB_CG_OSCCR_HOSCON                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,18)))
#define TSB_CG_OSCCR_WUPSEL2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,19)))
#define TSB_CG_STBYCR_RXEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->STBYCR,8)))
#define TSB_CG_STBYCR_DRVE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->STBYCR,16)))
#define TSB_CG_PLLSEL_PLLSEL                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->PLLSEL,0)))
#define TSB_CG_RSTFLG_PONRSTF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->RSTFLG,0)))
#define TSB_CG_RSTFLG_PINRSTF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->RSTFLG,1)))
#define TSB_CG_RSTFLG_WDTRSTF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->RSTFLG,2)))
#define TSB_CG_RSTFLG_VLTDRSTF                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->RSTFLG,3)))
#define TSB_CG_RSTFLG_DBGRSTF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->RSTFLG,4)))
#define TSB_CG_RSTFLG_OFDRSTF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->RSTFLG,5)))
#define TSB_CG_IMCGA_INT0EN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGA,0)))
#define TSB_CG_IMCGA_INT1EN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGA,8)))
#define TSB_CG_IMCGA_INT2EN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGA,16)))


/* Internal High-speed Oscillation Adjustment */
#define TSB_TRMOSC_EN_TRIMEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TRMOSC->EN,0)))



/* Low Voltage Detection Circuit */
#define TSB_VD_CR_VDEN                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_VD->CR,0)))


/* Vector Engine (VE) */
#define TSB_VE_EN_VEEN                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->EN,0)))
#define TSB_VE_EN_VEIDLEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->EN,1)))
#define TSB_VE_ERRINTEN_VERRENB                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->ERRINTEN,1)))
#define TSB_VE_SCHTASKRUN_VRSCHB                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_VE->SCHTASKRUN,5)))
#define TSB_VE_MCTLF1_LAVF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->MCTLF1,0)))
#define TSB_VE_MCTLF1_LAVFM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->MCTLF1,1)))
#define TSB_VE_MCTLF1_LVTF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->MCTLF1,2)))
#define TSB_VE_MCTLF1_PLSLF                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->MCTLF1,4)))
#define TSB_VE_MCTLF1_PLSLFM                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->MCTLF1,5)))
#define TSB_VE_MODE1_PVIEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->MODE1,0)))
#define TSB_VE_MODE1_ZIEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->MODE1,1)))
#define TSB_VE_MODE1_VDCSEL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->MODE1,4)))
#define TSB_VE_MODE1_T4ATANEN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->MODE1,6)))
#define TSB_VE_MODE1_T7SQRTEN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->MODE1,7)))
#define TSB_VE_FMODE1_C2PEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->FMODE1,0)))
#define TSB_VE_FMODE1_SPWMEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->FMODE1,1)))
#define TSB_VE_FMODE1_IDPLMD                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->FMODE1,5)))
#define TSB_VE_FMODE1_CRCEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->FMODE1,8)))
#define TSB_VE_FMODE1_MREGDIS                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->FMODE1,9)))
#define TSB_VE_FMODE1_PIGSEL                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->FMODE1,11)))
#define TSB_VE_FMODE1_PHCVDIS                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->FMODE1,12)))
#define TSB_VE_OUTCR1_UPWM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->OUTCR1,6)))
#define TSB_VE_OUTCR1_VPWM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->OUTCR1,7)))
#define TSB_VE_OUTCR1_WPWM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE->OUTCR1,8)))
#define TSB_VE_EMGRS1_EMGRS                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_VE->EMGRS1,0)))


/* 16-bit Multi-Purpose Timer (MPT-PMD) */
#define TSB_PMD_MDEN_PWMEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->MDEN,0)))
#define TSB_PMD_MDCR_PWMMD                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->MDCR,0)))
#define TSB_PMD_MDCR_PINT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->MDCR,3)))
#define TSB_PMD_MDCR_DTYMD                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->MDCR,4)))
#define TSB_PMD_MDCR_SYNTMD                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->MDCR,5)))
#define TSB_PMD_MDCR_PWMCK                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->MDCR,6)))
#define TSB_PMD_MDCR_DTCREN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->MDCR,7)))
#define TSB_PMD_CNTSTA_UPDWN                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD->CNTSTA,0)))
#define TSB_PMD_MODESEL_MDSEL0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->MODESEL,0)))
#define TSB_PMD_MODESEL_MDSEL1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->MODESEL,1)))
#define TSB_PMD_MODESEL_MDSEL2                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->MODESEL,2)))
#define TSB_PMD_MODESEL_MDSEL3                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->MODESEL,3)))
#define TSB_PMD_MODESEL_DCMPEN                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->MODESEL,7)))
#define TSB_PMD_MDOUT_UPWM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->MDOUT,8)))
#define TSB_PMD_MDOUT_VPWM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->MDOUT,9)))
#define TSB_PMD_MDOUT_WPWM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->MDOUT,10)))
#define TSB_PMD_MDPOT_POLL                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->MDPOT,2)))
#define TSB_PMD_MDPOT_POLH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->MDPOT,3)))
#define TSB_PMD_EMGCR_EMGEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->EMGCR,0)))
#define TSB_PMD_EMGCR_EMGRS                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_PMD->EMGCR,1)))
#define TSB_PMD_EMGCR_INHEN                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_PMD->EMGCR,5)))
#define TSB_PMD_EMGSTA_EMGST                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD->EMGSTA,0)))
#define TSB_PMD_EMGSTA_EMGI                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD->EMGSTA,1)))
#define TSB_PMD_OVVCR_OVVEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->OVVCR,0)))
#define TSB_PMD_OVVCR_OVVRS                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->OVVCR,1)))
#define TSB_PMD_OVVCR_OVVISEL                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->OVVCR,2)))
#define TSB_PMD_OVVCR_ADIN0EN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->OVVCR,5)))
#define TSB_PMD_OVVCR_ADIN1EN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->OVVCR,6)))
#define TSB_PMD_OVVSTA_OVVST                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD->OVVSTA,0)))
#define TSB_PMD_OVVSTA_OVVI                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD->OVVSTA,1)))
#define TSB_PMD_TRGCR_TRG0BE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->TRGCR,3)))
#define TSB_PMD_TRGCR_TRG1BE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->TRGCR,7)))
#define TSB_PMD_TRGCR_TRG2BE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->TRGCR,11)))
#define TSB_PMD_TRGCR_TRG3BE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->TRGCR,15)))
#define TSB_PMD_TRGMD_EMGTGE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->TRGMD,0)))
#define TSB_PMD_TRGMD_TRGOUT                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD->TRGMD,1)))


/* DigitalNoizeFilterClockControl */
#define TSB_NF_ENCR_NFEN0                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_NF->ENCR,0)))
#define TSB_NF_ENCR_NFEN1                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_NF->ENCR,1)))
#define TSB_NF_ENCR_NFEN2                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_NF->ENCR,2)))

    /** @} *//* End of group Device_Peripheral_registers */

#ifdef __cplusplus
}
#endif

#endif  /* __TMPM37A_H__ */

/** @} *//* End of group TMPM37A */
/** @} *//* End of group TOSHIBA_TX03_MICROCONTROLLER */
