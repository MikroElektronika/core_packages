/**************************************************************************//**
 * @file     clk_reg.h
 * @version  V1.00
 * @brief    CLK register definition header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

#ifndef __CLK_REG_H__
#define __CLK_REG_H__

#if defined ( __CC_ARM   )
    #pragma anon_unions
#endif

/**
    @addtogroup REGISTER Control Register
    @{
*/

/**
    @addtogroup CLK System Clock Controller (CLK)
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
     * |        |          |The bit default value is set by flash controller user configuration register CONFIG0 [26]
     * |        |          |When the default clock source is from HXT, this bit is set to 1 automatically.
     * |        |          |0 = 4~32 MHz external high speed crystal (HXT) Disabled.
     * |        |          |1 = 4~32 MHz external high speed crystal (HXT) Enabled.
     * |        |          |Note 1: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note 2: Reset by power on reset.
     * |[1]     |LXTEN     |LXT Enable Bit (Write Protect)
     * |        |          |0 = 32.768 kHz external low speed crystal (LXT) Disabled.
     * |        |          |1 = 32.768 kHz external low speed crystal (LXT) Enabled.
     * |        |          |Note 1: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note 2: Reset by RTC power on reset.
     * |[2]     |HIRCEN    |HIRC Enable Bit (Write Protect)
     * |        |          |0 = 48MHz internal high speed RC oscillator (HIRC) Disabled.
     * |        |          |1 = 48 MHz internal high speed RC oscillator (HIRC) Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[3]     |LIRCEN    |LIRC Enable Bit (Write Protect)
     * |        |          |0 = 38.4 kHz internal low speed RC oscillator (LIRC) Disabled.
     * |        |          |1 = 38.4 kHz internal low speed RC oscillator (LIRC) Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note : LIRC will also be forced on when
     * |        |          |1.Power down and ~(cfg0[3] & cfg0[4] & ~cfg0[31] & cfg0[30])
     * |        |          |2.Not power down and ~(cfg0[3] & cfg0[4] & cfg0[31])
     * |[4]     |PDWKDLY   |Enable the Wake-up Delay Counter (Write Protect)
     * |        |          |When the chip wakes up from Power-down mode, the clock control will delay certain clock cycles to wait system clock stable.
     * |        |          |The delayed clock cycle is 4096 clock cycles when chip works at 4~32 MHz external high speed crystal oscillator (HXT),
     * |        |          |The delayed clock cycle is 512 clock cycles when chip works at 48 MHz internal high speed RC oscillator (HIRC)
     * |        |          |The delayed clock cycle is 32 clock cycles when chip works at 4 MHz internal median speed RC oscillator (MIRC)
     * |        |          |0 = Clock cycles delay Disabled.
     * |        |          |1 = Clock cycles delay Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[5]     |PDWKIEN   |Power-down Mode Wake-up Interrupt Enable Bit (Write Protect)
     * |        |          |0 = Power-down mode wake-up interrupt Disabled.
     * |        |          |1 = Power-down mode wake-up interrupt Enabled.
     * |        |          |Note1: The interrupt will occur when both PDWKIF and PDWKIEN are high.
     * |        |          |Note2: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[6]     |PDWKIF    |Power-down Mode Wake-up Interrupt Status
     * |        |          |Set by "Power-down wake-up event", it indicates that resume from Power-down mode.
     * |        |          |The flag is set if any wake-up source is occurred. Refer Power Modes and Wake-up Sources chapter.
     * |        |          |Note1: Write 1 to clear the bit to 0.
     * |        |          |Note2: This bit works only if PDWKIEN (CLK_PWRCTL[5]) set to 1.
     * |[7]     |PDEN      |System Power-down Enable (Write Protect)
     * |        |          |When this bit is set to 1, Power-down mode is enabled and chip Power-down behavior will depend on the PDWTCPU bit.
     * |        |          |(a) If the PDWTCPU is 0, then the chip enters Power-down mode immediately after the PDEN bit set
     * |        |          |(default)
     * |        |          |(b) if the PDWTCPU is 1, then the chip keeps active till the CPU sleep mode is also active and then the chip enters Power-down mode.
     * |        |          |When chip wakes up from Power-down mode, this bit is auto cleared
     * |        |          |Users need to set this bit again for next Power-down.
     * |        |          |In Power-down mode, HXT and the HIRC will be disabled in this mode, but LXT and LIRC are not controlled by Power-down mode.
     * |        |          |In Power-down mode, the PLL and system clock are disabled, and ignored the clock source selection
     * |        |          |The clocks of peripheral are not controlled by Power-down mode, if the peripheral clock source is from LXT or LIRC.
     * |        |          |0 = Chip operating normally or chip in idle mode because of WFI command.
     * |        |          |1 = Chip enters Power-down mode instant or wait CPU sleep command WFI.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[19]    |MIRCEN    |MIRC Enable Bit (Write Protect)
     * |        |          |0 = 4MHz internal high speed RC oscillator (MIRC) Disabled.
     * |        |          |1 = 4 MHz internal high speed RC oscillator (MIRC) Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note: Will be forced on when CLKSEL0[2:0] = 0x101b.
     * |[22:20] |HXTGAIN   |HXT Gain Control Bit (Write Protect)
     * |        |          |This is a protected register. Please refer to open lock sequence to program it.
     * |        |          |Gain control is used to enlarge the gain of crystal to make sure crystal work normally
     * |        |          |If gain control is enabled, crystal will consume more power than gain control off.
     * |        |          |000 = HXT frequency 1~4 MHz.
     * |        |          |001 = HXT frequency 4~8 MHz.
     * |        |          |010 = HXT frequency 8~12 MHz.
     * |        |          |011 = HXT frequency 12~16 MHz.
     * |        |          |100 = HXT frequency 16~24 MHz.
     * |        |          |101 = HXT frequency 24~32 MHz.
     * |        |          |110 = HXT frequency 24~32 MHz.
     * |        |          |111 = HXT frequency 24~32 MHz.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note: Reset by power on reset
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
     * |[4]     |EXSTCKEN  |External System Tick Clock Enable Bit
     * |        |          |0 = External System tick clock Disabled.
     * |        |          |1 = External System tick clock Enabled.
     * |[7]     |CRCCKEN   |CRC Generator Controller Clock Enable Bit
     * |        |          |0 = CRC peripheral clock Disabled.
     * |        |          |1 = CRC peripheral clock Enabled.
     * |[15]    |FMCIDLE   |Flash Memory Controller Clock Enable Bit in IDLE Mode
     * |        |          |0 = FMC clock Disabled when chip is under IDLE mode.
     * |        |          |1 = FMC clock Enabled when chip is under IDLE mode.
     * |[23]    |CANFD0CKEN |CANFD0 Clock Enable Bit
     * |        |          |0 = CANFD0 clock Disabled.
     * |        |          |1 = CANFD0 clock Enabled.
     * |[24]    |GPACKEN   |GPIOA Clock Enable Bit
     * |        |          |0 = GPIOA port clock Disabled.
     * |        |          |1 = GPIOA port clock Enabled.
     * |[25]    |GPBCKEN   |GPIOB Clock Enable Bit
     * |        |          |0 = GPIOB port clock Disabled.
     * |        |          |1 = GPIOB port clock Enabled.
     * |[26]    |GPCCKEN   |GPIOC Clock Enable Bit
     * |        |          |0 = GPIOC port clock Disabled.
     * |        |          |1 = GPIOC port clock Enabled.
     * |[29]    |GPFCKEN   |GPIOF Clock Enable Bit
     * |        |          |0 = GPIOF port clock Disabled.
     * |        |          |1 = GPIOF port clock Enabled.
     * @var CLK_T::APBCLK0
     * Offset: 0x08  APB Devices Clock Enable Control Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |WDTCKEN   |Watchdog Timer Clock Enable Bit (Write Protect)
     * |        |          |0 = Watchdog timer clock Disabled.
     * |        |          |1 = Watchdog timer clock Enabled.
     * |        |          |Note 1: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note 2: This bit is forced  to 1 when CONFIG0[3] or CONFIG0[4] or CONFIG0[31] is 0.
     * |        |          |Note 3: Reset by power on reset or watch dog reset or software chip reset.
     * |[1]     |RTCCKEN   |Real-time-clock APB Interface Clock Enable Bit
     * |        |          |This bit is used to control the RTC APB clock.
     * |        |          |0 = RTC clock Disabled.
     * |        |          |1 = RTC clock Enabled.
     * |[2]     |TMR0CKEN  |Timer0 Clock Enable Bit
     * |        |          |0 = Timer0 clock Disabled.
     * |        |          |1 = Timer0 clock Enabled.
     * |[3]     |TMR1CKEN  |Timer1 Clock Enable Bit
     * |        |          |0 = Timer1 clock Disabled.
     * |        |          |1 = Timer1 clock Enabled.
     * |[4]     |TMR2CKEN  |Timer2 Clock Enable Bit
     * |        |          |0 = Timer2 clock Disabled.
     * |        |          |1 = Timer2 clock Enabled.
     * |[5]     |TMR3CKEN  |Timer3 Clock Enable Bit
     * |        |          |0 = Timer3 clock Disabled.
     * |        |          |1 = Timer3 clock Enabled.
     * |[6]     |CLKOCKEN  |CLKO Clock Enable Bit
     * |        |          |0 = CLKO clock Disabled.
     * |        |          |1 = CLKO clock Enabled.
     * |[8]     |I2C0CKEN  |I2C0 Clock Enable Bit
     * |        |          |0 = I2C0 clock Disabled.
     * |        |          |1 = I2C0 clock Enabled.
     * |[9]     |I2C1CKEN  |I2C1 Clock Enable Bit
     * |        |          |0 = I2C1 clock Disabled.
     * |        |          |1 = I2C1 clock Enabled.
     * |[13]    |SPI0CKEN  |SPI0 Clock Enable Bit
     * |        |          |0 = SPI0 clock Disabled.
     * |        |          |1 = SPI0 clock Enabled.
     * |[16]    |UART0CKEN |UART0 Clock Enable Bit
     * |        |          |0 = UART0 clock Disabled.
     * |        |          |1 = UART0 clock Enabled.
     * |[17]    |UART1CKEN |UART1 Clock Enable Bit
     * |        |          |0 = UART1 clock Disabled.
     * |        |          |1 = UART1 clock Enabled.
     * |[18]    |UART2CKEN |UART2 Clock Enable Bit
     * |        |          |0 = UART2 clock Disabled.
     * |        |          |1 = UART2 clock Enabled.
     * |[19]    |UART3CKEN |UART3 Clock Enable Bit
     * |        |          |0 = UART3 clock Disabled.
     * |        |          |1 = UART3 clock Enabled.
     * |[20]    |UART4CKEN |UART4 Clock Enable Bit
     * |        |          |0 = UART4 clock Disabled.
     * |        |          |1 = UART4 clock Enabled.
     * |[27]    |USBDCKEN  |USB Device Clock Enable Bit
     * |        |          |0 = USB Device clock Disabled.
     * |        |          |1 = USB Device clock Enabled.
     * |[28]    |EADCCKEN  |Enhanced Analog-digital-converter (EADC) Clock Enable Bit
     * |        |          |0 = EADC clock Disabled.
     * |        |          |1 = EADC clock Enabled.
     * @var CLK_T::APBCLK1
     * Offset: 0x0C  APB Devices Clock Enable Control Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[8]     |USCI0CKEN |USCI0 Clock Enable Bit
     * |        |          |0 = USCI0 clock Disabled.
     * |        |          |1 = USCI0 clock Enabled.
     * |[18]    |BPWM0CKEN |BPWM0 Clock Enable Bit
     * |        |          |0 = BPWM0 clock Disabled.
     * |        |          |1 = BPWM0 clock Enabled.
     * @var CLK_T::CLKSEL0
     * Offset: 0x10  Clock Source Select Control Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[2:0]   |HCLKSEL   |HCLK Clock Source Selection (Write Protect)
     * |        |          |Before clock switching, the related clock sources (both pre-select and new-select) must be turned on.
     * |        |          |000 = Clock source from HXT.
     * |        |          |001 = Clock source from LXT.
     * |        |          |011 = Clock source from LIRC.
     * |        |          |101= Clock source from MIRC.
     * |        |          |111= Clock source from HIRC.
     * |        |          |Other = Reserved.
     * |        |          |Note 1: This bit is write protected. Refer to the SYS_REGLCTL register.
    *  |        |          |Note 2: Reset by power on reset
     * |[5:3]   |STCLKSEL  |Cortex-M23 SysTick Clock Source Selection (Write Protect)
     * |        |          |If SYST_CTRL[2]=0, SysTick uses listed clock source below.
     * |        |          |000 = Clock source from HXT.
     * |        |          |001 = Clock source from LXT.
     * |        |          |010 = Clock source from HXT/2.
     * |        |          |011 = Clock source from HCLK/2.
     * |        |          |111 = Clock source from HIRC/2.
     * |        |          |Note: if SysTick clock source is not from HCLK (i.e
     * |        |          |SYST_CTRL[2] = 0), SysTick clock source must less than or equal to HCLK/2.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[24]    |CANFD0SEL  |CANFD0 Clock Source Selection
     * |        |          |0 = Clock source from HCLK.
     * |        |          |1 = Clock source from HXT.
    * @var CLK_T::CLKSEL1
     * Offset: 0x14  Clock Source Select Control Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1:0]   |WDTSEL    |Watchdog Timer Clock Source Selection (Write Protect)
     * |        |          |00 = Reserved.
     * |        |          |01 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
     * |        |          |10 = Clock source from HCLK/2048.
     * |        |          |11 = Clock source from 38.4 kHz internal low speed RC oscillator (LIRC).
     * |        |          |Note: This bit is write protected.Refer to the SYS_REGLCTL register
     * |        |          |Note: This bit is forced to 11 when CONFIG0[31], CONFIG0[4], CONFIG0[3] are all ones.
     * |[3:2]   |WWDTSEL   |Window Watchdog Timer Clock Source Selection (Write Protect)
     * |        |          |10 = Clock source from HCLK/2048.
     * |        |          |11 = Clock source from 38.4 kHz internal low speed RC oscillator (LIRC).
     * |        |          |Others = Reserved.
     * |[6:4]   |CLKOSEL   |Clock Divider Clock Source Selection
     * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
     * |        |          |001 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
     * |        |          |010 = Clock source from HCLK.
     * |        |          |011 = Clock source from 48 MHz internal high speed RC oscillator (HIRC).
     * |        |          |100 = Clock source from 38.4 kHz internal low speed RC oscillator (LIRC).
     * |        |          |101 = Clock source from 4 MHz internal medium speed RC oscillator (MIRC).
     * |        |          |111 = Clock source from internal USB SOF.
     * |        |          |Others = Reserved.
     * |[10:8]  |TMR0SEL   |TIMER0 Clock Source Selection
     * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
     * |        |          |001 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
     * |        |          |010 = Clock source from PCLK0.
     * |        |          |011 = Clock source from external clock T0 pin.
     * |        |          |101 = Clock source from 38.4 kHz internal low speed RC oscillator (LIRC).
     * |        |          |111 = Clock source from 48 MHz internal high speed RC oscillator (HIRC).
     * |        |          |Others = Reserved.
     * |[14:12] |TMR1SEL   |TIMER1 Clock Source Selection
     * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
     * |        |          |001 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
     * |        |          |010 = Clock source from PCLK0.
     * |        |          |011 = Clock source from external clock T1 pin.
     * |        |          |101 = Clock source from 38.4 kHz internal low speed RC oscillator (LIRC).
     * |        |          |111 = Clock source from 48 MHz internal high speed RC oscillator (HIRC).
     * |        |          |Others = Reserved.
     * |[18:16] |TMR2SEL   |TIMER2 Clock Source Selection
     * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
     * |        |          |001 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
     * |        |          |010 = Clock source from PCLK1.
     * |        |          |011 = Clock source from external clock T2 pin.
     * |        |          |101 = Clock source from 38.4 kHz internal low speed RC oscillator (LIRC).
     * |        |          |111 = Clock source from 48 MHz internal high speed RC oscillator (HIRC).
     * |        |          |Others = Reserved.
     * |[22:20] |TMR3SEL   |TIMER3 Clock Source Selection
     * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
     * |        |          |001 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
     * |        |          |010 = Clock source from PCLK1.
     * |        |          |011 = Clock source from external clock T3 pin.
     * |        |          |101 = Clock source from 38.4 kHz internal low speed RC oscillator (LIRC).
     * |        |          |111 = Clock source from 48 MHz internal high speed RC oscillator (HIRC).
     * |        |          |Others = Reserved.
     * |[26:24] |UART0SEL  |UART0 Clock Source Selection
     * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
     * |        |          |010 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
     * |        |          |011 = Clock source from 48 MHz internal high speed RC oscillator (HIRC).
     * |        |          |100 = Clock source from PCLK0.
     * |        |          |101 = Clock source from 38.4 kHz  internal low speed RC oscillator (LIRC).
     * |        |          |Others = Reserved.
     * |[30:28] |UART1SEL  |UART1 Clock Source Selection
     * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
     * |        |          |010 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
     * |        |          |011 = Clock source from 48 MHz internal high speed RC oscillator (HIRC).
     * |        |          |100 = Clock source from PCLK1.
     * |        |          |101 = Clock source from 38.4 kHz  internal low speed RC oscillator (LIRC).
     * |        |          |Others = Reserved.
     * @var CLK_T::CLKSEL2
     * Offset: 0x18  Clock Source Select Control Register 2
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[5:4]   |SPI0SEL   |SPI0 Clock Source Selection
     * |        |          |00 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
     * |        |          |01 = Reserved.
     * |        |          |10 = Clock source from PCLK1.
     * |        |          |11 = Clock source from 48 MHz internal high speed RC oscillator (HIRC).
     * @var CLK_T::CLKSEL3
     * Offset: 0x1C  Clock Source Select Control Register 3
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[6:4]   |UART4SEL  |UART4 Clock Source Selection
     * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
     * |        |          |010 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
     * |        |          |011 = Clock source from  48 MHz internal high speed RC oscillator (HIRC).
     * |        |          |100 = Clock source from PCLK0.
     * |        |          |101 = Clock source from 38.4 kHz  internal low speed RC oscillator (LIRC).
     * |        |          |Others = Reserved.
     * |[26:24] |UART2SEL  |UART2 Clock Source Selection
     * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
     * |        |          |010 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
     * |        |          |011 = Clock source from  48 MHz internal high speed RC oscillator (HIRC).
     * |        |          |100 = Clock source from PCLK0.
     * |        |          |101 = Clock source from 38.4 kHz  internal low speed RC oscillator (LIRC).
     * |        |          |Others = Reserved.
     * |[30:28] |UART3SEL  |UART3 Clock Source Selection
     * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
     * |        |          |010 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
     * |        |          |011 = Clock source from  48 MHz internal high speed RC oscillator (HIRC).
     * |        |          |100= Clock source from PCLK1.
     * |        |          |101= Clock source from 38.4 kHz  internal low speed RC oscillator (LIRC).
     * |        |          |Others = Reserved.
     * @var CLK_T::CLKDIV0
     * Offset: 0x20  Clock Divider Number Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |HCLKDIV   |HCLK Clock Divide Number From HCLK Clock Source
     * |        |          |HCLK clock frequency = (HCLK clock source frequency) / (HCLKDIV + 1).
     * |[11:8]  |UART0DIV  |UART0 Clock Divide Number From UART0 Clock Source
     * |        |          |UART0 clock frequency = (UART0 clock source frequency) / (UART0DIV + 1).
     * |[15:12] |UART1DIV  |UART1 Clock Divide Number From UART1 Clock Source
     * |        |          |UART1 clock frequency = (UART1 clock source frequency) / (UART1DIV + 1).
     * |[23:16] |EADCDIV   |EADC Clock Divide Number From EADC Clock Source
     * |        |          |EADC clock frequency = (EADC clock source frequency) / (EADCDIV + 1).
     * @var CLK_T::CLKDIV4
     * Offset: 0x30  Clock Divider Number Register 4
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |UART2DIV  |UART2 Clock Divide Number From UART2 Clock Source
     * |        |          |UART2 clock frequency = (UART2 clock source frequency) / (UART2DIV + 1).
     * |[7:4]   |UART3DIV  |UART3 Clock Divide Number From UART3 Clock Source
     * |        |          |UART3 clock frequency = (UART3 clock source frequency) / (UART3DIV + 1).
     * |[11:8]  |UART4DIV  |UART4 Clock Divide Number From UART4 Clock Source
     * |        |          |UART4 clock frequency = (UART4 clock source frequency) / (UART4DIV + 1).
     * |[17:16] |CANFD0DIV  |CANFD0 Clock Divide Number From CANFD0 Clock Source
     * |        |          |CANFD0 clock frequency = (CANFD0 clock source frequency) / (CANFD0DIV + 1).
     * @var CLK_T::PCLKDIV
     * Offset: 0x34  APB Clock Divider Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[2:0]   |APB0DIV   |APB0 Clock DIvider
     * |        |          |APB0 clock can be divided from HCLK
     * |        |          |000: PCLK0 = HCLK.
     * |        |          |001: PCLK0 = 1/2 HCLK.
     * |        |          |010: PCLK0 = 1/4 HCLK.
     * |        |          |011: PCLK0 = 1/8 HCLK.
     * |        |          |100: PCLK0 = 1/16 HCLK.
     * |        |          |101: PCLK0 = 1/32 HCLK.
     * |        |          |Others: Reserved.
     * |[6:4]   |APB1DIV   |APB1 Clock DIvider
     * |        |          |APB1 clock can be divided from HCLK
     * |        |          |000: PCLK1 = HCLK.
     * |        |          |001: PCLK1 = 1/2 HCLK.
     * |        |          |010: PCLK1 = 1/4 HCLK.
     * |        |          |011: PCLK1 = 1/8 HCLK.
     * |        |          |100: PCLK1 = 1/16 HCLK.
     * |        |          |101: PCLK1 = 1/32 HCLK.
     * |        |          |Others: Reserved.
     * @var CLK_T::STATUS
     * Offset: 0x50  Clock Status Monitor Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |HXTSTB    |HXT Clock Source Stable Flag (Read Only)
     * |        |          |0 = 4~32 MHz external high speed crystal oscillator (HXT) clock is not stable or disabled.
     * |        |          |1 = 4~32 MHz external high speed crystal oscillator (HXT) clock is stable and enabled.
     * |[1]     |LXTSTB    |LXT Clock Source Stable Flag (Read Only)
     * |        |          |0 = 32.768 kHz external low speed crystal oscillator (LXT) clock is not stable or disabled.
     * |        |          |1 = 32.768 kHz external low speed crystal oscillator (LXT) clock is stabled and enabled.
     * |[3]     |LIRCSTB   |LIRC Clock Source Stable Flag (Read Only)
     * |        |          |0 = 38.4 kHz internal low speed RC oscillator (LIRC) clock is not stable or disabled.
     * |        |          |1 = 38.4 kHz internal low speed RC oscillator (LIRC) clock is stable and enabled.
     * |[4]     |HIRCSTB   |HIRC Clock Source Stable Flag (Read Only)
     * |        |          |0 = 48 MHz internal high speed RC oscillator (HIRC) clock is not stable or disabled.
     * |        |          |1 = 48 MHz internal high speed RC oscillator (HIRC) clock is stable and enabled.
     * |[6]     |MIRCSTB   |MIRC Clock Source Stable Flag (Read Only)
     * |        |          |0 = 4 MHz internal mid speed RC oscillator (MIRC) clock is not stable or disabled.
     * |        |          |1 = 4 MHz internal mid speed RC oscillator (MIRC) clock is stable and enabled.
     * |[7]     |CLKSFAIL  |Clock Switching Fail Flag (Read Only)
     * |        |          |This bit is updated when software switches system clock source
     * |        |          |If switch target clock is stable, this bit will be set to 0
     * |        |          |If switch target clock is not stable, this bit will be set to 1.
     * |        |          |0 = Clock switching success.
     * |        |          |1 = Clock switching failure.
     * |        |          |Note: Write 1 to clear the bit to 0.
     * @var CLK_T::CLKOCTL
     * Offset: 0x60  Clock Output Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |FREQSEL   |Clock Output Frequency Selection
     * |        |          |The formula of output frequency is
     * |        |          |Fout = Fin/2(N+1).
     * |        |          |Fin is the input clock frequency.
     * |        |          |Fout is the frequency of divider output clock.
     * |        |          |N is the 4-bit value of FREQSEL[3:0].
     * |[5]     |DIV1EN    |Clock Output Divide One Enable Bit
     * |        |          |0 = Clock Output will output clock with source frequency divided by FREQSEL.
     * |        |          |1 = Clock Output will output clock with source frequency.
     * |[6]     |CLK1HZEN  |Clock Output 1Hz Enable Bit
     * |        |          |0 = 1 Hz clock output for 32.768 kHz frequency compensation Disabled.
     * |        |          |1 = 1 Hz clock output for 32.768 kHz frequency compensation Enabled.
     * @var CLK_T::CLKDCTL
     * Offset: 0x70  Clock Fail Detector Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4]     |HXTFDEN   |HXT Clock Fail Detector Enable Bit
     * |        |          |0 = 4~32 MHz external high speed crystal oscillator (HXT) clock fail detector Disabled.
     * |        |          |1 = 4~32 MHz external high speed crystal oscillator (HXT) clock fail detector Enabled.
     * |[5]     |HXTFIEN   |HXT Clock Fail Interrupt Enable Bit
     * |        |          |0 = 4~32 MHz external high speed crystal oscillator (HXT) clock fail interrupt Disabled.
     * |        |          |1 = 4~32 MHz external high speed crystal oscillator (HXT) clock fail interrupt Enabled.
     * |[12]    |LXTFDEN   |LXT Clock Fail Detector Enable Bit
     * |        |          |0 = 32.768 kHz external low speed crystal oscillator (LXT) clock fail detector Disabled.
     * |        |          |1 = 32.768 kHz external low speed crystal oscillator (LXT) clock fail detector Enabled.
     * |[13]    |LXTFIEN   |LXT Clock Fail Interrupt Enable Bit
     * |        |          |0 = 32.768 kHz external low speed crystal oscillator (LXT) clock fail interrupt Disabled.
     * |        |          |1 = 32.768 kHz external low speed crystal oscillator (LXT) clock fail interrupt Enabled.
     * |[16]    |HXTFQDEN  |HXT Clock Frequency Range Detector Enable Bit
     * |        |          |0 = 4~32 MHz external high speed crystal oscillator (HXT) clock frequency range detector Disabled.
     * |        |          |1 = 4~32 MHz external high speed crystal oscillator (HXT) clock frequency range detector Enabled.
     * |[17]    |HXTFQIEN  |HXT Clock Frequency Range Detector Interrupt Enable Bit
     * |        |          |0 = 4~32 MHz external high speed crystal oscillator (HXT) clock frequency range detector fail interrupt Disabled.
     * |        |          |1 = 4~32 MHz external high speed crystal oscillator (HXT) clock frequency range detector fail interrupt Enabled.
     * @var CLK_T::CLKDSTS
     * Offset: 0x74  Clock Fail Detector Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |HXTFIF    |HXT Clock Fail Interrupt Flag (Write Protect)
     * |        |          |0 = 4~32 MHz external high speed crystal oscillator (HXT) clock is normal.
     * |        |          |1 = 4~32 MHz external high speed crystal oscillator (HXT) clock stops.
     * |        |          |Note: Write 1 to clear the bit to 0.
     * |[1]     |LXTFIF    |LXT Clock Fail Interrupt Flag (Write Protect)
     * |        |          |0 = 32.768 kHz external low speed crystal oscillator (LXT) clock is normal.
     * |        |          |1 = 32.768 kHz external low speed crystal oscillator (LXT) stops.
     * |        |          |Note: Write 1 to clear the bit to 0.
     * |[8]     |HXTFQIF   |HXT Clock Frequency Range Detector Interrupt Flag (Write Protect)
     * |        |          |0 = 4~32 MHz external high speed crystal oscillator (HXT) clock frequency is normal.
     * |        |          |1 = 4~32 MHz external high speed crystal oscillator (HXT) clock frequency is abnormal.
     * |        |          |Note: Write 1 to clear the bit to 0.
     * @var CLK_T::CDUPB
     * Offset: 0x78  Clock Frequency Range Detector Upper Boundary Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[9:0]   |UPERBD    |HXT Clock Frequency Range Detector Upper Boundary Value
     * |        |          |The bits define the maximum value of frequency range detector window.
     * |        |          |When HXT frequency higher than this maximum frequency value, the HXT Clock Frequency Range Detector Interrupt Flag will set to 1.
     * |        |          |Note :Frequency out of range will be asserted when HIRC_period*512> HXT_period*CLK_DUPB or HIRC_period*512 < HXT_period*CLK_CDLOWB.
     * @var CLK_T::CDLOWB
     * Offset: 0x7C  Clock Frequency Range Detector Lower Boundary Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[9:0]   |LOWERBD   |HXT Clock Frequency Range Detector Lower Boundary Value
     * |        |          |The bits define the minimum value of frequency range detector window.
     * |        |          |When HXT frequency lower than this minimum frequency value, the HXT Clock Frequency Range Detector Interrupt Flag will set to 1.
     * |        |          |Note :The frequency out of range will be asserted when HIRC_period*512> HXT_period*CLK_DUPB or HIRC_period*512 < HXT_period*CLK_CDLOWB.
     * @var CLK_T::PMUCTL
     * Offset: 0x90  Power Manager Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[2:0]   |PDMSEL    |Power-down Mode Selection (Write Protect)
     * |        |          |This is a protected register. Please refer to open lock sequence to program it.
     * |        |          |These bits control chip power-down mode grade selection when CPU execute WFI/WFE instruction.
     * |        |          |000 = Power-down mode is selected. (PD)
     * |        |          |010 = fast wake up.(FWPD)
     * |        |          |others = Reserved.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var CLK_T::HXTFSEL
     * Offset: 0xB4  HXT Filter Select Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |HXTFSEL   |HXT Filter Select (Write Protect)
     * |        |          |0 = HXT frequency is greater than 12 MHz.
     * |        |          |1 = HXT frequency is less than or equal to 12 MHz.
     * |        |          |Note 1: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note 2: This bit should not be changed during HXT running.
     */
    __IO uint32_t PWRCTL;                /*!< [0x0000] System Power-down Control Register                               */
    __IO uint32_t AHBCLK;                /*!< [0x0004] AHB Devices Clock Enable Control Register                        */
    __IO uint32_t APBCLK0;               /*!< [0x0008] APB Devices Clock Enable Control Register 0                      */
    __IO uint32_t APBCLK1;               /*!< [0x000c] APB Devices Clock Enable Control Register 1                      */
    __IO uint32_t CLKSEL0;               /*!< [0x0010] Clock Source Select Control Register 0                           */
    __IO uint32_t CLKSEL1;               /*!< [0x0014] Clock Source Select Control Register 1                           */
    __IO uint32_t CLKSEL2;               /*!< [0x0018] Clock Source Select Control Register 2                           */
    __IO uint32_t CLKSEL3;               /*!< [0x001c] Clock Source Select Control Register 3                           */
    __IO uint32_t CLKDIV0;               /*!< [0x0020] Clock Divider Number Register 0                                  */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE0[3];
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t CLKDIV4;               /*!< [0x0030] Clock Divider Number Register 4                                  */
    __IO uint32_t PCLKDIV;               /*!< [0x0034] APB Clock Divider Register                                       */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE1[6];
    /// @endcond //HIDDEN_SYMBOLS
    __I  uint32_t STATUS;                /*!< [0x0050] Clock Status Monitor Register                                    */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE2[3];
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t CLKOCTL;               /*!< [0x0060] Clock Output Control Register                                    */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE3[3];
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t CLKDCTL;               /*!< [0x0070] Clock Fail Detector Control Register                             */
    __IO uint32_t CLKDSTS;               /*!< [0x0074] Clock Fail Detector Status Register                              */
    __IO uint32_t CDUPB;                 /*!< [0x0078] Clock Frequency Range Detector Upper Boundary Register           */
    __IO uint32_t CDLOWB;                /*!< [0x007c] Clock Frequency Range Detector Lower Boundary Register           */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE4[4];
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t PMUCTL;                /*!< [0x0090] Power Manager Control Register                                   */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE5[8];
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t HXTFSEL;               /*!< [0x00b4] HXT Filter Select Control Register                               */
} CLK_T;

