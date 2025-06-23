/**************************************************************************//**
 * @file     sys_reg.h
 * @version  V1.00
 * @brief    SYS register definition header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __SYS_REG_H__
#define __SYS_REG_H__

#if defined ( __CC_ARM   )
#pragma anon_unions
#endif

/**
   @addtogroup REGISTER Control Register
   @{
*/

/**
    @addtogroup SYS System Manger Controller (SYS)
    Memory Mapped Structure for SYS Controller
@{ */

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
     * |        |          |The POR reset flag is set by the "Reset Signal" from the Power-on Reset (POR) Controller or bit CHIPRST (SYS_IPRST0[0]) to indicate the previous reset source.
     * |        |          |0 = No reset from POR or CHIPRST.
     * |        |          |1 = Power-on Reset (POR) or CHIPRST had issued the reset signal to reset the system.
     * |        |          |Note: Write 1 to clear this bit to 0.
     * |[1]     |PINRF     |NRESET Pin Reset Flag
     * |        |          |The nRESET pin reset flag is set by the "Reset Signal" from the nRESET Pin to indicate the previous reset source.
     * |        |          |0 = No reset from nRESET pin.
     * |        |          |1 = Pin nRESET had issued the reset signal to reset the system.
     * |        |          |Note: Write 1 to clear this bit to 0.
     * |[2]     |WDTRF     |WDT Reset Flag
     * |        |          |The WDT reset flag is set by the "Reset Signal" from the Watchdog Timer or Window Watchdog Timer to indicate the previous reset source.
     * |        |          |0 = No reset from watchdog timer or window watchdog timer.
     * |        |          |1 = The watchdog timer or window watchdog timer had issued the reset signal to reset the system.
     * |        |          |Note 1: Write 1 to clear this bit to 0.
     * |        |          |Note 2: Watchdog Timer register RSTF(WDT_CTL[2]) bit is set if the system has been reset by WDT time-out reset
     * |        |          |Window Watchdog Timer register WWDTRF(WWDT_STATUS[1]) bit is set if the system has been reset by WWDT time-out reset.
     * |[3]     |LVRF      |LVR Reset Flag
     * |        |          |The LVR reset flag is set by the "Reset Signal" from the Low Voltage Reset Controller to indicate the previous reset source.
     * |        |          |0 = No reset from LVR.
     * |        |          |1 = LVR controller had issued the reset signal to reset the system.
     * |        |          |Note: Write 1 to clear this bit to 0.
     * |[4]     |BODRF     |BOD Reset Flag
     * |        |          |The BOD reset flag is set by the "Reset Signal" from the Brown-Out Detector to indicate the previous reset source.
     * |        |          |0 = No reset from BOD.
     * |        |          |1 = The BOD had issued the reset signal to reset the system.
     * |        |          |Note: Write 1 to clear this bit to 0.
     * |[5]     |SYSRF     |System Reset Flag
     * |        |          |The system reset flag is set by the "Reset Signal" from the Cortex-M0 Core to indicate the previous reset source.
     * |        |          |0 = No reset from Cortex-M0.
     * |        |          |1 = The Cortex- M0 had issued the reset signal to reset the system by writing 1 to the bit SYSRESETREQ(AIRCR[2], Application Interrupt and Reset Control Register, address = 0xE000ED0C) in system control registers of Cortex-M0 core.
     * |        |          |Note: Write 1 to clear this bit to 0.
     * |[7]     |CPURF     |CPU Reset Flag
     * |        |          |The CPU reset flag is set by hardware if software writes CPURST (SYS_IPRST0[1]) 1 to reset Cortex- M0 Core and Flash Memory Controller (FMC).
     * |        |          |0 = No reset from CPU.
     * |        |          |1 = The Cortex-M0 Core and FMC are reset by software setting CPURST to 1.
     * |        |          |Note: Write to clear this bit to 0.
     * |[8]     |CPULKRF   |CPU Lockup Reset Flag
     * |        |          |0 = No reset from CPU lockup happened.
     * |        |          |1 = The Cortex-M0 lockup happened and chip is reset.
     * |        |          |Note 1: Write 1 to clear this bit to 0.
     * |        |          |Note 2: When CPU lockup happened under ICE is connected, this flag will set to 1 but chip will not reset.
     * @var SYS_T::IPRST0
     * Offset: 0x08  Peripheral  Reset Control Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CHIPRST   |Chip One-shot Reset (Write Protect)
     * |        |          |Setting this bit will reset the whole chip, including processor core and all peripherals, and this bit will automatically return to 0 after the 2 clock cycles.
     * |        |          |The CHIPRST is same as the POR reset, all the chip controllers is reset and the chip setting from Flash are also reload.
     * |        |          |About the difference between CHIPRST and SYSRESETREQ(AIRCR[2]), please refer to section 6.2.2.
     * |        |          |0 = Chip normal operation.
     * |        |          |1 = Chip one-shot reset.
     * |        |          |Note 1: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note 2: Reset by power on reset.
     * |[1]     |CPURST    |Processor Core One-shot Reset (Write Protect)
     * |        |          |Setting this bit will only reset the processor core and Flash Memory Controller(FMC), and this bit will automatically return to 0 after 2 clock cycles.
     * |        |          |0 = Processor core normal operation.
     * |        |          |1 = Processor core one-shot reset.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[2]     |PDMARST   |PDMA Controller Reset (Write Protect)
     * |        |          |Setting this bit to 1 will generate a reset signal to the PDMA
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = PDMA controller normal operation.
     * |        |          |1 = PDMA controller reset.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[7]     |CRCRST    |CRC Calculation Controller Reset (Write Protect)
     * |        |          |Set this bit to 1 will generate a reset signal to the CRC calculation controller
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
     * |[13]    |SPI0RST   |SPI0 Controller Reset
     * |        |          |0 = SPI0 controller normal operation.
     * |        |          |1 = SPI0 controller reset.
     * |[16]    |UART0RST  |UART0 Controller Reset
     * |        |          |0 = UART0 controller normal operation.
     * |        |          |1 = UART0 controller reset.
     * |[28]    |ADCRST    |ADC Controller Reset
     * |        |          |0 = ADC controller normal operation.
     * |        |          |1 = ADC controller reset.
     * @var SYS_T::IPRST2
     * Offset: 0x10  Peripheral Reset Control Register 2
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[12]    |DAC01RST  |DAC01 Controller Reset
     * |        |          |0 = DAC0 and DAC1 controller normal operation.
     * |        |          |1 = DAC0 and DAC1 controller reset.
     * |[13]    |DAC23RST  |DAC23 Controller Reset
     * |        |          |0 = DAC2 and DAC3 controller normal operation.
     * |        |          |1 = DAC2 and DAC3 controller reset.
     * |[19]    |BPWMRST   |BPWM Controller Reset
     * |        |          |0 = BPWM controller normal operation.
     * |        |          |1 = BPWM controller reset.
     * |[24]    |MANCHRST  |Manchester Codec Reset
     * |        |          |0 = Manchester codec normal operation.
     * |        |          |1 = Manchester codec reset.
     * |[28]    |TMR4RST   |Timer4 Controller Reset
     * |        |          |0 = Timer4 controller normal operation.
     * |        |          |1 = Timer4 controller reset.
     * |[29]    |TMR5RST   |Timer5 Controller Reset
     * |        |          |0 = Timer5 controller normal operation.
     * |        |          |1 = Timer5 controller reset.
     * |[31]    |TSRST     |Temperature Sensor Reset
     * |        |          |0 = Temperature Sensor normal operation.
     * |        |          |1 = Temperature Sensor reset.
     * @var SYS_T::BODCTL
     * Offset: 0x18  Brown-out Detector Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |BODEN     |Brown-out Detector Enable Bit (Write Protect)
     * |        |          |0 = Brown-out Detector function Disabled.
     * |        |          |1 = Brown-out Detector function Enabled.
     * |        |          |Note 1: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note 2: Reset by power on reset.
     * |[3]     |BODRSTEN  |Brown-out Reset Enable Bit (Write Protect)
     * |        |          |0 = Brown-out "INTERRUPT" function Enabled.
     * |        |          |1 = Brown-out "RESET" function Enabled.
     * |        |          |Note 1: While the Brown-out Detector function is enabled (BODEN is 1) and BOD reset function is enabled (BODRSTEN is 1), BOD will assert a signal to reset chip when the detected voltage is lower than the threshold (BODOUT is 1).
     * |        |          |While the BOD function is enabled (BODEN is 1) and BOD interrupt function is enabled (BODRSTEN is 0), BOD will assert an interrupt if BODOUT is 1.
     * |        |          |BOD interrupt will keep untill the BODEN set to 0.
     * |        |          |BOD interrupt can be blocked by disabling the NVIC BOD interrupt or disabling BOD function (set BODEN to 0).
     * |        |          |Note 2: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note 3: Reset by power on reset.
     * |[4]     |BODIF     |Brown-out Detector Interrupt Flag
     * |        |          |0 = Brown-out Detector does not detect any voltage draft at VDD down through or up through the voltage of BODVL setting.
     * |        |          |1 = When Brown-out Detector detects the VDD is dropped down through the voltage of BODVL setting or the VDD is raised up through the voltage of BODVL setting, this bit is set to 1 and the brown-out interrupt is requested if brown-out interrupt is enabled.
     * |        |          |Note: Write 1 to clear this bit to 0.
     * |[5]     |BODLPM    |Brown-out Detector Low Power Mode (Write Protect)
     * |        |          |0 = BOD operate in normal mode (Default).
     * |        |          |1 = BOD low power mode Enabled.
     * |        |          |Note 1: The BOD consumes about 2uA in normal mode, the BOD low power mode can reduce the current to about 1/30 but slow the BOD response.
     * |        |          |Note 2: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[6]     |BODOUT    |Brown-out Detector Output Status
     * |        |          |0 = Brown-out Detector output status is 0.
     * |        |          |It means the detected voltage is higher than BODVL setting or BODEN is 0.
     * |        |          |1 = Brown-out Detector output status is 1.
     * |        |          |It means the detected voltage is lower than BODVL setting.
     * |        |          |If the BODEN is 0, BOD function disabled , this bit always responds 0000.
     * |[7]     |LVREN     |Low Voltage Reset Enable Bit (Write Protect)
     * |        |          |The LVR function resets the chip when the input power voltage is lower than LVR circuit setting.
     * |        |          |LVR function is enabled by default.
     * |        |          |0 = Low Voltage Reset function Disabled.
     * |        |          |1 = Low Voltage Reset function Enabled.
     * |        |          |Note 1: After enabling the bit, the LVR function will be active with 200us delay for LVR output stable (Default).
     * |        |          |Note 2: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[10:8]  |BODDGSEL  |Brown-out Detector Output De-glitch Time Select (Write Protect)
     * |        |          |000 = BOD output is sampled by LIRC/4 clock.
     * |        |          |001 = 64 system clock (HCLK).
     * |        |          |010 = 128 system clock (HCLK).
     * |        |          |011 = 256 system clock (HCLK).
     * |        |          |100 = 512 system clock (HCLK).
     * |        |          |101 = 1024 system clock (HCLK).
     * |        |          |110 = 2048 system clock (HCLK).
     * |        |          |111 = 4096 system clock (HCLK).
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[14:12] |LVRDGSEL  |LVR Output De-glitch Time Select (Write Protect)
     * |        |          |000 = Without de-glitch function.
     * |        |          |001 = 64 system clock (HCLK).
     * |        |          |010 = 128 system clock (HCLK).
     * |        |          |011 = 256 system clock (HCLK).
     * |        |          |100 = 512 system clock (HCLK).
     * |        |          |101 = 1024 system clock (HCLK).
     * |        |          |110 = 2048 system clock (HCLK).
     * |        |          |111 = 4096 system clock (HCLK).
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[16]    |BODVL     |Brown-out Detector Threshold Voltage Select (Write Protect)
     * |        |          |0 = Brown-Out Detector threshold voltage is 2.5V.
     * |        |          |1 = Brown-Out Detector threshold voltage is 2.7V.
     * |        |          |Note 1: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note 2: Reset by power on reset.
     * @var SYS_T::PORCTL
     * Offset: 0x24  Power-On-reset Controller Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |POROFF    |Power-on Reset Enable Bit (Write Protect)
     * |        |          |When powered on, the POR circuit generates a reset signal to reset the whole chip function, but noise on the power may cause the POR active again.
     * |        |          |User can disable internal POR circuit to avoid unpredictable noise to cause chip reset by writing 0x5AA5 to this field.
     * |        |          |The POR function will be active again when this field is set to another value or chip is reset by other reset source, including:
     * |        |          |nRESET, Watchdog, LVR reset, BOD reset, ICE reset command and the software-chip reset function.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var SYS_T::VREFCTL
     * Offset: 0x28  Voltage Reference Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |VREFEN    |VREF Enable Bit (Write Protect)
     * |        |          |0 = VREF function Disabled. (Default).
     * |        |          |1 = VREF function Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[1]     |VREFSEL   |VREF Output Voltage Select (Write Protect)
     * |        |          |0 = VREF output voltage value is 2.048V. (Default).
     * |        |          |1 = VREF output voltage value is 2.5V.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[6]     |PRELOADEN |VREF Pre-load Enable Bit (Write Protect)
     * |        |          |This bit is set automatically if software set VREFEN (SYS_VREFCTL[0]) to 1.
     * |        |          |0 = VREF Pre-load function Disabled. (Default).
     * |        |          |1 = VREF Pre-load function Enabled.
     * |        |          |Note 1: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note 2: PRELOADEN should be cleared after 2ms of VREFEN enabled, if VREF capacitor is 4.7uF and VREF initial is 0V.
     * |        |          |Note 3: PRELOADEN should be cleared after 480us of VREFEN enabled, if VREF capacitor is 1uF and VREF initial is 0V.
     * |[8]     |SCPDIS    |VREF Short Circuit Protection Disable Control (Write Protect)
     * |        |          |0 = VREF Short Circuit Protection function Enabled. (Default).
     * |        |          |1 = VREF Short Circuit Protection function Disabled.
     * @var SYS_T::GPA_MFPL
     * Offset: 0x30  GPIOA Low Byte Multiple Function Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |PA0MFP    |PA.0 Multi-function Pin Selection
     * |[7:4]   |PA1MFP    |PA.1 Multi-function Pin Selection
     * |[11:8]  |PA2MFP    |PA.2 Multi-function Pin Selection
     * |[15:12] |PA3MFP    |PA.3 Multi-function Pin Selection
     * @var SYS_T::GPA_MFPH
     * Offset: 0x34  GPIOA High Byte Multiple Function Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[19:16] |PA12MFP   |PA.12 Multi-function Pin Selection
     * |[23:20] |PA13MFP   |PA.13 Multi-function Pin Selection
     * |[27:24] |PA14MFP   |PA.14 Multi-function Pin Selection
     * |[31:28] |PA15MFP   |PA.15 Multi-function Pin Selection
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
     * |[7:4]   |PC1MFP    |PC.1 Multi-function Pin Selection
     * @var SYS_T::GPF_MFPL
     * Offset: 0x58  GPIOF Low Byte Multiple Function Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |PF0MFP    |PF.0 Multi-function Pin Selection
     * |[11:8]  |PF2MFP    |PF.2 Multi-function Pin Selection
     * |[15:12] |PF3MFP    |PF.3 Multi-function Pin Selection
     * @var SYS_T::LDOPRELD
     * Offset: 0xA0  LDO Pre-load Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |PRELDIS   |LDO Pre-load Disable Control (Write Protect)
     * |        |          |This bit Disable LDO Pre-load function.
     * |        |          |0 = LDO Pre-load function Enabled.
     * |        |          |1 = LDO Pre-load function Disabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var SYS_T::MODCTL
     * Offset: 0xC0  Modulation Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[16]    |MANCHMODEN0|Manchester Modulation Function Enable
     * |        |          |Each of these bits is used to enable Manchester modulation function with BPWM1_CHn output.
     * |        |          |0 = Modulation Function Disabled.
     * |        |          |1 = Modulation Function Enabled.
     * |[17]    |MANCHMODEN1|Manchester Modulation Function Enable
     * |        |          |Each of these bits is used to enable Manchester modulation function with BPWM1_CHn output.
     * |        |          |0 = Modulation Function Disabled.
     * |        |          |1 = Modulation Function Enabled.
     * |[18]    |MANCHMODEN2|Manchester Modulation Function Enable
     * |        |          |Each of these bits is used to enable Manchester modulation function with BPWM1_CHn output.
     * |        |          |0 = Modulation Function Disabled.
     * |        |          |1 = Modulation Function Enabled.
     * |[19]    |MANCHMODEN3|Manchester Modulation Function Enable
     * |        |          |Each of these bits is used to enable Manchester modulation function with BPWM1_CHn output.
     * |        |          |0 = Modulation Function Disabled.
     * |        |          |1 = Modulation Function Enabled.
     * |[20]    |MANCHMODEN4|Manchester Modulation Function Enable
     * |        |          |Each of these bits is used to enable Manchester modulation function with BPWM1_CHn output.
     * |        |          |0 = Modulation Function Disabled.
     * |        |          |1 = Modulation Function Enabled.
     * |[21]    |MANCHMODEN5|Manchester Modulation Function Enable
     * |        |          |Each of these bits is used to enable Manchester modulation function with BPWM1_CHn output.
     * |        |          |0 = Modulation Function Disabled.
     * |        |          |1 = Modulation Function Enabled.
     * |[24]    |MANCHMODL0|Manchester Modulation at Data Low
     * |        |          |Each of these bits is used to select Manchester modulation with BPWM1_CHn at MANCH_TXD data high or low.
     * |        |          |0 = Manchester modulation with BPWM1_CHn at MANCH_TXD data high.
     * |        |          |1 = Manchester modulation with BPWM1_CHn at MANCH_TXD data low.
     * |[25]    |MANCHMODL1|Manchester Modulation at Data Low
     * |        |          |Each of these bits is used to select Manchester modulation with BPWM1_CHn at MANCH_TXD data high or low.
     * |        |          |0 = Manchester modulation with BPWM1_CHn at MANCH_TXD data high.
     * |        |          |1 = Manchester modulation with BPWM1_CHn at MANCH_TXD data low.
     * |[26]    |MANCHMODL2|Manchester Modulation at Data Low
     * |        |          |Each of these bits is used to select Manchester modulation with BPWM1_CHn at MANCH_TXD data high or low.
     * |        |          |0 = Manchester modulation with BPWM1_CHn at MANCH_TXD data high.
     * |        |          |1 = Manchester modulation with BPWM1_CHn at MANCH_TXD data low.
     * |[27]    |MANCHMODL3|Manchester Modulation at Data Low
     * |        |          |Each of these bits is used to select Manchester modulation with BPWM1_CHn at MANCH_TXD data high or low.
     * |        |          |0 = Manchester modulation with BPWM1_CHn at MANCH_TXD data high.
     * |        |          |1 = Manchester modulation with BPWM1_CHn at MANCH_TXD data low.
     * |[28]    |MANCHMODL4|Manchester Modulation at Data Low
     * |        |          |Each of these bits is used to select Manchester modulation with BPWM1_CHn at MANCH_TXD data high or low.
     * |        |          |0 = Manchester modulation with BPWM1_CHn at MANCH_TXD data high.
     * |        |          |1 = Manchester modulation with BPWM1_CHn at MANCH_TXD data low.
     * |[29]    |MANCHMODL5|Manchester Modulation at Data Low
     * |        |          |Each of these bits is used to select Manchester modulation with BPWM1_CHn at MANCH_TXD data high or low.
     * |        |          |0 = Manchester modulation with BPWM1_CHn at MANCH_TXD data high.
     * |        |          |1 = Manchester modulation with BPWM1_CHn at MANCH_TXD data low.
     * @var SYS_T::SRAM_BISTCTL
     * Offset: 0xD0  System SRAM BIST Test Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |SRBIST    |System SRAM BIST Enable Bit (Write Protect)
     * |        |          |This bit enables BIST test for System SRAM
     * |        |          |0 = System SRAM BIST Disabled.
     * |        |          |1 = System SRAM BIST Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[7]     |PDMABIST  |PDMA SRAM BIST Enable Bit (Write Protect)
     * |        |          |This bit enables BIST test for PDMA SRAM
     * |        |          |0 = PDMA SRAM BIST Disabled.
     * |        |          |1 = PDMA SRAM BIST Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var SYS_T::SRAM_BISTSTS
     * Offset: 0xD4  System SRAM BIST Test Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |SRBISTFF  |System SRAM BIST Fail Flag
     * |        |          |0 = System SRAM BIST test pass.
     * |        |          |1 = System SRAM BIST test fail.
     * |[7]     |PDMABISTF |PDMA SRAM BIST Failed Flag
     * |        |          |0 = PDMA SRAM BIST pass.
     * |        |          |1 = PDMA SRAM BIST failed.
     * |[16]    |SRBEND    |System SRAM BIST Test Finish
     * |        |          |0 = System SRAM BIST active.
     * |        |          |1 = System SRAM BIST finish.
     * |[23]    |PDMAEND   |PDMA SRAM BIST Test Finish
     * |        |          |0 = PDMA SRAM BIST is active.
     * |        |          |1 = PDMA SRAM BIST test finish.
     * @var SYS_T::REGLCTL
     * Offset: 0x100  Register Lock Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |REGLCTL   |Register Lock Control Code (Write Only)
     * |        |          |Some registers have write-protection function.
     * |        |          |Writing these registers have to disable the protected function by writing the sequence value "59h", "16h", "88h" to this field.
     * |        |          |After this sequence is completed, the REGLCTL bit will be set to 1 and write-protection registers can be normal write.
     * |        |          |REGLCTL[0]
     * |        |          |Register Lock Control Disable Index (Read Only)
     * |        |          |0 = Write-protection Enabled for writing protected registers.
     * |        |          |Any write to the protected register is ignored.
     * |        |          |1 = Write-protection Disabled for writing protected registers.
     * @var SYS_T::TSCTL
     * Offset: 0x140  Temperature Sensor Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |TSEN      |Temperature Sensor Enable Bit
     * |        |          |0 = Temperature Sensor function Disabled. (Default)
     * |        |          |1 = Temperature Sensor function Enabled.
     * |[1]     |TSBGEN    |Temperature Sensor Bandgap Enable Bit
     * |        |          |If this bit is set to 1, Temperature sensor bandgap will be enabled and Temperature sensor will supply current source to DAC and Internal Voltage Reference.
     * |        |          |0 = Temperature Sensor Bandgap function Disabled. (Default)
     * |        |          |1 = Temperature Sensor Bandgap function Enabled.
     * |        |          |Note: After TSBGEN is set, users should wait 200us stable time to enable DACEN(DACx_CTL[0]) or VREFEN (SYS_VREFCTL[0])
     * |[2]     |TSST      |Temperature Sensor Conversion Start
     * |        |          |0 = Conversion stops or finished. (Default)
     * |        |          |1 = Conversion starts.
     * |        |          |Note1: User needs to set TSEN first, and wait for at least 200us to start temperature sensor conversion.
     * |        |          |Note2: This bit will be cleared to 0 by hardware automatically when temperature sensor conversion is finished.
     * |        |          |Note3: Conversion time is 84ms in typical case.
     * |[3]     |TSIEN     |Temperature Sensor Interrupt Enable Bit
     * |        |          |If this bit is set to 1, temperature sensor interrupt is requested when TSIF (SYS_TSCTL[16]) is set.
     * |        |          |0 = Temperature Sensor finish interrupt Disabled. (Default)
     * |        |          |1 = Temperature Sensor finish interrupt Enabled.
     * |[16]    |TSIF      |Temperature Sensor Interrupt Flag
     * |        |          |This bit indicates the end of temperature sensor conversion.
     * |        |          |This bit will be set automatically when temperature sensor conversion is finished.
     * |        |          |0 = Tempertaure Sensor conversion not finished.
     * |        |          |1 = Tempertaure Sensor conversion finished.
     * |        |          |Note: Write 1 to clear this to 0.
     * @var SYS_T::TSDATA
     * Offset: 0x144  Temperature Sensor Data Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |TSEOC     |Temperature Sensor Conversion Finish Flag
     * |        |          |This bit indicates the end of temperature sensor conversion.
     * |        |          |Note: Write 1 to clear this bit to 0.
     * |[27:16] |TSDATA    |Temperature Sensor Conversion Data Bits (Read Only)
     * |        |          |This field present the conversion result of Temperature Sensor, ranges from -40u00B0C to 105u00B0C.
     * |        |          |Note: Negative temperature is represented by 2's complement format, and per LSB difference is equivalent to 0.0625u00B0C
     * @var SYS_T::POR18DISAN
     * Offset: 0x1E8  Analog POR18 Disable Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |POR18OFFAN|LDO Power-on Reset Enable Bit (Write Protect)
     * |        |          |After powered on, user can turn off internal analog POR18 circuit to save power by writing 0x5AA5 to this field.
     * |        |          |The analog POR18 circuit will be active again when this field is set to another value or chip is reset by other reset source, including:
     * |        |          |nRESET, Watchdog, LVR reset, BOD reset, ICE reset command and the software-chip reset function.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     */
    __I  uint32_t PDID;                 /*!< [0x0000] Part Device Identification Number Register                    */
    __IO uint32_t RSTSTS;               /*!< [0x0004] System Reset Status Register                                  */
    __IO uint32_t IPRST0;               /*!< [0x0008] Peripheral  Reset Control Register 0                          */
    __IO uint32_t IPRST1;               /*!< [0x000c] Peripheral Reset Control Register 1                           */
    __IO uint32_t IPRST2;               /*!< [0x0010] Peripheral Reset Control Register 2                           */
    __I  uint32_t RESERVE0[1];
    __IO uint32_t BODCTL;               /*!< [0x0018] Brown-out Detector Control Register                           */
    __I  uint32_t RESERVE1[2];
    __IO uint32_t PORCTL;               /*!< [0x0024] Power-On-reset Controller Register                            */
    __IO uint32_t VREFCTL;               /*!< [0x0028] Voltage Reference Control Register                           */
    __I  uint32_t RESERVE2[1];
    __IO uint32_t GPA_MFPL;             /*!< [0x0030] GPIOA Low Byte Multiple Function Control Register             */
    __IO uint32_t GPA_MFPH;             /*!< [0x0034] GPIOA High Byte Multiple Function Control Register            */
    __IO uint32_t GPB_MFPL;             /*!< [0x0038] GPIOB Low Byte Multiple Function Control Register             */
    __IO uint32_t GPB_MFPH;             /*!< [0x003c] GPIOB High Byte Multiple Function Control Register            */
    __IO uint32_t GPC_MFPL;             /*!< [0x0040] GPIOC Low Byte Multiple Function Control Register             */
    __I  uint32_t RESERVE3[5];
    __IO uint32_t GPF_MFPL;             /*!< [0x0058] GPIOF Low Byte Multiple Function Control Register             */
    __I  uint32_t RESERVE4[17];
    __IO uint32_t LDOPRELD;             /*!< [0x00A0] LDO Pre-load Control Register                                 */
    __I  uint32_t RESERVE5[7];
    __IO uint32_t MODCTL;                /*!< [0x00c0] Modulation Control Register                                  */
    __I  uint32_t RESERVE6[3];
    __IO uint32_t SRAM_BISTCTL;         /*!< [0x00d0] System SRAM BIST Test Control Register                        */
    __I  uint32_t SRAM_BISTSTS;         /*!< [0x00d4] System SRAM BIST Test Status Register                         */
    __I  uint32_t RESERVE7[10];
    __O  uint32_t REGLCTL;              /*!< [0x0100] Register Lock Control Register                                */
    __I  uint32_t RESERVE8[15];
    __IO uint32_t TSCTL;                /*!< [0x0140] Temperature Sensor Control Register                           */
    __IO uint32_t TSDATA;               /*!< [0x0144] Temperature Sensor Data Register                              */
    __I  uint32_t RESERVE9[40];
    __IO uint32_t POR18DISAN;           /*!< [0x01e8] Analog POR18 Disable Control Register                         */
} SYS_T;

