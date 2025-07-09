/****************************************************************************
 * @file     clk.h
 * @version  V1.10
 * @brief    M253 series CLK driver source file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

#ifndef __CLK_H__
#define __CLK_H__

#ifdef __cplusplus
extern "C"
{
#endif

/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup CLK_Driver CLK Driver
  @{
*/

/** @addtogroup CLK_EXPORTED_CONSTANTS CLK Exported Constants
  @{
*/

#define FREQ_4MHZ          4000000UL
#define FREQ_8MHZ          8000000UL
#define FREQ_16MHZ         16000000UL
#define FREQ_25MHZ         25000000UL
#define FREQ_32MHZ         32000000UL
#define FREQ_48MHZ         48000000UL
#define FREQ_50MHZ         50000000UL
#define FREQ_64MHZ         64000000UL
#define FREQ_72MHZ         72000000UL
#define FREQ_96MHZ         96000000UL
#define FREQ_100MHZ        100000000UL

/*---------------------------------------------------------------------------------------------------------*/
/*  CLKSEL0 constant definitions.  (Write-protection)                                                      */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKSEL0_HCLKSEL_HXT           (0x00UL<<CLK_CLKSEL0_HCLKSEL_Pos)     /*!< Setting HCLK clock source as HXT */
#define CLK_CLKSEL0_HCLKSEL_LXT           (0x01UL<<CLK_CLKSEL0_HCLKSEL_Pos)     /*!< Setting HCLK clock source as LXT */
#define CLK_CLKSEL0_HCLKSEL_LIRC          (0x03UL<<CLK_CLKSEL0_HCLKSEL_Pos)     /*!< Setting HCLK clock source as LIRC */
#define CLK_CLKSEL0_HCLKSEL_MIRC          (0x05UL<<CLK_CLKSEL0_HCLKSEL_Pos)     /*!< Setting HCLK clock source as MIRC */
#define CLK_CLKSEL0_HCLKSEL_HIRC          (0x07UL<<CLK_CLKSEL0_HCLKSEL_Pos)     /*!< Setting HCLK clock source as HIRC */

#define CLK_CLKSEL0_STCLKSEL_HXT          (0x00UL<<CLK_CLKSEL0_STCLKSEL_Pos)    /*!< Setting SysTick clock source as HXT */
#define CLK_CLKSEL0_STCLKSEL_LXT          (0x01UL<<CLK_CLKSEL0_STCLKSEL_Pos)    /*!< Setting SysTick clock source as LXT */
#define CLK_CLKSEL0_STCLKSEL_HXT_DIV2     (0x02UL<<CLK_CLKSEL0_STCLKSEL_Pos)    /*!< Setting SysTick clock source as HXT/2 */
#define CLK_CLKSEL0_STCLKSEL_HCLK_DIV2    (0x03UL<<CLK_CLKSEL0_STCLKSEL_Pos)    /*!< Setting SysTick clock source as HCLK/2 */
#define CLK_CLKSEL0_STCLKSEL_HIRC_DIV2    (0x07UL<<CLK_CLKSEL0_STCLKSEL_Pos)    /*!< Setting SysTick clock source as HIRC/2 */

#define SysTick_CTRL_STCLKSEL_HCLK        (0x01UL<<SysTick_CTRL_CLKSOURCE_Pos)  /*!< Setting SysTick clock source as HCLK */
#define CLK_CLKSEL0_STCLKSEL_HCLK         SysTick_CTRL_STCLKSEL_HCLK            /*!< Setting SysTick clock source as HCLK (Backward compatible) */

#define CLK_CLKSEL0_CANFD0SEL_HCLK        (0x00UL<<CLK_CLKSEL0_CANFD0SEL_Pos)   /*!< Setting CANFD0 clock source as HCLK */
#define CLK_CLKSEL0_CANFD0SEL_HXT         (0x01UL<<CLK_CLKSEL0_CANFD0SEL_Pos)   /*!< Setting CANFD0 clock source as HXT */

/*---------------------------------------------------------------------------------------------------------*/
/*  CLKSEL1 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKSEL1_WDTSEL_LXT           (0x1UL<<CLK_CLKSEL1_WDTSEL_Pos)        /*!< Setting WDT clock source as LXT */
#define CLK_CLKSEL1_WDTSEL_HCLK_DIV2048  (0x2UL<<CLK_CLKSEL1_WDTSEL_Pos)        /*!< Setting WDT clock source as HCLK/2048 */
#define CLK_CLKSEL1_WDTSEL_LIRC          (0x3UL<<CLK_CLKSEL1_WDTSEL_Pos)        /*!< Setting WDT clock source as LIRC */

#define CLK_CLKSEL1_WWDTSEL_HCLK_DIV2048 (0x2UL<<CLK_CLKSEL1_WWDTSEL_Pos)       /*!< Setting WDT clock source as HCLK/2048 */
#define CLK_CLKSEL1_WWDTSEL_LIRC         (0x3UL<<CLK_CLKSEL1_WWDTSEL_Pos)       /*!< Setting WDT clock source as LIRC */

