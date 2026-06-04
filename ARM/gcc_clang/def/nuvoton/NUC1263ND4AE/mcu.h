/**************************************************************************//**
 * @file     NUC1263.h
 * @version  V3.0
 * @brief    NUC1263 Series Peripheral Access Layer Header File
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2022 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/

/**
  \mainpage Introduction
  *
  *
  * This user manual describes the usage of NUC1263 MCU device driver
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
  * Copyright (C) 2022~2024 Nuvoton Technology Corp. All rights reserved.
  */

#ifndef __NUC1263_H__
#define __NUC1263_H__


/*
 * ==========================================================================
 * ---------- Interrupt Number Definition -----------------------------------
 * ==========================================================================
 */

/**
 * @details  Interrupt Number Definition.
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
    I2C2_IRQn                 = 20,       /*!< I2C2 Interrupt                                       */
    USBD_IRQn                 = 23,       /*!< USB Device Interrupt                                 */
    ACMP01_IRQn               = 25,       /*!< ACMP01 Interrupt                                     */
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
    SPI2_IRQn                 = 42,       /*!< SPI2 Interrupt                                       */
    UART2_IRQn                = 43,       /*!< UART2 Interrupt                                      */
    I3CS0_IRQn                = 44,       /*!< I3CS0 Interrupt                                      */
    I3CS1_IRQn                = 45,       /*!< I3CS1 Interrupt                                      */
    DAC_IRQn                  = 46,       /*!< DAC Interrupt                                        */
    ACMP23_IRQn               = 47,       /*!< ACMP23 Interrupt                                     */
    TS_IRQn                   = 48,       /*!< Temperature Sensor Interrupt                         */
    SPDH_IRQn                 = 49,       /*!< SPDH Interrupt                                       */

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
#define __SOFTFP__ // Note: Added for MikroE implementation.
#ifndef __SOFTFP__
# define __SOFTFP__             1
#endif

#include "core_cm23.h"                   /*!< Cortex-M23 processor and core peripherals           */
// Note: Changed for MikroE implementation.
//#include "system_NUC1263.h"              /*!< NUC1263 System                                      */
#define __I volatile // Note: Added for MikroE implementation.
#define __O __I // Note: Added for MikroE implementation.
#define __IO __I // Note: Added for MikroE implementation.
#include <stdint.h>


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
 *         Initialize the PLL and update the SystemFrequency variable
 */
extern void SystemInit(void);



/******************************************************************************/
/*                Device Specific Peripheral registers structures             */
/******************************************************************************/

// Note: Changed for MikroE implementation.
//#include "fmc_reg.h"
// Note: Changed for MikroE implementation.
//#include "i2c_reg.h"
// Note: Changed for MikroE implementation.
//#include "acmp_reg.h"
// Note: Changed for MikroE implementation.
//#include "clk_reg.h"
// Note: Changed for MikroE implementation.
//#include "gpio_reg.h"
// Note: Changed for MikroE implementation.
//#include "sys_reg.h"
// Note: Changed for MikroE implementation.
//#include "uart_reg.h"
// Note: Changed for MikroE implementation.
//#include "llsi_reg.h"
// Note: Changed for MikroE implementation.
//#include "spi_reg.h"
// Note: Changed for MikroE implementation.
//#include "usbd_reg.h"
// Note: Changed for MikroE implementation.
//#include "adc_reg.h"
// Note: Changed for MikroE implementation.
//#include "bpwm_reg.h"
// Note: Changed for MikroE implementation.
//#include "dac_reg.h"
// Note: Changed for MikroE implementation.
//#include "pdma_reg.h"
// Note: Changed for MikroE implementation.
//#include "timer_reg.h"
// Note: Changed for MikroE implementation.
//#include "wdt_reg.h"
// Note: Changed for MikroE implementation.
//#include "wwdt_reg.h"
// Note: Changed for MikroE implementation.
//#include "crc_reg.h"
// Note: Changed for MikroE implementation.
//#include "i3cs_reg.h"
// Note: Changed for MikroE implementation.
//#include "spdh_reg.h"


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
#define UART2_BASE          (APB1_BASE      + 0x80000)                  /*!< UART2 Base Address                               */

#define TIMER0_BASE         (APB1_BASE      + 0x10000)                  /*!< Timer0 Base Address                              */
#define TIMER1_BASE         (APB1_BASE      + 0x10020)                  /*!< Timer1 Base Address                              */
#define TIMER2_BASE         (APB2_BASE      + 0x10000)                  /*!< Timer2 Base Address                              */
#define TIMER3_BASE         (APB2_BASE      + 0x10020)                  /*!< Timer3 Base Address                              */

#define WDT_BASE            (APB1_BASE      + 0x4000)                   /*!< Watch Dog Timer Base Address                     */

#define WWDT_BASE           (APB1_BASE      + 0x4100)                   /*!< Window Watch Dog Timer Base Address              */

#define SPI0_BASE           (APB1_BASE      + 0x30000)                  /*!< SPI0 Base Address                                */
#define SPI1_BASE           (APB1_BASE      + 0x34000)                  /*!< SPI1 Base Address                                */
#define SPI2_BASE           (APB2_BASE      + 0x30000)                  /*!< SPI2 Base Address                                */

