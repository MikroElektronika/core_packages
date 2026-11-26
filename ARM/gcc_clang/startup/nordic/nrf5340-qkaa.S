/*
******************************************************************************
**
** @file        : nrf5340-qkaa.S
** @author      : MikroElektronika
** @brief       : Startup file for NRF5340-QKAA Device
**                Core: ARM Cortex-M33F
**                Interrupt vector table generated from the Nordic MDK IRQn_Type.
**
**  Target      : NORDIC SEMICONDUCTOR NRF5340-QKAA
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
                .arch    armv8-m.main

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
                .long    SecureFault_Handler                /*  -9 Secure Fault Handler */
                .long    0                                  /*     Reserved */
                .long    0                                  /*     Reserved */
                .long    0                                  /*     Reserved */
                .long    SVC_Handler                        /*  -5 SVCall Handler */
                .long    DebugMon_Handler                   /*  -4 Debug Monitor Handler */
                .long    0                                  /*     Reserved */
                .long    PendSV_Handler                     /*  -2 PendSV Handler */
                .long    SysTick_Handler                    /*  -1 SysTick Handler */

                /* Interrupts */
                .long    FPU_IRQHandler                     /*   0 FPU */
                .long    CACHE_IRQHandler                   /*   1 CACHE */
                .long    0                                  /*   2 Reserved */
                .long    SPU_IRQHandler                     /*   3 SPU */
                .long    0                                  /*   4 Reserved */
                .long    CLOCK_POWER_IRQHandler             /*   5 CLOCK_POWER */
                .long    0                                  /*   6 Reserved */
                .long    0                                  /*   7 Reserved */
                .long    SERIAL0_IRQHandler                 /*   8 SERIAL0 */
                .long    SERIAL1_IRQHandler                 /*   9 SERIAL1 */
                .long    SPIM4_IRQHandler                   /*  10 SPIM4 */
                .long    SERIAL2_IRQHandler                 /*  11 SERIAL2 */
                .long    SERIAL3_IRQHandler                 /*  12 SERIAL3 */
                .long    GPIOTE0_IRQHandler                 /*  13 GPIOTE0 */
                .long    SAADC_IRQHandler                   /*  14 SAADC */
                .long    TIMER0_IRQHandler                  /*  15 TIMER0 */
                .long    TIMER1_IRQHandler                  /*  16 TIMER1 */
                .long    TIMER2_IRQHandler                  /*  17 TIMER2 */
                .long    0                                  /*  18 Reserved */
                .long    0                                  /*  19 Reserved */
                .long    RTC0_IRQHandler                    /*  20 RTC0 */
                .long    RTC1_IRQHandler                    /*  21 RTC1 */
                .long    0                                  /*  22 Reserved */
                .long    0                                  /*  23 Reserved */
                .long    WDT0_IRQHandler                    /*  24 WDT0 */
                .long    WDT1_IRQHandler                    /*  25 WDT1 */
                .long    COMP_LPCOMP_IRQHandler             /*  26 COMP_LPCOMP */
                .long    EGU0_IRQHandler                    /*  27 EGU0 */
                .long    EGU1_IRQHandler                    /*  28 EGU1 */
                .long    EGU2_IRQHandler                    /*  29 EGU2 */
                .long    EGU3_IRQHandler                    /*  30 EGU3 */
                .long    EGU4_IRQHandler                    /*  31 EGU4 */
                .long    EGU5_IRQHandler                    /*  32 EGU5 */
                .long    PWM0_IRQHandler                    /*  33 PWM0 */
                .long    PWM1_IRQHandler                    /*  34 PWM1 */
                .long    PWM2_IRQHandler                    /*  35 PWM2 */
                .long    PWM3_IRQHandler                    /*  36 PWM3 */
                .long    0                                  /*  37 Reserved */
                .long    PDM0_IRQHandler                    /*  38 PDM0 */
                .long    0                                  /*  39 Reserved */
                .long    I2S0_IRQHandler                    /*  40 I2S0 */
                .long    0                                  /*  41 Reserved */
                .long    IPC_IRQHandler                     /*  42 IPC */
                .long    QSPI_IRQHandler                    /*  43 QSPI */
                .long    0                                  /*  44 Reserved */
                .long    NFCT_IRQHandler                    /*  45 NFCT */
                .long    0                                  /*  46 Reserved */
                .long    GPIOTE1_IRQHandler                 /*  47 GPIOTE1 */
                .long    0                                  /*  48 Reserved */
                .long    0                                  /*  49 Reserved */
                .long    0                                  /*  50 Reserved */
                .long    QDEC0_IRQHandler                   /*  51 QDEC0 */
                .long    QDEC1_IRQHandler                   /*  52 QDEC1 */
                .long    0                                  /*  53 Reserved */
                .long    USBD_IRQHandler                    /*  54 USBD */
                .long    USBREGULATOR_IRQHandler            /*  55 USBREGULATOR */
                .long    0                                  /*  56 Reserved */
                .long    KMU_IRQHandler                     /*  57 KMU */
                .long    0                                  /*  58 Reserved */
                .long    0                                  /*  59 Reserved */
                .long    0                                  /*  60 Reserved */
                .long    0                                  /*  61 Reserved */
                .long    0                                  /*  62 Reserved */
                .long    0                                  /*  63 Reserved */
                .long    0                                  /*  64 Reserved */
                .long    0                                  /*  65 Reserved */
                .long    0                                  /*  66 Reserved */
                .long    0                                  /*  67 Reserved */
                .long    CRYPTOCELL_IRQHandler              /*  68 CRYPTOCELL */
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

                /* Nordic SystemInit applies errata workarounds - called after RAM init as in the Nordic MDK */
                bl       SystemInit

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
                Set_Default_Handler  SecureFault_Handler
                Set_Default_Handler  SVC_Handler
                Set_Default_Handler  DebugMon_Handler
                Set_Default_Handler  PendSV_Handler
                Set_Default_Handler  SysTick_Handler
                Set_Default_Handler  FPU_IRQHandler
                Set_Default_Handler  CACHE_IRQHandler
                Set_Default_Handler  SPU_IRQHandler
                Set_Default_Handler  CLOCK_POWER_IRQHandler
                Set_Default_Handler  SERIAL0_IRQHandler
                Set_Default_Handler  SERIAL1_IRQHandler
                Set_Default_Handler  SPIM4_IRQHandler
                Set_Default_Handler  SERIAL2_IRQHandler
                Set_Default_Handler  SERIAL3_IRQHandler
                Set_Default_Handler  GPIOTE0_IRQHandler
                Set_Default_Handler  SAADC_IRQHandler
                Set_Default_Handler  TIMER0_IRQHandler
                Set_Default_Handler  TIMER1_IRQHandler
                Set_Default_Handler  TIMER2_IRQHandler
                Set_Default_Handler  RTC0_IRQHandler
                Set_Default_Handler  RTC1_IRQHandler
                Set_Default_Handler  WDT0_IRQHandler
                Set_Default_Handler  WDT1_IRQHandler
                Set_Default_Handler  COMP_LPCOMP_IRQHandler
                Set_Default_Handler  EGU0_IRQHandler
                Set_Default_Handler  EGU1_IRQHandler
                Set_Default_Handler  EGU2_IRQHandler
                Set_Default_Handler  EGU3_IRQHandler
                Set_Default_Handler  EGU4_IRQHandler
                Set_Default_Handler  EGU5_IRQHandler
                Set_Default_Handler  PWM0_IRQHandler
                Set_Default_Handler  PWM1_IRQHandler
                Set_Default_Handler  PWM2_IRQHandler
                Set_Default_Handler  PWM3_IRQHandler
                Set_Default_Handler  PDM0_IRQHandler
                Set_Default_Handler  I2S0_IRQHandler
                Set_Default_Handler  IPC_IRQHandler
                Set_Default_Handler  QSPI_IRQHandler
                Set_Default_Handler  NFCT_IRQHandler
                Set_Default_Handler  GPIOTE1_IRQHandler
                Set_Default_Handler  QDEC0_IRQHandler
                Set_Default_Handler  QDEC1_IRQHandler
                Set_Default_Handler  USBD_IRQHandler
                Set_Default_Handler  USBREGULATOR_IRQHandler
                Set_Default_Handler  KMU_IRQHandler
                Set_Default_Handler  CRYPTOCELL_IRQHandler


                .end