#define CLK_CLKSEL1_CLKOSEL_HXT          (0x0UL<<CLK_CLKSEL1_CLKOSEL_Pos)       /*!< Setting CLKO clock source as HXT */
#define CLK_CLKSEL1_CLKOSEL_LXT          (0x1UL<<CLK_CLKSEL1_CLKOSEL_Pos)       /*!< Setting CLKO clock source as LXT */
#define CLK_CLKSEL1_CLKOSEL_HCLK         (0x2UL<<CLK_CLKSEL1_CLKOSEL_Pos)       /*!< Setting CLKO clock source as HCLK */
#define CLK_CLKSEL1_CLKOSEL_HIRC         (0x3UL<<CLK_CLKSEL1_CLKOSEL_Pos)       /*!< Setting CLKO clock source as HIRC */
#define CLK_CLKSEL1_CLKOSEL_LIRC         (0x4UL<<CLK_CLKSEL1_CLKOSEL_Pos)       /*!< Setting CLKO clock source as LIRC */
#define CLK_CLKSEL1_CLKOSEL_MIRC         (0x5UL<<CLK_CLKSEL1_CLKOSEL_Pos)       /*!< Setting CLKO clock source as MIRC */
#define CLK_CLKSEL1_CLKOSEL_SOF          (0x7UL<<CLK_CLKSEL1_CLKOSEL_Pos)       /*!< Setting CLKO clock source as USB SOF 1kHz */

#define CLK_CLKSEL1_TMR0SEL_HXT          (0x0UL<<CLK_CLKSEL1_TMR0SEL_Pos)       /*!< Setting Timer 0 clock source as HXT */
#define CLK_CLKSEL1_TMR0SEL_LXT          (0x1UL<<CLK_CLKSEL1_TMR0SEL_Pos)       /*!< Setting Timer 0 clock source as LXT */
#define CLK_CLKSEL1_TMR0SEL_PCLK0        (0x2UL<<CLK_CLKSEL1_TMR0SEL_Pos)       /*!< Setting Timer 0 clock source as PCLK0 */
#define CLK_CLKSEL1_TMR0SEL_EXT_TRG      (0x3UL<<CLK_CLKSEL1_TMR0SEL_Pos)       /*!< Setting Timer 0 clock source as external trigger */
#define CLK_CLKSEL1_TMR0SEL_LIRC         (0x5UL<<CLK_CLKSEL1_TMR0SEL_Pos)       /*!< Setting Timer 0 clock source as LIRC */
#define CLK_CLKSEL1_TMR0SEL_HIRC         (0x7UL<<CLK_CLKSEL1_TMR0SEL_Pos)       /*!< Setting Timer 0 clock source as HIRC */

#define CLK_CLKSEL1_TMR1SEL_HXT          (0x0UL<<CLK_CLKSEL1_TMR1SEL_Pos)       /*!< Setting Timer 0 clock source as HXT */
#define CLK_CLKSEL1_TMR1SEL_LXT          (0x1UL<<CLK_CLKSEL1_TMR1SEL_Pos)       /*!< Setting Timer 0 clock source as LXT */
#define CLK_CLKSEL1_TMR1SEL_PCLK0        (0x2UL<<CLK_CLKSEL1_TMR1SEL_Pos)       /*!< Setting Timer 0 clock source as PCLK0 */
#define CLK_CLKSEL1_TMR1SEL_EXT_TRG      (0x3UL<<CLK_CLKSEL1_TMR1SEL_Pos)       /*!< Setting Timer 0 clock source as external trigger */
#define CLK_CLKSEL1_TMR1SEL_LIRC         (0x5UL<<CLK_CLKSEL1_TMR1SEL_Pos)       /*!< Setting Timer 0 clock source as LIRC */
#define CLK_CLKSEL1_TMR1SEL_HIRC         (0x7UL<<CLK_CLKSEL1_TMR1SEL_Pos)       /*!< Setting Timer 0 clock source as HIRC */

#define CLK_CLKSEL1_TMR2SEL_HXT          (0x0UL<<CLK_CLKSEL1_TMR2SEL_Pos)       /*!< Setting Timer 0 clock source as HXT */
#define CLK_CLKSEL1_TMR2SEL_LXT          (0x1UL<<CLK_CLKSEL1_TMR2SEL_Pos)       /*!< Setting Timer 0 clock source as LXT */
#define CLK_CLKSEL1_TMR2SEL_PCLK1        (0x2UL<<CLK_CLKSEL1_TMR2SEL_Pos)       /*!< Setting Timer 0 clock source as PCLK1 */
#define CLK_CLKSEL1_TMR2SEL_EXT_TRG      (0x3UL<<CLK_CLKSEL1_TMR2SEL_Pos)       /*!< Setting Timer 0 clock source as external trigger */
#define CLK_CLKSEL1_TMR2SEL_LIRC         (0x5UL<<CLK_CLKSEL1_TMR2SEL_Pos)       /*!< Setting Timer 0 clock source as LIRC */
#define CLK_CLKSEL1_TMR2SEL_HIRC         (0x7UL<<CLK_CLKSEL1_TMR2SEL_Pos)       /*!< Setting Timer 0 clock source as HIRC */

