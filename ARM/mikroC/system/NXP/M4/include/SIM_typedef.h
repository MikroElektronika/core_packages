#pragma setintsize mE

typedef struct
{
  unsigned long SYSTEM_Frequency;     // SYSTEM clock frequency in Hz
  unsigned long BUSCLOCK_Frequency;   // BUSCLOCK clock frequency   in Hz
  unsigned long FLEXBUS_Frequency;    // FLEXBUS clock frequency  in Hz
  unsigned long FLASH_Frequency;      // FLASH clock frequency  in Hz
} SIM_ClocksTypeDef;