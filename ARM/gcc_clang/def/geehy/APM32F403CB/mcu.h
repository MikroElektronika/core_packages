/*!
 * @file        apm32f402_403.h
 *
 * @brief       CMSIS Cortex-M3 Device Peripheral Access Layer Header File.
 *
 * @details     This file contains all the peripheral register's definitions, bits definitions and memory mapping
 *
 * @version     V1.0.0
 *
 * @date        2024-12-01
 *
 * @attention
 *
 *  Copyright (C) 2024-2025 Geehy Semiconductor
 *
 *  You may not use this file except in compliance with the
 *  GEEHY COPYRIGHT NOTICE (GEEHY SOFTWARE PACKAGE LICENSE).
 *
 *  The program is only for reference, which is distributed in the hope
 *  that it will be useful and instructional for customers to develop
 *  their software. Unless required by applicable law or agreed to in
 *  writing, the program is distributed on an "AS IS" BASIS, WITHOUT
 *  ANY WARRANTY OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the GEEHY SOFTWARE PACKAGE LICENSE for the governing permissions
 *  and limitations under the License.
 */

/* Define to prevent recursive inclusion */
#ifndef __APM32F402_403_H
#define __APM32F402_403_H

#ifdef __cplusplus
 extern "C" {
#endif

/** @addtogroup CMSIS
  @{
*/

/** @defgroup APM32F402_403
  * @brief Peripheral Access Layer
  @{
*/

/** @defgroup HSE_Macros
  @{
*/

/**
 * @brief Define Value of the External oscillator in Hz
 */
#ifndef  HSE_VALUE
 #define HSE_VALUE                  ((uint32_t)8000000)
#endif

/* Time out for HSE start up */
#define HSE_STARTUP_TIMEOUT         ((uint16_t)0x3200)

/* Value of the Internal oscillator in Hz */
#define HSI_VALUE                   ((uint32_t)8000000)

/**@} end of group HSE_Macros */

/** @defgroup APM32F402_403_StdPeripheral_Library_Version
  @{
*/

/**
 * @brief APM32F402_403 Standard Peripheral Library version number
 */
#define __APM32F402_403_STDPERIPH_VERSION_MAIN   (0x01) /*!< [31:24] main version */
#define __APM32F402_403_STDPERIPH_VERSION_SUB1   (0x00) /*!< [23:16] sub1 version */
#define __APM32F402_403_STDPERIPH_VERSION_SUB2   (0x00) /*!< [15:8]  sub2 version */
#define __APM32F402_403_STDPERIPH_VERSION_RC     (0x00) /*!< [7:0]  release candidate */
#define __APM32F402_403_STDPERIPH_VERSION       ( (__APM32F402_403_STDPERIPH_VERSION_MAIN << 24)\
                                             |(__APM32F402_403_STDPERIPH_VERSION_SUB1 << 16)\
                                             |(__APM32F402_403_STDPERIPH_VERSION_SUB2 << 8)\
                                             |(__APM32F402_403_STDPERIPH_VERSION_RC))

/**@} end of group APM32F402_403_StdPeripheral_Library_Version */

/** @defgroup Configuraion_for_CMSIS
  @{
*/

/* Core revision r0p1 */
#define __CM4_REV                      0x0001
/* APM32 devices provides an MPU */
#define __MPU_PRESENT                  1
/* APM32 uses 4 Bits for the Priority Levels  */
#define __NVIC_PRIO_BITS               4
/* Set to 1 if different SysTick Config is used */
#define __Vendor_SysTickConfig         0
/* APM32 devices provides an FPU */
#define __FPU_PRESENT                  1

#if defined (__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050) /* ARM Compiler V6 */
  #ifndef __weak
    #define __weak  __attribute__((weak))
  #endif
  #ifndef __packed
    #define __packed  __attribute__((packed))
  #endif
#elif defined ( __GNUC__ ) && !defined (__CC_ARM) /* GNU Compiler */
  #ifndef __weak
    #define __weak   __attribute__((weak))
  #endif /* __weak */
  #ifndef __packed
    #define __packed __attribute__((__packed__))
  #endif /* __packed */
#endif /* __GNUC__ */

/**@} end of group Configuraion_for_CMSIS */

/** @defgroup Peripheral_Enumerations
  @{
*/

/**
 * @brief APM32F402_403 Interrupt Number Definition, according to the selected device
 *        in @ref Library_configuration_section
 */
typedef enum IRQn
{
/******  Cortex-M4 Processor Exceptions Numbers ****************************************************************/
  NonMaskableInt_IRQn         = -14,    /*!< 2 Non Maskable Interrupt                                          */
  MemoryManagement_IRQn       = -12,    /*!< 4 Cortex-M4 Memory Management Interrupt                           */
  BusFault_IRQn               = -11,    /*!< 5 Cortex-M4 Bus Fault Interrupt                                   */
  UsageFault_IRQn             = -10,    /*!< 6 Cortex-M4 Usage Fault Interrupt                                 */
  SVCall_IRQn                 = -5,     /*!< 11 Cortex-M4 SV Call Interrupt                                    */
  DebugMonitor_IRQn           = -4,     /*!< 12 Cortex-M4 Debug Monitor Interrupt                              */
  PendSV_IRQn                 = -2,     /*!< 14 Cortex-M4 Pend SV Interrupt                                    */
  SysTick_IRQn                = -1,     /*!< 15 Cortex-M4 System Tick Interrupt                                */
/******  APM32 specific Interrupt Numbers **********************************************************************/
  WWDT_IRQn                   = 0,      /*!< Window WatchDog Interrupt                                         */
  PVD_IRQn                    = 1,      /*!< PVD through EINT Line detection Interrupt                         */
  TAMPER_IRQn                 = 2,      /*!< Tamper Interrupts                                                 */
  RTC_IRQn                    = 3,      /*!< RTC global Interrupt                                              */
  FLASH_IRQn                  = 4,      /*!< FLASH global Interrupt                                            */
  RCM_IRQn                    = 5,      /*!< RCM global Interrupt                                              */
  EINT0_IRQn                  = 6,      /*!< EINT Line0 Interrupt                                              */
  EINT1_IRQn                  = 7,      /*!< EINT Line1 Interrupt                                              */
  EINT2_IRQn                  = 8,      /*!< EINT Line2 Interrupt                                              */
  EINT3_IRQn                  = 9,      /*!< EINT Line3 Interrupt                                              */
  EINT4_IRQn                  = 10,     /*!< EINT Line4 Interrupt                                              */
  DMA1_Channel1_IRQn          = 11,     /*!< DMA1 Channel 1 global Interrupt                                   */
  DMA1_Channel2_IRQn          = 12,     /*!< DMA1 Channel 2 global Interrupt                                   */
  DMA1_Channel3_IRQn          = 13,     /*!< DMA1 Channel 3 global Interrupt                                   */
  DMA1_Channel4_IRQn          = 14,     /*!< DMA1 Channel 4 global Interrupt                                   */
  DMA1_Channel5_IRQn          = 15,     /*!< DMA1 Channel 5 global Interrupt                                   */
  DMA1_Channel6_IRQn          = 16,     /*!< DMA1 Channel 6 global Interrupt                                   */
  DMA1_Channel7_IRQn          = 17,     /*!< DMA1 Channel 7 global Interrupt                                   */
  ADC1_2_IRQn                 = 18,     /*!< ADC1 and ADC2 global Interrupt                                    */
  CAN1_TX_IRQn                = 19,     /*!< CAN1 TX Interrupt                                                 */
  CAN1_RX0_IRQn               = 20,     /*!< CAN1 RX0 Interrupt                                                */
  CAN1_RX1_IRQn               = 21,     /*!< CAN1 RX1 Interrupt                                                */
  CAN1_SCE_IRQn               = 22,     /*!< CAN1 SCE Interrupt                                                */
  EINT9_5_IRQn                = 23,     /*!< External Line[9:5] Interrupts                                     */
  TMR1_BRK_IRQn               = 24,     /*!< TMR1 Break Interrupt                                              */
  TMR1_UP_IRQn                = 25,     /*!< TMR1 Update Interrupt                                             */
  TMR1_TRG_COM_IRQn           = 26,     /*!< TMR1 Trigger and Commutation Interrupt                            */
  TMR1_CC_IRQn                = 27,     /*!< TMR1 Capture Compare Interrupt                                    */
  TMR2_IRQn                   = 28,     /*!< TMR2 global Interrupt                                             */
  TMR3_IRQn                   = 29,     /*!< TMR3 global Interrupt                                             */
  TMR4_IRQn                   = 30,     /*!< TMR4 global Interrupt                                             */
  I2C1_EV_IRQn                = 31,     /*!< I2C1 Event Interrupt                                              */
  I2C1_ER_IRQn                = 32,     /*!< I2C1 Error Interrupt                                              */
  SPI1_IRQn                   = 35,     /*!< SPI1 global Interrupt                                             */
  SPI2_IRQn                   = 36,     /*!< SPI2 global Interrupt                                             */
  USART1_IRQn                 = 37,     /*!< USART1 global Interrupt                                           */
  USART2_IRQn                 = 38,     /*!< USART2 global Interrupt                                           */
  USART3_IRQn                 = 39,     /*!< USART3 global Interrupt                                           */
  EINT15_10_IRQn              = 40,     /*!< External Line[15:10] Interrupts                                   */
  RTC_Alarm_IRQn              = 41,     /*!< RTC Alarm through EINT line interrupt                             */
  OTG_FS_WKUP_IRQn            = 42,     /*!< USB OTG FS Wakeup through EINT line interrupt                     */
  TMR8_BRK_IRQn               = 43,     /*!< TMR8 Break Interrupt                                              */
  TMR8_UP_IRQn                = 44,     /*!< TMR8 Update Interrupt                                             */
  TMR8_TRG_COM_IRQn           = 45,     /*!< TMR8 Trigger and Commutation Interrupt                            */
  TMR8_CC_IRQn                = 46,     /*!< TMR8 Capture Compare global interrupt                             */
  TMR5_IRQn                   = 50,     /*!< TMR5 global Interrupt                                             */
  UART4_IRQn                  = 52,     /*!< UART4 global Interrupt                                            */
  DMA2_Channel1_IRQn          = 56,     /*!< DMA2 Channel 1 global Interrupt                                   */
  DMA2_Channel2_IRQn          = 57,     /*!< DMA2 Channel 2 global Interrupt                                   */
  DMA2_Channel3_IRQn          = 58,     /*!< DMA2 Channel 3 global Interrupt                                   */
  DMA2_Channel4_5_IRQn        = 59,     /*!< DMA2 Channel 4 and Channel 5 global Interrupt                     */
  FPU_IRQn                    = 60,     /*!< FPU global interrupt                                              */
  CAN2_TX_IRQn                = 61,     /*!< CAN2 TX Interrupt                                                 */
  CAN2_RX0_IRQn               = 62,     /*!< CAN2 RX0 Interrupt                                                */
  CAN2_RX1_IRQn               = 63,     /*!< CAN2 RX1 Interrupt                                                */
  CAN2_SCE_IRQn               = 64,     /*!< CAN2 SCE Interrupt                                                */
  OTG_FS_IRQn                 = 65,     /*!< USB OTG FS global Interrupt                                       */
} IRQn_Type;

/**@} end of group Peripheral_Enumerations */

#include "core_cm4.h"
// Note: Changed for MikroE implementation.
//#include "system_apm32f402_403.h"
#define __I volatile // Note: Added for MikroE implementation.
#define __O __I // Note: Added for MikroE implementation.
#define __IO __I // Note: Added for MikroE implementation.
#include <stdint.h>

/** @defgroup Exported_Types
  @{
*/

typedef int32_t s32;
typedef int16_t s16;
typedef int8_t  s8;

typedef const int32_t sc32;
typedef const int16_t sc16;
typedef const int8_t sc8;

typedef __IO int32_t  vs32;
typedef __IO int16_t  vs16;
typedef __IO int8_t   vs8;

typedef __I int32_t vsc32;
typedef __I int16_t vsc16;
typedef __I int8_t vsc8;

typedef uint32_t  u32;
typedef uint16_t u16;
typedef uint8_t  u8;

typedef const uint32_t uc32;
typedef const uint16_t uc16;
typedef const uint8_t uc8;

typedef __IO uint32_t  vu32;
typedef __IO uint16_t vu16;
typedef __IO uint8_t  vu8;

typedef __I uint32_t vuc32;
typedef __I uint16_t vuc16;
typedef __I uint8_t vuc8;

#ifndef __IM
  #define __IM   __I
#endif
#ifndef __OM
  #define __OM   __O
#endif
#ifndef __IOM
  #define __IOM  __IO
#endif

enum {BIT_RESET, BIT_SET};
enum {RESET, SET};
enum {DISABLE, ENABLE};
enum {ERROR, SUCCESS};

#ifndef NULL
#define NULL   ((void *)0)
#endif

#if defined (__CC_ARM )
#pragma anon_unions
#endif

/**@} end of group Exported_Types */

/** @defgroup Peripheral_registers_structures
  @{
*/

/**
 * @brief Reset and clock management unit (RCM)
 */
typedef struct
{
    /* Clock control register */
    union
    {
        __IOM uint32_t CTRL;

        struct
        {
            __IOM uint32_t HSIEN           : 1;
            __IM  uint32_t HSIRDYFLG       : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t HSITRM          : 5;
            __IM  uint32_t HSICAL          : 8;
            __IOM uint32_t HSEEN           : 1;
            __IM  uint32_t HSERDYFLG       : 1;
            __IOM uint32_t HSEBCFG         : 1;
            __IOM uint32_t CSSEN           : 1;
            __IM  uint32_t RESERVED2       : 4;
            __IOM uint32_t PLLEN           : 1;
            __IM  uint32_t PLLRDYFLG       : 1;
            __IM  uint32_t RESERVED3       : 6;
        } CTRL_B;
    };

    /* Clock configuration register */
    union
    {
        __IOM uint32_t CFG;

        struct
        {
            __IOM uint32_t SCLKSEL         : 2;
            __IM  uint32_t SCLKSELSTS      : 2;
            __IOM uint32_t AHBPSC          : 4;
            __IOM uint32_t APB1PSC         : 3;
            __IOM uint32_t APB2PSC         : 3;
            __IOM uint32_t ADCPSC          : 2;
            __IOM uint32_t PLLSRCSEL       : 1;
            __IOM uint32_t PLLHSEPSC       : 1;
            __IOM uint32_t PLLMULCFG       : 4;
            __IOM uint32_t OTGFSPSC        : 2;
            __IOM uint32_t MCOSEL          : 3;
            __IM  uint32_t RESERVED        : 5;
        } CFG_B;
    } ;

    /* Clock interrupt control register */
    union
    {
        __IOM uint32_t INT;

        struct
        {
            __IM  uint32_t LSIRDYFLG       : 1;
            __IM  uint32_t LSERDYFLG       : 1;
            __IM  uint32_t HSIRDYFLG       : 1;
            __IM  uint32_t HSERDYFLG       : 1;
            __IM  uint32_t PLLRDYFLG       : 1;
            __IM  uint32_t RESERVED1       : 2;
            __IM  uint32_t CSSFLG          : 1;
            __IOM uint32_t LSIRDYEN        : 1;
            __IOM uint32_t LSERDYEN        : 1;
            __IOM uint32_t HSIRDYEN        : 1;
            __IOM uint32_t HSERDYEN        : 1;
            __IOM uint32_t PLLRDYEN        : 1;
            __IM  uint32_t RESERVED2       : 3;
            __OM  uint32_t LSIRDYCLR       : 1;
            __OM  uint32_t LSERDYCLR       : 1;
            __OM  uint32_t HSIRDYCLR       : 1;
            __OM  uint32_t HSERDYCLR       : 1;
            __OM  uint32_t PLLRDYCLR       : 1;
            __IM  uint32_t RESERVED3       : 2;
            __OM  uint32_t CSSCLR          : 1;
            __IM  uint32_t RESERVED4       : 8;
        } INT_B;
    } ;

    /* APB2 peripheral reset register */
    union
    {
        __IOM uint32_t APB2RST;

        struct
        {
            __IOM uint32_t AFIORST         : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t PARST           : 1;
            __IOM uint32_t PBRST           : 1;
            __IOM uint32_t PCRST           : 1;
            __IOM uint32_t PDRST           : 1;
            __IM  uint32_t RESERVED2       : 3;
            __IOM uint32_t ADC1RST         : 1;
            __IOM uint32_t ADC2RST         : 1;
            __IOM uint32_t TMR1RST         : 1;
            __IOM uint32_t SPI1RST         : 1;
            __IOM uint32_t TMR8RST         : 1;
            __IOM uint32_t USART1RST       : 1;
            __IM  uint32_t RESERVED3       : 17;
        } APB2RST_B;
    } ;

    /* APB1 peripheral reset register */
    union
    {
        __IOM uint32_t APB1RST;

        struct
        {
            __IOM uint32_t TMR2RST         : 1;
            __IOM uint32_t TMR3RST         : 1;
            __IOM uint32_t TMR4RST         : 1;
            __IOM uint32_t TMR5RST         : 1;
            __IM  uint32_t RESERVED1       : 7;
            __IOM uint32_t WWDTRST         : 1;
            __IM  uint32_t RESERVED2       : 2;
            __IOM uint32_t SPI2RST         : 1;
            __IM  uint32_t RESERVED3       : 2;
            __IOM uint32_t USART2RST       : 1;
            __IOM uint32_t USART3RST       : 1;
            __IOM uint32_t UART4RST        : 1;
            __IM  uint32_t RESERVED4       : 1;
            __IOM uint32_t I2C1RST         : 1;
            __IM  uint32_t RESERVED5       : 3;
            __IOM uint32_t CAN1RST         : 1;
            __IM  uint32_t CAN2RST         : 1;
            __IOM uint32_t BAKPRST         : 1;
            __IOM uint32_t PMURST          : 1;
            __IM  uint32_t RESERVED6       : 3;
        } APB1RST_B;
    } ;

    /* AHB clock enable register */
    union
    {
        __IOM uint32_t AHBCLKEN;

        struct
        {
            __IOM uint32_t DMA1EN          : 1;
            __IOM uint32_t DMA2EN          : 1;
            __IOM uint32_t SRAMEN          : 1;
            __IOM uint32_t RESERVED1       : 1;
            __IOM uint32_t FMCEN           : 1;
            __IOM uint32_t RESERVED2       : 1;
            __IOM uint32_t CRCEN           : 1;
            __IM  uint32_t RESERVED3       : 2;
            __IOM uint32_t OTGFSEN         : 1;
            __IM  uint32_t RESERVED5       : 22;
        } AHBCLKEN_B;
    } ;

    /* APB2 clock enable register */
    union
    {
        __IOM uint32_t APB2CLKEN;

        struct
        {
            __IOM uint32_t AFIOEN          : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t PAEN            : 1;
            __IOM uint32_t PBEN            : 1;
            __IOM uint32_t PCEN            : 1;
            __IOM uint32_t PDEN            : 1;
            __IM  uint32_t RESERVED2       : 3;
            __IOM uint32_t ADC1EN          : 1;
            __IOM uint32_t ADC2EN          : 1;
            __IOM uint32_t TMR1EN          : 1;
            __IOM uint32_t SPI1EN          : 1;
            __IOM uint32_t TMR8EN          : 1;
            __IOM uint32_t USART1EN        : 1;
            __IM  uint32_t RESERVED3       : 17;
        } APB2CLKEN_B;
    };

    /* APB1 clock enable register */
    union
    {
        __IOM uint32_t APB1CLKEN;

        struct
        {
            __IOM uint32_t TMR2EN          : 1;
            __IOM uint32_t TMR3EN          : 1;
            __IOM uint32_t TMR4EN          : 1;
            __IOM uint32_t TMR5EN          : 1;
            __IM  uint32_t RESERVED1       : 7;
            __IOM uint32_t WWDTEN          : 1;
            __IM  uint32_t RESERVED2       : 2;
            __IOM uint32_t SPI2EN          : 1;
            __IM  uint32_t RESERVED3       : 2;
            __IOM uint32_t USART2EN        : 1;
            __IOM uint32_t USART3EN        : 1;
            __IOM uint32_t UART4EN         : 1;
            __IM  uint32_t RESERVED4       : 1;
            __IOM uint32_t I2C1EN          : 1;
            __IM  uint32_t RESERVED5       : 3;
            __IOM uint32_t CAN1EN          : 1;
            __IM  uint32_t CAN2EN          : 1;
            __IOM uint32_t BAKPEN          : 1;
            __IOM uint32_t PMUEN           : 1;
            __IM  uint32_t RESERVED6       : 3;
        } APB1CLKEN_B;
    } ;

    /* Backup domain control register */
    union
        {
        __IOM uint32_t BDCTRL;

        struct
        {
            __IOM uint32_t LSEEN           : 1;
            __IM  uint32_t LSERDYFLG       : 1;
            __IOM uint32_t LSEBCFG         : 1;
            __IM  uint32_t RESERVED1       : 5;
            __IOM uint32_t RTCSRCSEL       : 2;
            __IM  uint32_t RESERVED2       : 5;
            __IOM uint32_t RTCCLKEN        : 1;
            __IOM uint32_t BDRST           : 1;
            __IM  uint32_t RESERVED3       : 15;
        } BDCTRL_B;
    } ;

    /* Control/status register */
    union
    {
        __IOM uint32_t CSTS;

        struct
        {
            __IOM uint32_t LSIEN           : 1;
            __IM  uint32_t LSIRDYFLG       : 1;
            __IM  uint32_t RESERVED1       : 22;
            __IOM uint32_t RSTFLGCLR       : 1;
            __IM  uint32_t RESERVED2       : 1;
            __IOM uint32_t NRSTFLG         : 1;
            __IOM uint32_t PODRSTFLG       : 1;
            __IOM uint32_t SWRSTFLG        : 1;
            __IOM uint32_t IWDTRSTFLG      : 1;
            __IOM uint32_t WWDTRSTFLG      : 1;
            __IOM uint32_t LPWRRSTFLG      : 1;
        } CSTS_B;
    } ;

    /* AHB1 peripheral reset register */
    union
    {
        __IOM uint32_t AHBRST;

        struct
        {
            __IM  uint32_t RESERVED1       : 9;
            __IOM uint32_t OTGFSRST        : 1;
            __IM  uint32_t RESERVED2       : 22;
        } AHBRST_B;
    } ;
} RCM_T;

