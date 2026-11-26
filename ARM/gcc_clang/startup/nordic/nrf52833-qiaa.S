/*
******************************************************************************
**
** @file        : nrf52833-qiaa.S
** @author      : MikroElektronika
** @brief       : Startup file for NRF52833-QIAA Device
**                Core: ARM Cortex-M4F
**                Interrupt vector table generated from the Nordic MDK IRQn_Type.
**
**  Target      : NORDIC SEMICONDUCTOR NRF52833-QIAA
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
                .long    POWER_CLOCK_IRQHandler             /*   0 POWER_CLOCK */
                .long    RADIO_IRQHandler                   /*   1 RADIO */
                .long    UARTE0_UART0_IRQHandler            /*   2 UARTE0_UART0 */
                .long    SPIM0_SPIS0_TWIM0_TWIS0_SPI0_TWI0_IRQHandler /*   3 SPIM0_SPIS0_TWIM0_TWIS0_SPI0_TWI0 */
                .long    SPIM1_SPIS1_TWIM1_TWIS1_SPI1_TWI1_IRQHandler /*   4 SPIM1_SPIS1_TWIM1_TWIS1_SPI1_TWI1 */
                .long    NFCT_IRQHandler                    /*   5 NFCT */
                .long    GPIOTE_IRQHandler                  /*   6 GPIOTE */
                .long    SAADC_IRQHandler                   /*   7 SAADC */
                .long    TIMER0_IRQHandler                  /*   8 TIMER0 */
                .long    TIMER1_IRQHandler                  /*   9 TIMER1 */
                .long    TIMER2_IRQHandler                  /*  10 TIMER2 */
                .long    RTC0_IRQHandler                    /*  11 RTC0 */
                .long    TEMP_IRQHandler                    /*  12 TEMP */
                .long    RNG_IRQHandler                     /*  13 RNG */
                .long    ECB_IRQHandler                     /*  14 ECB */
                .long    CCM_AAR_IRQHandler                 /*  15 CCM_AAR */
                .long    WDT_IRQHandler                     /*  16 WDT */
                .long    RTC1_IRQHandler                    /*  17 RTC1 */
                .long    QDEC_IRQHandler                    /*  18 QDEC */
                .long    COMP_LPCOMP_IRQHandler             /*  19 COMP_LPCOMP */
                .long    SWI0_EGU0_IRQHandler               /*  20 SWI0_EGU0 */
                .long    SWI1_EGU1_IRQHandler               /*  21 SWI1_EGU1 */
                .long    SWI2_EGU2_IRQHandler               /*  22 SWI2_EGU2 */
                .long    SWI3_EGU3_IRQHandler               /*  23 SWI3_EGU3 */
                .long    SWI4_EGU4_IRQHandler               /*  24 SWI4_EGU4 */
                .long    SWI5_EGU5_IRQHandler               /*  25 SWI5_EGU5 */
                .long    TIMER3_IRQHandler                  /*  26 TIMER3 */
                .long    TIMER4_IRQHandler                  /*  27 TIMER4 */
                .long    PWM0_IRQHandler                    /*  28 PWM0 */
                .long    PDM_IRQHandler                     /*  29 PDM */
                .long    0                                  /*  30 Reserved */
                .long    0                                  /*  31 Reserved */
                .long    MWU_IRQHandler                     /*  32 MWU */
                .long    PWM1_IRQHandler                    /*  33 PWM1 */
                .long    PWM2_IRQHandler                    /*  34 PWM2 */
                .long    SPIM2_SPIS2_SPI2_IRQHandler        /*  35 SPIM2_SPIS2_SPI2 */
                .long    RTC2_IRQHandler                    /*  36 RTC2 */
                .long    I2S_IRQHandler                     /*  37 I2S */
                .long    FPU_IRQHandler                     /*  38 FPU */
                .long    USBD_IRQHandler                    /*  39 USBD */
                .long    UARTE1_IRQHandler                  /*  40 UARTE1 */
                .long    0                                  /*  41 Reserved */
                .long    0                                  /*  42 Reserved */
                .long    0                                  /*  43 Reserved */
                .long    0                                  /*  44 Reserved */
                .long    PWM3_IRQHandler                    /*  45 PWM3 */
                .long    0                                  /*  46 Reserved */
                .long    SPIM3_IRQHandler                   /*  47 SPIM3 */
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
                Set_Default_Handler  SVC_Handler
                Set_Default_Handler  DebugMon_Handler
                Set_Default_Handler  PendSV_Handler
                Set_Default_Handler  SysTick_Handler
                Set_Default_Handler  POWER_CLOCK_IRQHandler
                Set_Default_Handler  RADIO_IRQHandler
                Set_Default_Handler  UARTE0_UART0_IRQHandler
                Set_Default_Handler  SPIM0_SPIS0_TWIM0_TWIS0_SPI0_TWI0_IRQHandler
                Set_Default_Handler  SPIM1_SPIS1_TWIM1_TWIS1_SPI1_TWI1_IRQHandler
                Set_Default_Handler  NFCT_IRQHandler
                Set_Default_Handler  GPIOTE_IRQHandler
                Set_Default_Handler  SAADC_IRQHandler
                Set_Default_Handler  TIMER0_IRQHandler
                Set_Default_Handler  TIMER1_IRQHandler
                Set_Default_Handler  TIMER2_IRQHandler
                Set_Default_Handler  RTC0_IRQHandler
                Set_Default_Handler  TEMP_IRQHandler
                Set_Default_Handler  RNG_IRQHandler
                Set_Default_Handler  ECB_IRQHandler
                Set_Default_Handler  CCM_AAR_IRQHandler
                Set_Default_Handler  WDT_IRQHandler
                Set_Default_Handler  RTC1_IRQHandler
                Set_Default_Handler  QDEC_IRQHandler
                Set_Default_Handler  COMP_LPCOMP_IRQHandler
                Set_Default_Handler  SWI0_EGU0_IRQHandler
                Set_Default_Handler  SWI1_EGU1_IRQHandler
                Set_Default_Handler  SWI2_EGU2_IRQHandler
                Set_Default_Handler  SWI3_EGU3_IRQHandler
                Set_Default_Handler  SWI4_EGU4_IRQHandler
                Set_Default_Handler  SWI5_EGU5_IRQHandler
                Set_Default_Handler  TIMER3_IRQHandler
                Set_Default_Handler  TIMER4_IRQHandler
                Set_Default_Handler  PWM0_IRQHandler
                Set_Default_Handler  PDM_IRQHandler
                Set_Default_Handler  MWU_IRQHandler
                Set_Default_Handler  PWM1_IRQHandler
                Set_Default_Handler  PWM2_IRQHandler
                Set_Default_Handler  SPIM2_SPIS2_SPI2_IRQHandler
                Set_Default_Handler  RTC2_IRQHandler
                Set_Default_Handler  I2S_IRQHandler
                Set_Default_Handler  FPU_IRQHandler
                Set_Default_Handler  USBD_IRQHandler
                Set_Default_Handler  UARTE1_IRQHandler
                Set_Default_Handler  PWM3_IRQHandler
                Set_Default_Handler  SPIM3_IRQHandler


                .end
