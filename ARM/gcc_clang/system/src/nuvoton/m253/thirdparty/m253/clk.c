/****************************************************************************
 * @file     clk.c
 * @version  V1.10
 * @brief    M253 series CLK driver source file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

// #include "NuMicro.h" // Note: Changed for MikroE implementation.
#include "mcu.h" // Note: Added for MikroE implementation.

/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup CLK_Driver CLK Driver
  @{
*/

int32_t g_CLK_i32ErrCode = 0;    /*!< CLK global error code */

/** @addtogroup CLK_EXPORTED_FUNCTIONS CLK Exported Functions
  @{
*/

/**
  * @brief      Disable frequency output function
  * @details    This function disable frequency output function.
  */
void CLK_DisableCKO(void)
{
    /* Disable CKO clock source */
    CLK->APBCLK0 &= (~CLK_APBCLK0_CLKOCKEN_Msk);
}

/**
  * @brief      This function enable frequency divider module clock.
  *             enable frequency divider clock function and configure frequency divider.
  * @param[in]  u32ClkSrc is frequency divider function clock source. Including :
  *             - \ref CLK_CLKSEL1_CLKOSEL_HXT
  *             - \ref CLK_CLKSEL1_CLKOSEL_LXT
  *             - \ref CLK_CLKSEL1_CLKOSEL_HCLK
  *             - \ref CLK_CLKSEL1_CLKOSEL_HIRC
  *             - \ref CLK_CLKSEL1_CLKOSEL_LIRC
  *             - \ref CLK_CLKSEL1_CLKOSEL_MIRC
  *             - \ref CLK_CLKSEL1_CLKOSEL_SOF
  * @param[in]  u32ClkDiv is divider output frequency selection.
  * @param[in]  u32ClkDivBy1En is frequency divided by one enable.
  *
  * @details    Output selected clock to CKO. The output clock frequency is divided by u32ClkDiv.
  *             The formula is:
  *                 CKO frequency = (Clock source frequency) / 2^(u32ClkDiv + 1)
  *             This function is just used to set CKO clock.
  *             User must enable I/O for CKO clock output pin by themselves.
  */
void CLK_EnableCKO(uint32_t u32ClkSrc, uint32_t u32ClkDiv, uint32_t u32ClkDivBy1En)
{
    /* CKO = clock source / 2^(u32ClkDiv + 1) */
    CLK->CLKOCTL = u32ClkDiv | (u32ClkDivBy1En << CLK_CLKOCTL_DIV1EN_Pos);

    /* Enable CKO clock source */
    CLK->APBCLK0 |= CLK_APBCLK0_CLKOCKEN_Msk;

    /* Select CKO clock source */
    CLK->CLKSEL1 = (CLK->CLKSEL1 & (~CLK_CLKSEL1_CLKOSEL_Msk)) | (u32ClkSrc);
}

/**
  * @brief      Enter to Power-down mode
  * @details    This function is used to let system enter to Power-down mode. \n
  *             The register write-protection function should be disabled before using this function.
  */
void CLK_PowerDown(void)
{
    uint32_t u32HIRCTRIMCTL, u32MIRCTRIMCTL;

    /* Set the processor uses deep sleep as its low power mode */
    SCB->SCR |= SCB_SCR_SLEEPDEEP_Msk;

    /* Set system Power-down enabled */
    CLK->PWRCTL |= (CLK_PWRCTL_PDEN_Msk);

    /* Store HIRC/MIRC control register */
    u32HIRCTRIMCTL = SYS->HIRCTRIMCTL;
    u32MIRCTRIMCTL = SYS->MIRCTRIMCTL;

    /* Disable HIRC/MIRC auto trim */
    SYS->HIRCTRIMCTL &= (~SYS_HIRCTRIMCTL_FREQSEL_Msk);
    SYS->MIRCTRIMCTL &= (~SYS_MIRCTRIMCTL_FREQSEL_Msk);

    /* Chip enter Power-down mode after CPU run WFI instruction */
    __WFI();

    /* Clear deep sleep mode selection */
    SCB->SCR &= ~SCB_SCR_SLEEPDEEP_Msk;

    /* Restore HIRC/MIRC control register */
    SYS->HIRCTRIMCTL = u32HIRCTRIMCTL;
    SYS->MIRCTRIMCTL = u32MIRCTRIMCTL;
}

/**
  * @brief      Enter to Idle mode
  * @details    This function let system enter to Idle mode. \n
  *             The register write-protection function should be disabled before using this function.
  */
void CLK_Idle(void)
{
    /* Set the processor uses sleep as its low power mode */
    SCB->SCR &= ~SCB_SCR_SLEEPDEEP_Msk;

    /* Set chip in idle mode because of WFI command */
    CLK->PWRCTL &= ~CLK_PWRCTL_PDEN_Msk;

    /* Chip enter idle mode after CPU run WFI instruction */
    __WFI();
}

/**
  * @brief      Get external high speed crystal clock frequency
  * @return     External high speed crystal frequency
  * @details    This function get external high speed crystal frequency. The frequency unit is Hz.
  */
