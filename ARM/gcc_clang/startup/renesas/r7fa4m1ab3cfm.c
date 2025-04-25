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
#define BSP_CORTEX_VECTOR_TABLE_ENTRIES (16)
#define BSP_CFG_STACK_MAIN_BYTES        (0x400)
// EOF Note.

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
BSP_SECTION_FLASH_GAP void Reset_Handler (void)
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
BSP_SECTION_FLASH_GAP void Default_Handler (void)
{
    /** A error has occurred. The user will need to investigate the cause. Common problems are stack corruption
     *  or use of an invalid pointer. Use the Fault Status window in e2 studio or manually check the fault status
     *  registers for more information.
     */
    BSP_CFG_HANDLE_UNRECOVERABLE_ERROR(0);
}

/* Main stack */
static uint8_t g_main_stack[BSP_CFG_STACK_MAIN_BYTES + BSP_TZ_STACK_SEAL_SIZE] BSP_ALIGN_VARIABLE(BSP_STACK_ALIGNMENT)
BSP_PLACE_IN_SECTION(BSP_SECTION_STACK);

/* Heap */
#if (BSP_CFG_HEAP_BYTES > 0)

BSP_DONT_REMOVE static uint8_t g_heap[BSP_CFG_HEAP_BYTES] BSP_ALIGN_VARIABLE(BSP_STACK_ALIGNMENT) \
    BSP_PLACE_IN_SECTION(BSP_SECTION_HEAP);
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

/* Vector table. */
BSP_DONT_REMOVE const exc_ptr_t __Vectors[BSP_CORTEX_VECTOR_TABLE_ENTRIES] BSP_PLACE_IN_SECTION(
    BSP_SECTION_FIXED_VECTORS) =
{
    (exc_ptr_t) (&g_main_stack[0] + BSP_CFG_STACK_MAIN_BYTES), /*      Initial Stack Pointer     */
    Reset_Handler,                                             /*      Reset Handler             */
    NMI_Handler,                                               /*      NMI Handler               */
    HardFault_Handler,                                         /*      Hard Fault Handler        */
    MemManage_Handler,                                         /*      MPU Fault Handler         */
    BusFault_Handler,                                          /*      Bus Fault Handler         */
    UsageFault_Handler,                                        /*      Usage Fault Handler       */
    SecureFault_Handler,                                       /*      Secure Fault Handler      */
    0,                                                         /*      Reserved                  */
    0,                                                         /*      Reserved                  */
    0,                                                         /*      Reserved                  */
    SVC_Handler,                                               /*      SVCall Handler            */
    DebugMon_Handler,                                          /*      Debug Monitor Handler     */
    0,                                                         /*      Reserved                  */
    PendSV_Handler,                                            /*      PendSV Handler            */
    SysTick_Handler,                                           /*      SysTick Handler           */
};

/** @} (end addtogroup BSP_MCU) */
