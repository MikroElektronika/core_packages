/*
* Copyright (c) 2020 - 2025 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/*******************************************************************************************************************//**
 * @addtogroup BSP_MCU
 * @{
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Includes   <System Includes> , "Project Includes"
 **********************************************************************************************************************/
// Note: Changed for MikroE implementation.
// #include "bsp_api.h"

// Note: Added for MikroE implementation.
#include <stdint.h>
#define BSP_CFG_HANDLE_UNRECOVERABLE_ERROR(x)    while(1)
#define BSP_UNINIT_SECTION_PREFIX
#ifndef BSP_SECTION_HEAP
#define BSP_SECTION_HEAP                 ".heap"
#endif
#define BSP_DONT_REMOVE                 __attribute__((used))
#define BSP_ATTRIBUTE_STACKLESS         __attribute__((naked))
#define BSP_FORCE_INLINE                __attribute__((always_inline))
#define BSP_SECTION_STACK               BSP_UNINIT_SECTION_PREFIX ".stack"
#define BSP_SECTION_FLASH_GAP
#define BSP_SECTION_NOINIT              BSP_UNINIT_SECTION_PREFIX ".noinit"
#define BSP_SECTION_FIXED_VECTORS       ".fixed_vectors"
#define BSP_SECTION_APPLICATION_VECTORS ".application_vectors"
#define BSP_SECTION_ROM_REGISTERS       ".rom_registers"
#define BSP_SECTION_ID_CODE             ".id_code"
#define BSP_PLACE_IN_SECTION(x)         __attribute__((section(x))) __attribute__((__used__))
#define BSP_ALIGN_VARIABLE(x)           __attribute__((aligned(x)))
#define BSP_PACKED                      __attribute__((aligned(1))) // DEPRECATED
#define BSP_WEAK_REFERENCE              __attribute__((weak))
#define BSP_STACK_ALIGNMENT             (8)
#define BSP_CORTEX_VECTOR_TABLE_ENTRIES (16U)
#define BSP_CFG_STACK_MAIN_BYTES        (0x400)

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/
#if BSP_TZ_SECURE_BUILD
 #define BSP_TZ_STACK_SEAL_SIZE    (8U)
#else
 #define BSP_TZ_STACK_SEAL_SIZE    (0U)
#endif

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/* Defines function pointers to be used with vector table. */
typedef void (* exc_ptr_t)(void);

/***********************************************************************************************************************
 * Exported global variables (to be accessed by other files)
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Private global variables and functions
 **********************************************************************************************************************/
void    Reset_Handler(void);
void    Default_Handler(void);
int32_t main(void);

/*******************************************************************************************************************//**
 * MCU starts executing here out of reset. Main stack pointer is set up already.
 **********************************************************************************************************************/
void Reset_Handler (void)
{
    /* Initialize system using BSP. */
    SystemInit();

    /* Call user application. */
    main();

    while (1)
    {
        /* Infinite Loop. */
    }
}

/*******************************************************************************************************************//**
 * Default exception handler.
 **********************************************************************************************************************/
void Default_Handler (void)
{
    /** A error has occurred. The user will need to investigate the cause. Common problems are stack corruption
     *  or use of an invalid pointer. Use the Fault Status window in e2 studio or manually check the fault status
     *  registers for more information.
     */
    BSP_CFG_HANDLE_UNRECOVERABLE_ERROR(0);
}

/* Main stack */
uint8_t g_main_stack[BSP_CFG_STACK_MAIN_BYTES + BSP_TZ_STACK_SEAL_SIZE] BSP_ALIGN_VARIABLE(BSP_STACK_ALIGNMENT);

/* Heap */
// Note: Added for MikroE implementation.
#if (BSP_CFG_HEAP_BYTES > 0)
    BSP_DONT_REMOVE uint8_t g_heap[BSP_CFG_HEAP_BYTES] BSP_ALIGN_VARIABLE(BSP_STACK_ALIGNMENT);