/**
    @addtogroup CLK_CONST CLK Bit Field Definition
    Constant Definitions for CLK Controller
@{ */

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

#define CLK_PWRCTL_MIRCEN_Pos            (19)                                              /*!< CLK_T::PWRCTL: MIRCEN Position         */
#define CLK_PWRCTL_MIRCEN_Msk            (0x1ul << CLK_PWRCTL_MIRCEN_Pos)                  /*!< CLK_T::PWRCTL: MIRCEN Mask             */

#define CLK_PWRCTL_HXTGAIN_Pos           (20)                                              /*!< CLK_T::PWRCTL: HXTGAIN Position        */
#define CLK_PWRCTL_HXTGAIN_Msk           (0x7ul << CLK_PWRCTL_HXTGAIN_Pos)                 /*!< CLK_T::PWRCTL: HXTGAIN Mask            */

#define CLK_AHBCLK_PDMACKEN_Pos          (1)                                               /*!< CLK_T::AHBCLK: PDMACKEN Position       */
#define CLK_AHBCLK_PDMACKEN_Msk          (0x1ul << CLK_AHBCLK_PDMACKEN_Pos)                /*!< CLK_T::AHBCLK: PDMACKEN Mask           */

#define CLK_AHBCLK_ISPCKEN_Pos           (2)                                               /*!< CLK_T::AHBCLK: ISPCKEN Position        */
#define CLK_AHBCLK_ISPCKEN_Msk           (0x1ul << CLK_AHBCLK_ISPCKEN_Pos)                 /*!< CLK_T::AHBCLK: ISPCKEN Mask            */

