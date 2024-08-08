/**
  ******************************************************************************
  * @file      tmpm4kmfyafg.s
  * @author    Strahinja Jacimovic (MikroE)
  * @brief     tmpm4kmfyafg device vector table for GCC/CLANG based toolchains.
  *            This module performs:
  *                - Set the initial SP
  *                - Set the initial PC == Reset_Handler,
  *                - Set the vector table entries with the exceptions ISR address
  *                - Branches to main in the C library (which eventually
  *                  calls main()).
  *            After Reset the Cortex-M4 processor is in Thread mode,
  *            priority is Privileged, and the Stack is set to Main.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) ${COPYRIGHT_YEAR_MIKROE} MikroElektronika.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

.syntax unified
.cpu cortex-m4
.fpu softvfp
.thumb

.global  g_pfnVectors
.global  Default_Handler

.section  .text.Reset_Handler
    .weak  Reset_Handler
    .type  Reset_Handler, %function

Reset_Handler:
    /* set stack pointer */
    ldr sp, =_estack
    /* Call the clock system intitialization function.*/
    bl clockConfig
    /* Call static constructors */
    bl __libc_init_array
    /* Call the application's entry point.*/
    bl main
    bx lr

.size  Reset_Handler, .-Reset_Handler

/**
 * @brief  This is the code that gets called when the processor receives an
 *         unexpected interrupt.  This simply enters an infinite loop, preserving
 *         the system state for examination by a debugger.
 * @param  None
 * @retval None
 */
.section  .text.Default_Handler,"ax",%progbits
Default_Handler:
    Infinite_Loop:
        b  Infinite_Loop
        .size  Default_Handler, .-Default_Handler
        .section  .isr_vector,"a",%progbits
        .type  g_pfnVectors, %object
        .size  g_pfnVectors, .-g_pfnVectors

