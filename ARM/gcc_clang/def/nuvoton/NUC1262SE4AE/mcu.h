/**************************************************************************//**
 * @file     NUC1262.h
 * @version  V3.0
 * @brief    NUC1262 Series Peripheral Access Layer Header File
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2021 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/

/**
  \mainpage Introduction
  *
  *
  * This user manual describes the usage of NUC1262 MCU device driver
  *
  * <b>Disclaimer</b>
  *
  * The Software is furnished "AS IS", without warranty as to performance or results, and
  * the entire risk as to performance or results is assumed by YOU. Nuvoton disclaims all
  * warranties, express, implied or otherwise, with regard to the Software, its use, or
  * operation, including without limitation any and all warranties of merchantability, fitness
  * for a particular purpose, and non-infringement of intellectual property rights.
  *
  * <b>Copyright Notice</b>
  *
  * Copyright (C) 2021~2023 Nuvoton Technology Corp. All rights reserved.
  */

#ifndef __NUC1262_H__
#define __NUC1262_H__


/*
 * ==========================================================================
 * ---------- Interrupt Number Definition -----------------------------------
 * ==========================================================================
 */

/**
 * @details  Interrupt Number Definition. The maximum of 32 Specific Interrupts are possible.
 */
typedef enum IRQn
{
    /******  Cortex-M0 Processor Exceptions Numbers ***************************************************/
    NonMaskableInt_IRQn       = -14,      /*!< 2 Non Maskable Interrupt                             */
    HardFault_IRQn            = -13,      /*!< 3 Cortex-M23 Hard Fault Interrupt                    */
    SVCall_IRQn               = -5,       /*!< 11 Cortex-M23 SV Call Interrupt                      */
    PendSV_IRQn               = -2,       /*!< 14 Cortex-M23 Pend SV Interrupt                      */
    SysTick_IRQn              = -1,       /*!< 15 Cortex-M23 System Tick Interrupt                  */

    /******  ARMIKMCU Swift specific Interrupt Numbers ************************************************/
    BOD_IRQn                  = 0,        /*!< Brown-Out Low Voltage Detected Interrupt             */
    WDT_IRQn                  = 1,        /*!< Watch Dog Timer Interrupt                            */
    EINT024_IRQn              = 2,        /*!< EINT0, EINT2 and EINT4 Interrupt                     */
    EINT135_IRQn              = 3,        /*!< EINT1, EINT3 and EINT5 Interrupt                     */
    GPAB_IRQn                 = 4,        /*!< GPIO_PA/PB Interrupt                                 */
    GPCDF_IRQn                = 5,        /*!< GPIO_PC/PD/PF Interrupt                              */
    BPWM0_IRQn                = 6,        /*!< BPWM0 Interrupt                                      */
    BPWM1_IRQn                = 7,        /*!< BPWM1 Interrupt                                      */
    TMR0_IRQn                 = 8,        /*!< TIMER0 Interrupt                                     */
    TMR1_IRQn                 = 9,        /*!< TIMER1 Interrupt                                     */
    TMR2_IRQn                 = 10,       /*!< TIMER2 Interrupt                                     */
    TMR3_IRQn                 = 11,       /*!< TIMER3 Interrupt                                     */
    UART0_IRQn                = 12,       /*!< UART0 Interrupt                                      */
    UART1_IRQn                = 13,       /*!< UART1 Interrupt                                      */
    SPI0_IRQn                 = 14,       /*!< SPI0 Interrupt                                       */
    SPI1_IRQn                 = 15,       /*!< SPI1 Interrupt                                       */
    BPWM2_IRQn                = 16,       /*!< BPWM2 Interrupt                                      */
    BPWM3_IRQn                = 17,       /*!< BPWM3 Interrupt                                      */
    I2C0_IRQn                 = 18,       /*!< I2C0 Interrupt                                       */
    I2C1_IRQn                 = 19,       /*!< I2C1 Interrupt                                       */
    USBD_IRQn                 = 23,       /*!< USB Device Interrupt                                 */
    PDMA_IRQn                 = 26,       /*!< PDMA Interrupt                                       */
    PWRWU_IRQn                = 28,       /*!< Power Down Wake Up Interrupt                         */
    ADC_IRQn                  = 29,       /*!< ADC Interrupt                                        */
    CLKDIRC_IRQn              = 30,       /*!< Clock fail detect and IRC TRIM Interrupt             */
    LLSI0_IRQn                = 32,       /*!< LLSI0 Interrupt                                      */
    LLSI1_IRQn                = 33,       /*!< LLSI1 Interrupt                                      */
    LLSI2_IRQn                = 34,       /*!< LLSI2 Interrupt                                      */
    LLSI3_IRQn                = 35,       /*!< LLSI3 Interrupt                                      */
    LLSI4_IRQn                = 36,       /*!< LLSI4 Interrupt                                      */
    LLSI5_IRQn                = 37,       /*!< LLSI5 Interrupt                                      */
    LLSI6_IRQn                = 38,       /*!< LLSI6 Interrupt                                      */
    LLSI7_IRQn                = 39,       /*!< LLSI7 Interrupt                                      */
    LLSI8_IRQn                = 40,       /*!< LLSI8 Interrupt                                      */
    LLSI9_IRQn                = 41        /*!< LLSI9 Interrupt                                      */

} IRQn_Type;


/*
 * ==========================================================================
 * ----------- Processor and Core Peripheral Section ------------------------
 * ==========================================================================
 */

/* Configuration of the Cortex-M0 Processor and Core Peripherals */
#define __MPU_PRESENT           0       /*!< armikcmu does not provide a MPU present or not       */
#define __NVIC_PRIO_BITS        2       /*!< armikcmu Supports 2 Bits for the Priority Levels     */
#define __Vendor_SysTickConfig  0       /*!< Set to 1 if different SysTick Config is used         */
#define __FPU_PRESENT           0
#ifndef __SOFTFP__
# define __SOFTFP__             1
#endif

#include "core_cm23.h"                  /*!< Cortex-M23 processor and core peripherals            */
// Note: Changed for MikroE implementation.
// #include "system_NUC1262.h"             /*!< NUC1262 System                                       */
#include <stdint.h>

#define __I volatile // Note: Added for MikroE implementation.
#define __O __I // Note: Added for MikroE implementation.
#define __IO __I // Note: Added for MikroE implementation.
#include <stdint.h>

#define __I volatile // Note: Added for MikroE implementation.
#define __O __I // Note: Added for MikroE implementation.
#define __IO __I // Note: Added for MikroE implementation.


#if defined ( __CC_ARM   )
#pragma anon_unions
#endif


/**
 * Initialize the system clock
 *
 * @param  None
 * @return None
 *
 * @brief  Setup the microcontroller system
 *         Initialize the PLL and up2025-07-16 the SystemFrequency variable
 */
extern void SystemInit(void);



/******************************************************************************/
/*                Device Specific Peripheral registers structures             */
/******************************************************************************/

/** @addtogroup REGISTER Control Register

    @{
*/


/*---------------------- Analog to Digital Converter -------------------------*/
/**
    @addtogroup ADC Analog to Digital Converter(ADC)
    Memory Mapped Structure for ADC Controller
    @{
*/

typedef struct
{


    /**
     * @var ADC_T::ADDR
     * Offset: 0x00~0x1C, 0x74~0x78  ADC Data Register 0~7, 29~30
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |RSLT      |A/D Conversion Result (Read Only)
     * |        |          |This field contains conversion result of ADC.
     * |[16]    |OVERRUN   |Overrun Flag (Read Only)
     * |        |          |If converted data in RSLT bits has not been read before new conversion result is loaded to this register, OVERRUN bit is set to 1.
     * |        |          |It is cleared by hardware after ADDR register is read.
     * |        |          |0 = Data in RSLT bits is not overwrote.
     * |        |          |1 = Data in RSLT bits is overwrote..
     * |[17]    |VALID     |Valid Flag (Read Only)
     * |        |          |This bit will be set to 1 when the conversion of the corresponding channel is completed.
     * |        |          |This bit will be cleared to 0 by hardware after ADC_ADDR register is read.
     * |        |          |0 = Data in RSLT bits is not valid.
     * |        |          |1 = Data in RSLT bits is valid.
     * @var ADC_T::ADCR
     * Offset: 0x80  ADC Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ADEN      |A/D Converter Enable
     * |        |          |0 = A/D converter Disabled.
     * |        |          |1 = A/D converter Enabled.
     * |        |          |Note: Before starting A/D conversion function, this bit should be set to 1.
     * |        |          |Clear it to 0 to disable A/D converter analog circuit to save power consumption.
     * |[1]     |ADIE      |A/D Interrupt Enable Control
     * |        |          |A/D conversion end interrupt request is generated if ADIE bit is set to 1.
     * |        |          |0 = A/D interrupt function Disabled.
     * |        |          |1 = A/D interrupt function Enabled.
     * |[3:2]   |ADMD      |A/D Converter Operation Mode Control
     * |        |          |00 = Single conversion.
     * |        |          |01 = Burst conversion.
     * |        |          |10 = Single-cycle Scan.
     * |        |          |11 = Continuous Scan.
     * |        |          |Note1: When changing the operation mode, software should clear ADST bit first.
     * |        |          |Note2: In Burst mode, the A/D result data is always at ADC Data Register 0.
     * |[5:4]   |TRGS      |Hardware Trigger Source
     * |        |          |00 = A/D conversion is started by external STADC pin.
     * |        |          |01 = Timer0 ~ Timer3 overflow pulse trigger.
     * |        |          |10 = Reserved.
     * |        |          |11 = A/D conversion is started by BPWM trigger.
     * |        |          |Note: Software should clear TRGEN bit and ADST bit to 0 before changing TRGS bits.
     * |[7:6]   |TRGCOND   |External Trigger Condition
     * |        |          |These two bits decide external pin STADC trigger event is level or edge.
     * |        |          |The signal must be kept at stable state at least 8 PCLKs for level trigger and at least 4 PCLKs for edge trigger.
     * |        |          |00 = Low level.
     * |        |          |01 = High level.
     * |        |          |10 = Falling edge.
     * |        |          |11 = Rising edge.
     * |[8]     |TRGEN     |External Trigger Enable Control
     * |        |          |Enable or disable triggering of A/D conversion by external STADC pin, PWM trigger and Timer trigger.
     * |        |          |If external trigger is enabled, the ADST bit can be set to 1 by the selected hardware trigger source.
     * |        |          |0 = External trigger Disabled.
     * |        |          |1 = External trigger Enabled.
     * |        |          |Note: The ADC external trigger function is only supported in Single-cycle Scan mode.
     * |[9]     |PTEN      |PDMA Transfer Enable Bit
     * |        |          |When A/D conversion is completed, the converted data is loaded into ADDR0~7, ADDR29~ADDR30.
     * |        |          |Software can enable this bit to generate a PDMA data transfer request.
     * |        |          |0 = PDMA data transfer Disabled.
     * |        |          |1 = PDMA data transfer in ADDR0~7, ADDR29~ADDR30 Enabled.
     * |        |          |Note: When PTEN=1, software must set ADIE=0 to disable interrupt.
     * |[10]    |DIFFEN    |Differential Input Mode Control
     * |        |          |0 = Single-end analog input mode.
     * |        |          |1 = Differential analog input mode.
     * |        |          |Differential input voltage (Vdiff) = Vplus - Vminus,
     * |        |          |where Vplus is the analog input; Vminus is the inverted analog input.
     * |        |          |The Vplus of differential input paired channel x is from ADC0_CHy pin; Vminus is from ADC0_CHz pin, x=0,1..3, y=2*x, z=y+1.
     * |        |          |0 = Single-end analog input mode.
     * |        |          |1 = Differential analog input mode.
     * |        |          |Note: In Differential Input mode, only the even number of the two corresponding channels needs to be enabled in ADCHER register
     * |        |          |The conversion result will be placed to the corresponding data register of the enabled channel.
     * |[11]    |ADST      |A/D Conversion Start
     * |        |          |ADST bit can be set to 1 from four sources: software, external pin STADC, PWM trigger and Timer trigger.
     * |        |          |ADST bit will be cleared to 0 by hardware automatically at the ends of Single mode and Single-cycle Scan mode.
     * |        |          |In Continuous Scan mode and Burst mode, A/D conversion is continuously performed until software writes 0 to this bit or chip is reset.
     * |        |          |0 = Conversion stops and A/D converter enters idle state.
     * |        |          |1 = Conversion starts.
     * |[18:16] |SMPTSEL   |ADC Internal Sampling Time Selection
     * |        |          |Total ADC conversion cycle = sampling cycle + 12
     * |        |          |000 = 4 ADC clock for sampling; 16 ADC clock for complete conversion.
     * |        |          |001 = 5 ADC clock for sampling; 17 ADC clock for complete conversion.
     * |        |          |010 = 6 ADC clock for sampling; 18 ADC clock for complete conversion.
     * |        |          |011 = 7 ADC clock for sampling; 19 ADC clock for complete conversion.
     * |        |          |100 = 8 ADC clock for sampling; 20 ADC clock for complete conversion.
     * |        |          |101 = 9 ADC clock for sampling; 21 ADC clock for complete conversion.
     * |        |          |110 = 10 ADC clock for sampling; 22 ADC clock for complete conversion.
     * |        |          |111 = 11 ADC clock for sampling; 23 ADC clock for complete conversion.
     * |[31]    |DMOF      |Differential Input Mode Output Format
     * |        |          |If user enables differential input mode, the conversion result can be expressed with binary straight format (unsigned format) or 2's complement format (signed format).
     * |        |          |0 = A/D Conversion result will be filled in RSLT at ADC_ADDRx registers with unsigned format (straight binary format).
     * |        |          |1 = A/D Conversion result will be filled in RSLT at ADC_ADDRx registers with 2's complement format.
     * @var ADC_T::ADCHER
     * Offset: 0x84  ADC Channel Enable Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |CHEN      |Analog Input Channel Enable Control
     * |        |          |Set ADCHENR[7:0] bits to enable the corresponding analog input channel 7 ~ 0.
     * |        |          |If DIFFEN(ADC_ADCR[10]) bit is set to 1, only the even number channel needs to be enabled.
     * |        |          |Besides, set ADCHENR[29] to ADCHENR[30] bits will enable internal channel for band-gap voltage and temperature sensor respectively.
     * |        |          |Other bits are reserved.
     * |        |          |0 = Channel Disabled.
     * |        |          |1 = Channel Enabled.
     * |        |          |Note 1 : If the internal channel for band-gap voltage (CHEN[29]) is active, the maximum sampling rate will be 300k SPS.
     * |        |          |Note 2 : If the internal channel for temperature sensor (CHEN[30]) is active, the maximum sampling rate will be 300k SPS.
     * @var ADC_T::ADCMPR
     * Offset: 0x88/0x8C  ADC Compare Register 0/1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CMPEN     |Compare Enable Control
     * |        |          |Set this bit to 1 to enable ADC controller to compare CMPD with specified channel conversion result when converted data is loaded into ADC_ADDRx register.
     * |        |          |0 = Compare function Disabled.
     * |        |          |1 = Compare function Enabled.
     * |[1]     |CMPIE     |Compare Interrupt Enable Control
     * |        |          |If the compare function is enabled and the compare condition matches the setting of CMPCOND and CMPMATCNT, CMPFx(ADC_ADSR0[x+1], x = 0,1)  bit will be asserted, in the meanwhile, if CMPIE bit is set to 1, a compare interrupt request is generated.
     * |        |          |0 = Compare function interrupt Disabled.
     * |        |          |1 = Compare function interrupt Enabled.
     * |[2]     |CMPCOND   |Compare Condition
     * |        |          |0 = Set the compare condition as that when a 12-bit A/D conversion result is less than the 12-bit CMPD bits, the internal match counter will increase one.
     * |        |          |1 = Set the compare condition as that when a 12-bit A/D conversion result is greater than or equal to the 12-bit CMPD bits, the internal match counter will increase one.
     * |        |          |Note: When the internal counter reaches to (CMPMATCNT +1), the CMPFx(ADC_ADSR0[x+1], x = 0,1) bit will be set.
     * |[7:3]   |CMPCH     |Compare Channel Selection
     * |        |          |00000 = Channel 0 conversion result is selected to be compared.
     * |        |          |00001 = Channel 1 conversion result is selected to be compared.
     * |        |          |00010 = Channel 2 conversion result is selected to be compared.
     * |        |          |00011 = Channel 3 conversion result is selected to be compared.
     * |        |          |00100 = Channel 4 conversion result is selected to be compared.
     * |        |          |00101 = Channel 5 conversion result is selected to be compared.
     * |        |          |00110 = Channel 6 conversion result is selected to be compared.
     * |        |          |00111 = Channel 7 conversion result is selected to be compared.
     * |        |          |11101 = Band-gap voltage conversion result is selected to be compared.
     * |        |          |11110 = Temperature sensor conversion result is selected to be compared.
     * |        |          |Others = Reserved.
     * |[11:8]  |CMPMATCNT |Compare Match Count
     * |        |          |When the specified A/D channel analog conversion result matches the compare condition defined by CMPCOND bit, the internal match counter will increase 1.
     * |        |          |When the internal counter reaches the value to (CMPMATCNT +1), the CMPFx(ADC_ADSR0[x+1], x = 0,1) bit will be set.
     * |[15]    |CMPWEN    |Compare Window Mode Enable Bit
     * |        |          |0 = Compare Window Mode Disabled.
     * |        |          |1 = Compare Window Mode Enabled.
     * |        |          |Note: This bit is only presented in ADC_ADCMPR0 register.
     * |[27:16] |CMPD      |Comparison Data
     * |        |          |The 12-bit data is used to compare with conversion result of specified channel.
     * |        |          |Note: CMPD bits should be filled in unsigned format (straight binary format).
     * @var ADC_T::ADSR0
     * Offset: 0x90  ADC Status Register0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ADF       |A/D Conversion End Flag
     * |        |          |A status flag that indicates the end of A/D conversion. Software can write 1 to clear this bit.
     * |        |          |ADF bit is set to 1 at the following three conditions:
     * |        |          |1. When A/D conversion ends in Single mode.
     * |        |          |2. When A/D conversion ends on all specified channels in Single-cycle Scan mode and Continuous Scan mode.
     * |        |          |3. When more than or equal to 8 samples in FIFO in Burst mode.
     * |[1]     |CMPF0     |Compare Flag 0
     * |        |          |When the A/D conversion result of the selected channel meets setting condition in ADC_ADCMPR0 register then this bit is set to 1.
     * |        |          |This bit is cleared by writing 1 to it.
     * |        |          |0 = Conversion result in ADDR does not meet ADC_ADCMPR0 setting.
     * |        |          |1 = Conversion result in ADDR meets ADC_ADCMPR0 setting.
     * |[2]     |CMPF1     |Compare Flag 1
     * |        |          |When the A/D conversion result of the selected channel meets setting condition in ADC_ADCMPR1 register then this bit is set to 1; it is cleared by writing 1 to it.
     * |        |          |0 = Conversion result in ADDR does not meet ADC_ADCMPR1 setting.
     * |        |          |1 = Conversion result in ADDR meets ADC_ADCMPR1 setting.
     * |[7]     |BUSY      |BUSY/IDLE (Read Only)
     * |        |          |This bit is a mirror of ADST bit in ADC_ADCR register.
     * |        |          |0 = A/D converter is in idle state.
     * |        |          |1 = A/D converter is busy at conversion.
     * |[8]     |VALIDF    |Data Valid Flag (Read Only)
     * |        |          |If any one of VALID (ADC_ADDRx[17]) is set, this flag will be set to 1.
     * |        |          |Note: When ADC is in burst mode and any conversion result is valid, this flag will be set to 1.
     * |[16]    |OVERRUNF  |Overrun Flag (Read Only)
     * |        |          |If any one of OVERRUN (ADC_ADDRx[16]) is set, this flag will be set to 1.
     * |        |          |Note: When ADC is in burst mode and the FIFO is overrun, this flag will be set to 1.
     * |[31:27] |CHANNEL   |Current Conversion Channel (Read Only)
     * |        |          |When BUSY=1, this filed reflects current conversion channel.
     * |        |          |When BUSY=0, it shows the number of the next converted channel.
     * @var ADC_T::ADSR1
     * Offset: 0x94  ADC Status Register1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |VALID     |Data Valid Flag (Read Only)
     * |        |          |VALID[30:29], VALID[7:0] are the mirror of the VALID bits in ADC_ADDR30[17] ~ ADC_ADDR29[17], ADC_ADDR7[17]~ ADC_ADDR0[17].
     * |        |          |The other bits are reserved.
     * |        |          |Note: When ADC is in burst mode and any conversion result is valid, VALID[30:29], VALID[7:0] will be set to 1.
     * @var ADC_T::ADSR2
     * Offset: 0x98  ADC Status Register2
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |OVERRUN   |Overrun Flag (Read Only)
     * |        |          |OVERRUN[30:29], OVERRUN[7:0] are the mirror of the OVERRUN bit in ADDR30[16] ~ ADDR29[16], ADDR7[16] ~ ADDR0[16].
     * |        |          |The other bits are reserved.
     * |        |          |Note: When ADC is in burst mode and the FIFO is overrun, OVERRUN[30:29], OVERRUN[7:0] will be set to 1.
     * @var ADC_T::ADTDCR
     * Offset: 0x9C  ADC Trigger Delay Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |PTDT      |BPWM Trigger Delay Time
     * |        |          |Set this field will delay ADC start conversion time after BPWM trigger.
     * |        |          |BPWM trigger delay time is (4 * PTDT) * system clock
     * @var ADC_T::ADPDMA
     * Offset: 0x100  ADC PDMA Current Transfer Data Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[17:0]  |CURDAT    |ADC PDMA Current Transfer Data Register (Read Only)
     * |        |          |When PDMA transferring, read this register can monitor current PDMA transfer data.
     * |        |          |Current PDMA transfer data could be the content of ADC_ADDR0 ~ ADC_ADDR7 and ADC_ADDR29 ~ ADC_ADDR30 registers.
     */

    __I  uint32_t ADDR[32];              /*!< [0x0000 ~ 0x007c] ADC Data Register 31                                    */
    __IO uint32_t ADCR;                  /*!< [0x0080] ADC Control Register                                             */
    __IO uint32_t ADCHER;                /*!< [0x0084] ADC Channel Enable Register                                      */
    __IO uint32_t ADCMPR[2];             /*!< [0x0088 ~ 0x008C] ADC Compare Register 0 & 1                              */
    __IO uint32_t ADSR0;                 /*!< [0x0090] ADC Status Register0                                             */
    __I  uint32_t ADSR1;                 /*!< [0x0094] ADC Status Register1                                             */
    __I  uint32_t ADSR2;                 /*!< [0x0098] ADC Status Register2                                             */
    __IO uint32_t ADTDCR;                /*!< [0x009c] ADC Trigger Delay Control Register                               */
    __I  uint32_t RESERVE0[24];
    __I  uint32_t ADPDMA;                /*!< [0x0100] ADC PDMA Current Transfer Data Register                          */

} ADC_T;

/**
    @addtogroup ADC_CONST ADC Bit Field Definition
    Constant Definitions for ADC Controller
    @{
*/

#define ADC_ADDR_RSLT_Pos                (0)                                               /*!< ADC_T::ADDR: RSLT Position             */
#define ADC_ADDR_RSLT_Msk                (0xfffful << ADC_ADDR_RSLT_Pos)                   /*!< ADC_T::ADDR: RSLT Mask                 */

#define ADC_ADDR_OVERRUN_Pos             (16)                                              /*!< ADC_T::ADDR: OVERRUN Position          */
#define ADC_ADDR_OVERRUN_Msk             (0x1ul << ADC_ADDR_OVERRUN_Pos)                   /*!< ADC_T::ADDR: OVERRUN Mask              */

#define ADC_ADDR_VALID_Pos               (17)                                              /*!< ADC_T::ADDR: VALID Position            */
#define ADC_ADDR_VALID_Msk               (0x1ul << ADC_ADDR_VALID_Pos)                     /*!< ADC_T::ADDR: VALID Mask                */

#define ADC_ADCR_ADEN_Pos                (0)                                               /*!< ADC_T::ADCR: ADEN Position             */
#define ADC_ADCR_ADEN_Msk                (0x1ul << ADC_ADCR_ADEN_Pos)                      /*!< ADC_T::ADCR: ADEN Mask                 */

#define ADC_ADCR_ADIE_Pos                (1)                                               /*!< ADC_T::ADCR: ADIE Position             */
#define ADC_ADCR_ADIE_Msk                (0x1ul << ADC_ADCR_ADIE_Pos)                      /*!< ADC_T::ADCR: ADIE Mask                 */

#define ADC_ADCR_ADMD_Pos                (2)                                               /*!< ADC_T::ADCR: ADMD Position             */
#define ADC_ADCR_ADMD_Msk                (0x3ul << ADC_ADCR_ADMD_Pos)                      /*!< ADC_T::ADCR: ADMD Mask                 */

#define ADC_ADCR_TRGS_Pos                (4)                                               /*!< ADC_T::ADCR: TRGS Position             */
#define ADC_ADCR_TRGS_Msk                (0x3ul << ADC_ADCR_TRGS_Pos)                      /*!< ADC_T::ADCR: TRGS Mask                 */

#define ADC_ADCR_TRGCOND_Pos             (6)                                               /*!< ADC_T::ADCR: TRGCOND Position          */
#define ADC_ADCR_TRGCOND_Msk             (0x3ul << ADC_ADCR_TRGCOND_Pos)                   /*!< ADC_T::ADCR: TRGCOND Mask              */

#define ADC_ADCR_TRGEN_Pos               (8)                                               /*!< ADC_T::ADCR: TRGEN Position            */
#define ADC_ADCR_TRGEN_Msk               (0x1ul << ADC_ADCR_TRGEN_Pos)                     /*!< ADC_T::ADCR: TRGEN Mask                */

#define ADC_ADCR_PTEN_Pos                (9)                                               /*!< ADC_T::ADCR: PTEN Position             */
#define ADC_ADCR_PTEN_Msk                (0x1ul << ADC_ADCR_PTEN_Pos)                      /*!< ADC_T::ADCR: PTEN Mask                 */

#define ADC_ADCR_DIFFEN_Pos              (10)                                              /*!< ADC_T::ADCR: DIFFEN Position           */
#define ADC_ADCR_DIFFEN_Msk              (0x1ul << ADC_ADCR_DIFFEN_Pos)                    /*!< ADC_T::ADCR: DIFFEN Mask               */

#define ADC_ADCR_ADST_Pos                (11)                                              /*!< ADC_T::ADCR: ADST Position             */
#define ADC_ADCR_ADST_Msk                (0x1ul << ADC_ADCR_ADST_Pos)                      /*!< ADC_T::ADCR: ADST Mask                 */

#define ADC_ADCR_SMPTSEL_Pos             (16)                                              /*!< ADC_T::ADCR: SMPTSEL Position          */
#define ADC_ADCR_SMPTSEL_Msk             (0x7ul << ADC_ADCR_SMPTSEL_Pos)                   /*!< ADC_T::ADCR: SMPTSEL Mask              */

#define ADC_ADCR_DMOF_Pos                (31)                                              /*!< ADC_T::ADCR: DMOF Position             */
#define ADC_ADCR_DMOF_Msk                (0x1ul << ADC_ADCR_DMOF_Pos)                      /*!< ADC_T::ADCR: DMOF Mask                 */

#define ADC_ADCHER_CHEN_Pos              (0)                                               /*!< ADC_T::ADCHER: CHEN Position           */
#define ADC_ADCHER_CHEN_Msk              (0xfffffffful << ADC_ADCHER_CHEN_Pos)             /*!< ADC_T::ADCHER: CHEN Mask               */

#define ADC_ADCMPR_CMPEN_Pos             (0)                                               /*!< ADC_T::ADCMPR: CMPEN Position          */
#define ADC_ADCMPR_CMPEN_Msk             (0x1ul << ADC_ADCMPR_CMPEN_Pos)                   /*!< ADC_T::ADCMPR: CMPEN Mask              */

#define ADC_ADCMPR_CMPIE_Pos             (1)                                               /*!< ADC_T::ADCMPR: CMPIE Position          */
#define ADC_ADCMPR_CMPIE_Msk             (0x1ul << ADC_ADCMPR_CMPIE_Pos)                   /*!< ADC_T::ADCMPR: CMPIE Mask              */

#define ADC_ADCMPR_CMPCOND_Pos           (2)                                               /*!< ADC_T::ADCMPR: CMPCOND Position        */
#define ADC_ADCMPR_CMPCOND_Msk           (0x1ul << ADC_ADCMPR_CMPCOND_Pos)                 /*!< ADC_T::ADCMPR: CMPCOND Mask            */

#define ADC_ADCMPR_CMPCH_Pos             (3)                                               /*!< ADC_T::ADCMPR: CMPCH Position          */
#define ADC_ADCMPR_CMPCH_Msk             (0x1ful << ADC_ADCMPR_CMPCH_Pos)                  /*!< ADC_T::ADCMPR: CMPCH Mask              */

#define ADC_ADCMPR_CMPMATCNT_Pos         (8)                                               /*!< ADC_T::ADCMPR: CMPMATCNT Position      */
#define ADC_ADCMPR_CMPMATCNT_Msk         (0xful << ADC_ADCMPR_CMPMATCNT_Pos)               /*!< ADC_T::ADCMPR: CMPMATCNT Mask          */

#define ADC_ADCMPR_CMPWEN_Pos            (15)                                              /*!< ADC_T::ADCMPR: CMPWEN Position         */
#define ADC_ADCMPR_CMPWEN_Msk            (0x1ul << ADC_ADCMPR_CMPWEN_Pos)                  /*!< ADC_T::ADCMPR: CMPWEN Mask             */

#define ADC_ADCMPR_CMPD_Pos              (16)                                              /*!< ADC_T::ADCMPR: CMPD Position           */
#define ADC_ADCMPR_CMPD_Msk              (0xffful << ADC_ADCMPR_CMPD_Pos)                  /*!< ADC_T::ADCMPR: CMPD Mask               */

#define ADC_ADSR0_ADF_Pos                (0)                                               /*!< ADC_T::ADSR0: ADF Position             */
#define ADC_ADSR0_ADF_Msk                (0x1ul << ADC_ADSR0_ADF_Pos)                      /*!< ADC_T::ADSR0: ADF Mask                 */

#define ADC_ADSR0_CMPF0_Pos              (1)                                               /*!< ADC_T::ADSR0: CMPF0 Position           */
#define ADC_ADSR0_CMPF0_Msk              (0x1ul << ADC_ADSR0_CMPF0_Pos)                    /*!< ADC_T::ADSR0: CMPF0 Mask               */

#define ADC_ADSR0_CMPF1_Pos              (2)                                               /*!< ADC_T::ADSR0: CMPF1 Position           */
#define ADC_ADSR0_CMPF1_Msk              (0x1ul << ADC_ADSR0_CMPF1_Pos)                    /*!< ADC_T::ADSR0: CMPF1 Mask               */

#define ADC_ADSR0_BUSY_Pos               (7)                                               /*!< ADC_T::ADSR0: BUSY Position            */
#define ADC_ADSR0_BUSY_Msk               (0x1ul << ADC_ADSR0_BUSY_Pos)                     /*!< ADC_T::ADSR0: BUSY Mask                */

#define ADC_ADSR0_VALIDF_Pos             (8)                                               /*!< ADC_T::ADSR0: VALIDF Position          */
#define ADC_ADSR0_VALIDF_Msk             (0x1ul << ADC_ADSR0_VALIDF_Pos)                   /*!< ADC_T::ADSR0: VALIDF Mask              */

#define ADC_ADSR0_OVERRUNF_Pos           (16)                                              /*!< ADC_T::ADSR0: OVERRUNF Position        */
#define ADC_ADSR0_OVERRUNF_Msk           (0x1ul << ADC_ADSR0_OVERRUNF_Pos)                 /*!< ADC_T::ADSR0: OVERRUNF Mask            */

#define ADC_ADSR0_CHANNEL_Pos            (27)                                              /*!< ADC_T::ADSR0: CHANNEL Position         */
#define ADC_ADSR0_CHANNEL_Msk            (0x1ful << ADC_ADSR0_CHANNEL_Pos)                 /*!< ADC_T::ADSR0: CHANNEL Mask             */

#define ADC_ADSR1_VALID_Pos              (0)                                               /*!< ADC_T::ADSR1: VALID Position           */
#define ADC_ADSR1_VALID_Msk              (0xfffffffful << ADC_ADSR1_VALID_Pos)             /*!< ADC_T::ADSR1: VALID Mask               */

#define ADC_ADSR2_OVERRUN_Pos            (0)                                               /*!< ADC_T::ADSR2: OVERRUN Position         */
#define ADC_ADSR2_OVERRUN_Msk            (0xfffffffful << ADC_ADSR2_OVERRUN_Pos)           /*!< ADC_T::ADSR2: OVERRUN Mask             */

#define ADC_ADTDCR_PTDT_Pos              (0)                                               /*!< ADC_T::ADTDCR: PTDT Position           */
#define ADC_ADTDCR_PTDT_Msk              (0xfful << ADC_ADTDCR_PTDT_Pos)                   /*!< ADC_T::ADTDCR: PTDT Mask               */

#define ADC_ADPDMA_CURDAT_Pos            (0)                                               /*!< ADC_T::ADPDMA: CURDAT Position         */
#define ADC_ADPDMA_CURDAT_Msk            (0x3fffful << ADC_ADPDMA_CURDAT_Pos)              /*!< ADC_T::ADPDMA: CURDAT Mask             */

/**@}*/ /* ADC_CONST */
/**@}*/ /* end of ADC register group */

/*---------------------- System Clock Controller -------------------------*/
/**
    @addtogroup CLK System Clock Controller(CLK)
    Memory Mapped Structure for CLK Controller
    @{
*/

typedef struct
{


    /**
     * @var CLK_T::PWRCTL
     * Offset: 0x00  System Power-down Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |HXTEN     |HXT Enable Bit (Write Protect)
     * |        |          |0 = 4~24 MHz External High Speed Crystal (HXT) Disabled.
     * |        |          |1 = 4~24 MHz External High Speed Crystal (HXT) Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[1]     |LXTEN     |LXT Enable Bit (Write Protect)
     * |        |          |0 = 32.768 KHz External Low Speed Crystal (LXT) Disabled.
     * |        |          |1 = 32.768 KHz External Low Speed Crystal (LXT) Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[2]     |HIRCEN    |HIRC Enable Bit (Write Protect)
     * |        |          |0 = 48 MHz internal high speed RC oscillator (HIRC) Disabled.
     * |        |          |1 = 48 MHz internal high speed RC oscillator (HIRC) Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[3]     |LIRCEN    |LIRC Enable Bit (Write Protect)
     * |        |          |0 = 10 kHz internal low speed RC oscillator (LIRC) Disabled.
     * |        |          |1 = 10 kHz internal low speed RC oscillator (LIRC) Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[4]     |PDWKDLY   |Enable the Wake-up Delay Counter (Write Protect)
     * |        |          |When the chip wakes up from Power-down mode, the clock control will delay certain clock cycles to wait system clock stable.
     * |        |          |The delayed clock cycle is 4096 clock cycles when chip work at 4~24 MHz external high speed crystal oscillator (HXT), 512 clock cycles when chip work at 48 MHz internal high speed RC oscillator (HIRC).
     * |        |          |0 = Clock cycles delay Disabled.
     * |        |          |1 = Clock cycles delay Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[5]     |PDWKIEN   |Power-down Mode Wake-up Interrupt Enable Bit (Write Protect)
     * |        |          |0 = Power-down mode wake-up interrupt Disabled.
     * |        |          |1 = Power-down mode wake-up interrupt Enabled.
     * |        |          |Note1: The interrupt will occur when both PDWKIF and PDWKIEN are high.
     * |        |          |Note2: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[6]     |PDWKIF    |Power-down Mode Wake-up Interrupt Status
     * |        |          |Set by Power-down wake-up event, it indicates that resume from Power-down mode.
     * |        |          |The flag is set if the EINT0~5, GPIO, USBD, UART0~1, WDT, BOD, Voltage Detector, TMR0~3 or I2C0~1 wake-up occurred.
     * |        |          |Note1: Write 1 to clear the bit to 0.
     * |        |          |Note2: This bit works only if PDWKIEN (CLK_PWRCTL[5]) set to 1.
     * |[7]     |PDEN      |System Power-down Enable (Write Protect)
     * |        |          |When this bit is set to 1, Power-down mode is enabled and chip keeps active till the CPU sleep mode is also active and then the chip enters Power-down mode.
     * |        |          |When chip wakes up from Power-down mode, this bit is auto cleared.
     * |        |          |Users need to set this bit again for next Power-down.
     * |        |          |In Power-down mode, HXT and HIRC will be disabled in this mode, but LXT and LIRC are not controlled by Power-down mode.
     * |        |          |In Power-down mode, the PLL and system clock are disabled, and ignored the clock source selection.
     * |        |          |The clocks of peripheral are not controlled by Power-down mode, if the peripheral clock source is from LXT or LIRC.
     * |        |          |0 = Chip operating normally or chip in idle mode because of WFI command.
     * |        |          |1 = Chip waits CPU sleep command WFI and then enters Power-down mode.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[12:10] |HXTGAIN   |HXT Gain Control Bit (Write Protect) HXT Gain Control Bit (Write Protect)
     * |        |          |Gain control is used to enlarge the gain of crystal to make sure crystal work normally.
     * |        |          |If gain control is enabled, crystal will consume more power than gain control off.
     * |        |          |000 = HXT frequency is from 4 MHz to 8MHz.
     * |        |          |001 = HXT frequency is from 8 MHz to 12MHz.
     * |        |          |010 = HXT frequency is from 12 MHz to 16MHz.
     * |        |          |011 = HXT frequency is from 16 MHz to 24MHz.
     * |        |          |Others = Reserved.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[31]    |HXTMD     |HXT Bypass Mode (Write Protect)
     * |        |          |0 = HXT work as crystal mode. PF.2 and PF.3 are configured as external high speed crystal (HXT) pins.
     * |        |          |1 = HXT works as external clock mode. PF.3 is configured as external clock input pin.
     * |        |          |Note 1: When HXTMD = 1, PF.3 MFP should be setting as GPIO mode. The DC characteristic of XT1_IN is the same as GPIO.
     * |        |          |Note 2: This bit is write protected. Refer to the SYS_REGCTL register.
     * @var CLK_T::AHBCLK
     * Offset: 0x04  AHB Devices Clock Enable Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1]     |PDMACKEN  |PDMA Controller Clock Enable Bit
     * |        |          |0 = PDMA peripheral clock Disabled.
     * |        |          |1 = PDMA peripheral clock Enabled.
     * |[2]     |ISPCKEN   |Flash ISP Controller Clock Enable Bit
     * |        |          |0 = Flash ISP peripheral clock Disabled.
     * |        |          |1 = Flash ISP peripheral clock Enabled.
     * |[7]     |CRCCKEN   |CRC Generator Controller Clock Enable Bit
     * |        |          |0 = CRC peripheral clock Disabled.
     * |        |          |1 = CRC peripheral clock Enabled.
     * |[15]    |FMCIDLE   |Flash Memory Controller Clock Enable Bit in IDLE Mode
     * |        |          |0 = FMC peripheral clock Disabled when chip operating at IDLE mode.
     * |        |          |1 = FMC peripheral clock Enabled when chip operating at IDLE mode.
     * |[16]    |GPIOACKEN |General Purpose I/O PA Group Clock Enable Bit
     * |        |          |0 = GPIO PA group clock Disabled.
     * |        |          |1 = GPIO PA group clock Enabled.
     * |[17]    |GPIOBCKEN |General Purpose I/O PB Group Clock Enable Bit
     * |        |          |0 = GPIO PB group clock Disabled.
     * |        |          |1 = GPIO PB group clock Enabled.
     * |[18]    |GPIOCCKEN |General Purpose I/O PC Group Clock Enable Bit
     * |        |          |0 = GPIO PC group clock Disabled.
     * |        |          |1 = GPIO PC group clock Enabled.
     * |[19]    |GPIODCKEN |General Purpose I/O PD Group Clock Enable Bit
     * |        |          |0 = GPIO PD group clock Disabled.
     * |        |          |1 = GPIO PD group clock Enabled.
     * |[21]    |GPIOFCKEN |General Purpose I/O PF Group Clock Enable Bit
     * |        |          |0 = GPIO PF group clock Disabled.
     * |        |          |1 = GPIO PF group clock Enabled.
     * @var CLK_T::APBCLK0
     * Offset: 0x08  APB Devices Clock Enable Control Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |WDTCKEN   |Watchdog Timer Clock Enable Bit (Write Protect)
     * |        |          |0 = Watchdog Timer Clock Disabled.
     * |        |          |1 = Watchdog Timer Clock Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[2]     |TMR0CKEN  |Timer0 Clock Enable Bit
     * |        |          |0 = Timer0 Clock Disabled.
     * |        |          |1 = Timer0 Clock Enabled.
     * |[3]     |TMR1CKEN  |Timer1 Clock Enable Bit
     * |        |          |0 = Timer1 Clock Disabled.
     * |        |          |1 = Timer1 Clock Enabled.
     * |[4]     |TMR2CKEN  |Timer2 Clock Enable Bit
     * |        |          |0 = Timer2 Clock Disabled.
     * |        |          |1 = Timer2 Clock Enabled.
     * |[5]     |TMR3CKEN  |Timer3 Clock Enable Bit
     * |        |          |0 = Timer3 Clock Disabled.
     * |        |          |1 = Timer3 Clock Enabled.
     * |[6]     |CLKOCKEN  |CLKO Clock Enable Bit
     * |        |          |0 = CLKO Clock Disabled.
     * |        |          |1 = CLKO Clock Enabled.
     * |[8]     |I2C0CKEN  |I2C0 Clock Enable Bit
     * |        |          |0 = I2C0 Clock Disabled.
     * |        |          |1 = I2C0 Clock Enabled.
     * |[9]     |I2C1CKEN  |I2C1 Clock Enable Bit
     * |        |          |0 = I2C1 Clock Disabled.
     * |        |          |1 = I2C1 Clock Enabled.
     * |[12]    |SPI0CKEN  |SPI0 Clock Enable Bit
     * |        |          |0 = SPI0 Clock Disabled.
     * |        |          |1 = SPI0 Clock Enabled.
     * |[13]    |SPI1CKEN  |SPI1 Clock Enable Bit
     * |        |          |0 = SPI1 Clock Disabled.
     * |        |          |1 = SPI1 Clock Enabled.
     * |[16]    |UART0CKEN |UART0 Clock Enable Bit
     * |        |          |0 = UART0 clock Disabled.
     * |        |          |1 = UART0 clock Enabled.
     * |[17]    |UART1CKEN |UART1 Clock Enable Bit
     * |        |          |0 = UART1 clock Disabled.
     * |        |          |1 = UART1 clock Enabled.
     * |[20]    |BPWM0CKEN |BPWM0 Clock Enable Bit
     * |        |          |0 = BPWM0 clock Disabled.
     * |        |          |1 = BPWM0 clock Enabled.
     * |[21]    |BPWM1CKEN |BPWM1 Clock Enable Bit
     * |        |          |0 = BPWM1 clock Disabled.
     * |        |          |1 = BPWM1 clock Enabled.
     * |[22]    |BPWM2CKEN |BPWM2 Clock Enable Bit
     * |        |          |0 = BPWM2 clock Disabled.
     * |        |          |1 = BPWM2 clock Enabled.
     * |[23]    |BPWM3CKEN |BPWM3 Clock Enable Bit
     * |        |          |0 = BPWM3 clock Disabled.
     * |        |          |1 = BPWM3 clock Enabled.
     * |[27]    |USBDCKEN  |USB Device Clock Enable Bit
     * |        |          |0 = USB Device clock Disabled.
     * |        |          |1 = USB Device clock Enabled.
     * |[28]    |ADCCKEN   |Analog-digital-converter (ADC) Clock Enable Bit
     * |        |          |0 = ADC clock Disabled.
     * |        |          |1 = ADC clock Enabled.
     * @var CLK_T::STATUS
     * Offset: 0x0C  Clock Status Monitor Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |HXTSTB    |HXT Clock Source Stable Flag (Read Only)
     * |        |          |0 = 4~24 MHz external high speed crystal oscillator (HXT) clock is not stable or disabled.
     * |        |          |1 = 4~24 MHz external high speed crystal oscillator (HXT) clock is stable and enabled.
     * |[1]     |LXTSTB    |LXT Clock Source Stable Flag (Read Only)
     * |        |          |0 = 32.768 kHz external low speed crystal oscillator (LXT) clock is not stable or disabled.
     * |        |          |1 = 32.768 kHz external low speed crystal oscillator (LXT) clock is stabled and enabled.
     * |[2]     |PLLSTB    |Internal PLL Clock Source Stable Flag (Read Only)
     * |        |          |0 = Internal PLL clock is not stable or disabled.
     * |        |          |1 = Internal PLL clock is stable and enabled.
     * |[3]     |LIRCSTB   |LIRC Clock Source Stable Flag (Read Only)
     * |        |          |0 = 10 kHz internal low speed RC oscillator (LIRC) clock is not stable or disabled.
     * |        |          |1 = 10 kHz internal low speed RC oscillator (LIRC) clock is stable and enabled.
     * |[4]     |HIRCSTB   |HIRC Clock Source Stable Flag (Read Only)
     * |        |          |0 = 48 MHz internal high speed RC oscillator (HIRC) clock is not stable or disabled.
     * |        |          |1 = 48 MHz internal high speed RC oscillator (HIRC) clock is stable and enabled.
     * |[7]     |CLKSFAIL  |Clock Switching Fail Flag (Read Only)
     * |        |          |This bit is up2025-07-16d when software switches system clock source.
     * |        |          |If switch target clock is stable, this bit will be set to 0.
     * |        |          |If switch target clock is not stable, this bit will be set to 1.
     * |        |          |0 = Clock switching success.
     * |        |          |1 = Clock switching failure.
     * |        |          |Note: After selected clock source is stable, hardware will switch system clock to selected clock automatically, and CLKSFAIL will be cleared automatically by hardware.
     * @var CLK_T::CLKSEL0
     * Offset: 0x10  Clock Source Select Control Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[2:0]   |HCLKSEL   |HCLK Clock Source Selection (Write Protect)
     * |        |          |Before clock switching, the related clock sources (both pre-select and new-select) must be turned on.
     * |        |          |000 = Clock source from HXT.
     * |        |          |001 = Clock source from LXT.
     * |        |          |010 = Clock source from PLL/2 clock.
     * |        |          |011 = Clock source from LIRC.
     * |        |          |100 = Clock source from HIRC.
     * |        |          |111 = Clock source from HIRC/2 clock.
     * |        |          |Others = Reserved.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[5:3]   |STCLKSEL  |Cortex-M23 SysTick Clock Source Selection (Write Protect)
     * |        |          |If SYST_CTRL[2]=0, SysTick uses listed clock source below.
     * |        |          |000 = Clock source from HXT.
     * |        |          |001 = Clock source from LXT.
     * |        |          |010 = Clock source from HXT/2.
     * |        |          |011 = Clock source from HCLK/2.
     * |        |          |111 = Clock source from HIRC/4.
     * |        |          |Note1: if SysTick clock source is not from HCLK (i.e. SYST_CTRL[2] = 0), SysTick clock source must less than or equal to HCLK/2.
     * |        |          |Note2: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[6]     |PCLK0SEL  |PCLK0 Clock Source Selection (Write Protect)
     * |        |          |0 = APB0 BUS clock source from HCLK.
     * |        |          |1 = APB0 BUS clock source from HCLK/2.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[7]     |PCLK1SEL  |PCLK1 Clock Source Selection (Write Protect)
     * |        |          |0 = APB1 BUS clock source from HCLK.
     * |        |          |1 = APB1 BUS clock source from HCLK/2.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var CLK_T::CLKSEL1
     * Offset: 0x14  Clock Source Select Control Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1:0]   |WDTSEL    |Watchdog Timer Clock Source Selection (Write Protect)
     * |        |          |00 = Reserved.
     * |        |          |01 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT) clock.
     * |        |          |10 = Clock source from HCLK/2048 clock.
     * |        |          |11 = Clock source from 10 kHz internal low speed RC oscillator (LIRC) clock.
     * |        |          |Note: This These bits is are write protected. Refer to the SYS_REGLCTL register.
     * |[3:2]   |ADCSEL    |ADC Clock Source Selection
     * |        |          |00 = Clock source from 4~24 MHz external high speed crystal oscillator (HXT) clock.
     * |        |          |01 = Clock source from PLL.
     * |        |          |10 = Clock source from PCLK0.
     * |        |          |11 = Clock source from HIRC/2 clock.
     * |[10:8]  |TMR0SEL   |TIMER0 Clock Source Selection
     * |        |          |000 = Clock source from 4~24 MHz external high speed crystal oscillator (HXT) clock.
     * |        |          |001 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT) clock.
     * |        |          |010 = Clock source from PCLK0.
     * |        |          |011 = Clock source from external clock T0 pin.
     * |        |          |101 = Clock source from 10 kHz internal low speed RC oscillator (LIRC) clock.
     * |        |          |111 = Clock source from HIRC/2 clock.
     * |        |          |Others = Reserved.
     * |[14:12] |TMR1SEL   |TIMER1 Clock Source Selection
     * |        |          |000 = Clock source from 4~24 MHz external high speed crystal oscillator (HXT) clock.
     * |        |          |001 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT) clock.
     * |        |          |010 = Clock source from PCLK0.
     * |        |          |011 = Clock source from external clock T1 pin.
     * |        |          |101 = Clock source from 10 kHz internal low speed RC oscillator (LIRC) clock.
     * |        |          |111 = Clock source from HIRC/2 clock.
     * |        |          |Others = Reserved.
     * |[18:16] |TMR2SEL   |TIMER2 Clock Source Selection
     * |        |          |000 = Clock source from 4~24 MHz external high speed crystal oscillator (HXT) clock.
     * |        |          |001 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT) clock.
     * |        |          |010 = Clock source from PCLK1.
     * |        |          |011 = Clock source from external clock T2 pin.
     * |        |          |101 = Clock source from 10 kHz internal low speed RC oscillator (LIRC) clock.
     * |        |          |111 = Clock source from HIRC/2 clock.
     * |        |          |Others = Reserved.
     * |[22:20] |TMR3SEL   |TIMER3 Clock Source Selection
     * |        |          |000 = Clock source from 4~24 MHz external high speed crystal oscillator (HXT) clock.
     * |        |          |001 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT) clock.
     * |        |          |010 = Clock source from PCLK1.
     * |        |          |011 = Clock source from external clock T3 pin.
     * |        |          |101 = Clock source from 10 kHz internal low speed RC oscillator (LIRC) clock.
     * |        |          |111 = Clock source from HIRC/2 clock.
     * |        |          |Others = Reserved.
     * |[25:24] |UART0SEL  |UART0 Clock Source Selection
     * |        |          |00 = Clock source from 4~24 MHz external high speed crystal oscillator (HXT) clock.
     * |        |          |01 = Clock source from PLL/2 clock.
     * |        |          |10 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT) clock.
     * |        |          |11 = Clock source from HIRC/2 clock.
     * |[27:26] |UART1SEL  |UART1 Clock Source Selection
     * |        |          |00 = Clock source from 4~24 MHz external high speed crystal oscillator (HXT) clock.
     * |        |          |01 = Clock source from PLL/2 clock.
     * |        |          |10 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT) clock.
     * |        |          |11 = Clock source from HIRC/2 clock.
     * @var CLK_T::CLKDIV0
     * Offset: 0x18  Clock Divider Number Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |HCLKDIV   |HCLK Clock Divide Number From HCLK Clock Source
     * |        |          |HCLK clock frequency = (HCLK clock source frequency) / (HCLKDIV + 1).
     * |[7:4]   |USBDIV    |USB Clock Divide Number From PLL Clock
     * |        |          |USB clock frequency = (PLL clock source frequency) / (USBDIV + 1).
     * |        |          |Note: If the HIRC is selected, it is delivery to USB clock directly.
     * |[11:8]  |UART0DIV  |UART0 Clock Divide Number From UART0 Clock Source
     * |        |          |UART0 clock frequency = (UART0 clock source frequency) / (UART0DIV + 1).
     * |[15:12] |UART1DIV  |UART1 Clock Divide Number From UART1 Clock Source
     * |        |          |UART1 clock frequency = (UART1 clock source frequency) / (UART1DIV + 1).
     * |[23:16] |ADCDIV    |ADC Clock Divide Number From ADC Clock Source
     * |        |          |ADC clock frequency = (ADC clock source frequency) / (ADCDIV + 1).
     * @var CLK_T::CLKSEL2
     * Offset: 0x1C  Clock Source Select Control Register 2
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:2]   |CLKOSEL   |Clock Divider Clock Source Selection
     * |        |          |000 = Clock source from 4~24 MHz external high speed crystal oscillator (HXT) clock.
     * |        |          |001 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT) clock.
     * |        |          |010 = Clock source from HCLK.
     * |        |          |011 = Clock source from HIRC/2 clock.
     * |        |          |100 = Clock source from SOF (USB start of frame event).
     * |        |          |101 = Clock source from HIRC clock.
     * |        |          |Others = Reserved.
     * |[17:16] |WWDTSEL   |Window Watchdog Timer Clock Source Selection
     * |        |          |10 = Clock source from HCLK/2048 clock.
     * |        |          |11 = Clock source from 10 kHz internal low speed RC oscillator (LIRC).
     * |        |          |Others = Reserved.
     * |[25:24] |SPI0SEL   |SPI0 Clock Source Selection
     * |        |          |00 = Clock source from 4~24 MHz external high speed crystal oscillator (HXT) clock.
     * |        |          |01 = Clock source from PLL/2 clock.
     * |        |          |10 = Clock source from PCLK0.
     * |        |          |11 = Clock source from HIRC clock.
     * |[27:26] |SPI1SEL   |SPI1 Clock Source Selection
     * |        |          |00 = Clock source from 4~24 MHz external high speed crystal oscillator (HXT) clock.
     * |        |          |01 = Clock source from PLL/2 clock.
     * |        |          |10 = Clock source from PCLK0.
     * |        |          |11 = Clock source from HIRC clock.
     * @var CLK_T::PLLCTL
     * Offset: 0x20  PLL Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[8:0]   |FBDIV     |PLL Feedback Divider Control
     * |        |          |Refer to the PLL formulas.
     * |[13:9]  |INDIV     |PLL Input Divider Control
     * |        |          |Refer to the PLL formulas.
     * |[15:14] |OUTDIV    |PLL Output Divider Control
     * |        |          |Refer to the PLL formulas.
     * |[16]    |PD        |Power-down Mode
     * |        |          |If set PDEN(CLK_PWRCTL[7]) bit to 1, the PLL will enter Power-down mode, too.
     * |        |          |0 = PLL is in normal mode.
     * |        |          |1 = PLL is in Power-down mode (default).
     * |[17]    |BP        |PLL Bypass Control
     * |        |          |0 = PLL is in normal mode (default).
     * |        |          |1 = PLL clock output is same as PLL input clock.
     * |[18]    |OE        |PLL OE (FOUT Enable) Control
     * |        |          |0 = PLL FOUT Enabled.
     * |        |          |1 = PLL FOUT is fixed low.
     * |[19]    |PLLSRC    |PLL Source Clock Selection
     * |        |          |0 = PLL source clock from external 4~24 MHz high-speed crystal (HXT).
     * |        |          |1 = PLL source clock from 48 MHz internal high-speed oscillator divided by 2 (HIRC/2).
     * |[23]    |STBSEL    |PLL Stable Counter Selection
     * |        |          |0 = PLL stable time is 6144 PLL source clock (suitable for source clock is equal to or less than 12MHz).
     * |        |          |1 = PLL stable time is 12288 PLL source clock (suitable for source clock is larger than 12MHz).
     * @var CLK_T::CLKOCTL
     * Offset: 0x24  Clock Output Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |FREQSEL   |Clock Output Frequency Selection
     * |        |          |The formula of output frequency is Fout = Fin/(2^(N+1)).
     * |        |          |Fin is the input clock frequency.
     * |        |          |Fout is the frequency of divider output clock.
     * |        |          |N is the 4-bit value of FREQSEL[3:0].
     * |[4]     |CLKOEN    |Clock Output Enable Bit
     * |        |          |0 = Clock Output function Disabled.
     * |        |          |1 = Clock Output function Enabled.
     * |[5]     |DIV1EN    |Clock Output Divide One Enable Bit
     * |        |          |0 = Clock Output will output clock with source frequency divided by FREQSEL.
     * |        |          |1 = Clock Output will output clock with source frequency.
     * @var CLK_T::APBCLK1
     * Offset: 0x30  APB Devices Clock Enable Control Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[16]    |LLSI0CKEN |LLSI0 Clock Enable Bit
     * |        |          |0 = LLSI0 Clock Disabled.
     * |        |          |1 = LLSI0 Clock Enabled.
     * |[17]    |LLSI1CKEN |LLSI1 Clock Enable Bit
     * |        |          |0 = LLSI1 Clock Disabled.
     * |        |          |1 = LLSI1 Clock Enabled.
     * |[18]    |LLSI2CKEN |LLSI2 Clock Enable Bit
     * |        |          |0 = LLSI2 Clock Disabled.
     * |        |          |1 = LLSI2 Clock Enabled.
     * |[19]    |LLSI3CKEN |LLSI3 Clock Enable Bit
     * |        |          |0 = LLSI3 Clock Disabled.
     * |        |          |1 = LLSI3 Clock Enabled.
     * |[20]    |LLSI4CKEN |LLSI4 Clock Enable Bit
     * |        |          |0 = LLSI4 Clock Disabled.
     * |        |          |1 = LLSI4 Clock Enabled.
     * |[21]    |LLSI5CKEN |LLSI5 Clock Enable Bit
     * |        |          |0 = LLSI5 Clock Disabled.
     * |        |          |1 = LLSI5 Clock Enabled.
     * |[22]    |LLSI6CKEN |LLSI6 Clock Enable Bit
     * |        |          |0 = LLSI6 Clock Disabled.
     * |        |          |1 = LLSI6 Clock Enabled.
     * |[23]    |LLSI7CKEN |LLSI7 Clock Enable Bit
     * |        |          |0 = LLSI7 Clock Disabled.
     * |        |          |1 = LLSI7 Clock Enabled.
     * |[24]    |LLSI8CKEN |LLSI8 Clock Enable Bit
     * |        |          |0 = LLSI8 Clock Disabled.
     * |        |          |1 = LLSI8 Clock Enabled.
     * |[25]    |LLSI9CKEN |LLSI9 Clock Enable Bit
     * |        |          |0 = LLSI9 Clock Disabled.
     * |        |          |1 = LLSI9 Clock Enabled.
     * @var CLK_T::CLKSEL3
     * Offset: 0x34  Clock Source Select Control Register 3
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[8]     |USBDSEL   |USBD Clock Source Selection (Write Protect)
     * |        |          |0 = Clock source from 48MHz internal hight speed RC oscillator (HIRC) clock.
     * |        |          |1 = Clock source from PLL clock.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var CLK_T::BODCLK
     * Offset: 0x40  Clock Source Select for BOD Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |VDETCKSEL |Clock Source Selection for Voltage Detector
     * |        |          |The Voltage Detector clock source for detecting external input voltage is defined by VDETCKSEL.
     * |        |          |0 = Clock source is from 10 kHz internal low speed RC oscillator (LIRC) clock.
     * |        |          |1 = Clock source is from 32.768 kHz external low speed crystal oscillator (LXT) clock.
     * |        |          |Note1: If LIRC is selected, LIRCEN (CLK_PWRCTL[3]) must be enabled.
     * |        |          |Note2: If LXT is selected, LXTEN (CLK_PWRCTL[1]) must be enabled.
     * |        |          |Note3: This bit is also used for Brown-out detector clock source.
     * @var CLK_T::LXTCTL
     * Offset: 0x54  LXT Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:1]   |GAIN      |Oscillator Gain Option
     * |        |          |User can select oscillator gain according to crystal external loading and operating temperature range.
     * |        |          |The greater gain value corresponding to stronger driving capability and higher power consumption.
     * |        |          |000 = L0 mode (ESR=35K; CL=25pF).
     * |        |          |001 = L1 mode (ESR=35K; CL=25pF).
     * |        |          |010 = L2 mode (ESR=35K; CL=25pF).
     * |        |          |011 = L3 mode (ESR=70K; CL=25pF).
     * |        |          |100 = L4 mode (ESR=70K; CL=25pF).
     * |        |          |101 = L5 mode (ESR=70K; CL=25pF).
     * |        |          |110 = L6 mode (ESR=90K; CL=25pF).
     * |        |          |111 = L7 mode (ESR=90K; CL=25pF).
     * @var CLK_T::CLKDCTL
     * Offset: 0x70  Clock Fail Detector Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4]     |HXTFDEN   |HXT Clock Fail Detector Enable Bit
     * |        |          |0 = 4~24 MHz external high speed crystal oscillator (HXT) clock Fail detector Disabled.
     * |        |          |1 = 4~24 MHz external high speed crystal oscillator (HXT) clock Fail detector Enabled.
     * |[5]     |HXTFIEN   |HXT Clock Fail Interrupt Enable Bit
     * |        |          |0 = 4~24 MHz external high speed crystal oscillator (HXT) clock Fail interrupt Disabled.
     * |        |          |1 = 4~24 MHz external high speed crystal oscillator (HXT) clock Fail interrupt Enabled.
     * |[12]    |LXTFDEN   |LXT Clock Fail Detector Enable Bit
     * |        |          |0 = 32.768 kHz external low speed crystal oscillator (LXT) clock Fail detector Disabled.
     * |        |          |1 = 32.768 kHz external low speed crystal oscillator (LXT) clock Fail detector Enabled.
     * |[13]    |LXTFIEN   |LXT Clock Fail Interrupt Enable Bit
     * |        |          |0 = 32.768 kHz external low speed crystal oscillator (LXT) clock Fail interrupt Disabled.
     * |        |          |1 = 32.768 kHz external low speed crystal oscillator (LXT) clock Fail interrupt Enabled.
     * |[16]    |HXTFQDEN  |HXT Clock Frequency Monitor Enable Bit
     * |        |          |0 = 4~24 MHz external high speed crystal oscillator (HXT) clock frequency monitor Disabled.
     * |        |          |1 = 4~24 MHz external high speed crystal oscillator (HXT) clock frequency monitor Enabled.
     * |[17]    |HXTFQIEN  |HXT Clock Frequency Monitor Interrupt Enable Bit
     * |        |          |0 = 4~24 MHz external high speed crystal oscillator (HXT) clock frequency monitor fail interrupt Disabled.
     * |        |          |1 = 4~24 MHz external high speed crystal oscillator (HXT) clock frequency monitor fail interrupt Enabled.
     * @var CLK_T::CLKDSTS
     * Offset: 0x74  Clock Fail Detector Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |HXTFIF    |HXT Clock Fail Interrupt Flag (Write Protect)
     * |        |          |0 = 4~24 MHz external high speed crystal oscillator (HXT) clock normal.
     * |        |          |1 = 4~24 MHz external high speed crystal oscillator (HXT) clock stop.
     * |        |          |Note1: This bit can be cleared to 0 by software writing 1.
     * |        |          |Note2: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[1]     |LXTFIF    |LXT Clock Fail Interrupt Flag (Write Protect)
     * |        |          |0 = 32.768 kHz external low speed crystal oscillator (LXT) clock normal.
     * |        |          |1 = 32.768 kHz external low speed crystal oscillator (LXT) clock stop.
     * |        |          |Note1: This bit can be cleared to 0 by software writing 1.
     * |        |          |Note2: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[8]     |HXTFQIF   |HXT Clock Frequency Monitor Interrupt Flag (Write Protect)
     * |        |          |0 = 4~24 MHz external high speed crystal oscillator (HXT) clock normal.
     * |        |          |1 = 4~24 MHz external high speed crystal oscillator (HXT) clock frequency abnormal.
     * |        |          |Note1: This bit can be cleared to 0 by software writing 1.
     * |        |          |Note2: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var CLK_T::CDUPB
     * Offset: 0x78  Clock Frequency Detector Upper Boundary Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[9:0]   |UPERBD    |HXT Clock Frequency Detector Upper Boundary
     * |        |          |The bits define the high value of frequency monitor window.
     * |        |          |When HXT frequency monitor value higher than this register, the HXT frequency detect fail interrupt flag will set to 1.
     * @var CLK_T::CDLOWB
     * Offset: 0x7C  Clock Frequency Detector Low Boundary Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[9:0]   |LOWERBD   |HXT Clock Frequency Detector Low Boundary
     * |        |          |The bits define the low value of frequency monitor window.
     * |        |          |When HXT frequency monitor value lower than this register, the HXT frequency detect fail interrupt flag will set to 1.
     */


    __IO uint32_t PWRCTL;                /*!< [0x0000] System Power-down Control Register                               */
    __IO uint32_t AHBCLK;                /*!< [0x0004] AHB Devices Clock Enable Control Register                        */
    __IO uint32_t APBCLK0;               /*!< [0x0008] APB Devices Clock Enable Control Register 0                      */
    __I  uint32_t STATUS;                /*!< [0x000c] Clock Status Monitor Register                                    */
    __IO uint32_t CLKSEL0;               /*!< [0x0010] Clock Source Select Control Register 0                           */
    __IO uint32_t CLKSEL1;               /*!< [0x0014] Clock Source Select Control Register 1                           */
    __IO uint32_t CLKDIV0;               /*!< [0x0018] Clock Divider Number Register 0                                  */
    __IO uint32_t CLKSEL2;               /*!< [0x001c] Clock Source Select Control Register 2                           */
    __IO uint32_t PLLCTL;                /*!< [0x0020] PLL Control Register                                             */
    __IO uint32_t CLKOCTL;               /*!< [0x0024] Clock Output Control Register                                    */
    __I  uint32_t RESERVE0[2];
    __IO uint32_t APBCLK1;               /*!< [0x0030] APB Devices Clock Enable Control Register 1                      */
    __IO uint32_t CLKSEL3;               /*!< [0x0034] Clock Source Select Control Register 3                           */
    __IO uint32_t CLKDIV1;               /*!< [0x0038] Clock Divider Number Register 1                                  */
    __I  uint32_t RESERVE1[1];
    __IO uint32_t BODCLK;                /*!< [0x0040] Clock Source Select for BOD Control Register                     */
    __I  uint32_t RESERVE2[4];
    __IO uint32_t LXTCTL;                /*!< [0x0054] LXT Control Register                                             */
    __I  uint32_t RESERVE3[6];
    __IO uint32_t CLKDCTL;               /*!< [0x0070] Clock Fail Detector Control Register                             */
    __IO uint32_t CLKDSTS;               /*!< [0x0074] Clock Fail Detector Status Register                              */
    __IO uint32_t CDUPB;                 /*!< [0x0078] Clock Frequency Detector Upper Boundary Register                 */
    __IO uint32_t CDLOWB;                /*!< [0x007c] Clock Frequency Detector Low Boundary Register                   */


} CLK_T;

/**
    @addtogroup CLK_CONST CLK Bit Field Definition
    Constant Definitions for CLK Controller
    @{
*/

#define CLK_PWRCTL_HXTEN_Pos             (0)                                               /*!< CLK_T::PWRCTL: HXTEN Position          */
#define CLK_PWRCTL_HXTEN_Msk             (0x1ul << CLK_PWRCTL_HXTEN_Pos)                   /*!< CLK_T::PWRCTL: HXTEN Mask              */

#define CLK_PWRCTL_LXTEN_Pos             (1)                                               /*!< CLK_T::PWRCTL: LXTEN Position          */
#define CLK_PWRCTL_LXTEN_Msk             (0x1ul << CLK_PWRCTL_LXTEN_Pos)                   /*!< CLK_T::PWRCTL: LXTEN Mask              */

#define CLK_PWRCTL_HIRCEN_Pos            (2)                                               /*!< CLK_T::PWRCTL: HIRCEN Position         */
#define CLK_PWRCTL_HIRCEN_Msk            (0x1ul << CLK_PWRCTL_HIRCEN_Pos)                  /*!< CLK_T::PWRCTL: HIRCEN Mask             */

#define CLK_PWRCTL_LIRCEN_Pos            (3)                                               /*!< CLK_T::PWRCTL: LIRCEN Position         */
#define CLK_PWRCTL_LIRCEN_Msk            (0x1ul << CLK_PWRCTL_LIRCEN_Pos)                  /*!< CLK_T::PWRCTL: LIRCEN Mask             */

#define CLK_PWRCTL_PDWKDLY_Pos           (4)                                               /*!< CLK_T::PWRCTL: PDWKDLY Position        */
#define CLK_PWRCTL_PDWKDLY_Msk           (0x1ul << CLK_PWRCTL_PDWKDLY_Pos)                 /*!< CLK_T::PWRCTL: PDWKDLY Mask            */

#define CLK_PWRCTL_PDWKIEN_Pos           (5)                                               /*!< CLK_T::PWRCTL: PDWKIEN Position        */
#define CLK_PWRCTL_PDWKIEN_Msk           (0x1ul << CLK_PWRCTL_PDWKIEN_Pos)                 /*!< CLK_T::PWRCTL: PDWKIEN Mask            */

#define CLK_PWRCTL_PDWKIF_Pos            (6)                                               /*!< CLK_T::PWRCTL: PDWKIF Position         */
#define CLK_PWRCTL_PDWKIF_Msk            (0x1ul << CLK_PWRCTL_PDWKIF_Pos)                  /*!< CLK_T::PWRCTL: PDWKIF Mask             */

#define CLK_PWRCTL_PDEN_Pos              (7)                                               /*!< CLK_T::PWRCTL: PDEN Position           */
#define CLK_PWRCTL_PDEN_Msk              (0x1ul << CLK_PWRCTL_PDEN_Pos)                    /*!< CLK_T::PWRCTL: PDEN Mask               */

#define CLK_PWRCTL_HXTGAIN_Pos           (10)                                              /*!< CLK_T::PWRCTL: HXTGAIN Position        */
#define CLK_PWRCTL_HXTGAIN_Msk           (0x7ul << CLK_PWRCTL_HXTGAIN_Pos)                 /*!< CLK_T::PWRCTL: HXTGAIN Mask            */

#define CLK_PWRCTL_HXTMD_Pos             (31)                                              /*!< CLK_T::PWRCTL: HXTMD Position          */
#define CLK_PWRCTL_HXTMD_Msk             (0x1ul << CLK_PWRCTL_HXTMD_Pos)                   /*!< CLK_T::PWRCTL: HXTMD Mask              */

#define CLK_AHBCLK_PDMACKEN_Pos          (1)                                               /*!< CLK_T::AHBCLK: PDMACKEN Position       */
#define CLK_AHBCLK_PDMACKEN_Msk          (0x1ul << CLK_AHBCLK_PDMACKEN_Pos)                /*!< CLK_T::AHBCLK: PDMACKEN Mask           */

#define CLK_AHBCLK_ISPCKEN_Pos           (2)                                               /*!< CLK_T::AHBCLK: ISPCKEN Position        */
#define CLK_AHBCLK_ISPCKEN_Msk           (0x1ul << CLK_AHBCLK_ISPCKEN_Pos)                 /*!< CLK_T::AHBCLK: ISPCKEN Mask            */

#define CLK_AHBCLK_CRCCKEN_Pos           (7)                                               /*!< CLK_T::AHBCLK: CRCCKEN Position        */
#define CLK_AHBCLK_CRCCKEN_Msk           (0x1ul << CLK_AHBCLK_CRCCKEN_Pos)                 /*!< CLK_T::AHBCLK: CRCCKEN Mask            */

#define CLK_AHBCLK_FMCIDLE_Pos           (15)                                              /*!< CLK_T::AHBCLK: FMCIDLE Position        */
#define CLK_AHBCLK_FMCIDLE_Msk           (0x1ul << CLK_AHBCLK_FMCIDLE_Pos)                 /*!< CLK_T::AHBCLK: FMCIDLE Mask            */

#define CLK_AHBCLK_GPIOACKEN_Pos         (16)                                              /*!< CLK_T::AHBCLK: GPIOACKEN Position      */
#define CLK_AHBCLK_GPIOACKEN_Msk         (0x1ul << CLK_AHBCLK_GPIOACKEN_Pos)               /*!< CLK_T::AHBCLK: GPIOACKEN Mask          */

#define CLK_AHBCLK_GPIOBCKEN_Pos         (17)                                              /*!< CLK_T::AHBCLK: GPIOBCKEN Position      */
#define CLK_AHBCLK_GPIOBCKEN_Msk         (0x1ul << CLK_AHBCLK_GPIOBCKEN_Pos)               /*!< CLK_T::AHBCLK: GPIOBCKEN Mask          */

#define CLK_AHBCLK_GPIOCCKEN_Pos         (18)                                              /*!< CLK_T::AHBCLK: GPIOCCKEN Position      */
#define CLK_AHBCLK_GPIOCCKEN_Msk         (0x1ul << CLK_AHBCLK_GPIOCCKEN_Pos)               /*!< CLK_T::AHBCLK: GPIOCCKEN Mask          */

#define CLK_AHBCLK_GPIODCKEN_Pos         (19)                                              /*!< CLK_T::AHBCLK: GPIODCKEN Position      */
#define CLK_AHBCLK_GPIODCKEN_Msk         (0x1ul << CLK_AHBCLK_GPIODCKEN_Pos)               /*!< CLK_T::AHBCLK: GPIODCKEN Mask          */

#define CLK_AHBCLK_GPIOFCKEN_Pos         (21)                                              /*!< CLK_T::AHBCLK: GPIOFCKEN Position      */
#define CLK_AHBCLK_GPIOFCKEN_Msk         (0x1ul << CLK_AHBCLK_GPIOFCKEN_Pos)               /*!< CLK_T::AHBCLK: GPIOFCKEN Mask          */

#define CLK_APBCLK0_WDTCKEN_Pos          (0)                                               /*!< CLK_T::APBCLK0: WDTCKEN Position       */
#define CLK_APBCLK0_WDTCKEN_Msk          (0x1ul << CLK_APBCLK0_WDTCKEN_Pos)                /*!< CLK_T::APBCLK0: WDTCKEN Mask           */

#define CLK_APBCLK0_TMR0CKEN_Pos         (2)                                               /*!< CLK_T::APBCLK0: TMR0CKEN Position      */
#define CLK_APBCLK0_TMR0CKEN_Msk         (0x1ul << CLK_APBCLK0_TMR0CKEN_Pos)               /*!< CLK_T::APBCLK0: TMR0CKEN Mask          */

#define CLK_APBCLK0_TMR1CKEN_Pos         (3)                                               /*!< CLK_T::APBCLK0: TMR1CKEN Position      */
#define CLK_APBCLK0_TMR1CKEN_Msk         (0x1ul << CLK_APBCLK0_TMR1CKEN_Pos)               /*!< CLK_T::APBCLK0: TMR1CKEN Mask          */

#define CLK_APBCLK0_TMR2CKEN_Pos         (4)                                               /*!< CLK_T::APBCLK0: TMR2CKEN Position      */
#define CLK_APBCLK0_TMR2CKEN_Msk         (0x1ul << CLK_APBCLK0_TMR2CKEN_Pos)               /*!< CLK_T::APBCLK0: TMR2CKEN Mask          */

#define CLK_APBCLK0_TMR3CKEN_Pos         (5)                                               /*!< CLK_T::APBCLK0: TMR3CKEN Position      */
#define CLK_APBCLK0_TMR3CKEN_Msk         (0x1ul << CLK_APBCLK0_TMR3CKEN_Pos)               /*!< CLK_T::APBCLK0: TMR3CKEN Mask          */

#define CLK_APBCLK0_CLKOCKEN_Pos         (6)                                               /*!< CLK_T::APBCLK0: CLKOCKEN Position      */
#define CLK_APBCLK0_CLKOCKEN_Msk         (0x1ul << CLK_APBCLK0_CLKOCKEN_Pos)               /*!< CLK_T::APBCLK0: CLKOCKEN Mask          */

#define CLK_APBCLK0_I2C0CKEN_Pos         (8)                                               /*!< CLK_T::APBCLK0: I2C0CKEN Position      */
#define CLK_APBCLK0_I2C0CKEN_Msk         (0x1ul << CLK_APBCLK0_I2C0CKEN_Pos)               /*!< CLK_T::APBCLK0: I2C0CKEN Mask          */

#define CLK_APBCLK0_I2C1CKEN_Pos         (9)                                               /*!< CLK_T::APBCLK0: I2C1CKEN Position      */
#define CLK_APBCLK0_I2C1CKEN_Msk         (0x1ul << CLK_APBCLK0_I2C1CKEN_Pos)               /*!< CLK_T::APBCLK0: I2C1CKEN Mask          */

#define CLK_APBCLK0_SPI0CKEN_Pos         (12)                                              /*!< CLK_T::APBCLK0: SPI0CKEN Position      */
#define CLK_APBCLK0_SPI0CKEN_Msk         (0x1ul << CLK_APBCLK0_SPI0CKEN_Pos)               /*!< CLK_T::APBCLK0: SPI0CKEN Mask          */

#define CLK_APBCLK0_SPI1CKEN_Pos         (13)                                              /*!< CLK_T::APBCLK0: SPI1CKEN Position      */
#define CLK_APBCLK0_SPI1CKEN_Msk         (0x1ul << CLK_APBCLK0_SPI1CKEN_Pos)               /*!< CLK_T::APBCLK0: SPI1CKEN Mask          */

#define CLK_APBCLK0_UART0CKEN_Pos        (16)                                              /*!< CLK_T::APBCLK0: UART0CKEN Position     */
#define CLK_APBCLK0_UART0CKEN_Msk        (0x1ul << CLK_APBCLK0_UART0CKEN_Pos)              /*!< CLK_T::APBCLK0: UART0CKEN Mask         */

#define CLK_APBCLK0_UART1CKEN_Pos        (17)                                              /*!< CLK_T::APBCLK0: UART1CKEN Position     */
#define CLK_APBCLK0_UART1CKEN_Msk        (0x1ul << CLK_APBCLK0_UART1CKEN_Pos)              /*!< CLK_T::APBCLK0: UART1CKEN Mask         */

#define CLK_APBCLK0_BPWM0CKEN_Pos        (20)                                              /*!< CLK_T::APBCLK0: BPWM0CKEN Position     */
#define CLK_APBCLK0_BPWM0CKEN_Msk        (0x1ul << CLK_APBCLK0_BPWM0CKEN_Pos)              /*!< CLK_T::APBCLK0: BPWM0CKEN Mask         */

#define CLK_APBCLK0_BPWM1CKEN_Pos        (21)                                              /*!< CLK_T::APBCLK0: BPWM1CKEN Position     */
#define CLK_APBCLK0_BPWM1CKEN_Msk        (0x1ul << CLK_APBCLK0_BPWM1CKEN_Pos)              /*!< CLK_T::APBCLK0: BPWM1CKEN Mask         */

#define CLK_APBCLK0_BPWM2CKEN_Pos        (22)                                              /*!< CLK_T::APBCLK0: BPWM2CKEN Position     */
#define CLK_APBCLK0_BPWM2CKEN_Msk        (0x1ul << CLK_APBCLK0_BPWM2CKEN_Pos)              /*!< CLK_T::APBCLK0: BPWM2CKEN Mask         */

#define CLK_APBCLK0_BPWM3CKEN_Pos        (23)                                              /*!< CLK_T::APBCLK0: BPWM3CKEN Position     */
#define CLK_APBCLK0_BPWM3CKEN_Msk        (0x1ul << CLK_APBCLK0_BPWM3CKEN_Pos)              /*!< CLK_T::APBCLK0: BPWM3CKEN Mask         */

#define CLK_APBCLK0_USBDCKEN_Pos         (27)                                              /*!< CLK_T::APBCLK0: USBDCKEN Position      */
#define CLK_APBCLK0_USBDCKEN_Msk         (0x1ul << CLK_APBCLK0_USBDCKEN_Pos)               /*!< CLK_T::APBCLK0: USBDCKEN Mask          */

#define CLK_APBCLK0_ADCCKEN_Pos          (28)                                              /*!< CLK_T::APBCLK0: ADCCKEN Position       */
#define CLK_APBCLK0_ADCCKEN_Msk          (0x1ul << CLK_APBCLK0_ADCCKEN_Pos)                /*!< CLK_T::APBCLK0: ADCCKEN Mask           */

#define CLK_STATUS_HXTSTB_Pos            (0)                                               /*!< CLK_T::STATUS: HXTSTB Position         */
#define CLK_STATUS_HXTSTB_Msk            (0x1ul << CLK_STATUS_HXTSTB_Pos)                  /*!< CLK_T::STATUS: HXTSTB Mask             */

#define CLK_STATUS_LXTSTB_Pos            (1)                                               /*!< CLK_T::STATUS: LXTSTB Position         */
#define CLK_STATUS_LXTSTB_Msk            (0x1ul << CLK_STATUS_LXTSTB_Pos)                  /*!< CLK_T::STATUS: LXTSTB Mask             */

#define CLK_STATUS_PLLSTB_Pos            (2)                                               /*!< CLK_T::STATUS: PLLSTB Position         */
#define CLK_STATUS_PLLSTB_Msk            (0x1ul << CLK_STATUS_PLLSTB_Pos)                  /*!< CLK_T::STATUS: PLLSTB Mask             */

#define CLK_STATUS_LIRCSTB_Pos           (3)                                               /*!< CLK_T::STATUS: LIRCSTB Position        */
#define CLK_STATUS_LIRCSTB_Msk           (0x1ul << CLK_STATUS_LIRCSTB_Pos)                 /*!< CLK_T::STATUS: LIRCSTB Mask            */

#define CLK_STATUS_HIRCSTB_Pos           (4)                                               /*!< CLK_T::STATUS: HIRCSTB Position        */
#define CLK_STATUS_HIRCSTB_Msk           (0x1ul << CLK_STATUS_HIRCSTB_Pos)                 /*!< CLK_T::STATUS: HIRCSTB Mask            */

#define CLK_STATUS_CLKSFAIL_Pos          (7)                                               /*!< CLK_T::STATUS: CLKSFAIL Position       */
#define CLK_STATUS_CLKSFAIL_Msk          (0x1ul << CLK_STATUS_CLKSFAIL_Pos)                /*!< CLK_T::STATUS: CLKSFAIL Mask           */

#define CLK_CLKSEL0_HCLKSEL_Pos          (0)                                               /*!< CLK_T::CLKSEL0: HCLKSEL Position       */
#define CLK_CLKSEL0_HCLKSEL_Msk          (0x7ul << CLK_CLKSEL0_HCLKSEL_Pos)                /*!< CLK_T::CLKSEL0: HCLKSEL Mask           */

#define CLK_CLKSEL0_STCLKSEL_Pos         (3)                                               /*!< CLK_T::CLKSEL0: STCLKSEL Position      */
#define CLK_CLKSEL0_STCLKSEL_Msk         (0x7ul << CLK_CLKSEL0_STCLKSEL_Pos)               /*!< CLK_T::CLKSEL0: STCLKSEL Mask          */

#define CLK_CLKSEL0_PCLK0SEL_Pos         (6)                                               /*!< CLK_T::CLKSEL0: PCLK0SEL Position      */
#define CLK_CLKSEL0_PCLK0SEL_Msk         (0x1ul << CLK_CLKSEL0_PCLK0SEL_Pos)               /*!< CLK_T::CLKSEL0: PCLK0SEL Mask          */

#define CLK_CLKSEL0_PCLK1SEL_Pos         (7)                                               /*!< CLK_T::CLKSEL0: PCLK1SEL Position      */
#define CLK_CLKSEL0_PCLK1SEL_Msk         (0x1ul << CLK_CLKSEL0_PCLK1SEL_Pos)               /*!< CLK_T::CLKSEL0: PCLK1SEL Mask          */

#define CLK_CLKSEL1_WDTSEL_Pos           (0)                                               /*!< CLK_T::CLKSEL1: WDTSEL Position        */
#define CLK_CLKSEL1_WDTSEL_Msk           (0x3ul << CLK_CLKSEL1_WDTSEL_Pos)                 /*!< CLK_T::CLKSEL1: WDTSEL Mask            */

#define CLK_CLKSEL1_ADCSEL_Pos           (2)                                               /*!< CLK_T::CLKSEL1: ADCSEL Position        */
#define CLK_CLKSEL1_ADCSEL_Msk           (0x3ul << CLK_CLKSEL1_ADCSEL_Pos)                 /*!< CLK_T::CLKSEL1: ADCSEL Mask            */

#define CLK_CLKSEL1_TMR0SEL_Pos          (8)                                               /*!< CLK_T::CLKSEL1: TMR0SEL Position       */
#define CLK_CLKSEL1_TMR0SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR0SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR0SEL Mask           */

#define CLK_CLKSEL1_TMR1SEL_Pos          (12)                                              /*!< CLK_T::CLKSEL1: TMR1SEL Position       */
#define CLK_CLKSEL1_TMR1SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR1SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR1SEL Mask           */

#define CLK_CLKSEL1_TMR2SEL_Pos          (16)                                              /*!< CLK_T::CLKSEL1: TMR2SEL Position       */
#define CLK_CLKSEL1_TMR2SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR2SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR2SEL Mask           */

#define CLK_CLKSEL1_TMR3SEL_Pos          (20)                                              /*!< CLK_T::CLKSEL1: TMR3SEL Position       */
#define CLK_CLKSEL1_TMR3SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR3SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR3SEL Mask           */

#define CLK_CLKSEL1_UART0SEL_Pos         (24)                                              /*!< CLK_T::CLKSEL1: UART0SEL Position      */
#define CLK_CLKSEL1_UART0SEL_Msk         (0x3ul << CLK_CLKSEL1_UART0SEL_Pos)               /*!< CLK_T::CLKSEL1: UART0SEL Mask          */

#define CLK_CLKSEL1_UART1SEL_Pos         (26)                                              /*!< CLK_T::CLKSEL1: UART1SEL Position      */
#define CLK_CLKSEL1_UART1SEL_Msk         (0x3ul << CLK_CLKSEL1_UART1SEL_Pos)               /*!< CLK_T::CLKSEL1: UART1SEL Mask          */

#define CLK_CLKDIV0_HCLKDIV_Pos          (0)                                               /*!< CLK_T::CLKDIV0: HCLKDIV Position       */
#define CLK_CLKDIV0_HCLKDIV_Msk          (0xful << CLK_CLKDIV0_HCLKDIV_Pos)                /*!< CLK_T::CLKDIV0: HCLKDIV Mask           */

#define CLK_CLKDIV0_USBDIV_Pos           (4)                                               /*!< CLK_T::CLKDIV0: USBDIV Position        */
#define CLK_CLKDIV0_USBDIV_Msk           (0xful << CLK_CLKDIV0_USBDIV_Pos)                 /*!< CLK_T::CLKDIV0: USBDIV Mask            */

#define CLK_CLKDIV0_UART0DIV_Pos         (8)                                               /*!< CLK_T::CLKDIV0: UART0DIV Position      */
#define CLK_CLKDIV0_UART0DIV_Msk         (0xful << CLK_CLKDIV0_UART0DIV_Pos)               /*!< CLK_T::CLKDIV0: UART0DIV Mask          */

#define CLK_CLKDIV0_UART1DIV_Pos         (12)                                               /*!< CLK_T::CLKDIV0: UART1DIV Position      */
#define CLK_CLKDIV0_UART1DIV_Msk         (0xful << CLK_CLKDIV0_UART1DIV_Pos)               /*!< CLK_T::CLKDIV0: UART1DIV Mask          */

#define CLK_CLKDIV0_ADCDIV_Pos           (16)                                              /*!< CLK_T::CLKDIV0: ADCDIV Position        */
#define CLK_CLKDIV0_ADCDIV_Msk           (0xfful << CLK_CLKDIV0_ADCDIV_Pos)                /*!< CLK_T::CLKDIV0: ADCDIV Mask            */

#define CLK_CLKSEL2_CLKOSEL_Pos          (2)                                               /*!< CLK_T::CLKSEL2: CLKOSEL Position       */
#define CLK_CLKSEL2_CLKOSEL_Msk          (0x7ul << CLK_CLKSEL2_CLKOSEL_Pos)                /*!< CLK_T::CLKSEL2: CLKOSEL Mask           */

#define CLK_CLKSEL2_WWDTSEL_Pos          (16)                                              /*!< CLK_T::CLKSEL2: WWDTSEL Position       */
#define CLK_CLKSEL2_WWDTSEL_Msk          (0x3ul << CLK_CLKSEL2_WWDTSEL_Pos)                /*!< CLK_T::CLKSEL2: WWDTSEL Mask           */

#define CLK_CLKSEL2_SPI0SEL_Pos          (24)                                              /*!< CLK_T::CLKSEL2: SPI0SEL Position       */
#define CLK_CLKSEL2_SPI0SEL_Msk          (0x3ul << CLK_CLKSEL2_SPI0SEL_Pos)                /*!< CLK_T::CLKSEL2: SPI0SEL Mask           */

#define CLK_CLKSEL2_SPI1SEL_Pos          (26)                                              /*!< CLK_T::CLKSEL2: SPI1SEL Position       */
#define CLK_CLKSEL2_SPI1SEL_Msk          (0x3ul << CLK_CLKSEL2_SPI1SEL_Pos)                /*!< CLK_T::CLKSEL2: SPI1SEL Mask           */

#define CLK_PLLCTL_FBDIV_Pos             (0)                                               /*!< CLK_T::PLLCTL: FBDIV Position          */
#define CLK_PLLCTL_FBDIV_Msk             (0x1fful << CLK_PLLCTL_FBDIV_Pos)                 /*!< CLK_T::PLLCTL: FBDIV Mask              */

#define CLK_PLLCTL_INDIV_Pos             (9)                                               /*!< CLK_T::PLLCTL: INDIV Position          */
#define CLK_PLLCTL_INDIV_Msk             (0x1ful << CLK_PLLCTL_INDIV_Pos)                  /*!< CLK_T::PLLCTL: INDIV Mask              */

#define CLK_PLLCTL_OUTDIV_Pos            (14)                                              /*!< CLK_T::PLLCTL: OUTDIV Position         */
#define CLK_PLLCTL_OUTDIV_Msk            (0x3ul << CLK_PLLCTL_OUTDIV_Pos)                  /*!< CLK_T::PLLCTL: OUTDIV Mask             */

#define CLK_PLLCTL_PD_Pos                (16)                                              /*!< CLK_T::PLLCTL: PD Position             */
#define CLK_PLLCTL_PD_Msk                (0x1ul << CLK_PLLCTL_PD_Pos)                      /*!< CLK_T::PLLCTL: PD Mask                 */

#define CLK_PLLCTL_BP_Pos                (17)                                              /*!< CLK_T::PLLCTL: BP Position             */
#define CLK_PLLCTL_BP_Msk                (0x1ul << CLK_PLLCTL_BP_Pos)                      /*!< CLK_T::PLLCTL: BP Mask                 */

#define CLK_PLLCTL_OE_Pos                (18)                                              /*!< CLK_T::PLLCTL: OE Position             */
#define CLK_PLLCTL_OE_Msk                (0x1ul << CLK_PLLCTL_OE_Pos)                      /*!< CLK_T::PLLCTL: OE Mask                 */

#define CLK_PLLCTL_PLLSRC_Pos            (19)                                              /*!< CLK_T::PLLCTL: PLLSRC Position         */
#define CLK_PLLCTL_PLLSRC_Msk            (0x1ul << CLK_PLLCTL_PLLSRC_Pos)                  /*!< CLK_T::PLLCTL: PLLSRC Mask             */

#define CLK_PLLCTL_STBSEL_Pos            (23)                                              /*!< CLK_T::PLLCTL: STBSEL Position         */
#define CLK_PLLCTL_STBSEL_Msk            (0x1ul << CLK_PLLCTL_STBSEL_Pos)                  /*!< CLK_T::PLLCTL: STBSEL Mask             */

#define CLK_CLKOCTL_FREQSEL_Pos          (0)                                               /*!< CLK_T::CLKOCTL: FREQSEL Position       */
#define CLK_CLKOCTL_FREQSEL_Msk          (0xful << CLK_CLKOCTL_FREQSEL_Pos)                /*!< CLK_T::CLKOCTL: FREQSEL Mask           */

#define CLK_CLKOCTL_CLKOEN_Pos           (4)                                               /*!< CLK_T::CLKOCTL: CLKOEN Position        */
#define CLK_CLKOCTL_CLKOEN_Msk           (0x1ul << CLK_CLKOCTL_CLKOEN_Pos)                 /*!< CLK_T::CLKOCTL: CLKOEN Mask            */

#define CLK_CLKOCTL_DIV1EN_Pos           (5)                                               /*!< CLK_T::CLKOCTL: DIV1EN Position        */
#define CLK_CLKOCTL_DIV1EN_Msk           (0x1ul << CLK_CLKOCTL_DIV1EN_Pos)                 /*!< CLK_T::CLKOCTL: DIV1EN Mask            */

#define CLK_APBCLK1_LLSI0CKEN_Pos        (16)                                              /*!< CLK_T::APBCLK1: LLSI0CKEN Position      */
#define CLK_APBCLK1_LLSI0CKEN_Msk        (0x1ul << CLK_APBCLK1_LLSI0CKEN_Pos)              /*!< CLK_T::APBCLK1: LLSI0CKEN Mask          */

#define CLK_APBCLK1_LLSI1CKEN_Pos        (17)                                              /*!< CLK_T::APBCLK1: LLSI1CKEN Position      */
#define CLK_APBCLK1_LLSI1CKEN_Msk        (0x1ul << CLK_APBCLK1_LLSI1CKEN_Pos)              /*!< CLK_T::APBCLK1: LLSI1CKEN Mask          */

#define CLK_APBCLK1_LLSI2CKEN_Pos        (18)                                              /*!< CLK_T::APBCLK1: LLSI2CKEN Position      */
#define CLK_APBCLK1_LLSI2CKEN_Msk        (0x1ul << CLK_APBCLK1_LLSI2CKEN_Pos)              /*!< CLK_T::APBCLK1: LLSI2CKEN Mask          */

#define CLK_APBCLK1_LLSI3CKEN_Pos        (19)                                              /*!< CLK_T::APBCLK1: LLSI3CKEN Position      */
#define CLK_APBCLK1_LLSI3CKEN_Msk        (0x1ul << CLK_APBCLK1_LLSI3CKEN_Pos)              /*!< CLK_T::APBCLK1: LLSI3CKEN Mask          */

#define CLK_APBCLK1_LLSI4CKEN_Pos        (20)                                              /*!< CLK_T::APBCLK1: LLSI4CKEN Position      */
#define CLK_APBCLK1_LLSI4CKEN_Msk        (0x1ul << CLK_APBCLK1_LLSI4CKEN_Pos)              /*!< CLK_T::APBCLK1: LLSI4CKEN Mask          */

#define CLK_APBCLK1_LLSI5CKEN_Pos        (21)                                              /*!< CLK_T::APBCLK1: LLSI5CKEN Position      */
#define CLK_APBCLK1_LLSI5CKEN_Msk        (0x1ul << CLK_APBCLK1_LLSI5CKEN_Pos)              /*!< CLK_T::APBCLK1: LLSI5CKEN Mask          */

#define CLK_APBCLK1_LLSI6CKEN_Pos        (22)                                              /*!< CLK_T::APBCLK1: LLSI6CKEN Position      */
#define CLK_APBCLK1_LLSI6CKEN_Msk        (0x1ul << CLK_APBCLK1_LLSI6CKEN_Pos)              /*!< CLK_T::APBCLK1: LLSI6CKEN Mask          */

#define CLK_APBCLK1_LLSI7CKEN_Pos        (23)                                              /*!< CLK_T::APBCLK1: LLSI7CKEN Position      */
#define CLK_APBCLK1_LLSI7CKEN_Msk        (0x1ul << CLK_APBCLK1_LLSI7CKEN_Pos)              /*!< CLK_T::APBCLK1: LLSI7CKEN Mask          */

#define CLK_APBCLK1_LLSI8CKEN_Pos        (24)                                              /*!< CLK_T::APBCLK1: LLSI8CKEN Position      */
#define CLK_APBCLK1_LLSI8CKEN_Msk        (0x1ul << CLK_APBCLK1_LLSI8CKEN_Pos)              /*!< CLK_T::APBCLK1: LLSI8CKEN Mask          */

#define CLK_APBCLK1_LLSI9CKEN_Pos        (25)                                              /*!< CLK_T::APBCLK1: LLSI9CKEN Position      */
#define CLK_APBCLK1_LLSI9CKEN_Msk        (0x1ul << CLK_APBCLK1_LLSI9CKEN_Pos)              /*!< CLK_T::APBCLK1: LLSI9CKEN Mask          */

#define CLK_CLKSEL3_USBDSEL_Pos          (8)                                               /*!< CLK_T::CLKSEL3: USBDSEL Position       */
#define CLK_CLKSEL3_USBDSEL_Msk          (0x1ul << CLK_CLKSEL3_USBDSEL_Pos)                /*!< CLK_T::CLKSEL3: USBDSEL Mask           */

#define CLK_BODCLK_VDETCKSEL_Pos         (0)                                               /*!< CLK_T::BODCLK: VDETCKSEL Position      */
#define CLK_BODCLK_VDETCKSEL_Msk         (0x1ul << CLK_BODCLK_VDETCKSEL_Pos)               /*!< CLK_T::BODCLK: VDETCKSEL Mask          */

#define CLK_LXTCTL_GAIN_Pos              (1)                                               /*!< CLK_T::LXTCTL: GAIN Position           */
#define CLK_LXTCTL_GAIN_Msk              (0x7ul << CLK_LXTCTL_GAIN_Pos)                    /*!< CLK_T::LXTCTL: GAIN Mask               */

#define CLK_CLKDCTL_HXTFDEN_Pos          (4)                                               /*!< CLK_T::CLKDCTL: HXTFDEN Position       */
#define CLK_CLKDCTL_HXTFDEN_Msk          (0x1ul << CLK_CLKDCTL_HXTFDEN_Pos)                /*!< CLK_T::CLKDCTL: HXTFDEN Mask           */

#define CLK_CLKDCTL_HXTFIEN_Pos          (5)                                               /*!< CLK_T::CLKDCTL: HXTFIEN Position       */
#define CLK_CLKDCTL_HXTFIEN_Msk          (0x1ul << CLK_CLKDCTL_HXTFIEN_Pos)                /*!< CLK_T::CLKDCTL: HXTFIEN Mask           */

#define CLK_CLKDCTL_LXTFDEN_Pos          (12)                                              /*!< CLK_T::CLKDCTL: LXTFDEN Position       */
#define CLK_CLKDCTL_LXTFDEN_Msk          (0x1ul << CLK_CLKDCTL_LXTFDEN_Pos)                /*!< CLK_T::CLKDCTL: LXTFDEN Mask           */

#define CLK_CLKDCTL_LXTFIEN_Pos          (13)                                              /*!< CLK_T::CLKDCTL: LXTFIEN Position       */
#define CLK_CLKDCTL_LXTFIEN_Msk          (0x1ul << CLK_CLKDCTL_LXTFIEN_Pos)                /*!< CLK_T::CLKDCTL: LXTFIEN Mask           */

#define CLK_CLKDCTL_HXTFQDEN_Pos         (16)                                              /*!< CLK_T::CLKDCTL: HXTFQDEN Position      */
#define CLK_CLKDCTL_HXTFQDEN_Msk         (0x1ul << CLK_CLKDCTL_HXTFQDEN_Pos)               /*!< CLK_T::CLKDCTL: HXTFQDEN Mask          */

#define CLK_CLKDCTL_HXTFQIEN_Pos         (17)                                              /*!< CLK_T::CLKDCTL: HXTFQIEN Position      */
#define CLK_CLKDCTL_HXTFQIEN_Msk         (0x1ul << CLK_CLKDCTL_HXTFQIEN_Pos)               /*!< CLK_T::CLKDCTL: HXTFQIEN Mask          */

#define CLK_CLKDSTS_HXTFIF_Pos           (0)                                               /*!< CLK_T::CLKDSTS: HXTFIF Position        */
#define CLK_CLKDSTS_HXTFIF_Msk           (0x1ul << CLK_CLKDSTS_HXTFIF_Pos)                 /*!< CLK_T::CLKDSTS: HXTFIF Mask            */

#define CLK_CLKDSTS_LXTFIF_Pos           (1)                                               /*!< CLK_T::CLKDSTS: LXTFIF Position        */
#define CLK_CLKDSTS_LXTFIF_Msk           (0x1ul << CLK_CLKDSTS_LXTFIF_Pos)                 /*!< CLK_T::CLKDSTS: LXTFIF Mask            */

#define CLK_CLKDSTS_HXTFQIF_Pos          (8)                                               /*!< CLK_T::CLKDSTS: HXTFQIF Position       */
#define CLK_CLKDSTS_HXTFQIF_Msk          (0x1ul << CLK_CLKDSTS_HXTFQIF_Pos)                /*!< CLK_T::CLKDSTS: HXTFQIF Mask           */

#define CLK_CDUPB_UPERBD_Pos             (0)                                               /*!< CLK_T::CDUPB: UPERBD Position          */
#define CLK_CDUPB_UPERBD_Msk             (0x3fful << CLK_CDUPB_UPERBD_Pos)                 /*!< CLK_T::CDUPB: UPERBD Mask              */

#define CLK_CDLOWB_LOWERBD_Pos           (0)                                               /*!< CLK_T::CDLOWB: LOWERBD Position        */
#define CLK_CDLOWB_LOWERBD_Msk           (0x3fful << CLK_CDLOWB_LOWERBD_Pos)               /*!< CLK_T::CDLOWB: LOWERBD Mask            */

/**@}*/ /* CLK_CONST */
/**@}*/ /* end of CLK register group */



/*---------------------- Cyclic Redundancy Check Controller -------------------------*/
/**
    @addtogroup CRC Cyclic Redundancy Check Controller(CRC)
    Memory Mapped Structure for CRC Controller
    @{
*/

typedef struct
{


    /**
     * @var CRC_T::CTL
     * Offset: 0x00  CRC Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CRCEN     |CRC Generator Enable Bit
     * |        |          |Set this bit 1 to enable CRC generator for CRC operation.
     * |        |          |0 = No effect.
     * |        |          |1 = CRC generator is active.
     * |[1]     |CHKSINIT  |Checksum Initialization
     * |        |          |Set this bit will auto reolad SEED (CRC_SEED [31:0]) to CHECKSUM (CRC_CHECKSUM[31:0]) as CRC operation initial value.
     * |        |          |0 = No effect.
     * |        |          |1 = Reload SEED value to CHECKSUM as CRC operation initial value.
     * |        |          |The others contents of CRC_CTL register will not be cleared.
     * |        |          |Note: This bit will be cleared automatically.
     * |[24]    |DATREV    |Write Data Bit Order Reverse Enable Bit
     * |        |          |This bit is used to enable the bit order reverse function per byte for write data value DATA (CRC_DATA[31:0]).
     * |        |          |0 = Bit order reversed for CRC DATA Disabled.
     * |        |          |1 = Bit order reversed for CRC DATA Enabled (per byte).
     * |        |          |Note: If the write data is 0xAABBCCDD, the bit order reverse for CRC write data in is 0x55DD33BB.
     * |[25]    |CHKSREV   |Checksum Bit Order Reverse Enable Bit
     * |        |          |This bit is used to enable the bit order reverse function for checksum result CHECKSUM (CRC_CHECKSUM[31:0]).
     * |        |          |0 = Bit order reverse for CRC CHECKSUMCRC Disabled.
     * |        |          |1 = Bit order reverse for CRC CHECKSUMCRC Enabled.
     * |        |          |Note: If the checksum result is 0xDD7B0F2E, the bit order reverse result for CRC checksum is 0x74F0DEBB.
     * |[26]    |DATFMT    |Write Data 1's Complement Enable Bit
     * |        |          |This bit is used to enable the 1's complement function for write data value DATA (CRC_DATA[31:0]).
     * |        |          |0 = 1's complement for CRC DATA Disabled.
     * |        |          |1 = 1's complement for CRC DATA Enabled.
     * |[27]    |CHKSFMT   |Checksum 1's Complement Enable Bit
     * |        |          |This bit is used to enable the 1's complement function for checksum result in CHECKSUM (CRC_CHECKSUM[31:0]).
     * |        |          |0 = 1's complement for CRC CHECKSUM Disabled.
     * |        |          |1 = 1's complement for CRC CHECKSUM Enabled.
     * |[29:28] |DATLEN    |CPU Write Data Length
     * |        |          |This field indicates the valid write data length of DATA (CRC_DAT[31:0]).
     * |        |          |00 = Data length is 8-bit mode.
     * |        |          |01 = Data length is 16-bit mode.
     * |        |          |1x = Data length is 32-bit mode.
     * |        |          |Note: When the write data length is 8-bit mode, the valid data in CRC_DAT register is only DATA[7:0] bits; if the write data length is 16-bit mode, the valid data in CRC_DAT register is only DATA[15:0]
     * |[31:30] |CRCMODE   |CRC Polynomial Mode
     * |        |          |This field indicates the CRC operation polynomial mode.
     * |        |          |00 = CRC-CCITT Polynomial mode.
     * |        |          |01 = CRC-8 Polynomial mode.
     * |        |          |10 = CRC-16 Polynomial mode.
     * |        |          |11 = CRC-32 Polynomial mode.
     * @var CRC_T::DAT
     * Offset: 0x04  CRC Write Data Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |DATA      |CRC Write Data Bits
     * |        |          |User can write data directly by CPU mode or use PDMA function to write data to this field to perform CRC operation.
     * |        |          |Note: When the write data length is 8-bit mode, the valid data in CRC_DAT register is only DATA[7:0] bits; if the write data length is 16-bit mode, the valid data in CRC_DAT register is only DATA[15:0].
     * @var CRC_T::SEED
     * Offset: 0x08  CRC Seed Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |SEED      |CRC Seed Value
     * |        |          |This field indicates the CRC seed value.
     * |        |          |Note1: This SEED value will be loaded to checksum initial value CHECKSUM (CRC_CHECKSUM[31:0]) after set CHKSINIT (CRC_CTL[1]) to 1.
     * |        |          |Note2: The valid bits of CRC_SEED[31:0] is correlated to CRCMODE (CRC_CTL[31:30]).
     * @var CRC_T::CHECKSUM
     * Offset: 0x0C  CRC Checksum Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |CHECKSUM  |CRC Checksum Results
     * |        |          |This field indicates the CRC checksum result.
     * |        |          |Note: The valid bits of CRC_CHECKSUM[31:0] is correlated to CRCMODE (CRC_CTL[31:30]).
     */
    __IO uint32_t CTL;                   /*!< [0x0000] CRC Control Register                                             */
    __IO uint32_t DAT;                   /*!< [0x0004] CRC Write Data Register                                          */
    __IO uint32_t SEED;                  /*!< [0x0008] CRC Seed Register                                                */
    __I  uint32_t CHECKSUM;              /*!< [0x000c] CRC Checksum Register                                            */

} CRC_T;

/**
    @addtogroup CRC_CONST CRC Bit Field Definition
    Constant Definitions for CRC Controller
    @{
*/

#define CRC_CTL_CRCEN_Pos                (0)                                               /*!< CRC_T::CTL: CRCEN Position             */
#define CRC_CTL_CRCEN_Msk                (0x1ul << CRC_CTL_CRCEN_Pos)                      /*!< CRC_T::CTL: CRCEN Mask                 */

#define CRC_CTL_CHKSINIT_Pos             (1)                                               /*!< CRC_T::CTL: CHKSINIT Position          */
#define CRC_CTL_CHKSINIT_Msk             (0x1ul << CRC_CTL_CHKSINIT_Pos)                   /*!< CRC_T::CTL: CHKSINIT Mask              */

#define CRC_CTL_DATREV_Pos               (24)                                              /*!< CRC_T::CTL: DATREV Position            */
#define CRC_CTL_DATREV_Msk               (0x1ul << CRC_CTL_DATREV_Pos)                     /*!< CRC_T::CTL: DATREV Mask                */

#define CRC_CTL_CHKSREV_Pos              (25)                                              /*!< CRC_T::CTL: CHKSREV Position           */
#define CRC_CTL_CHKSREV_Msk              (0x1ul << CRC_CTL_CHKSREV_Pos)                    /*!< CRC_T::CTL: CHKSREV Mask               */

#define CRC_CTL_DATFMT_Pos               (26)                                              /*!< CRC_T::CTL: DATFMT Position            */
#define CRC_CTL_DATFMT_Msk               (0x1ul << CRC_CTL_DATFMT_Pos)                     /*!< CRC_T::CTL: DATFMT Mask                */

#define CRC_CTL_CHKSFMT_Pos              (27)                                              /*!< CRC_T::CTL: CHKSFMT Position           */
#define CRC_CTL_CHKSFMT_Msk              (0x1ul << CRC_CTL_CHKSFMT_Pos)                    /*!< CRC_T::CTL: CHKSFMT Mask               */

#define CRC_CTL_DATLEN_Pos               (28)                                              /*!< CRC_T::CTL: DATLEN Position            */
#define CRC_CTL_DATLEN_Msk               (0x3ul << CRC_CTL_DATLEN_Pos)                     /*!< CRC_T::CTL: DATLEN Mask                */

#define CRC_CTL_CRCMODE_Pos              (30)                                              /*!< CRC_T::CTL: CRCMODE Position           */
#define CRC_CTL_CRCMODE_Msk              (0x3ul << CRC_CTL_CRCMODE_Pos)                    /*!< CRC_T::CTL: CRCMODE Mask               */

#define CRC_DAT_DATA_Pos                 (0)                                               /*!< CRC_T::DAT: DATA Position              */
#define CRC_DAT_DATA_Msk                 (0xfffffffful << CRC_DAT_DATA_Pos)                /*!< CRC_T::DAT: DATA Mask                  */

#define CRC_SEED_SEED_Pos                (0)                                               /*!< CRC_T::SEED: SEED Position             */
#define CRC_SEED_SEED_Msk                (0xfffffffful << CRC_SEED_SEED_Pos)               /*!< CRC_T::SEED: SEED Mask                 */

#define CRC_CHECKSUM_CHECKSUM_Pos        (0)                                               /*!< CRC_T::CHECKSUM: CHECKSUM Position     */
#define CRC_CHECKSUM_CHECKSUM_Msk        (0xfffffffful << CRC_CHECKSUM_CHECKSUM_Pos)       /*!< CRC_T::CHECKSUM: CHECKSUM Mask         */

/**@}*/ /* CRC_CONST */
/**@}*/ /* end of CRC register group */


/*---------------------- External Bus Interface Controller -------------------------*/
/**
    @addtogroup EBI External Bus Interface Controller(EBI)
    Memory Mapped Structure for EBI Controller
    @{
*/

typedef struct
{


    /**
     * @var EBI_T::CTL0
     * Offset: 0x00  External Bus Interface Bank0 Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |EN        |EBI Enable Bit
     * |        |          |This bit is the functional enable bit for EBI.
     * |        |          |0 = EBI function Disabled.
     * |        |          |1 = EBI function Enabled.
     * |[1]     |DW16      |EBI Data Width 16-bit Select
     * |        |          |This bit defines if the EBI data width is 8-bit or 16-bit.
     * |        |          |0 = EBI data width is 8-bit.
     * |        |          |1 = EBI data width is 16-bit.
     * |[2]     |CSPOLINV  |Chip Select Pin Polar Inverse
     * |        |          |This bit defines the active level of EBI chip select pin (EBI_nCSx), x = 0 or 1..
     * |        |          |0 = Chip select pin (EBI_nCSx) is active low.
     * |        |          |1 = Chip select pin (EBI_nCSx) is active high.
     * |        |          |x = 0, 1
     * |[4]     |CACCESS   |Continuous Data Access Mode
     * |        |          |When con ttinuousenuous access mode enabled, the tASU, tALE and tLHD cycles are bypass for continuous data transfer request.
     * |        |          |0 = Continuous data access mode Disabled.
     * |        |          |1 = Continuous data access mode Enabled.
     * |[10:8]  |MCLKDIV   |External Output Clock Divider
     * |        |          |The frequency of EBI output clock (MCLK) is controlled by MCLKDIV as follow:
     * |        |          |000 = HCLK/1.
     * |        |          |001 = HCLK/2.
     * |        |          |010 = HCLK/4.
     * |        |          |011 = HCLK/8.
     * |        |          |100 = HCLK/16.
     * |        |          |101 = HCLK/32.
     * |        |          |110 = HCLK/64.
     * |        |          |111 = HCLK/128.
     * |[18:16] |TALE      |Extend Time Of of ALE
     * |        |          |The EBI_ALE high pulse period (tALE) to latch the address can be controlled by TALE.
     * |        |          |tALE = (TALE + 1)*EBI_MCLK.
     * |        |          |Note: This field only available in EBI_CTL0 register
     * |[24]    |WBUFEN    |EBI Write Buffer Enable Bit
     * |        |          |0 = EBI write buffer Disabled.
     * |        |          |1 = EBI write buffer Enabled.
     * |        |          |Note: This bit only available in EBI_CTL0 register
     * @var EBI_T::TCTL0
     * Offset: 0x04  External Bus Interface Bank0 Timing Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:3]   |TACC      |EBI Data Access Time
     * |        |          |TACC define data access time (tACC).
     * |        |          |tACC = (TACC + 1) * EBI_MCLK.
     * |[10:8]  |TAHD      |EBI Data Access Hold Time
     * |        |          |TAHD define data access hold time (tAHD).
     * |        |          |tAHD = (TAHD + 1) * EBI_MCLK.
     * |[15:12] |W2X       |Idle Cycle After Write
     * |        |          |This field defines the number of W2X idle cycle.
     * |        |          |When write action is finish, W2X idle cycle is inserted and EBI_nCSx return to idle state, x = 0 or 1.
     * |        |          |W2X idle cycle = (W2X * EBI_MCLK).
     * |        |          |When write action is finish, W2X idle cycle is inserted and EBI_nCSx return to idle state. (x = 0, 1)
     * |[22]    |RAHDOFF   |Access Hold Time Disable Control When Read
     * |        |          |0 = The Data Access Hold Time (tAHD) during EBI reading is Enabled.
     * |        |          |1 = The Data Access Hold Time (tAHD) during EBI reading is Disabled.
     * |[23]    |WAHDOFF   |Access Hold Time Disable Control When Write
     * |        |          |0 = The Data Access Hold Time (tAHD) during EBI writing is Enabled.
     * |        |          |1 = The Data Access Hold Time (tAHD) during EBI writing is Disabled.
     * |[27:24] |R2R       |Idle Cycle Between Read-to-read
     * |        |          |This field defines the number of R2R idle cycle.
     * |        |          |When read action is finish and next action is going to read, R2R idle cycle is inserted and EBI_nCSx return to idle state, x = 0 or 1.
     * |        |          |R2R idle cycle = (R2R * EBI_MCLK).
     * |        |          |When read action is finish and next action is going to read, R2R idle cycle is inserted and EBI_nCSx return to idle state
     * |        |          |(x = 0, 1)
     * @var EBI_T::CTL1
     * Offset: 0x10  External Bus Interface Bank1 Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |EN        |EBI Enable Bit
     * |        |          |This bit is the functional enable bit for EBI.
     * |        |          |0 = EBI function Disabled.
     * |        |          |1 = EBI function Enabled.
     * |[1]     |DW16      |EBI Data Width 16-bit Select
     * |        |          |This bit defines if the EBI data width is 8-bit or 16-bit.
     * |        |          |0 = EBI data width is 8-bit.
     * |        |          |1 = EBI data width is 16-bit.
     * |[2]     |CSPOLINV  |Chip Select Pin Polar Inverse
     * |        |          |This bit defines the active level of EBI chip select pin (EBI_nCSx), x = 0 or 1..
     * |        |          |0 = Chip select pin (EBI_nCSx) is active low.
     * |        |          |1 = Chip select pin (EBI_nCSx) is active high.
     * |        |          |x = 0, 1
     * |[4]     |CACCESS   |Continuous Data Access Mode
     * |        |          |When con ttinuousenuous access mode enabled, the tASU, tALE and tLHD cycles are bypass for continuous data transfer request.
     * |        |          |0 = Continuous data access mode Disabled.
     * |        |          |1 = Continuous data access mode Enabled.
     * |[10:8]  |MCLKDIV   |External Output Clock Divider
     * |        |          |The frequency of EBI output clock (MCLK) is controlled by MCLKDIV as follow:
     * |        |          |000 = HCLK/1.
     * |        |          |001 = HCLK/2.
     * |        |          |010 = HCLK/4.
     * |        |          |011 = HCLK/8.
     * |        |          |100 = HCLK/16.
     * |        |          |101 = HCLK/32.
     * |        |          |110 = HCLK/64.
     * |        |          |111 = HCLK/128.
     * |[18:16] |TALE      |Extend Time Of of ALE
     * |        |          |The EBI_ALE high pulse period (tALE) to latch the address can be controlled by TALE.
     * |        |          |tALE = (TALE + 1)*EBI_MCLK.
     * |        |          |Note: This field only available in EBI_CTL0 register
     * |[24]    |WBUFEN    |EBI Write Buffer Enable Bit
     * |        |          |0 = EBI write buffer Disabled.
     * |        |          |1 = EBI write buffer Enabled.
     * |        |          |Note: This bit only available in EBI_CTL0 register
     * @var EBI_T::TCTL1
     * Offset: 0x14  External Bus Interface Bank1 Timing Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:3]   |TACC      |EBI Data Access Time
     * |        |          |TACC define data access time (tACC).
     * |        |          |tACC = (TACC + 1) * EBI_MCLK.
     * |[10:8]  |TAHD      |EBI Data Access Hold Time
     * |        |          |TAHD define data access hold time (tAHD).
     * |        |          |tAHD = (TAHD + 1) * EBI_MCLK.
     * |[15:12] |W2X       |Idle Cycle After Write
     * |        |          |This field defines the number of W2X idle cycle.
     * |        |          |When write action is finish, W2X idle cycle is inserted and EBI_nCSx return to idle state, x = 0 or 1.
     * |        |          |W2X idle cycle = (W2X * EBI_MCLK).
     * |        |          |When write action is finish, W2X idle cycle is inserted and EBI_nCSx return to idle state. (x = 0, 1)
     * |[22]    |RAHDOFF   |Access Hold Time Disable Control When Read
     * |        |          |0 = The Data Access Hold Time (tAHD) during EBI reading is Enabled.
     * |        |          |1 = The Data Access Hold Time (tAHD) during EBI reading is Disabled.
     * |[23]    |WAHDOFF   |Access Hold Time Disable Control When Write
     * |        |          |0 = The Data Access Hold Time (tAHD) during EBI writing is Enabled.
     * |        |          |1 = The Data Access Hold Time (tAHD) during EBI writing is Disabled.
     * |[27:24] |R2R       |Idle Cycle Between Read-to-read
     * |        |          |This field defines the number of R2R idle cycle.
     * |        |          |When read action is finish and next action is going to read, R2R idle cycle is inserted and EBI_nCSx return to idle state, x = 0 or 1.
     * |        |          |R2R idle cycle = (R2R * EBI_MCLK).
     * |        |          |When read action is finish and next action is going to read, R2R idle cycle is inserted and EBI_nCSx return to idle state
     * |        |          |(x = 0, 1)
     */
    __IO uint32_t CTL0;                  /*!< [0x0000] External Bus Interface Bank0 Control Register                    */
    __IO uint32_t TCTL0;                 /*!< [0x0004] External Bus Interface Bank0 Timing Control Register             */
    __I  uint32_t RESERVE0[2];
    __IO uint32_t CTL1;                  /*!< [0x0010] External Bus Interface Bank1 Control Register                    */
    __IO uint32_t TCTL1;                 /*!< [0x0014] External Bus Interface Bank1 Timing Control Register             */

} EBI_T;

/**
    @addtogroup EBI_CONST EBI Bit Field Definition
    Constant Definitions for EBI Controller
    @{
*/

#define EBI_CTL_EN_Pos                   (0)                                               /*!< EBI_T::CTL: EN Position                  */
#define EBI_CTL_EN_Msk                   (0x1ul << EBI_CTL_EN_Pos)                         /*!< EBI_T::CTL: EN Mask                      */

#define EBI_CTL_DW16_Pos                 (1)                                               /*!< EBI_T::CTL: DW16 Position                */
#define EBI_CTL_DW16_Msk                 (0x1ul << EBI_CTL_DW16_Pos)                       /*!< EBI_T::CTL: DW16 Mask                    */

#define EBI_CTL_CSPOLINV_Pos             (2)                                               /*!< EBI_T::CTL: CSPOLINV Position            */
#define EBI_CTL_CSPOLINV_Msk             (0x1ul << EBI_CTL_CSPOLINV_Pos)                   /*!< EBI_T::CTL: CSPOLINV Mask                */

#define EBI_CTL_CACCESS_Pos              (4)                                               /*!< EBI_T::CTL: CACCESS Position             */
#define EBI_CTL_CACCESS_Msk              (0x1ul << EBI_CTL_CACCESS_Pos)                    /*!< EBI_T::CTL: CACCESS Mask                 */

#define EBI_CTL_MCLKDIV_Pos              (8)                                               /*!< EBI_T::CTL: MCLKDIV Position             */
#define EBI_CTL_MCLKDIV_Msk              (0x7ul << EBI_CTL_MCLKDIV_Pos)                    /*!< EBI_T::CTL: MCLKDIV Mask                 */

#define EBI_CTL_TALE_Pos                 (16)                                              /*!< EBI_T::CTL: TALE Position                */
#define EBI_CTL_TALE_Msk                 (0x7ul << EBI_CTL_TALE_Pos)                       /*!< EBI_T::CTL: TALE Mask                    */

#define EBI_CTL_WBUFEN_Pos               (24)                                              /*!< EBI_T::CTL: WBUFEN Position              */
#define EBI_CTL_WBUFEN_Msk               (0x1ul << EBI_CTL_WBUFEN_Pos)                     /*!< EBI_T::CTL: WBUFEN Mask                  */

#define EBI_TCTL_TACC_Pos                (3)                                               /*!< EBI_T::TCTL: TACC Position               */
#define EBI_TCTL_TACC_Msk                (0x1ful << EBI_TCTL_TACC_Pos)                     /*!< EBI_T::TCTL: TACC Mask                   */

#define EBI_TCTL_TAHD_Pos                (8)                                               /*!< EBI_T::TCTL: TAHD Position               */
#define EBI_TCTL_TAHD_Msk                (0x7ul << EBI_TCTL_TAHD_Pos)                      /*!< EBI_T::TCTL: TAHD Mask                   */

#define EBI_TCTL_W2X_Pos                 (12)                                              /*!< EBI_T::TCTL: W2X Position                */
#define EBI_TCTL_W2X_Msk                 (0xful << EBI_TCTL_W2X_Pos)                       /*!< EBI_T::TCTL: W2X Mask                    */

#define EBI_TCTL_RAHDOFF_Pos             (22)                                              /*!< EBI_T::TCTL: RAHDOFF Position            */
#define EBI_TCTL_RAHDOFF_Msk             (0x1ul << EBI_TCTL_RAHDOFF_Pos)                   /*!< EBI_T::TCTL: RAHDOFF Mask                */

#define EBI_TCTL_WAHDOFF_Pos             (23)                                              /*!< EBI_T::TCTL: WAHDOFF Position            */
#define EBI_TCTL_WAHDOFF_Msk             (0x1ul << EBI_TCTL_WAHDOFF_Pos)                   /*!< EBI_T::TCTL: WAHDOFF Mask                */

#define EBI_TCTL_R2R_Pos                 (24)                                              /*!< EBI_T::TCTL: R2R Position                */
#define EBI_TCTL_R2R_Msk                 (0xful << EBI_TCTL_R2R_Pos)                       /*!< EBI_T::TCTL: R2R Mask                    */

/**@}*/ /* EBI_CONST */
/**@}*/ /* end of EBI register group */


/*---------------------- Flash Memory Controller -------------------------*/
/**
    @addtogroup FMC Flash Memory Controller(FMC)
    Memory Mapped Structure for FMC Controller
    @{
*/

typedef struct
{


    /**
     * @var FMC_T::ISPCTL
     * Offset: 0x00  ISP Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ISPEN     |ISP Enable Bit (Write Protect)
     * |        |          |ISP function enable bit. Set this bit to enable ISP function.
     * |        |          |0 = ISP function Disabled.
     * |        |          |1 = ISP function Enabled.
     * |        |          |Note: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * |[1]     |BS        |Boot Select (Write Protect)
     * |        |          |Set/clear this bit to select next booting from LDROM/APROM, respectively.
     * |        |          |This bit also functions as chip booting status flag, which can be used to check where chip booted from.
     * |        |          |This bit is initiated with the inversed value of CBS[1] (CONFIG0[7]) after any reset is happened except CPU reset (CPU is 1) or system reset (SYS) is happened.
     * |        |          |0 = Booting from APROM.
     * |        |          |1 = Booting from LDROM.
     * |        |          |Note: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * |[2]     |SPUEN     |SPROM Up2025-07-16 Enable Bit (Write Protect)
     * |        |          |0 = SPROM cannot be up2025-07-16d.
     * |        |          |1 = SPROM can be up2025-07-16d.
     * |        |          |Note: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * |[3]     |APUEN     |APROM Up2025-07-16 Enable Bit (Write Protect)
     * |        |          |0 = APROM cannot be up2025-07-16d when the chip runs in APROM.
     * |        |          |1 = APROM can be up2025-07-16d when the chip runs in APROM.
     * |        |          |Note: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * |[4]     |CFGUEN    |CONFIG Up2025-07-16 Enable Bit (Write Protect)
     * |        |          |0 = CONFIG cannot be up2025-07-16d.
     * |        |          |1 = CONFIG can be up2025-07-16d.
     * |        |          |Note: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * |[5]     |LDUEN     |LDROM Up2025-07-16 Enable Bit (Write Protect)
     * |        |          |LDROM up2025-07-16 enable bit.
     * |        |          |0 = LDROM cannot be up2025-07-16d.
     * |        |          |1 = LDROM can be up2025-07-16d.
     * |        |          |Note: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * |[6]     |ISPFF     |ISP Fail Flag (Write Protect)
     * |        |          |This bit is set by hardware when a triggered ISP meets any of the following conditions:
     * |        |          |This bit needs to be cleared by writing 1 to it.
     * |        |          |(1) APROM writes to itself if APUEN is set to 0.
     * |        |          |(2) LDROM writes to itself if LDUEN is set to 0.
     * |        |          |(3) CONFIG is erased/programmed if CFGUEN is set to 0.
     * |        |          |(4) SPROM is erased/programmed if SPUEN is set to 0.
     * |        |          |(5) SPROM is programmed at SPROM secured mode.
     * |        |          |(6) Page Erase command at LOCK mode with ICE connection.
     * |        |          |(7) Erase or Program command at brown-out detected.
     * |        |          |(8) Destination address is illegal, such as over an available range.
     * |        |          |(9) Invalid ISP commands.
     * |        |          |Note: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * @var FMC_T::ISPADDR
     * Offset: 0x04  ISP Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPADDR   |ISP Address
     * |        |          |The NuMicrou00AEu00E4 NUC1261 series is equipped with embedded flash.
     * |        |          |ISPADDR[1:0] must be kept 00 for ISP 32-bit operation.
     * |        |          |ISPADDR[2:0] must be kept 000 for ISP 64-bit operation.
     * |        |          |For Checksum Calculation command, this field is the flash starting address for checksum calculation, 512 bytes alignment is necessary for checksum calculation.
     * @var FMC_T::ISPDAT
     * Offset: 0x08  ISP Data Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPDAT    |ISP Data
     * |        |          |Write data to this register before ISP program operation.
     * |        |          |Read data from this register after ISP read operation.
     * |        |          |For Run Checksum Calculation command, ISPDAT is the memory size (byte) and 512 bytes alignment.
     * |        |          |For ISP Read Checksum command, ISPDAT is the checksum result.
     * |        |          |If ISPDAT = 0x0000_0000, it means that (1) the checksum calculation is in progress, (2) the memory range for checksum calculation is incorrect.
     * @var FMC_T::ISPCMD
     * Offset: 0x0C  ISP CMD Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[6:0]   |CMD       |ISP CMD
     * |        |          |ISP command table is shown below:
     * |        |          |0x00= FLASH Read.
     * |        |          |0x40= FLASH 64-bit Read.
     * |        |          |0x04= Read Unique ID.
     * |        |          |0x08= Read Flash All-One Result.
     * |        |          |0x0B= Read Company ID.
     * |        |          |0x0C= Read Device ID.
     * |        |          |0x0D= Read Checksum.
     * |        |          |0x21= FLASH 32-bit Program.
     * |        |          |0x22= FLASH Page Erase.
     * |        |          |0x26= FLASH Mass Erase.
     * |        |          |0x27= FLASH Multi-Word Program.
     * |        |          |0x28= Run Flash All-One Verification.
     * |        |          |0x2D= Run Checksum Calculation.
     * |        |          |0x2E= Vector Remap.
     * |        |          |0x61= FLASH 64-bit Program.
     * |        |          |The other commands are invalid.
     * @var FMC_T::ISPTRG
     * Offset: 0x10  ISP Trigger Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ISPGO     |ISP Start Trigger (Write Protect)
     * |        |          |Write 1 to start ISP operation and this bit will be cleared to 0 by hardware automatically when ISP operation is finished.
     * |        |          |0 = ISP operation is finished.
     * |        |          |1 = ISP is progressed.
     * |        |          |Note: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * @var FMC_T::DFBA
     * Offset: 0x14  Data Flash Base Address
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |DFBA      |Data Flash Base Address
     * |        |          |This register indicates Data Flash start address. It is a read only register.
     * |        |          |The Data Flash is shared with APROM. the content of this register is loaded from CONFIG1.
     * |        |          |This register is valid when DFEN (CONFIG0[0]) =0 .
     * @var FMC_T::FTCTL
     * Offset: 0x18  Flash Access Time Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[6:4]   |FOM       |Frequency Optimization Mode (Write Protect)
     * |        |          |The NuMicro M0564X series support adjustable flash access timing to optimize the flash access cycles in different working frequency.
     * |        |          |0x1 = Frequency <= 24MHz.
     * |        |          |1x1 = Frequency <= 72MHz.
     * |        |          |Others = Frequency <= 48MHz.
     * |        |          |Note: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * |[7]     |CACHEOFF  |Flash Cache Disable Control (Write Protect)
     * |        |          |0 = Flash Cache function Enabled (default).
     * |        |          |1 = Flash Cache [PT1]function Disabled.
     * |        |          |Note: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * @var FMC_T::ISPSTS
     * Offset: 0x40  ISP Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ISPBUSY   |ISP Busy Flag (Read Only)
     * |        |          |Write 1 to start ISP operation and this bit will be cleared to 0 by hardware automatically when ISP operation is finished.
     * |        |          |This bit is the mirror of ISPGO(FMC_ISPTRG[0]).
     * |        |          |0 = ISP operation is finished.
     * |        |          |1 = ISP is progressed.
     * |[2:1]   |CBS       |Boot Selection of CONFIG (Read Only)
     * |        |          |This bit is initiated with the CBS (CONFIG0[7:6]) after any reset is happened except CPU reset (CPU is 1) or system reset (SYS) is happened.
     * |        |          |00 = LDROM with IAP mode.
     * |        |          |01 = LDROM without IAP mode.
     * |        |          |10 = APROM with IAP mode.
     * |        |          |11 = APROM without IAP mode.
     * |[6]     |ISPFF     |ISP Fail Flag (Write Protect)
     * |        |          |This bit is the mirror of ISPFF (FMC_ISPCTL[6]), it needs to be cleared by writing 1 to FMC_ISPCTL[6] or FMC_ISPSTS[6].
     * |        |          |This bit is set by hardware when a triggered ISP meets any of the following conditions:
     * |        |          |(1) APROM writes to itself if APUEN is set to 0.
     * |        |          |(2) LDROM writes to itself if LDUEN is set to 0.
     * |        |          |(3) CONFIG is erased/programmed if CFGUEN is set to 0.
     * |        |          |(4) SPROM is erased/programmed if SPUEN is set to 0.
     * |        |          |(5) SPROM is programmed at SPROM secured mode.
     * |        |          |(6) Page Erase command at LOCK mode with ICE connection.
     * |        |          |(7) Erase or Program command at brown-out detected.
     * |        |          |(8) Destination address is illegal, such as over an available range.
     * |        |          |(9) Invalid ISP commands.
     * |        |          |(10) system vector address is remapped to SPROM.
     * |        |          |Note: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * |[7]     |ALLONE    |Flash All-one Verification Flag
     * |        |          |This bit is set by hardware if all of flash bits are 1, and clear if flash bits are not all 1 after "Run Flash All-One Verification" complete; this bit also can be clear by writing 1.
     * |        |          |0 = Flash bits are not all 1 after "Run Flash All-One Verification" complete.
     * |        |          |1 = All of flash bits are 1 after "Run Flash All-One Verification" complete.
     * |[29:9]  |VECMAP    |Vector Page Mapping Address (Read Only)
     * |        |          |All access to 0x0000_0000~0x0000_01FF is remapped to the flash memory or SRAM address {VECMAP[20:0], 9u2019h000} ~ {VECMAP[20:0], 9u2019h1FF}, except SPROM.
     * |        |          |VECMAP [20:19] = 00 system vector address is mapped to flash memory.
     * |        |          |VECMAP [20:19] = 10 system vector address is mapped to SRAM memory.
     * |        |          |VECMAP [18:12] should be 0.
     * |[31]    |SCODE     |Security Code Active Flag
     * |        |          |This bit is set by hardware when detecting SPROM secured code is active at flash initiation, or software writes 1 to this bit to make secured code active; this bit is clear by SPROM page erase operation.
     * |        |          |0 = Secured code is inactive.
     * |        |          |1 = Secured code is active.
     * @var FMC_T::MPDAT0
     * Offset: 0x80  ISP Data0 Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPDAT0   |ISP Data 0
     * |        |          |This register is the first 32-bit data for 32-bit/64-bit/multi-word programming, and it is also the mirror of FMC_ISPDAT, both registers keep the same data.
     * @var FMC_T::MPDAT1
     * Offset: 0x84  ISP Data1 Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPDAT1   |ISP Data 1
     * |        |          |This register is the second 32-bit data for 64-bit/multi-word programming.
     * @var FMC_T::MPDAT2
     * Offset: 0x88  ISP Data2 Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPDAT2   |ISP Data 2
     * |        |          |This register is the third 32-bit data for multi-word programming.
     * @var FMC_T::MPDAT3
     * Offset: 0x8C  ISP Data3 Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPDAT3   |ISP Data 3
     * |        |          |This register is the fourth 32-bit data for multi-word programming.
     * @var FMC_T::MPSTS
     * Offset: 0xC0  ISP Multi-Program Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |MPBUSY    |ISP Multi-word Program Busy Flag (Read Only)
     * |        |          |Write 1 to start ISP Multi-Word program operation and this bit will be cleared to 0 by hardware automatically when ISP Multi-Word program operation is finished.
     * |        |          |This bit is the mirror of ISPGO(FMC_ISPTRG[0]).
     * |        |          |0 = ISP Multi-Word program operation is finished.
     * |        |          |1 = ISP Multi-Word program operation is progressed.
     * |[1]     |PPGO      |ISP Multi-program Status (Read Only)
     * |        |          |0 = ISP multi-word program operation is not active.
     * |        |          |1 = ISP multi-word program operation is in progress.
     * |[2]     |ISPFF     |ISP Fail Flag (Read Only)
     * |        |          |This bit is the mirror of ISPFF (FMC_ISPCTL[6]), it needs to be cleared by writing 1 to FMC_ISPCTL[6] or FMC_ISPSTS[6].
     * |        |          |This bit is set by hardware when a triggered ISP meets any of the following conditions:
     * |        |          |(1) APROM writes to itself if APUEN is set to 0.
     * |        |          |(2) LDROM writes to itself if LDUEN is set to 0.
     * |        |          |(3) CONFIG is erased/programmed if CFGUEN is set to 0.
     * |        |          |(4) Page Erase command at LOCK mode with ICE connection.
     * |        |          |(5) Erase or Program command at brown-out detected.
     * |        |          |(6) Destination address is illegal, such as over an available range.
     * |        |          |(7) Invalid ISP commands.
     * |[4]     |D0        |ISP DATA 0 Flag (Read Only)
     * |        |          |This bit is set when FMC_MPDAT0 is written and auto-clear to 0 when the FMC_MPDAT0 data is programmed to flash complete.
     * |        |          |0 = FMC_MPDAT0 register is empty, or program to flash complete.
     * |        |          |1 = FMC_MPDAT0 register has been written, and not program to flash complete.
     * |[5]     |D1        |ISP DATA 1 Flag (Read Only)
     * |        |          |This bit is set when FMC_MPDAT1 is written and auto-clear to 0 when the FMC_MPDAT1 data is programmed to flash complete.
     * |        |          |0 = FMC_MPDAT1 register is empty, or program to flash complete.
     * |        |          |1 = FMC_MPDAT1 register has been written, and not program to flash complete.
     * |[6]     |D2        |ISP DATA 2 Flag (Read Only)
     * |        |          |This bit is set when FMC_MPDAT2 is written and auto-clear to 0 when the FMC_MPDAT2 data is programmed to flash complete.
     * |        |          |0 = FMC_MPDAT2 register is empty, or program to flash complete.
     * |        |          |1 = FMC_MPDAT2 register has been written, and not program to flash complete.
     * |[7]     |D3        |ISP DATA 3 Flag (Read Only)
     * |        |          |This bit is set when FMC_MPDAT3 is written and auto-clear to 0 when the FMC_MPDAT3 data is programmed to flash complete.
     * |        |          |0 = FMC_MPDAT3 register is empty, or program to flash complete.
     * |        |          |1 = FMC_MPDAT3 register has been written, and not program to flash complete.
     * @var FMC_T::MPADDR
     * Offset: 0xC4  ISP Multi-Program Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |MPADDR    |ISP Multi-word Program Address
     * |        |          |MPADDR is the address of ISP multi-word program operation when ISPGO flag is 1.
     * |        |          |MPADDR will keep the final ISP address when ISP multi-word program is complete.
     */

    __IO uint32_t ISPCTL;                /*!< [0x0000] ISP Control Register                                             */
    __IO uint32_t ISPADDR;               /*!< [0x0004] ISP Address Register                                             */
    __IO uint32_t ISPDAT;                /*!< [0x0008] ISP Data Register                                                */
    __IO uint32_t ISPCMD;                /*!< [0x000c] ISP CMD Register                                                 */
    __IO uint32_t ISPTRG;                /*!< [0x0010] ISP Trigger Control Register                                     */
    __I  uint32_t DFBA;                  /*!< [0x0014] Data Flash Base Address                                          */
    __IO uint32_t FTCTL;                 /*!< [0x0018] Flash Access Time Control Register                               */
    __I  uint32_t RESERVE0[9];
    __IO uint32_t ISPSTS;                /*!< [0x0040] ISP Status Register                                              */
    __I  uint32_t RESERVE1[15];
    __IO uint32_t MPDAT0;                /*!< [0x0080] ISP Data0 Register                                               */
    __IO uint32_t MPDAT1;                /*!< [0x0084] ISP Data1 Register                                               */
    __IO uint32_t MPDAT2;                /*!< [0x0088] ISP Data2 Register                                               */
    __IO uint32_t MPDAT3;                /*!< [0x008c] ISP Data3 Register                                               */
    __I  uint32_t RESERVE2[12];
    __I  uint32_t MPSTS;                 /*!< [0x00c0] ISP Multi-Program Status Register                                */
    __I  uint32_t MPADDR;                /*!< [0x00c4] ISP Multi-Program Address Register                               */

} FMC_T;

/**
    @addtogroup FMC_CONST FMC Bit Field Definition
    Constant Definitions for FMC Controller
    @{
*/

#define FMC_ISPCTL_ISPEN_Pos             (0)                                               /*!< FMC_T::ISPCTL: ISPEN Position          */
#define FMC_ISPCTL_ISPEN_Msk             (0x1ul << FMC_ISPCTL_ISPEN_Pos)                   /*!< FMC_T::ISPCTL: ISPEN Mask              */

#define FMC_ISPCTL_BS_Pos                (1)                                               /*!< FMC_T::ISPCTL: BS Position             */
#define FMC_ISPCTL_BS_Msk                (0x1ul << FMC_ISPCTL_BS_Pos)                      /*!< FMC_T::ISPCTL: BS Mask                 */

#define FMC_ISPCTL_SPUEN_Pos             (2)                                               /*!< FMC_T::ISPCTL: SPUEN Position          */
#define FMC_ISPCTL_SPUEN_Msk             (0x1ul << FMC_ISPCTL_SPUEN_Pos)                   /*!< FMC_T::ISPCTL: SPUEN Mask              */

#define FMC_ISPCTL_APUEN_Pos             (3)                                               /*!< FMC_T::ISPCTL: APUEN Position          */
#define FMC_ISPCTL_APUEN_Msk             (0x1ul << FMC_ISPCTL_APUEN_Pos)                   /*!< FMC_T::ISPCTL: APUEN Mask              */

#define FMC_ISPCTL_CFGUEN_Pos            (4)                                               /*!< FMC_T::ISPCTL: CFGUEN Position         */
#define FMC_ISPCTL_CFGUEN_Msk            (0x1ul << FMC_ISPCTL_CFGUEN_Pos)                  /*!< FMC_T::ISPCTL: CFGUEN Mask             */

#define FMC_ISPCTL_LDUEN_Pos             (5)                                               /*!< FMC_T::ISPCTL: LDUEN Position          */
#define FMC_ISPCTL_LDUEN_Msk             (0x1ul << FMC_ISPCTL_LDUEN_Pos)                   /*!< FMC_T::ISPCTL: LDUEN Mask              */

#define FMC_ISPCTL_ISPFF_Pos             (6)                                               /*!< FMC_T::ISPCTL: ISPFF Position          */
#define FMC_ISPCTL_ISPFF_Msk             (0x1ul << FMC_ISPCTL_ISPFF_Pos)                   /*!< FMC_T::ISPCTL: ISPFF Mask              */

#define FMC_ISPADDR_ISPADDR_Pos          (0)                                               /*!< FMC_T::ISPADDR: ISPADDR Position       */
#define FMC_ISPADDR_ISPADDR_Msk          (0xfffffffful << FMC_ISPADDR_ISPADDR_Pos)         /*!< FMC_T::ISPADDR: ISPADDR Mask           */

#define FMC_ISPDAT_ISPDAT_Pos            (0)                                               /*!< FMC_T::ISPDAT: ISPDAT Position         */
#define FMC_ISPDAT_ISPDAT_Msk            (0xfffffffful << FMC_ISPDAT_ISPDAT_Pos)           /*!< FMC_T::ISPDAT: ISPDAT Mask             */

#define FMC_ISPCMD_CMD_Pos               (0)                                               /*!< FMC_T::ISPCMD: CMD Position            */
#define FMC_ISPCMD_CMD_Msk               (0x7ful << FMC_ISPCMD_CMD_Pos)                    /*!< FMC_T::ISPCMD: CMD Mask                */

#define FMC_ISPTRG_ISPGO_Pos             (0)                                               /*!< FMC_T::ISPTRG: ISPGO Position          */
#define FMC_ISPTRG_ISPGO_Msk             (0x1ul << FMC_ISPTRG_ISPGO_Pos)                   /*!< FMC_T::ISPTRG: ISPGO Mask              */

#define FMC_DFBA_DFBA_Pos                (0)                                               /*!< FMC_T::DFBA: DFBA Position             */
#define FMC_DFBA_DFBA_Msk                (0xfffffffful << FMC_DFBA_DFBA_Pos)               /*!< FMC_T::DFBA: DFBA Mask                 */

#define FMC_FTCTL_FOM_Pos                (4)                                               /*!< FMC_T::FTCTL: FOM Position             */
#define FMC_FTCTL_FOM_Msk                (0x7ul << FMC_FTCTL_FOM_Pos)                      /*!< FMC_T::FTCTL: FOM Mask                 */

#define FMC_FTCTL_CACHEOFF_Pos           (7)                                               /*!< FMC_T::FTCTL: CACHEOFF Position        */
#define FMC_FTCTL_CACHEOFF_Msk           (0x1ul << FMC_FTCTL_CACHEOFF_Pos)                 /*!< FMC_T::FTCTL: CACHEOFF Mask            */

#define FMC_ISPSTS_ISPBUSY_Pos           (0)                                               /*!< FMC_T::ISPSTS: ISPBUSY Position        */
#define FMC_ISPSTS_ISPBUSY_Msk           (0x1ul << FMC_ISPSTS_ISPBUSY_Pos)                 /*!< FMC_T::ISPSTS: ISPBUSY Mask            */

#define FMC_ISPSTS_CBS_Pos               (1)                                               /*!< FMC_T::ISPSTS: CBS Position            */
#define FMC_ISPSTS_CBS_Msk               (0x3ul << FMC_ISPSTS_CBS_Pos)                     /*!< FMC_T::ISPSTS: CBS Mask                */

#define FMC_ISPSTS_ISPFF_Pos             (6)                                               /*!< FMC_T::ISPSTS: ISPFF Position          */
#define FMC_ISPSTS_ISPFF_Msk             (0x1ul << FMC_ISPSTS_ISPFF_Pos)                   /*!< FMC_T::ISPSTS: ISPFF Mask              */

#define FMC_ISPSTS_ALLONE_Pos            (7)                                               /*!< FMC_T::ISPSTS: ALLONE Position         */
#define FMC_ISPSTS_ALLONE_Msk            (0x1ul << FMC_ISPSTS_ALLONE_Pos)                  /*!< FMC_T::ISPSTS: ALLONE Mask             */

#define FMC_ISPSTS_VECMAP_Pos            (9)                                               /*!< FMC_T::ISPSTS: VECMAP Position         */
#define FMC_ISPSTS_VECMAP_Msk            (0x1ffffful << FMC_ISPSTS_VECMAP_Pos)             /*!< FMC_T::ISPSTS: VECMAP Mask             */

#define FMC_ISPSTS_SCODE_Pos             (31)                                              /*!< FMC_T::ISPSTS: SCODE Position          */
#define FMC_ISPSTS_SCODE_Msk             (0x1ul << FMC_ISPSTS_SCODE_Pos)                   /*!< FMC_T::ISPSTS: SCODE Mask              */

#define FMC_MPDAT0_ISPDAT0_Pos           (0)                                               /*!< FMC_T::MPDAT0: ISPDAT0 Position        */
#define FMC_MPDAT0_ISPDAT0_Msk           (0xfffffffful << FMC_MPDAT0_ISPDAT0_Pos)          /*!< FMC_T::MPDAT0: ISPDAT0 Mask            */

#define FMC_MPDAT1_ISPDAT1_Pos           (0)                                               /*!< FMC_T::MPDAT1: ISPDAT1 Position        */
#define FMC_MPDAT1_ISPDAT1_Msk           (0xfffffffful << FMC_MPDAT1_ISPDAT1_Pos)          /*!< FMC_T::MPDAT1: ISPDAT1 Mask            */

#define FMC_MPDAT2_ISPDAT2_Pos           (0)                                               /*!< FMC_T::MPDAT2: ISPDAT2 Position        */
#define FMC_MPDAT2_ISPDAT2_Msk           (0xfffffffful << FMC_MPDAT2_ISPDAT2_Pos)          /*!< FMC_T::MPDAT2: ISPDAT2 Mask            */

#define FMC_MPDAT3_ISPDAT3_Pos           (0)                                               /*!< FMC_T::MPDAT3: ISPDAT3 Position        */
#define FMC_MPDAT3_ISPDAT3_Msk           (0xfffffffful << FMC_MPDAT3_ISPDAT3_Pos)          /*!< FMC_T::MPDAT3: ISPDAT3 Mask            */

#define FMC_MPSTS_MPBUSY_Pos             (0)                                               /*!< FMC_T::MPSTS: MPBUSY Position          */
#define FMC_MPSTS_MPBUSY_Msk             (0x1ul << FMC_MPSTS_MPBUSY_Pos)                   /*!< FMC_T::MPSTS: MPBUSY Mask              */

#define FMC_MPSTS_PPGO_Pos               (1)                                               /*!< FMC_T::MPSTS: PPGO Position            */
#define FMC_MPSTS_PPGO_Msk               (0x1ul << FMC_MPSTS_PPGO_Pos)                     /*!< FMC_T::MPSTS: PPGO Mask                */

#define FMC_MPSTS_ISPFF_Pos              (2)                                               /*!< FMC_T::MPSTS: ISPFF Position           */
#define FMC_MPSTS_ISPFF_Msk              (0x1ul << FMC_MPSTS_ISPFF_Pos)                    /*!< FMC_T::MPSTS: ISPFF Mask               */

#define FMC_MPSTS_D0_Pos                 (4)                                               /*!< FMC_T::MPSTS: D0 Position              */
#define FMC_MPSTS_D0_Msk                 (0x1ul << FMC_MPSTS_D0_Pos)                       /*!< FMC_T::MPSTS: D0 Mask                  */

#define FMC_MPSTS_D1_Pos                 (5)                                               /*!< FMC_T::MPSTS: D1 Position              */
#define FMC_MPSTS_D1_Msk                 (0x1ul << FMC_MPSTS_D1_Pos)                       /*!< FMC_T::MPSTS: D1 Mask                  */

#define FMC_MPSTS_D2_Pos                 (6)                                               /*!< FMC_T::MPSTS: D2 Position              */
#define FMC_MPSTS_D2_Msk                 (0x1ul << FMC_MPSTS_D2_Pos)                       /*!< FMC_T::MPSTS: D2 Mask                  */

#define FMC_MPSTS_D3_Pos                 (7)                                               /*!< FMC_T::MPSTS: D3 Position              */
#define FMC_MPSTS_D3_Msk                 (0x1ul << FMC_MPSTS_D3_Pos)                       /*!< FMC_T::MPSTS: D3 Mask                  */

#define FMC_MPADDR_MPADDR_Pos            (0)                                               /*!< FMC_T::MPADDR: MPADDR Position         */
#define FMC_MPADDR_MPADDR_Msk            (0xfffffffful << FMC_MPADDR_MPADDR_Pos)           /*!< FMC_T::MPADDR: MPADDR Mask             */

/**@}*/ /* FMC_CONST */
/**@}*/ /* end of FMC register group */


/*---------------------- General Purpose Input/Output Controller -------------------------*/
/**
    @addtogroup GPIO General Purpose Input/Output Controller(GPIO)
    Memory Mapped Structure for GPIO Controller
    @{
*/

typedef struct
{


    /**
     * @var GPIO_T::MODE
     * Offset: 0x00/0x40/0x80/0xC0/0x140  PA-F I/O Mode Control
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[2n+1:2n]|MODEn    |Port A-F I/O Pin[n] Mode Control
     * |        |          |Determine each I/O mode of Px.n pins.
     * |        |          |00 = Px.n is in Input mode.
     * |        |          |01 = Px.n is in Push-pull Output mode.
     * |        |          |10 = Px.n is in Open-drain Output mode.
     * |        |          |11 = Px.n is in Quasi-bidirectional mode.
     * |        |          |Note1: The initial value of this field is defined by CIOINI (CONFIG0 [10]).
     * |        |          |If CIOINI is set to 1, the default value is 0xFFFF_FFFF and all pins will be quasi-bidirectional mode after chip powered on.
     * |        |          |If CIOINI is set to 0, the default value is 0x0000_0000 and all pins will be input mode after chip powered on.
     * |        |          |Note2:
     * |        |          |n = 0~3, 5~11 for port A.
     * |        |          |n = 0~15 for port B.
     * |        |          |n = 0~7, 14 for port C.
     * |        |          |n = 0~3, 15 for port D.
     * |        |          |n = 0~6, 14, 15 for port F.
     * @var GPIO_T::DINOFF
     * Offset: 0x04/0x44/0x84/0xC4/0x144  PA-F Digital Input Path Disable Control
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[n+16]  |DINOFFn   |Port A-F Pin[n] Digital Input Path Disable Control
     * |        |          |Each of these bits is used to control if the digital input path of corresponding Px.n pin is disabled.
     * |        |          |If input is analog signal, users can disable Px.n digital input path to avoid input current leakage.
     * |        |          |0 = Px.n digital input path Enabled.
     * |        |          |1 = Px.n digital input path Disabled (digital input tied to low).
     * |        |          |Note:
     * |        |          |n = 0~3, 5~11 for port A.
     * |        |          |n = 0~15 for port B.
     * |        |          |n = 0~7, 14 for port C.
     * |        |          |n = 0~3, 15 for port D.
     * |        |          |n = 0~6, 14, 15 for port F.
     * @var GPIO_T::DOUT
     * Offset: 0x08/0x48/0x88/0xC8/0x148  PA-F Data Output Value
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[n]     |DOUTn     |Port A-F Pin[n] Output Value
     * |        |          |Each of these bits controls the status of a Px.n pin when the Px.n is configured as Push-pull output, Open-drain output or Quasi-bidirectional mode.
     * |        |          |0 = Px.n will drive Low if the Px.n pin is configured as Push-pull output, Open-drain output or Quasi-bidirectional mode.
     * |        |          |1 = Px.n will drive High if the Px.n pin is configured as Push-pull output or Quasi-bidirectional mode.
     * |        |          |Note:
     * |        |          |n = 0~3, 5~11 for port A.
     * |        |          |n = 0~15 for port B.
     * |        |          |n = 0~7, 14 for port C.
     * |        |          |n = 0~3, 15 for port D.
     * |        |          |n = 0~6, 14, 15 for port F.
     * @var GPIO_T::DATMSK
     * Offset: 0x0C/0x4C/0x8C/0xCC/0x14C  PA-F Data Output Write Mask
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[n]     |DATMSKn   |Port A-F Pin[n] Data Output Write Mask
     * |        |          |These bits are used to protect the corresponding DOUT (Px_DOUT[n]) bit.
     * |        |          |When the DATMSK (Px_DATMSK[n]) bit is set to 1, the corresponding DOUT (Px_DOUT[n]) bit is protected.
     * |        |          |If the write signal is masked, writing data to the protect bit is ignored.
     * |        |          |0 = Corresponding DOUT (Px_DOUT[n]) bit can be up2025-07-16d.
     * |        |          |1 = Corresponding DOUT (Px_DOUT[n]) bit protected.
     * |        |          |Note1: This function only protects the corresponding DOUT (Px_DOUT[n]) bit, and will not protect the corresponding PDIO (Pxn_PDIO[0]) bit.
     * |        |          |Note2:
     * |        |          |n = 0~3, 5~11 for port A.
     * |        |          |n = 0~15 for port B.
     * |        |          |n = 0~7, 14 for port C.
     * |        |          |n = 0~3, 15 for port D.
     * |        |          |n = 0~6, 14, 15 for port F.
     * @var GPIO_T::PIN
     * Offset: 0x10/0x50/0x90/0xD0/0x150  PA-F Pin Value
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[n]     |PINn      |Port A-F Pin[n] Pin Value
     * |        |          |Each bit of the register reflects the actual status of the respective Px.n pin.
     * |        |          |If the bit is 1, it indicates the corresponding pin status is high; else the pin status is low.
     * |        |          |Note:
     * |        |          |n = 0~3, 5~11 for port A.
     * |        |          |n = 0~15 for port B.
     * |        |          |n = 0~7, 14 for port C.
     * |        |          |n = 0~3, 15 for port D.
     * |        |          |n = 0~6, 14, 15 for port F.
     * @var GPIO_T::DBEN
     * Offset: 0x14/0x54/0x94/0xD4/0x154  PA-F De-Bounce Enable Control
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[n]     |DBENn     |Port A-F Pin[n] Input Signal De-bounce Enable Bit
     * |        |          |The DBEN[n] bit is used to enable the de-bounce function for each corresponding bit.
     * |        |          |If the input signal pulse width cannot be sampled by continuous two de-bounce sample cycle, the input signal transition is seen as the signal bounce and will not trigger the interrupt.
     * |        |          |The de-bounce clock source is controlled by DBCLKSRC (GPIO_DBCTL [4]), one de-bounce sample cycle period is controlled by DBCLKSEL (GPIO_DBCTL [3:0]).
     * |        |          |0 = Px.n de-bounce function Disabled.
     * |        |          |1 = Px.n de-bounce function Enabled.
     * |        |          |The de-bounce function is valid only for edge triggered interrupt.
     * |        |          |If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
     * |        |          |Note:
     * |        |          |n = 0~3, 5~11 for port A.
     * |        |          |n = 0~15 for port B.
     * |        |          |n = 0~7, 14 for port C.
     * |        |          |n = 0~3, 15 for port D.
     * |        |          |n = 0~6, 14, 15 for port F.
     * @var GPIO_T::INTTYPE
     * Offset: 0x18/0x58/0x98/0xD8/0x158  PA-F Interrupt Trigger Type Control
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[n]     |TYPEn     |Port A-F Pin[n] Edge or Level Detection Interrupt Trigger Type Control
     * |        |          |TYPE (Px_INTTYPE[n]) bit is used to control the triggered interrupt is by level trigger or by edge trigger.
     * |        |          |If the interrupt is by edge trigger, the trigger source can be controlled by de-bounce.
     * |        |          |If the interrupt is by level trigger, the input source is sampled by one HCLK clock and generates the interrupt.
     * |        |          |0 = Edge trigger interrupt.
     * |        |          |1 = Level trigger interrupt.
     * |        |          |If the pin is set as the level trigger interrupt, only one level can be set on the registers RHIEN (Px_INTEN[n+16])/FLIEN (Px_INTEN[n]).
     * |        |          |If both levels to trigger interrupt are set, the setting is ignored and no interrupt will occur.
     * |        |          |The de-bounce function is valid only for edge triggered interrupt.
     * |        |          |If the interrupt mode is level triggered, the de-bounce enable bit is ignored.
     * |        |          |Note:
     * |        |          |n = 0~3, 5~11 for port A.
     * |        |          |n = 0~15 for port B.
     * |        |          |n = 0~7, 14 for port C.
     * |        |          |n = 0~3, 15 for port D.
     * |        |          |n = 0~6, 14, 15 for port F.
     * @var GPIO_T::INTEN
     * Offset: 0x1C/0x5C/0x9C/0xDC/0x15C  PA-F Interrupt Enable Control
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[n]     |FLIENn    |Port A-F Pin[n] Falling Edge or Low Level Interrupt Trigger Type Enable Bit
     * |        |          |The FLIEN (Px_INTEN[n]) bit is used to enable the interrupt for each of the corresponding input Px.n pin.
     * |        |          |Set bit to 1 also enable the pin wake-up function.
     * |        |          |When setting the FLIEN (Px_INTEN[n]) bit to 1 :
     * |        |          |If the interrupt is level trigger (TYPE (Px_INTTYPE[n]) bit is set to 1), the input Px.n pin will generate the interrupt while this pin state is at low level.
     * |        |          |If the interrupt is edge trigger(TYPE (Px_INTTYPE[n]) bit is set to 0), the input Px.n pin will generate the interrupt while this pin state changed from high to low.
     * |        |          |0 = Px.n level low or high to low interrupt Disabled.
     * |        |          |1 = Px.n level low or high to low interrupt Enabled.
     * |        |          |Note:
     * |        |          |n = 0~3, 5~11 for port A.
     * |        |          |n = 0~15 for port B.
     * |        |          |n = 0~7, 14 for port C.
     * |        |          |n = 0~3, 15 for port D.
     * |        |          |n = 0~6, 14, 15 for port F.
     * |[n+16]  |RHIENn    |Port A-F Pin[n] Rising Edge or High Level Interrupt Trigger Type Enable Bit
     * |        |          |The RHIEN (Px_INTEN[n+16]) bit is used to enable the interrupt for each of the corresponding input Px.n pin.
     * |        |          |Set bit to 1 also enable the pin wake-up function.
     * |        |          |When setting the RHIEN (Px_INTEN[n+16]) bit to 1 :
     * |        |          |If the interrupt is level trigger (TYPE (Px_INTTYPE[n]) bit is set to 1), the input Px.n pin will generate the interrupt while this pin state is at high level.
     * |        |          |If the interrupt is edge trigger (TYPE (Px_INTTYPE[n]) bit is set to 0), the input Px.n pin will generate the interrupt while this pin state changed from low to high.
     * |        |          |0 = Px.n level high or low to high interrupt Disabled.
     * |        |          |1 = Px.n level high or low to high interrupt Enabled.
     * |        |          |Note:
     * |        |          |n = 0~3, 5~11 for port A.
     * |        |          |n = 0~15 for port B.
     * |        |          |n = 0~7, 14 for port C.
     * |        |          |n = 0~3, 15 for port D.
     * |        |          |n = 0~6, 14, 15 for port F.
     * @var GPIO_T::INTSRC
     * Offset: 0x20/0x60/0xA0/0xE0/0x160  PA-F Interrupt Source Flag
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[n]     |INTSRCn   |Port A-F Pin[n] Interrupt Source Flag
     * |        |          |Write Operation :
     * |        |          |0 = No action.
     * |        |          |1 = Clear the corresponding pending interrupt.
     * |        |          |Read Operation :
     * |        |          |0 = No interrupt at Px.n.
     * |        |          |1 = Px.n generates an interrupt.
     * |        |          |Note:
     * |        |          |n = 0~3, 5~11 for port A.
     * |        |          |n = 0~15 for port B.
     * |        |          |n = 0~7, 14 for port C.
     * |        |          |n = 0~3, 15 for port D.
     * |        |          |n = 0~6, 14, 15 for port F.
     * @var GPIO_T::SMTEN
     * Offset: 0x24/0x64/0xA4/0xE4/0x164  PA-F Input Schmitt Trigger Enable
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[n]     |SMTENn    |Port A-F Pin[n] Input Schmitt Trigger Enable Bit
     * |        |          |0 = Px.n input schmitt trigger function Disabled.
     * |        |          |1 = Px.n input schmitt trigger function Enabled.
     * |        |          |Note:
     * |        |          |n = 0~3, 5~11 for port A.
     * |        |          |n = 0~15 for port B.
     * |        |          |n = 0~7, 14 for port C.
     * |        |          |n = 0~3, 15 for port D.
     * |        |          |n = 0~6, 14, 15 for port F.
     * @var GPIO_T::SLEWCTL
     * Offset: 0x28/0x68/0xA8/0xE8/0x128/0x168  PA-F High Slew Rate Control
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[n]     |HSRENn    |Port A-F Pin[n] High Slew Rate Control
     * |        |          |0 = Px.n output with basic slew rate.
     * |        |          |1 = Px.n output with higher slew rate.
     * |        |          |Note:
     * |        |          |n = 0~3, 5~11 for port A.
     * |        |          |n = 0~15 for port B.
     * |        |          |n = 0~7, 14 for port C.
     * |        |          |n = 0~3, 15 for port D.
     * |        |          |n = 0~6, 14, 15 for port F.
     * @var GPIO_T::DRVCTL
     * Offset: 0x02C/0x16C  Port A and F High Drive Strength Control
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[n]     |HDRVENn   |Port A and F Pin[n] Driving Strength Control
     * |        |          |0 = Px.n output with basic driving strength.
     * |        |          |1 = Px.n output with high driving strength.
     * |        |          |Note:
     * |        |          |n=0,1,2,3,5,6,7 for port A.
     * |        |          |n=2,15 for port F.
     * @var GPIO_T::PUSEL
     * Offset: 0x30/0x70/0xB0/0xF0/0x170  PA-F Pull-up Selection Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[2n]    |PUSELn    |Port A-F Pin[n] Pull-up Enable Register
     * |        |          |Determine each I/O Pull-up of Px.n pins.
     * |        |          |0 = Px.n pull-up disabled.
     * |        |          |1 = Px.n pull-up enabled.
     * |        |          |Note1:
     * |        |          |Basically, the pull-up control has following behavior limitation.
     * |        |          |The independent pull-up control register only valid when MODEn (Px_MODE[2n+1:2n]) set as tri-state and open-drain mode.
     * |        |          |Note2:
     * |        |          |n = 0~3, 5~11 for port A.
     * |        |          |n = 0~15 for port B.
     * |        |          |n = 0~7, 14 for port C.
     * |        |          |n = 0~3, 15 for port D.
     * |        |          |n = 0~6, 14, 15 for port F.
     */


    __IO uint32_t MODE;                  /*!< [0x00/0x40/0x80/0xC0/0x140] PA-F I/O Mode Control                         */
    __IO uint32_t DINOFF;                /*!< [0x04/0x44/0x84/0xC4/0x144] PA-F Digital Input Path Disable Control       */
    __IO uint32_t DOUT;                  /*!< [0x08/0x48/0x88/0xC8/0x148] PA-F Data Output Value                        */
    __IO uint32_t DATMSK;                /*!< [0x0C/0x4C/0x8C/0xCC/0x14C] PA-F Data Output Write Mask                   */
    __I  uint32_t PIN;                   /*!< [0x10/0x50/0x90/0xD0/0x150] PA-F Pin Value                                */
    __IO uint32_t DBEN;                  /*!< [0x14/0x54/0x94/0xD4/0x154] PA-F De-Bounce Enable Control                 */
    __IO uint32_t INTTYPE;               /*!< [0x18/0x58/0x98/0xD8/0x158] PA-F Interrupt Trigger Type Control           */
    __IO uint32_t INTEN;                 /*!< [0x1C/0x5C/0x9C/0xDC/0x15C] PA-F Interrupt Enable Control                 */
    __IO uint32_t INTSRC;                /*!< [0x20/0x60/0xA0/0xE0/0x160] PA-F Interrupt Source Flag                    */
    __IO uint32_t SMTEN;                 /*!< [0x24/0x64/0xA4/0xE4/0x164] PA-F Input Schmitt Trigger Enable             */
    __IO uint32_t SLEWCTL;               /*!< [0x28/0x68/0xA8/0xE8/0x168] PA-F High Slew Rate Control                   */
    __IO uint32_t DRVCTL;                /*!< [0x02C/0x16C] Port A and F High Drive Strength Control                    */
    __IO uint32_t PUSEL;                 /*!< [0x30/0x70/0xB0/0xF0/0x170] PA-F Pull-up Selection Register               */


} GPIO_T;


typedef struct
{


    /**
     * @var GPIO_DBCTL_T::DBCTL
     * Offset: 0x180  Interrupt De-bounce Control
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |DBCLKSEL  |De-bounce Sampling Cycle Selection
     * |        |          |0000 = Sample interrupt input once per 1 clocks.
     * |        |          |0001 = Sample interrupt input once per 2 clocks.
     * |        |          |0010 = Sample interrupt input once per 4 clocks.
     * |        |          |0011 = Sample interrupt input once per 8 clocks.
     * |        |          |0100 = Sample interrupt input once per 16 clocks.
     * |        |          |0101 = Sample interrupt input once per 32 clocks.
     * |        |          |0110 = Sample interrupt input once per 64 clocks.
     * |        |          |0111 = Sample interrupt input once per 128 clocks.
     * |        |          |1000 = Sample interrupt input once per 256 clocks.
     * |        |          |1001 = Sample interrupt input once per 2*256 clocks.
     * |        |          |1010 = Sample interrupt input once per 4*256 clocks.
     * |        |          |1011 = Sample interrupt input once per 8*256 clocks.
     * |        |          |1100 = Sample interrupt input once per 16*256 clocks.
     * |        |          |1101 = Sample interrupt input once per 32*256 clocks.
     * |        |          |1110 = Sample interrupt input once per 64*256 clocks.
     * |        |          |1111 = Sample interrupt input once per 128*256 clocks.
     * |[4]     |DBCLKSRC  |De-bounce Counter Clock Source Selection
     * |        |          |0 = De-bounce counter clock source is the HCLK.
     * |        |          |1 = De-bounce counter clock source is the internal 10 kHz internal low speed oscillator.
     * |[5]     |ICLKON    |Interrupt Clock on Mode
     * |        |          |0 = Edge detection circuit is active only if I/O pin corresponding RHIEN (Px_INTEN[n+16])/FLIEN (Px_INTEN[n]) bit is set to 1.
     * |        |          |1 = All I/O pins edge detection circuit is always active after reset.
     * |        |          |Note: It is recommended to disable this bit to save system power if no special application concern.
     */

    __IO uint32_t DBCTL;                 /*!< [0x0180] Interrupt De-bounce Control                                      */

} GPIO_DBCTL_T;



/**
    @addtogroup GPIO_CONST GPIO Bit Field Definition
    Constant Definitions for GPIO Controller
    @{
*/

#define GPIO_MODE_MODE0_Pos              (0)                                               /*!< GPIO_T::MODE: MODE0 Position           */
#define GPIO_MODE_MODE0_Msk              (0x3ul << GPIO_MODE_MODE0_Pos)                    /*!< GPIO_T::MODE: MODE0 Mask               */

#define GPIO_MODE_MODE1_Pos              (2)                                               /*!< GPIO_T::MODE: MODE1 Position           */
#define GPIO_MODE_MODE1_Msk              (0x3ul << GPIO_MODE_MODE1_Pos)                    /*!< GPIO_T::MODE: MODE1 Mask               */

#define GPIO_MODE_MODE2_Pos              (4)                                               /*!< GPIO_T::MODE: MODE2 Position           */
#define GPIO_MODE_MODE2_Msk              (0x3ul << GPIO_MODE_MODE2_Pos)                    /*!< GPIO_T::MODE: MODE2 Mask               */

#define GPIO_MODE_MODE3_Pos              (6)                                               /*!< GPIO_T::MODE: MODE3 Position           */
#define GPIO_MODE_MODE3_Msk              (0x3ul << GPIO_MODE_MODE3_Pos)                    /*!< GPIO_T::MODE: MODE3 Mask               */

#define GPIO_MODE_MODE4_Pos              (8)                                               /*!< GPIO_T::MODE: MODE4 Position           */
#define GPIO_MODE_MODE4_Msk              (0x3ul << GPIO_MODE_MODE4_Pos)                    /*!< GPIO_T::MODE: MODE4 Mask               */

#define GPIO_MODE_MODE5_Pos              (10)                                              /*!< GPIO_T::MODE: MODE5 Position           */
#define GPIO_MODE_MODE5_Msk              (0x3ul << GPIO_MODE_MODE5_Pos)                    /*!< GPIO_T::MODE: MODE5 Mask               */

#define GPIO_MODE_MODE6_Pos              (12)                                              /*!< GPIO_T::MODE: MODE6 Position           */
#define GPIO_MODE_MODE6_Msk              (0x3ul << GPIO_MODE_MODE6_Pos)                    /*!< GPIO_T::MODE: MODE6 Mask               */

#define GPIO_MODE_MODE7_Pos              (14)                                              /*!< GPIO_T::MODE: MODE7 Position           */
#define GPIO_MODE_MODE7_Msk              (0x3ul << GPIO_MODE_MODE7_Pos)                    /*!< GPIO_T::MODE: MODE7 Mask               */

#define GPIO_MODE_MODE8_Pos              (16)                                              /*!< GPIO_T::MODE: MODE8 Position           */
#define GPIO_MODE_MODE8_Msk              (0x3ul << GPIO_MODE_MODE8_Pos)                    /*!< GPIO_T::MODE: MODE8 Mask               */

#define GPIO_MODE_MODE9_Pos              (18)                                              /*!< GPIO_T::MODE: MODE9 Position           */
#define GPIO_MODE_MODE9_Msk              (0x3ul << GPIO_MODE_MODE9_Pos)                    /*!< GPIO_T::MODE: MODE9 Mask               */

#define GPIO_MODE_MODE10_Pos             (20)                                              /*!< GPIO_T::MODE: MODE10 Position          */
#define GPIO_MODE_MODE10_Msk             (0x3ul << GPIO_MODE_MODE10_Pos)                   /*!< GPIO_T::MODE: MODE10 Mask              */

#define GPIO_MODE_MODE11_Pos             (22)                                              /*!< GPIO_T::MODE: MODE11 Position          */
#define GPIO_MODE_MODE11_Msk             (0x3ul << GPIO_MODE_MODE11_Pos)                   /*!< GPIO_T::MODE: MODE11 Mask              */

#define GPIO_MODE_MODE12_Pos             (24)                                              /*!< GPIO_T::MODE: MODE12 Position          */
#define GPIO_MODE_MODE12_Msk             (0x3ul << GPIO_MODE_MODE12_Pos)                   /*!< GPIO_T::MODE: MODE12 Mask              */

#define GPIO_MODE_MODE13_Pos             (26)                                              /*!< GPIO_T::MODE: MODE13 Position          */
#define GPIO_MODE_MODE13_Msk             (0x3ul << GPIO_MODE_MODE13_Pos)                   /*!< GPIO_T::MODE: MODE13 Mask              */

#define GPIO_MODE_MODE14_Pos             (28)                                              /*!< GPIO_T::MODE: MODE14 Position          */
#define GPIO_MODE_MODE14_Msk             (0x3ul << GPIO_MODE_MODE14_Pos)                   /*!< GPIO_T::MODE: MODE14 Mask              */

#define GPIO_MODE_MODE15_Pos             (30)                                              /*!< GPIO_T::MODE: MODE15 Position          */
#define GPIO_MODE_MODE15_Msk             (0x3ul << GPIO_MODE_MODE15_Pos)                   /*!< GPIO_T::MODE: MODE15 Mask              */

#define GPIO_DINOFF_DINOFF0_Pos          (16)                                              /*!< GPIO_T::DINOFF: DINOFF0 Position       */
#define GPIO_DINOFF_DINOFF0_Msk          (0x1ul << GPIO_DINOFF_DINOFF0_Pos)                /*!< GPIO_T::DINOFF: DINOFF0 Mask           */

#define GPIO_DINOFF_DINOFF1_Pos          (17)                                              /*!< GPIO_T::DINOFF: DINOFF1 Position       */
#define GPIO_DINOFF_DINOFF1_Msk          (0x1ul << GPIO_DINOFF_DINOFF1_Pos)                /*!< GPIO_T::DINOFF: DINOFF1 Mask           */

#define GPIO_DINOFF_DINOFF2_Pos          (18)                                              /*!< GPIO_T::DINOFF: DINOFF2 Position       */
#define GPIO_DINOFF_DINOFF2_Msk          (0x1ul << GPIO_DINOFF_DINOFF2_Pos)                /*!< GPIO_T::DINOFF: DINOFF2 Mask           */

#define GPIO_DINOFF_DINOFF3_Pos          (19)                                              /*!< GPIO_T::DINOFF: DINOFF3 Position       */
#define GPIO_DINOFF_DINOFF3_Msk          (0x1ul << GPIO_DINOFF_DINOFF3_Pos)                /*!< GPIO_T::DINOFF: DINOFF3 Mask           */

#define GPIO_DINOFF_DINOFF4_Pos          (20)                                              /*!< GPIO_T::DINOFF: DINOFF4 Position       */
#define GPIO_DINOFF_DINOFF4_Msk          (0x1ul << GPIO_DINOFF_DINOFF4_Pos)                /*!< GPIO_T::DINOFF: DINOFF4 Mask           */

#define GPIO_DINOFF_DINOFF5_Pos          (21)                                              /*!< GPIO_T::DINOFF: DINOFF5 Position       */
#define GPIO_DINOFF_DINOFF5_Msk          (0x1ul << GPIO_DINOFF_DINOFF5_Pos)                /*!< GPIO_T::DINOFF: DINOFF5 Mask           */

#define GPIO_DINOFF_DINOFF6_Pos          (22)                                              /*!< GPIO_T::DINOFF: DINOFF6 Position       */
#define GPIO_DINOFF_DINOFF6_Msk          (0x1ul << GPIO_DINOFF_DINOFF6_Pos)                /*!< GPIO_T::DINOFF: DINOFF6 Mask           */

#define GPIO_DINOFF_DINOFF7_Pos          (23)                                              /*!< GPIO_T::DINOFF: DINOFF7 Position       */
#define GPIO_DINOFF_DINOFF7_Msk          (0x1ul << GPIO_DINOFF_DINOFF7_Pos)                /*!< GPIO_T::DINOFF: DINOFF7 Mask           */

#define GPIO_DINOFF_DINOFF8_Pos          (24)                                              /*!< GPIO_T::DINOFF: DINOFF8 Position       */
#define GPIO_DINOFF_DINOFF8_Msk          (0x1ul << GPIO_DINOFF_DINOFF8_Pos)                /*!< GPIO_T::DINOFF: DINOFF8 Mask           */

#define GPIO_DINOFF_DINOFF9_Pos          (25)                                              /*!< GPIO_T::DINOFF: DINOFF9 Position       */
#define GPIO_DINOFF_DINOFF9_Msk          (0x1ul << GPIO_DINOFF_DINOFF9_Pos)                /*!< GPIO_T::DINOFF: DINOFF9 Mask           */

#define GPIO_DINOFF_DINOFF10_Pos         (26)                                              /*!< GPIO_T::DINOFF: DINOFF10 Position      */
#define GPIO_DINOFF_DINOFF10_Msk         (0x1ul << GPIO_DINOFF_DINOFF10_Pos)               /*!< GPIO_T::DINOFF: DINOFF10 Mask          */

#define GPIO_DINOFF_DINOFF11_Pos         (27)                                              /*!< GPIO_T::DINOFF: DINOFF11 Position      */
#define GPIO_DINOFF_DINOFF11_Msk         (0x1ul << GPIO_DINOFF_DINOFF11_Pos)               /*!< GPIO_T::DINOFF: DINOFF11 Mask          */

#define GPIO_DINOFF_DINOFF12_Pos         (28)                                              /*!< GPIO_T::DINOFF: DINOFF12 Position      */
#define GPIO_DINOFF_DINOFF12_Msk         (0x1ul << GPIO_DINOFF_DINOFF12_Pos)               /*!< GPIO_T::DINOFF: DINOFF12 Mask          */

#define GPIO_DINOFF_DINOFF13_Pos         (29)                                              /*!< GPIO_T::DINOFF: DINOFF13 Position      */
#define GPIO_DINOFF_DINOFF13_Msk         (0x1ul << GPIO_DINOFF_DINOFF13_Pos)               /*!< GPIO_T::DINOFF: DINOFF13 Mask          */

#define GPIO_DINOFF_DINOFF14_Pos         (30)                                              /*!< GPIO_T::DINOFF: DINOFF14 Position      */
#define GPIO_DINOFF_DINOFF14_Msk         (0x1ul << GPIO_DINOFF_DINOFF14_Pos)               /*!< GPIO_T::DINOFF: DINOFF14 Mask          */

#define GPIO_DINOFF_DINOFF15_Pos         (31)                                              /*!< GPIO_T::DINOFF: DINOFF15 Position      */
#define GPIO_DINOFF_DINOFF15_Msk         (0x1ul << GPIO_DINOFF_DINOFF15_Pos)               /*!< GPIO_T::DINOFF: DINOFF15 Mask          */

#define GPIO_DOUT_DOUT0_Pos              (0)                                               /*!< GPIO_T::DOUT: DOUT0 Position           */
#define GPIO_DOUT_DOUT0_Msk              (0x1ul << GPIO_DOUT_DOUT0_Pos)                    /*!< GPIO_T::DOUT: DOUT0 Mask               */

#define GPIO_DOUT_DOUT1_Pos              (1)                                               /*!< GPIO_T::DOUT: DOUT1 Position           */
#define GPIO_DOUT_DOUT1_Msk              (0x1ul << GPIO_DOUT_DOUT1_Pos)                    /*!< GPIO_T::DOUT: DOUT1 Mask               */

#define GPIO_DOUT_DOUT2_Pos              (2)                                               /*!< GPIO_T::DOUT: DOUT2 Position           */
#define GPIO_DOUT_DOUT2_Msk              (0x1ul << GPIO_DOUT_DOUT2_Pos)                    /*!< GPIO_T::DOUT: DOUT2 Mask               */

#define GPIO_DOUT_DOUT3_Pos              (3)                                               /*!< GPIO_T::DOUT: DOUT3 Position           */
#define GPIO_DOUT_DOUT3_Msk              (0x1ul << GPIO_DOUT_DOUT3_Pos)                    /*!< GPIO_T::DOUT: DOUT3 Mask               */

#define GPIO_DOUT_DOUT4_Pos              (4)                                               /*!< GPIO_T::DOUT: DOUT4 Position           */
#define GPIO_DOUT_DOUT4_Msk              (0x1ul << GPIO_DOUT_DOUT4_Pos)                    /*!< GPIO_T::DOUT: DOUT4 Mask               */

#define GPIO_DOUT_DOUT5_Pos              (5)                                               /*!< GPIO_T::DOUT: DOUT5 Position           */
#define GPIO_DOUT_DOUT5_Msk              (0x1ul << GPIO_DOUT_DOUT5_Pos)                    /*!< GPIO_T::DOUT: DOUT5 Mask               */

#define GPIO_DOUT_DOUT6_Pos              (6)                                               /*!< GPIO_T::DOUT: DOUT6 Position           */
#define GPIO_DOUT_DOUT6_Msk              (0x1ul << GPIO_DOUT_DOUT6_Pos)                    /*!< GPIO_T::DOUT: DOUT6 Mask               */

#define GPIO_DOUT_DOUT7_Pos              (7)                                               /*!< GPIO_T::DOUT: DOUT7 Position           */
#define GPIO_DOUT_DOUT7_Msk              (0x1ul << GPIO_DOUT_DOUT7_Pos)                    /*!< GPIO_T::DOUT: DOUT7 Mask               */

#define GPIO_DOUT_DOUT8_Pos              (8)                                               /*!< GPIO_T::DOUT: DOUT8 Position           */
#define GPIO_DOUT_DOUT8_Msk              (0x1ul << GPIO_DOUT_DOUT8_Pos)                    /*!< GPIO_T::DOUT: DOUT8 Mask               */

#define GPIO_DOUT_DOUT9_Pos              (9)                                               /*!< GPIO_T::DOUT: DOUT9 Position           */
#define GPIO_DOUT_DOUT9_Msk              (0x1ul << GPIO_DOUT_DOUT9_Pos)                    /*!< GPIO_T::DOUT: DOUT9 Mask               */

#define GPIO_DOUT_DOUT10_Pos             (10)                                              /*!< GPIO_T::DOUT: DOUT10 Position          */
#define GPIO_DOUT_DOUT10_Msk             (0x1ul << GPIO_DOUT_DOUT10_Pos)                   /*!< GPIO_T::DOUT: DOUT10 Mask              */

#define GPIO_DOUT_DOUT11_Pos             (11)                                              /*!< GPIO_T::DOUT: DOUT11 Position          */
#define GPIO_DOUT_DOUT11_Msk             (0x1ul << GPIO_DOUT_DOUT11_Pos)                   /*!< GPIO_T::DOUT: DOUT11 Mask              */

#define GPIO_DOUT_DOUT12_Pos             (12)                                              /*!< GPIO_T::DOUT: DOUT12 Position          */
#define GPIO_DOUT_DOUT12_Msk             (0x1ul << GPIO_DOUT_DOUT12_Pos)                   /*!< GPIO_T::DOUT: DOUT12 Mask              */

#define GPIO_DOUT_DOUT13_Pos             (13)                                              /*!< GPIO_T::DOUT: DOUT13 Position          */
#define GPIO_DOUT_DOUT13_Msk             (0x1ul << GPIO_DOUT_DOUT13_Pos)                   /*!< GPIO_T::DOUT: DOUT13 Mask              */

#define GPIO_DOUT_DOUT14_Pos             (14)                                              /*!< GPIO_T::DOUT: DOUT14 Position          */
#define GPIO_DOUT_DOUT14_Msk             (0x1ul << GPIO_DOUT_DOUT14_Pos)                   /*!< GPIO_T::DOUT: DOUT14 Mask              */

#define GPIO_DOUT_DOUT15_Pos             (15)                                              /*!< GPIO_T::DOUT: DOUT15 Position          */
#define GPIO_DOUT_DOUT15_Msk             (0x1ul << GPIO_DOUT_DOUT15_Pos)                   /*!< GPIO_T::DOUT: DOUT15 Mask              */

#define GPIO_DATMSK_DATMSK0_Pos          (0)                                               /*!< GPIO_T::DATMSK: DATMSK0 Position       */
#define GPIO_DATMSK_DATMSK0_Msk          (0x1ul << GPIO_DATMSK_DATMSK0_Pos)                /*!< GPIO_T::DATMSK: DATMSK0 Mask           */

#define GPIO_DATMSK_DATMSK1_Pos          (1)                                               /*!< GPIO_T::DATMSK: DATMSK1 Position       */
#define GPIO_DATMSK_DATMSK1_Msk          (0x1ul << GPIO_DATMSK_DATMSK1_Pos)                /*!< GPIO_T::DATMSK: DATMSK1 Mask           */

#define GPIO_DATMSK_DATMSK2_Pos          (2)                                               /*!< GPIO_T::DATMSK: DATMSK2 Position       */
#define GPIO_DATMSK_DATMSK2_Msk          (0x1ul << GPIO_DATMSK_DATMSK2_Pos)                /*!< GPIO_T::DATMSK: DATMSK2 Mask           */

#define GPIO_DATMSK_DATMSK3_Pos          (3)                                               /*!< GPIO_T::DATMSK: DATMSK3 Position       */
#define GPIO_DATMSK_DATMSK3_Msk          (0x1ul << GPIO_DATMSK_DATMSK3_Pos)                /*!< GPIO_T::DATMSK: DATMSK3 Mask           */

#define GPIO_DATMSK_DATMSK4_Pos          (4)                                               /*!< GPIO_T::DATMSK: DATMSK4 Position       */
#define GPIO_DATMSK_DATMSK4_Msk          (0x1ul << GPIO_DATMSK_DATMSK4_Pos)                /*!< GPIO_T::DATMSK: DATMSK4 Mask           */

#define GPIO_DATMSK_DATMSK5_Pos          (5)                                               /*!< GPIO_T::DATMSK: DATMSK5 Position       */
#define GPIO_DATMSK_DATMSK5_Msk          (0x1ul << GPIO_DATMSK_DATMSK5_Pos)                /*!< GPIO_T::DATMSK: DATMSK5 Mask           */

#define GPIO_DATMSK_DATMSK6_Pos          (6)                                               /*!< GPIO_T::DATMSK: DATMSK6 Position       */
#define GPIO_DATMSK_DATMSK6_Msk          (0x1ul << GPIO_DATMSK_DATMSK6_Pos)                /*!< GPIO_T::DATMSK: DATMSK6 Mask           */

#define GPIO_DATMSK_DATMSK7_Pos          (7)                                               /*!< GPIO_T::DATMSK: DATMSK7 Position       */
#define GPIO_DATMSK_DATMSK7_Msk          (0x1ul << GPIO_DATMSK_DATMSK7_Pos)                /*!< GPIO_T::DATMSK: DATMSK7 Mask           */

#define GPIO_DATMSK_DATMSK8_Pos          (8)                                               /*!< GPIO_T::DATMSK: DATMSK8 Position       */
#define GPIO_DATMSK_DATMSK8_Msk          (0x1ul << GPIO_DATMSK_DATMSK8_Pos)                /*!< GPIO_T::DATMSK: DATMSK8 Mask           */

#define GPIO_DATMSK_DATMSK9_Pos          (9)                                               /*!< GPIO_T::DATMSK: DATMSK9 Position       */
#define GPIO_DATMSK_DATMSK9_Msk          (0x1ul << GPIO_DATMSK_DATMSK9_Pos)                /*!< GPIO_T::DATMSK: DATMSK9 Mask           */

#define GPIO_DATMSK_DATMSK10_Pos         (10)                                              /*!< GPIO_T::DATMSK: DATMSK10 Position      */
#define GPIO_DATMSK_DATMSK10_Msk         (0x1ul << GPIO_DATMSK_DATMSK10_Pos)               /*!< GPIO_T::DATMSK: DATMSK10 Mask          */

#define GPIO_DATMSK_DATMSK11_Pos         (11)                                              /*!< GPIO_T::DATMSK: DATMSK11 Position      */
#define GPIO_DATMSK_DATMSK11_Msk         (0x1ul << GPIO_DATMSK_DATMSK11_Pos)               /*!< GPIO_T::DATMSK: DATMSK11 Mask          */

#define GPIO_DATMSK_DATMSK12_Pos         (12)                                              /*!< GPIO_T::DATMSK: DATMSK12 Position      */
#define GPIO_DATMSK_DATMSK12_Msk         (0x1ul << GPIO_DATMSK_DATMSK12_Pos)               /*!< GPIO_T::DATMSK: DATMSK12 Mask          */

#define GPIO_DATMSK_DATMSK13_Pos         (13)                                              /*!< GPIO_T::DATMSK: DATMSK13 Position      */
#define GPIO_DATMSK_DATMSK13_Msk         (0x1ul << GPIO_DATMSK_DATMSK13_Pos)               /*!< GPIO_T::DATMSK: DATMSK13 Mask          */

#define GPIO_DATMSK_DATMSK14_Pos         (14)                                              /*!< GPIO_T::DATMSK: DATMSK14 Position      */
#define GPIO_DATMSK_DATMSK14_Msk         (0x1ul << GPIO_DATMSK_DATMSK14_Pos)               /*!< GPIO_T::DATMSK: DATMSK14 Mask          */

#define GPIO_DATMSK_DATMSK15_Pos         (15)                                              /*!< GPIO_T::DATMSK: DATMSK15 Position      */
#define GPIO_DATMSK_DATMSK15_Msk         (0x1ul << GPIO_DATMSK_DATMSK15_Pos)               /*!< GPIO_T::DATMSK: DATMSK15 Mask          */

#define GPIO_PIN_PIN0_Pos                (0)                                               /*!< GPIO_T::PIN: PIN0 Position             */
#define GPIO_PIN_PIN0_Msk                (0x1ul << GPIO_PIN_PIN0_Pos)                      /*!< GPIO_T::PIN: PIN0 Mask                 */

#define GPIO_PIN_PIN1_Pos                (1)                                               /*!< GPIO_T::PIN: PIN1 Position             */
#define GPIO_PIN_PIN1_Msk                (0x1ul << GPIO_PIN_PIN1_Pos)                      /*!< GPIO_T::PIN: PIN1 Mask                 */

#define GPIO_PIN_PIN2_Pos                (2)                                               /*!< GPIO_T::PIN: PIN2 Position             */
#define GPIO_PIN_PIN2_Msk                (0x1ul << GPIO_PIN_PIN2_Pos)                      /*!< GPIO_T::PIN: PIN2 Mask                 */

#define GPIO_PIN_PIN3_Pos                (3)                                               /*!< GPIO_T::PIN: PIN3 Position             */
#define GPIO_PIN_PIN3_Msk                (0x1ul << GPIO_PIN_PIN3_Pos)                      /*!< GPIO_T::PIN: PIN3 Mask                 */

#define GPIO_PIN_PIN4_Pos                (4)                                               /*!< GPIO_T::PIN: PIN4 Position             */
#define GPIO_PIN_PIN4_Msk                (0x1ul << GPIO_PIN_PIN4_Pos)                      /*!< GPIO_T::PIN: PIN4 Mask                 */

#define GPIO_PIN_PIN5_Pos                (5)                                               /*!< GPIO_T::PIN: PIN5 Position             */
#define GPIO_PIN_PIN5_Msk                (0x1ul << GPIO_PIN_PIN5_Pos)                      /*!< GPIO_T::PIN: PIN5 Mask                 */

#define GPIO_PIN_PIN6_Pos                (6)                                               /*!< GPIO_T::PIN: PIN6 Position             */
#define GPIO_PIN_PIN6_Msk                (0x1ul << GPIO_PIN_PIN6_Pos)                      /*!< GPIO_T::PIN: PIN6 Mask                 */

#define GPIO_PIN_PIN7_Pos                (7)                                               /*!< GPIO_T::PIN: PIN7 Position             */
#define GPIO_PIN_PIN7_Msk                (0x1ul << GPIO_PIN_PIN7_Pos)                      /*!< GPIO_T::PIN: PIN7 Mask                 */

#define GPIO_PIN_PIN8_Pos                (8)                                               /*!< GPIO_T::PIN: PIN8 Position             */
#define GPIO_PIN_PIN8_Msk                (0x1ul << GPIO_PIN_PIN8_Pos)                      /*!< GPIO_T::PIN: PIN8 Mask                 */

#define GPIO_PIN_PIN9_Pos                (9)                                               /*!< GPIO_T::PIN: PIN9 Position             */
#define GPIO_PIN_PIN9_Msk                (0x1ul << GPIO_PIN_PIN9_Pos)                      /*!< GPIO_T::PIN: PIN9 Mask                 */

#define GPIO_PIN_PIN10_Pos               (10)                                              /*!< GPIO_T::PIN: PIN10 Position            */
#define GPIO_PIN_PIN10_Msk               (0x1ul << GPIO_PIN_PIN10_Pos)                     /*!< GPIO_T::PIN: PIN10 Mask                */

#define GPIO_PIN_PIN11_Pos               (11)                                              /*!< GPIO_T::PIN: PIN11 Position            */
#define GPIO_PIN_PIN11_Msk               (0x1ul << GPIO_PIN_PIN11_Pos)                     /*!< GPIO_T::PIN: PIN11 Mask                */

#define GPIO_PIN_PIN12_Pos               (12)                                              /*!< GPIO_T::PIN: PIN12 Position            */
#define GPIO_PIN_PIN12_Msk               (0x1ul << GPIO_PIN_PIN12_Pos)                     /*!< GPIO_T::PIN: PIN12 Mask                */

#define GPIO_PIN_PIN13_Pos               (13)                                              /*!< GPIO_T::PIN: PIN13 Position            */
#define GPIO_PIN_PIN13_Msk               (0x1ul << GPIO_PIN_PIN13_Pos)                     /*!< GPIO_T::PIN: PIN13 Mask                */

#define GPIO_PIN_PIN14_Pos               (14)                                              /*!< GPIO_T::PIN: PIN14 Position            */
#define GPIO_PIN_PIN14_Msk               (0x1ul << GPIO_PIN_PIN14_Pos)                     /*!< GPIO_T::PIN: PIN14 Mask                */

#define GPIO_PIN_PIN15_Pos               (15)                                              /*!< GPIO_T::PIN: PIN15 Position            */
#define GPIO_PIN_PIN15_Msk               (0x1ul << GPIO_PIN_PIN15_Pos)                     /*!< GPIO_T::PIN: PIN15 Mask                */

#define GPIO_DBEN_DBEN0_Pos              (0)                                               /*!< GPIO_T::DBEN: DBEN0 Position           */
#define GPIO_DBEN_DBEN0_Msk              (0x1ul << GPIO_DBEN_DBEN0_Pos)                    /*!< GPIO_T::DBEN: DBEN0 Mask               */

#define GPIO_DBEN_DBEN1_Pos              (1)                                               /*!< GPIO_T::DBEN: DBEN1 Position           */
#define GPIO_DBEN_DBEN1_Msk              (0x1ul << GPIO_DBEN_DBEN1_Pos)                    /*!< GPIO_T::DBEN: DBEN1 Mask               */

#define GPIO_DBEN_DBEN2_Pos              (2)                                               /*!< GPIO_T::DBEN: DBEN2 Position           */
#define GPIO_DBEN_DBEN2_Msk              (0x1ul << GPIO_DBEN_DBEN2_Pos)                    /*!< GPIO_T::DBEN: DBEN2 Mask               */

#define GPIO_DBEN_DBEN3_Pos              (3)                                               /*!< GPIO_T::DBEN: DBEN3 Position           */
#define GPIO_DBEN_DBEN3_Msk              (0x1ul << GPIO_DBEN_DBEN3_Pos)                    /*!< GPIO_T::DBEN: DBEN3 Mask               */

#define GPIO_DBEN_DBEN4_Pos              (4)                                               /*!< GPIO_T::DBEN: DBEN4 Position           */
#define GPIO_DBEN_DBEN4_Msk              (0x1ul << GPIO_DBEN_DBEN4_Pos)                    /*!< GPIO_T::DBEN: DBEN4 Mask               */

#define GPIO_DBEN_DBEN5_Pos              (5)                                               /*!< GPIO_T::DBEN: DBEN5 Position           */
#define GPIO_DBEN_DBEN5_Msk              (0x1ul << GPIO_DBEN_DBEN5_Pos)                    /*!< GPIO_T::DBEN: DBEN5 Mask               */

#define GPIO_DBEN_DBEN6_Pos              (6)                                               /*!< GPIO_T::DBEN: DBEN6 Position           */
#define GPIO_DBEN_DBEN6_Msk              (0x1ul << GPIO_DBEN_DBEN6_Pos)                    /*!< GPIO_T::DBEN: DBEN6 Mask               */

#define GPIO_DBEN_DBEN7_Pos              (7)                                               /*!< GPIO_T::DBEN: DBEN7 Position           */
#define GPIO_DBEN_DBEN7_Msk              (0x1ul << GPIO_DBEN_DBEN7_Pos)                    /*!< GPIO_T::DBEN: DBEN7 Mask               */

#define GPIO_DBEN_DBEN8_Pos              (8)                                               /*!< GPIO_T::DBEN: DBEN8 Position           */
#define GPIO_DBEN_DBEN8_Msk              (0x1ul << GPIO_DBEN_DBEN8_Pos)                    /*!< GPIO_T::DBEN: DBEN8 Mask               */

#define GPIO_DBEN_DBEN9_Pos              (9)                                               /*!< GPIO_T::DBEN: DBEN9 Position           */
#define GPIO_DBEN_DBEN9_Msk              (0x1ul << GPIO_DBEN_DBEN9_Pos)                    /*!< GPIO_T::DBEN: DBEN9 Mask               */

#define GPIO_DBEN_DBEN10_Pos             (10)                                              /*!< GPIO_T::DBEN: DBEN10 Position          */
#define GPIO_DBEN_DBEN10_Msk             (0x1ul << GPIO_DBEN_DBEN10_Pos)                   /*!< GPIO_T::DBEN: DBEN10 Mask              */

#define GPIO_DBEN_DBEN11_Pos             (11)                                              /*!< GPIO_T::DBEN: DBEN11 Position          */
#define GPIO_DBEN_DBEN11_Msk             (0x1ul << GPIO_DBEN_DBEN11_Pos)                   /*!< GPIO_T::DBEN: DBEN11 Mask              */

#define GPIO_DBEN_DBEN12_Pos             (12)                                              /*!< GPIO_T::DBEN: DBEN12 Position          */
#define GPIO_DBEN_DBEN12_Msk             (0x1ul << GPIO_DBEN_DBEN12_Pos)                   /*!< GPIO_T::DBEN: DBEN12 Mask              */

#define GPIO_DBEN_DBEN13_Pos             (13)                                              /*!< GPIO_T::DBEN: DBEN13 Position          */
#define GPIO_DBEN_DBEN13_Msk             (0x1ul << GPIO_DBEN_DBEN13_Pos)                   /*!< GPIO_T::DBEN: DBEN13 Mask              */

#define GPIO_DBEN_DBEN14_Pos             (14)                                              /*!< GPIO_T::DBEN: DBEN14 Position          */
#define GPIO_DBEN_DBEN14_Msk             (0x1ul << GPIO_DBEN_DBEN14_Pos)                   /*!< GPIO_T::DBEN: DBEN14 Mask              */

#define GPIO_DBEN_DBEN15_Pos             (15)                                              /*!< GPIO_T::DBEN: DBEN15 Position          */
#define GPIO_DBEN_DBEN15_Msk             (0x1ul << GPIO_DBEN_DBEN15_Pos)                   /*!< GPIO_T::DBEN: DBEN15 Mask              */

#define GPIO_INTTYPE_TYPE0_Pos           (0)                                               /*!< GPIO_T::INTTYPE: TYPE0 Position        */
#define GPIO_INTTYPE_TYPE0_Msk           (0x1ul << GPIO_INTTYPE_TYPE0_Pos)                 /*!< GPIO_T::INTTYPE: TYPE0 Mask            */

#define GPIO_INTTYPE_TYPE1_Pos           (1)                                               /*!< GPIO_T::INTTYPE: TYPE1 Position        */
#define GPIO_INTTYPE_TYPE1_Msk           (0x1ul << GPIO_INTTYPE_TYPE1_Pos)                 /*!< GPIO_T::INTTYPE: TYPE1 Mask            */

#define GPIO_INTTYPE_TYPE2_Pos           (2)                                               /*!< GPIO_T::INTTYPE: TYPE2 Position        */
#define GPIO_INTTYPE_TYPE2_Msk           (0x1ul << GPIO_INTTYPE_TYPE2_Pos)                 /*!< GPIO_T::INTTYPE: TYPE2 Mask            */

#define GPIO_INTTYPE_TYPE3_Pos           (3)                                               /*!< GPIO_T::INTTYPE: TYPE3 Position        */
#define GPIO_INTTYPE_TYPE3_Msk           (0x1ul << GPIO_INTTYPE_TYPE3_Pos)                 /*!< GPIO_T::INTTYPE: TYPE3 Mask            */

#define GPIO_INTTYPE_TYPE4_Pos           (4)                                               /*!< GPIO_T::INTTYPE: TYPE4 Position        */
#define GPIO_INTTYPE_TYPE4_Msk           (0x1ul << GPIO_INTTYPE_TYPE4_Pos)                 /*!< GPIO_T::INTTYPE: TYPE4 Mask            */

#define GPIO_INTTYPE_TYPE5_Pos           (5)                                               /*!< GPIO_T::INTTYPE: TYPE5 Position        */
#define GPIO_INTTYPE_TYPE5_Msk           (0x1ul << GPIO_INTTYPE_TYPE5_Pos)                 /*!< GPIO_T::INTTYPE: TYPE5 Mask            */

#define GPIO_INTTYPE_TYPE6_Pos           (6)                                               /*!< GPIO_T::INTTYPE: TYPE6 Position        */
#define GPIO_INTTYPE_TYPE6_Msk           (0x1ul << GPIO_INTTYPE_TYPE6_Pos)                 /*!< GPIO_T::INTTYPE: TYPE6 Mask            */

#define GPIO_INTTYPE_TYPE7_Pos           (7)                                               /*!< GPIO_T::INTTYPE: TYPE7 Position        */
#define GPIO_INTTYPE_TYPE7_Msk           (0x1ul << GPIO_INTTYPE_TYPE7_Pos)                 /*!< GPIO_T::INTTYPE: TYPE7 Mask            */

#define GPIO_INTTYPE_TYPE8_Pos           (8)                                               /*!< GPIO_T::INTTYPE: TYPE8 Position        */
#define GPIO_INTTYPE_TYPE8_Msk           (0x1ul << GPIO_INTTYPE_TYPE8_Pos)                 /*!< GPIO_T::INTTYPE: TYPE8 Mask            */

#define GPIO_INTTYPE_TYPE9_Pos           (9)                                               /*!< GPIO_T::INTTYPE: TYPE9 Position        */
#define GPIO_INTTYPE_TYPE9_Msk           (0x1ul << GPIO_INTTYPE_TYPE9_Pos)                 /*!< GPIO_T::INTTYPE: TYPE9 Mask            */

#define GPIO_INTTYPE_TYPE10_Pos          (10)                                              /*!< GPIO_T::INTTYPE: TYPE10 Position       */
#define GPIO_INTTYPE_TYPE10_Msk          (0x1ul << GPIO_INTTYPE_TYPE10_Pos)                /*!< GPIO_T::INTTYPE: TYPE10 Mask           */

#define GPIO_INTTYPE_TYPE11_Pos          (11)                                              /*!< GPIO_T::INTTYPE: TYPE11 Position       */
#define GPIO_INTTYPE_TYPE11_Msk          (0x1ul << GPIO_INTTYPE_TYPE11_Pos)                /*!< GPIO_T::INTTYPE: TYPE11 Mask           */

#define GPIO_INTTYPE_TYPE12_Pos          (12)                                              /*!< GPIO_T::INTTYPE: TYPE12 Position       */
#define GPIO_INTTYPE_TYPE12_Msk          (0x1ul << GPIO_INTTYPE_TYPE12_Pos)                /*!< GPIO_T::INTTYPE: TYPE12 Mask           */

#define GPIO_INTTYPE_TYPE13_Pos          (13)                                              /*!< GPIO_T::INTTYPE: TYPE13 Position       */
#define GPIO_INTTYPE_TYPE13_Msk          (0x1ul << GPIO_INTTYPE_TYPE13_Pos)                /*!< GPIO_T::INTTYPE: TYPE13 Mask           */

#define GPIO_INTTYPE_TYPE14_Pos          (14)                                              /*!< GPIO_T::INTTYPE: TYPE14 Position       */
#define GPIO_INTTYPE_TYPE14_Msk          (0x1ul << GPIO_INTTYPE_TYPE14_Pos)                /*!< GPIO_T::INTTYPE: TYPE14 Mask           */

#define GPIO_INTTYPE_TYPE15_Pos          (15)                                              /*!< GPIO_T::INTTYPE: TYPE15 Position       */
#define GPIO_INTTYPE_TYPE15_Msk          (0x1ul << GPIO_INTTYPE_TYPE15_Pos)                /*!< GPIO_T::INTTYPE: TYPE15 Mask           */

#define GPIO_INTEN_FLIEN0_Pos            (0)                                               /*!< GPIO_T::INTEN: FLIEN0 Position         */
#define GPIO_INTEN_FLIEN0_Msk            (0x1ul << GPIO_INTEN_FLIEN0_Pos)                  /*!< GPIO_T::INTEN: FLIEN0 Mask             */

#define GPIO_INTEN_FLIEN1_Pos            (1)                                               /*!< GPIO_T::INTEN: FLIEN1 Position         */
#define GPIO_INTEN_FLIEN1_Msk            (0x1ul << GPIO_INTEN_FLIEN1_Pos)                  /*!< GPIO_T::INTEN: FLIEN1 Mask             */

#define GPIO_INTEN_FLIEN2_Pos            (2)                                               /*!< GPIO_T::INTEN: FLIEN2 Position         */
#define GPIO_INTEN_FLIEN2_Msk            (0x1ul << GPIO_INTEN_FLIEN2_Pos)                  /*!< GPIO_T::INTEN: FLIEN2 Mask             */

#define GPIO_INTEN_FLIEN3_Pos            (3)                                               /*!< GPIO_T::INTEN: FLIEN3 Position         */
#define GPIO_INTEN_FLIEN3_Msk            (0x1ul << GPIO_INTEN_FLIEN3_Pos)                  /*!< GPIO_T::INTEN: FLIEN3 Mask             */

#define GPIO_INTEN_FLIEN4_Pos            (4)                                               /*!< GPIO_T::INTEN: FLIEN4 Position         */
#define GPIO_INTEN_FLIEN4_Msk            (0x1ul << GPIO_INTEN_FLIEN4_Pos)                  /*!< GPIO_T::INTEN: FLIEN4 Mask             */

#define GPIO_INTEN_FLIEN5_Pos            (5)                                               /*!< GPIO_T::INTEN: FLIEN5 Position         */
#define GPIO_INTEN_FLIEN5_Msk            (0x1ul << GPIO_INTEN_FLIEN5_Pos)                  /*!< GPIO_T::INTEN: FLIEN5 Mask             */

#define GPIO_INTEN_FLIEN6_Pos            (6)                                               /*!< GPIO_T::INTEN: FLIEN6 Position         */
#define GPIO_INTEN_FLIEN6_Msk            (0x1ul << GPIO_INTEN_FLIEN6_Pos)                  /*!< GPIO_T::INTEN: FLIEN6 Mask             */

#define GPIO_INTEN_FLIEN7_Pos            (7)                                               /*!< GPIO_T::INTEN: FLIEN7 Position         */
#define GPIO_INTEN_FLIEN7_Msk            (0x1ul << GPIO_INTEN_FLIEN7_Pos)                  /*!< GPIO_T::INTEN: FLIEN7 Mask             */

#define GPIO_INTEN_FLIEN8_Pos            (8)                                               /*!< GPIO_T::INTEN: FLIEN8 Position         */
#define GPIO_INTEN_FLIEN8_Msk            (0x1ul << GPIO_INTEN_FLIEN8_Pos)                  /*!< GPIO_T::INTEN: FLIEN8 Mask             */

#define GPIO_INTEN_FLIEN9_Pos            (9)                                               /*!< GPIO_T::INTEN: FLIEN9 Position         */
#define GPIO_INTEN_FLIEN9_Msk            (0x1ul << GPIO_INTEN_FLIEN9_Pos)                  /*!< GPIO_T::INTEN: FLIEN9 Mask             */

#define GPIO_INTEN_FLIEN10_Pos           (10)                                              /*!< GPIO_T::INTEN: FLIEN10 Position        */
#define GPIO_INTEN_FLIEN10_Msk           (0x1ul << GPIO_INTEN_FLIEN10_Pos)                 /*!< GPIO_T::INTEN: FLIEN10 Mask            */

#define GPIO_INTEN_FLIEN11_Pos           (11)                                              /*!< GPIO_T::INTEN: FLIEN11 Position        */
#define GPIO_INTEN_FLIEN11_Msk           (0x1ul << GPIO_INTEN_FLIEN11_Pos)                 /*!< GPIO_T::INTEN: FLIEN11 Mask            */

#define GPIO_INTEN_FLIEN12_Pos           (12)                                              /*!< GPIO_T::INTEN: FLIEN12 Position        */
#define GPIO_INTEN_FLIEN12_Msk           (0x1ul << GPIO_INTEN_FLIEN12_Pos)                 /*!< GPIO_T::INTEN: FLIEN12 Mask            */

#define GPIO_INTEN_FLIEN13_Pos           (13)                                              /*!< GPIO_T::INTEN: FLIEN13 Position        */
#define GPIO_INTEN_FLIEN13_Msk           (0x1ul << GPIO_INTEN_FLIEN13_Pos)                 /*!< GPIO_T::INTEN: FLIEN13 Mask            */

#define GPIO_INTEN_FLIEN14_Pos           (14)                                              /*!< GPIO_T::INTEN: FLIEN14 Position        */
#define GPIO_INTEN_FLIEN14_Msk           (0x1ul << GPIO_INTEN_FLIEN14_Pos)                 /*!< GPIO_T::INTEN: FLIEN14 Mask            */

#define GPIO_INTEN_FLIEN15_Pos           (15)                                              /*!< GPIO_T::INTEN: FLIEN15 Position        */
#define GPIO_INTEN_FLIEN15_Msk           (0x1ul << GPIO_INTEN_FLIEN15_Pos)                 /*!< GPIO_T::INTEN: FLIEN15 Mask            */

#define GPIO_INTEN_RHIEN0_Pos            (16)                                              /*!< GPIO_T::INTEN: RHIEN0 Position         */
#define GPIO_INTEN_RHIEN0_Msk            (0x1ul << GPIO_INTEN_RHIEN0_Pos)                  /*!< GPIO_T::INTEN: RHIEN0 Mask             */

#define GPIO_INTEN_RHIEN1_Pos            (17)                                              /*!< GPIO_T::INTEN: RHIEN1 Position         */
#define GPIO_INTEN_RHIEN1_Msk            (0x1ul << GPIO_INTEN_RHIEN1_Pos)                  /*!< GPIO_T::INTEN: RHIEN1 Mask             */

#define GPIO_INTEN_RHIEN2_Pos            (18)                                              /*!< GPIO_T::INTEN: RHIEN2 Position         */
#define GPIO_INTEN_RHIEN2_Msk            (0x1ul << GPIO_INTEN_RHIEN2_Pos)                  /*!< GPIO_T::INTEN: RHIEN2 Mask             */

#define GPIO_INTEN_RHIEN3_Pos            (19)                                              /*!< GPIO_T::INTEN: RHIEN3 Position         */
#define GPIO_INTEN_RHIEN3_Msk            (0x1ul << GPIO_INTEN_RHIEN3_Pos)                  /*!< GPIO_T::INTEN: RHIEN3 Mask             */

#define GPIO_INTEN_RHIEN4_Pos            (20)                                              /*!< GPIO_T::INTEN: RHIEN4 Position         */
#define GPIO_INTEN_RHIEN4_Msk            (0x1ul << GPIO_INTEN_RHIEN4_Pos)                  /*!< GPIO_T::INTEN: RHIEN4 Mask             */

#define GPIO_INTEN_RHIEN5_Pos            (21)                                              /*!< GPIO_T::INTEN: RHIEN5 Position         */
#define GPIO_INTEN_RHIEN5_Msk            (0x1ul << GPIO_INTEN_RHIEN5_Pos)                  /*!< GPIO_T::INTEN: RHIEN5 Mask             */

#define GPIO_INTEN_RHIEN6_Pos            (22)                                              /*!< GPIO_T::INTEN: RHIEN6 Position         */
#define GPIO_INTEN_RHIEN6_Msk            (0x1ul << GPIO_INTEN_RHIEN6_Pos)                  /*!< GPIO_T::INTEN: RHIEN6 Mask             */

#define GPIO_INTEN_RHIEN7_Pos            (23)                                              /*!< GPIO_T::INTEN: RHIEN7 Position         */
#define GPIO_INTEN_RHIEN7_Msk            (0x1ul << GPIO_INTEN_RHIEN7_Pos)                  /*!< GPIO_T::INTEN: RHIEN7 Mask             */

#define GPIO_INTEN_RHIEN8_Pos            (24)                                              /*!< GPIO_T::INTEN: RHIEN8 Position         */
#define GPIO_INTEN_RHIEN8_Msk            (0x1ul << GPIO_INTEN_RHIEN8_Pos)                  /*!< GPIO_T::INTEN: RHIEN8 Mask             */

#define GPIO_INTEN_RHIEN9_Pos            (25)                                              /*!< GPIO_T::INTEN: RHIEN9 Position         */
#define GPIO_INTEN_RHIEN9_Msk            (0x1ul << GPIO_INTEN_RHIEN9_Pos)                  /*!< GPIO_T::INTEN: RHIEN9 Mask             */

#define GPIO_INTEN_RHIEN10_Pos           (26)                                              /*!< GPIO_T::INTEN: RHIEN10 Position        */
#define GPIO_INTEN_RHIEN10_Msk           (0x1ul << GPIO_INTEN_RHIEN10_Pos)                 /*!< GPIO_T::INTEN: RHIEN10 Mask            */

#define GPIO_INTEN_RHIEN11_Pos           (27)                                              /*!< GPIO_T::INTEN: RHIEN11 Position        */
#define GPIO_INTEN_RHIEN11_Msk           (0x1ul << GPIO_INTEN_RHIEN11_Pos)                 /*!< GPIO_T::INTEN: RHIEN11 Mask            */

#define GPIO_INTEN_RHIEN12_Pos           (28)                                              /*!< GPIO_T::INTEN: RHIEN12 Position        */
#define GPIO_INTEN_RHIEN12_Msk           (0x1ul << GPIO_INTEN_RHIEN12_Pos)                 /*!< GPIO_T::INTEN: RHIEN12 Mask            */

#define GPIO_INTEN_RHIEN13_Pos           (29)                                              /*!< GPIO_T::INTEN: RHIEN13 Position        */
#define GPIO_INTEN_RHIEN13_Msk           (0x1ul << GPIO_INTEN_RHIEN13_Pos)                 /*!< GPIO_T::INTEN: RHIEN13 Mask            */

#define GPIO_INTEN_RHIEN14_Pos           (30)                                              /*!< GPIO_T::INTEN: RHIEN14 Position        */
#define GPIO_INTEN_RHIEN14_Msk           (0x1ul << GPIO_INTEN_RHIEN14_Pos)                 /*!< GPIO_T::INTEN: RHIEN14 Mask            */

#define GPIO_INTEN_RHIEN15_Pos           (31)                                              /*!< GPIO_T::INTEN: RHIEN15 Position        */
#define GPIO_INTEN_RHIEN15_Msk           (0x1ul << GPIO_INTEN_RHIEN15_Pos)                 /*!< GPIO_T::INTEN: RHIEN15 Mask            */

#define GPIO_INTSRC_INTSRC0_Pos          (0)                                               /*!< GPIO_T::INTSRC: INTSRC0 Position       */
#define GPIO_INTSRC_INTSRC0_Msk          (0x1ul << GPIO_INTSRC_INTSRC0_Pos)                /*!< GPIO_T::INTSRC: INTSRC0 Mask           */

#define GPIO_INTSRC_INTSRC1_Pos          (1)                                               /*!< GPIO_T::INTSRC: INTSRC1 Position       */
#define GPIO_INTSRC_INTSRC1_Msk          (0x1ul << GPIO_INTSRC_INTSRC1_Pos)                /*!< GPIO_T::INTSRC: INTSRC1 Mask           */

#define GPIO_INTSRC_INTSRC2_Pos          (2)                                               /*!< GPIO_T::INTSRC: INTSRC2 Position       */
#define GPIO_INTSRC_INTSRC2_Msk          (0x1ul << GPIO_INTSRC_INTSRC2_Pos)                /*!< GPIO_T::INTSRC: INTSRC2 Mask           */

#define GPIO_INTSRC_INTSRC3_Pos          (3)                                               /*!< GPIO_T::INTSRC: INTSRC3 Position       */
#define GPIO_INTSRC_INTSRC3_Msk          (0x1ul << GPIO_INTSRC_INTSRC3_Pos)                /*!< GPIO_T::INTSRC: INTSRC3 Mask           */

#define GPIO_INTSRC_INTSRC4_Pos          (4)                                               /*!< GPIO_T::INTSRC: INTSRC4 Position       */
#define GPIO_INTSRC_INTSRC4_Msk          (0x1ul << GPIO_INTSRC_INTSRC4_Pos)                /*!< GPIO_T::INTSRC: INTSRC4 Mask           */

#define GPIO_INTSRC_INTSRC5_Pos          (5)                                               /*!< GPIO_T::INTSRC: INTSRC5 Position       */
#define GPIO_INTSRC_INTSRC5_Msk          (0x1ul << GPIO_INTSRC_INTSRC5_Pos)                /*!< GPIO_T::INTSRC: INTSRC5 Mask           */

#define GPIO_INTSRC_INTSRC6_Pos          (6)                                               /*!< GPIO_T::INTSRC: INTSRC6 Position       */
#define GPIO_INTSRC_INTSRC6_Msk          (0x1ul << GPIO_INTSRC_INTSRC6_Pos)                /*!< GPIO_T::INTSRC: INTSRC6 Mask           */

#define GPIO_INTSRC_INTSRC7_Pos          (7)                                               /*!< GPIO_T::INTSRC: INTSRC7 Position       */
#define GPIO_INTSRC_INTSRC7_Msk          (0x1ul << GPIO_INTSRC_INTSRC7_Pos)                /*!< GPIO_T::INTSRC: INTSRC7 Mask           */

#define GPIO_INTSRC_INTSRC8_Pos          (8)                                               /*!< GPIO_T::INTSRC: INTSRC8 Position       */
#define GPIO_INTSRC_INTSRC8_Msk          (0x1ul << GPIO_INTSRC_INTSRC8_Pos)                /*!< GPIO_T::INTSRC: INTSRC8 Mask           */

#define GPIO_INTSRC_INTSRC9_Pos          (9)                                               /*!< GPIO_T::INTSRC: INTSRC9 Position       */
#define GPIO_INTSRC_INTSRC9_Msk          (0x1ul << GPIO_INTSRC_INTSRC9_Pos)                /*!< GPIO_T::INTSRC: INTSRC9 Mask           */

#define GPIO_INTSRC_INTSRC10_Pos         (10)                                              /*!< GPIO_T::INTSRC: INTSRC10 Position      */
#define GPIO_INTSRC_INTSRC10_Msk         (0x1ul << GPIO_INTSRC_INTSRC10_Pos)               /*!< GPIO_T::INTSRC: INTSRC10 Mask          */

#define GPIO_INTSRC_INTSRC11_Pos         (11)                                              /*!< GPIO_T::INTSRC: INTSRC11 Position      */
#define GPIO_INTSRC_INTSRC11_Msk         (0x1ul << GPIO_INTSRC_INTSRC11_Pos)               /*!< GPIO_T::INTSRC: INTSRC11 Mask          */

#define GPIO_INTSRC_INTSRC12_Pos         (12)                                              /*!< GPIO_T::INTSRC: INTSRC12 Position      */
#define GPIO_INTSRC_INTSRC12_Msk         (0x1ul << GPIO_INTSRC_INTSRC12_Pos)               /*!< GPIO_T::INTSRC: INTSRC12 Mask          */

#define GPIO_INTSRC_INTSRC13_Pos         (13)                                              /*!< GPIO_T::INTSRC: INTSRC13 Position      */
#define GPIO_INTSRC_INTSRC13_Msk         (0x1ul << GPIO_INTSRC_INTSRC13_Pos)               /*!< GPIO_T::INTSRC: INTSRC13 Mask          */

#define GPIO_INTSRC_INTSRC14_Pos         (14)                                              /*!< GPIO_T::INTSRC: INTSRC14 Position      */
#define GPIO_INTSRC_INTSRC14_Msk         (0x1ul << GPIO_INTSRC_INTSRC14_Pos)               /*!< GPIO_T::INTSRC: INTSRC14 Mask          */

#define GPIO_INTSRC_INTSRC15_Pos         (15)                                              /*!< GPIO_T::INTSRC: INTSRC15 Position      */
#define GPIO_INTSRC_INTSRC15_Msk         (0x1ul << GPIO_INTSRC_INTSRC15_Pos)               /*!< GPIO_T::INTSRC: INTSRC15 Mask          */

#define GPIO_SMTEN_SMTEN0_Pos            (0)                                               /*!< GPIO_T::SMTEN: SMTEN0 Position         */
#define GPIO_SMTEN_SMTEN0_Msk            (0x1ul << GPIO_SMTEN_SMTEN0_Pos)                  /*!< GPIO_T::SMTEN: SMTEN0 Mask             */

#define GPIO_SMTEN_SMTEN1_Pos            (1)                                               /*!< GPIO_T::SMTEN: SMTEN1 Position         */
#define GPIO_SMTEN_SMTEN1_Msk            (0x1ul << GPIO_SMTEN_SMTEN1_Pos)                  /*!< GPIO_T::SMTEN: SMTEN1 Mask             */

#define GPIO_SMTEN_SMTEN2_Pos            (2)                                               /*!< GPIO_T::SMTEN: SMTEN2 Position         */
#define GPIO_SMTEN_SMTEN2_Msk            (0x1ul << GPIO_SMTEN_SMTEN2_Pos)                  /*!< GPIO_T::SMTEN: SMTEN2 Mask             */

#define GPIO_SMTEN_SMTEN3_Pos            (3)                                               /*!< GPIO_T::SMTEN: SMTEN3 Position         */
#define GPIO_SMTEN_SMTEN3_Msk            (0x1ul << GPIO_SMTEN_SMTEN3_Pos)                  /*!< GPIO_T::SMTEN: SMTEN3 Mask             */

#define GPIO_SMTEN_SMTEN4_Pos            (4)                                               /*!< GPIO_T::SMTEN: SMTEN4 Position         */
#define GPIO_SMTEN_SMTEN4_Msk            (0x1ul << GPIO_SMTEN_SMTEN4_Pos)                  /*!< GPIO_T::SMTEN: SMTEN4 Mask             */

#define GPIO_SMTEN_SMTEN5_Pos            (5)                                               /*!< GPIO_T::SMTEN: SMTEN5 Position         */
#define GPIO_SMTEN_SMTEN5_Msk            (0x1ul << GPIO_SMTEN_SMTEN5_Pos)                  /*!< GPIO_T::SMTEN: SMTEN5 Mask             */

#define GPIO_SMTEN_SMTEN6_Pos            (6)                                               /*!< GPIO_T::SMTEN: SMTEN6 Position         */
#define GPIO_SMTEN_SMTEN6_Msk            (0x1ul << GPIO_SMTEN_SMTEN6_Pos)                  /*!< GPIO_T::SMTEN: SMTEN6 Mask             */

#define GPIO_SMTEN_SMTEN7_Pos            (7)                                               /*!< GPIO_T::SMTEN: SMTEN7 Position         */
#define GPIO_SMTEN_SMTEN7_Msk            (0x1ul << GPIO_SMTEN_SMTEN7_Pos)                  /*!< GPIO_T::SMTEN: SMTEN7 Mask             */

#define GPIO_SMTEN_SMTEN8_Pos            (8)                                               /*!< GPIO_T::SMTEN: SMTEN8 Position         */
#define GPIO_SMTEN_SMTEN8_Msk            (0x1ul << GPIO_SMTEN_SMTEN8_Pos)                  /*!< GPIO_T::SMTEN: SMTEN8 Mask             */

#define GPIO_SMTEN_SMTEN9_Pos            (9)                                               /*!< GPIO_T::SMTEN: SMTEN9 Position         */
#define GPIO_SMTEN_SMTEN9_Msk            (0x1ul << GPIO_SMTEN_SMTEN9_Pos)                  /*!< GPIO_T::SMTEN: SMTEN9 Mask             */

#define GPIO_SMTEN_SMTEN10_Pos           (10)                                              /*!< GPIO_T::SMTEN: SMTEN10 Position        */
#define GPIO_SMTEN_SMTEN10_Msk           (0x1ul << GPIO_SMTEN_SMTEN10_Pos)                 /*!< GPIO_T::SMTEN: SMTEN10 Mask            */

#define GPIO_SMTEN_SMTEN11_Pos           (11)                                              /*!< GPIO_T::SMTEN: SMTEN11 Position        */
#define GPIO_SMTEN_SMTEN11_Msk           (0x1ul << GPIO_SMTEN_SMTEN11_Pos)                 /*!< GPIO_T::SMTEN: SMTEN11 Mask            */

#define GPIO_SMTEN_SMTEN12_Pos           (12)                                              /*!< GPIO_T::SMTEN: SMTEN12 Position        */
#define GPIO_SMTEN_SMTEN12_Msk           (0x1ul << GPIO_SMTEN_SMTEN12_Pos)                 /*!< GPIO_T::SMTEN: SMTEN12 Mask            */

#define GPIO_SMTEN_SMTEN13_Pos           (13)                                              /*!< GPIO_T::SMTEN: SMTEN13 Position        */
#define GPIO_SMTEN_SMTEN13_Msk           (0x1ul << GPIO_SMTEN_SMTEN13_Pos)                 /*!< GPIO_T::SMTEN: SMTEN13 Mask            */

#define GPIO_SMTEN_SMTEN14_Pos           (14)                                              /*!< GPIO_T::SMTEN: SMTEN14 Position        */
#define GPIO_SMTEN_SMTEN14_Msk           (0x1ul << GPIO_SMTEN_SMTEN14_Pos)                 /*!< GPIO_T::SMTEN: SMTEN14 Mask            */

#define GPIO_SMTEN_SMTEN15_Pos           (15)                                              /*!< GPIO_T::SMTEN: SMTEN15 Position        */
#define GPIO_SMTEN_SMTEN15_Msk           (0x1ul << GPIO_SMTEN_SMTEN15_Pos)                 /*!< GPIO_T::SMTEN: SMTEN15 Mask            */

#define GPIO_SLEWCTL_HSREN0_Pos          (0)                                               /*!< GPIO_T::SLEWCTL: HSREN0 Position       */
#define GPIO_SLEWCTL_HSREN0_Msk          (0x1ul << GPIO_SLEWCTL_HSREN0_Pos)                /*!< GPIO_T::SLEWCTL: HSREN0 Mask           */

#define GPIO_SLEWCTL_HSREN1_Pos          (1)                                               /*!< GPIO_T::SLEWCTL: HSREN1 Position       */
#define GPIO_SLEWCTL_HSREN1_Msk          (0x1ul << GPIO_SLEWCTL_HSREN1_Pos)                /*!< GPIO_T::SLEWCTL: HSREN1 Mask           */

#define GPIO_SLEWCTL_HSREN2_Pos          (2)                                               /*!< GPIO_T::SLEWCTL: HSREN2 Position       */
#define GPIO_SLEWCTL_HSREN2_Msk          (0x1ul << GPIO_SLEWCTL_HSREN2_Pos)                /*!< GPIO_T::SLEWCTL: HSREN2 Mask           */

#define GPIO_SLEWCTL_HSREN3_Pos          (3)                                               /*!< GPIO_T::SLEWCTL: HSREN3 Position       */
#define GPIO_SLEWCTL_HSREN3_Msk          (0x1ul << GPIO_SLEWCTL_HSREN3_Pos)                /*!< GPIO_T::SLEWCTL: HSREN3 Mask           */

#define GPIO_SLEWCTL_HSREN4_Pos          (4)                                               /*!< GPIO_T::SLEWCTL: HSREN4 Position       */
#define GPIO_SLEWCTL_HSREN4_Msk          (0x1ul << GPIO_SLEWCTL_HSREN4_Pos)                /*!< GPIO_T::SLEWCTL: HSREN4 Mask           */

#define GPIO_SLEWCTL_HSREN5_Pos          (5)                                               /*!< GPIO_T::SLEWCTL: HSREN5 Position       */
#define GPIO_SLEWCTL_HSREN5_Msk          (0x1ul << GPIO_SLEWCTL_HSREN5_Pos)                /*!< GPIO_T::SLEWCTL: HSREN5 Mask           */

#define GPIO_SLEWCTL_HSREN6_Pos          (6)                                               /*!< GPIO_T::SLEWCTL: HSREN6 Position       */
#define GPIO_SLEWCTL_HSREN6_Msk          (0x1ul << GPIO_SLEWCTL_HSREN6_Pos)                /*!< GPIO_T::SLEWCTL: HSREN6 Mask           */

#define GPIO_SLEWCTL_HSREN7_Pos          (7)                                               /*!< GPIO_T::SLEWCTL: HSREN7 Position       */
#define GPIO_SLEWCTL_HSREN7_Msk          (0x1ul << GPIO_SLEWCTL_HSREN7_Pos)                /*!< GPIO_T::SLEWCTL: HSREN7 Mask           */

#define GPIO_SLEWCTL_HSREN8_Pos          (8)                                               /*!< GPIO_T::SLEWCTL: HSREN8 Position       */
#define GPIO_SLEWCTL_HSREN8_Msk          (0x1ul << GPIO_SLEWCTL_HSREN8_Pos)                /*!< GPIO_T::SLEWCTL: HSREN8 Mask           */

#define GPIO_SLEWCTL_HSREN9_Pos          (9)                                               /*!< GPIO_T::SLEWCTL: HSREN9 Position       */
#define GPIO_SLEWCTL_HSREN9_Msk          (0x1ul << GPIO_SLEWCTL_HSREN9_Pos)                /*!< GPIO_T::SLEWCTL: HSREN9 Mask           */

#define GPIO_SLEWCTL_HSREN10_Pos         (10)                                              /*!< GPIO_T::SLEWCTL: HSREN10 Position      */
#define GPIO_SLEWCTL_HSREN10_Msk         (0x1ul << GPIO_SLEWCTL_HSREN10_Pos)               /*!< GPIO_T::SLEWCTL: HSREN10 Mask          */

#define GPIO_SLEWCTL_HSREN11_Pos         (11)                                              /*!< GPIO_T::SLEWCTL: HSREN11 Position      */
#define GPIO_SLEWCTL_HSREN11_Msk         (0x1ul << GPIO_SLEWCTL_HSREN11_Pos)               /*!< GPIO_T::SLEWCTL: HSREN11 Mask          */

#define GPIO_SLEWCTL_HSREN12_Pos         (12)                                              /*!< GPIO_T::SLEWCTL: HSREN12 Position      */
#define GPIO_SLEWCTL_HSREN12_Msk         (0x1ul << GPIO_SLEWCTL_HSREN12_Pos)               /*!< GPIO_T::SLEWCTL: HSREN12 Mask          */

#define GPIO_SLEWCTL_HSREN13_Pos         (13)                                              /*!< GPIO_T::SLEWCTL: HSREN13 Position      */
#define GPIO_SLEWCTL_HSREN13_Msk         (0x1ul << GPIO_SLEWCTL_HSREN13_Pos)               /*!< GPIO_T::SLEWCTL: HSREN13 Mask          */

#define GPIO_SLEWCTL_HSREN14_Pos         (14)                                              /*!< GPIO_T::SLEWCTL: HSREN14 Position      */
#define GPIO_SLEWCTL_HSREN14_Msk         (0x1ul << GPIO_SLEWCTL_HSREN14_Pos)               /*!< GPIO_T::SLEWCTL: HSREN14 Mask          */

#define GPIO_SLEWCTL_HSREN15_Pos         (15)                                              /*!< GPIO_T::SLEWCTL: HSREN15 Position      */
#define GPIO_SLEWCTL_HSREN15_Msk         (0x1ul << GPIO_SLEWCTL_HSREN15_Pos)               /*!< GPIO_T::SLEWCTL: HSREN15 Mask          */

#define GPIO_DRVCTL_HDRVEN0_Pos          (0)                                               /*!< GPIO_T::DRVCTL: HDRVEN0 Position       */
#define GPIO_DRVCTL_HDRVEN0_Msk          (0x1ul << GPIO_DRVCTL_HDRVEN0_Pos)                /*!< GPIO_T::DRVCTL: HDRVEN0 Mask           */

#define GPIO_DRVCTL_HDRVEN1_Pos          (1)                                               /*!< GPIO_T::DRVCTL: HDRVEN1 Position       */
#define GPIO_DRVCTL_HDRVEN1_Msk          (0x1ul << GPIO_DRVCTL_HDRVEN1_Pos)                /*!< GPIO_T::DRVCTL: HDRVEN1 Mask           */

#define GPIO_DRVCTL_HDRVEN2_Pos          (2)                                               /*!< GPIO_T::DRVCTL: HDRVEN2 Position       */
#define GPIO_DRVCTL_HDRVEN2_Msk          (0x1ul << GPIO_DRVCTL_HDRVEN2_Pos)                /*!< GPIO_T::DRVCTL: HDRVEN2 Mask           */

#define GPIO_DRVCTL_HDRVEN3_Pos          (2)                                               /*!< GPIO_T::DRVCTL: HDRVEN3 Position       */
#define GPIO_DRVCTL_HDRVEN3_Msk          (0x1ul << GPIO_DRVCTL_HDRVEN3_Pos)                /*!< GPIO_T::DRVCTL: HDRVEN3 Mask           */

#define GPIO_DRVCTL_HDRVEN4_Pos          (4)                                               /*!< GPIO_T::DRVCTL: HDRVEN4 Position       */
#define GPIO_DRVCTL_HDRVEN4_Msk          (0x1ul << GPIO_DRVCTL_HDRVEN4_Pos)                /*!< GPIO_T::DRVCTL: HDRVEN4 Mask           */

#define GPIO_DRVCTL_HDRVEN5_Pos          (5)                                               /*!< GPIO_T::DRVCTL: HDRVEN5 Position       */
#define GPIO_DRVCTL_HDRVEN5_Msk          (0x1ul << GPIO_DRVCTL_HDRVEN5_Pos)                /*!< GPIO_T::DRVCTL: HDRVEN5 Mask           */

#define GPIO_DRVCTL_HDRVEN6_Pos          (6)                                               /*!< GPIO_T::DRVCTL: HDRVEN6 Position       */
#define GPIO_DRVCTL_HDRVEN6_Msk          (0x1ul << GPIO_DRVCTL_HDRVEN6_Pos)                /*!< GPIO_T::DRVCTL: HDRVEN6 Mask           */

#define GPIO_DRVCTL_HDRVEN7_Pos          (7)                                               /*!< GPIO_T::DRVCTL: HDRVEN7 Position       */
#define GPIO_DRVCTL_HDRVEN7_Msk          (0x1ul << GPIO_DRVCTL_HDRVEN7_Pos)                /*!< GPIO_T::DRVCTL: HDRVEN7 Mask           */

#define GPIO_DRVCTL_HDRVEN8_Pos          (8)                                               /*!< GPIO_T::DRVCTL: HDRVEN8 Position       */
#define GPIO_DRVCTL_HDRVEN8_Msk          (0x1ul << GPIO_DRVCTL_HDRVEN8_Pos)                /*!< GPIO_T::DRVCTL: HDRVEN8 Mask           */

#define GPIO_DRVCTL_HDRVEN9_Pos          (9)                                               /*!< GPIO_T::DRVCTL: HDRVEN9 Position       */
#define GPIO_DRVCTL_HDRVEN9_Msk          (0x1ul << GPIO_DRVCTL_HDRVEN9_Pos)                /*!< GPIO_T::DRVCTL: HDRVEN9 Mask           */

#define GPIO_DRVCTL_HDRVEN10_Pos         (10)                                              /*!< GPIO_T::DRVCTL: HDRVEN10 Position      */
#define GPIO_DRVCTL_HDRVEN10_Msk         (0x1ul << GPIO_DRVCTL_HDRVEN10_Pos)               /*!< GPIO_T::DRVCTL: HDRVEN10 Mask          */

#define GPIO_DRVCTL_HDRVEN11_Pos         (11)                                              /*!< GPIO_T::DRVCTL: HDRVEN11 Position      */
#define GPIO_DRVCTL_HDRVEN11_Msk         (0x1ul << GPIO_DRVCTL_HDRVEN11_Pos)               /*!< GPIO_T::DRVCTL: HDRVEN11 Mask          */

#define GPIO_DRVCTL_HDRVEN12_Pos         (12)                                              /*!< GPIO_T::DRVCTL: HDRVEN12 Position      */
#define GPIO_DRVCTL_HDRVEN12_Msk         (0x1ul << GPIO_DRVCTL_HDRVEN12_Pos)               /*!< GPIO_T::DRVCTL: HDRVEN12 Mask          */

#define GPIO_DRVCTL_HDRVEN13_Pos         (13)                                              /*!< GPIO_T::DRVCTL: HDRVEN13 Position      */
#define GPIO_DRVCTL_HDRVEN13_Msk         (0x1ul << GPIO_DRVCTL_HDRVEN13_Pos)               /*!< GPIO_T::DRVCTL: HDRVEN13 Mask          */

#define GPIO_DRVCTL_HDRVEN14_Pos         (14)                                              /*!< GPIO_T::DRVCTL: HDRVEN14 Position      */
#define GPIO_DRVCTL_HDRVEN14_Msk         (0x1ul << GPIO_DRVCTL_HDRVEN14_Pos)               /*!< GPIO_T::DRVCTL: HDRVEN14 Mask          */

#define GPIO_DRVCTL_HDRVEN15_Pos         (15)                                              /*!< GPIO_T::DRVCTL: HDRVEN15 Position      */
#define GPIO_DRVCTL_HDRVEN15_Msk         (0x1ul << GPIO_DRVCTL_HDRVEN15_Pos)               /*!< GPIO_T::DRVCTL: HDRVEN15 Mask          */

#define GPIO_PUSEL_PUSEL0_Pos            (0)                                               /*!< GPIO_T::PUSEL: PUSEL0 Position         */
#define GPIO_PUSEL_PUSEL0_Msk            (0x1ul << GPIO_PUSEL_PUSEL0_Pos)                  /*!< GPIO_T::PUSEL: PUSEL0 Mask             */

#define GPIO_PUSEL_PUSEL1_Pos            (2)                                               /*!< GPIO_T::PUSEL: PUSEL1 Position         */
#define GPIO_PUSEL_PUSEL1_Msk            (0x1ul << GPIO_PUSEL_PUSEL1_Pos)                  /*!< GPIO_T::PUSEL: PUSEL1 Mask             */

#define GPIO_PUSEL_PUSEL2_Pos            (4)                                               /*!< GPIO_T::PUSEL: PUSEL2 Position         */
#define GPIO_PUSEL_PUSEL2_Msk            (0x1ul << GPIO_PUSEL_PUSEL2_Pos)                  /*!< GPIO_T::PUSEL: PUSEL2 Mask             */

#define GPIO_PUSEL_PUSEL3_Pos            (6)                                               /*!< GPIO_T::PUSEL: PUSEL3 Position         */
#define GPIO_PUSEL_PUSEL3_Msk            (0x1ul << GPIO_PUSEL_PUSEL3_Pos)                  /*!< GPIO_T::PUSEL: PUSEL3 Mask             */

#define GPIO_PUSEL_PUSEL4_Pos            (8)                                               /*!< GPIO_T::PUSEL: PUSEL4 Position         */
#define GPIO_PUSEL_PUSEL4_Msk            (0x1ul << GPIO_PUSEL_PUSEL4_Pos)                  /*!< GPIO_T::PUSEL: PUSEL4 Mask             */

#define GPIO_PUSEL_PUSEL5_Pos            (10)                                              /*!< GPIO_T::PUSEL: PUSEL5 Position         */
#define GPIO_PUSEL_PUSEL5_Msk            (0x1ul << GPIO_PUSEL_PUSEL5_Pos)                  /*!< GPIO_T::PUSEL: PUSEL5 Mask             */

#define GPIO_PUSEL_PUSEL6_Pos            (12)                                              /*!< GPIO_T::PUSEL: PUSEL6 Position         */
#define GPIO_PUSEL_PUSEL6_Msk            (0x1ul << GPIO_PUSEL_PUSEL6_Pos)                  /*!< GPIO_T::PUSEL: PUSEL6 Mask             */

#define GPIO_PUSEL_PUSEL7_Pos            (14)                                              /*!< GPIO_T::PUSEL: PUSEL7 Position         */
#define GPIO_PUSEL_PUSEL7_Msk            (0x1ul << GPIO_PUSEL_PUSEL7_Pos)                  /*!< GPIO_T::PUSEL: PUSEL7 Mask             */

#define GPIO_PUSEL_PUSEL8_Pos            (16)                                              /*!< GPIO_T::PUSEL: PUSEL8 Position         */
#define GPIO_PUSEL_PUSEL8_Msk            (0x1ul << GPIO_PUSEL_PUSEL8_Pos)                  /*!< GPIO_T::PUSEL: PUSEL8 Mask             */

#define GPIO_PUSEL_PUSEL9_Pos            (18)                                              /*!< GPIO_T::PUSEL: PUSEL9 Position         */
#define GPIO_PUSEL_PUSEL9_Msk            (0x1ul << GPIO_PUSEL_PUSEL9_Pos)                  /*!< GPIO_T::PUSEL: PUSEL9 Mask             */

#define GPIO_PUSEL_PUSEL10_Pos           (20)                                              /*!< GPIO_T::PUSEL: PUSEL10 Position        */
#define GPIO_PUSEL_PUSEL10_Msk           (0x1ul << GPIO_PUSEL_PUSEL10_Pos)                 /*!< GPIO_T::PUSEL: PUSEL10 Mask            */

#define GPIO_PUSEL_PUSEL11_Pos           (22)                                              /*!< GPIO_T::PUSEL: PUSEL11 Position        */
#define GPIO_PUSEL_PUSEL11_Msk           (0x1ul << GPIO_PUSEL_PUSEL11_Pos)                 /*!< GPIO_T::PUSEL: PUSEL11 Mask            */

#define GPIO_PUSEL_PUSEL12_Pos           (24)                                              /*!< GPIO_T::PUSEL: PUSEL12 Position        */
#define GPIO_PUSEL_PUSEL12_Msk           (0x1ul << GPIO_PUSEL_PUSEL12_Pos)                 /*!< GPIO_T::PUSEL: PUSEL12 Mask            */

#define GPIO_PUSEL_PUSEL13_Pos           (26)                                              /*!< GPIO_T::PUSEL: PUSEL13 Position        */
#define GPIO_PUSEL_PUSEL13_Msk           (0x1ul << GPIO_PUSEL_PUSEL13_Pos)                 /*!< GPIO_T::PUSEL: PUSEL13 Mask            */

#define GPIO_PUSEL_PUSEL14_Pos           (28)                                              /*!< GPIO_T::PUSEL: PUSEL14 Position        */
#define GPIO_PUSEL_PUSEL14_Msk           (0x1ul << GPIO_PUSEL_PUSEL14_Pos)                 /*!< GPIO_T::PUSEL: PUSEL14 Mask            */

#define GPIO_PUSEL_PUSEL15_Pos           (30)                                              /*!< GPIO_T::PUSEL: PUSEL15 Position        */
#define GPIO_PUSEL_PUSEL15_Msk           (0x1ul << GPIO_PUSEL_PUSEL15_Pos)                 /*!< GPIO_T::PUSEL: PUSEL15 Mask            */

#define GPIO_DBCTL_DBCLKSEL_Pos          (0)                                               /*!< GPIO_DBCTL_T::DBCTL: DBCLKSEL Position */
#define GPIO_DBCTL_DBCLKSEL_Msk          (0xful << GPIO_DBCTL_DBCLKSEL_Pos)                /*!< GPIO_DBCTL_T::DBCTL: DBCLKSEL Mask     */

#define GPIO_DBCTL_DBCLKSRC_Pos          (4)                                               /*!< GPIO_DBCTL_T::DBCTL: DBCLKSRC Position */
#define GPIO_DBCTL_DBCLKSRC_Msk          (0x1ul << GPIO_DBCTL_DBCLKSRC_Pos)                /*!< GPIO_DBCTL_T::DBCTL: DBCLKSRC Mask     */

#define GPIO_DBCTL_ICLKON_Pos            (5)                                               /*!< GPIO_DBCTL_T::DBCTL: ICLKON Position   */
#define GPIO_DBCTL_ICLKON_Msk            (0x1ul << GPIO_DBCTL_ICLKON_Pos)                  /*!< GPIO_DBCTL_T::DBCTL: ICLKON Mask       */


/**@}*/ /* GPIO_CONST */
/**@}*/ /* end of GPIO register group */

/*---------------------- Hardware Divider --------------------------------*/
/**
    @addtogroup HDIV Hardware Divider(HDIV)
    Memory Mapped Structure for HDIV Controller
    @{
*/

typedef struct
{


    /**
     * @var HDIV_T::DIVIDEND
     * Offset: 0x00  Dividend Source Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |DIVIDEND  |Dividend Source
     * |        |          |This register is given the dividend of divider before calculation starting.
     * @var HDIV_T::DIVISOR
     * Offset: 0x04  Divisor Source Resister
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |DIVISOR   |Divisor Source
     * |        |          |This register is given the divisor of divider before calculation starts.
     * |        |          |Note: When this register is written, hardware divider will start calculate.
     * @var HDIV_T::DIVQUO
     * Offset: 0x08  Quotient Result Resister
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |QUOTIENT  |Quotient Result
     * |        |          |This register holds the quotient result of divider after calculation complete.
     * @var HDIV_T::DIVREM
     * Offset: 0x0C  Remainder Result Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |REMAINDER |Remainder Result
     * |        |          |The remainder of hardware divider is 16-bit sign integer (REMAINDER[15:0]), which holds the remainder result of divider after calculation complete.
     * |        |          |The remainder of hardware divider with sign extension (REMAINDER[31:16]) to 32-bit integer.
     * |        |          |This register holds the remainder result of divider after calculation complete.
     * @var HDIV_T::DIVSTS
     * Offset: 0x10  Divider Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |FINISH    |Division Finish Flag
     * |        |          |0 = Under Calculation.
     * |        |          |1 = Calculation finished.
     * |        |          |The flag will become low when the divider is in calculation.
     * |        |          |The flag will go back to high once the calculation finished.
     * |[1]     |DIV0      |Divisor Zero Warning
     * |        |          |0 = The divisor is not 0.
     * |        |          |1 = The divisor is 0.
     * |        |          |Note: The DIV0 flag is used to indicate divide-by-zero situation and up2025-07-16d whenever DIVISOR is written
     * |        |          |This register is read only.
     */
    __IO uint32_t DIVIDEND;              /*!< [0x0000] Dividend Source Register                                         */
    __IO uint32_t DIVISOR;               /*!< [0x0004] Divisor Source Resister                                          */
    __IO uint32_t DIVQUO;                /*!< [0x0008] Quotient Result Resister                                         */
    __IO uint32_t DIVREM;                /*!< [0x000c] Remainder Result Register                                        */
    __I  uint32_t DIVSTS;                /*!< [0x0010] Divider Status Register                                          */

} HDIV_T;

/**
    @addtogroup HDIV_CONST HDIV Bit Field Definition
    Constant Definitions for HDIV Controller
    @{
*/

#define HDIV_DIVIDEND_DIVIDEND_Pos       (0)                                               /*!< HDIV_T::DIVIDEND: DIVIDEND Position    */
#define HDIV_DIVIDEND_DIVIDEND_Msk       (0xfffffffful << HDIV_DIVIDEND_DIVIDEND_Pos)      /*!< HDIV_T::DIVIDEND: DIVIDEND Mask        */

#define HDIV_DIVISOR_DIVISOR_Pos         (0)                                               /*!< HDIV_T::DIVISOR: DIVISOR Position      */
#define HDIV_DIVISOR_DIVISOR_Msk         (0xfffful << HDIV_DIVISOR_DIVISOR_Pos)            /*!< HDIV_T::DIVISOR: DIVISOR Mask          */

#define HDIV_DIVQUO_QUOTIENT_Pos         (0)                                               /*!< HDIV_T::DIVQUO: QUOTIENT Position      */
#define HDIV_DIVQUO_QUOTIENT_Msk         (0xfffffffful << HDIV_DIVQUO_QUOTIENT_Pos)        /*!< HDIV_T::DIVQUO: QUOTIENT Mask          */

#define HDIV_DIVREM_REMAINDER_Pos        (0)                                               /*!< HDIV_T::DIVREM: REMAINDER Position     */
#define HDIV_DIVREM_REMAINDER_Msk        (0xfffffffful << HDIV_DIVREM_REMAINDER_Pos)       /*!< HDIV_T::DIVREM: REMAINDER Mask         */

#define HDIV_DIVSTS_FINISH_Pos           (0)                                               /*!< HDIV_T::DIVSTS: FINISH Position        */
#define HDIV_DIVSTS_FINISH_Msk           (0x1ul << HDIV_DIVSTS_FINISH_Pos)                 /*!< HDIV_T::DIVSTS: FINISH Mask            */

#define HDIV_DIVSTS_DIV0_Pos             (1)                                               /*!< HDIV_T::DIVSTS: DIV0 Position          */
#define HDIV_DIVSTS_DIV0_Msk             (0x1ul << HDIV_DIVSTS_DIV0_Pos)                   /*!< HDIV_T::DIVSTS: DIV0 Mask              */

/**@}*/ /* HDIV_CONST */
/**@}*/ /* end of HDIV register group */


/*---------------------- Inter-IC Bus Controller -------------------------*/
/**
    @addtogroup I2C Inter-IC Bus Controller(I2C)
    Memory Mapped Structure for I2C Controller
    @{
*/

typedef struct
{


    /**
     * @var I2C_T::CTL
     * Offset: 0x00  I2C Control Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[2]     |AA        |Assert Acknowledge Control
     * |        |          |When AA=1 prior to address or data is received, an acknowledged (low level to SDA) will be returned during the acknowledge clock pulse on the SCL line when 1.) A slave is acknowledging the address sent from master, 2.) The receiver devices are acknowledging the data sent by transmitter,
     * |        |          |When AA=0 prior to address or data received, a Not acknowledged (high level to SDA) will be returned during the acknowledge clock pulse on the SCL line.
     * |[3]     |SI        |I2C Interrupt Flag
     * |        |          |When a new I2C state is present in the I2C_STATUS register, the SI flag is set by hardware.
     * |        |          |If bit INTEN (I2C_CTL [7]) is set, the I2C interrupt is requested.
     * |        |          |SI must be cleared by software.Clear SI by writing 1 to this bit.
     * |        |          |For ACKMEN is set in slave read mode, the SI flag is set in 8th clock period for user to confirm the acknowledge bit and 9th clock period for user to read the data in the data buffer.
     * |[4]     |STO       |I2C STOP Control
     * |        |          |In Master mode, setting STO to transmit a STOP condition to bus then I2C controller will check the bus condition if a STOP condition is detected.
     * |        |          |This bit will be cleared by hardware automatically.
     * |[5]     |STA       |I2C START Control
     * |        |          |Setting STA to logic 1 to enter Master mode, the I2C hardware sends a START or repeat START condition to bus when the bus is free.
     * |[6]     |I2CEN     |I2C Controller Enable Bit
     * |        |          |Set to enable I2C serial function controller.When I2CEN=1 the I2C serial function enable.
     * |        |          |The multi-function pin function must set to SDA, and SCL of I2C function first.
     * |        |          |0 = I2C serial function Disabled.
     * |        |          |1 = I2C serial function Enabled.
     * |[7]     |INTEN     |Enable Interrupt
     * |        |          |0 = I2C interrupt Disabled.
     * |        |          |1 = I2C interrupt Enabled.
     * @var I2C_T::ADDR0
     * Offset: 0x04  I2C Slave Address Register0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |GC        |General Call Function
     * |        |          |0 = General Call Function Disabled.
     * |        |          |1 = General Call Function Enabled.
     * |[7:1]   |ADDR      |I2C Address
     * |        |          |The content of this register is irrelevant when I2C is in Master mode.
     * |        |          |In the slave mode, the seven most significant bits must be loaded with the chip's own address.
     * |        |          |The I2C hardware will react if either of the address is matched.
     * @var I2C_T::DAT
     * Offset: 0x08  I2C Data Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |DAT       |I2C Data
     * |        |          |Bit [7:0] is located with the 8-bit transferred/received data of I2C serial port.
     * @var I2C_T::STATUS
     * Offset: 0x0C  I2C Status Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |STATUS    |I2C Status
     * |        |          |There are 28 possible status codes. When the content of I2C_STATUS is F8H, no serial interrupt is requested.
     * |        |          |Others I2C_STATUS values correspond to defined I2C states.
     * |        |          |When each of these states is entered, a status interrupt is requested (SI = 1).
     * |        |          |A valid status code is present in I2C_STATUS one cycle after SI is set by hardware and is still present one cycle after SI has been reset by software.
     * |        |          |In addition, states 00H stands for a Bus Error. A Bus Error occurs when a START or STOP condition is present at an illegal position in the formation frame.
     * |        |          |Example of illegal position are during the serial transfer of an address byte, a data byte or an acknowledge bit.
     * @var I2C_T::CLKDIV
     * Offset: 0x10  I2C Clock Divided Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |DIVIDER   |I2C Clock Divided
     * |        |          |Indicates the I2C clock rate: Data Baud Rate of I2C = (system clock) / (4x (I2C_CLKDIV+1)).
     * |        |          |Note: The minimum value of I2C_CLKDIV is 4.
     * @var I2C_T::TOCTL
     * Offset: 0x14  I2C Time-out Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |TOIF      |Time-out Flag
     * |        |          |This bit is set by hardware when I2C time-out happened and it can interrupt CPU if I2C interrupt enable bit (INTEN) is set to 1.
     * |        |          |Note: Software can write 1 to clear this bit.
     * |[1]     |TOCDIV4   |Time-out Counter Input Clock Divided by 4
     * |        |          |When Enabled, The time-out period is extend 4 times.
     * |        |          |0 = Time-out period is extend 4 times Disabled.
     * |        |          |1 = Time-out period is extend 4 times Enabled.
     * |[2]     |TOCEN     |Time-out Counter Enable Bit
     * |        |          |When Enabled, the 14-bit time-out counter will start counting when SI is clear.
     * |        |          |Setting flag SI to '1' will reset counter and re-start up counting after SI is cleared.
     * |        |          |0 = Time-out counter Disabled.
     * |        |          |1 = Time-out counter Enabled.
     * @var I2C_T::ADDR1
     * Offset: 0x18  I2C Slave Address Register1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |GC        |General Call Function
     * |        |          |0 = General Call Function Disabled.
     * |        |          |1 = General Call Function Enabled.
     * |[7:1]   |ADDR      |I2C Address
     * |        |          |The content of this register is irrelevant when I2C is in Master mode.
     * |        |          |In the slave mode, the seven most significant bits must be loaded with the chip's own address.
     * |        |          |The I2C hardware will react if either of the address is matched.
     * @var I2C_T::ADDR2
     * Offset: 0x1C  I2C Slave Address Register2
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |GC        |General Call Function
     * |        |          |0 = General Call Function Disabled.
     * |        |          |1 = General Call Function Enabled.
     * |[7:1]   |ADDR      |I2C Address
     * |        |          |The content of this register is irrelevant when I2C is in Master mode.
     * |        |          |In the slave mode, the seven most significant bits must be loaded with the chip's own address.
     * |        |          |The I2C hardware will react if either of the address is matched.
     * @var I2C_T::ADDR3
     * Offset: 0x20  I2C Slave Address Register3
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |GC        |General Call Function
     * |        |          |0 = General Call Function Disabled.
     * |        |          |1 = General Call Function Enabled.
     * |[7:1]   |ADDR      |I2C Address
     * |        |          |The content of this register is irrelevant when I2C is in Master mode.
     * |        |          |In the slave mode, the seven most significant bits must be loaded with the chip's own address.
     * |        |          |The I2C hardware will react if either of the address is matched.
     * @var I2C_T::ADDRMSK0
     * Offset: 0x24  I2C Slave Address Mask Register0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:1]   |ADDRMSK   |I2C Address Mask
     * |        |          |0 = Mask Disabled (the received corresponding register bit should be exact the same as address register.).
     * |        |          |1 = Mask Enabled (the received corresponding address bit is don't care.).
     * |        |          |I2C bus controllers support multiple address recognition with four address mask register.
     * |        |          |When the bit in the address mask register is set to one, it means the received corresponding address bit is don't-care.
     * |        |          |If the bit is set to zero, that means the received corresponding register bit should be exact the same as address register.
     * @var I2C_T::ADDRMSK1
     * Offset: 0x28  I2C Slave Address Mask Register1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:1]   |ADDRMSK   |I2C Address Mask
     * |        |          |0 = Mask Disabled (the received corresponding register bit should be exact the same as address register.).
     * |        |          |1 = Mask Enabled (the received corresponding address bit is don't care.).
     * |        |          |I2C bus controllers support multiple address recognition with four address mask register.
     * |        |          |When the bit in the address mask register is set to one, it means the received corresponding address bit is don't-care.
     * |        |          |If the bit is set to zero, that means the received corresponding register bit should be exact the same as address register.
     * @var I2C_T::ADDRMSK2
     * Offset: 0x2C  I2C Slave Address Mask Register2
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:1]   |ADDRMSK   |I2C Address Mask
     * |        |          |0 = Mask Disabled (the received corresponding register bit should be exact the same as address register.).
     * |        |          |1 = Mask Enabled (the received corresponding address bit is don't care.).
     * |        |          |I2C bus controllers support multiple address recognition with four address mask register.
     * |        |          |When the bit in the address mask register is set to one, it means the received corresponding address bit is don't-care.
     * |        |          |If the bit is set to zero, that means the received corresponding register bit should be exact the same as address register.
     * @var I2C_T::ADDRMSK3
     * Offset: 0x30  I2C Slave Address Mask Register3
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:1]   |ADDRMSK   |I2C Address Mask
     * |        |          |0 = Mask Disabled (the received corresponding register bit should be exact the same as address register.).
     * |        |          |1 = Mask Enabled (the received corresponding address bit is don't care.).
     * |        |          |I2C bus controllers support multiple address recognition with four address mask register.
     * |        |          |When the bit in the address mask register is set to one, it means the received corresponding address bit is don't-care.
     * |        |          |If the bit is set to zero, that means the received corresponding register bit should be exact the same as address register.
     * @var I2C_T::WKCTL
     * Offset: 0x3C  I2C Wake-up Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |WKEN      |I2C Wake-up Enable Bit
     * |        |          |0 = I2C wake-up function Disabled.
     * |        |          |1= I2C wake-up function Enabled.
     * |[7]     |NHDBUSEN  |I2C No Hold BUS Enable Bit
     * |        |          |0 = I2C don't hold bus after wake-up disable.
     * |        |          |1 = I2C don't hold bus after wake-up enable.
     * |        |          |Note: I2C controller could response when WKIF event is not clear, it may cause error data transmitted or received.
     * |        |          |If data transmitted or received when WKIF event is not clear, user must reset I2C controller and execute the original operation again.
     * @var I2C_T::WKSTS
     * Offset: 0x40  I2C Wake-up Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |WKIF      |I2C Wake-up Flag
     * |        |          |When chip is woken up from Power-down mode by I2C, this bit is set to 1.
     * |        |          |Software can write 1 to clear this bit.
     * |[1]     |WKAKDONE  |Wakeup Address Frame Acknowledge Bit Done
     * |        |          |0 = The ACK bit cycle of address match frame isn't done.
     * |        |          |1 = The ACK bit cycle of address match frame is done in power-down.
     * |        |          |Note: This bit can't release WKIF. Software can write 1 to clear this bit.
     * |[2]     |WRSTSWK   |Read/Write Status Bit in Address Wakeup Frame
     * |        |          |0 = Write command be record on the address match wakeup frame.
     * |        |          |1 = Read command be record on the address match wakeup frame.
     * |        |          |Note: This bit will be cleared when software can write 1 to WKAKDONE bit.
     * @var I2C_T::CTL1
     * Offset: 0x44  I2C Control Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |TXPDMAEN  |PDMA Transmit Channel Available
     * |        |          |0 = Transmit PDMA function disable.
     * |        |          |1 = Transmit PDMA function enable.
     * |[1]     |RXPDMAEN  |PDMA Receive Channel Available
     * |        |          |0 = Receive PDMA function disable.
     * |        |          |1 = Receive PDMA function enable.
     * |[2]     |PDMARST   |PDMA Reset
     * |        |          |0 = No effect.
     * |        |          |1 = Reset the PDMA control logic. This bit will be cleared to 0 automatically.
     * |[3]     |OVRIEN    |I2C over Run Interrupt Control Bit
     * |        |          |Setting OVRIEN to logic 1 will send a interrupt to system when the TWOBUFEN bit is enabled and there is over run event in received buffer.
     * |[4]     |UDRIEN    |I2C Under Run Interrupt Control Bit
     * |        |          |Setting UDRIEN to logic 1 will send a interrupt to system when the TWOBUFEN bit is enabled and there is under run event happened in transmitted buffer.
     * |[5]     |TWOBUFEN  |Two-level Buffer Enable Bit
     * |        |          |0 = Two-level buffer Disabled.
     * |        |          |1 = Two-level buffer Enabled.
     * |        |          |Set to enable the two-level buffer for I2C transmitted or received buffer.
     * |        |          |It is used to improve the performance of the I2C bus.
     * |        |          |If this bit is set = 1, the control bit of STA for repeat start or STO bit should be set after the current SI is clear.
     * |        |          |For example: if there are 4 data shall be transmitted and then stop it.
     * |        |          |The STO bit shall be set after the 3rd data's SI event being clear.
     * |        |          |In this time, the 4th data can be transmitted and the I2C stop after the 4th data transmission done.
     * |[6]     |TWOBUFRST |Two-level Buffer Reset
     * |        |          |0 = No effect.
     * |        |          |1 = Reset the related counters, two-level buffer state machine, and the content of data buffer.
     * |[7]     |NSTRETCH  |No Stretch on the I2C Bus
     * |        |          |0 = The I2C SCL bus is stretched by hardware if the SI is not cleared in master mode.
     * |        |          |1 = The I2C SCL bus is not stretched by hardware if the SI is not cleared in master mode.
     * |[8]     |PDMASTR   |PDMA Stretch Bit
     * |        |          |0 = I2C send STOP automatically after PDMA transfer done. (only master TX)
     * |        |          |1 = I2C SCL bus is stretched by hardware after PDMA transfer done if the SI is not cleared. (only master TX)
     * @var I2C_T::STATUS1
     * Offset: 0x48  I2C Status Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4]     |FULL      |Two-level Buffer Full
     * |        |          |This bit indicates two-level buffer TX or RX full or not when the TWOBUFEN = 1.
     * |        |          |This bit is set when POINTER is equal to 2.
     * |[5]     |EMPTY     |Two-level Buffer Empty
     * |        |          |This bit indicates two-level buffer TX or RX empty or not when the TWOBUFEN = 1.
     * |        |          |This bit is set when POINTER is equal to 0.
     * |[6]     |OVR       |I2C over Run Status Bit
     * |        |          |This bit indicates the received two-level buffer TX or RX is over run when the TWOBUFEN = 1.
     * |[7]     |UDR       |I2C Under Run Status Bit
     * |        |          |This bit indicates the transmitted two-level buffer TX or RX is under run when the TWOBUFEN = 1.
     * |[8]     |ONBUSY    |on Bus Busy
     * |        |          |Indicates that a communication is in progress on the bus. It is set by hardware when a START condition is detected.
     * |        |          |It is cleared by hardware when a STOP condition is detected.
     * |        |          |0 = The bus is IDLE (both SCLK and SDA High).
     * |        |          |1 = The bus is busy.
     * @var I2C_T::TMCTL
     * Offset: 0x4C  I2C Timing Configure Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[5:0]   |STCTL     |Setup Time Configure Control Register
     * |        |          |This field is used to generate a delay timing between SDA falling edge and SCL rising edge in transmission mode.
     * |        |          |The delay setup time is numbers of peripheral clock = STCTL x PCLK.
     * |        |          |Note: Setup time setting should not make SCL output less than three PCLKs.
     * |[11:6]  |HTCTL     |Hold Time Configure Control Register
     * |        |          |This field is used to generate the delay timing between SCL falling edge and SDA rising edge in transmission mode.
     * |        |          |The delay hold time is numbers of peripheral clock = HTCTL x PCLK.
     */

    __IO uint32_t CTL;                   /*!< [0x0000] I2C Control Register                                             */
    __IO uint32_t ADDR0;                 /*!< [0x0004] I2C Slave Address Register 0                                     */
    __IO uint32_t DAT;                   /*!< [0x0008] I2C Data Register                                                */
    __I  uint32_t STATUS;                /*!< [0x000c] I2C Status Register 0                                            */
    __IO uint32_t CLKDIV;                /*!< [0x0010] I2C Clock Divided Register                                       */
    __IO uint32_t TOCTL;                 /*!< [0x0014] I2C Time-out Control Register                                    */
    __IO uint32_t ADDR1;                 /*!< [0x0018] I2C Slave Address Register1                                      */
    __IO uint32_t ADDR2;                 /*!< [0x001c] I2C Slave Address Register2                                      */
    __IO uint32_t ADDR3;                 /*!< [0x0020] I2C Slave Address Register3                                      */
    __IO uint32_t ADDRMSK0;              /*!< [0x0024] I2C Slave Address Mask Register0                                 */
    __IO uint32_t ADDRMSK1;              /*!< [0x0028] I2C Slave Address Mask Register1                                 */
    __IO uint32_t ADDRMSK2;              /*!< [0x002c] I2C Slave Address Mask Register2                                 */
    __IO uint32_t ADDRMSK3;              /*!< [0x0030] I2C Slave Address Mask Register3                                 */
    __I  uint32_t RESERVE0[2];
    __IO uint32_t WKCTL;                 /*!< [0x003c] I2C Wake-up Control Register                                     */
    __IO uint32_t WKSTS;                 /*!< [0x0040] I2C Wake-up Status Register                                      */
    __IO uint32_t CTL1;                  /*!< [0x0044] I2C Control Register 1                                           */
    __I  uint32_t STATUS1;               /*!< [0x0048] I2C Status Register 1                                            */
    __IO uint32_t TMCTL;                 /*!< [0x004c] I2C Timing Configure Control Register                            */
    __IO uint32_t BUSCTL;                /*!< [0x0050] I2C Bus Management Control Register                              */
    __IO uint32_t BUSTCTL;               /*!< [0x0054] I2C Bus Management Timer Control Register                        */
    __IO uint32_t BUSSTS;                /*!< [0x0058] I2C Bus Management Status Register                               */
    __IO uint32_t PKTSIZE;               /*!< [0x005c] I2C Packet Error Checking Byte Number Register                   */
    __I  uint32_t PKTCRC;                /*!< [0x0060] I2C Packet Error Checking Byte Value Register                    */
    __IO uint32_t BUSTOUT;               /*!< [0x0064] I2C Bus Management Timer Register                                */
    __IO uint32_t CLKTOUT;               /*!< [0x0068] I2C Bus Management Clock Low Timer Register                      */
} I2C_T;

/**
    @addtogroup I2C_CONST I2C Bit Field Definition
    Constant Definitions for I2C Controller
    @{
*/

#define I2C_CTL_AA_Pos                   (2)                                               /*!< I2C_T::CTL: AA Position                */
#define I2C_CTL_AA_Msk                   (0x1ul << I2C_CTL_AA_Pos)                         /*!< I2C_T::CTL: AA Mask                    */

#define I2C_CTL_SI_Pos                   (3)                                               /*!< I2C_T::CTL: SI Position                */
#define I2C_CTL_SI_Msk                   (0x1ul << I2C_CTL_SI_Pos)                         /*!< I2C_T::CTL: SI Mask                    */

#define I2C_CTL_STO_Pos                  (4)                                               /*!< I2C_T::CTL: STO Position               */
#define I2C_CTL_STO_Msk                  (0x1ul << I2C_CTL_STO_Pos)                        /*!< I2C_T::CTL: STO Mask                   */

#define I2C_CTL_STA_Pos                  (5)                                               /*!< I2C_T::CTL: STA Position               */
#define I2C_CTL_STA_Msk                  (0x1ul << I2C_CTL_STA_Pos)                        /*!< I2C_T::CTL: STA Mask                   */

#define I2C_CTL_I2CEN_Pos                (6)                                               /*!< I2C_T::CTL: I2CEN Position             */
#define I2C_CTL_I2CEN_Msk                (0x1ul << I2C_CTL_I2CEN_Pos)                      /*!< I2C_T::CTL: I2CEN Mask                 */

#define I2C_CTL_INTEN_Pos                (7)                                               /*!< I2C_T::CTL: INTEN Position             */
#define I2C_CTL_INTEN_Msk                (0x1ul << I2C_CTL_INTEN_Pos)                      /*!< I2C_T::CTL: INTEN Mask                 */

#define I2C_ADDR0_GC_Pos                 (0)                                               /*!< I2C_T::ADDR0: GC Position              */
#define I2C_ADDR0_GC_Msk                 (0x1ul << I2C_ADDR0_GC_Pos)                       /*!< I2C_T::ADDR0: GC Mask                  */

#define I2C_ADDR0_ADDR_Pos               (1)                                               /*!< I2C_T::ADDR0: ADDR Position            */
#define I2C_ADDR0_ADDR_Msk               (0x7ful << I2C_ADDR0_ADDR_Pos)                    /*!< I2C_T::ADDR0: ADDR Mask                */

#define I2C_DAT_DAT_Pos                  (0)                                               /*!< I2C_T::DAT: DAT Position               */
#define I2C_DAT_DAT_Msk                  (0xfful << I2C_DAT_DAT_Pos)                       /*!< I2C_T::DAT: DAT Mask                   */

#define I2C_STATUS_STATUS_Pos            (0)                                               /*!< I2C_T::STATUS: STATUS Position         */
#define I2C_STATUS_STATUS_Msk            (0xfful << I2C_STATUS_STATUS_Pos)                 /*!< I2C_T::STATUS: STATUS Mask             */

#define I2C_CLKDIV_DIVIDER_Pos           (0)                                               /*!< I2C_T::CLKDIV: DIVIDER Position        */
#define I2C_CLKDIV_DIVIDER_Msk           (0xfful << I2C_CLKDIV_DIVIDER_Pos)                /*!< I2C_T::CLKDIV: DIVIDER Mask            */

#define I2C_TOCTL_TOIF_Pos               (0)                                               /*!< I2C_T::TOCTL: TOIF Position            */
#define I2C_TOCTL_TOIF_Msk               (0x1ul << I2C_TOCTL_TOIF_Pos)                     /*!< I2C_T::TOCTL: TOIF Mask                */

#define I2C_TOCTL_TOCDIV4_Pos            (1)                                               /*!< I2C_T::TOCTL: TOCDIV4 Position         */
#define I2C_TOCTL_TOCDIV4_Msk            (0x1ul << I2C_TOCTL_TOCDIV4_Pos)                  /*!< I2C_T::TOCTL: TOCDIV4 Mask             */

#define I2C_TOCTL_TOCEN_Pos              (2)                                               /*!< I2C_T::TOCTL: TOCEN Position           */
#define I2C_TOCTL_TOCEN_Msk              (0x1ul << I2C_TOCTL_TOCEN_Pos)                    /*!< I2C_T::TOCTL: TOCEN Mask               */

#define I2C_ADDR1_GC_Pos                 (0)                                               /*!< I2C_T::ADDR1: GC Position              */
#define I2C_ADDR1_GC_Msk                 (0x1ul << I2C_ADDR1_GC_Pos)                       /*!< I2C_T::ADDR1: GC Mask                  */

#define I2C_ADDR1_ADDR_Pos               (1)                                               /*!< I2C_T::ADDR1: ADDR Position            */
#define I2C_ADDR1_ADDR_Msk               (0x7ful << I2C_ADDR1_ADDR_Pos)                    /*!< I2C_T::ADDR1: ADDR Mask                */

#define I2C_ADDR2_GC_Pos                 (0)                                               /*!< I2C_T::ADDR2: GC Position              */
#define I2C_ADDR2_GC_Msk                 (0x1ul << I2C_ADDR2_GC_Pos)                       /*!< I2C_T::ADDR2: GC Mask                  */

#define I2C_ADDR2_ADDR_Pos               (1)                                               /*!< I2C_T::ADDR2: ADDR Position            */
#define I2C_ADDR2_ADDR_Msk               (0x7ful << I2C_ADDR2_ADDR_Pos)                    /*!< I2C_T::ADDR2: ADDR Mask                */

#define I2C_ADDR3_GC_Pos                 (0)                                               /*!< I2C_T::ADDR3: GC Position              */
#define I2C_ADDR3_GC_Msk                 (0x1ul << I2C_ADDR3_GC_Pos)                       /*!< I2C_T::ADDR3: GC Mask                  */

#define I2C_ADDR3_ADDR_Pos               (1)                                               /*!< I2C_T::ADDR3: ADDR Position            */
#define I2C_ADDR3_ADDR_Msk               (0x7ful << I2C_ADDR3_ADDR_Pos)                    /*!< I2C_T::ADDR3: ADDR Mask                */

#define I2C_ADDRMSK0_ADDRMSK_Pos         (1)                                               /*!< I2C_T::ADDRMSK0: ADDRMSK Position      */
#define I2C_ADDRMSK0_ADDRMSK_Msk         (0x7ful << I2C_ADDRMSK0_ADDRMSK_Pos)              /*!< I2C_T::ADDRMSK0: ADDRMSK Mask          */

#define I2C_ADDRMSK1_ADDRMSK_Pos         (1)                                               /*!< I2C_T::ADDRMSK1: ADDRMSK Position      */
#define I2C_ADDRMSK1_ADDRMSK_Msk         (0x7ful << I2C_ADDRMSK1_ADDRMSK_Pos)              /*!< I2C_T::ADDRMSK1: ADDRMSK Mask          */

#define I2C_ADDRMSK2_ADDRMSK_Pos         (1)                                               /*!< I2C_T::ADDRMSK2: ADDRMSK Position      */
#define I2C_ADDRMSK2_ADDRMSK_Msk         (0x7ful << I2C_ADDRMSK2_ADDRMSK_Pos)              /*!< I2C_T::ADDRMSK2: ADDRMSK Mask          */

#define I2C_ADDRMSK3_ADDRMSK_Pos         (1)                                               /*!< I2C_T::ADDRMSK3: ADDRMSK Position      */
#define I2C_ADDRMSK3_ADDRMSK_Msk         (0x7ful << I2C_ADDRMSK3_ADDRMSK_Pos)              /*!< I2C_T::ADDRMSK3: ADDRMSK Mask          */

#define I2C_WKCTL_WKEN_Pos               (0)                                               /*!< I2C_T::WKCTL: WKEN Position            */
#define I2C_WKCTL_WKEN_Msk               (0x1ul << I2C_WKCTL_WKEN_Pos)                     /*!< I2C_T::WKCTL: WKEN Mask                */

#define I2C_WKCTL_NHDBUSEN_Pos           (7)                                               /*!< I2C_T::WKCTL: NHDBUSEN Position        */
#define I2C_WKCTL_NHDBUSEN_Msk           (0x1ul << I2C_WKCTL_NHDBUSEN_Pos)                 /*!< I2C_T::WKCTL: NHDBUSEN Mask            */

#define I2C_WKSTS_WKIF_Pos               (0)                                               /*!< I2C_T::WKSTS: WKIF Position            */
#define I2C_WKSTS_WKIF_Msk               (0x1ul << I2C_WKSTS_WKIF_Pos)                     /*!< I2C_T::WKSTS: WKIF Mask                */

#define I2C_WKSTS_WKAKDONE_Pos           (1)                                               /*!< I2C_T::WKSTS: WKAKDONE Position        */
#define I2C_WKSTS_WKAKDONE_Msk           (0x1ul << I2C_WKSTS_WKAKDONE_Pos)                 /*!< I2C_T::WKSTS: WKAKDONE Mask            */

#define I2C_WKSTS_WRSTSWK_Pos            (2)                                               /*!< I2C_T::WKSTS: WRSTSWK Position         */
#define I2C_WKSTS_WRSTSWK_Msk            (0x1ul << I2C_WKSTS_WRSTSWK_Pos)                  /*!< I2C_T::WKSTS: WRSTSWK Mask             */

#define I2C_CTL1_TXPDMAEN_Pos            (0)                                               /*!< I2C_T::CTL1: TXPDMAEN Position         */
#define I2C_CTL1_TXPDMAEN_Msk            (0x1ul << I2C_CTL1_TXPDMAEN_Pos)                  /*!< I2C_T::CTL1: TXPDMAEN Mask             */

#define I2C_CTL1_RXPDMAEN_Pos            (1)                                               /*!< I2C_T::CTL1: RXPDMAEN Position         */
#define I2C_CTL1_RXPDMAEN_Msk            (0x1ul << I2C_CTL1_RXPDMAEN_Pos)                  /*!< I2C_T::CTL1: RXPDMAEN Mask             */

#define I2C_CTL1_PDMARST_Pos             (2)                                               /*!< I2C_T::CTL1: PDMARST Position          */
#define I2C_CTL1_PDMARST_Msk             (0x1ul << I2C_CTL1_PDMARST_Pos)                   /*!< I2C_T::CTL1: PDMARST Mask              */

#define I2C_CTL1_OVRIEN_Pos              (3)                                               /*!< I2C_T::CTL1: OVRIEN Position           */
#define I2C_CTL1_OVRIEN_Msk              (0x1ul << I2C_CTL1_OVRIEN_Pos)                    /*!< I2C_T::CTL1: OVRIEN Mask               */

#define I2C_CTL1_UDRIEN_Pos              (4)                                               /*!< I2C_T::CTL1: UDRIEN Position           */
#define I2C_CTL1_UDRIEN_Msk              (0x1ul << I2C_CTL1_UDRIEN_Pos)                    /*!< I2C_T::CTL1: UDRIEN Mask               */

#define I2C_CTL1_TWOBUFEN_Pos            (5)                                               /*!< I2C_T::CTL1: TWOBUFEN Position         */
#define I2C_CTL1_TWOBUFEN_Msk            (0x1ul << I2C_CTL1_TWOBUFEN_Pos)                  /*!< I2C_T::CTL1: TWOBUFEN Mask             */

#define I2C_CTL1_TWOBUFRST_Pos           (6)                                               /*!< I2C_T::CTL1: TWOBUFRST Position        */
#define I2C_CTL1_TWOBUFRST_Msk           (0x1ul << I2C_CTL1_TWOBUFRST_Pos)                 /*!< I2C_T::CTL1: TWOBUFRST Mask            */

#define I2C_CTL1_NSTRETCH_Pos            (7)                                               /*!< I2C_T::CTL1: NSTRETCH Position         */
#define I2C_CTL1_NSTRETCH_Msk            (0x1ul << I2C_CTL1_NSTRETCH_Pos)                  /*!< I2C_T::CTL1: NSTRETCH Mask             */

#define I2C_CTL1_PDMASTR_Pos             (8)                                               /*!< I2C_T::CTL1: PDMASTR Position          */
#define I2C_CTL1_PDMASTR_Msk             (0x1ul << I2C_CTL1_PDMASTR_Pos)                   /*!< I2C_T::CTL1: PDMASTR Mask              */

#define I2C_CTL1_ADDR10EN_Pos            (9)                                               /*!< I2C CTL1: ADDR10EN Position            */
#define I2C_CTL1_ADDR10EN_Msk            (0x1ul << I2C_CTL1_ADDR10EN_Pos)                  /*!< I2C CTL1: ADDR10EN Mask                */

#define I2C_STATUS1_FULL_Pos             (4)                                               /*!< I2C_T::STATUS1: FULL Position          */
#define I2C_STATUS1_FULL_Msk             (0x1ul << I2C_STATUS1_FULL_Pos)                   /*!< I2C_T::STATUS1: FULL Mask              */

#define I2C_STATUS1_EMPTY_Pos            (5)                                               /*!< I2C_T::STATUS1: EMPTY Position         */
#define I2C_STATUS1_EMPTY_Msk            (0x1ul << I2C_STATUS1_EMPTY_Pos)                  /*!< I2C_T::STATUS1: EMPTY Mask             */

#define I2C_STATUS1_OVR_Pos              (6)                                               /*!< I2C_T::STATUS1: OVR Position           */
#define I2C_STATUS1_OVR_Msk              (0x1ul << I2C_STATUS1_OVR_Pos)                    /*!< I2C_T::STATUS1: OVR Mask               */

#define I2C_STATUS1_UDR_Pos              (7)                                               /*!< I2C_T::STATUS1: UDR Position           */
#define I2C_STATUS1_UDR_Msk              (0x1ul << I2C_STATUS1_UDR_Pos)                    /*!< I2C_T::STATUS1: UDR Mask               */

#define I2C_STATUS1_ONBUSY_Pos           (8)                                               /*!< I2C_T::STATUS1: ONBUSY Position        */
#define I2C_STATUS1_ONBUSY_Msk           (0x1ul << I2C_STATUS1_ONBUSY_Pos)                 /*!< I2C_T::STATUS1: ONBUSY Mask            */

#define I2C_TMCTL_STCTL_Pos              (0)                                               /*!< I2C_T::TMCTL: STCTL Position           */
#define I2C_TMCTL_STCTL_Msk              (0x1fful << I2C_TMCTL_STCTL_Pos)                  /*!< I2C_T::TMCTL: STCTL Mask               */

#define I2C_TMCTL_HTCTL_Pos              (16)                                              /*!< I2C_T::TMCTL: HTCTL Position           */
#define I2C_TMCTL_HTCTL_Msk              (0x1fful << I2C_TMCTL_HTCTL_Pos)                  /*!< I2C_T::TMCTL: HTCTL Mask               */

#define I2C_BUSCTL_ACKMEN_Pos            (0)                                               /*!< I2C_T::BUSCTL: ACKMEN Position         */
#define I2C_BUSCTL_ACKMEN_Msk            (0x1ul << I2C_BUSCTL_ACKMEN_Pos)                  /*!< I2C_T::BUSCTL: ACKMEN Mask             */

#define I2C_BUSCTL_PECEN_Pos             (1)                                               /*!< I2C_T::BUSCTL: PECEN Position          */
#define I2C_BUSCTL_PECEN_Msk             (0x1ul << I2C_BUSCTL_PECEN_Pos)                   /*!< I2C_T::BUSCTL: PECEN Mask              */

#define I2C_BUSCTL_BMDEN_Pos             (2)                                               /*!< I2C_T::BUSCTL: BMDEN Position          */
#define I2C_BUSCTL_BMDEN_Msk             (0x1ul << I2C_BUSCTL_BMDEN_Pos)                   /*!< I2C_T::BUSCTL: BMDEN Mask              */

#define I2C_BUSCTL_BMHEN_Pos             (3)                                               /*!< I2C_T::BUSCTL: BMHEN Position          */
#define I2C_BUSCTL_BMHEN_Msk             (0x1ul << I2C_BUSCTL_BMHEN_Pos)                   /*!< I2C_T::BUSCTL: BMHEN Mask              */

#define I2C_BUSCTL_ALERTEN_Pos           (4)                                               /*!< I2C_T::BUSCTL: ALERTEN Position        */
#define I2C_BUSCTL_ALERTEN_Msk           (0x1ul << I2C_BUSCTL_ALERTEN_Pos)                 /*!< I2C_T::BUSCTL: ALERTEN Mask            */

#define I2C_BUSCTL_SCTLOSTS_Pos          (5)                                               /*!< I2C_T::BUSCTL: SCTLOSTS Position       */
#define I2C_BUSCTL_SCTLOSTS_Msk          (0x1ul << I2C_BUSCTL_SCTLOSTS_Pos)                /*!< I2C_T::BUSCTL: SCTLOSTS Mask           */

#define I2C_BUSCTL_SCTLOEN_Pos           (6)                                               /*!< I2C_T::BUSCTL: SCTLOEN Position        */
#define I2C_BUSCTL_SCTLOEN_Msk           (0x1ul << I2C_BUSCTL_SCTLOEN_Pos)                 /*!< I2C_T::BUSCTL: SCTLOEN Mask            */

#define I2C_BUSCTL_BUSEN_Pos             (7)                                               /*!< I2C_T::BUSCTL: BUSEN Position          */
#define I2C_BUSCTL_BUSEN_Msk             (0x1ul << I2C_BUSCTL_BUSEN_Pos)                   /*!< I2C_T::BUSCTL: BUSEN Mask              */

#define I2C_BUSCTL_PECTXEN_Pos           (8)                                               /*!< I2C_T::BUSCTL: PECTXEN Position        */
#define I2C_BUSCTL_PECTXEN_Msk           (0x1ul << I2C_BUSCTL_PECTXEN_Pos)                 /*!< I2C_T::BUSCTL: PECTXEN Mask            */

#define I2C_BUSCTL_TIDLE_Pos             (9)                                               /*!< I2C_T::BUSCTL: TIDLE Position          */
#define I2C_BUSCTL_TIDLE_Msk             (0x1ul << I2C_BUSCTL_TIDLE_Pos)                   /*!< I2C_T::BUSCTL: TIDLE Mask              */

#define I2C_BUSCTL_PECCLR_Pos            (10)                                              /*!< I2C_T::BUSCTL: PECCLR Position         */
#define I2C_BUSCTL_PECCLR_Msk            (0x1ul << I2C_BUSCTL_PECCLR_Pos)                  /*!< I2C_T::BUSCTL: PECCLR Mask             */

#define I2C_BUSCTL_ACKM9SI_Pos           (11)                                              /*!< I2C_T::BUSCTL: ACKM9SI Position        */
#define I2C_BUSCTL_ACKM9SI_Msk           (0x1ul << I2C_BUSCTL_ACKM9SI_Pos)                 /*!< I2C_T::BUSCTL: ACKM9SI Mask            */

#define I2C_BUSCTL_BCDIEN_Pos            (12)                                              /*!< I2C_T::BUSCTL: BCDIEN Position         */
#define I2C_BUSCTL_BCDIEN_Msk            (0x1ul << I2C_BUSCTL_BCDIEN_Pos)                  /*!< I2C_T::BUSCTL: BCDIEN Mask             */

#define I2C_BUSCTL_PECDIEN_Pos           (13)                                              /*!< I2C_T::BUSCTL: PECDIEN Position        */
#define I2C_BUSCTL_PECDIEN_Msk           (0x1ul << I2C_BUSCTL_PECDIEN_Pos)                 /*!< I2C_T::BUSCTL: PECDIEN Mask            */

#define I2C_BUSTCTL_BUSTOEN_Pos          (0)                                               /*!< I2C_T::BUSTCTL: BUSTOEN Position       */
#define I2C_BUSTCTL_BUSTOEN_Msk          (0x1ul << I2C_BUSTCTL_BUSTOEN_Pos)                /*!< I2C_T::BUSTCTL: BUSTOEN Mask           */

#define I2C_BUSTCTL_CLKTOEN_Pos          (1)                                               /*!< I2C_T::BUSTCTL: CLKTOEN Position       */
#define I2C_BUSTCTL_CLKTOEN_Msk          (0x1ul << I2C_BUSTCTL_CLKTOEN_Pos)                /*!< I2C_T::BUSTCTL: CLKTOEN Mask           */

#define I2C_BUSTCTL_BUSTOIEN_Pos         (2)                                               /*!< I2C_T::BUSTCTL: BUSTOIEN Position      */
#define I2C_BUSTCTL_BUSTOIEN_Msk         (0x1ul << I2C_BUSTCTL_BUSTOIEN_Pos)               /*!< I2C_T::BUSTCTL: BUSTOIEN Mask          */

#define I2C_BUSTCTL_CLKTOIEN_Pos         (3)                                               /*!< I2C_T::BUSTCTL: CLKTOIEN Position      */
#define I2C_BUSTCTL_CLKTOIEN_Msk         (0x1ul << I2C_BUSTCTL_CLKTOIEN_Pos)               /*!< I2C_T::BUSTCTL: CLKTOIEN Mask          */

#define I2C_BUSTCTL_TORSTEN_Pos          (4)                                               /*!< I2C_T::BUSTCTL: TORSTEN Position       */
#define I2C_BUSTCTL_TORSTEN_Msk          (0x1ul << I2C_BUSTCTL_TORSTEN_Pos)                /*!< I2C_T::BUSTCTL: TORSTEN Mask           */

#define I2C_BUSSTS_BUSY_Pos              (0)                                               /*!< I2C_T::BUSSTS: BUSY Position           */
#define I2C_BUSSTS_BUSY_Msk              (0x1ul << I2C_BUSSTS_BUSY_Pos)                    /*!< I2C_T::BUSSTS: BUSY Mask               */

#define I2C_BUSSTS_BCDONE_Pos            (1)                                               /*!< I2C_T::BUSSTS: BCDONE Position         */
#define I2C_BUSSTS_BCDONE_Msk            (0x1ul << I2C_BUSSTS_BCDONE_Pos)                  /*!< I2C_T::BUSSTS: BCDONE Mask             */

#define I2C_BUSSTS_PECERR_Pos            (2)                                               /*!< I2C_T::BUSSTS: PECERR Position         */
#define I2C_BUSSTS_PECERR_Msk            (0x1ul << I2C_BUSSTS_PECERR_Pos)                  /*!< I2C_T::BUSSTS: PECERR Mask             */

#define I2C_BUSSTS_ALERT_Pos             (3)                                               /*!< I2C_T::BUSSTS: ALERT Position          */
#define I2C_BUSSTS_ALERT_Msk             (0x1ul << I2C_BUSSTS_ALERT_Pos)                   /*!< I2C_T::BUSSTS: ALERT Mask              */

#define I2C_BUSSTS_SCTLDIN_Pos           (4)                                               /*!< I2C_T::BUSSTS: SCTLDIN Position        */
#define I2C_BUSSTS_SCTLDIN_Msk           (0x1ul << I2C_BUSSTS_SCTLDIN_Pos)                 /*!< I2C_T::BUSSTS: SCTLDIN Mask            */

#define I2C_BUSSTS_BUSTO_Pos             (5)                                               /*!< I2C_T::BUSSTS: BUSTO Position          */
#define I2C_BUSSTS_BUSTO_Msk             (0x1ul << I2C_BUSSTS_BUSTO_Pos)                   /*!< I2C_T::BUSSTS: BUSTO Mask              */

#define I2C_BUSSTS_CLKTO_Pos             (6)                                               /*!< I2C_T::BUSSTS: CLKTO Position          */
#define I2C_BUSSTS_CLKTO_Msk             (0x1ul << I2C_BUSSTS_CLKTO_Pos)                   /*!< I2C_T::BUSSTS: CLKTO Mask              */

#define I2C_BUSSTS_PECDONE_Pos           (7)                                               /*!< I2C_T::BUSSTS: PECDONE Position        */
#define I2C_BUSSTS_PECDONE_Msk           (0x1ul << I2C_BUSSTS_PECDONE_Pos)                 /*!< I2C_T::BUSSTS: PECDONE Mask            */

#define I2C_PKTSIZE_PLDSIZE_Pos          (0)                                               /*!< I2C_T::PKTSIZE: PLDSIZE Position       */
#define I2C_PKTSIZE_PLDSIZE_Msk          (0x1fful << I2C_PKTSIZE_PLDSIZE_Pos)              /*!< I2C_T::PKTSIZE: PLDSIZE Mask           */

#define I2C_PKTCRC_PECCRC_Pos            (0)                                               /*!< I2C_T::PKTCRC: PECCRC Position         */
#define I2C_PKTCRC_PECCRC_Msk            (0xfful << I2C_PKTCRC_PECCRC_Pos)                 /*!< I2C_T::PKTCRC: PECCRC Mask             */

#define I2C_BUSTOUT_BUSTO_Pos            (0)                                               /*!< I2C_T::BUSTOUT: BUSTO Position         */
#define I2C_BUSTOUT_BUSTO_Msk            (0xfful << I2C_BUSTOUT_BUSTO_Pos)                 /*!< I2C_T::BUSTOUT: BUSTO Mask             */

#define I2C_CLKTOUT_CLKTO_Pos            (0)                                               /*!< I2C_T::CLKTOUT: CLKTO Position         */
#define I2C_CLKTOUT_CLKTO_Msk            (0xfful << I2C_CLKTOUT_CLKTO_Pos)                 /*!< I2C_T::CLKTOUT: CLKTO Mask             */

/**@}*/ /* I2C_CONST */
/**@}*/ /* end of I2C register group */


/*---------------------- LED Lighting Strip Interface -------------------------*/
/**
    @addtogroup LLSI LED Lighting Strip Interface(LLSI)
    Memory Mapped Structure for LLSI Controller
    @{
*/

typedef struct
{


    /**
     * @var LLSI_T::CTL
     * Offset: 0x00  LLSI Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |LLSIEN    |LLSI Enable Bit
     * |        |          |0 = LLSI Disabled.
     * |        |          |1 = LLSI Enabled.
     * |[1]     |RSTCEN    |Reset Command Function Enable Bit
     * |        |          |0 = Reset command function Disabled.
     * |        |          |1 = Reset command function Enabled.
     * |        |          |Note: If this bit is enabled, when FIFO and shift register are both empty, LLSI will send reset command out.
     * |[2]     |UNDFLINTEN|Underflow Interrupt Enable Bit
     * |        |          |0 = Underflow interrupt Disabled.
     * |        |          |1 = Underflow interrupt Enabled.
     * |        |          |Note: If this bit is enabled, when the UNDFLIF interrupt flag is set to 1, the LLSI interrupt signal is generated and inform to CPU.
     * |[3]     |FENDINTEN |Frame End Interrupt Enable Bit
     * |        |          |0 = Frame end interrupt Disabled.
     * |        |          |1 = Frame end interrupt Enabled.
     * |        |          |Note: If this bit is enabled, when the FENDIF interrupt flag is set to 1, the LLSI interrupt signal is generated and inform to CPU.
     * |[4]     |RSTCINTEN |Reset Command Interrupt Enable Bit
     * |        |          |0 = Reset command interrupt Disabled.
     * |        |          |1 = Reset command interrupt Enabled.
     * |        |          |Note: If this bit is enabled, when the RSTCIF interrupt flag is set to 1, the LLSI interrupt signal is generated and inform to CPU.
     * |[5]     |EMPINTEN  |FIFO Empty Interrupt Enable Bit
     * |        |          |0 = FIFO empty interrupt Disabled.
     * |        |          |1 = FIFO empty interrupt Enabled.
     * |        |          |Note: If this bit is enabled, when the EMPIF interrupt flag is set to 1, the LLSI interrupt signal is generated and inform to CPU.
     * |[6]     |FULINTEN  |FIFO Full Interrupt Enable Bit
     * |        |          |0 = FIFO full interrupt Disabled.
     * |        |          |1 = FIFO full interrupt Enabled.
     * |        |          |Note: If this bit is enabled, when the FULIF interrupt flag is set to 1, the LLSI interrupt signal is generated and inform to CPU.
     * |[7]     |TXTHIEN   |Transmit FIFO Threshold Interrupt Enable Bit
     * |        |          |0 = TX FIFO threshold interrupt Disabled.
     * |        |          |1 = TX FIFO threshold interrupt Enabled.
     * |        |          |Note: This bit is only supported in software mode.
     * |[8]     |LLSIMODE  |LLSI Mode Select
     * |        |          |0 = Software mode.
     * |        |          |1 = PDMA mode.
     * |[12]    |OFDEF     |Output Format Define
     * |        |          |0 = Output RGB format.
     * |        |          |1 = Output GRB format.
     * |[17:16] |TXTH      |Transmit FIFO Threshold
     * |        |          |If the valid data count of the transmit FIFO buffer is less than or equal to the TXTH setting, the TXTHIF bit will be set to 1, else the TXTHIF bit will be cleared to 0.
     * @var LLSI_T::RSTPERIOD
     * Offset: 0x04  LLSI Reset Period Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |RSTPERIOD |Reset Command Period
     * |        |          |This field is used to adjust the time of reset command.
     * |        |          |Reset command time = LLSI_CLK * (DIVIDER+1) * RSTPERIOD.
     * @var LLSI_T::PERIOD
     * Offset: 0x08  LLSI Period Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |PERIOD    |LLSI Period Register
     * |        |          |This field is used to define data transfer time (TH+TL).
     * |        |          |Data transfer time = LLSI_CLK * (DIVIDER+1) * PERIOD.
     * @var LLSI_T::DUTY
     * Offset: 0x0C  LLSI Duty Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |T0H       |T0H Data Register
     * |        |          |This field is used to define the time of T0H.
     * |        |          |The time of T0H = LLSI_CLK * (DIVIDER+1) * T0H.
     * |        |          |Note: T0 (0 code) duty cycle = (T0H) / (PERIOD).
     * |[23:16] |T1H       |T1H Data Register
     * |        |          |This field is used to define the time of T1H.
     * |        |          |The time of T1H = LLSI_CLK * (DIVIDER+1) * T1H.
     * |        |          |Note: T1 (1 code) duty cycle = (T1H) / (PERIOD).
     * @var LLSI_T::DATA
     * Offset: 0x10  LLSI Data Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |DATA      |Data Transmit Register
     * |        |          |The data transmit registers pass through the transmitted data into the 4-level transmit FIFO buffers.
     * @var LLSI_T::PCNT
     * Offset: 0x14  LLSI Pixel Count Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[11:0]  |PCNT      |Pixel Count Register
     * |        |          |User should write a frame size to this register before transfer.
     * |        |          |For example, if there are a total of 5 LED (5 pixels) in frame, user should write 5 to this control register.
     * @var LLSI_T::CLKDIV
     * Offset: 0x18  LLSI Clock Divider Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |DIVIDER   |LLSI Clock Divider
     * |        |          |It indicates the LLSI clock, F_LLSI = F_APBCLK / (DIVIDER+1).
     * @var LLSI_T::STATUS
     * Offset: 0x1C  LLSI Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |RSTCIF    |Reset Command Interrupt Flag
     * |        |          |This bit indicates that LLSI has finished reset command transmission.
     * |[1]     |EMPIF     |FIFO Empty Interrupt Flag
     * |        |          |0 = Transmit FIFO buffer is not empty.
     * |        |          |1 = Transmit FIFO buffer is empty.
     * |[2]     |FULIF     |FIFO Full Interrupt Flag
     * |        |          |0 = Transmit FIFO buffer is not full.
     * |        |          |1 = Transmit FIFO buffer is full.
     * |[3]     |TXTHIF    |Transmit FIFO Threshold Interrupt Flag
     * |        |          |0 = The valid data count within the transmit FIFO buffer is larger than the setting value of TXTH.
     * |        |          |1 = The valid data count within the transmit FIFO buffer is less than or equal to the setting value of TXTH.
     * |[4]     |UNDFLIF   |Under Flow Interrupt Flag
     * |        |          |Each transmission LLSI reads 3 bytes data from the FIFO
     * |        |          |This bit is set to 1 when LLSI reads the FIFO and the valid data in FIFO is less than 3 bytes.
     * |        |          |Software can write 1 to clear this bit.
     * |[5]     |FENDIF    |Frame End Interrupt Flag
     * |        |          |This bit indicates that LLSI has finished data transmission (FIFO empty & shift register empty)
     * |        |          |When LLSI transfer finish (FIFO empty & shift register empty) this bit is set to 1.
     * |        |          |User can use this flag to prepare data in advance.
     * |        |          |Software can write 1 to clear this bit.
     * |[8]     |LDT       |Last Data Transmit
     * |        |          |Software should set LDT = 1 before write last data to LLSI_DATA
     * |        |          |This bit will auto clear by hardware after LLSI has finished data transmission.
     * @var LLSI_T::OCTL
     * Offset: 0x20  LLSI Output Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |IDOS      |Idle Output Control
     * |        |          |0 = Idle will output 0.
     * |        |          |1 = Idle will output 1.
     */

    __IO uint32_t CTL;                   /*!< [0x0000] LLSI Control Register                                            */
    __IO uint32_t RSTPERIOD;             /*!< [0x0004] LLSI Reset Period Control Register                               */
    __IO uint32_t PERIOD;                /*!< [0x0008] LLSI Period Control Register                                     */
    __IO uint32_t DUTY;                  /*!< [0x000c] LLSI Duty Control Register                                       */
    __O  uint32_t DATA;                  /*!< [0x0010] LLSI Data Register                                               */
    __IO uint32_t PCNT;                  /*!< [0x0014] LLSI Pixel Count Register                                        */
    __IO uint32_t CLKDIV;                /*!< [0x0018] LLSI Clock Divider Register                                      */
    __IO uint32_t STATUS;                /*!< [0x001c] LLSI Status Register                                             */
    __IO uint32_t OCTL;                  /*!< [0x0020] LLSI Output Control Register                                     */

} LLSI_T;

/**
    @addtogroup LLSI_CONST LLSI Bit Field Definition
    Constant Definitions for LLSI Controller
    @{
*/

#define LLSI_CTL_LLSIEN_Pos              (0)                                               /*!< LLSI_T::CTL: LLSIEN Position           */
#define LLSI_CTL_LLSIEN_Msk              (0x1ul << LLSI_CTL_LLSIEN_Pos)                    /*!< LLSI_T::CTL: LLSIEN Mask               */

#define LLSI_CTL_RSTCEN_Pos              (1)                                               /*!< LLSI_T::CTL: RSTCEN Position           */
#define LLSI_CTL_RSTCEN_Msk              (0x1ul << LLSI_CTL_RSTCEN_Pos)                    /*!< LLSI_T::CTL: RSTCEN Mask               */

#define LLSI_CTL_UNDFLINTEN_Pos          (2)                                               /*!< LLSI_T::CTL: UNDFLINTEN Position       */
#define LLSI_CTL_UNDFLINTEN_Msk          (0x1ul << LLSI_CTL_UNDFLINTEN_Pos)                /*!< LLSI_T::CTL: UNDFLINTEN Mask           */

#define LLSI_CTL_FENDINTEN_Pos           (3)                                               /*!< LLSI_T::CTL: FENDINTEN Position        */
#define LLSI_CTL_FENDINTEN_Msk           (0x1ul << LLSI_CTL_FENDINTEN_Pos)                 /*!< LLSI_T::CTL: FENDINTEN Mask            */

#define LLSI_CTL_RSTCINTEN_Pos           (4)                                               /*!< LLSI_T::CTL: RSTCINTEN Position        */
#define LLSI_CTL_RSTCINTEN_Msk           (0x1ul << LLSI_CTL_RSTCINTEN_Pos)                 /*!< LLSI_T::CTL: RSTCINTEN Mask            */

#define LLSI_CTL_EMPINTEN_Pos            (5)                                               /*!< LLSI_T::CTL: EMPINTEN Position         */
#define LLSI_CTL_EMPINTEN_Msk            (0x1ul << LLSI_CTL_EMPINTEN_Pos)                  /*!< LLSI_T::CTL: EMPINTEN Mask             */

#define LLSI_CTL_FULINTEN_Pos            (6)                                               /*!< LLSI_T::CTL: FULINTEN Position         */
#define LLSI_CTL_FULINTEN_Msk            (0x1ul << LLSI_CTL_FULINTEN_Pos)                  /*!< LLSI_T::CTL: FULINTEN Mask             */

#define LLSI_CTL_TXTHIEN_Pos             (7)                                               /*!< LLSI_T::CTL: TXTHIEN Position          */
#define LLSI_CTL_TXTHIEN_Msk             (0x1ul << LLSI_CTL_TXTHIEN_Pos)                   /*!< LLSI_T::CTL: TXTHIEN Mask              */

#define LLSI_CTL_LLSIMODE_Pos            (8)                                               /*!< LLSI_T::CTL: LLSIMODE Position         */
#define LLSI_CTL_LLSIMODE_Msk            (0x1ul << LLSI_CTL_LLSIMODE_Pos)                  /*!< LLSI_T::CTL: LLSIMODE Mask             */

#define LLSI_CTL_OFDEF_Pos               (12)                                              /*!< LLSI_T::CTL: OFDEF Position            */
#define LLSI_CTL_OFDEF_Msk               (0x1ul << LLSI_CTL_OFDEF_Pos)                     /*!< LLSI_T::CTL: OFDEF Mask                */

#define LLSI_CTL_TXTH_Pos                (16)                                              /*!< LLSI_T::CTL: TXTH Position             */
#define LLSI_CTL_TXTH_Msk                (0x3ul << LLSI_CTL_TXTH_Pos)                      /*!< LLSI_T::CTL: TXTH Mask                 */

#define LLSI_RSTPERIOD_RSTPERIOD_Pos     (0)                                               /*!< LLSI_T::RSTPERIOD: RSTPERIOD Position  */
#define LLSI_RSTPERIOD_RSTPERIOD_Msk     (0xfffful << LLSI_RSTPERIOD_RSTPERIOD_Pos)        /*!< LLSI_T::RSTPERIOD: RSTPERIOD Mask      */

#define LLSI_PERIOD_PERIOD_Pos           (0)                                               /*!< LLSI_T::PERIOD: PERIOD Position        */
#define LLSI_PERIOD_PERIOD_Msk           (0xfful << LLSI_PERIOD_PERIOD_Pos)                /*!< LLSI_T::PERIOD: PERIOD Mask            */

#define LLSI_DUTY_T0H_Pos                (0)                                               /*!< LLSI_T::DUTY: T0H Position             */
#define LLSI_DUTY_T0H_Msk                (0xfful << LLSI_DUTY_T0H_Pos)                     /*!< LLSI_T::DUTY: T0H Mask                 */

#define LLSI_DUTY_T1H_Pos                (16)                                              /*!< LLSI_T::DUTY: T1H Position             */
#define LLSI_DUTY_T1H_Msk                (0xfful << LLSI_DUTY_T1H_Pos)                     /*!< LLSI_T::DUTY: T1H Mask                 */

#define LLSI_DATA_DATA_Pos               (0)                                               /*!< LLSI_T::DATA: DATA Position            */
#define LLSI_DATA_DATA_Msk               (0xfffffffful << LLSI_DATA_DATA_Pos)              /*!< LLSI_T::DATA: DATA Mask                */

#define LLSI_PCNT_PCNT_Pos               (0)                                               /*!< LLSI_T::PCNT: PCNT Position            */
#define LLSI_PCNT_PCNT_Msk               (0xffful << LLSI_PCNT_PCNT_Pos)                   /*!< LLSI_T::PCNT: PCNT Mask                */

#define LLSI_CLKDIV_DIVIDER_Pos          (0)                                               /*!< LLSI_T::CLKDIV: DIVIDER Position       */
#define LLSI_CLKDIV_DIVIDER_Msk          (0xfful << LLSI_CLKDIV_DIVIDER_Pos)               /*!< LLSI_T::CLKDIV: DIVIDER Mask           */

#define LLSI_STATUS_RSTCIF_Pos           (0)                                               /*!< LLSI_T::STATUS: RSTCIF Position        */
#define LLSI_STATUS_RSTCIF_Msk           (0x1ul << LLSI_STATUS_RSTCIF_Pos)                 /*!< LLSI_T::STATUS: RSTCIF Mask            */

#define LLSI_STATUS_EMPIF_Pos            (1)                                               /*!< LLSI_T::STATUS: EMPIF Position         */
#define LLSI_STATUS_EMPIF_Msk            (0x1ul << LLSI_STATUS_EMPIF_Pos)                  /*!< LLSI_T::STATUS: EMPIF Mask             */

#define LLSI_STATUS_FULIF_Pos            (2)                                               /*!< LLSI_T::STATUS: FULIF Position         */
#define LLSI_STATUS_FULIF_Msk            (0x1ul << LLSI_STATUS_FULIF_Pos)                  /*!< LLSI_T::STATUS: FULIF Mask             */

#define LLSI_STATUS_TXTHIF_Pos           (3)                                               /*!< LLSI_T::STATUS: TXTHIF Position        */
#define LLSI_STATUS_TXTHIF_Msk           (0x1ul << LLSI_STATUS_TXTHIF_Pos)                 /*!< LLSI_T::STATUS: TXTHIF Mask            */

#define LLSI_STATUS_UNDFLIF_Pos          (4)                                               /*!< LLSI_T::STATUS: UNDFLIF Position       */
#define LLSI_STATUS_UNDFLIF_Msk          (0x1ul << LLSI_STATUS_UNDFLIF_Pos)                /*!< LLSI_T::STATUS: UNDFLIF Mask           */

#define LLSI_STATUS_FENDIF_Pos           (5)                                               /*!< LLSI_T::STATUS: FENDIF Position        */
#define LLSI_STATUS_FENDIF_Msk           (0x1ul << LLSI_STATUS_FENDIF_Pos)                 /*!< LLSI_T::STATUS: FENDIF Mask            */

#define LLSI_STATUS_LDT_Pos              (8)                                               /*!< LLSI_T::STATUS: LDT Position           */
#define LLSI_STATUS_LDT_Msk              (0x1ul << LLSI_STATUS_LDT_Pos)                    /*!< LLSI_T::STATUS: LDT Mask               */

#define LLSI_OCTL_IDOS_Pos               (0)                                               /*!< LLSI_T::OCTL: IDOS Position            */
#define LLSI_OCTL_IDOS_Msk               (0x1ul << LLSI_OCTL_IDOS_Pos)                     /*!< LLSI_T::OCTL: IDOS Mask                */

/**@}*/ /* LLSI_CONST */
/**@}*/ /* end of LLSI register group */


/*---------------------- Peripheral Direct Memory Access Controller -------------------------*/
/**
    @addtogroup PDMA Peripheral Direct Memory Access Controller(PDMA)
    Memory Mapped Structure for PDMA Controller
    @{
*/



typedef struct
{
    /**
     * @var DSCT_T::CTL
     * Offset: 0x00/0x10/0x20/0x30/0x40/0x50/0x60/0x70/0x80/0x90  Descriptor Table Control Register of PDMA Channel 0~9
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1:0]   |OPMODE    |PDMA Operation Mode Selection
     * |        |          |00 = Idle state: Channel is stopped or this table is complete, when PDMA finish channel table task, OPMODE will be cleared to idle state automatically.
     * |        |          |01 = Basic mode: The descriptor table only has one task
     * |        |          |When this task is finished, the TDIF(PDMA_INTSTS[1]) will be asserted.
     * |        |          |10 = Scatter-Gather mode: When operating in this mode, user must give the first descriptor table address in PDMA_DSCT_FIRST register; PDMA controller will ignore this task, then load the next task to execute.
     * |        |          |11 = Reserved.
     * |        |          |Note: Before filling transfer task in the Descriptor Table, user must check if the descriptor table is complete.
     * |[2]     |TXTYPE    |Transfer Type
     * |        |          |0 = Burst transfer type.
     * |        |          |1 = Single transfer type.
     * |[6:4]   |BURSIZE   |Burst Size
     * |        |          |This field is used for peripheral to determine the burst size or used for determine the re-arbitration size.
     * |        |          |000 = 128 Transfers.
     * |        |          |001 = 64 Transfers.
     * |        |          |010 = 32 Transfers.
     * |        |          |011 = 16 Transfers.
     * |        |          |100 = 8 Transfers.
     * |        |          |101 = 4 Transfers.
     * |        |          |110 = 2 Transfers.
     * |        |          |111 = 1 Transfers.
     * |        |          |Note: This field is only useful in burst transfer type.
     * |[7]     |TBINTDIS  |Table Interrupt Disable Bit
     * |        |          |This field can be used to decide whether to enable table interrupt or not
     * |        |          |If the TBINTDIS bit is enabled when PDMA controller finishes transfer task, it will not generates transfer done interrupt.
     * |        |          |0 = Table interrupt Enabled.
     * |        |          |1 = Table interrupt Disabled.
     * |        |          |Note: If this bit set to 1, the TEMPTYF will not be set.
     * |[9:8]   |SAINC     |Source Address Increment
     * |        |          |This Field Is Used To Set The Source Address Increment Size.
     * |        |          |11 = No Increment (Fixed Address).
     * |        |          |Others = Increment And Size Is Depended On TXWIDTH Selection.
     * |[11:10] |DAINC     |Destination Address Increment
     * |        |          |This field is used to set the destination address increment size.
     * |        |          |11 = No increment (fixed address).
     * |        |          |Others = Increment and size is depended on TXWIDTH selection.
     * |[13:12] |TXWIDTH   |Transfer Width Selection
     * |        |          |This field is used for transfer width.
     * |        |          |00 = One byte (8 bit) is transferred for every operation.
     * |        |          |01 = One half-word (16 bit) is transferred for every operation.
     * |        |          |10 = One word (32-bit) is transferred for every operation.
     * |        |          |11 = Reserved.
     * |        |          |Note: The PDMA transfer source address (PDMA_DSCT_SA) and PDMA transfer destination address (PDMA_DSCT_DA) should be alignment under the TXWIDTH selection
     * |        |          |For example, if source address is 0x2000_0202, but TXWIDTH is word transfer, the source address is not word alignment
     * |        |          |The source address is aligned when TXWIDTH is byte or half-word transfer.
     * |[29:16] |TXCNT     |Transfer Count
     * |        |          |The TXCNT represents the required number of PDMA transfer, the real transfer count is (TXCNT + 1); The maximum transfer count is 16384 , every transfer may be byte, half-word or word that is dependent on TXWIDTH field.
     * |        |          |Note: When PDMA finish each transfer data, this field will be decrease immediately.
     * @var DSCT_T::SA
     * Offset: 0x04/0x14/0x24/0x34/0x44/0x54/0x64/0x74/0x84/0x94  Source Address Register of PDMA Channel 0~9
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |SA        |PDMA Transfer Source Address Register
     * |        |          |This field indicates a 32-bit source address of PDMA controller.
     * |        |          |Note: The PDMA transfer source address should be aligned with the TXWIDTH(PDMA_DSCTn_CTL[13:12], n=0,1..9) selection.
     * @var DSCT_T::DA
     * Offset: 0x08/0x18/0x28/0x38/0x48/0x58/0x68/0x78/0x88/0x98  Destination Address Register of PDMA Channel 0~9
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |DA        |PDMA Transfer Destination Address Register
     * |        |          |This field indicates a 32-bit destination address of PDMA controller.
     * |        |          |Note: The PDMA transfer destination address should be aligned with the TXWIDTH(PDMA_DSCTn_CTL[13:12], n=0,1..9) selection.
     * @var DSCT_T::FIRST
     * Offset: 0x0C/0x1C/0x2C/0x3C/0x4C/0x5C/0x6C/0x7C/0x8C/0x9C  First Scatter-Gather Descriptor Table Offset of PDMA Channel 0~9
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |FIRST     |PDMA First Descriptor Table Offset
     * |        |          |This field indicates the offset of the first descriptor table address in system memory.
     * |        |          |Write Operation:
     * |        |          |If the system memory based address is 0x2000_0000 (PDMA_SCATBA), and the first descriptor table is start from 0x2000_0100, then this field must fill in 0x0100.
     * |        |          |Read Operation:
     * |        |          |When operating in scatter-gather mode, the last two bits FIRST[1:0] will become reserved.
     * |        |          |Note1: The first descriptor table address must be word boundary.
     * |        |          |Note2: Before filled transfer task in the descriptor table, user must check if the descriptor table is complete.
     * |[31:16] |NEXT      |PDMA Next Descriptor Table Offset
     * |        |          |This field indicates the offset of next descriptor table address in system memory.
     * |        |          |Note: write operation is useless in this field.
     */

    __IO uint32_t CTL;             /*!< [0x00/0x10/0x20/0x30/0x40/0x50/0x60/0x70/0x80/0x90] Descriptor Table Control Register of PDMA Channel 0~9              */
    __IO uint32_t SA;              /*!< [0x04/0x14/0x24/0x34/0x44/0x54/0x64/0x74/0x84/0x94] Source Address Register of PDMA Channel 0~9                        */
    __IO uint32_t DA;              /*!< [0x08/0x18/0x28/0x38/0x48/0x58/0x68/0x78/0x88/0x98] Destination Address Register of PDMA Channel 0~9                   */
    union
    {
        __IO uint32_t FIRST;       /*!< [0x0C/0x1C/0x2C/0x3C/0x4C/0x5C/0x6C/0x7C/0x8C/0x9C] First Scatter-Gather Descriptor Table Offset of PDMA Channel 0~9   */
        __IO uint32_t NEXT;        /*!< Next Scatter-Gather Descriptor Table Offset                                                   */
    };

} DSCT_T;

typedef struct
{


    /**
     * @var PDMA_T::CURSCAT
     * Offset: 0xA0/0xA4/0xA8/0xAC/0xB0/0xB4/0xB8/0xBC/0xC0/0xC4  Current Scatter-Gather Descriptor Table Address of PDMA Channel 0~9
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |CURADDR   |PDMA Current Description Address Register (Read Only)
     * |        |          |This field indicates a 32-bit current external description address of PDMA controller.
     * |        |          |Note: This field is read only and only used for Scatter-Gather mode to indicate the current external description address.
     * @var PDMA_T::CHCTL
     * Offset: 0x400  PDMA Channel Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CHEN0     |PDMA Channel N Enable Bit
     * |        |          |Set this bit to 1 to enable PDMAn operation. Channel cannot be active if it is not set as enabled.
     * |        |          |0 = PDMA channel [n] Disabled.
     * |        |          |1 = PDMA channel [n] Enabled.
     * |        |          |Note: Set PDMA_PAUSE or PDMA_RESET register will also clear this bit.
     * |[1]     |CHEN1     |PDMA Channel N Enable Bit
     * |        |          |Set this bit to 1 to enable PDMAn operation. Channel cannot be active if it is not set as enabled.
     * |        |          |0 = PDMA channel [n] Disabled.
     * |        |          |1 = PDMA channel [n] Enabled.
     * |        |          |Note: Set PDMA_PAUSE or PDMA_RESET register will also clear this bit.
     * |[2]     |CHEN2     |PDMA Channel N Enable Bit
     * |        |          |Set this bit to 1 to enable PDMAn operation. Channel cannot be active if it is not set as enabled.
     * |        |          |0 = PDMA channel [n] Disabled.
     * |        |          |1 = PDMA channel [n] Enabled.
     * |        |          |Note: Set PDMA_PAUSE or PDMA_RESET register will also clear this bit.
     * |[3]     |CHEN3     |PDMA Channel N Enable Bit
     * |        |          |Set this bit to 1 to enable PDMAn operation. Channel cannot be active if it is not set as enabled.
     * |        |          |0 = PDMA channel [n] Disabled.
     * |        |          |1 = PDMA channel [n] Enabled.
     * |        |          |Note: Set PDMA_PAUSE or PDMA_RESET register will also clear this bit.
     * |[4]     |CHEN4     |PDMA Channel N Enable Bit
     * |        |          |Set this bit to 1 to enable PDMAn operation. Channel cannot be active if it is not set as enabled.
     * |        |          |0 = PDMA channel [n] Disabled.
     * |        |          |1 = PDMA channel [n] Enabled.
     * |        |          |Note: Set PDMA_PAUSE or PDMA_RESET register will also clear this bit.
     * |[5]     |CHEN5     |PDMA Channel N Enable Bit
     * |        |          |Set this bit to 1 to enable PDMAn operation. Channel cannot be active if it is not set as enabled.
     * |        |          |0 = PDMA channel [n] Disabled.
     * |        |          |1 = PDMA channel [n] Enabled.
     * |        |          |Note: Set PDMA_PAUSE or PDMA_RESET register will also clear this bit.
     * |[6]     |CHEN6     |PDMA Channel N Enable Bit
     * |        |          |Set this bit to 1 to enable PDMAn operation. Channel cannot be active if it is not set as enabled.
     * |        |          |0 = PDMA channel [n] Disabled.
     * |        |          |1 = PDMA channel [n] Enabled.
     * |        |          |Note: Set PDMA_PAUSE or PDMA_RESET register will also clear this bit.
     * |[7]     |CHEN7     |PDMA Channel N Enable Bit
     * |        |          |Set this bit to 1 to enable PDMAn operation. Channel cannot be active if it is not set as enabled.
     * |        |          |0 = PDMA channel [n] Disabled.
     * |        |          |1 = PDMA channel [n] Enabled.
     * |        |          |Note: Set PDMA_PAUSE or PDMA_RESET register will also clear this bit.
     * |[8]     |CHEN8     |PDMA Channel N Enable Bit
     * |        |          |Set this bit to 1 to enable PDMAn operation. Channel cannot be active if it is not set as enabled.
     * |        |          |0 = PDMA channel [n] Disabled.
     * |        |          |1 = PDMA channel [n] Enabled.
     * |        |          |Note: Set PDMA_PAUSE or PDMA_RESET register will also clear this bit.
     * |[9]     |CHEN9     |PDMA Channel N Enable Bit
     * |        |          |Set this bit to 1 to enable PDMAn operation. Channel cannot be active if it is not set as enabled.
     * |        |          |0 = PDMA channel [n] Disabled.
     * |        |          |1 = PDMA channel [n] Enabled.
     * |        |          |Note: Set PDMA_PAUSE or PDMA_RESET register will also clear this bit.
     * @var PDMA_T::PAUSE
     * Offset: 0x404  PDMA Transfer Pause Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |PAUSE0    |PDMA Channel N Transfer Pause Control Register (Write Only)
     * |        |          |User can set PAUSEn bit field to pause the PDMA transfer
     * |        |          |When user sets PAUSEn bit, the PDMA controller will pause the on-going transfer, then clear the channel enable bit CHEN(PDMA_CHCTL [n], n=0,1..9) and clear request active flag
     * |        |          |If re-enable the paused channel agian, the remaining transfers will be processed.
     * |        |          |0 = No effect.
     * |        |          |1 = Pause PDMA channel n transfer.
     * |[1]     |PAUSE1    |PDMA Channel N Transfer Pause Control Register (Write Only)
     * |        |          |User can set PAUSEn bit field to pause the PDMA transfer
     * |        |          |When user sets PAUSEn bit, the PDMA controller will pause the on-going transfer, then clear the channel enable bit CHEN(PDMA_CHCTL [n], n=0,1..9) and clear request active flag
     * |        |          |If re-enable the paused channel agian, the remaining transfers will be processed.
     * |        |          |0 = No effect.
     * |        |          |1 = Pause PDMA channel n transfer.
     * |[2]     |PAUSE2    |PDMA Channel N Transfer Pause Control Register (Write Only)
     * |        |          |User can set PAUSEn bit field to pause the PDMA transfer
     * |        |          |When user sets PAUSEn bit, the PDMA controller will pause the on-going transfer, then clear the channel enable bit CHEN(PDMA_CHCTL [n], n=0,1..9) and clear request active flag
     * |        |          |If re-enable the paused channel agian, the remaining transfers will be processed.
     * |        |          |0 = No effect.
     * |        |          |1 = Pause PDMA channel n transfer.
     * |[3]     |PAUSE3    |PDMA Channel N Transfer Pause Control Register (Write Only)
     * |        |          |User can set PAUSEn bit field to pause the PDMA transfer
     * |        |          |When user sets PAUSEn bit, the PDMA controller will pause the on-going transfer, then clear the channel enable bit CHEN(PDMA_CHCTL [n], n=0,1..9) and clear request active flag
     * |        |          |If re-enable the paused channel agian, the remaining transfers will be processed.
     * |        |          |0 = No effect.
     * |        |          |1 = Pause PDMA channel n transfer.
     * |[4]     |PAUSE4    |PDMA Channel N Transfer Pause Control Register (Write Only)
     * |        |          |User can set PAUSEn bit field to pause the PDMA transfer
     * |        |          |When user sets PAUSEn bit, the PDMA controller will pause the on-going transfer, then clear the channel enable bit CHEN(PDMA_CHCTL [n], n=0,1..9) and clear request active flag
     * |        |          |If re-enable the paused channel agian, the remaining transfers will be processed.
     * |        |          |0 = No effect.
     * |        |          |1 = Pause PDMA channel n transfer.
     * |[5]     |PAUSE5    |PDMA Channel N Transfer Pause Control Register (Write Only)
     * |        |          |User can set PAUSEn bit field to pause the PDMA transfer
     * |        |          |When user sets PAUSEn bit, the PDMA controller will pause the on-going transfer, then clear the channel enable bit CHEN(PDMA_CHCTL [n], n=0,1..9) and clear request active flag
     * |        |          |If re-enable the paused channel agian, the remaining transfers will be processed.
     * |        |          |0 = No effect.
     * |        |          |1 = Pause PDMA channel n transfer.
     * |[6]     |PAUSE6    |PDMA Channel N Transfer Pause Control Register (Write Only)
     * |        |          |User can set PAUSEn bit field to pause the PDMA transfer
     * |        |          |When user sets PAUSEn bit, the PDMA controller will pause the on-going transfer, then clear the channel enable bit CHEN(PDMA_CHCTL [n], n=0,1..9) and clear request active flag
     * |        |          |If re-enable the paused channel agian, the remaining transfers will be processed.
     * |        |          |0 = No effect.
     * |        |          |1 = Pause PDMA channel n transfer.
     * |[7]     |PAUSE7    |PDMA Channel N Transfer Pause Control Register (Write Only)
     * |        |          |User can set PAUSEn bit field to pause the PDMA transfer
     * |        |          |When user sets PAUSEn bit, the PDMA controller will pause the on-going transfer, then clear the channel enable bit CHEN(PDMA_CHCTL [n], n=0,1..9) and clear request active flag
     * |        |          |If re-enable the paused channel agian, the remaining transfers will be processed.
     * |        |          |0 = No effect.
     * |        |          |1 = Pause PDMA channel n transfer.
     * |[8]     |PAUSE8    |PDMA Channel N Transfer Pause Control Register (Write Only)
     * |        |          |User can set PAUSEn bit field to pause the PDMA transfer
     * |        |          |When user sets PAUSEn bit, the PDMA controller will pause the on-going transfer, then clear the channel enable bit CHEN(PDMA_CHCTL [n], n=0,1..9) and clear request active flag
     * |        |          |If re-enable the paused channel agian, the remaining transfers will be processed.
     * |        |          |0 = No effect.
     * |        |          |1 = Pause PDMA channel n transfer.
     * |[9]     |PAUSE9    |PDMA Channel N Transfer Pause Control Register (Write Only)
     * |        |          |User can set PAUSEn bit field to pause the PDMA transfer
     * |        |          |When user sets PAUSEn bit, the PDMA controller will pause the on-going transfer, then clear the channel enable bit CHEN(PDMA_CHCTL [n], n=0,1..9) and clear request active flag
     * |        |          |If re-enable the paused channel agian, the remaining transfers will be processed.
     * |        |          |0 = No effect.
     * |        |          |1 = Pause PDMA channel n transfer.
     * @var PDMA_T::SWREQ
     * Offset: 0x408  PDMA Software Request Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |SWREQ0    |PDMA Channel N Software Request Register (Write Only)
     * |        |          |Set this bit to 1 to generate a software request to PDMA [n].
     * |        |          |0 = No effect.
     * |        |          |1 = Generate a software request.
     * |        |          |Note1: User can read PDMA_TRGSTS register to know which channel is on active
     * |        |          |Active flag may be triggered by software request or peripheral request.
     * |        |          |Note2: If user does not enable corresponding PDMA channel, the software request will be ignored.
     * |[1]     |SWREQ1    |PDMA Channel N Software Request Register (Write Only)
     * |        |          |Set this bit to 1 to generate a software request to PDMA [n].
     * |        |          |0 = No effect.
     * |        |          |1 = Generate a software request.
     * |        |          |Note1: User can read PDMA_TRGSTS register to know which channel is on active
     * |        |          |Active flag may be triggered by software request or peripheral request.
     * |        |          |Note2: If user does not enable corresponding PDMA channel, the software request will be ignored.
     * |[2]     |SWREQ2    |PDMA Channel N Software Request Register (Write Only)
     * |        |          |Set this bit to 1 to generate a software request to PDMA [n].
     * |        |          |0 = No effect.
     * |        |          |1 = Generate a software request.
     * |        |          |Note1: User can read PDMA_TRGSTS register to know which channel is on active
     * |        |          |Active flag may be triggered by software request or peripheral request.
     * |        |          |Note2: If user does not enable corresponding PDMA channel, the software request will be ignored.
     * |[3]     |SWREQ3    |PDMA Channel N Software Request Register (Write Only)
     * |        |          |Set this bit to 1 to generate a software request to PDMA [n].
     * |        |          |0 = No effect.
     * |        |          |1 = Generate a software request.
     * |        |          |Note1: User can read PDMA_TRGSTS register to know which channel is on active
     * |        |          |Active flag may be triggered by software request or peripheral request.
     * |        |          |Note2: If user does not enable corresponding PDMA channel, the software request will be ignored.
     * |[4]     |SWREQ4    |PDMA Channel N Software Request Register (Write Only)
     * |        |          |Set this bit to 1 to generate a software request to PDMA [n].
     * |        |          |0 = No effect.
     * |        |          |1 = Generate a software request.
     * |        |          |Note1: User can read PDMA_TRGSTS register to know which channel is on active
     * |        |          |Active flag may be triggered by software request or peripheral request.
     * |        |          |Note2: If user does not enable corresponding PDMA channel, the software request will be ignored.
     * |[5]     |SWREQ5    |PDMA Channel N Software Request Register (Write Only)
     * |        |          |Set this bit to 1 to generate a software request to PDMA [n].
     * |        |          |0 = No effect.
     * |        |          |1 = Generate a software request.
     * |        |          |Note1: User can read PDMA_TRGSTS register to know which channel is on active
     * |        |          |Active flag may be triggered by software request or peripheral request.
     * |        |          |Note2: If user does not enable corresponding PDMA channel, the software request will be ignored.
     * |[6]     |SWREQ6    |PDMA Channel N Software Request Register (Write Only)
     * |        |          |Set this bit to 1 to generate a software request to PDMA [n].
     * |        |          |0 = No effect.
     * |        |          |1 = Generate a software request.
     * |        |          |Note1: User can read PDMA_TRGSTS register to know which channel is on active
     * |        |          |Active flag may be triggered by software request or peripheral request.
     * |        |          |Note2: If user does not enable corresponding PDMA channel, the software request will be ignored.
     * |[7]     |SWREQ7    |PDMA Channel N Software Request Register (Write Only)
     * |        |          |Set this bit to 1 to generate a software request to PDMA [n].
     * |        |          |0 = No effect.
     * |        |          |1 = Generate a software request.
     * |        |          |Note1: User can read PDMA_TRGSTS register to know which channel is on active
     * |        |          |Active flag may be triggered by software request or peripheral request.
     * |        |          |Note2: If user does not enable corresponding PDMA channel, the software request will be ignored.
     * |[8]     |SWREQ8    |PDMA Channel N Software Request Register (Write Only)
     * |        |          |Set this bit to 1 to generate a software request to PDMA [n].
     * |        |          |0 = No effect.
     * |        |          |1 = Generate a software request.
     * |        |          |Note1: User can read PDMA_TRGSTS register to know which channel is on active
     * |        |          |Active flag may be triggered by software request or peripheral request.
     * |        |          |Note2: If user does not enable corresponding PDMA channel, the software request will be ignored.
     * |[9]     |SWREQ9    |PDMA Channel N Software Request Register (Write Only)
     * |        |          |Set this bit to 1 to generate a software request to PDMA [n].
     * |        |          |0 = No effect.
     * |        |          |1 = Generate a software request.
     * |        |          |Note1: User can read PDMA_TRGSTS register to know which channel is on active
     * |        |          |Active flag may be triggered by software request or peripheral request.
     * |        |          |Note2: If user does not enable corresponding PDMA channel, the software request will be ignored.
     * @var PDMA_T::TRGSTS
     * Offset: 0x40C  PDMA Channel Request Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |REQSTS0   |PDMA Channel N Request Status (Read Only)
     * |        |          |This flag indicates whether channel[n] have a request or not, no matter request from software or peripheral
     * |        |          |When PDMA controller finishes channel transfer, this bit will be cleared automatically.
     * |        |          |0 = PDMA Channel n has no request.
     * |        |          |1 = PDMA Channel n has a request.
     * |        |          |Note: If user pauses or resets each PDMA transfer by setting PDMA_PAUSE or PDMA_RESET register respectively, this bit will be cleared automatically after finishing current transfer.
     * |[1]     |REQSTS1   |PDMA Channel N Request Status (Read Only)
     * |        |          |This flag indicates whether channel[n] have a request or not, no matter request from software or peripheral
     * |        |          |When PDMA controller finishes channel transfer, this bit will be cleared automatically.
     * |        |          |0 = PDMA Channel n has no request.
     * |        |          |1 = PDMA Channel n has a request.
     * |        |          |Note: If user pauses or resets each PDMA transfer by setting PDMA_PAUSE or PDMA_RESET register respectively, this bit will be cleared automatically after finishing current transfer.
     * |[2]     |REQSTS2   |PDMA Channel N Request Status (Read Only)
     * |        |          |This flag indicates whether channel[n] have a request or not, no matter request from software or peripheral
     * |        |          |When PDMA controller finishes channel transfer, this bit will be cleared automatically.
     * |        |          |0 = PDMA Channel n has no request.
     * |        |          |1 = PDMA Channel n has a request.
     * |        |          |Note: If user pauses or resets each PDMA transfer by setting PDMA_PAUSE or PDMA_RESET register respectively, this bit will be cleared automatically after finishing current transfer.
     * |[3]     |REQSTS3   |PDMA Channel N Request Status (Read Only)
     * |        |          |This flag indicates whether channel[n] have a request or not, no matter request from software or peripheral
     * |        |          |When PDMA controller finishes channel transfer, this bit will be cleared automatically.
     * |        |          |0 = PDMA Channel n has no request.
     * |        |          |1 = PDMA Channel n has a request.
     * |        |          |Note: If user pauses or resets each PDMA transfer by setting PDMA_PAUSE or PDMA_RESET register respectively, this bit will be cleared automatically after finishing current transfer.
     * |[4]     |REQSTS4   |PDMA Channel N Request Status (Read Only)
     * |        |          |This flag indicates whether channel[n] have a request or not, no matter request from software or peripheral
     * |        |          |When PDMA controller finishes channel transfer, this bit will be cleared automatically.
     * |        |          |0 = PDMA Channel n has no request.
     * |        |          |1 = PDMA Channel n has a request.
     * |        |          |Note: If user pauses or resets each PDMA transfer by setting PDMA_PAUSE or PDMA_RESET register respectively, this bit will be cleared automatically after finishing current transfer.
     * |[5]     |REQSTS5   |PDMA Channel N Request Status (Read Only)
     * |        |          |This flag indicates whether channel[n] have a request or not, no matter request from software or peripheral
     * |        |          |When PDMA controller finishes channel transfer, this bit will be cleared automatically.
     * |        |          |0 = PDMA Channel n has no request.
     * |        |          |1 = PDMA Channel n has a request.
     * |        |          |Note: If user pauses or resets each PDMA transfer by setting PDMA_PAUSE or PDMA_RESET register respectively, this bit will be cleared automatically after finishing current transfer.
     * |[6]     |REQSTS6   |PDMA Channel N Request Status (Read Only)
     * |        |          |This flag indicates whether channel[n] have a request or not, no matter request from software or peripheral
     * |        |          |When PDMA controller finishes channel transfer, this bit will be cleared automatically.
     * |        |          |0 = PDMA Channel n has no request.
     * |        |          |1 = PDMA Channel n has a request.
     * |        |          |Note: If user pauses or resets each PDMA transfer by setting PDMA_PAUSE or PDMA_RESET register respectively, this bit will be cleared automatically after finishing current transfer.
     * |[7]     |REQSTS7   |PDMA Channel N Request Status (Read Only)
     * |        |          |This flag indicates whether channel[n] have a request or not, no matter request from software or peripheral
     * |        |          |When PDMA controller finishes channel transfer, this bit will be cleared automatically.
     * |        |          |0 = PDMA Channel n has no request.
     * |        |          |1 = PDMA Channel n has a request.
     * |        |          |Note: If user pauses or resets each PDMA transfer by setting PDMA_PAUSE or PDMA_RESET register respectively, this bit will be cleared automatically after finishing current transfer.
     * |[8]     |REQSTS8   |PDMA Channel N Request Status (Read Only)
     * |        |          |This flag indicates whether channel[n] have a request or not, no matter request from software or peripheral
     * |        |          |When PDMA controller finishes channel transfer, this bit will be cleared automatically.
     * |        |          |0 = PDMA Channel n has no request.
     * |        |          |1 = PDMA Channel n has a request.
     * |        |          |Note: If user pauses or resets each PDMA transfer by setting PDMA_PAUSE or PDMA_RESET register respectively, this bit will be cleared automatically after finishing current transfer.
     * |[9]     |REQSTS9   |PDMA Channel N Request Status (Read Only)
     * |        |          |This flag indicates whether channel[n] have a request or not, no matter request from software or peripheral
     * |        |          |When PDMA controller finishes channel transfer, this bit will be cleared automatically.
     * |        |          |0 = PDMA Channel n has no request.
     * |        |          |1 = PDMA Channel n has a request.
     * |        |          |Note: If user pauses or resets each PDMA transfer by setting PDMA_PAUSE or PDMA_RESET register respectively, this bit will be cleared automatically after finishing current transfer.
     * @var PDMA_T::PRISET
     * Offset: 0x410  PDMA Fixed Priority Setting Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |FPRISET0  |PDMA Channel N Fixed Priority Setting Register
     * |        |          |Set this bit to 1 to enable fixed priority level
     * |        |          |The fixed priority channel has higher priority than round-robin priority channel
     * |        |          |If multiple channels are set as the same priority, the higher number of channels have higher priority.
     * |        |          |Write Operation:
     * |        |          |0 = No effect.
     * |        |          |1 = Set PDMA channel [n] to fixed priority channel.
     * |        |          |Read Operation:
     * |        |          |0 = Corresponding PDMA channel is round-robin priority.
     * |        |          |1 = Corresponding PDMA channel is fixed priority.
     * |        |          |Note: This field only set to fixed priority, clear fixed priority use PDMA_PRICLR register.
     * |[1]     |FPRISET1  |PDMA Channel N Fixed Priority Setting Register
     * |        |          |Set this bit to 1 to enable fixed priority level
     * |        |          |The fixed priority channel has higher priority than round-robin priority channel
     * |        |          |If multiple channels are set as the same priority, the higher number of channels have higher priority.
     * |        |          |Write Operation:
     * |        |          |0 = No effect.
     * |        |          |1 = Set PDMA channel [n] to fixed priority channel.
     * |        |          |Read Operation:
     * |        |          |0 = Corresponding PDMA channel is round-robin priority.
     * |        |          |1 = Corresponding PDMA channel is fixed priority.
     * |        |          |Note: This field only set to fixed priority, clear fixed priority use PDMA_PRICLR register.
     * |[2]     |FPRISET2  |PDMA Channel N Fixed Priority Setting Register
     * |        |          |Set this bit to 1 to enable fixed priority level
     * |        |          |The fixed priority channel has higher priority than round-robin priority channel
     * |        |          |If multiple channels are set as the same priority, the higher number of channels have higher priority.
     * |        |          |Write Operation:
     * |        |          |0 = No effect.
     * |        |          |1 = Set PDMA channel [n] to fixed priority channel.
     * |        |          |Read Operation:
     * |        |          |0 = Corresponding PDMA channel is round-robin priority.
     * |        |          |1 = Corresponding PDMA channel is fixed priority.
     * |        |          |Note: This field only set to fixed priority, clear fixed priority use PDMA_PRICLR register.
     * |[3]     |FPRISET3  |PDMA Channel N Fixed Priority Setting Register
     * |        |          |Set this bit to 1 to enable fixed priority level
     * |        |          |The fixed priority channel has higher priority than round-robin priority channel
     * |        |          |If multiple channels are set as the same priority, the higher number of channels have higher priority.
     * |        |          |Write Operation:
     * |        |          |0 = No effect.
     * |        |          |1 = Set PDMA channel [n] to fixed priority channel.
     * |        |          |Read Operation:
     * |        |          |0 = Corresponding PDMA channel is round-robin priority.
     * |        |          |1 = Corresponding PDMA channel is fixed priority.
     * |        |          |Note: This field only set to fixed priority, clear fixed priority use PDMA_PRICLR register.
     * |[4]     |FPRISET4  |PDMA Channel N Fixed Priority Setting Register
     * |        |          |Set this bit to 1 to enable fixed priority level
     * |        |          |The fixed priority channel has higher priority than round-robin priority channel
     * |        |          |If multiple channels are set as the same priority, the higher number of channels have higher priority.
     * |        |          |Write Operation:
     * |        |          |0 = No effect.
     * |        |          |1 = Set PDMA channel [n] to fixed priority channel.
     * |        |          |Read Operation:
     * |        |          |0 = Corresponding PDMA channel is round-robin priority.
     * |        |          |1 = Corresponding PDMA channel is fixed priority.
     * |        |          |Note: This field only set to fixed priority, clear fixed priority use PDMA_PRICLR register.
     * |[5]     |FPRISET5  |PDMA Channel N Fixed Priority Setting Register
     * |        |          |Set this bit to 1 to enable fixed priority level
     * |        |          |The fixed priority channel has higher priority than round-robin priority channel
     * |        |          |If multiple channels are set as the same priority, the higher number of channels have higher priority.
     * |        |          |Write Operation:
     * |        |          |0 = No effect.
     * |        |          |1 = Set PDMA channel [n] to fixed priority channel.
     * |        |          |Read Operation:
     * |        |          |0 = Corresponding PDMA channel is round-robin priority.
     * |        |          |1 = Corresponding PDMA channel is fixed priority.
     * |        |          |Note: This field only set to fixed priority, clear fixed priority use PDMA_PRICLR register.
     * |[6]     |FPRISET6  |PDMA Channel N Fixed Priority Setting Register
     * |        |          |Set this bit to 1 to enable fixed priority level
     * |        |          |The fixed priority channel has higher priority than round-robin priority channel
     * |        |          |If multiple channels are set as the same priority, the higher number of channels have higher priority.
     * |        |          |Write Operation:
     * |        |          |0 = No effect.
     * |        |          |1 = Set PDMA channel [n] to fixed priority channel.
     * |        |          |Read Operation:
     * |        |          |0 = Corresponding PDMA channel is round-robin priority.
     * |        |          |1 = Corresponding PDMA channel is fixed priority.
     * |        |          |Note: This field only set to fixed priority, clear fixed priority use PDMA_PRICLR register.
     * |[7]     |FPRISET7  |PDMA Channel N Fixed Priority Setting Register
     * |        |          |Set this bit to 1 to enable fixed priority level
     * |        |          |The fixed priority channel has higher priority than round-robin priority channel
     * |        |          |If multiple channels are set as the same priority, the higher number of channels have higher priority.
     * |        |          |Write Operation:
     * |        |          |0 = No effect.
     * |        |          |1 = Set PDMA channel [n] to fixed priority channel.
     * |        |          |Read Operation:
     * |        |          |0 = Corresponding PDMA channel is round-robin priority.
     * |        |          |1 = Corresponding PDMA channel is fixed priority.
     * |        |          |Note: This field only set to fixed priority, clear fixed priority use PDMA_PRICLR register.
     * |[8]     |FPRISET8  |PDMA Channel N Fixed Priority Setting Register
     * |        |          |Set this bit to 1 to enable fixed priority level
     * |        |          |The fixed priority channel has higher priority than round-robin priority channel
     * |        |          |If multiple channels are set as the same priority, the higher number of channels have higher priority.
     * |        |          |Write Operation:
     * |        |          |0 = No effect.
     * |        |          |1 = Set PDMA channel [n] to fixed priority channel.
     * |        |          |Read Operation:
     * |        |          |0 = Corresponding PDMA channel is round-robin priority.
     * |        |          |1 = Corresponding PDMA channel is fixed priority.
     * |        |          |Note: This field only set to fixed priority, clear fixed priority use PDMA_PRICLR register.
     * |[9]     |FPRISET9  |PDMA Channel N Fixed Priority Setting Register
     * |        |          |Set this bit to 1 to enable fixed priority level
     * |        |          |The fixed priority channel has higher priority than round-robin priority channel
     * |        |          |If multiple channels are set as the same priority, the higher number of channels have higher priority.
     * |        |          |Write Operation:
     * |        |          |0 = No effect.
     * |        |          |1 = Set PDMA channel [n] to fixed priority channel.
     * |        |          |Read Operation:
     * |        |          |0 = Corresponding PDMA channel is round-robin priority.
     * |        |          |1 = Corresponding PDMA channel is fixed priority.
     * |        |          |Note: This field only set to fixed priority, clear fixed priority use PDMA_PRICLR register.
     * @var PDMA_T::PRICLR
     * Offset: 0x414  PDMA Fixed Priority Clear Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |FPRICLR0  |PDMA Channel N Fixed Priority Clear Register (Write Only)
     * |        |          |Set this bit to 1 to clear fixed priority level.
     * |        |          |0 = No effect.
     * |        |          |1 = Clear PDMA channel [n] fixed priority setting.
     * |        |          |Note: User can read PDMA_PRISET register to know the channel priority.
     * |[1]     |FPRICLR1  |PDMA Channel N Fixed Priority Clear Register (Write Only)
     * |        |          |Set this bit to 1 to clear fixed priority level.
     * |        |          |0 = No effect.
     * |        |          |1 = Clear PDMA channel [n] fixed priority setting.
     * |        |          |Note: User can read PDMA_PRISET register to know the channel priority.
     * |[2]     |FPRICLR2  |PDMA Channel N Fixed Priority Clear Register (Write Only)
     * |        |          |Set this bit to 1 to clear fixed priority level.
     * |        |          |0 = No effect.
     * |        |          |1 = Clear PDMA channel [n] fixed priority setting.
     * |        |          |Note: User can read PDMA_PRISET register to know the channel priority.
     * |[3]     |FPRICLR3  |PDMA Channel N Fixed Priority Clear Register (Write Only)
     * |        |          |Set this bit to 1 to clear fixed priority level.
     * |        |          |0 = No effect.
     * |        |          |1 = Clear PDMA channel [n] fixed priority setting.
     * |        |          |Note: User can read PDMA_PRISET register to know the channel priority.
     * |[4]     |FPRICLR4  |PDMA Channel N Fixed Priority Clear Register (Write Only)
     * |        |          |Set this bit to 1 to clear fixed priority level.
     * |        |          |0 = No effect.
     * |        |          |1 = Clear PDMA channel [n] fixed priority setting.
     * |        |          |Note: User can read PDMA_PRISET register to know the channel priority.
     * |[5]     |FPRICLR5  |PDMA Channel N Fixed Priority Clear Register (Write Only)
     * |        |          |Set this bit to 1 to clear fixed priority level.
     * |        |          |0 = No effect.
     * |        |          |1 = Clear PDMA channel [n] fixed priority setting.
     * |        |          |Note: User can read PDMA_PRISET register to know the channel priority.
     * |[6]     |FPRICLR6  |PDMA Channel N Fixed Priority Clear Register (Write Only)
     * |        |          |Set this bit to 1 to clear fixed priority level.
     * |        |          |0 = No effect.
     * |        |          |1 = Clear PDMA channel [n] fixed priority setting.
     * |        |          |Note: User can read PDMA_PRISET register to know the channel priority.
     * |[7]     |FPRICLR7  |PDMA Channel N Fixed Priority Clear Register (Write Only)
     * |        |          |Set this bit to 1 to clear fixed priority level.
     * |        |          |0 = No effect.
     * |        |          |1 = Clear PDMA channel [n] fixed priority setting.
     * |        |          |Note: User can read PDMA_PRISET register to know the channel priority.
     * |[8]     |FPRICLR8  |PDMA Channel N Fixed Priority Clear Register (Write Only)
     * |        |          |Set this bit to 1 to clear fixed priority level.
     * |        |          |0 = No effect.
     * |        |          |1 = Clear PDMA channel [n] fixed priority setting.
     * |        |          |Note: User can read PDMA_PRISET register to know the channel priority.
     * |[9]     |FPRICLR9  |PDMA Channel N Fixed Priority Clear Register (Write Only)
     * |        |          |Set this bit to 1 to clear fixed priority level.
     * |        |          |0 = No effect.
     * |        |          |1 = Clear PDMA channel [n] fixed priority setting.
     * |        |          |Note: User can read PDMA_PRISET register to know the channel priority.
     * @var PDMA_T::INTEN
     * Offset: 0x418  PDMA Interrupt Enable Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |INTEN0    |PDMA Channel N Interrupt Enable Register
     * |        |          |This field is used for enabling PDMA channel[n] interrupt.
     * |        |          |0 = PDMA channel n interrupt Disabled.
     * |        |          |1 = PDMA channel n interrupt Enabled.
     * |[1]     |INTEN1    |PDMA Channel N Interrupt Enable Register
     * |        |          |This field is used for enabling PDMA channel[n] interrupt.
     * |        |          |0 = PDMA channel n interrupt Disabled.
     * |        |          |1 = PDMA channel n interrupt Enabled.
     * |[2]     |INTEN2    |PDMA Channel N Interrupt Enable Register
     * |        |          |This field is used for enabling PDMA channel[n] interrupt.
     * |        |          |0 = PDMA channel n interrupt Disabled.
     * |        |          |1 = PDMA channel n interrupt Enabled.
     * |[3]     |INTEN3    |PDMA Channel N Interrupt Enable Register
     * |        |          |This field is used for enabling PDMA channel[n] interrupt.
     * |        |          |0 = PDMA channel n interrupt Disabled.
     * |        |          |1 = PDMA channel n interrupt Enabled.
     * |[4]     |INTEN4    |PDMA Channel N Interrupt Enable Register
     * |        |          |This field is used for enabling PDMA channel[n] interrupt.
     * |        |          |0 = PDMA channel n interrupt Disabled.
     * |        |          |1 = PDMA channel n interrupt Enabled.
     * |[5]     |INTEN5    |PDMA Channel N Interrupt Enable Register
     * |        |          |This field is used for enabling PDMA channel[n] interrupt.
     * |        |          |0 = PDMA channel n interrupt Disabled.
     * |        |          |1 = PDMA channel n interrupt Enabled.
     * |[6]     |INTEN6    |PDMA Channel N Interrupt Enable Register
     * |        |          |This field is used for enabling PDMA channel[n] interrupt.
     * |        |          |0 = PDMA channel n interrupt Disabled.
     * |        |          |1 = PDMA channel n interrupt Enabled.
     * |[7]     |INTEN7    |PDMA Channel N Interrupt Enable Register
     * |        |          |This field is used for enabling PDMA channel[n] interrupt.
     * |        |          |0 = PDMA channel n interrupt Disabled.
     * |        |          |1 = PDMA channel n interrupt Enabled.
     * |[8]     |INTEN8    |PDMA Channel N Interrupt Enable Register
     * |        |          |This field is used for enabling PDMA channel[n] interrupt.
     * |        |          |0 = PDMA channel n interrupt Disabled.
     * |        |          |1 = PDMA channel n interrupt Enabled.
     * |[9]     |INTEN9    |PDMA Channel N Interrupt Enable Register
     * |        |          |This field is used for enabling PDMA channel[n] interrupt.
     * |        |          |0 = PDMA channel n interrupt Disabled.
     * |        |          |1 = PDMA channel n interrupt Enabled.
     * @var PDMA_T::INTSTS
     * Offset: 0x41C  PDMA Interrupt Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ABTIF     |PDMA Read/Write Target Abort Interrupt Flag (Read Only)
     * |        |          |This bit indicates that PDMA has target abort error; Software can read PDMA_ABTSTS register to find which channel has target abort error.
     * |        |          |0 = No AHB bus ERROR response received.
     * |        |          |1 = AHB bus ERROR response received.
     * |[1]     |TDIF      |Transfer Done Interrupt Flag (Read Only)
     * |        |          |This bit indicates that PDMA controller has finished transmission; User can read PDMA_TDSTS register to indicate which channel finished transfer.
     * |        |          |0 = Not finished yet.
     * |        |          |1 = PDMA channel has finished transmission.
     * |[2]     |TEIF      |Table Empty Interrupt Flag (Read Only)
     * |        |          |This bit indicates PDMA channel scatter-gather table is empty
     * |        |          |User can read PDMA_SCATSTS register to indicate which channel scatter-gather table is empty.
     * |        |          |0 = PDMA channel scatter-gather table is not empty.
     * |        |          |1 = PDMA channel scatter-gather table is empty.
     * |[8]     |REQTOF0   |PDMA Channel N Request Time-out Flag for Each Channel [N]
     * |        |          |This flag indicates that PDMA controller has waited peripheral request for a period defined by PDMA_TOC0, user can write 1 to clear these bits.
     * |        |          |0 = No request time-out.
     * |        |          |1 = Peripheral request time-out.
     * |[9]     |REQTOF1   |PDMA Channel N Request Time-out Flag for Each Channel [N]
     * |        |          |This flag indicates that PDMA controller has waited peripheral request for a period defined by PDMA_TOC10, user can write 1 to clear these bits.
     * |        |          |0 = No request time-out.
     * |        |          |1 = Peripheral request time-out.
     * @var PDMA_T::ABTSTS
     * Offset: 0x420  PDMA Channel Read/Write Target Abort Flag Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ABTIF0    |PDMA Channel 0 Read/Write Target Abort Interrupt Status Flag
     * |        |          |This bit indicates which PDMA controller has target abort error; User can write 1 to clear these bits.
     * |        |          |0 = No AHB bus ERROR response received when channel n transfer.
     * |        |          |1 = AHB bus ERROR response received when channel n transfer.
     * |[1]     |ABTIF1    |PDMA Channel 1 Read/Write Target Abort Interrupt Status Flag
     * |        |          |This bit indicates which PDMA controller has target abort error; User can write 1 to clear these bits.
     * |        |          |0 = No AHB bus ERROR response received when channel n transfer.
     * |        |          |1 = AHB bus ERROR response received when channel n transfer.
     * |[2]     |ABTIF2    |PDMA Channel 2 Read/Write Target Abort Interrupt Status Flag
     * |        |          |This bit indicates which PDMA controller has target abort error; User can write 1 to clear these bits.
     * |        |          |0 = No AHB bus ERROR response received when channel n transfer.
     * |        |          |1 = AHB bus ERROR response received when channel n transfer.
     * |[3]     |ABTIF3    |PDMA Channel 3 Read/Write Target Abort Interrupt Status Flag
     * |        |          |This bit indicates which PDMA controller has target abort error; User can write 1 to clear these bits.
     * |        |          |0 = No AHB bus ERROR response received when channel n transfer.
     * |        |          |1 = AHB bus ERROR response received when channel n transfer.
     * |[4]     |ABTIF4    |PDMA Channel 4 Read/Write Target Abort Interrupt Status Flag
     * |        |          |This bit indicates which PDMA controller has target abort error; User can write 1 to clear these bits.
     * |        |          |0 = No AHB bus ERROR response received when channel n transfer.
     * |        |          |1 = AHB bus ERROR response received when channel n transfer.
     * |[5]     |ABTIF5    |PDMA Channel 5 Read/Write Target Abort Interrupt Status Flag
     * |        |          |This bit indicates which PDMA controller has target abort error; User can write 1 to clear these bits.
     * |        |          |0 = No AHB bus ERROR response received when channel n transfer.
     * |        |          |1 = AHB bus ERROR response received when channel n transfer.
     * |[6]     |ABTIF6    |PDMA Channel 6 Read/Write Target Abort Interrupt Status Flag
     * |        |          |This bit indicates which PDMA controller has target abort error; User can write 1 to clear these bits.
     * |        |          |0 = No AHB bus ERROR response received when channel n transfer.
     * |        |          |1 = AHB bus ERROR response received when channel n transfer.
     * |[7]     |ABTIF7    |PDMA Channel 7 Read/Write Target Abort Interrupt Status Flag
     * |        |          |This bit indicates which PDMA controller has target abort error; User can write 1 to clear these bits.
     * |        |          |0 = No AHB bus ERROR response received when channel n transfer.
     * |        |          |1 = AHB bus ERROR response received when channel n transfer.
     * |[8]     |ABTIF8    |PDMA Channel 8 Read/Write Target Abort Interrupt Status Flag
     * |        |          |This bit indicates which PDMA controller has target abort error; User can write 1 to clear these bits.
     * |        |          |0 = No AHB bus ERROR response received when channel n transfer.
     * |        |          |1 = AHB bus ERROR response received when channel n transfer.
     * |[9]     |ABTIF9    |PDMA Channel 9 Read/Write Target Abort Interrupt Status Flag
     * |        |          |This bit indicates which PDMA controller has target abort error; User can write 1 to clear these bits.
     * |        |          |0 = No AHB bus ERROR response received when channel n transfer.
     * |        |          |1 = AHB bus ERROR response received when channel n transfer.
     * @var PDMA_T::TDSTS
     * Offset: 0x424  PDMA Channel Transfer Done Flag Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |TDIF0     |PDMA Channel 0 Transfer Done Flag Register
     * |        |          |This bit indicates whether PDMA controller channel transfer has been finished or not, user can write 1 to clear these bits.
     * |        |          |0 = PDMA channel transfer has not finished.
     * |        |          |1 = PDMA channel has finished transmission.
     * |[1]     |TDIF1     |PDMA Channel 1 Transfer Done Flag Register
     * |        |          |This bit indicates whether PDMA controller channel transfer has been finished or not, user can write 1 to clear these bits.
     * |        |          |0 = PDMA channel transfer has not finished.
     * |        |          |1 = PDMA channel has finished transmission.
     * |[2]     |TDIF2     |PDMA Channel 2 Transfer Done Flag Register
     * |        |          |This bit indicates whether PDMA controller channel transfer has been finished or not, user can write 1 to clear these bits.
     * |        |          |0 = PDMA channel transfer has not finished.
     * |        |          |1 = PDMA channel has finished transmission.
     * |[3]     |TDIF3     |PDMA Channel 3 Transfer Done Flag Register
     * |        |          |This bit indicates whether PDMA controller channel transfer has been finished or not, user can write 1 to clear these bits.
     * |        |          |0 = PDMA channel transfer has not finished.
     * |        |          |1 = PDMA channel has finished transmission.
     * |[4]     |TDIF4     |PDMA Channel 4 Transfer Done Flag Register
     * |        |          |This bit indicates whether PDMA controller channel transfer has been finished or not, user can write 1 to clear these bits.
     * |        |          |0 = PDMA channel transfer has not finished.
     * |        |          |1 = PDMA channel has finished transmission.
     * |[5]     |TDIF5     |PDMA Channel 5 Transfer Done Flag Register
     * |        |          |This bit indicates whether PDMA controller channel transfer has been finished or not, user can write 1 to clear these bits.
     * |        |          |0 = PDMA channel transfer has not finished.
     * |        |          |1 = PDMA channel has finished transmission.
     * |[6]     |TDIF6     |PDMA Channel 6 Transfer Done Flag Register
     * |        |          |This bit indicates whether PDMA controller channel transfer has been finished or not, user can write 1 to clear these bits.
     * |        |          |0 = PDMA channel transfer has not finished.
     * |        |          |1 = PDMA channel has finished transmission.
     * |[7]     |TDIF7     |PDMA Channel 7 Transfer Done Flag Register
     * |        |          |This bit indicates whether PDMA controller channel transfer has been finished or not, user can write 1 to clear these bits.
     * |        |          |0 = PDMA channel transfer has not finished.
     * |        |          |1 = PDMA channel has finished transmission.
     * |[8]     |TDIF8     |PDMA Channel 8 Transfer Done Flag Register
     * |        |          |This bit indicates whether PDMA controller channel transfer has been finished or not, user can write 1 to clear these bits.
     * |        |          |0 = PDMA channel transfer has not finished.
     * |        |          |1 = PDMA channel has finished transmission.
     * |[9]     |TDIF9     |PDMA Channel 9 Transfer Done Flag Register
     * |        |          |This bit indicates whether PDMA controller channel transfer has been finished or not, user can write 1 to clear these bits.
     * |        |          |0 = PDMA channel transfer has not finished.
     * |        |          |1 = PDMA channel has finished transmission.
     * @var PDMA_T::SCATSTS
     * Offset: 0x428  PDMA Scatter-Gather Table Empty Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |TEMPTYF0  |Table Empty Flag Register
     * |        |          |This bit indicates which PDMA channel table is empty when channel have a request , no matter request from software or peripheral, but operation mode of channel descriptor table is idle state, or channel has finished current transfer and next table operation mode is idle state for PDMA Scatter-Gather mode
     * |        |          |User can write 1 to clear these bits.
     * |        |          |0 = PDMA channel scatter-gather table is not empty.
     * |        |          |1 = PDMA channel scatter-gather table is empty and PDMA SWREQ has be set.
     * |[1]     |TEMPTYF1  |Table Empty Flag Register
     * |        |          |This bit indicates which PDMA channel table is empty when channel have a request , no matter request from software or peripheral, but operation mode of channel descriptor table is idle state, or channel has finished current transfer and next table operation mode is idle state for PDMA Scatter-Gather mode
     * |        |          |User can write 1 to clear these bits.
     * |        |          |0 = PDMA channel scatter-gather table is not empty.
     * |        |          |1 = PDMA channel scatter-gather table is empty and PDMA SWREQ has be set.
     * |[2]     |TEMPTYF2  |Table Empty Flag Register
     * |        |          |This bit indicates which PDMA channel table is empty when channel have a request , no matter request from software or peripheral, but operation mode of channel descriptor table is idle state, or channel has finished current transfer and next table operation mode is idle state for PDMA Scatter-Gather mode
     * |        |          |User can write 1 to clear these bits.
     * |        |          |0 = PDMA channel scatter-gather table is not empty.
     * |        |          |1 = PDMA channel scatter-gather table is empty and PDMA SWREQ has be set.
     * |[3]     |TEMPTYF3  |Table Empty Flag Register
     * |        |          |This bit indicates which PDMA channel table is empty when channel have a request , no matter request from software or peripheral, but operation mode of channel descriptor table is idle state, or channel has finished current transfer and next table operation mode is idle state for PDMA Scatter-Gather mode
     * |        |          |User can write 1 to clear these bits.
     * |        |          |0 = PDMA channel scatter-gather table is not empty.
     * |        |          |1 = PDMA channel scatter-gather table is empty and PDMA SWREQ has be set.
     * |[4]     |TEMPTYF4  |Table Empty Flag Register
     * |        |          |This bit indicates which PDMA channel table is empty when channel have a request , no matter request from software or peripheral, but operation mode of channel descriptor table is idle state, or channel has finished current transfer and next table operation mode is idle state for PDMA Scatter-Gather mode
     * |        |          |User can write 1 to clear these bits.
     * |        |          |0 = PDMA channel scatter-gather table is not empty.
     * |        |          |1 = PDMA channel scatter-gather table is empty and PDMA SWREQ has be set.
     * |[5]     |TEMPTYF5  |Table Empty Flag Register
     * |        |          |This bit indicates which PDMA channel table is empty when channel have a request , no matter request from software or peripheral, but operation mode of channel descriptor table is idle state, or channel has finished current transfer and next table operation mode is idle state for PDMA Scatter-Gather mode
     * |        |          |User can write 1 to clear these bits.
     * |        |          |0 = PDMA channel scatter-gather table is not empty.
     * |        |          |1 = PDMA channel scatter-gather table is empty and PDMA SWREQ has be set.
     * |[6]     |TEMPTYF6  |Table Empty Flag Register
     * |        |          |This bit indicates which PDMA channel table is empty when channel have a request , no matter request from software or peripheral, but operation mode of channel descriptor table is idle state, or channel has finished current transfer and next table operation mode is idle state for PDMA Scatter-Gather mode
     * |        |          |User can write 1 to clear these bits.
     * |        |          |0 = PDMA channel scatter-gather table is not empty.
     * |        |          |1 = PDMA channel scatter-gather table is empty and PDMA SWREQ has be set.
     * |[7]     |TEMPTYF7  |Table Empty Flag Register
     * |        |          |This bit indicates which PDMA channel table is empty when channel have a request , no matter request from software or peripheral, but operation mode of channel descriptor table is idle state, or channel has finished current transfer and next table operation mode is idle state for PDMA Scatter-Gather mode
     * |        |          |User can write 1 to clear these bits.
     * |        |          |0 = PDMA channel scatter-gather table is not empty.
     * |        |          |1 = PDMA channel scatter-gather table is empty and PDMA SWREQ has be set.
     * |[8]     |TEMPTYF8  |Table Empty Flag Register
     * |        |          |This bit indicates which PDMA channel table is empty when channel have a request , no matter request from software or peripheral, but operation mode of channel descriptor table is idle state, or channel has finished current transfer and next table operation mode is idle state for PDMA Scatter-Gather mode
     * |        |          |User can write 1 to clear these bits.
     * |        |          |0 = PDMA channel scatter-gather table is not empty.
     * |        |          |1 = PDMA channel scatter-gather table is empty and PDMA SWREQ has be set.
     * |[9]     |TEMPTYF9  |Table Empty Flag Register
     * |        |          |This bit indicates which PDMA channel table is empty when channel have a request , no matter request from software or peripheral, but operation mode of channel descriptor table is idle state, or channel has finished current transfer and next table operation mode is idle state for PDMA Scatter-Gather mode
     * |        |          |User can write 1 to clear these bits.
     * |        |          |0 = PDMA channel scatter-gather table is not empty.
     * |        |          |1 = PDMA channel scatter-gather table is empty and PDMA SWREQ has be set.
     * @var PDMA_T::TACTSTS
     * Offset: 0x42C  PDMA Transfer Active Flag Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |TXACTF0   |PDMA Channel 0 Transfer on Active Flag Register (Read Only)
     * |        |          |This bit indicates which PDMA channel is in active.
     * |        |          |0 = PDMA channel is not finished.
     * |        |          |1 = PDMA channel is active.
     * |[1]     |TXACTF1   |PDMA Channel 1 Transfer on Active Flag Register (Read Only)
     * |        |          |This bit indicates which PDMA channel is in active.
     * |        |          |0 = PDMA channel is not finished.
     * |        |          |1 = PDMA channel is active.
     * |[2]     |TXACTF2   |PDMA Channel 2 Transfer on Active Flag Register (Read Only)
     * |        |          |This bit indicates which PDMA channel is in active.
     * |        |          |0 = PDMA channel is not finished.
     * |        |          |1 = PDMA channel is active.
     * |[3]     |TXACTF3   |PDMA Channel 3 Transfer on Active Flag Register (Read Only)
     * |        |          |This bit indicates which PDMA channel is in active.
     * |        |          |0 = PDMA channel is not finished.
     * |        |          |1 = PDMA channel is active.
     * |[4]     |TXACTF4   |PDMA Channel 4 Transfer on Active Flag Register (Read Only)
     * |        |          |This bit indicates which PDMA channel is in active.
     * |        |          |0 = PDMA channel is not finished.
     * |        |          |1 = PDMA channel is active.
     * |[5]     |TXACTF5   |PDMA Channel 5 Transfer on Active Flag Register (Read Only)
     * |        |          |This bit indicates which PDMA channel is in active.
     * |        |          |0 = PDMA channel is not finished.
     * |        |          |1 = PDMA channel is active.
     * |[6]     |TXACTF6   |PDMA Channel 6 Transfer on Active Flag Register (Read Only)
     * |        |          |This bit indicates which PDMA channel is in active.
     * |        |          |0 = PDMA channel is not finished.
     * |        |          |1 = PDMA channel is active.
     * |[7]     |TXACTF7   |PDMA Channel 7 Transfer on Active Flag Register (Read Only)
     * |        |          |This bit indicates which PDMA channel is in active.
     * |        |          |0 = PDMA channel is not finished.
     * |        |          |1 = PDMA channel is active.
     * |[8]     |TXACTF8   |PDMA Channel 8 Transfer on Active Flag Register (Read Only)
     * |        |          |This bit indicates which PDMA channel is in active.
     * |        |          |0 = PDMA channel is not finished.
     * |        |          |1 = PDMA channel is active.
     * |[9]     |TXACTF9   |PDMA Channel 9 Transfer on Active Flag Register (Read Only)
     * |        |          |This bit indicates which PDMA channel is in active.
     * |        |          |0 = PDMA channel is not finished.
     * |        |          |1 = PDMA channel is active.
     * @var PDMA_T::TOUTPSC
     * Offset: 0x430  PDMA Time-out Prescaler Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[2:0]   |TOUTPSC0  |PDMA Channel 0 Time-out Clock Source Prescaler Bits
     * |        |          |000 = PDMA channel 0 time-out clock source is HCLK/2^8.
     * |        |          |001 = PDMA channel 0 time-out clock source is HCLK/2^9.
     * |        |          |010 = PDMA channel 0 time-out clock source is HCLK/2^10.
     * |        |          |011 = PDMA channel 0 time-out clock source is HCLK/2^11.
     * |        |          |100 = PDMA channel 0 time-out clock source is HCLK/2^12.
     * |        |          |101 = PDMA channel 0 time-out clock source is HCLK/2^13.
     * |        |          |110 = PDMA channel 0 time-out clock source is HCLK/2^14.
     * |        |          |111 = PDMA channel 0 time-out clock source is HCLK/2^15.
     * |[6:4]   |TOUTPSC1  |PDMA Channel 1 Time-out Clock Source Prescaler Bits
     * |        |          |000 = PDMA channel 1 time-out clock source is HCLK/2^8.
     * |        |          |001 = PDMA channel 1 time-out clock source is HCLK/2^9.
     * |        |          |010 = PDMA channel 1 time-out clock source is HCLK/2^10.
     * |        |          |011 = PDMA channel 1 time-out clock source is HCLK/2^11.
     * |        |          |100 = PDMA channel 1 time-out clock source is HCLK/2^12.
     * |        |          |101 = PDMA channel 1 time-out clock source is HCLK/2^13.
     * |        |          |110 = PDMA channel 1 time-out clock source is HCLK/2^14.
     * |        |          |111 = PDMA channel 1 time-out clock source is HCLK/2^15.
     * @var PDMA_T::TOUTEN
     * Offset: 0x434  PDMA Time-out Enable Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |TOUTEN0   |PDMA Channel 0 Time-out Enable Bit
     * |        |          |0 = PDMA Channel 0 time-out function Disable.
     * |        |          |1 = PDMA Channel 0 time-out function Enable.
     * |[1]     |TOUTEN1   |PDMA Channel 1 Time-out Enable Bit
     * |        |          |0 = PDMA Channel 1 time-out function Disable.
     * |        |          |1 = PDMA Channel 1 time-out function Enable.
     * @var PDMA_T::TOUTIEN
     * Offset: 0x438  PDMA Time-out Interrupt Enable Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |TOUTIEN0  |PDMA Channel 0 Time-out Interrupt Enable Bit
     * |        |          |0 = PDMA Channel 0 time-out interrupt Disable.
     * |        |          |1 = PDMA Channel 0 time-out interrupt Enable.
     * |[1]     |TOUTIEN1  |PDMA Channel 1 Time-out Interrupt Enable Bit
     * |        |          |0 = PDMA Channel 1 time-out interrupt Disable.
     * |        |          |1 = PDMA Channel 1 time-out interrupt Enable.
     * @var PDMA_T::SCATBA
     * Offset: 0x43C  PDMA Scatter-Gather Descriptor Table Base Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:16] |SCATBA    |PDMA Scatter-gather Descriptor Table Address Register
     * |        |          |In Scatter-Gather mode, this is the base address for calculating the next link - list address
     * |        |          |The next link address equation is
     * |        |          |Next Link Address = PDMA_SCATBA + PDMA_DSCT_FIRST.
     * |        |          |Note: Only useful in Scatter-Gather mode.
     * @var PDMA_T::TOC0_1
     * Offset: 0x440  PDMA Channel 0 and Channel 1 Time-out Counter Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |TOC0      |Time-out Counter for Channel 0
     * |        |          |This controls the period of time-out function for channel 0
     * |        |          |The calculation unit is based on TOUTPSC0 (PDMA_TOUTPSC[2:0]) clock.
     * |        |          |Time-out period = (Period of time-out clock) * (16-bit TOCn),n = 0,1.
     * |[31:16] |TOC1      |Time-out Counter for Channel 1
     * |        |          |This controls the period of time-out function for channel 1
     * |        |          |The calculation unit is based on TOUTPSC1 (PDMA_TOUTPSC[5:3]) clock
     * |        |          |The example of time-out period can refer TOC0 bit description.
     * @var PDMA_T::RESET
     * Offset: 0x460  PDMA Channel Reset Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |RESET0    |PDMA Channel 0 Reset Control Register
     * |        |          |User can set this bit field to reset the PDMA channel
     * |        |          |When user sets RESETn bit, the PDMA controller will finish the on-going transfer then clear the channel enable bit CHEN(PDMA_CHCTL [n], n=0,1...9) and clear request active flag
     * |        |          |If re-enable channel after channel reset, PDMA will re-load the channel description table to execute PDMA task.
     * |        |          |0 = No effect.
     * |        |          |1 = Reset PDMA channel 0.
     * |        |          |Note: This bit will be cleared automatically after finishing reset process.
     * |[1]     |RESET1    |PDMA Channel 1 Reset Control Register
     * |        |          |User can set this bit field to reset the PDMA channel
     * |        |          |When user sets RESETn bit, the PDMA controller will finish the on-going transfer then clear the channel enable bit CHEN(PDMA_CHCTL [n], n=0,1...9)) and clear request active flag
     * |        |          |If re-enable channel after channel reset, PDMA will re-load the channel description table to execute PDMA task.
     * |        |          |0 = No effect.
     * |        |          |1 = Reset PDMA channel 1.
     * |        |          |Note: This bit will be cleared automatically after finishing reset process.
     * |[2]     |RESET2    |PDMA Channel 2 Reset Control Register
     * |        |          |User can set this bit field to reset the PDMA channel
     * |        |          |When user sets RESETn bit, the PDMA controller will finish the on-going transfer then clear the channel enable bit CHEN(PDMA_CHCTL [n], n=0,1...9)) and clear request active flag
     * |        |          |If re-enable channel after channel reset, PDMA will re-load the channel description table to execute PDMA task.
     * |        |          |0 = No effect.
     * |        |          |1 = Reset PDMA channel 2.
     * |        |          |Note: This bit will be cleared automatically after finishing reset process.
     * |[3]     |RESET3    |PDMA Channel 3 Reset Control Register
     * |        |          |User can set this bit field to reset the PDMA channel
     * |        |          |When user sets RESETn bit, the PDMA controller will finish the on-going transfer then clear the channel enable bit CHEN(PDMA_CHCTL [n], n=0,1...9)) and clear request active flag
     * |        |          |If re-enable channel after channel reset, PDMA will re-load the channel description table to execute PDMA task.
     * |        |          |0 = No effect.
     * |        |          |1 = Reset PDMA channel 3.
     * |        |          |Note: This bit will be cleared automatically after finishing reset process.
     * |[4]     |RESET4    |PDMA Channel 4 Reset Control Register
     * |        |          |User can set this bit field to reset the PDMA channel
     * |        |          |When user sets RESETn bit, the PDMA controller will finish the on-going transfer then clear the channel enable bit CHEN(PDMA_CHCTL [n], n=0,1...9)) and clear request active flag
     * |        |          |If re-enable channel after channel reset, PDMA will re-load the channel description table to execute PDMA task.
     * |        |          |0 = No effect.
     * |        |          |1 = Reset PDMA channel 4.
     * |        |          |Note: This bit will be cleared automatically after finishing reset process.
     * |[5]     |RESET5    |PDMA Channel 5 Reset Control Register
     * |        |          |User can set this bit field to reset the PDMA channel
     * |        |          |When user sets RESETn bit, the PDMA controller will finish the on-going transfer then clear the channel enable bit CHEN(PDMA_CHCTL [n], n=0,1...9)) and clear request active flag
     * |        |          |If re-enable channel after channel reset, PDMA will re-load the channel description table to execute PDMA task.
     * |        |          |0 = No effect.
     * |        |          |1 = Reset PDMA channel 5.
     * |        |          |Note: This bit will be cleared automatically after finishing reset process.
     * |[6]     |RESET6    |PDMA Channel 6 Reset Control Register
     * |        |          |User can set this bit field to reset the PDMA channel
     * |        |          |When user sets RESETn bit, the PDMA controller will finish the on-going transfer then clear the channel enable bit CHEN(PDMA_CHCTL [n], n=0,1...9)) and clear request active flag
     * |        |          |If re-enable channel after channel reset, PDMA will re-load the channel description table to execute PDMA task.
     * |        |          |0 = No effect.
     * |        |          |1 = Reset PDMA channel 6.
     * |        |          |Note: This bit will be cleared automatically after finishing reset process.
     * |[7]     |RESET7    |PDMA Channel 7 Reset Control Register
     * |        |          |User can set this bit field to reset the PDMA channel
     * |        |          |When user sets RESETn bit, the PDMA controller will finish the on-going transfer then clear the channel enable bit CHEN(PDMA_CHCTL [n], n=0,1...9)) and clear request active flag
     * |        |          |If re-enable channel after channel reset, PDMA will re-load the channel description table to execute PDMA task.
     * |        |          |0 = No effect.
     * |        |          |1 = Reset PDMA channel 7.
     * |        |          |Note: This bit will be cleared automatically after finishing reset process.
     * |[8]     |RESET8    |PDMA Channel 8 Reset Control Register
     * |        |          |User can set this bit field to reset the PDMA channel
     * |        |          |When user sets RESETn bit, the PDMA controller will finish the on-going transfer then clear the channel enable bit CHEN(PDMA_CHCTL [n], n=0,1...9)) and clear request active flag
     * |        |          |If re-enable channel after channel reset, PDMA will re-load the channel description table to execute PDMA task.
     * |        |          |0 = No effect.
     * |        |          |1 = Reset PDMA channel 8.
     * |        |          |Note: This bit will be cleared automatically after finishing reset process.
     * |[9]     |RESET9    |PDMA Channel 9 Reset Control Register
     * |        |          |User can set this bit field to reset the PDMA channel
     * |        |          |When user sets RESETn bit, the PDMA controller will finish the on-going transfer then clear the channel enable bit CHEN(PDMA_CHCTL [n], n=0,1...9)) and clear request active flag
     * |        |          |If re-enable channel after channel reset, PDMA will re-load the channel description table to execute PDMA task.
     * |        |          |0 = No effect.
     * |        |          |1 = Reset PDMA channel 9.
     * |        |          |Note: This bit will be cleared automatically after finishing reset process.
     * @var PDMA_T::REQSEL0_3
     * Offset: 0x480  PDMA Channel 0 to Channel 3 Request Source Select Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[5:0]   |REQSRC0   |Channel 0 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 0
     * |        |          |User can configure the peripheral by setting REQSRC0.
     * |        |          |0 = Disable PDMA.
     * |        |          |1 = Reserved.
     * |        |          |4 = Channel connects to UART0_TX.
     * |        |          |5 = Channel connects to UART0_RX.
     * |        |          |6 = Channel connects to UART1_TX.
     * |        |          |7 = Channel connects to UART1_RX.
     * |        |          |16 = Channel connects to SPI0_TX.
     * |        |          |17 = Channel connects to SPI0_RX.
     * |        |          |18 = Channel connects to SPI1_TX.
     * |        |          |19 = Channel connects to SPI1_RX.
     * |        |          |20 = Channel connects to ADC_RX.
     * |        |          |28 = Channel connects to I2C0_TX.
     * |        |          |29 = Channel connects to I2C0_RX.
     * |        |          |30 = Channel connects to I2C1_TX.
     * |        |          |31 = Channel connects to I2C1_RX.
     * |        |          |32 = Channel connects to TMR0.
     * |        |          |33 = Channel connects to TMR1.
     * |        |          |34 = Channel connects to TMR2.
     * |        |          |35 = Channel connects to TMR3.
     * |        |          |36 = Channel connects to LLSI0.
     * |        |          |37 = Channel connects to LLSI1.
     * |        |          |38 = Channel connects to LLSI2.
     * |        |          |39 = Channel connects to LLSI3.
     * |        |          |40 = Channel connects to LLSI4.
     * |        |          |41 = Channel connects to LLSI5.
     * |        |          |42 = Channel connects to LLSI6.
     * |        |          |43 = Channel connects to LLSI7.
     * |        |          |44 = Channel connects to LLSI8.
     * |        |          |45 = Channel connects to LLSI9.
     * |        |          |Others = Reserved.
     * |        |          |Note 1: A request source cannot assign to two channels at the same time.
     * |        |          |Note 2: This field is useless when transfer between memory and memory.
     * |[13:8]  |REQSRC1   |Channel 1 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 1
     * |        |          |User can configure the peripheral setting by REQSRC1.
     * |        |          |Note: The channel configuration is the same as REQSRC0 field
     * |        |          |Please refer to the explanation of REQSRC0.
     * |[21:16] |REQSRC2   |Channel 2 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 2
     * |        |          |User can configure the peripheral setting by REQSRC2.
     * |        |          |Note: The channel configuration is the same as REQSRC0 field
     * |        |          |Please refer to the explanation of REQSRC0.
     * |[29:24] |REQSRC3   |Channel 3 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 3
     * |        |          |User can configure the peripheral setting by REQSRC3.
     * |        |          |Note: The channel configuration is the same as REQSRC0 field
     * |        |          |Please refer to the explanation of REQSRC0.
     * @var PDMA_T::REQSEL4_7
     * Offset: 0x484  PDMA Channel 4 to Channel 7 Request Source Select Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[5:0]   |REQSRC4   |Channel 4 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 4
     * |        |          |User can configure the peripheral setting by REQSRC4.
     * |        |          |Note: The channel configuration is the same as REQSRC0 field
     * |        |          |Please refer to the explanation of REQSRC0.
     * |[13:8]  |REQSRC5   |Channel 5 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 5
     * |        |          |User can configure the peripheral setting by REQSRC5.
     * |        |          |Note: The channel configuration is the same as REQSRC0 field
     * |        |          |Please refer to the explanation of REQSRC0.
     * |[21:16] |REQSRC6   |Channel 6 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 6
     * |        |          |User can configure the peripheral setting by REQSRC6.
     * |        |          |Note: The channel configuration is the same as REQSRC0 field
     * |        |          |Please refer to the explanation of REQSRC0.
     * |[29:24] |REQSRC7   |Channel 7 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 7
     * |        |          |User can configure the peripheral setting by REQSRC5.
     * |        |          |Note: The channel configuration is the same as REQSRC0 field
     * |        |          |Please refer to the explanation of REQSRC0.
     * @var PDMA_T::REQSEL8_9
     * Offset: 0x488  PDMA Channel 8 to Channel 9 Request Source Select Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[5:0]   |REQSRC8   |Channel 8 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 8
     * |        |          |User can configure the peripheral setting by REQSRC8.
     * |        |          |Note: The channel configuration is the same as REQSRC0 field
     * |        |          |Please refer to the explanation of REQSRC0.
     * |[13:8]  |REQSRC9   |Channel 9 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 9
     * |        |          |User can configure the peripheral setting by REQSRC9.
     * |        |          |Note: The channel configuration is the same as REQSRC0 field
     * |        |          |Please refer to the explanation of REQSRC0.
     */

    DSCT_T        DSCT[10];               /*!< [0x0000 ~ 0x009C] DMA Embedded Description Table 0~9                      */
    __I  uint32_t CURSCAT[10];            /*!< [0x00A0~0x00C0] Current Scatter-Gather Descriptor Table Address of PDMA Channel 0~9 */
    __I  uint32_t RESERVE0[206];
    __IO uint32_t CHCTL;                 /*!< [0x0400] PDMA Channel Control Register                                    */
    __O  uint32_t PAUSE;                 /*!< [0x0404] PDMA Transfer Pause Control Register                             */
    __O  uint32_t SWREQ;                 /*!< [0x0408] PDMA Software Request Register                                   */
    __I  uint32_t TRGSTS;                /*!< [0x040c] PDMA Channel Request Status Register                             */
    __IO uint32_t PRISET;                /*!< [0x0410] PDMA Fixed Priority Setting Register                             */
    __O  uint32_t PRICLR;                /*!< [0x0414] PDMA Fixed Priority Clear Register                               */
    __IO uint32_t INTEN;                 /*!< [0x0418] PDMA Interrupt Enable Register                                   */
    __IO uint32_t INTSTS;                /*!< [0x041c] PDMA Interrupt Status Register                                   */
    __IO uint32_t ABTSTS;                /*!< [0x0420] PDMA Channel Read/Write Target Abort Flag Register               */
    __IO uint32_t TDSTS;                 /*!< [0x0424] PDMA Channel Transfer Done Flag Register                         */
    __IO uint32_t SCATSTS;               /*!< [0x0428] PDMA Scatter-Gather Table Empty Status Register                  */
    __I  uint32_t TACTSTS;               /*!< [0x042c] PDMA Transfer Active Flag Register                               */
    __IO uint32_t TOUTPSC;               /*!< [0x0430] PDMA Time-out Prescaler Register                                 */
    __IO uint32_t TOUTEN;                /*!< [0x0434] PDMA Time-out Enable Register                                    */
    __IO uint32_t TOUTIEN;               /*!< [0x0438] PDMA Time-out Interrupt Enable Register                          */
    __IO uint32_t SCATBA;                /*!< [0x043c] PDMA Scatter-Gather Descriptor Table Base Address Register       */
    __IO uint32_t TOC0_1;                /*!< [0x0440] PDMA Channel 0 and Channel 1 Time-out Counter Register           */
    __I  uint32_t RESERVE1[7];
    __IO uint32_t RESET;                 /*!< [0x0460] PDMA Channel Reset Control Register                              */
    __I  uint32_t RESERVE2[7];
    __IO uint32_t REQSEL0_3;             /*!< [0x0480] PDMA Channel 0 to Channel 3 Request Source Select Register       */
    __IO uint32_t REQSEL4_7;             /*!< [0x0484] PDMA Channel 4 to Channel 7 Request Source Select Register       */
    __IO uint32_t REQSEL8_9;             /*!< [0x0488] PDMA Channel 8 to Channel 9 Request Source Select Register       */

} PDMA_T;




/**
    @addtogroup PDMA_CONST PDMA Bit Field Definition
    Constant Definitions for PDMA Controller
    @{
*/

#define PDMA_DSCT_CTL_OPMODE_Pos         (0)                                               /*!< PDMA_T::DSCT_CTL: OPMODE Position     */
#define PDMA_DSCT_CTL_OPMODE_Msk         (0x3ul << PDMA_DSCT_CTL_OPMODE_Pos)               /*!< PDMA_T::DSCT_CTL: OPMODE Mask         */

#define PDMA_DSCT_CTL_TXTYPE_Pos         (2)                                               /*!< PDMA_T::DSCT_CTL: TXTYPE Position     */
#define PDMA_DSCT_CTL_TXTYPE_Msk         (0x1ul << PDMA_DSCT_CTL_TXTYPE_Pos)               /*!< PDMA_T::DSCT_CTL: TXTYPE Mask         */

#define PDMA_DSCT_CTL_BURSIZE_Pos        (4)                                               /*!< PDMA_T::DSCT_CTL: BURSIZE Position    */
#define PDMA_DSCT_CTL_BURSIZE_Msk        (0x7ul << PDMA_DSCT_CTL_BURSIZE_Pos)              /*!< PDMA_T::DSCT_CTL: BURSIZE Mask        */

#define PDMA_DSCT_CTL_TBINTDIS_Pos       (7)                                               /*!< PDMA_T::DSCT_CTL: TBINTDIS Position   */
#define PDMA_DSCT_CTL_TBINTDIS_Msk       (0x1ul << PDMA_DSCT_CTL_TBINTDIS_Pos)             /*!< PDMA_T::DSCT_CTL: TBINTDIS Mask       */

#define PDMA_DSCT_CTL_SAINC_Pos          (8)                                               /*!< PDMA_T::DSCT_CTL: SAINC Position      */
#define PDMA_DSCT_CTL_SAINC_Msk          (0x3ul << PDMA_DSCT_CTL_SAINC_Pos)                /*!< PDMA_T::DSCT_CTL: SAINC Mask          */

#define PDMA_DSCT_CTL_DAINC_Pos          (10)                                              /*!< PDMA_T::DSCT_CTL: DAINC Position      */
#define PDMA_DSCT_CTL_DAINC_Msk          (0x3ul << PDMA_DSCT_CTL_DAINC_Pos)                /*!< PDMA_T::DSCT_CTL: DAINC Mask          */

#define PDMA_DSCT_CTL_TXWIDTH_Pos        (12)                                              /*!< PDMA_T::DSCT_CTL: TXWIDTH Position    */
#define PDMA_DSCT_CTL_TXWIDTH_Msk        (0x3ul << PDMA_DSCT_CTL_TXWIDTH_Pos)              /*!< PDMA_T::DSCT_CTL: TXWIDTH Mask        */

#define PDMA_DSCT_CTL_TXCNT_Pos          (16)                                              /*!< PDMA_T::DSCT_CTL: TXCNT Position      */
#define PDMA_DSCT_CTL_TXCNT_Msk          (0x3ffful << PDMA_DSCT_CTL_TXCNT_Pos)             /*!< PDMA_T::DSCT_CTL: TXCNT Mask          */

#define PDMA_DSCT_SA_SA_Pos              (0)                                               /*!< PDMA_T::DSCT_SA: SA Position          */
#define PDMA_DSCT_SA_SA_Msk              (0xfffffffful << PDMA_DSCT_SA_SA_Pos)             /*!< PDMA_T::DSCT_SA: SA Mask              */

#define PDMA_DSCT_DA_DA_Pos              (0)                                               /*!< PDMA_T::DSCT_DA: DA Position          */
#define PDMA_DSCT_DA_DA_Msk              (0xfffffffful << PDMA_DSCT_DA_DA_Pos)             /*!< PDMA_T::DSCT_DA: DA Mask              */

#define PDMA_DSCT_FIRST_FIRST_Pos        (0)                                               /*!< PDMA_T::DSCT_FIRST: FIRST Position    */
#define PDMA_DSCT_FIRST_FIRST_Msk        (0xfffful << PDMA_DSCT_FIRST_FIRST_Pos)           /*!< PDMA_T::DSCT_FIRST: FIRST Mask        */

#define PDMA_DSCT_FIRST_NEXT_Pos         (16)                                              /*!< PDMA_T::DSCT_FIRST: NEXT Position     */
#define PDMA_DSCT_FIRST_NEXT_Msk         (0xfffful << PDMA_DSCT_FIRST_NEXT_Pos)            /*!< PDMA_T::DSCT_FIRST: NEXT Mask         */

#define PDMA_CURSCAT_CURADDR_Pos         (0)                                               /*!< PDMA_T::CURSCAT: CURADDR Position     */
#define PDMA_CURSCAT_CURADDR_Msk         (0xfffffffful << PDMA_CURSCAT_CURADDR_Pos)        /*!< PDMA_T::CURSCAT: CURADDR Mask         */

#define PDMA_CHCTL_CHEN0_Pos             (0)                                               /*!< PDMA_T::CHCTL: CHEN0 Position          */
#define PDMA_CHCTL_CHEN0_Msk             (0x1ul << PDMA_CHCTL_CHEN0_Pos)                   /*!< PDMA_T::CHCTL: CHEN0 Mask              */

#define PDMA_CHCTL_CHEN1_Pos             (1)                                               /*!< PDMA_T::CHCTL: CHEN1 Position          */
#define PDMA_CHCTL_CHEN1_Msk             (0x1ul << PDMA_CHCTL_CHEN1_Pos)                   /*!< PDMA_T::CHCTL: CHEN1 Mask              */

#define PDMA_CHCTL_CHEN2_Pos             (2)                                               /*!< PDMA_T::CHCTL: CHEN2 Position          */
#define PDMA_CHCTL_CHEN2_Msk             (0x1ul << PDMA_CHCTL_CHEN2_Pos)                   /*!< PDMA_T::CHCTL: CHEN2 Mask              */

#define PDMA_CHCTL_CHEN3_Pos             (3)                                               /*!< PDMA_T::CHCTL: CHEN3 Position          */
#define PDMA_CHCTL_CHEN3_Msk             (0x1ul << PDMA_CHCTL_CHEN3_Pos)                   /*!< PDMA_T::CHCTL: CHEN3 Mask              */

#define PDMA_CHCTL_CHEN4_Pos             (4)                                               /*!< PDMA_T::CHCTL: CHEN4 Position          */
#define PDMA_CHCTL_CHEN4_Msk             (0x1ul << PDMA_CHCTL_CHEN4_Pos)                   /*!< PDMA_T::CHCTL: CHEN4 Mask              */

#define PDMA_CHCTL_CHEN5_Pos             (5)                                               /*!< PDMA_T::CHCTL: CHEN5 Position          */
#define PDMA_CHCTL_CHEN5_Msk             (0x1ul << PDMA_CHCTL_CHEN5_Pos)                   /*!< PDMA_T::CHCTL: CHEN5 Mask              */

#define PDMA_CHCTL_CHEN6_Pos             (6)                                               /*!< PDMA_T::CHCTL: CHEN6 Position          */
#define PDMA_CHCTL_CHEN6_Msk             (0x1ul << PDMA_CHCTL_CHEN6_Pos)                   /*!< PDMA_T::CHCTL: CHEN6 Mask              */

#define PDMA_CHCTL_CHEN7_Pos             (7)                                               /*!< PDMA_T::CHCTL: CHEN7 Position          */
#define PDMA_CHCTL_CHEN7_Msk             (0x1ul << PDMA_CHCTL_CHEN7_Pos)                   /*!< PDMA_T::CHCTL: CHEN7 Mask              */

#define PDMA_CHCTL_CHEN8_Pos             (8)                                               /*!< PDMA_T::CHCTL: CHEN8 Position          */
#define PDMA_CHCTL_CHEN8_Msk             (0x1ul << PDMA_CHCTL_CHEN8_Pos)                   /*!< PDMA_T::CHCTL: CHEN8 Mask              */

#define PDMA_CHCTL_CHEN9_Pos             (9)                                               /*!< PDMA_T::CHCTL: CHEN9 Position          */
#define PDMA_CHCTL_CHEN9_Msk             (0x1ul << PDMA_CHCTL_CHEN9_Pos)                   /*!< PDMA_T::CHCTL: CHEN9 Mask              */

#define PDMA_PAUSE_PAUSE0_Pos            (0)                                               /*!< PDMA_T::PAUSE: PAUSE0 Position         */
#define PDMA_PAUSE_PAUSE0_Msk            (0x1ul << PDMA_PAUSE_PAUSE0_Pos)                  /*!< PDMA_T::PAUSE: PAUSE0 Mask             */

#define PDMA_PAUSE_PAUSE1_Pos            (1)                                               /*!< PDMA_T::PAUSE: PAUSE1 Position         */
#define PDMA_PAUSE_PAUSE1_Msk            (0x1ul << PDMA_PAUSE_PAUSE1_Pos)                  /*!< PDMA_T::PAUSE: PAUSE1 Mask             */

#define PDMA_PAUSE_PAUSE2_Pos            (2)                                               /*!< PDMA_T::PAUSE: PAUSE2 Position         */
#define PDMA_PAUSE_PAUSE2_Msk            (0x1ul << PDMA_PAUSE_PAUSE2_Pos)                  /*!< PDMA_T::PAUSE: PAUSE2 Mask             */

#define PDMA_PAUSE_PAUSE3_Pos            (3)                                               /*!< PDMA_T::PAUSE: PAUSE3 Position         */
#define PDMA_PAUSE_PAUSE3_Msk            (0x1ul << PDMA_PAUSE_PAUSE3_Pos)                  /*!< PDMA_T::PAUSE: PAUSE3 Mask             */

#define PDMA_PAUSE_PAUSE4_Pos            (4)                                               /*!< PDMA_T::PAUSE: PAUSE4 Position         */
#define PDMA_PAUSE_PAUSE4_Msk            (0x1ul << PDMA_PAUSE_PAUSE4_Pos)                  /*!< PDMA_T::PAUSE: PAUSE4 Mask             */

#define PDMA_PAUSE_PAUSE5_Pos            (5)                                               /*!< PDMA_T::PAUSE: PAUSE5 Position         */
#define PDMA_PAUSE_PAUSE5_Msk            (0x1ul << PDMA_PAUSE_PAUSE5_Pos)                  /*!< PDMA_T::PAUSE: PAUSE5 Mask             */

#define PDMA_PAUSE_PAUSE6_Pos            (6)                                               /*!< PDMA_T::PAUSE: PAUSE6 Position         */
#define PDMA_PAUSE_PAUSE6_Msk            (0x1ul << PDMA_PAUSE_PAUSE6_Pos)                  /*!< PDMA_T::PAUSE: PAUSE6 Mask             */

#define PDMA_PAUSE_PAUSE7_Pos            (7)                                               /*!< PDMA_T::PAUSE: PAUSE7 Position         */
#define PDMA_PAUSE_PAUSE7_Msk            (0x1ul << PDMA_PAUSE_PAUSE7_Pos)                  /*!< PDMA_T::PAUSE: PAUSE7 Mask             */

#define PDMA_PAUSE_PAUSE8_Pos            (8)                                               /*!< PDMA_T::PAUSE: PAUSE8 Position         */
#define PDMA_PAUSE_PAUSE8_Msk            (0x1ul << PDMA_PAUSE_PAUSE8_Pos)                  /*!< PDMA_T::PAUSE: PAUSE8 Mask             */

#define PDMA_PAUSE_PAUSE9_Pos            (9)                                               /*!< PDMA_T::PAUSE: PAUSE9 Position         */
#define PDMA_PAUSE_PAUSE9_Msk            (0x1ul << PDMA_PAUSE_PAUSE9_Pos)                  /*!< PDMA_T::PAUSE: PAUSE9 Mask             */

#define PDMA_SWREQ_SWREQ0_Pos            (0)                                               /*!< PDMA_T::SWREQ: SWREQ0 Position         */
#define PDMA_SWREQ_SWREQ0_Msk            (0x1ul << PDMA_SWREQ_SWREQ0_Pos)                  /*!< PDMA_T::SWREQ: SWREQ0 Mask             */

#define PDMA_SWREQ_SWREQ1_Pos            (1)                                               /*!< PDMA_T::SWREQ: SWREQ1 Position         */
#define PDMA_SWREQ_SWREQ1_Msk            (0x1ul << PDMA_SWREQ_SWREQ1_Pos)                  /*!< PDMA_T::SWREQ: SWREQ1 Mask             */

#define PDMA_SWREQ_SWREQ2_Pos            (2)                                               /*!< PDMA_T::SWREQ: SWREQ2 Position         */
#define PDMA_SWREQ_SWREQ2_Msk            (0x1ul << PDMA_SWREQ_SWREQ2_Pos)                  /*!< PDMA_T::SWREQ: SWREQ2 Mask             */

#define PDMA_SWREQ_SWREQ3_Pos            (3)                                               /*!< PDMA_T::SWREQ: SWREQ3 Position         */
#define PDMA_SWREQ_SWREQ3_Msk            (0x1ul << PDMA_SWREQ_SWREQ3_Pos)                  /*!< PDMA_T::SWREQ: SWREQ3 Mask             */

#define PDMA_SWREQ_SWREQ4_Pos            (4)                                               /*!< PDMA_T::SWREQ: SWREQ4 Position         */
#define PDMA_SWREQ_SWREQ4_Msk            (0x1ul << PDMA_SWREQ_SWREQ4_Pos)                  /*!< PDMA_T::SWREQ: SWREQ4 Mask             */

#define PDMA_SWREQ_SWREQ5_Pos            (5)                                               /*!< PDMA_T::SWREQ: SWREQ5 Position         */
#define PDMA_SWREQ_SWREQ5_Msk            (0x1ul << PDMA_SWREQ_SWREQ5_Pos)                  /*!< PDMA_T::SWREQ: SWREQ5 Mask             */

#define PDMA_SWREQ_SWREQ6_Pos            (6)                                               /*!< PDMA_T::SWREQ: SWREQ6 Position         */
#define PDMA_SWREQ_SWREQ6_Msk            (0x1ul << PDMA_SWREQ_SWREQ6_Pos)                  /*!< PDMA_T::SWREQ: SWREQ6 Mask             */

#define PDMA_SWREQ_SWREQ7_Pos            (7)                                               /*!< PDMA_T::SWREQ: SWREQ7 Position         */
#define PDMA_SWREQ_SWREQ7_Msk            (0x1ul << PDMA_SWREQ_SWREQ7_Pos)                  /*!< PDMA_T::SWREQ: SWREQ7 Mask             */

#define PDMA_SWREQ_SWREQ8_Pos            (8)                                               /*!< PDMA_T::SWREQ: SWREQ8 Position         */
#define PDMA_SWREQ_SWREQ8_Msk            (0x1ul << PDMA_SWREQ_SWREQ8_Pos)                  /*!< PDMA_T::SWREQ: SWREQ8 Mask             */

#define PDMA_SWREQ_SWREQ9_Pos            (9)                                               /*!< PDMA_T::SWREQ: SWREQ9 Position         */
#define PDMA_SWREQ_SWREQ9_Msk            (0x1ul << PDMA_SWREQ_SWREQ9_Pos)                  /*!< PDMA_T::SWREQ: SWREQ9 Mask             */

#define PDMA_TRGSTS_REQSTS0_Pos          (0)                                               /*!< PDMA_T::TRGSTS: REQSTS0 Position       */
#define PDMA_TRGSTS_REQSTS0_Msk          (0x1ul << PDMA_TRGSTS_REQSTS0_Pos)                /*!< PDMA_T::TRGSTS: REQSTS0 Mask           */

#define PDMA_TRGSTS_REQSTS1_Pos          (1)                                               /*!< PDMA_T::TRGSTS: REQSTS1 Position       */
#define PDMA_TRGSTS_REQSTS1_Msk          (0x1ul << PDMA_TRGSTS_REQSTS1_Pos)                /*!< PDMA_T::TRGSTS: REQSTS1 Mask           */

#define PDMA_TRGSTS_REQSTS2_Pos          (2)                                               /*!< PDMA_T::TRGSTS: REQSTS2 Position       */
#define PDMA_TRGSTS_REQSTS2_Msk          (0x1ul << PDMA_TRGSTS_REQSTS2_Pos)                /*!< PDMA_T::TRGSTS: REQSTS2 Mask           */

#define PDMA_TRGSTS_REQSTS3_Pos          (3)                                               /*!< PDMA_T::TRGSTS: REQSTS3 Position       */
#define PDMA_TRGSTS_REQSTS3_Msk          (0x1ul << PDMA_TRGSTS_REQSTS3_Pos)                /*!< PDMA_T::TRGSTS: REQSTS3 Mask           */

#define PDMA_TRGSTS_REQSTS4_Pos          (4)                                               /*!< PDMA_T::TRGSTS: REQSTS4 Position       */
#define PDMA_TRGSTS_REQSTS4_Msk          (0x1ul << PDMA_TRGSTS_REQSTS4_Pos)                /*!< PDMA_T::TRGSTS: REQSTS4 Mask           */

#define PDMA_TRGSTS_REQSTS5_Pos          (5)                                               /*!< PDMA_T::TRGSTS: REQSTS5 Position       */
#define PDMA_TRGSTS_REQSTS5_Msk          (0x1ul << PDMA_TRGSTS_REQSTS5_Pos)                /*!< PDMA_T::TRGSTS: REQSTS5 Mask           */

#define PDMA_TRGSTS_REQSTS6_Pos          (6)                                               /*!< PDMA_T::TRGSTS: REQSTS6 Position       */
#define PDMA_TRGSTS_REQSTS6_Msk          (0x1ul << PDMA_TRGSTS_REQSTS6_Pos)                /*!< PDMA_T::TRGSTS: REQSTS6 Mask           */

#define PDMA_TRGSTS_REQSTS7_Pos          (7)                                               /*!< PDMA_T::TRGSTS: REQSTS7 Position       */
#define PDMA_TRGSTS_REQSTS7_Msk          (0x1ul << PDMA_TRGSTS_REQSTS7_Pos)                /*!< PDMA_T::TRGSTS: REQSTS7 Mask           */

#define PDMA_TRGSTS_REQSTS8_Pos          (8)                                               /*!< PDMA_T::TRGSTS: REQSTS8 Position       */
#define PDMA_TRGSTS_REQSTS8_Msk          (0x1ul << PDMA_TRGSTS_REQSTS8_Pos)                /*!< PDMA_T::TRGSTS: REQSTS8 Mask           */

#define PDMA_TRGSTS_REQSTS9_Pos          (9)                                               /*!< PDMA_T::TRGSTS: REQSTS9 Position       */
#define PDMA_TRGSTS_REQSTS9_Msk          (0x1ul << PDMA_TRGSTS_REQSTS9_Pos)                /*!< PDMA_T::TRGSTS: REQSTS9 Mask           */

#define PDMA_PRISET_FPRISET0_Pos         (0)                                               /*!< PDMA_T::PRISET: FPRISET0 Position      */
#define PDMA_PRISET_FPRISET0_Msk         (0x1ul << PDMA_PRISET_FPRISET0_Pos)               /*!< PDMA_T::PRISET: FPRISET0 Mask          */

#define PDMA_PRISET_FPRISET1_Pos         (1)                                               /*!< PDMA_T::PRISET: FPRISET1 Position      */
#define PDMA_PRISET_FPRISET1_Msk         (0x1ul << PDMA_PRISET_FPRISET1_Pos)               /*!< PDMA_T::PRISET: FPRISET1 Mask          */

#define PDMA_PRISET_FPRISET2_Pos         (2)                                               /*!< PDMA_T::PRISET: FPRISET2 Position      */
#define PDMA_PRISET_FPRISET2_Msk         (0x1ul << PDMA_PRISET_FPRISET2_Pos)               /*!< PDMA_T::PRISET: FPRISET2 Mask          */

#define PDMA_PRISET_FPRISET3_Pos         (3)                                               /*!< PDMA_T::PRISET: FPRISET3 Position      */
#define PDMA_PRISET_FPRISET3_Msk         (0x1ul << PDMA_PRISET_FPRISET3_Pos)               /*!< PDMA_T::PRISET: FPRISET3 Mask          */

#define PDMA_PRISET_FPRISET4_Pos         (4)                                               /*!< PDMA_T::PRISET: FPRISET4 Position      */
#define PDMA_PRISET_FPRISET4_Msk         (0x1ul << PDMA_PRISET_FPRISET4_Pos)               /*!< PDMA_T::PRISET: FPRISET4 Mask          */

#define PDMA_PRISET_FPRISET5_Pos         (5)                                               /*!< PDMA_T::PRISET: FPRISET5 Position      */
#define PDMA_PRISET_FPRISET5_Msk         (0x1ul << PDMA_PRISET_FPRISET5_Pos)               /*!< PDMA_T::PRISET: FPRISET5 Mask          */

#define PDMA_PRISET_FPRISET6_Pos         (6)                                               /*!< PDMA_T::PRISET: FPRISET6 Position      */
#define PDMA_PRISET_FPRISET6_Msk         (0x1ul << PDMA_PRISET_FPRISET6_Pos)               /*!< PDMA_T::PRISET: FPRISET6 Mask          */

#define PDMA_PRISET_FPRISET7_Pos         (7)                                               /*!< PDMA_T::PRISET: FPRISET7 Position      */
#define PDMA_PRISET_FPRISET7_Msk         (0x1ul << PDMA_PRISET_FPRISET7_Pos)               /*!< PDMA_T::PRISET: FPRISET7 Mask          */

#define PDMA_PRISET_FPRISET8_Pos         (8)                                               /*!< PDMA_T::PRISET: FPRISET8 Position      */
#define PDMA_PRISET_FPRISET8_Msk         (0x1ul << PDMA_PRISET_FPRISET8_Pos)               /*!< PDMA_T::PRISET: FPRISET8 Mask          */

#define PDMA_PRISET_FPRISET9_Pos         (9)                                               /*!< PDMA_T::PRISET: FPRISET9 Position      */
#define PDMA_PRISET_FPRISET9_Msk         (0x1ul << PDMA_PRISET_FPRISET9_Pos)               /*!< PDMA_T::PRISET: FPRISET9 Mask          */

#define PDMA_PRICLR_FPRICLR0_Pos         (0)                                               /*!< PDMA_T::PRICLR: FPRICLR0 Position      */
#define PDMA_PRICLR_FPRICLR0_Msk         (0x1ul << PDMA_PRICLR_FPRICLR0_Pos)               /*!< PDMA_T::PRICLR: FPRICLR0 Mask          */

#define PDMA_PRICLR_FPRICLR1_Pos         (1)                                               /*!< PDMA_T::PRICLR: FPRICLR1 Position      */
#define PDMA_PRICLR_FPRICLR1_Msk         (0x1ul << PDMA_PRICLR_FPRICLR1_Pos)               /*!< PDMA_T::PRICLR: FPRICLR1 Mask          */

#define PDMA_PRICLR_FPRICLR2_Pos         (2)                                               /*!< PDMA_T::PRICLR: FPRICLR2 Position      */
#define PDMA_PRICLR_FPRICLR2_Msk         (0x1ul << PDMA_PRICLR_FPRICLR2_Pos)               /*!< PDMA_T::PRICLR: FPRICLR2 Mask          */

#define PDMA_PRICLR_FPRICLR3_Pos         (3)                                               /*!< PDMA_T::PRICLR: FPRICLR3 Position      */
#define PDMA_PRICLR_FPRICLR3_Msk         (0x1ul << PDMA_PRICLR_FPRICLR3_Pos)               /*!< PDMA_T::PRICLR: FPRICLR3 Mask          */

#define PDMA_PRICLR_FPRICLR4_Pos         (4)                                               /*!< PDMA_T::PRICLR: FPRICLR4 Position      */
#define PDMA_PRICLR_FPRICLR4_Msk         (0x1ul << PDMA_PRICLR_FPRICLR4_Pos)               /*!< PDMA_T::PRICLR: FPRICLR4 Mask          */

#define PDMA_PRICLR_FPRICLR5_Pos         (5)                                               /*!< PDMA_T::PRICLR: FPRICLR5 Position      */
#define PDMA_PRICLR_FPRICLR5_Msk         (0x1ul << PDMA_PRICLR_FPRICLR5_Pos)               /*!< PDMA_T::PRICLR: FPRICLR5 Mask          */

#define PDMA_PRICLR_FPRICLR6_Pos         (6)                                               /*!< PDMA_T::PRICLR: FPRICLR6 Position      */
#define PDMA_PRICLR_FPRICLR6_Msk         (0x1ul << PDMA_PRICLR_FPRICLR6_Pos)               /*!< PDMA_T::PRICLR: FPRICLR6 Mask          */

#define PDMA_PRICLR_FPRICLR7_Pos         (7)                                               /*!< PDMA_T::PRICLR: FPRICLR7 Position      */
#define PDMA_PRICLR_FPRICLR7_Msk         (0x1ul << PDMA_PRICLR_FPRICLR7_Pos)               /*!< PDMA_T::PRICLR: FPRICLR7 Mask          */

#define PDMA_PRICLR_FPRICLR8_Pos         (8)                                               /*!< PDMA_T::PRICLR: FPRICLR8 Position      */
#define PDMA_PRICLR_FPRICLR8_Msk         (0x1ul << PDMA_PRICLR_FPRICLR8_Pos)               /*!< PDMA_T::PRICLR: FPRICLR8 Mask          */

#define PDMA_PRICLR_FPRICLR9_Pos         (9)                                               /*!< PDMA_T::PRICLR: FPRICLR9 Position      */
#define PDMA_PRICLR_FPRICLR9_Msk         (0x1ul << PDMA_PRICLR_FPRICLR9_Pos)               /*!< PDMA_T::PRICLR: FPRICLR9 Mask          */

#define PDMA_INTEN_INTEN0_Pos            (0)                                               /*!< PDMA_T::INTEN: INTEN0 Position         */
#define PDMA_INTEN_INTEN0_Msk            (0x1ul << PDMA_INTEN_INTEN0_Pos)                  /*!< PDMA_T::INTEN: INTEN0 Mask             */

#define PDMA_INTEN_INTEN1_Pos            (1)                                               /*!< PDMA_T::INTEN: INTEN1 Position         */
#define PDMA_INTEN_INTEN1_Msk            (0x1ul << PDMA_INTEN_INTEN1_Pos)                  /*!< PDMA_T::INTEN: INTEN1 Mask             */

#define PDMA_INTEN_INTEN2_Pos            (2)                                               /*!< PDMA_T::INTEN: INTEN2 Position         */
#define PDMA_INTEN_INTEN2_Msk            (0x1ul << PDMA_INTEN_INTEN2_Pos)                  /*!< PDMA_T::INTEN: INTEN2 Mask             */

#define PDMA_INTEN_INTEN3_Pos            (3)                                               /*!< PDMA_T::INTEN: INTEN3 Position         */
#define PDMA_INTEN_INTEN3_Msk            (0x1ul << PDMA_INTEN_INTEN3_Pos)                  /*!< PDMA_T::INTEN: INTEN3 Mask             */

#define PDMA_INTEN_INTEN4_Pos            (4)                                               /*!< PDMA_T::INTEN: INTEN4 Position         */
#define PDMA_INTEN_INTEN4_Msk            (0x1ul << PDMA_INTEN_INTEN4_Pos)                  /*!< PDMA_T::INTEN: INTEN4 Mask             */

#define PDMA_INTEN_INTEN5_Pos            (5)                                               /*!< PDMA_T::INTEN: INTEN5 Position         */
#define PDMA_INTEN_INTEN5_Msk            (0x1ul << PDMA_INTEN_INTEN5_Pos)                  /*!< PDMA_T::INTEN: INTEN5 Mask             */

#define PDMA_INTEN_INTEN6_Pos            (6)                                               /*!< PDMA_T::INTEN: INTEN6 Position         */
#define PDMA_INTEN_INTEN6_Msk            (0x1ul << PDMA_INTEN_INTEN6_Pos)                  /*!< PDMA_T::INTEN: INTEN6 Mask             */

#define PDMA_INTEN_INTEN7_Pos            (7)                                               /*!< PDMA_T::INTEN: INTEN7 Position         */
#define PDMA_INTEN_INTEN7_Msk            (0x1ul << PDMA_INTEN_INTEN7_Pos)                  /*!< PDMA_T::INTEN: INTEN7 Mask             */

#define PDMA_INTEN_INTEN8_Pos            (8)                                               /*!< PDMA_T::INTEN: INTEN8 Position         */
#define PDMA_INTEN_INTEN8_Msk            (0x1ul << PDMA_INTEN_INTEN8_Pos)                  /*!< PDMA_T::INTEN: INTEN8 Mask             */

#define PDMA_INTEN_INTEN9_Pos            (9)                                               /*!< PDMA_T::INTEN: INTEN9 Position         */
#define PDMA_INTEN_INTEN9_Msk            (0x1ul << PDMA_INTEN_INTEN9_Pos)                  /*!< PDMA_T::INTEN: INTEN9 Mask             */

#define PDMA_INTSTS_ABTIF_Pos            (0)                                               /*!< PDMA_T::INTSTS: ABTIF Position         */
#define PDMA_INTSTS_ABTIF_Msk            (0x1ul << PDMA_INTSTS_ABTIF_Pos)                  /*!< PDMA_T::INTSTS: ABTIF Mask             */

#define PDMA_INTSTS_TDIF_Pos             (1)                                               /*!< PDMA_T::INTSTS: TDIF Position          */
#define PDMA_INTSTS_TDIF_Msk             (0x1ul << PDMA_INTSTS_TDIF_Pos)                   /*!< PDMA_T::INTSTS: TDIF Mask              */

#define PDMA_INTSTS_TEIF_Pos             (2)                                               /*!< PDMA_T::INTSTS: TEIF Position          */
#define PDMA_INTSTS_TEIF_Msk             (0x1ul << PDMA_INTSTS_TEIF_Pos)                   /*!< PDMA_T::INTSTS: TEIF Mask              */

#define PDMA_INTSTS_REQTOF0_Pos          (8)                                               /*!< PDMA_T::INTSTS: REQTOF0 Position       */
#define PDMA_INTSTS_REQTOF0_Msk          (0x1ul << PDMA_INTSTS_REQTOF0_Pos)                /*!< PDMA_T::INTSTS: REQTOF0 Mask           */

#define PDMA_INTSTS_REQTOF1_Pos          (9)                                               /*!< PDMA_T::INTSTS: REQTOF1 Position       */
#define PDMA_INTSTS_REQTOF1_Msk          (0x1ul << PDMA_INTSTS_REQTOF1_Pos)                /*!< PDMA_T::INTSTS: REQTOF1 Mask           */

#define PDMA_ABTSTS_ABTIF0_Pos           (0)                                               /*!< PDMA_T::ABTSTS: ABTIF0 Position        */
#define PDMA_ABTSTS_ABTIF0_Msk           (0x1ul << PDMA_ABTSTS_ABTIF0_Pos)                 /*!< PDMA_T::ABTSTS: ABTIF0 Mask            */

#define PDMA_ABTSTS_ABTIF1_Pos           (1)                                               /*!< PDMA_T::ABTSTS: ABTIF1 Position        */
#define PDMA_ABTSTS_ABTIF1_Msk           (0x1ul << PDMA_ABTSTS_ABTIF1_Pos)                 /*!< PDMA_T::ABTSTS: ABTIF1 Mask            */

#define PDMA_ABTSTS_ABTIF2_Pos           (2)                                               /*!< PDMA_T::ABTSTS: ABTIF2 Position        */
#define PDMA_ABTSTS_ABTIF2_Msk           (0x1ul << PDMA_ABTSTS_ABTIF2_Pos)                 /*!< PDMA_T::ABTSTS: ABTIF2 Mask            */

#define PDMA_ABTSTS_ABTIF3_Pos           (3)                                               /*!< PDMA_T::ABTSTS: ABTIF3 Position        */
#define PDMA_ABTSTS_ABTIF3_Msk           (0x1ul << PDMA_ABTSTS_ABTIF3_Pos)                 /*!< PDMA_T::ABTSTS: ABTIF3 Mask            */

#define PDMA_ABTSTS_ABTIF4_Pos           (4)                                               /*!< PDMA_T::ABTSTS: ABTIF4 Position        */
#define PDMA_ABTSTS_ABTIF4_Msk           (0x1ul << PDMA_ABTSTS_ABTIF4_Pos)                 /*!< PDMA_T::ABTSTS: ABTIF4 Mask            */

#define PDMA_ABTSTS_ABTIF5_Pos           (5)                                               /*!< PDMA_T::ABTSTS: ABTIF5 Position        */
#define PDMA_ABTSTS_ABTIF5_Msk           (0x1ul << PDMA_ABTSTS_ABTIF5_Pos)                 /*!< PDMA_T::ABTSTS: ABTIF5 Mask            */

#define PDMA_ABTSTS_ABTIF6_Pos           (6)                                               /*!< PDMA_T::ABTSTS: ABTIF6 Position        */
#define PDMA_ABTSTS_ABTIF6_Msk           (0x1ul << PDMA_ABTSTS_ABTIF6_Pos)                 /*!< PDMA_T::ABTSTS: ABTIF6 Mask            */

#define PDMA_ABTSTS_ABTIF7_Pos           (7)                                               /*!< PDMA_T::ABTSTS: ABTIF7 Position        */
#define PDMA_ABTSTS_ABTIF7_Msk           (0x1ul << PDMA_ABTSTS_ABTIF7_Pos)                 /*!< PDMA_T::ABTSTS: ABTIF7 Mask            */

#define PDMA_ABTSTS_ABTIF8_Pos           (8)                                               /*!< PDMA_T::ABTSTS: ABTIF8 Position        */
#define PDMA_ABTSTS_ABTIF8_Msk           (0x1ul << PDMA_ABTSTS_ABTIF8_Pos)                 /*!< PDMA_T::ABTSTS: ABTIF8 Mask            */

#define PDMA_ABTSTS_ABTIF9_Pos           (9)                                               /*!< PDMA_T::ABTSTS: ABTIF9 Position        */
#define PDMA_ABTSTS_ABTIF9_Msk           (0x1ul << PDMA_ABTSTS_ABTIF9_Pos)                 /*!< PDMA_T::ABTSTS: ABTIF9 Mask            */

#define PDMA_TDSTS_TDIF0_Pos             (0)                                               /*!< PDMA_T::TDSTS: TDIF0 Position          */
#define PDMA_TDSTS_TDIF0_Msk             (0x1ul << PDMA_TDSTS_TDIF0_Pos)                   /*!< PDMA_T::TDSTS: TDIF0 Mask              */

#define PDMA_TDSTS_TDIF1_Pos             (1)                                               /*!< PDMA_T::TDSTS: TDIF1 Position          */
#define PDMA_TDSTS_TDIF1_Msk             (0x1ul << PDMA_TDSTS_TDIF1_Pos)                   /*!< PDMA_T::TDSTS: TDIF1 Mask              */

#define PDMA_TDSTS_TDIF2_Pos             (2)                                               /*!< PDMA_T::TDSTS: TDIF2 Position          */
#define PDMA_TDSTS_TDIF2_Msk             (0x1ul << PDMA_TDSTS_TDIF2_Pos)                   /*!< PDMA_T::TDSTS: TDIF2 Mask              */

#define PDMA_TDSTS_TDIF3_Pos             (3)                                               /*!< PDMA_T::TDSTS: TDIF3 Position          */
#define PDMA_TDSTS_TDIF3_Msk             (0x1ul << PDMA_TDSTS_TDIF3_Pos)                   /*!< PDMA_T::TDSTS: TDIF3 Mask              */

#define PDMA_TDSTS_TDIF4_Pos             (4)                                               /*!< PDMA_T::TDSTS: TDIF4 Position          */
#define PDMA_TDSTS_TDIF4_Msk             (0x1ul << PDMA_TDSTS_TDIF4_Pos)                   /*!< PDMA_T::TDSTS: TDIF4 Mask              */

#define PDMA_TDSTS_TDIF5_Pos             (5)                                               /*!< PDMA_T::TDSTS: TDIF5 Position          */
#define PDMA_TDSTS_TDIF5_Msk             (0x1ul << PDMA_TDSTS_TDIF5_Pos)                   /*!< PDMA_T::TDSTS: TDIF5 Mask              */

#define PDMA_TDSTS_TDIF6_Pos             (6)                                               /*!< PDMA_T::TDSTS: TDIF6 Position          */
#define PDMA_TDSTS_TDIF6_Msk             (0x1ul << PDMA_TDSTS_TDIF6_Pos)                   /*!< PDMA_T::TDSTS: TDIF6 Mask              */

#define PDMA_TDSTS_TDIF7_Pos             (7)                                               /*!< PDMA_T::TDSTS: TDIF7 Position          */
#define PDMA_TDSTS_TDIF7_Msk             (0x1ul << PDMA_TDSTS_TDIF7_Pos)                   /*!< PDMA_T::TDSTS: TDIF7 Mask              */

#define PDMA_TDSTS_TDIF8_Pos             (8)                                               /*!< PDMA_T::TDSTS: TDIF8 Position          */
#define PDMA_TDSTS_TDIF8_Msk             (0x1ul << PDMA_TDSTS_TDIF8_Pos)                   /*!< PDMA_T::TDSTS: TDIF8 Mask              */

#define PDMA_TDSTS_TDIF9_Pos             (9)                                               /*!< PDMA_T::TDSTS: TDIF9 Position          */
#define PDMA_TDSTS_TDIF9_Msk             (0x1ul << PDMA_TDSTS_TDIF9_Pos)                   /*!< PDMA_T::TDSTS: TDIF9 Mask              */

#define PDMA_SCATSTS_TEMPTYF0_Pos        (0)                                               /*!< PDMA_T::SCATSTS: TEMPTYF0 Position     */
#define PDMA_SCATSTS_TEMPTYF0_Msk        (0x1ul << PDMA_SCATSTS_TEMPTYF0_Pos)              /*!< PDMA_T::SCATSTS: TEMPTYF0 Mask         */

#define PDMA_SCATSTS_TEMPTYF1_Pos        (1)                                               /*!< PDMA_T::SCATSTS: TEMPTYF1 Position     */
#define PDMA_SCATSTS_TEMPTYF1_Msk        (0x1ul << PDMA_SCATSTS_TEMPTYF1_Pos)              /*!< PDMA_T::SCATSTS: TEMPTYF1 Mask         */

#define PDMA_SCATSTS_TEMPTYF2_Pos        (2)                                               /*!< PDMA_T::SCATSTS: TEMPTYF2 Position     */
#define PDMA_SCATSTS_TEMPTYF2_Msk        (0x1ul << PDMA_SCATSTS_TEMPTYF2_Pos)              /*!< PDMA_T::SCATSTS: TEMPTYF2 Mask         */

#define PDMA_SCATSTS_TEMPTYF3_Pos        (3)                                               /*!< PDMA_T::SCATSTS: TEMPTYF3 Position     */
#define PDMA_SCATSTS_TEMPTYF3_Msk        (0x1ul << PDMA_SCATSTS_TEMPTYF3_Pos)              /*!< PDMA_T::SCATSTS: TEMPTYF3 Mask         */

#define PDMA_SCATSTS_TEMPTYF4_Pos        (4)                                               /*!< PDMA_T::SCATSTS: TEMPTYF4 Position     */
#define PDMA_SCATSTS_TEMPTYF4_Msk        (0x1ul << PDMA_SCATSTS_TEMPTYF4_Pos)              /*!< PDMA_T::SCATSTS: TEMPTYF4 Mask         */

#define PDMA_SCATSTS_TEMPTYF5_Pos        (5)                                               /*!< PDMA_T::SCATSTS: TEMPTYF5 Position     */
#define PDMA_SCATSTS_TEMPTYF5_Msk        (0x1ul << PDMA_SCATSTS_TEMPTYF5_Pos)              /*!< PDMA_T::SCATSTS: TEMPTYF5 Mask         */

#define PDMA_SCATSTS_TEMPTYF6_Pos        (6)                                               /*!< PDMA_T::SCATSTS: TEMPTYF6 Position     */
#define PDMA_SCATSTS_TEMPTYF6_Msk        (0x1ul << PDMA_SCATSTS_TEMPTYF6_Pos)              /*!< PDMA_T::SCATSTS: TEMPTYF6 Mask         */

#define PDMA_SCATSTS_TEMPTYF7_Pos        (7)                                               /*!< PDMA_T::SCATSTS: TEMPTYF7 Position     */
#define PDMA_SCATSTS_TEMPTYF7_Msk        (0x1ul << PDMA_SCATSTS_TEMPTYF7_Pos)              /*!< PDMA_T::SCATSTS: TEMPTYF7 Mask         */

#define PDMA_SCATSTS_TEMPTYF8_Pos        (8)                                               /*!< PDMA_T::SCATSTS: TEMPTYF8 Position     */
#define PDMA_SCATSTS_TEMPTYF8_Msk        (0x1ul << PDMA_SCATSTS_TEMPTYF8_Pos)              /*!< PDMA_T::SCATSTS: TEMPTYF8 Mask         */

#define PDMA_SCATSTS_TEMPTYF9_Pos        (9)                                               /*!< PDMA_T::SCATSTS: TEMPTYF9 Position     */
#define PDMA_SCATSTS_TEMPTYF9_Msk        (0x1ul << PDMA_SCATSTS_TEMPTYF9_Pos)              /*!< PDMA_T::SCATSTS: TEMPTYF9 Mask         */

#define PDMA_TACTSTS_TXACTF0_Pos         (0)                                               /*!< PDMA_T::TACTSTS: TXACTF0 Position      */
#define PDMA_TACTSTS_TXACTF0_Msk         (0x1ul << PDMA_TACTSTS_TXACTF0_Pos)               /*!< PDMA_T::TACTSTS: TXACTF0 Mask          */

#define PDMA_TACTSTS_TXACTF1_Pos         (1)                                               /*!< PDMA_T::TACTSTS: TXACTF1 Position      */
#define PDMA_TACTSTS_TXACTF1_Msk         (0x1ul << PDMA_TACTSTS_TXACTF1_Pos)               /*!< PDMA_T::TACTSTS: TXACTF1 Mask          */

#define PDMA_TACTSTS_TXACTF2_Pos         (2)                                               /*!< PDMA_T::TACTSTS: TXACTF2 Position      */
#define PDMA_TACTSTS_TXACTF2_Msk         (0x1ul << PDMA_TACTSTS_TXACTF2_Pos)               /*!< PDMA_T::TACTSTS: TXACTF2 Mask          */

#define PDMA_TACTSTS_TXACTF3_Pos         (3)                                               /*!< PDMA_T::TACTSTS: TXACTF3 Position      */
#define PDMA_TACTSTS_TXACTF3_Msk         (0x1ul << PDMA_TACTSTS_TXACTF3_Pos)               /*!< PDMA_T::TACTSTS: TXACTF3 Mask          */

#define PDMA_TACTSTS_TXACTF4_Pos         (4)                                               /*!< PDMA_T::TACTSTS: TXACTF4 Position      */
#define PDMA_TACTSTS_TXACTF4_Msk         (0x1ul << PDMA_TACTSTS_TXACTF4_Pos)               /*!< PDMA_T::TACTSTS: TXACTF4 Mask          */

#define PDMA_TACTSTS_TXACTF5_Pos         (5)                                               /*!< PDMA_T::TACTSTS: TXACTF5 Position      */
#define PDMA_TACTSTS_TXACTF5_Msk         (0x1ul << PDMA_TACTSTS_TXACTF5_Pos)               /*!< PDMA_T::TACTSTS: TXACTF5 Mask          */

#define PDMA_TACTSTS_TXACTF6_Pos         (6)                                               /*!< PDMA_T::TACTSTS: TXACTF6 Position      */
#define PDMA_TACTSTS_TXACTF6_Msk         (0x1ul << PDMA_TACTSTS_TXACTF6_Pos)               /*!< PDMA_T::TACTSTS: TXACTF6 Mask          */

#define PDMA_TACTSTS_TXACTF7_Pos         (7)                                               /*!< PDMA_T::TACTSTS: TXACTF7 Position      */
#define PDMA_TACTSTS_TXACTF7_Msk         (0x1ul << PDMA_TACTSTS_TXACTF7_Pos)               /*!< PDMA_T::TACTSTS: TXACTF7 Mask          */

#define PDMA_TACTSTS_TXACTF8_Pos         (8)                                               /*!< PDMA_T::TACTSTS: TXACTF8 Position      */
#define PDMA_TACTSTS_TXACTF8_Msk         (0x1ul << PDMA_TACTSTS_TXACTF8_Pos)               /*!< PDMA_T::TACTSTS: TXACTF8 Mask          */

#define PDMA_TACTSTS_TXACTF9_Pos         (9)                                               /*!< PDMA_T::TACTSTS: TXACTF9 Position      */
#define PDMA_TACTSTS_TXACTF9_Msk         (0x1ul << PDMA_TACTSTS_TXACTF9_Pos)               /*!< PDMA_T::TACTSTS: TXACTF9 Mask          */

#define PDMA_TOUTPSC_TOUTPSC0_Pos        (0)                                               /*!< PDMA_T::TOUTPSC: TOUTPSC0 Position     */
#define PDMA_TOUTPSC_TOUTPSC0_Msk        (0x7ul << PDMA_TOUTPSC_TOUTPSC0_Pos)              /*!< PDMA_T::TOUTPSC: TOUTPSC0 Mask         */

#define PDMA_TOUTPSC_TOUTPSC1_Pos        (4)                                               /*!< PDMA_T::TOUTPSC: TOUTPSC1 Position     */
#define PDMA_TOUTPSC_TOUTPSC1_Msk        (0x7ul << PDMA_TOUTPSC_TOUTPSC1_Pos)              /*!< PDMA_T::TOUTPSC: TOUTPSC1 Mask         */

#define PDMA_TOUTEN_TOUTEN0_Pos          (0)                                               /*!< PDMA_T::TOUTEN: TOUTEN0 Position       */
#define PDMA_TOUTEN_TOUTEN0_Msk          (0x1ul << PDMA_TOUTEN_TOUTEN0_Pos)                /*!< PDMA_T::TOUTEN: TOUTEN0 Mask           */

#define PDMA_TOUTEN_TOUTEN1_Pos          (1)                                               /*!< PDMA_T::TOUTEN: TOUTEN1 Position       */
#define PDMA_TOUTEN_TOUTEN1_Msk          (0x1ul << PDMA_TOUTEN_TOUTEN1_Pos)                /*!< PDMA_T::TOUTEN: TOUTEN1 Mask           */

#define PDMA_TOUTIEN_TOUTIEN0_Pos        (0)                                               /*!< PDMA_T::TOUTIEN: TOUTIEN0 Position     */
#define PDMA_TOUTIEN_TOUTIEN0_Msk        (0x1ul << PDMA_TOUTIEN_TOUTIEN0_Pos)              /*!< PDMA_T::TOUTIEN: TOUTIEN0 Mask         */

#define PDMA_TOUTIEN_TOUTIEN1_Pos        (1)                                               /*!< PDMA_T::TOUTIEN: TOUTIEN1 Position     */
#define PDMA_TOUTIEN_TOUTIEN1_Msk        (0x1ul << PDMA_TOUTIEN_TOUTIEN1_Pos)              /*!< PDMA_T::TOUTIEN: TOUTIEN1 Mask         */

#define PDMA_SCATBA_SCATBA_Pos           (16)                                              /*!< PDMA_T::SCATBA: SCATBA Position        */
#define PDMA_SCATBA_SCATBA_Msk           (0xfffful << PDMA_SCATBA_SCATBA_Pos)              /*!< PDMA_T::SCATBA: SCATBA Mask            */

#define PDMA_TOC0_1_TOC0_Pos             (0)                                               /*!< PDMA_T::TOC0_1: TOC0 Position          */
#define PDMA_TOC0_1_TOC0_Msk             (0xfffful << PDMA_TOC0_1_TOC0_Pos)                /*!< PDMA_T::TOC0_1: TOC0 Mask              */

#define PDMA_TOC0_1_TOC1_Pos             (16)                                              /*!< PDMA_T::TOC0_1: TOC1 Position          */
#define PDMA_TOC0_1_TOC1_Msk             (0xfffful << PDMA_TOC0_1_TOC1_Pos)                /*!< PDMA_T::TOC0_1: TOC1 Mask              */

#define PDMA_RESET_RESET0_Pos            (0)                                               /*!< PDMA_T::RESET: RESET0 Position         */
#define PDMA_RESET_RESET0_Msk            (0x1ul << PDMA_RESET_RESET0_Pos)                  /*!< PDMA_T::RESET: RESET0 Mask             */

#define PDMA_RESET_RESET1_Pos            (1)                                               /*!< PDMA_T::RESET: RESET1 Position         */
#define PDMA_RESET_RESET1_Msk            (0x1ul << PDMA_RESET_RESET1_Pos)                  /*!< PDMA_T::RESET: RESET1 Mask             */

#define PDMA_RESET_RESET2_Pos            (2)                                               /*!< PDMA_T::RESET: RESET2 Position         */
#define PDMA_RESET_RESET2_Msk            (0x1ul << PDMA_RESET_RESET2_Pos)                  /*!< PDMA_T::RESET: RESET2 Mask             */

#define PDMA_RESET_RESET3_Pos            (3)                                               /*!< PDMA_T::RESET: RESET3 Position         */
#define PDMA_RESET_RESET3_Msk            (0x1ul << PDMA_RESET_RESET3_Pos)                  /*!< PDMA_T::RESET: RESET3 Mask             */

#define PDMA_RESET_RESET4_Pos            (4)                                               /*!< PDMA_T::RESET: RESET4 Position         */
#define PDMA_RESET_RESET4_Msk            (0x1ul << PDMA_RESET_RESET4_Pos)                  /*!< PDMA_T::RESET: RESET4 Mask             */

#define PDMA_RESET_RESET5_Pos            (5)                                               /*!< PDMA_T::RESET: RESET5 Position         */
#define PDMA_RESET_RESET5_Msk            (0x1ul << PDMA_RESET_RESET5_Pos)                  /*!< PDMA_T::RESET: RESET5 Mask             */

#define PDMA_RESET_RESET6_Pos            (6)                                               /*!< PDMA_T::RESET: RESET6 Position         */
#define PDMA_RESET_RESET6_Msk            (0x1ul << PDMA_RESET_RESET6_Pos)                  /*!< PDMA_T::RESET: RESET6 Mask             */

#define PDMA_RESET_RESET7_Pos            (7)                                               /*!< PDMA_T::RESET: RESET7 Position         */
#define PDMA_RESET_RESET7_Msk            (0x1ul << PDMA_RESET_RESET7_Pos)                  /*!< PDMA_T::RESET: RESET7 Mask             */

#define PDMA_RESET_RESET8_Pos            (8)                                               /*!< PDMA_T::RESET: RESET8 Position         */
#define PDMA_RESET_RESET8_Msk            (0x1ul << PDMA_RESET_RESET8_Pos)                  /*!< PDMA_T::RESET: RESET8 Mask             */

#define PDMA_RESET_RESET9_Pos            (9)                                               /*!< PDMA_T::RESET: RESET9 Position         */
#define PDMA_RESET_RESET9_Msk            (0x1ul << PDMA_RESET_RESET9_Pos)                  /*!< PDMA_T::RESET: RESET9 Mask             */

#define PDMA_REQSEL0_3_REQSRC0_Pos       (0)                                               /*!< PDMA_T::REQSEL0_3: REQSRC0 Position    */
#define PDMA_REQSEL0_3_REQSRC0_Msk       (0x3ful << PDMA_REQSEL0_3_REQSRC0_Pos)            /*!< PDMA_T::REQSEL0_3: REQSRC0 Mask        */

#define PDMA_REQSEL0_3_REQSRC1_Pos       (8)                                               /*!< PDMA_T::REQSEL0_3: REQSRC1 Position    */
#define PDMA_REQSEL0_3_REQSRC1_Msk       (0x3ful << PDMA_REQSEL0_3_REQSRC1_Pos)            /*!< PDMA_T::REQSEL0_3: REQSRC1 Mask        */

#define PDMA_REQSEL0_3_REQSRC2_Pos       (16)                                              /*!< PDMA_T::REQSEL0_3: REQSRC2 Position    */
#define PDMA_REQSEL0_3_REQSRC2_Msk       (0x3ful << PDMA_REQSEL0_3_REQSRC2_Pos)            /*!< PDMA_T::REQSEL0_3: REQSRC2 Mask        */

#define PDMA_REQSEL0_3_REQSRC3_Pos       (24)                                              /*!< PDMA_T::REQSEL0_3: REQSRC3 Position    */
#define PDMA_REQSEL0_3_REQSRC3_Msk       (0x3ful << PDMA_REQSEL0_3_REQSRC3_Pos)            /*!< PDMA_T::REQSEL0_3: REQSRC3 Mask        */

#define PDMA_REQSEL4_7_REQSRC4_Pos       (0)                                               /*!< PDMA_T::REQSEL4_7: REQSRC4 Position    */
#define PDMA_REQSEL4_7_REQSRC4_Msk       (0x3ful << PDMA_REQSEL4_7_REQSRC4_Pos)            /*!< PDMA_T::REQSEL4_7: REQSRC4 Mask        */

#define PDMA_REQSEL4_7_REQSRC5_Pos       (8)                                               /*!< PDMA_T::REQSEL4_7: REQSRC5 Position    */
#define PDMA_REQSEL4_7_REQSRC5_Msk       (0x3ful << PDMA_REQSEL4_7_REQSRC5_Pos)            /*!< PDMA_T::REQSEL4_7: REQSRC5 Mask        */

#define PDMA_REQSEL4_7_REQSRC6_Pos       (16)                                              /*!< PDMA_T::REQSEL4_7: REQSRC6 Position    */
#define PDMA_REQSEL4_7_REQSRC6_Msk       (0x3ful << PDMA_REQSEL4_7_REQSRC6_Pos)            /*!< PDMA_T::REQSEL4_7: REQSRC6 Mask        */

#define PDMA_REQSEL4_7_REQSRC7_Pos       (24)                                              /*!< PDMA_T::REQSEL4_7: REQSRC7 Position    */
#define PDMA_REQSEL4_7_REQSRC7_Msk       (0x3ful << PDMA_REQSEL4_7_REQSRC7_Pos)            /*!< PDMA_T::REQSEL4_7: REQSRC7 Mask        */

#define PDMA_REQSEL8_9_REQSRC8_Pos       (0)                                               /*!< PDMA_T::REQSEL8_9: REQSRC8 Position    */
#define PDMA_REQSEL8_9_REQSRC8_Msk       (0x3ful << PDMA_REQSEL8_9_REQSRC8_Pos)            /*!< PDMA_T::REQSEL8_9: REQSRC8 Mask        */

#define PDMA_REQSEL8_9_REQSRC9_Pos       (8)                                               /*!< PDMA_T::REQSEL8_9: REQSRC9 Position    */
#define PDMA_REQSEL8_9_REQSRC9_Msk       (0x3ful << PDMA_REQSEL8_9_REQSRC9_Pos)            /*!< PDMA_T::REQSEL8_9: REQSRC9 Mask        */

/**@}*/ /* PDMA_CONST */
/**@}*/ /* end of PDMA register group */


/*---------------------- Basic Pulse Width Modulation Controller -------------------------*/
/**
    @addtogroup BPWM Basic Pulse Width Modulation Controller(BPWM)
    Memory Mapped Structure for BPWM Controller
    @{
*/

typedef struct
{
    /**
     * @var BCAPDAT_T::RCAPDAT
     * Offset: 0x20C  BPWM Rising Capture Data Register 0~5
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |RCAPDAT   |BPWM Rising Capture Data (Read Only)
     * |        |          |When rising capture condition happened, the BPWM counter value will be saved in this register.
     * @var BCAPDAT_T::FCAPDAT
     * Offset: 0x210  BPWM Falling Capture Data Register 0~5
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |FCAPDAT   |BPWM Falling Capture Data (Read Only)
     * |        |          |When falling capture condition happened, the BPWM counter value will be saved in this register.
     */
    __IO uint32_t RCAPDAT; /*!< [0x20C/0x214/0x21C/0x224/0x22C/0x234] BPWM Rising Capture Data Register 0~5 */
    __IO uint32_t FCAPDAT; /*!< [0x210/0x218/0x220/0x228/0x230/0x238] BPWM Falling Capture Data Register 0~5 */
} BCAPDAT_T;


typedef struct
{
    /**
     * @var BPWM_T::CTL0
     * Offset: 0x00  BPWM Control Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CTRLD0    |Center Re-load
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |In up-down counter type, PERIOD will load to PBUF at the end point of each period
     * |        |          |CMPDAT will load to CMPBUF at the center point of a period
     * |[1]     |CTRLD1    |Center Re-load
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |In up-down counter type, PERIOD will load to PBUF at the end point of each period
     * |        |          |CMPDAT will load to CMPBUF at the center point of a period
     * |[2]     |CTRLD2    |Center Re-load
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |In up-down counter type, PERIOD will load to PBUF at the end point of each period
     * |        |          |CMPDAT will load to CMPBUF at the center point of a period
     * |[3]     |CTRLD3    |Center Re-load
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |In up-down counter type, PERIOD will load to PBUF at the end point of each period
     * |        |          |CMPDAT will load to CMPBUF at the center point of a period
     * |[4]     |CTRLD4    |Center Re-load
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |In up-down counter type, PERIOD will load to PBUF at the end point of each period
     * |        |          |CMPDAT will load to CMPBUF at the center point of a period
     * |[5]     |CTRLD5    |Center Re-load
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |In up-down counter type, PERIOD will load to PBUF at the end point of each period
     * |        |          |CMPDAT will load to CMPBUF at the center point of a period
     * |[16]    |IMMLDEN0  |Immediately Load Enable Bit(S)
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = PERIOD will load to PBUF at the end point of each period
     * |        |          |CMPDAT will load to CMPBUF at the end point or center point of each period by setting CTRLD bit.
     * |        |          |1 = PERIOD/CMPDAT will load to PBUF and CMPBUF immediately when software up2025-07-16 PERIOD/CMPDAT.
     * |        |          |Note: If IMMLDENn is Enabled, WINLDENn and CTRLDn will be invalid.
     * |[17]    |IMMLDEN1  |Immediately Load Enable Bit(S)
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = PERIOD will load to PBUF at the end point of each period
     * |        |          |CMPDAT will load to CMPBUF at the end point or center point of each period by setting CTRLD bit.
     * |        |          |1 = PERIOD/CMPDAT will load to PBUF and CMPBUF immediately when software up2025-07-16 PERIOD/CMPDAT.
     * |        |          |Note: If IMMLDENn is Enabled, WINLDENn and CTRLDn will be invalid.
     * |[18]    |IMMLDEN2  |Immediately Load Enable Bit(S)
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = PERIOD will load to PBUF at the end point of each period
     * |        |          |CMPDAT will load to CMPBUF at the end point or center point of each period by setting CTRLD bit.
     * |        |          |1 = PERIOD/CMPDAT will load to PBUF and CMPBUF immediately when software up2025-07-16 PERIOD/CMPDAT.
     * |        |          |Note: If IMMLDENn is Enabled, WINLDENn and CTRLDn will be invalid.
     * |[19]    |IMMLDEN3  |Immediately Load Enable Bit(S)
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = PERIOD will load to PBUF at the end point of each period
     * |        |          |CMPDAT will load to CMPBUF at the end point or center point of each period by setting CTRLD bit.
     * |        |          |1 = PERIOD/CMPDAT will load to PBUF and CMPBUF immediately when software up2025-07-16 PERIOD/CMPDAT.
     * |        |          |Note: If IMMLDENn is Enabled, WINLDENn and CTRLDn will be invalid.
     * |[20]    |IMMLDEN4  |Immediately Load Enable Bit(S)
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = PERIOD will load to PBUF at the end point of each period
     * |        |          |CMPDAT will load to CMPBUF at the end point or center point of each period by setting CTRLD bit.
     * |        |          |1 = PERIOD/CMPDAT will load to PBUF and CMPBUF immediately when software up2025-07-16 PERIOD/CMPDAT.
     * |        |          |Note: If IMMLDENn is Enabled, WINLDENn and CTRLDn will be invalid.
     * |[21]    |IMMLDEN5  |Immediately Load Enable Bit(S)
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = PERIOD will load to PBUF at the end point of each period
     * |        |          |CMPDAT will load to CMPBUF at the end point or center point of each period by setting CTRLD bit.
     * |        |          |1 = PERIOD/CMPDAT will load to PBUF and CMPBUF immediately when software up2025-07-16 PERIOD/CMPDAT.
     * |        |          |Note: If IMMLDENn is Enabled, WINLDENn and CTRLDn will be invalid.
     * |[30]    |DBGHALT   |ICE Debug Mode Counter Halt (Write Protect)
     * |        |          |If counter halt is enabled, BPWM all counters will keep current value until exit ICE debug mode.
     * |        |          |0 = ICE debug mode counter halt Disable.
     * |        |          |1 = ICE debug mode counter halt Enable.
     * |        |          |Note: This register is write protected. Refer to SYS_REGLCTL register.
     * |[31]    |DBGTRIOFF |ICE Debug Mode Acknowledge Disable (Write Protect)
     * |        |          |0 = ICE debug mode acknowledgement effects BPWM output.
     * |        |          |BPWM pin will be forced as tri-state while ICE debug mode acknowledged.
     * |        |          |1 = ICE debug mode acknowledgement Disabled.
     * |        |          |BPWM pin will keep output no matter ICE debug mode acknowledged or not.
     * |        |          |Note: This register is write protected. Refer to SYS_REGLCTL register.
     * @var BPWM_T::CTL1
     * Offset: 0x04  BPWM Control Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1:0]   |CNTTYPE0  |BPWM Counter Behavior Type 0
     * |        |          |Each bit n controls corresponding BPWM channel n.
     * |        |          |00 = Up counter type (supports in capture mode).
     * |        |          |01 = Down count type (supports in capture mode).
     * |        |          |10 = Up-down counter type.
     * |        |          |11 = Reserved.
     * @var BPWM_T::CLKSRC
     * Offset: 0x10  BPWM Clock Source Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[2:0]   |ECLKSRC0  |BPWM_CH01 External Clock Source Select
     * |        |          |000 = BPWMx_CLK, x denotes 0 or 1.
     * |        |          |001 = TIMER0 overflow.
     * |        |          |010 = TIMER1 overflow.
     * |        |          |011 = TIMER2 overflow.
     * |        |          |100 = TIMER3 overflow.
     * |        |          |Others = Reserved.
     * @var BPWM_T::CLKPSC
     * Offset: 0x14  BPWM Clock Prescale Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[11:0]  |CLKPSC    |BPWM Counter Clock Prescale
     * |        |          |The clock of BPWM counter is decided by clock prescaler
     * |        |          |Each BPWM pair share one BPWM counter clock prescaler
     * |        |          |The clock of BPWM counter is divided by (CLKPSC+ 1)
     * @var BPWM_T::CNTEN
     * Offset: 0x20  BPWM Counter Enable Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CNTEN0    |BPWM Counter 0 Enable Bit
     * |        |          |0 = BPWM Counter and clock prescaler stop running.
     * |        |          |1 = BPWM Counter and clock prescaler start running.
     * @var BPWM_T::CNTCLR
     * Offset: 0x24  BPWM Clear Counter Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CNTCLR0   |Clear BPWM Counter Control Bit 0
     * |        |          |It is automatically cleared by hardware.
     * |        |          |0 = No effect.
     * |        |          |1 = Clear 16-bit BPWM counter to 0000H.
     * @var BPWM_T::PERIOD
     * Offset: 0x30  BPWM Period Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |PERIOD    |BPWM Period Register
     * |        |          |Up-Count mode: In this mode, BPWM counter counts from 0 to PERIOD, and restarts from 0.
     * |        |          |Down-Count mode: In this mode, BPWM counter counts from PERIOD to 0, and restarts from PERIOD.
     * |        |          |BPWM period time = (PERIOD+1) * BPWM_CLK period.
     * |        |          |Up-Down-Count mode: In this mode, BPWM counter counts from 0 to PERIOD, then decrements to 0 and repeats again.
     * |        |          |BPWM period time = 2 * PERIOD * BPWM_CLK period.
     * @var BPWM_T::CMPDAT[6]
     * Offset: 0x50  BPWM Comparator Register 0~5
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |CMPDAT    |BPWM Comparator Register
     * |        |          |CMPDAT use to compare with CNT to generate BPWM waveform, interrupt and trigger ADC.
     * |        |          |In independent mode, BPWM_CMPDATn, n=0,1..5 denote as 6 independent BPWM_CH0~5 compared point.
     * @var BPWM_T::CNT
     * Offset: 0x90  BPWM Counter Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |CNT       |BPWM Data Register (Read Only)
     * |        |          |Monitor CNT to know the current value in 16-bit period counter.
     * |[16]    |DIRF      |BPWM Direction Indicator Flag (Read Only)
     * |        |          |0 = Counter is Down count.
     * |        |          |1 = Counter is UP count.
     * @var BPWM_T::WGCTL0
     * Offset: 0xB0  BPWM Generation Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1:0]   |ZPCTL0    |BPWM Zero Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM zero point output Low.
     * |        |          |10 = BPWM zero point output High.
     * |        |          |11 = BPWM zero point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter count to zero.
     * |[3:2]   |ZPCTL1    |BPWM Zero Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM zero point output Low.
     * |        |          |10 = BPWM zero point output High.
     * |        |          |11 = BPWM zero point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter count to zero.
     * |[5:4]   |ZPCTL2    |BPWM Zero Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM zero point output Low.
     * |        |          |10 = BPWM zero point output High.
     * |        |          |11 = BPWM zero point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter count to zero.
     * |[7:6]   |ZPCTL3    |BPWM Zero Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM zero point output Low.
     * |        |          |10 = BPWM zero point output High.
     * |        |          |11 = BPWM zero point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter count to zero.
     * |[9:8]   |ZPCTL4    |BPWM Zero Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM zero point output Low.
     * |        |          |10 = BPWM zero point output High.
     * |        |          |11 = BPWM zero point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter count to zero.
     * |[11:10] |ZPCTL5    |BPWM Zero Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM zero point output Low.
     * |        |          |10 = BPWM zero point output High.
     * |        |          |11 = BPWM zero point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter count to zero.
     * |[17:16] |PRDPCTL0  |BPWM Period (Center) Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM period (center) point output Low.
     * |        |          |10 = BPWM period (center) point output High.
     * |        |          |11 = BPWM period (center) point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter count to (PERIOD+1).
     * |        |          |Note: This bit is center point control when BPWM counter operating in up-down counter type.
     * |[19:18] |PRDPCTL1  |BPWM Period (Center) Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM period (center) point output Low.
     * |        |          |10 = BPWM period (center) point output High.
     * |        |          |11 = BPWM period (center) point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter count to (PERIOD+1).
     * |        |          |Note: This bit is center point control when BPWM counter operating in up-down counter type.
     * |[21:20] |PRDPCTL2  |BPWM Period (Center) Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM period (center) point output Low.
     * |        |          |10 = BPWM period (center) point output High.
     * |        |          |11 = BPWM period (center) point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter count to (PERIOD+1).
     * |        |          |Note: This bit is center point control when BPWM counter operating in up-down counter type.
     * |[23:22] |PRDPCTL3  |BPWM Period (Center) Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM period (center) point output Low.
     * |        |          |10 = BPWM period (center) point output High.
     * |        |          |11 = BPWM period (center) point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter count to (PERIOD+1).
     * |        |          |Note: This bit is center point control when BPWM counter operating in up-down counter type.
     * |[25:24] |PRDPCTL4  |BPWM Period (Center) Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM period (center) point output Low.
     * |        |          |10 = BPWM period (center) point output High.
     * |        |          |11 = BPWM period (center) point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter count to (PERIOD+1).
     * |        |          |Note: This bit is center point control when BPWM counter operating in up-down counter type.
     * |[27:26] |PRDPCTL5  |BPWM Period (Center) Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM period (center) point output Low.
     * |        |          |10 = BPWM period (center) point output High.
     * |        |          |11 = BPWM period (center) point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter count to (PERIOD+1).
     * |        |          |Note: This bit is center point control when BPWM counter operating in up-down counter type.
     * @var BPWM_T::WGCTL1
     * Offset: 0xB4  BPWM Generation Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1:0]   |CMPUCTL0  |BPWM Compare Up Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM compare up point output Low.
     * |        |          |10 = BPWM compare up point output High.
     * |        |          |11 = BPWM compare up point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter up count to CMPDAT.
     * |[3:2]   |CMPUCTL1  |BPWM Compare Up Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM compare up point output Low.
     * |        |          |10 = BPWM compare up point output High.
     * |        |          |11 = BPWM compare up point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter up count to CMPDAT.
     * |[5:4]   |CMPUCTL2  |BPWM Compare Up Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM compare up point output Low.
     * |        |          |10 = BPWM compare up point output High.
     * |        |          |11 = BPWM compare up point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter up count to CMPDAT.
     * |[7:6]   |CMPUCTL3  |BPWM Compare Up Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM compare up point output Low.
     * |        |          |10 = BPWM compare up point output High.
     * |        |          |11 = BPWM compare up point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter up count to CMPDAT.
     * |[9:8]   |CMPUCTL4  |BPWM Compare Up Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM compare up point output Low.
     * |        |          |10 = BPWM compare up point output High.
     * |        |          |11 = BPWM compare up point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter up count to CMPDAT.
     * |[11:10] |CMPUCTL5  |BPWM Compare Up Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM compare up point output Low.
     * |        |          |10 = BPWM compare up point output High.
     * |        |          |11 = BPWM compare up point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter up count to CMPDAT.
     * |[17:16] |CMPDCTL0  |BPWM Compare Down Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM compare down point output Low.
     * |        |          |10 = BPWM compare down point output High.
     * |        |          |11 = BPWM compare down point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter down count to CMPDAT.
     * |[19:18] |CMPDCTL1  |BPWM Compare Down Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM compare down point output Low.
     * |        |          |10 = BPWM compare down point output High.
     * |        |          |11 = BPWM compare down point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter down count to CMPDAT.
     * |[21:20] |CMPDCTL2  |BPWM Compare Down Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM compare down point output Low.
     * |        |          |10 = BPWM compare down point output High.
     * |        |          |11 = BPWM compare down point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter down count to CMPDAT.
     * |[23:22] |CMPDCTL3  |BPWM Compare Down Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM compare down point output Low.
     * |        |          |10 = BPWM compare down point output High.
     * |        |          |11 = BPWM compare down point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter down count to CMPDAT.
     * |[25:24] |CMPDCTL4  |BPWM Compare Down Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM compare down point output Low.
     * |        |          |10 = BPWM compare down point output High.
     * |        |          |11 = BPWM compare down point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter down count to CMPDAT.
     * |[27:26] |CMPDCTL5  |BPWM Compare Down Point Control
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |00 = Do nothing.
     * |        |          |01 = BPWM compare down point output Low.
     * |        |          |10 = BPWM compare down point output High.
     * |        |          |11 = BPWM compare down point output Toggle.
     * |        |          |BPWM can control output level when BPWM counter down count to CMPDAT.
     * @var BPWM_T::MSKEN
     * Offset: 0xB8  BPWM Mask Enable Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |MSKEN0    |BPWM Mask Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |The BPWM output signal will be masked when this bit is enabled
     * |        |          |The corresponding BPWM channel n will output MSKDATn (BPWM_MSK[5:0]) data.
     * |        |          |0 = BPWM output signal is non-masked.
     * |        |          |1 = BPWM output signal is masked and output MSKDATn data.
     * |[1]     |MSKEN1    |BPWM Mask Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |The BPWM output signal will be masked when this bit is enabled
     * |        |          |The corresponding BPWM channel n will output MSKDATn (BPWM_MSK[5:0]) data.
     * |        |          |0 = BPWM output signal is non-masked.
     * |        |          |1 = BPWM output signal is masked and output MSKDATn data.
     * |[2]     |MSKEN2    |BPWM Mask Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |The BPWM output signal will be masked when this bit is enabled
     * |        |          |The corresponding BPWM channel n will output MSKDATn (BPWM_MSK[5:0]) data.
     * |        |          |0 = BPWM output signal is non-masked.
     * |        |          |1 = BPWM output signal is masked and output MSKDATn data.
     * |[3]     |MSKEN3    |BPWM Mask Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |The BPWM output signal will be masked when this bit is enabled
     * |        |          |The corresponding BPWM channel n will output MSKDATn (BPWM_MSK[5:0]) data.
     * |        |          |0 = BPWM output signal is non-masked.
     * |        |          |1 = BPWM output signal is masked and output MSKDATn data.
     * |[4]     |MSKEN4    |BPWM Mask Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |The BPWM output signal will be masked when this bit is enabled
     * |        |          |The corresponding BPWM channel n will output MSKDATn (BPWM_MSK[5:0]) data.
     * |        |          |0 = BPWM output signal is non-masked.
     * |        |          |1 = BPWM output signal is masked and output MSKDATn data.
     * |[5]     |MSKEN5    |BPWM Mask Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |The BPWM output signal will be masked when this bit is enabled
     * |        |          |The corresponding BPWM channel n will output MSKDATn (BPWM_MSK[5:0]) data.
     * |        |          |0 = BPWM output signal is non-masked.
     * |        |          |1 = BPWM output signal is masked and output MSKDATn data.
     * @var BPWM_T::MSK
     * Offset: 0xBC  BPWM Mask Data Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |MSKDAT0   |BPWM Mask Data Bit
     * |        |          |This data bit control the state of BPWMn output pin, if corresponding mask function is enabled
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Output logic low to BPWMn.
     * |        |          |1 = Output logic high to BPWMn.
     * |[1]     |MSKDAT1   |BPWM Mask Data Bit
     * |        |          |This data bit control the state of BPWMn output pin, if corresponding mask function is enabled
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Output logic low to BPWMn.
     * |        |          |1 = Output logic high to BPWMn.
     * |[2]     |MSKDAT2   |BPWM Mask Data Bit
     * |        |          |This data bit control the state of BPWMn output pin, if corresponding mask function is enabled
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Output logic low to BPWMn.
     * |        |          |1 = Output logic high to BPWMn.
     * |[3]     |MSKDAT3   |BPWM Mask Data Bit
     * |        |          |This data bit control the state of BPWMn output pin, if corresponding mask function is enabled
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Output logic low to BPWMn.
     * |        |          |1 = Output logic high to BPWMn.
     * |[4]     |MSKDAT4   |BPWM Mask Data Bit
     * |        |          |This data bit control the state of BPWMn output pin, if corresponding mask function is enabled
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Output logic low to BPWMn.
     * |        |          |1 = Output logic high to BPWMn.
     * |[5]     |MSKDAT5   |BPWM Mask Data Bit
     * |        |          |This data bit control the state of BPWMn output pin, if corresponding mask function is enabled
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Output logic low to BPWMn.
     * |        |          |1 = Output logic high to BPWMn.
     * @var BPWM_T::POLCTL
     * Offset: 0xD4  BPWM Pin Polar Inverse Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |PINV0     |BPWM PIN Polar Inverse Control
     * |        |          |The register controls polarity state of BPWMx_CHn output.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = BPWMx_CHn output polar inverse Disabled.
     * |        |          |1 = BPWMx_CHn output polar inverse Enabled.
     * |[1]     |PINV1     |BPWM PIN Polar Inverse Control
     * |        |          |The register controls polarity state of BPWMx_CHn output.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = BPWMx_CHn output polar inverse Disabled.
     * |        |          |1 = BPWMx_CHn output polar inverse Enabled.
     * |[2]     |PINV2     |BPWM PIN Polar Inverse Control
     * |        |          |The register controls polarity state of BPWMx_CHn output.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = BPWMx_CHn output polar inverse Disabled.
     * |        |          |1 = BPWMx_CHn output polar inverse Enabled.
     * |[3]     |PINV3     |BPWM PIN Polar Inverse Control
     * |        |          |The register controls polarity state of BPWMx_CHn output.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = BPWMx_CHn output polar inverse Disabled.
     * |        |          |1 = BPWMx_CHn output polar inverse Enabled.
     * |[4]     |PINV4     |BPWM PIN Polar Inverse Control
     * |        |          |The register controls polarity state of BPWMx_CHn output.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = BPWMx_CHn output polar inverse Disabled.
     * |        |          |1 = BPWMx_CHn output polar inverse Enabled.
     * |[5]     |PINV5     |BPWM PIN Polar Inverse Control
     * |        |          |The register controls polarity state of BPWMx_CHn output.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = BPWMx_CHn output polar inverse Disabled.
     * |        |          |1 = BPWMx_CHn output polar inverse Enabled.
     * @var BPWM_T::POEN
     * Offset: 0xD8  BPWM Output Enable Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |POEN0     |BPWM Pin Output Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = BPWMx_CHn pin at tri-state.
     * |        |          |1 = BPWMx_CHn pin in output mode.
     * |[1]     |POEN1     |BPWM Pin Output Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = BPWMx_CHn pin at tri-state.
     * |        |          |1 = BPWMx_CHn pin in output mode.
     * |[2]     |POEN2     |BPWM Pin Output Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = BPWMx_CHn pin at tri-state.
     * |        |          |1 = BPWMx_CHn pin in output mode.
     * |[3]     |POEN3     |BPWM Pin Output Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = BPWMx_CHn pin at tri-state.
     * |        |          |1 = BPWMx_CHn pin in output mode.
     * |[4]     |POEN4     |BPWM Pin Output Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = BPWMx_CHn pin at tri-state.
     * |        |          |1 = BPWMx_CHn pin in output mode.
     * |[5]     |POEN5     |BPWM Pin Output Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = BPWMx_CHn pin at tri-state.
     * |        |          |1 = BPWMx_CHn pin in output mode.
     * @var BPWM_T::INTEN
     * Offset: 0xE0  BPWM Interrupt Enable Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ZIEN0     |BPWM Zero Point Interrupt 0 Enable Bit
     * |        |          |0 = Zero point interrupt Disabled.
     * |        |          |1 = Zero point interrupt Enabled.
     * |[8]     |PIEN0     |BPWM Period Point Interrupt 0 Enable Bit
     * |        |          |0 = Period point interrupt Disabled.
     * |        |          |1 = Period point interrupt Enabled.
     * |        |          |Note: When up-down counter type period point means center point.
     * |[16]    |CMPUIEN0  |BPWM Compare Up Count Interrupt Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Compare up count interrupt Disabled.
     * |        |          |1 = Compare up count interrupt Enabled.
     * |[17]    |CMPUIEN1  |BPWM Compare Up Count Interrupt Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Compare up count interrupt Disabled.
     * |        |          |1 = Compare up count interrupt Enabled.
     * |[18]    |CMPUIEN2  |BPWM Compare Up Count Interrupt Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Compare up count interrupt Disabled.
     * |        |          |1 = Compare up count interrupt Enabled.
     * |[19]    |CMPUIEN3  |BPWM Compare Up Count Interrupt Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Compare up count interrupt Disabled.
     * |        |          |1 = Compare up count interrupt Enabled.
     * |[20]    |CMPUIEN4  |BPWM Compare Up Count Interrupt Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Compare up count interrupt Disabled.
     * |        |          |1 = Compare up count interrupt Enabled.
     * |[21]    |CMPUIEN5  |BPWM Compare Up Count Interrupt Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Compare up count interrupt Disabled.
     * |        |          |1 = Compare up count interrupt Enabled.
     * |[24]    |CMPDIEN0  |BPWM Compare Down Count Interrupt Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Compare down count interrupt Disabled.
     * |        |          |1 = Compare down count interrupt Enabled.
     * |[25]    |CMPDIEN1  |BPWM Compare Down Count Interrupt Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Compare down count interrupt Disabled.
     * |        |          |1 = Compare down count interrupt Enabled.
     * |[26]    |CMPDIEN2  |BPWM Compare Down Count Interrupt Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Compare down count interrupt Disabled.
     * |        |          |1 = Compare down count interrupt Enabled.
     * |[27]    |CMPDIEN3  |BPWM Compare Down Count Interrupt Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Compare down count interrupt Disabled.
     * |        |          |1 = Compare down count interrupt Enabled.
     * |[28]    |CMPDIEN4  |BPWM Compare Down Count Interrupt Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Compare down count interrupt Disabled.
     * |        |          |1 = Compare down count interrupt Enabled.
     * |[29]    |CMPDIEN5  |BPWM Compare Down Count Interrupt Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Compare down count interrupt Disabled.
     * |        |          |1 = Compare down count interrupt Enabled.
     * @var BPWM_T::INTSTS
     * Offset: 0xE8  BPWM Interrupt Flag Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ZIF0      |BPWM Zero Point Interrupt Flag 0
     * |        |          |This bit is set by hardware when BPWM_CH0 counter reaches zero, software can write 1 to clear this bit to zero.
     * |[8]     |PIF0      |BPWM Period Point Interrupt Flag 0
     * |        |          |This bit is set by hardware when BPWM_CH0 counter reaches BPWM_PERIOD0, software can write 1 to clear this bit to zero.
     * |[16]    |CMPUIF0   |BPWM Compare Up Count Interrupt Flag
     * |        |          |Flag is set by hardware when BPWM counter up count and reaches BPWM_CMPDATn, software can clear this bit by writing 1 to it.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Note: If CMPDAT equal to PERIOD, this flag is not working in up counter type selection.
     * |[17]    |CMPUIF1   |BPWM Compare Up Count Interrupt Flag
     * |        |          |Flag is set by hardware when BPWM counter up count and reaches BPWM_CMPDATn, software can clear this bit by writing 1 to it.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Note: If CMPDAT equal to PERIOD, this flag is not working in up counter type selection.
     * |[18]    |CMPUIF2   |BPWM Compare Up Count Interrupt Flag
     * |        |          |Flag is set by hardware when BPWM counter up count and reaches BPWM_CMPDATn, software can clear this bit by writing 1 to it.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Note: If CMPDAT equal to PERIOD, this flag is not working in up counter type selection.
     * |[19]    |CMPUIF3   |BPWM Compare Up Count Interrupt Flag
     * |        |          |Flag is set by hardware when BPWM counter up count and reaches BPWM_CMPDATn, software can clear this bit by writing 1 to it.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Note: If CMPDAT equal to PERIOD, this flag is not working in up counter type selection.
     * |[20]    |CMPUIF4   |BPWM Compare Up Count Interrupt Flag
     * |        |          |Flag is set by hardware when BPWM counter up count and reaches BPWM_CMPDATn, software can clear this bit by writing 1 to it.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Note: If CMPDAT equal to PERIOD, this flag is not working in up counter type selection.
     * |[21]    |CMPUIF5   |BPWM Compare Up Count Interrupt Flag
     * |        |          |Flag is set by hardware when BPWM counter up count and reaches BPWM_CMPDATn, software can clear this bit by writing 1 to it.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Note: If CMPDAT equal to PERIOD, this flag is not working in up counter type selection.
     * |[24]    |CMPDIF0   |BPWM Compare Down Count Interrupt Flag
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Flag is set by hardware when BPWM counter down count and reaches BPWM_CMPDATn, software can clear this bit by writing 1 to it.
     * |        |          |Note: If CMPDAT equal to PERIOD, this flag is not working in down counter type selection.
     * |[25]    |CMPDIF1   |BPWM Compare Down Count Interrupt Flag
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Flag is set by hardware when BPWM counter down count and reaches BPWM_CMPDATn, software can clear this bit by writing 1 to it.
     * |        |          |Note: If CMPDAT equal to PERIOD, this flag is not working in down counter type selection.
     * |[26]    |CMPDIF2   |BPWM Compare Down Count Interrupt Flag
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Flag is set by hardware when BPWM counter down count and reaches BPWM_CMPDATn, software can clear this bit by writing 1 to it.
     * |        |          |Note: If CMPDAT equal to PERIOD, this flag is not working in down counter type selection.
     * |[27]    |CMPDIF3   |BPWM Compare Down Count Interrupt Flag
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Flag is set by hardware when BPWM counter down count and reaches BPWM_CMPDATn, software can clear this bit by writing 1 to it.
     * |        |          |Note: If CMPDAT equal to PERIOD, this flag is not working in down counter type selection.
     * |[28]    |CMPDIF4   |BPWM Compare Down Count Interrupt Flag
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Flag is set by hardware when BPWM counter down count and reaches BPWM_CMPDATn, software can clear this bit by writing 1 to it.
     * |        |          |Note: If CMPDAT equal to PERIOD, this flag is not working in down counter type selection.
     * |[29]    |CMPDIF5   |BPWM Compare Down Count Interrupt Flag
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Flag is set by hardware when BPWM counter down count and reaches BPWM_CMPDATn, software can clear this bit by writing 1 to it.
     * |        |          |Note: If CMPDAT equal to PERIOD, this flag is not working in down counter type selection.
     * @var BPWM_T::ADCTS0
     * Offset: 0xF8  BPWM Trigger ADC Source Select Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |TRGSEL0   |BPWM_CH0 Trigger ADC Source Select
     * |        |          |0000 = BPWM_CH0 zero point.
     * |        |          |0001 = BPWM_CH0 period point.
     * |        |          |0010 = BPWM_CH0 zero or period point.
     * |        |          |0011 = BPWM_CH0 up-count compared point.
     * |        |          |0100 = BPWM_CH0 down-count compared point.
     * |        |          |1000 = BPWM_CH1 up-count compared point.
     * |        |          |1001 = BPWM_CH1 down-count compared point.
     * |        |          |Others reserved
     * |[7]     |TRGEN0    |BPWM_CH0 Trigger ADC Enable Bit
     * |[11:8]  |TRGSEL1   |BPWM_CH1 Trigger ADC Source Select
     * |        |          |0000 = BPWM_CH0 zero point.
     * |        |          |0001 = BPWM_CH0 period point.
     * |        |          |0010 = BPWM_CH0 zero or period point.
     * |        |          |0011 = BPWM_CH0 up-count compared point.
     * |        |          |0100 = BPWM_CH0 down-count compared point.
     * |        |          |1000 = BPWM_CH1 up-count compared point.
     * |        |          |1001 = BPWM_CH1 down-count compared point.
     * |        |          |Others reserved
     * |[15]    |TRGEN1    |BPWM_CH1 Trigger ADC Enable Bit
     * |[19:16] |TRGSEL2   |BPWM_CH2 Trigger ADC Source Select
     * |        |          |0000 = BPWM_CH2 zero point.
     * |        |          |0001 = BPWM_CH2 period point.
     * |        |          |0010 = BPWM_CH2 zero or period point.
     * |        |          |0011 = BPWM_CH2 up-count compared point.
     * |        |          |0100 = BPWM_CH2 down-count compared point.
     * |        |          |1000 = BPWM_CH3 up-count compared point.
     * |        |          |1001 = BPWM_CH3 down-count compared point.
     * |        |          |Others reserved
     * |[23]    |TRGEN2    |BPWM_CH2 Trigger ADC Enable Bit
     * |[27:24] |TRGSEL3   |BPWM_CH3 Trigger ADC Source Select
     * |        |          |0000 = BPWM_CH2 zero point.
     * |        |          |0001 = BPWM_CH2 period point.
     * |        |          |0010 = BPWM_CH2 zero or period point.
     * |        |          |0011 = BPWM_CH2 up-count compared point.
     * |        |          |0100 = BPWM_CH2 down-count compared point.
     * |        |          |1000 = BPWM_CH3 up-count compared point.
     * |        |          |1001 = BPWM_CH3 down-count compared point.
     * |        |          |Others reserved.
     * |[31]    |TRGEN3    |BPWM_CH3 Trigger ADC Enable Bit
     * @var BPWM_T::ADCTS1
     * Offset: 0xFC  BPWM Trigger ADC Source Select Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |TRGSEL4   |BPWM_CH4 Trigger ADC Source Select
     * |        |          |0000 = BPWM_CH4 zero point.
     * |        |          |0001 = BPWM_CH4 period point.
     * |        |          |0010 = BPWM_CH4 zero or period point.
     * |        |          |0011 = BPWM_CH4 up-count compared point.
     * |        |          |0100 = BPWM_CH4 down-count compared point.
     * |        |          |1000 = BPWM_CH5 up-count compared point.
     * |        |          |1001 = BPWM_CH5 down-count compared point.
     * |        |          |Others reserved
     * |[7]     |TRGEN4    |BPWM_CH4 Trigger ADC Enable Bit
     * |[11:8]  |TRGSEL5   |BPWM_CH5 Trigger ADC Source Select
     * |        |          |0000 = BPWM_CH4 zero point.
     * |        |          |0001 = BPWM_CH4 period point.
     * |        |          |0010 = BPWM_CH4 zero or period point.
     * |        |          |0011 = BPWM_CH4 up-count compared point.
     * |        |          |0100 = BPWM_CH4 down-count compared point.
     * |        |          |1000 = BPWM_CH5 up-count compared point.
     * |        |          |1001 = BPWM_CH5 down-count compared point.
     * |        |          |Others reserved
     * |[15]    |TRGEN5    |BPWM_CH5 Trigger ADC Enable Bit
     * @var BPWM_T::SSCTL
     * Offset: 0x110  BPWM Synchronous Start Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |SSEN0     |BPWM Synchronous Start Function 0 Enable Bit
     * |        |          |When synchronous start function is enabled, the BPWM_CH0 counter enable bit (CNTEN0) can be enabled by writing BPWM synchronous start trigger bit (CNTSEN).
     * |        |          |0 = BPWM synchronous start function Disabled.
     * |        |          |1 = BPWM synchronous start function Enabled.
     * |[9:8]   |SSRC      |BPWM Synchronous Start Source Select
     * |        |          |00 = Synchronous start source come from BPWM0.
     * |        |          |01 = Synchronous start source come from BPWM1.
     * |        |          |10 = Synchronous start source come from BPWM2.
     * |        |          |11 = Synchronous start source come from BPWM3.
     * @var BPWM_T::SSTRG
     * Offset: 0x114  BPWM Synchronous Start Trigger Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CNTSEN    |BPWM Counter Synchronous Start Enable Bit(Write Only)
     * |        |          |BPMW counter synchronous enable function is used to make PWM or BPWM channels start counting at the same time.
     * |        |          |Writing this bit to 1 will also set the counter enable bit if correlated BPWM channel counter synchronous start function is enabled.
     * @var BPWM_T::STATUS
     * Offset: 0x120  BPWM Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CNTMAX0   |Time-base Counter 0 Equal to 0xFFFF Latched Status
     * |        |          |0 = indicates the time-base counter never reached its maximum value 0xFFFF.
     * |        |          |1 = indicates the time-base counter reached its maximum value, software can write 1 to clear this bit.
     * |[16]    |ADCTRG0   |ADC Start of Conversion Status
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = No ADC start of conversion trigger event has occurred.
     * |        |          |1 = An ADC start of conversion trigger event has occurred, software can write 1 to clear this bit.
     * |[17]    |ADCTRG1   |ADC Start of Conversion Status
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = No EADC start of conversion trigger event has occurred.
     * |        |          |1 = An EADC start of conversion trigger event has occurred, software can write 1 to clear this bit.
     * |[18]    |ADCTRG2   |ADC Start of Conversion Status
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = No EADC start of conversion trigger event has occurred.
     * |        |          |1 = An EADC start of conversion trigger event has occurred, software can write 1 to clear this bit.
     * |[19]    |ADCTRG3   |ADC Start of Conversion Status
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = No EADC start of conversion trigger event has occurred.
     * |        |          |1 = An EADC start of conversion trigger event has occurred, software can write 1 to clear this bit.
     * |[20]    |ADCTRG4   |ADC Start of Conversion Status
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = No EADC start of conversion trigger event has occurred.
     * |        |          |1 = An EADC start of conversion trigger event has occurred, software can write 1 to clear this bit.
     * |[21]    |ADCTRG5   |ADC Start of Conversion Status
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = No EADC start of conversion trigger event has occurred.
     * |        |          |1 = An EADC start of conversion trigger event has occurred, software can write 1 to clear this bit.
     * @var BPWM_T::CAPINEN
     * Offset: 0x200  BPWM Capture Input Enable Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CAPINEN0  |Capture Input Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = BPWM Channel capture input path Disabled
     * |        |          |The input of BPWM channel capture function is always regarded as 0.
     * |        |          |1 = BPWM Channel capture input path Enabled
     * |        |          |The input of BPWM channel capture function comes from correlative multifunction pin.
     * |[1]     |CAPINEN1  |Capture Input Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = BPWM Channel capture input path Disabled
     * |        |          |The input of BPWM channel capture function is always regarded as 0.
     * |        |          |1 = BPWM Channel capture input path Enabled
     * |        |          |The input of BPWM channel capture function comes from correlative multifunction pin.
     * |[2]     |CAPINEN2  |Capture Input Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = BPWM Channel capture input path Disabled
     * |        |          |The input of BPWM channel capture function is always regarded as 0.
     * |        |          |1 = BPWM Channel capture input path Enabled
     * |        |          |The input of BPWM channel capture function comes from correlative multifunction pin.
     * |[3]     |CAPINEN3  |Capture Input Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = BPWM Channel capture input path Disabled
     * |        |          |The input of BPWM channel capture function is always regarded as 0.
     * |        |          |1 = BPWM Channel capture input path Enabled
     * |        |          |The input of BPWM channel capture function comes from correlative multifunction pin.
     * |[4]     |CAPINEN4  |Capture Input Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = BPWM Channel capture input path Disabled
     * |        |          |The input of BPWM channel capture function is always regarded as 0.
     * |        |          |1 = BPWM Channel capture input path Enabled
     * |        |          |The input of BPWM channel capture function comes from correlative multifunction pin.
     * |[5]     |CAPINEN5  |Capture Input Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = BPWM Channel capture input path Disabled
     * |        |          |The input of BPWM channel capture function is always regarded as 0.
     * |        |          |1 = BPWM Channel capture input path Enabled
     * |        |          |The input of BPWM channel capture function comes from correlative multifunction pin.
     * @var BPWM_T::CAPCTL
     * Offset: 0x204  BPWM Capture Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CAPEN0    |Capture Function Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Capture function Disabled. BPWM_RCAPDAT/BPWM_FCAPDAT register will not be up2025-07-16d.
     * |        |          |1 = Capture function Enabled
     * |        |          |Capture latched the BPWM counter value when detected rising or falling edge of input signal and saved to RCAPDAT (Rising latch) and FCAPDAT (Falling latch).
     * |[1]     |CAPEN1    |Capture Function Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Capture function Disabled. BPWM_RCAPDAT/BPWM_FCAPDAT register will not be up2025-07-16d.
     * |        |          |1 = Capture function Enabled
     * |        |          |Capture latched the BPWM counter value when detected rising or falling edge of input signal and saved to RCAPDAT (Rising latch) and FCAPDAT (Falling latch).
     * |[2]     |CAPEN2    |Capture Function Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Capture function Disabled. BPWM_RCAPDAT/BPWM_FCAPDAT register will not be up2025-07-16d.
     * |        |          |1 = Capture function Enabled
     * |        |          |Capture latched the BPWM counter value when detected rising or falling edge of input signal and saved to RCAPDAT (Rising latch) and FCAPDAT (Falling latch).
     * |[3]     |CAPEN3    |Capture Function Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Capture function Disabled. BPWM_RCAPDAT/BPWM_FCAPDAT register will not be up2025-07-16d.
     * |        |          |1 = Capture function Enabled
     * |        |          |Capture latched the BPWM counter value when detected rising or falling edge of input signal and saved to RCAPDAT (Rising latch) and FCAPDAT (Falling latch).
     * |[4]     |CAPEN4    |Capture Function Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Capture function Disabled. BPWM_RCAPDAT/BPWM_FCAPDAT register will not be up2025-07-16d.
     * |        |          |1 = Capture function Enabled
     * |        |          |Capture latched the BPWM counter value when detected rising or falling edge of input signal and saved to RCAPDAT (Rising latch) and FCAPDAT (Falling latch).
     * |[5]     |CAPEN5    |Capture Function Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Capture function Disabled. BPWM_RCAPDAT/BPWM_FCAPDAT register will not be up2025-07-16d.
     * |        |          |1 = Capture function Enabled
     * |        |          |Capture latched the BPWM counter value when detected rising or falling edge of input signal and saved to RCAPDAT (Rising latch) and FCAPDAT (Falling latch).
     * |[8]     |CAPINV0   |Capture Inverter Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Capture source inverter Disabled.
     * |        |          |1 = Capture source inverter Enabled. Reverse the input signal from GPIO.
     * |[9]     |CAPINV1   |Capture Inverter Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Capture source inverter Disabled.
     * |        |          |1 = Capture source inverter Enabled. Reverse the input signal from GPIO.
     * |[10]    |CAPINV2   |Capture Inverter Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Capture source inverter Disabled.
     * |        |          |1 = Capture source inverter Enabled. Reverse the input signal from GPIO.
     * |[11]    |CAPINV3   |Capture Inverter Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Capture source inverter Disabled.
     * |        |          |1 = Capture source inverter Enabled. Reverse the input signal from GPIO.
     * |[12]    |CAPINV4   |Capture Inverter Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Capture source inverter Disabled.
     * |        |          |1 = Capture source inverter Enabled. Reverse the input signal from GPIO.
     * |[13]    |CAPINV5   |Capture Inverter Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Capture source inverter Disabled.
     * |        |          |1 = Capture source inverter Enabled. Reverse the input signal from GPIO.
     * |[16]    |RCRLDEN0  |Rising Capture Reload Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Rising capture reload counter Disabled.
     * |        |          |1 = Rising capture reload counter Enabled.
     * |[17]    |RCRLDEN1  |Rising Capture Reload Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Rising capture reload counter Disabled.
     * |        |          |1 = Rising capture reload counter Enabled.
     * |[18]    |RCRLDEN2  |Rising Capture Reload Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Rising capture reload counter Disabled.
     * |        |          |1 = Rising capture reload counter Enabled.
     * |[19]    |RCRLDEN3  |Rising Capture Reload Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Rising capture reload counter Disabled.
     * |        |          |1 = Rising capture reload counter Enabled.
     * |[20]    |RCRLDEN4  |Rising Capture Reload Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Rising capture reload counter Disabled.
     * |        |          |1 = Rising capture reload counter Enabled.
     * |[21]    |RCRLDEN5  |Rising Capture Reload Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Rising capture reload counter Disabled.
     * |        |          |1 = Rising capture reload counter Enabled.
     * |[24]    |FCRLDEN0  |Falling Capture Reload Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Falling capture reload counter Disabled.
     * |        |          |1 = Falling capture reload counter Enabled.
     * |[25]    |FCRLDEN1  |Falling Capture Reload Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Falling capture reload counter Disabled.
     * |        |          |1 = Falling capture reload counter Enabled.
     * |[26]    |FCRLDEN2  |Falling Capture Reload Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Falling capture reload counter Disabled.
     * |        |          |1 = Falling capture reload counter Enabled.
     * |[27]    |FCRLDEN3  |Falling Capture Reload Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Falling capture reload counter Disabled.
     * |        |          |1 = Falling capture reload counter Enabled.
     * |[28]    |FCRLDEN4  |Falling Capture Reload Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Falling capture reload counter Disabled.
     * |        |          |1 = Falling capture reload counter Enabled.
     * |[29]    |FCRLDEN5  |Falling Capture Reload Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Falling capture reload counter Disabled.
     * |        |          |1 = Falling capture reload counter Enabled.
     * @var BPWM_T::CAPSTS
     * Offset: 0x208  BPWM Capture Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CRIFOV0   |Capture Rising Interrupt Flag Overrun Status (Read Only)
     * |        |          |This flag indicates if rising latch happened when the corresponding CAPRIF is 1.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Note: This bit will be cleared automatically when user clear corresponding CAPRIF.
     * |[1]     |CRIFOV1   |Capture Rising Interrupt Flag Overrun Status (Read Only)
     * |        |          |This flag indicates if rising latch happened when the corresponding CAPRIF is 1.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Note: This bit will be cleared automatically when user clear corresponding CAPRIF.
     * |[2]     |CRIFOV2   |Capture Rising Interrupt Flag Overrun Status (Read Only)
     * |        |          |This flag indicates if rising latch happened when the corresponding CAPRIF is 1.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Note: This bit will be cleared automatically when user clear corresponding CAPRIF.
     * |[3]     |CRIFOV3   |Capture Rising Interrupt Flag Overrun Status (Read Only)
     * |        |          |This flag indicates if rising latch happened when the corresponding CAPRIF is 1.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Note: This bit will be cleared automatically when user clear corresponding CAPRIF.
     * |[4]     |CRIFOV4   |Capture Rising Interrupt Flag Overrun Status (Read Only)
     * |        |          |This flag indicates if rising latch happened when the corresponding CAPRIF is 1.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Note: This bit will be cleared automatically when user clear corresponding CAPRIF.
     * |[5]     |CRIFOV5   |Capture Rising Interrupt Flag Overrun Status (Read Only)
     * |        |          |This flag indicates if rising latch happened when the corresponding CAPRIF is 1.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Note: This bit will be cleared automatically when user clear corresponding CAPRIF.
     * |[8]     |CFIFOV0   |Capture Falling Interrupt Flag Overrun Status (Read Only)
     * |        |          |This flag indicates if falling latch happened when the corresponding CAPFIF is 1.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Note: This bit will be cleared automatically when user clear corresponding CAPFIF.
     * |[9]     |CFIFOV1   |Capture Falling Interrupt Flag Overrun Status (Read Only)
     * |        |          |This flag indicates if falling latch happened when the corresponding CAPFIF is 1.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Note: This bit will be cleared automatically when user clear corresponding CAPFIF.
     * |[10]    |CFIFOV2   |Capture Falling Interrupt Flag Overrun Status (Read Only)
     * |        |          |This flag indicates if falling latch happened when the corresponding CAPFIF is 1.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Note: This bit will be cleared automatically when user clear corresponding CAPFIF.
     * |[11]    |CFIFOV3   |Capture Falling Interrupt Flag Overrun Status (Read Only)
     * |        |          |This flag indicates if falling latch happened when the corresponding CAPFIF is 1.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Note: This bit will be cleared automatically when user clear corresponding CAPFIF.
     * |[12]    |CFIFOV4   |Capture Falling Interrupt Flag Overrun Status (Read Only)
     * |        |          |This flag indicates if falling latch happened when the corresponding CAPFIF is 1.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Note: This bit will be cleared automatically when user clear corresponding CAPFIF.
     * |[13]    |CFIFOV5   |Capture Falling Interrupt Flag Overrun Status (Read Only)
     * |        |          |This flag indicates if falling latch happened when the corresponding CAPFIF is 1.
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |Note: This bit will be cleared automatically when user clear corresponding CAPFIF.
     * @var BPWM_T::CAPIEN
     * Offset: 0x250  BPWM Capture Interrupt Enable Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[5:0]   |CAPRIENn  |BPWM Capture Rising Latch Interrupt Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Capture rising edge latch interrupt Disabled.
     * |        |          |1 = Capture rising edge latch interrupt Enabled.
     * |[13:8]  |CAPFIENn  |BPWM Capture Falling Latch Interrupt Enable Bits
     * |        |          |Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = Capture falling edge latch interrupt Disabled.
     * |        |          |1 = Capture falling edge latch interrupt Enabled.
     * @var BPWM_T::CAPIF
     * Offset: 0x254  BPWM Capture Interrupt Flag Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CAPRIF0   |BPWM Capture Rising Latch Interrupt Flag
     * |        |          |This bit is writing 1 to clear. Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = No capture rising latch condition happened.
     * |        |          |1 = Capture rising latch condition happened, this flag will be set to high.
     * |[1]     |CAPRIF1   |BPWM Capture Rising Latch Interrupt Flag
     * |        |          |This bit is writing 1 to clear. Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = No capture rising latch condition happened.
     * |        |          |1 = Capture rising latch condition happened, this flag will be set to high.
     * |[2]     |CAPRIF2   |BPWM Capture Rising Latch Interrupt Flag
     * |        |          |This bit is writing 1 to clear. Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = No capture rising latch condition happened.
     * |        |          |1 = Capture rising latch condition happened, this flag will be set to high.
     * |[3]     |CAPRIF3   |BPWM Capture Rising Latch Interrupt Flag
     * |        |          |This bit is writing 1 to clear. Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = No capture rising latch condition happened.
     * |        |          |1 = Capture rising latch condition happened, this flag will be set to high.
     * |[4]     |CAPRIF4   |BPWM Capture Rising Latch Interrupt Flag
     * |        |          |This bit is writing 1 to clear. Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = No capture rising latch condition happened.
     * |        |          |1 = Capture rising latch condition happened, this flag will be set to high.
     * |[5]     |CAPRIF5   |BPWM Capture Rising Latch Interrupt Flag
     * |        |          |This bit is writing 1 to clear. Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = No capture rising latch condition happened.
     * |        |          |1 = Capture rising latch condition happened, this flag will be set to high.
     * |[8]     |CAPFIF0   |BPWM Capture Falling Latch Interrupt Flag
     * |        |          |This bit is writing 1 to clear. Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = No capture falling latch condition happened.
     * |        |          |1 = Capture falling latch condition happened, this flag will be set to high.
     * |[9]     |CAPFIF1   |BPWM Capture Falling Latch Interrupt Flag
     * |        |          |This bit is writing 1 to clear. Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = No capture falling latch condition happened.
     * |        |          |1 = Capture falling latch condition happened, this flag will be set to high.
     * |[10]    |CAPFIF2   |BPWM Capture Falling Latch Interrupt Flag
     * |        |          |This bit is writing 1 to clear. Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = No capture falling latch condition happened.
     * |        |          |1 = Capture falling latch condition happened, this flag will be set to high.
     * |[11]    |CAPFIF3   |BPWM Capture Falling Latch Interrupt Flag
     * |        |          |This bit is writing 1 to clear. Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = No capture falling latch condition happened.
     * |        |          |1 = Capture falling latch condition happened, this flag will be set to high.
     * |[12]    |CAPFIF4   |BPWM Capture Falling Latch Interrupt Flag
     * |        |          |This bit is writing 1 to clear. Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = No capture falling latch condition happened.
     * |        |          |1 = Capture falling latch condition happened, this flag will be set to high.
     * |[13]    |CAPFIF5   |BPWM Capture Falling Latch Interrupt Flag
     * |        |          |This bit is writing 1 to clear. Each bit n controls the corresponding BPWM channel n.
     * |        |          |0 = No capture falling latch condition happened.
     * |        |          |1 = Capture falling latch condition happened, this flag will be set to high.
     * @var BPWM_T::PBUF
     * Offset: 0x304  BPWM PERIOD Buffer
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |PBUF      |BPWM Period Buffer (Read Only)
     * |        |          |Used as PERIOD active register.
     * @var BPWM_T::CMPBUF[6]
     * Offset: 0x31C  BPWM CMPDAT 0~5 Buffer
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |CMPBUF    |BPWM Comparator Buffer (Read Only)
     * |        |          |Used as CMPDAT active register.
     */
    __IO uint32_t CTL0;                  /*!< [0x0000] BPWM Control Register 0                                          */
    __IO uint32_t CTL1;                  /*!< [0x0004] BPWM Control Register 1                                          */
    __I  uint32_t RESERVED0[2];
    __IO uint32_t CLKSRC;                /*!< [0x0010] BPWM Clock Source Register                                       */
    __IO uint32_t CLKPSC;                /*!< [0x0014] BPWM Clock Prescale Register                                     */
    __I  uint32_t RESERVED1[2];
    __IO uint32_t CNTEN;                 /*!< [0x0020] BPWM Counter Enable Register                                     */
    __IO uint32_t CNTCLR;                /*!< [0x0024] BPWM Clear Counter Register                                      */
    __I  uint32_t RESERVED2[2];
    __IO uint32_t PERIOD;                /*!< [0x0030] BPWM Period Register                                             */
    __I  uint32_t RESERVED3[7];
    __IO uint32_t CMPDAT[6];             /*!< [0x0050~0x0064] BPWM Comparator Register 0~5                              */
    __I  uint32_t RESERVED4[10];
    __I  uint32_t CNT;                   /*!< [0x0090] BPWM Counter Register                                            */
    __I  uint32_t RESERVED5[7];
    __IO uint32_t WGCTL0;                /*!< [0x00b0] BPWM Generation Register 0                                       */
    __IO uint32_t WGCTL1;                /*!< [0x00b4] BPWM Generation Register 1                                       */
    __IO uint32_t MSKEN;                 /*!< [0x00b8] BPWM Mask Enable Register                                        */
    __IO uint32_t MSK;                   /*!< [0x00bc] BPWM Mask Data Register                                          */
    __I  uint32_t RESERVED6[5];
    __IO uint32_t POLCTL;                /*!< [0x00d4] BPWM Pin Polar Inverse Register                                  */
    __IO uint32_t POEN;                  /*!< [0x00d8] BPWM Output Enable Register                                      */
    __I  uint32_t RESERVED7[1];
    __IO uint32_t INTEN;                 /*!< [0x00e0] BPWM Interrupt Enable Register                                   */
    __I  uint32_t RESERVED8[1];
    __IO uint32_t INTSTS;                /*!< [0x00e8] BPWM Interrupt Flag Register                                     */
    __I  uint32_t RESERVED9[3];
    __IO uint32_t ADCTS0;                /*!< [0x00f8] BPWM Trigger ADC Source Select Register 0                       */
    __IO uint32_t ADCTS1;                /*!< [0x00fc] BPWM Trigger ADC Source Select Register 1                       */
    __I  uint32_t RESERVED10[4];
    __IO uint32_t SSCTL;                 /*!< [0x0110] BPWM Synchronous Start Control Register                          */
    __O  uint32_t SSTRG;                 /*!< [0x0114] BPWM Synchronous Start Trigger Register                          */
    __I  uint32_t RESERVED11[2];
    __IO uint32_t STATUS;                /*!< [0x0120] BPWM Status Register                                             */
    __I  uint32_t RESERVED12[55];
    __IO uint32_t CAPINEN;               /*!< [0x0200] BPWM Capture Input Enable Register                               */
    __IO uint32_t CAPCTL;                /*!< [0x0204] BPWM Capture Control Register                                    */
    __I  uint32_t CAPSTS;                /*!< [0x0208] BPWM Capture Status Register                                     */
    BCAPDAT_T CAPDAT[6];                  /*!< [0x020c~0x0238] BPWM Rising and Falling Capture Data Register 0~5         */
    __I  uint32_t RESERVED13[5];
    __IO uint32_t CAPIEN;                /*!< [0x0250] BPWM Capture Interrupt Enable Register                           */
    __IO uint32_t CAPIF;                 /*!< [0x0254] BPWM Capture Interrupt Flag Register                             */
    __I  uint32_t RESERVED14[43];
    __I  uint32_t PBUF;                  /*!< [0x0304] BPWM PERIOD Buffer                                               */
    __I  uint32_t RESERVED15[5];
    __I  uint32_t CMPBUF[6];             /*!< [0x031c~0x0330] BPWM CMPDAT 0~5 Buffer                                  */

} BPWM_T;

/**
    @addtogroup BPWM_CONST BPWM Bit Field Definition
    Constant Definitions for BPWM Controller
    @{
*/

#define BPWM_CTL0_CTRLD0_Pos             (0)                                               /*!< BPWM_T::CTL0: CTRLD0 Position          */
#define BPWM_CTL0_CTRLD0_Msk             (0x1ul << BPWM_CTL0_CTRLD0_Pos)                   /*!< BPWM_T::CTL0: CTRLD0 Mask              */

#define BPWM_CTL0_CTRLD1_Pos             (1)                                               /*!< BPWM_T::CTL0: CTRLD1 Position          */
#define BPWM_CTL0_CTRLD1_Msk             (0x1ul << BPWM_CTL0_CTRLD1_Pos)                   /*!< BPWM_T::CTL0: CTRLD1 Mask              */

#define BPWM_CTL0_CTRLD2_Pos             (2)                                               /*!< BPWM_T::CTL0: CTRLD2 Position          */
#define BPWM_CTL0_CTRLD2_Msk             (0x1ul << BPWM_CTL0_CTRLD2_Pos)                   /*!< BPWM_T::CTL0: CTRLD2 Mask              */

#define BPWM_CTL0_CTRLD3_Pos             (3)                                               /*!< BPWM_T::CTL0: CTRLD3 Position          */
#define BPWM_CTL0_CTRLD3_Msk             (0x1ul << BPWM_CTL0_CTRLD3_Pos)                   /*!< BPWM_T::CTL0: CTRLD3 Mask              */

#define BPWM_CTL0_CTRLD4_Pos             (4)                                               /*!< BPWM_T::CTL0: CTRLD4 Position          */
#define BPWM_CTL0_CTRLD4_Msk             (0x1ul << BPWM_CTL0_CTRLD4_Pos)                   /*!< BPWM_T::CTL0: CTRLD4 Mask              */

#define BPWM_CTL0_CTRLD5_Pos             (5)                                               /*!< BPWM_T::CTL0: CTRLD5 Position          */
#define BPWM_CTL0_CTRLD5_Msk             (0x1ul << BPWM_CTL0_CTRLD5_Pos)                   /*!< BPWM_T::CTL0: CTRLD5 Mask              */

#define BPWM_CTL0_IMMLDEN0_Pos           (16)                                              /*!< BPWM_T::CTL0: IMMLDEN0 Position        */
#define BPWM_CTL0_IMMLDEN0_Msk           (0x1ul << BPWM_CTL0_IMMLDEN0_Pos)                 /*!< BPWM_T::CTL0: IMMLDEN0 Mask            */

#define BPWM_CTL0_IMMLDEN1_Pos           (17)                                              /*!< BPWM_T::CTL0: IMMLDEN1 Position        */
#define BPWM_CTL0_IMMLDEN1_Msk           (0x1ul << BPWM_CTL0_IMMLDEN1_Pos)                 /*!< BPWM_T::CTL0: IMMLDEN1 Mask            */

#define BPWM_CTL0_IMMLDEN2_Pos           (18)                                              /*!< BPWM_T::CTL0: IMMLDEN2 Position        */
#define BPWM_CTL0_IMMLDEN2_Msk           (0x1ul << BPWM_CTL0_IMMLDEN2_Pos)                 /*!< BPWM_T::CTL0: IMMLDEN2 Mask            */

#define BPWM_CTL0_IMMLDEN3_Pos           (19)                                              /*!< BPWM_T::CTL0: IMMLDEN3 Position        */
#define BPWM_CTL0_IMMLDEN3_Msk           (0x1ul << BPWM_CTL0_IMMLDEN3_Pos)                 /*!< BPWM_T::CTL0: IMMLDEN3 Mask            */

#define BPWM_CTL0_IMMLDEN4_Pos           (20)                                              /*!< BPWM_T::CTL0: IMMLDEN4 Position        */
#define BPWM_CTL0_IMMLDEN4_Msk           (0x1ul << BPWM_CTL0_IMMLDEN4_Pos)                 /*!< BPWM_T::CTL0: IMMLDEN4 Mask            */

#define BPWM_CTL0_IMMLDEN5_Pos           (21)                                              /*!< BPWM_T::CTL0: IMMLDEN5 Position        */
#define BPWM_CTL0_IMMLDEN5_Msk           (0x1ul << BPWM_CTL0_IMMLDEN5_Pos)                 /*!< BPWM_T::CTL0: IMMLDEN5 Mask            */

#define BPWM_CTL0_DBGHALT_Pos            (30)                                              /*!< BPWM_T::CTL0: DBGHALT Position         */
#define BPWM_CTL0_DBGHALT_Msk            (0x1ul << BPWM_CTL0_DBGHALT_Pos)                  /*!< BPWM_T::CTL0: DBGHALT Mask             */

#define BPWM_CTL0_DBGTRIOFF_Pos          (31)                                              /*!< BPWM_T::CTL0: DBGTRIOFF Position       */
#define BPWM_CTL0_DBGTRIOFF_Msk          (0x1ul << BPWM_CTL0_DBGTRIOFF_Pos)                /*!< BPWM_T::CTL0: DBGTRIOFF Mask           */

#define BPWM_CTL1_CNTTYPE0_Pos           (0)                                               /*!< BPWM_T::CTL1: CNTTYPE0 Position        */
#define BPWM_CTL1_CNTTYPE0_Msk           (0x3ul << BPWM_CTL1_CNTTYPE0_Pos)                 /*!< BPWM_T::CTL1: CNTTYPE0 Mask            */

#define BPWM_CLKSRC_ECLKSRC0_Pos         (0)                                               /*!< BPWM_T::CLKSRC: ECLKSRC0 Position      */
#define BPWM_CLKSRC_ECLKSRC0_Msk         (0x7ul << BPWM_CLKSRC_ECLKSRC0_Pos)               /*!< BPWM_T::CLKSRC: ECLKSRC0 Mask          */

#define BPWM_CLKPSC_CLKPSC_Pos           (0)                                               /*!< BPWM_T::CLKPSC: CLKPSC Position        */
#define BPWM_CLKPSC_CLKPSC_Msk           (0xffful << BPWM_CLKPSC_CLKPSC_Pos)               /*!< BPWM_T::CLKPSC: CLKPSC Mask            */

#define BPWM_CNTEN_CNTEN0_Pos            (0)                                               /*!< BPWM_T::CNTEN: CNTEN0 Position         */
#define BPWM_CNTEN_CNTEN0_Msk            (0x1ul << BPWM_CNTEN_CNTEN0_Pos)                  /*!< BPWM_T::CNTEN: CNTEN0 Mask             */

#define BPWM_CNTCLR_CNTCLR0_Pos          (0)                                               /*!< BPWM_T::CNTCLR: CNTCLR0 Position       */
#define BPWM_CNTCLR_CNTCLR0_Msk          (0x1ul << BPWM_CNTCLR_CNTCLR0_Pos)                /*!< BPWM_T::CNTCLR: CNTCLR0 Mask           */

#define BPWM_PERIOD_PERIOD_Pos           (0)                                               /*!< BPWM_T::PERIOD: PERIOD Position        */
#define BPWM_PERIOD_PERIOD_Msk           (0xfffful << BPWM_PERIOD_PERIOD_Pos)              /*!< BPWM_T::PERIOD: PERIOD Mask            */

#define BPWM_CMPDAT0_CMPDAT_Pos          (0)                                               /*!< BPWM_T::CMPDAT0: CMPDAT Position       */
#define BPWM_CMPDAT0_CMPDAT_Msk          (0xfffful << BPWM_CMPDAT0_CMPDAT_Pos)             /*!< BPWM_T::CMPDAT0: CMPDAT Mask           */

#define BPWM_CMPDAT1_CMPDAT_Pos          (0)                                               /*!< BPWM_T::CMPDAT1: CMPDAT Position       */
#define BPWM_CMPDAT1_CMPDAT_Msk          (0xfffful << BPWM_CMPDAT1_CMPDAT_Pos)             /*!< BPWM_T::CMPDAT1: CMPDAT Mask           */

#define BPWM_CMPDAT2_CMPDAT_Pos          (0)                                               /*!< BPWM_T::CMPDAT2: CMPDAT Position       */
#define BPWM_CMPDAT2_CMPDAT_Msk          (0xfffful << BPWM_CMPDAT2_CMPDAT_Pos)             /*!< BPWM_T::CMPDAT2: CMPDAT Mask           */

#define BPWM_CMPDAT3_CMPDAT_Pos          (0)                                               /*!< BPWM_T::CMPDAT3: CMPDAT Position       */
#define BPWM_CMPDAT3_CMPDAT_Msk          (0xfffful << BPWM_CMPDAT3_CMPDAT_Pos)             /*!< BPWM_T::CMPDAT3: CMPDAT Mask           */

#define BPWM_CMPDAT4_CMPDAT_Pos          (0)                                               /*!< BPWM_T::CMPDAT4: CMPDAT Position       */
#define BPWM_CMPDAT4_CMPDAT_Msk          (0xfffful << BPWM_CMPDAT4_CMPDAT_Pos)             /*!< BPWM_T::CMPDAT4: CMPDAT Mask           */

#define BPWM_CMPDAT5_CMPDAT_Pos          (0)                                               /*!< BPWM_T::CMPDAT5: CMPDAT Position       */
#define BPWM_CMPDAT5_CMPDAT_Msk          (0xfffful << BPWM_CMPDAT5_CMPDAT_Pos)             /*!< BPWM_T::CMPDAT5: CMPDAT Mask           */

#define BPWM_CNT_CNT_Pos                 (0)                                               /*!< BPWM_T::CNT: CNT Position              */
#define BPWM_CNT_CNT_Msk                 (0xfffful << BPWM_CNT_CNT_Pos)                    /*!< BPWM_T::CNT: CNT Mask                  */

#define BPWM_CNT_DIRF_Pos                (16)                                              /*!< BPWM_T::CNT: DIRF Position             */
#define BPWM_CNT_DIRF_Msk                (0x1ul << BPWM_CNT_DIRF_Pos)                      /*!< BPWM_T::CNT: DIRF Mask                 */

#define BPWM_WGCTL0_ZPCTL0_Pos           (0)                                               /*!< BPWM_T::WGCTL0: ZPCTL0 Position        */
#define BPWM_WGCTL0_ZPCTL0_Msk           (0x3ul << BPWM_WGCTL0_ZPCTL0_Pos)                 /*!< BPWM_T::WGCTL0: ZPCTL0 Mask            */

#define BPWM_WGCTL0_ZPCTL1_Pos           (2)                                               /*!< BPWM_T::WGCTL0: ZPCTL1 Position        */
#define BPWM_WGCTL0_ZPCTL1_Msk           (0x3ul << BPWM_WGCTL0_ZPCTL1_Pos)                 /*!< BPWM_T::WGCTL0: ZPCTL1 Mask            */

#define BPWM_WGCTL0_ZPCTL2_Pos           (4)                                               /*!< BPWM_T::WGCTL0: ZPCTL2 Position        */
#define BPWM_WGCTL0_ZPCTL2_Msk           (0x3ul << BPWM_WGCTL0_ZPCTL2_Pos)                 /*!< BPWM_T::WGCTL0: ZPCTL2 Mask            */

#define BPWM_WGCTL0_ZPCTL3_Pos           (6)                                               /*!< BPWM_T::WGCTL0: ZPCTL3 Position        */
#define BPWM_WGCTL0_ZPCTL3_Msk           (0x3ul << BPWM_WGCTL0_ZPCTL3_Pos)                 /*!< BPWM_T::WGCTL0: ZPCTL3 Mask            */

#define BPWM_WGCTL0_ZPCTL4_Pos           (8)                                               /*!< BPWM_T::WGCTL0: ZPCTL4 Position        */
#define BPWM_WGCTL0_ZPCTL4_Msk           (0x3ul << BPWM_WGCTL0_ZPCTL4_Pos)                 /*!< BPWM_T::WGCTL0: ZPCTL4 Mask            */

#define BPWM_WGCTL0_ZPCTL5_Pos           (10)                                              /*!< BPWM_T::WGCTL0: ZPCTL5 Position        */
#define BPWM_WGCTL0_ZPCTL5_Msk           (0x3ul << BPWM_WGCTL0_ZPCTL5_Pos)                 /*!< BPWM_T::WGCTL0: ZPCTL5 Mask            */

#define BPWM_WGCTL0_ZPCTLn_Pos           (0)                                               /*!< BPWM_T::WGCTL0: ZPCTLn Position        */
#define BPWM_WGCTL0_ZPCTLn_Msk           (0xffful << BPWM_WGCTL0_ZPCTLn_Pos)               /*!< BPWM_T::WGCTL0: ZPCTLn Mask            */

#define BPWM_WGCTL0_PRDPCTL0_Pos         (16)                                              /*!< BPWM_T::WGCTL0: PRDPCTL0 Position      */
#define BPWM_WGCTL0_PRDPCTL0_Msk         (0x3ul << BPWM_WGCTL0_PRDPCTL0_Pos)               /*!< BPWM_T::WGCTL0: PRDPCTL0 Mask          */

#define BPWM_WGCTL0_PRDPCTL1_Pos         (18)                                              /*!< BPWM_T::WGCTL0: PRDPCTL1 Position      */
#define BPWM_WGCTL0_PRDPCTL1_Msk         (0x3ul << BPWM_WGCTL0_PRDPCTL1_Pos)               /*!< BPWM_T::WGCTL0: PRDPCTL1 Mask          */

#define BPWM_WGCTL0_PRDPCTL2_Pos         (20)                                              /*!< BPWM_T::WGCTL0: PRDPCTL2 Position      */
#define BPWM_WGCTL0_PRDPCTL2_Msk         (0x3ul << BPWM_WGCTL0_PRDPCTL2_Pos)               /*!< BPWM_T::WGCTL0: PRDPCTL2 Mask          */

#define BPWM_WGCTL0_PRDPCTL3_Pos         (22)                                              /*!< BPWM_T::WGCTL0: PRDPCTL3 Position      */
#define BPWM_WGCTL0_PRDPCTL3_Msk         (0x3ul << BPWM_WGCTL0_PRDPCTL3_Pos)               /*!< BPWM_T::WGCTL0: PRDPCTL3 Mask          */

#define BPWM_WGCTL0_PRDPCTL4_Pos         (24)                                              /*!< BPWM_T::WGCTL0: PRDPCTL4 Position      */
#define BPWM_WGCTL0_PRDPCTL4_Msk         (0x3ul << BPWM_WGCTL0_PRDPCTL4_Pos)               /*!< BPWM_T::WGCTL0: PRDPCTL4 Mask          */

#define BPWM_WGCTL0_PRDPCTL5_Pos         (26)                                              /*!< BPWM_T::WGCTL0: PRDPCTL5 Position      */
#define BPWM_WGCTL0_PRDPCTL5_Msk         (0x3ul << BPWM_WGCTL0_PRDPCTL5_Pos)               /*!< BPWM_T::WGCTL0: PRDPCTL5 Mask          */

#define BPWM_WGCTL0_PRDPCTLn_Pos         (16)                                              /*!< BPWM_T::WGCTL0: PRDPCTLn Position      */
#define BPWM_WGCTL0_PRDPCTLn_Msk         (0xffful << BPWM_WGCTL0_PRDPCTLn_Pos)             /*!< BPWM_T::WGCTL0: PRDPCTLn Mask          */

#define BPWM_WGCTL1_CMPUCTL0_Pos         (0)                                               /*!< BPWM_T::WGCTL1: CMPUCTL0 Position      */
#define BPWM_WGCTL1_CMPUCTL0_Msk         (0x3ul << BPWM_WGCTL1_CMPUCTL0_Pos)               /*!< BPWM_T::WGCTL1: CMPUCTL0 Mask          */

#define BPWM_WGCTL1_CMPUCTL1_Pos         (2)                                               /*!< BPWM_T::WGCTL1: CMPUCTL1 Position      */
#define BPWM_WGCTL1_CMPUCTL1_Msk         (0x3ul << BPWM_WGCTL1_CMPUCTL1_Pos)               /*!< BPWM_T::WGCTL1: CMPUCTL1 Mask          */

#define BPWM_WGCTL1_CMPUCTL2_Pos         (4)                                               /*!< BPWM_T::WGCTL1: CMPUCTL2 Position      */
#define BPWM_WGCTL1_CMPUCTL2_Msk         (0x3ul << BPWM_WGCTL1_CMPUCTL2_Pos)               /*!< BPWM_T::WGCTL1: CMPUCTL2 Mask          */

#define BPWM_WGCTL1_CMPUCTL3_Pos         (6)                                               /*!< BPWM_T::WGCTL1: CMPUCTL3 Position      */
#define BPWM_WGCTL1_CMPUCTL3_Msk         (0x3ul << BPWM_WGCTL1_CMPUCTL3_Pos)               /*!< BPWM_T::WGCTL1: CMPUCTL3 Mask          */

#define BPWM_WGCTL1_CMPUCTL4_Pos         (8)                                               /*!< BPWM_T::WGCTL1: CMPUCTL4 Position      */
#define BPWM_WGCTL1_CMPUCTL4_Msk         (0x3ul << BPWM_WGCTL1_CMPUCTL4_Pos)               /*!< BPWM_T::WGCTL1: CMPUCTL4 Mask          */

#define BPWM_WGCTL1_CMPUCTL5_Pos         (10)                                              /*!< BPWM_T::WGCTL1: CMPUCTL5 Position      */
#define BPWM_WGCTL1_CMPUCTL5_Msk         (0x3ul << BPWM_WGCTL1_CMPUCTL5_Pos)               /*!< BPWM_T::WGCTL1: CMPUCTL5 Mask          */

#define BPWM_WGCTL1_CMPUCTLn_Pos         (0)                                               /*!< BPWM_T::WGCTL1: CMPUCTLn Position      */
#define BPWM_WGCTL1_CMPUCTLn_Msk         (0xffful << BPWM_WGCTL1_CMPUCTLn_Pos)             /*!< BPWM_T::WGCTL1: CMPUCTLn Mask          */

#define BPWM_WGCTL1_CMPDCTL0_Pos         (16)                                              /*!< BPWM_T::WGCTL1: CMPDCTL0 Position      */
#define BPWM_WGCTL1_CMPDCTL0_Msk         (0x3ul << BPWM_WGCTL1_CMPDCTL0_Pos)               /*!< BPWM_T::WGCTL1: CMPDCTL0 Mask          */

#define BPWM_WGCTL1_CMPDCTL1_Pos         (18)                                              /*!< BPWM_T::WGCTL1: CMPDCTL1 Position      */
#define BPWM_WGCTL1_CMPDCTL1_Msk         (0x3ul << BPWM_WGCTL1_CMPDCTL1_Pos)               /*!< BPWM_T::WGCTL1: CMPDCTL1 Mask          */

#define BPWM_WGCTL1_CMPDCTL2_Pos         (20)                                              /*!< BPWM_T::WGCTL1: CMPDCTL2 Position      */
#define BPWM_WGCTL1_CMPDCTL2_Msk         (0x3ul << BPWM_WGCTL1_CMPDCTL2_Pos)               /*!< BPWM_T::WGCTL1: CMPDCTL2 Mask          */

#define BPWM_WGCTL1_CMPDCTL3_Pos         (22)                                              /*!< BPWM_T::WGCTL1: CMPDCTL3 Position      */
#define BPWM_WGCTL1_CMPDCTL3_Msk         (0x3ul << BPWM_WGCTL1_CMPDCTL3_Pos)               /*!< BPWM_T::WGCTL1: CMPDCTL3 Mask          */

#define BPWM_WGCTL1_CMPDCTL4_Pos         (24)                                              /*!< BPWM_T::WGCTL1: CMPDCTL4 Position      */
#define BPWM_WGCTL1_CMPDCTL4_Msk         (0x3ul << BPWM_WGCTL1_CMPDCTL4_Pos)               /*!< BPWM_T::WGCTL1: CMPDCTL4 Mask          */

#define BPWM_WGCTL1_CMPDCTL5_Pos         (26)                                              /*!< BPWM_T::WGCTL1: CMPDCTL5 Position      */
#define BPWM_WGCTL1_CMPDCTL5_Msk         (0x3ul << BPWM_WGCTL1_CMPDCTL5_Pos)               /*!< BPWM_T::WGCTL1: CMPDCTL5 Mask          */

#define BPWM_WGCTL1_CMPDCTLn_Pos         (16)                                              /*!< BPWM_T::WGCTL1: CMPDCTLn Position      */
#define BPWM_WGCTL1_CMPDCTLn_Msk         (0xffful << BPWM_WGCTL1_CMPDCTLn_Pos)             /*!< BPWM_T::WGCTL1: CMPDCTLn Mask          */

#define BPWM_MSKEN_MSKEN0_Pos            (0)                                               /*!< BPWM_T::MSKEN: MSKEN0 Position         */
#define BPWM_MSKEN_MSKEN0_Msk            (0x1ul << BPWM_MSKEN_MSKEN0_Pos)                  /*!< BPWM_T::MSKEN: MSKEN0 Mask             */

#define BPWM_MSKEN_MSKEN1_Pos            (1)                                               /*!< BPWM_T::MSKEN: MSKEN1 Position         */
#define BPWM_MSKEN_MSKEN1_Msk            (0x1ul << BPWM_MSKEN_MSKEN1_Pos)                  /*!< BPWM_T::MSKEN: MSKEN1 Mask             */

#define BPWM_MSKEN_MSKEN2_Pos            (2)                                               /*!< BPWM_T::MSKEN: MSKEN2 Position         */
#define BPWM_MSKEN_MSKEN2_Msk            (0x1ul << BPWM_MSKEN_MSKEN2_Pos)                  /*!< BPWM_T::MSKEN: MSKEN2 Mask             */

#define BPWM_MSKEN_MSKEN3_Pos            (3)                                               /*!< BPWM_T::MSKEN: MSKEN3 Position         */
#define BPWM_MSKEN_MSKEN3_Msk            (0x1ul << BPWM_MSKEN_MSKEN3_Pos)                  /*!< BPWM_T::MSKEN: MSKEN3 Mask             */

#define BPWM_MSKEN_MSKEN4_Pos            (4)                                               /*!< BPWM_T::MSKEN: MSKEN4 Position         */
#define BPWM_MSKEN_MSKEN4_Msk            (0x1ul << BPWM_MSKEN_MSKEN4_Pos)                  /*!< BPWM_T::MSKEN: MSKEN4 Mask             */

#define BPWM_MSKEN_MSKEN5_Pos            (5)                                               /*!< BPWM_T::MSKEN: MSKEN5 Position         */
#define BPWM_MSKEN_MSKEN5_Msk            (0x1ul << BPWM_MSKEN_MSKEN5_Pos)                  /*!< BPWM_T::MSKEN: MSKEN5 Mask             */

#define BPWM_MSKEN_MSKENn_Pos            (0)                                               /*!< BPWM_T::MSKEN: MSKENn Position         */
#define BPWM_MSKEN_MSKENn_Msk            (0x3ful << BPWM_MSKEN_MSKENn_Pos)                 /*!< BPWM_T::MSKEN: MSKENn Mask             */

#define BPWM_MSK_MSKDAT0_Pos             (0)                                               /*!< BPWM_T::MSK: MSKDAT0 Position          */
#define BPWM_MSK_MSKDAT0_Msk             (0x1ul << BPWM_MSK_MSKDAT0_Pos)                   /*!< BPWM_T::MSK: MSKDAT0 Mask              */

#define BPWM_MSK_MSKDAT1_Pos             (1)                                               /*!< BPWM_T::MSK: MSKDAT1 Position          */
#define BPWM_MSK_MSKDAT1_Msk             (0x1ul << BPWM_MSK_MSKDAT1_Pos)                   /*!< BPWM_T::MSK: MSKDAT1 Mask              */

#define BPWM_MSK_MSKDAT2_Pos             (2)                                               /*!< BPWM_T::MSK: MSKDAT2 Position          */
#define BPWM_MSK_MSKDAT2_Msk             (0x1ul << BPWM_MSK_MSKDAT2_Pos)                   /*!< BPWM_T::MSK: MSKDAT2 Mask              */

#define BPWM_MSK_MSKDAT3_Pos             (3)                                               /*!< BPWM_T::MSK: MSKDAT3 Position          */
#define BPWM_MSK_MSKDAT3_Msk             (0x1ul << BPWM_MSK_MSKDAT3_Pos)                   /*!< BPWM_T::MSK: MSKDAT3 Mask              */

#define BPWM_MSK_MSKDAT4_Pos             (4)                                               /*!< BPWM_T::MSK: MSKDAT4 Position          */
#define BPWM_MSK_MSKDAT4_Msk             (0x1ul << BPWM_MSK_MSKDAT4_Pos)                   /*!< BPWM_T::MSK: MSKDAT4 Mask              */

#define BPWM_MSK_MSKDAT5_Pos             (5)                                               /*!< BPWM_T::MSK: MSKDAT5 Position          */
#define BPWM_MSK_MSKDAT5_Msk             (0x1ul << BPWM_MSK_MSKDAT5_Pos)                   /*!< BPWM_T::MSK: MSKDAT5 Mask              */

#define BPWM_MSK_MSKDATn_Pos             (0)                                               /*!< BPWM_T::MSK: MSKDATn Position          */
#define BPWM_MSK_MSKDATn_Msk             (0x3ful << BPWM_MSK_MSKDATn_Pos)                  /*!< BPWM_T::MSK: MSKDATn Mask              */

#define BPWM_POLCTL_PINV0_Pos            (0)                                               /*!< BPWM_T::POLCTL: PINV0 Position         */
#define BPWM_POLCTL_PINV0_Msk            (0x1ul << BPWM_POLCTL_PINV0_Pos)                  /*!< BPWM_T::POLCTL: PINV0 Mask             */

#define BPWM_POLCTL_PINV1_Pos            (1)                                               /*!< BPWM_T::POLCTL: PINV1 Position         */
#define BPWM_POLCTL_PINV1_Msk            (0x1ul << BPWM_POLCTL_PINV1_Pos)                  /*!< BPWM_T::POLCTL: PINV1 Mask             */

#define BPWM_POLCTL_PINV2_Pos            (2)                                               /*!< BPWM_T::POLCTL: PINV2 Position         */
#define BPWM_POLCTL_PINV2_Msk            (0x1ul << BPWM_POLCTL_PINV2_Pos)                  /*!< BPWM_T::POLCTL: PINV2 Mask             */

#define BPWM_POLCTL_PINV3_Pos            (3)                                               /*!< BPWM_T::POLCTL: PINV3 Position         */
#define BPWM_POLCTL_PINV3_Msk            (0x1ul << BPWM_POLCTL_PINV3_Pos)                  /*!< BPWM_T::POLCTL: PINV3 Mask             */

#define BPWM_POLCTL_PINV4_Pos            (4)                                               /*!< BPWM_T::POLCTL: PINV4 Position         */
#define BPWM_POLCTL_PINV4_Msk            (0x1ul << BPWM_POLCTL_PINV4_Pos)                  /*!< BPWM_T::POLCTL: PINV4 Mask             */

#define BPWM_POLCTL_PINV5_Pos            (5)                                               /*!< BPWM_T::POLCTL: PINV5 Position         */
#define BPWM_POLCTL_PINV5_Msk            (0x1ul << BPWM_POLCTL_PINV5_Pos)                  /*!< BPWM_T::POLCTL: PINV5 Mask             */

#define BPWM_POLCTL_PINVn_Pos            (0)                                               /*!< BPWM_T::POLCTL: PINVn Position         */
#define BPWM_POLCTL_PINVn_Msk            (0x3ful << BPWM_POLCTL_PINVn_Pos)                 /*!< BPWM_T::POLCTL: PINVn Mask             */

#define BPWM_POEN_POEN0_Pos              (0)                                               /*!< BPWM_T::POEN: POEN0 Position           */
#define BPWM_POEN_POEN0_Msk              (0x1ul << BPWM_POEN_POEN0_Pos)                    /*!< BPWM_T::POEN: POEN0 Mask               */

#define BPWM_POEN_POEN1_Pos              (1)                                               /*!< BPWM_T::POEN: POEN1 Position           */
#define BPWM_POEN_POEN1_Msk              (0x1ul << BPWM_POEN_POEN1_Pos)                    /*!< BPWM_T::POEN: POEN1 Mask               */

#define BPWM_POEN_POEN2_Pos              (2)                                               /*!< BPWM_T::POEN: POEN2 Position           */
#define BPWM_POEN_POEN2_Msk              (0x1ul << BPWM_POEN_POEN2_Pos)                    /*!< BPWM_T::POEN: POEN2 Mask               */

#define BPWM_POEN_POEN3_Pos              (3)                                               /*!< BPWM_T::POEN: POEN3 Position           */
#define BPWM_POEN_POEN3_Msk              (0x1ul << BPWM_POEN_POEN3_Pos)                    /*!< BPWM_T::POEN: POEN3 Mask               */

#define BPWM_POEN_POEN4_Pos              (4)                                               /*!< BPWM_T::POEN: POEN4 Position           */
#define BPWM_POEN_POEN4_Msk              (0x1ul << BPWM_POEN_POEN4_Pos)                    /*!< BPWM_T::POEN: POEN4 Mask               */

#define BPWM_POEN_POEN5_Pos              (5)                                               /*!< BPWM_T::POEN: POEN5 Position           */
#define BPWM_POEN_POEN5_Msk              (0x1ul << BPWM_POEN_POEN5_Pos)                    /*!< BPWM_T::POEN: POEN5 Mask               */

#define BPWM_POEN_POENn_Pos              (0)                                               /*!< BPWM_T::POEN: POENn Position           */
#define BPWM_POEN_POENn_Msk              (0x3ful << BPWM_POEN_POENn_Pos)                   /*!< BPWM_T::POEN: POENn Mask               */

#define BPWM_INTEN_ZIEN0_Pos             (0)                                               /*!< BPWM_T::INTEN: ZIEN0 Position          */
#define BPWM_INTEN_ZIEN0_Msk             (0x1ul << BPWM_INTEN_ZIEN0_Pos)                   /*!< BPWM_T::INTEN: ZIEN0 Mask              */

#define BPWM_INTEN_PIEN0_Pos             (8)                                               /*!< BPWM_T::INTEN: PIEN0 Position          */
#define BPWM_INTEN_PIEN0_Msk             (0x1ul << BPWM_INTEN_PIEN0_Pos)                   /*!< BPWM_T::INTEN: PIEN0 Mask              */

#define BPWM_INTEN_CMPUIEN0_Pos          (16)                                              /*!< BPWM_T::INTEN: CMPUIEN0 Position       */
#define BPWM_INTEN_CMPUIEN0_Msk          (0x1ul << BPWM_INTEN_CMPUIEN0_Pos)                /*!< BPWM_T::INTEN: CMPUIEN0 Mask           */

#define BPWM_INTEN_CMPUIEN1_Pos          (17)                                              /*!< BPWM_T::INTEN: CMPUIEN1 Position       */
#define BPWM_INTEN_CMPUIEN1_Msk          (0x1ul << BPWM_INTEN_CMPUIEN1_Pos)                /*!< BPWM_T::INTEN: CMPUIEN1 Mask           */

#define BPWM_INTEN_CMPUIEN2_Pos          (18)                                              /*!< BPWM_T::INTEN: CMPUIEN2 Position       */
#define BPWM_INTEN_CMPUIEN2_Msk          (0x1ul << BPWM_INTEN_CMPUIEN2_Pos)                /*!< BPWM_T::INTEN: CMPUIEN2 Mask           */

#define BPWM_INTEN_CMPUIEN3_Pos          (19)                                              /*!< BPWM_T::INTEN: CMPUIEN3 Position       */
#define BPWM_INTEN_CMPUIEN3_Msk          (0x1ul << BPWM_INTEN_CMPUIEN3_Pos)                /*!< BPWM_T::INTEN: CMPUIEN3 Mask           */

#define BPWM_INTEN_CMPUIEN4_Pos          (20)                                              /*!< BPWM_T::INTEN: CMPUIEN4 Position       */
#define BPWM_INTEN_CMPUIEN4_Msk          (0x1ul << BPWM_INTEN_CMPUIEN4_Pos)                /*!< BPWM_T::INTEN: CMPUIEN4 Mask           */

#define BPWM_INTEN_CMPUIEN5_Pos          (21)                                              /*!< BPWM_T::INTEN: CMPUIEN5 Position       */
#define BPWM_INTEN_CMPUIEN5_Msk          (0x1ul << BPWM_INTEN_CMPUIEN5_Pos)                /*!< BPWM_T::INTEN: CMPUIEN5 Mask           */

#define BPWM_INTEN_CMPUIENn_Pos          (16)                                              /*!< BPWM_T::INTEN: CMPUIENn Position       */
#define BPWM_INTEN_CMPUIENn_Msk          (0x3ful << BPWM_INTEN_CMPUIENn_Pos)               /*!< BPWM_T::INTEN: CMPUIENn Mask           */

#define BPWM_INTEN_CMPDIEN0_Pos          (24)                                              /*!< BPWM_T::INTEN: CMPDIEN0 Position       */
#define BPWM_INTEN_CMPDIEN0_Msk          (0x1ul << BPWM_INTEN_CMPDIEN0_Pos)                /*!< BPWM_T::INTEN: CMPDIEN0 Mask           */

#define BPWM_INTEN_CMPDIEN1_Pos          (25)                                              /*!< BPWM_T::INTEN: CMPDIEN1 Position       */
#define BPWM_INTEN_CMPDIEN1_Msk          (0x1ul << BPWM_INTEN_CMPDIEN1_Pos)                /*!< BPWM_T::INTEN: CMPDIEN1 Mask           */

#define BPWM_INTEN_CMPDIEN2_Pos          (26)                                              /*!< BPWM_T::INTEN: CMPDIEN2 Position       */
#define BPWM_INTEN_CMPDIEN2_Msk          (0x1ul << BPWM_INTEN_CMPDIEN2_Pos)                /*!< BPWM_T::INTEN: CMPDIEN2 Mask           */

#define BPWM_INTEN_CMPDIEN3_Pos          (27)                                              /*!< BPWM_T::INTEN: CMPDIEN3 Position       */
#define BPWM_INTEN_CMPDIEN3_Msk          (0x1ul << BPWM_INTEN_CMPDIEN3_Pos)                /*!< BPWM_T::INTEN: CMPDIEN3 Mask           */

#define BPWM_INTEN_CMPDIEN4_Pos          (28)                                              /*!< BPWM_T::INTEN: CMPDIEN4 Position       */
#define BPWM_INTEN_CMPDIEN4_Msk          (0x1ul << BPWM_INTEN_CMPDIEN4_Pos)                /*!< BPWM_T::INTEN: CMPDIEN4 Mask           */

#define BPWM_INTEN_CMPDIEN5_Pos          (29)                                              /*!< BPWM_T::INTEN: CMPDIEN5 Position       */
#define BPWM_INTEN_CMPDIEN5_Msk          (0x1ul << BPWM_INTEN_CMPDIEN5_Pos)                /*!< BPWM_T::INTEN: CMPDIEN5 Mask           */

#define BPWM_INTEN_CMPDIENn_Pos          (24)                                              /*!< BPWM_T::INTEN: CMPDIENn Position       */
#define BPWM_INTEN_CMPDIENn_Msk          (0x3ful << BPWM_INTEN_CMPDIENn_Pos)               /*!< BPWM_T::INTEN: CMPDIENn Mask           */

#define BPWM_INTSTS_ZIF0_Pos             (0)                                               /*!< BPWM_T::INTSTS: ZIF0 Position          */
#define BPWM_INTSTS_ZIF0_Msk             (0x1ul << BPWM_INTSTS_ZIF0_Pos)                   /*!< BPWM_T::INTSTS: ZIF0 Mask              */

#define BPWM_INTSTS_PIF0_Pos             (8)                                               /*!< BPWM_T::INTSTS: PIF0 Position          */
#define BPWM_INTSTS_PIF0_Msk             (0x1ul << BPWM_INTSTS_PIF0_Pos)                   /*!< BPWM_T::INTSTS: PIF0 Mask              */

#define BPWM_INTSTS_CMPUIF0_Pos          (16)                                              /*!< BPWM_T::INTSTS: CMPUIF0 Position       */
#define BPWM_INTSTS_CMPUIF0_Msk          (0x1ul << BPWM_INTSTS_CMPUIF0_Pos)                /*!< BPWM_T::INTSTS: CMPUIF0 Mask           */

#define BPWM_INTSTS_CMPUIF1_Pos          (17)                                              /*!< BPWM_T::INTSTS: CMPUIF1 Position       */
#define BPWM_INTSTS_CMPUIF1_Msk          (0x1ul << BPWM_INTSTS_CMPUIF1_Pos)                /*!< BPWM_T::INTSTS: CMPUIF1 Mask           */

#define BPWM_INTSTS_CMPUIF2_Pos          (18)                                              /*!< BPWM_T::INTSTS: CMPUIF2 Position       */
#define BPWM_INTSTS_CMPUIF2_Msk          (0x1ul << BPWM_INTSTS_CMPUIF2_Pos)                /*!< BPWM_T::INTSTS: CMPUIF2 Mask           */

#define BPWM_INTSTS_CMPUIF3_Pos          (19)                                              /*!< BPWM_T::INTSTS: CMPUIF3 Position       */
#define BPWM_INTSTS_CMPUIF3_Msk          (0x1ul << BPWM_INTSTS_CMPUIF3_Pos)                /*!< BPWM_T::INTSTS: CMPUIF3 Mask           */

#define BPWM_INTSTS_CMPUIF4_Pos          (20)                                              /*!< BPWM_T::INTSTS: CMPUIF4 Position       */
#define BPWM_INTSTS_CMPUIF4_Msk          (0x1ul << BPWM_INTSTS_CMPUIF4_Pos)                /*!< BPWM_T::INTSTS: CMPUIF4 Mask           */

#define BPWM_INTSTS_CMPUIF5_Pos          (21)                                              /*!< BPWM_T::INTSTS: CMPUIF5 Position       */
#define BPWM_INTSTS_CMPUIF5_Msk          (0x1ul << BPWM_INTSTS_CMPUIF5_Pos)                /*!< BPWM_T::INTSTS: CMPUIF5 Mask           */

#define BPWM_INTSTS_CMPUIFn_Pos          (16)                                              /*!< BPWM_T::INTSTS: CMPUIFn Position       */
#define BPWM_INTSTS_CMPUIFn_Msk          (0x3ful << BPWM_INTSTS_CMPUIFn_Pos)               /*!< BPWM_T::INTSTS: CMPUIFn Mask           */

#define BPWM_INTSTS_CMPDIF0_Pos          (24)                                              /*!< BPWM_T::INTSTS: CMPDIF0 Position       */
#define BPWM_INTSTS_CMPDIF0_Msk          (0x1ul << BPWM_INTSTS_CMPDIF0_Pos)                /*!< BPWM_T::INTSTS: CMPDIF0 Mask           */

#define BPWM_INTSTS_CMPDIF1_Pos          (25)                                              /*!< BPWM_T::INTSTS: CMPDIF1 Position       */
#define BPWM_INTSTS_CMPDIF1_Msk          (0x1ul << BPWM_INTSTS_CMPDIF1_Pos)                /*!< BPWM_T::INTSTS: CMPDIF1 Mask           */

#define BPWM_INTSTS_CMPDIF2_Pos          (26)                                              /*!< BPWM_T::INTSTS: CMPDIF2 Position       */
#define BPWM_INTSTS_CMPDIF2_Msk          (0x1ul << BPWM_INTSTS_CMPDIF2_Pos)                /*!< BPWM_T::INTSTS: CMPDIF2 Mask           */

#define BPWM_INTSTS_CMPDIF3_Pos          (27)                                              /*!< BPWM_T::INTSTS: CMPDIF3 Position       */
#define BPWM_INTSTS_CMPDIF3_Msk          (0x1ul << BPWM_INTSTS_CMPDIF3_Pos)                /*!< BPWM_T::INTSTS: CMPDIF3 Mask           */

#define BPWM_INTSTS_CMPDIF4_Pos          (28)                                              /*!< BPWM_T::INTSTS: CMPDIF4 Position       */
#define BPWM_INTSTS_CMPDIF4_Msk          (0x1ul << BPWM_INTSTS_CMPDIF4_Pos)                /*!< BPWM_T::INTSTS: CMPDIF4 Mask           */

#define BPWM_INTSTS_CMPDIF5_Pos          (29)                                              /*!< BPWM_T::INTSTS: CMPDIF5 Position       */
#define BPWM_INTSTS_CMPDIF5_Msk          (0x1ul << BPWM_INTSTS_CMPDIF5_Pos)                /*!< BPWM_T::INTSTS: CMPDIF5 Mask           */

#define BPWM_INTSTS_CMPDIFn_Pos          (24)                                              /*!< BPWM_T::INTSTS: CMPDIFn Position       */
#define BPWM_INTSTS_CMPDIFn_Msk          (0x3ful << BPWM_INTSTS_CMPDIFn_Pos)               /*!< BPWM_T::INTSTS: CMPDIFn Mask           */

#define BPWM_ADCTS0_TRGSEL0_Pos          (0)                                               /*!< BPWM_T::ADCTS0: TRGSEL0 Position       */
#define BPWM_ADCTS0_TRGSEL0_Msk          (0xful << BPWM_ADCTS0_TRGSEL0_Pos)                /*!< BPWM_T::ADCTS0: TRGSEL0 Mask           */

#define BPWM_ADCTS0_TRGEN0_Pos           (7)                                               /*!< BPWM_T::ADCTS0: TRGEN0 Position        */
#define BPWM_ADCTS0_TRGEN0_Msk           (0x1ul << BPWM_ADCTS0_TRGEN0_Pos)                 /*!< BPWM_T::ADCTS0: TRGEN0 Mask            */

#define BPWM_ADCTS0_TRGSEL1_Pos          (8)                                               /*!< BPWM_T::ADCTS0: TRGSEL1 Position       */
#define BPWM_ADCTS0_TRGSEL1_Msk          (0xful << BPWM_ADCTS0_TRGSEL1_Pos)                /*!< BPWM_T::ADCTS0: TRGSEL1 Mask           */

#define BPWM_ADCTS0_TRGEN1_Pos           (15)                                              /*!< BPWM_T::ADCTS0: TRGEN1 Position        */
#define BPWM_ADCTS0_TRGEN1_Msk           (0x1ul << BPWM_ADCTS0_TRGEN1_Pos)                 /*!< BPWM_T::ADCTS0: TRGEN1 Mask            */

#define BPWM_ADCTS0_TRGSEL2_Pos          (16)                                              /*!< BPWM_T::ADCTS0: TRGSEL2 Position       */
#define BPWM_ADCTS0_TRGSEL2_Msk          (0xful << BPWM_ADCTS0_TRGSEL2_Pos)                /*!< BPWM_T::ADCTS0: TRGSEL2 Mask           */

#define BPWM_ADCTS0_TRGEN2_Pos           (23)                                              /*!< BPWM_T::ADCTS0: TRGEN2 Position        */
#define BPWM_ADCTS0_TRGEN2_Msk           (0x1ul << BPWM_ADCTS0_TRGEN2_Pos)                 /*!< BPWM_T::ADCTS0: TRGEN2 Mask            */

#define BPWM_ADCTS0_TRGSEL3_Pos          (24)                                              /*!< BPWM_T::ADCTS0: TRGSEL3 Position       */
#define BPWM_ADCTS0_TRGSEL3_Msk          (0xful << BPWM_ADCTS0_TRGSEL3_Pos)                /*!< BPWM_T::ADCTS0: TRGSEL3 Mask           */

#define BPWM_ADCTS0_TRGEN3_Pos           (31)                                              /*!< BPWM_T::ADCTS0: TRGEN3 Position        */
#define BPWM_ADCTS0_TRGEN3_Msk           (0x1ul << BPWM_ADCTS0_TRGEN3_Pos)                 /*!< BPWM_T::ADCTS0: TRGEN3 Mask            */

#define BPWM_ADCTS1_TRGSEL4_Pos          (0)                                               /*!< BPWM_T::ADCTS1: TRGSEL4 Position       */
#define BPWM_ADCTS1_TRGSEL4_Msk          (0xful << BPWM_ADCTS1_TRGSEL4_Pos)                /*!< BPWM_T::ADCTS1: TRGSEL4 Mask           */

#define BPWM_ADCTS1_TRGEN4_Pos           (7)                                               /*!< BPWM_T::ADCTS1: TRGEN4 Position        */
#define BPWM_ADCTS1_TRGEN4_Msk           (0x1ul << BPWM_ADCTS1_TRGEN4_Pos)                 /*!< BPWM_T::ADCTS1: TRGEN4 Mask            */

#define BPWM_ADCTS1_TRGSEL5_Pos          (8)                                               /*!< BPWM_T::ADCTS1: TRGSEL5 Position       */
#define BPWM_ADCTS1_TRGSEL5_Msk          (0xful << BPWM_ADCTS1_TRGSEL5_Pos)                /*!< BPWM_T::ADCTS1: TRGSEL5 Mask           */

#define BPWM_ADCTS1_TRGEN5_Pos           (15)                                              /*!< BPWM_T::ADCTS1: TRGEN5 Position        */
#define BPWM_ADCTS1_TRGEN5_Msk           (0x1ul << BPWM_ADCTS1_TRGEN5_Pos)                 /*!< BPWM_T::ADCTS1: TRGEN5 Mask            */

#define BPWM_SSCTL_SSEN0_Pos             (0)                                               /*!< BPWM_T::SSCTL: SSEN0 Position          */
#define BPWM_SSCTL_SSEN0_Msk             (0x1ul << BPWM_SSCTL_SSEN0_Pos)                   /*!< BPWM_T::SSCTL: SSEN0 Mask              */

#define BPWM_SSCTL_SSRC_Pos              (8)                                               /*!< BPWM_T::SSCTL: SSRC Position           */
#define BPWM_SSCTL_SSRC_Msk              (0x3ul << BPWM_SSCTL_SSRC_Pos)                    /*!< BPWM_T::SSCTL: SSRC Mask               */

#define BPWM_SSTRG_CNTSEN_Pos            (0)                                               /*!< BPWM_T::SSTRG: CNTSEN Position         */
#define BPWM_SSTRG_CNTSEN_Msk            (0x1ul << BPWM_SSTRG_CNTSEN_Pos)                  /*!< BPWM_T::SSTRG: CNTSEN Mask             */

#define BPWM_STATUS_CNTMAX0_Pos          (0)                                               /*!< BPWM_T::STATUS: CNTMAX0 Position       */
#define BPWM_STATUS_CNTMAX0_Msk          (0x1ul << BPWM_STATUS_CNTMAX0_Pos)                /*!< BPWM_T::STATUS: CNTMAX0 Mask           */

#define BPWM_STATUS_ADCTRG0_Pos          (16)                                              /*!< BPWM_T::STATUS: ADCTRG0 Position       */
#define BPWM_STATUS_ADCTRG0_Msk          (0x1ul << BPWM_STATUS_ADCTRG0_Pos)                /*!< BPWM_T::STATUS: ADCTRG0 Mask           */

#define BPWM_STATUS_ADCTRG1_Pos          (17)                                              /*!< BPWM_T::STATUS: ADCTRG1 Position       */
#define BPWM_STATUS_ADCTRG1_Msk          (0x1ul << BPWM_STATUS_ADCTRG1_Pos)                /*!< BPWM_T::STATUS: ADCTRG1 Mask           */

#define BPWM_STATUS_ADCTRG2_Pos          (18)                                              /*!< BPWM_T::STATUS: ADCTRG2 Position       */
#define BPWM_STATUS_ADCTRG2_Msk          (0x1ul << BPWM_STATUS_ADCTRG2_Pos)                /*!< BPWM_T::STATUS: ADCTRG2 Mask           */

#define BPWM_STATUS_ADCTRG3_Pos          (19)                                              /*!< BPWM_T::STATUS: ADCTRG3 Position       */
#define BPWM_STATUS_ADCTRG3_Msk          (0x1ul << BPWM_STATUS_ADCTRG3_Pos)                /*!< BPWM_T::STATUS: ADCTRG3 Mask           */

#define BPWM_STATUS_ADCTRG4_Pos          (20)                                              /*!< BPWM_T::STATUS: ADCTRG4 Position       */
#define BPWM_STATUS_ADCTRG4_Msk          (0x1ul << BPWM_STATUS_ADCTRG4_Pos)                /*!< BPWM_T::STATUS: ADCTRG4 Mask           */

#define BPWM_STATUS_ADCTRG5_Pos          (21)                                              /*!< BPWM_T::STATUS: ADCTRG5 Position       */
#define BPWM_STATUS_ADCTRG5_Msk          (0x1ul << BPWM_STATUS_ADCTRG5_Pos)                /*!< BPWM_T::STATUS: ADCTRG5 Mask           */

#define BPWM_STATUS_ADCTRGn_Pos          (16)                                              /*!< BPWM_T::STATUS: ADCTRGn Position       */
#define BPWM_STATUS_ADCTRGn_Msk          (0x3ful << BPWM_STATUS_ADCTRGn_Pos)               /*!< BPWM_T::STATUS: ADCTRGn Mask           */

#define BPWM_CAPINEN_CAPINEN0_Pos        (0)                                               /*!< BPWM_T::CAPINEN: CAPINEN0 Position     */
#define BPWM_CAPINEN_CAPINEN0_Msk        (0x1ul << BPWM_CAPINEN_CAPINEN0_Pos)              /*!< BPWM_T::CAPINEN: CAPINEN0 Mask         */

#define BPWM_CAPINEN_CAPINEN1_Pos        (1)                                               /*!< BPWM_T::CAPINEN: CAPINEN1 Position     */
#define BPWM_CAPINEN_CAPINEN1_Msk        (0x1ul << BPWM_CAPINEN_CAPINEN1_Pos)              /*!< BPWM_T::CAPINEN: CAPINEN1 Mask         */

#define BPWM_CAPINEN_CAPINEN2_Pos        (2)                                               /*!< BPWM_T::CAPINEN: CAPINEN2 Position     */
#define BPWM_CAPINEN_CAPINEN2_Msk        (0x1ul << BPWM_CAPINEN_CAPINEN2_Pos)              /*!< BPWM_T::CAPINEN: CAPINEN2 Mask         */

#define BPWM_CAPINEN_CAPINEN3_Pos        (3)                                               /*!< BPWM_T::CAPINEN: CAPINEN3 Position     */
#define BPWM_CAPINEN_CAPINEN3_Msk        (0x1ul << BPWM_CAPINEN_CAPINEN3_Pos)              /*!< BPWM_T::CAPINEN: CAPINEN3 Mask         */

#define BPWM_CAPINEN_CAPINEN4_Pos        (4)                                               /*!< BPWM_T::CAPINEN: CAPINEN4 Position     */
#define BPWM_CAPINEN_CAPINEN4_Msk        (0x1ul << BPWM_CAPINEN_CAPINEN4_Pos)              /*!< BPWM_T::CAPINEN: CAPINEN4 Mask         */

#define BPWM_CAPINEN_CAPINEN5_Pos        (5)                                               /*!< BPWM_T::CAPINEN: CAPINEN5 Position     */
#define BPWM_CAPINEN_CAPINEN5_Msk        (0x1ul << BPWM_CAPINEN_CAPINEN5_Pos)              /*!< BPWM_T::CAPINEN: CAPINEN5 Mask         */

#define BPWM_CAPINEN_CAPINENn_Pos        (0)                                               /*!< BPWM_T::CAPINEN: CAPINENn Position     */
#define BPWM_CAPINEN_CAPINENn_Msk        (0x3ful << BPWM_CAPINEN_CAPINENn_Pos)             /*!< BPWM_T::CAPINEN: CAPINENn Mask         */

#define BPWM_CAPCTL_CAPEN0_Pos           (0)                                               /*!< BPWM_T::CAPCTL: CAPEN0 Position        */
#define BPWM_CAPCTL_CAPEN0_Msk           (0x1ul << BPWM_CAPCTL_CAPEN0_Pos)                 /*!< BPWM_T::CAPCTL: CAPEN0 Mask            */

#define BPWM_CAPCTL_CAPEN1_Pos           (1)                                               /*!< BPWM_T::CAPCTL: CAPEN1 Position        */
#define BPWM_CAPCTL_CAPEN1_Msk           (0x1ul << BPWM_CAPCTL_CAPEN1_Pos)                 /*!< BPWM_T::CAPCTL: CAPEN1 Mask            */

#define BPWM_CAPCTL_CAPEN2_Pos           (2)                                               /*!< BPWM_T::CAPCTL: CAPEN2 Position        */
#define BPWM_CAPCTL_CAPEN2_Msk           (0x1ul << BPWM_CAPCTL_CAPEN2_Pos)                 /*!< BPWM_T::CAPCTL: CAPEN2 Mask            */

#define BPWM_CAPCTL_CAPEN3_Pos           (3)                                               /*!< BPWM_T::CAPCTL: CAPEN3 Position        */
#define BPWM_CAPCTL_CAPEN3_Msk           (0x1ul << BPWM_CAPCTL_CAPEN3_Pos)                 /*!< BPWM_T::CAPCTL: CAPEN3 Mask            */

#define BPWM_CAPCTL_CAPEN4_Pos           (4)                                               /*!< BPWM_T::CAPCTL: CAPEN4 Position        */
#define BPWM_CAPCTL_CAPEN4_Msk           (0x1ul << BPWM_CAPCTL_CAPEN4_Pos)                 /*!< BPWM_T::CAPCTL: CAPEN4 Mask            */

#define BPWM_CAPCTL_CAPEN5_Pos           (5)                                               /*!< BPWM_T::CAPCTL: CAPEN5 Position        */
#define BPWM_CAPCTL_CAPEN5_Msk           (0x1ul << BPWM_CAPCTL_CAPEN5_Pos)                 /*!< BPWM_T::CAPCTL: CAPEN5 Mask            */

#define BPWM_CAPCTL_CAPENn_Pos           (0)                                               /*!< BPWM_T::CAPCTL: CAPENn Position        */
#define BPWM_CAPCTL_CAPENn_Msk           (0x3ful << BPWM_CAPCTL_CAPENn_Pos)                /*!< BPWM_T::CAPCTL: CAPENn Mask            */

#define BPWM_CAPCTL_CAPINV0_Pos          (8)                                               /*!< BPWM_T::CAPCTL: CAPINV0 Position       */
#define BPWM_CAPCTL_CAPINV0_Msk          (0x1ul << BPWM_CAPCTL_CAPINV0_Pos)                /*!< BPWM_T::CAPCTL: CAPINV0 Mask           */

#define BPWM_CAPCTL_CAPINV1_Pos          (9)                                               /*!< BPWM_T::CAPCTL: CAPINV1 Position       */
#define BPWM_CAPCTL_CAPINV1_Msk          (0x1ul << BPWM_CAPCTL_CAPINV1_Pos)                /*!< BPWM_T::CAPCTL: CAPINV1 Mask           */

#define BPWM_CAPCTL_CAPINV2_Pos          (10)                                              /*!< BPWM_T::CAPCTL: CAPINV2 Position       */
#define BPWM_CAPCTL_CAPINV2_Msk          (0x1ul << BPWM_CAPCTL_CAPINV2_Pos)                /*!< BPWM_T::CAPCTL: CAPINV2 Mask           */

#define BPWM_CAPCTL_CAPINV3_Pos          (11)                                              /*!< BPWM_T::CAPCTL: CAPINV3 Position       */
#define BPWM_CAPCTL_CAPINV3_Msk          (0x1ul << BPWM_CAPCTL_CAPINV3_Pos)                /*!< BPWM_T::CAPCTL: CAPINV3 Mask           */

#define BPWM_CAPCTL_CAPINV4_Pos          (12)                                              /*!< BPWM_T::CAPCTL: CAPINV4 Position       */
#define BPWM_CAPCTL_CAPINV4_Msk          (0x1ul << BPWM_CAPCTL_CAPINV4_Pos)                /*!< BPWM_T::CAPCTL: CAPINV4 Mask           */

#define BPWM_CAPCTL_CAPINV5_Pos          (13)                                              /*!< BPWM_T::CAPCTL: CAPINV5 Position       */
#define BPWM_CAPCTL_CAPINV5_Msk          (0x1ul << BPWM_CAPCTL_CAPINV5_Pos)                /*!< BPWM_T::CAPCTL: CAPINV5 Mask           */

#define BPWM_CAPCTL_CAPINVn_Pos          (8)                                               /*!< BPWM_T::CAPCTL: CAPINVn Position       */
#define BPWM_CAPCTL_CAPINVn_Msk          (0x3ful << BPWM_CAPCTL_CAPINVn_Pos)               /*!< BPWM_T::CAPCTL: CAPINVn Mask           */

#define BPWM_CAPCTL_RCRLDEN0_Pos         (16)                                              /*!< BPWM_T::CAPCTL: RCRLDEN0 Position      */
#define BPWM_CAPCTL_RCRLDEN0_Msk         (0x1ul << BPWM_CAPCTL_RCRLDEN0_Pos)               /*!< BPWM_T::CAPCTL: RCRLDEN0 Mask          */

#define BPWM_CAPCTL_RCRLDEN1_Pos         (17)                                              /*!< BPWM_T::CAPCTL: RCRLDEN1 Position      */
#define BPWM_CAPCTL_RCRLDEN1_Msk         (0x1ul << BPWM_CAPCTL_RCRLDEN1_Pos)               /*!< BPWM_T::CAPCTL: RCRLDEN1 Mask          */

#define BPWM_CAPCTL_RCRLDEN2_Pos         (18)                                              /*!< BPWM_T::CAPCTL: RCRLDEN2 Position      */
#define BPWM_CAPCTL_RCRLDEN2_Msk         (0x1ul << BPWM_CAPCTL_RCRLDEN2_Pos)               /*!< BPWM_T::CAPCTL: RCRLDEN2 Mask          */

#define BPWM_CAPCTL_RCRLDEN3_Pos         (19)                                              /*!< BPWM_T::CAPCTL: RCRLDEN3 Position      */
#define BPWM_CAPCTL_RCRLDEN3_Msk         (0x1ul << BPWM_CAPCTL_RCRLDEN3_Pos)               /*!< BPWM_T::CAPCTL: RCRLDEN3 Mask          */

#define BPWM_CAPCTL_RCRLDEN4_Pos         (20)                                              /*!< BPWM_T::CAPCTL: RCRLDEN4 Position      */
#define BPWM_CAPCTL_RCRLDEN4_Msk         (0x1ul << BPWM_CAPCTL_RCRLDEN4_Pos)               /*!< BPWM_T::CAPCTL: RCRLDEN4 Mask          */

#define BPWM_CAPCTL_RCRLDEN5_Pos         (21)                                              /*!< BPWM_T::CAPCTL: RCRLDEN5 Position      */
#define BPWM_CAPCTL_RCRLDEN5_Msk         (0x1ul << BPWM_CAPCTL_RCRLDEN5_Pos)               /*!< BPWM_T::CAPCTL: RCRLDEN5 Mask          */

#define BPWM_CAPCTL_RCRLDENn_Pos         (16)                                              /*!< BPWM_T::CAPCTL: RCRLDENn Position      */
#define BPWM_CAPCTL_RCRLDENn_Msk         (0x3ful << BPWM_CAPCTL_RCRLDENn_Pos)              /*!< BPWM_T::CAPCTL: RCRLDENn Mask          */

#define BPWM_CAPCTL_FCRLDEN0_Pos         (24)                                              /*!< BPWM_T::CAPCTL: FCRLDEN0 Position      */
#define BPWM_CAPCTL_FCRLDEN0_Msk         (0x1ul << BPWM_CAPCTL_FCRLDEN0_Pos)               /*!< BPWM_T::CAPCTL: FCRLDEN0 Mask          */

#define BPWM_CAPCTL_FCRLDEN1_Pos         (25)                                              /*!< BPWM_T::CAPCTL: FCRLDEN1 Position      */
#define BPWM_CAPCTL_FCRLDEN1_Msk         (0x1ul << BPWM_CAPCTL_FCRLDEN1_Pos)               /*!< BPWM_T::CAPCTL: FCRLDEN1 Mask          */

#define BPWM_CAPCTL_FCRLDEN2_Pos         (26)                                              /*!< BPWM_T::CAPCTL: FCRLDEN2 Position      */
#define BPWM_CAPCTL_FCRLDEN2_Msk         (0x1ul << BPWM_CAPCTL_FCRLDEN2_Pos)               /*!< BPWM_T::CAPCTL: FCRLDEN2 Mask          */

#define BPWM_CAPCTL_FCRLDEN3_Pos         (27)                                              /*!< BPWM_T::CAPCTL: FCRLDEN3 Position      */
#define BPWM_CAPCTL_FCRLDEN3_Msk         (0x1ul << BPWM_CAPCTL_FCRLDEN3_Pos)               /*!< BPWM_T::CAPCTL: FCRLDEN3 Mask          */

#define BPWM_CAPCTL_FCRLDEN4_Pos         (28)                                              /*!< BPWM_T::CAPCTL: FCRLDEN4 Position      */
#define BPWM_CAPCTL_FCRLDEN4_Msk         (0x1ul << BPWM_CAPCTL_FCRLDEN4_Pos)               /*!< BPWM_T::CAPCTL: FCRLDEN4 Mask          */

#define BPWM_CAPCTL_FCRLDEN5_Pos         (29)                                              /*!< BPWM_T::CAPCTL: FCRLDEN5 Position      */
#define BPWM_CAPCTL_FCRLDEN5_Msk         (0x1ul << BPWM_CAPCTL_FCRLDEN5_Pos)               /*!< BPWM_T::CAPCTL: FCRLDEN5 Mask          */

#define BPWM_CAPCTL_FCRLDENn_Pos         (24)                                              /*!< BPWM_T::CAPCTL: FCRLDENn Position      */
#define BPWM_CAPCTL_FCRLDENn_Msk         (0x3ful << BPWM_CAPCTL_FCRLDENn_Pos)              /*!< BPWM_T::CAPCTL: FCRLDENn Mask          */

#define BPWM_CAPSTS_CRIFOV0_Pos          (0)                                               /*!< BPWM_T::CAPSTS: CRIFOV0 Position       */
#define BPWM_CAPSTS_CRIFOV0_Msk          (0x1ul << BPWM_CAPSTS_CRIFOV0_Pos)                /*!< BPWM_T::CAPSTS: CRIFOV0 Mask           */

#define BPWM_CAPSTS_CRIFOV1_Pos          (1)                                               /*!< BPWM_T::CAPSTS: CRIFOV1 Position       */
#define BPWM_CAPSTS_CRIFOV1_Msk          (0x1ul << BPWM_CAPSTS_CRIFOV1_Pos)                /*!< BPWM_T::CAPSTS: CRIFOV1 Mask           */

#define BPWM_CAPSTS_CRIFOV2_Pos          (2)                                               /*!< BPWM_T::CAPSTS: CRIFOV2 Position       */
#define BPWM_CAPSTS_CRIFOV2_Msk          (0x1ul << BPWM_CAPSTS_CRIFOV2_Pos)                /*!< BPWM_T::CAPSTS: CRIFOV2 Mask           */

#define BPWM_CAPSTS_CRIFOV3_Pos          (3)                                               /*!< BPWM_T::CAPSTS: CRIFOV3 Position       */
#define BPWM_CAPSTS_CRIFOV3_Msk          (0x1ul << BPWM_CAPSTS_CRIFOV3_Pos)                /*!< BPWM_T::CAPSTS: CRIFOV3 Mask           */

#define BPWM_CAPSTS_CRIFOV4_Pos          (4)                                               /*!< BPWM_T::CAPSTS: CRIFOV4 Position       */
#define BPWM_CAPSTS_CRIFOV4_Msk          (0x1ul << BPWM_CAPSTS_CRIFOV4_Pos)                /*!< BPWM_T::CAPSTS: CRIFOV4 Mask           */

#define BPWM_CAPSTS_CRIFOV5_Pos          (5)                                               /*!< BPWM_T::CAPSTS: CRIFOV5 Position       */
#define BPWM_CAPSTS_CRIFOV5_Msk          (0x1ul << BPWM_CAPSTS_CRIFOV5_Pos)                /*!< BPWM_T::CAPSTS: CRIFOV5 Mask           */

#define BPWM_CAPSTS_CRIFOVn_Pos          (0)                                               /*!< BPWM_T::CAPSTS: CRIFOVn Position       */
#define BPWM_CAPSTS_CRIFOVn_Msk          (0x3ful << BPWM_CAPSTS_CRIFOVn_Pos)               /*!< BPWM_T::CAPSTS: CRIFOVn Mask           */

#define BPWM_CAPSTS_CFIFOV0_Pos          (8)                                               /*!< BPWM_T::CAPSTS: CFIFOV0 Position       */
#define BPWM_CAPSTS_CFIFOV0_Msk          (0x1ul << BPWM_CAPSTS_CFIFOV0_Pos)                /*!< BPWM_T::CAPSTS: CFIFOV0 Mask           */

#define BPWM_CAPSTS_CFIFOV1_Pos          (9)                                               /*!< BPWM_T::CAPSTS: CFIFOV1 Position       */
#define BPWM_CAPSTS_CFIFOV1_Msk          (0x1ul << BPWM_CAPSTS_CFIFOV1_Pos)                /*!< BPWM_T::CAPSTS: CFIFOV1 Mask           */

#define BPWM_CAPSTS_CFIFOV2_Pos          (10)                                              /*!< BPWM_T::CAPSTS: CFIFOV2 Position       */
#define BPWM_CAPSTS_CFIFOV2_Msk          (0x1ul << BPWM_CAPSTS_CFIFOV2_Pos)                /*!< BPWM_T::CAPSTS: CFIFOV2 Mask           */

#define BPWM_CAPSTS_CFIFOV3_Pos          (11)                                              /*!< BPWM_T::CAPSTS: CFIFOV3 Position       */
#define BPWM_CAPSTS_CFIFOV3_Msk          (0x1ul << BPWM_CAPSTS_CFIFOV3_Pos)                /*!< BPWM_T::CAPSTS: CFIFOV3 Mask           */

#define BPWM_CAPSTS_CFIFOV4_Pos          (12)                                              /*!< BPWM_T::CAPSTS: CFIFOV4 Position       */
#define BPWM_CAPSTS_CFIFOV4_Msk          (0x1ul << BPWM_CAPSTS_CFIFOV4_Pos)                /*!< BPWM_T::CAPSTS: CFIFOV4 Mask           */

#define BPWM_CAPSTS_CFIFOV5_Pos          (13)                                              /*!< BPWM_T::CAPSTS: CFIFOV5 Position       */
#define BPWM_CAPSTS_CFIFOV5_Msk          (0x1ul << BPWM_CAPSTS_CFIFOV5_Pos)                /*!< BPWM_T::CAPSTS: CFIFOV5 Mask           */

#define BPWM_CAPSTS_CFIFOVn_Pos          (8)                                               /*!< BPWM_T::CAPSTS: CFIFOVn Position       */
#define BPWM_CAPSTS_CFIFOVn_Msk          (0x3ful << BPWM_CAPSTS_CFIFOVn_Pos)               /*!< BPWM_T::CAPSTS: CFIFOVn Mask           */

#define BPWM_RCAPDAT0_RCAPDAT_Pos        (0)                                               /*!< BPWM_T::RCAPDAT0: RCAPDAT Position     */
#define BPWM_RCAPDAT0_RCAPDAT_Msk        (0xfffful << BPWM_RCAPDAT0_RCAPDAT_Pos)           /*!< BPWM_T::RCAPDAT0: RCAPDAT Mask         */

#define BPWM_FCAPDAT0_FCAPDAT_Pos        (0)                                               /*!< BPWM_T::FCAPDAT0: FCAPDAT Position     */
#define BPWM_FCAPDAT0_FCAPDAT_Msk        (0xfffful << BPWM_FCAPDAT0_FCAPDAT_Pos)           /*!< BPWM_T::FCAPDAT0: FCAPDAT Mask         */

#define BPWM_RCAPDAT1_RCAPDAT_Pos        (0)                                               /*!< BPWM_T::RCAPDAT1: RCAPDAT Position     */
#define BPWM_RCAPDAT1_RCAPDAT_Msk        (0xfffful << BPWM_RCAPDAT1_RCAPDAT_Pos)           /*!< BPWM_T::RCAPDAT1: RCAPDAT Mask         */

#define BPWM_FCAPDAT1_FCAPDAT_Pos        (0)                                               /*!< BPWM_T::FCAPDAT1: FCAPDAT Position     */
#define BPWM_FCAPDAT1_FCAPDAT_Msk        (0xfffful << BPWM_FCAPDAT1_FCAPDAT_Pos)           /*!< BPWM_T::FCAPDAT1: FCAPDAT Mask         */

#define BPWM_RCAPDAT2_RCAPDAT_Pos        (0)                                               /*!< BPWM_T::RCAPDAT2: RCAPDAT Position     */
#define BPWM_RCAPDAT2_RCAPDAT_Msk        (0xfffful << BPWM_RCAPDAT2_RCAPDAT_Pos)           /*!< BPWM_T::RCAPDAT2: RCAPDAT Mask         */

#define BPWM_FCAPDAT2_FCAPDAT_Pos        (0)                                               /*!< BPWM_T::FCAPDAT2: FCAPDAT Position     */
#define BPWM_FCAPDAT2_FCAPDAT_Msk        (0xfffful << BPWM_FCAPDAT2_FCAPDAT_Pos)           /*!< BPWM_T::FCAPDAT2: FCAPDAT Mask         */

#define BPWM_RCAPDAT3_RCAPDAT_Pos        (0)                                               /*!< BPWM_T::RCAPDAT3: RCAPDAT Position     */
#define BPWM_RCAPDAT3_RCAPDAT_Msk        (0xfffful << BPWM_RCAPDAT3_RCAPDAT_Pos)           /*!< BPWM_T::RCAPDAT3: RCAPDAT Mask         */

#define BPWM_FCAPDAT3_FCAPDAT_Pos        (0)                                               /*!< BPWM_T::FCAPDAT3: FCAPDAT Position     */
#define BPWM_FCAPDAT3_FCAPDAT_Msk        (0xfffful << BPWM_FCAPDAT3_FCAPDAT_Pos)           /*!< BPWM_T::FCAPDAT3: FCAPDAT Mask         */

#define BPWM_RCAPDAT4_RCAPDAT_Pos        (0)                                               /*!< BPWM_T::RCAPDAT4: RCAPDAT Position     */
#define BPWM_RCAPDAT4_RCAPDAT_Msk        (0xfffful << BPWM_RCAPDAT4_RCAPDAT_Pos)           /*!< BPWM_T::RCAPDAT4: RCAPDAT Mask         */

#define BPWM_FCAPDAT4_FCAPDAT_Pos        (0)                                               /*!< BPWM_T::FCAPDAT4: FCAPDAT Position     */
#define BPWM_FCAPDAT4_FCAPDAT_Msk        (0xfffful << BPWM_FCAPDAT4_FCAPDAT_Pos)           /*!< BPWM_T::FCAPDAT4: FCAPDAT Mask         */

#define BPWM_RCAPDAT5_RCAPDAT_Pos        (0)                                               /*!< BPWM_T::RCAPDAT5: RCAPDAT Position     */
#define BPWM_RCAPDAT5_RCAPDAT_Msk        (0xfffful << BPWM_RCAPDAT5_RCAPDAT_Pos)           /*!< BPWM_T::RCAPDAT5: RCAPDAT Mask         */

#define BPWM_FCAPDAT5_FCAPDAT_Pos        (0)                                               /*!< BPWM_T::FCAPDAT5: FCAPDAT Position     */
#define BPWM_FCAPDAT5_FCAPDAT_Msk        (0xfffful << BPWM_FCAPDAT5_FCAPDAT_Pos)           /*!< BPWM_T::FCAPDAT5: FCAPDAT Mask         */

#define BPWM_CAPIEN_CAPRIENn_Pos         (0)                                               /*!< BPWM_T::CAPIEN: CAPRIENn Position      */
#define BPWM_CAPIEN_CAPRIENn_Msk         (0x3ful << BPWM_CAPIEN_CAPRIENn_Pos)              /*!< BPWM_T::CAPIEN: CAPRIENn Mask          */

#define BPWM_CAPIEN_CAPFIENn_Pos         (8)                                               /*!< BPWM_T::CAPIEN: CAPFIENn Position      */
#define BPWM_CAPIEN_CAPFIENn_Msk         (0x3ful << BPWM_CAPIEN_CAPFIENn_Pos)              /*!< BPWM_T::CAPIEN: CAPFIENn Mask          */

#define BPWM_CAPIF_CAPRIF0_Pos           (0)                                               /*!< BPWM_T::CAPIF: CAPRIF0 Position        */
#define BPWM_CAPIF_CAPRIF0_Msk           (0x1ul << BPWM_CAPIF_CAPRIF0_Pos)                 /*!< BPWM_T::CAPIF: CAPRIF0 Mask            */

#define BPWM_CAPIF_CAPRIF1_Pos           (1)                                               /*!< BPWM_T::CAPIF: CAPRIF1 Position        */
#define BPWM_CAPIF_CAPRIF1_Msk           (0x1ul << BPWM_CAPIF_CAPRIF1_Pos)                 /*!< BPWM_T::CAPIF: CAPRIF1 Mask            */

#define BPWM_CAPIF_CAPRIF2_Pos           (2)                                               /*!< BPWM_T::CAPIF: CAPRIF2 Position        */
#define BPWM_CAPIF_CAPRIF2_Msk           (0x1ul << BPWM_CAPIF_CAPRIF2_Pos)                 /*!< BPWM_T::CAPIF: CAPRIF2 Mask            */

#define BPWM_CAPIF_CAPRIF3_Pos           (3)                                               /*!< BPWM_T::CAPIF: CAPRIF3 Position        */
#define BPWM_CAPIF_CAPRIF3_Msk           (0x1ul << BPWM_CAPIF_CAPRIF3_Pos)                 /*!< BPWM_T::CAPIF: CAPRIF3 Mask            */

#define BPWM_CAPIF_CAPRIF4_Pos           (4)                                               /*!< BPWM_T::CAPIF: CAPRIF4 Position        */
#define BPWM_CAPIF_CAPRIF4_Msk           (0x1ul << BPWM_CAPIF_CAPRIF4_Pos)                 /*!< BPWM_T::CAPIF: CAPRIF4 Mask            */

#define BPWM_CAPIF_CAPRIF5_Pos           (5)                                               /*!< BPWM_T::CAPIF: CAPRIF5 Position        */
#define BPWM_CAPIF_CAPRIF5_Msk           (0x1ul << BPWM_CAPIF_CAPRIF5_Pos)                 /*!< BPWM_T::CAPIF: CAPRIF5 Mask            */

#define BPWM_CAPIF_CAPRIFn_Pos           (0)                                               /*!< BPWM_T::CAPIF: CAPRIFn Position        */
#define BPWM_CAPIF_CAPRIFn_Msk           (0x3ful << BPWM_CAPIF_CAPRIFn_Pos)                /*!< BPWM_T::CAPIF: CAPRIFn Mask            */

#define BPWM_CAPIF_CAPFIF0_Pos           (8)                                               /*!< BPWM_T::CAPIF: CAPFIF0 Position        */
#define BPWM_CAPIF_CAPFIF0_Msk           (0x1ul << BPWM_CAPIF_CAPFIF0_Pos)                 /*!< BPWM_T::CAPIF: CAPFIF0 Mask            */

#define BPWM_CAPIF_CAPFIF1_Pos           (9)                                               /*!< BPWM_T::CAPIF: CAPFIF1 Position        */
#define BPWM_CAPIF_CAPFIF1_Msk           (0x1ul << BPWM_CAPIF_CAPFIF1_Pos)                 /*!< BPWM_T::CAPIF: CAPFIF1 Mask            */

#define BPWM_CAPIF_CAPFIF2_Pos           (10)                                              /*!< BPWM_T::CAPIF: CAPFIF2 Position        */
#define BPWM_CAPIF_CAPFIF2_Msk           (0x1ul << BPWM_CAPIF_CAPFIF2_Pos)                 /*!< BPWM_T::CAPIF: CAPFIF2 Mask            */

#define BPWM_CAPIF_CAPFIF3_Pos           (11)                                              /*!< BPWM_T::CAPIF: CAPFIF3 Position        */
#define BPWM_CAPIF_CAPFIF3_Msk           (0x1ul << BPWM_CAPIF_CAPFIF3_Pos)                 /*!< BPWM_T::CAPIF: CAPFIF3 Mask            */

#define BPWM_CAPIF_CAPFIF4_Pos           (12)                                              /*!< BPWM_T::CAPIF: CAPFIF4 Position        */
#define BPWM_CAPIF_CAPFIF4_Msk           (0x1ul << BPWM_CAPIF_CAPFIF4_Pos)                 /*!< BPWM_T::CAPIF: CAPFIF4 Mask            */

#define BPWM_CAPIF_CAPFIF5_Pos           (13)                                              /*!< BPWM_T::CAPIF: CAPFIF5 Position        */
#define BPWM_CAPIF_CAPFIF5_Msk           (0x1ul << BPWM_CAPIF_CAPFIF5_Pos)                 /*!< BPWM_T::CAPIF: CAPFIF5 Mask            */

#define BPWM_CAPIF_CAPFIFn_Pos           (8)                                               /*!< BPWM_T::CAPIF: CAPFIFn Position        */
#define BPWM_CAPIF_CAPFIFn_Msk           (0x3ful << BPWM_CAPIF_CAPFIFn_Pos)                /*!< BPWM_T::CAPIF: CAPFIFn Mask            */

#define BPWM_PBUF_PBUF_Pos               (0)                                               /*!< BPWM_T::PBUF: PBUF Position            */
#define BPWM_PBUF_PBUF_Msk               (0xfffful << BPWM_PBUF_PBUF_Pos)                  /*!< BPWM_T::PBUF: PBUF Mask                */

#define BPWM_CMPBUF0_CMPBUF_Pos          (0)                                               /*!< BPWM_T::CMPBUF0: CMPBUF Position       */
#define BPWM_CMPBUF0_CMPBUF_Msk          (0xfffful << BPWM_CMPBUF0_CMPBUF_Pos)             /*!< BPWM_T::CMPBUF0: CMPBUF Mask           */

#define BPWM_CMPBUF1_CMPBUF_Pos          (0)                                               /*!< BPWM_T::CMPBUF1: CMPBUF Position       */
#define BPWM_CMPBUF1_CMPBUF_Msk          (0xfffful << BPWM_CMPBUF1_CMPBUF_Pos)             /*!< BPWM_T::CMPBUF1: CMPBUF Mask           */

#define BPWM_CMPBUF2_CMPBUF_Pos          (0)                                               /*!< BPWM_T::CMPBUF2: CMPBUF Position       */
#define BPWM_CMPBUF2_CMPBUF_Msk          (0xfffful << BPWM_CMPBUF2_CMPBUF_Pos)             /*!< BPWM_T::CMPBUF2: CMPBUF Mask           */

#define BPWM_CMPBUF3_CMPBUF_Pos          (0)                                               /*!< BPWM_T::CMPBUF3: CMPBUF Position       */
#define BPWM_CMPBUF3_CMPBUF_Msk          (0xfffful << BPWM_CMPBUF3_CMPBUF_Pos)             /*!< BPWM_T::CMPBUF3: CMPBUF Mask           */

#define BPWM_CMPBUF4_CMPBUF_Pos          (0)                                               /*!< BPWM_T::CMPBUF4: CMPBUF Position       */
#define BPWM_CMPBUF4_CMPBUF_Msk          (0xfffful << BPWM_CMPBUF4_CMPBUF_Pos)             /*!< BPWM_T::CMPBUF4: CMPBUF Mask           */

#define BPWM_CMPBUF5_CMPBUF_Pos          (0)                                               /*!< BPWM_T::CMPBUF5: CMPBUF Position       */
#define BPWM_CMPBUF5_CMPBUF_Msk          (0xfffful << BPWM_CMPBUF5_CMPBUF_Pos)             /*!< BPWM_T::CMPBUF5: CMPBUF Mask           */

/**@}*/ /* BPWM_CONST */
/**@}*/ /* end of BPWM register group */


/*---------------------- Serial Peripheral Interface Controller -------------------------*/
/**
    @addtogroup SPI Serial Peripheral Interface Controller(SPI)
    Memory Mapped Structure for SPI Controller
    @{
*/

typedef struct
{


    /**
     * @var SPI_T::CTL
     * Offset: 0x00  SPI Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |SPIEN     |SPI Transfer Control Enable Bit
     * |        |          |In Master mode, the transfer will start when there is data in the FIFO buffer after this bit is set to 1
     * |        |          |In Slave mode, this device is ready to receive data when this bit is set to 1.
     * |        |          |0 = Transfer control Disabled.
     * |        |          |1 = Transfer control Enabled.
     * |        |          |Note: Before changing the configurations of SPIx_CTL, SPIx_CLKDIV, SPIx_SSCTL and SPIx_FIFOCTL registers, user shall clear the SPIEN (SPIx_CTL[0]) and confirm the SPIENSTS (SPIx_STATUS[15]) is 0.
     * |[1]     |RXNEG     |Receive on Negative Edge
     * |        |          |0 = Received data input signal is latched on the rising edge of SPI bus clock.
     * |        |          |1 = Received data input signal is latched on the falling edge of SPI bus clock.
     * |[2]     |TXNEG     |Transmit on Negative Edge
     * |        |          |0 = Transmitted data output signal is changed on the rising edge of SPI bus clock.
     * |        |          |1 = Transmitted data output signal is changed on the falling edge of SPI bus clock.
     * |[3]     |CLKPOL    |Clock Polarity
     * |        |          |0 = SPI bus clock is idle low.
     * |        |          |1 = SPI bus clock is idle high.
     * |[7:4]   |SUSPITV   |Suspend Interval (Master Only)
     * |        |          |The four bits provide configurable suspend interval between two successive transmit/receive transaction in a transfer
     * |        |          |The definition of the suspend interval is the interval between the last clock edge of the preceding transaction word and the first clock edge of the following transaction word
     * |        |          |The default value is 0x3
     * |        |          |The period of the suspend interval is obtained according to the following equation.
     * |        |          |(SUSPITV[3:0] + 0.5) * period of SPICLK clock cycle
     * |        |          |Example:
     * |        |          |SUSPITV = 0x0 u2026. 0.5 SPICLK clock cycle.
     * |        |          |SUSPITV = 0x1 u2026. 1.5 SPICLK clock cycle.
     * |        |          |u2026u2026
     * |        |          |SUSPITV = 0xE u2026. 14.5 SPICLK clock cycle.
     * |        |          |SUSPITV = 0xF u2026. 15.5 SPICLK clock cycle.
     * |[12:8]  |DWIDTH    |Data Width
     * |        |          |This field specifies how many bits can be transmitted / received in one transaction
     * |        |          |The minimum bit length is 8 bits and can up to 32 bits.
     * |        |          |DWIDTH = 0x08 u2026. 8 bits.
     * |        |          |DWIDTH = 0x09 u2026. 9 bits.
     * |        |          |u2026u2026
     * |        |          |DWIDTH = 0x1F u2026. 31 bits.
     * |        |          |DWIDTH = 0x00 u2026. 32 bits.
     * |[13]    |LSB       |Send LSB First
     * |        |          |0 = The MSB, which bit of transmit/receive register depends on the setting of DWIDTH, is transmitted/received first.
     * |        |          |1 = The LSB, bit 0 of the SPI TX register, is sent first to the SPI data output pin, and the first bit received from the SPI data input pin will be put in the LSB position of the RX register (bit 0 of SPI_RX).
     * |[14]    |HALFDPX   |SPI Half-duplex duplex TRANSMISSION Transfer Enable Bit
     * |        |          |This bit is used to select full-duplex or half-duplex for SPI transmissiontransfer
     * |        |          |The bit field DATDIR (SPIx_CTL[20]) can be used to set the data direction while in half-duplex transmissiontransfer.
     * |        |          |0 = SPI operates in full-duplex transmissiontransfer.
     * |        |          |1 = SPI operates in half-duplex transmissiontransfer.
     * |[15]    |RXONLY    |Receive-only FUNCTION Mode Enable Bit (Master Only)
     * |        |          |This bit field is only available in Master mode
     * |        |          |In receive-only mode, SPI Master will generate SPI bus clock continuously for receiving data bit from SPI slave device and assert the BUSY status
     * |        |          |If both AUTOSS (SPI_SSCTL[3]) and RXONLY are enabled, the output slave select signal will be activated.
     * |        |          |0 = Receive-only function mode Disabled.
     * |        |          |1 = Receive-only functionmode Enabled.
     * |        |          |Note: We suggest users switch to receive-only mode when BUSY (SPI_STATUS[0]) is low.
     * |[17]    |UNITIEN   |Unit Transfer Interrupt Enable Bit
     * |        |          |0 = SPI unit transfer interrupt Disabled.
     * |        |          |1 = SPI unit transfer interrupt Enabled.
     * |[18]    |SLAVE     |Slave Mode Control
     * |        |          |0 = Master mode.
     * |        |          |1 = Slave mode.
     * |[19]    |REORDER   |Byte Reorder Function Enable Bit
     * |        |          |0 = Byte Reorder function Disabled.
     * |        |          |1 = Byte Reorder function Enabled
     * |        |          |A byte suspend interval will be inserted among each byte
     * |        |          |The period of the byte suspend interval depends on the setting of SUSPITV.
     * |        |          |Note:
     * |        |          |Byte Reorder function is only available if DWIDTH is defined as 16, 24, and 32 bits.
     * |        |          |Byte Reorder function is not supported when the Quad or Dual I/O mode is enabled.
     * |[20]    |DATDIR    |Data Port Direction Control
     * |        |          |This bit is used to select the data input/output direction while in half-duplex transfer.ransmission.
     * |        |          |0 = SPI data is input direction.
     * |        |          |1 = SPI data is output direction.
     * @var SPI_T::CLKDIV
     * Offset: 0x04  SPI Clock Divider Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |DIVIDER   |Clock Divider
     * |        |          |The value in this field is the frequency divider for generating the peripheral clock, fspi_eclk, and the SPI bus clock of SPI Master
     * |        |          |The frequency is obtained according to the following equation.
     * |        |          |where
     * |        |          |is the peripheral clock source, which is defined in the clock control register, CLK_CLKSEL2.
     * |        |          |Note: Not supported in I2S mode.
     * @var SPI_T::SSCTL
     * Offset: 0x08  SPI Slave Select Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |SS        |Slave Selection Control (Master Only)
     * |        |          |If AUTOSS bit is cleared to 0,
     * |        |          |0 = set the SPIx_SS line to inactive state.
     * |        |          |1 = set the SPIx_SS line to active state.
     * |        |          |If the AUTOSS bit is set to 1,
     * |        |          |0 = Keep the SPIx_SS line at inactive state.
     * |        |          |1 = SPIx_SS line will be automatically driven to active state for the duration of data transfer, and will be driven to inactive state for the rest of the time
     * |        |          |The active state of SPIx_SS is specified in SSACTPOL (SPIx_SSCTL[2]).
     * |[2]     |SSACTPOL  |Slave Selection Active Polarity
     * |        |          |This bit defines the active polarity of slave selection signal (SPIx_SS).
     * |        |          |0 = The slave selection signal SPIx_SS is active low.
     * |        |          |1 = The slave selection signal SPIx_SS is active high.
     * |[3]     |AUTOSS    |Automatic Slave Selection Function Enable Bit (Master Only)
     * |        |          |0 = Automatic slave selection function Disabled
     * |        |          |Slave selection signal will be asserted/de-asserted according to SS (SPIx_SSCTL[0]).
     * |        |          |1 = Automatic slave selection function Enabled.
     * |[8]     |SLVBEIEN  |Slave Mode Bit Count Error Interrupt Enable Bit
     * |        |          |0 = Slave mode bit count error interrupt Disabled.
     * |        |          |1 = Slave mode bit count error interrupt Enabled.
     * |[9]     |SLVURIEN  |Slave Mode TX Under Run Interrupt Enable Bit
     * |        |          |0 = Slave mode TX under run interrupt Disabled.
     * |        |          |1 = Slave mode TX under run interrupt Enabled.
     * |[12]    |SSACTIEN  |Slave Select Active Interrupt Enable Bit
     * |        |          |0 = Slave select active interrupt Disabled.
     * |        |          |1 = Slave select active interrupt Enabled.
     * |[13]    |SSINAIEN  |Slave Select Inactive Interrupt Enable Bit
     * |        |          |0 = Slave select inactive interrupt Disabled.
     * |        |          |1 = Slave select inactive interrupt Enabled.
     * @var SPI_T::PDMACTL
     * Offset: 0x0C  SPI PDMA Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |TXPDMAEN  |Transmit PDMA Enable Bit
     * |        |          |0 = Transmit PDMA function Disabled.
     * |        |          |1 = Transmit PDMA function Enabled.
     * |        |          |Note: In SPI Master mode with full duplex transfer, if both TX and RX PDMA functions are enabled, RX PDMA function cannot be enabled prior to TX PDMA function
     * |        |          |User can enable TX PDMA function firstly or enable both functions simultaneously.
     * |[1]     |RXPDMAEN  |Receive PDMA Enable Bit
     * |        |          |0 = Receiver PDMA function Disabled.
     * |        |          |1 = Receiver PDMA function Enabled.
     * |[2]     |PDMARST   |PDMA Reset
     * |        |          |0 = No effect.
     * |        |          |1 = Reset the PDMA control logic of the SPI controller. This bit will be automatically cleared to 0.
     * @var SPI_T::FIFOCTL
     * Offset: 0x10  SPI FIFO Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |RXRST     |Receive Reset
     * |        |          |0 = No effect.
     * |        |          |1 = Reset receive FIFO pointer and receive circuit
     * |        |          |The RXFULL bit will be cleared to 0 and the RXEMPTY bit will be set to 1
     * |        |          |This bit will be cleared to 0 by hardware about 3 system clock cycles + 2 peripheral clock cycles after it is set to 1
     * |        |          |User can read TXRXRST (SPIx_STATUS[23]) to check if reset is accomplished or not.
     * |        |          |Note: If there is slave receive time-out event, the RXRST will be set 1 when the SLVTORST (SPI_SSCTL[6]) is enabled.
     * |[1]     |TXRST     |Transmit Reset
     * |        |          |0 = No effect.
     * |        |          |1 = Reset transmit FIFO pointer and transmit circuit
     * |        |          |The TXFULL bit will be cleared to 0 and the TXEMPTY bit will be set to 1
     * |        |          |This bit will be cleared to 0 by hardware about 3 system clock cycles + 2 peripheral clock cycles after it is set to 1
     * |        |          |User can read TXRXRST (SPIx_STATUS[23]) to check if reset is accomplished or not.
     * |        |          |Note: If TX under-runflow event occurs in SPI Slave mode, this bit can be used to make SPI return to idle state.Note: If there is slave receive time-out event, the TXRST will be set to 1 when the SLVTORST (SPI_SSCTL[6]) is enabled.
     * |[2]     |RXTHIEN   |Receive FIFO Threshold Interrupt Enable Bit
     * |        |          |0 = RX FIFO threshold interrupt Disabled.
     * |        |          |1 = RX FIFO threshold interrupt Enabled.
     * |[3]     |TXTHIEN   |Transmit FIFO Threshold Interrupt Enable Bit
     * |        |          |0 = TX FIFO threshold interrupt Disabled.
     * |        |          |1 = TX FIFO threshold interrupt Enabled.
     * |[4]     |RXTOIEN   |Slave Receive Time-out Interrupt Enable Bit
     * |        |          |0 = Receive time-out interrupt Disabled.
     * |        |          |1 = Receive time-out interrupt Enabled.
     * |[5]     |RXOVIEN   |Receive FIFO Overrun Interrupt Enable Bit
     * |        |          |0 = Receive FIFO overrun interrupt Disabled.
     * |        |          |1 = Receive FIFO overrun interrupt Enabled.
     * |[6]     |TXUFPOL   |TX Underflow Data Polarity
     * |        |          |0 = The SPI data out is keep 0 if there is TX underflow event in Slave mode.
     * |        |          |1 = The SPI data out is keep 1 if there is TX underflow event in Slave mode.
     * |        |          |Note:
     * |        |          |1
     * |        |          |The TX underflow event occurs if there is not any data in TX FIFO when the slave selection signal is active.
     * |        |          |2. This bit should be set as 0 in I2S mode.
     * |        |          |3
     * |        |          |When TX underflow event occurs, SPIx_MISO pin state will be determined by this setting even though TX FIFO is not empty afterward
     * |        |          |Data stored in TX FIFO will be sent through SPIx_MISO pin in the next transfer frame.
     * |[7]     |TXUFIEN   |TX Underflow Interrupt Enable Bit
     * |        |          |0 = Slave TX underflow interrupt Disabled.
     * |        |          |1 = Slave TX underflow interrupt Enabled.
     * |[8]     |RXFBCLR   |Receive FIFO Buffer Clear
     * |        |          |0 = No effect.
     * |        |          |1 = Clear receive FIFO pointer
     * |        |          |The RXFULL bit will be cleared to 0 and the RXEMPTY bit will be set to 1
     * |        |          |This bit will be cleared to 0 by hardware about 1 system clock after it is set to 1.
     * |        |          |Note: The RX shift register will not be cleared.
     * |[9]     |TXFBCLR   |Transmit FIFO Buffer Clear
     * |        |          |0 = No effect.
     * |        |          |1 = Clear transmit FIFO pointer
     * |        |          |The TXFULL bit will be cleared to 0 and the TXEMPTY bit will be set to 1
     * |        |          |This bit will be cleared to 0 by hardware about 1 system clock after it is set to 1.
     * |        |          |Note: The TX shift register will not be cleared.
     * |[25:24] |RXTH      |Receive FIFO Threshold
     * |        |          |If the valid data count of the receive FIFO buffer is larger than the RXTH setting, the RXTHIF bit will be set to 1, else the RXTHIF bit will be cleared to 0
     * |[29:28] |TXTH      |Transmit FIFO Threshold
     * |        |          |If the valid data count of the transmit FIFO buffer is less than or equal to the TXTH setting, the TXTHIF bit will be set to 1, else the TXTHIF bit will be cleared to 0.
     * @var SPI_T::STATUS
     * Offset: 0x14  SPI Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |BUSY      |Busy Status (Read Only)
     * |        |          |0 = SPI controller is in idle state.
     * |        |          |1 = SPI controller is in busy state.
     * |        |          |The following listing are the bus busy conditions:
     * |        |          |a. SPIx_CTL[0] = 1 and the TXEMPTY = 0.
     * |        |          |b
     * |        |          |For SPI Master mode, SPIx_CTL[0] = 1 and the TXEMPTY = 1 but the current transaction is not finished yet.
     * |        |          |c. For SPI Master mode, SPIx_CTL[0] = 1 and RXONLY = 1.
     * |        |          |d
     * |        |          |For SPI Slave mode, the SPIx_CTL[0] = 1 and there is serial clock input into the SPI core logic when slave select is active.
     * |        |          |For SPI Slave mode, the SPIx_CTL[0] = 1 and the transmit buffer or transmit shift register is not empty even if the slave select is inactive.
     * |[1]     |UNITIF    |Unit Transfer Interrupt Flag
     * |        |          |0 = No transaction has been finished since this bit was cleared to 0.
     * |        |          |1 = SPI controller has finished one unit transfer.
     * |        |          |Note: This bit will be cleared by writing 1 to it.
     * |[2]     |SSACTIF   |Slave Select Active Interrupt Flag
     * |        |          |0 = Slave select active interrupt was cleared or not occurred.
     * |        |          |1 = Slave select active interrupt event occurred.
     * |        |          |Note: Only available in Slave mode. This bit will be cleared by writing 1 to it.
     * |[3]     |SSINAIF   |Slave Select Inactive Interrupt Flag
     * |        |          |0 = Slave select inactive interrupt was cleared or not occurred.
     * |        |          |1 = Slave select inactive interrupt event occurred.
     * |        |          |Note: Only available in Slave mode. This bit will be cleared by writing 1 to it.
     * |[4]     |SSLINE    |Slave Select Line Bus Status (Read Only)
     * |        |          |0 = The slave select line status is 0.
     * |        |          |1 = The slave select line status is 1.
     * |        |          |Note: This bit is only available in Slave mode
     * |        |          |If SSACTPOL (SPIx_SSCTL[2]) is set 0, and the SSLINE is 1, the SPI slave select is in inactive status.
     * |[6]     |SLVBEIF   |Slave Mode Bit Count Error Interrupt Flag
     * |        |          |In Slave mode, when the slave select line goes to inactive state, if bit counter is mismatch with DWIDTH, this interrupt flag will be set to 1.
     * |        |          |0 = No Slave mode bit count error event.
     * |        |          |1 = Slave mode bit count error event occurs.
     * |        |          |Note: If the slave select active but there is no any bus clock input, the SLVBCEEIF also active when the slave select goes to inactive state
     * |        |          |This bit will be cleared by writing 1 to it.
     * |[7]     |SLVURIF   |Slave Mode TX Under Run Interrupt Flag
     * |        |          |In Slave mode, if TX underflow event occurs and the slave select line goes to inactive state, this interrupt flag will be set to 1.
     * |        |          |0 = No Slave TX under run event.
     * |        |          |1 = Slave TX under run event occurs.
     * |        |          |Note: This bit will be cleared by writing 1 to it.
     * |[8]     |RXEMPTY   |Receive FIFO Buffer Empty Indicator (Read Only)
     * |        |          |0 = Receive FIFO buffer is not empty.
     * |        |          |1 = Receive FIFO buffer is empty.
     * |[9]     |RXFULL    |Receive FIFO Buffer Full Indicator (Read Only)
     * |        |          |0 = Receive FIFO buffer is not full.
     * |        |          |1 = Receive FIFO buffer is full.
     * |[10]    |RXTHIF    |Receive FIFO Threshold Interrupt Flag (Read Only)
     * |        |          |0 = The valid data count within the RXreceive FIFO buffer is smaller than or equal to the setting value of RXTH.
     * |        |          |1 = The valid data count within the receive FIFO buffer is larger than the setting value of RXTH.
     * |[11]    |RXOVIF    |Receive FIFO Overrun Interrupt Flag
     * |        |          |When the receive FIFO buffer is full, the follow-up data will be dropped and this bit will be set to 1.
     * |        |          |0 = No FIFO is over run.
     * |        |          |1 = Receive FIFO is over run.
     * |        |          |Note: This bit will be cleared by writing 1 to it.
     * |[12]    |RXTOIF    |Receive Time-out Interrupt Flag
     * |        |          |0 = No receive FIFO time-out event.
     * |        |          |1 = Receive FIFO buffer is not empty and no read operation on receive FIFO buffer over 64 SPI peripheral clock periods in Master mode or over 576 SPI peripheral clock periods in Slave mode
     * |        |          |When the received FIFO buffer is read by software, the time-out status will be cleared automatically.
     * |        |          |Note: This bit will be cleared by writing 1 to it.
     * |[15]    |SPIENSTS  |SPI Enable Status (Read Only)
     * |        |          |0 = The SPI controller is disabled.
     * |        |          |1 = The SPI controller is enabled.
     * |        |          |Note: The SPI peripheral clock is asynchronous with the system clock
     * |        |          |In order to make sure the SPI control logic is disabled, this bit indicates the real status of SPI controller.
     * |[16]    |TXEMPTY   |Transmit FIFO Buffer Empty Indicator (Read Only)
     * |        |          |0 = Transmit FIFO buffer is not empty.
     * |        |          |1 = Transmit FIFO buffer is empty.
     * |[17]    |TXFULL    |Transmit FIFO Buffer Full Indicator (Read Only)
     * |        |          |0 = Transmit FIFO buffer is not full.
     * |        |          |1 = Transmit FIFO buffer is full.
     * |[18]    |TXTHIF    |Transmit FIFO Threshold Interrupt Flag (Read Only)
     * |        |          |0 = The valid data count within the transmit FIFO buffer is larger than the setting value of TXTH.
     * |        |          |1 = The valid data count within the transmit FIFO buffer is less than or equal to the setting value of TXTH.
     * |[19]    |TXUFIF    |TX Underflow Interrupt Flag
     * |        |          |When the TX underflow event occurs, this bit will be set to 1, the state of data output pin depends on the setting of TXUFPOL.
     * |        |          |0 = No effect.
     * |        |          |1 = No data in Transmit FIFO and TX shift register when the slave selection signal is active.
     * |        |          |Note 1: This bit will be cleared by writing 1 to it.
     * |        |          |Note 2: If reset slaveu2019s transmission circuit when slave selection signal is active, this flag will be set to 1 after 2 peripheral clock cycles + 3 system clock cycles since the reset operation is done.
     * |[23]    |TXRXRST   |TX or RX Reset Status (Read Only)
     * |        |          |0 = The reset function of TXRST or RXRST is done.
     * |        |          |1 = Doing the reset function of TXRST or RXRST.
     * |        |          |Note: Both the reset operations of TXRST and RXRST need 3 system clock cycles + 2 peripheral clock cycles
     * |        |          |User can check the status of this bit to monitor the reset function is doing or done.
     * |[27:24] |RXCNT     |Receive FIFO Data Count (Read Only)
     * |        |          |This bit field indicates the valid data count of receive FIFO buffer.
     * |[31:28] |TXCNT     |Transmit FIFO Data Count (Read Only)
     * |        |          |This bit field indicates the valid data count of transmit FIFO buffer.
     * @var SPI_T::TX
     * Offset: 0x20  SPI Data Transmit Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |TX        |Data Transmit Register
     * |        |          |The data transmit registers pass through the transmitted data into the 4-level transmit FIFO buffers
     * |        |          |The number of valid bits depends on the setting of DWIDTH (SPIx_CTL[12:8]) in SPI mode or WDWIDTH (SPIx_I2SCTL[5:4]) in I2S mode.
     * |        |          |For exampleIn SPI mode, if DWIDTH is set to 0x08, the bits TX[7:0] will be transmitted
     * |        |          |If DWIDTH is set to 0x00 , the SPI controller will perform a 32-bit transfer.
     * |        |          |In I2S mode, if WDWIDTH (SPIx_I2SCTL[5:4]) is set to 0x2, the data width of audio channel is 24-bit and corresponding to TX[243:0]
     * |        |          |If WDWIDTH is set as 0x0, 0x1, or 0x3, all bits of this field are valid and referred to the data arrangement in I2S mode FIFO operation section
     * |        |          |Note: In Master mode, SPI controller will start to transfer the SPI bus clock after 1 APB clock and 6 peripheral clock cycles after user writes to this register.
     * @var SPI_T::RX
     * Offset: 0x30  SPI Data Receive Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |RX        |Data Receive Register
     * |        |          |There are 8-/4-level FIFO buffers in this controller
     * |        |          |The data receive register holds the data received from SPI data input pin
     * |        |          |If the RXEMPTY (SPIx_STATUS[8] or SPIx_I2SSTS[8]) is not set to 1, the receive FIFO buffers can be accessed through software by reading this register
     * |        |          |This is a read only register.
     * @var SPI_T::I2SCTL
     * Offset: 0x60  I2S Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |I2SEN     |I2S Controller Enable Bit
     * |        |          |0 = Disabled I2S mode.
     * |        |          |1 = Enabled I2S mode.
     * |        |          |Note:
     * |        |          |1. If enable this bit, I2Sx_BCLK will start to output in master Master mode.
     * |        |          |2
     * |        |          |Before changing the configurations of SPIx_I2SCTL, SPIx_I2SCLK, and SPIx_FIFOCTL registers, user shall clear the I2SEN (SPIx_I2SCTL[0]) and confirm the I2SENSTS (SPIx_I2SSTS[15]) is 0.
     * |[1]     |TXEN      |Transmit Enable Bit
     * |        |          |0 = Data transmit Disabled.
     * |        |          |1 = Data transmit Enabled.
     * |[2]     |RXEN      |Receive Enable Bit
     * |        |          |0 = Data receiving receive Disabled.
     * |        |          |1 = Data receiving receive Enabled.
     * |[3]     |MUTE      |Transmit Mute Enable Bit
     * |        |          |0 = Transmit data is shifted from buffer.
     * |        |          |1 = Transmit channel zero.
     * |[5:4]   |WDWIDTH   |Word Width
     * |        |          |00 = data size is 8-bit.
     * |        |          |01 = data size is 16-bit.
     * |        |          |10 = data size is 24-bit.
     * |        |          |11 = data size is 32-bit.
     * |[6]     |MONO      |Monaural Data
     * |        |          |0 = Data is stereo format.
     * |        |          |1 = Data is monaural format.
     * |[7]     |ORDER     |Stereo Data Order in FIFO
     * |        |          |0 = Left channel data at high byte.
     * |        |          |1 = Left channel data at low byte.
     * |[8]     |SLAVE     |Slave Mode
     * |        |          |I2S can operate as master or slave
     * |        |          |For Master mode, I2Sx_BCLK and I2Sx_LRCLK pins are output mode and send bit clock from NuMicrou00AEu00E4 NUC200 NUC1261 series to Audio audio CODEC chip
     * |        |          |In Slave mode, I2Sx_BCLK and I2Sx_LRCLK pins are input mode and I2Sx_BCLK and I2Sx_LRCLK signals are received from outer Audio audio CODEC chip.
     * |        |          |0 = Master mode.
     * |        |          |1 = Slave mode.
     * |[15]    |MCLKEN    |Master Clock Enable Bit
     * |        |          |If MCLKEN is set to 1, I2S controller will generate master clock on SPIx_I2SMCLK pin for external audio devices.
     * |        |          |0 = Master clock Disabled.
     * |        |          |1 = Master clock Enabled.
     * |[16]    |RZCEN     |Right Channel Zero Cross Detection Enable Bit
     * |        |          |If this bit is set to 1, when right channel data sign bit change or next shift data bits are all 0 then RZCIF flag in SPIx_I2SSTS register is set to 1
     * |        |          |This function is only available in transmit operation.
     * |        |          |0 = Right channel zero cross detection Disabled.
     * |        |          |1 = Right channel zero cross detection Enabled.
     * |[17]    |LZCEN     |Left Channel Zero Cross Detection Enable Bit
     * |        |          |If this bit is set to 1, when left channel data sign bit changes or next shift data bits are all 0 then LZCIF flag in SPIx_I2SSTS register is set to 1
     * |        |          |This function is only available in transmit operation.
     * |        |          |0 = Left channel zero cross detection Disabled.
     * |        |          |1 = Left channel zero cross detection Enabled.
     * |[23]    |RXLCH     |Receive Left Channel Enable Bit
     * |        |          |When monaural format is selected (MONO = 1), I2S controller will receive right channel data if RXLCH is set to 0, and receive left channel data if RXLCH is set to 1.
     * |        |          |0 = Receive right channel data in Mono mode.
     * |        |          |1 = Receive left channel data in Mono mode.
     * |[24]    |RZCIEN    |Right Channel Zero- CCross Interrupt Enable Bit
     * |        |          |Interrupt occurs if this bit is set to 1 and right channel zero- cross event occurs.
     * |        |          |0 = Interrupt Disabled.
     * |        |          |1 = Interrupt Enabled.
     * |[25]    |LZCIEN    |Left Channel Zero- CCross Interrupt Enable Bit
     * |        |          |Interrupt occurs if this bit is set to 1 and left channel zero- cross event occurs.
     * |        |          |0 = Interrupt Disabled.
     * |        |          |1 = Interrupt Enabled.
     * |[29:28] |FORMAT    |Data Format Selection
     * |        |          |00 = I2S data format.
     * |        |          |01 = MSB justified data format.
     * |        |          |10 = PCM mode A.
     * |        |          |11 = PCM mode B.
     * @var SPI_T::I2SCLK
     * Offset: 0x64  I2S Clock Divider Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[5:0]   |MCLKDIV   |Master Clock Divider
     * |        |          |If MCLKEN is set to 1, I2S controller will generate master clock for external audio devices
     * |        |          |The frequency of master clock rate, fMCLKF_MCLK, is determined by the following expressions:.
     * |        |          |If MCLKDIV >= 1,. F_MCLK = F_I2SCLK/(2x(MCLKDIV)).
     * |        |          |If MCLKDIV = 0,. F_MCLK = F_I2SCLK.
     * |        |          |where
     * |        |          |is the frequency of I2S peripheral clock source, which is defined in the clock control register CLK_CLKSEL2
     * |        |          |F_I2SCLK is the frequency of I2S peripheral clock.
     * |        |          |In general, the master clock rate is 256 times sampling clock rate.
     * |[16:8]  |BCLKDIV   |Bit Clock Divider
     * |        |          |The I2S controller will generate bit clock in Master mode
     * |        |          |The bit clock rate frequency of bit clock , Ff_bclBCLKk, is determined by the following expression:.
     * |        |          |F_BCLK = F_I2SCLK /(2x(BCLKDIV + 1)) ,
     * |        |          |where
     * |        |          |F_I2SCLK is the frequency of I2S peripheral clock source, which is defined in the clock control register CLK_CLKSEL2.
     * |        |          |In I2S
     * |        |          |Slave mode, this field is used to define the frequency of peripheral clock and itu2019s determined by .
     * |        |          |The peripheral clock frequency in I2S Slave mode must be equal to or faster than 6 times of input bit clock.
     * @var SPI_T::I2SSTS
     * Offset: 0x68  I2S Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4]     |RIGHT     |Right Channel (Read Only)
     * |        |          |This bit indicates the current transmit data is belong to which channel.
     * |        |          |0 = Left channel.
     * |        |          |1 = Right channel.
     * |[8]     |RXEMPTY   |Receive FIFO Buffer Empty Indicator (Read Only)
     * |        |          |0 = Receive FIFO buffer is not empty.
     * |        |          |1 = Receive FIFO buffer is empty.
     * |[9]     |RXFULL    |Receive FIFO Buffer Full Indicator (Read Only)
     * |        |          |0 = Receive FIFO buffer is not full.
     * |        |          |1 = Receive FIFO buffer is full.
     * |[10]    |RXTHIF    |Receive FIFO Threshold Interrupt Flag (Read Only)
     * |        |          |0 = The valid data count within the Rxreceive FIFO buffer is smaller than or equal to the setting value of RXTH.
     * |        |          |1 = The valid data count within the receive FIFO buffer is larger than the setting value of RXTH.
     * |        |          |Note: If RXTHIEN = 1 and RXTHIF = 1, the SPI/I2S controller will generate a SPI interrupt request.
     * |[11]    |RXOVIF    |Receive FIFO Overrun Interrupt Flag
     * |        |          |When the receive FIFO buffer is full, the follow-up data will be dropped and this bit will be set to 1.
     * |        |          |Note: This bit will be cleared by writing 1 to it.
     * |[12]    |RXTOIF    |Receive Time-out Interrupt Flag
     * |        |          |0 = No receive FIFO time-out event.
     * |        |          |1 = Receive FIFO buffer is not empty and no read operation on receive FIFO buffer over 64 SPI peripheral clock period in Master mode or over 576 SPI peripheral clock period in Slave mode
     * |        |          |When the received FIFO buffer is read by software, the time-out status will be cleared automatically.
     * |        |          |Note: This bit will be cleared by writing 1 to it.
     * |[15]    |I2SENSTS  |I2S Enable Status (Read Only)
     * |        |          |0 = The SPI/I2S control logic is disabled.
     * |        |          |1 = The SPI/I2S control logic is enabled.
     * |        |          |Note: The SPI peripheral clock is asynchronous with the system clock
     * |        |          |In order to make sure the SPI/I2S controller logic is disabled, this bit indicates the real status of SPI/I2S controller logic for user.
     * |[16]    |TXEMPTY   |Transmit FIFO Buffer Empty Indicator (Read Only)
     * |        |          |0 = Transmit FIFO buffer is not empty.
     * |        |          |1 = Transmit FIFO buffer is empty.
     * |[17]    |TXFULL    |Transmit FIFO Buffer Full Indicator (Read Only)
     * |        |          |0 = Transmit FIFO buffer is not full.
     * |        |          |1 = Transmit FIFO buffer is full.
     * |[18]    |TXTHIF    |Transmit FIFO Threshold Interrupt Flag (Read Only)
     * |        |          |0 = The valid data count within the transmit FIFO buffer is larger than the setting value of TXTH.
     * |        |          |1 = The valid data count within the transmit FIFO buffer is less than or equal to the setting value of TXTH.
     * |        |          |Note: If TXTHIEN = 1 and TXTHIF = 1, the SPI/I2S controller will generate a SPI interrupt request.
     * |[19]    |TXUFIF    |Transmit FIFO Underflow Interrupt Flag
     * |        |          |When the transmit FIFO buffer is empty and there is no datum written into the FIFO buffer, if there is more bus clock input, this bit will be set to 1.
     * |        |          |Note: This bit will be cleared by writing 1 to it.
     * |[20]    |RZCIF     |Right Channel Zero Cross Interrupt Flag
     * |        |          |0 = No zero cross event occurred on right channel.
     * |        |          |1 = Zero cross event occurred on right channel.
     * |[21]    |LZCIF     |Left Channel Zero Cross Interrupt Flag
     * |        |          |0 = No zero cross event occurred on left channel.
     * |        |          |1 = Zero cross event occurred on left channel.
     * |[23]    |TXRXRST   |TX or RX Reset Status (Read Only)
     * |        |          |0 = The reset function of TXRST or RXRST is done.
     * |        |          |1 = Doing the reset function of TXRST or RXRST.
     * |        |          |Note: Both the reset operations of TXRST and RXRST need 3 system clock cycles + 2 peripheral clock cycles
     * |        |          |User can check the status of this bit to monitor the reset function is doing or done.
     * |[26:24] |RXCNT     |Receive FIFO Data Count (Read Only)
     * |        |          |This bit field indicates the valid data count of receive FIFO buffer.
     * |[30:28] |TXCNT     |Transmit FIFO Data Count (Read Only)
     * |        |          |This bit field indicates the valid data count of transmit FIFO buffer.
     */

    __IO uint32_t CTL;                   /*!< [0x0000] SPI Control Register                                             */
    __IO uint32_t CLKDIV;                /*!< [0x0004] SPI Clock Divider Register                                       */
    __IO uint32_t SSCTL;                 /*!< [0x0008] SPI Slave Select Control Register                                */
    __IO uint32_t PDMACTL;               /*!< [0x000c] SPI PDMA Control Register                                        */
    __IO uint32_t FIFOCTL;               /*!< [0x0010] SPI FIFO Control Register                                        */
    __IO uint32_t STATUS;                /*!< [0x0014] SPI Status Register                                              */
    __I  uint32_t RESERVE0[2];
    __O  uint32_t TX;                    /*!< [0x0020] SPI Data Transmit Register                                       */
    __I  uint32_t RESERVE1[3];
    __I  uint32_t RX;                    /*!< [0x0030] SPI Data Receive Register                                        */
    __I  uint32_t RESERVE2[11];
    __IO uint32_t I2SCTL;                /*!< [0x0060] I2S Control Register                                             */
    __IO uint32_t I2SCLK;                /*!< [0x0064] I2S Clock Divider Control Register                               */
    __IO uint32_t I2SSTS;                /*!< [0x0068] I2S Status Register                                              */

} SPI_T;

/**
    @addtogroup SPI_CONST SPI Bit Field Definition
    Constant Definitions for SPI Controller
    @{
*/

#define SPI_CTL_SPIEN_Pos                (0)                                               /*!< SPI_T::CTL: SPIEN Position             */
#define SPI_CTL_SPIEN_Msk                (0x1ul << SPI_CTL_SPIEN_Pos)                      /*!< SPI_T::CTL: SPIEN Mask                 */

#define SPI_CTL_RXNEG_Pos                (1)                                               /*!< SPI_T::CTL: RXNEG Position             */
#define SPI_CTL_RXNEG_Msk                (0x1ul << SPI_CTL_RXNEG_Pos)                      /*!< SPI_T::CTL: RXNEG Mask                 */

#define SPI_CTL_TXNEG_Pos                (2)                                               /*!< SPI_T::CTL: TXNEG Position             */
#define SPI_CTL_TXNEG_Msk                (0x1ul << SPI_CTL_TXNEG_Pos)                      /*!< SPI_T::CTL: TXNEG Mask                 */

#define SPI_CTL_CLKPOL_Pos               (3)                                               /*!< SPI_T::CTL: CLKPOL Position            */
#define SPI_CTL_CLKPOL_Msk               (0x1ul << SPI_CTL_CLKPOL_Pos)                     /*!< SPI_T::CTL: CLKPOL Mask                */

#define SPI_CTL_SUSPITV_Pos              (4)                                               /*!< SPI_T::CTL: SUSPITV Position           */
#define SPI_CTL_SUSPITV_Msk              (0xful << SPI_CTL_SUSPITV_Pos)                    /*!< SPI_T::CTL: SUSPITV Mask               */

#define SPI_CTL_DWIDTH_Pos               (8)                                               /*!< SPI_T::CTL: DWIDTH Position            */
#define SPI_CTL_DWIDTH_Msk               (0x1ful << SPI_CTL_DWIDTH_Pos)                    /*!< SPI_T::CTL: DWIDTH Mask                */

#define SPI_CTL_LSB_Pos                  (13)                                              /*!< SPI_T::CTL: LSB Position               */
#define SPI_CTL_LSB_Msk                  (0x1ul << SPI_CTL_LSB_Pos)                        /*!< SPI_T::CTL: LSB Mask                   */

#define SPI_CTL_HALFDPX_Pos              (14)                                              /*!< SPI_T::CTL: HALFDPX Position           */
#define SPI_CTL_HALFDPX_Msk              (0x1ul << SPI_CTL_HALFDPX_Pos)                    /*!< SPI_T::CTL: HALFDPX Mask               */

#define SPI_CTL_RXONLY_Pos               (15)                                              /*!< SPI_T::CTL: RXONLY Position            */
#define SPI_CTL_RXONLY_Msk               (0x1ul << SPI_CTL_RXONLY_Pos)                     /*!< SPI_T::CTL: RXONLY Mask                */

#define SPI_CTL_UNITIEN_Pos              (17)                                              /*!< SPI_T::CTL: UNITIEN Position           */
#define SPI_CTL_UNITIEN_Msk              (0x1ul << SPI_CTL_UNITIEN_Pos)                    /*!< SPI_T::CTL: UNITIEN Mask               */

#define SPI_CTL_SLAVE_Pos                (18)                                              /*!< SPI_T::CTL: SLAVE Position             */
#define SPI_CTL_SLAVE_Msk                (0x1ul << SPI_CTL_SLAVE_Pos)                      /*!< SPI_T::CTL: SLAVE Mask                 */

#define SPI_CTL_REORDER_Pos              (19)                                              /*!< SPI_T::CTL: REORDER Position           */
#define SPI_CTL_REORDER_Msk              (0x1ul << SPI_CTL_REORDER_Pos)                    /*!< SPI_T::CTL: REORDER Mask               */

#define SPI_CTL_DATDIR_Pos               (20)                                              /*!< SPI_T::CTL: DATDIR Position            */
#define SPI_CTL_DATDIR_Msk               (0x1ul << SPI_CTL_DATDIR_Pos)                     /*!< SPI_T::CTL: DATDIR Mask                */

#define SPI_CLKDIV_DIVIDER_Pos           (0)                                               /*!< SPI_T::CLKDIV: DIVIDER Position        */
#define SPI_CLKDIV_DIVIDER_Msk           (0xfful << SPI_CLKDIV_DIVIDER_Pos)                /*!< SPI_T::CLKDIV: DIVIDER Mask            */

#define SPI_SSCTL_SS_Pos                 (0)                                               /*!< SPI_T::SSCTL: SS Position              */
#define SPI_SSCTL_SS_Msk                 (0x1ul << SPI_SSCTL_SS_Pos)                       /*!< SPI_T::SSCTL: SS Mask                  */

#define SPI_SSCTL_SSACTPOL_Pos           (2)                                               /*!< SPI_T::SSCTL: SSACTPOL Position        */
#define SPI_SSCTL_SSACTPOL_Msk           (0x1ul << SPI_SSCTL_SSACTPOL_Pos)                 /*!< SPI_T::SSCTL: SSACTPOL Mask            */

#define SPI_SSCTL_AUTOSS_Pos             (3)                                               /*!< SPI_T::SSCTL: AUTOSS Position          */
#define SPI_SSCTL_AUTOSS_Msk             (0x1ul << SPI_SSCTL_AUTOSS_Pos)                   /*!< SPI_T::SSCTL: AUTOSS Mask              */

#define SPI_SSCTL_SLVBEIEN_Pos           (8)                                               /*!< SPI_T::SSCTL: SLVBEIEN Position        */
#define SPI_SSCTL_SLVBEIEN_Msk           (0x1ul << SPI_SSCTL_SLVBEIEN_Pos)                 /*!< SPI_T::SSCTL: SLVBEIEN Mask            */

#define SPI_SSCTL_SLVURIEN_Pos           (9)                                               /*!< SPI_T::SSCTL: SLVURIEN Position        */
#define SPI_SSCTL_SLVURIEN_Msk           (0x1ul << SPI_SSCTL_SLVURIEN_Pos)                 /*!< SPI_T::SSCTL: SLVURIEN Mask            */

#define SPI_SSCTL_SSACTIEN_Pos           (12)                                              /*!< SPI_T::SSCTL: SSACTIEN Position        */
#define SPI_SSCTL_SSACTIEN_Msk           (0x1ul << SPI_SSCTL_SSACTIEN_Pos)                 /*!< SPI_T::SSCTL: SSACTIEN Mask            */

#define SPI_SSCTL_SSINAIEN_Pos           (13)                                              /*!< SPI_T::SSCTL: SSINAIEN Position        */
#define SPI_SSCTL_SSINAIEN_Msk           (0x1ul << SPI_SSCTL_SSINAIEN_Pos)                 /*!< SPI_T::SSCTL: SSINAIEN Mask            */

#define SPI_PDMACTL_TXPDMAEN_Pos         (0)                                               /*!< SPI_T::PDMACTL: TXPDMAEN Position      */
#define SPI_PDMACTL_TXPDMAEN_Msk         (0x1ul << SPI_PDMACTL_TXPDMAEN_Pos)               /*!< SPI_T::PDMACTL: TXPDMAEN Mask          */

#define SPI_PDMACTL_RXPDMAEN_Pos         (1)                                               /*!< SPI_T::PDMACTL: RXPDMAEN Position      */
#define SPI_PDMACTL_RXPDMAEN_Msk         (0x1ul << SPI_PDMACTL_RXPDMAEN_Pos)               /*!< SPI_T::PDMACTL: RXPDMAEN Mask          */

#define SPI_PDMACTL_PDMARST_Pos          (2)                                               /*!< SPI_T::PDMACTL: PDMARST Position       */
#define SPI_PDMACTL_PDMARST_Msk          (0x1ul << SPI_PDMACTL_PDMARST_Pos)                /*!< SPI_T::PDMACTL: PDMARST Mask           */

#define SPI_FIFOCTL_RXRST_Pos            (0)                                               /*!< SPI_T::FIFOCTL: RXRST Position         */
#define SPI_FIFOCTL_RXRST_Msk            (0x1ul << SPI_FIFOCTL_RXRST_Pos)                  /*!< SPI_T::FIFOCTL: RXRST Mask             */

#define SPI_FIFOCTL_TXRST_Pos            (1)                                               /*!< SPI_T::FIFOCTL: TXRST Position         */
#define SPI_FIFOCTL_TXRST_Msk            (0x1ul << SPI_FIFOCTL_TXRST_Pos)                  /*!< SPI_T::FIFOCTL: TXRST Mask             */

#define SPI_FIFOCTL_RXTHIEN_Pos          (2)                                               /*!< SPI_T::FIFOCTL: RXTHIEN Position       */
#define SPI_FIFOCTL_RXTHIEN_Msk          (0x1ul << SPI_FIFOCTL_RXTHIEN_Pos)                /*!< SPI_T::FIFOCTL: RXTHIEN Mask           */

#define SPI_FIFOCTL_TXTHIEN_Pos          (3)                                               /*!< SPI_T::FIFOCTL: TXTHIEN Position       */
#define SPI_FIFOCTL_TXTHIEN_Msk          (0x1ul << SPI_FIFOCTL_TXTHIEN_Pos)                /*!< SPI_T::FIFOCTL: TXTHIEN Mask           */

#define SPI_FIFOCTL_RXTOIEN_Pos          (4)                                               /*!< SPI_T::FIFOCTL: RXTOIEN Position       */
#define SPI_FIFOCTL_RXTOIEN_Msk          (0x1ul << SPI_FIFOCTL_RXTOIEN_Pos)                /*!< SPI_T::FIFOCTL: RXTOIEN Mask           */

#define SPI_FIFOCTL_RXOVIEN_Pos          (5)                                               /*!< SPI_T::FIFOCTL: RXOVIEN Position       */
#define SPI_FIFOCTL_RXOVIEN_Msk          (0x1ul << SPI_FIFOCTL_RXOVIEN_Pos)                /*!< SPI_T::FIFOCTL: RXOVIEN Mask           */

#define SPI_FIFOCTL_TXUFPOL_Pos          (6)                                               /*!< SPI_T::FIFOCTL: TXUFPOL Position       */
#define SPI_FIFOCTL_TXUFPOL_Msk          (0x1ul << SPI_FIFOCTL_TXUFPOL_Pos)                /*!< SPI_T::FIFOCTL: TXUFPOL Mask           */

#define SPI_FIFOCTL_TXUFIEN_Pos          (7)                                               /*!< SPI_T::FIFOCTL: TXUFIEN Position       */
#define SPI_FIFOCTL_TXUFIEN_Msk          (0x1ul << SPI_FIFOCTL_TXUFIEN_Pos)                /*!< SPI_T::FIFOCTL: TXUFIEN Mask           */

#define SPI_FIFOCTL_RXFBCLR_Pos          (8)                                               /*!< SPI_T::FIFOCTL: RXFBCLR Position       */
#define SPI_FIFOCTL_RXFBCLR_Msk          (0x1ul << SPI_FIFOCTL_RXFBCLR_Pos)                /*!< SPI_T::FIFOCTL: RXFBCLR Mask           */

#define SPI_FIFOCTL_TXFBCLR_Pos          (9)                                               /*!< SPI_T::FIFOCTL: TXFBCLR Position       */
#define SPI_FIFOCTL_TXFBCLR_Msk          (0x1ul << SPI_FIFOCTL_TXFBCLR_Pos)                /*!< SPI_T::FIFOCTL: TXFBCLR Mask           */

#define SPI_FIFOCTL_RXTH_Pos             (24)                                              /*!< SPI_T::FIFOCTL: RXTH Position          */
#define SPI_FIFOCTL_RXTH_Msk             (0x3ul << SPI_FIFOCTL_RXTH_Pos)                   /*!< SPI_T::FIFOCTL: RXTH Mask              */

#define SPI_FIFOCTL_TXTH_Pos             (28)                                              /*!< SPI_T::FIFOCTL: TXTH Position          */
#define SPI_FIFOCTL_TXTH_Msk             (0x3ul << SPI_FIFOCTL_TXTH_Pos)                   /*!< SPI_T::FIFOCTL: TXTH Mask              */

#define SPI_STATUS_BUSY_Pos              (0)                                               /*!< SPI_T::STATUS: BUSY Position           */
#define SPI_STATUS_BUSY_Msk              (0x1ul << SPI_STATUS_BUSY_Pos)                    /*!< SPI_T::STATUS: BUSY Mask               */

#define SPI_STATUS_UNITIF_Pos            (1)                                               /*!< SPI_T::STATUS: UNITIF Position         */
#define SPI_STATUS_UNITIF_Msk            (0x1ul << SPI_STATUS_UNITIF_Pos)                  /*!< SPI_T::STATUS: UNITIF Mask             */

#define SPI_STATUS_SSACTIF_Pos           (2)                                               /*!< SPI_T::STATUS: SSACTIF Position        */
#define SPI_STATUS_SSACTIF_Msk           (0x1ul << SPI_STATUS_SSACTIF_Pos)                 /*!< SPI_T::STATUS: SSACTIF Mask            */

#define SPI_STATUS_SSINAIF_Pos           (3)                                               /*!< SPI_T::STATUS: SSINAIF Position        */
#define SPI_STATUS_SSINAIF_Msk           (0x1ul << SPI_STATUS_SSINAIF_Pos)                 /*!< SPI_T::STATUS: SSINAIF Mask            */

#define SPI_STATUS_SSLINE_Pos            (4)                                               /*!< SPI_T::STATUS: SSLINE Position         */
#define SPI_STATUS_SSLINE_Msk            (0x1ul << SPI_STATUS_SSLINE_Pos)                  /*!< SPI_T::STATUS: SSLINE Mask             */

#define SPI_STATUS_SLVBEIF_Pos           (6)                                               /*!< SPI_T::STATUS: SLVBEIF Position        */
#define SPI_STATUS_SLVBEIF_Msk           (0x1ul << SPI_STATUS_SLVBEIF_Pos)                 /*!< SPI_T::STATUS: SLVBEIF Mask            */

#define SPI_STATUS_SLVURIF_Pos           (7)                                               /*!< SPI_T::STATUS: SLVURIF Position        */
#define SPI_STATUS_SLVURIF_Msk           (0x1ul << SPI_STATUS_SLVURIF_Pos)                 /*!< SPI_T::STATUS: SLVURIF Mask            */

#define SPI_STATUS_RXEMPTY_Pos           (8)                                               /*!< SPI_T::STATUS: RXEMPTY Position        */
#define SPI_STATUS_RXEMPTY_Msk           (0x1ul << SPI_STATUS_RXEMPTY_Pos)                 /*!< SPI_T::STATUS: RXEMPTY Mask            */

#define SPI_STATUS_RXFULL_Pos            (9)                                               /*!< SPI_T::STATUS: RXFULL Position         */
#define SPI_STATUS_RXFULL_Msk            (0x1ul << SPI_STATUS_RXFULL_Pos)                  /*!< SPI_T::STATUS: RXFULL Mask             */

#define SPI_STATUS_RXTHIF_Pos            (10)                                              /*!< SPI_T::STATUS: RXTHIF Position         */
#define SPI_STATUS_RXTHIF_Msk            (0x1ul << SPI_STATUS_RXTHIF_Pos)                  /*!< SPI_T::STATUS: RXTHIF Mask             */

#define SPI_STATUS_RXOVIF_Pos            (11)                                              /*!< SPI_T::STATUS: RXOVIF Position         */
#define SPI_STATUS_RXOVIF_Msk            (0x1ul << SPI_STATUS_RXOVIF_Pos)                  /*!< SPI_T::STATUS: RXOVIF Mask             */

#define SPI_STATUS_RXTOIF_Pos            (12)                                              /*!< SPI_T::STATUS: RXTOIF Position         */
#define SPI_STATUS_RXTOIF_Msk            (0x1ul << SPI_STATUS_RXTOIF_Pos)                  /*!< SPI_T::STATUS: RXTOIF Mask             */

#define SPI_STATUS_SPIENSTS_Pos          (15)                                              /*!< SPI_T::STATUS: SPIENSTS Position       */
#define SPI_STATUS_SPIENSTS_Msk          (0x1ul << SPI_STATUS_SPIENSTS_Pos)                /*!< SPI_T::STATUS: SPIENSTS Mask           */

#define SPI_STATUS_TXEMPTY_Pos           (16)                                              /*!< SPI_T::STATUS: TXEMPTY Position        */
#define SPI_STATUS_TXEMPTY_Msk           (0x1ul << SPI_STATUS_TXEMPTY_Pos)                 /*!< SPI_T::STATUS: TXEMPTY Mask            */

#define SPI_STATUS_TXFULL_Pos            (17)                                              /*!< SPI_T::STATUS: TXFULL Position         */
#define SPI_STATUS_TXFULL_Msk            (0x1ul << SPI_STATUS_TXFULL_Pos)                  /*!< SPI_T::STATUS: TXFULL Mask             */

#define SPI_STATUS_TXTHIF_Pos            (18)                                              /*!< SPI_T::STATUS: TXTHIF Position         */
#define SPI_STATUS_TXTHIF_Msk            (0x1ul << SPI_STATUS_TXTHIF_Pos)                  /*!< SPI_T::STATUS: TXTHIF Mask             */

#define SPI_STATUS_TXUFIF_Pos            (19)                                              /*!< SPI_T::STATUS: TXUFIF Position         */
#define SPI_STATUS_TXUFIF_Msk            (0x1ul << SPI_STATUS_TXUFIF_Pos)                  /*!< SPI_T::STATUS: TXUFIF Mask             */

#define SPI_STATUS_TXRXRST_Pos           (23)                                              /*!< SPI_T::STATUS: TXRXRST Position        */
#define SPI_STATUS_TXRXRST_Msk           (0x1ul << SPI_STATUS_TXRXRST_Pos)                 /*!< SPI_T::STATUS: TXRXRST Mask            */

#define SPI_STATUS_RXCNT_Pos             (24)                                              /*!< SPI_T::STATUS: RXCNT Position          */
#define SPI_STATUS_RXCNT_Msk             (0xful << SPI_STATUS_RXCNT_Pos)                   /*!< SPI_T::STATUS: RXCNT Mask              */

#define SPI_STATUS_TXCNT_Pos             (28)                                              /*!< SPI_T::STATUS: TXCNT Position          */
#define SPI_STATUS_TXCNT_Msk             (0xful << SPI_STATUS_TXCNT_Pos)                   /*!< SPI_T::STATUS: TXCNT Mask              */

#define SPI_TX_TX_Pos                    (0)                                               /*!< SPI_T::TX: TX Position                 */
#define SPI_TX_TX_Msk                    (0xfffffffful << SPI_TX_TX_Pos)                   /*!< SPI_T::TX: TX Mask                     */

#define SPI_RX_RX_Pos                    (0)                                               /*!< SPI_T::RX: RX Position                 */
#define SPI_RX_RX_Msk                    (0xfffffffful << SPI_RX_RX_Pos)                   /*!< SPI_T::RX: RX Mask                     */

#define SPI_I2SCTL_I2SEN_Pos             (0)                                               /*!< SPI_T::I2SCTL: I2SEN Position          */
#define SPI_I2SCTL_I2SEN_Msk             (0x1ul << SPI_I2SCTL_I2SEN_Pos)                   /*!< SPI_T::I2SCTL: I2SEN Mask              */

#define SPI_I2SCTL_TXEN_Pos              (1)                                               /*!< SPI_T::I2SCTL: TXEN Position           */
#define SPI_I2SCTL_TXEN_Msk              (0x1ul << SPI_I2SCTL_TXEN_Pos)                    /*!< SPI_T::I2SCTL: TXEN Mask               */

#define SPI_I2SCTL_RXEN_Pos              (2)                                               /*!< SPI_T::I2SCTL: RXEN Position           */
#define SPI_I2SCTL_RXEN_Msk              (0x1ul << SPI_I2SCTL_RXEN_Pos)                    /*!< SPI_T::I2SCTL: RXEN Mask               */

#define SPI_I2SCTL_MUTE_Pos              (3)                                               /*!< SPI_T::I2SCTL: MUTE Position           */
#define SPI_I2SCTL_MUTE_Msk              (0x1ul << SPI_I2SCTL_MUTE_Pos)                    /*!< SPI_T::I2SCTL: MUTE Mask               */

#define SPI_I2SCTL_WDWIDTH_Pos           (4)                                               /*!< SPI_T::I2SCTL: WDWIDTH Position        */
#define SPI_I2SCTL_WDWIDTH_Msk           (0x3ul << SPI_I2SCTL_WDWIDTH_Pos)                 /*!< SPI_T::I2SCTL: WDWIDTH Mask            */

#define SPI_I2SCTL_MONO_Pos              (6)                                               /*!< SPI_T::I2SCTL: MONO Position           */
#define SPI_I2SCTL_MONO_Msk              (0x1ul << SPI_I2SCTL_MONO_Pos)                    /*!< SPI_T::I2SCTL: MONO Mask               */

#define SPI_I2SCTL_ORDER_Pos             (7)                                               /*!< SPI_T::I2SCTL: ORDER Position          */
#define SPI_I2SCTL_ORDER_Msk             (0x1ul << SPI_I2SCTL_ORDER_Pos)                   /*!< SPI_T::I2SCTL: ORDER Mask              */

#define SPI_I2SCTL_SLAVE_Pos             (8)                                               /*!< SPI_T::I2SCTL: SLAVE Position          */
#define SPI_I2SCTL_SLAVE_Msk             (0x1ul << SPI_I2SCTL_SLAVE_Pos)                   /*!< SPI_T::I2SCTL: SLAVE Mask              */

#define SPI_I2SCTL_MCLKEN_Pos            (15)                                              /*!< SPI_T::I2SCTL: MCLKEN Position         */
#define SPI_I2SCTL_MCLKEN_Msk            (0x1ul << SPI_I2SCTL_MCLKEN_Pos)                  /*!< SPI_T::I2SCTL: MCLKEN Mask             */

#define SPI_I2SCTL_RZCEN_Pos             (16)                                              /*!< SPI_T::I2SCTL: RZCEN Position          */
#define SPI_I2SCTL_RZCEN_Msk             (0x1ul << SPI_I2SCTL_RZCEN_Pos)                   /*!< SPI_T::I2SCTL: RZCEN Mask              */

#define SPI_I2SCTL_LZCEN_Pos             (17)                                              /*!< SPI_T::I2SCTL: LZCEN Position          */
#define SPI_I2SCTL_LZCEN_Msk             (0x1ul << SPI_I2SCTL_LZCEN_Pos)                   /*!< SPI_T::I2SCTL: LZCEN Mask              */

#define SPI_I2SCTL_RXLCH_Pos             (23)                                              /*!< SPI_T::I2SCTL: RXLCH Position          */
#define SPI_I2SCTL_RXLCH_Msk             (0x1ul << SPI_I2SCTL_RXLCH_Pos)                   /*!< SPI_T::I2SCTL: RXLCH Mask              */

#define SPI_I2SCTL_RZCIEN_Pos            (24)                                              /*!< SPI_T::I2SCTL: RZCIEN Position         */
#define SPI_I2SCTL_RZCIEN_Msk            (0x1ul << SPI_I2SCTL_RZCIEN_Pos)                  /*!< SPI_T::I2SCTL: RZCIEN Mask             */

#define SPI_I2SCTL_LZCIEN_Pos            (25)                                              /*!< SPI_T::I2SCTL: LZCIEN Position         */
#define SPI_I2SCTL_LZCIEN_Msk            (0x1ul << SPI_I2SCTL_LZCIEN_Pos)                  /*!< SPI_T::I2SCTL: LZCIEN Mask             */

#define SPI_I2SCTL_FORMAT_Pos            (28)                                              /*!< SPI_T::I2SCTL: FORMAT Position         */
#define SPI_I2SCTL_FORMAT_Msk            (0x3ul << SPI_I2SCTL_FORMAT_Pos)                  /*!< SPI_T::I2SCTL: FORMAT Mask             */

#define SPI_I2SCLK_MCLKDIV_Pos           (0)                                               /*!< SPI_T::I2SCLK: MCLKDIV Position        */
#define SPI_I2SCLK_MCLKDIV_Msk           (0x3ful << SPI_I2SCLK_MCLKDIV_Pos)                /*!< SPI_T::I2SCLK: MCLKDIV Mask            */

#define SPI_I2SCLK_BCLKDIV_Pos           (8)                                               /*!< SPI_T::I2SCLK: BCLKDIV Position        */
#define SPI_I2SCLK_BCLKDIV_Msk           (0x1fful << SPI_I2SCLK_BCLKDIV_Pos)               /*!< SPI_T::I2SCLK: BCLKDIV Mask            */

#define SPI_I2SSTS_RIGHT_Pos             (4)                                               /*!< SPI_T::I2SSTS: RIGHT Position          */
#define SPI_I2SSTS_RIGHT_Msk             (0x1ul << SPI_I2SSTS_RIGHT_Pos)                   /*!< SPI_T::I2SSTS: RIGHT Mask              */

#define SPI_I2SSTS_RXEMPTY_Pos           (8)                                               /*!< SPI_T::I2SSTS: RXEMPTY Position        */
#define SPI_I2SSTS_RXEMPTY_Msk           (0x1ul << SPI_I2SSTS_RXEMPTY_Pos)                 /*!< SPI_T::I2SSTS: RXEMPTY Mask            */

#define SPI_I2SSTS_RXFULL_Pos            (9)                                               /*!< SPI_T::I2SSTS: RXFULL Position         */
#define SPI_I2SSTS_RXFULL_Msk            (0x1ul << SPI_I2SSTS_RXFULL_Pos)                  /*!< SPI_T::I2SSTS: RXFULL Mask             */

#define SPI_I2SSTS_RXTHIF_Pos            (10)                                              /*!< SPI_T::I2SSTS: RXTHIF Position         */
#define SPI_I2SSTS_RXTHIF_Msk            (0x1ul << SPI_I2SSTS_RXTHIF_Pos)                  /*!< SPI_T::I2SSTS: RXTHIF Mask             */

#define SPI_I2SSTS_RXOVIF_Pos            (11)                                              /*!< SPI_T::I2SSTS: RXOVIF Position         */
#define SPI_I2SSTS_RXOVIF_Msk            (0x1ul << SPI_I2SSTS_RXOVIF_Pos)                  /*!< SPI_T::I2SSTS: RXOVIF Mask             */

#define SPI_I2SSTS_RXTOIF_Pos            (12)                                              /*!< SPI_T::I2SSTS: RXTOIF Position         */
#define SPI_I2SSTS_RXTOIF_Msk            (0x1ul << SPI_I2SSTS_RXTOIF_Pos)                  /*!< SPI_T::I2SSTS: RXTOIF Mask             */

#define SPI_I2SSTS_I2SENSTS_Pos          (15)                                              /*!< SPI_T::I2SSTS: I2SENSTS Position       */
#define SPI_I2SSTS_I2SENSTS_Msk          (0x1ul << SPI_I2SSTS_I2SENSTS_Pos)                /*!< SPI_T::I2SSTS: I2SENSTS Mask           */

#define SPI_I2SSTS_TXEMPTY_Pos           (16)                                              /*!< SPI_T::I2SSTS: TXEMPTY Position        */
#define SPI_I2SSTS_TXEMPTY_Msk           (0x1ul << SPI_I2SSTS_TXEMPTY_Pos)                 /*!< SPI_T::I2SSTS: TXEMPTY Mask            */

#define SPI_I2SSTS_TXFULL_Pos            (17)                                              /*!< SPI_T::I2SSTS: TXFULL Position         */
#define SPI_I2SSTS_TXFULL_Msk            (0x1ul << SPI_I2SSTS_TXFULL_Pos)                  /*!< SPI_T::I2SSTS: TXFULL Mask             */

#define SPI_I2SSTS_TXTHIF_Pos            (18)                                              /*!< SPI_T::I2SSTS: TXTHIF Position         */
#define SPI_I2SSTS_TXTHIF_Msk            (0x1ul << SPI_I2SSTS_TXTHIF_Pos)                  /*!< SPI_T::I2SSTS: TXTHIF Mask             */

#define SPI_I2SSTS_TXUFIF_Pos            (19)                                              /*!< SPI_T::I2SSTS: TXUFIF Position         */
#define SPI_I2SSTS_TXUFIF_Msk            (0x1ul << SPI_I2SSTS_TXUFIF_Pos)                  /*!< SPI_T::I2SSTS: TXUFIF Mask             */

#define SPI_I2SSTS_RZCIF_Pos             (20)                                              /*!< SPI_T::I2SSTS: RZCIF Position          */
#define SPI_I2SSTS_RZCIF_Msk             (0x1ul << SPI_I2SSTS_RZCIF_Pos)                   /*!< SPI_T::I2SSTS: RZCIF Mask              */

#define SPI_I2SSTS_LZCIF_Pos             (21)                                              /*!< SPI_T::I2SSTS: LZCIF Position          */
#define SPI_I2SSTS_LZCIF_Msk             (0x1ul << SPI_I2SSTS_LZCIF_Pos)                   /*!< SPI_T::I2SSTS: LZCIF Mask              */

#define SPI_I2SSTS_TXRXRST_Pos           (23)                                              /*!< SPI_T::I2SSTS: TXRXRST Position        */
#define SPI_I2SSTS_TXRXRST_Msk           (0x1ul << SPI_I2SSTS_TXRXRST_Pos)                 /*!< SPI_T::I2SSTS: TXRXRST Mask            */

#define SPI_I2SSTS_RXCNT_Pos             (24)                                              /*!< SPI_T::I2SSTS: RXCNT Position          */
#define SPI_I2SSTS_RXCNT_Msk             (0x7ul << SPI_I2SSTS_RXCNT_Pos)                   /*!< SPI_T::I2SSTS: RXCNT Mask              */

#define SPI_I2SSTS_TXCNT_Pos             (28)                                              /*!< SPI_T::I2SSTS: TXCNT Position          */
#define SPI_I2SSTS_TXCNT_Msk             (0x7ul << SPI_I2SSTS_TXCNT_Pos)                   /*!< SPI_T::I2SSTS: TXCNT Mask              */

/**@}*/ /* SPI_CONST */
/**@}*/ /* end of SPI register group */


/*---------------------- System Manger Controller -------------------------*/
/**
    @addtogroup SYS System Manger Controller(SYS)
    Memory Mapped Structure for SYS Controller
    @{
*/

typedef struct
{


    /**
     * @var SYS_T::PDID
     * Offset: 0x00  Part Device Identification Number Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |PDID      |Part Device Identification Number (Read Only)
     * |        |          |This register reflects device part number code.
     * |        |          |Software can read this register to identify which device is used.
     * @var SYS_T::RSTSTS
     * Offset: 0x04  System Reset Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |PORF      |POR Reset Flag
     * |        |          |The POR reset flag is set by the Reset Signal from the Power-on Reset (POR) Controller or bit CHIPRST (SYS_IPRST0[0]) to indicate the previous reset source.
     * |        |          |0 = No reset from POR or CHIPRST.
     * |        |          |1 = Power-on Reset (POR) or CHIPRST had issued the reset signal to reset the system.
     * |        |          |Note: This bit can be cleared by software writing 1.
     * |[1]     |PINRF     |nRESET Pin Reset Flag
     * |        |          |The nRESET pin reset flag is set by the Reset Signal from the nRESET Pin to indicate the previous reset source.
     * |        |          |0 = No reset from nRESET pin.
     * |        |          |1 = Pin nRESET had issued the reset signal to reset the system.
     * |        |          |Note: This bit can be cleared by software writing 1.
     * |[2]     |WDTRF     |WDT Reset Flag
     * |        |          |The WDT reset flag is set by the Reset Signal from the Watchdog Timer or Window Watchdog Timer to indicate the previous reset source.
     * |        |          |0 = No reset from watchdog timer or window watchdog timer.
     * |        |          |1 = The watchdog timer or window watchdog timer had issued the reset signal to reset the system.
     * |        |          |Note1: This bit can be cleared by software writing 1.
     * |        |          |Note2: Watchdog Timer register RSTF(WDT_CTL[2]) bit is set if the system has been reset by WDT time-out reset.
     * |        |          |Window Watchdog Timer register WWDTRF(WWDT_STATUS[1]) bit is set if the system has been reset by WWDT time-out reset.
     * |[3]     |LVRF      |LVR Reset Flag
     * |        |          |The LVR reset flag is set by the Reset Signal from the Low Voltage Reset Controller to indicate the previous reset source.
     * |        |          |0 = No reset from LVR.
     * |        |          |1 = LVR controller had issued the reset signal to reset the system.
     * |        |          |Note: This bit can be cleared by software writing 1.
     * |[4]     |BODRF     |BOD Reset Flag
     * |        |          |The BOD reset flag is set by the Reset Signal from the Brown-out Detector to indicate the previous reset source.
     * |        |          |0 = No reset from BOD.
     * |        |          |1 = The BOD had issued the reset signal to reset the system.
     * |        |          |Note: This bit can be cleared by software writing 1.
     * |[5]     |MCURF     |MCU Reset Flag
     * |        |          |The MCU reset flag is set by the Reset Signal from the Cortex-M0 Core to indicate the previous reset source.
     * |        |          |0 = No reset from Cortex-M23.
     * |        |          |1 = The Cortex-M23 had issued the reset signal to reset the system by writing 1 to the bit SYSRESETREQ(AIRCR[2], Application Interrupt and Reset Control Register, address = 0xE000ED0C) in system control registers of Cortex-M23 core.
     * |        |          |Note: This bit can be cleared by software writing 1.
     * |[7]     |CPURF     |CPU Reset Flag
     * |        |          |The CPU reset flag is set by hardware if software writes CPURST (SYS_IPRST0[1]) 1 to reset Cortex-M0 Core and Flash Memory Controller (FMC).
     * |        |          |0 = No reset from CPU.
     * |        |          |1 = The Cortex-M23 Core and FMC are reset by software setting CPURST to 1.
     * |        |          |Note: This bit can be cleared by software writing 1.
     * |[8]     |CPULKRF   |CPU Lockup Reset Flag
     * |        |          |The CPU lockup reset flag is set by hardware if Cortex-M23 lockup happened.
     * |        |          |0 = No reset from CPU lockup happened.
     * |        |          |1 = The Cortex-M23 lockup happened and chip is reset.
     * |        |          |Note: This bit can be cleared by software writing 1.
     * @var SYS_T::IPRST0
     * Offset: 0x08  Peripheral  Reset Control Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CHIPRST   |Chip One-shot Reset (Write Protect)
     * |        |          |Setting this bit will reset the whole chip, including Processor core and all peripherals, and this bit will automatically return to 0 after the 2 clock cycles.
     * |        |          |The CHIPRST is same as the POR reset, all the chip controllers is reset and the chip setting from flash are also reload.
     * |        |          |0 = Chip normal operation.
     * |        |          |1 = Chip one-shot reset.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[1]     |CPURST    |Processor Core One-shot Reset (Write Protect)
     * |        |          |Setting this bit will only reset the processor core and Flash Memory Controller(FMC), and this bit will automatically return to 0 after the 2 clock cycles.
     * |        |          |0 = Processor core normal operation.
     * |        |          |1 = Processor core one-shot reset.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[2]     |PDMARST   |PDMA Controller Reset (Write Protect)
     * |        |          |Setting this bit to 1 will generate a reset signal to the PDMA.
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = PDMA controller normal operation.
     * |        |          |1 = PDMA controller reset.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[7]     |CRCRST    |CRC Calculation Controller Reset (Write Protect)
     * |        |          |Set this bit to 1 will generate a reset signal to the CRC calculation controller.
     * |        |          |User needs to set this bit to 0 to release from the reset state.
     * |        |          |0 = CRC calculation controller normal operation.
     * |        |          |1 = CRC calculation controller reset.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var SYS_T::IPRST1
     * Offset: 0x0C  Peripheral Reset Control Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1]     |GPIORST   |GPIO Controller Reset
     * |        |          |0 = GPIO controller normal operation.
     * |        |          |1 = GPIO controller reset.
     * |[2]     |TMR0RST   |Timer0 Controller Reset
     * |        |          |0 = Timer0 controller normal operation.
     * |        |          |1 = Timer0 controller reset.
     * |[3]     |TMR1RST   |Timer1 Controller Reset
     * |        |          |0 = Timer1 controller normal operation.
     * |        |          |1 = Timer1 controller reset.
     * |[4]     |TMR2RST   |Timer2 Controller Reset
     * |        |          |0 = Timer2 controller normal operation.
     * |        |          |1 = Timer2 controller reset.
     * |[5]     |TMR3RST   |Timer3 Controller Reset
     * |        |          |0 = Timer3 controller normal operation.
     * |        |          |1 = Timer3 controller reset.
     * |[8]     |I2C0RST   |I2C0 Controller Reset
     * |        |          |0 = I2C0 controller normal operation.
     * |        |          |1 = I2C0 controller reset.
     * |[9]     |I2C1RST   |I2C1 Controller Reset
     * |        |          |0 = I2C1 controller normal operation.
     * |        |          |1 = I2C1 controller reset.
     * |[12]    |SPI0RST   |SPI0 Controller Reset
     * |        |          |0 = SPI0 controller normal operation.
     * |        |          |1 = SPI0 controller reset.
     * |[13]    |SPI1RST   |SPI1 Controller Reset
     * |        |          |0 = SPI1 controller normal operation.
     * |        |          |1 = SPI1 controller reset.
     * |[16]    |UART0RST  |UART0 Controller Reset
     * |        |          |0 = UART0 controller normal operation.
     * |        |          |1 = UART0 controller reset.
     * |[17]    |UART1RST  |UART1 Controller Reset
     * |        |          |0 = UART1 controller normal operation.
     * |        |          |1 = UART1 controller reset.
     * |[20]    |BPWM0RST  |BPWM0 Controller Reset
     * |        |          |0 = BPWM0 controller normal operation.
     * |        |          |1 = BPWM0 controller reset.
     * |[21]    |BPWM1RST  |BPWM1 Controller Reset
     * |        |          |0 = BPWM1 controller normal operation.
     * |        |          |1 = BPWM1 controller reset.
     * |[22]    |BPWM2RST  |BPWM2 Controller Reset
     * |        |          |0 = BPWM2 controller normal operation.
     * |        |          |1 = BPWM2 controller reset.
     * |[23]    |BPWM3RST  |BPWM3 Controller Reset
     * |        |          |0 = BPWM3 controller normal operation.
     * |        |          |1 = BPWM3 controller reset.
     * |[27]    |USBDRST   |USB Device Controller Reset
     * |        |          |0 = USB device controller normal operation.
     * |        |          |1 = USB device controller reset.
     * |[28]    |ADCRST    |ADC Controller Reset
     * |        |          |0 = ADC controller normal operation.
     * |        |          |1 = ADC controller reset.
     * @var SYS_T::IPRST2
     * Offset: 0x10  Peripheral Reset Control Register 2
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[16]    |LLSI0RST  |LLSI0 Controller Reset
     * |        |          |0 = LED Lighting Strip Interface 0 controller normal operation.
     * |        |          |1 = LED Lighting Strip Interface 0 controller reset.
     * |[17]    |LLSI1RST  |LLSI1 Controller Reset
     * |        |          |0 = LED Lighting Strip Interface 1 controller normal operation.
     * |        |          |1 = LED Lighting Strip Interface 1 controller reset.
     * |[18]    |LLSI2RST  |LLSI2 Controller Reset
     * |        |          |0 = LED Lighting Strip Interface 2 controller normal operation.
     * |        |          |1 = LED Lighting Strip Interface 2 controller reset.
     * |[19]    |LLSI3RST  |LLSI3 Controller Reset
     * |        |          |0 = LED Lighting Strip Interface 3 controller normal operation.
     * |        |          |1 = LED Lighting Strip Interface 3 controller reset.
     * |[20]    |LLSI4RST  |LLSI4 Controller Reset
     * |        |          |0 = LED Lighting Strip Interface 4 controller normal operation.
     * |        |          |1 = LED Lighting Strip Interface 4 controller reset.
     * |[21]    |LLSI5RST  |LLSI5 Controller Reset
     * |        |          |0 = LED Lighting Strip Interface 5 controller normal operation.
     * |        |          |1 = LED Lighting Strip Interface 5 controller reset.
     * |[22]    |LLSI6RST  |LLSI6 Controller Reset
     * |        |          |0 = LED Lighting Strip Interface 6 controller normal operation.
     * |        |          |1 = LED Lighting Strip Interface 6 controller reset.
     * |[23]    |LLSI7RST  |LLSI7 Controller Reset
     * |        |          |0 = LED Lighting Strip Interface 7 controller normal operation.
     * |        |          |1 = LED Lighting Strip Interface 7 controller reset.
     * |[24]    |LLSI8RST  |LLSI8 Controller Reset
     * |        |          |0 = LED Lighting Strip Interface 8 controller normal operation.
     * |        |          |1 = LED Lighting Strip Interface 8 controller reset.
     * |[25]    |LLSI9RST  |LLSI9 Controller Reset
     * |        |          |0 = LED Lighting Strip Interface 9 controller normal operation.
     * |        |          |1 = LED Lighting Strip Interface 9 controller reset.
     * @var SYS_T::BODCTL
     * Offset: 0x18  Brown-out Detector Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |BODEN     |Brown-out Detector Enable Bit (Write Protect)
     * |        |          |The default value is set by flash controller user configuration register CBODEN (CONFIG0 [23]).
     * |        |          |0 = Brown-out Detector function Disabled.
     * |        |          |1 = Brown-out Detector function Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[2:1]   |BODVL     |Brown-out Detector Threshold Voltage Selection (Write Protect)
     * |        |          |The default value is set by flash controller user configuration register CBOV (CONFIG0 [22:21]).
     * |        |          |00 = Brown-Out Detector threshold voltage is 2.2V.
     * |        |          |01 = Brown-Out Detector threshold voltage is 2.7V.
     * |        |          |10 = Brown-Out Detector threshold voltage is 3.7V.
     * |        |          |11 = Brown-Out Detector threshold voltage is 4.5V.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[3]     |BODRSTEN  |Brown-out Reset Enable Bit (Write Protect)
     * |        |          |The default value is set by flash controller user configuration register CBORST(CONFIG0[20]) bit.
     * |        |          |0 = Brown-out interrupt function Enabled.
     * |        |          |1 = Brown-out reset function Enabled.
     * |        |          |Note1:
     * |        |          |While the Brown-out Detector function is enabled (BODEN high) and BOD reset function is enabled (BODRSTEN high), BOD will assert a signal to reset chip when the detected voltage is lower than the threshold (BODOUT high).
     * |        |          |While the BOD function is enabled (BODEN high) and BOD interrupt function is enabled (BODRSTEN low), BOD will assert an interrupt if BODOUT is high
     * |        |          |BOD interrupt will keep till to the BODEN set to 0.
     * |        |          |BOD interrupt can be blocked by disabling the NVIC BOD interrupt or disabling BOD function (set BODEN low).
     * |        |          |Note2: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[4]     |BODIF     |Brown-out Detector Interrupt Flag
     * |        |          |0 = Brown-out Detector does not detect any voltage draft at VDD down through or up through the voltage of BODVL setting.
     * |        |          |1 = When Brown-out Detector detects the VDD is dropped down through the voltage of BODVL setting or the VDD is raised up through the voltage of BODVL setting, this bit is set to 1 and the brown-out interrupt is requested if brown-out interrupt is enabled.
     * |        |          |Note: This bit can be cleared by software writing 1.
     * |[5]     |BODLPM    |Brown-out Detector Low Power Mode (Write Protect)
     * |        |          |0 = BOD operate in normal mode (default).
     * |        |          |1 = BOD Low Power mode Enabled.
     * |        |          |Note1: The BOD consumes about 100uA in normal mode, the low power mode can reduce the current to about 1/10 but slow the BOD response.
     * |        |          |Note2: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[6]     |BODOUT    |Brown-out Detector Output Status
     * |        |          |0 = Brown-out Detector output status is 0.
     * |        |          |It means the detected voltage is higher than BODVL setting or BODEN is 0.
     * |        |          |1 = Brown-out Detector output status is 1.
     * |        |          |It means the detected voltage is lower than BODVL setting.
     * |        |          |If the BODEN is 0, BOD function disabled, this bit always responds 0.
     * |[7]     |LVREN     |Low Voltage Reset Enable Bit (Write Protect)
     * |        |          |The LVR function resets the chip when the input power voltage is lower than LVR circuit setting.
     * |        |          |LVR function is enabled by default.
     * |        |          |0 = Low Voltage Reset function Disabled.
     * |        |          |1 = Low Voltage Reset function Enabled.
     * |        |          |Note1: After enabling the bit, the LVR function will be active with 200us delay for LVR output stable (default).
     * |        |          |Note2: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[10:8]  |BODDGSEL  |Brown-out Detector Output De-glitch Time Select (Write Protect)
     * |        |          |000 = BOD output is sampled by RC10K clock.
     * |        |          |001 = 4 system clock (HCLK).
     * |        |          |010 = 8 system clock (HCLK).
     * |        |          |011 = 16 system clock (HCLK).
     * |        |          |100 = 32 system clock (HCLK).
     * |        |          |101 = 64 system clock (HCLK).
     * |        |          |110 = 128 system clock (HCLK).
     * |        |          |111 = 256 system clock (HCLK).
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[14:12] |LVRDGSEL  |LVR Output De-glitch Time Select (Write Protect)
     * |        |          |000 = Without de-glitch function.
     * |        |          |001 = 4 system clock (HCLK).
     * |        |          |010 = 8 system clock (HCLK).
     * |        |          |011 = 16 system clock (HCLK).
     * |        |          |100 = 32 system clock (HCLK).
     * |        |          |101 = 64 system clock (HCLK).
     * |        |          |110 = 128 system clock (HCLK).
     * |        |          |111 = 256 system clock (HCLK).
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[16]    |VDETEN    |Voltage Detector Enable Bit
     * |        |          |0 = VDET detect external input voltage function Disabled.
     * |        |          |1 = VDET detect external input voltage function Enabled.
     * |        |          |Note1: This function is still active in whole chip power-down mode.
     * |        |          |Note2: This function need use LIRC or LXT as VDET clock source, which is selected in VDETCKSEL (CLK_BODCLK[0]).
     * |        |          |Note3: The input pin for VDET detect voltage is selectabe by VDETPINSEL (SYS_BODCTL[17]).
     * |[17]    |VDETPINSEL|Voltage Detector External Input Voltage Pin Selection
     * |        |          |0 = The input voltage is from VDET_P0 (PB.0).
     * |        |          |1 = The input voltage is from VDET_P1 (PB.1).
     * |        |          |Note1: If VDET_P0 is selected, multi-function pin must be selected correctly in PB0MFP (SYS_GPB_MFPL[3:0]).
     * |        |          |Note2: If VDET_P1 is selected, multi-function pin must be selected correctly in PB1MFP (SYS_GPB_MFPL[7:4]).
     * |[18]    |VDETIEN   |Voltage Detector Interrupt Enable Bit
     * |        |          |0 = VDET interrupt Disabled.
     * |        |          |1 = VDET interrupt Enabled.
     * |[19]    |VDETIF    |Voltage Detector Interrupt Flag
     * |        |          |0 = VDET does not detect any voltage draft at external pin down through or up through the voltage of Bandgap.
     * |        |          |1 = When VDET detects the external pin is dropped down through the voltage of Bandgap or the external pin is raised up through the voltage of Bandgap, this bit is set to 1 and the brown-out interrupt is requested if brown-out interrupt is enabled.
     * |        |          |Note: This bit can be cleared by software writing 1.
     * |[24]    |VDETOUT   |Voltage Detector Output Status
     * |        |          |0 = VDET output status is 0.
     * |        |          |It means the detected voltage is higher than Bandgap or VDETEN is 0.
     * |        |          |1 = VDET output status is 1.
     * |        |          |It means the detected voltage is lower than Bandgap.
     * |        |          |If the VDETEN is 0, VDET function disabled, this bit always responds 0.
     * |[27:25] |VDETDGSEL |Voltage Detector Output De-glitch Time Select (Write Protect)
     * |        |          |000 = VDET output is sampled by VDET clock.
     * |        |          |001 = 16 system clock (HCLK).
     * |        |          |010 = 32 system clock (HCLK).
     * |        |          |011 = 64 system clock (HCLK).
     * |        |          |100 = 128 system clock (HCLK).
     * |        |          |101 = 256 system clock (HCLK).
     * |        |          |110 = 512 system clock (HCLK).
     * |        |          |111 = 1024 system clock (HCLK).
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * @var SYS_T::IVSCTL
     * Offset: 0x1C  Internal Voltage Source Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |VTEMPEN   |Temperature Sensor Enable Bit
     * |        |          |This bit is used to enable/disable temperature sensor function.
     * |        |          |0 = Temperature sensor function Disabled (default).
     * |        |          |1 = Temperature sensor function Enabled.
     * |        |          |Note: After this bit is set to 1, the value of temperature sensor output can be obtained from ADC conversion result.
     * |[1]     |VBGUGEN   |Band-gap VBG Unity Gain Buffer Enable Bit
     * |        |          |This bit is used to enable/disable Band-gap VBG unity gain buffer function.
     * |        |          |0 = VBG unity gain buffer function Disabled (default).
     * |        |          |1 = VBG unity gain buffer function Enabled.
     * |        |          |Note: After this bit is set to 1, the value of VBG unity gain buffer output voltage can be obtained from ADC conversion result. Please refer to ADC function chapter for details.
     * @var SYS_T::PORCTL
     * Offset: 0x24  Power-on Reset Controller Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |POROFF    |Power-on Reset Enable Bit (Write Protect)
     * |        |          |When powered on, the POR circuit generates a reset signal to reset the whole chip function, but noise on the power may cause the POR active again.
     * |        |          |User can disable internal POR circuit to avoid unpredictable noise to cause chip reset by writing 0x5AA5 to this field.
     * |        |          |The POR function will be active again when this field is set to another value or chip is reset by other reset source, including:
     * |        |          |nRESET, Watchdog, LVR reset, BOD reset, ICE reset command and the software-chip reset function.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var SYS_T::GPA_MFPL
     * Offset: 0x30  GPIOA Low Byte Multiple Function Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |PA0MFP    |PA.0 Multi-function Pin Selection
     * |[7:4]   |PA1MFP    |PA.1 Multi-function Pin Selection
     * |[11:8]  |PA2MFP    |PA.2 Multi-function Pin Selection
     * |[15:12] |PA3MFP    |PA.3 Multi-function Pin Selection
     * |[23:20] |PA5MFP    |PA.5 Multi-function Pin Selection
     * |[27:24] |PA6MFP    |PA.6 Multi-function Pin Selection
     * |[31:28] |PA7MFP    |PA.7 Multi-function Pin Selection
     * @var SYS_T::GPA_MFPH
     * Offset: 0x34  GPIOA High Byte Multiple Function Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |PA8MFP    |PA.8 Multi-function Pin Selection
     * |[7:4]   |PA9MFP    |PA.9 Multi-function Pin Selection
     * |[11:8]  |PA10MFP   |PA.10 Multi-function Pin Selection
     * |[15:12] |PA11MFP   |PA.11 Multi-function Pin Selection
     * @var SYS_T::GPB_MFPL
     * Offset: 0x38  GPIOB Low Byte Multiple Function Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |PB0MFP    |PB.0 Multi-function Pin Selection
     * |[7:4]   |PB1MFP    |PB.1 Multi-function Pin Selection
     * |[11:8]  |PB2MFP    |PB.2 Multi-function Pin Selection
     * |[15:12] |PB3MFP    |PB.3 Multi-function Pin Selection
     * |[19:16] |PB4MFP    |PB.4 Multi-function Pin Selection
     * |[23:20] |PB5MFP    |PB.5 Multi-function Pin Selection
     * |[27:24] |PB6MFP    |PB.6 Multi-function Pin Selection
     * |[31:28] |PB7MFP    |PB.7 Multi-function Pin Selection
     * @var SYS_T::GPB_MFPH
     * Offset: 0x3C  GPIOB High Byte Multiple Function Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |PB8MFP    |PB.8 Multi-function Pin Selection
     * |[7:4]   |PB9MFP    |PB.9 Multi-function Pin Selection
     * |[11:8]  |PB10MFP   |PB.10 Multi-function Pin Selection
     * |[15:12] |PB11MFP   |PB.11 Multi-function Pin Selection
     * |[19:16] |PB12MFP   |PB.12 Multi-function Pin Selection
     * |[23:20] |PB13MFP   |PB.13 Multi-function Pin Selection
     * |[27:24] |PB14MFP   |PB.14 Multi-function Pin Selection
     * |[31:28] |PB15MFP   |PB.15 Multi-function Pin Selection
     * @var SYS_T::GPC_MFPL
     * Offset: 0x40  GPIOC Low Byte Multiple Function Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |PC0MFP    |PC.0 Multi-function Pin Selection
     * |[7:4]   |PC1MFP    |PC.1 Multi-function Pin Selection
     * |[11:8]  |PC2MFP    |PC.2 Multi-function Pin Selection
     * |[15:12] |PC3MFP    |PC.3 Multi-function Pin Selection
     * |[19:16] |PC4MFP    |PC.4 Multi-function Pin Selection
     * |[23:20] |PC5MFP    |PC.5 Multi-function Pin Selection
     * |[27:24] |PC6MFP    |PC.6 Multi-function Pin Selection
     * |[31:28] |PC7MFP    |PC.7 Multi-function Pin Selection
     * @var SYS_T::GPC_MFPH
     * Offset: 0x44  GPIOC High Byte Multiple Function Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[27:24] |PC14MFP   |PC.14 Multi-function Pin Selection
     * @var SYS_T::GPD_MFPL
     * Offset: 0x48  GPIOD Low Byte Multiple Function Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |PD0MFP    |PD.0 Multi-function Pin Selection
     * |[7:4]   |PD1MFP    |PD.1 Multi-function Pin Selection
     * |[11:8]  |PD2MFP    |PD.2 Multi-function Pin Selection
     * |[15:12] |PD3MFP    |PD.3 Multi-function Pin Selection
     * @var SYS_T::GPD_MFPH
     * Offset: 0x4C  GPIOD High Byte Multiple Function Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:28] |PD15MFP   |PD.15 Multi-function Pin Selection
     * @var SYS_T::GPF_MFPL
     * Offset: 0x58  GPIOF Low Byte Multiple Function Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |PF0MFP    |PF.0 Multi-function Pin Selection
     * |[7:4]   |PF1MFP    |PF.1 Multi-function Pin Selection
     * |[11:8]  |PF2MFP    |PF.2 Multi-function Pin Selection
     * |[15:12] |PF3MFP    |PF.3 Multi-function Pin Selection
     * |[19:16] |PF4MFP    |PF.4 Multi-function Pin Selection
     * |[23:20] |PF5MFP    |PF.5 Multi-function Pin Selection
     * |[27:24] |PF6MFP    |PF.6 Multi-function Pin Selection
     * @var SYS_T::GPF_MFPH
     * Offset: 0x5C  GPIOF High Byte Multiple Function Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[27:24] |PF14MFP   |PF.14 Multi-function Pin Selection
     * |[31:28] |PF15MFP   |PF.15 Multi-function Pin Selection
     * @var SYS_T::IRCTCTL
     * Offset: 0x80  HIRC Trim Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1:0]   |FREQSEL   |Trim Frequency Selection
     * |        |          |This field indicates the target frequency of internal high speed RC oscillator (HIRC) auto trim.
     * |        |          |During auto trim operation, if clock error detected with CESTOPEN(SYS_IRCTCTL[8]) is set to 1 or trim retry limitation count reached, this field will be cleared to 00 automatically.
     * |        |          |00 = Disable HIRC auto trim function.
     * |        |          |01 = Enable HIRC auto trim function and trim HIRC to 48 MHz.
     * |        |          |10 = Reserved.
     * |        |          |11 = Reserved.
     * |[5:4]   |LOOPSEL   |Trim Calculation Loop Selection
     * |        |          |This field defines that trim value calculation is based on how many clocks of reference clock (32.768 kHz, LXT).
     * |        |          |00 = Trim value calculation is based on average difference in 4 clocks of reference clock.
     * |        |          |01 = Trim value calculation is based on average difference in 8 clocks of reference clock.
     * |        |          |10 = Trim value calculation is based on average difference in 16 clocks of reference clock.
     * |        |          |11 = Trim value calculation is based on average difference in 32 clocks of reference clock.
     * |        |          |Note: For example, if LOOPSEL is set as 00, auto trim circuit will calculate trim value based on the average frequency difference in 4 clocks of reference clock.
     * |[7:6]   |RETRYCNT  |Trim Value Up2025-07-16 Limitation Count
     * |        |          |This field defines that how many times the auto trim circuit will try to up2025-07-16 the HIRC trim value before the frequency of HIRC locked.
     * |        |          |Once the HIRC locked, the internal trim value up2025-07-16 counter will be reset.
     * |        |          |If the trim value up2025-07-16 counter reached this limitation value and frequency of HIRC still does not lock, the auto trim operation will be disabled and FREQSEL(SYS_IRCTCTL[1:0]) will be cleared to 00.
     * |        |          |00 = Trim retry count limitation is 64 loops.
     * |        |          |01 = Trim retry count limitation is 128 loops.
     * |        |          |10 = Trim retry count limitation is 256 loops.
     * |        |          |11 = Trim retry count limitation is 512 loops.
     * |[8]     |CESTOPEN  |Clock Error Stop Enable Bit
     * |        |          |0 = The trim operation is keep going if clock is inaccurate.
     * |        |          |1 = The trim operation is stopped if clock is inaccurate.
     * |[9]     |BOUNDEN   |Boundary Enable Bit
     * |        |          |0 = Boundary function Disabled.
     * |        |          |1 = Boundary function Enabled.
     * |[10]    |REFCKSEL  |Reference Clock Selection
     * |        |          |0 = HIRC trim reference clock is from LXT (32.768 kHz).
     * |        |          |1 = HIRC trim reference clock is from USB synchronous mode packet.
     * |[20:16] |BOUNDARY  |Boundary Selection
     * |        |          |Fill the boundary range from 0x1 to 0x1F, 0x0 is reserved.
     * |        |          |Note: This field is effective only when the BOUNDEN(SYS_IRCTCTL[9]) is enabled.
     * @var SYS_T::IRCTIEN
     * Offset: 0x84  HIRC Trim Interrupt Enable Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1]     |TFAILIEN  |HIRC Trim Failure Interrupt Enable Bit
     * |        |          |This bit controls if an interrupt will be triggered while HIRC trim value up2025-07-16 limitation count reached and HIRC frequency still not locked on target frequency set by FREQSEL(SYS_IRCTCTL[1:0]).
     * |        |          |If this bit is high and TFAILIF(SYS_IRCTSTS[1]) is set during auto trim operation, an interrupt will be triggered to notify that HIRC trim value up2025-07-16 limitation count reached.
     * |        |          |0 = Disable TFAILIF(SYS_IRCTSTS[1]) status to trigger an interrupt to CPU.
     * |        |          |1 = Enable TFAILIF(SYS_IRCTSTS[1]) status to trigger an interrupt to CPU.
     * |[2]     |CLKEIEN   |HIRC Clock Error Interrupt Enable Bit
     * |        |          |This bit controls if CPU would get an interrupt while HIRC clock is inaccurate during auto trim operation.
     * |        |          |If this bit is set to1, and CLKERRIF(SYS_IRCTSTS[2]) is set during auto trim operation, an interrupt will be triggered to notify the clock frequency is inaccurate.
     * |        |          |0 = Disable CLKERRIF(SYS_IRCTSTS[2]) status to trigger an interrupt to CPU.
     * |        |          |1 = Enable CLKERRIF(SYS_IRCTSTS[2]) status to trigger an interrupt to CPU.
     * @var SYS_T::IRCTISTS
     * Offset: 0x88  HIRC Trim Interrupt Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |FREQLOCK  |HIRC Frequency Lock Status
     * |        |          |This bit indicates the HIRC frequency is locked.
     * |        |          |This is a status bit and does not trigger any interrupt.
     * |        |          |0 = The internal high-speed RC oscillator frequency does not lock at 48 MHz yet.
     * |        |          |1 = The internal high-speed RC oscillator frequency locked at 48 MHz.
     * |[1]     |TFAILIF   |Trim Failure Interrupt Status
     * |        |          |This bit indicates that HIRC trim value up2025-07-16 limitation count reached and the HIRC clock frequency still does not be locked.
     * |        |          |Once this bit is set, the auto trim operation stopped and FREQSEL(SYS_IRCTCTL[1:0]) will be cleared to 00 by hardware automatically.
     * |        |          |If this bit is set and TFAILIEN(SYS_IRCTIEN[1]) is high, an interrupt will be triggered to notify that HIRC trim value up2025-07-16 limitation count reached.
     * |        |          |Write 1 to clear this to 0.
     * |        |          |0 = Trim value up2025-07-16 limitation count not reached.
     * |        |          |1 = Trim value up2025-07-16 limitation count reached and HIRC frequency still not locked.
     * |[2]     |CLKERRIF  |Clock Error Interrupt Status
     * |        |          |When the frequency of 32.768 kHz external low speed crystal oscillator (LXT) or 48 MHz internal high speed RC oscillator (HIRC) is shift larger to unreasonable value, this bit will be set and to be an indicate that clock frequency is inaccurate.
     * |        |          |Once this bit is set to 1, the auto trim operation stopped and FREQSEL(SYS_IRCTCL[1:0]) will be cleared to 00 by hardware automatically if CESTOPEN(SYS_IRCTCTL[8]) is set to 1.
     * |        |          |If this bit is set and CLKEIEN(SYS_IRCTIEN[2]) is high, an interrupt will be triggered to notify the clock frequency is inaccuracy.
     * |        |          |Write 1 to clear this to 0.
     * |        |          |0 = Clock frequency is accuracy.
     * |        |          |1 = Clock frequency is inaccuracy.
     * @var SYS_T::MODCTL
     * Offset: 0xC0  Modulation Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |MODEN     |Modulation Function Enable Bit
     * |        |          |This bit enables modulation funcion by modulating with BPWM channel output and UART1_TXD.
     * |        |          |0 = Modulation Function Disabled.
     * |        |          |1 = Modulation Function Enabled.
     * |[1]     |MODH      |Modulation at Data High
     * |        |          |Select modulation pulse(BPWM) at UART1_TXD high or low.
     * |        |          |0 = Modulation pulse at UART1_TXD low.
     * |        |          |1 = Modulation pulse at UART1_TXD high.
     * |[6:4]   |MODPWMSEL |PWM0 Channel Select for Modulation
     * |        |          |Select the PWM0 channel to modulate with the UART1_TXD.
     * |        |          |000 = BPWM0 channel 0 modulate with UART1_TXD.
     * |        |          |001 = BPWM0 channel 1 modulate with UART1_TXD.
     * |        |          |010 = BPWM0 channel 2 modulate with UART1_TXD.
     * |        |          |011 = BPWM0 channel 3 modulete with UART1_TXD.
     * |        |          |Others = Reserved.
     * |        |          |Note: This bis is valid while MODEN (SYS_MODCTL[0]) is set to 1.
     * @var SYS_T::REGLCTL
     * Offset: 0x100  Register Lock Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |REGLCTL   |Register Lock Control Code
     * |        |          |Write operation:
     * |        |          |Some registers have write-protection function.
     * |        |          |Writing these registers have to disable the protected function by writing the sequence value "59h", "16h", "88h" to this field.
     * |        |          |After this sequence is completed, the REGLCTL bit will be set to 1 and write-protection registers can be normal write.
     * |        |          |Read operation:
     * |        |          |0 = Write-protection Enabled for writing protected registers. Any write to the protected register is ignored.
     * |        |          |1 = Write-protection Disabled for writing protected registers.
     * @var SYS_T::TSOFFSET
     * Offset: 0x114  Temperature Sensor Offset Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[11:0]  |VTEMP     |Temperature Sensor Offset Value (Read Only)
     * |        |          |This field reflects temperature sensor output voltage offset at 25 Celsius degree from Flash.
     */

    __I  uint32_t PDID;                  /*!< [0x0000] Part Device Identification Number Register                       */
    __IO uint32_t RSTSTS;                /*!< [0x0004] System Reset Status Register                                     */
    __IO uint32_t IPRST0;                /*!< [0x0008] Peripheral  Reset Control Register 0                             */
    __IO uint32_t IPRST1;                /*!< [0x000c] Peripheral Reset Control Register 1                              */
    __IO uint32_t IPRST2;                /*!< [0x0010] Peripheral Reset Control Register 2                              */
    __I  uint32_t RESERVE0[1];
    __IO uint32_t BODCTL;                /*!< [0x0018] Brown-out Detector Control Register                              */
    __IO uint32_t IVSCTL;                /*!< [0x001c] Internal Voltage Source Control Register                         */
    __I  uint32_t RESERVE1[1];
    __IO uint32_t PORCTL;                /*!< [0x0024] Power-on Reset Controller Register                               */
    __I  uint32_t RESERVE2[2];
    __IO uint32_t GPA_MFPL;              /*!< [0x0030] GPIOA Low Byte Multiple Function Control Register                */
    __IO uint32_t GPA_MFPH;              /*!< [0x0034] GPIOA High Byte Multiple Function Control Register               */
    __IO uint32_t GPB_MFPL;              /*!< [0x0038] GPIOB Low Byte Multiple Function Control Register                */
    __IO uint32_t GPB_MFPH;              /*!< [0x003c] GPIOB High Byte Multiple Function Control Register               */
    __IO uint32_t GPC_MFPL;              /*!< [0x0040] GPIOC Low Byte Multiple Function Control Register                */
    __IO uint32_t GPC_MFPH;              /*!< [0x0044] GPIOC High Byte Multiple Function Control Register               */
    __IO uint32_t GPD_MFPL;              /*!< [0x0048] GPIOD Low Byte Multiple Function Control Register                */
    __IO uint32_t GPD_MFPH;              /*!< [0x004c] GPIOD High Byte Multiple Function Control Register               */
    __I  uint32_t RESERVE3[2];
    __IO uint32_t GPF_MFPL;              /*!< [0x0058] GPIOF Low Byte Multiple Function Control Register                */
    __IO uint32_t GPF_MFPH;              /*!< [0x005C] GPIOF High Byte Multiple Function Control Register               */
    __I  uint32_t RESERVE4[8];
    __IO uint32_t IRCTCTL;               /*!< [0x0080] HIRC Trim Control Register                                       */
    __IO uint32_t IRCTIEN;               /*!< [0x0084] HIRC Trim Interrupt Enable Register                              */
    __IO uint32_t IRCTISTS;              /*!< [0x0088] HIRC Trim Interrupt Status Register                              */
    __I  uint32_t RESERVE5[13];
    __IO uint32_t MODCTL;                /*!< [0x00c0] Modulation Control Register                                      */
    __I  uint32_t RESERVE6[15];
    __IO uint32_t REGLCTL;               /*!< [0x0100] Register Lock Control Register                                   */
    __I  uint32_t RESERVE7[4];
    __I  uint32_t TSOFFSET;              /*!< [0x0114] Temperature Sensor Offset Register                               */


} SYS_T;

/**
    @addtogroup SYS_CONST SYS Bit Field Definition
    Constant Definitions for SYS Controller
    @{
*/

#define SYS_PDID_PDID_Pos                (0)                                               /*!< SYS_T::PDID: PDID Position             */
#define SYS_PDID_PDID_Msk                (0xfffffffful << SYS_PDID_PDID_Pos)               /*!< SYS_T::PDID: PDID Mask                 */

#define SYS_RSTSTS_PORF_Pos              (0)                                               /*!< SYS_T::RSTSTS: PORF Position           */
#define SYS_RSTSTS_PORF_Msk              (0x1ul << SYS_RSTSTS_PORF_Pos)                    /*!< SYS_T::RSTSTS: PORF Mask               */

#define SYS_RSTSTS_PINRF_Pos             (1)                                               /*!< SYS_T::RSTSTS: PINRF Position          */
#define SYS_RSTSTS_PINRF_Msk             (0x1ul << SYS_RSTSTS_PINRF_Pos)                   /*!< SYS_T::RSTSTS: PINRF Mask              */

#define SYS_RSTSTS_WDTRF_Pos             (2)                                               /*!< SYS_T::RSTSTS: WDTRF Position          */
#define SYS_RSTSTS_WDTRF_Msk             (0x1ul << SYS_RSTSTS_WDTRF_Pos)                   /*!< SYS_T::RSTSTS: WDTRF Mask              */

#define SYS_RSTSTS_LVRF_Pos              (3)                                               /*!< SYS_T::RSTSTS: LVRF Position           */
#define SYS_RSTSTS_LVRF_Msk              (0x1ul << SYS_RSTSTS_LVRF_Pos)                    /*!< SYS_T::RSTSTS: LVRF Mask               */

#define SYS_RSTSTS_BODRF_Pos             (4)                                               /*!< SYS_T::RSTSTS: BODRF Position          */
#define SYS_RSTSTS_BODRF_Msk             (0x1ul << SYS_RSTSTS_BODRF_Pos)                   /*!< SYS_T::RSTSTS: BODRF Mask              */

#define SYS_RSTSTS_MCURF_Pos             (5)                                               /*!< SYS_T::RSTSTS: MCURF Position          */
#define SYS_RSTSTS_MCURF_Msk             (0x1ul << SYS_RSTSTS_MCURF_Pos)                   /*!< SYS_T::RSTSTS: MCURF Mask              */

#define SYS_RSTSTS_CPURF_Pos             (7)                                               /*!< SYS_T::RSTSTS: CPURF Position          */
#define SYS_RSTSTS_CPURF_Msk             (0x1ul << SYS_RSTSTS_CPURF_Pos)                   /*!< SYS_T::RSTSTS: CPURF Mask              */

#define SYS_RSTSTS_CPULKRF_Pos           (8)                                               /*!< SYS_T::RSTSTS: CPULKRF Position        */
#define SYS_RSTSTS_CPULKRF_Msk           (0x1ul << SYS_RSTSTS_CPULKRF_Pos)                 /*!< SYS_T::RSTSTS: CPULKRF Mask            */

#define SYS_IPRST0_CHIPRST_Pos           (0)                                               /*!< SYS_T::IPRST0: CHIPRST Position        */
#define SYS_IPRST0_CHIPRST_Msk           (0x1ul << SYS_IPRST0_CHIPRST_Pos)                 /*!< SYS_T::IPRST0: CHIPRST Mask            */

#define SYS_IPRST0_CPURST_Pos            (1)                                               /*!< SYS_T::IPRST0: CPURST Position         */
#define SYS_IPRST0_CPURST_Msk            (0x1ul << SYS_IPRST0_CPURST_Pos)                  /*!< SYS_T::IPRST0: CPURST Mask             */

#define SYS_IPRST0_PDMARST_Pos           (2)                                               /*!< SYS_T::IPRST0: PDMARST Position        */
#define SYS_IPRST0_PDMARST_Msk           (0x1ul << SYS_IPRST0_PDMARST_Pos)                 /*!< SYS_T::IPRST0: PDMARST Mask            */

#define SYS_IPRST0_CRCRST_Pos            (7)                                               /*!< SYS_T::IPRST0: CRCRST Position         */
#define SYS_IPRST0_CRCRST_Msk            (0x1ul << SYS_IPRST0_CRCRST_Pos)                  /*!< SYS_T::IPRST0: CRCRST Mask             */

#define SYS_IPRST1_GPIORST_Pos           (1)                                               /*!< SYS_T::IPRST1: GPIORST Position        */
#define SYS_IPRST1_GPIORST_Msk           (0x1ul << SYS_IPRST1_GPIORST_Pos)                 /*!< SYS_T::IPRST1: GPIORST Mask            */

#define SYS_IPRST1_TMR0RST_Pos           (2)                                               /*!< SYS_T::IPRST1: TMR0RST Position        */
#define SYS_IPRST1_TMR0RST_Msk           (0x1ul << SYS_IPRST1_TMR0RST_Pos)                 /*!< SYS_T::IPRST1: TMR0RST Mask            */

#define SYS_IPRST1_TMR1RST_Pos           (3)                                               /*!< SYS_T::IPRST1: TMR1RST Position        */
#define SYS_IPRST1_TMR1RST_Msk           (0x1ul << SYS_IPRST1_TMR1RST_Pos)                 /*!< SYS_T::IPRST1: TMR1RST Mask            */

#define SYS_IPRST1_TMR2RST_Pos           (4)                                               /*!< SYS_T::IPRST1: TMR2RST Position        */
#define SYS_IPRST1_TMR2RST_Msk           (0x1ul << SYS_IPRST1_TMR2RST_Pos)                 /*!< SYS_T::IPRST1: TMR2RST Mask            */

#define SYS_IPRST1_TMR3RST_Pos           (5)                                               /*!< SYS_T::IPRST1: TMR3RST Position        */
#define SYS_IPRST1_TMR3RST_Msk           (0x1ul << SYS_IPRST1_TMR3RST_Pos)                 /*!< SYS_T::IPRST1: TMR3RST Mask            */

#define SYS_IPRST1_I2C0RST_Pos           (8)                                               /*!< SYS_T::IPRST1: I2C0RST Position        */
#define SYS_IPRST1_I2C0RST_Msk           (0x1ul << SYS_IPRST1_I2C0RST_Pos)                 /*!< SYS_T::IPRST1: I2C0RST Mask            */

#define SYS_IPRST1_I2C1RST_Pos           (9)                                               /*!< SYS_T::IPRST1: I2C1RST Position        */
#define SYS_IPRST1_I2C1RST_Msk           (0x1ul << SYS_IPRST1_I2C1RST_Pos)                 /*!< SYS_T::IPRST1: I2C1RST Mask            */

#define SYS_IPRST1_SPI0RST_Pos           (12)                                              /*!< SYS_T::IPRST1: SPI0RST Position        */
#define SYS_IPRST1_SPI0RST_Msk           (0x1ul << SYS_IPRST1_SPI0RST_Pos)                 /*!< SYS_T::IPRST1: SPI0RST Mask            */

#define SYS_IPRST1_SPI1RST_Pos           (13)                                              /*!< SYS_T::IPRST1: SPI1RST Position        */
#define SYS_IPRST1_SPI1RST_Msk           (0x1ul << SYS_IPRST1_SPI1RST_Pos)                 /*!< SYS_T::IPRST1: SPI1RST Mask            */

#define SYS_IPRST1_UART0RST_Pos          (16)                                              /*!< SYS_T::IPRST1: UART0RST Position       */
#define SYS_IPRST1_UART0RST_Msk          (0x1ul << SYS_IPRST1_UART0RST_Pos)                /*!< SYS_T::IPRST1: UART0RST Mask           */

#define SYS_IPRST1_UART1RST_Pos          (17)                                              /*!< SYS_T::IPRST1: UART1RST Position       */
#define SYS_IPRST1_UART1RST_Msk          (0x1ul << SYS_IPRST1_UART1RST_Pos)                /*!< SYS_T::IPRST1: UART1RST Mask           */

#define SYS_IPRST1_BPWM0RST_Pos          (20)                                              /*!< SYS_T::IPRST1: BPWM0RST Position       */
#define SYS_IPRST1_BPWM0RST_Msk          (0x1ul << SYS_IPRST1_BPWM0RST_Pos)                /*!< SYS_T::IPRST1: BPWM0RST Mask           */

#define SYS_IPRST1_BPWM1RST_Pos          (21)                                              /*!< SYS_T::IPRST1: BPWM1RST Position       */
#define SYS_IPRST1_BPWM1RST_Msk          (0x1ul << SYS_IPRST1_BPWM1RST_Pos)                /*!< SYS_T::IPRST1: BPWM1RST Mask           */

#define SYS_IPRST1_BPWM2RST_Pos          (22)                                              /*!< SYS_T::IPRST1: BPWM2RST Position       */
#define SYS_IPRST1_BPWM2RST_Msk          (0x1ul << SYS_IPRST1_BPWM2RST_Pos)                /*!< SYS_T::IPRST1: BPWM2RST Mask           */

#define SYS_IPRST1_BPWM3RST_Pos          (23)                                              /*!< SYS_T::IPRST1: BPWM3RST Position       */
#define SYS_IPRST1_BPWM3RST_Msk          (0x1ul << SYS_IPRST1_BPWM3RST_Pos)                /*!< SYS_T::IPRST1: BPWM3RST Mask           */

#define SYS_IPRST1_USBDRST_Pos           (27)                                              /*!< SYS_T::IPRST1: USBDRST Position        */
#define SYS_IPRST1_USBDRST_Msk           (0x1ul << SYS_IPRST1_USBDRST_Pos)                 /*!< SYS_T::IPRST1: USBDRST Mask            */

#define SYS_IPRST1_ADCRST_Pos            (28)                                              /*!< SYS_T::IPRST1: ADCRST Position         */
#define SYS_IPRST1_ADCRST_Msk            (0x1ul << SYS_IPRST1_ADCRST_Pos)                  /*!< SYS_T::IPRST1: ADCRST Mask             */

#define SYS_IPRST2_LLSI0RST_Pos          (16)                                              /*!< SYS_T::IPRST2: LLSI0RST Position       */
#define SYS_IPRST2_LLSI0RST_Msk          (0x1ul << SYS_IPRST2_LLSI0RST_Pos)                /*!< SYS_T::IPRST2: LLSI0RST Mask           */

#define SYS_IPRST2_LLSI1RST_Pos          (17)                                              /*!< SYS_T::IPRST2: LLSI1RST Position       */
#define SYS_IPRST2_LLSI1RST_Msk          (0x1ul << SYS_IPRST2_LLSI1RST_Pos)                /*!< SYS_T::IPRST2: LLSI1RST Mask           */

#define SYS_IPRST2_LLSI2RST_Pos          (18)                                              /*!< SYS_T::IPRST2: LLSI2RST Position       */
#define SYS_IPRST2_LLSI2RST_Msk          (0x1ul << SYS_IPRST2_LLSI2RST_Pos)                /*!< SYS_T::IPRST2: LLSI2RST Mask           */

#define SYS_IPRST2_LLSI3RST_Pos          (19)                                              /*!< SYS_T::IPRST2: LLSI3RST Position       */
#define SYS_IPRST2_LLSI3RST_Msk          (0x1ul << SYS_IPRST2_LLSI3RST_Pos)                /*!< SYS_T::IPRST2: LLSI3RST Mask           */

#define SYS_IPRST2_LLSI4RST_Pos          (20)                                              /*!< SYS_T::IPRST2: LLSI4RST Position       */
#define SYS_IPRST2_LLSI4RST_Msk          (0x1ul << SYS_IPRST2_LLSI4RST_Pos)                /*!< SYS_T::IPRST2: LLSI4RST Mask           */

#define SYS_IPRST2_LLSI5RST_Pos          (21)                                              /*!< SYS_T::IPRST2: LLSI5RST Position       */
#define SYS_IPRST2_LLSI5RST_Msk          (0x1ul << SYS_IPRST2_LLSI5RST_Pos)                /*!< SYS_T::IPRST2: LLSI5RST Mask           */

#define SYS_IPRST2_LLSI6RST_Pos          (22)                                              /*!< SYS_T::IPRST2: LLSI6RST Position       */
#define SYS_IPRST2_LLSI6RST_Msk          (0x1ul << SYS_IPRST2_LLSI6RST_Pos)                /*!< SYS_T::IPRST2: LLSI6RST Mask           */

#define SYS_IPRST2_LLSI7RST_Pos          (23)                                              /*!< SYS_T::IPRST2: LLSI7RST Position       */
#define SYS_IPRST2_LLSI7RST_Msk          (0x1ul << SYS_IPRST2_LLSI7RST_Pos)                /*!< SYS_T::IPRST2: LLSI7RST Mask           */

#define SYS_IPRST2_LLSI8RST_Pos          (24)                                              /*!< SYS_T::IPRST2: LLSI8RST Position       */
#define SYS_IPRST2_LLSI8RST_Msk          (0x1ul << SYS_IPRST2_LLSI8RST_Pos)                /*!< SYS_T::IPRST2: LLSI8RST Mask           */

#define SYS_IPRST2_LLSI9RST_Pos          (25)                                              /*!< SYS_T::IPRST2: LLSI9RST Position       */
#define SYS_IPRST2_LLSI9RST_Msk          (0x1ul << SYS_IPRST2_LLSI9RST_Pos)                /*!< SYS_T::IPRST2: LLSI9RST Mask           */

#define SYS_BODCTL_BODEN_Pos             (0)                                               /*!< SYS_T::BODCTL: BODEN Position          */
#define SYS_BODCTL_BODEN_Msk             (0x1ul << SYS_BODCTL_BODEN_Pos)                   /*!< SYS_T::BODCTL: BODEN Mask              */

#define SYS_BODCTL_BODVL_Pos             (1)                                               /*!< SYS_T::BODCTL: BODVL Position          */
#define SYS_BODCTL_BODVL_Msk             (0x3ul << SYS_BODCTL_BODVL_Pos)                   /*!< SYS_T::BODCTL: BODVL Mask              */

#define SYS_BODCTL_BODRSTEN_Pos          (3)                                               /*!< SYS_T::BODCTL: BODRSTEN Position       */
#define SYS_BODCTL_BODRSTEN_Msk          (0x1ul << SYS_BODCTL_BODRSTEN_Pos)                /*!< SYS_T::BODCTL: BODRSTEN Mask           */

#define SYS_BODCTL_BODIF_Pos             (4)                                               /*!< SYS_T::BODCTL: BODIF Position          */
#define SYS_BODCTL_BODIF_Msk             (0x1ul << SYS_BODCTL_BODIF_Pos)                   /*!< SYS_T::BODCTL: BODIF Mask              */

#define SYS_BODCTL_BODLPM_Pos            (5)                                               /*!< SYS_T::BODCTL: BODLPM Position         */
#define SYS_BODCTL_BODLPM_Msk            (0x1ul << SYS_BODCTL_BODLPM_Pos)                  /*!< SYS_T::BODCTL: BODLPM Mask             */

#define SYS_BODCTL_BODOUT_Pos            (6)                                               /*!< SYS_T::BODCTL: BODOUT Position         */
#define SYS_BODCTL_BODOUT_Msk            (0x1ul << SYS_BODCTL_BODOUT_Pos)                  /*!< SYS_T::BODCTL: BODOUT Mask             */

#define SYS_BODCTL_LVREN_Pos             (7)                                               /*!< SYS_T::BODCTL: LVREN Position          */
#define SYS_BODCTL_LVREN_Msk             (0x1ul << SYS_BODCTL_LVREN_Pos)                   /*!< SYS_T::BODCTL: LVREN Mask              */

#define SYS_BODCTL_BODDGSEL_Pos          (8)                                               /*!< SYS_T::BODCTL: BODDGSEL Position       */
#define SYS_BODCTL_BODDGSEL_Msk          (0x7ul << SYS_BODCTL_BODDGSEL_Pos)                /*!< SYS_T::BODCTL: BODDGSEL Mask           */

#define SYS_BODCTL_LVRDGSEL_Pos          (12)                                              /*!< SYS_T::BODCTL: LVRDGSEL Position       */
#define SYS_BODCTL_LVRDGSEL_Msk          (0x7ul << SYS_BODCTL_LVRDGSEL_Pos)                /*!< SYS_T::BODCTL: LVRDGSEL Mask           */

#define SYS_BODCTL_VDETEN_Pos            (16)                                              /*!< SYS_T::BODCTL: VDETEN Position         */
#define SYS_BODCTL_VDETEN_Msk            (0x1ul << SYS_BODCTL_VDETEN_Pos)                  /*!< SYS_T::BODCTL: VDETEN Mask             */

#define SYS_BODCTL_VDETPINSEL_Pos        (17)                                              /*!< SYS_T::BODCTL: VDETPINSEL Position     */
#define SYS_BODCTL_VDETPINSEL_Msk        (0x1ul << SYS_BODCTL_VDETPINSEL_Pos)              /*!< SYS_T::BODCTL: VDETPINSEL Mask         */

#define SYS_BODCTL_VDETIEN_Pos           (18)                                              /*!< SYS_T::BODCTL: VDETIEN Position        */
#define SYS_BODCTL_VDETIEN_Msk           (0x1ul << SYS_BODCTL_VDETIEN_Pos)                 /*!< SYS_T::BODCTL: VDETIEN Mask            */

#define SYS_BODCTL_VDETIF_Pos            (19)                                              /*!< SYS_T::BODCTL: VDETIF Position         */
#define SYS_BODCTL_VDETIF_Msk            (0x1ul << SYS_BODCTL_VDETIF_Pos)                  /*!< SYS_T::BODCTL: VDETIF Mask             */

#define SYS_BODCTL_VDETOUT_Pos           (24)                                              /*!< SYS_T::BODCTL: VDETOUT Position        */
#define SYS_BODCTL_VDETOUT_Msk           (0x1ul << SYS_BODCTL_VDETOUT_Pos)                 /*!< SYS_T::BODCTL: VDETOUT Mask            */

#define SYS_BODCTL_VDETDGSEL_Pos         (25)                                              /*!< SYS_T::BODCTL: VDETDGSEL Position      */
#define SYS_BODCTL_VDETDGSEL_Msk         (0x7ul << SYS_BODCTL_VDETDGSEL_Pos)               /*!< SYS_T::BODCTL: VDETDGSEL Mask          */

#define SYS_IVSCTL_VTEMPEN_Pos           (0)                                               /*!< SYS_T::IVSCTL: VTEMPEN Position        */
#define SYS_IVSCTL_VTEMPEN_Msk           (0x1ul << SYS_IVSCTL_VTEMPEN_Pos)                 /*!< SYS_T::IVSCTL: VTEMPEN Mask            */

#define SYS_IVSCTL_VBGUGEN_Pos           (1)                                               /*!< SYS_T::IVSCTL: VBGUGEN Position        */
#define SYS_IVSCTL_VBGUGEN_Msk           (0x1ul << SYS_IVSCTL_VBGUGEN_Pos)                 /*!< SYS_T::IVSCTL: VBGUGEN Mask            */

#define SYS_PORCTL_POROFF_Pos            (0)                                               /*!< SYS_T::PORCTL: POROFF Position         */
#define SYS_PORCTL_POROFF_Msk            (0xfffful << SYS_PORCTL_POROFF_Pos)               /*!< SYS_T::PORCTL: POROFF Mask             */

#define SYS_GPA_MFPL_PA0MFP_Pos          (0)                                               /*!< SYS_T::GPA_MFPL: PA0MFP Position       */
#define SYS_GPA_MFPL_PA0MFP_Msk          (0xful << SYS_GPA_MFPL_PA0MFP_Pos)                /*!< SYS_T::GPA_MFPL: PA0MFP Mask           */

#define SYS_GPA_MFPL_PA1MFP_Pos          (4)                                               /*!< SYS_T::GPA_MFPL: PA1MFP Position       */
#define SYS_GPA_MFPL_PA1MFP_Msk          (0xful << SYS_GPA_MFPL_PA1MFP_Pos)                /*!< SYS_T::GPA_MFPL: PA1MFP Mask           */

#define SYS_GPA_MFPL_PA2MFP_Pos          (8)                                               /*!< SYS_T::GPA_MFPL: PA2MFP Position       */
#define SYS_GPA_MFPL_PA2MFP_Msk          (0xful << SYS_GPA_MFPL_PA2MFP_Pos)                /*!< SYS_T::GPA_MFPL: PA2MFP Mask           */

#define SYS_GPA_MFPL_PA3MFP_Pos          (12)                                              /*!< SYS_T::GPA_MFPL: PA3MFP Position       */
#define SYS_GPA_MFPL_PA3MFP_Msk          (0xful << SYS_GPA_MFPL_PA3MFP_Pos)                /*!< SYS_T::GPA_MFPL: PA3MFP Mask           */

#define SYS_GPA_MFPL_PA5MFP_Pos          (20)                                              /*!< SYS_T::GPA_MFPL: PA5MFP Position       */
#define SYS_GPA_MFPL_PA5MFP_Msk          (0xful << SYS_GPA_MFPL_PA5MFP_Pos)                /*!< SYS_T::GPA_MFPL: PA5MFP Mask           */

#define SYS_GPA_MFPL_PA6MFP_Pos          (24)                                              /*!< SYS_T::GPA_MFPL: PA6MFP Position       */
#define SYS_GPA_MFPL_PA6MFP_Msk          (0xful << SYS_GPA_MFPL_PA6MFP_Pos)                /*!< SYS_T::GPA_MFPL: PA6MFP Mask           */

#define SYS_GPA_MFPL_PA7MFP_Pos          (28)                                              /*!< SYS_T::GPA_MFPL: PA7MFP Position       */
#define SYS_GPA_MFPL_PA7MFP_Msk          (0xful << SYS_GPA_MFPL_PA7MFP_Pos)                /*!< SYS_T::GPA_MFPL: PA7MFP Mask           */

#define SYS_GPA_MFPH_PA8MFP_Pos          (0)                                               /*!< SYS_T::GPA_MFPH: PA8MFP Position       */
#define SYS_GPA_MFPH_PA8MFP_Msk          (0xful << SYS_GPA_MFPH_PA8MFP_Pos)                /*!< SYS_T::GPA_MFPH: PA8MFP Mask           */

#define SYS_GPA_MFPH_PA9MFP_Pos          (4)                                               /*!< SYS_T::GPA_MFPH: PA9MFP Position       */
#define SYS_GPA_MFPH_PA9MFP_Msk          (0xful << SYS_GPA_MFPH_PA9MFP_Pos)                /*!< SYS_T::GPA_MFPH: PA9MFP Mask           */

#define SYS_GPA_MFPH_PA10MFP_Pos         (8)                                               /*!< SYS_T::GPA_MFPH: PA10MFP Position      */
#define SYS_GPA_MFPH_PA10MFP_Msk         (0xful << SYS_GPA_MFPH_PA10MFP_Pos)               /*!< SYS_T::GPA_MFPH: PA10MFP Mask          */

#define SYS_GPA_MFPH_PA11MFP_Pos         (12)                                              /*!< SYS_T::GPA_MFPH: PA11MFP Position      */
#define SYS_GPA_MFPH_PA11MFP_Msk         (0xful << SYS_GPA_MFPH_PA11MFP_Pos)               /*!< SYS_T::GPA_MFPH: PA11MFP Mask          */

#define SYS_GPB_MFPL_PB0MFP_Pos          (0)                                               /*!< SYS_T::GPB_MFPL: PB0MFP Position       */
#define SYS_GPB_MFPL_PB0MFP_Msk          (0xful << SYS_GPB_MFPL_PB0MFP_Pos)                /*!< SYS_T::GPB_MFPL: PB0MFP Mask           */

#define SYS_GPB_MFPL_PB1MFP_Pos          (4)                                               /*!< SYS_T::GPB_MFPL: PB1MFP Position       */
#define SYS_GPB_MFPL_PB1MFP_Msk          (0xful << SYS_GPB_MFPL_PB1MFP_Pos)                /*!< SYS_T::GPB_MFPL: PB1MFP Mask           */

#define SYS_GPB_MFPL_PB2MFP_Pos          (8)                                               /*!< SYS_T::GPB_MFPL: PB2MFP Position       */
#define SYS_GPB_MFPL_PB2MFP_Msk          (0xful << SYS_GPB_MFPL_PB2MFP_Pos)                /*!< SYS_T::GPB_MFPL: PB2MFP Mask           */

#define SYS_GPB_MFPL_PB3MFP_Pos          (12)                                              /*!< SYS_T::GPB_MFPL: PB3MFP Position       */
#define SYS_GPB_MFPL_PB3MFP_Msk          (0xful << SYS_GPB_MFPL_PB3MFP_Pos)                /*!< SYS_T::GPB_MFPL: PB3MFP Mask           */

#define SYS_GPB_MFPL_PB4MFP_Pos          (16)                                              /*!< SYS_T::GPB_MFPL: PB4MFP Position       */
#define SYS_GPB_MFPL_PB4MFP_Msk          (0xful << SYS_GPB_MFPL_PB4MFP_Pos)                /*!< SYS_T::GPB_MFPL: PB4MFP Mask           */

#define SYS_GPB_MFPL_PB5MFP_Pos          (20)                                              /*!< SYS_T::GPB_MFPL: PB5MFP Position       */
#define SYS_GPB_MFPL_PB5MFP_Msk          (0xful << SYS_GPB_MFPL_PB5MFP_Pos)                /*!< SYS_T::GPB_MFPL: PB5MFP Mask           */

#define SYS_GPB_MFPL_PB6MFP_Pos          (24)                                              /*!< SYS_T::GPB_MFPL: PB6MFP Position       */
#define SYS_GPB_MFPL_PB6MFP_Msk          (0xful << SYS_GPB_MFPL_PB6MFP_Pos)                /*!< SYS_T::GPB_MFPL: PB6MFP Mask           */

#define SYS_GPB_MFPL_PB7MFP_Pos          (28)                                              /*!< SYS_T::GPB_MFPL: PB7MFP Position       */
#define SYS_GPB_MFPL_PB7MFP_Msk          (0xful << SYS_GPB_MFPL_PB7MFP_Pos)                /*!< SYS_T::GPB_MFPL: PB7MFP Mask           */

#define SYS_GPB_MFPH_PB8MFP_Pos          (0)                                               /*!< SYS_T::GPB_MFPH: PB8MFP Position       */
#define SYS_GPB_MFPH_PB8MFP_Msk          (0xful << SYS_GPB_MFPH_PB8MFP_Pos)                /*!< SYS_T::GPB_MFPH: PB8MFP Mask           */

#define SYS_GPB_MFPH_PB9MFP_Pos          (4)                                               /*!< SYS_T::GPB_MFPH: PB9MFP Position       */
#define SYS_GPB_MFPH_PB9MFP_Msk          (0xful << SYS_GPB_MFPH_PB9MFP_Pos)                /*!< SYS_T::GPB_MFPH: PB9MFP Mask           */

#define SYS_GPB_MFPH_PB10MFP_Pos         (8)                                               /*!< SYS_T::GPB_MFPH: PB10MFP Position      */
#define SYS_GPB_MFPH_PB10MFP_Msk         (0xful << SYS_GPB_MFPH_PB10MFP_Pos)               /*!< SYS_T::GPB_MFPH: PB10MFP Mask          */

#define SYS_GPB_MFPH_PB11MFP_Pos         (12)                                              /*!< SYS_T::GPB_MFPH: PB11MFP Position      */
#define SYS_GPB_MFPH_PB11MFP_Msk         (0xful << SYS_GPB_MFPH_PB11MFP_Pos)               /*!< SYS_T::GPB_MFPH: PB11MFP Mask          */

#define SYS_GPB_MFPH_PB12MFP_Pos         (16)                                              /*!< SYS_T::GPB_MFPH: PB12MFP Position      */
#define SYS_GPB_MFPH_PB12MFP_Msk         (0xful << SYS_GPB_MFPH_PB12MFP_Pos)               /*!< SYS_T::GPB_MFPH: PB12MFP Mask          */

#define SYS_GPB_MFPH_PB13MFP_Pos         (20)                                              /*!< SYS_T::GPB_MFPH: PB13MFP Position      */
#define SYS_GPB_MFPH_PB13MFP_Msk         (0xful << SYS_GPB_MFPH_PB13MFP_Pos)               /*!< SYS_T::GPB_MFPH: PB13MFP Mask          */

#define SYS_GPB_MFPH_PB14MFP_Pos         (24)                                              /*!< SYS_T::GPB_MFPH: PB14MFP Position      */
#define SYS_GPB_MFPH_PB14MFP_Msk         (0xful << SYS_GPB_MFPH_PB14MFP_Pos)               /*!< SYS_T::GPB_MFPH: PB14MFP Mask          */

#define SYS_GPB_MFPH_PB15MFP_Pos         (28)                                              /*!< SYS_T::GPB_MFPH: PB15MFP Position      */
#define SYS_GPB_MFPH_PB15MFP_Msk         (0xful << SYS_GPB_MFPH_PB15MFP_Pos)               /*!< SYS_T::GPB_MFPH: PB15MFP Mask          */

#define SYS_GPC_MFPL_PC0MFP_Pos          (0)                                               /*!< SYS_T::GPC_MFPL: PC0MFP Position       */
#define SYS_GPC_MFPL_PC0MFP_Msk          (0xful << SYS_GPC_MFPL_PC0MFP_Pos)                /*!< SYS_T::GPC_MFPL: PC0MFP Mask           */

#define SYS_GPC_MFPL_PC1MFP_Pos          (4)                                               /*!< SYS_T::GPC_MFPL: PC1MFP Position       */
#define SYS_GPC_MFPL_PC1MFP_Msk          (0xful << SYS_GPC_MFPL_PC1MFP_Pos)                /*!< SYS_T::GPC_MFPL: PC1MFP Mask           */

#define SYS_GPC_MFPL_PC2MFP_Pos          (8)                                               /*!< SYS_T::GPC_MFPL: PC2MFP Position       */
#define SYS_GPC_MFPL_PC2MFP_Msk          (0xful << SYS_GPC_MFPL_PC2MFP_Pos)                /*!< SYS_T::GPC_MFPL: PC2MFP Mask           */

#define SYS_GPC_MFPL_PC3MFP_Pos          (12)                                              /*!< SYS_T::GPC_MFPL: PC3MFP Position       */
#define SYS_GPC_MFPL_PC3MFP_Msk          (0xful << SYS_GPC_MFPL_PC3MFP_Pos)                /*!< SYS_T::GPC_MFPL: PC3MFP Mask           */

#define SYS_GPC_MFPL_PC4MFP_Pos          (16)                                              /*!< SYS_T::GPC_MFPL: PC4MFP Position       */
#define SYS_GPC_MFPL_PC4MFP_Msk          (0xful << SYS_GPC_MFPL_PC4MFP_Pos)                /*!< SYS_T::GPC_MFPL: PC4MFP Mask           */

#define SYS_GPC_MFPL_PC5MFP_Pos          (20)                                              /*!< SYS_T::GPC_MFPL: PC5MFP Position       */
#define SYS_GPC_MFPL_PC5MFP_Msk          (0xful << SYS_GPC_MFPL_PC5MFP_Pos)                /*!< SYS_T::GPC_MFPL: PC5MFP Mask           */

#define SYS_GPC_MFPL_PC6MFP_Pos          (24)                                              /*!< SYS_T::GPC_MFPL: PC6MFP Position       */
#define SYS_GPC_MFPL_PC6MFP_Msk          (0xful << SYS_GPC_MFPL_PC6MFP_Pos)                /*!< SYS_T::GPC_MFPL: PC6MFP Mask           */

#define SYS_GPC_MFPL_PC7MFP_Pos          (28)                                              /*!< SYS_T::GPC_MFPL: PC7MFP Position       */
#define SYS_GPC_MFPL_PC7MFP_Msk          (0xful << SYS_GPC_MFPL_PC7MFP_Pos)                /*!< SYS_T::GPC_MFPL: PC7MFP Mask           */

#define SYS_GPC_MFPH_PC14MFP_Pos         (24)                                              /*!< SYS_T::GPC_MFPH: PC14MFP Position      */
#define SYS_GPC_MFPH_PC14MFP_Msk         (0xful << SYS_GPC_MFPH_PC14MFP_Pos)               /*!< SYS_T::GPC_MFPH: PC14MFP Mask          */

#define SYS_GPD_MFPL_PD0MFP_Pos          (0)                                               /*!< SYS_T::GPD_MFPL: PD0MFP Position       */
#define SYS_GPD_MFPL_PD0MFP_Msk          (0xful << SYS_GPD_MFPL_PD0MFP_Pos)                /*!< SYS_T::GPD_MFPL: PD0MFP Mask           */

#define SYS_GPD_MFPL_PD1MFP_Pos          (4)                                               /*!< SYS_T::GPD_MFPL: PD1MFP Position       */
#define SYS_GPD_MFPL_PD1MFP_Msk          (0xful << SYS_GPD_MFPL_PD1MFP_Pos)                /*!< SYS_T::GPD_MFPL: PD1MFP Mask           */

#define SYS_GPD_MFPL_PD2MFP_Pos          (8)                                               /*!< SYS_T::GPD_MFPL: PD2MFP Position       */
#define SYS_GPD_MFPL_PD2MFP_Msk          (0xful << SYS_GPD_MFPL_PD2MFP_Pos)                /*!< SYS_T::GPD_MFPL: PD2MFP Mask           */

#define SYS_GPD_MFPL_PD3MFP_Pos          (12)                                              /*!< SYS_T::GPD_MFPL: PD3MFP Position       */
#define SYS_GPD_MFPL_PD3MFP_Msk          (0xful << SYS_GPD_MFPL_PD3MFP_Pos)                /*!< SYS_T::GPD_MFPL: PD3MFP Mask           */

#define SYS_GPD_MFPH_PD15MFP_Pos         (28)                                              /*!< SYS_T::GPD_MFPH: PD15MFP Position      */
#define SYS_GPD_MFPH_PD15MFP_Msk         (0xful << SYS_GPD_MFPH_PD15MFP_Pos)               /*!< SYS_T::GPD_MFPH: PD15MFP Mask          */

#define SYS_GPF_MFPL_PF0MFP_Pos          (0)                                               /*!< SYS_T::GPF_MFPL: PF0MFP Position       */
#define SYS_GPF_MFPL_PF0MFP_Msk          (0xful << SYS_GPF_MFPL_PF0MFP_Pos)                /*!< SYS_T::GPF_MFPL: PF0MFP Mask           */

#define SYS_GPF_MFPL_PF1MFP_Pos          (4)                                               /*!< SYS_T::GPF_MFPL: PF1MFP Position       */
#define SYS_GPF_MFPL_PF1MFP_Msk          (0xful << SYS_GPF_MFPL_PF1MFP_Pos)                /*!< SYS_T::GPF_MFPL: PF1MFP Mask           */

#define SYS_GPF_MFPL_PF2MFP_Pos          (8)                                               /*!< SYS_T::GPF_MFPL: PF2MFP Position       */
#define SYS_GPF_MFPL_PF2MFP_Msk          (0xful << SYS_GPF_MFPL_PF2MFP_Pos)                /*!< SYS_T::GPF_MFPL: PF2MFP Mask           */

#define SYS_GPF_MFPL_PF3MFP_Pos          (12)                                              /*!< SYS_T::GPF_MFPL: PF3MFP Position       */
#define SYS_GPF_MFPL_PF3MFP_Msk          (0xful << SYS_GPF_MFPL_PF3MFP_Pos)                /*!< SYS_T::GPF_MFPL: PF3MFP Mask           */

#define SYS_GPF_MFPL_PF4MFP_Pos          (16)                                              /*!< SYS_T::GPF_MFPL: PF4MFP Position       */
#define SYS_GPF_MFPL_PF4MFP_Msk          (0xful << SYS_GPF_MFPL_PF4MFP_Pos)                /*!< SYS_T::GPF_MFPL: PF4MFP Mask           */

#define SYS_GPF_MFPL_PF5MFP_Pos          (20)                                              /*!< SYS_T::GPF_MFPL: PF5MFP Position       */
#define SYS_GPF_MFPL_PF5MFP_Msk          (0xful << SYS_GPF_MFPL_PF5MFP_Pos)                /*!< SYS_T::GPF_MFPL: PF5MFP Mask           */

#define SYS_GPF_MFPL_PF6MFP_Pos          (24)                                              /*!< SYS_T::GPF_MFPL: PF6MFP Position       */
#define SYS_GPF_MFPL_PF6MFP_Msk          (0xful << SYS_GPF_MFPL_PF6MFP_Pos)                /*!< SYS_T::GPF_MFPL: PF6MFP Mask           */

#define SYS_GPF_MFPH_PF14MFP_Pos         (24)                                              /*!< SYS_T::GPF_MFPH: PF14MFP Position      */
#define SYS_GPF_MFPH_PF14MFP_Msk         (0xful << SYS_GPF_MFPH_PF14MFP_Pos)               /*!< SYS_T::GPF_MFPH: PF14MFP Mask          */

#define SYS_GPF_MFPH_PF15MFP_Pos         (28)                                              /*!< SYS_T::GPF_MFPH: PF15MFP Position      */
#define SYS_GPF_MFPH_PF15MFP_Msk         (0xful << SYS_GPF_MFPH_PF15MFP_Pos)               /*!< SYS_T::GPF_MFPH: PF15MFP Mask          */

#define SYS_IRCTCTL_FREQSEL_Pos          (0)                                               /*!< SYS_T::IRCTCTL: FREQSEL Position       */
#define SYS_IRCTCTL_FREQSEL_Msk          (0x3ul << SYS_IRCTCTL_FREQSEL_Pos)                /*!< SYS_T::IRCTCTL: FREQSEL Mask           */

#define SYS_IRCTCTL_LOOPSEL_Pos          (4)                                               /*!< SYS_T::IRCTCT0: LOOPSEL Position       */
#define SYS_IRCTCTL_LOOPSEL_Msk          (0x3ul << SYS_IRCTCTL_LOOPSEL_Pos)                /*!< SYS_T::IRCTCTL: LOOPSEL Mask           */

#define SYS_IRCTCTL_RETRYCNT_Pos         (6)                                               /*!< SYS_T::IRCTCTL: RETRYCNT Position      */
#define SYS_IRCTCTL_RETRYCNT_Msk         (0x3ul << SYS_IRCTCTL_RETRYCNT_Pos)               /*!< SYS_T::IRCTCTL: RETRYCNT Mask          */

#define SYS_IRCTCTL_CESTOPEN_Pos         (8)                                               /*!< SYS_T::IRCTCTL: CESTOPEN Position      */
#define SYS_IRCTCTL_CESTOPEN_Msk         (0x1ul << SYS_IRCTCTL_CESTOPEN_Pos)               /*!< SYS_T::IRCTCTL: CESTOPEN Mask          */

#define SYS_IRCTCTL_BOUNDEN_Pos          (9)                                               /*!< SYS_T::IRCTCTL: BOUNDEN Position       */
#define SYS_IRCTCTL_BOUNDEN_Msk          (0x1ul << SYS_IRCTCTL_BOUNDEN_Pos)                /*!< SYS_T::IRCTCTL: BOUNDEN Mask           */

#define SYS_IRCTCTL_REFCKSEL_Pos         (10)                                              /*!< SYS_T::IRCTCTL: REFCKSEL Position      */
#define SYS_IRCTCTL_REFCKSEL_Msk         (0x1ul << SYS_IRCTCTL_REFCKSEL_Pos)               /*!< SYS_T::IRCTCTL: REFCKSEL Mask          */

#define SYS_IRCTCTL_BOUNDARY_Pos         (16)                                              /*!< SYS_T::IRCTCTL: BOUNDARY Position      */
#define SYS_IRCTCTL_BOUNDARY_Msk         (0x1ful << SYS_IRCTCTL_BOUNDARY_Pos)              /*!< SYS_T::IRCTCTL: BOUNDARY Mask          */

#define SYS_IRCTIEN_TFAILIEN_Pos         (1)                                               /*!< SYS_T::IRCTIEN: TFAILIEN Position      */
#define SYS_IRCTIEN_TFAILIEN_Msk         (0x1ul << SYS_IRCTIEN_TFAILIEN_Pos)               /*!< SYS_T::IRCTIEN: TFAILIEN Mask          */

#define SYS_IRCTIEN_CLKEIEN_Pos          (2)                                               /*!< SYS_T::IRCTIEN: CLKEIEN Position       */
#define SYS_IRCTIEN_CLKEIEN_Msk          (0x1ul << SYS_IRCTIEN_CLKEIEN_Pos)                /*!< SYS_T::IRCTIEN: CLKEIEN Mask           */

#define SYS_IRCTISTS_FREQLOCK_Pos        (0)                                               /*!< SYS_T::IRCTISTS: FREQLOCK Position     */
#define SYS_IRCTISTS_FREQLOCK_Msk        (0x1ul << SYS_IRCTISTS_FREQLOCK_Pos)              /*!< SYS_T::IRCTISTS: FREQLOCK Mask         */

#define SYS_IRCTISTS_TFAILIF_Pos         (1)                                               /*!< SYS_T::IRCTISTS: TFAILIF Position      */
#define SYS_IRCTISTS_TFAILIF_Msk         (0x1ul << SYS_IRCTISTS_TFAILIF_Pos)               /*!< SYS_T::IRCTISTS: TFAILIF Mask          */

#define SYS_IRCTISTS_CLKERRIF_Pos        (2)                                               /*!< SYS_T::IRCTISTS: CLKERRIF Position     */
#define SYS_IRCTISTS_CLKERRIF_Msk        (0x1ul << SYS_IRCTISTS_CLKERRIF_Pos)              /*!< SYS_T::IRCTISTS: CLKERRIF Mask         */

#define SYS_MODCTL_MODEN_Pos             (0)                                               /*!< SYS_T::MODCTL: MODEN Position          */
#define SYS_MODCTL_MODEN_Msk             (0x1ul << SYS_MODCTL_MODEN_Pos)                   /*!< SYS_T::MODCTL: MODEN Mask              */

#define SYS_MODCTL_MODH_Pos              (1)                                               /*!< SYS_T::MODCTL: MODH Position           */
#define SYS_MODCTL_MODH_Msk              (0x1ul << SYS_MODCTL_MODH_Pos)                    /*!< SYS_T::MODCTL: MODH Mask               */

#define SYS_MODCTL_MODPWMSEL_Pos         (4)                                               /*!< SYS_T::MODCTL: MODPWMSEL Position      */
#define SYS_MODCTL_MODPWMSEL_Msk         (0x7ul << SYS_MODCTL_MODPWMSEL_Pos)               /*!< SYS_T::MODCTL: MODPWMSEL Mask          */

#define SYS_TSOFFSET_VTEMP_Pos           (0)                                               /*!< SYS_T::TSOFFSET: VTEMP Position        */
#define SYS_TSOFFSET_VTEMP_Msk           (0xffful << SYS_TSOFFSET_VTEMP_Pos)               /*!< SYS_T::TSOFFSET: VTEMP Mask            */

/**@}*/ /* SYS_CONST */

typedef struct
{

    /**
     * @var SYS_INT_T::NMIEN
     * Offset: 0x00  NMI Source Interrupt Enable Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |BODOUT    |BOD NMI Source Enable (Write Protect)
     * |        |          |0 = BOD NMI source Disabled.
     * |        |          |1 = BOD NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[1]     |IRCINT    |IRC TRIM NMI Source Enable (Write Protect)
     * |        |          |0 = IRC TRIM NMI source Disabled.
     * |        |          |1 = IRC TRIM NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[2]     |PWRWUINT  |Power-down Mode Wake-up NMI Source Enable (Write Protect)
     * |        |          |0 = Power-down mode wake-up NMI source Disabled.
     * |        |          |1 = Power-down mode wake-up NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[3]     |SRAMPERR  |SRAM Parity Check Error NMI Source Enable (Write Protect)
     * |        |          |0 = SRAM parity check error NMI source Disabled.
     * |        |          |1 = SRAM parity check error NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[4]     |CLKFAIL   |Clock Fail Detected NMI Source Enable (Write Protect)
     * |        |          |0 = Clock fail detected interrupt NMI source Disabled.
     * |        |          |1 = Clock fail detected interrupt NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[8]     |EINT0     |External Interrupt From INT0 Pin NMI Source Enable (Write Protect)
     * |        |          |0 = External interrupt from INT0 pin NMI source Disabled.
     * |        |          |1 = External interrupt from INT0 pin NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[9]     |EINT1     |External Interrupt From INT1 Pin NMI Source Enable (Write Protect)
     * |        |          |0 = External interrupt from INT1 pin NMI source Disabled.
     * |        |          |1 = External interrupt from INT1 pin NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[10]    |EINT2     |External Interrupt From INT2 Pin NMI Source Enable (Write Protect)
     * |        |          |0 = External interrupt from INT2 pin NMI source Disabled.
     * |        |          |1 = External interrupt from INT2 pin NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[11]    |EINT3     |External Interrupt From INT3 Pin NMI Source Enable (Write Protect)
     * |        |          |0 = External interrupt from INT3 pin NMI source Disabled.
     * |        |          |1 = External interrupt from INT3 pin NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[12]    |EINT4     |External Interrupt From INT4 Pin NMI Source Enable (Write Protect)
     * |        |          |0 = External interrupt from INT4 pin NMI source Disabled.
     * |        |          |1 = External interrupt from INT4 pin NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[13]    |EINT5     |External Interrupt From INT5 Pin NMI Source Enable (Write Protect)
     * |        |          |0 = External interrupt from INT5 pin NMI source Disabled.
     * |        |          |1 = External interrupt from INT5 pin NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[14]    |UART0INT  |UART0 NMI Source Enable (Write Protect)
     * |        |          |0 = UART0 NMI source Disabled.
     * |        |          |1 = UART0 NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[15]    |UART1INT  |UART1 NMI Source Enable (Write Protect)
     * |        |          |0 = UART1 NMI source Disabled.
     * |        |          |1 = UART1 NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var SYS_INT_T::NMISTS
     * Offset: 0x04  NMI source interrupt Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |BODOUT    |BOD Interrupt Flag (Read Only)
     * |        |          |0 = BOD interrupt is de-asserted.
     * |        |          |1 = BOD interrupt is asserted.
     * |[1]     |IRCINT    |IRC TRIM Interrupt Flag (Read Only)
     * |        |          |0 = HIRC TRIM interrupt is de-asserted.
     * |        |          |1 = HIRC TRIM interrupt is asserted.
     * |[2]     |PWRWUINT  |Power-down Mode Wake-up Interrupt Flag (Read Only)
     * |        |          |0 = Power-down mode wake-up interrupt is de-asserted.
     * |        |          |1 = Power-down mode wake-up interrupt is asserted.
     * |[4]     |CLKFAIL   |Clock Fail Detected Interrupt Flag (Read Only)
     * |        |          |0 = Clock fail detected interrupt is de-asserted.
     * |        |          |1 = Clock fail detected interrupt is asserted.
     * |[8]     |EINT0     |External Interrupt From INT0 Pin Interrupt Flag (Read Only)
     * |        |          |0 = External Interrupt from INT0 pin interrupt is deasserted.
     * |        |          |1 = External Interrupt from INT0 pin interrupt is asserted.
     * |[9]     |EINT1     |External Interrupt From INT1 Pin Interrupt Flag (Read Only)
     * |        |          |0 = External Interrupt from INT1 pin interrupt is deasserted.
     * |        |          |1 = External Interrupt from INT1 pin interrupt is asserted.
     * |[10]    |EINT2     |External Interrupt From INT2 Pin Interrupt Flag (Read Only)
     * |        |          |0 = External Interrupt from INT2 pin interrupt is deasserted.
     * |        |          |1 = External Interrupt from INT2 pin interrupt is asserted.
     * |[11]    |EINT3     |External Interrupt From INT3 Pin Interrupt Flag (Read Only)
     * |        |          |0 = External Interrupt from INT3 pin interrupt is deasserted.
     * |        |          |1 = External Interrupt from INT3 pin interrupt is asserted.
     * |[12]    |EINT4     |External Interrupt From INT4 Pin Interrupt Flag (Read Only)
     * |        |          |0 = External Interrupt from INT4 pin interrupt is deasserted.
     * |        |          |1 = External Interrupt from INT4 pin interrupt is asserted.
     * |[13]    |EINT5     |External Interrupt From INT5 Pin Interrupt Flag (Read Only)
     * |        |          |0 = External Interrupt from INT5 pin interrupt is deasserted.
     * |        |          |1 = External Interrupt from INT5 pin interrupt is asserted.
     * |[14]    |UART0INT  |UART0 Interrupt Flag (Read Only)
     * |        |          |0 = UART1 interrupt is de-asserted.
     * |        |          |1 = UART1 interrupt is asserted.
     * |[15]    |UART1INT  |UART1 Interrupt Flag (Read Only)
     * |        |          |0 = UART1 interrupt is de-asserted.
     * |        |          |1 = UART1 interrupt is asserted.
     */

    __IO  uint32_t NMIEN;          /* Offset: 0x00  NMI Source Interrupt Enable Register                               */
    __I   uint32_t NMISTS;         /* Offset: 0x04  NMI source interrupt Status Register                               */

} SYS_INT_T;

/**
    @addtogroup INT_CONST INT Bit Field Definition
    Constant Definitions for INT Controller
    @{
*/

#define SYS_NMIEN_BODOUT_Pos             (0)                                               /*!< SYS_INT_T::NMIEN: BODOUT Position         */
#define SYS_NMIEN_BODOUT_Msk             (0x1ul << SYS_NMIEN_BODOUT_Pos )                  /*!< SYS_INT_T::NMIEN: BODOUT Mask             */

#define SYS_NMIEN_IRCINT_Pos             (1)                                               /*!< SYS_INT_T::NMIEN: IRCINT Position         */
#define SYS_NMIEN_IRCINT_Msk             (0x1ul << SYS_NMIEN_IRCINT_Pos )                  /*!< SYS_INT_T::NMIEN: IRCINT Mask             */

#define SYS_NMIEN_PWRWUINT_Pos           (2)                                               /*!< SYS_INT_T::NMIEN: PWRWUINT Position       */
#define SYS_NMIEN_PWRWUINT_Msk           (0x1ul << SYS_NMIEN_PWRWUINT_Pos )                /*!< SYS_INT_T::NMIEN: PWRWUINT Mask           */

#define SYS_NMIEN_CLKFAIL_Pos            (4)                                               /*!< SYS_INT_T::NMIEN: CLKFAIL Position        */
#define SYS_NMIEN_CLKFAIL_Msk            (0x1ul << SYS_NMIEN_CLKFAIL_Pos )                 /*!< SYS_INT_T::NMIEN: CLKFAIL Mask            */

#define SYS_NMIEN_EINT0_Pos              (8)                                               /*!< SYS_INT_T::NMIEN: EINT0 Position          */
#define SYS_NMIEN_EINT0_Msk              (0x1ul << SYS_NMIEN_EINT0_Pos )                   /*!< SYS_INT_T::NMIEN: EINT0 Mask              */

#define SYS_NMIEN_EINT1_Pos              (9)                                               /*!< SYS_INT_T::NMIEN: EINT1 Position          */
#define SYS_NMIEN_EINT1_Msk              (0x1ul << SYS_NMIEN_EINT1_Pos )                   /*!< SYS_INT_T::NMIEN: EINT1 Mask              */

#define SYS_NMIEN_EINT2_Pos              (10)                                              /*!< SYS_INT_T::NMIEN: EINT2 Position          */
#define SYS_NMIEN_EINT2_Msk              (0x1ul << SYS_NMIEN_EINT2_Pos )                   /*!< SYS_INT_T::NMIEN: EINT2 Mask              */

#define SYS_NMIEN_EINT3_Pos              (11)                                              /*!< SYS_INT_T::NMIEN: EINT3 Position          */
#define SYS_NMIEN_EINT3_Msk              (0x1ul << SYS_NMIEN_EINT3_Pos )                   /*!< SYS_INT_T::NMIEN: EINT3 Mask              */

#define SYS_NMIEN_EINT4_Pos              (12)                                              /*!< SYS_INT_T::NMIEN: EINT4 Position          */
#define SYS_NMIEN_EINT4_Msk              (0x1ul << SYS_NMIEN_EINT4_Pos )                   /*!< SYS_INT_T::NMIEN: EINT4 Mask              */

#define SYS_NMIEN_EINT5_Pos              (13)                                              /*!< SYS_INT_T::NMIEN: EINT5 Position          */
#define SYS_NMIEN_EINT5_Msk              (0x1ul << SYS_NMIEN_EINT5_Pos )                   /*!< SYS_INT_T::NMIEN: EINT5 Mask              */

#define SYS_NMIEN_UART0INT_Pos           (14)                                              /*!< SYS_INT_T::NMIEN: UART0INT Position       */
#define SYS_NMIEN_UART0INT_Msk           (0x1ul << SYS_NMIEN_UART0INT_Pos )                /*!< SYS_INT_T::NMIEN: UART0INT Mask           */

#define SYS_NMIEN_UART1INT_Pos           (15)                                              /*!< SYS_INT_T::NMIEN: UART1INT Position       */
#define SYS_NMIEN_UART1INT_Msk           (0x1ul << SYS_NMIEN_UART1INT_Pos )                /*!< SYS_INT_T::NMIEN: UART1INT Mask           */

#define SYS_NMISTS_BODOUT_Pos            (0)                                               /*!< SYS_INT_T::NMISTS: BODOUT Position        */
#define SYS_NMISTS_BODOUT_Msk            (0x1ul << SYS_NMISTS_BODOUT_Pos )                 /*!< SYS_INT_T::NMISTS: BODOUT Mask            */

#define SYS_NMISTS_IRCINT_Pos            (1)                                               /*!< SYS_INT_T::NMISTS: IRCINT Position        */
#define SYS_NMISTS_IRCINT_Msk            (0x1ul << SYS_NMISTS_IRCINT_Pos )                 /*!< SYS_INT_T::NMISTS: IRCINT Mask            */

#define SYS_NMISTS_PWRWUINT_Pos          (2)                                               /*!< SYS_INT_T::NMISTS: PWRWUINT Position      */
#define SYS_NMISTS_PWRWUINT_Msk          (0x1ul << SYS_NMISTS_PWRWUINT_Pos )               /*!< SYS_INT_T::NMISTS: PWRWUINT Mask          */

#define SYS_NMISTS_CLKFAIL_Pos           (4)                                               /*!< SYS_INT_T::NMISTS: CLKFAIL Position       */
#define SYS_NMISTS_CLKFAIL_Msk           (0x1ul << SYS_NMISTS_CLKFAIL_Pos )                /*!< SYS_INT_T::NMISTS: CLKFAIL Mask           */

#define SYS_NMISTS_EINT0_Pos             (8)                                               /*!< SYS_INT_T::NMISTS: EINT0 Position         */
#define SYS_NMISTS_EINT0_Msk             (0x1ul << SYS_NMISTS_EINT0_Pos )                  /*!< SYS_INT_T::NMISTS: EINT0 Mask             */

#define SYS_NMISTS_EINT1_Pos             (9)                                               /*!< SYS_INT_T::NMISTS: EINT1 Position         */
#define SYS_NMISTS_EINT1_Msk             (0x1ul << SYS_NMISTS_EINT1_Pos )                  /*!< SYS_INT_T::NMISTS: EINT1 Mask             */

#define SYS_NMISTS_EINT2_Pos             (10)                                              /*!< SYS_INT_T::NMISTS: EINT2 Position         */
#define SYS_NMISTS_EINT2_Msk             (0x1ul << SYS_NMISTS_EINT2_Pos )                  /*!< SYS_INT_T::NMISTS: EINT2 Mask             */

#define SYS_NMISTS_EINT3_Pos             (11)                                              /*!< SYS_INT_T::NMISTS: EINT3 Position         */
#define SYS_NMISTS_EINT3_Msk             (0x1ul << SYS_NMISTS_EINT3_Pos )                  /*!< SYS_INT_T::NMISTS: EINT3 Mask             */

#define SYS_NMISTS_EINT4_Pos             (12)                                              /*!< SYS_INT_T::NMISTS: EINT4 Position         */
#define SYS_NMISTS_EINT4_Msk             (0x1ul << SYS_NMISTS_EINT4_Pos )                  /*!< SYS_INT_T::NMISTS: EINT4 Mask             */

#define SYS_NMISTS_EINT5_Pos             (13)                                              /*!< SYS_INT_T::NMISTS: EINT5 Position         */
#define SYS_NMISTS_EINT5_Msk             (0x1ul << SYS_NMISTS_EINT5_Pos )                  /*!< SYS_INT_T::NMISTS: EINT5 Mask             */

#define SYS_NMISTS_UART0INT_Pos          (14)                                              /*!< SYS_INT_T::NMISTS: UART0_INT Position     */
#define SYS_NMISTS_UART0INT_Msk          (0x1ul << SYS_NMISTS_UART0INT_Pos )               /*!< SYS_INT_T::NMISTS: UART0_INT Mask         */

#define SYS_NMISTS_UART1INT_Pos          (15)                                              /*!< SYS_INT_T::NMISTS: UART1_INT Position     */
#define SYS_NMISTS_UART1INT_Msk          (0x1ul << SYS_NMISTS_UART1INT_Pos )               /*!< SYS_INT_T::NMISTS: UART1_INT Mask         */


/**@}*/ /* INT_CONST */
/**@}*/ /* end of SYS register group */




/*---------------------- Timer Controller -------------------------*/
/**
    @addtogroup TIMER Timer Controller(TIMER)
    Memory Mapped Structure for TIMER Controller
    @{
*/

typedef struct
{


    /**
     * @var TIMER_T::CTL
     * Offset: 0x00  Timer Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |PSC       |Prescale Counter
     * |        |          |Timer input clock or event source is divided by (PSC+1) before it is fed to the timer up counter.
     * |        |          |If this field is 0 (PSC = 0), then there is no scaling.
     * |        |          |Note: Up2025-07-16 prescale counter value will reset internal 8-bit prescale counter and 24-bit up counter value.
     * |[8]     |TRGPDMA   |Trigger PDMA Enable Bit
     * |        |          |If this bit is set to 1, timer time-out interrupt or capture interrupt can trigger PDMA.
     * |        |          |0 = Timer interrupt trigger PDMA Disabled.
     * |        |          |1 = Timer interrupt trigger PDMA Enabled.
     * |        |          |Note: If TRGSSEL (TIMERx_CTL[18]) = 0, time-out interrupt signal will trigger PDMA. If TRGSSEL (TIMERx_CTL[18]) = 1, capture interrupt signal will trigger PDMA.
     * |[9]     |TRGBPWM23 |Trigger BPWM23 Enable Bit
     * |        |          |If this bit is set to 1, timer time-out interrupt or capture interrupt can trigger BPWM23.
     * |        |          |0 = Timer interrupt trigger BPWM23 Disabled.
     * |        |          |1 = Timer interrupt trigger BPWM23 Enabled.
     * |        |          |Note: If TRGSSEL (TIMERx_CTL[18]) = 0, time-out interrupt signal will trigger BPWM23. If TRGSSEL (TIMERx_CTL[18]) = 1, capture interrupt signal will trigger BPWM23.
     * |[10]    |INTRGEN   |Inter-Timer Trigger Mode Enable Bit
     * |        |          |Setting this bit will enable the inter-timer trigger capture function.
     * |        |          |The Timer0/2 will be in event counter mode and counting with external clock source or event.
     * |        |          |Also, Timer1/3 will be in trigger-counting mode of capture function.
     * |        |          |0 = Inter-Timer Trigger mode Disabled.
     * |        |          |1 = Inter-Timer Trigger mode Enabled.
     * |        |          |Note: For Timer1/3, this bit is ignored and the read back value is always 0.
     * |[16]    |CAPSRC    |Capture Pin Source Selection
     * |        |          |0 = Capture Function source is from TMx_EXT (x= 0~3) pin.
     * |        |          |1 = Capture Function source is from LIRC.
     * |[18]    |TRGSSEL   |Trigger Source Select Bit
     * |        |          |This bit is used to select trigger source is from Timer time-out interrupt signal or capture interrupt signal.
     * |        |          |0 = Timer time-out interrupt signal is used to trigger BPWM, ADC and PDMA.
     * |        |          |1 = Capture interrupt signal is used to trigger BPWM, ADC and PDMA.
     * |[19]    |TRGBPWM01 |Trigger BPWM01 Enable Bit
     * |        |          |If this bit is set to 1, timer time-out interrupt or capture interrupt can trigger BPWM01.
     * |        |          |0 = Timer interrupt trigger BPWM01 Disabled.
     * |        |          |1 = Timer interrupt trigger BPWM01 Enabled.
     * |        |          |Note: If TRGSSEL (TIMERx_CTL[18]) = 0, time-out interrupt signal will trigger BPWM01. If TRGSSEL (TIMERx_CTL[18]) = 1, capture interrupt signal will trigger BPWM01.
     * |[21]    |TRGADC    |Trigger ADC Enable Bit
     * |        |          |If this bit is set to 1, timer time-out interrupt or capture interrupt can trigger ADC.
     * |        |          |0 = Timer interrupt trigger ADC Disabled.
     * |        |          |1 = Timer interrupt trigger ADC Enabled.
     * |        |          |Note: If TRGSSEL (TIMERx_CTL[18]) = 0, time-out interrupt signal will trigger ADC. If TRGSSEL (TIMERx_CTL[18]) = 1, capture interrupt signal will trigger ADC.
     * |[22]    |TGLPINSEL |Toggle-output Pin Select
     * |        |          |0 = Toggle mode output to TMx (Timer Event Counter Pin).
     * |        |          |1 = Toggle mode output to TMx_EXT (Timer External Capture Pin).
     * |[23]    |WKEN      |Wake-up Function Enable Bit
     * |        |          |If this bit is set to 1, while timer interrupt flag TIF (TIMERx_INTSTS[0]) is 1 and INTEN (TIMERx_CTL[29]) is enabled, the timer interrupt signal will generate a wake-up trigger event to CPU.
     * |        |          |0 = Wake-up function Disabled if timer interrupt signal generated.
     * |        |          |1 = Wake-up function Enabled if timer interrupt signal generated.
     * |[24]    |EXTCNTEN  |Event Counter Mode Enable Bit
     * |        |          |This bit is for external counting pin function enabled.
     * |        |          |0 = Event counter mode Disabled.
     * |        |          |1 = Event counter mode Enabled.
     * |        |          |Note1: When timer is used as an event counter, this bit should be set to 1 and select PCLKx (x=0~1) as timer clock source.
     * |        |          |Note2: When Timer0/Timer2 INTRGEN is set to 1, this bit is forced to 1 in Timer0/Timer2, and this bit is forced to 0 in Timer1/Timer3.
     * |[25]    |ACTSTS    |Timer Active Status Bit (Read Only)
     * |        |          |This bit indicates the 24-bit up counter status.
     * |        |          |0 = 24-bit up counter is not active.
     * |        |          |1 = 24-bit up counter is active.
     * |[26]    |RSTCNT    |Timer Counter Reset Bit
     * |        |          |This bit indicates the 24-bit up counter status.
     * |        |          |0 = No effect.
     * |        |          |1 = Reset internal 8-bit prescale counter, 24-bit up counter value and CNTEN bit.
     * |        |          |Note: This bit will be auto cleared.
     * |[28:27] |OPMODE    |Timer Counting Mode Select
     * |        |          |00 = The timer controller is operated in One-shot mode.
     * |        |          |01 = The timer controller is operated in Periodic mode.
     * |        |          |10 = The timer controller is operated in Toggle-output mode.
     * |        |          |11 = The timer controller is operated in Continuous Counting mode.
     * |[29]    |INTEN     |Timer Interrupt Enable Bit
     * |        |          |0 = Timer time-out interrupt Disabled.
     * |        |          |1 = Timer time-out interrupt Enabled.
     * |        |          |Note: If this bit is enabled, when the timer time-out interrupt flag TIF is set to 1, the timer interrupt signal is generated and inform to CPU.
     * |[30]    |CNTEN     |Timer Counting Enable Bit
     * |        |          |0 = Stops/Suspends counting.
     * |        |          |1 = Starts counting.
     * |        |          |Note1: In stop status, and then set CNTEN to 1 will enable the 24-bit up counter to keep counting from the last stop counting value.
     * |        |          |Note2: This bit is auto-cleared by hardware in one-shot mode (TIMER_CTL[28:27] = 00) when the timer time-out interrupt flag TIF (TIMERx_INTSTS[0]) is generated.
     * |        |          |Note3: Setting this bit enable/disable needs 2 * TMR_CLK period to become active. User can read ACTSTS (TIMERx_CTL[25]) to check enable/disable command is completed or not.
     * |[31]    |ICEDEBUG  |ICE Debug Mode Acknowledge Disable Bit (Write Protect)
     * |        |          |0 = ICE debug mode acknowledgement effects TIMER counting.
     * |        |          |TIMER counter will be held while CPU is held by ICE.
     * |        |          |1 = ICE debug mode acknowledgement Disabled.
     * |        |          |TIMER counter will keep going no matter CPU is held by ICE or not.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var TIMER_T::CMP
     * Offset: 0x04  Timer Comparator Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[23:0]  |CMPDAT    |Timer Comparedator Value
     * |        |          |CMPDAT is a 24-bit compared value register.
     * |        |          |When the internal 24-bit up counter value is equal to CMPDAT value, the TIF (TIMERx_INTSTS[0] Timer Interrupt Flag) will set to 1.
     * |        |          |Time-out period = (Period of timer clock input) * (8-bit PSC + 1) * (24-bit CMPDAT).
     * |        |          |Note1: Never write 0x0 or 0x1 in CMPDAT field, or the core will run into unknown state.
     * |        |          |Note2: When timer is operating at continuous counting mode, the 24-bit up counter will keep counting continuously even if user writes a new value into CMPDAT field.
     * |        |          |But if timer is operating at other modes, the 24-bit up counter will restart counting from 0 and using newest CMPDAT value to be the timer compared value while user writes a new value into CMPDAT field.
     * @var TIMER_T::INTSTS
     * Offset: 0x08  Timer Interrupt Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |TIF       |Timer Interrupt Flag
     * |        |          |This bit indicates the interrupt flag status of Timer while 24-bit timer up counter CNT (TIMERx_CNT[23:0]) value reaches CMPDAT (TIMERx_CMP[23:0]) value.
     * |        |          |0 = No effect.
     * |        |          |1 = CNT value matches the CMPDAT value.
     * |        |          |Note: This bit is cleared by writing 1 to it.
     * |[1]     |TWKF      |Timer Wake-Up Flag
     * |        |          |This bit indicates the interrupt wake-up flag status of timer.
     * |        |          |0 = Timer does not cause CPU wake-up.
     * |        |          |1 = CPU wake-up from Idle or Power-down mode if timer time-out interrupt signal generated.
     * |        |          |Note: This bit is cleared by writing 1 to it.
     * @var TIMER_T::CNT
     * Offset: 0x0C  Timer Data Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[23:0]  |CNT       |Timer Data Register
     * |        |          |Read this register to get CNT value. For example:
     * |        |          |If EXTCNTEN (TIMERx_CTL[24]) is 0, user can read CNT value for getting current 24-bit counter value.
     * |        |          |If EXTCNTEN (TIMERx_CTL[24]) is 1, user can read CNT value for getting current 24-bit event input counter value.
     * @var TIMER_T::CAP
     * Offset: 0x10  Timer Capture Data Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[23:0]  |CAPDAT    |Timer Capture Data Register
     * |        |          |When CAPEN (TIMERx_EXTCTL[3]) bit is set, CAPFUNCS (TIMERx_EXTCTL[4]) bit is 0, and a transition on TMx_EXT (x= 0~3) pin or LIRC matched the CAPEDGE (TIMERx_EXTCTL[2:1]) setting, CAPIF (TIMERx_EINTSTS[0]) will set to 1 and the current timer counter value CNT (TIMERx_CNT[23:0]) will be auto-loaded into this CAPDAT field.
     * @var TIMER_T::EXTCTL
     * Offset: 0x14  Timer External Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CNTPHASE  |Timer External Count Phase
     * |        |          |This bit indicates the detection phase of external counting pin TMx (x= 0~3).
     * |        |          |0 = A falling edge of external counting pin will be counted.
     * |        |          |1 = A rising edge of external counting pin will be counted.
     * |[2:1]   |CAPEDGE   |Timer External Capture Pin Edge Detect
     * |        |          |00 = A Falling edge on TMx_EXT (x= 0~3) pin or LIRC will be detected.
     * |        |          |01 = A Rising edge on TMx_EXT (x= 0~3) pin or LIRC will be detected.
     * |        |          |10 = Either Rising or Falling edge on TMx_EXT (x= 0~3) pin or LIRC will be detected.
     * |        |          |11 = Reserved.
     * |[3]     |CAPEN     |Timer Capture Enable Bit
     * |        |          |This bit enables the capture input function.
     * |        |          |0 = Capture source Disabled.
     * |        |          |1 = Capture source Enabled.
     * |[4]     |CAPFUNCS  |Capture Function Selection
     * |        |          |0 = Capture Mode Enabled.
     * |        |          |1 = Capture and Reset Mode Enabled.
     * |        |          |Note1: When CAPFUNCS is 0, transition on TMx_EXT (x= 0~3) pin or LIRC is using to save current 24-bit timer counter value (CNT value) to CAPDAT field.
     * |        |          |Note2: When CAPFUNCS is 1, transition on TMx_EXT (x= 0~3) pin or LIRC is using to save current 24-bit timer counter value (CNT value) to CAPDAT field then CNT value will be reset immediately.
     * |[5]     |CAPIEN    |Timer External Capture Interrupt Enable Bit
     * |        |          |0 = TMx_EXT (x= 0~3) pin or LIRC detection Interrupt Disabled.
     * |        |          |1 = TMx_EXT (x= 0~3) pin or LIRC detection Interrupt Enabled.
     * |        |          |Note: CAPIEN is used to enable timer capture interrupt.
     * |        |          |If CAPIEN enabled, timer will rise an interrupt when CAPIF (TIMERx_EINTSTS[0]) is 1.
     * |        |          |For example, while CAPIEN = 1, CAPEN = 1, and CAPEDGE = 00, a 1 to 0 transition on the TMx_EXT pin (x= 0~3) pin or LIRC will cause the CAPIF to be set then the interrupt signal is generated and sent to NVIC to inform CPU.
     * |[6]     |CAPDBEN   |Timer External Capture Pin De-bounce Enable Bit
     * |        |          |0 = TMx_EXT (x= 0~3) pin de-bounce Disabled.
     * |        |          |1 = TMx_EXT (x= 0~3) pin de-bounce Enabled.
     * |        |          |Note: If this bit is enabled, the edge detection of TMx_EXT pin output is detected with de-bounce circuit.
     * |[7]     |CNTDBEN   |Timer Counter Pin De-bounce Enable Bit
     * |        |          |0 = TMx (x= 0~3) pin de-bounce Disabled.
     * |        |          |1 = TMx (x= 0~3) pin de-bounce Enabled.
     * |        |          |Note: If this bit is enabled, the edge detection of TMx pin is detected with de-bounce circuit.
     * @var TIMER_T::EINTSTS
     * Offset: 0x18  Timer0 External Interrupt Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CAPIF     |Timer Capture Interrupt Flag
     * |        |          |This bit indicates the timer capture interrupt flag status.
     * |        |          |0 = TMx_EXT (x= 0~3) pin or LIRC capture interrupt did not occur.
     * |        |          |1 = TMx_EXT (x= 0~3) pin or LIRC capture interrupt occurred.
     * |        |          |Note1: This bit is cleared by writing 1 to it.
     * |        |          |Note2: When CAPEN (TIMERx_EXTCTL[3]) bit is set, CAPFUNCS (TIMERx_EXTCTL[4]) bit is 0, and a transition on TMx_EXT (x= 0~3) pin LIRC matched the CAPEDGE (TIMERx_EXTCTL[2:1]) setting, this bit will set to 1 by hardware.
     * |        |          |Note3: There is a new incoming capture event detected before CPU clearing the CAPIF status.
     * |        |          |If the above condition occurred, the Timer will keep register TIMERx_CAP unchanged and drop the new capture value.
     */

    __IO uint32_t CTL;                   /*!< [0x0000] Timer Control Register                                           */
    __IO uint32_t CMP;                   /*!< [0x0004] Timer Comparator Register                                        */
    __IO uint32_t INTSTS;                /*!< [0x0008] Timer Interrupt Status Register                                  */
    __IO uint32_t CNT;                   /*!< [0x000c] Timer Data Register                                              */
    __I  uint32_t CAP;                   /*!< [0x0010] Timer Capture Data Register                                      */
    __IO uint32_t EXTCTL;                /*!< [0x0014] Timer External Control Register                                  */
    __IO uint32_t EINTSTS;               /*!< [0x0018] Timer External Interrupt Status Register                         */

} TIMER_T;

/**
    @addtogroup TIMER_CONST TIMER Bit Field Definition
    Constant Definitions for TIMER Controller
    @{
*/

#define TIMER_CTL_PSC_Pos                (0)                                               /*!< TIMER_T::CTL: PSC Position             */
#define TIMER_CTL_PSC_Msk                (0xfful << TIMER_CTL_PSC_Pos)                     /*!< TIMER_T::CTL: PSC Mask                 */

#define TIMER_CTL_TRGPDMA_Pos            (8)                                               /*!< TIMER_T::CTL: TRGPDMA Position             */
#define TIMER_CTL_TRGPDMA_Msk            (0x1ul << TIMER_CTL_TRGPDMA_Pos)                  /*!< TIMER_T::CTL: TRGPDMA Mask                 */

#define TIMER_CTL_TRGBPWM23_Pos          (9)                                               /*!< TIMER_T::CTL: TRGBPWM23 Position             */
#define TIMER_CTL_TRGBPWM23_Msk          (0x1ul << TIMER_CTL_TRGBPWM23_Pos)                /*!< TIMER_T::CTL: TRGBPWM23 Mask                 */

#define TIMER_CTL_INTRGEN_Pos            (10)                                              /*!< TIMER_T::CTL: INTRGEN Position         */
#define TIMER_CTL_INTRGEN_Msk            (0x1ul << TIMER_CTL_INTRGEN_Pos)                  /*!< TIMER_T::CTL: INTRGEN Mask             */

#define TIMER_CTL_CAPSRC_Pos             (16)                                              /*!< TIMER_T::CTL: CAPSRC Position          */
#define TIMER_CTL_CAPSRC_Msk             (0x1ul << TIMER_CTL_CAPSRC_Pos)                   /*!< TIMER_T::CTL: CAPSRC Mask              */

#define TIMER_CTL_TRGSSEL_Pos            (18)                                              /*!< TIMER_T::CTL: TRGSSEL Position          */
#define TIMER_CTL_TRGSSEL_Msk            (0x1ul << TIMER_CTL_TRGSSEL_Pos)                  /*!< TIMER_T::CTL: TRGSSEL Mask              */

#define TIMER_CTL_TRGBPWM01_Pos          (19)                                              /*!< TIMER_T::CTL: TRGBPWM01 Position             */
#define TIMER_CTL_TRGBPWM01_Msk          (0x1ul << TIMER_CTL_TRGBPWM01_Pos)                /*!< TIMER_T::CTL: TRGBPWM01 Mask                 */

#define TIMER_CTL_TRGADC_Pos             (21)                                              /*!< TIMER_T::CTL: TRGADC Position             */
#define TIMER_CTL_TRGADC_Msk             (0x1ul << TIMER_CTL_TRGADC_Pos)                   /*!< TIMER_T::CTL: TRGADC Mask                 */

#define TIMER_CTL_TGLPINSEL_Pos          (22)                                              /*!< TIMER_T::CTL: TGLPINSEL Position       */
#define TIMER_CTL_TGLPINSEL_Msk          (0x1ul << TIMER_CTL_TGLPINSEL_Pos)                /*!< TIMER_T::CTL: TGLPINSEL Mask           */

#define TIMER_CTL_WKEN_Pos               (23)                                              /*!< TIMER_T::CTL: WKEN Position            */
#define TIMER_CTL_WKEN_Msk               (0x1ul << TIMER_CTL_WKEN_Pos)                     /*!< TIMER_T::CTL: WKEN Mask                */

#define TIMER_CTL_EXTCNTEN_Pos           (24)                                              /*!< TIMER_T::CTL: EXTCNTEN Position        */
#define TIMER_CTL_EXTCNTEN_Msk           (0x1ul << TIMER_CTL_EXTCNTEN_Pos)                 /*!< TIMER_T::CTL: EXTCNTEN Mask            */

#define TIMER_CTL_ACTSTS_Pos             (25)                                              /*!< TIMER_T::CTL: ACTSTS Position          */
#define TIMER_CTL_ACTSTS_Msk             (0x1ul << TIMER_CTL_ACTSTS_Pos)                   /*!< TIMER_T::CTL: ACTSTS Mask              */

#define TIMER_CTL_RSTCNT_Pos             (26)                                              /*!< TIMER_T::CTL: RSTCNT Position          */
#define TIMER_CTL_RSTCNT_Msk             (0x1ul << TIMER_CTL_RSTCNT_Pos)                   /*!< TIMER_T::CTL: RSTCNT Mask              */

#define TIMER_CTL_OPMODE_Pos             (27)                                              /*!< TIMER_T::CTL: OPMODE Position          */
#define TIMER_CTL_OPMODE_Msk             (0x3ul << TIMER_CTL_OPMODE_Pos)                   /*!< TIMER_T::CTL: OPMODE Mask              */

#define TIMER_CTL_INTEN_Pos              (29)                                              /*!< TIMER_T::CTL: INTEN Position           */
#define TIMER_CTL_INTEN_Msk              (0x1ul << TIMER_CTL_INTEN_Pos)                    /*!< TIMER_T::CTL: INTEN Mask               */

#define TIMER_CTL_CNTEN_Pos              (30)                                              /*!< TIMER_T::CTL: CNTEN Position           */
#define TIMER_CTL_CNTEN_Msk              (0x1ul << TIMER_CTL_CNTEN_Pos)                    /*!< TIMER_T::CTL: CNTEN Mask               */

#define TIMER_CTL_ICEDEBUG_Pos           (31)                                              /*!< TIMER_T::CTL: ICEDEBUG Position        */
#define TIMER_CTL_ICEDEBUG_Msk           (0x1ul << TIMER_CTL_ICEDEBUG_Pos)                 /*!< TIMER_T::CTL: ICEDEBUG Mask            */

#define TIMER_CMP_CMPDAT_Pos             (0)                                               /*!< TIMER_T::CMP: CMPDAT Position          */
#define TIMER_CMP_CMPDAT_Msk             (0xfffffful << TIMER_CMP_CMPDAT_Pos)              /*!< TIMER_T::CMP: CMPDAT Mask              */

#define TIMER_INTSTS_TIF_Pos             (0)                                               /*!< TIMER_T::INTSTS: TIF Position          */
#define TIMER_INTSTS_TIF_Msk             (0x1ul << TIMER_INTSTS_TIF_Pos)                   /*!< TIMER_T::INTSTS: TIF Mask              */

#define TIMER_INTSTS_TWKF_Pos            (1)                                               /*!< TIMER_T::INTSTS: TWKF Position         */
#define TIMER_INTSTS_TWKF_Msk            (0x1ul << TIMER_INTSTS_TWKF_Pos)                  /*!< TIMER_T::INTSTS: TWKF Mask             */

#define TIMER_CNT_CNT_Pos                (0)                                               /*!< TIMER_T::CNT: CNT Position             */
#define TIMER_CNT_CNT_Msk                (0xfffffful << TIMER_CNT_CNT_Pos)                 /*!< TIMER_T::CNT: CNT Mask                 */

#define TIMER_CAP_CAPDAT_Pos             (0)                                               /*!< TIMER_T::CAP: CAPDAT Position          */
#define TIMER_CAP_CAPDAT_Msk             (0xfffffful << TIMER_CAP_CAPDAT_Pos)              /*!< TIMER_T::CAP: CAPDAT Mask              */

#define TIMER_EXTCTL_CNTPHASE_Pos        (0)                                               /*!< TIMER_T::EXTCTL: CNTPHASE Position     */
#define TIMER_EXTCTL_CNTPHASE_Msk        (0x1ul << TIMER_EXTCTL_CNTPHASE_Pos)              /*!< TIMER_T::EXTCTL: CNTPHASE Mask         */

#define TIMER_EXTCTL_CAPEDGE_Pos         (1)                                               /*!< TIMER_T::EXTCTL: CAPEDGE Position      */
#define TIMER_EXTCTL_CAPEDGE_Msk         (0x3ul << TIMER_EXTCTL_CAPEDGE_Pos)               /*!< TIMER_T::EXTCTL: CAPEDGE Mask          */

#define TIMER_EXTCTL_CAPEN_Pos           (3)                                               /*!< TIMER_T::EXTCTL: CAPEN Position        */
#define TIMER_EXTCTL_CAPEN_Msk           (0x1ul << TIMER_EXTCTL_CAPEN_Pos)                 /*!< TIMER_T::EXTCTL: CAPEN Mask            */

#define TIMER_EXTCTL_CAPFUNCS_Pos        (4)                                               /*!< TIMER_T::EXTCTL: CAPFUNCS Position     */
#define TIMER_EXTCTL_CAPFUNCS_Msk        (0x1ul << TIMER_EXTCTL_CAPFUNCS_Pos)              /*!< TIMER_T::EXTCTL: CAPFUNCS Mask         */

#define TIMER_EXTCTL_CAPIEN_Pos          (5)                                               /*!< TIMER_T::EXTCTL: CAPIEN Position       */
#define TIMER_EXTCTL_CAPIEN_Msk          (0x1ul << TIMER_EXTCTL_CAPIEN_Pos)                /*!< TIMER_T::EXTCTL: CAPIEN Mask           */

#define TIMER_EXTCTL_CAPDBEN_Pos         (6)                                               /*!< TIMER_T::EXTCTL: CAPDBEN Position      */
#define TIMER_EXTCTL_CAPDBEN_Msk         (0x1ul << TIMER_EXTCTL_CAPDBEN_Pos)               /*!< TIMER_T::EXTCTL: CAPDBEN Mask          */

#define TIMER_EXTCTL_CNTDBEN_Pos         (7)                                               /*!< TIMER_T::EXTCTL: CNTDBEN Position      */
#define TIMER_EXTCTL_CNTDBEN_Msk         (0x1ul << TIMER_EXTCTL_CNTDBEN_Pos)               /*!< TIMER_T::EXTCTL: CNTDBEN Mask          */

#define TIMER_EINTSTS_CAPIF_Pos          (0)                                               /*!< TIMER_T::EINTSTS: CAPIF Position       */
#define TIMER_EINTSTS_CAPIF_Msk          (0x1ul << TIMER_EINTSTS_CAPIF_Pos)                /*!< TIMER_T::EINTSTS: CAPIF Mask           */

/**@}*/ /* TIMER_CONST */
/**@}*/ /* end of TIMER register group */




/*---------------------- Universal Asynchronous Receiver/Transmitter Controller -------------------------*/
/**
    @addtogroup UART Universal Asynchronous Receiver/Transmitter Controller(UART)
    Memory Mapped Structure for UART Controller
    @{
*/

typedef struct
{


    /**
     * @var UART_T::DAT
     * Offset: 0x00  UART Receive/Transmit Buffer Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |DAT       |Data Receivinge/Transmit Buffer
     * |        |          |Write Operation:
     * |        |          |By writing one byte to this register, the data byte will be stored in transmitter FIFO.
     * |        |          |The UART Controller will send out the data stored in transmitter FIFO top location through the UART_TXD.
     * |        |          |Read Operation:
     * |        |          |By reading this register, the UART controller will return an 8-bit data received from receiver FIFO.
     * |[8]     |PARITY    |Parity Bit Receive/Transmit Buffer
     * |        |          |Write Operation:
     * |        |          |By writing to this bit, the parity bit will be stored in transmitter FIFO.
     * |        |          |If PBE (UART_LINE[3]) and PSS (UART_LINE[7]) are set, the UART controller will send out this bit follow the DAT (UART_DAT[7:0]) through the UART_TXD.
     * |        |          |Read Operation:
     * |        |          |If PBE (UART_LINE[3]) and PSS (UART_LINE[7]) are enabled, the parity bit can be read by this bit.
     * |        |          |Note: This bit has effect only when PBE (UART_LINE[3]) and PSS (UART_LINE[7]) are set.
     * @var UART_T::INTEN
     * Offset: 0x04  UART Interrupt Enable Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |RDAIEN    |Receive Data Available Interrupt Enable Bit
     * |        |          |0 = Receive data available interrupt Disabled.
     * |        |          |1 = Receive data available interrupt Enabled.
     * |[1]     |THREIEN   |Transmit Holding Register Empty Interrupt Enable Bit
     * |        |          |0 = Transmit holding register empty interrupt Disabled.
     * |        |          |1 = Transmit holding register empty interrupt Enabled.
     * |[2]     |RLSIEN    |Receive Line Status Interrupt Enable Bit
     * |        |          |0 = Receive Line Status interrupt Disabled.
     * |        |          |1 = Receive Line Status interrupt Enabled.
     * |[3]     |MODEMIEN  |Modem Status Interrupt Enable Bit
     * |        |          |0 = Modem status interrupt Disabled.
     * |        |          |1 = Modem status interrupt Enabled.
     * |[4]     |RXTOIEN   |RX Time-out Interrupt Enable Bit
     * |        |          |0 = RX time-out interrupt Disabled.
     * |        |          |1 = RX time-out interrupt Enabled.
     * |[5]     |BUFERRIEN |Buffer Error Interrupt Enable Bit
     * |        |          |0 = Buffer error interrupt Disabled.
     * |        |          |1 = Buffer error interrupt Enabled.
     * |[6]     |WKIEN     |Wake-up Interrupt Enable Bit
     * |        |          |0 = Wake-up Interrupt Disabled.
     * |        |          |1 = Wake-up Interrupt Enabled.
     * |[11]    |TOCNTEN   |Receive Buffer Time-out Counter Enable Bit
     * |        |          |0 = Receive Buffer Time-out counter Disabled.
     * |        |          |1 = Receive Buffer Time-out counter Enabled.
     * |[12]    |ATORTSEN  |nRTS Auto-flow Control Enable Bit
     * |        |          |0 = nRTS auto-flow control Disabled.
     * |        |          |1 = nRTS auto-flow control Enabled.
     * |        |          |Note: When nRTS auto-flow is enabled, if the number of bytes in the RX FIFO equals the RTSTRGLV (UART_FIFO[19:16]), the UART will de-assert nRTS signal.
     * |[13]    |ATOCTSEN  |nCTS Auto-flow Control Enable Bit
     * |        |          |0 = nCTS auto-flow control Disabled.
     * |        |          |1 = nCTS auto-flow control Enabled.
     * |        |          |Note: When nCTS auto-flow is enabled, the UART will send data to external device if nCTS input assert (UART will not send data to device until nCTS is asserted).
     * |[14]    |TXPDMAEN  |TX PDMA Enable Bit
     * |        |          |This bit can enable or disable TX PDMA service.
     * |        |          |0 = TX PDMA Disabled.
     * |        |          |1 = TX PDMA Enabled.
     * |[15]    |RXPDMAEN  |RX PDMA Enable Bit
     * |        |          |This bit can enable or disable RX PDMA service.
     * |        |          |0 = RX PDMA Disabled.
     * |        |          |1 = RX PDMA Enabled.
     * |        |          |Note: If RLSIEN (UART_INTEN[2]) is enabled and HWRLSINT (UART_INTSTS[26]) is set to 1, the RLS (Receive Line Status) Interrupt is caused.
     * |        |          |If RLS interrupt is caused by Break Error Flag BIF(UART_FIFOSTS[6]), Frame Error Flag FEF(UART_FIFO[5]) or Parity Error Flag PEF(UART_FIFOSTS[4]), UART PDMA receive request operation is stop.
     * |        |          |Clear Break Error Flag BIF or Frame Error Flag FEF or Parity Error Flag PEF by writing 1 to corresponding BIF, FEF and PEF to make UART PDMA receive request operation continue.
     * |[18]    |ABRIEN    |Auto-baud Rate Interrupt Enable Bit
     * |        |          |0 = Auto-baud rate interrupt Disabled.
     * |        |          |1 = Auto-baud rate interrupt Enabled.
     * |[22]    |TXENDIEN  |Transmitter Empty Interrupt Enable Bit
     * |        |          |If TXENDIEN (UART_INTEN[22]) is enabled, the Transmitter Empty interrupt TXENDINT (UART_INTSTS[30]) will be generated when TXENDIF (UART_INTSTS[22]) is set (TX FIFO (UART_DAT) is empty and the STOP bit of the last byte has been transmitted).
     * |        |          |0 = Transmitter empty interrupt Disabled.
     * |        |          |1 = Transmitter empty interrupt Enabled.
     * @var UART_T::FIFO
     * Offset: 0x08  UART FIFO Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1]     |RXRST     |RX Field Software Reset
     * |        |          |When RXRST (UART_FIFO[1]) is set, all the byte in the receiver FIFO and RX internal state machine are cleared.
     * |        |          |0 = No effect.
     * |        |          |1 = Reset the RX internal state machine and pointers.
     * |        |          |Note1: This bit will automatically clear at least 3 UART peripheral clock cycles.
     * |        |          |Note2: Before setting this bit, it should wait for the RXIDLE (UART_FIFOSTS[29]) be set.
     * |[2]     |TXRST     |TX Field Software Reset
     * |        |          |When TXRST (UART_FIFO[2]) is set, all the byte in the transmit FIFO and TX internal state machine are cleared.
     * |        |          |0 = No effect.
     * |        |          |1 = Reset the TX internal state machine and pointers.
     * |        |          |Note1: This bit will automatically clear at least 3 UART peripheral clock cycles.
     * |        |          |Note2: Before setting this bit, it should wait for the TXEMPTYF (UART_FIFOSTS[28]) be set.
     * |[7:4]   |RFITL     |RX FIFO Interrupt Trigger Level
     * |        |          |When the number of bytes in the receive FIFO equals the RFITL, the RDAIF (UART_INTSTS[0]) will be set (if RDAIEN (UART_INTEN [0]) enabled, and an interrupt will be generated).
     * |        |          |0000 = RX FIFO Interrupt Trigger Level is 1 byte.
     * |        |          |0001 = RX FIFO Interrupt Trigger Level is 4 bytes.
     * |        |          |0010 = RX FIFO Interrupt Trigger Level is 8 bytes.
     * |        |          |0011 = RX FIFO Interrupt Trigger Level is 14 bytes.
     * |        |          |Others = Reserved.
     * |[8]     |RXOFF     |Receiver Disable Bit
     * |        |          |The receiver is disabled or not (set 1 to disable receiver).
     * |        |          |0 = Receiver Enabled.
     * |        |          |1 = Receiver Disabled.
     * |        |          |Note: This bit is used for RS-485 Normal Multi-drop mode.
     * |        |          |It should be programmed before RS485NMM (UART_ALTCTL [8]) is programmed.
     * |[19:16] |RTSTRGLV  |nRTS Trigger Level for Auto-flow Control Use
     * |        |          |0000 = nRTS Trigger Level is 1 byte.
     * |        |          |0001 = nRTS Trigger Level is 4 bytes.
     * |        |          |0010 = nRTS Trigger Level is 8 bytes.
     * |        |          |0011 = nRTS Trigger Level is 14 bytes.
     * |        |          |Others = Reserved.
     * |        |          |Note: This field is used for auto nRTS flow control.
     * @var UART_T::LINE
     * Offset: 0x0C  UART Line Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1:0]   |WLS       |Word Length Selection
     * |        |          |This field sets UART word length.
     * |        |          |00 = 5 bits.
     * |        |          |01 = 6 bits.
     * |        |          |10 = 7 bits.
     * |        |          |11 = 8 bits.
     * |[2]     |NSB       |Number of STOP Bit
     * |        |          |0 = One STOP bit is generated in the transmitted data.
     * |        |          |1 = When select 5-bit word length, 1.5 STOP bit is generated in the transmitted data.
     * |        |          |When select 6-, 7- and 8-bit word length, 2 STOP bit is generated in the transmitted data.
     * |[3]     |PBE       |Parity Bit Enable Bit
     * |        |          |0 = Parity bit generated Disabled.
     * |        |          |1 = Parity bit generated Enabled.
     * |        |          |Note: Parity bit is generated on each outgoing character and is checked on each incoming data.
     * |[4]     |EPE       |Even Parity Enable Bit
     * |        |          |0 = Odd number of logic 1 is transmitted and checked in each word.
     * |        |          |1 = Even number of logic 1 is transmitted and checked in each word.
     * |        |          |Note: This bit has effect only when PBE (UART_LINE[3]) is set.
     * |[5]     |SPE       |Stick Parity Enable Bit
     * |        |          |0 = Stick parity Disabled.
     * |        |          |1 = Stick parity Enabled.
     * |        |          |Note: If PBE (UART_LINE[3]) and EPE (UART_LINE[4]) are logic 1, the parity bit is transmitted and checked as logic 0.
     * |        |          |If PBE (UART_LINE[3]) is 1 and EPE (UART_LINE[4]) is 0 then the parity bit is transmitted and checked as 1.
     * |[6]     |BCB       |Break Control Bit
     * |        |          |0 = Break Control Disabled.
     * |        |          |1 = Break Control Enabled.
     * |        |          |Note: When this bit is set to logic 1, the transmitted serial data output (TX) is forced to the Spacing State (logic 0).
     * |        |          |This bit acts only on TX line and has no effect on the transmitter logic.
     * |[7]     |PSS       |Parity Bit Source Selection
     * |        |          |The parity bit can be selected to be generated and checked automatically or by software.
     * |        |          |0 = Parity bit is generated by EPE (UART_LINE[4]) and SPE (UART_LINE[5]) setting and checked automatically.
     * |        |          |1 = Parity bit generated and checked by software.
     * |        |          |Note1: This bit has effect only when PBE (UART_LINE[3]) is set.
     * |        |          |Note2: If PSS is 0, the parity bit is transmitted and checked automatically.
     * |        |          |If PSS is 1, the transmitted parity bit value can be determined by writing PARITY (UART_DAT[8]) and the parity bit can be read by reading PARITY (UART_DAT[8]).
     * |[8]     |TXDINV    |TX Data Inverted
     * |        |          |0 = Transmitted data signal inverted Disabled.
     * |        |          |1 = Transmitted data signal inverted Enabled.
     * |        |          |Note1: Before setting this bit, TXRXDIS (UART_FUNCSEL[3]) should be set then waited for TXRXACT (UART_FIFOSTS[31]) is cleared.
     * |        |          |When the configuration is done, cleared TXRXDIS (UART_FUNCSEL[3]) to activate UART controller.
     * |        |          |Note2: This bit is valid when FUNCSEL (UART_FUNCSEL[1:0]) is select UART, LIN or RS485 function.
     * |[9]     |RXDINV    |RX Data Inverted
     * |        |          |0 = Received data signal inverted Disabled.
     * |        |          |1 = Received data signal inverted Enabled.
     * |        |          |Note1: Before setting this bit, TXRXDIS (UART_FUNCSEL[3]) should be set then waited for TXRXACT (UART_FIFOSTS[31]) is cleared.
     * |        |          |When the configuration is done, cleared TXRXDIS (UART_FUNCSEL[3]) to activate UART controller.
     * |        |          |Note2: This bit is valid when FUNCSEL (UART_FUNCSEL[1:0]) is select UART, LIN or RS485 function.
     * @var UART_T::MODEM
     * Offset: 0x10  UART Modem Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1]     |RTS       |nRTS (Request-to-send) Signal Control
     * |        |          |This bit is direct control internal nRTS signal active or not, and then drive the nRTS pin output with RTSACTLV bit configuration.
     * |        |          |0 = nRTS signal is active.
     * |        |          |1 = nRTS signal is inactive.
     * |        |          |Note1: This nRTS signal control bit is not effective when nRTS auto-flow control is enabled in UART function mode.
     * |        |          |Note2: This nRTS signal control bit is not effective when RS-485 auto direction mode (AUD) is enabled in RS-485 function mode.
     * |[9]     |RTSACTLV  |nRTS Pin Active Level
     * |        |          |This bit defines the active level state of nRTS pin output.
     * |        |          |0 = nRTS pin output is high level active.
     * |        |          |1 = nRTS pin output is low level active. (Default)
     * |        |          |Note3: Before setting this bit, TXRXDIS (UART_FUNCSEL[3]) should be set then waited for TXRXACT (UART_FIFOSTS[31]) is cleared.
     * |        |          |When the configuration is done, cleared TXRXDIS (UART_FUNCSEL[3]) to activate UART controller.
     * |[13]    |RTSSTS    |nRTS Pin Status (Read Only)
     * |        |          |This bit mirror from nRTS pin output of voltage logic status.
     * |        |          |0 = nRTS pin output is low level voltage logic state.
     * |        |          |1 = nRTS pin output is high level voltage logic state.
     * @var UART_T::MODEMSTS
     * Offset: 0x14  UART Modem Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CTSDETF   |Detect nCTS State Change Flag
     * |        |          |This bit is set whenever nCTS input has change state, and it will generate Modem interrupt to CPU when MODEMIEN (UART_INTEN [3]) is set to 1.
     * |        |          |0 = nCTS input has not change state.
     * |        |          |1 = nCTS input has change state.
     * |        |          |Note: This bit can be cleared by writing 1 to it.
     * |[4]     |CTSSTS    |nCTS Pin Status (Read Only)
     * |        |          |This bit mirror from nCTS pin input of voltage logic status.
     * |        |          |0 = nCTS pin input is low level voltage logic state.
     * |        |          |1 = nCTS pin input is high level voltage logic state.
     * |        |          |Note: This bit echoes when UART controller peripheral clock is enabled, and nCTS multi-function port is selected.
     * |[8]     |CTSACTLV  |nCTS Pin Active Level
     * |        |          |This bit defines the active level state of nCTS pin input.
     * |        |          |0 = nCTS pin input is high level active.
     * |        |          |1 = nCTS pin input is low level active. (Default)
     * |        |          |Note: Before setting this bit, TXRXDIS (UART_FUNCSEL[3]) should be set then waited for TXRXACT (UART_FIFOSTS[31]) is cleared.
     * |        |          |When the configuration is done, cleared TXRXDIS (UART_FUNCSEL[3]) to activate UART controller.
     * @var UART_T::FIFOSTS
     * Offset: 0x18  UART FIFO Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |RXOVIF    |RX Overflow Error Interrupt Flag
     * |        |          |This bit is set when RX FIFO overflow.
     * |        |          |If the number of bytes of received data is greater than RX_FIFO (UART_DAT) size, 16 bytes, this bit will be set.
     * |        |          |0 = RX FIFO is not overflow.
     * |        |          |1 = RX FIFO is overflow.
     * |        |          |Note: This bit can be cleared by writing 1 to it.
     * |[1]     |ABRDIF    |Auto-baud Rate Detect Interrupt Flag
     * |        |          |This bit is set to logic 1 when auto-baud rate detect function is finished.
     * |        |          |0 = Auto-baud rate detect function is not finished.
     * |        |          |1 = Auto-baud rate detect function is finished.
     * |        |          |Note: This bit can be cleared by writing 1 to it.
     * |[2]     |ABRDTOIF  |Auto-baud Rate Detect Time-out Interrupt Flag
     * |        |          |This bit is set to logic 1 in Auto-baud Rate Detect mode when the baud rate counter is overflow.
     * |        |          |0 = Auto-baud rate counter is underflow.
     * |        |          |1 = Auto-baud rate counter is overflow.
     * |        |          |Note: This bit can be cleared by writing 1 to it.
     * |[3]     |ADDRDETF  |RS-485 Address Byte Detect Flag
     * |        |          |0 = Receiver detects a data that is not an address bit (bit 9 = 1).
     * |        |          |1 = Receiver detects a data that is an address bit (bit 9 = 1).
     * |        |          |Note1: This field is used for RS-485 function mode and ADDRDEN (UART_ALTCTL[15]) is set to 1 to enable Address detection mode.
     * |        |          |Note2: This bit can be cleared by writing 1 to it.
     * |[4]     |PEF       |Parity Error Flag
     * |        |          |This bit is set to logic 1 whenever the received character does not have a valid parity bit.
     * |        |          |0 = No parity error is generated.
     * |        |          |1 = Parity error is generated.
     * |        |          |Note: This bit can be cleared by writing 1 to it.
     * |[5]     |FEF       |Framing Error Flag
     * |        |          |This bit is set to logic 1 whenever the received character does not have a valid stop bit (that is, the stop bit following the last data bit or parity bit is detected as logic 0).
     * |        |          |0 = No framing error is generated.
     * |        |          |1 = Framing error is generated.
     * |        |          |Note: This bit can be cleared by writing 1 to it.
     * |[6]     |BIF       |Break Interrupt Flag
     * |        |          |This bit is set to logic 1 whenever the received data input (RX) is held in the spacing state (logic 0) for longer than a full word transmission time (that is, the total time of start bit + data bits + parity + stop bits).
     * |        |          |0 = No Break interrupt is generated.
     * |        |          |1 = Break interrupt is generated.
     * |        |          |Note: This bit can be cleared by writing 1 to it.
     * |[13:8]  |RXPTR     |RX FIFO Pointer (Read Only)
     * |        |          |This field indicates the RX FIFO Buffer Pointer.
     * |        |          |When UART receives one byte from external device, RXPTR increases one.
     * |        |          |When one byte of RX FIFO is read by CPU, RXPTR decreases one.
     * |        |          |The Maximum value shown in RXPTR is 15.
     * |        |          |When the using level of RX FIFO Buffer equal to 16, the RXFULL bit is set to 1 and RXPTR will show 0.
     * |        |          |As one byte of RX FIFO is read by CPU, the RXFULL bit is cleared to 0 and RXPTR will show 15.
     * |[14]    |RXEMPTY   |Receiver FIFO Empty (Read Only)
     * |        |          |This bit initiate RX FIFO empty or not.
     * |        |          |0 = RX FIFO is not empty.
     * |        |          |1 = RX FIFO is empty.
     * |        |          |Note: When the last byte of RX FIFO has been read by CPU, hardware sets this bit high.
     * |        |          |It will be cleared when UART receives any new data.
     * |[15]    |RXFULL    |Receiver FIFO Full (Read Only)
     * |        |          |This bit initiates RX FIFO full or not.
     * |        |          |0 = RX FIFO is not full.
     * |        |          |1 = RX FIFO is full.
     * |        |          |Note: This bit is set when the number of usage in RX FIFO Buffer is equal to 16, otherwise it is cleared by hardware.
     * |[21:16] |TXPTR     |TX FIFO Pointer (Read Only)
     * |        |          |This field indicates the TX FIFO Buffer Pointer.
     * |        |          |When CPU writes one byte into UART_DAT, TXPTR increases one.
     * |        |          |When one byte of TX FIFO is transferred to Transmitter Shift Register, TXPTR decreases one.
     * |        |          |The Maximum value shown in TXPTR is 15
     * |        |          |When the using level of TX FIFO Buffer equal to 16, the TXFULL bit is set to 1 and TXPTR will show 0.
     * |        |          |As one byte of TX FIFO is transferred to Transmitter Shift Register, the TXFULL bit is cleared to 0 and TXPTR will show 15.
     * |[22]    |TXEMPTY   |Transmitter FIFO Empty (Read Only)
     * |        |          |This bit indicates TX FIFO empty or not.
     * |        |          |0 = TX FIFO is not empty.
     * |        |          |1 = TX FIFO is empty.
     * |        |          |Note: When the last byte of TX FIFO has been transferred to Transmitter Shift Register, hardware sets this bit high.
     * |        |          |It will be cleared when writing data into UART_DAT (TX FIFO not empty).
     * |[23]    |TXFULL    |Transmitter FIFO Full (Read Only)
     * |        |          |This bit indicates TX FIFO full or not.
     * |        |          |0 = TX FIFO is not full.
     * |        |          |1 = TX FIFO is full.
     * |        |          |Note: This bit is set when the number of usage in TX FIFO Buffer is equal to 16, otherwise it is cleared by hardware.
     * |[24]    |TXOVIF    |TX Overflow Error Interrupt Flag
     * |        |          |If TX FIFO (UART_DAT) is full, an additional write to UART_DAT will cause this bit to logic 1.
     * |        |          |0 = TX FIFO is not overflow.
     * |        |          |1 = TX FIFO is overflow.
     * |        |          |Note: This bit can be cleared by writing 1 to it.
     * |[28]    |TXEMPTYF  |Transmitter Empty Flag (Read Only)
     * |        |          |This bit is set by hardware when TX FIFO (UART_DAT) is empty and the STOP bit of the last byte has been transmitted.
     * |        |          |0 = TX FIFO is not empty or the STOP bit of the last byte has been not transmitted.
     * |        |          |1 = TX FIFO is empty and the STOP bit of the last byte has been transmitted.
     * |        |          |Note: This bit is cleared automatically when TX FIFO is not empty or the last byte transmission has not completed.
     * |[29]    |RXIDLE    |RX Idle Status (Read Only)
     * |        |          |This bit is set by hardware when RX is idle.
     * |        |          |0 = RX is busy.
     * |        |          |1 = RX is idle. (Default)
     * |[31]    |TXRXACT   |TX and RX Active Status (Read Only)
     * |        |          |This bit indicates TX and RX are active or inactive.
     * |        |          |0 = TX and RX are inactive.
     * |        |          |1 = TX and RX are active. (Default)
     * |        |          |Note: When TXRXDIS (UART_FUNCSEL[3]) is set and both TX and RX are in idle state, this bit is cleared.
     * |        |          |The UART controller can not transmit or receive data at this moment. Otherwise this bit is set.
     * @var UART_T::INTSTS
     * Offset: 0x1C  UART Interrupt Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |RDAIF     |Receive Data Available Interrupt Flag (Read Only)
     * |        |          |When the number of bytes in the RX FIFO equals the RFITL then the RDAIF(UART_INTSTS[0]) will be set.
     * |        |          |If RDAIEN (UART_INTEN [0]) is enabled, the RDA interrupt will be generated.
     * |        |          |0 = No RDA interrupt flag is generated.
     * |        |          |1 = RDA interrupt flag is generated.
     * |        |          |Note: This bit is read only and it will be cleared when the number of unread bytes of RX FIFO drops below the threshold level (RFITL(UART_FIFO[7:4]).
     * |[1]     |THREIF    |Transmit Holding Register Empty Interrupt Flag (Read Only)
     * |        |          |This bit is set when the last data of TX FIFO is transferred to Transmitter Shift Register.
     * |        |          |If THREIEN (UART_INTEN[1]) is enabled, the THRE interrupt will be generated.
     * |        |          |0 = No THRE interrupt flag is generated.
     * |        |          |1 = THRE interrupt flag is generated.
     * |        |          |Note: This bit is read only and it will be cleared when writing data into UART_DAT (TX FIFO not empty).
     * |[2]     |RLSIF     |Receive Line Interrupt Flag (Read Only)
     * |        |          |This bit is set when the RX receive data have parity error, frame error or break error (at least one of 3 bits, BIF(UART_FIFOSTS[6]), FEF(UART_FIFOSTS[5]) and PEF(UART_FIFOSTS[4]), is set).
     * |        |          |If RLSIEN (UART_INTEN [2]) is enabled, the RLS interrupt will be generated.
     * |        |          |0 = No RLS interrupt flag is generated.
     * |        |          |1 = RLS interrupt flag is generated.
     * |        |          |Note1: In RS-485 function mode, this field is set include receiver detect and received address byte character (bit9 = 1) bit.
     * |        |          |At the same time, the bit of ADDRDETF (UART_FIFOSTS[3]) is also set.
     * |        |          |Note2: This bit is read only and reset to 0 when all bits of BIF (UART_FIFOSTS[6]), FEF(UART_FIFOSTS[5]) and PEF(UART_FIFOSTS[4]) are cleared.
     * |        |          |Note3: In RS-485 function mode, this bit is read only and reset to 0 when all bits of BIF (UART_FIFOSTS[6]) , FEF(UART_FIFOSTS[5]), and PEF(UART_FIFOSTS[4]) and ADDRDETF (UART_FIFOSTS[3]) are cleared.
     * |[3]     |MODEMIF   |MODEM Interrupt Flag (Read Only)
     * |        |          |This bit is set when the nCTS pin has state change (CTSDETF (UART_MODEMSTS[0]) = 1)
     * |        |          |If MODEMIEN (UART_INTEN [3]) is enabled, the Modem interrupt will be generated.
     * |        |          |0 = No Modem interrupt flag is generated.
     * |        |          |1 = Modem interrupt flag is generated.
     * |        |          |Note: This bit is read only and reset to 0 when bit CTSDETF is cleared by a write 1 on CTSDETF(UART_MODEMSTS[0]).
     * |[4]     |RXTOIF    |RX Time-out Interrupt Flag (Read Only)
     * |        |          |This bit is set when the RX FIFO is not empty and no activities occurred in the RX FIFO and the time-out counter equal to TOIC (UART_TOUT[7:0])
     * |        |          |If RXTOIENTOUTIEN (UART_INTEN [4]) is enabled, the Tout RX time-out interrupt will be generated.
     * |        |          |0 = No RX time-outTime-out interrupt flag is generated.
     * |        |          |1 = RX time-outTime-out interrupt flag is generated.
     * |        |          |Note: This bit is read only and user can read UART_DAT (RX is in active) to clear it.
     * |[5]     |BUFERRIF  |Buffer Error Interrupt Flag (Read Only)
     * |        |          |This bit is set when the TX FIFO or RX FIFO overflows (TXOVIF (UART_FIFOSTS[24]) or RXOVIF (UART_FIFOSTS[0]) is set)
     * |        |          |When BUFERRIF (UART_INTSTS[5]) is set, the transfer is not correct.
     * |        |          |If BUFERRIEN (UART_INTEN [5]) is enabled, the buffer error interrupt will be generated.
     * |        |          |0 = No buffer error interrupt flag is generated.
     * |        |          |1 = Buffer error interrupt flag is generated.
     * |        |          |Note: This bit is cleared if both of RXOVIF(UART_FIFOSTS[0]) and TXOVIF(UART_FIFOSTS[24]) are cleared to 0 by writing 1 to RXOVIF(UART_FIFOSTS[0]) and TXOVIF(UART_FIFOSTS[24]).
     * |[6]     |WKIF      |UART Wake-up Interrupt Flag (Read Only)
     * |        |          |This bit is set when TOUTWKF (UART_WKSTS[4]), RS485WKF (UART_WKSTS[3]), RFRTWKF (UART_WKSTS[2]), DATWKIF (UART_WKSTS[1]) or CTSWKIF(UART_IWKSTS[0]) is set to 1.
     * |        |          |0 = No UART wake-up interrupt flag is generated.
     * |        |          |1 = UART wake-up interrupt flag is generated.
     * |        |          |Note: This bit is cleared if all of TOUTWKF, RS485WKF, RFRTWKF, DATWKF and CTSWKF are cleared to 0 by writing 1 to the corresponding interrupt flag.
     * |[8]     |RDAINT    |Receive Data Available Interrupt Indicator (Read Only)
     * |        |          |This bit is set if RDAIEN (UART_INTEN[0]) and RDAIF (UART_INTSTS[0]) are both set to 1.
     * |        |          |0 = No RDA interrupt is generated.
     * |        |          |1 = RDA interrupt is generated.
     * |[9]     |THREINT   |Transmit Holding Register Empty Interrupt Indicator (Read Only)
     * |        |          |This bit is set if THREIEN (UART_INTEN[1]) and THREIF(UART_INTSTS[1]) are both set to 1.
     * |        |          |0 = No DATETHRE interrupt is generated.
     * |        |          |1 = THREDATE interrupt is generated.
     * |[10]    |RLSINT    |Receive Line Status Interrupt Indicator (Read Only)
     * |        |          |This bit is set if RLSIEN (UART_INTEN[2]) and RLSIF(UART_INTSTS[2]) are both set to 1.
     * |        |          |0 = No RLS interrupt is generated.
     * |        |          |1 = RLS interrupt is generated.
     * |[11]    |MODEMINT  |MODEM Status Interrupt Indicator (Read Only)
     * |        |          |This bit is set if MODEMIEN(UART_INTEN[3]) and MODEMIF(UART_INTSTS[3]) are both set to 1
     * |        |          |0 = No Modem interrupt is generated.
     * |        |          |1 = Modem interrupt is generated..
     * |[12]    |RXTOINT   |TRX Time-out Interrupt Indicator (Read Only)
     * |        |          |This bit is set if RXTOIEN (UART_INTEN[4]) and RXTOIF(UART_INTSTS[4]) are both set to 1.
     * |        |          |0 = No RX time-out interrupt is generated.
     * |        |          |1 = RX time-out interrupt is generated.
     * |[13]    |BUFERRINT |Buffer Error Interrupt Indicator (Read Only)
     * |        |          |This bit is set if BUFERRIEN(UART_INTEN[5]) and BUFERRIF(UART_INTSTS[5]) are both set to 1.
     * |        |          |0 = No buffer error interrupt is generated.
     * |        |          |1 = Buffer error interrupt is generated.
     * |[14]    |WKINT     |UART Wake-up Interrupt Indicator (Read Only)
     * |        |          |This bit is set if WKIEN (UART_INTEN[6]) and WKIF (UART_INTSTS[6]) are both set to 1.
     * |        |          |0 = No UART wake-up interrupt is generated.
     * |        |          |1 = UART wake-up interrupt is generated.
     * |[18]    |HWRLSIF   |PDMA Mode Receive Line Status Flag (Read Only)
     * |        |          |This bit is set when the RX receive data have parity error, frame error or break error (at least one of 3 bits, BIF (UART_FIFOSTS[6]), FEF (UART_FIFOSTS[5]) and PEF (UART_FIFOSTS[4]) is set).
     * |        |          |If RLSIEN (UART_INTEN [2]) is enabled, the RLS interrupt will be generated.
     * |        |          |0 = No RLS interrupt flag is generated in PDMA mode.
     * |        |          |1 = RLS interrupt flag is generated in PDMA mode.
     * |        |          |Note1: In RS-485 function mode, this field include receiver detect any address byte received address byte character (bit9 = 1) bit.
     * |        |          |Note2: In UART function mode, this bit is read only and reset to 0 when all bits of BIF(UART_FIFOSTS[6]) , FEF(UART_FIFOSTS[5]) and PEF(UART_FIFOSTS[4]) are cleared.
     * |        |          |Note3: In RS-485 function mode, this bit is read only and reset to 0 when all bits of BIF(UART_FIFOSTS[6]) , FEF(UART_FIFOSTS[5]), and PEF(UART_FIFOSTS[4]) and ADDRDETF (UART_FIFOSTS[3]) are cleared.
     * |[19]    |HWMODIF   |PDMA Mode MODEM Status Interrupt Flag (Read Only)
     * |        |          |This bit is set when the nCTS pin has state change (CTSDETF (UART_MODEMSTS[0] =1)).
     * |        |          |If MODEMIEN (UART_INTEN [3]) is enabled, the Modem interrupt will be generated.
     * |        |          |0 = No Modem statusinterrupt flag is generated in PDMA mode.
     * |        |          |1 = Modem status interrupt flag is generated in PDMA mode.
     * |        |          |Note: This bit is read only and reset to 0 when the bit CTSDETF (UART_MODEMSTS[0]) is cleared by writing 1 on CTSDETF (UART_MODEMSTS[0]).
     * |[20]    |HWTOIF    |PDMA Mode RX Time-out Interrupt Flag (Read Only)
     * |        |          |This bit is set when the RX FIFO is not empty and no activities occurred in the RX FIFO and the time-out counter equal to TOIC (UART_TOUT[7:0]).
     * |        |          |If RXTOIEN (UART_INTEN [4]) is enabled, the Tout RX time-out interrupt will be generated .
     * |        |          |0 = No RX time-out interrupt flag is generated in PDMA mode.
     * |        |          |1 = RX time-out interrupt flag is generated in PDMA mode.
     * |        |          |Note: This bit is read only and user can read UART_DAT (RX is in active) to clear it.
     * |[21]    |HWBUFEIF  |PDMA Mode Buffer Error Interrupt Flag (Read Only)
     * |        |          |This bit is set when the TX or RX FIFO overflows (TXOVIF (UART_FIFOSTS [24]) or RXOVIF (UART_FIFOSTS[0]) is set). When BUFERRIF (UART_INTSTS[5]) is set, the transfer maybe is not correct.
     * |        |          |If BUFERRIEN (UART_INTEN [5]) is enabled, the buffer error interrupt will be generated.
     * |        |          |0 = No buffer error interrupt flag is generated in PDMA mode.
     * |        |          |1 = Buffer error interrupt flag is generated in PDMA mode.
     * |        |          |Note: This bit is cleared when both TXOVIF (UART_FIFOSTS[24]]) and RXOVIF (UART_FIFOSTS[0]) are cleared.
     * |[22]    |TXENDIF   |Transmitter Empty Interrupt Flag (Read Only)
     * |        |          |This bit is set when TX FIFO (UART_DAT) is empty and the STOP bit of the last byte has been transmitted (TXEMPTYF (UART_FIFOSTS[28]) is set).
     * |        |          |If TXENDIEN (UART_INTEN[22]) is enabled, the Transmitter Empty interrupt will be generated.
     * |        |          |0 = No transmitter empty interrupt flag is generated.
     * |        |          |1 = Transmitter empty interrupt flag is generated.
     * |        |          |Note: This bit is cleared automatically when TX FIFO is not empty or the last byte transmission has not completed.
     * |[26]    |HWRLSINT  |PDMA Mode Receive Line Status Interrupt Indicator (Read Only)
     * |        |          |This bit is set if RLSIEN (UART_INTEN[2]) and HWRLSIF(UART_INTSTS[18]) are both set to 1.
     * |        |          |0 = No RLS interrupt is generated in PDMA mode.
     * |        |          |1 = RLS interrupt is generated in PDMA mode.
     * |[27]    |HWMODINT  |PDMA Mode MODEM Status Interrupt Indicator (Read Only)
     * |        |          |This bit is set if MODEMIEN (UART_INTEN[3]) and HWMODIF(UART_INTSTS[19]) are both set to 1.
     * |        |          |0 = No Modem interrupt is generated in PDMA mode.
     * |        |          |1 = Modem interrupt is generated in PDMA mode.
     * |[28]    |HWTOINT   |PDMA Mode RX Time-out Interrupt Indicator (Read Only)
     * |        |          |This bit is set if RXTOIEN (UART_INTEN[4]) and HWTOIF(UART_INTSTS[20]) are both set to 1.
     * |        |          |0 = No RX time-out interrupt is generated in PDMA mode.
     * |        |          |1 = RX time-out interrupt is generated in PDMA mode.
     * |[29]    |HWBUFEINT |PDMA Mode Buffer Error Interrupt Indicator (Read Only)
     * |        |          |This bit is set if BUFERRIEN (UART_INTEN[5]) and HWBUFEIF (UART_INTSTS[21]) are both set to 1.
     * |        |          |0 = No buffer error interrupt is generated in PDMA mode.
     * |        |          |1 = Buffer error interrupt is generated in PDMA mode.
     * |[30]    |TXENDINT  |Transmitter Empty Interrupt Indicator (Read Only)
     * |        |          |This bit is set if TXENDIEN (UART_INTEN[22]) and TXENDIF(UART_INTSTS[22]) are both set to 1.
     * |        |          |0 = No Transmitter Empty interrupt is generated.
     * |        |          |1 = Transmitter Empty interrupt is generated.
     * |[31]    |ABRINT    |Auto-baud Rate Interrupt Indicator (Read Only)
     * |        |          |This bit is set if ABRIEN (UART_INTEN[18]) and ABRIF (UART_ALTCTL[17]) are both set to 1.
     * |        |          |0 = No Auto-baud Rate interrupt is generated.
     * |        |          |1 = The Auto-baud Rate interrupt is generated.
     * @var UART_T::TOUT
     * Offset: 0x20  UART Time-out Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |TOIC      |Time-out Interrupt Comparator
     * |        |          |The time-out counter resets and starts counting (the counting clock = baud rate) whenever the RX FIFO receives a new data word if time out counter is enabled by setting TOCNTEN (UART_INTEN[11]).
     * |        |          |Once the content of time-out counter is equal to that of time-out interrupt comparator (TOIC (UART_TOUT[7:0])), a receiver time-out interrupt (RXTOINT(UART_INTSTS[12])) is generated if RXTOIEN (UART_INTEN [4]) enabled.
     * |        |          |A new incoming data word or RX FIFO empty will clear RXTOIF (UART_INTSTS[4]).
     * |        |          |In order to avoid receiver time-out interrupt generation immediately during one character is being received, TOIC value should be set between 40 and 255.
     * |        |          |So, for example, if TOIC is set with 40, the time-out interrupt is generated after four characters are not received when 1 stop bit and no parity check is set for UART transfer.
     * |[15:8]  |DLY       |TX Delay Time Value
     * |        |          |This field is used to programming the transfer delay time between the last stop bit and next start bit.
     * |        |          |The unit is bit time.
     * @var UART_T::BAUD
     * Offset: 0x24  UART Baud Rate Divider Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |BRD       |Baud Rate Divider
     * |        |          |The field indicates the baud rate divider. This filed is used in baud rate calculation.
     * |[27:24] |EDIVM1    |Extra Divider for BAUD Rate Mode 1
     * |        |          |This field is used for baud rate calculation in mode 1 and has no effect for baud rate calculation in mode 0 and mode 2.
     * |[28]    |BAUDM0    |BAUD Rate Mode Selection Bit 0
     * |        |          |This bit is baud rate mode selection bit 0.
     * |        |          |UART provides three baud rate calculation modes.
     * |        |          |This bit combines with BAUDM1 (UART_BAUD[29]) to select baud rate calculation mode.
     * |[29]    |BAUDM1    |BAUD Rate Mode Selection Bit 1
     * |        |          |This bit is baud rate mode selection bit 1.
     * |        |          |UART provides three baud rate calculation modes.
     * |        |          |This bit combines with BAUDM0 (UART_BAUD[28]) to select baud rate calculation mode.
     * |        |          |Note: In IrDA mode must be operated in mode 0.
     * @var UART_T::IRDA
     * Offset: 0x28  UART IrDA Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1]     |TXEN      |IrDA Receiver/Transmitter Selection Enable Bit
     * |        |          |0 = IrDA Transmitter Disabled and Receiver Enabled. (Default)
     * |        |          |1 = IrDA Transmitter Enabled and Receiver Disabled.
     * |        |          |Note: In IrDA mode, the BAUDM1 (UART_BAUD [29]) register must be disabled, the baud equation must be Clock / (16 * (BRD + 2)).
     * |[5]     |TXINV     |IrDA Inverse Transmitting Output Signal
     * |        |          |0 = None inverse transmitting signal. (Default).
     * |        |          |1 = Inverse transmitting output signal.
     * |        |          |Note1: Before setting this bit, TXRXDIS (UART_FUNCSEL[3]) should be set then waited for TXRXACT (UART_FIFOSTS[31]) is cleared.
     * |        |          |When the configuration is done, cleared TXRXDIS (UART_FUNCSEL[3]) to activate UART controller.
     * |        |          |Note2: This bit is valid when FUNCSEL (UART_FUNCSEL[1:0]) is select IrDA function.
     * |[6]     |RXINV     |IrDA Inverse Receive Input Signal
     * |        |          |0 = None inverse receiving input signal.
     * |        |          |1 = Inverse receiving input signal. (Default)
     * |        |          |Note1: Before setting this bit, TXRXDIS (UART_FUNCSEL[3]) should be set then waited for TXRXACT (UART_FIFOSTS[31]) is cleared.
     * |        |          |When the configuration is done, cleared TXRXDIS (UART_FUNCSEL[3]) to activate UART controller.
     * |        |          |Note2: This bit is valid when FUNCSEL (UART_FUNCSEL[1:0]) is select IrDA function.
     * @var UART_T::ALTCTL
     * Offset: 0x2C  UART Alternate Control/Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[8]     |RS485NMM  |RS-485 Normal Multi-drop Operation Mode (NMM)
     * |        |          |0 = RS-485 Normal Multi-drop Operation mode (NMM) Disabled.
     * |        |          |1 = RS-485 Normal Multi-drop Operation mode (NMM) Enabled.
     * |        |          |Note: It cannot be active with RS-485_AAD operation mode.
     * |[9]     |RS485AAD  |RS-485 Auto Address Detection Operation Mode (AAD)
     * |        |          |0 = RS-485 Auto Address Detection Operation mode (AAD) Disabled.
     * |        |          |1 = RS-485 Auto Address Detection Operation mode (AAD) Enabled.
     * |        |          |Note: It cannot be active with RS-485_NMM operation mode.
     * |[10]    |RS485AUD  |RS-485 Auto Direction Function (AUD)
     * |        |          |0 = RS-485 Auto Direction Operation function (AUD) Disabled.
     * |        |          |1 = RS-485 Auto Direction Operation function (AUD) Enabled.
     * |        |          |Note: It can be active with RS-485_AAD or RS-485_NMM operation mode.
     * |[15]    |ADDRDEN   |RS-485 Address Detection Enable Bit
     * |        |          |This bit is used to enable RS-485 Address Detection mode.
     * |        |          |0 = Address detection mode Disabled.
     * |        |          |1 = Address detection mode Enabled.
     * |        |          |Note: This bit is used for RS-485 any operation mode.
     * |[17]    |ABRIF     |Auto-baud Rate Interrupt Flag (Read Only)
     * |        |          |This bit is set when auto-baud rate detection function finished or the auto-baud rate counter was overflow and if ABRIEN(UART_INTEN [18]) is set then the auto-baud rate interrupt will be generated.
     * |        |          |0 = No auto-baud rate interrupt flag is generated.
     * |        |          |1 = Auto-baud rate interrupt flag is generated.
     * |        |          |Note: This bit can be cleared by writing 1 to ABRDTOIF (UART_FIFOSTS[2]) and ABRDIF(UART_FIFOSTS[1]).
     * |[18]    |ABRDEN    |Auto-baud Rate Detect Enable Bit
     * |        |          |0 = Auto-baud rate detect function Disabled.
     * |        |          |1 = Auto-baud rate detect function Enabled.
     * |        |          |Note : This bit is cleared automatically after auto-baud detection is finished.
     * |[20:19] |ABRDBITS  |Auto-baud Rate Detect Bit Length
     * |        |          |00 = 1-bit time from Start bit to the 1st rising edge. The input pattern shall be 0x01.
     * |        |          |01 = 2-bit time from Start bit to the 1st rising edge. The input pattern shall be 0x02.
     * |        |          |10 = 4-bit time from Start bit to the 1st rising edge. The input pattern shall be 0x08.
     * |        |          |11 = 8-bit time from Start bit to the 1st rising edge. The input pattern shall be 0x80.
     * |        |          |Note : The calculation of bit number includes the START bit.
     * |[31:24] |ADDRMV    |Address Match Value
     * |        |          |This field contains the RS-485 address match values.
     * |        |          |Note: This field is used for RS-485 auto address detection mode.
     * @var UART_T::FUNCSEL
     * Offset: 0x30  UART Function Select Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1:0]   |FUNCSEL   |Function Select
     * |        |          |00 = UART function.
     * |        |          |01 = Reserved.
     * |        |          |10 = IrDA function.
     * |        |          |11 = RS-485 function.
     * |[3]     |TXRXDIS   |TX and RX Disable Bit
     * |        |          |Setting this bit can disable TX and RX.
     * |        |          |0 = TX and RX Enabled.
     * |        |          |1 = TX and RX Disabled.
     * |        |          |Note: The TX and RX will not disable immediately when this bit is set.
     * |        |          |The TX and RX compelet current task before disable TX and RX.
     * |        |          |When TX and RX disable, the TXRXACT (UART_FIFOSTS[31]) is cleared.
     * |[6]     |DGE       |Deglitch Enable Bit
     * |        |          |0 = Deglitch Disabled.
     * |        |          |1 = Deglitch Enabled.
     * |        |          |Note: When this bit is set to logic 1, any pulse width less than about 300 ns will be considered a glitch and will be removed in the serial data input (RX).
     * |        |          |This bit acts only on RX line and has no effect on the transmitter logic.
     * @var UART_T::BRCOMP
     * Offset: 0x3C  UART Baud Rate Compensation Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[8:0]   |BRCOMP    |Baud Rate Compensation Patten
     * |        |          |These 9-bits are used to define the relative bit is compensated or not.
     * |        |          |BRCOMP[7:0] is used to define the compensation of UART_DAT[7:0] and BRCOMP[8] is used to define the parity bit.
     * |[31]    |BRCOMPDEC |Baud Rate Compensation Decrease
     * |        |          |0 = Positive (increase one module clock) compensation for each compensated bit.
     * |        |          |1 = Negative (decrease one module clock) compensation for each compensated bit.
     * @var UART_T::WKCTL
     * Offset: 0x40  UART Wake-up Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |WKCTSEN   |nCTS Wake-up Enable Bit
     * |        |          |0 = nCTS Wake-up system function Disabled.
     * |        |          |1 = nCTS Wake-up system function Enabled, when the system is in Power-down mode, an external nCTS change will wake-up system from Power-down mode.
     * |[1]     |WKDATEN   |Incoming Data Wake-up Enable Bit
     * |        |          |0 = Incoming data wake-up system function Disabled.
     * |        |          |1 = Incoming data wake-up system function Enabled, when the system is in Power-down mode, incoming data will wake-up system from Power-down mode.
     * |[2]     |WKRFRTEN  |Received Data FIFO Reached Threshold Wake-up Enable Bit
     * |        |          |0 = Received Data FIFO reached threshold wake-up system function Disabled.
     * |        |          |1 = Received Data FIFO reached threshold wake-up system function Enabled, when the system is .
     * |        |          |in Power-down mode, Received Data FIFO reached threshold will wake-up system from Power-down mode.
     * |[3]     |WKRS485EN |RS-485 Address Match (AAD Mode) Wake-up Enable Bit
     * |        |          |0 = RS-485 Address Match (AAD mode) wake-up system function Disabled.
     * |        |          |1 = RS-485 Address Match (AAD mode) wake-up system function Enabled, when the system is in Power-down mode, RS-485 Address Match will wake-up system from Power-down mode.
     * |        |          |Note: This bit is used for RS-485 Auto Address Detection (AAD) mode in RS-485 function mode and ADDRDEN (UART_ALTCTL[15]) is set to 1.
     * |[4]     |WKTOUTEN  |Received Data FIFO Reached Threshold Time-out Wake-up Enable Bit
     * |        |          |0 = Received Data FIFO reached threshold time-out wake-up system function Disabled.
     * |        |          |1 = Received Data FIFO reached threshold time-out wake-up system function Enabled, when the system is in Power-down mode, Received Data FIFO reached threshold time-out will wake-up system from Power-down mode.
     * |        |          |Note: It is suggest the function is enabled when the WKRFRTEN (UART_WKCTL[2]) is set to 1.
     * @var UART_T::WKSTS
     * Offset: 0x44  UART Wake-up Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CTSWKF    |nCTS Wake-up Flag
     * |        |          |This bit is set if chip wake-up from power-down state by nCTS wake-up.
     * |        |          |0 = Chip stays in power-down state.
     * |        |          |1 = Chip wake-up from power-down state by nCTS wake-up.
     * |        |          |Note1: If WKCTSEN (UART_WKCTL[0]) is enabled, the nCTS wake-up cause this bit is set to 1.
     * |        |          |Note2: This bit can be cleared by writing 1 to it.
     * |[1]     |DATWKF    |Incoming Data Wake-up Flag
     * |        |          |This bit is set if chip wake-up from power-down state by data wake-up.
     * |        |          |0 = Chip stays in power-down state.
     * |        |          |1 = Chip wake-up from power-down state by Incoming Data wake-up.
     * |        |          |Note1: If WKDATEN (UART_WKCTL[1]) is enabled, the Incoming Data wake-up cause this bit is set to 1.
     * |        |          |Note2: This bit can be cleared by writing 1 to it.
     * |[2]     |RFRTWKF   |Received Data FIFO Reached Threshold Wake-up Flag
     * |        |          |This bit is set if chip wake-up from power-down state by Received Data FIFO reached threshold wake-up.
     * |        |          |0 = Chip stays in power-down state.
     * |        |          |1 = Chip wake-up from power-down state by Received Data FIFO Reached Threshold wake-up.
     * |        |          |Note1: If WKRFRTEN (UART_WKCTL[2]) is enabled, the Received Data FIFO Reached Threshold wake-up cause this bit is set to 1.
     * |        |          |Note2: This bit can be cleared by writing 1 to it.
     * |[3]     |RS485WKF  |RS-485 Address Match (AAD Mode) Wake-up Flag
     * |        |          |This bit is set if chip wake-up from power-down state by RS-485 Address Match (AAD mode).
     * |        |          |0 = Chip stays in power-down state.
     * |        |          |1 = Chip wake-up from power-down state by RS-485 Address Match (AAD mode) wake-up.
     * |        |          |Note1: If WKRS485EN (UART_WKCTL[3]) is enabled, the RS-485 Address Match (AAD mode) wake-up cause this bit is set to 1.
     * |        |          |Note2: This bit can be cleared by writing 1 to it.
     * |[4]     |TOUTWKF   |Received Data FIFO Threshold Time-out Wake-up Flag
     * |        |          |This bit is set if chip wake-up from power-down state by Received Data FIFO Threshold Time-out wake-up.
     * |        |          |0 = Chip stays in power-down state.
     * |        |          |1 = Chip wake-up from power-down state by Received Data FIFO reached threshold time-out wake-up.
     * |        |          |Note1: If WKTOUTEN (UART_WKCTL[4]) is enabled, the Received Data FIFO reached threshold time-out wake-up cause this bit is set to 1.
     * |        |          |Note2: This bit can be cleared by writing 1 to it.
     * @var UART_T::DWKCOMP
     * Offset: 0x48  UART Imcoming Data Wake-up Compensation Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |STCOMP    |Start Bit Compensation Value
     * |        |          |These bits field indicate how many clock cycle selected by UART_CLK do the UART controller can get the 1st bit (start bit) when the device is wake-up from power-down mode.
     * |        |          |Note: It is valid only when WKDATEN (UART_WKCTL[1]) is set.
     */


    __IO uint32_t DAT;                   /*!< [0x0000] UART Receive/Transmit Buffer Register                            */
    __IO uint32_t INTEN;                 /*!< [0x0004] UART Interrupt Enable Register                                   */
    __IO uint32_t FIFO;                  /*!< [0x0008] UART FIFO Control Register                                       */
    __IO uint32_t LINE;                  /*!< [0x000c] UART Line Control Register                                       */
    __IO uint32_t MODEM;                 /*!< [0x0010] UART Modem Control Register                                      */
    __IO uint32_t MODEMSTS;              /*!< [0x0014] UART Modem Status Register                                       */
    __IO uint32_t FIFOSTS;               /*!< [0x0018] UART FIFO Status Register                                        */
    __IO uint32_t INTSTS;                /*!< [0x001c] UART Interrupt Status Register                                   */
    __IO uint32_t TOUT;                  /*!< [0x0020] UART Time-out Register                                           */
    __IO uint32_t BAUD;                  /*!< [0x0024] UART Baud Rate Divider Register                                  */
    __IO uint32_t IRDA;                  /*!< [0x0028] UART IrDA Control Register                                       */
    __IO uint32_t ALTCTL;                /*!< [0x002c] UART Alternate Control/Status Register                           */
    __IO uint32_t FUNCSEL;               /*!< [0x0030] UART Function Select Register                                    */
    __I  uint32_t RESERVE0[2];
    __IO uint32_t BRCOMP;                /*!< [0x003c] UART Baud Rate Compensation Register                             */
    __IO uint32_t WKCTL;                 /*!< [0x0040] UART Wake-up Control Register                                    */
    __IO uint32_t WKSTS;                 /*!< [0x0044] UART Wake-up Status Register                                     */
    __IO uint32_t DWKCOMP;               /*!< [0x0048] UART Imcoming Data Wake-up Compensation Register                 */


} UART_T;

/**
    @addtogroup UART_CONST UART Bit Field Definition
    Constant Definitions for UART Controller
    @{
*/

#define UART_DAT_DAT_Pos                 (0)                                               /*!< UART_T::DAT: DAT Position              */
#define UART_DAT_DAT_Msk                 (0xfful << UART_DAT_DAT_Pos)                      /*!< UART_T::DAT: DAT Mask                  */

#define UART_DAT_PARITY_Pos              (8)                                               /*!< UART_T::DAT: PARITY Position           */
#define UART_DAT_PARITY_Msk              (0x1ul << UART_DAT_PARITY_Pos)                    /*!< UART_T::DAT: PARITY Mask               */

#define UART_INTEN_RDAIEN_Pos            (0)                                               /*!< UART_T::INTEN: RDAIEN Position         */
#define UART_INTEN_RDAIEN_Msk            (0x1ul << UART_INTEN_RDAIEN_Pos)                  /*!< UART_T::INTEN: RDAIEN Mask             */

#define UART_INTEN_THREIEN_Pos           (1)                                               /*!< UART_T::INTEN: THREIEN Position        */
#define UART_INTEN_THREIEN_Msk           (0x1ul << UART_INTEN_THREIEN_Pos)                 /*!< UART_T::INTEN: THREIEN Mask            */

#define UART_INTEN_RLSIEN_Pos            (2)                                               /*!< UART_T::INTEN: RLSIEN Position         */
#define UART_INTEN_RLSIEN_Msk            (0x1ul << UART_INTEN_RLSIEN_Pos)                  /*!< UART_T::INTEN: RLSIEN Mask             */

#define UART_INTEN_MODEMIEN_Pos          (3)                                               /*!< UART_T::INTEN: MODEMIEN Position       */
#define UART_INTEN_MODEMIEN_Msk          (0x1ul << UART_INTEN_MODEMIEN_Pos)                /*!< UART_T::INTEN: MODEMIEN Mask           */

#define UART_INTEN_RXTOIEN_Pos           (4)                                               /*!< UART_T::INTEN: RXTOIEN Position        */
#define UART_INTEN_RXTOIEN_Msk           (0x1ul << UART_INTEN_RXTOIEN_Pos)                 /*!< UART_T::INTEN: RXTOIEN Mask            */

#define UART_INTEN_BUFERRIEN_Pos         (5)                                               /*!< UART_T::INTEN: BUFERRIEN Position      */
#define UART_INTEN_BUFERRIEN_Msk         (0x1ul << UART_INTEN_BUFERRIEN_Pos)               /*!< UART_T::INTEN: BUFERRIEN Mask          */

#define UART_INTEN_WKIEN_Pos             (6)                                               /*!< UART_T::INTEN: WKIEN Position          */
#define UART_INTEN_WKIEN_Msk             (0x1ul << UART_INTEN_WKIEN_Pos)                   /*!< UART_T::INTEN: WKIEN Mask              */

#define UART_INTEN_TOCNTEN_Pos           (11)                                              /*!< UART_T::INTEN: TOCNTEN Position        */
#define UART_INTEN_TOCNTEN_Msk           (0x1ul << UART_INTEN_TOCNTEN_Pos)                 /*!< UART_T::INTEN: TOCNTEN Mask            */

#define UART_INTEN_ATORTSEN_Pos          (12)                                              /*!< UART_T::INTEN: ATORTSEN Position       */
#define UART_INTEN_ATORTSEN_Msk          (0x1ul << UART_INTEN_ATORTSEN_Pos)                /*!< UART_T::INTEN: ATORTSEN Mask           */

#define UART_INTEN_ATOCTSEN_Pos          (13)                                              /*!< UART_T::INTEN: ATOCTSEN Position       */
#define UART_INTEN_ATOCTSEN_Msk          (0x1ul << UART_INTEN_ATOCTSEN_Pos)                /*!< UART_T::INTEN: ATOCTSEN Mask           */

#define UART_INTEN_TXPDMAEN_Pos          (14)                                              /*!< UART_T::INTEN: TXPDMAEN Position       */
#define UART_INTEN_TXPDMAEN_Msk          (0x1ul << UART_INTEN_TXPDMAEN_Pos)                /*!< UART_T::INTEN: TXPDMAEN Mask           */

#define UART_INTEN_RXPDMAEN_Pos          (15)                                              /*!< UART_T::INTEN: RXPDMAEN Position       */
#define UART_INTEN_RXPDMAEN_Msk          (0x1ul << UART_INTEN_RXPDMAEN_Pos)                /*!< UART_T::INTEN: RXPDMAEN Mask           */

#define UART_INTEN_ABRIEN_Pos            (18)                                              /*!< UART_T::INTEN: ABRIEN Position         */
#define UART_INTEN_ABRIEN_Msk            (0x1ul << UART_INTEN_ABRIEN_Pos)                  /*!< UART_T::INTEN: ABRIEN Mask             */

#define UART_INTEN_TXENDIEN_Pos          (22)                                              /*!< UART_T::INTEN: TXENDIEN Position       */
#define UART_INTEN_TXENDIEN_Msk          (0x1ul << UART_INTEN_TXENDIEN_Pos)                /*!< UART_T::INTEN: TXENDIEN Mask           */

#define UART_FIFO_RXRST_Pos              (1)                                               /*!< UART_T::FIFO: RXRST Position           */
#define UART_FIFO_RXRST_Msk              (0x1ul << UART_FIFO_RXRST_Pos)                    /*!< UART_T::FIFO: RXRST Mask               */

#define UART_FIFO_TXRST_Pos              (2)                                               /*!< UART_T::FIFO: TXRST Position           */
#define UART_FIFO_TXRST_Msk              (0x1ul << UART_FIFO_TXRST_Pos)                    /*!< UART_T::FIFO: TXRST Mask               */

#define UART_FIFO_RFITL_Pos              (4)                                               /*!< UART_T::FIFO: RFITL Position           */
#define UART_FIFO_RFITL_Msk              (0xful << UART_FIFO_RFITL_Pos)                    /*!< UART_T::FIFO: RFITL Mask               */

#define UART_FIFO_RXOFF_Pos              (8)                                               /*!< UART_T::FIFO: RXOFF Position           */
#define UART_FIFO_RXOFF_Msk              (0x1ul << UART_FIFO_RXOFF_Pos)                    /*!< UART_T::FIFO: RXOFF Mask               */

#define UART_FIFO_RTSTRGLV_Pos           (16)                                              /*!< UART_T::FIFO: RTSTRGLV Position        */
#define UART_FIFO_RTSTRGLV_Msk           (0xful << UART_FIFO_RTSTRGLV_Pos)                 /*!< UART_T::FIFO: RTSTRGLV Mask            */

#define UART_LINE_WLS_Pos                (0)                                               /*!< UART_T::LINE: WLS Position             */
#define UART_LINE_WLS_Msk                (0x3ul << UART_LINE_WLS_Pos)                      /*!< UART_T::LINE: WLS Mask                 */

#define UART_LINE_NSB_Pos                (2)                                               /*!< UART_T::LINE: NSB Position             */
#define UART_LINE_NSB_Msk                (0x1ul << UART_LINE_NSB_Pos)                      /*!< UART_T::LINE: NSB Mask                 */

#define UART_LINE_PBE_Pos                (3)                                               /*!< UART_T::LINE: PBE Position             */
#define UART_LINE_PBE_Msk                (0x1ul << UART_LINE_PBE_Pos)                      /*!< UART_T::LINE: PBE Mask                 */

#define UART_LINE_EPE_Pos                (4)                                               /*!< UART_T::LINE: EPE Position             */
#define UART_LINE_EPE_Msk                (0x1ul << UART_LINE_EPE_Pos)                      /*!< UART_T::LINE: EPE Mask                 */

#define UART_LINE_SPE_Pos                (5)                                               /*!< UART_T::LINE: SPE Position             */
#define UART_LINE_SPE_Msk                (0x1ul << UART_LINE_SPE_Pos)                      /*!< UART_T::LINE: SPE Mask                 */

#define UART_LINE_BCB_Pos                (6)                                               /*!< UART_T::LINE: BCB Position             */
#define UART_LINE_BCB_Msk                (0x1ul << UART_LINE_BCB_Pos)                      /*!< UART_T::LINE: BCB Mask                 */

#define UART_LINE_PSS_Pos                (7)                                               /*!< UART_T::LINE: PSS Position             */
#define UART_LINE_PSS_Msk                (0x1ul << UART_LINE_PSS_Pos)                      /*!< UART_T::LINE: PSS Mask                 */

#define UART_LINE_TXDINV_Pos             (8)                                               /*!< UART_T::LINE: TXDINV Position          */
#define UART_LINE_TXDINV_Msk             (0x1ul << UART_LINE_TXDINV_Pos)                   /*!< UART_T::LINE: TXDINV Mask              */

#define UART_LINE_RXDINV_Pos             (9)                                               /*!< UART_T::LINE: RXDINV Position          */
#define UART_LINE_RXDINV_Msk             (0x1ul << UART_LINE_RXDINV_Pos)                   /*!< UART_T::LINE: RXDINV Mask              */

#define UART_MODEM_RTS_Pos               (1)                                               /*!< UART_T::MODEM: RTS Position            */
#define UART_MODEM_RTS_Msk               (0x1ul << UART_MODEM_RTS_Pos)                     /*!< UART_T::MODEM: RTS Mask                */

#define UART_MODEM_RTSACTLV_Pos          (9)                                               /*!< UART_T::MODEM: RTSACTLV Position       */
#define UART_MODEM_RTSACTLV_Msk          (0x1ul << UART_MODEM_RTSACTLV_Pos)                /*!< UART_T::MODEM: RTSACTLV Mask           */

#define UART_MODEM_RTSSTS_Pos            (13)                                              /*!< UART_T::MODEM: RTSSTS Position         */
#define UART_MODEM_RTSSTS_Msk            (0x1ul << UART_MODEM_RTSSTS_Pos)                  /*!< UART_T::MODEM: RTSSTS Mask             */

#define UART_MODEMSTS_CTSDETF_Pos        (0)                                               /*!< UART_T::MODEMSTS: CTSDETF Position     */
#define UART_MODEMSTS_CTSDETF_Msk        (0x1ul << UART_MODEMSTS_CTSDETF_Pos)              /*!< UART_T::MODEMSTS: CTSDETF Mask         */

#define UART_MODEMSTS_CTSSTS_Pos         (4)                                               /*!< UART_T::MODEMSTS: CTSSTS Position      */
#define UART_MODEMSTS_CTSSTS_Msk         (0x1ul << UART_MODEMSTS_CTSSTS_Pos)               /*!< UART_T::MODEMSTS: CTSSTS Mask          */

#define UART_MODEMSTS_CTSACTLV_Pos       (8)                                               /*!< UART_T::MODEMSTS: CTSACTLV Position    */
#define UART_MODEMSTS_CTSACTLV_Msk       (0x1ul << UART_MODEMSTS_CTSACTLV_Pos)             /*!< UART_T::MODEMSTS: CTSACTLV Mask        */

#define UART_FIFOSTS_RXOVIF_Pos          (0)                                               /*!< UART_T::FIFOSTS: RXOVIF Position       */
#define UART_FIFOSTS_RXOVIF_Msk          (0x1ul << UART_FIFOSTS_RXOVIF_Pos)                /*!< UART_T::FIFOSTS: RXOVIF Mask           */

#define UART_FIFOSTS_ABRDIF_Pos          (1)                                               /*!< UART_T::FIFOSTS: ABRDIF Position       */
#define UART_FIFOSTS_ABRDIF_Msk          (0x1ul << UART_FIFOSTS_ABRDIF_Pos)                /*!< UART_T::FIFOSTS: ABRDIF Mask           */

#define UART_FIFOSTS_ABRDTOIF_Pos        (2)                                               /*!< UART_T::FIFOSTS: ABRDTOIF Position     */
#define UART_FIFOSTS_ABRDTOIF_Msk        (0x1ul << UART_FIFOSTS_ABRDTOIF_Pos)              /*!< UART_T::FIFOSTS: ABRDTOIF Mask         */

#define UART_FIFOSTS_ADDRDETF_Pos        (3)                                               /*!< UART_T::FIFOSTS: ADDRDETF Position     */
#define UART_FIFOSTS_ADDRDETF_Msk        (0x1ul << UART_FIFOSTS_ADDRDETF_Pos)              /*!< UART_T::FIFOSTS: ADDRDETF Mask         */

#define UART_FIFOSTS_PEF_Pos             (4)                                               /*!< UART_T::FIFOSTS: PEF Position          */
#define UART_FIFOSTS_PEF_Msk             (0x1ul << UART_FIFOSTS_PEF_Pos)                   /*!< UART_T::FIFOSTS: PEF Mask              */

#define UART_FIFOSTS_FEF_Pos             (5)                                               /*!< UART_T::FIFOSTS: FEF Position          */
#define UART_FIFOSTS_FEF_Msk             (0x1ul << UART_FIFOSTS_FEF_Pos)                   /*!< UART_T::FIFOSTS: FEF Mask              */

#define UART_FIFOSTS_BIF_Pos             (6)                                               /*!< UART_T::FIFOSTS: BIF Position          */
#define UART_FIFOSTS_BIF_Msk             (0x1ul << UART_FIFOSTS_BIF_Pos)                   /*!< UART_T::FIFOSTS: BIF Mask              */

#define UART_FIFOSTS_RXPTR_Pos           (8)                                               /*!< UART_T::FIFOSTS: RXPTR Position        */
#define UART_FIFOSTS_RXPTR_Msk           (0x3ful << UART_FIFOSTS_RXPTR_Pos)                /*!< UART_T::FIFOSTS: RXPTR Mask            */

#define UART_FIFOSTS_RXEMPTY_Pos         (14)                                              /*!< UART_T::FIFOSTS: RXEMPTY Position      */
#define UART_FIFOSTS_RXEMPTY_Msk         (0x1ul << UART_FIFOSTS_RXEMPTY_Pos)               /*!< UART_T::FIFOSTS: RXEMPTY Mask          */

#define UART_FIFOSTS_RXFULL_Pos          (15)                                              /*!< UART_T::FIFOSTS: RXFULL Position       */
#define UART_FIFOSTS_RXFULL_Msk          (0x1ul << UART_FIFOSTS_RXFULL_Pos)                /*!< UART_T::FIFOSTS: RXFULL Mask           */

#define UART_FIFOSTS_TXPTR_Pos           (16)                                              /*!< UART_T::FIFOSTS: TXPTR Position        */
#define UART_FIFOSTS_TXPTR_Msk           (0x3ful << UART_FIFOSTS_TXPTR_Pos)                /*!< UART_T::FIFOSTS: TXPTR Mask            */

#define UART_FIFOSTS_TXEMPTY_Pos         (22)                                              /*!< UART_T::FIFOSTS: TXEMPTY Position      */
#define UART_FIFOSTS_TXEMPTY_Msk         (0x1ul << UART_FIFOSTS_TXEMPTY_Pos)               /*!< UART_T::FIFOSTS: TXEMPTY Mask          */

#define UART_FIFOSTS_TXFULL_Pos          (23)                                              /*!< UART_T::FIFOSTS: TXFULL Position       */
#define UART_FIFOSTS_TXFULL_Msk          (0x1ul << UART_FIFOSTS_TXFULL_Pos)                /*!< UART_T::FIFOSTS: TXFULL Mask           */

#define UART_FIFOSTS_TXOVIF_Pos          (24)                                              /*!< UART_T::FIFOSTS: TXOVIF Position       */
#define UART_FIFOSTS_TXOVIF_Msk          (0x1ul << UART_FIFOSTS_TXOVIF_Pos)                /*!< UART_T::FIFOSTS: TXOVIF Mask           */

#define UART_FIFOSTS_TXEMPTYF_Pos        (28)                                              /*!< UART_T::FIFOSTS: TXEMPTYF Position     */
#define UART_FIFOSTS_TXEMPTYF_Msk        (0x1ul << UART_FIFOSTS_TXEMPTYF_Pos)              /*!< UART_T::FIFOSTS: TXEMPTYF Mask         */

#define UART_FIFOSTS_RXIDLE_Pos          (29)                                              /*!< UART_T::FIFOSTS: RXIDLE Position       */
#define UART_FIFOSTS_RXIDLE_Msk          (0x1ul << UART_FIFOSTS_RXIDLE_Pos)                /*!< UART_T::FIFOSTS: RXIDLE Mask           */

#define UART_FIFOSTS_TXRXACT_Pos         (31)                                              /*!< UART_T::FIFOSTS: TXRXACT Position      */
#define UART_FIFOSTS_TXRXACT_Msk         (0x1ul << UART_FIFOSTS_TXRXACT_Pos)               /*!< UART_T::FIFOSTS: TXRXACT Mask          */

#define UART_INTSTS_RDAIF_Pos            (0)                                               /*!< UART_T::INTSTS: RDAIF Position         */
#define UART_INTSTS_RDAIF_Msk            (0x1ul << UART_INTSTS_RDAIF_Pos)                  /*!< UART_T::INTSTS: RDAIF Mask             */

#define UART_INTSTS_THREIF_Pos           (1)                                               /*!< UART_T::INTSTS: THREIF Position        */
#define UART_INTSTS_THREIF_Msk           (0x1ul << UART_INTSTS_THREIF_Pos)                 /*!< UART_T::INTSTS: THREIF Mask            */

#define UART_INTSTS_RLSIF_Pos            (2)                                               /*!< UART_T::INTSTS: RLSIF Position         */
#define UART_INTSTS_RLSIF_Msk            (0x1ul << UART_INTSTS_RLSIF_Pos)                  /*!< UART_T::INTSTS: RLSIF Mask             */

#define UART_INTSTS_MODEMIF_Pos          (3)                                               /*!< UART_T::INTSTS: MODEMIF Position       */
#define UART_INTSTS_MODEMIF_Msk          (0x1ul << UART_INTSTS_MODEMIF_Pos)                /*!< UART_T::INTSTS: MODEMIF Mask           */

#define UART_INTSTS_RXTOIF_Pos           (4)                                               /*!< UART_T::INTSTS: RXTOIF Position        */
#define UART_INTSTS_RXTOIF_Msk           (0x1ul << UART_INTSTS_RXTOIF_Pos)                 /*!< UART_T::INTSTS: RXTOIF Mask            */

#define UART_INTSTS_BUFERRIF_Pos         (5)                                               /*!< UART_T::INTSTS: BUFERRIF Position      */
#define UART_INTSTS_BUFERRIF_Msk         (0x1ul << UART_INTSTS_BUFERRIF_Pos)               /*!< UART_T::INTSTS: BUFERRIF Mask          */

#define UART_INTSTS_WKIF_Pos             (6)                                               /*!< UART_T::INTSTS: WKIF Position          */
#define UART_INTSTS_WKIF_Msk             (0x1ul << UART_INTSTS_WKIF_Pos)                   /*!< UART_T::INTSTS: WKIF Mask              */

#define UART_INTSTS_RDAINT_Pos           (8)                                               /*!< UART_T::INTSTS: RDAINT Position        */
#define UART_INTSTS_RDAINT_Msk           (0x1ul << UART_INTSTS_RDAINT_Pos)                 /*!< UART_T::INTSTS: RDAINT Mask            */

#define UART_INTSTS_THREINT_Pos          (9)                                               /*!< UART_T::INTSTS: THREINT Position       */
#define UART_INTSTS_THREINT_Msk          (0x1ul << UART_INTSTS_THREINT_Pos)                /*!< UART_T::INTSTS: THREINT Mask           */

#define UART_INTSTS_RLSINT_Pos           (10)                                              /*!< UART_T::INTSTS: RLSINT Position        */
#define UART_INTSTS_RLSINT_Msk           (0x1ul << UART_INTSTS_RLSINT_Pos)                 /*!< UART_T::INTSTS: RLSINT Mask            */

#define UART_INTSTS_MODEMINT_Pos         (11)                                              /*!< UART_T::INTSTS: MODEMINT Position      */
#define UART_INTSTS_MODEMINT_Msk         (0x1ul << UART_INTSTS_MODEMINT_Pos)               /*!< UART_T::INTSTS: MODEMINT Mask          */

#define UART_INTSTS_RXTOINT_Pos          (12)                                              /*!< UART_T::INTSTS: RXTOINT Position       */
#define UART_INTSTS_RXTOINT_Msk          (0x1ul << UART_INTSTS_RXTOINT_Pos)                /*!< UART_T::INTSTS: RXTOINT Mask           */

#define UART_INTSTS_BUFERRINT_Pos        (13)                                              /*!< UART_T::INTSTS: BUFERRINT Position     */
#define UART_INTSTS_BUFERRINT_Msk        (0x1ul << UART_INTSTS_BUFERRINT_Pos)              /*!< UART_T::INTSTS: BUFERRINT Mask         */

#define UART_INTSTS_WKINT_Pos            (14)                                              /*!< UART_T::INTSTS: WKINT Position         */
#define UART_INTSTS_WKINT_Msk            (0x1ul << UART_INTSTS_WKINT_Pos)                  /*!< UART_T::INTSTS: WKINT Mask             */

#define UART_INTSTS_HWRLSIF_Pos          (18)                                              /*!< UART_T::INTSTS: HWRLSIF Position       */
#define UART_INTSTS_HWRLSIF_Msk          (0x1ul << UART_INTSTS_HWRLSIF_Pos)                /*!< UART_T::INTSTS: HWRLSIF Mask           */

#define UART_INTSTS_HWMODIF_Pos          (19)                                              /*!< UART_T::INTSTS: HWMODIF Position       */
#define UART_INTSTS_HWMODIF_Msk          (0x1ul << UART_INTSTS_HWMODIF_Pos)                /*!< UART_T::INTSTS: HWMODIF Mask           */

#define UART_INTSTS_HWTOIF_Pos           (20)                                              /*!< UART_T::INTSTS: HWTOIF Position        */
#define UART_INTSTS_HWTOIF_Msk           (0x1ul << UART_INTSTS_HWTOIF_Pos)                 /*!< UART_T::INTSTS: HWTOIF Mask            */

#define UART_INTSTS_HWBUFEIF_Pos         (21)                                              /*!< UART_T::INTSTS: HWBUFEIF Position      */
#define UART_INTSTS_HWBUFEIF_Msk         (0x1ul << UART_INTSTS_HWBUFEIF_Pos)               /*!< UART_T::INTSTS: HWBUFEIF Mask          */

#define UART_INTSTS_TXENDIF_Pos          (22)                                              /*!< UART_T::INTSTS: TXENDIF Position       */
#define UART_INTSTS_TXENDIF_Msk          (0x1ul << UART_INTSTS_TXENDIF_Pos)                /*!< UART_T::INTSTS: TXENDIF Mask           */

#define UART_INTSTS_HWRLSINT_Pos         (26)                                              /*!< UART_T::INTSTS: HWRLSINT Position      */
#define UART_INTSTS_HWRLSINT_Msk         (0x1ul << UART_INTSTS_HWRLSINT_Pos)               /*!< UART_T::INTSTS: HWRLSINT Mask          */

#define UART_INTSTS_HWMODINT_Pos         (27)                                              /*!< UART_T::INTSTS: HWMODINT Position      */
#define UART_INTSTS_HWMODINT_Msk         (0x1ul << UART_INTSTS_HWMODINT_Pos)               /*!< UART_T::INTSTS: HWMODINT Mask          */

#define UART_INTSTS_HWTOINT_Pos          (28)                                              /*!< UART_T::INTSTS: HWTOINT Position       */
#define UART_INTSTS_HWTOINT_Msk          (0x1ul << UART_INTSTS_HWTOINT_Pos)                /*!< UART_T::INTSTS: HWTOINT Mask           */

#define UART_INTSTS_HWBUFEINT_Pos        (29)                                              /*!< UART_T::INTSTS: HWBUFEINT Position     */
#define UART_INTSTS_HWBUFEINT_Msk        (0x1ul << UART_INTSTS_HWBUFEINT_Pos)              /*!< UART_T::INTSTS: HWBUFEINT Mask         */

#define UART_INTSTS_TXENDINT_Pos         (30)                                              /*!< UART_T::INTSTS: TXENDINT Position      */
#define UART_INTSTS_TXENDINT_Msk         (0x1ul << UART_INTSTS_TXENDINT_Pos)               /*!< UART_T::INTSTS: TXENDINT Mask          */

#define UART_INTSTS_ABRINT_Pos           (31)                                              /*!< UART_T::INTSTS: ABRINT Position        */
#define UART_INTSTS_ABRINT_Msk           (0x1ul << UART_INTSTS_ABRINT_Pos)                 /*!< UART_T::INTSTS: ABRINT Mask            */

#define UART_TOUT_TOIC_Pos               (0)                                               /*!< UART_T::TOUT: TOIC Position            */
#define UART_TOUT_TOIC_Msk               (0xfful << UART_TOUT_TOIC_Pos)                    /*!< UART_T::TOUT: TOIC Mask                */

#define UART_TOUT_DLY_Pos                (8)                                               /*!< UART_T::TOUT: DLY Position             */
#define UART_TOUT_DLY_Msk                (0xfful << UART_TOUT_DLY_Pos)                     /*!< UART_T::TOUT: DLY Mask                 */

#define UART_BAUD_BRD_Pos                (0)                                               /*!< UART_T::BAUD: BRD Position             */
#define UART_BAUD_BRD_Msk                (0xfffful << UART_BAUD_BRD_Pos)                   /*!< UART_T::BAUD: BRD Mask                 */

#define UART_BAUD_EDIVM1_Pos             (24)                                              /*!< UART_T::BAUD: EDIVM1 Position          */
#define UART_BAUD_EDIVM1_Msk             (0xful << UART_BAUD_EDIVM1_Pos)                   /*!< UART_T::BAUD: EDIVM1 Mask              */

#define UART_BAUD_BAUDM0_Pos             (28)                                              /*!< UART_T::BAUD: BAUDM0 Position          */
#define UART_BAUD_BAUDM0_Msk             (0x1ul << UART_BAUD_BAUDM0_Pos)                   /*!< UART_T::BAUD: BAUDM0 Mask              */

#define UART_BAUD_BAUDM1_Pos             (29)                                              /*!< UART_T::BAUD: BAUDM1 Position          */
#define UART_BAUD_BAUDM1_Msk             (0x1ul << UART_BAUD_BAUDM1_Pos)                   /*!< UART_T::BAUD: BAUDM1 Mask              */

#define UART_IRDA_TXEN_Pos               (1)                                               /*!< UART_T::IRDA: TXEN Position            */
#define UART_IRDA_TXEN_Msk               (0x1ul << UART_IRDA_TXEN_Pos)                     /*!< UART_T::IRDA: TXEN Mask                */

#define UART_IRDA_TXINV_Pos              (5)                                               /*!< UART_T::IRDA: TXINV Position           */
#define UART_IRDA_TXINV_Msk              (0x1ul << UART_IRDA_TXINV_Pos)                    /*!< UART_T::IRDA: TXINV Mask               */

#define UART_IRDA_RXINV_Pos              (6)                                               /*!< UART_T::IRDA: RXINV Position           */
#define UART_IRDA_RXINV_Msk              (0x1ul << UART_IRDA_RXINV_Pos)                    /*!< UART_T::IRDA: RXINV Mask               */

#define UART_ALTCTL_RS485NMM_Pos         (8)                                               /*!< UART_T::ALTCTL: RS485NMM Position      */
#define UART_ALTCTL_RS485NMM_Msk         (0x1ul << UART_ALTCTL_RS485NMM_Pos)               /*!< UART_T::ALTCTL: RS485NMM Mask          */

#define UART_ALTCTL_RS485AAD_Pos         (9)                                               /*!< UART_T::ALTCTL: RS485AAD Position      */
#define UART_ALTCTL_RS485AAD_Msk         (0x1ul << UART_ALTCTL_RS485AAD_Pos)               /*!< UART_T::ALTCTL: RS485AAD Mask          */

#define UART_ALTCTL_RS485AUD_Pos         (10)                                              /*!< UART_T::ALTCTL: RS485AUD Position      */
#define UART_ALTCTL_RS485AUD_Msk         (0x1ul << UART_ALTCTL_RS485AUD_Pos)               /*!< UART_T::ALTCTL: RS485AUD Mask          */

#define UART_ALTCTL_ADDRDEN_Pos          (15)                                              /*!< UART_T::ALTCTL: ADDRDEN Position       */
#define UART_ALTCTL_ADDRDEN_Msk          (0x1ul << UART_ALTCTL_ADDRDEN_Pos)                /*!< UART_T::ALTCTL: ADDRDEN Mask           */

#define UART_ALTCTL_ABRIF_Pos            (17)                                              /*!< UART_T::ALTCTL: ABRIF Position         */
#define UART_ALTCTL_ABRIF_Msk            (0x1ul << UART_ALTCTL_ABRIF_Pos)                  /*!< UART_T::ALTCTL: ABRIF Mask             */

#define UART_ALTCTL_ABRDEN_Pos           (18)                                              /*!< UART_T::ALTCTL: ABRDEN Position        */
#define UART_ALTCTL_ABRDEN_Msk           (0x1ul << UART_ALTCTL_ABRDEN_Pos)                 /*!< UART_T::ALTCTL: ABRDEN Mask            */

#define UART_ALTCTL_ABRDBITS_Pos         (19)                                              /*!< UART_T::ALTCTL: ABRDBITS Position      */
#define UART_ALTCTL_ABRDBITS_Msk         (0x3ul << UART_ALTCTL_ABRDBITS_Pos)               /*!< UART_T::ALTCTL: ABRDBITS Mask          */

#define UART_ALTCTL_ADDRMV_Pos           (24)                                              /*!< UART_T::ALTCTL: ADDRMV Position        */
#define UART_ALTCTL_ADDRMV_Msk           (0xfful << UART_ALTCTL_ADDRMV_Pos)                /*!< UART_T::ALTCTL: ADDRMV Mask            */

#define UART_FUNCSEL_FUNCSEL_Pos         (0)                                               /*!< UART_T::FUNCSEL: FUNCSEL Position      */
#define UART_FUNCSEL_FUNCSEL_Msk         (0x3ul << UART_FUNCSEL_FUNCSEL_Pos)               /*!< UART_T::FUNCSEL: FUNCSEL Mask          */

#define UART_FUNCSEL_TXRXDIS_Pos         (3)                                               /*!< UART_T::FUNCSEL: TXRXDIS Position      */
#define UART_FUNCSEL_TXRXDIS_Msk         (0x1ul << UART_FUNCSEL_TXRXDIS_Pos)               /*!< UART_T::FUNCSEL: TXRXDIS Mask          */

#define UART_FUNCSEL_DGE_Pos             (6)                                               /*!< UART_T::FUNCSEL: DGE Position          */
#define UART_FUNCSEL_DGE_Msk             (0x1ul << UART_FUNCSEL_DGE_Pos)                   /*!< UART_T::FUNCSEL: DGE Mask              */

#define UART_BRCOMP_BRCOMP_Pos           (0)                                               /*!< UART_T::BRCOMP: BRCOMP Position        */
#define UART_BRCOMP_BRCOMP_Msk           (0x1fful << UART_BRCOMP_BRCOMP_Pos)               /*!< UART_T::BRCOMP: BRCOMP Mask            */

#define UART_BRCOMP_BRCOMPDEC_Pos        (31)                                              /*!< UART_T::BRCOMP: BRCOMPDEC Position     */
#define UART_BRCOMP_BRCOMPDEC_Msk        (0x1ul << UART_BRCOMP_BRCOMPDEC_Pos)              /*!< UART_T::BRCOMP: BRCOMPDEC Mask         */

#define UART_WKCTL_WKCTSEN_Pos           (0)                                               /*!< UART_T::WKCTL: WKCTSEN Position        */
#define UART_WKCTL_WKCTSEN_Msk           (0x1ul << UART_WKCTL_WKCTSEN_Pos)                 /*!< UART_T::WKCTL: WKCTSEN Mask            */

#define UART_WKCTL_WKDATEN_Pos           (1)                                               /*!< UART_T::WKCTL: WKDATEN Position        */
#define UART_WKCTL_WKDATEN_Msk           (0x1ul << UART_WKCTL_WKDATEN_Pos)                 /*!< UART_T::WKCTL: WKDATEN Mask            */

#define UART_WKCTL_WKRFRTEN_Pos          (2)                                               /*!< UART_T::WKCTL: WKRFRTEN Position       */
#define UART_WKCTL_WKRFRTEN_Msk          (0x1ul << UART_WKCTL_WKRFRTEN_Pos)                /*!< UART_T::WKCTL: WKRFRTEN Mask           */

#define UART_WKCTL_WKRS485EN_Pos         (3)                                               /*!< UART_T::WKCTL: WKRS485EN Position      */
#define UART_WKCTL_WKRS485EN_Msk         (0x1ul << UART_WKCTL_WKRS485EN_Pos)               /*!< UART_T::WKCTL: WKRS485EN Mask          */

#define UART_WKCTL_WKTOUTEN_Pos          (4)                                               /*!< UART_T::WKCTL: WKTOUTEN Position       */
#define UART_WKCTL_WKTOUTEN_Msk          (0x1ul << UART_WKCTL_WKTOUTEN_Pos)                /*!< UART_T::WKCTL: WKTOUTEN Mask           */

#define UART_WKSTS_CTSWKF_Pos            (0)                                               /*!< UART_T::WKSTS: CTSWKF Position         */
#define UART_WKSTS_CTSWKF_Msk            (0x1ul << UART_WKSTS_CTSWKF_Pos)                  /*!< UART_T::WKSTS: CTSWKF Mask             */

#define UART_WKSTS_DATWKF_Pos            (1)                                               /*!< UART_T::WKSTS: DATWKF Position         */
#define UART_WKSTS_DATWKF_Msk            (0x1ul << UART_WKSTS_DATWKF_Pos)                  /*!< UART_T::WKSTS: DATWKF Mask             */

#define UART_WKSTS_RFRTWKF_Pos           (2)                                               /*!< UART_T::WKSTS: RFRTWKF Position        */
#define UART_WKSTS_RFRTWKF_Msk           (0x1ul << UART_WKSTS_RFRTWKF_Pos)                 /*!< UART_T::WKSTS: RFRTWKF Mask            */

#define UART_WKSTS_RS485WKF_Pos          (3)                                               /*!< UART_T::WKSTS: RS485WKF Position       */
#define UART_WKSTS_RS485WKF_Msk          (0x1ul << UART_WKSTS_RS485WKF_Pos)                /*!< UART_T::WKSTS: RS485WKF Mask           */

#define UART_WKSTS_TOUTWKF_Pos           (4)                                               /*!< UART_T::WKSTS: TOUTWKF Position        */
#define UART_WKSTS_TOUTWKF_Msk           (0x1ul << UART_WKSTS_TOUTWKF_Pos)                 /*!< UART_T::WKSTS: TOUTWKF Mask            */

#define UART_DWKCOMP_STCOMP_Pos          (0)                                               /*!< UART_T::DWKCOMP: STCOMP Position       */
#define UART_DWKCOMP_STCOMP_Msk          (0xfffful << UART_DWKCOMP_STCOMP_Pos)             /*!< UART_T::DWKCOMP: STCOMP Mask           */

/**@}*/ /* UART_CONST */
/**@}*/ /* end of UART register group */




/*---------------------- USB Device Controller -------------------------*/
/**
    @addtogroup USBD USB Device Controller(USBD)
    Memory Mapped Structure for USBD Controller
    @{
*/



/**
  * @brief USBD endpoints register
  */
typedef struct
{
    /**
     * @var USBD_EP_T::BUFSEG
     * Offset: 0x500/0x510/0x520/0x530/0x540/0x550/0x560/0x570  Endpoint Buffer Segmentation Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[8:3]   |BUFSEG    |Endpoint Buffer Segmentation
     * |        |          |It is used to indicate the offset address for each endpoint with the USB SRAM starting address The effective starting address of the endpoint is
     * |        |          |USBD_SRAM address + { BUFSEG[8:3], 3u2019b000}
     * |        |          |Where the USBD_SRAM address = USBD_BA+0x100h.
     * |        |          |Refer to the section 6.17.5.76.21.5.7 for the endpoint SRAM structure and its description.
     * @var USBD_EP_T::MXPLD
     * Offset: 0x504/0x514/0x524/0x534/0x544/0x554/0x564/0x574  Endpoint Maximal Payload Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[8:0]   |MXPLD     |Maximal Payload
     * |        |          |Define the data length which is transmitted to host (IN token) or the actual data length which is received from the host (OUT token)
     * |        |          |It also used to indicate that the endpoint is ready to be transmitted in IN token or received in OUT token.
     * |        |          |(1) When the register is written by CPU,
     * |        |          |For IN token, the value of MXPLD is used to define the data length to be transmitted and indicate the data buffer is ready.
     * |        |          |For OUT token, it means that the controller is ready to receive data from the host and the value of MXPLD is the maximal data length comes from host.
     * |        |          |(2) When the register is read by CPU,
     * |        |          |For IN token, the value of MXPLD is indicated by the data length be transmitted to host
     * |        |          |For OUT token, the value of MXPLD is indicated the actual data length receiving from host.
     * |        |          |Note: Once MXPLD is written, the data packets will be transmitted/received immediately after IN/OUT token arrived.
     * @var USBD_EP_T::CFG
     * Offset: 0x508/0x518/0x528/0x538/0x548/0x558/0x568/0x578  Endpoint Configuration Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |EPNUM     |Endpoint Number
     * |        |          |These bits are used to define the endpoint number of the current endpoint
     * |[4]     |ISOCH     |Isochronous Endpoint
     * |        |          |This bit is used to set the endpoint as Isochronous endpoint, no handshake.
     * |        |          |0 = No Isochronous endpoint.
     * |        |          |1 = Isochronous endpoint.
     * |[6:5]   |STATE     |Endpoint STATE
     * |        |          |00 = Endpoint is Disabled.
     * |        |          |01 = Out endpoint.
     * |        |          |10 = IN endpoint.
     * |        |          |11 = Undefined.
     * |[7]     |DSQSYNC   |Data Sequence Synchronization
     * |        |          |0 = DATA0 PID.
     * |        |          |1 = DATA1 PID.
     * |        |          |Note: It is used to specify the DATA0 or DATA1 PID in the following IN token transaction
     * |        |          |hardware will toggle automatically in IN token base on the bit.
     * |[9]     |CSTALL    |Clear STALL Response
     * |        |          |0 = Disable the device to clear the STALL handshake in setup stage.
     * |        |          |1 = Clear the device to response STALL handshake in setup stage.
     * @var USBD_EP_T::CFGP
     * Offset: 0x50C/0x51C/0x52C/0x53C/0x54C/0x55C/0x56C/0x57C  Endpoint Set Stall and Clear In/Out Ready Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CLRRDY    |Clear Ready
     * |        |          |When the USBD_MXPLDx register is set by user, it means that the endpoint is ready to transmit or receive data
     * |        |          |If the user wants to disable this transaction before the transaction start, users can set this bit to 1 to disable it and it is auto clear to 0.
     * |        |          |For IN token, write u20181u2019 to clear the IN token had ready to transmit the data to USB.
     * |        |          |For OUT token, write u20181u2019 to clear the OUT token had ready to receive the data from USB.
     * |        |          |This bit is write 1 only and is always 0 when it is read back.
     * |[1]     |SSTALL    |Set STALL
     * |        |          |0 = Disable the device to response STALL.
     * |        |          |1 = Set the device to respond STALL automatically.
     */
    __IO uint32_t BUFSEG;                /*!< [0x0000] Endpoint Buffer Segmentation Register                            */
    __IO uint32_t MXPLD;                 /*!< [0x0004] Endpoint Maximal Payload Register                                */
    __IO uint32_t CFG;                   /*!< [0x0008] Endpoint Configuration Register                                  */
    __IO uint32_t CFGP;                  /*!< [0x000c] Endpoint Set Stall and Clear In/Out Ready Control Register       */

} USBD_EP_T;

typedef struct
{


    /**
     * @var USBD_T::INTEN
     * Offset: 0x00  USB Device Interrupt Enable Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |BUSIEN    |Bus Event Interrupt Enable Bit
     * |        |          |0 = BUS Event Interrupt Disabled.
     * |        |          |1 = BUS Event Interrupt Enabled.
     * |[1]     |USBIEN    |USB Event Interrupt Enable Bit
     * |        |          |0 = USB Event Interrupt Disabled.
     * |        |          |1 = USB Event Interrupt Enabled.
     * |[2]     |VBDETIEN  |VBUS Detection Interrupt Enable Bit
     * |        |          |0 = VBUS Detection Interrupt Disabled.
     * |        |          |1 = VBUS Detection Interrupt Enabled.
     * |[3]     |WKIDLEIEN |USB Wake-up Idle Interrupt Enable Bit
     * |        |          |0 = Wake-up Idle Interrupt Disabled.
     * |        |          |1 = Wake-up Idle Interrupt Enabled.
     * |[4]     |SOFIEN    |Start of Frame Interrupt Enable Bit
     * |        |          |0 = SOF Interrupt Disabled.
     * |        |          |1 = SOF Interrupt Enabled.
     * |[8]     |WKEN      |Wake-up Function Enable Bit
     * |        |          |0 = USB Wake-up Function Disabled.
     * |        |          |1 = USB Wake-up Function Enabled.
     * |[15]    |INNAKEN   |Active NAK Function and Its Status in IN Token
     * |        |          |0 = When device responds NAK after receiving IN token, IN NAK status will not be up2025-07-16d to USBD_EPSTS register, so that the USB interrupt event will not be asserted.
     * |        |          |1 = IN NAK status will be up2025-07-16d to USBD_EPSTS register and the USB interrupt event will be asserted, when the device responds NAK after receiving IN token.
     * @var USBD_T::INTSTS
     * Offset: 0x04  USB Device Interrupt Event Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |BUSIF     |BUS Interrupt Status
     * |        |          |The BUS event means that there is one of the suspense or the resume function in the bus.
     * |        |          |0 = No BUS event occurred.
     * |        |          |1 = Bus event occurred; check USBD_ATTR[3:0] and USBD_ATTR[13:12] to know which kind of bus event was occurred, cleared by write 1 to USBD_INTSTS[0].
     * |[1]     |USBIF     |USB Event Interrupt Status
     * |        |          |The USB event includes the SETUP Token, IN Token, OUT ACK, ISO IN, or ISO OUT events in the bus.
     * |        |          |0 = No USB event occurred.
     * |        |          |1 = USB event occurred, check EPSTS0~5[2:0] to know which kind of USB event was occurred, cleared by write 1 to USBD_INTSTS[1] or EPSTS0~7 and SETUP (USBD_INTSTS[31]).
     * |[2]     |VBDETIF   |VBUS Detection Interrupt Status
     * |        |          |0 = There is not attached/detached event in the USB.
     * |        |          |1 = There is attached/detached event in the USB bus and it is cleared by write 1 to USBD_INTSTS[2].
     * |[3]     |WKIDLEIF  |No-event-wake-up Interrupt Status
     * |        |          |0 = WKIDLE event does not occur.
     * |        |          |1 = No-event-wake-up event occurred, cleared by write 1 to USBD_INTSTS[3].
     * |[4]     |SOFIF     |Start of Frame Interrupt Status
     * |        |          |0 = SOF event does not occur.
     * |        |          |1 = SOF event occurred, cleared by write 1 to USBD_INTSTS[4].
     * |[16]    |EPEVT0    |Endpoint 0u2019s USB Event Status
     * |        |          |0 = No event occurred in endpoint 0.
     * |        |          |1 = USB event occurred on Endpoint 0, check USBD_EPSTS[10:8] to know which kind of USB event was occurred, cleared by write 1 to USBD_INTSTS[16] or USBD_INTSTS[1].
     * |[17]    |EPEVT1    |Endpoint 1u2019s USB Event Status
     * |        |          |0 = No event occurred in endpoint 1.
     * |        |          |1 = USB event occurred on Endpoint 1, check USBD_EPSTS[13:11] to know which kind of USB event was occurred, cleared by write 1 to USBD_INTSTS[17] or USBD_INTSTS[1].
     * |[18]    |EPEVT2    |Endpoint 2u2019s USB Event Status
     * |        |          |0 = No event occurred in endpoint 2.
     * |        |          |1 = USB event occurred on Endpoint 2, check USBD_EPSTS[16:14] to know which kind of USB event was occurred, cleared by write 1 to USBD_INTSTS[18] or USBD_INTSTS[1].
     * |[19]    |EPEVT3    |Endpoint 3u2019s USB Event Status
     * |        |          |0 = No event occurred in endpoint 3.
     * |        |          |1 = USB event occurred on Endpoint 3, check USBD_EPSTS[19:17] to know which kind of USB event was occurred, cleared by write 1 to USBD_INTSTS[19] or USBD_INTSTS[1].
     * |[20]    |EPEVT4    |Endpoint 4u2019s USB Event Status
     * |        |          |0 = No event occurred in endpoint 4.
     * |        |          |1 = USB event occurred on Endpoint 4, check USBD_EPSTS[22:20] to know which kind of USB event was occurred, cleared by write 1 to USBD_INTSTS[20] or USBD_INTSTS[1].
     * |[21]    |EPEVT5    |Endpoint 5u2019s USB Event Status
     * |        |          |0 = No event occurred in endpoint 5.
     * |        |          |1 = USB event occurred on Endpoint 5, check USBD_EPSTS[25:23] to know which kind of USB event was occurred, cleared by write 1 to USBD_INTSTS[21] or USBD_INTSTS[1].
     * |[22]    |EPEVT6    |Endpoint 6u2019s USB Event Status
     * |        |          |0 = No event occurred in endpoint 6.
     * |        |          |1 = USB event occurred on Endpoint 6, check USBD_EPSTS[28:26] to know which kind of USB event was occurred, cleared by write 1 to USBD_INTSTS[22] or USBD_INTSTS[1].
     * |[23]    |EPEVT7    |Endpoint 7u2019s USB Event Status
     * |        |          |0 = No event occurred in endpoint 7.
     * |        |          |1 = USB event occurred on Endpoint 7, check USBD_EPSTS[31:29] to know which kind of USB event was occurred, cleared by write 1 to USBD_INTSTS[23] or USBD_INTSTS[1].
     * |[31]    |SETUP     |Setup Event Status
     * |        |          |0 = No Setup event.
     * |        |          |1 = Setup event occurred, cleared by write 1 to USBD_INTSTS[31].
     * @var USBD_T::FADDR
     * Offset: 0x08  USB Device Function Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[6:0]   |FADDR     |USB Device Function Address
     * @var USBD_T::EPSTS
     * Offset: 0x0C  USB Device Endpoint Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7]     |OV        |Overrun
     * |        |          |It indicates that the received data is over the maximum payload number or not.
     * |        |          |0 = No overrun.
     * |        |          |1 = Out Data is more than the Max Payload in MXPLD register or the Setup Data is more than 8 Bytes.
     * |[10:8]  |EPSTS0    |Endpoint 0 Status
     * |        |          |These bits are used to indicate the current status of this endpoint
     * |        |          |000 = In ACK.
     * |        |          |001 = In NAK.
     * |        |          |010 = Out Packet Data0 ACK.
     * |        |          |110 = Out Packet Data1 ACK.
     * |        |          |011 = Setup ACK.
     * |        |          |111 = Isochronous transfer end.
     * |[13:11] |EPSTS1    |Endpoint 1 Status
     * |        |          |These bits are used to indicate the current status of this endpoint
     * |        |          |000 = In ACK.
     * |        |          |001 = In NAK.
     * |        |          |010 = Out Packet Data0 ACK.
     * |        |          |110 = Out Packet Data1 ACK.
     * |        |          |011 = Setup ACK.
     * |        |          |111 = Isochronous transfer end.
     * |[16:14] |EPSTS2    |Endpoint 2 Status
     * |        |          |These bits are used to indicate the current status of this endpoint
     * |        |          |000 = In ACK.
     * |        |          |001 = In NAK.
     * |        |          |010 = Out Packet Data0 ACK.
     * |        |          |110 = Out Packet Data1 ACK.
     * |        |          |011 = Setup ACK.
     * |        |          |111 = Isochronous transfer end.
     * |[19:17] |EPSTS3    |Endpoint 3 Status
     * |        |          |These bits are used to indicate the current status of this endpoint
     * |        |          |000 = In ACK.
     * |        |          |001 = In NAK.
     * |        |          |010 = Out Packet Data0 ACK.
     * |        |          |110 = Out Packet Data1 ACK.
     * |        |          |011 = Setup ACK.
     * |        |          |111 = Isochronous transfer end.
     * |[22:20] |EPSTS4    |Endpoint 4 Status
     * |        |          |These bits are used to indicate the current status of this endpoint
     * |        |          |000 = In ACK.
     * |        |          |001 = In NAK.
     * |        |          |010 = Out Packet Data0 ACK.
     * |        |          |110 = Out Packet Data1 ACK.
     * |        |          |011 = Setup ACK.
     * |        |          |111 = Isochronous transfer end.
     * |[25:23] |EPSTS5    |Endpoint 5 Status
     * |        |          |These bits are used to indicate the current status of this endpoint
     * |        |          |000 = In ACK.
     * |        |          |001 = In NAK.
     * |        |          |010 = Out Packet Data0 ACK.
     * |        |          |110 = Out Packet Data1 ACK.
     * |        |          |011 = Setup ACK.
     * |        |          |111 = Isochronous transfer end.
     * |[28:26] |EPSTS6    |Endpoint 6 Status
     * |        |          |These bits are used to indicate the current status of this endpoint
     * |        |          |000 = In ACK.
     * |        |          |001 = In NAK.
     * |        |          |010 = Out Packet Data0 ACK.
     * |        |          |110 = Out Packet Data1 ACK.
     * |        |          |011 = Setup ACK.
     * |        |          |111 = Isochronous transfer end.
     * |[31:29] |EPSTS7    |Endpoint 7 Status
     * |        |          |These bits are used to indicate the current status of this endpoint
     * |        |          |000 = In ACK.
     * |        |          |001 = In NAK.
     * |        |          |010 = Out Packet Data0 ACK.
     * |        |          |110 = Out Packet Data1 ACK.
     * |        |          |011 = Setup ACK.
     * |        |          |111 = Isochronous transfer end.
     * @var USBD_T::ATTR
     * Offset: 0x10  USB Device Bus Status and Attribution Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |USBRST    |USB Reset Status
     * |        |          |0 = Bus no reset.
     * |        |          |1 = Bus reset when SE0 (single-ended 0) more than 2.5us.
     * |        |          |Note: This bit is read only.
     * |[1]     |SUSPEND   |Suspend Status
     * |        |          |0 = Bus no suspend.
     * |        |          |1 = Bus idle more than 3ms, either cable is plugged off or host is sleeping.
     * |        |          |Note: This bit is read only.
     * |[2]     |RESUME    |Resume Status
     * |        |          |0 = No bus resume.
     * |        |          |1 = Resume from suspend.
     * |        |          |Note: This bit is read only.
     * |[3]     |TOUT      |Time-out Status
     * |        |          |0 = No time-out.
     * |        |          |1 = No Bus response more than 18 bits time.
     * |        |          |Note: This bit is read only.
     * |[4]     |PHYEN     |PHY Transceiver Function Enable Bit
     * |        |          |0 = PHY transceiver function Disabled.
     * |        |          |1 = PHY transceiver function Enabled.
     * |[5]     |RWAKEUP   |Remote Wake-up
     * |        |          |0 = Release the USB bus from K state.
     * |        |          |1 = Force USB bus to K (USB_D+ low, USB_D-: high) state, used for remote wake-up.
     * |[7]     |USBEN     |USB Controller Enable Bit
     * |        |          |0 = USB Controller Disabled.
     * |        |          |1 = USB Controller Enabled.
     * |[8]     |DPPUEN    |Pull-up Resistor on USB_DP Enable Bit
     * |        |          |0 = Pull-up resistor in USB_D+ bus Disabled.
     * |        |          |1 = Pull-up resistor in USB_D+ bus Active.
     * |[10]    |BYTEM     |CPU Access USB SRAM Size Mode Selection
     * |        |          |0 = Word mode: The size of the transfer from CPU to USB SRAM can be Word only.
     * |        |          |1 = Byte mode: The size of the transfer from CPU to USB SRAM can be Byte only.
     * |[11]    |LPMACK    |LPM Token Acknowledge Enable
     * |        |          |The NYET/ACK will be returned only on a successful LPM transaction if no errors in both the EXT token and the LPM token and a valid bLinkState = 0001 (L1) is received, else ERROR and STALL will be returned automatically, respectively.
     * |        |          |0= the valid LPM Token will be NYET.
     * |        |          |1= the valid LPM Token will be ACK.
     * |[12]    |L1SUSPEND |LPM L1 Suspend
     * |        |          |0 = Bus no L1 state suspend.
     * |        |          |1 = This bit is set by the hardware when LPM command to enter the L1 state is successfully received and acknowledged.
     * |        |          |Note: This bit is read only.
     * |[13]    |L1RESUME  |LPM L1 Resume
     * |        |          |0 = Bus no LPM L1 state resume.
     * |        |          |1 = LPM L1 state Resume from LPM L1 state suspend.
     * |        |          |Note: This bit is read only.
     * @var USBD_T::VBUSDET
     * Offset: 0x14  USB Device VBUS Detection Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |VBUSDET   |Device VBUS Detection
     * |        |          |0 = Controller is not attached to the USB host.
     * |        |          |1 = Controller is attached to the USB host.
     * @var USBD_T::STBUFSEG
     * Offset: 0x18  Setup Token Buffer Segmentation Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[8:3]   |STBUFSEG  |SETUP Token Buffer Segmentation
     * |        |          |It is used to indicate the offset address for the SETUP token with the USB Device SRAM starting address The effective starting address is
     * |        |          |USBD_SRAM address + {STBUFSEG[8:3], 3u2019b000}
     * |        |          |Where the USBD_SRAM address = USBD_BA+0x100h.
     * |        |          |Note: It is used for SETUP token only.
     * @var USBD_T::LPMATTR
     * Offset: 0x88  USB LPM Attribution Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |LPMLINKSTS|LPM Linke State
     * |        |          |These bits contain the bLinkState received with last ACK LPM Token
     * |[7:4]   |LPMBESL   |LPM Best Effort Service Latency
     * |        |          |These bits contain the BESL value received with last ACK LPM Token
     * |[8]     |LPMRWAKUP |LPM Remote Wakeup
     * |        |          |This bit contains the bRemoteWake value received with last ACK LPM Token
     * @var USBD_T::FN
     * Offset: 0x8C  USB Frame number Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[10:0]  |FN        |Frame Number
     * |        |          |These bits contain the 11-bits frame number in the last received SOF packet.
     * @var USBD_T::SE0
     * Offset: 0x90  USB Device Drive SE0 Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |SE0       |Drive Single Ended Zero in USB Bus
     * |        |          |The Single Ended Zero (SE0) is when both lines (USB_D+ and USB_D-) are being pulled low.
     * |        |          |0 = Normal operation.
     * |        |          |1 = Force USB PHY transceiver to drive SE0.
     */

    __IO uint32_t INTEN;                 /*!< [0x0000] USB Device Interrupt Enable Register                             */
    __IO uint32_t INTSTS;                /*!< [0x0004] USB Device Interrupt Event Status Register                       */
    __IO uint32_t FADDR;                 /*!< [0x0008] USB Device Function Address Register                             */
    __I  uint32_t EPSTS;                 /*!< [0x000c] USB Device Endpoint Status Register                              */
    __IO uint32_t ATTR;                  /*!< [0x0010] USB Device Bus Status and Attribution Register                   */
    __I  uint32_t VBUSDET;               /*!< [0x0014] USB Device VBUS Detection Register                               */
    __IO uint32_t STBUFSEG;              /*!< [0x0018] Setup Token Buffer Segmentation Register                         */
    __I  uint32_t RESERVE0[27];
    __I  uint32_t LPMATTR;               /*!< [0x0088] USB LPM Attribution Register                                     */
    __I  uint32_t FN;                    /*!< [0x008c] USB Frame number Register                                        */
    __IO uint32_t SE0;                   /*!< [0x0090] USB Device Drive SE0 Control Register                            */
    __I  uint32_t RESERVE1[283];
    USBD_EP_T EP[8];                     /*!< [0x0500~0x57C] USB Device Endpoints                                       */

} USBD_T;

/**
    @addtogroup USBD_CONST USBD Bit Field Definition
    Constant Definitions for USBD Controller
    @{
*/

#define USBD_INTEN_BUSIEN_Pos            (0)                                               /*!< USBD_T::INTEN: BUSIEN Position         */
#define USBD_INTEN_BUSIEN_Msk            (0x1ul << USBD_INTEN_BUSIEN_Pos)                  /*!< USBD_T::INTEN: BUSIEN Mask             */

#define USBD_INTEN_USBIEN_Pos            (1)                                               /*!< USBD_T::INTEN: USBIEN Position         */
#define USBD_INTEN_USBIEN_Msk            (0x1ul << USBD_INTEN_USBIEN_Pos)                  /*!< USBD_T::INTEN: USBIEN Mask             */

#define USBD_INTEN_VBDETIEN_Pos          (2)                                               /*!< USBD_T::INTEN: VBDETIEN Position       */
#define USBD_INTEN_VBDETIEN_Msk          (0x1ul << USBD_INTEN_VBDETIEN_Pos)                /*!< USBD_T::INTEN: VBDETIEN Mask           */

#define USBD_INTEN_WKIDLEIEN_Pos         (3)                                               /*!< USBD_T::INTEN: WKIDLEIEN Position      */
#define USBD_INTEN_WKIDLEIEN_Msk         (0x1ul << USBD_INTEN_WKIDLEIEN_Pos)               /*!< USBD_T::INTEN: WKIDLEIEN Mask          */

#define USBD_INTEN_SOFIEN_Pos            (4)                                               /*!< USBD_T::INTEN: SOFIEN Position         */
#define USBD_INTEN_SOFIEN_Msk            (0x1ul << USBD_INTEN_SOFIEN_Pos)                  /*!< USBD_T::INTEN: SOFIEN Mask             */

#define USBD_INTEN_WKEN_Pos              (8)                                               /*!< USBD_T::INTEN: WKEN Position           */
#define USBD_INTEN_WKEN_Msk              (0x1ul << USBD_INTEN_WKEN_Pos)                    /*!< USBD_T::INTEN: WKEN Mask               */

#define USBD_INTEN_INNAKEN_Pos           (15)                                              /*!< USBD_T::INTEN: INNAKEN Position        */
#define USBD_INTEN_INNAKEN_Msk           (0x1ul << USBD_INTEN_INNAKEN_Pos)                 /*!< USBD_T::INTEN: INNAKEN Mask            */

#define USBD_INTSTS_BUSIF_Pos            (0)                                               /*!< USBD_T::INTSTS: BUSIF Position         */
#define USBD_INTSTS_BUSIF_Msk            (0x1ul << USBD_INTSTS_BUSIF_Pos)                  /*!< USBD_T::INTSTS: BUSIF Mask             */

#define USBD_INTSTS_USBIF_Pos            (1)                                               /*!< USBD_T::INTSTS: USBIF Position         */
#define USBD_INTSTS_USBIF_Msk            (0x1ul << USBD_INTSTS_USBIF_Pos)                  /*!< USBD_T::INTSTS: USBIF Mask             */

#define USBD_INTSTS_VBDETIF_Pos          (2)                                               /*!< USBD_T::INTSTS: VBDETIF Position       */
#define USBD_INTSTS_VBDETIF_Msk          (0x1ul << USBD_INTSTS_VBDETIF_Pos)                /*!< USBD_T::INTSTS: VBDETIF Mask           */

#define USBD_INTSTS_WKIDLEIF_Pos         (3)                                               /*!< USBD_T::INTSTS: WKIDLEIF Position      */
#define USBD_INTSTS_WKIDLEIF_Msk         (0x1ul << USBD_INTSTS_WKIDLEIF_Pos)               /*!< USBD_T::INTSTS: WKIDLEIF Mask          */

#define USBD_INTSTS_SOFIF_Pos            (4)                                               /*!< USBD_T::INTSTS: SOFIF Position         */
#define USBD_INTSTS_SOFIF_Msk            (0x1ul << USBD_INTSTS_SOFIF_Pos)                  /*!< USBD_T::INTSTS: SOFIF Mask             */

#define USBD_INTSTS_EPEVT0_Pos           (16)                                              /*!< USBD_T::INTSTS: EPEVT0 Position        */
#define USBD_INTSTS_EPEVT0_Msk           (0x1ul << USBD_INTSTS_EPEVT0_Pos)                 /*!< USBD_T::INTSTS: EPEVT0 Mask            */

#define USBD_INTSTS_EPEVT1_Pos           (17)                                              /*!< USBD_T::INTSTS: EPEVT1 Position        */
#define USBD_INTSTS_EPEVT1_Msk           (0x1ul << USBD_INTSTS_EPEVT1_Pos)                 /*!< USBD_T::INTSTS: EPEVT1 Mask            */

#define USBD_INTSTS_EPEVT2_Pos           (18)                                              /*!< USBD_T::INTSTS: EPEVT2 Position        */
#define USBD_INTSTS_EPEVT2_Msk           (0x1ul << USBD_INTSTS_EPEVT2_Pos)                 /*!< USBD_T::INTSTS: EPEVT2 Mask            */

#define USBD_INTSTS_EPEVT3_Pos           (19)                                              /*!< USBD_T::INTSTS: EPEVT3 Position        */
#define USBD_INTSTS_EPEVT3_Msk           (0x1ul << USBD_INTSTS_EPEVT3_Pos)                 /*!< USBD_T::INTSTS: EPEVT3 Mask            */

#define USBD_INTSTS_EPEVT4_Pos           (20)                                              /*!< USBD_T::INTSTS: EPEVT4 Position        */
#define USBD_INTSTS_EPEVT4_Msk           (0x1ul << USBD_INTSTS_EPEVT4_Pos)                 /*!< USBD_T::INTSTS: EPEVT4 Mask            */

#define USBD_INTSTS_EPEVT5_Pos           (21)                                              /*!< USBD_T::INTSTS: EPEVT5 Position        */
#define USBD_INTSTS_EPEVT5_Msk           (0x1ul << USBD_INTSTS_EPEVT5_Pos)                 /*!< USBD_T::INTSTS: EPEVT5 Mask            */

#define USBD_INTSTS_EPEVT6_Pos           (22)                                              /*!< USBD_T::INTSTS: EPEVT6 Position        */
#define USBD_INTSTS_EPEVT6_Msk           (0x1ul << USBD_INTSTS_EPEVT6_Pos)                 /*!< USBD_T::INTSTS: EPEVT6 Mask            */

#define USBD_INTSTS_EPEVT7_Pos           (23)                                              /*!< USBD_T::INTSTS: EPEVT7 Position        */
#define USBD_INTSTS_EPEVT7_Msk           (0x1ul << USBD_INTSTS_EPEVT7_Pos)                 /*!< USBD_T::INTSTS: EPEVT7 Mask            */

#define USBD_INTSTS_SETUP_Pos            (31)                                              /*!< USBD_T::INTSTS: SETUP Position         */
#define USBD_INTSTS_SETUP_Msk            (0x1ul << USBD_INTSTS_SETUP_Pos)                  /*!< USBD_T::INTSTS: SETUP Mask             */

#define USBD_FADDR_FADDR_Pos             (0)                                               /*!< USBD_T::FADDR: FADDR Position          */
#define USBD_FADDR_FADDR_Msk             (0x7ful << USBD_FADDR_FADDR_Pos)                  /*!< USBD_T::FADDR: FADDR Mask              */

#define USBD_EPSTS_OV_Pos                (7)                                               /*!< USBD_T::EPSTS: OV Position             */
#define USBD_EPSTS_OV_Msk                (0x1ul << USBD_EPSTS_OV_Pos)                      /*!< USBD_T::EPSTS: OV Mask                 */

#define USBD_EPSTS_EPSTS0_Pos            (8)                                               /*!< USBD_T::EPSTS: EPSTS0 Position         */
#define USBD_EPSTS_EPSTS0_Msk            (0x7ul << USBD_EPSTS_EPSTS0_Pos)                  /*!< USBD_T::EPSTS: EPSTS0 Mask             */

#define USBD_EPSTS_EPSTS1_Pos            (11)                                              /*!< USBD_T::EPSTS: EPSTS1 Position         */
#define USBD_EPSTS_EPSTS1_Msk            (0x7ul << USBD_EPSTS_EPSTS1_Pos)                  /*!< USBD_T::EPSTS: EPSTS1 Mask             */

#define USBD_EPSTS_EPSTS2_Pos            (14)                                              /*!< USBD_T::EPSTS: EPSTS2 Position         */
#define USBD_EPSTS_EPSTS2_Msk            (0x7ul << USBD_EPSTS_EPSTS2_Pos)                  /*!< USBD_T::EPSTS: EPSTS2 Mask             */

#define USBD_EPSTS_EPSTS3_Pos            (17)                                              /*!< USBD_T::EPSTS: EPSTS3 Position         */
#define USBD_EPSTS_EPSTS3_Msk            (0x7ul << USBD_EPSTS_EPSTS3_Pos)                  /*!< USBD_T::EPSTS: EPSTS3 Mask             */

#define USBD_EPSTS_EPSTS4_Pos            (20)                                              /*!< USBD_T::EPSTS: EPSTS4 Position         */
#define USBD_EPSTS_EPSTS4_Msk            (0x7ul << USBD_EPSTS_EPSTS4_Pos)                  /*!< USBD_T::EPSTS: EPSTS4 Mask             */

#define USBD_EPSTS_EPSTS5_Pos            (23)                                              /*!< USBD_T::EPSTS: EPSTS5 Position         */
#define USBD_EPSTS_EPSTS5_Msk            (0x7ul << USBD_EPSTS_EPSTS5_Pos)                  /*!< USBD_T::EPSTS: EPSTS5 Mask             */

#define USBD_EPSTS_EPSTS6_Pos            (26)                                              /*!< USBD_T::EPSTS: EPSTS6 Position         */
#define USBD_EPSTS_EPSTS6_Msk            (0x7ul << USBD_EPSTS_EPSTS6_Pos)                  /*!< USBD_T::EPSTS: EPSTS6 Mask             */

#define USBD_EPSTS_EPSTS7_Pos            (29)                                              /*!< USBD_T::EPSTS: EPSTS7 Position         */
#define USBD_EPSTS_EPSTS7_Msk            (0x7ul << USBD_EPSTS_EPSTS7_Pos)                  /*!< USBD_T::EPSTS: EPSTS7 Mask             */

#define USBD_ATTR_USBRST_Pos             (0)                                               /*!< USBD_T::ATTR: USBRST Position          */
#define USBD_ATTR_USBRST_Msk             (0x1ul << USBD_ATTR_USBRST_Pos)                   /*!< USBD_T::ATTR: USBRST Mask              */

#define USBD_ATTR_SUSPEND_Pos            (1)                                               /*!< USBD_T::ATTR: SUSPEND Position         */
#define USBD_ATTR_SUSPEND_Msk            (0x1ul << USBD_ATTR_SUSPEND_Pos)                  /*!< USBD_T::ATTR: SUSPEND Mask             */

#define USBD_ATTR_RESUME_Pos             (2)                                               /*!< USBD_T::ATTR: RESUME Position          */
#define USBD_ATTR_RESUME_Msk             (0x1ul << USBD_ATTR_RESUME_Pos)                   /*!< USBD_T::ATTR: RESUME Mask              */

#define USBD_ATTR_TOUT_Pos               (3)                                               /*!< USBD_T::ATTR: TOUT Position            */
#define USBD_ATTR_TOUT_Msk               (0x1ul << USBD_ATTR_TOUT_Pos)                     /*!< USBD_T::ATTR: TOUT Mask                */

#define USBD_ATTR_PHYEN_Pos              (4)                                               /*!< USBD_T::ATTR: PHYEN Position           */
#define USBD_ATTR_PHYEN_Msk              (0x1ul << USBD_ATTR_PHYEN_Pos)                    /*!< USBD_T::ATTR: PHYEN Mask               */

#define USBD_ATTR_RWAKEUP_Pos            (5)                                               /*!< USBD_T::ATTR: RWAKEUP Position         */
#define USBD_ATTR_RWAKEUP_Msk            (0x1ul << USBD_ATTR_RWAKEUP_Pos)                  /*!< USBD_T::ATTR: RWAKEUP Mask             */

#define USBD_ATTR_USBEN_Pos              (7)                                               /*!< USBD_T::ATTR: USBEN Position           */
#define USBD_ATTR_USBEN_Msk              (0x1ul << USBD_ATTR_USBEN_Pos)                    /*!< USBD_T::ATTR: USBEN Mask               */

#define USBD_ATTR_DPPUEN_Pos             (8)                                               /*!< USBD_T::ATTR: DPPUEN Position          */
#define USBD_ATTR_DPPUEN_Msk             (0x1ul << USBD_ATTR_DPPUEN_Pos)                   /*!< USBD_T::ATTR: DPPUEN Mask              */

#define USBD_ATTR_BYTEM_Pos              (10)                                              /*!< USBD_T::ATTR: BYTEM Position           */
#define USBD_ATTR_BYTEM_Msk              (0x1ul << USBD_ATTR_BYTEM_Pos)                    /*!< USBD_T::ATTR: BYTEM Mask               */

#define USBD_ATTR_LPMACK_Pos             (11)                                              /*!< USBD_T::ATTR: LPMACK Position          */
#define USBD_ATTR_LPMACK_Msk             (0x1ul << USBD_ATTR_LPMACK_Pos)                   /*!< USBD_T::ATTR: LPMACK Mask              */

#define USBD_ATTR_L1SUSPEND_Pos          (12)                                              /*!< USBD_T::ATTR: L1SUSPEND Position       */
#define USBD_ATTR_L1SUSPEND_Msk          (0x1ul << USBD_ATTR_L1SUSPEND_Pos)                /*!< USBD_T::ATTR: L1SUSPEND Mask           */

#define USBD_ATTR_L1RESUME_Pos           (13)                                              /*!< USBD_T::ATTR: L1RESUME Position        */
#define USBD_ATTR_L1RESUME_Msk           (0x1ul << USBD_ATTR_L1RESUME_Pos)                 /*!< USBD_T::ATTR: L1RESUME Mask            */

#define USBD_VBUSDET_VBUSDET_Pos         (0)                                               /*!< USBD_T::VBUSDET: VBUSDET Position      */
#define USBD_VBUSDET_VBUSDET_Msk         (0x1ul << USBD_VBUSDET_VBUSDET_Pos)               /*!< USBD_T::VBUSDET: VBUSDET Mask          */

#define USBD_STBUFSEG_STBUFSEG_Pos       (3)                                               /*!< USBD_T::STBUFSEG: STBUFSEG Position    */
#define USBD_STBUFSEG_STBUFSEG_Msk       (0x3ful << USBD_STBUFSEG_STBUFSEG_Pos)            /*!< USBD_T::STBUFSEG: STBUFSEG Mask        */

#define USBD_LPMATTR_LPMLINKSTS_Pos      (0)                                               /*!< USBD_T::LPMATTR: LPMLINKSTS Position   */
#define USBD_LPMATTR_LPMLINKSTS_Msk      (0xful << USBD_LPMATTR_LPMLINKSTS_Pos)            /*!< USBD_T::LPMATTR: LPMLINKSTS Mask       */

#define USBD_LPMATTR_LPMBESL_Pos         (4)                                               /*!< USBD_T::LPMATTR: LPMBESL Position      */
#define USBD_LPMATTR_LPMBESL_Msk         (0xful << USBD_LPMATTR_LPMBESL_Pos)               /*!< USBD_T::LPMATTR: LPMBESL Mask          */

#define USBD_LPMATTR_LPMRWAKUP_Pos       (8)                                               /*!< USBD_T::LPMATTR: LPMRWAKUP Position    */
#define USBD_LPMATTR_LPMRWAKUP_Msk       (0x1ul << USBD_LPMATTR_LPMRWAKUP_Pos)             /*!< USBD_T::LPMATTR: LPMRWAKUP Mask        */

#define USBD_FN_FN_Pos                   (0)                                               /*!< USBD_T::FN: FN Position                */
#define USBD_FN_FN_Msk                   (0x7fful << USBD_FN_FN_Pos)                       /*!< USBD_T::FN: FN Mask                    */

#define USBD_SE0_SE0_Pos                 (0)                                               /*!< USBD_T::SE0: SE0 Position              */
#define USBD_SE0_SE0_Msk                 (0x1ul << USBD_SE0_SE0_Pos)                       /*!< USBD_T::SE0: SE0 Mask                  */

#define USBD_BUFSEG_BUFSEG_Pos          (3)                                                /*!< USBD_EP_T::BUFSEG: BUFSEG Position     */
#define USBD_BUFSEG_BUFSEG_Msk          (0x3ful << USBD_BUFSEG_BUFSEG_Pos)                 /*!< USBD_EP_T::BUFSEG: BUFSEG Mask         */

#define USBD_MXPLD_MXPLD_Pos            (0)                                                /*!< USBD_EP_T::MXPLD: MXPLD Position       */
#define USBD_MXPLD_MXPLD_Msk            (0x1fful << USBD_MXPLD_MXPLD_Pos)                  /*!< USBD_EP_T::MXPLD: MXPLD Mask           */

#define USBD_CFG_EPNUM_Pos              (0)                                                /*!< USBD_EP_T::CFG: EPNUM Position         */
#define USBD_CFG_EPNUM_Msk              (0xful << USBD_CFG_EPNUM_Pos)                      /*!< USBD_EP_T::CFG: EPNUM Mask             */

#define USBD_CFG_ISOCH_Pos              (4)                                                /*!< USBD_EP_T::CFG: ISOCH Position         */
#define USBD_CFG_ISOCH_Msk              (0x1ul << USBD_CFG_ISOCH_Pos)                      /*!< USBD_EP_T::CFG: ISOCH Mask             */

#define USBD_CFG_STATE_Pos              (5)                                                /*!< USBD_EP_T::CFG: STATE Position         */
#define USBD_CFG_STATE_Msk              (0x3ul << USBD_CFG_STATE_Pos)                      /*!< USBD_EP_T::CFG: STATE Mask             */

#define USBD_CFG_DSQSYNC_Pos            (7)                                                /*!< USBD_EP_T::CFG: DSQSYNC Position       */
#define USBD_CFG_DSQSYNC_Msk            (0x1ul << USBD_CFG_DSQSYNC_Pos)                    /*!< USBD_EP_T::CFG: DSQSYNC Mask           */

#define USBD_CFG_CSTALL_Pos             (9)                                                /*!< USBD_EP_T::CFG: CSTALL Position        */
#define USBD_CFG_CSTALL_Msk             (0x1ul << USBD_CFG_CSTALL_Pos)                     /*!< USBD_EP_T::CFG: CSTALL Mask            */

#define USBD_CFGP_CLRRDY_Pos            (0)                                                /*!< USBD_EP_T::CFGP: CLRRDY Position       */
#define USBD_CFGP_CLRRDY_Msk            (0x1ul << USBD_CFGP_CLRRDY_Pos)                    /*!< USBD_EP_T::CFGP: CLRRDY Mask           */

#define USBD_CFGP_SSTALL_Pos            (1)                                                /*!< USBD_EP_T::CFGP: SSTALL Position       */
#define USBD_CFGP_SSTALL_Msk            (0x1ul << USBD_CFGP_SSTALL_Pos)                    /*!< USBD_EP_T::CFGP: SSTALL Mask           */


/**@}*/ /* USBD_CONST */
/**@}*/ /* end of USBD register group */




/*---------------------- Watch Dog Timer Controller -------------------------*/
/**
    @addtogroup WDT Watch Dog Timer Controller(WDT)
    Memory Mapped Structure for WDT Controller
    @{
*/

typedef struct
{


    /**
     * @var WDT_T::CTL
     * Offset: 0x00  WDT Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1]     |RSTEN     |WDT Time-out Reset Enable Bit (Write Protect)
     * |        |          |Setting this bit will enable the WDT time-out reset system function if the WDT up counter value has not been cleared after the specific WDT reset delay period expires.
     * |        |          |0 = WDT time-out reset system function Disabled.
     * |        |          |1 = WDT time-out reset system function Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[2]     |RSTF      |WDT Time-out Reset Flag
     * |        |          |This bit indicates the system has been reset by WDT time-out reset system event or not.
     * |        |          |0 = WDT time-out reset system event did not occur.
     * |        |          |1 = WDT time-out reset system event has been occurred.
     * |        |          |Note: This bit is cleared by writing 1 to it.
     * |[3]     |IF        |WDT Time-out Interrupt Flag
     * |        |          |This bit will set to 1 while WDT up counter value reaches the selected WDT time-out interval.
     * |        |          |0 = WDT time-out interrupt did not occur.
     * |        |          |1 = WDT time-out interrupt occurred.
     * |        |          |Note: This bit is cleared by writing 1 to it.
     * |[4]     |WKEN      |WDT Time-out Wake-up Function Control (Write Protect)
     * |        |          |If this bit is set to 1, while WDT time-out interrupt flag IF (WDT_CTL[3]) is generated and interrupt enable bit INTEN (WDT_CTL[6]) is enabled, the WDT time-out interrupt signal will generate a event to trigger CPU wake-up trigger event to chip.
     * |        |          |0 = Trigger wake-up event function Disabled if WDT time-out interrupt signal generated.
     * |        |          |1 = Trigger wake-up event function Enabled if WDT time-out interrupt signal generated.
     * |        |          |Note1: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note2: Chip can be woken-up by while WDT time-out interrupt signal generated only if WDT clock source is selected to LIRC (10 kHz) or LXT (32 kHz).
     * |[5]     |WKF       |WDT Time-out Wake-up Flag (Write Protect)
     * |        |          |This bit indicates the WDT time-out event has triggered chip wake-up or not.
     * |        |          |0 = WDT does not cause chip wake-up.
     * |        |          |1 = Chip wake-up from Idle or Power-down mode when WDT time-out interrupt signal is generated.
     * |        |          |Note: This bit is cleared by writing 1 to it.
     * |[6]     |INTEN     |WDT Time-out Interrupt Enable Bit (Write Protect)
     * |        |          |If this bit is enabled, when WDT time-out event occurs, the IF (WDT_CTL[3]) will be set to 1 and WDT time-out interrupt signal is generated and inform to CPU.
     * |        |          |0 = WDT time-out interrupt Disabled.
     * |        |          |1 = WDT time-out interrupt Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[7]     |WDTEN     |WDT Enable Bit (Write Protect)
     * |        |          |0 = Set WDT counter stop, and internal up counter value will be reset also.
     * |        |          |1 = Set WDT counter start.
     * |        |          |Note1: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note2: Perform enable or disable WDTEN bit needs 2 * WDT_CLK period to become active, user can read SYNC (WDT_CTL[30]) to check enabe/disable command is completed or not.
     * |        |          |Note3: If CWDTEN[2:0] (combined by with Config0[31] and Config0[4:3]) bits is not configure to 0x111, this bit is forced as 1 and user cannot change this bit to 0.
     * |[10:8]  |TOUTSEL   |WDT Time-out Interval Selection (Write Protect)
     * |        |          |These three bits select the time-out interval period after WDT starts counting.
     * |        |          |000 = 2^4 * WDT_CLK.
     * |        |          |001 = 2^6 * WDT_CLK.
     * |        |          |010 = 2^8 * WDT_CLK.
     * |        |          |011 = 2^10 * WDT_CLK.
     * |        |          |100 = 2^12 * WDT_CLK.
     * |        |          |101 = 2^14 * WDT_CLK.
     * |        |          |110 = 2^16 * WDT_CLK.
     * |        |          |111 = 2^18 * WDT_CLK.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[30]    |SYNC      |WDT Enable Control SYNC Flag Indicator (Read Only)
     * |        |          |If user execute enable/disable WDTEN (WDT_CTL[7]), this flag can be indicated enable/disable WDTEN function is completed or not.
     * |        |          |0 = Set WDTEN bit is completed.
     * |        |          |1 = Set WDTEN bit is synchronizing and not become active yet.
     * |        |          |Note: Perform enable or disable WDTEN bit needs 2 * WDT_CLK period to become active.
     * |[31]    |ICEDEBUG  |ICE Debug Mode Acknowledge Disable Bit (Write Protect)
     * |        |          |0 = ICE debug mode acknowledgement affects WDT counting.
     * |        |          |WDT up counter will be held while CPU is held by ICE.
     * |        |          |1 = ICE debug mode acknowledgement Disabled.
     * |        |          |WDT up counter will keep going no matter CPU is held by ICE or not.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var WDT_T::ALTCTL
     * Offset: 0x04  WDT Alternative Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1:0]   |RSTDSEL   |WDT Reset Delay Period Selection (Write Protect)
     * |        |          |When WDT time-out event happened, user has a time named WDT Reset Delay Period to clear execute WDT counter by setting RSTCNT (WDT_CTL[0]) reset to prevent WDT time-out reset system occurredhappened
     * |        |          |User can select a suitable setting of RSTDSEL for different application programWDT Reset Delay Period.
     * |        |          |00 = WDT Reset Delay Period is 1026 * WDT_CLK.
     * |        |          |01 = WDT Reset Delay Period is 130 * WDT_CLK.
     * |        |          |10 = WDT Reset Delay Period is 18 * WDT_CLK.
     * |        |          |11 = WDT Reset Delay Period is 3 * WDT_CLK.
     * |        |          |Note1: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note2: This register will be reset to 0 if WDT time-out reset system event occurred.
     * @var WDT_T::RSTCNT
     * Offset: 0x08  WDT Reset Counter Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |RSTCNT    |WDT Reset Counter Register
     * |        |          |Writing 0x00005AA5 to this field will reset the internal 18-bit WDT up counter value to 0.
     * |        |          |Note: Perform RSTCNT to reset counter needs 2 * WDT_CLK period to become active.
     */
    __IO uint32_t CTL;                   /*!< [0x0000] WDT Control Register                                             */
    __IO uint32_t ALTCTL;                /*!< [0x0004] WDT Alternative Control Register                                 */
    __O  uint32_t RSTCNT;                /*!< [0x0008] WDT Reset Counter Register                                       */

} WDT_T;

/**
    @addtogroup WDT_CONST WDT Bit Field Definition
    Constant Definitions for WDT Controller
    @{
*/

#define WDT_CTL_RSTEN_Pos                (1)                                               /*!< WDT_T::CTL: RSTEN Position             */
#define WDT_CTL_RSTEN_Msk                (0x1ul << WDT_CTL_RSTEN_Pos)                      /*!< WDT_T::CTL: RSTEN Mask                 */

#define WDT_CTL_RSTF_Pos                 (2)                                               /*!< WDT_T::CTL: RSTF Position              */
#define WDT_CTL_RSTF_Msk                 (0x1ul << WDT_CTL_RSTF_Pos)                       /*!< WDT_T::CTL: RSTF Mask                  */

#define WDT_CTL_IF_Pos                   (3)                                               /*!< WDT_T::CTL: IF Position                */
#define WDT_CTL_IF_Msk                   (0x1ul << WDT_CTL_IF_Pos)                         /*!< WDT_T::CTL: IF Mask                    */

#define WDT_CTL_WKEN_Pos                 (4)                                               /*!< WDT_T::CTL: WKEN Position              */
#define WDT_CTL_WKEN_Msk                 (0x1ul << WDT_CTL_WKEN_Pos)                       /*!< WDT_T::CTL: WKEN Mask                  */

#define WDT_CTL_WKF_Pos                  (5)                                               /*!< WDT_T::CTL: WKF Position               */
#define WDT_CTL_WKF_Msk                  (0x1ul << WDT_CTL_WKF_Pos)                        /*!< WDT_T::CTL: WKF Mask                   */

#define WDT_CTL_INTEN_Pos                (6)                                               /*!< WDT_T::CTL: INTEN Position             */
#define WDT_CTL_INTEN_Msk                (0x1ul << WDT_CTL_INTEN_Pos)                      /*!< WDT_T::CTL: INTEN Mask                 */

#define WDT_CTL_WDTEN_Pos                (7)                                               /*!< WDT_T::CTL: WDTEN Position             */
#define WDT_CTL_WDTEN_Msk                (0x1ul << WDT_CTL_WDTEN_Pos)                      /*!< WDT_T::CTL: WDTEN Mask                 */

#define WDT_CTL_TOUTSEL_Pos              (8)                                               /*!< WDT_T::CTL: TOUTSEL Position           */
#define WDT_CTL_TOUTSEL_Msk              (0x7ul << WDT_CTL_TOUTSEL_Pos)                    /*!< WDT_T::CTL: TOUTSEL Mask               */

#define WDT_CTL_SYNC_Pos                 (30)                                              /*!< WDT_T::CTL: SYNC Position              */
#define WDT_CTL_SYNC_Msk                 (0x1ul << WDT_CTL_SYNC_Pos)                       /*!< WDT_T::CTL: SYNC Mask                  */

#define WDT_CTL_ICEDEBUG_Pos             (31)                                              /*!< WDT_T::CTL: ICEDEBUG Position          */
#define WDT_CTL_ICEDEBUG_Msk             (0x1ul << WDT_CTL_ICEDEBUG_Pos)                   /*!< WDT_T::CTL: ICEDEBUG Mask              */

#define WDT_ALTCTL_RSTDSEL_Pos           (0)                                               /*!< WDT_T::ALTCTL: RSTDSEL Position        */
#define WDT_ALTCTL_RSTDSEL_Msk           (0x3ul << WDT_ALTCTL_RSTDSEL_Pos)                 /*!< WDT_T::ALTCTL: RSTDSEL Mask            */

#define WDT_RSTCNT_RSTCNT_Pos            (0)                                               /*!< WDT_T::RSTCNT: RSTCNT Position         */
#define WDT_RSTCNT_RSTCNT_Msk            (0xfffffffful << WDT_RSTCNT_RSTCNT_Pos)           /*!< WDT_T::RSTCNT: RSTCNT Mask             */


/**@}*/ /* WDT_CONST */
/**@}*/ /* end of WDT register group */


/*---------------------- Window Watchdog Timer -------------------------*/
/**
    @addtogroup WWDT Window Watchdog Timer(WWDT)
    Memory Mapped Structure for WWDT Controller
    @{
*/

typedef struct
{


    /**
     * @var WWDT_T::RLDCNT
     * Offset: 0x00  WWDT Reload Counter Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |RLDCNT    |WWDT Reload Counter Register
     * |        |          |Writing only 0x00005AA5 to this register will reload the WWDT counter value to 0x3F.
     * |        |          |Note1: User can only execute the reload WWDT counter value command when current CNTDAT (WWDT_CNT[5:0]) is between 1 and CMPDAT (WWDT_CTL[21:16]).
     * |        |          |If user writes 0x00005AA5 in WWDT_RLDCNT register when current CNTDAT is larger than CMPDAT, WWDT reset signal system event will be generated immediately.
     * |        |          |Note2: Execute WWDT counter relaod always needs (WWDT_CLK *3) period to reload CNTDAT to 0x3F and intrenal prescale counter will be reset also.
     * @var WWDT_T::CTL
     * Offset: 0x04  WWDT Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |WWDTEN    |WWDT Enable Bit
     * |        |          |Set this bit to start WWDT counter counting.
     * |        |          |0 = WWDT counter is stopped.
     * |        |          |1 = WWDT counter is starting counting.
     * |[1]     |INTEN     |WWDT Interrupt Enable Bit
     * |        |          |If this bit is enabled, when WWDTIF (WWDT_STATUS[0]) is set to 1, the WWDT counter compare match interrupt signal is generated and inform to CPU.
     * |        |          |0 = WWDT counter compare match interrupt Disabled.
     * |        |          |1 = WWDT counter compare match interrupt Enabled.
     * |[11:8]  |PSCSEL    |WWDT Counter Prescale Period Selection
     * |        |          |0000 = Pre-scale is 1; Max time-out period is 1 * 64 * WWDT_CLK.
     * |        |          |0001 = Pre-scale is 2; Max time-out period is 2 * 64 * WWDT_CLK.
     * |        |          |0010 = Pre-scale is 4; Max time-out period is 4 * 64 * WWDT_CLK.
     * |        |          |0011 = Pre-scale is 8; Max time-out period is 8 * 64 * WWDT_CLK.
     * |        |          |0100 = Pre-scale is 16; Max time-out period is 16 * 64 * WWDT_CLK.
     * |        |          |0101 = Pre-scale is 32; Max time-out period is 32 * 64 * WWDT_CLK.
     * |        |          |0110 = Pre-scale is 64; Max time-out period is 64 * 64 * WWDT_CLK.
     * |        |          |0111 = Pre-scale is 128; Max time-out period is 128 * 64 * WWDT_CLK.
     * |        |          |1000 = Pre-scale is 192; Max time-out period is 192 * 64 * WWDT_CLK.
     * |        |          |1001 = Pre-scale is 256; Max time-out period is 256 * 64 * WWDT_CLK.
     * |        |          |1010 = Pre-scale is 384; Max time-out period is 384 * 64 * WWDT_CLK.
     * |        |          |1011 = Pre-scale is 512; Max time-out period is 512 * 64 * WWDT_CLK.
     * |        |          |1100 = Pre-scale is 768; Max time-out period is 768 * 64 * WWDT_CLK.
     * |        |          |1101 = Pre-scale is 1024; Max time-out period is 1024 * 64 * WWDT_CLK.
     * |        |          |1110 = Pre-scale is 1536; Max time-out period is 1536 * 64 * WWDT_CLK.
     * |        |          |1111 = Pre-scale is 2048; Max time-out period is 2048 * 64 * WWDT_CLK.
     * |[21:16] |CMPDAT    |WWDT Window Compare Value
     * |        |          |Set this field to adjust the valid reload window interval when WWDTIF (WWDT_STATUS[0]) is generated..
     * |        |          |Note: User can only write WWDT_RLDCNT register to reload WWDT counter value when current WWDT CNTDAT (WWDT_CNT[5:0]) is between 1 and CMPDAT.
     * |        |          |If user writes 0x00005AA5 in WWDT_RLDCNT register when current CNTDAT is larger than CMPDAT, WWDT reset system event will be generated immediately.
     * |[31]    |ICEDEBUG  |ICE Debug Mode Acknowledge Disable Bit
     * |        |          |0 = ICE debug mode acknowledgement effects WWDT counter counting.
     * |        |          |The WWDT down counter will be held while CPU is held by ICE.
     * |        |          |1 = ICE debug mode acknowledgement Disabled.
     * |        |          |The WWDT down counter will keep going counting no matter CPU is held by ICE or not.
     * @var WWDT_T::STATUS
     * Offset: 0x08  WWDT Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |WWDTIF    |WWDT Compare Match Interrupt Flag
     * |        |          |This bit indicates that current CNTDAT (WWDT_CNT[5:0]) matches the CMPDAT (WWDT_CTL[21:16]).
     * |        |          |0 = No effect.
     * |        |          |1 = WWDT CNTDAT matches the CMPDAT.
     * |        |          |Note: This bit is cleared by writing 1 to it.
     * |[1]     |WWDTRF    |WWDT Timer-out Reset System Flag
     * |        |          |If this bit is set to 1, it indicates that system has been reset by WWDT counter time-out reset system event.
     * |        |          |0 = WWDT time-out reset system event did not occur.
     * |        |          |1 = WWDT time-out reset system event occurred.
     * |        |          |Note: This bit is cleared by writing 1 to it.
     * @var WWDT_T::CNT
     * Offset: 0x0C  WWDT Counter Value Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[5:0]   |CNTDAT    |WWDT Counter Value
     * |        |          |CNTDAT will be up2025-07-16d continuously.
     */
    __O  uint32_t RLDCNT;                /*!< [0x0000] WWDT Reload Counter Register                                     */
    __IO uint32_t CTL;                   /*!< [0x0004] WWDT Control Register                                            */
    __IO uint32_t STATUS;                /*!< [0x0008] WWDT Status Register                                             */
    __I  uint32_t CNT;                   /*!< [0x000c] WWDT Counter Value Register                                      */

} WWDT_T;

/**
    @addtogroup WWDT_CONST WWDT Bit Field Definition
    Constant Definitions for WWDT Controller
    @{
*/

#define WWDT_RLDCNT_RLDCNT_Pos           (0)                                               /*!< WWDT_T::RLDCNT: RLDCNT Position        */
#define WWDT_RLDCNT_RLDCNT_Msk           (0xfffffffful << WWDT_RLDCNT_RLDCNT_Pos)          /*!< WWDT_T::RLDCNT: RLDCNT Mask            */

#define WWDT_CTL_WWDTEN_Pos              (0)                                               /*!< WWDT_T::CTL: WWDTEN Position           */
#define WWDT_CTL_WWDTEN_Msk              (0x1ul << WWDT_CTL_WWDTEN_Pos)                    /*!< WWDT_T::CTL: WWDTEN Mask               */

#define WWDT_CTL_INTEN_Pos               (1)                                               /*!< WWDT_T::CTL: INTEN Position            */
#define WWDT_CTL_INTEN_Msk               (0x1ul << WWDT_CTL_INTEN_Pos)                     /*!< WWDT_T::CTL: INTEN Mask                */

#define WWDT_CTL_PSCSEL_Pos              (8)                                               /*!< WWDT_T::CTL: PSCSEL Position           */
#define WWDT_CTL_PSCSEL_Msk              (0xful << WWDT_CTL_PSCSEL_Pos)                    /*!< WWDT_T::CTL: PSCSEL Mask               */

#define WWDT_CTL_CMPDAT_Pos              (16)                                              /*!< WWDT_T::CTL: CMPDAT Position           */
#define WWDT_CTL_CMPDAT_Msk              (0x3ful << WWDT_CTL_CMPDAT_Pos)                   /*!< WWDT_T::CTL: CMPDAT Mask               */

#define WWDT_CTL_ICEDEBUG_Pos            (31)                                              /*!< WWDT_T::CTL: ICEDEBUG Position         */
#define WWDT_CTL_ICEDEBUG_Msk            (0x1ul << WWDT_CTL_ICEDEBUG_Pos)                  /*!< WWDT_T::CTL: ICEDEBUG Mask             */

#define WWDT_STATUS_WWDTIF_Pos           (0)                                               /*!< WWDT_T::STATUS: WWDTIF Position        */
#define WWDT_STATUS_WWDTIF_Msk           (0x1ul << WWDT_STATUS_WWDTIF_Pos)                 /*!< WWDT_T::STATUS: WWDTIF Mask            */

#define WWDT_STATUS_WWDTRF_Pos           (1)                                               /*!< WWDT_T::STATUS: WWDTRF Position        */
#define WWDT_STATUS_WWDTRF_Msk           (0x1ul << WWDT_STATUS_WWDTRF_Pos)                 /*!< WWDT_T::STATUS: WWDTRF Mask            */

#define WWDT_CNT_CNTDAT_Pos              (0)                                               /*!< WWDT_T::CNT: CNTDAT Position           */
#define WWDT_CNT_CNTDAT_Msk              (0x3ful << WWDT_CNT_CNTDAT_Pos)                   /*!< WWDT_T::CNT: CNTDAT Mask               */

/**@}*/ /* WWDT_CONST */
/**@}*/ /* end of WWDT register group */

/**@}*/ /* end of REGISTER group */


/******************************************************************************/
/*                         Peripheral memory map                              */
/******************************************************************************/
/** @addtogroup PERIPHERAL_BASE Peripheral Memory Base
  Memory Mapped Structure for Series Peripheral
  @{
 */
/* Peripheral and SRAM base address */
#define FLASH_BASE          ((     uint32_t)0x00000000)
#define SRAM_BASE           ((     uint32_t)0x20000000)
#define AHB_BASE            ((     uint32_t)0x50000000)
#define APB1_BASE           ((     uint32_t)0x40000000)
#define APB2_BASE           ((     uint32_t)0x40100000)

/* Peripheral memory map */
#define GPIO_BASE           (AHB_BASE       + 0x4000)                   /*!< GPIO Base Address                                   */
#define PA_BASE             (GPIO_BASE              )                   /*!< GPIO PA Base Address                                */
#define PB_BASE             (GPIO_BASE      + 0x0040)                   /*!< GPIO PB Base Address                                */
#define PC_BASE             (GPIO_BASE      + 0x0080)                   /*!< GPIO PC Base Address                                */
#define PD_BASE             (GPIO_BASE      + 0x00C0)                   /*!< GPIO PD Base Address                                */
#define PF_BASE             (GPIO_BASE      + 0x0140)                   /*!< GPIO PF Base Address                                */
#define GPIO_DBCTL_BASE     (GPIO_BASE      + 0x0180)                   /*!< GPIO De-bounce Cycle Control Base Address           */
#define GPIO_PIN_DATA_BASE  (GPIO_BASE      + 0x0200)                   /*!< GPIO Pin Data Input/Output Control Base Address     */

#define UART0_BASE          (APB1_BASE      + 0x50000)                  /*!< UART0 Base Address                               */
#define UART1_BASE          (APB2_BASE      + 0x50000)                  /*!< UART1 Base Address                               */

#define TIMER0_BASE         (APB1_BASE      + 0x10000)                  /*!< Timer0 Base Address                              */
#define TIMER1_BASE         (APB1_BASE      + 0x10020)                  /*!< Timer1 Base Address                              */
#define TIMER2_BASE         (APB2_BASE      + 0x10000)                  /*!< Timer2 Base Address                              */
#define TIMER3_BASE         (APB2_BASE      + 0x10020)                  /*!< Timer3 Base Address                              */

#define WDT_BASE            (APB1_BASE      + 0x4000)                   /*!< Watch Dog Timer Base Address                     */

#define WWDT_BASE           (APB1_BASE      + 0x4100)                   /*!< Window Watch Dog Timer Base Address              */

#define SPI0_BASE           (APB1_BASE      + 0x30000)                  /*!< SPI0 Base Address                                */
#define SPI1_BASE           (APB1_BASE      + 0x34000)                  /*!< SPI1 Base Address                                */

#define I2C0_BASE           (APB1_BASE      + 0x20000)                  /*!< I2C0 Base Address                                */
#define I2C1_BASE           (APB2_BASE      + 0x20000)                  /*!< I2C1 Base Address                                */

#define ADC_BASE            (APB1_BASE      + 0xE0000)                  /*!< ADC Base Address                                 */

#define CLK_BASE            (AHB_BASE       + 0x00200)                  /*!< System Clock Controller Base Address             */

#define SYS_BASE            (AHB_BASE       + 0x00000)                  /*!< System Global Controller Base Address            */

#define INT_BASE            (AHB_BASE       + 0x00300)                  /*!< Interrupt Source Controller Base Address         */

#define FMC_BASE            (AHB_BASE       + 0x0C000)                  /*!< Flash Memory Controller Base Address             */

#define BPWM0_BASE          (APB1_BASE      + 0x40000)                  /*!< BPWM0 Base Address                               */
#define BPWM1_BASE          (APB2_BASE      + 0x40000)                  /*!< BPWM1 Base Address                               */
#define BPWM2_BASE          (APB1_BASE      + 0x44000)                  /*!< BPWM2 Base Address                               */
#define BPWM3_BASE          (APB2_BASE      + 0x44000)                  /*!< BPWM3 Base Address                               */

#define HDIV_BASE           (AHB_BASE       + 0x14000)                  /*!< HDIV Base Address                                */

#define CRC_BASE            (AHB_BASE       + 0x18000)                  /*!< CRC Base Address                                 */

#define USBD_BASE           (APB1_BASE      + 0x60000)                  /*!< USB Device Base Address                          */

#define PDMA_BASE           (AHB_BASE       + 0x08000)                  /*!< PDMA Base Address                                */

#define LLSI0_BASE           (APB1_BASE      + 0x54000)                  /*!< LLSI0 Base Address                              */
#define LLSI1_BASE           (APB2_BASE      + 0x54000)                  /*!< LLSI1 Base Address                              */
#define LLSI2_BASE           (APB1_BASE      + 0x54200)                  /*!< LLSI2 Base Address                              */
#define LLSI3_BASE           (APB2_BASE      + 0x54200)                  /*!< LLSI3 Base Address                              */
#define LLSI4_BASE           (APB1_BASE      + 0x54400)                  /*!< LLSI4 Base Address                              */
#define LLSI5_BASE           (APB2_BASE      + 0x54400)                  /*!< LLSI5 Base Address                              */
#define LLSI6_BASE           (APB1_BASE      + 0x54600)                  /*!< LLSI6 Base Address                              */
#define LLSI7_BASE           (APB2_BASE      + 0x54600)                  /*!< LLSI7 Base Address                              */
#define LLSI8_BASE           (APB1_BASE      + 0x54800)                  /*!< LLSI8 Base Address                              */
#define LLSI9_BASE           (APB2_BASE      + 0x54800)                  /*!< LLSI9 Base Address                              */

/**@}*/ /* PERIPHERAL_BASE */

/******************************************************************************/
/*                         Peripheral declaration                             */
/******************************************************************************/

/** @addtogroup PMODULE Peripheral Pointer
  The Declaration of Peripheral Pointer
  @{
 */
#define PA                  ((GPIO_T *) PA_BASE)                        /*!< GPIO PORTA Configuration Struct                        */
#define PB                  ((GPIO_T *) PB_BASE)                        /*!< GPIO PORTB Configuration Struct                        */
#define PC                  ((GPIO_T *) PC_BASE)                        /*!< GPIO PORTC Configuration Struct                        */
#define PD                  ((GPIO_T *) PD_BASE)                        /*!< GPIO PORTD Configuration Struct                        */
#define PF                  ((GPIO_T *) PF_BASE)                        /*!< GPIO PORTF Configuration Struct                        */
#define GPIO                ((GPIO_DBCTL_T *) GPIO_DBCTL_BASE)          /*!< Interrupt De-bounce Cycle Control Configuration Struct */

#define UART0               ((UART_T *) UART0_BASE)                     /*!< UART0 Configuration Struct                       */
#define UART1               ((UART_T *) UART1_BASE)                     /*!< UART1 Configuration Struct                       */

#define TIMER0              ((TIMER_T *) TIMER0_BASE)                   /*!< TIMER0 Configuration Struct                      */
#define TIMER1              ((TIMER_T *) TIMER1_BASE)                   /*!< TIMER1 Configuration Struct                      */
#define TIMER2              ((TIMER_T *) TIMER2_BASE)                   /*!< TIMER2 Configuration Struct                      */
#define TIMER3              ((TIMER_T *) TIMER3_BASE)                   /*!< TIMER3 Configuration Struct                      */

#define WDT                 ((WDT_T *) WDT_BASE)                        /*!< Watch Dog Timer Configuration Struct             */

#define WWDT                ((WWDT_T *) WWDT_BASE)                      /*!< Window Watch Dog Timer Configuration Struct      */

#define SPI0                ((SPI_T *) SPI0_BASE)                       /*!< SPI0 Configuration Struct                        */
#define SPI1                ((SPI_T *) SPI1_BASE)                       /*!< SPI1 Configuration Struct                        */

#define I2C0                ((I2C_T *) I2C0_BASE)                       /*!< I2C0 Configuration Struct                        */
#define I2C1                ((I2C_T *) I2C1_BASE)                       /*!< I2C1 Configuration Struct                        */

#define RTC                 ((RTC_T *) RTC_BASE)                        /*!< RTC Configuration Struct                         */

#define ADC                 ((ADC_T *) ADC_BASE)                        /*!< ADC Configuration Struct                         */

#define CLK                 ((CLK_T *) CLK_BASE)                        /*!< System Clock Controller Configuration Struct     */

#define SYS                 ((SYS_T *) SYS_BASE)                        /*!< System Global Controller Configuration Struct    */

#define SYSINT              ((SYS_INT_T *) INT_BASE)                    /*!< Interrupt Source Controller Configuration Struct */

#define FMC                 ((FMC_T *) FMC_BASE)                        /*!< Flash Memory Controller */

#define BPWM0                ((BPWM_T *) BPWM0_BASE)                    /*!< BPWM0 Configuration Struct                        */
#define BPWM1                ((BPWM_T *) BPWM1_BASE)                    /*!< BPWM1 Configuration Struct                        */
#define BPWM2                ((BPWM_T *) BPWM2_BASE)                    /*!< BPWM2 Configuration Struct                        */
#define BPWM3                ((BPWM_T *) BPWM3_BASE)                    /*!< BPWM3 Configuration Struct                        */

#define CRC                 ((CRC_T *) CRC_BASE)                        /*!< CRC Configuration Struct                         */

#define USBD                ((USBD_T *) USBD_BASE)                      /*!< USB Device Configuration Struct                  */

#define PDMA                ((PDMA_T *) PDMA_BASE)                      /*!< PDMA Configuration Struct                        */

#define LLSI0               ((LLSI_T *) LLSI0_BASE)                     /*!< LLSI0 Configuration Struct                       */
#define LLSI1               ((LLSI_T *) LLSI1_BASE)                     /*!< LLSI1 Configuration Struct                       */
#define LLSI2               ((LLSI_T *) LLSI2_BASE)                     /*!< LLSI2 Configuration Struct                       */
#define LLSI3               ((LLSI_T *) LLSI3_BASE)                     /*!< LLSI3 Configuration Struct                       */
#define LLSI4               ((LLSI_T *) LLSI4_BASE)                     /*!< LLSI4 Configuration Struct                       */
#define LLSI5               ((LLSI_T *) LLSI5_BASE)                     /*!< LLSI5 Configuration Struct                       */
#define LLSI6               ((LLSI_T *) LLSI6_BASE)                     /*!< LLSI6 Configuration Struct                       */
#define LLSI7               ((LLSI_T *) LLSI7_BASE)                     /*!< LLSI7 Configuration Struct                       */
#define LLSI8               ((LLSI_T *) LLSI8_BASE)                     /*!< LLSI8 Configuration Struct                       */
#define LLSI9               ((LLSI_T *) LLSI9_BASE)                     /*!< LLSI9 Configuration Struct                       */
/**@}*/ /* end of group PMODULE */


//=============================================================================
typedef volatile unsigned char  vu8;
typedef volatile unsigned long  vu32;
typedef volatile unsigned short vu16;
#define M8(adr)  (*((vu8  *) (adr)))
#define M16(adr) (*((vu16 *) (adr)))
#define M32(adr) (*((vu32 *) (adr)))

#define outpw(port,value)   (*((volatile unsigned int *)(port))=(value))
#define inpw(port)          ((*((volatile unsigned int *)(port))))
#define outpb(port,value)   (*((volatile unsigned char *)(port))=(value))
#define inpb(port)          ((*((volatile unsigned char *)(port))))
#define outps(port,value)   (*((volatile unsigned short *)(port))=(value))
#define inps(port)          ((*((volatile unsigned short *)(port))))

#define outp32(port,value)  (*((volatile unsigned int *)(port))=(value))
#define inp32(port)         ((*((volatile unsigned int *)(port))))
#define outp8(port,value)   (*((volatile unsigned char *)(port))=(value))
#define inp8(port)          ((*((volatile unsigned char *)(port))))
#define outp16(port,value)  (*((volatile unsigned short *)(port))=(value))
#define inp16(port)         ((*((volatile unsigned short *)(port))))


#define E_SUCCESS   0
#ifndef NULL
#define NULL        0
#endif

#define TRUE        1
#define FALSE       0

#define ENABLE      1
#define DISABLE     0

/* Bit Mask Definitions */
#define BIT0    0x00000001
#define BIT1    0x00000002
#define BIT2    0x00000004
#define BIT3    0x00000008
#define BIT4    0x00000010
#define BIT5    0x00000020
#define BIT6    0x00000040
#define BIT7    0x00000080
#define BIT8    0x00000100
#define BIT9    0x00000200
#define BIT10   0x00000400
#define BIT11   0x00000800
#define BIT12   0x00001000
#define BIT13   0x00002000
#define BIT14   0x00004000
#define BIT15   0x00008000
#define BIT16   0x00010000
#define BIT17   0x00020000
#define BIT18   0x00040000
#define BIT19   0x00080000
#define BIT20   0x00100000
#define BIT21   0x00200000
#define BIT22   0x00400000
#define BIT23   0x00800000
#define BIT24   0x01000000
#define BIT25   0x02000000
#define BIT26   0x04000000
#define BIT27   0x08000000
#define BIT28   0x10000000
#define BIT29   0x20000000
#define BIT30   0x40000000
#define BIT31   0x80000000


/* Byte Mask Definitions */
#define BYTE0_Msk               (0x000000FF)
#define BYTE1_Msk               (0x0000FF00)
#define BYTE2_Msk               (0x00FF0000)
#define BYTE3_Msk               (0xFF000000)

#define _GET_BYTE0(u32Param)    (((u32Param) & BYTE0_Msk)      )  /*!< Extract Byte 0 (Bit  0~ 7) from parameter u32Param */
#define _GET_BYTE1(u32Param)    (((u32Param) & BYTE1_Msk) >>  8)  /*!< Extract Byte 1 (Bit  8~15) from parameter u32Param */
#define _GET_BYTE2(u32Param)    (((u32Param) & BYTE2_Msk) >> 16)  /*!< Extract Byte 2 (Bit 16~23) from parameter u32Param */
#define _GET_BYTE3(u32Param)    (((u32Param) & BYTE3_Msk) >> 24)  /*!< Extract Byte 3 (Bit 24~31) from parameter u32Param */


/******************************************************************************/
/*                         Peripheral header files                            */
/******************************************************************************/
// Note: Changed for MikroE implementation.
// #include "sys.h"
// Note: Changed for MikroE implementation.
// #include "clk.h"
// Note: Changed for MikroE implementation.
// #include "adc.h"
// Note: Changed for MikroE implementation.
// #include "fmc.h"
// Note: Changed for MikroE implementation.
// #include "gpio.h"
// Note: Changed for MikroE implementation.
// #include "i2c.h"
// Note: Changed for MikroE implementation.
// #include "bpwm.h"
// Note: Changed for MikroE implementation.
// #include "spi.h"
// Note: Changed for MikroE implementation.
// #include "timer.h"
// Note: Changed for MikroE implementation.
// #include "wdt.h"
// Note: Changed for MikroE implementation.
// #include "wwdt.h"
// Note: Changed for MikroE implementation.
// #include "uart.h"
// Note: Changed for MikroE implementation.
// #include "crc.h"
// Note: Changed for MikroE implementation.
// #include "usbd.h"
// Note: Changed for MikroE implementation.
// #include "pdma.h"
// Note: Changed for MikroE implementation.
// #include "llsi.h"
#endif
