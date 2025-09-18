/**************************************************************************//**
 * @file     startup_ARMCM0plus.S
 * @brief    CMSIS-Core(M) Device Startup File for Cortex-M0plus Device
 * @version  V2.2.0
 * @2025-10-07     26. May 2021
 ******************************************************************************/
/*
 * Copyright (c) 2009-2021 Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

                .syntax  unified
                .arch    armv6-m

                .section .vectors
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
                .long    ioss_interrupts_gpio_0_Handler
                .long    ioss_interrupts_gpio_1_Handler
                .long    ioss_interrupts_gpio_2_Handler
                .long    ioss_interrupts_gpio_3_Handler
                .long    ioss_interrupt_gpio_Handler
                .long    lpcomp_interrupt_Handler
                .long    srss_interrupt_wdt_Handler
                .long    scb_0_interrupt_Handler
                .long    scb_1_interrupt_Handler
                .long    scb_2_interrupt_Handler
                .long    scb_3_interrupt_Handler
                .long    scb_4_interrupt_Handler
                .long    pass_0_interrupt_ctbs_Handler
                .long    pass_1_interrupt_ctbs_Handler
                .long    wco_interrupt_Handler
                .long    cpuss_interrupt_dma_Handler
                .long    cpuss_interrupt_spcif_Handler
                .long    csd_interrupt_Handler
                .long    tcpwm_interrupts_0_Handler
                .long    tcpwm_interrupts_1_Handler
                .long    tcpwm_interrupts_2_Handler
                .long    tcpwm_interrupts_3_Handler
                .long    tcpwm_interrupts_4_Handler
                .long    tcpwm_interrupts_5_Handler
                .long    tcpwm_interrupts_6_Handler
                .long    tcpwm_interrupts_7_Handler
                .long    pass_0_interrupt_sar_Handler
                .long    pass_1_interrupt_sar_Handler
                .long    exco_interrupt_Handler
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    0
                .long    unconnected_Handler

                .space   ( 22 * 4)                          /* Interrupts 10 .. 31 are left out */
__Vectors_End:
                .equ     __Vectors_Size, __Vectors_End - __Vectors
                .size    __Vectors, . - __Vectors


                .thumb
                .section .text
                .align   2

                .thumb_func
                .type    Reset_Handler, %function
                .globl   Reset_Handler
                .fnstart
Reset_Handler:
                bl       SystemInit

                ldr      r4, =__copy_table_start__
                ldr      r5, =__copy_table_end__

.L_loop0:
                cmp      r4, r5
                bge      .L_loop0_done
                ldr      r1, [r4]                /* source address */
                ldr      r2, [r4, #4]            /* destination address */
                ldr      r3, [r4, #8]            /* word count */
                lsls     r3, r3, #2              /* byte count */

.L_loop0_0:
                subs     r3, #4                  /* decrement byte count */
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
                ldr      r1, [r3]                /* destination address */
                ldr      r2, [r3, #4]            /* word count */
                lsls     r2, r2, #2              /* byte count */
                movs     r0, 0

.L_loop2_0:
                subs     r2, #4                  /* decrement byte count */
                blt      .L_loop2_0_done
                str      r0, [r1, r2]
                b        .L_loop2_0
.L_loop2_0_done:

                adds     r3, #8
                b        .L_loop2
.L_loop2_done:

                bl       _start

                .fnend
                .size    Reset_Handler, . - Reset_Handler

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

                Set_Default_Handler   ioss_interrupts_gpio_0_Handler
                Set_Default_Handler   ioss_interrupts_gpio_1_Handler
                Set_Default_Handler   ioss_interrupts_gpio_2_Handler
                Set_Default_Handler   ioss_interrupts_gpio_3_Handler
                Set_Default_Handler   ioss_interrupt_gpio_Handler
                Set_Default_Handler   lpcomp_interrupt_Handler
                Set_Default_Handler   srss_interrupt_wdt_Handler
                Set_Default_Handler   scb_0_interrupt_Handler
                Set_Default_Handler   scb_1_interrupt_Handler
                Set_Default_Handler   scb_2_interrupt_Handler
                Set_Default_Handler   scb_3_interrupt_Handler
                Set_Default_Handler   scb_4_interrupt_Handler
                Set_Default_Handler   pass_0_interrupt_ctbs_Handler
                Set_Default_Handler   pass_1_interrupt_ctbs_Handler
                Set_Default_Handler   wco_interrupt_Handler
                Set_Default_Handler   cpuss_interrupt_dma_Handler
                Set_Default_Handler   cpuss_interrupt_spcif_Handler
                Set_Default_Handler   csd_interrupt_Handler
                Set_Default_Handler   tcpwm_interrupts_0_Handler
                Set_Default_Handler   tcpwm_interrupts_1_Handler
                Set_Default_Handler   tcpwm_interrupts_2_Handler
                Set_Default_Handler   tcpwm_interrupts_3_Handler
                Set_Default_Handler   tcpwm_interrupts_4_Handler
                Set_Default_Handler   tcpwm_interrupts_5_Handler
                Set_Default_Handler   tcpwm_interrupts_6_Handler
                Set_Default_Handler   tcpwm_interrupts_7_Handler
                Set_Default_Handler   pass_0_interrupt_sar_Handler
                Set_Default_Handler   pass_1_interrupt_sar_Handler
                Set_Default_Handler   exco_interrupt_Handler
                Set_Default_Handler   unconnected_Handler


                .end














































