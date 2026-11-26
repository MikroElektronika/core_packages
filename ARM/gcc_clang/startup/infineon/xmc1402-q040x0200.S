/*
******************************************************************************
**
** @file        : xmc1402-q040x0200.S
** @author      : MikroElektronika
** @brief       : Startup file for XMC1402-Q040X0200 Device
**                Core: ARM Cortex-M0
**                Interrupt vector table generated from the device header IRQn_Type.
**                XMC1000: the ROM vector table branches to SRAM veneers at
**                0x2000000C.. (copied from .rodata.xmc_veneers by Reset_Handler).
**
**  Target      : INFINEON XMC1402-Q040X0200
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
                .long    IRQ0_IRQHandler                    /*   0 IRQ0 */
                .long    IRQ1_IRQHandler                    /*   1 IRQ1 */
                .long    IRQ2_IRQHandler                    /*   2 IRQ2 */
                .long    IRQ3_IRQHandler                    /*   3 IRQ3 */
                .long    IRQ4_IRQHandler                    /*   4 IRQ4 */
                .long    IRQ5_IRQHandler                    /*   5 IRQ5 */
                .long    IRQ6_IRQHandler                    /*   6 IRQ6 */
                .long    IRQ7_IRQHandler                    /*   7 IRQ7 */
                .long    IRQ8_IRQHandler                    /*   8 IRQ8 */
                .long    IRQ9_IRQHandler                    /*   9 IRQ9 */
                .long    IRQ10_IRQHandler                   /*  10 IRQ10 */
                .long    IRQ11_IRQHandler                   /*  11 IRQ11 */
                .long    IRQ12_IRQHandler                   /*  12 IRQ12 */
                .long    IRQ13_IRQHandler                   /*  13 IRQ13 */
                .long    IRQ14_IRQHandler                   /*  14 IRQ14 */
                .long    IRQ15_IRQHandler                   /*  15 IRQ15 */
                .long    IRQ16_IRQHandler                   /*  16 IRQ16 */
                .long    IRQ17_IRQHandler                   /*  17 IRQ17 */
                .long    IRQ18_IRQHandler                   /*  18 IRQ18 */
                .long    IRQ19_IRQHandler                   /*  19 IRQ19 */
                .long    IRQ20_IRQHandler                   /*  20 IRQ20 */
                .long    IRQ21_IRQHandler                   /*  21 IRQ21 */
                .long    IRQ22_IRQHandler                   /*  22 IRQ22 */
                .long    IRQ23_IRQHandler                   /*  23 IRQ23 */
                .long    IRQ24_IRQHandler                   /*  24 IRQ24 */
                .long    IRQ25_IRQHandler                   /*  25 IRQ25 */
                .long    IRQ26_IRQHandler                   /*  26 IRQ26 */
                .long    IRQ27_IRQHandler                   /*  27 IRQ27 */
                .long    IRQ28_IRQHandler                   /*  28 IRQ28 */
                .long    IRQ29_IRQHandler                   /*  29 IRQ29 */
                .long    IRQ30_IRQHandler                   /*  30 IRQ30 */
                .long    IRQ31_IRQHandler                   /*  31 IRQ31 */
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
                ldr      r0, =IRQ0_IRQHandler              /* 0x20000040 IRQ 0 */
                mov      pc, r0
                ldr      r0, =IRQ1_IRQHandler              /* 0x20000044 IRQ 1 */
                mov      pc, r0
                ldr      r0, =IRQ2_IRQHandler              /* 0x20000048 IRQ 2 */
                mov      pc, r0
                ldr      r0, =IRQ3_IRQHandler              /* 0x2000004C IRQ 3 */
                mov      pc, r0
                ldr      r0, =IRQ4_IRQHandler              /* 0x20000050 IRQ 4 */
                mov      pc, r0
                ldr      r0, =IRQ5_IRQHandler              /* 0x20000054 IRQ 5 */
                mov      pc, r0
                ldr      r0, =IRQ6_IRQHandler              /* 0x20000058 IRQ 6 */
                mov      pc, r0
                ldr      r0, =IRQ7_IRQHandler              /* 0x2000005C IRQ 7 */
                mov      pc, r0
                ldr      r0, =IRQ8_IRQHandler              /* 0x20000060 IRQ 8 */
                mov      pc, r0
                ldr      r0, =IRQ9_IRQHandler              /* 0x20000064 IRQ 9 */
                mov      pc, r0
                ldr      r0, =IRQ10_IRQHandler             /* 0x20000068 IRQ 10 */
                mov      pc, r0
                ldr      r0, =IRQ11_IRQHandler             /* 0x2000006C IRQ 11 */
                mov      pc, r0
                ldr      r0, =IRQ12_IRQHandler             /* 0x20000070 IRQ 12 */
                mov      pc, r0
                ldr      r0, =IRQ13_IRQHandler             /* 0x20000074 IRQ 13 */
                mov      pc, r0
                ldr      r0, =IRQ14_IRQHandler             /* 0x20000078 IRQ 14 */
                mov      pc, r0
                ldr      r0, =IRQ15_IRQHandler             /* 0x2000007C IRQ 15 */
                mov      pc, r0
                ldr      r0, =IRQ16_IRQHandler             /* 0x20000080 IRQ 16 */
                mov      pc, r0
                ldr      r0, =IRQ17_IRQHandler             /* 0x20000084 IRQ 17 */
                mov      pc, r0
                ldr      r0, =IRQ18_IRQHandler             /* 0x20000088 IRQ 18 */
                mov      pc, r0
                ldr      r0, =IRQ19_IRQHandler             /* 0x2000008C IRQ 19 */
                mov      pc, r0
                ldr      r0, =IRQ20_IRQHandler             /* 0x20000090 IRQ 20 */
                mov      pc, r0
                ldr      r0, =IRQ21_IRQHandler             /* 0x20000094 IRQ 21 */
                mov      pc, r0
                ldr      r0, =IRQ22_IRQHandler             /* 0x20000098 IRQ 22 */
                mov      pc, r0
                ldr      r0, =IRQ23_IRQHandler             /* 0x2000009C IRQ 23 */
                mov      pc, r0
                ldr      r0, =IRQ24_IRQHandler             /* 0x200000A0 IRQ 24 */
                mov      pc, r0
                ldr      r0, =IRQ25_IRQHandler             /* 0x200000A4 IRQ 25 */
                mov      pc, r0
                ldr      r0, =IRQ26_IRQHandler             /* 0x200000A8 IRQ 26 */
                mov      pc, r0
                ldr      r0, =IRQ27_IRQHandler             /* 0x200000AC IRQ 27 */
                mov      pc, r0
                ldr      r0, =IRQ28_IRQHandler             /* 0x200000B0 IRQ 28 */
                mov      pc, r0
                ldr      r0, =IRQ29_IRQHandler             /* 0x200000B4 IRQ 29 */
                mov      pc, r0
                ldr      r0, =IRQ30_IRQHandler             /* 0x200000B8 IRQ 30 */
                mov      pc, r0
                ldr      r0, =IRQ31_IRQHandler             /* 0x200000BC IRQ 31 */
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

                Set_Default_Handler  IRQ0_IRQHandler
                Set_Default_Handler  IRQ1_IRQHandler
                Set_Default_Handler  IRQ2_IRQHandler
                Set_Default_Handler  IRQ3_IRQHandler
                Set_Default_Handler  IRQ4_IRQHandler
                Set_Default_Handler  IRQ5_IRQHandler
                Set_Default_Handler  IRQ6_IRQHandler
                Set_Default_Handler  IRQ7_IRQHandler
                Set_Default_Handler  IRQ8_IRQHandler
                Set_Default_Handler  IRQ9_IRQHandler
                Set_Default_Handler  IRQ10_IRQHandler
                Set_Default_Handler  IRQ11_IRQHandler
                Set_Default_Handler  IRQ12_IRQHandler
                Set_Default_Handler  IRQ13_IRQHandler
                Set_Default_Handler  IRQ14_IRQHandler
                Set_Default_Handler  IRQ15_IRQHandler
                Set_Default_Handler  IRQ16_IRQHandler
                Set_Default_Handler  IRQ17_IRQHandler
                Set_Default_Handler  IRQ18_IRQHandler
                Set_Default_Handler  IRQ19_IRQHandler
                Set_Default_Handler  IRQ20_IRQHandler
                Set_Default_Handler  IRQ21_IRQHandler
                Set_Default_Handler  IRQ22_IRQHandler
                Set_Default_Handler  IRQ23_IRQHandler
                Set_Default_Handler  IRQ24_IRQHandler
                Set_Default_Handler  IRQ25_IRQHandler
                Set_Default_Handler  IRQ26_IRQHandler
                Set_Default_Handler  IRQ27_IRQHandler
                Set_Default_Handler  IRQ28_IRQHandler
                Set_Default_Handler  IRQ29_IRQHandler
                Set_Default_Handler  IRQ30_IRQHandler
                Set_Default_Handler  IRQ31_IRQHandler

                .end