uint32_t CLK_GetHXTFreq(void)
{
    if (CLK->PWRCTL & CLK_PWRCTL_HXTEN_Msk)
        return __HXT;
    else
        return 0UL;
}

/**
  * @brief      Get external low speed crystal clock frequency
  * @return     External low speed crystal clock frequency
  * @details    This function get external low frequency crystal frequency. The frequency unit is Hz.
  */
uint32_t CLK_GetLXTFreq(void)
{
    if (CLK->PWRCTL & CLK_PWRCTL_LXTEN_Msk)
        return __LXT;
    else
        return 0UL;
}

/**
  * @brief      Get PCLK0 frequency
  * @return     PCLK0 frequency
  * @details    This function get PCLK0 frequency. The frequency unit is Hz.
  */
uint32_t CLK_GetPCLK0Freq(void)
{
    SystemCoreClockUp2025-07-15();

    switch (CLK->PCLKDIV & CLK_PCLKDIV_APB0DIV_Msk)
    {
        case (CLK_PCLKDIV_APB0DIV_DIV1):
            return SystemCoreClock;

        case (CLK_PCLKDIV_APB0DIV_DIV2):
            return SystemCoreClock >> 1;

        case (CLK_PCLKDIV_APB0DIV_DIV4):
            return SystemCoreClock >> 2;

        case (CLK_PCLKDIV_APB0DIV_DIV8):
            return SystemCoreClock >> 3;

        case (CLK_PCLKDIV_APB0DIV_DIV16):
            return SystemCoreClock >> 4;

        case (CLK_PCLKDIV_APB0DIV_DIV32):
            return SystemCoreClock >> 5;

        default:
            return 0UL;
    }
}

/**
  * @brief      Get PCLK1 frequency
  * @return     PCLK1 frequency
  * @details    This function get PCLK1 frequency. The frequency unit is Hz.
  */
uint32_t CLK_GetPCLK1Freq(void)
{
    SystemCoreClockUp2025-07-15();

    switch (CLK->PCLKDIV & CLK_PCLKDIV_APB1DIV_Msk)
    {
        case (CLK_PCLKDIV_APB1DIV_DIV1):
            return SystemCoreClock;

        case (CLK_PCLKDIV_APB1DIV_DIV2):
            return SystemCoreClock >> 1;

        case (CLK_PCLKDIV_APB1DIV_DIV4):
            return SystemCoreClock >> 2;

        case (CLK_PCLKDIV_APB1DIV_DIV8):
            return SystemCoreClock >> 3;

        case (CLK_PCLKDIV_APB1DIV_DIV16):
            return SystemCoreClock >> 4;

        case (CLK_PCLKDIV_APB1DIV_DIV32):
            return SystemCoreClock >> 5;

        default:
            return 0UL;
    }
}

/**
  * @brief      Get HCLK frequency
  * @return     HCLK frequency
  * @details    This function get HCLK frequency. The frequency unit is Hz.
  */
uint32_t CLK_GetHCLKFreq(void)
{
    SystemCoreClockUp2025-07-15();
    return SystemCoreClock;
}

/**
  * @brief      Get CPU frequency
  * @return     CPU frequency
  * @details    This function get CPU frequency. The frequency unit is Hz.
  */
uint32_t CLK_GetCPUFreq(void)
{
    SystemCoreClockUp2025-07-15();
    return SystemCoreClock;
}

/**
  * @brief      Set HCLK clock source and HCLK clock divider
  * @param[in]  u32ClkSrc is HCLK clock source. Including :
  *             - \ref CLK_CLKSEL0_HCLKSEL_HXT
  *             - \ref CLK_CLKSEL0_HCLKSEL_LXT
  *             - \ref CLK_CLKSEL0_HCLKSEL_LIRC
  *             - \ref CLK_CLKSEL0_HCLKSEL_MIRC
  *             - \ref CLK_CLKSEL0_HCLKSEL_HIRC
  * @param[in]  u32ClkDiv is HCLK clock divider. Including :
  *             - \ref CLK_CLKDIV0_HCLK(x)
  * @details    This function set HCLK clock source and HCLK clock divider.
  *             The register write-protection function should be disabled before using this function.
  * @note       Must be care of flash access cycle control when using this function
  */
void CLK_SetHCLK(uint32_t u32ClkSrc, uint32_t u32ClkDiv)
{
    uint32_t u32HircStable;

    /* Read HIRC clock source stable flag */
    u32HircStable = CLK->STATUS & CLK_STATUS_HIRCSTB_Msk;

    /* Switch to HIRC for Safe. Avoid HCLK too high when applying new divider. */
    CLK->PWRCTL |= CLK_PWRCTL_HIRCEN_Msk;
    CLK_WaitClockReady(CLK_STATUS_HIRCSTB_Msk);
    CLK->CLKSEL0 = (CLK->CLKSEL0 & (~CLK_CLKSEL0_HCLKSEL_Msk)) | CLK_CLKSEL0_HCLKSEL_HIRC;

    /* Apply new Divider */
    CLK->CLKDIV0 = (CLK->CLKDIV0 & (~CLK_CLKDIV0_HCLKDIV_Msk)) | u32ClkDiv;

    /* Switch HCLK to new HCLK source */
    CLK->CLKSEL0 = (CLK->CLKSEL0 & (~CLK_CLKSEL0_HCLKSEL_Msk)) | u32ClkSrc;

    /* Up2025-07-15 System Core Clock */
    SystemCoreClockUp2025-07-15();

    /* Disable HIRC if HIRC is disabled before switching HCLK source */
    if (u32HircStable == 0UL)
        CLK->PWRCTL &= ~CLK_PWRCTL_HIRCEN_Msk;
}

