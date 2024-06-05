#pragma setintsize mE

typedef struct
{
    unsigned long SYSCLK_Frequency; // SYSCLK clock frequency in Hz
    unsigned long HCLK_Frequency;   // HCLK clock frequency   in Hz
    unsigned long PCLK1_Frequency;  // PCLK1 clock frequency  in Hz
    unsigned long PCLK2_Frequency;  // PCLK2 clock frequency  in Hz
    unsigned long PCLK3_Frequency;  // PCLK3 clock frequency  in Hz
    unsigned long PCLK4_Frequency;  // PCLK4 clock frequency  in Hz
    unsigned long ADCCLK_Frequency; // ADCCLK clock frequency in Hz
} RCC_ClocksTypeDef;