#define CLK_AHBCLK_EXSTCKEN_Pos          (4)                                               /*!< CLK_T::AHBCLK: EXSTCKEN Position       */
#define CLK_AHBCLK_EXSTCKEN_Msk          (0x1ul << CLK_AHBCLK_EXSTCKEN_Pos)                /*!< CLK_T::AHBCLK: EXSTCKEN Mask           */

#define CLK_AHBCLK_CRCCKEN_Pos           (7)                                               /*!< CLK_T::AHBCLK: CRCCKEN Position        */
#define CLK_AHBCLK_CRCCKEN_Msk           (0x1ul << CLK_AHBCLK_CRCCKEN_Pos)                 /*!< CLK_T::AHBCLK: CRCCKEN Mask            */

#define CLK_AHBCLK_FMCIDLE_Pos           (15)                                              /*!< CLK_T::AHBCLK: FMCIDLE Position        */
#define CLK_AHBCLK_FMCIDLE_Msk           (0x1ul << CLK_AHBCLK_FMCIDLE_Pos)                 /*!< CLK_T::AHBCLK: FMCIDLE Mask            */

#define CLK_AHBCLK_CANFD0CKEN_Pos         (23)                                              /*!< CLK_T::AHBCLK: CANFD0CKEN Position      */
#define CLK_AHBCLK_CANFD0CKEN_Msk         (0x1ul << CLK_AHBCLK_CANFD0CKEN_Pos)               /*!< CLK_T::AHBCLK: CANFD0CKEN Mask          */