g_pfnVectors:
    .word  _estack
    .word  Reset_Handler
    .word  NMI_Handler
    .word  HardFault_Handler
    .word  MemManage_Handler
    .word  BusFault_Handler
    .word  UsageFault_Handler
    .word  0
    .word  0
    .word  0
    .word  0
    .word  SVC_Handler
    .word  DebugMon_Handler
    .word  0
    .word  PendSV_Handler
    .word  SysTick_Handler

    /* External Interrupts */
    .word  INT00_Handler
    .word  INT01_Handler
    .word  INT02_Handler
    .word  INT03_Handler
    .word  INT04_Handler
    .word  INT05_Handler
    .word  INT06_Handler
    .word  INT07_Handler
    .word  INT08_Handler
    .word  INT09_Handler
    .word  INT10_Handler
    .word  INT11_Handler
    .word  INT12_Handler
    .word  INT13_Handler
    .word  INT14_Handler
    .word  INT15_Handler
    .word  INT16_Handler
    .word  0
    .word  0
    .word  0
    .word  0
    .word  INT21_Handler
    .word  INTVCN0_Handler
    .word  INTVCT0_Handler
    .word  INTEMG0_Handler
    .word  INTEMG1_Handler
    .word  INTEMG2_Handler
    .word  INTOVV0_Handler
    .word  INTOVV1_Handler
    .word  INTOVV2_Handler
    .word  INTPWM0_Handler
    .word  INTPWM1_Handler
    .word  INTPWM2_Handler
    .word  INTENC00_Handler
    .word  INTENC01_Handler
    .word  INTENC10_Handler
    .word  INTENC11_Handler
    .word  INTENC20_Handler
    .word  INTENC21_Handler
    .word  INTADAPDA_Handler
    .word  INTADAPDB_Handler
    .word  INTADACP0_Handler
    .word  INTADACP1_Handler
    .word  INTADATRG_Handler
    .word  INTADASGL_Handler
    .word  INTADACNT_Handler
    .word  INTADBPDA_Handler
    .word  INTADBPDB_Handler
    .word  INTADBCP0_Handler
    .word  INTADBCP1_Handler
    .word  INTADBTRG_Handler
    .word  INTADBSGL_Handler
    .word  INTADBCNT_Handler
    .word  INTADCPDA_Handler
    .word  INTADCPDB_Handler
    .word  INTADCCP0_Handler
    .word  INTADCCP1_Handler
    .word  INTADCTRG_Handler
    .word  INTADCSGL_Handler
    .word  INTADCCNT_Handler
    .word  INTSC0RX_Handler
    .word  INTSC0TX_Handler
    .word  INTSC0ERR_Handler
    .word  INTSC1RX_Handler
    .word  INTSC1TX_Handler
    .word  INTSC1ERR_Handler
    .word  INTSC2RX_Handler
    .word  INTSC2TX_Handler
    .word  INTSC2ERR_Handler
    .word  INTSC3RX_Handler
    .word  INTSC3TX_Handler
    .word  INTSC3ERR_Handler
    .word  INTI2C0NST_Handler
    .word  INTI2C0ATX_Handler
    .word  INTI2C0BRX_Handler
    .word  INTI2C0NA_Handler
    .word  INTI2C1NST_Handler
    .word  INTI2C1ATX_Handler
    .word  INTI2C1BRX_Handler
    .word  INTI2C1NA_Handler
    .word  0
    .word  0
    .word  0
    .word  INTT32A00AC_Handler
    .word  INTT32A00ACCAP0_Handler
    .word  INTT32A00ACCAP1_Handler
    .word  INTT32A00B_Handler
    .word  INTT32A00BCAP0_Handler
    .word  INTT32A00BCAP1_Handler
    .word  INTT32A01AC_Handler
    .word  INTT32A01ACCAP0_Handler
    .word  INTT32A01ACCAP1_Handler
    .word  INTT32A01B_Handler
    .word  INTT32A01BCAP0_Handler
    .word  INTT32A01BCAP1_Handler
    .word  INTT32A02AC_Handler
    .word  INTT32A02ACCAP0_Handler
    .word  INTT32A02ACCAP1_Handler
    .word  INTT32A02B_Handler
    .word  INTT32A02BCAP0_Handler
    .word  INTT32A02BCAP1_Handler
    .word  INTT32A03AC_Handler
    .word  INTT32A03ACCAP0_Handler
    .word  INTT32A03ACCAP1_Handler
    .word  INTT32A03B_Handler
    .word  INTT32A03BCAP0_Handler
    .word  INTT32A03BCAP1_Handler
    .word  INTT32A04AC_Handler
    .word  INTT32A04ACCAP0_Handler
    .word  INTT32A04ACCAP1_Handler
    .word  INTT32A04B_Handler
    .word  INTT32A04BCAP0_Handler
    .word  INTT32A04BCAP1_Handler
    .word  INTT32A05AC_Handler
    .word  INTT32A05ACCAP0_Handler
    .word  INTT32A05ACCAP1_Handler
    .word  INTT32A05B_Handler
    .word  INTT32A05BCAP0_Handler
    .word  INTT32A05BCAP1_Handler
    .word  INTPARI0_Handler
    .word  INTPARI1_Handler
    .word  INTDMAATC_Handler
    .word  INTDMAAERR_Handler
    .word  INTFLCRDY_Handler
    .word  INTFLDRDY_Handler

