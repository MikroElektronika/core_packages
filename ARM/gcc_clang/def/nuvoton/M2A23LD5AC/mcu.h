/**************************************************************************//**
 * @file     m2a23.h
 * @version  V3.0
 * @brief    M2A23 Series Peripheral Access Layer Header File
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2024 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/

/**
  \mainpage Introduction
  *
  *
  * This user manual describes the usage of M2A23 MCU device driver
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
  * Copyright (C) 2024 Nuvoton Technology Corp. All rights reserved.
  */

#ifndef __M2A23_H__
#define __M2A23_H__


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
    /******  Cortex-M23 Processor Exceptions Numbers **************************************************/
    NonMaskableInt_IRQn       = -14,      /*!< 2 Non Maskable Interrupt                             */
    HardFault_IRQn            = -13,      /*!< 3 Cortex-M23 Hard Fault Interrupt                    */
    SVCall_IRQn               = -5,       /*!< 11 Cortex-M23 SV Call Interrupt                      */
    PendSV_IRQn               = -2,       /*!< 14 Cortex-M23 Pend SV Interrupt                      */
    SysTick_IRQn              = -1,       /*!< 15 Cortex-M23 System Tick Interrupt                  */

    /******  ARMIKMCU Swift specific Interrupt Numbers ************************************************/
    BOD_IRQn                      = 0,        /*!< Brown Out detection Interrupt                    */
    IRC_IRQn                      = 1,        /*!< Internal RC Interrupt                            */
    PWRWU_IRQn                    = 2,        /*!< Power Down Wake Up Interrupt                     */
    RAMPE_IRQn                    = 3,        /*!< SRAM parity check failed Interrupt               */
    CKFAIL_IRQn                   = 4,        /*!< Clock failed Interrupt                           */
    ISP_IRQn                      = 5,        /*!< FMC ISP Interrupt                                */
    WDT_IRQn                      = 8,        /*!< Watchdog timer Interrupt                         */
    WWDT_IRQn                     = 9,        /*!< Window Watchdog timer Interrupt                  */
    EINT0_IRQn                    = 10,       /*!< External Input 0 Interrupt                       */
    EINT1_IRQn                    = 11,       /*!< External Input 1 Interrupt                       */
    EINT2_IRQn                    = 12,       /*!< External Input 2 Interrupt                       */
    EINT3_IRQn                    = 13,       /*!< External Input 3 Interrupt                       */
    EINT4_IRQn                    = 14,       /*!< External Input 4 Interrupt                       */
    EINT5_IRQn                    = 15,       /*!< External Input 5 Interrupt                       */
    GPA_IRQn                      = 16,       /*!< GPIO Port A Interrupt                            */
    GPB_IRQn                      = 17,       /*!< GPIO Port B Interrupt                            */
    GPC_IRQn                      = 18,       /*!< GPIO Port C Interrupt                            */
    GPD_IRQn                      = 19,       /*!< GPIO Port D Interrupt                            */
    GPF_IRQn                      = 21,       /*!< GPIO Port F Interrupt                            */
    SPI0_IRQn                     = 23,       /*!< SPI0 Interrupt                                   */
    BRAKE0_IRQn                   = 24,       /*!< BRAKE0 Interrupt                                 */
    PWM0P0_IRQn                   = 25,       /*!< PWM0P0 Interrupt                                 */
    PWM0P1_IRQn                   = 26,       /*!< PWM0P1 Interrupt                                 */
    PWM0P2_IRQn                   = 27,       /*!< PWM0P2 Interrupt                                 */
    TMR0_IRQn                     = 32,       /*!< Timer 0 Interrupt                                */
    TMR1_IRQn                     = 33,       /*!< Timer 1 Interrupt                                */
    TMR2_IRQn                     = 34,       /*!< Timer 2 Interrupt                                */
    TMR3_IRQn                     = 35,       /*!< Timer 3 Interrupt                                */
    UART0_IRQn                    = 36,       /*!< UART 0 Interrupt                                 */
    UART1_IRQn                    = 37,       /*!< UART 1 Interrupt                                 */
    I2C0_IRQn                     = 38,       /*!< I2C 0 Interrupt                                  */
    PDMA0_IRQn                    = 40,       /*!< Peripheral DMA 0 Interrupt                       */
    ADC0_IRQn                     = 42,       /*!< ADC0 Interrupt                                   */
    ACMP01_IRQn                   = 44,       /*!< Analog Comparator 0 and 1 Interrupt              */
    BPWM0_IRQn                    = 45,       /*!< BPWM0 Interrupt                                  */
    LLSI0_IRQn                    = 46,       /*!< LLSI0 Interrupt                                  */
    LLSI1_IRQn                    = 47,       /*!< LLSI1 Interrupt                                  */
    CANFD00_IRQn                  = 48,       /*!< CANFD00 Interrupt                                */
    CANFD01_IRQn                  = 49,       /*!< CANFD01 Interrupt                                */
    CANFD10_IRQn                  = 50,       /*!< CANFD10 Interrupt                                */
    CANFD11_IRQn                  = 51,       /*!< CANFD11 Interrupt                                */
    CANFD20_IRQn                  = 52,       /*!< CANFD20 Interrupt                                */
    CANFD21_IRQn                  = 53,       /*!< CANFD21 Interrupt                                */
    USCI0_IRQn                    = 56,       /*!< USCI0 Interrupt                                  */
    USCI1_IRQn                    = 57,       /*!< USCI1 Interrupt                                  */
} IRQn_Type;


