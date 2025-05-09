/* ------------------------------------------------------------------------- */
/*  @file:    startup_MK63F12.s                                              */
/*  @purpose: CMSIS Cortex-M4 Core Device Startup File                       */
/*            MK63F12                                                        */
/*  @version: 2.7                                                            */
/*  @date:    2015-2-19                                                      */
/*  @build:   b190918                                                        */
/* ------------------------------------------------------------------------- */
/*                                                                           */
/* Copyright 1997-2016 Freescale Semiconductor, Inc.                         */
/* Copyright 2016-2019 NXP                                                   */
/* All rights reserved.                                                      */
/*                                                                           */
/* SPDX-License-Identifier: BSD-3-Clause                                     */
/*****************************************************************************/
/* Version: GCC for ARM Embedded Processors                                  */
/*****************************************************************************/
    .syntax unified
    .arch armv7-m

    .section .isr_vector, "a"
    .align 2
    .globl __isr_vector
__isr_vector:
    .long   __StackTop                                      /* Top of Stack */
    .long   Reset_Handler                                   /* Reset Handler */
    .long   NMI_Handler                                     /* NMI Handler*/
    .long   HardFault_Handler                               /* Hard Fault Handler*/
    .long   MemManage_Handler                               /* MPU Fault Handler*/
    .long   BusFault_Handler                                /* Bus Fault Handler*/
    .long   UsageFault_Handler                              /* Usage Fault Handler*/
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   SVC_Handler                                     /* SVCall Handler*/
    .long   DebugMon_Handler                                /* Debug Monitor Handler*/
    .long   0                                               /* Reserved*/
    .long   PendSV_Handler                                  /* PendSV Handler*/
    .long   SysTick_Handler                                 /* SysTick Handler*/

                                                            /* External Interrupts*/
    .long   DMA0_IRQHandler                                 /* DMA Channel 0 Transfer Complete*/
    .long   DMA1_IRQHandler                                 /* DMA Channel 1 Transfer Complete*/
    .long   DMA2_IRQHandler                                 /* DMA Channel 2 Transfer Complete*/
    .long   DMA3_IRQHandler                                 /* DMA Channel 3 Transfer Complete*/
    .long   DMA4_IRQHandler                                 /* DMA Channel 4 Transfer Complete*/
    .long   DMA5_IRQHandler                                 /* DMA Channel 5 Transfer Complete*/
    .long   DMA6_IRQHandler                                 /* DMA Channel 6 Transfer Complete*/
    .long   DMA7_IRQHandler                                 /* DMA Channel 7 Transfer Complete*/
    .long   DMA8_IRQHandler                                 /* DMA Channel 8 Transfer Complete*/
    .long   DMA9_IRQHandler                                 /* DMA Channel 9 Transfer Complete*/
    .long   DMA10_IRQHandler                                /* DMA Channel 10 Transfer Complete*/
    .long   DMA11_IRQHandler                                /* DMA Channel 11 Transfer Complete*/
    .long   DMA12_IRQHandler                                /* DMA Channel 12 Transfer Complete*/
    .long   DMA13_IRQHandler                                /* DMA Channel 13 Transfer Complete*/
    .long   DMA14_IRQHandler                                /* DMA Channel 14 Transfer Complete*/
    .long   DMA15_IRQHandler                                /* DMA Channel 15 Transfer Complete*/
    .long   DMA_Error_IRQHandler                            /* DMA Error Interrupt*/
    .long   MCM_IRQHandler                                  /* Normal Interrupt*/
    .long   FTFE_IRQHandler                                 /* FTFE Command complete interrupt*/
    .long   Read_Collision_IRQHandler                       /* Read Collision Interrupt*/
    .long   LVD_LVW_IRQHandler                              /* Low Voltage Detect, Low Voltage Warning*/
    .long   LLWU_IRQHandler                                 /* Low Leakage Wakeup Unit*/
    .long   WDOG_EWM_IRQHandler                             /* WDOG Interrupt*/
    .long   RNG_IRQHandler                                  /* RNG Interrupt*/
    .long   I2C0_IRQHandler                                 /* I2C0 interrupt*/
    .long   I2C1_IRQHandler                                 /* I2C1 interrupt*/
    .long   SPI0_IRQHandler                                 /* SPI0 Interrupt*/
    .long   SPI1_IRQHandler                                 /* SPI1 Interrupt*/
    .long   I2S0_Tx_IRQHandler                              /* I2S0 transmit interrupt*/
    .long   I2S0_Rx_IRQHandler                              /* I2S0 receive interrupt*/
    .long   UART0_LON_IRQHandler                            /* UART0 LON interrupt*/
    .long   UART0_RX_TX_IRQHandler                          /* UART0 Receive/Transmit interrupt*/
    .long   UART0_ERR_IRQHandler                            /* UART0 Error interrupt*/
    .long   UART1_RX_TX_IRQHandler                          /* UART1 Receive/Transmit interrupt*/
    .long   UART1_ERR_IRQHandler                            /* UART1 Error interrupt*/
    .long   UART2_RX_TX_IRQHandler                          /* UART2 Receive/Transmit interrupt*/
    .long   UART2_ERR_IRQHandler                            /* UART2 Error interrupt*/
    .long   UART3_RX_TX_IRQHandler                          /* UART3 Receive/Transmit interrupt*/
    .long   UART3_ERR_IRQHandler                            /* UART3 Error interrupt*/
    .long   ADC0_IRQHandler                                 /* ADC0 interrupt*/
    .long   CMP0_IRQHandler                                 /* CMP0 interrupt*/
    .long   CMP1_IRQHandler                                 /* CMP1 interrupt*/
    .long   FTM0_IRQHandler                                 /* FTM0 fault, overflow and channels interrupt*/
    .long   FTM1_IRQHandler                                 /* FTM1 fault, overflow and channels interrupt*/
    .long   FTM2_IRQHandler                                 /* FTM2 fault, overflow and channels interrupt*/
    .long   CMT_IRQHandler                                  /* CMT interrupt*/
    .long   RTC_IRQHandler                                  /* RTC interrupt*/
    .long   RTC_Seconds_IRQHandler                          /* RTC seconds interrupt*/
    .long   PIT0_IRQHandler                                 /* PIT timer channel 0 interrupt*/
    .long   PIT1_IRQHandler                                 /* PIT timer channel 1 interrupt*/
    .long   PIT2_IRQHandler                                 /* PIT timer channel 2 interrupt*/
    .long   PIT3_IRQHandler                                 /* PIT timer channel 3 interrupt*/
    .long   PDB0_IRQHandler                                 /* PDB0 Interrupt*/
    .long   USB0_IRQHandler                                 /* USB0 interrupt*/
    .long   USBDCD_IRQHandler                               /* USBDCD Interrupt*/
    .long   Reserved71_IRQHandler                           /* Reserved interrupt 71*/
    .long   DAC0_IRQHandler                                 /* DAC0 interrupt*/
    .long   MCG_IRQHandler                                  /* MCG Interrupt*/
    .long   LPTMR0_IRQHandler                               /* LPTimer interrupt*/
    .long   PORTA_IRQHandler                                /* Port A interrupt*/
    .long   PORTB_IRQHandler                                /* Port B interrupt*/
    .long   PORTC_IRQHandler                                /* Port C interrupt*/
    .long   PORTD_IRQHandler                                /* Port D interrupt*/
    .long   PORTE_IRQHandler                                /* Port E interrupt*/
    .long   SWI_IRQHandler                                  /* Software interrupt*/
    .long   SPI2_IRQHandler                                 /* SPI2 Interrupt*/
    .long   UART4_RX_TX_IRQHandler                          /* UART4 Receive/Transmit interrupt*/
    .long   UART4_ERR_IRQHandler                            /* UART4 Error interrupt*/
    .long   UART5_RX_TX_IRQHandler                          /* UART5 Receive/Transmit interrupt*/
    .long   UART5_ERR_IRQHandler                            /* UART5 Error interrupt*/
    .long   CMP2_IRQHandler                                 /* CMP2 interrupt*/
    .long   FTM3_IRQHandler                                 /* FTM3 fault, overflow and channels interrupt*/
    .long   DAC1_IRQHandler                                 /* DAC1 interrupt*/
    .long   ADC1_IRQHandler                                 /* ADC1 interrupt*/
    .long   I2C2_IRQHandler                                 /* I2C2 interrupt*/
    .long   CAN0_ORed_Message_buffer_IRQHandler             /* CAN0 OR'd message buffers interrupt*/
    .long   CAN0_Bus_Off_IRQHandler                         /* CAN0 bus off interrupt*/
    .long   CAN0_Error_IRQHandler                           /* CAN0 error interrupt*/
    .long   CAN0_Tx_Warning_IRQHandler                      /* CAN0 Tx warning interrupt*/
    .long   CAN0_Rx_Warning_IRQHandler                      /* CAN0 Rx warning interrupt*/
    .long   CAN0_Wake_Up_IRQHandler                         /* CAN0 wake up interrupt*/
    .long   SDHC_IRQHandler                                 /* SDHC interrupt*/
    .long   ENET_1588_Timer_IRQHandler                      /* Ethernet MAC IEEE 1588 Timer Interrupt*/
    .long   ENET_Transmit_IRQHandler                        /* Ethernet MAC Transmit Interrupt*/
    .long   ENET_Receive_IRQHandler                         /* Ethernet MAC Receive Interrupt*/
    .long   ENET_Error_IRQHandler                           /* Ethernet MAC Error and miscelaneous Interrupt*/
    .long   DefaultISR                                      /* 102*/
    .long   DefaultISR                                      /* 103*/
    .long   DefaultISR                                      /* 104*/
    .long   DefaultISR                                      /* 105*/
    .long   DefaultISR                                      /* 106*/
    .long   DefaultISR                                      /* 107*/
    .long   DefaultISR                                      /* 108*/
    .long   DefaultISR                                      /* 109*/
    .long   DefaultISR                                      /* 110*/
    .long   DefaultISR                                      /* 111*/
    .long   DefaultISR                                      /* 112*/
    .long   DefaultISR                                      /* 113*/
    .long   DefaultISR                                      /* 114*/
    .long   DefaultISR                                      /* 115*/
    .long   DefaultISR                                      /* 116*/
    .long   DefaultISR                                      /* 117*/
    .long   DefaultISR                                      /* 118*/
    .long   DefaultISR                                      /* 119*/
    .long   DefaultISR                                      /* 120*/
    .long   DefaultISR                                      /* 121*/
    .long   DefaultISR                                      /* 122*/
    .long   DefaultISR                                      /* 123*/
    .long   DefaultISR                                      /* 124*/
    .long   DefaultISR                                      /* 125*/
    .long   DefaultISR                                      /* 126*/
    .long   DefaultISR                                      /* 127*/
    .long   DefaultISR                                      /* 128*/
    .long   DefaultISR                                      /* 129*/
    .long   DefaultISR                                      /* 130*/
    .long   DefaultISR                                      /* 131*/
    .long   DefaultISR                                      /* 132*/
    .long   DefaultISR                                      /* 133*/
    .long   DefaultISR                                      /* 134*/
    .long   DefaultISR                                      /* 135*/
    .long   DefaultISR                                      /* 136*/
    .long   DefaultISR                                      /* 137*/
    .long   DefaultISR                                      /* 138*/
    .long   DefaultISR                                      /* 139*/
    .long   DefaultISR                                      /* 140*/
    .long   DefaultISR                                      /* 141*/
    .long   DefaultISR                                      /* 142*/
    .long   DefaultISR                                      /* 143*/
    .long   DefaultISR                                      /* 144*/
    .long   DefaultISR                                      /* 145*/
    .long   DefaultISR                                      /* 146*/
    .long   DefaultISR                                      /* 147*/
    .long   DefaultISR                                      /* 148*/
    .long   DefaultISR                                      /* 149*/
    .long   DefaultISR                                      /* 150*/
    .long   DefaultISR                                      /* 151*/
    .long   DefaultISR                                      /* 152*/
    .long   DefaultISR                                      /* 153*/
    .long   DefaultISR                                      /* 154*/
    .long   DefaultISR                                      /* 155*/
    .long   DefaultISR                                      /* 156*/
    .long   DefaultISR                                      /* 157*/
    .long   DefaultISR                                      /* 158*/
    .long   DefaultISR                                      /* 159*/
    .long   DefaultISR                                      /* 160*/
    .long   DefaultISR                                      /* 161*/
    .long   DefaultISR                                      /* 162*/
    .long   DefaultISR                                      /* 163*/
    .long   DefaultISR                                      /* 164*/
    .long   DefaultISR                                      /* 165*/
    .long   DefaultISR                                      /* 166*/
    .long   DefaultISR                                      /* 167*/
    .long   DefaultISR                                      /* 168*/
    .long   DefaultISR                                      /* 169*/
    .long   DefaultISR                                      /* 170*/
    .long   DefaultISR                                      /* 171*/
    .long   DefaultISR                                      /* 172*/
    .long   DefaultISR                                      /* 173*/
    .long   DefaultISR                                      /* 174*/
    .long   DefaultISR                                      /* 175*/
    .long   DefaultISR                                      /* 176*/
    .long   DefaultISR                                      /* 177*/
    .long   DefaultISR                                      /* 178*/
    .long   DefaultISR                                      /* 179*/
    .long   DefaultISR                                      /* 180*/
    .long   DefaultISR                                      /* 181*/
    .long   DefaultISR                                      /* 182*/
    .long   DefaultISR                                      /* 183*/
    .long   DefaultISR                                      /* 184*/
    .long   DefaultISR                                      /* 185*/
    .long   DefaultISR                                      /* 186*/
    .long   DefaultISR                                      /* 187*/
    .long   DefaultISR                                      /* 188*/
    .long   DefaultISR                                      /* 189*/
    .long   DefaultISR                                      /* 190*/
    .long   DefaultISR                                      /* 191*/
    .long   DefaultISR                                      /* 192*/
    .long   DefaultISR                                      /* 193*/
    .long   DefaultISR                                      /* 194*/
    .long   DefaultISR                                      /* 195*/
    .long   DefaultISR                                      /* 196*/
    .long   DefaultISR                                      /* 197*/
    .long   DefaultISR                                      /* 198*/
    .long   DefaultISR                                      /* 199*/
    .long   DefaultISR                                      /* 200*/
    .long   DefaultISR                                      /* 201*/
    .long   DefaultISR                                      /* 202*/
    .long   DefaultISR                                      /* 203*/
    .long   DefaultISR                                      /* 204*/
    .long   DefaultISR                                      /* 205*/
    .long   DefaultISR                                      /* 206*/
    .long   DefaultISR                                      /* 207*/
    .long   DefaultISR                                      /* 208*/
    .long   DefaultISR                                      /* 209*/
    .long   DefaultISR                                      /* 210*/
    .long   DefaultISR                                      /* 211*/
    .long   DefaultISR                                      /* 212*/
    .long   DefaultISR                                      /* 213*/
    .long   DefaultISR                                      /* 214*/
    .long   DefaultISR                                      /* 215*/
    .long   DefaultISR                                      /* 216*/
    .long   DefaultISR                                      /* 217*/
    .long   DefaultISR                                      /* 218*/
    .long   DefaultISR                                      /* 219*/
    .long   DefaultISR                                      /* 220*/
    .long   DefaultISR                                      /* 221*/
    .long   DefaultISR                                      /* 222*/
    .long   DefaultISR                                      /* 223*/
    .long   DefaultISR                                      /* 224*/
    .long   DefaultISR                                      /* 225*/
    .long   DefaultISR                                      /* 226*/
    .long   DefaultISR                                      /* 227*/
    .long   DefaultISR                                      /* 228*/
    .long   DefaultISR                                      /* 229*/
    .long   DefaultISR                                      /* 230*/
    .long   DefaultISR                                      /* 231*/
    .long   DefaultISR                                      /* 232*/
    .long   DefaultISR                                      /* 233*/
    .long   DefaultISR                                      /* 234*/
    .long   DefaultISR                                      /* 235*/
    .long   DefaultISR                                      /* 236*/
    .long   DefaultISR                                      /* 237*/
    .long   DefaultISR                                      /* 238*/
    .long   DefaultISR                                      /* 239*/
    .long   DefaultISR                                      /* 240*/
    .long   DefaultISR                                      /* 241*/
    .long   DefaultISR                                      /* 242*/
    .long   DefaultISR                                      /* 243*/
    .long   DefaultISR                                      /* 244*/
    .long   DefaultISR                                      /* 245*/
    .long   DefaultISR                                      /* 246*/
    .long   DefaultISR                                      /* 247*/
    .long   DefaultISR                                      /* 248*/
    .long   DefaultISR                                      /* 249*/
    .long   DefaultISR                                      /* 250*/
    .long   DefaultISR                                      /* 251*/
    .long   DefaultISR                                      /* 252*/
    .long   DefaultISR                                      /* 253*/
    .long   DefaultISR                                      /* 254*/
    .long   0xFFFFFFFF                                      /*  Reserved for user TRIM value*/

    .size    __isr_vector, . - __isr_vector