#define CLK_CLKSEL1_TMR3SEL_HXT          (0x0UL<<CLK_CLKSEL1_TMR3SEL_Pos)       /*!< Setting Timer 0 clock source as HXT */
#define CLK_CLKSEL1_TMR3SEL_LXT          (0x1UL<<CLK_CLKSEL1_TMR3SEL_Pos)       /*!< Setting Timer 0 clock source as LXT */
#define CLK_CLKSEL1_TMR3SEL_PCLK1        (0x2UL<<CLK_CLKSEL1_TMR3SEL_Pos)       /*!< Setting Timer 0 clock source as PCLK1 */
#define CLK_CLKSEL1_TMR3SEL_EXT_TRG      (0x3UL<<CLK_CLKSEL1_TMR3SEL_Pos)       /*!< Setting Timer 0 clock source as external trigger */
#define CLK_CLKSEL1_TMR3SEL_LIRC         (0x5UL<<CLK_CLKSEL1_TMR3SEL_Pos)       /*!< Setting Timer 0 clock source as LIRC */
#define CLK_CLKSEL1_TMR3SEL_HIRC         (0x7UL<<CLK_CLKSEL1_TMR3SEL_Pos)       /*!< Setting Timer 0 clock source as HIRC */

#define CLK_CLKSEL1_UART0SEL_HXT         (0x0UL<<CLK_CLKSEL1_UART0SEL_Pos)      /*!< Setting UART0 clock source as HXT */
#define CLK_CLKSEL1_UART0SEL_LXT         (0x2UL<<CLK_CLKSEL1_UART0SEL_Pos)      /*!< Setting UART0 clock source as LXT */
#define CLK_CLKSEL1_UART0SEL_HIRC        (0x3UL<<CLK_CLKSEL1_UART0SEL_Pos)      /*!< Setting UART0 clock source as HIRC */
#define CLK_CLKSEL1_UART0SEL_PCLK0       (0x4UL<<CLK_CLKSEL1_UART0SEL_Pos)      /*!< Setting UART0 clock source as PCLK0 */
#define CLK_CLKSEL1_UART0SEL_LIRC        (0x5UL<<CLK_CLKSEL1_UART0SEL_Pos)      /*!< Setting UART0 clock source as LIRC */

#define CLK_CLKSEL1_UART1SEL_HXT         (0x0UL<<CLK_CLKSEL1_UART1SEL_Pos)      /*!< Setting UART1 clock source as HXT */
#define CLK_CLKSEL1_UART1SEL_LXT         (0x2UL<<CLK_CLKSEL1_UART1SEL_Pos)      /*!< Setting UART1 clock source as LXT */
#define CLK_CLKSEL1_UART1SEL_HIRC        (0x3UL<<CLK_CLKSEL1_UART1SEL_Pos)      /*!< Setting UART1 clock source as HIRC */
#define CLK_CLKSEL1_UART1SEL_PCLK1       (0x4UL<<CLK_CLKSEL1_UART1SEL_Pos)      /*!< Setting UART1 clock source as PCLK1 */
#define CLK_CLKSEL1_UART1SEL_LIRC        (0x5UL<<CLK_CLKSEL1_UART1SEL_Pos)      /*!< Setting UART1 clock source as LIRC */

/*---------------------------------------------------------------------------------------------------------*/
/*  CLKSEL2 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKSEL2_SPI0SEL_HXT          (0x0UL<<CLK_CLKSEL2_SPI0SEL_Pos)       /*!< Setting SPI0 clock source as HXT */
#define CLK_CLKSEL2_SPI0SEL_PCLK1        (0x2UL<<CLK_CLKSEL2_SPI0SEL_Pos)       /*!< Setting SPI0 clock source as PCLK1 */
#define CLK_CLKSEL2_SPI0SEL_HIRC         (0x3UL<<CLK_CLKSEL2_SPI0SEL_Pos)       /*!< Setting SPI0 clock source as HIRC */