/**
  * @brief      This function set selected module clock source and module clock divider
  * @param[in]  u32ModuleIdx is module index.
  * @param[in]  u32ClkSrc is module clock source.
  * @param[in]  u32ClkDiv is module clock divider.
  * @details    Valid parameter combinations listed in following table:
  *
  * |Module index        |Clock source                          |Divider                  |
  * | :----------------  | :----------------------------------- | :---------------------- |
  * |\ref CANFD0_MODULE  |\ref CLK_CLKSEL0_CANFD0SEL_HCLK       | CLK_CLKDIV4_CANFD0(x)   |
  * |\ref CANFD0_MODULE  |\ref CLK_CLKSEL0_CANFD0SEL_HXT        | CLK_CLKDIV4_CANFD0(x)   |
  * |\ref WDT_MODULE     |\ref CLK_CLKSEL1_WDTSEL_LXT           | x                       |
  * |\ref WDT_MODULE     |\ref CLK_CLKSEL1_WDTSEL_HCLK_DIV2048  | x                       |
  * |\ref WDT_MODULE     |\ref CLK_CLKSEL1_WDTSEL_LIRC          | x                       |
  * |\ref WWDT_MODULE    |\ref CLK_CLKSEL1_WWDTSEL_HCLK_DIV2048 | x                       |
  * |\ref WWDT_MODULE    |\ref CLK_CLKSEL1_WWDTSEL_LIRC         | x                       |
  * |\ref CLKO_MODULE    |\ref CLK_CLKSEL1_CLKOSEL_HXT          | x                       |
  * |\ref CLKO_MODULE    |\ref CLK_CLKSEL1_CLKOSEL_LXT          | x                       |
  * |\ref CLKO_MODULE    |\ref CLK_CLKSEL1_CLKOSEL_HCLK         | x                       |
  * |\ref CLKO_MODULE    |\ref CLK_CLKSEL1_CLKOSEL_HIRC         | x                       |
  * |\ref CLKO_MODULE    |\ref CLK_CLKSEL1_CLKOSEL_LIRC         | x                       |
  * |\ref CLKO_MODULE    |\ref CLK_CLKSEL1_CLKOSEL_MIRC         | x                       |
  * |\ref CLKO_MODULE    |\ref CLK_CLKSEL1_CLKOSEL_SOF          | x                       |
  * |\ref TMR0_MODULE    |\ref CLK_CLKSEL1_TMR0SEL_HXT          | x                       |
  * |\ref TMR0_MODULE    |\ref CLK_CLKSEL1_TMR0SEL_LXT          | x                       |
  * |\ref TMR0_MODULE    |\ref CLK_CLKSEL1_TMR0SEL_PCLK0        | x                       |
  * |\ref TMR0_MODULE    |\ref CLK_CLKSEL1_TMR0SEL_EXT_TRG      | x                       |
  * |\ref TMR0_MODULE    |\ref CLK_CLKSEL1_TMR0SEL_LIRC         | x                       |
  * |\ref TMR0_MODULE    |\ref CLK_CLKSEL1_TMR0SEL_HIRC         | x                       |
  * |\ref TMR1_MODULE    |\ref CLK_CLKSEL1_TMR1SEL_HXT          | x                       |
  * |\ref TMR1_MODULE    |\ref CLK_CLKSEL1_TMR1SEL_LXT          | x                       |
  * |\ref TMR1_MODULE    |\ref CLK_CLKSEL1_TMR1SEL_PCLK0        | x                       |
  * |\ref TMR1_MODULE    |\ref CLK_CLKSEL1_TMR1SEL_EXT_TRG      | x                       |
  * |\ref TMR1_MODULE    |\ref CLK_CLKSEL1_TMR1SEL_LIRC         | x                       |
  * |\ref TMR1_MODULE    |\ref CLK_CLKSEL1_TMR1SEL_HIRC         | x                       |
  * |\ref TMR2_MODULE    |\ref CLK_CLKSEL1_TMR2SEL_HXT          | x                       |
  * |\ref TMR2_MODULE    |\ref CLK_CLKSEL1_TMR2SEL_LXT          | x                       |
  * |\ref TMR2_MODULE    |\ref CLK_CLKSEL1_TMR2SEL_PCLK1        | x                       |
  * |\ref TMR2_MODULE    |\ref CLK_CLKSEL1_TMR2SEL_EXT_TRG      | x                       |
  * |\ref TMR2_MODULE    |\ref CLK_CLKSEL1_TMR2SEL_LIRC         | x                       |
  * |\ref TMR2_MODULE    |\ref CLK_CLKSEL1_TMR2SEL_HIRC         | x                       |
  * |\ref TMR3_MODULE    |\ref CLK_CLKSEL1_TMR3SEL_HXT          | x                       |
  * |\ref TMR3_MODULE    |\ref CLK_CLKSEL1_TMR3SEL_LXT          | x                       |
  * |\ref TMR3_MODULE    |\ref CLK_CLKSEL1_TMR3SEL_PCLK1        | x                       |
  * |\ref TMR3_MODULE    |\ref CLK_CLKSEL1_TMR3SEL_EXT_TRG      | x                       |
  * |\ref TMR3_MODULE    |\ref CLK_CLKSEL1_TMR3SEL_LIRC         | x                       |
  * |\ref TMR3_MODULE    |\ref CLK_CLKSEL1_TMR3SEL_HIRC         | x                       |
  * |\ref UART0_MODULE   |\ref CLK_CLKSEL1_UART0SEL_HXT         |\ref CLK_CLKDIV0_UART0(x)|
  * |\ref UART0_MODULE   |\ref CLK_CLKSEL1_UART0SEL_LXT         |\ref CLK_CLKDIV0_UART0(x)|
  * |\ref UART0_MODULE   |\ref CLK_CLKSEL1_UART0SEL_HIRC        |\ref CLK_CLKDIV0_UART0(x)|
  * |\ref UART0_MODULE   |\ref CLK_CLKSEL1_UART0SEL_PCLK0       |\ref CLK_CLKDIV0_UART0(x)|
  * |\ref UART0_MODULE   |\ref CLK_CLKSEL1_UART0SEL_LIRC        |\ref CLK_CLKDIV0_UART0(x)|
  * |\ref UART1_MODULE   |\ref CLK_CLKSEL1_UART1SEL_HXT         |\ref CLK_CLKDIV0_UART1(x)|
  * |\ref UART1_MODULE   |\ref CLK_CLKSEL1_UART1SEL_LXT         |\ref CLK_CLKDIV0_UART1(x)|
  * |\ref UART1_MODULE   |\ref CLK_CLKSEL1_UART1SEL_HIRC        |\ref CLK_CLKDIV0_UART1(x)|
  * |\ref UART1_MODULE   |\ref CLK_CLKSEL1_UART1SEL_PCLK1       |\ref CLK_CLKDIV0_UART1(x)|
  * |\ref UART1_MODULE   |\ref CLK_CLKSEL1_UART1SEL_LIRC        |\ref CLK_CLKDIV0_UART1(x)|
  * |\ref SPI0_MODULE    |\ref CLK_CLKSEL2_SPI0SEL_HXT          | x                       |
  * |\ref SPI0_MODULE    |\ref CLK_CLKSEL2_SPI0SEL_PCLK1        | x                       |
  * |\ref SPI0_MODULE    |\ref CLK_CLKSEL2_SPI0SEL_HIRC         | x                       |
  * |\ref UART4_MODULE   |\ref CLK_CLKSEL3_UART4SEL_HXT         |\ref CLK_CLKDIV4_UART4(x)|
  * |\ref UART4_MODULE   |\ref CLK_CLKSEL3_UART4SEL_LXT         |\ref CLK_CLKDIV4_UART4(x)|
  * |\ref UART4_MODULE   |\ref CLK_CLKSEL3_UART4SEL_HIRC        |\ref CLK_CLKDIV4_UART4(x)|
  * |\ref UART4_MODULE   |\ref CLK_CLKSEL3_UART4SEL_PCLK0       |\ref CLK_CLKDIV4_UART4(x)|
  * |\ref UART4_MODULE   |\ref CLK_CLKSEL3_UART4SEL_LIRC        |\ref CLK_CLKDIV4_UART4(x)|
  * |\ref UART2_MODULE   |\ref CLK_CLKSEL3_UART2SEL_HXT         |\ref CLK_CLKDIV4_UART2(x)|
  * |\ref UART2_MODULE   |\ref CLK_CLKSEL3_UART2SEL_LXT         |\ref CLK_CLKDIV4_UART2(x)|
  * |\ref UART2_MODULE   |\ref CLK_CLKSEL3_UART2SEL_HIRC        |\ref CLK_CLKDIV4_UART2(x)|
  * |\ref UART2_MODULE   |\ref CLK_CLKSEL3_UART2SEL_PCLK0       |\ref CLK_CLKDIV4_UART2(x)|
  * |\ref UART2_MODULE   |\ref CLK_CLKSEL3_UART2SEL_LIRC        |\ref CLK_CLKDIV4_UART2(x)|
  * |\ref UART3_MODULE   |\ref CLK_CLKSEL3_UART3SEL_HXT         |\ref CLK_CLKDIV4_UART3(x)|
  * |\ref UART3_MODULE   |\ref CLK_CLKSEL3_UART3SEL_LXT         |\ref CLK_CLKDIV4_UART3(x)|
  * |\ref UART3_MODULE   |\ref CLK_CLKSEL3_UART3SEL_HIRC        |\ref CLK_CLKDIV4_UART3(x)|
  * |\ref UART3_MODULE   |\ref CLK_CLKSEL3_UART3SEL_PCLK1       |\ref CLK_CLKDIV4_UART3(x)|
  * |\ref UART3_MODULE   |\ref CLK_CLKSEL3_UART3SEL_LIRC        |\ref CLK_CLKDIV4_UART3(x)|
  */
