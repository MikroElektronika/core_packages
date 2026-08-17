/*
******************************************************************************
**
** @file        : tmpm3h6fwdfg.S
** @author      : Ivan Ruzavin (MikroE)
** @brief       : Startup file for TMPM3H6FWDFG Device
**                Core: ARM Cortex-M3
**
**  Target      : TOSHIBA TMPM3H6FWDFG
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
                .long    INT00_Handler                        /*   0 INT00 */
                .long    INT01_Handler                        /*   1 INT01 */
                .long    INT02_Handler                        /*   2 INT02 */
                .long    INT03_Handler                        /*   3 INT03 */
                .long    INT04_Handler                        /*   4 INT04 */
                .long    INT05_Handler                        /*   5 INT05 */
                .long    Interrupt6_Handler                   /*   6 Reserved */
                .long    Interrupt7_Handler                   /*   7 Reserved */
                .long    Interrupt8_Handler                   /*   8 Reserved */
                .long    Interrupt9_Handler                   /*   9 Reserved */
                .long    Interrupt10_Handler                  /*  10 Reserved */
                .long    Interrupt11_Handler                  /*  11 Reserved */
                .long    Interrupt12_Handler                  /*  12 Reserved */
                .long    Interrupt13_Handler                  /*  13 Reserved */
                .long    Interrupt14_Handler                  /*  14 Reserved */
                .long    Interrupt15_Handler                  /*  15 Reserved */
                .long    INTEMG0_Handler                      /*  16 INTEMG0 */
                .long    INTOVV0_Handler                      /*  17 INTOVV0 */
                .long    INTPMD0_Handler                      /*  18 INTPMD0 */
                .long    INTENC00_Handler                     /*  19 INTENC00 */
                .long    INTENC01_Handler                     /*  20 INTENC01 */
                .long    INTADAPDA_Handler                    /*  21 INTADAPDA */
                .long    INTADAPDB_Handler                    /*  22 INTADAPDB */
                .long    INTADACP0_Handler                    /*  23 INTADACP0 */
                .long    INTADACP1_Handler                    /*  24 INTADACP1 */
                .long    INTADATRG_Handler                    /*  25 INTADATRG */
                .long    INTADASGL_Handler                    /*  26 INTADASGL */
                .long    INTADACNT_Handler                    /*  27 INTADACNT */
                .long    INTT0RX_Handler                      /*  28 INTT0RX */
                .long    INTT0TX_Handler                      /*  29 INTT0TX */
                .long    INTT0ERR_Handler                     /*  30 INTT0ERR */
                .long    Interrupt31_Handler                  /*  31 Reserved */
                .long    Interrupt32_Handler                  /*  32 Reserved */
                .long    Interrupt33_Handler                  /*  33 Reserved */
                .long    INTI2CWUP_Handler                    /*  34 INTI2CWUP */
                .long    INTI2C0_Handler                      /*  35 INTI2C0 */
                .long    INTI2C0AL_Handler                    /*  36 INTI2C0AL */
                .long    INTI2C0BF_Handler                    /*  37 INTI2C0BF */
                .long    INTI2C0NA_Handler                    /*  38 INTI2C0NA */
                .long    Interrupt39_Handler                  /*  39 Reserved */
                .long    Interrupt40_Handler                  /*  40 Reserved */
                .long    Interrupt41_Handler                  /*  41 Reserved */
                .long    Interrupt42_Handler                  /*  42 Reserved */
                .long    Interrupt43_Handler                  /*  43 Reserved */
                .long    Interrupt44_Handler                  /*  44 Reserved */
                .long    Interrupt45_Handler                  /*  45 Reserved */
                .long    Interrupt46_Handler                  /*  46 Reserved */
                .long    INTUART0RX_Handler                   /*  47 INTUART0RX */
                .long    INTUART0TX_Handler                   /*  48 INTUART0TX */
                .long    INTUART0ERR_Handler                  /*  49 INTUART0ERR */
                .long    INTUART1RX_Handler                   /*  50 INTUART1RX */
                .long    INTUART1TX_Handler                   /*  51 INTUART1TX */
                .long    INTUART1ERR_Handler                  /*  52 INTUART1ERR */
                .long    Interrupt53_Handler                  /*  53 Reserved */
                .long    Interrupt54_Handler                  /*  54 Reserved */
                .long    Interrupt55_Handler                  /*  55 Reserved */
                .long    INTT32A00A_Handler                   /*  56 INTT32A00A */
                .long    INTT32A00ACAP0_Handler               /*  57 INTT32A00ACAP0 */
                .long    INTT32A00ACAP1_Handler               /*  58 INTT32A00ACAP1 */
                .long    INTT32A00B_Handler                   /*  59 INTT32A00B */
                .long    INTT32A00BCAP0_Handler               /*  60 INTT32A00BCAP0 */
                .long    INTT32A00BCAP1_Handler               /*  61 INTT32A00BCAP1 */
                .long    INTT32A00C_Handler                   /*  62 INTT32A00C */
                .long    INTT32A00CCAP0_Handler               /*  63 INTT32A00CCAP0 */
                .long    INTT32A00CCAP1_Handler               /*  64 INTT32A00CCAP1 */
                .long    INTT32A01A_Handler                   /*  65 INTT32A01A */
                .long    INTT32A01ACAP0_Handler               /*  66 INTT32A01ACAP0 */
                .long    INTT32A01ACAP1_Handler               /*  67 INTT32A01ACAP1 */
                .long    INTT32A01B_Handler                   /*  68 INTT32A01B */
                .long    INTT32A01BCAP0_Handler               /*  69 INTT32A01BCAP0 */
                .long    INTT32A01BCAP1_Handler               /*  70 INTT32A01BCAP1 */
                .long    INTT32A01C_Handler                   /*  71 INTT32A01C */
                .long    INTT32A01CCAP0_Handler               /*  72 INTT32A01CCAP0 */
                .long    INTT32A01CCAP1_Handler               /*  73 INTT32A01CCAP1 */
                .long    INTT32A02A_Handler                   /*  74 INTT32A02A */
                .long    INTT32A02ACAP0_Handler               /*  75 INTT32A02ACAP0 */
                .long    INTT32A02ACAP1_Handler               /*  76 INTT32A02ACAP1 */
                .long    INTT32A02B_Handler                   /*  77 INTT32A02B */
                .long    INTT32A02BCAP0_Handler               /*  78 INTT32A02BCAP0 */
                .long    INTT32A02BCAP1_Handler               /*  79 INTT32A02BCAP1 */
                .long    INTT32A02C_Handler                   /*  80 INTT32A02C */
                .long    INTT32A02CCAP0_Handler               /*  81 INTT32A02CCAP0 */
                .long    INTT32A02CCAP1_Handler               /*  82 INTT32A02CCAP1 */
                .long    INTT32A03A_Handler                   /*  83 INTT32A03A */
                .long    INTT32A03ACAP0_Handler               /*  84 INTT32A03ACAP0 */
                .long    INTT32A03ACAP1_Handler               /*  85 INTT32A03ACAP1 */
                .long    INTT32A03B_Handler                   /*  86 INTT32A03B */
                .long    INTT32A03BCAP0_Handler               /*  87 INTT32A03BCAP0 */
                .long    INTT32A03BCAP1_Handler               /*  88 INTT32A03BCAP1 */
                .long    INTT32A03C_Handler                   /*  89 INTT32A03C */
                .long    INTT32A03CCAP0_Handler               /*  90 INTT32A03CCAP0 */
                .long    INTT32A03CCAP1_Handler               /*  91 INTT32A03CCAP1 */
                .long    INTT32A04A_Handler                   /*  92 INTT32A04A */
                .long    INTT32A04ACAP0_Handler               /*  93 INTT32A04ACAP0 */
                .long    INTT32A04ACAP1_Handler               /*  94 INTT32A04ACAP1 */
                .long    INTT32A04B_Handler                   /*  95 INTT32A04B */
                .long    INTT32A04BCAP0_Handler               /*  96 INTT32A04BCAP0 */
                .long    INTT32A04BCAP1_Handler               /*  97 INTT32A04BCAP1 */
                .long    INTT32A04C_Handler                   /*  98 INTT32A04C */
                .long    INTT32A04CCAP0_Handler               /*  99 INTT32A04CCAP0 */
                .long    INTT32A04CCAP1_Handler               /* 100 INTT32A04CCAP1 */
                .long    INTT32A05A_Handler                   /* 101 INTT32A05A */
                .long    INTT32A05ACAP0_Handler               /* 102 INTT32A05ACAP0 */
                .long    INTT32A05ACAP1_Handler               /* 103 INTT32A05ACAP1 */
                .long    INTT32A05B_Handler                   /* 104 INTT32A05B */
                .long    INTT32A05BCAP0_Handler               /* 105 INTT32A05BCAP0 */
                .long    INTT32A05BCAP1_Handler               /* 106 INTT32A05BCAP1 */
                .long    INTT32A05C_Handler                   /* 107 INTT32A05C */
                .long    INTT32A05CCAP0_Handler               /* 108 INTT32A05CCAP0 */
                .long    INTT32A05CCAP1_Handler               /* 109 INTT32A05CCAP1 */
                .long    INTDMAATC_Handler                    /* 110 INTDMAATC */
                .long    INTDMAAERR_Handler                   /* 111 INTDMAAERR */
                .long    Interrupt112_Handler                 /* 112 Reserved */
                .long    Interrupt113_Handler                 /* 113 Reserved */
                .long    INTRMC0_Handler                      /* 114 INTRMC0 */
                .long    INTFLCRDY_Handler                    /* 115 INTFLCRDY */
                .long    INTFLDRDY_Handler                    /* 116 INTFLDRDY */

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

                Set_Default_Handler  INT00_Handler
                Set_Default_Handler  INT01_Handler
                Set_Default_Handler  INT02_Handler
                Set_Default_Handler  INT03_Handler
                Set_Default_Handler  INT04_Handler
                Set_Default_Handler  INT05_Handler
                Set_Default_Handler  Interrupt6_Handler
                Set_Default_Handler  Interrupt7_Handler
                Set_Default_Handler  Interrupt8_Handler
                Set_Default_Handler  Interrupt9_Handler
                Set_Default_Handler  Interrupt10_Handler
                Set_Default_Handler  Interrupt11_Handler
                Set_Default_Handler  Interrupt12_Handler
                Set_Default_Handler  Interrupt13_Handler
                Set_Default_Handler  Interrupt14_Handler
                Set_Default_Handler  Interrupt15_Handler
                Set_Default_Handler  INTEMG0_Handler
                Set_Default_Handler  INTOVV0_Handler
                Set_Default_Handler  INTPMD0_Handler
                Set_Default_Handler  INTENC00_Handler
                Set_Default_Handler  INTENC01_Handler
                Set_Default_Handler  INTADAPDA_Handler
                Set_Default_Handler  INTADAPDB_Handler
                Set_Default_Handler  INTADACP0_Handler
                Set_Default_Handler  INTADACP1_Handler
                Set_Default_Handler  INTADATRG_Handler
                Set_Default_Handler  INTADASGL_Handler
                Set_Default_Handler  INTADACNT_Handler
                Set_Default_Handler  INTT0RX_Handler
                Set_Default_Handler  INTT0TX_Handler
                Set_Default_Handler  INTT0ERR_Handler
                Set_Default_Handler  Interrupt31_Handler
                Set_Default_Handler  Interrupt32_Handler
                Set_Default_Handler  Interrupt33_Handler
                Set_Default_Handler  INTI2CWUP_Handler
                Set_Default_Handler  INTI2C0_Handler
                Set_Default_Handler  INTI2C0AL_Handler
                Set_Default_Handler  INTI2C0BF_Handler
                Set_Default_Handler  INTI2C0NA_Handler
                Set_Default_Handler  Interrupt39_Handler
                Set_Default_Handler  Interrupt40_Handler
                Set_Default_Handler  Interrupt41_Handler
                Set_Default_Handler  Interrupt42_Handler
                Set_Default_Handler  Interrupt43_Handler
                Set_Default_Handler  Interrupt44_Handler
                Set_Default_Handler  Interrupt45_Handler
                Set_Default_Handler  Interrupt46_Handler
                Set_Default_Handler  INTUART0RX_Handler
                Set_Default_Handler  INTUART0TX_Handler
                Set_Default_Handler  INTUART0ERR_Handler
                Set_Default_Handler  INTUART1RX_Handler
                Set_Default_Handler  INTUART1TX_Handler
                Set_Default_Handler  INTUART1ERR_Handler
                Set_Default_Handler  Interrupt53_Handler
                Set_Default_Handler  Interrupt54_Handler
                Set_Default_Handler  Interrupt55_Handler
                Set_Default_Handler  INTT32A00A_Handler
                Set_Default_Handler  INTT32A00ACAP0_Handler
                Set_Default_Handler  INTT32A00ACAP1_Handler
                Set_Default_Handler  INTT32A00B_Handler
                Set_Default_Handler  INTT32A00BCAP0_Handler
                Set_Default_Handler  INTT32A00BCAP1_Handler
                Set_Default_Handler  INTT32A00C_Handler
                Set_Default_Handler  INTT32A00CCAP0_Handler
                Set_Default_Handler  INTT32A00CCAP1_Handler
                Set_Default_Handler  INTT32A01A_Handler
                Set_Default_Handler  INTT32A01ACAP0_Handler
                Set_Default_Handler  INTT32A01ACAP1_Handler
                Set_Default_Handler  INTT32A01B_Handler
                Set_Default_Handler  INTT32A01BCAP0_Handler
                Set_Default_Handler  INTT32A01BCAP1_Handler
                Set_Default_Handler  INTT32A01C_Handler
                Set_Default_Handler  INTT32A01CCAP0_Handler
                Set_Default_Handler  INTT32A01CCAP1_Handler
                Set_Default_Handler  INTT32A02A_Handler
                Set_Default_Handler  INTT32A02ACAP0_Handler
                Set_Default_Handler  INTT32A02ACAP1_Handler
                Set_Default_Handler  INTT32A02B_Handler
                Set_Default_Handler  INTT32A02BCAP0_Handler
                Set_Default_Handler  INTT32A02BCAP1_Handler
                Set_Default_Handler  INTT32A02C_Handler
                Set_Default_Handler  INTT32A02CCAP0_Handler
                Set_Default_Handler  INTT32A02CCAP1_Handler
                Set_Default_Handler  INTT32A03A_Handler
                Set_Default_Handler  INTT32A03ACAP0_Handler
                Set_Default_Handler  INTT32A03ACAP1_Handler
                Set_Default_Handler  INTT32A03B_Handler
                Set_Default_Handler  INTT32A03BCAP0_Handler
                Set_Default_Handler  INTT32A03BCAP1_Handler
                Set_Default_Handler  INTT32A03C_Handler
                Set_Default_Handler  INTT32A03CCAP0_Handler
                Set_Default_Handler  INTT32A03CCAP1_Handler
                Set_Default_Handler  INTT32A04A_Handler
                Set_Default_Handler  INTT32A04ACAP0_Handler
                Set_Default_Handler  INTT32A04ACAP1_Handler
                Set_Default_Handler  INTT32A04B_Handler
                Set_Default_Handler  INTT32A04BCAP0_Handler
                Set_Default_Handler  INTT32A04BCAP1_Handler
                Set_Default_Handler  INTT32A04C_Handler
                Set_Default_Handler  INTT32A04CCAP0_Handler
                Set_Default_Handler  INTT32A04CCAP1_Handler
                Set_Default_Handler  INTT32A05A_Handler
                Set_Default_Handler  INTT32A05ACAP0_Handler
                Set_Default_Handler  INTT32A05ACAP1_Handler
                Set_Default_Handler  INTT32A05B_Handler
                Set_Default_Handler  INTT32A05BCAP0_Handler
                Set_Default_Handler  INTT32A05BCAP1_Handler
                Set_Default_Handler  INTT32A05C_Handler
                Set_Default_Handler  INTT32A05CCAP0_Handler
                Set_Default_Handler  INTT32A05CCAP1_Handler
                Set_Default_Handler  INTDMAATC_Handler
                Set_Default_Handler  INTDMAAERR_Handler
                Set_Default_Handler  Interrupt112_Handler
                Set_Default_Handler  Interrupt113_Handler
                Set_Default_Handler  INTRMC0_Handler
                Set_Default_Handler  INTFLCRDY_Handler
                Set_Default_Handler  INTFLDRDY_Handler


                .end