/*---------------------------------------------------------------------------------------------------------*/
/*  CLKSEL3 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKSEL3_UART4SEL_HXT         (0x0UL<<CLK_CLKSEL3_UART4SEL_Pos)      /*!< Setting UART4 clock source as HXT */
#define CLK_CLKSEL3_UART4SEL_LXT         (0x2UL<<CLK_CLKSEL3_UART4SEL_Pos)      /*!< Setting UART4 clock source as LXT */
#define CLK_CLKSEL3_UART4SEL_HIRC        (0x3UL<<CLK_CLKSEL3_UART4SEL_Pos)      /*!< Setting UART4 clock source as HIRC */
#define CLK_CLKSEL3_UART4SEL_PCLK0       (0x4UL<<CLK_CLKSEL3_UART4SEL_Pos)      /*!< Setting UART4 clock source as PCLK0 */
#define CLK_CLKSEL3_UART4SEL_LIRC        (0x5UL<<CLK_CLKSEL3_UART4SEL_Pos)      /*!< Setting UART4 clock source as LIRC */

#define CLK_CLKSEL3_UART2SEL_HXT         (0x0UL<<CLK_CLKSEL3_UART2SEL_Pos)      /*!< Setting UART2 clock source as HXT */
#define CLK_CLKSEL3_UART2SEL_LXT         (0x2UL<<CLK_CLKSEL3_UART2SEL_Pos)      /*!< Setting UART2 clock source as LXT */
#define CLK_CLKSEL3_UART2SEL_HIRC        (0x3UL<<CLK_CLKSEL3_UART2SEL_Pos)      /*!< Setting UART2 clock source as HIRC */
#define CLK_CLKSEL3_UART2SEL_PCLK0       (0x4UL<<CLK_CLKSEL3_UART2SEL_Pos)      /*!< Setting UART2 clock source as PCLK0 */
#define CLK_CLKSEL3_UART2SEL_LIRC        (0x5UL<<CLK_CLKSEL3_UART2SEL_Pos)      /*!< Setting UART2 clock source as LIRC */

#define CLK_CLKSEL3_UART3SEL_HXT         (0x0UL<<CLK_CLKSEL3_UART3SEL_Pos)      /*!< Setting UART3 clock source as HXT */
#define CLK_CLKSEL3_UART3SEL_LXT         (0x2UL<<CLK_CLKSEL3_UART3SEL_Pos)      /*!< Setting UART3 clock source as LXT */
#define CLK_CLKSEL3_UART3SEL_HIRC        (0x3UL<<CLK_CLKSEL3_UART3SEL_Pos)      /*!< Setting UART3 clock source as HIRC */
#define CLK_CLKSEL3_UART3SEL_PCLK1       (0x4UL<<CLK_CLKSEL3_UART3SEL_Pos)      /*!< Setting UART3 clock source as PCLK1 */
#define CLK_CLKSEL3_UART3SEL_LIRC        (0x5UL<<CLK_CLKSEL3_UART3SEL_Pos)      /*!< Setting UART3 clock source as LIRC */

/*---------------------------------------------------------------------------------------------------------*/
/*  CLKDIV0 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKDIV0_HCLK(x)  (((x)-1) << CLK_CLKDIV0_HCLKDIV_Pos)       /*!< CLKDIV Setting for HCLK clock divider. It could be 1~16 */
#define CLK_CLKDIV0_UART0(x) (((x)-1) << CLK_CLKDIV0_UART0DIV_Pos)      /*!< CLKDIV Setting for UART clock divider. It could be 1~16 */
#define CLK_CLKDIV0_UART1(x) (((x)-1) << CLK_CLKDIV0_UART1DIV_Pos)      /*!< CLKDIV Setting for UART clock divider. It could be 1~16 */
#define CLK_CLKDIV0_EADC(x)  (((x)-1) << CLK_CLKDIV0_EADCDIV_Pos)       /*!< CLKDIV Setting for EADC clock divider. It could be 1~256 */

/*---------------------------------------------------------------------------------------------------------*/
/*  CLKDIV4 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKDIV4_UART2(x) (((x)-1) << CLK_CLKDIV4_UART2DIV_Pos)      /*!< CLKDIV Setting for UART clock divider. It could be 1~16 */
#define CLK_CLKDIV4_UART3(x) (((x)-1) << CLK_CLKDIV4_UART3DIV_Pos)      /*!< CLKDIV Setting for UART clock divider. It could be 1~16 */
#define CLK_CLKDIV4_UART4(x) (((x)-1) << CLK_CLKDIV4_UART4DIV_Pos)      /*!< CLKDIV Setting for UART clock divider. It could be 1~16 */
#define CLK_CLKDIV4_CANFD0(x) (((x)-1) << CLK_CLKDIV4_CANFD0DIV_Pos)    /*!< CLKDIV Setting for CANFD0 clock divider. It could be 1~4 */

