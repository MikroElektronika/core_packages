/****************************************************************************//**
 * @file     startup_M2L31.S
 * @version  V1.00
 * @brief    CMSIS Cortex-M23 Core Device Startup File for M2L31
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

	.syntax	unified
	.arch	armv8-m.base

	.section .stack
	.align	3
#ifdef __STACK_SIZE
	.equ	Stack_Size, __STACK_SIZE
#else
	.equ	Stack_Size, 0x00000400
#endif
	.globl	__StackTop
	.globl	__StackLimit
__StackLimit:
	.space	Stack_Size
	.size	__StackLimit, . - __StackLimit
__StackTop:
	.size	__StackTop, . - __StackTop

	.section .heap
	.align	3
#ifdef __HEAP_SIZE
	.equ	Heap_Size, __HEAP_SIZE
#else
	.equ	Heap_Size, 0x00000100
#endif
	.globl	__HeapBase
	.globl	__HeapLimit
__HeapBase:
	.if	Heap_Size
	.space	Heap_Size
	.endif
	.size	__HeapBase, . - __HeapBase
__HeapLimit:
	.size	__HeapLimit, . - __HeapLimit

	.section .vectors
	.align	2
	.globl	__Vectors
__Vectors:
	.long	__StackTop            /* Top of Stack                  */
	.long	Reset_Handler         /* Reset Handler                 */
	.long	NMI_Handler           /* NMI Handler                   */
	.long	HardFault_Handler     /* Hard Fault Handler            */
	.long	MemManage_Handler     /* MPU Fault Handler             */
	.long	BusFault_Handler      /* Bus Fault Handler             */
	.long	UsageFault_Handler    /* Usage Fault Handler           */
	.long	0                     /* Reserved                      */
	.long	0                     /* Reserved                      */
	.long	0                     /* Reserved                      */
	.long	0                     /* Reserved                      */
	.long	SVC_Handler           /* SVCall Handler                */
	.long	0                     /* Reserved                      */
	.long	0                     /* Reserved                      */
	.long	PendSV_Handler        /* PendSV Handler                */
	.long	SysTick_Handler       /* SysTick Handler               */

	/* External interrupts */
    .long   BOD_IRQHandler          /* 0: Brown Out detection       */
    .long   IRC_IRQHandler          /* 1: Internal RC               */
    .long   PWRWU_IRQHandler        /* 2: Power down wake up        */
    .long   RAMPE_IRQHandler        /* 3: RAM parity error          */
    .long   CLKFAIL_IRQHandler      /* 4: Clock detection fail      */
    .long   RRMC_IRQHandler         /* 5: RRMC (ISP)                */
    .long   RTC_IRQHandler          /* 6: Real Time Clock           */
    .long   TAMPER_IRQHandler       /* 7: Tamper interrupt          */
    .long   WDT_IRQHandler          /* 8: Watchdog timer            */
    .long   WWDT_IRQHandler         /* 9: Window watchdog timer     */
    .long   EINT0_IRQHandler        /* 10: External Input 0         */
    .long   EINT1_IRQHandler        /* 11: External Input 1         */
    .long   EINT2_IRQHandler        /* 12: External Input 2         */
    .long   EINT3_IRQHandler        /* 13: External Input 3         */
    .long   EINT4_IRQHandler        /* 14: External Input 4         */
    .long   EINT5_IRQHandler        /* 15: External Input 5         */
    .long   GPA_IRQHandler          /* 16: GPIO Port A              */
    .long   GPB_IRQHandler          /* 17: GPIO Port B              */
    .long   GPC_IRQHandler          /* 18: GPIO Port C              */
    .long   GPD_IRQHandler          /* 19: GPIO Port D              */
    .long   GPE_IRQHandler          /* 20: GPIO Port E              */
    .long   GPF_IRQHandler          /* 21: GPIO Port F              */
    .long   QSPI0_IRQHandler        /* 22: QSPI0                    */
    .long   SPI0_IRQHandler         /* 23: SPI0                     */
    .long   EBRAKE0_IRQHandler      /* 24: EBRAKE0                  */
    .long   EPWM0P0_IRQHandler      /* 25: EPWM0P0                  */
    .long   EPWM0P1_IRQHandler      /* 26: EPWM0P1                  */
    .long   EPWM0P2_IRQHandler      /* 27: EPWM0P2                  */
    .long   EBRAKE1_IRQHandler      /* 28: EBRAKE1                  */
    .long   EPWM1P0_IRQHandler      /* 29: EPWM1P0                  */
    .long   EPWM1P1_IRQHandler      /* 30: EPWM1P1                  */
    .long   EPWM1P2_IRQHandler      /* 31: EPWM1P2                  */
    .long   TMR0_IRQHandler         /* 32: Timer 0                  */
    .long   TMR1_IRQHandler         /* 33: Timer 1                  */
    .long   TMR2_IRQHandler         /* 34: Timer 2                  */
    .long   TMR3_IRQHandler         /* 35: Timer 3                  */
    .long   UART0_IRQHandler        /* 36: UART0                    */
    .long   UART1_IRQHandler        /* 37: UART1                    */
    .long   I2C0_IRQHandler         /* 38: I2C0                     */
    .long   I2C1_IRQHandler         /* 39: I2C1                     */
    .long   PDMA0_IRQHandler        /* 40: Peripheral DMA 0         */
    .long   DAC_IRQHandler          /* 41: DAC                      */
    .long   EADC0_INT0_IRQHandler   /* 42: EADC0 interrupt source 0 */
    .long   EADC0_INT1_IRQHandler   /* 43: EADC0 interrupt source 1 */
    .long   ACMP01_IRQHandler       /* 44: ACMP0 and ACMP1          */
    .long   ACMP2_IRQHandler        /* 45: ACMP2                    */
    .long   EADC0_INT2_IRQHandler   /* 46: EADC0 interrupt source 2 */
    .long   EADC0_INT3_IRQHandler   /* 47: EADC0 interrupt source 3 */
    .long   UART2_IRQHandler        /* 48: UART2                    */
    .long   UART3_IRQHandler        /* 49: UART3                    */
    .long   Default_Handler         /* 50:                          */
    .long   SPI1_IRQHandler         /* 51: SPI1                     */
    .long   SPI2_IRQHandler         /* 52: SPI2                     */
    .long   USBD_IRQHandler         /* 53: USB device               */
    .long   USBH_IRQHandler         /* 54: USB host                 */
    .long   USBOTG_IRQHandler       /* 55: USB OTG                  */
    .long   ETI_IRQHandler          /* 56: ETI                      */
    .long   CRC0_IRQHandler         /* 57: CRC0                     */
    .long   Default_Handler         /* 58:                          */
    .long   Default_Handler         /* 59:                          */
    .long   Default_Handler         /* 60:                          */
    .long   Default_Handler         /* 61:                          */
    .long   SPI3_IRQHandler         /* 62: SPI3                     */
    .long   TK_IRQHandler           /* 63: Touch Key                */
    .long   Default_Handler         /* 64:                          */
    .long   Default_Handler         /* 65:                          */
    .long   Default_Handler         /* 66:                          */
    .long   Default_Handler         /* 67:                          */
    .long   Default_Handler         /* 68:                          */
    .long   Default_Handler         /* 69:                          */
    .long   OPA012_IRQHandler       /* 70: OPA012                   */
    .long   CRPT_IRQHandler         /* 71: CRPT                     */
    .long   GPG_IRQHandler          /* 72: GPIO Port G              */
    .long   EINT6_IRQHandler        /* 73: External Input 6         */
    .long   UART4_IRQHandler        /* 74: UART4                    */
    .long   UART5_IRQHandler        /* 75: UART5                    */
    .long   USCI0_IRQHandler        /* 76: USCI0                    */
    .long   USCI1_IRQHandler        /* 77: USCI1                    */
    .long   Default_Handler         /* 78:                          */
    .long   Default_Handler         /* 79:                          */
    .long   Default_Handler         /* 80:                          */
    .long   Default_Handler         /* 81:                          */
    .long   I2C2_IRQHandler         /* 82: I2C2                     */
    .long   I2C3_IRQHandler         /* 83: I2C3                     */
    .long   EQEI0_IRQHandler        /* 84: EQEI0                    */
    .long   EQEI1_IRQHandler        /* 85: EQEI1                    */
    .long   ECAP0_IRQHandler        /* 86: ECAP0                    */
    .long   ECAP1_IRQHandler        /* 87: ECAP1                    */
    .long   GPH_IRQHandler          /* 88: GPIO Port H              */
    .long   EINT7_IRQHandler        /* 89: External Input 7         */
    .long   Default_Handler         /* 90:                          */
    .long   Default_Handler         /* 91:                          */
    .long   Default_Handler         /* 92:                          */
    .long   Default_Handler         /* 93:                          */
    .long   Default_Handler         /* 94:                          */
    .long   Default_Handler         /* 95:                          */
    .long   Default_Handler         /* 96:                          */
    .long   Default_Handler         /* 97:                          */
    .long   LPPDMA0_IRQHandler      /* 98: LPPDMA0                  */
    .long   Default_Handler         /* 99:                          */
    .long   Default_Handler         /* 100:                         */
    .long   TRNG_IRQHandler         /* 101: TRNG                    */
    .long   UART6_IRQHandler        /* 102: UART6                   */
    .long   UART7_IRQHandler        /* 103: UART7                   */
    .long   Default_Handler         /* 104:                         */
    .long   Default_Handler         /* 105:                         */
    .long   Default_Handler         /* 106:                         */
    .long   Default_Handler         /* 107:                         */
    .long   UTCPD_IRQHandler        /* 108: UTCPD                   */
    .long   Default_Handler         /* 109:                         */
    .long   Default_Handler         /* 110:                         */
    .long   Default_Handler         /* 111:                         */
    .long   CANFD00_IRQHandler      /* 112: CAN FD 00               */
    .long   CANFD01_IRQHandler      /* 113: CAN FD 01               */
    .long   CANFD10_IRQHandler      /* 114: CAN FD 10               */
    .long   CANFD11_IRQHandler      /* 115: CAN FD 11               */
    .long   Default_Handler         /* 116:                         */
    .long   Default_Handler         /* 117:                         */
    .long   Default_Handler         /* 118:                         */
    .long   Default_Handler         /* 119:                         */
    .long   Default_Handler         /* 120:                         */
    .long   Default_Handler         /* 121:                         */
    .long   Default_Handler         /* 122:                         */
    .long   Default_Handler         /* 123:                         */
    .long   Default_Handler         /* 124:                         */
    .long   Default_Handler         /* 125:                         */
    .long   Default_Handler         /* 126:                         */
    .long   Default_Handler         /* 127:                         */
    .long   BRAKE0_IRQHandler       /* 128: BRAKE0                  */
    .long   PWM0P0_IRQHandler       /* 129: PWM0P0                  */
    .long   PWM0P1_IRQHandler       /* 130: PWM0P1                  */
    .long   PWM0P2_IRQHandler       /* 131: PWM0P2                  */
    .long   BRAKE1_IRQHandler       /* 132: BRAKE1                  */
    .long   PWM1P0_IRQHandler       /* 133: PWM1P0                  */
    .long   PWM1P1_IRQHandler       /* 134: PWM1P1                  */
    .long   PWM1P2_IRQHandler       /* 135: PWM1P2                  */
    .long   LPADC0_IRQHandler       /* 136: LPADC0                  */
    .long   LPUART0_IRQHandler      /* 137: LPUART0                 */
    .long   LPI2C0_IRQHandler       /* 138: LPI2C0                  */
    .long   LPSPI0_IRQHandler       /* 139: LPSPI0                  */
    .long   LPTMR0_IRQHandler       /* 140: LPTMR0                  */
    .long   LPTMR1_IRQHandler       /* 141: LPTMR1                  */
    .long   TTMR0_IRQHandler        /* 142: TTMR0                   */
    .long   TTMR1_IRQHandler        /* 143: TTMR1                   */

	.size	__Vectors, . - __Vectors

	.text
	.thumb
	.thumb_func
	.align	2
	.globl	Reset_Handler
	.type	Reset_Handler, %function
