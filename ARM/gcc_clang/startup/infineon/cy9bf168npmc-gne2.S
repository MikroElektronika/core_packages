/*
******************************************************************************
**
** @file        : cy9bf168npmc-gne2.S
** @author      : MikroElektronika
** @brief       : Startup file for CY9BF168NPMC-GNE2 Device
**                Core: ARM Cortex-M4F
**                Interrupt vector table generated from the device header IRQn_Type.
**
**  Target      : INFINEON CY9BF168NPMC-GNE2
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
                .long    CSV_IRQHandler                     /*   0 CSV */
                .long    SWDT_IRQHandler                    /*   1 SWDT */
                .long    LVD_IRQHandler                     /*   2 LVD */
                .long    IRQ003SEL_IRQHandler               /*   3 IRQ003SEL */
                .long    IRQ004SEL_IRQHandler               /*   4 IRQ004SEL */
                .long    IRQ005SEL_IRQHandler               /*   5 IRQ005SEL */
                .long    IRQ006SEL_IRQHandler               /*   6 IRQ006SEL */
                .long    IRQ007SEL_IRQHandler               /*   7 IRQ007SEL */
                .long    IRQ008SEL_IRQHandler               /*   8 IRQ008SEL */
                .long    IRQ009SEL_IRQHandler               /*   9 IRQ009SEL */
                .long    IRQ010SEL_IRQHandler               /*  10 IRQ010SEL */
                .long    EXINT0_IRQHandler                  /*  11 EXINT0 */
                .long    EXINT1_IRQHandler                  /*  12 EXINT1 */
                .long    EXINT2_IRQHandler                  /*  13 EXINT2 */
                .long    EXINT3_IRQHandler                  /*  14 EXINT3 */
                .long    EXINT4_IRQHandler                  /*  15 EXINT4 */
                .long    EXINT5_IRQHandler                  /*  16 EXINT5 */
                .long    EXINT6_IRQHandler                  /*  17 EXINT6 */
                .long    EXINT7_IRQHandler                  /*  18 EXINT7 */
                .long    QPRC0_IRQHandler                   /*  19 QPRC0 */
                .long    QPRC1_IRQHandler                   /*  20 QPRC1 */
                .long    WFG0_DTIF0_IRQHandler              /*  21 WFG0_DTIF0 */
                .long    WFG1_DTIF1_IRQHandler              /*  22 WFG1_DTIF1 */
                .long    WFG2_DTIF2_IRQHandler              /*  23 WFG2_DTIF2 */
                .long    FRT0_PEAK_IRQHandler               /*  24 FRT0_PEAK */
                .long    FRT0_ZERO_IRQHandler               /*  25 FRT0_ZERO */
                .long    ICU0_IRQHandler                    /*  26 ICU0 */
                .long    OCU0_IRQHandler                    /*  27 OCU0 */
                .long    FRT1_PEAK_IRQHandler               /*  28 FRT1_PEAK */
                .long    FRT1_ZERO_IRQHandler               /*  29 FRT1_ZERO */
                .long    ICU1_IRQHandler                    /*  30 ICU1 */
                .long    OCU1_IRQHandler                    /*  31 OCU1 */
                .long    FRT2_PEAK_IRQHandler               /*  32 FRT2_PEAK */
                .long    FRT2_ZERO_IRQHandler               /*  33 FRT2_ZERO */
                .long    ICU2_IRQHandler                    /*  34 ICU2 */
                .long    OCU2_IRQHandler                    /*  35 OCU2 */
                .long    PPG00_02_04_IRQHandler             /*  36 PPG00_02_04 */
                .long    PPG08_10_12_IRQHandler             /*  37 PPG08_10_12 */
                .long    PPG16_18_20_IRQHandler             /*  38 PPG16_18_20 */
                .long    BT0_IRQHandler                     /*  39 BT0 */
                .long    BT1_IRQHandler                     /*  40 BT1 */
                .long    BT2_IRQHandler                     /*  41 BT2 */
                .long    BT3_IRQHandler                     /*  42 BT3 */
                .long    BT4_IRQHandler                     /*  43 BT4 */
                .long    BT5_IRQHandler                     /*  44 BT5 */
                .long    BT6_IRQHandler                     /*  45 BT6 */
                .long    BT7_IRQHandler                     /*  46 BT7 */
                .long    DT1_2_IRQHandler                   /*  47 DT1_2 */
                .long    WC_IRQHandler                      /*  48 WC */
                .long    EXTBUS_ERR_IRQHandler              /*  49 EXTBUS_ERR */
                .long    RTC_IRQHandler                     /*  50 RTC */
                .long    EXINT8_IRQHandler                  /*  51 EXINT8 */
                .long    EXINT9_IRQHandler                  /*  52 EXINT9 */
                .long    EXINT10_IRQHandler                 /*  53 EXINT10 */
                .long    EXINT11_IRQHandler                 /*  54 EXINT11 */
                .long    EXINT12_IRQHandler                 /*  55 EXINT12 */
                .long    EXINT13_IRQHandler                 /*  56 EXINT13 */
                .long    EXINT14_IRQHandler                 /*  57 EXINT14 */
                .long    EXINT15_IRQHandler                 /*  58 EXINT15 */
                .long    TIM_IRQHandler                     /*  59 TIM */
                .long    MFS0_RX_IRQHandler                 /*  60 MFS0_RX */
                .long    MFS0_TX_IRQHandler                 /*  61 MFS0_TX */
                .long    MFS1_RX_IRQHandler                 /*  62 MFS1_RX */
                .long    MFS1_TX_IRQHandler                 /*  63 MFS1_TX */
                .long    MFS2_RX_IRQHandler                 /*  64 MFS2_RX */
                .long    MFS2_TX_IRQHandler                 /*  65 MFS2_TX */
                .long    MFS3_RX_IRQHandler                 /*  66 MFS3_RX */
                .long    MFS3_TX_IRQHandler                 /*  67 MFS3_TX */
                .long    MFS4_RX_IRQHandler                 /*  68 MFS4_RX */
                .long    MFS4_TX_IRQHandler                 /*  69 MFS4_TX */
                .long    MFS5_RX_IRQHandler                 /*  70 MFS5_RX */
                .long    MFS5_TX_IRQHandler                 /*  71 MFS5_TX */
                .long    MFS6_RX_IRQHandler                 /*  72 MFS6_RX */
                .long    MFS6_TX_IRQHandler                 /*  73 MFS6_TX */
                .long    MFS7_RX_IRQHandler                 /*  74 MFS7_RX */
                .long    MFS7_TX_IRQHandler                 /*  75 MFS7_TX */
                .long    ADC0_IRQHandler                    /*  76 ADC0 */
                .long    ADC1_IRQHandler                    /*  77 ADC1 */
                .long    USB0_IRQHandler                    /*  78 USB0 */
                .long    USB0_HOST_IRQHandler               /*  79 USB0_HOST */
                .long    CAN0_IRQHandler                    /*  80 CAN0 */
                .long    CAN1_IRQHandler                    /*  81 CAN1 */
                .long    ETHER0_IRQHandler                  /*  82 ETHER0 */
                .long    DMAC0_IRQHandler                   /*  83 DMAC0 */
                .long    DMAC1_IRQHandler                   /*  84 DMAC1 */
                .long    DMAC2_IRQHandler                   /*  85 DMAC2 */
                .long    DMAC3_IRQHandler                   /*  86 DMAC3 */
                .long    DMAC4_IRQHandler                   /*  87 DMAC4 */
                .long    DMAC5_IRQHandler                   /*  88 DMAC5 */
                .long    DMAC6_IRQHandler                   /*  89 DMAC6 */
                .long    DMAC7_IRQHandler                   /*  90 DMAC7 */
                .long    DSTC_IRQHandler                    /*  91 DSTC */
                .long    EXINT16_17_18_19_IRQHandler        /*  92 EXINT16_17_18_19 */
                .long    EXINT20_21_22_23_IRQHandler        /*  93 EXINT20_21_22_23 */
                .long    EXINT24_25_26_27_IRQHandler        /*  94 EXINT24_25_26_27 */
                .long    EXINT28_29_30_31_IRQHandler        /*  95 EXINT28_29_30_31 */
                .long    QPRC2_IRQHandler                   /*  96 QPRC2 */
                .long    QPRC3_IRQHandler                   /*  97 QPRC3 */
                .long    BT8_IRQHandler                     /*  98 BT8 */
                .long    BT9_IRQHandler                     /*  99 BT9 */
                .long    BT10_IRQHandler                    /* 100 BT10 */
                .long    BT11_IRQHandler                    /* 101 BT11 */
                .long    BT12_IRQHandler                    /* 102 BT12 */
                .long    MFS8_RX_IRQHandler                 /* 103 MFS8_RX */
                .long    MFS8_TX_IRQHandler                 /* 104 MFS8_TX */
                .long    MFS9_RX_IRQHandler                 /* 105 MFS9_RX */
                .long    MFS9_TX_IRQHandler                 /* 106 MFS9_TX */
                .long    MFS10_RX_IRQHandler                /* 107 MFS10_RX */
                .long    MFS10_TX_IRQHandler                /* 108 MFS10_TX */
                .long    MFS11_RX_IRQHandler                /* 109 MFS11_RX */
                .long    MFS11_TX_IRQHandler                /* 110 MFS11_TX */
                .long    ADC2_IRQHandler                    /* 111 ADC2 */
                .long    0                                  /* 112 Reserved */
                .long    USB1_IRQHandler                    /* 113 USB1 */
                .long    USB1_HOST_IRQHandler               /* 114 USB1_HOST */
                .long    0                                  /* 115 Reserved */
                .long    0                                  /* 116 Reserved */
                .long    0                                  /* 117 Reserved */
                .long    SD_IRQHandler                      /* 118 SD */
                .long    FLASH_IRQHandler                   /* 119 FLASH */