#define I2C0_BASE           (APB1_BASE      + 0x20000)                  /*!< I2C0 Base Address                                */
#define I2C1_BASE           (APB2_BASE      + 0x20000)                  /*!< I2C1 Base Address                                */
#define I2C2_BASE           (APB1_BASE      + 0x24000)                  /*!< I2C2 Base Address                                */

#define ADC_BASE            (APB1_BASE      + 0xE0000)                  /*!< ADC Base Address                                 */

#define CLK_BASE            (AHB_BASE       + 0x00200)                  /*!< System Clock Controller Base Address             */

#define SYS_BASE            (AHB_BASE       + 0x00000)                  /*!< System Global Controller Base Address            */

#define INT_BASE            (AHB_BASE       + 0x00300)                  /*!< Interrupt Source Controller Base Address         */

#define FMC_BASE            (AHB_BASE       + 0x0C000)                  /*!< Flash Memory Controller Base Address             */

#define BPWM0_BASE          (APB1_BASE      + 0x40000)                  /*!< BPWM0 Base Address                               */
#define BPWM1_BASE          (APB2_BASE      + 0x40000)                  /*!< BPWM1 Base Address                               */
#define BPWM2_BASE          (APB1_BASE      + 0x44000)                  /*!< BPWM2 Base Address                               */
#define BPWM3_BASE          (APB2_BASE      + 0x44000)                  /*!< BPWM3 Base Address                               */

#define CRC_BASE            (AHB_BASE       + 0x18000)                  /*!< CRC Base Address                                 */

#define USBD_BASE           (APB1_BASE      + 0x60000)                  /*!< USB Device Base Address                          */

#define PDMA_BASE           (AHB_BASE       + 0x08000)                  /*!< PDMA Base Address                                */

#define LLSI0_BASE          (APB1_BASE      + 0x54000)                  /*!< LLSI0 Base Address                               */
#define LLSI1_BASE          (APB2_BASE      + 0x54000)                  /*!< LLSI1 Base Address                               */
#define LLSI2_BASE          (APB1_BASE      + 0x54200)                  /*!< LLSI2 Base Address                               */
#define LLSI3_BASE          (APB2_BASE      + 0x54200)                  /*!< LLSI3 Base Address                               */
#define LLSI4_BASE          (APB1_BASE      + 0x54400)                  /*!< LLSI4 Base Address                               */
#define LLSI5_BASE          (APB2_BASE      + 0x54400)                  /*!< LLSI5 Base Address                               */

#define ACMP01_BASE         (APB1_BASE      + 0xD0000)                  /*!< ACMP01 Base Address                              */
#define ACMP23_BASE         (APB2_BASE      + 0xD0000)                  /*!< ACMP23 Base Address                              */


#define DAC0_BASE            (APB1_BASE     + 0xF0000UL)                 /*!< DAC0 Base Address                                */
#define DAC1_BASE            (APB1_BASE     + 0xF0040UL)                 /*!< DAC1 Base Address                                */
#define DAC2_BASE            (APB1_BASE     + 0xF0080UL)                 /*!< DAC2 Base Address                                */
#define DAC3_BASE            (APB1_BASE     + 0xF00C0UL)                 /*!< DAC3 Base Address                                */

#define I3CS0_BASE       	(APB1_BASE      + 0x70000)                   /*!< I3CS0 Base Address                               */
#define I3CS1_BASE       	(APB2_BASE      + 0x70000)                   /*!< I3CS1 Base Address                               */

#define SPDH_BASE            (APB1_BASE      + 0x90000)                  /*!< SPDH Base Address                               */

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
#define UART2               ((UART_T *) UART2_BASE)                     /*!< UART2 Configuration Struct                       */

#define TIMER0              ((TIMER_T *) TIMER0_BASE)                   /*!< TIMER0 Configuration Struct                      */
#define TIMER1              ((TIMER_T *) TIMER1_BASE)                   /*!< TIMER1 Configuration Struct                      */
#define TIMER2              ((TIMER_T *) TIMER2_BASE)                   /*!< TIMER2 Configuration Struct                      */
#define TIMER3              ((TIMER_T *) TIMER3_BASE)                   /*!< TIMER3 Configuration Struct                      */

#define WDT                 ((WDT_T *) WDT_BASE)                        /*!< Watch Dog Timer Configuration Struct             */

#define WWDT                ((WWDT_T *) WWDT_BASE)                      /*!< Window Watch Dog Timer Configuration Struct      */

#define SPI0                ((SPI_T *) SPI0_BASE)                       /*!< SPI0 Configuration Struct                        */
#define SPI1                ((SPI_T *) SPI1_BASE)                       /*!< SPI1 Configuration Struct                        */
#define SPI2                ((SPI_T *) SPI2_BASE)                       /*!< SPI2 Configuration Struct                        */