#define CLK_AHBCLK_GPACKEN_Pos           (24)                                              /*!< CLK_T::AHBCLK: GPACKEN Position        */
#define CLK_AHBCLK_GPACKEN_Msk           (0x1ul << CLK_AHBCLK_GPACKEN_Pos)                 /*!< CLK_T::AHBCLK: GPACKEN Mask            */

#define CLK_AHBCLK_GPBCKEN_Pos           (25)                                              /*!< CLK_T::AHBCLK: GPBCKEN Position        */
#define CLK_AHBCLK_GPBCKEN_Msk           (0x1ul << CLK_AHBCLK_GPBCKEN_Pos)                 /*!< CLK_T::AHBCLK: GPBCKEN Mask            */

#define CLK_AHBCLK_GPCCKEN_Pos           (26)                                              /*!< CLK_T::AHBCLK: GPCCKEN Position        */
#define CLK_AHBCLK_GPCCKEN_Msk           (0x1ul << CLK_AHBCLK_GPCCKEN_Pos)                 /*!< CLK_T::AHBCLK: GPCCKEN Mask            */

#define CLK_AHBCLK_GPDCKEN_Pos           (27)                                              /*!< CLK_T::AHBCLK: GPDCKEN Position        */
#define CLK_AHBCLK_GPDCKEN_Msk           (0x1ul << CLK_AHBCLK_GPDCKEN_Pos)                 /*!< CLK_T::AHBCLK: GPDCKEN Mask            */

