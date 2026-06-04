/**
  ******************************************************************************
  * @file     MM32P0xx.h
  * @author   AE Team
  * @version  V1.0.0
  * @date     2017.3.31
  * @brief
  * @brief CMSIS Cortex-M0 Device Peripheral Access Layer Header File.
  *        This file contains all the peripheral register's definitions, bits
  *        definitions and memory mapping for High Density, Medium
  *        Density and Low Density devices.
  ******************************************************************************
  */

/** @addtogroup CMSIS
  * @{
  */

/** @addtogroup MM32P0xx
  * @{
  */

#ifndef __MM32P0xx_H
#define __MM32P0xx_H



/** @addtogroup Configuration_section_for_CMSIS
  * @{
  */

/**
 * @brief Configuration of the Cortex-M3 Processor and Core Peripherals
 */
#define __MPU_PRESENT             0 /*!< MM32P0 does not provide a MPU present or not  */
#define __NVIC_PRIO_BITS          4 /*!< MM32P0 uses 4 Bits for the Priority Levels    */
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

    EXTI0_IRQn                  = 0,      /*!< EXTI Line 0  Interrupt   */
    EXTI1_IRQn                  = 1,      /*!< EXTI Line 1  Interrupt   */
    EXTI2_IRQn                  = 2,      /*!< EXTI Line 2  Interrupt   */
    EXTI3_IRQn                  = 3,      /*!< EXTI Line 3  Interrupt   */
    EXTI4_IRQn                  = 4,      /*!< EXTI Line 4  Interrupt   */
    TC0_IRQn                    = 5,      /*!< TC0 Interrupts           */
    TC1_IRQn                    = 6,      /*!< TC1  Interrupts          */
    ADC_IRQn                    = 7,     /*!< ADC Interrupts            */

} IRQn_Type;




/**
  * @}
  */

#include "core_cm0.h"
#include <stdint.h>

/** @addtogroup Exported_types
  * @{
  */

/*!< MM32P0 Standard Peripheral Library old types (maintained for legacy prupose) */
typedef int32_t  s32;
typedef int16_t s16;
typedef int8_t  s8;

typedef const int32_t sc32;  /*!< Read Only */
typedef const int16_t sc16;  /*!< Read Only */
typedef const int8_t sc8;   /*!< Read Only */

typedef __IO int32_t  vs32;
typedef __IO int16_t  vs16;
typedef __IO int8_t   vs8;

typedef __I int32_t vsc32;  /*!< Read Only */
typedef __I int16_t vsc16;  /*!< Read Only */
typedef __I int8_t vsc8;   /*!< Read Only */

typedef uint32_t  u32;
typedef uint16_t u16;
typedef uint8_t  u8;

typedef const uint32_t uc32;  /*!< Read Only */
typedef const uint16_t uc16;  /*!< Read Only */
typedef const uint8_t uc8;   /*!< Read Only */

typedef __IO uint32_t  vu32;
typedef __IO uint16_t vu16;
typedef __IO uint8_t  vu8;

typedef __I uint32_t vuc32;  /*!< Read Only */
typedef __I uint16_t vuc16;  /*!< Read Only */
typedef __I uint8_t vuc8;   /*!< Read Only */

typedef enum {FALSE = 0, TRUE = !FALSE} bool;

typedef enum {RESET = 0, SET = !RESET} FlagStatus, ITStatus;

typedef enum {DISABLE = 0, ENABLE = !DISABLE} FunctionalState;
#define IS_FUNCTIONAL_STATE(STATE) (((STATE) == DISABLE) || ((STATE) == ENABLE))

typedef enum {ERROR = 0, SUCCESS = !ERROR} ErrorStatus;






/**
  * @}
  */

/** @addtogroup Peripheral_registers_structures
  * @{
  */

/**
  * @brief Analog to Digital Converter
  */

