/*
******************************************************************************
**
** @file        : nrf54l10-qfaa.S
** @author      : MikroElektronika
** @brief       : Startup file for NRF54L10-QFAA Device
**                Core: ARM Cortex-M33F
**                Interrupt vector table generated from the Nordic MDK IRQn_Type.
**
**  Target      : NORDIC SEMICONDUCTOR NRF54L10-QFAA
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
                .arch    armv8-m.main

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
                .long    SecureFault_Handler                /*  -9 Secure Fault Handler */
                .long    0                                  /*     Reserved */
                .long    0                                  /*     Reserved */
                .long    0                                  /*     Reserved */
                .long    SVC_Handler                        /*  -5 SVCall Handler */
                .long    DebugMon_Handler                   /*  -4 Debug Monitor Handler */
                .long    0                                  /*     Reserved */
                .long    PendSV_Handler                     /*  -2 PendSV Handler */
                .long    SysTick_Handler                    /*  -1 SysTick Handler */

                /* Interrupts */
                .long    0                                  /*   0 Reserved */
                .long    0                                  /*   1 Reserved */
                .long    0                                  /*   2 Reserved */
                .long    0                                  /*   3 Reserved */
                .long    0                                  /*   4 Reserved */
                .long    0                                  /*   5 Reserved */
                .long    0                                  /*   6 Reserved */
                .long    0                                  /*   7 Reserved */
                .long    0                                  /*   8 Reserved */
                .long    0                                  /*   9 Reserved */
                .long    0                                  /*  10 Reserved */
                .long    0                                  /*  11 Reserved */
                .long    0                                  /*  12 Reserved */
                .long    0                                  /*  13 Reserved */
                .long    0                                  /*  14 Reserved */
                .long    0                                  /*  15 Reserved */
                .long    0                                  /*  16 Reserved */
                .long    0                                  /*  17 Reserved */
                .long    0                                  /*  18 Reserved */
                .long    0                                  /*  19 Reserved */
                .long    0                                  /*  20 Reserved */
                .long    0                                  /*  21 Reserved */
                .long    0                                  /*  22 Reserved */
                .long    0                                  /*  23 Reserved */
                .long    0                                  /*  24 Reserved */
                .long    0                                  /*  25 Reserved */
                .long    0                                  /*  26 Reserved */
                .long    0                                  /*  27 Reserved */
                .long    SWI00_IRQHandler                   /*  28 SWI00 */
                .long    SWI01_IRQHandler                   /*  29 SWI01 */
                .long    SWI02_IRQHandler                   /*  30 SWI02 */
                .long    SWI03_IRQHandler                   /*  31 SWI03 */
                .long    0                                  /*  32 Reserved */
                .long    0                                  /*  33 Reserved */
                .long    0                                  /*  34 Reserved */
                .long    0                                  /*  35 Reserved */
                .long    0                                  /*  36 Reserved */
                .long    0                                  /*  37 Reserved */
                .long    0                                  /*  38 Reserved */
                .long    0                                  /*  39 Reserved */
                .long    0                                  /*  40 Reserved */
                .long    0                                  /*  41 Reserved */
                .long    0                                  /*  42 Reserved */
                .long    0                                  /*  43 Reserved */
                .long    0                                  /*  44 Reserved */
                .long    0                                  /*  45 Reserved */
                .long    0                                  /*  46 Reserved */
                .long    0                                  /*  47 Reserved */
                .long    0                                  /*  48 Reserved */
                .long    0                                  /*  49 Reserved */
                .long    0                                  /*  50 Reserved */
                .long    0                                  /*  51 Reserved */
                .long    0                                  /*  52 Reserved */
                .long    0                                  /*  53 Reserved */
                .long    0                                  /*  54 Reserved */
                .long    0                                  /*  55 Reserved */
                .long    0                                  /*  56 Reserved */
                .long    0                                  /*  57 Reserved */
                .long    0                                  /*  58 Reserved */
                .long    0                                  /*  59 Reserved */
                .long    0                                  /*  60 Reserved */
                .long    0                                  /*  61 Reserved */
                .long    0                                  /*  62 Reserved */
                .long    0                                  /*  63 Reserved */
                .long    SPU00_IRQHandler                   /*  64 SPU00 */
                .long    MPC00_IRQHandler                   /*  65 MPC00 */
                .long    0                                  /*  66 Reserved */
                .long    0                                  /*  67 Reserved */
                .long    0                                  /*  68 Reserved */
                .long    0                                  /*  69 Reserved */
                .long    AAR00_CCM00_IRQHandler             /*  70 AAR00_CCM00 */
                .long    ECB00_IRQHandler                   /*  71 ECB00 */
                .long    CRACEN_IRQHandler                  /*  72 CRACEN */
                .long    0                                  /*  73 Reserved */
                .long    SERIAL00_IRQHandler                /*  74 SERIAL00 */
                .long    RRAMC_IRQHandler                   /*  75 RRAMC */
                .long    VPR00_IRQHandler                   /*  76 VPR00 */
                .long    0                                  /*  77 Reserved */
                .long    0                                  /*  78 Reserved */
                .long    0                                  /*  79 Reserved */
                .long    0                                  /*  80 Reserved */
                .long    0                                  /*  81 Reserved */
                .long    CTRLAP_IRQHandler                  /*  82 CTRLAP */
                .long    0                                  /*  83 Reserved */
                .long    CM33SS_IRQHandler                  /*  84 CM33SS */
                .long    TIMER00_IRQHandler                 /*  85 TIMER00 */
                .long    0                                  /*  86 Reserved */
                .long    0                                  /*  87 Reserved */
                .long    0                                  /*  88 Reserved */
                .long    0                                  /*  89 Reserved */
                .long    0                                  /*  90 Reserved */
                .long    0                                  /*  91 Reserved */
                .long    0                                  /*  92 Reserved */
                .long    0                                  /*  93 Reserved */
                .long    0                                  /*  94 Reserved */
                .long    0                                  /*  95 Reserved */
                .long    0                                  /*  96 Reserved */
                .long    0                                  /*  97 Reserved */
                .long    0                                  /*  98 Reserved */
                .long    0                                  /*  99 Reserved */
                .long    0                                  /* 100 Reserved */
                .long    0                                  /* 101 Reserved */
                .long    0                                  /* 102 Reserved */
                .long    0                                  /* 103 Reserved */
                .long    0                                  /* 104 Reserved */
                .long    0                                  /* 105 Reserved */
                .long    0                                  /* 106 Reserved */
                .long    0                                  /* 107 Reserved */
                .long    0                                  /* 108 Reserved */
                .long    0                                  /* 109 Reserved */
                .long    0                                  /* 110 Reserved */
                .long    0                                  /* 111 Reserved */
                .long    0                                  /* 112 Reserved */
                .long    0                                  /* 113 Reserved */
                .long    0                                  /* 114 Reserved */
                .long    0                                  /* 115 Reserved */
                .long    0                                  /* 116 Reserved */
                .long    0                                  /* 117 Reserved */
                .long    0                                  /* 118 Reserved */
                .long    0                                  /* 119 Reserved */
                .long    0                                  /* 120 Reserved */
                .long    0                                  /* 121 Reserved */
                .long    0                                  /* 122 Reserved */
                .long    0                                  /* 123 Reserved */
                .long    0                                  /* 124 Reserved */
                .long    0                                  /* 125 Reserved */
                .long    0                                  /* 126 Reserved */
                .long    0                                  /* 127 Reserved */
                .long    SPU10_IRQHandler                   /* 128 SPU10 */
                .long    0                                  /* 129 Reserved */
                .long    0                                  /* 130 Reserved */
                .long    0                                  /* 131 Reserved */
                .long    0                                  /* 132 Reserved */
                .long    TIMER10_IRQHandler                 /* 133 TIMER10 */
                .long    0                                  /* 134 Reserved */
                .long    EGU10_IRQHandler                   /* 135 EGU10 */
                .long    0                                  /* 136 Reserved */
                .long    0                                  /* 137 Reserved */
                .long    RADIO_0_IRQHandler                 /* 138 RADIO_0 */
                .long    RADIO_1_IRQHandler                 /* 139 RADIO_1 */
                .long    0                                  /* 140 Reserved */
                .long    0                                  /* 141 Reserved */
                .long    0                                  /* 142 Reserved */
                .long    0                                  /* 143 Reserved */
                .long    0                                  /* 144 Reserved */
                .long    0                                  /* 145 Reserved */
                .long    0                                  /* 146 Reserved */
                .long    0                                  /* 147 Reserved */
                .long    0                                  /* 148 Reserved */
                .long    0                                  /* 149 Reserved */
                .long    0                                  /* 150 Reserved */
                .long    0                                  /* 151 Reserved */
                .long    0                                  /* 152 Reserved */
                .long    0                                  /* 153 Reserved */
                .long    0                                  /* 154 Reserved */
                .long    0                                  /* 155 Reserved */
                .long    0                                  /* 156 Reserved */
                .long    0                                  /* 157 Reserved */
                .long    0                                  /* 158 Reserved */
                .long    0                                  /* 159 Reserved */
                .long    0                                  /* 160 Reserved */
                .long    0                                  /* 161 Reserved */
                .long    0                                  /* 162 Reserved */
                .long    0                                  /* 163 Reserved */
                .long    0                                  /* 164 Reserved */
                .long    0                                  /* 165 Reserved */
                .long    0                                  /* 166 Reserved */
                .long    0                                  /* 167 Reserved */
                .long    0                                  /* 168 Reserved */
                .long    0                                  /* 169 Reserved */
                .long    0                                  /* 170 Reserved */
                .long    0                                  /* 171 Reserved */
                .long    0                                  /* 172 Reserved */
                .long    0                                  /* 173 Reserved */
                .long    0                                  /* 174 Reserved */
                .long    0                                  /* 175 Reserved */
                .long    0                                  /* 176 Reserved */
                .long    0                                  /* 177 Reserved */
                .long    0                                  /* 178 Reserved */
                .long    0                                  /* 179 Reserved */
                .long    0                                  /* 180 Reserved */
                .long    0                                  /* 181 Reserved */
                .long    0                                  /* 182 Reserved */
                .long    0                                  /* 183 Reserved */
                .long    0                                  /* 184 Reserved */
                .long    0                                  /* 185 Reserved */
                .long    0                                  /* 186 Reserved */
                .long    0                                  /* 187 Reserved */
                .long    0                                  /* 188 Reserved */
                .long    0                                  /* 189 Reserved */
                .long    0                                  /* 190 Reserved */
                .long    0                                  /* 191 Reserved */
                .long    SPU20_IRQHandler                   /* 192 SPU20 */
                .long    0                                  /* 193 Reserved */
                .long    0                                  /* 194 Reserved */
                .long    0                                  /* 195 Reserved */
                .long    0                                  /* 196 Reserved */
                .long    0                                  /* 197 Reserved */
                .long    SERIAL20_IRQHandler                /* 198 SERIAL20 */
                .long    SERIAL21_IRQHandler                /* 199 SERIAL21 */
                .long    SERIAL22_IRQHandler                /* 200 SERIAL22 */
                .long    EGU20_IRQHandler                   /* 201 EGU20 */
                .long    TIMER20_IRQHandler                 /* 202 TIMER20 */
                .long    TIMER21_IRQHandler                 /* 203 TIMER21 */
                .long    TIMER22_IRQHandler                 /* 204 TIMER22 */
                .long    TIMER23_IRQHandler                 /* 205 TIMER23 */
                .long    TIMER24_IRQHandler                 /* 206 TIMER24 */
                .long    0                                  /* 207 Reserved */
                .long    PDM20_IRQHandler                   /* 208 PDM20 */
                .long    PDM21_IRQHandler                   /* 209 PDM21 */
                .long    PWM20_IRQHandler                   /* 210 PWM20 */
                .long    PWM21_IRQHandler                   /* 211 PWM21 */
                .long    PWM22_IRQHandler                   /* 212 PWM22 */
                .long    SAADC_IRQHandler                   /* 213 SAADC */
                .long    NFCT_IRQHandler                    /* 214 NFCT */
                .long    TEMP_IRQHandler                    /* 215 TEMP */
                .long    0                                  /* 216 Reserved */
                .long    0                                  /* 217 Reserved */
                .long    GPIOTE20_0_IRQHandler              /* 218 GPIOTE20_0 */
                .long    GPIOTE20_1_IRQHandler              /* 219 GPIOTE20_1 */
                .long    TAMPC_IRQHandler                   /* 220 TAMPC */
                .long    I2S20_IRQHandler                   /* 221 I2S20 */
                .long    0                                  /* 222 Reserved */
                .long    0                                  /* 223 Reserved */
                .long    QDEC20_IRQHandler                  /* 224 QDEC20 */
                .long    QDEC21_IRQHandler                  /* 225 QDEC21 */
                .long    GRTC_0_IRQHandler                  /* 226 GRTC_0 */
                .long    GRTC_1_IRQHandler                  /* 227 GRTC_1 */
                .long    GRTC_2_IRQHandler                  /* 228 GRTC_2 */
                .long    GRTC_3_IRQHandler                  /* 229 GRTC_3 */
                .long    0                                  /* 230 Reserved */
                .long    0                                  /* 231 Reserved */
                .long    0                                  /* 232 Reserved */
                .long    0                                  /* 233 Reserved */
                .long    0                                  /* 234 Reserved */
                .long    0                                  /* 235 Reserved */
                .long    0                                  /* 236 Reserved */
                .long    0                                  /* 237 Reserved */
                .long    0                                  /* 238 Reserved */
                .long    0                                  /* 239 Reserved */
                .long    0                                  /* 240 Reserved */
                .long    0                                  /* 241 Reserved */
                .long    0                                  /* 242 Reserved */
                .long    0                                  /* 243 Reserved */
                .long    0                                  /* 244 Reserved */
                .long    0                                  /* 245 Reserved */
                .long    0                                  /* 246 Reserved */
                .long    0                                  /* 247 Reserved */
                .long    0                                  /* 248 Reserved */
                .long    0                                  /* 249 Reserved */
                .long    0                                  /* 250 Reserved */
                .long    0                                  /* 251 Reserved */
                .long    0                                  /* 252 Reserved */
                .long    0                                  /* 253 Reserved */
                .long    0                                  /* 254 Reserved */
                .long    0                                  /* 255 Reserved */
                .long    SPU30_IRQHandler                   /* 256 SPU30 */
                .long    0                                  /* 257 Reserved */
                .long    0                                  /* 258 Reserved */
                .long    0                                  /* 259 Reserved */
                .long    SERIAL30_IRQHandler                /* 260 SERIAL30 */
                .long    CLOCK_POWER_IRQHandler             /* 261 CLOCK_POWER */
                .long    COMP_LPCOMP_IRQHandler             /* 262 COMP_LPCOMP */
                .long    0                                  /* 263 Reserved */
                .long    WDT30_IRQHandler                   /* 264 WDT30 */
                .long    WDT31_IRQHandler                   /* 265 WDT31 */
                .long    0                                  /* 266 Reserved */
                .long    0                                  /* 267 Reserved */
                .long    GPIOTE30_0_IRQHandler              /* 268 GPIOTE30_0 */
                .long    GPIOTE30_1_IRQHandler              /* 269 GPIOTE30_1 */
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
                Set_Default_Handler  MemManage_Handler
                Set_Default_Handler  BusFault_Handler
                Set_Default_Handler  UsageFault_Handler
                Set_Default_Handler  SecureFault_Handler
                Set_Default_Handler  SVC_Handler
                Set_Default_Handler  DebugMon_Handler
                Set_Default_Handler  PendSV_Handler
                Set_Default_Handler  SysTick_Handler
                Set_Default_Handler  SWI00_IRQHandler
                Set_Default_Handler  SWI01_IRQHandler
                Set_Default_Handler  SWI02_IRQHandler
                Set_Default_Handler  SWI03_IRQHandler
                Set_Default_Handler  SPU00_IRQHandler
                Set_Default_Handler  MPC00_IRQHandler
                Set_Default_Handler  AAR00_CCM00_IRQHandler
                Set_Default_Handler  ECB00_IRQHandler
                Set_Default_Handler  CRACEN_IRQHandler
                Set_Default_Handler  SERIAL00_IRQHandler
                Set_Default_Handler  RRAMC_IRQHandler
                Set_Default_Handler  VPR00_IRQHandler
                Set_Default_Handler  CTRLAP_IRQHandler
                Set_Default_Handler  CM33SS_IRQHandler
                Set_Default_Handler  TIMER00_IRQHandler
                Set_Default_Handler  SPU10_IRQHandler
                Set_Default_Handler  TIMER10_IRQHandler
                Set_Default_Handler  EGU10_IRQHandler
                Set_Default_Handler  RADIO_0_IRQHandler
                Set_Default_Handler  RADIO_1_IRQHandler
                Set_Default_Handler  SPU20_IRQHandler
                Set_Default_Handler  SERIAL20_IRQHandler
                Set_Default_Handler  SERIAL21_IRQHandler
                Set_Default_Handler  SERIAL22_IRQHandler
                Set_Default_Handler  EGU20_IRQHandler
                Set_Default_Handler  TIMER20_IRQHandler
                Set_Default_Handler  TIMER21_IRQHandler
                Set_Default_Handler  TIMER22_IRQHandler
                Set_Default_Handler  TIMER23_IRQHandler
                Set_Default_Handler  TIMER24_IRQHandler
                Set_Default_Handler  PDM20_IRQHandler
                Set_Default_Handler  PDM21_IRQHandler
                Set_Default_Handler  PWM20_IRQHandler
                Set_Default_Handler  PWM21_IRQHandler
                Set_Default_Handler  PWM22_IRQHandler
                Set_Default_Handler  SAADC_IRQHandler
                Set_Default_Handler  NFCT_IRQHandler
                Set_Default_Handler  TEMP_IRQHandler
                Set_Default_Handler  GPIOTE20_0_IRQHandler
                Set_Default_Handler  GPIOTE20_1_IRQHandler
                Set_Default_Handler  TAMPC_IRQHandler
                Set_Default_Handler  I2S20_IRQHandler
                Set_Default_Handler  QDEC20_IRQHandler
                Set_Default_Handler  QDEC21_IRQHandler
                Set_Default_Handler  GRTC_0_IRQHandler
                Set_Default_Handler  GRTC_1_IRQHandler
                Set_Default_Handler  GRTC_2_IRQHandler
                Set_Default_Handler  GRTC_3_IRQHandler
                Set_Default_Handler  SPU30_IRQHandler
                Set_Default_Handler  SERIAL30_IRQHandler
                Set_Default_Handler  CLOCK_POWER_IRQHandler
                Set_Default_Handler  COMP_LPCOMP_IRQHandler
                Set_Default_Handler  WDT30_IRQHandler
                Set_Default_Handler  WDT31_IRQHandler
                Set_Default_Handler  GPIOTE30_0_IRQHandler
                Set_Default_Handler  GPIOTE30_1_IRQHandler


                .end
