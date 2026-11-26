/*
******************************************************************************
**
** @file        : xmc4800-f144k1536.S
** @author      : MikroElektronika
** @brief       : Startup file for XMC4800-F144K1536 Device
**                Core: ARM Cortex-M4F
**                Interrupt vector table generated from the device header IRQn_Type.
**                XMC4000: SP, VTOR (cached flash 0x08000000) and FPU are set
**                by Reset_Handler, the boot ROM leaves VTOR at 0x0C000000.
**
**  Target      : INFINEON XMC4800-F144K1536
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
                .arch    armv7e-m

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
                .long    SCU_0_IRQHandler                   /*   0 SCU_0 */
                .long    ERU0_0_IRQHandler                  /*   1 ERU0_0 */
                .long    ERU0_1_IRQHandler                  /*   2 ERU0_1 */
                .long    ERU0_2_IRQHandler                  /*   3 ERU0_2 */
                .long    ERU0_3_IRQHandler                  /*   4 ERU0_3 */
                .long    ERU1_0_IRQHandler                  /*   5 ERU1_0 */
                .long    ERU1_1_IRQHandler                  /*   6 ERU1_1 */
                .long    ERU1_2_IRQHandler                  /*   7 ERU1_2 */
                .long    ERU1_3_IRQHandler                  /*   8 ERU1_3 */
                .long    0                                  /*   9 Reserved */
                .long    0                                  /*  10 Reserved */
                .long    0                                  /*  11 Reserved */
                .long    PMU0_0_IRQHandler                  /*  12 PMU0_0 */
                .long    0                                  /*  13 Reserved */
                .long    VADC0_C0_0_IRQHandler              /*  14 VADC0_C0_0 */
                .long    VADC0_C0_1_IRQHandler              /*  15 VADC0_C0_1 */
                .long    VADC0_C0_2_IRQHandler              /*  16 VADC0_C0_2 */
                .long    VADC0_C0_3_IRQHandler              /*  17 VADC0_C0_3 */
                .long    VADC0_G0_0_IRQHandler              /*  18 VADC0_G0_0 */
                .long    VADC0_G0_1_IRQHandler              /*  19 VADC0_G0_1 */
                .long    VADC0_G0_2_IRQHandler              /*  20 VADC0_G0_2 */
                .long    VADC0_G0_3_IRQHandler              /*  21 VADC0_G0_3 */
                .long    VADC0_G1_0_IRQHandler              /*  22 VADC0_G1_0 */
                .long    VADC0_G1_1_IRQHandler              /*  23 VADC0_G1_1 */
                .long    VADC0_G1_2_IRQHandler              /*  24 VADC0_G1_2 */
                .long    VADC0_G1_3_IRQHandler              /*  25 VADC0_G1_3 */
                .long    VADC0_G2_0_IRQHandler              /*  26 VADC0_G2_0 */
                .long    VADC0_G2_1_IRQHandler              /*  27 VADC0_G2_1 */
                .long    VADC0_G2_2_IRQHandler              /*  28 VADC0_G2_2 */
                .long    VADC0_G2_3_IRQHandler              /*  29 VADC0_G2_3 */
                .long    VADC0_G3_0_IRQHandler              /*  30 VADC0_G3_0 */
                .long    VADC0_G3_1_IRQHandler              /*  31 VADC0_G3_1 */
                .long    VADC0_G3_2_IRQHandler              /*  32 VADC0_G3_2 */
                .long    VADC0_G3_3_IRQHandler              /*  33 VADC0_G3_3 */
                .long    DSD0_M_0_IRQHandler                /*  34 DSD0_M_0 */
                .long    DSD0_M_1_IRQHandler                /*  35 DSD0_M_1 */
                .long    DSD0_M_2_IRQHandler                /*  36 DSD0_M_2 */
                .long    DSD0_M_3_IRQHandler                /*  37 DSD0_M_3 */
                .long    DSD0_A_4_IRQHandler                /*  38 DSD0_A_4 */
                .long    DSD0_A_5_IRQHandler                /*  39 DSD0_A_5 */
                .long    DSD0_A_6_IRQHandler                /*  40 DSD0_A_6 */
                .long    DSD0_A_7_IRQHandler                /*  41 DSD0_A_7 */
                .long    DAC0_0_IRQHandler                  /*  42 DAC0_0 */
                .long    DAC0_1_IRQHandler                  /*  43 DAC0_1 */
                .long    CCU40_0_IRQHandler                 /*  44 CCU40_0 */
                .long    CCU40_1_IRQHandler                 /*  45 CCU40_1 */
                .long    CCU40_2_IRQHandler                 /*  46 CCU40_2 */
                .long    CCU40_3_IRQHandler                 /*  47 CCU40_3 */
                .long    CCU41_0_IRQHandler                 /*  48 CCU41_0 */
                .long    CCU41_1_IRQHandler                 /*  49 CCU41_1 */
                .long    CCU41_2_IRQHandler                 /*  50 CCU41_2 */
                .long    CCU41_3_IRQHandler                 /*  51 CCU41_3 */
                .long    CCU42_0_IRQHandler                 /*  52 CCU42_0 */
                .long    CCU42_1_IRQHandler                 /*  53 CCU42_1 */
                .long    CCU42_2_IRQHandler                 /*  54 CCU42_2 */
                .long    CCU42_3_IRQHandler                 /*  55 CCU42_3 */
                .long    CCU43_0_IRQHandler                 /*  56 CCU43_0 */
                .long    CCU43_1_IRQHandler                 /*  57 CCU43_1 */
                .long    CCU43_2_IRQHandler                 /*  58 CCU43_2 */
                .long    CCU43_3_IRQHandler                 /*  59 CCU43_3 */
                .long    CCU80_0_IRQHandler                 /*  60 CCU80_0 */
                .long    CCU80_1_IRQHandler                 /*  61 CCU80_1 */
                .long    CCU80_2_IRQHandler                 /*  62 CCU80_2 */
                .long    CCU80_3_IRQHandler                 /*  63 CCU80_3 */
                .long    CCU81_0_IRQHandler                 /*  64 CCU81_0 */
                .long    CCU81_1_IRQHandler                 /*  65 CCU81_1 */
                .long    CCU81_2_IRQHandler                 /*  66 CCU81_2 */
                .long    CCU81_3_IRQHandler                 /*  67 CCU81_3 */
                .long    POSIF0_0_IRQHandler                /*  68 POSIF0_0 */
                .long    POSIF0_1_IRQHandler                /*  69 POSIF0_1 */
                .long    POSIF1_0_IRQHandler                /*  70 POSIF1_0 */
                .long    POSIF1_1_IRQHandler                /*  71 POSIF1_1 */
                .long    0                                  /*  72 Reserved */
                .long    0                                  /*  73 Reserved */
                .long    0                                  /*  74 Reserved */
                .long    0                                  /*  75 Reserved */
                .long    CAN0_0_IRQHandler                  /*  76 CAN0_0 */
                .long    CAN0_1_IRQHandler                  /*  77 CAN0_1 */
                .long    CAN0_2_IRQHandler                  /*  78 CAN0_2 */
                .long    CAN0_3_IRQHandler                  /*  79 CAN0_3 */
                .long    CAN0_4_IRQHandler                  /*  80 CAN0_4 */
                .long    CAN0_5_IRQHandler                  /*  81 CAN0_5 */
                .long    CAN0_6_IRQHandler                  /*  82 CAN0_6 */
                .long    CAN0_7_IRQHandler                  /*  83 CAN0_7 */
                .long    USIC0_0_IRQHandler                 /*  84 USIC0_0 */
                .long    USIC0_1_IRQHandler                 /*  85 USIC0_1 */
                .long    USIC0_2_IRQHandler                 /*  86 USIC0_2 */
                .long    USIC0_3_IRQHandler                 /*  87 USIC0_3 */
                .long    USIC0_4_IRQHandler                 /*  88 USIC0_4 */
                .long    USIC0_5_IRQHandler                 /*  89 USIC0_5 */
                .long    USIC1_0_IRQHandler                 /*  90 USIC1_0 */
                .long    USIC1_1_IRQHandler                 /*  91 USIC1_1 */
                .long    USIC1_2_IRQHandler                 /*  92 USIC1_2 */
                .long    USIC1_3_IRQHandler                 /*  93 USIC1_3 */
                .long    USIC1_4_IRQHandler                 /*  94 USIC1_4 */
                .long    USIC1_5_IRQHandler                 /*  95 USIC1_5 */
                .long    USIC2_0_IRQHandler                 /*  96 USIC2_0 */
                .long    USIC2_1_IRQHandler                 /*  97 USIC2_1 */
                .long    USIC2_2_IRQHandler                 /*  98 USIC2_2 */
                .long    USIC2_3_IRQHandler                 /*  99 USIC2_3 */
                .long    USIC2_4_IRQHandler                 /* 100 USIC2_4 */
                .long    USIC2_5_IRQHandler                 /* 101 USIC2_5 */
                .long    LEDTS0_0_IRQHandler                /* 102 LEDTS0_0 */
                .long    0                                  /* 103 Reserved */
                .long    FCE0_0_IRQHandler                  /* 104 FCE0_0 */
                .long    GPDMA0_0_IRQHandler                /* 105 GPDMA0_0 */
                .long    SDMMC0_0_IRQHandler                /* 106 SDMMC0_0 */
                .long    USB0_0_IRQHandler                  /* 107 USB0_0 */
                .long    ETH0_0_IRQHandler                  /* 108 ETH0_0 */
                .long    ECAT0_0_IRQHandler                 /* 109 ECAT0_0 */
                .long    GPDMA1_0_IRQHandler                /* 110 GPDMA1_0 */
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
                /* The boot ROM (SSW) jumps here with its own stack pointer and
                   VTOR = 0x0C000000 (uncached flash). The application is linked
                   to the cached alias 0x08000000. */
                ldr      r0, =__StackTop
                mov      sp, r0
                ldr      r0, =0xE000ED08         /* SCB->VTOR */
                ldr      r1, =__Vectors
                str      r1, [r0]
                /* FPU: CP10/CP11 full access (SCB->CPACR) */
                ldr      r0, =0xE000ED88
                ldr      r1, [r0]
                orr      r1, r1, #0x00F00000
                str      r1, [r0]
                dsb
                isb

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

                Set_Default_Handler  SCU_0_IRQHandler
                Set_Default_Handler  ERU0_0_IRQHandler
                Set_Default_Handler  ERU0_1_IRQHandler
                Set_Default_Handler  ERU0_2_IRQHandler
                Set_Default_Handler  ERU0_3_IRQHandler
                Set_Default_Handler  ERU1_0_IRQHandler
                Set_Default_Handler  ERU1_1_IRQHandler
                Set_Default_Handler  ERU1_2_IRQHandler
                Set_Default_Handler  ERU1_3_IRQHandler
                Set_Default_Handler  PMU0_0_IRQHandler
                Set_Default_Handler  VADC0_C0_0_IRQHandler
                Set_Default_Handler  VADC0_C0_1_IRQHandler
                Set_Default_Handler  VADC0_C0_2_IRQHandler
                Set_Default_Handler  VADC0_C0_3_IRQHandler
                Set_Default_Handler  VADC0_G0_0_IRQHandler
                Set_Default_Handler  VADC0_G0_1_IRQHandler
                Set_Default_Handler  VADC0_G0_2_IRQHandler
                Set_Default_Handler  VADC0_G0_3_IRQHandler
                Set_Default_Handler  VADC0_G1_0_IRQHandler
                Set_Default_Handler  VADC0_G1_1_IRQHandler
                Set_Default_Handler  VADC0_G1_2_IRQHandler
                Set_Default_Handler  VADC0_G1_3_IRQHandler
                Set_Default_Handler  VADC0_G2_0_IRQHandler
                Set_Default_Handler  VADC0_G2_1_IRQHandler
                Set_Default_Handler  VADC0_G2_2_IRQHandler
                Set_Default_Handler  VADC0_G2_3_IRQHandler
                Set_Default_Handler  VADC0_G3_0_IRQHandler
                Set_Default_Handler  VADC0_G3_1_IRQHandler
                Set_Default_Handler  VADC0_G3_2_IRQHandler
                Set_Default_Handler  VADC0_G3_3_IRQHandler
                Set_Default_Handler  DSD0_M_0_IRQHandler
                Set_Default_Handler  DSD0_M_1_IRQHandler
                Set_Default_Handler  DSD0_M_2_IRQHandler
                Set_Default_Handler  DSD0_M_3_IRQHandler
                Set_Default_Handler  DSD0_A_4_IRQHandler
                Set_Default_Handler  DSD0_A_5_IRQHandler
                Set_Default_Handler  DSD0_A_6_IRQHandler
                Set_Default_Handler  DSD0_A_7_IRQHandler
                Set_Default_Handler  DAC0_0_IRQHandler
                Set_Default_Handler  DAC0_1_IRQHandler
                Set_Default_Handler  CCU40_0_IRQHandler
                Set_Default_Handler  CCU40_1_IRQHandler
                Set_Default_Handler  CCU40_2_IRQHandler
                Set_Default_Handler  CCU40_3_IRQHandler
                Set_Default_Handler  CCU41_0_IRQHandler
                Set_Default_Handler  CCU41_1_IRQHandler
                Set_Default_Handler  CCU41_2_IRQHandler
                Set_Default_Handler  CCU41_3_IRQHandler
                Set_Default_Handler  CCU42_0_IRQHandler
                Set_Default_Handler  CCU42_1_IRQHandler
                Set_Default_Handler  CCU42_2_IRQHandler
                Set_Default_Handler  CCU42_3_IRQHandler
                Set_Default_Handler  CCU43_0_IRQHandler
                Set_Default_Handler  CCU43_1_IRQHandler
                Set_Default_Handler  CCU43_2_IRQHandler
                Set_Default_Handler  CCU43_3_IRQHandler
                Set_Default_Handler  CCU80_0_IRQHandler
                Set_Default_Handler  CCU80_1_IRQHandler
                Set_Default_Handler  CCU80_2_IRQHandler
                Set_Default_Handler  CCU80_3_IRQHandler
                Set_Default_Handler  CCU81_0_IRQHandler
                Set_Default_Handler  CCU81_1_IRQHandler
                Set_Default_Handler  CCU81_2_IRQHandler
                Set_Default_Handler  CCU81_3_IRQHandler
                Set_Default_Handler  POSIF0_0_IRQHandler
                Set_Default_Handler  POSIF0_1_IRQHandler
                Set_Default_Handler  POSIF1_0_IRQHandler
                Set_Default_Handler  POSIF1_1_IRQHandler
                Set_Default_Handler  CAN0_0_IRQHandler
                Set_Default_Handler  CAN0_1_IRQHandler
                Set_Default_Handler  CAN0_2_IRQHandler
                Set_Default_Handler  CAN0_3_IRQHandler
                Set_Default_Handler  CAN0_4_IRQHandler
                Set_Default_Handler  CAN0_5_IRQHandler
                Set_Default_Handler  CAN0_6_IRQHandler
                Set_Default_Handler  CAN0_7_IRQHandler
                Set_Default_Handler  USIC0_0_IRQHandler
                Set_Default_Handler  USIC0_1_IRQHandler
                Set_Default_Handler  USIC0_2_IRQHandler
                Set_Default_Handler  USIC0_3_IRQHandler
                Set_Default_Handler  USIC0_4_IRQHandler
                Set_Default_Handler  USIC0_5_IRQHandler
                Set_Default_Handler  USIC1_0_IRQHandler
                Set_Default_Handler  USIC1_1_IRQHandler
                Set_Default_Handler  USIC1_2_IRQHandler
                Set_Default_Handler  USIC1_3_IRQHandler
                Set_Default_Handler  USIC1_4_IRQHandler
                Set_Default_Handler  USIC1_5_IRQHandler
                Set_Default_Handler  USIC2_0_IRQHandler
                Set_Default_Handler  USIC2_1_IRQHandler
                Set_Default_Handler  USIC2_2_IRQHandler
                Set_Default_Handler  USIC2_3_IRQHandler
                Set_Default_Handler  USIC2_4_IRQHandler
                Set_Default_Handler  USIC2_5_IRQHandler
                Set_Default_Handler  LEDTS0_0_IRQHandler
                Set_Default_Handler  FCE0_0_IRQHandler
                Set_Default_Handler  GPDMA0_0_IRQHandler
                Set_Default_Handler  SDMMC0_0_IRQHandler
                Set_Default_Handler  USB0_0_IRQHandler
                Set_Default_Handler  ETH0_0_IRQHandler
                Set_Default_Handler  ECAT0_0_IRQHandler
                Set_Default_Handler  GPDMA1_0_IRQHandler

                .end