__Vectors_End:
                .equ     __Vectors_Size, __Vectors_End - __Vectors
                .size    __Vectors, . - __Vectors


                .thumb
                .section .text.Reset_Handler, "ax", %progbits
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

                /* Clock system initialization (init_clock.c) */
                bl       SystemInit

                /* Static constructors */
                bl       __libc_init_array

                bl       main

.L_hang:
                b        .L_hang

                .pool
                .fnend
                .size    Reset_Handler, . - Reset_Handler

                .section .text.Default_Handler, "ax", %progbits
                .align   2
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

                Set_Default_Handler  CSV_IRQHandler
                Set_Default_Handler  SWDT_IRQHandler
                Set_Default_Handler  LVD_IRQHandler
                Set_Default_Handler  IRQ003SEL_IRQHandler
                Set_Default_Handler  IRQ004SEL_IRQHandler
                Set_Default_Handler  IRQ005SEL_IRQHandler
                Set_Default_Handler  IRQ006SEL_IRQHandler
                Set_Default_Handler  IRQ007SEL_IRQHandler
                Set_Default_Handler  IRQ008SEL_IRQHandler
                Set_Default_Handler  IRQ009SEL_IRQHandler
                Set_Default_Handler  IRQ010SEL_IRQHandler
                Set_Default_Handler  EXINT0_IRQHandler
                Set_Default_Handler  EXINT1_IRQHandler
                Set_Default_Handler  EXINT2_IRQHandler
                Set_Default_Handler  EXINT3_IRQHandler
                Set_Default_Handler  EXINT4_IRQHandler
                Set_Default_Handler  EXINT5_IRQHandler
                Set_Default_Handler  EXINT6_IRQHandler
                Set_Default_Handler  EXINT7_IRQHandler
                Set_Default_Handler  QPRC0_IRQHandler
                Set_Default_Handler  QPRC1_IRQHandler
                Set_Default_Handler  WFG0_DTIF0_IRQHandler
                Set_Default_Handler  WFG1_DTIF1_IRQHandler
                Set_Default_Handler  WFG2_DTIF2_IRQHandler
                Set_Default_Handler  FRT0_PEAK_IRQHandler
                Set_Default_Handler  FRT0_ZERO_IRQHandler
                Set_Default_Handler  ICU0_IRQHandler
                Set_Default_Handler  OCU0_IRQHandler
                Set_Default_Handler  FRT1_PEAK_IRQHandler
                Set_Default_Handler  FRT1_ZERO_IRQHandler
                Set_Default_Handler  ICU1_IRQHandler
                Set_Default_Handler  OCU1_IRQHandler
                Set_Default_Handler  FRT2_PEAK_IRQHandler
                Set_Default_Handler  FRT2_ZERO_IRQHandler
                Set_Default_Handler  ICU2_IRQHandler
                Set_Default_Handler  OCU2_IRQHandler
                Set_Default_Handler  PPG00_02_04_IRQHandler
                Set_Default_Handler  PPG08_10_12_IRQHandler
                Set_Default_Handler  PPG16_18_20_IRQHandler
                Set_Default_Handler  BT0_IRQHandler
                Set_Default_Handler  BT1_IRQHandler
                Set_Default_Handler  BT2_IRQHandler
                Set_Default_Handler  BT3_IRQHandler
                Set_Default_Handler  BT4_IRQHandler
                Set_Default_Handler  BT5_IRQHandler
                Set_Default_Handler  BT6_IRQHandler
                Set_Default_Handler  BT7_IRQHandler
                Set_Default_Handler  DT1_2_IRQHandler
                Set_Default_Handler  WC_IRQHandler
                Set_Default_Handler  EXTBUS_ERR_IRQHandler
                Set_Default_Handler  RTC_IRQHandler
                Set_Default_Handler  EXINT8_IRQHandler
                Set_Default_Handler  EXINT9_IRQHandler
                Set_Default_Handler  EXINT10_IRQHandler
                Set_Default_Handler  EXINT11_IRQHandler
                Set_Default_Handler  EXINT12_IRQHandler
                Set_Default_Handler  EXINT13_IRQHandler
                Set_Default_Handler  EXINT14_IRQHandler
                Set_Default_Handler  EXINT15_IRQHandler
                Set_Default_Handler  TIM_IRQHandler
                Set_Default_Handler  MFS0_RX_IRQHandler
                Set_Default_Handler  MFS0_TX_IRQHandler
                Set_Default_Handler  MFS1_RX_IRQHandler
                Set_Default_Handler  MFS1_TX_IRQHandler
                Set_Default_Handler  MFS2_RX_IRQHandler
                Set_Default_Handler  MFS2_TX_IRQHandler
                Set_Default_Handler  MFS3_RX_IRQHandler
                Set_Default_Handler  MFS3_TX_IRQHandler
                Set_Default_Handler  MFS4_RX_IRQHandler
                Set_Default_Handler  MFS4_TX_IRQHandler
                Set_Default_Handler  MFS5_RX_IRQHandler
                Set_Default_Handler  MFS5_TX_IRQHandler
                Set_Default_Handler  MFS6_RX_IRQHandler
                Set_Default_Handler  MFS6_TX_IRQHandler
                Set_Default_Handler  MFS7_RX_IRQHandler
                Set_Default_Handler  MFS7_TX_IRQHandler
                Set_Default_Handler  ADC0_IRQHandler
                Set_Default_Handler  ADC1_IRQHandler
                Set_Default_Handler  USB0_IRQHandler
                Set_Default_Handler  USB0_HOST_IRQHandler
                Set_Default_Handler  CAN0_IRQHandler
                Set_Default_Handler  CAN1_IRQHandler
                Set_Default_Handler  ETHER0_IRQHandler
                Set_Default_Handler  DMAC0_IRQHandler
                Set_Default_Handler  DMAC1_IRQHandler
                Set_Default_Handler  DMAC2_IRQHandler
                Set_Default_Handler  DMAC3_IRQHandler
                Set_Default_Handler  DMAC4_IRQHandler
                Set_Default_Handler  DMAC5_IRQHandler
                Set_Default_Handler  DMAC6_IRQHandler
                Set_Default_Handler  DMAC7_IRQHandler
                Set_Default_Handler  DSTC_IRQHandler
                Set_Default_Handler  EXINT16_17_18_19_IRQHandler
                Set_Default_Handler  EXINT20_21_22_23_IRQHandler
                Set_Default_Handler  EXINT24_25_26_27_IRQHandler
                Set_Default_Handler  EXINT28_29_30_31_IRQHandler
                Set_Default_Handler  QPRC2_IRQHandler
                Set_Default_Handler  QPRC3_IRQHandler
                Set_Default_Handler  BT8_IRQHandler
                Set_Default_Handler  BT9_IRQHandler
                Set_Default_Handler  BT10_IRQHandler
                Set_Default_Handler  BT11_IRQHandler
                Set_Default_Handler  BT12_IRQHandler
                Set_Default_Handler  MFS8_RX_IRQHandler
                Set_Default_Handler  MFS8_TX_IRQHandler
                Set_Default_Handler  MFS9_RX_IRQHandler
                Set_Default_Handler  MFS9_TX_IRQHandler
                Set_Default_Handler  MFS10_RX_IRQHandler
                Set_Default_Handler  MFS10_TX_IRQHandler
                Set_Default_Handler  MFS11_RX_IRQHandler
                Set_Default_Handler  MFS11_TX_IRQHandler
                Set_Default_Handler  ADC2_IRQHandler
                Set_Default_Handler  USB1_IRQHandler
                Set_Default_Handler  USB1_HOST_IRQHandler
                Set_Default_Handler  SD_IRQHandler
                Set_Default_Handler  FLASH_IRQHandler

                .end