/**
 * @brief Debug MCU(DBGMCU)
 */
typedef struct
{
    /** @brief ID register */
    union
    {
        __IM  uint32_t IDCODE;
        struct
        {
            __IM  uint32_t EQR             : 12;
            __IM  uint32_t RESERVED        : 4;
            __IM  uint32_t WVR             : 16;
        } IDCODE_B;
    };

    /** @brief Control register */
    union
    {
        __IOM uint32_t CFG;
        struct
        {
            __IOM uint32_t SLEEP_CLK_STS   : 1;
            __IOM uint32_t STOP_CLK_STS    : 1;
            __IOM uint32_t STANDBY_CLK_STS : 1;
            __IM  uint32_t RESERVED1       : 2;
            __IOM uint32_t TRACE_IOEN      : 1;
            __IOM uint32_t TRACE_MODE      : 2;
            __IOM uint32_t IWDT_STS        : 1;
            __IOM uint32_t WWDT_STS        : 1;
            __IOM uint32_t TMR1_STS        : 1;
            __IOM uint32_t TMR2_STS        : 1;
            __IOM uint32_t TMR3_STS        : 1;
            __IOM uint32_t TMR4_STS        : 1;
            __IOM uint32_t CAN1_STS        : 1;
            __IOM uint32_t I2C1_SMBUS_TIMEOUT_STS        : 1;
            __IM  uint32_t RESERVED2       : 1;
            __IOM uint32_t TMR5_STS        : 1;
            __IM  uint32_t RESERVED3       : 2;
            __IOM uint32_t TMR8_STS        : 1;
            __IOM uint32_t CAN2_STS        : 1;
            __IM  uint32_t RESERVED4       : 10;
        } CFG_B;
    };
} DBGMCU_T;

/**
 * @brief General purpose I/O (GPIO)
 */
typedef struct
{
    /* Port configure register low */
    union
    {
        __IOM uint32_t CFGLOW;

        struct
        {
            __IOM uint32_t MODE0           : 2;
            __IOM uint32_t CFG0            : 2;
            __IOM uint32_t MODE1           : 2;
            __IOM uint32_t CFG1            : 2;
            __IOM uint32_t MODE2           : 2;
            __IOM uint32_t CFG2            : 2;
            __IOM uint32_t MODE3           : 2;
            __IOM uint32_t CFG3            : 2;
            __IOM uint32_t MODE4           : 2;
            __IOM uint32_t CFG4            : 2;
            __IOM uint32_t MODE5           : 2;
            __IOM uint32_t CFG5            : 2;
            __IOM uint32_t MODE6           : 2;
            __IOM uint32_t CFG6            : 2;
            __IOM uint32_t MODE7           : 2;
            __IOM uint32_t CFG7            : 2;
        } CFGLOW_B;
    } ;

    /* Port configure register high */
    union
    {
        __IOM uint32_t CFGHIG;

        struct
        {
            __IOM uint32_t MODE8           : 2;
            __IOM uint32_t CFG8            : 2;
            __IOM uint32_t MODE9           : 2;
            __IOM uint32_t CFG9            : 2;
            __IOM uint32_t MODE10          : 2;
            __IOM uint32_t CFG10           : 2;
            __IOM uint32_t MODE11          : 2;
            __IOM uint32_t CFG11           : 2;
            __IOM uint32_t MODE12          : 2;
            __IOM uint32_t CFG12           : 2;
            __IOM uint32_t MODE13          : 2;
            __IOM uint32_t CFG13           : 2;
            __IOM uint32_t MODE14          : 2;
            __IOM uint32_t CFG14           : 2;
            __IOM uint32_t MODE15          : 2;
            __IOM uint32_t CFG15           : 2;
        } CFGHIG_B;
    } ;

    /* Port data in register */
    union
    {
        __IM  uint32_t IDATA;

        struct
        {
            __IM  uint32_t IDATA0          : 1;
            __IM  uint32_t IDATA1          : 1;
            __IM  uint32_t IDATA2          : 1;
            __IM  uint32_t IDATA3          : 1;
            __IM  uint32_t IDATA4          : 1;
            __IM  uint32_t IDATA5          : 1;
            __IM  uint32_t IDATA6          : 1;
            __IM  uint32_t IDATA7          : 1;
            __IM  uint32_t IDATA8          : 1;
            __IM  uint32_t IDATA9          : 1;
            __IM  uint32_t IDATA10         : 1;
            __IM  uint32_t IDATA11         : 1;
            __IM  uint32_t IDATA12         : 1;
            __IM  uint32_t IDATA13         : 1;
            __IM  uint32_t IDATA14         : 1;
            __IM  uint32_t IDATA15         : 1;
            __IM  uint32_t RESERVED        : 16;
        } IDATA_B;
    } ;

    /* Port data output register */
    union
    {
        __IOM uint32_t ODATA;

        struct
        {
            __IOM uint32_t ODATA0          : 1;
            __IOM uint32_t ODATA1          : 1;
            __IOM uint32_t ODATA2          : 1;
            __IOM uint32_t ODATA3          : 1;
            __IOM uint32_t ODATA4          : 1;
            __IOM uint32_t ODATA5          : 1;
            __IOM uint32_t ODATA6          : 1;
            __IOM uint32_t ODATA7          : 1;
            __IOM uint32_t ODATA8          : 1;
            __IOM uint32_t ODATA9          : 1;
            __IOM uint32_t ODATA10         : 1;
            __IOM uint32_t ODATA11         : 1;
            __IOM uint32_t ODATA12         : 1;
            __IOM uint32_t ODATA13         : 1;
            __IOM uint32_t ODATA14         : 1;
            __IOM uint32_t ODATA15         : 1;
            __IM  uint32_t RESERVED        : 16;
        } ODATA_B;
    } ;

    /* Port bit set/clear register */
    union
    {
        __OM  uint32_t BSC;

        struct
        {
            __OM  uint32_t BS0             : 1;
            __OM  uint32_t BS1             : 1;
            __OM  uint32_t BS2             : 1;
            __OM  uint32_t BS3             : 1;
            __OM  uint32_t BS4             : 1;
            __OM  uint32_t BS5             : 1;
            __OM  uint32_t BS6             : 1;
            __OM  uint32_t BS7             : 1;
            __OM  uint32_t BS8             : 1;
            __OM  uint32_t BS9             : 1;
            __OM  uint32_t BS10            : 1;
            __OM  uint32_t BS11            : 1;
            __OM  uint32_t BS12            : 1;
            __OM  uint32_t BS13            : 1;
            __OM  uint32_t BS14            : 1;
            __OM  uint32_t BS15            : 1;
            __OM  uint32_t BC0             : 1;
            __OM  uint32_t BC1             : 1;
            __OM  uint32_t BC2             : 1;
            __OM  uint32_t BC3             : 1;
            __OM  uint32_t BC4             : 1;
            __OM  uint32_t BC5             : 1;
            __OM  uint32_t BC6             : 1;
            __OM  uint32_t BC7             : 1;
            __OM  uint32_t BC8             : 1;
            __OM  uint32_t BC9             : 1;
            __OM  uint32_t BC10            : 1;
            __OM  uint32_t BC11            : 1;
            __OM  uint32_t BC12            : 1;
            __OM  uint32_t BC13            : 1;
            __OM  uint32_t BC14            : 1;
            __OM  uint32_t BC15            : 1;
        } BSC_B;
    } ;

    /* Port bit clear register */
    union
    {
        __OM  uint32_t BC;

        struct
        {
            __OM  uint32_t BC0             : 1;
            __OM  uint32_t BC1             : 1;
            __OM  uint32_t BC2             : 1;
            __OM  uint32_t BC3             : 1;
            __OM  uint32_t BC4             : 1;
            __OM  uint32_t BC5             : 1;
            __OM  uint32_t BC6             : 1;
            __OM  uint32_t BC7             : 1;
            __OM  uint32_t BC8             : 1;
            __OM  uint32_t BC9             : 1;
            __OM  uint32_t BC10            : 1;
            __OM  uint32_t BC11            : 1;
            __OM  uint32_t BC12            : 1;
            __OM  uint32_t BC13            : 1;
            __OM  uint32_t BC14            : 1;
            __OM  uint32_t BC15            : 1;
            __IM  uint32_t RESERVED        : 16;
        } BC_B;
    } ;

    /* Port configuration lock register */
    union
    {
        __IOM uint32_t LOCK;

        struct
        {
            __IOM uint32_t LOCK0           : 1;
            __IOM uint32_t LOCK1           : 1;
            __IOM uint32_t LOCK2           : 1;
            __IOM uint32_t LOCK3           : 1;
            __IOM uint32_t LOCK4           : 1;
            __IOM uint32_t LOCK5           : 1;
            __IOM uint32_t LOCK6           : 1;
            __IOM uint32_t LOCK7           : 1;
            __IOM uint32_t LOCK8           : 1;
            __IOM uint32_t LOCK9           : 1;
            __IOM uint32_t LOCK10          : 1;
            __IOM uint32_t LOCK11          : 1;
            __IOM uint32_t LOCK12          : 1;
            __IOM uint32_t LOCK13          : 1;
            __IOM uint32_t LOCK14          : 1;
            __IOM uint32_t LOCK15          : 1;
            __IOM uint32_t LOCKKEY         : 1;
            __IM  uint32_t RESERVED        : 15;
        } LOCK_B;
    } ;
} GPIO_T;

/**
 * @brief Alternate function I/O (AFIO)
 */
typedef struct
{
    /* Event control register */
    union
    {
        __IOM uint32_t EVCTRL;

        struct
        {
            __IOM uint32_t PINSEL          : 4;
            __IOM uint32_t PORTSEL         : 3;
            __IOM uint32_t EVOEN           : 1;
            __IM  uint32_t RESERVED        : 24;
        } EVCTRL_B;
    } ;

    /* Alternate function IO remap and Serial wire JTAG configuration register */
    union
    {
        __IOM uint32_t REMAP1;

        struct
        {
            __IOM uint32_t SPI1RMP         : 1;
            __IOM uint32_t I2C1RMP         : 1;
            __IOM uint32_t USART1RMP       : 1;
            __IOM uint32_t USART2RMP       : 1;
            __IOM uint32_t USART3RMP       : 2;
            __IOM uint32_t TMR1RMP         : 2;
            __IOM uint32_t TMR2RMP         : 2;
            __IOM uint32_t TMR3RMP         : 2;
            __IOM uint32_t TMR4RMP         : 1;
            __IOM uint32_t CAN1RMP         : 2;
            __IOM uint32_t PD01RMP         : 1;
            __IOM uint32_t TMR5CH4IRMP     : 1;
            __IOM uint32_t ADC1_ETRGINJC_RMP : 1;
            __IOM uint32_t ADC1_ETRGREGC_RMP : 1;
            __IOM uint32_t ADC2_ETRGINJC_RMP : 1;
            __IOM uint32_t ADC2_ETRGREGC_RMP : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t CAN2RMP         : 1;
            __IM  uint32_t RESERVED2       : 1;
            __OM  uint32_t SWJCFG          : 3;
            __IM  uint32_t RESERVED3       : 5;
        } REMAP1_B;
    } ;

    /* External interrupt select register1 */
    union
    {
        __IOM uint32_t EINTSEL1;

        struct
        {
            __IOM uint32_t EINT0           : 4;
            __IOM uint32_t EINT1           : 4;
            __IOM uint32_t EINT2           : 4;
            __IOM uint32_t EINT3           : 4;
            __IM  uint32_t RESERVED        : 16;
        } EINTSEL1_B;
    } ;

    /* External interrupt select register2 */
    union
    {
        __IOM uint32_t EINTSEL2;

        struct
        {
            __IOM uint32_t EINT4           : 4;
            __IOM uint32_t EINT5           : 4;
            __IOM uint32_t EINT6           : 4;
            __IOM uint32_t EINT7           : 4;
            __IM  uint32_t RESERVED        : 16;
        } EINTSEL2_B;
    } ;

    /* External interrupt select register3 */
    union
    {
        __IOM uint32_t EINTSEL3;

        struct
        {
            __IOM uint32_t EINT8           : 4;
            __IOM uint32_t EINT9           : 4;
            __IOM uint32_t EINT10          : 4;
            __IOM uint32_t EINT11          : 4;
            __IM  uint32_t RESERVED        : 16;
        } EINTSEL3_B;
    } ;

    /* External interrupt select register4 */
    union
    {
        __IOM uint32_t EINTSEL4;

        struct
        {
            __IOM uint32_t EINT12          : 4;
            __IOM uint32_t EINT13          : 4;
            __IOM uint32_t EINT14          : 4;
            __IOM uint32_t EINT15          : 4;
            __IM  uint32_t RESERVED        : 16;
        } EINTSEL4_B;
    } ;
} AFIO_T;

/**
 * @brief Universal synchronous asynchronous receiver  transmitter (USART)
 */
typedef struct
{
    /* Status register */
    union
    {
        __IOM uint32_t STS;

        struct
        {
            __IM  uint32_t PEFLG           : 1;
            __IM  uint32_t FEFLG           : 1;
            __IM  uint32_t NEFLG           : 1;
            __IM  uint32_t OVREFLG         : 1;
            __IM  uint32_t IDLEFLG         : 1;
            __IOM uint32_t RXBNEFLG        : 1;
            __IOM uint32_t TXCFLG          : 1;
            __IM  uint32_t TXBEFLG         : 1;
            __IOM uint32_t LBDFLG          : 1;
            __IOM uint32_t CTSFLG          : 1;
            __IM  uint32_t RESERVED        : 22;
        } STS_B;
    } ;

    /* TX Buffer Data Register */
    union
    {
        __IOM uint32_t DATA;

        struct
        {
            __IOM uint32_t DATA            : 9;
            __IM  uint32_t RESERVED        : 23;
        } DATA_B;
    } ;

    /* Baud rate register */
    union
    {
        __IOM uint32_t BR;

        struct
        {
            __IOM uint32_t FBR             : 4;
            __IOM uint32_t IBR             : 12;
            __IM  uint32_t RESERVED        : 16;
        } BR_B;
    } ;

    /* Control register 1 */
    union
    {
        __IOM uint32_t CTRL1;

        struct
        {
            __IOM uint32_t TXBF            : 1;
            __IOM uint32_t RXMUTEEN        : 1;
            __IOM uint32_t RXEN            : 1;
            __IOM uint32_t TXEN            : 1;
            __IOM uint32_t IDLEIEN         : 1;
            __IOM uint32_t RXBNEIEN        : 1;
            __IOM uint32_t TXCIEN          : 1;
            __IOM uint32_t TXBEIEN         : 1;
            __IOM uint32_t PEIEN           : 1;
            __IOM uint32_t PCFG            : 1;
            __IOM uint32_t PCEN            : 1;
            __IOM uint32_t WUPMCFG         : 1;
            __IOM uint32_t DBLCFG          : 1;
            __IOM uint32_t UEN             : 1;
            __IM  uint32_t RESERVED        : 18;
        } CTRL1_B;
    } ;

    /* Control register 2 */
    union
    {
        __IOM uint32_t CTRL2;

        struct
        {
            __IOM uint32_t ADDR            : 4;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t LBDLCFG         : 1;
            __IOM uint32_t LBDIEN          : 1;
            __IM  uint32_t RESERVED2       : 1;
            __IOM uint32_t LBCPOEN         : 1;
            __IOM uint32_t CPHA            : 1;
            __IOM uint32_t CPOL            : 1;
            __IOM uint32_t CLKEN           : 1;
            __IOM uint32_t STOPCFG         : 2;
            __IOM uint32_t LINMEN          : 1;
            __IM  uint32_t RESERVED3       : 17;
        } CTRL2_B;
    } ;

    /* Control register 3 */
    union
    {
        __IOM uint32_t CTRL3;

        struct
        {
            __IOM uint32_t ERRIEN          : 1;
            __IOM uint32_t IREN            : 1;
            __IOM uint32_t IRLPEN          : 1;
            __IOM uint32_t HDEN            : 1;
            __IOM uint32_t SCNACKEN        : 1;
            __IOM uint32_t SCEN            : 1;
            __IOM uint32_t DMARXEN         : 1;
            __IOM uint32_t DMATXEN         : 1;
            __IOM uint32_t RTSEN           : 1;
            __IOM uint32_t CTSEN           : 1;
            __IOM uint32_t CTSIEN          : 1;
            __IM  uint32_t RESERVED        : 21;
        } CTRL3_B;
    } ;

    /* Guard TMRe and divider number register */
    union
    {
        __IOM uint32_t GTPSC;

        struct
        {
            __IOM uint32_t PSC             : 8;
            __IOM uint32_t GRDT            : 8;
            __IM  uint32_t RESERVED        : 16;
        } GTPSC_B;
    } ;
} USART_T;

/**
 * @brief Flash memory controller(FMC)
 */