void CLK_SetModuleClock(uint32_t u32ModuleIdx, uint32_t u32ClkSrc, uint32_t u32ClkDiv)
{
    if (MODULE_CLKDIV_Msk(u32ModuleIdx) != MODULE_NoMsk)
    {
        uint32_t u32Div;
        const uint32_t au32DivTbl[] = {0x0UL, 0x4UL, 0xCUL, 0x10UL};

        /* Get clock divider control register address */
        u32Div = (uint32_t)&CLK->CLKDIV0 + (au32DivTbl[MODULE_CLKDIV(u32ModuleIdx)]);
        /* Apply new divider */
        M32(u32Div) = (M32(u32Div) & (~(MODULE_CLKDIV_Msk(u32ModuleIdx) << MODULE_CLKDIV_Pos(u32ModuleIdx)))) | u32ClkDiv;
    }

    if (MODULE_CLKSEL_Msk(u32ModuleIdx) != MODULE_NoMsk)
    {
        uint32_t u32Sel;
        const uint32_t au32SelTbl[] = {0x0UL, 0x4UL, 0x8UL, 0xCUL};

        /* Get clock select control register address */
        u32Sel = (uint32_t)&CLK->CLKSEL0 + (au32SelTbl[MODULE_CLKSEL(u32ModuleIdx)]);
        /* Set new clock selection setting */
        M32(u32Sel) = (M32(u32Sel) & (~(MODULE_CLKSEL_Msk(u32ModuleIdx) << MODULE_CLKSEL_Pos(u32ModuleIdx)))) | u32ClkSrc;
    }
}