#endif

/* All system exceptions in the vector table are weak references to Default_Handler. If the user wishes to handle
 * these exceptions in their code they should define their own function with the same name.
 */
#if defined(__ICCARM__)
 #define WEAK_REF_ATTRIBUTE

 #pragma weak HardFault_Handler                        = Default_Handler
 #pragma weak MemManage_Handler                        = Default_Handler
 #pragma weak BusFault_Handler                         = Default_Handler
 #pragma weak UsageFault_Handler                       = Default_Handler
 #pragma weak SecureFault_Handler                      = Default_Handler
 #pragma weak SVC_Handler                              = Default_Handler
 #pragma weak DebugMon_Handler                         = Default_Handler
 #pragma weak PendSV_Handler                           = Default_Handler
 #pragma weak SysTick_Handler                          = Default_Handler
#elif defined(__GNUC__)

 #define WEAK_REF_ATTRIBUTE    __attribute__((weak, alias("Default_Handler")))
#endif

// Note: Changed for MikroE implementation.
// void NMI_Handler(void);                // NMI has many sources and is handled by BSP
void NMI_Handler(void) WEAK_REF_ATTRIBUTE;
void HardFault_Handler(void) WEAK_REF_ATTRIBUTE;
void MemManage_Handler(void) WEAK_REF_ATTRIBUTE;
void BusFault_Handler(void) WEAK_REF_ATTRIBUTE;
void UsageFault_Handler(void) WEAK_REF_ATTRIBUTE;
void SecureFault_Handler(void) WEAK_REF_ATTRIBUTE;
void SVC_Handler(void) WEAK_REF_ATTRIBUTE;
void DebugMon_Handler(void) WEAK_REF_ATTRIBUTE;
void PendSV_Handler(void) WEAK_REF_ATTRIBUTE;
void SysTick_Handler(void) WEAK_REF_ATTRIBUTE;
void IWDT_UNDERFLOW(void) WEAK_REF_ATTRIBUTE;
void LVD_LVD1(void) WEAK_REF_ATTRIBUTE;
void PORT_IRQ0(void) WEAK_REF_ATTRIBUTE;
void PORT_IRQ1(void) WEAK_REF_ATTRIBUTE;
void PORT_IRQ2(void) WEAK_REF_ATTRIBUTE;
void PORT_IRQ3(void) WEAK_REF_ATTRIBUTE;
void PORT_IRQ4(void) WEAK_REF_ATTRIBUTE;
void PORT_IRQ5(void) WEAK_REF_ATTRIBUTE;
void PORT_IRQ6(void) WEAK_REF_ATTRIBUTE;
void PORT_IRQ7(void) WEAK_REF_ATTRIBUTE;
void DTC_COMPLETE(void) WEAK_REF_ATTRIBUTE;
void FCU_FRDYI(void) WEAK_REF_ATTRIBUTE;
void SAU1_UART_TXI2(void) WEAK_REF_ATTRIBUTE;
void SAU1_UART_RXI2(void) WEAK_REF_ATTRIBUTE;
void SAU1_UART_ERRI2(void) WEAK_REF_ATTRIBUTE;
void ELC_SWEVT0(void) WEAK_REF_ATTRIBUTE;
void ELC_SWEVT1(void) WEAK_REF_ATTRIBUTE;
void TRNG_RDREQ(void) WEAK_REF_ATTRIBUTE;
void SAU0_UART_TXI0(void) WEAK_REF_ATTRIBUTE;
void TAU0_TMI00(void) WEAK_REF_ATTRIBUTE;
void SAU0_UART_ERRI0(void) WEAK_REF_ATTRIBUTE;
void TAU0_TMI01H(void) WEAK_REF_ATTRIBUTE;
void SAU0_UART_TXI1(void) WEAK_REF_ATTRIBUTE;
void SAU0_UART_RXI1(void) WEAK_REF_ATTRIBUTE;
void SAU0_UART_ERRI1(void) WEAK_REF_ATTRIBUTE;
void TAU0_TMI03H(void) WEAK_REF_ATTRIBUTE;
void IICA0_TXRXI(void) WEAK_REF_ATTRIBUTE;
void SAU0_UART_RXI0(void) WEAK_REF_ATTRIBUTE;
void TAU0_TMI01(void) WEAK_REF_ATTRIBUTE;
void TAU0_TMI02(void) WEAK_REF_ATTRIBUTE;
void TAU0_TMI03(void) WEAK_REF_ATTRIBUTE;
void ADC0_SCAN_END(void) WEAK_REF_ATTRIBUTE;
void RTC_ALARM_OR_PERIOD(void) WEAK_REF_ATTRIBUTE;
void TML0_ITL_OR(void) WEAK_REF_ATTRIBUTE;
void TML0_ITL0(void) WEAK_REF_ATTRIBUTE;
void TAU0_TMI04(void) WEAK_REF_ATTRIBUTE;
void TAU0_TMI05(void) WEAK_REF_ATTRIBUTE;
void TAU0_TMI06(void) WEAK_REF_ATTRIBUTE;
void TAU0_TMI07(void) WEAK_REF_ATTRIBUTE;
void UARTA0_ERRI(void) WEAK_REF_ATTRIBUTE;
void UARTA0_TXI(void) WEAK_REF_ATTRIBUTE;
void UARTA0_RXI(void) WEAK_REF_ATTRIBUTE;
void IICA1_TXRXI(void) WEAK_REF_ATTRIBUTE;
void UARTA1_ERRI(void) WEAK_REF_ATTRIBUTE;
void UARTA1_TXI(void) WEAK_REF_ATTRIBUTE;
void UARTA1_RXI(void) WEAK_REF_ATTRIBUTE;
void CTSU_CTSUWR(void) WEAK_REF_ATTRIBUTE;
void CTSU_CTSURD(void) WEAK_REF_ATTRIBUTE;
void CTSU_CTSUFN(void) WEAK_REF_ATTRIBUTE;