/* Flash Configuration */
    .section .FlashConfig, "a"
    .long 0xFFFFFFFF
    .long 0xFFFFFFFF
    .long 0xFFFFFFFF
    .long 0xFFFFFFFE

    .text
    .thumb

/* Reset Handler */

    .thumb_func
    .align 2
    .globl   Reset_Handler
    .weak    Reset_Handler
    .type    Reset_Handler, %function
Reset_Handler:
    cpsid   i               /* Mask interrupts */
    .equ    VTOR, 0xE000ED08
    ldr     r0, =VTOR
    ldr     r1, =__isr_vector
    str     r1, [r0]
    ldr     r2, [r1]
    msr     msp, r2
#ifndef __NO_SYSTEM_INIT
    ldr   r0,=SystemInit
    blx   r0
#endif
/*     Loop to copy data from read only memory to RAM. The ranges
 *      of copy from/to are specified by following symbols evaluated in
 *      linker script.
 *      __etext: End of code section, i.e., begin of data sections to copy from.
 *      __data_start__/__data_end__: RAM address range that data should be
 *      copied to. Both must be aligned to 4 bytes boundary.  */

    ldr    r1, =__etext
    ldr    r2, =__data_start__
    ldr    r3, =__data_end__

.LC0:
    cmp     r2, r3
    ittt    lt
    ldrlt   r0, [r1], #4
    strlt   r0, [r2], #4
    blt    .LC0