#define CLK_AHBCLK_GPECKEN_Pos           (28)                                              /*!< CLK_T::AHBCLK: GPECKEN Position        */
#define CLK_AHBCLK_GPECKEN_Msk           (0x1ul << CLK_AHBCLK_GPECKEN_Pos)                 /*!< CLK_T::AHBCLK: GPECKEN Mask            */

#define CLK_AHBCLK_GPFCKEN_Pos           (29)                                              /*!< CLK_T::AHBCLK: GPFCKEN Position        */
#define CLK_AHBCLK_GPFCKEN_Msk           (0x1ul << CLK_AHBCLK_GPFCKEN_Pos)                 /*!< CLK_T::AHBCLK: GPFCKEN Mask            */

#define CLK_APBCLK0_WDTCKEN_Pos          (0)                                               /*!< CLK_T::APBCLK0: WDTCKEN Position       */
#define CLK_APBCLK0_WDTCKEN_Msk          (0x1ul << CLK_APBCLK0_WDTCKEN_Pos)                /*!< CLK_T::APBCLK0: WDTCKEN Mask           */

#define CLK_APBCLK0_RTCCKEN_Pos          (1)                                               /*!< CLK_T::APBCLK0: RTCCKEN Position       */
#define CLK_APBCLK0_RTCCKEN_Msk          (0x1ul << CLK_APBCLK0_RTCCKEN_Pos)                /*!< CLK_T::APBCLK0: RTCCKEN Mask           */

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

