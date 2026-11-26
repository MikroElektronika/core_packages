/*
******************************************************************************
**
** @file        : cy9afb42mbpmc1-g-jne2.S
** @author      : MikroElektronika
** @brief       : Startup file for CY9AFB42MBPMC1-G-JNE2 Device
**                Core: ARM Cortex-M3
**                Interrupt vector table generated from the device header IRQn_Type.
**                FM3: vector table at the start of the main flash (0x00000000).
**                The hardware watchdog is stopped in SystemInit (init_clock.c).
**
**  Target      : INFINEON CY9AFB42MBPMC1-G-JNE2
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
                .long    CSV_IRQHandler                     /*   0 CSV */
                .long    SWDT_IRQHandler                    /*   1 SWDT */
                .long    LVD_IRQHandler                     /*   2 LVD */
                .long    0                                  /*   3 Reserved */
                .long    EXINT0_7_IRQHandler                /*   4 EXINT0_7 */
                .long    EXINT8_15_IRQHandler               /*   5 EXINT8_15 */
                .long    DTIM_QDU_IRQHandler                /*   6 DTIM_QDU */
                .long    MFS0RX_IRQHandler                  /*   7 MFS0RX */
                .long    MFS0TX_IRQHandler                  /*   8 MFS0TX */
                .long    MFS1RX_IRQHandler                  /*   9 MFS1RX */
                .long    MFS1TX_IRQHandler                  /*  10 MFS1TX */
                .long    MFS2RX_IRQHandler                  /*  11 MFS2RX */
                .long    MFS2TX_IRQHandler                  /*  12 MFS2TX */
                .long    MFS3RX_IRQHandler                  /*  13 MFS3RX */
                .long    MFS3TX_IRQHandler                  /*  14 MFS3TX */
                .long    MFS4RX_IRQHandler                  /*  15 MFS4RX */
                .long    MFS4TX_IRQHandler                  /*  16 MFS4TX */
                .long    MFS5RX_IRQHandler                  /*  17 MFS5RX */
                .long    MFS5TX_IRQHandler                  /*  18 MFS5TX */
                .long    MFS6RX_IRQHandler                  /*  19 MFS6RX */
                .long    MFS6TX_IRQHandler                  /*  20 MFS6TX */
                .long    MFS7RX_IRQHandler                  /*  21 MFS7RX */
                .long    MFS7TX_IRQHandler                  /*  22 MFS7TX */
                .long    0                                  /*  23 Reserved */
                .long    OSC_PLL_WC_RTC_IRQHandler          /*  24 OSC_PLL_WC_RTC */
                .long    ADC0_IRQHandler                    /*  25 ADC0 */
                .long    ADC1_IRQHandler                    /*  26 ADC1 */
                .long    LCDC_IRQHandler                    /*  27 LCDC */
                .long    0                                  /*  28 Reserved */
                .long    0                                  /*  29 Reserved */
                .long    0                                  /*  30 Reserved */
                .long    BTIM0_7_IRQHandler                 /*  31 BTIM0_7 */
                .long    0                                  /*  32 Reserved */
                .long    0                                  /*  33 Reserved */
                .long    USB0F_IRQHandler                   /*  34 USB0F */
                .long    USB0F_USB0H_IRQHandler             /*  35 USB0F_USB0H */
                .long    HDMICEC0_IRQHandler                /*  36 HDMICEC0 */
                .long    HDMICEC1_IRQHandler                /*  37 HDMICEC1 */
                .long    DMAC0_IRQHandler                   /*  38 DMAC0 */
                .long    DMAC1_IRQHandler                   /*  39 DMAC1 */
                .long    DMAC2_IRQHandler                   /*  40 DMAC2 */
                .long    DMAC3_IRQHandler                   /*  41 DMAC3 */
                .long    DMAC4_IRQHandler                   /*  42 DMAC4 */
                .long    DMAC5_IRQHandler                   /*  43 DMAC5 */
                .long    DMAC6_IRQHandler                   /*  44 DMAC6 */
                .long    DMAC7_IRQHandler                   /*  45 DMAC7 */
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
                Set_Default_Handler  MemManage_Handler
                Set_Default_Handler  BusFault_Handler
                Set_Default_Handler  UsageFault_Handler
                Set_Default_Handler  SVC_Handler
                Set_Default_Handler  DebugMon_Handler
                Set_Default_Handler  PendSV_Handler
                Set_Default_Handler  SysTick_Handler

                Set_Default_Handler  CSV_IRQHandler
                Set_Default_Handler  SWDT_IRQHandler
                Set_Default_Handler  LVD_IRQHandler
                Set_Default_Handler  EXINT0_7_IRQHandler
                Set_Default_Handler  EXINT8_15_IRQHandler
                Set_Default_Handler  DTIM_QDU_IRQHandler
                Set_Default_Handler  MFS0RX_IRQHandler
                Set_Default_Handler  MFS0TX_IRQHandler
                Set_Default_Handler  MFS1RX_IRQHandler
                Set_Default_Handler  MFS1TX_IRQHandler
                Set_Default_Handler  MFS2RX_IRQHandler
                Set_Default_Handler  MFS2TX_IRQHandler
                Set_Default_Handler  MFS3RX_IRQHandler
                Set_Default_Handler  MFS3TX_IRQHandler
                Set_Default_Handler  MFS4RX_IRQHandler
                Set_Default_Handler  MFS4TX_IRQHandler
                Set_Default_Handler  MFS5RX_IRQHandler
                Set_Default_Handler  MFS5TX_IRQHandler
                Set_Default_Handler  MFS6RX_IRQHandler
                Set_Default_Handler  MFS6TX_IRQHandler
                Set_Default_Handler  MFS7RX_IRQHandler
                Set_Default_Handler  MFS7TX_IRQHandler
                Set_Default_Handler  OSC_PLL_WC_RTC_IRQHandler
                Set_Default_Handler  ADC0_IRQHandler
                Set_Default_Handler  ADC1_IRQHandler
                Set_Default_Handler  LCDC_IRQHandler
                Set_Default_Handler  BTIM0_7_IRQHandler
                Set_Default_Handler  USB0F_IRQHandler
                Set_Default_Handler  USB0F_USB0H_IRQHandler
                Set_Default_Handler  HDMICEC0_IRQHandler
                Set_Default_Handler  HDMICEC1_IRQHandler
                Set_Default_Handler  DMAC0_IRQHandler
                Set_Default_Handler  DMAC1_IRQHandler
                Set_Default_Handler  DMAC2_IRQHandler
                Set_Default_Handler  DMAC3_IRQHandler
                Set_Default_Handler  DMAC4_IRQHandler
                Set_Default_Handler  DMAC5_IRQHandler
                Set_Default_Handler  DMAC6_IRQHandler
                Set_Default_Handler  DMAC7_IRQHandler

                .end