#define I2C0                ((I2C_T *) I2C0_BASE)                       /*!< I2C0 Configuration Struct                        */
#define I2C1                ((I2C_T *) I2C1_BASE)                       /*!< I2C1 Configuration Struct                        */
#define I2C2                ((I2C_T *) I2C2_BASE)                       /*!< I2C2 Configuration Struct                        */

#define ADC                 ((ADC_T *) ADC_BASE)                        /*!< ADC Configuration Struct                         */

#define CLK                 ((CLK_T *) CLK_BASE)                        /*!< System Clock Controller Configuration Struct     */

#define SYS                 ((SYS_T *) SYS_BASE)                        /*!< System Global Controller Configuration Struct    */

#define SYSINT              ((SYS_INT_T *) INT_BASE)                    /*!< Interrupt Source Controller Configuration Struct */

#define FMC                 ((FMC_T *) FMC_BASE)                        /*!< Flash Memory Controller */

#define BPWM0               ((BPWM_T *) BPWM0_BASE)                     /*!< BPWM0 Configuration Struct                        */
#define BPWM1               ((BPWM_T *) BPWM1_BASE)                     /*!< BPWM1 Configuration Struct                        */
#define BPWM2               ((BPWM_T *) BPWM2_BASE)                     /*!< BPWM2 Configuration Struct                        */
#define BPWM3               ((BPWM_T *) BPWM3_BASE)                     /*!< BPWM3 Configuration Struct                        */

#define CRC                 ((CRC_T *) CRC_BASE)                        /*!< CRC Configuration Struct                          */

#define USBD                ((USBD_T *) USBD_BASE)                      /*!< USB Device Configuration Struct                   */

#define PDMA                ((PDMA_T *) PDMA_BASE)                      /*!< PDMA Configuration Struct                         */

#define LLSI0               ((LLSI_T *) LLSI0_BASE)                     /*!< LLSI0 Configuration Struct                        */
#define LLSI1               ((LLSI_T *) LLSI1_BASE)                     /*!< LLSI1 Configuration Struct                        */
#define LLSI2               ((LLSI_T *) LLSI2_BASE)                     /*!< LLSI2 Configuration Struct                        */
#define LLSI3               ((LLSI_T *) LLSI3_BASE)                     /*!< LLSI3 Configuration Struct                        */
#define LLSI4               ((LLSI_T *) LLSI4_BASE)                     /*!< LLSI4 Configuration Struct                        */
#define LLSI5               ((LLSI_T *) LLSI5_BASE)                     /*!< LLSI5 Configuration Struct                        */

#define ACMP01              ((ACMP_T *) ACMP01_BASE)                    /*!< ACMP01 Configuration Struct                       */
#define ACMP23              ((ACMP_T *) ACMP23_BASE)                    /*!< ACMP23 Configuration Struct                       */

#define DAC0                ((DAC_T *) DAC0_BASE)                       /*!< DAC0 Configuration Struct                         */
#define DAC1                ((DAC_T *) DAC1_BASE)                       /*!< DAC1 Configuration Struct                         */
#define DAC2                ((DAC_T *) DAC2_BASE)                       /*!< DAC2 Configuration Struct                         */
#define DAC3                ((DAC_T *) DAC3_BASE)                       /*!< DAC3 Configuration Struct                         */

#define I3CS0           	((I3CS_T *) I3CS0_BASE)                 	/*!< I3CS0 Configuration Struct                        */
#define I3CS1             	((I3CS_T *) I3CS1_BASE)                  	/*!< I3CS1 Configuration Struct                        */

#define SPDH                ((SPDH_T *) SPDH_BASE)                      /*!< SPDH Configuration Struct                         */

/**@}*/ /* end of group PMODULE */


//=============================================================================
typedef volatile unsigned char  vu8;
typedef volatile unsigned int   vu32;
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
//#include "sys.h"
// Note: Changed for MikroE implementation.
//#include "clk.h"
// Note: Changed for MikroE implementation.
//#include "adc.h"
// Note: Changed for MikroE implementation.
//#include "fmc.h"
// Note: Changed for MikroE implementation.
//#include "gpio.h"
// Note: Changed for MikroE implementation.
//#include "i2c.h"
// Note: Changed for MikroE implementation.
//#include "bpwm.h"
// Note: Changed for MikroE implementation.
//#include "spi.h"
// Note: Changed for MikroE implementation.
//#include "timer.h"
// Note: Changed for MikroE implementation.
//#include "wdt.h"
// Note: Changed for MikroE implementation.
//#include "wwdt.h"
// Note: Changed for MikroE implementation.
//#include "uart.h"
// Note: Changed for MikroE implementation.
//#include "crc.h"
// Note: Changed for MikroE implementation.
//#include "usbd.h"
// Note: Changed for MikroE implementation.
//#include "pdma.h"
// Note: Changed for MikroE implementation.
//#include "llsi.h"
// Note: Changed for MikroE implementation.
//#include "dac.h"
// Note: Changed for MikroE implementation.
//#include "acmp.h"
// Note: Changed for MikroE implementation.
//#include "i3cs.h"
// Note: Changed for MikroE implementation.
//#include "ts.h"
#endif
