/*
******************************************************************************
**
** @file        : tmpm344f10xbg.S
** @author      : Ivan Ruzavin (MikroE)
** @brief       : Startup file for TMPM344F10XBG Device
**                Core: ARM Cortex-M3
**
**  Target      : TOSHIBA TMPM344F10XBG
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
                .long    INTPSCASTOP_Handler                  /*  16 INTPSCASTOP */
                .long    INTPSCABRK_Handler                   /*  17 INTPSCABRK */
                .long    INTPSCASTEP_Handler                  /*  18 INTPSCASTEP */
                .long    INTPSCAII_Handler                    /*  19 INTPSCAII */
                .long    INTPSCAIA_Handler                    /*  20 INTPSCAIA */
                .long    INTPSCBSTOP_Handler                  /*  21 INTPSCBSTOP */
                .long    INTPSCBBRK_Handler                   /*  22 INTPSCBBRK */
                .long    INTPSCBSTEP_Handler                  /*  23 INTPSCBSTEP */
                .long    INTPSCBII_Handler                    /*  24 INTPSCBII */
                .long    INTPSCBIA_Handler                    /*  25 INTPSCBIA */
                .long    INTPSCCSTOP_Handler                  /*  26 INTPSCCSTOP */
                .long    INTPSCCBRK_Handler                   /*  27 INTPSCCBRK */
                .long    INTPSCCSTEP_Handler                  /*  28 INTPSCCSTEP */
                .long    INTPSCCII_Handler                    /*  29 INTPSCCII */
                .long    INTPSCCIA_Handler                    /*  30 INTPSCCIA */
                .long    INTPSCDSTOP_Handler                  /*  31 INTPSCDSTOP */
                .long    INTPSCDBRK_Handler                   /*  32 INTPSCDBRK */
                .long    INTPSCDSTEP_Handler                  /*  33 INTPSCDSTEP */
                .long    INTPSCDII_Handler                    /*  34 INTPSCDII */
                .long    INTPSCDIA_Handler                    /*  35 INTPSCDIA */
                .long    INTT0RX_Handler                      /*  36 INTT0RX */
                .long    INTT0TX_Handler                      /*  37 INTT0TX */
                .long    INTT0ERR_Handler                     /*  38 INTT0ERR */
                .long    INTT1RX_Handler                      /*  39 INTT1RX */
                .long    INTT1TX_Handler                      /*  40 INTT1TX */
                .long    INTT1ERR_Handler                     /*  41 INTT1ERR */
                .long    INTT2RX_Handler                      /*  42 INTT2RX */
                .long    INTT2TX_Handler                      /*  43 INTT2TX */
                .long    INTT2ERR_Handler                     /*  44 INTT2ERR */
                .long    INTT3RX_Handler                      /*  45 INTT3RX */
                .long    INTT3TX_Handler                      /*  46 INTT3TX */
                .long    INTT3ERR_Handler                     /*  47 INTT3ERR */
                .long    INTT4RX_Handler                      /*  48 INTT4RX */
                .long    INTT4TX_Handler                      /*  49 INTT4TX */
                .long    INTT4ERR_Handler                     /*  50 INTT4ERR */
                .long    INTUART0_Handler                     /*  51 INTUART0 */
                .long    INTRX0_Handler                       /*  52 INTRX0 */
                .long    INTTX0_Handler                       /*  53 INTTX0 */
                .long    INTI2C_Handler                       /*  54 INTI2C */
                .long    INTADA_Handler                       /*  55 INTADA */
                .long    INTADB_Handler                       /*  56 INTADB */
                .long    INTADC_Handler                       /*  57 INTADC */
                .long    INTADAHP_Handler                     /*  58 INTADAHP */
                .long    INTADBHP_Handler                     /*  59 INTADBHP */
                .long    INTADCHP_Handler                     /*  60 INTADCHP */
                .long    INTEPHC0_Handler                     /*  61 INTEPHC0 */
                .long    INTPHCP0OVF_Handler                  /*  62 INTPHCP0OVF */
                .long    INTPHCP0PHE_Handler                  /*  63 INTPHCP0PHE */
                .long    INTPHCP0CY0_Handler                  /*  64 INTPHCP0CY0 */
                .long    INTPHCP0CY1_Handler                  /*  65 INTPHCP0CY1 */
                .long    INTPHCP0CY2_Handler                  /*  66 INTPHCP0CY2 */
                .long    INTPHCP0CY3_Handler                  /*  67 INTPHCP0CY3 */
                .long    INTPHCP0LMT_Handler                  /*  68 INTPHCP0LMT */
                .long    INTEPHC1_Handler                     /*  69 INTEPHC1 */
                .long    INTPHCP1OVF_Handler                  /*  70 INTPHCP1OVF */
                .long    INTPHCP1PHE_Handler                  /*  71 INTPHCP1PHE */
                .long    INTPHCP1CY0_Handler                  /*  72 INTPHCP1CY0 */
                .long    INTPHCP1CY1_Handler                  /*  73 INTPHCP1CY1 */
                .long    INTPHCP1CY2_Handler                  /*  74 INTPHCP1CY2 */
                .long    INTPHCP1CY3_Handler                  /*  75 INTPHCP1CY3 */
                .long    INTPHCP1LMT_Handler                  /*  76 INTPHCP1LMT */
                .long    INTEPHC2_Handler                     /*  77 INTEPHC2 */
                .long    INTPHCP2OVF_Handler                  /*  78 INTPHCP2OVF */
                .long    INTPHCP2PHE_Handler                  /*  79 INTPHCP2PHE */
                .long    INTPHCP2CY0_Handler                  /*  80 INTPHCP2CY0 */
                .long    INTPHCP2CY1_Handler                  /*  81 INTPHCP2CY1 */
                .long    INTPHCP2CY2_Handler                  /*  82 INTPHCP2CY2 */
                .long    INTPHCP2CY3_Handler                  /*  83 INTPHCP2CY3 */
                .long    INTPHCP2LMT_Handler                  /*  84 INTPHCP2LMT */
                .long    INTTDA0CMP0_Handler                  /*  85 INTTDA0CMP0 */
                .long    INTTDA0CMP1_Handler                  /*  86 INTTDA0CMP1 */
                .long    INTTDA0CMP2_Handler                  /*  87 INTTDA0CMP2 */
                .long    INTTDA0CMP3_Handler                  /*  88 INTTDA0CMP3 */
                .long    INTTDA0CMP4_Handler                  /*  89 INTTDA0CMP4 */
                .long    INTTDA1CMP0_Handler                  /*  90 INTTDA1CMP0 */
                .long    INTTDA1CMP1_Handler                  /*  91 INTTDA1CMP1 */
                .long    INTTDA1CMP2_Handler                  /*  92 INTTDA1CMP2 */
                .long    INTTDA1CMP3_Handler                  /*  93 INTTDA1CMP3 */
                .long    INTTDA1CMP4_Handler                  /*  94 INTTDA1CMP4 */
                .long    INTTDB0CMP0_Handler                  /*  95 INTTDB0CMP0 */
                .long    INTTDB0CMP1_Handler                  /*  96 INTTDB0CMP1 */
                .long    INTTDB0CMP2_Handler                  /*  97 INTTDB0CMP2 */
                .long    INTTDB0CMP3_Handler                  /*  98 INTTDB0CMP3 */
                .long    INTTDB0CMP4_Handler                  /*  99 INTTDB0CMP4 */
                .long    INTTDB1CMP0_Handler                  /* 100 INTTDB1CMP0 */
                .long    INTTDB1CMP1_Handler                  /* 101 INTTDB1CMP1 */
                .long    INTTDB1CMP2_Handler                  /* 102 INTTDB1CMP2 */
                .long    INTTDB1CMP3_Handler                  /* 103 INTTDB1CMP3 */
                .long    INTTDB1CMP4_Handler                  /* 104 INTTDB1CMP4 */
                .long    INTTB0_Handler                       /* 105 INTTB0 */
                .long    INTTB1_Handler                       /* 106 INTTB1 */
                .long    INTTB2_Handler                       /* 107 INTTB2 */
                .long    INTTB3_Handler                       /* 108 INTTB3 */
                .long    INTTB4_Handler                       /* 109 INTTB4 */
                .long    INTTB5_Handler                       /* 110 INTTB5 */
                .long    INTTB6_Handler                       /* 111 INTTB6 */
                .long    INTTB7_Handler                       /* 112 INTTB7 */
                .long    INTTB8_Handler                       /* 113 INTTB8 */
                .long    INTTB9_Handler                       /* 114 INTTB9 */
                .long    INTTBA_Handler                       /* 115 INTTBA */
                .long    INTTBB_Handler                       /* 116 INTTBB */
                .long    INTTBC_Handler                       /* 117 INTTBC */
                .long    INTTBD_Handler                       /* 118 INTTBD */
                .long    INTTBE_Handler                       /* 119 INTTBE */
                .long    INTTBF_Handler                       /* 120 INTTBF */
                .long    INTTBCCAP0_Handler                   /* 121 INTTBCCAP0 */
                .long    INTTBCCAP1_Handler                   /* 122 INTTBCCAP1 */
                .long    INTTBDCAP0_Handler                   /* 123 INTTBDCAP0 */
                .long    INTTBDCAP1_Handler                   /* 124 INTTBDCAP1 */
                .long    INTTBECAP0_Handler                   /* 125 INTTBECAP0 */
                .long    INTTBECAP1_Handler                   /* 126 INTTBECAP1 */
                .long    INTTBFCAP0_Handler                   /* 127 INTTBFCAP0 */
                .long    INTTBFCAP1_Handler                   /* 128 INTTBFCAP1 */
                .long    INTADAM0_Handler                     /* 129 INTADAM0 */
                .long    INTADAM1_Handler                     /* 130 INTADAM1 */
                .long    INTADBM0_Handler                     /* 131 INTADBM0 */
                .long    INTADBM1_Handler                     /* 132 INTADBM1 */
                .long    INTADCM0_Handler                     /* 133 INTADCM0 */
                .long    INTADCM1_Handler                     /* 134 INTADCM1 */
                .long    INTDMACATC_Handler                   /* 135 INTDMACATC */
                .long    INTDMACAERR_Handler                  /* 136 INTDMACAERR */
                .long    INTDMACBTC_Handler                   /* 137 INTDMACBTC */
                .long    INTDMACBERR_Handler                  /* 138 INTDMACBERR */
                .long    INTDMACCTC_Handler                   /* 139 INTDMACCTC */
                .long    INTDMACCERR_Handler                  /* 140 INTDMACCERR */
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
                Set_Default_Handler  INTPSCASTOP_Handler
                Set_Default_Handler  INTPSCABRK_Handler
                Set_Default_Handler  INTPSCASTEP_Handler
                Set_Default_Handler  INTPSCAII_Handler
                Set_Default_Handler  INTPSCAIA_Handler
                Set_Default_Handler  INTPSCBSTOP_Handler
                Set_Default_Handler  INTPSCBBRK_Handler
                Set_Default_Handler  INTPSCBSTEP_Handler
                Set_Default_Handler  INTPSCBII_Handler
                Set_Default_Handler  INTPSCBIA_Handler
                Set_Default_Handler  INTPSCCSTOP_Handler
                Set_Default_Handler  INTPSCCBRK_Handler
                Set_Default_Handler  INTPSCCSTEP_Handler
                Set_Default_Handler  INTPSCCII_Handler
                Set_Default_Handler  INTPSCCIA_Handler
                Set_Default_Handler  INTPSCDSTOP_Handler
                Set_Default_Handler  INTPSCDBRK_Handler
                Set_Default_Handler  INTPSCDSTEP_Handler
                Set_Default_Handler  INTPSCDII_Handler
                Set_Default_Handler  INTPSCDIA_Handler
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
                Set_Default_Handler  INTUART0_Handler
                Set_Default_Handler  INTRX0_Handler
                Set_Default_Handler  INTTX0_Handler
                Set_Default_Handler  INTI2C_Handler
                Set_Default_Handler  INTADA_Handler
                Set_Default_Handler  INTADB_Handler
                Set_Default_Handler  INTADC_Handler
                Set_Default_Handler  INTADAHP_Handler
                Set_Default_Handler  INTADBHP_Handler
                Set_Default_Handler  INTADCHP_Handler
                Set_Default_Handler  INTEPHC0_Handler
                Set_Default_Handler  INTPHCP0OVF_Handler
                Set_Default_Handler  INTPHCP0PHE_Handler
                Set_Default_Handler  INTPHCP0CY0_Handler
                Set_Default_Handler  INTPHCP0CY1_Handler
                Set_Default_Handler  INTPHCP0CY2_Handler
                Set_Default_Handler  INTPHCP0CY3_Handler
                Set_Default_Handler  INTPHCP0LMT_Handler
                Set_Default_Handler  INTEPHC1_Handler
                Set_Default_Handler  INTPHCP1OVF_Handler
                Set_Default_Handler  INTPHCP1PHE_Handler
                Set_Default_Handler  INTPHCP1CY0_Handler
                Set_Default_Handler  INTPHCP1CY1_Handler
                Set_Default_Handler  INTPHCP1CY2_Handler
                Set_Default_Handler  INTPHCP1CY3_Handler
                Set_Default_Handler  INTPHCP1LMT_Handler
                Set_Default_Handler  INTEPHC2_Handler
                Set_Default_Handler  INTPHCP2OVF_Handler
                Set_Default_Handler  INTPHCP2PHE_Handler
                Set_Default_Handler  INTPHCP2CY0_Handler
                Set_Default_Handler  INTPHCP2CY1_Handler
                Set_Default_Handler  INTPHCP2CY2_Handler
                Set_Default_Handler  INTPHCP2CY3_Handler
                Set_Default_Handler  INTPHCP2LMT_Handler
                Set_Default_Handler  INTTDA0CMP0_Handler
                Set_Default_Handler  INTTDA0CMP1_Handler
                Set_Default_Handler  INTTDA0CMP2_Handler
                Set_Default_Handler  INTTDA0CMP3_Handler
                Set_Default_Handler  INTTDA0CMP4_Handler
                Set_Default_Handler  INTTDA1CMP0_Handler
                Set_Default_Handler  INTTDA1CMP1_Handler
                Set_Default_Handler  INTTDA1CMP2_Handler
                Set_Default_Handler  INTTDA1CMP3_Handler
                Set_Default_Handler  INTTDA1CMP4_Handler
                Set_Default_Handler  INTTDB0CMP0_Handler
                Set_Default_Handler  INTTDB0CMP1_Handler
                Set_Default_Handler  INTTDB0CMP2_Handler
                Set_Default_Handler  INTTDB0CMP3_Handler
                Set_Default_Handler  INTTDB0CMP4_Handler
                Set_Default_Handler  INTTDB1CMP0_Handler
                Set_Default_Handler  INTTDB1CMP1_Handler
                Set_Default_Handler  INTTDB1CMP2_Handler
                Set_Default_Handler  INTTDB1CMP3_Handler
                Set_Default_Handler  INTTDB1CMP4_Handler
                Set_Default_Handler  INTTB0_Handler
                Set_Default_Handler  INTTB1_Handler
                Set_Default_Handler  INTTB2_Handler
                Set_Default_Handler  INTTB3_Handler
                Set_Default_Handler  INTTB4_Handler
                Set_Default_Handler  INTTB5_Handler
                Set_Default_Handler  INTTB6_Handler
                Set_Default_Handler  INTTB7_Handler
                Set_Default_Handler  INTTB8_Handler
                Set_Default_Handler  INTTB9_Handler
                Set_Default_Handler  INTTBA_Handler
                Set_Default_Handler  INTTBB_Handler
                Set_Default_Handler  INTTBC_Handler
                Set_Default_Handler  INTTBD_Handler
                Set_Default_Handler  INTTBE_Handler
                Set_Default_Handler  INTTBF_Handler
                Set_Default_Handler  INTTBCCAP0_Handler
                Set_Default_Handler  INTTBCCAP1_Handler
                Set_Default_Handler  INTTBDCAP0_Handler
                Set_Default_Handler  INTTBDCAP1_Handler
                Set_Default_Handler  INTTBECAP0_Handler
                Set_Default_Handler  INTTBECAP1_Handler
                Set_Default_Handler  INTTBFCAP0_Handler
                Set_Default_Handler  INTTBFCAP1_Handler
                Set_Default_Handler  INTADAM0_Handler
                Set_Default_Handler  INTADAM1_Handler
                Set_Default_Handler  INTADBM0_Handler
                Set_Default_Handler  INTADBM1_Handler
                Set_Default_Handler  INTADCM0_Handler
                Set_Default_Handler  INTADCM1_Handler
                Set_Default_Handler  INTDMACATC_Handler
                Set_Default_Handler  INTDMACAERR_Handler
                Set_Default_Handler  INTDMACBTC_Handler
                Set_Default_Handler  INTDMACBERR_Handler
                Set_Default_Handler  INTDMACCTC_Handler
                Set_Default_Handler  INTDMACCERR_Handler


                .end