#ifdef __STARTUP_CLEAR_BSS
/*     This part of work usually is done in C library startup code. Otherwise,
 *     define this macro to enable it in this startup.
 *
 *     Loop to zero out BSS section, which uses following symbols
 *     in linker script:
 *      __bss_start__: start of BSS section. Must align to 4
 *      __bss_end__: end of BSS section. Must align to 4
 */
    ldr r1, =__bss_start__
    ldr r2, =__bss_end__

    movs    r0, 0
.LC2:
    cmp     r1, r2
    itt    lt
    strlt   r0, [r1], #4
    blt    .LC2
#endif /* __STARTUP_CLEAR_BSS */

    cpsie   i               /* Unmask interrupts */
#ifndef __START
#define __START _start
#endif
#ifndef __ATOLLIC__
    ldr   r0,=__START
    blx   r0
#else
    ldr   r0,=__libc_init_array
    blx   r0
    ldr   r0,=main
    bx    r0
#endif
    .pool
    .size Reset_Handler, . - Reset_Handler

    .align  1
    .thumb_func
    .weak DefaultISR
    .type DefaultISR, %function
DefaultISR:
    b DefaultISR
    .size DefaultISR, . - DefaultISR

    .align 1
    .thumb_func
    .weak NMI_Handler
    .type NMI_Handler, %function