typedef struct
{
    /* FMC access control register */
    union
    {
        __IOM uint32_t CTRL1;

        struct
        {
            __IOM uint32_t WS2_0           : 3;
            __IOM uint32_t HCAEN           : 1;
            __IOM uint32_t PBEN            : 1;
            __IM  uint32_t PBSF            : 1;
            __IOM uint32_t WS4_3           : 2;
            __IOM uint32_t ICACHEEN        : 1;
            __IOM uint32_t DCACHEEN        : 1;
            __OM  uint32_t ICACHERST       : 1;
            __IOM uint32_t DCACHERST       : 1;
            __IM  uint32_t RESERVED1       : 3;
            __IOM uint32_t PRFTB           : 1;
            __IM  uint32_t RESERVED2       : 16;
        } CTRL1_B;
    } ;

    /* key register */
    union
    {
        __OM  uint32_t KEY;

        struct
        {
            __OM  uint32_t KEY             : 32;
        } KEY_B;
    } ;

    /* option byte key register */
    union
    {
        __OM  uint32_t OBKEY;

        struct
        {
            __OM  uint32_t OBKEY           : 32;
        } OBKEY_B;
    };

    /* status register */
    union
    {
        __IOM uint32_t STS;

        struct
        {
            __IM  uint32_t BUSYF           : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t PEF             : 1;
            __IM  uint32_t RESERVED2       : 1;
            __IOM uint32_t WPEF            : 1;
            __IOM uint32_t OCF             : 1;
            __IM  uint32_t RESERVED3       : 26;
        } STS_B;
    };

    /* status register */
    union
    {
        __IOM uint32_t CTRL2;

        struct
        {
            __IOM uint32_t PG              : 1;
            __IOM uint32_t PAGEERA         : 1;
            __IOM uint32_t MASSERA         : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t OBP             : 1;
            __IOM uint32_t OBE             : 1;
            __IOM uint32_t STA             : 1;
            __IOM uint32_t LOCK            : 1;
            __IM  uint32_t RESERVED2       : 1;
            __IOM uint32_t OBWEN           : 1;
            __IOM uint32_t ERRIE           : 1;
            __IM  uint32_t RESERVED3       : 1;
            __IOM uint32_t OCIE            : 1;
            __IM  uint32_t RESERVED4       : 19;
        } CTRL2_B;
    } ;

    /* address register */
    union
    {
        __OM  uint32_t ADDR;

        struct
        {
            __OM  uint32_t ADDR            : 32;
        } ADDR_B;
    };

    __IM  uint32_t  RESERVED;

    /* Option byte register */
    union
    {
        __IOM  uint32_t OBCS;

        struct
        {
            __IM  uint32_t OBE             : 1;
            __IM  uint32_t READPROT        : 1;
            __IM  uint32_t UOB             : 8;
            __IM  uint32_t DATA0           : 8;
            __IM  uint32_t DATA1           : 8;
            __IM  uint32_t RESERVED        : 6;
        } OBCS_B;
    };

    /* Write protection register */
    union
    {
        __IM  uint32_t WRTPROT;

        struct
        {
            __IM  uint32_t WRTPORT         : 32;
        } WRTPORT_B;
    };
} FMC_T;

/**
 * @brief  CRC calculation unit (CRC)
 */
typedef struct
{
    /** @brief  DATA register */
    union
    {
        __IOM uint32_t DATA;

        struct
        {
            __IOM uint32_t DATA            : 32;
        } DATA_B;
    } ;

    /** @brief independent DATA register */
    union
    {
        __IOM  uint32_t INDATA;

        struct
        {
            __IOM uint32_t INDATA          : 8;
            __IM  uint32_t RESERVED        : 24;
        } INDATA_B;
    };

    /** @brief Countrol register */
    union
    {
        __IOM uint32_t CTRL;

        struct
        {
            __IOM uint32_t RST             : 1;
            __IM  uint32_t RESERVED        : 31;
        } CTRL_B;
    };
} CRC_T;

/**
 * @brief Real time clock (RTC)
 */
typedef struct
{
    /** @brief Control register */
    union
    {
        __IOM uint32_t CTRL;

        struct
        {
            __IOM uint32_t SECIEN          : 1;
            __IOM uint32_t ALRIEN          : 1;
            __IOM uint32_t OVRIEN          : 1;
            __IM  uint32_t RESERVED        : 29;
        } CTRL_B;
    };

    /** @brief Control and State register */
    union
    {
        __IOM uint32_t CSTS;

        struct
        {
            __IOM uint32_t SECFLG          : 1;
            __IOM uint32_t ALRFLG          : 1;
            __IOM uint32_t OVRFLG          : 1;
            __IOM uint32_t RSYNCFLG        : 1;
            __IOM uint32_t CFGMFLG         : 1;
            __IM  uint32_t OCFLG           : 1;
            __IM  uint32_t RESERVED        : 26;
        } CSTS_B;
    };

    /** @brief RTC predivision loading register High Bit */
    union
    {
        __OM uint32_t PSCRLDH;

        struct
        {
            __OM  uint32_t PSCRLDH         : 4;
            __IM  uint32_t RESERVED        : 28;
        } PSCRLDH_B;
    };

    /** @brief  RTC predivision loading register Low Bit */
    union
    {
        __OM uint32_t PSCRLDL;

        struct
        {
            __OM  uint32_t PSCRLDL         : 16;
            __IM  uint32_t RESERVED        : 16;
        } PSCRLDL_B;
    };

    /** @brief RTC predivider remainder register High Bit */
    union
    {
        __IM uint32_t PSCH;

        struct
        {
            __IM  uint32_t PSCH            : 4;
            __IM  uint32_t RESERVED        : 28;
        } PSCH_B;
    };

    /** @brief RTC predivider remainder register Low Bit */
    union
    {
        __IM uint32_t PSCL;

        struct
        {
            __IM  uint32_t PSCL            : 16;
            __IM  uint32_t RESERVED        : 16;
        } PSCL_B;
    };

    /** @brief RTC count register High Bit */
    union
    {
        __IOM uint32_t CNTH;

        struct
        {
            __IOM uint32_t CNTH            : 16;
            __IM  uint32_t RESERVED        : 16;
        } CNTH_B;
    };

    /** @brief RTC count register Low Bit */
    union
    {
        __IOM uint32_t CNTL;

        struct
        {
            __IOM uint32_t CNTL            : 16;
            __IM  uint32_t RESERVED        : 16;
        } CNTL_B;
    };

    /** @brief RTC alarm clock register High Bit */
    union
    {
        __OM uint32_t ALRH;

        struct
        {
            __OM  uint32_t ALRH            : 16;
            __IM  uint32_t RESERVED        : 16;
        } ALRH_B;
    };

    /** @brief RTC alarm clock register Low Bit */
    union
    {
        __OM uint32_t ALRL;

        struct
        {
            __OM  uint32_t ALRL            : 16;
            __IM  uint32_t RESERVED        : 16;
        } ALRL_B;
    };
} RTC_T;

/**
 * @brief Power Management Unit(PMU)
 */
typedef struct
{
    /** @brief Control register */
    union
    {
        __IOM uint32_t CTRL;

        struct
        {
            __IOM uint32_t LPDSCFG         : 1;
            __IOM uint32_t PDDSCFG         : 1;
            __IOM uint32_t WUFLGCLR        : 1;
            __IOM uint32_t SBFLGCLR        : 1;
            __IOM uint32_t PVDEN           : 1;
            __IOM uint32_t PLSEL           : 3;
            __IOM uint32_t BPWEN           : 1;
            __IM  uint32_t RESERVED        : 23;
        } CTRL_B;
    };

    /** @brief PMU Status register */
    union
    {
        __IOM uint32_t CSTS;

        struct
        {
            __IM  uint32_t WUEFLG          : 1;
            __IM  uint32_t SBFLG           : 1;
            __IM  uint32_t PVDOFLG         : 1;
            __IM  uint32_t RESERVED        : 5;
            __IOM uint32_t WKUPCFG         : 1;
            __IM  uint32_t RESERVED2       : 23;
        } CSTS_B;
    };
} PMU_T;

/**
 * @brief Backup register (BAKPR)
 */
typedef struct
{
    __IM  uint32_t  RESERVED;

    /** @brief BAKPR DATA1 register */
    union
    {
        __IOM uint32_t DATA1;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA1_B;
    };

    /** @brief BAKPR DATA2 register */
    union
    {
        __IOM uint32_t DATA2;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA2_B;
    };

    /** @brief BAKPR DATA3 register */
    union
    {
        __IOM uint32_t DATA3;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA3_B;
    };

    /** @brief BAKPR DATA4 register */
    union
    {
        __IOM uint32_t DATA4;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA4_B;
    };

    /** @brief BAKPR DATA5 register */
    union
    {
        __IOM uint32_t DATA5;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA5_B;
    };

    /** @brief BAKPR DATA6 register */
    union
    {
        __IOM uint32_t DATA6;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA6_B;
    };

    /** @brief BAKPR DATA7 register */
    union
    {
        __IOM uint32_t DATA7;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA7_B;
    };

    /** @brief BAKPR DATA8 register */
    union
    {
        __IOM uint32_t DATA8;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA8_B;
    };

    /** @brief BAKPR DATA9 register */
    union
    {
        __IOM uint32_t DATA9;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA9_B;
    };

    /** @brief BAKPR DATA10 register */
    union
    {
        __IOM uint32_t DATA10;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA10_B;
    };

    /** @brief BAKPR Clock Calibration register */
    union
    {
        __IOM uint32_t CLKCAL;

        struct
        {
            __IOM uint32_t CALVALUE        : 7;
            __IOM uint32_t CALCOEN         : 1;
            __IOM uint32_t ASPOEN          : 1;
            __IOM uint32_t ASPOSEL         : 1;
            __IM  uint32_t RESERVED        : 22;
        } CLKCAL_B;
    } ;

    /** @brief BAKPR Control register */
    union
    {
        __IOM uint32_t CTRL;

        struct
        {
            __IOM uint32_t TPFCFG          : 1;
            __IOM uint32_t TPALCFG         : 1;
            __IM  uint32_t RESERVED        : 30;
        } CTRL_B;
    };

    /** @brief BAKPR Control register */
    union
    {
        __IOM uint32_t CSTS;

        struct
        {
            __OM  uint32_t TECLR           : 1;
            __OM  uint32_t TICLR           : 1;
            __IOM uint32_t TPIEN           : 1;
            __IM  uint32_t RESERVED1       : 5;
            __IM  uint32_t TEFLG           : 1;
            __IM  uint32_t TIFLG           : 1;
            __IM  uint32_t RESERVED2       : 22;
        } CSTS_B;
    };

    __IM  uint32_t  RESERVED1[2];

    /** @brief BAKPR DATA11 register */
    union
    {
        __IOM uint32_t DATA11;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA11_B;
    };

    /** @brief BAKPR DATA12 register */
    union
    {
        __IOM uint32_t DATA12;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA12_B;
    };

    /** @brief BAKPR DATA13 register */
    union
    {
        __IOM uint32_t DATA13;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA13_B;
    };

    /** @brief BAKPR DATA14 register */
    union
    {
        __IOM uint32_t DATA14;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA14_B;
    };

    /** @brief BAKPR DATA15 register */
    union
    {
        __IOM uint32_t DATA15;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA15_B;
    };

    /** @brief BAKPR DATA16 register */
    union
    {
        __IOM uint32_t DATA16;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA16_B;
    };

    /** @brief BAKPR DATA17 register */
    union
    {
        __IOM uint32_t DATA17;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA17_B;
    };

    /** @brief BAKPR DATA18 register */
    union
    {
        __IOM uint32_t DATA18;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA18_B;
    };

    /** @brief BAKPR DATA19 register */
    union
    {
        __IOM uint32_t DATA19;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA19_B;
    };

    /** @brief BAKPR DATA20 register */
    union
    {
        __IOM uint32_t DATA20;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA20_B;
    };

    /** @brief BAKPR DATA21 register */
    union
    {
        __IOM uint32_t DATA21;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA21_B;
    };

    /** @brief BAKPR DATA22 register */
    union
    {
        __IOM uint32_t DATA22;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA22_B;
    };

    /** @brief BAKPR DATA23 register */
    union
    {
        __IOM uint32_t DATA23;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA23_B;
    };

    /** @brief BAKPR DATA24 register */
    union
    {
        __IOM uint32_t DATA24;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA24_B;
    };

    /** @brief BAKPR DATA25 register */
    union
    {
        __IOM uint32_t DATA25;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA25_B;
    };

    /** @brief BAKPR DATA26 register */
    union
    {
        __IOM uint32_t DATA26;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA26_B;
    };

    /** @brief BAKPR DATA27 register */
    union
    {
        __IOM uint32_t DATA27;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA27_B;
    };

    /** @brief BAKPR DATA28 register */
    union
    {
        __IOM uint32_t DATA28;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA28_B;
    };

    /** @brief BAKPR DATA29 register */
    union
    {
        __IOM uint32_t DATA29;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA29_B;
    };

    /** @brief BAKPR DATA30 register */
    union
    {
        __IOM uint32_t DATA30;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA30_B;
    };

    /** @brief BAKPR DATA31 register */
    union
    {
        __IOM uint32_t DATA31;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA31_B;
    };

    /** @brief BAKPR DATA32 register */
    union
    {
        __IOM uint32_t DATA32;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA32_B;
    };

    /** @brief BAKPR DATA33 register */
    union
    {
        __IOM uint32_t DATA33;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA33_B;
    };

    /** @brief BAKPR DATA34 register */
    union
    {
        __IOM uint32_t DATA34;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA34_B;
    };

    /** @brief BAKPR DATA35 register */
    union
    {
        __IOM uint32_t DATA35;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA35_B;
    };

    /** @brief BAKPR DATA36 register */
    union
    {
        __IOM uint32_t DATA36;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA36_B;
    };

    /** @brief BAKPR DATA37 register */
    union
    {
        __IOM uint32_t DATA37;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA37_B;
    };

    /** @brief BAKPR DATA38 register */
    union
    {
        __IOM uint32_t DATA38;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA38_B;
    };

    /** @brief BAKPR DATA39 register */
    union
    {
        __IOM uint32_t DATA39;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA39_B;
    };

    /** @brief BAKPR DATA40 register */
    union
    {
        __IOM uint32_t DATA40;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA40_B;
    };

    /** @brief BAKPR DATA41 register */
    union
    {
        __IOM uint32_t DATA41;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA41_B;
    };

    /** @brief BAKPR DATA42 register */
    union
    {
        __IOM uint32_t DATA42;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA42_B;
    };
} BAKPR_T;

/**
 * @brief Timer register(TMR)
 */
typedef struct
{
    /** @brief Countrol register 1 */
    union
    {
        __IOM uint32_t CTRL1;

        struct
        {
            __IOM uint32_t CNTEN           : 1;
            __IOM uint32_t UD              : 1;
            __IOM uint32_t URSSEL          : 1;
            __IOM uint32_t SPMEN           : 1;
            __IOM uint32_t CNTDIR          : 1;
            __IOM uint32_t CAMSEL          : 2;
            __IOM uint32_t ARPEN           : 1;
            __IOM uint32_t CLKDIV          : 2;
            __IM  uint32_t RESERVED        : 22;
        } CTRL1_B;
    };

    /** @brief Countrol register 2 */
    union
    {
        __IOM uint32_t CTRL2;

        struct
        {
            __IOM uint32_t CCPEN           : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t CCUSEL          : 1;
            __IOM uint32_t CCDSEL          : 1;
            __IOM uint32_t MMSEL           : 3;
            __IOM uint32_t TI1SEL          : 1;
            __IOM uint32_t OC1OIS          : 1;
            __IOM uint32_t OC1NOIS         : 1;
            __IOM uint32_t OC2OIS          : 1;
            __IOM uint32_t OC2NOIS         : 1;
            __IOM uint32_t OC3OIS          : 1;
            __IOM uint32_t OC3NOIS         : 1;
            __IOM uint32_t OC4OIS          : 1;
            __IM  uint32_t RESERVED2       : 17;
        } CTRL2_B;
    };

    /** @brief Control register from mode */
    union
    {
        __IOM uint32_t SMCTRL;

        struct
        {
            __IOM uint32_t SMFSEL          : 3;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t TRGSEL          : 3;
            __IOM uint32_t MSMEN           : 1;
            __IOM uint32_t ETFCFG          : 4;
            __IOM uint32_t ETPCFG          : 2;
            __IOM uint32_t ECEN            : 1;
            __IOM uint32_t ETPOL           : 1;
            __IM  uint32_t RESERVED2       : 16;
        } SMCTRL_B;
    };

    /** @brief DMA and Interrupt enable register */
    union
    {
        __IOM  uint32_t DIEN;

        struct
        {
            __IOM uint32_t UIEN            : 1;
            __IOM uint32_t CC1IEN          : 1;
            __IOM uint32_t CC2IEN          : 1;
            __IOM uint32_t CC3IEN          : 1;
            __IOM uint32_t CC4IEN          : 1;
            __IOM uint32_t COMIEN          : 1;
            __IOM uint32_t TRGIEN          : 1;
            __IOM uint32_t BRKIEN          : 1;
            __IOM uint32_t UDIEN           : 1;
            __IOM uint32_t CC1DEN          : 1;
            __IOM uint32_t CC2DEN          : 1;
            __IOM uint32_t CC3DEN          : 1;
            __IOM uint32_t CC4DEN          : 1;
            __IOM uint32_t COMDEN          : 1;
            __IOM uint32_t TRGDEN          : 1;
            __IM  uint32_t RESERVED        : 17;
        } DIEN_B;
    };

    /** @brief Status register */
    union
    {
        __IOM  uint32_t STS;

        struct
        {
            __IOM uint32_t UIFLG           : 1;
            __IOM uint32_t CC1IFLG         : 1;
            __IOM uint32_t CC2IFLG         : 1;
            __IOM uint32_t CC3IFLG         : 1;
            __IOM uint32_t CC4IFLG         : 1;
            __IOM uint32_t COMIFLG         : 1;
            __IOM uint32_t TRGIFLG         : 1;
            __IOM uint32_t BRKIFLG         : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t CC1RCFLG        : 1;
            __IOM uint32_t CC2RCFLG        : 1;
            __IOM uint32_t CC3RCFLG        : 1;
            __IOM uint32_t CC4RCFLG        : 1;
            __IM  uint32_t RESERVED2       : 19;
        } STS_B;
    };

    /** @brief Software controls event generation registers */
    union
    {
        __OM  uint32_t CEG;

        struct
        {
            __OM  uint32_t UEG             : 1;
            __OM  uint32_t CC1EG           : 1;
            __OM  uint32_t CC2EG           : 1;
            __OM  uint32_t CC3EG           : 1;
            __OM  uint32_t CC4EG           : 1;
            __OM  uint32_t COMG            : 1;
            __OM  uint32_t TEG             : 1;
            __OM  uint32_t BEG             : 1;
            __OM  uint32_t RESERVED        : 24;
        } CEG_B;
    };

    /** @brief Capture the compare mode register 1 */
    union
    {
        __IOM uint32_t CCM1;

        /** @brief Compare mode */
        struct
        {
            __IOM uint32_t CC1SEL          : 2;
            __IOM uint32_t OC1FEN          : 1;
            __IOM uint32_t OC1PEN          : 1;
            __IOM uint32_t OC1MOD          : 3;
            __IOM uint32_t OC1CEN          : 1;
            __IOM uint32_t CC2SEL          : 2;
            __IOM uint32_t OC2FEN          : 1;
            __IOM uint32_t OC2PEN          : 1;
            __IOM uint32_t OC2MOD          : 3;
            __IOM uint32_t OC2CEN          : 1;
            __IM  uint32_t RESERVED        : 16;
        } CCM1_COMPARE_B;

        /** @brief Capture mode */
        struct
        {
            __IOM uint32_t CC1SEL          : 2;
            __IOM uint32_t IC1PSC          : 2;
            __IOM uint32_t IC1F            : 4;
            __IOM uint32_t CC2SEL          : 2;
            __IOM uint32_t IC2PSC          : 2;
            __IOM uint32_t IC2F            : 4;
            __IM  uint32_t RESERVED        : 16;
        } CCM1_CAPTURE_B;
    };

    /** @brief Capture the compare mode register 2 */
    union
    {
        __IOM uint32_t CCM2;

        /** @brief Compare mode */
        struct
        {
            __IOM uint32_t CC3SEL          : 2;
            __IOM uint32_t OC3FEN          : 1;
            __IOM uint32_t OC3PEN          : 1;
            __IOM uint32_t OC3MOD         : 3;
            __IOM uint32_t OC3CEN          : 1;
            __IOM uint32_t CC4SEL          : 2;
            __IOM uint32_t OC4FEN          : 1;
            __IOM uint32_t OC4PEN          : 1;
            __IOM uint32_t OC4MOD         : 3;
            __IOM uint32_t OC4CEN          : 1;
            __IM  uint32_t RESERVED        : 16;
        } CCM2_COMPARE_B;

        /** @brief Capture mode */
        struct
        {
            __IOM uint32_t CC3SEL          : 2;
            __IOM uint32_t IC3PSC          : 2;
            __IOM uint32_t IC3F            : 4;
            __IOM uint32_t CC4SEL          : 2;
            __IOM uint32_t IC4PSC          : 2;
            __IOM uint32_t IC4F            : 4;
            __IM  uint32_t RESERVED        : 16;
        } CCM2_CAPTURE_B;
    };

    /** @brief Channel control register */
    union
    {
        __IOM uint32_t CCEN;

        struct
        {
            __IOM uint32_t CC1EN           : 1;
            __IOM uint32_t CC1POL          : 1;
            __IOM uint32_t CC1NEN          : 1;
            __IOM uint32_t CC1NPOL         : 1;
            __IOM uint32_t CC2EN           : 1;
            __IOM uint32_t CC2POL          : 1;
            __IOM uint32_t CC2NEN          : 1;
            __IOM uint32_t CC2NPOL         : 1;
            __IOM uint32_t CC3EN           : 1;
            __IOM uint32_t CC3POL          : 1;
            __IOM uint32_t CC3NEN          : 1;
            __IOM uint32_t CC3NPOL         : 1;
            __IOM uint32_t CC4EN           : 1;
            __IOM uint32_t CC4POL          : 1;
            __IM uint32_t RESERVED         : 18;
        } CCEN_B;
    };

    /** @brief Counting register */
    union
    {
        __IOM uint32_t CNT;

        struct
        {
            __IOM uint32_t CNT             : 16;
            __IM  uint32_t RESERVED        : 16;
        } CNT_B;
    };

    /** @brief Division register */
    union
    {
        __IOM uint32_t PSC;

        struct
        {
            __IOM uint32_t PSC             : 16;
            __IM  uint32_t RESERVED        : 16;
        } PSC_B;
    };

    /** @brief Automatic reload register */
    union
    {
        __IOM uint32_t AUTORLD;

        struct
        {
            __IOM uint32_t AUTORLD         : 16;
            __IM  uint32_t RESERVED        : 16;
        } AUTORLD_B;
    };

    /** @brief Repeat count register */
    union
    {
        __IOM uint32_t REPCNT;

        struct
        {
            __IOM uint32_t REPCNT          : 8;
            __IM  uint32_t RESERVED        : 24;
        } REPCNT_B;
    };

    /** @brief Capture comparison register channel 1 */
    union
    {
        __IOM uint32_t CC1;

        struct
        {
            __IOM uint32_t CC1             : 16;
            __IM  uint32_t RESERVED        : 16;
        } CC1_B;
    };

    /** @brief Capture comparison register channel 2 */
    union
    {
        __IOM uint32_t CC2;

        struct
        {
            __IOM uint32_t CC2             : 16;
            __IM  uint32_t RESERVED        : 16;
        } CC2_B;
    };

    /** @brief Capture comparison register channel 3 */
    union
    {
        __IOM uint32_t CC3;

        struct
        {
            __IOM uint32_t CC3             : 16;
            __IM  uint32_t RESERVED        : 16;
        } CC3_B;
    };

    /** @brief Capture comparison register channel 4 */
    union
    {
        __IOM uint32_t CC4;

        struct
        {
            __IOM uint32_t CC4             : 16;
            __IM  uint32_t RESERVED        : 16;
        } CC4_B;
    };

    /** @brief Brake and dead zone registers */
    union
    {
        __IOM uint32_t BDT;

        struct
        {
            __IOM uint32_t DTS             : 8;
            __IOM uint32_t LOCKCFG         : 2;
            __IOM uint32_t IMOS            : 1;
            __IOM uint32_t RMOS            : 1;
            __IOM uint32_t BRKEN           : 1;
            __IOM uint32_t BRKPOL          : 1;
            __IOM uint32_t AOEN            : 1;
            __IOM uint32_t MOEN            : 1;
            __IM  uint32_t RESERVED        : 16;
        } BDT_B;
    };

    /** @brief DMA control register */
    union
    {
        __IOM uint32_t DCTRL;

        struct
        {
            __IOM uint32_t DBADDR          : 5;
            __IM  uint32_t RESERVED1       : 3;
            __IOM uint32_t DBLEN           : 5;
            __IM  uint32_t RESERVED2       : 19;
        } DCTRL_B;
    };

    /** @brief Consecutive DMA addresses */
    union
    {
        __IOM uint32_t DMADDR;
        struct
        {
            __IOM uint32_t DMADDR          : 16;
            __IM  uint32_t RESERVED2       : 16;
        } DMADDR_B;
    };

    /** @brief TMR2 option register */
    union
    {
        __IOM uint32_t OPT;
        struct
        {
            __IM  uint32_t RESERVED1       : 10;
            __IOM uint32_t RMPSEL          : 1;
            __IM  uint32_t RESERVED2       : 21;
        } OPT_B;
    };
} TMR_T;