/*******************************************************************************
*
* Provide weak aliases for each Exception handler to the Default_Handler.
* As they are weak aliases, any function with the same name will override
* this definition.
*
*******************************************************************************/
    .weak      NMI_Handler
    .thumb_set NMI_Handler,Default_Handler

    .weak      HardFault_Handler
    .thumb_set HardFault_Handler,Default_Handler

    .weak      MemManage_Handler
    .thumb_set MemManage_Handler,Default_Handler

    .weak      BusFault_Handler
    .thumb_set BusFault_Handler,Default_Handler

    .weak      UsageFault_Handler
    .thumb_set UsageFault_Handler,Default_Handler

    .weak      SVC_Handler
    .thumb_set SVC_Handler,Default_Handler

    .weak      DebugMon_Handler
    .thumb_set DebugMon_Handler,Default_Handler

    .weak      PendSV_Handler
    .thumb_set PendSV_Handler,Default_Handler

    .weak      SysTick_Handler
    .thumb_set SysTick_Handler,Default_Handler

    .weak      INT00_Handler
    .thumb_set INT00_Handler,Default_Handler

    .weak      INT01_Handler
    .thumb_set INT01_Handler,Default_Handler

    .weak      INT02_Handler
    .thumb_set INT02_Handler,Default_Handler

    .weak      INT03_Handler
    .thumb_set INT03_Handler,Default_Handler

    .weak      INT04_Handler
    .thumb_set INT04_Handler,Default_Handler

    .weak      INT05_Handler
    .thumb_set INT05_Handler,Default_Handler

    .weak      INT06_Handler
    .thumb_set INT06_Handler,Default_Handler

    .weak      INT07_Handler
    .thumb_set INT07_Handler,Default_Handler

    .weak      INT08_Handler
    .thumb_set INT08_Handler,Default_Handler

    .weak      INT09_Handler
    .thumb_set INT09_Handler,Default_Handler

    .weak      INT10_Handler
    .thumb_set INT10_Handler,Default_Handler

    .weak      INT11_Handler
    .thumb_set INT11_Handler,Default_Handler

    .weak      INT12_Handler
    .thumb_set INT12_Handler,Default_Handler

    .weak      INT13_Handler
    .thumb_set INT13_Handler,Default_Handler

    .weak      INT14_Handler
    .thumb_set INT14_Handler,Default_Handler

    .weak      INT15_Handler
    .thumb_set INT15_Handler,Default_Handler

    .weak      INT16_Handler
    .thumb_set INT16_Handler,Default_Handler

    .weak      INT21_Handler
    .thumb_set INT21_Handler,Default_Handler

    .weak      INTVCN0_Handler
    .thumb_set INTVCN0_Handler,Default_Handler

    .weak      INTVCT0_Handler
    .thumb_set INTVCT0_Handler,Default_Handler

    .weak      INTEMG0_Handler
    .thumb_set INTEMG0_Handler,Default_Handler

    .weak      INTEMG1_Handler
    .thumb_set INTEMG1_Handler,Default_Handler

    .weak      INTEMG2_Handler
    .thumb_set INTEMG2_Handler,Default_Handler

    .weak      INTOVV0_Handler
    .thumb_set INTOVV0_Handler,Default_Handler

    .weak      INTOVV1_Handler
    .thumb_set INTOVV1_Handler,Default_Handler

    .weak      INTOVV2_Handler
    .thumb_set INTOVV2_Handler,Default_Handler

    .weak      INTPWM0_Handler
    .thumb_set INTPWM0_Handler,Default_Handler

    .weak      INTPWM1_Handler
    .thumb_set INTPWM1_Handler,Default_Handler

    .weak      INTPWM2_Handler
    .thumb_set INTPWM2_Handler,Default_Handler

    .weak      INTENC00_Handler
    .thumb_set INTENC00_Handler,Default_Handler

    .weak      INTENC01_Handler
    .thumb_set INTENC01_Handler,Default_Handler

    .weak      INTENC10_Handler
    .thumb_set INTENC10_Handler,Default_Handler

    .weak      INTENC11_Handler
    .thumb_set INTENC11_Handler,Default_Handler

    .weak      INTENC20_Handler
    .thumb_set INTENC20_Handler,Default_Handler

    .weak      INTENC21_Handler
    .thumb_set INTENC21_Handler,Default_Handler

    .weak      INTADAPDA_Handler
    .thumb_set INTADAPDA_Handler,Default_Handler

    .weak      INTADAPDB_Handler
    .thumb_set INTADAPDB_Handler,Default_Handler

    .weak      INTADACP0_Handler
    .thumb_set INTADACP0_Handler,Default_Handler

    .weak      INTADACP1_Handler
    .thumb_set INTADACP1_Handler,Default_Handler

    .weak      INTADATRG_Handler
    .thumb_set INTADATRG_Handler,Default_Handler

    .weak      INTADASGL_Handler
    .thumb_set INTADASGL_Handler,Default_Handler

    .weak      INTADACNT_Handler
    .thumb_set INTADACNT_Handler,Default_Handler

    .weak      INTADBPDA_Handler
    .thumb_set INTADBPDA_Handler,Default_Handler

    .weak      INTADBPDB_Handler
    .thumb_set INTADBPDB_Handler,Default_Handler

    .weak      INTADBCP0_Handler
    .thumb_set INTADBCP0_Handler,Default_Handler

    .weak      INTADBCP1_Handler
    .thumb_set INTADBCP1_Handler,Default_Handler

    .weak      INTADBTRG_Handler
    .thumb_set INTADBTRG_Handler,Default_Handler

    .weak      INTADBSGL_Handler
    .thumb_set INTADBSGL_Handler,Default_Handler

    .weak      INTADBCNT_Handler
    .thumb_set INTADBCNT_Handler,Default_Handler

    .weak      INTADCPDA_Handler
    .thumb_set INTADCPDA_Handler,Default_Handler

    .weak      INTADCPDB_Handler
    .thumb_set INTADCPDB_Handler,Default_Handler

    .weak      INTADCCP0_Handler
    .thumb_set INTADCCP0_Handler,Default_Handler

    .weak      INTADCCP1_Handler
    .thumb_set INTADCCP1_Handler,Default_Handler

    .weak      INTADCTRG_Handler
    .thumb_set INTADCTRG_Handler,Default_Handler

    .weak      INTADCSGL_Handler
    .thumb_set INTADCSGL_Handler,Default_Handler

    .weak      INTADCCNT_Handler
    .thumb_set INTADCCNT_Handler,Default_Handler

    .weak      INTSC0RX_Handler
    .thumb_set INTSC0RX_Handler,Default_Handler

    .weak      INTSC0TX_Handler
    .thumb_set INTSC0TX_Handler,Default_Handler

    .weak      INTSC0ERR_Handler
    .thumb_set INTSC0ERR_Handler,Default_Handler

    .weak      INTSC1RX_Handler
    .thumb_set INTSC1RX_Handler,Default_Handler

    .weak      INTSC1TX_Handler
    .thumb_set INTSC1TX_Handler,Default_Handler

    .weak      INTSC1ERR_Handler
    .thumb_set INTSC1ERR_Handler,Default_Handler

    .weak      INTSC2RX_Handler
    .thumb_set INTSC2RX_Handler,Default_Handler

    .weak      INTSC2TX_Handler
    .thumb_set INTSC2TX_Handler,Default_Handler

    .weak      INTSC2ERR_Handler
    .thumb_set INTSC2ERR_Handler,Default_Handler

    .weak      INTSC3RX_Handler
    .thumb_set INTSC3RX_Handler,Default_Handler

    .weak      INTSC3TX_Handler
    .thumb_set INTSC3TX_Handler,Default_Handler

    .weak      INTSC3ERR_Handler
    .thumb_set INTSC3ERR_Handler,Default_Handler

    .weak      INTI2C0NST_Handler
    .thumb_set INTI2C0NST_Handler,Default_Handler

    .weak      INTI2C0ATX_Handler
    .thumb_set INTI2C0ATX_Handler,Default_Handler

    .weak      INTI2C0BRX_Handler
    .thumb_set INTI2C0BRX_Handler,Default_Handler

    .weak      INTI2C0NA_Handler
    .thumb_set INTI2C0NA_Handler,Default_Handler

    .weak      INTI2C1NST_Handler
    .thumb_set INTI2C1NST_Handler,Default_Handler

    .weak      INTI2C1ATX_Handler
    .thumb_set INTI2C1ATX_Handler,Default_Handler

    .weak      INTI2C1BRX_Handler
    .thumb_set INTI2C1BRX_Handler,Default_Handler

    .weak      INTI2C1NA_Handler
    .thumb_set INTI2C1NA_Handler,Default_Handler

    .weak      INTT32A00AC_Handler
    .thumb_set INTT32A00AC_Handler,Default_Handler

    .weak      INTT32A00ACCAP0_Handler
    .thumb_set INTT32A00ACCAP0_Handler,Default_Handler

    .weak      INTT32A00ACCAP1_Handler
    .thumb_set INTT32A00ACCAP1_Handler,Default_Handler

    .weak      INTT32A00B_Handler
    .thumb_set INTT32A00B_Handler,Default_Handler

    .weak      INTT32A00BCAP0_Handler
    .thumb_set INTT32A00BCAP0_Handler,Default_Handler

    .weak      INTT32A00BCAP1_Handler
    .thumb_set INTT32A00BCAP1_Handler,Default_Handler

    .weak      INTT32A01AC_Handler
    .thumb_set INTT32A01AC_Handler,Default_Handler

    .weak      INTT32A01ACCAP0_Handler
    .thumb_set INTT32A01ACCAP0_Handler,Default_Handler

    .weak      INTT32A01ACCAP1_Handler
    .thumb_set INTT32A01ACCAP1_Handler,Default_Handler

    .weak      INTT32A01B_Handler
    .thumb_set INTT32A01B_Handler,Default_Handler

    .weak      INTT32A01BCAP0_Handler
    .thumb_set INTT32A01BCAP0_Handler,Default_Handler

    .weak      INTT32A01BCAP1_Handler
    .thumb_set INTT32A01BCAP1_Handler,Default_Handler

    .weak      INTT32A02AC_Handler
    .thumb_set INTT32A02AC_Handler,Default_Handler

    .weak      INTT32A02ACCAP0_Handler
    .thumb_set INTT32A02ACCAP0_Handler,Default_Handler

    .weak      INTT32A02ACCAP1_Handler
    .thumb_set INTT32A02ACCAP1_Handler,Default_Handler

    .weak      INTT32A02B_Handler
    .thumb_set INTT32A02B_Handler,Default_Handler

    .weak      INTT32A02BCAP0_Handler
    .thumb_set INTT32A02BCAP0_Handler,Default_Handler

    .weak      INTT32A02BCAP1_Handler
    .thumb_set INTT32A02BCAP1_Handler,Default_Handler

    .weak      INTT32A03AC_Handler
    .thumb_set INTT32A03AC_Handler,Default_Handler

    .weak      INTT32A03ACCAP0_Handler
    .thumb_set INTT32A03ACCAP0_Handler,Default_Handler

    .weak      INTT32A03ACCAP1_Handler
    .thumb_set INTT32A03ACCAP1_Handler,Default_Handler

    .weak      INTT32A03B_Handler
    .thumb_set INTT32A03B_Handler,Default_Handler

    .weak      INTT32A03BCAP0_Handler
    .thumb_set INTT32A03BCAP0_Handler,Default_Handler

    .weak      INTT32A03BCAP1_Handler
    .thumb_set INTT32A03BCAP1_Handler,Default_Handler

    .weak      INTT32A04AC_Handler
    .thumb_set INTT32A04AC_Handler,Default_Handler

    .weak      INTT32A04ACCAP0_Handler
    .thumb_set INTT32A04ACCAP0_Handler,Default_Handler

    .weak      INTT32A04ACCAP1_Handler
    .thumb_set INTT32A04ACCAP1_Handler,Default_Handler

    .weak      INTT32A04B_Handler
    .thumb_set INTT32A04B_Handler,Default_Handler

    .weak      INTT32A04BCAP0_Handler
    .thumb_set INTT32A04BCAP0_Handler,Default_Handler

    .weak      INTT32A04BCAP1_Handler
    .thumb_set INTT32A04BCAP1_Handler,Default_Handler

    .weak      INTT32A05AC_Handler
    .thumb_set INTT32A05AC_Handler,Default_Handler

    .weak      INTT32A05ACCAP0_Handler
    .thumb_set INTT32A05ACCAP0_Handler,Default_Handler

    .weak      INTT32A05ACCAP1_Handler
    .thumb_set INTT32A05ACCAP1_Handler,Default_Handler

    .weak      INTT32A05B_Handler
    .thumb_set INTT32A05B_Handler,Default_Handler

    .weak      INTT32A05BCAP0_Handler
    .thumb_set INTT32A05BCAP0_Handler,Default_Handler

    .weak      INTT32A05BCAP1_Handler
    .thumb_set INTT32A05BCAP1_Handler,Default_Handler

    .weak      INTPARI0_Handler
    .thumb_set INTPARI0_Handler,Default_Handler

    .weak      INTPARI1_Handler
    .thumb_set INTPARI1_Handler,Default_Handler

    .weak      INTDMAATC_Handler
    .thumb_set INTDMAATC_Handler,Default_Handler

    .weak      INTDMAAERR_Handler
    .thumb_set INTDMAAERR_Handler,Default_Handler

    .weak      INTFLCRDY_Handler
    .thumb_set INTFLCRDY_Handler,Default_Handler

    .weak      INTFLDRDY_Handler
    .thumb_set INTFLDRDY_Handler,Default_Handler
