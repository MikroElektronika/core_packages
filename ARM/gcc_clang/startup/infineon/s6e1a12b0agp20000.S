/*******************************************************************************
* Copyright 2016, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
* CYPRESS PROVIDES THIS SOFTWARE "AS IS" AND MAKES NO WARRANTY
* OF ANY KIND, EXPRESS OR IMPLIED, WITH REGARD TO THIS SOFTWARE,
* INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
* MERCHANTABILITY, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR
* PURPOSE.
*******************************************************************************/

/*
// <h> Stack Configuration
//   <o> Stack Size (in Bytes) <0x0-0xFFFFFFFF:8>
// </h>
*/

	.equ    Stack_Size, 0x00000300
    .section ".stack", "w"
    .align  3
    .globl  __FM_stack_mem
    .globl  __FM_stack_size
__FM_stack_mem:
    .if     Stack_Size
    .space  Stack_Size
    .endif
    .size   __FM_stack_mem,  . - __FM_stack_mem
    .set    __FM_stack_size, . - __FM_stack_mem


/*
// <h> Heap Configuration
//   <o>  Heap Size (in Bytes) <0x0-0xFFFFFFFF:8>
// </h>
*/

    .equ    Heap_Size,  0x00000600
    
    .section ".heap", "w"
    .align  3
    .globl  __FM_heap_start
    .globl  __FM_heap_end
__FM_heap_start:
    .if     Heap_Size
    .space  Heap_Size
    .endif
__FM_heap_end:


/* Vector Table */

    .section ".FM.interrupt_vector"
    .globl  __FM_interrupt_vector_cortex_m
    .type   __FM_interrupt_vector_cortex_m, %object

__FM_interrupt_vector_cortex_m:
    .long   __FM_stack                 /* Top of Stack                 */
    .long   __FM_reset                 /* Reset Handler                */
    .long   NMI_Handler                 /* NMI Handler                  */
    .long   HardFault_Handler           /* Hard Fault Handler           */
    .long   MemManage_Handler           /* MPU Fault Handler            */
    .long   BusFault_Handler            /* Bus Fault Handler            */
    .long   UsageFault_Handler          /* Usage Fault Handler          */
    .long   0                           /* Reserved                     */
    .long   0                           /* Reserved                     */
    .long   0                           /* Reserved                     */
    .long   0                           /* Reserved                     */
    .long   SVC_Handler                 /* SVCall Handler               */
    .long   DebugMon_Handler            /* Debug Monitor Handler        */
    .long   0                           /* Reserved                     */
    .long   PendSV_Handler              /* PendSV Handler               */
    .long   SysTick_Handler             /* SysTick Handler              */

    /* External Interrupts */

    .long   CSV_IRQHandler		/* IRQ #0 */
    .long   SWDT_IRQHandler		/* IRQ #1 */
    .long   LVD_IRQHandler		/* IRQ #2 */
    .long   MFT0_WFG_DTIF_IRQHandler		/* IRQ #3 */
    .long   EXINT0_7_IRQHandler		/* IRQ #4 */
    .long   Default_Handler		/* IRQ #5 */
    .long   DT_QPRC_IRQHandler		/* IRQ #6 */
    .long   MFS0_RX_IRQHandler		/* IRQ #7 */
    .long   MFS0_TX_IRQHandler		/* IRQ #8 */
    .long   MFS1_RX_IRQHandler		/* IRQ #9 */
    .long   MFS1_TX_IRQHandler		/* IRQ #10 */
    .long   Default_Handler		/* IRQ #11 */
    .long   Default_Handler		/* IRQ #12 */
    .long   MFS3_RX_IRQHandler		/* IRQ #13 */
    .long   MFS3_TX_IRQHandler		/* IRQ #14 */
    .long   Default_Handler		/* IRQ #15 */
    .long   Default_Handler		/* IRQ #16 */
    .long   Default_Handler		/* IRQ #17 */
    .long   Default_Handler		/* IRQ #18 */
    .long   DMAC0_IRQHandler		/* IRQ #19 */
    .long   DMAC1_IRQHandler		/* IRQ #20 */
    .long   Default_Handler		/* IRQ #21 */
    .long   Default_Handler		/* IRQ #22 */
    .long   PPG00_02_04_08_10_12_16_18_20_IRQHandler		/* IRQ #23 */
    .long   TIM_IRQHandler		/* IRQ #24 */
    .long   ADC0_IRQHandler		/* IRQ #25 */
    .long   Default_Handler		/* IRQ #26 */
    .long   Default_Handler		/* IRQ #27 */
    .long   MFT0_FRT_IRQHandler		/* IRQ #28 */
    .long   MFT0_ICU_IRQHandler		/* IRQ #29 */
    .long   MFT0_OCU_IRQHandler		/* IRQ #30 */
    .long   BT0_3_FLASHIF_IRQHandler		/* IRQ #31 */


    .size   __FM_interrupt_vector_cortex_m, . - __FM_interrupt_vector_cortex_m


    .thumb


/* Reset Handler */

    .section .FM.reset,"x",%progbits
    .thumb_func
    .globl  __FM_reset_cortex_m
    .type   __FM_reset_cortex_m, %function
__FM_reset_cortex_m:
    .fnstart
.ifdef Debug_RAM
/* this routine is used for .bss sections initialization by RAM debugging "Debug_RAM = 1" */
/* Clear .bss section (Zero init) */
	MOV     R0, #0
	LDR     R1, =_sbss
	LDR     R2, =_ebss
	CMP     R1,R2
	BEQ     start_main
