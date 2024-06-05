#pragma setintsize mE

typedef struct
{
    unsigned long SYSCLK_Frequency; // SYSCLK clock frequency  in Hz
    unsigned long HCLK_Frequency;   // HCLK   clock frequency  in Hz
    unsigned long PCLK_Frequency;   // PCLK   clock frequency  in Hz
    unsigned long TPCLK_Frequency;  // TPCLK  clock frequency  in Hz
} RCC_ClocksTypeDef;
