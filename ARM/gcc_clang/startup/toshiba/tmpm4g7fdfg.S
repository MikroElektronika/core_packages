/*
******************************************************************************
**
** @file        : tmpm4g7fdfg.S
** @author      : Ivan Ruzavin (MikroE)
** @brief       : Startup file for TMPM4G7FDFG Device
**                Core: ARM Cortex-M4
**
**  Target      : TOSHIBA TMPM4G7FDFG
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
                .long    INT09_Handler                        /*   9 INT09 */
                .long    INT10_Handler                        /*  10 INT10 */
                .long    INT11_Handler                        /*  11 INT11 */
                .long    INT12_Handler                        /*  12 INT12 */
                .long    INT13_Handler                        /*  13 INT13 */
                .long    Interrupt14_Handler                  /*  14 Reserved */
                .long    Interrupt15_Handler                  /*  15 Reserved */
                .long    INTRTC_Handler                       /*  16 INTRTC */
                .long    INTCEC0RX_Handler                    /*  17 INTCEC0RX */
                .long    INTCEC0TX_Handler                    /*  18 INTCEC0TX */
                .long    INTISDA_Handler                      /*  19 INTISDA */
                .long    INTISDB_Handler                      /*  20 INTISDB */
                .long    Interrupt21_Handler                  /*  21 Reserved */
                .long    INTRMC0_Handler                      /*  22 INTRMC0 */
                .long    INTRMC1_Handler                      /*  23 INTRMC1 */
                .long    INTLTTMR_Handler                     /*  24 INTLTTMR */
                .long    INTHDMAATC_Handler                   /*  25 INTHDMAATC */
                .long    INTHDMAAERR_Handler                  /*  26 INTHDMAAERR */
                .long    INTHDMABTC_Handler                   /*  27 INTHDMABTC */
                .long    INTHDMABERR_Handler                  /*  28 INTHDMABERR */
                .long    INTMDMAATC_Handler                   /*  29 INTMDMAATC */
                .long    INTT32A00_A_CT_Handler               /*  30 INTT32A00_A_CT */
                .long    INTT32A00_B_C01_CPC_Handler          /*  31 INTT32A00_B_C01_CPC */
                .long    INTT32A01_A_CT_Handler               /*  32 INTT32A01_A_CT */
                .long    INTT32A01_B_C01_CPC_Handler          /*  33 INTT32A01_B_C01_CPC */
                .long    INTT32A02_A_CT_Handler               /*  34 INTT32A02_A_CT */
                .long    INTT32A02_B_C01_CPC_Handler          /*  35 INTT32A02_B_C01_CPC */
                .long    INTT32A03_A_CT_Handler               /*  36 INTT32A03_A_CT */
                .long    INTT32A03_B_C01_CPC_Handler          /*  37 INTT32A03_B_C01_CPC */
                .long    INTT32A04_A_CT_Handler               /*  38 INTT32A04_A_CT */
                .long    INTT32A04_B_C01_CPC_Handler          /*  39 INTT32A04_B_C01_CPC */
                .long    INTT32A05_A_CT_Handler               /*  40 INTT32A05_A_CT */
                .long    INTT32A05_B_C01_CPC_Handler          /*  41 INTT32A05_B_C01_CPC */
                .long    INTT32A06_A_CT_Handler               /*  42 INTT32A06_A_CT */
                .long    INTT32A06_B_C01_CPC_Handler          /*  43 INTT32A06_B_C01_CPC */
                .long    INTT32A07_A_CT_Handler               /*  44 INTT32A07_A_CT */
                .long    INTT32A07_B_C01_CPC_Handler          /*  45 INTT32A07_B_C01_CPC */
                .long    INTT32A08_A_CT_Handler               /*  46 INTT32A08_A_CT */
                .long    INTT32A08_B_C01_CPC_Handler          /*  47 INTT32A08_B_C01_CPC */
                .long    INTT32A09_A_CT_Handler               /*  48 INTT32A09_A_CT */
                .long    INTT32A09_B_C01_CPC_Handler          /*  49 INTT32A09_B_C01_CPC */
                .long    INTT32A10_A_CT_Handler               /*  50 INTT32A10_A_CT */
                .long    INTT32A10_B_C01_CPC_Handler          /*  51 INTT32A10_B_C01_CPC */
                .long    INTT32A11_A_CT_Handler               /*  52 INTT32A11_A_CT */
                .long    INTT32A11_B_C01_CPC_Handler          /*  53 INTT32A11_B_C01_CPC */
                .long    INTT32A12_A_CT_Handler               /*  54 INTT32A12_A_CT */
                .long    INTT32A12_B_C01_CPC_Handler          /*  55 INTT32A12_B_C01_CPC */
                .long    INTT32A13_A_CT_Handler               /*  56 INTT32A13_A_CT */
                .long    INTT32A13_B_C01_CPC_Handler          /*  57 INTT32A13_B_C01_CPC */
                .long    INTEMG0_Handler                      /*  58 INTEMG0 */
                .long    INTOVV0_Handler                      /*  59 INTOVV0 */
                .long    INTPWM0_Handler                      /*  60 INTPWM0 */
                .long    INTT0RX_Handler                      /*  61 INTT0RX */
                .long    INTT0TX_Handler                      /*  62 INTT0TX */
                .long    INTT0ERR_Handler                     /*  63 INTT0ERR */
                .long    INTT1RX_Handler                      /*  64 INTT1RX */
                .long    INTT1TX_Handler                      /*  65 INTT1TX */
                .long    INTT1ERR_Handler                     /*  66 INTT1ERR */
                .long    INTT2RX_Handler                      /*  67 INTT2RX */
                .long    INTT2TX_Handler                      /*  68 INTT2TX */
                .long    INTT2ERR_Handler                     /*  69 INTT2ERR */
                .long    INTT3RX_Handler                      /*  70 INTT3RX */
                .long    INTT3TX_Handler                      /*  71 INTT3TX */
                .long    INTT3ERR_Handler                     /*  72 INTT3ERR */
                .long    INTT4RX_Handler                      /*  73 INTT4RX */
                .long    INTT4TX_Handler                      /*  74 INTT4TX */
                .long    INTT4ERR_Handler                     /*  75 INTT4ERR */
                .long    INTT5RX_Handler                      /*  76 INTT5RX */
                .long    INTT5TX_Handler                      /*  77 INTT5TX */
                .long    INTT5ERR_Handler                     /*  78 INTT5ERR */
                .long    Interrupt79_Handler                  /*  79 Reserved */
                .long    Interrupt80_Handler                  /*  80 Reserved */
                .long    Interrupt81_Handler                  /*  81 Reserved */
                .long    Interrupt82_Handler                  /*  82 Reserved */
                .long    Interrupt83_Handler                  /*  83 Reserved */
                .long    Interrupt84_Handler                  /*  84 Reserved */
                .long    Interrupt85_Handler                  /*  85 Reserved */
                .long    Interrupt86_Handler                  /*  86 Reserved */
                .long    Interrupt87_Handler                  /*  87 Reserved */
                .long    INTSMI0_Handler                      /*  88 INTSMI0 */
                .long    INTUART0RX_Handler                   /*  89 INTUART0RX */
                .long    INTUART0TX_Handler                   /*  90 INTUART0TX */
                .long    INTUART0ERR_Handler                  /*  91 INTUART0ERR */
                .long    INTUART1RX_Handler                   /*  92 INTUART1RX */
                .long    INTUART1TX_Handler                   /*  93 INTUART1TX */
                .long    INTUART1ERR_Handler                  /*  94 INTUART1ERR */
                .long    INTUART2RX_Handler                   /*  95 INTUART2RX */
                .long    INTUART2TX_Handler                   /*  96 INTUART2TX */
                .long    INTUART2ERR_Handler                  /*  97 INTUART2ERR */
                .long    INTUART3RX_Handler                   /*  98 INTUART3RX */
                .long    INTUART3TX_Handler                   /*  99 INTUART3TX */
                .long    INTUART3ERR_Handler                  /* 100 INTUART3ERR */
                .long    Interrupt101_Handler                 /* 101 Reserved */
                .long    Interrupt102_Handler                 /* 102 Reserved */
                .long    Interrupt103_Handler                 /* 103 Reserved */
                .long    Interrupt104_Handler                 /* 104 Reserved */
                .long    Interrupt105_Handler                 /* 105 Reserved */
                .long    Interrupt106_Handler                 /* 106 Reserved */
                .long    INTFUART0_Handler                    /* 107 INTFUART0 */
                .long    Interrupt108_Handler                 /* 108 Reserved */
                .long    INTI2C0_Handler                      /* 109 INTI2C0 */
                .long    INTI2C0AL_Handler                    /* 110 INTI2C0AL */
                .long    INTI2C0BF_Handler                    /* 111 INTI2C0BF */
                .long    INTI2C0NACK_Handler                  /* 112 INTI2C0NACK */
                .long    INTI2C1_Handler                      /* 113 INTI2C1 */
                .long    INTI2C1AL_Handler                    /* 114 INTI2C1AL */
                .long    INTI2C1BF_Handler                    /* 115 INTI2C1BF */
                .long    INTI2C1NACK_Handler                  /* 116 INTI2C1NACK */
                .long    INTI2C2_Handler                      /* 117 INTI2C2 */
                .long    INTI2C2AL_Handler                    /* 118 INTI2C2AL */
                .long    INTI2C2BF_Handler                    /* 119 INTI2C2BF */
                .long    INTI2C2NACK_Handler                  /* 120 INTI2C2NACK */
                .long    Interrupt121_Handler                 /* 121 Reserved */
                .long    Interrupt122_Handler                 /* 122 Reserved */
                .long    Interrupt123_Handler                 /* 123 Reserved */
                .long    Interrupt124_Handler                 /* 124 Reserved */
                .long    Interrupt125_Handler                 /* 125 Reserved */
                .long    Interrupt126_Handler                 /* 126 Reserved */
                .long    Interrupt127_Handler                 /* 127 Reserved */
                .long    Interrupt128_Handler                 /* 128 Reserved */
                .long    INTADACP0_Handler                    /* 129 INTADACP0 */
                .long    INTADACP1_Handler                    /* 130 INTADACP1 */
                .long    INTADATRG_Handler                    /* 131 INTADATRG */
                .long    INTADASGL_Handler                    /* 132 INTADASGL */
                .long    INTADACNT_Handler                    /* 133 INTADACNT */
                .long    INTADAHP_Handler                     /* 134 INTADAHP */
                .long    INTFLDRDY_Handler                    /* 135 INTFLDRDY */
                .long    INTFLCRDY0_Handler                   /* 136 INTFLCRDY0 */
                .long    INTFLCRDY1_Handler                   /* 137 INTFLCRDY1 */
                .long    Interrupt138_Handler                 /* 138 Reserved */
                .long    INTMDMAABERR_Handler                 /* 139 INTMDMAABERR */
                .long    INTMDMAADERR_Handler                 /* 140 INTMDMAADERR */
                .space   (84 * 4)
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
                Set_Default_Handler  INT09_Handler
                Set_Default_Handler  INT10_Handler
                Set_Default_Handler  INT11_Handler
                Set_Default_Handler  INT12_Handler
                Set_Default_Handler  INT13_Handler
                Set_Default_Handler  Interrupt14_Handler
                Set_Default_Handler  Interrupt15_Handler
                Set_Default_Handler  INTRTC_Handler
                Set_Default_Handler  INTCEC0RX_Handler
                Set_Default_Handler  INTCEC0TX_Handler
                Set_Default_Handler  INTISDA_Handler
                Set_Default_Handler  INTISDB_Handler
                Set_Default_Handler  Interrupt21_Handler
                Set_Default_Handler  INTRMC0_Handler
                Set_Default_Handler  INTRMC1_Handler
                Set_Default_Handler  INTLTTMR_Handler
                Set_Default_Handler  INTHDMAATC_Handler
                Set_Default_Handler  INTHDMAAERR_Handler
                Set_Default_Handler  INTHDMABTC_Handler
                Set_Default_Handler  INTHDMABERR_Handler
                Set_Default_Handler  INTMDMAATC_Handler
                Set_Default_Handler  INTT32A00_A_CT_Handler
                Set_Default_Handler  INTT32A00_B_C01_CPC_Handler
                Set_Default_Handler  INTT32A01_A_CT_Handler
                Set_Default_Handler  INTT32A01_B_C01_CPC_Handler
                Set_Default_Handler  INTT32A02_A_CT_Handler
                Set_Default_Handler  INTT32A02_B_C01_CPC_Handler
                Set_Default_Handler  INTT32A03_A_CT_Handler
                Set_Default_Handler  INTT32A03_B_C01_CPC_Handler
                Set_Default_Handler  INTT32A04_A_CT_Handler
                Set_Default_Handler  INTT32A04_B_C01_CPC_Handler
                Set_Default_Handler  INTT32A05_A_CT_Handler
                Set_Default_Handler  INTT32A05_B_C01_CPC_Handler
                Set_Default_Handler  INTT32A06_A_CT_Handler
                Set_Default_Handler  INTT32A06_B_C01_CPC_Handler
                Set_Default_Handler  INTT32A07_A_CT_Handler
                Set_Default_Handler  INTT32A07_B_C01_CPC_Handler
                Set_Default_Handler  INTT32A08_A_CT_Handler
                Set_Default_Handler  INTT32A08_B_C01_CPC_Handler
                Set_Default_Handler  INTT32A09_A_CT_Handler
                Set_Default_Handler  INTT32A09_B_C01_CPC_Handler
                Set_Default_Handler  INTT32A10_A_CT_Handler
                Set_Default_Handler  INTT32A10_B_C01_CPC_Handler
                Set_Default_Handler  INTT32A11_A_CT_Handler
                Set_Default_Handler  INTT32A11_B_C01_CPC_Handler
                Set_Default_Handler  INTT32A12_A_CT_Handler
                Set_Default_Handler  INTT32A12_B_C01_CPC_Handler
                Set_Default_Handler  INTT32A13_A_CT_Handler
                Set_Default_Handler  INTT32A13_B_C01_CPC_Handler
                Set_Default_Handler  INTEMG0_Handler
                Set_Default_Handler  INTOVV0_Handler
                Set_Default_Handler  INTPWM0_Handler
                Set_Default_Handler  INTT0RX_Handler
                Set_Default_Handler  INTT0TX_Handler
                Set_Default_Handler  INTT0ERR_Handler
                Set_Default_Handler  INTT1RX_Handler
                Set_Default_Handler  INTT1TX_Handler
                Set_Default_Handler  INTT1ERR_Handler
                Set_Default_Handler  INTT2RX_Handler
                Set_Default_Handler  INTT2TX_Handler
                Set_Default_Handler  INTT2ERR_Handler
                Set_Default_Handler  INTT3RX_Handler
                Set_Default_Handler  INTT3TX_Handler
                Set_Default_Handler  INTT3ERR_Handler
                Set_Default_Handler  INTT4RX_Handler
                Set_Default_Handler  INTT4TX_Handler
                Set_Default_Handler  INTT4ERR_Handler
                Set_Default_Handler  INTT5RX_Handler
                Set_Default_Handler  INTT5TX_Handler
                Set_Default_Handler  INTT5ERR_Handler
                Set_Default_Handler  Interrupt79_Handler
                Set_Default_Handler  Interrupt80_Handler
                Set_Default_Handler  Interrupt81_Handler
                Set_Default_Handler  Interrupt82_Handler
                Set_Default_Handler  Interrupt83_Handler
                Set_Default_Handler  Interrupt84_Handler
                Set_Default_Handler  Interrupt85_Handler
                Set_Default_Handler  Interrupt86_Handler
                Set_Default_Handler  Interrupt87_Handler
                Set_Default_Handler  INTSMI0_Handler
                Set_Default_Handler  INTUART0RX_Handler
                Set_Default_Handler  INTUART0TX_Handler
                Set_Default_Handler  INTUART0ERR_Handler
                Set_Default_Handler  INTUART1RX_Handler
                Set_Default_Handler  INTUART1TX_Handler
                Set_Default_Handler  INTUART1ERR_Handler
                Set_Default_Handler  INTUART2RX_Handler
                Set_Default_Handler  INTUART2TX_Handler
                Set_Default_Handler  INTUART2ERR_Handler
                Set_Default_Handler  INTUART3RX_Handler
                Set_Default_Handler  INTUART3TX_Handler
                Set_Default_Handler  INTUART3ERR_Handler
                Set_Default_Handler  Interrupt101_Handler
                Set_Default_Handler  Interrupt102_Handler
                Set_Default_Handler  Interrupt103_Handler
                Set_Default_Handler  Interrupt104_Handler
                Set_Default_Handler  Interrupt105_Handler
                Set_Default_Handler  Interrupt106_Handler
                Set_Default_Handler  INTFUART0_Handler
                Set_Default_Handler  Interrupt108_Handler
                Set_Default_Handler  INTI2C0_Handler
                Set_Default_Handler  INTI2C0AL_Handler
                Set_Default_Handler  INTI2C0BF_Handler
                Set_Default_Handler  INTI2C0NACK_Handler
                Set_Default_Handler  INTI2C1_Handler
                Set_Default_Handler  INTI2C1AL_Handler
                Set_Default_Handler  INTI2C1BF_Handler
                Set_Default_Handler  INTI2C1NACK_Handler
                Set_Default_Handler  INTI2C2_Handler
                Set_Default_Handler  INTI2C2AL_Handler
                Set_Default_Handler  INTI2C2BF_Handler
                Set_Default_Handler  INTI2C2NACK_Handler
                Set_Default_Handler  Interrupt121_Handler
                Set_Default_Handler  Interrupt122_Handler
                Set_Default_Handler  Interrupt123_Handler
                Set_Default_Handler  Interrupt124_Handler
                Set_Default_Handler  Interrupt125_Handler
                Set_Default_Handler  Interrupt126_Handler
                Set_Default_Handler  Interrupt127_Handler
                Set_Default_Handler  Interrupt128_Handler
                Set_Default_Handler  INTADACP0_Handler
                Set_Default_Handler  INTADACP1_Handler
                Set_Default_Handler  INTADATRG_Handler
                Set_Default_Handler  INTADASGL_Handler
                Set_Default_Handler  INTADACNT_Handler
                Set_Default_Handler  INTADAHP_Handler
                Set_Default_Handler  INTFLDRDY_Handler
                Set_Default_Handler  INTFLCRDY0_Handler
                Set_Default_Handler  INTFLCRDY1_Handler
                Set_Default_Handler  Interrupt138_Handler
                Set_Default_Handler  INTMDMAABERR_Handler
                Set_Default_Handler  INTMDMAADERR_Handler


                .end