NMI_Handler:
    ldr   r0,=NMI_Handler
    bx    r0
    .size NMI_Handler, . - NMI_Handler

    .align 1
    .thumb_func
    .weak HardFault_Handler
    .type HardFault_Handler, %function
HardFault_Handler:
    ldr   r0,=HardFault_Handler
    bx    r0
    .size HardFault_Handler, . - HardFault_Handler

    .align 1
    .thumb_func
    .weak SVC_Handler
    .type SVC_Handler, %function
SVC_Handler:
    ldr   r0,=SVC_Handler
    bx    r0
    .size SVC_Handler, . - SVC_Handler

    .align 1
    .thumb_func
    .weak PendSV_Handler
    .type PendSV_Handler, %function
PendSV_Handler:
    ldr   r0,=PendSV_Handler
    bx    r0
    .size PendSV_Handler, . - PendSV_Handler

    .align 1
    .thumb_func
    .weak SysTick_Handler
    .type SysTick_Handler, %function
SysTick_Handler:
    ldr   r0,=SysTick_Handler
    bx    r0
    .size SysTick_Handler, . - SysTick_Handler

    .align 1
    .thumb_func
    .weak DMA0_IRQHandler
    .type DMA0_IRQHandler, %function
DMA0_IRQHandler:
    ldr   r0,=DMA0_DriverIRQHandler
    bx    r0
    .size DMA0_IRQHandler, . - DMA0_IRQHandler

    .align 1
    .thumb_func
    .weak DMA1_IRQHandler
    .type DMA1_IRQHandler, %function