#define CLK_APBCLK0_SPI0CKEN_Pos         (13)                                              /*!< CLK_T::APBCLK0: SPI0CKEN Position      */
#define CLK_APBCLK0_SPI0CKEN_Msk         (0x1ul << CLK_APBCLK0_SPI0CKEN_Pos)               /*!< CLK_T::APBCLK0: SPI0CKEN Mask          */

#define CLK_APBCLK0_UART0CKEN_Pos        (16)                                              /*!< CLK_T::APBCLK0: UART0CKEN Position     */
#define CLK_APBCLK0_UART0CKEN_Msk        (0x1ul << CLK_APBCLK0_UART0CKEN_Pos)              /*!< CLK_T::APBCLK0: UART0CKEN Mask         */

#define CLK_APBCLK0_UART1CKEN_Pos        (17)                                              /*!< CLK_T::APBCLK0: UART1CKEN Position     */
#define CLK_APBCLK0_UART1CKEN_Msk        (0x1ul << CLK_APBCLK0_UART1CKEN_Pos)              /*!< CLK_T::APBCLK0: UART1CKEN Mask         */

#define CLK_APBCLK0_UART2CKEN_Pos        (18)                                              /*!< CLK_T::APBCLK0: UART2CKEN Position     */
#define CLK_APBCLK0_UART2CKEN_Msk        (0x1ul << CLK_APBCLK0_UART2CKEN_Pos)              /*!< CLK_T::APBCLK0: UART2CKEN Mask         */

#define CLK_APBCLK0_UART3CKEN_Pos        (19)                                              /*!< CLK_T::APBCLK0: UART3CKEN Position     */
#define CLK_APBCLK0_UART3CKEN_Msk        (0x1ul << CLK_APBCLK0_UART3CKEN_Pos)              /*!< CLK_T::APBCLK0: UART3CKEN Mask         */

#define CLK_APBCLK0_UART4CKEN_Pos        (20)                                              /*!< CLK_T::APBCLK0: UART4CKEN Position     */
#define CLK_APBCLK0_UART4CKEN_Msk        (0x1ul << CLK_APBCLK0_UART4CKEN_Pos)              /*!< CLK_T::APBCLK0: UART4CKEN Mask         */

#define CLK_APBCLK0_USBDCKEN_Pos         (27)                                              /*!< CLK_T::APBCLK0: USBDCKEN Position      */
#define CLK_APBCLK0_USBDCKEN_Msk         (0x1ul << CLK_APBCLK0_USBDCKEN_Pos)               /*!< CLK_T::APBCLK0: USBDCKEN Mask          */

#define CLK_APBCLK0_EADCCKEN_Pos         (28)                                              /*!< CLK_T::APBCLK0: EADCCKEN Position      */
#define CLK_APBCLK0_EADCCKEN_Msk         (0x1ul << CLK_APBCLK0_EADCCKEN_Pos)               /*!< CLK_T::APBCLK0: EADCCKEN Mask          */

#define CLK_APBCLK1_SC0CKEN_Pos          (0)                                               /*!< CLK_T::APBCLK1: SC0CKEN Position       */
#define CLK_APBCLK1_SC0CKEN_Msk          (0x1ul << CLK_APBCLK1_SC0CKEN_Pos)                /*!< CLK_T::APBCLK1: SC0CKEN Mask           */

#define CLK_APBCLK1_USCI0CKEN_Pos        (8)                                               /*!< CLK_T::APBCLK1: USCI0CKEN Position     */
#define CLK_APBCLK1_USCI0CKEN_Msk        (0x1ul << CLK_APBCLK1_USCI0CKEN_Pos)              /*!< CLK_T::APBCLK1: USCI0CKEN Mask         */

#define CLK_APBCLK1_BPWM0CKEN_Pos        (18)                                              /*!< CLK_T::APBCLK1: BPWM0CKEN Position     */
#define CLK_APBCLK1_BPWM0CKEN_Msk        (0x1ul << CLK_APBCLK1_BPWM0CKEN_Pos)              /*!< CLK_T::APBCLK1: BPWM0CKEN Mask         */

#define CLK_CLKSEL0_HCLKSEL_Pos          (0)                                               /*!< CLK_T::CLKSEL0: HCLKSEL Position       */
#define CLK_CLKSEL0_HCLKSEL_Msk          (0x7ul << CLK_CLKSEL0_HCLKSEL_Pos)                /*!< CLK_T::CLKSEL0: HCLKSEL Mask           */

#define CLK_CLKSEL0_STCLKSEL_Pos         (3)                                               /*!< CLK_T::CLKSEL0: STCLKSEL Position      */
#define CLK_CLKSEL0_STCLKSEL_Msk         (0x7ul << CLK_CLKSEL0_STCLKSEL_Pos)               /*!< CLK_T::CLKSEL0: STCLKSEL Mask          */

#define CLK_CLKSEL0_CANFD0SEL_Pos         (24)                                              /*!< CLK_T::CLKSEL0: CANFD0SEL Position      */
#define CLK_CLKSEL0_CANFD0SEL_Msk         (0x1ul << CLK_CLKSEL0_CANFD0SEL_Pos)               /*!< CLK_T::CLKSEL0: CANFD0SEL Mask          */

#define CLK_CLKSEL1_WDTSEL_Pos           (0)                                               /*!< CLK_T::CLKSEL1: WDTSEL Position        */
#define CLK_CLKSEL1_WDTSEL_Msk           (0x3ul << CLK_CLKSEL1_WDTSEL_Pos)                 /*!< CLK_T::CLKSEL1: WDTSEL Mask            */

