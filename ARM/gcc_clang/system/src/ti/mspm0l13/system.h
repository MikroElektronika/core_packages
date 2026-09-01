#ifndef SYSTEM_H
#define SYSTEM_H


#include "mspm0l1306_base.h"
#include "core_cm0plus.h"
#include "mspm0_reg_utils.h"
#include "mspm0l1306_sysctl.h"
#include "mspm0l1306_gpio.h"
#include "mspm0l1306_iomux.h"
#include "mspm0l1306_adc12.h"
#include "mspm0l1306_uart.h"

typedef enum {
    CLOCK_4MHZ = 4,
    CLOCK_16MHZ = 16,   
    CLOCK_24MHZ = 24,   
    CLOCK_32MHZ = 32,   
} SystemClock_t;

extern uint32_t SystemCoreClock;

void SystemInit(SystemClock_t clock);
void ClockInit(SystemClock_t clock);
void CLK_OUT_SETUP(void);
void Trim_Function(uint32_t rescoarse, uint32_t resfine, uint32_t cap, uint32_t freq_sel);
void SystemCoreClockUpdate(); 

#endif