/*
******************************************************************************
**
** @file        : tmpm363f10fg.S
** @author      : Ivan Ruzavin (MikroE)
** @brief       : Startup file for TMPM363F10FG Device
**                Core: ARM Cortex-M3
**
**  Target      : TOSHIBA TMPM363F10FG
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
                .long    INT6_Handler                         /*   6 INT6 */
                .long    INT7_Handler                         /*   7 INT7 */
                .long    Interrupt8_Handler                   /*   8 Reserved */
                .long    Interrupt9_Handler                   /*   9 Reserved */
                .long    Interrupt10_Handler                  /*  10 Reserved */
                .long    Interrupt11_Handler                  /*  11 Reserved */
                .long    Interrupt12_Handler                  /*  12 Reserved */
                .long    Interrupt13_Handler                  /*  13 Reserved */
                .long    INTE_Handler                         /*  14 INTE */
                .long    INTF_Handler                         /*  15 INTF */
                .long    INTRX0_Handler                       /*  16 INTRX0 */
                .long    INTTX0_Handler                       /*  17 INTTX0 */
                .long    INTRX1_Handler                       /*  18 INTRX1 */
                .long    INTTX1_Handler                       /*  19 INTTX1 */
                .long    INTRX2_Handler                       /*  20 INTRX2 */
                .long    INTTX2_Handler                       /*  21 INTTX2 */
                .long    INTRX3_Handler                       /*  22 INTRX3 */
                .long    INTTX3_Handler                       /*  23 INTTX3 */
                .long    INTRX4_Handler                       /*  24 INTRX4 */
                .long    INTTX4_Handler                       /*  25 INTTX4 */
                .long    INTSBI0_Handler                      /*  26 INTSBI0 */
                .long    INTSBI1_Handler                      /*  27 INTSBI1 */
                .long    INTCECRX_Handler                     /*  28 INTCECRX */
                .long    INTCECTX_Handler                     /*  29 INTCECTX */
                .long    INTRMCRX0_Handler                    /*  30 INTRMCRX0 */
                .long    Interrupt31_Handler                  /*  31 Reserved */
                .long    INTRTC_Handler                       /*  32 INTRTC */
                .long    INTKWUP_Handler                      /*  33 INTKWUP */
                .long    INTSBI2_Handler                      /*  34 INTSBI2 */
                .long    INTSBI3_Handler                      /*  35 INTSBI3 */
                .long    Interrupt36_Handler                  /*  36 Reserved */
                .long    INTADHP_Handler                      /*  37 INTADHP */
                .long    INTADM0_Handler                      /*  38 INTADM0 */
                .long    INTADM1_Handler                      /*  39 INTADM1 */
                .long    INTTB0_Handler                       /*  40 INTTB0 */
                .long    INTTB1_Handler                       /*  41 INTTB1 */
                .long    INTTB2_Handler                       /*  42 INTTB2 */
                .long    INTTB3_Handler                       /*  43 INTTB3 */
                .long    INTTB4_Handler                       /*  44 INTTB4 */
                .long    INTTB5_Handler                       /*  45 INTTB5 */
                .long    INTTB6_Handler                       /*  46 INTTB6 */
                .long    INTTB7_Handler                       /*  47 INTTB7 */
                .long    INTTB8_Handler                       /*  48 INTTB8 */
                .long    INTTB9_Handler                       /*  49 INTTB9 */
                .long    INTTBA_Handler                       /*  50 INTTBA */
                .long    INTTBB_Handler                       /*  51 INTTBB */
                .long    INTTBC_Handler                       /*  52 INTTBC */
                .long    INTTBD_Handler                       /*  53 INTTBD */
                .long    INTTBE_Handler                       /*  54 INTTBE */
                .long    INTTBF_Handler                       /*  55 INTTBF */
                .long    INTUSB_Handler                       /*  56 INTUSB */
                .long    INTCANSTA_Handler                    /*  57 INTCANSTA */
                .long    INTAD_Handler                        /*  58 INTAD */
                .long    INTSSP_Handler                       /*  59 INTSSP */
                .long    Interrupt60_Handler                  /*  60 Reserved */
                .long    Interrupt61_Handler                  /*  61 Reserved */
                .long    Interrupt62_Handler                  /*  62 Reserved */
                .long    Interrupt63_Handler                  /*  63 Reserved */
                .long    Interrupt64_Handler                  /*  64 Reserved */
                .long    Interrupt65_Handler                  /*  65 Reserved */
                .long    Interrupt66_Handler                  /*  66 Reserved */
                .long    Interrupt67_Handler                  /*  67 Reserved */
                .long    Interrupt68_Handler                  /*  68 Reserved */
                .long    Interrupt69_Handler                  /*  69 Reserved */
                .long    Interrupt70_Handler                  /*  70 Reserved */
                .long    Interrupt71_Handler                  /*  71 Reserved */
                .long    Interrupt72_Handler                  /*  72 Reserved */
                .long    Interrupt73_Handler                  /*  73 Reserved */
                .long    INTCAP10_Handler                     /*  74 INTCAP10 */
                .long    INTCAP11_Handler                     /*  75 INTCAP11 */
                .long    INTCAP20_Handler                     /*  76 INTCAP20 */
                .long    INTCAP21_Handler                     /*  77 INTCAP21 */
                .long    INTCANRX_Handler                     /*  78 INTCANRX */
                .long    INTCANTX_Handler                     /*  79 INTCANTX */
                .long    INTCAP50_Handler                     /*  80 INTCAP50 */
                .long    INTCAP51_Handler                     /*  81 INTCAP51 */
                .long    INTCAP60_Handler                     /*  82 INTCAP60 */
                .long    INTCAP61_Handler                     /*  83 INTCAP61 */
                .long    INTCAP70_Handler                     /*  84 INTCAP70 */
                .long    INTCAP71_Handler                     /*  85 INTCAP71 */
                .long    INTCAP90_Handler                     /*  86 INTCAP90 */
                .long    INTCAP91_Handler                     /*  87 INTCAP91 */
                .long    Interrupt88_Handler                  /*  88 Reserved */
                .long    Interrupt89_Handler                  /*  89 Reserved */
                .long    Interrupt90_Handler                  /*  90 Reserved */
                .long    Interrupt91_Handler                  /*  91 Reserved */
                .long    Interrupt92_Handler                  /*  92 Reserved */
                .long    Interrupt93_Handler                  /*  93 Reserved */
                .long    Interrupt94_Handler                  /*  94 Reserved */
                .long    Interrupt95_Handler                  /*  95 Reserved */
                .long    Interrupt96_Handler                  /*  96 Reserved */
                .long    Interrupt97_Handler                  /*  97 Reserved */
                .long    INTDMACERR_Handler                   /*  98 INTDMACERR */
                .long    INTDMACTC0_Handler                   /*  99 INTDMACTC0 */
                .space   (125 * 4)
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
                Set_Default_Handler  INT6_Handler
                Set_Default_Handler  INT7_Handler
                Set_Default_Handler  Interrupt8_Handler
                Set_Default_Handler  Interrupt9_Handler
                Set_Default_Handler  Interrupt10_Handler
                Set_Default_Handler  Interrupt11_Handler
                Set_Default_Handler  Interrupt12_Handler
                Set_Default_Handler  Interrupt13_Handler
                Set_Default_Handler  INTE_Handler
                Set_Default_Handler  INTF_Handler
                Set_Default_Handler  INTRX0_Handler
                Set_Default_Handler  INTTX0_Handler
                Set_Default_Handler  INTRX1_Handler
                Set_Default_Handler  INTTX1_Handler
                Set_Default_Handler  INTRX2_Handler
                Set_Default_Handler  INTTX2_Handler
                Set_Default_Handler  INTRX3_Handler
                Set_Default_Handler  INTTX3_Handler
                Set_Default_Handler  INTRX4_Handler
                Set_Default_Handler  INTTX4_Handler
                Set_Default_Handler  INTSBI0_Handler
                Set_Default_Handler  INTSBI1_Handler
                Set_Default_Handler  INTCECRX_Handler
                Set_Default_Handler  INTCECTX_Handler
                Set_Default_Handler  INTRMCRX0_Handler
                Set_Default_Handler  Interrupt31_Handler
                Set_Default_Handler  INTRTC_Handler
                Set_Default_Handler  INTKWUP_Handler
                Set_Default_Handler  INTSBI2_Handler
                Set_Default_Handler  INTSBI3_Handler
                Set_Default_Handler  Interrupt36_Handler
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
                Set_Default_Handler  INTTB7_Handler
                Set_Default_Handler  INTTB8_Handler
                Set_Default_Handler  INTTB9_Handler
                Set_Default_Handler  INTTBA_Handler
                Set_Default_Handler  INTTBB_Handler
                Set_Default_Handler  INTTBC_Handler
                Set_Default_Handler  INTTBD_Handler
                Set_Default_Handler  INTTBE_Handler
                Set_Default_Handler  INTTBF_Handler
                Set_Default_Handler  INTUSB_Handler
                Set_Default_Handler  INTCANSTA_Handler
                Set_Default_Handler  INTAD_Handler
                Set_Default_Handler  INTSSP_Handler
                Set_Default_Handler  Interrupt60_Handler
                Set_Default_Handler  Interrupt61_Handler
                Set_Default_Handler  Interrupt62_Handler
                Set_Default_Handler  Interrupt63_Handler
                Set_Default_Handler  Interrupt64_Handler
                Set_Default_Handler  Interrupt65_Handler
                Set_Default_Handler  Interrupt66_Handler
                Set_Default_Handler  Interrupt67_Handler
                Set_Default_Handler  Interrupt68_Handler
                Set_Default_Handler  Interrupt69_Handler
                Set_Default_Handler  Interrupt70_Handler
                Set_Default_Handler  Interrupt71_Handler
                Set_Default_Handler  Interrupt72_Handler
                Set_Default_Handler  Interrupt73_Handler
                Set_Default_Handler  INTCAP10_Handler
                Set_Default_Handler  INTCAP11_Handler
                Set_Default_Handler  INTCAP20_Handler
                Set_Default_Handler  INTCAP21_Handler
                Set_Default_Handler  INTCANRX_Handler
                Set_Default_Handler  INTCANTX_Handler
                Set_Default_Handler  INTCAP50_Handler
                Set_Default_Handler  INTCAP51_Handler
                Set_Default_Handler  INTCAP60_Handler
                Set_Default_Handler  INTCAP61_Handler
                Set_Default_Handler  INTCAP70_Handler
                Set_Default_Handler  INTCAP71_Handler
                Set_Default_Handler  INTCAP90_Handler
                Set_Default_Handler  INTCAP91_Handler
                Set_Default_Handler  Interrupt88_Handler
                Set_Default_Handler  Interrupt89_Handler
                Set_Default_Handler  Interrupt90_Handler
                Set_Default_Handler  Interrupt91_Handler
                Set_Default_Handler  Interrupt92_Handler
                Set_Default_Handler  Interrupt93_Handler
                Set_Default_Handler  Interrupt94_Handler
                Set_Default_Handler  Interrupt95_Handler
                Set_Default_Handler  Interrupt96_Handler
                Set_Default_Handler  Interrupt97_Handler
                Set_Default_Handler  INTDMACERR_Handler
                Set_Default_Handler  INTDMACTC0_Handler


                .end