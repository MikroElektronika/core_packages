/*
******************************************************************************
**
** @file        : tmpm3hmfdafg.S
** @author      : Ivan Ruzavin (MikroE)
** @brief       : Startup file for TMPM3HMFDAFG Device
**                Core: ARM Cortex-M3
**
**  Target      : TOSHIBA TMPM3HMFDAFG
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
                .long    INT14_Handler                        /*  14 INT14 */
                .long    Interrupt15_Handler                  /*  15 Reserved */
                .long    Interrupt16_Handler                  /*  16 Reserved */
                .long    Interrupt17_Handler                  /*  17 Reserved */
                .long    Interrupt18_Handler                  /*  18 Reserved */
                .long    Interrupt19_Handler                  /*  19 Reserved */
                .long    Interrupt20_Handler                  /*  20 Reserved */
                .long    Interrupt21_Handler                  /*  21 Reserved */
                .long    Interrupt22_Handler                  /*  22 Reserved */
                .long    INTEMG0_Handler                      /*  23 INTEMG0 */
                .long    INTOVV0_Handler                      /*  24 INTOVV0 */
                .long    INTPMD0_Handler                      /*  25 INTPMD0 */
                .long    INTENC00_Handler                     /*  26 INTENC00 */
                .long    INTENC01_Handler                     /*  27 INTENC01 */
                .long    INTADAPDA_Handler                    /*  28 INTADAPDA */
                .long    INTADAPDB_Handler                    /*  29 INTADAPDB */
                .long    INTADACP0_Handler                    /*  30 INTADACP0 */
                .long    INTADACP1_Handler                    /*  31 INTADACP1 */
                .long    INTADATRG_Handler                    /*  32 INTADATRG */
                .long    INTADASGL_Handler                    /*  33 INTADASGL */
                .long    INTADACNT_Handler                    /*  34 INTADACNT */
                .long    INTT0RX_Handler                      /*  35 INTT0RX */
                .long    INTT0TX_Handler                      /*  36 INTT0TX */
                .long    INTT0ERR_Handler                     /*  37 INTT0ERR */
                .long    INTT1RX_Handler                      /*  38 INTT1RX */
                .long    INTT1TX_Handler                      /*  39 INTT1TX */
                .long    INTT1ERR_Handler                     /*  40 INTT1ERR */
                .long    INTT2RX_Handler                      /*  41 INTT2RX */
                .long    INTT2TX_Handler                      /*  42 INTT2TX */
                .long    INTT2ERR_Handler                     /*  43 INTT2ERR */
                .long    INTT3RX_Handler                      /*  44 INTT3RX */
                .long    INTT3TX_Handler                      /*  45 INTT3TX */
                .long    INTT3ERR_Handler                     /*  46 INTT3ERR */
                .long    Interrupt47_Handler                  /*  47 Reserved */
                .long    Interrupt48_Handler                  /*  48 Reserved */
                .long    Interrupt49_Handler                  /*  49 Reserved */
                .long    INTI2CWUP_Handler                    /*  50 INTI2CWUP */
                .long    INTI2C0NST_Handler                   /*  51 INTI2C0NST */
                .long    INTI2C0ATX_Handler                   /*  52 INTI2C0ATX */
                .long    INTI2C0BRX_Handler                   /*  53 INTI2C0BRX */
                .long    INTI2C0NA_Handler                    /*  54 INTI2C0NA */
                .long    INTI2C1NST_Handler                   /*  55 INTI2C1NST */
                .long    INTI2C1ATX_Handler                   /*  56 INTI2C1ATX */
                .long    INTI2C1BRX_Handler                   /*  57 INTI2C1BRX */
                .long    INTI2C1NA_Handler                    /*  58 INTI2C1NA */
                .long    INTI2C2NST_Handler                   /*  59 INTI2C2NST */
                .long    INTI2C2ATX_Handler                   /*  60 INTI2C2ATX */
                .long    INTI2C2BRX_Handler                   /*  61 INTI2C2BRX */
                .long    INTI2C2NA_Handler                    /*  62 INTI2C2NA */
                .long    Interrupt63_Handler                  /*  63 Reserved */
                .long    Interrupt64_Handler                  /*  64 Reserved */
                .long    Interrupt65_Handler                  /*  65 Reserved */
                .long    Interrupt66_Handler                  /*  66 Reserved */
                .long    INTUART0RX_Handler                   /*  67 INTUART0RX */
                .long    INTUART0TX_Handler                   /*  68 INTUART0TX */
                .long    INTUART0ERR_Handler                  /*  69 INTUART0ERR */
                .long    INTUART1RX_Handler                   /*  70 INTUART1RX */
                .long    INTUART1TX_Handler                   /*  71 INTUART1TX */
                .long    INTUART1ERR_Handler                  /*  72 INTUART1ERR */
                .long    INTUART2RX_Handler                   /*  73 INTUART2RX */
                .long    INTUART2TX_Handler                   /*  74 INTUART2TX */
                .long    INTUART2ERR_Handler                  /*  75 INTUART2ERR */
                .long    INTUART3RX_Handler                   /*  76 INTUART3RX */
                .long    INTUART3TX_Handler                   /*  77 INTUART3TX */
                .long    INTUART3ERR_Handler                  /*  78 INTUART3ERR */
                .long    INTUART4RX_Handler                   /*  79 INTUART4RX */
                .long    INTUART4TX_Handler                   /*  80 INTUART4TX */
                .long    INTUART4ERR_Handler                  /*  81 INTUART4ERR */
                .long    INTUART5RX_Handler                   /*  82 INTUART5RX */
                .long    INTUART5TX_Handler                   /*  83 INTUART5TX */
                .long    INTUART5ERR_Handler                  /*  84 INTUART5ERR */
                .long    INTT32A00A_Handler                   /*  85 INTT32A00A */
                .long    INTT32A00ACAP0_Handler               /*  86 INTT32A00ACAP0 */
                .long    INTT32A00ACAP1_Handler               /*  87 INTT32A00ACAP1 */
                .long    INTT32A00B_Handler                   /*  88 INTT32A00B */
                .long    INTT32A00BCAP0_Handler               /*  89 INTT32A00BCAP0 */
                .long    INTT32A00BCAP1_Handler               /*  90 INTT32A00BCAP1 */
                .long    INTT32A00C_Handler                   /*  91 INTT32A00C */
                .long    INTT32A00CCAP0_Handler               /*  92 INTT32A00CCAP0 */
                .long    INTT32A00CCAP1_Handler               /*  93 INTT32A00CCAP1 */
                .long    INTT32A01A_Handler                   /*  94 INTT32A01A */
                .long    INTT32A01ACAP0_Handler               /*  95 INTT32A01ACAP0 */
                .long    INTT32A01ACAP1_Handler               /*  96 INTT32A01ACAP1 */
                .long    INTT32A01B_Handler                   /*  97 INTT32A01B */
                .long    INTT32A01BCAP0_Handler               /*  98 INTT32A01BCAP0 */
                .long    INTT32A01BCAP1_Handler               /*  99 INTT32A01BCAP1 */
                .long    INTT32A01C_Handler                   /* 100 INTT32A01C */
                .long    INTT32A01CCAP0_Handler               /* 101 INTT32A01CCAP0 */
                .long    INTT32A01CCAP1_Handler               /* 102 INTT32A01CCAP1 */
                .long    INTT32A02A_Handler                   /* 103 INTT32A02A */
                .long    INTT32A02ACAP0_Handler               /* 104 INTT32A02ACAP0 */
                .long    INTT32A02ACAP1_Handler               /* 105 INTT32A02ACAP1 */
                .long    INTT32A02B_Handler                   /* 106 INTT32A02B */
                .long    INTT32A02BCAP0_Handler               /* 107 INTT32A02BCAP0 */
                .long    INTT32A02BCAP1_Handler               /* 108 INTT32A02BCAP1 */
                .long    INTT32A02C_Handler                   /* 109 INTT32A02C */
                .long    INTT32A02CCAP0_Handler               /* 110 INTT32A02CCAP0 */
                .long    INTT32A02CCAP1_Handler               /* 111 INTT32A02CCAP1 */
                .long    INTT32A03A_Handler                   /* 112 INTT32A03A */
                .long    INTT32A03ACAP0_Handler               /* 113 INTT32A03ACAP0 */
                .long    INTT32A03ACAP1_Handler               /* 114 INTT32A03ACAP1 */
                .long    INTT32A03B_Handler                   /* 115 INTT32A03B */
                .long    INTT32A03BCAP0_Handler               /* 116 INTT32A03BCAP0 */
                .long    INTT32A03BCAP1_Handler               /* 117 INTT32A03BCAP1 */
                .long    INTT32A03C_Handler                   /* 118 INTT32A03C */
                .long    INTT32A03CCAP0_Handler               /* 119 INTT32A03CCAP0 */
                .long    INTT32A03CCAP1_Handler               /* 120 INTT32A03CCAP1 */
                .long    INTT32A04A_Handler                   /* 121 INTT32A04A */
                .long    INTT32A04ACAP0_Handler               /* 122 INTT32A04ACAP0 */
                .long    INTT32A04ACAP1_Handler               /* 123 INTT32A04ACAP1 */
                .long    INTT32A04B_Handler                   /* 124 INTT32A04B */
                .long    INTT32A04BCAP0_Handler               /* 125 INTT32A04BCAP0 */
                .long    INTT32A04BCAP1_Handler               /* 126 INTT32A04BCAP1 */
                .long    INTT32A04C_Handler                   /* 127 INTT32A04C */
                .long    INTT32A04CCAP0_Handler               /* 128 INTT32A04CCAP0 */
                .long    INTT32A04CCAP1_Handler               /* 129 INTT32A04CCAP1 */
                .long    INTT32A05A_Handler                   /* 130 INTT32A05A */
                .long    INTT32A05ACAP0_Handler               /* 131 INTT32A05ACAP0 */
                .long    INTT32A05ACAP1_Handler               /* 132 INTT32A05ACAP1 */
                .long    INTT32A05B_Handler                   /* 133 INTT32A05B */
                .long    INTT32A05BCAP0_Handler               /* 134 INTT32A05BCAP0 */
                .long    INTT32A05BCAP1_Handler               /* 135 INTT32A05BCAP1 */
                .long    INTT32A05C_Handler                   /* 136 INTT32A05C */
                .long    INTT32A05CCAP0_Handler               /* 137 INTT32A05CCAP0 */
                .long    INTT32A05CCAP1_Handler               /* 138 INTT32A05CCAP1 */
                .long    INTT32A06A_Handler                   /* 139 INTT32A06A */
                .long    INTT32A06ACAP0_Handler               /* 140 INTT32A06ACAP0 */
                .long    INTT32A06ACAP1_Handler               /* 141 INTT32A06ACAP1 */
                .long    INTT32A06B_Handler                   /* 142 INTT32A06B */
                .long    INTT32A06BCAP0_Handler               /* 143 INTT32A06BCAP0 */
                .long    INTT32A06BCAP1_Handler               /* 144 INTT32A06BCAP1 */
                .long    INTT32A06C_Handler                   /* 145 INTT32A06C */
                .long    INTT32A06CCAP0_Handler               /* 146 INTT32A06CCAP0 */
                .long    INTT32A06CCAP1_Handler               /* 147 INTT32A06CCAP1 */
                .long    INTT32A07A_Handler                   /* 148 INTT32A07A */
                .long    INTT32A07ACAP0_Handler               /* 149 INTT32A07ACAP0 */
                .long    INTT32A07ACAP1_Handler               /* 150 INTT32A07ACAP1 */
                .long    INTT32A07B_Handler                   /* 151 INTT32A07B */
                .long    INTT32A07BCAP0_Handler               /* 152 INTT32A07BCAP0 */
                .long    INTT32A07BCAP1_Handler               /* 153 INTT32A07BCAP1 */
                .long    INTT32A07C_Handler                   /* 154 INTT32A07C */
                .long    INTT32A07CCAP0_Handler               /* 155 INTT32A07CCAP0 */
                .long    INTT32A07CCAP1_Handler               /* 156 INTT32A07CCAP1 */
                .long    INTPARI_Handler                      /* 157 INTPARI */
                .long    INTDMAATC_Handler                    /* 158 INTDMAATC */
                .long    INTDMAAERR_Handler                   /* 159 INTDMAAERR */
                .long    INTDMABTC_Handler                    /* 160 INTDMABTC */
                .long    INTDMABERR_Handler                   /* 161 INTDMABERR */
                .long    INTRTC_Handler                       /* 162 INTRTC */
                .long    INTRMC0_Handler                      /* 163 INTRMC0 */
                .long    INTFLCRDY_Handler                    /* 164 INTFLCRDY */
                .long    INTFLDRDY_Handler                    /* 165 INTFLDRDY */
                .long    INTLCDBUSF_Handler                   /* 166 INTLCDBUSF */
                .long    INTLCDSTOP_Handler                   /* 167 INTLCDSTOP */
                .long    INTUART6RX_Handler                   /* 168 INTUART6RX */
                .long    INTUART6TX_Handler                   /* 169 INTUART6TX */
                .long    INTUART6ERR_Handler                  /* 170 INTUART6ERR */
                .space   (54 * 4)
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
                Set_Default_Handler  INT14_Handler
                Set_Default_Handler  Interrupt15_Handler
                Set_Default_Handler  Interrupt16_Handler
                Set_Default_Handler  Interrupt17_Handler
                Set_Default_Handler  Interrupt18_Handler
                Set_Default_Handler  Interrupt19_Handler
                Set_Default_Handler  Interrupt20_Handler
                Set_Default_Handler  Interrupt21_Handler
                Set_Default_Handler  Interrupt22_Handler
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
                Set_Default_Handler  INTT1RX_Handler
                Set_Default_Handler  INTT1TX_Handler
                Set_Default_Handler  INTT1ERR_Handler
                Set_Default_Handler  INTT2RX_Handler
                Set_Default_Handler  INTT2TX_Handler
                Set_Default_Handler  INTT2ERR_Handler
                Set_Default_Handler  INTT3RX_Handler
                Set_Default_Handler  INTT3TX_Handler
                Set_Default_Handler  INTT3ERR_Handler
                Set_Default_Handler  Interrupt47_Handler
                Set_Default_Handler  Interrupt48_Handler
                Set_Default_Handler  Interrupt49_Handler
                Set_Default_Handler  INTI2CWUP_Handler
                Set_Default_Handler  INTI2C0NST_Handler
                Set_Default_Handler  INTI2C0ATX_Handler
                Set_Default_Handler  INTI2C0BRX_Handler
                Set_Default_Handler  INTI2C0NA_Handler
                Set_Default_Handler  INTI2C1NST_Handler
                Set_Default_Handler  INTI2C1ATX_Handler
                Set_Default_Handler  INTI2C1BRX_Handler
                Set_Default_Handler  INTI2C1NA_Handler
                Set_Default_Handler  INTI2C2NST_Handler
                Set_Default_Handler  INTI2C2ATX_Handler
                Set_Default_Handler  INTI2C2BRX_Handler
                Set_Default_Handler  INTI2C2NA_Handler
                Set_Default_Handler  Interrupt63_Handler
                Set_Default_Handler  Interrupt64_Handler
                Set_Default_Handler  Interrupt65_Handler
                Set_Default_Handler  Interrupt66_Handler
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
                Set_Default_Handler  INTUART4RX_Handler
                Set_Default_Handler  INTUART4TX_Handler
                Set_Default_Handler  INTUART4ERR_Handler
                Set_Default_Handler  INTUART5RX_Handler
                Set_Default_Handler  INTUART5TX_Handler
                Set_Default_Handler  INTUART5ERR_Handler
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
                Set_Default_Handler  INTT32A06A_Handler
                Set_Default_Handler  INTT32A06ACAP0_Handler
                Set_Default_Handler  INTT32A06ACAP1_Handler
                Set_Default_Handler  INTT32A06B_Handler
                Set_Default_Handler  INTT32A06BCAP0_Handler
                Set_Default_Handler  INTT32A06BCAP1_Handler
                Set_Default_Handler  INTT32A06C_Handler
                Set_Default_Handler  INTT32A06CCAP0_Handler
                Set_Default_Handler  INTT32A06CCAP1_Handler
                Set_Default_Handler  INTT32A07A_Handler
                Set_Default_Handler  INTT32A07ACAP0_Handler
                Set_Default_Handler  INTT32A07ACAP1_Handler
                Set_Default_Handler  INTT32A07B_Handler
                Set_Default_Handler  INTT32A07BCAP0_Handler
                Set_Default_Handler  INTT32A07BCAP1_Handler
                Set_Default_Handler  INTT32A07C_Handler
                Set_Default_Handler  INTT32A07CCAP0_Handler
                Set_Default_Handler  INTT32A07CCAP1_Handler
                Set_Default_Handler  INTPARI_Handler
                Set_Default_Handler  INTDMAATC_Handler
                Set_Default_Handler  INTDMAAERR_Handler
                Set_Default_Handler  INTDMABTC_Handler
                Set_Default_Handler  INTDMABERR_Handler
                Set_Default_Handler  INTRTC_Handler
                Set_Default_Handler  INTRMC0_Handler
                Set_Default_Handler  INTFLCRDY_Handler
                Set_Default_Handler  INTFLDRDY_Handler
                Set_Default_Handler  INTLCDBUSF_Handler
                Set_Default_Handler  INTLCDSTOP_Handler
                Set_Default_Handler  INTUART6RX_Handler
                Set_Default_Handler  INTUART6TX_Handler
                Set_Default_Handler  INTUART6ERR_Handler


                .end