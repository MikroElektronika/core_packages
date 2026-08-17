/*
******************************************************************************
**
** @file        : tmpm4k1fybug.S
** @author      : Ivan Ruzavin (MikroE)
** @brief       : Startup file for TMPM4K1FYBUG Device
**                Core: ARM Cortex-M4
**
**  Target      : TOSHIBA TMPM4K1FYBUG
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
                .long    INT00_Handler                        /*   0 INT00 */
                .long    INT01_Handler                        /*   1 INT01 */
                .long    INT02_Handler                        /*   2 INT02 */
                .long    INT03_Handler                        /*   3 INT03 */
                .long    INT04_Handler                        /*   4 INT04 */
                .long    INT05_Handler                        /*   5 INT05 */
                .long    INT06_Handler                        /*   6 INT06 */
                .long    INT07_Handler                        /*   7 INT07 */
                .long    INT08_Handler                        /*   8 INT08 */
                .long    Interrupt9_Handler                   /*   9 Reserved */
                .long    Interrupt10_Handler                  /*  10 Reserved */
                .long    Interrupt11_Handler                  /*  11 Reserved */
                .long    Interrupt12_Handler                  /*  12 Reserved */
                .long    INTEMG0_Handler                      /*  13 INTEMG0 */
                .long    Interrupt14_Handler                  /*  14 Reserved */
                .long    INTOVV0_Handler                      /*  15 INTOVV0 */
                .long    Interrupt16_Handler                  /*  16 Reserved */
                .long    INTPWM0_Handler                      /*  17 INTPWM0 */
                .long    Interrupt18_Handler                  /*  18 Reserved */
                .long    INTENC00_Handler                     /*  19 INTENC00 */
                .long    INTENC01_Handler                     /*  20 INTENC01 */
                .long    INTADAPDA_Handler                    /*  21 INTADAPDA */
                .long    INTADAPDB_Handler                    /*  22 INTADAPDB */
                .long    Interrupt23_Handler                  /*  23 Reserved */
                .long    Interrupt24_Handler                  /*  24 Reserved */
                .long    Interrupt25_Handler                  /*  25 Reserved */
                .long    INTADACP0_Handler                    /*  26 INTADACP0 */
                .long    INTADACP1_Handler                    /*  27 INTADACP1 */
                .long    INTADATRG_Handler                    /*  28 INTADATRG */
                .long    INTADASGL_Handler                    /*  29 INTADASGL */
                .long    INTADACNT_Handler                    /*  30 INTADACNT */
                .long    INTSC0RX_Handler                     /*  31 INTSC0RX */
                .long    INTSC0TX_Handler                     /*  32 INTSC0TX */
                .long    INTSC0ERR_Handler                    /*  33 INTSC0ERR */
                .long    INTSC1RX_Handler                     /*  34 INTSC1RX */
                .long    INTSC1TX_Handler                     /*  35 INTSC1TX */
                .long    INTSC1ERR_Handler                    /*  36 INTSC1ERR */
                .long    INTSC2RX_Handler                     /*  37 INTSC2RX */
                .long    INTSC2TX_Handler                     /*  38 INTSC2TX */
                .long    INTSC2ERR_Handler                    /*  39 INTSC2ERR */
                .long    Interrupt40_Handler                  /*  40 Reserved */
                .long    Interrupt41_Handler                  /*  41 Reserved */
                .long    Interrupt42_Handler                  /*  42 Reserved */
                .long    INTI2C0NST_Handler                   /*  43 INTI2C0NST */
                .long    INTI2C0ATX_Handler                   /*  44 INTI2C0ATX */
                .long    INTI2C0BRX_Handler                   /*  45 INTI2C0BRX */
                .long    INTI2C0NA_Handler                    /*  46 INTI2C0NA */
                .long    INTT32A00AC_Handler                  /*  47 INTT32A00AC */
                .long    INTT32A00ACCAP0_Handler              /*  48 INTT32A00ACCAP0 */
                .long    INTT32A00ACCAP1_Handler              /*  49 INTT32A00ACCAP1 */
                .long    INTT32A00B_Handler                   /*  50 INTT32A00B */
                .long    INTT32A00BCAP0_Handler               /*  51 INTT32A00BCAP0 */
                .long    INTT32A00BCAP1_Handler               /*  52 INTT32A00BCAP1 */
                .long    INTT32A01AC_Handler                  /*  53 INTT32A01AC */
                .long    INTT32A01ACCAP0_Handler              /*  54 INTT32A01ACCAP0 */
                .long    INTT32A01ACCAP1_Handler              /*  55 INTT32A01ACCAP1 */
                .long    INTT32A01B_Handler                   /*  56 INTT32A01B */
                .long    INTT32A01BCAP0_Handler               /*  57 INTT32A01BCAP0 */
                .long    INTT32A01BCAP1_Handler               /*  58 INTT32A01BCAP1 */
                .long    INTT32A02AC_Handler                  /*  59 INTT32A02AC */
                .long    INTT32A02ACCAP0_Handler              /*  60 INTT32A02ACCAP0 */
                .long    INTT32A02ACCAP1_Handler              /*  61 INTT32A02ACCAP1 */
                .long    INTT32A02B_Handler                   /*  62 INTT32A02B */
                .long    INTT32A02BCAP0_Handler               /*  63 INTT32A02BCAP0 */
                .long    INTT32A02BCAP1_Handler               /*  64 INTT32A02BCAP1 */
                .long    INTT32A03AC_Handler                  /*  65 INTT32A03AC */
                .long    INTT32A03ACCAP0_Handler              /*  66 INTT32A03ACCAP0 */
                .long    INTT32A03ACCAP1_Handler              /*  67 INTT32A03ACCAP1 */
                .long    INTT32A03B_Handler                   /*  68 INTT32A03B */
                .long    INTT32A03BCAP0_Handler               /*  69 INTT32A03BCAP0 */
                .long    INTT32A03BCAP1_Handler               /*  70 INTT32A03BCAP1 */
                .long    INTT32A04AC_Handler                  /*  71 INTT32A04AC */
                .long    INTT32A04ACCAP0_Handler              /*  72 INTT32A04ACCAP0 */
                .long    INTT32A04ACCAP1_Handler              /*  73 INTT32A04ACCAP1 */
                .long    INTT32A04B_Handler                   /*  74 INTT32A04B */
                .long    INTT32A04BCAP0_Handler               /*  75 INTT32A04BCAP0 */
                .long    INTT32A04BCAP1_Handler               /*  76 INTT32A04BCAP1 */
                .long    INTT32A05AC_Handler                  /*  77 INTT32A05AC */
                .long    INTT32A05ACCAP0_Handler              /*  78 INTT32A05ACCAP0 */
                .long    INTT32A05ACCAP1_Handler              /*  79 INTT32A05ACCAP1 */
                .long    INTT32A05B_Handler                   /*  80 INTT32A05B */
                .long    INTT32A05BCAP0_Handler               /*  81 INTT32A05BCAP0 */
                .long    INTT32A05BCAP1_Handler               /*  82 INTT32A05BCAP1 */
                .long    INTPARI_Handler                      /*  83 INTPARI */
                .long    INTDMAATC_Handler                    /*  84 INTDMAATC */
                .long    INTDMAAERR_Handler                   /*  85 INTDMAAERR */
                .long    Interrupt86_Handler                  /*  86 Reserved */
                .long    INTFLCRDY_Handler                    /*  87 INTFLCRDY */
                .long    Interrupt88_Handler                  /*  88 Reserved */
                .long    INTENC10_Handler                     /*  89 INTENC10 */
                .long    INTENC11_Handler                     /*  90 INTENC11 */
                .long    INTADBPDA_Handler                    /*  91 INTADBPDA */
                .long    INTADBPDB_Handler                    /*  92 INTADBPDB */
                .long    INTADBCP0_Handler                    /*  93 INTADBCP0 */
                .long    INTADBCP1_Handler                    /*  94 INTADBCP1 */
                .long    INTADBTRG_Handler                    /*  95 INTADBTRG */
                .long    INTADBSGL_Handler                    /*  96 INTADBSGL */
                .long    INTADBCNT_Handler                    /*  97 INTADBCNT */
                .long    INTADCCMP_Handler                    /*  98 INTADCCMP */
                .space   (126 * 4)
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

                Set_Default_Handler  INT00_Handler
                Set_Default_Handler  INT01_Handler
                Set_Default_Handler  INT02_Handler
                Set_Default_Handler  INT03_Handler
                Set_Default_Handler  INT04_Handler
                Set_Default_Handler  INT05_Handler
                Set_Default_Handler  INT06_Handler
                Set_Default_Handler  INT07_Handler
                Set_Default_Handler  INT08_Handler
                Set_Default_Handler  Interrupt9_Handler
                Set_Default_Handler  Interrupt10_Handler
                Set_Default_Handler  Interrupt11_Handler
                Set_Default_Handler  Interrupt12_Handler
                Set_Default_Handler  INTEMG0_Handler
                Set_Default_Handler  Interrupt14_Handler
                Set_Default_Handler  INTOVV0_Handler
                Set_Default_Handler  Interrupt16_Handler
                Set_Default_Handler  INTPWM0_Handler
                Set_Default_Handler  Interrupt18_Handler
                Set_Default_Handler  INTENC00_Handler
                Set_Default_Handler  INTENC01_Handler
                Set_Default_Handler  INTADAPDA_Handler
                Set_Default_Handler  INTADAPDB_Handler
                Set_Default_Handler  Interrupt23_Handler
                Set_Default_Handler  Interrupt24_Handler
                Set_Default_Handler  Interrupt25_Handler
                Set_Default_Handler  INTADACP0_Handler
                Set_Default_Handler  INTADACP1_Handler
                Set_Default_Handler  INTADATRG_Handler
                Set_Default_Handler  INTADASGL_Handler
                Set_Default_Handler  INTADACNT_Handler
                Set_Default_Handler  INTSC0RX_Handler
                Set_Default_Handler  INTSC0TX_Handler
                Set_Default_Handler  INTSC0ERR_Handler
                Set_Default_Handler  INTSC1RX_Handler
                Set_Default_Handler  INTSC1TX_Handler
                Set_Default_Handler  INTSC1ERR_Handler
                Set_Default_Handler  INTSC2RX_Handler
                Set_Default_Handler  INTSC2TX_Handler
                Set_Default_Handler  INTSC2ERR_Handler
                Set_Default_Handler  Interrupt40_Handler
                Set_Default_Handler  Interrupt41_Handler
                Set_Default_Handler  Interrupt42_Handler
                Set_Default_Handler  INTI2C0NST_Handler
                Set_Default_Handler  INTI2C0ATX_Handler
                Set_Default_Handler  INTI2C0BRX_Handler
                Set_Default_Handler  INTI2C0NA_Handler
                Set_Default_Handler  INTT32A00AC_Handler
                Set_Default_Handler  INTT32A00ACCAP0_Handler
                Set_Default_Handler  INTT32A00ACCAP1_Handler
                Set_Default_Handler  INTT32A00B_Handler
                Set_Default_Handler  INTT32A00BCAP0_Handler
                Set_Default_Handler  INTT32A00BCAP1_Handler
                Set_Default_Handler  INTT32A01AC_Handler
                Set_Default_Handler  INTT32A01ACCAP0_Handler
                Set_Default_Handler  INTT32A01ACCAP1_Handler
                Set_Default_Handler  INTT32A01B_Handler
                Set_Default_Handler  INTT32A01BCAP0_Handler
                Set_Default_Handler  INTT32A01BCAP1_Handler
                Set_Default_Handler  INTT32A02AC_Handler
                Set_Default_Handler  INTT32A02ACCAP0_Handler
                Set_Default_Handler  INTT32A02ACCAP1_Handler
                Set_Default_Handler  INTT32A02B_Handler
                Set_Default_Handler  INTT32A02BCAP0_Handler
                Set_Default_Handler  INTT32A02BCAP1_Handler
                Set_Default_Handler  INTT32A03AC_Handler
                Set_Default_Handler  INTT32A03ACCAP0_Handler
                Set_Default_Handler  INTT32A03ACCAP1_Handler
                Set_Default_Handler  INTT32A03B_Handler
                Set_Default_Handler  INTT32A03BCAP0_Handler
                Set_Default_Handler  INTT32A03BCAP1_Handler
                Set_Default_Handler  INTT32A04AC_Handler
                Set_Default_Handler  INTT32A04ACCAP0_Handler
                Set_Default_Handler  INTT32A04ACCAP1_Handler
                Set_Default_Handler  INTT32A04B_Handler
                Set_Default_Handler  INTT32A04BCAP0_Handler
                Set_Default_Handler  INTT32A04BCAP1_Handler
                Set_Default_Handler  INTT32A05AC_Handler
                Set_Default_Handler  INTT32A05ACCAP0_Handler
                Set_Default_Handler  INTT32A05ACCAP1_Handler
                Set_Default_Handler  INTT32A05B_Handler
                Set_Default_Handler  INTT32A05BCAP0_Handler
                Set_Default_Handler  INTT32A05BCAP1_Handler
                Set_Default_Handler  INTPARI_Handler
                Set_Default_Handler  INTDMAATC_Handler
                Set_Default_Handler  INTDMAAERR_Handler
                Set_Default_Handler  Interrupt86_Handler
                Set_Default_Handler  INTFLCRDY_Handler
                Set_Default_Handler  Interrupt88_Handler
                Set_Default_Handler  INTENC10_Handler
                Set_Default_Handler  INTENC11_Handler
                Set_Default_Handler  INTADBPDA_Handler
                Set_Default_Handler  INTADBPDB_Handler
                Set_Default_Handler  INTADBCP0_Handler
                Set_Default_Handler  INTADBCP1_Handler
                Set_Default_Handler  INTADBTRG_Handler
                Set_Default_Handler  INTADBSGL_Handler
                Set_Default_Handler  INTADBCNT_Handler
                Set_Default_Handler  INTADCCMP_Handler


                .end