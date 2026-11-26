/*
******************************************************************************
**
** @file        : nrf51422-cfac.S
** @author      : MikroElektronika
** @brief       : Startup file for NRF51422-CFAC Device
**                Core: ARM Cortex-M0
**                Interrupt vector table generated from the Nordic MDK IRQn_Type.
**
**  Target      : NORDIC SEMICONDUCTOR NRF51422-CFAC
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
                .long    POWER_CLOCK_IRQHandler             /*   0 POWER_CLOCK */
                .long    RADIO_IRQHandler                   /*   1 RADIO */
                .long    UART0_IRQHandler                   /*   2 UART0 */
                .long    SPI0_TWI0_IRQHandler               /*   3 SPI0_TWI0 */
                .long    SPI1_TWI1_IRQHandler               /*   4 SPI1_TWI1 */
                .long    0                                  /*   5 Reserved */
                .long    GPIOTE_IRQHandler                  /*   6 GPIOTE */
                .long    ADC_IRQHandler                     /*   7 ADC */
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
                .long    LPCOMP_IRQHandler                  /*  19 LPCOMP */
                .long    SWI0_IRQHandler                    /*  20 SWI0 */
                .long    SWI1_IRQHandler                    /*  21 SWI1 */
                .long    SWI2_IRQHandler                    /*  22 SWI2 */
                .long    SWI3_IRQHandler                    /*  23 SWI3 */
                .long    SWI4_IRQHandler                    /*  24 SWI4 */
                .long    SWI5_IRQHandler                    /*  25 SWI5 */
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
                ldr      r1, [r4]                /* source address */
                ldr      r2, [r4, #4]            /* destination address */
                ldr      r3, [r4, #8]            /* byte count */

.L_loop0_0:
                subs     r3, #4                  /* decrement byte count */
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
                ldr      r1, [r3]                /* destination address */
                ldr      r2, [r3, #4]            /* byte count */
                movs     r0, 0

.L_loop2_0:
                subs     r2, #4                  /* decrement byte count */
                blt      .L_loop2_0_done
                str      r0, [r1, r2]
                b        .L_loop2_0
.L_loop2_0_done:

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
                Set_Default_Handler  SVC_Handler
                Set_Default_Handler  PendSV_Handler
                Set_Default_Handler  SysTick_Handler
                Set_Default_Handler  POWER_CLOCK_IRQHandler
                Set_Default_Handler  RADIO_IRQHandler
                Set_Default_Handler  UART0_IRQHandler
                Set_Default_Handler  SPI0_TWI0_IRQHandler
                Set_Default_Handler  SPI1_TWI1_IRQHandler
                Set_Default_Handler  GPIOTE_IRQHandler
                Set_Default_Handler  ADC_IRQHandler
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
                Set_Default_Handler  LPCOMP_IRQHandler
                Set_Default_Handler  SWI0_IRQHandler
                Set_Default_Handler  SWI1_IRQHandler
                Set_Default_Handler  SWI2_IRQHandler
                Set_Default_Handler  SWI3_IRQHandler
                Set_Default_Handler  SWI4_IRQHandler
                Set_Default_Handler  SWI5_IRQHandler


                .end