/*---------------------------------------------------------------------------------------------------------*/
/*  PCLKDIV constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_PCLKDIV_APB0DIV_DIV1       (0x0UL<<CLK_PCLKDIV_APB0DIV_Pos)
#define CLK_PCLKDIV_APB0DIV_DIV2       (0x1UL<<CLK_PCLKDIV_APB0DIV_Pos)
#define CLK_PCLKDIV_APB0DIV_DIV4       (0x2UL<<CLK_PCLKDIV_APB0DIV_Pos)
#define CLK_PCLKDIV_APB0DIV_DIV8       (0x3UL<<CLK_PCLKDIV_APB0DIV_Pos)
#define CLK_PCLKDIV_APB0DIV_DIV16      (0x4UL<<CLK_PCLKDIV_APB0DIV_Pos)
#define CLK_PCLKDIV_APB0DIV_DIV32      (0x5UL<<CLK_PCLKDIV_APB0DIV_Pos)

#define CLK_PCLKDIV_APB1DIV_DIV1       (0x0UL<<CLK_PCLKDIV_APB1DIV_Pos)
#define CLK_PCLKDIV_APB1DIV_DIV2       (0x1UL<<CLK_PCLKDIV_APB1DIV_Pos)
#define CLK_PCLKDIV_APB1DIV_DIV4       (0x2UL<<CLK_PCLKDIV_APB1DIV_Pos)
#define CLK_PCLKDIV_APB1DIV_DIV8       (0x3UL<<CLK_PCLKDIV_APB1DIV_Pos)
#define CLK_PCLKDIV_APB1DIV_DIV16      (0x4UL<<CLK_PCLKDIV_APB1DIV_Pos)
#define CLK_PCLKDIV_APB1DIV_DIV32      (0x5UL<<CLK_PCLKDIV_APB1DIV_Pos)

/*---------------------------------------------------------------------------------------------------------*/
/*  MODULE constant definitions.                                                                           */
/*---------------------------------------------------------------------------------------------------------*/
/* APBCLK(31:30)|CLKSEL(29:28)|CLKSEL_Msk(27:25) |CLKSEL_Pos(24:20)|CLKDIV(19:18)|CLKDIV_Msk(17:10)|CLKDIV_Pos(9:5)|IP_EN_Pos(4:0) */

#define MODULE_APBCLK(x)        (((x) >>30) & 0x3)    /*!< Calculate AHBCLK/APBCLK offset on MODULE index, 0x0:AHBCLK, 0x1:APBCLK0, 0x2:APBCLK1 */
#define MODULE_CLKSEL(x)        (((x) >>28) & 0x3)    /*!< Calculate CLKSEL offset on MODULE index, 0x0:CLKSEL0, 0x1:CLKSEL1, 0x2:CLKSEL2, 0x3:CLKSEL3 */
#define MODULE_CLKSEL_Msk(x)    (((x) >>25) & 0x7)    /*!< Calculate CLKSEL mask offset on MODULE index */
#define MODULE_CLKSEL_Pos(x)    (((x) >>20) & 0x1f)   /*!< Calculate CLKSEL position offset on MODULE index */
#define MODULE_CLKDIV(x)        (((x) >>18) & 0x3)    /*!< Calculate APBCLK CLKDIV on MODULE index, 0x0:CLKDIV, 0x1:CLKDIV1, 0x2:CLKDIV3, 0x3:CLKDIV4 */
#define MODULE_CLKDIV_Msk(x)    (((x) >>10) & 0xff)   /*!< Calculate CLKDIV mask offset on MODULE index */
#define MODULE_CLKDIV_Pos(x)    (((x) >>5 ) & 0x1f)   /*!< Calculate CLKDIV position offset on MODULE index */
#define MODULE_IP_EN_Pos(x)     (((x) >>0 ) & 0x1f)   /*!< Calculate APBCLK offset on MODULE index */
#define MODULE_NoMsk            0x0                   /*!< Not mask on MODULE index */
#define NA                      MODULE_NoMsk          /*!< Not Available */

#define MODULE_APBCLK_ENC(x)        (((x) & 0x03) << 30)   /*!< MODULE index, 0x0:AHBCLK, 0x1:APBCLK0, 0x2:APBCLK1 */
#define MODULE_CLKSEL_ENC(x)        (((x) & 0x03) << 28)   /*!< CLKSEL offset on MODULE index, 0x0:CLKSEL0, 0x1:CLKSEL1, 0x2:CLKSEL2, 0x3:CLKSEL3 */
#define MODULE_CLKSEL_Msk_ENC(x)    (((x) & 0x07) << 25)   /*!< CLKSEL mask offset on MODULE index */
#define MODULE_CLKSEL_Pos_ENC(x)    (((x) & 0x1f) << 20)   /*!< CLKSEL position offset on MODULE index */
#define MODULE_CLKDIV_ENC(x)        (((x) & 0x03) << 18)   /*!< APBCLK CLKDIV on MODULE index, 0x0:CLKDIV0, 0x1:CLKDIV1, 0x2:CLKDIV3, 0x3:CLKDIV4*/
#define MODULE_CLKDIV_Msk_ENC(x)    (((x) & 0xff) << 10)   /*!< CLKDIV mask offset on MODULE index */
#define MODULE_CLKDIV_Pos_ENC(x)    (((x) & 0x1f) <<  5)   /*!< CLKDIV position offset on MODULE index */
#define MODULE_IP_EN_Pos_ENC(x)     (((x) & 0x1f) <<  0)   /*!< AHBCLK/APBCLK offset on MODULE index */


