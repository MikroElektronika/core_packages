/*
******************************************************************************
**
** @file        : tmpm341fdxbg.S
** @author      : Ivan Ruzavin (MikroE)
** @brief       : Startup file for TMPM341FDXBG Device
**                Core: ARM Cortex-M3
**
**  Target      : TOSHIBA TMPM341FDXBG
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
                .long    INTRX0_Handler                       /*   8 INTRX0 */
                .long    INTTX0_Handler                       /*   9 INTTX0 */
                .long    INTRX1_Handler                       /*  10 INTRX1 */
                .long    INTTX1_Handler                       /*  11 INTTX1 */
                .long    INTRX2_Handler                       /*  12 INTRX2 */
                .long    INTTX2_Handler                       /*  13 INTTX2 */
                .long    INTSBI0_Handler                      /*  14 INTSBI0 */
                .long    INTSBI1_Handler                      /*  15 INTSBI1 */
                .long    INTADHP_Handler                      /*  16 INTADHP */
                .long    INTAD_Handler                        /*  17 INTAD */
                .long    INTADM0_Handler                      /*  18 INTADM0 */
                .long    INTADM1_Handler                      /*  19 INTADM1 */
                .long    INTTB0_Handler                       /*  20 INTTB0 */
                .long    INTTB1_Handler                       /*  21 INTTB1 */
                .long    INTTB2_Handler                       /*  22 INTTB2 */
                .long    INTTB3_Handler                       /*  23 INTTB3 */
                .long    INTTB4_Handler                       /*  24 INTTB4 */
                .long    INTTB5_Handler                       /*  25 INTTB5 */
                .long    INTTB6_Handler                       /*  26 INTTB6 */
                .long    INTTB7_Handler                       /*  27 INTTB7 */
                .long    INTTB8_Handler                       /*  28 INTTB8 */
                .long    INTTB9_Handler                       /*  29 INTTB9 */
                .long    INTTD0CMP0_Handler                   /*  30 INTTD0CMP0 */
                .long    INTTD0CMP1_Handler                   /*  31 INTTD0CMP1 */
                .long    INTTD0CMP2_Handler                   /*  32 INTTD0CMP2 */
                .long    INTTD0CMP3_Handler                   /*  33 INTTD0CMP3 */
                .long    INTTD0CMP4_Handler                   /*  34 INTTD0CMP4 */
                .long    INTTD1CMP0_Handler                   /*  35 INTTD1CMP0 */
                .long    INTTD1CMP1_Handler                   /*  36 INTTD1CMP1 */
                .long    INTTD1CMP2_Handler                   /*  37 INTTD1CMP2 */
                .long    INTTD1CMP3_Handler                   /*  38 INTTD1CMP3 */
                .long    INTTD1CMP4_Handler                   /*  39 INTTD1CMP4 */
                .long    INTPHT00_Handler                     /*  40 INTPHT00 */
                .long    INTPHT01_Handler                     /*  41 INTPHT01 */
                .long    INTPHT10_Handler                     /*  42 INTPHT10 */
                .long    INTPHT11_Handler                     /*  43 INTPHT11 */
                .long    INTPHT20_Handler                     /*  44 INTPHT20 */
                .long    INTPHT21_Handler                     /*  45 INTPHT21 */
                .long    INTPHT30_Handler                     /*  46 INTPHT30 */
                .long    INTPHT31_Handler                     /*  47 INTPHT31 */
                .long    INTPHEVRY0_Handler                   /*  48 INTPHEVRY0 */
                .long    INTPHEVRY1_Handler                   /*  49 INTPHEVRY1 */
                .long    INTPHEVRY2_Handler                   /*  50 INTPHEVRY2 */
                .long    INTPHEVRY3_Handler                   /*  51 INTPHEVRY3 */
                .long    INTRX3_Handler                       /*  52 INTRX3 */
                .long    INTTX3_Handler                       /*  53 INTTX3 */
                .long    INTRX4_Handler                       /*  54 INTRX4 */
                .long    INTTX4_Handler                       /*  55 INTTX4 */
                .long    INTCAP00_Handler                     /*  56 INTCAP00 */
                .long    INTCAP01_Handler                     /*  57 INTCAP01 */
                .long    INTCAP10_Handler                     /*  58 INTCAP10 */
                .long    INTCAP11_Handler                     /*  59 INTCAP11 */
                .long    INTCAP20_Handler                     /*  60 INTCAP20 */
                .long    INTCAP21_Handler                     /*  61 INTCAP21 */
                .long    INTCAP30_Handler                     /*  62 INTCAP30 */
                .long    INTCAP31_Handler                     /*  63 INTCAP31 */
                .long    INTCAP40_Handler                     /*  64 INTCAP40 */
                .long    INTCAP41_Handler                     /*  65 INTCAP41 */
                .long    INTCAP50_Handler                     /*  66 INTCAP50 */
                .long    INTCAP51_Handler                     /*  67 INTCAP51 */
                .long    INTCAP60_Handler                     /*  68 INTCAP60 */
                .long    INTCAP61_Handler                     /*  69 INTCAP61 */
                .long    INTCAP70_Handler                     /*  70 INTCAP70 */
                .long    INTCAP71_Handler                     /*  71 INTCAP71 */
                .long    INTCAP80_Handler                     /*  72 INTCAP80 */
                .long    INTCAP81_Handler                     /*  73 INTCAP81 */
                .long    INTCAP90_Handler                     /*  74 INTCAP90 */
                .long    INTCAP91_Handler                     /*  75 INTCAP91 */
                .long    INT8_Handler                         /*  76 INT8 */
                .long    INT9_Handler                         /*  77 INT9 */
                .long    INTA_Handler                         /*  78 INTA */
                .long    INTB_Handler                         /*  79 INTB */
                .long    INTDMAC0TC_Handler                   /*  80 INTDMAC0TC */
                .long    INTDMAC1TC_Handler                   /*  81 INTDMAC1TC */
                .long    INTDMAC0ERR_Handler                  /*  82 INTDMAC0ERR */
                .long    INTDMAC1ERR_Handler                  /*  83 INTDMAC1ERR */
                .long    INTSSP_Handler                       /*  84 INTSSP */
                .space   (140 * 4)
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
                Set_Default_Handler  INTRX0_Handler
                Set_Default_Handler  INTTX0_Handler
                Set_Default_Handler  INTRX1_Handler
                Set_Default_Handler  INTTX1_Handler
                Set_Default_Handler  INTRX2_Handler
                Set_Default_Handler  INTTX2_Handler
                Set_Default_Handler  INTSBI0_Handler
                Set_Default_Handler  INTSBI1_Handler
                Set_Default_Handler  INTADHP_Handler
                Set_Default_Handler  INTAD_Handler
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
                Set_Default_Handler  INTTD0CMP0_Handler
                Set_Default_Handler  INTTD0CMP1_Handler
                Set_Default_Handler  INTTD0CMP2_Handler
                Set_Default_Handler  INTTD0CMP3_Handler
                Set_Default_Handler  INTTD0CMP4_Handler
                Set_Default_Handler  INTTD1CMP0_Handler
                Set_Default_Handler  INTTD1CMP1_Handler
                Set_Default_Handler  INTTD1CMP2_Handler
                Set_Default_Handler  INTTD1CMP3_Handler
                Set_Default_Handler  INTTD1CMP4_Handler
                Set_Default_Handler  INTPHT00_Handler
                Set_Default_Handler  INTPHT01_Handler
                Set_Default_Handler  INTPHT10_Handler
                Set_Default_Handler  INTPHT11_Handler
                Set_Default_Handler  INTPHT20_Handler
                Set_Default_Handler  INTPHT21_Handler
                Set_Default_Handler  INTPHT30_Handler
                Set_Default_Handler  INTPHT31_Handler
                Set_Default_Handler  INTPHEVRY0_Handler
                Set_Default_Handler  INTPHEVRY1_Handler
                Set_Default_Handler  INTPHEVRY2_Handler
                Set_Default_Handler  INTPHEVRY3_Handler
                Set_Default_Handler  INTRX3_Handler
                Set_Default_Handler  INTTX3_Handler
                Set_Default_Handler  INTRX4_Handler
                Set_Default_Handler  INTTX4_Handler
                Set_Default_Handler  INTCAP00_Handler
                Set_Default_Handler  INTCAP01_Handler
                Set_Default_Handler  INTCAP10_Handler
                Set_Default_Handler  INTCAP11_Handler
                Set_Default_Handler  INTCAP20_Handler
                Set_Default_Handler  INTCAP21_Handler
                Set_Default_Handler  INTCAP30_Handler
                Set_Default_Handler  INTCAP31_Handler
                Set_Default_Handler  INTCAP40_Handler
                Set_Default_Handler  INTCAP41_Handler
                Set_Default_Handler  INTCAP50_Handler
                Set_Default_Handler  INTCAP51_Handler
                Set_Default_Handler  INTCAP60_Handler
                Set_Default_Handler  INTCAP61_Handler
                Set_Default_Handler  INTCAP70_Handler
                Set_Default_Handler  INTCAP71_Handler
                Set_Default_Handler  INTCAP80_Handler
                Set_Default_Handler  INTCAP81_Handler
                Set_Default_Handler  INTCAP90_Handler
                Set_Default_Handler  INTCAP91_Handler
                Set_Default_Handler  INT8_Handler
                Set_Default_Handler  INT9_Handler
                Set_Default_Handler  INTA_Handler
                Set_Default_Handler  INTB_Handler
                Set_Default_Handler  INTDMAC0TC_Handler
                Set_Default_Handler  INTDMAC1TC_Handler
                Set_Default_Handler  INTDMAC0ERR_Handler
                Set_Default_Handler  INTDMAC1ERR_Handler
                Set_Default_Handler  INTSSP_Handler


                .end