typedef struct
{
    /**
     * @var NMI_T::NMIEN
     * Offset: 0x00  NMI Source Interrupt Enable Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |BODOUT    |BOD NMI Source Enable (Write Protect)
     * |        |          |0 = BOD NMI source Disabled.
     * |        |          |1 = BOD NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[2]     |PWRWU_INT |Power-down Mode Wake-up NMI Source Enable (Write Protect)
     * |        |          |0 = Power-down mode wake-up NMI source Disabled.
     * |        |          |1 = Power-down mode wake-up NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[8]     |EINT0     |External Interrupt From PB.5 Pin NMI Source Enable (Write Protect)
     * |        |          |0 = External interrupt from PB.5 pin NMI source Disabled.
     * |        |          |1 = External interrupt from PB.5 pin NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[9]     |EINT1     |External Interrupt From PB.4 Pin NMI Source Enable (Write Protect)
     * |        |          |0 = External interrupt from PB.4 pin NMI source Disabled.
     * |        |          |1 = External interrupt from PB.4 pin NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[10]    |EINT2     |External Interrupt From PB.3 Pin NMI Source Enable (Write Protect)
     * |        |          |0 = External interrupt from PB.3 pin NMI source Disabled.
     * |        |          |1 = External interrupt from PB.3 pin NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[11]    |EINT3     |External Interrupt From PB.2 Pin NMI Source Enable (Write Protect)
     * |        |          |0 = External interrupt from PB.2 pin NMI source Disabled.
     * |        |          |1 = External interrupt from PB.2 pin NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[12]    |EINT4     |External Interrupt From PB.6 Pin NMI Source Enable (Write Protect)
     * |        |          |0 = External interrupt from PB.6 pin NMI source Disabled.
     * |        |          |1 = External interrupt from PB.6 pin NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[13]    |EINT5     |External Interrupt From PB.7 Pin NMI Source Enable (Write Protect)
     * |        |          |0 = External interrupt from PB.7 pin NMI source Disabled.
     * |        |          |1 = External interrupt from PB.7 pin NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[14]    |UART0_INT |UART0 NMI Source Enable (Write Protect)
     * |        |          |0 = UART0 NMI source Disabled.
     * |        |          |1 = UART0 NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var NMI_T::NMISTS
     * Offset: 0x04  NMI Source Interrupt Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |BODOUT    |BOD Interrupt Flag (Read Only)
     * |        |          |0 = BOD interrupt is deasserted.
     * |        |          |1 = BOD interrupt is asserted.
     * |[2]     |PWRWU_INT |Power-down Mode Wake-up Interrupt Flag (Read Only)
     * |        |          |0 = Power-down mode wake-up interrupt is deasserted.
     * |        |          |1 = Power-down mode wake-up interrupt is asserted.
     * |[8]     |EINT0     |External Interrupt From PB.5 Pin Interrupt Flag (Read Only)
     * |        |          |0 = External Interrupt from PB.5 interrupt is deasserted.
     * |        |          |1 = External Interrupt from PB.5 interrupt is asserted.
     * |[9]     |EINT1     |External Interrupt From PB.4 Pin Interrupt Flag (Read Only)
     * |        |          |0 = External Interrupt from PB.4 interrupt is deasserted.
     * |        |          |1 = External Interrupt from PB.4 interrupt is asserted.
     * |[10]    |EINT2     |External Interrupt From PB.3 Pin Interrupt Flag (Read Only)
     * |        |          |0 = External Interrupt from PB.3 interrupt is deasserted.
     * |        |          |1 = External Interrupt from PB.3 interrupt is asserted.
     * |[11]    |EINT3     |External Interrupt From PB.2 Pin Interrupt Flag (Read Only)
     * |        |          |0 = External Interrupt from PB.2 interrupt is deasserted.
     * |        |          |1 = External Interrupt from PB.2 interrupt is asserted.
     * |[12]    |EINT4     |External Interrupt From PB.6 Pin Interrupt Flag (Read Only)
     * |        |          |0 = External Interrupt from PB.6 interrupt is deasserted.
     * |        |          |1 = External Interrupt from PB.6 interrupt is asserted.
     * |[13]    |EINT5     |External Interrupt From PB.7 Pin Interrupt Flag (Read Only)
     * |        |          |0 = External Interrupt from PB.7 interrupt is deasserted.
     * |        |          |1 = External Interrupt from PB.7 interrupt is asserted.
     * |[14]    |UART0_INT |UART0 Interrupt Flag (Read Only)
     * |        |          |0 = UART0 interrupt is deasserted.
     * |        |          |1 = UART0 interrupt is asserted.
     */
    __IO uint32_t NMIEN;                 /*!< [0x0000] NMI Source Interrupt Enable Register                             */
    __I  uint32_t NMISTS;                /*!< [0x0004] NMI Source Interrupt Status Register                             */
} NMI_T;