//AHBCLK
#define PDMA_MODULE      (MODULE_APBCLK_ENC( 0)|MODULE_IP_EN_Pos_ENC(CLK_AHBCLK_PDMACKEN_Pos)|\
                          MODULE_CLKSEL_ENC(NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                          MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))    /*!< PDMA Module */

#define ISP_MODULE       (MODULE_APBCLK_ENC( 0)|MODULE_IP_EN_Pos_ENC(CLK_AHBCLK_ISPCKEN_Pos)|\
                          MODULE_CLKSEL_ENC(NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                          MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))    /*!< ISP Module */

#define EXST_MODULE      (MODULE_APBCLK_ENC( 0)|MODULE_IP_EN_Pos_ENC(CLK_AHBCLK_EXSTCKEN_Pos)|\
                          MODULE_CLKSEL_ENC(NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                          MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))    /*!< EXST Module */

#define CRC_MODULE       (MODULE_APBCLK_ENC( 0)|MODULE_IP_EN_Pos_ENC(CLK_AHBCLK_CRCCKEN_Pos)|\
                          MODULE_CLKSEL_ENC(NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                          MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))    /*!< CRC Module */

#define FMCIDLE_MODULE   (MODULE_APBCLK_ENC( 0)|MODULE_IP_EN_Pos_ENC(CLK_AHBCLK_FMCIDLE_Pos)|\
                          MODULE_CLKSEL_ENC(NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                          MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))    /*!< FMCIDLE Module */

#define CANFD0_MODULE    (MODULE_APBCLK_ENC( 0)|MODULE_IP_EN_Pos_ENC(CLK_AHBCLK_CANFD0CKEN_Pos)|\
                          MODULE_CLKSEL_ENC( 0)|MODULE_CLKSEL_Msk_ENC( 1)|MODULE_CLKSEL_Pos_ENC(24)|\
                          MODULE_CLKDIV_ENC( 3)|MODULE_CLKDIV_Msk_ENC( 3)|MODULE_CLKDIV_Pos_ENC(16))    /*!< CANFD0 Module */

#define GPA_MODULE       (MODULE_APBCLK_ENC( 0)|MODULE_IP_EN_Pos_ENC(CLK_AHBCLK_GPACKEN_Pos)|\
                          MODULE_CLKSEL_ENC(NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                          MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))    /*!< GPA Module */

#define GPB_MODULE       (MODULE_APBCLK_ENC( 0)|MODULE_IP_EN_Pos_ENC(CLK_AHBCLK_GPBCKEN_Pos)|\
                          MODULE_CLKSEL_ENC(NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                          MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))    /*!< GPB Module */

#define GPC_MODULE       (MODULE_APBCLK_ENC( 0)|MODULE_IP_EN_Pos_ENC(CLK_AHBCLK_GPCCKEN_Pos)|\
                          MODULE_CLKSEL_ENC(NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                          MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))    /*!< GPC Module */

#define GPD_MODULE       (MODULE_APBCLK_ENC( 0)|MODULE_IP_EN_Pos_ENC(CLK_AHBCLK_GPDCKEN_Pos)|\
                          MODULE_CLKSEL_ENC(NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                          MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))    /*!< GPD Module */

#define GPE_MODULE       (MODULE_APBCLK_ENC( 0)|MODULE_IP_EN_Pos_ENC(CLK_AHBCLK_GPECKEN_Pos)|\
                          MODULE_CLKSEL_ENC(NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                          MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))    /*!< GPE Module */

#define GPF_MODULE       (MODULE_APBCLK_ENC( 0)|MODULE_IP_EN_Pos_ENC(CLK_AHBCLK_GPFCKEN_Pos)|\
                          MODULE_CLKSEL_ENC(NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                          MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))    /*!< GPF Module */

//APBCLK0
#define WDT_MODULE     (MODULE_APBCLK_ENC( 1)|MODULE_IP_EN_Pos_ENC(CLK_APBCLK0_WDTCKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 1)|MODULE_CLKSEL_Msk_ENC( 3)|MODULE_CLKSEL_Pos_ENC( 0)|\
                        MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))      /*!< WDT Module */

#define WWDT_MODULE    (MODULE_APBCLK_ENC( 1)|MODULE_IP_EN_Pos_ENC(CLK_APBCLK0_WDTCKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 1)|MODULE_CLKSEL_Msk_ENC( 3)|MODULE_CLKSEL_Pos_ENC( 2)|\
                        MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))      /*!< WWDT Module */

#define RTC_MODULE     (MODULE_APBCLK_ENC( 1)|MODULE_IP_EN_Pos_ENC(CLK_APBCLK0_RTCCKEN_Pos)|\
                        MODULE_CLKSEL_ENC(NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))      /*!< RTC Module */

