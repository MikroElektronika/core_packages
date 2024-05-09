#include "stdint.h"

typedef struct
{
  uint32_t SYSTEM_Frequency;     // SYSTEM clock frequency in Hz
  uint32_t FAST_PERIPHERAL_Frequency;   // FAST PERIPHERAL clock frequency in Hz
  uint32_t FLEXBUS_Frequency;    // FLEXBUS clock frequency  in Hz
  uint32_t FLASH_Frequency;      // FLASH clock frequency  in Hz
} SIM_ClocksTypeDef;