/**
    @addtogroup SYS_CONST SYS Bit Field Definition
    Constant Definitions for SYS Controller
@{ */

#define SYS_PDID_PDID_Pos               (0)                                             /*!< SYS_T::PDID: PDID Position             */
#define SYS_PDID_PDID_Msk               (0xfffffffful << SYS_PDID_PDID_Pos)             /*!< SYS_T::PDID: PDID Mask                 */

#define SYS_RSTSTS_PORF_Pos             (0)                                             /*!< SYS_T::RSTSTS: PORF Position           */
#define SYS_RSTSTS_PORF_Msk             (0x1ul << SYS_RSTSTS_PORF_Pos)                  /*!< SYS_T::RSTSTS: PORF Mask               */

#define SYS_RSTSTS_PINRF_Pos            (1)                                             /*!< SYS_T::RSTSTS: PINRF Position          */
#define SYS_RSTSTS_PINRF_Msk            (0x1ul << SYS_RSTSTS_PINRF_Pos)                 /*!< SYS_T::RSTSTS: PINRF Mask              */

#define SYS_RSTSTS_WDTRF_Pos            (2)                                             /*!< SYS_T::RSTSTS: WDTRF Position          */
#define SYS_RSTSTS_WDTRF_Msk            (0x1ul << SYS_RSTSTS_WDTRF_Pos)                 /*!< SYS_T::RSTSTS: WDTRF Mask              */