/*
 * ==========================================================================
 * ----------- Processor and Core Peripheral Section ------------------------
 * ==========================================================================
 */

/* Configuration of the Cortex-M23 Processor and Core Peripherals */
#define __MPU_PRESENT           0       /*!< armikcmu does not provide a MPU present or not       */
#define __VTOR_PRESENT          1       /*!< VTOR present                                         */
#define __NVIC_PRIO_BITS        2       /*!< armikcmu Supports 2 Bits for the Priority Levels     */
#define __Vendor_SysTickConfig  0       /*!< Set to 1 if different SysTick Config is used         */


#include "core_cm23.h"                  /*!< Cortex-M23 processor and core peripherals            */
// Note: Changed for MikroE implementation.
//#include "system_m2a23.h"               /*!< M2A23 System                                         */
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
//#include "adc_reg.h"
// Note: Changed for MikroE implementation.
//#include "pwm_reg.h"
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
//#include "uuart_reg.h"
// Note: Changed for MikroE implementation.
//#include "uspi_reg.h"
// Note: Changed for MikroE implementation.
//#include "ui2c_reg.h"
// Note: Changed for MikroE implementation.
//#include "canfd_reg.h"


/******************************************************************************/
/*                         Peripheral memory map                              */
/******************************************************************************/
/** @addtogroup PERIPHERAL_BASE Peripheral Memory Base
  Memory Mapped Structure for Series Peripheral
  @{
 */
/* Peripheral and SRAM base address */
#define FLASH_BASE           ((uint32_t)0x00000000)      /*!< Flash base address      */
#define SRAM_BASE            ((uint32_t)0x20000000)      /*!< SRAM Base Address       */
#define PERIPH_BASE          ((uint32_t)0x40000000)      /*!< Peripheral Base Address */

/*!< AHB peripherals */
#define SYS_BASE               (PERIPH_BASE + 0x00000UL)
#define CLK_BASE               (PERIPH_BASE + 0x00200UL)
#define NMI_BASE               (PERIPH_BASE + 0x00300UL)
#define PA_BASE                (PERIPH_BASE + 0x04000UL)
#define PB_BASE                (PERIPH_BASE + 0x04040UL)
#define PC_BASE                (PERIPH_BASE + 0x04080UL)
#define PD_BASE                (PERIPH_BASE + 0x040C0UL)
#define PF_BASE                (PERIPH_BASE + 0x04140UL)
#define GPIO_INT_BASE          (PERIPH_BASE + 0x04450UL)
#define GPIO_PIN_DATA_BASE     (PERIPH_BASE + 0x04800UL)
#define PDMA0_BASE             (PERIPH_BASE + 0x08000UL)
#define PDMA_BASE              PDMA0_BASE
#define FMC_BASE               (PERIPH_BASE + 0x0C000UL)
#define CANFD0_BASE            (PERIPH_BASE + 0x20000UL)
#define CANFD1_BASE            (PERIPH_BASE + 0x24000UL)
#define CANFD2_BASE            (PERIPH_BASE + 0x28000UL)
#define CRC_BASE               (PERIPH_BASE + 0x31000UL)