//typedef struct
//{
//  __IO uint32_t ADDATA;
//  __IO uint32_t ADCFG;
//  __IO uint32_t ADCR;
//  __IO uint32_t ADCHS;
//  __IO uint32_t ADCMPR;
//  __IO uint32_t ADSTA;
//  __IO uint32_t ADDR0;
//  __IO uint32_t ADDR1;
//  __IO uint32_t ADDR2;
//  __IO uint32_t ADDR3;
//  __IO uint32_t ADDR4;
//  __IO uint32_t ADDR5;
//  __IO uint32_t ADDR6;
//  __IO uint32_t ADDR7;
//  __IO uint32_t ADDR8;
//} ADC_TypeDef;


/**
  * @brief Debug MCU
  */

//typedef struct
//{
//  __IO uint32_t IDCODE;
//  __IO uint32_t CR;
//}DBGMCU_TypeDef;



/**
  * @}
  */

/** @addtogroup Peripheral_memory_map
  * @{
  */

#define AHB_BASE              ((uint32_t)0x40000000)    /*!< Peripheral base address in the alias region */  //?????

#define SRAM_BASE             ((uint32_t)0x20000000) /*!< SRAM base address in the bit-band region */
#define PERIPH_BASE           ((uint32_t)0x40000000) /*!< Peripheral base address in the bit-band region */



/*!< Peripheral memory map */
//#define APBPERIPH_BASE       PERIPH_BASE

#define AHBPERIPH_BASE        (PERIPH_BASE + 0x00000)


#define TC0_BASE              (PERIPH_BASE + 0x0000)
#define TC1_BASE              (PERIPH_BASE + 0x0400)
#define ADC_BASE              (PERIPH_BASE + 0x0800)
#define WDT_BASE              (PERIPH_BASE + 0x0C00)
#define SYSCTRL_BASE          (PERIPH_BASE + 0x1000)
#define OTPCTRL_BASE          (PERIPH_BASE + 0x1400)
#define GPIO_BASE             (PERIPH_BASE + 0x1800)
#define ADC_BASE              (PERIPH_BASE + 0x0800)

//#define DBGMCU_BASE          ((uint32_t)0xE0042000) /*!< Debug MCU registers base address */

/**
  * @}
  */

/** @addtogroup Peripheral_declaration
  * @{
  */

#define OPT_INFO            *((volatile unsigned int*)(0x0000F000))

#define SYS_PCSR            *((volatile unsigned int*)(SYSCTRL_BASE+0x0))
#define SYS_CCSR            *((volatile unsigned int*)(SYSCTRL_BASE+0x04))
#define SYS_ID              *((volatile unsigned int*)(SYSCTRL_BASE+0x08))

#define EXTI_IMR            *((volatile unsigned int*)(SYSCTRL_BASE+0x10))
#define EXTI_EMR            *((volatile unsigned int*)(SYSCTRL_BASE+0x14))
#define EXTI_TSR            *((volatile unsigned int*)(SYSCTRL_BASE+0x18))

#define GPIO_P0M            *((volatile unsigned int*)(GPIO_BASE+0x0))  //0: input mode 1: output mode
#define GPIO_P4M            *((volatile unsigned int*)(GPIO_BASE+0x10))
#define GPIO_P5M            *((volatile unsigned int*)(GPIO_BASE+0x20))

#define GPIO_P0PU            *((volatile unsigned int*)(GPIO_BASE+0x04)) //pull up
#define GPIO_P4PU            *((volatile unsigned int*)(GPIO_BASE+0x14))
#define GPIO_P5PU            *((volatile unsigned int*)(GPIO_BASE+0x24))

#define GPIO_P0              *((volatile unsigned int*)(GPIO_BASE+0x08)) //data
#define GPIO_P4              *((volatile unsigned int*)(GPIO_BASE+0x18))
#define GPIO_P5              *((volatile unsigned int*)(GPIO_BASE+0x28))

#define GPIO_P4CR              *((volatile unsigned int*)(GPIO_BASE+0x1C)) //control register

#define WDT_RR               *((volatile unsigned int*)(WDT_BASE +0x0))