#define SYS_RSTSTS_LVRF_Pos             (3)                                             /*!< SYS_T::RSTSTS: LVRF Position           */
#define SYS_RSTSTS_LVRF_Msk             (0x1ul << SYS_RSTSTS_LVRF_Pos)                  /*!< SYS_T::RSTSTS: LVRF Mask               */

#define SYS_RSTSTS_BODRF_Pos            (4)                                             /*!< SYS_T::RSTSTS: BODRF Position          */
#define SYS_RSTSTS_BODRF_Msk            (0x1ul << SYS_RSTSTS_BODRF_Pos)                 /*!< SYS_T::RSTSTS: BODRF Mask              */

#define SYS_RSTSTS_SYSRF_Pos            (5)                                             /*!< SYS_T::RSTSTS: SYSRF Position          */
#define SYS_RSTSTS_SYSRF_Msk            (0x1ul << SYS_RSTSTS_SYSRF_Pos)                 /*!< SYS_T::RSTSTS: SYSRF Mask              */

#define SYS_RSTSTS_CPURF_Pos            (7)                                             /*!< SYS_T::RSTSTS: CPURF Position          */
#define SYS_RSTSTS_CPURF_Msk            (0x1ul << SYS_RSTSTS_CPURF_Pos)                 /*!< SYS_T::RSTSTS: CPURF Mask              */

#define SYS_RSTSTS_CPULKRF_Pos          (8)                                             /*!< SYS_T::RSTSTS: CPULKRF Position        */
#define SYS_RSTSTS_CPULKRF_Msk          (0x1ul << SYS_RSTSTS_CPULKRF_Pos)               /*!< SYS_T::RSTSTS: CPULKRF Mask            */

#define SYS_IPRST0_CHIPRST_Pos          (0)                                             /*!< SYS_T::IPRST0: CHIPRST Position        */
#define SYS_IPRST0_CHIPRST_Msk          (0x1ul << SYS_IPRST0_CHIPRST_Pos)               /*!< SYS_T::IPRST0: CHIPRST Mask            */

#define SYS_IPRST0_CPURST_Pos           (1)                                             /*!< SYS_T::IPRST0: CPURST Position         */
#define SYS_IPRST0_CPURST_Msk           (0x1ul << SYS_IPRST0_CPURST_Pos)                /*!< SYS_T::IPRST0: CPURST Mask             */

#define SYS_IPRST0_PDMARST_Pos          (2)                                             /*!< SYS_T::IPRST0: PDMARST Position        */
#define SYS_IPRST0_PDMARST_Msk          (0x1ul << SYS_IPRST0_PDMARST_Pos)               /*!< SYS_T::IPRST0: PDMARST Mask            */

