/*
******************************************************************************
**
** @file        : xmc1201-q040f0128.S
** @author      : MikroElektronika
** @brief       : Startup file for XMC1201-Q040F0128 Device
**                Core: ARM Cortex-M0
**                Interrupt vector table generated from the device header IRQn_Type.
**                XMC1000: the ROM vector table branches to SRAM veneers at
**                0x2000000C.. (copied from .rodata.xmc_veneers by Reset_Handler).
**
**  Target      : INFINEON XMC1201-Q040F0128
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
                .long    SCU_0_IRQHandler                   /*   0 SCU_0 */
                .long    SCU_1_IRQHandler                   /*   1 SCU_1 */
                .long    SCU_2_IRQHandler                   /*   2 SCU_2 */
                .long    ERU0_0_IRQHandler                  /*   3 ERU0_0 */
                .long    ERU0_1_IRQHandler                  /*   4 ERU0_1 */
                .long    ERU0_2_IRQHandler                  /*   5 ERU0_2 */
                .long    ERU0_3_IRQHandler                  /*   6 ERU0_3 */
                .long    0                                  /*   7 Reserved */
                .long    0                                  /*   8 Reserved */
                .long    USIC0_0_IRQHandler                 /*   9 USIC0_0 */
                .long    USIC0_1_IRQHandler                 /*  10 USIC0_1 */
                .long    USIC0_2_IRQHandler                 /*  11 USIC0_2 */
                .long    USIC0_3_IRQHandler                 /*  12 USIC0_3 */
                .long    USIC0_4_IRQHandler                 /*  13 USIC0_4 */
                .long    USIC0_5_IRQHandler                 /*  14 USIC0_5 */
                .long    VADC0_C0_0_IRQHandler              /*  15 VADC0_C0_0 */
                .long    VADC0_C0_1_IRQHandler              /*  16 VADC0_C0_1 */
                .long    VADC0_G0_0_IRQHandler              /*  17 VADC0_G0_0 */
                .long    VADC0_G0_1_IRQHandler              /*  18 VADC0_G0_1 */
                .long    VADC0_G1_0_IRQHandler              /*  19 VADC0_G1_0 */
                .long    VADC0_G1_1_IRQHandler              /*  20 VADC0_G1_1 */
                .long    CCU40_0_IRQHandler                 /*  21 CCU40_0 */
                .long    CCU40_1_IRQHandler                 /*  22 CCU40_1 */
                .long    CCU40_2_IRQHandler                 /*  23 CCU40_2 */
                .long    CCU40_3_IRQHandler                 /*  24 CCU40_3 */
                .long    0                                  /*  25 Reserved */
                .long    0                                  /*  26 Reserved */
                .long    0                                  /*  27 Reserved */
                .long    0                                  /*  28 Reserved */
                .long    LEDTS0_0_IRQHandler                /*  29 LEDTS0_0 */
                .long    LEDTS1_0_IRQHandler                /*  30 LEDTS1_0 */
                .long    BCCU0_0_IRQHandler                 /*  31 BCCU0_0 */
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
                /* The boot ROM loads SP from 0x10001000; set it again so a
                   debugger "reset and run" without SSW works as well. */
                ldr      r0, =__StackTop
                mov      sp, r0

                /* Install the interrupt veneers at 0x2000000C (see below). The
                   veneer block is position independent (pc relative literals),
                   it is linked in flash and copied word by word. */
                ldr      r1, =__xmc_veneers_start
                ldr      r2, =__xmc_veneers_end
                ldr      r3, =__xmc_veneers_ram
.L_veneer_copy:
                cmp      r1, r2
                bhs      .L_veneer_done
                ldr      r0, [r1]
                str      r0, [r3]
                adds     r1, #4
                adds     r3, #4
                b        .L_veneer_copy
.L_veneer_done:

/* Interrupt veneers. The XMC1000 boot ROM vector table points every
 * exception n >= 3 to SRAM address 0x20000000 + 4 * n. Each veneer is
 * 4 bytes (ldr r0, =handler ; mov pc, r0), the literal pool follows the
 * last veneer. Linked in flash (.rodata), copied to 0x2000000C above. */
                .pushsection .rodata.xmc_veneers, "a", %progbits
                .align   2
                .thumb
                .globl   __xmc_veneers_start
