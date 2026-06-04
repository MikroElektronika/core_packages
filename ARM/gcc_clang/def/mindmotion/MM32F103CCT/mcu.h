/**
******************************************************************************
* @file    MM32F103xCxE_o.h
* @brief   CMSIS Cortex-M3 Device Peripheral Access Layer Header File.
*          This file contains all the peripheral register's definitions, bits
*          definitions and memory mapping for MM32F103xCxE_o High Density, Medium
*          Density and Low Density devices.
* @version V1.0.0
* @date    2018/09/17
******************************************************************************
*/

/** @addtogroup CMSIS
* @{
*/

/** @addtogroup MM32F103xCxE_o
* @{
*/

#ifndef __MM32F103xCxE_o_H
#define __MM32F103xCxE_o_H

/** @addtogroup Library_configuration_section
* @{
*/



#if !defined  USE_STDPERIPH_DRIVER
/**
* @brief Comment the line below if you will not use the peripherals drivers.
In this case, these drivers will not be included and the application code will
be based on direct access to peripherals registers
*/
/*#define USE_STDPERIPH_DRIVER*/
#endif

/**
* @brief In the following line adjust the value of External High Speed oscillator (HSE)
used in your application
*/
#define HSE_Value    ((uint32_t)8000000L) /*!< Value of the External oscillator in Hz*/
#define HSE_VALUE    HSE_Value
/**
* @brief In the following line adjust the External High Speed oscillator (HSE) Startup
Timeout value
*/
#define HSEStartUp_TimeOut    ((uint16_t)0x0500) /*!< Time out for HSE start up */
#define HSE_STARTUP_TIMEOUT   HSEStartUp_TimeOut

#define HSI_Value_Pll_ON      ((uint32_t)48000000/4) /*!< Value of the Internal oscillator in Hz*/
#define HSI_VALUE_PLL_ON      HSI_Value_Pll_ON

#define HSI_Value_Pll_OFF     ((uint32_t)48000000/6) /*!< Value of the Internal oscillator in Hz*/
#define HSI_VALUE_PLL_OFF     HSI_Value_Pll_OFF

/*!< [31:16] MM32F103xCxE_o Standard Peripheral Library main version */
#define __MM32F103xCxE_o_STDPERIPH_VERSION_MAIN   (0x01)
/*!< [15:8]  MM32F103xCxE_o Standard Peripheral Library sub1 version */
#define __MM32F103xCxE_o_STDPERIPH_VERSION_SUB1   (0x00)
/*!< [7:0]  MM32F103xCxE_o Standard Peripheral Library sub2 version */
#define __MM32F103xCxE_o_STDPERIPH_VERSION_SUB2   (0x00)
/*!< MM32F103xCxE_o Standard Peripheral Library version number */
#define __MM32F103xCxE_o_STDPERIPH_VERSION       ((__MM32F103xCxE_o_STDPERIPH_VERSION_MAIN << 16)\
| (__MM32F103xCxE_o_STDPERIPH_VERSION_SUB1 << 8)\
  | __MM32F103xCxE_o_STDPERIPH_VERSION_SUB2)

/**
* @}
*/

/** @addtogroup Configuration_section_for_CMSIS
* @{
*/

/**
* @brief Configuration of the Cortex-M3 Processor and Core Peripherals
*/
#define __MPU_PRESENT             0 /*!< MM32F103xCxE_o does not provide a MPU present or not  */
#define __NVIC_PRIO_BITS          4 /*!< MM32F103xCxE_o uses 4 Bits for the Priority Levels    */
#define __Vendor_SysTickConfig    0 /*!< Set to 1 if different SysTick Config is used */

/*!< Interrupt Number Definition */
typedef enum IRQn {
    /******  Cortex-M3 Processor Exceptions Numbers ***************************************************/
    NonMaskableInt_IRQn         = -14,    /*!< 2 Non Maskable Interrupt                             */
    MemoryManagement_IRQn       = -12,    /*!< 4 Cortex-M3 Memory Management Interrupt              */
    BusFault_IRQn               = -11,    /*!< 5 Cortex-M3 Bus Fault Interrupt                      */
    UsageFault_IRQn             = -10,    /*!< 6 Cortex-M3 Usage Fault Interrupt                    */
    SVCall_IRQn                 = -5,     /*!< 11 Cortex-M3 SV Call Interrupt                       */
    DebugMonitor_IRQn           = -4,     /*!< 12 Cortex-M3 Debug Monitor Interrupt                 */
    PendSV_IRQn                 = -2,     /*!< 14 Cortex-M3 Pend SV Interrupt                       */
    SysTick_IRQn                = -1,     /*!< 15 Cortex-M3 System Tick Interrupt                   */

    /******  MM32F103xCxE_o CM3 specific Interrupt Numbers *********************************************************/
    WWDG_IRQn                   = 0,      /*!< Window WatchDog Interrupt                            */
    PVD_IRQn                    = 1,      /*!< PVD through EXTI Line detection Interrupt            */
    TAMPER_IRQn                 = 2,      /*!< Tamper Interrupt                                     */
    RTC_IRQn                    = 3,      /*!< RTC global Interrupt                                 */
    FLASH_IRQn                  = 4,      /*!< FLASH global Interrupt                               */
    RCC_CRS_IRQn                = 5,      /*!< RCC global Interrupt                                 */
    EXTI0_IRQn                  = 6,      /*!< EXTI Line0 Interrupt                                 */
    EXTI1_IRQn                  = 7,      /*!< EXTI Line1 Interrupt                                 */
    EXTI2_IRQn                  = 8,      /*!< EXTI Line2 Interrupt                                 */
    EXTI3_IRQn                  = 9,      /*!< EXTI Line3 Interrupt                                 */
    EXTI4_IRQn                  = 10,     /*!< EXTI Line4 Interrupt                                 */
    DMA1_Channel1_IRQn          = 11,     /*!< DMA1 Channel 1 global Interrupt                      */
    DMA1_Channel2_IRQn          = 12,     /*!< DMA1 Channel 2 global Interrupt                      */
    DMA1_Channel3_IRQn          = 13,     /*!< DMA1 Channel 3 global Interrupt                      */
    DMA1_Channel4_IRQn          = 14,     /*!< DMA1 Channel 4 global Interrupt                      */
    DMA1_Channel5_IRQn          = 15,     /*!< DMA1 Channel 5 global Interrupt                      */
    DMA1_Channel6_IRQn          = 16,     /*!< DMA1 Channel 6 global Interrupt                      */
    DMA1_Channel7_IRQn          = 17,     /*!< DMA1 Channel 7 global Interrupt                      */
    ADC1_IRQn                   = 18,     /*!< ADC1 et ADC2 global Interrupt                        */


    CAN1_RX_IRQn                = 21,     /*!< CAN1 RX1 Interrupt                                   */

    EXTI9_5_IRQn                = 23,     /*!< External Line[9:5] Interrupts                        */
    TIM1_BRK_IRQn               = 24,     /*!< TIM1 Break Interrupt                                 */
    TIM1_UP_IRQn                = 25,     /*!< TIM1 Update Interrupt                                */
    TIM1_TRG_COM_IRQn           = 26,     /*!< TIM1 Trigger and Commutation Interrupt               */
    TIM1_CC_IRQn                = 27,     /*!< TIM1 Capture Compare Interrupt                       */
    TIM2_IRQn                   = 28,     /*!< TIM2 global Interrupt                                */
    TIM3_IRQn                   = 29,     /*!< TIM3 global Interrupt                                */
    TIM4_IRQn                   = 30,     /*!< TIM4 global Interrupt                                */
    I2C1_IRQn                   = 31,     /*!< I2C1 Event Interrupt                                 */

    I2C2_IRQn                   = 33,     /*!< I2C2 Event Interrupt                                 */

    SPI1_IRQn                   = 35,     /*!< SPI1 global Interrupt                                */
    SPI2_IRQn                   = 36,     /*!< SPI2 global Interrupt                                */
    UART1_IRQn                  = 37,     /*!< UART1 global Interrupt                               */
    UART2_IRQn                  = 38,     /*!< UART2 global Interrupt                               */
    UART3_IRQn                  = 39,     /*!< UART3 global Interrupt                               */
    EXTI15_10_IRQn              = 40,     /*!< External Line[15:10] Interrupts                      */
    RTCAlarm_IRQn               = 41,     /*!< RTC Alarm through EXTI Line Interrupt                */
    USB_WKUP_IRQn               = 42,     /*!< USB WakeUp from suspend through EXTI Line Interrupt  */
    TIM8_BRK_IRQn               = 43,     /*!< TIM8 Break Interrupt                                 */
    TIM8_UP_IRQn                = 44,     /*!< TIM8 Update Interrupt                                */
    TIM8_TRG_COM_IRQn           = 45,     /*!< TIM8 Trigger and Commutation Interrupt               */
    TIM8_CC_IRQn                = 46,     /*!< TIM8 Capture Compare Interrupt                       */


    SDIO_IRQn                   = 49,     /*   SDIO              */
    TIM5_IRQn                   = 50,     /*   TIM5              */
    SPI3_IRQn                   = 51,     /*   SPI3              */
    UART4_IRQn                  = 52,     /*   UART4             */
    UART5_IRQn                  = 53,     /*   UART5             */
    TIM6_IRQn                   = 54,     /*   TIM6              */
    TIM7_IRQn                   = 55,     /*   TIM7              */
    DMA2_Channel1_IRQn          = 56,     /*   DMA2 Channel 1    */
    DMA2_Channel2_IRQn          = 57,     /*   DMA2 Channel 2    */
    DMA2_Channel3_IRQn          = 58,     /*   DMA2 Channel 3    */
    DMA2_Channel4_IRQn          = 59,     /*   DMA2 Channel 4    */
    DMA2_Channel5_IRQn          = 60,     /*   DMA2 Channel 5    */
    ETHERNET_MAC_IRQn           = 61,     /*   Ethernet          */


    COMP1_2_IRQn                = 64,     /*   COMP1,COMP2       */


    USB_OTG_FS_IRQn             = 67,     /*   USB_FS            */


    UART6_IRQn                  = 71,     /*   UART6             */







    AES_IRQn                    = 79,     /*   AES               */
    TRNG_IRQn                   = 80,     /*   TRNG              */

    UART7_IRQn                  = 82,     /*   UART7             */
    UART8_IRQn                  = 83,     /*   UART8             */

} IRQn_Type;




/**
* @}
*/

#include <core_cm3.h>

#include <stdint.h>

/** @addtogroup Exported_types
* @{
*/

/*!< MM32F103xCxE_o Standard Peripheral Library old types (maintained for legacy prupose) */
typedef int32_t s32;
typedef int16_t s16;
typedef int8_t  s8;

typedef const int32_t sc32;  /*!< Read Only */
typedef const int16_t sc16;  /*!< Read Only */
typedef const int8_t  sc8;   /*!< Read Only */

typedef __IO int32_t  vs32;
typedef __IO int16_t  vs16;
typedef __IO int8_t   vs8;

typedef __I int32_t vsc32;  /*!< Read Only */
typedef __I int16_t vsc16;  /*!< Read Only */
typedef __I int8_t  vsc8;   /*!< Read Only */

typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t  u8;

typedef const uint32_t uc32;  /*!< Read Only */
typedef const uint16_t uc16;  /*!< Read Only */
typedef const uint8_t  uc8;   /*!< Read Only */

typedef __IO uint32_t vu32;
typedef __IO uint16_t vu16;
typedef __IO uint8_t  vu8;

typedef __I uint32_t vuc32;  /*!< Read Only */
typedef __I uint16_t vuc16;  /*!< Read Only */
typedef __I uint8_t  vuc8;   /*!< Read Only */

typedef enum {FALSE = 0, TRUE = !FALSE} bool;

typedef enum {RESET = 0, SET = !RESET} FlagStatus, ITStatus;

typedef enum {DISABLE = 0, ENABLE = !DISABLE} FunctionalState;
#define IS_FUNCTIONAL_STATE(STATE) (((STATE) == DISABLE) || ((STATE) == ENABLE))

typedef enum {ERROR = 0, SUCCESS = !ERROR} ErrorStatus;

#define SETnBIT(VALUE,BITs)   ((VALUE) |= (1<<BITs))
#define RSTnBIT(VALUE,BITs)   ((VALUE) &= ~(1<<BITs))


/**
* @}
*/

typedef struct {
    __IO uint32_t     SHCSR;  //0XE000DE24
    __IO uint8_t      MFSR;   //0XE000DE28
    __IO uint8_t      BFSR;   //0XE000DE29
    __IO uint16_t     UFSR;   //0XE000DE2A
    __IO uint32_t     HFSR;   //0XE000DE2C
    __IO uint32_t     DFSR;   //0XE000DE30
    __IO uint32_t     MMAR;   //0XE000DE34
    __IO uint32_t     BFAR;   //0XE000DE38
} HARD_FAULT_TypeDef;


/** @addtogroup Peripheral_registers_structures
* @{
*/

/**
* @brief Analog to Digital Converter
*/

typedef struct {
    __IO uint32_t ADDATA;
    __IO uint32_t ADCFG;
    __IO uint32_t ADCR;
    __IO uint32_t ADCHS;
    __IO uint32_t ADCMPR;
    __IO uint32_t ADSTA;
    __IO uint32_t ADDR0;
    __IO uint32_t ADDR1;
    __IO uint32_t ADDR2;
    __IO uint32_t ADDR3;
    __IO uint32_t ADDR4;
    __IO uint32_t ADDR5;
    __IO uint32_t ADDR6;
    __IO uint32_t ADDR7;
    __IO uint32_t ADDR8;
    // __IO uint32_t ADDR9;
    // __IO uint32_t ADDR10;
    // __IO uint32_t ADDR11;
    // __IO uint32_t ADDR12;
    // __IO uint32_t ADDR13;
    // __IO uint32_t ADDR14;
    // __IO uint32_t ADDR15;
} ADC_TypeDef;

/**
* @brief Backup Registers
*/

typedef struct {
    __IO uint32_t RESERVED0;//0x24
    __IO uint16_t DR1;//0x28
    __IO uint16_t RESERVED1;
    __IO uint16_t DR2;
    __IO uint16_t RESERVED2;
    __IO uint16_t DR3;
    __IO uint16_t RESERVED3;
    __IO uint16_t DR4;
    __IO uint16_t RESERVED4;
    __IO uint16_t DR5;
    __IO uint16_t RESERVED5;
    __IO uint16_t DR6;
    __IO uint16_t RESERVED6;
    __IO uint16_t DR7;
    __IO uint16_t RESERVED7;
    __IO uint16_t DR8;
    __IO uint16_t RESERVED8;
    __IO uint16_t DR9;
    __IO uint16_t RESERVED9;
    __IO uint16_t DR10;
    __IO uint16_t RESERVED10;
    __IO uint16_t RTCCR;
    __IO uint16_t RESERVED11;
    __IO uint16_t CR;
    __IO uint16_t RESERVED12;
    __IO uint16_t CSR;
    __IO uint16_t RESERVED13;
    __IO uint16_t DR11;
    __IO uint16_t RESERVED14;
    __IO uint16_t DR12;
    __IO uint16_t RESERVED15;
    __IO uint16_t DR13;
    __IO uint16_t RESERVED16;
    __IO uint16_t DR14;
    __IO uint16_t RESERVED17;
    __IO uint16_t DR15;
    __IO uint16_t RESERVED18;
    __IO uint16_t DR16;
    __IO uint16_t RESERVED19;
    __IO uint16_t DR17;
    __IO uint16_t RESERVED20;
    __IO uint16_t DR18;
    __IO uint16_t RESERVED21;
    __IO uint16_t DR19;
    __IO uint16_t RESERVED22;
    __IO uint16_t DR20;
    __IO uint16_t RESERVED23;

} BKP_TypeDef;

/**
* @brief CAN basic
*/
typedef struct {
    __IO uint32_t CR;             //0x00
    __IO uint32_t CMR;            //0x04
    __IO uint32_t SR;             //0x08
    __IO uint32_t IR;             //0x0c
    __IO uint32_t ACR;            //0x10
    __IO uint32_t AMR;            //0x14
    __IO uint32_t BTR0;           //0x18
    __IO uint32_t BTR1;           //0x1C
    __IO uint32_t RESERVED0;  //0x20
    __IO uint32_t RESERVED1;  //0x24
    __IO uint32_t TXID0;        //0x28
    __IO uint32_t TXID1;        //0x2c
    __IO uint32_t TXDR0;        //0x30
    __IO uint32_t TXDR1;        //0x34
    __IO uint32_t TXDR2;        //0x38
    __IO uint32_t TXDR3;        //0x3c
    __IO uint32_t TXDR4;        //0x40
    __IO uint32_t TXDR5;        //0x44
    __IO uint32_t TXDR6;        //0x48
    __IO uint32_t TXDR7;        //0x4c
    __IO uint32_t RXID0;        //0x50
    __IO uint32_t RXID1;        //0x54
    __IO uint32_t RXDR0;        //0x58
    __IO uint32_t RXDR1;        //0x5C
    __IO uint32_t RXDR2;        //0x60
    __IO uint32_t RXDR3;      //0x64
    __IO uint32_t RXDR4;      //0x68
    __IO uint32_t RXDR5;        //0x6c
    __IO uint32_t RXDR6;        //0x70
    __IO uint32_t RXDR7;        //0x74
    __IO uint32_t RESERVED2;  //0x78
    __IO uint32_t CDR;            //0x7c
} CAN_TypeDef;

/**
* @brief CAN Peli
*/
#define ACR0 FF
#define ACR1 ID0
#define ACR2 ID1
#define ACR3 DATA0
#define AMR0 DATA1
#define AMR1 DATA2
#define AMR2 DATA3
#define AMR3 DATA4
typedef struct {
    __IO uint32_t MOD;        //0x00
    __IO uint32_t CMR;        //0x04
    __IO uint32_t SR;         //0x08
    __IO uint32_t IR;         //0x0c
    __IO uint32_t IER;            //0x10
    __IO uint32_t RESERVED0;  //0x14
    __IO uint32_t BTR0;       //0x18
    __IO uint32_t BTR1;       //0x1C
    __IO uint32_t RESERVED1;  //0x20
    __IO uint32_t RESERVED2;  //0x24
    __IO uint32_t RESERVED3;  //0x28
    __IO uint32_t ALC;        //0x2c
    __IO uint32_t ECC;            //0x30
    __IO uint32_t EWLR;       //0x34
    __IO uint32_t RXERR;      //0x38
    __IO uint32_t TXERR;      //0x3c
    __IO uint32_t FF;             //0x40
    __IO uint32_t ID0;        //0x44
    __IO uint32_t ID1;        //0x48
    __IO uint32_t DATA0;      //0x4c
    __IO uint32_t DATA1;      //0x50
    __IO uint32_t DATA2;      //0x54
    __IO uint32_t DATA3;      //0x58
    __IO uint32_t DATA4;      //0x5C
    __IO uint32_t DATA5;      //0x60
    __IO uint32_t DATA6;      //0x64
    __IO uint32_t DATA7;      //0x68
    __IO uint32_t DATA8;      //0x6c
    __IO uint32_t DATA9;      //0x70
    __IO uint32_t RMC;
    __IO uint32_t RBSA;
    __IO uint32_t CDR;        //0x7c
} CAN_Peli_TypeDef;


/**
* @}
*/

typedef struct {
    __IO uint32_t     CCR;
    __IO uint32_t     SR;
    __IO uint32_t     IRQMASKR;
    __IO uint32_t     IRQSTATR;
    __IO uint32_t     RESERVED0;
    __IO uint32_t     CSHR;
    __IO uint32_t     CSMR;
} CACHE_TypeDef;

/**
* @brief COMP
*/

typedef struct {
    __IO uint32_t COMP_CSR1;
    __IO uint32_t COMP_CSR2;
} COMP_TypeDef;


/**
* @brief CRC calculation unit
*/
typedef struct {
    __IO uint32_t DR;
    __IO uint16_t IDR;
    __IO uint16_t RESERVED0;
    __IO uint32_t CR;
} CRC_TypeDef;

typedef struct {
    __IO uint32_t CR;
    __IO uint32_t CFGR;
    __IO uint32_t ISR;
    __IO uint32_t ICR;
} CRS_TypeDef;


/**
* @brief Debug MCU
*/

typedef struct {
    __IO uint32_t IDCODE;
    __IO uint32_t CR;
} DBGMCU_TypeDef;

/**
* @brief DMA Controller
*/

typedef struct {
    __IO uint32_t CCR;
    __IO uint32_t CNDTR;
    __IO uint32_t CPAR;
    __IO uint32_t CMAR;
} DMA_Channel_TypeDef;

typedef struct {
    __IO uint32_t ISR;
    __IO uint32_t IFCR;
} DMA_TypeDef;

/**
* @brief External Interrupt/Event Controller
*/

typedef struct {
    __IO uint32_t IMR;
    __IO uint32_t EMR;
    __IO uint32_t RTSR;
    __IO uint32_t FTSR;
    __IO uint32_t SWIER;
    __IO uint32_t PR;
} EXTI_TypeDef;

/**
* @brief FLASH Registers
*/
typedef struct {
    __IO uint32_t ACR;
    __IO uint32_t KEYR;
    __IO uint32_t OPTKEYR;
    __IO uint32_t SR;
    __IO uint32_t CR;
    __IO uint32_t AR;
    __IO uint32_t RESERVED;
    __IO uint32_t OBR;
    __IO uint32_t WRP0R;
    __IO uint32_t WRP1R;
    __IO uint32_t WRP2R;
    __IO uint32_t WRP3R;
    __IO uint32_t RESERVED0;
    __IO uint32_t RESERVED1;
    __IO uint32_t RESERVED2;
    __IO uint32_t RESERVED3;
    __IO uint32_t SECUKEY0R;
    __IO uint32_t SECUKEY1R;
    // __IO uint32_t RESERVED4;
    // __IO uint32_t RESERVED5;
    // __IO uint32_t EEPKEYR;
} FLASH_TypeDef;

/**
* @brief Option Bytes Registers
*/

typedef struct {
    __IO uint16_t RDP;
    __IO uint16_t USER;
    __IO uint16_t Data0;
    __IO uint16_t Data1;
    __IO uint16_t WRP0;
    __IO uint16_t WRP1;
    __IO uint16_t WRP2;
    __IO uint16_t WRP3;
} OB_TypeDef;



/**
* @brief General Purpose IO
*/

typedef struct {
    __IO uint32_t CRL;
    __IO uint32_t CRH;
    __IO uint32_t IDR;
    __IO uint32_t ODR;
    __IO uint32_t BSRR;
    __IO uint32_t BRR;
    __IO uint32_t LCKR;
    __IO uint32_t RESERVED0;
    __IO uint32_t AFRL;
    __IO uint32_t AFRH;
} GPIO_TypeDef;

/**
* @brief SysTem Configuration
*/

typedef struct {
    __IO uint32_t CFGR;       /*!< SYSCFG configuration register ,                           Address offset: 0x00 */
    __IO uint32_t RESERVED0;
    __IO uint32_t EXTICR[4];

} SYSCFG_TypeDef;


/**
* @brief Inter-integrated Circuit Interface
*/

typedef struct {
    __IO uint16_t IC_CON;
    __IO uint16_t RESERVED0;
    __IO uint16_t IC_TAR;
    __IO uint16_t RESERVED1;
    __IO uint16_t IC_SAR;
    __IO uint16_t RESERVED2;
    // __IO uint16_t IC_HS_MADDR;
    __IO uint32_t RESERVED3;
    __IO uint16_t IC_DATA_CMD;
    __IO uint16_t RESERVED4;
    __IO uint16_t IC_SS_SCL_HCNT;
    __IO uint16_t RESERVED5;
    __IO uint16_t IC_SS_SCL_LCNT;
    __IO uint16_t RESERVED6;
    __IO uint16_t IC_FS_SCL_HCNT;
    __IO uint16_t RESERVED7;
    __IO uint16_t IC_FS_SCL_LCNT;
    __IO uint16_t RESERVED8;
    // __IO uint16_t IC_HS_SCL_HCNT;
    __IO uint32_t RESERVED9;
    // __IO uint16_t IC_HS_SCL_LCNT;
    __IO uint32_t RESERVED10;
    __IO uint16_t IC_INTR_STAT;
    __IO uint16_t RESERVED11;
    __IO uint16_t IC_INTR_MASK;
    __IO uint16_t RESERVED12;
    __IO uint16_t IC_RAW_INTR_STAT;
    __IO uint16_t RESERVED13;
    __IO uint16_t IC_RX_TL;
    __IO uint16_t RESERVED14;
    __IO uint16_t IC_TX_TL;
    __IO uint16_t RESERVED15;
    __IO uint16_t IC_CLR_INTR;
    __IO uint16_t RESERVED16;
    __IO uint16_t IC_CLR_RX_UNDER;
    __IO uint16_t RESERVED17;
    __IO uint16_t IC_CLR_RX_OVER;
    __IO uint16_t RESERVED18;
    __IO uint16_t IC_CLR_TX_OVER;
    __IO uint16_t RESERVED19;
    __IO uint16_t IC_CLR_RD_REQ;
    __IO uint16_t RESERVED20;
    __IO uint16_t IC_CLR_TX_ABRT;
    __IO uint16_t RESERVED21;
    __IO uint16_t IC_CLR_RX_DONE;
    __IO uint16_t RESERVED22;
    __IO uint16_t IC_CLR_ACTIVITY;
    __IO uint16_t RESERVED23;
    __IO uint16_t IC_CLR_STOP_DET;
    __IO uint16_t RESERVED24;
    __IO uint16_t IC_CLR_START_DET;
    __IO uint16_t RESERVED25;
    __IO uint16_t IC_CLR_GEN_CALL;
    __IO uint16_t RESERVED26;
    __IO uint16_t IC_ENABLE;
    __IO uint16_t RESERVED27;
    __IO uint16_t IC_STATUS;
    __IO uint16_t RESERVED28;
    __IO uint16_t IC_TXFLR;
    __IO uint16_t RESERVED29;
    __IO uint16_t IC_RXFLR;
    __IO uint16_t RESERVED30;
    __IO uint16_t IC_SDA_HOLD;
    __IO uint16_t RESERVED31;
    __IO uint32_t RESERVED32;
    __IO uint32_t RESERVED33;
    __IO uint16_t IC_DMA_CR;
    __IO uint16_t RESERVED34;
    __IO uint32_t RESERVED35;
    __IO uint32_t RESERVED36;
    // __IO uint16_t IC_DMA_TDLR;
    // __IO uint16_t IC_DMA_RDLR;
    __IO uint16_t IC_SDA_SETUP;
    __IO uint16_t RESERVED37;
    __IO uint16_t IC_ACK_GENERAL_CALL;
    __IO uint16_t RESERVED38;

    // __IO uint32_t IC_FS_SPKLEN;
    // __IO uint32_t IC_HS_SPKLEN;

    // __IO uint16_t IC_CLR_RESTART_DET;
    // __IO uint16_t RESERVED28;
    // __IO uint32_t IC_COMP_PARAM_1;
    // __IO uint32_t IC_COMP_VERSION;
    // __IO uint32_t IC_COMP_TYPE;
} I2C_TypeDef;

/**
* @brief Independent WATCHDOG
*/

typedef struct {
    __IO uint32_t KR;
    __IO uint32_t PR;
    __IO uint32_t RLR;
    __IO uint32_t SR;
    __IO uint32_t CTRL;
} IWDG_TypeDef;

/**
* @brief Power Control
*/

typedef struct {
    __IO uint32_t CR;
    __IO uint32_t CSR;
} PWR_TypeDef;

/**
* @brief Reset and Clock Control
*/

typedef struct {
    __IO uint32_t CR;
    __IO uint32_t CFGR;
    __IO uint32_t CIR;
    __IO uint32_t AHB3RSTR;
    __IO uint32_t AHB2RSTR;
    __IO uint32_t AHB1RSTR;
    __IO uint32_t APB2RSTR;
    __IO uint32_t APB1RSTR;
    __IO uint32_t AHB3ENR;
    __IO uint32_t AHB2ENR;
    __IO uint32_t AHB1ENR;
    __IO uint32_t APB2ENR;
    __IO uint32_t APB1ENR;
    __IO uint32_t BDCR;
    __IO uint32_t CSR;
    __IO uint32_t SYSCFGR;
} RCC_TypeDef;

/**
* @brief Real-Time Clock
*/

typedef struct {
    __IO uint16_t CRH;
    __IO uint16_t RESERVED0;
    __IO uint16_t CRL;
    __IO uint16_t RESERVED1;
    __IO uint16_t PRLH;
    __IO uint16_t RESERVED2;
    __IO uint16_t PRLL;
    __IO uint16_t RESERVED3;
    __IO uint16_t DIVH;
    __IO uint16_t RESERVED4;
    __IO uint16_t DIVL;
    __IO uint16_t RESERVED5;
    __IO uint16_t CNTH;
    __IO uint16_t RESERVED6;
    __IO uint16_t CNTL;
    __IO uint16_t RESERVED7;
    __IO uint16_t ALRH;
    __IO uint16_t RESERVED8;
    __IO uint16_t ALRL;
    __IO uint16_t RESERVED9;
} RTC_TypeDef;


/**
* @brief Serial Peripheral Interface
*/

#define NSSR    SCSR
#define EXTCTL  EXTSCR
typedef struct {
    __IO uint32_t TXREG;      //0
    __IO uint32_t RXREG;      //4
    __IO uint16_t CSTAT;      //8
    __IO uint16_t RESERVED0;
    __IO uint16_t INTSTAT;    //c
    __IO uint16_t RESERVED1;
    __IO uint16_t INTEN;      //10
    __IO uint16_t RESERVED2;
    __IO uint16_t INTCLR;     //14
    __IO uint16_t RESERVED3;
    __IO uint16_t GCTL;       //18
    __IO uint16_t RESERVED4;
    __IO uint16_t CCTL;       //1c
    __IO uint16_t RESERVED5;
    __IO uint16_t SPBRG;      //20
    __IO uint16_t RESERVED6;
    __IO uint16_t RXDNR;      //24
    __IO uint16_t RESERVED7;
    __IO uint16_t SCSR;       //28
    __IO uint16_t RESERVED8;
    __IO uint16_t EXTSCR;     //2c
    __IO uint16_t RESERVED9;
} SPI_TypeDef;


/**
* @brief TIM
*/
typedef struct {
    __IO uint16_t CR1;
    __IO uint16_t RESERVED0;
    __IO uint16_t CR2;
    __IO uint16_t RESERVED1;
    __IO uint16_t SMCR;
    __IO uint16_t RESERVED2;
    __IO uint16_t DIER;
    __IO uint16_t RESERVED3;
    __IO uint16_t SR;
    __IO uint16_t RESERVED4;
    __IO uint16_t EGR;
    __IO uint16_t RESERVED5;
    __IO uint16_t CCMR1;
    __IO uint16_t RESERVED6;
    __IO uint16_t CCMR2;
    __IO uint16_t RESERVED7;
    __IO uint16_t CCER;
    __IO uint16_t RESERVED8;
    __IO uint32_t CNT;    //16->32bit
    __IO uint16_t PSC;
    __IO uint16_t RESERVED10;
    __IO uint32_t ARR;    //16->32bit
    __IO uint16_t RCR;
    __IO uint16_t RESERVED12;
    __IO uint32_t CCR1;   //16->32bit
    __IO uint32_t CCR2;   //16->32bit
    __IO uint32_t CCR3;   //16->32bit
    __IO uint32_t CCR4;   //16->32bit
    __IO uint32_t BDTR;
    __IO uint16_t DCR;
    __IO uint16_t RESERVED18;
    __IO uint16_t DMAR;
    __IO uint16_t RESERVED19;
} TIM_TypeDef;


/**
* @brief Universal Synchronous Asynchronous Receiver Transmitter
*/
#define RXADDR  RXADD
typedef struct {
    __IO uint32_t TDR;
    __IO uint32_t RDR;
    __IO uint32_t CSR;
    __IO uint32_t ISR;
    __IO uint32_t IER;
    __IO uint32_t ICR;
    __IO uint32_t GCR;
    __IO uint32_t CCR;
    __IO uint32_t BRR;
    __IO uint32_t FRA;
    __IO uint32_t RXADD;
    __IO uint32_t RXMASK;
    __IO uint32_t SCR;
} UART_TypeDef;

/**
* @brief Window WATCHDOG
*/

typedef struct {
    __IO uint32_t CR;
    __IO uint32_t CFR;
    __IO uint32_t SR;
} WWDG_TypeDef;

//???chend:no document,not check
/**
* @brief QSPI
*/

typedef struct {
    __IO uint32_t INST_READ;
    __IO uint32_t INST_SET;
    __IO uint32_t SPEC;
    __IO uint32_t CLKGEN;
    __IO uint32_t DATA_ADDR;
    __IO uint32_t ENCRYPT;
    __IO uint32_t CHECKDATA;
    __IO uint32_t DATAPRO;
    __IO uint32_t DATAOPEN;
} QSPI_TypeDef;

/**
* @brief FSMC
*/
#define SSCONR  SCONR
#define SCSLR0  SCSLR0_LOW
#define SCSLR1  SCSLR1_LOW
#define SCSLR2  SCSLR2_LOW
#define SCSLR3  SCSLR3_LOW
#define SCSLR4  SCSLR4_LOW
#define SCSLR5  SCSLR5_LOW
#define SCSLR6  SCSLR6_LOW
#define SCSLR7  SCSLR7_LOW
typedef struct {
    __IO uint32_t SSCONR;          //0
    __IO uint32_t STMG0R;        //4
    __IO uint32_t STMG1R;        //8
    __IO uint32_t SCTLR;         //c
    __IO uint32_t SREFR;         //10
    __IO uint32_t SCSLR0_LOW;    //14
    __IO uint32_t SCSLR1_LOW;    //18
    __IO uint32_t SCSLR2_LOW;    //1c
    __IO uint32_t SCSLR3_LOW;    //20
    __IO uint32_t SCSLR4_LOW;    //24
    __IO uint32_t SCSLR5_LOW;    //28
    __IO uint32_t SCSLR6_LOW;    //2c
    __IO uint32_t SCSLR7_LOW;    //30
    __IO uint32_t RESERVED0;     //34
    __IO uint32_t RESERVED1;     //38
    __IO uint32_t RESERVED2;     //3c
    __IO uint32_t RESERVED3;     //40
    __IO uint32_t RESERVED4;     //44
    __IO uint32_t RESERVED5;     //48
    __IO uint32_t RESERVED6;     //4c
    __IO uint32_t RESERVED7;     //50
    __IO uint32_t SMSKR0;        //54
    __IO uint32_t SMSKR1;        //58
    __IO uint32_t SMSKR2;        //5c
    __IO uint32_t SMSKR3;        //60
    __IO uint32_t SMSKR4;        //64
    __IO uint32_t SMSKR5;        //68
    __IO uint32_t SMSKR6;        //6c
    __IO uint32_t SMSKR7;        //70
    __IO uint32_t CSALIAS0_LOW;  //74
    __IO uint32_t CSALIAS1_LOW;  //78
    __IO uint32_t RESERVED8;     //7c
    __IO uint32_t RESERVED9;     //80
    __IO uint32_t CSREMAP0_LOW;  //84
    __IO uint32_t CSREMAP1_LOW;  //88
    __IO uint32_t RESERVED10;    //8c
    __IO uint32_t RESERVED11;    //90
    __IO uint32_t SMTMGR_SET0;   //94
    __IO uint32_t SMTMGR_SET1;   //98
    __IO uint32_t SMTMGR_SET2;   //9c
    __IO uint32_t FLASH_TRPDR;   //a0
    __IO uint32_t SMCTLR;        //a4
    __IO uint32_t RESERVED17;    //a8
    __IO uint32_t EXN_MODE_REG;  //ac
} FSMC_TypeDef;

/**
* @brief TRNG
*/

typedef struct {
    __IO uint32_t CR;
    __IO uint32_t SR;
    __IO uint32_t IER;
    __IO uint32_t DR;
    __IO uint32_t NONCE_SEED1;
    __IO uint32_t NONCE_SEED2;
    __IO uint32_t NONCE_SEED3;

} TRNG_TypeDef;

/**
* @brief AES
*/
typedef struct {
    __IO uint32_t CR;
    __IO uint32_t SR;
    __IO uint32_t DINR;
    __IO uint32_t DOUTR;
    __IO uint32_t KEYR0;
    __IO uint32_t KEYR1;
    __IO uint32_t KEYR2;
    __IO uint32_t KEYR3;
    __IO uint32_t IVR0;
    __IO uint32_t IVR1;
    __IO uint32_t IVR2;
    __IO uint32_t IVR3;
    __IO uint32_t KEYR4;
    __IO uint32_t KEYR5;
    __IO uint32_t KEYR6;
    __IO uint32_t KEYR7;

} AES_TypeDef;


/**
* @brief USB_OTG_FS
*/
typedef struct {
    __IO uint32_t PER_ID;       //0x00
    __IO uint32_t ID_COMP;
    __IO uint32_t REV;
    __IO uint32_t ADD_INFO;
    __IO uint32_t OTG_INT_STAT; //0x10
    __IO uint32_t OTG_INT_EN;   //0x14
    __IO uint32_t OTG_STATUS;   //0x18
    __IO uint32_t OTG_CTRL;     //0x1c
    __IO uint32_t RESERVED1;    //0x20
    __IO uint32_t RESERVED2;    //0x24
    __IO uint32_t RESERVED3;    //0x28
    __IO uint32_t RESERVED4;    //0x2c
    __IO uint32_t RESERVED5;    //0x30
    __IO uint32_t RESERVED6;    //0x34
    __IO uint32_t RESERVED7;    //0x38
    __IO uint32_t RESERVED8;    //0x3c
    __IO uint32_t RESERVED9;    //0x40
    __IO uint32_t RESERVED10;    //0x44
    __IO uint32_t RESERVED11;   //0x48
    __IO uint32_t RESERVED12;   //0x4c
    __IO uint32_t RESERVED13;   //0x50
    __IO uint32_t RESERVED14;   //0x54
    __IO uint32_t RESERVED15;   //0x58
    __IO uint32_t RESERVED16;   //0x5c
    __IO uint32_t RESERVED17;   //0x60
    __IO uint32_t RESERVED18;   //0x64
    __IO uint32_t RESERVED19;   //0x68
    __IO uint32_t RESERVED20;   //0x6c
    __IO uint32_t RESERVED21;   //0x70
    __IO uint32_t RESERVED22;   //0x74
    __IO uint32_t RESERVED23;   //0x78
    __IO uint32_t RESERVED24;   //0x7c
    __IO uint32_t INT_STAT;     //0x80
    __IO uint32_t INT_ENB;
    __IO uint32_t ERR_STAT;
    __IO uint32_t ERR_ENB;
    __IO uint32_t STAT;         //0x90
    __IO uint32_t CTL;
    __IO uint32_t ADDR;
    __IO uint32_t BDT_PAGE_01;
    __IO uint32_t FRM_NUML;     //0xa0
    __IO uint32_t FRM_NUMH;
    __IO uint32_t TOKEN;
    __IO uint32_t SOF_THLD;
    __IO uint32_t BDT_PAGE_02;  //0xb0
    __IO uint32_t BDT_PAGE_03;  //0xb4
    __IO uint32_t RESERVED25;   //0xb8
    __IO uint32_t RESERVED26;   //0xbc
    __IO uint32_t EP_CTL0;      //0xc0
    __IO uint32_t EP_CTL1;      //0xc4
    __IO uint32_t EP_CTL2;      //0xc8
    __IO uint32_t EP_CTL3;      //0xcc
    __IO uint32_t EP_CTL4;      //0xd0
    __IO uint32_t EP_CTL5;      //0xd4
    __IO uint32_t EP_CTL6;      //0xd8
    __IO uint32_t EP_CTL7;      //0xdc
    __IO uint32_t EP_CTL8;      //0xe0
    __IO uint32_t EP_CTL9;      //0xe4
    __IO uint32_t EP_CTL10;     //0xe8
    __IO uint32_t EP_CTL11;     //0xec
    __IO uint32_t EP_CTL12;     //0xf0
    __IO uint32_t EP_CTL13;     //0xf4
    __IO uint32_t EP_CTL14;     //0xf8
    __IO uint32_t EP_CTL15;     //0xfc

} USB_OTG_FS_TypeDef;

typedef struct {
    __IO uint32_t FORMAT;
    __IO uint32_t ADRESS;
} BDT_DATA_TypeDef;

typedef struct {
    BDT_DATA_TypeDef RX_BUF[2];
    BDT_DATA_TypeDef TX_BUF[2];
} USB_OTG_BDT_TypeDef;


/**
* @brief SDIO
*/

typedef struct {
    __IO uint32_t MMC_CTRL;
    __IO uint32_t MMC_IO;
    __IO uint32_t MMC_BYTECNTL;
    __IO uint32_t MMC_TR_BLOCKCNT;
    __IO uint32_t MMC_CRCCTL;
    __IO uint32_t CMD_CRC;
    __IO uint32_t DAT_CRCL;
    __IO uint32_t DAT_CRCH;
    __IO uint32_t MMC_PORT;
    __IO uint32_t MMC_INT_MASK;
    __IO uint32_t CLR_MMC_INT;
    __IO uint32_t MMC_CARDSEL;
    __IO uint32_t MMC_SIG;
    __IO uint32_t MMC_IO_MBCTL;
    __IO uint32_t MMC_BLOCKCNT;
    __IO uint32_t MMC_TIMEOUTCNT;
    __IO uint32_t CMD_BUF0;
    __IO uint32_t CMD_BUF1;
    __IO uint32_t CMD_BUF2;
    __IO uint32_t CMD_BUF3;
    __IO uint32_t CMD_BUF4;
    __IO uint32_t CMD_BUF5;
    __IO uint32_t CMD_BUF6;
    __IO uint32_t CMD_BUF7;
    __IO uint32_t CMD_BUF8;
    __IO uint32_t CMD_BUF9;
    __IO uint32_t CMD_BUF10;
    __IO uint32_t CMD_BUF11;
    __IO uint32_t CMD_BUF12;
    __IO uint32_t CMD_BUF13;
    __IO uint32_t CMD_BUF14;
    __IO uint32_t CMD_BUF15;
    __IO uint32_t BUF_CTL;
    __IO uint32_t RESERVED[31];
    __IO uint32_t DATA_BUF0;
    __IO uint32_t DATA_BUF1;
    __IO uint32_t DATA_BUF2;
    __IO uint32_t DATA_BUF3;
    __IO uint32_t DATA_BUF4;

} SDIO_TypeDef;


/**
  * @brief Ethernet MAC
  */
typedef struct {
    __IO uint32_t MACCR;                    //0X0000
    __IO uint32_t MACFFR;                   //0X0004
    __IO uint32_t MACHTHR;              //0X0008
    __IO uint32_t MACHTLR;              //0X000C
    __IO uint32_t MACMIIAR;             //0X0010
    __IO uint32_t MACMIIDR;             //0x0014
    __IO uint32_t MACFCR;                   //0x0018
    __IO uint32_t MACVLANTR;            //0x001C
    __IO uint32_t RESERVED0[2];     //0x0020 ~ 0x0024
    __IO uint32_t MACRWUFFR;            //0x0028
    __IO uint32_t MACPMTCSR;        //0x002C
    //__IO uint32_t MACSR;          //0x0030
    //__IO uint32_t MACIMR;         //0x0034
    __IO uint32_t RESERVED1[4];     //0x0030 ~ 0x003C
    __IO uint32_t MACA0HR;              //0x0040
    __IO uint32_t MACA0LR;          //0x0044
    __IO uint32_t MACA1HR;          //0x0048
    __IO uint32_t MACA1LR;              //0x004C
    __IO uint32_t MACA2HR;              //0x0050
    __IO uint32_t MACA2LR;          //0x0054
    __IO uint32_t MACA3HR;          //0x0058
    __IO uint32_t MACA3LR;          //0x005C
    __IO uint32_t MACA4HR;          //0x0060
    __IO uint32_t MACA4LR;          //0x0064
    __IO uint32_t MACA5HR;          //0x0068
    __IO uint32_t MACA5LR;          //0x006C
    __IO uint32_t MACA6HR;          //0x0070
    __IO uint32_t MACA6LR;          //0x0074
    __IO uint32_t MACA7HR;          //0x0078
    __IO uint32_t MACA7LR;          //0x007C
    __IO uint32_t MACA8HR;          //0x0080
    __IO uint32_t MACA8LR;          //0x0084
    __IO uint32_t MACA9HR;          //0x0088
    __IO uint32_t MACA9LR;          //0x008C
    __IO uint32_t MACA10HR;         //0x0090
    __IO uint32_t MACA10LR;         //0x0094
    __IO uint32_t MACA11HR;         //0x0098
    __IO uint32_t MACA11LR;         //0x009C
    __IO uint32_t MACA12HR;         //0x00A0
    __IO uint32_t MACA12LR;         //0x00A4
    __IO uint32_t MACA13HR;         //0x00A8
    __IO uint32_t MACA13LR;         //0x00AC
    __IO uint32_t MACA14HR;         //0x00B0
    __IO uint32_t MACA14LR;         //0x00B4
    __IO uint32_t MACA15HR;         //0x00B8
    __IO uint32_t MACA15LR;             //0x00BC
    __IO uint32_t MACANCR;              //0x00C0
    __IO uint32_t MACANSR;              //0x00C4
    __IO uint32_t MACANAR;              //0x00C8
    __IO uint32_t MACANLPAR;            //0x00CC
    __IO uint32_t MACANER;              //0x00D0
    __IO uint32_t MACTBIER;             //0x00D4
    __IO uint32_t MACMIISR;             //0x00D8
    __IO uint32_t RESERVED2[9];     //0x00DC ~ 0x00FC
    __IO uint32_t MMCCR;            //0x0100
    __IO uint32_t MMCRIR;           //0x0104
    __IO uint32_t MMCTIR;           //0x0108
    __IO uint32_t MMCRIMR;          //0x010C
    __IO uint32_t MMCTIMR;          //0x0110
    __IO uint32_t RESERVED3[14];    //0x0114 ~ 0x0148
    __IO uint32_t MMCTGFSCCR;       //0x014C
    __IO uint32_t MMCTGFMSCCR;      //0x0150
    __IO uint32_t RESERVED4[5];     //0x0154 ~ 0x0164
    __IO uint32_t MMCTGFCR;         //0x0168
    __IO uint32_t RESERVED5[10];    //0x016C ~ 0x0190
    __IO uint32_t MMCRFCECR;        //0x0194
    __IO uint32_t MMCRFAECR;        //0x0198
    __IO uint32_t RESERVED6[10];    //0x019C ~ 0x01C0
    __IO uint32_t MMCRGUFCR;        //0x01C4
} ETH_MAC_TypeDef;

/**
  * @brief Ethernet DMA
  */
typedef struct {
    __IO uint32_t DMABMR;           //0x1000
    __IO uint32_t DMATPDR;          //0x1004
    __IO uint32_t DMARPDR;          //0x1008
    __IO uint32_t DMARDLAR;         //0x100C
    __IO uint32_t DMATDLAR;         //0x1010
    __IO uint32_t DMASR;            //0x1014
    __IO uint32_t DMAOMR;           //0x1018
    __IO uint32_t DMAIER;           //0x101C
    __IO uint32_t DMAMFBOCR;        //0x1020
    __IO uint32_t RESERVED10[9];    //0x1024 ~ 0x1044
    __IO uint32_t DMACHTDR;         //0x1048
    __IO uint32_t DMACHRDR;         //0x104C
    __IO uint32_t DMACHTBAR;        //0x1050
    __IO uint32_t DMACHRBAR;        //0x1054
} ETH_DMA_TypeDef;



/**
* @}
*/

#define HARD_FAULT_MM         ((HARD_FAULT_TypeDef*)0xE000DE24)

/** @addtogroup Peripheral_memory_map
* @{
*/

#define FLASH_BASE            ((uint32_t)0x08000000) /*!< FLASH base address in the alias region */
#define OB_BASE               ((uint32_t)0x1FFFF800) /*!< Flash Option Bytes base address */
#define SECURITY_MEM_BASE     ((uint32_t)0x1FFE1000) /*!< Special security memory base address */
#define PROTECT_BYTE_R_BASE   ((uint32_t)0x1FFE0000) /*!< Protect byte register base address */
#define EEPROM_BASE           ((uint32_t)0x08100000) /*!< EEPROM base address in the alias region */

#define PERIPH_BB_BASE        ((uint32_t)0x42000000) /*!< Peripheral base address in the alias region */
#define SRAM_BB_BASE          ((uint32_t)0x22000000) /*!< SRAM base address in the alias region */

#define SRAM_BASE             ((uint32_t)0x20000000) /*!< Peripheral base address in the bit-band region */
#define PERIPH_BASE           ((uint32_t)0x40000000) /*!< SRAM base address in the bit-band region */



/*!< Peripheral memory map */
#define APB1PERIPH_BASE       PERIPH_BASE
#define APB2PERIPH_BASE       (PERIPH_BASE + 0x10000)
#define AHB1PERIPH_BASE       (PERIPH_BASE + 0x20000)

#define TIM2_BASE             (APB1PERIPH_BASE + 0x0000)
#define TIM3_BASE             (APB1PERIPH_BASE + 0x0400)
#define TIM4_BASE             (APB1PERIPH_BASE + 0x0800)
#define TIM5_BASE             (APB1PERIPH_BASE + 0x0C00)
#define TIM6_BASE             (APB1PERIPH_BASE + 0x1000)
#define TIM7_BASE             (APB1PERIPH_BASE + 0x1400)

#define RTC_BASE              (APB1PERIPH_BASE + 0x2800)
#define BKP_BASE              (APB1PERIPH_BASE + 0x2800 + 0x24)
#define WWDG_BASE             (APB1PERIPH_BASE + 0x2C00)
#define IWDG_BASE             (APB1PERIPH_BASE + 0x3000)
#define SPI2_BASE             (APB1PERIPH_BASE + 0x3800)
#define SPI3_BASE             (APB1PERIPH_BASE + 0x3C00)

#define UART2_BASE            (APB1PERIPH_BASE + 0x4400)
#define UART3_BASE            (APB1PERIPH_BASE + 0x4800)
#define UART4_BASE            (APB1PERIPH_BASE + 0x4C00)
#define UART5_BASE            (APB1PERIPH_BASE + 0x5000)

#define I2C1_BASE             (APB1PERIPH_BASE + 0x5400)
#define I2C2_BASE             (APB1PERIPH_BASE + 0x5800)
#define CAN1_BASE             (APB1PERIPH_BASE + 0x6400)
#define CRS_BASE              (APB1PERIPH_BASE + 0x6C00)
#define PWR_BASE              (APB1PERIPH_BASE + 0x7000)

#define UART7_BASE            (APB1PERIPH_BASE + 0x7800)
#define UART8_BASE            (APB1PERIPH_BASE + 0x7C00)

#define EXTI_BASE             (APB2PERIPH_BASE + 0x0400)
#define SYSCFG_BASE           (APB2PERIPH_BASE + 0x0000)
#define COMP_BASE             (APB2PERIPH_BASE + 0x001C)

#define ADC1_BASE             (APB2PERIPH_BASE + 0x2400)
#define TIM1_BASE             (APB2PERIPH_BASE + 0x2C00)
#define SPI1_BASE             (APB2PERIPH_BASE + 0x3000)

#define TIM8_BASE             (APB2PERIPH_BASE + 0x3400)
#define UART1_BASE            (APB2PERIPH_BASE + 0x3800)
#define UART6_BASE            (APB2PERIPH_BASE + 0x3C00)
#define CACHE_BASE            (APB2PERIPH_BASE + 0x6000)

#define SDIO_BASE             (0x40018000)

#define DMA1_BASE             (AHB1PERIPH_BASE + 0x0000)
#define DMA1_Channel1_BASE    (AHB1PERIPH_BASE + 0x0008)
#define DMA1_Channel2_BASE    (AHB1PERIPH_BASE + 0x001C)
#define DMA1_Channel3_BASE    (AHB1PERIPH_BASE + 0x0030)
#define DMA1_Channel4_BASE    (AHB1PERIPH_BASE + 0x0044)
#define DMA1_Channel5_BASE    (AHB1PERIPH_BASE + 0x0058)
#define DMA1_Channel6_BASE    (AHB1PERIPH_BASE + 0x006C)
#define DMA1_Channel7_BASE    (AHB1PERIPH_BASE + 0x0080)

#define DMA2_BASE             (AHB1PERIPH_BASE + 0x0400)
#define DMA2_Channel1_BASE    (AHB1PERIPH_BASE + 0x0408)
#define DMA2_Channel2_BASE    (AHB1PERIPH_BASE + 0x041C)
#define DMA2_Channel3_BASE    (AHB1PERIPH_BASE + 0x0430)
#define DMA2_Channel4_BASE    (AHB1PERIPH_BASE + 0x0444)
#define DMA2_Channel5_BASE    (AHB1PERIPH_BASE + 0x0458)

#define RCC_BASE              (AHB1PERIPH_BASE + 0x1000)
#define FLASH_R_BASE          (AHB1PERIPH_BASE + 0x2000) /*!< Flash registers base address */
#define CRC_BASE              (AHB1PERIPH_BASE + 0x3000)

#define ETH_BASE              (AHB1PERIPH_BASE + 0x8000)
#define ETH_MAC_BASE          (AHB1PERIPH_BASE + 0x8000)
#define ETH_DMA_BASE          (AHB1PERIPH_BASE + 0x9000)

#define GPIOA_BASE            (0x48000000)
#define GPIOB_BASE            (0x48000400)
#define GPIOC_BASE            (0x48000800)
#define GPIOD_BASE            (0x48000C00)
#define GPIOE_BASE            (0x48001000)

#define USB_OTG_FS_BASE       (0x50000000)
#define AES_BASE              (0x50060000)
#define TRNG_BASE             (0x50060800)

#define FSMC_BANK1_ADDR       (0x60000000)
#define FSMC_BANK2_ADDR       (0x64000000)
#define FSMC_BANK3_ADDR       (0x68000000)
#define FSMC_BANK4_ADDR       (0x6c000000)

#define FSMC_R_BASE           (0xA0000000)
#define QSPI_R_BASE           (0xA0001000)

#define DBGMCU_BASE           ((uint32_t)0xE0042000) /*!< Debug MCU registers base address */


/**
* @}
*/

/** @addtogroup Peripheral_declaration
* @{
*/
#define TIM2                ((TIM_TypeDef *) TIM2_BASE)
#define TIM3                ((TIM_TypeDef *) TIM3_BASE)
#define TIM4                ((TIM_TypeDef *) TIM4_BASE)
#define TIM5                ((TIM_TypeDef *) TIM5_BASE)
#define TIM6                ((TIM_TypeDef *) TIM6_BASE)
#define TIM7                ((TIM_TypeDef *) TIM7_BASE)

#define RTC                 ((RTC_TypeDef *) RTC_BASE)
#define BKP                 ((BKP_TypeDef *) BKP_BASE)
#define WWDG                ((WWDG_TypeDef *) WWDG_BASE)
#define IWDG                ((IWDG_TypeDef *) IWDG_BASE)
#define SPI2                ((SPI_TypeDef *) SPI2_BASE)
#define SPI3                ((SPI_TypeDef *) SPI3_BASE)
#define UART2               ((UART_TypeDef *) UART2_BASE)
#define UART3               ((UART_TypeDef *) UART3_BASE)
#define UART4               ((UART_TypeDef *) UART4_BASE)
#define UART5               ((UART_TypeDef *) UART5_BASE)

#define I2C1                ((I2C_TypeDef *) I2C1_BASE)
#define I2C2                ((I2C_TypeDef *) I2C2_BASE)
#define CAN1                ((CAN_TypeDef *) CAN1_BASE)
#define CAN1_BASIC          ((CAN_TypeDef *) CAN1_BASE)
#define CAN1_PELI           ((CAN_Peli_TypeDef *) CAN1_BASE)
#define PWR                 ((PWR_TypeDef *) PWR_BASE)
#define UART7               ((UART_TypeDef *) UART7_BASE)
#define UART8               ((UART_TypeDef *) UART8_BASE)

#define COMP                ((COMP_TypeDef *) COMP_BASE)
#define SYSCFG              ((SYSCFG_TypeDef *) SYSCFG_BASE)
#define EXTI                ((EXTI_TypeDef *) EXTI_BASE)

#define ADC1                ((ADC_TypeDef *) ADC1_BASE)
#define TIM1                ((TIM_TypeDef *) TIM1_BASE)
#define SPI1                ((SPI_TypeDef *) SPI1_BASE)
#define TIM8                ((TIM_TypeDef *) TIM8_BASE)
#define UART1               ((UART_TypeDef *) UART1_BASE)
#define UART6               ((UART_TypeDef *) UART6_BASE)

#define CACHE               ((CACHE_TypeDef*) CACHE_BASE)
#define SDIO                ((SDIO_TypeDef *) SDIO_BASE)

#define DMA1                ((DMA_TypeDef *) DMA1_BASE)
#define DMA1_Channel1       ((DMA_Channel_TypeDef *) DMA1_Channel1_BASE)
#define DMA1_Channel2       ((DMA_Channel_TypeDef *) DMA1_Channel2_BASE)
#define DMA1_Channel3       ((DMA_Channel_TypeDef *) DMA1_Channel3_BASE)
#define DMA1_Channel4       ((DMA_Channel_TypeDef *) DMA1_Channel4_BASE)
#define DMA1_Channel5       ((DMA_Channel_TypeDef *) DMA1_Channel5_BASE)
#define DMA1_Channel6       ((DMA_Channel_TypeDef *) DMA1_Channel6_BASE)
#define DMA1_Channel7       ((DMA_Channel_TypeDef *) DMA1_Channel7_BASE)

#define DMA2                ((DMA_TypeDef *) DMA2_BASE)
#define DMA2_Channel1       ((DMA_Channel_TypeDef *) DMA2_Channel1_BASE)
#define DMA2_Channel2       ((DMA_Channel_TypeDef *) DMA2_Channel2_BASE)
#define DMA2_Channel3       ((DMA_Channel_TypeDef *) DMA2_Channel3_BASE)
#define DMA2_Channel4       ((DMA_Channel_TypeDef *) DMA2_Channel4_BASE)
#define DMA2_Channel5       ((DMA_Channel_TypeDef *) DMA2_Channel5_BASE)

#define RCC                 ((RCC_TypeDef *) RCC_BASE)
#define FLASH               ((FLASH_TypeDef *) FLASH_R_BASE)
#define CRC                 ((CRC_TypeDef *) CRC_BASE)
#define ETH_MAC             ((ETH_MAC_TypeDef *) ETH_MAC_BASE)
#define ETH_DMA             ((ETH_DMA_TypeDef *) ETH_DMA_BASE)
#define CRS                 ((CRS_TypeDef *) CRS_BASE)

#define GPIOA               ((GPIO_TypeDef *) GPIOA_BASE)
#define GPIOB               ((GPIO_TypeDef *) GPIOB_BASE)
#define GPIOC               ((GPIO_TypeDef *) GPIOC_BASE)
#define GPIOD               ((GPIO_TypeDef *) GPIOD_BASE)
#define GPIOE               ((GPIO_TypeDef *) GPIOE_BASE)

#define USB_OTG_FS          ((USB_OTG_FS_TypeDef *) USB_OTG_FS_BASE)
#define AES                 ((AES_TypeDef *) AES_BASE)
#define TRNG                ((TRNG_TypeDef *) TRNG_BASE)
#define FSMC                ((FSMC_TypeDef *) FSMC_BASE)
#define QSPI                ((QSPI_TypeDef *) QSPI_R_BASE)

#define OB                  ((OB_TypeDef *) OB_BASE)
#define DBGMCU              ((DBGMCU_TypeDef *) DBGMCU_BASE)



/**
* @}
*/

/** @addtogroup Exported_constants
* @{
*/

/** @addtogroup Peripheral_Registers_Bits_Definition
* @{
*/

/******************************************************************************/
/*                         Peripheral Registers_Bits_Definition               */
/******************************************************************************/

/******************************************************************************/
/*                                                                            */
/*                          CRC calculation unit                              */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for CRC_DR register  *********************/
#define  CRC_DR_DR                           ((uint32_t)0xFFFFFFFF) /*!< Data register bits */


/*******************  Bit definition for CRC_IDR register  ********************/
#define  CRC_IDR_IDR                         ((uint8_t)0xFF)        /*!< General-purpose 8-bit data register bits */


/********************  Bit definition for CRC_CR register  ********************/
#define  CRC_CR_RESET                        ((uint8_t)0x01)        /*!< RESET bit */

/******************************************************************************/
/*                                                                            */
/*                             Power Control                                  */
/*                                                                            */
/******************************************************************************/

/********************  Bit definition for PWR_CR register  ********************/

#define  PWR_CR_PDDS                         ((uint16_t)0x0002)     /*!< Power Down Deepsleep */
#define  PWR_CR_CWUF                         ((uint16_t)0x0004)     /*!< Clear Wakeup Flag */
#define  PWR_CR_CSBF                         ((uint16_t)0x0008)     /*!< Clear Standby Flag */
#define  PWR_CR_PVDE                         ((uint16_t)0x0010)     /*!< Power Voltage Detector Enable */

#define  PWR_CR_PLS                          ((uint16_t)0x1E00)     /*!< PLS[3:0] bits (PVD Level Selection) */
#define  PWR_CR_PLS_0                        ((uint16_t)0x0200)     /*!< Bit 0 */
#define  PWR_CR_PLS_1                        ((uint16_t)0x0400)     /*!< Bit 1 */
#define  PWR_CR_PLS_2                        ((uint16_t)0x0800)     /*!< Bit 2 */
#define  PWR_CR_PLS_3                        ((uint16_t)0x1000)     /*!< Bit 3 */

/*!< PVD level configuration */
#define  PWR_CR_PLS_1V8                      ((uint16_t)0x0000)     /*!< PVD level 1.8V */
#define  PWR_CR_PLS_2V1                      ((uint16_t)0x0200)     /*!< PVD level 2.1V */
#define  PWR_CR_PLS_2V4                      ((uint16_t)0x0400)     /*!< PVD level 2.4V */
#define  PWR_CR_PLS_2V7                      ((uint16_t)0x0600)     /*!< PVD level 2.7V */
#define  PWR_CR_PLS_3V0                      ((uint16_t)0x0800)     /*!< PVD level 3.0V */
#define  PWR_CR_PLS_3V3                      ((uint16_t)0x0A00)     /*!< PVD level 3.3V */
#define  PWR_CR_PLS_3V6                      ((uint16_t)0x0C00)     /*!< PVD level 3.6V */
#define  PWR_CR_PLS_3V9                      ((uint16_t)0x0E00)     /*!< PVD level 3.9V */
#define  PWR_CR_PLS_4V2                      ((uint16_t)0x1000)     /*!< PVD level 4.2V */
#define  PWR_CR_PLS_4V5                      ((uint16_t)0x1200)     /*!< PVD level 4.5V */
#define  PWR_CR_PLS_4V8                      ((uint16_t)0x1400)     /*!< PVD level 4.8V */

#define  PWR_CR_DBP                          ((uint16_t)0x0100)     /*!< Disable Backup Domain write protection */


/*******************  Bit definition for PWR_CSR register  ********************/
#define  PWR_CSR_WUF                         ((uint16_t)0x0001)     /*!< Wakeup Flag */
#define  PWR_CSR_SBF                         ((uint16_t)0x0002)     /*!< Standby Flag */
#define  PWR_CSR_PVDO                        ((uint16_t)0x0004)     /*!< PVD Output */
#define  PWR_CSR_EWUP                        ((uint16_t)0x0100)     /*!< Enable WKUP pin */

/******************************************************************************/
/*                                                                            */
/*                            Backup registers                                */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for BKP_DR1 register  ********************/
#define  BKP_DR1_D                           ((uint16_t)0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR2 register  ********************/
#define  BKP_DR2_D                           ((uint16_t)0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR3 register  ********************/
#define  BKP_DR3_D                           ((uint16_t)0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR4 register  ********************/
#define  BKP_DR4_D                           ((uint16_t)0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR5 register  ********************/
#define  BKP_DR5_D                           ((uint16_t)0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR6 register  ********************/
#define  BKP_DR6_D                           ((uint16_t)0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR7 register  ********************/
#define  BKP_DR7_D                           ((uint16_t)0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR8 register  ********************/
#define  BKP_DR8_D                           ((uint16_t)0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR9 register  ********************/
#define  BKP_DR9_D                           ((uint16_t)0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR10 register  *******************/
#define  BKP_DR10_D                          ((uint16_t)0xFFFF)     /*!< Backup data */


/******************  Bit definition for BKP_RTCCR register  *******************/
#define  BKP_RTCCR_CAL                       ((uint16_t)0x007F)     /*!< Calibration value */
#define  BKP_RTCCR_CCO                       ((uint16_t)0x0080)     /*!< Calibration Clock Output */
#define  BKP_RTCCR_ASOE                      ((uint16_t)0x0100)     /*!< Alarm or Second Output Enable */
#define  BKP_RTCCR_ASOS                      ((uint16_t)0x0200)     /*!< Alarm or Second Output Selection */

/********************  Bit definition for BKP_CR register  ********************/
#define  BKP_CR_TPE                          ((uint8_t)0x01)        /*!< TAMPER pin enable */
#define  BKP_CR_TPAL                         ((uint8_t)0x02)        /*!< TAMPER pin active level */

/*******************  Bit definition for BKP_CSR register  ********************/
#define  BKP_CSR_CTE                         ((uint16_t)0x0001)     /*!< Clear Tamper event */
#define  BKP_CSR_CTI                         ((uint16_t)0x0002)     /*!< Clear Tamper Interrupt */
#define  BKP_CSR_TPIE                        ((uint16_t)0x0004)     /*!< TAMPER Pin interrupt enable */
#define  BKP_CSR_TEF                         ((uint16_t)0x0100)     /*!< Tamper Event Flag */
#define  BKP_CSR_TIF                         ((uint16_t)0x0200)     /*!< Tamper Interrupt Flag */

/******************************************************************************/
/*                                                                            */
/*                         Reset and Clock Control                            */
/*                                                                            */
/******************************************************************************/

/********************  Bit definition for RCC_CR register  ********************/
#define  RCC_CR_HSION                        ((uint32_t)0x00000001)        /*!< Internal High Speed clock enable */
#define  RCC_CR_HSIRDY                       ((uint32_t)0x00000002)        /*!< Internal High Speed clock ready flag */
#define  RCC_CR_HSITMPEN                     ((uint32_t)0x00000004)        /*!< Internal High Speed clock trimming */
#define  RCC_CR_HSICAL                       ((uint32_t)0x0000FE00)        /*!< Internal High Speed clock Calibration */
#define  RCC_CR_HSEON                        ((uint32_t)0x00010000)        /*!< External High Speed clock enable */
#define  RCC_CR_HSERDY                       ((uint32_t)0x00020000)        /*!< External High Speed clock ready flag */
#define  RCC_CR_HSEBYP                       ((uint32_t)0x00040000)        /*!< External High Speed clock Bypass */
#define  RCC_CR_CSSON                        ((uint32_t)0x00080000)        /*!< Clock Security System enable */
#define  RCC_CR_PLLON                        ((uint32_t)0x01000000)        /*!< PLL enable */
#define  RCC_CR_PLLRDY                       ((uint32_t)0x02000000)        /*!< PLL clock ready flag */

#define  RCC_CR_PLLDN                       ((uint32_t)0xFC000000)        /*!< PLLDN[5:0] bits */
#define  RCC_CR_PLLDN_0                     ((uint32_t)0x04000000)         /*!< Bit 0 */
#define  RCC_CR_PLLDN_1                     ((uint32_t)0x08000000)         /*!< Bit 1 */
#define  RCC_CR_PLLDN_2                     ((uint32_t)0x10000000)         /*!< Bit 2 */
#define  RCC_CR_PLLDN_3                     ((uint32_t)0x20000000)         /*!< Bit 3 */
#define  RCC_CR_PLLDN_4                     ((uint32_t)0x40000000)         /*!< Bit 4 */
#define  RCC_CR_PLLDN_5                     ((uint32_t)0x80000000)         /*!< Bit 5 */

#define  RCC_CR_PLLDM                       ((uint32_t)0x00700000)        /*!< PLLDM[2:0] bits */
#define  RCC_CR_PLLDM_0                     ((uint32_t)0x00100000)         /*!< Bit 0 */
#define  RCC_CR_PLLDM_1                     ((uint32_t)0x00200000)         /*!< Bit 1 */
#define  RCC_CR_PLLDM_2                     ((uint32_t)0x00400000)         /*!< Bit 2 */
/*******************  Bit definition for RCC_CFGR register  *******************/
#define  RCC_CFGR_SW                         ((uint32_t)0x00000003)        /*!< SW[1:0] bits (System clock Switch) */
#define  RCC_CFGR_SW_0                       ((uint32_t)0x00000001)        /*!< Bit 0 */
#define  RCC_CFGR_SW_1                       ((uint32_t)0x00000002)        /*!< Bit 1 */

/*!< SW configuration */
#define  RCC_CFGR_SW_HSI                     ((uint32_t)0x00000000)        /*!< HSI selected as system clock */
#define  RCC_CFGR_SW_HSE                     ((uint32_t)0x00000001)        /*!< HSE selected as system clock */
#define  RCC_CFGR_SW_PLL                     ((uint32_t)0x00000002)        /*!< PLL selected as system clock */
#define  RCC_CFGR_SW_LSI                     ((uint32_t)0x00000003)        /*!< LSI selected as system clock */

#define  RCC_CFGR_SWS                        ((uint32_t)0x0000000C)        /*!< SWS[1:0] bits (System Clock Switch Status) */
#define  RCC_CFGR_SWS_0                      ((uint32_t)0x00000004)        /*!< Bit 0 */
#define  RCC_CFGR_SWS_1                      ((uint32_t)0x00000008)        /*!< Bit 1 */

/*!< SWS configuration */
#define  RCC_CFGR_SWS_HSI                    ((uint32_t)0x00000000)        /*!< HSI oscillator used as system clock */
#define  RCC_CFGR_SWS_HSE                    ((uint32_t)0x00000004)        /*!< HSE oscillator used as system clock */
#define  RCC_CFGR_SWS_PLL                    ((uint32_t)0x00000008)        /*!< PLL used as system clock */
#define  RCC_CFGR_SWS_LSI                    ((uint32_t)0x0000000C)        /*!< LSI used as system clock */

#define  RCC_CFGR_HPRE                       ((uint32_t)0x000000F0)        /*!< HPRE[3:0] bits (AHB prescaler) */
#define  RCC_CFGR_HPRE_0                     ((uint32_t)0x00000010)        /*!< Bit 0 */
#define  RCC_CFGR_HPRE_1                     ((uint32_t)0x00000020)        /*!< Bit 1 */
#define  RCC_CFGR_HPRE_2                     ((uint32_t)0x00000040)        /*!< Bit 2 */
#define  RCC_CFGR_HPRE_3                     ((uint32_t)0x00000080)        /*!< Bit 3 */

/*!< HPRE configuration */
#define  RCC_CFGR_HPRE_DIV1                  ((uint32_t)0x00000000)        /*!< SYSCLK not divided */
#define  RCC_CFGR_HPRE_DIV2                  ((uint32_t)0x00000080)        /*!< SYSCLK divided by 2 */
#define  RCC_CFGR_HPRE_DIV4                  ((uint32_t)0x00000090)        /*!< SYSCLK divided by 4 */
#define  RCC_CFGR_HPRE_DIV8                  ((uint32_t)0x000000A0)        /*!< SYSCLK divided by 8 */
#define  RCC_CFGR_HPRE_DIV16                 ((uint32_t)0x000000B0)        /*!< SYSCLK divided by 16 */
#define  RCC_CFGR_HPRE_DIV64                 ((uint32_t)0x000000C0)        /*!< SYSCLK divided by 64 */
#define  RCC_CFGR_HPRE_DIV128                ((uint32_t)0x000000D0)        /*!< SYSCLK divided by 128 */
#define  RCC_CFGR_HPRE_DIV256                ((uint32_t)0x000000E0)        /*!< SYSCLK divided by 256 */
#define  RCC_CFGR_HPRE_DIV512                ((uint32_t)0x000000F0)        /*!< SYSCLK divided by 512 */

#define  RCC_CFGR_PPRE1                      ((uint32_t)0x00000700)        /*!< PRE1[2:0] bits (APB1 prescaler) */
#define  RCC_CFGR_PPRE1_0                    ((uint32_t)0x00000100)        /*!< Bit 0 */
#define  RCC_CFGR_PPRE1_1                    ((uint32_t)0x00000200)        /*!< Bit 1 */
#define  RCC_CFGR_PPRE1_2                    ((uint32_t)0x00000400)        /*!< Bit 2 */

/*!< PPRE1 configuration */
#define  RCC_CFGR_PPRE1_DIV1                 ((uint32_t)0x00000000)        /*!< HCLK not divided */
#define  RCC_CFGR_PPRE1_DIV2                 ((uint32_t)0x00000400)        /*!< HCLK divided by 2 */
#define  RCC_CFGR_PPRE1_DIV4                 ((uint32_t)0x00000500)        /*!< HCLK divided by 4 */
#define  RCC_CFGR_PPRE1_DIV8                 ((uint32_t)0x00000600)        /*!< HCLK divided by 8 */
#define  RCC_CFGR_PPRE1_DIV16                ((uint32_t)0x00000700)        /*!< HCLK divided by 16 */

#define  RCC_CFGR_PPRE2                      ((uint32_t)0x00003800)        /*!< PRE2[2:0] bits (APB2 prescaler) */
#define  RCC_CFGR_PPRE2_0                    ((uint32_t)0x00000800)        /*!< Bit 0 */
#define  RCC_CFGR_PPRE2_1                    ((uint32_t)0x00001000)        /*!< Bit 1 */
#define  RCC_CFGR_PPRE2_2                    ((uint32_t)0x00002000)        /*!< Bit 2 */

/*!< PPRE2 configuration */
#define  RCC_CFGR_PPRE2_DIV1                 ((uint32_t)0x00000000)        /*!< HCLK not divided */
#define  RCC_CFGR_PPRE2_DIV2                 ((uint32_t)0x00002000)        /*!< HCLK divided by 2 */
#define  RCC_CFGR_PPRE2_DIV4                 ((uint32_t)0x00002800)        /*!< HCLK divided by 4 */
#define  RCC_CFGR_PPRE2_DIV8                 ((uint32_t)0x00003000)        /*!< HCLK divided by 8 */
#define  RCC_CFGR_PPRE2_DIV16                ((uint32_t)0x00003800)        /*!< HCLK divided by 16 */

#define  RCC_CFGR_CKOFF_SFT                  ((uint32_t)0x00004000)        /*!< Clock off control bit in STOP mode */
#define  RCC_CFGR_CLK48MSEL                  ((uint32_t)0x00008000)        /*!< 48M clock source of USB */

#define  RCC_CFGR_PLLSRC                     ((uint32_t)0x00010000)        /*!< PLL entry clock source */
#define  RCC_CFGR_PLLXTPRE                   ((uint32_t)0x00020000)        /*!< HSE divider for PLL entry */

#define  RCC_CFGR_USBPRE                     ((uint32_t)0x00C00000)        /*!< USB prescaler BIT[1:0] */
#define  RCC_CFGR_USBPRE_0                   ((uint32_t)0x00400000)        /*!< Bit 0 */
#define  RCC_CFGR_USBPRE_1                   ((uint32_t)0x00800000)        /*!< Bit 1 */

#define  RCC_CFGR_MCO                        ((uint32_t)0x07000000)        /*!< MCO[2:0] bits (Microcontroller Clock Output) */
#define  RCC_CFGR_MCO_0                      ((uint32_t)0x01000000)        /*!< Bit 0 */
#define  RCC_CFGR_MCO_1                      ((uint32_t)0x02000000)        /*!< Bit 1 */
#define  RCC_CFGR_MCO_2                      ((uint32_t)0x04000000)        /*!< Bit 2 */

/*!< MCO configuration */
#define  RCC_CFGR_MCO_NOCLOCK                ((uint32_t)0x00000000)        /*!< No clock */
#define  RCC_CFGR_MCO_LSI                    ((uint32_t)0x02000000)        //
#define  RCC_CFGR_MCO_LSE                    ((uint32_t)0x03000000)
#define  RCC_CFGR_MCO_SYSCLK                 ((uint32_t)0x04000000)        /*!< System clock selected */
#define  RCC_CFGR_MCO_HSI                    ((uint32_t)0x05000000)        /*!< Internal 48 MHz RC oscillator clock selected */
#define  RCC_CFGR_MCO_HSE                    ((uint32_t)0x06000000)        /*!< External 1-25 MHz oscillator clock selected */
#define  RCC_CFGR_MCO_PLL                    ((uint32_t)0x07000000)        /*!< PLL clock divided by 2 selected*/

/*!<******************  Bit definition for RCC_CIR register  ********************/
#define  RCC_CIR_LSIRDYF                     ((uint32_t)0x00000001)        /*!< LSI Ready Interrupt flag */
#define  RCC_CIR_LSERDYF                     ((uint32_t)0x00000002)        /*!< LSE Ready Interrupt flag */
#define  RCC_CIR_HSIRDYF                     ((uint32_t)0x00000004)        /*!< HSI Ready Interrupt flag */
#define  RCC_CIR_HSERDYF                     ((uint32_t)0x00000008)        /*!< HSE Ready Interrupt flag */
#define  RCC_CIR_PLLRDYF                     ((uint32_t)0x00000010)        /*!< PLL Ready Interrupt flag */
#define  RCC_CIR_CSSF                        ((uint32_t)0x00000080)        /*!< Clock Security System Interrupt flag */
#define  RCC_CIR_LSIRDYIE                    ((uint32_t)0x00000100)        /*!< LSI Ready Interrupt Enable */
#define  RCC_CIR_LSERDYIE                    ((uint32_t)0x00000200)        /*!< LSE Ready Interrupt Enable */
#define  RCC_CIR_HSIRDYIE                    ((uint32_t)0x00000400)        /*!< HSI Ready Interrupt Enable */
#define  RCC_CIR_HSERDYIE                    ((uint32_t)0x00000800)        /*!< HSE Ready Interrupt Enable */
#define  RCC_CIR_PLLRDYIE                    ((uint32_t)0x00001000)        /*!< PLL Ready Interrupt Enable */
#define  RCC_CIR_LSIRDYC                     ((uint32_t)0x00010000)        /*!< LSI Ready Interrupt Clear */
#define  RCC_CIR_LSERDYC                     ((uint32_t)0x00020000)        /*!< LSE Ready Interrupt Clear */
#define  RCC_CIR_HSIRDYC                     ((uint32_t)0x00040000)        /*!< HSI Ready Interrupt Clear */
#define  RCC_CIR_HSERDYC                     ((uint32_t)0x00080000)        /*!< HSE Ready Interrupt Clear */
#define  RCC_CIR_PLLRDYC                     ((uint32_t)0x00100000)        /*!< PLL Ready Interrupt Clear */
#define  RCC_CIR_CSSC                        ((uint32_t)0x00800000)        /*!< Clock Security System Interrupt Clear */

/******************  Bit definition for RCC_AHB3RSTR register  ******************/
#define  RCC_AHB3RSTR_FSMCRST                ((uint32_t)0x00000001)            /*!< FSMC reset */
#define  RCC_AHB3RSTR_QSPIRST                ((uint32_t)0x00000002)            /*!< QSPI reset */

/******************  Bit definition for RCC_AHB2RSTR register  ******************/
#define  RCC_AHB2RSTR_AESRST                 ((uint32_t)0x00000010)            /*!< AES reset */
#define  RCC_AHB2RSTR_RNGRST                 ((uint32_t)0x00000040)            /*!< RNG reset */
#define  RCC_AHB2RSTR_OTGFSRST               ((uint32_t)0x00000080)            /*!< OTGFS reset */

/******************  Bit definition for RCC_AHB1RSTR register  ******************/
#define  RCC_AHB1RSTR_GPIOARST               ((uint32_t)0x00000001)            /*!< GPIOA reset */
#define  RCC_AHB1RSTR_GPIOBRST               ((uint32_t)0x00000002)            /*!< GPIOB reset */
#define  RCC_AHB1RSTR_GPIOCRST               ((uint32_t)0x00000004)            /*!< GPIOC reset */
#define  RCC_AHB1RSTR_GPIODRST               ((uint32_t)0x00000008)            /*!< GPIOD reset */
#define  RCC_AHB1RSTR_GPIOERST               ((uint32_t)0x00000010)            /*!< GPIOE reset */
#define  RCC_AHB1RSTR_SDIORST                ((uint32_t)0x00000400)            /*!< SDIO reset */
#define  RCC_AHB1RSTR_CRCRST                 ((uint32_t)0x00001000)            /*!< CRC reset */
#define  RCC_AHB1RSTR_DMA1RST                ((uint32_t)0x00200000)            /*!< DMA1 reset */
#define  RCC_AHB1RSTR_DMA2RST                ((uint32_t)0x00400000)            /*!< DMA2 reset */
#define  RCC_AHB1RSTR_ETHMACRST              ((uint32_t)0x02000000)            /*!< ETHMAC reset */

/*****************  Bit definition for RCC_APB2RSTR register  *****************/
#define  RCC_APB2RSTR_TIM1RST                ((uint32_t)0x00000001)            /*!< Timer 1 reset */
#define  RCC_APB2RSTR_TIM8RST                ((uint32_t)0x00000002)            /*!< Timer 8 reset */
#define  RCC_APB2RSTR_UART1RST               ((uint32_t)0x00000010)            /*!< U ART1 reset */
#define  RCC_APB2RSTR_UART6RST               ((uint32_t)0x00000020)            /*!< U ART6 reset */
#define  RCC_APB2RSTR_ADC1RST                ((uint32_t)0x00000100)            /*!< ADC 1 interface reset */
#define  RCC_APB2RSTR_SPI1RST                ((uint32_t)0x00001000)            /*!< SPI1 reset */
#define  RCC_APB2RSTR_SYSCFGRST              ((uint32_t)0x00004000)            /*!< SYSCFG reset */
#define  RCC_APB2RSTR_COMPRST                ((uint32_t)0x00008000)            /*!< COMP reset */

/*****************  Bit definition for RCC_APB1RSTR register  *****************/
#define  RCC_APB1RSTR_TIM2RST                ((uint32_t)0x00000001)        /*!< Timer 2 reset */
#define  RCC_APB1RSTR_TIM3RST                ((uint32_t)0x00000002)        /*!< Timer 3 reset */
#define  RCC_APB1RSTR_TIM4RST                ((uint32_t)0x00000004)        /*!< Timer 4 reset */
#define  RCC_APB1RSTR_TIM5RST                ((uint32_t)0x00000008)        /*!< Timer 5 reset */
#define  RCC_APB1RSTR_TIM6RST                ((uint32_t)0x00000010)        /*!< Timer 6 reset */
#define  RCC_APB1RSTR_TIM7RST                ((uint32_t)0x00000020)        /*!< Timer 7 reset */
#define  RCC_APB1RSTR_WWDGRST                ((uint32_t)0x00000800)        /*!< Window Watchdog reset */
#define  RCC_APB1RSTR_SPI2RST                ((uint32_t)0x00004000)        /*!< SPI 2 reset */
#define  RCC_APB1RSTR_SPI3RST                ((uint32_t)0x00008000)        /*!< SPI 3 reset */
#define  RCC_APB1RSTR_UART2RST               ((uint32_t)0x00020000)        /*!< UART 2 reset */
#define  RCC_APB1RSTR_UART3RST               ((uint32_t)0x00040000)        /*!< UART 3 reset */
#define  RCC_APB1RSTR_UART4RST               ((uint32_t)0x00080000)        /*!< UART 4 reset */
#define  RCC_APB1RSTR_UART5RST               ((uint32_t)0x00100000)        /*!< UART 5 reset */
#define  RCC_APB1RSTR_I2C1RST                ((uint32_t)0x00200000)        /*!< I2C 1 reset */
#define  RCC_APB1RSTR_I2C2RST                ((uint32_t)0x00400000)        /*!< I2C 2 reset */
#define  RCC_APB1RSTR_CRSRST                 ((uint32_t)0x01000000)        /*!< CRS reset */
#define  RCC_APB1RSTR_CANRST                 ((uint32_t)0x02000000)        /*!< CAN reset */
#define  RCC_APB1RSTR_BKPRST                 ((uint32_t)0x08000000)        /*!< Backup interface reset */
#define  RCC_APB1RSTR_PWRRST                 ((uint32_t)0x10000000)        /*!< Power interface reset */
#define  RCC_APB1RSTR_UART7RST               ((uint32_t)0x40000000)        /*!< UART 7 reset */
#define  RCC_APB1RSTR_UART8RST               ((uint32_t)0x80000000)        /*!< UART 8 reset */

/******************  Bit definition for RCC_AHB3ENR register  ******************/
#define  RCC_AHB3ENR_FSMCEN                 ((uint32_t)0x00000001)            /*!< FSMC clock enable */
#define  RCC_AHB3ENR_QSPIEN                 ((uint32_t)0x00000002)            /*!< QSPI clock enable */

/******************  Bit definition for RCC_AHB2ENR register  ******************/
#define  RCC_AHB2ENR_AESEN                  ((uint32_t)0x00000010)            /*!< AES clock enable */
#define  RCC_AHB2ENR_RNGEN                  ((uint32_t)0x00000040)            /*!< RNG clock enable */
#define  RCC_AHB2ENR_OTGFSEN                ((uint32_t)0x00000080)            /*!< OTGFS clock enable */

/******************  Bit definition for RCC_AHB1ENR register  ******************/
#define  RCC_AHB1ENR_GPIOAEN                ((uint32_t)0x00000001)            /*!< GPIOA clock enable */
#define  RCC_AHB1ENR_GPIOBEN                ((uint32_t)0x00000002)            /*!< GPIOB clock enable */
#define  RCC_AHB1ENR_GPIOCEN                ((uint32_t)0x00000004)            /*!< GPIOC clock enable */
#define  RCC_AHB1ENR_GPIODEN                ((uint32_t)0x00000008)            /*!< GPIOD clock enable */
#define  RCC_AHB1ENR_GPIOEEN                ((uint32_t)0x00000010)            /*!< GPIOE clock enable */
#define  RCC_AHB1ENR_SDIOEN                 ((uint32_t)0x00000400)            /*!< SDIO clock enable */
#define  RCC_AHB1ENR_CRCEN                  ((uint32_t)0x00001000)            /*!< CRC clock enable */
#define  RCC_AHB1ENR_FLASHEN                ((uint32_t)0x00002000)            /*!< FLASH clock enable */
#define  RCC_AHB1ENR_SRAMEN                 ((uint32_t)0x00004000)            /*!< FLASH clock enable */
#define  RCC_AHB1ENR_DMA1EN                 ((uint32_t)0x00200000)            /*!< DMA1 clock enable */
#define  RCC_AHB1ENR_DMA2EN                 ((uint32_t)0x00400000)            /*!< DMA2 clock enable */
#define  RCC_AHB1ENR_ETHMACEN               ((uint32_t)0x02000000)            /*!< ETHMAC clock enable */

/******************  Bit definition for RCC_APB2ENR register  *****************/
#define  RCC_APB2ENR_TIM1EN                 ((uint32_t)0x00000001)            /*!< Timer 1 clock enable */
#define  RCC_APB2ENR_TIM8EN                 ((uint32_t)0x00000002)            /*!< Timer 8 clock enable */
#define  RCC_APB2ENR_UART1EN                ((uint32_t)0x00000010)            /*!< UART1 clock enable */
#define  RCC_APB2ENR_UART6EN                ((uint32_t)0x00000020)            /*!< UART6 clock enable */
#define  RCC_APB2ENR_ADC1EN                 ((uint32_t)0x00000100)            /*!< ADC 1 interface clock enable */
#define  RCC_APB2ENR_SPI1EN                 ((uint32_t)0x00001000)            /*!< SPI1 clock enable */
#define  RCC_APB2ENR_SYSCFGEN               ((uint32_t)0x00004000)            /*!< SYSCFG clock enable */
#define  RCC_APB2ENR_COMPEN                 ((uint32_t)0x00008000)            /*!< COMP clock enable */

/*****************  Bit definition for RCC_APB1ENR register  ******************/
#define  RCC_APB1ENR_TIM2EN                 ((uint32_t)0x00000001)        /*!< Timer 2 clock enable */
#define  RCC_APB1ENR_TIM3EN                 ((uint32_t)0x00000002)        /*!< Timer 3 clock enable */
#define  RCC_APB1ENR_TIM4EN                 ((uint32_t)0x00000004)        /*!< Timer 4 clock enable */
#define  RCC_APB1ENR_TIM5EN                 ((uint32_t)0x00000008)        /*!< Timer 5 clock enable */
#define  RCC_APB1ENR_TIM6EN                 ((uint32_t)0x00000010)        /*!< Timer 6 clock enable */
#define  RCC_APB1ENR_TIM7EN                 ((uint32_t)0x00000020)        /*!< Timer 7 clock enable */
#define  RCC_APB1ENR_WWDGEN                 ((uint32_t)0x00000800)        /*!< Window Watchdog clock enable */
#define  RCC_APB1ENR_SPI2EN                 ((uint32_t)0x00004000)        /*!< SPI 2 clock enable */
#define  RCC_APB1ENR_SPI3EN                 ((uint32_t)0x00008000)        /*!< SPI 3 clock enable */
#define  RCC_APB1ENR_UART2EN                ((uint32_t)0x00020000)        /*!< UART 2 clock enable */
#define  RCC_APB1ENR_UART3EN                ((uint32_t)0x00040000)        /*!< UART 3 clock enable */
#define  RCC_APB1ENR_UART4EN                ((uint32_t)0x00080000)        /*!< UART 4 clock enable */
#define  RCC_APB1ENR_UART5EN                ((uint32_t)0x00100000)        /*!< UART 5 clock enable */
#define  RCC_APB1ENR_I2C1EN                 ((uint32_t)0x00200000)        /*!< I2C 1 clock enable */
#define  RCC_APB1ENR_I2C2EN                 ((uint32_t)0x00400000)        /*!< I2C 2 clock enable */
#define  RCC_APB1ENR_CRSEN                  ((uint32_t)0x01000000)        /*!< CRS clock enable */
#define  RCC_APB1ENR_CANEN                  ((uint32_t)0x02000000)        /*!< CAN clock enable */
#define  RCC_APB1ENR_BKPEN                  ((uint32_t)0x08000000)        /*!< Backup interface clock enable */
#define  RCC_APB1ENR_PWREN                  ((uint32_t)0x10000000)        /*!< Power interface clock enable */
#define  RCC_APB1ENR_UART7EN                ((uint32_t)0x40000000)        /*!< UART 7 clock enable */
#define  RCC_APB1ENR_UART8EN                ((uint32_t)0x80000000)        /*!< UART 8 clock enable */

/*******************  Bit definition for RCC_BDCR register  *******************/
#define  RCC_BDCR_LSEON                      ((uint32_t)0x00000001)        /*!< External Low Speed oscillator enable */
#define  RCC_BDCR_LSERDY                     ((uint32_t)0x00000002)        /*!< External Low Speed oscillator Ready */
#define  RCC_BDCR_LSEBYP                     ((uint32_t)0x00000004)        /*!< External Low Speed oscillator Bypass */

#define  RCC_BDCR_RTCSEL                     ((uint32_t)0x00000300)        /*!< RTCSEL[1:0] bits (RTC clock source selection) */
#define  RCC_BDCR_RTCSEL_0                   ((uint32_t)0x00000100)        /*!< Bit 0 */
#define  RCC_BDCR_RTCSEL_1                   ((uint32_t)0x00000200)        /*!< Bit 1 */

/*!< BDCR_RTCSEL configuration */
#define  RCC_BDCR_RTCSEL_NOCLOCK             ((uint32_t)0x00000000)        /*!< No clock */
#define  RCC_BDCR_RTCSEL_LSE                 ((uint32_t)0x00000100)        /*!< LSE oscillator clock used as RTC clock */
#define  RCC_BDCR_RTCSEL_LSI                 ((uint32_t)0x00000200)        /*!< LSI oscillator clock used as RTC clock */
#define  RCC_BDCR_RTCSEL_HSE                 ((uint32_t)0x00000300)        /*!< HSE oscillator clock divided by 128 used as RTC clock */

#define  RCC_BDCR_RTCEN                      ((uint32_t)0x00008000)        /*!< RTC clock enable */
#define  RCC_BDCR_BDRST                      ((uint32_t)0x00010000)        /*!< Backup domain software reset  */

/*******************  Bit definition for RCC_CSR register  ********************/
#define  RCC_CSR_LSION                       ((uint32_t)0x00000001)        /*!< Internal Low Speed oscillator enable */
#define  RCC_CSR_LSIRDY                      ((uint32_t)0x00000002)        /*!< Internal Low Speed oscillator Ready */
#define  RCC_CSR_RMVF                        ((uint32_t)0x01000000)        /*!< Remove reset flag */
#define  RCC_CSR_PINRSTF                     ((uint32_t)0x04000000)        /*!< PIN reset flag */
#define  RCC_CSR_PORRSTF                     ((uint32_t)0x08000000)        /*!< POR/PDR reset flag */
#define  RCC_CSR_SFTRSTF                     ((uint32_t)0x10000000)        /*!< Software Reset flag */
#define  RCC_CSR_IWDGRSTF                    ((uint32_t)0x20000000)        /*!< Independent Watchdog reset flag */
#define  RCC_CSR_WWDGRSTF                    ((uint32_t)0x40000000)        /*!< Window watchdog reset flag */
#define  RCC_CSR_LPWRRSTF                    ((uint32_t)0x80000000)        /*!< Low-Power reset flag */

/*******************  Bit definition for RCC_SYSCFG register  ********************/
#define  RCC_SYSCFG_PROG_CHECK_EN            ((uint32_t)0x00000001)        /*!< Program check enable */
#define  RCC_SYSCFG_SECTOR_1K_CFG            ((uint32_t)0x00000002)        /*!< Page size when FLASH page is erased */
#define  RCC_SYSCFG_DATA_PREFETCH            ((uint32_t)0x00000004)        /*!< DATA prefetch module enabled */
#define  RCC_SYSCFG_PAD_OSC_TRIM             ((uint32_t)0x00001F00)        /*!< External crystal calibration value */

#define  RCC_SYSCFG_QSPI_CLKP_DIV            ((uint32_t)0x007F0000)        /*!< QSPI_CLKP_DIV[22:16] bits (QSPI clock prescaler) */
#define  RCC_SYSCFG_QSPI_CLKP_DIV_0          ((uint32_t)0x00010000)        /*!< Bit 0 */
#define  RCC_SYSCFG_QSPI_CLKP_DIV_1          ((uint32_t)0x00020000)        /*!< Bit 1 */
#define  RCC_SYSCFG_QSPI_CLKP_DIV_2          ((uint32_t)0x00040000)        /*!< Bit 2 */
#define  RCC_SYSCFG_QSPI_CLKP_DIV_3          ((uint32_t)0x00080000)        /*!< Bit 3 */

/*!< QSPI clock prescaler configuration */
#define  RCC_SYSCFG_QSPI_CLKP_DIV2           ((uint32_t)0x00000000)        /*!< CLK divided by 2 */
#define  RCC_SYSCFG_QSPI_CLKP_DIV4           ((uint32_t)0x00010000)        /*!< CLK divided by 4 */
#define  RCC_SYSCFG_QSPI_CLKP_DIV6           ((uint32_t)0x00020000)        /*!< CLK divided by 6 */
#define  RCC_SYSCFG_QSPI_CLKP_DIV8           ((uint32_t)0x00030000)        /*!< CLK divided by 8 */

#define  RCC_SYSCFG_QSPI_BYPASS              ((uint32_t)0x00800000)        /*!< QSPI bypass control bit */
#define  RCC_SYSCFG_DBUF_EN                  ((uint32_t)0x80000000)        /*!< DATA prefetch module status bit */

/******************************************************************************/
/*                                                                            */
/*                General Purpose and Alternate Function IO                   */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for GPIO_CRL register  *******************/
#define  GPIO_CRL_MODE                       ((uint32_t)0x33333333)        /*!< Port x mode bits */

#define  GPIO_CRL_MODE0                      ((uint32_t)0x00000003)        /*!< MODE0[1:0] bits (Port x mode bits, pin 0) */
#define  GPIO_CRL_MODE0_0                    ((uint32_t)0x00000001)        /*!< Bit 0 */
#define  GPIO_CRL_MODE0_1                    ((uint32_t)0x00000002)        /*!< Bit 1 */

#define  GPIO_CRL_MODE1                      ((uint32_t)0x00000030)        /*!< MODE1[1:0] bits (Port x mode bits, pin 1) */
#define  GPIO_CRL_MODE1_0                    ((uint32_t)0x00000010)        /*!< Bit 0 */
#define  GPIO_CRL_MODE1_1                    ((uint32_t)0x00000020)        /*!< Bit 1 */

#define  GPIO_CRL_MODE2                      ((uint32_t)0x00000300)        /*!< MODE2[1:0] bits (Port x mode bits, pin 2) */
#define  GPIO_CRL_MODE2_0                    ((uint32_t)0x00000100)        /*!< Bit 0 */
#define  GPIO_CRL_MODE2_1                    ((uint32_t)0x00000200)        /*!< Bit 1 */

#define  GPIO_CRL_MODE3                      ((uint32_t)0x00003000)        /*!< MODE3[1:0] bits (Port x mode bits, pin 3) */
#define  GPIO_CRL_MODE3_0                    ((uint32_t)0x00001000)        /*!< Bit 0 */
#define  GPIO_CRL_MODE3_1                    ((uint32_t)0x00002000)        /*!< Bit 1 */

#define  GPIO_CRL_MODE4                      ((uint32_t)0x00030000)        /*!< MODE4[1:0] bits (Port x mode bits, pin 4) */
#define  GPIO_CRL_MODE4_0                    ((uint32_t)0x00010000)        /*!< Bit 0 */
#define  GPIO_CRL_MODE4_1                    ((uint32_t)0x00020000)        /*!< Bit 1 */

#define  GPIO_CRL_MODE5                      ((uint32_t)0x00300000)        /*!< MODE5[1:0] bits (Port x mode bits, pin 5) */
#define  GPIO_CRL_MODE5_0                    ((uint32_t)0x00100000)        /*!< Bit 0 */
#define  GPIO_CRL_MODE5_1                    ((uint32_t)0x00200000)        /*!< Bit 1 */

#define  GPIO_CRL_MODE6                      ((uint32_t)0x03000000)        /*!< MODE6[1:0] bits (Port x mode bits, pin 6) */
#define  GPIO_CRL_MODE6_0                    ((uint32_t)0x01000000)        /*!< Bit 0 */
#define  GPIO_CRL_MODE6_1                    ((uint32_t)0x02000000)        /*!< Bit 1 */

#define  GPIO_CRL_MODE7                      ((uint32_t)0x30000000)        /*!< MODE7[1:0] bits (Port x mode bits, pin 7) */
#define  GPIO_CRL_MODE7_0                    ((uint32_t)0x10000000)        /*!< Bit 0 */
#define  GPIO_CRL_MODE7_1                    ((uint32_t)0x20000000)        /*!< Bit 1 */

#define  GPIO_CRL_CNF                        ((uint32_t)0xCCCCCCCC)        /*!< Port x configuration bits */

#define  GPIO_CRL_CNF0                       ((uint32_t)0x0000000C)        /*!< CNF0[1:0] bits (Port x configuration bits, pin 0) */
#define  GPIO_CRL_CNF0_0                     ((uint32_t)0x00000004)        /*!< Bit 0 */
#define  GPIO_CRL_CNF0_1                     ((uint32_t)0x00000008)        /*!< Bit 1 */

#define  GPIO_CRL_CNF1                       ((uint32_t)0x000000C0)        /*!< CNF1[1:0] bits (Port x configuration bits, pin 1) */
#define  GPIO_CRL_CNF1_0                     ((uint32_t)0x00000040)        /*!< Bit 0 */
#define  GPIO_CRL_CNF1_1                     ((uint32_t)0x00000080)        /*!< Bit 1 */

#define  GPIO_CRL_CNF2                       ((uint32_t)0x00000C00)        /*!< CNF2[1:0] bits (Port x configuration bits, pin 2) */
#define  GPIO_CRL_CNF2_0                     ((uint32_t)0x00000400)        /*!< Bit 0 */
#define  GPIO_CRL_CNF2_1                     ((uint32_t)0x00000800)        /*!< Bit 1 */

#define  GPIO_CRL_CNF3                       ((uint32_t)0x0000C000)        /*!< CNF3[1:0] bits (Port x configuration bits, pin 3) */
#define  GPIO_CRL_CNF3_0                     ((uint32_t)0x00004000)        /*!< Bit 0 */
#define  GPIO_CRL_CNF3_1                     ((uint32_t)0x00008000)        /*!< Bit 1 */

#define  GPIO_CRL_CNF4                       ((uint32_t)0x000C0000)        /*!< CNF4[1:0] bits (Port x configuration bits, pin 4) */
#define  GPIO_CRL_CNF4_0                     ((uint32_t)0x00040000)        /*!< Bit 0 */
#define  GPIO_CRL_CNF4_1                     ((uint32_t)0x00080000)        /*!< Bit 1 */

#define  GPIO_CRL_CNF5                       ((uint32_t)0x00C00000)        /*!< CNF5[1:0] bits (Port x configuration bits, pin 5) */
#define  GPIO_CRL_CNF5_0                     ((uint32_t)0x00400000)        /*!< Bit 0 */
#define  GPIO_CRL_CNF5_1                     ((uint32_t)0x00800000)        /*!< Bit 1 */

#define  GPIO_CRL_CNF6                       ((uint32_t)0x0C000000)        /*!< CNF6[1:0] bits (Port x configuration bits, pin 6) */
#define  GPIO_CRL_CNF6_0                     ((uint32_t)0x04000000)        /*!< Bit 0 */
#define  GPIO_CRL_CNF6_1                     ((uint32_t)0x08000000)        /*!< Bit 1 */

#define  GPIO_CRL_CNF7                       ((uint32_t)0xC0000000)        /*!< CNF7[1:0] bits (Port x configuration bits, pin 7) */
#define  GPIO_CRL_CNF7_0                     ((uint32_t)0x40000000)        /*!< Bit 0 */
#define  GPIO_CRL_CNF7_1                     ((uint32_t)0x80000000)        /*!< Bit 1 */

/*******************  Bit definition for GPIO_CRH register  *******************/
#define  GPIO_CRH_MODE                       ((uint32_t)0x33333333)        /*!< Port x mode bits */

#define  GPIO_CRH_MODE8                      ((uint32_t)0x00000003)        /*!< MODE8[1:0] bits (Port x mode bits, pin 8) */
#define  GPIO_CRH_MODE8_0                    ((uint32_t)0x00000001)        /*!< Bit 0 */
#define  GPIO_CRH_MODE8_1                    ((uint32_t)0x00000002)        /*!< Bit 1 */

#define  GPIO_CRH_MODE9                      ((uint32_t)0x00000030)        /*!< MODE9[1:0] bits (Port x mode bits, pin 9) */
#define  GPIO_CRH_MODE9_0                    ((uint32_t)0x00000010)        /*!< Bit 0 */
#define  GPIO_CRH_MODE9_1                    ((uint32_t)0x00000020)        /*!< Bit 1 */

#define  GPIO_CRH_MODE10                     ((uint32_t)0x00000300)        /*!< MODE10[1:0] bits (Port x mode bits, pin 10) */
#define  GPIO_CRH_MODE10_0                   ((uint32_t)0x00000100)        /*!< Bit 0 */
#define  GPIO_CRH_MODE10_1                   ((uint32_t)0x00000200)        /*!< Bit 1 */

#define  GPIO_CRH_MODE11                     ((uint32_t)0x00003000)        /*!< MODE11[1:0] bits (Port x mode bits, pin 11) */
#define  GPIO_CRH_MODE11_0                   ((uint32_t)0x00001000)        /*!< Bit 0 */
#define  GPIO_CRH_MODE11_1                   ((uint32_t)0x00002000)        /*!< Bit 1 */

#define  GPIO_CRH_MODE12                     ((uint32_t)0x00030000)        /*!< MODE12[1:0] bits (Port x mode bits, pin 12) */
#define  GPIO_CRH_MODE12_0                   ((uint32_t)0x00010000)        /*!< Bit 0 */
#define  GPIO_CRH_MODE12_1                   ((uint32_t)0x00020000)        /*!< Bit 1 */

#define  GPIO_CRH_MODE13                     ((uint32_t)0x00300000)        /*!< MODE13[1:0] bits (Port x mode bits, pin 13) */
#define  GPIO_CRH_MODE13_0                   ((uint32_t)0x00100000)        /*!< Bit 0 */
#define  GPIO_CRH_MODE13_1                   ((uint32_t)0x00200000)        /*!< Bit 1 */

#define  GPIO_CRH_MODE14                     ((uint32_t)0x03000000)        /*!< MODE14[1:0] bits (Port x mode bits, pin 14) */
#define  GPIO_CRH_MODE14_0                   ((uint32_t)0x01000000)        /*!< Bit 0 */
#define  GPIO_CRH_MODE14_1                   ((uint32_t)0x02000000)        /*!< Bit 1 */

#define  GPIO_CRH_MODE15                     ((uint32_t)0x30000000)        /*!< MODE15[1:0] bits (Port x mode bits, pin 15) */
#define  GPIO_CRH_MODE15_0                   ((uint32_t)0x10000000)        /*!< Bit 0 */
#define  GPIO_CRH_MODE15_1                   ((uint32_t)0x20000000)        /*!< Bit 1 */

#define  GPIO_CRH_CNF                        ((uint32_t)0xCCCCCCCC)        /*!< Port x configuration bits */

#define  GPIO_CRH_CNF8                       ((uint32_t)0x0000000C)        /*!< CNF8[1:0] bits (Port x configuration bits, pin 8) */
#define  GPIO_CRH_CNF8_0                     ((uint32_t)0x00000004)        /*!< Bit 0 */
#define  GPIO_CRH_CNF8_1                     ((uint32_t)0x00000008)        /*!< Bit 1 */

#define  GPIO_CRH_CNF9                       ((uint32_t)0x000000C0)        /*!< CNF9[1:0] bits (Port x configuration bits, pin 9) */
#define  GPIO_CRH_CNF9_0                     ((uint32_t)0x00000040)        /*!< Bit 0 */
#define  GPIO_CRH_CNF9_1                     ((uint32_t)0x00000080)        /*!< Bit 1 */

#define  GPIO_CRH_CNF10                      ((uint32_t)0x00000C00)        /*!< CNF10[1:0] bits (Port x configuration bits, pin 10) */
#define  GPIO_CRH_CNF10_0                    ((uint32_t)0x00000400)        /*!< Bit 0 */
#define  GPIO_CRH_CNF10_1                    ((uint32_t)0x00000800)        /*!< Bit 1 */

#define  GPIO_CRH_CNF11                      ((uint32_t)0x0000C000)        /*!< CNF11[1:0] bits (Port x configuration bits, pin 11) */
#define  GPIO_CRH_CNF11_0                    ((uint32_t)0x00004000)        /*!< Bit 0 */
#define  GPIO_CRH_CNF11_1                    ((uint32_t)0x00008000)        /*!< Bit 1 */

#define  GPIO_CRH_CNF12                      ((uint32_t)0x000C0000)        /*!< CNF12[1:0] bits (Port x configuration bits, pin 12) */
#define  GPIO_CRH_CNF12_0                    ((uint32_t)0x00040000)        /*!< Bit 0 */
#define  GPIO_CRH_CNF12_1                    ((uint32_t)0x00080000)        /*!< Bit 1 */

#define  GPIO_CRH_CNF13                      ((uint32_t)0x00C00000)        /*!< CNF13[1:0] bits (Port x configuration bits, pin 13) */
#define  GPIO_CRH_CNF13_0                    ((uint32_t)0x00400000)        /*!< Bit 0 */
#define  GPIO_CRH_CNF13_1                    ((uint32_t)0x00800000)        /*!< Bit 1 */

#define  GPIO_CRH_CNF14                      ((uint32_t)0x0C000000)        /*!< CNF14[1:0] bits (Port x configuration bits, pin 14) */
#define  GPIO_CRH_CNF14_0                    ((uint32_t)0x04000000)        /*!< Bit 0 */
#define  GPIO_CRH_CNF14_1                    ((uint32_t)0x08000000)        /*!< Bit 1 */

#define  GPIO_CRH_CNF15                      ((uint32_t)0xC0000000)        /*!< CNF15[1:0] bits (Port x configuration bits, pin 15) */
#define  GPIO_CRH_CNF15_0                    ((uint32_t)0x40000000)        /*!< Bit 0 */
#define  GPIO_CRH_CNF15_1                    ((uint32_t)0x80000000)        /*!< Bit 1 */

/*!<******************  Bit definition for GPIO_IDR register  *******************/
#define  GPIO_IDR_IDR0                       ((uint16_t)0x0001)            /*!< Port input data, bit 0 */
#define  GPIO_IDR_IDR1                       ((uint16_t)0x0002)            /*!< Port input data, bit 1 */
#define  GPIO_IDR_IDR2                       ((uint16_t)0x0004)            /*!< Port input data, bit 2 */
#define  GPIO_IDR_IDR3                       ((uint16_t)0x0008)            /*!< Port input data, bit 3 */
#define  GPIO_IDR_IDR4                       ((uint16_t)0x0010)            /*!< Port input data, bit 4 */
#define  GPIO_IDR_IDR5                       ((uint16_t)0x0020)            /*!< Port input data, bit 5 */
#define  GPIO_IDR_IDR6                       ((uint16_t)0x0040)            /*!< Port input data, bit 6 */
#define  GPIO_IDR_IDR7                       ((uint16_t)0x0080)            /*!< Port input data, bit 7 */
#define  GPIO_IDR_IDR8                       ((uint16_t)0x0100)            /*!< Port input data, bit 8 */
#define  GPIO_IDR_IDR9                       ((uint16_t)0x0200)            /*!< Port input data, bit 9 */
#define  GPIO_IDR_IDR10                      ((uint16_t)0x0400)            /*!< Port input data, bit 10 */
#define  GPIO_IDR_IDR11                      ((uint16_t)0x0800)            /*!< Port input data, bit 11 */
#define  GPIO_IDR_IDR12                      ((uint16_t)0x1000)            /*!< Port input data, bit 12 */
#define  GPIO_IDR_IDR13                      ((uint16_t)0x2000)            /*!< Port input data, bit 13 */
#define  GPIO_IDR_IDR14                      ((uint16_t)0x4000)            /*!< Port input data, bit 14 */
#define  GPIO_IDR_IDR15                      ((uint16_t)0x8000)            /*!< Port input data, bit 15 */

/*******************  Bit definition for GPIO_ODR register  *******************/
#define  GPIO_ODR_ODR0                       ((uint16_t)0x0001)            /*!< Port output data, bit 0 */
#define  GPIO_ODR_ODR1                       ((uint16_t)0x0002)            /*!< Port output data, bit 1 */
#define  GPIO_ODR_ODR2                       ((uint16_t)0x0004)            /*!< Port output data, bit 2 */
#define  GPIO_ODR_ODR3                       ((uint16_t)0x0008)            /*!< Port output data, bit 3 */
#define  GPIO_ODR_ODR4                       ((uint16_t)0x0010)            /*!< Port output data, bit 4 */
#define  GPIO_ODR_ODR5                       ((uint16_t)0x0020)            /*!< Port output data, bit 5 */
#define  GPIO_ODR_ODR6                       ((uint16_t)0x0040)            /*!< Port output data, bit 6 */
#define  GPIO_ODR_ODR7                       ((uint16_t)0x0080)            /*!< Port output data, bit 7 */
#define  GPIO_ODR_ODR8                       ((uint16_t)0x0100)            /*!< Port output data, bit 8 */
#define  GPIO_ODR_ODR9                       ((uint16_t)0x0200)            /*!< Port output data, bit 9 */
#define  GPIO_ODR_ODR10                      ((uint16_t)0x0400)            /*!< Port output data, bit 10 */
#define  GPIO_ODR_ODR11                      ((uint16_t)0x0800)            /*!< Port output data, bit 11 */
#define  GPIO_ODR_ODR12                      ((uint16_t)0x1000)            /*!< Port output data, bit 12 */
#define  GPIO_ODR_ODR13                      ((uint16_t)0x2000)            /*!< Port output data, bit 13 */
#define  GPIO_ODR_ODR14                      ((uint16_t)0x4000)            /*!< Port output data, bit 14 */
#define  GPIO_ODR_ODR15                      ((uint16_t)0x8000)            /*!< Port output data, bit 15 */

/******************  Bit definition for GPIO_BSRR register  *******************/
#define  GPIO_BSRR_BS0                       ((uint32_t)0x00000001)        /*!< Port x Set bit 0 */
#define  GPIO_BSRR_BS1                       ((uint32_t)0x00000002)        /*!< Port x Set bit 1 */
#define  GPIO_BSRR_BS2                       ((uint32_t)0x00000004)        /*!< Port x Set bit 2 */
#define  GPIO_BSRR_BS3                       ((uint32_t)0x00000008)        /*!< Port x Set bit 3 */
#define  GPIO_BSRR_BS4                       ((uint32_t)0x00000010)        /*!< Port x Set bit 4 */
#define  GPIO_BSRR_BS5                       ((uint32_t)0x00000020)        /*!< Port x Set bit 5 */
#define  GPIO_BSRR_BS6                       ((uint32_t)0x00000040)        /*!< Port x Set bit 6 */
#define  GPIO_BSRR_BS7                       ((uint32_t)0x00000080)        /*!< Port x Set bit 7 */
#define  GPIO_BSRR_BS8                       ((uint32_t)0x00000100)        /*!< Port x Set bit 8 */
#define  GPIO_BSRR_BS9                       ((uint32_t)0x00000200)        /*!< Port x Set bit 9 */
#define  GPIO_BSRR_BS10                      ((uint32_t)0x00000400)        /*!< Port x Set bit 10 */
#define  GPIO_BSRR_BS11                      ((uint32_t)0x00000800)        /*!< Port x Set bit 11 */
#define  GPIO_BSRR_BS12                      ((uint32_t)0x00001000)        /*!< Port x Set bit 12 */
#define  GPIO_BSRR_BS13                      ((uint32_t)0x00002000)        /*!< Port x Set bit 13 */
#define  GPIO_BSRR_BS14                      ((uint32_t)0x00004000)        /*!< Port x Set bit 14 */
#define  GPIO_BSRR_BS15                      ((uint32_t)0x00008000)        /*!< Port x Set bit 15 */

#define  GPIO_BSRR_BR0                       ((uint32_t)0x00010000)        /*!< Port x Reset bit 0 */
#define  GPIO_BSRR_BR1                       ((uint32_t)0x00020000)        /*!< Port x Reset bit 1 */
#define  GPIO_BSRR_BR2                       ((uint32_t)0x00040000)        /*!< Port x Reset bit 2 */
#define  GPIO_BSRR_BR3                       ((uint32_t)0x00080000)        /*!< Port x Reset bit 3 */
#define  GPIO_BSRR_BR4                       ((uint32_t)0x00100000)        /*!< Port x Reset bit 4 */
#define  GPIO_BSRR_BR5                       ((uint32_t)0x00200000)        /*!< Port x Reset bit 5 */
#define  GPIO_BSRR_BR6                       ((uint32_t)0x00400000)        /*!< Port x Reset bit 6 */
#define  GPIO_BSRR_BR7                       ((uint32_t)0x00800000)        /*!< Port x Reset bit 7 */
#define  GPIO_BSRR_BR8                       ((uint32_t)0x01000000)        /*!< Port x Reset bit 8 */
#define  GPIO_BSRR_BR9                       ((uint32_t)0x02000000)        /*!< Port x Reset bit 9 */
#define  GPIO_BSRR_BR10                      ((uint32_t)0x04000000)        /*!< Port x Reset bit 10 */
#define  GPIO_BSRR_BR11                      ((uint32_t)0x08000000)        /*!< Port x Reset bit 11 */
#define  GPIO_BSRR_BR12                      ((uint32_t)0x10000000)        /*!< Port x Reset bit 12 */
#define  GPIO_BSRR_BR13                      ((uint32_t)0x20000000)        /*!< Port x Reset bit 13 */
#define  GPIO_BSRR_BR14                      ((uint32_t)0x40000000)        /*!< Port x Reset bit 14 */
#define  GPIO_BSRR_BR15                      ((uint32_t)0x80000000)        /*!< Port x Reset bit 15 */

/*******************  Bit definition for GPIO_BRR register  *******************/
#define  GPIO_BRR_BR0                        ((uint16_t)0x0001)            /*!< Port x Reset bit 0 */
#define  GPIO_BRR_BR1                        ((uint16_t)0x0002)            /*!< Port x Reset bit 1 */
#define  GPIO_BRR_BR2                        ((uint16_t)0x0004)            /*!< Port x Reset bit 2 */
#define  GPIO_BRR_BR3                        ((uint16_t)0x0008)            /*!< Port x Reset bit 3 */
#define  GPIO_BRR_BR4                        ((uint16_t)0x0010)            /*!< Port x Reset bit 4 */
#define  GPIO_BRR_BR5                        ((uint16_t)0x0020)            /*!< Port x Reset bit 5 */
#define  GPIO_BRR_BR6                        ((uint16_t)0x0040)            /*!< Port x Reset bit 6 */
#define  GPIO_BRR_BR7                        ((uint16_t)0x0080)            /*!< Port x Reset bit 7 */
#define  GPIO_BRR_BR8                        ((uint16_t)0x0100)            /*!< Port x Reset bit 8 */
#define  GPIO_BRR_BR9                        ((uint16_t)0x0200)            /*!< Port x Reset bit 9 */
#define  GPIO_BRR_BR10                       ((uint16_t)0x0400)            /*!< Port x Reset bit 10 */
#define  GPIO_BRR_BR11                       ((uint16_t)0x0800)            /*!< Port x Reset bit 11 */
#define  GPIO_BRR_BR12                       ((uint16_t)0x1000)            /*!< Port x Reset bit 12 */
#define  GPIO_BRR_BR13                       ((uint16_t)0x2000)            /*!< Port x Reset bit 13 */
#define  GPIO_BRR_BR14                       ((uint16_t)0x4000)            /*!< Port x Reset bit 14 */
#define  GPIO_BRR_BR15                       ((uint16_t)0x8000)            /*!< Port x Reset bit 15 */

/******************  Bit definition for GPIO_LCKR register  *******************/
#define  GPIO_LCKR_LCK0                      ((uint32_t)0x00000001)        /*!< Port x Lock bit 0 */
#define  GPIO_LCKR_LCK1                      ((uint32_t)0x00000002)        /*!< Port x Lock bit 1 */
#define  GPIO_LCKR_LCK2                      ((uint32_t)0x00000004)        /*!< Port x Lock bit 2 */
#define  GPIO_LCKR_LCK3                      ((uint32_t)0x00000008)        /*!< Port x Lock bit 3 */
#define  GPIO_LCKR_LCK4                      ((uint32_t)0x00000010)        /*!< Port x Lock bit 4 */
#define  GPIO_LCKR_LCK5                      ((uint32_t)0x00000020)        /*!< Port x Lock bit 5 */
#define  GPIO_LCKR_LCK6                      ((uint32_t)0x00000040)        /*!< Port x Lock bit 6 */
#define  GPIO_LCKR_LCK7                      ((uint32_t)0x00000080)        /*!< Port x Lock bit 7 */
#define  GPIO_LCKR_LCK8                      ((uint32_t)0x00000100)        /*!< Port x Lock bit 8 */
#define  GPIO_LCKR_LCK9                      ((uint32_t)0x00000200)        /*!< Port x Lock bit 9 */
#define  GPIO_LCKR_LCK10                     ((uint32_t)0x00000400)        /*!< Port x Lock bit 10 */
#define  GPIO_LCKR_LCK11                     ((uint32_t)0x00000800)        /*!< Port x Lock bit 11 */
#define  GPIO_LCKR_LCK12                     ((uint32_t)0x00001000)        /*!< Port x Lock bit 12 */
#define  GPIO_LCKR_LCK13                     ((uint32_t)0x00002000)        /*!< Port x Lock bit 13 */
#define  GPIO_LCKR_LCK14                     ((uint32_t)0x00004000)        /*!< Port x Lock bit 14 */
#define  GPIO_LCKR_LCK15                     ((uint32_t)0x00008000)        /*!< Port x Lock bit 15 */
#define  GPIO_LCKR_LCKK                      ((uint32_t)0x00010000)        /*!< Lock key */




#define GPIO_CNF_MODE_AIN             0x00UL //0b0000,                                ///< Analog input
#define GPIO_CNF_MODE_FLOATING        0x04UL //0b0100,                                ///< Floating input
#define GPIO_CNF_MODE_INPUPD          0x08UL //0b1000,                                ///< Pull up and down input
#define GPIO_CNF_MODE_INRESEVED       0x0CUL //0b1100,                                ///< Reseved input mode
#define GPIO_CNF_MODE_OUT_PP          0x01UL //0b0001,                                ///< Universal push-pull  output default
#define GPIO_CNF_MODE_OUT_OD          0x05UL //0b0101,                                ///< Universal open drain output default
#define GPIO_CNF_MODE_AF_PP           0x09UL //0b1001,                                ///< Multiplex push-pull  output default
#define GPIO_CNF_MODE_AF_OD           0x0DUL //0b1101                                 ///< Multiplex open drain output default
#define GPIO_CNF_MODE_50MHZ_OUT_PP    0x01UL //0b0001,                                ///< Universal push-pull  output 50MHZ
#define GPIO_CNF_MODE_50MHZ_OUT_OD    0x05UL //0b0101,                                ///< Universal open drain output 50MHZ
#define GPIO_CNF_MODE_50MHZ_AF_PP     0x09UL //0b1001,                                ///< Multiplex push-pull  output 50MHZ
#define GPIO_CNF_MODE_50MHZ_AF_OD     0x0DUL //0b1101                                 ///< Multiplex open drain output 50MHZ
#define GPIO_CNF_MODE_20MHZ_OUT_PP    0x02UL //0b0010,                                ///< Universal push-pull  output 20MHZ
#define GPIO_CNF_MODE_20MHZ_OUT_OD    0x06UL //0b0110,                                ///< Universal open drain output 20MHZ
#define GPIO_CNF_MODE_20MHZ_AF_PP     0x0AUL //0b1010,                                ///< Multiplex push-pull  output 20MHZ
#define GPIO_CNF_MODE_20MHZ_AF_OD     0x0EUL //0b1110                                 ///< Multiplex open drain output 20MHZ
#define GPIO_CNF_MODE_10MHZ_OUT_PP    0x03UL //0b0011,                                ///< Universal push-pull  output 10MHZ
#define GPIO_CNF_MODE_10MHZ_OUT_OD    0x07UL //0b0111,                                ///< Universal open drain output 10MHZ
#define GPIO_CNF_MODE_10MHZ_AF_PP     0x0BUL //0b1011,                                ///< Multiplex push-pull  output 10MHZ
#define GPIO_CNF_MODE_10MHZ_AF_OD     0x0FUL //0b1111                                 ///< Multiplex open drain output 10MHZ
#define GPIO_CNF_MODE_MASK            0x0FUL //0b1111

#define GPIO_CRL_CNF_MODE_0_Pos       (0)  //                                       ///< Analog input
#define GPIO_CRL_CNF_MODE_1_Pos       (4)  //                                       ///< Floating input
#define GPIO_CRL_CNF_MODE_2_Pos       (8)  //                                       ///< Pull up and down input
#define GPIO_CRL_CNF_MODE_3_Pos       (12) //                                       ///< Reseved input mode
#define GPIO_CRL_CNF_MODE_4_Pos       (16) //                                       ///< Universal push-pull  output default
#define GPIO_CRL_CNF_MODE_5_Pos       (20) //                                       ///< Universal open drain output default
#define GPIO_CRL_CNF_MODE_6_Pos       (24) //                                       ///< Multiplex push-pull  output default
#define GPIO_CRL_CNF_MODE_7_Pos       (28) //                                       ///< Multiplex open drain output default
#define GPIO_CRH_CNF_MODE_8_Pos       (0)  //                                       ///< Universal push-pull  output 50MHZ
#define GPIO_CRH_CNF_MODE_9_Pos       (4)  //                                       ///< Universal open drain output 50MHZ
#define GPIO_CRH_CNF_MODE_10_Pos      (8)  //                                       ///< Multiplex push-pull  output 50MHZ
#define GPIO_CRH_CNF_MODE_11_Pos      (12) //                                       ///< Multiplex open drain output 50MHZ
#define GPIO_CRH_CNF_MODE_12_Pos      (16) //                                       ///< Universal push-pull  output 20MHZ
#define GPIO_CRH_CNF_MODE_13_Pos      (20) //                                       ///< Universal open drain output 20MHZ
#define GPIO_CRH_CNF_MODE_14_Pos      (24) //                                       ///< Multiplex push-pull  output 20MHZ
#define GPIO_CRH_CNF_MODE_15_Pos      (28) //                                       ///< Multiplex open drain output 20MHZ


/******************  Bit definition for GPIO_AFRL register  *******************/
#define  GPIO_AFRL_AFR                       ((uint32_t)0xFFFFFFFF)        /*!< Port x alternate function bits */



#define GPIO_AFRL_AFR0_Pos              (0)
#define GPIO_AFRL_AFR0                  (0x0FU << GPIO_AFRL_AFR0_Pos)           ///< Multiplexing function selection for bit 0 of portx
#define GPIO_AFRL_AFR1_Pos              (4)
#define GPIO_AFRL_AFR1                  (0x0FU << GPIO_AFRL_AFR1_Pos)           ///< Multiplexing function selection for bit 1 of portx
#define GPIO_AFRL_AFR2_Pos              (8)
#define GPIO_AFRL_AFR2                  (0x0FU << GPIO_AFRL_AFR2_Pos)           ///< Multiplexing function selection for bit 2 of portx
#define GPIO_AFRL_AFR3_Pos              (12)
#define GPIO_AFRL_AFR3                  (0x0FU << GPIO_AFRL_AFR3_Pos)           ///< Multiplexing function selection for bit 3 of portx
#define GPIO_AFRL_AFR4_Pos              (16)
#define GPIO_AFRL_AFR4                  (0x0FU << GPIO_AFRL_AFR4_Pos)           ///< Multiplexing function selection for bit 4 of portx
#define GPIO_AFRL_AFR5_Pos              (20)
#define GPIO_AFRL_AFR5                  (0x0FU << GPIO_AFRL_AFR5_Pos)           ///< Multiplexing function selection for bit 5 of portx
#define GPIO_AFRL_AFR6_Pos              (24)
#define GPIO_AFRL_AFR6                  (0x0FU << GPIO_AFRL_AFR6_Pos)           ///< Multiplexing function selection for bit 6 of portx
#define GPIO_AFRL_AFR7_Pos              (28)
#define GPIO_AFRL_AFR7                  (0x0FU << GPIO_AFRL_AFR7_Pos)           ///< Multiplexing function selection for bit 7 of portx


////////////////////////////////////////////////////////////////////////////////
/// @brief GPIO_AFRH Register Bit Definition
////////////////////////////////////////////////////////////////////////////////

#define GPIO_AFRH_AFR8_Pos              (0)
#define GPIO_AFRH_AFR8                  (0x0FU << GPIO_AFRH_AFR8_Pos)           ///< Multiplexing function selection for bit 8 of portx
#define GPIO_AFRH_AFR9_Pos              (4)
#define GPIO_AFRH_AFR9                  (0x0FU << GPIO_AFRH_AFR9_Pos)           ///< Multiplexing function selection for bit 9 of portx
#define GPIO_AFRH_AFR10_Pos             (8)
#define GPIO_AFRH_AFR10                 (0x0FU << GPIO_AFRH_AFR10_Pos)          ///< Multiplexing function selection for bit 10 of portx
#define GPIO_AFRH_AFR11_Pos             (12)
#define GPIO_AFRH_AFR11                 (0x0FU << GPIO_AFRH_AFR11_Pos)          ///< Multiplexing function selection for bit 11 of portx
#define GPIO_AFRH_AFR12_Pos             (16)
#define GPIO_AFRH_AFR12                 (0x0FU << GPIO_AFRH_AFR12_Pos)          ///< Multiplexing function selection for bit 12 of portx
#define GPIO_AFRH_AFR13_Pos             (20)
#define GPIO_AFRH_AFR13                 (0x0FU << GPIO_AFRH_AFR13_Pos)          ///< Multiplexing function selection for bit 13 of portx
#define GPIO_AFRH_AFR14_Pos             (24)
#define GPIO_AFRH_AFR14                 (0x0FU << GPIO_AFRH_AFR14_Pos)          ///< Multiplexing function selection for bit 14 of portx
#define GPIO_AFRH_AFR15_Pos             (28)
#define GPIO_AFRH_AFR15                 (0x0FU << GPIO_AFRH_AFR15_Pos)          ///< Multiplexing function selection for bit 15 of portx


#define GPIO_AF_MODEMASK                (0x0FU)                                 ///< Mode = 0
#define GPIO_AF_MODE0                   (0x00U)                                 ///< Mode = 0
#define GPIO_AF_MODE1                   (0x01U)                                 ///< Mode = 1
#define GPIO_AF_MODE2                   (0x02U)                                 ///< Mode = 2
#define GPIO_AF_MODE3                   (0x03U)                                 ///< Mode = 3
#define GPIO_AF_MODE4                   (0x04U)                                 ///< Mode = 4
#define GPIO_AF_MODE5                   (0x05U)                                 ///< Mode = 5
#define GPIO_AF_MODE6                   (0x06U)                                 ///< Mode = 6
#define GPIO_AF_MODE7                   (0x07U)                                 ///< Mode = 7
#define GPIO_AF_MODE8                   (0x08U)                                 ///< Mode = 8 
#define GPIO_AF_MODE9                   (0x09U)                                 ///< Mode = 9 
#define GPIO_AF_MODE10                  (0x0AU)                                 ///< Mode = 10
#define GPIO_AF_MODE11                  (0x0BU)                                 ///< Mode = 11
#define GPIO_AF_MODE12                  (0x0CU)                                 ///< Mode = 12
#define GPIO_AF_MODE13                  (0x0DU)                                 ///< Mode = 13
#define GPIO_AF_MODE14                  (0x0EU)                                 ///< Mode = 14
#define GPIO_AF_MODE15                  (0x0FU)                                 ///< Mode = 15
/*----------------------------------------------------------------------------*/


/******************************************************************************/
/*                                                                            */
/*                               SystemTick                                   */
/*                                                                            */
/******************************************************************************/

/*****************  Bit definition for SysTick_CTRL register  *****************/
#define  SysTick_CTRL_ENABLE                 ((uint32_t)0x00000001)        /*!< Counter enable */
#define  SysTick_CTRL_TICKINT                ((uint32_t)0x00000002)        /*!< Counting down to 0 pends the SysTick handler */
#define  SysTick_CTRL_CLKSOURCE              ((uint32_t)0x00000004)        /*!< Clock source */
#define  SysTick_CTRL_COUNTFLAG              ((uint32_t)0x00010000)        /*!< Count Flag */

/*****************  Bit definition for SysTick_LOAD register  *****************/
#define  SysTick_LOAD_RELOAD                 ((uint32_t)0x00FFFFFF)        /*!< Value to load into the SysTick Current Value Register when the counter reaches 0 */

/*****************  Bit definition for SysTick_VAL register  ******************/
#define  SysTick_VAL_CURRENT                 ((uint32_t)0x00FFFFFF)        /*!< Current value at the time the register is accessed */

/*****************  Bit definition for SysTick_CALIB register  ****************/
#define  SysTick_CALIB_TENMS                 ((uint32_t)0x00FFFFFF)        /*!< Reload value to use for 10ms timing */
#define  SysTick_CALIB_SKEW                  ((uint32_t)0x40000000)        /*!< Calibration value is not exactly 10 ms */
#define  SysTick_CALIB_NOREF                 ((uint32_t)0x80000000)        /*!< The reference clock is not provided */

/******************************************************************************/
/*                                                                            */
/*                  Nested Vectored Interrupt Controller                      */
/*                                                                            */
/******************************************************************************/

/******************  Bit definition for NVIC_ISER register  *******************/
#define  NVIC_ISER_SETENA                    ((uint32_t)0xFFFFFFFF)        /*!< Interrupt set enable bits */
#define  NVIC_ISER_SETENA_0                  ((uint32_t)0x00000001)        /*!< bit 0 */
#define  NVIC_ISER_SETENA_1                  ((uint32_t)0x00000002)        /*!< bit 1 */
#define  NVIC_ISER_SETENA_2                  ((uint32_t)0x00000004)        /*!< bit 2 */
#define  NVIC_ISER_SETENA_3                  ((uint32_t)0x00000008)        /*!< bit 3 */
#define  NVIC_ISER_SETENA_4                  ((uint32_t)0x00000010)        /*!< bit 4 */
#define  NVIC_ISER_SETENA_5                  ((uint32_t)0x00000020)        /*!< bit 5 */
#define  NVIC_ISER_SETENA_6                  ((uint32_t)0x00000040)        /*!< bit 6 */
#define  NVIC_ISER_SETENA_7                  ((uint32_t)0x00000080)        /*!< bit 7 */
#define  NVIC_ISER_SETENA_8                  ((uint32_t)0x00000100)        /*!< bit 8 */
#define  NVIC_ISER_SETENA_9                  ((uint32_t)0x00000200)        /*!< bit 9 */
#define  NVIC_ISER_SETENA_10                 ((uint32_t)0x00000400)        /*!< bit 10 */
#define  NVIC_ISER_SETENA_11                 ((uint32_t)0x00000800)        /*!< bit 11 */
#define  NVIC_ISER_SETENA_12                 ((uint32_t)0x00001000)        /*!< bit 12 */
#define  NVIC_ISER_SETENA_13                 ((uint32_t)0x00002000)        /*!< bit 13 */
#define  NVIC_ISER_SETENA_14                 ((uint32_t)0x00004000)        /*!< bit 14 */
#define  NVIC_ISER_SETENA_15                 ((uint32_t)0x00008000)        /*!< bit 15 */
#define  NVIC_ISER_SETENA_16                 ((uint32_t)0x00010000)        /*!< bit 16 */
#define  NVIC_ISER_SETENA_17                 ((uint32_t)0x00020000)        /*!< bit 17 */
#define  NVIC_ISER_SETENA_18                 ((uint32_t)0x00040000)        /*!< bit 18 */
#define  NVIC_ISER_SETENA_19                 ((uint32_t)0x00080000)        /*!< bit 19 */
#define  NVIC_ISER_SETENA_20                 ((uint32_t)0x00100000)        /*!< bit 20 */
#define  NVIC_ISER_SETENA_21                 ((uint32_t)0x00200000)        /*!< bit 21 */
#define  NVIC_ISER_SETENA_22                 ((uint32_t)0x00400000)        /*!< bit 22 */
#define  NVIC_ISER_SETENA_23                 ((uint32_t)0x00800000)        /*!< bit 23 */
#define  NVIC_ISER_SETENA_24                 ((uint32_t)0x01000000)        /*!< bit 24 */
#define  NVIC_ISER_SETENA_25                 ((uint32_t)0x02000000)        /*!< bit 25 */
#define  NVIC_ISER_SETENA_26                 ((uint32_t)0x04000000)        /*!< bit 26 */
#define  NVIC_ISER_SETENA_27                 ((uint32_t)0x08000000)        /*!< bit 27 */
#define  NVIC_ISER_SETENA_28                 ((uint32_t)0x10000000)        /*!< bit 28 */
#define  NVIC_ISER_SETENA_29                 ((uint32_t)0x20000000)        /*!< bit 29 */
#define  NVIC_ISER_SETENA_30                 ((uint32_t)0x40000000)        /*!< bit 30 */
#define  NVIC_ISER_SETENA_31                 ((uint32_t)0x80000000)        /*!< bit 31 */

/******************  Bit definition for NVIC_ICER register  *******************/
#define  NVIC_ICER_CLRENA                   ((uint32_t)0xFFFFFFFF)        /*!< Interrupt clear-enable bits */
#define  NVIC_ICER_CLRENA_0                  ((uint32_t)0x00000001)        /*!< bit 0 */
#define  NVIC_ICER_CLRENA_1                  ((uint32_t)0x00000002)        /*!< bit 1 */
#define  NVIC_ICER_CLRENA_2                  ((uint32_t)0x00000004)        /*!< bit 2 */
#define  NVIC_ICER_CLRENA_3                  ((uint32_t)0x00000008)        /*!< bit 3 */
#define  NVIC_ICER_CLRENA_4                  ((uint32_t)0x00000010)        /*!< bit 4 */
#define  NVIC_ICER_CLRENA_5                  ((uint32_t)0x00000020)        /*!< bit 5 */
#define  NVIC_ICER_CLRENA_6                  ((uint32_t)0x00000040)        /*!< bit 6 */
#define  NVIC_ICER_CLRENA_7                  ((uint32_t)0x00000080)        /*!< bit 7 */
#define  NVIC_ICER_CLRENA_8                  ((uint32_t)0x00000100)        /*!< bit 8 */
#define  NVIC_ICER_CLRENA_9                  ((uint32_t)0x00000200)        /*!< bit 9 */
#define  NVIC_ICER_CLRENA_10                 ((uint32_t)0x00000400)        /*!< bit 10 */
#define  NVIC_ICER_CLRENA_11                 ((uint32_t)0x00000800)        /*!< bit 11 */
#define  NVIC_ICER_CLRENA_12                 ((uint32_t)0x00001000)        /*!< bit 12 */
#define  NVIC_ICER_CLRENA_13                 ((uint32_t)0x00002000)        /*!< bit 13 */
#define  NVIC_ICER_CLRENA_14                 ((uint32_t)0x00004000)        /*!< bit 14 */
#define  NVIC_ICER_CLRENA_15                 ((uint32_t)0x00008000)        /*!< bit 15 */
#define  NVIC_ICER_CLRENA_16                 ((uint32_t)0x00010000)        /*!< bit 16 */
#define  NVIC_ICER_CLRENA_17                 ((uint32_t)0x00020000)        /*!< bit 17 */
#define  NVIC_ICER_CLRENA_18                 ((uint32_t)0x00040000)        /*!< bit 18 */
#define  NVIC_ICER_CLRENA_19                 ((uint32_t)0x00080000)        /*!< bit 19 */
#define  NVIC_ICER_CLRENA_20                 ((uint32_t)0x00100000)        /*!< bit 20 */
#define  NVIC_ICER_CLRENA_21                 ((uint32_t)0x00200000)        /*!< bit 21 */
#define  NVIC_ICER_CLRENA_22                 ((uint32_t)0x00400000)        /*!< bit 22 */
#define  NVIC_ICER_CLRENA_23                 ((uint32_t)0x00800000)        /*!< bit 23 */
#define  NVIC_ICER_CLRENA_24                 ((uint32_t)0x01000000)        /*!< bit 24 */
#define  NVIC_ICER_CLRENA_25                 ((uint32_t)0x02000000)        /*!< bit 25 */
#define  NVIC_ICER_CLRENA_26                 ((uint32_t)0x04000000)        /*!< bit 26 */
#define  NVIC_ICER_CLRENA_27                 ((uint32_t)0x08000000)        /*!< bit 27 */
#define  NVIC_ICER_CLRENA_28                 ((uint32_t)0x10000000)        /*!< bit 28 */
#define  NVIC_ICER_CLRENA_29                 ((uint32_t)0x20000000)        /*!< bit 29 */
#define  NVIC_ICER_CLRENA_30                 ((uint32_t)0x40000000)        /*!< bit 30 */
#define  NVIC_ICER_CLRENA_31                 ((uint32_t)0x80000000)        /*!< bit 31 */

/******************  Bit definition for NVIC_ISPR register  *******************/
#define  NVIC_ISPR_SETPEND                   ((uint32_t)0xFFFFFFFF)        /*!< Interrupt set-pending bits */
#define  NVIC_ISPR_SETPEND_0                 ((uint32_t)0x00000001)        /*!< bit 0 */
#define  NVIC_ISPR_SETPEND_1                 ((uint32_t)0x00000002)        /*!< bit 1 */
#define  NVIC_ISPR_SETPEND_2                 ((uint32_t)0x00000004)        /*!< bit 2 */
#define  NVIC_ISPR_SETPEND_3                 ((uint32_t)0x00000008)        /*!< bit 3 */
#define  NVIC_ISPR_SETPEND_4                 ((uint32_t)0x00000010)        /*!< bit 4 */
#define  NVIC_ISPR_SETPEND_5                 ((uint32_t)0x00000020)        /*!< bit 5 */
#define  NVIC_ISPR_SETPEND_6                 ((uint32_t)0x00000040)        /*!< bit 6 */
#define  NVIC_ISPR_SETPEND_7                 ((uint32_t)0x00000080)        /*!< bit 7 */
#define  NVIC_ISPR_SETPEND_8                 ((uint32_t)0x00000100)        /*!< bit 8 */
#define  NVIC_ISPR_SETPEND_9                 ((uint32_t)0x00000200)        /*!< bit 9 */
#define  NVIC_ISPR_SETPEND_10                ((uint32_t)0x00000400)        /*!< bit 10 */
#define  NVIC_ISPR_SETPEND_11                ((uint32_t)0x00000800)        /*!< bit 11 */
#define  NVIC_ISPR_SETPEND_12                ((uint32_t)0x00001000)        /*!< bit 12 */
#define  NVIC_ISPR_SETPEND_13                ((uint32_t)0x00002000)        /*!< bit 13 */
#define  NVIC_ISPR_SETPEND_14                ((uint32_t)0x00004000)        /*!< bit 14 */
#define  NVIC_ISPR_SETPEND_15                ((uint32_t)0x00008000)        /*!< bit 15 */
#define  NVIC_ISPR_SETPEND_16                ((uint32_t)0x00010000)        /*!< bit 16 */
#define  NVIC_ISPR_SETPEND_17                ((uint32_t)0x00020000)        /*!< bit 17 */
#define  NVIC_ISPR_SETPEND_18                ((uint32_t)0x00040000)        /*!< bit 18 */
#define  NVIC_ISPR_SETPEND_19                ((uint32_t)0x00080000)        /*!< bit 19 */
#define  NVIC_ISPR_SETPEND_20                ((uint32_t)0x00100000)        /*!< bit 20 */
#define  NVIC_ISPR_SETPEND_21                ((uint32_t)0x00200000)        /*!< bit 21 */
#define  NVIC_ISPR_SETPEND_22                ((uint32_t)0x00400000)        /*!< bit 22 */
#define  NVIC_ISPR_SETPEND_23                ((uint32_t)0x00800000)        /*!< bit 23 */
#define  NVIC_ISPR_SETPEND_24                ((uint32_t)0x01000000)        /*!< bit 24 */
#define  NVIC_ISPR_SETPEND_25                ((uint32_t)0x02000000)        /*!< bit 25 */
#define  NVIC_ISPR_SETPEND_26                ((uint32_t)0x04000000)        /*!< bit 26 */
#define  NVIC_ISPR_SETPEND_27                ((uint32_t)0x08000000)        /*!< bit 27 */
#define  NVIC_ISPR_SETPEND_28                ((uint32_t)0x10000000)        /*!< bit 28 */
#define  NVIC_ISPR_SETPEND_29                ((uint32_t)0x20000000)        /*!< bit 29 */
#define  NVIC_ISPR_SETPEND_30                ((uint32_t)0x40000000)        /*!< bit 30 */
#define  NVIC_ISPR_SETPEND_31                ((uint32_t)0x80000000)        /*!< bit 31 */

/******************  Bit definition for NVIC_ICPR register  *******************/
#define  NVIC_ICPR_CLRPEND                   ((uint32_t)0xFFFFFFFF)        /*!< Interrupt clear-pending bits */
#define  NVIC_ICPR_CLRPEND_0                 ((uint32_t)0x00000001)        /*!< bit 0 */
#define  NVIC_ICPR_CLRPEND_1                 ((uint32_t)0x00000002)        /*!< bit 1 */
#define  NVIC_ICPR_CLRPEND_2                 ((uint32_t)0x00000004)        /*!< bit 2 */
#define  NVIC_ICPR_CLRPEND_3                 ((uint32_t)0x00000008)        /*!< bit 3 */
#define  NVIC_ICPR_CLRPEND_4                 ((uint32_t)0x00000010)        /*!< bit 4 */
#define  NVIC_ICPR_CLRPEND_5                 ((uint32_t)0x00000020)        /*!< bit 5 */
#define  NVIC_ICPR_CLRPEND_6                 ((uint32_t)0x00000040)        /*!< bit 6 */
#define  NVIC_ICPR_CLRPEND_7                 ((uint32_t)0x00000080)        /*!< bit 7 */
#define  NVIC_ICPR_CLRPEND_8                 ((uint32_t)0x00000100)        /*!< bit 8 */
#define  NVIC_ICPR_CLRPEND_9                 ((uint32_t)0x00000200)        /*!< bit 9 */
#define  NVIC_ICPR_CLRPEND_10                ((uint32_t)0x00000400)        /*!< bit 10 */
#define  NVIC_ICPR_CLRPEND_11                ((uint32_t)0x00000800)        /*!< bit 11 */
#define  NVIC_ICPR_CLRPEND_12                ((uint32_t)0x00001000)        /*!< bit 12 */
#define  NVIC_ICPR_CLRPEND_13                ((uint32_t)0x00002000)        /*!< bit 13 */
#define  NVIC_ICPR_CLRPEND_14                ((uint32_t)0x00004000)        /*!< bit 14 */
#define  NVIC_ICPR_CLRPEND_15                ((uint32_t)0x00008000)        /*!< bit 15 */
#define  NVIC_ICPR_CLRPEND_16                ((uint32_t)0x00010000)        /*!< bit 16 */
#define  NVIC_ICPR_CLRPEND_17                ((uint32_t)0x00020000)        /*!< bit 17 */
#define  NVIC_ICPR_CLRPEND_18                ((uint32_t)0x00040000)        /*!< bit 18 */
#define  NVIC_ICPR_CLRPEND_19                ((uint32_t)0x00080000)        /*!< bit 19 */
#define  NVIC_ICPR_CLRPEND_20                ((uint32_t)0x00100000)        /*!< bit 20 */
#define  NVIC_ICPR_CLRPEND_21                ((uint32_t)0x00200000)        /*!< bit 21 */
#define  NVIC_ICPR_CLRPEND_22                ((uint32_t)0x00400000)        /*!< bit 22 */
#define  NVIC_ICPR_CLRPEND_23                ((uint32_t)0x00800000)        /*!< bit 23 */
#define  NVIC_ICPR_CLRPEND_24                ((uint32_t)0x01000000)        /*!< bit 24 */
#define  NVIC_ICPR_CLRPEND_25                ((uint32_t)0x02000000)        /*!< bit 25 */
#define  NVIC_ICPR_CLRPEND_26                ((uint32_t)0x04000000)        /*!< bit 26 */
#define  NVIC_ICPR_CLRPEND_27                ((uint32_t)0x08000000)        /*!< bit 27 */
#define  NVIC_ICPR_CLRPEND_28                ((uint32_t)0x10000000)        /*!< bit 28 */
#define  NVIC_ICPR_CLRPEND_29                ((uint32_t)0x20000000)        /*!< bit 29 */
#define  NVIC_ICPR_CLRPEND_30                ((uint32_t)0x40000000)        /*!< bit 30 */
#define  NVIC_ICPR_CLRPEND_31                ((uint32_t)0x80000000)        /*!< bit 31 */

/******************  Bit definition for NVIC_IABR register  *******************/
#define  NVIC_IABR_ACTIVE                    ((uint32_t)0xFFFFFFFF)        /*!< Interrupt active flags */
#define  NVIC_IABR_ACTIVE_0                  ((uint32_t)0x00000001)        /*!< bit 0 */
#define  NVIC_IABR_ACTIVE_1                  ((uint32_t)0x00000002)        /*!< bit 1 */
#define  NVIC_IABR_ACTIVE_2                  ((uint32_t)0x00000004)        /*!< bit 2 */
#define  NVIC_IABR_ACTIVE_3                  ((uint32_t)0x00000008)        /*!< bit 3 */
#define  NVIC_IABR_ACTIVE_4                  ((uint32_t)0x00000010)        /*!< bit 4 */
#define  NVIC_IABR_ACTIVE_5                  ((uint32_t)0x00000020)        /*!< bit 5 */
#define  NVIC_IABR_ACTIVE_6                  ((uint32_t)0x00000040)        /*!< bit 6 */
#define  NVIC_IABR_ACTIVE_7                  ((uint32_t)0x00000080)        /*!< bit 7 */
#define  NVIC_IABR_ACTIVE_8                  ((uint32_t)0x00000100)        /*!< bit 8 */
#define  NVIC_IABR_ACTIVE_9                  ((uint32_t)0x00000200)        /*!< bit 9 */
#define  NVIC_IABR_ACTIVE_10                 ((uint32_t)0x00000400)        /*!< bit 10 */
#define  NVIC_IABR_ACTIVE_11                 ((uint32_t)0x00000800)        /*!< bit 11 */
#define  NVIC_IABR_ACTIVE_12                 ((uint32_t)0x00001000)        /*!< bit 12 */
#define  NVIC_IABR_ACTIVE_13                 ((uint32_t)0x00002000)        /*!< bit 13 */
#define  NVIC_IABR_ACTIVE_14                 ((uint32_t)0x00004000)        /*!< bit 14 */
#define  NVIC_IABR_ACTIVE_15                 ((uint32_t)0x00008000)        /*!< bit 15 */
#define  NVIC_IABR_ACTIVE_16                 ((uint32_t)0x00010000)        /*!< bit 16 */
#define  NVIC_IABR_ACTIVE_17                 ((uint32_t)0x00020000)        /*!< bit 17 */
#define  NVIC_IABR_ACTIVE_18                 ((uint32_t)0x00040000)        /*!< bit 18 */
#define  NVIC_IABR_ACTIVE_19                 ((uint32_t)0x00080000)        /*!< bit 19 */
#define  NVIC_IABR_ACTIVE_20                 ((uint32_t)0x00100000)        /*!< bit 20 */
#define  NVIC_IABR_ACTIVE_21                 ((uint32_t)0x00200000)        /*!< bit 21 */
#define  NVIC_IABR_ACTIVE_22                 ((uint32_t)0x00400000)        /*!< bit 22 */
#define  NVIC_IABR_ACTIVE_23                 ((uint32_t)0x00800000)        /*!< bit 23 */
#define  NVIC_IABR_ACTIVE_24                 ((uint32_t)0x01000000)        /*!< bit 24 */
#define  NVIC_IABR_ACTIVE_25                 ((uint32_t)0x02000000)        /*!< bit 25 */
#define  NVIC_IABR_ACTIVE_26                 ((uint32_t)0x04000000)        /*!< bit 26 */
#define  NVIC_IABR_ACTIVE_27                 ((uint32_t)0x08000000)        /*!< bit 27 */
#define  NVIC_IABR_ACTIVE_28                 ((uint32_t)0x10000000)        /*!< bit 28 */
#define  NVIC_IABR_ACTIVE_29                 ((uint32_t)0x20000000)        /*!< bit 29 */
#define  NVIC_IABR_ACTIVE_30                 ((uint32_t)0x40000000)        /*!< bit 30 */
#define  NVIC_IABR_ACTIVE_31                 ((uint32_t)0x80000000)        /*!< bit 31 */

/******************  Bit definition for NVIC_PRI0 register  *******************/
#define  NVIC_IPR0_PRI_0                     ((uint32_t)0x000000FF)        /*!< Priority of interrupt 0 */
#define  NVIC_IPR0_PRI_1                     ((uint32_t)0x0000FF00)        /*!< Priority of interrupt 1 */
#define  NVIC_IPR0_PRI_2                     ((uint32_t)0x00FF0000)        /*!< Priority of interrupt 2 */
#define  NVIC_IPR0_PRI_3                     ((uint32_t)0xFF000000)        /*!< Priority of interrupt 3 */

/******************  Bit definition for NVIC_PRI1 register  *******************/
#define  NVIC_IPR1_PRI_4                     ((uint32_t)0x000000FF)        /*!< Priority of interrupt 4 */
#define  NVIC_IPR1_PRI_5                     ((uint32_t)0x0000FF00)        /*!< Priority of interrupt 5 */
#define  NVIC_IPR1_PRI_6                     ((uint32_t)0x00FF0000)        /*!< Priority of interrupt 6 */
#define  NVIC_IPR1_PRI_7                     ((uint32_t)0xFF000000)        /*!< Priority of interrupt 7 */

/******************  Bit definition for NVIC_PRI2 register  *******************/
#define  NVIC_IPR2_PRI_8                     ((uint32_t)0x000000FF)        /*!< Priority of interrupt 8 */
#define  NVIC_IPR2_PRI_9                     ((uint32_t)0x0000FF00)        /*!< Priority of interrupt 9 */
#define  NVIC_IPR2_PRI_10                    ((uint32_t)0x00FF0000)        /*!< Priority of interrupt 10 */
#define  NVIC_IPR2_PRI_11                    ((uint32_t)0xFF000000)        /*!< Priority of interrupt 11 */

/******************  Bit definition for NVIC_PRI3 register  *******************/
#define  NVIC_IPR3_PRI_12                    ((uint32_t)0x000000FF)        /*!< Priority of interrupt 12 */
#define  NVIC_IPR3_PRI_13                    ((uint32_t)0x0000FF00)        /*!< Priority of interrupt 13 */
#define  NVIC_IPR3_PRI_14                    ((uint32_t)0x00FF0000)        /*!< Priority of interrupt 14 */
#define  NVIC_IPR3_PRI_15                    ((uint32_t)0xFF000000)        /*!< Priority of interrupt 15 */

/******************  Bit definition for NVIC_PRI4 register  *******************/
#define  NVIC_IPR4_PRI_16                    ((uint32_t)0x000000FF)        /*!< Priority of interrupt 16 */
#define  NVIC_IPR4_PRI_17                    ((uint32_t)0x0000FF00)        /*!< Priority of interrupt 17 */
#define  NVIC_IPR4_PRI_18                    ((uint32_t)0x00FF0000)        /*!< Priority of interrupt 18 */
#define  NVIC_IPR4_PRI_19                    ((uint32_t)0xFF000000)        /*!< Priority of interrupt 19 */

/******************  Bit definition for NVIC_PRI5 register  *******************/
#define  NVIC_IPR5_PRI_20                    ((uint32_t)0x000000FF)        /*!< Priority of interrupt 20 */
#define  NVIC_IPR5_PRI_21                    ((uint32_t)0x0000FF00)        /*!< Priority of interrupt 21 */
#define  NVIC_IPR5_PRI_22                    ((uint32_t)0x00FF0000)        /*!< Priority of interrupt 22 */
#define  NVIC_IPR5_PRI_23                    ((uint32_t)0xFF000000)        /*!< Priority of interrupt 23 */

/******************  Bit definition for NVIC_PRI6 register  *******************/
#define  NVIC_IPR6_PRI_24                    ((uint32_t)0x000000FF)        /*!< Priority of interrupt 24 */
#define  NVIC_IPR6_PRI_25                    ((uint32_t)0x0000FF00)        /*!< Priority of interrupt 25 */
#define  NVIC_IPR6_PRI_26                    ((uint32_t)0x00FF0000)        /*!< Priority of interrupt 26 */
#define  NVIC_IPR6_PRI_27                    ((uint32_t)0xFF000000)        /*!< Priority of interrupt 27 */

/******************  Bit definition for NVIC_PRI7 register  *******************/
#define  NVIC_IPR7_PRI_28                    ((uint32_t)0x000000FF)        /*!< Priority of interrupt 28 */
#define  NVIC_IPR7_PRI_29                    ((uint32_t)0x0000FF00)        /*!< Priority of interrupt 29 */
#define  NVIC_IPR7_PRI_30                    ((uint32_t)0x00FF0000)        /*!< Priority of interrupt 30 */
#define  NVIC_IPR7_PRI_31                    ((uint32_t)0xFF000000)        /*!< Priority of interrupt 31 */

/******************  Bit definition for NVIC_PRI8 register  *******************/
#define  NVIC_IPR7_PRI_32                    ((uint32_t)0x000000FF)        /*!< Priority of interrupt 32 */
#define  NVIC_IPR7_PRI_33                    ((uint32_t)0x0000FF00)        /*!< Priority of interrupt 33 */
#define  NVIC_IPR7_PRI_34                    ((uint32_t)0x00FF0000)        /*!< Priority of interrupt 34 */
#define  NVIC_IPR7_PRI_35                    ((uint32_t)0xFF000000)        /*!< Priority of interrupt 35 */

/******************  Bit definition for NVIC_PRI9 register  *******************/
#define  NVIC_IPR7_PRI_36                    ((uint32_t)0x000000FF)        /*!< Priority of interrupt 36 */
#define  NVIC_IPR7_PRI_37                    ((uint32_t)0x0000FF00)        /*!< Priority of interrupt 37 */
#define  NVIC_IPR7_PRI_38                    ((uint32_t)0x00FF0000)        /*!< Priority of interrupt 38 */
#define  NVIC_IPR7_PRI_39                    ((uint32_t)0xFF000000)        /*!< Priority of interrupt 39 */

/******************  Bit definition for NVIC_PRI10 register  *******************/
#define  NVIC_IPR7_PRI_40                    ((uint32_t)0x000000FF)        /*!< Priority of interrupt 40 */
#define  NVIC_IPR7_PRI_41                    ((uint32_t)0x0000FF00)        /*!< Priority of interrupt 41 */
#define  NVIC_IPR7_PRI_42                    ((uint32_t)0x00FF0000)        /*!< Priority of interrupt 42 */
#define  NVIC_IPR7_PRI_43                    ((uint32_t)0xFF000000)        /*!< Priority of interrupt 43 */

/******************  Bit definition for NVIC_PRI11 register  *******************/
#define  NVIC_IPR7_PRI_44                    ((uint32_t)0x000000FF)        /*!< Priority of interrupt 44 */
#define  NVIC_IPR7_PRI_45                    ((uint32_t)0x0000FF00)        /*!< Priority of interrupt 45 */
#define  NVIC_IPR7_PRI_46                    ((uint32_t)0x00FF0000)        /*!< Priority of interrupt 46 */
#define  NVIC_IPR7_PRI_47                    ((uint32_t)0xFF000000)        /*!< Priority of interrupt 47 */

/******************  Bit definition for SCB_CPUID register  *******************/
#define  SCB_CPUID_REVISION                  ((uint32_t)0x0000000F)        /*!< Implementation defined revision number */
#define  SCB_CPUID_PARTNO                    ((uint32_t)0x0000FFF0)        /*!< Number of processor within family */
#define  SCB_CPUID_Constant                  ((uint32_t)0x000F0000)        /*!< Reads as 0x0F */
#define  SCB_CPUID_VARIANT                   ((uint32_t)0x00F00000)        /*!< Implementation defined variant number */
#define  SCB_CPUID_IMPLEMENTER               ((uint32_t)0xFF000000)        /*!< Implementer code. ARM is 0x41 */

/*******************  Bit definition for SCB_ICSR register  *******************/
#define  SCB_ICSR_VECTACTIVE                 ((uint32_t)0x000001FF)        /*!< Active ISR number field */
#define  SCB_ICSR_RETTOBASE                  ((uint32_t)0x00000800)        /*!< All active exceptions minus the IPSR_current_exception yields the empty set */
#define  SCB_ICSR_VECTPENDING                ((uint32_t)0x003FF000)        /*!< Pending ISR number field */
#define  SCB_ICSR_ISRPENDING                 ((uint32_t)0x00400000)        /*!< Interrupt pending flag */
#define  SCB_ICSR_ISRPREEMPT                 ((uint32_t)0x00800000)        /*!< It indicates that a pending interrupt becomes active in the next running cycle */
#define  SCB_ICSR_PENDSTCLR                  ((uint32_t)0x02000000)        /*!< Clear pending SysTick bit */
#define  SCB_ICSR_PENDSTSET                  ((uint32_t)0x04000000)        /*!< Set pending SysTick bit */
#define  SCB_ICSR_PENDSVCLR                  ((uint32_t)0x08000000)        /*!< Clear pending pendSV bit */
#define  SCB_ICSR_PENDSVSET                  ((uint32_t)0x10000000)        /*!< Set pending pendSV bit */
#define  SCB_ICSR_NMIPENDSET                 ((uint32_t)0x80000000)        /*!< Set pending NMI bit */

/*******************  Bit definition for SCB_VTOR register  *******************/
#define  SCB_VTOR_TBLOFF                     ((uint32_t)0x1FFFFF80)        /*!< Vector table base offset field */
#define  SCB_VTOR_TBLBASE                    ((uint32_t)0x20000000)        /*!< Table base in code(0) or RAM(1) */

/*!<*****************  Bit definition for SCB_AIRCR register  *******************/
#define  SCB_AIRCR_VECTRESET                 ((uint32_t)0x00000001)        /*!< System Reset bit */
#define  SCB_AIRCR_VECTCLRACTIVE             ((uint32_t)0x00000002)        /*!< Clear active vector bit */
#define  SCB_AIRCR_SYSRESETREQ               ((uint32_t)0x00000004)        /*!< Requests chip control logic to generate a reset */

#define  SCB_AIRCR_PRIGROUP                  ((uint32_t)0x00000700)        /*!< PRIGROUP[2:0] bits (Priority group) */
#define  SCB_AIRCR_PRIGROUP_0                ((uint32_t)0x00000100)        /*!< Bit 0 */
#define  SCB_AIRCR_PRIGROUP_1                ((uint32_t)0x00000200)        /*!< Bit 1 */
#define  SCB_AIRCR_PRIGROUP_2                ((uint32_t)0x00000400)        /*!< Bit 2  */

/* prority group configuration */
#define  SCB_AIRCR_PRIGROUP0                 ((uint32_t)0x00000000)        /*!< Priority group=0 (7 bits of pre-emption priority, 1 bit of subpriority) */
#define  SCB_AIRCR_PRIGROUP1                 ((uint32_t)0x00000100)        /*!< Priority group=1 (6 bits of pre-emption priority, 2 bits of subpriority) */
#define  SCB_AIRCR_PRIGROUP2                 ((uint32_t)0x00000200)        /*!< Priority group=2 (5 bits of pre-emption priority, 3 bits of subpriority) */
#define  SCB_AIRCR_PRIGROUP3                 ((uint32_t)0x00000300)        /*!< Priority group=3 (4 bits of pre-emption priority, 4 bits of subpriority) */
#define  SCB_AIRCR_PRIGROUP4                 ((uint32_t)0x00000400)        /*!< Priority group=4 (3 bits of pre-emption priority, 5 bits of subpriority) */
#define  SCB_AIRCR_PRIGROUP5                 ((uint32_t)0x00000500)        /*!< Priority group=5 (2 bits of pre-emption priority, 6 bits of subpriority) */
#define  SCB_AIRCR_PRIGROUP6                 ((uint32_t)0x00000600)        /*!< Priority group=6 (1 bit of pre-emption priority, 7 bits of subpriority) */
#define  SCB_AIRCR_PRIGROUP7                 ((uint32_t)0x00000700)        /*!< Priority group=7 (no pre-emption priority, 8 bits of subpriority) */

#define  SCB_AIRCR_ENDIANESS                 ((uint32_t)0x00008000)        /*!< Data endianness bit */
#define  SCB_AIRCR_VECTKEY                   ((uint32_t)0xFFFF0000)        /*!< Register key (VECTKEY) - Reads as 0xFA05 (VECTKEYSTAT) */

/*******************  Bit definition for SCB_SCR register  ********************/
#define  SCB_SCR_SLEEPONEXIT                 ((uint8_t)0x02)               /*!< Sleep on exit bit */
#define  SCB_SCR_SLEEPDEEP                   ((uint8_t)0x04)               /*!< Sleep deep bit */
#define  SCB_SCR_SEVONPEND                   ((uint8_t)0x10)               /*!< Wake up from WFE */

/********************  Bit definition for SCB_CCR register  *******************/
#define  SCB_CCR_NONBASETHRDENA              ((uint16_t)0x0001)            /*!< Thread mode can be entered from any level in Handler mode by controlled return value */
#define  SCB_CCR_USERSETMPEND                ((uint16_t)0x0002)            /*!< Enables user code to write the Software Trigger Interrupt register to trigger (pend) a Main exception */
#define  SCB_CCR_UNALIGN_TRP                 ((uint16_t)0x0008)            /*!< Trap for unaligned access */
#define  SCB_CCR_DIV_0_TRP                   ((uint16_t)0x0010)            /*!< Trap on Divide by 0 */
#define  SCB_CCR_BFHFNMIGN                   ((uint16_t)0x0100)            /*!< Handlers running at priority -1 and -2 */
#define  SCB_CCR_STKALIGN                    ((uint16_t)0x0200)            /*!< On exception entry, the SP used prior to the exception is adjusted to be 8-byte aligned */

/*******************  Bit definition for SCB_SHPR register ********************/
#define  SCB_SHPR_PRI_N                      ((uint32_t)0x000000FF)        /*!< Priority of system handler 4,8, and 12. Mem Manage, reserved and Debug Monitor */
#define  SCB_SHPR_PRI_N1                     ((uint32_t)0x0000FF00)        /*!< Priority of system handler 5,9, and 13. Bus Fault, reserved and reserved */
#define  SCB_SHPR_PRI_N2                     ((uint32_t)0x00FF0000)        /*!< Priority of system handler 6,10, and 14. Usage Fault, reserved and PendSV */
#define  SCB_SHPR_PRI_N3                     ((uint32_t)0xFF000000)        /*!< Priority of system handler 7,11, and 15. Reserved, SVCall and SysTick */

/******************  Bit definition for SCB_SHCSR register  *******************/
#define  SCB_SHCSR_MEMFAULTACT               ((uint32_t)0x00000001)        /*!< MemManage is active */
#define  SCB_SHCSR_BUSFAULTACT               ((uint32_t)0x00000002)        /*!< BusFault is active */
#define  SCB_SHCSR_USGFAULTACT               ((uint32_t)0x00000008)        /*!< UsageFault is active */
#define  SCB_SHCSR_SVCALLACT                 ((uint32_t)0x00000080)        /*!< SVCall is active */
#define  SCB_SHCSR_MONITORACT                ((uint32_t)0x00000100)        /*!< Monitor is active */
#define  SCB_SHCSR_PENDSVACT                 ((uint32_t)0x00000400)        /*!< PendSV is active */
#define  SCB_SHCSR_SYSTICKACT                ((uint32_t)0x00000800)        /*!< SysTick is active */
#define  SCB_SHCSR_USGFAULTPENDED            ((uint32_t)0x00001000)        /*!< Usage Fault is pended */
#define  SCB_SHCSR_MEMFAULTPENDED            ((uint32_t)0x00002000)        /*!< MemManage is pended */
#define  SCB_SHCSR_BUSFAULTPENDED            ((uint32_t)0x00004000)        /*!< Bus Fault is pended */
#define  SCB_SHCSR_SVCALLPENDED              ((uint32_t)0x00008000)        /*!< SVCall is pended */
#define  SCB_SHCSR_MEMFAULTENA               ((uint32_t)0x00010000)        /*!< MemManage enable */
#define  SCB_SHCSR_BUSFAULTENA               ((uint32_t)0x00020000)        /*!< Bus Fault enable */
#define  SCB_SHCSR_USGFAULTENA               ((uint32_t)0x00040000)        /*!< UsageFault enable */

/*******************  Bit definition for SCB_CFSR register  *******************/
/*!< MFSR */
#define  SCB_CFSR_IACCVIOL                   ((uint32_t)0x00000001)        /*!< Instruction access violation */
#define  SCB_CFSR_DACCVIOL                   ((uint32_t)0x00000002)        /*!< Data access violation */
#define  SCB_CFSR_MUNSTKERR                  ((uint32_t)0x00000008)        /*!< Unstacking error */
#define  SCB_CFSR_MSTKERR                    ((uint32_t)0x00000010)        /*!< Stacking error */
#define  SCB_CFSR_MMARVALID                  ((uint32_t)0x00000080)        /*!< Memory Manage Address Register address valid flag */
/*!< BFSR */
#define  SCB_CFSR_IBUSERR                    ((uint32_t)0x00000100)        /*!< Instruction bus error flag */
#define  SCB_CFSR_PRECISERR                  ((uint32_t)0x00000200)        /*!< Precise data bus error */
#define  SCB_CFSR_IMPRECISERR                ((uint32_t)0x00000400)        /*!< Imprecise data bus error */
#define  SCB_CFSR_UNSTKERR                   ((uint32_t)0x00000800)        /*!< Unstacking error */
#define  SCB_CFSR_STKERR                     ((uint32_t)0x00001000)        /*!< Stacking error */
#define  SCB_CFSR_BFARVALID                  ((uint32_t)0x00008000)        /*!< Bus Fault Address Register address valid flag */
/*!< UFSR */
#define  SCB_CFSR_UNDEFINSTR                 ((uint32_t)0x00010000)        /*!< The processor attempt to excecute an undefined instruction */
#define  SCB_CFSR_INVSTATE                   ((uint32_t)0x00020000)        /*!< Invalid combination of EPSR and instruction */
#define  SCB_CFSR_INVPC                      ((uint32_t)0x00040000)        /*!< Attempt to load EXC_RETURN into pc illegally */
#define  SCB_CFSR_NOCP                       ((uint32_t)0x00080000)        /*!< Attempt to use a coprocessor instruction */
#define  SCB_CFSR_UNALIGNED                  ((uint32_t)0x01000000)        /*!< Fault occurs when there is an attempt to make an unaligned memory access */
#define  SCB_CFSR_DIVBYZERO                  ((uint32_t)0x02000000)        /*!< Fault occurs when SDIV or DIV instruction is used with a divisor of 0 */

/*******************  Bit definition for SCB_HFSR register  *******************/
#define  SCB_HFSR_VECTTBL                    ((uint32_t)0x00000002)        /*!< Fault occures because of vector table read on exception processing */
#define  SCB_HFSR_FORCED                     ((uint32_t)0x40000000)        /*!< Hard Fault activated when a configurable Fault was received and cannot activate */
#define  SCB_HFSR_DEBUGEVT                   ((uint32_t)0x80000000)        /*!< Fault related to debug */

/*******************  Bit definition for SCB_DFSR register  *******************/
#define  SCB_DFSR_HALTED                     ((uint8_t)0x01)               /*!< Halt request flag */
#define  SCB_DFSR_BKPT                       ((uint8_t)0x02)               /*!< BKPT flag */
#define  SCB_DFSR_DWTTRAP                    ((uint8_t)0x04)               /*!< Data Watchpoint and Trace (DWT) flag */
#define  SCB_DFSR_VCATCH                     ((uint8_t)0x08)               /*!< Vector catch flag */
#define  SCB_DFSR_EXTERNAL                   ((uint8_t)0x10)               /*!< External debug request flag */

/*******************  Bit definition for SCB_MMFAR register  ******************/
#define  SCB_MMFAR_ADDRESS                   ((uint32_t)0xFFFFFFFF)        /*!< Mem Manage fault address field */

/*******************  Bit definition for SCB_BFAR register  *******************/
#define  SCB_BFAR_ADDRESS                    ((uint32_t)0xFFFFFFFF)        /*!< Bus fault address field */

/*******************  Bit definition for SCB_afsr register  *******************/
#define  SCB_AFSR_IMPDEF                     ((uint32_t)0xFFFFFFFF)        /*!< Implementation defined */

/******************************************************************************/
/*                                                                            */
/*                    External Interrupt/Event Controller                     */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for EXTI_IMR register  *******************/
#define  EXTI_IMR_MR0                        ((uint32_t)0x00000001)        /*!< Interrupt Mask on line 0 */
#define  EXTI_IMR_MR1                        ((uint32_t)0x00000002)        /*!< Interrupt Mask on line 1 */
#define  EXTI_IMR_MR2                        ((uint32_t)0x00000004)        /*!< Interrupt Mask on line 2 */
#define  EXTI_IMR_MR3                        ((uint32_t)0x00000008)        /*!< Interrupt Mask on line 3 */
#define  EXTI_IMR_MR4                        ((uint32_t)0x00000010)        /*!< Interrupt Mask on line 4 */
#define  EXTI_IMR_MR5                        ((uint32_t)0x00000020)        /*!< Interrupt Mask on line 5 */
#define  EXTI_IMR_MR6                        ((uint32_t)0x00000040)        /*!< Interrupt Mask on line 6 */
#define  EXTI_IMR_MR7                        ((uint32_t)0x00000080)        /*!< Interrupt Mask on line 7 */
#define  EXTI_IMR_MR8                        ((uint32_t)0x00000100)        /*!< Interrupt Mask on line 8 */
#define  EXTI_IMR_MR9                        ((uint32_t)0x00000200)        /*!< Interrupt Mask on line 9 */
#define  EXTI_IMR_MR10                       ((uint32_t)0x00000400)        /*!< Interrupt Mask on line 10 */
#define  EXTI_IMR_MR11                       ((uint32_t)0x00000800)        /*!< Interrupt Mask on line 11 */
#define  EXTI_IMR_MR12                       ((uint32_t)0x00001000)        /*!< Interrupt Mask on line 12 */
#define  EXTI_IMR_MR13                       ((uint32_t)0x00002000)        /*!< Interrupt Mask on line 13 */
#define  EXTI_IMR_MR14                       ((uint32_t)0x00004000)        /*!< Interrupt Mask on line 14 */
#define  EXTI_IMR_MR15                       ((uint32_t)0x00008000)        /*!< Interrupt Mask on line 15 */
#define  EXTI_IMR_MR16                       ((uint32_t)0x00010000)        /*!< Interrupt Mask on line 16 */
#define  EXTI_IMR_MR17                       ((uint32_t)0x00020000)        /*!< Interrupt Mask on line 17 */
#define  EXTI_IMR_MR18                       ((uint32_t)0x00040000)        /*!< Interrupt Mask on line 18 */
// #define  EXTI_IMR_MR19                       ((uint32_t)0x00080000)        /*!< Interrupt Mask on line 19 */
// #define  EXTI_IMR_MR20                       ((uint32_t)0x00100000)        /*!< Interrupt Mask on line 20 */

/*******************  Bit definition for EXTI_EMR register  *******************/
#define  EXTI_EMR_MR0                        ((uint32_t)0x00000001)        /*!< Event Mask on line 0 */
#define  EXTI_EMR_MR1                        ((uint32_t)0x00000002)        /*!< Event Mask on line 1 */
#define  EXTI_EMR_MR2                        ((uint32_t)0x00000004)        /*!< Event Mask on line 2 */
#define  EXTI_EMR_MR3                        ((uint32_t)0x00000008)        /*!< Event Mask on line 3 */
#define  EXTI_EMR_MR4                        ((uint32_t)0x00000010)        /*!< Event Mask on line 4 */
#define  EXTI_EMR_MR5                        ((uint32_t)0x00000020)        /*!< Event Mask on line 5 */
#define  EXTI_EMR_MR6                        ((uint32_t)0x00000040)        /*!< Event Mask on line 6 */
#define  EXTI_EMR_MR7                        ((uint32_t)0x00000080)        /*!< Event Mask on line 7 */
#define  EXTI_EMR_MR8                        ((uint32_t)0x00000100)        /*!< Event Mask on line 8 */
#define  EXTI_EMR_MR9                        ((uint32_t)0x00000200)        /*!< Event Mask on line 9 */
#define  EXTI_EMR_MR10                       ((uint32_t)0x00000400)        /*!< Event Mask on line 10 */
#define  EXTI_EMR_MR11                       ((uint32_t)0x00000800)        /*!< Event Mask on line 11 */
#define  EXTI_EMR_MR12                       ((uint32_t)0x00001000)        /*!< Event Mask on line 12 */
#define  EXTI_EMR_MR13                       ((uint32_t)0x00002000)        /*!< Event Mask on line 13 */
#define  EXTI_EMR_MR14                       ((uint32_t)0x00004000)        /*!< Event Mask on line 14 */
#define  EXTI_EMR_MR15                       ((uint32_t)0x00008000)        /*!< Event Mask on line 15 */
#define  EXTI_EMR_MR16                       ((uint32_t)0x00010000)        /*!< Event Mask on line 16 */
#define  EXTI_EMR_MR17                       ((uint32_t)0x00020000)        /*!< Event Mask on line 17 */
#define  EXTI_EMR_MR18                       ((uint32_t)0x00040000)        /*!< Event Mask on line 18 */
// #define  EXTI_EMR_MR19                       ((uint32_t)0x00080000)        /*!< Event Mask on line 19 */
// #define  EXTI_EMR_MR20                       ((uint32_t)0x00100000)        /*!< Event Mask on line 20 */

/******************  Bit definition for EXTI_RTSR register  *******************/
#define  EXTI_RTSR_TR0                       ((uint32_t)0x00000001)        /*!< Rising trigger event configuration bit of line 0 */
#define  EXTI_RTSR_TR1                       ((uint32_t)0x00000002)        /*!< Rising trigger event configuration bit of line 1 */
#define  EXTI_RTSR_TR2                       ((uint32_t)0x00000004)        /*!< Rising trigger event configuration bit of line 2 */
#define  EXTI_RTSR_TR3                       ((uint32_t)0x00000008)        /*!< Rising trigger event configuration bit of line 3 */
#define  EXTI_RTSR_TR4                       ((uint32_t)0x00000010)        /*!< Rising trigger event configuration bit of line 4 */
#define  EXTI_RTSR_TR5                       ((uint32_t)0x00000020)        /*!< Rising trigger event configuration bit of line 5 */
#define  EXTI_RTSR_TR6                       ((uint32_t)0x00000040)        /*!< Rising trigger event configuration bit of line 6 */
#define  EXTI_RTSR_TR7                       ((uint32_t)0x00000080)        /*!< Rising trigger event configuration bit of line 7 */
#define  EXTI_RTSR_TR8                       ((uint32_t)0x00000100)        /*!< Rising trigger event configuration bit of line 8 */
#define  EXTI_RTSR_TR9                       ((uint32_t)0x00000200)        /*!< Rising trigger event configuration bit of line 9 */
#define  EXTI_RTSR_TR10                      ((uint32_t)0x00000400)        /*!< Rising trigger event configuration bit of line 10 */
#define  EXTI_RTSR_TR11                      ((uint32_t)0x00000800)        /*!< Rising trigger event configuration bit of line 11 */
#define  EXTI_RTSR_TR12                      ((uint32_t)0x00001000)        /*!< Rising trigger event configuration bit of line 12 */
#define  EXTI_RTSR_TR13                      ((uint32_t)0x00002000)        /*!< Rising trigger event configuration bit of line 13 */
#define  EXTI_RTSR_TR14                      ((uint32_t)0x00004000)        /*!< Rising trigger event configuration bit of line 14 */
#define  EXTI_RTSR_TR15                      ((uint32_t)0x00008000)        /*!< Rising trigger event configuration bit of line 15 */
#define  EXTI_RTSR_TR16                      ((uint32_t)0x00010000)        /*!< Rising trigger event configuration bit of line 16 */
#define  EXTI_RTSR_TR17                      ((uint32_t)0x00020000)        /*!< Rising trigger event configuration bit of line 17 */
#define  EXTI_RTSR_TR18                      ((uint32_t)0x00040000)        /*!< Rising trigger event configuration bit of line 18 */
// #define  EXTI_RTSR_TR19                      ((uint32_t)0x00080000)        /*!< Rising trigger event configuration bit of line 19 */
// #define  EXTI_RTSR_TR20                      ((uint32_t)0x00100000)        /*!< Rising trigger event configuration bit of line 20 */

/******************  Bit definition for EXTI_FTSR register  *******************/
#define  EXTI_FTSR_TR0                       ((uint32_t)0x00000001)        /*!< Falling trigger event configuration bit of line 0 */
#define  EXTI_FTSR_TR1                       ((uint32_t)0x00000002)        /*!< Falling trigger event configuration bit of line 1 */
#define  EXTI_FTSR_TR2                       ((uint32_t)0x00000004)        /*!< Falling trigger event configuration bit of line 2 */
#define  EXTI_FTSR_TR3                       ((uint32_t)0x00000008)        /*!< Falling trigger event configuration bit of line 3 */
#define  EXTI_FTSR_TR4                       ((uint32_t)0x00000010)        /*!< Falling trigger event configuration bit of line 4 */
#define  EXTI_FTSR_TR5                       ((uint32_t)0x00000020)        /*!< Falling trigger event configuration bit of line 5 */
#define  EXTI_FTSR_TR6                       ((uint32_t)0x00000040)        /*!< Falling trigger event configuration bit of line 6 */
#define  EXTI_FTSR_TR7                       ((uint32_t)0x00000080)        /*!< Falling trigger event configuration bit of line 7 */
#define  EXTI_FTSR_TR8                       ((uint32_t)0x00000100)        /*!< Falling trigger event configuration bit of line 8 */
#define  EXTI_FTSR_TR9                       ((uint32_t)0x00000200)        /*!< Falling trigger event configuration bit of line 9 */
#define  EXTI_FTSR_TR10                      ((uint32_t)0x00000400)        /*!< Falling trigger event configuration bit of line 10 */
#define  EXTI_FTSR_TR11                      ((uint32_t)0x00000800)        /*!< Falling trigger event configuration bit of line 11 */
#define  EXTI_FTSR_TR12                      ((uint32_t)0x00001000)        /*!< Falling trigger event configuration bit of line 12 */
#define  EXTI_FTSR_TR13                      ((uint32_t)0x00002000)        /*!< Falling trigger event configuration bit of line 13 */
#define  EXTI_FTSR_TR14                      ((uint32_t)0x00004000)        /*!< Falling trigger event configuration bit of line 14 */
#define  EXTI_FTSR_TR15                      ((uint32_t)0x00008000)        /*!< Falling trigger event configuration bit of line 15 */
#define  EXTI_FTSR_TR16                      ((uint32_t)0x00010000)        /*!< Falling trigger event configuration bit of line 16 */
#define  EXTI_FTSR_TR17                      ((uint32_t)0x00020000)        /*!< Falling trigger event configuration bit of line 17 */
#define  EXTI_FTSR_TR18                      ((uint32_t)0x00040000)        /*!< Falling trigger event configuration bit of line 18 */
// #define  EXTI_FTSR_TR19                      ((uint32_t)0x00080000)        /*!< Falling trigger event configuration bit of line 19 */
// #define  EXTI_FTSR_TR20                      ((uint32_t)0x00100000)        /*!< Falling trigger event configuration bit of line 20 */

/******************  Bit definition for EXTI_SWIER register  ******************/
#define  EXTI_SWIER_SWIER0                   ((uint32_t)0x00000001)        /*!< Software Interrupt on line 0 */
#define  EXTI_SWIER_SWIER1                   ((uint32_t)0x00000002)        /*!< Software Interrupt on line 1 */
#define  EXTI_SWIER_SWIER2                   ((uint32_t)0x00000004)        /*!< Software Interrupt on line 2 */
#define  EXTI_SWIER_SWIER3                   ((uint32_t)0x00000008)        /*!< Software Interrupt on line 3 */
#define  EXTI_SWIER_SWIER4                   ((uint32_t)0x00000010)        /*!< Software Interrupt on line 4 */
#define  EXTI_SWIER_SWIER5                   ((uint32_t)0x00000020)        /*!< Software Interrupt on line 5 */
#define  EXTI_SWIER_SWIER6                   ((uint32_t)0x00000040)        /*!< Software Interrupt on line 6 */
#define  EXTI_SWIER_SWIER7                   ((uint32_t)0x00000080)        /*!< Software Interrupt on line 7 */
#define  EXTI_SWIER_SWIER8                   ((uint32_t)0x00000100)        /*!< Software Interrupt on line 8 */
#define  EXTI_SWIER_SWIER9                   ((uint32_t)0x00000200)        /*!< Software Interrupt on line 9 */
#define  EXTI_SWIER_SWIER10                  ((uint32_t)0x00000400)        /*!< Software Interrupt on line 10 */
#define  EXTI_SWIER_SWIER11                  ((uint32_t)0x00000800)        /*!< Software Interrupt on line 11 */
#define  EXTI_SWIER_SWIER12                  ((uint32_t)0x00001000)        /*!< Software Interrupt on line 12 */
#define  EXTI_SWIER_SWIER13                  ((uint32_t)0x00002000)        /*!< Software Interrupt on line 13 */
#define  EXTI_SWIER_SWIER14                  ((uint32_t)0x00004000)        /*!< Software Interrupt on line 14 */
#define  EXTI_SWIER_SWIER15                  ((uint32_t)0x00008000)        /*!< Software Interrupt on line 15 */
#define  EXTI_SWIER_SWIER16                  ((uint32_t)0x00010000)        /*!< Software Interrupt on line 16 */
#define  EXTI_SWIER_SWIER17                  ((uint32_t)0x00020000)        /*!< Software Interrupt on line 17 */
#define  EXTI_SWIER_SWIER18                  ((uint32_t)0x00040000)        /*!< Software Interrupt on line 18 */
// #define  EXTI_SWIER_SWIER19                  ((uint32_t)0x00080000)        /*!< Software Interrupt on line 19 */
// #define  EXTI_SWIER_SWIER20                  ((uint32_t)0x00100000)        /*!< Software Interrupt on line 20 */

/*******************  Bit definition for EXTI_PR register  ********************/
#define  EXTI_PR_PR0                         ((uint32_t)0x00000001)        /*!< Pending bit 0 */
#define  EXTI_PR_PR1                         ((uint32_t)0x00000002)        /*!< Pending bit 1 */
#define  EXTI_PR_PR2                         ((uint32_t)0x00000004)        /*!< Pending bit 2 */
#define  EXTI_PR_PR3                         ((uint32_t)0x00000008)        /*!< Pending bit 3 */
#define  EXTI_PR_PR4                         ((uint32_t)0x00000010)        /*!< Pending bit 4 */
#define  EXTI_PR_PR5                         ((uint32_t)0x00000020)        /*!< Pending bit 5 */
#define  EXTI_PR_PR6                         ((uint32_t)0x00000040)        /*!< Pending bit 6 */
#define  EXTI_PR_PR7                         ((uint32_t)0x00000080)        /*!< Pending bit 7 */
#define  EXTI_PR_PR8                         ((uint32_t)0x00000100)        /*!< Pending bit 8 */
#define  EXTI_PR_PR9                         ((uint32_t)0x00000200)        /*!< Pending bit 9 */
#define  EXTI_PR_PR10                        ((uint32_t)0x00000400)        /*!< Pending bit 10 */
#define  EXTI_PR_PR11                        ((uint32_t)0x00000800)        /*!< Pending bit 11 */
#define  EXTI_PR_PR12                        ((uint32_t)0x00001000)        /*!< Pending bit 12 */
#define  EXTI_PR_PR13                        ((uint32_t)0x00002000)        /*!< Pending bit 13 */
#define  EXTI_PR_PR14                        ((uint32_t)0x00004000)        /*!< Pending bit 14 */
#define  EXTI_PR_PR15                        ((uint32_t)0x00008000)        /*!< Pending bit 15 */
#define  EXTI_PR_PR16                        ((uint32_t)0x00010000)        /*!< Pending bit 16 */
#define  EXTI_PR_PR17                        ((uint32_t)0x00020000)        /*!< Pending bit 17 */
#define  EXTI_PR_PR18                        ((uint32_t)0x00040000)        /*!< Trigger request occurred on the external interrupt line 18 */
// #define  EXTI_PR_PR19                        ((uint32_t)0x00080000)
// #define  EXTI_PR_PR20                        ((uint32_t)0x00100000)

/******************************************************************************/
/*                                                                            */
/*                             DMA Controller                                 */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for DMA_ISR register  ********************/
#define  DMA_ISR_GIF1                        ((uint32_t)0x00000001)        /*!< Channel 1 Global interrupt flag */
#define  DMA_ISR_TCIF1                       ((uint32_t)0x00000002)        /*!< Channel 1 Transfer Complete flag */
#define  DMA_ISR_HTIF1                       ((uint32_t)0x00000004)        /*!< Channel 1 Half Transfer flag */
#define  DMA_ISR_TEIF1                       ((uint32_t)0x00000008)        /*!< Channel 1 Transfer Error flag */
#define  DMA_ISR_GIF2                        ((uint32_t)0x00000010)        /*!< Channel 2 Global interrupt flag */
#define  DMA_ISR_TCIF2                       ((uint32_t)0x00000020)        /*!< Channel 2 Transfer Complete flag */
#define  DMA_ISR_HTIF2                       ((uint32_t)0x00000040)        /*!< Channel 2 Half Transfer flag */
#define  DMA_ISR_TEIF2                       ((uint32_t)0x00000080)        /*!< Channel 2 Transfer Error flag */
#define  DMA_ISR_GIF3                        ((uint32_t)0x00000100)        /*!< Channel 3 Global interrupt flag */
#define  DMA_ISR_TCIF3                       ((uint32_t)0x00000200)        /*!< Channel 3 Transfer Complete flag */
#define  DMA_ISR_HTIF3                       ((uint32_t)0x00000400)        /*!< Channel 3 Half Transfer flag */
#define  DMA_ISR_TEIF3                       ((uint32_t)0x00000800)        /*!< Channel 3 Transfer Error flag */
#define  DMA_ISR_GIF4                        ((uint32_t)0x00001000)        /*!< Channel 4 Global interrupt flag */
#define  DMA_ISR_TCIF4                       ((uint32_t)0x00002000)        /*!< Channel 4 Transfer Complete flag */
#define  DMA_ISR_HTIF4                       ((uint32_t)0x00004000)        /*!< Channel 4 Half Transfer flag */
#define  DMA_ISR_TEIF4                       ((uint32_t)0x00008000)        /*!< Channel 4 Transfer Error flag */
#define  DMA_ISR_GIF5                        ((uint32_t)0x00010000)        /*!< Channel 5 Global interrupt flag */
#define  DMA_ISR_TCIF5                       ((uint32_t)0x00020000)        /*!< Channel 5 Transfer Complete flag */
#define  DMA_ISR_HTIF5                       ((uint32_t)0x00040000)        /*!< Channel 5 Half Transfer flag */
#define  DMA_ISR_TEIF5                       ((uint32_t)0x00080000)        /*!< Channel 5 Transfer Error flag */
#define  DMA_ISR_GIF6                        ((uint32_t)0x00100000)        /*!< Channel 6 Global interrupt flag */
#define  DMA_ISR_TCIF6                       ((uint32_t)0x00200000)        /*!< Channel 6 Transfer Complete flag */
#define  DMA_ISR_HTIF6                       ((uint32_t)0x00400000)        /*!< Channel 6 Half Transfer flag */
#define  DMA_ISR_TEIF6                       ((uint32_t)0x00800000)        /*!< Channel 6 Transfer Error flag */
#define  DMA_ISR_GIF7                        ((uint32_t)0x01000000)        /*!< Channel 7 Global interrupt flag */
#define  DMA_ISR_TCIF7                       ((uint32_t)0x02000000)        /*!< Channel 7 Transfer Complete flag */
#define  DMA_ISR_HTIF7                       ((uint32_t)0x04000000)        /*!< Channel 7 Half Transfer flag */
#define  DMA_ISR_TEIF7                       ((uint32_t)0x08000000)        /*!< Channel 7 Transfer Error flag */

/*******************  Bit definition for DMA_IFCR register  *******************/
#define  DMA_IFCR_CGIF1                      ((uint32_t)0x00000001)        /*!< Channel 1 Global interrupt clearr */
#define  DMA_IFCR_CTCIF1                     ((uint32_t)0x00000002)        /*!< Channel 1 Transfer Complete clear */
#define  DMA_IFCR_CHTIF1                     ((uint32_t)0x00000004)        /*!< Channel 1 Half Transfer clear */
#define  DMA_IFCR_CTEIF1                     ((uint32_t)0x00000008)        /*!< Channel 1 Transfer Error clear */
#define  DMA_IFCR_CGIF2                      ((uint32_t)0x00000010)        /*!< Channel 2 Global interrupt clear */
#define  DMA_IFCR_CTCIF2                     ((uint32_t)0x00000020)        /*!< Channel 2 Transfer Complete clear */
#define  DMA_IFCR_CHTIF2                     ((uint32_t)0x00000040)        /*!< Channel 2 Half Transfer clear */
#define  DMA_IFCR_CTEIF2                     ((uint32_t)0x00000080)        /*!< Channel 2 Transfer Error clear */
#define  DMA_IFCR_CGIF3                      ((uint32_t)0x00000100)        /*!< Channel 3 Global interrupt clear */
#define  DMA_IFCR_CTCIF3                     ((uint32_t)0x00000200)        /*!< Channel 3 Transfer Complete clear */
#define  DMA_IFCR_CHTIF3                     ((uint32_t)0x00000400)        /*!< Channel 3 Half Transfer clear */
#define  DMA_IFCR_CTEIF3                     ((uint32_t)0x00000800)        /*!< Channel 3 Transfer Error clear */
#define  DMA_IFCR_CGIF4                      ((uint32_t)0x00001000)        /*!< Channel 4 Global interrupt clear */
#define  DMA_IFCR_CTCIF4                     ((uint32_t)0x00002000)        /*!< Channel 4 Transfer Complete clear */
#define  DMA_IFCR_CHTIF4                     ((uint32_t)0x00004000)        /*!< Channel 4 Half Transfer clear */
#define  DMA_IFCR_CTEIF4                     ((uint32_t)0x00008000)        /*!< Channel 4 Transfer Error clear */
#define  DMA_IFCR_CGIF5                      ((uint32_t)0x00010000)        /*!< Channel 5 Global interrupt clear */
#define  DMA_IFCR_CTCIF5                     ((uint32_t)0x00020000)        /*!< Channel 5 Transfer Complete clear */
#define  DMA_IFCR_CHTIF5                     ((uint32_t)0x00040000)        /*!< Channel 5 Half Transfer clear */
#define  DMA_IFCR_CTEIF5                     ((uint32_t)0x00080000)        /*!< Channel 5 Transfer Error clear */
#define  DMA_IFCR_CGIF6                      ((uint32_t)0x00100000)        /*!< Channel 6 Global interrupt clear */
#define  DMA_IFCR_CTCIF6                     ((uint32_t)0x00200000)        /*!< Channel 6 Transfer Complete clear */
#define  DMA_IFCR_CHTIF6                     ((uint32_t)0x00400000)        /*!< Channel 6 Half Transfer clear */
#define  DMA_IFCR_CTEIF6                     ((uint32_t)0x00800000)        /*!< Channel 6 Transfer Error clear */
#define  DMA_IFCR_CGIF7                      ((uint32_t)0x01000000)        /*!< Channel 7 Global interrupt clear */
#define  DMA_IFCR_CTCIF7                     ((uint32_t)0x02000000)        /*!< Channel 7 Transfer Complete clear */
#define  DMA_IFCR_CHTIF7                     ((uint32_t)0x04000000)        /*!< Channel 7 Half Transfer clear */
#define  DMA_IFCR_CTEIF7                     ((uint32_t)0x08000000)        /*!< Channel 7 Transfer Error clear */

/*******************  Bit definition for DMA_CCR1 register  *******************/
#define  DMA_CCR1_EN                         ((uint16_t)0x0001)            /*!< Channel enable*/
#define  DMA_CCR1_TCIE                       ((uint16_t)0x0002)            /*!< Transfer complete interrupt enable */
#define  DMA_CCR1_HTIE                       ((uint16_t)0x0004)            /*!< Half Transfer interrupt enable */
#define  DMA_CCR1_TEIE                       ((uint16_t)0x0008)            /*!< Transfer error interrupt enable */
#define  DMA_CCR1_DIR                        ((uint16_t)0x0010)            /*!< Data transfer direction */
#define  DMA_CCR1_CIRC                       ((uint16_t)0x0020)            /*!< Circular mode */
#define  DMA_CCR1_PINC                       ((uint16_t)0x0040)            /*!< Peripheral increment mode */
#define  DMA_CCR1_MINC                       ((uint16_t)0x0080)            /*!< Memory increment mode */

#define  DMA_CCR1_PSIZE                      ((uint16_t)0x0300)            /*!< PSIZE[1:0] bits (Peripheral size) */
#define  DMA_CCR1_PSIZE_0                    ((uint16_t)0x0100)            /*!< Bit 0 */
#define  DMA_CCR1_PSIZE_1                    ((uint16_t)0x0200)            /*!< Bit 1 */

#define  DMA_CCR1_MSIZE                      ((uint16_t)0x0C00)            /*!< MSIZE[1:0] bits (Memory size) */
#define  DMA_CCR1_MSIZE_0                    ((uint16_t)0x0400)            /*!< Bit 0 */
#define  DMA_CCR1_MSIZE_1                    ((uint16_t)0x0800)            /*!< Bit 1 */

#define  DMA_CCR1_PL                         ((uint16_t)0x3000)            /*!< PL[1:0] bits(Channel Priority level) */
#define  DMA_CCR1_PL_0                       ((uint16_t)0x1000)            /*!< Bit 0 */
#define  DMA_CCR1_PL_1                       ((uint16_t)0x2000)            /*!< Bit 1 */

#define  DMA_CCR1_MEM2MEM                    ((uint16_t)0x4000)            /*!< Memory to memory mode */

/*******************  Bit definition for DMA_CCR2 register  *******************/
#define  DMA_CCR2_EN                         ((uint16_t)0x0001)            /*!< Channel enable */
#define  DMA_CCR2_TCIE                       ((uint16_t)0x0002)            /*!< ransfer complete interrupt enable */
#define  DMA_CCR2_HTIE                       ((uint16_t)0x0004)            /*!< Half Transfer interrupt enable */
#define  DMA_CCR2_TEIE                       ((uint16_t)0x0008)            /*!< Transfer error interrupt enable */
#define  DMA_CCR2_DIR                        ((uint16_t)0x0010)            /*!< Data transfer direction */
#define  DMA_CCR2_CIRC                       ((uint16_t)0x0020)            /*!< Circular mode */
#define  DMA_CCR2_PINC                       ((uint16_t)0x0040)            /*!< Peripheral increment mode */
#define  DMA_CCR2_MINC                       ((uint16_t)0x0080)            /*!< Memory increment mode */

#define  DMA_CCR2_PSIZE                      ((uint16_t)0x0300)            /*!< PSIZE[1:0] bits (Peripheral size) */
#define  DMA_CCR2_PSIZE_0                    ((uint16_t)0x0100)            /*!< Bit 0 */
#define  DMA_CCR2_PSIZE_1                    ((uint16_t)0x0200)            /*!< Bit 1 */

#define  DMA_CCR2_MSIZE                      ((uint16_t)0x0C00)            /*!< MSIZE[1:0] bits (Memory size) */
#define  DMA_CCR2_MSIZE_0                    ((uint16_t)0x0400)            /*!< Bit 0 */
#define  DMA_CCR2_MSIZE_1                    ((uint16_t)0x0800)            /*!< Bit 1 */

#define  DMA_CCR2_PL                         ((uint16_t)0x3000)            /*!< PL[1:0] bits (Channel Priority level) */
#define  DMA_CCR2_PL_0                       ((uint16_t)0x1000)            /*!< Bit 0 */
#define  DMA_CCR2_PL_1                       ((uint16_t)0x2000)            /*!< Bit 1 */

#define  DMA_CCR2_MEM2MEM                    ((uint16_t)0x4000)            /*!< Memory to memory mode */

/*******************  Bit definition for DMA_CCR3 register  *******************/
#define  DMA_CCR3_EN                         ((uint16_t)0x0001)            /*!< Channel enable */
#define  DMA_CCR3_TCIE                       ((uint16_t)0x0002)            /*!< Transfer complete interrupt enable */
#define  DMA_CCR3_HTIE                       ((uint16_t)0x0004)            /*!< Half Transfer interrupt enable */
#define  DMA_CCR3_TEIE                       ((uint16_t)0x0008)            /*!< Transfer error interrupt enable */
#define  DMA_CCR3_DIR                        ((uint16_t)0x0010)            /*!< Data transfer direction */
#define  DMA_CCR3_CIRC                       ((uint16_t)0x0020)            /*!< Circular mode */
#define  DMA_CCR3_PINC                       ((uint16_t)0x0040)            /*!< Peripheral increment mode */
#define  DMA_CCR3_MINC                       ((uint16_t)0x0080)            /*!< Memory increment mode */

#define  DMA_CCR3_PSIZE                      ((uint16_t)0x0300)            /*!< PSIZE[1:0] bits (Peripheral size) */
#define  DMA_CCR3_PSIZE_0                    ((uint16_t)0x0100)            /*!< Bit 0 */
#define  DMA_CCR3_PSIZE_1                    ((uint16_t)0x0200)            /*!< Bit 1 */

#define  DMA_CCR3_MSIZE                      ((uint16_t)0x0C00)            /*!< MSIZE[1:0] bits (Memory size) */
#define  DMA_CCR3_MSIZE_0                    ((uint16_t)0x0400)            /*!< Bit 0 */
#define  DMA_CCR3_MSIZE_1                    ((uint16_t)0x0800)            /*!< Bit 1 */

#define  DMA_CCR3_PL                         ((uint16_t)0x3000)            /*!< PL[1:0] bits (Channel Priority level) */
#define  DMA_CCR3_PL_0                       ((uint16_t)0x1000)            /*!< Bit 0 */
#define  DMA_CCR3_PL_1                       ((uint16_t)0x2000)            /*!< Bit 1 */

#define  DMA_CCR3_MEM2MEM                    ((uint16_t)0x4000)            /*!< Memory to memory mode */

/*!<******************  Bit definition for DMA_CCR4 register  *******************/
#define  DMA_CCR4_EN                         ((uint16_t)0x0001)            /*!<Channel enable */
#define  DMA_CCR4_TCIE                       ((uint16_t)0x0002)            /*!<Transfer complete interrupt enable */
#define  DMA_CCR4_HTIE                       ((uint16_t)0x0004)            /*!<Half Transfer interrupt enable */
#define  DMA_CCR4_TEIE                       ((uint16_t)0x0008)            /*!<Transfer error interrupt enable */
#define  DMA_CCR4_DIR                        ((uint16_t)0x0010)            /*!<Data transfer direction */
#define  DMA_CCR4_CIRC                       ((uint16_t)0x0020)            /*!<Circular mode */
#define  DMA_CCR4_PINC                       ((uint16_t)0x0040)            /*!<Peripheral increment mode */
#define  DMA_CCR4_MINC                       ((uint16_t)0x0080)            /*!<Memory increment mode */

#define  DMA_CCR4_PSIZE                      ((uint16_t)0x0300)            /*!<PSIZE[1:0] bits (Peripheral size) */
#define  DMA_CCR4_PSIZE_0                    ((uint16_t)0x0100)            /*!<Bit 0 */
#define  DMA_CCR4_PSIZE_1                    ((uint16_t)0x0200)            /*!<Bit 1 */

#define  DMA_CCR4_MSIZE                      ((uint16_t)0x0C00)            /*!<MSIZE[1:0] bits (Memory size) */
#define  DMA_CCR4_MSIZE_0                    ((uint16_t)0x0400)            /*!<Bit 0 */
#define  DMA_CCR4_MSIZE_1                    ((uint16_t)0x0800)            /*!<Bit 1 */

#define  DMA_CCR4_PL                         ((uint16_t)0x3000)            /*!<PL[1:0] bits (Channel Priority level) */
#define  DMA_CCR4_PL_0                       ((uint16_t)0x1000)            /*!<Bit 0 */
#define  DMA_CCR4_PL_1                       ((uint16_t)0x2000)            /*!<Bit 1 */

#define  DMA_CCR4_MEM2MEM                    ((uint16_t)0x4000)            /*!<Memory to memory mode */

/******************  Bit definition for DMA_CCR5 register  *******************/
#define  DMA_CCR5_EN                         ((uint16_t)0x0001)            /*!<Channel enable */
#define  DMA_CCR5_TCIE                       ((uint16_t)0x0002)            /*!<Transfer complete interrupt enable */
#define  DMA_CCR5_HTIE                       ((uint16_t)0x0004)            /*!<Half Transfer interrupt enable */
#define  DMA_CCR5_TEIE                       ((uint16_t)0x0008)            /*!<Transfer error interrupt enable */
#define  DMA_CCR5_DIR                        ((uint16_t)0x0010)            /*!<Data transfer direction */
#define  DMA_CCR5_CIRC                       ((uint16_t)0x0020)            /*!<Circular mode */
#define  DMA_CCR5_PINC                       ((uint16_t)0x0040)            /*!<Peripheral increment mode */
#define  DMA_CCR5_MINC                       ((uint16_t)0x0080)            /*!<Memory increment mode */

#define  DMA_CCR5_PSIZE                      ((uint16_t)0x0300)            /*!<PSIZE[1:0] bits (Peripheral size) */
#define  DMA_CCR5_PSIZE_0                    ((uint16_t)0x0100)            /*!<Bit 0 */
#define  DMA_CCR5_PSIZE_1                    ((uint16_t)0x0200)            /*!<Bit 1 */

#define  DMA_CCR5_MSIZE                      ((uint16_t)0x0C00)            /*!<MSIZE[1:0] bits (Memory size) */
#define  DMA_CCR5_MSIZE_0                    ((uint16_t)0x0400)            /*!<Bit 0 */
#define  DMA_CCR5_MSIZE_1                    ((uint16_t)0x0800)            /*!<Bit 1 */

#define  DMA_CCR5_PL                         ((uint16_t)0x3000)            /*!<PL[1:0] bits (Channel Priority level) */
#define  DMA_CCR5_PL_0                       ((uint16_t)0x1000)            /*!<Bit 0 */
#define  DMA_CCR5_PL_1                       ((uint16_t)0x2000)            /*!<Bit 1 */

#define  DMA_CCR5_MEM2MEM                    ((uint16_t)0x4000)            /*!<Memory to memory mode enable */

/*******************  Bit definition for DMA_CCR6 register  *******************/
#define  DMA_CCR6_EN                         ((uint16_t)0x0001)            /*!<Channel enable */
#define  DMA_CCR6_TCIE                       ((uint16_t)0x0002)            /*!<Transfer complete interrupt enable */
#define  DMA_CCR6_HTIE                       ((uint16_t)0x0004)            /*!<Half Transfer interrupt enable */
#define  DMA_CCR6_TEIE                       ((uint16_t)0x0008)            /*!<Transfer error interrupt enable */
#define  DMA_CCR6_DIR                        ((uint16_t)0x0010)            /*!<Data transfer direction */
#define  DMA_CCR6_CIRC                       ((uint16_t)0x0020)            /*!<Circular mode */
#define  DMA_CCR6_PINC                       ((uint16_t)0x0040)            /*!<Peripheral increment mode */
#define  DMA_CCR6_MINC                       ((uint16_t)0x0080)            /*!<Memory increment mode */

#define  DMA_CCR6_PSIZE                      ((uint16_t)0x0300)            /*!<PSIZE[1:0] bits (Peripheral size) */
#define  DMA_CCR6_PSIZE_0                    ((uint16_t)0x0100)            /*!<Bit 0 */
#define  DMA_CCR6_PSIZE_1                    ((uint16_t)0x0200)            /*!<Bit 1 */

#define  DMA_CCR6_MSIZE                      ((uint16_t)0x0C00)            /*!<MSIZE[1:0] bits (Memory size) */
#define  DMA_CCR6_MSIZE_0                    ((uint16_t)0x0400)            /*!<Bit 0 */
#define  DMA_CCR6_MSIZE_1                    ((uint16_t)0x0800)            /*!<Bit 1 */

#define  DMA_CCR6_PL                         ((uint16_t)0x3000)            /*!<PL[1:0] bits (Channel Priority level) */
#define  DMA_CCR6_PL_0                       ((uint16_t)0x1000)            /*!<Bit 0 */
#define  DMA_CCR6_PL_1                       ((uint16_t)0x2000)            /*!<Bit 1 */

#define  DMA_CCR6_MEM2MEM                    ((uint16_t)0x4000)            /*!<Memory to memory mode */

/*******************  Bit definition for DMA_CCR7 register  *******************/
#define  DMA_CCR7_EN                         ((uint16_t)0x0001)            /*!<Channel enable */
#define  DMA_CCR7_TCIE                       ((uint16_t)0x0002)            /*!<Transfer complete interrupt enable */
#define  DMA_CCR7_HTIE                       ((uint16_t)0x0004)            /*!<Half Transfer interrupt enable */
#define  DMA_CCR7_TEIE                       ((uint16_t)0x0008)            /*!<Transfer error interrupt enable */
#define  DMA_CCR7_DIR                        ((uint16_t)0x0010)            /*!<Data transfer direction */
#define  DMA_CCR7_CIRC                       ((uint16_t)0x0020)            /*!<Circular mode */
#define  DMA_CCR7_PINC                       ((uint16_t)0x0040)            /*!<Peripheral increment mode */
#define  DMA_CCR7_MINC                       ((uint16_t)0x0080)            /*!<Memory increment mode */

#define  DMA_CCR7_PSIZE            ,         ((uint16_t)0x0300)            /*!<PSIZE[1:0] bits (Peripheral size) */
#define  DMA_CCR7_PSIZE_0                    ((uint16_t)0x0100)            /*!<Bit 0 */
#define  DMA_CCR7_PSIZE_1                    ((uint16_t)0x0200)            /*!<Bit 1 */

#define  DMA_CCR7_MSIZE                      ((uint16_t)0x0C00)            /*!<MSIZE[1:0] bits (Memory size) */
#define  DMA_CCR7_MSIZE_0                    ((uint16_t)0x0400)            /*!<Bit 0 */
#define  DMA_CCR7_MSIZE_1                    ((uint16_t)0x0800)            /*!<Bit 1 */

#define  DMA_CCR7_PL                         ((uint16_t)0x3000)            /*!<PL[1:0] bits (Channel Priority level) */
#define  DMA_CCR7_PL_0                       ((uint16_t)0x1000)            /*!<Bit 0 */
#define  DMA_CCR7_PL_1                       ((uint16_t)0x2000)            /*!<Bit 1 */

#define  DMA_CCR7_MEM2MEM                    ((uint16_t)0x4000)            /*!<Memory to memory mode enable */

/*******************  Bit definition for DMA_CCR8 register  *******************/
#define  DMA_CCR8_EN                         ((uint16_t)0x0001)            /*!<Channel enable */
#define  DMA_CCR8_TCIE                       ((uint16_t)0x0002)            /*!<Transfer complete interrupt enable */
#define  DMA_CCR8_HTIE                       ((uint16_t)0x0004)            /*!<Half Transfer interrupt enable */
#define  DMA_CCR8_TEIE                       ((uint16_t)0x0008)            /*!<Transfer error interrupt enable */
#define  DMA_CCR8_DIR                        ((uint16_t)0x0010)            /*!<Data transfer direction */
#define  DMA_CCR8_CIRC                       ((uint16_t)0x0020)            /*!<Circular mode */
#define  DMA_CCR8_PINC                       ((uint16_t)0x0040)            /*!<Peripheral increment mode */
#define  DMA_CCR8_MINC                       ((uint16_t)0x0080)            /*!<Memory increment mode */

#define  DMA_CCR8_PSIZE            ,         ((uint16_t)0x0300)            /*!<PSIZE[1:0] bits (Peripheral size) */
#define  DMA_CCR8_PSIZE_0                    ((uint16_t)0x0100)            /*!<Bit 0 */
#define  DMA_CCR8_PSIZE_1                    ((uint16_t)0x0200)            /*!<Bit 1 */

#define  DMA_CCR8_MSIZE                      ((uint16_t)0x0C00)            /*!<MSIZE[1:0] bits (Memory size) */
#define  DMA_CCR8_MSIZE_0                    ((uint16_t)0x0400)            /*!<Bit 0 */
#define  DMA_CCR8_MSIZE_1                    ((uint16_t)0x0800)            /*!<Bit 1 */

#define  DMA_CCR8_PL                         ((uint16_t)0x3000)            /*!<PL[1:0] bits (Channel Priority level) */
#define  DMA_CCR8_PL_0                       ((uint16_t)0x1000)            /*!<Bit 0 */
#define  DMA_CCR8_PL_1                       ((uint16_t)0x2000)            /*!<Bit 1 */

#define  DMA_CCR8_MEM2MEM                    ((uint16_t)0x4000)            /*!<Memory to memory mode enable */

/******************  Bit definition for DMA_CNDTR1 register  ******************/
#define  DMA_CNDTR1_NDT                      ((uint16_t)0xFFFF)            /*!<Number of data to Transfer */

/******************  Bit definition for DMA_CNDTR2 register  ******************/
#define  DMA_CNDTR2_NDT                      ((uint16_t)0xFFFF)            /*!<Number of data to Transfer */

/******************  Bit definition for DMA_CNDTR3 register  ******************/
#define  DMA_CNDTR3_NDT                      ((uint16_t)0xFFFF)            /*!<Number of data to Transfer */

/******************  Bit definition for DMA_CNDTR4 register  ******************/
#define  DMA_CNDTR4_NDT                      ((uint16_t)0xFFFF)            /*!<Number of data to Transfer */

/******************  Bit definition for DMA_CNDTR5 register  ******************/
#define  DMA_CNDTR5_NDT                      ((uint16_t)0xFFFF)            /*!<Number of data to Transfer */

/******************  Bit definition for DMA_CNDTR6 register  ******************/
#define  DMA_CNDTR6_NDT                      ((uint16_t)0xFFFF)            /*!<Number of data to Transfer */

/******************  Bit definition for DMA_CNDTR7 register  ******************/
#define  DMA_CNDTR7_NDT                      ((uint16_t)0xFFFF)            /*!<Number of data to Transfer */

/******************  Bit definition for DMA_CNDTR8 register  ******************/
#define  DMA_CNDTR8_NDT                      ((uint16_t)0xFFFF)            /*!<Number of data to Transfer */

/******************  Bit definition for DMA_CPAR1 register  *******************/
#define  DMA_CPAR1_PA                        ((uint32_t)0xFFFFFFFF)        /*!<Peripheral Address */

/******************  Bit definition for DMA_CPAR2 register  *******************/
#define  DMA_CPAR2_PA                        ((uint32_t)0xFFFFFFFF)        /*!<Peripheral Address */

/******************  Bit definition for DMA_CPAR3 register  *******************/
#define  DMA_CPAR3_PA                        ((uint32_t)0xFFFFFFFF)        /*!<Peripheral Address */


/******************  Bit definition for DMA_CPAR4 register  *******************/
#define  DMA_CPAR4_PA                        ((uint32_t)0xFFFFFFFF)        /*!<Peripheral Address */

/******************  Bit definition for DMA_CPAR5 register  *******************/
#define  DMA_CPAR5_PA                        ((uint32_t)0xFFFFFFFF)        /*!<Peripheral Address */

/******************  Bit definition for DMA_CPAR6 register  *******************/
#define  DMA_CPAR6_PA                        ((uint32_t)0xFFFFFFFF)        /*!<Peripheral Address */


/******************  Bit definition for DMA_CPAR7 register  *******************/
#define  DMA_CPAR7_PA                        ((uint32_t)0xFFFFFFFF)        /*!<Peripheral Address */

/******************  Bit definition for DMA_CPAR8 register  *******************/
#define  DMA_CPAR8_PA                        ((uint32_t)0xFFFFFFFF)        /*!<Peripheral Address */

/******************  Bit definition for DMA_CMAR1 register  *******************/
#define  DMA_CMAR1_MA                        ((uint32_t)0xFFFFFFFF)        /*!<Memory Address */

/******************  Bit definition for DMA_CMAR2 register  *******************/
#define  DMA_CMAR2_MA                        ((uint32_t)0xFFFFFFFF)        /*!<Memory Address */

/******************  Bit definition for DMA_CMAR3 register  *******************/
#define  DMA_CMAR3_MA                        ((uint32_t)0xFFFFFFFF)        /*!<Memory Address */


/******************  Bit definition for DMA_CMAR4 register  *******************/
#define  DMA_CMAR4_MA                        ((uint32_t)0xFFFFFFFF)        /*!<Memory Address */

/******************  Bit definition for DMA_CMAR5 register  *******************/
#define  DMA_CMAR5_MA                        ((uint32_t)0xFFFFFFFF)        /*!<Memory Address */

/******************  Bit definition for DMA_CMAR6 register  *******************/
#define  DMA_CMAR6_MA                        ((uint32_t)0xFFFFFFFF)        /*!<Memory Address */

/******************  Bit definition for DMA_CMAR7 register  *******************/
#define  DMA_CMAR7_MA                        ((uint32_t)0xFFFFFFFF)        /*!<Memory Address */

/******************  Bit definition for DMA_CMAR8 register  *******************/
#define  DMA_CMAR8_MA                        ((uint32_t)0xFFFFFFFF)        /*!<Memory Address */

/******************************************************************************/
/*                                                                            */
/*                        Analog to Digital Converter                         */
/*                                                                            */
/******************************************************************************/

/********************  Bit definition for ADDATA register  ********************/
#define  ADDATA_DATA                         ((uint32_t)0x00000FFF)               /*!<ADC 12bit convert data */
#define  ADDATA_CHANNELSEL                   ((uint32_t)0x00070000)               /*!<CHANNELSEL[19:16] (ADC current channel convert data) */
#define  ADDATA_CHANNELSEL_0                 ((uint32_t)0x00010000)               /*!<Bit 0 */
#define  ADDATA_CHANNELSEL_1                 ((uint32_t)0x00020000)               /*!<Bit 1*/
#define  ADDATA_CHANNELSEL_2                 ((uint32_t)0x00040000)               /*!<Bit 2 */
#define  ADDATA_CHANNELSEL_3                 ((uint32_t)0x00080000)               /*!<Bit 3 */
#define  ADDATA_OVERRUN                      ((uint32_t)0x00100000)               /*!<ADC data will be cover */
#define  ADDATA_VALID                        ((uint32_t)0x00200000)               /*!<ADC data[11:0] is valid*/


/********************  Bit definition for ADCFG register  ********************/
#define  ADCFG_ADEN                        ((uint32_t)0x00000001)               /*!<ADC convert enable */
#define  ADCFG_ADWEN                       ((uint32_t)0x00000002)               /*!<ADC window compare enable */
#define  ADCFG_TVSEN                       ((uint32_t)0x00000004)               /*!<ADC sensor enable */

#define  ADCFG_ADCPRE                      ((uint32_t)0x00000070)
#define  ADCFG_ADCPRE_2                    ((uint32_t)0x00000000)               /*!<ADC preclk 2 */
#define  ADCFG_ADCPRE_4                    ((uint32_t)0x00000010)               /*!<ADC preclk 4 */
#define  ADCFG_ADCPRE_6                    ((uint32_t)0x00000020)               /*!<ADC preclk 6 */
#define  ADCFG_ADCPRE_8                    ((uint32_t)0x00000030)               /*!<ADC preclk 8 */
#define  ADCFG_ADCPRE_10                   ((uint32_t)0x00000040)               /*!<ADC preclk 10 */
#define  ADCFG_ADCPRE_12                   ((uint32_t)0x00000050)               /*!<ADC preclk 12 */
#define  ADCFG_ADCPRE_14                   ((uint32_t)0x00000060)               /*!<ADC preclk 14 */
#define  ADCFG_ADCPRE_16                   ((uint32_t)0x00000070)               /*!<ADC preclk 16 */

#define  ADCFG_RSLTCTL                     ((uint32_t)0x00000380)
#define  ADCFG_RSLTCTL_0                   ((uint32_t)0x00000080)
#define  ADCFG_RSLTCTL_1                   ((uint32_t)0x00000100)
#define  ADCFG_RSLTCTL_2                   ((uint32_t)0x00000200)

#define  ADCFG_SAMCTL                      ((uint32_t)0x00001C00)
#define  ADCFG_SAMCTL_0                    ((uint32_t)0x00000400)
#define  ADCFG_SAMCTL_1                    ((uint32_t)0x00000800)
#define  ADCFG_SAMCTL_2                    ((uint32_t)0x00001000)

/********************  Bit definition for ADCR register  ********************/
#define  ADCR_ADIE                         ((uint32_t)0x00000001)               /*!<ADC interrupt enable */
#define  ADCR_ADWIE                        ((uint32_t)0x00000002)               /*!<ADC window compare interrupt enable */
#define  ADCR_TRGEN                        ((uint32_t)0x00000004)               /*!<extranal trigger single start AD convert */
#define  ADCR_DMAEN                        ((uint32_t)0x00000008)               /*!<ADC DMA enable */
#define  ADCR_TRGSEL                       ((uint32_t)0x00000070)               /*!<TRGSEL[6:4] ADC1 external trigger source select */
#define  ADCR_TRGSEL_0                     ((uint32_t)0x00000010)               /*!<Bit 0 */
#define  ADCR_TRGSEL_1                     ((uint32_t)0x00000020)               /*!<Bit 1 */
#define  ADCR_TRGSEL_2                     ((uint32_t)0x00000040)               /*!<Bit 2 */

#define  ADCR_ADST                         ((uint32_t)0x00000100)               /*!<ADC start convert data */
#define  ADCR_ADMD                         ((uint32_t)0x00000600)
#define  ADCR_ADMD_SINGLE                  ((uint32_t)0x00000000)               /*!<ADC single convert mode */
#define  ADCR_ADMD_PERIOD                  ((uint32_t)0x00000200)               /*!<ADC single period convert mode */
#define  ADCR_ADMD_CONTINUE                ((uint32_t)0x00000400)               /*!<ADC continue scan convert mode */
#define  ADCR_ALIGN                        ((uint32_t)0x00000800)
#define  ADCR_ALIGN_LEFT                   ((uint32_t)0x00000800)               /*!<ADC data left align */
#define  ADCR_ALIGN_RIGHT                  ((uint32_t)0x00000000)               /*!<ADC data right align */
#define  ADCR_CMPCH                        ((uint32_t)0x0000F000)               /*!<CMPCH[15:12] ADC window compare channel0 convert data */
#define  ADCR_CMPCH_0                      ((uint32_t)0x00001000)               /*!<Bit 0 */
#define  ADCR_CMPCH_1                      ((uint32_t)0x00002000)               /*!<Bit 1 */
#define  ADCR_CMPCH_2                      ((uint32_t)0x00004000)               /*!<Bit 2 */
#define  ADCR_CMPCH_3                      ((uint32_t)0x00008000)               /*!<Bit 3 */


/********************  Bit definition for ADCHS register  ********************/
#define  ADCHS_CHEN0                       ((uint32_t)0x00000001)              /*!<ADC channel0 enable */
#define  ADCHS_CHEN1                       ((uint32_t)0x00000002)              /*!<ADC channel1 enable */
#define  ADCHS_CHEN2                       ((uint32_t)0x00000004)              /*!<ADC channel2 enable */
#define  ADCHS_CHEN3                       ((uint32_t)0x00000008)              /*!<ADC channel3 enable */
#define  ADCHS_CHEN4                       ((uint32_t)0x00000010)              /*!<ADC channel4 enable */
#define  ADCHS_CHEN5                       ((uint32_t)0x00000020)              /*!<ADC channel5 enable */
#define  ADCHS_CHEN6                       ((uint32_t)0x00000040)              /*!<ADC channel6 enable */
// #define  ADCHS_CHEN7                       ((uint32_t)0x00000080)              /*!<ADC channel7 enable */
#define  ADCHS_CHENTS                      ((uint32_t)0x00000080)              /*!<ADC voltage sensor enable */
#define  ADCHS_CHENVS                      ((uint32_t)0x00000100)              /*!<ADC temperature sensor enable */


/********************  Bit definition for ADCMPR register  ********************/
#define  ADCMPR_CMPLDATA                   ((uint32_t)0x00000FFF)              /*!<ADC 12bit window compare DOWN LEVEL DATA*/
#define  ADCMPR_CMPHDATA                   ((uint32_t)0x0FFF0000)              /*!<ADC 12bit window compare UP LEVEL DATA*/

/********************  Bit definition for ADSTA register  ********************/
#define  ADSTA_ADIF                        ((uint32_t)0x00000001)               /*!<ADC convert complete flag*/
#define  ADSTA_ADWIF                       ((uint32_t)0x00000002)               /*!<ADC compare flag*/
#define  ADSTA_BUSY                        ((uint32_t)0x00000004)               /*!<ADC busy flag*/
#define  ADSTA_CHANNEL                     ((uint32_t)0x000001F0)               /*!<CHANNEL[8:4] ADC current channel*/
#define  ADSTA_CHANNEL_0                   ((uint32_t)0x00000010)               /*!<Bit 0 */
#define  ADSTA_CHANNEL_1                   ((uint32_t)0x00000020)               /*!<Bit 1*/
#define  ADSTA_CHANNEL_2                   ((uint32_t)0x00000040)               /*!<Bit 2*/
#define  ADSTA_CHANNEL_3                   ((uint32_t)0x00000080)               /*!<Bit 3*/
#define  ADSTA_CHANNEL_4                   ((uint32_t)0x00000100)               /*!<Bit 4*/

#define  ADSTA_VALID                       ((uint32_t)0x0001FE00)               /*!<VALID[16:9] ADC channel0 valid flag*/
#define  ADSTA_VALID_0                     ((uint32_t)0x00000200)               /*!<Bit 0*/
#define  ADSTA_VALID_1                     ((uint32_t)0x00000400)               /*!<Bit 1*/
#define  ADSTA_VALID_2                     ((uint32_t)0x00000800)               /*!<Bit 2*/
#define  ADSTA_VALID_3                     ((uint32_t)0x00001000)               /*!<Bit 3*/
#define  ADSTA_VALID_4                     ((uint32_t)0x00002000)               /*!<Bit 4*/
#define  ADSTA_VALID_5                     ((uint32_t)0x00004000)               /*!<Bit 5*/
#define  ADSTA_VALID_6                     ((uint32_t)0x00008000)               /*!<Bit 6*/
#define  ADSTA_VALID_7                     ((uint32_t)0x00010000)               /*!<Bit 7*/
#define  ADSTA_OVERRUN                     ((uint32_t)0x1FF00000)               /*!<OVERRUN[28:20] ADC channel0 data covered flag*/
#define  ADSTA_OVERRUN_0                   ((uint32_t)0x00100000)               /*!<Bit 0*/
#define  ADSTA_OVERRUN_1                   ((uint32_t)0x00200000)               /*!<Bit 1*/
#define  ADSTA_OVERRUN_2                   ((uint32_t)0x00400000)               /*!<Bit 2*/
#define  ADSTA_OVERRUN_3                   ((uint32_t)0x00800000)               /*!<Bit 3*/
#define  ADSTA_OVERRUN_4                   ((uint32_t)0x01000000)               /*!<Bit 4*/
#define  ADSTA_OVERRUN_5                   ((uint32_t)0x02000000)               /*!<Bit 5*/
#define  ADSTA_OVERRUN_6                   ((uint32_t)0x04000000)               /*!<Bit 6*/
#define  ADSTA_OVERRUN_7                   ((uint32_t)0x08000000)               /*!<Bit 7*/
#define  ADSTA_OVERRUN_8                   ((uint32_t)0x10000000)               /*!<Bit 8*/


/********************  Bit definition for ADDR0~ADDR8 register  ********************/
#define  ADDR_DATA                         ((uint32_t)0x00000FFF)                   /*!<ADC channel convert data */
#define  ADDR_OVERRUN                      ((uint32_t)0x00100000)               /*!<ADC data covered flag */
#define  ADDR_VALID                        ((uint32_t)0x00200000)               /*!<ADC data valid flag*/



/******************************************************************************/
/*                                                                            */
/*                                    TIM                                     */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for TIM_CR1 register  ********************/
#define  TIM_CR1_CEN                         ((uint16_t)0x0001)            /*!<Counter enable */
#define  TIM_CR1_UDIS                        ((uint16_t)0x0002)            /*!<Update disable */
#define  TIM_CR1_URS                         ((uint16_t)0x0004)            /*!<Update request source */
#define  TIM_CR1_OPM                         ((uint16_t)0x0008)            /*!<One pulse mode */
#define  TIM_CR1_DIR                         ((uint16_t)0x0010)            /*!<Direction */

#define  TIM_CR1_CMS                         ((uint16_t)0x0060)            /*!<CMS[1:0] bits (Center-aligned mode selection) */
#define  TIM_CR1_CMS_0                       ((uint16_t)0x0020)            /*!<Bit 0 */
#define  TIM_CR1_CMS_1                       ((uint16_t)0x0040)            /*!<Bit 1 */

#define  TIM_CR1_ARPE                        ((uint16_t)0x0080)            /*!<Auto-reload preload enable */

#define  TIM_CR1_CKD                         ((uint16_t)0x0300)            /*!<CKD[1:0] bits (clock division) */
#define  TIM_CR1_CKD_0                       ((uint16_t)0x0100)            /*!<Bit 0 */
#define  TIM_CR1_CKD_1                       ((uint16_t)0x0200)            /*!<Bit 1 */

/*******************  Bit definition for TIM_CR2 register  ********************/
#define  TIM_CR2_CCPC                        ((uint16_t)0x0001)            /*!<Capture/Compare Preloaded Control */
#define  TIM_CR2_CCUS                        ((uint16_t)0x0004)            /*!<Capture/Compare Control Update Selection */
#define  TIM_CR2_CCDS                        ((uint16_t)0x0008)            /*!<Capture/Compare DMA Selection */

#define  TIM_CR2_MMS                         ((uint16_t)0x0070)            /*!<MMS[2:0] bits (Master Mode Selection) */
#define  TIM_CR2_MMS_0                       ((uint16_t)0x0010)            /*!<Bit 0 */
#define  TIM_CR2_MMS_1                       ((uint16_t)0x0020)            /*!<Bit 1 */
#define  TIM_CR2_MMS_2                       ((uint16_t)0x0040)            /*!<Bit 2 */

#define  TIM_CR2_TI1S                        ((uint16_t)0x0080)            /*!<TI1 Selection */
#define  TIM_CR2_OIS1                        ((uint16_t)0x0100)            /*!<Output Idle state 1 (OC1 output) */
#define  TIM_CR2_OIS1N                       ((uint16_t)0x0200)            /*!<Output Idle state 1 (OC1N output) */
#define  TIM_CR2_OIS2                        ((uint16_t)0x0400)            /*!<Output Idle state 2 (OC2 output) */
#define  TIM_CR2_OIS2N                       ((uint16_t)0x0800)            /*!<Output Idle state 2 (OC2N output) */
#define  TIM_CR2_OIS3                        ((uint16_t)0x1000)            /*!<Output Idle state 3 (OC3 output) */
#define  TIM_CR2_OIS3N                       ((uint16_t)0x2000)            /*!<Output Idle state 3 (OC3N output) */
#define  TIM_CR2_OIS4                        ((uint16_t)0x4000)            /*!<Output Idle state 4 (OC4 output) */

/*******************  Bit definition for TIM_SMCR register  *******************/
#define  TIM_SMCR_SMS                        ((uint16_t)0x0007)            /*!<SMS[2:0] bits (Slave mode selection) */
#define  TIM_SMCR_SMS_0                      ((uint16_t)0x0001)            /*!<Bit 0 */
#define  TIM_SMCR_SMS_1                      ((uint16_t)0x0002)            /*!<Bit 1 */
#define  TIM_SMCR_SMS_2                      ((uint16_t)0x0004)            /*!<Bit 2 */

#define  TIM_SMCR_TS                         ((uint16_t)0x0070)            /*!<TS[2:0] bits (Trigger selection) */
#define  TIM_SMCR_TS_0                       ((uint16_t)0x0010)            /*!<Bit 0 */
#define  TIM_SMCR_TS_1                       ((uint16_t)0x0020)            /*!<Bit 1 */
#define  TIM_SMCR_TS_2                       ((uint16_t)0x0040)            /*!<Bit 2 */

#define  TIM_SMCR_MSM                        ((uint16_t)0x0080)            /*!<Master/slave mode */

#define  TIM_SMCR_ETF                        ((uint16_t)0x0F00)            /*!<ETF[3:0] bits (External trigger filter) */
#define  TIM_SMCR_ETF_0                      ((uint16_t)0x0100)            /*!<Bit 0 */
#define  TIM_SMCR_ETF_1                      ((uint16_t)0x0200)            /*!<Bit 1 */
#define  TIM_SMCR_ETF_2                      ((uint16_t)0x0400)            /*!<Bit 2 */
#define  TIM_SMCR_ETF_3                      ((uint16_t)0x0800)            /*!<Bit 3 */

#define  TIM_SMCR_ETPS                       ((uint16_t)0x3000)            /*!<ETPS[1:0] bits (External trigger prescaler) */
#define  TIM_SMCR_ETPS_0                     ((uint16_t)0x1000)            /*!<Bit 0 */
#define  TIM_SMCR_ETPS_1                     ((uint16_t)0x2000)            /*!<Bit 1 */

#define  TIM_SMCR_ECE                        ((uint16_t)0x4000)            /*!<External clock enable */
#define  TIM_SMCR_ETP                        ((uint16_t)0x8000)            /*!<External trigger polarity */

/*******************  Bit definition for TIM_DIER register  *******************/
#define  TIM_DIER_UIE                        ((uint16_t)0x0001)            /*!<Update interrupt enable */
#define  TIM_DIER_CC1IE                      ((uint16_t)0x0002)            /*!<Capture/Compare 1 interrupt enable */
#define  TIM_DIER_CC2IE                      ((uint16_t)0x0004)            /*!<Capture/Compare 2 interrupt enable */
#define  TIM_DIER_CC3IE                      ((uint16_t)0x0008)            /*!<Capture/Compare 3 interrupt enable */
#define  TIM_DIER_CC4IE                      ((uint16_t)0x0010)            /*!<Capture/Compare 4 interrupt enable */
#define  TIM_DIER_COMIE                      ((uint16_t)0x0020)            /*!<COM interrupt enable */
#define  TIM_DIER_TIE                        ((uint16_t)0x0040)            /*!<Trigger interrupt enable */
#define  TIM_DIER_BIE                        ((uint16_t)0x0080)            /*!<Break interrupt enable */
#define  TIM_DIER_UDE                        ((uint16_t)0x0100)            /*!<Update DMA request enable */
#define  TIM_DIER_CC1DE                      ((uint16_t)0x0200)            /*!<Capture/Compare 1 DMA request enable */
#define  TIM_DIER_CC2DE                      ((uint16_t)0x0400)            /*!<Capture/Compare 2 DMA request enable */
#define  TIM_DIER_CC3DE                      ((uint16_t)0x0800)            /*!<Capture/Compare 3 DMA request enable */
#define  TIM_DIER_CC4DE                      ((uint16_t)0x1000)            /*!<Capture/Compare 4 DMA request enable */
#define  TIM_DIER_COMDE                      ((uint16_t)0x2000)            /*!<COM DMA request enable */
#define  TIM_DIER_TDE                        ((uint16_t)0x4000)            /*!<Trigger DMA request enable */

/********************  Bit definition for TIM_SR register  ********************/
#define  TIM_SR_UIF                          ((uint16_t)0x0001)            /*!<Update interrupt Flag */
#define  TIM_SR_CC1IF                        ((uint16_t)0x0002)            /*!<Capture/Compare 1 interrupt Flag */
#define  TIM_SR_CC2IF                        ((uint16_t)0x0004)            /*!<Capture/Compare 2 interrupt Flag */
#define  TIM_SR_CC3IF                        ((uint16_t)0x0008)            /*!<Capture/Compare 3 interrupt Flag */
#define  TIM_SR_CC4IF                        ((uint16_t)0x0010)            /*!<Capture/Compare 4 interrupt Flag */
#define  TIM_SR_COMIF                        ((uint16_t)0x0020)            /*!<COM interrupt Flag */
#define  TIM_SR_TIF                          ((uint16_t)0x0040)            /*!<Trigger interrupt Flag */
#define  TIM_SR_BIF                          ((uint16_t)0x0080)            /*!<Break interrupt Flag */
#define  TIM_SR_CC1OF                        ((uint16_t)0x0200)            /*!<Capture/Compare 1 Overcapture Flag */
#define  TIM_SR_CC2OF                        ((uint16_t)0x0400)            /*!<Capture/Compare 2 Overcapture Flag */
#define  TIM_SR_CC3OF                        ((uint16_t)0x0800)            /*!<Capture/Compare 3 Overcapture Flag */
#define  TIM_SR_CC4OF                        ((uint16_t)0x1000)            /*!<Capture/Compare 4 Overcapture Flag */

/*******************  Bit definition for TIM_EGR register  ********************/
#define  TIM_EGR_UG                          ((uint8_t)0x01)               /*!<Update Generation */
#define  TIM_EGR_CC1G                        ((uint8_t)0x02)               /*!<Capture/Compare 1 Generation */
#define  TIM_EGR_CC2G                        ((uint8_t)0x04)               /*!<Capture/Compare 2 Generation */
#define  TIM_EGR_CC3G                        ((uint8_t)0x08)               /*!<Capture/Compare 3 Generation */
#define  TIM_EGR_CC4G                        ((uint8_t)0x10)               /*!<Capture/Compare 4 Generation */
#define  TIM_EGR_COMG                        ((uint8_t)0x20)               /*!<Capture/Compare Control Update Generation */
#define  TIM_EGR_TG                          ((uint8_t)0x40)               /*!<Trigger Generation */
#define  TIM_EGR_BG                          ((uint8_t)0x80)               /*!<Break Generation */

/******************  Bit definition for TIM_CCMR1 register (Output capture)  *******************/
#define  TIM_CCMR1_CC1S                      ((uint16_t)0x0003)            /*!<CC1S[1:0] bits (Capture/Compare 1 Selection) */
#define  TIM_CCMR1_CC1S_0                    ((uint16_t)0x0001)            /*!<Bit 0 */
#define  TIM_CCMR1_CC1S_1                    ((uint16_t)0x0002)            /*!<Bit 1 */

#define  TIM_CCMR1_OC1FE                     ((uint16_t)0x0004)            /*!<Output Compare 1 Fast enable */
#define  TIM_CCMR1_OC1PE                     ((uint16_t)0x0008)            /*!<Output Compare 1 Preload enable */

#define  TIM_CCMR1_OC1M                      ((uint16_t)0x0070)            /*!<OC1M[2:0] bits (Output Compare 1 Mode) */
#define  TIM_CCMR1_OC1M_0                    ((uint16_t)0x0010)            /*!<Bit 0 */
#define  TIM_CCMR1_OC1M_1                    ((uint16_t)0x0020)            /*!<Bit 1 */
#define  TIM_CCMR1_OC1M_2                    ((uint16_t)0x0040)            /*!<Bit 2 */

#define  TIM_CCMR1_OC1CE                     ((uint16_t)0x0080)            /*!<Output Compare 1Clear Enable */

#define  TIM_CCMR1_CC2S                      ((uint16_t)0x0300)            /*!<CC2S[1:0] bits (Capture/Compare 2 Selection) */
#define  TIM_CCMR1_CC2S_0                    ((uint16_t)0x0100)            /*!<Bit 0 */
#define  TIM_CCMR1_CC2S_1                    ((uint16_t)0x0200)            /*!<Bit 1 */

#define  TIM_CCMR1_OC2FE                     ((uint16_t)0x0400)            /*!<Output Compare 2 Fast enable */
#define  TIM_CCMR1_OC2PE                     ((uint16_t)0x0800)            /*!<Output Compare 2 Preload enable */

#define  TIM_CCMR1_OC2M                      ((uint16_t)0x7000)            /*!<OC2M[2:0] bits (Output Compare 2 Mode) */
#define  TIM_CCMR1_OC2M_0                    ((uint16_t)0x1000)            /*!<Bit 0 */
#define  TIM_CCMR1_OC2M_1                    ((uint16_t)0x2000)            /*!<Bit 1 */
#define  TIM_CCMR1_OC2M_2                    ((uint16_t)0x4000)            /*!<Bit 2 */

#define  TIM_CCMR1_OC2CE                     ((uint16_t)0x8000)            /*!<Output Compare 2 Clear Enable */

/*----------------------------------------------------------------------------*/

#define  TIM_CCMR1_IC1PSC                    ((uint16_t)0x000C)            /*!<IC1PSC[1:0] bits (Input Capture 1 Prescaler) */
#define  TIM_CCMR1_IC1PSC_0                  ((uint16_t)0x0004)            /*!<Bit 0 */
#define  TIM_CCMR1_IC1PSC_1                  ((uint16_t)0x0008)            /*!<Bit 1 */

#define  TIM_CCMR1_IC1F                      ((uint16_t)0x00F0)            /*!<IC1F[3:0] bits (Input Capture 1 Filter) */
#define  TIM_CCMR1_IC1F_0                    ((uint16_t)0x0010)            /*!<Bit 0 */
#define  TIM_CCMR1_IC1F_1                    ((uint16_t)0x0020)            /*!<Bit 1 */
#define  TIM_CCMR1_IC1F_2                    ((uint16_t)0x0040)            /*!<Bit 2 */
#define  TIM_CCMR1_IC1F_3                    ((uint16_t)0x0080)            /*!<Bit 3 */

#define  TIM_CCMR1_IC2PSC                    ((uint16_t)0x0C00)            /*!<IC2PSC[1:0] bits (Input Capture 2 Prescaler) */
#define  TIM_CCMR1_IC2PSC_0                  ((uint16_t)0x0400)            /*!<Bit 0 */
#define  TIM_CCMR1_IC2PSC_1                  ((uint16_t)0x0800)            /*!<Bit 1 */

#define  TIM_CCMR1_IC2F                      ((uint16_t)0xF000)            /*!<IC2F[3:0] bits (Input Capture 2 Filter) */
#define  TIM_CCMR1_IC2F_0                    ((uint16_t)0x1000)            /*!<Bit 0 */
#define  TIM_CCMR1_IC2F_1                    ((uint16_t)0x2000)            /*!<Bit 1 */
#define  TIM_CCMR1_IC2F_2                    ((uint16_t)0x4000)            /*!<Bit 2 */
#define  TIM_CCMR1_IC2F_3                    ((uint16_t)0x8000)            /*!<Bit 3 */

/******************  Bit definition for TIM_CCMR2 register  *******************/
#define  TIM_CCMR2_CC3S                      ((uint16_t)0x0003)            /*!<CC3S[1:0] bits (Capture/Compare 3 Selection) */
#define  TIM_CCMR2_CC3S_0                    ((uint16_t)0x0001)            /*!<Bit 0 */
#define  TIM_CCMR2_CC3S_1                    ((uint16_t)0x0002)            /*!<Bit 1 */

#define  TIM_CCMR2_OC3FE                     ((uint16_t)0x0004)            /*!<Output Compare 3 Fast enable */
#define  TIM_CCMR2_OC3PE                     ((uint16_t)0x0008)            /*!<Output Compare 3 Preload enable */

#define  TIM_CCMR2_OC3M                      ((uint16_t)0x0070)            /*!<OC3M[2:0] bits (Output Compare 3 Mode) */
#define  TIM_CCMR2_OC3M_0                    ((uint16_t)0x0010)            /*!<Bit 0 */
#define  TIM_CCMR2_OC3M_1                    ((uint16_t)0x0020)            /*!<Bit 1 */
#define  TIM_CCMR2_OC3M_2                    ((uint16_t)0x0040)            /*!<Bit 2 */

#define  TIM_CCMR2_OC3CE                     ((uint16_t)0x0080)            /*!<Output Compare 3 Clear Enable */

#define  TIM_CCMR2_CC4S                      ((uint16_t)0x0300)            /*!<CC4S[1:0] bits (Capture/Compare 4 Selection) */
#define  TIM_CCMR2_CC4S_0                    ((uint16_t)0x0100)            /*!<Bit 0 */
#define  TIM_CCMR2_CC4S_1                    ((uint16_t)0x0200)            /*!<Bit 1 */

#define  TIM_CCMR2_OC4FE                     ((uint16_t)0x0400)            /*!<Output Compare 4 Fast enable */
#define  TIM_CCMR2_OC4PE                     ((uint16_t)0x0800)            /*!<Output Compare 4 Preload enable */

#define  TIM_CCMR2_OC4M                      ((uint16_t)0x7000)            /*!<OC4M[2:0] bits (Output Compare 4 Mode) */
#define  TIM_CCMR2_OC4M_0                    ((uint16_t)0x1000)            /*!<Bit 0 */
#define  TIM_CCMR2_OC4M_1                    ((uint16_t)0x2000)            /*!<Bit 1 */
#define  TIM_CCMR2_OC4M_2                    ((uint16_t)0x4000)            /*!<Bit 2 */

#define  TIM_CCMR2_OC4CE                     ((uint16_t)0x8000)            /*!<Output Compare 4 Clear Enable */

/*----------------------------------------------------------------------------*/

#define  TIM_CCMR2_IC3PSC                    ((uint16_t)0x000C)            /*!<IC3PSC[1:0] bits (Input Capture 3 Prescaler) */
#define  TIM_CCMR2_IC3PSC_0                  ((uint16_t)0x0004)            /*!<Bit 0 */
#define  TIM_CCMR2_IC3PSC_1                  ((uint16_t)0x0008)            /*!<Bit 1 */

#define  TIM_CCMR2_IC3F                      ((uint16_t)0x00F0)            /*!<IC3F[3:0] bits (Input Capture 3 Filter) */
#define  TIM_CCMR2_IC3F_0                    ((uint16_t)0x0010)            /*!<Bit 0 */
#define  TIM_CCMR2_IC3F_1                    ((uint16_t)0x0020)            /*!<Bit 1 */
#define  TIM_CCMR2_IC3F_2                    ((uint16_t)0x0040)            /*!<Bit 2 */
#define  TIM_CCMR2_IC3F_3                    ((uint16_t)0x0080)            /*!<Bit 3 */

#define  TIM_CCMR2_IC4PSC                    ((uint16_t)0x0C00)            /*!<IC4PSC[1:0] bits (Input Capture 4 Prescaler) */
#define  TIM_CCMR2_IC4PSC_0                  ((uint16_t)0x0400)            /*!<Bit 0 */
#define  TIM_CCMR2_IC4PSC_1                  ((uint16_t)0x0800)            /*!<Bit 1 */

#define  TIM_CCMR2_IC4F                      ((uint16_t)0xF000)            /*!<IC4F[3:0] bits (Input Capture 4 Filter) */
#define  TIM_CCMR2_IC4F_0                    ((uint16_t)0x1000)            /*!<Bit 0 */
#define  TIM_CCMR2_IC4F_1                    ((uint16_t)0x2000)            /*!<Bit 1 */
#define  TIM_CCMR2_IC4F_2                    ((uint16_t)0x4000)            /*!<Bit 2 */
#define  TIM_CCMR2_IC4F_3                    ((uint16_t)0x8000)            /*!<Bit 3 */

/*******************  Bit definition for TIM_CCER register  *******************/
#define  TIM_CCER_CC1E                       ((uint16_t)0x0001)            /*!<Capture/Compare 1 output enable */
#define  TIM_CCER_CC1P                       ((uint16_t)0x0002)            /*!<Capture/Compare 1 output Polarity */
#define  TIM_CCER_CC1NE                      ((uint16_t)0x0004)            /*!<Capture/Compare 1 Complementary output enable */
#define  TIM_CCER_CC1NP                      ((uint16_t)0x0008)            /*!<Capture/Compare 1 Complementary output Polarity */
#define  TIM_CCER_CC2E                       ((uint16_t)0x0010)            /*!<Capture/Compare 2 output enable */
#define  TIM_CCER_CC2P                       ((uint16_t)0x0020)            /*!<Capture/Compare 2 output Polarity */
#define  TIM_CCER_CC2NE                      ((uint16_t)0x0040)            /*!<Capture/Compare 2 Complementary output enable */
#define  TIM_CCER_CC2NP                      ((uint16_t)0x0080)            /*!<Capture/Compare 2 Complementary output Polarity */
#define  TIM_CCER_CC3E                       ((uint16_t)0x0100)            /*!<Capture/Compare 3 output enable */
#define  TIM_CCER_CC3P                       ((uint16_t)0x0200)            /*!<Capture/Compare 3 output Polarity */
#define  TIM_CCER_CC3NE                      ((uint16_t)0x0400)            /*!<Capture/Compare 3 Complementary output enable */
#define  TIM_CCER_CC3NP                      ((uint16_t)0x0800)            /*!<Capture/Compare 3 Complementary output Polarity */
#define  TIM_CCER_CC4E                       ((uint16_t)0x1000)            /*!<Capture/Compare 4 output enable */
#define  TIM_CCER_CC4P                       ((uint16_t)0x2000)            /*!<Capture/Compare 4 output Polarity */

/*******************  Bit definition for TIM_CNT register  ********************/
#define  TIM_CNT_CNT                         ((uint16_t)0xFFFF)            /*!<Counter Value */

/*******************  Bit definition for TIM_PSC register  ********************/
#define  TIM_PSC_PSC                         ((uint16_t)0xFFFF)            /*!<Prescaler Value */

/*******************  Bit definition for TIM_ARR register  ********************/
#define  TIM_ARR_ARR                         ((uint16_t)0xFFFF)            /*!<actual auto-reload Value */

/*******************  Bit definition for TIM_RCR register  ********************/
#define  TIM_RCR_REP                         ((uint8_t)0xFF)               /*!<Repetition Counter Value */

/*******************  Bit definition for TIM_CCR1 register  *******************/
#define  TIM_CCR1_CCR1                       ((uint16_t)0xFFFF)            /*!<Capture/Compare 1 Value */

/*******************  Bit definition for TIM_CCR2 register  *******************/
#define  TIM_CCR2_CCR2                       ((uint16_t)0xFFFF)            /*!<Capture/Compare 2 Value */

/*******************  Bit definition for TIM_CCR3 register  *******************/
#define  TIM_CCR3_CCR3                       ((uint16_t)0xFFFF)            /*!<Capture/Compare 3 Value */

/*******************  Bit definition for TIM_CCR4 register  *******************/
#define  TIM_CCR4_CCR4                       ((uint16_t)0xFFFF)            /*!<Capture/Compare 4 Value */

/*******************  Bit definition for TIM_BDTR register  *******************/
#define  TIM_BDTR_DTG                        ((uint16_t)0x00FF)            /*!<DTG[0:7] bits (Dead-Time Generator set-up) */
#define  TIM_BDTR_DTG_0                      ((uint16_t)0x0001)            /*!<Bit 0 */
#define  TIM_BDTR_DTG_1                      ((uint16_t)0x0002)            /*!<Bit 1 */
#define  TIM_BDTR_DTG_2                      ((uint16_t)0x0004)            /*!<Bit 2 */
#define  TIM_BDTR_DTG_3                      ((uint16_t)0x0008)            /*!<Bit 3 */
#define  TIM_BDTR_DTG_4                      ((uint16_t)0x0010)            /*!<Bit 4 */
#define  TIM_BDTR_DTG_5                      ((uint16_t)0x0020)            /*!<Bit 5 */
#define  TIM_BDTR_DTG_6                      ((uint16_t)0x0040)            /*!<Bit 6 */
#define  TIM_BDTR_DTG_7                      ((uint16_t)0x0080)            /*!<Bit 7 */

#define  TIM_BDTR_LOCK                       ((uint16_t)0x0300)            /*!<LOCK[1:0] bits (Lock Configuration) */
#define  TIM_BDTR_LOCK_0                     ((uint16_t)0x0100)            /*!<Bit 0 */
#define  TIM_BDTR_LOCK_1                     ((uint16_t)0x0200)            /*!<Bit 1 */

#define  TIM_BDTR_OSSI                       ((uint16_t)0x0400)            /*!<Off-State Selection for Idle mode */
#define  TIM_BDTR_OSSR                       ((uint16_t)0x0800)            /*!<Off-State Selection for Run mode */
#define  TIM_BDTR_BKE                        ((uint16_t)0x1000)            /*!<Break enable */
#define  TIM_BDTR_BKP                        ((uint16_t)0x2000)            /*!<Break Polarity */
#define  TIM_BDTR_AOE                        ((uint16_t)0x4000)            /*!<Automatic Output enable */
#define  TIM_BDTR_MOE                        ((uint16_t)0x8000)            /*!<Main Output enable */

#define  TIM_BDTR_DOE                        ((uint32_t)0x00010000)        /*!<Direct output enable */

/*******************  Bit definition for TIM_DCR register  ********************/
#define  TIM_DCR_DBA                         ((uint16_t)0x001F)            /*!<DBA[4:0] bits (DMA Base Address) */
#define  TIM_DCR_DBA_0                       ((uint16_t)0x0001)            /*!<Bit 0 */
#define  TIM_DCR_DBA_1                       ((uint16_t)0x0002)            /*!<Bit 1 */
#define  TIM_DCR_DBA_2                       ((uint16_t)0x0004)            /*!<Bit 2 */
#define  TIM_DCR_DBA_3                       ((uint16_t)0x0008)            /*!<Bit 3 */
#define  TIM_DCR_DBA_4                       ((uint16_t)0x0010)            /*!<Bit 4 */

#define  TIM_DCR_DBL                         ((uint16_t)0x1F00)            /*!<DBL[4:0] bits (DMA Burst Length) */
#define  TIM_DCR_DBL_0                       ((uint16_t)0x0100)            /*!<Bit 0 */
#define  TIM_DCR_DBL_1                       ((uint16_t)0x0200)            /*!<Bit 1 */
#define  TIM_DCR_DBL_2                       ((uint16_t)0x0400)            /*!<Bit 2 */
#define  TIM_DCR_DBL_3                       ((uint16_t)0x0800)            /*!<Bit 3 */
#define  TIM_DCR_DBL_4                       ((uint16_t)0x1000)            /*!<Bit 4 */

/*******************  Bit definition for TIM_DMAR register  *******************/
#define  TIM_DMAR_DMAB                       ((uint16_t)0xFFFF)            /*!<DMA register for burst accesses */

/******************************************************************************/
/*                                                                            */
/*                             Real-Time Clock                                */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for RTC_CRH register  ********************/
#define  RTC_CRH_SECIE                       ((uint8_t)0x01)               /*!<Second Interrupt Enable */
#define  RTC_CRH_ALRIE                       ((uint8_t)0x02)               /*!<Alarm Interrupt Enable */
#define  RTC_CRH_OWIE                        ((uint8_t)0x04)               /*!<OverfloW Interrupt Enable */

/*******************  Bit definition for RTC_CRL register  ********************/
#define  RTC_CRL_SECF                        ((uint8_t)0x01)               /*!<Second Flag */
#define  RTC_CRL_ALRF                        ((uint8_t)0x02)               /*!<Alarm Flag */
#define  RTC_CRL_OWF                         ((uint8_t)0x04)               /*!<OverfloW Flag */
#define  RTC_CRL_RSF                         ((uint8_t)0x08)               /*!<Registers Synchronized Flag */
#define  RTC_CRL_CNF                         ((uint8_t)0x10)               /*!<Configuration Flag */
#define  RTC_CRL_RTOFF                       ((uint8_t)0x20)               /*!<RTC operation OFF */

/*******************  Bit definition for RTC_PRLH register  *******************/
#define  RTC_PRLH_PRL                        ((uint16_t)0x000F)            /*!<RTC Prescaler Reload Value High */

/*******************  Bit definition for RTC_PRLL register  *******************/
#define  RTC_PRLL_PRL                        ((uint16_t)0xFFFF)            /*!<RTC Prescaler Reload Value Low */

/*******************  Bit definition for RTC_DIVH register  *******************/
#define  RTC_DIVH_RTC_DIV                    ((uint16_t)0x000F)            /*!<RTC Clock Divider High */

/*******************  Bit definition for RTC_DIVL register  *******************/
#define  RTC_DIVL_RTC_DIV                    ((uint16_t)0xFFFF)            /*!<RTC Clock Divider Low */

/*******************  Bit definition for RTC_CNTH register  *******************/
#define  RTC_CNTH_RTC_CNT                    ((uint16_t)0xFFFF)            /*!<RTC Counter High */

/*******************  Bit definition for RTC_CNTL register  *******************/
#define  RTC_CNTL_RTC_CNT                    ((uint16_t)0xFFFF)            /*!<RTC Counter Low */

/*******************  Bit definition for RTC_ALRH register  *******************/
#define  RTC_ALRH_RTC_ALR                    ((uint16_t)0xFFFF)            /*!<RTC Alarm High */

/*******************  Bit definition for RTC_ALRL register  *******************/
#define  RTC_ALRL_RTC_ALR                    ((uint16_t)0xFFFF)            /*!<RTC Alarm Low */

/******************************************************************************/
/*                                                                            */
/*                           Independent WATCHDOG                             */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for IWDG_KR register  ********************/
#define  IWDG_KR_KEY                         ((uint16_t)0xFFFF)            /*!<Key value (write only, read 0000h) */

/*******************  Bit definition for IWDG_PR register  ********************/
#define  IWDG_PR_PR                          ((uint8_t)0x07)               /*!<PR[2:0] (Prescaler divider) */
#define  IWDG_PR_PR_0                        ((uint8_t)0x01)               /*!<Bit 0 */
#define  IWDG_PR_PR_1                        ((uint8_t)0x02)               /*!<Bit 1 */
#define  IWDG_PR_PR_2                        ((uint8_t)0x04)               /*!<Bit 2 */

/*******************  Bit definition for IWDG_RLR register  *******************/
#define  IWDG_RLR_RL                         ((uint16_t)0x0FFF)            /*!<Watchdog counter reload value */

/*******************  Bit definition for IWDG_SR register  ********************/
#define  IWDG_SR_PVU                         ((uint8_t)0x01)               /*!<Watchdog prescaler value update */
#define  IWDG_SR_RVU                         ((uint8_t)0x02)               /*!<Watchdog counter reload value update */

/*******************  Bit definition for IWDG_CTRL register  ********************/
#define  IWDG_CTRL_IRQ_SEL                   ((uint8_t)0x01)
#define  IWDG_CTRL_IRQ_CLR                   ((uint8_t)0x02)

/******************************************************************************/
/*                                                                            */
/*                            Window WATCHDOG                                 */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for WWDG_CR register  ********************/
#define  WWDG_CR_T                           ((uint8_t)0x7F)               /*!<T[6:0] bits (7-Bit counter (MSB to LSB)) */
#define  WWDG_CR_T_0                         ((uint8_t)0x01)               /*!<Bit 0 */
#define  WWDG_CR_T_1                         ((uint8_t)0x02)               /*!<Bit 1 */
#define  WWDG_CR_T_2                         ((uint8_t)0x04)               /*!<Bit 2 */
#define  WWDG_CR_T_3                         ((uint8_t)0x08)               /*!<Bit 3 */
#define  WWDG_CR_T_4                         ((uint8_t)0x10)               /*!<Bit 4 */
#define  WWDG_CR_T_5                         ((uint8_t)0x20)               /*!<Bit 5 */
#define  WWDG_CR_T_6                         ((uint8_t)0x40)               /*!<Bit 6 */

#define  WWDG_CR_WDGA                        ((uint8_t)0x80)               /*!<Activation bit */

/*******************  Bit definition for WWDG_CFR register  *******************/
#define  WWDG_CFR_W                          ((uint16_t)0x007F)            /*!<W[6:0] bits (7-bit window value) */
#define  WWDG_CFR_W0                         ((uint16_t)0x0001)            /*!<Bit 0 */
#define  WWDG_CFR_W1                         ((uint16_t)0x0002)            /*!<Bit 1 */
#define  WWDG_CFR_W2                         ((uint16_t)0x0004)            /*!<Bit 2 */
#define  WWDG_CFR_W3                         ((uint16_t)0x0008)            /*!<Bit 3 */
#define  WWDG_CFR_W4                         ((uint16_t)0x0010)            /*!<Bit 4 */
#define  WWDG_CFR_W5                         ((uint16_t)0x0020)            /*!<Bit 5 */
#define  WWDG_CFR_W6                         ((uint16_t)0x0040)            /*!<Bit 6 */

#define  WWDG_CFR_WDGTB                      ((uint16_t)0x0180)            /*!<WDGTB[1:0] bits (Timer Base) */
#define  WWDG_CFR_WDGTB_0                    ((uint16_t)0x0080)            /*!<Bit 0 */
#define  WWDG_CFR_WDGTB_1                    ((uint16_t)0x0100)            /*!<Bit 1 */

#define  WWDG_CFR_EWI                        ((uint16_t)0x0200)            /*!<Early Wakeup Interrupt */

/*******************  Bit definition for WWDG_SR register  ********************/
#define  WWDG_SR_EWIF                        ((uint8_t)0x01)               /*!<Early Wakeup Interrupt Flag */



/******************************************************************************/
/*                                                                            */
/*                        Serial Peripheral Interface                         */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for SPI_TXREG register  ********************/
#define  SPI_TXREG_TXREG                     ((uint32_t)0xFFFFFFFF)

/*******************  Bit definition for SPI_RXREG register  ********************/
#define  SPI_RXREG_RXREG                     ((uint32_t)0xFFFFFFFF)

/*******************  Bit definition for SPI_CSTAT register  ********************/
#define  SPI_CSTAT_TXEPT                     ((uint8_t)0x01)
#define  SPI_CSTAT_RXAVL                     ((uint8_t)0x02)
#define  SPI_CSTAT_TXFULL                    ((uint8_t)0x04)
#define  SPI_CSTAT_RXAVL_4BYTE               ((uint8_t)0x08)

/*******************  Bit definition for SPI_INTSTAT register  ********************/
#define  SPI_INTSTAT_TX_INTF                ((uint16_t)0x0001)
#define  SPI_INTSTAT_RX_INTF                ((uint16_t)0x0002)
#define  SPI_INTSTAT_UNDERRUN_INTF          ((uint16_t)0x0004)
#define  SPI_INTSTAT_RXOERR_INTF            ((uint16_t)0x0008)
#define  SPI_INTSTAT_RXMATCH_INTF           ((uint16_t)0x0010)
#define  SPI_INTSTAT_RXFULL_INTF            ((uint16_t)0x0020)
#define  SPI_INTSTAT_TXEPT_INTF             ((uint16_t)0x0040)

/*******************  Bit definition for SPI_INTEN register  ********************/
#define  SPI_INTEN_TX_IEN                   ((uint16_t)0x0001)
#define  SPI_INTEN_RX_IEN                   ((uint16_t)0x0002)
#define  SPI_INTEN_UNDERRUN_IEN             ((uint16_t)0x0004)
#define  SPI_INTEN_RXOERR_IEN               ((uint16_t)0x0008)
#define  SPI_INTEN_RXMATCH_IEN              ((uint16_t)0x0010)
#define  SPI_INTEN_RXFULL_IEN               ((uint16_t)0x0020)
#define  SPI_INTEN_TXEPT_IEN                ((uint16_t)0x0040)

/*******************  Bit definition for SPI_INTCLR register  ********************/
#define  SPI_INTCLR_TX_ICLR                 ((uint16_t)0x0001)
#define  SPI_INTCLR_RX_ICLR                 ((uint16_t)0x0002)
#define  SPI_INTCLR_UNDERRUN_ICLR           ((uint16_t)0x0004)
#define  SPI_INTCLR_RXOERR_ICLR             ((uint16_t)0x0008)
#define  SPI_INTCLR_RXMATCH_ICLR            ((uint16_t)0x0010)
#define  SPI_INTCLR_RXFULL_ICLR             ((uint16_t)0x0020)
#define  SPI_INTCLR_TXEPT_ICLR              ((uint16_t)0x0040)

/*******************  Bit definition for SPI_GCTL register  ********************/
#define  SPI_GCTL_SPIEN                     ((uint16_t)0x0001)
#define  SPI_GCTL_INT_EN                    ((uint16_t)0x0002)
#define  SPI_GCTL_MM                        ((uint16_t)0x0004)
#define  SPI_GCTL_TXEN                      ((uint16_t)0x0008)
#define  SPI_GCTL_RXEN                      ((uint16_t)0x0010)
#define  SPI_GCTL_RXTLF                     ((uint16_t)0x0060)
#define  SPI_GCTL_TXTLF                     ((uint16_t)0x0180)
#define  SPI_GCTL_DMAEN                     ((uint16_t)0x0200)
#define  SPI_GCTL_NSS_SEL                   ((uint16_t)0x0400)
#define  SPI_GCTL_DATA_SEL                  ((uint16_t)0x0800)

/*******************  Bit definition for SPI_CCTL register  ********************/
#define  SPI_CCTL_CPHA                      ((uint16_t)0x0001)
#define  SPI_CCTL_CPOL                      ((uint16_t)0x0002)
#define  SPI_CCTL_LSBFE                     ((uint16_t)0x0004)
#define  SPI_CCTL_SPILEN                    ((uint16_t)0x0008)
#define  SPI_CCTL_RXEDGE                    ((uint16_t)0x0010)
#define  SPI_CCTL_TXEDGE                    ((uint16_t)0x0020)

/*******************  Bit definition for SPI_SPBRG register  ********************/
#define  SPI_SPBRG_SPBRG                    ((uint16_t)0xFFFF)

/*******************  Bit definition for SPI_RXDNR register  ********************/
#define  SPI_RXDNR_RXDNR                    ((uint16_t)0xFFFF)

/*******************  Bit definition for SPI_NSSR register  ********************/
#define  SPI_NSSR_NSS                       ((uint8_t)0x01)

/*******************  Bit definition for SPI_EXTCTL register  ********************/
#define  SPI_EXTCTL_EXTLEN                  ((uint8_t)0x1F)
#define  SPI_EXTCTL_EXTLEN_0                ((uint8_t)0x01)
#define  SPI_EXTCTL_EXTLEN_1                ((uint8_t)0x02)
#define  SPI_EXTCTL_EXTLEN_2                ((uint8_t)0x04)
#define  SPI_EXTCTL_EXTLEN_3                ((uint8_t)0x08)
#define  SPI_EXTCTL_EXTLEN_4                ((uint8_t)0x10)



/******************************************************************************/
/*                                                                            */
/*                      Inter-integrated Circuit Interface                    */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for I2C_CON register  ********************/
#define  I2C_CON_MASTER_MODE                             ((uint16_t)0x0001)

#define  I2C_CON_SPEED                                       ((uint16_t)0x0006)
#define  I2C_CON_SPEED_0                                 ((uint16_t)0x0002)
#define  I2C_CON_SPEED_1                                     ((uint16_t)0x0004)

#define  I2C_CON_10BITADDR_SLAVE                         ((uint16_t)0x0008)
#define  I2C_CON_10BITADDR_MASTER                        ((uint16_t)0x0010)
#define  I2C_CON_RESTART_EN                              ((uint16_t)0x0020)
#define  I2C_CON_SLAVE_DISABLE                           ((uint16_t)0x0040)
#define  I2C_CON_STOP_DET_IFADDRESSED                    ((uint16_t)0x0080)
#define  I2C_CON_TX_EMPTY_CTRL                           ((uint16_t)0x0100)


/*******************  Bit definition for I2C_TAR register  ********************/
#define  I2C_TAR_TAR                                     ((uint16_t)0x03FF)
#define  I2C_TAR_TAR_0                                   ((uint16_t)0x0001)
#define  I2C_TAR_TAR_1                                   ((uint16_t)0x0002)
#define  I2C_TAR_TAR_2                                   ((uint16_t)0x0004)
#define  I2C_TAR_TAR_3                                   ((uint16_t)0x0008)
#define  I2C_TAR_TAR_4                                   ((uint16_t)0x0010)
#define  I2C_TAR_TAR_5                                   ((uint16_t)0x0020)
#define  I2C_TAR_TAR_6                                   ((uint16_t)0x0040)
#define  I2C_TAR_TAR_7                                   ((uint16_t)0x0080)
#define  I2C_TAR_TAR_8                                   ((uint16_t)0x0100)
#define  I2C_TAR_TAR_9                                   ((uint16_t)0x0200)

#define  I2C_TAR_GC_OR_START                             ((uint16_t)0x0400)
#define  I2C_TAR_SPECIAL                                 ((uint16_t)0x0800)

/*******************  Bit definition for I2C_SAR register  ********************/
#define  I2C_SAR_SAR                                     ((uint16_t)0x03FF)

///*******************  Bit definition for I2C_HS_MADDR register  ********************/
//#define  I2C_HS_MADDR                                    ((uint16_t)0x0007)

/*******************  Bit definition for I2C_DATA_CMD register  ********************/
#define  I2C_DATA_CMD_DAT                                ((uint16_t)0x00FF)
#define  I2C_DATA_CMD_DAT_0                              ((uint16_t)0x0001)
#define  I2C_DATA_CMD_DAT_1                              ((uint16_t)0x0002)
#define  I2C_DATA_CMD_DAT_2                              ((uint16_t)0x0004)
#define  I2C_DATA_CMD_DAT_3                              ((uint16_t)0x0008)
#define  I2C_DATA_CMD_DAT_4                              ((uint16_t)0x0010)
#define  I2C_DATA_CMD_DAT_5                              ((uint16_t)0x0020)
#define  I2C_DATA_CMD_DAT_6                              ((uint16_t)0x0040)
#define  I2C_DATA_CMD_DAT_7                              ((uint16_t)0x0080)

#define  I2C_DATA_CMD_STOP                               ((uint16_t)0x0200)
#define  I2C_DATA_CMD_RESTART                            ((uint16_t)0x0400)

/*******************  Bit definition for I2C_SS_SCL_HCNT register  ********************/
#define  I2C_SS_SCL_HCNT                                ((uint16_t)0xFFFF)

/*******************  Bit definition for I2C_SS_SCL_LCNT register  ********************/
#define  I2C_SS_SCL_LCNT                                ((uint16_t)0xFFFF)

/*******************  Bit definition for I2C_FS_SCL_HCNT register  ********************/
#define  I2C_FS_SCL_HCNT                                ((uint16_t)0xFFFF)

/*******************  Bit definition for I2C_FS_SCL_LCNT register  ********************/
#define  I2C_FS_SCL_LCNT                                ((uint16_t)0xFFFF)

/*******************  Bit definition for I2C_FS_SCL_HCNT register  ********************/
#define  I2C_HS_SCL_HCNT                                ((uint16_t)0xFFFF)

/*******************  Bit definition for I2C_FS_SCL_LCNT register  ********************/
#define  I2C_HS_SCL_LCNT                                ((uint16_t)0xFFFF)

/*******************  Bit definition for I2C_INTR_STAT register  ********************/
#define  I2C_INTR_STAT_RX_UNDER                         ((uint16_t)0x0001)
#define  I2C_INTR_STAT_RX_OVER                          ((uint16_t)0x0002)
#define  I2C_INTR_STAT_RX_FULL                          ((uint16_t)0x0004)
#define  I2C_INTR_STAT_TX_OVER                          ((uint16_t)0x0008)
#define  I2C_INTR_STAT_TX_EMPTY                         ((uint16_t)0x0010)
#define  I2C_INTR_STAT_RX_REQ                           ((uint16_t)0x0020)
#define  I2C_INTR_STAT_TX_ABRT                          ((uint16_t)0x0040)
#define  I2C_INTR_STAT_RX_DONE                          ((uint16_t)0x0080)
#define  I2C_INTR_STAT_ACTIVITY                         ((uint16_t)0x0100)
#define  I2C_INTR_STAT_STOP_DET                         ((uint16_t)0x0200)
#define  I2C_INTR_STAT_START_DET                        ((uint16_t)0x0400)
#define  I2C_INTR_STAT_GEN_CALL                         ((uint16_t)0x0800)
#define  I2C_INTR_STAT_RESTART_DET                      ((uint16_t)0x1000)
#define  I2C_INTR_STAT_MST_ON_HOLD                      ((uint16_t)0x2000)

/*******************  Bit definition for I2C_INTR_MASK register  ********************/
#define  I2C_INTR_MASK_RX_UNDER                         ((uint16_t)0x0001)
#define  I2C_INTR_MASK_RX_OVER                          ((uint16_t)0x0002)
#define  I2C_INTR_MASK_RX_FULL                          ((uint16_t)0x0004)
#define  I2C_INTR_MASK_TX_OVER                          ((uint16_t)0x0008)
#define  I2C_INTR_MASK_TX_EMPTY                         ((uint16_t)0x0010)
#define  I2C_INTR_MASK_RX_REQ                           ((uint16_t)0x0020)
#define  I2C_INTR_MASK_TX_ABRT                          ((uint16_t)0x0040)
#define  I2C_INTR_MASK_RX_DONE                          ((uint16_t)0x0080)
#define  I2C_INTR_MASK_ACTIVITY                         ((uint16_t)0x0100)
#define  I2C_INTR_MASK_STOP_DET                         ((uint16_t)0x0200)
#define  I2C_INTR_MASK_START_DET                        ((uint16_t)0x0400)
#define  I2C_INTR_MASK_GEN_CALL                         ((uint16_t)0x0800)
//#define  I2C_INTR_MASK_RESTART_DET                      ((uint16_t)0x1000)
//#define  I2C_INTR_MASK_MST_ON_HOLD                      ((uint16_t)0x2000)

/*******************  Bit definition for I2C_RAW_INTR_STAT register  ********************/
#define  I2C_RAW_INTR_MASK_RX_UNDER                         ((uint16_t)0x0001)
#define  I2C_RAW_INTR_MASK_RX_OVER                          ((uint16_t)0x0002)
#define  I2C_RAW_INTR_MASK_RX_FULL                          ((uint16_t)0x0004)
#define  I2C_RAW_INTR_MASK_TX_OVER                          ((uint16_t)0x0008)
#define  I2C_RAW_INTR_MASK_TX_EMPTY                         ((uint16_t)0x0010)
#define  I2C_RAW_INTR_MASK_RX_REQ                           ((uint16_t)0x0020)
#define  I2C_RAW_INTR_MASK_TX_ABRT                          ((uint16_t)0x0040)
#define  I2C_RAW_INTR_MASK_RX_DONE                          ((uint16_t)0x0080)
#define  I2C_RAW_INTR_MASK_ACTIVITY                         ((uint16_t)0x0100)
#define  I2C_RAW_INTR_MASK_STOP_DET                         ((uint16_t)0x0200)
#define  I2C_RAW_INTR_MASK_START_DET                        ((uint16_t)0x0400)
#define  I2C_RAW_INTR_MASK_GEN_CALL                         ((uint16_t)0x0800)
//#define  I2C_RAW_INTR_MASK_RESTART_DET                      ((uint16_t)0x1000)
//#define  I2C_RAW_INTR_MASK_MST_ON_HOLD                      ((uint16_t)0x2000)

/*******************  Bit definition for I2C_RX_TL register  ********************/
#define  I2C_RX_TL                                                              ((uint16_t)0x00FF)

/*******************  Bit definition for I2C_TX_TL register  ********************/
#define  I2C_TX_TL                                                              ((uint16_t)0x00FF)

/*******************  Bit definition for I2C_CLR_INTR register  ********************/
#define  I2C_CLR_INTR                                       ((uint16_t)0x0001)

/*******************  Bit definition for I2C_CLR_RX_UNDER register  ********************/
#define  I2C_CLR_RX_UNDER                                   ((uint16_t)0x0001)

/*******************  Bit definition for I2C_CLR_RX_OVER register  ********************/
#define  I2C_CLR_RX_OVER                                    ((uint16_t)0x0001)

/*******************  Bit definition for I2C_CLR_TX_OVER register  ********************/
#define  I2C_CLR_TX_OVER                                    ((uint16_t)0x0001)

/*******************  Bit definition for I2C_CLR_RD_REQ register  ********************/
#define  I2C_CLR_RD_REQ                                     ((uint16_t)0x0001)

/*******************  Bit definition for I2C_CLR_TX_ABRT register  ********************/
#define  I2C_CLR_TX_ABRT                                    ((uint16_t)0x0001)

/*******************  Bit definition for I2C_CLR_RX_DONE register  ********************/
#define  I2C_CLR_RX_DONE                                    ((uint16_t)0x0001)

/*******************  Bit definition for I2C_CLR_ACTIVITY register  ********************/
#define  I2C_CLR_ACTIVITY                                   ((uint16_t)0x0001)

/*******************  Bit definition for I2C_CLR_STOP_DET register  ********************/
#define  I2C_CLR_STOP_DET                                   ((uint16_t)0x0001)

/*******************  Bit definition for I2C_CLR_START_DET register  ********************/
#define  I2C_CLR_START_DET                                  ((uint16_t)0x0001)

/*******************  Bit definition for I2C_CLR_GEN_CALL register  ********************/
#define  I2C_CLR_GEN_CALL                                   ((uint16_t)0x0001)

/*******************  Bit definition for I2C_ENABLE register  ********************/
#define  I2C_ENABLE_ENABLE                                  ((uint16_t)0x0001)
#define  I2C_ENABLE_ABORT                                   ((uint16_t)0x0002)

/*******************  Bit definition for I2C_STATUS register  ********************/
#define  I2C_STATUS_ACTIVITY                                ((uint16_t)0x0001)
#define  I2C_STATUS_TFNF                                    ((uint16_t)0x0002)
#define  I2C_STATUS_TFE                                     ((uint16_t)0x0004)
#define  I2C_STATUS_RFNE                                    ((uint16_t)0x0008)
#define  I2C_STATUS_RFF                                     ((uint16_t)0x0010)
#define  I2C_STATUS_MST_ACTIVITY                            ((uint16_t)0x0020)
#define  I2C_STATUS_SLV_ACTIVITY                            ((uint16_t)0x0040)

/*******************  Bit definition for I2C_TXFLR register  ********************/
#define  I2C_TXFLR                                          ((uint16_t)0x0003)
#define  I2C_TXFLR_0                                        ((uint16_t)0x0001)
#define  I2C_TXFLR_1                                        ((uint16_t)0x0002)

/*******************  Bit definition for I2C_RXFLR register  ********************/
#define  I2C_RXFLR                                          ((uint16_t)0x0003)
#define  I2C_RXFLR_0                                        ((uint16_t)0x0001)
#define  I2C_RXFLR_1                                        ((uint16_t)0x0002)

/*******************  Bit definition for I2C_SDA_HOLD register  ********************/
#define  I2C_SDA_TX_HOLD                                    ((uint32_t)0x0000FFFF)
#define  I2C_SDA_RX_HOLD                                    ((uint32_t)0x00FF0000)

/*******************  Bit definition for I2C_DMA_CR register  ********************/
#define  I2C_DMA_CR_RDMAE                                   ((uint16_t)0x0001)
#define  I2C_DMA_CR_TDMAE                                   ((uint16_t)0x0002)

/*******************  Bit definition for I2C_SDA_SET_UP register  ********************/
#define  I2C_SDA_SETUP                                      ((uint16_t)0x00FF)

/*******************  Bit definition for I2C_ACK_GENERAL_CALL register  ********************/
#define  I2C_ACK_GENERAL_CALL                               ((uint16_t)0x0001)

/******************************************************************************/
/*                                                                            */
/*         Universal Synchronous Asynchronous Receiver Transmitter            */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for UART_TDR register  *******************/
#define  UART_TDR_TXREG                         ((uint16_t)0x00FF)

/*******************  Bit definition for UART_RDR register  *******************/
#define  UART_RDR_RXREG                         ((uint16_t)0x00FF)

/*******************  Bit definition for UART_CSR register  *******************/
#define  UART_CSR_TXC                           ((uint16_t)0x0001)
#define  UART_CSR_RXAVL                         ((uint16_t)0x0002)
#define  UART_CSR_TXFULL                        ((uint16_t)0x0004)
#define  UART_CSR_TXBUF_EMPTY                   ((uint16_t)0x0008)

/*******************  Bit definition for UART_ISR register  *******************/
#define  UART_ISR_TX_INTF                       ((uint16_t)0x0001)
#define  UART_ISR_RX_INTF                       ((uint16_t)0x0002)
#define  UART_ISR_RX_TXC_INTF                   ((uint16_t)0x0004)
#define  UART_ISR_RXOERR_INTF                   ((uint16_t)0x0008)
#define  UART_ISR_RXPERR_INTF                   ((uint16_t)0x0010)
#define  UART_ISR_RXFERR_INTF                   ((uint16_t)0x0020)
#define  UART_ISR_RXBRK_INTF                    ((uint16_t)0x0040)
#define  UART_ISR_TXBRK_INTF                    ((uint16_t)0x0080)
#define  UART_ISR_RXB8_INTF                     ((uint16_t)0x0100)

/*******************  Bit definition for UART_IER register  *******************/
#define  UART_IER_TXIEN                         ((uint16_t)0x0001)
#define  UART_IER_RXIEN                         ((uint16_t)0x0002)
#define  UART_IER_TXC_IEN                       ((uint16_t)0x0004)
#define  UART_IER_RXOERREN                      ((uint16_t)0x0008)
#define  UART_IER_RXPERREN                      ((uint16_t)0x0010)
#define  UART_IER_RXFERREN                      ((uint16_t)0x0020)
#define  UART_IER_RXBRKEN                       ((uint16_t)0x0040)
#define  UART_IER_TXBRK_IEN                     ((uint16_t)0x0080)
#define  UART_IER_RXB8_IEN                      ((uint16_t)0x0100)

/*******************  Bit definition for UART_ICR register  *******************/
#define  UART_ICR_TXICLR                        ((uint16_t)0x0001)
#define  UART_ICR_RXICLR                        ((uint16_t)0x0002)
#define  UART_ICR_TXC_CLR                       ((uint16_t)0x0004)
#define  UART_ICR_RXOERRCLR                     ((uint16_t)0x0008)
#define  UART_ICR_RXPERRCLR                     ((uint16_t)0x0010)
#define  UART_ICR_RXFERRCLR                     ((uint16_t)0x0020)
#define  UART_ICR_RXBRKCLR                      ((uint16_t)0x0040)
#define  UART_ICR_TXBRK_CLR                     ((uint16_t)0x0080)
#define  UART_ICR_RXB8_CLR                      ((uint16_t)0x0100)

/*******************  Bit definition for UART_GCR register  *******************/
#define  UART_GCR_UARTEN                        ((uint16_t)0x0001)
#define  UART_GCR_DMAMODE                       ((uint16_t)0x0002)
#define  UART_GCR_AUTOFLOWEN                    ((uint16_t)0x0004)
#define  UART_GCR_RXEN                          ((uint16_t)0x0008)
#define  UART_GCR_TXEN                          ((uint16_t)0x0010)

/*******************  Bit definition for UART_CCR register  *******************/
#define  UART_CCR_PEN                           ((uint16_t)0x0001)
#define  UART_CCR_PSEL                          ((uint16_t)0x0002)
#define  UART_CCR_SPB0                          ((uint16_t)0x0004)
#define  UART_CCR_BRK                           ((uint16_t)0x0008)

#define  UART_CCR_CHAR                          ((uint16_t)0x0030)
#define  UART_CCR_CHAR_0                        ((uint16_t)0x0010)
#define  UART_CCR_CHAR_1                        ((uint16_t)0x0020)

#define  UART_CCR_SPB1                          ((uint16_t)0x0040)
#define  UART_CCR_B8RXD                         ((uint16_t)0x0080)
#define  UART_CCR_B8TXD                         ((uint16_t)0x0100)
#define  UART_CCR_B8POL                         ((uint16_t)0x0200)
#define  UART_CCR_B8TOG                         ((uint16_t)0x0400)
#define  UART_CCR_B8EN                          ((uint16_t)0x0800)
#define  UART_CCR_RWU                           ((uint16_t)0x1000)
#define  UART_CCR_WAKE                          ((uint16_t)0x2000)

/*******************  Bit definition for UART_BRR register  *******************/
#define  UART_BRR_SPBRG                         ((uint16_t)0xFFFF)

/*******************  Bit definition for UART_FRA register  *******************/
#define  UART_FRA_DIV_Fraction                  ((uint16_t)0x000F)
#define  UART_FRA_DIV_Fraction_0                ((uint16_t)0x0001)
#define  UART_FRA_DIV_Fraction_1                ((uint16_t)0x0002)
#define  UART_FRA_DIV_Fraction_2                ((uint16_t)0x0004)
#define  UART_FRA_DIV_Fraction_3                ((uint16_t)0x0008)

/*******************  Bit definition for UART_RXADDR register  *******************/
#define  UART_RXADDR_RXADDR                     ((uint16_t)0x00FF)
#define  UART_RXADDR_RXADDR_0                   ((uint16_t)0x0001)
#define  UART_RXADDR_RXADDR_1                   ((uint16_t)0x0002)
#define  UART_RXADDR_RXADDR_2                   ((uint16_t)0x0004)
#define  UART_RXADDR_RXADDR_3                   ((uint16_t)0x0008)
#define  UART_RXADDR_RXADDR_4                   ((uint16_t)0x0010)
#define  UART_RXADDR_RXADDR_5                   ((uint16_t)0x0020)
#define  UART_RXADDR_RXADDR_6                   ((uint16_t)0x0040)
#define  UART_RXADDR_RXADDR_7                   ((uint16_t)0x0080)

/*******************  Bit definition for UART_RXMASK register  *******************/
#define  UART_RXMASK_RXMASK                     ((uint16_t)0x00FF)
#define  UART_RXMASK_RXMASK_0                   ((uint16_t)0x0001)
#define  UART_RXMASK_RXMASK_1                   ((uint16_t)0x0002)
#define  UART_RXMASK_RXMASK_2                   ((uint16_t)0x0004)
#define  UART_RXMASK_RXMASK_3                   ((uint16_t)0x0008)
#define  UART_RXMASK_RXMASK_4                   ((uint16_t)0x0010)
#define  UART_RXMASK_RXMASK_5                   ((uint16_t)0x0020)
#define  UART_RXMASK_RXMASK_6                   ((uint16_t)0x0040)
#define  UART_RXMASK_RXMASK_7                   ((uint16_t)0x0080)

/*******************  Bit definition for UART_SCR register  *******************/
#define  UART_SCR_SCEN                       ((uint16_t)0x0001)
#define  UART_SCR_SCAEN                        ((uint16_t)0x0002)
#define  UART_SCR_NACK                       ((uint16_t)0x0004)

#define  UART_SCR_SCFCNT                     ((uint16_t)0x0FF0)
#define  UART_SCR_SCFCNT_0                   ((uint16_t)0x0010)
#define  UART_SCR_SCFCNT_1                   ((uint16_t)0x0020)
#define  UART_SCR_SCFCNT_2                   ((uint16_t)0x0040)
#define  UART_SCR_SCFCNT_3                   ((uint16_t)0x0080)
#define  UART_SCR_SCFCNT_4                   ((uint16_t)0x0100)
#define  UART_SCR_SCFCNT_5                   ((uint16_t)0x0200)
#define  UART_SCR_SCFCNT_6                   ((uint16_t)0x0400)
#define  UART_SCR_SCFCNT_7                   ((uint16_t)0x0800)

#define  UART_SCR_HDSEL                      ((uint16_t)0x1000)

/******************************************************************************/
/*                                                                            */
/*                                 Debug MCU                                  */
/*                                                                            */
/******************************************************************************/

/****************  Bit definition for DBGMCU_IDCODE register  *****************/
#define  DBGMCU_IDCODE_DEV_ID                ((uint32_t)0xFFFFFFFF)        /*!<Device Identifier */


/******************  Bit definition for DBGMCU_CR register  *******************/
#define  DBGMCU_CR_DBG_SLEEP                 ((uint32_t)0x00000001)        /*!<Debug Sleep Mode */
#define  DBGMCU_CR_DBG_STOP                  ((uint32_t)0x00000002)        /*!<Debug Stop Mode */
#define  DBGMCU_CR_DBG_STANDBY               ((uint32_t)0x00000004)        /*!<Debug Standby mode */

#define  DBGMCU_CR_DBG_IWDG_STOP             ((uint32_t)0x00000100)        /*!<Debug Independent Watchdog stopped when Core is halted */
#define  DBGMCU_CR_DBG_WWDG_STOP             ((uint32_t)0x00000200)        /*!<Debug Window Watchdog stopped when Core is halted */
#define  DBGMCU_CR_DBG_TIM1_STOP             ((uint32_t)0x00000400)        /*!<TIM1 counter stopped when core is halted */
#define  DBGMCU_CR_DBG_TIM2_STOP             ((uint32_t)0x00000800)        /*!<TIM2 counter stopped when core is halted */
#define  DBGMCU_CR_DBG_TIM3_STOP             ((uint32_t)0x00001000)        /*!<TIM3 counter stopped when core is halted */
#define  DBGMCU_CR_DBG_TIM4_STOP             ((uint32_t)0x00002000)        /*!<TIM4 counter stopped when core is halted */


/******************************************************************************/
/*                                                                            */
/*                      FLASH and Option Bytes Registers                      */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for FLASH_ACR register  ******************/
#define  FLASH_ACR_LATENCY                   ((uint8_t)0x07)               /*!<LATENCY[2:0] bits (Latency) */
#define  FLASH_ACR_LATENCY_0                 ((uint8_t)0x01)               /*!<Bit 0 */
#define  FLASH_ACR_LATENCY_1                 ((uint8_t)0x02)               /*!<Bit 0 */
#define  FLASH_ACR_LATENCY_2                 ((uint8_t)0x04)               /*!<Bit 1 */

#define  FLASH_ACR_HLFCYA                    ((uint8_t)0x08)               /*!<Flash Half Cycle Access Enable */
#define  FLASH_ACR_PRFTBE                    ((uint8_t)0x10)               /*!<Prefetch Buffer Enable */
#define  FLASH_ACR_PRFTBS                    ((uint8_t)0x20)               /*!<Prefetch Buffer Status */

/******************  Bit definition for FLASH_KEYR register  ******************/
#define  FLASH_KEYR_FKEYR                    ((uint32_t)0xFFFFFFFF)        /*!<FPEC Key */

/*****************  Bit definition for FLASH_OPTKEYR register  ****************/
#define  FLASH_OPTKEYR_OPTKEYR               ((uint32_t)0xFFFFFFFF)        /*!<Option Byte Key */

/******************  Bit definition for FLASH_SR register  *******************/
#define  FLASH_SR_BSY                        ((uint8_t)0x01)               /*!<Busy */
#define  FLASH_SR_PGERR                      ((uint8_t)0x04)               /*!<Programming Error */
#define  FLASH_SR_WRPRTERR                   ((uint8_t)0x10)               /*!<Write Protection Error */
#define  FLASH_SR_EOP                        ((uint8_t)0x20)               /*!<End of operation */

/*******************  Bit definition for FLASH_CR register  *******************/
#define  FLASH_CR_PG                         ((uint16_t)0x0001)            /*!<Programming */
#define  FLASH_CR_PER                        ((uint16_t)0x0002)            /*!<Page Erase */
#define  FLASH_CR_MER                        ((uint16_t)0x0004)            /*!<Mass Erase */
#define  FLASH_CR_OPTPG                      ((uint16_t)0x0010)            /*!<Option Byte Programming */
#define  FLASH_CR_OPTER                      ((uint16_t)0x0020)            /*!<Option Byte Erase */
#define  FLASH_CR_STRT                       ((uint16_t)0x0040)            /*!<Start */
#define  FLASH_CR_LOCK                       ((uint16_t)0x0080)            /*!<Lock */
#define  FLASH_CR_OPTWRE                     ((uint16_t)0x0200)            /*!<Option Bytes Write Enable */
#define  FLASH_CR_ERRIE                      ((uint16_t)0x0400)            /*!<Error Interrupt Enable */
#define  FLASH_CR_EOPIE                      ((uint16_t)0x1000)            /*!<End of operation interrupt enable */
#define  FLASH_CR_EEPWRE                     ((uint16_t)0x1000)

/*******************  Bit definition for FLASH_AR register  *******************/
#define  FLASH_AR_FAR                        ((uint32_t)0xFFFFFFFF)        /*!<Flash Address */

/******************  Bit definition for FLASH_OBR register  *******************/
#define  FLASH_OBR_OPTERR                    ((uint16_t)0x0001)            /*!<Option Byte Error */

#define  FLASH_OBR_WDG_SW                    ((uint16_t)0x0004)            /*!<WDG_SW */
#define  FLASH_OBR_nRST_STOP                 ((uint16_t)0x0008)            /*!<nRST_STOP */
#define  FLASH_OBR_nRST_STDBY                ((uint16_t)0x0010)            /*!<nRST_STDBY */
#define  FLASH_OBR_neeprom_erase_unlockrdpt  ((uint16_t)0x0020)

#define  FLASH_OBR_Data0                                         ((uint32_t)0x0003FC00)
#define  FLASH_OBR_Data1                                         ((uint32_t)0x03FC0000)

/******************  Bit definition for FLASH_WRP0R register  ******************/
#define  FLASH_WRP0R_WRP                      ((uint32_t)0xFFFFFFFF)        /*!<*/

/******************  Bit definition for FLASH_WRP1R register  ******************/
#define  FLASH_WRP1R_WRP                      ((uint32_t)0xFFFFFFFF)        /*!<*/

/******************  Bit definition for FLASH_WRP2R register  ******************/
#define  FLASH_WRP2R_WRP                      ((uint32_t)0xFFFFFFFF)        /*!<*/

/******************  Bit definition for FLASH_WRP3R register  ******************/
#define  FLASH_WRP3R_WRP                      ((uint32_t)0xFFFFFFFF)        /*!<*/

/******************  Bit definition for FLASH_SECUKEY0R register  ******************/
#define  FLASH_SECUKEY0R_SECU_KEY             ((uint32_t)0xFFFFFFFF)        /*!<*/

/******************  Bit definition for FLASH_SECUKEY1R register  ******************/
#define  FLASH_SECUKEY1R_SECU_KEY             ((uint32_t)0xFFFFFFFF)        /*!<*/


/*----------------------------------------------------------------------------*/
/******************************************************************************/
/*                                                                            */
/*                                   CAN Registers and bits                   */
/*                                                                            */
/******************************************************************************/
/*!<common registers */
/*******************  Bit definition for CAN_CMR register  *******************/
#define  CAN_CMR_TR                          ((uint16_t)0x0001)
#define  CAN_CMR_AT                          ((uint16_t)0x0002)
#define  CAN_CMR_RRB                         ((uint16_t)0x0004)
#define  CAN_CMR_CDO                         ((uint16_t)0x0008)
#define  CAN_CMR_GTS                         ((uint16_t)0x0010)

/*******************  Bit definition for CAN_SR register  *******************/
#define  CAN_SR_RBS                          ((uint16_t)0x0001)
#define  CAN_SR_DOS                          ((uint16_t)0x0002)
#define  CAN_SR_TBS                          ((uint16_t)0x0004)
#define  CAN_SR_TCS                          ((uint16_t)0x0008)
#define  CAN_SR_RS                           ((uint16_t)0x0010)
#define  CAN_SR_TS                           ((uint16_t)0x0020)
#define  CAN_SR_ES                           ((uint16_t)0x0040)
#define  CAN_SR_BS                           ((uint16_t)0x0080)

/*******************  Bit definition for CAN_IR register  *******************/
#define  CAN_IR_RI                           ((uint16_t)0x0001)
#define  CAN_IR_TI                           ((uint16_t)0x0002)
#define  CAN_IR_EI                           ((uint16_t)0x0004)
#define  CAN_IR_DOI                          ((uint16_t)0x0008)
#define  CAN_IR_EPI                          ((uint16_t)0x0020) /*PeliCAN*/
#define  CAN_IR_ALI                          ((uint16_t)0x0040) /*PeliCAN*/
#define  CAN_IR_BIE                          ((uint16_t)0x0080) /*PeliCAN*/

/*******************  Bit definition for CAN_BTR0 register  *******************/
#define  CAN_BTR0_BRP                        ((uint16_t)0x003F)
#define  CAN_BTR0_BRP_0                      ((uint16_t)0x0001)
#define  CAN_BTR0_BRP_1                      ((uint16_t)0x0002)
#define  CAN_BTR0_BRP_2                      ((uint16_t)0x0004)
#define  CAN_BTR0_BRP_3                      ((uint16_t)0x0008)
#define  CAN_BTR0_BRP_4                      ((uint16_t)0x0010)
#define  CAN_BTR0_BRP_5                      ((uint16_t)0x0020)

#define  CAN_BTR0_SJW                        ((uint16_t)0x00C0)
#define  CAN_BTR0_SJW_0                      ((uint16_t)0x0040)
#define  CAN_BTR0_SJW_1                      ((uint16_t)0x0080)

/*******************  Bit definition for CAN_BTR1 register  *******************/
#define  CAN_BTR1_SAM                        ((uint16_t)0x0080)

#define  CAN_BTR1_TSEG1                      ((uint16_t)0x000F)
#define  CAN_BTR1_TSEG1_0                    ((uint16_t)0x0001)
#define  CAN_BTR1_TSEG1_1                    ((uint16_t)0x0002)
#define  CAN_BTR1_TSEG1_2                    ((uint16_t)0x0004)
#define  CAN_BTR1_TSEG1_3                    ((uint16_t)0x0008)

#define  CAN_BTR1_TSEG2                      ((uint16_t)0x0070)
#define  CAN_BTR1_TSEG2_0                    ((uint16_t)0x0010)
#define  CAN_BTR1_TSEG2_1                    ((uint16_t)0x0020)
#define  CAN_BTR1_TSEG2_2                    ((uint16_t)0x0040)

/*******************  Bit definition for CAN_CDR register  *******************/
#define  CAN_CDR_MODE                        ((uint16_t)0x0080)

/*!<BasicCAN registers */
/*******************  Bit definition for CAN_CR register  *******************/
#define  CAN_CR_RR                           ((uint16_t)0x0001)
#define  CAN_CR_RIE                          ((uint16_t)0x0002)
#define  CAN_CR_TIE                          ((uint16_t)0x0004)
#define  CAN_CR_EIE                          ((uint16_t)0x0008)
#define  CAN_CR_OIE                          ((uint16_t)0x0010)

/*******************  Bit definition for CAN_ACR register  *******************/
#define  CAN_ACR_AC                          ((uint16_t)0x00FF)
#define  CAN_ACR_AC_0                        ((uint16_t)0x0001)
#define  CAN_ACR_AC_1                        ((uint16_t)0x0002)
#define  CAN_ACR_AC_2                        ((uint16_t)0x0004)
#define  CAN_ACR_AC_3                        ((uint16_t)0x0008)
#define  CAN_ACR_AC_4                        ((uint16_t)0x0010)
#define  CAN_ACR_AC_5                        ((uint16_t)0x0020)
#define  CAN_ACR_AC_6                        ((uint16_t)0x0040)
#define  CAN_ACR_AC_7                        ((uint16_t)0x0080)

/*******************  Bit definition for CAN_AMR register  *******************/
#define  CAN_AMR_AM                          ((uint16_t)0x00FF)
#define  CAN_AMR_AM_0                        ((uint16_t)0x0001)
#define  CAN_AMR_AM_1                        ((uint16_t)0x0002)
#define  CAN_AMR_AM_2                        ((uint16_t)0x0004)
#define  CAN_AMR_AM_3                        ((uint16_t)0x0008)
#define  CAN_AMR_AM_4                        ((uint16_t)0x0010)
#define  CAN_AMR_AM_5                        ((uint16_t)0x0020)
#define  CAN_AMR_AM_6                        ((uint16_t)0x0040)
#define  CAN_AMR_AM_7                        ((uint16_t)0x0080)

/*******************  Bit definition for CAN_TXID0 register  *******************/
#define  CAN_TXID0_ID                        ((uint16_t)0x00FF)
#define  CAN_TXID0_ID_3                      ((uint16_t)0x0001)
#define  CAN_TXID0_ID_4                      ((uint16_t)0x0002)
#define  CAN_TXID0_ID_5                      ((uint16_t)0x0004)
#define  CAN_TXID0_ID_6                      ((uint16_t)0x0008)
#define  CAN_TXID0_ID_7                      ((uint16_t)0x0010)
#define  CAN_TXID0_ID_8                      ((uint16_t)0x0020)
#define  CAN_TXID0_ID_9                      ((uint16_t)0x0040)
#define  CAN_TXID0_ID_10                     ((uint16_t)0x0080)

/*******************  Bit definition for CAN_TXID1 register  *******************/
#define  CAN_TXID1_DLC                       ((uint16_t)0x000F)
#define  CAN_TXID1_DLC_0                     ((uint16_t)0x0001)
#define  CAN_TXID1_DLC_1                     ((uint16_t)0x0002)
#define  CAN_TXID1_DLC_2                     ((uint16_t)0x0004)
#define  CAN_TXID1_DLC_3                     ((uint16_t)0x0008)

#define  CAN_TXID1_RTR                       ((uint16_t)0x0010)

#define  CAN_TXID1_ID                        ((uint16_t)0x00E0)
#define  CAN_TXID1_ID_0                      ((uint16_t)0x0020)
#define  CAN_TXID1_ID_1                      ((uint16_t)0x0040)
#define  CAN_TXID1_ID_2                      ((uint16_t)0x0080)

/*******************  Bit definition for CAN_TXDR0 register  *******************/
#define  CAN_TXDR0                           ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_TXDR1 register  *******************/
#define  CAN_TXDR1                           ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_TXDR2 register  *******************/
#define  CAN_TXDR2                           ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_TXDR3 register  *******************/
#define  CAN_TXDR3                           ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_TXDR4 register  *******************/
#define  CAN_TXDR4                           ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_TXDR5 register  *******************/
#define  CAN_TXDR5                           ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_TXDR6 register  *******************/
#define  CAN_TXDR6                           ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_TXDR7 register  *******************/
#define  CAN_TXDR7                           ((uint16_t)0x00FF)

/*******************  Bit definition for CAN_RXID1 register  *******************/
#define  CAN_RXID1_ID                        ((uint16_t)0x00FF)
#define  CAN_RXID1_ID_3                      ((uint16_t)0x0001)
#define  CAN_RXID1_ID_4                      ((uint16_t)0x0002)
#define  CAN_RXID1_ID_5                      ((uint16_t)0x0004)
#define  CAN_RXID1_ID_6                      ((uint16_t)0x0008)
#define  CAN_RXID1_ID_7                      ((uint16_t)0x0010)
#define  CAN_RXID1_ID_8                      ((uint16_t)0x0020)
#define  CAN_RXID1_ID_9                      ((uint16_t)0x0040)
#define  CAN_RXID1_ID_10                     ((uint16_t)0x0080)

/*******************  Bit definition for CAN_RXID2 register  *******************/
#define  CAN_RXID2_RTR                       ((uint16_t)0x0010)

#define  CAN_RXID2_DLC                       ((uint16_t)0x000F)
#define  CAN_RXID2_DLC_0                     ((uint16_t)0x0001)
#define  CAN_RXID2_DLC_1                     ((uint16_t)0x0002)
#define  CAN_RXID2_DLC_2                     ((uint16_t)0x0004)
#define  CAN_RXID2_DLC_3                     ((uint16_t)0x0008)

#define  CAN_RXID2_ID                        ((uint16_t)0x00E0)
#define  CAN_RXID2_ID_0                      ((uint16_t)0x0020)
#define  CAN_RXID2_ID_1                      ((uint16_t)0x0040)
#define  CAN_RXID2_ID_2                      ((uint16_t)0x0080)

/*******************  Bit definition for CAN_RXDR0 register  *******************/
#define  CAN_RXDR0                           ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_RXDR1 register  *******************/
#define  CAN_RXDR1                           ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_RXDR2 register  *******************/
#define  CAN_RXDR2                           ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_RXDR3 register  *******************/
#define  CAN_RXDR3                           ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_RXDR4 register  *******************/
#define  CAN_RXDR4                           ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_RXDR5 register  *******************/
#define  CAN_RXDR5                           ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_RXDR6 register  *******************/
#define  CAN_RXDR6                           ((uint16_t)0x00FF)
/*******************  Bit definition for CAN_RXDR7 register  *******************/
#define  CAN_RXDR7                           ((uint16_t)0x00FF)

/*!<PeliCAN registers */
/*******************  Bit definition for CAN_MOD register  *******************/
#define  CAN_MOD_RM                                                  ((uint16_t)0x0001)
#define  CAN_MOD_LOM                                                 ((uint16_t)0x0002)
#define  CAN_MOD_STM                                                 ((uint16_t)0x0004)
#define  CAN_MOD_AFM                                                 ((uint16_t)0x0008)

/*******************  Bit definition for CAN_IER register  *******************/
#define  CAN_IER_RIE                                                 ((uint16_t)0x0001)
#define  CAN_IER_TIE                                                 ((uint16_t)0x0002)
#define  CAN_IER_EIE                                                 ((uint16_t)0x0004)
#define  CAN_IER_DOIE                                                ((uint16_t)0x0008)
#define  CAN_IER_WUIE                                                ((uint16_t)0x0010)
#define  CAN_IER_EPIE                                                ((uint16_t)0x0020)
#define  CAN_IER_ALIE                                                ((uint16_t)0x0040)
#define  CAN_IER_BEIE                                                ((uint16_t)0x0080)

/*******************  Bit definition for CAN_ALC register  *******************/
#define  CAN_ALC_BITNO                                           ((uint16_t)0x001F)
#define  CAN_ALC_BITNO_0                                         ((uint16_t)0x0001)
#define  CAN_ALC_BITNO_1                                         ((uint16_t)0x0002)
#define  CAN_ALC_BITNO_2                                         ((uint16_t)0x0004)
#define  CAN_ALC_BITNO_3                                         ((uint16_t)0x0008)
#define  CAN_ALC_BITNO_4                                         ((uint16_t)0x0010)

/*******************  Bit definition for CAN_ECC register  *******************/
#define  CAN_ECC_SEG                                                 ((uint16_t)0x001F)
#define  CAN_ECC_SEG_0                                           ((uint16_t)0x0001)
#define  CAN_ECC_SEG_1                                           ((uint16_t)0x0002)
#define  CAN_ECC_SEG_2                                           ((uint16_t)0x0004)
#define  CAN_ECC_SEG_3                                           ((uint16_t)0x0008)
#define  CAN_ECC_SEG_4                                           ((uint16_t)0x0010)

#define  CAN_ECC_DIR                                                 ((uint16_t)0x0020)

#define  CAN_ECC_ERRC                                                ((uint16_t)0x00C0)
#define  CAN_ECC_ERRC_0                                          ((uint16_t)0x0040)
#define  CAN_ECC_ERRC_1                                          ((uint16_t)0x0080)

/*******************  Bit definition for CAN_EWLR register  *******************/
#define  CAN_EWLR_EWL                                                ((uint16_t)0x00FF)

/*******************  Bit definition for CAN_RXERR register  *******************/
#define  CAN_RXERR_RXERR                                         ((uint16_t)0x00FF)

/*******************  Bit definition for CAN_TXERR register  *******************/
#define  CAN_TXERR_TXERR                                         ((uint16_t)0x00FF)

/*******************  Bit definition for CAN_FF register  *******************/
#define  CAN_SFF_DLC                                         ((uint16_t)0x000F)
#define  CAN_SFF_DLC_0                                       ((uint16_t)0x0001)
#define  CAN_SFF_DLC_1                                       ((uint16_t)0x0002)
#define  CAN_SFF_DLC_2                                       ((uint16_t)0x0004)
#define  CAN_SFF_DLC_3                                       ((uint16_t)0x0008)

#define  CAN_SFF_RTR                                         ((uint16_t)0x0040)
#define  CAN_SFF_FF                                          ((uint16_t)0x0080)

/*******************  Bit definition for CAN_ACR0 register  *******************/
#define  CAN_ACR0_AC                          ((uint16_t)0x00FF)
#define  CAN_ACR0_AC_0                        ((uint16_t)0x0001)
#define  CAN_ACR0_AC_1                        ((uint16_t)0x0002)
#define  CAN_ACR0_AC_2                        ((uint16_t)0x0004)
#define  CAN_ACR0_AC_3                        ((uint16_t)0x0008)
#define  CAN_ACR0_AC_4                        ((uint16_t)0x0010)
#define  CAN_ACR0_AC_5                        ((uint16_t)0x0020)
#define  CAN_ACR0_AC_6                        ((uint16_t)0x0040)
#define  CAN_ACR0_AC_7                        ((uint16_t)0x0080)

/*******************  Bit definition for CAN_ACR1 register  *******************/
#define  CAN_ACR1_AC                          ((uint16_t)0x00FF)
#define  CAN_ACR1_AC_0                        ((uint16_t)0x0001)
#define  CAN_ACR1_AC_1                        ((uint16_t)0x0002)
#define  CAN_ACR1_AC_2                        ((uint16_t)0x0004)
#define  CAN_ACR1_AC_3                        ((uint16_t)0x0008)
#define  CAN_ACR1_AC_4                        ((uint16_t)0x0010)
#define  CAN_ACR1_AC_5                        ((uint16_t)0x0020)
#define  CAN_ACR1_AC_6                        ((uint16_t)0x0040)
#define  CAN_ACR1_AC_7                        ((uint16_t)0x0080)

/*******************  Bit definition for CAN_ACR2 register  *******************/
#define  CAN_ACR2_AC                          ((uint16_t)0x00FF)
#define  CAN_ACR2_AC_0                        ((uint16_t)0x0001)
#define  CAN_ACR2_AC_1                        ((uint16_t)0x0002)
#define  CAN_ACR2_AC_2                        ((uint16_t)0x0004)
#define  CAN_ACR2_AC_3                        ((uint16_t)0x0008)
#define  CAN_ACR2_AC_4                        ((uint16_t)0x0010)
#define  CAN_ACR2_AC_5                        ((uint16_t)0x0020)
#define  CAN_ACR2_AC_6                        ((uint16_t)0x0040)
#define  CAN_ACR2_AC_7                        ((uint16_t)0x0080)

/*******************  Bit definition for CAN_ACR3 register  *******************/
#define  CAN_ACR3_AC                          ((uint16_t)0x00FF)
#define  CAN_ACR3_AC_0                        ((uint16_t)0x0001)
#define  CAN_ACR3_AC_1                        ((uint16_t)0x0002)
#define  CAN_ACR3_AC_2                        ((uint16_t)0x0004)
#define  CAN_ACR3_AC_3                        ((uint16_t)0x0008)
#define  CAN_ACR3_AC_4                        ((uint16_t)0x0010)
#define  CAN_ACR3_AC_5                        ((uint16_t)0x0020)
#define  CAN_ACR3_AC_6                        ((uint16_t)0x0040)
#define  CAN_ACR3_AC_7                        ((uint16_t)0x0080)

/*******************  Bit definition for CAN_AMR0 register  *******************/
#define  CAN_AMR0_AM                          ((uint16_t)0x00FF)
#define  CAN_AMR0_AM_0                        ((uint16_t)0x0001)
#define  CAN_AMR0_AM_1                        ((uint16_t)0x0002)
#define  CAN_AMR0_AM_2                        ((uint16_t)0x0004)
#define  CAN_AMR0_AM_3                        ((uint16_t)0x0008)
#define  CAN_AMR0_AM_4                        ((uint16_t)0x0010)
#define  CAN_AMR0_AM_5                        ((uint16_t)0x0020)
#define  CAN_AMR0_AM_6                        ((uint16_t)0x0040)
#define  CAN_AMR0_AM_7                        ((uint16_t)0x0080)

/*******************  Bit definition for CAN_AMR1 register  *******************/
#define  CAN_AMR1_AM                          ((uint16_t)0x00FF)
#define  CAN_AMR1_AM_0                        ((uint16_t)0x0001)
#define  CAN_AMR1_AM_1                        ((uint16_t)0x0002)
#define  CAN_AMR1_AM_2                        ((uint16_t)0x0004)
#define  CAN_AMR1_AM_3                        ((uint16_t)0x0008)
#define  CAN_AMR1_AM_4                        ((uint16_t)0x0010)
#define  CAN_AMR1_AM_5                        ((uint16_t)0x0020)
#define  CAN_AMR1_AM_6                        ((uint16_t)0x0040)
#define  CAN_AMR1_AM_7                        ((uint16_t)0x0080)

/*******************  Bit definition for CAN_AMR2 register  *******************/
#define  CAN_AMR2_AM                          ((uint16_t)0x00FF)
#define  CAN_AMR2_AM_0                        ((uint16_t)0x0001)
#define  CAN_AMR2_AM_1                        ((uint16_t)0x0002)
#define  CAN_AMR2_AM_2                        ((uint16_t)0x0004)
#define  CAN_AMR2_AM_3                        ((uint16_t)0x0008)
#define  CAN_AMR2_AM_4                        ((uint16_t)0x0010)
#define  CAN_AMR2_AM_5                        ((uint16_t)0x0020)
#define  CAN_AMR2_AM_6                        ((uint16_t)0x0040)
#define  CAN_AMR2_AM_7                        ((uint16_t)0x0080)

/*******************  Bit definition for CAN_AMR3 register  *******************/
#define  CAN_AMR3_AM                          ((uint16_t)0x00FF)
#define  CAN_AMR3_AM_0                        ((uint16_t)0x0001)
#define  CAN_AMR3_AM_1                        ((uint16_t)0x0002)
#define  CAN_AMR3_AM_2                        ((uint16_t)0x0004)
#define  CAN_AMR3_AM_3                        ((uint16_t)0x0008)
#define  CAN_AMR3_AM_4                        ((uint16_t)0x0010)
#define  CAN_AMR3_AM_5                        ((uint16_t)0x0020)
#define  CAN_AMR3_AM_6                        ((uint16_t)0x0040)
#define  CAN_AMR3_AM_7                        ((uint16_t)0x0080)

/******************************************************************************/
/*                                                                            */
/*                       Advanced Encryption Standard (AES)                   */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for AES_CR register  *********************/
#define  AES_CR_EN                           ((uint32_t)0x00000001)        /*!< AES Enable */
#define  AES_CR_DATATYPE                     ((uint32_t)0x00000006)        /*!< Data type selection */
#define  AES_CR_DATATYPE_0                   ((uint32_t)0x00000002)        /*!< Bit 0 */
#define  AES_CR_DATATYPE_1                   ((uint32_t)0x00000004)        /*!< Bit 1 */

#define  AES_CR_MODE                         ((uint32_t)0x00000018)        /*!< AES Mode Of Operation */
#define  AES_CR_MODE_0                       ((uint32_t)0x00000008)        /*!< Bit 0 */
#define  AES_CR_MODE_1                       ((uint32_t)0x00000010)        /*!< Bit 1 */

#define  AES_CR_CHMOD                        ((uint32_t)0x00000060)        /*!< AES Chaining Mode */
#define  AES_CR_CHMOD_0                      ((uint32_t)0x00000020)        /*!< Bit 0 */
#define  AES_CR_CHMOD_1                      ((uint32_t)0x00000040)        /*!< Bit 1 */

#define  AES_CR_CCFC                         ((uint32_t)0x00000080)        /*!< Computation Complete Flag Clear */
#define  AES_CR_ERRC                         ((uint32_t)0x00000100)        /*!< Error Clear */
#define  AES_CR_CCFIE                        ((uint32_t)0x00000200)        /*!< Computation Complete Interrupt Enable */
#define  AES_CR_ERRIE                        ((uint32_t)0x00000400)        /*!< Error Interrupt Enable */
#define  AES_CR_DMAINEN                      ((uint32_t)0x00000800)        /*!< DMA ENable managing the data input phase */
#define  AES_CR_DMAOUTEN                     ((uint32_t)0x00001000)        /*!< DMA Enable managing the data output phase */

#define  AES_CR_KSIZE                                                ((uint32_t)0x000C0000)
#define  AES_CR_KSIZE_0                                          ((uint32_t)0x00040000)
#define  AES_CR_KSIZE_1                                          ((uint32_t)0x00080000)

#define  AES_CR_FBSEL                                                ((uint32_t)0x00300000)
#define  AES_CR_FBSEL_0                                          ((uint32_t)0x00100000)
#define  AES_CR_FBSEL_1                                          ((uint32_t)0x00200000)

/*******************  Bit definition for AES_SR register  *********************/
#define  AES_SR_CCF                          ((uint32_t)0x00000001)        /*!< Computation Complete Flag */
#define  AES_SR_RDERR                        ((uint32_t)0x00000002)        /*!< Read Error Flag */
#define  AES_SR_WRERR                        ((uint32_t)0x00000004)        /*!< Write Error Flag */

/*******************  Bit definition for AES_DINR register  *******************/
#define  AES_DINR                            ((uint32_t)0xFFFFFFFF)        /*!< AES Data Input Register */

/*******************  Bit definition for AES_DOUTR register  ******************/
#define  AES_DOUTR                           ((uint32_t)0xFFFFFFFF)        /*!< AES Data Output Register */

/*******************  Bit definition for AES_KEYR0 register  ******************/
#define  AES_KEYR0                           ((uint32_t)0xFFFFFFFF)        /*!< AES Key Register 0 */

/*******************  Bit definition for AES_KEYR1 register  ******************/
#define  AES_KEYR1                           ((uint32_t)0xFFFFFFFF)        /*!< AES Key Register 1 */

/*******************  Bit definition for AES_KEYR2 register  ******************/
#define  AES_KEYR2                           ((uint32_t)0xFFFFFFFF)        /*!< AES Key Register 2 */

/*******************  Bit definition for AES_KEYR3 register  ******************/
#define  AES_KEYR3                           ((uint32_t)0xFFFFFFFF)        /*!< AES Key Register 3 */

/*******************  Bit definition for AES_IVR0 register  *******************/
#define  AES_IVR0                            ((uint32_t)0xFFFFFFFF)        /*!< AES Initialization Vector Register 0 */

/*******************  Bit definition for AES_IVR1 register  *******************/
#define  AES_IVR1                            ((uint32_t)0xFFFFFFFF)        /*!< AES Initialization Vector Register 1 */

/*******************  Bit definition for AES_IVR2 register  *******************/
#define  AES_IVR2                            ((uint32_t)0xFFFFFFFF)        /*!< AES Initialization Vector Register 2 */

/*******************  Bit definition for AES_IVR3 register  *******************/
#define  AES_IVR3                            ((uint32_t)0xFFFFFFFF)        /*!< AES Initialization Vector Register 3 */


/******************************************************************************/
/*                                                                            */
/*                Ethernet MAC Registers bits definitions                     */
/*                                                                            */
/******************************************************************************/
/* Bit definition for Ethernet MAC Control Register register */
#define ETH_MACCR_WD                                                ((uint32_t)0x00800000)  /* Watchdog disable */
#define ETH_MACCR_JD                                                ((uint32_t)0x00400000)  /* Jabber disable */
#define ETH_MACCR_IFG                                               ((uint32_t)0x000E0000)  /* Inter-frame gap */
#define ETH_MACCR_IFG_96Bit                                 ((uint32_t)0x00000000)  /* Minimum IFG between frames during transmission is 96Bit */
#define ETH_MACCR_IFG_88Bit                                 ((uint32_t)0x00020000)  /* Minimum IFG between frames during transmission is 88Bit */
#define ETH_MACCR_IFG_80Bit                                 ((uint32_t)0x00040000)  /* Minimum IFG between frames during transmission is 80Bit */
#define ETH_MACCR_IFG_72Bit                                 ((uint32_t)0x00060000)  /* Minimum IFG between frames during transmission is 72Bit */
#define ETH_MACCR_IFG_64Bit                                 ((uint32_t)0x00080000)  /* Minimum IFG between frames during transmission is 64Bit */
#define ETH_MACCR_IFG_56Bit                                 ((uint32_t)0x000A0000)  /* Minimum IFG between frames during transmission is 56Bit */
#define ETH_MACCR_IFG_48Bit                                 ((uint32_t)0x000C0000)  /* Minimum IFG between frames during transmission is 48Bit */
#define ETH_MACCR_IFG_40Bit                                 ((uint32_t)0x000E0000)  /* Minimum IFG between frames during transmission is 40Bit */
#define ETH_MACCR_CSD                                           ((uint32_t)0x00010000)  /* Carrier sense disable (during transmission) */
#define ETH_MACCR_FES                                           ((uint32_t)0x00004000)  /* Fast ethernet speed */
#define ETH_MACCR_ROD                                           ((uint32_t)0x00002000)  /* Receive own disable */
#define ETH_MACCR_LM                                            ((uint32_t)0x00001000)  /* loopback mode */
#define ETH_MACCR_DM                                            ((uint32_t)0x00000800)  /* Duplex mode */
#define ETH_MACCR_IPCO                                          ((uint32_t)0x00000400)  /* IP Checksum offload */
#define ETH_MACCR_RD                                            ((uint32_t)0x00000200)  /* Retry disable */
#define ETH_MACCR_APCS                                          ((uint32_t)0x00000080)  /* Automatic Pad/CRC stripping */
#define ETH_MACCR_BL                                            ((uint32_t)0x00000060)  /* Back-off limit: random integer number (r) of slot time delays before rescheduling
                                                                                                                                        a transmission attempt during retries after a collision: 0 =< r <2^k */
#define ETH_MACCR_BL_10                                         ((uint32_t)0x00000000)  /* k = min (n, 10) */
#define ETH_MACCR_BL_8                                          ((uint32_t)0x00000020)  /* k = min (n, 8) */
#define ETH_MACCR_BL_4                                          ((uint32_t)0x00000040)  /* k = min (n, 4) */
#define ETH_MACCR_BL_1                                          ((uint32_t)0x00000060)  /* k = min (n, 1) */
#define ETH_MACCR_DC                                            ((uint32_t)0x00000010)  /* Defferal check */
#define ETH_MACCR_TE                                            ((uint32_t)0x00000008)  /* Transmitter enable */
#define ETH_MACCR_RE                                            ((uint32_t)0x00000004)  /* Receiver enable */

/* Bit definition for Ethernet MAC Frame Filter Register */
#define ETH_MACFFR_RA                                           ((uint32_t)0x80000000)  /* Receive all */
#define ETH_MACFFR_HPF                                          ((uint32_t)0x00000400)  /* Hash or perfect filter */
#define ETH_MACFFR_SAF                                          ((uint32_t)0x00000200)  /* Source address filter enable */
#define ETH_MACFFR_SAIF                                         ((uint32_t)0x00000100)  /* SA inverse filtering */
#define ETH_MACFFR_PCF                                          ((uint32_t)0x000000C0)  /* Pass control frames: 3 cases */
#define ETH_MACFFR_PCF_BlockAll                ((uint32_t)0x00000040)  /* MAC filters all control frames from reaching the application */
#define ETH_MACFFR_PCF_ForwardAll              ((uint32_t)0x00000080)  /* MAC forwards all control frames to application even if they fail the Address Filter */
#define ETH_MACFFR_PCF_ForwardPassedAddrFilter ((uint32_t)0x000000C0)  /* MAC forwards control frames that pass the Address Filter. */
#define ETH_MACFFR_BFD                                          ((uint32_t)0x00000020)  /* Broadcast frame disable */
#define ETH_MACFFR_PAM                                          ((uint32_t)0x00000010)  /* Pass all mutlicast */
#define ETH_MACFFR_DAIF                                         ((uint32_t)0x00000008)  /* DA Inverse filtering */
#define ETH_MACFFR_HM                                           ((uint32_t)0x00000004)  /* Hash multicast */
#define ETH_MACFFR_HU                                           ((uint32_t)0x00000002)  /* Hash unicast */
#define ETH_MACFFR_PM                                           ((uint32_t)0x00000001)  /* Promiscuous mode */

/* Bit definition for Ethernet MAC Hash Table High Register */
#define ETH_MACHTHR_HTH                                         ((uint32_t)0xFFFFFFFF)  /* Hash table high */

/* Bit definition for Ethernet MAC Hash Table Low Register */
#define ETH_MACHTLR_HTL                                         ((uint32_t)0xFFFFFFFF)  /* Hash table low */

/* Bit definition for Ethernet MAC MII Address Register */
#define ETH_MACMIIAR_PA                                         ((uint32_t)0x0000F800)  /* Physical layer address */
#define ETH_MACMIIAR_MR                                         ((uint32_t)0x000007C0)  /* MII register in the selected PHY */
#define ETH_MACMIIAR_CR                                         ((uint32_t)0x0000001C)  /* CR clock range: 6 cases */
#define ETH_MACMIIAR_CR_Div42                               ((uint32_t)0x00000000)  /* HCLK:60-100 MHz; MDC clock= HCLK/42 */
#define ETH_MACMIIAR_CR_Div62                               ((uint32_t)0x00000004)  /* HCLK:100-150 MHz; MDC clock= HCLK/62 */
#define ETH_MACMIIAR_CR_Div16                               ((uint32_t)0x00000008)  /* HCLK:20-35 MHz; MDC clock= HCLK/16 */
#define ETH_MACMIIAR_CR_Div26                               ((uint32_t)0x0000000C)  /* HCLK:35-60 MHz; MDC clock= HCLK/26 */
#define ETH_MACMIIAR_CR_Div102                              ((uint32_t)0x00000010)  /* HCLK:150-168 MHz; MDC clock= HCLK/102 */
#define ETH_MACMIIAR_MW                                         ((uint32_t)0x00000002)  /* MII write */
#define ETH_MACMIIAR_MB                                         ((uint32_t)0x00000001)  /* MII busy */

/* Bit definition for Ethernet MAC MII Data Register */
#define ETH_MACMIIDR_MD                                         ((uint32_t)0x0000FFFF)  /* MII data: read/write data from/to PHY */

/* Bit definition for Ethernet MAC Flow Control Register */
#define ETH_MACFCR_PT                                           ((uint32_t)0xFFFF0000)  /* Pause time */
#define ETH_MACFCR_ZQPD                                         ((uint32_t)0x00000080)  /* Zero-quanta pause disable */
#define ETH_MACFCR_PLT                                          ((uint32_t)0x00000030)  /* Pause low threshold: 4 cases */
#define ETH_MACFCR_PLT_Minus4                               ((uint32_t)0x00000000)  /* Pause time minus 4 slot times */
#define ETH_MACFCR_PLT_Minus28                              ((uint32_t)0x00000010)  /* Pause time minus 28 slot times */
#define ETH_MACFCR_PLT_Minus144                             ((uint32_t)0x00000020)  /* Pause time minus 144 slot times */
#define ETH_MACFCR_PLT_Minus256                             ((uint32_t)0x00000030)  /* Pause time minus 256 slot times */
#define ETH_MACFCR_UPFD                                         ((uint32_t)0x00000008)  /* Unicast pause frame detect */
#define ETH_MACFCR_RFCE                                         ((uint32_t)0x00000004)  /* Receive flow control enable */
#define ETH_MACFCR_TFCE                                         ((uint32_t)0x00000002)  /* Transmit flow control enable */
#define ETH_MACFCR_FCBBPA                                       ((uint32_t)0x00000001)  /* Flow control busy/backpressure activate */

/* Bit definition for Ethernet MAC VLAN Tag Register */
#define ETH_MACVLANTR_VLANTC                                    ((uint32_t)0x00010000)  /* 12-bit VLAN tag comparison */
#define ETH_MACVLANTR_VLANTI                                    ((uint32_t)0x0000FFFF)  /* VLAN tag identifier (for receive frames) */

/* Bit definition for Ethernet MAC Remote Wake-UpFrame Filter Register */
#define ETH_MACRWUFFR_D                                         ((uint32_t)0xFFFFFFFF)  /* Wake-up frame filter register data */
/* Eight sequential Writes to this address (offset 0x28) will write all Wake-UpFrame Filter Registers.
   Eight sequential Reads from this address (offset 0x28) will read all Wake-UpFrame Filter Registers. */
/* Wake-UpFrame Filter Reg0 : Filter 0 Byte Mask
   Wake-UpFrame Filter Reg1 : Filter 1 Byte Mask
   Wake-UpFrame Filter Reg2 : Filter 2 Byte Mask
   Wake-UpFrame Filter Reg3 : Filter 3 Byte Mask
   Wake-UpFrame Filter Reg4 : RSVD - Filter3 Command - RSVD - Filter2 Command -
                              RSVD - Filter1 Command - RSVD - Filter0 Command
   Wake-UpFrame Filter Re5 : Filter3 Offset - Filter2 Offset - Filter1 Offset - Filter0 Offset
   Wake-UpFrame Filter Re6 : Filter1 CRC16 - Filter0 CRC16
   Wake-UpFrame Filter Re7 : Filter3 CRC16 - Filter2 CRC16 */

/* Bit definition for Ethernet MAC PMT Control and Status Register */
#define ETH_MACPMTCSR_WFFRPR                                    ((uint32_t)0x80000000)  /* Wake-Up Frame Filter Register Pointer Reset */
#define ETH_MACPMTCSR_GU                                        ((uint32_t)0x00000200)  /* Global Unicast */
#define ETH_MACPMTCSR_WFR                                       ((uint32_t)0x00000040)  /* Wake-Up Frame Received */
#define ETH_MACPMTCSR_MPR                                       ((uint32_t)0x00000020)  /* Magic Packet Received */
#define ETH_MACPMTCSR_WFE                                       ((uint32_t)0x00000004)  /* Wake-Up Frame Enable */
#define ETH_MACPMTCSR_MPE                                       ((uint32_t)0x00000002)  /* Magic Packet Enable */
#define ETH_MACPMTCSR_PD                                        ((uint32_t)0x00000001)  /* Power Down */

/* Bit definition for Ethernet MAC Status Register */
#define ETH_MACSR_TSTS                                          ((uint32_t)0x00000200)  /* Time stamp trigger status */
#define ETH_MACSR_MMCTS                                         ((uint32_t)0x00000040)  /* MMC transmit status */
#define ETH_MACSR_MMMCRS                                        ((uint32_t)0x00000020)  /* MMC receive status */
#define ETH_MACSR_MMCS                                          ((uint32_t)0x00000010)  /* MMC status */
#define ETH_MACSR_PMTS                                          ((uint32_t)0x00000008)  /* PMT status */

/* Bit definition for Ethernet MAC Interrupt Mask Register */
#define ETH_MACIMR_TSTIM                                        ((uint32_t)0x00000200)  /* Time stamp trigger interrupt mask */
#define ETH_MACIMR_PMTIM                                        ((uint32_t)0x00000008)  /* PMT interrupt mask */

/* Bit definition for Ethernet MAC Address0 High Register */
#define ETH_MACA0HR_MACA0H                                      ((uint32_t)0x0000FFFF)  /* MAC address0 high */

/* Bit definition for Ethernet MAC Address0 Low Register */
#define ETH_MACA0LR_MACA0L                                      ((uint32_t)0xFFFFFFFF)  /* MAC address0 low */

/* Bit definition for Ethernet MAC Address1 High Register */
#define ETH_MACA1HR_AE                                          ((uint32_t)0x80000000)  /* Address enable */
#define ETH_MACA1HR_SA                                          ((uint32_t)0x40000000)  /* Source address */

#define ETH_MACA1HR_MBC                                         ((uint32_t)0x3F000000)  /* Mask byte control: bits to mask for comparison of the MAC Address bytes */
#define ETH_MACA1HR_MBC_HBits15_8                       ((uint32_t)0x20000000)  /* Mask MAC Address high reg bits [15:8] */
#define ETH_MACA1HR_MBC_HBits7_0                        ((uint32_t)0x10000000)  /* Mask MAC Address high reg bits [7:0] */
#define ETH_MACA1HR_MBC_LBits31_24                      ((uint32_t)0x08000000)  /* Mask MAC Address low reg bits [31:24] */
#define ETH_MACA1HR_MBC_LBits23_16                      ((uint32_t)0x04000000)  /* Mask MAC Address low reg bits [23:16] */
#define ETH_MACA1HR_MBC_LBits15_8                       ((uint32_t)0x02000000)  /* Mask MAC Address low reg bits [15:8] */
#define ETH_MACA1HR_MBC_LBits7_0                        ((uint32_t)0x01000000)  /* Mask MAC Address low reg bits [7:0] */

#define ETH_MACA1HR_MACA1H                                      ((uint32_t)0x0000FFFF)  /* MAC address1 high */

/* Bit definition for Ethernet MAC Address1 Low Register */
#define ETH_MACA1LR_MACA1L                                      ((uint32_t)0xFFFFFFFF)  /* MAC address1 low */

/* Bit definition for Ethernet MAC Address2 High Register */
#define ETH_MACA2HR_AE                                          ((uint32_t)0x80000000)  /* Address enable */
#define ETH_MACA2HR_SA                                          ((uint32_t)0x40000000)  /* Source address */

#define ETH_MACA2HR_MBC                                         ((uint32_t)0x3F000000)  /* Mask byte control */
#define ETH_MACA2HR_MBC_HBits15_8                       ((uint32_t)0x20000000)  /* Mask MAC Address high reg bits [15:8] */
#define ETH_MACA2HR_MBC_HBits7_0                        ((uint32_t)0x10000000)  /* Mask MAC Address high reg bits [7:0] */
#define ETH_MACA2HR_MBC_LBits31_24                      ((uint32_t)0x08000000)  /* Mask MAC Address low reg bits [31:24] */
#define ETH_MACA2HR_MBC_LBits23_16                      ((uint32_t)0x04000000)  /* Mask MAC Address low reg bits [23:16] */
#define ETH_MACA2HR_MBC_LBits15_8                       ((uint32_t)0x02000000)  /* Mask MAC Address low reg bits [15:8] */
#define ETH_MACA2HR_MBC_LBits7_0                        ((uint32_t)0x01000000)  /* Mask MAC Address low reg bits [70] */

#define ETH_MACA2HR_MACA2H                                      ((uint32_t)0x0000FFFF)  /* MAC address1 high */

/* Bit definition for Ethernet MAC Address2 Low Register */
#define ETH_MACA2LR_MACA2L                                      ((uint32_t)0xFFFFFFFF)  /* MAC address2 low */

/* Bit definition for Ethernet MAC Address3 High Register */
#define ETH_MACA3HR_AE                                          ((uint32_t)0x80000000)  /* Address enable */
#define ETH_MACA3HR_SA                                          ((uint32_t)0x40000000)  /* Source address */
#define ETH_MACA3HR_MBC                                         ((uint32_t)0x3F000000)  /* Mask byte control */
#define ETH_MACA3HR_MBC_HBits15_8                       ((uint32_t)0x20000000)  /* Mask MAC Address high reg bits [15:8] */
#define ETH_MACA3HR_MBC_HBits7_0                        ((uint32_t)0x10000000)  /* Mask MAC Address high reg bits [7:0] */
#define ETH_MACA3HR_MBC_LBits31_24                      ((uint32_t)0x08000000)  /* Mask MAC Address low reg bits [31:24] */
#define ETH_MACA3HR_MBC_LBits23_16                      ((uint32_t)0x04000000)  /* Mask MAC Address low reg bits [23:16] */
#define ETH_MACA3HR_MBC_LBits15_8                       ((uint32_t)0x02000000)  /* Mask MAC Address low reg bits [15:8] */
#define ETH_MACA3HR_MBC_LBits7_0                        ((uint32_t)0x01000000)  /* Mask MAC Address low reg bits [70] */
#define ETH_MACA3HR_MACA3H                                      ((uint32_t)0x0000FFFF)  /* MAC address3 high */

/* Bit definition for Ethernet MAC Address3 Low Register */
#define ETH_MACA3LR_MACA3L                                      ((uint32_t)0xFFFFFFFF)  /* MAC address3 low */

/******************************************************************************/
/*                Ethernet MMC Registers bits definition                      */
/******************************************************************************/

/* Bit definition for Ethernet MMC Contol Register */
#define ETH_MMCCR_MCFHP                                         ((uint32_t)0x00000020)  /* MMC counter Full-Half preset */
#define ETH_MMCCR_MCP                                           ((uint32_t)0x00000010)  /* MMC counter preset */
#define ETH_MMCCR_MCF                                           ((uint32_t)0x00000008)  /* MMC Counter Freeze */
#define ETH_MMCCR_ROR                                           ((uint32_t)0x00000004)  /* Reset on Read */
#define ETH_MMCCR_CSR                                           ((uint32_t)0x00000002)  /* Counter Stop Rollover */
#define ETH_MMCCR_CR                                            ((uint32_t)0x00000001)  /* Counters Reset */

/* Bit definition for Ethernet MMC Receive Interrupt Register */
#define ETH_MMCRIR_RGUFS                                        ((uint32_t)0x00020000)  /* Set when Rx good unicast frames counter reaches half the maximum value */
#define ETH_MMCRIR_RFAES                                        ((uint32_t)0x00000040)  /* Set when Rx alignment error counter reaches half the maximum value */
#define ETH_MMCRIR_RFCES                                        ((uint32_t)0x00000020)  /* Set when Rx crc error counter reaches half the maximum value */

/* Bit definition for Ethernet MMC Transmit Interrupt Register */
#define ETH_MMCTIR_TGFS                                         ((uint32_t)0x00200000)  /* Set when Tx good frame count counter reaches half the maximum value */
#define ETH_MMCTIR_TGFMSCS                                      ((uint32_t)0x00008000)  /* Set when Tx good multi col counter reaches half the maximum value */
#define ETH_MMCTIR_TGFSCS                                       ((uint32_t)0x00004000)  /* Set when Tx good single col counter reaches half the maximum value */

/* Bit definition for Ethernet MMC Receive Interrupt Mask Register */
#define ETH_MMCRIMR_RGUFM                                       ((uint32_t)0x00020000)  /* Mask the interrupt when Rx good unicast frames counter reaches half the maximum value */
#define ETH_MMCRIMR_RFAEM                                       ((uint32_t)0x00000040)  /* Mask the interrupt when when Rx alignment error counter reaches half the maximum value */
#define ETH_MMCRIMR_RFCEM                                       ((uint32_t)0x00000020)  /* Mask the interrupt when Rx crc error counter reaches half the maximum value */

/* Bit definition for Ethernet MMC Transmit Interrupt Mask Register */
#define ETH_MMCTIMR_TGFM                                        ((uint32_t)0x00200000)  /* Mask the interrupt when Tx good frame count counter reaches half the maximum value */
#define ETH_MMCTIMR_TGFMSCM                                     ((uint32_t)0x00008000)  /* Mask the interrupt when Tx good multi col counter reaches half the maximum value */
#define ETH_MMCTIMR_TGFSCM                                      ((uint32_t)0x00004000)  /* Mask the interrupt when Tx good single col counter reaches half the maximum value */

/* Bit definition for Ethernet MMC Transmitted Good Frames after Single Collision Counter Register */
#define ETH_MMCTGFSCCR_TGFSCC                           ((uint32_t)0xFFFFFFFF)  /* Number of successfully transmitted frames after a single collision in Half-duplex mode. */

/* Bit definition for Ethernet MMC Transmitted Good Frames after More than a Single Collision Counter Register */
#define ETH_MMCTGFMSCCR_TGFMSCC                         ((uint32_t)0xFFFFFFFF)  /* Number of successfully transmitted frames after more than a single collision in Half-duplex mode. */

/* Bit definition for Ethernet MMC Transmitted Good Frames Counter Register */
#define ETH_MMCTGFCR_TGFC                                       ((uint32_t)0xFFFFFFFF)  /* Number of good frames transmitted. */

/* Bit definition for Ethernet MMC Received Frames with CRC Error Counter Register */
#define ETH_MMCRFCECR_RFCEC                                     ((uint32_t)0xFFFFFFFF)  /* Number of frames received with CRC error. */

/* Bit definition for Ethernet MMC Received Frames with Alignement Error Counter Register */
#define ETH_MMCRFAECR_RFAEC                                     ((uint32_t)0xFFFFFFFF)  /* Number of frames received with alignment (dribble) error */

/* Bit definition for Ethernet MMC Received Good Unicast Frames Counter Register */
#define ETH_MMCRGUFCR_RGUFC                                     ((uint32_t)0xFFFFFFFF)  /* Number of good unicast frames received. */

/******************************************************************************/
/*               Ethernet PTP Registers bits definition                       */
/******************************************************************************/

/* Bit definition for Ethernet PTP Time Stamp Contol Register */
#define ETH_PTPTSCR_TSCNT                                   ((uint32_t)0x00030000)  /* Time stamp clock node type */
#define ETH_PTPTSSR_TSSMRME                                 ((uint32_t)0x00008000)  /* Time stamp snapshot for message relevant to master enable */
#define ETH_PTPTSSR_TSSEME                                  ((uint32_t)0x00004000)  /* Time stamp snapshot for event message enable */
#define ETH_PTPTSSR_TSSIPV4FE                               ((uint32_t)0x00002000)  /* Time stamp snapshot for IPv4 frames enable */
#define ETH_PTPTSSR_TSSIPV6FE                               ((uint32_t)0x00001000)  /* Time stamp snapshot for IPv6 frames enable */
#define ETH_PTPTSSR_TSSPTPOEFE                              ((uint32_t)0x00000800)  /* Time stamp snapshot for PTP over ethernet frames enable */
#define ETH_PTPTSSR_TSPTPPSV2E                              ((uint32_t)0x00000400)  /* Time stamp PTP packet snooping for version2 format enable */
#define ETH_PTPTSSR_TSSSR                                   ((uint32_t)0x00000200)  /* Time stamp Sub-seconds rollover */
#define ETH_PTPTSSR_TSSARFE                                 ((uint32_t)0x00000100)  /* Time stamp snapshot for all received frames enable */

#define ETH_PTPTSCR_TSARU                                       ((uint32_t)0x00000020)  /* Addend register update */
#define ETH_PTPTSCR_TSITE                                       ((uint32_t)0x00000010)  /* Time stamp interrupt trigger enable */
#define ETH_PTPTSCR_TSSTU                                       ((uint32_t)0x00000008)  /* Time stamp update */
#define ETH_PTPTSCR_TSSTI                                       ((uint32_t)0x00000004)  /* Time stamp initialize */
#define ETH_PTPTSCR_TSFCU                                       ((uint32_t)0x00000002)  /* Time stamp fine or coarse update */
#define ETH_PTPTSCR_TSE                                         ((uint32_t)0x00000001)  /* Time stamp enable */

/* Bit definition for Ethernet PTP Sub-Second Increment Register */
#define ETH_PTPSSIR_STSSI                                       ((uint32_t)0x000000FF)  /* System time Sub-second increment value */

/* Bit definition for Ethernet PTP Time Stamp High Register */
#define ETH_PTPTSHR_STS                                         ((uint32_t)0xFFFFFFFF)  /* System Time second */

/* Bit definition for Ethernet PTP Time Stamp Low Register */
#define ETH_PTPTSLR_STPNS                                       ((uint32_t)0x80000000)  /* System Time Positive or negative time */
#define ETH_PTPTSLR_STSS                                        ((uint32_t)0x7FFFFFFF)  /* System Time sub-seconds */

/* Bit definition for Ethernet PTP Time Stamp High Update Register */
#define ETH_PTPTSHUR_TSUS                                       ((uint32_t)0xFFFFFFFF)  /* Time stamp update seconds */

/* Bit definition for Ethernet PTP Time Stamp Low Update Register */
#define ETH_PTPTSLUR_TSUPNS                                     ((uint32_t)0x80000000)  /* Time stamp update Positive or negative time */
#define ETH_PTPTSLUR_TSUSS                                      ((uint32_t)0x7FFFFFFF)  /* Time stamp update sub-seconds */

/* Bit definition for Ethernet PTP Time Stamp Addend Register */
#define ETH_PTPTSAR_TSA                                         ((uint32_t)0xFFFFFFFF)  /* Time stamp addend */

/* Bit definition for Ethernet PTP Target Time High Register */
#define ETH_PTPTTHR_TTSH                                        ((uint32_t)0xFFFFFFFF)  /* Target time stamp high */

/* Bit definition for Ethernet PTP Target Time Low Register */
#define ETH_PTPTTLR_TTSL                                        ((uint32_t)0xFFFFFFFF)  /* Target time stamp low */

/* Bit definition for Ethernet PTP Time Stamp Status Register */
#define ETH_PTPTSSR_TSTTR                                       ((uint32_t)0x00000020)  /* Time stamp target time reached */
#define ETH_PTPTSSR_TSSO                                        ((uint32_t)0x00000010)  /* Time stamp seconds overflow */

/******************************************************************************/
/*                 Ethernet DMA Registers bits definition                     */
/******************************************************************************/

/* Bit definition for Ethernet DMA Bus Mode Register */
#define ETH_DMABMR_AAB                                          ((uint32_t)0x02000000)  /* Address-Aligned beats */
#define ETH_DMABMR_FPM                                          ((uint32_t)0x01000000)  /* 4xPBL mode */
#define ETH_DMABMR_USP                                          ((uint32_t)0x00800000)  /* Use separate PBL */

#define ETH_DMABMR_RDP                                          ((uint32_t)0x007E0000)  /* RxDMA PBL */
#define ETH_DMABMR_RDP_1Beat                                ((uint32_t)0x00020000)  /* maximum number of beats to be transferred in one RxDMA transaction is 1 */
#define ETH_DMABMR_RDP_2Beat                                ((uint32_t)0x00040000)  /* maximum number of beats to be transferred in one RxDMA transaction is 2 */
#define ETH_DMABMR_RDP_4Beat                                ((uint32_t)0x00080000)  /* maximum number of beats to be transferred in one RxDMA transaction is 4 */
#define ETH_DMABMR_RDP_8Beat                                ((uint32_t)0x00100000)  /* maximum number of beats to be transferred in one RxDMA transaction is 8 */
#define ETH_DMABMR_RDP_16Beat                               ((uint32_t)0x00200000)  /* maximum number of beats to be transferred in one RxDMA transaction is 16 */
#define ETH_DMABMR_RDP_32Beat                               ((uint32_t)0x00400000)  /* maximum number of beats to be transferred in one RxDMA transaction is 32 */
#define ETH_DMABMR_RDP_4xPBL_4Beat                      ((uint32_t)0x01020000)  /* maximum number of beats to be transferred in one RxDMA transaction is 4 */
#define ETH_DMABMR_RDP_4xPBL_8Beat                      ((uint32_t)0x01040000)  /* maximum number of beats to be transferred in one RxDMA transaction is 8 */
#define ETH_DMABMR_RDP_4xPBL_16Beat                     ((uint32_t)0x01080000)  /* maximum number of beats to be transferred in one RxDMA transaction is 16 */
#define ETH_DMABMR_RDP_4xPBL_32Beat                     ((uint32_t)0x01100000)  /* maximum number of beats to be transferred in one RxDMA transaction is 32 */
#define ETH_DMABMR_RDP_4xPBL_64Beat                     ((uint32_t)0x01200000)  /* maximum number of beats to be transferred in one RxDMA transaction is 64 */
#define ETH_DMABMR_RDP_4xPBL_128Beat                    ((uint32_t)0x01400000)  /* maximum number of beats to be transferred in one RxDMA transaction is 128 */

#define ETH_DMABMR_FB                                           ((uint32_t)0x00010000)  /* Fixed Burst */

#define ETH_DMABMR_RTPR                                         ((uint32_t)0x0000C000)  /* Rx Tx priority ratio */
#define ETH_DMABMR_RTPR_1_1                                 ((uint32_t)0x00000000)  /* Rx Tx priority ratio */
#define ETH_DMABMR_RTPR_2_1                                 ((uint32_t)0x00004000)  /* Rx Tx priority ratio */
#define ETH_DMABMR_RTPR_3_1                                 ((uint32_t)0x00008000)  /* Rx Tx priority ratio */
#define ETH_DMABMR_RTPR_4_1                                 ((uint32_t)0x0000C000)  /* Rx Tx priority ratio */

#define ETH_DMABMR_PBL                                          ((uint32_t)0x00003F00)  /* Programmable burst length */
#define ETH_DMABMR_PBL_1Beat                                ((uint32_t)0x00000100)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 1 */
#define ETH_DMABMR_PBL_2Beat                                ((uint32_t)0x00000200)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 2 */
#define ETH_DMABMR_PBL_4Beat                                ((uint32_t)0x00000400)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 4 */
#define ETH_DMABMR_PBL_8Beat                                ((uint32_t)0x00000800)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 8 */
#define ETH_DMABMR_PBL_16Beat                               ((uint32_t)0x00001000)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 16 */
#define ETH_DMABMR_PBL_32Beat                               ((uint32_t)0x00002000)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 32 */
#define ETH_DMABMR_PBL_4xPBL_4Beat                      ((uint32_t)0x01000100)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 4 */
#define ETH_DMABMR_PBL_4xPBL_8Beat                      ((uint32_t)0x01000200)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 8 */
#define ETH_DMABMR_PBL_4xPBL_16Beat                     ((uint32_t)0x01000400)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 16 */
#define ETH_DMABMR_PBL_4xPBL_32Beat                     ((uint32_t)0x01000800)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 32 */
#define ETH_DMABMR_PBL_4xPBL_64Beat                     ((uint32_t)0x01001000)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 64 */
#define ETH_DMABMR_PBL_4xPBL_128Beat                    ((uint32_t)0x01002000)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 128 */

#define ETH_DMABMR_EDE                                          ((uint32_t)0x00000080)  /* Enhanced Descriptor Enable */
#define ETH_DMABMR_DSL                                          ((uint32_t)0x0000007C)  /* Descriptor Skip Length */
#define ETH_DMABMR_DA                                           ((uint32_t)0x00000002)  /* DMA arbitration scheme */
#define ETH_DMABMR_SR                                           ((uint32_t)0x00000001)  /* Software reset */

/* Bit definition for Ethernet DMA Transmit Poll Demand Register */
#define ETH_DMATPDR_TPD                                         ((uint32_t)0xFFFFFFFF)  /* Transmit poll demand */

/* Bit definition for Ethernet DMA Receive Poll Demand Register */
#define ETH_DMARPDR_RPD                                         ((uint32_t)0xFFFFFFFF)  /* Receive poll demand  */

/* Bit definition for Ethernet DMA Receive Descriptor List Address Register */
#define ETH_DMARDLAR_SRL                                        ((uint32_t)0xFFFFFFFF)  /* Start of receive list */

/* Bit definition for Ethernet DMA Transmit Descriptor List Address Register */
#define ETH_DMATDLAR_STL                                        ((uint32_t)0xFFFFFFFF)  /* Start of transmit list */

/* Bit definition for Ethernet DMA Status Register */
#define ETH_DMASR_TSTS                                          ((uint32_t)0x20000000)  /* Time-stamp trigger status */
#define ETH_DMASR_PMTS                                          ((uint32_t)0x10000000)  /* PMT status */

#define ETH_DMASR_MMCS                                          ((uint32_t)0x08000000)  /* MMC status */
#define ETH_DMASR_EBS                                           ((uint32_t)0x03800000)  /* Error bits status */
/* combination with EBS[2:0] for GetFlagStatus function */
#define ETH_DMASR_EBS_DescAccess                    ((uint32_t)0x02000000)  /* Error bits 0-data buffer, 1-desc. access */
#define ETH_DMASR_EBS_ReadTransf                    ((uint32_t)0x01000000)  /* Error bits 0-write trnsf, 1-read transfr */
#define ETH_DMASR_EBS_DataTransfTx                  ((uint32_t)0x00800000)  /* Error bits 0-Rx DMA, 1-Tx DMA */

#define ETH_DMASR_TPS                                               ((uint32_t)0x00700000)  /* Transmit process state */
#define ETH_DMASR_TPS_Stopped                       ((uint32_t)0x00000000)  /* Stopped - Reset or Stop Tx Command issued  */
#define ETH_DMASR_TPS_Fetching                      ((uint32_t)0x00100000)  /* Running - fetching the Tx descriptor */
#define ETH_DMASR_TPS_Waiting                       ((uint32_t)0x00200000)  /* Running - waiting for status */
#define ETH_DMASR_TPS_Reading                       ((uint32_t)0x00300000)  /* Running - reading the data from host memory */
#define ETH_DMASR_TPS_Suspended                     ((uint32_t)0x00600000)  /* Suspended - Tx Descriptor unavailabe */
#define ETH_DMASR_TPS_Closing                       ((uint32_t)0x00700000)  /* Running - closing Rx descriptor */

#define ETH_DMASR_RPS                                       ((uint32_t)0x000E0000)  /* Receive process state */
#define ETH_DMASR_RPS_Stopped                       ((uint32_t)0x00000000)  /* Stopped - Reset or Stop Rx Command issued */
#define ETH_DMASR_RPS_Fetching                      ((uint32_t)0x00020000)  /* Running - fetching the Rx descriptor */
#define ETH_DMASR_RPS_Waiting                       ((uint32_t)0x00060000)  /* Running - waiting for packet */
#define ETH_DMASR_RPS_Suspended                     ((uint32_t)0x00080000)  /* Suspended - Rx Descriptor unavailable */
#define ETH_DMASR_RPS_Closing                       ((uint32_t)0x000A0000)  /* Running - closing descriptor */
#define ETH_DMASR_RPS_Queuing                       ((uint32_t)0x000E0000)  /* Running - queuing the recieve frame into host memory */

#define ETH_DMASR_NIS                                           ((uint32_t)0x00010000)  /* Normal interrupt summary */
#define ETH_DMASR_AIS                                           ((uint32_t)0x00008000)  /* Abnormal interrupt summary */
#define ETH_DMASR_ERS                                           ((uint32_t)0x00004000)  /* Early receive status */
#define ETH_DMASR_FBES                                          ((uint32_t)0x00002000)  /* Fatal bus error status */
#define ETH_DMASR_ETS                                           ((uint32_t)0x00000400)  /* Early transmit status */
#define ETH_DMASR_RWTS                                          ((uint32_t)0x00000200)  /* Receive watchdog timeout status */
#define ETH_DMASR_RPSS                                          ((uint32_t)0x00000100)  /* Receive process stopped status */
#define ETH_DMASR_RBUS                                          ((uint32_t)0x00000080)  /* Receive buffer unavailable status */
#define ETH_DMASR_RS                                            ((uint32_t)0x00000040)  /* Receive status */
#define ETH_DMASR_TUS                                           ((uint32_t)0x00000020)  /* Transmit underflow status */
#define ETH_DMASR_ROS                                           ((uint32_t)0x00000010)  /* Receive overflow status */
#define ETH_DMASR_TJTS                                          ((uint32_t)0x00000008)  /* Transmit jabber timeout status */
#define ETH_DMASR_TBUS                                          ((uint32_t)0x00000004)  /* Transmit buffer unavailable status */
#define ETH_DMASR_TPSS                                          ((uint32_t)0x00000002)  /* Transmit process stopped status */
#define ETH_DMASR_TS                                            ((uint32_t)0x00000001)  /* Transmit status */

/* Bit definition for Ethernet DMA Operation Mode Register */
#define ETH_DMAOMR_DTCEFD                                       ((uint32_t)0x04000000)  /* Disable Dropping of TCP/IP checksum error frames */
#define ETH_DMAOMR_RSF                                          ((uint32_t)0x02000000)  /* Receive store and forward */
#define ETH_DMAOMR_DFRF                                         ((uint32_t)0x01000000)  /* Disable flushing of received frames */
#define ETH_DMAOMR_TSF                                          ((uint32_t)0x00200000)  /* Transmit store and forward */
#define ETH_DMAOMR_FTF                                          ((uint32_t)0x00100000)  /* Flush transmit FIFO */
#define ETH_DMAOMR_TTC                                          ((uint32_t)0x0001C000)  /* Transmit threshold control */
#define ETH_DMAOMR_TTC_64Bytes                          ((uint32_t)0x00000000)  /* threshold level of the MTL Transmit FIFO is 64 Bytes */
#define ETH_DMAOMR_TTC_128Bytes                         ((uint32_t)0x00004000)  /* threshold level of the MTL Transmit FIFO is 128 Bytes */
#define ETH_DMAOMR_TTC_192Bytes                         ((uint32_t)0x00008000)  /* threshold level of the MTL Transmit FIFO is 192 Bytes */
#define ETH_DMAOMR_TTC_256Bytes                         ((uint32_t)0x0000C000)  /* threshold level of the MTL Transmit FIFO is 256 Bytes */
#define ETH_DMAOMR_TTC_40Bytes                          ((uint32_t)0x00010000)  /* threshold level of the MTL Transmit FIFO is 40 Bytes */
#define ETH_DMAOMR_TTC_32Bytes                          ((uint32_t)0x00014000)  /* threshold level of the MTL Transmit FIFO is 32 Bytes */
#define ETH_DMAOMR_TTC_24Bytes                          ((uint32_t)0x00018000)  /* threshold level of the MTL Transmit FIFO is 24 Bytes */
#define ETH_DMAOMR_TTC_16Bytes                          ((uint32_t)0x0001C000)  /* threshold level of the MTL Transmit FIFO is 16 Bytes */
#define ETH_DMAOMR_ST                                           ((uint32_t)0x00002000)  /* Start/stop transmission command */
#define ETH_DMAOMR_FEF                                          ((uint32_t)0x00000080)  /* Forward error frames */
#define ETH_DMAOMR_FUGF                                         ((uint32_t)0x00000040)  /* Forward undersized good frames */
#define ETH_DMAOMR_RTC                                          ((uint32_t)0x00000018)  /* receive threshold control */
#define ETH_DMAOMR_RTC_64Bytes                          ((uint32_t)0x00000000)  /* threshold level of the MTL Receive FIFO is 64 Bytes */
#define ETH_DMAOMR_RTC_32Bytes                          ((uint32_t)0x00000008)  /* threshold level of the MTL Receive FIFO is 32 Bytes */
#define ETH_DMAOMR_RTC_96Bytes                          ((uint32_t)0x00000010)  /* threshold level of the MTL Receive FIFO is 96 Bytes */
#define ETH_DMAOMR_RTC_128Bytes                         ((uint32_t)0x00000018)  /* threshold level of the MTL Receive FIFO is 128 Bytes */
#define ETH_DMAOMR_OSF                                          ((uint32_t)0x00000004)  /* operate on second frame */
#define ETH_DMAOMR_SR                                           ((uint32_t)0x00000002)  /* Start/stop receive */

/* Bit definition for Ethernet DMA Interrupt Enable Register */
#define ETH_DMAIER_NISE                                         ((uint32_t)0x00010000)  /* Normal interrupt summary enable */
#define ETH_DMAIER_AISE                                         ((uint32_t)0x00008000)  /* Abnormal interrupt summary enable */
#define ETH_DMAIER_ERIE                                         ((uint32_t)0x00004000)  /* Early receive interrupt enable */
#define ETH_DMAIER_FBEIE                                        ((uint32_t)0x00002000)  /* Fatal bus error interrupt enable */
#define ETH_DMAIER_ETIE                                         ((uint32_t)0x00000400)  /* Early transmit interrupt enable */
#define ETH_DMAIER_RWTIE                                        ((uint32_t)0x00000200)  /* Receive watchdog timeout interrupt enable */
#define ETH_DMAIER_RPSIE                                        ((uint32_t)0x00000100)  /* Receive process stopped interrupt enable */
#define ETH_DMAIER_RBUIE                                        ((uint32_t)0x00000080)  /* Receive buffer unavailable interrupt enable */
#define ETH_DMAIER_RIE                                          ((uint32_t)0x00000040)  /* Receive interrupt enable */
#define ETH_DMAIER_TUIE                                         ((uint32_t)0x00000020)  /* Transmit Underflow interrupt enable */
#define ETH_DMAIER_ROIE                                         ((uint32_t)0x00000010)  /* Receive Overflow interrupt enable */
#define ETH_DMAIER_TJTIE                                        ((uint32_t)0x00000008)  /* Transmit jabber timeout interrupt enable */
#define ETH_DMAIER_TBUIE                                        ((uint32_t)0x00000004)  /* Transmit buffer unavailable interrupt enable */
#define ETH_DMAIER_TPSIE                                        ((uint32_t)0x00000002)  /* Transmit process stopped interrupt enable */
#define ETH_DMAIER_TIE                                          ((uint32_t)0x00000001)  /* Transmit interrupt enable */

/* Bit definition for Ethernet DMA Missed Frame and Buffer Overflow Counter Register */
#define ETH_DMAMFBOCR_OFOC                                      ((uint32_t)0x10000000)  /* Overflow bit for FIFO overflow counter */
#define ETH_DMAMFBOCR_MFA                                       ((uint32_t)0x0FFE0000)  /* Number of frames missed by the application */
#define ETH_DMAMFBOCR_OMFC                                      ((uint32_t)0x00010000)  /* Overflow bit for missed frame counter */
#define ETH_DMAMFBOCR_MFC                                       ((uint32_t)0x0000FFFF)  /* Number of frames missed by the controller */

/* Bit definition for Ethernet DMA Current Host Transmit Descriptor Register */
#define ETH_DMACHTDR_HTDAP                                      ((uint32_t)0xFFFFFFFF)  /* Host transmit descriptor address pointer */

/* Bit definition for Ethernet DMA Current Host Receive Descriptor Register */
#define ETH_DMACHRDR_HRDAP                                      ((uint32_t)0xFFFFFFFF)  /* Host receive descriptor address pointer */

/* Bit definition for Ethernet DMA Current Host Transmit Buffer Address Register */
#define ETH_DMACHTBAR_HTBAP                                     ((uint32_t)0xFFFFFFFF)  /* Host transmit buffer address pointer */

/* Bit definition for Ethernet DMA Current Host Receive Buffer Address Register */
#define ETH_DMACHRBAR_HRBAP                                     ((uint32_t)0xFFFFFFFF)  /* Host receive buffer address pointer */

/**
* @}
*/

/**
* @}
*/

#ifdef USE_STDPERIPH_DRIVER
#include "HAL_conf.h"
#endif

/** @addtogroup Exported_macro
* @{
*/

#define SET_BIT(REG, BIT)     ((REG) |= (BIT))

#define CLEAR_BIT(REG, BIT)   ((REG) &= ~(BIT))

#define READ_BIT(REG, BIT)    ((REG) & (BIT))

#define CLEAR_REG(REG)        ((REG) = (0x0))

#define WRITE_REG(REG, VAL)   ((REG) = (VAL))

#define READ_REG(REG)         ((REG))

#define MODIFY_REG(REG, CLEARMASK, SETMASK)  WRITE_REG((REG), (((READ_REG(REG)) & (~CLEARMASK)) | (SETMASK)))



/* Exported macro ------------------------------------------------------------*/
#ifdef  USE_FULL_ASSERT

/**
* @brief  The assert_param macro is used for function's parameters check.
* @param expr: If expr is false, it calls assert_failed function
*   which reports the name of the source file and the source
*   line number of the call that failed.
*   If expr is true, it returns no value.
* @retval : None
*/
#define assert_param(expr) ((expr) ? (void)0 : assert_failed((uint8_t *)__FILE__, __LINE__))
/* Exported functions ------------------------------------------------------- */
void assert_failed(uint8_t* file, uint32_t line);
#else
#define assert_param(expr) ((void)0)
#endif /* USE_FULL_ASSERT */


/**
* @}
*/

#endif /* __MM32F103xCxE_o_H */

/**
* @}
*/

/**
* @}
*/

/*-------------------------(C) COPYRIGHT 2018 MindMotion ----------------------*/