#define SYS_IPRST0_CRCRST_Pos           (7)                                             /*!< SYS_T::IPRST0: CRCRST Position         */
#define SYS_IPRST0_CRCRST_Msk           (0x1ul << SYS_IPRST0_CRCRST_Pos)                /*!< SYS_T::IPRST0: CRCRST Mask             */

#define SYS_IPRST1_GPIORST_Pos          (1)                                             /*!< SYS_T::IPRST1: GPIORST Position        */
#define SYS_IPRST1_GPIORST_Msk          (0x1ul << SYS_IPRST1_GPIORST_Pos)               /*!< SYS_T::IPRST1: GPIORST Mask            */

#define SYS_IPRST1_TMR0RST_Pos          (2)                                             /*!< SYS_T::IPRST1: TMR0RST Position        */
#define SYS_IPRST1_TMR0RST_Msk          (0x1ul << SYS_IPRST1_TMR0RST_Pos)               /*!< SYS_T::IPRST1: TMR0RST Mask            */

#define SYS_IPRST1_TMR1RST_Pos          (3)                                             /*!< SYS_T::IPRST1: TMR1RST Position        */
#define SYS_IPRST1_TMR1RST_Msk          (0x1ul << SYS_IPRST1_TMR1RST_Pos)               /*!< SYS_T::IPRST1: TMR1RST Mask            */

#define SYS_IPRST1_TMR2RST_Pos           (4)                                            /*!< SYS_T::IPRST1: TMR2RST Position        */
#define SYS_IPRST1_TMR2RST_Msk           (0x1ul << SYS_IPRST1_TMR2RST_Pos)              /*!< SYS_T::IPRST1: TMR2RST Mask            */

#define SYS_IPRST1_TMR3RST_Pos           (5)                                            /*!< SYS_T::IPRST1: TMR3RST Position        */
#define SYS_IPRST1_TMR3RST_Msk           (0x1ul << SYS_IPRST1_TMR3RST_Pos)              /*!< SYS_T::IPRST1: TMR3RST Mask            */

#define SYS_IPRST1_I2C0RST_Pos          (8)                                             /*!< SYS_T::IPRST1: I2C0RST Position        */
#define SYS_IPRST1_I2C0RST_Msk          (0x1ul << SYS_IPRST1_I2C0RST_Pos)               /*!< SYS_T::IPRST1: I2C0RST Mask            */

#define SYS_IPRST1_I2C1RST_Pos          (9)                                             /*!< SYS_T::IPRST1: I2C1RST Position        */
#define SYS_IPRST1_I2C1RST_Msk          (0x1ul << SYS_IPRST1_I2C1RST_Pos)               /*!< SYS_T::IPRST1: I2C1RST Mask            */

#define SYS_IPRST1_SPI0RST_Pos          (13)                                            /*!< SYS_T::IPRST1: SPI0RST Position        */
#define SYS_IPRST1_SPI0RST_Msk          (0x1ul << SYS_IPRST1_SPI0RST_Pos)               /*!< SYS_T::IPRST1: SPI0RST Mask            */

#define SYS_IPRST1_UART0RST_Pos         (16)                                            /*!< SYS_T::IPRST1: UART0RST Position       */
#define SYS_IPRST1_UART0RST_Msk         (0x1ul << SYS_IPRST1_UART0RST_Pos)              /*!< SYS_T::IPRST1: UART0RST Mask           */

#define SYS_IPRST1_ADCRST_Pos           (28)                                            /*!< SYS_T::IPRST1: ADCRST Position         */
#define SYS_IPRST1_ADCRST_Msk           (0x1ul << SYS_IPRST1_ADCRST_Pos)                /*!< SYS_T::IPRST1: ADCRST Mask             */

#define SYS_IPRST2_DAC01RST_Pos         (12)                                            /*!< SYS_T::IPRST2: DAC01RST Position       */
#define SYS_IPRST2_DAC01RST_Msk         (0x1ul << SYS_IPRST2_DAC01RST_Pos)              /*!< SYS_T::IPRST2: DAC01RST Mask           */

#define SYS_IPRST2_DAC23RST_Pos         (13)                                            /*!< SYS_T::IPRST2: DAC23RST Position       */
#define SYS_IPRST2_DAC23RST_Msk         (0x1ul << SYS_IPRST2_DAC23RST_Pos)              /*!< SYS_T::IPRST2: DAC23RST Mask           */

#define SYS_IPRST2_BPWMRST_Pos          (19)                                            /*!< SYS_T::IPRST2: BPWMRST Position        */
#define SYS_IPRST2_BPWMRST_Msk          (0x1ul << SYS_IPRST2_BPWMRST_Pos)               /*!< SYS_T::IPRST2: BPWMRST Mask            */

#define SYS_IPRST2_MANCHRST_Pos          (24)                                           /*!< SYS_T::IPRST2: MANCHRST Position       */
#define SYS_IPRST2_MANCHRST_Msk          (0x1ul << SYS_IPRST2_MANCHRST_Pos)             /*!< SYS_T::IPRST2: MANCHRST Mask           */

#define SYS_IPRST2_TMR4RST_Pos           (28)                                           /*!< SYS_T::IPRST2: TMR4RST Position        */
#define SYS_IPRST2_TMR4RST_Msk           (0x1ul << SYS_IPRST2_TMR4RST_Pos)              /*!< SYS_T::IPRST2: TMR4RST Mask            */

#define SYS_IPRST2_TMR5RST_Pos           (29)                                           /*!< SYS_T::IPRST2: TMR5RST Position        */
#define SYS_IPRST2_TMR5RST_Msk           (0x1ul << SYS_IPRST2_TMR5RST_Pos)              /*!< SYS_T::IPRST2: TMR5RST Mask            */

#define SYS_IPRST2_TSRST_Pos            (31)                                            /*!< SYS_T::IPRST2: TSRST Position          */
#define SYS_IPRST2_TSRST_Msk            (0x1ul << SYS_IPRST2_TSRST_Pos)                 /*!< SYS_T::IPRST2: TSRST Mask              */

#define SYS_BODCTL_BODEN_Pos            (0)                                             /*!< SYS_T::BODCTL: BODEN Position          */
#define SYS_BODCTL_BODEN_Msk            (0x1ul << SYS_BODCTL_BODEN_Pos)                 /*!< SYS_T::BODCTL: BODEN Mask              */

#define SYS_BODCTL_BODRSTEN_Pos         (3)                                             /*!< SYS_T::BODCTL: BODRSTEN Position       */
#define SYS_BODCTL_BODRSTEN_Msk         (0x1ul << SYS_BODCTL_BODRSTEN_Pos)              /*!< SYS_T::BODCTL: BODRSTEN Mask           */

#define SYS_BODCTL_BODIF_Pos            (4)                                             /*!< SYS_T::BODCTL: BODIF Position          */
#define SYS_BODCTL_BODIF_Msk            (0x1ul << SYS_BODCTL_BODIF_Pos)                 /*!< SYS_T::BODCTL: BODIF Mask              */

#define SYS_BODCTL_BODLPM_Pos           (5)                                             /*!< SYS_T::BODCTL: BODLPM Position         */
#define SYS_BODCTL_BODLPM_Msk           (0x1ul << SYS_BODCTL_BODLPM_Pos)                /*!< SYS_T::BODCTL: BODLPM Mask             */

#define SYS_BODCTL_BODOUT_Pos           (6)                                             /*!< SYS_T::BODCTL: BODOUT Position         */
#define SYS_BODCTL_BODOUT_Msk           (0x1ul << SYS_BODCTL_BODOUT_Pos)                /*!< SYS_T::BODCTL: BODOUT Mask             */

#define SYS_BODCTL_LVREN_Pos            (7)                                             /*!< SYS_T::BODCTL: LVREN Position          */
#define SYS_BODCTL_LVREN_Msk            (0x1ul << SYS_BODCTL_LVREN_Pos)                 /*!< SYS_T::BODCTL: LVREN Mask              */

#define SYS_BODCTL_BODDGSEL_Pos         (8)                                             /*!< SYS_T::BODCTL: BODDGSEL Position       */
#define SYS_BODCTL_BODDGSEL_Msk         (0x7ul << SYS_BODCTL_BODDGSEL_Pos)              /*!< SYS_T::BODCTL: BODDGSEL Mask           */

#define SYS_BODCTL_LVRDGSEL_Pos         (12)                                            /*!< SYS_T::BODCTL: LVRDGSEL Position       */
#define SYS_BODCTL_LVRDGSEL_Msk         (0x7ul << SYS_BODCTL_LVRDGSEL_Pos)              /*!< SYS_T::BODCTL: LVRDGSEL Mask           */

#define SYS_BODCTL_BODVL_Pos            (16)                                            /*!< SYS_T::BODCTL: BODVL Position          */
#define SYS_BODCTL_BODVL_Msk            (0x1ul << SYS_BODCTL_BODVL_Pos)                 /*!< SYS_T::BODCTL: BODVL Mask              */

#define SYS_PORCTL_POROFF_Pos           (0)                                             /*!< SYS_T::PORCTL: POROFF Position         */
#define SYS_PORCTL_POROFF_Msk           (0xfffful << SYS_PORCTL_POROFF_Pos)             /*!< SYS_T::PORCTL: POROFF Mask             */

