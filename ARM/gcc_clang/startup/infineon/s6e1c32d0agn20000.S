/*
******************************************************************************
**
** @file        : s6e1c32d0agn20000.S
** @author      : MikroElektronika
** @brief       : Startup file for S6E1C32D0AGN20000 Device
**                Core: ARM Cortex-M0
**                Interrupt vector table generated from the device header IRQn_Type.
**
**  Target      : INFINEON S6E1C32D0AGN20000
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
                .long    CSV_SWDT_LVD_IRQHandler            /*   0 CSV_SWDT_LVD */
                .long    MFS0_RX_TX_IRQHandler              /*   1 MFS0_RX_TX */
                .long    MFS1_RX_TX_IRQHandler              /*   2 MFS1_RX_TX */
                .long    0                                  /*   3 Reserved */
                .long    MFS3_RX_TX_IRQHandler              /*   4 MFS3_RX_TX */
                .long    MFS4_RX_TX_IRQHandler              /*   5 MFS4_RX_TX */
                .long    0                                  /*   6 Reserved */
                .long    MFS6_RX_TX_I2CSLAVE_IRQHandler     /*   7 MFS6_RX_TX_I2CSLAVE */
                .long    MFS7_RX_TX_IRQHandler              /*   8 MFS7_RX_TX */
                .long    ADC0_IRQHandler                    /*   9 ADC0 */
                .long    USB0_F_ED123_IRQHandler            /*  10 USB0_F_ED123 */
                .long    USB0_F_ED450I_IRQHandler           /*  11 USB0_F_ED450I */
                .long    USB0_F_ED0O_ST_IRQHandler          /*  12 USB0_F_ED0O_ST */
                .long    USB0_H_IRQHandler                  /*  13 USB0_H */
                .long    TIM_IRQHandler                     /*  14 TIM */
                .long    WC_RTC_DT_IRQHandler               /*  15 WC_RTC_DT */
                .long    EXINT0_1_IRQHandler                /*  16 EXINT0_1 */
                .long    EXINT2_3_IRQHandler                /*  17 EXINT2_3 */
                .long    EXINT4_5_IRQHandler                /*  18 EXINT4_5 */
                .long    EXINT6_7_IRQHandler                /*  19 EXINT6_7 */
                .long    EXINT8_IRQHandler                  /*  20 EXINT8 */
                .long    0                                  /*  21 Reserved */
                .long    EXINT12_13_IRQHandler              /*  22 EXINT12_13 */
                .long    EXINT15_IRQHandler                 /*  23 EXINT15 */
                .long    BT0_4_IRQHandler                   /*  24 BT0_4 */
                .long    BT1_5_IRQHandler                   /*  25 BT1_5 */
                .long    BT2_6_IRQHandler                   /*  26 BT2_6 */
                .long    BT3_7_IRQHandler                   /*  27 BT3_7 */
                .long    HDMICEC0_1_IRQHandler              /*  28 HDMICEC0_1 */
                .long    SMCIF1_FLASHIF_IRQHandler          /*  29 SMCIF1_FLASHIF */
                .long    DSTC_IRQHandler                    /*  30 DSTC */
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

                Set_Default_Handler  CSV_SWDT_LVD_IRQHandler
                Set_Default_Handler  MFS0_RX_TX_IRQHandler
                Set_Default_Handler  MFS1_RX_TX_IRQHandler
                Set_Default_Handler  MFS3_RX_TX_IRQHandler
                Set_Default_Handler  MFS4_RX_TX_IRQHandler
                Set_Default_Handler  MFS6_RX_TX_I2CSLAVE_IRQHandler
                Set_Default_Handler  MFS7_RX_TX_IRQHandler
                Set_Default_Handler  ADC0_IRQHandler
                Set_Default_Handler  USB0_F_ED123_IRQHandler
                Set_Default_Handler  USB0_F_ED450I_IRQHandler
                Set_Default_Handler  USB0_F_ED0O_ST_IRQHandler
                Set_Default_Handler  USB0_H_IRQHandler
                Set_Default_Handler  TIM_IRQHandler
                Set_Default_Handler  WC_RTC_DT_IRQHandler
                Set_Default_Handler  EXINT0_1_IRQHandler
                Set_Default_Handler  EXINT2_3_IRQHandler
                Set_Default_Handler  EXINT4_5_IRQHandler
                Set_Default_Handler  EXINT6_7_IRQHandler
                Set_Default_Handler  EXINT8_IRQHandler
                Set_Default_Handler  EXINT12_13_IRQHandler
                Set_Default_Handler  EXINT15_IRQHandler
                Set_Default_Handler  BT0_4_IRQHandler
                Set_Default_Handler  BT1_5_IRQHandler
                Set_Default_Handler  BT2_6_IRQHandler
                Set_Default_Handler  BT3_7_IRQHandler
                Set_Default_Handler  HDMICEC0_1_IRQHandler
                Set_Default_Handler  SMCIF1_FLASHIF_IRQHandler
                Set_Default_Handler  DSTC_IRQHandler

                .end