DMA1_IRQHandler:
    ldr   r0,=DMA1_DriverIRQHandler
    bx    r0
    .size DMA1_IRQHandler, . - DMA1_IRQHandler

    .align 1
    .thumb_func
    .weak DMA2_IRQHandler
    .type DMA2_IRQHandler, %function
DMA2_IRQHandler:
    ldr   r0,=DMA2_DriverIRQHandler
    bx    r0
    .size DMA2_IRQHandler, . - DMA2_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_IRQHandler
    .type DMA3_IRQHandler, %function
DMA3_IRQHandler:
    ldr   r0,=DMA3_DriverIRQHandler
    bx    r0
    .size DMA3_IRQHandler, . - DMA3_IRQHandler

    .align 1
    .thumb_func
    .weak DMA4_IRQHandler
    .type DMA4_IRQHandler, %function
DMA4_IRQHandler:
    ldr   r0,=DMA4_DriverIRQHandler
    bx    r0
    .size DMA4_IRQHandler, . - DMA4_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_IRQHandler
    .type DMA5_IRQHandler, %function
DMA5_IRQHandler:
    ldr   r0,=DMA5_DriverIRQHandler
    bx    r0
    .size DMA5_IRQHandler, . - DMA5_IRQHandler

    .align 1
    .thumb_func
    .weak DMA6_IRQHandler
    .type DMA6_IRQHandler, %function
DMA6_IRQHandler:
    ldr   r0,=DMA6_DriverIRQHandler
    bx    r0
    .size DMA6_IRQHandler, . - DMA6_IRQHandler

    .align 1
    .thumb_func
    .weak DMA7_IRQHandler
    .type DMA7_IRQHandler, %function
DMA7_IRQHandler:
    ldr   r0,=DMA7_DriverIRQHandler
    bx    r0
    .size DMA7_IRQHandler, . - DMA7_IRQHandler

    .align 1
    .thumb_func
    .weak DMA8_IRQHandler
    .type DMA8_IRQHandler, %function
DMA8_IRQHandler:
    ldr   r0,=DMA8_DriverIRQHandler
    bx    r0
    .size DMA8_IRQHandler, . - DMA8_IRQHandler

    .align 1
    .thumb_func
    .weak DMA9_IRQHandler
    .type DMA9_IRQHandler, %function
DMA9_IRQHandler:
    ldr   r0,=DMA9_DriverIRQHandler
    bx    r0
    .size DMA9_IRQHandler, . - DMA9_IRQHandler

    .align 1
    .thumb_func
    .weak DMA10_IRQHandler
    .type DMA10_IRQHandler, %function
DMA10_IRQHandler:
    ldr   r0,=DMA10_DriverIRQHandler
    bx    r0
    .size DMA10_IRQHandler, . - DMA10_IRQHandler

    .align 1
    .thumb_func
    .weak DMA11_IRQHandler
    .type DMA11_IRQHandler, %function
DMA11_IRQHandler:
    ldr   r0,=DMA11_DriverIRQHandler
    bx    r0
    .size DMA11_IRQHandler, . - DMA11_IRQHandler

    .align 1
    .thumb_func
    .weak DMA12_IRQHandler
    .type DMA12_IRQHandler, %function
DMA12_IRQHandler:
    ldr   r0,=DMA12_DriverIRQHandler
    bx    r0
    .size DMA12_IRQHandler, . - DMA12_IRQHandler

    .align 1
    .thumb_func
    .weak DMA13_IRQHandler
    .type DMA13_IRQHandler, %function
DMA13_IRQHandler:
    ldr   r0,=DMA13_DriverIRQHandler
    bx    r0
    .size DMA13_IRQHandler, . - DMA13_IRQHandler

    .align 1
    .thumb_func
    .weak DMA14_IRQHandler
    .type DMA14_IRQHandler, %function
DMA14_IRQHandler:
    ldr   r0,=DMA14_DriverIRQHandler
    bx    r0
    .size DMA14_IRQHandler, . - DMA14_IRQHandler

    .align 1
    .thumb_func
    .weak DMA15_IRQHandler
    .type DMA15_IRQHandler, %function
DMA15_IRQHandler:
    ldr   r0,=DMA15_DriverIRQHandler
    bx    r0
    .size DMA15_IRQHandler, . - DMA15_IRQHandler

    .align 1
    .thumb_func
    .weak DMA_Error_IRQHandler
    .type DMA_Error_IRQHandler, %function
DMA_Error_IRQHandler:
    ldr   r0,=DMA_Error_DriverIRQHandler
    bx    r0
    .size DMA_Error_IRQHandler, . - DMA_Error_IRQHandler

    .align 1
    .thumb_func
    .weak I2C0_IRQHandler
    .type I2C0_IRQHandler, %function
I2C0_IRQHandler:
    ldr   r0,=I2C0_DriverIRQHandler
    bx    r0
    .size I2C0_IRQHandler, . - I2C0_IRQHandler

    .align 1
    .thumb_func
    .weak I2C1_IRQHandler
    .type I2C1_IRQHandler, %function