/**
  * @brief      Set SysTick clock source
  * @param[in]  u32ClkSrc is module clock source. Including:
  *             - \ref CLK_CLKSEL0_STCLKSEL_HXT
  *             - \ref CLK_CLKSEL0_STCLKSEL_LXT
  *             - \ref CLK_CLKSEL0_STCLKSEL_HXT_DIV2
  *             - \ref CLK_CLKSEL0_STCLKSEL_HCLK_DIV2
  *             - \ref CLK_CLKSEL0_STCLKSEL_HIRC_DIV2
  * @details    This function set SysTick clock source. \n
  *             The register write-protection function should be disabled before using this function.
  */
void CLK_SetSysTickClockSrc(uint32_t u32ClkSrc)
{
    CLK->CLKSEL0 = (CLK->CLKSEL0 & ~CLK_CLKSEL0_STCLKSEL_Msk) | u32ClkSrc;
}

/**
  * @brief      Enable clock source
  * @param[in]  u32ClkMask is clock source mask. Including :
  *             - \ref CLK_PWRCTL_HXTEN_Msk
  *             - \ref CLK_PWRCTL_LXTEN_Msk
  *             - \ref CLK_PWRCTL_HIRCEN_Msk
  *             - \ref CLK_PWRCTL_LIRCEN_Msk
  *             - \ref CLK_PWRCTL_MIRCEN_Msk
  * @details    This function enable clock source. \n
  *             The register write-protection function should be disabled before using this function.
  *             Notice that HXT and LXT are using common pin,
  *             that is the two clock(HXT, LXT) sources are mutual exclusive.
  *             So parameters, CLK_PWRCTL_HXTEN and CLK_PWRCTL_LXTEN, can not be applied at the same time.
  *             In other word, user should make sure that LXT is disabled if user want to enable HXT.
  *             user should disable HXT if user want to enable LXT.
  */
void CLK_EnableXtalRC(uint32_t u32ClkMask)
{
    CLK->PWRCTL |= u32ClkMask;
}

/**
  * @brief      Disable clock source
  * @param[in]  u32ClkMask is clock source mask. Including :
  *             - \ref CLK_PWRCTL_HXTEN_Msk
  *             - \ref CLK_PWRCTL_LXTEN_Msk
  *             - \ref CLK_PWRCTL_HIRCEN_Msk
  *             - \ref CLK_PWRCTL_LIRCEN_Msk
  *             - \ref CLK_PWRCTL_MIRCEN_Msk
  * @details    This function disable clock source. \n
  *             The register write-protection function should be disabled before using this function.
  */
void CLK_DisableXtalRC(uint32_t u32ClkMask)
{
    CLK->PWRCTL &= ~u32ClkMask;
}

