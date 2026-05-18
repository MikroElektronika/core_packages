/*!
 * @file        bmp561.h
 *
 * @brief       CMSIS Cortex-M0+ Device Peripheral Access Layer Header File.
 *
 * @details     This file contains all the peripheral register's definitions, bits definitions and memory mapping
 *
 * @version     V1.0.0
 *
 * @date        2024-02-04
 *
 */

#ifndef __BMP561_H
#define __BMP561_H

#ifdef __cplusplus
 extern "C" {
#endif 

/**
 * @brief Define Value of the External oscillator in Hz
 */

/** Value of the system clock in Hz */
#define SYSCLK_VALUE                ((uint32_t)4000000)
	 
/** Core Revision r0p1 */
#define __CM0_REV                 0
/** BMP561 do not provide MPU */
#define __MPU_PRESENT             0
/** BMP561 uses 2 Bits for the Priority Levels */
#define __NVIC_PRIO_BITS          2
/** Set to 1 if different SysTick Config is used */
#define __Vendor_SysTickConfig    0

/**
  * @brief BMP561 Interrupt Number Definition.
  */

typedef enum
{
/******  Cortex-M0+ Processor Exceptions Numbers **************************************************/
    Reset_IRQn                  = -15,    /*!< 1 Reset Interrupt                                  */
    NonMaskableInt_IRQn         = -14,    /*!< 2 Non Maskable Interrupt                           */
    HardFault_IRQn              = -13,    /*!< 3 Cortex-M0+ Hard Fault Interrupt                  */
    SVCall_IRQn                 = -5,     /*!< 11 Cortex-M0+ SV Call Interrupt                    */
    PendSV_IRQn                 = -2,     /*!< 14 Cortex-M0+ Pend SV Interrupt                    */
    SysTick_IRQn                = -1,     /*!< 15 Cortex-M0+ System Tick Interrupt                */

/******  BMP561 specific Interrupt Numbers ********************************************************/	
    I2C_IRQn                    = 0,      /*!< I2C Interrupt                                      */
    HSC_IRQn                    = 1,      /*!< HSC Interrupt                                      */
    UART_IRQn                   = 2,      /*!< UART Interrupt                                     */
    IWDT_IRQn                   = 3,      /*!< Independent WatchDog Interrupt                     */
    WWDT_IRQn                   = 4,      /*!< Window WatchDog Interrupt                          */
    TMR0_IRQn                   = 5,      /*!< TIMER0 Interrupt                                   */
    TMR1_IRQn                   = 6,      /*!< TIMER1 Interrupt                                   */
    CADC_IRQn                   = 7,      /*!< CADC Interrupt                                     */
    VADC_IRQn                   = 8,      /*!< VADC Interrupt                                     */
    FLASH_IRQn                  = 9,      /*!< FLASH Interrupt                                    */
    WUPT_IRQn                   = 10,     /*!< WUPT Interrupt                                     */
    I2C_STA_IRQn                = 11,     /*!< I2C Start Interrupt                                */
    EINT0_IRQn                  = 12,     /*!< EINT Line0 Interrupt                               */
    EINT1_IRQn                  = 13,     /*!< EINT Line1 Interrupt                               */
    EINT2_IRQn                  = 14,     /*!< EINT Line2 Interrupt                               */
    SHA256_IRQn                 = 15,     /*!< SHA256 Interrupt                                   */
} IRQn_Type;

/**
 * @}
 */

#include "core_cm0plus.h"
// Note: Changed for MikroE implementation.
//#include "system_bmp561.h"
#define __I volatile // Note: Added for MikroE implementation.
#define __O __I // Note: Added for MikroE implementation.
#define __IO __I // Note: Added for MikroE implementation.
#include <stdint.h>


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

enum {DISABLE, ENABLE};
enum {BIT_RESET, BIT_SET};
enum {RESET, SET};
enum {ERROR, SUCCESS};

#ifndef NULL
#define NULL   ((void *)0)
#endif

#if defined (__CC_ARM )
#pragma anon_unions
#endif

/**
 * @brief General purpose I/O (GPIO)
 */
typedef struct
{
    /** Mode register */
    union
    {
        __IOM uint32_t MDR;

        struct
        {
            __IOM uint32_t GPIO0_MD        : 2;
            __IOM uint32_t GPIO1_MD        : 2;
            __IOM uint32_t GPIO2_MD        : 2;
            __IOM uint32_t GPIO3_MD        : 2;
            __IOM uint32_t GPIO4_MD        : 2;
            __IOM uint32_t GPIO5_MD        : 2;
            __IOM uint32_t GPIO6_MD        : 2;
            __IOM uint32_t GPIO7_MD        : 2;
            __IM  uint32_t RESERVED1       : 2;
            __IOM uint32_t GPIO9_MD        : 2;
            __IM  uint32_t RESERVED2       : 12;
        } MDR_B;
    };

    /** Pull up/down register */
    union
    {
        __IOM uint32_t PUPDR;

        struct
        {
            __IOM uint32_t GPIO0_PUE       : 1;
            __IOM uint32_t GPIO0_PUS       : 1;
            __IOM uint32_t GPIO1_PUE       : 1;
            __IOM uint32_t GPIO1_PUS       : 1;
            __IOM uint32_t GPIO2_PUE       : 1;
            __IOM uint32_t GPIO2_PUS       : 1;
            __IOM uint32_t GPIO3_PUE       : 1;
            __IOM uint32_t GPIO3_PUS       : 1;
            __IOM uint32_t GPIO4_PUE       : 1;
            __IOM uint32_t GPIO4_PUS       : 1;
            __IOM uint32_t GPIO5_PUE       : 1;
            __IOM uint32_t GPIO5_PUS       : 1;
            __IOM uint32_t GPIO6_PUE       : 1;
            __IOM uint32_t GPIO6_PUS       : 1;
            __IOM uint32_t GPIO7_PUE       : 1;
            __IOM uint32_t GPIO7_PUS       : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IM  uint32_t RESERVED2       : 1;
            __IOM uint32_t GPIO9_PUE       : 1;
            __IOM uint32_t GPIO9_PUS       : 1;
            __IM  uint32_t RESERVED3       : 12;
        } PUPDR_B;
    };		

    /** Output type register */
    union
    {
        __IOM uint32_t OTR;

        struct
        {
            __IOM uint32_t GPIO0_OT        : 1;
            __IOM uint32_t GPIO1_OT        : 1;
            __IOM uint32_t GPIO2_OT        : 1;
            __IOM uint32_t GPIO3_OT        : 1;
            __IOM uint32_t GPIO4_OT        : 1;
            __IOM uint32_t GPIO5_OT        : 1;
            __IOM uint32_t GPIO6_OT        : 1;
            __IOM uint32_t GPIO7_OT        : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t GPIO9_OT        : 1;
            __IM  uint32_t RESERVED2       : 22;
        } OTR_B;
    };	
		
    /** Output speed register */
    union
    {
        __IOM uint32_t OSR;

        struct
        {
            __IOM uint32_t GPIO0_OS        : 1;
            __IOM uint32_t GPIO1_OS        : 1;
            __IOM uint32_t GPIO2_OS        : 1;
            __IOM uint32_t GPIO3_OS        : 1;
            __IOM uint32_t GPIO4_OS        : 1;
            __IOM uint32_t GPIO5_OS        : 1;
            __IOM uint32_t GPIO6_OS        : 1;
            __IOM uint32_t GPIO7_OS        : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t GPIO9_OS        : 1;
            __IM  uint32_t RESERVED2       : 22;
        } OSR_B;
    };	

    /** Drive select register */
    union
    {
        __IOM uint32_t DSR;

        struct
        {
            __IOM uint32_t GPIO0_DS        : 1;
            __IOM uint32_t GPIO1_DS        : 1;
            __IOM uint32_t GPIO2_DS        : 1;
            __IOM uint32_t GPIO3_DS        : 1;
            __IOM uint32_t GPIO4_DS        : 1;
            __IOM uint32_t GPIO5_DS        : 1;
            __IOM uint32_t GPIO6_DS        : 1;
            __IOM uint32_t GPIO7_DS        : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t GPIO9_DS        : 1;
            __IM  uint32_t RESERVED2       : 22;
        } DSR_B;
    };	

    /** Data input register */
    union
    {
        __IOM uint32_t DINR;

        struct
        {
            __IOM uint32_t GPIO0_DIN       : 1;
            __IOM uint32_t GPIO1_DIN       : 1;
            __IOM uint32_t GPIO2_DIN       : 1;
            __IOM uint32_t GPIO3_DIN       : 1;
            __IOM uint32_t GPIO4_DIN       : 1;
            __IOM uint32_t GPIO5_DIN       : 1;
            __IOM uint32_t GPIO6_DIN       : 1;
            __IOM uint32_t GPIO7_DIN       : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t GPIO9_DIN       : 1;
            __IM  uint32_t RESERVED2       : 22;
        } DINR_B;
    };	

    /** Data output register */
    union
    {
        __IOM uint32_t DOUTR;

        struct
        {
            __IOM uint32_t GPIO0_DOUT      : 1;
            __IOM uint32_t GPIO1_DOUT      : 1;
            __IOM uint32_t GPIO2_DOUT      : 1;
            __IOM uint32_t GPIO3_DOUT      : 1;
            __IOM uint32_t GPIO4_DOUT      : 1;
            __IOM uint32_t GPIO5_DOUT      : 1;
            __IOM uint32_t GPIO6_DOUT      : 1;
            __IOM uint32_t GPIO7_DOUT      : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t GPIO9_DOUT      : 1;
            __IM  uint32_t RESERVED2       : 22;
        } DOUTR_B;
    };	

    /** Alternate function select register */
    union
    {
        __IOM uint32_t AFSELR;

        struct
        {
            __IOM uint32_t GPIO0_AFSELR    : 2;
            __IOM uint32_t GPIO1_AFSELR    : 2;
            __IOM uint32_t GPIO2_AFSELR    : 2;
            __IOM uint32_t GPIO3_AFSELR    : 2;
            __IOM uint32_t GPIO4_AFSELR    : 2;
            __IOM uint32_t GPIO5_AFSELR    : 2;
            __IM  uint32_t RESERVED        : 20;
        } AFSELR_B;
    };	
} GPIO_T;

/**
 * @brief Flash controller
 */
typedef struct
{
    /** Flash key register */
    union
    {
        __OM uint32_t KEY;

        struct
        {
            __OM  uint32_t FKEY            : 32;
        } KEY_B;
    };	

    /** Option key register */
    union
    {
        __OM uint32_t OPTKEY;

        struct
        {
            __OM  uint32_t OPTKEY          : 32;
        } OPTKEY_B;
    };	

    /** Status register */
    union
    {
        __IOM uint32_t SR;

        struct
        {
            __IOM uint32_t ERD             : 1;
            __IOM uint32_t PRD             : 1;
            __IM  uint32_t BUSY            : 1;
            __IOM uint32_t KEYERR          : 1;
            __IOM uint32_t WRPRTERR        : 1;
            __IM  uint32_t WADRERR         : 1;
            __IM  uint32_t RESERVED1       : 10;
            __IM  uint32_t TRIMERR         : 1;
            __IM  uint32_t KEYSTA          : 3;
            __IM  uint32_t OPTKEYSTA       : 3;
            __IM  uint32_t RESERVED2       : 9;
        } SR_B;
    };

    /** Clear register */
    union
    {
        __IOM uint32_t CR;

        struct
        {
            __IOM uint32_t EREQ            : 1;
            __IOM uint32_t PREQ            : 1;
            __IOM uint32_t ERTYPE          : 2;
            __IOM uint32_t EOPIE           : 1;
            __IOM uint32_t ERRIE           : 1;
            __IM  uint32_t RESERVED1       : 9;
            __IOM uint32_t FORCE_OPTLOAD   : 1;
            __IM  uint32_t RESERVED2       : 16;
        } CR_B;
    };

    /** Time control register */
    union
    {
        __IOM uint32_t TMCTRL;

        struct
        {
            __IOM uint32_t UNIT            : 5;
            __IM  uint32_t RESERVED        : 27;
        } TMCTRL_B;
    };

    /** Option byte register */
    union
    {
        __IOM uint32_t OBR;

        struct
        {
            __IM  uint32_t OPTERR          : 1;
            __IM  uint32_t LEVEL1_PROT     : 1;
            __IM  uint32_t LEVEL2_PROT     : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IM  uint32_t NBOOT0          : 1;
            __IM  uint32_t NBOOT1          : 1;
            __IM  uint32_t WWDTSW          : 1;
            __IM  uint32_t IWDTSW          : 1;
            __IM  uint32_t DFP             : 8;
            __IM  uint32_t WLOCKEN         : 1;
            __IOM uint32_t LVDEN           : 1;
            __IOM uint32_t LVDSEL          : 4;
            __IM  uint32_t RESERVED2       : 10;
        } OBR_B;
    };

    /** Data Flash write lock register */
    union
    {
        __IM uint32_t WLOCKDF;

        struct
        {
            __IM  uint32_t WLOCKDF         : 8;
            __IM  uint32_t RESERVED        : 24;
        } WLOCKDF_B;
    };

    /** Main Flash write lock register */
    union
    {
        __IM uint32_t WLOCKM;

        struct
        {
            __IM  uint32_t WLOCKM          : 32;
        } WLOCKM_B;
    };

    //TODO: ip and Trim tag register 待确定是否保留  
    /** IP control register */
    union
    {
        __IOM uint32_t IPCTRL;

        struct
        {
            __IOM uint32_t DEEPSTB         : 1;
            __IOM uint32_t FWUP            : 1;
            __IOM uint32_t READONLY        : 1;
            __IM  uint32_t RESERVED        : 13;
            __OM  uint32_t IPKEY           : 16;
        } IPCTRL_B;
    };

    /** Trim tag register */
    union
    {
        __IM uint32_t TRIM_TAG;

        struct
        {
            __IM  uint32_t FIRST_FAIL      : 1;
            __IM  uint32_t SCAN_FAIL       : 1;
            __IM  uint32_t RESERVED        : 30;
        } TRIM_TAG_B;
    };
} FLASH_T;

/**
 * @brief WUPT
 */
typedef struct
{
    /** Control status register */
    union
    {
        __IOM uint32_t CSTS;

        struct
        {
            __IOM uint32_t WUPTEN          : 1;
            __IOM uint32_t WUPIE           : 1;
            __IM  uint32_t WAKE_STATE      : 1;
            __IM  uint32_t RESERVED        : 29;
        } CSTS_B;
    };

    /** Configure register */
    union
    {
        __IOM uint32_t CFG;

        struct
        {
            __IOM uint32_t DIV             : 6;
            __IOM uint32_t TBC             : 18;
            __IM  uint32_t RESERVED        : 8;
        } CFG_B;
    };

    /** Status clear register */
    union
    {
        __IOM uint32_t SCR;

        struct
        {
            __IOM uint32_t CLR_STATE       : 1;
            __IOM uint32_t CLR_CNT         : 1;
            __IM  uint32_t RESERVED        : 30;
        } SCR_B;
    };
} WUPT_T;

/**
 * @brief Universal asynchronous receiver transmitter (UART)
 */
typedef struct
{
    /** Control register */
    union
    {
        __IOM uint32_t CR;

        struct
        {
            __IOM uint32_t TXE             : 1;
            __IOM uint32_t RXE             : 1;
            __IOM uint32_t STOPBIT         : 1;
            __IOM uint32_t PARITYE         : 1;
            __IOM uint32_t PARITYSEL       : 1;
            __IOM uint32_t TXSEQSEL        : 1;
            __IOM uint32_t ABE             : 1;
            __IM  uint32_t RESERVED        : 25;
        } CR_B;
    };

    /** Transfer data register */
    union
    {
        __IOM uint32_t TDR;

        struct
        {
            __IOM uint32_t TXDATA          : 8;
            __IM  uint32_t RESERVED        : 24;
        } TDR_B;
    };

    /** Receive data register */
    union
    {
        __IM uint32_t RDR;

        struct
        {
            __IM  uint32_t RXDATA          : 8;
            __IM  uint32_t RESERVED        : 24;
        } RDR_B;
    };

    /** Interrupt enable register */
    union
    {
        __IOM uint32_t IER;

        struct
        {
            __IOM uint32_t TXIE            : 1;
            __IOM uint32_t RXIE            : 1;
            __IOM uint32_t TXOEIE          : 1;
            __IOM uint32_t RXOEIE          : 1;
            __IOM uint32_t PEIE            : 1;
            __IOM uint32_t FEIE            : 1;
            __IOM uint32_t TXBUFFUIE       : 1;
            __IOM uint32_t RXBUFFUIE       : 1;
            __IOM uint32_t TXBUFEMIE       : 1;
            __IOM uint32_t RXBUFEMIE       : 1;
            __IOM uint32_t TXBUFHAFUIE     : 1;
            __IOM uint32_t RXBUFHAFUIE     : 1;
            __IOM uint32_t ABCIE           : 1;
            __IOM uint32_t ABEIE           : 1;
            __IM  uint32_t RESERVED        : 18;
        } IER_B;
    };

    /** Status register */
    union
    {
        __IM uint32_t SR;

        struct
        {
            __IM  uint32_t TXCF            : 1;
            __IM  uint32_t RXCF            : 1;
            __IM  uint32_t TXOERRF         : 1;
            __IM  uint32_t RXOERRF         : 1;
            __IM  uint32_t PERRF           : 1;
            __IM  uint32_t FERRF           : 1;
            __IM  uint32_t TXBUFFULL       : 1;
            __IM  uint32_t RXBUFFULL       : 1;
            __IM  uint32_t TXBUFEMP        : 1;
            __IM  uint32_t RXBUFEMP        : 1;
            __IM  uint32_t TXBUFHAFUL      : 1;
            __IM  uint32_t RXBUFHAFUL      : 1;
            __IM  uint32_t TXBSY           : 1;
            __IM  uint32_t RXBSY           : 1;
            __IM  uint32_t ABCF            : 1;
            __IM  uint32_t ABERR           : 1;
            __IM  uint32_t RESERVED        : 16;
        } SR_B;
    };

    /** Status clear register */
    union
    {
        __OM uint32_t SCR;

        struct
        {
            __OM  uint32_t CTXC            : 1;
            __OM  uint32_t CRXC            : 1;
            __OM  uint32_t CTXOERR         : 1;
            __OM  uint32_t CRXOERR         : 1;
            __OM  uint32_t CPERR           : 1;
            __OM  uint32_t CFERR           : 1;
            __OM  uint32_t CABC            : 1;
            __OM  uint32_t CABERR          : 1;
            __IM  uint32_t RESERVED        : 24;
        } SCR_B;
    };

    /** Baud rate register */
    union
    {
        __IOM uint32_t BDR;

        struct
        {
            __IOM uint32_t BAUDDIV         : 16;
            __IM  uint32_t RESERVED        : 16;
        } BDR_B;
    };
} UART_T;

/**
 * @brief HMAC/SHA256
 */
typedef struct
{
    /** Control register */
    union
    {
        __IOM uint32_t CR;

        struct
        {
            __IOM uint32_t HMACE           : 1;
            __IOM uint32_t START           : 1;
            __IOM uint32_t HMACIE          : 1;
            __IOM uint32_t WKMD            : 1;
            __IOM uint32_t OPMD            : 1;
            __IOM uint32_t MSGLEN          : 9;
            __IM  uint32_t RESERVED        : 18;
        } CR_B;
    };

    /** Key register */
    union
    {
        __IOM uint32_t KEY[8];  //!< KEY[0] is remap to HMAC key7 register, KEY[7] is remap to HMAC key0 register

        struct
        {
            __IOM uint32_t KEY             : 32;
        } KEY_B;
    };

    /** Message register */
    union
    {
        __IOM uint32_t MSG[8];  //!< MSG[0] is remap to HMAC msg7 register, MSG[7] is remap to HMAC msg0 register

        struct
        {
            __IOM uint32_t MSG             : 32;
        } MSG_B;
    };

    /** Status register */
    union
    {
        __IM uint32_t SR;

        struct
        {
            __IM  uint32_t INTF            : 1;
            __IM  uint32_t DONE            : 1;
            __IM  uint32_t RESERVED        : 30;
        } SR_B;
    };

    /** Status clear register */
    union
    {
        __OM uint32_t SCR;

        struct
        {
            __OM  uint32_t CINTF           : 1;
            __IM  uint32_t RESERVED        : 31;
        } SCR_B;
    };

    /** Result register */
    union
    {
        __IOM uint32_t RES[8];  /*!< RES[0] is remap to HMAC res7 register, RES[7] is remap to HMAC res0 register */

        struct
        {
            __IOM uint32_t RES             : 32;
        } RES_B;
    };
} HMAC_T;

/**
 * @brief Independent watchdog(IWDT)
 */
typedef struct
{
    /** Pre-scaler register */
    union
    {
        __IOM uint32_t PS;

        struct
        {
            __IOM uint32_t PS              : 4;
            __IM  uint32_t RESERVED        : 28;
        } PS_B;
    };
		
    /** Trigger register */
    union
    {
        __IOM uint32_t TRG;

        struct
        {
            __IOM uint32_t TRG             : 8;
            __IM  uint32_t RESERVED        : 24;
        } TRG_B;
    };

    /** Reload value register */
    union
    {
        __IOM uint32_t RV;

        struct
        {
            __IOM uint32_t RV              : 8;
            __IM  uint32_t RESERVED        : 24;
        } RV_B;
    };

    /** Status register */
    union
    {
        __IM uint32_t SR;

        struct
        {
            __IM  uint32_t TU              : 1;
            __IM  uint32_t PU              : 1;
            __IM  uint32_t RU              : 1;
            __IM  uint32_t RESERVED        : 29;
        } SR_B;
    };
} IWDT_T;

/**
  * @brief Windows watchdog(WWDT)
  */
typedef struct
{
    /** Pre-scaler register */
    union
    {
        __IOM uint32_t PS;

        struct
        {
            __IOM uint32_t PS              : 4;
            __IM  uint32_t RESERVED        : 28;
        } PS_B;
    };

    /** Trigger register */
    union
    {
        __IOM uint32_t TRG;

        struct
        {
            __IOM uint32_t TRG             : 8;
            __IM  uint32_t RESERVED        : 24;
        } TRG_B;
    };

    /** Window register */
    union
    {
        __IOM uint32_t WIND;

        struct
        {
            __IOM uint32_t WIND            : 16;
            __IM  uint32_t RESERVED        : 16;
        } WIND_B;
    };

    /** Reload value register */
    union
    {
        __IOM uint32_t RV;

        struct
        {
            __IOM uint32_t RV              : 16;
            __IM  uint32_t RESERVED        : 16;
        } RV_B;
    };

    /** Count register */
    union
    {
        __IM uint32_t CNT;

        struct
        {
            __IM  uint32_t CNT             : 16;
            __IM  uint32_t RESERVED        : 16;
        } CNT_B;
    };

    /** Interrupt enable register */
    union
    {
        __IOM uint32_t IEN;

        struct
        {
            __IOM uint32_t WINDMIE         : 1;
            __IM  uint32_t RESERVED        : 31;
        } IEN_B;
    };

    /** Status register */
    union
    {
        __IM uint32_t SR;

        struct
        {
            __IM  uint32_t WINDMF          : 1;
            __IM  uint32_t RESERVED        : 31;
        } SR_B;
    };

    /** Status clear register */
    union
    {
        __IOM uint32_t SCR;

        struct
        {
            __IOM uint32_t WINDMFC         : 1;
            __IM  uint32_t RESERVED        : 31;
        } SCR_B;
    };
} WWDT_T;


/**
 * @brief TIMER
 */
typedef struct
{
    /** Control register */
    union
    {
        __IOM uint32_t CTRL;

        struct
        {
            __IOM uint32_t EN              : 1;
            __IOM uint32_t MODE            : 1;
            __IOM uint32_t PWMXS           : 1;
            __IOM uint32_t BUFEN           : 1;
            __IOM uint32_t PS              : 4;
            __IM  uint32_t RESERVED        : 24;
        } CTRL_B;
    };

    /** PWM register */
    union
    {
        __IOM uint32_t PWMXD;

        struct
        {
            __IOM uint32_t PWMXD           : 16;
            __IM  uint32_t RESERVED        : 16;
        } PWMXD_B;
    };

    /** Auto reload value register */
    union
    {
        __IOM uint32_t ARV;

        struct
        {
            __IOM uint32_t ARV             : 16;
            __IM  uint32_t RESERVED        : 16;
        } ARV_B;
    };

    /** Count register */
    union
    {
        __IM uint32_t CNT;

        struct
        {
            __IM  uint32_t CNT             : 16;	
            __IM  uint32_t RESERVED        : 16;
        } CNT_B;
    };

    /** Interrupt enable register */
    union
    {
        __IOM uint32_t IEN;

        struct
        {
            __IOM uint32_t OVCIE           : 1;
            __IOM uint32_t PWMMIE          : 1;
            __IM  uint32_t RESERVED        : 30;
        } IEN_B;
    };

    /** Status register */
    union
    {
        __IM uint32_t SR;

        struct
        {
            __IM  uint32_t OVC             : 1;
            __IM  uint32_t PWMM            : 1;
            __IM  uint32_t RESERVED        : 30;
        } SR_B;
    };

    /** Status clear register */
    union
    {
        __IOM uint32_t SCR;

        struct
        {
            __IOM uint32_t OVCC            : 1;
            __IOM uint32_t PWMMC           : 1;
            __IM  uint32_t RESERVED        : 30;
        } SCR_B;
    };
} TMR_T;


/**
 * @brief CADC
 */
typedef struct
{
    /** Control register */
    union
    {
        __IOM uint32_t CTRL;

        struct
        {
            __IOM uint32_t EN              : 1;
            __IOM uint32_t CHP_EN          : 1;
            __IOM uint32_t CHPDLY_SEL_C    : 1;
            __IOM uint32_t OSR_SEL         : 2;
            __IOM uint32_t CADC_CLK_BOOST  : 1;
            __IM  uint32_t RESERVED        : 26;
        } CTRL_B;
    };

    /** Reserved, offset: 0x04 ~ 0x08 */
		__IM uint32_t RESERVED[2];

    /** Data register */
    union
    {
        __IOM uint32_t DATA;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA_B;
    };

    /** Interrupt register */
    union
    {
        __IOM uint32_t IEN;

        struct
        {
            __IOM uint32_t SPDIEN          : 1;
            __IM  uint32_t RESERVED        : 31;
        } IEN_B;
    };

    /** Status register */
    union
    {
        __IM uint32_t SR;

        struct
        {
            __IM  uint32_t SP_DONE         : 1;
            __IM  uint32_t RESERVED        : 31;
        } SR_B;
    };

    /** Clear register */
    union
    {
        __IOM uint32_t SCR;

        struct
        {
            __IOM uint32_t SPDC            : 1;
            __IM  uint32_t RESERVED        : 31;
        } SCR_B;
    };

    /** Source data register */
    union
    {
        __IM uint32_t SDATA;

        struct
        {
            __IM  uint32_t DATA            : 20;
            __IM  uint32_t RESERVED        : 12;
        } SDATA_B;
    };
} CADC_T;


/**
 * @brief VADC
 */
typedef struct
{
    /** Control register */
    union
    {
        __IOM uint32_t CTRL;

        struct
        {
            __IOM uint32_t EN              : 1;
            __IOM uint32_t CHP_EN          : 1;
            __IOM uint32_t CHPDLY_SEL_C    : 1;
            __IOM uint32_t OSR_SEL         : 2;
            __IM  uint32_t RESERVED        : 27;
        } CTRL_B;
    };

    /** Reserved, offset: 0x04 ~ 0x08 */
		__IM uint32_t RESERVED[2];

    /** Data register */
    union
    {
        __IOM uint32_t DATA;

        struct
        {
            __IOM uint32_t DATA            : 16;
            __IM  uint32_t RESERVED        : 16;
        } DATA_B;
    };

    /** Interrupt register */
    union
    {
        __IOM uint32_t IEN;

        struct
        {
            __IOM uint32_t SPDIEN          : 1;
            __IM  uint32_t RESERVED        : 31;
        } IEN_B;
    };

    /** Status register */
    union
    {
        __IM uint32_t SR;

        struct
        {
            __IM  uint32_t SP_DONE         : 1;
            __IM  uint32_t VOL_SEL         : 1;
            __IM  uint32_t RESERVED        : 30;
        } SR_B;
    };

    /** Clear register */
    union
    {
        __IOM uint32_t SCR;

        struct
        {
            __IOM uint32_t SPDC            : 1;
            __IM  uint32_t RESERVED        : 31;
        } SCR_B;
    };

    /** Source data register */
    union
    {
        __IM uint32_t SDATA;

        struct
        {
            __IM  uint32_t DATA            : 20;
            __IM  uint32_t RESERVED        : 12;
        } SDATA_B;
    };
} VADC_T;

/**
 * @brief HSC
 */
typedef struct
{
    /** Control register */
    union
    {
        __IOM uint32_t CTRL;

        struct
        {
            __IOM uint32_t EN              : 1;
            __IOM uint32_t START           : 1;
            __IOM uint32_t MODE            : 1;
            __IOM uint32_t THW1            : 2;
            __IOM uint32_t BITS            : 1;
            __IOM uint32_t BRKEN           : 1;
            __IOM uint32_t CLKSEL          : 3;
            __IOM uint32_t TOEN            : 1;
            __IM  uint32_t RESERVED        : 21;
        } CTRL_B;
    };

    /** Command register */
    union
    {
        __IOM uint32_t HCMD;

        struct
        {
            __IOM uint32_t MSADDR          : 7;
            __IOM uint32_t MRW             : 1;
            __IM  uint32_t RESERVED        : 24;
        } HCMD_B;
    };

    /** Data register */
    union
    {
        __IOM uint32_t HDA;

        struct
        {
            __IOM uint32_t HDATA0          : 8;
            __IOM uint32_t HDATA1          : 8;
            __IM  uint32_t RESERVED        : 16;
        } HDA_B;
    };

    /** Interrupt enable register */
    union
    {
        __IOM uint32_t IEN;

        struct
        {
            __IOM uint32_t BRKEN           : 1;
            __IOM uint32_t CMDEN           : 1;
            __IOM uint32_t DATAEN          : 1;
            __IOM uint32_t FREN            : 1;
            __IOM uint32_t TOEN            : 1;
            __IM  uint32_t RESERVED        : 27;
        } IEN_B;
    };

    /** Status register */
    union
    {
        __IM uint32_t SR;

        struct
        {
            __IM  uint32_t BRKS            : 1;
            __IM  uint32_t CMDS            : 1;
            __IM  uint32_t DATAS           : 1;
            __IM  uint32_t FRS             : 1;
            __IM  uint32_t TIMEOUT         : 1;
            __IM  uint32_t BUSY            : 1;
            __IM  uint32_t RESERVED        : 26;
        } SR_B;
    };

    /** Status clear register */
    union
    {
        __IOM uint32_t SRC;

        struct
        {
            __IOM uint32_t BRKSC           : 1;
            __IOM uint32_t CMDSC           : 1;
            __IOM uint32_t DATASC          : 1;
            __IOM uint32_t FRSC            : 1;
            __IOM uint32_t TOSC            : 1;
            __IM  uint32_t RESERVED        : 27;
        } SRC_B;
    };
} HSC_T;

/**
 * @brief I2C
 */
typedef struct
{
    /** Control register */
    union
    {
        __IOM uint32_t CTRL;

        struct
        {
            __IOM uint32_t EN              : 1;
            __IOM uint32_t FFC             : 1;
            __IOM uint32_t GCEN            : 1;
            __IOM uint32_t ACK             : 1;
            __IOM uint32_t NOSTR           : 1;
            __IOM uint32_t STOP            : 1;
            __IOM uint32_t AUTOEND         : 1;
            __IOM uint32_t TOEN            : 1;
            __IOM uint32_t FILT            : 2;
            __IOM uint32_t START           : 1;
            __IM  uint32_t RESERVED        : 21;
        } CTRL_B;
    };

    /** Slave address register */
    union
    {
        __IOM uint32_t SADDR;

        struct
        {
            __IOM uint32_t SADDR           : 7;
            __IM  uint32_t RESERVED        : 25;
        } SADDR_B;
    };

    /** Master address register */
    union
    {
        __IOM uint32_t MADDR;

        struct
        {
            __IOM uint32_t RD_WR           : 1;
            __IOM uint32_t ADDR            : 7;
            __IM  uint32_t RESERVED        : 24;
        } MADDR_B;
    };

    /** Clock configure register */
    union
    {
        __IOM uint32_t SCLC;

        struct
        {
            __IOM uint32_t SCLL            : 8;
            __IOM uint32_t SCLH            : 8;
            __IM  uint32_t RESERVED        : 16;
        } SCLC_B;
    };

    /** Transmit data register */
    union
    {
        __OM uint32_t TXDATA;

        struct
        {
            __OM  uint32_t TXDATA          : 8;
            __IM  uint32_t RESERVED        : 24;
        } TXDATA_B;
    };

    /** Receive data register */
    union
    {
        __IM uint32_t RXDATA;

        struct
        {
            __IM  uint32_t RXDATA          : 8;
            __IM  uint32_t RESERVED        : 24;
        } RXDATA_B;
    };

    /** Time out register */
    union
    {
        __IOM uint32_t TIMEOUT;

        struct
        {
            __IOM uint32_t TIMEOUT         : 24;
            __IM  uint32_t RESERVED        : 8;
        } TIMEOUT_B;
    };

    /** Interrupt enable register */
    union
    {
        __IOM uint32_t IEN;

        struct
        {
            __IOM uint32_t STAIE           : 1;
            __IOM uint32_t STOPIE          : 1;
            __IOM uint32_t ADRSIE          : 1;
            __IOM uint32_t GCSIE           : 1;
            __IOM uint32_t ARBLIE          : 1;
            __IOM uint32_t NACKIE          : 1;
            __IOM uint32_t TOFIE           : 1;
            __IOM uint32_t BUSERRIE        : 1;
            __IOM uint32_t OVRIE           : 1;
            __IOM uint32_t RXFEIE          : 1;
            __IOM uint32_t RXFHIE          : 1;
            __IOM uint32_t RXFFIE          : 1;
            __IOM uint32_t TXFEIE          : 1;
            __IOM uint32_t TXFHIE          : 1;
            __IOM uint32_t TXFFIE          : 1;
            __IM  uint32_t RESERVED        : 17;
        } IEN_B;
    };

    /** Status register */
    union
    {
        __IM uint32_t SR;

        struct
        {
            __IM  uint32_t STA             : 1;
            __IM  uint32_t STOP            : 1;
            __IM  uint32_t ADRS            : 1;
            __IM  uint32_t GCS             : 1;
            __IM  uint32_t ARBLOS          : 1;
            __IM  uint32_t RXNACK          : 1;
            __IM  uint32_t TOF             : 1;
            __IM  uint32_t BUSERR          : 1;
            __IM  uint32_t OVRS            : 1;
            __IM  uint32_t RXFE            : 1;
            __IM  uint32_t RXFH            : 1;
            __IM  uint32_t RXFF            : 1;
            __IM  uint32_t TXFE            : 1;
            __IM  uint32_t TXFH            : 1;
            __IM  uint32_t TXFF            : 1;
            __IM  uint32_t MSF             : 1;
            __IM  uint32_t RD_WR           : 1;
            __IM  uint32_t BUSY            : 1;
            __IM  uint32_t RESERVED        : 14;
        } SR_B;
    };

    /** Status clear register */
    union
    {
        __IOM uint32_t SCR;

        struct
        {
            __IOM uint32_t STASC           : 1;
            __IOM uint32_t STOPSC          : 1;
            __IOM uint32_t ADRSSC          : 1;
            __IOM uint32_t GCSSC           : 1;
            __IOM uint32_t ARBLSC          : 1;
            __IOM uint32_t NACKSC          : 1;
            __IOM uint32_t TOFSC           : 1;
            __IOM uint32_t BUSERRSC        : 1;
            __IOM uint32_t OVRSC           : 1;
            __IM  uint32_t RESERVED        : 23;
        } SCR_B;
    };
} I2C_T;

/**
 * @brief EINT
 */
typedef struct
{
    /** Control register */
    union
    {
        __IOM uint32_t CTRL;

        struct
        {
            __IOM uint32_t SOFT0           : 1;
            __IOM uint32_t TRIG_CFG0       : 3;
            __IOM uint32_t FILTER_CFG0     : 2;
            __IOM uint32_t DIV_CFG0        : 2;
            __IOM uint32_t EN0             : 1;
            __IOM uint32_t SOFT1           : 1;
            __IOM uint32_t TRIG_CFG1       : 3;
            __IOM uint32_t FILTER_CFG1     : 2;
            __IOM uint32_t DIV_CFG1        : 2;
            __IOM uint32_t EN1             : 1;
            __IOM uint32_t SOFT2           : 1;
            __IOM uint32_t TRIG_CFG2       : 3;
            __IOM uint32_t FILTER_CFG2     : 2;
            __IOM uint32_t DIV_CFG2        : 2;
            __IOM uint32_t EN2             : 1;
            __IM  uint32_t RESERVED        : 5;
        } CTRL_B;
    };

    /** Interrupt enable register */
    union
    {
        __IOM uint32_t IEN;

        struct
        {
            __IOM uint32_t ENABLE_IRQ0     : 1;
            __IOM uint32_t ENABLE_IRQ1     : 1;
            __IOM uint32_t ENABLE_IRQ2     : 1;
            __IM  uint32_t RESERVED        : 29;
        } IEN_B;
    };

    /** Status register */
    union
    {
        __IM uint32_t SR;

        struct
        {
            __IM  uint32_t STATE0          : 1;
            __IM  uint32_t STATE1          : 1;
            __IM  uint32_t STATE2          : 1;
            __IM  uint32_t RESERVED        : 29;
        } SR_B;
    };

    /** Status clear register */
    union
    {
        __IOM uint32_t SCR;

        struct
        {
            __IOM uint32_t SCR0            : 1;
            __IOM uint32_t SCR1            : 1;
            __IOM uint32_t SCR2            : 1;
            __IM  uint32_t RESERVED        : 29;
        } SCR_B;
    };
} EINT_T;


/**
 * @brief SYSCTRL
 */
typedef struct
{
    /** Key register */
    union
    {
        __OM uint32_t KEY;

        struct
        {
            __OM  uint32_t LOCKKEY         : 16;
            __OM  uint32_t KEYST           : 1;
            __IM  uint32_t RESERVED        : 15;
        } KEY_B;
    };

    /** Clock register */
    union
    {
        __IOM uint32_t SCCR;

        struct
        {
            __IOM uint32_t SYSCLKDIV       : 3;
            __IM  uint32_t SYSCLKSEL       : 1;
            __IOM uint32_t APBCLKDIV       : 2;
            __IM  uint32_t SWBUSY          : 1;
            __IM  uint32_t RESERVED3       : 25;
        } SCCR_B;
    };

    /** AHB write/read control register */
    union
    {
        __IOM uint32_t AHBBCG;

        struct
        {
            __IOM uint32_t FLSBCEN         : 1;
            __IOM uint32_t GPIOBCEN        : 1;
            __IOM uint32_t AHB2APBCEN      : 1;
            __IOM uint32_t ROMBCEN         : 1;
            __IM  uint32_t RESERVED        : 28;
        } AHBBCG_B;
    };

    /** APB write/read control register */
    union
    {
        __IOM uint32_t APBBCG;

        struct
        {
            __IOM uint32_t WWDTBCEN        : 1;
            __IOM uint32_t I2CBCEN         : 1;
            __IOM uint32_t HSCBCEN         : 1;
            __IOM uint32_t TMR0BCEN        : 1;
            __IOM uint32_t TMR1BCEN        : 1;
            __IOM uint32_t ADC0BCEN        : 1;
            __IOM uint32_t ADC1BCEN        : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t UARTBCEN        : 1;
            __IOM uint32_t SHABCEN         : 1;
            __IOM uint32_t IWDTBCEN        : 1;
            __IOM uint32_t WUPTBCEN        : 1;
            __IOM uint32_t EINTBCEN        : 1;
            __IM  uint32_t RESERVED2       : 19;
        } APBBCG_B;
    };

    /** APB work control register */
    union
    {
        __IOM uint32_t APBWCG;

        struct
        {
            __IOM uint32_t WWDTWCEN        : 1;
            __IOM uint32_t I2CWCEN         : 1;
            __IOM uint32_t HSCWCEN         : 1;
            __IOM uint32_t TMR0WCEN        : 1;
            __IOM uint32_t TMR1WCEN        : 1;
            __IOM uint32_t ADC0WCEN        : 1;
            __IOM uint32_t ADC1WCEN        : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t UARTWCEN        : 1;
            __IOM uint32_t SHAWCEN         : 1;
            __IOM uint32_t IWDTWCEN        : 1;
            __IOM uint32_t WUPTWCEN        : 1;
            __IOM uint32_t EINTWCEN        : 1;
            __IM  uint32_t RESERVED2       : 19;
        } APBWCG_B;
    };

    /** AHB reset control register */
    union
    {
        __IOM uint32_t AHBRSTCR;

        struct
        {
            __IOM uint32_t FLSRST          : 1;
            __IOM uint32_t GPIORST         : 1;
            __IM  uint32_t RESERVED        : 30;
        } AHBRSTCR_B;
    };

    /** APB reset control register */
    union
    {
        __IOM uint32_t APBRSTCR;

        struct
        {
            __IOM uint32_t WWDTRST         : 1;
            __IOM uint32_t I2CRST          : 1;
            __IOM uint32_t HSCRST          : 1;
            __IOM uint32_t TMR0RST         : 1;
            __IOM uint32_t TMR1RST         : 1;
            __IOM uint32_t ADC0RST         : 1;
            __IOM uint32_t ADC1RST         : 1;
            __IM  uint32_t RESERVED1       : 1;
            __IOM uint32_t UARTRST         : 1;
            __IOM uint32_t SHARST          : 1;
            __IOM uint32_t IWDTRST         : 1;
            __IOM uint32_t WUPTRST         : 1;
            __IOM uint32_t EINTRST         : 1;
            __IM  uint32_t RESERVED2       : 19;
        } APBRSTCR_B;
    };

    /** Reset status register */
    union
    {
        __IM uint32_t RSTSR;

        struct
        {
            __IM  uint32_t WWDTRSR         : 1;
            __IM  uint32_t IWDTRSR         : 1;
            __IM  uint32_t SYSRSR          : 1;
            __IM  uint32_t OPLRSR          : 1;
            __IM  uint32_t LPRSR           : 1;
            __IM  uint32_t PORRSR          : 1;
            __IM  uint32_t RESERVED        : 26;
        } RSTSR_B;
    };

    /** Low power mode control register */
    union
    {
        __IOM uint32_t LPMCR;

        struct
        {
            __IOM uint32_t LPM             : 2;
            __IM  uint32_t RESERVED        : 30;
        } LPMCR_B;
    };

    /** Low power control register */
    union
    {
        __IOM uint32_t LPCR;

        struct
        {
            __IOM uint32_t LDO_LP          : 1;
            __IOM uint32_t HSI_LPSEL       : 1;
            __IOM uint32_t WAITLDO         : 6;
            __IOM uint32_t LPE             : 1;
            __IM  uint32_t RESERVED        : 7;
            __IOM uint32_t LPCR_KEY        : 16;
        } LPCR_B;
    };

    /** Start register */
    union
    {
        __IOM uint32_t STA;

        struct
        {
            __IOM uint32_t WUPEN           : 1;
            __IOM uint32_t AUTO            : 1;
            __IOM uint32_t WUPIE           : 1;
            __IOM uint32_t COMM_MODE       : 1;
            __IOM uint32_t FLAG            : 1;
            __IM  uint32_t RESERVED        : 27;
        } STA_B;
    };

    /** Wake up status register */
    union
    {
        __IM uint32_t WUSR;

        struct
        {
            __IM  uint32_t I2C_WUF          : 1;
            __IM  uint32_t HSC_WUF          : 1;
            __IM  uint32_t UART_WUF         : 1;
            __IM  uint32_t IWDT_WUF         : 1;
            __IM  uint32_t RESERVED1        : 1;
            __IM  uint32_t TMR0_WUF         : 1;
            __IM  uint32_t TMR1_WUF         : 1;
            __IM  uint32_t ADC0_WUF         : 1;
            __IM  uint32_t ADC1_WUF         : 1;
            __IM  uint32_t FLASH_WUF        : 1;
            __IM  uint32_t WUPT_WUF         : 1;
            __IM  uint32_t STA_WUF          : 1;
            __IM  uint32_t EINT0_WUF        : 1;
            __IM  uint32_t EINT1_WUF        : 1;
            __IM  uint32_t EINT2_WUF        : 1;
            __IM  uint32_t SHA256_WUF       : 1;
            __IM  uint32_t RESERVED2        : 16;
        } WUSR_B;
    };

    /** Reset status clear register */
    union
    {
        __OM uint32_t RSTSRCLR;

        struct
        {
            __OM  uint32_t WWDTRSRCLR      : 1;
            __OM  uint32_t IWDTRSRCLR      : 1;
            __OM  uint32_t SYSRSRCLR       : 1;
            __OM  uint32_t OPLRSRCLR       : 1;
            __OM  uint32_t LPRSRCLR        : 1;
            __OM  uint32_t PORRSRCLR       : 1;
            __IM  uint32_t RESERVED        : 26;
        } RSTSRCLR_B;
    };

    /** Start clear register */
    union
    {
        __OM uint32_t STACLR;

        struct
        {
            __IM  uint32_t RESERVED1       : 4;
            __OM  uint32_t STA_FLAGCLR     : 1;
            __IM  uint32_t RESERVED2       : 27;
        } STACLR_B;
    };

    /** Wake up status clear register */
    union
    {
        __OM uint32_t WUSRCLR;

        struct
        {
            __OM  uint32_t I2C_WUFCLR       : 1;
            __OM  uint32_t HSC_WUFCLR       : 1;
            __OM  uint32_t UART_WUFCLR      : 1;
            __OM  uint32_t IWDT_WUFCLR      : 1;
            __IM  uint32_t RESERVED1        : 1;
            __OM  uint32_t TMR0_WUFCLR      : 1;
            __OM  uint32_t TMR1_WUFCLR      : 1;
            __OM  uint32_t ADC0_WUFCLR      : 1;
            __OM  uint32_t ADC1_WUFCLR      : 1;
            __OM  uint32_t FLASH_WUFCLR     : 1;
            __OM  uint32_t WUPT_WUFCLR      : 1;
            __OM  uint32_t STA_WUFCLR       : 1;
            __IM  uint32_t EINT0_WUFCLR     : 1;
            __IM  uint32_t EINT1_WUFCLR     : 1;
            __IM  uint32_t EINT2_WUFCLR     : 1;
            __IM  uint32_t SHA256_WUFCLR    : 1;
            __IM  uint32_t RESERVED2        : 16;
        } WUSRCLR_B;
    };

    /** HSI control register */
    union
    {
        __IOM uint32_t HSICLKCR;

        struct
        {
            __IM  uint32_t RESERVED1       : 3;
            __IOM uint32_t HSICLKDIV       : 2;
            __IM  uint32_t HSICLKRDY       : 1;
            __IM  uint32_t RESERVED2       : 26;
        } HSICLKCR_B;
    };

    /** LSI control register */
    union
    {
        __IOM uint32_t LSICLKCR;

        struct
        {
            __IOM uint32_t LSICLKEN        : 1;
            __IM  uint32_t LSICLKRDY       : 1;
            __IM  uint32_t RESERVED        : 30;
        } LSICLKCR_B;
    };

    /** Analog control register */
    union
    {
        __IOM uint32_t ANACR;

        struct
        {
            __IOM uint32_t NTCRPUEN        : 1;
            __IOM uint32_t TSEN            : 1;
            __IM  uint32_t RESERVED1       : 6;
            __IOM uint32_t LVDISEL         : 2;
            __IOM uint32_t SYSLVDVSEL      : 4;
            __IOM uint32_t SYSLVDEN        : 1;
            __IM  uint32_t RESERVED2       : 1;
            __IOM uint32_t VADCMUXSEL      : 3;
            __IM  uint32_t RESERVED3       : 2;
            __IOM uint32_t AFECLKEN        : 1;
            __IOM uint32_t AFEEN           : 1;
            __IM  uint32_t RESERVED4       : 9;
        } ANACR_B;
    };

    /** Debug control register */
    union
    {
        __IOM uint32_t DEBUGCR;

        struct
        {
            __IOM uint32_t SYSDEBUGEN      : 1;
            __IOM uint32_t SYSDEBUGSEL     : 3;
            __IOM uint32_t PAD23FILSEL     : 1;
            __IM  uint32_t RESERVED        : 27;
        } DEBUGCR_B;
    };

    /** Boot control register */
    union
    {
        __IOM uint32_t BOOTCR;

        struct
        {
            __IOM uint32_t REMAPSEL        : 1;
            __IOM uint32_t SYSREMAP        : 2;
            __IM  uint32_t RESERVED        : 29;
        } BOOTCR_B;
    };

    //TODO: 以下寄存器待确定是否保留
    /** ADFT register */
    union
    {
        __IOM uint32_t ADFT;

        struct
        {
            __IOM uint32_t ADFTEN          : 1;
            __IOM uint32_t ADFTDECCODE     : 4;
            __IM  uint32_t RESERVED        : 27;
        } ADFT_B;
    };

    /** Reserved, offset: 0x54 ~ 0x7C*/
    __IM uint32_t RESERVED[11];
		
    /** LTBG Trim register */
    union
    {
        __IOM uint32_t LTLPBGTR;

        struct
        {
            __IOM uint32_t TTRIM           : 5;
            __IM  uint32_t RESERVED1       : 3;
            __IOM uint32_t VTRIM           : 5;
            __IM  uint32_t RESERVED2       : 3;
            __IOM uint32_t RESBGTRIM       : 6;
            __IM  uint32_t RESERVED3       : 2;
            __IOM uint32_t SWCAPCADCTRIM   : 7;
            __IM  uint32_t RESERVED4       : 1;
        } LTLPBGTR_B;
    };

    /** OSC Trim register */
    union
    {
        __IOM uint32_t OSCTR;

        struct
        {
            __IOM uint32_t HSIFREQTRIM     : 8;
            __IOM uint32_t HSIFREQSEL      : 1;
            __IM  uint32_t RESERVED1       : 7;
            __IOM uint32_t LSIFREQTRIM     : 9;
            __IM  uint32_t RESERVED2       : 7;
        } OSCTR_B;
    };

    /** NTC/TS Trim register */
    union
    {
        __IOM uint32_t NTCTSTR;

        struct
        {
            __IOM uint32_t NTCTRIM         : 6;
            __IM  uint32_t RESERVED1       : 2;
            __IOM uint32_t TSTRIM          : 6;
            __IM  uint32_t RESERVED2       : 2;
            __IOM uint32_t LDOVTRIM        : 4;
            __IM  uint32_t RESERVED3       : 4;
            __IOM uint32_t SWCAPVADCTRIM   : 7;
            __IM  uint32_t RESERVED4       : 1;
        } NTCTSTR_B;
    };
} SYSCTRL_T;

/** FLASH base address in the alias region */
#define FLASH_BASE              ((uint32_t)0x08000000)
/** SRAM base address in the alias region */
#define SRAM_BASE               ((uint32_t)0x20000000)
/** ROM base address in the alias region */
#define ROM_BASE                ((uint32_t)0x00020000)
/** Peripheral base address in the alias region */
#define PERIPH_BASE             ((uint32_t)0x40000000)

/** Peripheral memory map */
#define APBPERIPH_BASE          PERIPH_BASE
#define AHBPERIPH_BASE          PERIPH_BASE + 0x10000

#define I2C_BASE                (APBPERIPH_BASE + 0x0000)
#define HSC_BASE                (APBPERIPH_BASE + 0x1000)
#define UART_BASE               (APBPERIPH_BASE + 0x2000)
#define IWDT_BASE               (APBPERIPH_BASE + 0x3000)
#define WWDT_BASE               (APBPERIPH_BASE + 0x4000)
#define TMR0_BASE               (APBPERIPH_BASE + 0x5000)
#define TMR1_BASE               (APBPERIPH_BASE + 0x6000)
#define CADC_BASE               (APBPERIPH_BASE + 0x7000)
#define VADC_BASE               (APBPERIPH_BASE + 0x8000)
#define WUPT_BASE               (APBPERIPH_BASE + 0x9000)
#define SHA256_BASE             (APBPERIPH_BASE + 0xA000)
#define EINT_BASE               (APBPERIPH_BASE + 0xB000)

#define SYSCTRL_BASE            (AHBPERIPH_BASE + 0x00000)
#define FLASH_CTRL_BASE         (AHBPERIPH_BASE + 0x10000)
#define GPIO_BASE               (AHBPERIPH_BASE + 0x20000)

#define I2C                     ((I2C_T  *) I2C_BASE)
#define HSC                     ((HSC_T  *) HSC_BASE)
#define UART                    ((UART_T *) UART_BASE)
#define IWDT                    ((IWDT_T *) IWDT_BASE)
#define WWDT                    ((WWDT_T *) WWDT_BASE)
#define TMR0                    ((TMR_T  *) TMR0_BASE)
#define TMR1                    ((TMR_T  *) TMR1_BASE)
#define CADC                    ((CADC_T *) CADC_BASE)
#define VADC                    ((VADC_T *) VADC_BASE)
#define WUPT                    ((WUPT_T *) WUPT_BASE)
#define HMAC                    ((HMAC_T *) SHA256_BASE)
#define EINT                    ((EINT_T *) EINT_BASE)

#define FLASH                   ((FLASH_T   *) FLASH_CTRL_BASE) 
#define SYSCTRL                 ((SYSCTRL_T *) SYSCTRL_BASE)
#define GPIO                    ((GPIO_T    *) GPIO_BASE)

/** Define one bit mask */
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

#define SET_BIT(REG, BIT)       ((REG) |= (BIT))

#define CLEAR_BIT(REG, BIT)     ((REG) &= ~(BIT))

#define READ_BIT(REG, BIT)      ((REG) & (BIT))

#define CLEAR_REG(REG)          ((REG) = (0x0))

#define WRITE_REG(REG, VAL)     ((REG) = (VAL))

#define READ_REG(REG)           ((REG))

#define MODIFY_REG(REG, CLEARMASK, SETMASK)  WRITE_REG((REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK)))


#ifdef __cplusplus
}
#endif

#endif /* __BMP561_H */