I2C1_IRQHandler:
    ldr   r0,=I2C1_DriverIRQHandler
    bx    r0
    .size I2C1_IRQHandler, . - I2C1_IRQHandler

    .align 1
    .thumb_func
    .weak SPI0_IRQHandler
    .type SPI0_IRQHandler, %function
SPI0_IRQHandler:
    ldr   r0,=SPI0_DriverIRQHandler
    bx    r0
    .size SPI0_IRQHandler, . - SPI0_IRQHandler

    .align 1
    .thumb_func
    .weak SPI1_IRQHandler
    .type SPI1_IRQHandler, %function
SPI1_IRQHandler:
    ldr   r0,=SPI1_DriverIRQHandler
    bx    r0
    .size SPI1_IRQHandler, . - SPI1_IRQHandler

    .align 1
    .thumb_func
    .weak I2S0_Tx_IRQHandler
    .type I2S0_Tx_IRQHandler, %function
I2S0_Tx_IRQHandler:
    ldr   r0,=I2S0_Tx_DriverIRQHandler
    bx    r0
    .size I2S0_Tx_IRQHandler, . - I2S0_Tx_IRQHandler

    .align 1
    .thumb_func
    .weak I2S0_Rx_IRQHandler
    .type I2S0_Rx_IRQHandler, %function
I2S0_Rx_IRQHandler:
    ldr   r0,=I2S0_Rx_DriverIRQHandler
    bx    r0
    .size I2S0_Rx_IRQHandler, . - I2S0_Rx_IRQHandler

    .align 1
    .thumb_func
    .weak UART0_LON_IRQHandler
    .type UART0_LON_IRQHandler, %function
UART0_LON_IRQHandler:
    ldr   r0,=UART0_LON_DriverIRQHandler
    bx    r0
    .size UART0_LON_IRQHandler, . - UART0_LON_IRQHandler

    .align 1
    .thumb_func
    .weak UART0_RX_TX_IRQHandler
    .type UART0_RX_TX_IRQHandler, %function
UART0_RX_TX_IRQHandler:
    ldr   r0,=UART0_RX_TX_DriverIRQHandler
    bx    r0
    .size UART0_RX_TX_IRQHandler, . - UART0_RX_TX_IRQHandler

    .align 1
    .thumb_func
    .weak UART0_ERR_IRQHandler
    .type UART0_ERR_IRQHandler, %function
UART0_ERR_IRQHandler:
    ldr   r0,=UART0_ERR_DriverIRQHandler
    bx    r0
    .size UART0_ERR_IRQHandler, . - UART0_ERR_IRQHandler

    .align 1
    .thumb_func
    .weak UART1_RX_TX_IRQHandler
    .type UART1_RX_TX_IRQHandler, %function
UART1_RX_TX_IRQHandler:
    ldr   r0,=UART1_RX_TX_DriverIRQHandler
    bx    r0
    .size UART1_RX_TX_IRQHandler, . - UART1_RX_TX_IRQHandler

    .align 1
    .thumb_func
    .weak UART1_ERR_IRQHandler
    .type UART1_ERR_IRQHandler, %function
UART1_ERR_IRQHandler:
    ldr   r0,=UART1_ERR_DriverIRQHandler
    bx    r0
    .size UART1_ERR_IRQHandler, . - UART1_ERR_IRQHandler

    .align 1
    .thumb_func
    .weak UART2_RX_TX_IRQHandler
    .type UART2_RX_TX_IRQHandler, %function
UART2_RX_TX_IRQHandler:
    ldr   r0,=UART2_RX_TX_DriverIRQHandler
    bx    r0
    .size UART2_RX_TX_IRQHandler, . - UART2_RX_TX_IRQHandler

    .align 1
    .thumb_func
    .weak UART2_ERR_IRQHandler
    .type UART2_ERR_IRQHandler, %function
UART2_ERR_IRQHandler:
    ldr   r0,=UART2_ERR_DriverIRQHandler
    bx    r0
    .size UART2_ERR_IRQHandler, . - UART2_ERR_IRQHandler

    .align 1
    .thumb_func
    .weak UART3_RX_TX_IRQHandler
    .type UART3_RX_TX_IRQHandler, %function
UART3_RX_TX_IRQHandler:
    ldr   r0,=UART3_RX_TX_DriverIRQHandler
    bx    r0
    .size UART3_RX_TX_IRQHandler, . - UART3_RX_TX_IRQHandler

    .align 1
    .thumb_func
    .weak UART3_ERR_IRQHandler
    .type UART3_ERR_IRQHandler, %function
UART3_ERR_IRQHandler:
    ldr   r0,=UART3_ERR_DriverIRQHandler
    bx    r0
    .size UART3_ERR_IRQHandler, . - UART3_ERR_IRQHandler

    .align 1
    .thumb_func
    .weak SPI2_IRQHandler
    .type SPI2_IRQHandler, %function
SPI2_IRQHandler:
    ldr   r0,=SPI2_DriverIRQHandler
    bx    r0
    .size SPI2_IRQHandler, . - SPI2_IRQHandler

    .align 1
    .thumb_func
    .weak UART4_RX_TX_IRQHandler
    .type UART4_RX_TX_IRQHandler, %function
UART4_RX_TX_IRQHandler:
    ldr   r0,=UART4_RX_TX_DriverIRQHandler
    bx    r0
    .size UART4_RX_TX_IRQHandler, . - UART4_RX_TX_IRQHandler

    .align 1
    .thumb_func
    .weak UART4_ERR_IRQHandler
    .type UART4_ERR_IRQHandler, %function
