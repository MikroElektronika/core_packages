/*
******************************************************************************
**
** @file        : tmpm367fwxbg.S
** @author      : Ivan Ruzavin (MikroE)
** @brief       : Startup file for TMPM367FWXBG Device
**                Core: ARM Cortex-M3
**
**  Target      : TOSHIBA TMPM367FWXBG
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
                .long    INTRX0_Handler                       /*  16 INTRX0 */
                .long    INTTX0_Handler                       /*  17 INTTX0 */
                .long    INTRX1_Handler                       /*  18 INTRX1 */
                .long    INTTX1_Handler                       /*  19 INTTX1 */
                .long    INTRX2_Handler                       /*  20 INTRX2 */
                .long    INTTX2_Handler                       /*  21 INTTX2 */
                .long    INTRX3_Handler                       /*  22 INTRX3 */
                .long    INTTX3_Handler                       /*  23 INTTX3 */
                .long    INTUART4_Handler                     /*  24 INTUART4 */
                .long    INTUART5_Handler                     /*  25 INTUART5 */
                .long    INTSBI0_Handler                      /*  26 INTSBI0 */
                .long    INTSBI1_Handler                      /*  27 INTSBI1 */
                .long    INTSBI2_Handler                      /*  28 INTSBI2 */
                .long    INTSSP0_Handler                      /*  29 INTSSP0 */
                .long    INTSSP1_Handler                      /*  30 INTSSP1 */
                .long    INTSSP2_Handler                      /*  31 INTSSP2 */
                .long    INTUSBH_Handler                      /*  32 INTUSBH */
                .long    INTUSBD_Handler                      /*  33 INTUSBD */
                .long    INTUSBWKUP_Handler                   /*  34 INTUSBWKUP */
                .long    INTCANRX_Handler                     /*  35 INTCANRX */
                .long    INTCANTX_Handler                     /*  36 INTCANTX */
                .long    INTCANGB_Handler                     /*  37 INTCANGB */
                .long    INTETH_Handler                       /*  38 INTETH */
                .long    INTETHWK_Handler                     /*  39 INTETHWK */
                .long    INTADAHP_Handler                     /*  40 INTADAHP */
                .long    INTADAM0_Handler                     /*  41 INTADAM0 */
                .long    INTADAM1_Handler                     /*  42 INTADAM1 */
                .long    INTADA_Handler                       /*  43 INTADA */
                .long    INTADBHP_Handler                     /*  44 INTADBHP */
                .long    INTADBM0_Handler                     /*  45 INTADBM0 */
                .long    INTADBM1_Handler                     /*  46 INTADBM1 */
                .long    INTADB_Handler                       /*  47 INTADB */
                .long    INTEMG0_Handler                      /*  48 INTEMG0 */
                .long    INTPMD0_Handler                      /*  49 INTPMD0 */
                .long    INTENC0_Handler                      /*  50 INTENC0 */
                .long    INTEMG1_Handler                      /*  51 INTEMG1 */
                .long    INTPMD1_Handler                      /*  52 INTPMD1 */
                .long    INTENC1_Handler                      /*  53 INTENC1 */
                .long    INTMTEMG0_Handler                    /*  54 INTMTEMG0 */
                .long    INTMTPTB00_Handler                   /*  55 INTMTPTB00 */
                .long    INTMTTTB01_Handler                   /*  56 INTMTTTB01 */
                .long    INTMTCAP00_Handler                   /*  57 INTMTCAP00 */
                .long    INTMTCAP01_Handler                   /*  58 INTMTCAP01 */
                .long    INTMTEMG1_Handler                    /*  59 INTMTEMG1 */
                .long    INTMTPTB10_Handler                   /*  60 INTMTPTB10 */
                .long    INTMTTTB11_Handler                   /*  61 INTMTTTB11 */
                .long    INTMTCAP10_Handler                   /*  62 INTMTCAP10 */
                .long    INTMTCAP11_Handler                   /*  63 INTMTCAP11 */
                .long    INTMTEMG2_Handler                    /*  64 INTMTEMG2 */
                .long    INTMTPTB20_Handler                   /*  65 INTMTPTB20 */
                .long    INTMTTTB21_Handler                   /*  66 INTMTTTB21 */
                .long    INTMTCAP20_Handler                   /*  67 INTMTCAP20 */
                .long    INTMTCAP21_Handler                   /*  68 INTMTCAP21 */
                .long    INTMTEMG3_Handler                    /*  69 INTMTEMG3 */
                .long    INTMTPTB30_Handler                   /*  70 INTMTPTB30 */
                .long    INTMTTTB31_Handler                   /*  71 INTMTTTB31 */
                .long    INTMTCAP30_Handler                   /*  72 INTMTCAP30 */
                .long    INTMTCAP31_Handler                   /*  73 INTMTCAP31 */
                .long    INTRMCRX_Handler                     /*  74 INTRMCRX */
                .long    INTTB0_Handler                       /*  75 INTTB0 */
                .long    INTCAP00_Handler                     /*  76 INTCAP00 */
                .long    INTCAP01_Handler                     /*  77 INTCAP01 */
                .long    INTTB1_Handler                       /*  78 INTTB1 */
                .long    INTCAP10_Handler                     /*  79 INTCAP10 */
                .long    INTCAP11_Handler                     /*  80 INTCAP11 */
                .long    INTTB2_Handler                       /*  81 INTTB2 */
                .long    INTCAP20_Handler                     /*  82 INTCAP20 */
                .long    INTCAP21_Handler                     /*  83 INTCAP21 */
                .long    INTTB3_Handler                       /*  84 INTTB3 */
                .long    INTCAP30_Handler                     /*  85 INTCAP30 */
                .long    INTCAP31_Handler                     /*  86 INTCAP31 */
                .long    INTTB4_Handler                       /*  87 INTTB4 */
                .long    INTCAP40_Handler                     /*  88 INTCAP40 */
                .long    INTCAP41_Handler                     /*  89 INTCAP41 */
                .long    INTTB5_Handler                       /*  90 INTTB5 */
                .long    INTCAP50_Handler                     /*  91 INTCAP50 */
                .long    INTCAP51_Handler                     /*  92 INTCAP51 */
                .long    INTTB6_Handler                       /*  93 INTTB6 */
                .long    INTCAP60_Handler                     /*  94 INTCAP60 */
                .long    INTCAP61_Handler                     /*  95 INTCAP61 */
                .long    INTTB7_Handler                       /*  96 INTTB7 */
                .long    INTCAP70_Handler                     /*  97 INTCAP70 */
                .long    INTCAP71_Handler                     /*  98 INTCAP71 */
                .long    INTRTC_Handler                       /*  99 INTRTC */
                .long    INTDMAADA_Handler                    /* 100 INTDMAADA */
                .long    INTDMAADB_Handler                    /* 101 INTDMAADB */
                .long    INTDMADAA_Handler                    /* 102 INTDMADAA */
                .long    INTDMADAB_Handler                    /* 103 INTDMADAB */
                .long    INTDMASPR0_Handler                   /* 104 INTDMASPR0 */
                .long    INTDMASPT0_Handler                   /* 105 INTDMASPT0 */
                .long    INTDMASPR1_Handler                   /* 106 INTDMASPR1 */
                .long    INTDMASPT1_Handler                   /* 107 INTDMASPT1 */
                .long    INTDMASPR2_Handler                   /* 108 INTDMASPR2 */
                .long    INTDMASPT2_Handler                   /* 109 INTDMASPT2 */
                .long    INTDMAUTR4_Handler                   /* 110 INTDMAUTR4 */
                .long    INTDMAUTT4_Handler                   /* 111 INTDMAUTT4 */
                .long    INTDMAUTR5_Handler                   /* 112 INTDMAUTR5 */
                .long    INTDMAUTT5_Handler                   /* 113 INTDMAUTT5 */
                .long    INTDMARX0_Handler                    /* 114 INTDMARX0 */
                .long    INTDMATX0_Handler                    /* 115 INTDMATX0 */
                .long    INTDMARX1_Handler                    /* 116 INTDMARX1 */
                .long    INTDMATX1_Handler                    /* 117 INTDMATX1 */
                .long    INTDMARX2_Handler                    /* 118 INTDMARX2 */
                .long    INTDMATX2_Handler                    /* 119 INTDMATX2 */
                .long    INTDMARX3_Handler                    /* 120 INTDMARX3 */
                .long    INTDMATX3_Handler                    /* 121 INTDMATX3 */
                .long    INTDMASBI1_Handler                   /* 122 INTDMASBI1 */
                .long    INTDMASBI2_Handler                   /* 123 INTDMASBI2 */
                .long    INTDMATB_Handler                     /* 124 INTDMATB */
                .long    INTDMARQ_Handler                     /* 125 INTDMARQ */
                .long    INTDMAAERR_Handler                   /* 126 INTDMAAERR */
                .long    INTDMABERR_Handler                   /* 127 INTDMABERR */

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
                Set_Default_Handler  INTRX0_Handler
                Set_Default_Handler  INTTX0_Handler
                Set_Default_Handler  INTRX1_Handler
                Set_Default_Handler  INTTX1_Handler
                Set_Default_Handler  INTRX2_Handler
                Set_Default_Handler  INTTX2_Handler
                Set_Default_Handler  INTRX3_Handler
                Set_Default_Handler  INTTX3_Handler
                Set_Default_Handler  INTUART4_Handler
                Set_Default_Handler  INTUART5_Handler
                Set_Default_Handler  INTSBI0_Handler
                Set_Default_Handler  INTSBI1_Handler
                Set_Default_Handler  INTSBI2_Handler
                Set_Default_Handler  INTSSP0_Handler
                Set_Default_Handler  INTSSP1_Handler
                Set_Default_Handler  INTSSP2_Handler
                Set_Default_Handler  INTUSBH_Handler
                Set_Default_Handler  INTUSBD_Handler
                Set_Default_Handler  INTUSBWKUP_Handler
                Set_Default_Handler  INTCANRX_Handler
                Set_Default_Handler  INTCANTX_Handler
                Set_Default_Handler  INTCANGB_Handler
                Set_Default_Handler  INTETH_Handler
                Set_Default_Handler  INTETHWK_Handler
                Set_Default_Handler  INTADAHP_Handler
                Set_Default_Handler  INTADAM0_Handler
                Set_Default_Handler  INTADAM1_Handler
                Set_Default_Handler  INTADA_Handler
                Set_Default_Handler  INTADBHP_Handler
                Set_Default_Handler  INTADBM0_Handler
                Set_Default_Handler  INTADBM1_Handler
                Set_Default_Handler  INTADB_Handler
                Set_Default_Handler  INTEMG0_Handler
                Set_Default_Handler  INTPMD0_Handler
                Set_Default_Handler  INTENC0_Handler
                Set_Default_Handler  INTEMG1_Handler
                Set_Default_Handler  INTPMD1_Handler
                Set_Default_Handler  INTENC1_Handler
                Set_Default_Handler  INTMTEMG0_Handler
                Set_Default_Handler  INTMTPTB00_Handler
                Set_Default_Handler  INTMTTTB01_Handler
                Set_Default_Handler  INTMTCAP00_Handler
                Set_Default_Handler  INTMTCAP01_Handler
                Set_Default_Handler  INTMTEMG1_Handler
                Set_Default_Handler  INTMTPTB10_Handler
                Set_Default_Handler  INTMTTTB11_Handler
                Set_Default_Handler  INTMTCAP10_Handler
                Set_Default_Handler  INTMTCAP11_Handler
                Set_Default_Handler  INTMTEMG2_Handler
                Set_Default_Handler  INTMTPTB20_Handler
                Set_Default_Handler  INTMTTTB21_Handler
                Set_Default_Handler  INTMTCAP20_Handler
                Set_Default_Handler  INTMTCAP21_Handler
                Set_Default_Handler  INTMTEMG3_Handler
                Set_Default_Handler  INTMTPTB30_Handler
                Set_Default_Handler  INTMTTTB31_Handler
                Set_Default_Handler  INTMTCAP30_Handler
                Set_Default_Handler  INTMTCAP31_Handler
                Set_Default_Handler  INTRMCRX_Handler
                Set_Default_Handler  INTTB0_Handler
                Set_Default_Handler  INTCAP00_Handler
                Set_Default_Handler  INTCAP01_Handler
                Set_Default_Handler  INTTB1_Handler
                Set_Default_Handler  INTCAP10_Handler
                Set_Default_Handler  INTCAP11_Handler
                Set_Default_Handler  INTTB2_Handler
                Set_Default_Handler  INTCAP20_Handler
                Set_Default_Handler  INTCAP21_Handler
                Set_Default_Handler  INTTB3_Handler
                Set_Default_Handler  INTCAP30_Handler
                Set_Default_Handler  INTCAP31_Handler
                Set_Default_Handler  INTTB4_Handler
                Set_Default_Handler  INTCAP40_Handler
                Set_Default_Handler  INTCAP41_Handler
                Set_Default_Handler  INTTB5_Handler
                Set_Default_Handler  INTCAP50_Handler
                Set_Default_Handler  INTCAP51_Handler
                Set_Default_Handler  INTTB6_Handler
                Set_Default_Handler  INTCAP60_Handler
                Set_Default_Handler  INTCAP61_Handler
                Set_Default_Handler  INTTB7_Handler
                Set_Default_Handler  INTCAP70_Handler
                Set_Default_Handler  INTCAP71_Handler
                Set_Default_Handler  INTRTC_Handler
                Set_Default_Handler  INTDMAADA_Handler
                Set_Default_Handler  INTDMAADB_Handler
                Set_Default_Handler  INTDMADAA_Handler
                Set_Default_Handler  INTDMADAB_Handler
                Set_Default_Handler  INTDMASPR0_Handler
                Set_Default_Handler  INTDMASPT0_Handler
                Set_Default_Handler  INTDMASPR1_Handler
                Set_Default_Handler  INTDMASPT1_Handler
                Set_Default_Handler  INTDMASPR2_Handler
                Set_Default_Handler  INTDMASPT2_Handler
                Set_Default_Handler  INTDMAUTR4_Handler
                Set_Default_Handler  INTDMAUTT4_Handler
                Set_Default_Handler  INTDMAUTR5_Handler
                Set_Default_Handler  INTDMAUTT5_Handler
                Set_Default_Handler  INTDMARX0_Handler
                Set_Default_Handler  INTDMATX0_Handler
                Set_Default_Handler  INTDMARX1_Handler
                Set_Default_Handler  INTDMATX1_Handler
                Set_Default_Handler  INTDMARX2_Handler
                Set_Default_Handler  INTDMATX2_Handler
                Set_Default_Handler  INTDMARX3_Handler
                Set_Default_Handler  INTDMATX3_Handler
                Set_Default_Handler  INTDMASBI1_Handler
                Set_Default_Handler  INTDMASBI2_Handler
                Set_Default_Handler  INTDMATB_Handler
                Set_Default_Handler  INTDMARQ_Handler
                Set_Default_Handler  INTDMAAERR_Handler
                Set_Default_Handler  INTDMABERR_Handler


                .end