/**
 * @brief    Direct Memory Access register(DMA)
 */
typedef struct
{
    /** @brief Interrupt status register */
    union
    {
        __IM uint32_t INTSTS;

        struct
        {
            __IM  uint32_t GINTFLG1        : 1;
            __IM  uint32_t TCFLG1          : 1;
            __IM  uint32_t HTFLG1          : 1;
            __IM  uint32_t TERRFLG1        : 1;
            __IM  uint32_t GINTFLG2        : 1;
            __IM  uint32_t TCFLG2          : 1;
            __IM  uint32_t HTFLG2          : 1;
            __IM  uint32_t TERRFLG2        : 1;
            __IM  uint32_t GINTFLG3        : 1;
            __IM  uint32_t TCFLG3          : 1;
            __IM  uint32_t HTFLG3          : 1;
            __IM  uint32_t TERRFLG3        : 1;
            __IM  uint32_t GINTFLG4        : 1;
            __IM  uint32_t TCFLG4          : 1;
            __IM  uint32_t HTFLG4          : 1;
            __IM  uint32_t TERRFLG4        : 1;
            __IM  uint32_t GINTFLG5        : 1;
            __IM  uint32_t TCFLG5          : 1;
            __IM  uint32_t HTFLG5          : 1;
            __IM  uint32_t TERRFLG5        : 1;
            __IM  uint32_t GINTFLG6        : 1;
            __IM  uint32_t TCFLG6          : 1;
            __IM  uint32_t HTFLG6          : 1;
            __IM  uint32_t TERRFLG6        : 1;
            __IM  uint32_t GINTFLG7        : 1;
            __IM  uint32_t TCFLG7          : 1;
            __IM  uint32_t HTFLG7          : 1;
            __IM  uint32_t TERRFLG7        : 1;
            __IM  uint32_t RESERVED        : 4;
        } INTSTS_B;
    };

    /** @brief Interrupt reset register */
    union
    {
        __OM uint32_t INTFCLR;

        struct
        {
            __OM  uint32_t GINTCLR1        : 1;
            __OM  uint32_t TCCLR1          : 1;
            __OM  uint32_t HTCLR1          : 1;
            __OM  uint32_t TERRCLR1        : 1;
            __OM  uint32_t GINTCLR2        : 1;
            __OM  uint32_t TCCLR2          : 1;
            __OM  uint32_t HTCLR2          : 1;
            __OM  uint32_t TERRCLR2        : 1;
            __OM  uint32_t GINTCLR3        : 1;
            __OM  uint32_t TCCLR3          : 1;
            __OM  uint32_t HTCLR3          : 1;
            __OM  uint32_t TERRCLR3        : 1;
            __OM  uint32_t GINTCLR4        : 1;
            __OM  uint32_t TCCLR4          : 1;
            __OM  uint32_t HTCLR4          : 1;
            __OM  uint32_t TERRCLR4        : 1;
            __OM  uint32_t GINTCLR5        : 1;
            __OM  uint32_t TCCLR5          : 1;
            __OM  uint32_t HTCLR5          : 1;
            __OM  uint32_t TERRCLR5        : 1;
            __OM  uint32_t GINTCLR6        : 1;
            __OM  uint32_t TCCLR6          : 1;
            __OM  uint32_t HTCLR6          : 1;
            __OM  uint32_t TERRCLR6        : 1;
            __OM  uint32_t GINTCLR7        : 1;
            __OM  uint32_t TCCLR7          : 1;
            __OM  uint32_t HTCLR7          : 1;
            __OM  uint32_t TERRCLR7        : 1;
            __IM  uint32_t RESERVED        : 4;
        } INTFCLR_B;
    };
} DMA_T;

/**
 * @brief DMA Channel register
 */
typedef struct
{
    /** @brief DMA Channel setup register */
    union
    {

        __IOM uint32_t CHCFG;

        struct
        {
            __IOM uint32_t CHEN            : 1;
            __IOM uint32_t TCINTEN         : 1;
            __IOM uint32_t HTINTEN         : 1;
            __IOM uint32_t TERRINTEN       : 1;
            __IOM uint32_t DIRCFG          : 1;
            __IOM uint32_t CIRMODE         : 1;
            __IOM uint32_t PERIMODE        : 1;
            __IOM uint32_t MIMODE          : 1;
            __IOM uint32_t PERSIZE         : 2;
            __IOM uint32_t MEMSIZE         : 2;
            __IOM uint32_t CHPL            : 2;
            __IOM uint32_t M2MMODE         : 1;
            __IM  uint32_t RESERVED        : 17;
        } CHCFG_B;
    };

    /** @brief DMA Channel transfer number register*/
    union
    {
        __IOM uint32_t CHNDATA;

        struct
        {
            __IOM uint32_t NDATA           : 16;
            __IM  uint32_t RESERVED        : 16;
        } CHNDATA_B;
    };

    /** @brief DMA Channel peripheral address register */
    union
    {
        __IOM uint32_t CHPADDR;

        struct
        {
            __IOM uint32_t PERADDR         : 32;
        } CHPADDR_B;
    };

    /** @brief DMA Channel memory address register */
    union
    {
        __IOM uint32_t CHMADDR;

        struct
        {
            __IOM uint32_t MEMADDR         : 32;
        } CHMADDR_B;
    };
} DMA_Channel_T;

/**
 * @brief CAN sending mailbox
 */
typedef struct
{
    /** @brief CAN Each mailbox contains the sending mailbox identifier register */
    union
    {
        __IOM uint32_t TXMID;

        struct
        {
            __IOM uint32_t TXMREQ          : 1;
            __IOM uint32_t TXRFREQ         : 1;
            __IOM uint32_t IDTYPESEL       : 1;
            __IOM uint32_t EXTID           : 18;
            __IOM uint32_t STDID           : 11;
        } TXMID_B;
    };

    /** @brief CAN Send the mailbox data length and timestamp register */
    union
    {
        __IOM uint32_t TXDLEN;

        struct
        {
            __IOM uint32_t DLCODE          : 4;
            __IM  uint32_t RESERVED1       : 28;
        } TXDLEN_B;
    };

    /** @brief CAN Send mailbox low byte data register */
    union
    {
        __IOM uint32_t TXMDL;

        struct
        {
            __IOM uint32_t DATABYTE0       : 8;
            __IOM uint32_t DATABYTE1       : 8;
            __IOM uint32_t DATABYTE2       : 8;
            __IOM uint32_t DATABYTE3       : 8;
        } TXMDL_B;
    };

    /** @brief CAN Send mailbox High byte data register */
    union
    {
        __IOM uint32_t TXMDH;

        struct
        {
            __IOM uint32_t DATABYTE4       : 8;
            __IOM uint32_t DATABYTE5       : 8;
            __IOM uint32_t DATABYTE6       : 8;
            __IOM uint32_t DATABYTE7       : 8;
        } TXMDH_B;
    };
} CAN_TxMailBox_T;

/**
 * @brief CAN receive mailbox
 */
typedef struct
{
    /** @brief CAN Each mailbox contains the receive mailbox identifier register */
    union
    {
        __IM uint32_t RXMID;

        struct
        {
            __IM  uint32_t RESERVED        : 1;
            __IM  uint32_t RFTXREQ         : 1;
            __IM  uint32_t IDTYPESEL       : 1;
            __IM  uint32_t EXTID           : 18;
            __IM  uint32_t STDID           : 11;
        } RXMID_B;
    };

    /** @brief CAN receive the mailbox data length and timestamp register */
    union
    {
        __IM uint32_t RXDLEN;

        struct
        {
            __IM  uint32_t DLCODE          : 4;
            __IM  uint32_t RESERVED1       : 4;
            __IM  uint32_t FMIDX           : 8;
            __IM  uint32_t RESERVED2       : 16;
        } RXDLEN_B;
    };

    /** @brief CAN receive mailbox low byte data register */
    union
    {
        __IM uint32_t RXMDL;

        struct
        {
            __IM  uint32_t DATABYTE0       : 8;
            __IM  uint32_t DATABYTE1       : 8;
            __IM  uint32_t DATABYTE2       : 8;
            __IM  uint32_t DATABYTE3       : 8;
        } RXMDL_B;
    };

    /** @briefCAN receive mailbox High byte data register */
    union
    {
        __IOM uint32_t RXMDH;

        struct
        {
            __IM  uint32_t DATABYTE4       : 8;
            __IM  uint32_t DATABYTE5       : 8;
            __IM  uint32_t DATABYTE6       : 8;
            __IM  uint32_t DATABYTE7       : 8;
        } RXMDH_B;
    };
} CAN_RxMailBox_T;

/**
 * @brief CAN Filter bank register
 */
typedef struct
{
    /** @brief CAN Filter bank register 1 */
    union
    {
        __IOM uint32_t  FBANK1;

        struct
        {
            __IOM uint32_t FBIT0           : 1;
            __IOM uint32_t FBIT1           : 1;
            __IOM uint32_t FBIT2           : 1;
            __IOM uint32_t FBIT3           : 1;
            __IOM uint32_t FBIT4           : 1;
            __IOM uint32_t FBIT5           : 1;
            __IOM uint32_t FBIT6           : 1;
            __IOM uint32_t FBIT7           : 1;
            __IOM uint32_t FBIT8           : 1;
            __IOM uint32_t FBIT9           : 1;
            __IOM uint32_t FBIT10          : 1;
            __IOM uint32_t FBIT11          : 1;
            __IOM uint32_t FBIT12          : 1;
            __IOM uint32_t FBIT13          : 1;
            __IOM uint32_t FBIT14          : 1;
            __IOM uint32_t FBIT15          : 1;
            __IOM uint32_t FBIT16          : 1;
            __IOM uint32_t FBIT17          : 1;
            __IOM uint32_t FBIT18          : 1;
            __IOM uint32_t FBIT19          : 1;
            __IOM uint32_t FBIT20          : 1;
            __IOM uint32_t FBIT21          : 1;
            __IOM uint32_t FBIT22          : 1;
            __IOM uint32_t FBIT23          : 1;
            __IOM uint32_t FBIT24          : 1;
            __IOM uint32_t FBIT25          : 1;
            __IOM uint32_t FBIT26          : 1;
            __IOM uint32_t FBIT27          : 1;
            __IOM uint32_t FBIT28          : 1;
            __IOM uint32_t FBIT29          : 1;
            __IOM uint32_t FBIT30          : 1;
            __IOM uint32_t FBIT31          : 1;
        } FBANK1_B;
    };

    /** @brief CAN Filter bank register 1 */
    union
    {
        __IOM uint32_t  FBANK2;

        struct
        {
            __IOM uint32_t FBIT0           : 1;
            __IOM uint32_t FBIT1           : 1;
            __IOM uint32_t FBIT2           : 1;
            __IOM uint32_t FBIT3           : 1;
            __IOM uint32_t FBIT4           : 1;
            __IOM uint32_t FBIT5           : 1;
            __IOM uint32_t FBIT6           : 1;
            __IOM uint32_t FBIT7           : 1;
            __IOM uint32_t FBIT8           : 1;
            __IOM uint32_t FBIT9           : 1;
            __IOM uint32_t FBIT10          : 1;
            __IOM uint32_t FBIT11          : 1;
            __IOM uint32_t FBIT12          : 1;
            __IOM uint32_t FBIT13          : 1;
            __IOM uint32_t FBIT14          : 1;
            __IOM uint32_t FBIT15          : 1;
            __IOM uint32_t FBIT16          : 1;
            __IOM uint32_t FBIT17          : 1;
            __IOM uint32_t FBIT18          : 1;
            __IOM uint32_t FBIT19          : 1;
            __IOM uint32_t FBIT20          : 1;
            __IOM uint32_t FBIT21          : 1;
            __IOM uint32_t FBIT22          : 1;
            __IOM uint32_t FBIT23          : 1;
            __IOM uint32_t FBIT24          : 1;
            __IOM uint32_t FBIT25          : 1;
            __IOM uint32_t FBIT26          : 1;
            __IOM uint32_t FBIT27          : 1;
            __IOM uint32_t FBIT28          : 1;
            __IOM uint32_t FBIT29          : 1;
            __IOM uint32_t FBIT30          : 1;
            __IOM uint32_t FBIT31          : 1;
        } FBANK2_B;
    };
} CAN_FilterRegister_T;

/**
 * @brief     Controller Area Network(CAN)
 */