UART4_ERR_IRQHandler:
    ldr   r0,=UART4_ERR_DriverIRQHandler
    bx    r0
    .size UART4_ERR_IRQHandler, . - UART4_ERR_IRQHandler

    .align 1
    .thumb_func
    .weak UART5_RX_TX_IRQHandler
    .type UART5_RX_TX_IRQHandler, %function
UART5_RX_TX_IRQHandler:
    ldr   r0,=UART5_RX_TX_DriverIRQHandler
    bx    r0
    .size UART5_RX_TX_IRQHandler, . - UART5_RX_TX_IRQHandler

    .align 1
    .thumb_func
    .weak UART5_ERR_IRQHandler
    .type UART5_ERR_IRQHandler, %function
UART5_ERR_IRQHandler:
    ldr   r0,=UART5_ERR_DriverIRQHandler
    bx    r0
    .size UART5_ERR_IRQHandler, . - UART5_ERR_IRQHandler

    .align 1
    .thumb_func
    .weak I2C2_IRQHandler
    .type I2C2_IRQHandler, %function
I2C2_IRQHandler:
    ldr   r0,=I2C2_DriverIRQHandler
    bx    r0
    .size I2C2_IRQHandler, . - I2C2_IRQHandler

    .align 1
    .thumb_func
    .weak CAN0_ORed_Message_buffer_IRQHandler
    .type CAN0_ORed_Message_buffer_IRQHandler, %function
CAN0_ORed_Message_buffer_IRQHandler:
    ldr   r0,=CAN0_DriverIRQHandler
    bx    r0
    .size CAN0_ORed_Message_buffer_IRQHandler, . - CAN0_ORed_Message_buffer_IRQHandler

    .align 1
    .thumb_func
    .weak CAN0_Bus_Off_IRQHandler
    .type CAN0_Bus_Off_IRQHandler, %function
CAN0_Bus_Off_IRQHandler:
    ldr   r0,=CAN0_DriverIRQHandler
    bx    r0
    .size CAN0_Bus_Off_IRQHandler, . - CAN0_Bus_Off_IRQHandler

    .align 1
    .thumb_func
    .weak CAN0_Error_IRQHandler
    .type CAN0_Error_IRQHandler, %function
CAN0_Error_IRQHandler:
    ldr   r0,=CAN0_DriverIRQHandler
    bx    r0
    .size CAN0_Error_IRQHandler, . - CAN0_Error_IRQHandler

    .align 1
    .thumb_func
    .weak CAN0_Tx_Warning_IRQHandler
    .type CAN0_Tx_Warning_IRQHandler, %function
CAN0_Tx_Warning_IRQHandler:
    ldr   r0,=CAN0_DriverIRQHandler
    bx    r0
    .size CAN0_Tx_Warning_IRQHandler, . - CAN0_Tx_Warning_IRQHandler

    .align 1
    .thumb_func
    .weak CAN0_Rx_Warning_IRQHandler
    .type CAN0_Rx_Warning_IRQHandler, %function
CAN0_Rx_Warning_IRQHandler:
    ldr   r0,=CAN0_DriverIRQHandler
    bx    r0
    .size CAN0_Rx_Warning_IRQHandler, . - CAN0_Rx_Warning_IRQHandler

    .align 1
    .thumb_func
    .weak CAN0_Wake_Up_IRQHandler
    .type CAN0_Wake_Up_IRQHandler, %function
CAN0_Wake_Up_IRQHandler:
    ldr   r0,=CAN0_DriverIRQHandler
    bx    r0
    .size CAN0_Wake_Up_IRQHandler, . - CAN0_Wake_Up_IRQHandler

    .align 1
    .thumb_func
    .weak SDHC_IRQHandler
    .type SDHC_IRQHandler, %function
SDHC_IRQHandler:
    ldr   r0,=SDHC_DriverIRQHandler
    bx    r0
    .size SDHC_IRQHandler, . - SDHC_IRQHandler

    .align 1
    .thumb_func
    .weak ENET_1588_Timer_IRQHandler
    .type ENET_1588_Timer_IRQHandler, %function
ENET_1588_Timer_IRQHandler:
    ldr   r0,=ENET_1588_Timer_DriverIRQHandler
    bx    r0
    .size ENET_1588_Timer_IRQHandler, . - ENET_1588_Timer_IRQHandler

    .align 1
    .thumb_func
    .weak ENET_Transmit_IRQHandler
    .type ENET_Transmit_IRQHandler, %function
ENET_Transmit_IRQHandler:
    ldr   r0,=ENET_Transmit_DriverIRQHandler
    bx    r0
    .size ENET_Transmit_IRQHandler, . - ENET_Transmit_IRQHandler

    .align 1
    .thumb_func
    .weak ENET_Receive_IRQHandler
    .type ENET_Receive_IRQHandler, %function
ENET_Receive_IRQHandler:
    ldr   r0,=ENET_Receive_DriverIRQHandler
    bx    r0
    .size ENET_Receive_IRQHandler, . - ENET_Receive_IRQHandler

    .align 1
    .thumb_func
    .weak ENET_Error_IRQHandler
    .type ENET_Error_IRQHandler, %function
ENET_Error_IRQHandler:
    ldr   r0,=ENET_Error_DriverIRQHandler
    bx    r0
    .size ENET_Error_IRQHandler, . - ENET_Error_IRQHandler