Reset_Handler:
/*  Firstly it copies data from read only memory to RAM. There are two schemes
 *  to copy. One can copy more than one sections. Another can only copy
 *  one section.  The former scheme needs more instructions and read-only
 *  data to implement than the latter.
 *  Macro __STARTUP_COPY_MULTIPLE is used to choose between two schemes.  */

#ifdef __STARTUP_COPY_MULTIPLE
/*  Multiple sections scheme.
 *
 *  Between symbol address __copy_table_start__ and __copy_table_end__,
 *  there are array of triplets, each of which specify:
 *    offset 0: LMA of start of a section to copy from
 *    offset 4: VMA of start of a section to copy to
 *    offset 8: size of the section to copy. Must be multiply of 4
 *
 *  All addresses must be aligned to 4 bytes boundary.
 */
	ldr	r4, =__copy_table_start__
	ldr	r5, =__copy_table_end__

.L_loop0:
	cmp	r4, r5
	bge	.L_loop0_done
	ldr	r1, [r4]
	ldr	r2, [r4, #4]
	ldr	r3, [r4, #8]

.L_loop0_0:
	subs	r3, #4
	blt	.L_loop0_0_done
	ldr	r0, [r1,r3]
	str	r0, [r2,r3]
	b	.L_loop0_0

.L_loop0_0_done:
	adds	r4, #12
	b	.L_loop0

.L_loop0_done:
#else
/*  Single section scheme.
 *
 *  The ranges of copy from/to are specified by following symbols
 *    __etext: LMA of start of the section to copy from. Usually end of text
 *    __data_start__: VMA of start of the section to copy to
 *    __data_end__: VMA of end of the section to copy to
 *
 *  All addresses must be aligned to 4 bytes boundary.
 */
	ldr	r1, =__etext
	ldr	r2, =__data_start__
	ldr	r3, =__data_end__

	subs	r3, r2
	ble	.L_loop1_done

.L_loop1:
	subs	r3, #4
	ldr	r0, [r1,r3]
	str	r0, [r2,r3]
	bgt	.L_loop1

.L_loop1_done:

#endif /*__STARTUP_COPY_MULTIPLE */

/*  This part of work usually is done in C library startup code. Otherwise,
 *  define this macro to enable it in this startup.
 *
 *  There are two schemes too. One can clear multiple BSS sections. Another
 *  can only clear one section. The former is more size expensive than the
 *  latter.
 *
 *  Define macro __STARTUP_CLEAR_BSS_MULTIPLE to choose the former.
 *  Otherwise define macro __STARTUP_CLEAR_BSS to choose the later.
 */
#ifdef __STARTUP_CLEAR_BSS_MULTIPLE
/*  Multiple sections scheme.
 *
 *  Between symbol address __copy_table_start__ and __copy_table_end__,
 *  there are array of tuples specifying:
 *    offset 0: Start of a BSS section
 *    offset 4: Size of this BSS section. Must be multiply of 4
 */
	ldr	r3, =__zero_table_start__
	ldr	r4, =__zero_table_end__

.L_loop2:
	cmp	r3, r4
	bge	.L_loop2_done
	ldr	r1, [r3]
	ldr	r2, [r3, #4]
	movs	r0, 0

.L_loop2_0:
	subs	r2, #4
	str 	r0, [r1, r2]
	bgt	.L_loop2_0

	adds	r3, #8
	b	.L_loop2
.L_loop2_done:

#elif defined (__STARTUP_CLEAR_BSS)
/*  Single BSS section scheme.
 *
 *  The BSS section is specified by following symbols
 *    __bss_start__: start of the BSS section.
 *    __bss_end__: end of the BSS section.
 *
 *  Both addresses must be aligned to 4 bytes boundary.
 */
	ldr	r1, =__bss_start__
	ldr	r2, =__bss_end__

    movs    r0, 0

    subs    r2, r1
    ble .L_loop3_done

.L_loop3:
    subs    r2, #4
    str r0, [r1, r2]
    bgt .L_loop3
.L_loop3_done:
#endif /* __STARTUP_CLEAR_BSS_MULTIPLE || __STARTUP_CLEAR_BSS */



#ifndef __NO_SYSTEM_INIT
	bl	SystemInit
#endif


#ifndef __START
#define __START _start
#endif
	bl	__START

	.pool
	.size	Reset_Handler, . - Reset_Handler

	.align	1
	.thumb_func
	.weak	Default_Handler
	.type	Default_Handler, %function
Default_Handler:
	b	.
	.size	Default_Handler, . - Default_Handler

/*    Macro to define default handlers. Default handler
 *    will be weak symbol and just dead loops. They can be
 *    overwritten by other handlers */
	.macro	def_irq_handler	handler_name
	.weak	\handler_name
	.set	\handler_name, Default_Handler
	.endm

	def_irq_handler	NMI_Handler
    def_irq_handler	HardFault_Handler
    def_irq_handler	MemManage_Handler
    def_irq_handler	BusFault_Handler
    def_irq_handler	UsageFault_Handler
    def_irq_handler	SVC_Handler
    def_irq_handler	PendSV_Handler
    def_irq_handler	SysTick_Handler

    def_irq_handler BOD_IRQHandler
    def_irq_handler IRC_IRQHandler
    def_irq_handler PWRWU_IRQHandler
    def_irq_handler RAMPE_IRQHandler
    def_irq_handler CLKFAIL_IRQHandler
    def_irq_handler RRMC_IRQHandler
    def_irq_handler RTC_IRQHandler
    def_irq_handler TAMPER_IRQHandler
    def_irq_handler WDT_IRQHandler
    def_irq_handler WWDT_IRQHandler
    def_irq_handler EINT0_IRQHandler
    def_irq_handler EINT1_IRQHandler
    def_irq_handler EINT2_IRQHandler
    def_irq_handler EINT3_IRQHandler
    def_irq_handler EINT4_IRQHandler
    def_irq_handler EINT5_IRQHandler
    def_irq_handler GPA_IRQHandler
    def_irq_handler GPB_IRQHandler
    def_irq_handler GPC_IRQHandler
    def_irq_handler GPD_IRQHandler
    def_irq_handler GPE_IRQHandler
    def_irq_handler GPF_IRQHandler
    def_irq_handler QSPI0_IRQHandler
    def_irq_handler SPI0_IRQHandler
    def_irq_handler EBRAKE0_IRQHandler
    def_irq_handler EPWM0P0_IRQHandler
    def_irq_handler EPWM0P1_IRQHandler
    def_irq_handler EPWM0P2_IRQHandler
    def_irq_handler EBRAKE1_IRQHandler
    def_irq_handler EPWM1P0_IRQHandler
    def_irq_handler EPWM1P1_IRQHandler
    def_irq_handler EPWM1P2_IRQHandler
    def_irq_handler TMR0_IRQHandler
    def_irq_handler TMR1_IRQHandler
    def_irq_handler TMR2_IRQHandler
    def_irq_handler TMR3_IRQHandler
    def_irq_handler UART0_IRQHandler
    def_irq_handler UART1_IRQHandler
    def_irq_handler I2C0_IRQHandler
    def_irq_handler I2C1_IRQHandler
    def_irq_handler PDMA0_IRQHandler
    def_irq_handler DAC_IRQHandler
    def_irq_handler EADC0_INT0_IRQHandler
    def_irq_handler EADC0_INT1_IRQHandler
    def_irq_handler ACMP01_IRQHandler
    def_irq_handler ACMP2_IRQHandler
    def_irq_handler EADC0_INT2_IRQHandler
    def_irq_handler EADC0_INT3_IRQHandler
    def_irq_handler UART2_IRQHandler
    def_irq_handler UART3_IRQHandler
    def_irq_handler SPI1_IRQHandler
    def_irq_handler SPI2_IRQHandler
    def_irq_handler USBD_IRQHandler
    def_irq_handler USBH_IRQHandler
    def_irq_handler USBOTG_IRQHandler
    def_irq_handler ETI_IRQHandler
    def_irq_handler CRC0_IRQHandler
    def_irq_handler SPI3_IRQHandler
    def_irq_handler TK_IRQHandler
    def_irq_handler OPA012_IRQHandler
    def_irq_handler CRPT_IRQHandler
    def_irq_handler GPG_IRQHandler
    def_irq_handler EINT6_IRQHandler
    def_irq_handler UART4_IRQHandler
    def_irq_handler UART5_IRQHandler
    def_irq_handler USCI0_IRQHandler
    def_irq_handler USCI1_IRQHandler
    def_irq_handler I2C2_IRQHandler
    def_irq_handler I2C3_IRQHandler
    def_irq_handler EQEI0_IRQHandler
    def_irq_handler EQEI1_IRQHandler
    def_irq_handler ECAP0_IRQHandler
    def_irq_handler ECAP1_IRQHandler
    def_irq_handler GPH_IRQHandler
    def_irq_handler EINT7_IRQHandler
    def_irq_handler LPPDMA0_IRQHandler
    def_irq_handler TRNG_IRQHandler
    def_irq_handler UART6_IRQHandler
    def_irq_handler UART7_IRQHandler
    def_irq_handler UTCPD_IRQHandler
    def_irq_handler CANFD00_IRQHandler
    def_irq_handler CANFD01_IRQHandler
    def_irq_handler CANFD10_IRQHandler
    def_irq_handler CANFD11_IRQHandler
    def_irq_handler BRAKE0_IRQHandler
    def_irq_handler PWM0P0_IRQHandler
    def_irq_handler PWM0P1_IRQHandler
    def_irq_handler PWM0P2_IRQHandler
    def_irq_handler BRAKE1_IRQHandler
    def_irq_handler PWM1P0_IRQHandler
    def_irq_handler PWM1P1_IRQHandler
    def_irq_handler PWM1P2_IRQHandler
    def_irq_handler LPADC0_IRQHandler
    def_irq_handler LPUART0_IRQHandler
    def_irq_handler LPI2C0_IRQHandler
    def_irq_handler LPSPI0_IRQHandler
    def_irq_handler LPTMR0_IRQHandler
    def_irq_handler LPTMR1_IRQHandler
    def_irq_handler TTMR0_IRQHandler
    def_irq_handler TTMR1_IRQHandler

    .end