typedef struct
{
    /** @brief CAN Master control register */
    union
    {
        __IOM uint32_t MCTRL;

        struct
        {
            __IOM uint32_t INITREQ         : 1;
            __IOM uint32_t SLEEPREQ        : 1;
            __IOM uint32_t TXFPCFG         : 1;
            __IOM uint32_t RXFLOCK         : 1;
            __IOM uint32_t ARTXMD          : 1;
            __IOM uint32_t AWUPCFG         : 1;
            __IOM uint32_t ALBOFFM         : 1;
            __IM  uint32_t RESERVED1       : 8;
            __IOM uint32_t SWRST           : 1;
            __IOM uint32_t DBGFRZE         : 1;
            __IM  uint32_t RESERVED2       : 15;
        } MCTRL_B;
    };

    /** @brief CAN Master States register */
    union
    {
        __IOM uint32_t MSTS;

        struct
        {
            __IM  uint32_t INITFLG         : 1;
            __IM  uint32_t SLEEPFLG        : 1;
            __IOM uint32_t ERRIFLG         : 1;
            __IOM uint32_t WUPIFLG         : 1;
            __IOM uint32_t SLEEPIFLG       : 1;
            __IM  uint32_t RESERVED1       : 3;
            __IM  uint32_t TXMFLG          : 1;
            __IM  uint32_t RXMFLG          : 1;
            __IM  uint32_t LSAMVALUE       : 1;
            __IM  uint32_t RXSIGL          : 1;
            __IM  uint32_t RESERVED2       : 20;
        } MSTS_B;
    };

    /** @brief CAN Send States register */
    union
    {
        __IOM uint32_t TXSTS;

        struct
        {
            __IOM uint32_t REQCFLG0        : 1;
            __IOM uint32_t TXSUSFLG0       : 1;
            __IOM uint32_t ARBLSTFLG0      : 1;
            __IOM uint32_t TXERRFLG0       : 1;
            __IM  uint32_t RESERVED1       : 3;
            __IOM uint32_t ABREQFLG0       : 1;
            __IOM uint32_t REQCFLG1        : 1;
            __IOM uint32_t TXSUSFLG1       : 1;
            __IOM uint32_t ARBLSTFLG1      : 1;
            __IOM uint32_t TXERRFLG1       : 1;
            __IM  uint32_t RESERVED2       : 3;
            __IOM uint32_t ABREQFLG1       : 1;
            __IOM uint32_t REQCFLG2        : 1;
            __IOM uint32_t TXSUSFLG2       : 1;
            __IOM uint32_t ARBLSTFLG2      : 1;
            __IOM uint32_t TXERRFLG2       : 1;
            __IM  uint32_t RESERVED3       : 3;
            __IOM uint32_t ABREQFLG2       : 1;
            __IM  uint32_t EMNUM           : 2;
            __IM  uint32_t TXMEFLG0        : 1;
            __IM  uint32_t TXMEFLG1        : 1;
            __IM  uint32_t TXMEFLG2        : 1;
            __IM  uint32_t LOWESTP0        : 1;
            __IM  uint32_t LOWESTP1        : 1;
            __IM  uint32_t LOWESTP2        : 1;
        } TXSTS_B;
    };

    /** @brief CAN Receive FIFO 0 register */
    union
    {
        __IOM uint32_t RXF0;

        struct
        {
            __IM  uint32_t FMNUM0          : 2;
            __IM  uint32_t RESERVED        : 1;
            __IOM uint32_t FFULLFLG0       : 1;
            __IOM uint32_t FOVRFLG0        : 1;
            __IOM uint32_t RFOM0           : 1;
            __IM  uint32_t RESERVED2       : 26;
        } RXF0_B;
    };

    /** @brief CAN Receive FIFO 1 register */
    union
    {
        __IOM uint32_t RXF1;

        struct
        {
            __IM  uint32_t FMNUM1          : 2;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t FFULLFLG1       : 1;
            __IOM uint32_t FOVRFLG1        : 1;
            __IOM uint32_t RFOM1           : 1;
            __IM  uint32_t RESERVED2       : 26;
        } RXF1_B;
    };

    /** @brief CAN Interrupts register */
    union
    {
        __IOM uint32_t INTEN;

        struct
        {
            __IOM uint32_t TXMEIEN         : 1;
            __IOM uint32_t FMIEN0          : 1;
            __IOM uint32_t FFULLIEN0       : 1;
            __IOM uint32_t FOVRIEN0        : 1;
            __IOM uint32_t FMIEN1          : 1;
            __IOM uint32_t FFULLIEN1       : 1;
            __IOM uint32_t FOVRIEN1        : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t ERRWIEN         : 1;
            __IOM uint32_t ERRPIEN         : 1;
            __IOM uint32_t BOFFIEN         : 1;
            __IOM uint32_t LECIEN          : 1;
            __IM  uint32_t RESERVED2       : 3;
            __IOM uint32_t ERRIEN          : 1;
            __IOM uint32_t WUPIEN          : 1;
            __IOM uint32_t SLEEPIEN        : 1;
            __IM  uint32_t RESERVED3       : 14;
        } INTEN_B;
    };

    /** @brief CAN Error States register */
    union
    {
        __IOM uint32_t ERRSTS;

        struct
        {
            __IM  uint32_t ERRWFLG         : 1;
            __IM  uint32_t ERRPFLG         : 1;
            __IM  uint32_t BOFLG           : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t LERRC           : 3;
            __IM  uint32_t RESERVED2       : 9;
            __IM  uint32_t TXERRCNT        : 8;
            __IM  uint32_t RXERRCNT        : 8;
        } ERRSTS_B;
    };

    /** @brief CAN Bit Time register */
    union
    {
        __IOM uint32_t BITTIM;

        struct
        {
            __IOM uint32_t BRPSC           : 10;
            __IM  uint32_t RESERVED1       : 6;
            __IOM uint32_t TIMSEG1         : 4;
            __IOM uint32_t TIMSEG2         : 3;
            __IM  uint32_t RESERVED2       : 1;
            __IOM uint32_t RSYNJW          : 2;
            __IM  uint32_t RESERVED3       : 4;
            __IOM uint32_t LBKMEN          : 1;
            __IOM uint32_t SILMEN          : 1;
        } BITTIM_B;
    };

    __IM uint32_t RESERVED0[88];

    CAN_TxMailBox_T sTxMailBox[3];
    CAN_RxMailBox_T sRxMailBox[2];

    __IM uint32_t RESERVED1[12];

    /** @brief CAN Filter the master control register */
    union
    {
        __IOM uint32_t FCTRL;

        struct
        {
            __IOM uint32_t FINITEN         : 1;
            __IM  uint32_t RESERVED0       : 7;
            __IOM uint32_t CAN2SB          : 6;
            __IM  uint32_t RESERVED1       : 18;
        } FCTRL_B;
    };

    /** @brief CAN Filter register */
    union
    {
        __IOM uint32_t FMCFG;

        struct
        {
            __IOM uint32_t FMCFG0          : 1;
            __IOM uint32_t FMCFG1          : 1;
            __IOM uint32_t FMCFG2          : 1;
            __IOM uint32_t FMCFG3          : 1;
            __IOM uint32_t FMCFG4          : 1;
            __IOM uint32_t FMCFG5          : 1;
            __IOM uint32_t FMCFG6          : 1;
            __IOM uint32_t FMCFG7          : 1;
            __IOM uint32_t FMCFG8          : 1;
            __IOM uint32_t FMCFG9          : 1;
            __IOM uint32_t FMCFG10         : 1;
            __IOM uint32_t FMCFG11         : 1;
            __IOM uint32_t FMCFG12         : 1;
            __IOM uint32_t FMCFG13         : 1;
            __IOM uint32_t FMCFG14         : 1;
            __IOM uint32_t FMCFG15         : 1;
            __IOM uint32_t FMCFG16         : 1;
            __IOM uint32_t FMCFG17         : 1;
            __IOM uint32_t FMCFG18         : 1;
            __IOM uint32_t FMCFG19         : 1;
            __IOM uint32_t FMCFG20         : 1;
            __IOM uint32_t FMCFG21         : 1;
            __IOM uint32_t FMCFG22         : 1;
            __IOM uint32_t FMCFG23         : 1;
            __IOM uint32_t FMCFG24         : 1;
            __IOM uint32_t FMCFG25         : 1;
            __IOM uint32_t FMCFG26         : 1;
            __IOM uint32_t FMCFG27         : 1;
            __IM  uint32_t RESERVED        : 4;
        } FMCFG_B;
    };

    __IM uint32_t RESERVED2;

    /** @brief CAN Filter bit scale register */
    union
    {
        __IOM uint32_t FSCFG;

        struct
        {
            __IOM uint32_t FSCFG0          : 1;
            __IOM uint32_t FSCFG1          : 1;
            __IOM uint32_t FSCFG2          : 1;
            __IOM uint32_t FSCFG3          : 1;
            __IOM uint32_t FSCFG4          : 1;
            __IOM uint32_t FSCFG5          : 1;
            __IOM uint32_t FSCFG6          : 1;
            __IOM uint32_t FSCFG7          : 1;
            __IOM uint32_t FSCFG8          : 1;
            __IOM uint32_t FSCFG9          : 1;
            __IOM uint32_t FSCFG10         : 1;
            __IOM uint32_t FSCFG11         : 1;
            __IOM uint32_t FSCFG12         : 1;
            __IOM uint32_t FSCFG13         : 1;
            __IOM uint32_t FSCFG14         : 1;
            __IOM uint32_t FSCFG15         : 1;
            __IOM uint32_t FSCFG16         : 1;
            __IOM uint32_t FSCFG17         : 1;
            __IOM uint32_t FSCFG18         : 1;
            __IOM uint32_t FSCFG19         : 1;
            __IOM uint32_t FSCFG20         : 1;
            __IOM uint32_t FSCFG21         : 1;
            __IOM uint32_t FSCFG22         : 1;
            __IOM uint32_t FSCFG23         : 1;
            __IOM uint32_t FSCFG24         : 1;
            __IOM uint32_t FSCFG25         : 1;
            __IOM uint32_t FSCFG26         : 1;
            __IOM uint32_t FSCFG27         : 1;
            __IM uint32_t RESERVED         : 4;
        }FSCFG_B;
    };

    __IM uint32_t RESERVED3;

    /** @brief CAN Filter FIFO associated registers */
    union
    {
        __IOM uint32_t FFASS;

        struct
        {
            __IOM uint32_t FFASS0          : 1;
            __IOM uint32_t FFASS1          : 1;
            __IOM uint32_t FFASS2          : 1;
            __IOM uint32_t FFASS3          : 1;
            __IOM uint32_t FFASS4          : 1;
            __IOM uint32_t FFASS5          : 1;
            __IOM uint32_t FFASS6          : 1;
            __IOM uint32_t FFASS7          : 1;
            __IOM uint32_t FFASS8          : 1;
            __IOM uint32_t FFASS9          : 1;
            __IOM uint32_t FFASS10         : 1;
            __IOM uint32_t FFASS11         : 1;
            __IOM uint32_t FFASS12         : 1;
            __IOM uint32_t FFASS13         : 1;
            __IOM uint32_t FFASS14         : 1;
            __IOM uint32_t FFASS15         : 1;
            __IOM uint32_t FFASS16         : 1;
            __IOM uint32_t FFASS17         : 1;
            __IOM uint32_t FFASS18         : 1;
            __IOM uint32_t FFASS19         : 1;
            __IOM uint32_t FFASS20         : 1;
            __IOM uint32_t FFASS21         : 1;
            __IOM uint32_t FFASS22         : 1;
            __IOM uint32_t FFASS23         : 1;
            __IOM uint32_t FFASS24         : 1;
            __IOM uint32_t FFASS25         : 1;
            __IOM uint32_t FFASS26         : 1;
            __IOM uint32_t FFASS27         : 1;
            __IM uint32_t RESERVED         : 4;
        } FFASS_B;
    };

    __IM uint32_t RESERVED4;

    /** @brief CAN Filter activation register */
    union
    {
        __IOM uint32_t FACT;

        struct
        {
            __IOM uint32_t FACT0           : 1;
            __IOM uint32_t FACT1           : 1;
            __IOM uint32_t FACT2           : 1;
            __IOM uint32_t FACT3           : 1;
            __IOM uint32_t FACT4           : 1;
            __IOM uint32_t FACT5           : 1;
            __IOM uint32_t FACT6           : 1;
            __IOM uint32_t FACT7           : 1;
            __IOM uint32_t FACT8           : 1;
            __IOM uint32_t FACT9           : 1;
            __IOM uint32_t FACT10          : 1;
            __IOM uint32_t FACT11          : 1;
            __IOM uint32_t FACT12          : 1;
            __IOM uint32_t FACT13          : 1;
            __IOM uint32_t FACT14          : 1;
            __IOM uint32_t FACT15          : 1;
            __IOM uint32_t FACT16          : 1;
            __IOM uint32_t FACT17          : 1;
            __IOM uint32_t FACT18          : 1;
            __IOM uint32_t FACT19          : 1;
            __IOM uint32_t FACT20          : 1;
            __IOM uint32_t FACT21          : 1;
            __IOM uint32_t FACT22          : 1;
            __IOM uint32_t FACT23          : 1;
            __IOM uint32_t FACT24          : 1;
            __IOM uint32_t FACT25          : 1;
            __IOM uint32_t FACT26          : 1;
            __IOM uint32_t FACT27          : 1;
            __IM uint32_t RESERVED         : 4;
        } FACT_B;
    };

    __IM uint32_t RESERVED5[8];

    CAN_FilterRegister_T sFilterRegister[28];

} CAN_T;

/**
 * @brief    I2C register (I2C)
 */
typedef struct
{
    /** @brief Control register 1 */
    union
    {
        __IOM uint32_t CTRL1;

        struct
        {
            __IOM uint32_t I2CEN           : 1;
            __IOM uint32_t SMBEN           : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t SMBTCFG         : 1;
            __IOM uint32_t ARPEN           : 1;
            __IOM uint32_t PECEN           : 1;
            __IOM uint32_t SRBEN           : 1;
            __IOM uint32_t CLKSTRETCHD     : 1;
            __IOM uint32_t START           : 1;
            __IOM uint32_t STOP            : 1;
            __IOM uint32_t ACKEN           : 1;
            __IOM uint32_t ACKPOS          : 1;
            __IOM uint32_t PEC             : 1;
            __IOM uint32_t ALERTEN         : 1;
            __IM  uint32_t RESERVED2       : 1;
            __IOM uint32_t SWRST           : 1;
            __IM  uint32_t RESERVED3       : 16;
        } CTRL1_B;
    } ;

    /** @brief Control register 2 */
    union
    {
        __IOM uint32_t CTRL2;

        struct
        {
            __IOM uint32_t CLKFCFG         : 6;
            __IM  uint32_t RESERVED1       : 2;
            __IOM uint32_t ERRIEN          : 1;
            __IOM uint32_t EVIEN           : 1;
            __IOM uint32_t BUFIEN          : 1;
            __IOM uint32_t DMAEN           : 1;
            __IOM uint32_t LTCFG           : 1;
            __IM  uint32_t RESERVED2       : 19;
        } CTRL2_B;
    } ;

    /** @brief Slave machine address register 1 */
    union
    {
        __IOM uint32_t SADDR1;

        struct
        {
            __IOM uint32_t ADDR0           : 1;
            __IOM uint32_t ADDR1_7         : 7;
            __IOM uint32_t ADDR8_9         : 2;
            __IM  uint32_t RESERVED1       : 5;
            __IOM uint32_t ADDRLEN         : 1;
            __IM  uint32_t RESERVED2       : 16;
        } SADDR1_B;
    };

    /** @brief Slave machine address register 2 */
    union
    {
        __IOM uint32_t SADDR2;

        struct
        {
            __IOM uint32_t ADDRNUM         : 1;
            __IOM uint32_t ADDR2           : 7;
            __IM  uint32_t RESERVED        : 24;
        } SADDR2_B;
    };

    /** @brief Cache data register */
    union
    {
        __IOM uint32_t DATA;

        struct
        {
            __IOM uint32_t DATA            : 8;
            __IM  uint32_t RESERVED        : 24;
        } DATA_B;
    };

    /** @brief Status register 1 */
    union
    {
        __IOM uint32_t STS1;

        struct
        {
            __IM  uint32_t STARTFLG        : 1;
            __IM  uint32_t ADDRFLG         : 1;
            __IM  uint32_t BTCFLG          : 1;
            __IM  uint32_t ADDR10FLG       : 1;
            __IM  uint32_t STOPFLG         : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IM  uint32_t RXBNEFLG        : 1;
            __IM  uint32_t TXBEFLG         : 1;
            __IOM uint32_t BERRFLG         : 1;
            __IOM uint32_t ALFLG           : 1;
            __IOM uint32_t AEFLG           : 1;
            __IOM uint32_t OVRURFLG        : 1;
            __IOM uint32_t PECEFLG         : 1;
            __IM  uint32_t RESERVED2       : 1;
            __IOM uint32_t TTEFLG          : 1;
            __IOM uint32_t SMBALTFLG       : 1;
            __IM  uint32_t RESERVED3       : 16;
        } STS1_B;
    };

    /** @brief Status register 2 */
    union
    {
        __IOM uint32_t STS2;

        struct
        {
            __IM  uint32_t MSFLG           : 1;
            __IM  uint32_t BUSBSYFLG       : 1;
            __IM  uint32_t TRFLG           : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IM  uint32_t GENCALLFLG      : 1;
            __IM  uint32_t SMBDADDRFLG     : 1;
            __IM  uint32_t SMMHADDR        : 1;
            __IM  uint32_t DUALADDRFLG     : 1;
            __IM  uint32_t PECVALUE        : 8;
            __IM  uint32_t RESERVED2       : 16;
        } STS2_B;
    };

    /** @brief Clock control register */
    union
    {
        __IOM uint32_t CLKCTRL;

        struct
        {
            __IOM uint32_t CLKS            : 12;
            __IM  uint32_t RESERVED1       : 2;
            __IOM uint32_t FDUTYCFG        : 1;
            __IOM uint32_t SPEEDCFG        : 1;
            __IM  uint32_t RESERVED2       : 16;
        } CLKCTRL_B;
    };

    /** @brief  Maximum rise time */
    union
    {
        __IOM uint32_t RISETMAX;

        struct
        {
            __IOM uint32_t RISETMAX        : 6;
            __IM  uint32_t RESERVED        : 26;
        } RISETMAX_B;
    };
} I2C_T;


typedef struct
{
    __IOM uint16_t RDP;
    __IOM uint16_t USER;
    __IOM uint16_t Data0;
    __IOM uint16_t Data1;
    __IOM uint16_t WRP0;
    __IOM uint16_t WRP1;
    __IOM uint16_t WRP2;
    __IOM uint16_t WRP3;
} OB_T;

/**
 * @brief Analog to Digital Converter(ADC)
 */
