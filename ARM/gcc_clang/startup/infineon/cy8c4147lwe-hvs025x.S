/*
******************************************************************************
**
** @file        : cy8c4147lwe-hvs025x.S
** @author      : MikroElektronika
** @brief       : Startup file for CY8C4147LWE-HVS025X Device
**                Core: ARM Cortex-M0+
**                Interrupt vector table generated from the device header IRQn_Type.
**                PSOC 4 HV MS 128K (psoc4hvms128k), CPU max 48 MHz.
**                SRAM ECC: the whole SRAM is cleared at reset.
**
**  Target      : INFINEON CY8C4147LWE-HVS025X
**
**  Distribution: The file is distributed as is, without any warranty
**                of any kind.
**
******************************************************************************
** @attention
**
** Copyright (c) ${COPYRIGHT_YEAR_MIKROE} MikroElektronika.
** All rights reserved.
**
** This software is licensed under terms that can be found in the LICENSE file
** in the root directory of this software component.
** If no LICENSE file comes with this software, it is provided AS-IS.
**
******************************************************************************
*/
                .syntax  unified
                .arch    armv6-m

                .section .vectors, "a", %progbits
                .align   2
                .globl   __Vectors
                .globl   __Vectors_End
                .globl   __Vectors_Size
__Vectors:
                .long    __StackTop                         /*     Top of Stack */
                .long    Reset_Handler                      /*     Reset Handler */
                .long    NMI_Handler                        /* -14 NMI Handler */
                .long    HardFault_Handler                  /* -13 Hard Fault Handler */
                .long    0                                  /*     Reserved */
                .long    0                                  /*     Reserved */
                .long    0                                  /*     Reserved */
                .long    0                                  /*     Reserved */
                .long    0                                  /*     Reserved */
                .long    0                                  /*     Reserved */
                .long    0                                  /*     Reserved */
                .long    SVC_Handler                        /*  -5 SVCall Handler */
                .long    0                                  /*     Reserved */
                .long    0                                  /*     Reserved */
                .long    PendSV_Handler                     /*  -2 PendSV Handler */
                .long    SysTick_Handler                    /*  -1 SysTick Handler */

                /* Interrupts */
                .long    srss_interrupt_srss_IRQHandler     /*   0 srss_interrupt_srss */
                .long    srss_wdt_irq_IRQHandler            /*   1 srss_wdt_irq */
                .long    ioss_interrupt_gpio_IRQHandler     /*   2 ioss_interrupt_gpio */
                .long    ioss_interrupts_gpio_0_IRQHandler  /*   3 ioss_interrupts_gpio_0 */
                .long    ioss_interrupts_gpio_1_IRQHandler  /*   4 ioss_interrupts_gpio_1 */
                .long    ioss_interrupts_gpio_2_IRQHandler  /*   5 ioss_interrupts_gpio_2 */
                .long    hvss_interrupt_hvss_IRQHandler     /*   6 hvss_interrupt_hvss */
                .long    lpcomp_interrupt_IRQHandler        /*   7 lpcomp_interrupt */
                .long    scb_0_interrupt_IRQHandler         /*   8 scb_0_interrupt */
                .long    scb_1_interrupt_IRQHandler         /*   9 scb_1_interrupt */
                .long    pass_0_interrupt_ctbs_IRQHandler   /*  10 pass_0_interrupt_ctbs */
                .long    scb_2_interrupt_IRQHandler         /*  11 scb_2_interrupt */
                .long    scb_3_interrupt_IRQHandler         /*  12 scb_3_interrupt */
                .long    cpuss_interrupt_dma_IRQHandler     /*  13 cpuss_interrupt_dma */
                .long    cpuss_interrupt_spcif_IRQHandler   /*  14 cpuss_interrupt_spcif */
                .long    cpuss_interrupt_fault_0_IRQHandler /*  15 cpuss_interrupt_fault_0 */
                .long    cpuss_interrupt_fault_1_IRQHandler /*  16 cpuss_interrupt_fault_1 */
                .long    lin_interrupts_0_IRQHandler        /*  17 lin_interrupts_0 */
                .long    lin_interrupts_1_IRQHandler        /*  18 lin_interrupts_1 */
                .long    tcpwm_interrupts_0_IRQHandler      /*  19 tcpwm_interrupts_0 */
                .long    tcpwm_interrupts_1_IRQHandler      /*  20 tcpwm_interrupts_1 */
                .long    tcpwm_interrupts_2_IRQHandler      /*  21 tcpwm_interrupts_2 */
                .long    tcpwm_interrupts_3_IRQHandler      /*  22 tcpwm_interrupts_3 */
                .long    tcpwm_interrupts_4_IRQHandler      /*  23 tcpwm_interrupts_4 */
                .long    pass_0_interrupt_sar_IRQHandler    /*  24 pass_0_interrupt_sar */
                .long    msc_0_interrupt_IRQHandler         /*  25 msc_0_interrupt */
                .long    cxpi_interrupts_0_IRQHandler       /*  26 cxpi_interrupts_0 */
                .long    cxpi_interrupts_1_IRQHandler       /*  27 cxpi_interrupts_1 */
                .long    tcpwm_interrupts_5_IRQHandler      /*  28 tcpwm_interrupts_5 */
                .long    tcpwm_interrupts_6_IRQHandler      /*  29 tcpwm_interrupts_6 */
                .long    tcpwm_interrupts_7_IRQHandler      /*  30 tcpwm_interrupts_7 */