#define SYS_VREFCTL_VREFEN_Pos          (0)                                             /*!< SYS_T::VREFCTL: VREFEN Position        */
#define SYS_VREFCTL_VREFEN_Msk          (0x1ul << SYS_VREFCTL_VREFEN_Pos)               /*!< SYS_T::VREFCTL: VREFEN Mask            */

#define SYS_VREFCTL_VREFSEL_Pos         (1)                                             /*!< SYS_T::VREFCTL: VREFSEL Position       */
#define SYS_VREFCTL_VREFSEL_Msk         (0x1ul << SYS_VREFCTL_VREFSEL_Pos)              /*!< SYS_T::VREFCTL: VREFSEL Mask           */

#define SYS_VREFCTL_PRELOADEN_Pos       (6)                                             /*!< SYS_T::VREFCTL: PRELOADEN Position     */
#define SYS_VREFCTL_PRELOADEN_Msk       (0x1ul << SYS_VREFCTL_PRELOADEN_Pos)            /*!< SYS_T::VREFCTL: PRELOADEN Mask         */

#define SYS_VREFCTL_SCPDIS_Pos          (8)                                             /*!< SYS_T::VREFCTL: SCPDIS Position        */
#define SYS_VREFCTL_SCPDIS_Msk          (0x1ul << SYS_VREFCTL_SCPDIS_Pos)               /*!< SYS_T::VREFCTL: SCPDIS Mask            */

#define SYS_GPA_MFPL_PA0MFP_Pos         (0)                                             /*!< SYS_T::GPA_MFPL: PA0MFP Position       */
#define SYS_GPA_MFPL_PA0MFP_Msk         (0xful << SYS_GPA_MFPL_PA0MFP_Pos)              /*!< SYS_T::GPA_MFPL: PA0MFP Mask           */

#define SYS_GPA_MFPL_PA1MFP_Pos         (4)                                             /*!< SYS_T::GPA_MFPL: PA1MFP Position       */
#define SYS_GPA_MFPL_PA1MFP_Msk         (0xful << SYS_GPA_MFPL_PA1MFP_Pos)              /*!< SYS_T::GPA_MFPL: PA1MFP Mask           */

#define SYS_GPA_MFPL_PA2MFP_Pos         (8)                                             /*!< SYS_T::GPA_MFPL: PA2MFP Position       */
#define SYS_GPA_MFPL_PA2MFP_Msk         (0xful << SYS_GPA_MFPL_PA2MFP_Pos)              /*!< SYS_T::GPA_MFPL: PA2MFP Mask           */

#define SYS_GPA_MFPL_PA3MFP_Pos         (12)                                            /*!< SYS_T::GPA_MFPL: PA3MFP Position       */
#define SYS_GPA_MFPL_PA3MFP_Msk         (0xful << SYS_GPA_MFPL_PA3MFP_Pos)              /*!< SYS_T::GPA_MFPL: PA3MFP Mask           */

#define SYS_GPA_MFPH_PA12MFP_Pos        (16)                                            /*!< SYS_T::GPA_MFPH: PA12MFP Position      */
#define SYS_GPA_MFPH_PA12MFP_Msk        (0xful << SYS_GPA_MFPH_PA12MFP_Pos)             /*!< SYS_T::GPA_MFPH: PA12MFP Mask          */

#define SYS_GPA_MFPH_PA13MFP_Pos        (20)                                            /*!< SYS_T::GPA_MFPH: PA13MFP Position      */
#define SYS_GPA_MFPH_PA13MFP_Msk        (0xful << SYS_GPA_MFPH_PA13MFP_Pos)             /*!< SYS_T::GPA_MFPH: PA13MFP Mask          */

#define SYS_GPA_MFPH_PA14MFP_Pos        (24)                                            /*!< SYS_T::GPA_MFPH: PA14MFP Position      */
#define SYS_GPA_MFPH_PA14MFP_Msk        (0xful << SYS_GPA_MFPH_PA14MFP_Pos)             /*!< SYS_T::GPA_MFPH: PA14MFP Mask          */

#define SYS_GPA_MFPH_PA15MFP_Pos        (28)                                            /*!< SYS_T::GPA_MFPH: PA15MFP Position      */
#define SYS_GPA_MFPH_PA15MFP_Msk        (0xful << SYS_GPA_MFPH_PA15MFP_Pos)             /*!< SYS_T::GPA_MFPH: PA15MFP Mask          */

#define SYS_GPB_MFPL_PB0MFP_Pos         (0)                                             /*!< SYS_T::GPB_MFPL: PB0MFP Position       */
#define SYS_GPB_MFPL_PB0MFP_Msk         (0xful << SYS_GPB_MFPL_PB0MFP_Pos)              /*!< SYS_T::GPB_MFPL: PB0MFP Mask           */

#define SYS_GPB_MFPL_PB1MFP_Pos         (4)                                             /*!< SYS_T::GPB_MFPL: PB1MFP Position       */
#define SYS_GPB_MFPL_PB1MFP_Msk         (0xful << SYS_GPB_MFPL_PB1MFP_Pos)              /*!< SYS_T::GPB_MFPL: PB1MFP Mask           */

#define SYS_GPB_MFPL_PB2MFP_Pos         (8)                                             /*!< SYS_T::GPB_MFPL: PB2MFP Position       */
#define SYS_GPB_MFPL_PB2MFP_Msk         (0xful << SYS_GPB_MFPL_PB2MFP_Pos)              /*!< SYS_T::GPB_MFPL: PB2MFP Mask           */

#define SYS_GPB_MFPL_PB3MFP_Pos         (12)                                            /*!< SYS_T::GPB_MFPL: PB3MFP Position       */
#define SYS_GPB_MFPL_PB3MFP_Msk         (0xful << SYS_GPB_MFPL_PB3MFP_Pos)              /*!< SYS_T::GPB_MFPL: PB3MFP Mask           */

#define SYS_GPB_MFPL_PB4MFP_Pos         (16)                                            /*!< SYS_T::GPB_MFPL: PB4MFP Position       */
#define SYS_GPB_MFPL_PB4MFP_Msk         (0xful << SYS_GPB_MFPL_PB4MFP_Pos)              /*!< SYS_T::GPB_MFPL: PB4MFP Mask           */

#define SYS_GPB_MFPL_PB5MFP_Pos         (20)                                            /*!< SYS_T::GPB_MFPL: PB5MFP Position       */
#define SYS_GPB_MFPL_PB5MFP_Msk         (0xful << SYS_GPB_MFPL_PB5MFP_Pos)              /*!< SYS_T::GPB_MFPL: PB5MFP Mask           */

#define SYS_GPB_MFPL_PB6MFP_Pos         (24)                                            /*!< SYS_T::GPB_MFPL: PB6MFP Position       */
#define SYS_GPB_MFPL_PB6MFP_Msk         (0xful << SYS_GPB_MFPL_PB6MFP_Pos)              /*!< SYS_T::GPB_MFPL: PB6MFP Mask           */

#define SYS_GPB_MFPL_PB7MFP_Pos         (28)                                            /*!< SYS_T::GPB_MFPL: PB7MFP Position       */
#define SYS_GPB_MFPL_PB7MFP_Msk         (0xful << SYS_GPB_MFPL_PB7MFP_Pos)              /*!< SYS_T::GPB_MFPL: PB7MFP Mask           */

#define SYS_GPB_MFPH_PB8MFP_Pos         (0)                                             /*!< SYS_T::GPB_MFPH: PB8MFP Position       */
#define SYS_GPB_MFPH_PB8MFP_Msk         (0xful << SYS_GPB_MFPH_PB8MFP_Pos)              /*!< SYS_T::GPB_MFPH: PB8MFP Mask           */

#define SYS_GPB_MFPH_PB9MFP_Pos         (4)                                             /*!< SYS_T::GPB_MFPH: PB9MFP Position       */
#define SYS_GPB_MFPH_PB9MFP_Msk         (0xful << SYS_GPB_MFPH_PB9MFP_Pos)              /*!< SYS_T::GPB_MFPH: PB9MFP Mask           */

#define SYS_GPB_MFPH_PB10MFP_Pos        (8)                                             /*!< SYS_T::GPB_MFPH: PB10MFP Position      */
#define SYS_GPB_MFPH_PB10MFP_Msk        (0xful << SYS_GPB_MFPH_PB10MFP_Pos)             /*!< SYS_T::GPB_MFPH: PB10MFP Mask          */

#define SYS_GPB_MFPH_PB11MFP_Pos        (12)                                            /*!< SYS_T::GPB_MFPH: PB11MFP Position      */
#define SYS_GPB_MFPH_PB11MFP_Msk        (0xful << SYS_GPB_MFPH_PB11MFP_Pos)             /*!< SYS_T::GPB_MFPH: PB11MFP Mask          */

#define SYS_GPB_MFPH_PB12MFP_Pos        (16)                                            /*!< SYS_T::GPB_MFPH: PB12MFP Position      */
#define SYS_GPB_MFPH_PB12MFP_Msk        (0xful << SYS_GPB_MFPH_PB12MFP_Pos)             /*!< SYS_T::GPB_MFPH: PB12MFP Mask          */

#define SYS_GPB_MFPH_PB13MFP_Pos        (20)                                            /*!< SYS_T::GPB_MFPH: PB13MFP Position      */
#define SYS_GPB_MFPH_PB13MFP_Msk        (0xful << SYS_GPB_MFPH_PB13MFP_Pos)             /*!< SYS_T::GPB_MFPH: PB13MFP Mask          */

