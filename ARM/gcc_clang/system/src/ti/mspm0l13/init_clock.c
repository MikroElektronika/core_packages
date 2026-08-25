#include "system.h"

uint32_t SystemCoreClock;

void ClockInit(SystemClock_t clock);
void SystemInit(SystemClock_t clock);
void CLK_OUT_SETUP();
void Trim_Function(uint32_t rescoarse, uint32_t resfine, uint32_t cap, uint32_t freq_sel);
void SystemCoreClockUpdate();

void SystemInit(SystemClock_t clock)
{
    // Validacija
    if (clock > CLOCK_32MHZ) {
        clock = CLOCK_32MHZ;  // Fallback na max
    }

    // Konfigurisanje SYSOSC frekv.

    ClockInit(clock);
    SystemCoreClockUpdate(); 
    

    
}

void ClockInit(SystemClock_t clock){

    uint32_t freq_value;
    uint32_t user_trim_freq_value;

    switch (clock)
    {
    case CLOCK_4MHZ:
        freq_value = 0x1;
        user_trim_freq_value = 0x0;
        break;
    case CLOCK_16MHZ:
        freq_value = 0x2;
        user_trim_freq_value = 0x1;
        break;
    case CLOCK_24MHZ:
        freq_value = 0x2;
        user_trim_freq_value = 0x2;
        break;
    case CLOCK_32MHZ:
        freq_value = 0x0;
        user_trim_freq_value = 0x0;
        break;
    default:
        break;
    }

    if(freq_value == 0x2){

        switch(user_trim_freq_value){

            case 0x1: // 16MHz
            //CLK_OUT_SETUP();
            Trim_Function(20, 8, 1, SYSCTL_SYSOSCTRIMUSER_FREQ_SYSOSC16M);
            break;
            case 0x2:
            Trim_Function(32, 8, 0, SYSCTL_SYSOSCTRIMUSER_FREQ_SYSOSC24M); 
            break;
        }


    }
    else{

        // Clearujemo preostale bite i stavljamo nove
        SYSCTL->SOCLOCK.SYSOSCCFG = (SYSCTL->SOCLOCK.SYSOSCCFG & ~0x3) | freq_value; 
 
    }

    // Wait for sync
    while ((SYSCTL->SOCLOCK.CLKSTATUS & 0x3) != freq_value) { } 

}

void CLK_OUT_SETUP(){

    // 1. Configure IOMUX to select the CLK_OUT function on the device pin with CLK_OUT
    
    IOMUX->SECCFG.PINCM[IOMUX_PINCM8] = IOMUX_PINCM_PC_CONNECTED | IOMUX_PINCM8_PF_SYSCTL_CLK_OUT;

    // 2. Select the desired clock source in the EXCLKSRC field of the GENCLKCFG register.
    SYSCTL->SOCLOCK.GENCLKCFG = (SYSCTL->SOCLOCK.GENCLKCFG &~ SYSCTL_GENCLKCFG_EXCLKSRC_MASK) | SYSCTL_GENCLKCFG_EXCLKSRC_SYSOSC;

    // 3. Set the desired clock divider, if necessary, in the EXCLKDIVVAL field of the GENCLKCFG register, and
    // enable the divider by setting the EXCLKDIVEN bit. This must be done while EXCLKEN=0 (before CLK_OUT
    // is enabled)

    // with div
    SYSCTL->SOCLOCK.GENCLKCFG = (SYSCTL->SOCLOCK.GENCLKCFG &~ 
                                 SYSCTL_GENCLKCFG_EXCLKDIVEN_MASK) |
                                 SYSCTL_GENCLKCFG_EXCLKDIVEN_ENABLE;

    SYSCTL->SOCLOCK.GENCLKCFG = (SYSCTL->SOCLOCK.GENCLKCFG &~ 
                                 SYSCTL_GENCLKCFG_EXCLKDIVVAL_MASK) |
                                 SYSCTL_GENCLKCFG_EXCLKDIVVAL_DIV16;
    

    // 4. Enable the external clock output by setting the EXCLKEN bit in the GENCLKEN register.

    SYSCTL->SOCLOCK.GENCLKEN = (SYSCTL->SOCLOCK.GENCLKEN &~ 
                                SYSCTL_GENCLKEN_EXCLKEN_MASK) | 
                                SYSCTL_GENCLKEN_EXCLKEN_ENABLE;

}

