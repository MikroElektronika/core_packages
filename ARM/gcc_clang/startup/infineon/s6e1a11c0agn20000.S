/*
******************************************************************************
**
** @file        : s6e1a11c0agn20000.S
** @author      : MikroElektronika
** @brief       : Startup file for S6E1A11C0AGN20000 Device
**                Core: ARM Cortex-M0
**                Interrupt vector table generated from the device header IRQn_Type.
**
**  Target      : INFINEON S6E1A11C0AGN20000
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
                .long    CSV_IRQHandler                     /*   0 CSV */
                .long    SWDT_IRQHandler                    /*   1 SWDT */
                .long    LVD_IRQHandler                     /*   2 LVD */
                .long    MFT0_WFG_DTIF_IRQHandler           /*   3 MFT0_WFG_DTIF */
                .long    EXINT0_7_IRQHandler                /*   4 EXINT0_7 */
                .long    0                                  /*   5 Reserved */
                .long    DT_QPRC_IRQHandler                 /*   6 DT_QPRC */
                .long    MFS0_RX_IRQHandler                 /*   7 MFS0_RX */
                .long    MFS0_TX_IRQHandler                 /*   8 MFS0_TX */
                .long    MFS1_RX_IRQHandler                 /*   9 MFS1_RX */
                .long    MFS1_TX_IRQHandler                 /*  10 MFS1_TX */
                .long    0                                  /*  11 Reserved */
                .long    0                                  /*  12 Reserved */
                .long    MFS3_RX_IRQHandler                 /*  13 MFS3_RX */
                .long    MFS3_TX_IRQHandler                 /*  14 MFS3_TX */
                .long    0                                  /*  15 Reserved */
                .long    0                                  /*  16 Reserved */
                .long    0                                  /*  17 Reserved */
                .long    0                                  /*  18 Reserved */
                .long    DMAC0_IRQHandler                   /*  19 DMAC0 */
                .long    DMAC1_IRQHandler                   /*  20 DMAC1 */
                .long    0                                  /*  21 Reserved */
                .long    0                                  /*  22 Reserved */
                .long    PPG00_02_04_08_10_12_16_18_20_IRQHandler /*  23 PPG00_02_04_08_10_12_16_18_20 */
                .long    TIM_IRQHandler                     /*  24 TIM */
                .long    ADC0_IRQHandler                    /*  25 ADC0 */
                .long    0                                  /*  26 Reserved */
                .long    0                                  /*  27 Reserved */
                .long    MFT0_FRT_IRQHandler                /*  28 MFT0_FRT */
                .long    MFT0_ICU_IRQHandler                /*  29 MFT0_ICU */
                .long    MFT0_OCU_IRQHandler                /*  30 MFT0_OCU */
                .long    BT0_3_FLASHIF_IRQHandler           /*  31 BT0_3_FLASHIF */
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

                Set_Default_Handler  CSV_IRQHandler
                Set_Default_Handler  SWDT_IRQHandler
                Set_Default_Handler  LVD_IRQHandler
                Set_Default_Handler  MFT0_WFG_DTIF_IRQHandler
                Set_Default_Handler  EXINT0_7_IRQHandler
                Set_Default_Handler  DT_QPRC_IRQHandler
                Set_Default_Handler  MFS0_RX_IRQHandler
                Set_Default_Handler  MFS0_TX_IRQHandler
                Set_Default_Handler  MFS1_RX_IRQHandler
                Set_Default_Handler  MFS1_TX_IRQHandler
                Set_Default_Handler  MFS3_RX_IRQHandler
                Set_Default_Handler  MFS3_TX_IRQHandler
                Set_Default_Handler  DMAC0_IRQHandler
                Set_Default_Handler  DMAC1_IRQHandler
                Set_Default_Handler  PPG00_02_04_08_10_12_16_18_20_IRQHandler
                Set_Default_Handler  TIM_IRQHandler
                Set_Default_Handler  ADC0_IRQHandler
                Set_Default_Handler  MFT0_FRT_IRQHandler
                Set_Default_Handler  MFT0_ICU_IRQHandler
                Set_Default_Handler  MFT0_OCU_IRQHandler
                Set_Default_Handler  BT0_3_FLASHIF_IRQHandler

                .end
