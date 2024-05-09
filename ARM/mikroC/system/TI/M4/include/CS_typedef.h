#pragma setintsize mE

typedef struct
{
  unsigned long ACLK_Frequency;   // ACLK clock frequency   in Hz
  unsigned long MCLK_Frequency;   // MCLK clock frequency   in Hz
  unsigned long HSMCLK_Frequency; // HSMCLK clock frequency in Hz
  unsigned long SMCLK_Frequency;  // SMCLK clock frequency  in Hz
} CS_ClocksTypeDef;