/*!< APB0 peripherals */
#define WDT_BASE               (PERIPH_BASE + 0x40000UL)
#define TIMER0_BASE            (PERIPH_BASE + 0x50000UL)
#define TIMER1_BASE            (PERIPH_BASE + 0x50100UL)
#define BPWM0_BASE             (PERIPH_BASE + 0x5A000UL)
#define PWM0_BASE              (PERIPH_BASE + 0x5C000UL)
#define UART0_BASE             (PERIPH_BASE + 0x70000UL)
#define I2C0_BASE              (PERIPH_BASE + 0x80000UL)
#define LLSI0_BASE             (PERIPH_BASE + 0x94000UL)
#define WWDT_BASE              (PERIPH_BASE + 0x96000UL)
#define USCI0_BASE             (PERIPH_BASE + 0xD0000UL)

/*!< APB1 peripherals */
#define ADC0_BASE              (PERIPH_BASE + 0x43000UL)
#define ACMP01_BASE            (PERIPH_BASE + 0x45000UL)
#define TIMER2_BASE            (PERIPH_BASE + 0x51000UL)
#define TIMER3_BASE            (PERIPH_BASE + 0x51100UL)
#define SPI0_BASE              (PERIPH_BASE + 0x61000UL)
#define UART1_BASE             (PERIPH_BASE + 0x71000UL)
#define LLSI1_BASE             (PERIPH_BASE + 0x95000UL)
#define USCI1_BASE             (PERIPH_BASE + 0xD1000UL)


#define APB1_BASE             ((     uint32_t)0x40000000)
#define DAC0_BASE             (APB1_BASE     + 0xF0000UL)                 /*!< DAC0 Base Address                                */


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
#define GPIO                ((GPIO_INT_T *) GPIO_INT_BASE)              /*!< Interrupt Control Configuration Struct                 */

#define UART0               ((UART_T *) UART0_BASE)                     /*!< UART0 Configuration Struct                       */
#define UART1               ((UART_T *) UART1_BASE)                     /*!< UART1 Configuration Struct                       */

#define TIMER0              ((TIMER_T *) TIMER0_BASE)                   /*!< TIMER0 Configuration Struct                      */
#define TIMER1              ((TIMER_T *) TIMER1_BASE)                   /*!< TIMER1 Configuration Struct                      */
#define TIMER2              ((TIMER_T *) TIMER2_BASE)                   /*!< TIMER2 Configuration Struct                      */
#define TIMER3              ((TIMER_T *) TIMER3_BASE)                   /*!< TIMER3 Configuration Struct                      */

#define WDT                 ((WDT_T *) WDT_BASE)                        /*!< Watch Dog Timer Configuration Struct             */

#define WWDT                ((WWDT_T *) WWDT_BASE)                      /*!< Window Watch Dog Timer Configuration Struct      */

#define SPI0                ((SPI_T *) SPI0_BASE)                       /*!< SPI0 Configuration Struct                        */

#define I2C0                ((I2C_T *) I2C0_BASE)                       /*!< I2C0 Configuration Struct                        */
#define I2C                 I2C0

#define ADC0                ((ADC_T *) ADC0_BASE)                       /*!< ADC0 Configuration Struct                        */
#define ADC                 ADC0                                        /*!< ADC Configuration Struct                         */

#define CLK                 ((CLK_T *) CLK_BASE)                        /*!< System Clock Controller Configuration Struct     */

#define SYS                 ((SYS_T *) SYS_BASE)                        /*!< System Global Controller Configuration Struct    */

