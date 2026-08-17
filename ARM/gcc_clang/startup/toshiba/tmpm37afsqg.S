/*
******************************************************************************
**
** @file        : tmpm37afsqg.S
** @author      : Ivan Ruzavin (MikroE)
** @brief       : Startup file for TMPM37AFSQG Device
**                Core: ARM Cortex-M3
**
**  Target      : TOSHIBA TMPM37AFSQG
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
                .arch    armv7-m

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
                .long    MemManage_Handler                  /* -12 MPU Fault Handler */
                .long    BusFault_Handler                   /* -11 Bus Fault Handler */
                .long    UsageFault_Handler                 /* -10 Usage Fault Handler */
                .long    0                                  /*     Reserved */
                .long    0                                  /*     Reserved */
                .long    0                                  /*     Reserved */
                .long    0                                  /*     Reserved */
                .long    SVC_Handler                        /*  -5 SVCall Handler */
                .long    DebugMon_Handler                   /*  -4 Debug Monitor Handler */
                .long    0                                  /*     Reserved */
                .long    PendSV_Handler                     /*  -2 PendSV Handler */
                .long    SysTick_Handler                    /*  -1 SysTick Handler */

                /* Interrupts */
                .long    INTRX0_Handler                       /*   0 INTRX0 */
                .long    INTTX0_Handler                       /*   1 INTTX0 */
                .long    Interrupt2_Handler                   /*   2 Reserved */
                .long    Interrupt3_Handler                   /*   3 Reserved */
                .long    INTVCNB_Handler                      /*   4 INTVCNB */
                .long    INTEMG_Handler                       /*   5 INTEMG */
                .long    INTOVV_Handler                       /*   6 INTOVV */
                .long    INTADPDB_Handler                     /*   7 INTADPDB */
                .long    INTTB00_Handler                      /*   8 INTTB00 */
                .long    INTTB01_Handler                      /*   9 INTTB01 */
                .long    INTTB40_Handler                      /*  10 INTTB40 */
                .long    INTTB41_Handler                      /*  11 INTTB41 */
                .long    INTTB50_Handler                      /*  12 INTTB50 */
                .long    INTTB51_Handler                      /*  13 INTTB51 */
                .long    INTPMD_Handler                       /*  14 INTPMD */
                .long    INTCAP00_Handler                     /*  15 INTCAP00 */
                .long    INTCAP01_Handler                     /*  16 INTCAP01 */
                .long    INTCAP40_Handler                     /*  17 INTCAP40 */
                .long    INTCAP41_Handler                     /*  18 INTCAP41 */
                .long    INT6_Handler                         /*  19 INT6 */
                .long    INT7_Handler                         /*  20 INT7 */
                .long    INTADCPA_Handler                     /*  21 INTADCPA */
                .long    INTADCPB_Handler                     /*  22 INTADCPB */
                .long    INTADSFT_Handler                     /*  23 INTADSFT */
                .long    INTADTMR_Handler                     /*  24 INTADTMR */
                .long    Interrupt25_Handler                  /*  25 Reserved */
                .long    INTTB70_Handler                      /*  26 INTTB70 */
                .long    INTTB71_Handler                      /*  27 INTTB71 */
                .long    INTCAP70_Handler                     /*  28 INTCAP70 */
                .long    INTCAP71_Handler                     /*  29 INTCAP71 */
                .long    INTC_Handler                         /*  30 INTC */
                .long    INTSBI0_Handler                      /*  31 INTSBI0 */

                .space   (214 * 4)                          /* Interrupts 10 .. 224 are left out */
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
                ldr      r1, [r4]
                ldr      r2, [r4, #4]
                ldr      r3, [r4, #8]

.L_loop0_0:
                subs     r3, #4
                ittt     ge
                ldrge    r0, [r1, r3]
                strge    r0, [r2, r3]
                bge      .L_loop0_0

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
                itt      ge
                strge    r0, [r1, r2]
                bge      .L_loop2_0

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
                Set_Default_Handler  MemManage_Handler
                Set_Default_Handler  BusFault_Handler
                Set_Default_Handler  UsageFault_Handler
                Set_Default_Handler  SVC_Handler
                Set_Default_Handler  DebugMon_Handler
                Set_Default_Handler  PendSV_Handler
                Set_Default_Handler  SysTick_Handler

                Set_Default_Handler  INTRX0_Handler
                Set_Default_Handler  INTTX0_Handler
                Set_Default_Handler  Interrupt2_Handler
                Set_Default_Handler  Interrupt3_Handler
                Set_Default_Handler  INTVCNB_Handler
                Set_Default_Handler  INTEMG_Handler
                Set_Default_Handler  INTOVV_Handler
                Set_Default_Handler  INTADPDB_Handler
                Set_Default_Handler  INTTB00_Handler
                Set_Default_Handler  INTTB01_Handler
                Set_Default_Handler  INTTB40_Handler
                Set_Default_Handler  INTTB41_Handler
                Set_Default_Handler  INTTB50_Handler
                Set_Default_Handler  INTTB51_Handler
                Set_Default_Handler  INTPMD_Handler
                Set_Default_Handler  INTCAP00_Handler
                Set_Default_Handler  INTCAP01_Handler
                Set_Default_Handler  INTCAP40_Handler
                Set_Default_Handler  INTCAP41_Handler
                Set_Default_Handler  INT6_Handler
                Set_Default_Handler  INT7_Handler
                Set_Default_Handler  INTADCPA_Handler
                Set_Default_Handler  INTADCPB_Handler
                Set_Default_Handler  INTADSFT_Handler
                Set_Default_Handler  INTADTMR_Handler
                Set_Default_Handler  Interrupt25_Handler
                Set_Default_Handler  INTTB70_Handler
                Set_Default_Handler  INTTB71_Handler
                Set_Default_Handler  INTCAP70_Handler
                Set_Default_Handler  INTCAP71_Handler
                Set_Default_Handler  INTC_Handler
                Set_Default_Handler  INTSBI0_Handler


                .end