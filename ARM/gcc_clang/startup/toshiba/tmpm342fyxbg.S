/*
******************************************************************************
**
** @file        : tmpm342fyxbg.S
** @author      : Ivan Ruzavin (MikroE)
** @brief       : Startup file for TMPM342FYXBG Device
**                Core: ARM Cortex-M3
**
**  Target      : TOSHIBA TMPM342FYXBG
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
                .long    INT0_Handler                         /*   0 INT0 */
                .long    INT1_Handler                         /*   1 INT1 */
                .long    INT2_Handler                         /*   2 INT2 */
                .long    INT3_Handler                         /*   3 INT3 */
                .long    INT4_Handler                         /*   4 INT4 */
                .long    INT5_Handler                         /*   5 INT5 */
                .long    INT6_Handler                         /*   6 INT6 */
                .long    INT7_Handler                         /*   7 INT7 */
                .long    INTPSCSTOP_Handler                   /*   8 INTPSCSTOP */
                .long    INTPSCBRK_Handler                    /*   9 INTPSCBRK */
                .long    INTPSCSTEP_Handler                   /*  10 INTPSCSTEP */
                .long    INTPSCII_Handler                     /*  11 INTPSCII */
                .long    INTPSCIA_Handler                     /*  12 INTPSCIA */
                .long    INTTB0_Handler                       /*  13 INTTB0 */
                .long    INTTB1_Handler                       /*  14 INTTB1 */
                .long    INTTB2_Handler                       /*  15 INTTB2 */
                .long    INTTX0_Handler                       /*  16 INTTX0 */
                .long    INTRX0_Handler                       /*  17 INTRX0 */
                .long    INTTX1_Handler                       /*  18 INTTX1 */
                .long    INTRX1_Handler                       /*  19 INTRX1 */
                .long    INTTX2_Handler                       /*  20 INTTX2 */
                .long    INTRX2_Handler                       /*  21 INTRX2 */
                .long    INTTX3_Handler                       /*  22 INTTX3 */
                .long    INTS_Handler                         /*  23 INTS */
                .long    INTAD0HP_Handler                     /*  24 INTAD0HP */
                .long    INTAD0_Handler                       /*  25 INTAD0 */
                .long    INTAD1HP_Handler                     /*  26 INTAD1HP */
                .long    INTAD1_Handler                       /*  27 INTAD1 */
                .long    INTDSADHP_Handler                    /*  28 INTDSADHP */
                .long    INTDSAD_Handler                      /*  29 INTDSAD */
                .long    INTI2C_Handler                       /*  30 INTI2C */
                .long    INTTB3_Handler                       /*  31 INTTB3 */
                .long    INTTB4_Handler                       /*  32 INTTB4 */
                .long    INTTB5_Handler                       /*  33 INTTB5 */
                .long    INTTB6_Handler                       /*  34 INTTB6 */
                .long    INTTB7_Handler                       /*  35 INTTB7 */
                .long    INTTB8_Handler                       /*  36 INTTB8 */
                .long    INTTB9_Handler                       /*  37 INTTB9 */
                .long    INTTD0CMP0_Handler                   /*  38 INTTD0CMP0 */
                .long    INTTD0CMP1_Handler                   /*  39 INTTD0CMP1 */
                .long    INTTD0CMP2_Handler                   /*  40 INTTD0CMP2 */
                .long    INTTD0CMP3_Handler                   /*  41 INTTD0CMP3 */
                .long    INTTD0CMP4_Handler                   /*  42 INTTD0CMP4 */
                .long    INTTD1CMP0_Handler                   /*  43 INTTD1CMP0 */
                .long    INTTD1CMP1_Handler                   /*  44 INTTD1CMP1 */
                .long    INTTD1CMP2_Handler                   /*  45 INTTD1CMP2 */
                .long    INTTD1CMP3_Handler                   /*  46 INTTD1CMP3 */
                .long    INTTD1CMP4_Handler                   /*  47 INTTD1CMP4 */
                .long    INTTD2CMP0_Handler                   /*  48 INTTD2CMP0 */
                .long    INTTD2CMP1_Handler                   /*  49 INTTD2CMP1 */
                .long    INTTD2CMP2_Handler                   /*  50 INTTD2CMP2 */
                .long    INTTD2CMP3_Handler                   /*  51 INTTD2CMP3 */
                .long    INTTD2CMP4_Handler                   /*  52 INTTD2CMP4 */
                .long    INTTD3CMP0_Handler                   /*  53 INTTD3CMP0 */
                .long    INTTD3CMP1_Handler                   /*  54 INTTD3CMP1 */
                .long    INTTD3CMP2_Handler                   /*  55 INTTD3CMP2 */
                .long    INTTD3CMP3_Handler                   /*  56 INTTD3CMP3 */
                .long    INTTD3CMP4_Handler                   /*  57 INTTD3CMP4 */
                .long    INTEC0_Handler                       /*  58 INTEC0 */
                .long    INTEC0OVF_Handler                    /*  59 INTEC0OVF */
                .long    INTEC0DIR_Handler                    /*  60 INTEC0DIR */
                .long    INTEC0DT0_Handler                    /*  61 INTEC0DT0 */
                .long    INTEC0DT1_Handler                    /*  62 INTEC0DT1 */
                .long    INTEC0DT2_Handler                    /*  63 INTEC0DT2 */
                .long    INTEC0DT3_Handler                    /*  64 INTEC0DT3 */
                .long    INTEC1_Handler                       /*  65 INTEC1 */
                .long    INTEC1OVF_Handler                    /*  66 INTEC1OVF */
                .long    INTEC1DIR_Handler                    /*  67 INTEC1DIR */
                .long    INTEC1DT0_Handler                    /*  68 INTEC1DT0 */
                .long    INTEC1DT1_Handler                    /*  69 INTEC1DT1 */
                .long    INTEC1DT2_Handler                    /*  70 INTEC1DT2 */
                .long    INTEC1DT3_Handler                    /*  71 INTEC1DT3 */
                .long    INTAD0M0_Handler                     /*  72 INTAD0M0 */
                .long    INTAD0M1_Handler                     /*  73 INTAD0M1 */
                .long    INTAD1M0_Handler                     /*  74 INTAD1M0 */
                .long    INTAD1M1_Handler                     /*  75 INTAD1M1 */
                .long    INTDMAC0TC_Handler                   /*  76 INTDMAC0TC */
                .long    INTDMAC0ERR_Handler                  /*  77 INTDMAC0ERR */
                .long    INTDMAC1TC_Handler                   /*  78 INTDMAC1TC */
                .long    INTDMAC1ERR_Handler                  /*  79 INTDMAC1ERR */
                .long    INTSSP_Handler                       /*  80 INTSSP */
                .long    INTVTX_Handler                       /*  81 INTVTX */
                .long    INTVRX_Handler                       /*  82 INTVRX */
                .long    Interrupt83_Handler                  /*  83 Reserved */
                .long    INT8_Handler                         /*  84 INT8 */
                .long    INT9_Handler                         /*  85 INT9 */
                .long    INTA_Handler                         /*  86 INTA */

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

                Set_Default_Handler  INT0_Handler
                Set_Default_Handler  INT1_Handler
                Set_Default_Handler  INT2_Handler
                Set_Default_Handler  INT3_Handler
                Set_Default_Handler  INT4_Handler
                Set_Default_Handler  INT5_Handler
                Set_Default_Handler  INT6_Handler
                Set_Default_Handler  INT7_Handler
                Set_Default_Handler  INTPSCSTOP_Handler
                Set_Default_Handler  INTPSCBRK_Handler
                Set_Default_Handler  INTPSCSTEP_Handler
                Set_Default_Handler  INTPSCII_Handler
                Set_Default_Handler  INTPSCIA_Handler
                Set_Default_Handler  INTTB0_Handler
                Set_Default_Handler  INTTB1_Handler
                Set_Default_Handler  INTTB2_Handler
                Set_Default_Handler  INTTX0_Handler
                Set_Default_Handler  INTRX0_Handler
                Set_Default_Handler  INTTX1_Handler
                Set_Default_Handler  INTRX1_Handler
                Set_Default_Handler  INTTX2_Handler
                Set_Default_Handler  INTRX2_Handler
                Set_Default_Handler  INTTX3_Handler
                Set_Default_Handler  INTS_Handler
                Set_Default_Handler  INTAD0HP_Handler
                Set_Default_Handler  INTAD0_Handler
                Set_Default_Handler  INTAD1HP_Handler
                Set_Default_Handler  INTAD1_Handler
                Set_Default_Handler  INTDSADHP_Handler
                Set_Default_Handler  INTDSAD_Handler
                Set_Default_Handler  INTI2C_Handler
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
                Set_Default_Handler  INTTD2CMP0_Handler
                Set_Default_Handler  INTTD2CMP1_Handler
                Set_Default_Handler  INTTD2CMP2_Handler
                Set_Default_Handler  INTTD2CMP3_Handler
                Set_Default_Handler  INTTD2CMP4_Handler
                Set_Default_Handler  INTTD3CMP0_Handler
                Set_Default_Handler  INTTD3CMP1_Handler
                Set_Default_Handler  INTTD3CMP2_Handler
                Set_Default_Handler  INTTD3CMP3_Handler
                Set_Default_Handler  INTTD3CMP4_Handler
                Set_Default_Handler  INTEC0_Handler
                Set_Default_Handler  INTEC0OVF_Handler
                Set_Default_Handler  INTEC0DIR_Handler
                Set_Default_Handler  INTEC0DT0_Handler
                Set_Default_Handler  INTEC0DT1_Handler
                Set_Default_Handler  INTEC0DT2_Handler
                Set_Default_Handler  INTEC0DT3_Handler
                Set_Default_Handler  INTEC1_Handler
                Set_Default_Handler  INTEC1OVF_Handler
                Set_Default_Handler  INTEC1DIR_Handler
                Set_Default_Handler  INTEC1DT0_Handler
                Set_Default_Handler  INTEC1DT1_Handler
                Set_Default_Handler  INTEC1DT2_Handler
                Set_Default_Handler  INTEC1DT3_Handler
                Set_Default_Handler  INTAD0M0_Handler
                Set_Default_Handler  INTAD0M1_Handler
                Set_Default_Handler  INTAD1M0_Handler
                Set_Default_Handler  INTAD1M1_Handler
                Set_Default_Handler  INTDMAC0TC_Handler
                Set_Default_Handler  INTDMAC0ERR_Handler
                Set_Default_Handler  INTDMAC1TC_Handler
                Set_Default_Handler  INTDMAC1ERR_Handler
                Set_Default_Handler  INTSSP_Handler
                Set_Default_Handler  INTVTX_Handler
                Set_Default_Handler  INTVRX_Handler
                Set_Default_Handler  Interrupt83_Handler
                Set_Default_Handler  INT8_Handler
                Set_Default_Handler  INT9_Handler
                Set_Default_Handler  INTA_Handler


                .end