#define NMI                 ((NMI_T *) NMI_BASE)                        /*!< Interrupt Source Controller Configuration Struct */

#define FMC                 ((FMC_T *) FMC_BASE)                        /*!< Flash Memory Controller */

#define BPWM0               ((BPWM_T *) BPWM0_BASE)                     /*!< BPWM0 Configuration Struct                        */
#define BPWM1               ((BPWM_T *) BPWM1_BASE)                     /*!< BPWM1 Configuration Struct                        */
#define BPWM2               ((BPWM_T *) BPWM2_BASE)                     /*!< BPWM2 Configuration Struct                        */
#define BPWM3               ((BPWM_T *) BPWM3_BASE)                     /*!< BPWM3 Configuration Struct                        */

#define PWM0                ((PWM_T *) PWM0_BASE)                       /*!< PWM0 Configuration Struct                         */

#define CRC                 ((CRC_T *) CRC_BASE)                        /*!< CRC Configuration Struct                          */

#define PDMA                ((PDMA_T *) PDMA_BASE)                      /*!< PDMA Configuration Struct                         */
#define PDMA0               PDMA

#define LLSI0               ((LLSI_T *) LLSI0_BASE)                     /*!< LLSI0 Configuration Struct                        */
#define LLSI1               ((LLSI_T *) LLSI1_BASE)                     /*!< LLSI1 Configuration Struct                        */

#define ACMP01              ((ACMP_T *) ACMP01_BASE)                    /*!< ACMP01 Configuration Struct                       */

#define DAC0                ((DAC_T *) DAC0_BASE)                       /*!< DAC0 Configuration Struct                         */
#define DAC1                ((DAC_T *) DAC1_BASE)                       /*!< DAC1 Configuration Struct                         */
#define DAC2                ((DAC_T *) DAC2_BASE)                       /*!< DAC2 Configuration Struct                         */
#define DAC3                ((DAC_T *) DAC3_BASE)                       /*!< DAC3 Configuration Struct                         */

#define I3CS0           	  ((I3CS_T *) I3CS0_BASE)                 	/*!< I3CS0 Configuration Struct                        */
#define I3CS1             	((I3CS_T *) I3CS1_BASE)                  	/*!< I3CS1 Configuration Struct                        */

#define SPDH                ((SPDH_T *) SPDH_BASE)                      /*!< SPDH Configuration Struct                         */

#define UUART0              ((UUART_T *) USCI0_BASE)                    /*!< UUART0 Configuration Struct                       */
#define UUART1              ((UUART_T *) USCI1_BASE)                    /*!< UUART1 Configuration Struct                       */

#define USPI0               ((USPI_T *) USCI0_BASE)                     /*!< USPI0 Configuration Struct                       */
#define USPI1               ((USPI_T *) USCI1_BASE)                     /*!< USPI1 Configuration Struct                       */

#define UI2C0                ((UI2C_T *) USCI0_BASE)                    /*!< UI2C0 Configuration Struct                       */
#define UI2C1                ((UI2C_T *) USCI1_BASE)                    /*!< UI2C1 Configuration Struct                       */

#define CANFD0              ((CANFD_T *) CANFD0_BASE)                   /*!< CANFD0 Configuration Struct                      */
#define CANFD1              ((CANFD_T *) CANFD1_BASE)                   /*!< CANFD1 Configuration Struct                      */
#define CANFD2              ((CANFD_T *) CANFD2_BASE)                   /*!< CANFD2 Configuration Struct                      */

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
//#include "pwm.h"
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
//#include "pdma.h"
// Note: Changed for MikroE implementation.
//#include "llsi.h"
// Note: Changed for MikroE implementation.
//#include "dac.h"
// Note: Changed for MikroE implementation.
//#include "acmp.h"
// Note: Changed for MikroE implementation.
//#include "usci_uart.h"
// Note: Changed for MikroE implementation.
//#include "usci_spi.h"
// Note: Changed for MikroE implementation.
//#include "usci_i2c.h"
// Note: Changed for MikroE implementation.
//#include "canfd.h"
#endif // __M2A23_H__