#define SYS_GPB_MFPH_PB14MFP_Pos        (24)                                            /*!< SYS_T::GPB_MFPH: PB14MFP Position      */
#define SYS_GPB_MFPH_PB14MFP_Msk        (0xful << SYS_GPB_MFPH_PB14MFP_Pos)             /*!< SYS_T::GPB_MFPH: PB14MFP Mask          */

#define SYS_GPB_MFPH_PB15MFP_Pos        (28)                                            /*!< SYS_T::GPB_MFPH: PB15MFP Position      */
#define SYS_GPB_MFPH_PB15MFP_Msk        (0xful << SYS_GPB_MFPH_PB15MFP_Pos)             /*!< SYS_T::GPB_MFPH: PB15MFP Mask          */

#define SYS_GPC_MFPL_PC1MFP_Pos         (4)                                             /*!< SYS_T::GPC_MFPL: PC1MFP Position       */
#define SYS_GPC_MFPL_PC1MFP_Msk         (0xful << SYS_GPC_MFPL_PC1MFP_Pos)              /*!< SYS_T::GPC_MFPL: PC1MFP Mask           */

#define SYS_GPF_MFPL_PF0MFP_Pos         (0)                                             /*!< SYS_T::GPF_MFPL: PF0MFP Position       */
#define SYS_GPF_MFPL_PF0MFP_Msk         (0xful << SYS_GPF_MFPL_PF0MFP_Pos)              /*!< SYS_T::GPF_MFPL: PF0MFP Mask           */

#define SYS_GPF_MFPL_PF2MFP_Pos         (8)                                             /*!< SYS_T::GPF_MFPL: PF2MFP Position       */
#define SYS_GPF_MFPL_PF2MFP_Msk         (0xful << SYS_GPF_MFPL_PF2MFP_Pos)              /*!< SYS_T::GPF_MFPL: PF2MFP Mask           */

#define SYS_GPF_MFPL_PF3MFP_Pos         (12)                                            /*!< SYS_T::GPF_MFPL: PF3MFP Position       */
#define SYS_GPF_MFPL_PF3MFP_Msk         (0xful << SYS_GPF_MFPL_PF3MFP_Pos)              /*!< SYS_T::GPF_MFPL: PF3MFP Mask           */

#define SYS_LDOPRELD_PRELDIS_Pos        (0)                                             /*!< SYS_T::SYS_LDOPRELD: PRELDIS Position  */
#define SYS_LDOPRELD_PRELDIS_Msk        (0x1ul << SYS_LDOPRELD_PRELDIS_Pos)             /*!< SYS_T::SYS_LDOPRELD: PRELDIS Mask      */

#define SYS_MODCTL_MANCHMODEN0_Pos       (16)                                           /*!< SYS_T::MODCTL: MANCHMODEN0 Position    */
#define SYS_MODCTL_MANCHMODEN0_Msk       (0x1ul << SYS_MODCTL_MANCHMODEN0_Pos)          /*!< SYS_T::MODCTL: MANCHMODEN0 Mask        */

#define SYS_MODCTL_MANCHMODEN1_Pos       (17)                                           /*!< SYS_T::MODCTL: MANCHMODEN1 Position    */
#define SYS_MODCTL_MANCHMODEN1_Msk       (0x1ul << SYS_MODCTL_MANCHMODEN1_Pos)          /*!< SYS_T::MODCTL: MANCHMODEN1 Mask        */

#define SYS_MODCTL_MANCHMODEN2_Pos       (18)                                           /*!< SYS_T::MODCTL: MANCHMODEN2 Position    */
#define SYS_MODCTL_MANCHMODEN2_Msk       (0x1ul << SYS_MODCTL_MANCHMODEN2_Pos)          /*!< SYS_T::MODCTL: MANCHMODEN2 Mask        */

#define SYS_MODCTL_MANCHMODEN3_Pos       (19)                                           /*!< SYS_T::MODCTL: MANCHMODEN3 Position    */
#define SYS_MODCTL_MANCHMODEN3_Msk       (0x1ul << SYS_MODCTL_MANCHMODEN3_Pos)          /*!< SYS_T::MODCTL: MANCHMODEN3 Mask        */

#define SYS_MODCTL_MANCHMODEN4_Pos       (20)                                           /*!< SYS_T::MODCTL: MANCHMODEN4 Position    */
#define SYS_MODCTL_MANCHMODEN4_Msk       (0x1ul << SYS_MODCTL_MANCHMODEN4_Pos)          /*!< SYS_T::MODCTL: MANCHMODEN4 Mask        */

#define SYS_MODCTL_MANCHMODEN5_Pos       (21)                                           /*!< SYS_T::MODCTL: MANCHMODEN5 Position    */
#define SYS_MODCTL_MANCHMODEN5_Msk       (0x1ul << SYS_MODCTL_MANCHMODEN5_Pos)          /*!< SYS_T::MODCTL: MANCHMODEN5 Mask        */

#define SYS_MODCTL_MANCHMODL0_Pos        (24)                                           /*!< SYS_T::MODCTL: MANCHMODL0 Position     */
#define SYS_MODCTL_MANCHMODL0_Msk        (0x1ul << SYS_MODCTL_MANCHMODL0_Pos)           /*!< SYS_T::MODCTL: MANCHMODL0 Mask         */

#define SYS_MODCTL_MANCHMODL1_Pos        (25)                                           /*!< SYS_T::MODCTL: MANCHMODL1 Position     */
#define SYS_MODCTL_MANCHMODL1_Msk        (0x1ul << SYS_MODCTL_MANCHMODL1_Pos)           /*!< SYS_T::MODCTL: MANCHMODL1 Mask         */

#define SYS_MODCTL_MANCHMODL2_Pos        (26)                                           /*!< SYS_T::MODCTL: MANCHMODL2 Position     */
#define SYS_MODCTL_MANCHMODL2_Msk        (0x1ul << SYS_MODCTL_MANCHMODL2_Pos)           /*!< SYS_T::MODCTL: MANCHMODL2 Mask         */

#define SYS_MODCTL_MANCHMODL3_Pos        (27)                                           /*!< SYS_T::MODCTL: MANCHMODL3 Position     */
#define SYS_MODCTL_MANCHMODL3_Msk        (0x1ul << SYS_MODCTL_MANCHMODL3_Pos)           /*!< SYS_T::MODCTL: MANCHMODL3 Mask         */

#define SYS_MODCTL_MANCHMODL4_Pos        (28)                                           /*!< SYS_T::MODCTL: MANCHMODL4 Position     */
#define SYS_MODCTL_MANCHMODL4_Msk        (0x1ul << SYS_MODCTL_MANCHMODL4_Pos)           /*!< SYS_T::MODCTL: MANCHMODL4 Mask         */

#define SYS_MODCTL_MANCHMODL5_Pos        (29)                                           /*!< SYS_T::MODCTL: MANCHMODL5 Position     */
#define SYS_MODCTL_MANCHMODL5_Msk        (0x1ul << SYS_MODCTL_MANCHMODL5_Pos)           /*!< SYS_T::MODCTL: MANCHMODL5 Mask         */

#define SYS_SRAM_BISTCTL_SRBIST_Pos     (0)                                             /*!< SYS_T::SRAM_BISTCTL: SRBIST Position   */
#define SYS_SRAM_BISTCTL_SRBIST_Msk     (0x1ul << SYS_SRAM_BISTCTL_SRBIST_Pos)          /*!< SYS_T::SRAM_BISTCTL: SRBIST Mask       */

#define SYS_SRAM_BISTCTL_PDMABIST_Pos   (7)                                             /*!< SYS_T::SRAM_BISTCTL: PDMABIST Position */
#define SYS_SRAM_BISTCTL_PDMABIST_Msk   (0x1ul << SYS_SRAM_BISTCTL_PDMABIST_Pos)        /*!< SYS_T::SRAM_BISTCTL: PDMABIST Mask     */

#define SYS_SRAM_BISTSTS_SRBISTFF_Pos    (0)                                            /*!< SYS_T::SRAM_BISTSTS: SRBISTFF Position */
#define SYS_SRAM_BISTSTS_SRBISTFF_Msk    (0x1ul << SYS_SRAM_BISTSTS_SRBISTFF_Pos)       /*!< SYS_T::SRAM_BISTSTS: SRBISTFF Mask     */

#define SYS_SRAM_BISTSTS_PDMABISTF_Pos  (7)                                             /*!< SYS_T::SRAM_BISTSTS: PDMABISTF Position*/
#define SYS_SRAM_BISTSTS_PDMABISTF_Msk  (0x1ul << SYS_SRAM_BISTSTS_PDMABISTF_Pos)       /*!< SYS_T::SRAM_BISTSTS: PDMABISTF Mask    */

#define SYS_SRAM_BISTSTS_SRBEND_Pos     (16)                                            /*!< SYS_T::SRAM_BISTSTS: SRBEND Position   */
#define SYS_SRAM_BISTSTS_SRBEND_Msk     (0x1ul << SYS_SRAM_BISTSTS_SRBEND_Pos)          /*!< SYS_T::SRAM_BISTSTS: SRBEND Mask       */