Loop_bss:
	CMP     R1, R2
	BHS		start_main
	STR   	R0, [R1]
	ADD		R1, #4
	BLO     Loop_bss

.else
/* this routine is used for .data and .bss sections initialization by ROM debugging "Debug_RAM = 0" */
init_data:
	LDR		R0, =_sdata
	LDR		R1, =_etext
	LDR		R2, =data_size
	MOV		R3, #0
loop_init_data:
	CMP		R3, R2
	BCS		zero_bss
    LDR		R4,[R1,#0]
	STR		R4,[R0,#0]
	ADD		R3, #4
	ADD		R1, #4
	ADD		R0, #4
	B		loop_init_data

/* Clear .bss section (Zero init) */

zero_bss:
	LDR		R0, =_sbss
	LDR		R2, =bss_size
	MOV		R3, #0
	MOV		R4, #0
loop_zero_bss:
	CMP		R3, R2
	BCS		start_main
	STR		R4,[R0,#0]
	ADD		R3, #4
	ADD		R0, #4
	B		loop_zero_bss
.endif
start_main:

  /*enable fpu begin*/
  /*; enable cp10,cp11 */
  
  /* START NO FPU IN THIS DEVICE
  ldr     r0, =0xe000ed88           
  ldr     r1,[r0]
  ldr     r2, =0xf00000
  orr     r1,r1,r2
  str     r1,[r0]
  END NO FPU IN THIS DEVICE */
  
  /*enable fpu end*/ 
  
	LDR     R0, =SystemInit
    BLX     R0
    LDR     R0,=main
    BX      R0

    .pool
    .cantunwind
    .fnend
    .size   __FM_reset_cortex_m,.-__FM_reset_cortex_m

    .section ".text"

/* Exception Handlers */

    .weak   NMI_Handler
    .type   NMI_Handler, %function
NMI_Handler:
    B       .
    .size   NMI_Handler, . - NMI_Handler

    .weak   HardFault_Handler
    .type   HardFault_Handler, %function
HardFault_Handler:
    B       .
    .size   HardFault_Handler, . - HardFault_Handler

    .weak   MemManage_Handler
    .type   MemManage_Handler, %function
MemManage_Handler:
    B       .
    .size   MemManage_Handler, . - MemManage_Handler

    .weak   BusFault_Handler
    .type   BusFault_Handler, %function
BusFault_Handler:
    B       .
    .size   BusFault_Handler, . - BusFault_Handler

    .weak   UsageFault_Handler
    .type   UsageFault_Handler, %function
UsageFault_Handler:
    B       .
    .size   UsageFault_Handler, . - UsageFault_Handler

    .weak   SVC_Handler
    .type   SVC_Handler, %function
SVC_Handler:
    B       .
    .size   SVC_Handler, . - SVC_Handler

    .weak   DebugMon_Handler
    .type   DebugMon_Handler, %function
DebugMon_Handler:
    B       .
    .size   DebugMon_Handler, . - DebugMon_Handler

    .weak   PendSV_Handler
    .type   PendSV_Handler, %function
PendSV_Handler:
    B       .
    .size   PendSV_Handler, . - PendSV_Handler

    .weak   SysTick_Handler
    .type   SysTick_Handler, %function
SysTick_Handler:
    B       .
    .size   SysTick_Handler, . - SysTick_Handler


/* IRQ Handlers */

    .globl  Default_Handler
    .type   Default_Handler, %function
Default_Handler:
    B       .
    .size   Default_Handler, . - Default_Handler

    .macro  IRQ handler
    .weak   \handler
    .set    \handler, Default_Handler
    .endm

	IRQ     CSV_IRQHandler		/* IRQ #0 */
	IRQ     SWDT_IRQHandler		/* IRQ #1 */
	IRQ     LVD_IRQHandler		/* IRQ #2 */
	IRQ     MFT0_WFG_DTIF_IRQHandler		/* IRQ #3 */
	IRQ     EXINT0_7_IRQHandler		/* IRQ #4 */
	IRQ     DT_QPRC_IRQHandler		/* IRQ #6 */
	IRQ     MFS0_RX_IRQHandler		/* IRQ #7 */
	IRQ     MFS0_TX_IRQHandler		/* IRQ #8 */
	IRQ     MFS1_RX_IRQHandler		/* IRQ #9 */
	IRQ     MFS1_TX_IRQHandler		/* IRQ #10 */
	IRQ     MFS3_RX_IRQHandler		/* IRQ #13 */
	IRQ     MFS3_TX_IRQHandler		/* IRQ #14 */
	IRQ     DMAC0_IRQHandler		/* IRQ #19 */
	IRQ     DMAC1_IRQHandler		/* IRQ #20 */
	IRQ     PPG00_02_04_08_10_12_16_18_20_IRQHandler		/* IRQ #23 */
	IRQ     TIM_IRQHandler		/* IRQ #24 */
	IRQ     ADC0_IRQHandler		/* IRQ #25 */
	IRQ     MFT0_FRT_IRQHandler		/* IRQ #28 */
	IRQ     MFT0_ICU_IRQHandler		/* IRQ #29 */
	IRQ     MFT0_OCU_IRQHandler		/* IRQ #30 */
	IRQ     BT0_3_FLASHIF_IRQHandler		/* IRQ #31 */


    .end