#define TC0M                 *((volatile unsigned int*)(TC0_BASE+0x0))
#define TC0CFGR              *((volatile unsigned int*)(TC0_BASE+0x04))
#define TC0C                 *((volatile unsigned int*)(TC0_BASE+0x08))
#define TC0R                 *((volatile unsigned int*)(TC0_BASE+0x0C))

#define OTP_ACR              *((volatile unsigned int*)(OTPCTRL_BASE+0x0))
#define OTP_PTM              *((volatile unsigned int*)(OTPCTRL_BASE+0x04))
#define OTP_WKEY             *((volatile unsigned int*)(OTPCTRL_BASE+0x20))
#define OTP_RKEY             *((volatile unsigned int*)(OTPCTRL_BASE+0x24))
#define OTP_OPTR             *((volatile unsigned int*)(OTPCTRL_BASE+0x28))

#define ADC_ADDATA               *((volatile unsigned int*)(ADC_BASE+0x0))
#define ADC_ADCFG                *((volatile unsigned int*)(ADC_BASE+0x04))
#define ADC_ADCR                 *((volatile unsigned int*)(ADC_BASE+0x08))
#define NVIC_ISER0           *((volatile unsigned int*)(0xE000E100))



#define PWM0OUT              0x01
#define TC0OUT               0x02
#define ALOAD0               0x04
#define TC0CKS_HSE           0x08
#define TC0CKS_HSI           0x0

#define PWM1OUT              0x01
#define TC1OUT               0x02
#define ALOAD1               0x04
#define TC1CKS_HSE           0x08
#define TC1CKS_HSI           0x0

#define TC0_256              0x0
#define TC0_128              0x10
#define TC0_64               0x20
#define TC0_32               0x30
#define TC0_16               0x40
#define TC0_8                0x50
#define TC0_4                0x60
#define TC0_2                0x70

#define TC1_256              0x0
#define TC1_128              0x10
#define TC1_64               0x20
#define TC1_32               0x30
#define TC1_16               0x40
#define TC1_8                0x50
#define TC1_4                0x60
#define TC1_2                0x70

#define TC0ENB               0x80
#define TC1ENB               0x80

#define TCxIEN               0x08
#define TCxIF                0x10
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
/*                                                                            */
/*                                 Debug MCU                                  */
/*                                                                            */
/******************************************************************************/

/****************  Bit definition for DBGMCU_IDCODE register  *****************/
#define  DBGMCU_IDCODE_DEV_ID                ((uint32_t)0x00000FFF)        /*!<Device Identifier */

#define  DBGMCU_IDCODE_REV_ID                ((uint32_t)0xFFFF0000)        /*!<REV_ID[15:0] bits (Revision Identifier) */
#define  DBGMCU_IDCODE_REV_ID_0              ((uint32_t)0x00010000)        /*!<Bit 0 */
#define  DBGMCU_IDCODE_REV_ID_1              ((uint32_t)0x00020000)        /*!<Bit 1 */
#define  DBGMCU_IDCODE_REV_ID_2              ((uint32_t)0x00040000)        /*!<Bit 2 */
#define  DBGMCU_IDCODE_REV_ID_3              ((uint32_t)0x00080000)        /*!<Bit 3 */
#define  DBGMCU_IDCODE_REV_ID_4              ((uint32_t)0x00100000)        /*!<Bit 4 */
#define  DBGMCU_IDCODE_REV_ID_5              ((uint32_t)0x00200000)        /*!<Bit 5 */
#define  DBGMCU_IDCODE_REV_ID_6              ((uint32_t)0x00400000)        /*!<Bit 6 */
#define  DBGMCU_IDCODE_REV_ID_7              ((uint32_t)0x00800000)        /*!<Bit 7 */
#define  DBGMCU_IDCODE_REV_ID_8              ((uint32_t)0x01000000)        /*!<Bit 8 */
#define  DBGMCU_IDCODE_REV_ID_9              ((uint32_t)0x02000000)        /*!<Bit 9 */
#define  DBGMCU_IDCODE_REV_ID_10             ((uint32_t)0x04000000)        /*!<Bit 10 */
#define  DBGMCU_IDCODE_REV_ID_11             ((uint32_t)0x08000000)        /*!<Bit 11 */
#define  DBGMCU_IDCODE_REV_ID_12             ((uint32_t)0x10000000)        /*!<Bit 12 */
#define  DBGMCU_IDCODE_REV_ID_13             ((uint32_t)0x20000000)        /*!<Bit 13 */
#define  DBGMCU_IDCODE_REV_ID_14             ((uint32_t)0x40000000)        /*!<Bit 14 */
#define  DBGMCU_IDCODE_REV_ID_15             ((uint32_t)0x80000000)        /*!<Bit 15 */