/*    Macro to define default handlers. Default handler
 *    will be weak symbol and just dead loops. They can be
 *    overwritten by other handlers */
    .macro def_irq_handler  handler_name
    .weak \handler_name
    .set  \handler_name, DefaultISR
    .endm

/* Exception Handlers */
    def_irq_handler    MemManage_Handler
    def_irq_handler    BusFault_Handler
    def_irq_handler    UsageFault_Handler
    def_irq_handler    DebugMon_Handler
    def_irq_handler    DMA0_DriverIRQHandler
    def_irq_handler    DMA1_DriverIRQHandler
    def_irq_handler    DMA2_DriverIRQHandler
    def_irq_handler    DMA3_DriverIRQHandler
    def_irq_handler    DMA4_DriverIRQHandler
    def_irq_handler    DMA5_DriverIRQHandler
    def_irq_handler    DMA6_DriverIRQHandler
    def_irq_handler    DMA7_DriverIRQHandler
    def_irq_handler    DMA8_DriverIRQHandler
    def_irq_handler    DMA9_DriverIRQHandler
    def_irq_handler    DMA10_DriverIRQHandler
    def_irq_handler    DMA11_DriverIRQHandler
    def_irq_handler    DMA12_DriverIRQHandler
    def_irq_handler    DMA13_DriverIRQHandler
    def_irq_handler    DMA14_DriverIRQHandler
    def_irq_handler    DMA15_DriverIRQHandler
    def_irq_handler    DMA_Error_DriverIRQHandler
    def_irq_handler    MCM_IRQHandler
    def_irq_handler    FTFE_IRQHandler
    def_irq_handler    Read_Collision_IRQHandler
    def_irq_handler    LVD_LVW_IRQHandler
    def_irq_handler    LLWU_IRQHandler
    def_irq_handler    WDOG_EWM_IRQHandler
    def_irq_handler    RNG_IRQHandler
    def_irq_handler    I2C0_DriverIRQHandler
    def_irq_handler    I2C1_DriverIRQHandler
    def_irq_handler    SPI0_DriverIRQHandler
    def_irq_handler    SPI1_DriverIRQHandler
    def_irq_handler    I2S0_Tx_DriverIRQHandler
    def_irq_handler    I2S0_Rx_DriverIRQHandler
    def_irq_handler    UART0_LON_DriverIRQHandler
    def_irq_handler    UART0_RX_TX_DriverIRQHandler
    def_irq_handler    UART0_ERR_DriverIRQHandler
    def_irq_handler    UART1_RX_TX_DriverIRQHandler
    def_irq_handler    UART1_ERR_DriverIRQHandler
    def_irq_handler    UART2_RX_TX_DriverIRQHandler
    def_irq_handler    UART2_ERR_DriverIRQHandler
    def_irq_handler    UART3_RX_TX_DriverIRQHandler
    def_irq_handler    UART3_ERR_DriverIRQHandler
    def_irq_handler    ADC0_IRQHandler
    def_irq_handler    CMP0_IRQHandler
    def_irq_handler    CMP1_IRQHandler
    def_irq_handler    FTM0_IRQHandler
    def_irq_handler    FTM1_IRQHandler
    def_irq_handler    FTM2_IRQHandler
    def_irq_handler    CMT_IRQHandler
    def_irq_handler    RTC_IRQHandler
    def_irq_handler    RTC_Seconds_IRQHandler
    def_irq_handler    PIT0_IRQHandler
    def_irq_handler    PIT1_IRQHandler
    def_irq_handler    PIT2_IRQHandler
    def_irq_handler    PIT3_IRQHandler
    def_irq_handler    PDB0_IRQHandler
    def_irq_handler    USB0_IRQHandler
    def_irq_handler    USBDCD_IRQHandler
    def_irq_handler    Reserved71_IRQHandler
    def_irq_handler    DAC0_IRQHandler
    def_irq_handler    MCG_IRQHandler
    def_irq_handler    LPTMR0_IRQHandler
    def_irq_handler    PORTA_IRQHandler
    def_irq_handler    PORTB_IRQHandler
    def_irq_handler    PORTC_IRQHandler
    def_irq_handler    PORTD_IRQHandler
    def_irq_handler    PORTE_IRQHandler
    def_irq_handler    SWI_IRQHandler
    def_irq_handler    SPI2_DriverIRQHandler
    def_irq_handler    UART4_RX_TX_DriverIRQHandler
    def_irq_handler    UART4_ERR_DriverIRQHandler
    def_irq_handler    UART5_RX_TX_DriverIRQHandler
    def_irq_handler    UART5_ERR_DriverIRQHandler
    def_irq_handler    CMP2_IRQHandler
    def_irq_handler    FTM3_IRQHandler
    def_irq_handler    DAC1_IRQHandler
    def_irq_handler    ADC1_IRQHandler
    def_irq_handler    I2C2_DriverIRQHandler
    def_irq_handler    CAN0_DriverIRQHandler
    def_irq_handler    SDHC_DriverIRQHandler
    def_irq_handler    ENET_1588_Timer_DriverIRQHandler
    def_irq_handler    ENET_Transmit_DriverIRQHandler
    def_irq_handler    ENET_Receive_DriverIRQHandler
    def_irq_handler    ENET_Error_DriverIRQHandler

    .end