/**
  * @brief      This function enable module clock
  * @param[in]  u32ModuleIdx is module index. Including :
  *             - \ref PDMA_MODULE
  *             - \ref ISP_MODULE
  *             - \ref EXST_MODULE
  *             - \ref CRC_MODULE
  *             - \ref FMCIDLE_MODULE
  *             - \ref CANFD0_MODULE
  *             - \ref GPA_MODULE
  *             - \ref GPB_MODULE
  *             - \ref GPC_MODULE
  *             - \ref GPF_MODULE
  *             - \ref WDT_MODULE
  *             - \ref WWDT_MODULE
  *             - \ref RTC_MODULE
  *             - \ref TMR0_MODULE
  *             - \ref TMR1_MODULE
  *             - \ref TMR2_MODULE
  *             - \ref TMR3_MODULE
  *             - \ref CLKO_MODULE
  *             - \ref I2C0_MODULE
  *             - \ref I2C1_MODULE
  *             - \ref SPI0_MODULE
  *             - \ref UART0_MODULE
  *             - \ref UART1_MODULE
  *             - \ref UART2_MODULE
  *             - \ref UART3_MODULE
  *             - \ref UART4_MODULE
  *             - \ref USBD_MODULE
  *             - \ref EADC_MODULE
  *             - \ref USCI0_MODULE
  *             - \ref BPWM0_MODULE
  * @details    This function enable module clock.
  */
void CLK_EnableModuleClock(uint32_t u32ModuleIdx)
{
    const uint32_t au32ClkTbl[3] = {0x0UL, 0x4UL, 0x8UL};

    *(volatile uint32_t *)((uint32_t)&CLK->AHBCLK + (au32ClkTbl[MODULE_APBCLK(u32ModuleIdx)]))  |= 1 << MODULE_IP_EN_Pos(u32ModuleIdx);
}

/**
  * @brief      This function disable module clock
  * @param[in]  u32ModuleIdx is module index
  *             - \ref PDMA_MODULE
  *             - \ref ISP_MODULE
  *             - \ref EXST_MODULE
  *             - \ref CRC_MODULE
  *             - \ref FMCIDLE_MODULE
  *             - \ref CANFD0_MODULE
  *             - \ref GPA_MODULE
  *             - \ref GPB_MODULE
  *             - \ref GPC_MODULE
  *             - \ref GPF_MODULE
  *             - \ref WDT_MODULE
  *             - \ref WWDT_MODULE
  *             - \ref RTC_MODULE
  *             - \ref TMR0_MODULE
  *             - \ref TMR1_MODULE
  *             - \ref TMR2_MODULE
  *             - \ref TMR3_MODULE
  *             - \ref CLKO_MODULE
  *             - \ref I2C0_MODULE
  *             - \ref I2C1_MODULE
  *             - \ref SPI0_MODULE
  *             - \ref UART0_MODULE
  *             - \ref UART1_MODULE
  *             - \ref UART2_MODULE
  *             - \ref UART3_MODULE
  *             - \ref UART4_MODULE
  *             - \ref USBD_MODULE
  *             - \ref EADC_MODULE
  *             - \ref USCI0_MODULE
  *             - \ref BPWM0_MODULE
  * @details    This function disable module clock.
  */
void CLK_DisableModuleClock(uint32_t u32ModuleIdx)
{
    const uint32_t au32ClkTbl[3] = {0x0UL, 0x4UL, 0x8UL};

    *(volatile uint32_t *)((uint32_t)&CLK->AHBCLK + (au32ClkTbl[MODULE_APBCLK(u32ModuleIdx)]))  &= ~(1 << MODULE_IP_EN_Pos(u32ModuleIdx));
}

/**
  * @brief      This function check selected clock source status
  * @param[in]  u32ClkMask is selected clock source. Including :
  *             - \ref CLK_STATUS_HXTSTB_Msk
  *             - \ref CLK_STATUS_LXTSTB_Msk
  *             - \ref CLK_STATUS_HIRCSTB_Msk
  *             - \ref CLK_STATUS_LIRCSTB_Msk
  *             - \ref CLK_STATUS_MIRCSTB_Msk
  * @retval     0  clock is not stable
  * @retval     1  clock is stable
  * @details    To wait for clock ready by specified clock source stable flag or timeout (~1000ms)
  * @note       This function sets g_CLK_i32ErrCode to CLK_TIMEOUT_ERR if clock source status is not stable
  */
uint32_t CLK_WaitClockReady(uint32_t u32ClkMask)
{
    uint32_t u32TimeOutCnt = SystemCoreClock;
    uint32_t u32Ret = 1U;

    g_CLK_i32ErrCode = 0;

    while ((CLK->STATUS & u32ClkMask) != u32ClkMask)
    {
        if (--u32TimeOutCnt == 0)
        {
            u32Ret = 0U;
            break;
        }
    }

    if (u32TimeOutCnt == 0)
        g_CLK_i32ErrCode = CLK_TIMEOUT_ERR;

    return u32Ret;
}