/******************  Bit definition for DBGMCU_CR register  *******************/
#define  DBGMCU_CR_DBG_SLEEP                 ((uint32_t)0x00000001)        /*!<Debug Sleep Mode */
#define  DBGMCU_CR_DBG_STOP                  ((uint32_t)0x00000002)        /*!<Debug Stop Mode */
#define  DBGMCU_CR_DBG_STANDBY               ((uint32_t)0x00000004)        /*!<Debug Standby mode */
#define  DBGMCU_CR_TRACE_IOEN                ((uint32_t)0x00000020)        /*!<Trace Pin Assignment Control */

#define  DBGMCU_CR_TRACE_MODE                ((uint32_t)0x000000C0)        /*!<TRACE_MODE[1:0] bits (Trace Pin Assignment Control) */
#define  DBGMCU_CR_TRACE_MODE_0              ((uint32_t)0x00000040)        /*!<Bit 0 */
#define  DBGMCU_CR_TRACE_MODE_1              ((uint32_t)0x00000080)        /*!<Bit 1 */

#define  DBGMCU_CR_DBG_IWDG_STOP             ((uint32_t)0x00000100)        /*!<Debug Independent Watchdog stopped when Core is halted */
#define  DBGMCU_CR_DBG_WWDG_STOP             ((uint32_t)0x00000200)        /*!<Debug Window Watchdog stopped when Core is halted */
#define  DBGMCU_CR_DBG_TIM1_STOP             ((uint32_t)0x00000400)        /*!<TIM1 counter stopped when core is halted */
#define  DBGMCU_CR_DBG_TIM2_STOP             ((uint32_t)0x00000800)        /*!<TIM2 counter stopped when core is halted */
#define  DBGMCU_CR_DBG_TIM3_STOP             ((uint32_t)0x00001000)        /*!<TIM3 counter stopped when core is halted */
#define  DBGMCU_CR_DBG_TIM4_STOP             ((uint32_t)0x00002000)        /*!<TIM4 counter stopped when core is halted */
#define  DBGMCU_CR_DBG_CAN_STOP              ((uint32_t)0x00004000)        /*!<Debug CAN stopped when Core is halted */
#define  DBGMCU_CR_DBG_I2C1_SMBUS_TIMEOUT    ((uint32_t)0x00008000)        /*!<SMBUS timeout mode stopped when Core is halted */
#define  DBGMCU_CR_DBG_I2C2_SMBUS_TIMEOUT    ((uint32_t)0x00010000)        /*!<SMBUS timeout mode stopped when Core is halted */
#define  DBGMCU_CR_DBG_TIM5_STOP             ((uint32_t)0x00020000)        /*!<TIM5 counter stopped when core is halted */
#define  DBGMCU_CR_DBG_TIM6_STOP             ((uint32_t)0x00040000)        /*!<TIM6 counter stopped when core is halted */
#define  DBGMCU_CR_DBG_TIM7_STOP             ((uint32_t)0x00080000)        /*!<TIM7 counter stopped when core is halted */
#define  DBGMCU_CR_DBG_TIM8_STOP             ((uint32_t)0x00100000)        /*!<TIM8 counter stopped when core is halted */


/**
  * @}
  */

/**
 * @}
 */



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

#endif /* __MM32P0xx_H */

/**
  * @}
  */

/**
* @}
*/

/******************* (C) COPYRIGHT Mindmotion  *****END OF FILE****/
