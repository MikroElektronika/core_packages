/*
******************************************************************************
**
** @file        : tmpm3v4fwefg.S
** @author      : Ivan Ruzavin (MikroE)
** @brief       : Startup file for TMPM3V4FWEFG Device
**                Core: ARM Cortex-M3
**
**  Target      : TOSHIBA TMPM3V4FWEFG
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
                .long    INTSSP0_Handler                      /*  10 INTSSP0 */
                .long    Interrupt11_Handler                  /*  11 Reserved */
                .long    Interrupt12_Handler                  /*  12 Reserved */
                .long    Interrupt13_Handler                  /*  13 Reserved */
                .long    INTSBI0_Handler                      /*  14 INTSBI0 */
                .long    Interrupt15_Handler                  /*  15 Reserved */
                .long    Interrupt16_Handler                  /*  16 Reserved */
                .long    INTRTC_Handler                       /*  17 INTRTC */
                .long    Interrupt18_Handler                  /*  18 Reserved */
                .long    INTRMCRX_Handler                     /*  19 INTRMCRX */
                .long    INTTB00_Handler                      /*  20 INTTB00 */
                .long    INTTB01_Handler                      /*  21 INTTB01 */
                .long    INTTB10_Handler                      /*  22 INTTB10 */
                .long    INTTB11_Handler                      /*  23 INTTB11 */
                .long    INTTB40_Handler                      /*  24 INTTB40 */
                .long    INTTB41_Handler                      /*  25 INTTB41 */
                .long    INTTB50_Handler                      /*  26 INTTB50 */
                .long    INTTB51_Handler                      /*  27 INTTB51 */
                .long    Interrupt28_Handler                  /*  28 Reserved */
                .long    Interrupt29_Handler                  /*  29 Reserved */
                .long    INTCAP00_Handler                     /*  30 INTCAP00 */
                .long    INTCAP01_Handler                     /*  31 INTCAP01 */
                .long    INTCAP10_Handler                     /*  32 INTCAP10 */
                .long    INTCAP11_Handler                     /*  33 INTCAP11 */
                .long    INTCAP40_Handler                     /*  34 INTCAP40 */
                .long    INTCAP41_Handler                     /*  35 INTCAP41 */
                .long    INTCAP50_Handler                     /*  36 INTCAP50 */
                .long    INTCAP51_Handler                     /*  37 INTCAP51 */
                .long    Interrupt38_Handler                  /*  38 Reserved */
                .long    Interrupt39_Handler                  /*  39 Reserved */
                .long    Interrupt40_Handler                  /*  40 Reserved */
                .long    Interrupt41_Handler                  /*  41 Reserved */
                .long    INTADCP0_Handler                     /*  42 INTADCP0 */
                .long    INTADCP1_Handler                     /*  43 INTADCP1 */
                .long    INTUART0_Handler                     /*  44 INTUART0 */
                .long    Interrupt45_Handler                  /*  45 Reserved */
                .long    INTTB20_Handler                      /*  46 INTTB20 */
                .long    INTTB21_Handler                      /*  47 INTTB21 */
                .long    INTTB30_Handler                      /*  48 INTTB30 */
                .long    INTTB31_Handler                      /*  49 INTTB31 */
                .long    INTCAP20_Handler                     /*  50 INTCAP20 */
                .long    INTCAP21_Handler                     /*  51 INTCAP21 */
                .long    INTCAP30_Handler                     /*  52 INTCAP30 */
                .long    INTCAP31_Handler                     /*  53 INTCAP31 */
                .long    INTADSFT_Handler                     /*  54 INTADSFT */
                .long    Interrupt55_Handler                  /*  55 Reserved */
                .long    INTADTMR_Handler                     /*  56 INTADTMR */
                .long    Interrupt57_Handler                  /*  57 Reserved */
                .long    INT8_Handler                         /*  58 INT8 */
                .long    Interrupt59_Handler                  /*  59 Reserved */
                .long    Interrupt60_Handler                  /*  60 Reserved */
                .long    Interrupt61_Handler                  /*  61 Reserved */
                .long    Interrupt62_Handler                  /*  62 Reserved */
                .long    Interrupt63_Handler                  /*  63 Reserved */
                .long    Interrupt64_Handler                  /*  64 Reserved */
                .long    Interrupt65_Handler                  /*  65 Reserved */
                .long    INTTB60_Handler                      /*  66 INTTB60 */
                .long    INTTB61_Handler                      /*  67 INTTB61 */
                .long    INTTB70_Handler                      /*  68 INTTB70 */
                .long    INTTB71_Handler                      /*  69 INTTB71 */
                .long    INTCAP60_Handler                     /*  70 INTCAP60 */
                .long    INTCAP61_Handler                     /*  71 INTCAP61 */
                .long    INTCAP70_Handler                     /*  72 INTCAP70 */
                .long    INTCAP71_Handler                     /*  73 INTCAP71 */
                .long    Interrupt74_Handler                  /*  74 Reserved */
                .long    Interrupt75_Handler                  /*  75 Reserved */
                .long    Interrupt76_Handler                  /*  76 Reserved */
                .long    INTF_Handler                         /*  77 INTF */
                .space   (147 * 4)
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
                Set_Default_Handler  INTSSP0_Handler
                Set_Default_Handler  Interrupt11_Handler
                Set_Default_Handler  Interrupt12_Handler
                Set_Default_Handler  Interrupt13_Handler
                Set_Default_Handler  INTSBI0_Handler
                Set_Default_Handler  Interrupt15_Handler
                Set_Default_Handler  Interrupt16_Handler
                Set_Default_Handler  INTRTC_Handler
                Set_Default_Handler  Interrupt18_Handler
                Set_Default_Handler  INTRMCRX_Handler
                Set_Default_Handler  INTTB00_Handler
                Set_Default_Handler  INTTB01_Handler
                Set_Default_Handler  INTTB10_Handler
                Set_Default_Handler  INTTB11_Handler
                Set_Default_Handler  INTTB40_Handler
                Set_Default_Handler  INTTB41_Handler
                Set_Default_Handler  INTTB50_Handler
                Set_Default_Handler  INTTB51_Handler
                Set_Default_Handler  Interrupt28_Handler
                Set_Default_Handler  Interrupt29_Handler
                Set_Default_Handler  INTCAP00_Handler
                Set_Default_Handler  INTCAP01_Handler
                Set_Default_Handler  INTCAP10_Handler
                Set_Default_Handler  INTCAP11_Handler
                Set_Default_Handler  INTCAP40_Handler
                Set_Default_Handler  INTCAP41_Handler
                Set_Default_Handler  INTCAP50_Handler
                Set_Default_Handler  INTCAP51_Handler
                Set_Default_Handler  Interrupt38_Handler
                Set_Default_Handler  Interrupt39_Handler
                Set_Default_Handler  Interrupt40_Handler
                Set_Default_Handler  Interrupt41_Handler
                Set_Default_Handler  INTADCP0_Handler
                Set_Default_Handler  INTADCP1_Handler
                Set_Default_Handler  INTUART0_Handler
                Set_Default_Handler  Interrupt45_Handler
                Set_Default_Handler  INTTB20_Handler
                Set_Default_Handler  INTTB21_Handler
                Set_Default_Handler  INTTB30_Handler
                Set_Default_Handler  INTTB31_Handler
                Set_Default_Handler  INTCAP20_Handler
                Set_Default_Handler  INTCAP21_Handler
                Set_Default_Handler  INTCAP30_Handler
                Set_Default_Handler  INTCAP31_Handler
                Set_Default_Handler  INTADSFT_Handler
                Set_Default_Handler  Interrupt55_Handler
                Set_Default_Handler  INTADTMR_Handler
                Set_Default_Handler  Interrupt57_Handler
                Set_Default_Handler  INT8_Handler
                Set_Default_Handler  Interrupt59_Handler
                Set_Default_Handler  Interrupt60_Handler
                Set_Default_Handler  Interrupt61_Handler
                Set_Default_Handler  Interrupt62_Handler
                Set_Default_Handler  Interrupt63_Handler
                Set_Default_Handler  Interrupt64_Handler
                Set_Default_Handler  Interrupt65_Handler
                Set_Default_Handler  INTTB60_Handler
                Set_Default_Handler  INTTB61_Handler
                Set_Default_Handler  INTTB70_Handler
                Set_Default_Handler  INTTB71_Handler
                Set_Default_Handler  INTCAP60_Handler
                Set_Default_Handler  INTCAP61_Handler
                Set_Default_Handler  INTCAP70_Handler
                Set_Default_Handler  INTCAP71_Handler
                Set_Default_Handler  Interrupt74_Handler
                Set_Default_Handler  Interrupt75_Handler
                Set_Default_Handler  Interrupt76_Handler
                Set_Default_Handler  INTF_Handler


                .end