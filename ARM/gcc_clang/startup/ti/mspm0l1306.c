#include "system.h"
#include <stdint.h>

// External declarations

extern void SystemInit(SystemClock_t clock);
extern int main(void);

// Ovo sve potice iz ld fajla
extern uint32_t __data_load__;
extern uint32_t __data_start__;
extern uint32_t __data_end__;
extern uint32_t __ramfunct_load__;
extern uint32_t __ramfunct_start__;
extern uint32_t __ramfunct_end__;
extern uint32_t __bss_load__;
extern uint32_t __bss_start__;
extern uint32_t __bss_end__;
extern uint32_t __StackTop;

typedef void (*pFunc) (void);  // Jos uvek nisam najsigurniji sta se tacno radi ovde ali ovo je pointer f-ja

// Forward declaration of the default fault Handelers

void Default_Handler(void);
extern void Reset_Handler     (void) __attribute__((weak));
//extern void __libc_init_array(void);                                               // Ne koristim
//extern void _init             (void) __attribute__((weak, alias("initSub")));      // Ne koristim
//void initSub(void){;}                                                              // Ne koristim

/*Processor Exceptions*/

extern void NMI_Handler       (void) __attribute__((weak, alias("Default_Handler")));
extern void HardFault_Handler (void) __attribute__((weak, alias("Default_Handler")));
extern void SVC_Handler       (void) __attribute__((weak, alias("Default_Handler")));
extern void PendSV_Handler    (void) __attribute__((weak, alias("Default_Handler")));
extern void SysTick_Handler   (void) __attribute__((weak, alias("Default_Handler")));

/* Device Specific Interrupt Handlers */
extern void GROUP0_IRQHandler   (void) __attribute__((weak, alias("Default_Handler")));
extern void GROUP1_IRQHandler   (void) __attribute__((weak, alias("Default_Handler")));
extern void TIMG1_IRQHandler    (void) __attribute__((weak, alias("Default_Handler")));
extern void ADC0_IRQHandler     (void) __attribute__((weak, alias("Default_Handler")));
extern void SPI0_IRQHandler     (void) __attribute__((weak, alias("Default_Handler")));
extern void UART1_IRQHandler    (void) __attribute__((weak, alias("Default_Handler")));
extern void UART0_IRQHandler    (void) __attribute__((weak, alias("Default_Handler")));
extern void TIMG0_IRQHandler    (void) __attribute__((weak, alias("Default_Handler")));
extern void TIMG2_IRQHandler    (void) __attribute__((weak, alias("Default_Handler")));
extern void TIMG4_IRQHandler    (void) __attribute__((weak, alias("Default_Handler")));
extern void I2C0_IRQHandler     (void) __attribute__((weak, alias("Default_Handler")));
extern void I2C1_IRQHandler     (void) __attribute__((weak, alias("Default_Handler")));
extern void DMA_IRQHandler      (void) __attribute__((weak, alias("Default_Handler")));




// Vektor tabela
void (*const interruptVectors[])(void) __attribute__((used)) __attribute__((section(".intvecs"))) =
{
    (pFunc)&__StackTop,                    /* The initial stack pointer */
    Reset_Handler,                         /* The reset handler         */
    NMI_Handler,                           /* The NMI handler           */
    HardFault_Handler,                     /* The hard fault handler    */
    0,                                     /* Reserved                  */
    0,                                     /* Reserved                  */
    0,                                     /* Reserved                  */
    0,                                     /* Reserved                  */
    0,                                     /* Reserved                  */
    0,                                     /* Reserved                  */
    0,                                     /* Reserved                  */
    SVC_Handler,                           /* SVCall handler            */
    0,                                     /* Reserved                  */
    0,                                     /* Reserved                  */
    PendSV_Handler,                        /* The PendSV handler        */
    SysTick_Handler,                       /* SysTick handler           */
    GROUP0_IRQHandler,                     /* GROUP0 interrupt handler  */
    GROUP1_IRQHandler,                     /* GROUP1 interrupt handler  */
    TIMG1_IRQHandler,                      /* TIMG1 interrupt handler   */
    0,                                     /* Reserved                  */
    ADC0_IRQHandler,                       /* ADC0 interrupt handler    */
    0,                                     /* Reserved                  */
    0,                                     /* Reserved                  */
    0,                                     /* Reserved                  */
    0,                                     /* Reserved                  */
    SPI0_IRQHandler,                       /* SPI0 interrupt handler    */
    0,                                     /* Reserved                  */
    0,                                     /* Reserved                  */
    0,                                     /* Reserved                  */
    UART1_IRQHandler,                      /* UART1 interrupt handler   */
    0,                                     /* Reserved                  */
    UART0_IRQHandler,                      /* UART0 interrupt handler   */
    TIMG0_IRQHandler,                      /* TIMG0 interrupt handler   */
    0,                                     /* Reserved                  */
    TIMG2_IRQHandler,                      /* TIMG2 interrupt handler   */
    0,                                     /* Reserved                  */
    TIMG4_IRQHandler,                      /* TIMG4 interrupt handler   */
    0,                                     /* Reserved                  */
    0,                                     /* Reserved                  */
    0,                                     /* Reserved                  */
    I2C0_IRQHandler,                       /* I2C0 interrupt handler    */
    I2C1_IRQHandler,                       /* I2C1 interrupt handler    */
    0,                                     /* Reserved                  */
    0,                                     /* Reserved                  */
    0,                                     /* Reserved                  */
    0,                                     /* Reserved                  */
    0,                                     /* Reserved                  */
    DMA_IRQHandler,                        /* DMA interrupt handler     */
};

// Reset_Handler
void Reset_Handler(void)
{
    uint32_t *src, *dst;
    uint32_t *bs, *be;

    // Copy Data segment initializers from flash to SRAM

    src = &__data_load__;
    dst = &__data_start__;
    
    while(dst < &__data_end__){
        *dst++ = *src++;
    }

    // Initialize .bss to zero
    bs = &__bss_start__;
    be = &__bss_end__;
    
    while(bs < be){
        *bs = 0;
        bs++;
    }

    // Poziv SystemInit
    SystemInit(CLOCK_32MHZ);


    // Poziv main
    main();
    
    while(1){};
}

// Default handler
void Default_Handler(void)
{
    while (1)
    {
    }
}