__Vectors_End:
                .equ     __Vectors_Size, __Vectors_End - __Vectors
                .size    __Vectors, . - __Vectors


                .thumb
                .section .text.Reset_Handler, "ax", %progbits
                .align   2

                .thumb_func
                .type    Reset_Handler, %function
                .globl   Reset_Handler
                .fnstart
Reset_Handler:
                /* SRAM has ECC: every SRAM word must be written before it is read
                 * (or partially written, which is a read-modify-write). Clear the
                 * whole SRAM before the stack and the RAM sections are used. */
                ldr      r0, =0x20000000
                ldr      r1, =0x20004000
                movs     r2, #0
.L_sram_init:
                str      r2, [r0]
                adds     r0, #4
                cmp      r0, r1
                blo      .L_sram_init

                ldr      r4, =__copy_table_start__
                ldr      r5, =__copy_table_end__

.L_loop0:
                cmp      r4, r5
                bge      .L_loop0_done
                ldr      r1, [r4]
                ldr      r2, [r4, #4]
                ldr      r3, [r4, #8]

.L_loop0_0:
                subs     r3, #4
                blt      .L_loop0_0_done
                ldr      r0, [r1, r3]
                str      r0, [r2, r3]
                b        .L_loop0_0
.L_loop0_0_done:

                adds     r4, #12
                b        .L_loop0
.L_loop0_done:

                ldr      r3, =__zero_table_start__
                ldr      r4, =__zero_table_end__

.L_loop2:
                cmp      r3, r4
                bge      .L_loop2_done
                ldr      r1, [r3]
                ldr      r2, [r3, #4]
                movs     r0, 0

.L_loop2_0:
                subs     r2, #4
                blt      .L_loop2_0_done
                str      r0, [r1, r2]
                b        .L_loop2_0
.L_loop2_0_done:

                adds     r3, #8
                b        .L_loop2
.L_loop2_done:

                /* Clock system initialization (init_clock.c) */
                bl       SystemInit

                /* Static constructors */
                bl       __libc_init_array

                bl       main

.L_hang:
                b        .L_hang

                .pool
                .fnend
                .size    Reset_Handler, . - Reset_Handler

                .section .text.Default_Handler, "ax", %progbits
                .align   2
/* The default macro is not used for HardFault_Handler
 * because this results in a poor debug illusion.
 */
                .thumb_func
                .type    HardFault_Handler, %function
                .weak    HardFault_Handler
                .fnstart
HardFault_Handler:
                b        .
                .fnend
                .size    HardFault_Handler, . - HardFault_Handler

                .thumb_func
                .type    Default_Handler, %function
                .weak    Default_Handler
                .fnstart
Default_Handler:
                b        .
                .fnend
                .size    Default_Handler, . - Default_Handler

/* Macro to define default exception/interrupt handlers.
 * Default handler are weak symbols with an endless loop.
 * They can be overwritten by real handlers.
 */
                .macro   Set_Default_Handler  Handler_Name
                .weak    \Handler_Name
                .set     \Handler_Name, Default_Handler
                .endm


/* Default exception/interrupt handler */
                Set_Default_Handler  NMI_Handler
                Set_Default_Handler  SVC_Handler
                Set_Default_Handler  PendSV_Handler
                Set_Default_Handler  SysTick_Handler

                Set_Default_Handler  srss_interrupt_srss_IRQHandler
                Set_Default_Handler  srss_wdt_irq_IRQHandler
                Set_Default_Handler  ioss_interrupt_gpio_IRQHandler
                Set_Default_Handler  ioss_interrupts_gpio_0_IRQHandler
                Set_Default_Handler  ioss_interrupts_gpio_1_IRQHandler
                Set_Default_Handler  ioss_interrupts_gpio_2_IRQHandler
                Set_Default_Handler  hvss_interrupt_hvss_IRQHandler
                Set_Default_Handler  lpcomp_interrupt_IRQHandler
                Set_Default_Handler  scb_0_interrupt_IRQHandler
                Set_Default_Handler  scb_1_interrupt_IRQHandler
                Set_Default_Handler  pass_0_interrupt_ctbs_IRQHandler
                Set_Default_Handler  scb_2_interrupt_IRQHandler
                Set_Default_Handler  scb_3_interrupt_IRQHandler
                Set_Default_Handler  cpuss_interrupt_dma_IRQHandler
                Set_Default_Handler  cpuss_interrupt_spcif_IRQHandler
                Set_Default_Handler  cpuss_interrupt_fault_0_IRQHandler
                Set_Default_Handler  cpuss_interrupt_fault_1_IRQHandler
                Set_Default_Handler  lin_interrupts_0_IRQHandler
                Set_Default_Handler  lin_interrupts_1_IRQHandler
                Set_Default_Handler  tcpwm_interrupts_0_IRQHandler
                Set_Default_Handler  tcpwm_interrupts_1_IRQHandler
                Set_Default_Handler  tcpwm_interrupts_2_IRQHandler
                Set_Default_Handler  tcpwm_interrupts_3_IRQHandler
                Set_Default_Handler  tcpwm_interrupts_4_IRQHandler
                Set_Default_Handler  pass_0_interrupt_sar_IRQHandler
                Set_Default_Handler  msc_0_interrupt_IRQHandler
                Set_Default_Handler  cxpi_interrupts_0_IRQHandler
                Set_Default_Handler  cxpi_interrupts_1_IRQHandler
                Set_Default_Handler  tcpwm_interrupts_5_IRQHandler
                Set_Default_Handler  tcpwm_interrupts_6_IRQHandler
                Set_Default_Handler  tcpwm_interrupts_7_IRQHandler

                .end