/* Vector table. */
BSP_DONT_REMOVE const exc_ptr_t __Vectors[] BSP_PLACE_IN_SECTION(
    BSP_SECTION_FIXED_VECTORS) =
{
    (exc_ptr_t) (&g_main_stack[0] + BSP_CFG_STACK_MAIN_BYTES), /* Initial Stack Pointer                                       */
    Reset_Handler,                                             /* Reset Handler                                               */
    NMI_Handler,                                               /* NMI Handler                                                 */
    HardFault_Handler,                                         /* Hard Fault Handler                                          */
    MemManage_Handler,                                         /* MPU Fault Handler                                           */
    BusFault_Handler,                                          /* Bus Fault Handler                                           */
    UsageFault_Handler,                                        /* Usage Fault Handler                                         */
    SecureFault_Handler,                                       /* Secure Fault Handler                                        */
    0,                                                         /* Reserved                                                    */
    0,                                                         /* Reserved                                                    */
    0,                                                         /* Reserved                                                    */
    SVC_Handler,                                               /* SVCall Handler                                              */
    DebugMon_Handler,                                          /* Debug Monitor Handler                                       */
    0,                                                         /* Reserved                                                    */
    PendSV_Handler,                                            /* PendSV Handler                                              */
    SysTick_Handler,                                           /* SysTick Handler                                             */
    IWDT_UNDERFLOW,                                            /* IWDT underflow                                              */
    LVD_LVD1,                                                  /* Voltage monitor 1 interrupt                                 */
    PORT_IRQ0,                                                 /* External pin interrupt 0                                    */
    PORT_IRQ1,                                                 /* External pin interrupt 1                                    */
    PORT_IRQ2,                                                 /* External pin interrupt 2                                    */
    PORT_IRQ3,                                                 /* External pin interrupt 3                                    */
    PORT_IRQ4,                                                 /* External pin interrupt 4                                    */
    PORT_IRQ5,                                                 /* External pin interrupt 5                                    */
    PORT_IRQ6,                                                 /* External pin interrupt 6                                    */
    PORT_IRQ7,                                                 /* External pin interrupt 7                                    */
    DTC_COMPLETE,                                              /* DTC transfer complete                                       */
    FCU_FRDYI,                                                 /* Flash ready interrupt                                       */
    SAU1_UART_TXI2,                                            /* SAU UART TX 2/I2C 20/SPI 20                                 */
    SAU1_UART_RXI2,                                            /* SAU UART RX 2/I2C 21/SPI 21                                 */
    SAU1_UART_ERRI2,                                           /* SAU UART Error                                              */
    ELC_SWEVT0,                                                /* Software event 0                                            */
    ELC_SWEVT1,                                                /* Software event 1                                            */
    TRNG_RDREQ,                                                /* TRNG Read Request                                           */
    SAU0_UART_TXI0,                                            /* SAU UART TX 0/I2C 00/SPI 00                                 */
    TAU0_TMI00,                                                /* End of timer channel 00 count or capture                    */
    SAU0_UART_ERRI0,                                           /* SAU UART Error                                              */
    TAU0_TMI01H,                                               /* End of timer channel 01 count or capture (higher operation) */
    SAU0_UART_TXI1,                                            /* SAU UART TX 1/I2C 10/SPI 10                                 */
    SAU0_UART_RXI1,                                            /* SAU UART RX 1/I2C 11/SPI 11                                 */
    SAU0_UART_ERRI1,                                           /* SAU UART Error                                              */
    TAU0_TMI03H,                                               /* End of timer channel 03 count or capture (higher operation) */
    IICA0_TXRXI,                                               /* End of IICA0 communication                                  */
    SAU0_UART_RXI0,                                            /* SAU UART RX 0/I2C 01/SPI 01                                 */
    TAU0_TMI01,                                                /* End of timer channel 01 count or capture                    */
    TAU0_TMI02,                                                /* End of timer channel 02 count or capture                    */
    TAU0_TMI03,                                                /* End of timer channel 03 count or capture                    */
    ADC0_SCAN_END,                                             /* End of A/D scanning operation                               */
    RTC_ALARM_OR_PERIOD,                                       /* Alarm or Periodic interrupt                                 */
    TML0_ITL_OR,                                               /* TML timer event                                             */
    TML0_ITL0,                                                 /* TML timer0 compare-match                                    */
    TAU0_TMI04,                                                /* End of timer channel 04 count or capture                    */
    TAU0_TMI05,                                                /* End of timer channel 05 count or capture                    */
    TAU0_TMI06,                                                /* End of timer channel 06 count or capture                    */
    TAU0_TMI07,                                                /* End of timer channel 07 count or capture                    */
    UARTA0_ERRI,                                               /* UARTA0 reception communication error occurrence             */
    UARTA0_TXI,                                                /* UARTA0 transmission transfer end or buffer empty interrupt  */
    UARTA0_RXI,                                                /* UARTA0 reception transfer end                               */
    IICA1_TXRXI,                                               /* End of IICA1 communication                                  */
    UARTA1_ERRI,                                               /* UARTA1 reception communication error occurrence             */
    UARTA1_TXI,                                                /* UARTA1 transmission transfer end or buffer empty interrupt  */
    UARTA1_RXI,                                                /* UARTA1 reception transfer end                               */
    CTSU_CTSUWR,                                               /* CTSU write request interrupt                                */
    CTSU_CTSURD,                                               /* CTSU measurement data transfer request interrupt            */
    CTSU_CTSUFN,                                               /* CTSU measurement end interrupt                              */
};

/** @} (end addtogroup BSP_MCU) */