typedef struct
{

    /* Status register */
    union
    {
        __IOM uint32_t STS;

        struct
        {
            __IOM uint32_t AWDFLG          : 1;
            __IOM uint32_t EOCFLG          : 1;
            __IOM uint32_t INJEOCFLG       : 1;
            __IOM uint32_t INJCSFLG        : 1;
            __IOM uint32_t REGCSFLG        : 1;
            __IM  uint32_t RESERVED        : 27;
        } STS_B;
    };

    /* Control register1*/
    union
    {
        __IOM uint32_t CTRL1;

        struct
        {
            __IOM uint32_t AWDCHSEL        : 5;
            __IOM uint32_t EOCIEN          : 1;
            __IOM uint32_t AWDIEN          : 1;
            __IOM uint32_t INJEOCIEN       : 1;
            __IOM uint32_t SCANEN          : 1;
            __IOM uint32_t AWDSGLEN        : 1;
            __IOM uint32_t INJGACEN        : 1;
            __IOM uint32_t REGDISCEN       : 1;
            __IOM uint32_t INJDISCEN       : 1;
            __IOM uint32_t DISCNUMCFG      : 3;
            __IOM uint32_t DUALMCFG        : 4;
            __IM  uint32_t RESERVED1       : 2;
            __IOM uint32_t INJAWDEN        : 1;
            __IOM uint32_t REGAWDEN        : 1;
            __IM  uint32_t RESERVED2       : 8;
        } CTRL1_B;
    };

    /* Control register2*/
    union
    {
        __IOM uint32_t CTRL2;

        struct
        {
            __IOM uint32_t ADCEN           : 1;
            __IOM uint32_t CONTCEN         : 1;
            __IOM uint32_t CAL             : 1;
            __IOM uint32_t CALRST          : 1;
            __IM  uint32_t RESERVED1       : 4;
            __IOM uint32_t DMAEN           : 1;
            __IM  uint32_t RESERVED2       : 2;
            __IOM uint32_t DALIGNCFG       : 1;
            __IOM uint32_t INJGEXTTRGSEL   : 3;
            __IOM uint32_t INJEXTTRGEN     : 1;
            __IM  uint32_t RESERVED3       : 1;
            __IOM uint32_t REGEXTTRGSEL    : 3;
            __IOM uint32_t REGEXTTRGEN     : 1;
            __IOM uint32_t INJSWSC         : 1;
            __IOM uint32_t REGSWSC         : 1;
            __IOM uint32_t TSVREFEN        : 1;
            __IM  uint32_t RESERVED4       : 8;
        } CTRL2_B;
    };

    /* Sample time register1*/
    union
    {
        __IOM uint32_t SMPTIM1;

        struct
        {
            __IOM uint32_t SMPCYCCFG10     : 3;
            __IOM uint32_t SMPCYCCFG11     : 3;
            __IOM uint32_t SMPCYCCFG12     : 3;
            __IOM uint32_t SMPCYCCFG13     : 3;
            __IOM uint32_t SMPCYCCFG14     : 3;
            __IOM uint32_t SMPCYCCFG15     : 3;
            __IOM uint32_t SMPCYCCFG16     : 3;
            __IOM uint32_t SMPCYCCFG17     : 3;
            __IM  uint32_t RESERVED        : 8;
        } SMPTIM1_B;
    };

    /* Sample time register2*/
    union
    {
        __IOM uint32_t SMPTIM2;

        struct
        {
            __IOM uint32_t SMPCYCCFG0      : 3;
            __IOM uint32_t SMPCYCCFG1      : 3;
            __IOM uint32_t SMPCYCCFG2      : 3;
            __IOM uint32_t SMPCYCCFG3      : 3;
            __IOM uint32_t SMPCYCCFG4      : 3;
            __IOM uint32_t SMPCYCCFG5      : 3;
            __IOM uint32_t SMPCYCCFG6      : 3;
            __IOM uint32_t SMPCYCCFG7      : 3;
            __IOM uint32_t SMPCYCCFG8      : 3;
            __IOM uint32_t SMPCYCCFG9      : 3;
            __IM  uint32_t RESERVED        : 2;
        } SMPTIM2_B;
    };

    /* Injected channel Data offset register1*/
    union
    {
        __IOM uint32_t INJDOF1;

        struct
        {
            __IOM  uint32_t INJDOF1        : 12;
            __IM   uint32_t RESERVED       : 20;
        } INJDOF1_B;
    };

    /* Injected channel Data offset register2*/
    union
    {
        __IOM uint32_t INJDOF2;

        struct
        {
            __IOM  uint32_t INJDOF2        : 12;
            __IM   uint32_t RESERVED       : 20;
        } INJDOF2_B;
    };

    /* Injected channel Data offset register3*/
    union
    {
        __IOM uint32_t INJDOF3;

        struct
        {
            __IOM  uint32_t INJDOF3        : 12;
            __IM   uint32_t RESERVED       : 20;
        } INJDOF3_B;
    };

    /* Injected channel Data offset register4*/
    union
    {
        __IOM uint32_t INJDOF4;

        struct
        {
            __IOM  uint32_t INJDOF4        : 12;
            __IM   uint32_t RESERVED       : 20;
        } INJDOF4_B;
    };

    /* Analog watchdog high threshold register*/
    union
    {
        __IOM uint32_t AWDHT;

        struct
        {
            __IOM  uint32_t AWDHT          : 12;
            __IM   uint32_t RESERVED       : 20;
        } AWDHT_B;
    };

    /* Analog watchdog low threshold register*/
    union
    {
        __IOM uint32_t AWDLT;

        struct
        {
            __IOM  uint32_t AWDLT          : 12;
            __IM   uint32_t RESERVED       : 20;
        } AWDLT_B;
    };

    /* Regular channel sequence register1*/
    union
    {
        __IOM uint32_t REGSEQ1;

        struct
        {
            __IOM uint32_t REGSEQC13       : 5;
            __IOM uint32_t REGSEQC14       : 5;
            __IOM uint32_t REGSEQC15       : 5;
            __IOM uint32_t REGSEQC16       : 5;
            __IOM uint32_t REGSEQLEN       : 4;
            __IM  uint32_t RESERVED        : 8;
        } REGSEQ1_B;
    };

    /* Regular channel sequence register2*/
    union
    {
        __IOM uint32_t REGSEQ2;

        struct
        {
            __IOM uint32_t REGSEQC7        : 5;
            __IOM uint32_t REGSEQC8        : 5;
            __IOM uint32_t REGSEQC9        : 5;
            __IOM uint32_t REGSEQC10       : 5;
            __IOM uint32_t REGSEQC11       : 5;
            __IOM uint32_t REGSEQC12       : 5;
            __IM  uint32_t RESERVED        : 2;
        } REGSEQ2_B;
    };

    /* Regular channel sequence register3*/
    union
    {
        __IOM uint32_t REGSEQ3;

        struct
        {
            __IOM uint32_t REGSEQC1        : 5;
            __IOM uint32_t REGSEQC2        : 5;
            __IOM uint32_t REGSEQC3        : 5;
            __IOM uint32_t REGSEQC4        : 5;
            __IOM uint32_t REGSEQC5        : 5;
            __IOM uint32_t REGSEQC6        : 5;
            __IM  uint32_t RESERVED        : 2;
        } REGSEQ3_B;
    };

    /* Injected sequence register*/
    union
    {
        __IOM uint32_t INJSEQ;

        struct
        {
            __IOM uint32_t INJSEQC1        : 5;
            __IOM uint32_t INJSEQC2        : 5;
            __IOM uint32_t INJSEQC3        : 5;
            __IOM uint32_t INJSEQC4        : 5;
            __IOM uint32_t INJSEQLEN       : 2;
            __IM  uint32_t RESERVED        : 10;
        } INJSEQ_B;
    };

    /* Injected Data register1*/
    union
    {
        __IM uint32_t INJDATA1;

        struct
        {
            __IM   uint32_t INJDATA        : 16;
            __IM   uint32_t RESERVED       : 16;
        } INJDATA1_B;
    };

    /* Injected Data register2*/
    union
    {
        __IM uint32_t INJDATA2;

        struct
        {
            __IM   uint32_t INJDATA        : 16;
            __IM   uint32_t RESERVED       : 16;
        } INJDATA2_B;
    };

    /* Injected Data register3*/
    union
    {
        __IM uint32_t INJDATA3;

        struct
        {
            __IM   uint32_t INJDATA        : 16;
            __IM   uint32_t RESERVED       : 16;
        } INJDATA3_B;
    };

    /* Injected Data register4*/
    union
    {
        __IM uint32_t INJDATA4;

        struct
        {
            __IM   uint32_t INJDATA        : 16;
            __IM   uint32_t RESERVED       : 16;
        } INJDATA4_B;
    };

    /* Regular Data register*/
    union
    {
        __IOM uint32_t REGDATA;

        struct
        {
            __IM  uint32_t REGDATA         : 16;
            __IM  uint32_t ADC2REGDATA     : 16;
        } REGDATA_B;
    };
}ADC_T;

/**
 * @brief External Interrupt(EINT)
 */
typedef struct
{
    /* Interrupt mask register */
    union
    {
        __IOM uint32_t IMASK;

        struct
        {
            __IOM uint32_t IMASK0          : 1;
            __IOM uint32_t IMASK1          : 1;
            __IOM uint32_t IMASK2          : 1;
            __IOM uint32_t IMASK3          : 1;
            __IOM uint32_t IMASK4          : 1;
            __IOM uint32_t IMASK5          : 1;
            __IOM uint32_t IMASK6          : 1;
            __IOM uint32_t IMASK7          : 1;
            __IOM uint32_t IMASK8          : 1;
            __IOM uint32_t IMASK9          : 1;
            __IOM uint32_t IMASK10         : 1;
            __IOM uint32_t IMASK11         : 1;
            __IOM uint32_t IMASK12         : 1;
            __IOM uint32_t IMASK13         : 1;
            __IOM uint32_t IMASK14         : 1;
            __IOM uint32_t IMASK15         : 1;
            __IOM uint32_t IMASK16         : 1;
            __IOM uint32_t IMASK17         : 1;
            __IOM uint32_t IMASK18         : 1;
            __IM  uint32_t RESERVED        : 13;
        } IMASK_B;
    };

    /* Event mask register */
    union
    {
        __IOM uint32_t EMASK;

        struct
        {
            __IOM uint32_t EMASK0          : 1;
            __IOM uint32_t EMASK1          : 1;
            __IOM uint32_t EMASK2          : 1;
            __IOM uint32_t EMASK3          : 1;
            __IOM uint32_t EMASK4          : 1;
            __IOM uint32_t EMASK5          : 1;
            __IOM uint32_t EMASK6          : 1;
            __IOM uint32_t EMASK7          : 1;
            __IOM uint32_t EMASK8          : 1;
            __IOM uint32_t EMASK9          : 1;
            __IOM uint32_t EMASK10         : 1;
            __IOM uint32_t EMASK11         : 1;
            __IOM uint32_t EMASK12         : 1;
            __IOM uint32_t EMASK13         : 1;
            __IOM uint32_t EMASK14         : 1;
            __IOM uint32_t EMASK15         : 1;
            __IOM uint32_t EMASK16         : 1;
            __IOM uint32_t EMASK17         : 1;
            __IOM uint32_t EMASK18         : 1;
            __IM  uint32_t RESERVED        : 13;
        } EEN_B;
    };

    /* Rising Trigger Event Enable register */
    union
    {
        __IOM uint32_t RTEN;

        struct
        {
            __IOM uint32_t PTEN0           : 1;
            __IOM uint32_t PTEN1           : 1;
            __IOM uint32_t PTEN2           : 1;
            __IOM uint32_t PTEN3           : 1;
            __IOM uint32_t PTEN4           : 1;
            __IOM uint32_t PTEN5           : 1;
            __IOM uint32_t PTEN6           : 1;
            __IOM uint32_t PTEN7           : 1;
            __IOM uint32_t PTEN8           : 1;
            __IOM uint32_t PTEN9           : 1;
            __IOM uint32_t PTEN10          : 1;
            __IOM uint32_t PTEN11          : 1;
            __IOM uint32_t PTEN12          : 1;
            __IOM uint32_t PTEN13          : 1;
            __IOM uint32_t PTEN14          : 1;
            __IOM uint32_t PTEN15          : 1;
            __IOM uint32_t PTEN16          : 1;
            __IOM uint32_t PTEN17          : 1;
            __IOM uint32_t PTEN18          : 1;
            __IM  uint32_t RESERVED        : 13;
        } RTEN_B;
    };

    /* Falling Trigger Event Enable register */
    union
    {
        __IOM uint32_t FTEN;

        struct
        {
            __IOM uint32_t FTEN0           : 1;
            __IOM uint32_t FTEN1           : 1;
            __IOM uint32_t FTEN2           : 1;
            __IOM uint32_t FTEN3           : 1;
            __IOM uint32_t FTEN4           : 1;
            __IOM uint32_t FTEN5           : 1;
            __IOM uint32_t FTEN6           : 1;
            __IOM uint32_t FTEN7           : 1;
            __IOM uint32_t FTEN8           : 1;
            __IOM uint32_t FTEN9           : 1;
            __IOM uint32_t FTEN10          : 1;
            __IOM uint32_t FTEN11          : 1;
            __IOM uint32_t FTEN12          : 1;
            __IOM uint32_t FTEN13          : 1;
            __IOM uint32_t FTEN14          : 1;
            __IOM uint32_t FTEN15          : 1;
            __IOM uint32_t FTEN16          : 1;
            __IOM uint32_t FTEN17          : 1;
            __IOM uint32_t FTEN18          : 1;
            __IM  uint32_t RESERVED        : 13;
        } FTEN_B;
    };

    /* Software Interrupt Enable register */
    union
    {
        __IOM uint32_t SWINTE;

        struct
        {
            __IOM uint32_t SWINTE0         : 1;
            __IOM uint32_t SWINTE1         : 1;
            __IOM uint32_t SWINTE2         : 1;
            __IOM uint32_t SWINTE3         : 1;
            __IOM uint32_t SWINTE4         : 1;
            __IOM uint32_t SWINTE5         : 1;
            __IOM uint32_t SWINTE6         : 1;
            __IOM uint32_t SWINTE7         : 1;
            __IOM uint32_t SWINTE8         : 1;
            __IOM uint32_t SWINTE9         : 1;
            __IOM uint32_t SWINTE10        : 1;
            __IOM uint32_t SWINTE11        : 1;
            __IOM uint32_t SWINTE12        : 1;
            __IOM uint32_t SWINTE13        : 1;
            __IOM uint32_t SWINTE14        : 1;
            __IOM uint32_t SWINTE15        : 1;
            __IOM uint32_t SWINTE16        : 1;
            __IOM uint32_t SWINTE17        : 1;
            __IOM uint32_t SWINTE18        : 1;
            __IM  uint32_t RESERVED        : 13;
        } SWINTE_B;
    };

    /* Interrupt Flag Enable register */
    union
    {
        __IOM uint32_t IPEND;

        struct
        {
            __IOM uint32_t IPEND0          : 1;
            __IOM uint32_t IPEND1          : 1;
            __IOM uint32_t IPEND2          : 1;
            __IOM uint32_t IPEND3          : 1;
            __IOM uint32_t IPEND4          : 1;
            __IOM uint32_t IPEND5          : 1;
            __IOM uint32_t IPEND6          : 1;
            __IOM uint32_t IPEND7          : 1;
            __IOM uint32_t IPEND8          : 1;
            __IOM uint32_t IPEND9          : 1;
            __IOM uint32_t IPEND10         : 1;
            __IOM uint32_t IPEND11         : 1;
            __IOM uint32_t IPEND12         : 1;
            __IOM uint32_t IPEND13         : 1;
            __IOM uint32_t IPEND14         : 1;
            __IOM uint32_t IPEND15         : 1;
            __IOM uint32_t IPEND16         : 1;
            __IOM uint32_t IPEND17         : 1;
            __IOM uint32_t IPEND18         : 1;
            __IM  uint32_t RESERVED        : 13;
        } IF_B;
    };
}EINT_T;

/**
 * @brief Independent watchdog(IWDT)
 */
typedef struct
{

    /* Keyword register */
    union
    {
        __OM uint32_t KEY;

        struct
        {
            __OM  uint32_t KEY             : 16;
            __IM  uint32_t RESERVED        : 16;
        } KEY_B;
    };

    /* Frequency Divider register */
    union
    {
        __IOM uint32_t PSC;

        struct
        {
            __IOM uint32_t PSC             : 3;
            __IM  uint32_t RESERVED        : 29;
        } DIV_B;
    };

    /* Reload values register */
    union
    {
        __IOM uint32_t CNTRLD;

        struct
        {
            __IOM uint32_t CNTRLD          : 12;
            __IM  uint32_t RESERVED        : 20;
        } CNTRLD_B;
    };

    /* Status register */
    union
    {
        __IM uint32_t STS;

        struct
        {
            __IM  uint32_t PSCUFLG         : 1;
            __IM  uint32_t CNTUFLG         : 1;
            __IM  uint32_t RESERVED        : 30;
        } STS_B;
    };
}IWDT_T;

/**
 * @brief Serial peripheral interface(SPI)
 */
typedef struct
{
    /* Control register 1 */
    union
    {
        __IOM uint32_t CTRL1;

        struct
        {
            __IOM uint32_t CPHA            : 1;
            __IOM uint32_t CPOL            : 1;
            __IOM uint32_t MSMCFG          : 1;
            __IOM uint32_t BRSEL           : 3;
            __IOM uint32_t SPIEN           : 1;
            __IOM uint32_t LSBSEL          : 1;
            __IOM uint32_t ISSEL           : 1;
            __IOM uint32_t SSEN            : 1;
            __IOM uint32_t RXOMEN          : 1;
            __IOM uint32_t DFLSEL          : 1;
            __IOM uint32_t CRCNXT          : 1;
            __IOM uint32_t CRCEN           : 1;
            __IOM uint32_t BMOEN           : 1;
            __IOM uint32_t BMEN            : 1;
            __IM  uint32_t RESERVED        : 16;
        } CTRL1_B;
    };

    /* Control register 2 */
    union
    {
        __IOM uint32_t CTRL2;

        struct
        {
            __IOM uint32_t RXDEN           : 1;
            __IOM uint32_t TXDEN           : 1;
            __IOM uint32_t SSOEN           : 1;
            __IM  uint32_t RESERVED1       : 2;
            __IOM uint32_t ERRIEN          : 1;
            __IOM uint32_t RXBNEIEN        : 1;
            __IOM uint32_t TXBEIEN         : 1;
            __IM  uint32_t RESERVED2       : 24;
        } CTRL2_B;
    };

    /* Status register */
    union
    {
        __IOM uint32_t STS;

        struct
        {
            __IM  uint32_t RXBNEFLG        : 1;
            __IM  uint32_t TXBEFLG         : 1;
            __IM  uint32_t SCHDIR          : 1;
            __IM  uint32_t UDRFLG          : 1;
            __IOM uint32_t CRCEFLG         : 1;
            __IM  uint32_t MEFLG           : 1;
            __IM  uint32_t OVRFLG          : 1;
            __IM  uint32_t BSYFLG          : 1;
            __IM  uint32_t RESERVED        : 24;
        } STS_B;
    };

    /* Data register */
    union
    {
        __IOM uint32_t DATA;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA_B;
    };

    /* CRC polynomial register */
    union
    {
        __IOM uint32_t CRCPOLY;

        struct
        {
            __IOM uint32_t CRCPOLY         : 16;
            __IM  uint32_t RESERVED        : 16;
        } CRCPOLY_B;
    };

    /* Receive CRC register */
    union
    {
        __IM uint32_t RXCRC;

        struct
        {
            __IM  uint32_t RXCRC           : 16;
            __IM  uint32_t RESERVED        : 16;
        }RXCRC_B;
    };

    /* Transmit CRC register */
    union
    {
        __IM uint32_t TXCRC;

        struct
        {
            __IM  uint32_t TXCRC           : 16;
            __IM  uint32_t RESERVED        : 16;
        }TXCRC_B;
    };

    /* Transmit I2S CTRL register */
    union
    {
        __IOM uint32_t I2SCFG;

        struct
        {
            __IOM uint32_t CHLEN           : 1;
            __IOM uint32_t DATALEN         : 2;
            __IOM uint32_t CPOL            : 1;
            __IOM uint32_t I2SSSEL         : 2;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t PFSSEL          : 1;
            __IOM uint32_t I2SMOD          : 2;
            __IOM uint32_t I2SEN           : 1;
            __IOM uint32_t MODESEL         : 1;
            __IM  uint32_t RESERVED2       : 20;
        }I2SCFG_B;
    };

    /* Transmit I2S DIV register */
    union
    {
        __IOM uint32_t I2SPSC;

        struct
        {
            __IOM uint32_t I2SPSC          : 8;
            __IOM uint32_t ODDPSC          : 1;
            __IOM uint32_t MCOEN           : 1;
            __IM  uint32_t RESERVED1       : 22;
        }I2SPSC_B;
    };
}SPI_T;

/**
 * @brief Window watchdog (WWDT)
 */
typedef struct
{

    /* Control register */
    union
    {
        __IOM uint32_t CTRL;

        struct
        {
            __IOM uint32_t CNT             : 7;
            __IOM uint32_t WWDTEN          : 1;
            __IM  uint32_t RESERVED        : 24;
        } CTRL_B;
    };

    /* Configure register */
    union
    {
        __IOM uint32_t CFG;

        struct
        {
            __IOM uint32_t WIN             : 7;
            __IOM uint32_t TBPSC           : 2;
            __IOM uint32_t EWIEN           : 1;
            __IM  uint32_t RESERVED        : 22;
        } CFG_B;
    };

    /* Status register */
    union
    {
        __IOM uint32_t STS;

        struct
        {
            __IOM uint32_t EWIFLG          : 1;
            __IM  uint32_t RESERVED        : 31;
        } STS_B;
    };
}WWDT_T;

/**
  * @brief USB on-the-go full-speed and high-speed Global regs(OTG_FS_GLOBAL/OTG_HS_GLOBAL)
  */
typedef struct
{
    union
    {
        __IOM uint32_t word;


        struct
        {
            __IOM uint32_t INEPTXFRSA : 16;
            __IOM uint32_t INEPTXFDEP : 16;
        } bit;
    } ;
} REG_DTXFIFO1_T;


