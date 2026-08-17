/*
******************************************************************************
**
** @file        : tmpm333fwfg.S
** @author      : Ivan Ruzavin (MikroE)
** @brief       : Startup file for TMPM333FWFG Device
**                Core: ARM Cortex-M3
**
**  Target      : TOSHIBA TMPM333FWFG
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
                .long    INT0_Handler                         /*   0 INT0 */
                .long    INT1_Handler                         /*   1 INT1 */
                .long    INT2_Handler                         /*   2 INT2 */
                .long    INT3_Handler                         /*   3 INT3 */
                .long    INT4_Handler                         /*   4 INT4 */
                .long    INT5_Handler                         /*   5 INT5 */
                .long    INTRX0_Handler                       /*   6 INTRX0 */
                .long    INTTX0_Handler                       /*   7 INTTX0 */
                .long    INTRX1_Handler                       /*   8 INTRX1 */
                .long    INTTX1_Handler                       /*   9 INTTX1 */
                .long    INTSBI0_Handler                      /*  10 INTSBI0 */
                .long    INTSBI1_Handler                      /*  11 INTSBI1 */
                .long    Interrupt12_Handler                  /*  12 Reserved */
                .long    Interrupt13_Handler                  /*  13 Reserved */
                .long    Interrupt14_Handler                  /*  14 Reserved */
                .long    INTADHP_Handler                      /*  15 INTADHP */
                .long    INTADM0_Handler                      /*  16 INTADM0 */
                .long    INTADM1_Handler                      /*  17 INTADM1 */
                .long    INTTB0_Handler                       /*  18 INTTB0 */
                .long    INTTB1_Handler                       /*  19 INTTB1 */
                .long    INTTB2_Handler                       /*  20 INTTB2 */
                .long    INTTB3_Handler                       /*  21 INTTB3 */
                .long    INTTB4_Handler                       /*  22 INTTB4 */
                .long    INTTB5_Handler                       /*  23 INTTB5 */
                .long    INTTB6_Handler                       /*  24 INTTB6 */
                .long    INTRTC_Handler                       /*  25 INTRTC */
                .long    INTCAP00_Handler                     /*  26 INTCAP00 */
                .long    INTCAP01_Handler                     /*  27 INTCAP01 */
                .long    INTCAP10_Handler                     /*  28 INTCAP10 */
                .long    INTCAP11_Handler                     /*  29 INTCAP11 */
                .long    INTCAP50_Handler                     /*  30 INTCAP50 */
                .long    INTCAP51_Handler                     /*  31 INTCAP51 */
                .long    INTCAP60_Handler                     /*  32 INTCAP60 */
                .long    INTCAP61_Handler                     /*  33 INTCAP61 */
                .long    INT6_Handler                         /*  34 INT6 */
                .long    INT7_Handler                         /*  35 INT7 */
                .long    INTRX2_Handler                       /*  36 INTRX2 */
                .long    INTTX2_Handler                       /*  37 INTTX2 */
                .long    INTSBI2_Handler                      /*  38 INTSBI2 */
                .long    Interrupt39_Handler                  /*  39 Reserved */
                .long    INTTB7_Handler                       /*  40 INTTB7 */
                .long    INTTB8_Handler                       /*  41 INTTB8 */
                .long    INTTB9_Handler                       /*  42 INTTB9 */
                .long    INTCAP20_Handler                     /*  43 INTCAP20 */
                .long    INTCAP21_Handler                     /*  44 INTCAP21 */
                .long    INTCAP30_Handler                     /*  45 INTCAP30 */
                .long    INTCAP31_Handler                     /*  46 INTCAP31 */
                .long    INTCAP40_Handler                     /*  47 INTCAP40 */
                .long    INTCAP41_Handler                     /*  48 INTCAP41 */
                .long    INTAD_Handler                        /*  49 INTAD */
                .space   (175 * 4)
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

                bl       main

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

                Set_Default_Handler  INT0_Handler
                Set_Default_Handler  INT1_Handler
                Set_Default_Handler  INT2_Handler
                Set_Default_Handler  INT3_Handler
                Set_Default_Handler  INT4_Handler
                Set_Default_Handler  INT5_Handler
                Set_Default_Handler  INTRX0_Handler
                Set_Default_Handler  INTTX0_Handler
                Set_Default_Handler  INTRX1_Handler
                Set_Default_Handler  INTTX1_Handler
                Set_Default_Handler  INTSBI0_Handler
                Set_Default_Handler  INTSBI1_Handler
                Set_Default_Handler  Interrupt12_Handler
                Set_Default_Handler  Interrupt13_Handler
                Set_Default_Handler  Interrupt14_Handler
                Set_Default_Handler  INTADHP_Handler
                Set_Default_Handler  INTADM0_Handler
                Set_Default_Handler  INTADM1_Handler
                Set_Default_Handler  INTTB0_Handler
                Set_Default_Handler  INTTB1_Handler
                Set_Default_Handler  INTTB2_Handler
                Set_Default_Handler  INTTB3_Handler
                Set_Default_Handler  INTTB4_Handler
                Set_Default_Handler  INTTB5_Handler
                Set_Default_Handler  INTTB6_Handler
                Set_Default_Handler  INTRTC_Handler
                Set_Default_Handler  INTCAP00_Handler
                Set_Default_Handler  INTCAP01_Handler
                Set_Default_Handler  INTCAP10_Handler
                Set_Default_Handler  INTCAP11_Handler
                Set_Default_Handler  INTCAP50_Handler
                Set_Default_Handler  INTCAP51_Handler
                Set_Default_Handler  INTCAP60_Handler
                Set_Default_Handler  INTCAP61_Handler
                Set_Default_Handler  INT6_Handler
                Set_Default_Handler  INT7_Handler
                Set_Default_Handler  INTRX2_Handler
                Set_Default_Handler  INTTX2_Handler
                Set_Default_Handler  INTSBI2_Handler
                Set_Default_Handler  Interrupt39_Handler
                Set_Default_Handler  INTTB7_Handler
                Set_Default_Handler  INTTB8_Handler
                Set_Default_Handler  INTTB9_Handler
                Set_Default_Handler  INTCAP20_Handler
                Set_Default_Handler  INTCAP21_Handler
                Set_Default_Handler  INTCAP30_Handler
                Set_Default_Handler  INTCAP31_Handler
                Set_Default_Handler  INTCAP40_Handler
                Set_Default_Handler  INTCAP41_Handler
                Set_Default_Handler  INTAD_Handler


                .end