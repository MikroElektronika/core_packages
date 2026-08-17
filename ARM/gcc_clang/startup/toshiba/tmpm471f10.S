/*
******************************************************************************
**
** @file        : tmpm471f10.S
** @author      : Ivan Ruzavin (MikroE)
** @brief       : Startup file for TMPM471F10 Device
**                Core: ARM Cortex-M4
**
**  Target      : TOSHIBA TMPM471F10
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
                .long    INT0_Handler                         /*   0 INT0 */
                .long    INT1_Handler                         /*   1 INT1 */
                .long    INT2_Handler                         /*   2 INT2 */
                .long    INT3_Handler                         /*   3 INT3 */
                .long    INT4_Handler                         /*   4 INT4 */
                .long    INT5_Handler                         /*   5 INT5 */
                .long    INT6_Handler                         /*   6 INT6 */
                .long    INT7_Handler                         /*   7 INT7 */
                .long    INT8_Handler                         /*   8 INT8 */
                .long    INT9_Handler                         /*   9 INT9 */
                .long    INTA_Handler                         /*  10 INTA */
                .long    INTB_Handler                         /*  11 INTB */
                .long    INTC_Handler                         /*  12 INTC */
                .long    INTD_Handler                         /*  13 INTD */
                .long    INTE_Handler                         /*  14 INTE */
                .long    INTF_Handler                         /*  15 INTF */
                .long    INTEMG0_Handler                      /*  16 INTEMG0 */
                .long    INTEMG1_Handler                      /*  17 INTEMG1 */
                .long    INTOVV0_Handler                      /*  18 INTOVV0 */
                .long    INTOVV1_Handler                      /*  19 INTOVV1 */
                .long    INTPWM0_Handler                      /*  20 INTPWM0 */
                .long    INTPWM1_Handler                      /*  21 INTPWM1 */
                .long    INTENC00_Handler                     /*  22 INTENC00 */
                .long    INTENC01_Handler                     /*  23 INTENC01 */
                .long    INTENC10_Handler                     /*  24 INTENC10 */
                .long    INTENC11_Handler                     /*  25 INTENC11 */
                .long    INTADAPDA_Handler                    /*  26 INTADAPDA */
                .long    INTADAPDB_Handler                    /*  27 INTADAPDB */
                .long    INTADACP0_Handler                    /*  28 INTADACP0 */
                .long    INTADACP1_Handler                    /*  29 INTADACP1 */
                .long    INTADATRG_Handler                    /*  30 INTADATRG */
                .long    INTADASGL_Handler                    /*  31 INTADASGL */
                .long    INTADACNT_Handler                    /*  32 INTADACNT */
                .long    INTADBPDA_Handler                    /*  33 INTADBPDA */
                .long    INTADBPDB_Handler                    /*  34 INTADBPDB */
                .long    INTADBCP0_Handler                    /*  35 INTADBCP0 */
                .long    INTADBCP1_Handler                    /*  36 INTADBCP1 */
                .long    INTADBTRG_Handler                    /*  37 INTADBTRG */
                .long    INTADBSGL_Handler                    /*  38 INTADBSGL */
                .long    INTADBCNT_Handler                    /*  39 INTADBCNT */
                .long    INTSC0RX_Handler                     /*  40 INTSC0RX */
                .long    INTSC0TX_Handler                     /*  41 INTSC0TX */
                .long    INTSC0ERR_Handler                    /*  42 INTSC0ERR */
                .long    INTSC1RX_Handler                     /*  43 INTSC1RX */
                .long    INTSC1TX_Handler                     /*  44 INTSC1TX */
                .long    INTSC1ERR_Handler                    /*  45 INTSC1ERR */
                .long    INTSC2RX_Handler                     /*  46 INTSC2RX */
                .long    INTSC2TX_Handler                     /*  47 INTSC2TX */
                .long    INTSC2ERR_Handler                    /*  48 INTSC2ERR */
                .long    INTSC3RX_Handler                     /*  49 INTSC3RX */
                .long    INTSC3TX_Handler                     /*  50 INTSC3TX */
                .long    INTSC3ERR_Handler                    /*  51 INTSC3ERR */
                .long    INTUART4RX_Handler                   /*  52 INTUART4RX */
                .long    INTUART4TX_Handler                   /*  53 INTUART4TX */
                .long    INTUART4ERR_Handler                  /*  54 INTUART4ERR */
                .long    INTI2C0ST_Handler                    /*  55 INTI2C0ST */
                .long    INTI2C0TBE_Handler                   /*  56 INTI2C0TBE */
                .long    INTI2C0RBF_Handler                   /*  57 INTI2C0RBF */
                .long    INTI2C1ST_Handler                    /*  58 INTI2C1ST */
                .long    INTI2C1TBE_Handler                   /*  59 INTI2C1TBE */
                .long    INTI2C1RBF_Handler                   /*  60 INTI2C1RBF */
                .long    INTT32A00AC_Handler                  /*  61 INTT32A00AC */
                .long    INTT32A00ACCAP0_Handler              /*  62 INTT32A00ACCAP0 */
                .long    INTT32A00ACCAP1_Handler              /*  63 INTT32A00ACCAP1 */
                .long    INTT32A00B_Handler                   /*  64 INTT32A00B */
                .long    INTT32A00BCAP0_Handler               /*  65 INTT32A00BCAP0 */
                .long    INTT32A00BCAP1_Handler               /*  66 INTT32A00BCAP1 */
                .long    INTT32A01AC_Handler                  /*  67 INTT32A01AC */
                .long    INTT32A01ACCAP0_Handler              /*  68 INTT32A01ACCAP0 */
                .long    INTT32A01ACCAP1_Handler              /*  69 INTT32A01ACCAP1 */
                .long    INTT32A01B_Handler                   /*  70 INTT32A01B */
                .long    INTT32A01BCAP0_Handler               /*  71 INTT32A01BCAP0 */
                .long    INTT32A01BCAP1_Handler               /*  72 INTT32A01BCAP1 */
                .long    INTT32A02AC_Handler                  /*  73 INTT32A02AC */
                .long    INTT32A02ACCAP0_Handler              /*  74 INTT32A02ACCAP0 */
                .long    INTT32A02ACCAP1_Handler              /*  75 INTT32A02ACCAP1 */
                .long    INTT32A02B_Handler                   /*  76 INTT32A02B */
                .long    INTT32A02BCAP0_Handler               /*  77 INTT32A02BCAP0 */
                .long    INTT32A02BCAP1_Handler               /*  78 INTT32A02BCAP1 */
                .long    INTT32A03AC_Handler                  /*  79 INTT32A03AC */
                .long    INTT32A03ACCAP0_Handler              /*  80 INTT32A03ACCAP0 */
                .long    INTT32A03ACCAP1_Handler              /*  81 INTT32A03ACCAP1 */
                .long    INTT32A03B_Handler                   /*  82 INTT32A03B */
                .long    INTT32A03BCAP0_Handler               /*  83 INTT32A03BCAP0 */
                .long    INTT32A03BCAP1_Handler               /*  84 INTT32A03BCAP1 */
                .long    INTT32A04AC_Handler                  /*  85 INTT32A04AC */
                .long    INTT32A04ACCAP0_Handler              /*  86 INTT32A04ACCAP0 */
                .long    INTT32A04ACCAP1_Handler              /*  87 INTT32A04ACCAP1 */
                .long    INTT32A04B_Handler                   /*  88 INTT32A04B */
                .long    INTT32A04BCAP0_Handler               /*  89 INTT32A04BCAP0 */
                .long    INTT32A04BCAP1_Handler               /*  90 INTT32A04BCAP1 */
                .long    INTPARI0_Handler                     /*  91 INTPARI0 */
                .long    INTPARI1_Handler                     /*  92 INTPARI1 */
                .long    INTDMAATC_Handler                    /*  93 INTDMAATC */
                .long    INTDMAAERR_Handler                   /*  94 INTDMAAERR */
                .long    INTFLCRDY_Handler                    /*  95 INTFLCRDY */
                .space   (129 * 4)
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

                Set_Default_Handler  INT0_Handler
                Set_Default_Handler  INT1_Handler
                Set_Default_Handler  INT2_Handler
                Set_Default_Handler  INT3_Handler
                Set_Default_Handler  INT4_Handler
                Set_Default_Handler  INT5_Handler
                Set_Default_Handler  INT6_Handler
                Set_Default_Handler  INT7_Handler
                Set_Default_Handler  INT8_Handler
                Set_Default_Handler  INT9_Handler
                Set_Default_Handler  INTA_Handler
                Set_Default_Handler  INTB_Handler
                Set_Default_Handler  INTC_Handler
                Set_Default_Handler  INTD_Handler
                Set_Default_Handler  INTE_Handler
                Set_Default_Handler  INTF_Handler
                Set_Default_Handler  INTEMG0_Handler
                Set_Default_Handler  INTEMG1_Handler
                Set_Default_Handler  INTOVV0_Handler
                Set_Default_Handler  INTOVV1_Handler
                Set_Default_Handler  INTPWM0_Handler
                Set_Default_Handler  INTPWM1_Handler
                Set_Default_Handler  INTENC00_Handler
                Set_Default_Handler  INTENC01_Handler
                Set_Default_Handler  INTENC10_Handler
                Set_Default_Handler  INTENC11_Handler
                Set_Default_Handler  INTADAPDA_Handler
                Set_Default_Handler  INTADAPDB_Handler
                Set_Default_Handler  INTADACP0_Handler
                Set_Default_Handler  INTADACP1_Handler
                Set_Default_Handler  INTADATRG_Handler
                Set_Default_Handler  INTADASGL_Handler
                Set_Default_Handler  INTADACNT_Handler
                Set_Default_Handler  INTADBPDA_Handler
                Set_Default_Handler  INTADBPDB_Handler
                Set_Default_Handler  INTADBCP0_Handler
                Set_Default_Handler  INTADBCP1_Handler
                Set_Default_Handler  INTADBTRG_Handler
                Set_Default_Handler  INTADBSGL_Handler
                Set_Default_Handler  INTADBCNT_Handler
                Set_Default_Handler  INTSC0RX_Handler
                Set_Default_Handler  INTSC0TX_Handler
                Set_Default_Handler  INTSC0ERR_Handler
                Set_Default_Handler  INTSC1RX_Handler
                Set_Default_Handler  INTSC1TX_Handler
                Set_Default_Handler  INTSC1ERR_Handler
                Set_Default_Handler  INTSC2RX_Handler
                Set_Default_Handler  INTSC2TX_Handler
                Set_Default_Handler  INTSC2ERR_Handler
                Set_Default_Handler  INTSC3RX_Handler
                Set_Default_Handler  INTSC3TX_Handler
                Set_Default_Handler  INTSC3ERR_Handler
                Set_Default_Handler  INTUART4RX_Handler
                Set_Default_Handler  INTUART4TX_Handler
                Set_Default_Handler  INTUART4ERR_Handler
                Set_Default_Handler  INTI2C0ST_Handler
                Set_Default_Handler  INTI2C0TBE_Handler
                Set_Default_Handler  INTI2C0RBF_Handler
                Set_Default_Handler  INTI2C1ST_Handler
                Set_Default_Handler  INTI2C1TBE_Handler
                Set_Default_Handler  INTI2C1RBF_Handler
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
                Set_Default_Handler  INTPARI0_Handler
                Set_Default_Handler  INTPARI1_Handler
                Set_Default_Handler  INTDMAATC_Handler
                Set_Default_Handler  INTDMAAERR_Handler
                Set_Default_Handler  INTFLCRDY_Handler


                .end