#define TMR0_MODULE    (MODULE_APBCLK_ENC( 1)|MODULE_IP_EN_Pos_ENC(CLK_APBCLK0_TMR0CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 1)|MODULE_CLKSEL_Msk_ENC( 7)|MODULE_CLKSEL_Pos_ENC( 8)|\
                        MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))      /*!< TMR0 Module */

#define TMR1_MODULE    (MODULE_APBCLK_ENC( 1)|MODULE_IP_EN_Pos_ENC(CLK_APBCLK0_TMR1CKEN_Pos) |\
                        MODULE_CLKSEL_ENC( 1)|MODULE_CLKSEL_Msk_ENC( 7)|MODULE_CLKSEL_Pos_ENC(12)|\
                        MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))      /*!< TMR1 Module */

#define TMR2_MODULE    (MODULE_APBCLK_ENC( 1)|MODULE_IP_EN_Pos_ENC(CLK_APBCLK0_TMR2CKEN_Pos) |\
                        MODULE_CLKSEL_ENC( 1)|MODULE_CLKSEL_Msk_ENC( 7)|MODULE_CLKSEL_Pos_ENC(16)|\
                        MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))      /*!< TMR2 Module */

#define TMR3_MODULE    (MODULE_APBCLK_ENC( 1)|MODULE_IP_EN_Pos_ENC(CLK_APBCLK0_TMR3CKEN_Pos) |\
                        MODULE_CLKSEL_ENC( 1)|MODULE_CLKSEL_Msk_ENC( 7)|MODULE_CLKSEL_Pos_ENC(20)|\
                        MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))      /*!< TMR3 Module */

#define CLKO_MODULE    (MODULE_APBCLK_ENC( 1)|MODULE_IP_EN_Pos_ENC(CLK_APBCLK0_CLKOCKEN_Pos) |\
                        MODULE_CLKSEL_ENC( 1)|MODULE_CLKSEL_Msk_ENC( 7)|MODULE_CLKSEL_Pos_ENC( 4)|\
                        MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))      /*!< CLKO Module */

#define I2C0_MODULE    (MODULE_APBCLK_ENC( 1)|MODULE_IP_EN_Pos_ENC(CLK_APBCLK0_I2C0CKEN_Pos) |\
                        MODULE_CLKSEL_ENC(NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))      /*!< I2C0 Module */

#define I2C1_MODULE    (MODULE_APBCLK_ENC( 1)|MODULE_IP_EN_Pos_ENC(CLK_APBCLK0_I2C1CKEN_Pos) |\
                        MODULE_CLKSEL_ENC(NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))      /*!< I2C1 Module */

#define SPI0_MODULE    (MODULE_APBCLK_ENC( 1)|MODULE_IP_EN_Pos_ENC(CLK_APBCLK0_SPI0CKEN_Pos) |\
                        MODULE_CLKSEL_ENC( 2)|MODULE_CLKSEL_Msk_ENC( 3)|MODULE_CLKSEL_Pos_ENC( 4)|\
                        MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))      /*!< SPI0 Module */

#define UART0_MODULE   (MODULE_APBCLK_ENC( 1)|MODULE_IP_EN_Pos_ENC(CLK_APBCLK0_UART0CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 1)|MODULE_CLKSEL_Msk_ENC( 7)|MODULE_CLKSEL_Pos_ENC(24)|\
                        MODULE_CLKDIV_ENC( 0)|MODULE_CLKDIV_Msk_ENC(0x0F)|MODULE_CLKDIV_Pos_ENC( 8))    /*!< UART0 Module */

#define UART1_MODULE   (MODULE_APBCLK_ENC( 1)|MODULE_IP_EN_Pos_ENC(CLK_APBCLK0_UART1CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 1)|MODULE_CLKSEL_Msk_ENC( 7)|MODULE_CLKSEL_Pos_ENC(28)|\
                        MODULE_CLKDIV_ENC( 0)|MODULE_CLKDIV_Msk_ENC(0x0F)|MODULE_CLKDIV_Pos_ENC( 12))   /*!< UART1 Module */

#define UART2_MODULE   (MODULE_APBCLK_ENC( 1)|MODULE_IP_EN_Pos_ENC(CLK_APBCLK0_UART2CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 3)|MODULE_CLKSEL_Msk_ENC( 7)|MODULE_CLKSEL_Pos_ENC(24)|\
                        MODULE_CLKDIV_ENC( 3)|MODULE_CLKDIV_Msk_ENC(0x0F)|MODULE_CLKDIV_Pos_ENC( 0))    /*!< UART2 Module */