typedef struct
{

    union
    {
        __IOM uint32_t GCTRLSTS;

        struct
        {
            __IM  uint32_t SREQSUC    : 1;
            __IOM uint32_t SREQ       : 1;
            __IM  uint32_t RESERVED1  : 6;
            __IM  uint32_t HNSUC      : 1;
            __IOM uint32_t HNPREQ     : 1;
            __IOM uint32_t HHNPEN     : 1;
            __IOM uint32_t DHNPEN     : 1;
            __IM  uint32_t RESERVED2  : 4;
            __IM  uint32_t CIDSTS     : 1;
            __IM  uint32_t LSDEBT     : 1;
            __IM  uint32_t ASVD       : 1;
            __IM  uint32_t BSVD       : 1;
            __IM  uint32_t RESERVED3  : 12;
        } GCTRLSTS_B;
    } ;

    union
    {
        __IOM uint32_t GINT;

        struct
        {
            __IM  uint32_t RESERVED1  : 2;
            __IOM uint32_t SEFLG      : 1;
            __IM  uint32_t RESERVED2  : 5;
            __IOM uint32_t SREQSUCCHG : 1;
            __IOM uint32_t HNSUCCHG   : 1;
            __IM  uint32_t RESERVED3  : 7;
            __IOM uint32_t HNFLG      : 1;
            __IOM uint32_t ADTOFLG    : 1;
            __IOM uint32_t DEBDFLG    : 1;
            __IM  uint32_t RESERVED4  : 12;
        } GINT_B;
    } ;

    union
    {
        __IOM uint32_t GAHBCFG;

        struct
        {
            __IOM uint32_t GINTMASK   : 1;
            __IOM uint32_t BLT        : 4;
            __IOM uint32_t DMAEN      : 1;
            __IM  uint32_t RESERVED1  : 1;
            __IOM uint32_t TXFEL      : 1;
            __IOM uint32_t PTXFEL     : 1;
            __IM  uint32_t RESERVED2  : 23;
        } GAHBCFG_B;
    } ;

    union
    {
        __IOM uint32_t GUSBCFG;

        struct
        {
            __IOM uint32_t SEFLG      : 3;
            __IM  uint32_t RESERVED1  : 3;
            __OM  uint32_t FSSTSEL    : 1;
            __IM  uint32_t RESERVED2  : 1;
            __IOM uint32_t SRPEN      : 1;
            __IOM uint32_t HNPEN      : 1;
            __IOM uint32_t TRTIM      : 4;
            __IM  uint32_t RESERVED3  : 1;
            __IOM uint32_t PHYLPSEL   : 1;
            __IM  uint32_t RESERVED4  : 1;
            __IOM uint32_t ULPISEL    : 1;
            __IOM uint32_t ULPIAR     : 1;
            __IOM uint32_t ULPICLKP   : 1;
            __IOM uint32_t ULPIEVDSEL : 1;
            __IOM uint32_t ULPIEVC    : 1;
            __IOM uint32_t DPSEL      : 1;
            __IOM uint32_t SINI       : 1;
            __IOM uint32_t NPTHQ      : 1;
            __IOM uint32_t ULPIIPCDIS : 1;
            __IM  uint32_t RESERVED5  : 3;
            __IOM uint32_t FHMODE     : 1;
            __IOM uint32_t FDMODE     : 1;
            __IOM uint32_t CTXP       : 1;
        } GUSBCFG_B;
    } ;

    union
    {
        __IOM uint32_t GRSTCTRL;

        struct
        {
            __IOM uint32_t CSRST      : 1;
            __IOM uint32_t HSRST      : 1;
            __IOM uint32_t HFCNTRST   : 1;
            __IM  uint32_t RESERVED1  : 1;
            __IOM uint32_t RXFFLU     : 1;
            __IOM uint32_t TXFFLU     : 1;
            __IOM uint32_t TXFNUM     : 5;
            __IM  uint32_t RESERVED2  : 19;
            __IM  uint32_t DMAREQ     : 1;
            __IM  uint32_t AHBMIDL    : 1;
        } GRSTCTRL_B;
    } ;

    union
    {
        __IOM uint32_t GCINT;

        struct
        {
            __IM  uint32_t CURMOSEL   : 1;
            __IOM uint32_t MMIS       : 1;
            __IM  uint32_t OTG        : 1;
            __IOM uint32_t SOF        : 1;
            __IM  uint32_t RXFNONE    : 1;
            __IM  uint32_t NPTXFEM    : 1;
            __IM  uint32_t GINNPNAKE  : 1;
            __IM  uint32_t GONAKE     : 1;
            __IM  uint32_t RESERVED1  : 2;
            __IOM uint32_t ESUS       : 1;
            __IOM uint32_t USBSUS     : 1;
            __IOM uint32_t USBRST     : 1;
            __IOM uint32_t ENUMD      : 1;
            __IOM uint32_t ISOPD      : 1;
            __IOM uint32_t EOPF       : 1;
            __IM  uint32_t RESERVED2  : 2;
            __IM  uint32_t INEP       : 1;
            __IM  uint32_t ONEP       : 1;
            __IOM uint32_t IIINTX     : 1;
            __IOM uint32_t IP_OUTTX   : 1;
            __IOM uint32_t DFSUS      : 1;
            __IM  uint32_t RESERVED3  : 1;
            __IM  uint32_t HPORT      : 1;
            __IM  uint32_t HCHAN      : 1;
            __IM  uint32_t PTXFE      : 1;
            __IM  uint32_t RESERVED4  : 1;
            __IOM uint32_t CINSTSCHG  : 1;
            __IOM uint32_t DEDIS      : 1;
            __IOM uint32_t SREQ       : 1;
            __IOM uint32_t RWAKE      : 1;
        } GCINT_B;
    } ;

    union
    {
        __IOM uint32_t GINTMASK;

        struct
        {
            __IM  uint32_t RESERVED1  : 1;
            __IOM uint32_t MMISM      : 1;
            __IOM uint32_t OTGM       : 1;
            __IOM uint32_t SOFM       : 1;
            __IOM uint32_t RXFNONEM   : 1;
            __IOM uint32_t NPTXFEMM   : 1;
            __IOM uint32_t GINNPNAKEM : 1;
            __IOM uint32_t GONAKEM    : 1;
            __IM  uint32_t RESERVED2  : 2;
            __IOM uint32_t ESUSM      : 1;
            __IOM uint32_t USBSUSM    : 1;
            __IOM uint32_t USBRSTM    : 1;
            __IOM uint32_t ENUMDM     : 1;
            __IOM uint32_t ISOPDM     : 1;
            __IOM uint32_t EOPFM      : 1;
            __IM  uint32_t RESERVED3  : 1;
            __IOM uint32_t EPMISM     : 1;
            __IOM uint32_t INEPM      : 1;
            __IOM uint32_t OUTEPM     : 1;
            __IOM uint32_t IIINTXM    : 1;
            __IOM uint32_t IP_OUTTXM  : 1;
            __IOM uint32_t DFSUSM     : 1;
            __IM  uint32_t RESERVED4  : 1;
            __IM  uint32_t HPORTM     : 1;
            __IOM uint32_t HCHM       : 1;
            __IOM uint32_t PTXFEM     : 1;
            __IM  uint32_t RESERVED5  : 1;
            __IOM uint32_t CIDSTSTCM  : 1;
            __IOM uint32_t DEDISM     : 1;
            __IOM uint32_t SREQM      : 1;
            __IOM uint32_t RWAKEM     : 1;
        } GINTMASK_B;
    } ;

    union
    {
        __IM  uint32_t GRXSTS;

        struct
        {
            __IM  uint32_t CHNUM    : 4;
            __IM  uint32_t BCNT     : 11;
            __IM  uint32_t DPID     : 2;
            __IM  uint32_t PSTS     : 4;
            __IM  uint32_t RESERVED : 11;
        } GRXSTS_H_B;

        struct
        {
            __IM  uint32_t EPNUM    : 4;
            __IM  uint32_t BCNT     : 11;
            __IM  uint32_t DPID     : 2;
            __IM  uint32_t PSTS     : 4;
            __IM  uint32_t FNUM     : 4;
            __IM  uint32_t RESERVED : 7;
        } GRXSTS_D_B;
    } ;

    union
    {

        __IM  uint32_t GRXSTSP;

        struct
        {
            __IM  uint32_t CHNUM    : 4;
            __IM  uint32_t BCNT     : 11;
            __IM  uint32_t DPID     : 2;
            __IM  uint32_t PSTS     : 4;
            __IM  uint32_t RESERVED : 11;
        } GRXSTSP_H_B;

        struct
        {
            __IM  uint32_t EPNUM    : 4;
            __IM  uint32_t BCNT     : 11;
            __IM  uint32_t DPID     : 2;
            __IM  uint32_t PSTS     : 4;
            __IM  uint32_t FNUM     : 4;
            __IM  uint32_t RESERVED : 7;
        } GRXSTSP_D_B;

    };

    union
    {
        __IOM uint32_t GRXFIFO;

        struct
        {
            __IOM uint32_t RXFDEP     : 16;
            __IM  uint32_t RESERVED   : 16;
        } GRXFIFO_B;
    } ;

    union
    {
        __IOM uint32_t GTXFCFG;

        struct
        {
            __IOM uint32_t NPTXSA   : 16;
            __IOM uint32_t NPTXFDEP : 16;
        } GTXFCFG_H_B;

        struct
        {
            __IOM uint32_t EPTXSA   : 16;
            __IOM uint32_t EPTXFDEP : 16;
        } GTXFCFG_D_B;
    };

    union
    {
        __IM  uint32_t GNPTXFQSTS;


        struct
        {
            __IM  uint32_t NPTXFSA    : 16;
            __IM  uint32_t NPTXRSA    : 8;
            __IM  uint32_t NPTXRQ     : 7;
            __IM  uint32_t RESERVED   : 1;
        } GNPTXFQSTS_B;
    } ;
    __IM  uint32_t  RESERVED[2];

    union
    {
        __IOM uint32_t GGCCFG;

        struct
        {
            __IM  uint32_t RESERVED1  : 16;
            __IOM uint32_t PWEN       : 1;
            __IOM uint32_t I2CBEN     : 1;
            __IOM uint32_t ADVBSEN    : 1;
            __IOM uint32_t BDVBSEN    : 1;
            __IOM uint32_t SOFPOUT    : 1;
            __IOM uint32_t VBSDIS     : 1;
            __IM  uint32_t RESERVED2  : 10;
        } GGCCFG_B;
    } ;

    union
    {
        __IOM uint32_t GCID;

        struct
        {
            __IOM uint32_t PID        : 32;
        } GCID_B;
    } ;
    __IM  uint32_t  RESERVED1[48];

    union
    {
        __IOM uint32_t GHPTXFSIZE;

        struct
        {
            __IOM uint32_t HPDTXFSA   : 16;
            __IOM uint32_t HPDTXFDEP  : 16;
        } GHPTXFSIZE_B;
    } ;

    REG_DTXFIFO1_T DTXFIFO[15];
} USB_OTG_GLOBAL_T;

typedef struct
{
    union
    {
        __IOM uint32_t HCH;

        struct
        {
            __IOM uint32_t MAXPSIZE   : 11;
            __IOM uint32_t EDPNUM     : 4;
            __IOM uint32_t EDPDRT     : 1;
            __IM  uint32_t RESERVED1  : 1;
            __IOM uint32_t LSDV       : 1;
            __IOM uint32_t EDPTYP     : 2;
            __IOM uint32_t CNTSEL     : 2;
            __IOM uint32_t DVADDR     : 7;
            __IOM uint32_t ODDF       : 1;
            __IOM uint32_t CHINT      : 1;
            __IOM uint32_t CHEN       : 1;
        } HCH_B;
    } ;

    __IM  uint32_t  RESERVED1;

    union
    {
        __IOM uint32_t HCHINT;

        struct
        {
            __IOM uint32_t TSFCMPN    : 1;
            __IOM uint32_t TSFCMPAN   : 1;
            __IM  uint32_t RESERVED1  : 1;
            __IOM uint32_t RXSTALL    : 1;
            __IOM uint32_t RXNAK      : 1;
            __IOM uint32_t RXTXACK    : 1;
            __IM  uint32_t RESERVED2  : 1;
            __IOM uint32_t TERR       : 1;
            __IOM uint32_t BABBLE     : 1;
            __IOM uint32_t FOVR       : 1;
            __IOM uint32_t DTOG       : 1;
            __IM  uint32_t RESERVED3  : 21;
        } HCHINT_B;
    } ;

    union
    {
        __IOM uint32_t HCHIMASK;

        struct
        {
            __IOM uint32_t TSFCMPNM   : 1;
            __IOM uint32_t TSFCMPANM  : 1;
            __IM  uint32_t RESERVED1  : 1;
            __IOM uint32_t RXSTALLM   : 1;
            __IOM uint32_t RXNAKM     : 1;
            __IOM uint32_t RXTXACKM   : 1;
            __IOM uint32_t RXNYETM    : 1;
            __IOM uint32_t TERRM      : 1;
            __IOM uint32_t BABBLEM    : 1;
            __IOM uint32_t FOVRM      : 1;
            __IOM uint32_t DTOGM      : 1;
            __IM  uint32_t RESERVED3  : 21;
        } HCHIMASK_B;
    } ;

    union
    {
        __IOM uint32_t HCHTSIZE;

        struct
        {
            __IOM uint32_t TSFSIZE    : 19;
            __IOM uint32_t PCKTCNT    : 10;
            __IOM uint32_t DATAPID    : 2;
            __IM  uint32_t RESERVED1  : 1;
        } HCHTSIZE_B;
    } ;

    union
    {
        __IOM uint32_t HCHDMA;

        struct
        {
            __IOM uint32_t ADDR       : 32;
        } HCHDMA_B;
    } ;
    __IM  uint32_t  RESERVED2[2];
} HCH_REGS_T;
/**
  * @brief USB on-the-go full-speed (OTG_FS_HOST)
  */

typedef struct
{

    union
    {
        __IOM uint32_t HCFG;

        struct
        {
            __IOM uint32_t PHYCLKSEL  : 2;
            __IM  uint32_t FSSPT      : 1;
            __IM  uint32_t RESERVED   : 29;
        } HCFG_B;
    } ;

    union
    {
        __IOM uint32_t HFIVL;

        struct
        {
            __IOM uint32_t FIVL       : 16;
            __IM  uint32_t RESERVED   : 16;
        } HFIVL_B;
    } ;

    union
    {
        __IM  uint32_t HFIFM;


        struct
        {
            __IM  uint32_t FNUM       : 16;
            __IM  uint32_t FRTIME     : 16;
        } HFIFM_B;
    } ;
    __IM  uint32_t  RESERVED;

    union
    {
        __IOM uint32_t HPTXSTS;


        struct
        {
            __IOM uint32_t FSPACE     : 16;
            __IM  uint32_t QSPACE     : 8;
            __IM  uint32_t QTOP       : 8;
        } HPTXSTS_B;
    } ;

    union
    {
        __IM  uint32_t HACHINT;

        struct
        {
            __IM  uint32_t ACHINT     : 16;
            __IM  uint32_t RESERVED   : 16;
        } HACHINT_B;
    } ;

    union
    {
        __IOM uint32_t HACHIMASK;

        struct
        {
            __IOM uint32_t ACHIMASK   : 16;
            __IM  uint32_t RESERVED   : 16;
        } HACHIMASK_B;
    } ;
    __IM  uint32_t  RESERVED1[9];

    union
    {
        __IOM uint32_t HPORTCSTS;

        struct
        {
            __IM  uint32_t PCNNTFLG   : 1;
            __IOM uint32_t PCINTFLG   : 1;
            __IOM uint32_t PEN        : 1;
            __IOM uint32_t PENCHG     : 1;
            __IM  uint32_t POVC       : 1;
            __IOM uint32_t POVCCHG    : 1;
            __IOM uint32_t PRS        : 1;
            __IOM uint32_t PSUS       : 1;
            __IOM uint32_t PRST       : 1;
            __IM  uint32_t RESERVED1  : 1;
            __IM  uint32_t PDLSTS     : 2;
            __IOM uint32_t PP         : 1;
            __IOM uint32_t PTSEL      : 4;
            __IM  uint32_t PSPDSEL    : 2;
            __IM  uint32_t RESERVED2  : 13;
        } HPORTCSTS_B;
    } ;
    __IM  uint32_t  RESERVED2[47];

    HCH_REGS_T REGS_HCH[12];

} USB_OTG_HOST_T;


/**
  * @brief IN endpoint type define
  */
typedef struct
{
    /*!< (offset Add: 0x100 + 0x20 * m; m = 0~3) OTG_FS device control IN endpoint x control register (OTG_FS_DIEPCTLx)*/
    union
    {
        __IOM uint32_t DIEPCTRL;

        struct
        {
            __IOM uint32_t MAXPS      : 11;
            __IM  uint32_t RESERVED1  : 4;
            __IOM uint32_t USBAEP     : 1;
            __IM  uint32_t EOF_PID    : 1;
            __IM  uint32_t NAKSTS     : 1;
            __IOM uint32_t EPTYPE     : 2;
            __IM  uint32_t RESERVED2  : 1;
            __IOM uint32_t STALLH     : 1;
            __IOM uint32_t TXFNUM     : 4;
            __OM  uint32_t NAKCLR     : 1;
            __OM  uint32_t NAKSET     : 1;
            __OM  uint32_t DPIDSET    : 1;
            __OM  uint32_t OFSET      : 1;
            __IOM uint32_t EPDIS      : 1;
            __IOM uint32_t EPEN       : 1;
        } DIEPCTRL_B;
    } ;

    __IM  uint32_t  RESERVED1;

    /*!< (offset Add: 0x108 + 0x20 * m; m = 0~3) device endpoint-x interrupt register */
    union
    {
        __IOM uint32_t DIEPINT;

        struct
        {
            __IOM uint32_t TSFCMP     : 1;
            __IOM uint32_t EPDIS      : 1;
            __IM  uint32_t RESERVED1  : 1;
            __IOM uint32_t TO         : 1;
            __IOM uint32_t ITXEMP     : 1;
            __IM  uint32_t RESERVED2  : 1;
            __IOM uint32_t IEPNAKE    : 1;
            __IM  uint32_t TXFE       : 1;
            __IM  uint32_t RESERVED3  : 24;
        } DIEPINT_B;
    } ;

    __IM  uint32_t  RESERVED2;

    /*!< (offset Add: 0x110 + 0x20 * m; m = 0~3) device endpoint-0 transfer size register */
    union
    {
        __IOM uint32_t DIEPTRS;

        struct
        {
            __IOM uint32_t EPTRS      : 19;
            __IOM uint32_t EPPCNT     : 10;
            __IOM uint32_t TXDCNT     : 2;
            __IM  uint32_t RESERVED   : 1;
        } DIEPTRS_B;
    } ;

    union
    {
        __IOM uint32_t DIEPDMA;

        struct
        {
            __IOM uint32_t DMAADDR    : 32;
        } DIEPDMA_B;
    } ;

    /*!< (offset Add: 0x118 + 0x20 * m; m = 0~3) OTG_FS device IN endpoint transmit FIFO status
                        register                                                   */
    union
    {
        __IM  uint32_t DITXFSTS;

        struct
        {
            __IM  uint32_t INEPTXFSA : 16;
            __IM  uint32_t RESERVED  : 16;
        } DITXFSTS_B;
    } ;

    __IM  uint32_t  RESERVED4;

} IN_EP_T;

/**
  * @brief OUT endpoint type define
  */
typedef struct
{
    /*!< (offset Add: 0x300 + 0x20 * m; m = 0~3) device endpoint control register */
    union
    {
        __IOM uint32_t DOEPCTRL;

        struct
        {
            __IOM uint32_t MAXPS          : 11;
            __IM  uint32_t RESERVED1      : 4;
            __IOM uint32_t USBAEP         : 1;
            __IM  uint32_t EOF_PID        : 1;
            __IM  uint32_t NAKSTS         : 1;
            __IOM uint32_t EPTYPE         : 2;
            __IOM uint32_t SNMEN          : 1;
            __IOM uint32_t STALLH         : 1;
            __IM  uint32_t RESERVED2      : 4;
            __OM  uint32_t NAKCLR         : 1;
            __OM  uint32_t NAKSET         : 1;
            __OM  uint32_t DPIDSET        : 1;
            __OM  uint32_t OFSET          : 1;
            __IOM uint32_t EPDIS          : 1;
            __IOM uint32_t EPEN           : 1;
        } DOEPCTRL_B;
    } ;

    __IM  uint32_t  RESERVED1;

    /*!< (offset Add: 0x308 + 0x20 * m; m = 0~3) device endpoint interrupt register */
    union
    {
        __IOM uint32_t DOEPINT;

        struct
        {
            __IOM uint32_t TSFCMP     : 1;
            __IOM uint32_t EPDIS      : 1;
            __IM  uint32_t RESERVED1  : 1;
            __IOM uint32_t SETPCMP    : 1;
            __IOM uint32_t RXOTDIS    : 1;
            __IM  uint32_t RESERVED2  : 1;
            __IOM uint32_t RXBSP      : 1;
            __IM  uint32_t RESERVED3  : 7;
            __IOM uint32_t NYET       : 1;
        } DOEPINT_B;
    } ;

    __IM  uint32_t  RESERVED2;

    /*!< (offset Add: 0x310 + 0x20 * m; m = 1~3) device OUT endpoint transfer size register */
    union
    {
        __IOM uint32_t DOEPTRS;

        struct
        {
            __IOM uint32_t EPTRS        : 19;
            __IOM uint32_t EPPCNT       : 10;
            __IOM uint32_t PID_SPCNT    : 2;
            __IM  uint32_t RESERVED1    : 1;
        } DOEPTRS_B;

    } ;

    union
    {
        __IOM uint32_t DOEPDMA;

        struct
        {
            __IOM uint32_t DMAADDR    : 32;
        } DOEPDMA_B;
    } ;
    __IM  uint32_t  RESERVED3[2];

} OUT_EP_T;

/**
  * @brief USB on-the-go full-speed (OTG_FS_DEVICE)
  */