#define CLK_CLKSEL1_WWDTSEL_Pos          (2)                                               /*!< CLK_T::CLKSEL1: WWDTSEL Position       */
#define CLK_CLKSEL1_WWDTSEL_Msk          (0x3ul << CLK_CLKSEL1_WWDTSEL_Pos)                /*!< CLK_T::CLKSEL1: WWDTSEL Mask           */

#define CLK_CLKSEL1_CLKOSEL_Pos          (4)                                               /*!< CLK_T::CLKSEL1: CLKOSEL Position       */
#define CLK_CLKSEL1_CLKOSEL_Msk          (0x7ul << CLK_CLKSEL1_CLKOSEL_Pos)                /*!< CLK_T::CLKSEL1: CLKOSEL Mask           */

#define CLK_CLKSEL1_TMR0SEL_Pos          (8)                                               /*!< CLK_T::CLKSEL1: TMR0SEL Position       */
#define CLK_CLKSEL1_TMR0SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR0SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR0SEL Mask           */

#define CLK_CLKSEL1_TMR1SEL_Pos          (12)                                              /*!< CLK_T::CLKSEL1: TMR1SEL Position       */
#define CLK_CLKSEL1_TMR1SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR1SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR1SEL Mask           */

#define CLK_CLKSEL1_TMR2SEL_Pos          (16)                                              /*!< CLK_T::CLKSEL1: TMR2SEL Position       */
#define CLK_CLKSEL1_TMR2SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR2SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR2SEL Mask           */

#define CLK_CLKSEL1_TMR3SEL_Pos          (20)                                              /*!< CLK_T::CLKSEL1: TMR3SEL Position       */
#define CLK_CLKSEL1_TMR3SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR3SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR3SEL Mask           */

#define CLK_CLKSEL1_UART0SEL_Pos         (24)                                              /*!< CLK_T::CLKSEL1: UART0SEL Position      */
#define CLK_CLKSEL1_UART0SEL_Msk         (0x7ul << CLK_CLKSEL1_UART0SEL_Pos)               /*!< CLK_T::CLKSEL1: UART0SEL Mask          */

#define CLK_CLKSEL1_UART1SEL_Pos         (28)                                              /*!< CLK_T::CLKSEL1: UART1SEL Position      */
#define CLK_CLKSEL1_UART1SEL_Msk         (0x7ul << CLK_CLKSEL1_UART1SEL_Pos)               /*!< CLK_T::CLKSEL1: UART1SEL Mask          */

#define CLK_CLKSEL2_SPI0SEL_Pos          (4)                                               /*!< CLK_T::CLKSEL2: SPI0SEL Position       */
#define CLK_CLKSEL2_SPI0SEL_Msk          (0x3ul << CLK_CLKSEL2_SPI0SEL_Pos)                /*!< CLK_T::CLKSEL2: SPI0SEL Mask           */

#define CLK_CLKSEL3_UART4SEL_Pos         (4)                                               /*!< CLK_T::CLKSEL3: UART4SEL Position      */
#define CLK_CLKSEL3_UART4SEL_Msk         (0x7ul << CLK_CLKSEL3_UART4SEL_Pos)               /*!< CLK_T::CLKSEL3: UART4SEL Mask          */

#define CLK_CLKSEL3_UART2SEL_Pos         (24)                                              /*!< CLK_T::CLKSEL3: UART2SEL Position      */
#define CLK_CLKSEL3_UART2SEL_Msk         (0x7ul << CLK_CLKSEL3_UART2SEL_Pos)               /*!< CLK_T::CLKSEL3: UART2SEL Mask          */

#define CLK_CLKSEL3_UART3SEL_Pos         (28)                                              /*!< CLK_T::CLKSEL3: UART3SEL Position      */
#define CLK_CLKSEL3_UART3SEL_Msk         (0x7ul << CLK_CLKSEL3_UART3SEL_Pos)               /*!< CLK_T::CLKSEL3: UART3SEL Mask          */

#define CLK_CLKDIV0_HCLKDIV_Pos          (0)                                               /*!< CLK_T::CLKDIV0: HCLKDIV Position       */
#define CLK_CLKDIV0_HCLKDIV_Msk          (0xful << CLK_CLKDIV0_HCLKDIV_Pos)                /*!< CLK_T::CLKDIV0: HCLKDIV Mask           */

#define CLK_CLKDIV0_UART0DIV_Pos         (8)                                               /*!< CLK_T::CLKDIV0: UART0DIV Position      */
#define CLK_CLKDIV0_UART0DIV_Msk         (0xful << CLK_CLKDIV0_UART0DIV_Pos)               /*!< CLK_T::CLKDIV0: UART0DIV Mask          */

#define CLK_CLKDIV0_UART1DIV_Pos         (12)                                              /*!< CLK_T::CLKDIV0: UART1DIV Position      */
#define CLK_CLKDIV0_UART1DIV_Msk         (0xful << CLK_CLKDIV0_UART1DIV_Pos)               /*!< CLK_T::CLKDIV0: UART1DIV Mask          */

#define CLK_CLKDIV0_EADCDIV_Pos          (16)                                              /*!< CLK_T::CLKDIV0: EADCDIV Position       */
#define CLK_CLKDIV0_EADCDIV_Msk          (0xfful << CLK_CLKDIV0_EADCDIV_Pos)               /*!< CLK_T::CLKDIV0: EADCDIV Mask           */

#define CLK_CLKDIV4_UART2DIV_Pos         (0)                                               /*!< CLK_T::CLKDIV4: UART2DIV Position      */
#define CLK_CLKDIV4_UART2DIV_Msk         (0xful << CLK_CLKDIV4_UART2DIV_Pos)               /*!< CLK_T::CLKDIV4: UART2DIV Mask          */

#define CLK_CLKDIV4_UART3DIV_Pos         (4)                                               /*!< CLK_T::CLKDIV4: UART3DIV Position      */
#define CLK_CLKDIV4_UART3DIV_Msk         (0xful << CLK_CLKDIV4_UART3DIV_Pos)               /*!< CLK_T::CLKDIV4: UART3DIV Mask          */

#define CLK_CLKDIV4_UART4DIV_Pos         (8)                                               /*!< CLK_T::CLKDIV4: UART4DIV Position      */
#define CLK_CLKDIV4_UART4DIV_Msk         (0xful << CLK_CLKDIV4_UART4DIV_Pos)               /*!< CLK_T::CLKDIV4: UART4DIV Mask          */

#define CLK_CLKDIV4_CANFD0DIV_Pos         (16)                                              /*!< CLK_T::CLKDIV4: CANFD0DIV Positin       */
#define CLK_CLKDIV4_CANFD0DIV_Msk         (0x3ul << CLK_CLKDIV4_CANFD0DIV_Pos)               /*!< CLK_T::CLKDIV4: CANFD0DIV Mask          */

#define CLK_PCLKDIV_APB0DIV_Pos          (0)                                               /*!< CLK_T::PCLKDIV: APB0DIV Position       */
#define CLK_PCLKDIV_APB0DIV_Msk          (0x7ul << CLK_PCLKDIV_APB0DIV_Pos)                /*!< CLK_T::PCLKDIV: APB0DIV Mask           */

#define CLK_PCLKDIV_APB1DIV_Pos          (4)                                               /*!< CLK_T::PCLKDIV: APB1DIV Position       */
#define CLK_PCLKDIV_APB1DIV_Msk          (0x7ul << CLK_PCLKDIV_APB1DIV_Pos)                /*!< CLK_T::PCLKDIV: APB1DIV Mask           */