#define UART3_MODULE   (MODULE_APBCLK_ENC( 1)|MODULE_IP_EN_Pos_ENC(CLK_APBCLK0_UART3CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 3)|MODULE_CLKSEL_Msk_ENC( 7)|MODULE_CLKSEL_Pos_ENC(28)|\
                        MODULE_CLKDIV_ENC( 3)|MODULE_CLKDIV_Msk_ENC(0x0F)|MODULE_CLKDIV_Pos_ENC( 4))    /*!< UART3 Module */

#define UART4_MODULE   (MODULE_APBCLK_ENC( 1)|MODULE_IP_EN_Pos_ENC(CLK_APBCLK0_UART4CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 3)|MODULE_CLKSEL_Msk_ENC( 7)|MODULE_CLKSEL_Pos_ENC( 4)|\
                        MODULE_CLKDIV_ENC( 3)|MODULE_CLKDIV_Msk_ENC(0x0F)|MODULE_CLKDIV_Pos_ENC( 8))    /*!< UART4 Module */

#define USBD_MODULE    (MODULE_APBCLK_ENC( 1)|MODULE_IP_EN_Pos_ENC(CLK_APBCLK0_USBDCKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 0)|MODULE_CLKSEL_Msk_ENC(1)|MODULE_CLKSEL_Pos_ENC(8)|\
                        MODULE_CLKDIV_ENC( 0)|MODULE_CLKDIV_Msk_ENC(0x0F)|MODULE_CLKDIV_Pos_ENC(4))     /*!< USBD Module */

#define EADC_MODULE    (MODULE_APBCLK_ENC( 1)|MODULE_IP_EN_Pos_ENC(CLK_APBCLK0_EADCCKEN_Pos)|\
                        MODULE_CLKSEL_ENC(NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC( 0)|MODULE_CLKDIV_Msk_ENC(0xFF)|MODULE_CLKDIV_Pos_ENC(16))    /*!< ADC Module */

//APBCLK1
#define USCI0_MODULE   (MODULE_APBCLK_ENC( 2)|MODULE_IP_EN_Pos_ENC(CLK_APBCLK1_USCI0CKEN_Pos)|\
                        MODULE_CLKSEL_ENC(NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))      /*!< USCI0 Module */

#define BPWM0_MODULE   (MODULE_APBCLK_ENC( 2)|MODULE_IP_EN_Pos_ENC(CLK_APBCLK1_BPWM0CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 2)|MODULE_CLKSEL_Msk_ENC( 1)|MODULE_CLKSEL_Pos_ENC( 8)|\
                        MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))      /*!< BPWM0 Module */


/*---------------------------------------------------------------------------------------------------------*/
/*  PDMSEL constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_PMUCTL_PDMSEL_PD          (0x0UL<<CLK_PMUCTL_PDMSEL_Pos)
#define CLK_PMUCTL_PDMSEL_FWPD        (0x2UL<<CLK_PMUCTL_PDMSEL_Pos)

#define CLK_TIMEOUT_ERR            (-1)     /*!< Clock timeout error value \hideinitializer */

extern int32_t g_CLK_i32ErrCode;


void CLK_DisableCKO(void);
void CLK_EnableCKO(uint32_t u32ClkSrc, uint32_t u32ClkDiv, uint32_t u32ClkDivBy1En);
void CLK_PowerDown(void);
void CLK_Idle(void);
uint32_t CLK_GetHXTFreq(void);
uint32_t CLK_GetLXTFreq(void);
uint32_t CLK_GetPCLK0Freq(void);
uint32_t CLK_GetPCLK1Freq(void);
uint32_t CLK_GetHCLKFreq(void);
uint32_t CLK_GetCPUFreq(void);
void CLK_SetHCLK(uint32_t u32ClkSrc, uint32_t u32ClkDiv);
void CLK_SetModuleClock(uint32_t u32ModuleIdx, uint32_t u32ClkSrc, uint32_t u32ClkDiv);
void CLK_SetSysTickClockSrc(uint32_t u32ClkSrc);
void CLK_EnableXtalRC(uint32_t u32ClkMask);
void CLK_DisableXtalRC(uint32_t u32ClkMask);
void CLK_EnableModuleClock(uint32_t u32ModuleIdx);
void CLK_DisableModuleClock(uint32_t u32ModuleIdx);
uint32_t CLK_WaitClockReady(uint32_t u32ClkMask);
void CLK_EnableSysTick(uint32_t u32ClkSrc, uint32_t u32Count);
void CLK_DisableSysTick(void);
void CLK_SetPowerDownMode(uint32_t u32PDMode);
uint32_t CLK_GetModuleClockSource(uint32_t u32ModuleIdx);
uint32_t CLK_GetModuleClockDivider(uint32_t u32ModuleIdx);
void CLK_SysTickDelay(uint32_t u32USec);
void CLK_SysTickLongDelay(uint32_t u32USec);

/** @} end of group CLK_EXPORTED_FUNCTIONS */

/** @} end of group CLK_Driver */

/** @} end of group Standard_Driver */

#ifdef __cplusplus
}

#endif

#endif /* __CLK_H__ */
