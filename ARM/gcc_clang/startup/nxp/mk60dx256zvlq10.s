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
    ldr sp, =__stack
    /* Call the clock system intitialization function.*/
    bl  clockConfig /* Added to call MikroE system clock configuration API. */
    /* Call static constructors */
    bl __libc_init_array
    /* Call the application's entry point.*/
    bl  main
    bx  lr

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
    .word  __stack
    .word  Reset_Handler                        /* The reset handler */
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  Default_Handler
    .word  0xFFFFFFFF                           /* Reserved for user TRIM value */

/*******************************************************************************
*
* Provide weak aliases for each Exception handler to the Default_Handler.
* As they are weak aliases, any function with the same name will override
* this definition.
*
*******************************************************************************/

