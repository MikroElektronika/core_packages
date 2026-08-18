/*
******************************************************************************
**
** @file        : tmpm370fydfg.S
** @author      : Ivan Ruzavin (MikroE)
** @brief       : Startup file for TMPM370FYDFG Device
**                Core: ARM Cortex-M3
**
**  Target      : TOSHIBA TMPM370FYDFG
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
                .long    INTVCNA_Handler                      /*  10 INTVCNA */
                .long    INTVCNB_Handler                      /*  11 INTVCNB */
                .long    INTEMG0_Handler                      /*  12 INTEMG0 */
                .long    INTEMG1_Handler                      /*  13 INTEMG1 */
                .long    INTOVV0_Handler                      /*  14 INTOVV0 */
                .long    INTOVV1_Handler                      /*  15 INTOVV1 */
                .long    INTADAPDA_Handler                    /*  16 INTADAPDA */
                .long    INTADBPDA_Handler                    /*  17 INTADBPDA */
                .long    INTADAPDB_Handler                    /*  18 INTADAPDB */
                .long    INTADBPDB_Handler                    /*  19 INTADBPDB */
                .long    INTTB00_Handler                      /*  20 INTTB00 */
                .long    INTTB01_Handler                      /*  21 INTTB01 */
                .long    INTTB10_Handler                      /*  22 INTTB10 */
                .long    INTTB11_Handler                      /*  23 INTTB11 */
                .long    INTTB40_Handler                      /*  24 INTTB40 */
                .long    INTTB41_Handler                      /*  25 INTTB41 */
                .long    INTTB50_Handler                      /*  26 INTTB50 */
                .long    INTTB51_Handler                      /*  27 INTTB51 */
                .long    INTPMD0_Handler                      /*  28 INTPMD0 */
                .long    INTPMD1_Handler                      /*  29 INTPMD1 */
                .long    INTCAP00_Handler                     /*  30 INTCAP00 */
                .long    INTCAP01_Handler                     /*  31 INTCAP01 */
                .long    INTCAP10_Handler                     /*  32 INTCAP10 */
                .long    INTCAP11_Handler                     /*  33 INTCAP11 */
                .long    INTCAP40_Handler                     /*  34 INTCAP40 */
                .long    INTCAP41_Handler                     /*  35 INTCAP41 */
                .long    INTCAP50_Handler                     /*  36 INTCAP50 */
                .long    INTCAP51_Handler                     /*  37 INTCAP51 */
                .long    INT6_Handler                         /*  38 INT6 */
                .long    INT7_Handler                         /*  39 INT7 */
                .long    INTRX2_Handler                       /*  40 INTRX2 */
                .long    INTTX2_Handler                       /*  41 INTTX2 */
                .long    INTADACPA_Handler                    /*  42 INTADACPA */
                .long    INTADBCPA_Handler                    /*  43 INTADBCPA */
                .long    INTADACPB_Handler                    /*  44 INTADACPB */
                .long    INTADBCPB_Handler                    /*  45 INTADBCPB */
                .long    INTTB20_Handler                      /*  46 INTTB20 */
                .long    INTTB21_Handler                      /*  47 INTTB21 */
                .long    INTTB30_Handler                      /*  48 INTTB30 */
                .long    INTTB31_Handler                      /*  49 INTTB31 */
                .long    INTCAP20_Handler                     /*  50 INTCAP20 */
                .long    INTCAP21_Handler                     /*  51 INTCAP21 */
                .long    INTCAP30_Handler                     /*  52 INTCAP30 */
                .long    INTCAP31_Handler                     /*  53 INTCAP31 */
                .long    INTADASFT_Handler                    /*  54 INTADASFT */
                .long    INTADBSFT_Handler                    /*  55 INTADBSFT */
                .long    INTADATMR_Handler                    /*  56 INTADATMR */
                .long    INTADBTMR_Handler                    /*  57 INTADBTMR */
                .long    INT8_Handler                         /*  58 INT8 */
                .long    INT9_Handler                         /*  59 INT9 */
                .long    INTA_Handler                         /*  60 INTA */
                .long    INTB_Handler                         /*  61 INTB */
                .long    INTENC0_Handler                      /*  62 INTENC0 */
                .long    INTENC1_Handler                      /*  63 INTENC1 */
                .long    INTRX3_Handler                       /*  64 INTRX3 */
                .long    INTTX3_Handler                       /*  65 INTTX3 */
                .long    INTTB60_Handler                      /*  66 INTTB60 */
                .long    INTTB61_Handler                      /*  67 INTTB61 */
                .long    INTTB70_Handler                      /*  68 INTTB70 */
                .long    INTTB71_Handler                      /*  69 INTTB71 */
                .long    INTCAP60_Handler                     /*  70 INTCAP60 */
                .long    INTCAP61_Handler                     /*  71 INTCAP61 */
                .long    INTCAP70_Handler                     /*  72 INTCAP70 */
                .long    INTCAP71_Handler                     /*  73 INTCAP71 */
                .long    INTC_Handler                         /*  74 INTC */
                .long    INTD_Handler                         /*  75 INTD */
                .long    INTE_Handler                         /*  76 INTE */
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
                Set_Default_Handler  INTVCNA_Handler
                Set_Default_Handler  INTVCNB_Handler
                Set_Default_Handler  INTEMG0_Handler
                Set_Default_Handler  INTEMG1_Handler
                Set_Default_Handler  INTOVV0_Handler
                Set_Default_Handler  INTOVV1_Handler
                Set_Default_Handler  INTADAPDA_Handler
                Set_Default_Handler  INTADBPDA_Handler
                Set_Default_Handler  INTADAPDB_Handler
                Set_Default_Handler  INTADBPDB_Handler
                Set_Default_Handler  INTTB00_Handler
                Set_Default_Handler  INTTB01_Handler
                Set_Default_Handler  INTTB10_Handler
                Set_Default_Handler  INTTB11_Handler
                Set_Default_Handler  INTTB40_Handler
                Set_Default_Handler  INTTB41_Handler
                Set_Default_Handler  INTTB50_Handler
                Set_Default_Handler  INTTB51_Handler
                Set_Default_Handler  INTPMD0_Handler
                Set_Default_Handler  INTPMD1_Handler
                Set_Default_Handler  INTCAP00_Handler
                Set_Default_Handler  INTCAP01_Handler
                Set_Default_Handler  INTCAP10_Handler
                Set_Default_Handler  INTCAP11_Handler
                Set_Default_Handler  INTCAP40_Handler
                Set_Default_Handler  INTCAP41_Handler
                Set_Default_Handler  INTCAP50_Handler
                Set_Default_Handler  INTCAP51_Handler
                Set_Default_Handler  INT6_Handler
                Set_Default_Handler  INT7_Handler
                Set_Default_Handler  INTRX2_Handler
                Set_Default_Handler  INTTX2_Handler
                Set_Default_Handler  INTADACPA_Handler
                Set_Default_Handler  INTADBCPA_Handler
                Set_Default_Handler  INTADACPB_Handler
                Set_Default_Handler  INTADBCPB_Handler
                Set_Default_Handler  INTTB20_Handler
                Set_Default_Handler  INTTB21_Handler
                Set_Default_Handler  INTTB30_Handler
                Set_Default_Handler  INTTB31_Handler
                Set_Default_Handler  INTCAP20_Handler
                Set_Default_Handler  INTCAP21_Handler
                Set_Default_Handler  INTCAP30_Handler
                Set_Default_Handler  INTCAP31_Handler
                Set_Default_Handler  INTADASFT_Handler
                Set_Default_Handler  INTADBSFT_Handler
                Set_Default_Handler  INTADATMR_Handler
                Set_Default_Handler  INTADBTMR_Handler
                Set_Default_Handler  INT8_Handler
                Set_Default_Handler  INT9_Handler
                Set_Default_Handler  INTA_Handler
                Set_Default_Handler  INTB_Handler
                Set_Default_Handler  INTENC0_Handler
                Set_Default_Handler  INTENC1_Handler
                Set_Default_Handler  INTRX3_Handler
                Set_Default_Handler  INTTX3_Handler
                Set_Default_Handler  INTTB60_Handler
                Set_Default_Handler  INTTB61_Handler
                Set_Default_Handler  INTTB70_Handler
                Set_Default_Handler  INTTB71_Handler
                Set_Default_Handler  INTCAP60_Handler
                Set_Default_Handler  INTCAP61_Handler
                Set_Default_Handler  INTCAP70_Handler
                Set_Default_Handler  INTCAP71_Handler
                Set_Default_Handler  INTC_Handler
                Set_Default_Handler  INTD_Handler
                Set_Default_Handler  INTE_Handler
                Set_Default_Handler  INTF_Handler


                .end