__xmc_veneers_start:
                ldr      r0, =HardFault_Handler            /* 0x2000000C exception 3 */
                mov      pc, r0
                .long    0                             /* 0x20000010 exception 4 (reserved) */
                .long    0                             /* 0x20000014 exception 5 (reserved) */
                .long    0                             /* 0x20000018 exception 6 (reserved) */
                .long    0                             /* 0x2000001C exception 7 (reserved) */
                .long    0                             /* 0x20000020 exception 8 (reserved) */
                .long    0                             /* 0x20000024 exception 9 (reserved) */
                .long    0                             /* 0x20000028 exception 10 (reserved) */
                ldr      r0, =SVC_Handler                  /* 0x2000002C exception 11 */
                mov      pc, r0
                .long    0                             /* 0x20000030 exception 12 (reserved) */
                .long    0                             /* 0x20000034 exception 13 (reserved) */
                ldr      r0, =PendSV_Handler               /* 0x20000038 exception 14 */
                mov      pc, r0
                ldr      r0, =SysTick_Handler              /* 0x2000003C exception 15 */
                mov      pc, r0
                ldr      r0, =SCU_0_IRQHandler             /* 0x20000040 IRQ 0 */
                mov      pc, r0
                ldr      r0, =SCU_1_IRQHandler             /* 0x20000044 IRQ 1 */
                mov      pc, r0
                ldr      r0, =SCU_2_IRQHandler             /* 0x20000048 IRQ 2 */
                mov      pc, r0
                ldr      r0, =ERU0_0_IRQHandler            /* 0x2000004C IRQ 3 */
                mov      pc, r0
                ldr      r0, =ERU0_1_IRQHandler            /* 0x20000050 IRQ 4 */
                mov      pc, r0
                ldr      r0, =ERU0_2_IRQHandler            /* 0x20000054 IRQ 5 */
                mov      pc, r0
                ldr      r0, =ERU0_3_IRQHandler            /* 0x20000058 IRQ 6 */
                mov      pc, r0
                ldr      r0, =Default_Handler              /* 0x2000005C IRQ 7 (not used) */
                mov      pc, r0
                ldr      r0, =Default_Handler              /* 0x20000060 IRQ 8 (not used) */
                mov      pc, r0
                ldr      r0, =USIC0_0_IRQHandler           /* 0x20000064 IRQ 9 */
                mov      pc, r0
                ldr      r0, =USIC0_1_IRQHandler           /* 0x20000068 IRQ 10 */
                mov      pc, r0
                ldr      r0, =USIC0_2_IRQHandler           /* 0x2000006C IRQ 11 */
                mov      pc, r0
                ldr      r0, =USIC0_3_IRQHandler           /* 0x20000070 IRQ 12 */
                mov      pc, r0
                ldr      r0, =USIC0_4_IRQHandler           /* 0x20000074 IRQ 13 */
                mov      pc, r0
                ldr      r0, =USIC0_5_IRQHandler           /* 0x20000078 IRQ 14 */
                mov      pc, r0
                ldr      r0, =VADC0_C0_0_IRQHandler        /* 0x2000007C IRQ 15 */
                mov      pc, r0
                ldr      r0, =VADC0_C0_1_IRQHandler        /* 0x20000080 IRQ 16 */
                mov      pc, r0
                ldr      r0, =VADC0_G0_0_IRQHandler        /* 0x20000084 IRQ 17 */
                mov      pc, r0
                ldr      r0, =VADC0_G0_1_IRQHandler        /* 0x20000088 IRQ 18 */
                mov      pc, r0
                ldr      r0, =VADC0_G1_0_IRQHandler        /* 0x2000008C IRQ 19 */
                mov      pc, r0
                ldr      r0, =VADC0_G1_1_IRQHandler        /* 0x20000090 IRQ 20 */
                mov      pc, r0
                ldr      r0, =CCU40_0_IRQHandler           /* 0x20000094 IRQ 21 */
                mov      pc, r0
                ldr      r0, =CCU40_1_IRQHandler           /* 0x20000098 IRQ 22 */
                mov      pc, r0
                ldr      r0, =CCU40_2_IRQHandler           /* 0x2000009C IRQ 23 */
                mov      pc, r0
                ldr      r0, =CCU40_3_IRQHandler           /* 0x200000A0 IRQ 24 */
                mov      pc, r0
                ldr      r0, =Default_Handler              /* 0x200000A4 IRQ 25 (not used) */
                mov      pc, r0
                ldr      r0, =Default_Handler              /* 0x200000A8 IRQ 26 (not used) */
                mov      pc, r0
                ldr      r0, =Default_Handler              /* 0x200000AC IRQ 27 (not used) */
                mov      pc, r0
                ldr      r0, =Default_Handler              /* 0x200000B0 IRQ 28 (not used) */
                mov      pc, r0
                ldr      r0, =LEDTS0_0_IRQHandler          /* 0x200000B4 IRQ 29 */
                mov      pc, r0
                ldr      r0, =LEDTS1_0_IRQHandler          /* 0x200000B8 IRQ 30 */
                mov      pc, r0
                ldr      r0, =BCCU0_0_IRQHandler           /* 0x200000BC IRQ 31 */
                mov      pc, r0
                .ltorg
                .globl   __xmc_veneers_end
__xmc_veneers_end:
                .popsection

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

                Set_Default_Handler  SCU_0_IRQHandler
                Set_Default_Handler  SCU_1_IRQHandler
                Set_Default_Handler  SCU_2_IRQHandler
                Set_Default_Handler  ERU0_0_IRQHandler
                Set_Default_Handler  ERU0_1_IRQHandler
                Set_Default_Handler  ERU0_2_IRQHandler
                Set_Default_Handler  ERU0_3_IRQHandler
                Set_Default_Handler  USIC0_0_IRQHandler
                Set_Default_Handler  USIC0_1_IRQHandler
                Set_Default_Handler  USIC0_2_IRQHandler
                Set_Default_Handler  USIC0_3_IRQHandler
                Set_Default_Handler  USIC0_4_IRQHandler
                Set_Default_Handler  USIC0_5_IRQHandler
                Set_Default_Handler  VADC0_C0_0_IRQHandler
                Set_Default_Handler  VADC0_C0_1_IRQHandler
                Set_Default_Handler  VADC0_G0_0_IRQHandler
                Set_Default_Handler  VADC0_G0_1_IRQHandler
                Set_Default_Handler  VADC0_G1_0_IRQHandler
                Set_Default_Handler  VADC0_G1_1_IRQHandler
                Set_Default_Handler  CCU40_0_IRQHandler
                Set_Default_Handler  CCU40_1_IRQHandler
                Set_Default_Handler  CCU40_2_IRQHandler
                Set_Default_Handler  CCU40_3_IRQHandler
                Set_Default_Handler  LEDTS0_0_IRQHandler
                Set_Default_Handler  LEDTS1_0_IRQHandler
                Set_Default_Handler  BCCU0_0_IRQHandler

                .end