#define SYS_SRAM_BISTSTS_PDMAEND_Pos    (23)                                            /*!< SYS_T::SRAM_BISTSTS: PDMAEND Position  */
#define SYS_SRAM_BISTSTS_PDMAEND_Msk    (0x1ul << SYS_SRAM_BISTSTS_PDMAEND_Pos)         /*!< SYS_T::SRAM_BISTSTS: PDMAEND Mask      */

#define SYS_REGLCTL_REGLCTL_Pos         (0)                                             /*!< SYS_T::REGLCTL: REGLCTL Position       */
#define SYS_REGLCTL_REGLCTL_Msk         (0xfful << SYS_REGLCTL_REGLCTL_Pos)             /*!< SYS_T::REGLCTL: REGLCTL Mask           */

#define SYS_TSCTL_TSEN_Pos              (0)                                             /*!< SYS_T::TSCTL: TSEN Position            */
#define SYS_TSCTL_TSEN_Msk              (0x1ul << SYS_TSCTL_TSEN_Pos)                   /*!< SYS_T::TSCTL: TSEN Mask                */

#define SYS_TSCTL_TSBGEN_Pos            (1)                                             /*!< SYS_T::TSCTL: TSBGEN Position          */
#define SYS_TSCTL_TSBGEN_Msk            (0x1ul << SYS_TSCTL_TSBGEN_Pos)                 /*!< SYS_T::TSCTL: TSBGEN Mask              */

#define SYS_TSCTL_TSST_Pos              (2)                                             /*!< SYS_T::TSCTL: TSST Position            */
#define SYS_TSCTL_TSST_Msk              (0x1ul << SYS_TSCTL_TSST_Pos)                   /*!< SYS_T::TSCTL: TSST Mask                */

#define SYS_TSCTL_TSIEN_Pos             (3)                                             /*!< SYS_T::TSCTL: TSIEN Position           */
#define SYS_TSCTL_TSIEN_Msk             (0x1ul << SYS_TSCTL_TSIEN_Pos)                  /*!< SYS_T::TSCTL: TSIEN Mask               */

#define SYS_TSCTL_TSIF_Pos              (16)                                            /*!< SYS_T::TSCTL: TSIF Position            */
#define SYS_TSCTL_TSIF_Msk              (0x1ul << SYS_TSCTL_TSIF_Pos)                   /*!< SYS_T::TSCTL: TSIF Mask                */

#define SYS_TSDATA_TSEOC_Pos            (0)                                             /*!< SYS_T::TSDATA: TSEOC Position          */
#define SYS_TSDATA_TSEOC_Msk            (0x1ul << SYS_TSDATA_TSEOC_Pos)                 /*!< SYS_T::TSDATA: TSEOC Mask              */

#define SYS_TSDATA_TSDATA_Pos           (16)                                            /*!< SYS_T::TSDATA: TSDATA Position         */
#define SYS_TSDATA_TSDATA_Msk           (0xffful << SYS_TSDATA_TSDATA_Pos)              /*!< SYS_T::TSDATA: TSDATA Mask             */

#define SYS_POR18DISAN_POR18OFFAN_Pos   (0)                                             /*!< SYS_T::POR18DISAN: POR18OFFAN Position */
#define SYS_POR18DISAN_POR18OFFAN_Msk   (0xfffful << SYS_POR18DISAN_POR18OFFAN_Pos)     /*!< SYS_T::POR18DISAN: POR18OFFAN Mask     */

#define NMI_NMIEN_BODOUT_Pos            (0)                                             /*!< NMI_T::NMIEN: BODOUT Position          */
#define NMI_NMIEN_BODOUT_Msk            (0x1ul << NMI_NMIEN_BODOUT_Pos)                 /*!< NMI_T::NMIEN: BODOUT Mask              */

#define NMI_NMIEN_PWRWU_INT_Pos         (2)                                             /*!< NMI_T::NMIEN: PWRWU_INT Position       */
#define NMI_NMIEN_PWRWU_INT_Msk         (0x1ul << NMI_NMIEN_PWRWU_INT_Pos)              /*!< NMI_T::NMIEN: PWRWU_INT Mask           */

#define NMI_NMIEN_EINT0_Pos             (8)                                             /*!< NMI_T::NMIEN: EINT0 Position           */
#define NMI_NMIEN_EINT0_Msk             (0x1ul << NMI_NMIEN_EINT0_Pos)                  /*!< NMI_T::NMIEN: EINT0 Mask               */

#define NMI_NMIEN_EINT1_Pos             (9)                                             /*!< NMI_T::NMIEN: EINT1 Position           */
#define NMI_NMIEN_EINT1_Msk             (0x1ul << NMI_NMIEN_EINT1_Pos)                  /*!< NMI_T::NMIEN: EINT1 Mask               */

#define NMI_NMIEN_EINT2_Pos             (10)                                            /*!< NMI_T::NMIEN: EINT2 Position           */
#define NMI_NMIEN_EINT2_Msk             (0x1ul << NMI_NMIEN_EINT2_Pos)                  /*!< NMI_T::NMIEN: EINT2 Mask               */

#define NMI_NMIEN_EINT3_Pos             (11)                                            /*!< NMI_T::NMIEN: EINT3 Position           */
#define NMI_NMIEN_EINT3_Msk             (0x1ul << NMI_NMIEN_EINT3_Pos)                  /*!< NMI_T::NMIEN: EINT3 Mask               */

#define NMI_NMIEN_EINT4_Pos             (12)                                            /*!< NMI_T::NMIEN: EINT4 Position           */
#define NMI_NMIEN_EINT4_Msk             (0x1ul << NMI_NMIEN_EINT4_Pos)                  /*!< NMI_T::NMIEN: EINT4 Mask               */

#define NMI_NMIEN_EINT5_Pos             (13)                                            /*!< NMI_T::NMIEN: EINT5 Position           */
#define NMI_NMIEN_EINT5_Msk             (0x1ul << NMI_NMIEN_EINT5_Pos)                  /*!< NMI_T::NMIEN: EINT5 Mask               */

#define NMI_NMIEN_UART0_INT_Pos         (14)                                            /*!< NMI_T::NMIEN: UART0_INT Position       */
#define NMI_NMIEN_UART0_INT_Msk         (0x1ul << NMI_NMIEN_UART0_INT_Pos)              /*!< NMI_T::NMIEN: UART0_INT Mask           */

#define NMI_NMISTS_BODOUT_Pos           (0)                                             /*!< NMI_T::NMISTS: BODOUT Position         */
#define NMI_NMISTS_BODOUT_Msk           (0x1ul << NMI_NMISTS_BODOUT_Pos)                /*!< NMI_T::NMISTS: BODOUT Mask             */

#define NMI_NMISTS_PWRWU_INT_Pos        (2)                                             /*!< NMI_T::NMISTS: PWRWU_INT Position      */
#define NMI_NMISTS_PWRWU_INT_Msk        (0x1ul << NMI_NMISTS_PWRWU_INT_Pos)             /*!< NMI_T::NMISTS: PWRWU_INT Mask          */

#define NMI_NMISTS_EINT0_Pos            (8)                                             /*!< NMI_T::NMISTS: EINT0 Position          */
#define NMI_NMISTS_EINT0_Msk            (0x1ul << NMI_NMISTS_EINT0_Pos)                 /*!< NMI_T::NMISTS: EINT0 Mask              */

#define NMI_NMISTS_EINT1_Pos            (9)                                             /*!< NMI_T::NMISTS: EINT1 Position          */
#define NMI_NMISTS_EINT1_Msk            (0x1ul << NMI_NMISTS_EINT1_Pos)                 /*!< NMI_T::NMISTS: EINT1 Mask              */

#define NMI_NMISTS_EINT2_Pos            (10)                                            /*!< NMI_T::NMISTS: EINT2 Position          */
#define NMI_NMISTS_EINT2_Msk            (0x1ul << NMI_NMISTS_EINT2_Pos)                 /*!< NMI_T::NMISTS: EINT2 Mask              */

#define NMI_NMISTS_EINT3_Pos            (11)                                            /*!< NMI_T::NMISTS: EINT3 Position          */
#define NMI_NMISTS_EINT3_Msk            (0x1ul << NMI_NMISTS_EINT3_Pos)                 /*!< NMI_T::NMISTS: EINT3 Mask              */

#define NMI_NMISTS_EINT4_Pos            (12)                                            /*!< NMI_T::NMISTS: EINT4 Position          */
#define NMI_NMISTS_EINT4_Msk            (0x1ul << NMI_NMISTS_EINT4_Pos)                 /*!< NMI_T::NMISTS: EINT4 Mask              */

#define NMI_NMISTS_EINT5_Pos            (13)                                            /*!< NMI_T::NMISTS: EINT5 Position          */
#define NMI_NMISTS_EINT5_Msk            (0x1ul << NMI_NMISTS_EINT5_Pos)                 /*!< NMI_T::NMISTS: EINT5 Mask              */

#define NMI_NMISTS_UART0_INT_Pos        (14)                                            /*!< NMI_T::NMISTS: UART0_INT Position      */
#define NMI_NMISTS_UART0_INT_Msk        (0x1ul << NMI_NMISTS_UART0_INT_Pos)             /*!< NMI_T::NMISTS: UART0_INT Mask          */

/**@}*/ /* SYS_CONST */
/**@}*/ /* end of SYS register group */
/**@}*/ /* end of REGISTER group */

#if defined ( __CC_ARM   )
#pragma no_anon_unions
#endif

#endif /* __SYS_REG_H__ */