/**
  * @brief      Enable System Tick counter
  * @param[in]  u32ClkSrc is System Tick clock source. Including:
  *             - \ref CLK_CLKSEL0_STCLKSEL_HXT
  *             - \ref CLK_CLKSEL0_STCLKSEL_LXT
  *             - \ref CLK_CLKSEL0_STCLKSEL_HXT_DIV2
  *             - \ref CLK_CLKSEL0_STCLKSEL_HCLK_DIV2
  *             - \ref CLK_CLKSEL0_STCLKSEL_HIRC_DIV2
  *             - \ref CLK_CLKSEL0_STCLKSEL_HCLK
  * @param[in]  u32Count is System Tick reload value. It could be 0~0xFFFFFF.
  * @details    This function set System Tick clock source, reload value, enable System Tick counter and interrupt.
  *             The register write-protection function should be disabled before using this function.
  */
void CLK_EnableSysTick(uint32_t u32ClkSrc, uint32_t u32Count)
{
    /* Set System Tick counter disabled */
    SysTick->CTRL = 0UL;

    /* Set System Tick clock source */
    if (u32ClkSrc == CLK_CLKSEL0_STCLKSEL_HCLK)
    {
        /* Disable System Tick clock source from external reference clock */
        CLK->AHBCLK &= ~CLK_AHBCLK_EXSTCKEN_Msk;

        /* Select System Tick clock source from core */
        SysTick->CTRL |= SysTick_CTRL_CLKSOURCE_Msk;
    }
    else
    {
        /* Enable System Tick clock source from external reference clock */
        CLK->AHBCLK |= CLK_AHBCLK_EXSTCKEN_Msk;

        /* Select System Tick external reference clock source */
        CLK->CLKSEL0 = (CLK->CLKSEL0 & ~CLK_CLKSEL0_STCLKSEL_Msk) | u32ClkSrc;

        /* Select System Tick clock source from external reference clock */
        SysTick->CTRL &= ~SysTick_CTRL_CLKSOURCE_Msk;
    }

    /* Set System Tick reload value */
    SysTick->LOAD = u32Count;

    /* Clear System Tick current value and counter flag */
    SysTick->VAL = 0UL;

    /* Set System Tick interrupt enabled and counter enabled */
    SysTick->CTRL |= SysTick_CTRL_TICKINT_Msk | SysTick_CTRL_ENABLE_Msk;
}

/**
  * @brief      Disable System Tick counter
  * @details    This function disable System Tick counter.
  */
void CLK_DisableSysTick(void)
{
    /* Set System Tick counter disabled */
    SysTick->CTRL = 0UL;
}

/**
  * @brief      Power-down mode selected
  * @param[in]  u32PDMode is power down mode index. Including :
  *             - \ref CLK_PMUCTL_PDMSEL_PD
  *             - \ref CLK_PMUCTL_PDMSEL_FWPD
  * @details    This function is used to set power-down mode.
  */
void CLK_SetPowerDownMode(uint32_t u32PDMode)
{
    CLK->PMUCTL = (CLK->PMUCTL & ~(CLK_PMUCTL_PDMSEL_Msk)) | u32PDMode;
}

/**
  * @brief      Get selected module clock source
  * @param[in]  u32ModuleIdx is module index
  *             - \ref CANFD0_MODULE
  *             - \ref WDT_MODULE
  *             - \ref WWDT_MODULE
  *             - \ref CLKO_MODULE
  *             - \ref TMR0_MODULE
  *             - \ref TMR1_MODULE
  *             - \ref TMR2_MODULE
  *             - \ref TMR3_MODULE
  *             - \ref UART0_MODULE
  *             - \ref UART1_MODULE
  *             - \ref SPI0_MODULE
  *             - \ref UART4_MODULE
  *             - \ref UART2_MODULE
  *             - \ref UART3_MODULE
  * @return     Selected module clock source setting
  * @details    This function get selected module clock source.
  */
uint32_t CLK_GetModuleClockSource(uint32_t u32ModuleIdx)
{
    uint32_t u32TmpVal = 0UL;

    /* Get clock source selection setting */
    if (MODULE_CLKSEL_Msk(u32ModuleIdx) != MODULE_NoMsk)
    {
        uint32_t u32TmpAddr;
        const uint32_t au32SelTbl[4] = {0x0UL, 0x4UL, 0x8UL, 0xCUL};

        /* Get clock select control register address */
        u32TmpAddr = (uint32_t)&CLK->CLKSEL0 + (au32SelTbl[MODULE_CLKSEL(u32ModuleIdx)]);

        /* Get clock source selection setting */
        u32TmpVal = ((inpw((uint32_t *)u32TmpAddr) & (MODULE_CLKSEL_Msk(u32ModuleIdx) << MODULE_CLKSEL_Pos(u32ModuleIdx))) >> MODULE_CLKSEL_Pos(u32ModuleIdx));
    }

    return u32TmpVal;
}

