/*
******************************************************************************
**
** @file        : tmpm4knfddfg.S
** @author      : Ivan Ruzavin (MikroE)
** @brief       : Startup file for TMPM4KNFDDFG Device
**                Core: ARM Cortex-M4
**
**  Target      : TOSHIBA TMPM4KNFDDFG
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
                .long    INT06_Handler                        /*   6 INT06 */
                .long    INT07_Handler                        /*   7 INT07 */
                .long    INT08_Handler                        /*   8 INT08 */
                .long    INT09_Handler                        /*   9 INT09 */
                .long    INT10_Handler                        /*  10 INT10 */
                .long    INT11_Handler                        /*  11 INT11 */
                .long    INT12_Handler                        /*  12 INT12 */
                .long    INT13_Handler                        /*  13 INT13 */
                .long    INT14_Handler                        /*  14 INT14 */
                .long    INT15_Handler                        /*  15 INT15 */
                .long    INT16_Handler                        /*  16 INT16 */
                .long    INT17_Handler                        /*  17 INT17 */
                .long    INT18_Handler                        /*  18 INT18 */
                .long    Interrupt19_Handler                  /*  19 Reserved */
                .long    Interrupt20_Handler                  /*  20 Reserved */
                .long    INT21_Handler                        /*  21 INT21 */
                .long    INTVCN0_Handler                      /*  22 INTVCN0 */
                .long    INTVCT0_Handler                      /*  23 INTVCT0 */
                .long    INTEMG0_Handler                      /*  24 INTEMG0 */
                .long    INTEMG1_Handler                      /*  25 INTEMG1 */
                .long    INTEMG2_Handler                      /*  26 INTEMG2 */
                .long    INTOVV0_Handler                      /*  27 INTOVV0 */
                .long    INTOVV1_Handler                      /*  28 INTOVV1 */
                .long    INTOVV2_Handler                      /*  29 INTOVV2 */
                .long    INTPWM0_Handler                      /*  30 INTPWM0 */
                .long    INTPWM1_Handler                      /*  31 INTPWM1 */
                .long    INTPWM2_Handler                      /*  32 INTPWM2 */
                .long    INTENC00_Handler                     /*  33 INTENC00 */
                .long    INTENC01_Handler                     /*  34 INTENC01 */
                .long    INTENC10_Handler                     /*  35 INTENC10 */
                .long    INTENC11_Handler                     /*  36 INTENC11 */
                .long    INTENC20_Handler                     /*  37 INTENC20 */
                .long    INTENC21_Handler                     /*  38 INTENC21 */
                .long    INTADAPDA_Handler                    /*  39 INTADAPDA */
                .long    INTADAPDB_Handler                    /*  40 INTADAPDB */
                .long    INTADACP0_Handler                    /*  41 INTADACP0 */
                .long    INTADACP1_Handler                    /*  42 INTADACP1 */
                .long    INTADATRG_Handler                    /*  43 INTADATRG */
                .long    INTADASGL_Handler                    /*  44 INTADASGL */
                .long    INTADACNT_Handler                    /*  45 INTADACNT */
                .long    INTADBPDA_Handler                    /*  46 INTADBPDA */
                .long    INTADBPDB_Handler                    /*  47 INTADBPDB */
                .long    INTADBCP0_Handler                    /*  48 INTADBCP0 */
                .long    INTADBCP1_Handler                    /*  49 INTADBCP1 */
                .long    INTADBTRG_Handler                    /*  50 INTADBTRG */
                .long    INTADBSGL_Handler                    /*  51 INTADBSGL */
                .long    INTADBCNT_Handler                    /*  52 INTADBCNT */
                .long    INTADCPDA_Handler                    /*  53 INTADCPDA */
                .long    INTADCPDB_Handler                    /*  54 INTADCPDB */
                .long    INTADCCP0_Handler                    /*  55 INTADCCP0 */
                .long    INTADCCP1_Handler                    /*  56 INTADCCP1 */
                .long    INTADCTRG_Handler                    /*  57 INTADCTRG */
                .long    INTADCSGL_Handler                    /*  58 INTADCSGL */
                .long    INTADCCNT_Handler                    /*  59 INTADCCNT */
                .long    INTSC0RX_Handler                     /*  60 INTSC0RX */
                .long    INTSC0TX_Handler                     /*  61 INTSC0TX */
                .long    INTSC0ERR_Handler                    /*  62 INTSC0ERR */
                .long    INTSC1RX_Handler                     /*  63 INTSC1RX */
                .long    INTSC1TX_Handler                     /*  64 INTSC1TX */
                .long    INTSC1ERR_Handler                    /*  65 INTSC1ERR */
                .long    INTSC2RX_Handler                     /*  66 INTSC2RX */
                .long    INTSC2TX_Handler                     /*  67 INTSC2TX */
                .long    INTSC2ERR_Handler                    /*  68 INTSC2ERR */
                .long    INTSC3RX_Handler                     /*  69 INTSC3RX */
                .long    INTSC3TX_Handler                     /*  70 INTSC3TX */
                .long    INTSC3ERR_Handler                    /*  71 INTSC3ERR */
                .long    INTI2C0_Handler                      /*  72 INTI2C0 */
                .long    INTI2C0AL_Handler                    /*  73 INTI2C0AL */
                .long    INTI2C0BF_Handler                    /*  74 INTI2C0BF */
                .long    INTI2C0NA_Handler                    /*  75 INTI2C0NA */
                .long    INTI2C1_Handler                      /*  76 INTI2C1 */
                .long    INTI2C1AL_Handler                    /*  77 INTI2C1AL */
                .long    INTI2C1BF_Handler                    /*  78 INTI2C1BF */
                .long    INTI2C1NA_Handler                    /*  79 INTI2C1NA */
                .long    INTCANGLB_Handler                    /*  80 INTCANGLB */
                .long    INTCANRXD_Handler                    /*  81 INTCANRXD */
                .long    INTCANTXD_Handler                    /*  82 INTCANTXD */
                .long    INTT32A00AC_Handler                  /*  83 INTT32A00AC */
                .long    INTT32A00ACCAP0_Handler              /*  84 INTT32A00ACCAP0 */
                .long    INTT32A00ACCAP1_Handler              /*  85 INTT32A00ACCAP1 */
                .long    INTT32A00B_Handler                   /*  86 INTT32A00B */
                .long    INTT32A00BCAP0_Handler               /*  87 INTT32A00BCAP0 */
                .long    INTT32A00BCAP1_Handler               /*  88 INTT32A00BCAP1 */
                .long    INTT32A01AC_Handler                  /*  89 INTT32A01AC */
                .long    INTT32A01ACCAP0_Handler              /*  90 INTT32A01ACCAP0 */
                .long    INTT32A01ACCAP1_Handler              /*  91 INTT32A01ACCAP1 */
                .long    INTT32A01B_Handler                   /*  92 INTT32A01B */
                .long    INTT32A01BCAP0_Handler               /*  93 INTT32A01BCAP0 */
                .long    INTT32A01BCAP1_Handler               /*  94 INTT32A01BCAP1 */
                .long    INTT32A02AC_Handler                  /*  95 INTT32A02AC */
                .long    INTT32A02ACCAP0_Handler              /*  96 INTT32A02ACCAP0 */
                .long    INTT32A02ACCAP1_Handler              /*  97 INTT32A02ACCAP1 */
                .long    INTT32A02B_Handler                   /*  98 INTT32A02B */
                .long    INTT32A02BCAP0_Handler               /*  99 INTT32A02BCAP0 */
                .long    INTT32A02BCAP1_Handler               /* 100 INTT32A02BCAP1 */
                .long    INTT32A03AC_Handler                  /* 101 INTT32A03AC */
                .long    INTT32A03ACCAP0_Handler              /* 102 INTT32A03ACCAP0 */
                .long    INTT32A03ACCAP1_Handler              /* 103 INTT32A03ACCAP1 */
                .long    INTT32A03B_Handler                   /* 104 INTT32A03B */
                .long    INTT32A03BCAP0_Handler               /* 105 INTT32A03BCAP0 */
                .long    INTT32A03BCAP1_Handler               /* 106 INTT32A03BCAP1 */
                .long    INTT32A04AC_Handler                  /* 107 INTT32A04AC */
                .long    INTT32A04ACCAP0_Handler              /* 108 INTT32A04ACCAP0 */
                .long    INTT32A04ACCAP1_Handler              /* 109 INTT32A04ACCAP1 */
                .long    INTT32A04B_Handler                   /* 110 INTT32A04B */
                .long    INTT32A04BCAP0_Handler               /* 111 INTT32A04BCAP0 */
                .long    INTT32A04BCAP1_Handler               /* 112 INTT32A04BCAP1 */
                .long    INTT32A05AC_Handler                  /* 113 INTT32A05AC */
                .long    INTT32A05ACCAP0_Handler              /* 114 INTT32A05ACCAP0 */
                .long    INTT32A05ACCAP1_Handler              /* 115 INTT32A05ACCAP1 */
                .long    INTT32A05B_Handler                   /* 116 INTT32A05B */
                .long    INTT32A05BCAP0_Handler               /* 117 INTT32A05BCAP0 */
                .long    INTT32A05BCAP1_Handler               /* 118 INTT32A05BCAP1 */
                .long    INTPARI0_Handler                     /* 119 INTPARI0 */
                .long    INTPARI1_Handler                     /* 120 INTPARI1 */
                .long    INTDMAATC_Handler                    /* 121 INTDMAATC */
                .long    INTDMAAERR_Handler                   /* 122 INTDMAAERR */
                .long    INTFLCRDY_Handler                    /* 123 INTFLCRDY */
                .long    INTFLDRDY_Handler                    /* 124 INTFLDRDY */

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
                Set_Default_Handler  INT06_Handler
                Set_Default_Handler  INT07_Handler
                Set_Default_Handler  INT08_Handler
                Set_Default_Handler  INT09_Handler
                Set_Default_Handler  INT10_Handler
                Set_Default_Handler  INT11_Handler
                Set_Default_Handler  INT12_Handler
                Set_Default_Handler  INT13_Handler
                Set_Default_Handler  INT14_Handler
                Set_Default_Handler  INT15_Handler
                Set_Default_Handler  INT16_Handler
                Set_Default_Handler  INT17_Handler
                Set_Default_Handler  INT18_Handler
                Set_Default_Handler  Interrupt19_Handler
                Set_Default_Handler  Interrupt20_Handler
                Set_Default_Handler  INT21_Handler
                Set_Default_Handler  INTVCN0_Handler
                Set_Default_Handler  INTVCT0_Handler
                Set_Default_Handler  INTEMG0_Handler
                Set_Default_Handler  INTEMG1_Handler
                Set_Default_Handler  INTEMG2_Handler
                Set_Default_Handler  INTOVV0_Handler
                Set_Default_Handler  INTOVV1_Handler
                Set_Default_Handler  INTOVV2_Handler
                Set_Default_Handler  INTPWM0_Handler
                Set_Default_Handler  INTPWM1_Handler
                Set_Default_Handler  INTPWM2_Handler
                Set_Default_Handler  INTENC00_Handler
                Set_Default_Handler  INTENC01_Handler
                Set_Default_Handler  INTENC10_Handler
                Set_Default_Handler  INTENC11_Handler
                Set_Default_Handler  INTENC20_Handler
                Set_Default_Handler  INTENC21_Handler
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
                Set_Default_Handler  INTADCPDA_Handler
                Set_Default_Handler  INTADCPDB_Handler
                Set_Default_Handler  INTADCCP0_Handler
                Set_Default_Handler  INTADCCP1_Handler
                Set_Default_Handler  INTADCTRG_Handler
                Set_Default_Handler  INTADCSGL_Handler
                Set_Default_Handler  INTADCCNT_Handler
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
                Set_Default_Handler  INTI2C0_Handler
                Set_Default_Handler  INTI2C0AL_Handler
                Set_Default_Handler  INTI2C0BF_Handler
                Set_Default_Handler  INTI2C0NA_Handler
                Set_Default_Handler  INTI2C1_Handler
                Set_Default_Handler  INTI2C1AL_Handler
                Set_Default_Handler  INTI2C1BF_Handler
                Set_Default_Handler  INTI2C1NA_Handler
                Set_Default_Handler  INTCANGLB_Handler
                Set_Default_Handler  INTCANRXD_Handler
                Set_Default_Handler  INTCANTXD_Handler
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
                Set_Default_Handler  INTPARI0_Handler
                Set_Default_Handler  INTPARI1_Handler
                Set_Default_Handler  INTDMAATC_Handler
                Set_Default_Handler  INTDMAAERR_Handler
                Set_Default_Handler  INTFLCRDY_Handler
                Set_Default_Handler  INTFLDRDY_Handler


                .end