#define CLK_STATUS_HXTSTB_Pos            (0)                                               /*!< CLK_T::STATUS: HXTSTB Position         */
#define CLK_STATUS_HXTSTB_Msk            (0x1ul << CLK_STATUS_HXTSTB_Pos)                  /*!< CLK_T::STATUS: HXTSTB Mask             */

#define CLK_STATUS_LXTSTB_Pos            (1)                                               /*!< CLK_T::STATUS: LXTSTB Position         */
#define CLK_STATUS_LXTSTB_Msk            (0x1ul << CLK_STATUS_LXTSTB_Pos)                  /*!< CLK_T::STATUS: LXTSTB Mask             */

#define CLK_STATUS_LIRCSTB_Pos           (3)                                               /*!< CLK_T::STATUS: LIRCSTB Position        */
#define CLK_STATUS_LIRCSTB_Msk           (0x1ul << CLK_STATUS_LIRCSTB_Pos)                 /*!< CLK_T::STATUS: LIRCSTB Mask            */

#define CLK_STATUS_HIRCSTB_Pos           (4)                                               /*!< CLK_T::STATUS: HIRCSTB Position        */
#define CLK_STATUS_HIRCSTB_Msk           (0x1ul << CLK_STATUS_HIRCSTB_Pos)                 /*!< CLK_T::STATUS: HIRCSTB Mask            */

#define CLK_STATUS_MIRCSTB_Pos           (6)                                               /*!< CLK_T::STATUS: MIRCSTB Position        */
#define CLK_STATUS_MIRCSTB_Msk           (0x1ul << CLK_STATUS_MIRCSTB_Pos)                 /*!< CLK_T::STATUS: MIRCSTB Mask            */

#define CLK_STATUS_CLKSFAIL_Pos          (7)                                               /*!< CLK_T::STATUS: CLKSFAIL Position       */
#define CLK_STATUS_CLKSFAIL_Msk          (0x1ul << CLK_STATUS_CLKSFAIL_Pos)                /*!< CLK_T::STATUS: CLKSFAIL Mask           */

#define CLK_CLKOCTL_FREQSEL_Pos          (0)                                               /*!< CLK_T::CLKOCTL: FREQSEL Position       */
#define CLK_CLKOCTL_FREQSEL_Msk          (0xful << CLK_CLKOCTL_FREQSEL_Pos)                /*!< CLK_T::CLKOCTL: FREQSEL Mask           */

#define CLK_CLKOCTL_DIV1EN_Pos           (5)                                               /*!< CLK_T::CLKOCTL: DIV1EN Position        */
#define CLK_CLKOCTL_DIV1EN_Msk           (0x1ul << CLK_CLKOCTL_DIV1EN_Pos)                 /*!< CLK_T::CLKOCTL: DIV1EN Mask            */

#define CLK_CLKOCTL_CLK1HZEN_Pos         (6)                                               /*!< CLK_T::CLKOCTL: CLK1HZEN Position      */
#define CLK_CLKOCTL_CLK1HZEN_Msk         (0x1ul << CLK_CLKOCTL_CLK1HZEN_Pos)               /*!< CLK_T::CLKOCTL: CLK1HZEN Mask          */

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

#define CLK_PMUCTL_PDMSEL_Pos            (0)                                               /*!< CLK_T::PMUCTL: PDMSEL Position         */
#define CLK_PMUCTL_PDMSEL_Msk            (0x7ul << CLK_PMUCTL_PDMSEL_Pos)                  /*!< CLK_T::PMUCTL: PDMSEL Mask             */

#define CLK_PMUCTL_WKTMREN_Pos           (8)                                               /*!< CLK_T::PMUCTL: WKTMREN Position        */
#define CLK_PMUCTL_WKTMREN_Msk           (0x1ul << CLK_PMUCTL_WKTMREN_Pos)                 /*!< CLK_T::PMUCTL: WKTMREN Mask            */

#define CLK_PMUCTL_WKTMRIS_Pos           (9)                                               /*!< CLK_T::PMUCTL: WKTMRIS Position        */
#define CLK_PMUCTL_WKTMRIS_Msk           (0x7ul << CLK_PMUCTL_WKTMRIS_Pos)                 /*!< CLK_T::PMUCTL: WKTMRIS Mask            */

#define CLK_PMUCTL_WKPINEN0_Pos          (16)                                              /*!< CLK_T::PMUCTL: WKPINEN0 Position        */
#define CLK_PMUCTL_WKPINEN0_Msk          (0x3ul << CLK_PMUCTL_WKPINEN0_Pos)                /*!< CLK_T::PMUCTL: WKPINEN0 Mask            */

#define CLK_PMUCTL_WKPINDBEN_Pos         (22)                                              /*!< CLK_T::PMUCTL: WKPINDBEN Position        */
#define CLK_PMUCTL_WKPINDBEN_Msk         (0x1ul << CLK_PMUCTL_WKPINDBEN_Pos)               /*!< CLK_T::PMUCTL: WKPINDBEN Mask            */

#define CLK_PMUCTL_RTCWKEN_Pos           (23)                                              /*!< CLK_T::PMUCTL: RTCWKEN Position        */
#define CLK_PMUCTL_RTCWKEN_Msk           (0x1ul << CLK_PMUCTL_RTCWKEN_Pos)                 /*!< CLK_T::PMUCTL: RTCWKEN Mask            */

#define CLK_PMUCTL_WKPINEN1_Pos          (24)                                              /*!< CLK_T::PMUCTL: WKPINEN1 Position        */
#define CLK_PMUCTL_WKPINEN1_Msk          (0x3ul << CLK_PMUCTL_WKPINEN1_Pos)                /*!< CLK_T::PMUCTL: WKPINEN1 Mask            */

#define CLK_PMUCTL_WKPINEN2_Pos          (26)                                              /*!< CLK_T::PMUCTL: WKPINEN2 Position        */
#define CLK_PMUCTL_WKPINEN2_Msk          (0x3ul << CLK_PMUCTL_WKPINEN2_Pos)                /*!< CLK_T::PMUCTL: WKPINEN2 Mask            */

#define CLK_PMUCTL_WKPINEN3_Pos          (28)                                              /*!< CLK_T::PMUCTL: WKPINEN3 Position        */
#define CLK_PMUCTL_WKPINEN3_Msk          (0x3ul << CLK_PMUCTL_WKPINEN3_Pos)                /*!< CLK_T::PMUCTL: WKPINEN3 Mask            */

#define CLK_PMUCTL_WKPINEN4_Pos          (30)                                              /*!< CLK_T::PMUCTL: WKPINEN4 Position        */
#define CLK_PMUCTL_WKPINEN4_Msk          (0x3ul << CLK_PMUCTL_WKPINEN4_Pos)                /*!< CLK_T::PMUCTL: WKPINEN4 Mask            */

#define CLK_HXTFSEL_HXTFSEL_Pos          (0)                                               /*!< CLK_T::HXTFSEL: HXTFSEL Position       */
#define CLK_HXTFSEL_HXTFSEL_Msk          (0x1ul << CLK_HXTFSEL_HXTFSEL_Pos)                /*!< CLK_T::HXTFSEL: HXTFSEL Mask           */

/** @} CLK_CONST */
/** @} end of CLK register group */
/** @} end of REGISTER group */

#if defined ( __CC_ARM   )
    #pragma no_anon_unions
#endif

#endif /* __CLK_REG_H__ */