/**
  * @brief      Get selected module clock divider number
  * @param[in]  u32ModuleIdx is module index.
  *             - \ref UART0_MODULE
  *             - \ref UART1_MODULE
  *             - \ref EADC_MODULE
  *             - \ref UART2_MODULE
  *             - \ref UART3_MODULE
  *             - \ref UART4_MODULE
  *             - \ref CANFD0_MODULE
  * @return     Selected module clock divider number setting
  * @details    This function get selected module clock divider number.
  */
uint32_t CLK_GetModuleClockDivider(uint32_t u32ModuleIdx)
{
    uint32_t u32TmpVal = 0UL;

    if (MODULE_CLKDIV_Msk(u32ModuleIdx) != MODULE_NoMsk)
    {
        uint32_t u32TmpAddr;
        const uint32_t au32DivTbl[4] = {0x0UL, 0x4UL, 0x8UL, 0x10UL};

        /* Get clock divider control register address */
        u32TmpAddr = (uint32_t)&CLK->CLKDIV0 + (au32DivTbl[MODULE_CLKDIV(u32ModuleIdx)]);
        /* Get clock divider number setting */
        u32TmpVal = ((inpw((uint32_t *)u32TmpAddr) & (MODULE_CLKDIV_Msk(u32ModuleIdx) << MODULE_CLKDIV_Pos(u32ModuleIdx))) >> MODULE_CLKDIV_Pos(u32ModuleIdx));
    }

    return u32TmpVal;
}

/**
  * @brief      This function execute delay function.
  * @param[in]  u32USec  Delay time. The Max value is 2^24 / CPU Clock(MHz). Ex:
  *                             50MHz => 335544us, 48MHz => 349525us, 28MHz => 699050us ...
  * @details    Use the SysTick to generate the delay time and the UNIT is in us.
  *             The SysTick clock source is from HCLK, i.e the same as system core clock.
  *             User can use SystemCoreClockUp2025-07-15() to calculate CyclesPerUs automatically before using this function.
  */
void CLK_SysTickDelay(uint32_t u32USec)
{
    uint32_t u32TargetValue, u32TargetInt, u32TargetRem, u32DelayCycles;

    /* Systick function is using and clock source is core clock */
    if ((SysTick->CTRL & (SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk)) == (SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk))
    {
        u32DelayCycles = u32USec * CyclesPerUs;

        if (u32DelayCycles > SysTick->LOAD)
        {
            /* Calculate re-load cycles with current SysTick->LOAD */
            u32TargetInt = u32DelayCycles / SysTick->LOAD;

            /* Calculate remainder delay cycles */
            u32TargetRem = u32DelayCycles % SysTick->LOAD;
        }
        else
        {
            u32TargetInt = 0;
            u32TargetRem = u32DelayCycles;
        }

        if (u32TargetRem > SysTick->VAL)
        {
            u32TargetValue = SysTick->LOAD;
            u32TargetValue = u32TargetValue - (u32TargetRem - SysTick->VAL);
            u32TargetInt++;
        }
        else
        {
            u32TargetValue = SysTick->VAL - u32TargetRem;
        }

        while (u32TargetInt > 0)
        {
            /* Waiting for down-count to zero */
            while ((SysTick->CTRL & SysTick_CTRL_COUNTFLAG_Msk) == 0UL)
            {
            }

            u32TargetInt--;
        }

        /* Waiting for down-count to target */
        while (SysTick->VAL > u32TargetValue)
        {
        }
    }
    else
    {
        SysTick->LOAD = u32USec * CyclesPerUs;
        SysTick->VAL  = 0x0UL;
        SysTick->CTRL = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk;

        /* Waiting for down-count to zero */
        while ((SysTick->CTRL & SysTick_CTRL_COUNTFLAG_Msk) == 0UL)
        {
        }

        /* Disable SysTick counter */
        SysTick->CTRL = 0UL;
    }
}

/**
  * @brief      This function execute long delay function.
  * @param[in]  u32USec  Delay time.
  * @details    Use the SysTick to generate the long delay time and the UNIT is in us.
  *             The SysTick clock source is from HCLK, i.e the same as system core clock.
  *             User can use SystemCoreClockUp2025-07-15() to calculate CyclesPerUs automatically before using this function.
  */
void CLK_SysTickLongDelay(uint32_t u32USec)
{
    uint32_t u32Delay;

    /* It should <= 349525us for each delay loop */
    u32Delay = 349525UL;

    do
    {
        if (u32USec > u32Delay)
        {
            u32USec -= u32Delay;
        }
        else
        {
            u32Delay = u32USec;
            u32USec = 0UL;
        }

        SysTick->LOAD = u32Delay * CyclesPerUs;
        SysTick->VAL  = (0x0UL);
        SysTick->CTRL = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk;

        /* Waiting for down-count to zero */
        while ((SysTick->CTRL & SysTick_CTRL_COUNTFLAG_Msk) == 0UL)
        {
        }

        /* Disable SysTick counter */
        SysTick->CTRL = 0UL;

    } while (u32USec > 0UL);

}

/** @} end of group CLK_EXPORTED_FUNCTIONS */

/** @} end of group CLK_Driver */

/** @} end of group Standard_Driver */