typedef struct
{

    union
    {
        __IOM uint32_t DCFG;

        struct
        {
            __IOM uint32_t DSPDSEL    : 2;
            __IOM uint32_t SENDOUT    : 1;
            __IM  uint32_t RESERVED1  : 1;
            __IOM uint32_t DADDR      : 7;
            __IOM uint32_t PFITV      : 2;
            __IM  uint32_t RESERVED2  : 19;
        } DCFG_B;
    } ;

    union
    {
        __IOM uint32_t DCTRL;

        struct
        {
            __IOM uint32_t RWKUPS     : 1;
            __IOM uint32_t SDCNNT     : 1;
            __IM  uint32_t GINAKSTS   : 1;
            __IM  uint32_t GONAKSTS   : 1;
            __IOM uint32_t TESTSEL    : 3;
            __OM  uint32_t GINAKSET   : 1;
            __OM  uint32_t GINAKCLR   : 1;
            __OM  uint32_t GONAKSET   : 1;
            __OM  uint32_t GONAKCLR   : 1;
            __IOM uint32_t POPROGCMP  : 1;
            __IM  uint32_t RESERVED1  : 20;
        } DCTRL_B;
    } ;

    union
    {
        __IM  uint32_t DSTS;

        struct
        {
            __IM  uint32_t SUSSTS     : 1;
            __IM  uint32_t ENUMSPD    : 2;
            __IM  uint32_t ERTERR     : 1;
            __IM  uint32_t RESERVED1  : 4;
            __IM  uint32_t SOFNUM     : 14;
            __IM  uint32_t RESERVED2  : 10;
        } DSTS_B;
    } ;
    __IM  uint32_t  RESERVED;

    union
    {
        __IOM uint32_t DINIMASK;


        struct
        {
            __IOM uint32_t TSFCMPM    : 1;
            __IOM uint32_t EPDISM     : 1;
            __IM  uint32_t RESERVED1  : 1;
            __IOM uint32_t TOM        : 1;
            __IOM uint32_t ITXEMPM    : 1;
            __IOM uint32_t IEPMMM     : 1;
            __IOM uint32_t IEPNAKEM   : 1;
            __IM  uint32_t RESERVED2  : 25;
        } DINIMASK_B;
    } ;

    union
    {
        __IOM uint32_t DOUTIMASK;


        struct
        {
            __IOM uint32_t TSFCMPM    : 1;
            __IOM uint32_t EPDISM     : 1;
            __IM  uint32_t RESERVED1  : 1;
            __IOM uint32_t SETPCMPM   : 1;
            __IOM uint32_t OTXEMPM    : 1;
            __IM  uint32_t RESERVED2  : 27;
        } DOUTIMASK_B;
    } ;

    union
    {
        __IM  uint32_t DAEPINT;

        struct
        {
            __IM  uint32_t INEPINT    : 16;
            __IM  uint32_t OUTEPINT   : 16;
        } DAEPINT_B;
    } ;

    union
    {
        __IOM uint32_t DAEPIMASK;

        struct
        {
            __IOM uint32_t AINM       : 16;
            __IOM uint32_t AOUTM      : 16;
        } DAEPIMASK_B;
    } ;
    __IM  uint32_t  RESERVED1[2];

    union
    {
        __IOM uint32_t DVBUSDTIM;

        struct
        {
            __IOM uint32_t VBUSDTIM   : 16;
            __IM  uint32_t RESERVED   : 16;
        } DVBUSDTIM_B;
    } ;

    union
    {
        __IOM uint32_t DVBUSPTIM;

        struct
        {
            __IOM uint32_t VBUSPTIM   : 12;
            __IM  uint32_t RESERVED   : 20;
        } DVBUSPTIM_B;
    } ;

    union
    {
        __IOM uint32_t DTHCTRL;

        struct
        {
            __IOM uint32_t NSINTHEN   : 1;
            __IOM uint32_t SINTHEN    : 1;
            __IOM uint32_t TXTHLTH    : 9;
            __IM  uint32_t RESERVED1  : 5;
            __IOM uint32_t RXTHEN     : 1;
            __IOM uint32_t RXTHLTH    : 9;
            __IM  uint32_t RESERVED2  : 1;
            __IOM uint32_t APARKEN    : 1;
            __IM  uint32_t RESERVED3  : 4;
        } DTHCTRL_B;
    } ;

    union
    {
        __IOM uint32_t DIEIMASK;

        struct
        {
            __IOM uint32_t INEM       : 16;
            __IM  uint32_t RESERVED   : 16;
        } DIEIMASK_B;
    } ;

    union
    {
        __IOM uint32_t DEPINT;

        struct
        {
            __IM  uint32_t RESERVED1  : 1;
            __IOM uint32_t IN1INT     : 1;
            __IM  uint32_t RESERVED2  : 15;
            __IOM uint32_t OUT1INT    : 1;
            __IM  uint32_t RESERVED3  : 14;
        } DEPINT_B;
    } ;

    union
    {
        __IOM uint32_t DEPIMASK;


        struct
        {
            __IM  uint32_t RESERVED1  : 1;
            __IOM uint32_t IN1M       : 1;
            __IM  uint32_t RESERVED2  : 15;
            __IOM uint32_t OUT1M      : 1;
            __IM  uint32_t RESERVED3  : 14;
        } DEPIMASK_B;
    } ;
    __IM  uint32_t  RESERVED2;

    union
    {
        __IOM uint32_t DIN1IMASK;

        struct
        {
            __IOM uint32_t TSFCMPM    : 1;
            __IOM uint32_t EPDISM     : 1;
            __IM  uint32_t RESERVED1  : 1;
            __IOM uint32_t TOM        : 1;
            __IOM uint32_t ITXEMPM    : 1;
            __IOM uint32_t IEPMMM     : 1;
            __IOM uint32_t IEPNAKEM   : 1;
            __IM  uint32_t RESERVED2  : 1;
            __IOM uint32_t TXFUDRM    : 1;
            __IOM uint32_t BNAM       : 1;
            __IM  uint32_t RESERVED3  : 3;
            __IOM uint32_t NAKM       : 1;
            __IM  uint32_t RESERVED4  : 18;
        } DIN1IMASK_B;
    } ;
    __IM  uint32_t  RESERVED3[15];

    union
    {
        __IOM uint32_t DOUT1MASK;

        struct
        {
            __IOM uint32_t TSFCMPM    : 1;
            __IOM uint32_t EPDISM     : 1;
            __IOM uint32_t AHBERRIM   : 1;
            __IM  uint32_t RESERVED1  : 5;
            __IOM uint32_t OPERRM     : 1;
            __IOM uint32_t BNAM       : 1;
            __IM  uint32_t RESERVED2  : 2;
            __IOM uint32_t BERRM      : 1;
            __IOM uint32_t NAKM       : 1;
            __IOM uint32_t NYETM      : 1;
            __IM  uint32_t RESERVED3  : 17;
        } DOUT1MASK_B;
    } ;
    __IM  uint32_t  RESERVED4[30];

    IN_EP_T EP_IN[8];

    __IM  uint32_t  RESERVED5[64];

    OUT_EP_T EP_OUT[8];

} USB_OTG_DEVICE_T;


/**
  * @brief USB on-the-go full-speed (OTG_FS_PWRCLK)
  */

typedef struct
{

    union
    {
        __IOM uint32_t PCGCTRL;

        struct
        {
            __IOM uint32_t PCLKSTOP   : 1;
            __IOM uint32_t GCLK       : 1;
            __IM  uint32_t RESERVED1  : 2;
            __IOM uint32_t PHYSUS     : 1;
            __IM  uint32_t RESERVED2  : 27;
        } PCGCTRL_B;
    } ;
} USB_OTG_PWRCLK_T;

/**
  * @brief USB on-the-go full-speed (OTG_FS_FIFO)
  */
typedef struct
{
    __IOM uint32_t DATA;

    __IM uint32_t RESERVED[1023];
} USB_OTG_FIFO_DATA_T;

typedef struct
{
    USB_OTG_FIFO_DATA_T FIFO[11];

} USB_OTG_FIFO_T;


/**@} end of group Peripheral_registers_structures */

/** @defgroup Peripheral_memory_map
  @{
*/

/* FMC base address in the alias region */
#define FMC_BASE                ((uint32_t)0x08000000)
/* SRAM base address in the alias region */
#define SRAM_BASE               ((uint32_t)0x20000000)
/* Peripheral base address in the alias region */
#define PERIPH_BASE             ((uint32_t)0x40000000)

/* Peripheral memory map */
#define APB1PERIPH_BASE         PERIPH_BASE
#define APB2PERIPH_BASE         (PERIPH_BASE + 0x10000)
#define AHBPERIPH_BASE          (PERIPH_BASE + 0x20000)

#define TMR2_BASE               (APB1PERIPH_BASE + 0x0000)
#define TMR3_BASE               (APB1PERIPH_BASE + 0x0400)
#define TMR4_BASE               (APB1PERIPH_BASE + 0x0800)
#define TMR5_BASE               (APB1PERIPH_BASE + 0x0C00)
#define RTC_BASE                (APB1PERIPH_BASE + 0x2800)
#define WWDT_BASE               (APB1PERIPH_BASE + 0x2C00)
#define IWDT_BASE               (APB1PERIPH_BASE + 0x3000)
#define SPI2_BASE               (APB1PERIPH_BASE + 0x3800)
#define USART2_BASE             (APB1PERIPH_BASE + 0x4400)
#define USART3_BASE             (APB1PERIPH_BASE + 0x4800)
#define UART4_BASE              (APB1PERIPH_BASE + 0x4C00)
#define I2C1_BASE               (APB1PERIPH_BASE + 0x5400)
#define CAN1_BASE               (APB1PERIPH_BASE + 0x6400)
#define CAN2_BASE               (APB1PERIPH_BASE + 0x6800)
#define BAKPR_BASE              (APB1PERIPH_BASE + 0x6C00)
#define PMU_BASE                (APB1PERIPH_BASE + 0x7000)

#define AFIO_BASE               (APB2PERIPH_BASE + 0x0000)
#define EINT_BASE               (APB2PERIPH_BASE + 0x0400)
#define GPIOA_BASE              (APB2PERIPH_BASE + 0x0800)
#define GPIOB_BASE              (APB2PERIPH_BASE + 0x0C00)
#define GPIOC_BASE              (APB2PERIPH_BASE + 0x1000)
#define GPIOD_BASE              (APB2PERIPH_BASE + 0x1400)
#define ADC1_BASE               (APB2PERIPH_BASE + 0x2400)
#define ADC2_BASE               (APB2PERIPH_BASE + 0x2800)
#define TMR1_BASE               (APB2PERIPH_BASE + 0x2C00)
#define SPI1_BASE               (APB2PERIPH_BASE + 0x3000)
#define TMR8_BASE               (APB2PERIPH_BASE + 0x3400)
#define USART1_BASE             (APB2PERIPH_BASE + 0x3800)

#define DMA1_BASE               (AHBPERIPH_BASE + 0x0000)
#define DMA1_Channel1_BASE      (AHBPERIPH_BASE + 0x0008)
#define DMA1_Channel2_BASE      (AHBPERIPH_BASE + 0x001C)
#define DMA1_Channel3_BASE      (AHBPERIPH_BASE + 0x0030)
#define DMA1_Channel4_BASE      (AHBPERIPH_BASE + 0x0044)
#define DMA1_Channel5_BASE      (AHBPERIPH_BASE + 0x0058)
#define DMA1_Channel6_BASE      (AHBPERIPH_BASE + 0x006C)
#define DMA1_Channel7_BASE      (AHBPERIPH_BASE + 0x0080)
#define DMA2_BASE               (AHBPERIPH_BASE + 0x0400)
#define DMA2_Channel1_BASE      (AHBPERIPH_BASE + 0x0408)
#define DMA2_Channel2_BASE      (AHBPERIPH_BASE + 0x041C)
#define DMA2_Channel3_BASE      (AHBPERIPH_BASE + 0x0430)
#define DMA2_Channel4_BASE      (AHBPERIPH_BASE + 0x0444)
#define DMA2_Channel5_BASE      (AHBPERIPH_BASE + 0x0458)
#define RCM_BASE                (AHBPERIPH_BASE + 0x1000)
#define CRC_BASE                (AHBPERIPH_BASE + 0x3000)

/* FMC registers base address */
#define FMC_R_BASE              (AHBPERIPH_BASE + 0x2000)
/* FMC Option Bytes base address */
#define OB_BASE                 ((uint32_t)0x1FFFF800)

/* Debug MCU registers base address */
#define DBGMCU_BASE             ((uint32_t)0xE0042000)

#define USB_OTG_FS_BASE         ((uint32_t)0x50000000)
#define USB_OTG_FS_HOST_BASE    ((uint32_t)USB_OTG_FS_BASE + 0x400)
#define USB_OTG_FS_DEV_BASE     ((uint32_t)USB_OTG_FS_BASE + 0x800)
#define USB_OTG_FS_FIFO_BASE    ((uint32_t)USB_OTG_FS_BASE + 0x1000)
#define USB_OTG_FS_PWR_BASE     ((uint32_t)USB_OTG_FS_BASE + 0xE00)

/**@} end of group Peripheral_memory_map */

/** @defgroup Peripheral_declaration
  @{
*/


#define CRC                     ((CRC_T *) CRC_BASE)
#define RTC                     ((RTC_T *) RTC_BASE)
#define PMU                     ((PMU_T *) PMU_BASE)
#define BAKPR                   ((BAKPR_T *) BAKPR_BASE)
#define TMR1                    ((TMR_T *) TMR1_BASE)
#define TMR2                    ((TMR_T *) TMR2_BASE)
#define TMR3                    ((TMR_T *) TMR3_BASE)
#define TMR4                    ((TMR_T *) TMR4_BASE)
#define TMR5                    ((TMR_T *) TMR5_BASE)
#define TMR8                    ((TMR_T *) TMR8_BASE)

#define DMA1                    ((DMA_T *) DMA1_BASE)
#define DMA2                    ((DMA_T *) DMA2_BASE)

#define DMA1_Channel1           ((DMA_Channel_T *) DMA1_Channel1_BASE)
#define DMA1_Channel2           ((DMA_Channel_T *) DMA1_Channel2_BASE)
#define DMA1_Channel3           ((DMA_Channel_T *) DMA1_Channel3_BASE)
#define DMA1_Channel4           ((DMA_Channel_T *) DMA1_Channel4_BASE)
#define DMA1_Channel5           ((DMA_Channel_T *) DMA1_Channel5_BASE)
#define DMA1_Channel6           ((DMA_Channel_T *) DMA1_Channel6_BASE)
#define DMA1_Channel7           ((DMA_Channel_T *) DMA1_Channel7_BASE)

#define DMA2_Channel1           ((DMA_Channel_T *) DMA2_Channel1_BASE)
#define DMA2_Channel2           ((DMA_Channel_T *) DMA2_Channel2_BASE)
#define DMA2_Channel3           ((DMA_Channel_T *) DMA2_Channel3_BASE)
#define DMA2_Channel4           ((DMA_Channel_T *) DMA2_Channel4_BASE)
#define DMA2_Channel5           ((DMA_Channel_T *) DMA2_Channel5_BASE)

#define CAN1                    ((CAN_T *) CAN1_BASE)
#define CAN2                    ((CAN_T *) CAN2_BASE)
#define I2C1                    ((I2C_T *) I2C1_BASE)
#define OB                      ((OB_T *) OB_BASE)
#define ADC1                    ((ADC_T *) ADC1_BASE)
#define ADC2                    ((ADC_T *) ADC2_BASE)
#define EINT                    ((EINT_T *) EINT_BASE)
#define IWDT                    ((IWDT_T *) IWDT_BASE)
#define SPI1                    ((SPI_T *) SPI1_BASE)
#define SPI2                    ((SPI_T *) SPI2_BASE)
#define WWDT                    ((WWDT_T *) WWDT_BASE)
#define USART2                  ((USART_T *) USART2_BASE)
#define USART3                  ((USART_T *) USART3_BASE)
#define UART4                   ((USART_T *) UART4_BASE)
#define AFIO                    ((AFIO_T *) AFIO_BASE)
#define GPIOA                   ((GPIO_T *) GPIOA_BASE)
#define GPIOB                   ((GPIO_T *) GPIOB_BASE)
#define GPIOC                   ((GPIO_T *) GPIOC_BASE)
#define GPIOD                   ((GPIO_T *) GPIOD_BASE)
#define USART1                  ((USART_T *) USART1_BASE)
#define RCM                     ((RCM_T *) RCM_BASE)
#define FMC                     ((FMC_T *) FMC_R_BASE)

#define USB_OTG_FS              ((USB_OTG_GLOBAL_T *)USB_OTG_FS_BASE)
#define USB_OTG_FS_H            ((USB_OTG_HOST_T *)USB_OTG_FS_HOST_BASE)
#define USB_OTG_FS_D            ((USB_OTG_DEVICE_T *)USB_OTG_FS_DEV_BASE)
#define USB_OTG_FS_FIFO         ((USB_OTG_FIFO_T *) USB_OTG_FS_FIFO_BASE)
#define USB_OTG_FIFO_OFFSET     0x1000
#define USB_OTG_FS_PWR          ((USB_OTG_PWRCLK_T *) USB_OTG_FS_PWR_BASE)

#define DBGMCU                  ((DBGMCU_T *) DBGMCU_BASE)

/**@} end of group Peripheral_declaration */

/** @defgroup Exported_Macros
  @{
*/

/* Define one bit mask */
#define BIT0                    ((uint32_t)0x00000001)
#define BIT1                    ((uint32_t)0x00000002)
#define BIT2                    ((uint32_t)0x00000004)
#define BIT3                    ((uint32_t)0x00000008)
#define BIT4                    ((uint32_t)0x00000010)
#define BIT5                    ((uint32_t)0x00000020)
#define BIT6                    ((uint32_t)0x00000040)
#define BIT7                    ((uint32_t)0x00000080)
#define BIT8                    ((uint32_t)0x00000100)
#define BIT9                    ((uint32_t)0x00000200)
#define BIT10                   ((uint32_t)0x00000400)
#define BIT11                   ((uint32_t)0x00000800)
#define BIT12                   ((uint32_t)0x00001000)
#define BIT13                   ((uint32_t)0x00002000)
#define BIT14                   ((uint32_t)0x00004000)
#define BIT15                   ((uint32_t)0x00008000)
#define BIT16                   ((uint32_t)0x00010000)
#define BIT17                   ((uint32_t)0x00020000)
#define BIT18                   ((uint32_t)0x00040000)
#define BIT19                   ((uint32_t)0x00080000)
#define BIT20                   ((uint32_t)0x00100000)
#define BIT21                   ((uint32_t)0x00200000)
#define BIT22                   ((uint32_t)0x00400000)
#define BIT23                   ((uint32_t)0x00800000)
#define BIT24                   ((uint32_t)0x01000000)
#define BIT25                   ((uint32_t)0x02000000)
#define BIT26                   ((uint32_t)0x04000000)
#define BIT27                   ((uint32_t)0x08000000)
#define BIT28                   ((uint32_t)0x10000000)
#define BIT29                   ((uint32_t)0x20000000)
#define BIT30                   ((uint32_t)0x40000000)
#define BIT31                   ((uint32_t)0x80000000)

#define UNUSED(X)             (void)X      /* To avoid gcc/g++ warnings */

#define SET_BIT(REG, BIT)       ((REG) |= (BIT))

#define CLEAR_BIT(REG, BIT)     ((REG) &= ~(BIT))

#define READ_BIT(REG, BIT)      ((REG) & (BIT))

#define CLEAR_REG(REG)          ((REG) = (0x0))

#define WRITE_REG(REG, VAL)     ((REG) = (VAL))

#define READ_REG(REG)           ((REG))

#define MODIFY_REG(REG, CLEARMASK, SETMASK)  WRITE_REG((REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK)))

/**@} end of group Exported_Macros */
/**@} end of group APM32F402_403 */
/**@} end of group CMSIS */
#ifdef __cplusplus
}
#endif

#endif /* __APM32F402_403_H */