void Trim_Function(uint32_t rescoarse, uint32_t resfine, uint32_t cap, uint32_t freq_sel){

    // 1. Set the SYSOSC frequency to BASE to start and leave the FCL mode disabled

    SYSCTL->SOCLOCK.SYSOSCCFG = (SYSCTL->SOCLOCK.SYSOSCCFG &~ SYSCTL_SYSOSCCFG_FREQ_MASK) | SYSCTL_SYSOSCCFG_FREQ_SYSOSCBASE;
    
    // 2. Program an initial tuning for the target frequency in the SYSOSCTRIMUSER register:
    // a. Set the RESCOARSE trim field in the SYSOSCTRIMUSER register to mid-range
    // b. Set the RESFINE trim field in the SYSOSCTRIMUSER register to mid-range

    write_reg_field(&SYSCTL->SOCLOCK.SYSOSCTRIMUSER,
                    SYSCTL_SYSOSCTRIMUSER_RESCOARSE_OFS,
                    SYSCTL_SYSOSCTRIMUSER_RESCOARSE_WIDTH, rescoarse);
    
    write_reg_field(&SYSCTL->SOCLOCK.SYSOSCTRIMUSER,
                    SYSCTL_SYSOSCTRIMUSER_RESFINE_OFS,
                    SYSCTL_SYSOSCTRIMUSER_RESFINE_WIDTH, resfine);
    
    write_reg_field(&SYSCTL->SOCLOCK.SYSOSCTRIMUSER,
                    SYSCTL_SYSOSCTRIMUSER_CAP_OFS,
                    SYSCTL_SYSOSCTRIMUSER_CAP_WIDTH, cap);
    
    write_reg_field(&SYSCTL->SOCLOCK.SYSOSCTRIMUSER,
                    SYSCTL_SYSOSCTRIMUSER_FREQ_OFS,
                    SYSCTL_SYSOSCTRIMUSER_FREQ_WIDTH, freq_sel);
   
    // 3. Switch SYSOSC to the user-trimmed frequency by selecting USER in the FREQ field of the SYSOSCCFG register
    
    SYSCTL->SOCLOCK.SYSOSCCFG = (SYSCTL->SOCLOCK.SYSOSCCFG &~ SYSCTL_SYSOSCCFG_FREQ_MASK) | 
                                 SYSCTL_SYSOSCCFG_FREQ_SYSOSCUSER;

}

void SystemCoreClockUpdate(){

    uint32_t current_freq = SYSCTL->SOCLOCK.CLKSTATUS & 
                            SYSCTL_CLKSTATUS_SYSOSCFREQ_MASK;
    
    
    uint32_t ut_current_freq = SYSCTL->SOCLOCK.SYSOSCTRIMUSER & 
                               SYSCTL_SYSOSCTRIMUSER_FREQ_MASK;

    switch (current_freq){
    case 0x0:
        
        SystemCoreClock = 32000000;
        
        break;
    case 0x1:
    
        SystemCoreClock = 4000000;
    
        break;
    case 0x2:

        if (ut_current_freq == 0x1) SystemCoreClock = 16000000;
        if (ut_current_freq == 0x2) SystemCoreClock = 24000000;
    
        break;
    default:

        SystemCoreClock = 0; // Error
        
        break;
    }

}

void GROUP1_IRQHandler(void){


    uint32_t iidx = GPIOA->CPU_INT.IIDX;  
    if (iidx == 0) return;                  // No pending intrrupt requests
    
    uint32_t pin = iidx - 1;                // Get PA from IIDX

    gpio_dispatch_interrupt(pin);

}

void UART0_IRQHandler(void){

    uint32_t iidx = UART->CPU_INT.IIDX;
    if (iidx == 0) return;                 // No pending interrupt requests
    
    switch(iidx){
        case UART_CPU_INT_IIDX_STAT_RXIFG:
            
            uart_rx_interrupt_handler();

        break;

        case UART_CPU_INT_IIDX_STAT_TXIFG:

            uart_tx_interrupt_handler();
        
        break;

        default:
        break;
    }
}