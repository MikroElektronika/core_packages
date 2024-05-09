#pragma setintsize mE
// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;
const char B8 = 8;
const char B9 = 9;
const char B10 = 10;
const char B11 = 11;
const char B12 = 12;
const char B13 = 13;
const char B14 = 14;
const char B15 = 15;
const char B16 = 16;
const char B17 = 17;
const char B18 = 18;
const char B19 = 19;
const char B20 = 20;
const char B21 = 21;
const char B22 = 22;
const char B23 = 23;
const char B24 = 24;
const char B25 = 25;
const char B26 = 26;
const char B27 = 27;
const char B28 = 28;
const char B29 = 29;
const char B30 = 30;
const char B31 = 31;

const unsigned long __FLASH_SIZE = 0x00004000;
const unsigned long _FLASH_ERASE = 1024;
const unsigned long _FLASH_WRITE_LATCH = 4;


// Interrupt Vector Table Constants

const IVT_INT_NMI                = 2;
const IVT_INT_HardFault          = 3;
const IVT_INT_RESERVED1          = 4;
const IVT_INT_RESERVED2          = 5;
const IVT_INT_RESERVED3          = 6;
const IVT_INT_RESERVED4          = 7;
const IVT_INT_RESERVED5          = 8;
const IVT_INT_RESERVED6          = 9;
const IVT_INT_RESERVED7          = 10;
const IVT_INT_SVCall             = 11;
const IVT_INT_RESERVED8          = 12;
const IVT_INT_RESERVED9          = 13;
const IVT_INT_PendSV             = 14;
const IVT_INT_SysTick            = 15;
const IVT_INT_WWDG               = 16;
const IVT_INT_PVD                = 17;
const IVT_INT_RTC_TAMP           = 18;
const IVT_INT_FLASH              = 19;
const IVT_INT_RCC                = 20;
const IVT_INT_EXTI0_1            = 21;
const IVT_INT_EXTI2_3            = 22;
const IVT_INT_EXTI4_15           = 23;
const IVT_INT_UCPD1_UCPD2        = 24;
const IVT_INT_DMA_Channel1       = 25;
const IVT_INT_DMA_Channel2_3     = 26;
const IVT_INT_DMA_Channel4_5_6_7_DMAMUX = 27;
const IVT_INT_ADC_COMP           = 28;
const IVT_INT_TIM1_BRK_UP_TRG_COM = 29;
const IVT_INT_TIM1_CC            = 30;
const IVT_INT_TIM2               = 31;
const IVT_INT_TIM3               = 32;
const IVT_INT_TIM6_DAC_LPTIM1    = 33;
const IVT_INT_TIM7_LPTIM2        = 34;
const IVT_INT_TIM14              = 35;
const IVT_INT_TIM15              = 36;
const IVT_INT_TIM16              = 37;
const IVT_INT_TIM17              = 38;
const IVT_INT_I2C1               = 39;
const IVT_INT_I2C2               = 40;
const IVT_INT_SPI1               = 41;
const IVT_INT_SPI2               = 42;
const IVT_INT_USART1             = 43;
const IVT_INT_USART2             = 44;
const IVT_INT_USART3_USART4_LPUART1 = 45;
const IVT_INT_CEC                = 46;
const IVT_INT_AES_RNG            = 47;


// Working space registers
rx unsigned long R0  absolute 0x0000;
rx unsigned long R1  absolute 0x0004;
rx unsigned long R2  absolute 0x0008;
rx unsigned long R3  absolute 0x000C;
rx unsigned long R4  absolute 0x0010;
rx unsigned long R5  absolute 0x0014;
rx unsigned long R6  absolute 0x0018;
rx unsigned long R7  absolute 0x001C;
rx unsigned long R8  absolute 0x0020;
rx unsigned long R9  absolute 0x0024;
rx unsigned long R10 absolute 0x0028;
rx unsigned long R11 absolute 0x002C;
rx unsigned long R12 absolute 0x0030;
rx unsigned long R13 absolute 0x0034;
rx unsigned long R14 absolute 0x0038;
rx unsigned long R15 absolute 0x003C;

rx unsigned long SP  absolute 0x0034;
rx unsigned long LR  absolute 0x0038;
rx unsigned long PC  absolute 0x003C;

const unsigned short ICS_AUTO                  =     0;
const unsigned short ICS_OFF                   =     3;

// Special function registers (SFRs)
sfr unsigned long   volatile IWDG_KR              absolute 0x40003000;
    const register unsigned short int KEY0 = 0;
    sbit  KEY0_bit at IWDG_KR.B0;
    const register unsigned short int KEY1 = 1;
    sbit  KEY1_bit at IWDG_KR.B1;
    const register unsigned short int KEY2 = 2;
    sbit  KEY2_bit at IWDG_KR.B2;
    const register unsigned short int KEY3 = 3;
    sbit  KEY3_bit at IWDG_KR.B3;
    const register unsigned short int KEY4 = 4;
    sbit  KEY4_bit at IWDG_KR.B4;
    const register unsigned short int KEY5 = 5;
    sbit  KEY5_bit at IWDG_KR.B5;
    const register unsigned short int KEY6 = 6;
    sbit  KEY6_bit at IWDG_KR.B6;
    const register unsigned short int KEY7 = 7;
    sbit  KEY7_bit at IWDG_KR.B7;
    const register unsigned short int KEY8 = 8;
    sbit  KEY8_bit at IWDG_KR.B8;
    const register unsigned short int KEY9 = 9;
    sbit  KEY9_bit at IWDG_KR.B9;
    const register unsigned short int KEY10 = 10;
    sbit  KEY10_bit at IWDG_KR.B10;
    const register unsigned short int KEY11 = 11;
    sbit  KEY11_bit at IWDG_KR.B11;
    const register unsigned short int KEY12 = 12;
    sbit  KEY12_bit at IWDG_KR.B12;
    const register unsigned short int KEY13 = 13;
    sbit  KEY13_bit at IWDG_KR.B13;
    const register unsigned short int KEY14 = 14;
    sbit  KEY14_bit at IWDG_KR.B14;
    const register unsigned short int KEY15 = 15;
    sbit  KEY15_bit at IWDG_KR.B15;

sfr unsigned long   volatile IWDG_PR              absolute 0x40003004;
    const register unsigned short int PR0 = 0;
    sbit  PR0_bit at IWDG_PR.B0;
    const register unsigned short int PR1 = 1;
    sbit  PR1_bit at IWDG_PR.B1;
    const register unsigned short int PR2 = 2;
    sbit  PR2_bit at IWDG_PR.B2;

sfr unsigned long   volatile IWDG_RLR             absolute 0x40003008;
    const register unsigned short int RL0 = 0;
    sbit  RL0_bit at IWDG_RLR.B0;
    const register unsigned short int RL1 = 1;
    sbit  RL1_bit at IWDG_RLR.B1;
    const register unsigned short int RL2 = 2;
    sbit  RL2_bit at IWDG_RLR.B2;
    const register unsigned short int RL3 = 3;
    sbit  RL3_bit at IWDG_RLR.B3;
    const register unsigned short int RL4 = 4;
    sbit  RL4_bit at IWDG_RLR.B4;
    const register unsigned short int RL5 = 5;
    sbit  RL5_bit at IWDG_RLR.B5;
    const register unsigned short int RL6 = 6;
    sbit  RL6_bit at IWDG_RLR.B6;
    const register unsigned short int RL7 = 7;
    sbit  RL7_bit at IWDG_RLR.B7;
    const register unsigned short int RL8 = 8;
    sbit  RL8_bit at IWDG_RLR.B8;
    const register unsigned short int RL9 = 9;
    sbit  RL9_bit at IWDG_RLR.B9;
    const register unsigned short int RL10 = 10;
    sbit  RL10_bit at IWDG_RLR.B10;
    const register unsigned short int RL11 = 11;
    sbit  RL11_bit at IWDG_RLR.B11;

sfr unsigned long   volatile IWDG_SR              absolute 0x4000300C;
    const register unsigned short int WVU = 2;
    sbit  WVU_bit at IWDG_SR.B2;
    const register unsigned short int RVU = 1;
    sbit  RVU_bit at IWDG_SR.B1;
    const register unsigned short int PVU = 0;
    sbit  PVU_bit at IWDG_SR.B0;

sfr unsigned long   volatile IWDG_WINR            absolute 0x40003010;
    const register unsigned short int WIN0 = 0;
    sbit  WIN0_bit at IWDG_WINR.B0;
    const register unsigned short int WIN1 = 1;
    sbit  WIN1_bit at IWDG_WINR.B1;
    const register unsigned short int WIN2 = 2;
    sbit  WIN2_bit at IWDG_WINR.B2;
    const register unsigned short int WIN3 = 3;
    sbit  WIN3_bit at IWDG_WINR.B3;
    const register unsigned short int WIN4 = 4;
    sbit  WIN4_bit at IWDG_WINR.B4;
    const register unsigned short int WIN5 = 5;
    sbit  WIN5_bit at IWDG_WINR.B5;
    const register unsigned short int WIN6 = 6;
    sbit  WIN6_bit at IWDG_WINR.B6;
    const register unsigned short int WIN7 = 7;
    sbit  WIN7_bit at IWDG_WINR.B7;
    const register unsigned short int WIN8 = 8;
    sbit  WIN8_bit at IWDG_WINR.B8;
    const register unsigned short int WIN9 = 9;
    sbit  WIN9_bit at IWDG_WINR.B9;
    const register unsigned short int WIN10 = 10;
    sbit  WIN10_bit at IWDG_WINR.B10;
    const register unsigned short int WIN11 = 11;
    sbit  WIN11_bit at IWDG_WINR.B11;

sfr unsigned long   volatile WWDG_CR              absolute 0x40002C00;
    const register unsigned short int WDGA = 7;
    sbit  WDGA_bit at WWDG_CR.B7;
    const register unsigned short int T0 = 0;
    sbit  T0_bit at WWDG_CR.B0;
    const register unsigned short int T1 = 1;
    sbit  T1_bit at WWDG_CR.B1;
    const register unsigned short int T2 = 2;
    sbit  T2_bit at WWDG_CR.B2;
    const register unsigned short int T3 = 3;
    sbit  T3_bit at WWDG_CR.B3;
    const register unsigned short int T4 = 4;
    sbit  T4_bit at WWDG_CR.B4;
    const register unsigned short int T5 = 5;
    sbit  T5_bit at WWDG_CR.B5;
    const register unsigned short int T6 = 6;
    sbit  T6_bit at WWDG_CR.B6;

sfr unsigned long   volatile WWDG_CFR             absolute 0x40002C04;
    const register unsigned short int WDGTB0 = 11;
    sbit  WDGTB0_bit at WWDG_CFR.B11;
    const register unsigned short int WDGTB1 = 12;
    sbit  WDGTB1_bit at WWDG_CFR.B12;
    const register unsigned short int WDGTB2 = 13;
    sbit  WDGTB2_bit at WWDG_CFR.B13;
    const register unsigned short int EWI = 9;
    sbit  EWI_bit at WWDG_CFR.B9;
    const register unsigned short int W0 = 0;
    sbit  W0_bit at WWDG_CFR.B0;
    const register unsigned short int W1 = 1;
    sbit  W1_bit at WWDG_CFR.B1;
    const register unsigned short int W2 = 2;
    sbit  W2_bit at WWDG_CFR.B2;
    const register unsigned short int W3 = 3;
    sbit  W3_bit at WWDG_CFR.B3;
    const register unsigned short int W4 = 4;
    sbit  W4_bit at WWDG_CFR.B4;
    const register unsigned short int W5 = 5;
    sbit  W5_bit at WWDG_CFR.B5;
    const register unsigned short int W6 = 6;
    sbit  W6_bit at WWDG_CFR.B6;

sfr unsigned long   volatile WWDG_SR              absolute 0x40002C08;
    const register unsigned short int EWIF = 0;
    sbit  EWIF_bit at WWDG_SR.B0;

sfr unsigned long   volatile FLASH_ACR            absolute 0x40022000;
    const register unsigned short int LATENCY0 = 0;
    sbit  LATENCY0_bit at FLASH_ACR.B0;
    const register unsigned short int LATENCY1 = 1;
    sbit  LATENCY1_bit at FLASH_ACR.B1;
    const register unsigned short int LATENCY2 = 2;
    sbit  LATENCY2_bit at FLASH_ACR.B2;
    const register unsigned short int PRFTEN = 8;
    sbit  PRFTEN_bit at FLASH_ACR.B8;
    const register unsigned short int ICEN = 9;
    sbit  ICEN_bit at FLASH_ACR.B9;
    const register unsigned short int ICRST = 11;
    sbit  ICRST_bit at FLASH_ACR.B11;
    const register unsigned short int EMPTY_ = 16;
    sbit  EMPTY_bit at FLASH_ACR.B16;
    const register unsigned short int DBG_SWEN = 18;
    sbit  DBG_SWEN_bit at FLASH_ACR.B18;

sfr unsigned long   volatile FLASH_KEYR           absolute 0x40022008;
    const register unsigned short int KEYR0 = 0;
    sbit  KEYR0_bit at FLASH_KEYR.B0;
    const register unsigned short int KEYR1 = 1;
    sbit  KEYR1_bit at FLASH_KEYR.B1;
    const register unsigned short int KEYR2 = 2;
    sbit  KEYR2_bit at FLASH_KEYR.B2;
    const register unsigned short int KEYR3 = 3;
    sbit  KEYR3_bit at FLASH_KEYR.B3;
    const register unsigned short int KEYR4 = 4;
    sbit  KEYR4_bit at FLASH_KEYR.B4;
    const register unsigned short int KEYR5 = 5;
    sbit  KEYR5_bit at FLASH_KEYR.B5;
    const register unsigned short int KEYR6 = 6;
    sbit  KEYR6_bit at FLASH_KEYR.B6;
    const register unsigned short int KEYR7 = 7;
    sbit  KEYR7_bit at FLASH_KEYR.B7;
    const register unsigned short int KEYR8 = 8;
    sbit  KEYR8_bit at FLASH_KEYR.B8;
    const register unsigned short int KEYR9 = 9;
    sbit  KEYR9_bit at FLASH_KEYR.B9;
    const register unsigned short int KEYR10 = 10;
    sbit  KEYR10_bit at FLASH_KEYR.B10;
    const register unsigned short int KEYR11 = 11;
    sbit  KEYR11_bit at FLASH_KEYR.B11;
    const register unsigned short int KEYR12 = 12;
    sbit  KEYR12_bit at FLASH_KEYR.B12;
    const register unsigned short int KEYR13 = 13;
    sbit  KEYR13_bit at FLASH_KEYR.B13;
    const register unsigned short int KEYR14 = 14;
    sbit  KEYR14_bit at FLASH_KEYR.B14;
    const register unsigned short int KEYR15 = 15;
    sbit  KEYR15_bit at FLASH_KEYR.B15;
    const register unsigned short int KEYR16 = 16;
    sbit  KEYR16_bit at FLASH_KEYR.B16;
    const register unsigned short int KEYR17 = 17;
    sbit  KEYR17_bit at FLASH_KEYR.B17;
    const register unsigned short int KEYR18 = 18;
    sbit  KEYR18_bit at FLASH_KEYR.B18;
    const register unsigned short int KEYR19 = 19;
    sbit  KEYR19_bit at FLASH_KEYR.B19;
    const register unsigned short int KEYR20 = 20;
    sbit  KEYR20_bit at FLASH_KEYR.B20;
    const register unsigned short int KEYR21 = 21;
    sbit  KEYR21_bit at FLASH_KEYR.B21;
    const register unsigned short int KEYR22 = 22;
    sbit  KEYR22_bit at FLASH_KEYR.B22;
    const register unsigned short int KEYR23 = 23;
    sbit  KEYR23_bit at FLASH_KEYR.B23;
    const register unsigned short int KEYR24 = 24;
    sbit  KEYR24_bit at FLASH_KEYR.B24;
    const register unsigned short int KEYR25 = 25;
    sbit  KEYR25_bit at FLASH_KEYR.B25;
    const register unsigned short int KEYR26 = 26;
    sbit  KEYR26_bit at FLASH_KEYR.B26;
    const register unsigned short int KEYR27 = 27;
    sbit  KEYR27_bit at FLASH_KEYR.B27;
    const register unsigned short int KEYR28 = 28;
    sbit  KEYR28_bit at FLASH_KEYR.B28;
    const register unsigned short int KEYR29 = 29;
    sbit  KEYR29_bit at FLASH_KEYR.B29;
    const register unsigned short int KEYR30 = 30;
    sbit  KEYR30_bit at FLASH_KEYR.B30;
    const register unsigned short int KEYR31 = 31;
    sbit  KEYR31_bit at FLASH_KEYR.B31;

sfr unsigned long   volatile FLASH_OPTKEYR        absolute 0x4002200C;
    const register unsigned short int OPTKEYR0 = 0;
    sbit  OPTKEYR0_bit at FLASH_OPTKEYR.B0;
    const register unsigned short int OPTKEYR1 = 1;
    sbit  OPTKEYR1_bit at FLASH_OPTKEYR.B1;
    const register unsigned short int OPTKEYR2 = 2;
    sbit  OPTKEYR2_bit at FLASH_OPTKEYR.B2;
    const register unsigned short int OPTKEYR3 = 3;
    sbit  OPTKEYR3_bit at FLASH_OPTKEYR.B3;
    const register unsigned short int OPTKEYR4 = 4;
    sbit  OPTKEYR4_bit at FLASH_OPTKEYR.B4;
    const register unsigned short int OPTKEYR5 = 5;
    sbit  OPTKEYR5_bit at FLASH_OPTKEYR.B5;
    const register unsigned short int OPTKEYR6 = 6;
    sbit  OPTKEYR6_bit at FLASH_OPTKEYR.B6;
    const register unsigned short int OPTKEYR7 = 7;
    sbit  OPTKEYR7_bit at FLASH_OPTKEYR.B7;
    const register unsigned short int OPTKEYR8 = 8;
    sbit  OPTKEYR8_bit at FLASH_OPTKEYR.B8;
    const register unsigned short int OPTKEYR9 = 9;
    sbit  OPTKEYR9_bit at FLASH_OPTKEYR.B9;
    const register unsigned short int OPTKEYR10 = 10;
    sbit  OPTKEYR10_bit at FLASH_OPTKEYR.B10;
    const register unsigned short int OPTKEYR11 = 11;
    sbit  OPTKEYR11_bit at FLASH_OPTKEYR.B11;
    const register unsigned short int OPTKEYR12 = 12;
    sbit  OPTKEYR12_bit at FLASH_OPTKEYR.B12;
    const register unsigned short int OPTKEYR13 = 13;
    sbit  OPTKEYR13_bit at FLASH_OPTKEYR.B13;
    const register unsigned short int OPTKEYR14 = 14;
    sbit  OPTKEYR14_bit at FLASH_OPTKEYR.B14;
    const register unsigned short int OPTKEYR15 = 15;
    sbit  OPTKEYR15_bit at FLASH_OPTKEYR.B15;
    const register unsigned short int OPTKEYR16 = 16;
    sbit  OPTKEYR16_bit at FLASH_OPTKEYR.B16;
    const register unsigned short int OPTKEYR17 = 17;
    sbit  OPTKEYR17_bit at FLASH_OPTKEYR.B17;
    const register unsigned short int OPTKEYR18 = 18;
    sbit  OPTKEYR18_bit at FLASH_OPTKEYR.B18;
    const register unsigned short int OPTKEYR19 = 19;
    sbit  OPTKEYR19_bit at FLASH_OPTKEYR.B19;
    const register unsigned short int OPTKEYR20 = 20;
    sbit  OPTKEYR20_bit at FLASH_OPTKEYR.B20;
    const register unsigned short int OPTKEYR21 = 21;
    sbit  OPTKEYR21_bit at FLASH_OPTKEYR.B21;
    const register unsigned short int OPTKEYR22 = 22;
    sbit  OPTKEYR22_bit at FLASH_OPTKEYR.B22;
    const register unsigned short int OPTKEYR23 = 23;
    sbit  OPTKEYR23_bit at FLASH_OPTKEYR.B23;
    const register unsigned short int OPTKEYR24 = 24;
    sbit  OPTKEYR24_bit at FLASH_OPTKEYR.B24;
    const register unsigned short int OPTKEYR25 = 25;
    sbit  OPTKEYR25_bit at FLASH_OPTKEYR.B25;
    const register unsigned short int OPTKEYR26 = 26;
    sbit  OPTKEYR26_bit at FLASH_OPTKEYR.B26;
    const register unsigned short int OPTKEYR27 = 27;
    sbit  OPTKEYR27_bit at FLASH_OPTKEYR.B27;
    const register unsigned short int OPTKEYR28 = 28;
    sbit  OPTKEYR28_bit at FLASH_OPTKEYR.B28;
    const register unsigned short int OPTKEYR29 = 29;
    sbit  OPTKEYR29_bit at FLASH_OPTKEYR.B29;
    const register unsigned short int OPTKEYR30 = 30;
    sbit  OPTKEYR30_bit at FLASH_OPTKEYR.B30;
    const register unsigned short int OPTKEYR31 = 31;
    sbit  OPTKEYR31_bit at FLASH_OPTKEYR.B31;

sfr unsigned long   volatile FLASH_SR             absolute 0x40022010;
    const register unsigned short int EOP = 0;
    sbit  EOP_bit at FLASH_SR.B0;
    const register unsigned short int OPERR = 1;
    sbit  OPERR_bit at FLASH_SR.B1;
    const register unsigned short int PROGERR = 3;
    sbit  PROGERR_bit at FLASH_SR.B3;
    const register unsigned short int WRPERR = 4;
    sbit  WRPERR_bit at FLASH_SR.B4;
    const register unsigned short int PGAERR = 5;
    sbit  PGAERR_bit at FLASH_SR.B5;
    const register unsigned short int SIZERR = 6;
    sbit  SIZERR_bit at FLASH_SR.B6;
    const register unsigned short int PGSERR = 7;
    sbit  PGSERR_bit at FLASH_SR.B7;
    const register unsigned short int MISERR = 8;
    sbit  MISERR_bit at FLASH_SR.B8;
    const register unsigned short int FASTERR = 9;
    sbit  FASTERR_bit at FLASH_SR.B9;
    const register unsigned short int RDERR = 14;
    sbit  RDERR_bit at FLASH_SR.B14;
    const register unsigned short int OPTVERR = 15;
    sbit  OPTVERR_bit at FLASH_SR.B15;
    const register unsigned short int BSY = 16;
    sbit  BSY_bit at FLASH_SR.B16;
    const register unsigned short int CFGBSY = 18;
    sbit  CFGBSY_bit at FLASH_SR.B18;

sfr unsigned long   volatile FLASH_CR             absolute 0x40022014;
    const register unsigned short int PG = 0;
    sbit  PG_bit at FLASH_CR.B0;
    const register unsigned short int PER = 1;
    sbit  PER_bit at FLASH_CR.B1;
    const register unsigned short int MER = 2;
    sbit  MER_bit at FLASH_CR.B2;
    const register unsigned short int PNB0 = 3;
    sbit  PNB0_bit at FLASH_CR.B3;
    const register unsigned short int PNB1 = 4;
    sbit  PNB1_bit at FLASH_CR.B4;
    const register unsigned short int PNB2 = 5;
    sbit  PNB2_bit at FLASH_CR.B5;
    const register unsigned short int PNB3 = 6;
    sbit  PNB3_bit at FLASH_CR.B6;
    const register unsigned short int PNB4 = 7;
    sbit  PNB4_bit at FLASH_CR.B7;
    const register unsigned short int PNB5 = 8;
    sbit  PNB5_bit at FLASH_CR.B8;
    const register unsigned short int STRT = 16;
    sbit  STRT_bit at FLASH_CR.B16;
    const register unsigned short int OPTSTRT = 17;
    sbit  OPTSTRT_bit at FLASH_CR.B17;
    const register unsigned short int FSTPG = 18;
    sbit  FSTPG_bit at FLASH_CR.B18;
    const register unsigned short int EOPIE = 24;
    sbit  EOPIE_bit at FLASH_CR.B24;
    const register unsigned short int ERRIE = 25;
    sbit  ERRIE_bit at FLASH_CR.B25;
    const register unsigned short int RDERRIE = 26;
    sbit  RDERRIE_bit at FLASH_CR.B26;
    const register unsigned short int OBL_LAUNCH = 27;
    sbit  OBL_LAUNCH_bit at FLASH_CR.B27;
    const register unsigned short int SEC_PROT = 28;
    sbit  SEC_PROT_bit at FLASH_CR.B28;
    const register unsigned short int OPTLOCK = 30;
    sbit  OPTLOCK_bit at FLASH_CR.B30;
    const register unsigned short int LOCK_ = 31;
    sbit  LOCK_bit at FLASH_CR.B31;

sfr unsigned long   volatile FLASH_ECCR           absolute 0x40022018;
    const register unsigned short int ADDR_ECC0 = 0;
    sbit  ADDR_ECC0_bit at FLASH_ECCR.B0;
    const register unsigned short int ADDR_ECC1 = 1;
    sbit  ADDR_ECC1_bit at FLASH_ECCR.B1;
    const register unsigned short int ADDR_ECC2 = 2;
    sbit  ADDR_ECC2_bit at FLASH_ECCR.B2;
    const register unsigned short int ADDR_ECC3 = 3;
    sbit  ADDR_ECC3_bit at FLASH_ECCR.B3;
    const register unsigned short int ADDR_ECC4 = 4;
    sbit  ADDR_ECC4_bit at FLASH_ECCR.B4;
    const register unsigned short int ADDR_ECC5 = 5;
    sbit  ADDR_ECC5_bit at FLASH_ECCR.B5;
    const register unsigned short int ADDR_ECC6 = 6;
    sbit  ADDR_ECC6_bit at FLASH_ECCR.B6;
    const register unsigned short int ADDR_ECC7 = 7;
    sbit  ADDR_ECC7_bit at FLASH_ECCR.B7;
    const register unsigned short int ADDR_ECC8 = 8;
    sbit  ADDR_ECC8_bit at FLASH_ECCR.B8;
    const register unsigned short int ADDR_ECC9 = 9;
    sbit  ADDR_ECC9_bit at FLASH_ECCR.B9;
    const register unsigned short int ADDR_ECC10 = 10;
    sbit  ADDR_ECC10_bit at FLASH_ECCR.B10;
    const register unsigned short int ADDR_ECC11 = 11;
    sbit  ADDR_ECC11_bit at FLASH_ECCR.B11;
    const register unsigned short int ADDR_ECC12 = 12;
    sbit  ADDR_ECC12_bit at FLASH_ECCR.B12;
    const register unsigned short int ADDR_ECC13 = 13;
    sbit  ADDR_ECC13_bit at FLASH_ECCR.B13;
    const register unsigned short int SYSF_ECC = 20;
    sbit  SYSF_ECC_bit at FLASH_ECCR.B20;
    const register unsigned short int ECCIE = 24;
    sbit  ECCIE_bit at FLASH_ECCR.B24;
    const register unsigned short int ECCC = 30;
    sbit  ECCC_bit at FLASH_ECCR.B30;
    const register unsigned short int ECCD = 31;
    sbit  ECCD_bit at FLASH_ECCR.B31;

sfr unsigned long   volatile FLASH_OPTR           absolute 0x40022020;
    const register unsigned short int RDP0 = 0;
    sbit  RDP0_bit at FLASH_OPTR.B0;
    const register unsigned short int RDP1 = 1;
    sbit  RDP1_bit at FLASH_OPTR.B1;
    const register unsigned short int RDP2 = 2;
    sbit  RDP2_bit at FLASH_OPTR.B2;
    const register unsigned short int RDP3 = 3;
    sbit  RDP3_bit at FLASH_OPTR.B3;
    const register unsigned short int RDP4 = 4;
    sbit  RDP4_bit at FLASH_OPTR.B4;
    const register unsigned short int RDP5 = 5;
    sbit  RDP5_bit at FLASH_OPTR.B5;
    const register unsigned short int RDP6 = 6;
    sbit  RDP6_bit at FLASH_OPTR.B6;
    const register unsigned short int RDP7 = 7;
    sbit  RDP7_bit at FLASH_OPTR.B7;
    const register unsigned short int BOREN = 8;
    sbit  BOREN_bit at FLASH_OPTR.B8;
    const register unsigned short int BORF_LEV0 = 9;
    sbit  BORF_LEV0_bit at FLASH_OPTR.B9;
    const register unsigned short int BORF_LEV1 = 10;
    sbit  BORF_LEV1_bit at FLASH_OPTR.B10;
    const register unsigned short int BORR_LEV0 = 11;
    sbit  BORR_LEV0_bit at FLASH_OPTR.B11;
    const register unsigned short int BORR_LEV1 = 12;
    sbit  BORR_LEV1_bit at FLASH_OPTR.B12;
    const register unsigned short int nRST_STOP = 13;
    sbit  nRST_STOP_bit at FLASH_OPTR.B13;
    const register unsigned short int nRST_STDBY = 14;
    sbit  nRST_STDBY_bit at FLASH_OPTR.B14;
    const register unsigned short int nRSTS_HDW = 15;
    sbit  nRSTS_HDW_bit at FLASH_OPTR.B15;
    const register unsigned short int IDWG_SW = 16;
    sbit  IDWG_SW_bit at FLASH_OPTR.B16;
    const register unsigned short int IWDG_STOP = 17;
    sbit  IWDG_STOP_bit at FLASH_OPTR.B17;
    const register unsigned short int IWDG_STDBY = 18;
    sbit  IWDG_STDBY_bit at FLASH_OPTR.B18;
    const register unsigned short int WWDG_SW = 19;
    sbit  WWDG_SW_bit at FLASH_OPTR.B19;
    const register unsigned short int RAM_PARITY_CHECK = 22;
    sbit  RAM_PARITY_CHECK_bit at FLASH_OPTR.B22;
    const register unsigned short int nBOOT_SEL = 24;
    sbit  nBOOT_SEL_bit at FLASH_OPTR.B24;
    const register unsigned short int nBOOT1 = 25;
    sbit  nBOOT1_bit at FLASH_OPTR.B25;
    const register unsigned short int nBOOT0 = 26;
    sbit  nBOOT0_bit at FLASH_OPTR.B26;
    const register unsigned short int NRST_MODE0 = 27;
    sbit  NRST_MODE0_bit at FLASH_OPTR.B27;
    const register unsigned short int NRST_MODE1 = 28;
    sbit  NRST_MODE1_bit at FLASH_OPTR.B28;
    const register unsigned short int IRHEN = 29;
    sbit  IRHEN_bit at FLASH_OPTR.B29;

sfr unsigned long   volatile FLASH_PCROP1ASR      absolute 0x40022024;
    const register unsigned short int PCROP1A_STRT0 = 0;
    sbit  PCROP1A_STRT0_bit at FLASH_PCROP1ASR.B0;
    const register unsigned short int PCROP1A_STRT1 = 1;
    sbit  PCROP1A_STRT1_bit at FLASH_PCROP1ASR.B1;
    const register unsigned short int PCROP1A_STRT2 = 2;
    sbit  PCROP1A_STRT2_bit at FLASH_PCROP1ASR.B2;
    const register unsigned short int PCROP1A_STRT3 = 3;
    sbit  PCROP1A_STRT3_bit at FLASH_PCROP1ASR.B3;
    const register unsigned short int PCROP1A_STRT4 = 4;
    sbit  PCROP1A_STRT4_bit at FLASH_PCROP1ASR.B4;
    const register unsigned short int PCROP1A_STRT5 = 5;
    sbit  PCROP1A_STRT5_bit at FLASH_PCROP1ASR.B5;
    const register unsigned short int PCROP1A_STRT6 = 6;
    sbit  PCROP1A_STRT6_bit at FLASH_PCROP1ASR.B6;
    const register unsigned short int PCROP1A_STRT7 = 7;
    sbit  PCROP1A_STRT7_bit at FLASH_PCROP1ASR.B7;

sfr unsigned long   volatile FLASH_PCROP1AER      absolute 0x40022028;
    const register unsigned short int PCROP1A_END0 = 0;
    sbit  PCROP1A_END0_bit at FLASH_PCROP1AER.B0;
    const register unsigned short int PCROP1A_END1 = 1;
    sbit  PCROP1A_END1_bit at FLASH_PCROP1AER.B1;
    const register unsigned short int PCROP1A_END2 = 2;
    sbit  PCROP1A_END2_bit at FLASH_PCROP1AER.B2;
    const register unsigned short int PCROP1A_END3 = 3;
    sbit  PCROP1A_END3_bit at FLASH_PCROP1AER.B3;
    const register unsigned short int PCROP1A_END4 = 4;
    sbit  PCROP1A_END4_bit at FLASH_PCROP1AER.B4;
    const register unsigned short int PCROP1A_END5 = 5;
    sbit  PCROP1A_END5_bit at FLASH_PCROP1AER.B5;
    const register unsigned short int PCROP1A_END6 = 6;
    sbit  PCROP1A_END6_bit at FLASH_PCROP1AER.B6;
    const register unsigned short int PCROP1A_END7 = 7;
    sbit  PCROP1A_END7_bit at FLASH_PCROP1AER.B7;
    const register unsigned short int PCROP_RDP = 31;
    sbit  PCROP_RDP_bit at FLASH_PCROP1AER.B31;

sfr unsigned long   volatile FLASH_WRP1AR         absolute 0x4002202C;
    const register unsigned short int WRP1A_STRT0 = 0;
    sbit  WRP1A_STRT0_bit at FLASH_WRP1AR.B0;
    const register unsigned short int WRP1A_STRT1 = 1;
    sbit  WRP1A_STRT1_bit at FLASH_WRP1AR.B1;
    const register unsigned short int WRP1A_STRT2 = 2;
    sbit  WRP1A_STRT2_bit at FLASH_WRP1AR.B2;
    const register unsigned short int WRP1A_STRT3 = 3;
    sbit  WRP1A_STRT3_bit at FLASH_WRP1AR.B3;
    const register unsigned short int WRP1A_STRT4 = 4;
    sbit  WRP1A_STRT4_bit at FLASH_WRP1AR.B4;
    const register unsigned short int WRP1A_STRT5 = 5;
    sbit  WRP1A_STRT5_bit at FLASH_WRP1AR.B5;
    const register unsigned short int WRP1A_END0 = 16;
    sbit  WRP1A_END0_bit at FLASH_WRP1AR.B16;
    const register unsigned short int WRP1A_END1 = 17;
    sbit  WRP1A_END1_bit at FLASH_WRP1AR.B17;
    const register unsigned short int WRP1A_END2 = 18;
    sbit  WRP1A_END2_bit at FLASH_WRP1AR.B18;
    const register unsigned short int WRP1A_END3 = 19;
    sbit  WRP1A_END3_bit at FLASH_WRP1AR.B19;
    const register unsigned short int WRP1A_END4 = 20;
    sbit  WRP1A_END4_bit at FLASH_WRP1AR.B20;
    const register unsigned short int WRP1A_END5 = 21;
    sbit  WRP1A_END5_bit at FLASH_WRP1AR.B21;

sfr unsigned long   volatile FLASH_WRP1BR         absolute 0x40022030;
    const register unsigned short int WRP1B_STRT0 = 0;
    sbit  WRP1B_STRT0_bit at FLASH_WRP1BR.B0;
    const register unsigned short int WRP1B_STRT1 = 1;
    sbit  WRP1B_STRT1_bit at FLASH_WRP1BR.B1;
    const register unsigned short int WRP1B_STRT2 = 2;
    sbit  WRP1B_STRT2_bit at FLASH_WRP1BR.B2;
    const register unsigned short int WRP1B_STRT3 = 3;
    sbit  WRP1B_STRT3_bit at FLASH_WRP1BR.B3;
    const register unsigned short int WRP1B_STRT4 = 4;
    sbit  WRP1B_STRT4_bit at FLASH_WRP1BR.B4;
    const register unsigned short int WRP1B_STRT5 = 5;
    sbit  WRP1B_STRT5_bit at FLASH_WRP1BR.B5;
    const register unsigned short int WRP1B_END0 = 16;
    sbit  WRP1B_END0_bit at FLASH_WRP1BR.B16;
    const register unsigned short int WRP1B_END1 = 17;
    sbit  WRP1B_END1_bit at FLASH_WRP1BR.B17;
    const register unsigned short int WRP1B_END2 = 18;
    sbit  WRP1B_END2_bit at FLASH_WRP1BR.B18;
    const register unsigned short int WRP1B_END3 = 19;
    sbit  WRP1B_END3_bit at FLASH_WRP1BR.B19;
    const register unsigned short int WRP1B_END4 = 20;
    sbit  WRP1B_END4_bit at FLASH_WRP1BR.B20;
    const register unsigned short int WRP1B_END5 = 21;
    sbit  WRP1B_END5_bit at FLASH_WRP1BR.B21;

sfr unsigned long   volatile FLASH_PCROP1BSR      absolute 0x40022034;
    const register unsigned short int PCROP1B_STRT0 = 0;
    sbit  PCROP1B_STRT0_bit at FLASH_PCROP1BSR.B0;
    const register unsigned short int PCROP1B_STRT1 = 1;
    sbit  PCROP1B_STRT1_bit at FLASH_PCROP1BSR.B1;
    const register unsigned short int PCROP1B_STRT2 = 2;
    sbit  PCROP1B_STRT2_bit at FLASH_PCROP1BSR.B2;
    const register unsigned short int PCROP1B_STRT3 = 3;
    sbit  PCROP1B_STRT3_bit at FLASH_PCROP1BSR.B3;
    const register unsigned short int PCROP1B_STRT4 = 4;
    sbit  PCROP1B_STRT4_bit at FLASH_PCROP1BSR.B4;
    const register unsigned short int PCROP1B_STRT5 = 5;
    sbit  PCROP1B_STRT5_bit at FLASH_PCROP1BSR.B5;
    const register unsigned short int PCROP1B_STRT6 = 6;
    sbit  PCROP1B_STRT6_bit at FLASH_PCROP1BSR.B6;
    const register unsigned short int PCROP1B_STRT7 = 7;
    sbit  PCROP1B_STRT7_bit at FLASH_PCROP1BSR.B7;

sfr unsigned long   volatile FLASH_PCROP1BER      absolute 0x40022038;
    const register unsigned short int PCROP1B_END0 = 0;
    sbit  PCROP1B_END0_bit at FLASH_PCROP1BER.B0;
    const register unsigned short int PCROP1B_END1 = 1;
    sbit  PCROP1B_END1_bit at FLASH_PCROP1BER.B1;
    const register unsigned short int PCROP1B_END2 = 2;
    sbit  PCROP1B_END2_bit at FLASH_PCROP1BER.B2;
    const register unsigned short int PCROP1B_END3 = 3;
    sbit  PCROP1B_END3_bit at FLASH_PCROP1BER.B3;
    const register unsigned short int PCROP1B_END4 = 4;
    sbit  PCROP1B_END4_bit at FLASH_PCROP1BER.B4;
    const register unsigned short int PCROP1B_END5 = 5;
    sbit  PCROP1B_END5_bit at FLASH_PCROP1BER.B5;
    const register unsigned short int PCROP1B_END6 = 6;
    sbit  PCROP1B_END6_bit at FLASH_PCROP1BER.B6;
    const register unsigned short int PCROP1B_END7 = 7;
    sbit  PCROP1B_END7_bit at FLASH_PCROP1BER.B7;

sfr unsigned long   volatile FLASH_SECR           absolute 0x40022080;
    const register unsigned short int SEC_SIZE0 = 0;
    sbit  SEC_SIZE0_bit at FLASH_SECR.B0;
    const register unsigned short int SEC_SIZE1 = 1;
    sbit  SEC_SIZE1_bit at FLASH_SECR.B1;
    const register unsigned short int SEC_SIZE2 = 2;
    sbit  SEC_SIZE2_bit at FLASH_SECR.B2;
    const register unsigned short int SEC_SIZE3 = 3;
    sbit  SEC_SIZE3_bit at FLASH_SECR.B3;
    const register unsigned short int SEC_SIZE4 = 4;
    sbit  SEC_SIZE4_bit at FLASH_SECR.B4;
    const register unsigned short int SEC_SIZE5 = 5;
    sbit  SEC_SIZE5_bit at FLASH_SECR.B5;
    const register unsigned short int SEC_SIZE6 = 6;
    sbit  SEC_SIZE6_bit at FLASH_SECR.B6;
    const register unsigned short int BOOT_LOCK = 16;
    sbit  BOOT_LOCK_bit at FLASH_SECR.B16;

sfr unsigned long   volatile RCC_CR               absolute 0x40021000;
    const register unsigned short int HSION = 8;
    sbit  HSION_bit at RCC_CR.B8;
    const register unsigned short int HSIKERON = 9;
    sbit  HSIKERON_bit at RCC_CR.B9;
    const register unsigned short int HSIRDY = 10;
    sbit  HSIRDY_bit at RCC_CR.B10;
    const register unsigned short int HSIDIV0 = 11;
    sbit  HSIDIV0_bit at RCC_CR.B11;
    const register unsigned short int HSIDIV1 = 12;
    sbit  HSIDIV1_bit at RCC_CR.B12;
    const register unsigned short int HSIDIV2 = 13;
    sbit  HSIDIV2_bit at RCC_CR.B13;
    const register unsigned short int HSEON = 16;
    sbit  HSEON_bit at RCC_CR.B16;
    const register unsigned short int HSERDY = 17;
    sbit  HSERDY_bit at RCC_CR.B17;
    const register unsigned short int HSEBYP = 18;
    sbit  HSEBYP_bit at RCC_CR.B18;
    const register unsigned short int CSSON = 19;
    sbit  CSSON_bit at RCC_CR.B19;
    const register unsigned short int PLLON = 24;
    sbit  PLLON_bit at RCC_CR.B24;
    const register unsigned short int PLLRDY = 25;
    sbit  PLLRDY_bit at RCC_CR.B25;

sfr unsigned long   volatile RCC_ICSCR            absolute 0x40021004;
    const register unsigned short int HSICAL0 = 0;
    sbit  HSICAL0_bit at RCC_ICSCR.B0;
    const register unsigned short int HSICAL1 = 1;
    sbit  HSICAL1_bit at RCC_ICSCR.B1;
    const register unsigned short int HSICAL2 = 2;
    sbit  HSICAL2_bit at RCC_ICSCR.B2;
    const register unsigned short int HSICAL3 = 3;
    sbit  HSICAL3_bit at RCC_ICSCR.B3;
    const register unsigned short int HSICAL4 = 4;
    sbit  HSICAL4_bit at RCC_ICSCR.B4;
    const register unsigned short int HSICAL5 = 5;
    sbit  HSICAL5_bit at RCC_ICSCR.B5;
    const register unsigned short int HSICAL6 = 6;
    sbit  HSICAL6_bit at RCC_ICSCR.B6;
    const register unsigned short int HSICAL7 = 7;
    sbit  HSICAL7_bit at RCC_ICSCR.B7;
    const register unsigned short int HSITRIM0 = 8;
    sbit  HSITRIM0_bit at RCC_ICSCR.B8;
    const register unsigned short int HSITRIM1 = 9;
    sbit  HSITRIM1_bit at RCC_ICSCR.B9;
    const register unsigned short int HSITRIM2 = 10;
    sbit  HSITRIM2_bit at RCC_ICSCR.B10;
    const register unsigned short int HSITRIM3 = 11;
    sbit  HSITRIM3_bit at RCC_ICSCR.B11;
    const register unsigned short int HSITRIM4 = 12;
    sbit  HSITRIM4_bit at RCC_ICSCR.B12;
    const register unsigned short int HSITRIM5 = 13;
    sbit  HSITRIM5_bit at RCC_ICSCR.B13;
    const register unsigned short int HSITRIM6 = 14;
    sbit  HSITRIM6_bit at RCC_ICSCR.B14;

sfr unsigned long   volatile RCC_CFGR             absolute 0x40021008;
    const register unsigned short int MCOPRE0 = 28;
    sbit  MCOPRE0_bit at RCC_CFGR.B28;
    const register unsigned short int MCOPRE1 = 29;
    sbit  MCOPRE1_bit at RCC_CFGR.B29;
    const register unsigned short int MCOPRE2 = 30;
    sbit  MCOPRE2_bit at RCC_CFGR.B30;
    const register unsigned short int MCOSEL0 = 24;
    sbit  MCOSEL0_bit at RCC_CFGR.B24;
    const register unsigned short int MCOSEL1 = 25;
    sbit  MCOSEL1_bit at RCC_CFGR.B25;
    const register unsigned short int MCOSEL2 = 26;
    sbit  MCOSEL2_bit at RCC_CFGR.B26;
    const register unsigned short int PPRE0 = 12;
    sbit  PPRE0_bit at RCC_CFGR.B12;
    const register unsigned short int PPRE1 = 13;
    sbit  PPRE1_bit at RCC_CFGR.B13;
    const register unsigned short int PPRE2 = 14;
    sbit  PPRE2_bit at RCC_CFGR.B14;
    const register unsigned short int HPRE0 = 8;
    sbit  HPRE0_bit at RCC_CFGR.B8;
    const register unsigned short int HPRE1 = 9;
    sbit  HPRE1_bit at RCC_CFGR.B9;
    const register unsigned short int HPRE2 = 10;
    sbit  HPRE2_bit at RCC_CFGR.B10;
    const register unsigned short int HPRE3 = 11;
    sbit  HPRE3_bit at RCC_CFGR.B11;
    const register unsigned short int SWS0 = 3;
    sbit  SWS0_bit at RCC_CFGR.B3;
    const register unsigned short int SWS1 = 4;
    sbit  SWS1_bit at RCC_CFGR.B4;
    const register unsigned short int SWS2 = 5;
    sbit  SWS2_bit at RCC_CFGR.B5;
    const register unsigned short int SW0 = 0;
    sbit  SW0_bit at RCC_CFGR.B0;
    const register unsigned short int SW1 = 1;
    sbit  SW1_bit at RCC_CFGR.B1;
    const register unsigned short int SW2 = 2;
    sbit  SW2_bit at RCC_CFGR.B2;

sfr unsigned long   volatile RCC_PLLSYSCFGR       absolute 0x4002100C;
    const register unsigned short int PLLSRC0 = 0;
    sbit  PLLSRC0_bit at RCC_PLLSYSCFGR.B0;
    const register unsigned short int PLLSRC1 = 1;
    sbit  PLLSRC1_bit at RCC_PLLSYSCFGR.B1;
    const register unsigned short int PLLM0 = 4;
    sbit  PLLM0_bit at RCC_PLLSYSCFGR.B4;
    const register unsigned short int PLLM1 = 5;
    sbit  PLLM1_bit at RCC_PLLSYSCFGR.B5;
    const register unsigned short int PLLM2 = 6;
    sbit  PLLM2_bit at RCC_PLLSYSCFGR.B6;
    const register unsigned short int PLLN0 = 8;
    sbit  PLLN0_bit at RCC_PLLSYSCFGR.B8;
    const register unsigned short int PLLN1 = 9;
    sbit  PLLN1_bit at RCC_PLLSYSCFGR.B9;
    const register unsigned short int PLLN2 = 10;
    sbit  PLLN2_bit at RCC_PLLSYSCFGR.B10;
    const register unsigned short int PLLN3 = 11;
    sbit  PLLN3_bit at RCC_PLLSYSCFGR.B11;
    const register unsigned short int PLLN4 = 12;
    sbit  PLLN4_bit at RCC_PLLSYSCFGR.B12;
    const register unsigned short int PLLN5 = 13;
    sbit  PLLN5_bit at RCC_PLLSYSCFGR.B13;
    const register unsigned short int PLLN6 = 14;
    sbit  PLLN6_bit at RCC_PLLSYSCFGR.B14;
    const register unsigned short int PLLPEN = 16;
    sbit  PLLPEN_bit at RCC_PLLSYSCFGR.B16;
    const register unsigned short int PLLP0 = 17;
    sbit  PLLP0_bit at RCC_PLLSYSCFGR.B17;
    const register unsigned short int PLLP1 = 18;
    sbit  PLLP1_bit at RCC_PLLSYSCFGR.B18;
    const register unsigned short int PLLP2 = 19;
    sbit  PLLP2_bit at RCC_PLLSYSCFGR.B19;
    const register unsigned short int PLLP3 = 20;
    sbit  PLLP3_bit at RCC_PLLSYSCFGR.B20;
    const register unsigned short int PLLP4 = 21;
    sbit  PLLP4_bit at RCC_PLLSYSCFGR.B21;
    const register unsigned short int PLLQEN = 24;
    sbit  PLLQEN_bit at RCC_PLLSYSCFGR.B24;
    const register unsigned short int PLLQ0 = 25;
    sbit  PLLQ0_bit at RCC_PLLSYSCFGR.B25;
    const register unsigned short int PLLQ1 = 26;
    sbit  PLLQ1_bit at RCC_PLLSYSCFGR.B26;
    const register unsigned short int PLLQ2 = 27;
    sbit  PLLQ2_bit at RCC_PLLSYSCFGR.B27;
    const register unsigned short int PLLREN = 28;
    sbit  PLLREN_bit at RCC_PLLSYSCFGR.B28;
    const register unsigned short int PLLR0 = 29;
    sbit  PLLR0_bit at RCC_PLLSYSCFGR.B29;
    const register unsigned short int PLLR1 = 30;
    sbit  PLLR1_bit at RCC_PLLSYSCFGR.B30;
    const register unsigned short int PLLR2 = 31;
    sbit  PLLR2_bit at RCC_PLLSYSCFGR.B31;

sfr unsigned long   volatile RCC_CIER             absolute 0x40021018;
    const register unsigned short int LSIRDYIE = 0;
    sbit  LSIRDYIE_bit at RCC_CIER.B0;
    const register unsigned short int LSERDYIE = 1;
    sbit  LSERDYIE_bit at RCC_CIER.B1;
    const register unsigned short int HSIRDYIE = 3;
    sbit  HSIRDYIE_bit at RCC_CIER.B3;
    const register unsigned short int HSERDYIE = 4;
    sbit  HSERDYIE_bit at RCC_CIER.B4;
    const register unsigned short int PLLSYSRDYIE = 5;
    sbit  PLLSYSRDYIE_bit at RCC_CIER.B5;

sfr unsigned long   volatile RCC_CIFR             absolute 0x4002101C;
    const register unsigned short int LSIRDYF = 0;
    sbit  LSIRDYF_bit at RCC_CIFR.B0;
    const register unsigned short int LSERDYF = 1;
    sbit  LSERDYF_bit at RCC_CIFR.B1;
    const register unsigned short int HSIRDYF = 3;
    sbit  HSIRDYF_bit at RCC_CIFR.B3;
    const register unsigned short int HSERDYF = 4;
    sbit  HSERDYF_bit at RCC_CIFR.B4;
    const register unsigned short int PLLSYSRDYF = 5;
    sbit  PLLSYSRDYF_bit at RCC_CIFR.B5;
    const register unsigned short int CSSF = 8;
    sbit  CSSF_bit at RCC_CIFR.B8;
    const register unsigned short int LSECSSF = 9;
    sbit  LSECSSF_bit at RCC_CIFR.B9;

sfr unsigned long   volatile RCC_CICR             absolute 0x40021020;
    const register unsigned short int LSIRDYC = 0;
    sbit  LSIRDYC_bit at RCC_CICR.B0;
    const register unsigned short int LSERDYC = 1;
    sbit  LSERDYC_bit at RCC_CICR.B1;
    const register unsigned short int HSIRDYC = 3;
    sbit  HSIRDYC_bit at RCC_CICR.B3;
    const register unsigned short int HSERDYC = 4;
    sbit  HSERDYC_bit at RCC_CICR.B4;
    const register unsigned short int PLLSYSRDYC = 5;
    sbit  PLLSYSRDYC_bit at RCC_CICR.B5;
    const register unsigned short int CSSC = 8;
    sbit  CSSC_bit at RCC_CICR.B8;
    const register unsigned short int LSECSSC = 9;
    sbit  LSECSSC_bit at RCC_CICR.B9;

sfr unsigned long   volatile RCC_AHBRSTR          absolute 0x40021028;
    const register unsigned short int DMARST = 0;
    sbit  DMARST_bit at RCC_AHBRSTR.B0;
    const register unsigned short int FLASHRST = 8;
    sbit  FLASHRST_bit at RCC_AHBRSTR.B8;
    const register unsigned short int CRCRST = 12;
    sbit  CRCRST_bit at RCC_AHBRSTR.B12;
    const register unsigned short int AESRST = 16;
    sbit  AESRST_bit at RCC_AHBRSTR.B16;
    const register unsigned short int RNGRST = 18;
    sbit  RNGRST_bit at RCC_AHBRSTR.B18;

sfr unsigned long   volatile RCC_IOPRSTR          absolute 0x40021024;
    const register unsigned short int IOPARST = 0;
    sbit  IOPARST_bit at RCC_IOPRSTR.B0;
    const register unsigned short int IOPBRST = 1;
    sbit  IOPBRST_bit at RCC_IOPRSTR.B1;
    const register unsigned short int IOPCRST = 2;
    sbit  IOPCRST_bit at RCC_IOPRSTR.B2;
    const register unsigned short int IOPDRST = 3;
    sbit  IOPDRST_bit at RCC_IOPRSTR.B3;
    const register unsigned short int IOPFRST = 5;
    sbit  IOPFRST_bit at RCC_IOPRSTR.B5;

sfr unsigned long   volatile RCC_APBRSTR1         absolute 0x4002102C;
    const register unsigned short int TIM2RST = 0;
    sbit  TIM2RST_bit at RCC_APBRSTR1.B0;
    const register unsigned short int TIM3RST = 1;
    sbit  TIM3RST_bit at RCC_APBRSTR1.B1;
    const register unsigned short int SPI2RST = 14;
    sbit  SPI2RST_bit at RCC_APBRSTR1.B14;
    const register unsigned short int USART2RST = 17;
    sbit  USART2RST_bit at RCC_APBRSTR1.B17;
    const register unsigned short int LPUART1RST = 20;
    sbit  LPUART1RST_bit at RCC_APBRSTR1.B20;
    const register unsigned short int I2C1RST = 21;
    sbit  I2C1RST_bit at RCC_APBRSTR1.B21;
    const register unsigned short int I2C2RST = 22;
    sbit  I2C2RST_bit at RCC_APBRSTR1.B22;
    const register unsigned short int DBGRST = 27;
    sbit  DBGRST_bit at RCC_APBRSTR1.B27;
    const register unsigned short int PWRRST = 28;
    sbit  PWRRST_bit at RCC_APBRSTR1.B28;
    const register unsigned short int LPTIM2RST = 30;
    sbit  LPTIM2RST_bit at RCC_APBRSTR1.B30;
    const register unsigned short int LPTIM1RST = 31;
    sbit  LPTIM1RST_bit at RCC_APBRSTR1.B31;

sfr unsigned long   volatile RCC_APBRSTR2         absolute 0x40021030;
    const register unsigned short int SYSCFGRST = 0;
    sbit  SYSCFGRST_bit at RCC_APBRSTR2.B0;
    const register unsigned short int TIM1RST = 11;
    sbit  TIM1RST_bit at RCC_APBRSTR2.B11;
    const register unsigned short int SPI1RST = 12;
    sbit  SPI1RST_bit at RCC_APBRSTR2.B12;
    const register unsigned short int USART1RST = 14;
    sbit  USART1RST_bit at RCC_APBRSTR2.B14;
    const register unsigned short int TIM14RST = 15;
    sbit  TIM14RST_bit at RCC_APBRSTR2.B15;
    const register unsigned short int TIM16RST = 17;
    sbit  TIM16RST_bit at RCC_APBRSTR2.B17;
    const register unsigned short int TIM17RST = 18;
    sbit  TIM17RST_bit at RCC_APBRSTR2.B18;
    const register unsigned short int ADCRST = 20;
    sbit  ADCRST_bit at RCC_APBRSTR2.B20;

sfr unsigned long   volatile RCC_IOPENR           absolute 0x40021034;
    const register unsigned short int IOPAEN = 0;
    sbit  IOPAEN_bit at RCC_IOPENR.B0;
    const register unsigned short int IOPBEN = 1;
    sbit  IOPBEN_bit at RCC_IOPENR.B1;
    const register unsigned short int IOPCEN = 2;
    sbit  IOPCEN_bit at RCC_IOPENR.B2;
    const register unsigned short int IOPDEN = 3;
    sbit  IOPDEN_bit at RCC_IOPENR.B3;
    const register unsigned short int IOPFEN = 5;
    sbit  IOPFEN_bit at RCC_IOPENR.B5;

sfr unsigned long   volatile RCC_AHBENR           absolute 0x40021038;
    const register unsigned short int DMAEN = 0;
    sbit  DMAEN_bit at RCC_AHBENR.B0;
    const register unsigned short int FLASHEN = 8;
    sbit  FLASHEN_bit at RCC_AHBENR.B8;
    const register unsigned short int CRCEN = 12;
    sbit  CRCEN_bit at RCC_AHBENR.B12;
    const register unsigned short int AESEN = 16;
    sbit  AESEN_bit at RCC_AHBENR.B16;
    const register unsigned short int RNGEN = 18;
    sbit  RNGEN_bit at RCC_AHBENR.B18;

sfr unsigned long   volatile RCC_APBENR1          absolute 0x4002103C;
    const register unsigned short int TIM2EN = 0;
    sbit  TIM2EN_bit at RCC_APBENR1.B0;
    const register unsigned short int TIM3EN = 1;
    sbit  TIM3EN_bit at RCC_APBENR1.B1;
    const register unsigned short int RTCAPBEN = 10;
    sbit  RTCAPBEN_bit at RCC_APBENR1.B10;
    const register unsigned short int WWDGEN = 11;
    sbit  WWDGEN_bit at RCC_APBENR1.B11;
    const register unsigned short int SPI2EN = 14;
    sbit  SPI2EN_bit at RCC_APBENR1.B14;
    const register unsigned short int USART2EN = 17;
    sbit  USART2EN_bit at RCC_APBENR1.B17;
    const register unsigned short int LPUART1EN = 20;
    sbit  LPUART1EN_bit at RCC_APBENR1.B20;
    const register unsigned short int I2C1EN = 21;
    sbit  I2C1EN_bit at RCC_APBENR1.B21;
    const register unsigned short int I2C2EN = 22;
    sbit  I2C2EN_bit at RCC_APBENR1.B22;
    const register unsigned short int DBGEN = 27;
    sbit  DBGEN_bit at RCC_APBENR1.B27;
    const register unsigned short int PWREN = 28;
    sbit  PWREN_bit at RCC_APBENR1.B28;
    const register unsigned short int LPTIM2EN = 30;
    sbit  LPTIM2EN_bit at RCC_APBENR1.B30;
    const register unsigned short int LPTIM1EN = 31;
    sbit  LPTIM1EN_bit at RCC_APBENR1.B31;

sfr unsigned long   volatile RCC_APBENR2          absolute 0x40021040;
    const register unsigned short int SYSCFGEN = 0;
    sbit  SYSCFGEN_bit at RCC_APBENR2.B0;
    const register unsigned short int TIM1EN = 11;
    sbit  TIM1EN_bit at RCC_APBENR2.B11;
    const register unsigned short int SPI1EN = 12;
    sbit  SPI1EN_bit at RCC_APBENR2.B12;
    const register unsigned short int USART1EN = 14;
    sbit  USART1EN_bit at RCC_APBENR2.B14;
    const register unsigned short int TIM14EN = 15;
    sbit  TIM14EN_bit at RCC_APBENR2.B15;
    const register unsigned short int TIM16EN = 17;
    sbit  TIM16EN_bit at RCC_APBENR2.B17;
    const register unsigned short int TIM17EN = 18;
    sbit  TIM17EN_bit at RCC_APBENR2.B18;
    const register unsigned short int ADCEN = 20;
    sbit  ADCEN_bit at RCC_APBENR2.B20;

sfr unsigned long   volatile RCC_IOPSMENR         absolute 0x40021044;
    const register unsigned short int IOPASMEN = 0;
    sbit  IOPASMEN_bit at RCC_IOPSMENR.B0;
    const register unsigned short int IOPBSMEN = 1;
    sbit  IOPBSMEN_bit at RCC_IOPSMENR.B1;
    const register unsigned short int IOPCSMEN = 2;
    sbit  IOPCSMEN_bit at RCC_IOPSMENR.B2;
    const register unsigned short int IOPDSMEN = 3;
    sbit  IOPDSMEN_bit at RCC_IOPSMENR.B3;
    const register unsigned short int IOPFSMEN = 5;
    sbit  IOPFSMEN_bit at RCC_IOPSMENR.B5;

sfr unsigned long   volatile RCC_AHBSMENR         absolute 0x40021048;
    const register unsigned short int DMASMEN = 0;
    sbit  DMASMEN_bit at RCC_AHBSMENR.B0;
    const register unsigned short int FLASHSMEN = 8;
    sbit  FLASHSMEN_bit at RCC_AHBSMENR.B8;
    const register unsigned short int SRAMSMEN = 9;
    sbit  SRAMSMEN_bit at RCC_AHBSMENR.B9;
    const register unsigned short int CRCSMEN = 12;
    sbit  CRCSMEN_bit at RCC_AHBSMENR.B12;
    const register unsigned short int AESSMEN = 16;
    sbit  AESSMEN_bit at RCC_AHBSMENR.B16;
    const register unsigned short int RNGSMEN = 18;
    sbit  RNGSMEN_bit at RCC_AHBSMENR.B18;

sfr unsigned long   volatile RCC_APBSMENR1        absolute 0x4002104C;
    const register unsigned short int TIM2SMEN = 0;
    sbit  TIM2SMEN_bit at RCC_APBSMENR1.B0;
    const register unsigned short int TIM3SMEN = 1;
    sbit  TIM3SMEN_bit at RCC_APBSMENR1.B1;
    const register unsigned short int RTCAPBSMEN = 10;
    sbit  RTCAPBSMEN_bit at RCC_APBSMENR1.B10;
    const register unsigned short int WWDGSMEN = 11;
    sbit  WWDGSMEN_bit at RCC_APBSMENR1.B11;
    const register unsigned short int SPI2SMEN = 14;
    sbit  SPI2SMEN_bit at RCC_APBSMENR1.B14;
    const register unsigned short int USART2SMEN = 17;
    sbit  USART2SMEN_bit at RCC_APBSMENR1.B17;
    const register unsigned short int LPUART1SMEN = 20;
    sbit  LPUART1SMEN_bit at RCC_APBSMENR1.B20;
    const register unsigned short int I2C1SMEN = 21;
    sbit  I2C1SMEN_bit at RCC_APBSMENR1.B21;
    const register unsigned short int I2C2SMEN = 22;
    sbit  I2C2SMEN_bit at RCC_APBSMENR1.B22;
    const register unsigned short int DBGSMEN = 27;
    sbit  DBGSMEN_bit at RCC_APBSMENR1.B27;
    const register unsigned short int PWRSMEN = 28;
    sbit  PWRSMEN_bit at RCC_APBSMENR1.B28;
    const register unsigned short int LPTIM2SMEN = 30;
    sbit  LPTIM2SMEN_bit at RCC_APBSMENR1.B30;
    const register unsigned short int LPTIM1SMEN = 31;
    sbit  LPTIM1SMEN_bit at RCC_APBSMENR1.B31;

sfr unsigned long   volatile RCC_APBSMENR2        absolute 0x40021050;
    const register unsigned short int SYSCFGSMEN = 0;
    sbit  SYSCFGSMEN_bit at RCC_APBSMENR2.B0;
    const register unsigned short int TIM1SMEN = 11;
    sbit  TIM1SMEN_bit at RCC_APBSMENR2.B11;
    const register unsigned short int SPI1SMEN = 12;
    sbit  SPI1SMEN_bit at RCC_APBSMENR2.B12;
    const register unsigned short int USART1SMEN = 14;
    sbit  USART1SMEN_bit at RCC_APBSMENR2.B14;
    const register unsigned short int TIM14SMEN = 15;
    sbit  TIM14SMEN_bit at RCC_APBSMENR2.B15;
    const register unsigned short int TIM16SMEN = 17;
    sbit  TIM16SMEN_bit at RCC_APBSMENR2.B17;
    const register unsigned short int TIM17SMEN = 18;
    sbit  TIM17SMEN_bit at RCC_APBSMENR2.B18;
    const register unsigned short int ADCSMEN = 20;
    sbit  ADCSMEN_bit at RCC_APBSMENR2.B20;

sfr unsigned long   volatile RCC_CCIPR            absolute 0x40021054;
    const register unsigned short int USART1SEL0 = 0;
    sbit  USART1SEL0_bit at RCC_CCIPR.B0;
    const register unsigned short int USART1SEL1 = 1;
    sbit  USART1SEL1_bit at RCC_CCIPR.B1;
    const register unsigned short int LPUART1SEL0 = 10;
    sbit  LPUART1SEL0_bit at RCC_CCIPR.B10;
    const register unsigned short int LPUART1SEL1 = 11;
    sbit  LPUART1SEL1_bit at RCC_CCIPR.B11;
    const register unsigned short int I2C1SEL0 = 12;
    sbit  I2C1SEL0_bit at RCC_CCIPR.B12;
    const register unsigned short int I2C1SEL1 = 13;
    sbit  I2C1SEL1_bit at RCC_CCIPR.B13;
    const register unsigned short int I2S2SEL0 = 14;
    sbit  I2S2SEL0_bit at RCC_CCIPR.B14;
    const register unsigned short int I2S2SEL1 = 15;
    sbit  I2S2SEL1_bit at RCC_CCIPR.B15;
    const register unsigned short int LPTIM1SEL0 = 18;
    sbit  LPTIM1SEL0_bit at RCC_CCIPR.B18;
    const register unsigned short int LPTIM1SEL1 = 19;
    sbit  LPTIM1SEL1_bit at RCC_CCIPR.B19;
    const register unsigned short int LPTIM2SEL0 = 20;
    sbit  LPTIM2SEL0_bit at RCC_CCIPR.B20;
    const register unsigned short int LPTIM2SEL1 = 21;
    sbit  LPTIM2SEL1_bit at RCC_CCIPR.B21;
    const register unsigned short int TIM1SEL = 22;
    sbit  TIM1SEL_bit at RCC_CCIPR.B22;
    const register unsigned short int RNGSEL0 = 26;
    sbit  RNGSEL0_bit at RCC_CCIPR.B26;
    const register unsigned short int RNGSEL1 = 27;
    sbit  RNGSEL1_bit at RCC_CCIPR.B27;
    const register unsigned short int RNGDIV0 = 28;
    sbit  RNGDIV0_bit at RCC_CCIPR.B28;
    const register unsigned short int RNGDIV1 = 29;
    sbit  RNGDIV1_bit at RCC_CCIPR.B29;
    const register unsigned short int ADCSEL0 = 30;
    sbit  ADCSEL0_bit at RCC_CCIPR.B30;
    const register unsigned short int ADCSEL1 = 31;
    sbit  ADCSEL1_bit at RCC_CCIPR.B31;

sfr unsigned long   volatile RCC_BDCR             absolute 0x4002105C;
    const register unsigned short int LSEON = 0;
    sbit  LSEON_bit at RCC_BDCR.B0;
    const register unsigned short int LSERDY = 1;
    sbit  LSERDY_bit at RCC_BDCR.B1;
    const register unsigned short int LSEBYP = 2;
    sbit  LSEBYP_bit at RCC_BDCR.B2;
    const register unsigned short int LSEDRV0 = 3;
    sbit  LSEDRV0_bit at RCC_BDCR.B3;
    const register unsigned short int LSEDRV1 = 4;
    sbit  LSEDRV1_bit at RCC_BDCR.B4;
    const register unsigned short int LSECSSON = 5;
    sbit  LSECSSON_bit at RCC_BDCR.B5;
    const register unsigned short int LSECSSD = 6;
    sbit  LSECSSD_bit at RCC_BDCR.B6;
    const register unsigned short int RTCSEL0 = 8;
    sbit  RTCSEL0_bit at RCC_BDCR.B8;
    const register unsigned short int RTCSEL1 = 9;
    sbit  RTCSEL1_bit at RCC_BDCR.B9;
    const register unsigned short int RTCEN = 15;
    sbit  RTCEN_bit at RCC_BDCR.B15;
    const register unsigned short int BDRST = 16;
    sbit  BDRST_bit at RCC_BDCR.B16;
    const register unsigned short int LSCOEN = 24;
    sbit  LSCOEN_bit at RCC_BDCR.B24;
    const register unsigned short int LSCOSEL = 25;
    sbit  LSCOSEL_bit at RCC_BDCR.B25;

sfr unsigned long   volatile RCC_CSR              absolute 0x40021060;
    const register unsigned short int LSION = 0;
    sbit  LSION_bit at RCC_CSR.B0;
    const register unsigned short int LSIRDY = 1;
    sbit  LSIRDY_bit at RCC_CSR.B1;
    const register unsigned short int RMVF = 23;
    sbit  RMVF_bit at RCC_CSR.B23;
    const register unsigned short int OBLRSTF = 25;
    sbit  OBLRSTF_bit at RCC_CSR.B25;
    const register unsigned short int PINRSTF = 26;
    sbit  PINRSTF_bit at RCC_CSR.B26;
    const register unsigned short int PWRRSTF = 27;
    sbit  PWRRSTF_bit at RCC_CSR.B27;
    const register unsigned short int SFTRSTF = 28;
    sbit  SFTRSTF_bit at RCC_CSR.B28;
    const register unsigned short int IWDGRSTF = 29;
    sbit  IWDGRSTF_bit at RCC_CSR.B29;
    const register unsigned short int WWDGRSTF = 30;
    sbit  WWDGRSTF_bit at RCC_CSR.B30;
    const register unsigned short int LPWRRSTF = 31;
    sbit  LPWRRSTF_bit at RCC_CSR.B31;

sfr unsigned long   volatile PWR_CR1              absolute 0x40007000;
    const register unsigned short int LPR = 14;
    sbit  LPR_bit at PWR_CR1.B14;
    const register unsigned short int VOS0 = 9;
    sbit  VOS0_bit at PWR_CR1.B9;
    const register unsigned short int VOS1 = 10;
    sbit  VOS1_bit at PWR_CR1.B10;
    const register unsigned short int DBP = 8;
    sbit  DBP_bit at PWR_CR1.B8;
    const register unsigned short int FPD_LPSLP = 5;
    sbit  FPD_LPSLP_bit at PWR_CR1.B5;
    const register unsigned short int FPD_LPRUN = 4;
    sbit  FPD_LPRUN_bit at PWR_CR1.B4;
    const register unsigned short int FPD_STOP = 3;
    sbit  FPD_STOP_bit at PWR_CR1.B3;
    const register unsigned short int LPMS0 = 0;
    sbit  LPMS0_bit at PWR_CR1.B0;
    const register unsigned short int LPMS1 = 1;
    sbit  LPMS1_bit at PWR_CR1.B1;
    const register unsigned short int LPMS2 = 2;
    sbit  LPMS2_bit at PWR_CR1.B2;

sfr unsigned long   volatile PWR_CR2              absolute 0x40007004;
    const register unsigned short int PVDE = 0;
    sbit  PVDE_bit at PWR_CR2.B0;
    const register unsigned short int PVDFT0 = 1;
    sbit  PVDFT0_bit at PWR_CR2.B1;
    const register unsigned short int PVDFT1 = 2;
    sbit  PVDFT1_bit at PWR_CR2.B2;
    const register unsigned short int PVDFT2 = 3;
    sbit  PVDFT2_bit at PWR_CR2.B3;
    const register unsigned short int PVDRT0 = 4;
    sbit  PVDRT0_bit at PWR_CR2.B4;
    const register unsigned short int PVDRT1 = 5;
    sbit  PVDRT1_bit at PWR_CR2.B5;
    const register unsigned short int PVDRT2 = 6;
    sbit  PVDRT2_bit at PWR_CR2.B6;

sfr unsigned long   volatile PWR_CR3              absolute 0x40007008;
    const register unsigned short int EWUP1 = 0;
    sbit  EWUP1_bit at PWR_CR3.B0;
    const register unsigned short int EWUP2 = 1;
    sbit  EWUP2_bit at PWR_CR3.B1;
    const register unsigned short int EWUP4 = 3;
    sbit  EWUP4_bit at PWR_CR3.B3;
    const register unsigned short int EWUP5 = 4;
    sbit  EWUP5_bit at PWR_CR3.B4;
    const register unsigned short int EWUP6 = 5;
    sbit  EWUP6_bit at PWR_CR3.B5;
    const register unsigned short int RRS = 8;
    sbit  RRS_bit at PWR_CR3.B8;
    const register unsigned short int ULPEN = 9;
    sbit  ULPEN_bit at PWR_CR3.B9;
    const register unsigned short int APC = 10;
    sbit  APC_bit at PWR_CR3.B10;
    const register unsigned short int EIWUL = 15;
    sbit  EIWUL_bit at PWR_CR3.B15;

sfr unsigned long   volatile PWR_CR4              absolute 0x4000700C;
    const register unsigned short int WP1 = 0;
    sbit  WP1_bit at PWR_CR4.B0;
    const register unsigned short int WP2 = 1;
    sbit  WP2_bit at PWR_CR4.B1;
    const register unsigned short int WP4 = 3;
    sbit  WP4_bit at PWR_CR4.B3;
    const register unsigned short int WP5 = 4;
    sbit  WP5_bit at PWR_CR4.B4;
    const register unsigned short int WP6 = 5;
    sbit  WP6_bit at PWR_CR4.B5;
    const register unsigned short int VBE = 8;
    sbit  VBE_bit at PWR_CR4.B8;
    const register unsigned short int VBRS = 9;
    sbit  VBRS_bit at PWR_CR4.B9;

sfr unsigned long   volatile PWR_SR1              absolute 0x40007010;
    const register unsigned short int WUF1 = 0;
    sbit  WUF1_bit at PWR_SR1.B0;
    const register unsigned short int WUF2 = 1;
    sbit  WUF2_bit at PWR_SR1.B1;
    const register unsigned short int WUF4 = 3;
    sbit  WUF4_bit at PWR_SR1.B3;
    const register unsigned short int WUF5 = 4;
    sbit  WUF5_bit at PWR_SR1.B4;
    const register unsigned short int WUF6 = 5;
    sbit  WUF6_bit at PWR_SR1.B5;
    const register unsigned short int SBF = 8;
    sbit  SBF_bit at PWR_SR1.B8;
    const register unsigned short int WUFI = 15;
    sbit  WUFI_bit at PWR_SR1.B15;

sfr unsigned long   volatile PWR_SR2              absolute 0x40007014;
    const register unsigned short int PVDO = 11;
    sbit  PVDO_bit at PWR_SR2.B11;
    const register unsigned short int VOSF = 10;
    sbit  VOSF_bit at PWR_SR2.B10;
    const register unsigned short int REGLPF = 9;
    sbit  REGLPF_bit at PWR_SR2.B9;
    const register unsigned short int REGLPS = 8;
    sbit  REGLPS_bit at PWR_SR2.B8;
    const register unsigned short int FLASH_RDY = 7;
    sbit  FLASH_RDY_bit at PWR_SR2.B7;

sfr unsigned long   volatile PWR_SCR              absolute 0x40007018;
    const register unsigned short int CSBF = 8;
    sbit  CSBF_bit at PWR_SCR.B8;
    const register unsigned short int CWUF6 = 5;
    sbit  CWUF6_bit at PWR_SCR.B5;
    const register unsigned short int CWUF5 = 4;
    sbit  CWUF5_bit at PWR_SCR.B4;
    const register unsigned short int CWUF4 = 3;
    sbit  CWUF4_bit at PWR_SCR.B3;
    const register unsigned short int CWUF2 = 1;
    sbit  CWUF2_bit at PWR_SCR.B1;
    const register unsigned short int CWUF1 = 0;
    sbit  CWUF1_bit at PWR_SCR.B0;

sfr unsigned long   volatile PWR_PUCRA            absolute 0x40007020;
    const register unsigned short int PU15 = 15;
    sbit  PU15_bit at PWR_PUCRA.B15;
    const register unsigned short int PU14 = 14;
    sbit  PU14_bit at PWR_PUCRA.B14;
    const register unsigned short int PU13 = 13;
    sbit  PU13_bit at PWR_PUCRA.B13;
    const register unsigned short int PU12 = 12;
    sbit  PU12_bit at PWR_PUCRA.B12;
    const register unsigned short int PU11 = 11;
    sbit  PU11_bit at PWR_PUCRA.B11;
    const register unsigned short int PU10 = 10;
    sbit  PU10_bit at PWR_PUCRA.B10;
    const register unsigned short int PU9 = 9;
    sbit  PU9_bit at PWR_PUCRA.B9;
    const register unsigned short int PU8 = 8;
    sbit  PU8_bit at PWR_PUCRA.B8;
    const register unsigned short int PU7 = 7;
    sbit  PU7_bit at PWR_PUCRA.B7;
    const register unsigned short int PU6 = 6;
    sbit  PU6_bit at PWR_PUCRA.B6;
    const register unsigned short int PU5 = 5;
    sbit  PU5_bit at PWR_PUCRA.B5;
    const register unsigned short int PU4 = 4;
    sbit  PU4_bit at PWR_PUCRA.B4;
    const register unsigned short int PU3 = 3;
    sbit  PU3_bit at PWR_PUCRA.B3;
    const register unsigned short int PU2 = 2;
    sbit  PU2_bit at PWR_PUCRA.B2;
    const register unsigned short int PU1 = 1;
    sbit  PU1_bit at PWR_PUCRA.B1;
    const register unsigned short int PU0 = 0;
    sbit  PU0_bit at PWR_PUCRA.B0;

sfr unsigned long   volatile PWR_PDCRA            absolute 0x40007024;
    const register unsigned short int PD15 = 15;
    sbit  PD15_bit at PWR_PDCRA.B15;
    const register unsigned short int PD14 = 14;
    sbit  PD14_bit at PWR_PDCRA.B14;
    const register unsigned short int PD13 = 13;
    sbit  PD13_bit at PWR_PDCRA.B13;
    const register unsigned short int PD12 = 12;
    sbit  PD12_bit at PWR_PDCRA.B12;
    const register unsigned short int PD11 = 11;
    sbit  PD11_bit at PWR_PDCRA.B11;
    const register unsigned short int PD10 = 10;
    sbit  PD10_bit at PWR_PDCRA.B10;
    const register unsigned short int PD9 = 9;
    sbit  PD9_bit at PWR_PDCRA.B9;
    const register unsigned short int PD8 = 8;
    sbit  PD8_bit at PWR_PDCRA.B8;
    const register unsigned short int PD7 = 7;
    sbit  PD7_bit at PWR_PDCRA.B7;
    const register unsigned short int PD6 = 6;
    sbit  PD6_bit at PWR_PDCRA.B6;
    const register unsigned short int PD5 = 5;
    sbit  PD5_bit at PWR_PDCRA.B5;
    const register unsigned short int PD4 = 4;
    sbit  PD4_bit at PWR_PDCRA.B4;
    const register unsigned short int PD3 = 3;
    sbit  PD3_bit at PWR_PDCRA.B3;
    const register unsigned short int PD2 = 2;
    sbit  PD2_bit at PWR_PDCRA.B2;
    const register unsigned short int PD1 = 1;
    sbit  PD1_bit at PWR_PDCRA.B1;
    const register unsigned short int PD0 = 0;
    sbit  PD0_bit at PWR_PDCRA.B0;

sfr unsigned long   volatile PWR_PUCRB            absolute 0x40007028;
    sbit  PU15_PWR_PUCRB_bit at PWR_PUCRB.B15;
    sbit  PU14_PWR_PUCRB_bit at PWR_PUCRB.B14;
    sbit  PU13_PWR_PUCRB_bit at PWR_PUCRB.B13;
    sbit  PU12_PWR_PUCRB_bit at PWR_PUCRB.B12;
    sbit  PU11_PWR_PUCRB_bit at PWR_PUCRB.B11;
    sbit  PU10_PWR_PUCRB_bit at PWR_PUCRB.B10;
    sbit  PU9_PWR_PUCRB_bit at PWR_PUCRB.B9;
    sbit  PU8_PWR_PUCRB_bit at PWR_PUCRB.B8;
    sbit  PU7_PWR_PUCRB_bit at PWR_PUCRB.B7;
    sbit  PU6_PWR_PUCRB_bit at PWR_PUCRB.B6;
    sbit  PU5_PWR_PUCRB_bit at PWR_PUCRB.B5;
    sbit  PU4_PWR_PUCRB_bit at PWR_PUCRB.B4;
    sbit  PU3_PWR_PUCRB_bit at PWR_PUCRB.B3;
    sbit  PU2_PWR_PUCRB_bit at PWR_PUCRB.B2;
    sbit  PU1_PWR_PUCRB_bit at PWR_PUCRB.B1;
    sbit  PU0_PWR_PUCRB_bit at PWR_PUCRB.B0;

sfr unsigned long   volatile PWR_PDCRB            absolute 0x4000702C;
    sbit  PD15_PWR_PDCRB_bit at PWR_PDCRB.B15;
    sbit  PD14_PWR_PDCRB_bit at PWR_PDCRB.B14;
    sbit  PD13_PWR_PDCRB_bit at PWR_PDCRB.B13;
    sbit  PD12_PWR_PDCRB_bit at PWR_PDCRB.B12;
    sbit  PD11_PWR_PDCRB_bit at PWR_PDCRB.B11;
    sbit  PD10_PWR_PDCRB_bit at PWR_PDCRB.B10;
    sbit  PD9_PWR_PDCRB_bit at PWR_PDCRB.B9;
    sbit  PD8_PWR_PDCRB_bit at PWR_PDCRB.B8;
    sbit  PD7_PWR_PDCRB_bit at PWR_PDCRB.B7;
    sbit  PD6_PWR_PDCRB_bit at PWR_PDCRB.B6;
    sbit  PD5_PWR_PDCRB_bit at PWR_PDCRB.B5;
    sbit  PD4_PWR_PDCRB_bit at PWR_PDCRB.B4;
    sbit  PD3_PWR_PDCRB_bit at PWR_PDCRB.B3;
    sbit  PD2_PWR_PDCRB_bit at PWR_PDCRB.B2;
    sbit  PD1_PWR_PDCRB_bit at PWR_PDCRB.B1;
    sbit  PD0_PWR_PDCRB_bit at PWR_PDCRB.B0;

sfr unsigned long   volatile PWR_PUCRC            absolute 0x40007030;
    sbit  PU15_PWR_PUCRC_bit at PWR_PUCRC.B15;
    sbit  PU14_PWR_PUCRC_bit at PWR_PUCRC.B14;
    sbit  PU13_PWR_PUCRC_bit at PWR_PUCRC.B13;
    sbit  PU7_PWR_PUCRC_bit at PWR_PUCRC.B7;
    sbit  PU6_PWR_PUCRC_bit at PWR_PUCRC.B6;

sfr unsigned long   volatile PWR_PDCRC            absolute 0x40007034;
    sbit  PD15_PWR_PDCRC_bit at PWR_PDCRC.B15;
    sbit  PD14_PWR_PDCRC_bit at PWR_PDCRC.B14;
    sbit  PD13_PWR_PDCRC_bit at PWR_PDCRC.B13;
    sbit  PD12_PWR_PDCRC_bit at PWR_PDCRC.B12;
    sbit  PD11_PWR_PDCRC_bit at PWR_PDCRC.B11;
    sbit  PD10_PWR_PDCRC_bit at PWR_PDCRC.B10;
    sbit  PD9_PWR_PDCRC_bit at PWR_PDCRC.B9;
    sbit  PD8_PWR_PDCRC_bit at PWR_PDCRC.B8;
    sbit  PD7_PWR_PDCRC_bit at PWR_PDCRC.B7;
    sbit  PD6_PWR_PDCRC_bit at PWR_PDCRC.B6;
    sbit  PD5_PWR_PDCRC_bit at PWR_PDCRC.B5;
    sbit  PD4_PWR_PDCRC_bit at PWR_PDCRC.B4;
    sbit  PD3_PWR_PDCRC_bit at PWR_PDCRC.B3;
    sbit  PD2_PWR_PDCRC_bit at PWR_PDCRC.B2;
    sbit  PD1_PWR_PDCRC_bit at PWR_PDCRC.B1;
    sbit  PD0_PWR_PDCRC_bit at PWR_PDCRC.B0;

sfr unsigned long   volatile PWR_PUCRD            absolute 0x40007038;
    sbit  PU3_PWR_PUCRD_bit at PWR_PUCRD.B3;
    sbit  PU2_PWR_PUCRD_bit at PWR_PUCRD.B2;
    sbit  PU1_PWR_PUCRD_bit at PWR_PUCRD.B1;
    sbit  PU0_PWR_PUCRD_bit at PWR_PUCRD.B0;

sfr unsigned long   volatile PWR_PDCRD            absolute 0x4000703C;
    sbit  PD9_PWR_PDCRD_bit at PWR_PDCRD.B9;
    sbit  PD8_PWR_PDCRD_bit at PWR_PDCRD.B8;
    sbit  PD6_PWR_PDCRD_bit at PWR_PDCRD.B6;
    sbit  PD5_PWR_PDCRD_bit at PWR_PDCRD.B5;
    sbit  PD4_PWR_PDCRD_bit at PWR_PDCRD.B4;
    sbit  PD3_PWR_PDCRD_bit at PWR_PDCRD.B3;
    sbit  PD2_PWR_PDCRD_bit at PWR_PDCRD.B2;
    sbit  PD1_PWR_PDCRD_bit at PWR_PDCRD.B1;
    sbit  PD0_PWR_PDCRD_bit at PWR_PDCRD.B0;

sfr unsigned long   volatile PWR_PUCRF            absolute 0x40007048;
    sbit  PU2_PWR_PUCRF_bit at PWR_PUCRF.B2;
    sbit  PU1_PWR_PUCRF_bit at PWR_PUCRF.B1;
    sbit  PU0_PWR_PUCRF_bit at PWR_PUCRF.B0;

sfr unsigned long   volatile PWR_PDCRF            absolute 0x4000704C;
    sbit  PD2_PWR_PDCRF_bit at PWR_PDCRF.B2;
    sbit  PD1_PWR_PDCRF_bit at PWR_PDCRF.B1;
    sbit  PD0_PWR_PDCRF_bit at PWR_PDCRF.B0;

sfr unsigned long   volatile DMA_ISR              absolute 0x40020000;
    const register unsigned short int GIF0 = 0;
    sbit  GIF0_bit at DMA_ISR.B0;
    const register unsigned short int TCIF1 = 1;
    sbit  TCIF1_bit at DMA_ISR.B1;
    const register unsigned short int HTIF2 = 2;
    sbit  HTIF2_bit at DMA_ISR.B2;
    const register unsigned short int TEIF3 = 3;
    sbit  TEIF3_bit at DMA_ISR.B3;
    const register unsigned short int GIF4 = 4;
    sbit  GIF4_bit at DMA_ISR.B4;
    const register unsigned short int TCIF5 = 5;
    sbit  TCIF5_bit at DMA_ISR.B5;
    const register unsigned short int HTIF6 = 6;
    sbit  HTIF6_bit at DMA_ISR.B6;
    const register unsigned short int TEIF7 = 7;
    sbit  TEIF7_bit at DMA_ISR.B7;
    const register unsigned short int GIF8 = 8;
    sbit  GIF8_bit at DMA_ISR.B8;
    const register unsigned short int TCIF9 = 9;
    sbit  TCIF9_bit at DMA_ISR.B9;
    const register unsigned short int HTIF10 = 10;
    sbit  HTIF10_bit at DMA_ISR.B10;
    const register unsigned short int TEIF11 = 11;
    sbit  TEIF11_bit at DMA_ISR.B11;
    const register unsigned short int GIF12 = 12;
    sbit  GIF12_bit at DMA_ISR.B12;
    const register unsigned short int TCIF13 = 13;
    sbit  TCIF13_bit at DMA_ISR.B13;
    const register unsigned short int HTIF14 = 14;
    sbit  HTIF14_bit at DMA_ISR.B14;
    const register unsigned short int TEIF15 = 15;
    sbit  TEIF15_bit at DMA_ISR.B15;
    const register unsigned short int GIF16 = 16;
    sbit  GIF16_bit at DMA_ISR.B16;
    const register unsigned short int TCIF17 = 17;
    sbit  TCIF17_bit at DMA_ISR.B17;
    const register unsigned short int HTIF18 = 18;
    sbit  HTIF18_bit at DMA_ISR.B18;
    const register unsigned short int TEIF19 = 19;
    sbit  TEIF19_bit at DMA_ISR.B19;
    const register unsigned short int GIF20 = 20;
    sbit  GIF20_bit at DMA_ISR.B20;
    const register unsigned short int TCIF21 = 21;
    sbit  TCIF21_bit at DMA_ISR.B21;
    const register unsigned short int HTIF22 = 22;
    sbit  HTIF22_bit at DMA_ISR.B22;
    const register unsigned short int TEIF23 = 23;
    sbit  TEIF23_bit at DMA_ISR.B23;
    const register unsigned short int GIF24 = 24;
    sbit  GIF24_bit at DMA_ISR.B24;
    const register unsigned short int TCIF25 = 25;
    sbit  TCIF25_bit at DMA_ISR.B25;
    const register unsigned short int HTIF26 = 26;
    sbit  HTIF26_bit at DMA_ISR.B26;
    const register unsigned short int TEIF27 = 27;
    sbit  TEIF27_bit at DMA_ISR.B27;

sfr unsigned long   volatile DMA_IFCR             absolute 0x40020004;
    const register unsigned short int CGIF0 = 0;
    sbit  CGIF0_bit at DMA_IFCR.B0;
    const register unsigned short int CTCIF1 = 1;
    sbit  CTCIF1_bit at DMA_IFCR.B1;
    const register unsigned short int CHTIF2 = 2;
    sbit  CHTIF2_bit at DMA_IFCR.B2;
    const register unsigned short int CTEIF3 = 3;
    sbit  CTEIF3_bit at DMA_IFCR.B3;
    const register unsigned short int CGIF4 = 4;
    sbit  CGIF4_bit at DMA_IFCR.B4;
    const register unsigned short int CTCIF5 = 5;
    sbit  CTCIF5_bit at DMA_IFCR.B5;
    const register unsigned short int CHTIF6 = 6;
    sbit  CHTIF6_bit at DMA_IFCR.B6;
    const register unsigned short int CTEIF7 = 7;
    sbit  CTEIF7_bit at DMA_IFCR.B7;
    const register unsigned short int CGIF8 = 8;
    sbit  CGIF8_bit at DMA_IFCR.B8;
    const register unsigned short int CTCIF9 = 9;
    sbit  CTCIF9_bit at DMA_IFCR.B9;
    const register unsigned short int CHTIF10 = 10;
    sbit  CHTIF10_bit at DMA_IFCR.B10;
    const register unsigned short int CTEIF11 = 11;
    sbit  CTEIF11_bit at DMA_IFCR.B11;
    const register unsigned short int CGIF12 = 12;
    sbit  CGIF12_bit at DMA_IFCR.B12;
    const register unsigned short int CTCIF13 = 13;
    sbit  CTCIF13_bit at DMA_IFCR.B13;
    const register unsigned short int CHTIF14 = 14;
    sbit  CHTIF14_bit at DMA_IFCR.B14;
    const register unsigned short int CTEIF15 = 15;
    sbit  CTEIF15_bit at DMA_IFCR.B15;
    const register unsigned short int CGIF16 = 16;
    sbit  CGIF16_bit at DMA_IFCR.B16;
    const register unsigned short int CTCIF17 = 17;
    sbit  CTCIF17_bit at DMA_IFCR.B17;
    const register unsigned short int CHTIF18 = 18;
    sbit  CHTIF18_bit at DMA_IFCR.B18;
    const register unsigned short int CTEIF19 = 19;
    sbit  CTEIF19_bit at DMA_IFCR.B19;
    const register unsigned short int CGIF20 = 20;
    sbit  CGIF20_bit at DMA_IFCR.B20;
    const register unsigned short int CTCIF21 = 21;
    sbit  CTCIF21_bit at DMA_IFCR.B21;
    const register unsigned short int CHTIF22 = 22;
    sbit  CHTIF22_bit at DMA_IFCR.B22;
    const register unsigned short int CTEIF23 = 23;
    sbit  CTEIF23_bit at DMA_IFCR.B23;
    const register unsigned short int CGIF24 = 24;
    sbit  CGIF24_bit at DMA_IFCR.B24;
    const register unsigned short int CTCIF25 = 25;
    sbit  CTCIF25_bit at DMA_IFCR.B25;
    const register unsigned short int CHTIF26 = 26;
    sbit  CHTIF26_bit at DMA_IFCR.B26;
    const register unsigned short int CTEIF27 = 27;
    sbit  CTEIF27_bit at DMA_IFCR.B27;

sfr unsigned long   volatile DMA_CCR1             absolute 0x40020008;
    const register unsigned short int EN = 0;
    sbit  EN_bit at DMA_CCR1.B0;
    const register unsigned short int TCIE = 1;
    sbit  TCIE_bit at DMA_CCR1.B1;
    const register unsigned short int HTIE = 2;
    sbit  HTIE_bit at DMA_CCR1.B2;
    const register unsigned short int TEIE = 3;
    sbit  TEIE_bit at DMA_CCR1.B3;
    const register unsigned short int DIR_ = 4;
    sbit  DIR_bit at DMA_CCR1.B4;
    const register unsigned short int CIRC = 5;
    sbit  CIRC_bit at DMA_CCR1.B5;
    const register unsigned short int PINC = 6;
    sbit  PINC_bit at DMA_CCR1.B6;
    const register unsigned short int MINC = 7;
    sbit  MINC_bit at DMA_CCR1.B7;
    const register unsigned short int PSIZE0 = 8;
    sbit  PSIZE0_bit at DMA_CCR1.B8;
    const register unsigned short int PSIZE1 = 9;
    sbit  PSIZE1_bit at DMA_CCR1.B9;
    const register unsigned short int MSIZE0 = 10;
    sbit  MSIZE0_bit at DMA_CCR1.B10;
    const register unsigned short int MSIZE1 = 11;
    sbit  MSIZE1_bit at DMA_CCR1.B11;
    const register unsigned short int PL0 = 12;
    sbit  PL0_bit at DMA_CCR1.B12;
    const register unsigned short int PL1 = 13;
    sbit  PL1_bit at DMA_CCR1.B13;
    const register unsigned short int MEM2MEM = 14;
    sbit  MEM2MEM_bit at DMA_CCR1.B14;

sfr unsigned long   volatile DMA_CCR2             absolute 0x4002001C;
    sbit  EN_DMA_CCR2_bit at DMA_CCR2.B0;
    sbit  TCIE_DMA_CCR2_bit at DMA_CCR2.B1;
    sbit  HTIE_DMA_CCR2_bit at DMA_CCR2.B2;
    sbit  TEIE_DMA_CCR2_bit at DMA_CCR2.B3;
    sbit  DIR_DMA_CCR2_bit at DMA_CCR2.B4;
    sbit  CIRC_DMA_CCR2_bit at DMA_CCR2.B5;
    sbit  PINC_DMA_CCR2_bit at DMA_CCR2.B6;
    sbit  MINC_DMA_CCR2_bit at DMA_CCR2.B7;
    sbit  PSIZE0_DMA_CCR2_bit at DMA_CCR2.B8;
    sbit  PSIZE1_DMA_CCR2_bit at DMA_CCR2.B9;
    sbit  MSIZE0_DMA_CCR2_bit at DMA_CCR2.B10;
    sbit  MSIZE1_DMA_CCR2_bit at DMA_CCR2.B11;
    sbit  PL0_DMA_CCR2_bit at DMA_CCR2.B12;
    sbit  PL1_DMA_CCR2_bit at DMA_CCR2.B13;
    sbit  MEM2MEM_DMA_CCR2_bit at DMA_CCR2.B14;

sfr unsigned long   volatile DMA_CCR3             absolute 0x40020030;
    sbit  EN_DMA_CCR3_bit at DMA_CCR3.B0;
    sbit  TCIE_DMA_CCR3_bit at DMA_CCR3.B1;
    sbit  HTIE_DMA_CCR3_bit at DMA_CCR3.B2;
    sbit  TEIE_DMA_CCR3_bit at DMA_CCR3.B3;
    sbit  DIR_DMA_CCR3_bit at DMA_CCR3.B4;
    sbit  CIRC_DMA_CCR3_bit at DMA_CCR3.B5;
    sbit  PINC_DMA_CCR3_bit at DMA_CCR3.B6;
    sbit  MINC_DMA_CCR3_bit at DMA_CCR3.B7;
    sbit  PSIZE0_DMA_CCR3_bit at DMA_CCR3.B8;
    sbit  PSIZE1_DMA_CCR3_bit at DMA_CCR3.B9;
    sbit  MSIZE0_DMA_CCR3_bit at DMA_CCR3.B10;
    sbit  MSIZE1_DMA_CCR3_bit at DMA_CCR3.B11;
    sbit  PL0_DMA_CCR3_bit at DMA_CCR3.B12;
    sbit  PL1_DMA_CCR3_bit at DMA_CCR3.B13;
    sbit  MEM2MEM_DMA_CCR3_bit at DMA_CCR3.B14;

sfr unsigned long   volatile DMA_CCR4             absolute 0x40020044;
    sbit  EN_DMA_CCR4_bit at DMA_CCR4.B0;
    sbit  TCIE_DMA_CCR4_bit at DMA_CCR4.B1;
    sbit  HTIE_DMA_CCR4_bit at DMA_CCR4.B2;
    sbit  TEIE_DMA_CCR4_bit at DMA_CCR4.B3;
    sbit  DIR_DMA_CCR4_bit at DMA_CCR4.B4;
    sbit  CIRC_DMA_CCR4_bit at DMA_CCR4.B5;
    sbit  PINC_DMA_CCR4_bit at DMA_CCR4.B6;
    sbit  MINC_DMA_CCR4_bit at DMA_CCR4.B7;
    sbit  PSIZE0_DMA_CCR4_bit at DMA_CCR4.B8;
    sbit  PSIZE1_DMA_CCR4_bit at DMA_CCR4.B9;
    sbit  MSIZE0_DMA_CCR4_bit at DMA_CCR4.B10;
    sbit  MSIZE1_DMA_CCR4_bit at DMA_CCR4.B11;
    sbit  PL0_DMA_CCR4_bit at DMA_CCR4.B12;
    sbit  PL1_DMA_CCR4_bit at DMA_CCR4.B13;
    sbit  MEM2MEM_DMA_CCR4_bit at DMA_CCR4.B14;

sfr unsigned long   volatile DMA_CCR5             absolute 0x40020058;
    sbit  EN_DMA_CCR5_bit at DMA_CCR5.B0;
    sbit  TCIE_DMA_CCR5_bit at DMA_CCR5.B1;
    sbit  HTIE_DMA_CCR5_bit at DMA_CCR5.B2;
    sbit  TEIE_DMA_CCR5_bit at DMA_CCR5.B3;
    sbit  DIR_DMA_CCR5_bit at DMA_CCR5.B4;
    sbit  CIRC_DMA_CCR5_bit at DMA_CCR5.B5;
    sbit  PINC_DMA_CCR5_bit at DMA_CCR5.B6;
    sbit  MINC_DMA_CCR5_bit at DMA_CCR5.B7;
    sbit  PSIZE0_DMA_CCR5_bit at DMA_CCR5.B8;
    sbit  PSIZE1_DMA_CCR5_bit at DMA_CCR5.B9;
    sbit  MSIZE0_DMA_CCR5_bit at DMA_CCR5.B10;
    sbit  MSIZE1_DMA_CCR5_bit at DMA_CCR5.B11;
    sbit  PL0_DMA_CCR5_bit at DMA_CCR5.B12;
    sbit  PL1_DMA_CCR5_bit at DMA_CCR5.B13;
    sbit  MEM2MEM_DMA_CCR5_bit at DMA_CCR5.B14;

sfr unsigned long   volatile DMA_CNDTR1           absolute 0x4002000C;
    const register unsigned short int NDT0 = 0;
    sbit  NDT0_bit at DMA_CNDTR1.B0;
    const register unsigned short int NDT1 = 1;
    sbit  NDT1_bit at DMA_CNDTR1.B1;
    const register unsigned short int NDT2 = 2;
    sbit  NDT2_bit at DMA_CNDTR1.B2;
    const register unsigned short int NDT3 = 3;
    sbit  NDT3_bit at DMA_CNDTR1.B3;
    const register unsigned short int NDT4 = 4;
    sbit  NDT4_bit at DMA_CNDTR1.B4;
    const register unsigned short int NDT5 = 5;
    sbit  NDT5_bit at DMA_CNDTR1.B5;
    const register unsigned short int NDT6 = 6;
    sbit  NDT6_bit at DMA_CNDTR1.B6;
    const register unsigned short int NDT7 = 7;
    sbit  NDT7_bit at DMA_CNDTR1.B7;
    const register unsigned short int NDT8 = 8;
    sbit  NDT8_bit at DMA_CNDTR1.B8;
    const register unsigned short int NDT9 = 9;
    sbit  NDT9_bit at DMA_CNDTR1.B9;
    const register unsigned short int NDT10 = 10;
    sbit  NDT10_bit at DMA_CNDTR1.B10;
    const register unsigned short int NDT11 = 11;
    sbit  NDT11_bit at DMA_CNDTR1.B11;
    const register unsigned short int NDT12 = 12;
    sbit  NDT12_bit at DMA_CNDTR1.B12;
    const register unsigned short int NDT13 = 13;
    sbit  NDT13_bit at DMA_CNDTR1.B13;
    const register unsigned short int NDT14 = 14;
    sbit  NDT14_bit at DMA_CNDTR1.B14;
    const register unsigned short int NDT15 = 15;
    sbit  NDT15_bit at DMA_CNDTR1.B15;

sfr unsigned long   volatile DMA_CNDTR2           absolute 0x40020020;
    sbit  NDT0_DMA_CNDTR2_bit at DMA_CNDTR2.B0;
    sbit  NDT1_DMA_CNDTR2_bit at DMA_CNDTR2.B1;
    sbit  NDT2_DMA_CNDTR2_bit at DMA_CNDTR2.B2;
    sbit  NDT3_DMA_CNDTR2_bit at DMA_CNDTR2.B3;
    sbit  NDT4_DMA_CNDTR2_bit at DMA_CNDTR2.B4;
    sbit  NDT5_DMA_CNDTR2_bit at DMA_CNDTR2.B5;
    sbit  NDT6_DMA_CNDTR2_bit at DMA_CNDTR2.B6;
    sbit  NDT7_DMA_CNDTR2_bit at DMA_CNDTR2.B7;
    sbit  NDT8_DMA_CNDTR2_bit at DMA_CNDTR2.B8;
    sbit  NDT9_DMA_CNDTR2_bit at DMA_CNDTR2.B9;
    sbit  NDT10_DMA_CNDTR2_bit at DMA_CNDTR2.B10;
    sbit  NDT11_DMA_CNDTR2_bit at DMA_CNDTR2.B11;
    sbit  NDT12_DMA_CNDTR2_bit at DMA_CNDTR2.B12;
    sbit  NDT13_DMA_CNDTR2_bit at DMA_CNDTR2.B13;
    sbit  NDT14_DMA_CNDTR2_bit at DMA_CNDTR2.B14;
    sbit  NDT15_DMA_CNDTR2_bit at DMA_CNDTR2.B15;

sfr unsigned long   volatile DMA_CNDTR3           absolute 0x40020034;
    sbit  NDT0_DMA_CNDTR3_bit at DMA_CNDTR3.B0;
    sbit  NDT1_DMA_CNDTR3_bit at DMA_CNDTR3.B1;
    sbit  NDT2_DMA_CNDTR3_bit at DMA_CNDTR3.B2;
    sbit  NDT3_DMA_CNDTR3_bit at DMA_CNDTR3.B3;
    sbit  NDT4_DMA_CNDTR3_bit at DMA_CNDTR3.B4;
    sbit  NDT5_DMA_CNDTR3_bit at DMA_CNDTR3.B5;
    sbit  NDT6_DMA_CNDTR3_bit at DMA_CNDTR3.B6;
    sbit  NDT7_DMA_CNDTR3_bit at DMA_CNDTR3.B7;
    sbit  NDT8_DMA_CNDTR3_bit at DMA_CNDTR3.B8;
    sbit  NDT9_DMA_CNDTR3_bit at DMA_CNDTR3.B9;
    sbit  NDT10_DMA_CNDTR3_bit at DMA_CNDTR3.B10;
    sbit  NDT11_DMA_CNDTR3_bit at DMA_CNDTR3.B11;
    sbit  NDT12_DMA_CNDTR3_bit at DMA_CNDTR3.B12;
    sbit  NDT13_DMA_CNDTR3_bit at DMA_CNDTR3.B13;
    sbit  NDT14_DMA_CNDTR3_bit at DMA_CNDTR3.B14;
    sbit  NDT15_DMA_CNDTR3_bit at DMA_CNDTR3.B15;

sfr unsigned long   volatile DMA_CNDTR4           absolute 0x40020048;
    sbit  NDT0_DMA_CNDTR4_bit at DMA_CNDTR4.B0;
    sbit  NDT1_DMA_CNDTR4_bit at DMA_CNDTR4.B1;
    sbit  NDT2_DMA_CNDTR4_bit at DMA_CNDTR4.B2;
    sbit  NDT3_DMA_CNDTR4_bit at DMA_CNDTR4.B3;
    sbit  NDT4_DMA_CNDTR4_bit at DMA_CNDTR4.B4;
    sbit  NDT5_DMA_CNDTR4_bit at DMA_CNDTR4.B5;
    sbit  NDT6_DMA_CNDTR4_bit at DMA_CNDTR4.B6;
    sbit  NDT7_DMA_CNDTR4_bit at DMA_CNDTR4.B7;
    sbit  NDT8_DMA_CNDTR4_bit at DMA_CNDTR4.B8;
    sbit  NDT9_DMA_CNDTR4_bit at DMA_CNDTR4.B9;
    sbit  NDT10_DMA_CNDTR4_bit at DMA_CNDTR4.B10;
    sbit  NDT11_DMA_CNDTR4_bit at DMA_CNDTR4.B11;
    sbit  NDT12_DMA_CNDTR4_bit at DMA_CNDTR4.B12;
    sbit  NDT13_DMA_CNDTR4_bit at DMA_CNDTR4.B13;
    sbit  NDT14_DMA_CNDTR4_bit at DMA_CNDTR4.B14;
    sbit  NDT15_DMA_CNDTR4_bit at DMA_CNDTR4.B15;

sfr unsigned long   volatile DMA_CNDTR5           absolute 0x4002005C;
    sbit  NDT0_DMA_CNDTR5_bit at DMA_CNDTR5.B0;
    sbit  NDT1_DMA_CNDTR5_bit at DMA_CNDTR5.B1;
    sbit  NDT2_DMA_CNDTR5_bit at DMA_CNDTR5.B2;
    sbit  NDT3_DMA_CNDTR5_bit at DMA_CNDTR5.B3;
    sbit  NDT4_DMA_CNDTR5_bit at DMA_CNDTR5.B4;
    sbit  NDT5_DMA_CNDTR5_bit at DMA_CNDTR5.B5;
    sbit  NDT6_DMA_CNDTR5_bit at DMA_CNDTR5.B6;
    sbit  NDT7_DMA_CNDTR5_bit at DMA_CNDTR5.B7;
    sbit  NDT8_DMA_CNDTR5_bit at DMA_CNDTR5.B8;
    sbit  NDT9_DMA_CNDTR5_bit at DMA_CNDTR5.B9;
    sbit  NDT10_DMA_CNDTR5_bit at DMA_CNDTR5.B10;
    sbit  NDT11_DMA_CNDTR5_bit at DMA_CNDTR5.B11;
    sbit  NDT12_DMA_CNDTR5_bit at DMA_CNDTR5.B12;
    sbit  NDT13_DMA_CNDTR5_bit at DMA_CNDTR5.B13;
    sbit  NDT14_DMA_CNDTR5_bit at DMA_CNDTR5.B14;
    sbit  NDT15_DMA_CNDTR5_bit at DMA_CNDTR5.B15;

sfr unsigned long   volatile DMA_CPAR1            absolute 0x40020010;
    const register unsigned short int PA0 = 0;
    sbit  PA0_bit at DMA_CPAR1.B0;
    const register unsigned short int PA1 = 1;
    sbit  PA1_bit at DMA_CPAR1.B1;
    const register unsigned short int PA2 = 2;
    sbit  PA2_bit at DMA_CPAR1.B2;
    const register unsigned short int PA3 = 3;
    sbit  PA3_bit at DMA_CPAR1.B3;
    const register unsigned short int PA4 = 4;
    sbit  PA4_bit at DMA_CPAR1.B4;
    const register unsigned short int PA5 = 5;
    sbit  PA5_bit at DMA_CPAR1.B5;
    const register unsigned short int PA6 = 6;
    sbit  PA6_bit at DMA_CPAR1.B6;
    const register unsigned short int PA7 = 7;
    sbit  PA7_bit at DMA_CPAR1.B7;
    const register unsigned short int PA8 = 8;
    sbit  PA8_bit at DMA_CPAR1.B8;
    const register unsigned short int PA9 = 9;
    sbit  PA9_bit at DMA_CPAR1.B9;
    const register unsigned short int PA10 = 10;
    sbit  PA10_bit at DMA_CPAR1.B10;
    const register unsigned short int PA11 = 11;
    sbit  PA11_bit at DMA_CPAR1.B11;
    const register unsigned short int PA12 = 12;
    sbit  PA12_bit at DMA_CPAR1.B12;
    const register unsigned short int PA13 = 13;
    sbit  PA13_bit at DMA_CPAR1.B13;
    const register unsigned short int PA14 = 14;
    sbit  PA14_bit at DMA_CPAR1.B14;
    const register unsigned short int PA15 = 15;
    sbit  PA15_bit at DMA_CPAR1.B15;
    const register unsigned short int PA16 = 16;
    sbit  PA16_bit at DMA_CPAR1.B16;
    const register unsigned short int PA17 = 17;
    sbit  PA17_bit at DMA_CPAR1.B17;
    const register unsigned short int PA18 = 18;
    sbit  PA18_bit at DMA_CPAR1.B18;
    const register unsigned short int PA19 = 19;
    sbit  PA19_bit at DMA_CPAR1.B19;
    const register unsigned short int PA20 = 20;
    sbit  PA20_bit at DMA_CPAR1.B20;
    const register unsigned short int PA21 = 21;
    sbit  PA21_bit at DMA_CPAR1.B21;
    const register unsigned short int PA22 = 22;
    sbit  PA22_bit at DMA_CPAR1.B22;
    const register unsigned short int PA23 = 23;
    sbit  PA23_bit at DMA_CPAR1.B23;
    const register unsigned short int PA24 = 24;
    sbit  PA24_bit at DMA_CPAR1.B24;
    const register unsigned short int PA25 = 25;
    sbit  PA25_bit at DMA_CPAR1.B25;
    const register unsigned short int PA26 = 26;
    sbit  PA26_bit at DMA_CPAR1.B26;
    const register unsigned short int PA27 = 27;
    sbit  PA27_bit at DMA_CPAR1.B27;
    const register unsigned short int PA28 = 28;
    sbit  PA28_bit at DMA_CPAR1.B28;
    const register unsigned short int PA29 = 29;
    sbit  PA29_bit at DMA_CPAR1.B29;
    const register unsigned short int PA30 = 30;
    sbit  PA30_bit at DMA_CPAR1.B30;
    const register unsigned short int PA31 = 31;
    sbit  PA31_bit at DMA_CPAR1.B31;

sfr unsigned long   volatile DMA_CPAR2            absolute 0x40020024;
    sbit  PA0_DMA_CPAR2_bit at DMA_CPAR2.B0;
    sbit  PA1_DMA_CPAR2_bit at DMA_CPAR2.B1;
    sbit  PA2_DMA_CPAR2_bit at DMA_CPAR2.B2;
    sbit  PA3_DMA_CPAR2_bit at DMA_CPAR2.B3;
    sbit  PA4_DMA_CPAR2_bit at DMA_CPAR2.B4;
    sbit  PA5_DMA_CPAR2_bit at DMA_CPAR2.B5;
    sbit  PA6_DMA_CPAR2_bit at DMA_CPAR2.B6;
    sbit  PA7_DMA_CPAR2_bit at DMA_CPAR2.B7;
    sbit  PA8_DMA_CPAR2_bit at DMA_CPAR2.B8;
    sbit  PA9_DMA_CPAR2_bit at DMA_CPAR2.B9;
    sbit  PA10_DMA_CPAR2_bit at DMA_CPAR2.B10;
    sbit  PA11_DMA_CPAR2_bit at DMA_CPAR2.B11;
    sbit  PA12_DMA_CPAR2_bit at DMA_CPAR2.B12;
    sbit  PA13_DMA_CPAR2_bit at DMA_CPAR2.B13;
    sbit  PA14_DMA_CPAR2_bit at DMA_CPAR2.B14;
    sbit  PA15_DMA_CPAR2_bit at DMA_CPAR2.B15;
    sbit  PA16_DMA_CPAR2_bit at DMA_CPAR2.B16;
    sbit  PA17_DMA_CPAR2_bit at DMA_CPAR2.B17;
    sbit  PA18_DMA_CPAR2_bit at DMA_CPAR2.B18;
    sbit  PA19_DMA_CPAR2_bit at DMA_CPAR2.B19;
    sbit  PA20_DMA_CPAR2_bit at DMA_CPAR2.B20;
    sbit  PA21_DMA_CPAR2_bit at DMA_CPAR2.B21;
    sbit  PA22_DMA_CPAR2_bit at DMA_CPAR2.B22;
    sbit  PA23_DMA_CPAR2_bit at DMA_CPAR2.B23;
    sbit  PA24_DMA_CPAR2_bit at DMA_CPAR2.B24;
    sbit  PA25_DMA_CPAR2_bit at DMA_CPAR2.B25;
    sbit  PA26_DMA_CPAR2_bit at DMA_CPAR2.B26;
    sbit  PA27_DMA_CPAR2_bit at DMA_CPAR2.B27;
    sbit  PA28_DMA_CPAR2_bit at DMA_CPAR2.B28;
    sbit  PA29_DMA_CPAR2_bit at DMA_CPAR2.B29;
    sbit  PA30_DMA_CPAR2_bit at DMA_CPAR2.B30;
    sbit  PA31_DMA_CPAR2_bit at DMA_CPAR2.B31;

sfr unsigned long   volatile DMA_CPAR3            absolute 0x40020038;
    sbit  PA0_DMA_CPAR3_bit at DMA_CPAR3.B0;
    sbit  PA1_DMA_CPAR3_bit at DMA_CPAR3.B1;
    sbit  PA2_DMA_CPAR3_bit at DMA_CPAR3.B2;
    sbit  PA3_DMA_CPAR3_bit at DMA_CPAR3.B3;
    sbit  PA4_DMA_CPAR3_bit at DMA_CPAR3.B4;
    sbit  PA5_DMA_CPAR3_bit at DMA_CPAR3.B5;
    sbit  PA6_DMA_CPAR3_bit at DMA_CPAR3.B6;
    sbit  PA7_DMA_CPAR3_bit at DMA_CPAR3.B7;
    sbit  PA8_DMA_CPAR3_bit at DMA_CPAR3.B8;
    sbit  PA9_DMA_CPAR3_bit at DMA_CPAR3.B9;
    sbit  PA10_DMA_CPAR3_bit at DMA_CPAR3.B10;
    sbit  PA11_DMA_CPAR3_bit at DMA_CPAR3.B11;
    sbit  PA12_DMA_CPAR3_bit at DMA_CPAR3.B12;
    sbit  PA13_DMA_CPAR3_bit at DMA_CPAR3.B13;
    sbit  PA14_DMA_CPAR3_bit at DMA_CPAR3.B14;
    sbit  PA15_DMA_CPAR3_bit at DMA_CPAR3.B15;
    sbit  PA16_DMA_CPAR3_bit at DMA_CPAR3.B16;
    sbit  PA17_DMA_CPAR3_bit at DMA_CPAR3.B17;
    sbit  PA18_DMA_CPAR3_bit at DMA_CPAR3.B18;
    sbit  PA19_DMA_CPAR3_bit at DMA_CPAR3.B19;
    sbit  PA20_DMA_CPAR3_bit at DMA_CPAR3.B20;
    sbit  PA21_DMA_CPAR3_bit at DMA_CPAR3.B21;
    sbit  PA22_DMA_CPAR3_bit at DMA_CPAR3.B22;
    sbit  PA23_DMA_CPAR3_bit at DMA_CPAR3.B23;
    sbit  PA24_DMA_CPAR3_bit at DMA_CPAR3.B24;
    sbit  PA25_DMA_CPAR3_bit at DMA_CPAR3.B25;
    sbit  PA26_DMA_CPAR3_bit at DMA_CPAR3.B26;
    sbit  PA27_DMA_CPAR3_bit at DMA_CPAR3.B27;
    sbit  PA28_DMA_CPAR3_bit at DMA_CPAR3.B28;
    sbit  PA29_DMA_CPAR3_bit at DMA_CPAR3.B29;
    sbit  PA30_DMA_CPAR3_bit at DMA_CPAR3.B30;
    sbit  PA31_DMA_CPAR3_bit at DMA_CPAR3.B31;

sfr unsigned long   volatile DMA_CPAR4            absolute 0x4002004C;
    sbit  PA0_DMA_CPAR4_bit at DMA_CPAR4.B0;
    sbit  PA1_DMA_CPAR4_bit at DMA_CPAR4.B1;
    sbit  PA2_DMA_CPAR4_bit at DMA_CPAR4.B2;
    sbit  PA3_DMA_CPAR4_bit at DMA_CPAR4.B3;
    sbit  PA4_DMA_CPAR4_bit at DMA_CPAR4.B4;
    sbit  PA5_DMA_CPAR4_bit at DMA_CPAR4.B5;
    sbit  PA6_DMA_CPAR4_bit at DMA_CPAR4.B6;
    sbit  PA7_DMA_CPAR4_bit at DMA_CPAR4.B7;
    sbit  PA8_DMA_CPAR4_bit at DMA_CPAR4.B8;
    sbit  PA9_DMA_CPAR4_bit at DMA_CPAR4.B9;
    sbit  PA10_DMA_CPAR4_bit at DMA_CPAR4.B10;
    sbit  PA11_DMA_CPAR4_bit at DMA_CPAR4.B11;
    sbit  PA12_DMA_CPAR4_bit at DMA_CPAR4.B12;
    sbit  PA13_DMA_CPAR4_bit at DMA_CPAR4.B13;
    sbit  PA14_DMA_CPAR4_bit at DMA_CPAR4.B14;
    sbit  PA15_DMA_CPAR4_bit at DMA_CPAR4.B15;
    sbit  PA16_DMA_CPAR4_bit at DMA_CPAR4.B16;
    sbit  PA17_DMA_CPAR4_bit at DMA_CPAR4.B17;
    sbit  PA18_DMA_CPAR4_bit at DMA_CPAR4.B18;
    sbit  PA19_DMA_CPAR4_bit at DMA_CPAR4.B19;
    sbit  PA20_DMA_CPAR4_bit at DMA_CPAR4.B20;
    sbit  PA21_DMA_CPAR4_bit at DMA_CPAR4.B21;
    sbit  PA22_DMA_CPAR4_bit at DMA_CPAR4.B22;
    sbit  PA23_DMA_CPAR4_bit at DMA_CPAR4.B23;
    sbit  PA24_DMA_CPAR4_bit at DMA_CPAR4.B24;
    sbit  PA25_DMA_CPAR4_bit at DMA_CPAR4.B25;
    sbit  PA26_DMA_CPAR4_bit at DMA_CPAR4.B26;
    sbit  PA27_DMA_CPAR4_bit at DMA_CPAR4.B27;
    sbit  PA28_DMA_CPAR4_bit at DMA_CPAR4.B28;
    sbit  PA29_DMA_CPAR4_bit at DMA_CPAR4.B29;
    sbit  PA30_DMA_CPAR4_bit at DMA_CPAR4.B30;
    sbit  PA31_DMA_CPAR4_bit at DMA_CPAR4.B31;

sfr unsigned long   volatile DMA_CPAR5            absolute 0x40020060;
    sbit  PA0_DMA_CPAR5_bit at DMA_CPAR5.B0;
    sbit  PA1_DMA_CPAR5_bit at DMA_CPAR5.B1;
    sbit  PA2_DMA_CPAR5_bit at DMA_CPAR5.B2;
    sbit  PA3_DMA_CPAR5_bit at DMA_CPAR5.B3;
    sbit  PA4_DMA_CPAR5_bit at DMA_CPAR5.B4;
    sbit  PA5_DMA_CPAR5_bit at DMA_CPAR5.B5;
    sbit  PA6_DMA_CPAR5_bit at DMA_CPAR5.B6;
    sbit  PA7_DMA_CPAR5_bit at DMA_CPAR5.B7;
    sbit  PA8_DMA_CPAR5_bit at DMA_CPAR5.B8;
    sbit  PA9_DMA_CPAR5_bit at DMA_CPAR5.B9;
    sbit  PA10_DMA_CPAR5_bit at DMA_CPAR5.B10;
    sbit  PA11_DMA_CPAR5_bit at DMA_CPAR5.B11;
    sbit  PA12_DMA_CPAR5_bit at DMA_CPAR5.B12;
    sbit  PA13_DMA_CPAR5_bit at DMA_CPAR5.B13;
    sbit  PA14_DMA_CPAR5_bit at DMA_CPAR5.B14;
    sbit  PA15_DMA_CPAR5_bit at DMA_CPAR5.B15;
    sbit  PA16_DMA_CPAR5_bit at DMA_CPAR5.B16;
    sbit  PA17_DMA_CPAR5_bit at DMA_CPAR5.B17;
    sbit  PA18_DMA_CPAR5_bit at DMA_CPAR5.B18;
    sbit  PA19_DMA_CPAR5_bit at DMA_CPAR5.B19;
    sbit  PA20_DMA_CPAR5_bit at DMA_CPAR5.B20;
    sbit  PA21_DMA_CPAR5_bit at DMA_CPAR5.B21;
    sbit  PA22_DMA_CPAR5_bit at DMA_CPAR5.B22;
    sbit  PA23_DMA_CPAR5_bit at DMA_CPAR5.B23;
    sbit  PA24_DMA_CPAR5_bit at DMA_CPAR5.B24;
    sbit  PA25_DMA_CPAR5_bit at DMA_CPAR5.B25;
    sbit  PA26_DMA_CPAR5_bit at DMA_CPAR5.B26;
    sbit  PA27_DMA_CPAR5_bit at DMA_CPAR5.B27;
    sbit  PA28_DMA_CPAR5_bit at DMA_CPAR5.B28;
    sbit  PA29_DMA_CPAR5_bit at DMA_CPAR5.B29;
    sbit  PA30_DMA_CPAR5_bit at DMA_CPAR5.B30;
    sbit  PA31_DMA_CPAR5_bit at DMA_CPAR5.B31;

sfr unsigned long   volatile DMA_CMAR1            absolute 0x40020014;
    const register unsigned short int MA0 = 0;
    sbit  MA0_bit at DMA_CMAR1.B0;
    const register unsigned short int MA1 = 1;
    sbit  MA1_bit at DMA_CMAR1.B1;
    const register unsigned short int MA2 = 2;
    sbit  MA2_bit at DMA_CMAR1.B2;
    const register unsigned short int MA3 = 3;
    sbit  MA3_bit at DMA_CMAR1.B3;
    const register unsigned short int MA4 = 4;
    sbit  MA4_bit at DMA_CMAR1.B4;
    const register unsigned short int MA5 = 5;
    sbit  MA5_bit at DMA_CMAR1.B5;
    const register unsigned short int MA6 = 6;
    sbit  MA6_bit at DMA_CMAR1.B6;
    const register unsigned short int MA7 = 7;
    sbit  MA7_bit at DMA_CMAR1.B7;
    const register unsigned short int MA8 = 8;
    sbit  MA8_bit at DMA_CMAR1.B8;
    const register unsigned short int MA9 = 9;
    sbit  MA9_bit at DMA_CMAR1.B9;
    const register unsigned short int MA10 = 10;
    sbit  MA10_bit at DMA_CMAR1.B10;
    const register unsigned short int MA11 = 11;
    sbit  MA11_bit at DMA_CMAR1.B11;
    const register unsigned short int MA12 = 12;
    sbit  MA12_bit at DMA_CMAR1.B12;
    const register unsigned short int MA13 = 13;
    sbit  MA13_bit at DMA_CMAR1.B13;
    const register unsigned short int MA14 = 14;
    sbit  MA14_bit at DMA_CMAR1.B14;
    const register unsigned short int MA15 = 15;
    sbit  MA15_bit at DMA_CMAR1.B15;
    const register unsigned short int MA16 = 16;
    sbit  MA16_bit at DMA_CMAR1.B16;
    const register unsigned short int MA17 = 17;
    sbit  MA17_bit at DMA_CMAR1.B17;
    const register unsigned short int MA18 = 18;
    sbit  MA18_bit at DMA_CMAR1.B18;
    const register unsigned short int MA19 = 19;
    sbit  MA19_bit at DMA_CMAR1.B19;
    const register unsigned short int MA20 = 20;
    sbit  MA20_bit at DMA_CMAR1.B20;
    const register unsigned short int MA21 = 21;
    sbit  MA21_bit at DMA_CMAR1.B21;
    const register unsigned short int MA22 = 22;
    sbit  MA22_bit at DMA_CMAR1.B22;
    const register unsigned short int MA23 = 23;
    sbit  MA23_bit at DMA_CMAR1.B23;
    const register unsigned short int MA24 = 24;
    sbit  MA24_bit at DMA_CMAR1.B24;
    const register unsigned short int MA25 = 25;
    sbit  MA25_bit at DMA_CMAR1.B25;
    const register unsigned short int MA26 = 26;
    sbit  MA26_bit at DMA_CMAR1.B26;
    const register unsigned short int MA27 = 27;
    sbit  MA27_bit at DMA_CMAR1.B27;
    const register unsigned short int MA28 = 28;
    sbit  MA28_bit at DMA_CMAR1.B28;
    const register unsigned short int MA29 = 29;
    sbit  MA29_bit at DMA_CMAR1.B29;
    const register unsigned short int MA30 = 30;
    sbit  MA30_bit at DMA_CMAR1.B30;
    const register unsigned short int MA31 = 31;
    sbit  MA31_bit at DMA_CMAR1.B31;

sfr unsigned long   volatile DMA_CMAR2            absolute 0x40020028;
    sbit  MA0_DMA_CMAR2_bit at DMA_CMAR2.B0;
    sbit  MA1_DMA_CMAR2_bit at DMA_CMAR2.B1;
    sbit  MA2_DMA_CMAR2_bit at DMA_CMAR2.B2;
    sbit  MA3_DMA_CMAR2_bit at DMA_CMAR2.B3;
    sbit  MA4_DMA_CMAR2_bit at DMA_CMAR2.B4;
    sbit  MA5_DMA_CMAR2_bit at DMA_CMAR2.B5;
    sbit  MA6_DMA_CMAR2_bit at DMA_CMAR2.B6;
    sbit  MA7_DMA_CMAR2_bit at DMA_CMAR2.B7;
    sbit  MA8_DMA_CMAR2_bit at DMA_CMAR2.B8;
    sbit  MA9_DMA_CMAR2_bit at DMA_CMAR2.B9;
    sbit  MA10_DMA_CMAR2_bit at DMA_CMAR2.B10;
    sbit  MA11_DMA_CMAR2_bit at DMA_CMAR2.B11;
    sbit  MA12_DMA_CMAR2_bit at DMA_CMAR2.B12;
    sbit  MA13_DMA_CMAR2_bit at DMA_CMAR2.B13;
    sbit  MA14_DMA_CMAR2_bit at DMA_CMAR2.B14;
    sbit  MA15_DMA_CMAR2_bit at DMA_CMAR2.B15;
    sbit  MA16_DMA_CMAR2_bit at DMA_CMAR2.B16;
    sbit  MA17_DMA_CMAR2_bit at DMA_CMAR2.B17;
    sbit  MA18_DMA_CMAR2_bit at DMA_CMAR2.B18;
    sbit  MA19_DMA_CMAR2_bit at DMA_CMAR2.B19;
    sbit  MA20_DMA_CMAR2_bit at DMA_CMAR2.B20;
    sbit  MA21_DMA_CMAR2_bit at DMA_CMAR2.B21;
    sbit  MA22_DMA_CMAR2_bit at DMA_CMAR2.B22;
    sbit  MA23_DMA_CMAR2_bit at DMA_CMAR2.B23;
    sbit  MA24_DMA_CMAR2_bit at DMA_CMAR2.B24;
    sbit  MA25_DMA_CMAR2_bit at DMA_CMAR2.B25;
    sbit  MA26_DMA_CMAR2_bit at DMA_CMAR2.B26;
    sbit  MA27_DMA_CMAR2_bit at DMA_CMAR2.B27;
    sbit  MA28_DMA_CMAR2_bit at DMA_CMAR2.B28;
    sbit  MA29_DMA_CMAR2_bit at DMA_CMAR2.B29;
    sbit  MA30_DMA_CMAR2_bit at DMA_CMAR2.B30;
    sbit  MA31_DMA_CMAR2_bit at DMA_CMAR2.B31;

sfr unsigned long   volatile DMA_CMAR3            absolute 0x4002003C;
    sbit  MA0_DMA_CMAR3_bit at DMA_CMAR3.B0;
    sbit  MA1_DMA_CMAR3_bit at DMA_CMAR3.B1;
    sbit  MA2_DMA_CMAR3_bit at DMA_CMAR3.B2;
    sbit  MA3_DMA_CMAR3_bit at DMA_CMAR3.B3;
    sbit  MA4_DMA_CMAR3_bit at DMA_CMAR3.B4;
    sbit  MA5_DMA_CMAR3_bit at DMA_CMAR3.B5;
    sbit  MA6_DMA_CMAR3_bit at DMA_CMAR3.B6;
    sbit  MA7_DMA_CMAR3_bit at DMA_CMAR3.B7;
    sbit  MA8_DMA_CMAR3_bit at DMA_CMAR3.B8;
    sbit  MA9_DMA_CMAR3_bit at DMA_CMAR3.B9;
    sbit  MA10_DMA_CMAR3_bit at DMA_CMAR3.B10;
    sbit  MA11_DMA_CMAR3_bit at DMA_CMAR3.B11;
    sbit  MA12_DMA_CMAR3_bit at DMA_CMAR3.B12;
    sbit  MA13_DMA_CMAR3_bit at DMA_CMAR3.B13;
    sbit  MA14_DMA_CMAR3_bit at DMA_CMAR3.B14;
    sbit  MA15_DMA_CMAR3_bit at DMA_CMAR3.B15;
    sbit  MA16_DMA_CMAR3_bit at DMA_CMAR3.B16;
    sbit  MA17_DMA_CMAR3_bit at DMA_CMAR3.B17;
    sbit  MA18_DMA_CMAR3_bit at DMA_CMAR3.B18;
    sbit  MA19_DMA_CMAR3_bit at DMA_CMAR3.B19;
    sbit  MA20_DMA_CMAR3_bit at DMA_CMAR3.B20;
    sbit  MA21_DMA_CMAR3_bit at DMA_CMAR3.B21;
    sbit  MA22_DMA_CMAR3_bit at DMA_CMAR3.B22;
    sbit  MA23_DMA_CMAR3_bit at DMA_CMAR3.B23;
    sbit  MA24_DMA_CMAR3_bit at DMA_CMAR3.B24;
    sbit  MA25_DMA_CMAR3_bit at DMA_CMAR3.B25;
    sbit  MA26_DMA_CMAR3_bit at DMA_CMAR3.B26;
    sbit  MA27_DMA_CMAR3_bit at DMA_CMAR3.B27;
    sbit  MA28_DMA_CMAR3_bit at DMA_CMAR3.B28;
    sbit  MA29_DMA_CMAR3_bit at DMA_CMAR3.B29;
    sbit  MA30_DMA_CMAR3_bit at DMA_CMAR3.B30;
    sbit  MA31_DMA_CMAR3_bit at DMA_CMAR3.B31;

sfr unsigned long   volatile DMA_CMAR4            absolute 0x40020050;
    sbit  MA0_DMA_CMAR4_bit at DMA_CMAR4.B0;
    sbit  MA1_DMA_CMAR4_bit at DMA_CMAR4.B1;
    sbit  MA2_DMA_CMAR4_bit at DMA_CMAR4.B2;
    sbit  MA3_DMA_CMAR4_bit at DMA_CMAR4.B3;
    sbit  MA4_DMA_CMAR4_bit at DMA_CMAR4.B4;
    sbit  MA5_DMA_CMAR4_bit at DMA_CMAR4.B5;
    sbit  MA6_DMA_CMAR4_bit at DMA_CMAR4.B6;
    sbit  MA7_DMA_CMAR4_bit at DMA_CMAR4.B7;
    sbit  MA8_DMA_CMAR4_bit at DMA_CMAR4.B8;
    sbit  MA9_DMA_CMAR4_bit at DMA_CMAR4.B9;
    sbit  MA10_DMA_CMAR4_bit at DMA_CMAR4.B10;
    sbit  MA11_DMA_CMAR4_bit at DMA_CMAR4.B11;
    sbit  MA12_DMA_CMAR4_bit at DMA_CMAR4.B12;
    sbit  MA13_DMA_CMAR4_bit at DMA_CMAR4.B13;
    sbit  MA14_DMA_CMAR4_bit at DMA_CMAR4.B14;
    sbit  MA15_DMA_CMAR4_bit at DMA_CMAR4.B15;
    sbit  MA16_DMA_CMAR4_bit at DMA_CMAR4.B16;
    sbit  MA17_DMA_CMAR4_bit at DMA_CMAR4.B17;
    sbit  MA18_DMA_CMAR4_bit at DMA_CMAR4.B18;
    sbit  MA19_DMA_CMAR4_bit at DMA_CMAR4.B19;
    sbit  MA20_DMA_CMAR4_bit at DMA_CMAR4.B20;
    sbit  MA21_DMA_CMAR4_bit at DMA_CMAR4.B21;
    sbit  MA22_DMA_CMAR4_bit at DMA_CMAR4.B22;
    sbit  MA23_DMA_CMAR4_bit at DMA_CMAR4.B23;
    sbit  MA24_DMA_CMAR4_bit at DMA_CMAR4.B24;
    sbit  MA25_DMA_CMAR4_bit at DMA_CMAR4.B25;
    sbit  MA26_DMA_CMAR4_bit at DMA_CMAR4.B26;
    sbit  MA27_DMA_CMAR4_bit at DMA_CMAR4.B27;
    sbit  MA28_DMA_CMAR4_bit at DMA_CMAR4.B28;
    sbit  MA29_DMA_CMAR4_bit at DMA_CMAR4.B29;
    sbit  MA30_DMA_CMAR4_bit at DMA_CMAR4.B30;
    sbit  MA31_DMA_CMAR4_bit at DMA_CMAR4.B31;

sfr unsigned long   volatile DMA_CMAR5            absolute 0x40020064;
    sbit  MA0_DMA_CMAR5_bit at DMA_CMAR5.B0;
    sbit  MA1_DMA_CMAR5_bit at DMA_CMAR5.B1;
    sbit  MA2_DMA_CMAR5_bit at DMA_CMAR5.B2;
    sbit  MA3_DMA_CMAR5_bit at DMA_CMAR5.B3;
    sbit  MA4_DMA_CMAR5_bit at DMA_CMAR5.B4;
    sbit  MA5_DMA_CMAR5_bit at DMA_CMAR5.B5;
    sbit  MA6_DMA_CMAR5_bit at DMA_CMAR5.B6;
    sbit  MA7_DMA_CMAR5_bit at DMA_CMAR5.B7;
    sbit  MA8_DMA_CMAR5_bit at DMA_CMAR5.B8;
    sbit  MA9_DMA_CMAR5_bit at DMA_CMAR5.B9;
    sbit  MA10_DMA_CMAR5_bit at DMA_CMAR5.B10;
    sbit  MA11_DMA_CMAR5_bit at DMA_CMAR5.B11;
    sbit  MA12_DMA_CMAR5_bit at DMA_CMAR5.B12;
    sbit  MA13_DMA_CMAR5_bit at DMA_CMAR5.B13;
    sbit  MA14_DMA_CMAR5_bit at DMA_CMAR5.B14;
    sbit  MA15_DMA_CMAR5_bit at DMA_CMAR5.B15;
    sbit  MA16_DMA_CMAR5_bit at DMA_CMAR5.B16;
    sbit  MA17_DMA_CMAR5_bit at DMA_CMAR5.B17;
    sbit  MA18_DMA_CMAR5_bit at DMA_CMAR5.B18;
    sbit  MA19_DMA_CMAR5_bit at DMA_CMAR5.B19;
    sbit  MA20_DMA_CMAR5_bit at DMA_CMAR5.B20;
    sbit  MA21_DMA_CMAR5_bit at DMA_CMAR5.B21;
    sbit  MA22_DMA_CMAR5_bit at DMA_CMAR5.B22;
    sbit  MA23_DMA_CMAR5_bit at DMA_CMAR5.B23;
    sbit  MA24_DMA_CMAR5_bit at DMA_CMAR5.B24;
    sbit  MA25_DMA_CMAR5_bit at DMA_CMAR5.B25;
    sbit  MA26_DMA_CMAR5_bit at DMA_CMAR5.B26;
    sbit  MA27_DMA_CMAR5_bit at DMA_CMAR5.B27;
    sbit  MA28_DMA_CMAR5_bit at DMA_CMAR5.B28;
    sbit  MA29_DMA_CMAR5_bit at DMA_CMAR5.B29;
    sbit  MA30_DMA_CMAR5_bit at DMA_CMAR5.B30;
    sbit  MA31_DMA_CMAR5_bit at DMA_CMAR5.B31;

sfr unsigned long   volatile DMAMUX_C0CR          absolute 0x40020800;
    const register unsigned short int DMAREQ_ID0 = 0;
    sbit  DMAREQ_ID0_bit at DMAMUX_C0CR.B0;
    const register unsigned short int DMAREQ_ID1 = 1;
    sbit  DMAREQ_ID1_bit at DMAMUX_C0CR.B1;
    const register unsigned short int DMAREQ_ID2 = 2;
    sbit  DMAREQ_ID2_bit at DMAMUX_C0CR.B2;
    const register unsigned short int DMAREQ_ID3 = 3;
    sbit  DMAREQ_ID3_bit at DMAMUX_C0CR.B3;
    const register unsigned short int DMAREQ_ID4 = 4;
    sbit  DMAREQ_ID4_bit at DMAMUX_C0CR.B4;
    const register unsigned short int DMAREQ_ID5 = 5;
    sbit  DMAREQ_ID5_bit at DMAMUX_C0CR.B5;
    const register unsigned short int DMAREQ_ID6 = 6;
    sbit  DMAREQ_ID6_bit at DMAMUX_C0CR.B6;
    const register unsigned short int DMAREQ_ID7 = 7;
    sbit  DMAREQ_ID7_bit at DMAMUX_C0CR.B7;
    const register unsigned short int SOIE = 8;
    sbit  SOIE_bit at DMAMUX_C0CR.B8;
    const register unsigned short int EGE = 9;
    sbit  EGE_bit at DMAMUX_C0CR.B9;
    const register unsigned short int SE = 16;
    sbit  SE_bit at DMAMUX_C0CR.B16;
    const register unsigned short int SPOL0 = 17;
    sbit  SPOL0_bit at DMAMUX_C0CR.B17;
    const register unsigned short int SPOL1 = 18;
    sbit  SPOL1_bit at DMAMUX_C0CR.B18;
    const register unsigned short int NBREQ0 = 19;
    sbit  NBREQ0_bit at DMAMUX_C0CR.B19;
    const register unsigned short int NBREQ1 = 20;
    sbit  NBREQ1_bit at DMAMUX_C0CR.B20;
    const register unsigned short int NBREQ2 = 21;
    sbit  NBREQ2_bit at DMAMUX_C0CR.B21;
    const register unsigned short int NBREQ3 = 22;
    sbit  NBREQ3_bit at DMAMUX_C0CR.B22;
    const register unsigned short int NBREQ4 = 23;
    sbit  NBREQ4_bit at DMAMUX_C0CR.B23;
    const register unsigned short int SYNC_ID0 = 24;
    sbit  SYNC_ID0_bit at DMAMUX_C0CR.B24;
    const register unsigned short int SYNC_ID1 = 25;
    sbit  SYNC_ID1_bit at DMAMUX_C0CR.B25;
    const register unsigned short int SYNC_ID2 = 26;
    sbit  SYNC_ID2_bit at DMAMUX_C0CR.B26;
    const register unsigned short int SYNC_ID3 = 27;
    sbit  SYNC_ID3_bit at DMAMUX_C0CR.B27;
    const register unsigned short int SYNC_ID4 = 28;
    sbit  SYNC_ID4_bit at DMAMUX_C0CR.B28;

sfr unsigned long   volatile DMAMUX_C1CR          absolute 0x40020804;
    sbit  DMAREQ_ID0_DMAMUX_C1CR_bit at DMAMUX_C1CR.B0;
    sbit  DMAREQ_ID1_DMAMUX_C1CR_bit at DMAMUX_C1CR.B1;
    sbit  DMAREQ_ID2_DMAMUX_C1CR_bit at DMAMUX_C1CR.B2;
    sbit  DMAREQ_ID3_DMAMUX_C1CR_bit at DMAMUX_C1CR.B3;
    sbit  DMAREQ_ID4_DMAMUX_C1CR_bit at DMAMUX_C1CR.B4;
    sbit  DMAREQ_ID5_DMAMUX_C1CR_bit at DMAMUX_C1CR.B5;
    sbit  DMAREQ_ID6_DMAMUX_C1CR_bit at DMAMUX_C1CR.B6;
    sbit  DMAREQ_ID7_DMAMUX_C1CR_bit at DMAMUX_C1CR.B7;
    sbit  SOIE_DMAMUX_C1CR_bit at DMAMUX_C1CR.B8;
    sbit  EGE_DMAMUX_C1CR_bit at DMAMUX_C1CR.B9;
    sbit  SE_DMAMUX_C1CR_bit at DMAMUX_C1CR.B16;
    sbit  SPOL0_DMAMUX_C1CR_bit at DMAMUX_C1CR.B17;
    sbit  SPOL1_DMAMUX_C1CR_bit at DMAMUX_C1CR.B18;
    sbit  NBREQ0_DMAMUX_C1CR_bit at DMAMUX_C1CR.B19;
    sbit  NBREQ1_DMAMUX_C1CR_bit at DMAMUX_C1CR.B20;
    sbit  NBREQ2_DMAMUX_C1CR_bit at DMAMUX_C1CR.B21;
    sbit  NBREQ3_DMAMUX_C1CR_bit at DMAMUX_C1CR.B22;
    sbit  NBREQ4_DMAMUX_C1CR_bit at DMAMUX_C1CR.B23;
    sbit  SYNC_ID0_DMAMUX_C1CR_bit at DMAMUX_C1CR.B24;
    sbit  SYNC_ID1_DMAMUX_C1CR_bit at DMAMUX_C1CR.B25;
    sbit  SYNC_ID2_DMAMUX_C1CR_bit at DMAMUX_C1CR.B26;
    sbit  SYNC_ID3_DMAMUX_C1CR_bit at DMAMUX_C1CR.B27;
    sbit  SYNC_ID4_DMAMUX_C1CR_bit at DMAMUX_C1CR.B28;

sfr unsigned long   volatile DMAMUX_C2CR          absolute 0x40020808;
    sbit  DMAREQ_ID0_DMAMUX_C2CR_bit at DMAMUX_C2CR.B0;
    sbit  DMAREQ_ID1_DMAMUX_C2CR_bit at DMAMUX_C2CR.B1;
    sbit  DMAREQ_ID2_DMAMUX_C2CR_bit at DMAMUX_C2CR.B2;
    sbit  DMAREQ_ID3_DMAMUX_C2CR_bit at DMAMUX_C2CR.B3;
    sbit  DMAREQ_ID4_DMAMUX_C2CR_bit at DMAMUX_C2CR.B4;
    sbit  DMAREQ_ID5_DMAMUX_C2CR_bit at DMAMUX_C2CR.B5;
    sbit  DMAREQ_ID6_DMAMUX_C2CR_bit at DMAMUX_C2CR.B6;
    sbit  DMAREQ_ID7_DMAMUX_C2CR_bit at DMAMUX_C2CR.B7;
    sbit  SOIE_DMAMUX_C2CR_bit at DMAMUX_C2CR.B8;
    sbit  EGE_DMAMUX_C2CR_bit at DMAMUX_C2CR.B9;
    sbit  SE_DMAMUX_C2CR_bit at DMAMUX_C2CR.B16;
    sbit  SPOL0_DMAMUX_C2CR_bit at DMAMUX_C2CR.B17;
    sbit  SPOL1_DMAMUX_C2CR_bit at DMAMUX_C2CR.B18;
    sbit  NBREQ0_DMAMUX_C2CR_bit at DMAMUX_C2CR.B19;
    sbit  NBREQ1_DMAMUX_C2CR_bit at DMAMUX_C2CR.B20;
    sbit  NBREQ2_DMAMUX_C2CR_bit at DMAMUX_C2CR.B21;
    sbit  NBREQ3_DMAMUX_C2CR_bit at DMAMUX_C2CR.B22;
    sbit  NBREQ4_DMAMUX_C2CR_bit at DMAMUX_C2CR.B23;
    sbit  SYNC_ID0_DMAMUX_C2CR_bit at DMAMUX_C2CR.B24;
    sbit  SYNC_ID1_DMAMUX_C2CR_bit at DMAMUX_C2CR.B25;
    sbit  SYNC_ID2_DMAMUX_C2CR_bit at DMAMUX_C2CR.B26;
    sbit  SYNC_ID3_DMAMUX_C2CR_bit at DMAMUX_C2CR.B27;
    sbit  SYNC_ID4_DMAMUX_C2CR_bit at DMAMUX_C2CR.B28;

sfr unsigned long   volatile DMAMUX_C3CR          absolute 0x4002080C;
    sbit  DMAREQ_ID0_DMAMUX_C3CR_bit at DMAMUX_C3CR.B0;
    sbit  DMAREQ_ID1_DMAMUX_C3CR_bit at DMAMUX_C3CR.B1;
    sbit  DMAREQ_ID2_DMAMUX_C3CR_bit at DMAMUX_C3CR.B2;
    sbit  DMAREQ_ID3_DMAMUX_C3CR_bit at DMAMUX_C3CR.B3;
    sbit  DMAREQ_ID4_DMAMUX_C3CR_bit at DMAMUX_C3CR.B4;
    sbit  DMAREQ_ID5_DMAMUX_C3CR_bit at DMAMUX_C3CR.B5;
    sbit  DMAREQ_ID6_DMAMUX_C3CR_bit at DMAMUX_C3CR.B6;
    sbit  DMAREQ_ID7_DMAMUX_C3CR_bit at DMAMUX_C3CR.B7;
    sbit  SOIE_DMAMUX_C3CR_bit at DMAMUX_C3CR.B8;
    sbit  EGE_DMAMUX_C3CR_bit at DMAMUX_C3CR.B9;
    sbit  SE_DMAMUX_C3CR_bit at DMAMUX_C3CR.B16;
    sbit  SPOL0_DMAMUX_C3CR_bit at DMAMUX_C3CR.B17;
    sbit  SPOL1_DMAMUX_C3CR_bit at DMAMUX_C3CR.B18;
    sbit  NBREQ0_DMAMUX_C3CR_bit at DMAMUX_C3CR.B19;
    sbit  NBREQ1_DMAMUX_C3CR_bit at DMAMUX_C3CR.B20;
    sbit  NBREQ2_DMAMUX_C3CR_bit at DMAMUX_C3CR.B21;
    sbit  NBREQ3_DMAMUX_C3CR_bit at DMAMUX_C3CR.B22;
    sbit  NBREQ4_DMAMUX_C3CR_bit at DMAMUX_C3CR.B23;
    sbit  SYNC_ID0_DMAMUX_C3CR_bit at DMAMUX_C3CR.B24;
    sbit  SYNC_ID1_DMAMUX_C3CR_bit at DMAMUX_C3CR.B25;
    sbit  SYNC_ID2_DMAMUX_C3CR_bit at DMAMUX_C3CR.B26;
    sbit  SYNC_ID3_DMAMUX_C3CR_bit at DMAMUX_C3CR.B27;
    sbit  SYNC_ID4_DMAMUX_C3CR_bit at DMAMUX_C3CR.B28;

sfr unsigned long   volatile DMAMUX_C4CR          absolute 0x40020810;
    sbit  DMAREQ_ID0_DMAMUX_C4CR_bit at DMAMUX_C4CR.B0;
    sbit  DMAREQ_ID1_DMAMUX_C4CR_bit at DMAMUX_C4CR.B1;
    sbit  DMAREQ_ID2_DMAMUX_C4CR_bit at DMAMUX_C4CR.B2;
    sbit  DMAREQ_ID3_DMAMUX_C4CR_bit at DMAMUX_C4CR.B3;
    sbit  DMAREQ_ID4_DMAMUX_C4CR_bit at DMAMUX_C4CR.B4;
    sbit  DMAREQ_ID5_DMAMUX_C4CR_bit at DMAMUX_C4CR.B5;
    sbit  DMAREQ_ID6_DMAMUX_C4CR_bit at DMAMUX_C4CR.B6;
    sbit  DMAREQ_ID7_DMAMUX_C4CR_bit at DMAMUX_C4CR.B7;
    sbit  SOIE_DMAMUX_C4CR_bit at DMAMUX_C4CR.B8;
    sbit  EGE_DMAMUX_C4CR_bit at DMAMUX_C4CR.B9;
    sbit  SE_DMAMUX_C4CR_bit at DMAMUX_C4CR.B16;
    sbit  SPOL0_DMAMUX_C4CR_bit at DMAMUX_C4CR.B17;
    sbit  SPOL1_DMAMUX_C4CR_bit at DMAMUX_C4CR.B18;
    sbit  NBREQ0_DMAMUX_C4CR_bit at DMAMUX_C4CR.B19;
    sbit  NBREQ1_DMAMUX_C4CR_bit at DMAMUX_C4CR.B20;
    sbit  NBREQ2_DMAMUX_C4CR_bit at DMAMUX_C4CR.B21;
    sbit  NBREQ3_DMAMUX_C4CR_bit at DMAMUX_C4CR.B22;
    sbit  NBREQ4_DMAMUX_C4CR_bit at DMAMUX_C4CR.B23;
    sbit  SYNC_ID0_DMAMUX_C4CR_bit at DMAMUX_C4CR.B24;
    sbit  SYNC_ID1_DMAMUX_C4CR_bit at DMAMUX_C4CR.B25;
    sbit  SYNC_ID2_DMAMUX_C4CR_bit at DMAMUX_C4CR.B26;
    sbit  SYNC_ID3_DMAMUX_C4CR_bit at DMAMUX_C4CR.B27;
    sbit  SYNC_ID4_DMAMUX_C4CR_bit at DMAMUX_C4CR.B28;

sfr unsigned long   volatile DMAMUX_C5CR          absolute 0x40020814;
    sbit  DMAREQ_ID0_DMAMUX_C5CR_bit at DMAMUX_C5CR.B0;
    sbit  DMAREQ_ID1_DMAMUX_C5CR_bit at DMAMUX_C5CR.B1;
    sbit  DMAREQ_ID2_DMAMUX_C5CR_bit at DMAMUX_C5CR.B2;
    sbit  DMAREQ_ID3_DMAMUX_C5CR_bit at DMAMUX_C5CR.B3;
    sbit  DMAREQ_ID4_DMAMUX_C5CR_bit at DMAMUX_C5CR.B4;
    sbit  DMAREQ_ID5_DMAMUX_C5CR_bit at DMAMUX_C5CR.B5;
    sbit  DMAREQ_ID6_DMAMUX_C5CR_bit at DMAMUX_C5CR.B6;
    sbit  DMAREQ_ID7_DMAMUX_C5CR_bit at DMAMUX_C5CR.B7;
    sbit  SOIE_DMAMUX_C5CR_bit at DMAMUX_C5CR.B8;
    sbit  EGE_DMAMUX_C5CR_bit at DMAMUX_C5CR.B9;
    sbit  SE_DMAMUX_C5CR_bit at DMAMUX_C5CR.B16;
    sbit  SPOL0_DMAMUX_C5CR_bit at DMAMUX_C5CR.B17;
    sbit  SPOL1_DMAMUX_C5CR_bit at DMAMUX_C5CR.B18;
    sbit  NBREQ0_DMAMUX_C5CR_bit at DMAMUX_C5CR.B19;
    sbit  NBREQ1_DMAMUX_C5CR_bit at DMAMUX_C5CR.B20;
    sbit  NBREQ2_DMAMUX_C5CR_bit at DMAMUX_C5CR.B21;
    sbit  NBREQ3_DMAMUX_C5CR_bit at DMAMUX_C5CR.B22;
    sbit  NBREQ4_DMAMUX_C5CR_bit at DMAMUX_C5CR.B23;
    sbit  SYNC_ID0_DMAMUX_C5CR_bit at DMAMUX_C5CR.B24;
    sbit  SYNC_ID1_DMAMUX_C5CR_bit at DMAMUX_C5CR.B25;
    sbit  SYNC_ID2_DMAMUX_C5CR_bit at DMAMUX_C5CR.B26;
    sbit  SYNC_ID3_DMAMUX_C5CR_bit at DMAMUX_C5CR.B27;
    sbit  SYNC_ID4_DMAMUX_C5CR_bit at DMAMUX_C5CR.B28;

sfr unsigned long   volatile DMAMUX_C6CR          absolute 0x40020818;
    sbit  DMAREQ_ID0_DMAMUX_C6CR_bit at DMAMUX_C6CR.B0;
    sbit  DMAREQ_ID1_DMAMUX_C6CR_bit at DMAMUX_C6CR.B1;
    sbit  DMAREQ_ID2_DMAMUX_C6CR_bit at DMAMUX_C6CR.B2;
    sbit  DMAREQ_ID3_DMAMUX_C6CR_bit at DMAMUX_C6CR.B3;
    sbit  DMAREQ_ID4_DMAMUX_C6CR_bit at DMAMUX_C6CR.B4;
    sbit  DMAREQ_ID5_DMAMUX_C6CR_bit at DMAMUX_C6CR.B5;
    sbit  DMAREQ_ID6_DMAMUX_C6CR_bit at DMAMUX_C6CR.B6;
    sbit  DMAREQ_ID7_DMAMUX_C6CR_bit at DMAMUX_C6CR.B7;
    sbit  SOIE_DMAMUX_C6CR_bit at DMAMUX_C6CR.B8;
    sbit  EGE_DMAMUX_C6CR_bit at DMAMUX_C6CR.B9;
    sbit  SE_DMAMUX_C6CR_bit at DMAMUX_C6CR.B16;
    sbit  SPOL0_DMAMUX_C6CR_bit at DMAMUX_C6CR.B17;
    sbit  SPOL1_DMAMUX_C6CR_bit at DMAMUX_C6CR.B18;
    sbit  NBREQ0_DMAMUX_C6CR_bit at DMAMUX_C6CR.B19;
    sbit  NBREQ1_DMAMUX_C6CR_bit at DMAMUX_C6CR.B20;
    sbit  NBREQ2_DMAMUX_C6CR_bit at DMAMUX_C6CR.B21;
    sbit  NBREQ3_DMAMUX_C6CR_bit at DMAMUX_C6CR.B22;
    sbit  NBREQ4_DMAMUX_C6CR_bit at DMAMUX_C6CR.B23;
    sbit  SYNC_ID0_DMAMUX_C6CR_bit at DMAMUX_C6CR.B24;
    sbit  SYNC_ID1_DMAMUX_C6CR_bit at DMAMUX_C6CR.B25;
    sbit  SYNC_ID2_DMAMUX_C6CR_bit at DMAMUX_C6CR.B26;
    sbit  SYNC_ID3_DMAMUX_C6CR_bit at DMAMUX_C6CR.B27;
    sbit  SYNC_ID4_DMAMUX_C6CR_bit at DMAMUX_C6CR.B28;

sfr unsigned long   volatile DMAMUX_RG0CR         absolute 0x40020900;
    const register unsigned short int SIG_ID0 = 0;
    sbit  SIG_ID0_bit at DMAMUX_RG0CR.B0;
    const register unsigned short int SIG_ID1 = 1;
    sbit  SIG_ID1_bit at DMAMUX_RG0CR.B1;
    const register unsigned short int SIG_ID2 = 2;
    sbit  SIG_ID2_bit at DMAMUX_RG0CR.B2;
    const register unsigned short int SIG_ID3 = 3;
    sbit  SIG_ID3_bit at DMAMUX_RG0CR.B3;
    const register unsigned short int SIG_ID4 = 4;
    sbit  SIG_ID4_bit at DMAMUX_RG0CR.B4;
    const register unsigned short int OIE = 8;
    sbit  OIE_bit at DMAMUX_RG0CR.B8;
    const register unsigned short int GE = 16;
    sbit  GE_bit at DMAMUX_RG0CR.B16;
    const register unsigned short int GPOL0 = 17;
    sbit  GPOL0_bit at DMAMUX_RG0CR.B17;
    const register unsigned short int GPOL1 = 18;
    sbit  GPOL1_bit at DMAMUX_RG0CR.B18;
    const register unsigned short int GNBREQ0 = 19;
    sbit  GNBREQ0_bit at DMAMUX_RG0CR.B19;
    const register unsigned short int GNBREQ1 = 20;
    sbit  GNBREQ1_bit at DMAMUX_RG0CR.B20;
    const register unsigned short int GNBREQ2 = 21;
    sbit  GNBREQ2_bit at DMAMUX_RG0CR.B21;
    const register unsigned short int GNBREQ3 = 22;
    sbit  GNBREQ3_bit at DMAMUX_RG0CR.B22;
    const register unsigned short int GNBREQ4 = 23;
    sbit  GNBREQ4_bit at DMAMUX_RG0CR.B23;

sfr unsigned long   volatile DMAMUX_RG1CR         absolute 0x40020904;
    sbit  SIG_ID0_DMAMUX_RG1CR_bit at DMAMUX_RG1CR.B0;
    sbit  SIG_ID1_DMAMUX_RG1CR_bit at DMAMUX_RG1CR.B1;
    sbit  SIG_ID2_DMAMUX_RG1CR_bit at DMAMUX_RG1CR.B2;
    sbit  SIG_ID3_DMAMUX_RG1CR_bit at DMAMUX_RG1CR.B3;
    sbit  SIG_ID4_DMAMUX_RG1CR_bit at DMAMUX_RG1CR.B4;
    sbit  OIE_DMAMUX_RG1CR_bit at DMAMUX_RG1CR.B8;
    sbit  GE_DMAMUX_RG1CR_bit at DMAMUX_RG1CR.B16;
    sbit  GPOL0_DMAMUX_RG1CR_bit at DMAMUX_RG1CR.B17;
    sbit  GPOL1_DMAMUX_RG1CR_bit at DMAMUX_RG1CR.B18;
    sbit  GNBREQ0_DMAMUX_RG1CR_bit at DMAMUX_RG1CR.B19;
    sbit  GNBREQ1_DMAMUX_RG1CR_bit at DMAMUX_RG1CR.B20;
    sbit  GNBREQ2_DMAMUX_RG1CR_bit at DMAMUX_RG1CR.B21;
    sbit  GNBREQ3_DMAMUX_RG1CR_bit at DMAMUX_RG1CR.B22;
    sbit  GNBREQ4_DMAMUX_RG1CR_bit at DMAMUX_RG1CR.B23;

sfr unsigned long   volatile DMAMUX_RG2CR         absolute 0x40020908;
    sbit  SIG_ID0_DMAMUX_RG2CR_bit at DMAMUX_RG2CR.B0;
    sbit  SIG_ID1_DMAMUX_RG2CR_bit at DMAMUX_RG2CR.B1;
    sbit  SIG_ID2_DMAMUX_RG2CR_bit at DMAMUX_RG2CR.B2;
    sbit  SIG_ID3_DMAMUX_RG2CR_bit at DMAMUX_RG2CR.B3;
    sbit  SIG_ID4_DMAMUX_RG2CR_bit at DMAMUX_RG2CR.B4;
    sbit  OIE_DMAMUX_RG2CR_bit at DMAMUX_RG2CR.B8;
    sbit  GE_DMAMUX_RG2CR_bit at DMAMUX_RG2CR.B16;
    sbit  GPOL0_DMAMUX_RG2CR_bit at DMAMUX_RG2CR.B17;
    sbit  GPOL1_DMAMUX_RG2CR_bit at DMAMUX_RG2CR.B18;
    sbit  GNBREQ0_DMAMUX_RG2CR_bit at DMAMUX_RG2CR.B19;
    sbit  GNBREQ1_DMAMUX_RG2CR_bit at DMAMUX_RG2CR.B20;
    sbit  GNBREQ2_DMAMUX_RG2CR_bit at DMAMUX_RG2CR.B21;
    sbit  GNBREQ3_DMAMUX_RG2CR_bit at DMAMUX_RG2CR.B22;
    sbit  GNBREQ4_DMAMUX_RG2CR_bit at DMAMUX_RG2CR.B23;

sfr unsigned long   volatile DMAMUX_RG3CR         absolute 0x4002090C;
    sbit  SIG_ID0_DMAMUX_RG3CR_bit at DMAMUX_RG3CR.B0;
    sbit  SIG_ID1_DMAMUX_RG3CR_bit at DMAMUX_RG3CR.B1;
    sbit  SIG_ID2_DMAMUX_RG3CR_bit at DMAMUX_RG3CR.B2;
    sbit  SIG_ID3_DMAMUX_RG3CR_bit at DMAMUX_RG3CR.B3;
    sbit  SIG_ID4_DMAMUX_RG3CR_bit at DMAMUX_RG3CR.B4;
    sbit  OIE_DMAMUX_RG3CR_bit at DMAMUX_RG3CR.B8;
    sbit  GE_DMAMUX_RG3CR_bit at DMAMUX_RG3CR.B16;
    sbit  GPOL0_DMAMUX_RG3CR_bit at DMAMUX_RG3CR.B17;
    sbit  GPOL1_DMAMUX_RG3CR_bit at DMAMUX_RG3CR.B18;
    sbit  GNBREQ0_DMAMUX_RG3CR_bit at DMAMUX_RG3CR.B19;
    sbit  GNBREQ1_DMAMUX_RG3CR_bit at DMAMUX_RG3CR.B20;
    sbit  GNBREQ2_DMAMUX_RG3CR_bit at DMAMUX_RG3CR.B21;
    sbit  GNBREQ3_DMAMUX_RG3CR_bit at DMAMUX_RG3CR.B22;
    sbit  GNBREQ4_DMAMUX_RG3CR_bit at DMAMUX_RG3CR.B23;

sfr unsigned long   volatile DMAMUX_RGSR          absolute 0x40020940;
    const register unsigned short int OF0 = 0;
    sbit  OF0_bit at DMAMUX_RGSR.B0;
    const register unsigned short int OF1 = 1;
    sbit  OF1_bit at DMAMUX_RGSR.B1;
    const register unsigned short int OF2 = 2;
    sbit  OF2_bit at DMAMUX_RGSR.B2;
    const register unsigned short int OF3 = 3;
    sbit  OF3_bit at DMAMUX_RGSR.B3;

sfr unsigned long   volatile DMAMUX_RGCFR         absolute 0x40020944;
    const register unsigned short int COF0 = 0;
    sbit  COF0_bit at DMAMUX_RGCFR.B0;
    const register unsigned short int COF1 = 1;
    sbit  COF1_bit at DMAMUX_RGCFR.B1;
    const register unsigned short int COF2 = 2;
    sbit  COF2_bit at DMAMUX_RGCFR.B2;
    const register unsigned short int COF3 = 3;
    sbit  COF3_bit at DMAMUX_RGCFR.B3;

sfr far unsigned long   volatile GPIOA_BASE           absolute 0x50000000;
sfr far unsigned long   volatile GPIOA_MODER          absolute 0x50000000;
    const register unsigned short int MODER150 = 30;
    sbit  MODER150_bit at GPIOA_MODER.B30;
    const register unsigned short int MODER151 = 31;
    sbit  MODER151_bit at GPIOA_MODER.B31;
    const register unsigned short int MODER140 = 28;
    sbit  MODER140_bit at GPIOA_MODER.B28;
    const register unsigned short int MODER141 = 29;
    sbit  MODER141_bit at GPIOA_MODER.B29;
    const register unsigned short int MODER130 = 26;
    sbit  MODER130_bit at GPIOA_MODER.B26;
    const register unsigned short int MODER131 = 27;
    sbit  MODER131_bit at GPIOA_MODER.B27;
    const register unsigned short int MODER120 = 24;
    sbit  MODER120_bit at GPIOA_MODER.B24;
    const register unsigned short int MODER121 = 25;
    sbit  MODER121_bit at GPIOA_MODER.B25;
    const register unsigned short int MODER110 = 22;
    sbit  MODER110_bit at GPIOA_MODER.B22;
    const register unsigned short int MODER111 = 23;
    sbit  MODER111_bit at GPIOA_MODER.B23;
    const register unsigned short int MODER100 = 20;
    sbit  MODER100_bit at GPIOA_MODER.B20;
    const register unsigned short int MODER101 = 21;
    sbit  MODER101_bit at GPIOA_MODER.B21;
    const register unsigned short int MODER90 = 18;
    sbit  MODER90_bit at GPIOA_MODER.B18;
    const register unsigned short int MODER91 = 19;
    sbit  MODER91_bit at GPIOA_MODER.B19;
    const register unsigned short int MODER80 = 16;
    sbit  MODER80_bit at GPIOA_MODER.B16;
    const register unsigned short int MODER81 = 17;
    sbit  MODER81_bit at GPIOA_MODER.B17;
    const register unsigned short int MODER70 = 14;
    sbit  MODER70_bit at GPIOA_MODER.B14;
    const register unsigned short int MODER71 = 15;
    sbit  MODER71_bit at GPIOA_MODER.B15;
    const register unsigned short int MODER60 = 12;
    sbit  MODER60_bit at GPIOA_MODER.B12;
    const register unsigned short int MODER61 = 13;
    sbit  MODER61_bit at GPIOA_MODER.B13;
    const register unsigned short int MODER50 = 10;
    sbit  MODER50_bit at GPIOA_MODER.B10;
    const register unsigned short int MODER51 = 11;
    sbit  MODER51_bit at GPIOA_MODER.B11;
    const register unsigned short int MODER40 = 8;
    sbit  MODER40_bit at GPIOA_MODER.B8;
    const register unsigned short int MODER41 = 9;
    sbit  MODER41_bit at GPIOA_MODER.B9;
    const register unsigned short int MODER30 = 6;
    sbit  MODER30_bit at GPIOA_MODER.B6;
    const register unsigned short int MODER31 = 7;
    sbit  MODER31_bit at GPIOA_MODER.B7;
    const register unsigned short int MODER20 = 4;
    sbit  MODER20_bit at GPIOA_MODER.B4;
    const register unsigned short int MODER21 = 5;
    sbit  MODER21_bit at GPIOA_MODER.B5;
    const register unsigned short int MODER10 = 2;
    sbit  MODER10_bit at GPIOA_MODER.B2;
    const register unsigned short int MODER11 = 3;
    sbit  MODER11_bit at GPIOA_MODER.B3;
    const register unsigned short int MODER00 = 0;
    sbit  MODER00_bit at GPIOA_MODER.B0;
    const register unsigned short int MODER01 = 1;
    sbit  MODER01_bit at GPIOA_MODER.B1;

sfr far unsigned long   volatile GPIOA_OTYPER         absolute 0x50000004;
    const register unsigned short int OT15 = 15;
    sbit  OT15_bit at GPIOA_OTYPER.B15;
    const register unsigned short int OT14 = 14;
    sbit  OT14_bit at GPIOA_OTYPER.B14;
    const register unsigned short int OT13 = 13;
    sbit  OT13_bit at GPIOA_OTYPER.B13;
    const register unsigned short int OT12 = 12;
    sbit  OT12_bit at GPIOA_OTYPER.B12;
    const register unsigned short int OT11 = 11;
    sbit  OT11_bit at GPIOA_OTYPER.B11;
    const register unsigned short int OT10 = 10;
    sbit  OT10_bit at GPIOA_OTYPER.B10;
    const register unsigned short int OT9 = 9;
    sbit  OT9_bit at GPIOA_OTYPER.B9;
    const register unsigned short int OT8 = 8;
    sbit  OT8_bit at GPIOA_OTYPER.B8;
    const register unsigned short int OT7 = 7;
    sbit  OT7_bit at GPIOA_OTYPER.B7;
    const register unsigned short int OT6 = 6;
    sbit  OT6_bit at GPIOA_OTYPER.B6;
    const register unsigned short int OT5 = 5;
    sbit  OT5_bit at GPIOA_OTYPER.B5;
    const register unsigned short int OT4 = 4;
    sbit  OT4_bit at GPIOA_OTYPER.B4;
    const register unsigned short int OT3 = 3;
    sbit  OT3_bit at GPIOA_OTYPER.B3;
    const register unsigned short int OT2 = 2;
    sbit  OT2_bit at GPIOA_OTYPER.B2;
    const register unsigned short int OT1 = 1;
    sbit  OT1_bit at GPIOA_OTYPER.B1;
    const register unsigned short int OT0 = 0;
    sbit  OT0_bit at GPIOA_OTYPER.B0;

sfr far unsigned long   volatile GPIOA_OSPEEDR        absolute 0x50000008;
    const register unsigned short int OSPEEDR150 = 30;
    sbit  OSPEEDR150_bit at GPIOA_OSPEEDR.B30;
    const register unsigned short int OSPEEDR151 = 31;
    sbit  OSPEEDR151_bit at GPIOA_OSPEEDR.B31;
    const register unsigned short int OSPEEDR140 = 28;
    sbit  OSPEEDR140_bit at GPIOA_OSPEEDR.B28;
    const register unsigned short int OSPEEDR141 = 29;
    sbit  OSPEEDR141_bit at GPIOA_OSPEEDR.B29;
    const register unsigned short int OSPEEDR130 = 26;
    sbit  OSPEEDR130_bit at GPIOA_OSPEEDR.B26;
    const register unsigned short int OSPEEDR131 = 27;
    sbit  OSPEEDR131_bit at GPIOA_OSPEEDR.B27;
    const register unsigned short int OSPEEDR120 = 24;
    sbit  OSPEEDR120_bit at GPIOA_OSPEEDR.B24;
    const register unsigned short int OSPEEDR121 = 25;
    sbit  OSPEEDR121_bit at GPIOA_OSPEEDR.B25;
    const register unsigned short int OSPEEDR110 = 22;
    sbit  OSPEEDR110_bit at GPIOA_OSPEEDR.B22;
    const register unsigned short int OSPEEDR111 = 23;
    sbit  OSPEEDR111_bit at GPIOA_OSPEEDR.B23;
    const register unsigned short int OSPEEDR100 = 20;
    sbit  OSPEEDR100_bit at GPIOA_OSPEEDR.B20;
    const register unsigned short int OSPEEDR101 = 21;
    sbit  OSPEEDR101_bit at GPIOA_OSPEEDR.B21;
    const register unsigned short int OSPEEDR90 = 18;
    sbit  OSPEEDR90_bit at GPIOA_OSPEEDR.B18;
    const register unsigned short int OSPEEDR91 = 19;
    sbit  OSPEEDR91_bit at GPIOA_OSPEEDR.B19;
    const register unsigned short int OSPEEDR80 = 16;
    sbit  OSPEEDR80_bit at GPIOA_OSPEEDR.B16;
    const register unsigned short int OSPEEDR81 = 17;
    sbit  OSPEEDR81_bit at GPIOA_OSPEEDR.B17;
    const register unsigned short int OSPEEDR70 = 14;
    sbit  OSPEEDR70_bit at GPIOA_OSPEEDR.B14;
    const register unsigned short int OSPEEDR71 = 15;
    sbit  OSPEEDR71_bit at GPIOA_OSPEEDR.B15;
    const register unsigned short int OSPEEDR60 = 12;
    sbit  OSPEEDR60_bit at GPIOA_OSPEEDR.B12;
    const register unsigned short int OSPEEDR61 = 13;
    sbit  OSPEEDR61_bit at GPIOA_OSPEEDR.B13;
    const register unsigned short int OSPEEDR50 = 10;
    sbit  OSPEEDR50_bit at GPIOA_OSPEEDR.B10;
    const register unsigned short int OSPEEDR51 = 11;
    sbit  OSPEEDR51_bit at GPIOA_OSPEEDR.B11;
    const register unsigned short int OSPEEDR40 = 8;
    sbit  OSPEEDR40_bit at GPIOA_OSPEEDR.B8;
    const register unsigned short int OSPEEDR41 = 9;
    sbit  OSPEEDR41_bit at GPIOA_OSPEEDR.B9;
    const register unsigned short int OSPEEDR30 = 6;
    sbit  OSPEEDR30_bit at GPIOA_OSPEEDR.B6;
    const register unsigned short int OSPEEDR31 = 7;
    sbit  OSPEEDR31_bit at GPIOA_OSPEEDR.B7;
    const register unsigned short int OSPEEDR20 = 4;
    sbit  OSPEEDR20_bit at GPIOA_OSPEEDR.B4;
    const register unsigned short int OSPEEDR21 = 5;
    sbit  OSPEEDR21_bit at GPIOA_OSPEEDR.B5;
    const register unsigned short int OSPEEDR10 = 2;
    sbit  OSPEEDR10_bit at GPIOA_OSPEEDR.B2;
    const register unsigned short int OSPEEDR11 = 3;
    sbit  OSPEEDR11_bit at GPIOA_OSPEEDR.B3;
    const register unsigned short int OSPEEDR00 = 0;
    sbit  OSPEEDR00_bit at GPIOA_OSPEEDR.B0;
    const register unsigned short int OSPEEDR01 = 1;
    sbit  OSPEEDR01_bit at GPIOA_OSPEEDR.B1;

sfr far unsigned long   volatile GPIOA_PUPDR          absolute 0x5000000C;
    const register unsigned short int PUPDR150 = 30;
    sbit  PUPDR150_bit at GPIOA_PUPDR.B30;
    const register unsigned short int PUPDR151 = 31;
    sbit  PUPDR151_bit at GPIOA_PUPDR.B31;
    const register unsigned short int PUPDR140 = 28;
    sbit  PUPDR140_bit at GPIOA_PUPDR.B28;
    const register unsigned short int PUPDR141 = 29;
    sbit  PUPDR141_bit at GPIOA_PUPDR.B29;
    const register unsigned short int PUPDR130 = 26;
    sbit  PUPDR130_bit at GPIOA_PUPDR.B26;
    const register unsigned short int PUPDR131 = 27;
    sbit  PUPDR131_bit at GPIOA_PUPDR.B27;
    const register unsigned short int PUPDR120 = 24;
    sbit  PUPDR120_bit at GPIOA_PUPDR.B24;
    const register unsigned short int PUPDR121 = 25;
    sbit  PUPDR121_bit at GPIOA_PUPDR.B25;
    const register unsigned short int PUPDR110 = 22;
    sbit  PUPDR110_bit at GPIOA_PUPDR.B22;
    const register unsigned short int PUPDR111 = 23;
    sbit  PUPDR111_bit at GPIOA_PUPDR.B23;
    const register unsigned short int PUPDR100 = 20;
    sbit  PUPDR100_bit at GPIOA_PUPDR.B20;
    const register unsigned short int PUPDR101 = 21;
    sbit  PUPDR101_bit at GPIOA_PUPDR.B21;
    const register unsigned short int PUPDR90 = 18;
    sbit  PUPDR90_bit at GPIOA_PUPDR.B18;
    const register unsigned short int PUPDR91 = 19;
    sbit  PUPDR91_bit at GPIOA_PUPDR.B19;
    const register unsigned short int PUPDR80 = 16;
    sbit  PUPDR80_bit at GPIOA_PUPDR.B16;
    const register unsigned short int PUPDR81 = 17;
    sbit  PUPDR81_bit at GPIOA_PUPDR.B17;
    const register unsigned short int PUPDR70 = 14;
    sbit  PUPDR70_bit at GPIOA_PUPDR.B14;
    const register unsigned short int PUPDR71 = 15;
    sbit  PUPDR71_bit at GPIOA_PUPDR.B15;
    const register unsigned short int PUPDR60 = 12;
    sbit  PUPDR60_bit at GPIOA_PUPDR.B12;
    const register unsigned short int PUPDR61 = 13;
    sbit  PUPDR61_bit at GPIOA_PUPDR.B13;
    const register unsigned short int PUPDR50 = 10;
    sbit  PUPDR50_bit at GPIOA_PUPDR.B10;
    const register unsigned short int PUPDR51 = 11;
    sbit  PUPDR51_bit at GPIOA_PUPDR.B11;
    const register unsigned short int PUPDR40 = 8;
    sbit  PUPDR40_bit at GPIOA_PUPDR.B8;
    const register unsigned short int PUPDR41 = 9;
    sbit  PUPDR41_bit at GPIOA_PUPDR.B9;
    const register unsigned short int PUPDR30 = 6;
    sbit  PUPDR30_bit at GPIOA_PUPDR.B6;
    const register unsigned short int PUPDR31 = 7;
    sbit  PUPDR31_bit at GPIOA_PUPDR.B7;
    const register unsigned short int PUPDR20 = 4;
    sbit  PUPDR20_bit at GPIOA_PUPDR.B4;
    const register unsigned short int PUPDR21 = 5;
    sbit  PUPDR21_bit at GPIOA_PUPDR.B5;
    const register unsigned short int PUPDR10 = 2;
    sbit  PUPDR10_bit at GPIOA_PUPDR.B2;
    const register unsigned short int PUPDR11 = 3;
    sbit  PUPDR11_bit at GPIOA_PUPDR.B3;
    const register unsigned short int PUPDR00 = 0;
    sbit  PUPDR00_bit at GPIOA_PUPDR.B0;
    const register unsigned short int PUPDR01 = 1;
    sbit  PUPDR01_bit at GPIOA_PUPDR.B1;

sfr far unsigned long   volatile GPIOA_IDR            absolute 0x50000010;
    const register unsigned short int IDR15 = 15;
    sbit  IDR15_bit at GPIOA_IDR.B15;
    const register unsigned short int IDR14 = 14;
    sbit  IDR14_bit at GPIOA_IDR.B14;
    const register unsigned short int IDR13 = 13;
    sbit  IDR13_bit at GPIOA_IDR.B13;
    const register unsigned short int IDR12 = 12;
    sbit  IDR12_bit at GPIOA_IDR.B12;
    const register unsigned short int IDR11 = 11;
    sbit  IDR11_bit at GPIOA_IDR.B11;
    const register unsigned short int IDR10 = 10;
    sbit  IDR10_bit at GPIOA_IDR.B10;
    const register unsigned short int IDR9 = 9;
    sbit  IDR9_bit at GPIOA_IDR.B9;
    const register unsigned short int IDR8 = 8;
    sbit  IDR8_bit at GPIOA_IDR.B8;
    const register unsigned short int IDR7 = 7;
    sbit  IDR7_bit at GPIOA_IDR.B7;
    const register unsigned short int IDR6 = 6;
    sbit  IDR6_bit at GPIOA_IDR.B6;
    const register unsigned short int IDR5 = 5;
    sbit  IDR5_bit at GPIOA_IDR.B5;
    const register unsigned short int IDR4 = 4;
    sbit  IDR4_bit at GPIOA_IDR.B4;
    const register unsigned short int IDR3 = 3;
    sbit  IDR3_bit at GPIOA_IDR.B3;
    const register unsigned short int IDR2 = 2;
    sbit  IDR2_bit at GPIOA_IDR.B2;
    const register unsigned short int IDR1 = 1;
    sbit  IDR1_bit at GPIOA_IDR.B1;
    const register unsigned short int IDR0 = 0;
    sbit  IDR0_bit at GPIOA_IDR.B0;

sfr far unsigned long   volatile GPIOA_ODR            absolute 0x50000014;
    const register unsigned short int ODR15 = 15;
    sbit  ODR15_bit at GPIOA_ODR.B15;
    const register unsigned short int ODR14 = 14;
    sbit  ODR14_bit at GPIOA_ODR.B14;
    const register unsigned short int ODR13 = 13;
    sbit  ODR13_bit at GPIOA_ODR.B13;
    const register unsigned short int ODR12 = 12;
    sbit  ODR12_bit at GPIOA_ODR.B12;
    const register unsigned short int ODR11 = 11;
    sbit  ODR11_bit at GPIOA_ODR.B11;
    const register unsigned short int ODR10 = 10;
    sbit  ODR10_bit at GPIOA_ODR.B10;
    const register unsigned short int ODR9 = 9;
    sbit  ODR9_bit at GPIOA_ODR.B9;
    const register unsigned short int ODR8 = 8;
    sbit  ODR8_bit at GPIOA_ODR.B8;
    const register unsigned short int ODR7 = 7;
    sbit  ODR7_bit at GPIOA_ODR.B7;
    const register unsigned short int ODR6 = 6;
    sbit  ODR6_bit at GPIOA_ODR.B6;
    const register unsigned short int ODR5 = 5;
    sbit  ODR5_bit at GPIOA_ODR.B5;
    const register unsigned short int ODR4 = 4;
    sbit  ODR4_bit at GPIOA_ODR.B4;
    const register unsigned short int ODR3 = 3;
    sbit  ODR3_bit at GPIOA_ODR.B3;
    const register unsigned short int ODR2 = 2;
    sbit  ODR2_bit at GPIOA_ODR.B2;
    const register unsigned short int ODR1 = 1;
    sbit  ODR1_bit at GPIOA_ODR.B1;
    const register unsigned short int ODR0 = 0;
    sbit  ODR0_bit at GPIOA_ODR.B0;

sfr far unsigned long   volatile GPIOA_BSRR           absolute 0x50000018;
    const register unsigned short int BR15 = 31;
    sbit  BR15_bit at GPIOA_BSRR.B31;
    const register unsigned short int BR14 = 30;
    sbit  BR14_bit at GPIOA_BSRR.B30;
    const register unsigned short int BR13 = 29;
    sbit  BR13_bit at GPIOA_BSRR.B29;
    const register unsigned short int BR12 = 28;
    sbit  BR12_bit at GPIOA_BSRR.B28;
    const register unsigned short int BR11 = 27;
    sbit  BR11_bit at GPIOA_BSRR.B27;
    const register unsigned short int BR10 = 26;
    sbit  BR10_bit at GPIOA_BSRR.B26;
    const register unsigned short int BR9 = 25;
    sbit  BR9_bit at GPIOA_BSRR.B25;
    const register unsigned short int BR8 = 24;
    sbit  BR8_bit at GPIOA_BSRR.B24;
    const register unsigned short int BR7 = 23;
    sbit  BR7_bit at GPIOA_BSRR.B23;
    const register unsigned short int BR6 = 22;
    sbit  BR6_bit at GPIOA_BSRR.B22;
    const register unsigned short int BR5 = 21;
    sbit  BR5_bit at GPIOA_BSRR.B21;
    const register unsigned short int BR4 = 20;
    sbit  BR4_bit at GPIOA_BSRR.B20;
    const register unsigned short int BR3 = 19;
    sbit  BR3_bit at GPIOA_BSRR.B19;
    const register unsigned short int BR2 = 18;
    sbit  BR2_bit at GPIOA_BSRR.B18;
    const register unsigned short int BR1 = 17;
    sbit  BR1_bit at GPIOA_BSRR.B17;
    const register unsigned short int BR0 = 16;
    sbit  BR0_bit at GPIOA_BSRR.B16;
    const register unsigned short int BS15 = 15;
    sbit  BS15_bit at GPIOA_BSRR.B15;
    const register unsigned short int BS14 = 14;
    sbit  BS14_bit at GPIOA_BSRR.B14;
    const register unsigned short int BS13 = 13;
    sbit  BS13_bit at GPIOA_BSRR.B13;
    const register unsigned short int BS12 = 12;
    sbit  BS12_bit at GPIOA_BSRR.B12;
    const register unsigned short int BS11 = 11;
    sbit  BS11_bit at GPIOA_BSRR.B11;
    const register unsigned short int BS10 = 10;
    sbit  BS10_bit at GPIOA_BSRR.B10;
    const register unsigned short int BS9 = 9;
    sbit  BS9_bit at GPIOA_BSRR.B9;
    const register unsigned short int BS8 = 8;
    sbit  BS8_bit at GPIOA_BSRR.B8;
    const register unsigned short int BS7 = 7;
    sbit  BS7_bit at GPIOA_BSRR.B7;
    const register unsigned short int BS6 = 6;
    sbit  BS6_bit at GPIOA_BSRR.B6;
    const register unsigned short int BS5 = 5;
    sbit  BS5_bit at GPIOA_BSRR.B5;
    const register unsigned short int BS4 = 4;
    sbit  BS4_bit at GPIOA_BSRR.B4;
    const register unsigned short int BS3 = 3;
    sbit  BS3_bit at GPIOA_BSRR.B3;
    const register unsigned short int BS2 = 2;
    sbit  BS2_bit at GPIOA_BSRR.B2;
    const register unsigned short int BS1 = 1;
    sbit  BS1_bit at GPIOA_BSRR.B1;
    const register unsigned short int BS0 = 0;
    sbit  BS0_bit at GPIOA_BSRR.B0;

sfr far unsigned long   volatile GPIOA_LCKR           absolute 0x5000001C;
    const register unsigned short int LCKK = 16;
    sbit  LCKK_bit at GPIOA_LCKR.B16;
    const register unsigned short int LCK15 = 15;
    sbit  LCK15_bit at GPIOA_LCKR.B15;
    const register unsigned short int LCK14 = 14;
    sbit  LCK14_bit at GPIOA_LCKR.B14;
    const register unsigned short int LCK13 = 13;
    sbit  LCK13_bit at GPIOA_LCKR.B13;
    const register unsigned short int LCK12 = 12;
    sbit  LCK12_bit at GPIOA_LCKR.B12;
    const register unsigned short int LCK11 = 11;
    sbit  LCK11_bit at GPIOA_LCKR.B11;
    const register unsigned short int LCK10 = 10;
    sbit  LCK10_bit at GPIOA_LCKR.B10;
    const register unsigned short int LCK9 = 9;
    sbit  LCK9_bit at GPIOA_LCKR.B9;
    const register unsigned short int LCK8 = 8;
    sbit  LCK8_bit at GPIOA_LCKR.B8;
    const register unsigned short int LCK7 = 7;
    sbit  LCK7_bit at GPIOA_LCKR.B7;
    const register unsigned short int LCK6 = 6;
    sbit  LCK6_bit at GPIOA_LCKR.B6;
    const register unsigned short int LCK5 = 5;
    sbit  LCK5_bit at GPIOA_LCKR.B5;
    const register unsigned short int LCK4 = 4;
    sbit  LCK4_bit at GPIOA_LCKR.B4;
    const register unsigned short int LCK3 = 3;
    sbit  LCK3_bit at GPIOA_LCKR.B3;
    const register unsigned short int LCK2 = 2;
    sbit  LCK2_bit at GPIOA_LCKR.B2;
    const register unsigned short int LCK1 = 1;
    sbit  LCK1_bit at GPIOA_LCKR.B1;
    const register unsigned short int LCK0 = 0;
    sbit  LCK0_bit at GPIOA_LCKR.B0;

sfr far unsigned long   volatile GPIOA_AFRL           absolute 0x50000020;
    const register unsigned short int AFSEL70 = 28;
    sbit  AFSEL70_bit at GPIOA_AFRL.B28;
    const register unsigned short int AFSEL71 = 29;
    sbit  AFSEL71_bit at GPIOA_AFRL.B29;
    const register unsigned short int AFSEL72 = 30;
    sbit  AFSEL72_bit at GPIOA_AFRL.B30;
    const register unsigned short int AFSEL73 = 31;
    sbit  AFSEL73_bit at GPIOA_AFRL.B31;
    const register unsigned short int AFSEL60 = 24;
    sbit  AFSEL60_bit at GPIOA_AFRL.B24;
    const register unsigned short int AFSEL61 = 25;
    sbit  AFSEL61_bit at GPIOA_AFRL.B25;
    const register unsigned short int AFSEL62 = 26;
    sbit  AFSEL62_bit at GPIOA_AFRL.B26;
    const register unsigned short int AFSEL63 = 27;
    sbit  AFSEL63_bit at GPIOA_AFRL.B27;
    const register unsigned short int AFSEL50 = 20;
    sbit  AFSEL50_bit at GPIOA_AFRL.B20;
    const register unsigned short int AFSEL51 = 21;
    sbit  AFSEL51_bit at GPIOA_AFRL.B21;
    const register unsigned short int AFSEL52 = 22;
    sbit  AFSEL52_bit at GPIOA_AFRL.B22;
    const register unsigned short int AFSEL53 = 23;
    sbit  AFSEL53_bit at GPIOA_AFRL.B23;
    const register unsigned short int AFSEL40 = 16;
    sbit  AFSEL40_bit at GPIOA_AFRL.B16;
    const register unsigned short int AFSEL41 = 17;
    sbit  AFSEL41_bit at GPIOA_AFRL.B17;
    const register unsigned short int AFSEL42 = 18;
    sbit  AFSEL42_bit at GPIOA_AFRL.B18;
    const register unsigned short int AFSEL43 = 19;
    sbit  AFSEL43_bit at GPIOA_AFRL.B19;
    const register unsigned short int AFSEL30 = 12;
    sbit  AFSEL30_bit at GPIOA_AFRL.B12;
    const register unsigned short int AFSEL31 = 13;
    sbit  AFSEL31_bit at GPIOA_AFRL.B13;
    const register unsigned short int AFSEL32 = 14;
    sbit  AFSEL32_bit at GPIOA_AFRL.B14;
    const register unsigned short int AFSEL33 = 15;
    sbit  AFSEL33_bit at GPIOA_AFRL.B15;
    const register unsigned short int AFSEL20 = 8;
    sbit  AFSEL20_bit at GPIOA_AFRL.B8;
    const register unsigned short int AFSEL21 = 9;
    sbit  AFSEL21_bit at GPIOA_AFRL.B9;
    const register unsigned short int AFSEL22 = 10;
    sbit  AFSEL22_bit at GPIOA_AFRL.B10;
    const register unsigned short int AFSEL23 = 11;
    sbit  AFSEL23_bit at GPIOA_AFRL.B11;
    const register unsigned short int AFSEL10 = 4;
    sbit  AFSEL10_bit at GPIOA_AFRL.B4;
    const register unsigned short int AFSEL11 = 5;
    sbit  AFSEL11_bit at GPIOA_AFRL.B5;
    const register unsigned short int AFSEL12 = 6;
    sbit  AFSEL12_bit at GPIOA_AFRL.B6;
    const register unsigned short int AFSEL13 = 7;
    sbit  AFSEL13_bit at GPIOA_AFRL.B7;
    const register unsigned short int AFSEL00 = 0;
    sbit  AFSEL00_bit at GPIOA_AFRL.B0;
    const register unsigned short int AFSEL01 = 1;
    sbit  AFSEL01_bit at GPIOA_AFRL.B1;
    const register unsigned short int AFSEL02 = 2;
    sbit  AFSEL02_bit at GPIOA_AFRL.B2;
    const register unsigned short int AFSEL03 = 3;
    sbit  AFSEL03_bit at GPIOA_AFRL.B3;

sfr far unsigned long   volatile GPIOA_AFRH           absolute 0x50000024;
    const register unsigned short int AFSEL150 = 28;
    sbit  AFSEL150_bit at GPIOA_AFRH.B28;
    const register unsigned short int AFSEL151 = 29;
    sbit  AFSEL151_bit at GPIOA_AFRH.B29;
    const register unsigned short int AFSEL152 = 30;
    sbit  AFSEL152_bit at GPIOA_AFRH.B30;
    const register unsigned short int AFSEL153 = 31;
    sbit  AFSEL153_bit at GPIOA_AFRH.B31;
    const register unsigned short int AFSEL140 = 24;
    sbit  AFSEL140_bit at GPIOA_AFRH.B24;
    const register unsigned short int AFSEL141 = 25;
    sbit  AFSEL141_bit at GPIOA_AFRH.B25;
    const register unsigned short int AFSEL142 = 26;
    sbit  AFSEL142_bit at GPIOA_AFRH.B26;
    const register unsigned short int AFSEL143 = 27;
    sbit  AFSEL143_bit at GPIOA_AFRH.B27;
    const register unsigned short int AFSEL130 = 20;
    sbit  AFSEL130_bit at GPIOA_AFRH.B20;
    const register unsigned short int AFSEL131 = 21;
    sbit  AFSEL131_bit at GPIOA_AFRH.B21;
    const register unsigned short int AFSEL132 = 22;
    sbit  AFSEL132_bit at GPIOA_AFRH.B22;
    const register unsigned short int AFSEL133 = 23;
    sbit  AFSEL133_bit at GPIOA_AFRH.B23;
    const register unsigned short int AFSEL120 = 16;
    sbit  AFSEL120_bit at GPIOA_AFRH.B16;
    const register unsigned short int AFSEL121 = 17;
    sbit  AFSEL121_bit at GPIOA_AFRH.B17;
    const register unsigned short int AFSEL122 = 18;
    sbit  AFSEL122_bit at GPIOA_AFRH.B18;
    const register unsigned short int AFSEL123 = 19;
    sbit  AFSEL123_bit at GPIOA_AFRH.B19;
    const register unsigned short int AFSEL110 = 12;
    sbit  AFSEL110_bit at GPIOA_AFRH.B12;
    const register unsigned short int AFSEL111 = 13;
    sbit  AFSEL111_bit at GPIOA_AFRH.B13;
    const register unsigned short int AFSEL112 = 14;
    sbit  AFSEL112_bit at GPIOA_AFRH.B14;
    const register unsigned short int AFSEL113 = 15;
    sbit  AFSEL113_bit at GPIOA_AFRH.B15;
    const register unsigned short int AFSEL100 = 8;
    sbit  AFSEL100_bit at GPIOA_AFRH.B8;
    const register unsigned short int AFSEL101 = 9;
    sbit  AFSEL101_bit at GPIOA_AFRH.B9;
    const register unsigned short int AFSEL102 = 10;
    sbit  AFSEL102_bit at GPIOA_AFRH.B10;
    const register unsigned short int AFSEL103 = 11;
    sbit  AFSEL103_bit at GPIOA_AFRH.B11;
    const register unsigned short int AFSEL90 = 4;
    sbit  AFSEL90_bit at GPIOA_AFRH.B4;
    const register unsigned short int AFSEL91 = 5;
    sbit  AFSEL91_bit at GPIOA_AFRH.B5;
    const register unsigned short int AFSEL92 = 6;
    sbit  AFSEL92_bit at GPIOA_AFRH.B6;
    const register unsigned short int AFSEL93 = 7;
    sbit  AFSEL93_bit at GPIOA_AFRH.B7;
    const register unsigned short int AFSEL80 = 0;
    sbit  AFSEL80_bit at GPIOA_AFRH.B0;
    const register unsigned short int AFSEL81 = 1;
    sbit  AFSEL81_bit at GPIOA_AFRH.B1;
    const register unsigned short int AFSEL82 = 2;
    sbit  AFSEL82_bit at GPIOA_AFRH.B2;
    const register unsigned short int AFSEL83 = 3;
    sbit  AFSEL83_bit at GPIOA_AFRH.B3;

sfr far unsigned long   volatile GPIOA_BRR            absolute 0x50000028;
    sbit  BR0_GPIOA_BRR_bit at GPIOA_BRR.B0;
    sbit  BR1_GPIOA_BRR_bit at GPIOA_BRR.B1;
    sbit  BR2_GPIOA_BRR_bit at GPIOA_BRR.B2;
    sbit  BR3_GPIOA_BRR_bit at GPIOA_BRR.B3;
    sbit  BR4_GPIOA_BRR_bit at GPIOA_BRR.B4;
    sbit  BR5_GPIOA_BRR_bit at GPIOA_BRR.B5;
    sbit  BR6_GPIOA_BRR_bit at GPIOA_BRR.B6;
    sbit  BR7_GPIOA_BRR_bit at GPIOA_BRR.B7;
    sbit  BR8_GPIOA_BRR_bit at GPIOA_BRR.B8;
    sbit  BR9_GPIOA_BRR_bit at GPIOA_BRR.B9;
    sbit  BR10_GPIOA_BRR_bit at GPIOA_BRR.B10;
    sbit  BR11_GPIOA_BRR_bit at GPIOA_BRR.B11;
    sbit  BR12_GPIOA_BRR_bit at GPIOA_BRR.B12;
    sbit  BR13_GPIOA_BRR_bit at GPIOA_BRR.B13;
    sbit  BR14_GPIOA_BRR_bit at GPIOA_BRR.B14;
    sbit  BR15_GPIOA_BRR_bit at GPIOA_BRR.B15;

sfr far unsigned long   volatile GPIOB_BASE           absolute 0x50000400;
sfr far unsigned long   volatile GPIOB_MODER          absolute 0x50000400;
    sbit  MODER150_GPIOB_MODER_bit at GPIOB_MODER.B30;
    sbit  MODER151_GPIOB_MODER_bit at GPIOB_MODER.B31;
    sbit  MODER140_GPIOB_MODER_bit at GPIOB_MODER.B28;
    sbit  MODER141_GPIOB_MODER_bit at GPIOB_MODER.B29;
    sbit  MODER130_GPIOB_MODER_bit at GPIOB_MODER.B26;
    sbit  MODER131_GPIOB_MODER_bit at GPIOB_MODER.B27;
    sbit  MODER120_GPIOB_MODER_bit at GPIOB_MODER.B24;
    sbit  MODER121_GPIOB_MODER_bit at GPIOB_MODER.B25;
    sbit  MODER110_GPIOB_MODER_bit at GPIOB_MODER.B22;
    sbit  MODER111_GPIOB_MODER_bit at GPIOB_MODER.B23;
    sbit  MODER100_GPIOB_MODER_bit at GPIOB_MODER.B20;
    sbit  MODER101_GPIOB_MODER_bit at GPIOB_MODER.B21;
    sbit  MODER90_GPIOB_MODER_bit at GPIOB_MODER.B18;
    sbit  MODER91_GPIOB_MODER_bit at GPIOB_MODER.B19;
    sbit  MODER80_GPIOB_MODER_bit at GPIOB_MODER.B16;
    sbit  MODER81_GPIOB_MODER_bit at GPIOB_MODER.B17;
    sbit  MODER70_GPIOB_MODER_bit at GPIOB_MODER.B14;
    sbit  MODER71_GPIOB_MODER_bit at GPIOB_MODER.B15;
    sbit  MODER60_GPIOB_MODER_bit at GPIOB_MODER.B12;
    sbit  MODER61_GPIOB_MODER_bit at GPIOB_MODER.B13;
    sbit  MODER50_GPIOB_MODER_bit at GPIOB_MODER.B10;
    sbit  MODER51_GPIOB_MODER_bit at GPIOB_MODER.B11;
    sbit  MODER40_GPIOB_MODER_bit at GPIOB_MODER.B8;
    sbit  MODER41_GPIOB_MODER_bit at GPIOB_MODER.B9;
    sbit  MODER30_GPIOB_MODER_bit at GPIOB_MODER.B6;
    sbit  MODER31_GPIOB_MODER_bit at GPIOB_MODER.B7;
    sbit  MODER20_GPIOB_MODER_bit at GPIOB_MODER.B4;
    sbit  MODER21_GPIOB_MODER_bit at GPIOB_MODER.B5;
    sbit  MODER10_GPIOB_MODER_bit at GPIOB_MODER.B2;
    sbit  MODER11_GPIOB_MODER_bit at GPIOB_MODER.B3;
    sbit  MODER00_GPIOB_MODER_bit at GPIOB_MODER.B0;
    sbit  MODER01_GPIOB_MODER_bit at GPIOB_MODER.B1;

sfr far unsigned long   volatile GPIOB_OTYPER         absolute 0x50000404;
    sbit  OT15_GPIOB_OTYPER_bit at GPIOB_OTYPER.B15;
    sbit  OT14_GPIOB_OTYPER_bit at GPIOB_OTYPER.B14;
    sbit  OT13_GPIOB_OTYPER_bit at GPIOB_OTYPER.B13;
    sbit  OT12_GPIOB_OTYPER_bit at GPIOB_OTYPER.B12;
    sbit  OT11_GPIOB_OTYPER_bit at GPIOB_OTYPER.B11;
    sbit  OT10_GPIOB_OTYPER_bit at GPIOB_OTYPER.B10;
    sbit  OT9_GPIOB_OTYPER_bit at GPIOB_OTYPER.B9;
    sbit  OT8_GPIOB_OTYPER_bit at GPIOB_OTYPER.B8;
    sbit  OT7_GPIOB_OTYPER_bit at GPIOB_OTYPER.B7;
    sbit  OT6_GPIOB_OTYPER_bit at GPIOB_OTYPER.B6;
    sbit  OT5_GPIOB_OTYPER_bit at GPIOB_OTYPER.B5;
    sbit  OT4_GPIOB_OTYPER_bit at GPIOB_OTYPER.B4;
    sbit  OT3_GPIOB_OTYPER_bit at GPIOB_OTYPER.B3;
    sbit  OT2_GPIOB_OTYPER_bit at GPIOB_OTYPER.B2;
    sbit  OT1_GPIOB_OTYPER_bit at GPIOB_OTYPER.B1;
    sbit  OT0_GPIOB_OTYPER_bit at GPIOB_OTYPER.B0;

sfr far unsigned long   volatile GPIOB_OSPEEDR        absolute 0x50000408;
    sbit  OSPEEDR150_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B30;
    sbit  OSPEEDR151_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B31;
    sbit  OSPEEDR140_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B28;
    sbit  OSPEEDR141_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B29;
    sbit  OSPEEDR130_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B26;
    sbit  OSPEEDR131_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B27;
    sbit  OSPEEDR120_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B24;
    sbit  OSPEEDR121_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B25;
    sbit  OSPEEDR110_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B22;
    sbit  OSPEEDR111_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B23;
    sbit  OSPEEDR100_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B20;
    sbit  OSPEEDR101_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B21;
    sbit  OSPEEDR90_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B18;
    sbit  OSPEEDR91_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B19;
    sbit  OSPEEDR80_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B16;
    sbit  OSPEEDR81_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B17;
    sbit  OSPEEDR70_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B14;
    sbit  OSPEEDR71_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B15;
    sbit  OSPEEDR60_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B12;
    sbit  OSPEEDR61_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B13;
    sbit  OSPEEDR50_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B10;
    sbit  OSPEEDR51_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B11;
    sbit  OSPEEDR40_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B8;
    sbit  OSPEEDR41_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B9;
    sbit  OSPEEDR30_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B6;
    sbit  OSPEEDR31_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B7;
    sbit  OSPEEDR20_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B4;
    sbit  OSPEEDR21_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B5;
    sbit  OSPEEDR10_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B2;
    sbit  OSPEEDR11_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B3;
    sbit  OSPEEDR00_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B0;
    sbit  OSPEEDR01_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B1;

sfr far unsigned long   volatile GPIOB_PUPDR          absolute 0x5000040C;
    sbit  PUPDR150_GPIOB_PUPDR_bit at GPIOB_PUPDR.B30;
    sbit  PUPDR151_GPIOB_PUPDR_bit at GPIOB_PUPDR.B31;
    sbit  PUPDR140_GPIOB_PUPDR_bit at GPIOB_PUPDR.B28;
    sbit  PUPDR141_GPIOB_PUPDR_bit at GPIOB_PUPDR.B29;
    sbit  PUPDR130_GPIOB_PUPDR_bit at GPIOB_PUPDR.B26;
    sbit  PUPDR131_GPIOB_PUPDR_bit at GPIOB_PUPDR.B27;
    sbit  PUPDR120_GPIOB_PUPDR_bit at GPIOB_PUPDR.B24;
    sbit  PUPDR121_GPIOB_PUPDR_bit at GPIOB_PUPDR.B25;
    sbit  PUPDR110_GPIOB_PUPDR_bit at GPIOB_PUPDR.B22;
    sbit  PUPDR111_GPIOB_PUPDR_bit at GPIOB_PUPDR.B23;
    sbit  PUPDR100_GPIOB_PUPDR_bit at GPIOB_PUPDR.B20;
    sbit  PUPDR101_GPIOB_PUPDR_bit at GPIOB_PUPDR.B21;
    sbit  PUPDR90_GPIOB_PUPDR_bit at GPIOB_PUPDR.B18;
    sbit  PUPDR91_GPIOB_PUPDR_bit at GPIOB_PUPDR.B19;
    sbit  PUPDR80_GPIOB_PUPDR_bit at GPIOB_PUPDR.B16;
    sbit  PUPDR81_GPIOB_PUPDR_bit at GPIOB_PUPDR.B17;
    sbit  PUPDR70_GPIOB_PUPDR_bit at GPIOB_PUPDR.B14;
    sbit  PUPDR71_GPIOB_PUPDR_bit at GPIOB_PUPDR.B15;
    sbit  PUPDR60_GPIOB_PUPDR_bit at GPIOB_PUPDR.B12;
    sbit  PUPDR61_GPIOB_PUPDR_bit at GPIOB_PUPDR.B13;
    sbit  PUPDR50_GPIOB_PUPDR_bit at GPIOB_PUPDR.B10;
    sbit  PUPDR51_GPIOB_PUPDR_bit at GPIOB_PUPDR.B11;
    sbit  PUPDR40_GPIOB_PUPDR_bit at GPIOB_PUPDR.B8;
    sbit  PUPDR41_GPIOB_PUPDR_bit at GPIOB_PUPDR.B9;
    sbit  PUPDR30_GPIOB_PUPDR_bit at GPIOB_PUPDR.B6;
    sbit  PUPDR31_GPIOB_PUPDR_bit at GPIOB_PUPDR.B7;
    sbit  PUPDR20_GPIOB_PUPDR_bit at GPIOB_PUPDR.B4;
    sbit  PUPDR21_GPIOB_PUPDR_bit at GPIOB_PUPDR.B5;
    sbit  PUPDR10_GPIOB_PUPDR_bit at GPIOB_PUPDR.B2;
    sbit  PUPDR11_GPIOB_PUPDR_bit at GPIOB_PUPDR.B3;
    sbit  PUPDR00_GPIOB_PUPDR_bit at GPIOB_PUPDR.B0;
    sbit  PUPDR01_GPIOB_PUPDR_bit at GPIOB_PUPDR.B1;

sfr far unsigned long   volatile GPIOB_IDR            absolute 0x50000410;
    sbit  IDR15_GPIOB_IDR_bit at GPIOB_IDR.B15;
    sbit  IDR14_GPIOB_IDR_bit at GPIOB_IDR.B14;
    sbit  IDR13_GPIOB_IDR_bit at GPIOB_IDR.B13;
    sbit  IDR12_GPIOB_IDR_bit at GPIOB_IDR.B12;
    sbit  IDR11_GPIOB_IDR_bit at GPIOB_IDR.B11;
    sbit  IDR10_GPIOB_IDR_bit at GPIOB_IDR.B10;
    sbit  IDR9_GPIOB_IDR_bit at GPIOB_IDR.B9;
    sbit  IDR8_GPIOB_IDR_bit at GPIOB_IDR.B8;
    sbit  IDR7_GPIOB_IDR_bit at GPIOB_IDR.B7;
    sbit  IDR6_GPIOB_IDR_bit at GPIOB_IDR.B6;
    sbit  IDR5_GPIOB_IDR_bit at GPIOB_IDR.B5;
    sbit  IDR4_GPIOB_IDR_bit at GPIOB_IDR.B4;
    sbit  IDR3_GPIOB_IDR_bit at GPIOB_IDR.B3;
    sbit  IDR2_GPIOB_IDR_bit at GPIOB_IDR.B2;
    sbit  IDR1_GPIOB_IDR_bit at GPIOB_IDR.B1;
    sbit  IDR0_GPIOB_IDR_bit at GPIOB_IDR.B0;

sfr far unsigned long   volatile GPIOB_ODR            absolute 0x50000414;
    sbit  ODR15_GPIOB_ODR_bit at GPIOB_ODR.B15;
    sbit  ODR14_GPIOB_ODR_bit at GPIOB_ODR.B14;
    sbit  ODR13_GPIOB_ODR_bit at GPIOB_ODR.B13;
    sbit  ODR12_GPIOB_ODR_bit at GPIOB_ODR.B12;
    sbit  ODR11_GPIOB_ODR_bit at GPIOB_ODR.B11;
    sbit  ODR10_GPIOB_ODR_bit at GPIOB_ODR.B10;
    sbit  ODR9_GPIOB_ODR_bit at GPIOB_ODR.B9;
    sbit  ODR8_GPIOB_ODR_bit at GPIOB_ODR.B8;
    sbit  ODR7_GPIOB_ODR_bit at GPIOB_ODR.B7;
    sbit  ODR6_GPIOB_ODR_bit at GPIOB_ODR.B6;
    sbit  ODR5_GPIOB_ODR_bit at GPIOB_ODR.B5;
    sbit  ODR4_GPIOB_ODR_bit at GPIOB_ODR.B4;
    sbit  ODR3_GPIOB_ODR_bit at GPIOB_ODR.B3;
    sbit  ODR2_GPIOB_ODR_bit at GPIOB_ODR.B2;
    sbit  ODR1_GPIOB_ODR_bit at GPIOB_ODR.B1;
    sbit  ODR0_GPIOB_ODR_bit at GPIOB_ODR.B0;

sfr far unsigned long   volatile GPIOB_BSRR           absolute 0x50000418;
    sbit  BR15_GPIOB_BSRR_bit at GPIOB_BSRR.B31;
    sbit  BR14_GPIOB_BSRR_bit at GPIOB_BSRR.B30;
    sbit  BR13_GPIOB_BSRR_bit at GPIOB_BSRR.B29;
    sbit  BR12_GPIOB_BSRR_bit at GPIOB_BSRR.B28;
    sbit  BR11_GPIOB_BSRR_bit at GPIOB_BSRR.B27;
    sbit  BR10_GPIOB_BSRR_bit at GPIOB_BSRR.B26;
    sbit  BR9_GPIOB_BSRR_bit at GPIOB_BSRR.B25;
    sbit  BR8_GPIOB_BSRR_bit at GPIOB_BSRR.B24;
    sbit  BR7_GPIOB_BSRR_bit at GPIOB_BSRR.B23;
    sbit  BR6_GPIOB_BSRR_bit at GPIOB_BSRR.B22;
    sbit  BR5_GPIOB_BSRR_bit at GPIOB_BSRR.B21;
    sbit  BR4_GPIOB_BSRR_bit at GPIOB_BSRR.B20;
    sbit  BR3_GPIOB_BSRR_bit at GPIOB_BSRR.B19;
    sbit  BR2_GPIOB_BSRR_bit at GPIOB_BSRR.B18;
    sbit  BR1_GPIOB_BSRR_bit at GPIOB_BSRR.B17;
    sbit  BR0_GPIOB_BSRR_bit at GPIOB_BSRR.B16;
    sbit  BS15_GPIOB_BSRR_bit at GPIOB_BSRR.B15;
    sbit  BS14_GPIOB_BSRR_bit at GPIOB_BSRR.B14;
    sbit  BS13_GPIOB_BSRR_bit at GPIOB_BSRR.B13;
    sbit  BS12_GPIOB_BSRR_bit at GPIOB_BSRR.B12;
    sbit  BS11_GPIOB_BSRR_bit at GPIOB_BSRR.B11;
    sbit  BS10_GPIOB_BSRR_bit at GPIOB_BSRR.B10;
    sbit  BS9_GPIOB_BSRR_bit at GPIOB_BSRR.B9;
    sbit  BS8_GPIOB_BSRR_bit at GPIOB_BSRR.B8;
    sbit  BS7_GPIOB_BSRR_bit at GPIOB_BSRR.B7;
    sbit  BS6_GPIOB_BSRR_bit at GPIOB_BSRR.B6;
    sbit  BS5_GPIOB_BSRR_bit at GPIOB_BSRR.B5;
    sbit  BS4_GPIOB_BSRR_bit at GPIOB_BSRR.B4;
    sbit  BS3_GPIOB_BSRR_bit at GPIOB_BSRR.B3;
    sbit  BS2_GPIOB_BSRR_bit at GPIOB_BSRR.B2;
    sbit  BS1_GPIOB_BSRR_bit at GPIOB_BSRR.B1;
    sbit  BS0_GPIOB_BSRR_bit at GPIOB_BSRR.B0;

sfr far unsigned long   volatile GPIOB_LCKR           absolute 0x5000041C;
    sbit  LCKK_GPIOB_LCKR_bit at GPIOB_LCKR.B16;
    sbit  LCK15_GPIOB_LCKR_bit at GPIOB_LCKR.B15;
    sbit  LCK14_GPIOB_LCKR_bit at GPIOB_LCKR.B14;
    sbit  LCK13_GPIOB_LCKR_bit at GPIOB_LCKR.B13;
    sbit  LCK12_GPIOB_LCKR_bit at GPIOB_LCKR.B12;
    sbit  LCK11_GPIOB_LCKR_bit at GPIOB_LCKR.B11;
    sbit  LCK10_GPIOB_LCKR_bit at GPIOB_LCKR.B10;
    sbit  LCK9_GPIOB_LCKR_bit at GPIOB_LCKR.B9;
    sbit  LCK8_GPIOB_LCKR_bit at GPIOB_LCKR.B8;
    sbit  LCK7_GPIOB_LCKR_bit at GPIOB_LCKR.B7;
    sbit  LCK6_GPIOB_LCKR_bit at GPIOB_LCKR.B6;
    sbit  LCK5_GPIOB_LCKR_bit at GPIOB_LCKR.B5;
    sbit  LCK4_GPIOB_LCKR_bit at GPIOB_LCKR.B4;
    sbit  LCK3_GPIOB_LCKR_bit at GPIOB_LCKR.B3;
    sbit  LCK2_GPIOB_LCKR_bit at GPIOB_LCKR.B2;
    sbit  LCK1_GPIOB_LCKR_bit at GPIOB_LCKR.B1;
    sbit  LCK0_GPIOB_LCKR_bit at GPIOB_LCKR.B0;

sfr far unsigned long   volatile GPIOB_AFRL           absolute 0x50000420;
    sbit  AFSEL70_GPIOB_AFRL_bit at GPIOB_AFRL.B28;
    sbit  AFSEL71_GPIOB_AFRL_bit at GPIOB_AFRL.B29;
    sbit  AFSEL72_GPIOB_AFRL_bit at GPIOB_AFRL.B30;
    sbit  AFSEL73_GPIOB_AFRL_bit at GPIOB_AFRL.B31;
    sbit  AFSEL60_GPIOB_AFRL_bit at GPIOB_AFRL.B24;
    sbit  AFSEL61_GPIOB_AFRL_bit at GPIOB_AFRL.B25;
    sbit  AFSEL62_GPIOB_AFRL_bit at GPIOB_AFRL.B26;
    sbit  AFSEL63_GPIOB_AFRL_bit at GPIOB_AFRL.B27;
    sbit  AFSEL50_GPIOB_AFRL_bit at GPIOB_AFRL.B20;
    sbit  AFSEL51_GPIOB_AFRL_bit at GPIOB_AFRL.B21;
    sbit  AFSEL52_GPIOB_AFRL_bit at GPIOB_AFRL.B22;
    sbit  AFSEL53_GPIOB_AFRL_bit at GPIOB_AFRL.B23;
    sbit  AFSEL40_GPIOB_AFRL_bit at GPIOB_AFRL.B16;
    sbit  AFSEL41_GPIOB_AFRL_bit at GPIOB_AFRL.B17;
    sbit  AFSEL42_GPIOB_AFRL_bit at GPIOB_AFRL.B18;
    sbit  AFSEL43_GPIOB_AFRL_bit at GPIOB_AFRL.B19;
    sbit  AFSEL30_GPIOB_AFRL_bit at GPIOB_AFRL.B12;
    sbit  AFSEL31_GPIOB_AFRL_bit at GPIOB_AFRL.B13;
    sbit  AFSEL32_GPIOB_AFRL_bit at GPIOB_AFRL.B14;
    sbit  AFSEL33_GPIOB_AFRL_bit at GPIOB_AFRL.B15;
    sbit  AFSEL20_GPIOB_AFRL_bit at GPIOB_AFRL.B8;
    sbit  AFSEL21_GPIOB_AFRL_bit at GPIOB_AFRL.B9;
    sbit  AFSEL22_GPIOB_AFRL_bit at GPIOB_AFRL.B10;
    sbit  AFSEL23_GPIOB_AFRL_bit at GPIOB_AFRL.B11;
    sbit  AFSEL10_GPIOB_AFRL_bit at GPIOB_AFRL.B4;
    sbit  AFSEL11_GPIOB_AFRL_bit at GPIOB_AFRL.B5;
    sbit  AFSEL12_GPIOB_AFRL_bit at GPIOB_AFRL.B6;
    sbit  AFSEL13_GPIOB_AFRL_bit at GPIOB_AFRL.B7;
    sbit  AFSEL00_GPIOB_AFRL_bit at GPIOB_AFRL.B0;
    sbit  AFSEL01_GPIOB_AFRL_bit at GPIOB_AFRL.B1;
    sbit  AFSEL02_GPIOB_AFRL_bit at GPIOB_AFRL.B2;
    sbit  AFSEL03_GPIOB_AFRL_bit at GPIOB_AFRL.B3;

sfr far unsigned long   volatile GPIOB_AFRH           absolute 0x50000424;
    sbit  AFSEL150_GPIOB_AFRH_bit at GPIOB_AFRH.B28;
    sbit  AFSEL151_GPIOB_AFRH_bit at GPIOB_AFRH.B29;
    sbit  AFSEL152_GPIOB_AFRH_bit at GPIOB_AFRH.B30;
    sbit  AFSEL153_GPIOB_AFRH_bit at GPIOB_AFRH.B31;
    sbit  AFSEL140_GPIOB_AFRH_bit at GPIOB_AFRH.B24;
    sbit  AFSEL141_GPIOB_AFRH_bit at GPIOB_AFRH.B25;
    sbit  AFSEL142_GPIOB_AFRH_bit at GPIOB_AFRH.B26;
    sbit  AFSEL143_GPIOB_AFRH_bit at GPIOB_AFRH.B27;
    sbit  AFSEL130_GPIOB_AFRH_bit at GPIOB_AFRH.B20;
    sbit  AFSEL131_GPIOB_AFRH_bit at GPIOB_AFRH.B21;
    sbit  AFSEL132_GPIOB_AFRH_bit at GPIOB_AFRH.B22;
    sbit  AFSEL133_GPIOB_AFRH_bit at GPIOB_AFRH.B23;
    sbit  AFSEL120_GPIOB_AFRH_bit at GPIOB_AFRH.B16;
    sbit  AFSEL121_GPIOB_AFRH_bit at GPIOB_AFRH.B17;
    sbit  AFSEL122_GPIOB_AFRH_bit at GPIOB_AFRH.B18;
    sbit  AFSEL123_GPIOB_AFRH_bit at GPIOB_AFRH.B19;
    sbit  AFSEL110_GPIOB_AFRH_bit at GPIOB_AFRH.B12;
    sbit  AFSEL111_GPIOB_AFRH_bit at GPIOB_AFRH.B13;
    sbit  AFSEL112_GPIOB_AFRH_bit at GPIOB_AFRH.B14;
    sbit  AFSEL113_GPIOB_AFRH_bit at GPIOB_AFRH.B15;
    sbit  AFSEL100_GPIOB_AFRH_bit at GPIOB_AFRH.B8;
    sbit  AFSEL101_GPIOB_AFRH_bit at GPIOB_AFRH.B9;
    sbit  AFSEL102_GPIOB_AFRH_bit at GPIOB_AFRH.B10;
    sbit  AFSEL103_GPIOB_AFRH_bit at GPIOB_AFRH.B11;
    sbit  AFSEL90_GPIOB_AFRH_bit at GPIOB_AFRH.B4;
    sbit  AFSEL91_GPIOB_AFRH_bit at GPIOB_AFRH.B5;
    sbit  AFSEL92_GPIOB_AFRH_bit at GPIOB_AFRH.B6;
    sbit  AFSEL93_GPIOB_AFRH_bit at GPIOB_AFRH.B7;
    sbit  AFSEL80_GPIOB_AFRH_bit at GPIOB_AFRH.B0;
    sbit  AFSEL81_GPIOB_AFRH_bit at GPIOB_AFRH.B1;
    sbit  AFSEL82_GPIOB_AFRH_bit at GPIOB_AFRH.B2;
    sbit  AFSEL83_GPIOB_AFRH_bit at GPIOB_AFRH.B3;

sfr far unsigned long   volatile GPIOB_BRR            absolute 0x50000428;
    sbit  BR0_GPIOB_BRR_bit at GPIOB_BRR.B0;
    sbit  BR1_GPIOB_BRR_bit at GPIOB_BRR.B1;
    sbit  BR2_GPIOB_BRR_bit at GPIOB_BRR.B2;
    sbit  BR3_GPIOB_BRR_bit at GPIOB_BRR.B3;
    sbit  BR4_GPIOB_BRR_bit at GPIOB_BRR.B4;
    sbit  BR5_GPIOB_BRR_bit at GPIOB_BRR.B5;
    sbit  BR6_GPIOB_BRR_bit at GPIOB_BRR.B6;
    sbit  BR7_GPIOB_BRR_bit at GPIOB_BRR.B7;
    sbit  BR8_GPIOB_BRR_bit at GPIOB_BRR.B8;
    sbit  BR9_GPIOB_BRR_bit at GPIOB_BRR.B9;
    sbit  BR10_GPIOB_BRR_bit at GPIOB_BRR.B10;
    sbit  BR11_GPIOB_BRR_bit at GPIOB_BRR.B11;
    sbit  BR12_GPIOB_BRR_bit at GPIOB_BRR.B12;
    sbit  BR13_GPIOB_BRR_bit at GPIOB_BRR.B13;
    sbit  BR14_GPIOB_BRR_bit at GPIOB_BRR.B14;
    sbit  BR15_GPIOB_BRR_bit at GPIOB_BRR.B15;

sfr far unsigned long   volatile GPIOC_BASE           absolute 0x50000800;
sfr far unsigned long   volatile GPIOC_MODER          absolute 0x50000800;
    sbit  MODER150_GPIOC_MODER_bit at GPIOC_MODER.B30;
    sbit  MODER151_GPIOC_MODER_bit at GPIOC_MODER.B31;
    sbit  MODER140_GPIOC_MODER_bit at GPIOC_MODER.B28;
    sbit  MODER141_GPIOC_MODER_bit at GPIOC_MODER.B29;
    sbit  MODER130_GPIOC_MODER_bit at GPIOC_MODER.B26;
    sbit  MODER131_GPIOC_MODER_bit at GPIOC_MODER.B27;
    sbit  MODER120_GPIOC_MODER_bit at GPIOC_MODER.B24;
    sbit  MODER121_GPIOC_MODER_bit at GPIOC_MODER.B25;
    sbit  MODER110_GPIOC_MODER_bit at GPIOC_MODER.B22;
    sbit  MODER111_GPIOC_MODER_bit at GPIOC_MODER.B23;
    sbit  MODER100_GPIOC_MODER_bit at GPIOC_MODER.B20;
    sbit  MODER101_GPIOC_MODER_bit at GPIOC_MODER.B21;
    sbit  MODER90_GPIOC_MODER_bit at GPIOC_MODER.B18;
    sbit  MODER91_GPIOC_MODER_bit at GPIOC_MODER.B19;
    sbit  MODER80_GPIOC_MODER_bit at GPIOC_MODER.B16;
    sbit  MODER81_GPIOC_MODER_bit at GPIOC_MODER.B17;
    sbit  MODER70_GPIOC_MODER_bit at GPIOC_MODER.B14;
    sbit  MODER71_GPIOC_MODER_bit at GPIOC_MODER.B15;
    sbit  MODER60_GPIOC_MODER_bit at GPIOC_MODER.B12;
    sbit  MODER61_GPIOC_MODER_bit at GPIOC_MODER.B13;
    sbit  MODER50_GPIOC_MODER_bit at GPIOC_MODER.B10;
    sbit  MODER51_GPIOC_MODER_bit at GPIOC_MODER.B11;
    sbit  MODER40_GPIOC_MODER_bit at GPIOC_MODER.B8;
    sbit  MODER41_GPIOC_MODER_bit at GPIOC_MODER.B9;
    sbit  MODER30_GPIOC_MODER_bit at GPIOC_MODER.B6;
    sbit  MODER31_GPIOC_MODER_bit at GPIOC_MODER.B7;
    sbit  MODER20_GPIOC_MODER_bit at GPIOC_MODER.B4;
    sbit  MODER21_GPIOC_MODER_bit at GPIOC_MODER.B5;
    sbit  MODER10_GPIOC_MODER_bit at GPIOC_MODER.B2;
    sbit  MODER11_GPIOC_MODER_bit at GPIOC_MODER.B3;
    sbit  MODER00_GPIOC_MODER_bit at GPIOC_MODER.B0;
    sbit  MODER01_GPIOC_MODER_bit at GPIOC_MODER.B1;

sfr far unsigned long   volatile GPIOC_OTYPER         absolute 0x50000804;
    sbit  OT15_GPIOC_OTYPER_bit at GPIOC_OTYPER.B15;
    sbit  OT14_GPIOC_OTYPER_bit at GPIOC_OTYPER.B14;
    sbit  OT13_GPIOC_OTYPER_bit at GPIOC_OTYPER.B13;
    sbit  OT12_GPIOC_OTYPER_bit at GPIOC_OTYPER.B12;
    sbit  OT11_GPIOC_OTYPER_bit at GPIOC_OTYPER.B11;
    sbit  OT10_GPIOC_OTYPER_bit at GPIOC_OTYPER.B10;
    sbit  OT9_GPIOC_OTYPER_bit at GPIOC_OTYPER.B9;
    sbit  OT8_GPIOC_OTYPER_bit at GPIOC_OTYPER.B8;
    sbit  OT7_GPIOC_OTYPER_bit at GPIOC_OTYPER.B7;
    sbit  OT6_GPIOC_OTYPER_bit at GPIOC_OTYPER.B6;
    sbit  OT5_GPIOC_OTYPER_bit at GPIOC_OTYPER.B5;
    sbit  OT4_GPIOC_OTYPER_bit at GPIOC_OTYPER.B4;
    sbit  OT3_GPIOC_OTYPER_bit at GPIOC_OTYPER.B3;
    sbit  OT2_GPIOC_OTYPER_bit at GPIOC_OTYPER.B2;
    sbit  OT1_GPIOC_OTYPER_bit at GPIOC_OTYPER.B1;
    sbit  OT0_GPIOC_OTYPER_bit at GPIOC_OTYPER.B0;

sfr far unsigned long   volatile GPIOC_OSPEEDR        absolute 0x50000808;
    sbit  OSPEEDR150_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B30;
    sbit  OSPEEDR151_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B31;
    sbit  OSPEEDR140_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B28;
    sbit  OSPEEDR141_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B29;
    sbit  OSPEEDR130_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B26;
    sbit  OSPEEDR131_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B27;
    sbit  OSPEEDR120_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B24;
    sbit  OSPEEDR121_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B25;
    sbit  OSPEEDR110_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B22;
    sbit  OSPEEDR111_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B23;
    sbit  OSPEEDR100_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B20;
    sbit  OSPEEDR101_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B21;
    sbit  OSPEEDR90_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B18;
    sbit  OSPEEDR91_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B19;
    sbit  OSPEEDR80_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B16;
    sbit  OSPEEDR81_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B17;
    sbit  OSPEEDR70_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B14;
    sbit  OSPEEDR71_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B15;
    sbit  OSPEEDR60_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B12;
    sbit  OSPEEDR61_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B13;
    sbit  OSPEEDR50_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B10;
    sbit  OSPEEDR51_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B11;
    sbit  OSPEEDR40_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B8;
    sbit  OSPEEDR41_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B9;
    sbit  OSPEEDR30_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B6;
    sbit  OSPEEDR31_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B7;
    sbit  OSPEEDR20_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B4;
    sbit  OSPEEDR21_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B5;
    sbit  OSPEEDR10_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B2;
    sbit  OSPEEDR11_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B3;
    sbit  OSPEEDR00_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B0;
    sbit  OSPEEDR01_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B1;

sfr far unsigned long   volatile GPIOC_PUPDR          absolute 0x5000080C;
    sbit  PUPDR150_GPIOC_PUPDR_bit at GPIOC_PUPDR.B30;
    sbit  PUPDR151_GPIOC_PUPDR_bit at GPIOC_PUPDR.B31;
    sbit  PUPDR140_GPIOC_PUPDR_bit at GPIOC_PUPDR.B28;
    sbit  PUPDR141_GPIOC_PUPDR_bit at GPIOC_PUPDR.B29;
    sbit  PUPDR130_GPIOC_PUPDR_bit at GPIOC_PUPDR.B26;
    sbit  PUPDR131_GPIOC_PUPDR_bit at GPIOC_PUPDR.B27;
    sbit  PUPDR120_GPIOC_PUPDR_bit at GPIOC_PUPDR.B24;
    sbit  PUPDR121_GPIOC_PUPDR_bit at GPIOC_PUPDR.B25;
    sbit  PUPDR110_GPIOC_PUPDR_bit at GPIOC_PUPDR.B22;
    sbit  PUPDR111_GPIOC_PUPDR_bit at GPIOC_PUPDR.B23;
    sbit  PUPDR100_GPIOC_PUPDR_bit at GPIOC_PUPDR.B20;
    sbit  PUPDR101_GPIOC_PUPDR_bit at GPIOC_PUPDR.B21;
    sbit  PUPDR90_GPIOC_PUPDR_bit at GPIOC_PUPDR.B18;
    sbit  PUPDR91_GPIOC_PUPDR_bit at GPIOC_PUPDR.B19;
    sbit  PUPDR80_GPIOC_PUPDR_bit at GPIOC_PUPDR.B16;
    sbit  PUPDR81_GPIOC_PUPDR_bit at GPIOC_PUPDR.B17;
    sbit  PUPDR70_GPIOC_PUPDR_bit at GPIOC_PUPDR.B14;
    sbit  PUPDR71_GPIOC_PUPDR_bit at GPIOC_PUPDR.B15;
    sbit  PUPDR60_GPIOC_PUPDR_bit at GPIOC_PUPDR.B12;
    sbit  PUPDR61_GPIOC_PUPDR_bit at GPIOC_PUPDR.B13;
    sbit  PUPDR50_GPIOC_PUPDR_bit at GPIOC_PUPDR.B10;
    sbit  PUPDR51_GPIOC_PUPDR_bit at GPIOC_PUPDR.B11;
    sbit  PUPDR40_GPIOC_PUPDR_bit at GPIOC_PUPDR.B8;
    sbit  PUPDR41_GPIOC_PUPDR_bit at GPIOC_PUPDR.B9;
    sbit  PUPDR30_GPIOC_PUPDR_bit at GPIOC_PUPDR.B6;
    sbit  PUPDR31_GPIOC_PUPDR_bit at GPIOC_PUPDR.B7;
    sbit  PUPDR20_GPIOC_PUPDR_bit at GPIOC_PUPDR.B4;
    sbit  PUPDR21_GPIOC_PUPDR_bit at GPIOC_PUPDR.B5;
    sbit  PUPDR10_GPIOC_PUPDR_bit at GPIOC_PUPDR.B2;
    sbit  PUPDR11_GPIOC_PUPDR_bit at GPIOC_PUPDR.B3;
    sbit  PUPDR00_GPIOC_PUPDR_bit at GPIOC_PUPDR.B0;
    sbit  PUPDR01_GPIOC_PUPDR_bit at GPIOC_PUPDR.B1;

sfr far unsigned long   volatile GPIOC_IDR            absolute 0x50000810;
    sbit  IDR15_GPIOC_IDR_bit at GPIOC_IDR.B15;
    sbit  IDR14_GPIOC_IDR_bit at GPIOC_IDR.B14;
    sbit  IDR13_GPIOC_IDR_bit at GPIOC_IDR.B13;
    sbit  IDR12_GPIOC_IDR_bit at GPIOC_IDR.B12;
    sbit  IDR11_GPIOC_IDR_bit at GPIOC_IDR.B11;
    sbit  IDR10_GPIOC_IDR_bit at GPIOC_IDR.B10;
    sbit  IDR9_GPIOC_IDR_bit at GPIOC_IDR.B9;
    sbit  IDR8_GPIOC_IDR_bit at GPIOC_IDR.B8;
    sbit  IDR7_GPIOC_IDR_bit at GPIOC_IDR.B7;
    sbit  IDR6_GPIOC_IDR_bit at GPIOC_IDR.B6;
    sbit  IDR5_GPIOC_IDR_bit at GPIOC_IDR.B5;
    sbit  IDR4_GPIOC_IDR_bit at GPIOC_IDR.B4;
    sbit  IDR3_GPIOC_IDR_bit at GPIOC_IDR.B3;
    sbit  IDR2_GPIOC_IDR_bit at GPIOC_IDR.B2;
    sbit  IDR1_GPIOC_IDR_bit at GPIOC_IDR.B1;
    sbit  IDR0_GPIOC_IDR_bit at GPIOC_IDR.B0;

sfr far unsigned long   volatile GPIOC_ODR            absolute 0x50000814;
    sbit  ODR15_GPIOC_ODR_bit at GPIOC_ODR.B15;
    sbit  ODR14_GPIOC_ODR_bit at GPIOC_ODR.B14;
    sbit  ODR13_GPIOC_ODR_bit at GPIOC_ODR.B13;
    sbit  ODR12_GPIOC_ODR_bit at GPIOC_ODR.B12;
    sbit  ODR11_GPIOC_ODR_bit at GPIOC_ODR.B11;
    sbit  ODR10_GPIOC_ODR_bit at GPIOC_ODR.B10;
    sbit  ODR9_GPIOC_ODR_bit at GPIOC_ODR.B9;
    sbit  ODR8_GPIOC_ODR_bit at GPIOC_ODR.B8;
    sbit  ODR7_GPIOC_ODR_bit at GPIOC_ODR.B7;
    sbit  ODR6_GPIOC_ODR_bit at GPIOC_ODR.B6;
    sbit  ODR5_GPIOC_ODR_bit at GPIOC_ODR.B5;
    sbit  ODR4_GPIOC_ODR_bit at GPIOC_ODR.B4;
    sbit  ODR3_GPIOC_ODR_bit at GPIOC_ODR.B3;
    sbit  ODR2_GPIOC_ODR_bit at GPIOC_ODR.B2;
    sbit  ODR1_GPIOC_ODR_bit at GPIOC_ODR.B1;
    sbit  ODR0_GPIOC_ODR_bit at GPIOC_ODR.B0;

sfr far unsigned long   volatile GPIOC_BSRR           absolute 0x50000818;
    sbit  BR15_GPIOC_BSRR_bit at GPIOC_BSRR.B31;
    sbit  BR14_GPIOC_BSRR_bit at GPIOC_BSRR.B30;
    sbit  BR13_GPIOC_BSRR_bit at GPIOC_BSRR.B29;
    sbit  BR12_GPIOC_BSRR_bit at GPIOC_BSRR.B28;
    sbit  BR11_GPIOC_BSRR_bit at GPIOC_BSRR.B27;
    sbit  BR10_GPIOC_BSRR_bit at GPIOC_BSRR.B26;
    sbit  BR9_GPIOC_BSRR_bit at GPIOC_BSRR.B25;
    sbit  BR8_GPIOC_BSRR_bit at GPIOC_BSRR.B24;
    sbit  BR7_GPIOC_BSRR_bit at GPIOC_BSRR.B23;
    sbit  BR6_GPIOC_BSRR_bit at GPIOC_BSRR.B22;
    sbit  BR5_GPIOC_BSRR_bit at GPIOC_BSRR.B21;
    sbit  BR4_GPIOC_BSRR_bit at GPIOC_BSRR.B20;
    sbit  BR3_GPIOC_BSRR_bit at GPIOC_BSRR.B19;
    sbit  BR2_GPIOC_BSRR_bit at GPIOC_BSRR.B18;
    sbit  BR1_GPIOC_BSRR_bit at GPIOC_BSRR.B17;
    sbit  BR0_GPIOC_BSRR_bit at GPIOC_BSRR.B16;
    sbit  BS15_GPIOC_BSRR_bit at GPIOC_BSRR.B15;
    sbit  BS14_GPIOC_BSRR_bit at GPIOC_BSRR.B14;
    sbit  BS13_GPIOC_BSRR_bit at GPIOC_BSRR.B13;
    sbit  BS12_GPIOC_BSRR_bit at GPIOC_BSRR.B12;
    sbit  BS11_GPIOC_BSRR_bit at GPIOC_BSRR.B11;
    sbit  BS10_GPIOC_BSRR_bit at GPIOC_BSRR.B10;
    sbit  BS9_GPIOC_BSRR_bit at GPIOC_BSRR.B9;
    sbit  BS8_GPIOC_BSRR_bit at GPIOC_BSRR.B8;
    sbit  BS7_GPIOC_BSRR_bit at GPIOC_BSRR.B7;
    sbit  BS6_GPIOC_BSRR_bit at GPIOC_BSRR.B6;
    sbit  BS5_GPIOC_BSRR_bit at GPIOC_BSRR.B5;
    sbit  BS4_GPIOC_BSRR_bit at GPIOC_BSRR.B4;
    sbit  BS3_GPIOC_BSRR_bit at GPIOC_BSRR.B3;
    sbit  BS2_GPIOC_BSRR_bit at GPIOC_BSRR.B2;
    sbit  BS1_GPIOC_BSRR_bit at GPIOC_BSRR.B1;
    sbit  BS0_GPIOC_BSRR_bit at GPIOC_BSRR.B0;

sfr far unsigned long   volatile GPIOC_LCKR           absolute 0x5000081C;
    sbit  LCKK_GPIOC_LCKR_bit at GPIOC_LCKR.B16;
    sbit  LCK15_GPIOC_LCKR_bit at GPIOC_LCKR.B15;
    sbit  LCK14_GPIOC_LCKR_bit at GPIOC_LCKR.B14;
    sbit  LCK13_GPIOC_LCKR_bit at GPIOC_LCKR.B13;
    sbit  LCK12_GPIOC_LCKR_bit at GPIOC_LCKR.B12;
    sbit  LCK11_GPIOC_LCKR_bit at GPIOC_LCKR.B11;
    sbit  LCK10_GPIOC_LCKR_bit at GPIOC_LCKR.B10;
    sbit  LCK9_GPIOC_LCKR_bit at GPIOC_LCKR.B9;
    sbit  LCK8_GPIOC_LCKR_bit at GPIOC_LCKR.B8;
    sbit  LCK7_GPIOC_LCKR_bit at GPIOC_LCKR.B7;
    sbit  LCK6_GPIOC_LCKR_bit at GPIOC_LCKR.B6;
    sbit  LCK5_GPIOC_LCKR_bit at GPIOC_LCKR.B5;
    sbit  LCK4_GPIOC_LCKR_bit at GPIOC_LCKR.B4;
    sbit  LCK3_GPIOC_LCKR_bit at GPIOC_LCKR.B3;
    sbit  LCK2_GPIOC_LCKR_bit at GPIOC_LCKR.B2;
    sbit  LCK1_GPIOC_LCKR_bit at GPIOC_LCKR.B1;
    sbit  LCK0_GPIOC_LCKR_bit at GPIOC_LCKR.B0;

sfr far unsigned long   volatile GPIOC_AFRL           absolute 0x50000820;
    sbit  AFSEL70_GPIOC_AFRL_bit at GPIOC_AFRL.B28;
    sbit  AFSEL71_GPIOC_AFRL_bit at GPIOC_AFRL.B29;
    sbit  AFSEL72_GPIOC_AFRL_bit at GPIOC_AFRL.B30;
    sbit  AFSEL73_GPIOC_AFRL_bit at GPIOC_AFRL.B31;
    sbit  AFSEL60_GPIOC_AFRL_bit at GPIOC_AFRL.B24;
    sbit  AFSEL61_GPIOC_AFRL_bit at GPIOC_AFRL.B25;
    sbit  AFSEL62_GPIOC_AFRL_bit at GPIOC_AFRL.B26;
    sbit  AFSEL63_GPIOC_AFRL_bit at GPIOC_AFRL.B27;
    sbit  AFSEL50_GPIOC_AFRL_bit at GPIOC_AFRL.B20;
    sbit  AFSEL51_GPIOC_AFRL_bit at GPIOC_AFRL.B21;
    sbit  AFSEL52_GPIOC_AFRL_bit at GPIOC_AFRL.B22;
    sbit  AFSEL53_GPIOC_AFRL_bit at GPIOC_AFRL.B23;
    sbit  AFSEL40_GPIOC_AFRL_bit at GPIOC_AFRL.B16;
    sbit  AFSEL41_GPIOC_AFRL_bit at GPIOC_AFRL.B17;
    sbit  AFSEL42_GPIOC_AFRL_bit at GPIOC_AFRL.B18;
    sbit  AFSEL43_GPIOC_AFRL_bit at GPIOC_AFRL.B19;
    sbit  AFSEL30_GPIOC_AFRL_bit at GPIOC_AFRL.B12;
    sbit  AFSEL31_GPIOC_AFRL_bit at GPIOC_AFRL.B13;
    sbit  AFSEL32_GPIOC_AFRL_bit at GPIOC_AFRL.B14;
    sbit  AFSEL33_GPIOC_AFRL_bit at GPIOC_AFRL.B15;
    sbit  AFSEL20_GPIOC_AFRL_bit at GPIOC_AFRL.B8;
    sbit  AFSEL21_GPIOC_AFRL_bit at GPIOC_AFRL.B9;
    sbit  AFSEL22_GPIOC_AFRL_bit at GPIOC_AFRL.B10;
    sbit  AFSEL23_GPIOC_AFRL_bit at GPIOC_AFRL.B11;
    sbit  AFSEL10_GPIOC_AFRL_bit at GPIOC_AFRL.B4;
    sbit  AFSEL11_GPIOC_AFRL_bit at GPIOC_AFRL.B5;
    sbit  AFSEL12_GPIOC_AFRL_bit at GPIOC_AFRL.B6;
    sbit  AFSEL13_GPIOC_AFRL_bit at GPIOC_AFRL.B7;
    sbit  AFSEL00_GPIOC_AFRL_bit at GPIOC_AFRL.B0;
    sbit  AFSEL01_GPIOC_AFRL_bit at GPIOC_AFRL.B1;
    sbit  AFSEL02_GPIOC_AFRL_bit at GPIOC_AFRL.B2;
    sbit  AFSEL03_GPIOC_AFRL_bit at GPIOC_AFRL.B3;

sfr far unsigned long   volatile GPIOC_AFRH           absolute 0x50000824;
    sbit  AFSEL150_GPIOC_AFRH_bit at GPIOC_AFRH.B28;
    sbit  AFSEL151_GPIOC_AFRH_bit at GPIOC_AFRH.B29;
    sbit  AFSEL152_GPIOC_AFRH_bit at GPIOC_AFRH.B30;
    sbit  AFSEL153_GPIOC_AFRH_bit at GPIOC_AFRH.B31;
    sbit  AFSEL140_GPIOC_AFRH_bit at GPIOC_AFRH.B24;
    sbit  AFSEL141_GPIOC_AFRH_bit at GPIOC_AFRH.B25;
    sbit  AFSEL142_GPIOC_AFRH_bit at GPIOC_AFRH.B26;
    sbit  AFSEL143_GPIOC_AFRH_bit at GPIOC_AFRH.B27;
    sbit  AFSEL130_GPIOC_AFRH_bit at GPIOC_AFRH.B20;
    sbit  AFSEL131_GPIOC_AFRH_bit at GPIOC_AFRH.B21;
    sbit  AFSEL132_GPIOC_AFRH_bit at GPIOC_AFRH.B22;
    sbit  AFSEL133_GPIOC_AFRH_bit at GPIOC_AFRH.B23;
    sbit  AFSEL120_GPIOC_AFRH_bit at GPIOC_AFRH.B16;
    sbit  AFSEL121_GPIOC_AFRH_bit at GPIOC_AFRH.B17;
    sbit  AFSEL122_GPIOC_AFRH_bit at GPIOC_AFRH.B18;
    sbit  AFSEL123_GPIOC_AFRH_bit at GPIOC_AFRH.B19;
    sbit  AFSEL110_GPIOC_AFRH_bit at GPIOC_AFRH.B12;
    sbit  AFSEL111_GPIOC_AFRH_bit at GPIOC_AFRH.B13;
    sbit  AFSEL112_GPIOC_AFRH_bit at GPIOC_AFRH.B14;
    sbit  AFSEL113_GPIOC_AFRH_bit at GPIOC_AFRH.B15;
    sbit  AFSEL100_GPIOC_AFRH_bit at GPIOC_AFRH.B8;
    sbit  AFSEL101_GPIOC_AFRH_bit at GPIOC_AFRH.B9;
    sbit  AFSEL102_GPIOC_AFRH_bit at GPIOC_AFRH.B10;
    sbit  AFSEL103_GPIOC_AFRH_bit at GPIOC_AFRH.B11;
    sbit  AFSEL90_GPIOC_AFRH_bit at GPIOC_AFRH.B4;
    sbit  AFSEL91_GPIOC_AFRH_bit at GPIOC_AFRH.B5;
    sbit  AFSEL92_GPIOC_AFRH_bit at GPIOC_AFRH.B6;
    sbit  AFSEL93_GPIOC_AFRH_bit at GPIOC_AFRH.B7;
    sbit  AFSEL80_GPIOC_AFRH_bit at GPIOC_AFRH.B0;
    sbit  AFSEL81_GPIOC_AFRH_bit at GPIOC_AFRH.B1;
    sbit  AFSEL82_GPIOC_AFRH_bit at GPIOC_AFRH.B2;
    sbit  AFSEL83_GPIOC_AFRH_bit at GPIOC_AFRH.B3;

sfr far unsigned long   volatile GPIOC_BRR            absolute 0x50000828;
    sbit  BR0_GPIOC_BRR_bit at GPIOC_BRR.B0;
    sbit  BR1_GPIOC_BRR_bit at GPIOC_BRR.B1;
    sbit  BR2_GPIOC_BRR_bit at GPIOC_BRR.B2;
    sbit  BR3_GPIOC_BRR_bit at GPIOC_BRR.B3;
    sbit  BR4_GPIOC_BRR_bit at GPIOC_BRR.B4;
    sbit  BR5_GPIOC_BRR_bit at GPIOC_BRR.B5;
    sbit  BR6_GPIOC_BRR_bit at GPIOC_BRR.B6;
    sbit  BR7_GPIOC_BRR_bit at GPIOC_BRR.B7;
    sbit  BR8_GPIOC_BRR_bit at GPIOC_BRR.B8;
    sbit  BR9_GPIOC_BRR_bit at GPIOC_BRR.B9;
    sbit  BR10_GPIOC_BRR_bit at GPIOC_BRR.B10;
    sbit  BR11_GPIOC_BRR_bit at GPIOC_BRR.B11;
    sbit  BR12_GPIOC_BRR_bit at GPIOC_BRR.B12;
    sbit  BR13_GPIOC_BRR_bit at GPIOC_BRR.B13;
    sbit  BR14_GPIOC_BRR_bit at GPIOC_BRR.B14;
    sbit  BR15_GPIOC_BRR_bit at GPIOC_BRR.B15;

sfr far unsigned long   volatile GPIOD_BASE           absolute 0x50000C00;
sfr far unsigned long   volatile GPIOD_MODER          absolute 0x50000C00;
    sbit  MODER150_GPIOD_MODER_bit at GPIOD_MODER.B30;
    sbit  MODER151_GPIOD_MODER_bit at GPIOD_MODER.B31;
    sbit  MODER140_GPIOD_MODER_bit at GPIOD_MODER.B28;
    sbit  MODER141_GPIOD_MODER_bit at GPIOD_MODER.B29;
    sbit  MODER130_GPIOD_MODER_bit at GPIOD_MODER.B26;
    sbit  MODER131_GPIOD_MODER_bit at GPIOD_MODER.B27;
    sbit  MODER120_GPIOD_MODER_bit at GPIOD_MODER.B24;
    sbit  MODER121_GPIOD_MODER_bit at GPIOD_MODER.B25;
    sbit  MODER110_GPIOD_MODER_bit at GPIOD_MODER.B22;
    sbit  MODER111_GPIOD_MODER_bit at GPIOD_MODER.B23;
    sbit  MODER100_GPIOD_MODER_bit at GPIOD_MODER.B20;
    sbit  MODER101_GPIOD_MODER_bit at GPIOD_MODER.B21;
    sbit  MODER90_GPIOD_MODER_bit at GPIOD_MODER.B18;
    sbit  MODER91_GPIOD_MODER_bit at GPIOD_MODER.B19;
    sbit  MODER80_GPIOD_MODER_bit at GPIOD_MODER.B16;
    sbit  MODER81_GPIOD_MODER_bit at GPIOD_MODER.B17;
    sbit  MODER70_GPIOD_MODER_bit at GPIOD_MODER.B14;
    sbit  MODER71_GPIOD_MODER_bit at GPIOD_MODER.B15;
    sbit  MODER60_GPIOD_MODER_bit at GPIOD_MODER.B12;
    sbit  MODER61_GPIOD_MODER_bit at GPIOD_MODER.B13;
    sbit  MODER50_GPIOD_MODER_bit at GPIOD_MODER.B10;
    sbit  MODER51_GPIOD_MODER_bit at GPIOD_MODER.B11;
    sbit  MODER40_GPIOD_MODER_bit at GPIOD_MODER.B8;
    sbit  MODER41_GPIOD_MODER_bit at GPIOD_MODER.B9;
    sbit  MODER30_GPIOD_MODER_bit at GPIOD_MODER.B6;
    sbit  MODER31_GPIOD_MODER_bit at GPIOD_MODER.B7;
    sbit  MODER20_GPIOD_MODER_bit at GPIOD_MODER.B4;
    sbit  MODER21_GPIOD_MODER_bit at GPIOD_MODER.B5;
    sbit  MODER10_GPIOD_MODER_bit at GPIOD_MODER.B2;
    sbit  MODER11_GPIOD_MODER_bit at GPIOD_MODER.B3;
    sbit  MODER00_GPIOD_MODER_bit at GPIOD_MODER.B0;
    sbit  MODER01_GPIOD_MODER_bit at GPIOD_MODER.B1;

sfr far unsigned long   volatile GPIOD_OTYPER         absolute 0x50000C04;
    sbit  OT15_GPIOD_OTYPER_bit at GPIOD_OTYPER.B15;
    sbit  OT14_GPIOD_OTYPER_bit at GPIOD_OTYPER.B14;
    sbit  OT13_GPIOD_OTYPER_bit at GPIOD_OTYPER.B13;
    sbit  OT12_GPIOD_OTYPER_bit at GPIOD_OTYPER.B12;
    sbit  OT11_GPIOD_OTYPER_bit at GPIOD_OTYPER.B11;
    sbit  OT10_GPIOD_OTYPER_bit at GPIOD_OTYPER.B10;
    sbit  OT9_GPIOD_OTYPER_bit at GPIOD_OTYPER.B9;
    sbit  OT8_GPIOD_OTYPER_bit at GPIOD_OTYPER.B8;
    sbit  OT7_GPIOD_OTYPER_bit at GPIOD_OTYPER.B7;
    sbit  OT6_GPIOD_OTYPER_bit at GPIOD_OTYPER.B6;
    sbit  OT5_GPIOD_OTYPER_bit at GPIOD_OTYPER.B5;
    sbit  OT4_GPIOD_OTYPER_bit at GPIOD_OTYPER.B4;
    sbit  OT3_GPIOD_OTYPER_bit at GPIOD_OTYPER.B3;
    sbit  OT2_GPIOD_OTYPER_bit at GPIOD_OTYPER.B2;
    sbit  OT1_GPIOD_OTYPER_bit at GPIOD_OTYPER.B1;
    sbit  OT0_GPIOD_OTYPER_bit at GPIOD_OTYPER.B0;

sfr far unsigned long   volatile GPIOD_OSPEEDR        absolute 0x50000C08;
    sbit  OSPEEDR150_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B30;
    sbit  OSPEEDR151_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B31;
    sbit  OSPEEDR140_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B28;
    sbit  OSPEEDR141_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B29;
    sbit  OSPEEDR130_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B26;
    sbit  OSPEEDR131_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B27;
    sbit  OSPEEDR120_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B24;
    sbit  OSPEEDR121_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B25;
    sbit  OSPEEDR110_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B22;
    sbit  OSPEEDR111_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B23;
    sbit  OSPEEDR100_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B20;
    sbit  OSPEEDR101_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B21;
    sbit  OSPEEDR90_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B18;
    sbit  OSPEEDR91_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B19;
    sbit  OSPEEDR80_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B16;
    sbit  OSPEEDR81_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B17;
    sbit  OSPEEDR70_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B14;
    sbit  OSPEEDR71_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B15;
    sbit  OSPEEDR60_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B12;
    sbit  OSPEEDR61_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B13;
    sbit  OSPEEDR50_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B10;
    sbit  OSPEEDR51_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B11;
    sbit  OSPEEDR40_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B8;
    sbit  OSPEEDR41_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B9;
    sbit  OSPEEDR30_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B6;
    sbit  OSPEEDR31_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B7;
    sbit  OSPEEDR20_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B4;
    sbit  OSPEEDR21_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B5;
    sbit  OSPEEDR10_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B2;
    sbit  OSPEEDR11_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B3;
    sbit  OSPEEDR00_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B0;
    sbit  OSPEEDR01_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B1;

sfr far unsigned long   volatile GPIOD_PUPDR          absolute 0x50000C0C;
    sbit  PUPDR150_GPIOD_PUPDR_bit at GPIOD_PUPDR.B30;
    sbit  PUPDR151_GPIOD_PUPDR_bit at GPIOD_PUPDR.B31;
    sbit  PUPDR140_GPIOD_PUPDR_bit at GPIOD_PUPDR.B28;
    sbit  PUPDR141_GPIOD_PUPDR_bit at GPIOD_PUPDR.B29;
    sbit  PUPDR130_GPIOD_PUPDR_bit at GPIOD_PUPDR.B26;
    sbit  PUPDR131_GPIOD_PUPDR_bit at GPIOD_PUPDR.B27;
    sbit  PUPDR120_GPIOD_PUPDR_bit at GPIOD_PUPDR.B24;
    sbit  PUPDR121_GPIOD_PUPDR_bit at GPIOD_PUPDR.B25;
    sbit  PUPDR110_GPIOD_PUPDR_bit at GPIOD_PUPDR.B22;
    sbit  PUPDR111_GPIOD_PUPDR_bit at GPIOD_PUPDR.B23;
    sbit  PUPDR100_GPIOD_PUPDR_bit at GPIOD_PUPDR.B20;
    sbit  PUPDR101_GPIOD_PUPDR_bit at GPIOD_PUPDR.B21;
    sbit  PUPDR90_GPIOD_PUPDR_bit at GPIOD_PUPDR.B18;
    sbit  PUPDR91_GPIOD_PUPDR_bit at GPIOD_PUPDR.B19;
    sbit  PUPDR80_GPIOD_PUPDR_bit at GPIOD_PUPDR.B16;
    sbit  PUPDR81_GPIOD_PUPDR_bit at GPIOD_PUPDR.B17;
    sbit  PUPDR70_GPIOD_PUPDR_bit at GPIOD_PUPDR.B14;
    sbit  PUPDR71_GPIOD_PUPDR_bit at GPIOD_PUPDR.B15;
    sbit  PUPDR60_GPIOD_PUPDR_bit at GPIOD_PUPDR.B12;
    sbit  PUPDR61_GPIOD_PUPDR_bit at GPIOD_PUPDR.B13;
    sbit  PUPDR50_GPIOD_PUPDR_bit at GPIOD_PUPDR.B10;
    sbit  PUPDR51_GPIOD_PUPDR_bit at GPIOD_PUPDR.B11;
    sbit  PUPDR40_GPIOD_PUPDR_bit at GPIOD_PUPDR.B8;
    sbit  PUPDR41_GPIOD_PUPDR_bit at GPIOD_PUPDR.B9;
    sbit  PUPDR30_GPIOD_PUPDR_bit at GPIOD_PUPDR.B6;
    sbit  PUPDR31_GPIOD_PUPDR_bit at GPIOD_PUPDR.B7;
    sbit  PUPDR20_GPIOD_PUPDR_bit at GPIOD_PUPDR.B4;
    sbit  PUPDR21_GPIOD_PUPDR_bit at GPIOD_PUPDR.B5;
    sbit  PUPDR10_GPIOD_PUPDR_bit at GPIOD_PUPDR.B2;
    sbit  PUPDR11_GPIOD_PUPDR_bit at GPIOD_PUPDR.B3;
    sbit  PUPDR00_GPIOD_PUPDR_bit at GPIOD_PUPDR.B0;
    sbit  PUPDR01_GPIOD_PUPDR_bit at GPIOD_PUPDR.B1;

sfr far unsigned long   volatile GPIOD_IDR            absolute 0x50000C10;
    sbit  IDR15_GPIOD_IDR_bit at GPIOD_IDR.B15;
    sbit  IDR14_GPIOD_IDR_bit at GPIOD_IDR.B14;
    sbit  IDR13_GPIOD_IDR_bit at GPIOD_IDR.B13;
    sbit  IDR12_GPIOD_IDR_bit at GPIOD_IDR.B12;
    sbit  IDR11_GPIOD_IDR_bit at GPIOD_IDR.B11;
    sbit  IDR10_GPIOD_IDR_bit at GPIOD_IDR.B10;
    sbit  IDR9_GPIOD_IDR_bit at GPIOD_IDR.B9;
    sbit  IDR8_GPIOD_IDR_bit at GPIOD_IDR.B8;
    sbit  IDR7_GPIOD_IDR_bit at GPIOD_IDR.B7;
    sbit  IDR6_GPIOD_IDR_bit at GPIOD_IDR.B6;
    sbit  IDR5_GPIOD_IDR_bit at GPIOD_IDR.B5;
    sbit  IDR4_GPIOD_IDR_bit at GPIOD_IDR.B4;
    sbit  IDR3_GPIOD_IDR_bit at GPIOD_IDR.B3;
    sbit  IDR2_GPIOD_IDR_bit at GPIOD_IDR.B2;
    sbit  IDR1_GPIOD_IDR_bit at GPIOD_IDR.B1;
    sbit  IDR0_GPIOD_IDR_bit at GPIOD_IDR.B0;

sfr far unsigned long   volatile GPIOD_ODR            absolute 0x50000C14;
    sbit  ODR15_GPIOD_ODR_bit at GPIOD_ODR.B15;
    sbit  ODR14_GPIOD_ODR_bit at GPIOD_ODR.B14;
    sbit  ODR13_GPIOD_ODR_bit at GPIOD_ODR.B13;
    sbit  ODR12_GPIOD_ODR_bit at GPIOD_ODR.B12;
    sbit  ODR11_GPIOD_ODR_bit at GPIOD_ODR.B11;
    sbit  ODR10_GPIOD_ODR_bit at GPIOD_ODR.B10;
    sbit  ODR9_GPIOD_ODR_bit at GPIOD_ODR.B9;
    sbit  ODR8_GPIOD_ODR_bit at GPIOD_ODR.B8;
    sbit  ODR7_GPIOD_ODR_bit at GPIOD_ODR.B7;
    sbit  ODR6_GPIOD_ODR_bit at GPIOD_ODR.B6;
    sbit  ODR5_GPIOD_ODR_bit at GPIOD_ODR.B5;
    sbit  ODR4_GPIOD_ODR_bit at GPIOD_ODR.B4;
    sbit  ODR3_GPIOD_ODR_bit at GPIOD_ODR.B3;
    sbit  ODR2_GPIOD_ODR_bit at GPIOD_ODR.B2;
    sbit  ODR1_GPIOD_ODR_bit at GPIOD_ODR.B1;
    sbit  ODR0_GPIOD_ODR_bit at GPIOD_ODR.B0;

sfr far unsigned long   volatile GPIOD_BSRR           absolute 0x50000C18;
    sbit  BR15_GPIOD_BSRR_bit at GPIOD_BSRR.B31;
    sbit  BR14_GPIOD_BSRR_bit at GPIOD_BSRR.B30;
    sbit  BR13_GPIOD_BSRR_bit at GPIOD_BSRR.B29;
    sbit  BR12_GPIOD_BSRR_bit at GPIOD_BSRR.B28;
    sbit  BR11_GPIOD_BSRR_bit at GPIOD_BSRR.B27;
    sbit  BR10_GPIOD_BSRR_bit at GPIOD_BSRR.B26;
    sbit  BR9_GPIOD_BSRR_bit at GPIOD_BSRR.B25;
    sbit  BR8_GPIOD_BSRR_bit at GPIOD_BSRR.B24;
    sbit  BR7_GPIOD_BSRR_bit at GPIOD_BSRR.B23;
    sbit  BR6_GPIOD_BSRR_bit at GPIOD_BSRR.B22;
    sbit  BR5_GPIOD_BSRR_bit at GPIOD_BSRR.B21;
    sbit  BR4_GPIOD_BSRR_bit at GPIOD_BSRR.B20;
    sbit  BR3_GPIOD_BSRR_bit at GPIOD_BSRR.B19;
    sbit  BR2_GPIOD_BSRR_bit at GPIOD_BSRR.B18;
    sbit  BR1_GPIOD_BSRR_bit at GPIOD_BSRR.B17;
    sbit  BR0_GPIOD_BSRR_bit at GPIOD_BSRR.B16;
    sbit  BS15_GPIOD_BSRR_bit at GPIOD_BSRR.B15;
    sbit  BS14_GPIOD_BSRR_bit at GPIOD_BSRR.B14;
    sbit  BS13_GPIOD_BSRR_bit at GPIOD_BSRR.B13;
    sbit  BS12_GPIOD_BSRR_bit at GPIOD_BSRR.B12;
    sbit  BS11_GPIOD_BSRR_bit at GPIOD_BSRR.B11;
    sbit  BS10_GPIOD_BSRR_bit at GPIOD_BSRR.B10;
    sbit  BS9_GPIOD_BSRR_bit at GPIOD_BSRR.B9;
    sbit  BS8_GPIOD_BSRR_bit at GPIOD_BSRR.B8;
    sbit  BS7_GPIOD_BSRR_bit at GPIOD_BSRR.B7;
    sbit  BS6_GPIOD_BSRR_bit at GPIOD_BSRR.B6;
    sbit  BS5_GPIOD_BSRR_bit at GPIOD_BSRR.B5;
    sbit  BS4_GPIOD_BSRR_bit at GPIOD_BSRR.B4;
    sbit  BS3_GPIOD_BSRR_bit at GPIOD_BSRR.B3;
    sbit  BS2_GPIOD_BSRR_bit at GPIOD_BSRR.B2;
    sbit  BS1_GPIOD_BSRR_bit at GPIOD_BSRR.B1;
    sbit  BS0_GPIOD_BSRR_bit at GPIOD_BSRR.B0;

sfr far unsigned long   volatile GPIOD_LCKR           absolute 0x50000C1C;
    sbit  LCKK_GPIOD_LCKR_bit at GPIOD_LCKR.B16;
    sbit  LCK15_GPIOD_LCKR_bit at GPIOD_LCKR.B15;
    sbit  LCK14_GPIOD_LCKR_bit at GPIOD_LCKR.B14;
    sbit  LCK13_GPIOD_LCKR_bit at GPIOD_LCKR.B13;
    sbit  LCK12_GPIOD_LCKR_bit at GPIOD_LCKR.B12;
    sbit  LCK11_GPIOD_LCKR_bit at GPIOD_LCKR.B11;
    sbit  LCK10_GPIOD_LCKR_bit at GPIOD_LCKR.B10;
    sbit  LCK9_GPIOD_LCKR_bit at GPIOD_LCKR.B9;
    sbit  LCK8_GPIOD_LCKR_bit at GPIOD_LCKR.B8;
    sbit  LCK7_GPIOD_LCKR_bit at GPIOD_LCKR.B7;
    sbit  LCK6_GPIOD_LCKR_bit at GPIOD_LCKR.B6;
    sbit  LCK5_GPIOD_LCKR_bit at GPIOD_LCKR.B5;
    sbit  LCK4_GPIOD_LCKR_bit at GPIOD_LCKR.B4;
    sbit  LCK3_GPIOD_LCKR_bit at GPIOD_LCKR.B3;
    sbit  LCK2_GPIOD_LCKR_bit at GPIOD_LCKR.B2;
    sbit  LCK1_GPIOD_LCKR_bit at GPIOD_LCKR.B1;
    sbit  LCK0_GPIOD_LCKR_bit at GPIOD_LCKR.B0;

sfr far unsigned long   volatile GPIOD_AFRL           absolute 0x50000C20;
    sbit  AFSEL70_GPIOD_AFRL_bit at GPIOD_AFRL.B28;
    sbit  AFSEL71_GPIOD_AFRL_bit at GPIOD_AFRL.B29;
    sbit  AFSEL72_GPIOD_AFRL_bit at GPIOD_AFRL.B30;
    sbit  AFSEL73_GPIOD_AFRL_bit at GPIOD_AFRL.B31;
    sbit  AFSEL60_GPIOD_AFRL_bit at GPIOD_AFRL.B24;
    sbit  AFSEL61_GPIOD_AFRL_bit at GPIOD_AFRL.B25;
    sbit  AFSEL62_GPIOD_AFRL_bit at GPIOD_AFRL.B26;
    sbit  AFSEL63_GPIOD_AFRL_bit at GPIOD_AFRL.B27;
    sbit  AFSEL50_GPIOD_AFRL_bit at GPIOD_AFRL.B20;
    sbit  AFSEL51_GPIOD_AFRL_bit at GPIOD_AFRL.B21;
    sbit  AFSEL52_GPIOD_AFRL_bit at GPIOD_AFRL.B22;
    sbit  AFSEL53_GPIOD_AFRL_bit at GPIOD_AFRL.B23;
    sbit  AFSEL40_GPIOD_AFRL_bit at GPIOD_AFRL.B16;
    sbit  AFSEL41_GPIOD_AFRL_bit at GPIOD_AFRL.B17;
    sbit  AFSEL42_GPIOD_AFRL_bit at GPIOD_AFRL.B18;
    sbit  AFSEL43_GPIOD_AFRL_bit at GPIOD_AFRL.B19;
    sbit  AFSEL30_GPIOD_AFRL_bit at GPIOD_AFRL.B12;
    sbit  AFSEL31_GPIOD_AFRL_bit at GPIOD_AFRL.B13;
    sbit  AFSEL32_GPIOD_AFRL_bit at GPIOD_AFRL.B14;
    sbit  AFSEL33_GPIOD_AFRL_bit at GPIOD_AFRL.B15;
    sbit  AFSEL20_GPIOD_AFRL_bit at GPIOD_AFRL.B8;
    sbit  AFSEL21_GPIOD_AFRL_bit at GPIOD_AFRL.B9;
    sbit  AFSEL22_GPIOD_AFRL_bit at GPIOD_AFRL.B10;
    sbit  AFSEL23_GPIOD_AFRL_bit at GPIOD_AFRL.B11;
    sbit  AFSEL10_GPIOD_AFRL_bit at GPIOD_AFRL.B4;
    sbit  AFSEL11_GPIOD_AFRL_bit at GPIOD_AFRL.B5;
    sbit  AFSEL12_GPIOD_AFRL_bit at GPIOD_AFRL.B6;
    sbit  AFSEL13_GPIOD_AFRL_bit at GPIOD_AFRL.B7;
    sbit  AFSEL00_GPIOD_AFRL_bit at GPIOD_AFRL.B0;
    sbit  AFSEL01_GPIOD_AFRL_bit at GPIOD_AFRL.B1;
    sbit  AFSEL02_GPIOD_AFRL_bit at GPIOD_AFRL.B2;
    sbit  AFSEL03_GPIOD_AFRL_bit at GPIOD_AFRL.B3;

sfr far unsigned long   volatile GPIOD_AFRH           absolute 0x50000C24;
    sbit  AFSEL150_GPIOD_AFRH_bit at GPIOD_AFRH.B28;
    sbit  AFSEL151_GPIOD_AFRH_bit at GPIOD_AFRH.B29;
    sbit  AFSEL152_GPIOD_AFRH_bit at GPIOD_AFRH.B30;
    sbit  AFSEL153_GPIOD_AFRH_bit at GPIOD_AFRH.B31;
    sbit  AFSEL140_GPIOD_AFRH_bit at GPIOD_AFRH.B24;
    sbit  AFSEL141_GPIOD_AFRH_bit at GPIOD_AFRH.B25;
    sbit  AFSEL142_GPIOD_AFRH_bit at GPIOD_AFRH.B26;
    sbit  AFSEL143_GPIOD_AFRH_bit at GPIOD_AFRH.B27;
    sbit  AFSEL130_GPIOD_AFRH_bit at GPIOD_AFRH.B20;
    sbit  AFSEL131_GPIOD_AFRH_bit at GPIOD_AFRH.B21;
    sbit  AFSEL132_GPIOD_AFRH_bit at GPIOD_AFRH.B22;
    sbit  AFSEL133_GPIOD_AFRH_bit at GPIOD_AFRH.B23;
    sbit  AFSEL120_GPIOD_AFRH_bit at GPIOD_AFRH.B16;
    sbit  AFSEL121_GPIOD_AFRH_bit at GPIOD_AFRH.B17;
    sbit  AFSEL122_GPIOD_AFRH_bit at GPIOD_AFRH.B18;
    sbit  AFSEL123_GPIOD_AFRH_bit at GPIOD_AFRH.B19;
    sbit  AFSEL110_GPIOD_AFRH_bit at GPIOD_AFRH.B12;
    sbit  AFSEL111_GPIOD_AFRH_bit at GPIOD_AFRH.B13;
    sbit  AFSEL112_GPIOD_AFRH_bit at GPIOD_AFRH.B14;
    sbit  AFSEL113_GPIOD_AFRH_bit at GPIOD_AFRH.B15;
    sbit  AFSEL100_GPIOD_AFRH_bit at GPIOD_AFRH.B8;
    sbit  AFSEL101_GPIOD_AFRH_bit at GPIOD_AFRH.B9;
    sbit  AFSEL102_GPIOD_AFRH_bit at GPIOD_AFRH.B10;
    sbit  AFSEL103_GPIOD_AFRH_bit at GPIOD_AFRH.B11;
    sbit  AFSEL90_GPIOD_AFRH_bit at GPIOD_AFRH.B4;
    sbit  AFSEL91_GPIOD_AFRH_bit at GPIOD_AFRH.B5;
    sbit  AFSEL92_GPIOD_AFRH_bit at GPIOD_AFRH.B6;
    sbit  AFSEL93_GPIOD_AFRH_bit at GPIOD_AFRH.B7;
    sbit  AFSEL80_GPIOD_AFRH_bit at GPIOD_AFRH.B0;
    sbit  AFSEL81_GPIOD_AFRH_bit at GPIOD_AFRH.B1;
    sbit  AFSEL82_GPIOD_AFRH_bit at GPIOD_AFRH.B2;
    sbit  AFSEL83_GPIOD_AFRH_bit at GPIOD_AFRH.B3;

sfr far unsigned long   volatile GPIOD_BRR            absolute 0x50000C28;
    sbit  BR0_GPIOD_BRR_bit at GPIOD_BRR.B0;
    sbit  BR1_GPIOD_BRR_bit at GPIOD_BRR.B1;
    sbit  BR2_GPIOD_BRR_bit at GPIOD_BRR.B2;
    sbit  BR3_GPIOD_BRR_bit at GPIOD_BRR.B3;
    sbit  BR4_GPIOD_BRR_bit at GPIOD_BRR.B4;
    sbit  BR5_GPIOD_BRR_bit at GPIOD_BRR.B5;
    sbit  BR6_GPIOD_BRR_bit at GPIOD_BRR.B6;
    sbit  BR7_GPIOD_BRR_bit at GPIOD_BRR.B7;
    sbit  BR8_GPIOD_BRR_bit at GPIOD_BRR.B8;
    sbit  BR9_GPIOD_BRR_bit at GPIOD_BRR.B9;
    sbit  BR10_GPIOD_BRR_bit at GPIOD_BRR.B10;
    sbit  BR11_GPIOD_BRR_bit at GPIOD_BRR.B11;
    sbit  BR12_GPIOD_BRR_bit at GPIOD_BRR.B12;
    sbit  BR13_GPIOD_BRR_bit at GPIOD_BRR.B13;
    sbit  BR14_GPIOD_BRR_bit at GPIOD_BRR.B14;
    sbit  BR15_GPIOD_BRR_bit at GPIOD_BRR.B15;

sfr far unsigned long   volatile GPIOF_BASE           absolute 0x50001400;
sfr far unsigned long   volatile GPIOF_MODER          absolute 0x50001400;
    sbit  MODER150_GPIOF_MODER_bit at GPIOF_MODER.B30;
    sbit  MODER151_GPIOF_MODER_bit at GPIOF_MODER.B31;
    sbit  MODER140_GPIOF_MODER_bit at GPIOF_MODER.B28;
    sbit  MODER141_GPIOF_MODER_bit at GPIOF_MODER.B29;
    sbit  MODER130_GPIOF_MODER_bit at GPIOF_MODER.B26;
    sbit  MODER131_GPIOF_MODER_bit at GPIOF_MODER.B27;
    sbit  MODER120_GPIOF_MODER_bit at GPIOF_MODER.B24;
    sbit  MODER121_GPIOF_MODER_bit at GPIOF_MODER.B25;
    sbit  MODER110_GPIOF_MODER_bit at GPIOF_MODER.B22;
    sbit  MODER111_GPIOF_MODER_bit at GPIOF_MODER.B23;
    sbit  MODER100_GPIOF_MODER_bit at GPIOF_MODER.B20;
    sbit  MODER101_GPIOF_MODER_bit at GPIOF_MODER.B21;
    sbit  MODER90_GPIOF_MODER_bit at GPIOF_MODER.B18;
    sbit  MODER91_GPIOF_MODER_bit at GPIOF_MODER.B19;
    sbit  MODER80_GPIOF_MODER_bit at GPIOF_MODER.B16;
    sbit  MODER81_GPIOF_MODER_bit at GPIOF_MODER.B17;
    sbit  MODER70_GPIOF_MODER_bit at GPIOF_MODER.B14;
    sbit  MODER71_GPIOF_MODER_bit at GPIOF_MODER.B15;
    sbit  MODER60_GPIOF_MODER_bit at GPIOF_MODER.B12;
    sbit  MODER61_GPIOF_MODER_bit at GPIOF_MODER.B13;
    sbit  MODER50_GPIOF_MODER_bit at GPIOF_MODER.B10;
    sbit  MODER51_GPIOF_MODER_bit at GPIOF_MODER.B11;
    sbit  MODER40_GPIOF_MODER_bit at GPIOF_MODER.B8;
    sbit  MODER41_GPIOF_MODER_bit at GPIOF_MODER.B9;
    sbit  MODER30_GPIOF_MODER_bit at GPIOF_MODER.B6;
    sbit  MODER31_GPIOF_MODER_bit at GPIOF_MODER.B7;
    sbit  MODER20_GPIOF_MODER_bit at GPIOF_MODER.B4;
    sbit  MODER21_GPIOF_MODER_bit at GPIOF_MODER.B5;
    sbit  MODER10_GPIOF_MODER_bit at GPIOF_MODER.B2;
    sbit  MODER11_GPIOF_MODER_bit at GPIOF_MODER.B3;
    sbit  MODER00_GPIOF_MODER_bit at GPIOF_MODER.B0;
    sbit  MODER01_GPIOF_MODER_bit at GPIOF_MODER.B1;

sfr far unsigned long   volatile GPIOF_OTYPER         absolute 0x50001404;
    sbit  OT15_GPIOF_OTYPER_bit at GPIOF_OTYPER.B15;
    sbit  OT14_GPIOF_OTYPER_bit at GPIOF_OTYPER.B14;
    sbit  OT13_GPIOF_OTYPER_bit at GPIOF_OTYPER.B13;
    sbit  OT12_GPIOF_OTYPER_bit at GPIOF_OTYPER.B12;
    sbit  OT11_GPIOF_OTYPER_bit at GPIOF_OTYPER.B11;
    sbit  OT10_GPIOF_OTYPER_bit at GPIOF_OTYPER.B10;
    sbit  OT9_GPIOF_OTYPER_bit at GPIOF_OTYPER.B9;
    sbit  OT8_GPIOF_OTYPER_bit at GPIOF_OTYPER.B8;
    sbit  OT7_GPIOF_OTYPER_bit at GPIOF_OTYPER.B7;
    sbit  OT6_GPIOF_OTYPER_bit at GPIOF_OTYPER.B6;
    sbit  OT5_GPIOF_OTYPER_bit at GPIOF_OTYPER.B5;
    sbit  OT4_GPIOF_OTYPER_bit at GPIOF_OTYPER.B4;
    sbit  OT3_GPIOF_OTYPER_bit at GPIOF_OTYPER.B3;
    sbit  OT2_GPIOF_OTYPER_bit at GPIOF_OTYPER.B2;
    sbit  OT1_GPIOF_OTYPER_bit at GPIOF_OTYPER.B1;
    sbit  OT0_GPIOF_OTYPER_bit at GPIOF_OTYPER.B0;

sfr far unsigned long   volatile GPIOF_OSPEEDR        absolute 0x50001408;
    sbit  OSPEEDR150_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B30;
    sbit  OSPEEDR151_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B31;
    sbit  OSPEEDR140_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B28;
    sbit  OSPEEDR141_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B29;
    sbit  OSPEEDR130_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B26;
    sbit  OSPEEDR131_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B27;
    sbit  OSPEEDR120_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B24;
    sbit  OSPEEDR121_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B25;
    sbit  OSPEEDR110_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B22;
    sbit  OSPEEDR111_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B23;
    sbit  OSPEEDR100_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B20;
    sbit  OSPEEDR101_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B21;
    sbit  OSPEEDR90_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B18;
    sbit  OSPEEDR91_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B19;
    sbit  OSPEEDR80_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B16;
    sbit  OSPEEDR81_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B17;
    sbit  OSPEEDR70_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B14;
    sbit  OSPEEDR71_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B15;
    sbit  OSPEEDR60_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B12;
    sbit  OSPEEDR61_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B13;
    sbit  OSPEEDR50_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B10;
    sbit  OSPEEDR51_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B11;
    sbit  OSPEEDR40_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B8;
    sbit  OSPEEDR41_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B9;
    sbit  OSPEEDR30_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B6;
    sbit  OSPEEDR31_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B7;
    sbit  OSPEEDR20_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B4;
    sbit  OSPEEDR21_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B5;
    sbit  OSPEEDR10_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B2;
    sbit  OSPEEDR11_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B3;
    sbit  OSPEEDR00_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B0;
    sbit  OSPEEDR01_GPIOF_OSPEEDR_bit at GPIOF_OSPEEDR.B1;

sfr far unsigned long   volatile GPIOF_PUPDR          absolute 0x5000140C;
    sbit  PUPDR150_GPIOF_PUPDR_bit at GPIOF_PUPDR.B30;
    sbit  PUPDR151_GPIOF_PUPDR_bit at GPIOF_PUPDR.B31;
    sbit  PUPDR140_GPIOF_PUPDR_bit at GPIOF_PUPDR.B28;
    sbit  PUPDR141_GPIOF_PUPDR_bit at GPIOF_PUPDR.B29;
    sbit  PUPDR130_GPIOF_PUPDR_bit at GPIOF_PUPDR.B26;
    sbit  PUPDR131_GPIOF_PUPDR_bit at GPIOF_PUPDR.B27;
    sbit  PUPDR120_GPIOF_PUPDR_bit at GPIOF_PUPDR.B24;
    sbit  PUPDR121_GPIOF_PUPDR_bit at GPIOF_PUPDR.B25;
    sbit  PUPDR110_GPIOF_PUPDR_bit at GPIOF_PUPDR.B22;
    sbit  PUPDR111_GPIOF_PUPDR_bit at GPIOF_PUPDR.B23;
    sbit  PUPDR100_GPIOF_PUPDR_bit at GPIOF_PUPDR.B20;
    sbit  PUPDR101_GPIOF_PUPDR_bit at GPIOF_PUPDR.B21;
    sbit  PUPDR90_GPIOF_PUPDR_bit at GPIOF_PUPDR.B18;
    sbit  PUPDR91_GPIOF_PUPDR_bit at GPIOF_PUPDR.B19;
    sbit  PUPDR80_GPIOF_PUPDR_bit at GPIOF_PUPDR.B16;
    sbit  PUPDR81_GPIOF_PUPDR_bit at GPIOF_PUPDR.B17;
    sbit  PUPDR70_GPIOF_PUPDR_bit at GPIOF_PUPDR.B14;
    sbit  PUPDR71_GPIOF_PUPDR_bit at GPIOF_PUPDR.B15;
    sbit  PUPDR60_GPIOF_PUPDR_bit at GPIOF_PUPDR.B12;
    sbit  PUPDR61_GPIOF_PUPDR_bit at GPIOF_PUPDR.B13;
    sbit  PUPDR50_GPIOF_PUPDR_bit at GPIOF_PUPDR.B10;
    sbit  PUPDR51_GPIOF_PUPDR_bit at GPIOF_PUPDR.B11;
    sbit  PUPDR40_GPIOF_PUPDR_bit at GPIOF_PUPDR.B8;
    sbit  PUPDR41_GPIOF_PUPDR_bit at GPIOF_PUPDR.B9;
    sbit  PUPDR30_GPIOF_PUPDR_bit at GPIOF_PUPDR.B6;
    sbit  PUPDR31_GPIOF_PUPDR_bit at GPIOF_PUPDR.B7;
    sbit  PUPDR20_GPIOF_PUPDR_bit at GPIOF_PUPDR.B4;
    sbit  PUPDR21_GPIOF_PUPDR_bit at GPIOF_PUPDR.B5;
    sbit  PUPDR10_GPIOF_PUPDR_bit at GPIOF_PUPDR.B2;
    sbit  PUPDR11_GPIOF_PUPDR_bit at GPIOF_PUPDR.B3;
    sbit  PUPDR00_GPIOF_PUPDR_bit at GPIOF_PUPDR.B0;
    sbit  PUPDR01_GPIOF_PUPDR_bit at GPIOF_PUPDR.B1;

sfr far unsigned long   volatile GPIOF_IDR            absolute 0x50001410;
    sbit  IDR15_GPIOF_IDR_bit at GPIOF_IDR.B15;
    sbit  IDR14_GPIOF_IDR_bit at GPIOF_IDR.B14;
    sbit  IDR13_GPIOF_IDR_bit at GPIOF_IDR.B13;
    sbit  IDR12_GPIOF_IDR_bit at GPIOF_IDR.B12;
    sbit  IDR11_GPIOF_IDR_bit at GPIOF_IDR.B11;
    sbit  IDR10_GPIOF_IDR_bit at GPIOF_IDR.B10;
    sbit  IDR9_GPIOF_IDR_bit at GPIOF_IDR.B9;
    sbit  IDR8_GPIOF_IDR_bit at GPIOF_IDR.B8;
    sbit  IDR7_GPIOF_IDR_bit at GPIOF_IDR.B7;
    sbit  IDR6_GPIOF_IDR_bit at GPIOF_IDR.B6;
    sbit  IDR5_GPIOF_IDR_bit at GPIOF_IDR.B5;
    sbit  IDR4_GPIOF_IDR_bit at GPIOF_IDR.B4;
    sbit  IDR3_GPIOF_IDR_bit at GPIOF_IDR.B3;
    sbit  IDR2_GPIOF_IDR_bit at GPIOF_IDR.B2;
    sbit  IDR1_GPIOF_IDR_bit at GPIOF_IDR.B1;
    sbit  IDR0_GPIOF_IDR_bit at GPIOF_IDR.B0;

sfr far unsigned long   volatile GPIOF_ODR            absolute 0x50001414;
    sbit  ODR15_GPIOF_ODR_bit at GPIOF_ODR.B15;
    sbit  ODR14_GPIOF_ODR_bit at GPIOF_ODR.B14;
    sbit  ODR13_GPIOF_ODR_bit at GPIOF_ODR.B13;
    sbit  ODR12_GPIOF_ODR_bit at GPIOF_ODR.B12;
    sbit  ODR11_GPIOF_ODR_bit at GPIOF_ODR.B11;
    sbit  ODR10_GPIOF_ODR_bit at GPIOF_ODR.B10;
    sbit  ODR9_GPIOF_ODR_bit at GPIOF_ODR.B9;
    sbit  ODR8_GPIOF_ODR_bit at GPIOF_ODR.B8;
    sbit  ODR7_GPIOF_ODR_bit at GPIOF_ODR.B7;
    sbit  ODR6_GPIOF_ODR_bit at GPIOF_ODR.B6;
    sbit  ODR5_GPIOF_ODR_bit at GPIOF_ODR.B5;
    sbit  ODR4_GPIOF_ODR_bit at GPIOF_ODR.B4;
    sbit  ODR3_GPIOF_ODR_bit at GPIOF_ODR.B3;
    sbit  ODR2_GPIOF_ODR_bit at GPIOF_ODR.B2;
    sbit  ODR1_GPIOF_ODR_bit at GPIOF_ODR.B1;
    sbit  ODR0_GPIOF_ODR_bit at GPIOF_ODR.B0;

sfr far unsigned long   volatile GPIOF_BSRR           absolute 0x50001418;
    sbit  BR15_GPIOF_BSRR_bit at GPIOF_BSRR.B31;
    sbit  BR14_GPIOF_BSRR_bit at GPIOF_BSRR.B30;
    sbit  BR13_GPIOF_BSRR_bit at GPIOF_BSRR.B29;
    sbit  BR12_GPIOF_BSRR_bit at GPIOF_BSRR.B28;
    sbit  BR11_GPIOF_BSRR_bit at GPIOF_BSRR.B27;
    sbit  BR10_GPIOF_BSRR_bit at GPIOF_BSRR.B26;
    sbit  BR9_GPIOF_BSRR_bit at GPIOF_BSRR.B25;
    sbit  BR8_GPIOF_BSRR_bit at GPIOF_BSRR.B24;
    sbit  BR7_GPIOF_BSRR_bit at GPIOF_BSRR.B23;
    sbit  BR6_GPIOF_BSRR_bit at GPIOF_BSRR.B22;
    sbit  BR5_GPIOF_BSRR_bit at GPIOF_BSRR.B21;
    sbit  BR4_GPIOF_BSRR_bit at GPIOF_BSRR.B20;
    sbit  BR3_GPIOF_BSRR_bit at GPIOF_BSRR.B19;
    sbit  BR2_GPIOF_BSRR_bit at GPIOF_BSRR.B18;
    sbit  BR1_GPIOF_BSRR_bit at GPIOF_BSRR.B17;
    sbit  BR0_GPIOF_BSRR_bit at GPIOF_BSRR.B16;
    sbit  BS15_GPIOF_BSRR_bit at GPIOF_BSRR.B15;
    sbit  BS14_GPIOF_BSRR_bit at GPIOF_BSRR.B14;
    sbit  BS13_GPIOF_BSRR_bit at GPIOF_BSRR.B13;
    sbit  BS12_GPIOF_BSRR_bit at GPIOF_BSRR.B12;
    sbit  BS11_GPIOF_BSRR_bit at GPIOF_BSRR.B11;
    sbit  BS10_GPIOF_BSRR_bit at GPIOF_BSRR.B10;
    sbit  BS9_GPIOF_BSRR_bit at GPIOF_BSRR.B9;
    sbit  BS8_GPIOF_BSRR_bit at GPIOF_BSRR.B8;
    sbit  BS7_GPIOF_BSRR_bit at GPIOF_BSRR.B7;
    sbit  BS6_GPIOF_BSRR_bit at GPIOF_BSRR.B6;
    sbit  BS5_GPIOF_BSRR_bit at GPIOF_BSRR.B5;
    sbit  BS4_GPIOF_BSRR_bit at GPIOF_BSRR.B4;
    sbit  BS3_GPIOF_BSRR_bit at GPIOF_BSRR.B3;
    sbit  BS2_GPIOF_BSRR_bit at GPIOF_BSRR.B2;
    sbit  BS1_GPIOF_BSRR_bit at GPIOF_BSRR.B1;
    sbit  BS0_GPIOF_BSRR_bit at GPIOF_BSRR.B0;

sfr far unsigned long   volatile GPIOF_LCKR           absolute 0x5000141C;
    sbit  LCKK_GPIOF_LCKR_bit at GPIOF_LCKR.B16;
    sbit  LCK15_GPIOF_LCKR_bit at GPIOF_LCKR.B15;
    sbit  LCK14_GPIOF_LCKR_bit at GPIOF_LCKR.B14;
    sbit  LCK13_GPIOF_LCKR_bit at GPIOF_LCKR.B13;
    sbit  LCK12_GPIOF_LCKR_bit at GPIOF_LCKR.B12;
    sbit  LCK11_GPIOF_LCKR_bit at GPIOF_LCKR.B11;
    sbit  LCK10_GPIOF_LCKR_bit at GPIOF_LCKR.B10;
    sbit  LCK9_GPIOF_LCKR_bit at GPIOF_LCKR.B9;
    sbit  LCK8_GPIOF_LCKR_bit at GPIOF_LCKR.B8;
    sbit  LCK7_GPIOF_LCKR_bit at GPIOF_LCKR.B7;
    sbit  LCK6_GPIOF_LCKR_bit at GPIOF_LCKR.B6;
    sbit  LCK5_GPIOF_LCKR_bit at GPIOF_LCKR.B5;
    sbit  LCK4_GPIOF_LCKR_bit at GPIOF_LCKR.B4;
    sbit  LCK3_GPIOF_LCKR_bit at GPIOF_LCKR.B3;
    sbit  LCK2_GPIOF_LCKR_bit at GPIOF_LCKR.B2;
    sbit  LCK1_GPIOF_LCKR_bit at GPIOF_LCKR.B1;
    sbit  LCK0_GPIOF_LCKR_bit at GPIOF_LCKR.B0;

sfr far unsigned long   volatile GPIOF_AFRL           absolute 0x50001420;
    sbit  AFSEL70_GPIOF_AFRL_bit at GPIOF_AFRL.B28;
    sbit  AFSEL71_GPIOF_AFRL_bit at GPIOF_AFRL.B29;
    sbit  AFSEL72_GPIOF_AFRL_bit at GPIOF_AFRL.B30;
    sbit  AFSEL73_GPIOF_AFRL_bit at GPIOF_AFRL.B31;
    sbit  AFSEL60_GPIOF_AFRL_bit at GPIOF_AFRL.B24;
    sbit  AFSEL61_GPIOF_AFRL_bit at GPIOF_AFRL.B25;
    sbit  AFSEL62_GPIOF_AFRL_bit at GPIOF_AFRL.B26;
    sbit  AFSEL63_GPIOF_AFRL_bit at GPIOF_AFRL.B27;
    sbit  AFSEL50_GPIOF_AFRL_bit at GPIOF_AFRL.B20;
    sbit  AFSEL51_GPIOF_AFRL_bit at GPIOF_AFRL.B21;
    sbit  AFSEL52_GPIOF_AFRL_bit at GPIOF_AFRL.B22;
    sbit  AFSEL53_GPIOF_AFRL_bit at GPIOF_AFRL.B23;
    sbit  AFSEL40_GPIOF_AFRL_bit at GPIOF_AFRL.B16;
    sbit  AFSEL41_GPIOF_AFRL_bit at GPIOF_AFRL.B17;
    sbit  AFSEL42_GPIOF_AFRL_bit at GPIOF_AFRL.B18;
    sbit  AFSEL43_GPIOF_AFRL_bit at GPIOF_AFRL.B19;
    sbit  AFSEL30_GPIOF_AFRL_bit at GPIOF_AFRL.B12;
    sbit  AFSEL31_GPIOF_AFRL_bit at GPIOF_AFRL.B13;
    sbit  AFSEL32_GPIOF_AFRL_bit at GPIOF_AFRL.B14;
    sbit  AFSEL33_GPIOF_AFRL_bit at GPIOF_AFRL.B15;
    sbit  AFSEL20_GPIOF_AFRL_bit at GPIOF_AFRL.B8;
    sbit  AFSEL21_GPIOF_AFRL_bit at GPIOF_AFRL.B9;
    sbit  AFSEL22_GPIOF_AFRL_bit at GPIOF_AFRL.B10;
    sbit  AFSEL23_GPIOF_AFRL_bit at GPIOF_AFRL.B11;
    sbit  AFSEL10_GPIOF_AFRL_bit at GPIOF_AFRL.B4;
    sbit  AFSEL11_GPIOF_AFRL_bit at GPIOF_AFRL.B5;
    sbit  AFSEL12_GPIOF_AFRL_bit at GPIOF_AFRL.B6;
    sbit  AFSEL13_GPIOF_AFRL_bit at GPIOF_AFRL.B7;
    sbit  AFSEL00_GPIOF_AFRL_bit at GPIOF_AFRL.B0;
    sbit  AFSEL01_GPIOF_AFRL_bit at GPIOF_AFRL.B1;
    sbit  AFSEL02_GPIOF_AFRL_bit at GPIOF_AFRL.B2;
    sbit  AFSEL03_GPIOF_AFRL_bit at GPIOF_AFRL.B3;

sfr far unsigned long   volatile GPIOF_AFRH           absolute 0x50001424;
    sbit  AFSEL150_GPIOF_AFRH_bit at GPIOF_AFRH.B28;
    sbit  AFSEL151_GPIOF_AFRH_bit at GPIOF_AFRH.B29;
    sbit  AFSEL152_GPIOF_AFRH_bit at GPIOF_AFRH.B30;
    sbit  AFSEL153_GPIOF_AFRH_bit at GPIOF_AFRH.B31;
    sbit  AFSEL140_GPIOF_AFRH_bit at GPIOF_AFRH.B24;
    sbit  AFSEL141_GPIOF_AFRH_bit at GPIOF_AFRH.B25;
    sbit  AFSEL142_GPIOF_AFRH_bit at GPIOF_AFRH.B26;
    sbit  AFSEL143_GPIOF_AFRH_bit at GPIOF_AFRH.B27;
    sbit  AFSEL130_GPIOF_AFRH_bit at GPIOF_AFRH.B20;
    sbit  AFSEL131_GPIOF_AFRH_bit at GPIOF_AFRH.B21;
    sbit  AFSEL132_GPIOF_AFRH_bit at GPIOF_AFRH.B22;
    sbit  AFSEL133_GPIOF_AFRH_bit at GPIOF_AFRH.B23;
    sbit  AFSEL120_GPIOF_AFRH_bit at GPIOF_AFRH.B16;
    sbit  AFSEL121_GPIOF_AFRH_bit at GPIOF_AFRH.B17;
    sbit  AFSEL122_GPIOF_AFRH_bit at GPIOF_AFRH.B18;
    sbit  AFSEL123_GPIOF_AFRH_bit at GPIOF_AFRH.B19;
    sbit  AFSEL110_GPIOF_AFRH_bit at GPIOF_AFRH.B12;
    sbit  AFSEL111_GPIOF_AFRH_bit at GPIOF_AFRH.B13;
    sbit  AFSEL112_GPIOF_AFRH_bit at GPIOF_AFRH.B14;
    sbit  AFSEL113_GPIOF_AFRH_bit at GPIOF_AFRH.B15;
    sbit  AFSEL100_GPIOF_AFRH_bit at GPIOF_AFRH.B8;
    sbit  AFSEL101_GPIOF_AFRH_bit at GPIOF_AFRH.B9;
    sbit  AFSEL102_GPIOF_AFRH_bit at GPIOF_AFRH.B10;
    sbit  AFSEL103_GPIOF_AFRH_bit at GPIOF_AFRH.B11;
    sbit  AFSEL90_GPIOF_AFRH_bit at GPIOF_AFRH.B4;
    sbit  AFSEL91_GPIOF_AFRH_bit at GPIOF_AFRH.B5;
    sbit  AFSEL92_GPIOF_AFRH_bit at GPIOF_AFRH.B6;
    sbit  AFSEL93_GPIOF_AFRH_bit at GPIOF_AFRH.B7;
    sbit  AFSEL80_GPIOF_AFRH_bit at GPIOF_AFRH.B0;
    sbit  AFSEL81_GPIOF_AFRH_bit at GPIOF_AFRH.B1;
    sbit  AFSEL82_GPIOF_AFRH_bit at GPIOF_AFRH.B2;
    sbit  AFSEL83_GPIOF_AFRH_bit at GPIOF_AFRH.B3;

sfr far unsigned long   volatile GPIOF_BRR            absolute 0x50001428;
    sbit  BR0_GPIOF_BRR_bit at GPIOF_BRR.B0;
    sbit  BR1_GPIOF_BRR_bit at GPIOF_BRR.B1;
    sbit  BR2_GPIOF_BRR_bit at GPIOF_BRR.B2;
    sbit  BR3_GPIOF_BRR_bit at GPIOF_BRR.B3;
    sbit  BR4_GPIOF_BRR_bit at GPIOF_BRR.B4;
    sbit  BR5_GPIOF_BRR_bit at GPIOF_BRR.B5;
    sbit  BR6_GPIOF_BRR_bit at GPIOF_BRR.B6;
    sbit  BR7_GPIOF_BRR_bit at GPIOF_BRR.B7;
    sbit  BR8_GPIOF_BRR_bit at GPIOF_BRR.B8;
    sbit  BR9_GPIOF_BRR_bit at GPIOF_BRR.B9;
    sbit  BR10_GPIOF_BRR_bit at GPIOF_BRR.B10;
    sbit  BR11_GPIOF_BRR_bit at GPIOF_BRR.B11;
    sbit  BR12_GPIOF_BRR_bit at GPIOF_BRR.B12;
    sbit  BR13_GPIOF_BRR_bit at GPIOF_BRR.B13;
    sbit  BR14_GPIOF_BRR_bit at GPIOF_BRR.B14;
    sbit  BR15_GPIOF_BRR_bit at GPIOF_BRR.B15;

sfr unsigned long   volatile RNG_CR               absolute 0x40025000;
    sbit  RNGEN_RNG_CR_bit at RNG_CR.B2;
    const register unsigned short int IE = 3;
    sbit  IE_bit at RNG_CR.B3;
    const register unsigned short int CED = 5;
    sbit  CED_bit at RNG_CR.B5;
    const register unsigned short int BYP = 6;
    sbit  BYP_bit at RNG_CR.B6;

sfr unsigned long   volatile RNG_SR               absolute 0x40025004;
    const register unsigned short int SEIS = 6;
    sbit  SEIS_bit at RNG_SR.B6;
    const register unsigned short int CEIS = 5;
    sbit  CEIS_bit at RNG_SR.B5;
    const register unsigned short int SECS = 2;
    sbit  SECS_bit at RNG_SR.B2;
    const register unsigned short int CECS = 1;
    sbit  CECS_bit at RNG_SR.B1;
    const register unsigned short int DRDY = 0;
    sbit  DRDY_bit at RNG_SR.B0;

sfr unsigned long   volatile RNG_DR               absolute 0x40025008;
    const register unsigned short int RNDATA0 = 0;
    sbit  RNDATA0_bit at RNG_DR.B0;
    const register unsigned short int RNDATA1 = 1;
    sbit  RNDATA1_bit at RNG_DR.B1;
    const register unsigned short int RNDATA2 = 2;
    sbit  RNDATA2_bit at RNG_DR.B2;
    const register unsigned short int RNDATA3 = 3;
    sbit  RNDATA3_bit at RNG_DR.B3;
    const register unsigned short int RNDATA4 = 4;
    sbit  RNDATA4_bit at RNG_DR.B4;
    const register unsigned short int RNDATA5 = 5;
    sbit  RNDATA5_bit at RNG_DR.B5;
    const register unsigned short int RNDATA6 = 6;
    sbit  RNDATA6_bit at RNG_DR.B6;
    const register unsigned short int RNDATA7 = 7;
    sbit  RNDATA7_bit at RNG_DR.B7;
    const register unsigned short int RNDATA8 = 8;
    sbit  RNDATA8_bit at RNG_DR.B8;
    const register unsigned short int RNDATA9 = 9;
    sbit  RNDATA9_bit at RNG_DR.B9;
    const register unsigned short int RNDATA10 = 10;
    sbit  RNDATA10_bit at RNG_DR.B10;
    const register unsigned short int RNDATA11 = 11;
    sbit  RNDATA11_bit at RNG_DR.B11;
    const register unsigned short int RNDATA12 = 12;
    sbit  RNDATA12_bit at RNG_DR.B12;
    const register unsigned short int RNDATA13 = 13;
    sbit  RNDATA13_bit at RNG_DR.B13;
    const register unsigned short int RNDATA14 = 14;
    sbit  RNDATA14_bit at RNG_DR.B14;
    const register unsigned short int RNDATA15 = 15;
    sbit  RNDATA15_bit at RNG_DR.B15;
    const register unsigned short int RNDATA16 = 16;
    sbit  RNDATA16_bit at RNG_DR.B16;
    const register unsigned short int RNDATA17 = 17;
    sbit  RNDATA17_bit at RNG_DR.B17;
    const register unsigned short int RNDATA18 = 18;
    sbit  RNDATA18_bit at RNG_DR.B18;
    const register unsigned short int RNDATA19 = 19;
    sbit  RNDATA19_bit at RNG_DR.B19;
    const register unsigned short int RNDATA20 = 20;
    sbit  RNDATA20_bit at RNG_DR.B20;
    const register unsigned short int RNDATA21 = 21;
    sbit  RNDATA21_bit at RNG_DR.B21;
    const register unsigned short int RNDATA22 = 22;
    sbit  RNDATA22_bit at RNG_DR.B22;
    const register unsigned short int RNDATA23 = 23;
    sbit  RNDATA23_bit at RNG_DR.B23;
    const register unsigned short int RNDATA24 = 24;
    sbit  RNDATA24_bit at RNG_DR.B24;
    const register unsigned short int RNDATA25 = 25;
    sbit  RNDATA25_bit at RNG_DR.B25;
    const register unsigned short int RNDATA26 = 26;
    sbit  RNDATA26_bit at RNG_DR.B26;
    const register unsigned short int RNDATA27 = 27;
    sbit  RNDATA27_bit at RNG_DR.B27;
    const register unsigned short int RNDATA28 = 28;
    sbit  RNDATA28_bit at RNG_DR.B28;
    const register unsigned short int RNDATA29 = 29;
    sbit  RNDATA29_bit at RNG_DR.B29;
    const register unsigned short int RNDATA30 = 30;
    sbit  RNDATA30_bit at RNG_DR.B30;
    const register unsigned short int RNDATA31 = 31;
    sbit  RNDATA31_bit at RNG_DR.B31;

sfr unsigned long   volatile CRC_DR               absolute 0x40023000;
    const register unsigned short int DR0 = 0;
    sbit  DR0_bit at CRC_DR.B0;
    const register unsigned short int DR1 = 1;
    sbit  DR1_bit at CRC_DR.B1;
    const register unsigned short int DR2 = 2;
    sbit  DR2_bit at CRC_DR.B2;
    const register unsigned short int DR3 = 3;
    sbit  DR3_bit at CRC_DR.B3;
    const register unsigned short int DR4 = 4;
    sbit  DR4_bit at CRC_DR.B4;
    const register unsigned short int DR5 = 5;
    sbit  DR5_bit at CRC_DR.B5;
    const register unsigned short int DR6 = 6;
    sbit  DR6_bit at CRC_DR.B6;
    const register unsigned short int DR7 = 7;
    sbit  DR7_bit at CRC_DR.B7;
    const register unsigned short int DR8 = 8;
    sbit  DR8_bit at CRC_DR.B8;
    const register unsigned short int DR9 = 9;
    sbit  DR9_bit at CRC_DR.B9;
    const register unsigned short int DR10 = 10;
    sbit  DR10_bit at CRC_DR.B10;
    const register unsigned short int DR11 = 11;
    sbit  DR11_bit at CRC_DR.B11;
    const register unsigned short int DR12 = 12;
    sbit  DR12_bit at CRC_DR.B12;
    const register unsigned short int DR13 = 13;
    sbit  DR13_bit at CRC_DR.B13;
    const register unsigned short int DR14 = 14;
    sbit  DR14_bit at CRC_DR.B14;
    const register unsigned short int DR15 = 15;
    sbit  DR15_bit at CRC_DR.B15;
    const register unsigned short int DR16 = 16;
    sbit  DR16_bit at CRC_DR.B16;
    const register unsigned short int DR17 = 17;
    sbit  DR17_bit at CRC_DR.B17;
    const register unsigned short int DR18 = 18;
    sbit  DR18_bit at CRC_DR.B18;
    const register unsigned short int DR19 = 19;
    sbit  DR19_bit at CRC_DR.B19;
    const register unsigned short int DR20 = 20;
    sbit  DR20_bit at CRC_DR.B20;
    const register unsigned short int DR21 = 21;
    sbit  DR21_bit at CRC_DR.B21;
    const register unsigned short int DR22 = 22;
    sbit  DR22_bit at CRC_DR.B22;
    const register unsigned short int DR23 = 23;
    sbit  DR23_bit at CRC_DR.B23;
    const register unsigned short int DR24 = 24;
    sbit  DR24_bit at CRC_DR.B24;
    const register unsigned short int DR25 = 25;
    sbit  DR25_bit at CRC_DR.B25;
    const register unsigned short int DR26 = 26;
    sbit  DR26_bit at CRC_DR.B26;
    const register unsigned short int DR27 = 27;
    sbit  DR27_bit at CRC_DR.B27;
    const register unsigned short int DR28 = 28;
    sbit  DR28_bit at CRC_DR.B28;
    const register unsigned short int DR29 = 29;
    sbit  DR29_bit at CRC_DR.B29;
    const register unsigned short int DR30 = 30;
    sbit  DR30_bit at CRC_DR.B30;
    const register unsigned short int DR31 = 31;
    sbit  DR31_bit at CRC_DR.B31;

sfr unsigned long   volatile CRC_IDR              absolute 0x40023004;
    sbit  IDR0_CRC_IDR_bit at CRC_IDR.B0;
    sbit  IDR1_CRC_IDR_bit at CRC_IDR.B1;
    sbit  IDR2_CRC_IDR_bit at CRC_IDR.B2;
    sbit  IDR3_CRC_IDR_bit at CRC_IDR.B3;
    sbit  IDR4_CRC_IDR_bit at CRC_IDR.B4;
    sbit  IDR5_CRC_IDR_bit at CRC_IDR.B5;
    sbit  IDR6_CRC_IDR_bit at CRC_IDR.B6;
    sbit  IDR7_CRC_IDR_bit at CRC_IDR.B7;
    sbit  IDR8_CRC_IDR_bit at CRC_IDR.B8;
    sbit  IDR9_CRC_IDR_bit at CRC_IDR.B9;
    sbit  IDR10_CRC_IDR_bit at CRC_IDR.B10;
    sbit  IDR11_CRC_IDR_bit at CRC_IDR.B11;
    sbit  IDR12_CRC_IDR_bit at CRC_IDR.B12;
    sbit  IDR13_CRC_IDR_bit at CRC_IDR.B13;
    sbit  IDR14_CRC_IDR_bit at CRC_IDR.B14;
    sbit  IDR15_CRC_IDR_bit at CRC_IDR.B15;
    const register unsigned short int IDR16 = 16;
    sbit  IDR16_bit at CRC_IDR.B16;
    const register unsigned short int IDR17 = 17;
    sbit  IDR17_bit at CRC_IDR.B17;
    const register unsigned short int IDR18 = 18;
    sbit  IDR18_bit at CRC_IDR.B18;
    const register unsigned short int IDR19 = 19;
    sbit  IDR19_bit at CRC_IDR.B19;
    const register unsigned short int IDR20 = 20;
    sbit  IDR20_bit at CRC_IDR.B20;
    const register unsigned short int IDR21 = 21;
    sbit  IDR21_bit at CRC_IDR.B21;
    const register unsigned short int IDR22 = 22;
    sbit  IDR22_bit at CRC_IDR.B22;
    const register unsigned short int IDR23 = 23;
    sbit  IDR23_bit at CRC_IDR.B23;
    const register unsigned short int IDR24 = 24;
    sbit  IDR24_bit at CRC_IDR.B24;
    const register unsigned short int IDR25 = 25;
    sbit  IDR25_bit at CRC_IDR.B25;
    const register unsigned short int IDR26 = 26;
    sbit  IDR26_bit at CRC_IDR.B26;
    const register unsigned short int IDR27 = 27;
    sbit  IDR27_bit at CRC_IDR.B27;
    const register unsigned short int IDR28 = 28;
    sbit  IDR28_bit at CRC_IDR.B28;
    const register unsigned short int IDR29 = 29;
    sbit  IDR29_bit at CRC_IDR.B29;
    const register unsigned short int IDR30 = 30;
    sbit  IDR30_bit at CRC_IDR.B30;
    const register unsigned short int IDR31 = 31;
    sbit  IDR31_bit at CRC_IDR.B31;

sfr unsigned long   volatile CRC_CR               absolute 0x40023008;
    const register unsigned short int REV_OUT = 7;
    sbit  REV_OUT_bit at CRC_CR.B7;
    const register unsigned short int REV_IN0 = 5;
    sbit  REV_IN0_bit at CRC_CR.B5;
    const register unsigned short int REV_IN1 = 6;
    sbit  REV_IN1_bit at CRC_CR.B6;
    const register unsigned short int POLYSIZE0 = 3;
    sbit  POLYSIZE0_bit at CRC_CR.B3;
    const register unsigned short int POLYSIZE1 = 4;
    sbit  POLYSIZE1_bit at CRC_CR.B4;
    const register unsigned short int RESET_ = 0;
    sbit  RESET_bit at CRC_CR.B0;

sfr unsigned long   volatile CRC_INIT             absolute 0x40023010;
    const register unsigned short int CRC_INIT0 = 0;
    sbit  CRC_INIT0_bit at CRC_INIT.B0;
    const register unsigned short int CRC_INIT1 = 1;
    sbit  CRC_INIT1_bit at CRC_INIT.B1;
    const register unsigned short int CRC_INIT2 = 2;
    sbit  CRC_INIT2_bit at CRC_INIT.B2;
    const register unsigned short int CRC_INIT3 = 3;
    sbit  CRC_INIT3_bit at CRC_INIT.B3;
    const register unsigned short int CRC_INIT4 = 4;
    sbit  CRC_INIT4_bit at CRC_INIT.B4;
    const register unsigned short int CRC_INIT5 = 5;
    sbit  CRC_INIT5_bit at CRC_INIT.B5;
    const register unsigned short int CRC_INIT6 = 6;
    sbit  CRC_INIT6_bit at CRC_INIT.B6;
    const register unsigned short int CRC_INIT7 = 7;
    sbit  CRC_INIT7_bit at CRC_INIT.B7;
    const register unsigned short int CRC_INIT8 = 8;
    sbit  CRC_INIT8_bit at CRC_INIT.B8;
    const register unsigned short int CRC_INIT9 = 9;
    sbit  CRC_INIT9_bit at CRC_INIT.B9;
    const register unsigned short int CRC_INIT10 = 10;
    sbit  CRC_INIT10_bit at CRC_INIT.B10;
    const register unsigned short int CRC_INIT11 = 11;
    sbit  CRC_INIT11_bit at CRC_INIT.B11;
    const register unsigned short int CRC_INIT12 = 12;
    sbit  CRC_INIT12_bit at CRC_INIT.B12;
    const register unsigned short int CRC_INIT13 = 13;
    sbit  CRC_INIT13_bit at CRC_INIT.B13;
    const register unsigned short int CRC_INIT14 = 14;
    sbit  CRC_INIT14_bit at CRC_INIT.B14;
    const register unsigned short int CRC_INIT15 = 15;
    sbit  CRC_INIT15_bit at CRC_INIT.B15;
    const register unsigned short int CRC_INIT16 = 16;
    sbit  CRC_INIT16_bit at CRC_INIT.B16;
    const register unsigned short int CRC_INIT17 = 17;
    sbit  CRC_INIT17_bit at CRC_INIT.B17;
    const register unsigned short int CRC_INIT18 = 18;
    sbit  CRC_INIT18_bit at CRC_INIT.B18;
    const register unsigned short int CRC_INIT19 = 19;
    sbit  CRC_INIT19_bit at CRC_INIT.B19;
    const register unsigned short int CRC_INIT20 = 20;
    sbit  CRC_INIT20_bit at CRC_INIT.B20;
    const register unsigned short int CRC_INIT21 = 21;
    sbit  CRC_INIT21_bit at CRC_INIT.B21;
    const register unsigned short int CRC_INIT22 = 22;
    sbit  CRC_INIT22_bit at CRC_INIT.B22;
    const register unsigned short int CRC_INIT23 = 23;
    sbit  CRC_INIT23_bit at CRC_INIT.B23;
    const register unsigned short int CRC_INIT24 = 24;
    sbit  CRC_INIT24_bit at CRC_INIT.B24;
    const register unsigned short int CRC_INIT25 = 25;
    sbit  CRC_INIT25_bit at CRC_INIT.B25;
    const register unsigned short int CRC_INIT26 = 26;
    sbit  CRC_INIT26_bit at CRC_INIT.B26;
    const register unsigned short int CRC_INIT27 = 27;
    sbit  CRC_INIT27_bit at CRC_INIT.B27;
    const register unsigned short int CRC_INIT28 = 28;
    sbit  CRC_INIT28_bit at CRC_INIT.B28;
    const register unsigned short int CRC_INIT29 = 29;
    sbit  CRC_INIT29_bit at CRC_INIT.B29;
    const register unsigned short int CRC_INIT30 = 30;
    sbit  CRC_INIT30_bit at CRC_INIT.B30;
    const register unsigned short int CRC_INIT31 = 31;
    sbit  CRC_INIT31_bit at CRC_INIT.B31;

sfr unsigned long   volatile CRC_POL              absolute 0x40023014;
    const register unsigned short int POL0 = 0;
    sbit  POL0_bit at CRC_POL.B0;
    const register unsigned short int POL1 = 1;
    sbit  POL1_bit at CRC_POL.B1;
    const register unsigned short int POL2 = 2;
    sbit  POL2_bit at CRC_POL.B2;
    const register unsigned short int POL3 = 3;
    sbit  POL3_bit at CRC_POL.B3;
    const register unsigned short int POL4 = 4;
    sbit  POL4_bit at CRC_POL.B4;
    const register unsigned short int POL5 = 5;
    sbit  POL5_bit at CRC_POL.B5;
    const register unsigned short int POL6 = 6;
    sbit  POL6_bit at CRC_POL.B6;
    const register unsigned short int POL7 = 7;
    sbit  POL7_bit at CRC_POL.B7;
    const register unsigned short int POL8 = 8;
    sbit  POL8_bit at CRC_POL.B8;
    const register unsigned short int POL9 = 9;
    sbit  POL9_bit at CRC_POL.B9;
    const register unsigned short int POL10 = 10;
    sbit  POL10_bit at CRC_POL.B10;
    const register unsigned short int POL11 = 11;
    sbit  POL11_bit at CRC_POL.B11;
    const register unsigned short int POL12 = 12;
    sbit  POL12_bit at CRC_POL.B12;
    const register unsigned short int POL13 = 13;
    sbit  POL13_bit at CRC_POL.B13;
    const register unsigned short int POL14 = 14;
    sbit  POL14_bit at CRC_POL.B14;
    const register unsigned short int POL15 = 15;
    sbit  POL15_bit at CRC_POL.B15;
    const register unsigned short int POL16 = 16;
    sbit  POL16_bit at CRC_POL.B16;
    const register unsigned short int POL17 = 17;
    sbit  POL17_bit at CRC_POL.B17;
    const register unsigned short int POL18 = 18;
    sbit  POL18_bit at CRC_POL.B18;
    const register unsigned short int POL19 = 19;
    sbit  POL19_bit at CRC_POL.B19;
    const register unsigned short int POL20 = 20;
    sbit  POL20_bit at CRC_POL.B20;
    const register unsigned short int POL21 = 21;
    sbit  POL21_bit at CRC_POL.B21;
    const register unsigned short int POL22 = 22;
    sbit  POL22_bit at CRC_POL.B22;
    const register unsigned short int POL23 = 23;
    sbit  POL23_bit at CRC_POL.B23;
    const register unsigned short int POL24 = 24;
    sbit  POL24_bit at CRC_POL.B24;
    const register unsigned short int POL25 = 25;
    sbit  POL25_bit at CRC_POL.B25;
    const register unsigned short int POL26 = 26;
    sbit  POL26_bit at CRC_POL.B26;
    const register unsigned short int POL27 = 27;
    sbit  POL27_bit at CRC_POL.B27;
    const register unsigned short int POL28 = 28;
    sbit  POL28_bit at CRC_POL.B28;
    const register unsigned short int POL29 = 29;
    sbit  POL29_bit at CRC_POL.B29;
    const register unsigned short int POL30 = 30;
    sbit  POL30_bit at CRC_POL.B30;
    const register unsigned short int POL31 = 31;
    sbit  POL31_bit at CRC_POL.B31;

sfr unsigned long   volatile EXTI_RTSR1           absolute 0x40021800;
    const register unsigned short int TR0 = 0;
    sbit  TR0_bit at EXTI_RTSR1.B0;
    const register unsigned short int TR1 = 1;
    sbit  TR1_bit at EXTI_RTSR1.B1;
    const register unsigned short int TR2 = 2;
    sbit  TR2_bit at EXTI_RTSR1.B2;
    const register unsigned short int TR3 = 3;
    sbit  TR3_bit at EXTI_RTSR1.B3;
    const register unsigned short int TR4 = 4;
    sbit  TR4_bit at EXTI_RTSR1.B4;
    const register unsigned short int TR5 = 5;
    sbit  TR5_bit at EXTI_RTSR1.B5;
    const register unsigned short int TR6 = 6;
    sbit  TR6_bit at EXTI_RTSR1.B6;
    const register unsigned short int TR7 = 7;
    sbit  TR7_bit at EXTI_RTSR1.B7;
    const register unsigned short int TR8 = 8;
    sbit  TR8_bit at EXTI_RTSR1.B8;
    const register unsigned short int TR9 = 9;
    sbit  TR9_bit at EXTI_RTSR1.B9;
    const register unsigned short int TR10 = 10;
    sbit  TR10_bit at EXTI_RTSR1.B10;
    const register unsigned short int TR11 = 11;
    sbit  TR11_bit at EXTI_RTSR1.B11;
    const register unsigned short int TR12 = 12;
    sbit  TR12_bit at EXTI_RTSR1.B12;
    const register unsigned short int TR13 = 13;
    sbit  TR13_bit at EXTI_RTSR1.B13;
    const register unsigned short int TR14 = 14;
    sbit  TR14_bit at EXTI_RTSR1.B14;
    const register unsigned short int TR15 = 15;
    sbit  TR15_bit at EXTI_RTSR1.B15;
    const register unsigned short int TR16 = 16;
    sbit  TR16_bit at EXTI_RTSR1.B16;

sfr unsigned long   volatile EXTI_FTSR1           absolute 0x40021804;
    sbit  TR0_EXTI_FTSR1_bit at EXTI_FTSR1.B0;
    sbit  TR1_EXTI_FTSR1_bit at EXTI_FTSR1.B1;
    sbit  TR2_EXTI_FTSR1_bit at EXTI_FTSR1.B2;
    sbit  TR3_EXTI_FTSR1_bit at EXTI_FTSR1.B3;
    sbit  TR4_EXTI_FTSR1_bit at EXTI_FTSR1.B4;
    sbit  TR5_EXTI_FTSR1_bit at EXTI_FTSR1.B5;
    sbit  TR6_EXTI_FTSR1_bit at EXTI_FTSR1.B6;
    sbit  TR7_EXTI_FTSR1_bit at EXTI_FTSR1.B7;
    sbit  TR8_EXTI_FTSR1_bit at EXTI_FTSR1.B8;
    sbit  TR9_EXTI_FTSR1_bit at EXTI_FTSR1.B9;
    sbit  TR10_EXTI_FTSR1_bit at EXTI_FTSR1.B10;
    sbit  TR11_EXTI_FTSR1_bit at EXTI_FTSR1.B11;
    sbit  TR12_EXTI_FTSR1_bit at EXTI_FTSR1.B12;
    sbit  TR13_EXTI_FTSR1_bit at EXTI_FTSR1.B13;
    sbit  TR14_EXTI_FTSR1_bit at EXTI_FTSR1.B14;
    sbit  TR15_EXTI_FTSR1_bit at EXTI_FTSR1.B15;
    sbit  TR16_EXTI_FTSR1_bit at EXTI_FTSR1.B16;

sfr unsigned long   volatile EXTI_SWIER1          absolute 0x40021808;
    const register unsigned short int SWIER0 = 0;
    sbit  SWIER0_bit at EXTI_SWIER1.B0;
    const register unsigned short int SWIER1 = 1;
    sbit  SWIER1_bit at EXTI_SWIER1.B1;
    const register unsigned short int SWIER2 = 2;
    sbit  SWIER2_bit at EXTI_SWIER1.B2;
    const register unsigned short int SWIER3 = 3;
    sbit  SWIER3_bit at EXTI_SWIER1.B3;
    const register unsigned short int SWIER4 = 4;
    sbit  SWIER4_bit at EXTI_SWIER1.B4;
    const register unsigned short int SWIER5 = 5;
    sbit  SWIER5_bit at EXTI_SWIER1.B5;
    const register unsigned short int SWIER6 = 6;
    sbit  SWIER6_bit at EXTI_SWIER1.B6;
    const register unsigned short int SWIER7 = 7;
    sbit  SWIER7_bit at EXTI_SWIER1.B7;
    const register unsigned short int SWIER8 = 8;
    sbit  SWIER8_bit at EXTI_SWIER1.B8;
    const register unsigned short int SWIER9 = 9;
    sbit  SWIER9_bit at EXTI_SWIER1.B9;
    const register unsigned short int SWIER10 = 10;
    sbit  SWIER10_bit at EXTI_SWIER1.B10;
    const register unsigned short int SWIER11 = 11;
    sbit  SWIER11_bit at EXTI_SWIER1.B11;
    const register unsigned short int SWIER12 = 12;
    sbit  SWIER12_bit at EXTI_SWIER1.B12;
    const register unsigned short int SWIER13 = 13;
    sbit  SWIER13_bit at EXTI_SWIER1.B13;
    const register unsigned short int SWIER14 = 14;
    sbit  SWIER14_bit at EXTI_SWIER1.B14;
    const register unsigned short int SWIER15 = 15;
    sbit  SWIER15_bit at EXTI_SWIER1.B15;
    const register unsigned short int SWIER16 = 16;
    sbit  SWIER16_bit at EXTI_SWIER1.B16;

sfr unsigned long   volatile EXTI_RPR1            absolute 0x4002180C;
    const register unsigned short int RPIF0 = 0;
    sbit  RPIF0_bit at EXTI_RPR1.B0;
    const register unsigned short int RPIF1 = 1;
    sbit  RPIF1_bit at EXTI_RPR1.B1;
    const register unsigned short int RPIF2 = 2;
    sbit  RPIF2_bit at EXTI_RPR1.B2;
    const register unsigned short int RPIF3 = 3;
    sbit  RPIF3_bit at EXTI_RPR1.B3;
    const register unsigned short int RPIF4 = 4;
    sbit  RPIF4_bit at EXTI_RPR1.B4;
    const register unsigned short int RPIF5 = 5;
    sbit  RPIF5_bit at EXTI_RPR1.B5;
    const register unsigned short int RPIF6 = 6;
    sbit  RPIF6_bit at EXTI_RPR1.B6;
    const register unsigned short int RPIF7 = 7;
    sbit  RPIF7_bit at EXTI_RPR1.B7;
    const register unsigned short int RPIF8 = 8;
    sbit  RPIF8_bit at EXTI_RPR1.B8;
    const register unsigned short int RPIF9 = 9;
    sbit  RPIF9_bit at EXTI_RPR1.B9;
    const register unsigned short int RPIF10 = 10;
    sbit  RPIF10_bit at EXTI_RPR1.B10;
    const register unsigned short int RPIF11 = 11;
    sbit  RPIF11_bit at EXTI_RPR1.B11;
    const register unsigned short int RPIF12 = 12;
    sbit  RPIF12_bit at EXTI_RPR1.B12;
    const register unsigned short int RPIF13 = 13;
    sbit  RPIF13_bit at EXTI_RPR1.B13;
    const register unsigned short int RPIF14 = 14;
    sbit  RPIF14_bit at EXTI_RPR1.B14;
    const register unsigned short int RPIF15 = 15;
    sbit  RPIF15_bit at EXTI_RPR1.B15;
    const register unsigned short int RPIF16 = 16;
    sbit  RPIF16_bit at EXTI_RPR1.B16;

sfr unsigned long   volatile EXTI_FPR1            absolute 0x40021810;
    const register unsigned short int FPIF0 = 0;
    sbit  FPIF0_bit at EXTI_FPR1.B0;
    const register unsigned short int FPIF1 = 1;
    sbit  FPIF1_bit at EXTI_FPR1.B1;
    const register unsigned short int FPIF2 = 2;
    sbit  FPIF2_bit at EXTI_FPR1.B2;
    const register unsigned short int FPIF3 = 3;
    sbit  FPIF3_bit at EXTI_FPR1.B3;
    const register unsigned short int FPIF4 = 4;
    sbit  FPIF4_bit at EXTI_FPR1.B4;
    const register unsigned short int FPIF5 = 5;
    sbit  FPIF5_bit at EXTI_FPR1.B5;
    const register unsigned short int FPIF6 = 6;
    sbit  FPIF6_bit at EXTI_FPR1.B6;
    const register unsigned short int FPIF7 = 7;
    sbit  FPIF7_bit at EXTI_FPR1.B7;
    const register unsigned short int FPIF8 = 8;
    sbit  FPIF8_bit at EXTI_FPR1.B8;
    const register unsigned short int FPIF9 = 9;
    sbit  FPIF9_bit at EXTI_FPR1.B9;
    const register unsigned short int FPIF10 = 10;
    sbit  FPIF10_bit at EXTI_FPR1.B10;
    const register unsigned short int FPIF11 = 11;
    sbit  FPIF11_bit at EXTI_FPR1.B11;
    const register unsigned short int FPIF12 = 12;
    sbit  FPIF12_bit at EXTI_FPR1.B12;
    const register unsigned short int FPIF13 = 13;
    sbit  FPIF13_bit at EXTI_FPR1.B13;
    const register unsigned short int FPIF14 = 14;
    sbit  FPIF14_bit at EXTI_FPR1.B14;
    const register unsigned short int FPIF15 = 15;
    sbit  FPIF15_bit at EXTI_FPR1.B15;
    const register unsigned short int FPIF16 = 16;
    sbit  FPIF16_bit at EXTI_FPR1.B16;

sfr unsigned long   volatile EXTI_EXTICR1         absolute 0x40021860;
    const register unsigned short int EXTI0_70 = 0;
    sbit  EXTI0_70_bit at EXTI_EXTICR1.B0;
    const register unsigned short int EXTI0_71 = 1;
    sbit  EXTI0_71_bit at EXTI_EXTICR1.B1;
    const register unsigned short int EXTI0_72 = 2;
    sbit  EXTI0_72_bit at EXTI_EXTICR1.B2;
    const register unsigned short int EXTI0_73 = 3;
    sbit  EXTI0_73_bit at EXTI_EXTICR1.B3;
    const register unsigned short int EXTI0_74 = 4;
    sbit  EXTI0_74_bit at EXTI_EXTICR1.B4;
    const register unsigned short int EXTI0_75 = 5;
    sbit  EXTI0_75_bit at EXTI_EXTICR1.B5;
    const register unsigned short int EXTI0_76 = 6;
    sbit  EXTI0_76_bit at EXTI_EXTICR1.B6;
    const register unsigned short int EXTI0_77 = 7;
    sbit  EXTI0_77_bit at EXTI_EXTICR1.B7;
    const register unsigned short int EXTI8_150 = 8;
    sbit  EXTI8_150_bit at EXTI_EXTICR1.B8;
    const register unsigned short int EXTI8_151 = 9;
    sbit  EXTI8_151_bit at EXTI_EXTICR1.B9;
    const register unsigned short int EXTI8_152 = 10;
    sbit  EXTI8_152_bit at EXTI_EXTICR1.B10;
    const register unsigned short int EXTI8_153 = 11;
    sbit  EXTI8_153_bit at EXTI_EXTICR1.B11;
    const register unsigned short int EXTI8_154 = 12;
    sbit  EXTI8_154_bit at EXTI_EXTICR1.B12;
    const register unsigned short int EXTI8_155 = 13;
    sbit  EXTI8_155_bit at EXTI_EXTICR1.B13;
    const register unsigned short int EXTI8_156 = 14;
    sbit  EXTI8_156_bit at EXTI_EXTICR1.B14;
    const register unsigned short int EXTI8_157 = 15;
    sbit  EXTI8_157_bit at EXTI_EXTICR1.B15;
    const register unsigned short int EXTI16_230 = 16;
    sbit  EXTI16_230_bit at EXTI_EXTICR1.B16;
    const register unsigned short int EXTI16_231 = 17;
    sbit  EXTI16_231_bit at EXTI_EXTICR1.B17;
    const register unsigned short int EXTI16_232 = 18;
    sbit  EXTI16_232_bit at EXTI_EXTICR1.B18;
    const register unsigned short int EXTI16_233 = 19;
    sbit  EXTI16_233_bit at EXTI_EXTICR1.B19;
    const register unsigned short int EXTI16_234 = 20;
    sbit  EXTI16_234_bit at EXTI_EXTICR1.B20;
    const register unsigned short int EXTI16_235 = 21;
    sbit  EXTI16_235_bit at EXTI_EXTICR1.B21;
    const register unsigned short int EXTI16_236 = 22;
    sbit  EXTI16_236_bit at EXTI_EXTICR1.B22;
    const register unsigned short int EXTI16_237 = 23;
    sbit  EXTI16_237_bit at EXTI_EXTICR1.B23;
    const register unsigned short int EXTI24_310 = 24;
    sbit  EXTI24_310_bit at EXTI_EXTICR1.B24;
    const register unsigned short int EXTI24_311 = 25;
    sbit  EXTI24_311_bit at EXTI_EXTICR1.B25;
    const register unsigned short int EXTI24_312 = 26;
    sbit  EXTI24_312_bit at EXTI_EXTICR1.B26;
    const register unsigned short int EXTI24_313 = 27;
    sbit  EXTI24_313_bit at EXTI_EXTICR1.B27;
    const register unsigned short int EXTI24_314 = 28;
    sbit  EXTI24_314_bit at EXTI_EXTICR1.B28;
    const register unsigned short int EXTI24_315 = 29;
    sbit  EXTI24_315_bit at EXTI_EXTICR1.B29;
    const register unsigned short int EXTI24_316 = 30;
    sbit  EXTI24_316_bit at EXTI_EXTICR1.B30;
    const register unsigned short int EXTI24_317 = 31;
    sbit  EXTI24_317_bit at EXTI_EXTICR1.B31;

sfr unsigned long   volatile EXTI_EXTICR2         absolute 0x40021864;
    sbit  EXTI0_70_EXTI_EXTICR2_bit at EXTI_EXTICR2.B0;
    sbit  EXTI0_71_EXTI_EXTICR2_bit at EXTI_EXTICR2.B1;
    sbit  EXTI0_72_EXTI_EXTICR2_bit at EXTI_EXTICR2.B2;
    sbit  EXTI0_73_EXTI_EXTICR2_bit at EXTI_EXTICR2.B3;
    sbit  EXTI0_74_EXTI_EXTICR2_bit at EXTI_EXTICR2.B4;
    sbit  EXTI0_75_EXTI_EXTICR2_bit at EXTI_EXTICR2.B5;
    sbit  EXTI0_76_EXTI_EXTICR2_bit at EXTI_EXTICR2.B6;
    sbit  EXTI0_77_EXTI_EXTICR2_bit at EXTI_EXTICR2.B7;
    sbit  EXTI8_150_EXTI_EXTICR2_bit at EXTI_EXTICR2.B8;
    sbit  EXTI8_151_EXTI_EXTICR2_bit at EXTI_EXTICR2.B9;
    sbit  EXTI8_152_EXTI_EXTICR2_bit at EXTI_EXTICR2.B10;
    sbit  EXTI8_153_EXTI_EXTICR2_bit at EXTI_EXTICR2.B11;
    sbit  EXTI8_154_EXTI_EXTICR2_bit at EXTI_EXTICR2.B12;
    sbit  EXTI8_155_EXTI_EXTICR2_bit at EXTI_EXTICR2.B13;
    sbit  EXTI8_156_EXTI_EXTICR2_bit at EXTI_EXTICR2.B14;
    sbit  EXTI8_157_EXTI_EXTICR2_bit at EXTI_EXTICR2.B15;
    sbit  EXTI16_230_EXTI_EXTICR2_bit at EXTI_EXTICR2.B16;
    sbit  EXTI16_231_EXTI_EXTICR2_bit at EXTI_EXTICR2.B17;
    sbit  EXTI16_232_EXTI_EXTICR2_bit at EXTI_EXTICR2.B18;
    sbit  EXTI16_233_EXTI_EXTICR2_bit at EXTI_EXTICR2.B19;
    sbit  EXTI16_234_EXTI_EXTICR2_bit at EXTI_EXTICR2.B20;
    sbit  EXTI16_235_EXTI_EXTICR2_bit at EXTI_EXTICR2.B21;
    sbit  EXTI16_236_EXTI_EXTICR2_bit at EXTI_EXTICR2.B22;
    sbit  EXTI16_237_EXTI_EXTICR2_bit at EXTI_EXTICR2.B23;
    sbit  EXTI24_310_EXTI_EXTICR2_bit at EXTI_EXTICR2.B24;
    sbit  EXTI24_311_EXTI_EXTICR2_bit at EXTI_EXTICR2.B25;
    sbit  EXTI24_312_EXTI_EXTICR2_bit at EXTI_EXTICR2.B26;
    sbit  EXTI24_313_EXTI_EXTICR2_bit at EXTI_EXTICR2.B27;
    sbit  EXTI24_314_EXTI_EXTICR2_bit at EXTI_EXTICR2.B28;
    sbit  EXTI24_315_EXTI_EXTICR2_bit at EXTI_EXTICR2.B29;
    sbit  EXTI24_316_EXTI_EXTICR2_bit at EXTI_EXTICR2.B30;
    sbit  EXTI24_317_EXTI_EXTICR2_bit at EXTI_EXTICR2.B31;

sfr unsigned long   volatile EXTI_EXTICR3         absolute 0x40021868;
    sbit  EXTI0_70_EXTI_EXTICR3_bit at EXTI_EXTICR3.B0;
    sbit  EXTI0_71_EXTI_EXTICR3_bit at EXTI_EXTICR3.B1;
    sbit  EXTI0_72_EXTI_EXTICR3_bit at EXTI_EXTICR3.B2;
    sbit  EXTI0_73_EXTI_EXTICR3_bit at EXTI_EXTICR3.B3;
    sbit  EXTI0_74_EXTI_EXTICR3_bit at EXTI_EXTICR3.B4;
    sbit  EXTI0_75_EXTI_EXTICR3_bit at EXTI_EXTICR3.B5;
    sbit  EXTI0_76_EXTI_EXTICR3_bit at EXTI_EXTICR3.B6;
    sbit  EXTI0_77_EXTI_EXTICR3_bit at EXTI_EXTICR3.B7;
    sbit  EXTI8_150_EXTI_EXTICR3_bit at EXTI_EXTICR3.B8;
    sbit  EXTI8_151_EXTI_EXTICR3_bit at EXTI_EXTICR3.B9;
    sbit  EXTI8_152_EXTI_EXTICR3_bit at EXTI_EXTICR3.B10;
    sbit  EXTI8_153_EXTI_EXTICR3_bit at EXTI_EXTICR3.B11;
    sbit  EXTI8_154_EXTI_EXTICR3_bit at EXTI_EXTICR3.B12;
    sbit  EXTI8_155_EXTI_EXTICR3_bit at EXTI_EXTICR3.B13;
    sbit  EXTI8_156_EXTI_EXTICR3_bit at EXTI_EXTICR3.B14;
    sbit  EXTI8_157_EXTI_EXTICR3_bit at EXTI_EXTICR3.B15;
    sbit  EXTI16_230_EXTI_EXTICR3_bit at EXTI_EXTICR3.B16;
    sbit  EXTI16_231_EXTI_EXTICR3_bit at EXTI_EXTICR3.B17;
    sbit  EXTI16_232_EXTI_EXTICR3_bit at EXTI_EXTICR3.B18;
    sbit  EXTI16_233_EXTI_EXTICR3_bit at EXTI_EXTICR3.B19;
    sbit  EXTI16_234_EXTI_EXTICR3_bit at EXTI_EXTICR3.B20;
    sbit  EXTI16_235_EXTI_EXTICR3_bit at EXTI_EXTICR3.B21;
    sbit  EXTI16_236_EXTI_EXTICR3_bit at EXTI_EXTICR3.B22;
    sbit  EXTI16_237_EXTI_EXTICR3_bit at EXTI_EXTICR3.B23;
    sbit  EXTI24_310_EXTI_EXTICR3_bit at EXTI_EXTICR3.B24;
    sbit  EXTI24_311_EXTI_EXTICR3_bit at EXTI_EXTICR3.B25;
    sbit  EXTI24_312_EXTI_EXTICR3_bit at EXTI_EXTICR3.B26;
    sbit  EXTI24_313_EXTI_EXTICR3_bit at EXTI_EXTICR3.B27;
    sbit  EXTI24_314_EXTI_EXTICR3_bit at EXTI_EXTICR3.B28;
    sbit  EXTI24_315_EXTI_EXTICR3_bit at EXTI_EXTICR3.B29;
    sbit  EXTI24_316_EXTI_EXTICR3_bit at EXTI_EXTICR3.B30;
    sbit  EXTI24_317_EXTI_EXTICR3_bit at EXTI_EXTICR3.B31;

sfr unsigned long   volatile EXTI_EXTICR4         absolute 0x4002186C;
    sbit  EXTI0_70_EXTI_EXTICR4_bit at EXTI_EXTICR4.B0;
    sbit  EXTI0_71_EXTI_EXTICR4_bit at EXTI_EXTICR4.B1;
    sbit  EXTI0_72_EXTI_EXTICR4_bit at EXTI_EXTICR4.B2;
    sbit  EXTI0_73_EXTI_EXTICR4_bit at EXTI_EXTICR4.B3;
    sbit  EXTI0_74_EXTI_EXTICR4_bit at EXTI_EXTICR4.B4;
    sbit  EXTI0_75_EXTI_EXTICR4_bit at EXTI_EXTICR4.B5;
    sbit  EXTI0_76_EXTI_EXTICR4_bit at EXTI_EXTICR4.B6;
    sbit  EXTI0_77_EXTI_EXTICR4_bit at EXTI_EXTICR4.B7;
    sbit  EXTI8_150_EXTI_EXTICR4_bit at EXTI_EXTICR4.B8;
    sbit  EXTI8_151_EXTI_EXTICR4_bit at EXTI_EXTICR4.B9;
    sbit  EXTI8_152_EXTI_EXTICR4_bit at EXTI_EXTICR4.B10;
    sbit  EXTI8_153_EXTI_EXTICR4_bit at EXTI_EXTICR4.B11;
    sbit  EXTI8_154_EXTI_EXTICR4_bit at EXTI_EXTICR4.B12;
    sbit  EXTI8_155_EXTI_EXTICR4_bit at EXTI_EXTICR4.B13;
    sbit  EXTI8_156_EXTI_EXTICR4_bit at EXTI_EXTICR4.B14;
    sbit  EXTI8_157_EXTI_EXTICR4_bit at EXTI_EXTICR4.B15;
    sbit  EXTI16_230_EXTI_EXTICR4_bit at EXTI_EXTICR4.B16;
    sbit  EXTI16_231_EXTI_EXTICR4_bit at EXTI_EXTICR4.B17;
    sbit  EXTI16_232_EXTI_EXTICR4_bit at EXTI_EXTICR4.B18;
    sbit  EXTI16_233_EXTI_EXTICR4_bit at EXTI_EXTICR4.B19;
    sbit  EXTI16_234_EXTI_EXTICR4_bit at EXTI_EXTICR4.B20;
    sbit  EXTI16_235_EXTI_EXTICR4_bit at EXTI_EXTICR4.B21;
    sbit  EXTI16_236_EXTI_EXTICR4_bit at EXTI_EXTICR4.B22;
    sbit  EXTI16_237_EXTI_EXTICR4_bit at EXTI_EXTICR4.B23;
    sbit  EXTI24_310_EXTI_EXTICR4_bit at EXTI_EXTICR4.B24;
    sbit  EXTI24_311_EXTI_EXTICR4_bit at EXTI_EXTICR4.B25;
    sbit  EXTI24_312_EXTI_EXTICR4_bit at EXTI_EXTICR4.B26;
    sbit  EXTI24_313_EXTI_EXTICR4_bit at EXTI_EXTICR4.B27;
    sbit  EXTI24_314_EXTI_EXTICR4_bit at EXTI_EXTICR4.B28;
    sbit  EXTI24_315_EXTI_EXTICR4_bit at EXTI_EXTICR4.B29;
    sbit  EXTI24_316_EXTI_EXTICR4_bit at EXTI_EXTICR4.B30;
    sbit  EXTI24_317_EXTI_EXTICR4_bit at EXTI_EXTICR4.B31;

sfr unsigned long   volatile EXTI_IMR1            absolute 0x40021880;
    const register unsigned short int IM0 = 0;
    sbit  IM0_bit at EXTI_IMR1.B0;
    const register unsigned short int IM1 = 1;
    sbit  IM1_bit at EXTI_IMR1.B1;
    const register unsigned short int IM2 = 2;
    sbit  IM2_bit at EXTI_IMR1.B2;
    const register unsigned short int IM3 = 3;
    sbit  IM3_bit at EXTI_IMR1.B3;
    const register unsigned short int IM4 = 4;
    sbit  IM4_bit at EXTI_IMR1.B4;
    const register unsigned short int IM5 = 5;
    sbit  IM5_bit at EXTI_IMR1.B5;
    const register unsigned short int IM6 = 6;
    sbit  IM6_bit at EXTI_IMR1.B6;
    const register unsigned short int IM7 = 7;
    sbit  IM7_bit at EXTI_IMR1.B7;
    const register unsigned short int IM8 = 8;
    sbit  IM8_bit at EXTI_IMR1.B8;
    const register unsigned short int IM9 = 9;
    sbit  IM9_bit at EXTI_IMR1.B9;
    const register unsigned short int IM10 = 10;
    sbit  IM10_bit at EXTI_IMR1.B10;
    const register unsigned short int IM11 = 11;
    sbit  IM11_bit at EXTI_IMR1.B11;
    const register unsigned short int IM12 = 12;
    sbit  IM12_bit at EXTI_IMR1.B12;
    const register unsigned short int IM13 = 13;
    sbit  IM13_bit at EXTI_IMR1.B13;
    const register unsigned short int IM14 = 14;
    sbit  IM14_bit at EXTI_IMR1.B14;
    const register unsigned short int IM15 = 15;
    sbit  IM15_bit at EXTI_IMR1.B15;
    const register unsigned short int IM16 = 16;
    sbit  IM16_bit at EXTI_IMR1.B16;
    const register unsigned short int IM19 = 19;
    sbit  IM19_bit at EXTI_IMR1.B19;
    const register unsigned short int IM20 = 20;
    sbit  IM20_bit at EXTI_IMR1.B20;
    const register unsigned short int IM21 = 21;
    sbit  IM21_bit at EXTI_IMR1.B21;
    const register unsigned short int IM22 = 22;
    sbit  IM22_bit at EXTI_IMR1.B22;
    const register unsigned short int IM23 = 23;
    sbit  IM23_bit at EXTI_IMR1.B23;
    const register unsigned short int IM24 = 24;
    sbit  IM24_bit at EXTI_IMR1.B24;
    const register unsigned short int IM25 = 25;
    sbit  IM25_bit at EXTI_IMR1.B25;
    const register unsigned short int IM26 = 26;
    sbit  IM26_bit at EXTI_IMR1.B26;
    const register unsigned short int IM28 = 28;
    sbit  IM28_bit at EXTI_IMR1.B28;
    const register unsigned short int IM29 = 29;
    sbit  IM29_bit at EXTI_IMR1.B29;
    const register unsigned short int IM30 = 30;
    sbit  IM30_bit at EXTI_IMR1.B30;
    const register unsigned short int IM31 = 31;
    sbit  IM31_bit at EXTI_IMR1.B31;

sfr unsigned long   volatile EXTI_EMR1            absolute 0x40021884;
    const register unsigned short int EM0 = 0;
    sbit  EM0_bit at EXTI_EMR1.B0;
    const register unsigned short int EM1 = 1;
    sbit  EM1_bit at EXTI_EMR1.B1;
    const register unsigned short int EM2 = 2;
    sbit  EM2_bit at EXTI_EMR1.B2;
    const register unsigned short int EM3 = 3;
    sbit  EM3_bit at EXTI_EMR1.B3;
    const register unsigned short int EM4 = 4;
    sbit  EM4_bit at EXTI_EMR1.B4;
    const register unsigned short int EM5 = 5;
    sbit  EM5_bit at EXTI_EMR1.B5;
    const register unsigned short int EM6 = 6;
    sbit  EM6_bit at EXTI_EMR1.B6;
    const register unsigned short int EM7 = 7;
    sbit  EM7_bit at EXTI_EMR1.B7;
    const register unsigned short int EM8 = 8;
    sbit  EM8_bit at EXTI_EMR1.B8;
    const register unsigned short int EM9 = 9;
    sbit  EM9_bit at EXTI_EMR1.B9;
    const register unsigned short int EM10 = 10;
    sbit  EM10_bit at EXTI_EMR1.B10;
    const register unsigned short int EM11 = 11;
    sbit  EM11_bit at EXTI_EMR1.B11;
    const register unsigned short int EM12 = 12;
    sbit  EM12_bit at EXTI_EMR1.B12;
    const register unsigned short int EM13 = 13;
    sbit  EM13_bit at EXTI_EMR1.B13;
    const register unsigned short int EM14 = 14;
    sbit  EM14_bit at EXTI_EMR1.B14;
    const register unsigned short int EM15 = 15;
    sbit  EM15_bit at EXTI_EMR1.B15;
    const register unsigned short int EM16 = 16;
    sbit  EM16_bit at EXTI_EMR1.B16;
    const register unsigned short int EM19 = 19;
    sbit  EM19_bit at EXTI_EMR1.B19;
    const register unsigned short int EM21 = 21;
    sbit  EM21_bit at EXTI_EMR1.B21;
    const register unsigned short int EM23 = 23;
    sbit  EM23_bit at EXTI_EMR1.B23;
    const register unsigned short int EM25 = 25;
    sbit  EM25_bit at EXTI_EMR1.B25;
    const register unsigned short int EM26 = 26;
    sbit  EM26_bit at EXTI_EMR1.B26;
    const register unsigned short int EM28 = 28;
    sbit  EM28_bit at EXTI_EMR1.B28;
    const register unsigned short int EM29 = 29;
    sbit  EM29_bit at EXTI_EMR1.B29;
    const register unsigned short int EM30 = 30;
    sbit  EM30_bit at EXTI_EMR1.B30;
    const register unsigned short int EM31 = 31;
    sbit  EM31_bit at EXTI_EMR1.B31;

sfr unsigned long   volatile TIM16_CR1            absolute 0x40014400;
    const register unsigned short int CEN = 0;
    sbit  CEN_bit at TIM16_CR1.B0;
    const register unsigned short int UDIS = 1;
    sbit  UDIS_bit at TIM16_CR1.B1;
    const register unsigned short int URS = 2;
    sbit  URS_bit at TIM16_CR1.B2;
    const register unsigned short int OPM = 3;
    sbit  OPM_bit at TIM16_CR1.B3;
    const register unsigned short int ARPE = 7;
    sbit  ARPE_bit at TIM16_CR1.B7;
    const register unsigned short int CKD0 = 8;
    sbit  CKD0_bit at TIM16_CR1.B8;
    const register unsigned short int CKD1 = 9;
    sbit  CKD1_bit at TIM16_CR1.B9;
    const register unsigned short int UIFREMAP = 11;
    sbit  UIFREMAP_bit at TIM16_CR1.B11;

sfr unsigned long   volatile TIM16_CR2            absolute 0x40014404;
    const register unsigned short int OIS1N = 9;
    sbit  OIS1N_bit at TIM16_CR2.B9;
    const register unsigned short int OIS1 = 8;
    sbit  OIS1_bit at TIM16_CR2.B8;
    const register unsigned short int CCDS = 3;
    sbit  CCDS_bit at TIM16_CR2.B3;
    const register unsigned short int CCUS = 2;
    sbit  CCUS_bit at TIM16_CR2.B2;
    const register unsigned short int CCPC = 0;
    sbit  CCPC_bit at TIM16_CR2.B0;

sfr unsigned long   volatile TIM16_DIER           absolute 0x4001440C;
    const register unsigned short int COMDE = 13;
    sbit  COMDE_bit at TIM16_DIER.B13;
    const register unsigned short int CC1DE = 9;
    sbit  CC1DE_bit at TIM16_DIER.B9;
    const register unsigned short int UDE = 8;
    sbit  UDE_bit at TIM16_DIER.B8;
    const register unsigned short int BIE = 7;
    sbit  BIE_bit at TIM16_DIER.B7;
    const register unsigned short int COMIE = 5;
    sbit  COMIE_bit at TIM16_DIER.B5;
    const register unsigned short int CC1IE = 1;
    sbit  CC1IE_bit at TIM16_DIER.B1;
    const register unsigned short int UIE = 0;
    sbit  UIE_bit at TIM16_DIER.B0;

sfr unsigned long   volatile TIM16_SR             absolute 0x40014410;
    const register unsigned short int CC1OF = 9;
    sbit  CC1OF_bit at TIM16_SR.B9;
    const register unsigned short int BIF = 7;
    sbit  BIF_bit at TIM16_SR.B7;
    const register unsigned short int COMIF = 5;
    sbit  COMIF_bit at TIM16_SR.B5;
    const register unsigned short int CC1IF = 1;
    sbit  CC1IF_bit at TIM16_SR.B1;
    const register unsigned short int UIF = 0;
    sbit  UIF_bit at TIM16_SR.B0;

sfr unsigned long   volatile TIM16_EGR            absolute 0x40014414;
    const register unsigned short int BG = 7;
    sbit  BG_bit at TIM16_EGR.B7;
    const register unsigned short int COMG = 5;
    sbit  COMG_bit at TIM16_EGR.B5;
    const register unsigned short int CC1G = 1;
    sbit  CC1G_bit at TIM16_EGR.B1;
    const register unsigned short int UG = 0;
    sbit  UG_bit at TIM16_EGR.B0;

sfr unsigned long   volatile TIM16_CCMR1_Output   absolute 0x40014418;
    const register unsigned short int OC1M_2 = 16;
    sbit  OC1M_2_bit at TIM16_CCMR1_Output.B16;
    const register unsigned short int OC1M0 = 4;
    sbit  OC1M0_bit at TIM16_CCMR1_Output.B4;
    const register unsigned short int OC1M1 = 5;
    sbit  OC1M1_bit at TIM16_CCMR1_Output.B5;
    const register unsigned short int OC1M2 = 6;
    sbit  OC1M2_bit at TIM16_CCMR1_Output.B6;
    const register unsigned short int OC1PE = 3;
    sbit  OC1PE_bit at TIM16_CCMR1_Output.B3;
    const register unsigned short int OC1FE = 2;
    sbit  OC1FE_bit at TIM16_CCMR1_Output.B2;
    const register unsigned short int CC1S0 = 0;
    sbit  CC1S0_bit at TIM16_CCMR1_Output.B0;
    const register unsigned short int CC1S1 = 1;
    sbit  CC1S1_bit at TIM16_CCMR1_Output.B1;

sfr unsigned long   volatile TIM16_CCMR1_Input    absolute 0x40014418;
    const register unsigned short int IC1F0 = 4;
    sbit  IC1F0_bit at TIM16_CCMR1_Input.B4;
    const register unsigned short int IC1F1 = 5;
    sbit  IC1F1_bit at TIM16_CCMR1_Input.B5;
    const register unsigned short int IC1F2 = 6;
    sbit  IC1F2_bit at TIM16_CCMR1_Input.B6;
    const register unsigned short int IC1F3 = 7;
    sbit  IC1F3_bit at TIM16_CCMR1_Input.B7;
    const register unsigned short int IC1PSC0 = 2;
    sbit  IC1PSC0_bit at TIM16_CCMR1_Input.B2;
    const register unsigned short int IC1PSC1 = 3;
    sbit  IC1PSC1_bit at TIM16_CCMR1_Input.B3;
    sbit  CC1S0_TIM16_CCMR1_Input_bit at TIM16_CCMR1_Input.B0;
    sbit  CC1S1_TIM16_CCMR1_Input_bit at TIM16_CCMR1_Input.B1;

sfr unsigned long   volatile TIM16_CCER           absolute 0x40014420;
    const register unsigned short int CC1NP = 3;
    sbit  CC1NP_bit at TIM16_CCER.B3;
    const register unsigned short int CC1NE = 2;
    sbit  CC1NE_bit at TIM16_CCER.B2;
    const register unsigned short int CC1P = 1;
    sbit  CC1P_bit at TIM16_CCER.B1;
    const register unsigned short int CC1E = 0;
    sbit  CC1E_bit at TIM16_CCER.B0;

sfr unsigned long   volatile TIM16_CNT            absolute 0x40014424;
    const register unsigned short int CNT0 = 0;
    sbit  CNT0_bit at TIM16_CNT.B0;
    const register unsigned short int CNT1 = 1;
    sbit  CNT1_bit at TIM16_CNT.B1;
    const register unsigned short int CNT2 = 2;
    sbit  CNT2_bit at TIM16_CNT.B2;
    const register unsigned short int CNT3 = 3;
    sbit  CNT3_bit at TIM16_CNT.B3;
    const register unsigned short int CNT4 = 4;
    sbit  CNT4_bit at TIM16_CNT.B4;
    const register unsigned short int CNT5 = 5;
    sbit  CNT5_bit at TIM16_CNT.B5;
    const register unsigned short int CNT6 = 6;
    sbit  CNT6_bit at TIM16_CNT.B6;
    const register unsigned short int CNT7 = 7;
    sbit  CNT7_bit at TIM16_CNT.B7;
    const register unsigned short int CNT8 = 8;
    sbit  CNT8_bit at TIM16_CNT.B8;
    const register unsigned short int CNT9 = 9;
    sbit  CNT9_bit at TIM16_CNT.B9;
    const register unsigned short int CNT10 = 10;
    sbit  CNT10_bit at TIM16_CNT.B10;
    const register unsigned short int CNT11 = 11;
    sbit  CNT11_bit at TIM16_CNT.B11;
    const register unsigned short int CNT12 = 12;
    sbit  CNT12_bit at TIM16_CNT.B12;
    const register unsigned short int CNT13 = 13;
    sbit  CNT13_bit at TIM16_CNT.B13;
    const register unsigned short int CNT14 = 14;
    sbit  CNT14_bit at TIM16_CNT.B14;
    const register unsigned short int CNT15 = 15;
    sbit  CNT15_bit at TIM16_CNT.B15;
    const register unsigned short int UIFCPY = 31;
    sbit  UIFCPY_bit at TIM16_CNT.B31;

sfr unsigned long   volatile TIM16_PSC            absolute 0x40014428;
    const register unsigned short int PSC0 = 0;
    sbit  PSC0_bit at TIM16_PSC.B0;
    const register unsigned short int PSC1 = 1;
    sbit  PSC1_bit at TIM16_PSC.B1;
    const register unsigned short int PSC2 = 2;
    sbit  PSC2_bit at TIM16_PSC.B2;
    const register unsigned short int PSC3 = 3;
    sbit  PSC3_bit at TIM16_PSC.B3;
    const register unsigned short int PSC4 = 4;
    sbit  PSC4_bit at TIM16_PSC.B4;
    const register unsigned short int PSC5 = 5;
    sbit  PSC5_bit at TIM16_PSC.B5;
    const register unsigned short int PSC6 = 6;
    sbit  PSC6_bit at TIM16_PSC.B6;
    const register unsigned short int PSC7 = 7;
    sbit  PSC7_bit at TIM16_PSC.B7;
    const register unsigned short int PSC8 = 8;
    sbit  PSC8_bit at TIM16_PSC.B8;
    const register unsigned short int PSC9 = 9;
    sbit  PSC9_bit at TIM16_PSC.B9;
    const register unsigned short int PSC10 = 10;
    sbit  PSC10_bit at TIM16_PSC.B10;
    const register unsigned short int PSC11 = 11;
    sbit  PSC11_bit at TIM16_PSC.B11;
    const register unsigned short int PSC12 = 12;
    sbit  PSC12_bit at TIM16_PSC.B12;
    const register unsigned short int PSC13 = 13;
    sbit  PSC13_bit at TIM16_PSC.B13;
    const register unsigned short int PSC14 = 14;
    sbit  PSC14_bit at TIM16_PSC.B14;
    const register unsigned short int PSC15 = 15;
    sbit  PSC15_bit at TIM16_PSC.B15;

sfr unsigned long   volatile TIM16_ARR            absolute 0x4001442C;
    const register unsigned short int ARR0 = 0;
    sbit  ARR0_bit at TIM16_ARR.B0;
    const register unsigned short int ARR1 = 1;
    sbit  ARR1_bit at TIM16_ARR.B1;
    const register unsigned short int ARR2 = 2;
    sbit  ARR2_bit at TIM16_ARR.B2;
    const register unsigned short int ARR3 = 3;
    sbit  ARR3_bit at TIM16_ARR.B3;
    const register unsigned short int ARR4 = 4;
    sbit  ARR4_bit at TIM16_ARR.B4;
    const register unsigned short int ARR5 = 5;
    sbit  ARR5_bit at TIM16_ARR.B5;
    const register unsigned short int ARR6 = 6;
    sbit  ARR6_bit at TIM16_ARR.B6;
    const register unsigned short int ARR7 = 7;
    sbit  ARR7_bit at TIM16_ARR.B7;
    const register unsigned short int ARR8 = 8;
    sbit  ARR8_bit at TIM16_ARR.B8;
    const register unsigned short int ARR9 = 9;
    sbit  ARR9_bit at TIM16_ARR.B9;
    const register unsigned short int ARR10 = 10;
    sbit  ARR10_bit at TIM16_ARR.B10;
    const register unsigned short int ARR11 = 11;
    sbit  ARR11_bit at TIM16_ARR.B11;
    const register unsigned short int ARR12 = 12;
    sbit  ARR12_bit at TIM16_ARR.B12;
    const register unsigned short int ARR13 = 13;
    sbit  ARR13_bit at TIM16_ARR.B13;
    const register unsigned short int ARR14 = 14;
    sbit  ARR14_bit at TIM16_ARR.B14;
    const register unsigned short int ARR15 = 15;
    sbit  ARR15_bit at TIM16_ARR.B15;

sfr unsigned long   volatile TIM16_RCR            absolute 0x40014430;
    const register unsigned short int REP0 = 0;
    sbit  REP0_bit at TIM16_RCR.B0;
    const register unsigned short int REP1 = 1;
    sbit  REP1_bit at TIM16_RCR.B1;
    const register unsigned short int REP2 = 2;
    sbit  REP2_bit at TIM16_RCR.B2;
    const register unsigned short int REP3 = 3;
    sbit  REP3_bit at TIM16_RCR.B3;
    const register unsigned short int REP4 = 4;
    sbit  REP4_bit at TIM16_RCR.B4;
    const register unsigned short int REP5 = 5;
    sbit  REP5_bit at TIM16_RCR.B5;
    const register unsigned short int REP6 = 6;
    sbit  REP6_bit at TIM16_RCR.B6;
    const register unsigned short int REP7 = 7;
    sbit  REP7_bit at TIM16_RCR.B7;

sfr unsigned long   volatile TIM16_CCR1           absolute 0x40014434;
    const register unsigned short int CCR10 = 0;
    sbit  CCR10_bit at TIM16_CCR1.B0;
    const register unsigned short int CCR11 = 1;
    sbit  CCR11_bit at TIM16_CCR1.B1;
    const register unsigned short int CCR12 = 2;
    sbit  CCR12_bit at TIM16_CCR1.B2;
    const register unsigned short int CCR13 = 3;
    sbit  CCR13_bit at TIM16_CCR1.B3;
    const register unsigned short int CCR14 = 4;
    sbit  CCR14_bit at TIM16_CCR1.B4;
    const register unsigned short int CCR15 = 5;
    sbit  CCR15_bit at TIM16_CCR1.B5;
    const register unsigned short int CCR16 = 6;
    sbit  CCR16_bit at TIM16_CCR1.B6;
    const register unsigned short int CCR17 = 7;
    sbit  CCR17_bit at TIM16_CCR1.B7;
    const register unsigned short int CCR18 = 8;
    sbit  CCR18_bit at TIM16_CCR1.B8;
    const register unsigned short int CCR19 = 9;
    sbit  CCR19_bit at TIM16_CCR1.B9;
    const register unsigned short int CCR110 = 10;
    sbit  CCR110_bit at TIM16_CCR1.B10;
    const register unsigned short int CCR111 = 11;
    sbit  CCR111_bit at TIM16_CCR1.B11;
    const register unsigned short int CCR112 = 12;
    sbit  CCR112_bit at TIM16_CCR1.B12;
    const register unsigned short int CCR113 = 13;
    sbit  CCR113_bit at TIM16_CCR1.B13;
    const register unsigned short int CCR114 = 14;
    sbit  CCR114_bit at TIM16_CCR1.B14;
    const register unsigned short int CCR115 = 15;
    sbit  CCR115_bit at TIM16_CCR1.B15;

sfr unsigned long   volatile TIM16_BDTR           absolute 0x40014444;
    const register unsigned short int DTG0 = 0;
    sbit  DTG0_bit at TIM16_BDTR.B0;
    const register unsigned short int DTG1 = 1;
    sbit  DTG1_bit at TIM16_BDTR.B1;
    const register unsigned short int DTG2 = 2;
    sbit  DTG2_bit at TIM16_BDTR.B2;
    const register unsigned short int DTG3 = 3;
    sbit  DTG3_bit at TIM16_BDTR.B3;
    const register unsigned short int DTG4 = 4;
    sbit  DTG4_bit at TIM16_BDTR.B4;
    const register unsigned short int DTG5 = 5;
    sbit  DTG5_bit at TIM16_BDTR.B5;
    const register unsigned short int DTG6 = 6;
    sbit  DTG6_bit at TIM16_BDTR.B6;
    const register unsigned short int DTG7 = 7;
    sbit  DTG7_bit at TIM16_BDTR.B7;
    const register unsigned short int LOCK0 = 8;
    sbit  LOCK0_bit at TIM16_BDTR.B8;
    const register unsigned short int LOCK1 = 9;
    sbit  LOCK1_bit at TIM16_BDTR.B9;
    const register unsigned short int OSSI = 10;
    sbit  OSSI_bit at TIM16_BDTR.B10;
    const register unsigned short int OSSR = 11;
    sbit  OSSR_bit at TIM16_BDTR.B11;
    const register unsigned short int BKE = 12;
    sbit  BKE_bit at TIM16_BDTR.B12;
    const register unsigned short int BKP = 13;
    sbit  BKP_bit at TIM16_BDTR.B13;
    const register unsigned short int AOE = 14;
    sbit  AOE_bit at TIM16_BDTR.B14;
    const register unsigned short int MOE = 15;
    sbit  MOE_bit at TIM16_BDTR.B15;
    const register unsigned short int BKF0 = 16;
    sbit  BKF0_bit at TIM16_BDTR.B16;
    const register unsigned short int BKF1 = 17;
    sbit  BKF1_bit at TIM16_BDTR.B17;
    const register unsigned short int BKF2 = 18;
    sbit  BKF2_bit at TIM16_BDTR.B18;
    const register unsigned short int BKF3 = 19;
    sbit  BKF3_bit at TIM16_BDTR.B19;
    const register unsigned short int BKDSRM = 26;
    sbit  BKDSRM_bit at TIM16_BDTR.B26;
    const register unsigned short int BKBID = 28;
    sbit  BKBID_bit at TIM16_BDTR.B28;

sfr unsigned long   volatile TIM16_DCR            absolute 0x40014448;
    const register unsigned short int DBL0 = 8;
    sbit  DBL0_bit at TIM16_DCR.B8;
    const register unsigned short int DBL1 = 9;
    sbit  DBL1_bit at TIM16_DCR.B9;
    const register unsigned short int DBL2 = 10;
    sbit  DBL2_bit at TIM16_DCR.B10;
    const register unsigned short int DBL3 = 11;
    sbit  DBL3_bit at TIM16_DCR.B11;
    const register unsigned short int DBL4 = 12;
    sbit  DBL4_bit at TIM16_DCR.B12;
    const register unsigned short int DBA0 = 0;
    sbit  DBA0_bit at TIM16_DCR.B0;
    const register unsigned short int DBA1 = 1;
    sbit  DBA1_bit at TIM16_DCR.B1;
    const register unsigned short int DBA2 = 2;
    sbit  DBA2_bit at TIM16_DCR.B2;
    const register unsigned short int DBA3 = 3;
    sbit  DBA3_bit at TIM16_DCR.B3;
    const register unsigned short int DBA4 = 4;
    sbit  DBA4_bit at TIM16_DCR.B4;

sfr unsigned long   volatile TIM16_DMAR           absolute 0x4001444C;
    const register unsigned short int DMAB0 = 0;
    sbit  DMAB0_bit at TIM16_DMAR.B0;
    const register unsigned short int DMAB1 = 1;
    sbit  DMAB1_bit at TIM16_DMAR.B1;
    const register unsigned short int DMAB2 = 2;
    sbit  DMAB2_bit at TIM16_DMAR.B2;
    const register unsigned short int DMAB3 = 3;
    sbit  DMAB3_bit at TIM16_DMAR.B3;
    const register unsigned short int DMAB4 = 4;
    sbit  DMAB4_bit at TIM16_DMAR.B4;
    const register unsigned short int DMAB5 = 5;
    sbit  DMAB5_bit at TIM16_DMAR.B5;
    const register unsigned short int DMAB6 = 6;
    sbit  DMAB6_bit at TIM16_DMAR.B6;
    const register unsigned short int DMAB7 = 7;
    sbit  DMAB7_bit at TIM16_DMAR.B7;
    const register unsigned short int DMAB8 = 8;
    sbit  DMAB8_bit at TIM16_DMAR.B8;
    const register unsigned short int DMAB9 = 9;
    sbit  DMAB9_bit at TIM16_DMAR.B9;
    const register unsigned short int DMAB10 = 10;
    sbit  DMAB10_bit at TIM16_DMAR.B10;
    const register unsigned short int DMAB11 = 11;
    sbit  DMAB11_bit at TIM16_DMAR.B11;
    const register unsigned short int DMAB12 = 12;
    sbit  DMAB12_bit at TIM16_DMAR.B12;
    const register unsigned short int DMAB13 = 13;
    sbit  DMAB13_bit at TIM16_DMAR.B13;
    const register unsigned short int DMAB14 = 14;
    sbit  DMAB14_bit at TIM16_DMAR.B14;
    const register unsigned short int DMAB15 = 15;
    sbit  DMAB15_bit at TIM16_DMAR.B15;

sfr unsigned long   volatile TIM16_AF1            absolute 0x40014460;
    const register unsigned short int BKINE = 0;
    sbit  BKINE_bit at TIM16_AF1.B0;
    const register unsigned short int BKCMP1E = 1;
    sbit  BKCMP1E_bit at TIM16_AF1.B1;
    const register unsigned short int BKCMP2E = 2;
    sbit  BKCMP2E_bit at TIM16_AF1.B2;
    const register unsigned short int BKDFBK1E = 8;
    sbit  BKDFBK1E_bit at TIM16_AF1.B8;
    const register unsigned short int BKINP = 9;
    sbit  BKINP_bit at TIM16_AF1.B9;
    const register unsigned short int BKCMP1P = 10;
    sbit  BKCMP1P_bit at TIM16_AF1.B10;
    const register unsigned short int BKCMP2P = 11;
    sbit  BKCMP2P_bit at TIM16_AF1.B11;

sfr unsigned long   volatile TIM16_TISEL          absolute 0x40014468;
    const register unsigned short int TI1SEL0 = 0;
    sbit  TI1SEL0_bit at TIM16_TISEL.B0;
    const register unsigned short int TI1SEL1 = 1;
    sbit  TI1SEL1_bit at TIM16_TISEL.B1;
    const register unsigned short int TI1SEL2 = 2;
    sbit  TI1SEL2_bit at TIM16_TISEL.B2;
    const register unsigned short int TI1SEL3 = 3;
    sbit  TI1SEL3_bit at TIM16_TISEL.B3;

sfr unsigned long   volatile TIM17_CR1            absolute 0x40014800;
    sbit  CEN_TIM17_CR1_bit at TIM17_CR1.B0;
    sbit  UDIS_TIM17_CR1_bit at TIM17_CR1.B1;
    sbit  URS_TIM17_CR1_bit at TIM17_CR1.B2;
    sbit  OPM_TIM17_CR1_bit at TIM17_CR1.B3;
    sbit  ARPE_TIM17_CR1_bit at TIM17_CR1.B7;
    sbit  CKD0_TIM17_CR1_bit at TIM17_CR1.B8;
    sbit  CKD1_TIM17_CR1_bit at TIM17_CR1.B9;
    sbit  UIFREMAP_TIM17_CR1_bit at TIM17_CR1.B11;

sfr unsigned long   volatile TIM17_CR2            absolute 0x40014804;
    sbit  OIS1N_TIM17_CR2_bit at TIM17_CR2.B9;
    sbit  OIS1_TIM17_CR2_bit at TIM17_CR2.B8;
    sbit  CCDS_TIM17_CR2_bit at TIM17_CR2.B3;
    sbit  CCUS_TIM17_CR2_bit at TIM17_CR2.B2;
    sbit  CCPC_TIM17_CR2_bit at TIM17_CR2.B0;

sfr unsigned long   volatile TIM17_DIER           absolute 0x4001480C;
    sbit  COMDE_TIM17_DIER_bit at TIM17_DIER.B13;
    sbit  CC1DE_TIM17_DIER_bit at TIM17_DIER.B9;
    sbit  UDE_TIM17_DIER_bit at TIM17_DIER.B8;
    sbit  BIE_TIM17_DIER_bit at TIM17_DIER.B7;
    sbit  COMIE_TIM17_DIER_bit at TIM17_DIER.B5;
    sbit  CC1IE_TIM17_DIER_bit at TIM17_DIER.B1;
    sbit  UIE_TIM17_DIER_bit at TIM17_DIER.B0;

sfr unsigned long   volatile TIM17_SR             absolute 0x40014810;
    sbit  CC1OF_TIM17_SR_bit at TIM17_SR.B9;
    sbit  BIF_TIM17_SR_bit at TIM17_SR.B7;
    sbit  COMIF_TIM17_SR_bit at TIM17_SR.B5;
    sbit  CC1IF_TIM17_SR_bit at TIM17_SR.B1;
    sbit  UIF_TIM17_SR_bit at TIM17_SR.B0;

sfr unsigned long   volatile TIM17_EGR            absolute 0x40014814;
    sbit  BG_TIM17_EGR_bit at TIM17_EGR.B7;
    sbit  COMG_TIM17_EGR_bit at TIM17_EGR.B5;
    sbit  CC1G_TIM17_EGR_bit at TIM17_EGR.B1;
    sbit  UG_TIM17_EGR_bit at TIM17_EGR.B0;

sfr unsigned long   volatile TIM17_CCMR1_Output   absolute 0x40014818;
    sbit  OC1M_2_TIM17_CCMR1_Output_bit at TIM17_CCMR1_Output.B16;
    sbit  OC1M0_TIM17_CCMR1_Output_bit at TIM17_CCMR1_Output.B4;
    sbit  OC1M1_TIM17_CCMR1_Output_bit at TIM17_CCMR1_Output.B5;
    sbit  OC1M2_TIM17_CCMR1_Output_bit at TIM17_CCMR1_Output.B6;
    sbit  OC1PE_TIM17_CCMR1_Output_bit at TIM17_CCMR1_Output.B3;
    sbit  OC1FE_TIM17_CCMR1_Output_bit at TIM17_CCMR1_Output.B2;
    sbit  CC1S0_TIM17_CCMR1_Output_bit at TIM17_CCMR1_Output.B0;
    sbit  CC1S1_TIM17_CCMR1_Output_bit at TIM17_CCMR1_Output.B1;

sfr unsigned long   volatile TIM17_CCMR1_Input    absolute 0x40014818;
    sbit  IC1F0_TIM17_CCMR1_Input_bit at TIM17_CCMR1_Input.B4;
    sbit  IC1F1_TIM17_CCMR1_Input_bit at TIM17_CCMR1_Input.B5;
    sbit  IC1F2_TIM17_CCMR1_Input_bit at TIM17_CCMR1_Input.B6;
    sbit  IC1F3_TIM17_CCMR1_Input_bit at TIM17_CCMR1_Input.B7;
    sbit  IC1PSC0_TIM17_CCMR1_Input_bit at TIM17_CCMR1_Input.B2;
    sbit  IC1PSC1_TIM17_CCMR1_Input_bit at TIM17_CCMR1_Input.B3;
    sbit  CC1S0_TIM17_CCMR1_Input_bit at TIM17_CCMR1_Input.B0;
    sbit  CC1S1_TIM17_CCMR1_Input_bit at TIM17_CCMR1_Input.B1;

sfr unsigned long   volatile TIM17_CCER           absolute 0x40014820;
    sbit  CC1NP_TIM17_CCER_bit at TIM17_CCER.B3;
    sbit  CC1NE_TIM17_CCER_bit at TIM17_CCER.B2;
    sbit  CC1P_TIM17_CCER_bit at TIM17_CCER.B1;
    sbit  CC1E_TIM17_CCER_bit at TIM17_CCER.B0;

sfr unsigned long   volatile TIM17_CNT            absolute 0x40014824;
    sbit  CNT0_TIM17_CNT_bit at TIM17_CNT.B0;
    sbit  CNT1_TIM17_CNT_bit at TIM17_CNT.B1;
    sbit  CNT2_TIM17_CNT_bit at TIM17_CNT.B2;
    sbit  CNT3_TIM17_CNT_bit at TIM17_CNT.B3;
    sbit  CNT4_TIM17_CNT_bit at TIM17_CNT.B4;
    sbit  CNT5_TIM17_CNT_bit at TIM17_CNT.B5;
    sbit  CNT6_TIM17_CNT_bit at TIM17_CNT.B6;
    sbit  CNT7_TIM17_CNT_bit at TIM17_CNT.B7;
    sbit  CNT8_TIM17_CNT_bit at TIM17_CNT.B8;
    sbit  CNT9_TIM17_CNT_bit at TIM17_CNT.B9;
    sbit  CNT10_TIM17_CNT_bit at TIM17_CNT.B10;
    sbit  CNT11_TIM17_CNT_bit at TIM17_CNT.B11;
    sbit  CNT12_TIM17_CNT_bit at TIM17_CNT.B12;
    sbit  CNT13_TIM17_CNT_bit at TIM17_CNT.B13;
    sbit  CNT14_TIM17_CNT_bit at TIM17_CNT.B14;
    sbit  CNT15_TIM17_CNT_bit at TIM17_CNT.B15;
    sbit  UIFCPY_TIM17_CNT_bit at TIM17_CNT.B31;

sfr unsigned long   volatile TIM17_PSC            absolute 0x40014828;
    sbit  PSC0_TIM17_PSC_bit at TIM17_PSC.B0;
    sbit  PSC1_TIM17_PSC_bit at TIM17_PSC.B1;
    sbit  PSC2_TIM17_PSC_bit at TIM17_PSC.B2;
    sbit  PSC3_TIM17_PSC_bit at TIM17_PSC.B3;
    sbit  PSC4_TIM17_PSC_bit at TIM17_PSC.B4;
    sbit  PSC5_TIM17_PSC_bit at TIM17_PSC.B5;
    sbit  PSC6_TIM17_PSC_bit at TIM17_PSC.B6;
    sbit  PSC7_TIM17_PSC_bit at TIM17_PSC.B7;
    sbit  PSC8_TIM17_PSC_bit at TIM17_PSC.B8;
    sbit  PSC9_TIM17_PSC_bit at TIM17_PSC.B9;
    sbit  PSC10_TIM17_PSC_bit at TIM17_PSC.B10;
    sbit  PSC11_TIM17_PSC_bit at TIM17_PSC.B11;
    sbit  PSC12_TIM17_PSC_bit at TIM17_PSC.B12;
    sbit  PSC13_TIM17_PSC_bit at TIM17_PSC.B13;
    sbit  PSC14_TIM17_PSC_bit at TIM17_PSC.B14;
    sbit  PSC15_TIM17_PSC_bit at TIM17_PSC.B15;

sfr unsigned long   volatile TIM17_ARR            absolute 0x4001482C;
    sbit  ARR0_TIM17_ARR_bit at TIM17_ARR.B0;
    sbit  ARR1_TIM17_ARR_bit at TIM17_ARR.B1;
    sbit  ARR2_TIM17_ARR_bit at TIM17_ARR.B2;
    sbit  ARR3_TIM17_ARR_bit at TIM17_ARR.B3;
    sbit  ARR4_TIM17_ARR_bit at TIM17_ARR.B4;
    sbit  ARR5_TIM17_ARR_bit at TIM17_ARR.B5;
    sbit  ARR6_TIM17_ARR_bit at TIM17_ARR.B6;
    sbit  ARR7_TIM17_ARR_bit at TIM17_ARR.B7;
    sbit  ARR8_TIM17_ARR_bit at TIM17_ARR.B8;
    sbit  ARR9_TIM17_ARR_bit at TIM17_ARR.B9;
    sbit  ARR10_TIM17_ARR_bit at TIM17_ARR.B10;
    sbit  ARR11_TIM17_ARR_bit at TIM17_ARR.B11;
    sbit  ARR12_TIM17_ARR_bit at TIM17_ARR.B12;
    sbit  ARR13_TIM17_ARR_bit at TIM17_ARR.B13;
    sbit  ARR14_TIM17_ARR_bit at TIM17_ARR.B14;
    sbit  ARR15_TIM17_ARR_bit at TIM17_ARR.B15;

sfr unsigned long   volatile TIM17_RCR            absolute 0x40014830;
    sbit  REP0_TIM17_RCR_bit at TIM17_RCR.B0;
    sbit  REP1_TIM17_RCR_bit at TIM17_RCR.B1;
    sbit  REP2_TIM17_RCR_bit at TIM17_RCR.B2;
    sbit  REP3_TIM17_RCR_bit at TIM17_RCR.B3;
    sbit  REP4_TIM17_RCR_bit at TIM17_RCR.B4;
    sbit  REP5_TIM17_RCR_bit at TIM17_RCR.B5;
    sbit  REP6_TIM17_RCR_bit at TIM17_RCR.B6;
    sbit  REP7_TIM17_RCR_bit at TIM17_RCR.B7;

sfr unsigned long   volatile TIM17_CCR1           absolute 0x40014834;
    sbit  CCR10_TIM17_CCR1_bit at TIM17_CCR1.B0;
    sbit  CCR11_TIM17_CCR1_bit at TIM17_CCR1.B1;
    sbit  CCR12_TIM17_CCR1_bit at TIM17_CCR1.B2;
    sbit  CCR13_TIM17_CCR1_bit at TIM17_CCR1.B3;
    sbit  CCR14_TIM17_CCR1_bit at TIM17_CCR1.B4;
    sbit  CCR15_TIM17_CCR1_bit at TIM17_CCR1.B5;
    sbit  CCR16_TIM17_CCR1_bit at TIM17_CCR1.B6;
    sbit  CCR17_TIM17_CCR1_bit at TIM17_CCR1.B7;
    sbit  CCR18_TIM17_CCR1_bit at TIM17_CCR1.B8;
    sbit  CCR19_TIM17_CCR1_bit at TIM17_CCR1.B9;
    sbit  CCR110_TIM17_CCR1_bit at TIM17_CCR1.B10;
    sbit  CCR111_TIM17_CCR1_bit at TIM17_CCR1.B11;
    sbit  CCR112_TIM17_CCR1_bit at TIM17_CCR1.B12;
    sbit  CCR113_TIM17_CCR1_bit at TIM17_CCR1.B13;
    sbit  CCR114_TIM17_CCR1_bit at TIM17_CCR1.B14;
    sbit  CCR115_TIM17_CCR1_bit at TIM17_CCR1.B15;

sfr unsigned long   volatile TIM17_BDTR           absolute 0x40014844;
    sbit  DTG0_TIM17_BDTR_bit at TIM17_BDTR.B0;
    sbit  DTG1_TIM17_BDTR_bit at TIM17_BDTR.B1;
    sbit  DTG2_TIM17_BDTR_bit at TIM17_BDTR.B2;
    sbit  DTG3_TIM17_BDTR_bit at TIM17_BDTR.B3;
    sbit  DTG4_TIM17_BDTR_bit at TIM17_BDTR.B4;
    sbit  DTG5_TIM17_BDTR_bit at TIM17_BDTR.B5;
    sbit  DTG6_TIM17_BDTR_bit at TIM17_BDTR.B6;
    sbit  DTG7_TIM17_BDTR_bit at TIM17_BDTR.B7;
    sbit  LOCK0_TIM17_BDTR_bit at TIM17_BDTR.B8;
    sbit  LOCK1_TIM17_BDTR_bit at TIM17_BDTR.B9;
    sbit  OSSI_TIM17_BDTR_bit at TIM17_BDTR.B10;
    sbit  OSSR_TIM17_BDTR_bit at TIM17_BDTR.B11;
    sbit  BKE_TIM17_BDTR_bit at TIM17_BDTR.B12;
    sbit  BKP_TIM17_BDTR_bit at TIM17_BDTR.B13;
    sbit  AOE_TIM17_BDTR_bit at TIM17_BDTR.B14;
    sbit  MOE_TIM17_BDTR_bit at TIM17_BDTR.B15;
    sbit  BKF0_TIM17_BDTR_bit at TIM17_BDTR.B16;
    sbit  BKF1_TIM17_BDTR_bit at TIM17_BDTR.B17;
    sbit  BKF2_TIM17_BDTR_bit at TIM17_BDTR.B18;
    sbit  BKF3_TIM17_BDTR_bit at TIM17_BDTR.B19;
    sbit  BKDSRM_TIM17_BDTR_bit at TIM17_BDTR.B26;
    sbit  BKBID_TIM17_BDTR_bit at TIM17_BDTR.B28;

sfr unsigned long   volatile TIM17_DCR            absolute 0x40014848;
    sbit  DBL0_TIM17_DCR_bit at TIM17_DCR.B8;
    sbit  DBL1_TIM17_DCR_bit at TIM17_DCR.B9;
    sbit  DBL2_TIM17_DCR_bit at TIM17_DCR.B10;
    sbit  DBL3_TIM17_DCR_bit at TIM17_DCR.B11;
    sbit  DBL4_TIM17_DCR_bit at TIM17_DCR.B12;
    sbit  DBA0_TIM17_DCR_bit at TIM17_DCR.B0;
    sbit  DBA1_TIM17_DCR_bit at TIM17_DCR.B1;
    sbit  DBA2_TIM17_DCR_bit at TIM17_DCR.B2;
    sbit  DBA3_TIM17_DCR_bit at TIM17_DCR.B3;
    sbit  DBA4_TIM17_DCR_bit at TIM17_DCR.B4;

sfr unsigned long   volatile TIM17_DMAR           absolute 0x4001484C;
    sbit  DMAB0_TIM17_DMAR_bit at TIM17_DMAR.B0;
    sbit  DMAB1_TIM17_DMAR_bit at TIM17_DMAR.B1;
    sbit  DMAB2_TIM17_DMAR_bit at TIM17_DMAR.B2;
    sbit  DMAB3_TIM17_DMAR_bit at TIM17_DMAR.B3;
    sbit  DMAB4_TIM17_DMAR_bit at TIM17_DMAR.B4;
    sbit  DMAB5_TIM17_DMAR_bit at TIM17_DMAR.B5;
    sbit  DMAB6_TIM17_DMAR_bit at TIM17_DMAR.B6;
    sbit  DMAB7_TIM17_DMAR_bit at TIM17_DMAR.B7;
    sbit  DMAB8_TIM17_DMAR_bit at TIM17_DMAR.B8;
    sbit  DMAB9_TIM17_DMAR_bit at TIM17_DMAR.B9;
    sbit  DMAB10_TIM17_DMAR_bit at TIM17_DMAR.B10;
    sbit  DMAB11_TIM17_DMAR_bit at TIM17_DMAR.B11;
    sbit  DMAB12_TIM17_DMAR_bit at TIM17_DMAR.B12;
    sbit  DMAB13_TIM17_DMAR_bit at TIM17_DMAR.B13;
    sbit  DMAB14_TIM17_DMAR_bit at TIM17_DMAR.B14;
    sbit  DMAB15_TIM17_DMAR_bit at TIM17_DMAR.B15;

sfr unsigned long   volatile TIM17_AF1            absolute 0x40014860;
    sbit  BKINE_TIM17_AF1_bit at TIM17_AF1.B0;
    sbit  BKCMP1E_TIM17_AF1_bit at TIM17_AF1.B1;
    sbit  BKCMP2E_TIM17_AF1_bit at TIM17_AF1.B2;
    sbit  BKDFBK1E_TIM17_AF1_bit at TIM17_AF1.B8;
    sbit  BKINP_TIM17_AF1_bit at TIM17_AF1.B9;
    sbit  BKCMP1P_TIM17_AF1_bit at TIM17_AF1.B10;
    sbit  BKCMP2P_TIM17_AF1_bit at TIM17_AF1.B11;

sfr unsigned long   volatile TIM17_TISEL          absolute 0x40014868;
    sbit  TI1SEL0_TIM17_TISEL_bit at TIM17_TISEL.B0;
    sbit  TI1SEL1_TIM17_TISEL_bit at TIM17_TISEL.B1;
    sbit  TI1SEL2_TIM17_TISEL_bit at TIM17_TISEL.B2;
    sbit  TI1SEL3_TIM17_TISEL_bit at TIM17_TISEL.B3;

sfr unsigned long   volatile USART1_CR1           absolute 0x40013800;
    const register unsigned short int RXFFIE = 31;
    sbit  RXFFIE_bit at USART1_CR1.B31;
    const register unsigned short int TXFEIE = 30;
    sbit  TXFEIE_bit at USART1_CR1.B30;
    const register unsigned short int FIFOEN = 29;
    sbit  FIFOEN_bit at USART1_CR1.B29;
    const register unsigned short int M1 = 28;
    sbit  M1_bit at USART1_CR1.B28;
    const register unsigned short int EOBIE = 27;
    sbit  EOBIE_bit at USART1_CR1.B27;
    const register unsigned short int RTOIE = 26;
    sbit  RTOIE_bit at USART1_CR1.B26;
    const register unsigned short int DEAT0 = 21;
    sbit  DEAT0_bit at USART1_CR1.B21;
    const register unsigned short int DEAT1 = 22;
    sbit  DEAT1_bit at USART1_CR1.B22;
    const register unsigned short int DEAT2 = 23;
    sbit  DEAT2_bit at USART1_CR1.B23;
    const register unsigned short int DEAT3 = 24;
    sbit  DEAT3_bit at USART1_CR1.B24;
    const register unsigned short int DEAT4 = 25;
    sbit  DEAT4_bit at USART1_CR1.B25;
    const register unsigned short int DEDT0 = 16;
    sbit  DEDT0_bit at USART1_CR1.B16;
    const register unsigned short int DEDT1 = 17;
    sbit  DEDT1_bit at USART1_CR1.B17;
    const register unsigned short int DEDT2 = 18;
    sbit  DEDT2_bit at USART1_CR1.B18;
    const register unsigned short int DEDT3 = 19;
    sbit  DEDT3_bit at USART1_CR1.B19;
    const register unsigned short int DEDT4 = 20;
    sbit  DEDT4_bit at USART1_CR1.B20;
    const register unsigned short int OVER8 = 15;
    sbit  OVER8_bit at USART1_CR1.B15;
    const register unsigned short int CMIE = 14;
    sbit  CMIE_bit at USART1_CR1.B14;
    const register unsigned short int MME = 13;
    sbit  MME_bit at USART1_CR1.B13;
    const register unsigned short int M0 = 12;
    sbit  M0_bit at USART1_CR1.B12;
    const register unsigned short int WAKE = 11;
    sbit  WAKE_bit at USART1_CR1.B11;
    const register unsigned short int PCE = 10;
    sbit  PCE_bit at USART1_CR1.B10;
    const register unsigned short int PS = 9;
    sbit  PS_bit at USART1_CR1.B9;
    const register unsigned short int PEIE = 8;
    sbit  PEIE_bit at USART1_CR1.B8;
    const register unsigned short int TXEIE = 7;
    sbit  TXEIE_bit at USART1_CR1.B7;
    sbit  TCIE_USART1_CR1_bit at USART1_CR1.B6;
    const register unsigned short int RXNEIE = 5;
    sbit  RXNEIE_bit at USART1_CR1.B5;
    const register unsigned short int IDLEIE = 4;
    sbit  IDLEIE_bit at USART1_CR1.B4;
    const register unsigned short int TE = 3;
    sbit  TE_bit at USART1_CR1.B3;
    const register unsigned short int RE = 2;
    sbit  RE_bit at USART1_CR1.B2;
    const register unsigned short int UESM = 1;
    sbit  UESM_bit at USART1_CR1.B1;
    const register unsigned short int UE = 0;
    sbit  UE_bit at USART1_CR1.B0;

sfr unsigned long   volatile USART1_CR2           absolute 0x40013804;
    const register unsigned short int ADD4_70 = 28;
    sbit  ADD4_70_bit at USART1_CR2.B28;
    const register unsigned short int ADD4_71 = 29;
    sbit  ADD4_71_bit at USART1_CR2.B29;
    const register unsigned short int ADD4_72 = 30;
    sbit  ADD4_72_bit at USART1_CR2.B30;
    const register unsigned short int ADD4_73 = 31;
    sbit  ADD4_73_bit at USART1_CR2.B31;
    const register unsigned short int ADD0_30 = 24;
    sbit  ADD0_30_bit at USART1_CR2.B24;
    const register unsigned short int ADD0_31 = 25;
    sbit  ADD0_31_bit at USART1_CR2.B25;
    const register unsigned short int ADD0_32 = 26;
    sbit  ADD0_32_bit at USART1_CR2.B26;
    const register unsigned short int ADD0_33 = 27;
    sbit  ADD0_33_bit at USART1_CR2.B27;
    const register unsigned short int RTOEN = 23;
    sbit  RTOEN_bit at USART1_CR2.B23;
    const register unsigned short int ABRMOD0 = 21;
    sbit  ABRMOD0_bit at USART1_CR2.B21;
    const register unsigned short int ABRMOD1 = 22;
    sbit  ABRMOD1_bit at USART1_CR2.B22;
    const register unsigned short int ABREN = 20;
    sbit  ABREN_bit at USART1_CR2.B20;
    const register unsigned short int MSBFIRST = 19;
    sbit  MSBFIRST_bit at USART1_CR2.B19;
    const register unsigned short int TAINV = 18;
    sbit  TAINV_bit at USART1_CR2.B18;
    const register unsigned short int TXINV = 17;
    sbit  TXINV_bit at USART1_CR2.B17;
    const register unsigned short int RXINV = 16;
    sbit  RXINV_bit at USART1_CR2.B16;
    const register unsigned short int SWAP = 15;
    sbit  SWAP_bit at USART1_CR2.B15;
    const register unsigned short int LINEN = 14;
    sbit  LINEN_bit at USART1_CR2.B14;
    const register unsigned short int STOP0 = 12;
    sbit  STOP0_bit at USART1_CR2.B12;
    const register unsigned short int STOP1 = 13;
    sbit  STOP1_bit at USART1_CR2.B13;
    const register unsigned short int CLKEN = 11;
    sbit  CLKEN_bit at USART1_CR2.B11;
    const register unsigned short int CPOL = 10;
    sbit  CPOL_bit at USART1_CR2.B10;
    const register unsigned short int CPHA = 9;
    sbit  CPHA_bit at USART1_CR2.B9;
    const register unsigned short int LBCL = 8;
    sbit  LBCL_bit at USART1_CR2.B8;
    const register unsigned short int LBDIE = 6;
    sbit  LBDIE_bit at USART1_CR2.B6;
    const register unsigned short int LBDL = 5;
    sbit  LBDL_bit at USART1_CR2.B5;
    const register unsigned short int ADDM7 = 4;
    sbit  ADDM7_bit at USART1_CR2.B4;
    const register unsigned short int DIS_NSS = 3;
    sbit  DIS_NSS_bit at USART1_CR2.B3;
    const register unsigned short int SLVEN = 0;
    sbit  SLVEN_bit at USART1_CR2.B0;

sfr unsigned long   volatile USART1_CR3           absolute 0x40013808;
    const register unsigned short int TXFTCFG0 = 29;
    sbit  TXFTCFG0_bit at USART1_CR3.B29;
    const register unsigned short int TXFTCFG1 = 30;
    sbit  TXFTCFG1_bit at USART1_CR3.B30;
    const register unsigned short int TXFTCFG2 = 31;
    sbit  TXFTCFG2_bit at USART1_CR3.B31;
    const register unsigned short int RXFTIE = 28;
    sbit  RXFTIE_bit at USART1_CR3.B28;
    const register unsigned short int RXFTCFG0 = 25;
    sbit  RXFTCFG0_bit at USART1_CR3.B25;
    const register unsigned short int RXFTCFG1 = 26;
    sbit  RXFTCFG1_bit at USART1_CR3.B26;
    const register unsigned short int RXFTCFG2 = 27;
    sbit  RXFTCFG2_bit at USART1_CR3.B27;
    const register unsigned short int TCBGTIE = 24;
    sbit  TCBGTIE_bit at USART1_CR3.B24;
    const register unsigned short int TXFTIE = 23;
    sbit  TXFTIE_bit at USART1_CR3.B23;
    const register unsigned short int WUFIE = 22;
    sbit  WUFIE_bit at USART1_CR3.B22;
    const register unsigned short int WUS0 = 20;
    sbit  WUS0_bit at USART1_CR3.B20;
    const register unsigned short int WUS1 = 21;
    sbit  WUS1_bit at USART1_CR3.B21;
    const register unsigned short int SCARCNT0 = 17;
    sbit  SCARCNT0_bit at USART1_CR3.B17;
    const register unsigned short int SCARCNT1 = 18;
    sbit  SCARCNT1_bit at USART1_CR3.B18;
    const register unsigned short int SCARCNT2 = 19;
    sbit  SCARCNT2_bit at USART1_CR3.B19;
    const register unsigned short int DEP = 15;
    sbit  DEP_bit at USART1_CR3.B15;
    const register unsigned short int DEM = 14;
    sbit  DEM_bit at USART1_CR3.B14;
    const register unsigned short int DDRE = 13;
    sbit  DDRE_bit at USART1_CR3.B13;
    const register unsigned short int OVRDIS = 12;
    sbit  OVRDIS_bit at USART1_CR3.B12;
    const register unsigned short int ONEBIT = 11;
    sbit  ONEBIT_bit at USART1_CR3.B11;
    const register unsigned short int CTSIE = 10;
    sbit  CTSIE_bit at USART1_CR3.B10;
    const register unsigned short int CTSE = 9;
    sbit  CTSE_bit at USART1_CR3.B9;
    const register unsigned short int RTSE = 8;
    sbit  RTSE_bit at USART1_CR3.B8;
    const register unsigned short int DMAT = 7;
    sbit  DMAT_bit at USART1_CR3.B7;
    const register unsigned short int DMAR = 6;
    sbit  DMAR_bit at USART1_CR3.B6;
    const register unsigned short int SCEN = 5;
    sbit  SCEN_bit at USART1_CR3.B5;
    const register unsigned short int NACK = 4;
    sbit  NACK_bit at USART1_CR3.B4;
    const register unsigned short int HDSEL = 3;
    sbit  HDSEL_bit at USART1_CR3.B3;
    const register unsigned short int IRLP = 2;
    sbit  IRLP_bit at USART1_CR3.B2;
    const register unsigned short int IREN = 1;
    sbit  IREN_bit at USART1_CR3.B1;
    const register unsigned short int EIE = 0;
    sbit  EIE_bit at USART1_CR3.B0;

sfr unsigned long   volatile USART1_BRR           absolute 0x4001380C;
    const register unsigned short int BRR_4_150 = 4;
    sbit  BRR_4_150_bit at USART1_BRR.B4;
    const register unsigned short int BRR_4_151 = 5;
    sbit  BRR_4_151_bit at USART1_BRR.B5;
    const register unsigned short int BRR_4_152 = 6;
    sbit  BRR_4_152_bit at USART1_BRR.B6;
    const register unsigned short int BRR_4_153 = 7;
    sbit  BRR_4_153_bit at USART1_BRR.B7;
    const register unsigned short int BRR_4_154 = 8;
    sbit  BRR_4_154_bit at USART1_BRR.B8;
    const register unsigned short int BRR_4_155 = 9;
    sbit  BRR_4_155_bit at USART1_BRR.B9;
    const register unsigned short int BRR_4_156 = 10;
    sbit  BRR_4_156_bit at USART1_BRR.B10;
    const register unsigned short int BRR_4_157 = 11;
    sbit  BRR_4_157_bit at USART1_BRR.B11;
    const register unsigned short int BRR_4_158 = 12;
    sbit  BRR_4_158_bit at USART1_BRR.B12;
    const register unsigned short int BRR_4_159 = 13;
    sbit  BRR_4_159_bit at USART1_BRR.B13;
    const register unsigned short int BRR_4_1510 = 14;
    sbit  BRR_4_1510_bit at USART1_BRR.B14;
    const register unsigned short int BRR_4_1511 = 15;
    sbit  BRR_4_1511_bit at USART1_BRR.B15;
    const register unsigned short int BRR_0_30 = 0;
    sbit  BRR_0_30_bit at USART1_BRR.B0;
    const register unsigned short int BRR_0_31 = 1;
    sbit  BRR_0_31_bit at USART1_BRR.B1;
    const register unsigned short int BRR_0_32 = 2;
    sbit  BRR_0_32_bit at USART1_BRR.B2;
    const register unsigned short int BRR_0_33 = 3;
    sbit  BRR_0_33_bit at USART1_BRR.B3;

sfr unsigned long   volatile USART1_GTPR          absolute 0x40013810;
    const register unsigned short int GT0 = 8;
    sbit  GT0_bit at USART1_GTPR.B8;
    const register unsigned short int GT1 = 9;
    sbit  GT1_bit at USART1_GTPR.B9;
    const register unsigned short int GT2 = 10;
    sbit  GT2_bit at USART1_GTPR.B10;
    const register unsigned short int GT3 = 11;
    sbit  GT3_bit at USART1_GTPR.B11;
    const register unsigned short int GT4 = 12;
    sbit  GT4_bit at USART1_GTPR.B12;
    const register unsigned short int GT5 = 13;
    sbit  GT5_bit at USART1_GTPR.B13;
    const register unsigned short int GT6 = 14;
    sbit  GT6_bit at USART1_GTPR.B14;
    const register unsigned short int GT7 = 15;
    sbit  GT7_bit at USART1_GTPR.B15;
    sbit  PSC0_USART1_GTPR_bit at USART1_GTPR.B0;
    sbit  PSC1_USART1_GTPR_bit at USART1_GTPR.B1;
    sbit  PSC2_USART1_GTPR_bit at USART1_GTPR.B2;
    sbit  PSC3_USART1_GTPR_bit at USART1_GTPR.B3;
    sbit  PSC4_USART1_GTPR_bit at USART1_GTPR.B4;
    sbit  PSC5_USART1_GTPR_bit at USART1_GTPR.B5;
    sbit  PSC6_USART1_GTPR_bit at USART1_GTPR.B6;
    sbit  PSC7_USART1_GTPR_bit at USART1_GTPR.B7;

sfr unsigned long   volatile USART1_RTOR          absolute 0x40013814;
    const register unsigned short int BLEN0 = 24;
    sbit  BLEN0_bit at USART1_RTOR.B24;
    const register unsigned short int BLEN1 = 25;
    sbit  BLEN1_bit at USART1_RTOR.B25;
    const register unsigned short int BLEN2 = 26;
    sbit  BLEN2_bit at USART1_RTOR.B26;
    const register unsigned short int BLEN3 = 27;
    sbit  BLEN3_bit at USART1_RTOR.B27;
    const register unsigned short int BLEN4 = 28;
    sbit  BLEN4_bit at USART1_RTOR.B28;
    const register unsigned short int BLEN5 = 29;
    sbit  BLEN5_bit at USART1_RTOR.B29;
    const register unsigned short int BLEN6 = 30;
    sbit  BLEN6_bit at USART1_RTOR.B30;
    const register unsigned short int BLEN7 = 31;
    sbit  BLEN7_bit at USART1_RTOR.B31;
    const register unsigned short int RTO0 = 0;
    sbit  RTO0_bit at USART1_RTOR.B0;
    const register unsigned short int RTO1 = 1;
    sbit  RTO1_bit at USART1_RTOR.B1;
    const register unsigned short int RTO2 = 2;
    sbit  RTO2_bit at USART1_RTOR.B2;
    const register unsigned short int RTO3 = 3;
    sbit  RTO3_bit at USART1_RTOR.B3;
    const register unsigned short int RTO4 = 4;
    sbit  RTO4_bit at USART1_RTOR.B4;
    const register unsigned short int RTO5 = 5;
    sbit  RTO5_bit at USART1_RTOR.B5;
    const register unsigned short int RTO6 = 6;
    sbit  RTO6_bit at USART1_RTOR.B6;
    const register unsigned short int RTO7 = 7;
    sbit  RTO7_bit at USART1_RTOR.B7;
    const register unsigned short int RTO8 = 8;
    sbit  RTO8_bit at USART1_RTOR.B8;
    const register unsigned short int RTO9 = 9;
    sbit  RTO9_bit at USART1_RTOR.B9;
    const register unsigned short int RTO10 = 10;
    sbit  RTO10_bit at USART1_RTOR.B10;
    const register unsigned short int RTO11 = 11;
    sbit  RTO11_bit at USART1_RTOR.B11;
    const register unsigned short int RTO12 = 12;
    sbit  RTO12_bit at USART1_RTOR.B12;
    const register unsigned short int RTO13 = 13;
    sbit  RTO13_bit at USART1_RTOR.B13;
    const register unsigned short int RTO14 = 14;
    sbit  RTO14_bit at USART1_RTOR.B14;
    const register unsigned short int RTO15 = 15;
    sbit  RTO15_bit at USART1_RTOR.B15;
    const register unsigned short int RTO16 = 16;
    sbit  RTO16_bit at USART1_RTOR.B16;
    const register unsigned short int RTO17 = 17;
    sbit  RTO17_bit at USART1_RTOR.B17;
    const register unsigned short int RTO18 = 18;
    sbit  RTO18_bit at USART1_RTOR.B18;
    const register unsigned short int RTO19 = 19;
    sbit  RTO19_bit at USART1_RTOR.B19;
    const register unsigned short int RTO20 = 20;
    sbit  RTO20_bit at USART1_RTOR.B20;
    const register unsigned short int RTO21 = 21;
    sbit  RTO21_bit at USART1_RTOR.B21;
    const register unsigned short int RTO22 = 22;
    sbit  RTO22_bit at USART1_RTOR.B22;
    const register unsigned short int RTO23 = 23;
    sbit  RTO23_bit at USART1_RTOR.B23;

sfr unsigned long   volatile USART1_RQR           absolute 0x40013818;
    const register unsigned short int TXFRQ = 4;
    sbit  TXFRQ_bit at USART1_RQR.B4;
    const register unsigned short int RXFRQ = 3;
    sbit  RXFRQ_bit at USART1_RQR.B3;
    const register unsigned short int MMRQ = 2;
    sbit  MMRQ_bit at USART1_RQR.B2;
    const register unsigned short int SBKRQ = 1;
    sbit  SBKRQ_bit at USART1_RQR.B1;
    const register unsigned short int ABRRQ = 0;
    sbit  ABRRQ_bit at USART1_RQR.B0;

sfr unsigned long   volatile USART1_ISR           absolute 0x4001381C;
    const register unsigned short int TXFT = 27;
    sbit  TXFT_bit at USART1_ISR.B27;
    const register unsigned short int RXFT = 26;
    sbit  RXFT_bit at USART1_ISR.B26;
    const register unsigned short int TCBGT = 25;
    sbit  TCBGT_bit at USART1_ISR.B25;
    const register unsigned short int RXFF = 24;
    sbit  RXFF_bit at USART1_ISR.B24;
    const register unsigned short int TXFE = 23;
    sbit  TXFE_bit at USART1_ISR.B23;
    const register unsigned short int REACK = 22;
    sbit  REACK_bit at USART1_ISR.B22;
    const register unsigned short int TEACK = 21;
    sbit  TEACK_bit at USART1_ISR.B21;
    const register unsigned short int WUF = 20;
    sbit  WUF_bit at USART1_ISR.B20;
    const register unsigned short int RWU = 19;
    sbit  RWU_bit at USART1_ISR.B19;
    const register unsigned short int SBKF = 18;
    sbit  SBKF_bit at USART1_ISR.B18;
    const register unsigned short int CMF = 17;
    sbit  CMF_bit at USART1_ISR.B17;
    const register unsigned short int BUSY = 16;
    sbit  BUSY_bit at USART1_ISR.B16;
    const register unsigned short int ABRF = 15;
    sbit  ABRF_bit at USART1_ISR.B15;
    const register unsigned short int ABRE = 14;
    sbit  ABRE_bit at USART1_ISR.B14;
    const register unsigned short int UDR = 13;
    sbit  UDR_bit at USART1_ISR.B13;
    const register unsigned short int EOBF = 12;
    sbit  EOBF_bit at USART1_ISR.B12;
    const register unsigned short int RTOF = 11;
    sbit  RTOF_bit at USART1_ISR.B11;
    const register unsigned short int CTS = 10;
    sbit  CTS_bit at USART1_ISR.B10;
    const register unsigned short int CTSIF = 9;
    sbit  CTSIF_bit at USART1_ISR.B9;
    const register unsigned short int LBDF = 8;
    sbit  LBDF_bit at USART1_ISR.B8;
    const register unsigned short int TXE = 7;
    sbit  TXE_bit at USART1_ISR.B7;
    const register unsigned short int TC = 6;
    sbit  TC_bit at USART1_ISR.B6;
    const register unsigned short int RXNE = 5;
    sbit  RXNE_bit at USART1_ISR.B5;
    const register unsigned short int IDLE = 4;
    sbit  IDLE_bit at USART1_ISR.B4;
    const register unsigned short int ORE = 3;
    sbit  ORE_bit at USART1_ISR.B3;
    const register unsigned short int NF = 2;
    sbit  NF_bit at USART1_ISR.B2;
    const register unsigned short int FE = 1;
    sbit  FE_bit at USART1_ISR.B1;
    const register unsigned short int PE = 0;
    sbit  PE_bit at USART1_ISR.B0;

sfr unsigned long   volatile USART1_ICR           absolute 0x40013820;
    const register unsigned short int WUCF = 20;
    sbit  WUCF_bit at USART1_ICR.B20;
    const register unsigned short int CMCF = 17;
    sbit  CMCF_bit at USART1_ICR.B17;
    const register unsigned short int UDRCF = 13;
    sbit  UDRCF_bit at USART1_ICR.B13;
    const register unsigned short int EOBCF = 12;
    sbit  EOBCF_bit at USART1_ICR.B12;
    const register unsigned short int RTOCF = 11;
    sbit  RTOCF_bit at USART1_ICR.B11;
    const register unsigned short int CTSCF = 9;
    sbit  CTSCF_bit at USART1_ICR.B9;
    const register unsigned short int LBDCF = 8;
    sbit  LBDCF_bit at USART1_ICR.B8;
    const register unsigned short int TCBGTCF = 7;
    sbit  TCBGTCF_bit at USART1_ICR.B7;
    const register unsigned short int TCCF = 6;
    sbit  TCCF_bit at USART1_ICR.B6;
    const register unsigned short int TXFECF = 5;
    sbit  TXFECF_bit at USART1_ICR.B5;
    const register unsigned short int IDLECF = 4;
    sbit  IDLECF_bit at USART1_ICR.B4;
    const register unsigned short int ORECF = 3;
    sbit  ORECF_bit at USART1_ICR.B3;
    const register unsigned short int NCF = 2;
    sbit  NCF_bit at USART1_ICR.B2;
    const register unsigned short int FECF = 1;
    sbit  FECF_bit at USART1_ICR.B1;
    const register unsigned short int PECF = 0;
    sbit  PECF_bit at USART1_ICR.B0;

sfr unsigned long   volatile USART1_RDR           absolute 0x40013824;
    const register unsigned short int RDR0 = 0;
    sbit  RDR0_bit at USART1_RDR.B0;
    const register unsigned short int RDR1 = 1;
    sbit  RDR1_bit at USART1_RDR.B1;
    const register unsigned short int RDR2 = 2;
    sbit  RDR2_bit at USART1_RDR.B2;
    const register unsigned short int RDR3 = 3;
    sbit  RDR3_bit at USART1_RDR.B3;
    const register unsigned short int RDR4 = 4;
    sbit  RDR4_bit at USART1_RDR.B4;
    const register unsigned short int RDR5 = 5;
    sbit  RDR5_bit at USART1_RDR.B5;
    const register unsigned short int RDR6 = 6;
    sbit  RDR6_bit at USART1_RDR.B6;
    const register unsigned short int RDR7 = 7;
    sbit  RDR7_bit at USART1_RDR.B7;
    const register unsigned short int RDR8 = 8;
    sbit  RDR8_bit at USART1_RDR.B8;

sfr unsigned long   volatile USART1_TDR           absolute 0x40013828;
    const register unsigned short int TDR0 = 0;
    sbit  TDR0_bit at USART1_TDR.B0;
    const register unsigned short int TDR1 = 1;
    sbit  TDR1_bit at USART1_TDR.B1;
    const register unsigned short int TDR2 = 2;
    sbit  TDR2_bit at USART1_TDR.B2;
    const register unsigned short int TDR3 = 3;
    sbit  TDR3_bit at USART1_TDR.B3;
    const register unsigned short int TDR4 = 4;
    sbit  TDR4_bit at USART1_TDR.B4;
    const register unsigned short int TDR5 = 5;
    sbit  TDR5_bit at USART1_TDR.B5;
    const register unsigned short int TDR6 = 6;
    sbit  TDR6_bit at USART1_TDR.B6;
    const register unsigned short int TDR7 = 7;
    sbit  TDR7_bit at USART1_TDR.B7;
    const register unsigned short int TDR8 = 8;
    sbit  TDR8_bit at USART1_TDR.B8;

sfr unsigned long   volatile USART1_PRESC         absolute 0x4001382C;
    const register unsigned short int PRESCALER0 = 0;
    sbit  PRESCALER0_bit at USART1_PRESC.B0;
    const register unsigned short int PRESCALER1 = 1;
    sbit  PRESCALER1_bit at USART1_PRESC.B1;
    const register unsigned short int PRESCALER2 = 2;
    sbit  PRESCALER2_bit at USART1_PRESC.B2;
    const register unsigned short int PRESCALER3 = 3;
    sbit  PRESCALER3_bit at USART1_PRESC.B3;

sfr unsigned long   volatile USART2_CR1           absolute 0x40004400;
    sbit  RXFFIE_USART2_CR1_bit at USART2_CR1.B31;
    sbit  TXFEIE_USART2_CR1_bit at USART2_CR1.B30;
    sbit  FIFOEN_USART2_CR1_bit at USART2_CR1.B29;
    sbit  M1_USART2_CR1_bit at USART2_CR1.B28;
    sbit  EOBIE_USART2_CR1_bit at USART2_CR1.B27;
    sbit  RTOIE_USART2_CR1_bit at USART2_CR1.B26;
    sbit  DEAT0_USART2_CR1_bit at USART2_CR1.B21;
    sbit  DEAT1_USART2_CR1_bit at USART2_CR1.B22;
    sbit  DEAT2_USART2_CR1_bit at USART2_CR1.B23;
    sbit  DEAT3_USART2_CR1_bit at USART2_CR1.B24;
    sbit  DEAT4_USART2_CR1_bit at USART2_CR1.B25;
    sbit  DEDT0_USART2_CR1_bit at USART2_CR1.B16;
    sbit  DEDT1_USART2_CR1_bit at USART2_CR1.B17;
    sbit  DEDT2_USART2_CR1_bit at USART2_CR1.B18;
    sbit  DEDT3_USART2_CR1_bit at USART2_CR1.B19;
    sbit  DEDT4_USART2_CR1_bit at USART2_CR1.B20;
    sbit  OVER8_USART2_CR1_bit at USART2_CR1.B15;
    sbit  CMIE_USART2_CR1_bit at USART2_CR1.B14;
    sbit  MME_USART2_CR1_bit at USART2_CR1.B13;
    sbit  M0_USART2_CR1_bit at USART2_CR1.B12;
    sbit  WAKE_USART2_CR1_bit at USART2_CR1.B11;
    sbit  PCE_USART2_CR1_bit at USART2_CR1.B10;
    sbit  PS_USART2_CR1_bit at USART2_CR1.B9;
    sbit  PEIE_USART2_CR1_bit at USART2_CR1.B8;
    sbit  TXEIE_USART2_CR1_bit at USART2_CR1.B7;
    sbit  TCIE_USART2_CR1_bit at USART2_CR1.B6;
    sbit  RXNEIE_USART2_CR1_bit at USART2_CR1.B5;
    sbit  IDLEIE_USART2_CR1_bit at USART2_CR1.B4;
    sbit  TE_USART2_CR1_bit at USART2_CR1.B3;
    sbit  RE_USART2_CR1_bit at USART2_CR1.B2;
    sbit  UESM_USART2_CR1_bit at USART2_CR1.B1;
    sbit  UE_USART2_CR1_bit at USART2_CR1.B0;

sfr unsigned long   volatile USART2_CR2           absolute 0x40004404;
    sbit  ADD4_70_USART2_CR2_bit at USART2_CR2.B28;
    sbit  ADD4_71_USART2_CR2_bit at USART2_CR2.B29;
    sbit  ADD4_72_USART2_CR2_bit at USART2_CR2.B30;
    sbit  ADD4_73_USART2_CR2_bit at USART2_CR2.B31;
    sbit  ADD0_30_USART2_CR2_bit at USART2_CR2.B24;
    sbit  ADD0_31_USART2_CR2_bit at USART2_CR2.B25;
    sbit  ADD0_32_USART2_CR2_bit at USART2_CR2.B26;
    sbit  ADD0_33_USART2_CR2_bit at USART2_CR2.B27;
    sbit  RTOEN_USART2_CR2_bit at USART2_CR2.B23;
    sbit  ABRMOD0_USART2_CR2_bit at USART2_CR2.B21;
    sbit  ABRMOD1_USART2_CR2_bit at USART2_CR2.B22;
    sbit  ABREN_USART2_CR2_bit at USART2_CR2.B20;
    sbit  MSBFIRST_USART2_CR2_bit at USART2_CR2.B19;
    sbit  TAINV_USART2_CR2_bit at USART2_CR2.B18;
    sbit  TXINV_USART2_CR2_bit at USART2_CR2.B17;
    sbit  RXINV_USART2_CR2_bit at USART2_CR2.B16;
    sbit  SWAP_USART2_CR2_bit at USART2_CR2.B15;
    sbit  LINEN_USART2_CR2_bit at USART2_CR2.B14;
    sbit  STOP0_USART2_CR2_bit at USART2_CR2.B12;
    sbit  STOP1_USART2_CR2_bit at USART2_CR2.B13;
    sbit  CLKEN_USART2_CR2_bit at USART2_CR2.B11;
    sbit  CPOL_USART2_CR2_bit at USART2_CR2.B10;
    sbit  CPHA_USART2_CR2_bit at USART2_CR2.B9;
    sbit  LBCL_USART2_CR2_bit at USART2_CR2.B8;
    sbit  LBDIE_USART2_CR2_bit at USART2_CR2.B6;
    sbit  LBDL_USART2_CR2_bit at USART2_CR2.B5;
    sbit  ADDM7_USART2_CR2_bit at USART2_CR2.B4;
    sbit  DIS_NSS_USART2_CR2_bit at USART2_CR2.B3;
    sbit  SLVEN_USART2_CR2_bit at USART2_CR2.B0;

sfr unsigned long   volatile USART2_CR3           absolute 0x40004408;
    sbit  TXFTCFG0_USART2_CR3_bit at USART2_CR3.B29;
    sbit  TXFTCFG1_USART2_CR3_bit at USART2_CR3.B30;
    sbit  TXFTCFG2_USART2_CR3_bit at USART2_CR3.B31;
    sbit  RXFTIE_USART2_CR3_bit at USART2_CR3.B28;
    sbit  RXFTCFG0_USART2_CR3_bit at USART2_CR3.B25;
    sbit  RXFTCFG1_USART2_CR3_bit at USART2_CR3.B26;
    sbit  RXFTCFG2_USART2_CR3_bit at USART2_CR3.B27;
    sbit  TCBGTIE_USART2_CR3_bit at USART2_CR3.B24;
    sbit  TXFTIE_USART2_CR3_bit at USART2_CR3.B23;
    sbit  WUFIE_USART2_CR3_bit at USART2_CR3.B22;
    sbit  WUS0_USART2_CR3_bit at USART2_CR3.B20;
    sbit  WUS1_USART2_CR3_bit at USART2_CR3.B21;
    sbit  SCARCNT0_USART2_CR3_bit at USART2_CR3.B17;
    sbit  SCARCNT1_USART2_CR3_bit at USART2_CR3.B18;
    sbit  SCARCNT2_USART2_CR3_bit at USART2_CR3.B19;
    sbit  DEP_USART2_CR3_bit at USART2_CR3.B15;
    sbit  DEM_USART2_CR3_bit at USART2_CR3.B14;
    sbit  DDRE_USART2_CR3_bit at USART2_CR3.B13;
    sbit  OVRDIS_USART2_CR3_bit at USART2_CR3.B12;
    sbit  ONEBIT_USART2_CR3_bit at USART2_CR3.B11;
    sbit  CTSIE_USART2_CR3_bit at USART2_CR3.B10;
    sbit  CTSE_USART2_CR3_bit at USART2_CR3.B9;
    sbit  RTSE_USART2_CR3_bit at USART2_CR3.B8;
    sbit  DMAT_USART2_CR3_bit at USART2_CR3.B7;
    sbit  DMAR_USART2_CR3_bit at USART2_CR3.B6;
    sbit  SCEN_USART2_CR3_bit at USART2_CR3.B5;
    sbit  NACK_USART2_CR3_bit at USART2_CR3.B4;
    sbit  HDSEL_USART2_CR3_bit at USART2_CR3.B3;
    sbit  IRLP_USART2_CR3_bit at USART2_CR3.B2;
    sbit  IREN_USART2_CR3_bit at USART2_CR3.B1;
    sbit  EIE_USART2_CR3_bit at USART2_CR3.B0;

sfr unsigned long   volatile USART2_BRR           absolute 0x4000440C;
    sbit  BRR_4_150_USART2_BRR_bit at USART2_BRR.B4;
    sbit  BRR_4_151_USART2_BRR_bit at USART2_BRR.B5;
    sbit  BRR_4_152_USART2_BRR_bit at USART2_BRR.B6;
    sbit  BRR_4_153_USART2_BRR_bit at USART2_BRR.B7;
    sbit  BRR_4_154_USART2_BRR_bit at USART2_BRR.B8;
    sbit  BRR_4_155_USART2_BRR_bit at USART2_BRR.B9;
    sbit  BRR_4_156_USART2_BRR_bit at USART2_BRR.B10;
    sbit  BRR_4_157_USART2_BRR_bit at USART2_BRR.B11;
    sbit  BRR_4_158_USART2_BRR_bit at USART2_BRR.B12;
    sbit  BRR_4_159_USART2_BRR_bit at USART2_BRR.B13;
    sbit  BRR_4_1510_USART2_BRR_bit at USART2_BRR.B14;
    sbit  BRR_4_1511_USART2_BRR_bit at USART2_BRR.B15;
    sbit  BRR_0_30_USART2_BRR_bit at USART2_BRR.B0;
    sbit  BRR_0_31_USART2_BRR_bit at USART2_BRR.B1;
    sbit  BRR_0_32_USART2_BRR_bit at USART2_BRR.B2;
    sbit  BRR_0_33_USART2_BRR_bit at USART2_BRR.B3;

sfr unsigned long   volatile USART2_GTPR          absolute 0x40004410;
    sbit  GT0_USART2_GTPR_bit at USART2_GTPR.B8;
    sbit  GT1_USART2_GTPR_bit at USART2_GTPR.B9;
    sbit  GT2_USART2_GTPR_bit at USART2_GTPR.B10;
    sbit  GT3_USART2_GTPR_bit at USART2_GTPR.B11;
    sbit  GT4_USART2_GTPR_bit at USART2_GTPR.B12;
    sbit  GT5_USART2_GTPR_bit at USART2_GTPR.B13;
    sbit  GT6_USART2_GTPR_bit at USART2_GTPR.B14;
    sbit  GT7_USART2_GTPR_bit at USART2_GTPR.B15;
    sbit  PSC0_USART2_GTPR_bit at USART2_GTPR.B0;
    sbit  PSC1_USART2_GTPR_bit at USART2_GTPR.B1;
    sbit  PSC2_USART2_GTPR_bit at USART2_GTPR.B2;
    sbit  PSC3_USART2_GTPR_bit at USART2_GTPR.B3;
    sbit  PSC4_USART2_GTPR_bit at USART2_GTPR.B4;
    sbit  PSC5_USART2_GTPR_bit at USART2_GTPR.B5;
    sbit  PSC6_USART2_GTPR_bit at USART2_GTPR.B6;
    sbit  PSC7_USART2_GTPR_bit at USART2_GTPR.B7;

sfr unsigned long   volatile USART2_RTOR          absolute 0x40004414;
    sbit  BLEN0_USART2_RTOR_bit at USART2_RTOR.B24;
    sbit  BLEN1_USART2_RTOR_bit at USART2_RTOR.B25;
    sbit  BLEN2_USART2_RTOR_bit at USART2_RTOR.B26;
    sbit  BLEN3_USART2_RTOR_bit at USART2_RTOR.B27;
    sbit  BLEN4_USART2_RTOR_bit at USART2_RTOR.B28;
    sbit  BLEN5_USART2_RTOR_bit at USART2_RTOR.B29;
    sbit  BLEN6_USART2_RTOR_bit at USART2_RTOR.B30;
    sbit  BLEN7_USART2_RTOR_bit at USART2_RTOR.B31;
    sbit  RTO0_USART2_RTOR_bit at USART2_RTOR.B0;
    sbit  RTO1_USART2_RTOR_bit at USART2_RTOR.B1;
    sbit  RTO2_USART2_RTOR_bit at USART2_RTOR.B2;
    sbit  RTO3_USART2_RTOR_bit at USART2_RTOR.B3;
    sbit  RTO4_USART2_RTOR_bit at USART2_RTOR.B4;
    sbit  RTO5_USART2_RTOR_bit at USART2_RTOR.B5;
    sbit  RTO6_USART2_RTOR_bit at USART2_RTOR.B6;
    sbit  RTO7_USART2_RTOR_bit at USART2_RTOR.B7;
    sbit  RTO8_USART2_RTOR_bit at USART2_RTOR.B8;
    sbit  RTO9_USART2_RTOR_bit at USART2_RTOR.B9;
    sbit  RTO10_USART2_RTOR_bit at USART2_RTOR.B10;
    sbit  RTO11_USART2_RTOR_bit at USART2_RTOR.B11;
    sbit  RTO12_USART2_RTOR_bit at USART2_RTOR.B12;
    sbit  RTO13_USART2_RTOR_bit at USART2_RTOR.B13;
    sbit  RTO14_USART2_RTOR_bit at USART2_RTOR.B14;
    sbit  RTO15_USART2_RTOR_bit at USART2_RTOR.B15;
    sbit  RTO16_USART2_RTOR_bit at USART2_RTOR.B16;
    sbit  RTO17_USART2_RTOR_bit at USART2_RTOR.B17;
    sbit  RTO18_USART2_RTOR_bit at USART2_RTOR.B18;
    sbit  RTO19_USART2_RTOR_bit at USART2_RTOR.B19;
    sbit  RTO20_USART2_RTOR_bit at USART2_RTOR.B20;
    sbit  RTO21_USART2_RTOR_bit at USART2_RTOR.B21;
    sbit  RTO22_USART2_RTOR_bit at USART2_RTOR.B22;
    sbit  RTO23_USART2_RTOR_bit at USART2_RTOR.B23;

sfr unsigned long   volatile USART2_RQR           absolute 0x40004418;
    sbit  TXFRQ_USART2_RQR_bit at USART2_RQR.B4;
    sbit  RXFRQ_USART2_RQR_bit at USART2_RQR.B3;
    sbit  MMRQ_USART2_RQR_bit at USART2_RQR.B2;
    sbit  SBKRQ_USART2_RQR_bit at USART2_RQR.B1;
    sbit  ABRRQ_USART2_RQR_bit at USART2_RQR.B0;

sfr unsigned long   volatile USART2_ISR           absolute 0x4000441C;
    sbit  TXFT_USART2_ISR_bit at USART2_ISR.B27;
    sbit  RXFT_USART2_ISR_bit at USART2_ISR.B26;
    sbit  TCBGT_USART2_ISR_bit at USART2_ISR.B25;
    sbit  RXFF_USART2_ISR_bit at USART2_ISR.B24;
    sbit  TXFE_USART2_ISR_bit at USART2_ISR.B23;
    sbit  REACK_USART2_ISR_bit at USART2_ISR.B22;
    sbit  TEACK_USART2_ISR_bit at USART2_ISR.B21;
    sbit  WUF_USART2_ISR_bit at USART2_ISR.B20;
    sbit  RWU_USART2_ISR_bit at USART2_ISR.B19;
    sbit  SBKF_USART2_ISR_bit at USART2_ISR.B18;
    sbit  CMF_USART2_ISR_bit at USART2_ISR.B17;
    sbit  BUSY_USART2_ISR_bit at USART2_ISR.B16;
    sbit  ABRF_USART2_ISR_bit at USART2_ISR.B15;
    sbit  ABRE_USART2_ISR_bit at USART2_ISR.B14;
    sbit  UDR_USART2_ISR_bit at USART2_ISR.B13;
    sbit  EOBF_USART2_ISR_bit at USART2_ISR.B12;
    sbit  RTOF_USART2_ISR_bit at USART2_ISR.B11;
    sbit  CTS_USART2_ISR_bit at USART2_ISR.B10;
    sbit  CTSIF_USART2_ISR_bit at USART2_ISR.B9;
    sbit  LBDF_USART2_ISR_bit at USART2_ISR.B8;
    sbit  TXE_USART2_ISR_bit at USART2_ISR.B7;
    sbit  TC_USART2_ISR_bit at USART2_ISR.B6;
    sbit  RXNE_USART2_ISR_bit at USART2_ISR.B5;
    sbit  IDLE_USART2_ISR_bit at USART2_ISR.B4;
    sbit  ORE_USART2_ISR_bit at USART2_ISR.B3;
    sbit  NF_USART2_ISR_bit at USART2_ISR.B2;
    sbit  FE_USART2_ISR_bit at USART2_ISR.B1;
    sbit  PE_USART2_ISR_bit at USART2_ISR.B0;

sfr unsigned long   volatile USART2_ICR           absolute 0x40004420;
    sbit  WUCF_USART2_ICR_bit at USART2_ICR.B20;
    sbit  CMCF_USART2_ICR_bit at USART2_ICR.B17;
    sbit  UDRCF_USART2_ICR_bit at USART2_ICR.B13;
    sbit  EOBCF_USART2_ICR_bit at USART2_ICR.B12;
    sbit  RTOCF_USART2_ICR_bit at USART2_ICR.B11;
    sbit  CTSCF_USART2_ICR_bit at USART2_ICR.B9;
    sbit  LBDCF_USART2_ICR_bit at USART2_ICR.B8;
    sbit  TCBGTCF_USART2_ICR_bit at USART2_ICR.B7;
    sbit  TCCF_USART2_ICR_bit at USART2_ICR.B6;
    sbit  TXFECF_USART2_ICR_bit at USART2_ICR.B5;
    sbit  IDLECF_USART2_ICR_bit at USART2_ICR.B4;
    sbit  ORECF_USART2_ICR_bit at USART2_ICR.B3;
    sbit  NCF_USART2_ICR_bit at USART2_ICR.B2;
    sbit  FECF_USART2_ICR_bit at USART2_ICR.B1;
    sbit  PECF_USART2_ICR_bit at USART2_ICR.B0;

sfr unsigned long   volatile USART2_RDR           absolute 0x40004424;
    sbit  RDR0_USART2_RDR_bit at USART2_RDR.B0;
    sbit  RDR1_USART2_RDR_bit at USART2_RDR.B1;
    sbit  RDR2_USART2_RDR_bit at USART2_RDR.B2;
    sbit  RDR3_USART2_RDR_bit at USART2_RDR.B3;
    sbit  RDR4_USART2_RDR_bit at USART2_RDR.B4;
    sbit  RDR5_USART2_RDR_bit at USART2_RDR.B5;
    sbit  RDR6_USART2_RDR_bit at USART2_RDR.B6;
    sbit  RDR7_USART2_RDR_bit at USART2_RDR.B7;
    sbit  RDR8_USART2_RDR_bit at USART2_RDR.B8;

sfr unsigned long   volatile USART2_TDR           absolute 0x40004428;
    sbit  TDR0_USART2_TDR_bit at USART2_TDR.B0;
    sbit  TDR1_USART2_TDR_bit at USART2_TDR.B1;
    sbit  TDR2_USART2_TDR_bit at USART2_TDR.B2;
    sbit  TDR3_USART2_TDR_bit at USART2_TDR.B3;
    sbit  TDR4_USART2_TDR_bit at USART2_TDR.B4;
    sbit  TDR5_USART2_TDR_bit at USART2_TDR.B5;
    sbit  TDR6_USART2_TDR_bit at USART2_TDR.B6;
    sbit  TDR7_USART2_TDR_bit at USART2_TDR.B7;
    sbit  TDR8_USART2_TDR_bit at USART2_TDR.B8;

sfr unsigned long   volatile USART2_PRESC         absolute 0x4000442C;
    sbit  PRESCALER0_USART2_PRESC_bit at USART2_PRESC.B0;
    sbit  PRESCALER1_USART2_PRESC_bit at USART2_PRESC.B1;
    sbit  PRESCALER2_USART2_PRESC_bit at USART2_PRESC.B2;
    sbit  PRESCALER3_USART2_PRESC_bit at USART2_PRESC.B3;

sfr unsigned long   volatile SPI1_CR1             absolute 0x40013000;
    const register unsigned short int BIDIMODE = 15;
    sbit  BIDIMODE_bit at SPI1_CR1.B15;
    const register unsigned short int BIDIOE = 14;
    sbit  BIDIOE_bit at SPI1_CR1.B14;
    sbit  CRCEN_SPI1_CR1_bit at SPI1_CR1.B13;
    const register unsigned short int CRCNEXT = 12;
    sbit  CRCNEXT_bit at SPI1_CR1.B12;
    const register unsigned short int DFF = 11;
    sbit  DFF_bit at SPI1_CR1.B11;
    const register unsigned short int RXONLY = 10;
    sbit  RXONLY_bit at SPI1_CR1.B10;
    const register unsigned short int SSM = 9;
    sbit  SSM_bit at SPI1_CR1.B9;
    const register unsigned short int SSI = 8;
    sbit  SSI_bit at SPI1_CR1.B8;
    const register unsigned short int LSBFIRST = 7;
    sbit  LSBFIRST_bit at SPI1_CR1.B7;
    const register unsigned short int SPE = 6;
    sbit  SPE_bit at SPI1_CR1.B6;
    sbit  BR0_SPI1_CR1_bit at SPI1_CR1.B3;
    sbit  BR1_SPI1_CR1_bit at SPI1_CR1.B4;
    sbit  BR2_SPI1_CR1_bit at SPI1_CR1.B5;
    const register unsigned short int MSTR = 2;
    sbit  MSTR_bit at SPI1_CR1.B2;
    sbit  CPOL_SPI1_CR1_bit at SPI1_CR1.B1;
    sbit  CPHA_SPI1_CR1_bit at SPI1_CR1.B0;

sfr unsigned long   volatile SPI1_CR2             absolute 0x40013004;
    const register unsigned short int RXDMAEN = 0;
    sbit  RXDMAEN_bit at SPI1_CR2.B0;
    const register unsigned short int TXDMAEN = 1;
    sbit  TXDMAEN_bit at SPI1_CR2.B1;
    const register unsigned short int SSOE = 2;
    sbit  SSOE_bit at SPI1_CR2.B2;
    const register unsigned short int NSSP = 3;
    sbit  NSSP_bit at SPI1_CR2.B3;
    const register unsigned short int FRF = 4;
    sbit  FRF_bit at SPI1_CR2.B4;
    sbit  ERRIE_SPI1_CR2_bit at SPI1_CR2.B5;
    sbit  RXNEIE_SPI1_CR2_bit at SPI1_CR2.B6;
    sbit  TXEIE_SPI1_CR2_bit at SPI1_CR2.B7;
    const register unsigned short int DS0 = 8;
    sbit  DS0_bit at SPI1_CR2.B8;
    const register unsigned short int DS1 = 9;
    sbit  DS1_bit at SPI1_CR2.B9;
    const register unsigned short int DS2 = 10;
    sbit  DS2_bit at SPI1_CR2.B10;
    const register unsigned short int DS3 = 11;
    sbit  DS3_bit at SPI1_CR2.B11;
    const register unsigned short int FRXTH = 12;
    sbit  FRXTH_bit at SPI1_CR2.B12;
    const register unsigned short int LDMA_RX = 13;
    sbit  LDMA_RX_bit at SPI1_CR2.B13;
    const register unsigned short int LDMA_TX = 14;
    sbit  LDMA_TX_bit at SPI1_CR2.B14;

sfr unsigned long   volatile SPI1_SR              absolute 0x40013008;
    sbit  RXNE_SPI1_SR_bit at SPI1_SR.B0;
    sbit  TXE_SPI1_SR_bit at SPI1_SR.B1;
    const register unsigned short int CHSIDE = 2;
    sbit  CHSIDE_bit at SPI1_SR.B2;
    sbit  UDR_SPI1_SR_bit at SPI1_SR.B3;
    const register unsigned short int CRCERR = 4;
    sbit  CRCERR_bit at SPI1_SR.B4;
    const register unsigned short int MODF_ = 5;
    sbit  MODF_bit at SPI1_SR.B5;
    const register unsigned short int OVR = 6;
    sbit  OVR_bit at SPI1_SR.B6;
    sbit  BSY_SPI1_SR_bit at SPI1_SR.B7;
    const register unsigned short int TIFRFE = 8;
    sbit  TIFRFE_bit at SPI1_SR.B8;
    const register unsigned short int FRLVL0 = 9;
    sbit  FRLVL0_bit at SPI1_SR.B9;
    const register unsigned short int FRLVL1 = 10;
    sbit  FRLVL1_bit at SPI1_SR.B10;
    const register unsigned short int FTLVL0 = 11;
    sbit  FTLVL0_bit at SPI1_SR.B11;
    const register unsigned short int FTLVL1 = 12;
    sbit  FTLVL1_bit at SPI1_SR.B12;

sfr unsigned long   volatile SPI1_DR              absolute 0x4001300C;
    sbit  DR0_SPI1_DR_bit at SPI1_DR.B0;
    sbit  DR1_SPI1_DR_bit at SPI1_DR.B1;
    sbit  DR2_SPI1_DR_bit at SPI1_DR.B2;
    sbit  DR3_SPI1_DR_bit at SPI1_DR.B3;
    sbit  DR4_SPI1_DR_bit at SPI1_DR.B4;
    sbit  DR5_SPI1_DR_bit at SPI1_DR.B5;
    sbit  DR6_SPI1_DR_bit at SPI1_DR.B6;
    sbit  DR7_SPI1_DR_bit at SPI1_DR.B7;
    sbit  DR8_SPI1_DR_bit at SPI1_DR.B8;
    sbit  DR9_SPI1_DR_bit at SPI1_DR.B9;
    sbit  DR10_SPI1_DR_bit at SPI1_DR.B10;
    sbit  DR11_SPI1_DR_bit at SPI1_DR.B11;
    sbit  DR12_SPI1_DR_bit at SPI1_DR.B12;
    sbit  DR13_SPI1_DR_bit at SPI1_DR.B13;
    sbit  DR14_SPI1_DR_bit at SPI1_DR.B14;
    sbit  DR15_SPI1_DR_bit at SPI1_DR.B15;

sfr unsigned long   volatile SPI1_CRCPR           absolute 0x40013010;
    const register unsigned short int CRCPOLY0 = 0;
    sbit  CRCPOLY0_bit at SPI1_CRCPR.B0;
    const register unsigned short int CRCPOLY1 = 1;
    sbit  CRCPOLY1_bit at SPI1_CRCPR.B1;
    const register unsigned short int CRCPOLY2 = 2;
    sbit  CRCPOLY2_bit at SPI1_CRCPR.B2;
    const register unsigned short int CRCPOLY3 = 3;
    sbit  CRCPOLY3_bit at SPI1_CRCPR.B3;
    const register unsigned short int CRCPOLY4 = 4;
    sbit  CRCPOLY4_bit at SPI1_CRCPR.B4;
    const register unsigned short int CRCPOLY5 = 5;
    sbit  CRCPOLY5_bit at SPI1_CRCPR.B5;
    const register unsigned short int CRCPOLY6 = 6;
    sbit  CRCPOLY6_bit at SPI1_CRCPR.B6;
    const register unsigned short int CRCPOLY7 = 7;
    sbit  CRCPOLY7_bit at SPI1_CRCPR.B7;
    const register unsigned short int CRCPOLY8 = 8;
    sbit  CRCPOLY8_bit at SPI1_CRCPR.B8;
    const register unsigned short int CRCPOLY9 = 9;
    sbit  CRCPOLY9_bit at SPI1_CRCPR.B9;
    const register unsigned short int CRCPOLY10 = 10;
    sbit  CRCPOLY10_bit at SPI1_CRCPR.B10;
    const register unsigned short int CRCPOLY11 = 11;
    sbit  CRCPOLY11_bit at SPI1_CRCPR.B11;
    const register unsigned short int CRCPOLY12 = 12;
    sbit  CRCPOLY12_bit at SPI1_CRCPR.B12;
    const register unsigned short int CRCPOLY13 = 13;
    sbit  CRCPOLY13_bit at SPI1_CRCPR.B13;
    const register unsigned short int CRCPOLY14 = 14;
    sbit  CRCPOLY14_bit at SPI1_CRCPR.B14;
    const register unsigned short int CRCPOLY15 = 15;
    sbit  CRCPOLY15_bit at SPI1_CRCPR.B15;

sfr unsigned long   volatile SPI1_RXCRCR          absolute 0x40013014;
    const register unsigned short int RxCRC0 = 0;
    sbit  RxCRC0_bit at SPI1_RXCRCR.B0;
    const register unsigned short int RxCRC1 = 1;
    sbit  RxCRC1_bit at SPI1_RXCRCR.B1;
    const register unsigned short int RxCRC2 = 2;
    sbit  RxCRC2_bit at SPI1_RXCRCR.B2;
    const register unsigned short int RxCRC3 = 3;
    sbit  RxCRC3_bit at SPI1_RXCRCR.B3;
    const register unsigned short int RxCRC4 = 4;
    sbit  RxCRC4_bit at SPI1_RXCRCR.B4;
    const register unsigned short int RxCRC5 = 5;
    sbit  RxCRC5_bit at SPI1_RXCRCR.B5;
    const register unsigned short int RxCRC6 = 6;
    sbit  RxCRC6_bit at SPI1_RXCRCR.B6;
    const register unsigned short int RxCRC7 = 7;
    sbit  RxCRC7_bit at SPI1_RXCRCR.B7;
    const register unsigned short int RxCRC8 = 8;
    sbit  RxCRC8_bit at SPI1_RXCRCR.B8;
    const register unsigned short int RxCRC9 = 9;
    sbit  RxCRC9_bit at SPI1_RXCRCR.B9;
    const register unsigned short int RxCRC10 = 10;
    sbit  RxCRC10_bit at SPI1_RXCRCR.B10;
    const register unsigned short int RxCRC11 = 11;
    sbit  RxCRC11_bit at SPI1_RXCRCR.B11;
    const register unsigned short int RxCRC12 = 12;
    sbit  RxCRC12_bit at SPI1_RXCRCR.B12;
    const register unsigned short int RxCRC13 = 13;
    sbit  RxCRC13_bit at SPI1_RXCRCR.B13;
    const register unsigned short int RxCRC14 = 14;
    sbit  RxCRC14_bit at SPI1_RXCRCR.B14;
    const register unsigned short int RxCRC15 = 15;
    sbit  RxCRC15_bit at SPI1_RXCRCR.B15;

sfr unsigned long   volatile SPI1_TXCRCR          absolute 0x40013018;
    const register unsigned short int TxCRC0 = 0;
    sbit  TxCRC0_bit at SPI1_TXCRCR.B0;
    const register unsigned short int TxCRC1 = 1;
    sbit  TxCRC1_bit at SPI1_TXCRCR.B1;
    const register unsigned short int TxCRC2 = 2;
    sbit  TxCRC2_bit at SPI1_TXCRCR.B2;
    const register unsigned short int TxCRC3 = 3;
    sbit  TxCRC3_bit at SPI1_TXCRCR.B3;
    const register unsigned short int TxCRC4 = 4;
    sbit  TxCRC4_bit at SPI1_TXCRCR.B4;
    const register unsigned short int TxCRC5 = 5;
    sbit  TxCRC5_bit at SPI1_TXCRCR.B5;
    const register unsigned short int TxCRC6 = 6;
    sbit  TxCRC6_bit at SPI1_TXCRCR.B6;
    const register unsigned short int TxCRC7 = 7;
    sbit  TxCRC7_bit at SPI1_TXCRCR.B7;
    const register unsigned short int TxCRC8 = 8;
    sbit  TxCRC8_bit at SPI1_TXCRCR.B8;
    const register unsigned short int TxCRC9 = 9;
    sbit  TxCRC9_bit at SPI1_TXCRCR.B9;
    const register unsigned short int TxCRC10 = 10;
    sbit  TxCRC10_bit at SPI1_TXCRCR.B10;
    const register unsigned short int TxCRC11 = 11;
    sbit  TxCRC11_bit at SPI1_TXCRCR.B11;
    const register unsigned short int TxCRC12 = 12;
    sbit  TxCRC12_bit at SPI1_TXCRCR.B12;
    const register unsigned short int TxCRC13 = 13;
    sbit  TxCRC13_bit at SPI1_TXCRCR.B13;
    const register unsigned short int TxCRC14 = 14;
    sbit  TxCRC14_bit at SPI1_TXCRCR.B14;
    const register unsigned short int TxCRC15 = 15;
    sbit  TxCRC15_bit at SPI1_TXCRCR.B15;

sfr unsigned long   volatile SPI1_I2SCFGR         absolute 0x4001301C;
    const register unsigned short int CHLEN = 0;
    sbit  CHLEN_bit at SPI1_I2SCFGR.B0;
    const register unsigned short int DATLEN0 = 1;
    sbit  DATLEN0_bit at SPI1_I2SCFGR.B1;
    const register unsigned short int DATLEN1 = 2;
    sbit  DATLEN1_bit at SPI1_I2SCFGR.B2;
    const register unsigned short int CKPOL = 3;
    sbit  CKPOL_bit at SPI1_I2SCFGR.B3;
    const register unsigned short int I2SSTD0 = 4;
    sbit  I2SSTD0_bit at SPI1_I2SCFGR.B4;
    const register unsigned short int I2SSTD1 = 5;
    sbit  I2SSTD1_bit at SPI1_I2SCFGR.B5;
    const register unsigned short int PCMSYNC = 7;
    sbit  PCMSYNC_bit at SPI1_I2SCFGR.B7;
    const register unsigned short int I2SCFG0 = 8;
    sbit  I2SCFG0_bit at SPI1_I2SCFGR.B8;
    const register unsigned short int I2SCFG1 = 9;
    sbit  I2SCFG1_bit at SPI1_I2SCFGR.B9;
    const register unsigned short int SE2 = 10;
    sbit  SE2_bit at SPI1_I2SCFGR.B10;
    const register unsigned short int I2SMOD = 11;
    sbit  I2SMOD_bit at SPI1_I2SCFGR.B11;

sfr unsigned long   volatile SPI1_I2SPR           absolute 0x40013020;
    const register unsigned short int I2SDIV0 = 0;
    sbit  I2SDIV0_bit at SPI1_I2SPR.B0;
    const register unsigned short int I2SDIV1 = 1;
    sbit  I2SDIV1_bit at SPI1_I2SPR.B1;
    const register unsigned short int I2SDIV2 = 2;
    sbit  I2SDIV2_bit at SPI1_I2SPR.B2;
    const register unsigned short int I2SDIV3 = 3;
    sbit  I2SDIV3_bit at SPI1_I2SPR.B3;
    const register unsigned short int I2SDIV4 = 4;
    sbit  I2SDIV4_bit at SPI1_I2SPR.B4;
    const register unsigned short int I2SDIV5 = 5;
    sbit  I2SDIV5_bit at SPI1_I2SPR.B5;
    const register unsigned short int I2SDIV6 = 6;
    sbit  I2SDIV6_bit at SPI1_I2SPR.B6;
    const register unsigned short int I2SDIV7 = 7;
    sbit  I2SDIV7_bit at SPI1_I2SPR.B7;
    const register unsigned short int ODD = 8;
    sbit  ODD_bit at SPI1_I2SPR.B8;
    const register unsigned short int MCKOE = 9;
    sbit  MCKOE_bit at SPI1_I2SPR.B9;

sfr unsigned long   volatile SPI2_CR1             absolute 0x40003800;
    sbit  BIDIMODE_SPI2_CR1_bit at SPI2_CR1.B15;
    sbit  BIDIOE_SPI2_CR1_bit at SPI2_CR1.B14;
    sbit  CRCEN_SPI2_CR1_bit at SPI2_CR1.B13;
    sbit  CRCNEXT_SPI2_CR1_bit at SPI2_CR1.B12;
    sbit  DFF_SPI2_CR1_bit at SPI2_CR1.B11;
    sbit  RXONLY_SPI2_CR1_bit at SPI2_CR1.B10;
    sbit  SSM_SPI2_CR1_bit at SPI2_CR1.B9;
    sbit  SSI_SPI2_CR1_bit at SPI2_CR1.B8;
    sbit  LSBFIRST_SPI2_CR1_bit at SPI2_CR1.B7;
    sbit  SPE_SPI2_CR1_bit at SPI2_CR1.B6;
    sbit  BR0_SPI2_CR1_bit at SPI2_CR1.B3;
    sbit  BR1_SPI2_CR1_bit at SPI2_CR1.B4;
    sbit  BR2_SPI2_CR1_bit at SPI2_CR1.B5;
    sbit  MSTR_SPI2_CR1_bit at SPI2_CR1.B2;
    sbit  CPOL_SPI2_CR1_bit at SPI2_CR1.B1;
    sbit  CPHA_SPI2_CR1_bit at SPI2_CR1.B0;

sfr unsigned long   volatile SPI2_CR2             absolute 0x40003804;
    sbit  RXDMAEN_SPI2_CR2_bit at SPI2_CR2.B0;
    sbit  TXDMAEN_SPI2_CR2_bit at SPI2_CR2.B1;
    sbit  SSOE_SPI2_CR2_bit at SPI2_CR2.B2;
    sbit  NSSP_SPI2_CR2_bit at SPI2_CR2.B3;
    sbit  FRF_SPI2_CR2_bit at SPI2_CR2.B4;
    sbit  ERRIE_SPI2_CR2_bit at SPI2_CR2.B5;
    sbit  RXNEIE_SPI2_CR2_bit at SPI2_CR2.B6;
    sbit  TXEIE_SPI2_CR2_bit at SPI2_CR2.B7;
    sbit  DS0_SPI2_CR2_bit at SPI2_CR2.B8;
    sbit  DS1_SPI2_CR2_bit at SPI2_CR2.B9;
    sbit  DS2_SPI2_CR2_bit at SPI2_CR2.B10;
    sbit  DS3_SPI2_CR2_bit at SPI2_CR2.B11;
    sbit  FRXTH_SPI2_CR2_bit at SPI2_CR2.B12;
    sbit  LDMA_RX_SPI2_CR2_bit at SPI2_CR2.B13;
    sbit  LDMA_TX_SPI2_CR2_bit at SPI2_CR2.B14;

sfr unsigned long   volatile SPI2_SR              absolute 0x40003808;
    sbit  RXNE_SPI2_SR_bit at SPI2_SR.B0;
    sbit  TXE_SPI2_SR_bit at SPI2_SR.B1;
    sbit  CHSIDE_SPI2_SR_bit at SPI2_SR.B2;
    sbit  UDR_SPI2_SR_bit at SPI2_SR.B3;
    sbit  CRCERR_SPI2_SR_bit at SPI2_SR.B4;
    sbit  MODF_SPI2_SR_bit at SPI2_SR.B5;
    sbit  OVR_SPI2_SR_bit at SPI2_SR.B6;
    sbit  BSY_SPI2_SR_bit at SPI2_SR.B7;
    sbit  TIFRFE_SPI2_SR_bit at SPI2_SR.B8;
    sbit  FRLVL0_SPI2_SR_bit at SPI2_SR.B9;
    sbit  FRLVL1_SPI2_SR_bit at SPI2_SR.B10;
    sbit  FTLVL0_SPI2_SR_bit at SPI2_SR.B11;
    sbit  FTLVL1_SPI2_SR_bit at SPI2_SR.B12;

sfr unsigned long   volatile SPI2_DR              absolute 0x4000380C;
    sbit  DR0_SPI2_DR_bit at SPI2_DR.B0;
    sbit  DR1_SPI2_DR_bit at SPI2_DR.B1;
    sbit  DR2_SPI2_DR_bit at SPI2_DR.B2;
    sbit  DR3_SPI2_DR_bit at SPI2_DR.B3;
    sbit  DR4_SPI2_DR_bit at SPI2_DR.B4;
    sbit  DR5_SPI2_DR_bit at SPI2_DR.B5;
    sbit  DR6_SPI2_DR_bit at SPI2_DR.B6;
    sbit  DR7_SPI2_DR_bit at SPI2_DR.B7;
    sbit  DR8_SPI2_DR_bit at SPI2_DR.B8;
    sbit  DR9_SPI2_DR_bit at SPI2_DR.B9;
    sbit  DR10_SPI2_DR_bit at SPI2_DR.B10;
    sbit  DR11_SPI2_DR_bit at SPI2_DR.B11;
    sbit  DR12_SPI2_DR_bit at SPI2_DR.B12;
    sbit  DR13_SPI2_DR_bit at SPI2_DR.B13;
    sbit  DR14_SPI2_DR_bit at SPI2_DR.B14;
    sbit  DR15_SPI2_DR_bit at SPI2_DR.B15;

sfr unsigned long   volatile SPI2_CRCPR           absolute 0x40003810;
    sbit  CRCPOLY0_SPI2_CRCPR_bit at SPI2_CRCPR.B0;
    sbit  CRCPOLY1_SPI2_CRCPR_bit at SPI2_CRCPR.B1;
    sbit  CRCPOLY2_SPI2_CRCPR_bit at SPI2_CRCPR.B2;
    sbit  CRCPOLY3_SPI2_CRCPR_bit at SPI2_CRCPR.B3;
    sbit  CRCPOLY4_SPI2_CRCPR_bit at SPI2_CRCPR.B4;
    sbit  CRCPOLY5_SPI2_CRCPR_bit at SPI2_CRCPR.B5;
    sbit  CRCPOLY6_SPI2_CRCPR_bit at SPI2_CRCPR.B6;
    sbit  CRCPOLY7_SPI2_CRCPR_bit at SPI2_CRCPR.B7;
    sbit  CRCPOLY8_SPI2_CRCPR_bit at SPI2_CRCPR.B8;
    sbit  CRCPOLY9_SPI2_CRCPR_bit at SPI2_CRCPR.B9;
    sbit  CRCPOLY10_SPI2_CRCPR_bit at SPI2_CRCPR.B10;
    sbit  CRCPOLY11_SPI2_CRCPR_bit at SPI2_CRCPR.B11;
    sbit  CRCPOLY12_SPI2_CRCPR_bit at SPI2_CRCPR.B12;
    sbit  CRCPOLY13_SPI2_CRCPR_bit at SPI2_CRCPR.B13;
    sbit  CRCPOLY14_SPI2_CRCPR_bit at SPI2_CRCPR.B14;
    sbit  CRCPOLY15_SPI2_CRCPR_bit at SPI2_CRCPR.B15;

sfr unsigned long   volatile SPI2_RXCRCR          absolute 0x40003814;
    sbit  RxCRC0_SPI2_RXCRCR_bit at SPI2_RXCRCR.B0;
    sbit  RxCRC1_SPI2_RXCRCR_bit at SPI2_RXCRCR.B1;
    sbit  RxCRC2_SPI2_RXCRCR_bit at SPI2_RXCRCR.B2;
    sbit  RxCRC3_SPI2_RXCRCR_bit at SPI2_RXCRCR.B3;
    sbit  RxCRC4_SPI2_RXCRCR_bit at SPI2_RXCRCR.B4;
    sbit  RxCRC5_SPI2_RXCRCR_bit at SPI2_RXCRCR.B5;
    sbit  RxCRC6_SPI2_RXCRCR_bit at SPI2_RXCRCR.B6;
    sbit  RxCRC7_SPI2_RXCRCR_bit at SPI2_RXCRCR.B7;
    sbit  RxCRC8_SPI2_RXCRCR_bit at SPI2_RXCRCR.B8;
    sbit  RxCRC9_SPI2_RXCRCR_bit at SPI2_RXCRCR.B9;
    sbit  RxCRC10_SPI2_RXCRCR_bit at SPI2_RXCRCR.B10;
    sbit  RxCRC11_SPI2_RXCRCR_bit at SPI2_RXCRCR.B11;
    sbit  RxCRC12_SPI2_RXCRCR_bit at SPI2_RXCRCR.B12;
    sbit  RxCRC13_SPI2_RXCRCR_bit at SPI2_RXCRCR.B13;
    sbit  RxCRC14_SPI2_RXCRCR_bit at SPI2_RXCRCR.B14;
    sbit  RxCRC15_SPI2_RXCRCR_bit at SPI2_RXCRCR.B15;

sfr unsigned long   volatile SPI2_TXCRCR          absolute 0x40003818;
    sbit  TxCRC0_SPI2_TXCRCR_bit at SPI2_TXCRCR.B0;
    sbit  TxCRC1_SPI2_TXCRCR_bit at SPI2_TXCRCR.B1;
    sbit  TxCRC2_SPI2_TXCRCR_bit at SPI2_TXCRCR.B2;
    sbit  TxCRC3_SPI2_TXCRCR_bit at SPI2_TXCRCR.B3;
    sbit  TxCRC4_SPI2_TXCRCR_bit at SPI2_TXCRCR.B4;
    sbit  TxCRC5_SPI2_TXCRCR_bit at SPI2_TXCRCR.B5;
    sbit  TxCRC6_SPI2_TXCRCR_bit at SPI2_TXCRCR.B6;
    sbit  TxCRC7_SPI2_TXCRCR_bit at SPI2_TXCRCR.B7;
    sbit  TxCRC8_SPI2_TXCRCR_bit at SPI2_TXCRCR.B8;
    sbit  TxCRC9_SPI2_TXCRCR_bit at SPI2_TXCRCR.B9;
    sbit  TxCRC10_SPI2_TXCRCR_bit at SPI2_TXCRCR.B10;
    sbit  TxCRC11_SPI2_TXCRCR_bit at SPI2_TXCRCR.B11;
    sbit  TxCRC12_SPI2_TXCRCR_bit at SPI2_TXCRCR.B12;
    sbit  TxCRC13_SPI2_TXCRCR_bit at SPI2_TXCRCR.B13;
    sbit  TxCRC14_SPI2_TXCRCR_bit at SPI2_TXCRCR.B14;
    sbit  TxCRC15_SPI2_TXCRCR_bit at SPI2_TXCRCR.B15;

sfr unsigned long   volatile SPI2_I2SCFGR         absolute 0x4000381C;
    sbit  CHLEN_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B0;
    sbit  DATLEN0_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B1;
    sbit  DATLEN1_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B2;
    sbit  CKPOL_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B3;
    sbit  I2SSTD0_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B4;
    sbit  I2SSTD1_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B5;
    sbit  PCMSYNC_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B7;
    sbit  I2SCFG0_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B8;
    sbit  I2SCFG1_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B9;
    sbit  SE2_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B10;
    sbit  I2SMOD_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B11;

sfr unsigned long   volatile SPI2_I2SPR           absolute 0x40003820;
    sbit  I2SDIV0_SPI2_I2SPR_bit at SPI2_I2SPR.B0;
    sbit  I2SDIV1_SPI2_I2SPR_bit at SPI2_I2SPR.B1;
    sbit  I2SDIV2_SPI2_I2SPR_bit at SPI2_I2SPR.B2;
    sbit  I2SDIV3_SPI2_I2SPR_bit at SPI2_I2SPR.B3;
    sbit  I2SDIV4_SPI2_I2SPR_bit at SPI2_I2SPR.B4;
    sbit  I2SDIV5_SPI2_I2SPR_bit at SPI2_I2SPR.B5;
    sbit  I2SDIV6_SPI2_I2SPR_bit at SPI2_I2SPR.B6;
    sbit  I2SDIV7_SPI2_I2SPR_bit at SPI2_I2SPR.B7;
    sbit  ODD_SPI2_I2SPR_bit at SPI2_I2SPR.B8;
    sbit  MCKOE_SPI2_I2SPR_bit at SPI2_I2SPR.B9;

sfr unsigned long   volatile TIM1_CR1             absolute 0x40012C00;
    sbit  CEN_TIM1_CR1_bit at TIM1_CR1.B0;
    sbit  OPM_TIM1_CR1_bit at TIM1_CR1.B3;
    sbit  UDIS_TIM1_CR1_bit at TIM1_CR1.B1;
    sbit  URS_TIM1_CR1_bit at TIM1_CR1.B2;
    sbit  DIR_TIM1_CR1_bit at TIM1_CR1.B4;
    const register unsigned short int CMS0 = 5;
    sbit  CMS0_bit at TIM1_CR1.B5;
    const register unsigned short int CMS1 = 6;
    sbit  CMS1_bit at TIM1_CR1.B6;
    sbit  ARPE_TIM1_CR1_bit at TIM1_CR1.B7;
    sbit  CKD0_TIM1_CR1_bit at TIM1_CR1.B8;
    sbit  CKD1_TIM1_CR1_bit at TIM1_CR1.B9;
    sbit  UIFREMAP_TIM1_CR1_bit at TIM1_CR1.B11;

sfr unsigned long   volatile TIM1_CR2             absolute 0x40012C04;
    const register unsigned short int MMS20 = 20;
    sbit  MMS20_bit at TIM1_CR2.B20;
    const register unsigned short int MMS21 = 21;
    sbit  MMS21_bit at TIM1_CR2.B21;
    const register unsigned short int MMS22 = 22;
    sbit  MMS22_bit at TIM1_CR2.B22;
    const register unsigned short int MMS23 = 23;
    sbit  MMS23_bit at TIM1_CR2.B23;
    const register unsigned short int OIS6 = 18;
    sbit  OIS6_bit at TIM1_CR2.B18;
    const register unsigned short int OIS5 = 16;
    sbit  OIS5_bit at TIM1_CR2.B16;
    const register unsigned short int OIS4 = 14;
    sbit  OIS4_bit at TIM1_CR2.B14;
    const register unsigned short int OIS3N = 13;
    sbit  OIS3N_bit at TIM1_CR2.B13;
    const register unsigned short int OIS3 = 12;
    sbit  OIS3_bit at TIM1_CR2.B12;
    const register unsigned short int OIS2N = 11;
    sbit  OIS2N_bit at TIM1_CR2.B11;
    const register unsigned short int OIS2 = 10;
    sbit  OIS2_bit at TIM1_CR2.B10;
    sbit  OIS1N_TIM1_CR2_bit at TIM1_CR2.B9;
    sbit  OIS1_TIM1_CR2_bit at TIM1_CR2.B8;
    const register unsigned short int TI1S = 7;
    sbit  TI1S_bit at TIM1_CR2.B7;
    const register unsigned short int MMS0 = 4;
    sbit  MMS0_bit at TIM1_CR2.B4;
    const register unsigned short int MMS1 = 5;
    sbit  MMS1_bit at TIM1_CR2.B5;
    const register unsigned short int MMS2 = 6;
    sbit  MMS2_bit at TIM1_CR2.B6;
    sbit  CCDS_TIM1_CR2_bit at TIM1_CR2.B3;
    sbit  CCUS_TIM1_CR2_bit at TIM1_CR2.B2;
    sbit  CCPC_TIM1_CR2_bit at TIM1_CR2.B0;

sfr unsigned long   volatile TIM1_SMCR            absolute 0x40012C08;
    const register unsigned short int SMS0 = 0;
    sbit  SMS0_bit at TIM1_SMCR.B0;
    const register unsigned short int SMS1 = 1;
    sbit  SMS1_bit at TIM1_SMCR.B1;
    const register unsigned short int SMS2 = 2;
    sbit  SMS2_bit at TIM1_SMCR.B2;
    const register unsigned short int OCCS = 3;
    sbit  OCCS_bit at TIM1_SMCR.B3;
    const register unsigned short int TS_40 = 4;
    sbit  TS_40_bit at TIM1_SMCR.B4;
    const register unsigned short int TS_41 = 5;
    sbit  TS_41_bit at TIM1_SMCR.B5;
    const register unsigned short int TS_42 = 6;
    sbit  TS_42_bit at TIM1_SMCR.B6;
    const register unsigned short int MSM = 7;
    sbit  MSM_bit at TIM1_SMCR.B7;
    const register unsigned short int ETF0 = 8;
    sbit  ETF0_bit at TIM1_SMCR.B8;
    const register unsigned short int ETF1 = 9;
    sbit  ETF1_bit at TIM1_SMCR.B9;
    const register unsigned short int ETF2 = 10;
    sbit  ETF2_bit at TIM1_SMCR.B10;
    const register unsigned short int ETF3 = 11;
    sbit  ETF3_bit at TIM1_SMCR.B11;
    const register unsigned short int ETPS0 = 12;
    sbit  ETPS0_bit at TIM1_SMCR.B12;
    const register unsigned short int ETPS1 = 13;
    sbit  ETPS1_bit at TIM1_SMCR.B13;
    const register unsigned short int ECE = 14;
    sbit  ECE_bit at TIM1_SMCR.B14;
    const register unsigned short int ETP = 15;
    sbit  ETP_bit at TIM1_SMCR.B15;
    const register unsigned short int SMS_3 = 16;
    sbit  SMS_3_bit at TIM1_SMCR.B16;
    const register unsigned short int TS0 = 20;
    sbit  TS0_bit at TIM1_SMCR.B20;
    const register unsigned short int TS1 = 21;
    sbit  TS1_bit at TIM1_SMCR.B21;

sfr unsigned long   volatile TIM1_DIER            absolute 0x40012C0C;
    sbit  UIE_TIM1_DIER_bit at TIM1_DIER.B0;
    sbit  CC1IE_TIM1_DIER_bit at TIM1_DIER.B1;
    const register unsigned short int CC2IE = 2;
    sbit  CC2IE_bit at TIM1_DIER.B2;
    const register unsigned short int CC3IE = 3;
    sbit  CC3IE_bit at TIM1_DIER.B3;
    const register unsigned short int CC4IE = 4;
    sbit  CC4IE_bit at TIM1_DIER.B4;
    sbit  COMIE_TIM1_DIER_bit at TIM1_DIER.B5;
    const register unsigned short int TIE = 6;
    sbit  TIE_bit at TIM1_DIER.B6;
    sbit  BIE_TIM1_DIER_bit at TIM1_DIER.B7;
    sbit  UDE_TIM1_DIER_bit at TIM1_DIER.B8;
    sbit  CC1DE_TIM1_DIER_bit at TIM1_DIER.B9;
    const register unsigned short int CC2DE = 10;
    sbit  CC2DE_bit at TIM1_DIER.B10;
    const register unsigned short int CC3DE = 11;
    sbit  CC3DE_bit at TIM1_DIER.B11;
    const register unsigned short int CC4DE = 12;
    sbit  CC4DE_bit at TIM1_DIER.B12;
    sbit  COMDE_TIM1_DIER_bit at TIM1_DIER.B13;
    const register unsigned short int TDE = 14;
    sbit  TDE_bit at TIM1_DIER.B14;

sfr unsigned long   volatile TIM1_SR              absolute 0x40012C10;
    sbit  UIF_TIM1_SR_bit at TIM1_SR.B0;
    sbit  CC1IF_TIM1_SR_bit at TIM1_SR.B1;
    const register unsigned short int CC2IF = 2;
    sbit  CC2IF_bit at TIM1_SR.B2;
    const register unsigned short int CC3IF = 3;
    sbit  CC3IF_bit at TIM1_SR.B3;
    const register unsigned short int CC4IF = 4;
    sbit  CC4IF_bit at TIM1_SR.B4;
    sbit  COMIF_TIM1_SR_bit at TIM1_SR.B5;
    const register unsigned short int TIF = 6;
    sbit  TIF_bit at TIM1_SR.B6;
    sbit  BIF_TIM1_SR_bit at TIM1_SR.B7;
    const register unsigned short int B2IF = 8;
    sbit  B2IF_bit at TIM1_SR.B8;
    sbit  CC1OF_TIM1_SR_bit at TIM1_SR.B9;
    const register unsigned short int CC2OF = 10;
    sbit  CC2OF_bit at TIM1_SR.B10;
    const register unsigned short int CC3OF = 11;
    sbit  CC3OF_bit at TIM1_SR.B11;
    const register unsigned short int CC4OF = 12;
    sbit  CC4OF_bit at TIM1_SR.B12;
    const register unsigned short int SBIF = 13;
    sbit  SBIF_bit at TIM1_SR.B13;
    const register unsigned short int CC5IF = 16;
    sbit  CC5IF_bit at TIM1_SR.B16;
    const register unsigned short int CC6IF = 17;
    sbit  CC6IF_bit at TIM1_SR.B17;

sfr unsigned long   volatile TIM1_EGR             absolute 0x40012C14;
    sbit  UG_TIM1_EGR_bit at TIM1_EGR.B0;
    sbit  CC1G_TIM1_EGR_bit at TIM1_EGR.B1;
    const register unsigned short int CC2G = 2;
    sbit  CC2G_bit at TIM1_EGR.B2;
    const register unsigned short int CC3G = 3;
    sbit  CC3G_bit at TIM1_EGR.B3;
    const register unsigned short int CC4G = 4;
    sbit  CC4G_bit at TIM1_EGR.B4;
    sbit  COMG_TIM1_EGR_bit at TIM1_EGR.B5;
    const register unsigned short int TG = 6;
    sbit  TG_bit at TIM1_EGR.B6;
    sbit  BG_TIM1_EGR_bit at TIM1_EGR.B7;
    const register unsigned short int B2G = 8;
    sbit  B2G_bit at TIM1_EGR.B8;

sfr unsigned long   volatile TIM1_CCMR1_Output    absolute 0x40012C18;
    sbit  CC1S0_TIM1_CCMR1_Output_bit at TIM1_CCMR1_Output.B0;
    sbit  CC1S1_TIM1_CCMR1_Output_bit at TIM1_CCMR1_Output.B1;
    sbit  OC1FE_TIM1_CCMR1_Output_bit at TIM1_CCMR1_Output.B2;
    sbit  OC1PE_TIM1_CCMR1_Output_bit at TIM1_CCMR1_Output.B3;
    sbit  OC1M0_TIM1_CCMR1_Output_bit at TIM1_CCMR1_Output.B4;
    sbit  OC1M1_TIM1_CCMR1_Output_bit at TIM1_CCMR1_Output.B5;
    sbit  OC1M2_TIM1_CCMR1_Output_bit at TIM1_CCMR1_Output.B6;
    const register unsigned short int OC1CE = 7;
    sbit  OC1CE_bit at TIM1_CCMR1_Output.B7;
    const register unsigned short int CC2S0 = 8;
    sbit  CC2S0_bit at TIM1_CCMR1_Output.B8;
    const register unsigned short int CC2S1 = 9;
    sbit  CC2S1_bit at TIM1_CCMR1_Output.B9;
    const register unsigned short int OC2FE = 10;
    sbit  OC2FE_bit at TIM1_CCMR1_Output.B10;
    const register unsigned short int OC2PE = 11;
    sbit  OC2PE_bit at TIM1_CCMR1_Output.B11;
    const register unsigned short int OC2M0 = 12;
    sbit  OC2M0_bit at TIM1_CCMR1_Output.B12;
    const register unsigned short int OC2M1 = 13;
    sbit  OC2M1_bit at TIM1_CCMR1_Output.B13;
    const register unsigned short int OC2M2 = 14;
    sbit  OC2M2_bit at TIM1_CCMR1_Output.B14;
    const register unsigned short int OC2CE = 15;
    sbit  OC2CE_bit at TIM1_CCMR1_Output.B15;
    const register unsigned short int OC1M_3 = 16;
    sbit  OC1M_3_bit at TIM1_CCMR1_Output.B16;
    const register unsigned short int OC2M_3 = 24;
    sbit  OC2M_3_bit at TIM1_CCMR1_Output.B24;

sfr unsigned long   volatile TIM1_CCMR1_Input     absolute 0x40012C18;
    sbit  CC1S0_TIM1_CCMR1_Input_bit at TIM1_CCMR1_Input.B0;
    sbit  CC1S1_TIM1_CCMR1_Input_bit at TIM1_CCMR1_Input.B1;
    sbit  OC1FE_TIM1_CCMR1_Input_bit at TIM1_CCMR1_Input.B2;
    sbit  OC1PE_TIM1_CCMR1_Input_bit at TIM1_CCMR1_Input.B3;
    sbit  OC1M0_TIM1_CCMR1_Input_bit at TIM1_CCMR1_Input.B4;
    sbit  OC1M1_TIM1_CCMR1_Input_bit at TIM1_CCMR1_Input.B5;
    sbit  OC1M2_TIM1_CCMR1_Input_bit at TIM1_CCMR1_Input.B6;
    sbit  OC1CE_TIM1_CCMR1_Input_bit at TIM1_CCMR1_Input.B7;
    sbit  CC2S0_TIM1_CCMR1_Input_bit at TIM1_CCMR1_Input.B8;
    sbit  CC2S1_TIM1_CCMR1_Input_bit at TIM1_CCMR1_Input.B9;
    sbit  OC2FE_TIM1_CCMR1_Input_bit at TIM1_CCMR1_Input.B10;
    sbit  OC2PE_TIM1_CCMR1_Input_bit at TIM1_CCMR1_Input.B11;
    sbit  OC2M0_TIM1_CCMR1_Input_bit at TIM1_CCMR1_Input.B12;
    sbit  OC2M1_TIM1_CCMR1_Input_bit at TIM1_CCMR1_Input.B13;
    sbit  OC2M2_TIM1_CCMR1_Input_bit at TIM1_CCMR1_Input.B14;
    sbit  OC2CE_TIM1_CCMR1_Input_bit at TIM1_CCMR1_Input.B15;

sfr unsigned long   volatile TIM1_CCMR2_Output    absolute 0x40012C1C;
    const register unsigned short int CC3S0 = 0;
    sbit  CC3S0_bit at TIM1_CCMR2_Output.B0;
    const register unsigned short int CC3S1 = 1;
    sbit  CC3S1_bit at TIM1_CCMR2_Output.B1;
    const register unsigned short int OC3FE = 2;
    sbit  OC3FE_bit at TIM1_CCMR2_Output.B2;
    const register unsigned short int OC3PE = 3;
    sbit  OC3PE_bit at TIM1_CCMR2_Output.B3;
    const register unsigned short int OC3M0 = 4;
    sbit  OC3M0_bit at TIM1_CCMR2_Output.B4;
    const register unsigned short int OC3M1 = 5;
    sbit  OC3M1_bit at TIM1_CCMR2_Output.B5;
    const register unsigned short int OC3M2 = 6;
    sbit  OC3M2_bit at TIM1_CCMR2_Output.B6;
    const register unsigned short int OC3CE = 7;
    sbit  OC3CE_bit at TIM1_CCMR2_Output.B7;
    const register unsigned short int CC4S0 = 8;
    sbit  CC4S0_bit at TIM1_CCMR2_Output.B8;
    const register unsigned short int CC4S1 = 9;
    sbit  CC4S1_bit at TIM1_CCMR2_Output.B9;
    const register unsigned short int OC4FE = 10;
    sbit  OC4FE_bit at TIM1_CCMR2_Output.B10;
    const register unsigned short int OC4PE = 11;
    sbit  OC4PE_bit at TIM1_CCMR2_Output.B11;
    const register unsigned short int OC4M0 = 12;
    sbit  OC4M0_bit at TIM1_CCMR2_Output.B12;
    const register unsigned short int OC4M1 = 13;
    sbit  OC4M1_bit at TIM1_CCMR2_Output.B13;
    const register unsigned short int OC4M2 = 14;
    sbit  OC4M2_bit at TIM1_CCMR2_Output.B14;
    const register unsigned short int OC4CE = 15;
    sbit  OC4CE_bit at TIM1_CCMR2_Output.B15;
    const register unsigned short int OC3M_3 = 16;
    sbit  OC3M_3_bit at TIM1_CCMR2_Output.B16;
    const register unsigned short int OC4M_3 = 24;
    sbit  OC4M_3_bit at TIM1_CCMR2_Output.B24;

sfr unsigned long   volatile TIM1_CCMR2_Input     absolute 0x40012C1C;
    sbit  CC3S0_TIM1_CCMR2_Input_bit at TIM1_CCMR2_Input.B0;
    sbit  CC3S1_TIM1_CCMR2_Input_bit at TIM1_CCMR2_Input.B1;
    sbit  OC3FE_TIM1_CCMR2_Input_bit at TIM1_CCMR2_Input.B2;
    sbit  OC3PE_TIM1_CCMR2_Input_bit at TIM1_CCMR2_Input.B3;
    sbit  OC3M0_TIM1_CCMR2_Input_bit at TIM1_CCMR2_Input.B4;
    sbit  OC3M1_TIM1_CCMR2_Input_bit at TIM1_CCMR2_Input.B5;
    sbit  OC3M2_TIM1_CCMR2_Input_bit at TIM1_CCMR2_Input.B6;
    sbit  OC3CE_TIM1_CCMR2_Input_bit at TIM1_CCMR2_Input.B7;
    sbit  CC4S0_TIM1_CCMR2_Input_bit at TIM1_CCMR2_Input.B8;
    sbit  CC4S1_TIM1_CCMR2_Input_bit at TIM1_CCMR2_Input.B9;
    sbit  OC4FE_TIM1_CCMR2_Input_bit at TIM1_CCMR2_Input.B10;
    sbit  OC4PE_TIM1_CCMR2_Input_bit at TIM1_CCMR2_Input.B11;
    sbit  OC4M0_TIM1_CCMR2_Input_bit at TIM1_CCMR2_Input.B12;
    sbit  OC4M1_TIM1_CCMR2_Input_bit at TIM1_CCMR2_Input.B13;
    sbit  OC4M2_TIM1_CCMR2_Input_bit at TIM1_CCMR2_Input.B14;
    sbit  OC4CE_TIM1_CCMR2_Input_bit at TIM1_CCMR2_Input.B15;

sfr unsigned long   volatile TIM1_CCER            absolute 0x40012C20;
    sbit  CC1E_TIM1_CCER_bit at TIM1_CCER.B0;
    sbit  CC1P_TIM1_CCER_bit at TIM1_CCER.B1;
    sbit  CC1NE_TIM1_CCER_bit at TIM1_CCER.B2;
    sbit  CC1NP_TIM1_CCER_bit at TIM1_CCER.B3;
    const register unsigned short int CC2E = 4;
    sbit  CC2E_bit at TIM1_CCER.B4;
    const register unsigned short int CC2P = 5;
    sbit  CC2P_bit at TIM1_CCER.B5;
    const register unsigned short int CC2NE = 6;
    sbit  CC2NE_bit at TIM1_CCER.B6;
    const register unsigned short int CC2NP = 7;
    sbit  CC2NP_bit at TIM1_CCER.B7;
    const register unsigned short int CC3E = 8;
    sbit  CC3E_bit at TIM1_CCER.B8;
    const register unsigned short int CC3P = 9;
    sbit  CC3P_bit at TIM1_CCER.B9;
    const register unsigned short int CC3NE = 10;
    sbit  CC3NE_bit at TIM1_CCER.B10;
    const register unsigned short int CC3NP = 11;
    sbit  CC3NP_bit at TIM1_CCER.B11;
    const register unsigned short int CC4E = 12;
    sbit  CC4E_bit at TIM1_CCER.B12;
    const register unsigned short int CC4P = 13;
    sbit  CC4P_bit at TIM1_CCER.B13;
    const register unsigned short int CC4NP = 15;
    sbit  CC4NP_bit at TIM1_CCER.B15;
    const register unsigned short int CC5E = 16;
    sbit  CC5E_bit at TIM1_CCER.B16;
    const register unsigned short int CC5P = 17;
    sbit  CC5P_bit at TIM1_CCER.B17;
    const register unsigned short int CC6E = 20;
    sbit  CC6E_bit at TIM1_CCER.B20;
    const register unsigned short int CC6P = 21;
    sbit  CC6P_bit at TIM1_CCER.B21;

sfr unsigned long   volatile TIM1_CNT             absolute 0x40012C24;
    sbit  CNT0_TIM1_CNT_bit at TIM1_CNT.B0;
    sbit  CNT1_TIM1_CNT_bit at TIM1_CNT.B1;
    sbit  CNT2_TIM1_CNT_bit at TIM1_CNT.B2;
    sbit  CNT3_TIM1_CNT_bit at TIM1_CNT.B3;
    sbit  CNT4_TIM1_CNT_bit at TIM1_CNT.B4;
    sbit  CNT5_TIM1_CNT_bit at TIM1_CNT.B5;
    sbit  CNT6_TIM1_CNT_bit at TIM1_CNT.B6;
    sbit  CNT7_TIM1_CNT_bit at TIM1_CNT.B7;
    sbit  CNT8_TIM1_CNT_bit at TIM1_CNT.B8;
    sbit  CNT9_TIM1_CNT_bit at TIM1_CNT.B9;
    sbit  CNT10_TIM1_CNT_bit at TIM1_CNT.B10;
    sbit  CNT11_TIM1_CNT_bit at TIM1_CNT.B11;
    sbit  CNT12_TIM1_CNT_bit at TIM1_CNT.B12;
    sbit  CNT13_TIM1_CNT_bit at TIM1_CNT.B13;
    sbit  CNT14_TIM1_CNT_bit at TIM1_CNT.B14;
    sbit  CNT15_TIM1_CNT_bit at TIM1_CNT.B15;
    sbit  UIFCPY_TIM1_CNT_bit at TIM1_CNT.B31;

sfr unsigned long   volatile TIM1_PSC             absolute 0x40012C28;
    sbit  PSC0_TIM1_PSC_bit at TIM1_PSC.B0;
    sbit  PSC1_TIM1_PSC_bit at TIM1_PSC.B1;
    sbit  PSC2_TIM1_PSC_bit at TIM1_PSC.B2;
    sbit  PSC3_TIM1_PSC_bit at TIM1_PSC.B3;
    sbit  PSC4_TIM1_PSC_bit at TIM1_PSC.B4;
    sbit  PSC5_TIM1_PSC_bit at TIM1_PSC.B5;
    sbit  PSC6_TIM1_PSC_bit at TIM1_PSC.B6;
    sbit  PSC7_TIM1_PSC_bit at TIM1_PSC.B7;
    sbit  PSC8_TIM1_PSC_bit at TIM1_PSC.B8;
    sbit  PSC9_TIM1_PSC_bit at TIM1_PSC.B9;
    sbit  PSC10_TIM1_PSC_bit at TIM1_PSC.B10;
    sbit  PSC11_TIM1_PSC_bit at TIM1_PSC.B11;
    sbit  PSC12_TIM1_PSC_bit at TIM1_PSC.B12;
    sbit  PSC13_TIM1_PSC_bit at TIM1_PSC.B13;
    sbit  PSC14_TIM1_PSC_bit at TIM1_PSC.B14;
    sbit  PSC15_TIM1_PSC_bit at TIM1_PSC.B15;

sfr unsigned long   volatile TIM1_ARR             absolute 0x40012C2C;
    sbit  ARR0_TIM1_ARR_bit at TIM1_ARR.B0;
    sbit  ARR1_TIM1_ARR_bit at TIM1_ARR.B1;
    sbit  ARR2_TIM1_ARR_bit at TIM1_ARR.B2;
    sbit  ARR3_TIM1_ARR_bit at TIM1_ARR.B3;
    sbit  ARR4_TIM1_ARR_bit at TIM1_ARR.B4;
    sbit  ARR5_TIM1_ARR_bit at TIM1_ARR.B5;
    sbit  ARR6_TIM1_ARR_bit at TIM1_ARR.B6;
    sbit  ARR7_TIM1_ARR_bit at TIM1_ARR.B7;
    sbit  ARR8_TIM1_ARR_bit at TIM1_ARR.B8;
    sbit  ARR9_TIM1_ARR_bit at TIM1_ARR.B9;
    sbit  ARR10_TIM1_ARR_bit at TIM1_ARR.B10;
    sbit  ARR11_TIM1_ARR_bit at TIM1_ARR.B11;
    sbit  ARR12_TIM1_ARR_bit at TIM1_ARR.B12;
    sbit  ARR13_TIM1_ARR_bit at TIM1_ARR.B13;
    sbit  ARR14_TIM1_ARR_bit at TIM1_ARR.B14;
    sbit  ARR15_TIM1_ARR_bit at TIM1_ARR.B15;

sfr unsigned long   volatile TIM1_RCR             absolute 0x40012C30;
    sbit  REP0_TIM1_RCR_bit at TIM1_RCR.B0;
    sbit  REP1_TIM1_RCR_bit at TIM1_RCR.B1;
    sbit  REP2_TIM1_RCR_bit at TIM1_RCR.B2;
    sbit  REP3_TIM1_RCR_bit at TIM1_RCR.B3;
    sbit  REP4_TIM1_RCR_bit at TIM1_RCR.B4;
    sbit  REP5_TIM1_RCR_bit at TIM1_RCR.B5;
    sbit  REP6_TIM1_RCR_bit at TIM1_RCR.B6;
    sbit  REP7_TIM1_RCR_bit at TIM1_RCR.B7;
    const register unsigned short int REP8 = 8;
    sbit  REP8_bit at TIM1_RCR.B8;
    const register unsigned short int REP9 = 9;
    sbit  REP9_bit at TIM1_RCR.B9;
    const register unsigned short int REP10 = 10;
    sbit  REP10_bit at TIM1_RCR.B10;
    const register unsigned short int REP11 = 11;
    sbit  REP11_bit at TIM1_RCR.B11;
    const register unsigned short int REP12 = 12;
    sbit  REP12_bit at TIM1_RCR.B12;
    const register unsigned short int REP13 = 13;
    sbit  REP13_bit at TIM1_RCR.B13;
    const register unsigned short int REP14 = 14;
    sbit  REP14_bit at TIM1_RCR.B14;
    const register unsigned short int REP15 = 15;
    sbit  REP15_bit at TIM1_RCR.B15;

sfr unsigned long   volatile TIM1_CCR1            absolute 0x40012C34;
    sbit  CCR10_TIM1_CCR1_bit at TIM1_CCR1.B0;
    sbit  CCR11_TIM1_CCR1_bit at TIM1_CCR1.B1;
    sbit  CCR12_TIM1_CCR1_bit at TIM1_CCR1.B2;
    sbit  CCR13_TIM1_CCR1_bit at TIM1_CCR1.B3;
    sbit  CCR14_TIM1_CCR1_bit at TIM1_CCR1.B4;
    sbit  CCR15_TIM1_CCR1_bit at TIM1_CCR1.B5;
    sbit  CCR16_TIM1_CCR1_bit at TIM1_CCR1.B6;
    sbit  CCR17_TIM1_CCR1_bit at TIM1_CCR1.B7;
    sbit  CCR18_TIM1_CCR1_bit at TIM1_CCR1.B8;
    sbit  CCR19_TIM1_CCR1_bit at TIM1_CCR1.B9;
    sbit  CCR110_TIM1_CCR1_bit at TIM1_CCR1.B10;
    sbit  CCR111_TIM1_CCR1_bit at TIM1_CCR1.B11;
    sbit  CCR112_TIM1_CCR1_bit at TIM1_CCR1.B12;
    sbit  CCR113_TIM1_CCR1_bit at TIM1_CCR1.B13;
    sbit  CCR114_TIM1_CCR1_bit at TIM1_CCR1.B14;
    sbit  CCR115_TIM1_CCR1_bit at TIM1_CCR1.B15;

sfr unsigned long   volatile TIM1_CCR2            absolute 0x40012C38;
    const register unsigned short int CCR20 = 0;
    sbit  CCR20_bit at TIM1_CCR2.B0;
    const register unsigned short int CCR21 = 1;
    sbit  CCR21_bit at TIM1_CCR2.B1;
    const register unsigned short int CCR22 = 2;
    sbit  CCR22_bit at TIM1_CCR2.B2;
    const register unsigned short int CCR23 = 3;
    sbit  CCR23_bit at TIM1_CCR2.B3;
    const register unsigned short int CCR24 = 4;
    sbit  CCR24_bit at TIM1_CCR2.B4;
    const register unsigned short int CCR25 = 5;
    sbit  CCR25_bit at TIM1_CCR2.B5;
    const register unsigned short int CCR26 = 6;
    sbit  CCR26_bit at TIM1_CCR2.B6;
    const register unsigned short int CCR27 = 7;
    sbit  CCR27_bit at TIM1_CCR2.B7;
    const register unsigned short int CCR28 = 8;
    sbit  CCR28_bit at TIM1_CCR2.B8;
    const register unsigned short int CCR29 = 9;
    sbit  CCR29_bit at TIM1_CCR2.B9;
    const register unsigned short int CCR210 = 10;
    sbit  CCR210_bit at TIM1_CCR2.B10;
    const register unsigned short int CCR211 = 11;
    sbit  CCR211_bit at TIM1_CCR2.B11;
    const register unsigned short int CCR212 = 12;
    sbit  CCR212_bit at TIM1_CCR2.B12;
    const register unsigned short int CCR213 = 13;
    sbit  CCR213_bit at TIM1_CCR2.B13;
    const register unsigned short int CCR214 = 14;
    sbit  CCR214_bit at TIM1_CCR2.B14;
    const register unsigned short int CCR215 = 15;
    sbit  CCR215_bit at TIM1_CCR2.B15;

sfr unsigned long   volatile TIM1_CCR3            absolute 0x40012C3C;
    const register unsigned short int CCR30 = 0;
    sbit  CCR30_bit at TIM1_CCR3.B0;
    const register unsigned short int CCR31 = 1;
    sbit  CCR31_bit at TIM1_CCR3.B1;
    const register unsigned short int CCR32 = 2;
    sbit  CCR32_bit at TIM1_CCR3.B2;
    const register unsigned short int CCR33 = 3;
    sbit  CCR33_bit at TIM1_CCR3.B3;
    const register unsigned short int CCR34 = 4;
    sbit  CCR34_bit at TIM1_CCR3.B4;
    const register unsigned short int CCR35 = 5;
    sbit  CCR35_bit at TIM1_CCR3.B5;
    const register unsigned short int CCR36 = 6;
    sbit  CCR36_bit at TIM1_CCR3.B6;
    const register unsigned short int CCR37 = 7;
    sbit  CCR37_bit at TIM1_CCR3.B7;
    const register unsigned short int CCR38 = 8;
    sbit  CCR38_bit at TIM1_CCR3.B8;
    const register unsigned short int CCR39 = 9;
    sbit  CCR39_bit at TIM1_CCR3.B9;
    const register unsigned short int CCR310 = 10;
    sbit  CCR310_bit at TIM1_CCR3.B10;
    const register unsigned short int CCR311 = 11;
    sbit  CCR311_bit at TIM1_CCR3.B11;
    const register unsigned short int CCR312 = 12;
    sbit  CCR312_bit at TIM1_CCR3.B12;
    const register unsigned short int CCR313 = 13;
    sbit  CCR313_bit at TIM1_CCR3.B13;
    const register unsigned short int CCR314 = 14;
    sbit  CCR314_bit at TIM1_CCR3.B14;
    const register unsigned short int CCR315 = 15;
    sbit  CCR315_bit at TIM1_CCR3.B15;

sfr unsigned long   volatile TIM1_CCR4            absolute 0x40012C40;
    const register unsigned short int CCR40 = 0;
    sbit  CCR40_bit at TIM1_CCR4.B0;
    const register unsigned short int CCR41 = 1;
    sbit  CCR41_bit at TIM1_CCR4.B1;
    const register unsigned short int CCR42 = 2;
    sbit  CCR42_bit at TIM1_CCR4.B2;
    const register unsigned short int CCR43 = 3;
    sbit  CCR43_bit at TIM1_CCR4.B3;
    const register unsigned short int CCR44 = 4;
    sbit  CCR44_bit at TIM1_CCR4.B4;
    const register unsigned short int CCR45 = 5;
    sbit  CCR45_bit at TIM1_CCR4.B5;
    const register unsigned short int CCR46 = 6;
    sbit  CCR46_bit at TIM1_CCR4.B6;
    const register unsigned short int CCR47 = 7;
    sbit  CCR47_bit at TIM1_CCR4.B7;
    const register unsigned short int CCR48 = 8;
    sbit  CCR48_bit at TIM1_CCR4.B8;
    const register unsigned short int CCR49 = 9;
    sbit  CCR49_bit at TIM1_CCR4.B9;
    const register unsigned short int CCR410 = 10;
    sbit  CCR410_bit at TIM1_CCR4.B10;
    const register unsigned short int CCR411 = 11;
    sbit  CCR411_bit at TIM1_CCR4.B11;
    const register unsigned short int CCR412 = 12;
    sbit  CCR412_bit at TIM1_CCR4.B12;
    const register unsigned short int CCR413 = 13;
    sbit  CCR413_bit at TIM1_CCR4.B13;
    const register unsigned short int CCR414 = 14;
    sbit  CCR414_bit at TIM1_CCR4.B14;
    const register unsigned short int CCR415 = 15;
    sbit  CCR415_bit at TIM1_CCR4.B15;

sfr unsigned long   volatile TIM1_BDTR            absolute 0x40012C44;
    sbit  DTG0_TIM1_BDTR_bit at TIM1_BDTR.B0;
    sbit  DTG1_TIM1_BDTR_bit at TIM1_BDTR.B1;
    sbit  DTG2_TIM1_BDTR_bit at TIM1_BDTR.B2;
    sbit  DTG3_TIM1_BDTR_bit at TIM1_BDTR.B3;
    sbit  DTG4_TIM1_BDTR_bit at TIM1_BDTR.B4;
    sbit  DTG5_TIM1_BDTR_bit at TIM1_BDTR.B5;
    sbit  DTG6_TIM1_BDTR_bit at TIM1_BDTR.B6;
    sbit  DTG7_TIM1_BDTR_bit at TIM1_BDTR.B7;
    sbit  LOCK0_TIM1_BDTR_bit at TIM1_BDTR.B8;
    sbit  LOCK1_TIM1_BDTR_bit at TIM1_BDTR.B9;
    sbit  OSSI_TIM1_BDTR_bit at TIM1_BDTR.B10;
    sbit  OSSR_TIM1_BDTR_bit at TIM1_BDTR.B11;
    sbit  BKE_TIM1_BDTR_bit at TIM1_BDTR.B12;
    sbit  BKP_TIM1_BDTR_bit at TIM1_BDTR.B13;
    sbit  AOE_TIM1_BDTR_bit at TIM1_BDTR.B14;
    sbit  MOE_TIM1_BDTR_bit at TIM1_BDTR.B15;
    sbit  BKF0_TIM1_BDTR_bit at TIM1_BDTR.B16;
    sbit  BKF1_TIM1_BDTR_bit at TIM1_BDTR.B17;
    sbit  BKF2_TIM1_BDTR_bit at TIM1_BDTR.B18;
    sbit  BKF3_TIM1_BDTR_bit at TIM1_BDTR.B19;
    const register unsigned short int BK2F0 = 20;
    sbit  BK2F0_bit at TIM1_BDTR.B20;
    const register unsigned short int BK2F1 = 21;
    sbit  BK2F1_bit at TIM1_BDTR.B21;
    const register unsigned short int BK2F2 = 22;
    sbit  BK2F2_bit at TIM1_BDTR.B22;
    const register unsigned short int BK2F3 = 23;
    sbit  BK2F3_bit at TIM1_BDTR.B23;
    const register unsigned short int BK2E = 24;
    sbit  BK2E_bit at TIM1_BDTR.B24;
    const register unsigned short int BK2P = 25;
    sbit  BK2P_bit at TIM1_BDTR.B25;
    sbit  BKDSRM_TIM1_BDTR_bit at TIM1_BDTR.B26;
    const register unsigned short int BK2DSRM = 27;
    sbit  BK2DSRM_bit at TIM1_BDTR.B27;
    sbit  BKBID_TIM1_BDTR_bit at TIM1_BDTR.B28;
    const register unsigned short int BK2ID = 29;
    sbit  BK2ID_bit at TIM1_BDTR.B29;

sfr unsigned long   volatile TIM1_DCR             absolute 0x40012C48;
    sbit  DBL0_TIM1_DCR_bit at TIM1_DCR.B8;
    sbit  DBL1_TIM1_DCR_bit at TIM1_DCR.B9;
    sbit  DBL2_TIM1_DCR_bit at TIM1_DCR.B10;
    sbit  DBL3_TIM1_DCR_bit at TIM1_DCR.B11;
    sbit  DBL4_TIM1_DCR_bit at TIM1_DCR.B12;
    sbit  DBA0_TIM1_DCR_bit at TIM1_DCR.B0;
    sbit  DBA1_TIM1_DCR_bit at TIM1_DCR.B1;
    sbit  DBA2_TIM1_DCR_bit at TIM1_DCR.B2;
    sbit  DBA3_TIM1_DCR_bit at TIM1_DCR.B3;
    sbit  DBA4_TIM1_DCR_bit at TIM1_DCR.B4;

sfr unsigned long   volatile TIM1_DMAR            absolute 0x40012C4C;
    sbit  DMAB0_TIM1_DMAR_bit at TIM1_DMAR.B0;
    sbit  DMAB1_TIM1_DMAR_bit at TIM1_DMAR.B1;
    sbit  DMAB2_TIM1_DMAR_bit at TIM1_DMAR.B2;
    sbit  DMAB3_TIM1_DMAR_bit at TIM1_DMAR.B3;
    sbit  DMAB4_TIM1_DMAR_bit at TIM1_DMAR.B4;
    sbit  DMAB5_TIM1_DMAR_bit at TIM1_DMAR.B5;
    sbit  DMAB6_TIM1_DMAR_bit at TIM1_DMAR.B6;
    sbit  DMAB7_TIM1_DMAR_bit at TIM1_DMAR.B7;
    sbit  DMAB8_TIM1_DMAR_bit at TIM1_DMAR.B8;
    sbit  DMAB9_TIM1_DMAR_bit at TIM1_DMAR.B9;
    sbit  DMAB10_TIM1_DMAR_bit at TIM1_DMAR.B10;
    sbit  DMAB11_TIM1_DMAR_bit at TIM1_DMAR.B11;
    sbit  DMAB12_TIM1_DMAR_bit at TIM1_DMAR.B12;
    sbit  DMAB13_TIM1_DMAR_bit at TIM1_DMAR.B13;
    sbit  DMAB14_TIM1_DMAR_bit at TIM1_DMAR.B14;
    sbit  DMAB15_TIM1_DMAR_bit at TIM1_DMAR.B15;

sfr unsigned long   volatile TIM1_OR1             absolute 0x40012C50;
    const register unsigned short int OCREF_CLR = 0;
    sbit  OCREF_CLR_bit at TIM1_OR1.B0;

sfr unsigned long   volatile TIM1_CCMR3_Output    absolute 0x40012C54;
    const register unsigned short int OC6M_bit3 = 24;
    sbit  OC6M_bit3_bit at TIM1_CCMR3_Output.B24;
    const register unsigned short int OC5M_bit3 = 16;
    sbit  OC5M_bit3_bit at TIM1_CCMR3_Output.B16;
    const register unsigned short int OC6CE = 15;
    sbit  OC6CE_bit at TIM1_CCMR3_Output.B15;
    const register unsigned short int OC6M0 = 12;
    sbit  OC6M0_bit at TIM1_CCMR3_Output.B12;
    const register unsigned short int OC6M1 = 13;
    sbit  OC6M1_bit at TIM1_CCMR3_Output.B13;
    const register unsigned short int OC6M2 = 14;
    sbit  OC6M2_bit at TIM1_CCMR3_Output.B14;
    const register unsigned short int OC6PE = 11;
    sbit  OC6PE_bit at TIM1_CCMR3_Output.B11;
    const register unsigned short int OC6FE = 10;
    sbit  OC6FE_bit at TIM1_CCMR3_Output.B10;
    const register unsigned short int OC5CE = 7;
    sbit  OC5CE_bit at TIM1_CCMR3_Output.B7;
    const register unsigned short int OC5M0 = 4;
    sbit  OC5M0_bit at TIM1_CCMR3_Output.B4;
    const register unsigned short int OC5M1 = 5;
    sbit  OC5M1_bit at TIM1_CCMR3_Output.B5;
    const register unsigned short int OC5M2 = 6;
    sbit  OC5M2_bit at TIM1_CCMR3_Output.B6;
    const register unsigned short int OC5PE = 3;
    sbit  OC5PE_bit at TIM1_CCMR3_Output.B3;
    const register unsigned short int OC5FE = 2;
    sbit  OC5FE_bit at TIM1_CCMR3_Output.B2;

sfr unsigned long   volatile TIM1_CCR5            absolute 0x40012C58;
    const register unsigned short int CCR50 = 0;
    sbit  CCR50_bit at TIM1_CCR5.B0;
    const register unsigned short int CCR51 = 1;
    sbit  CCR51_bit at TIM1_CCR5.B1;
    const register unsigned short int CCR52 = 2;
    sbit  CCR52_bit at TIM1_CCR5.B2;
    const register unsigned short int CCR53 = 3;
    sbit  CCR53_bit at TIM1_CCR5.B3;
    const register unsigned short int CCR54 = 4;
    sbit  CCR54_bit at TIM1_CCR5.B4;
    const register unsigned short int CCR55 = 5;
    sbit  CCR55_bit at TIM1_CCR5.B5;
    const register unsigned short int CCR56 = 6;
    sbit  CCR56_bit at TIM1_CCR5.B6;
    const register unsigned short int CCR57 = 7;
    sbit  CCR57_bit at TIM1_CCR5.B7;
    const register unsigned short int CCR58 = 8;
    sbit  CCR58_bit at TIM1_CCR5.B8;
    const register unsigned short int CCR59 = 9;
    sbit  CCR59_bit at TIM1_CCR5.B9;
    const register unsigned short int CCR510 = 10;
    sbit  CCR510_bit at TIM1_CCR5.B10;
    const register unsigned short int CCR511 = 11;
    sbit  CCR511_bit at TIM1_CCR5.B11;
    const register unsigned short int CCR512 = 12;
    sbit  CCR512_bit at TIM1_CCR5.B12;
    const register unsigned short int CCR513 = 13;
    sbit  CCR513_bit at TIM1_CCR5.B13;
    const register unsigned short int CCR514 = 14;
    sbit  CCR514_bit at TIM1_CCR5.B14;
    const register unsigned short int CCR515 = 15;
    sbit  CCR515_bit at TIM1_CCR5.B15;
    const register unsigned short int GC5C1 = 29;
    sbit  GC5C1_bit at TIM1_CCR5.B29;
    const register unsigned short int GC5C2 = 30;
    sbit  GC5C2_bit at TIM1_CCR5.B30;
    const register unsigned short int GC5C3 = 31;
    sbit  GC5C3_bit at TIM1_CCR5.B31;

sfr unsigned long   volatile TIM1_CCR6            absolute 0x40012C5C;
    const register unsigned short int CCR60 = 0;
    sbit  CCR60_bit at TIM1_CCR6.B0;
    const register unsigned short int CCR61 = 1;
    sbit  CCR61_bit at TIM1_CCR6.B1;
    const register unsigned short int CCR62 = 2;
    sbit  CCR62_bit at TIM1_CCR6.B2;
    const register unsigned short int CCR63 = 3;
    sbit  CCR63_bit at TIM1_CCR6.B3;
    const register unsigned short int CCR64 = 4;
    sbit  CCR64_bit at TIM1_CCR6.B4;
    const register unsigned short int CCR65 = 5;
    sbit  CCR65_bit at TIM1_CCR6.B5;
    const register unsigned short int CCR66 = 6;
    sbit  CCR66_bit at TIM1_CCR6.B6;
    const register unsigned short int CCR67 = 7;
    sbit  CCR67_bit at TIM1_CCR6.B7;
    const register unsigned short int CCR68 = 8;
    sbit  CCR68_bit at TIM1_CCR6.B8;
    const register unsigned short int CCR69 = 9;
    sbit  CCR69_bit at TIM1_CCR6.B9;
    const register unsigned short int CCR610 = 10;
    sbit  CCR610_bit at TIM1_CCR6.B10;
    const register unsigned short int CCR611 = 11;
    sbit  CCR611_bit at TIM1_CCR6.B11;
    const register unsigned short int CCR612 = 12;
    sbit  CCR612_bit at TIM1_CCR6.B12;
    const register unsigned short int CCR613 = 13;
    sbit  CCR613_bit at TIM1_CCR6.B13;
    const register unsigned short int CCR614 = 14;
    sbit  CCR614_bit at TIM1_CCR6.B14;
    const register unsigned short int CCR615 = 15;
    sbit  CCR615_bit at TIM1_CCR6.B15;

sfr unsigned long   volatile TIM1_AF1             absolute 0x40012C60;
    sbit  BKINE_TIM1_AF1_bit at TIM1_AF1.B0;
    sbit  BKCMP1E_TIM1_AF1_bit at TIM1_AF1.B1;
    sbit  BKCMP2E_TIM1_AF1_bit at TIM1_AF1.B2;
    sbit  BKINP_TIM1_AF1_bit at TIM1_AF1.B9;
    sbit  BKCMP1P_TIM1_AF1_bit at TIM1_AF1.B10;
    sbit  BKCMP2P_TIM1_AF1_bit at TIM1_AF1.B11;
    const register unsigned short int ETRSEL0 = 14;
    sbit  ETRSEL0_bit at TIM1_AF1.B14;
    const register unsigned short int ETRSEL1 = 15;
    sbit  ETRSEL1_bit at TIM1_AF1.B15;
    const register unsigned short int ETRSEL2 = 16;
    sbit  ETRSEL2_bit at TIM1_AF1.B16;

sfr unsigned long   volatile TIM1_AF2             absolute 0x40012C64;
    const register unsigned short int BK2INE = 0;
    sbit  BK2INE_bit at TIM1_AF2.B0;
    const register unsigned short int BK2CMP1E = 1;
    sbit  BK2CMP1E_bit at TIM1_AF2.B1;
    const register unsigned short int BK2CMP2E = 2;
    sbit  BK2CMP2E_bit at TIM1_AF2.B2;
    const register unsigned short int BK2DFBK0E = 8;
    sbit  BK2DFBK0E_bit at TIM1_AF2.B8;
    const register unsigned short int BK2INP = 9;
    sbit  BK2INP_bit at TIM1_AF2.B9;
    const register unsigned short int BK2CMP1P = 10;
    sbit  BK2CMP1P_bit at TIM1_AF2.B10;
    const register unsigned short int BK2CMP2P = 11;
    sbit  BK2CMP2P_bit at TIM1_AF2.B11;

sfr unsigned long   volatile TIM1_TISEL           absolute 0x40012C68;
    const register unsigned short int TI1SEL3_00 = 0;
    sbit  TI1SEL3_00_bit at TIM1_TISEL.B0;
    const register unsigned short int TI1SEL3_01 = 1;
    sbit  TI1SEL3_01_bit at TIM1_TISEL.B1;
    const register unsigned short int TI1SEL3_02 = 2;
    sbit  TI1SEL3_02_bit at TIM1_TISEL.B2;
    const register unsigned short int TI1SEL3_03 = 3;
    sbit  TI1SEL3_03_bit at TIM1_TISEL.B3;
    const register unsigned short int TI2SEL3_00 = 8;
    sbit  TI2SEL3_00_bit at TIM1_TISEL.B8;
    const register unsigned short int TI2SEL3_01 = 9;
    sbit  TI2SEL3_01_bit at TIM1_TISEL.B9;
    const register unsigned short int TI2SEL3_02 = 10;
    sbit  TI2SEL3_02_bit at TIM1_TISEL.B10;
    const register unsigned short int TI2SEL3_03 = 11;
    sbit  TI2SEL3_03_bit at TIM1_TISEL.B11;
    const register unsigned short int TI3SEL3_00 = 16;
    sbit  TI3SEL3_00_bit at TIM1_TISEL.B16;
    const register unsigned short int TI3SEL3_01 = 17;
    sbit  TI3SEL3_01_bit at TIM1_TISEL.B17;
    const register unsigned short int TI3SEL3_02 = 18;
    sbit  TI3SEL3_02_bit at TIM1_TISEL.B18;
    const register unsigned short int TI3SEL3_03 = 19;
    sbit  TI3SEL3_03_bit at TIM1_TISEL.B19;
    const register unsigned short int TI4SEL3_00 = 24;
    sbit  TI4SEL3_00_bit at TIM1_TISEL.B24;
    const register unsigned short int TI4SEL3_01 = 25;
    sbit  TI4SEL3_01_bit at TIM1_TISEL.B25;
    const register unsigned short int TI4SEL3_02 = 26;
    sbit  TI4SEL3_02_bit at TIM1_TISEL.B26;
    const register unsigned short int TI4SEL3_03 = 27;
    sbit  TI4SEL3_03_bit at TIM1_TISEL.B27;

sfr unsigned long   volatile ADC_ISR              absolute 0x40012400;
    const register unsigned short int CCRDY = 13;
    sbit  CCRDY_bit at ADC_ISR.B13;
    const register unsigned short int EOCAL = 11;
    sbit  EOCAL_bit at ADC_ISR.B11;
    const register unsigned short int AWD3 = 9;
    sbit  AWD3_bit at ADC_ISR.B9;
    const register unsigned short int AWD2 = 8;
    sbit  AWD2_bit at ADC_ISR.B8;
    const register unsigned short int AWD1 = 7;
    sbit  AWD1_bit at ADC_ISR.B7;
    sbit  OVR_ADC_ISR_bit at ADC_ISR.B4;
    const register unsigned short int EOS = 3;
    sbit  EOS_bit at ADC_ISR.B3;
    const register unsigned short int EOC = 2;
    sbit  EOC_bit at ADC_ISR.B2;
    const register unsigned short int EOSMP = 1;
    sbit  EOSMP_bit at ADC_ISR.B1;
    const register unsigned short int ADRDY = 0;
    sbit  ADRDY_bit at ADC_ISR.B0;

sfr unsigned long   volatile ADC_IER              absolute 0x40012404;
    const register unsigned short int CCRDYIE = 13;
    sbit  CCRDYIE_bit at ADC_IER.B13;
    const register unsigned short int EOCALIE = 11;
    sbit  EOCALIE_bit at ADC_IER.B11;
    const register unsigned short int AWD3IE = 9;
    sbit  AWD3IE_bit at ADC_IER.B9;
    const register unsigned short int AWD2IE = 8;
    sbit  AWD2IE_bit at ADC_IER.B8;
    const register unsigned short int AWD1IE = 7;
    sbit  AWD1IE_bit at ADC_IER.B7;
    const register unsigned short int OVRIE = 4;
    sbit  OVRIE_bit at ADC_IER.B4;
    const register unsigned short int EOSIE = 3;
    sbit  EOSIE_bit at ADC_IER.B3;
    const register unsigned short int EOCIE = 2;
    sbit  EOCIE_bit at ADC_IER.B2;
    const register unsigned short int EOSMPIE = 1;
    sbit  EOSMPIE_bit at ADC_IER.B1;
    const register unsigned short int ADRDYIE = 0;
    sbit  ADRDYIE_bit at ADC_IER.B0;

sfr unsigned long   volatile ADC_CR               absolute 0x40012408;
    const register unsigned short int ADCAL = 31;
    sbit  ADCAL_bit at ADC_CR.B31;
    const register unsigned short int ADVREGEN = 28;
    sbit  ADVREGEN_bit at ADC_CR.B28;
    const register unsigned short int ADSTP = 4;
    sbit  ADSTP_bit at ADC_CR.B4;
    const register unsigned short int ADSTART = 2;
    sbit  ADSTART_bit at ADC_CR.B2;
    const register unsigned short int ADDIS = 1;
    sbit  ADDIS_bit at ADC_CR.B1;
    const register unsigned short int ADEN = 0;
    sbit  ADEN_bit at ADC_CR.B0;

sfr unsigned long   volatile ADC_CFGR1            absolute 0x4001240C;
    const register unsigned short int AWDCH1CH0 = 26;
    sbit  AWDCH1CH0_bit at ADC_CFGR1.B26;
    const register unsigned short int AWDCH1CH1 = 27;
    sbit  AWDCH1CH1_bit at ADC_CFGR1.B27;
    const register unsigned short int AWDCH1CH2 = 28;
    sbit  AWDCH1CH2_bit at ADC_CFGR1.B28;
    const register unsigned short int AWDCH1CH3 = 29;
    sbit  AWDCH1CH3_bit at ADC_CFGR1.B29;
    const register unsigned short int AWDCH1CH4 = 30;
    sbit  AWDCH1CH4_bit at ADC_CFGR1.B30;
    const register unsigned short int AWD1EN = 23;
    sbit  AWD1EN_bit at ADC_CFGR1.B23;
    const register unsigned short int AWD1SGL = 22;
    sbit  AWD1SGL_bit at ADC_CFGR1.B22;
    const register unsigned short int CHSELRMOD = 21;
    sbit  CHSELRMOD_bit at ADC_CFGR1.B21;
    const register unsigned short int DISCEN = 16;
    sbit  DISCEN_bit at ADC_CFGR1.B16;
    const register unsigned short int AUTOFF = 15;
    sbit  AUTOFF_bit at ADC_CFGR1.B15;
    const register unsigned short int WAIT = 14;
    sbit  WAIT_bit at ADC_CFGR1.B14;
    const register unsigned short int CONT = 13;
    sbit  CONT_bit at ADC_CFGR1.B13;
    const register unsigned short int OVRMOD = 12;
    sbit  OVRMOD_bit at ADC_CFGR1.B12;
    const register unsigned short int EXTEN0 = 10;
    sbit  EXTEN0_bit at ADC_CFGR1.B10;
    const register unsigned short int EXTEN1 = 11;
    sbit  EXTEN1_bit at ADC_CFGR1.B11;
    const register unsigned short int EXTSEL0 = 6;
    sbit  EXTSEL0_bit at ADC_CFGR1.B6;
    const register unsigned short int EXTSEL1 = 7;
    sbit  EXTSEL1_bit at ADC_CFGR1.B7;
    const register unsigned short int EXTSEL2 = 8;
    sbit  EXTSEL2_bit at ADC_CFGR1.B8;
    const register unsigned short int ALIGN = 5;
    sbit  ALIGN_bit at ADC_CFGR1.B5;
    const register unsigned short int RES0 = 3;
    sbit  RES0_bit at ADC_CFGR1.B3;
    const register unsigned short int RES1 = 4;
    sbit  RES1_bit at ADC_CFGR1.B4;
    const register unsigned short int SCANDIR = 2;
    sbit  SCANDIR_bit at ADC_CFGR1.B2;
    const register unsigned short int DMACFG = 1;
    sbit  DMACFG_bit at ADC_CFGR1.B1;
    sbit  DMAEN_ADC_CFGR1_bit at ADC_CFGR1.B0;

sfr unsigned long   volatile ADC_CFGR2            absolute 0x40012410;
    const register unsigned short int CKMODE0 = 30;
    sbit  CKMODE0_bit at ADC_CFGR2.B30;
    const register unsigned short int CKMODE1 = 31;
    sbit  CKMODE1_bit at ADC_CFGR2.B31;
    const register unsigned short int LFTRIG = 29;
    sbit  LFTRIG_bit at ADC_CFGR2.B29;
    const register unsigned short int TOVS = 9;
    sbit  TOVS_bit at ADC_CFGR2.B9;
    const register unsigned short int OVSS0 = 5;
    sbit  OVSS0_bit at ADC_CFGR2.B5;
    const register unsigned short int OVSS1 = 6;
    sbit  OVSS1_bit at ADC_CFGR2.B6;
    const register unsigned short int OVSS2 = 7;
    sbit  OVSS2_bit at ADC_CFGR2.B7;
    const register unsigned short int OVSS3 = 8;
    sbit  OVSS3_bit at ADC_CFGR2.B8;
    const register unsigned short int OVSR0 = 2;
    sbit  OVSR0_bit at ADC_CFGR2.B2;
    const register unsigned short int OVSR1 = 3;
    sbit  OVSR1_bit at ADC_CFGR2.B3;
    const register unsigned short int OVSR2 = 4;
    sbit  OVSR2_bit at ADC_CFGR2.B4;
    const register unsigned short int OVSE = 0;
    sbit  OVSE_bit at ADC_CFGR2.B0;

sfr unsigned long   volatile ADC_SMPR             absolute 0x40012414;
    const register unsigned short int SMP10 = 0;
    sbit  SMP10_bit at ADC_SMPR.B0;
    const register unsigned short int SMP11 = 1;
    sbit  SMP11_bit at ADC_SMPR.B1;
    const register unsigned short int SMP12 = 2;
    sbit  SMP12_bit at ADC_SMPR.B2;
    const register unsigned short int SMP20 = 4;
    sbit  SMP20_bit at ADC_SMPR.B4;
    const register unsigned short int SMP21 = 5;
    sbit  SMP21_bit at ADC_SMPR.B5;
    const register unsigned short int SMP22 = 6;
    sbit  SMP22_bit at ADC_SMPR.B6;
    const register unsigned short int SMPSEL0 = 8;
    sbit  SMPSEL0_bit at ADC_SMPR.B8;
    const register unsigned short int SMPSEL1 = 9;
    sbit  SMPSEL1_bit at ADC_SMPR.B9;
    const register unsigned short int SMPSEL2 = 10;
    sbit  SMPSEL2_bit at ADC_SMPR.B10;
    const register unsigned short int SMPSEL3 = 11;
    sbit  SMPSEL3_bit at ADC_SMPR.B11;
    const register unsigned short int SMPSEL4 = 12;
    sbit  SMPSEL4_bit at ADC_SMPR.B12;
    const register unsigned short int SMPSEL5 = 13;
    sbit  SMPSEL5_bit at ADC_SMPR.B13;
    const register unsigned short int SMPSEL6 = 14;
    sbit  SMPSEL6_bit at ADC_SMPR.B14;
    const register unsigned short int SMPSEL7 = 15;
    sbit  SMPSEL7_bit at ADC_SMPR.B15;
    const register unsigned short int SMPSEL8 = 16;
    sbit  SMPSEL8_bit at ADC_SMPR.B16;
    const register unsigned short int SMPSEL9 = 17;
    sbit  SMPSEL9_bit at ADC_SMPR.B17;
    const register unsigned short int SMPSEL10 = 18;
    sbit  SMPSEL10_bit at ADC_SMPR.B18;
    const register unsigned short int SMPSEL11 = 19;
    sbit  SMPSEL11_bit at ADC_SMPR.B19;
    const register unsigned short int SMPSEL12 = 20;
    sbit  SMPSEL12_bit at ADC_SMPR.B20;
    const register unsigned short int SMPSEL13 = 21;
    sbit  SMPSEL13_bit at ADC_SMPR.B21;
    const register unsigned short int SMPSEL14 = 22;
    sbit  SMPSEL14_bit at ADC_SMPR.B22;
    const register unsigned short int SMPSEL15 = 23;
    sbit  SMPSEL15_bit at ADC_SMPR.B23;
    const register unsigned short int SMPSEL16 = 24;
    sbit  SMPSEL16_bit at ADC_SMPR.B24;
    const register unsigned short int SMPSEL17 = 25;
    sbit  SMPSEL17_bit at ADC_SMPR.B25;
    const register unsigned short int SMPSEL18 = 26;
    sbit  SMPSEL18_bit at ADC_SMPR.B26;

sfr unsigned long   volatile ADC_AWD1TR           absolute 0x40012420;
    const register unsigned short int HT10 = 16;
    sbit  HT10_bit at ADC_AWD1TR.B16;
    const register unsigned short int HT11 = 17;
    sbit  HT11_bit at ADC_AWD1TR.B17;
    const register unsigned short int HT12 = 18;
    sbit  HT12_bit at ADC_AWD1TR.B18;
    const register unsigned short int HT13 = 19;
    sbit  HT13_bit at ADC_AWD1TR.B19;
    const register unsigned short int HT14 = 20;
    sbit  HT14_bit at ADC_AWD1TR.B20;
    const register unsigned short int HT15 = 21;
    sbit  HT15_bit at ADC_AWD1TR.B21;
    const register unsigned short int HT16 = 22;
    sbit  HT16_bit at ADC_AWD1TR.B22;
    const register unsigned short int HT17 = 23;
    sbit  HT17_bit at ADC_AWD1TR.B23;
    const register unsigned short int HT18 = 24;
    sbit  HT18_bit at ADC_AWD1TR.B24;
    const register unsigned short int HT19 = 25;
    sbit  HT19_bit at ADC_AWD1TR.B25;
    const register unsigned short int HT110 = 26;
    sbit  HT110_bit at ADC_AWD1TR.B26;
    const register unsigned short int HT111 = 27;
    sbit  HT111_bit at ADC_AWD1TR.B27;
    const register unsigned short int LT10 = 0;
    sbit  LT10_bit at ADC_AWD1TR.B0;
    const register unsigned short int LT11 = 1;
    sbit  LT11_bit at ADC_AWD1TR.B1;
    const register unsigned short int LT12 = 2;
    sbit  LT12_bit at ADC_AWD1TR.B2;
    const register unsigned short int LT13 = 3;
    sbit  LT13_bit at ADC_AWD1TR.B3;
    const register unsigned short int LT14 = 4;
    sbit  LT14_bit at ADC_AWD1TR.B4;
    const register unsigned short int LT15 = 5;
    sbit  LT15_bit at ADC_AWD1TR.B5;
    const register unsigned short int LT16 = 6;
    sbit  LT16_bit at ADC_AWD1TR.B6;
    const register unsigned short int LT17 = 7;
    sbit  LT17_bit at ADC_AWD1TR.B7;
    const register unsigned short int LT18 = 8;
    sbit  LT18_bit at ADC_AWD1TR.B8;
    const register unsigned short int LT19 = 9;
    sbit  LT19_bit at ADC_AWD1TR.B9;
    const register unsigned short int LT110 = 10;
    sbit  LT110_bit at ADC_AWD1TR.B10;
    const register unsigned short int LT111 = 11;
    sbit  LT111_bit at ADC_AWD1TR.B11;

sfr unsigned long   volatile ADC_AWD2TR           absolute 0x40012424;
    const register unsigned short int HT20 = 16;
    sbit  HT20_bit at ADC_AWD2TR.B16;
    const register unsigned short int HT21 = 17;
    sbit  HT21_bit at ADC_AWD2TR.B17;
    const register unsigned short int HT22 = 18;
    sbit  HT22_bit at ADC_AWD2TR.B18;
    const register unsigned short int HT23 = 19;
    sbit  HT23_bit at ADC_AWD2TR.B19;
    const register unsigned short int HT24 = 20;
    sbit  HT24_bit at ADC_AWD2TR.B20;
    const register unsigned short int HT25 = 21;
    sbit  HT25_bit at ADC_AWD2TR.B21;
    const register unsigned short int HT26 = 22;
    sbit  HT26_bit at ADC_AWD2TR.B22;
    const register unsigned short int HT27 = 23;
    sbit  HT27_bit at ADC_AWD2TR.B23;
    const register unsigned short int HT28 = 24;
    sbit  HT28_bit at ADC_AWD2TR.B24;
    const register unsigned short int HT29 = 25;
    sbit  HT29_bit at ADC_AWD2TR.B25;
    const register unsigned short int HT210 = 26;
    sbit  HT210_bit at ADC_AWD2TR.B26;
    const register unsigned short int HT211 = 27;
    sbit  HT211_bit at ADC_AWD2TR.B27;
    const register unsigned short int LT20 = 0;
    sbit  LT20_bit at ADC_AWD2TR.B0;
    const register unsigned short int LT21 = 1;
    sbit  LT21_bit at ADC_AWD2TR.B1;
    const register unsigned short int LT22 = 2;
    sbit  LT22_bit at ADC_AWD2TR.B2;
    const register unsigned short int LT23 = 3;
    sbit  LT23_bit at ADC_AWD2TR.B3;
    const register unsigned short int LT24 = 4;
    sbit  LT24_bit at ADC_AWD2TR.B4;
    const register unsigned short int LT25 = 5;
    sbit  LT25_bit at ADC_AWD2TR.B5;
    const register unsigned short int LT26 = 6;
    sbit  LT26_bit at ADC_AWD2TR.B6;
    const register unsigned short int LT27 = 7;
    sbit  LT27_bit at ADC_AWD2TR.B7;
    const register unsigned short int LT28 = 8;
    sbit  LT28_bit at ADC_AWD2TR.B8;
    const register unsigned short int LT29 = 9;
    sbit  LT29_bit at ADC_AWD2TR.B9;
    const register unsigned short int LT210 = 10;
    sbit  LT210_bit at ADC_AWD2TR.B10;
    const register unsigned short int LT211 = 11;
    sbit  LT211_bit at ADC_AWD2TR.B11;

sfr unsigned long   volatile ADC_CHSELR           absolute 0x40012428;
    const register unsigned short int CHSEL0 = 0;
    sbit  CHSEL0_bit at ADC_CHSELR.B0;
    const register unsigned short int CHSEL1 = 1;
    sbit  CHSEL1_bit at ADC_CHSELR.B1;
    const register unsigned short int CHSEL2 = 2;
    sbit  CHSEL2_bit at ADC_CHSELR.B2;
    const register unsigned short int CHSEL3 = 3;
    sbit  CHSEL3_bit at ADC_CHSELR.B3;
    const register unsigned short int CHSEL4 = 4;
    sbit  CHSEL4_bit at ADC_CHSELR.B4;
    const register unsigned short int CHSEL5 = 5;
    sbit  CHSEL5_bit at ADC_CHSELR.B5;
    const register unsigned short int CHSEL6 = 6;
    sbit  CHSEL6_bit at ADC_CHSELR.B6;
    const register unsigned short int CHSEL7 = 7;
    sbit  CHSEL7_bit at ADC_CHSELR.B7;
    const register unsigned short int CHSEL8 = 8;
    sbit  CHSEL8_bit at ADC_CHSELR.B8;
    const register unsigned short int CHSEL9 = 9;
    sbit  CHSEL9_bit at ADC_CHSELR.B9;
    const register unsigned short int CHSEL10 = 10;
    sbit  CHSEL10_bit at ADC_CHSELR.B10;
    const register unsigned short int CHSEL11 = 11;
    sbit  CHSEL11_bit at ADC_CHSELR.B11;
    const register unsigned short int CHSEL12 = 12;
    sbit  CHSEL12_bit at ADC_CHSELR.B12;
    const register unsigned short int CHSEL13 = 13;
    sbit  CHSEL13_bit at ADC_CHSELR.B13;
    const register unsigned short int CHSEL14 = 14;
    sbit  CHSEL14_bit at ADC_CHSELR.B14;
    const register unsigned short int CHSEL15 = 15;
    sbit  CHSEL15_bit at ADC_CHSELR.B15;
    const register unsigned short int CHSEL16 = 16;
    sbit  CHSEL16_bit at ADC_CHSELR.B16;
    const register unsigned short int CHSEL17 = 17;
    sbit  CHSEL17_bit at ADC_CHSELR.B17;
    const register unsigned short int CHSEL18 = 18;
    sbit  CHSEL18_bit at ADC_CHSELR.B18;

sfr unsigned long   volatile ADC_CHSELR_1         absolute 0x40012428;
    const register unsigned short int SQ10 = 0;
    sbit  SQ10_bit at ADC_CHSELR_1.B0;
    const register unsigned short int SQ11 = 1;
    sbit  SQ11_bit at ADC_CHSELR_1.B1;
    const register unsigned short int SQ12 = 2;
    sbit  SQ12_bit at ADC_CHSELR_1.B2;
    const register unsigned short int SQ13 = 3;
    sbit  SQ13_bit at ADC_CHSELR_1.B3;
    const register unsigned short int SQ20 = 4;
    sbit  SQ20_bit at ADC_CHSELR_1.B4;
    const register unsigned short int SQ21 = 5;
    sbit  SQ21_bit at ADC_CHSELR_1.B5;
    const register unsigned short int SQ22 = 6;
    sbit  SQ22_bit at ADC_CHSELR_1.B6;
    const register unsigned short int SQ23 = 7;
    sbit  SQ23_bit at ADC_CHSELR_1.B7;
    const register unsigned short int SQ30 = 8;
    sbit  SQ30_bit at ADC_CHSELR_1.B8;
    const register unsigned short int SQ31 = 9;
    sbit  SQ31_bit at ADC_CHSELR_1.B9;
    const register unsigned short int SQ32 = 10;
    sbit  SQ32_bit at ADC_CHSELR_1.B10;
    const register unsigned short int SQ33 = 11;
    sbit  SQ33_bit at ADC_CHSELR_1.B11;
    const register unsigned short int SQ40 = 12;
    sbit  SQ40_bit at ADC_CHSELR_1.B12;
    const register unsigned short int SQ41 = 13;
    sbit  SQ41_bit at ADC_CHSELR_1.B13;
    const register unsigned short int SQ42 = 14;
    sbit  SQ42_bit at ADC_CHSELR_1.B14;
    const register unsigned short int SQ43 = 15;
    sbit  SQ43_bit at ADC_CHSELR_1.B15;
    const register unsigned short int SQ50 = 16;
    sbit  SQ50_bit at ADC_CHSELR_1.B16;
    const register unsigned short int SQ51 = 17;
    sbit  SQ51_bit at ADC_CHSELR_1.B17;
    const register unsigned short int SQ52 = 18;
    sbit  SQ52_bit at ADC_CHSELR_1.B18;
    const register unsigned short int SQ53 = 19;
    sbit  SQ53_bit at ADC_CHSELR_1.B19;
    const register unsigned short int SQ60 = 20;
    sbit  SQ60_bit at ADC_CHSELR_1.B20;
    const register unsigned short int SQ61 = 21;
    sbit  SQ61_bit at ADC_CHSELR_1.B21;
    const register unsigned short int SQ62 = 22;
    sbit  SQ62_bit at ADC_CHSELR_1.B22;
    const register unsigned short int SQ63 = 23;
    sbit  SQ63_bit at ADC_CHSELR_1.B23;
    const register unsigned short int SQ70 = 24;
    sbit  SQ70_bit at ADC_CHSELR_1.B24;
    const register unsigned short int SQ71 = 25;
    sbit  SQ71_bit at ADC_CHSELR_1.B25;
    const register unsigned short int SQ72 = 26;
    sbit  SQ72_bit at ADC_CHSELR_1.B26;
    const register unsigned short int SQ73 = 27;
    sbit  SQ73_bit at ADC_CHSELR_1.B27;
    const register unsigned short int SQ80 = 28;
    sbit  SQ80_bit at ADC_CHSELR_1.B28;
    const register unsigned short int SQ81 = 29;
    sbit  SQ81_bit at ADC_CHSELR_1.B29;
    const register unsigned short int SQ82 = 30;
    sbit  SQ82_bit at ADC_CHSELR_1.B30;
    const register unsigned short int SQ83 = 31;
    sbit  SQ83_bit at ADC_CHSELR_1.B31;

sfr unsigned long   volatile ADC_AWD3TR           absolute 0x4001242C;
    const register unsigned short int HT30 = 16;
    sbit  HT30_bit at ADC_AWD3TR.B16;
    const register unsigned short int HT31 = 17;
    sbit  HT31_bit at ADC_AWD3TR.B17;
    const register unsigned short int HT32 = 18;
    sbit  HT32_bit at ADC_AWD3TR.B18;
    const register unsigned short int HT33 = 19;
    sbit  HT33_bit at ADC_AWD3TR.B19;
    const register unsigned short int HT34 = 20;
    sbit  HT34_bit at ADC_AWD3TR.B20;
    const register unsigned short int HT35 = 21;
    sbit  HT35_bit at ADC_AWD3TR.B21;
    const register unsigned short int HT36 = 22;
    sbit  HT36_bit at ADC_AWD3TR.B22;
    const register unsigned short int HT37 = 23;
    sbit  HT37_bit at ADC_AWD3TR.B23;
    const register unsigned short int HT38 = 24;
    sbit  HT38_bit at ADC_AWD3TR.B24;
    const register unsigned short int HT39 = 25;
    sbit  HT39_bit at ADC_AWD3TR.B25;
    const register unsigned short int HT310 = 26;
    sbit  HT310_bit at ADC_AWD3TR.B26;
    const register unsigned short int HT311 = 27;
    sbit  HT311_bit at ADC_AWD3TR.B27;
    const register unsigned short int LT30 = 0;
    sbit  LT30_bit at ADC_AWD3TR.B0;
    const register unsigned short int LT31 = 1;
    sbit  LT31_bit at ADC_AWD3TR.B1;
    const register unsigned short int LT32 = 2;
    sbit  LT32_bit at ADC_AWD3TR.B2;
    const register unsigned short int LT33 = 3;
    sbit  LT33_bit at ADC_AWD3TR.B3;
    const register unsigned short int LT34 = 4;
    sbit  LT34_bit at ADC_AWD3TR.B4;
    const register unsigned short int LT35 = 5;
    sbit  LT35_bit at ADC_AWD3TR.B5;
    const register unsigned short int LT36 = 6;
    sbit  LT36_bit at ADC_AWD3TR.B6;
    const register unsigned short int LT37 = 7;
    sbit  LT37_bit at ADC_AWD3TR.B7;
    const register unsigned short int LT38 = 8;
    sbit  LT38_bit at ADC_AWD3TR.B8;
    const register unsigned short int LT39 = 9;
    sbit  LT39_bit at ADC_AWD3TR.B9;
    const register unsigned short int LT310 = 10;
    sbit  LT310_bit at ADC_AWD3TR.B10;
    const register unsigned short int LT311 = 11;
    sbit  LT311_bit at ADC_AWD3TR.B11;

sfr unsigned long   volatile ADC_DR               absolute 0x40012440;
    const register unsigned short int regularDATA0 = 0;
    sbit  regularDATA0_bit at ADC_DR.B0;
    const register unsigned short int regularDATA1 = 1;
    sbit  regularDATA1_bit at ADC_DR.B1;
    const register unsigned short int regularDATA2 = 2;
    sbit  regularDATA2_bit at ADC_DR.B2;
    const register unsigned short int regularDATA3 = 3;
    sbit  regularDATA3_bit at ADC_DR.B3;
    const register unsigned short int regularDATA4 = 4;
    sbit  regularDATA4_bit at ADC_DR.B4;
    const register unsigned short int regularDATA5 = 5;
    sbit  regularDATA5_bit at ADC_DR.B5;
    const register unsigned short int regularDATA6 = 6;
    sbit  regularDATA6_bit at ADC_DR.B6;
    const register unsigned short int regularDATA7 = 7;
    sbit  regularDATA7_bit at ADC_DR.B7;
    const register unsigned short int regularDATA8 = 8;
    sbit  regularDATA8_bit at ADC_DR.B8;
    const register unsigned short int regularDATA9 = 9;
    sbit  regularDATA9_bit at ADC_DR.B9;
    const register unsigned short int regularDATA10 = 10;
    sbit  regularDATA10_bit at ADC_DR.B10;
    const register unsigned short int regularDATA11 = 11;
    sbit  regularDATA11_bit at ADC_DR.B11;
    const register unsigned short int regularDATA12 = 12;
    sbit  regularDATA12_bit at ADC_DR.B12;
    const register unsigned short int regularDATA13 = 13;
    sbit  regularDATA13_bit at ADC_DR.B13;
    const register unsigned short int regularDATA14 = 14;
    sbit  regularDATA14_bit at ADC_DR.B14;
    const register unsigned short int regularDATA15 = 15;
    sbit  regularDATA15_bit at ADC_DR.B15;

sfr unsigned long   volatile ADC_AWD2CR           absolute 0x400124A0;
    const register unsigned short int AWD2CH0 = 0;
    sbit  AWD2CH0_bit at ADC_AWD2CR.B0;
    const register unsigned short int AWD2CH1 = 1;
    sbit  AWD2CH1_bit at ADC_AWD2CR.B1;
    const register unsigned short int AWD2CH2 = 2;
    sbit  AWD2CH2_bit at ADC_AWD2CR.B2;
    const register unsigned short int AWD2CH3 = 3;
    sbit  AWD2CH3_bit at ADC_AWD2CR.B3;
    const register unsigned short int AWD2CH4 = 4;
    sbit  AWD2CH4_bit at ADC_AWD2CR.B4;
    const register unsigned short int AWD2CH5 = 5;
    sbit  AWD2CH5_bit at ADC_AWD2CR.B5;
    const register unsigned short int AWD2CH6 = 6;
    sbit  AWD2CH6_bit at ADC_AWD2CR.B6;
    const register unsigned short int AWD2CH7 = 7;
    sbit  AWD2CH7_bit at ADC_AWD2CR.B7;
    const register unsigned short int AWD2CH8 = 8;
    sbit  AWD2CH8_bit at ADC_AWD2CR.B8;
    const register unsigned short int AWD2CH9 = 9;
    sbit  AWD2CH9_bit at ADC_AWD2CR.B9;
    const register unsigned short int AWD2CH10 = 10;
    sbit  AWD2CH10_bit at ADC_AWD2CR.B10;
    const register unsigned short int AWD2CH11 = 11;
    sbit  AWD2CH11_bit at ADC_AWD2CR.B11;
    const register unsigned short int AWD2CH12 = 12;
    sbit  AWD2CH12_bit at ADC_AWD2CR.B12;
    const register unsigned short int AWD2CH13 = 13;
    sbit  AWD2CH13_bit at ADC_AWD2CR.B13;
    const register unsigned short int AWD2CH14 = 14;
    sbit  AWD2CH14_bit at ADC_AWD2CR.B14;
    const register unsigned short int AWD2CH15 = 15;
    sbit  AWD2CH15_bit at ADC_AWD2CR.B15;
    const register unsigned short int AWD2CH16 = 16;
    sbit  AWD2CH16_bit at ADC_AWD2CR.B16;
    const register unsigned short int AWD2CH17 = 17;
    sbit  AWD2CH17_bit at ADC_AWD2CR.B17;
    const register unsigned short int AWD2CH18 = 18;
    sbit  AWD2CH18_bit at ADC_AWD2CR.B18;

sfr unsigned long   volatile ADC_AWD3CR           absolute 0x400124A4;
    const register unsigned short int AWD3CH0 = 0;
    sbit  AWD3CH0_bit at ADC_AWD3CR.B0;
    const register unsigned short int AWD3CH1 = 1;
    sbit  AWD3CH1_bit at ADC_AWD3CR.B1;
    const register unsigned short int AWD3CH2 = 2;
    sbit  AWD3CH2_bit at ADC_AWD3CR.B2;
    const register unsigned short int AWD3CH3 = 3;
    sbit  AWD3CH3_bit at ADC_AWD3CR.B3;
    const register unsigned short int AWD3CH4 = 4;
    sbit  AWD3CH4_bit at ADC_AWD3CR.B4;
    const register unsigned short int AWD3CH5 = 5;
    sbit  AWD3CH5_bit at ADC_AWD3CR.B5;
    const register unsigned short int AWD3CH6 = 6;
    sbit  AWD3CH6_bit at ADC_AWD3CR.B6;
    const register unsigned short int AWD3CH7 = 7;
    sbit  AWD3CH7_bit at ADC_AWD3CR.B7;
    const register unsigned short int AWD3CH8 = 8;
    sbit  AWD3CH8_bit at ADC_AWD3CR.B8;
    const register unsigned short int AWD3CH9 = 9;
    sbit  AWD3CH9_bit at ADC_AWD3CR.B9;
    const register unsigned short int AWD3CH10 = 10;
    sbit  AWD3CH10_bit at ADC_AWD3CR.B10;
    const register unsigned short int AWD3CH11 = 11;
    sbit  AWD3CH11_bit at ADC_AWD3CR.B11;
    const register unsigned short int AWD3CH12 = 12;
    sbit  AWD3CH12_bit at ADC_AWD3CR.B12;
    const register unsigned short int AWD3CH13 = 13;
    sbit  AWD3CH13_bit at ADC_AWD3CR.B13;
    const register unsigned short int AWD3CH14 = 14;
    sbit  AWD3CH14_bit at ADC_AWD3CR.B14;
    const register unsigned short int AWD3CH15 = 15;
    sbit  AWD3CH15_bit at ADC_AWD3CR.B15;
    const register unsigned short int AWD3CH16 = 16;
    sbit  AWD3CH16_bit at ADC_AWD3CR.B16;
    const register unsigned short int AWD3CH17 = 17;
    sbit  AWD3CH17_bit at ADC_AWD3CR.B17;
    const register unsigned short int AWD3CH18 = 18;
    sbit  AWD3CH18_bit at ADC_AWD3CR.B18;

sfr unsigned long   volatile ADC_CALFACT          absolute 0x400124B4;
    const register unsigned short int CALFACT0 = 0;
    sbit  CALFACT0_bit at ADC_CALFACT.B0;
    const register unsigned short int CALFACT1 = 1;
    sbit  CALFACT1_bit at ADC_CALFACT.B1;
    const register unsigned short int CALFACT2 = 2;
    sbit  CALFACT2_bit at ADC_CALFACT.B2;
    const register unsigned short int CALFACT3 = 3;
    sbit  CALFACT3_bit at ADC_CALFACT.B3;
    const register unsigned short int CALFACT4 = 4;
    sbit  CALFACT4_bit at ADC_CALFACT.B4;
    const register unsigned short int CALFACT5 = 5;
    sbit  CALFACT5_bit at ADC_CALFACT.B5;
    const register unsigned short int CALFACT6 = 6;
    sbit  CALFACT6_bit at ADC_CALFACT.B6;

sfr unsigned long   volatile ADC_CCR              absolute 0x40012708;
    const register unsigned short int PRESC0 = 18;
    sbit  PRESC0_bit at ADC_CCR.B18;
    const register unsigned short int PRESC1 = 19;
    sbit  PRESC1_bit at ADC_CCR.B19;
    const register unsigned short int PRESC2 = 20;
    sbit  PRESC2_bit at ADC_CCR.B20;
    const register unsigned short int PRESC3 = 21;
    sbit  PRESC3_bit at ADC_CCR.B21;
    const register unsigned short int VREFEN = 22;
    sbit  VREFEN_bit at ADC_CCR.B22;
    const register unsigned short int TSEN = 23;
    sbit  TSEN_bit at ADC_CCR.B23;
    const register unsigned short int VBATEN = 24;
    sbit  VBATEN_bit at ADC_CCR.B24;

sfr unsigned long   volatile SYSCFG_CFGR1         absolute 0x40010000;
    const register unsigned short int I2C_PAx_FMP0 = 22;
    sbit  I2C_PAx_FMP0_bit at SYSCFG_CFGR1.B22;
    const register unsigned short int I2C_PAx_FMP1 = 23;
    sbit  I2C_PAx_FMP1_bit at SYSCFG_CFGR1.B23;
    const register unsigned short int I2C2_FMP = 21;
    sbit  I2C2_FMP_bit at SYSCFG_CFGR1.B21;
    const register unsigned short int I2C1_FMP = 20;
    sbit  I2C1_FMP_bit at SYSCFG_CFGR1.B20;
    const register unsigned short int I2C_PBx_FMP0 = 16;
    sbit  I2C_PBx_FMP0_bit at SYSCFG_CFGR1.B16;
    const register unsigned short int I2C_PBx_FMP1 = 17;
    sbit  I2C_PBx_FMP1_bit at SYSCFG_CFGR1.B17;
    const register unsigned short int I2C_PBx_FMP2 = 18;
    sbit  I2C_PBx_FMP2_bit at SYSCFG_CFGR1.B18;
    const register unsigned short int I2C_PBx_FMP3 = 19;
    sbit  I2C_PBx_FMP3_bit at SYSCFG_CFGR1.B19;
    const register unsigned short int BOOSTEN = 8;
    sbit  BOOSTEN_bit at SYSCFG_CFGR1.B8;
    const register unsigned short int IR_MOD0 = 6;
    sbit  IR_MOD0_bit at SYSCFG_CFGR1.B6;
    const register unsigned short int IR_MOD1 = 7;
    sbit  IR_MOD1_bit at SYSCFG_CFGR1.B7;
    const register unsigned short int IR_POL = 5;
    sbit  IR_POL_bit at SYSCFG_CFGR1.B5;
    const register unsigned short int PA11_PA12_RMP = 4;
    sbit  PA11_PA12_RMP_bit at SYSCFG_CFGR1.B4;
    const register unsigned short int MEM_MODE0 = 0;
    sbit  MEM_MODE0_bit at SYSCFG_CFGR1.B0;
    const register unsigned short int MEM_MODE1 = 1;
    sbit  MEM_MODE1_bit at SYSCFG_CFGR1.B1;

sfr unsigned long   volatile SYSCFG_CFGR2         absolute 0x40010018;
    const register unsigned short int LOCKUP_LOCK = 0;
    sbit  LOCKUP_LOCK_bit at SYSCFG_CFGR2.B0;
    const register unsigned short int SRAM_PARITY_LOCK = 1;
    sbit  SRAM_PARITY_LOCK_bit at SYSCFG_CFGR2.B1;
    const register unsigned short int PVD_LOCK = 2;
    sbit  PVD_LOCK_bit at SYSCFG_CFGR2.B2;
    const register unsigned short int ECC_LOCK = 3;
    sbit  ECC_LOCK_bit at SYSCFG_CFGR2.B3;
    const register unsigned short int SRAM_PEF = 8;
    sbit  SRAM_PEF_bit at SYSCFG_CFGR2.B8;
    const register unsigned short int PA1_CDEN = 16;
    sbit  PA1_CDEN_bit at SYSCFG_CFGR2.B16;
    const register unsigned short int PA3_CDEN = 17;
    sbit  PA3_CDEN_bit at SYSCFG_CFGR2.B17;
    const register unsigned short int PA5_CDEN = 18;
    sbit  PA5_CDEN_bit at SYSCFG_CFGR2.B18;
    const register unsigned short int PA6_CDEN = 19;
    sbit  PA6_CDEN_bit at SYSCFG_CFGR2.B19;
    const register unsigned short int PA13_CDEN = 20;
    sbit  PA13_CDEN_bit at SYSCFG_CFGR2.B20;
    const register unsigned short int PB0_CDEN = 21;
    sbit  PB0_CDEN_bit at SYSCFG_CFGR2.B21;
    const register unsigned short int PB1_CDEN = 22;
    sbit  PB1_CDEN_bit at SYSCFG_CFGR2.B22;
    const register unsigned short int PB2_CDEN = 23;
    sbit  PB2_CDEN_bit at SYSCFG_CFGR2.B23;

sfr unsigned long   volatile TAMP_CR1             absolute 0x4000B000;
    const register unsigned short int TAMP1E = 0;
    sbit  TAMP1E_bit at TAMP_CR1.B0;
    const register unsigned short int TAMP2E = 1;
    sbit  TAMP2E_bit at TAMP_CR1.B1;
    const register unsigned short int ITAMP1E = 16;
    sbit  ITAMP1E_bit at TAMP_CR1.B16;
    const register unsigned short int ITAMP3E = 18;
    sbit  ITAMP3E_bit at TAMP_CR1.B18;
    const register unsigned short int ITAMP4E = 19;
    sbit  ITAMP4E_bit at TAMP_CR1.B19;
    const register unsigned short int ITAMP5E = 20;
    sbit  ITAMP5E_bit at TAMP_CR1.B20;
    const register unsigned short int ITAMP6E = 21;
    sbit  ITAMP6E_bit at TAMP_CR1.B21;

sfr unsigned long   volatile TAMP_CR2             absolute 0x4000B004;
    const register unsigned short int TAMP1NOER = 0;
    sbit  TAMP1NOER_bit at TAMP_CR2.B0;
    const register unsigned short int TAMP2NOER = 1;
    sbit  TAMP2NOER_bit at TAMP_CR2.B1;
    const register unsigned short int TAMP1MSK = 16;
    sbit  TAMP1MSK_bit at TAMP_CR2.B16;
    const register unsigned short int TAMP2MSK = 17;
    sbit  TAMP2MSK_bit at TAMP_CR2.B17;
    const register unsigned short int TAMP1TRG = 24;
    sbit  TAMP1TRG_bit at TAMP_CR2.B24;
    const register unsigned short int TAMP2TRG = 25;
    sbit  TAMP2TRG_bit at TAMP_CR2.B25;

sfr unsigned long   volatile TAMP_FLTCR           absolute 0x4000B00C;
    const register unsigned short int TAMPFREQ0 = 0;
    sbit  TAMPFREQ0_bit at TAMP_FLTCR.B0;
    const register unsigned short int TAMPFREQ1 = 1;
    sbit  TAMPFREQ1_bit at TAMP_FLTCR.B1;
    const register unsigned short int TAMPFREQ2 = 2;
    sbit  TAMPFREQ2_bit at TAMP_FLTCR.B2;
    const register unsigned short int TAMPFLT0 = 3;
    sbit  TAMPFLT0_bit at TAMP_FLTCR.B3;
    const register unsigned short int TAMPFLT1 = 4;
    sbit  TAMPFLT1_bit at TAMP_FLTCR.B4;
    const register unsigned short int TAMPPRCH0 = 5;
    sbit  TAMPPRCH0_bit at TAMP_FLTCR.B5;
    const register unsigned short int TAMPPRCH1 = 6;
    sbit  TAMPPRCH1_bit at TAMP_FLTCR.B6;
    const register unsigned short int TAMPPUDIS = 7;
    sbit  TAMPPUDIS_bit at TAMP_FLTCR.B7;

sfr unsigned long   volatile TAMP_IER             absolute 0x4000B02C;
    const register unsigned short int TAMP1IE = 0;
    sbit  TAMP1IE_bit at TAMP_IER.B0;
    const register unsigned short int TAMP2IE = 1;
    sbit  TAMP2IE_bit at TAMP_IER.B1;
    const register unsigned short int ITAMP1IE = 16;
    sbit  ITAMP1IE_bit at TAMP_IER.B16;
    const register unsigned short int ITAMP3IE = 18;
    sbit  ITAMP3IE_bit at TAMP_IER.B18;
    const register unsigned short int ITAMP4IE = 19;
    sbit  ITAMP4IE_bit at TAMP_IER.B19;
    const register unsigned short int ITAMP5IE = 20;
    sbit  ITAMP5IE_bit at TAMP_IER.B20;
    const register unsigned short int ITAMP6IE = 21;
    sbit  ITAMP6IE_bit at TAMP_IER.B21;

sfr unsigned long   volatile TAMP_SR              absolute 0x4000B030;
    const register unsigned short int TAMP1F = 0;
    sbit  TAMP1F_bit at TAMP_SR.B0;
    const register unsigned short int TAMP2F = 1;
    sbit  TAMP2F_bit at TAMP_SR.B1;
    const register unsigned short int ITAMP1F = 16;
    sbit  ITAMP1F_bit at TAMP_SR.B16;
    const register unsigned short int ITAMP3F = 18;
    sbit  ITAMP3F_bit at TAMP_SR.B18;
    const register unsigned short int ITAMP4F = 19;
    sbit  ITAMP4F_bit at TAMP_SR.B19;
    const register unsigned short int ITAMP5F = 20;
    sbit  ITAMP5F_bit at TAMP_SR.B20;
    const register unsigned short int ITAMP6F = 21;
    sbit  ITAMP6F_bit at TAMP_SR.B21;
    const register unsigned short int ITAMP7F = 22;
    sbit  ITAMP7F_bit at TAMP_SR.B22;

sfr unsigned long   volatile TAMP_MISR            absolute 0x4000B034;
    const register unsigned short int TAMP1MF = 0;
    sbit  TAMP1MF_bit at TAMP_MISR.B0;
    const register unsigned short int TAMP2MF = 1;
    sbit  TAMP2MF_bit at TAMP_MISR.B1;
    const register unsigned short int ITAMP1MF = 16;
    sbit  ITAMP1MF_bit at TAMP_MISR.B16;
    const register unsigned short int ITAMP3MF = 18;
    sbit  ITAMP3MF_bit at TAMP_MISR.B18;
    const register unsigned short int ITAMP4MF = 19;
    sbit  ITAMP4MF_bit at TAMP_MISR.B19;
    const register unsigned short int ITAMP5MF = 20;
    sbit  ITAMP5MF_bit at TAMP_MISR.B20;
    const register unsigned short int ITAMP6MF = 21;
    sbit  ITAMP6MF_bit at TAMP_MISR.B21;

sfr unsigned long   volatile TAMP_SCR             absolute 0x4000B03C;
    const register unsigned short int CTAMP1F = 0;
    sbit  CTAMP1F_bit at TAMP_SCR.B0;
    const register unsigned short int CTAMP2F = 1;
    sbit  CTAMP2F_bit at TAMP_SCR.B1;
    const register unsigned short int CITAMP1F = 16;
    sbit  CITAMP1F_bit at TAMP_SCR.B16;
    const register unsigned short int CITAMP3F = 18;
    sbit  CITAMP3F_bit at TAMP_SCR.B18;
    const register unsigned short int CITAMP4F = 19;
    sbit  CITAMP4F_bit at TAMP_SCR.B19;
    const register unsigned short int CITAMP5F = 20;
    sbit  CITAMP5F_bit at TAMP_SCR.B20;
    const register unsigned short int CITAMP6F = 21;
    sbit  CITAMP6F_bit at TAMP_SCR.B21;
    const register unsigned short int CITAMP7F = 22;
    sbit  CITAMP7F_bit at TAMP_SCR.B22;

sfr unsigned long   volatile TAMP_BKP0R           absolute 0x4000B100;
    const register unsigned short int BKP0 = 0;
    sbit  BKP0_bit at TAMP_BKP0R.B0;
    const register unsigned short int BKP1 = 1;
    sbit  BKP1_bit at TAMP_BKP0R.B1;
    const register unsigned short int BKP2 = 2;
    sbit  BKP2_bit at TAMP_BKP0R.B2;
    const register unsigned short int BKP3 = 3;
    sbit  BKP3_bit at TAMP_BKP0R.B3;
    const register unsigned short int BKP4 = 4;
    sbit  BKP4_bit at TAMP_BKP0R.B4;
    const register unsigned short int BKP5 = 5;
    sbit  BKP5_bit at TAMP_BKP0R.B5;
    const register unsigned short int BKP6 = 6;
    sbit  BKP6_bit at TAMP_BKP0R.B6;
    const register unsigned short int BKP7 = 7;
    sbit  BKP7_bit at TAMP_BKP0R.B7;
    const register unsigned short int BKP8 = 8;
    sbit  BKP8_bit at TAMP_BKP0R.B8;
    const register unsigned short int BKP9 = 9;
    sbit  BKP9_bit at TAMP_BKP0R.B9;
    const register unsigned short int BKP10 = 10;
    sbit  BKP10_bit at TAMP_BKP0R.B10;
    const register unsigned short int BKP11 = 11;
    sbit  BKP11_bit at TAMP_BKP0R.B11;
    const register unsigned short int BKP12 = 12;
    sbit  BKP12_bit at TAMP_BKP0R.B12;
    const register unsigned short int BKP13 = 13;
    sbit  BKP13_bit at TAMP_BKP0R.B13;
    const register unsigned short int BKP14 = 14;
    sbit  BKP14_bit at TAMP_BKP0R.B14;
    const register unsigned short int BKP15 = 15;
    sbit  BKP15_bit at TAMP_BKP0R.B15;
    const register unsigned short int BKP16 = 16;
    sbit  BKP16_bit at TAMP_BKP0R.B16;
    const register unsigned short int BKP17 = 17;
    sbit  BKP17_bit at TAMP_BKP0R.B17;
    const register unsigned short int BKP18 = 18;
    sbit  BKP18_bit at TAMP_BKP0R.B18;
    const register unsigned short int BKP19 = 19;
    sbit  BKP19_bit at TAMP_BKP0R.B19;
    const register unsigned short int BKP20 = 20;
    sbit  BKP20_bit at TAMP_BKP0R.B20;
    const register unsigned short int BKP21 = 21;
    sbit  BKP21_bit at TAMP_BKP0R.B21;
    const register unsigned short int BKP22 = 22;
    sbit  BKP22_bit at TAMP_BKP0R.B22;
    const register unsigned short int BKP23 = 23;
    sbit  BKP23_bit at TAMP_BKP0R.B23;
    const register unsigned short int BKP24 = 24;
    sbit  BKP24_bit at TAMP_BKP0R.B24;
    const register unsigned short int BKP25 = 25;
    sbit  BKP25_bit at TAMP_BKP0R.B25;
    const register unsigned short int BKP26 = 26;
    sbit  BKP26_bit at TAMP_BKP0R.B26;
    const register unsigned short int BKP27 = 27;
    sbit  BKP27_bit at TAMP_BKP0R.B27;
    const register unsigned short int BKP28 = 28;
    sbit  BKP28_bit at TAMP_BKP0R.B28;
    const register unsigned short int BKP29 = 29;
    sbit  BKP29_bit at TAMP_BKP0R.B29;
    const register unsigned short int BKP30 = 30;
    sbit  BKP30_bit at TAMP_BKP0R.B30;
    const register unsigned short int BKP31 = 31;
    sbit  BKP31_bit at TAMP_BKP0R.B31;

sfr unsigned long   volatile TAMP_BKP1R           absolute 0x4000B104;
    sbit  BKP0_TAMP_BKP1R_bit at TAMP_BKP1R.B0;
    sbit  BKP1_TAMP_BKP1R_bit at TAMP_BKP1R.B1;
    sbit  BKP2_TAMP_BKP1R_bit at TAMP_BKP1R.B2;
    sbit  BKP3_TAMP_BKP1R_bit at TAMP_BKP1R.B3;
    sbit  BKP4_TAMP_BKP1R_bit at TAMP_BKP1R.B4;
    sbit  BKP5_TAMP_BKP1R_bit at TAMP_BKP1R.B5;
    sbit  BKP6_TAMP_BKP1R_bit at TAMP_BKP1R.B6;
    sbit  BKP7_TAMP_BKP1R_bit at TAMP_BKP1R.B7;
    sbit  BKP8_TAMP_BKP1R_bit at TAMP_BKP1R.B8;
    sbit  BKP9_TAMP_BKP1R_bit at TAMP_BKP1R.B9;
    sbit  BKP10_TAMP_BKP1R_bit at TAMP_BKP1R.B10;
    sbit  BKP11_TAMP_BKP1R_bit at TAMP_BKP1R.B11;
    sbit  BKP12_TAMP_BKP1R_bit at TAMP_BKP1R.B12;
    sbit  BKP13_TAMP_BKP1R_bit at TAMP_BKP1R.B13;
    sbit  BKP14_TAMP_BKP1R_bit at TAMP_BKP1R.B14;
    sbit  BKP15_TAMP_BKP1R_bit at TAMP_BKP1R.B15;
    sbit  BKP16_TAMP_BKP1R_bit at TAMP_BKP1R.B16;
    sbit  BKP17_TAMP_BKP1R_bit at TAMP_BKP1R.B17;
    sbit  BKP18_TAMP_BKP1R_bit at TAMP_BKP1R.B18;
    sbit  BKP19_TAMP_BKP1R_bit at TAMP_BKP1R.B19;
    sbit  BKP20_TAMP_BKP1R_bit at TAMP_BKP1R.B20;
    sbit  BKP21_TAMP_BKP1R_bit at TAMP_BKP1R.B21;
    sbit  BKP22_TAMP_BKP1R_bit at TAMP_BKP1R.B22;
    sbit  BKP23_TAMP_BKP1R_bit at TAMP_BKP1R.B23;
    sbit  BKP24_TAMP_BKP1R_bit at TAMP_BKP1R.B24;
    sbit  BKP25_TAMP_BKP1R_bit at TAMP_BKP1R.B25;
    sbit  BKP26_TAMP_BKP1R_bit at TAMP_BKP1R.B26;
    sbit  BKP27_TAMP_BKP1R_bit at TAMP_BKP1R.B27;
    sbit  BKP28_TAMP_BKP1R_bit at TAMP_BKP1R.B28;
    sbit  BKP29_TAMP_BKP1R_bit at TAMP_BKP1R.B29;
    sbit  BKP30_TAMP_BKP1R_bit at TAMP_BKP1R.B30;
    sbit  BKP31_TAMP_BKP1R_bit at TAMP_BKP1R.B31;

sfr unsigned long   volatile TAMP_BKP2R           absolute 0x4000B108;
    sbit  BKP0_TAMP_BKP2R_bit at TAMP_BKP2R.B0;
    sbit  BKP1_TAMP_BKP2R_bit at TAMP_BKP2R.B1;
    sbit  BKP2_TAMP_BKP2R_bit at TAMP_BKP2R.B2;
    sbit  BKP3_TAMP_BKP2R_bit at TAMP_BKP2R.B3;
    sbit  BKP4_TAMP_BKP2R_bit at TAMP_BKP2R.B4;
    sbit  BKP5_TAMP_BKP2R_bit at TAMP_BKP2R.B5;
    sbit  BKP6_TAMP_BKP2R_bit at TAMP_BKP2R.B6;
    sbit  BKP7_TAMP_BKP2R_bit at TAMP_BKP2R.B7;
    sbit  BKP8_TAMP_BKP2R_bit at TAMP_BKP2R.B8;
    sbit  BKP9_TAMP_BKP2R_bit at TAMP_BKP2R.B9;
    sbit  BKP10_TAMP_BKP2R_bit at TAMP_BKP2R.B10;
    sbit  BKP11_TAMP_BKP2R_bit at TAMP_BKP2R.B11;
    sbit  BKP12_TAMP_BKP2R_bit at TAMP_BKP2R.B12;
    sbit  BKP13_TAMP_BKP2R_bit at TAMP_BKP2R.B13;
    sbit  BKP14_TAMP_BKP2R_bit at TAMP_BKP2R.B14;
    sbit  BKP15_TAMP_BKP2R_bit at TAMP_BKP2R.B15;
    sbit  BKP16_TAMP_BKP2R_bit at TAMP_BKP2R.B16;
    sbit  BKP17_TAMP_BKP2R_bit at TAMP_BKP2R.B17;
    sbit  BKP18_TAMP_BKP2R_bit at TAMP_BKP2R.B18;
    sbit  BKP19_TAMP_BKP2R_bit at TAMP_BKP2R.B19;
    sbit  BKP20_TAMP_BKP2R_bit at TAMP_BKP2R.B20;
    sbit  BKP21_TAMP_BKP2R_bit at TAMP_BKP2R.B21;
    sbit  BKP22_TAMP_BKP2R_bit at TAMP_BKP2R.B22;
    sbit  BKP23_TAMP_BKP2R_bit at TAMP_BKP2R.B23;
    sbit  BKP24_TAMP_BKP2R_bit at TAMP_BKP2R.B24;
    sbit  BKP25_TAMP_BKP2R_bit at TAMP_BKP2R.B25;
    sbit  BKP26_TAMP_BKP2R_bit at TAMP_BKP2R.B26;
    sbit  BKP27_TAMP_BKP2R_bit at TAMP_BKP2R.B27;
    sbit  BKP28_TAMP_BKP2R_bit at TAMP_BKP2R.B28;
    sbit  BKP29_TAMP_BKP2R_bit at TAMP_BKP2R.B29;
    sbit  BKP30_TAMP_BKP2R_bit at TAMP_BKP2R.B30;
    sbit  BKP31_TAMP_BKP2R_bit at TAMP_BKP2R.B31;

sfr unsigned long   volatile TAMP_BKP3R           absolute 0x4000B10C;
    sbit  BKP0_TAMP_BKP3R_bit at TAMP_BKP3R.B0;
    sbit  BKP1_TAMP_BKP3R_bit at TAMP_BKP3R.B1;
    sbit  BKP2_TAMP_BKP3R_bit at TAMP_BKP3R.B2;
    sbit  BKP3_TAMP_BKP3R_bit at TAMP_BKP3R.B3;
    sbit  BKP4_TAMP_BKP3R_bit at TAMP_BKP3R.B4;
    sbit  BKP5_TAMP_BKP3R_bit at TAMP_BKP3R.B5;
    sbit  BKP6_TAMP_BKP3R_bit at TAMP_BKP3R.B6;
    sbit  BKP7_TAMP_BKP3R_bit at TAMP_BKP3R.B7;
    sbit  BKP8_TAMP_BKP3R_bit at TAMP_BKP3R.B8;
    sbit  BKP9_TAMP_BKP3R_bit at TAMP_BKP3R.B9;
    sbit  BKP10_TAMP_BKP3R_bit at TAMP_BKP3R.B10;
    sbit  BKP11_TAMP_BKP3R_bit at TAMP_BKP3R.B11;
    sbit  BKP12_TAMP_BKP3R_bit at TAMP_BKP3R.B12;
    sbit  BKP13_TAMP_BKP3R_bit at TAMP_BKP3R.B13;
    sbit  BKP14_TAMP_BKP3R_bit at TAMP_BKP3R.B14;
    sbit  BKP15_TAMP_BKP3R_bit at TAMP_BKP3R.B15;
    sbit  BKP16_TAMP_BKP3R_bit at TAMP_BKP3R.B16;
    sbit  BKP17_TAMP_BKP3R_bit at TAMP_BKP3R.B17;
    sbit  BKP18_TAMP_BKP3R_bit at TAMP_BKP3R.B18;
    sbit  BKP19_TAMP_BKP3R_bit at TAMP_BKP3R.B19;
    sbit  BKP20_TAMP_BKP3R_bit at TAMP_BKP3R.B20;
    sbit  BKP21_TAMP_BKP3R_bit at TAMP_BKP3R.B21;
    sbit  BKP22_TAMP_BKP3R_bit at TAMP_BKP3R.B22;
    sbit  BKP23_TAMP_BKP3R_bit at TAMP_BKP3R.B23;
    sbit  BKP24_TAMP_BKP3R_bit at TAMP_BKP3R.B24;
    sbit  BKP25_TAMP_BKP3R_bit at TAMP_BKP3R.B25;
    sbit  BKP26_TAMP_BKP3R_bit at TAMP_BKP3R.B26;
    sbit  BKP27_TAMP_BKP3R_bit at TAMP_BKP3R.B27;
    sbit  BKP28_TAMP_BKP3R_bit at TAMP_BKP3R.B28;
    sbit  BKP29_TAMP_BKP3R_bit at TAMP_BKP3R.B29;
    sbit  BKP30_TAMP_BKP3R_bit at TAMP_BKP3R.B30;
    sbit  BKP31_TAMP_BKP3R_bit at TAMP_BKP3R.B31;

sfr unsigned long   volatile TAMP_BKP4R           absolute 0x4000B110;
    sbit  BKP0_TAMP_BKP4R_bit at TAMP_BKP4R.B0;
    sbit  BKP1_TAMP_BKP4R_bit at TAMP_BKP4R.B1;
    sbit  BKP2_TAMP_BKP4R_bit at TAMP_BKP4R.B2;
    sbit  BKP3_TAMP_BKP4R_bit at TAMP_BKP4R.B3;
    sbit  BKP4_TAMP_BKP4R_bit at TAMP_BKP4R.B4;
    sbit  BKP5_TAMP_BKP4R_bit at TAMP_BKP4R.B5;
    sbit  BKP6_TAMP_BKP4R_bit at TAMP_BKP4R.B6;
    sbit  BKP7_TAMP_BKP4R_bit at TAMP_BKP4R.B7;
    sbit  BKP8_TAMP_BKP4R_bit at TAMP_BKP4R.B8;
    sbit  BKP9_TAMP_BKP4R_bit at TAMP_BKP4R.B9;
    sbit  BKP10_TAMP_BKP4R_bit at TAMP_BKP4R.B10;
    sbit  BKP11_TAMP_BKP4R_bit at TAMP_BKP4R.B11;
    sbit  BKP12_TAMP_BKP4R_bit at TAMP_BKP4R.B12;
    sbit  BKP13_TAMP_BKP4R_bit at TAMP_BKP4R.B13;
    sbit  BKP14_TAMP_BKP4R_bit at TAMP_BKP4R.B14;
    sbit  BKP15_TAMP_BKP4R_bit at TAMP_BKP4R.B15;
    sbit  BKP16_TAMP_BKP4R_bit at TAMP_BKP4R.B16;
    sbit  BKP17_TAMP_BKP4R_bit at TAMP_BKP4R.B17;
    sbit  BKP18_TAMP_BKP4R_bit at TAMP_BKP4R.B18;
    sbit  BKP19_TAMP_BKP4R_bit at TAMP_BKP4R.B19;
    sbit  BKP20_TAMP_BKP4R_bit at TAMP_BKP4R.B20;
    sbit  BKP21_TAMP_BKP4R_bit at TAMP_BKP4R.B21;
    sbit  BKP22_TAMP_BKP4R_bit at TAMP_BKP4R.B22;
    sbit  BKP23_TAMP_BKP4R_bit at TAMP_BKP4R.B23;
    sbit  BKP24_TAMP_BKP4R_bit at TAMP_BKP4R.B24;
    sbit  BKP25_TAMP_BKP4R_bit at TAMP_BKP4R.B25;
    sbit  BKP26_TAMP_BKP4R_bit at TAMP_BKP4R.B26;
    sbit  BKP27_TAMP_BKP4R_bit at TAMP_BKP4R.B27;
    sbit  BKP28_TAMP_BKP4R_bit at TAMP_BKP4R.B28;
    sbit  BKP29_TAMP_BKP4R_bit at TAMP_BKP4R.B29;
    sbit  BKP30_TAMP_BKP4R_bit at TAMP_BKP4R.B30;
    sbit  BKP31_TAMP_BKP4R_bit at TAMP_BKP4R.B31;

sfr unsigned long   volatile LPTIM1_ISR           absolute 0x40007C00;
    const register unsigned short int DOWN = 6;
    sbit  DOWN_bit at LPTIM1_ISR.B6;
    const register unsigned short int UP = 5;
    sbit  UP_bit at LPTIM1_ISR.B5;
    const register unsigned short int ARROK = 4;
    sbit  ARROK_bit at LPTIM1_ISR.B4;
    const register unsigned short int CMPOK = 3;
    sbit  CMPOK_bit at LPTIM1_ISR.B3;
    const register unsigned short int EXTTRIG = 2;
    sbit  EXTTRIG_bit at LPTIM1_ISR.B2;
    const register unsigned short int ARRM = 1;
    sbit  ARRM_bit at LPTIM1_ISR.B1;
    const register unsigned short int CMPM = 0;
    sbit  CMPM_bit at LPTIM1_ISR.B0;

sfr unsigned long   volatile LPTIM1_ICR           absolute 0x40007C04;
    const register unsigned short int DOWNCF = 6;
    sbit  DOWNCF_bit at LPTIM1_ICR.B6;
    const register unsigned short int UPCF = 5;
    sbit  UPCF_bit at LPTIM1_ICR.B5;
    const register unsigned short int ARROKCF = 4;
    sbit  ARROKCF_bit at LPTIM1_ICR.B4;
    const register unsigned short int CMPOKCF = 3;
    sbit  CMPOKCF_bit at LPTIM1_ICR.B3;
    const register unsigned short int EXTTRIGCF = 2;
    sbit  EXTTRIGCF_bit at LPTIM1_ICR.B2;
    const register unsigned short int ARRMCF = 1;
    sbit  ARRMCF_bit at LPTIM1_ICR.B1;
    const register unsigned short int CMPMCF = 0;
    sbit  CMPMCF_bit at LPTIM1_ICR.B0;

sfr unsigned long   volatile LPTIM1_IER           absolute 0x40007C08;
    const register unsigned short int DOWNIE = 6;
    sbit  DOWNIE_bit at LPTIM1_IER.B6;
    const register unsigned short int UPIE = 5;
    sbit  UPIE_bit at LPTIM1_IER.B5;
    const register unsigned short int ARROKIE = 4;
    sbit  ARROKIE_bit at LPTIM1_IER.B4;
    const register unsigned short int CMPOKIE = 3;
    sbit  CMPOKIE_bit at LPTIM1_IER.B3;
    const register unsigned short int EXTTRIGIE = 2;
    sbit  EXTTRIGIE_bit at LPTIM1_IER.B2;
    const register unsigned short int ARRMIE = 1;
    sbit  ARRMIE_bit at LPTIM1_IER.B1;
    const register unsigned short int CMPMIE = 0;
    sbit  CMPMIE_bit at LPTIM1_IER.B0;

sfr unsigned long   volatile LPTIM1_CFGR          absolute 0x40007C0C;
    const register unsigned short int ENC = 24;
    sbit  ENC_bit at LPTIM1_CFGR.B24;
    const register unsigned short int COUNTMODE = 23;
    sbit  COUNTMODE_bit at LPTIM1_CFGR.B23;
    const register unsigned short int PRELOAD = 22;
    sbit  PRELOAD_bit at LPTIM1_CFGR.B22;
    const register unsigned short int WAVPOL = 21;
    sbit  WAVPOL_bit at LPTIM1_CFGR.B21;
    const register unsigned short int WAVE = 20;
    sbit  WAVE_bit at LPTIM1_CFGR.B20;
    const register unsigned short int TIMOUT = 19;
    sbit  TIMOUT_bit at LPTIM1_CFGR.B19;
    const register unsigned short int TRIGEN0 = 17;
    sbit  TRIGEN0_bit at LPTIM1_CFGR.B17;
    const register unsigned short int TRIGEN1 = 18;
    sbit  TRIGEN1_bit at LPTIM1_CFGR.B18;
    const register unsigned short int TRIGSEL0 = 13;
    sbit  TRIGSEL0_bit at LPTIM1_CFGR.B13;
    const register unsigned short int TRIGSEL1 = 14;
    sbit  TRIGSEL1_bit at LPTIM1_CFGR.B14;
    const register unsigned short int TRIGSEL2 = 15;
    sbit  TRIGSEL2_bit at LPTIM1_CFGR.B15;
    sbit  PRESC0_LPTIM1_CFGR_bit at LPTIM1_CFGR.B9;
    sbit  PRESC1_LPTIM1_CFGR_bit at LPTIM1_CFGR.B10;
    sbit  PRESC2_LPTIM1_CFGR_bit at LPTIM1_CFGR.B11;
    const register unsigned short int TRGFLT0 = 6;
    sbit  TRGFLT0_bit at LPTIM1_CFGR.B6;
    const register unsigned short int TRGFLT1 = 7;
    sbit  TRGFLT1_bit at LPTIM1_CFGR.B7;
    const register unsigned short int CKFLT0 = 3;
    sbit  CKFLT0_bit at LPTIM1_CFGR.B3;
    const register unsigned short int CKFLT1 = 4;
    sbit  CKFLT1_bit at LPTIM1_CFGR.B4;
    const register unsigned short int CKPOL0 = 1;
    sbit  CKPOL0_bit at LPTIM1_CFGR.B1;
    const register unsigned short int CKPOL1 = 2;
    sbit  CKPOL1_bit at LPTIM1_CFGR.B2;
    const register unsigned short int CKSEL = 0;
    sbit  CKSEL_bit at LPTIM1_CFGR.B0;

sfr unsigned long   volatile LPTIM1_CR            absolute 0x40007C10;
    const register unsigned short int RSTARE = 4;
    sbit  RSTARE_bit at LPTIM1_CR.B4;
    const register unsigned short int COUNTRST = 3;
    sbit  COUNTRST_bit at LPTIM1_CR.B3;
    const register unsigned short int CNTSTRT = 2;
    sbit  CNTSTRT_bit at LPTIM1_CR.B2;
    const register unsigned short int SNGSTRT = 1;
    sbit  SNGSTRT_bit at LPTIM1_CR.B1;
    const register unsigned short int ENABLE_ = 0;
    sbit  ENABLE_bit at LPTIM1_CR.B0;

sfr unsigned long   volatile LPTIM1_CMP           absolute 0x40007C14;
    const register unsigned short int CMP0 = 0;
    sbit  CMP0_bit at LPTIM1_CMP.B0;
    const register unsigned short int CMP1 = 1;
    sbit  CMP1_bit at LPTIM1_CMP.B1;
    const register unsigned short int CMP2 = 2;
    sbit  CMP2_bit at LPTIM1_CMP.B2;
    const register unsigned short int CMP3 = 3;
    sbit  CMP3_bit at LPTIM1_CMP.B3;
    const register unsigned short int CMP4 = 4;
    sbit  CMP4_bit at LPTIM1_CMP.B4;
    const register unsigned short int CMP5 = 5;
    sbit  CMP5_bit at LPTIM1_CMP.B5;
    const register unsigned short int CMP6 = 6;
    sbit  CMP6_bit at LPTIM1_CMP.B6;
    const register unsigned short int CMP7 = 7;
    sbit  CMP7_bit at LPTIM1_CMP.B7;
    const register unsigned short int CMP8 = 8;
    sbit  CMP8_bit at LPTIM1_CMP.B8;
    const register unsigned short int CMP9 = 9;
    sbit  CMP9_bit at LPTIM1_CMP.B9;
    const register unsigned short int CMP10 = 10;
    sbit  CMP10_bit at LPTIM1_CMP.B10;
    const register unsigned short int CMP11 = 11;
    sbit  CMP11_bit at LPTIM1_CMP.B11;
    const register unsigned short int CMP12 = 12;
    sbit  CMP12_bit at LPTIM1_CMP.B12;
    const register unsigned short int CMP13 = 13;
    sbit  CMP13_bit at LPTIM1_CMP.B13;
    const register unsigned short int CMP14 = 14;
    sbit  CMP14_bit at LPTIM1_CMP.B14;
    const register unsigned short int CMP15 = 15;
    sbit  CMP15_bit at LPTIM1_CMP.B15;

sfr unsigned long   volatile LPTIM1_ARR           absolute 0x40007C18;
    sbit  ARR0_LPTIM1_ARR_bit at LPTIM1_ARR.B0;
    sbit  ARR1_LPTIM1_ARR_bit at LPTIM1_ARR.B1;
    sbit  ARR2_LPTIM1_ARR_bit at LPTIM1_ARR.B2;
    sbit  ARR3_LPTIM1_ARR_bit at LPTIM1_ARR.B3;
    sbit  ARR4_LPTIM1_ARR_bit at LPTIM1_ARR.B4;
    sbit  ARR5_LPTIM1_ARR_bit at LPTIM1_ARR.B5;
    sbit  ARR6_LPTIM1_ARR_bit at LPTIM1_ARR.B6;
    sbit  ARR7_LPTIM1_ARR_bit at LPTIM1_ARR.B7;
    sbit  ARR8_LPTIM1_ARR_bit at LPTIM1_ARR.B8;
    sbit  ARR9_LPTIM1_ARR_bit at LPTIM1_ARR.B9;
    sbit  ARR10_LPTIM1_ARR_bit at LPTIM1_ARR.B10;
    sbit  ARR11_LPTIM1_ARR_bit at LPTIM1_ARR.B11;
    sbit  ARR12_LPTIM1_ARR_bit at LPTIM1_ARR.B12;
    sbit  ARR13_LPTIM1_ARR_bit at LPTIM1_ARR.B13;
    sbit  ARR14_LPTIM1_ARR_bit at LPTIM1_ARR.B14;
    sbit  ARR15_LPTIM1_ARR_bit at LPTIM1_ARR.B15;

sfr unsigned long   volatile LPTIM1_CNT           absolute 0x40007C1C;
    sbit  CNT0_LPTIM1_CNT_bit at LPTIM1_CNT.B0;
    sbit  CNT1_LPTIM1_CNT_bit at LPTIM1_CNT.B1;
    sbit  CNT2_LPTIM1_CNT_bit at LPTIM1_CNT.B2;
    sbit  CNT3_LPTIM1_CNT_bit at LPTIM1_CNT.B3;
    sbit  CNT4_LPTIM1_CNT_bit at LPTIM1_CNT.B4;
    sbit  CNT5_LPTIM1_CNT_bit at LPTIM1_CNT.B5;
    sbit  CNT6_LPTIM1_CNT_bit at LPTIM1_CNT.B6;
    sbit  CNT7_LPTIM1_CNT_bit at LPTIM1_CNT.B7;
    sbit  CNT8_LPTIM1_CNT_bit at LPTIM1_CNT.B8;
    sbit  CNT9_LPTIM1_CNT_bit at LPTIM1_CNT.B9;
    sbit  CNT10_LPTIM1_CNT_bit at LPTIM1_CNT.B10;
    sbit  CNT11_LPTIM1_CNT_bit at LPTIM1_CNT.B11;
    sbit  CNT12_LPTIM1_CNT_bit at LPTIM1_CNT.B12;
    sbit  CNT13_LPTIM1_CNT_bit at LPTIM1_CNT.B13;
    sbit  CNT14_LPTIM1_CNT_bit at LPTIM1_CNT.B14;
    sbit  CNT15_LPTIM1_CNT_bit at LPTIM1_CNT.B15;

sfr unsigned long   volatile LPTIM1_CFGR2         absolute 0x40007C24;
    const register unsigned short int IN2SEL0 = 4;
    sbit  IN2SEL0_bit at LPTIM1_CFGR2.B4;
    const register unsigned short int IN2SEL1 = 5;
    sbit  IN2SEL1_bit at LPTIM1_CFGR2.B5;
    const register unsigned short int IN1SEL0 = 0;
    sbit  IN1SEL0_bit at LPTIM1_CFGR2.B0;
    const register unsigned short int IN1SEL1 = 1;
    sbit  IN1SEL1_bit at LPTIM1_CFGR2.B1;

sfr unsigned long   volatile LPTIM2_ISR           absolute 0x40009400;
    sbit  DOWN_LPTIM2_ISR_bit at LPTIM2_ISR.B6;
    sbit  UP_LPTIM2_ISR_bit at LPTIM2_ISR.B5;
    sbit  ARROK_LPTIM2_ISR_bit at LPTIM2_ISR.B4;
    sbit  CMPOK_LPTIM2_ISR_bit at LPTIM2_ISR.B3;
    sbit  EXTTRIG_LPTIM2_ISR_bit at LPTIM2_ISR.B2;
    sbit  ARRM_LPTIM2_ISR_bit at LPTIM2_ISR.B1;
    sbit  CMPM_LPTIM2_ISR_bit at LPTIM2_ISR.B0;

sfr unsigned long   volatile LPTIM2_ICR           absolute 0x40009404;
    sbit  DOWNCF_LPTIM2_ICR_bit at LPTIM2_ICR.B6;
    sbit  UPCF_LPTIM2_ICR_bit at LPTIM2_ICR.B5;
    sbit  ARROKCF_LPTIM2_ICR_bit at LPTIM2_ICR.B4;
    sbit  CMPOKCF_LPTIM2_ICR_bit at LPTIM2_ICR.B3;
    sbit  EXTTRIGCF_LPTIM2_ICR_bit at LPTIM2_ICR.B2;
    sbit  ARRMCF_LPTIM2_ICR_bit at LPTIM2_ICR.B1;
    sbit  CMPMCF_LPTIM2_ICR_bit at LPTIM2_ICR.B0;

sfr unsigned long   volatile LPTIM2_IER           absolute 0x40009408;
    sbit  DOWNIE_LPTIM2_IER_bit at LPTIM2_IER.B6;
    sbit  UPIE_LPTIM2_IER_bit at LPTIM2_IER.B5;
    sbit  ARROKIE_LPTIM2_IER_bit at LPTIM2_IER.B4;
    sbit  CMPOKIE_LPTIM2_IER_bit at LPTIM2_IER.B3;
    sbit  EXTTRIGIE_LPTIM2_IER_bit at LPTIM2_IER.B2;
    sbit  ARRMIE_LPTIM2_IER_bit at LPTIM2_IER.B1;
    sbit  CMPMIE_LPTIM2_IER_bit at LPTIM2_IER.B0;

sfr unsigned long   volatile LPTIM2_CFGR          absolute 0x4000940C;
    sbit  ENC_LPTIM2_CFGR_bit at LPTIM2_CFGR.B24;
    sbit  COUNTMODE_LPTIM2_CFGR_bit at LPTIM2_CFGR.B23;
    sbit  PRELOAD_LPTIM2_CFGR_bit at LPTIM2_CFGR.B22;
    sbit  WAVPOL_LPTIM2_CFGR_bit at LPTIM2_CFGR.B21;
    sbit  WAVE_LPTIM2_CFGR_bit at LPTIM2_CFGR.B20;
    sbit  TIMOUT_LPTIM2_CFGR_bit at LPTIM2_CFGR.B19;
    sbit  TRIGEN0_LPTIM2_CFGR_bit at LPTIM2_CFGR.B17;
    sbit  TRIGEN1_LPTIM2_CFGR_bit at LPTIM2_CFGR.B18;
    sbit  TRIGSEL0_LPTIM2_CFGR_bit at LPTIM2_CFGR.B13;
    sbit  TRIGSEL1_LPTIM2_CFGR_bit at LPTIM2_CFGR.B14;
    sbit  TRIGSEL2_LPTIM2_CFGR_bit at LPTIM2_CFGR.B15;
    sbit  PRESC0_LPTIM2_CFGR_bit at LPTIM2_CFGR.B9;
    sbit  PRESC1_LPTIM2_CFGR_bit at LPTIM2_CFGR.B10;
    sbit  PRESC2_LPTIM2_CFGR_bit at LPTIM2_CFGR.B11;
    sbit  TRGFLT0_LPTIM2_CFGR_bit at LPTIM2_CFGR.B6;
    sbit  TRGFLT1_LPTIM2_CFGR_bit at LPTIM2_CFGR.B7;
    sbit  CKFLT0_LPTIM2_CFGR_bit at LPTIM2_CFGR.B3;
    sbit  CKFLT1_LPTIM2_CFGR_bit at LPTIM2_CFGR.B4;
    sbit  CKPOL0_LPTIM2_CFGR_bit at LPTIM2_CFGR.B1;
    sbit  CKPOL1_LPTIM2_CFGR_bit at LPTIM2_CFGR.B2;
    sbit  CKSEL_LPTIM2_CFGR_bit at LPTIM2_CFGR.B0;

sfr unsigned long   volatile LPTIM2_CR            absolute 0x40009410;
    sbit  RSTARE_LPTIM2_CR_bit at LPTIM2_CR.B4;
    sbit  COUNTRST_LPTIM2_CR_bit at LPTIM2_CR.B3;
    sbit  CNTSTRT_LPTIM2_CR_bit at LPTIM2_CR.B2;
    sbit  SNGSTRT_LPTIM2_CR_bit at LPTIM2_CR.B1;
    sbit  ENABLE_LPTIM2_CR_bit at LPTIM2_CR.B0;

sfr unsigned long   volatile LPTIM2_CMP           absolute 0x40009414;
    sbit  CMP0_LPTIM2_CMP_bit at LPTIM2_CMP.B0;
    sbit  CMP1_LPTIM2_CMP_bit at LPTIM2_CMP.B1;
    sbit  CMP2_LPTIM2_CMP_bit at LPTIM2_CMP.B2;
    sbit  CMP3_LPTIM2_CMP_bit at LPTIM2_CMP.B3;
    sbit  CMP4_LPTIM2_CMP_bit at LPTIM2_CMP.B4;
    sbit  CMP5_LPTIM2_CMP_bit at LPTIM2_CMP.B5;
    sbit  CMP6_LPTIM2_CMP_bit at LPTIM2_CMP.B6;
    sbit  CMP7_LPTIM2_CMP_bit at LPTIM2_CMP.B7;
    sbit  CMP8_LPTIM2_CMP_bit at LPTIM2_CMP.B8;
    sbit  CMP9_LPTIM2_CMP_bit at LPTIM2_CMP.B9;
    sbit  CMP10_LPTIM2_CMP_bit at LPTIM2_CMP.B10;
    sbit  CMP11_LPTIM2_CMP_bit at LPTIM2_CMP.B11;
    sbit  CMP12_LPTIM2_CMP_bit at LPTIM2_CMP.B12;
    sbit  CMP13_LPTIM2_CMP_bit at LPTIM2_CMP.B13;
    sbit  CMP14_LPTIM2_CMP_bit at LPTIM2_CMP.B14;
    sbit  CMP15_LPTIM2_CMP_bit at LPTIM2_CMP.B15;

sfr unsigned long   volatile LPTIM2_ARR           absolute 0x40009418;
    sbit  ARR0_LPTIM2_ARR_bit at LPTIM2_ARR.B0;
    sbit  ARR1_LPTIM2_ARR_bit at LPTIM2_ARR.B1;
    sbit  ARR2_LPTIM2_ARR_bit at LPTIM2_ARR.B2;
    sbit  ARR3_LPTIM2_ARR_bit at LPTIM2_ARR.B3;
    sbit  ARR4_LPTIM2_ARR_bit at LPTIM2_ARR.B4;
    sbit  ARR5_LPTIM2_ARR_bit at LPTIM2_ARR.B5;
    sbit  ARR6_LPTIM2_ARR_bit at LPTIM2_ARR.B6;
    sbit  ARR7_LPTIM2_ARR_bit at LPTIM2_ARR.B7;
    sbit  ARR8_LPTIM2_ARR_bit at LPTIM2_ARR.B8;
    sbit  ARR9_LPTIM2_ARR_bit at LPTIM2_ARR.B9;
    sbit  ARR10_LPTIM2_ARR_bit at LPTIM2_ARR.B10;
    sbit  ARR11_LPTIM2_ARR_bit at LPTIM2_ARR.B11;
    sbit  ARR12_LPTIM2_ARR_bit at LPTIM2_ARR.B12;
    sbit  ARR13_LPTIM2_ARR_bit at LPTIM2_ARR.B13;
    sbit  ARR14_LPTIM2_ARR_bit at LPTIM2_ARR.B14;
    sbit  ARR15_LPTIM2_ARR_bit at LPTIM2_ARR.B15;

sfr unsigned long   volatile LPTIM2_CNT           absolute 0x4000941C;
    sbit  CNT0_LPTIM2_CNT_bit at LPTIM2_CNT.B0;
    sbit  CNT1_LPTIM2_CNT_bit at LPTIM2_CNT.B1;
    sbit  CNT2_LPTIM2_CNT_bit at LPTIM2_CNT.B2;
    sbit  CNT3_LPTIM2_CNT_bit at LPTIM2_CNT.B3;
    sbit  CNT4_LPTIM2_CNT_bit at LPTIM2_CNT.B4;
    sbit  CNT5_LPTIM2_CNT_bit at LPTIM2_CNT.B5;
    sbit  CNT6_LPTIM2_CNT_bit at LPTIM2_CNT.B6;
    sbit  CNT7_LPTIM2_CNT_bit at LPTIM2_CNT.B7;
    sbit  CNT8_LPTIM2_CNT_bit at LPTIM2_CNT.B8;
    sbit  CNT9_LPTIM2_CNT_bit at LPTIM2_CNT.B9;
    sbit  CNT10_LPTIM2_CNT_bit at LPTIM2_CNT.B10;
    sbit  CNT11_LPTIM2_CNT_bit at LPTIM2_CNT.B11;
    sbit  CNT12_LPTIM2_CNT_bit at LPTIM2_CNT.B12;
    sbit  CNT13_LPTIM2_CNT_bit at LPTIM2_CNT.B13;
    sbit  CNT14_LPTIM2_CNT_bit at LPTIM2_CNT.B14;
    sbit  CNT15_LPTIM2_CNT_bit at LPTIM2_CNT.B15;

sfr unsigned long   volatile LPTIM2_CFGR2         absolute 0x40009424;
    sbit  IN2SEL0_LPTIM2_CFGR2_bit at LPTIM2_CFGR2.B4;
    sbit  IN2SEL1_LPTIM2_CFGR2_bit at LPTIM2_CFGR2.B5;
    sbit  IN1SEL0_LPTIM2_CFGR2_bit at LPTIM2_CFGR2.B0;
    sbit  IN1SEL1_LPTIM2_CFGR2_bit at LPTIM2_CFGR2.B1;

sfr unsigned long   volatile LPUART_CR1           absolute 0x40008000;
    sbit  RXFFIE_LPUART_CR1_bit at LPUART_CR1.B31;
    sbit  TXFEIE_LPUART_CR1_bit at LPUART_CR1.B30;
    sbit  FIFOEN_LPUART_CR1_bit at LPUART_CR1.B29;
    sbit  M1_LPUART_CR1_bit at LPUART_CR1.B28;
    sbit  DEAT0_LPUART_CR1_bit at LPUART_CR1.B21;
    sbit  DEAT1_LPUART_CR1_bit at LPUART_CR1.B22;
    sbit  DEAT2_LPUART_CR1_bit at LPUART_CR1.B23;
    sbit  DEAT3_LPUART_CR1_bit at LPUART_CR1.B24;
    sbit  DEAT4_LPUART_CR1_bit at LPUART_CR1.B25;
    const register unsigned short int DEDT00 = 16;
    sbit  DEDT00_bit at LPUART_CR1.B16;
    const register unsigned short int DEDT01 = 17;
    sbit  DEDT01_bit at LPUART_CR1.B17;
    const register unsigned short int DEDT02 = 18;
    sbit  DEDT02_bit at LPUART_CR1.B18;
    const register unsigned short int DEDT03 = 19;
    sbit  DEDT03_bit at LPUART_CR1.B19;
    const register unsigned short int DEDT04 = 20;
    sbit  DEDT04_bit at LPUART_CR1.B20;
    sbit  CMIE_LPUART_CR1_bit at LPUART_CR1.B14;
    sbit  MME_LPUART_CR1_bit at LPUART_CR1.B13;
    sbit  M0_LPUART_CR1_bit at LPUART_CR1.B12;
    sbit  WAKE_LPUART_CR1_bit at LPUART_CR1.B11;
    sbit  PCE_LPUART_CR1_bit at LPUART_CR1.B10;
    sbit  PS_LPUART_CR1_bit at LPUART_CR1.B9;
    sbit  PEIE_LPUART_CR1_bit at LPUART_CR1.B8;
    sbit  TXEIE_LPUART_CR1_bit at LPUART_CR1.B7;
    sbit  TCIE_LPUART_CR1_bit at LPUART_CR1.B6;
    sbit  RXNEIE_LPUART_CR1_bit at LPUART_CR1.B5;
    sbit  IDLEIE_LPUART_CR1_bit at LPUART_CR1.B4;
    sbit  TE_LPUART_CR1_bit at LPUART_CR1.B3;
    sbit  RE_LPUART_CR1_bit at LPUART_CR1.B2;
    sbit  UESM_LPUART_CR1_bit at LPUART_CR1.B1;
    sbit  UE_LPUART_CR1_bit at LPUART_CR1.B0;

sfr unsigned long   volatile LPUART_CR2           absolute 0x40008004;
    sbit  ADD4_70_LPUART_CR2_bit at LPUART_CR2.B28;
    sbit  ADD4_71_LPUART_CR2_bit at LPUART_CR2.B29;
    sbit  ADD4_72_LPUART_CR2_bit at LPUART_CR2.B30;
    sbit  ADD4_73_LPUART_CR2_bit at LPUART_CR2.B31;
    sbit  ADD0_30_LPUART_CR2_bit at LPUART_CR2.B24;
    sbit  ADD0_31_LPUART_CR2_bit at LPUART_CR2.B25;
    sbit  ADD0_32_LPUART_CR2_bit at LPUART_CR2.B26;
    sbit  ADD0_33_LPUART_CR2_bit at LPUART_CR2.B27;
    sbit  MSBFIRST_LPUART_CR2_bit at LPUART_CR2.B19;
    sbit  TAINV_LPUART_CR2_bit at LPUART_CR2.B18;
    sbit  TXINV_LPUART_CR2_bit at LPUART_CR2.B17;
    sbit  RXINV_LPUART_CR2_bit at LPUART_CR2.B16;
    sbit  SWAP_LPUART_CR2_bit at LPUART_CR2.B15;
    sbit  STOP0_LPUART_CR2_bit at LPUART_CR2.B12;
    sbit  STOP1_LPUART_CR2_bit at LPUART_CR2.B13;
    sbit  ADDM7_LPUART_CR2_bit at LPUART_CR2.B4;

sfr unsigned long   volatile LPUART_CR3           absolute 0x40008008;
    sbit  TXFTCFG0_LPUART_CR3_bit at LPUART_CR3.B29;
    sbit  TXFTCFG1_LPUART_CR3_bit at LPUART_CR3.B30;
    sbit  TXFTCFG2_LPUART_CR3_bit at LPUART_CR3.B31;
    sbit  RXFTIE_LPUART_CR3_bit at LPUART_CR3.B28;
    sbit  RXFTCFG0_LPUART_CR3_bit at LPUART_CR3.B25;
    sbit  RXFTCFG1_LPUART_CR3_bit at LPUART_CR3.B26;
    sbit  RXFTCFG2_LPUART_CR3_bit at LPUART_CR3.B27;
    sbit  TXFTIE_LPUART_CR3_bit at LPUART_CR3.B23;
    sbit  WUFIE_LPUART_CR3_bit at LPUART_CR3.B22;
    sbit  WUS0_LPUART_CR3_bit at LPUART_CR3.B20;
    sbit  WUS1_LPUART_CR3_bit at LPUART_CR3.B21;
    sbit  DEP_LPUART_CR3_bit at LPUART_CR3.B15;
    sbit  DEM_LPUART_CR3_bit at LPUART_CR3.B14;
    sbit  DDRE_LPUART_CR3_bit at LPUART_CR3.B13;
    sbit  OVRDIS_LPUART_CR3_bit at LPUART_CR3.B12;
    sbit  CTSIE_LPUART_CR3_bit at LPUART_CR3.B10;
    sbit  CTSE_LPUART_CR3_bit at LPUART_CR3.B9;
    sbit  RTSE_LPUART_CR3_bit at LPUART_CR3.B8;
    sbit  DMAT_LPUART_CR3_bit at LPUART_CR3.B7;
    sbit  DMAR_LPUART_CR3_bit at LPUART_CR3.B6;
    sbit  HDSEL_LPUART_CR3_bit at LPUART_CR3.B3;
    sbit  EIE_LPUART_CR3_bit at LPUART_CR3.B0;

sfr unsigned long   volatile LPUART_BRR           absolute 0x4000800C;
    const register unsigned short int BRR0 = 0;
    sbit  BRR0_bit at LPUART_BRR.B0;
    const register unsigned short int BRR1 = 1;
    sbit  BRR1_bit at LPUART_BRR.B1;
    const register unsigned short int BRR2 = 2;
    sbit  BRR2_bit at LPUART_BRR.B2;
    const register unsigned short int BRR3 = 3;
    sbit  BRR3_bit at LPUART_BRR.B3;
    const register unsigned short int BRR4 = 4;
    sbit  BRR4_bit at LPUART_BRR.B4;
    const register unsigned short int BRR5 = 5;
    sbit  BRR5_bit at LPUART_BRR.B5;
    const register unsigned short int BRR6 = 6;
    sbit  BRR6_bit at LPUART_BRR.B6;
    const register unsigned short int BRR7 = 7;
    sbit  BRR7_bit at LPUART_BRR.B7;
    const register unsigned short int BRR8 = 8;
    sbit  BRR8_bit at LPUART_BRR.B8;
    const register unsigned short int BRR9 = 9;
    sbit  BRR9_bit at LPUART_BRR.B9;
    const register unsigned short int BRR10 = 10;
    sbit  BRR10_bit at LPUART_BRR.B10;
    const register unsigned short int BRR11 = 11;
    sbit  BRR11_bit at LPUART_BRR.B11;
    const register unsigned short int BRR12 = 12;
    sbit  BRR12_bit at LPUART_BRR.B12;
    const register unsigned short int BRR13 = 13;
    sbit  BRR13_bit at LPUART_BRR.B13;
    const register unsigned short int BRR14 = 14;
    sbit  BRR14_bit at LPUART_BRR.B14;
    const register unsigned short int BRR15 = 15;
    sbit  BRR15_bit at LPUART_BRR.B15;
    const register unsigned short int BRR16 = 16;
    sbit  BRR16_bit at LPUART_BRR.B16;
    const register unsigned short int BRR17 = 17;
    sbit  BRR17_bit at LPUART_BRR.B17;
    const register unsigned short int BRR18 = 18;
    sbit  BRR18_bit at LPUART_BRR.B18;
    const register unsigned short int BRR19 = 19;
    sbit  BRR19_bit at LPUART_BRR.B19;

sfr unsigned long   volatile LPUART_RQR           absolute 0x40008018;
    sbit  TXFRQ_LPUART_RQR_bit at LPUART_RQR.B4;
    sbit  RXFRQ_LPUART_RQR_bit at LPUART_RQR.B3;
    sbit  MMRQ_LPUART_RQR_bit at LPUART_RQR.B2;
    sbit  SBKRQ_LPUART_RQR_bit at LPUART_RQR.B1;
    sbit  ABRRQ_LPUART_RQR_bit at LPUART_RQR.B0;

sfr unsigned long   volatile LPUART_ISR           absolute 0x4000801C;
    sbit  TXFT_LPUART_ISR_bit at LPUART_ISR.B27;
    sbit  RXFT_LPUART_ISR_bit at LPUART_ISR.B26;
    sbit  RXFF_LPUART_ISR_bit at LPUART_ISR.B24;
    sbit  TXFE_LPUART_ISR_bit at LPUART_ISR.B23;
    sbit  REACK_LPUART_ISR_bit at LPUART_ISR.B22;
    sbit  TEACK_LPUART_ISR_bit at LPUART_ISR.B21;
    sbit  WUF_LPUART_ISR_bit at LPUART_ISR.B20;
    sbit  RWU_LPUART_ISR_bit at LPUART_ISR.B19;
    sbit  SBKF_LPUART_ISR_bit at LPUART_ISR.B18;
    sbit  CMF_LPUART_ISR_bit at LPUART_ISR.B17;
    sbit  BUSY_LPUART_ISR_bit at LPUART_ISR.B16;
    sbit  CTS_LPUART_ISR_bit at LPUART_ISR.B10;
    sbit  CTSIF_LPUART_ISR_bit at LPUART_ISR.B9;
    sbit  TXE_LPUART_ISR_bit at LPUART_ISR.B7;
    sbit  TC_LPUART_ISR_bit at LPUART_ISR.B6;
    sbit  RXNE_LPUART_ISR_bit at LPUART_ISR.B5;
    sbit  IDLE_LPUART_ISR_bit at LPUART_ISR.B4;
    sbit  ORE_LPUART_ISR_bit at LPUART_ISR.B3;
    sbit  NF_LPUART_ISR_bit at LPUART_ISR.B2;
    sbit  FE_LPUART_ISR_bit at LPUART_ISR.B1;
    sbit  PE_LPUART_ISR_bit at LPUART_ISR.B0;

sfr unsigned long   volatile LPUART_ICR           absolute 0x40008020;
    sbit  WUCF_LPUART_ICR_bit at LPUART_ICR.B20;
    sbit  CMCF_LPUART_ICR_bit at LPUART_ICR.B17;
    sbit  CTSCF_LPUART_ICR_bit at LPUART_ICR.B9;
    sbit  TCCF_LPUART_ICR_bit at LPUART_ICR.B6;
    sbit  IDLECF_LPUART_ICR_bit at LPUART_ICR.B4;
    sbit  ORECF_LPUART_ICR_bit at LPUART_ICR.B3;
    sbit  NCF_LPUART_ICR_bit at LPUART_ICR.B2;
    sbit  FECF_LPUART_ICR_bit at LPUART_ICR.B1;
    sbit  PECF_LPUART_ICR_bit at LPUART_ICR.B0;

sfr unsigned long   volatile LPUART_RDR           absolute 0x40008024;
    sbit  RDR0_LPUART_RDR_bit at LPUART_RDR.B0;
    sbit  RDR1_LPUART_RDR_bit at LPUART_RDR.B1;
    sbit  RDR2_LPUART_RDR_bit at LPUART_RDR.B2;
    sbit  RDR3_LPUART_RDR_bit at LPUART_RDR.B3;
    sbit  RDR4_LPUART_RDR_bit at LPUART_RDR.B4;
    sbit  RDR5_LPUART_RDR_bit at LPUART_RDR.B5;
    sbit  RDR6_LPUART_RDR_bit at LPUART_RDR.B6;
    sbit  RDR7_LPUART_RDR_bit at LPUART_RDR.B7;
    sbit  RDR8_LPUART_RDR_bit at LPUART_RDR.B8;

sfr unsigned long   volatile LPUART_TDR           absolute 0x40008028;
    sbit  TDR0_LPUART_TDR_bit at LPUART_TDR.B0;
    sbit  TDR1_LPUART_TDR_bit at LPUART_TDR.B1;
    sbit  TDR2_LPUART_TDR_bit at LPUART_TDR.B2;
    sbit  TDR3_LPUART_TDR_bit at LPUART_TDR.B3;
    sbit  TDR4_LPUART_TDR_bit at LPUART_TDR.B4;
    sbit  TDR5_LPUART_TDR_bit at LPUART_TDR.B5;
    sbit  TDR6_LPUART_TDR_bit at LPUART_TDR.B6;
    sbit  TDR7_LPUART_TDR_bit at LPUART_TDR.B7;
    sbit  TDR8_LPUART_TDR_bit at LPUART_TDR.B8;

sfr unsigned long   volatile LPUART_PRESC         absolute 0x4000802C;
    sbit  PRESCALER0_LPUART_PRESC_bit at LPUART_PRESC.B0;
    sbit  PRESCALER1_LPUART_PRESC_bit at LPUART_PRESC.B1;
    sbit  PRESCALER2_LPUART_PRESC_bit at LPUART_PRESC.B2;
    sbit  PRESCALER3_LPUART_PRESC_bit at LPUART_PRESC.B3;

sfr unsigned long   volatile I2C1_CR1             absolute 0x40005400;
    sbit  PE_I2C1_CR1_bit at I2C1_CR1.B0;
    const register unsigned short int TXIE = 1;
    sbit  TXIE_bit at I2C1_CR1.B1;
    const register unsigned short int RXIE = 2;
    sbit  RXIE_bit at I2C1_CR1.B2;
    const register unsigned short int ADDRIE = 3;
    sbit  ADDRIE_bit at I2C1_CR1.B3;
    const register unsigned short int NACKIE = 4;
    sbit  NACKIE_bit at I2C1_CR1.B4;
    const register unsigned short int STOPIE = 5;
    sbit  STOPIE_bit at I2C1_CR1.B5;
    sbit  TCIE_I2C1_CR1_bit at I2C1_CR1.B6;
    sbit  ERRIE_I2C1_CR1_bit at I2C1_CR1.B7;
    const register unsigned short int DNF0 = 8;
    sbit  DNF0_bit at I2C1_CR1.B8;
    const register unsigned short int DNF1 = 9;
    sbit  DNF1_bit at I2C1_CR1.B9;
    const register unsigned short int DNF2 = 10;
    sbit  DNF2_bit at I2C1_CR1.B10;
    const register unsigned short int DNF3 = 11;
    sbit  DNF3_bit at I2C1_CR1.B11;
    const register unsigned short int ANFOFF = 12;
    sbit  ANFOFF_bit at I2C1_CR1.B12;
    sbit  TXDMAEN_I2C1_CR1_bit at I2C1_CR1.B14;
    sbit  RXDMAEN_I2C1_CR1_bit at I2C1_CR1.B15;
    const register unsigned short int SBC = 16;
    sbit  SBC_bit at I2C1_CR1.B16;
    const register unsigned short int NOSTRETCH = 17;
    sbit  NOSTRETCH_bit at I2C1_CR1.B17;
    const register unsigned short int WUPEN = 18;
    sbit  WUPEN_bit at I2C1_CR1.B18;
    const register unsigned short int GCEN = 19;
    sbit  GCEN_bit at I2C1_CR1.B19;
    const register unsigned short int SMBHEN = 20;
    sbit  SMBHEN_bit at I2C1_CR1.B20;
    const register unsigned short int SMBDEN = 21;
    sbit  SMBDEN_bit at I2C1_CR1.B21;
    const register unsigned short int ALERTEN = 22;
    sbit  ALERTEN_bit at I2C1_CR1.B22;
    const register unsigned short int PECEN = 23;
    sbit  PECEN_bit at I2C1_CR1.B23;

sfr unsigned long   volatile I2C1_CR2             absolute 0x40005404;
    const register unsigned short int PECBYTE = 26;
    sbit  PECBYTE_bit at I2C1_CR2.B26;
    const register unsigned short int AUTOEND = 25;
    sbit  AUTOEND_bit at I2C1_CR2.B25;
    const register unsigned short int RELOAD = 24;
    sbit  RELOAD_bit at I2C1_CR2.B24;
    const register unsigned short int NBYTES0 = 16;
    sbit  NBYTES0_bit at I2C1_CR2.B16;
    const register unsigned short int NBYTES1 = 17;
    sbit  NBYTES1_bit at I2C1_CR2.B17;
    const register unsigned short int NBYTES2 = 18;
    sbit  NBYTES2_bit at I2C1_CR2.B18;
    const register unsigned short int NBYTES3 = 19;
    sbit  NBYTES3_bit at I2C1_CR2.B19;
    const register unsigned short int NBYTES4 = 20;
    sbit  NBYTES4_bit at I2C1_CR2.B20;
    const register unsigned short int NBYTES5 = 21;
    sbit  NBYTES5_bit at I2C1_CR2.B21;
    const register unsigned short int NBYTES6 = 22;
    sbit  NBYTES6_bit at I2C1_CR2.B22;
    const register unsigned short int NBYTES7 = 23;
    sbit  NBYTES7_bit at I2C1_CR2.B23;
    sbit  NACK_I2C1_CR2_bit at I2C1_CR2.B15;
    const register unsigned short int STOP_ = 14;
    sbit  STOP_bit at I2C1_CR2.B14;
    const register unsigned short int START = 13;
    sbit  START_bit at I2C1_CR2.B13;
    const register unsigned short int HEAD10R = 12;
    sbit  HEAD10R_bit at I2C1_CR2.B12;
    const register unsigned short int ADD10 = 11;
    sbit  ADD10_bit at I2C1_CR2.B11;
    const register unsigned short int RD_WRN = 10;
    sbit  RD_WRN_bit at I2C1_CR2.B10;
    const register unsigned short int SADD0 = 0;
    sbit  SADD0_bit at I2C1_CR2.B0;
    const register unsigned short int SADD1 = 1;
    sbit  SADD1_bit at I2C1_CR2.B1;
    const register unsigned short int SADD2 = 2;
    sbit  SADD2_bit at I2C1_CR2.B2;
    const register unsigned short int SADD3 = 3;
    sbit  SADD3_bit at I2C1_CR2.B3;
    const register unsigned short int SADD4 = 4;
    sbit  SADD4_bit at I2C1_CR2.B4;
    const register unsigned short int SADD5 = 5;
    sbit  SADD5_bit at I2C1_CR2.B5;
    const register unsigned short int SADD6 = 6;
    sbit  SADD6_bit at I2C1_CR2.B6;
    const register unsigned short int SADD7 = 7;
    sbit  SADD7_bit at I2C1_CR2.B7;
    const register unsigned short int SADD8 = 8;
    sbit  SADD8_bit at I2C1_CR2.B8;
    const register unsigned short int SADD9 = 9;
    sbit  SADD9_bit at I2C1_CR2.B9;

sfr unsigned long   volatile I2C1_OAR1            absolute 0x40005408;
    const register unsigned short int OA1_0 = 0;
    sbit  OA1_0_bit at I2C1_OAR1.B0;
    const register unsigned short int OA1_7_10 = 1;
    sbit  OA1_7_10_bit at I2C1_OAR1.B1;
    const register unsigned short int OA1_7_11 = 2;
    sbit  OA1_7_11_bit at I2C1_OAR1.B2;
    const register unsigned short int OA1_7_12 = 3;
    sbit  OA1_7_12_bit at I2C1_OAR1.B3;
    const register unsigned short int OA1_7_13 = 4;
    sbit  OA1_7_13_bit at I2C1_OAR1.B4;
    const register unsigned short int OA1_7_14 = 5;
    sbit  OA1_7_14_bit at I2C1_OAR1.B5;
    const register unsigned short int OA1_7_15 = 6;
    sbit  OA1_7_15_bit at I2C1_OAR1.B6;
    const register unsigned short int OA1_7_16 = 7;
    sbit  OA1_7_16_bit at I2C1_OAR1.B7;
    const register unsigned short int OA1_8_90 = 8;
    sbit  OA1_8_90_bit at I2C1_OAR1.B8;
    const register unsigned short int OA1_8_91 = 9;
    sbit  OA1_8_91_bit at I2C1_OAR1.B9;
    const register unsigned short int OA1MODE = 10;
    sbit  OA1MODE_bit at I2C1_OAR1.B10;
    const register unsigned short int OA1EN = 15;
    sbit  OA1EN_bit at I2C1_OAR1.B15;

sfr unsigned long   volatile I2C1_OAR2            absolute 0x4000540C;
    const register unsigned short int OA20 = 1;
    sbit  OA20_bit at I2C1_OAR2.B1;
    const register unsigned short int OA21 = 2;
    sbit  OA21_bit at I2C1_OAR2.B2;
    const register unsigned short int OA22 = 3;
    sbit  OA22_bit at I2C1_OAR2.B3;
    const register unsigned short int OA23 = 4;
    sbit  OA23_bit at I2C1_OAR2.B4;
    const register unsigned short int OA24 = 5;
    sbit  OA24_bit at I2C1_OAR2.B5;
    const register unsigned short int OA25 = 6;
    sbit  OA25_bit at I2C1_OAR2.B6;
    const register unsigned short int OA26 = 7;
    sbit  OA26_bit at I2C1_OAR2.B7;
    const register unsigned short int OA2MSK0 = 8;
    sbit  OA2MSK0_bit at I2C1_OAR2.B8;
    const register unsigned short int OA2MSK1 = 9;
    sbit  OA2MSK1_bit at I2C1_OAR2.B9;
    const register unsigned short int OA2MSK2 = 10;
    sbit  OA2MSK2_bit at I2C1_OAR2.B10;
    const register unsigned short int OA2EN = 15;
    sbit  OA2EN_bit at I2C1_OAR2.B15;

sfr unsigned long   volatile I2C1_TIMINGR         absolute 0x40005410;
    const register unsigned short int SCLL0 = 0;
    sbit  SCLL0_bit at I2C1_TIMINGR.B0;
    const register unsigned short int SCLL1 = 1;
    sbit  SCLL1_bit at I2C1_TIMINGR.B1;
    const register unsigned short int SCLL2 = 2;
    sbit  SCLL2_bit at I2C1_TIMINGR.B2;
    const register unsigned short int SCLL3 = 3;
    sbit  SCLL3_bit at I2C1_TIMINGR.B3;
    const register unsigned short int SCLL4 = 4;
    sbit  SCLL4_bit at I2C1_TIMINGR.B4;
    const register unsigned short int SCLL5 = 5;
    sbit  SCLL5_bit at I2C1_TIMINGR.B5;
    const register unsigned short int SCLL6 = 6;
    sbit  SCLL6_bit at I2C1_TIMINGR.B6;
    const register unsigned short int SCLL7 = 7;
    sbit  SCLL7_bit at I2C1_TIMINGR.B7;
    const register unsigned short int SCLH0 = 8;
    sbit  SCLH0_bit at I2C1_TIMINGR.B8;
    const register unsigned short int SCLH1 = 9;
    sbit  SCLH1_bit at I2C1_TIMINGR.B9;
    const register unsigned short int SCLH2 = 10;
    sbit  SCLH2_bit at I2C1_TIMINGR.B10;
    const register unsigned short int SCLH3 = 11;
    sbit  SCLH3_bit at I2C1_TIMINGR.B11;
    const register unsigned short int SCLH4 = 12;
    sbit  SCLH4_bit at I2C1_TIMINGR.B12;
    const register unsigned short int SCLH5 = 13;
    sbit  SCLH5_bit at I2C1_TIMINGR.B13;
    const register unsigned short int SCLH6 = 14;
    sbit  SCLH6_bit at I2C1_TIMINGR.B14;
    const register unsigned short int SCLH7 = 15;
    sbit  SCLH7_bit at I2C1_TIMINGR.B15;
    const register unsigned short int SDADEL0 = 16;
    sbit  SDADEL0_bit at I2C1_TIMINGR.B16;
    const register unsigned short int SDADEL1 = 17;
    sbit  SDADEL1_bit at I2C1_TIMINGR.B17;
    const register unsigned short int SDADEL2 = 18;
    sbit  SDADEL2_bit at I2C1_TIMINGR.B18;
    const register unsigned short int SDADEL3 = 19;
    sbit  SDADEL3_bit at I2C1_TIMINGR.B19;
    const register unsigned short int SCLDEL0 = 20;
    sbit  SCLDEL0_bit at I2C1_TIMINGR.B20;
    const register unsigned short int SCLDEL1 = 21;
    sbit  SCLDEL1_bit at I2C1_TIMINGR.B21;
    const register unsigned short int SCLDEL2 = 22;
    sbit  SCLDEL2_bit at I2C1_TIMINGR.B22;
    const register unsigned short int SCLDEL3 = 23;
    sbit  SCLDEL3_bit at I2C1_TIMINGR.B23;
    sbit  PRESC0_I2C1_TIMINGR_bit at I2C1_TIMINGR.B28;
    sbit  PRESC1_I2C1_TIMINGR_bit at I2C1_TIMINGR.B29;
    sbit  PRESC2_I2C1_TIMINGR_bit at I2C1_TIMINGR.B30;
    sbit  PRESC3_I2C1_TIMINGR_bit at I2C1_TIMINGR.B31;

sfr unsigned long   volatile I2C1_TIMEOUTR        absolute 0x40005414;
    const register unsigned short int TIMEOUTA0 = 0;
    sbit  TIMEOUTA0_bit at I2C1_TIMEOUTR.B0;
    const register unsigned short int TIMEOUTA1 = 1;
    sbit  TIMEOUTA1_bit at I2C1_TIMEOUTR.B1;
    const register unsigned short int TIMEOUTA2 = 2;
    sbit  TIMEOUTA2_bit at I2C1_TIMEOUTR.B2;
    const register unsigned short int TIMEOUTA3 = 3;
    sbit  TIMEOUTA3_bit at I2C1_TIMEOUTR.B3;
    const register unsigned short int TIMEOUTA4 = 4;
    sbit  TIMEOUTA4_bit at I2C1_TIMEOUTR.B4;
    const register unsigned short int TIMEOUTA5 = 5;
    sbit  TIMEOUTA5_bit at I2C1_TIMEOUTR.B5;
    const register unsigned short int TIMEOUTA6 = 6;
    sbit  TIMEOUTA6_bit at I2C1_TIMEOUTR.B6;
    const register unsigned short int TIMEOUTA7 = 7;
    sbit  TIMEOUTA7_bit at I2C1_TIMEOUTR.B7;
    const register unsigned short int TIMEOUTA8 = 8;
    sbit  TIMEOUTA8_bit at I2C1_TIMEOUTR.B8;
    const register unsigned short int TIMEOUTA9 = 9;
    sbit  TIMEOUTA9_bit at I2C1_TIMEOUTR.B9;
    const register unsigned short int TIMEOUTA10 = 10;
    sbit  TIMEOUTA10_bit at I2C1_TIMEOUTR.B10;
    const register unsigned short int TIMEOUTA11 = 11;
    sbit  TIMEOUTA11_bit at I2C1_TIMEOUTR.B11;
    const register unsigned short int TIDLE = 12;
    sbit  TIDLE_bit at I2C1_TIMEOUTR.B12;
    const register unsigned short int TIMOUTEN = 15;
    sbit  TIMOUTEN_bit at I2C1_TIMEOUTR.B15;
    const register unsigned short int TIMEOUTB0 = 16;
    sbit  TIMEOUTB0_bit at I2C1_TIMEOUTR.B16;
    const register unsigned short int TIMEOUTB1 = 17;
    sbit  TIMEOUTB1_bit at I2C1_TIMEOUTR.B17;
    const register unsigned short int TIMEOUTB2 = 18;
    sbit  TIMEOUTB2_bit at I2C1_TIMEOUTR.B18;
    const register unsigned short int TIMEOUTB3 = 19;
    sbit  TIMEOUTB3_bit at I2C1_TIMEOUTR.B19;
    const register unsigned short int TIMEOUTB4 = 20;
    sbit  TIMEOUTB4_bit at I2C1_TIMEOUTR.B20;
    const register unsigned short int TIMEOUTB5 = 21;
    sbit  TIMEOUTB5_bit at I2C1_TIMEOUTR.B21;
    const register unsigned short int TIMEOUTB6 = 22;
    sbit  TIMEOUTB6_bit at I2C1_TIMEOUTR.B22;
    const register unsigned short int TIMEOUTB7 = 23;
    sbit  TIMEOUTB7_bit at I2C1_TIMEOUTR.B23;
    const register unsigned short int TIMEOUTB8 = 24;
    sbit  TIMEOUTB8_bit at I2C1_TIMEOUTR.B24;
    const register unsigned short int TIMEOUTB9 = 25;
    sbit  TIMEOUTB9_bit at I2C1_TIMEOUTR.B25;
    const register unsigned short int TIMEOUTB10 = 26;
    sbit  TIMEOUTB10_bit at I2C1_TIMEOUTR.B26;
    const register unsigned short int TIMEOUTB11 = 27;
    sbit  TIMEOUTB11_bit at I2C1_TIMEOUTR.B27;
    const register unsigned short int TEXTEN = 31;
    sbit  TEXTEN_bit at I2C1_TIMEOUTR.B31;

sfr unsigned long   volatile I2C1_ISR             absolute 0x40005418;
    const register unsigned short int ADDCODE0 = 17;
    sbit  ADDCODE0_bit at I2C1_ISR.B17;
    const register unsigned short int ADDCODE1 = 18;
    sbit  ADDCODE1_bit at I2C1_ISR.B18;
    const register unsigned short int ADDCODE2 = 19;
    sbit  ADDCODE2_bit at I2C1_ISR.B19;
    const register unsigned short int ADDCODE3 = 20;
    sbit  ADDCODE3_bit at I2C1_ISR.B20;
    const register unsigned short int ADDCODE4 = 21;
    sbit  ADDCODE4_bit at I2C1_ISR.B21;
    const register unsigned short int ADDCODE5 = 22;
    sbit  ADDCODE5_bit at I2C1_ISR.B22;
    const register unsigned short int ADDCODE6 = 23;
    sbit  ADDCODE6_bit at I2C1_ISR.B23;
    sbit  DIR_I2C1_ISR_bit at I2C1_ISR.B16;
    sbit  BUSY_I2C1_ISR_bit at I2C1_ISR.B15;
    const register unsigned short int ALERT = 13;
    sbit  ALERT_bit at I2C1_ISR.B13;
    const register unsigned short int TIMEOUT = 12;
    sbit  TIMEOUT_bit at I2C1_ISR.B12;
    const register unsigned short int PECERR = 11;
    sbit  PECERR_bit at I2C1_ISR.B11;
    sbit  OVR_I2C1_ISR_bit at I2C1_ISR.B10;
    const register unsigned short int ARLO = 9;
    sbit  ARLO_bit at I2C1_ISR.B9;
    const register unsigned short int BERR = 8;
    sbit  BERR_bit at I2C1_ISR.B8;
    const register unsigned short int TCR = 7;
    sbit  TCR_bit at I2C1_ISR.B7;
    sbit  TC_I2C1_ISR_bit at I2C1_ISR.B6;
    const register unsigned short int STOPF = 5;
    sbit  STOPF_bit at I2C1_ISR.B5;
    const register unsigned short int NACKF = 4;
    sbit  NACKF_bit at I2C1_ISR.B4;
    const register unsigned short int ADDR = 3;
    sbit  ADDR_bit at I2C1_ISR.B3;
    sbit  RXNE_I2C1_ISR_bit at I2C1_ISR.B2;
    const register unsigned short int TXIS = 1;
    sbit  TXIS_bit at I2C1_ISR.B1;
    sbit  TXE_I2C1_ISR_bit at I2C1_ISR.B0;

sfr unsigned long   volatile I2C1_ICR             absolute 0x4000541C;
    const register unsigned short int ALERTCF = 13;
    sbit  ALERTCF_bit at I2C1_ICR.B13;
    const register unsigned short int TIMOUTCF = 12;
    sbit  TIMOUTCF_bit at I2C1_ICR.B12;
    const register unsigned short int PECCF = 11;
    sbit  PECCF_bit at I2C1_ICR.B11;
    const register unsigned short int OVRCF = 10;
    sbit  OVRCF_bit at I2C1_ICR.B10;
    const register unsigned short int ARLOCF = 9;
    sbit  ARLOCF_bit at I2C1_ICR.B9;
    const register unsigned short int BERRCF = 8;
    sbit  BERRCF_bit at I2C1_ICR.B8;
    const register unsigned short int STOPCF = 5;
    sbit  STOPCF_bit at I2C1_ICR.B5;
    const register unsigned short int NACKCF = 4;
    sbit  NACKCF_bit at I2C1_ICR.B4;
    const register unsigned short int ADDRCF = 3;
    sbit  ADDRCF_bit at I2C1_ICR.B3;

sfr unsigned long   volatile I2C1_PECR            absolute 0x40005420;
    const register unsigned short int PEC0 = 0;
    sbit  PEC0_bit at I2C1_PECR.B0;
    const register unsigned short int PEC1 = 1;
    sbit  PEC1_bit at I2C1_PECR.B1;
    const register unsigned short int PEC2 = 2;
    sbit  PEC2_bit at I2C1_PECR.B2;
    const register unsigned short int PEC3 = 3;
    sbit  PEC3_bit at I2C1_PECR.B3;
    const register unsigned short int PEC4 = 4;
    sbit  PEC4_bit at I2C1_PECR.B4;
    const register unsigned short int PEC5 = 5;
    sbit  PEC5_bit at I2C1_PECR.B5;
    const register unsigned short int PEC6 = 6;
    sbit  PEC6_bit at I2C1_PECR.B6;
    const register unsigned short int PEC7 = 7;
    sbit  PEC7_bit at I2C1_PECR.B7;

sfr unsigned long   volatile I2C1_RXDR            absolute 0x40005424;
    const register unsigned short int RXDATA0 = 0;
    sbit  RXDATA0_bit at I2C1_RXDR.B0;
    const register unsigned short int RXDATA1 = 1;
    sbit  RXDATA1_bit at I2C1_RXDR.B1;
    const register unsigned short int RXDATA2 = 2;
    sbit  RXDATA2_bit at I2C1_RXDR.B2;
    const register unsigned short int RXDATA3 = 3;
    sbit  RXDATA3_bit at I2C1_RXDR.B3;
    const register unsigned short int RXDATA4 = 4;
    sbit  RXDATA4_bit at I2C1_RXDR.B4;
    const register unsigned short int RXDATA5 = 5;
    sbit  RXDATA5_bit at I2C1_RXDR.B5;
    const register unsigned short int RXDATA6 = 6;
    sbit  RXDATA6_bit at I2C1_RXDR.B6;
    const register unsigned short int RXDATA7 = 7;
    sbit  RXDATA7_bit at I2C1_RXDR.B7;

sfr unsigned long   volatile I2C1_TXDR            absolute 0x40005428;
    const register unsigned short int TXDATA0 = 0;
    sbit  TXDATA0_bit at I2C1_TXDR.B0;
    const register unsigned short int TXDATA1 = 1;
    sbit  TXDATA1_bit at I2C1_TXDR.B1;
    const register unsigned short int TXDATA2 = 2;
    sbit  TXDATA2_bit at I2C1_TXDR.B2;
    const register unsigned short int TXDATA3 = 3;
    sbit  TXDATA3_bit at I2C1_TXDR.B3;
    const register unsigned short int TXDATA4 = 4;
    sbit  TXDATA4_bit at I2C1_TXDR.B4;
    const register unsigned short int TXDATA5 = 5;
    sbit  TXDATA5_bit at I2C1_TXDR.B5;
    const register unsigned short int TXDATA6 = 6;
    sbit  TXDATA6_bit at I2C1_TXDR.B6;
    const register unsigned short int TXDATA7 = 7;
    sbit  TXDATA7_bit at I2C1_TXDR.B7;

sfr unsigned long   volatile I2C2_CR1             absolute 0x40005800;
    sbit  PE_I2C2_CR1_bit at I2C2_CR1.B0;
    sbit  TXIE_I2C2_CR1_bit at I2C2_CR1.B1;
    sbit  RXIE_I2C2_CR1_bit at I2C2_CR1.B2;
    sbit  ADDRIE_I2C2_CR1_bit at I2C2_CR1.B3;
    sbit  NACKIE_I2C2_CR1_bit at I2C2_CR1.B4;
    sbit  STOPIE_I2C2_CR1_bit at I2C2_CR1.B5;
    sbit  TCIE_I2C2_CR1_bit at I2C2_CR1.B6;
    sbit  ERRIE_I2C2_CR1_bit at I2C2_CR1.B7;
    sbit  DNF0_I2C2_CR1_bit at I2C2_CR1.B8;
    sbit  DNF1_I2C2_CR1_bit at I2C2_CR1.B9;
    sbit  DNF2_I2C2_CR1_bit at I2C2_CR1.B10;
    sbit  DNF3_I2C2_CR1_bit at I2C2_CR1.B11;
    sbit  ANFOFF_I2C2_CR1_bit at I2C2_CR1.B12;
    sbit  TXDMAEN_I2C2_CR1_bit at I2C2_CR1.B14;
    sbit  RXDMAEN_I2C2_CR1_bit at I2C2_CR1.B15;
    sbit  SBC_I2C2_CR1_bit at I2C2_CR1.B16;
    sbit  NOSTRETCH_I2C2_CR1_bit at I2C2_CR1.B17;
    sbit  WUPEN_I2C2_CR1_bit at I2C2_CR1.B18;
    sbit  GCEN_I2C2_CR1_bit at I2C2_CR1.B19;
    sbit  SMBHEN_I2C2_CR1_bit at I2C2_CR1.B20;
    sbit  SMBDEN_I2C2_CR1_bit at I2C2_CR1.B21;
    sbit  ALERTEN_I2C2_CR1_bit at I2C2_CR1.B22;
    sbit  PECEN_I2C2_CR1_bit at I2C2_CR1.B23;

sfr unsigned long   volatile I2C2_CR2             absolute 0x40005804;
    sbit  PECBYTE_I2C2_CR2_bit at I2C2_CR2.B26;
    sbit  AUTOEND_I2C2_CR2_bit at I2C2_CR2.B25;
    sbit  RELOAD_I2C2_CR2_bit at I2C2_CR2.B24;
    sbit  NBYTES0_I2C2_CR2_bit at I2C2_CR2.B16;
    sbit  NBYTES1_I2C2_CR2_bit at I2C2_CR2.B17;
    sbit  NBYTES2_I2C2_CR2_bit at I2C2_CR2.B18;
    sbit  NBYTES3_I2C2_CR2_bit at I2C2_CR2.B19;
    sbit  NBYTES4_I2C2_CR2_bit at I2C2_CR2.B20;
    sbit  NBYTES5_I2C2_CR2_bit at I2C2_CR2.B21;
    sbit  NBYTES6_I2C2_CR2_bit at I2C2_CR2.B22;
    sbit  NBYTES7_I2C2_CR2_bit at I2C2_CR2.B23;
    sbit  NACK_I2C2_CR2_bit at I2C2_CR2.B15;
    sbit  STOP_I2C2_CR2_bit at I2C2_CR2.B14;
    sbit  START_I2C2_CR2_bit at I2C2_CR2.B13;
    sbit  HEAD10R_I2C2_CR2_bit at I2C2_CR2.B12;
    sbit  ADD10_I2C2_CR2_bit at I2C2_CR2.B11;
    sbit  RD_WRN_I2C2_CR2_bit at I2C2_CR2.B10;
    sbit  SADD0_I2C2_CR2_bit at I2C2_CR2.B0;
    sbit  SADD1_I2C2_CR2_bit at I2C2_CR2.B1;
    sbit  SADD2_I2C2_CR2_bit at I2C2_CR2.B2;
    sbit  SADD3_I2C2_CR2_bit at I2C2_CR2.B3;
    sbit  SADD4_I2C2_CR2_bit at I2C2_CR2.B4;
    sbit  SADD5_I2C2_CR2_bit at I2C2_CR2.B5;
    sbit  SADD6_I2C2_CR2_bit at I2C2_CR2.B6;
    sbit  SADD7_I2C2_CR2_bit at I2C2_CR2.B7;
    sbit  SADD8_I2C2_CR2_bit at I2C2_CR2.B8;
    sbit  SADD9_I2C2_CR2_bit at I2C2_CR2.B9;

sfr unsigned long   volatile I2C2_OAR1            absolute 0x40005808;
    sbit  OA1_0_I2C2_OAR1_bit at I2C2_OAR1.B0;
    sbit  OA1_7_10_I2C2_OAR1_bit at I2C2_OAR1.B1;
    sbit  OA1_7_11_I2C2_OAR1_bit at I2C2_OAR1.B2;
    sbit  OA1_7_12_I2C2_OAR1_bit at I2C2_OAR1.B3;
    sbit  OA1_7_13_I2C2_OAR1_bit at I2C2_OAR1.B4;
    sbit  OA1_7_14_I2C2_OAR1_bit at I2C2_OAR1.B5;
    sbit  OA1_7_15_I2C2_OAR1_bit at I2C2_OAR1.B6;
    sbit  OA1_7_16_I2C2_OAR1_bit at I2C2_OAR1.B7;
    sbit  OA1_8_90_I2C2_OAR1_bit at I2C2_OAR1.B8;
    sbit  OA1_8_91_I2C2_OAR1_bit at I2C2_OAR1.B9;
    sbit  OA1MODE_I2C2_OAR1_bit at I2C2_OAR1.B10;
    sbit  OA1EN_I2C2_OAR1_bit at I2C2_OAR1.B15;

sfr unsigned long   volatile I2C2_OAR2            absolute 0x4000580C;
    sbit  OA20_I2C2_OAR2_bit at I2C2_OAR2.B1;
    sbit  OA21_I2C2_OAR2_bit at I2C2_OAR2.B2;
    sbit  OA22_I2C2_OAR2_bit at I2C2_OAR2.B3;
    sbit  OA23_I2C2_OAR2_bit at I2C2_OAR2.B4;
    sbit  OA24_I2C2_OAR2_bit at I2C2_OAR2.B5;
    sbit  OA25_I2C2_OAR2_bit at I2C2_OAR2.B6;
    sbit  OA26_I2C2_OAR2_bit at I2C2_OAR2.B7;
    sbit  OA2MSK0_I2C2_OAR2_bit at I2C2_OAR2.B8;
    sbit  OA2MSK1_I2C2_OAR2_bit at I2C2_OAR2.B9;
    sbit  OA2MSK2_I2C2_OAR2_bit at I2C2_OAR2.B10;
    sbit  OA2EN_I2C2_OAR2_bit at I2C2_OAR2.B15;

sfr unsigned long   volatile I2C2_TIMINGR         absolute 0x40005810;
    sbit  SCLL0_I2C2_TIMINGR_bit at I2C2_TIMINGR.B0;
    sbit  SCLL1_I2C2_TIMINGR_bit at I2C2_TIMINGR.B1;
    sbit  SCLL2_I2C2_TIMINGR_bit at I2C2_TIMINGR.B2;
    sbit  SCLL3_I2C2_TIMINGR_bit at I2C2_TIMINGR.B3;
    sbit  SCLL4_I2C2_TIMINGR_bit at I2C2_TIMINGR.B4;
    sbit  SCLL5_I2C2_TIMINGR_bit at I2C2_TIMINGR.B5;
    sbit  SCLL6_I2C2_TIMINGR_bit at I2C2_TIMINGR.B6;
    sbit  SCLL7_I2C2_TIMINGR_bit at I2C2_TIMINGR.B7;
    sbit  SCLH0_I2C2_TIMINGR_bit at I2C2_TIMINGR.B8;
    sbit  SCLH1_I2C2_TIMINGR_bit at I2C2_TIMINGR.B9;
    sbit  SCLH2_I2C2_TIMINGR_bit at I2C2_TIMINGR.B10;
    sbit  SCLH3_I2C2_TIMINGR_bit at I2C2_TIMINGR.B11;
    sbit  SCLH4_I2C2_TIMINGR_bit at I2C2_TIMINGR.B12;
    sbit  SCLH5_I2C2_TIMINGR_bit at I2C2_TIMINGR.B13;
    sbit  SCLH6_I2C2_TIMINGR_bit at I2C2_TIMINGR.B14;
    sbit  SCLH7_I2C2_TIMINGR_bit at I2C2_TIMINGR.B15;
    sbit  SDADEL0_I2C2_TIMINGR_bit at I2C2_TIMINGR.B16;
    sbit  SDADEL1_I2C2_TIMINGR_bit at I2C2_TIMINGR.B17;
    sbit  SDADEL2_I2C2_TIMINGR_bit at I2C2_TIMINGR.B18;
    sbit  SDADEL3_I2C2_TIMINGR_bit at I2C2_TIMINGR.B19;
    sbit  SCLDEL0_I2C2_TIMINGR_bit at I2C2_TIMINGR.B20;
    sbit  SCLDEL1_I2C2_TIMINGR_bit at I2C2_TIMINGR.B21;
    sbit  SCLDEL2_I2C2_TIMINGR_bit at I2C2_TIMINGR.B22;
    sbit  SCLDEL3_I2C2_TIMINGR_bit at I2C2_TIMINGR.B23;
    sbit  PRESC0_I2C2_TIMINGR_bit at I2C2_TIMINGR.B28;
    sbit  PRESC1_I2C2_TIMINGR_bit at I2C2_TIMINGR.B29;
    sbit  PRESC2_I2C2_TIMINGR_bit at I2C2_TIMINGR.B30;
    sbit  PRESC3_I2C2_TIMINGR_bit at I2C2_TIMINGR.B31;

sfr unsigned long   volatile I2C2_TIMEOUTR        absolute 0x40005814;
    sbit  TIMEOUTA0_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B0;
    sbit  TIMEOUTA1_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B1;
    sbit  TIMEOUTA2_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B2;
    sbit  TIMEOUTA3_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B3;
    sbit  TIMEOUTA4_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B4;
    sbit  TIMEOUTA5_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B5;
    sbit  TIMEOUTA6_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B6;
    sbit  TIMEOUTA7_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B7;
    sbit  TIMEOUTA8_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B8;
    sbit  TIMEOUTA9_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B9;
    sbit  TIMEOUTA10_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B10;
    sbit  TIMEOUTA11_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B11;
    sbit  TIDLE_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B12;
    sbit  TIMOUTEN_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B15;
    sbit  TIMEOUTB0_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B16;
    sbit  TIMEOUTB1_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B17;
    sbit  TIMEOUTB2_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B18;
    sbit  TIMEOUTB3_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B19;
    sbit  TIMEOUTB4_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B20;
    sbit  TIMEOUTB5_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B21;
    sbit  TIMEOUTB6_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B22;
    sbit  TIMEOUTB7_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B23;
    sbit  TIMEOUTB8_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B24;
    sbit  TIMEOUTB9_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B25;
    sbit  TIMEOUTB10_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B26;
    sbit  TIMEOUTB11_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B27;
    sbit  TEXTEN_I2C2_TIMEOUTR_bit at I2C2_TIMEOUTR.B31;

sfr unsigned long   volatile I2C2_ISR             absolute 0x40005818;
    sbit  ADDCODE0_I2C2_ISR_bit at I2C2_ISR.B17;
    sbit  ADDCODE1_I2C2_ISR_bit at I2C2_ISR.B18;
    sbit  ADDCODE2_I2C2_ISR_bit at I2C2_ISR.B19;
    sbit  ADDCODE3_I2C2_ISR_bit at I2C2_ISR.B20;
    sbit  ADDCODE4_I2C2_ISR_bit at I2C2_ISR.B21;
    sbit  ADDCODE5_I2C2_ISR_bit at I2C2_ISR.B22;
    sbit  ADDCODE6_I2C2_ISR_bit at I2C2_ISR.B23;
    sbit  DIR_I2C2_ISR_bit at I2C2_ISR.B16;
    sbit  BUSY_I2C2_ISR_bit at I2C2_ISR.B15;
    sbit  ALERT_I2C2_ISR_bit at I2C2_ISR.B13;
    sbit  TIMEOUT_I2C2_ISR_bit at I2C2_ISR.B12;
    sbit  PECERR_I2C2_ISR_bit at I2C2_ISR.B11;
    sbit  OVR_I2C2_ISR_bit at I2C2_ISR.B10;
    sbit  ARLO_I2C2_ISR_bit at I2C2_ISR.B9;
    sbit  BERR_I2C2_ISR_bit at I2C2_ISR.B8;
    sbit  TCR_I2C2_ISR_bit at I2C2_ISR.B7;
    sbit  TC_I2C2_ISR_bit at I2C2_ISR.B6;
    sbit  STOPF_I2C2_ISR_bit at I2C2_ISR.B5;
    sbit  NACKF_I2C2_ISR_bit at I2C2_ISR.B4;
    sbit  ADDR_I2C2_ISR_bit at I2C2_ISR.B3;
    sbit  RXNE_I2C2_ISR_bit at I2C2_ISR.B2;
    sbit  TXIS_I2C2_ISR_bit at I2C2_ISR.B1;
    sbit  TXE_I2C2_ISR_bit at I2C2_ISR.B0;

sfr unsigned long   volatile I2C2_ICR             absolute 0x4000581C;
    sbit  ALERTCF_I2C2_ICR_bit at I2C2_ICR.B13;
    sbit  TIMOUTCF_I2C2_ICR_bit at I2C2_ICR.B12;
    sbit  PECCF_I2C2_ICR_bit at I2C2_ICR.B11;
    sbit  OVRCF_I2C2_ICR_bit at I2C2_ICR.B10;
    sbit  ARLOCF_I2C2_ICR_bit at I2C2_ICR.B9;
    sbit  BERRCF_I2C2_ICR_bit at I2C2_ICR.B8;
    sbit  STOPCF_I2C2_ICR_bit at I2C2_ICR.B5;
    sbit  NACKCF_I2C2_ICR_bit at I2C2_ICR.B4;
    sbit  ADDRCF_I2C2_ICR_bit at I2C2_ICR.B3;

sfr unsigned long   volatile I2C2_PECR            absolute 0x40005820;
    sbit  PEC0_I2C2_PECR_bit at I2C2_PECR.B0;
    sbit  PEC1_I2C2_PECR_bit at I2C2_PECR.B1;
    sbit  PEC2_I2C2_PECR_bit at I2C2_PECR.B2;
    sbit  PEC3_I2C2_PECR_bit at I2C2_PECR.B3;
    sbit  PEC4_I2C2_PECR_bit at I2C2_PECR.B4;
    sbit  PEC5_I2C2_PECR_bit at I2C2_PECR.B5;
    sbit  PEC6_I2C2_PECR_bit at I2C2_PECR.B6;
    sbit  PEC7_I2C2_PECR_bit at I2C2_PECR.B7;

sfr unsigned long   volatile I2C2_RXDR            absolute 0x40005824;
    sbit  RXDATA0_I2C2_RXDR_bit at I2C2_RXDR.B0;
    sbit  RXDATA1_I2C2_RXDR_bit at I2C2_RXDR.B1;
    sbit  RXDATA2_I2C2_RXDR_bit at I2C2_RXDR.B2;
    sbit  RXDATA3_I2C2_RXDR_bit at I2C2_RXDR.B3;
    sbit  RXDATA4_I2C2_RXDR_bit at I2C2_RXDR.B4;
    sbit  RXDATA5_I2C2_RXDR_bit at I2C2_RXDR.B5;
    sbit  RXDATA6_I2C2_RXDR_bit at I2C2_RXDR.B6;
    sbit  RXDATA7_I2C2_RXDR_bit at I2C2_RXDR.B7;

sfr unsigned long   volatile I2C2_TXDR            absolute 0x40005828;
    sbit  TXDATA0_I2C2_TXDR_bit at I2C2_TXDR.B0;
    sbit  TXDATA1_I2C2_TXDR_bit at I2C2_TXDR.B1;
    sbit  TXDATA2_I2C2_TXDR_bit at I2C2_TXDR.B2;
    sbit  TXDATA3_I2C2_TXDR_bit at I2C2_TXDR.B3;
    sbit  TXDATA4_I2C2_TXDR_bit at I2C2_TXDR.B4;
    sbit  TXDATA5_I2C2_TXDR_bit at I2C2_TXDR.B5;
    sbit  TXDATA6_I2C2_TXDR_bit at I2C2_TXDR.B6;
    sbit  TXDATA7_I2C2_TXDR_bit at I2C2_TXDR.B7;

sfr unsigned long   volatile RTC_TR               absolute 0x40002800;
    const register unsigned short int PM = 22;
    sbit  PM_bit at RTC_TR.B22;
    const register unsigned short int HT0 = 20;
    sbit  HT0_bit at RTC_TR.B20;
    const register unsigned short int HT1 = 21;
    sbit  HT1_bit at RTC_TR.B21;
    const register unsigned short int HU0 = 16;
    sbit  HU0_bit at RTC_TR.B16;
    const register unsigned short int HU1 = 17;
    sbit  HU1_bit at RTC_TR.B17;
    const register unsigned short int HU2 = 18;
    sbit  HU2_bit at RTC_TR.B18;
    const register unsigned short int HU3 = 19;
    sbit  HU3_bit at RTC_TR.B19;
    const register unsigned short int MNT0 = 12;
    sbit  MNT0_bit at RTC_TR.B12;
    const register unsigned short int MNT1 = 13;
    sbit  MNT1_bit at RTC_TR.B13;
    const register unsigned short int MNT2 = 14;
    sbit  MNT2_bit at RTC_TR.B14;
    const register unsigned short int MNU0 = 8;
    sbit  MNU0_bit at RTC_TR.B8;
    const register unsigned short int MNU1 = 9;
    sbit  MNU1_bit at RTC_TR.B9;
    const register unsigned short int MNU2 = 10;
    sbit  MNU2_bit at RTC_TR.B10;
    const register unsigned short int MNU3 = 11;
    sbit  MNU3_bit at RTC_TR.B11;
    const register unsigned short int ST0 = 4;
    sbit  ST0_bit at RTC_TR.B4;
    const register unsigned short int ST1 = 5;
    sbit  ST1_bit at RTC_TR.B5;
    const register unsigned short int ST2 = 6;
    sbit  ST2_bit at RTC_TR.B6;
    const register unsigned short int SU0 = 0;
    sbit  SU0_bit at RTC_TR.B0;
    const register unsigned short int SU1 = 1;
    sbit  SU1_bit at RTC_TR.B1;
    const register unsigned short int SU2 = 2;
    sbit  SU2_bit at RTC_TR.B2;
    const register unsigned short int SU3 = 3;
    sbit  SU3_bit at RTC_TR.B3;

sfr unsigned long   volatile RTC_DR               absolute 0x40002804;
    const register unsigned short int YT0 = 20;
    sbit  YT0_bit at RTC_DR.B20;
    const register unsigned short int YT1 = 21;
    sbit  YT1_bit at RTC_DR.B21;
    const register unsigned short int YT2 = 22;
    sbit  YT2_bit at RTC_DR.B22;
    const register unsigned short int YT3 = 23;
    sbit  YT3_bit at RTC_DR.B23;
    const register unsigned short int YU0 = 16;
    sbit  YU0_bit at RTC_DR.B16;
    const register unsigned short int YU1 = 17;
    sbit  YU1_bit at RTC_DR.B17;
    const register unsigned short int YU2 = 18;
    sbit  YU2_bit at RTC_DR.B18;
    const register unsigned short int YU3 = 19;
    sbit  YU3_bit at RTC_DR.B19;
    const register unsigned short int WDU0 = 13;
    sbit  WDU0_bit at RTC_DR.B13;
    const register unsigned short int WDU1 = 14;
    sbit  WDU1_bit at RTC_DR.B14;
    const register unsigned short int WDU2 = 15;
    sbit  WDU2_bit at RTC_DR.B15;
    const register unsigned short int MT = 12;
    sbit  MT_bit at RTC_DR.B12;
    const register unsigned short int MU0 = 8;
    sbit  MU0_bit at RTC_DR.B8;
    const register unsigned short int MU1 = 9;
    sbit  MU1_bit at RTC_DR.B9;
    const register unsigned short int MU2 = 10;
    sbit  MU2_bit at RTC_DR.B10;
    const register unsigned short int MU3 = 11;
    sbit  MU3_bit at RTC_DR.B11;
    const register unsigned short int DT0 = 4;
    sbit  DT0_bit at RTC_DR.B4;
    const register unsigned short int DT1 = 5;
    sbit  DT1_bit at RTC_DR.B5;
    const register unsigned short int DU0 = 0;
    sbit  DU0_bit at RTC_DR.B0;
    const register unsigned short int DU1 = 1;
    sbit  DU1_bit at RTC_DR.B1;
    const register unsigned short int DU2 = 2;
    sbit  DU2_bit at RTC_DR.B2;
    const register unsigned short int DU3 = 3;
    sbit  DU3_bit at RTC_DR.B3;

sfr unsigned long   volatile RTC_SSR              absolute 0x40002808;
    const register unsigned short int SS0 = 0;
    sbit  SS0_bit at RTC_SSR.B0;
    const register unsigned short int SS1 = 1;
    sbit  SS1_bit at RTC_SSR.B1;
    const register unsigned short int SS2 = 2;
    sbit  SS2_bit at RTC_SSR.B2;
    const register unsigned short int SS3 = 3;
    sbit  SS3_bit at RTC_SSR.B3;
    const register unsigned short int SS4 = 4;
    sbit  SS4_bit at RTC_SSR.B4;
    const register unsigned short int SS5 = 5;
    sbit  SS5_bit at RTC_SSR.B5;
    const register unsigned short int SS6 = 6;
    sbit  SS6_bit at RTC_SSR.B6;
    const register unsigned short int SS7 = 7;
    sbit  SS7_bit at RTC_SSR.B7;
    const register unsigned short int SS8 = 8;
    sbit  SS8_bit at RTC_SSR.B8;
    const register unsigned short int SS9 = 9;
    sbit  SS9_bit at RTC_SSR.B9;
    const register unsigned short int SS10 = 10;
    sbit  SS10_bit at RTC_SSR.B10;
    const register unsigned short int SS11 = 11;
    sbit  SS11_bit at RTC_SSR.B11;
    const register unsigned short int SS12 = 12;
    sbit  SS12_bit at RTC_SSR.B12;
    const register unsigned short int SS13 = 13;
    sbit  SS13_bit at RTC_SSR.B13;
    const register unsigned short int SS14 = 14;
    sbit  SS14_bit at RTC_SSR.B14;
    const register unsigned short int SS15 = 15;
    sbit  SS15_bit at RTC_SSR.B15;

sfr unsigned long   volatile RTC_ICSR             absolute 0x4000280C;
    const register unsigned short int ALRAWF = 0;
    sbit  ALRAWF_bit at RTC_ICSR.B0;
    const register unsigned short int ALRBWF = 1;
    sbit  ALRBWF_bit at RTC_ICSR.B1;
    const register unsigned short int WUTWF = 2;
    sbit  WUTWF_bit at RTC_ICSR.B2;
    const register unsigned short int SHPF = 3;
    sbit  SHPF_bit at RTC_ICSR.B3;
    const register unsigned short int INITS = 4;
    sbit  INITS_bit at RTC_ICSR.B4;
    const register unsigned short int RSF = 5;
    sbit  RSF_bit at RTC_ICSR.B5;
    const register unsigned short int INITF = 6;
    sbit  INITF_bit at RTC_ICSR.B6;
    const register unsigned short int INIT = 7;
    sbit  INIT_bit at RTC_ICSR.B7;
    const register unsigned short int RECALPF = 16;
    sbit  RECALPF_bit at RTC_ICSR.B16;

sfr unsigned long   volatile RTC_PRER             absolute 0x40002810;
    const register unsigned short int PREDIV_A0 = 16;
    sbit  PREDIV_A0_bit at RTC_PRER.B16;
    const register unsigned short int PREDIV_A1 = 17;
    sbit  PREDIV_A1_bit at RTC_PRER.B17;
    const register unsigned short int PREDIV_A2 = 18;
    sbit  PREDIV_A2_bit at RTC_PRER.B18;
    const register unsigned short int PREDIV_A3 = 19;
    sbit  PREDIV_A3_bit at RTC_PRER.B19;
    const register unsigned short int PREDIV_A4 = 20;
    sbit  PREDIV_A4_bit at RTC_PRER.B20;
    const register unsigned short int PREDIV_A5 = 21;
    sbit  PREDIV_A5_bit at RTC_PRER.B21;
    const register unsigned short int PREDIV_A6 = 22;
    sbit  PREDIV_A6_bit at RTC_PRER.B22;
    const register unsigned short int PREDIV_S0 = 0;
    sbit  PREDIV_S0_bit at RTC_PRER.B0;
    const register unsigned short int PREDIV_S1 = 1;
    sbit  PREDIV_S1_bit at RTC_PRER.B1;
    const register unsigned short int PREDIV_S2 = 2;
    sbit  PREDIV_S2_bit at RTC_PRER.B2;
    const register unsigned short int PREDIV_S3 = 3;
    sbit  PREDIV_S3_bit at RTC_PRER.B3;
    const register unsigned short int PREDIV_S4 = 4;
    sbit  PREDIV_S4_bit at RTC_PRER.B4;
    const register unsigned short int PREDIV_S5 = 5;
    sbit  PREDIV_S5_bit at RTC_PRER.B5;
    const register unsigned short int PREDIV_S6 = 6;
    sbit  PREDIV_S6_bit at RTC_PRER.B6;
    const register unsigned short int PREDIV_S7 = 7;
    sbit  PREDIV_S7_bit at RTC_PRER.B7;
    const register unsigned short int PREDIV_S8 = 8;
    sbit  PREDIV_S8_bit at RTC_PRER.B8;
    const register unsigned short int PREDIV_S9 = 9;
    sbit  PREDIV_S9_bit at RTC_PRER.B9;
    const register unsigned short int PREDIV_S10 = 10;
    sbit  PREDIV_S10_bit at RTC_PRER.B10;
    const register unsigned short int PREDIV_S11 = 11;
    sbit  PREDIV_S11_bit at RTC_PRER.B11;
    const register unsigned short int PREDIV_S12 = 12;
    sbit  PREDIV_S12_bit at RTC_PRER.B12;
    const register unsigned short int PREDIV_S13 = 13;
    sbit  PREDIV_S13_bit at RTC_PRER.B13;
    const register unsigned short int PREDIV_S14 = 14;
    sbit  PREDIV_S14_bit at RTC_PRER.B14;

sfr unsigned long   volatile RTC_WUTR             absolute 0x40002814;
    const register unsigned short int WUT0 = 0;
    sbit  WUT0_bit at RTC_WUTR.B0;
    const register unsigned short int WUT1 = 1;
    sbit  WUT1_bit at RTC_WUTR.B1;
    const register unsigned short int WUT2 = 2;
    sbit  WUT2_bit at RTC_WUTR.B2;
    const register unsigned short int WUT3 = 3;
    sbit  WUT3_bit at RTC_WUTR.B3;
    const register unsigned short int WUT4 = 4;
    sbit  WUT4_bit at RTC_WUTR.B4;
    const register unsigned short int WUT5 = 5;
    sbit  WUT5_bit at RTC_WUTR.B5;
    const register unsigned short int WUT6 = 6;
    sbit  WUT6_bit at RTC_WUTR.B6;
    const register unsigned short int WUT7 = 7;
    sbit  WUT7_bit at RTC_WUTR.B7;
    const register unsigned short int WUT8 = 8;
    sbit  WUT8_bit at RTC_WUTR.B8;
    const register unsigned short int WUT9 = 9;
    sbit  WUT9_bit at RTC_WUTR.B9;
    const register unsigned short int WUT10 = 10;
    sbit  WUT10_bit at RTC_WUTR.B10;
    const register unsigned short int WUT11 = 11;
    sbit  WUT11_bit at RTC_WUTR.B11;
    const register unsigned short int WUT12 = 12;
    sbit  WUT12_bit at RTC_WUTR.B12;
    const register unsigned short int WUT13 = 13;
    sbit  WUT13_bit at RTC_WUTR.B13;
    const register unsigned short int WUT14 = 14;
    sbit  WUT14_bit at RTC_WUTR.B14;
    const register unsigned short int WUT15 = 15;
    sbit  WUT15_bit at RTC_WUTR.B15;

sfr unsigned long   volatile RTC_CR               absolute 0x40002818;
    const register unsigned short int WUCKSEL0 = 0;
    sbit  WUCKSEL0_bit at RTC_CR.B0;
    const register unsigned short int WUCKSEL1 = 1;
    sbit  WUCKSEL1_bit at RTC_CR.B1;
    const register unsigned short int WUCKSEL2 = 2;
    sbit  WUCKSEL2_bit at RTC_CR.B2;
    const register unsigned short int TSEDGE = 3;
    sbit  TSEDGE_bit at RTC_CR.B3;
    const register unsigned short int REFCKON = 4;
    sbit  REFCKON_bit at RTC_CR.B4;
    const register unsigned short int BYPSHAD = 5;
    sbit  BYPSHAD_bit at RTC_CR.B5;
    const register unsigned short int FMT = 6;
    sbit  FMT_bit at RTC_CR.B6;
    const register unsigned short int ALRAE = 8;
    sbit  ALRAE_bit at RTC_CR.B8;
    const register unsigned short int ALRBE = 9;
    sbit  ALRBE_bit at RTC_CR.B9;
    const register unsigned short int WUTE = 10;
    sbit  WUTE_bit at RTC_CR.B10;
    const register unsigned short int TSE = 11;
    sbit  TSE_bit at RTC_CR.B11;
    const register unsigned short int ALRAIE = 12;
    sbit  ALRAIE_bit at RTC_CR.B12;
    const register unsigned short int ALRBIE = 13;
    sbit  ALRBIE_bit at RTC_CR.B13;
    const register unsigned short int WUTIE = 14;
    sbit  WUTIE_bit at RTC_CR.B14;
    const register unsigned short int TSIE = 15;
    sbit  TSIE_bit at RTC_CR.B15;
    const register unsigned short int ADD1H = 16;
    sbit  ADD1H_bit at RTC_CR.B16;
    const register unsigned short int SUB1H = 17;
    sbit  SUB1H_bit at RTC_CR.B17;
    sbit  BKP_RTC_CR_bit at RTC_CR.B18;
    const register unsigned short int COSEL = 19;
    sbit  COSEL_bit at RTC_CR.B19;
    const register unsigned short int POL = 20;
    sbit  POL_bit at RTC_CR.B20;
    const register unsigned short int OSEL0 = 21;
    sbit  OSEL0_bit at RTC_CR.B21;
    const register unsigned short int OSEL1 = 22;
    sbit  OSEL1_bit at RTC_CR.B22;
    const register unsigned short int COE = 23;
    sbit  COE_bit at RTC_CR.B23;
    const register unsigned short int ITSE = 24;
    sbit  ITSE_bit at RTC_CR.B24;
    const register unsigned short int TAMPTS = 25;
    sbit  TAMPTS_bit at RTC_CR.B25;
    const register unsigned short int TAMPOE = 26;
    sbit  TAMPOE_bit at RTC_CR.B26;
    const register unsigned short int TAMPALRM_PU = 29;
    sbit  TAMPALRM_PU_bit at RTC_CR.B29;
    const register unsigned short int TAMPALRM_TYPE = 30;
    sbit  TAMPALRM_TYPE_bit at RTC_CR.B30;
    const register unsigned short int OUT2EN = 31;
    sbit  OUT2EN_bit at RTC_CR.B31;

sfr unsigned long   volatile RTC_WPR              absolute 0x40002824;
    sbit  KEY0_RTC_WPR_bit at RTC_WPR.B0;
    sbit  KEY1_RTC_WPR_bit at RTC_WPR.B1;
    sbit  KEY2_RTC_WPR_bit at RTC_WPR.B2;
    sbit  KEY3_RTC_WPR_bit at RTC_WPR.B3;
    sbit  KEY4_RTC_WPR_bit at RTC_WPR.B4;
    sbit  KEY5_RTC_WPR_bit at RTC_WPR.B5;
    sbit  KEY6_RTC_WPR_bit at RTC_WPR.B6;
    sbit  KEY7_RTC_WPR_bit at RTC_WPR.B7;

sfr unsigned long   volatile RTC_CALR             absolute 0x40002828;
    const register unsigned short int CALP = 15;
    sbit  CALP_bit at RTC_CALR.B15;
    const register unsigned short int CALW8 = 14;
    sbit  CALW8_bit at RTC_CALR.B14;
    const register unsigned short int CALW16 = 13;
    sbit  CALW16_bit at RTC_CALR.B13;
    const register unsigned short int CALM0 = 0;
    sbit  CALM0_bit at RTC_CALR.B0;
    const register unsigned short int CALM1 = 1;
    sbit  CALM1_bit at RTC_CALR.B1;
    const register unsigned short int CALM2 = 2;
    sbit  CALM2_bit at RTC_CALR.B2;
    const register unsigned short int CALM3 = 3;
    sbit  CALM3_bit at RTC_CALR.B3;
    const register unsigned short int CALM4 = 4;
    sbit  CALM4_bit at RTC_CALR.B4;
    const register unsigned short int CALM5 = 5;
    sbit  CALM5_bit at RTC_CALR.B5;
    const register unsigned short int CALM6 = 6;
    sbit  CALM6_bit at RTC_CALR.B6;
    const register unsigned short int CALM7 = 7;
    sbit  CALM7_bit at RTC_CALR.B7;
    const register unsigned short int CALM8 = 8;
    sbit  CALM8_bit at RTC_CALR.B8;

sfr unsigned long   volatile RTC_SHIFTR           absolute 0x4000282C;
    const register unsigned short int ADD1S = 31;
    sbit  ADD1S_bit at RTC_SHIFTR.B31;
    const register unsigned short int SUBFS0 = 0;
    sbit  SUBFS0_bit at RTC_SHIFTR.B0;
    const register unsigned short int SUBFS1 = 1;
    sbit  SUBFS1_bit at RTC_SHIFTR.B1;
    const register unsigned short int SUBFS2 = 2;
    sbit  SUBFS2_bit at RTC_SHIFTR.B2;
    const register unsigned short int SUBFS3 = 3;
    sbit  SUBFS3_bit at RTC_SHIFTR.B3;
    const register unsigned short int SUBFS4 = 4;
    sbit  SUBFS4_bit at RTC_SHIFTR.B4;
    const register unsigned short int SUBFS5 = 5;
    sbit  SUBFS5_bit at RTC_SHIFTR.B5;
    const register unsigned short int SUBFS6 = 6;
    sbit  SUBFS6_bit at RTC_SHIFTR.B6;
    const register unsigned short int SUBFS7 = 7;
    sbit  SUBFS7_bit at RTC_SHIFTR.B7;
    const register unsigned short int SUBFS8 = 8;
    sbit  SUBFS8_bit at RTC_SHIFTR.B8;
    const register unsigned short int SUBFS9 = 9;
    sbit  SUBFS9_bit at RTC_SHIFTR.B9;
    const register unsigned short int SUBFS10 = 10;
    sbit  SUBFS10_bit at RTC_SHIFTR.B10;
    const register unsigned short int SUBFS11 = 11;
    sbit  SUBFS11_bit at RTC_SHIFTR.B11;
    const register unsigned short int SUBFS12 = 12;
    sbit  SUBFS12_bit at RTC_SHIFTR.B12;
    const register unsigned short int SUBFS13 = 13;
    sbit  SUBFS13_bit at RTC_SHIFTR.B13;
    const register unsigned short int SUBFS14 = 14;
    sbit  SUBFS14_bit at RTC_SHIFTR.B14;

sfr unsigned long   volatile RTC_TSTR             absolute 0x40002830;
    sbit  SU0_RTC_TSTR_bit at RTC_TSTR.B0;
    sbit  SU1_RTC_TSTR_bit at RTC_TSTR.B1;
    sbit  SU2_RTC_TSTR_bit at RTC_TSTR.B2;
    sbit  SU3_RTC_TSTR_bit at RTC_TSTR.B3;
    sbit  ST0_RTC_TSTR_bit at RTC_TSTR.B4;
    sbit  ST1_RTC_TSTR_bit at RTC_TSTR.B5;
    sbit  ST2_RTC_TSTR_bit at RTC_TSTR.B6;
    sbit  MNU0_RTC_TSTR_bit at RTC_TSTR.B8;
    sbit  MNU1_RTC_TSTR_bit at RTC_TSTR.B9;
    sbit  MNU2_RTC_TSTR_bit at RTC_TSTR.B10;
    sbit  MNU3_RTC_TSTR_bit at RTC_TSTR.B11;
    sbit  MNT0_RTC_TSTR_bit at RTC_TSTR.B12;
    sbit  MNT1_RTC_TSTR_bit at RTC_TSTR.B13;
    sbit  MNT2_RTC_TSTR_bit at RTC_TSTR.B14;
    sbit  HU0_RTC_TSTR_bit at RTC_TSTR.B16;
    sbit  HU1_RTC_TSTR_bit at RTC_TSTR.B17;
    sbit  HU2_RTC_TSTR_bit at RTC_TSTR.B18;
    sbit  HU3_RTC_TSTR_bit at RTC_TSTR.B19;
    sbit  HT0_RTC_TSTR_bit at RTC_TSTR.B20;
    sbit  HT1_RTC_TSTR_bit at RTC_TSTR.B21;
    sbit  PM_RTC_TSTR_bit at RTC_TSTR.B22;

sfr unsigned long   volatile RTC_TSDR             absolute 0x40002834;
    sbit  WDU0_RTC_TSDR_bit at RTC_TSDR.B13;
    sbit  WDU1_RTC_TSDR_bit at RTC_TSDR.B14;
    sbit  WDU2_RTC_TSDR_bit at RTC_TSDR.B15;
    sbit  MT_RTC_TSDR_bit at RTC_TSDR.B12;
    sbit  MU0_RTC_TSDR_bit at RTC_TSDR.B8;
    sbit  MU1_RTC_TSDR_bit at RTC_TSDR.B9;
    sbit  MU2_RTC_TSDR_bit at RTC_TSDR.B10;
    sbit  MU3_RTC_TSDR_bit at RTC_TSDR.B11;
    sbit  DT0_RTC_TSDR_bit at RTC_TSDR.B4;
    sbit  DT1_RTC_TSDR_bit at RTC_TSDR.B5;
    sbit  DU0_RTC_TSDR_bit at RTC_TSDR.B0;
    sbit  DU1_RTC_TSDR_bit at RTC_TSDR.B1;
    sbit  DU2_RTC_TSDR_bit at RTC_TSDR.B2;
    sbit  DU3_RTC_TSDR_bit at RTC_TSDR.B3;

sfr unsigned long   volatile RTC_TSSSR            absolute 0x40002838;
    sbit  SS0_RTC_TSSSR_bit at RTC_TSSSR.B0;
    sbit  SS1_RTC_TSSSR_bit at RTC_TSSSR.B1;
    sbit  SS2_RTC_TSSSR_bit at RTC_TSSSR.B2;
    sbit  SS3_RTC_TSSSR_bit at RTC_TSSSR.B3;
    sbit  SS4_RTC_TSSSR_bit at RTC_TSSSR.B4;
    sbit  SS5_RTC_TSSSR_bit at RTC_TSSSR.B5;
    sbit  SS6_RTC_TSSSR_bit at RTC_TSSSR.B6;
    sbit  SS7_RTC_TSSSR_bit at RTC_TSSSR.B7;
    sbit  SS8_RTC_TSSSR_bit at RTC_TSSSR.B8;
    sbit  SS9_RTC_TSSSR_bit at RTC_TSSSR.B9;
    sbit  SS10_RTC_TSSSR_bit at RTC_TSSSR.B10;
    sbit  SS11_RTC_TSSSR_bit at RTC_TSSSR.B11;
    sbit  SS12_RTC_TSSSR_bit at RTC_TSSSR.B12;
    sbit  SS13_RTC_TSSSR_bit at RTC_TSSSR.B13;
    sbit  SS14_RTC_TSSSR_bit at RTC_TSSSR.B14;
    sbit  SS15_RTC_TSSSR_bit at RTC_TSSSR.B15;

sfr unsigned long   volatile RTC_ALRMAR           absolute 0x40002840;
    const register unsigned short int MSK4 = 31;
    sbit  MSK4_bit at RTC_ALRMAR.B31;
    const register unsigned short int WDSEL = 30;
    sbit  WDSEL_bit at RTC_ALRMAR.B30;
    sbit  DT0_RTC_ALRMAR_bit at RTC_ALRMAR.B28;
    sbit  DT1_RTC_ALRMAR_bit at RTC_ALRMAR.B29;
    sbit  DU0_RTC_ALRMAR_bit at RTC_ALRMAR.B24;
    sbit  DU1_RTC_ALRMAR_bit at RTC_ALRMAR.B25;
    sbit  DU2_RTC_ALRMAR_bit at RTC_ALRMAR.B26;
    sbit  DU3_RTC_ALRMAR_bit at RTC_ALRMAR.B27;
    const register unsigned short int MSK3 = 23;
    sbit  MSK3_bit at RTC_ALRMAR.B23;
    sbit  PM_RTC_ALRMAR_bit at RTC_ALRMAR.B22;
    sbit  HT0_RTC_ALRMAR_bit at RTC_ALRMAR.B20;
    sbit  HT1_RTC_ALRMAR_bit at RTC_ALRMAR.B21;
    sbit  HU0_RTC_ALRMAR_bit at RTC_ALRMAR.B16;
    sbit  HU1_RTC_ALRMAR_bit at RTC_ALRMAR.B17;
    sbit  HU2_RTC_ALRMAR_bit at RTC_ALRMAR.B18;
    sbit  HU3_RTC_ALRMAR_bit at RTC_ALRMAR.B19;
    const register unsigned short int MSK2 = 15;
    sbit  MSK2_bit at RTC_ALRMAR.B15;
    sbit  MNT0_RTC_ALRMAR_bit at RTC_ALRMAR.B12;
    sbit  MNT1_RTC_ALRMAR_bit at RTC_ALRMAR.B13;
    sbit  MNT2_RTC_ALRMAR_bit at RTC_ALRMAR.B14;
    sbit  MNU0_RTC_ALRMAR_bit at RTC_ALRMAR.B8;
    sbit  MNU1_RTC_ALRMAR_bit at RTC_ALRMAR.B9;
    sbit  MNU2_RTC_ALRMAR_bit at RTC_ALRMAR.B10;
    sbit  MNU3_RTC_ALRMAR_bit at RTC_ALRMAR.B11;
    const register unsigned short int MSK1 = 7;
    sbit  MSK1_bit at RTC_ALRMAR.B7;
    sbit  ST0_RTC_ALRMAR_bit at RTC_ALRMAR.B4;
    sbit  ST1_RTC_ALRMAR_bit at RTC_ALRMAR.B5;
    sbit  ST2_RTC_ALRMAR_bit at RTC_ALRMAR.B6;
    sbit  SU0_RTC_ALRMAR_bit at RTC_ALRMAR.B0;
    sbit  SU1_RTC_ALRMAR_bit at RTC_ALRMAR.B1;
    sbit  SU2_RTC_ALRMAR_bit at RTC_ALRMAR.B2;
    sbit  SU3_RTC_ALRMAR_bit at RTC_ALRMAR.B3;

sfr unsigned long   volatile RTC_ALRMASSR         absolute 0x40002844;
    const register unsigned short int MASKSS0 = 24;
    sbit  MASKSS0_bit at RTC_ALRMASSR.B24;
    const register unsigned short int MASKSS1 = 25;
    sbit  MASKSS1_bit at RTC_ALRMASSR.B25;
    const register unsigned short int MASKSS2 = 26;
    sbit  MASKSS2_bit at RTC_ALRMASSR.B26;
    const register unsigned short int MASKSS3 = 27;
    sbit  MASKSS3_bit at RTC_ALRMASSR.B27;
    sbit  SS0_RTC_ALRMASSR_bit at RTC_ALRMASSR.B0;
    sbit  SS1_RTC_ALRMASSR_bit at RTC_ALRMASSR.B1;
    sbit  SS2_RTC_ALRMASSR_bit at RTC_ALRMASSR.B2;
    sbit  SS3_RTC_ALRMASSR_bit at RTC_ALRMASSR.B3;
    sbit  SS4_RTC_ALRMASSR_bit at RTC_ALRMASSR.B4;
    sbit  SS5_RTC_ALRMASSR_bit at RTC_ALRMASSR.B5;
    sbit  SS6_RTC_ALRMASSR_bit at RTC_ALRMASSR.B6;
    sbit  SS7_RTC_ALRMASSR_bit at RTC_ALRMASSR.B7;
    sbit  SS8_RTC_ALRMASSR_bit at RTC_ALRMASSR.B8;
    sbit  SS9_RTC_ALRMASSR_bit at RTC_ALRMASSR.B9;
    sbit  SS10_RTC_ALRMASSR_bit at RTC_ALRMASSR.B10;
    sbit  SS11_RTC_ALRMASSR_bit at RTC_ALRMASSR.B11;
    sbit  SS12_RTC_ALRMASSR_bit at RTC_ALRMASSR.B12;
    sbit  SS13_RTC_ALRMASSR_bit at RTC_ALRMASSR.B13;
    sbit  SS14_RTC_ALRMASSR_bit at RTC_ALRMASSR.B14;

sfr unsigned long   volatile RTC_ALRMBR           absolute 0x40002848;
    sbit  MSK4_RTC_ALRMBR_bit at RTC_ALRMBR.B31;
    sbit  WDSEL_RTC_ALRMBR_bit at RTC_ALRMBR.B30;
    sbit  DT0_RTC_ALRMBR_bit at RTC_ALRMBR.B28;
    sbit  DT1_RTC_ALRMBR_bit at RTC_ALRMBR.B29;
    sbit  DU0_RTC_ALRMBR_bit at RTC_ALRMBR.B24;
    sbit  DU1_RTC_ALRMBR_bit at RTC_ALRMBR.B25;
    sbit  DU2_RTC_ALRMBR_bit at RTC_ALRMBR.B26;
    sbit  DU3_RTC_ALRMBR_bit at RTC_ALRMBR.B27;
    sbit  MSK3_RTC_ALRMBR_bit at RTC_ALRMBR.B23;
    sbit  PM_RTC_ALRMBR_bit at RTC_ALRMBR.B22;
    sbit  HT0_RTC_ALRMBR_bit at RTC_ALRMBR.B20;
    sbit  HT1_RTC_ALRMBR_bit at RTC_ALRMBR.B21;
    sbit  HU0_RTC_ALRMBR_bit at RTC_ALRMBR.B16;
    sbit  HU1_RTC_ALRMBR_bit at RTC_ALRMBR.B17;
    sbit  HU2_RTC_ALRMBR_bit at RTC_ALRMBR.B18;
    sbit  HU3_RTC_ALRMBR_bit at RTC_ALRMBR.B19;
    sbit  MSK2_RTC_ALRMBR_bit at RTC_ALRMBR.B15;
    sbit  MNT0_RTC_ALRMBR_bit at RTC_ALRMBR.B12;
    sbit  MNT1_RTC_ALRMBR_bit at RTC_ALRMBR.B13;
    sbit  MNT2_RTC_ALRMBR_bit at RTC_ALRMBR.B14;
    sbit  MNU0_RTC_ALRMBR_bit at RTC_ALRMBR.B8;
    sbit  MNU1_RTC_ALRMBR_bit at RTC_ALRMBR.B9;
    sbit  MNU2_RTC_ALRMBR_bit at RTC_ALRMBR.B10;
    sbit  MNU3_RTC_ALRMBR_bit at RTC_ALRMBR.B11;
    sbit  MSK1_RTC_ALRMBR_bit at RTC_ALRMBR.B7;
    sbit  ST0_RTC_ALRMBR_bit at RTC_ALRMBR.B4;
    sbit  ST1_RTC_ALRMBR_bit at RTC_ALRMBR.B5;
    sbit  ST2_RTC_ALRMBR_bit at RTC_ALRMBR.B6;
    sbit  SU0_RTC_ALRMBR_bit at RTC_ALRMBR.B0;
    sbit  SU1_RTC_ALRMBR_bit at RTC_ALRMBR.B1;
    sbit  SU2_RTC_ALRMBR_bit at RTC_ALRMBR.B2;
    sbit  SU3_RTC_ALRMBR_bit at RTC_ALRMBR.B3;

sfr unsigned long   volatile RTC_ALRMBSSR         absolute 0x4000284C;
    sbit  MASKSS0_RTC_ALRMBSSR_bit at RTC_ALRMBSSR.B24;
    sbit  MASKSS1_RTC_ALRMBSSR_bit at RTC_ALRMBSSR.B25;
    sbit  MASKSS2_RTC_ALRMBSSR_bit at RTC_ALRMBSSR.B26;
    sbit  MASKSS3_RTC_ALRMBSSR_bit at RTC_ALRMBSSR.B27;
    sbit  SS0_RTC_ALRMBSSR_bit at RTC_ALRMBSSR.B0;
    sbit  SS1_RTC_ALRMBSSR_bit at RTC_ALRMBSSR.B1;
    sbit  SS2_RTC_ALRMBSSR_bit at RTC_ALRMBSSR.B2;
    sbit  SS3_RTC_ALRMBSSR_bit at RTC_ALRMBSSR.B3;
    sbit  SS4_RTC_ALRMBSSR_bit at RTC_ALRMBSSR.B4;
    sbit  SS5_RTC_ALRMBSSR_bit at RTC_ALRMBSSR.B5;
    sbit  SS6_RTC_ALRMBSSR_bit at RTC_ALRMBSSR.B6;
    sbit  SS7_RTC_ALRMBSSR_bit at RTC_ALRMBSSR.B7;
    sbit  SS8_RTC_ALRMBSSR_bit at RTC_ALRMBSSR.B8;
    sbit  SS9_RTC_ALRMBSSR_bit at RTC_ALRMBSSR.B9;
    sbit  SS10_RTC_ALRMBSSR_bit at RTC_ALRMBSSR.B10;
    sbit  SS11_RTC_ALRMBSSR_bit at RTC_ALRMBSSR.B11;
    sbit  SS12_RTC_ALRMBSSR_bit at RTC_ALRMBSSR.B12;
    sbit  SS13_RTC_ALRMBSSR_bit at RTC_ALRMBSSR.B13;
    sbit  SS14_RTC_ALRMBSSR_bit at RTC_ALRMBSSR.B14;

sfr unsigned long   volatile RTC_SR               absolute 0x40002850;
    const register unsigned short int ALRAF = 0;
    sbit  ALRAF_bit at RTC_SR.B0;
    const register unsigned short int ALRBF = 1;
    sbit  ALRBF_bit at RTC_SR.B1;
    const register unsigned short int WUTF = 2;
    sbit  WUTF_bit at RTC_SR.B2;
    const register unsigned short int TSF = 3;
    sbit  TSF_bit at RTC_SR.B3;
    const register unsigned short int TSOVF = 4;
    sbit  TSOVF_bit at RTC_SR.B4;
    const register unsigned short int ITSF = 5;
    sbit  ITSF_bit at RTC_SR.B5;

sfr unsigned long   volatile RTC_MISR             absolute 0x40002854;
    const register unsigned short int ALRAMF = 0;
    sbit  ALRAMF_bit at RTC_MISR.B0;
    const register unsigned short int ALRBMF = 1;
    sbit  ALRBMF_bit at RTC_MISR.B1;
    const register unsigned short int WUTMF = 2;
    sbit  WUTMF_bit at RTC_MISR.B2;
    const register unsigned short int TSMF = 3;
    sbit  TSMF_bit at RTC_MISR.B3;
    const register unsigned short int TSOVMF = 4;
    sbit  TSOVMF_bit at RTC_MISR.B4;
    const register unsigned short int ITSMF = 5;
    sbit  ITSMF_bit at RTC_MISR.B5;

sfr unsigned long   volatile RTC_SCR              absolute 0x4000285C;
    const register unsigned short int CALRAF = 0;
    sbit  CALRAF_bit at RTC_SCR.B0;
    const register unsigned short int CALRBF = 1;
    sbit  CALRBF_bit at RTC_SCR.B1;
    const register unsigned short int CWUTF = 2;
    sbit  CWUTF_bit at RTC_SCR.B2;
    const register unsigned short int CTSF = 3;
    sbit  CTSF_bit at RTC_SCR.B3;
    const register unsigned short int CTSOVF = 4;
    sbit  CTSOVF_bit at RTC_SCR.B4;
    const register unsigned short int CITSF = 5;
    sbit  CITSF_bit at RTC_SCR.B5;

sfr unsigned long   volatile TIM14_CR1            absolute 0x40002000;
    sbit  UIFREMAP_TIM14_CR1_bit at TIM14_CR1.B11;
    sbit  CKD0_TIM14_CR1_bit at TIM14_CR1.B8;
    sbit  CKD1_TIM14_CR1_bit at TIM14_CR1.B9;
    sbit  ARPE_TIM14_CR1_bit at TIM14_CR1.B7;
    sbit  OPM_TIM14_CR1_bit at TIM14_CR1.B3;
    sbit  URS_TIM14_CR1_bit at TIM14_CR1.B2;
    sbit  UDIS_TIM14_CR1_bit at TIM14_CR1.B1;
    sbit  CEN_TIM14_CR1_bit at TIM14_CR1.B0;

sfr unsigned long   volatile TIM14_DIER           absolute 0x4000200C;
    sbit  CC1IE_TIM14_DIER_bit at TIM14_DIER.B1;
    sbit  UIE_TIM14_DIER_bit at TIM14_DIER.B0;

sfr unsigned long   volatile TIM14_SR             absolute 0x40002010;
    sbit  CC1OF_TIM14_SR_bit at TIM14_SR.B9;
    sbit  CC1IF_TIM14_SR_bit at TIM14_SR.B1;
    sbit  UIF_TIM14_SR_bit at TIM14_SR.B0;

sfr unsigned long   volatile TIM14_EGR            absolute 0x40002014;
    sbit  CC1G_TIM14_EGR_bit at TIM14_EGR.B1;
    sbit  UG_TIM14_EGR_bit at TIM14_EGR.B0;

sfr unsigned long   volatile TIM14_CCMR1_Output   absolute 0x40002018;
    sbit  CC1S0_TIM14_CCMR1_Output_bit at TIM14_CCMR1_Output.B0;
    sbit  CC1S1_TIM14_CCMR1_Output_bit at TIM14_CCMR1_Output.B1;
    sbit  OC1FE_TIM14_CCMR1_Output_bit at TIM14_CCMR1_Output.B2;
    sbit  OC1PE_TIM14_CCMR1_Output_bit at TIM14_CCMR1_Output.B3;
    sbit  OC1M0_TIM14_CCMR1_Output_bit at TIM14_CCMR1_Output.B4;
    sbit  OC1M1_TIM14_CCMR1_Output_bit at TIM14_CCMR1_Output.B5;
    sbit  OC1M2_TIM14_CCMR1_Output_bit at TIM14_CCMR1_Output.B6;
    sbit  OC1CE_TIM14_CCMR1_Output_bit at TIM14_CCMR1_Output.B7;
    sbit  OC1M_3_TIM14_CCMR1_Output_bit at TIM14_CCMR1_Output.B16;

sfr unsigned long   volatile TIM14_CCMR1_Input    absolute 0x40002018;
    sbit  IC1F0_TIM14_CCMR1_Input_bit at TIM14_CCMR1_Input.B4;
    sbit  IC1F1_TIM14_CCMR1_Input_bit at TIM14_CCMR1_Input.B5;
    sbit  IC1F2_TIM14_CCMR1_Input_bit at TIM14_CCMR1_Input.B6;
    sbit  IC1F3_TIM14_CCMR1_Input_bit at TIM14_CCMR1_Input.B7;
    const register unsigned short int ICPCS0 = 2;
    sbit  ICPCS0_bit at TIM14_CCMR1_Input.B2;
    const register unsigned short int ICPCS1 = 3;
    sbit  ICPCS1_bit at TIM14_CCMR1_Input.B3;
    sbit  CC1S0_TIM14_CCMR1_Input_bit at TIM14_CCMR1_Input.B0;
    sbit  CC1S1_TIM14_CCMR1_Input_bit at TIM14_CCMR1_Input.B1;

sfr unsigned long   volatile TIM14_CCER           absolute 0x40002020;
    sbit  CC1NP_TIM14_CCER_bit at TIM14_CCER.B3;
    sbit  CC1P_TIM14_CCER_bit at TIM14_CCER.B1;
    sbit  CC1E_TIM14_CCER_bit at TIM14_CCER.B0;

sfr unsigned long   volatile TIM14_CNT            absolute 0x40002024;
    sbit  CNT0_TIM14_CNT_bit at TIM14_CNT.B0;
    sbit  CNT1_TIM14_CNT_bit at TIM14_CNT.B1;
    sbit  CNT2_TIM14_CNT_bit at TIM14_CNT.B2;
    sbit  CNT3_TIM14_CNT_bit at TIM14_CNT.B3;
    sbit  CNT4_TIM14_CNT_bit at TIM14_CNT.B4;
    sbit  CNT5_TIM14_CNT_bit at TIM14_CNT.B5;
    sbit  CNT6_TIM14_CNT_bit at TIM14_CNT.B6;
    sbit  CNT7_TIM14_CNT_bit at TIM14_CNT.B7;
    sbit  CNT8_TIM14_CNT_bit at TIM14_CNT.B8;
    sbit  CNT9_TIM14_CNT_bit at TIM14_CNT.B9;
    sbit  CNT10_TIM14_CNT_bit at TIM14_CNT.B10;
    sbit  CNT11_TIM14_CNT_bit at TIM14_CNT.B11;
    sbit  CNT12_TIM14_CNT_bit at TIM14_CNT.B12;
    sbit  CNT13_TIM14_CNT_bit at TIM14_CNT.B13;
    sbit  CNT14_TIM14_CNT_bit at TIM14_CNT.B14;
    sbit  CNT15_TIM14_CNT_bit at TIM14_CNT.B15;
    sbit  UIFCPY_TIM14_CNT_bit at TIM14_CNT.B31;

sfr unsigned long   volatile TIM14_PSC            absolute 0x40002028;
    sbit  PSC0_TIM14_PSC_bit at TIM14_PSC.B0;
    sbit  PSC1_TIM14_PSC_bit at TIM14_PSC.B1;
    sbit  PSC2_TIM14_PSC_bit at TIM14_PSC.B2;
    sbit  PSC3_TIM14_PSC_bit at TIM14_PSC.B3;
    sbit  PSC4_TIM14_PSC_bit at TIM14_PSC.B4;
    sbit  PSC5_TIM14_PSC_bit at TIM14_PSC.B5;
    sbit  PSC6_TIM14_PSC_bit at TIM14_PSC.B6;
    sbit  PSC7_TIM14_PSC_bit at TIM14_PSC.B7;
    sbit  PSC8_TIM14_PSC_bit at TIM14_PSC.B8;
    sbit  PSC9_TIM14_PSC_bit at TIM14_PSC.B9;
    sbit  PSC10_TIM14_PSC_bit at TIM14_PSC.B10;
    sbit  PSC11_TIM14_PSC_bit at TIM14_PSC.B11;
    sbit  PSC12_TIM14_PSC_bit at TIM14_PSC.B12;
    sbit  PSC13_TIM14_PSC_bit at TIM14_PSC.B13;
    sbit  PSC14_TIM14_PSC_bit at TIM14_PSC.B14;
    sbit  PSC15_TIM14_PSC_bit at TIM14_PSC.B15;

sfr unsigned long   volatile TIM14_ARR            absolute 0x4000202C;
    sbit  ARR0_TIM14_ARR_bit at TIM14_ARR.B0;
    sbit  ARR1_TIM14_ARR_bit at TIM14_ARR.B1;
    sbit  ARR2_TIM14_ARR_bit at TIM14_ARR.B2;
    sbit  ARR3_TIM14_ARR_bit at TIM14_ARR.B3;
    sbit  ARR4_TIM14_ARR_bit at TIM14_ARR.B4;
    sbit  ARR5_TIM14_ARR_bit at TIM14_ARR.B5;
    sbit  ARR6_TIM14_ARR_bit at TIM14_ARR.B6;
    sbit  ARR7_TIM14_ARR_bit at TIM14_ARR.B7;
    sbit  ARR8_TIM14_ARR_bit at TIM14_ARR.B8;
    sbit  ARR9_TIM14_ARR_bit at TIM14_ARR.B9;
    sbit  ARR10_TIM14_ARR_bit at TIM14_ARR.B10;
    sbit  ARR11_TIM14_ARR_bit at TIM14_ARR.B11;
    sbit  ARR12_TIM14_ARR_bit at TIM14_ARR.B12;
    sbit  ARR13_TIM14_ARR_bit at TIM14_ARR.B13;
    sbit  ARR14_TIM14_ARR_bit at TIM14_ARR.B14;
    sbit  ARR15_TIM14_ARR_bit at TIM14_ARR.B15;

sfr unsigned long   volatile TIM14_CCR1           absolute 0x40002034;
    sbit  CCR10_TIM14_CCR1_bit at TIM14_CCR1.B0;
    sbit  CCR11_TIM14_CCR1_bit at TIM14_CCR1.B1;
    sbit  CCR12_TIM14_CCR1_bit at TIM14_CCR1.B2;
    sbit  CCR13_TIM14_CCR1_bit at TIM14_CCR1.B3;
    sbit  CCR14_TIM14_CCR1_bit at TIM14_CCR1.B4;
    sbit  CCR15_TIM14_CCR1_bit at TIM14_CCR1.B5;
    sbit  CCR16_TIM14_CCR1_bit at TIM14_CCR1.B6;
    sbit  CCR17_TIM14_CCR1_bit at TIM14_CCR1.B7;
    sbit  CCR18_TIM14_CCR1_bit at TIM14_CCR1.B8;
    sbit  CCR19_TIM14_CCR1_bit at TIM14_CCR1.B9;
    sbit  CCR110_TIM14_CCR1_bit at TIM14_CCR1.B10;
    sbit  CCR111_TIM14_CCR1_bit at TIM14_CCR1.B11;
    sbit  CCR112_TIM14_CCR1_bit at TIM14_CCR1.B12;
    sbit  CCR113_TIM14_CCR1_bit at TIM14_CCR1.B13;
    sbit  CCR114_TIM14_CCR1_bit at TIM14_CCR1.B14;
    sbit  CCR115_TIM14_CCR1_bit at TIM14_CCR1.B15;

sfr unsigned long   volatile TIM14_TISEL          absolute 0x40002068;
    const register unsigned short int TISEL0 = 0;
    sbit  TISEL0_bit at TIM14_TISEL.B0;
    const register unsigned short int TISEL1 = 1;
    sbit  TISEL1_bit at TIM14_TISEL.B1;
    const register unsigned short int TISEL2 = 2;
    sbit  TISEL2_bit at TIM14_TISEL.B2;
    const register unsigned short int TISEL3 = 3;
    sbit  TISEL3_bit at TIM14_TISEL.B3;

sfr unsigned long   volatile TIM2_CR1             absolute 0x40000000;
    sbit  UIFREMAP_TIM2_CR1_bit at TIM2_CR1.B11;
    sbit  CKD0_TIM2_CR1_bit at TIM2_CR1.B8;
    sbit  CKD1_TIM2_CR1_bit at TIM2_CR1.B9;
    sbit  ARPE_TIM2_CR1_bit at TIM2_CR1.B7;
    sbit  CMS0_TIM2_CR1_bit at TIM2_CR1.B5;
    sbit  CMS1_TIM2_CR1_bit at TIM2_CR1.B6;
    sbit  DIR_TIM2_CR1_bit at TIM2_CR1.B4;
    sbit  OPM_TIM2_CR1_bit at TIM2_CR1.B3;
    sbit  URS_TIM2_CR1_bit at TIM2_CR1.B2;
    sbit  UDIS_TIM2_CR1_bit at TIM2_CR1.B1;
    sbit  CEN_TIM2_CR1_bit at TIM2_CR1.B0;

sfr unsigned long   volatile TIM2_CR2             absolute 0x40000004;
    sbit  TI1S_TIM2_CR2_bit at TIM2_CR2.B7;
    sbit  MMS0_TIM2_CR2_bit at TIM2_CR2.B4;
    sbit  MMS1_TIM2_CR2_bit at TIM2_CR2.B5;
    sbit  MMS2_TIM2_CR2_bit at TIM2_CR2.B6;
    sbit  CCDS_TIM2_CR2_bit at TIM2_CR2.B3;

sfr unsigned long   volatile TIM2_SMCR            absolute 0x40000008;
    const register unsigned short int TS_4_30 = 20;
    sbit  TS_4_30_bit at TIM2_SMCR.B20;
    const register unsigned short int TS_4_31 = 21;
    sbit  TS_4_31_bit at TIM2_SMCR.B21;
    sbit  SMS_3_TIM2_SMCR_bit at TIM2_SMCR.B16;
    sbit  ETP_TIM2_SMCR_bit at TIM2_SMCR.B15;
    sbit  ECE_TIM2_SMCR_bit at TIM2_SMCR.B14;
    sbit  ETPS0_TIM2_SMCR_bit at TIM2_SMCR.B12;
    sbit  ETPS1_TIM2_SMCR_bit at TIM2_SMCR.B13;
    sbit  ETF0_TIM2_SMCR_bit at TIM2_SMCR.B8;
    sbit  ETF1_TIM2_SMCR_bit at TIM2_SMCR.B9;
    sbit  ETF2_TIM2_SMCR_bit at TIM2_SMCR.B10;
    sbit  ETF3_TIM2_SMCR_bit at TIM2_SMCR.B11;
    sbit  MSM_TIM2_SMCR_bit at TIM2_SMCR.B7;
    sbit  TS0_TIM2_SMCR_bit at TIM2_SMCR.B4;
    sbit  TS1_TIM2_SMCR_bit at TIM2_SMCR.B5;
    const register unsigned short int TS2 = 6;
    sbit  TS2_bit at TIM2_SMCR.B6;
    sbit  OCCS_TIM2_SMCR_bit at TIM2_SMCR.B3;
    sbit  SMS0_TIM2_SMCR_bit at TIM2_SMCR.B0;
    sbit  SMS1_TIM2_SMCR_bit at TIM2_SMCR.B1;
    sbit  SMS2_TIM2_SMCR_bit at TIM2_SMCR.B2;

sfr unsigned long   volatile TIM2_DIER            absolute 0x4000000C;
    sbit  TDE_TIM2_DIER_bit at TIM2_DIER.B14;
    sbit  CC4DE_TIM2_DIER_bit at TIM2_DIER.B12;
    sbit  CC3DE_TIM2_DIER_bit at TIM2_DIER.B11;
    sbit  CC2DE_TIM2_DIER_bit at TIM2_DIER.B10;
    sbit  CC1DE_TIM2_DIER_bit at TIM2_DIER.B9;
    sbit  UDE_TIM2_DIER_bit at TIM2_DIER.B8;
    sbit  TIE_TIM2_DIER_bit at TIM2_DIER.B6;
    sbit  CC4IE_TIM2_DIER_bit at TIM2_DIER.B4;
    sbit  CC3IE_TIM2_DIER_bit at TIM2_DIER.B3;
    sbit  CC2IE_TIM2_DIER_bit at TIM2_DIER.B2;
    sbit  CC1IE_TIM2_DIER_bit at TIM2_DIER.B1;
    sbit  UIE_TIM2_DIER_bit at TIM2_DIER.B0;

sfr unsigned long   volatile TIM2_SR              absolute 0x40000010;
    sbit  CC4OF_TIM2_SR_bit at TIM2_SR.B12;
    sbit  CC3OF_TIM2_SR_bit at TIM2_SR.B11;
    sbit  CC2OF_TIM2_SR_bit at TIM2_SR.B10;
    sbit  CC1OF_TIM2_SR_bit at TIM2_SR.B9;
    sbit  TIF_TIM2_SR_bit at TIM2_SR.B6;
    sbit  CC4IF_TIM2_SR_bit at TIM2_SR.B4;
    sbit  CC3IF_TIM2_SR_bit at TIM2_SR.B3;
    sbit  CC2IF_TIM2_SR_bit at TIM2_SR.B2;
    sbit  CC1IF_TIM2_SR_bit at TIM2_SR.B1;
    sbit  UIF_TIM2_SR_bit at TIM2_SR.B0;

sfr unsigned long   volatile TIM2_EGR             absolute 0x40000014;
    sbit  TG_TIM2_EGR_bit at TIM2_EGR.B6;
    sbit  CC4G_TIM2_EGR_bit at TIM2_EGR.B4;
    sbit  CC3G_TIM2_EGR_bit at TIM2_EGR.B3;
    sbit  CC2G_TIM2_EGR_bit at TIM2_EGR.B2;
    sbit  CC1G_TIM2_EGR_bit at TIM2_EGR.B1;
    sbit  UG_TIM2_EGR_bit at TIM2_EGR.B0;

sfr unsigned long   volatile TIM2_CCMR1_Output    absolute 0x40000018;
    sbit  OC2M_3_TIM2_CCMR1_Output_bit at TIM2_CCMR1_Output.B24;
    sbit  OC1M_3_TIM2_CCMR1_Output_bit at TIM2_CCMR1_Output.B16;
    sbit  OC2CE_TIM2_CCMR1_Output_bit at TIM2_CCMR1_Output.B15;
    sbit  OC2M0_TIM2_CCMR1_Output_bit at TIM2_CCMR1_Output.B12;
    sbit  OC2M1_TIM2_CCMR1_Output_bit at TIM2_CCMR1_Output.B13;
    sbit  OC2M2_TIM2_CCMR1_Output_bit at TIM2_CCMR1_Output.B14;
    sbit  OC2PE_TIM2_CCMR1_Output_bit at TIM2_CCMR1_Output.B11;
    sbit  OC2FE_TIM2_CCMR1_Output_bit at TIM2_CCMR1_Output.B10;
    sbit  CC2S0_TIM2_CCMR1_Output_bit at TIM2_CCMR1_Output.B8;
    sbit  CC2S1_TIM2_CCMR1_Output_bit at TIM2_CCMR1_Output.B9;
    sbit  OC1CE_TIM2_CCMR1_Output_bit at TIM2_CCMR1_Output.B7;
    sbit  OC1M0_TIM2_CCMR1_Output_bit at TIM2_CCMR1_Output.B4;
    sbit  OC1M1_TIM2_CCMR1_Output_bit at TIM2_CCMR1_Output.B5;
    sbit  OC1M2_TIM2_CCMR1_Output_bit at TIM2_CCMR1_Output.B6;
    sbit  OC1PE_TIM2_CCMR1_Output_bit at TIM2_CCMR1_Output.B3;
    sbit  OC1FE_TIM2_CCMR1_Output_bit at TIM2_CCMR1_Output.B2;
    sbit  CC1S0_TIM2_CCMR1_Output_bit at TIM2_CCMR1_Output.B0;
    sbit  CC1S1_TIM2_CCMR1_Output_bit at TIM2_CCMR1_Output.B1;

sfr unsigned long   volatile TIM2_CCMR1_Input     absolute 0x40000018;
    const register unsigned short int IC2F0 = 12;
    sbit  IC2F0_bit at TIM2_CCMR1_Input.B12;
    const register unsigned short int IC2F1 = 13;
    sbit  IC2F1_bit at TIM2_CCMR1_Input.B13;
    const register unsigned short int IC2F2 = 14;
    sbit  IC2F2_bit at TIM2_CCMR1_Input.B14;
    const register unsigned short int IC2F3 = 15;
    sbit  IC2F3_bit at TIM2_CCMR1_Input.B15;
    const register unsigned short int IC2PSC0 = 10;
    sbit  IC2PSC0_bit at TIM2_CCMR1_Input.B10;
    const register unsigned short int IC2PSC1 = 11;
    sbit  IC2PSC1_bit at TIM2_CCMR1_Input.B11;
    sbit  CC2S0_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B8;
    sbit  CC2S1_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B9;
    sbit  IC1F0_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B4;
    sbit  IC1F1_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B5;
    sbit  IC1F2_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B6;
    sbit  IC1F3_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B7;
    sbit  IC1PSC0_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B2;
    sbit  IC1PSC1_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B3;
    sbit  CC1S0_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B0;
    sbit  CC1S1_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B1;

sfr unsigned long   volatile TIM2_CCMR2_Output    absolute 0x4000001C;
    sbit  OC4M_3_TIM2_CCMR2_Output_bit at TIM2_CCMR2_Output.B24;
    sbit  OC3M_3_TIM2_CCMR2_Output_bit at TIM2_CCMR2_Output.B16;
    sbit  OC4CE_TIM2_CCMR2_Output_bit at TIM2_CCMR2_Output.B15;
    sbit  OC4M0_TIM2_CCMR2_Output_bit at TIM2_CCMR2_Output.B12;
    sbit  OC4M1_TIM2_CCMR2_Output_bit at TIM2_CCMR2_Output.B13;
    sbit  OC4M2_TIM2_CCMR2_Output_bit at TIM2_CCMR2_Output.B14;
    sbit  OC4PE_TIM2_CCMR2_Output_bit at TIM2_CCMR2_Output.B11;
    sbit  OC4FE_TIM2_CCMR2_Output_bit at TIM2_CCMR2_Output.B10;
    sbit  CC4S0_TIM2_CCMR2_Output_bit at TIM2_CCMR2_Output.B8;
    sbit  CC4S1_TIM2_CCMR2_Output_bit at TIM2_CCMR2_Output.B9;
    sbit  OC3CE_TIM2_CCMR2_Output_bit at TIM2_CCMR2_Output.B7;
    sbit  OC3M0_TIM2_CCMR2_Output_bit at TIM2_CCMR2_Output.B4;
    sbit  OC3M1_TIM2_CCMR2_Output_bit at TIM2_CCMR2_Output.B5;
    sbit  OC3M2_TIM2_CCMR2_Output_bit at TIM2_CCMR2_Output.B6;
    sbit  OC3PE_TIM2_CCMR2_Output_bit at TIM2_CCMR2_Output.B3;
    sbit  OC3FE_TIM2_CCMR2_Output_bit at TIM2_CCMR2_Output.B2;
    sbit  CC3S0_TIM2_CCMR2_Output_bit at TIM2_CCMR2_Output.B0;
    sbit  CC3S1_TIM2_CCMR2_Output_bit at TIM2_CCMR2_Output.B1;

sfr unsigned long   volatile TIM2_CCMR2_Input     absolute 0x4000001C;
    const register unsigned short int IC4F0 = 12;
    sbit  IC4F0_bit at TIM2_CCMR2_Input.B12;
    const register unsigned short int IC4F1 = 13;
    sbit  IC4F1_bit at TIM2_CCMR2_Input.B13;
    const register unsigned short int IC4F2 = 14;
    sbit  IC4F2_bit at TIM2_CCMR2_Input.B14;
    const register unsigned short int IC4F3 = 15;
    sbit  IC4F3_bit at TIM2_CCMR2_Input.B15;
    const register unsigned short int IC4PSC0 = 10;
    sbit  IC4PSC0_bit at TIM2_CCMR2_Input.B10;
    const register unsigned short int IC4PSC1 = 11;
    sbit  IC4PSC1_bit at TIM2_CCMR2_Input.B11;
    sbit  CC4S0_TIM2_CCMR2_Input_bit at TIM2_CCMR2_Input.B8;
    sbit  CC4S1_TIM2_CCMR2_Input_bit at TIM2_CCMR2_Input.B9;
    const register unsigned short int IC3F0 = 4;
    sbit  IC3F0_bit at TIM2_CCMR2_Input.B4;
    const register unsigned short int IC3F1 = 5;
    sbit  IC3F1_bit at TIM2_CCMR2_Input.B5;
    const register unsigned short int IC3F2 = 6;
    sbit  IC3F2_bit at TIM2_CCMR2_Input.B6;
    const register unsigned short int IC3F3 = 7;
    sbit  IC3F3_bit at TIM2_CCMR2_Input.B7;
    const register unsigned short int IC3PSC0 = 2;
    sbit  IC3PSC0_bit at TIM2_CCMR2_Input.B2;
    const register unsigned short int IC3PSC1 = 3;
    sbit  IC3PSC1_bit at TIM2_CCMR2_Input.B3;
    sbit  CC3S0_TIM2_CCMR2_Input_bit at TIM2_CCMR2_Input.B0;
    sbit  CC3S1_TIM2_CCMR2_Input_bit at TIM2_CCMR2_Input.B1;

sfr unsigned long   volatile TIM2_CCER            absolute 0x40000020;
    sbit  CC4NP_TIM2_CCER_bit at TIM2_CCER.B15;
    sbit  CC4P_TIM2_CCER_bit at TIM2_CCER.B13;
    sbit  CC4E_TIM2_CCER_bit at TIM2_CCER.B12;
    sbit  CC3NP_TIM2_CCER_bit at TIM2_CCER.B11;
    sbit  CC3P_TIM2_CCER_bit at TIM2_CCER.B9;
    sbit  CC3E_TIM2_CCER_bit at TIM2_CCER.B8;
    sbit  CC2NP_TIM2_CCER_bit at TIM2_CCER.B7;
    sbit  CC2P_TIM2_CCER_bit at TIM2_CCER.B5;
    sbit  CC2E_TIM2_CCER_bit at TIM2_CCER.B4;
    sbit  CC1NP_TIM2_CCER_bit at TIM2_CCER.B3;
    sbit  CC1P_TIM2_CCER_bit at TIM2_CCER.B1;
    sbit  CC1E_TIM2_CCER_bit at TIM2_CCER.B0;

sfr unsigned long   volatile TIM2_CNT             absolute 0x40000024;
    const register unsigned short int CNT_H0 = 16;
    sbit  CNT_H0_bit at TIM2_CNT.B16;
    const register unsigned short int CNT_H1 = 17;
    sbit  CNT_H1_bit at TIM2_CNT.B17;
    const register unsigned short int CNT_H2 = 18;
    sbit  CNT_H2_bit at TIM2_CNT.B18;
    const register unsigned short int CNT_H3 = 19;
    sbit  CNT_H3_bit at TIM2_CNT.B19;
    const register unsigned short int CNT_H4 = 20;
    sbit  CNT_H4_bit at TIM2_CNT.B20;
    const register unsigned short int CNT_H5 = 21;
    sbit  CNT_H5_bit at TIM2_CNT.B21;
    const register unsigned short int CNT_H6 = 22;
    sbit  CNT_H6_bit at TIM2_CNT.B22;
    const register unsigned short int CNT_H7 = 23;
    sbit  CNT_H7_bit at TIM2_CNT.B23;
    const register unsigned short int CNT_H8 = 24;
    sbit  CNT_H8_bit at TIM2_CNT.B24;
    const register unsigned short int CNT_H9 = 25;
    sbit  CNT_H9_bit at TIM2_CNT.B25;
    const register unsigned short int CNT_H10 = 26;
    sbit  CNT_H10_bit at TIM2_CNT.B26;
    const register unsigned short int CNT_H11 = 27;
    sbit  CNT_H11_bit at TIM2_CNT.B27;
    const register unsigned short int CNT_H12 = 28;
    sbit  CNT_H12_bit at TIM2_CNT.B28;
    const register unsigned short int CNT_H13 = 29;
    sbit  CNT_H13_bit at TIM2_CNT.B29;
    const register unsigned short int CNT_H14 = 30;
    sbit  CNT_H14_bit at TIM2_CNT.B30;
    const register unsigned short int CNT_H15 = 31;
    sbit  CNT_H15_bit at TIM2_CNT.B31;
    const register unsigned short int CNT_L0 = 0;
    sbit  CNT_L0_bit at TIM2_CNT.B0;
    const register unsigned short int CNT_L1 = 1;
    sbit  CNT_L1_bit at TIM2_CNT.B1;
    const register unsigned short int CNT_L2 = 2;
    sbit  CNT_L2_bit at TIM2_CNT.B2;
    const register unsigned short int CNT_L3 = 3;
    sbit  CNT_L3_bit at TIM2_CNT.B3;
    const register unsigned short int CNT_L4 = 4;
    sbit  CNT_L4_bit at TIM2_CNT.B4;
    const register unsigned short int CNT_L5 = 5;
    sbit  CNT_L5_bit at TIM2_CNT.B5;
    const register unsigned short int CNT_L6 = 6;
    sbit  CNT_L6_bit at TIM2_CNT.B6;
    const register unsigned short int CNT_L7 = 7;
    sbit  CNT_L7_bit at TIM2_CNT.B7;
    const register unsigned short int CNT_L8 = 8;
    sbit  CNT_L8_bit at TIM2_CNT.B8;
    const register unsigned short int CNT_L9 = 9;
    sbit  CNT_L9_bit at TIM2_CNT.B9;
    const register unsigned short int CNT_L10 = 10;
    sbit  CNT_L10_bit at TIM2_CNT.B10;
    const register unsigned short int CNT_L11 = 11;
    sbit  CNT_L11_bit at TIM2_CNT.B11;
    const register unsigned short int CNT_L12 = 12;
    sbit  CNT_L12_bit at TIM2_CNT.B12;
    const register unsigned short int CNT_L13 = 13;
    sbit  CNT_L13_bit at TIM2_CNT.B13;
    const register unsigned short int CNT_L14 = 14;
    sbit  CNT_L14_bit at TIM2_CNT.B14;
    const register unsigned short int CNT_L15 = 15;
    sbit  CNT_L15_bit at TIM2_CNT.B15;

sfr unsigned long   volatile TIM2_PSC             absolute 0x40000028;
    sbit  PSC0_TIM2_PSC_bit at TIM2_PSC.B0;
    sbit  PSC1_TIM2_PSC_bit at TIM2_PSC.B1;
    sbit  PSC2_TIM2_PSC_bit at TIM2_PSC.B2;
    sbit  PSC3_TIM2_PSC_bit at TIM2_PSC.B3;
    sbit  PSC4_TIM2_PSC_bit at TIM2_PSC.B4;
    sbit  PSC5_TIM2_PSC_bit at TIM2_PSC.B5;
    sbit  PSC6_TIM2_PSC_bit at TIM2_PSC.B6;
    sbit  PSC7_TIM2_PSC_bit at TIM2_PSC.B7;
    sbit  PSC8_TIM2_PSC_bit at TIM2_PSC.B8;
    sbit  PSC9_TIM2_PSC_bit at TIM2_PSC.B9;
    sbit  PSC10_TIM2_PSC_bit at TIM2_PSC.B10;
    sbit  PSC11_TIM2_PSC_bit at TIM2_PSC.B11;
    sbit  PSC12_TIM2_PSC_bit at TIM2_PSC.B12;
    sbit  PSC13_TIM2_PSC_bit at TIM2_PSC.B13;
    sbit  PSC14_TIM2_PSC_bit at TIM2_PSC.B14;
    sbit  PSC15_TIM2_PSC_bit at TIM2_PSC.B15;

sfr unsigned long   volatile TIM2_ARR             absolute 0x4000002C;
    const register unsigned short int ARR_H0 = 16;
    sbit  ARR_H0_bit at TIM2_ARR.B16;
    const register unsigned short int ARR_H1 = 17;
    sbit  ARR_H1_bit at TIM2_ARR.B17;
    const register unsigned short int ARR_H2 = 18;
    sbit  ARR_H2_bit at TIM2_ARR.B18;
    const register unsigned short int ARR_H3 = 19;
    sbit  ARR_H3_bit at TIM2_ARR.B19;
    const register unsigned short int ARR_H4 = 20;
    sbit  ARR_H4_bit at TIM2_ARR.B20;
    const register unsigned short int ARR_H5 = 21;
    sbit  ARR_H5_bit at TIM2_ARR.B21;
    const register unsigned short int ARR_H6 = 22;
    sbit  ARR_H6_bit at TIM2_ARR.B22;
    const register unsigned short int ARR_H7 = 23;
    sbit  ARR_H7_bit at TIM2_ARR.B23;
    const register unsigned short int ARR_H8 = 24;
    sbit  ARR_H8_bit at TIM2_ARR.B24;
    const register unsigned short int ARR_H9 = 25;
    sbit  ARR_H9_bit at TIM2_ARR.B25;
    const register unsigned short int ARR_H10 = 26;
    sbit  ARR_H10_bit at TIM2_ARR.B26;
    const register unsigned short int ARR_H11 = 27;
    sbit  ARR_H11_bit at TIM2_ARR.B27;
    const register unsigned short int ARR_H12 = 28;
    sbit  ARR_H12_bit at TIM2_ARR.B28;
    const register unsigned short int ARR_H13 = 29;
    sbit  ARR_H13_bit at TIM2_ARR.B29;
    const register unsigned short int ARR_H14 = 30;
    sbit  ARR_H14_bit at TIM2_ARR.B30;
    const register unsigned short int ARR_H15 = 31;
    sbit  ARR_H15_bit at TIM2_ARR.B31;
    const register unsigned short int ARR_L0 = 0;
    sbit  ARR_L0_bit at TIM2_ARR.B0;
    const register unsigned short int ARR_L1 = 1;
    sbit  ARR_L1_bit at TIM2_ARR.B1;
    const register unsigned short int ARR_L2 = 2;
    sbit  ARR_L2_bit at TIM2_ARR.B2;
    const register unsigned short int ARR_L3 = 3;
    sbit  ARR_L3_bit at TIM2_ARR.B3;
    const register unsigned short int ARR_L4 = 4;
    sbit  ARR_L4_bit at TIM2_ARR.B4;
    const register unsigned short int ARR_L5 = 5;
    sbit  ARR_L5_bit at TIM2_ARR.B5;
    const register unsigned short int ARR_L6 = 6;
    sbit  ARR_L6_bit at TIM2_ARR.B6;
    const register unsigned short int ARR_L7 = 7;
    sbit  ARR_L7_bit at TIM2_ARR.B7;
    const register unsigned short int ARR_L8 = 8;
    sbit  ARR_L8_bit at TIM2_ARR.B8;
    const register unsigned short int ARR_L9 = 9;
    sbit  ARR_L9_bit at TIM2_ARR.B9;
    const register unsigned short int ARR_L10 = 10;
    sbit  ARR_L10_bit at TIM2_ARR.B10;
    const register unsigned short int ARR_L11 = 11;
    sbit  ARR_L11_bit at TIM2_ARR.B11;
    const register unsigned short int ARR_L12 = 12;
    sbit  ARR_L12_bit at TIM2_ARR.B12;
    const register unsigned short int ARR_L13 = 13;
    sbit  ARR_L13_bit at TIM2_ARR.B13;
    const register unsigned short int ARR_L14 = 14;
    sbit  ARR_L14_bit at TIM2_ARR.B14;
    const register unsigned short int ARR_L15 = 15;
    sbit  ARR_L15_bit at TIM2_ARR.B15;

sfr unsigned long   volatile TIM2_CCR1            absolute 0x40000034;
    const register unsigned short int CCR1_H0 = 16;
    sbit  CCR1_H0_bit at TIM2_CCR1.B16;
    const register unsigned short int CCR1_H1 = 17;
    sbit  CCR1_H1_bit at TIM2_CCR1.B17;
    const register unsigned short int CCR1_H2 = 18;
    sbit  CCR1_H2_bit at TIM2_CCR1.B18;
    const register unsigned short int CCR1_H3 = 19;
    sbit  CCR1_H3_bit at TIM2_CCR1.B19;
    const register unsigned short int CCR1_H4 = 20;
    sbit  CCR1_H4_bit at TIM2_CCR1.B20;
    const register unsigned short int CCR1_H5 = 21;
    sbit  CCR1_H5_bit at TIM2_CCR1.B21;
    const register unsigned short int CCR1_H6 = 22;
    sbit  CCR1_H6_bit at TIM2_CCR1.B22;
    const register unsigned short int CCR1_H7 = 23;
    sbit  CCR1_H7_bit at TIM2_CCR1.B23;
    const register unsigned short int CCR1_H8 = 24;
    sbit  CCR1_H8_bit at TIM2_CCR1.B24;
    const register unsigned short int CCR1_H9 = 25;
    sbit  CCR1_H9_bit at TIM2_CCR1.B25;
    const register unsigned short int CCR1_H10 = 26;
    sbit  CCR1_H10_bit at TIM2_CCR1.B26;
    const register unsigned short int CCR1_H11 = 27;
    sbit  CCR1_H11_bit at TIM2_CCR1.B27;
    const register unsigned short int CCR1_H12 = 28;
    sbit  CCR1_H12_bit at TIM2_CCR1.B28;
    const register unsigned short int CCR1_H13 = 29;
    sbit  CCR1_H13_bit at TIM2_CCR1.B29;
    const register unsigned short int CCR1_H14 = 30;
    sbit  CCR1_H14_bit at TIM2_CCR1.B30;
    const register unsigned short int CCR1_H15 = 31;
    sbit  CCR1_H15_bit at TIM2_CCR1.B31;
    const register unsigned short int CCR1_L0 = 0;
    sbit  CCR1_L0_bit at TIM2_CCR1.B0;
    const register unsigned short int CCR1_L1 = 1;
    sbit  CCR1_L1_bit at TIM2_CCR1.B1;
    const register unsigned short int CCR1_L2 = 2;
    sbit  CCR1_L2_bit at TIM2_CCR1.B2;
    const register unsigned short int CCR1_L3 = 3;
    sbit  CCR1_L3_bit at TIM2_CCR1.B3;
    const register unsigned short int CCR1_L4 = 4;
    sbit  CCR1_L4_bit at TIM2_CCR1.B4;
    const register unsigned short int CCR1_L5 = 5;
    sbit  CCR1_L5_bit at TIM2_CCR1.B5;
    const register unsigned short int CCR1_L6 = 6;
    sbit  CCR1_L6_bit at TIM2_CCR1.B6;
    const register unsigned short int CCR1_L7 = 7;
    sbit  CCR1_L7_bit at TIM2_CCR1.B7;
    const register unsigned short int CCR1_L8 = 8;
    sbit  CCR1_L8_bit at TIM2_CCR1.B8;
    const register unsigned short int CCR1_L9 = 9;
    sbit  CCR1_L9_bit at TIM2_CCR1.B9;
    const register unsigned short int CCR1_L10 = 10;
    sbit  CCR1_L10_bit at TIM2_CCR1.B10;
    const register unsigned short int CCR1_L11 = 11;
    sbit  CCR1_L11_bit at TIM2_CCR1.B11;
    const register unsigned short int CCR1_L12 = 12;
    sbit  CCR1_L12_bit at TIM2_CCR1.B12;
    const register unsigned short int CCR1_L13 = 13;
    sbit  CCR1_L13_bit at TIM2_CCR1.B13;
    const register unsigned short int CCR1_L14 = 14;
    sbit  CCR1_L14_bit at TIM2_CCR1.B14;
    const register unsigned short int CCR1_L15 = 15;
    sbit  CCR1_L15_bit at TIM2_CCR1.B15;

sfr unsigned long   volatile TIM2_CCR2            absolute 0x40000038;
    const register unsigned short int CCR2_H0 = 16;
    sbit  CCR2_H0_bit at TIM2_CCR2.B16;
    const register unsigned short int CCR2_H1 = 17;
    sbit  CCR2_H1_bit at TIM2_CCR2.B17;
    const register unsigned short int CCR2_H2 = 18;
    sbit  CCR2_H2_bit at TIM2_CCR2.B18;
    const register unsigned short int CCR2_H3 = 19;
    sbit  CCR2_H3_bit at TIM2_CCR2.B19;
    const register unsigned short int CCR2_H4 = 20;
    sbit  CCR2_H4_bit at TIM2_CCR2.B20;
    const register unsigned short int CCR2_H5 = 21;
    sbit  CCR2_H5_bit at TIM2_CCR2.B21;
    const register unsigned short int CCR2_H6 = 22;
    sbit  CCR2_H6_bit at TIM2_CCR2.B22;
    const register unsigned short int CCR2_H7 = 23;
    sbit  CCR2_H7_bit at TIM2_CCR2.B23;
    const register unsigned short int CCR2_H8 = 24;
    sbit  CCR2_H8_bit at TIM2_CCR2.B24;
    const register unsigned short int CCR2_H9 = 25;
    sbit  CCR2_H9_bit at TIM2_CCR2.B25;
    const register unsigned short int CCR2_H10 = 26;
    sbit  CCR2_H10_bit at TIM2_CCR2.B26;
    const register unsigned short int CCR2_H11 = 27;
    sbit  CCR2_H11_bit at TIM2_CCR2.B27;
    const register unsigned short int CCR2_H12 = 28;
    sbit  CCR2_H12_bit at TIM2_CCR2.B28;
    const register unsigned short int CCR2_H13 = 29;
    sbit  CCR2_H13_bit at TIM2_CCR2.B29;
    const register unsigned short int CCR2_H14 = 30;
    sbit  CCR2_H14_bit at TIM2_CCR2.B30;
    const register unsigned short int CCR2_H15 = 31;
    sbit  CCR2_H15_bit at TIM2_CCR2.B31;
    const register unsigned short int CCR2_L0 = 0;
    sbit  CCR2_L0_bit at TIM2_CCR2.B0;
    const register unsigned short int CCR2_L1 = 1;
    sbit  CCR2_L1_bit at TIM2_CCR2.B1;
    const register unsigned short int CCR2_L2 = 2;
    sbit  CCR2_L2_bit at TIM2_CCR2.B2;
    const register unsigned short int CCR2_L3 = 3;
    sbit  CCR2_L3_bit at TIM2_CCR2.B3;
    const register unsigned short int CCR2_L4 = 4;
    sbit  CCR2_L4_bit at TIM2_CCR2.B4;
    const register unsigned short int CCR2_L5 = 5;
    sbit  CCR2_L5_bit at TIM2_CCR2.B5;
    const register unsigned short int CCR2_L6 = 6;
    sbit  CCR2_L6_bit at TIM2_CCR2.B6;
    const register unsigned short int CCR2_L7 = 7;
    sbit  CCR2_L7_bit at TIM2_CCR2.B7;
    const register unsigned short int CCR2_L8 = 8;
    sbit  CCR2_L8_bit at TIM2_CCR2.B8;
    const register unsigned short int CCR2_L9 = 9;
    sbit  CCR2_L9_bit at TIM2_CCR2.B9;
    const register unsigned short int CCR2_L10 = 10;
    sbit  CCR2_L10_bit at TIM2_CCR2.B10;
    const register unsigned short int CCR2_L11 = 11;
    sbit  CCR2_L11_bit at TIM2_CCR2.B11;
    const register unsigned short int CCR2_L12 = 12;
    sbit  CCR2_L12_bit at TIM2_CCR2.B12;
    const register unsigned short int CCR2_L13 = 13;
    sbit  CCR2_L13_bit at TIM2_CCR2.B13;
    const register unsigned short int CCR2_L14 = 14;
    sbit  CCR2_L14_bit at TIM2_CCR2.B14;
    const register unsigned short int CCR2_L15 = 15;
    sbit  CCR2_L15_bit at TIM2_CCR2.B15;

sfr unsigned long   volatile TIM2_CCR3            absolute 0x4000003C;
    const register unsigned short int CCR3_H0 = 16;
    sbit  CCR3_H0_bit at TIM2_CCR3.B16;
    const register unsigned short int CCR3_H1 = 17;
    sbit  CCR3_H1_bit at TIM2_CCR3.B17;
    const register unsigned short int CCR3_H2 = 18;
    sbit  CCR3_H2_bit at TIM2_CCR3.B18;
    const register unsigned short int CCR3_H3 = 19;
    sbit  CCR3_H3_bit at TIM2_CCR3.B19;
    const register unsigned short int CCR3_H4 = 20;
    sbit  CCR3_H4_bit at TIM2_CCR3.B20;
    const register unsigned short int CCR3_H5 = 21;
    sbit  CCR3_H5_bit at TIM2_CCR3.B21;
    const register unsigned short int CCR3_H6 = 22;
    sbit  CCR3_H6_bit at TIM2_CCR3.B22;
    const register unsigned short int CCR3_H7 = 23;
    sbit  CCR3_H7_bit at TIM2_CCR3.B23;
    const register unsigned short int CCR3_H8 = 24;
    sbit  CCR3_H8_bit at TIM2_CCR3.B24;
    const register unsigned short int CCR3_H9 = 25;
    sbit  CCR3_H9_bit at TIM2_CCR3.B25;
    const register unsigned short int CCR3_H10 = 26;
    sbit  CCR3_H10_bit at TIM2_CCR3.B26;
    const register unsigned short int CCR3_H11 = 27;
    sbit  CCR3_H11_bit at TIM2_CCR3.B27;
    const register unsigned short int CCR3_H12 = 28;
    sbit  CCR3_H12_bit at TIM2_CCR3.B28;
    const register unsigned short int CCR3_H13 = 29;
    sbit  CCR3_H13_bit at TIM2_CCR3.B29;
    const register unsigned short int CCR3_H14 = 30;
    sbit  CCR3_H14_bit at TIM2_CCR3.B30;
    const register unsigned short int CCR3_H15 = 31;
    sbit  CCR3_H15_bit at TIM2_CCR3.B31;
    const register unsigned short int CCR3_L0 = 0;
    sbit  CCR3_L0_bit at TIM2_CCR3.B0;
    const register unsigned short int CCR3_L1 = 1;
    sbit  CCR3_L1_bit at TIM2_CCR3.B1;
    const register unsigned short int CCR3_L2 = 2;
    sbit  CCR3_L2_bit at TIM2_CCR3.B2;
    const register unsigned short int CCR3_L3 = 3;
    sbit  CCR3_L3_bit at TIM2_CCR3.B3;
    const register unsigned short int CCR3_L4 = 4;
    sbit  CCR3_L4_bit at TIM2_CCR3.B4;
    const register unsigned short int CCR3_L5 = 5;
    sbit  CCR3_L5_bit at TIM2_CCR3.B5;
    const register unsigned short int CCR3_L6 = 6;
    sbit  CCR3_L6_bit at TIM2_CCR3.B6;
    const register unsigned short int CCR3_L7 = 7;
    sbit  CCR3_L7_bit at TIM2_CCR3.B7;
    const register unsigned short int CCR3_L8 = 8;
    sbit  CCR3_L8_bit at TIM2_CCR3.B8;
    const register unsigned short int CCR3_L9 = 9;
    sbit  CCR3_L9_bit at TIM2_CCR3.B9;
    const register unsigned short int CCR3_L10 = 10;
    sbit  CCR3_L10_bit at TIM2_CCR3.B10;
    const register unsigned short int CCR3_L11 = 11;
    sbit  CCR3_L11_bit at TIM2_CCR3.B11;
    const register unsigned short int CCR3_L12 = 12;
    sbit  CCR3_L12_bit at TIM2_CCR3.B12;
    const register unsigned short int CCR3_L13 = 13;
    sbit  CCR3_L13_bit at TIM2_CCR3.B13;
    const register unsigned short int CCR3_L14 = 14;
    sbit  CCR3_L14_bit at TIM2_CCR3.B14;
    const register unsigned short int CCR3_L15 = 15;
    sbit  CCR3_L15_bit at TIM2_CCR3.B15;

sfr unsigned long   volatile TIM2_CCR4            absolute 0x40000040;
    const register unsigned short int CCR4_H0 = 16;
    sbit  CCR4_H0_bit at TIM2_CCR4.B16;
    const register unsigned short int CCR4_H1 = 17;
    sbit  CCR4_H1_bit at TIM2_CCR4.B17;
    const register unsigned short int CCR4_H2 = 18;
    sbit  CCR4_H2_bit at TIM2_CCR4.B18;
    const register unsigned short int CCR4_H3 = 19;
    sbit  CCR4_H3_bit at TIM2_CCR4.B19;
    const register unsigned short int CCR4_H4 = 20;
    sbit  CCR4_H4_bit at TIM2_CCR4.B20;
    const register unsigned short int CCR4_H5 = 21;
    sbit  CCR4_H5_bit at TIM2_CCR4.B21;
    const register unsigned short int CCR4_H6 = 22;
    sbit  CCR4_H6_bit at TIM2_CCR4.B22;
    const register unsigned short int CCR4_H7 = 23;
    sbit  CCR4_H7_bit at TIM2_CCR4.B23;
    const register unsigned short int CCR4_H8 = 24;
    sbit  CCR4_H8_bit at TIM2_CCR4.B24;
    const register unsigned short int CCR4_H9 = 25;
    sbit  CCR4_H9_bit at TIM2_CCR4.B25;
    const register unsigned short int CCR4_H10 = 26;
    sbit  CCR4_H10_bit at TIM2_CCR4.B26;
    const register unsigned short int CCR4_H11 = 27;
    sbit  CCR4_H11_bit at TIM2_CCR4.B27;
    const register unsigned short int CCR4_H12 = 28;
    sbit  CCR4_H12_bit at TIM2_CCR4.B28;
    const register unsigned short int CCR4_H13 = 29;
    sbit  CCR4_H13_bit at TIM2_CCR4.B29;
    const register unsigned short int CCR4_H14 = 30;
    sbit  CCR4_H14_bit at TIM2_CCR4.B30;
    const register unsigned short int CCR4_H15 = 31;
    sbit  CCR4_H15_bit at TIM2_CCR4.B31;
    const register unsigned short int CCR4_L0 = 0;
    sbit  CCR4_L0_bit at TIM2_CCR4.B0;
    const register unsigned short int CCR4_L1 = 1;
    sbit  CCR4_L1_bit at TIM2_CCR4.B1;
    const register unsigned short int CCR4_L2 = 2;
    sbit  CCR4_L2_bit at TIM2_CCR4.B2;
    const register unsigned short int CCR4_L3 = 3;
    sbit  CCR4_L3_bit at TIM2_CCR4.B3;
    const register unsigned short int CCR4_L4 = 4;
    sbit  CCR4_L4_bit at TIM2_CCR4.B4;
    const register unsigned short int CCR4_L5 = 5;
    sbit  CCR4_L5_bit at TIM2_CCR4.B5;
    const register unsigned short int CCR4_L6 = 6;
    sbit  CCR4_L6_bit at TIM2_CCR4.B6;
    const register unsigned short int CCR4_L7 = 7;
    sbit  CCR4_L7_bit at TIM2_CCR4.B7;
    const register unsigned short int CCR4_L8 = 8;
    sbit  CCR4_L8_bit at TIM2_CCR4.B8;
    const register unsigned short int CCR4_L9 = 9;
    sbit  CCR4_L9_bit at TIM2_CCR4.B9;
    const register unsigned short int CCR4_L10 = 10;
    sbit  CCR4_L10_bit at TIM2_CCR4.B10;
    const register unsigned short int CCR4_L11 = 11;
    sbit  CCR4_L11_bit at TIM2_CCR4.B11;
    const register unsigned short int CCR4_L12 = 12;
    sbit  CCR4_L12_bit at TIM2_CCR4.B12;
    const register unsigned short int CCR4_L13 = 13;
    sbit  CCR4_L13_bit at TIM2_CCR4.B13;
    const register unsigned short int CCR4_L14 = 14;
    sbit  CCR4_L14_bit at TIM2_CCR4.B14;
    const register unsigned short int CCR4_L15 = 15;
    sbit  CCR4_L15_bit at TIM2_CCR4.B15;

sfr unsigned long   volatile TIM2_DCR             absolute 0x40000048;
    sbit  DBL0_TIM2_DCR_bit at TIM2_DCR.B8;
    sbit  DBL1_TIM2_DCR_bit at TIM2_DCR.B9;
    sbit  DBL2_TIM2_DCR_bit at TIM2_DCR.B10;
    sbit  DBL3_TIM2_DCR_bit at TIM2_DCR.B11;
    sbit  DBL4_TIM2_DCR_bit at TIM2_DCR.B12;
    sbit  DBA0_TIM2_DCR_bit at TIM2_DCR.B0;
    sbit  DBA1_TIM2_DCR_bit at TIM2_DCR.B1;
    sbit  DBA2_TIM2_DCR_bit at TIM2_DCR.B2;
    sbit  DBA3_TIM2_DCR_bit at TIM2_DCR.B3;
    sbit  DBA4_TIM2_DCR_bit at TIM2_DCR.B4;

sfr unsigned long   volatile TIM2_DMAR            absolute 0x4000004C;
    sbit  DMAB0_TIM2_DMAR_bit at TIM2_DMAR.B0;
    sbit  DMAB1_TIM2_DMAR_bit at TIM2_DMAR.B1;
    sbit  DMAB2_TIM2_DMAR_bit at TIM2_DMAR.B2;
    sbit  DMAB3_TIM2_DMAR_bit at TIM2_DMAR.B3;
    sbit  DMAB4_TIM2_DMAR_bit at TIM2_DMAR.B4;
    sbit  DMAB5_TIM2_DMAR_bit at TIM2_DMAR.B5;
    sbit  DMAB6_TIM2_DMAR_bit at TIM2_DMAR.B6;
    sbit  DMAB7_TIM2_DMAR_bit at TIM2_DMAR.B7;
    sbit  DMAB8_TIM2_DMAR_bit at TIM2_DMAR.B8;
    sbit  DMAB9_TIM2_DMAR_bit at TIM2_DMAR.B9;
    sbit  DMAB10_TIM2_DMAR_bit at TIM2_DMAR.B10;
    sbit  DMAB11_TIM2_DMAR_bit at TIM2_DMAR.B11;
    sbit  DMAB12_TIM2_DMAR_bit at TIM2_DMAR.B12;
    sbit  DMAB13_TIM2_DMAR_bit at TIM2_DMAR.B13;
    sbit  DMAB14_TIM2_DMAR_bit at TIM2_DMAR.B14;
    sbit  DMAB15_TIM2_DMAR_bit at TIM2_DMAR.B15;

sfr unsigned long   volatile TIM2_OR1             absolute 0x40000050;
    const register unsigned short int IOCREF_CLR = 0;
    sbit  IOCREF_CLR_bit at TIM2_OR1.B0;

sfr unsigned long   volatile TIM2_AF1             absolute 0x40000060;
    sbit  ETRSEL0_TIM2_AF1_bit at TIM2_AF1.B14;
    sbit  ETRSEL1_TIM2_AF1_bit at TIM2_AF1.B15;
    sbit  ETRSEL2_TIM2_AF1_bit at TIM2_AF1.B16;
    const register unsigned short int ETRSEL3 = 17;
    sbit  ETRSEL3_bit at TIM2_AF1.B17;

sfr unsigned long   volatile TIM2_TISEL           absolute 0x40000068;
    sbit  TI1SEL0_TIM2_TISEL_bit at TIM2_TISEL.B0;
    sbit  TI1SEL1_TIM2_TISEL_bit at TIM2_TISEL.B1;
    sbit  TI1SEL2_TIM2_TISEL_bit at TIM2_TISEL.B2;
    sbit  TI1SEL3_TIM2_TISEL_bit at TIM2_TISEL.B3;
    const register unsigned short int TI2SEL0 = 8;
    sbit  TI2SEL0_bit at TIM2_TISEL.B8;
    const register unsigned short int TI2SEL1 = 9;
    sbit  TI2SEL1_bit at TIM2_TISEL.B9;
    const register unsigned short int TI2SEL2 = 10;
    sbit  TI2SEL2_bit at TIM2_TISEL.B10;
    const register unsigned short int TI2SEL3 = 11;
    sbit  TI2SEL3_bit at TIM2_TISEL.B11;

sfr unsigned long   volatile TIM3_CR1             absolute 0x40000400;
    sbit  UIFREMAP_TIM3_CR1_bit at TIM3_CR1.B11;
    sbit  CKD0_TIM3_CR1_bit at TIM3_CR1.B8;
    sbit  CKD1_TIM3_CR1_bit at TIM3_CR1.B9;
    sbit  ARPE_TIM3_CR1_bit at TIM3_CR1.B7;
    sbit  CMS0_TIM3_CR1_bit at TIM3_CR1.B5;
    sbit  CMS1_TIM3_CR1_bit at TIM3_CR1.B6;
    sbit  DIR_TIM3_CR1_bit at TIM3_CR1.B4;
    sbit  OPM_TIM3_CR1_bit at TIM3_CR1.B3;
    sbit  URS_TIM3_CR1_bit at TIM3_CR1.B2;
    sbit  UDIS_TIM3_CR1_bit at TIM3_CR1.B1;
    sbit  CEN_TIM3_CR1_bit at TIM3_CR1.B0;

sfr unsigned long   volatile TIM3_CR2             absolute 0x40000404;
    sbit  TI1S_TIM3_CR2_bit at TIM3_CR2.B7;
    sbit  MMS0_TIM3_CR2_bit at TIM3_CR2.B4;
    sbit  MMS1_TIM3_CR2_bit at TIM3_CR2.B5;
    sbit  MMS2_TIM3_CR2_bit at TIM3_CR2.B6;
    sbit  CCDS_TIM3_CR2_bit at TIM3_CR2.B3;

sfr unsigned long   volatile TIM3_SMCR            absolute 0x40000408;
    sbit  TS_4_30_TIM3_SMCR_bit at TIM3_SMCR.B20;
    sbit  TS_4_31_TIM3_SMCR_bit at TIM3_SMCR.B21;
    sbit  SMS_3_TIM3_SMCR_bit at TIM3_SMCR.B16;
    sbit  ETP_TIM3_SMCR_bit at TIM3_SMCR.B15;
    sbit  ECE_TIM3_SMCR_bit at TIM3_SMCR.B14;
    sbit  ETPS0_TIM3_SMCR_bit at TIM3_SMCR.B12;
    sbit  ETPS1_TIM3_SMCR_bit at TIM3_SMCR.B13;
    sbit  ETF0_TIM3_SMCR_bit at TIM3_SMCR.B8;
    sbit  ETF1_TIM3_SMCR_bit at TIM3_SMCR.B9;
    sbit  ETF2_TIM3_SMCR_bit at TIM3_SMCR.B10;
    sbit  ETF3_TIM3_SMCR_bit at TIM3_SMCR.B11;
    sbit  MSM_TIM3_SMCR_bit at TIM3_SMCR.B7;
    sbit  TS0_TIM3_SMCR_bit at TIM3_SMCR.B4;
    sbit  TS1_TIM3_SMCR_bit at TIM3_SMCR.B5;
    sbit  TS2_TIM3_SMCR_bit at TIM3_SMCR.B6;
    sbit  OCCS_TIM3_SMCR_bit at TIM3_SMCR.B3;
    sbit  SMS0_TIM3_SMCR_bit at TIM3_SMCR.B0;
    sbit  SMS1_TIM3_SMCR_bit at TIM3_SMCR.B1;
    sbit  SMS2_TIM3_SMCR_bit at TIM3_SMCR.B2;

sfr unsigned long   volatile TIM3_DIER            absolute 0x4000040C;
    sbit  TDE_TIM3_DIER_bit at TIM3_DIER.B14;
    sbit  CC4DE_TIM3_DIER_bit at TIM3_DIER.B12;
    sbit  CC3DE_TIM3_DIER_bit at TIM3_DIER.B11;
    sbit  CC2DE_TIM3_DIER_bit at TIM3_DIER.B10;
    sbit  CC1DE_TIM3_DIER_bit at TIM3_DIER.B9;
    sbit  UDE_TIM3_DIER_bit at TIM3_DIER.B8;
    sbit  TIE_TIM3_DIER_bit at TIM3_DIER.B6;
    sbit  CC4IE_TIM3_DIER_bit at TIM3_DIER.B4;
    sbit  CC3IE_TIM3_DIER_bit at TIM3_DIER.B3;
    sbit  CC2IE_TIM3_DIER_bit at TIM3_DIER.B2;
    sbit  CC1IE_TIM3_DIER_bit at TIM3_DIER.B1;
    sbit  UIE_TIM3_DIER_bit at TIM3_DIER.B0;

sfr unsigned long   volatile TIM3_SR              absolute 0x40000410;
    sbit  CC4OF_TIM3_SR_bit at TIM3_SR.B12;
    sbit  CC3OF_TIM3_SR_bit at TIM3_SR.B11;
    sbit  CC2OF_TIM3_SR_bit at TIM3_SR.B10;
    sbit  CC1OF_TIM3_SR_bit at TIM3_SR.B9;
    sbit  TIF_TIM3_SR_bit at TIM3_SR.B6;
    sbit  CC4IF_TIM3_SR_bit at TIM3_SR.B4;
    sbit  CC3IF_TIM3_SR_bit at TIM3_SR.B3;
    sbit  CC2IF_TIM3_SR_bit at TIM3_SR.B2;
    sbit  CC1IF_TIM3_SR_bit at TIM3_SR.B1;
    sbit  UIF_TIM3_SR_bit at TIM3_SR.B0;

sfr unsigned long   volatile TIM3_EGR             absolute 0x40000414;
    sbit  TG_TIM3_EGR_bit at TIM3_EGR.B6;
    sbit  CC4G_TIM3_EGR_bit at TIM3_EGR.B4;
    sbit  CC3G_TIM3_EGR_bit at TIM3_EGR.B3;
    sbit  CC2G_TIM3_EGR_bit at TIM3_EGR.B2;
    sbit  CC1G_TIM3_EGR_bit at TIM3_EGR.B1;
    sbit  UG_TIM3_EGR_bit at TIM3_EGR.B0;

sfr unsigned long   volatile TIM3_CCMR1_Output    absolute 0x40000418;
    sbit  OC2M_3_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B24;
    sbit  OC1M_3_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B16;
    sbit  OC2CE_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B15;
    sbit  OC2M0_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B12;
    sbit  OC2M1_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B13;
    sbit  OC2M2_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B14;
    sbit  OC2PE_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B11;
    sbit  OC2FE_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B10;
    sbit  CC2S0_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B8;
    sbit  CC2S1_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B9;
    sbit  OC1CE_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B7;
    sbit  OC1M0_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B4;
    sbit  OC1M1_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B5;
    sbit  OC1M2_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B6;
    sbit  OC1PE_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B3;
    sbit  OC1FE_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B2;
    sbit  CC1S0_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B0;
    sbit  CC1S1_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B1;

sfr unsigned long   volatile TIM3_CCMR1_Input     absolute 0x40000418;
    sbit  IC2F0_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B12;
    sbit  IC2F1_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B13;
    sbit  IC2F2_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B14;
    sbit  IC2F3_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B15;
    sbit  IC2PSC0_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B10;
    sbit  IC2PSC1_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B11;
    sbit  CC2S0_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B8;
    sbit  CC2S1_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B9;
    sbit  IC1F0_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B4;
    sbit  IC1F1_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B5;
    sbit  IC1F2_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B6;
    sbit  IC1F3_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B7;
    sbit  IC1PSC0_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B2;
    sbit  IC1PSC1_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B3;
    sbit  CC1S0_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B0;
    sbit  CC1S1_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B1;

sfr unsigned long   volatile TIM3_CCMR2_Output    absolute 0x4000041C;
    sbit  OC4M_3_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B24;
    sbit  OC3M_3_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B16;
    sbit  OC4CE_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B15;
    sbit  OC4M0_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B12;
    sbit  OC4M1_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B13;
    sbit  OC4M2_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B14;
    sbit  OC4PE_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B11;
    sbit  OC4FE_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B10;
    sbit  CC4S0_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B8;
    sbit  CC4S1_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B9;
    sbit  OC3CE_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B7;
    sbit  OC3M0_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B4;
    sbit  OC3M1_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B5;
    sbit  OC3M2_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B6;
    sbit  OC3PE_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B3;
    sbit  OC3FE_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B2;
    sbit  CC3S0_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B0;
    sbit  CC3S1_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B1;

sfr unsigned long   volatile TIM3_CCMR2_Input     absolute 0x4000041C;
    sbit  IC4F0_TIM3_CCMR2_Input_bit at TIM3_CCMR2_Input.B12;
    sbit  IC4F1_TIM3_CCMR2_Input_bit at TIM3_CCMR2_Input.B13;
    sbit  IC4F2_TIM3_CCMR2_Input_bit at TIM3_CCMR2_Input.B14;
    sbit  IC4F3_TIM3_CCMR2_Input_bit at TIM3_CCMR2_Input.B15;
    sbit  IC4PSC0_TIM3_CCMR2_Input_bit at TIM3_CCMR2_Input.B10;
    sbit  IC4PSC1_TIM3_CCMR2_Input_bit at TIM3_CCMR2_Input.B11;
    sbit  CC4S0_TIM3_CCMR2_Input_bit at TIM3_CCMR2_Input.B8;
    sbit  CC4S1_TIM3_CCMR2_Input_bit at TIM3_CCMR2_Input.B9;
    sbit  IC3F0_TIM3_CCMR2_Input_bit at TIM3_CCMR2_Input.B4;
    sbit  IC3F1_TIM3_CCMR2_Input_bit at TIM3_CCMR2_Input.B5;
    sbit  IC3F2_TIM3_CCMR2_Input_bit at TIM3_CCMR2_Input.B6;
    sbit  IC3F3_TIM3_CCMR2_Input_bit at TIM3_CCMR2_Input.B7;
    sbit  IC3PSC0_TIM3_CCMR2_Input_bit at TIM3_CCMR2_Input.B2;
    sbit  IC3PSC1_TIM3_CCMR2_Input_bit at TIM3_CCMR2_Input.B3;
    sbit  CC3S0_TIM3_CCMR2_Input_bit at TIM3_CCMR2_Input.B0;
    sbit  CC3S1_TIM3_CCMR2_Input_bit at TIM3_CCMR2_Input.B1;

sfr unsigned long   volatile TIM3_CCER            absolute 0x40000420;
    sbit  CC4NP_TIM3_CCER_bit at TIM3_CCER.B15;
    sbit  CC4P_TIM3_CCER_bit at TIM3_CCER.B13;
    sbit  CC4E_TIM3_CCER_bit at TIM3_CCER.B12;
    sbit  CC3NP_TIM3_CCER_bit at TIM3_CCER.B11;
    sbit  CC3P_TIM3_CCER_bit at TIM3_CCER.B9;
    sbit  CC3E_TIM3_CCER_bit at TIM3_CCER.B8;
    sbit  CC2NP_TIM3_CCER_bit at TIM3_CCER.B7;
    sbit  CC2P_TIM3_CCER_bit at TIM3_CCER.B5;
    sbit  CC2E_TIM3_CCER_bit at TIM3_CCER.B4;
    sbit  CC1NP_TIM3_CCER_bit at TIM3_CCER.B3;
    sbit  CC1P_TIM3_CCER_bit at TIM3_CCER.B1;
    sbit  CC1E_TIM3_CCER_bit at TIM3_CCER.B0;

sfr unsigned long   volatile TIM3_CNT             absolute 0x40000424;
    sbit  CNT_H0_TIM3_CNT_bit at TIM3_CNT.B16;
    sbit  CNT_H1_TIM3_CNT_bit at TIM3_CNT.B17;
    sbit  CNT_H2_TIM3_CNT_bit at TIM3_CNT.B18;
    sbit  CNT_H3_TIM3_CNT_bit at TIM3_CNT.B19;
    sbit  CNT_H4_TIM3_CNT_bit at TIM3_CNT.B20;
    sbit  CNT_H5_TIM3_CNT_bit at TIM3_CNT.B21;
    sbit  CNT_H6_TIM3_CNT_bit at TIM3_CNT.B22;
    sbit  CNT_H7_TIM3_CNT_bit at TIM3_CNT.B23;
    sbit  CNT_H8_TIM3_CNT_bit at TIM3_CNT.B24;
    sbit  CNT_H9_TIM3_CNT_bit at TIM3_CNT.B25;
    sbit  CNT_H10_TIM3_CNT_bit at TIM3_CNT.B26;
    sbit  CNT_H11_TIM3_CNT_bit at TIM3_CNT.B27;
    sbit  CNT_H12_TIM3_CNT_bit at TIM3_CNT.B28;
    sbit  CNT_H13_TIM3_CNT_bit at TIM3_CNT.B29;
    sbit  CNT_H14_TIM3_CNT_bit at TIM3_CNT.B30;
    sbit  CNT_H15_TIM3_CNT_bit at TIM3_CNT.B31;
    sbit  CNT_L0_TIM3_CNT_bit at TIM3_CNT.B0;
    sbit  CNT_L1_TIM3_CNT_bit at TIM3_CNT.B1;
    sbit  CNT_L2_TIM3_CNT_bit at TIM3_CNT.B2;
    sbit  CNT_L3_TIM3_CNT_bit at TIM3_CNT.B3;
    sbit  CNT_L4_TIM3_CNT_bit at TIM3_CNT.B4;
    sbit  CNT_L5_TIM3_CNT_bit at TIM3_CNT.B5;
    sbit  CNT_L6_TIM3_CNT_bit at TIM3_CNT.B6;
    sbit  CNT_L7_TIM3_CNT_bit at TIM3_CNT.B7;
    sbit  CNT_L8_TIM3_CNT_bit at TIM3_CNT.B8;
    sbit  CNT_L9_TIM3_CNT_bit at TIM3_CNT.B9;
    sbit  CNT_L10_TIM3_CNT_bit at TIM3_CNT.B10;
    sbit  CNT_L11_TIM3_CNT_bit at TIM3_CNT.B11;
    sbit  CNT_L12_TIM3_CNT_bit at TIM3_CNT.B12;
    sbit  CNT_L13_TIM3_CNT_bit at TIM3_CNT.B13;
    sbit  CNT_L14_TIM3_CNT_bit at TIM3_CNT.B14;
    sbit  CNT_L15_TIM3_CNT_bit at TIM3_CNT.B15;

sfr unsigned long   volatile TIM3_PSC             absolute 0x40000428;
    sbit  PSC0_TIM3_PSC_bit at TIM3_PSC.B0;
    sbit  PSC1_TIM3_PSC_bit at TIM3_PSC.B1;
    sbit  PSC2_TIM3_PSC_bit at TIM3_PSC.B2;
    sbit  PSC3_TIM3_PSC_bit at TIM3_PSC.B3;
    sbit  PSC4_TIM3_PSC_bit at TIM3_PSC.B4;
    sbit  PSC5_TIM3_PSC_bit at TIM3_PSC.B5;
    sbit  PSC6_TIM3_PSC_bit at TIM3_PSC.B6;
    sbit  PSC7_TIM3_PSC_bit at TIM3_PSC.B7;
    sbit  PSC8_TIM3_PSC_bit at TIM3_PSC.B8;
    sbit  PSC9_TIM3_PSC_bit at TIM3_PSC.B9;
    sbit  PSC10_TIM3_PSC_bit at TIM3_PSC.B10;
    sbit  PSC11_TIM3_PSC_bit at TIM3_PSC.B11;
    sbit  PSC12_TIM3_PSC_bit at TIM3_PSC.B12;
    sbit  PSC13_TIM3_PSC_bit at TIM3_PSC.B13;
    sbit  PSC14_TIM3_PSC_bit at TIM3_PSC.B14;
    sbit  PSC15_TIM3_PSC_bit at TIM3_PSC.B15;

sfr unsigned long   volatile TIM3_ARR             absolute 0x4000042C;
    sbit  ARR_H0_TIM3_ARR_bit at TIM3_ARR.B16;
    sbit  ARR_H1_TIM3_ARR_bit at TIM3_ARR.B17;
    sbit  ARR_H2_TIM3_ARR_bit at TIM3_ARR.B18;
    sbit  ARR_H3_TIM3_ARR_bit at TIM3_ARR.B19;
    sbit  ARR_H4_TIM3_ARR_bit at TIM3_ARR.B20;
    sbit  ARR_H5_TIM3_ARR_bit at TIM3_ARR.B21;
    sbit  ARR_H6_TIM3_ARR_bit at TIM3_ARR.B22;
    sbit  ARR_H7_TIM3_ARR_bit at TIM3_ARR.B23;
    sbit  ARR_H8_TIM3_ARR_bit at TIM3_ARR.B24;
    sbit  ARR_H9_TIM3_ARR_bit at TIM3_ARR.B25;
    sbit  ARR_H10_TIM3_ARR_bit at TIM3_ARR.B26;
    sbit  ARR_H11_TIM3_ARR_bit at TIM3_ARR.B27;
    sbit  ARR_H12_TIM3_ARR_bit at TIM3_ARR.B28;
    sbit  ARR_H13_TIM3_ARR_bit at TIM3_ARR.B29;
    sbit  ARR_H14_TIM3_ARR_bit at TIM3_ARR.B30;
    sbit  ARR_H15_TIM3_ARR_bit at TIM3_ARR.B31;
    sbit  ARR_L0_TIM3_ARR_bit at TIM3_ARR.B0;
    sbit  ARR_L1_TIM3_ARR_bit at TIM3_ARR.B1;
    sbit  ARR_L2_TIM3_ARR_bit at TIM3_ARR.B2;
    sbit  ARR_L3_TIM3_ARR_bit at TIM3_ARR.B3;
    sbit  ARR_L4_TIM3_ARR_bit at TIM3_ARR.B4;
    sbit  ARR_L5_TIM3_ARR_bit at TIM3_ARR.B5;
    sbit  ARR_L6_TIM3_ARR_bit at TIM3_ARR.B6;
    sbit  ARR_L7_TIM3_ARR_bit at TIM3_ARR.B7;
    sbit  ARR_L8_TIM3_ARR_bit at TIM3_ARR.B8;
    sbit  ARR_L9_TIM3_ARR_bit at TIM3_ARR.B9;
    sbit  ARR_L10_TIM3_ARR_bit at TIM3_ARR.B10;
    sbit  ARR_L11_TIM3_ARR_bit at TIM3_ARR.B11;
    sbit  ARR_L12_TIM3_ARR_bit at TIM3_ARR.B12;
    sbit  ARR_L13_TIM3_ARR_bit at TIM3_ARR.B13;
    sbit  ARR_L14_TIM3_ARR_bit at TIM3_ARR.B14;
    sbit  ARR_L15_TIM3_ARR_bit at TIM3_ARR.B15;

sfr unsigned long   volatile TIM3_CCR1            absolute 0x40000434;
    sbit  CCR1_H0_TIM3_CCR1_bit at TIM3_CCR1.B16;
    sbit  CCR1_H1_TIM3_CCR1_bit at TIM3_CCR1.B17;
    sbit  CCR1_H2_TIM3_CCR1_bit at TIM3_CCR1.B18;
    sbit  CCR1_H3_TIM3_CCR1_bit at TIM3_CCR1.B19;
    sbit  CCR1_H4_TIM3_CCR1_bit at TIM3_CCR1.B20;
    sbit  CCR1_H5_TIM3_CCR1_bit at TIM3_CCR1.B21;
    sbit  CCR1_H6_TIM3_CCR1_bit at TIM3_CCR1.B22;
    sbit  CCR1_H7_TIM3_CCR1_bit at TIM3_CCR1.B23;
    sbit  CCR1_H8_TIM3_CCR1_bit at TIM3_CCR1.B24;
    sbit  CCR1_H9_TIM3_CCR1_bit at TIM3_CCR1.B25;
    sbit  CCR1_H10_TIM3_CCR1_bit at TIM3_CCR1.B26;
    sbit  CCR1_H11_TIM3_CCR1_bit at TIM3_CCR1.B27;
    sbit  CCR1_H12_TIM3_CCR1_bit at TIM3_CCR1.B28;
    sbit  CCR1_H13_TIM3_CCR1_bit at TIM3_CCR1.B29;
    sbit  CCR1_H14_TIM3_CCR1_bit at TIM3_CCR1.B30;
    sbit  CCR1_H15_TIM3_CCR1_bit at TIM3_CCR1.B31;
    sbit  CCR1_L0_TIM3_CCR1_bit at TIM3_CCR1.B0;
    sbit  CCR1_L1_TIM3_CCR1_bit at TIM3_CCR1.B1;
    sbit  CCR1_L2_TIM3_CCR1_bit at TIM3_CCR1.B2;
    sbit  CCR1_L3_TIM3_CCR1_bit at TIM3_CCR1.B3;
    sbit  CCR1_L4_TIM3_CCR1_bit at TIM3_CCR1.B4;
    sbit  CCR1_L5_TIM3_CCR1_bit at TIM3_CCR1.B5;
    sbit  CCR1_L6_TIM3_CCR1_bit at TIM3_CCR1.B6;
    sbit  CCR1_L7_TIM3_CCR1_bit at TIM3_CCR1.B7;
    sbit  CCR1_L8_TIM3_CCR1_bit at TIM3_CCR1.B8;
    sbit  CCR1_L9_TIM3_CCR1_bit at TIM3_CCR1.B9;
    sbit  CCR1_L10_TIM3_CCR1_bit at TIM3_CCR1.B10;
    sbit  CCR1_L11_TIM3_CCR1_bit at TIM3_CCR1.B11;
    sbit  CCR1_L12_TIM3_CCR1_bit at TIM3_CCR1.B12;
    sbit  CCR1_L13_TIM3_CCR1_bit at TIM3_CCR1.B13;
    sbit  CCR1_L14_TIM3_CCR1_bit at TIM3_CCR1.B14;
    sbit  CCR1_L15_TIM3_CCR1_bit at TIM3_CCR1.B15;

sfr unsigned long   volatile TIM3_CCR2            absolute 0x40000438;
    sbit  CCR2_H0_TIM3_CCR2_bit at TIM3_CCR2.B16;
    sbit  CCR2_H1_TIM3_CCR2_bit at TIM3_CCR2.B17;
    sbit  CCR2_H2_TIM3_CCR2_bit at TIM3_CCR2.B18;
    sbit  CCR2_H3_TIM3_CCR2_bit at TIM3_CCR2.B19;
    sbit  CCR2_H4_TIM3_CCR2_bit at TIM3_CCR2.B20;
    sbit  CCR2_H5_TIM3_CCR2_bit at TIM3_CCR2.B21;
    sbit  CCR2_H6_TIM3_CCR2_bit at TIM3_CCR2.B22;
    sbit  CCR2_H7_TIM3_CCR2_bit at TIM3_CCR2.B23;
    sbit  CCR2_H8_TIM3_CCR2_bit at TIM3_CCR2.B24;
    sbit  CCR2_H9_TIM3_CCR2_bit at TIM3_CCR2.B25;
    sbit  CCR2_H10_TIM3_CCR2_bit at TIM3_CCR2.B26;
    sbit  CCR2_H11_TIM3_CCR2_bit at TIM3_CCR2.B27;
    sbit  CCR2_H12_TIM3_CCR2_bit at TIM3_CCR2.B28;
    sbit  CCR2_H13_TIM3_CCR2_bit at TIM3_CCR2.B29;
    sbit  CCR2_H14_TIM3_CCR2_bit at TIM3_CCR2.B30;
    sbit  CCR2_H15_TIM3_CCR2_bit at TIM3_CCR2.B31;
    sbit  CCR2_L0_TIM3_CCR2_bit at TIM3_CCR2.B0;
    sbit  CCR2_L1_TIM3_CCR2_bit at TIM3_CCR2.B1;
    sbit  CCR2_L2_TIM3_CCR2_bit at TIM3_CCR2.B2;
    sbit  CCR2_L3_TIM3_CCR2_bit at TIM3_CCR2.B3;
    sbit  CCR2_L4_TIM3_CCR2_bit at TIM3_CCR2.B4;
    sbit  CCR2_L5_TIM3_CCR2_bit at TIM3_CCR2.B5;
    sbit  CCR2_L6_TIM3_CCR2_bit at TIM3_CCR2.B6;
    sbit  CCR2_L7_TIM3_CCR2_bit at TIM3_CCR2.B7;
    sbit  CCR2_L8_TIM3_CCR2_bit at TIM3_CCR2.B8;
    sbit  CCR2_L9_TIM3_CCR2_bit at TIM3_CCR2.B9;
    sbit  CCR2_L10_TIM3_CCR2_bit at TIM3_CCR2.B10;
    sbit  CCR2_L11_TIM3_CCR2_bit at TIM3_CCR2.B11;
    sbit  CCR2_L12_TIM3_CCR2_bit at TIM3_CCR2.B12;
    sbit  CCR2_L13_TIM3_CCR2_bit at TIM3_CCR2.B13;
    sbit  CCR2_L14_TIM3_CCR2_bit at TIM3_CCR2.B14;
    sbit  CCR2_L15_TIM3_CCR2_bit at TIM3_CCR2.B15;

sfr unsigned long   volatile TIM3_CCR3            absolute 0x4000043C;
    sbit  CCR3_H0_TIM3_CCR3_bit at TIM3_CCR3.B16;
    sbit  CCR3_H1_TIM3_CCR3_bit at TIM3_CCR3.B17;
    sbit  CCR3_H2_TIM3_CCR3_bit at TIM3_CCR3.B18;
    sbit  CCR3_H3_TIM3_CCR3_bit at TIM3_CCR3.B19;
    sbit  CCR3_H4_TIM3_CCR3_bit at TIM3_CCR3.B20;
    sbit  CCR3_H5_TIM3_CCR3_bit at TIM3_CCR3.B21;
    sbit  CCR3_H6_TIM3_CCR3_bit at TIM3_CCR3.B22;
    sbit  CCR3_H7_TIM3_CCR3_bit at TIM3_CCR3.B23;
    sbit  CCR3_H8_TIM3_CCR3_bit at TIM3_CCR3.B24;
    sbit  CCR3_H9_TIM3_CCR3_bit at TIM3_CCR3.B25;
    sbit  CCR3_H10_TIM3_CCR3_bit at TIM3_CCR3.B26;
    sbit  CCR3_H11_TIM3_CCR3_bit at TIM3_CCR3.B27;
    sbit  CCR3_H12_TIM3_CCR3_bit at TIM3_CCR3.B28;
    sbit  CCR3_H13_TIM3_CCR3_bit at TIM3_CCR3.B29;
    sbit  CCR3_H14_TIM3_CCR3_bit at TIM3_CCR3.B30;
    sbit  CCR3_H15_TIM3_CCR3_bit at TIM3_CCR3.B31;
    sbit  CCR3_L0_TIM3_CCR3_bit at TIM3_CCR3.B0;
    sbit  CCR3_L1_TIM3_CCR3_bit at TIM3_CCR3.B1;
    sbit  CCR3_L2_TIM3_CCR3_bit at TIM3_CCR3.B2;
    sbit  CCR3_L3_TIM3_CCR3_bit at TIM3_CCR3.B3;
    sbit  CCR3_L4_TIM3_CCR3_bit at TIM3_CCR3.B4;
    sbit  CCR3_L5_TIM3_CCR3_bit at TIM3_CCR3.B5;
    sbit  CCR3_L6_TIM3_CCR3_bit at TIM3_CCR3.B6;
    sbit  CCR3_L7_TIM3_CCR3_bit at TIM3_CCR3.B7;
    sbit  CCR3_L8_TIM3_CCR3_bit at TIM3_CCR3.B8;
    sbit  CCR3_L9_TIM3_CCR3_bit at TIM3_CCR3.B9;
    sbit  CCR3_L10_TIM3_CCR3_bit at TIM3_CCR3.B10;
    sbit  CCR3_L11_TIM3_CCR3_bit at TIM3_CCR3.B11;
    sbit  CCR3_L12_TIM3_CCR3_bit at TIM3_CCR3.B12;
    sbit  CCR3_L13_TIM3_CCR3_bit at TIM3_CCR3.B13;
    sbit  CCR3_L14_TIM3_CCR3_bit at TIM3_CCR3.B14;
    sbit  CCR3_L15_TIM3_CCR3_bit at TIM3_CCR3.B15;

sfr unsigned long   volatile TIM3_CCR4            absolute 0x40000440;
    sbit  CCR4_H0_TIM3_CCR4_bit at TIM3_CCR4.B16;
    sbit  CCR4_H1_TIM3_CCR4_bit at TIM3_CCR4.B17;
    sbit  CCR4_H2_TIM3_CCR4_bit at TIM3_CCR4.B18;
    sbit  CCR4_H3_TIM3_CCR4_bit at TIM3_CCR4.B19;
    sbit  CCR4_H4_TIM3_CCR4_bit at TIM3_CCR4.B20;
    sbit  CCR4_H5_TIM3_CCR4_bit at TIM3_CCR4.B21;
    sbit  CCR4_H6_TIM3_CCR4_bit at TIM3_CCR4.B22;
    sbit  CCR4_H7_TIM3_CCR4_bit at TIM3_CCR4.B23;
    sbit  CCR4_H8_TIM3_CCR4_bit at TIM3_CCR4.B24;
    sbit  CCR4_H9_TIM3_CCR4_bit at TIM3_CCR4.B25;
    sbit  CCR4_H10_TIM3_CCR4_bit at TIM3_CCR4.B26;
    sbit  CCR4_H11_TIM3_CCR4_bit at TIM3_CCR4.B27;
    sbit  CCR4_H12_TIM3_CCR4_bit at TIM3_CCR4.B28;
    sbit  CCR4_H13_TIM3_CCR4_bit at TIM3_CCR4.B29;
    sbit  CCR4_H14_TIM3_CCR4_bit at TIM3_CCR4.B30;
    sbit  CCR4_H15_TIM3_CCR4_bit at TIM3_CCR4.B31;
    sbit  CCR4_L0_TIM3_CCR4_bit at TIM3_CCR4.B0;
    sbit  CCR4_L1_TIM3_CCR4_bit at TIM3_CCR4.B1;
    sbit  CCR4_L2_TIM3_CCR4_bit at TIM3_CCR4.B2;
    sbit  CCR4_L3_TIM3_CCR4_bit at TIM3_CCR4.B3;
    sbit  CCR4_L4_TIM3_CCR4_bit at TIM3_CCR4.B4;
    sbit  CCR4_L5_TIM3_CCR4_bit at TIM3_CCR4.B5;
    sbit  CCR4_L6_TIM3_CCR4_bit at TIM3_CCR4.B6;
    sbit  CCR4_L7_TIM3_CCR4_bit at TIM3_CCR4.B7;
    sbit  CCR4_L8_TIM3_CCR4_bit at TIM3_CCR4.B8;
    sbit  CCR4_L9_TIM3_CCR4_bit at TIM3_CCR4.B9;
    sbit  CCR4_L10_TIM3_CCR4_bit at TIM3_CCR4.B10;
    sbit  CCR4_L11_TIM3_CCR4_bit at TIM3_CCR4.B11;
    sbit  CCR4_L12_TIM3_CCR4_bit at TIM3_CCR4.B12;
    sbit  CCR4_L13_TIM3_CCR4_bit at TIM3_CCR4.B13;
    sbit  CCR4_L14_TIM3_CCR4_bit at TIM3_CCR4.B14;
    sbit  CCR4_L15_TIM3_CCR4_bit at TIM3_CCR4.B15;

sfr unsigned long   volatile TIM3_DCR             absolute 0x40000448;
    sbit  DBL0_TIM3_DCR_bit at TIM3_DCR.B8;
    sbit  DBL1_TIM3_DCR_bit at TIM3_DCR.B9;
    sbit  DBL2_TIM3_DCR_bit at TIM3_DCR.B10;
    sbit  DBL3_TIM3_DCR_bit at TIM3_DCR.B11;
    sbit  DBL4_TIM3_DCR_bit at TIM3_DCR.B12;
    sbit  DBA0_TIM3_DCR_bit at TIM3_DCR.B0;
    sbit  DBA1_TIM3_DCR_bit at TIM3_DCR.B1;
    sbit  DBA2_TIM3_DCR_bit at TIM3_DCR.B2;
    sbit  DBA3_TIM3_DCR_bit at TIM3_DCR.B3;
    sbit  DBA4_TIM3_DCR_bit at TIM3_DCR.B4;

sfr unsigned long   volatile TIM3_DMAR            absolute 0x4000044C;
    sbit  DMAB0_TIM3_DMAR_bit at TIM3_DMAR.B0;
    sbit  DMAB1_TIM3_DMAR_bit at TIM3_DMAR.B1;
    sbit  DMAB2_TIM3_DMAR_bit at TIM3_DMAR.B2;
    sbit  DMAB3_TIM3_DMAR_bit at TIM3_DMAR.B3;
    sbit  DMAB4_TIM3_DMAR_bit at TIM3_DMAR.B4;
    sbit  DMAB5_TIM3_DMAR_bit at TIM3_DMAR.B5;
    sbit  DMAB6_TIM3_DMAR_bit at TIM3_DMAR.B6;
    sbit  DMAB7_TIM3_DMAR_bit at TIM3_DMAR.B7;
    sbit  DMAB8_TIM3_DMAR_bit at TIM3_DMAR.B8;
    sbit  DMAB9_TIM3_DMAR_bit at TIM3_DMAR.B9;
    sbit  DMAB10_TIM3_DMAR_bit at TIM3_DMAR.B10;
    sbit  DMAB11_TIM3_DMAR_bit at TIM3_DMAR.B11;
    sbit  DMAB12_TIM3_DMAR_bit at TIM3_DMAR.B12;
    sbit  DMAB13_TIM3_DMAR_bit at TIM3_DMAR.B13;
    sbit  DMAB14_TIM3_DMAR_bit at TIM3_DMAR.B14;
    sbit  DMAB15_TIM3_DMAR_bit at TIM3_DMAR.B15;

sfr unsigned long   volatile TIM3_OR1             absolute 0x40000450;
    sbit  IOCREF_CLR_TIM3_OR1_bit at TIM3_OR1.B0;

sfr unsigned long   volatile TIM3_AF1             absolute 0x40000460;
    sbit  ETRSEL0_TIM3_AF1_bit at TIM3_AF1.B14;
    sbit  ETRSEL1_TIM3_AF1_bit at TIM3_AF1.B15;
    sbit  ETRSEL2_TIM3_AF1_bit at TIM3_AF1.B16;
    sbit  ETRSEL3_TIM3_AF1_bit at TIM3_AF1.B17;

sfr unsigned long   volatile TIM3_TISEL           absolute 0x40000468;
    sbit  TI1SEL0_TIM3_TISEL_bit at TIM3_TISEL.B0;
    sbit  TI1SEL1_TIM3_TISEL_bit at TIM3_TISEL.B1;
    sbit  TI1SEL2_TIM3_TISEL_bit at TIM3_TISEL.B2;
    sbit  TI1SEL3_TIM3_TISEL_bit at TIM3_TISEL.B3;
    sbit  TI2SEL0_TIM3_TISEL_bit at TIM3_TISEL.B8;
    sbit  TI2SEL1_TIM3_TISEL_bit at TIM3_TISEL.B9;
    sbit  TI2SEL2_TIM3_TISEL_bit at TIM3_TISEL.B10;
    sbit  TI2SEL3_TIM3_TISEL_bit at TIM3_TISEL.B11;

sfr far unsigned long   volatile NVIC_ISER            absolute 0xE000E100;
    const register unsigned short int SETENA0 = 0;
    sbit  SETENA0_bit at NVIC_ISER.B0;
    const register unsigned short int SETENA1 = 1;
    sbit  SETENA1_bit at NVIC_ISER.B1;
    const register unsigned short int SETENA2 = 2;
    sbit  SETENA2_bit at NVIC_ISER.B2;
    const register unsigned short int SETENA3 = 3;
    sbit  SETENA3_bit at NVIC_ISER.B3;
    const register unsigned short int SETENA4 = 4;
    sbit  SETENA4_bit at NVIC_ISER.B4;
    const register unsigned short int SETENA5 = 5;
    sbit  SETENA5_bit at NVIC_ISER.B5;
    const register unsigned short int SETENA6 = 6;
    sbit  SETENA6_bit at NVIC_ISER.B6;
    const register unsigned short int SETENA7 = 7;
    sbit  SETENA7_bit at NVIC_ISER.B7;
    const register unsigned short int SETENA8 = 8;
    sbit  SETENA8_bit at NVIC_ISER.B8;
    const register unsigned short int SETENA9 = 9;
    sbit  SETENA9_bit at NVIC_ISER.B9;
    const register unsigned short int SETENA10 = 10;
    sbit  SETENA10_bit at NVIC_ISER.B10;
    const register unsigned short int SETENA11 = 11;
    sbit  SETENA11_bit at NVIC_ISER.B11;
    const register unsigned short int SETENA12 = 12;
    sbit  SETENA12_bit at NVIC_ISER.B12;
    const register unsigned short int SETENA13 = 13;
    sbit  SETENA13_bit at NVIC_ISER.B13;
    const register unsigned short int SETENA14 = 14;
    sbit  SETENA14_bit at NVIC_ISER.B14;
    const register unsigned short int SETENA15 = 15;
    sbit  SETENA15_bit at NVIC_ISER.B15;
    const register unsigned short int SETENA16 = 16;
    sbit  SETENA16_bit at NVIC_ISER.B16;
    const register unsigned short int SETENA17 = 17;
    sbit  SETENA17_bit at NVIC_ISER.B17;
    const register unsigned short int SETENA18 = 18;
    sbit  SETENA18_bit at NVIC_ISER.B18;
    const register unsigned short int SETENA19 = 19;
    sbit  SETENA19_bit at NVIC_ISER.B19;
    const register unsigned short int SETENA20 = 20;
    sbit  SETENA20_bit at NVIC_ISER.B20;
    const register unsigned short int SETENA21 = 21;
    sbit  SETENA21_bit at NVIC_ISER.B21;
    const register unsigned short int SETENA22 = 22;
    sbit  SETENA22_bit at NVIC_ISER.B22;
    const register unsigned short int SETENA23 = 23;
    sbit  SETENA23_bit at NVIC_ISER.B23;
    const register unsigned short int SETENA24 = 24;
    sbit  SETENA24_bit at NVIC_ISER.B24;
    const register unsigned short int SETENA25 = 25;
    sbit  SETENA25_bit at NVIC_ISER.B25;
    const register unsigned short int SETENA26 = 26;
    sbit  SETENA26_bit at NVIC_ISER.B26;
    const register unsigned short int SETENA27 = 27;
    sbit  SETENA27_bit at NVIC_ISER.B27;
    const register unsigned short int SETENA28 = 28;
    sbit  SETENA28_bit at NVIC_ISER.B28;
    const register unsigned short int SETENA29 = 29;
    sbit  SETENA29_bit at NVIC_ISER.B29;
    const register unsigned short int SETENA30 = 30;
    sbit  SETENA30_bit at NVIC_ISER.B30;
    const register unsigned short int SETENA31 = 31;
    sbit  SETENA31_bit at NVIC_ISER.B31;

sfr far unsigned long   volatile NVIC_ICER            absolute 0xE000E180;
    const register unsigned short int CLRENA0 = 0;
    sbit  CLRENA0_bit at NVIC_ICER.B0;
    const register unsigned short int CLRENA1 = 1;
    sbit  CLRENA1_bit at NVIC_ICER.B1;
    const register unsigned short int CLRENA2 = 2;
    sbit  CLRENA2_bit at NVIC_ICER.B2;
    const register unsigned short int CLRENA3 = 3;
    sbit  CLRENA3_bit at NVIC_ICER.B3;
    const register unsigned short int CLRENA4 = 4;
    sbit  CLRENA4_bit at NVIC_ICER.B4;
    const register unsigned short int CLRENA5 = 5;
    sbit  CLRENA5_bit at NVIC_ICER.B5;
    const register unsigned short int CLRENA6 = 6;
    sbit  CLRENA6_bit at NVIC_ICER.B6;
    const register unsigned short int CLRENA7 = 7;
    sbit  CLRENA7_bit at NVIC_ICER.B7;
    const register unsigned short int CLRENA8 = 8;
    sbit  CLRENA8_bit at NVIC_ICER.B8;
    const register unsigned short int CLRENA9 = 9;
    sbit  CLRENA9_bit at NVIC_ICER.B9;
    const register unsigned short int CLRENA10 = 10;
    sbit  CLRENA10_bit at NVIC_ICER.B10;
    const register unsigned short int CLRENA11 = 11;
    sbit  CLRENA11_bit at NVIC_ICER.B11;
    const register unsigned short int CLRENA12 = 12;
    sbit  CLRENA12_bit at NVIC_ICER.B12;
    const register unsigned short int CLRENA13 = 13;
    sbit  CLRENA13_bit at NVIC_ICER.B13;
    const register unsigned short int CLRENA14 = 14;
    sbit  CLRENA14_bit at NVIC_ICER.B14;
    const register unsigned short int CLRENA15 = 15;
    sbit  CLRENA15_bit at NVIC_ICER.B15;
    const register unsigned short int CLRENA16 = 16;
    sbit  CLRENA16_bit at NVIC_ICER.B16;
    const register unsigned short int CLRENA17 = 17;
    sbit  CLRENA17_bit at NVIC_ICER.B17;
    const register unsigned short int CLRENA18 = 18;
    sbit  CLRENA18_bit at NVIC_ICER.B18;
    const register unsigned short int CLRENA19 = 19;
    sbit  CLRENA19_bit at NVIC_ICER.B19;
    const register unsigned short int CLRENA20 = 20;
    sbit  CLRENA20_bit at NVIC_ICER.B20;
    const register unsigned short int CLRENA21 = 21;
    sbit  CLRENA21_bit at NVIC_ICER.B21;
    const register unsigned short int CLRENA22 = 22;
    sbit  CLRENA22_bit at NVIC_ICER.B22;
    const register unsigned short int CLRENA23 = 23;
    sbit  CLRENA23_bit at NVIC_ICER.B23;
    const register unsigned short int CLRENA24 = 24;
    sbit  CLRENA24_bit at NVIC_ICER.B24;
    const register unsigned short int CLRENA25 = 25;
    sbit  CLRENA25_bit at NVIC_ICER.B25;
    const register unsigned short int CLRENA26 = 26;
    sbit  CLRENA26_bit at NVIC_ICER.B26;
    const register unsigned short int CLRENA27 = 27;
    sbit  CLRENA27_bit at NVIC_ICER.B27;
    const register unsigned short int CLRENA28 = 28;
    sbit  CLRENA28_bit at NVIC_ICER.B28;
    const register unsigned short int CLRENA29 = 29;
    sbit  CLRENA29_bit at NVIC_ICER.B29;
    const register unsigned short int CLRENA30 = 30;
    sbit  CLRENA30_bit at NVIC_ICER.B30;
    const register unsigned short int CLRENA31 = 31;
    sbit  CLRENA31_bit at NVIC_ICER.B31;

sfr far unsigned long   volatile NVIC_ISPR            absolute 0xE000E200;
    const register unsigned short int SETPEND0 = 0;
    sbit  SETPEND0_bit at NVIC_ISPR.B0;
    const register unsigned short int SETPEND1 = 1;
    sbit  SETPEND1_bit at NVIC_ISPR.B1;
    const register unsigned short int SETPEND2 = 2;
    sbit  SETPEND2_bit at NVIC_ISPR.B2;
    const register unsigned short int SETPEND3 = 3;
    sbit  SETPEND3_bit at NVIC_ISPR.B3;
    const register unsigned short int SETPEND4 = 4;
    sbit  SETPEND4_bit at NVIC_ISPR.B4;
    const register unsigned short int SETPEND5 = 5;
    sbit  SETPEND5_bit at NVIC_ISPR.B5;
    const register unsigned short int SETPEND6 = 6;
    sbit  SETPEND6_bit at NVIC_ISPR.B6;
    const register unsigned short int SETPEND7 = 7;
    sbit  SETPEND7_bit at NVIC_ISPR.B7;
    const register unsigned short int SETPEND8 = 8;
    sbit  SETPEND8_bit at NVIC_ISPR.B8;
    const register unsigned short int SETPEND9 = 9;
    sbit  SETPEND9_bit at NVIC_ISPR.B9;
    const register unsigned short int SETPEND10 = 10;
    sbit  SETPEND10_bit at NVIC_ISPR.B10;
    const register unsigned short int SETPEND11 = 11;
    sbit  SETPEND11_bit at NVIC_ISPR.B11;
    const register unsigned short int SETPEND12 = 12;
    sbit  SETPEND12_bit at NVIC_ISPR.B12;
    const register unsigned short int SETPEND13 = 13;
    sbit  SETPEND13_bit at NVIC_ISPR.B13;
    const register unsigned short int SETPEND14 = 14;
    sbit  SETPEND14_bit at NVIC_ISPR.B14;
    const register unsigned short int SETPEND15 = 15;
    sbit  SETPEND15_bit at NVIC_ISPR.B15;
    const register unsigned short int SETPEND16 = 16;
    sbit  SETPEND16_bit at NVIC_ISPR.B16;
    const register unsigned short int SETPEND17 = 17;
    sbit  SETPEND17_bit at NVIC_ISPR.B17;
    const register unsigned short int SETPEND18 = 18;
    sbit  SETPEND18_bit at NVIC_ISPR.B18;
    const register unsigned short int SETPEND19 = 19;
    sbit  SETPEND19_bit at NVIC_ISPR.B19;
    const register unsigned short int SETPEND20 = 20;
    sbit  SETPEND20_bit at NVIC_ISPR.B20;
    const register unsigned short int SETPEND21 = 21;
    sbit  SETPEND21_bit at NVIC_ISPR.B21;
    const register unsigned short int SETPEND22 = 22;
    sbit  SETPEND22_bit at NVIC_ISPR.B22;
    const register unsigned short int SETPEND23 = 23;
    sbit  SETPEND23_bit at NVIC_ISPR.B23;
    const register unsigned short int SETPEND24 = 24;
    sbit  SETPEND24_bit at NVIC_ISPR.B24;
    const register unsigned short int SETPEND25 = 25;
    sbit  SETPEND25_bit at NVIC_ISPR.B25;
    const register unsigned short int SETPEND26 = 26;
    sbit  SETPEND26_bit at NVIC_ISPR.B26;
    const register unsigned short int SETPEND27 = 27;
    sbit  SETPEND27_bit at NVIC_ISPR.B27;
    const register unsigned short int SETPEND28 = 28;
    sbit  SETPEND28_bit at NVIC_ISPR.B28;
    const register unsigned short int SETPEND29 = 29;
    sbit  SETPEND29_bit at NVIC_ISPR.B29;
    const register unsigned short int SETPEND30 = 30;
    sbit  SETPEND30_bit at NVIC_ISPR.B30;
    const register unsigned short int SETPEND31 = 31;
    sbit  SETPEND31_bit at NVIC_ISPR.B31;

sfr far unsigned long   volatile NVIC_ICPR            absolute 0xE000E280;
    const register unsigned short int CLRPEND0 = 0;
    sbit  CLRPEND0_bit at NVIC_ICPR.B0;
    const register unsigned short int CLRPEND1 = 1;
    sbit  CLRPEND1_bit at NVIC_ICPR.B1;
    const register unsigned short int CLRPEND2 = 2;
    sbit  CLRPEND2_bit at NVIC_ICPR.B2;
    const register unsigned short int CLRPEND3 = 3;
    sbit  CLRPEND3_bit at NVIC_ICPR.B3;
    const register unsigned short int CLRPEND4 = 4;
    sbit  CLRPEND4_bit at NVIC_ICPR.B4;
    const register unsigned short int CLRPEND5 = 5;
    sbit  CLRPEND5_bit at NVIC_ICPR.B5;
    const register unsigned short int CLRPEND6 = 6;
    sbit  CLRPEND6_bit at NVIC_ICPR.B6;
    const register unsigned short int CLRPEND7 = 7;
    sbit  CLRPEND7_bit at NVIC_ICPR.B7;
    const register unsigned short int CLRPEND8 = 8;
    sbit  CLRPEND8_bit at NVIC_ICPR.B8;
    const register unsigned short int CLRPEND9 = 9;
    sbit  CLRPEND9_bit at NVIC_ICPR.B9;
    const register unsigned short int CLRPEND10 = 10;
    sbit  CLRPEND10_bit at NVIC_ICPR.B10;
    const register unsigned short int CLRPEND11 = 11;
    sbit  CLRPEND11_bit at NVIC_ICPR.B11;
    const register unsigned short int CLRPEND12 = 12;
    sbit  CLRPEND12_bit at NVIC_ICPR.B12;
    const register unsigned short int CLRPEND13 = 13;
    sbit  CLRPEND13_bit at NVIC_ICPR.B13;
    const register unsigned short int CLRPEND14 = 14;
    sbit  CLRPEND14_bit at NVIC_ICPR.B14;
    const register unsigned short int CLRPEND15 = 15;
    sbit  CLRPEND15_bit at NVIC_ICPR.B15;
    const register unsigned short int CLRPEND16 = 16;
    sbit  CLRPEND16_bit at NVIC_ICPR.B16;
    const register unsigned short int CLRPEND17 = 17;
    sbit  CLRPEND17_bit at NVIC_ICPR.B17;
    const register unsigned short int CLRPEND18 = 18;
    sbit  CLRPEND18_bit at NVIC_ICPR.B18;
    const register unsigned short int CLRPEND19 = 19;
    sbit  CLRPEND19_bit at NVIC_ICPR.B19;
    const register unsigned short int CLRPEND20 = 20;
    sbit  CLRPEND20_bit at NVIC_ICPR.B20;
    const register unsigned short int CLRPEND21 = 21;
    sbit  CLRPEND21_bit at NVIC_ICPR.B21;
    const register unsigned short int CLRPEND22 = 22;
    sbit  CLRPEND22_bit at NVIC_ICPR.B22;
    const register unsigned short int CLRPEND23 = 23;
    sbit  CLRPEND23_bit at NVIC_ICPR.B23;
    const register unsigned short int CLRPEND24 = 24;
    sbit  CLRPEND24_bit at NVIC_ICPR.B24;
    const register unsigned short int CLRPEND25 = 25;
    sbit  CLRPEND25_bit at NVIC_ICPR.B25;
    const register unsigned short int CLRPEND26 = 26;
    sbit  CLRPEND26_bit at NVIC_ICPR.B26;
    const register unsigned short int CLRPEND27 = 27;
    sbit  CLRPEND27_bit at NVIC_ICPR.B27;
    const register unsigned short int CLRPEND28 = 28;
    sbit  CLRPEND28_bit at NVIC_ICPR.B28;
    const register unsigned short int CLRPEND29 = 29;
    sbit  CLRPEND29_bit at NVIC_ICPR.B29;
    const register unsigned short int CLRPEND30 = 30;
    sbit  CLRPEND30_bit at NVIC_ICPR.B30;
    const register unsigned short int CLRPEND31 = 31;
    sbit  CLRPEND31_bit at NVIC_ICPR.B31;

sfr far unsigned long   volatile NVIC_IPR0            absolute 0xE000E400;
    const register unsigned short int PRI_00 = 0;
    sbit  PRI_00_bit at NVIC_IPR0.B0;
    const register unsigned short int PRI_01 = 1;
    sbit  PRI_01_bit at NVIC_IPR0.B1;
    const register unsigned short int PRI_02 = 2;
    sbit  PRI_02_bit at NVIC_IPR0.B2;
    const register unsigned short int PRI_03 = 3;
    sbit  PRI_03_bit at NVIC_IPR0.B3;
    const register unsigned short int PRI_04 = 4;
    sbit  PRI_04_bit at NVIC_IPR0.B4;
    const register unsigned short int PRI_05 = 5;
    sbit  PRI_05_bit at NVIC_IPR0.B5;
    const register unsigned short int PRI_06 = 6;
    sbit  PRI_06_bit at NVIC_IPR0.B6;
    const register unsigned short int PRI_07 = 7;
    sbit  PRI_07_bit at NVIC_IPR0.B7;
    const register unsigned short int PRI_10 = 8;
    sbit  PRI_10_bit at NVIC_IPR0.B8;
    const register unsigned short int PRI_11 = 9;
    sbit  PRI_11_bit at NVIC_IPR0.B9;
    const register unsigned short int PRI_12 = 10;
    sbit  PRI_12_bit at NVIC_IPR0.B10;
    const register unsigned short int PRI_13 = 11;
    sbit  PRI_13_bit at NVIC_IPR0.B11;
    const register unsigned short int PRI_14 = 12;
    sbit  PRI_14_bit at NVIC_IPR0.B12;
    const register unsigned short int PRI_15 = 13;
    sbit  PRI_15_bit at NVIC_IPR0.B13;
    const register unsigned short int PRI_16 = 14;
    sbit  PRI_16_bit at NVIC_IPR0.B14;
    const register unsigned short int PRI_17 = 15;
    sbit  PRI_17_bit at NVIC_IPR0.B15;
    const register unsigned short int PRI_20 = 16;
    sbit  PRI_20_bit at NVIC_IPR0.B16;
    const register unsigned short int PRI_21 = 17;
    sbit  PRI_21_bit at NVIC_IPR0.B17;
    const register unsigned short int PRI_22 = 18;
    sbit  PRI_22_bit at NVIC_IPR0.B18;
    const register unsigned short int PRI_23 = 19;
    sbit  PRI_23_bit at NVIC_IPR0.B19;
    const register unsigned short int PRI_24 = 20;
    sbit  PRI_24_bit at NVIC_IPR0.B20;
    const register unsigned short int PRI_25 = 21;
    sbit  PRI_25_bit at NVIC_IPR0.B21;
    const register unsigned short int PRI_26 = 22;
    sbit  PRI_26_bit at NVIC_IPR0.B22;
    const register unsigned short int PRI_27 = 23;
    sbit  PRI_27_bit at NVIC_IPR0.B23;
    const register unsigned short int PRI_30 = 24;
    sbit  PRI_30_bit at NVIC_IPR0.B24;
    const register unsigned short int PRI_31 = 25;
    sbit  PRI_31_bit at NVIC_IPR0.B25;
    const register unsigned short int PRI_32 = 26;
    sbit  PRI_32_bit at NVIC_IPR0.B26;
    const register unsigned short int PRI_33 = 27;
    sbit  PRI_33_bit at NVIC_IPR0.B27;
    const register unsigned short int PRI_34 = 28;
    sbit  PRI_34_bit at NVIC_IPR0.B28;
    const register unsigned short int PRI_35 = 29;
    sbit  PRI_35_bit at NVIC_IPR0.B29;
    const register unsigned short int PRI_36 = 30;
    sbit  PRI_36_bit at NVIC_IPR0.B30;
    const register unsigned short int PRI_37 = 31;
    sbit  PRI_37_bit at NVIC_IPR0.B31;

sfr far unsigned long   volatile NVIC_IPR1            absolute 0xE000E404;
    const register unsigned short int PRI_40 = 0;
    sbit  PRI_40_bit at NVIC_IPR1.B0;
    const register unsigned short int PRI_41 = 1;
    sbit  PRI_41_bit at NVIC_IPR1.B1;
    const register unsigned short int PRI_42 = 2;
    sbit  PRI_42_bit at NVIC_IPR1.B2;
    const register unsigned short int PRI_43 = 3;
    sbit  PRI_43_bit at NVIC_IPR1.B3;
    const register unsigned short int PRI_44 = 4;
    sbit  PRI_44_bit at NVIC_IPR1.B4;
    const register unsigned short int PRI_45 = 5;
    sbit  PRI_45_bit at NVIC_IPR1.B5;
    const register unsigned short int PRI_46 = 6;
    sbit  PRI_46_bit at NVIC_IPR1.B6;
    const register unsigned short int PRI_47 = 7;
    sbit  PRI_47_bit at NVIC_IPR1.B7;
    const register unsigned short int PRI_50 = 8;
    sbit  PRI_50_bit at NVIC_IPR1.B8;
    const register unsigned short int PRI_51 = 9;
    sbit  PRI_51_bit at NVIC_IPR1.B9;
    const register unsigned short int PRI_52 = 10;
    sbit  PRI_52_bit at NVIC_IPR1.B10;
    const register unsigned short int PRI_53 = 11;
    sbit  PRI_53_bit at NVIC_IPR1.B11;
    const register unsigned short int PRI_54 = 12;
    sbit  PRI_54_bit at NVIC_IPR1.B12;
    const register unsigned short int PRI_55 = 13;
    sbit  PRI_55_bit at NVIC_IPR1.B13;
    const register unsigned short int PRI_56 = 14;
    sbit  PRI_56_bit at NVIC_IPR1.B14;
    const register unsigned short int PRI_57 = 15;
    sbit  PRI_57_bit at NVIC_IPR1.B15;
    const register unsigned short int PRI_60 = 16;
    sbit  PRI_60_bit at NVIC_IPR1.B16;
    const register unsigned short int PRI_61 = 17;
    sbit  PRI_61_bit at NVIC_IPR1.B17;
    const register unsigned short int PRI_62 = 18;
    sbit  PRI_62_bit at NVIC_IPR1.B18;
    const register unsigned short int PRI_63 = 19;
    sbit  PRI_63_bit at NVIC_IPR1.B19;
    const register unsigned short int PRI_64 = 20;
    sbit  PRI_64_bit at NVIC_IPR1.B20;
    const register unsigned short int PRI_65 = 21;
    sbit  PRI_65_bit at NVIC_IPR1.B21;
    const register unsigned short int PRI_66 = 22;
    sbit  PRI_66_bit at NVIC_IPR1.B22;
    const register unsigned short int PRI_67 = 23;
    sbit  PRI_67_bit at NVIC_IPR1.B23;
    const register unsigned short int PRI_70 = 24;
    sbit  PRI_70_bit at NVIC_IPR1.B24;
    const register unsigned short int PRI_71 = 25;
    sbit  PRI_71_bit at NVIC_IPR1.B25;
    const register unsigned short int PRI_72 = 26;
    sbit  PRI_72_bit at NVIC_IPR1.B26;
    const register unsigned short int PRI_73 = 27;
    sbit  PRI_73_bit at NVIC_IPR1.B27;
    const register unsigned short int PRI_74 = 28;
    sbit  PRI_74_bit at NVIC_IPR1.B28;
    const register unsigned short int PRI_75 = 29;
    sbit  PRI_75_bit at NVIC_IPR1.B29;
    const register unsigned short int PRI_76 = 30;
    sbit  PRI_76_bit at NVIC_IPR1.B30;
    const register unsigned short int PRI_77 = 31;
    sbit  PRI_77_bit at NVIC_IPR1.B31;

sfr far unsigned long   volatile NVIC_IPR2            absolute 0xE000E408;
    const register unsigned short int PRI_80 = 0;
    sbit  PRI_80_bit at NVIC_IPR2.B0;
    const register unsigned short int PRI_81 = 1;
    sbit  PRI_81_bit at NVIC_IPR2.B1;
    const register unsigned short int PRI_82 = 2;
    sbit  PRI_82_bit at NVIC_IPR2.B2;
    const register unsigned short int PRI_83 = 3;
    sbit  PRI_83_bit at NVIC_IPR2.B3;
    const register unsigned short int PRI_84 = 4;
    sbit  PRI_84_bit at NVIC_IPR2.B4;
    const register unsigned short int PRI_85 = 5;
    sbit  PRI_85_bit at NVIC_IPR2.B5;
    const register unsigned short int PRI_86 = 6;
    sbit  PRI_86_bit at NVIC_IPR2.B6;
    const register unsigned short int PRI_87 = 7;
    sbit  PRI_87_bit at NVIC_IPR2.B7;
    const register unsigned short int PRI_90 = 8;
    sbit  PRI_90_bit at NVIC_IPR2.B8;
    const register unsigned short int PRI_91 = 9;
    sbit  PRI_91_bit at NVIC_IPR2.B9;
    const register unsigned short int PRI_92 = 10;
    sbit  PRI_92_bit at NVIC_IPR2.B10;
    const register unsigned short int PRI_93 = 11;
    sbit  PRI_93_bit at NVIC_IPR2.B11;
    const register unsigned short int PRI_94 = 12;
    sbit  PRI_94_bit at NVIC_IPR2.B12;
    const register unsigned short int PRI_95 = 13;
    sbit  PRI_95_bit at NVIC_IPR2.B13;
    const register unsigned short int PRI_96 = 14;
    sbit  PRI_96_bit at NVIC_IPR2.B14;
    const register unsigned short int PRI_97 = 15;
    sbit  PRI_97_bit at NVIC_IPR2.B15;
    const register unsigned short int PRI_100 = 16;
    sbit  PRI_100_bit at NVIC_IPR2.B16;
    const register unsigned short int PRI_101 = 17;
    sbit  PRI_101_bit at NVIC_IPR2.B17;
    const register unsigned short int PRI_102 = 18;
    sbit  PRI_102_bit at NVIC_IPR2.B18;
    const register unsigned short int PRI_103 = 19;
    sbit  PRI_103_bit at NVIC_IPR2.B19;
    const register unsigned short int PRI_104 = 20;
    sbit  PRI_104_bit at NVIC_IPR2.B20;
    const register unsigned short int PRI_105 = 21;
    sbit  PRI_105_bit at NVIC_IPR2.B21;
    const register unsigned short int PRI_106 = 22;
    sbit  PRI_106_bit at NVIC_IPR2.B22;
    const register unsigned short int PRI_107 = 23;
    sbit  PRI_107_bit at NVIC_IPR2.B23;
    const register unsigned short int PRI_110 = 24;
    sbit  PRI_110_bit at NVIC_IPR2.B24;
    const register unsigned short int PRI_111 = 25;
    sbit  PRI_111_bit at NVIC_IPR2.B25;
    const register unsigned short int PRI_112 = 26;
    sbit  PRI_112_bit at NVIC_IPR2.B26;
    const register unsigned short int PRI_113 = 27;
    sbit  PRI_113_bit at NVIC_IPR2.B27;
    const register unsigned short int PRI_114 = 28;
    sbit  PRI_114_bit at NVIC_IPR2.B28;
    const register unsigned short int PRI_115 = 29;
    sbit  PRI_115_bit at NVIC_IPR2.B29;
    const register unsigned short int PRI_116 = 30;
    sbit  PRI_116_bit at NVIC_IPR2.B30;
    const register unsigned short int PRI_117 = 31;
    sbit  PRI_117_bit at NVIC_IPR2.B31;

sfr far unsigned long   volatile NVIC_IPR3            absolute 0xE000E40C;
    const register unsigned short int PRI_120 = 0;
    sbit  PRI_120_bit at NVIC_IPR3.B0;
    const register unsigned short int PRI_121 = 1;
    sbit  PRI_121_bit at NVIC_IPR3.B1;
    const register unsigned short int PRI_122 = 2;
    sbit  PRI_122_bit at NVIC_IPR3.B2;
    const register unsigned short int PRI_123 = 3;
    sbit  PRI_123_bit at NVIC_IPR3.B3;
    const register unsigned short int PRI_124 = 4;
    sbit  PRI_124_bit at NVIC_IPR3.B4;
    const register unsigned short int PRI_125 = 5;
    sbit  PRI_125_bit at NVIC_IPR3.B5;
    const register unsigned short int PRI_126 = 6;
    sbit  PRI_126_bit at NVIC_IPR3.B6;
    const register unsigned short int PRI_127 = 7;
    sbit  PRI_127_bit at NVIC_IPR3.B7;
    const register unsigned short int PRI_130 = 8;
    sbit  PRI_130_bit at NVIC_IPR3.B8;
    const register unsigned short int PRI_131 = 9;
    sbit  PRI_131_bit at NVIC_IPR3.B9;
    const register unsigned short int PRI_132 = 10;
    sbit  PRI_132_bit at NVIC_IPR3.B10;
    const register unsigned short int PRI_133 = 11;
    sbit  PRI_133_bit at NVIC_IPR3.B11;
    const register unsigned short int PRI_134 = 12;
    sbit  PRI_134_bit at NVIC_IPR3.B12;
    const register unsigned short int PRI_135 = 13;
    sbit  PRI_135_bit at NVIC_IPR3.B13;
    const register unsigned short int PRI_136 = 14;
    sbit  PRI_136_bit at NVIC_IPR3.B14;
    const register unsigned short int PRI_137 = 15;
    sbit  PRI_137_bit at NVIC_IPR3.B15;
    const register unsigned short int PRI_140 = 16;
    sbit  PRI_140_bit at NVIC_IPR3.B16;
    const register unsigned short int PRI_141 = 17;
    sbit  PRI_141_bit at NVIC_IPR3.B17;
    const register unsigned short int PRI_142 = 18;
    sbit  PRI_142_bit at NVIC_IPR3.B18;
    const register unsigned short int PRI_143 = 19;
    sbit  PRI_143_bit at NVIC_IPR3.B19;
    const register unsigned short int PRI_144 = 20;
    sbit  PRI_144_bit at NVIC_IPR3.B20;
    const register unsigned short int PRI_145 = 21;
    sbit  PRI_145_bit at NVIC_IPR3.B21;
    const register unsigned short int PRI_146 = 22;
    sbit  PRI_146_bit at NVIC_IPR3.B22;
    const register unsigned short int PRI_147 = 23;
    sbit  PRI_147_bit at NVIC_IPR3.B23;
    const register unsigned short int PRI_150 = 24;
    sbit  PRI_150_bit at NVIC_IPR3.B24;
    const register unsigned short int PRI_151 = 25;
    sbit  PRI_151_bit at NVIC_IPR3.B25;
    const register unsigned short int PRI_152 = 26;
    sbit  PRI_152_bit at NVIC_IPR3.B26;
    const register unsigned short int PRI_153 = 27;
    sbit  PRI_153_bit at NVIC_IPR3.B27;
    const register unsigned short int PRI_154 = 28;
    sbit  PRI_154_bit at NVIC_IPR3.B28;
    const register unsigned short int PRI_155 = 29;
    sbit  PRI_155_bit at NVIC_IPR3.B29;
    const register unsigned short int PRI_156 = 30;
    sbit  PRI_156_bit at NVIC_IPR3.B30;
    const register unsigned short int PRI_157 = 31;
    sbit  PRI_157_bit at NVIC_IPR3.B31;

sfr far unsigned long   volatile NVIC_IPR4            absolute 0xE000E410;
    const register unsigned short int PRI_160 = 0;
    sbit  PRI_160_bit at NVIC_IPR4.B0;
    const register unsigned short int PRI_161 = 1;
    sbit  PRI_161_bit at NVIC_IPR4.B1;
    const register unsigned short int PRI_162 = 2;
    sbit  PRI_162_bit at NVIC_IPR4.B2;
    const register unsigned short int PRI_163 = 3;
    sbit  PRI_163_bit at NVIC_IPR4.B3;
    const register unsigned short int PRI_164 = 4;
    sbit  PRI_164_bit at NVIC_IPR4.B4;
    const register unsigned short int PRI_165 = 5;
    sbit  PRI_165_bit at NVIC_IPR4.B5;
    const register unsigned short int PRI_166 = 6;
    sbit  PRI_166_bit at NVIC_IPR4.B6;
    const register unsigned short int PRI_167 = 7;
    sbit  PRI_167_bit at NVIC_IPR4.B7;
    const register unsigned short int PRI_170 = 8;
    sbit  PRI_170_bit at NVIC_IPR4.B8;
    const register unsigned short int PRI_171 = 9;
    sbit  PRI_171_bit at NVIC_IPR4.B9;
    const register unsigned short int PRI_172 = 10;
    sbit  PRI_172_bit at NVIC_IPR4.B10;
    const register unsigned short int PRI_173 = 11;
    sbit  PRI_173_bit at NVIC_IPR4.B11;
    const register unsigned short int PRI_174 = 12;
    sbit  PRI_174_bit at NVIC_IPR4.B12;
    const register unsigned short int PRI_175 = 13;
    sbit  PRI_175_bit at NVIC_IPR4.B13;
    const register unsigned short int PRI_176 = 14;
    sbit  PRI_176_bit at NVIC_IPR4.B14;
    const register unsigned short int PRI_177 = 15;
    sbit  PRI_177_bit at NVIC_IPR4.B15;
    const register unsigned short int PRI_180 = 16;
    sbit  PRI_180_bit at NVIC_IPR4.B16;
    const register unsigned short int PRI_181 = 17;
    sbit  PRI_181_bit at NVIC_IPR4.B17;
    const register unsigned short int PRI_182 = 18;
    sbit  PRI_182_bit at NVIC_IPR4.B18;
    const register unsigned short int PRI_183 = 19;
    sbit  PRI_183_bit at NVIC_IPR4.B19;
    const register unsigned short int PRI_184 = 20;
    sbit  PRI_184_bit at NVIC_IPR4.B20;
    const register unsigned short int PRI_185 = 21;
    sbit  PRI_185_bit at NVIC_IPR4.B21;
    const register unsigned short int PRI_186 = 22;
    sbit  PRI_186_bit at NVIC_IPR4.B22;
    const register unsigned short int PRI_187 = 23;
    sbit  PRI_187_bit at NVIC_IPR4.B23;
    const register unsigned short int PRI_190 = 24;
    sbit  PRI_190_bit at NVIC_IPR4.B24;
    const register unsigned short int PRI_191 = 25;
    sbit  PRI_191_bit at NVIC_IPR4.B25;
    const register unsigned short int PRI_192 = 26;
    sbit  PRI_192_bit at NVIC_IPR4.B26;
    const register unsigned short int PRI_193 = 27;
    sbit  PRI_193_bit at NVIC_IPR4.B27;
    const register unsigned short int PRI_194 = 28;
    sbit  PRI_194_bit at NVIC_IPR4.B28;
    const register unsigned short int PRI_195 = 29;
    sbit  PRI_195_bit at NVIC_IPR4.B29;
    const register unsigned short int PRI_196 = 30;
    sbit  PRI_196_bit at NVIC_IPR4.B30;
    const register unsigned short int PRI_197 = 31;
    sbit  PRI_197_bit at NVIC_IPR4.B31;

sfr far unsigned long   volatile NVIC_IPR5            absolute 0xE000E414;
    const register unsigned short int PRI_200 = 0;
    sbit  PRI_200_bit at NVIC_IPR5.B0;
    const register unsigned short int PRI_201 = 1;
    sbit  PRI_201_bit at NVIC_IPR5.B1;
    const register unsigned short int PRI_202 = 2;
    sbit  PRI_202_bit at NVIC_IPR5.B2;
    const register unsigned short int PRI_203 = 3;
    sbit  PRI_203_bit at NVIC_IPR5.B3;
    const register unsigned short int PRI_204 = 4;
    sbit  PRI_204_bit at NVIC_IPR5.B4;
    const register unsigned short int PRI_205 = 5;
    sbit  PRI_205_bit at NVIC_IPR5.B5;
    const register unsigned short int PRI_206 = 6;
    sbit  PRI_206_bit at NVIC_IPR5.B6;
    const register unsigned short int PRI_207 = 7;
    sbit  PRI_207_bit at NVIC_IPR5.B7;
    const register unsigned short int PRI_210 = 8;
    sbit  PRI_210_bit at NVIC_IPR5.B8;
    const register unsigned short int PRI_211 = 9;
    sbit  PRI_211_bit at NVIC_IPR5.B9;
    const register unsigned short int PRI_212 = 10;
    sbit  PRI_212_bit at NVIC_IPR5.B10;
    const register unsigned short int PRI_213 = 11;
    sbit  PRI_213_bit at NVIC_IPR5.B11;
    const register unsigned short int PRI_214 = 12;
    sbit  PRI_214_bit at NVIC_IPR5.B12;
    const register unsigned short int PRI_215 = 13;
    sbit  PRI_215_bit at NVIC_IPR5.B13;
    const register unsigned short int PRI_216 = 14;
    sbit  PRI_216_bit at NVIC_IPR5.B14;
    const register unsigned short int PRI_217 = 15;
    sbit  PRI_217_bit at NVIC_IPR5.B15;
    const register unsigned short int PRI_220 = 16;
    sbit  PRI_220_bit at NVIC_IPR5.B16;
    const register unsigned short int PRI_221 = 17;
    sbit  PRI_221_bit at NVIC_IPR5.B17;
    const register unsigned short int PRI_222 = 18;
    sbit  PRI_222_bit at NVIC_IPR5.B18;
    const register unsigned short int PRI_223 = 19;
    sbit  PRI_223_bit at NVIC_IPR5.B19;
    const register unsigned short int PRI_224 = 20;
    sbit  PRI_224_bit at NVIC_IPR5.B20;
    const register unsigned short int PRI_225 = 21;
    sbit  PRI_225_bit at NVIC_IPR5.B21;
    const register unsigned short int PRI_226 = 22;
    sbit  PRI_226_bit at NVIC_IPR5.B22;
    const register unsigned short int PRI_227 = 23;
    sbit  PRI_227_bit at NVIC_IPR5.B23;
    const register unsigned short int PRI_230 = 24;
    sbit  PRI_230_bit at NVIC_IPR5.B24;
    const register unsigned short int PRI_231 = 25;
    sbit  PRI_231_bit at NVIC_IPR5.B25;
    const register unsigned short int PRI_232 = 26;
    sbit  PRI_232_bit at NVIC_IPR5.B26;
    const register unsigned short int PRI_233 = 27;
    sbit  PRI_233_bit at NVIC_IPR5.B27;
    const register unsigned short int PRI_234 = 28;
    sbit  PRI_234_bit at NVIC_IPR5.B28;
    const register unsigned short int PRI_235 = 29;
    sbit  PRI_235_bit at NVIC_IPR5.B29;
    const register unsigned short int PRI_236 = 30;
    sbit  PRI_236_bit at NVIC_IPR5.B30;
    const register unsigned short int PRI_237 = 31;
    sbit  PRI_237_bit at NVIC_IPR5.B31;

sfr far unsigned long   volatile NVIC_IPR6            absolute 0xE000E418;
    const register unsigned short int PRI_240 = 0;
    sbit  PRI_240_bit at NVIC_IPR6.B0;
    const register unsigned short int PRI_241 = 1;
    sbit  PRI_241_bit at NVIC_IPR6.B1;
    const register unsigned short int PRI_242 = 2;
    sbit  PRI_242_bit at NVIC_IPR6.B2;
    const register unsigned short int PRI_243 = 3;
    sbit  PRI_243_bit at NVIC_IPR6.B3;
    const register unsigned short int PRI_244 = 4;
    sbit  PRI_244_bit at NVIC_IPR6.B4;
    const register unsigned short int PRI_245 = 5;
    sbit  PRI_245_bit at NVIC_IPR6.B5;
    const register unsigned short int PRI_246 = 6;
    sbit  PRI_246_bit at NVIC_IPR6.B6;
    const register unsigned short int PRI_247 = 7;
    sbit  PRI_247_bit at NVIC_IPR6.B7;
    const register unsigned short int PRI_250 = 8;
    sbit  PRI_250_bit at NVIC_IPR6.B8;
    const register unsigned short int PRI_251 = 9;
    sbit  PRI_251_bit at NVIC_IPR6.B9;
    const register unsigned short int PRI_252 = 10;
    sbit  PRI_252_bit at NVIC_IPR6.B10;
    const register unsigned short int PRI_253 = 11;
    sbit  PRI_253_bit at NVIC_IPR6.B11;
    const register unsigned short int PRI_254 = 12;
    sbit  PRI_254_bit at NVIC_IPR6.B12;
    const register unsigned short int PRI_255 = 13;
    sbit  PRI_255_bit at NVIC_IPR6.B13;
    const register unsigned short int PRI_256 = 14;
    sbit  PRI_256_bit at NVIC_IPR6.B14;
    const register unsigned short int PRI_257 = 15;
    sbit  PRI_257_bit at NVIC_IPR6.B15;
    const register unsigned short int PRI_260 = 16;
    sbit  PRI_260_bit at NVIC_IPR6.B16;
    const register unsigned short int PRI_261 = 17;
    sbit  PRI_261_bit at NVIC_IPR6.B17;
    const register unsigned short int PRI_262 = 18;
    sbit  PRI_262_bit at NVIC_IPR6.B18;
    const register unsigned short int PRI_263 = 19;
    sbit  PRI_263_bit at NVIC_IPR6.B19;
    const register unsigned short int PRI_264 = 20;
    sbit  PRI_264_bit at NVIC_IPR6.B20;
    const register unsigned short int PRI_265 = 21;
    sbit  PRI_265_bit at NVIC_IPR6.B21;
    const register unsigned short int PRI_266 = 22;
    sbit  PRI_266_bit at NVIC_IPR6.B22;
    const register unsigned short int PRI_267 = 23;
    sbit  PRI_267_bit at NVIC_IPR6.B23;
    const register unsigned short int PRI_270 = 24;
    sbit  PRI_270_bit at NVIC_IPR6.B24;
    const register unsigned short int PRI_271 = 25;
    sbit  PRI_271_bit at NVIC_IPR6.B25;
    const register unsigned short int PRI_272 = 26;
    sbit  PRI_272_bit at NVIC_IPR6.B26;
    const register unsigned short int PRI_273 = 27;
    sbit  PRI_273_bit at NVIC_IPR6.B27;
    const register unsigned short int PRI_274 = 28;
    sbit  PRI_274_bit at NVIC_IPR6.B28;
    const register unsigned short int PRI_275 = 29;
    sbit  PRI_275_bit at NVIC_IPR6.B29;
    const register unsigned short int PRI_276 = 30;
    sbit  PRI_276_bit at NVIC_IPR6.B30;
    const register unsigned short int PRI_277 = 31;
    sbit  PRI_277_bit at NVIC_IPR6.B31;

sfr far unsigned long   volatile NVIC_IPR7            absolute 0xE000E41C;
    const register unsigned short int PRI_280 = 0;
    sbit  PRI_280_bit at NVIC_IPR7.B0;
    const register unsigned short int PRI_281 = 1;
    sbit  PRI_281_bit at NVIC_IPR7.B1;
    const register unsigned short int PRI_282 = 2;
    sbit  PRI_282_bit at NVIC_IPR7.B2;
    const register unsigned short int PRI_283 = 3;
    sbit  PRI_283_bit at NVIC_IPR7.B3;
    const register unsigned short int PRI_284 = 4;
    sbit  PRI_284_bit at NVIC_IPR7.B4;
    const register unsigned short int PRI_285 = 5;
    sbit  PRI_285_bit at NVIC_IPR7.B5;
    const register unsigned short int PRI_286 = 6;
    sbit  PRI_286_bit at NVIC_IPR7.B6;
    const register unsigned short int PRI_287 = 7;
    sbit  PRI_287_bit at NVIC_IPR7.B7;
    const register unsigned short int PRI_290 = 8;
    sbit  PRI_290_bit at NVIC_IPR7.B8;
    const register unsigned short int PRI_291 = 9;
    sbit  PRI_291_bit at NVIC_IPR7.B9;
    const register unsigned short int PRI_292 = 10;
    sbit  PRI_292_bit at NVIC_IPR7.B10;
    const register unsigned short int PRI_293 = 11;
    sbit  PRI_293_bit at NVIC_IPR7.B11;
    const register unsigned short int PRI_294 = 12;
    sbit  PRI_294_bit at NVIC_IPR7.B12;
    const register unsigned short int PRI_295 = 13;
    sbit  PRI_295_bit at NVIC_IPR7.B13;
    const register unsigned short int PRI_296 = 14;
    sbit  PRI_296_bit at NVIC_IPR7.B14;
    const register unsigned short int PRI_297 = 15;
    sbit  PRI_297_bit at NVIC_IPR7.B15;
    const register unsigned short int PRI_300 = 16;
    sbit  PRI_300_bit at NVIC_IPR7.B16;
    const register unsigned short int PRI_301 = 17;
    sbit  PRI_301_bit at NVIC_IPR7.B17;
    const register unsigned short int PRI_302 = 18;
    sbit  PRI_302_bit at NVIC_IPR7.B18;
    const register unsigned short int PRI_303 = 19;
    sbit  PRI_303_bit at NVIC_IPR7.B19;
    const register unsigned short int PRI_304 = 20;
    sbit  PRI_304_bit at NVIC_IPR7.B20;
    const register unsigned short int PRI_305 = 21;
    sbit  PRI_305_bit at NVIC_IPR7.B21;
    const register unsigned short int PRI_306 = 22;
    sbit  PRI_306_bit at NVIC_IPR7.B22;
    const register unsigned short int PRI_307 = 23;
    sbit  PRI_307_bit at NVIC_IPR7.B23;
    const register unsigned short int PRI_310 = 24;
    sbit  PRI_310_bit at NVIC_IPR7.B24;
    const register unsigned short int PRI_311 = 25;
    sbit  PRI_311_bit at NVIC_IPR7.B25;
    const register unsigned short int PRI_312 = 26;
    sbit  PRI_312_bit at NVIC_IPR7.B26;
    const register unsigned short int PRI_313 = 27;
    sbit  PRI_313_bit at NVIC_IPR7.B27;
    const register unsigned short int PRI_314 = 28;
    sbit  PRI_314_bit at NVIC_IPR7.B28;
    const register unsigned short int PRI_315 = 29;
    sbit  PRI_315_bit at NVIC_IPR7.B29;
    const register unsigned short int PRI_316 = 30;
    sbit  PRI_316_bit at NVIC_IPR7.B30;
    const register unsigned short int PRI_317 = 31;
    sbit  PRI_317_bit at NVIC_IPR7.B31;

sfr far unsigned long   volatile NVIC_IPR8            absolute 0xE000E420;
sfr far unsigned long   volatile MPU_TYPER            absolute 0xE000ED90;
    const register unsigned short int SEPARATE = 0;
    sbit  SEPARATE_bit at MPU_TYPER.B0;
    const register unsigned short int DREGION0 = 8;
    sbit  DREGION0_bit at MPU_TYPER.B8;
    const register unsigned short int DREGION1 = 9;
    sbit  DREGION1_bit at MPU_TYPER.B9;
    const register unsigned short int DREGION2 = 10;
    sbit  DREGION2_bit at MPU_TYPER.B10;
    const register unsigned short int DREGION3 = 11;
    sbit  DREGION3_bit at MPU_TYPER.B11;
    const register unsigned short int DREGION4 = 12;
    sbit  DREGION4_bit at MPU_TYPER.B12;
    const register unsigned short int DREGION5 = 13;
    sbit  DREGION5_bit at MPU_TYPER.B13;
    const register unsigned short int DREGION6 = 14;
    sbit  DREGION6_bit at MPU_TYPER.B14;
    const register unsigned short int DREGION7 = 15;
    sbit  DREGION7_bit at MPU_TYPER.B15;
    const register unsigned short int IREGION0 = 16;
    sbit  IREGION0_bit at MPU_TYPER.B16;
    const register unsigned short int IREGION1 = 17;
    sbit  IREGION1_bit at MPU_TYPER.B17;
    const register unsigned short int IREGION2 = 18;
    sbit  IREGION2_bit at MPU_TYPER.B18;
    const register unsigned short int IREGION3 = 19;
    sbit  IREGION3_bit at MPU_TYPER.B19;
    const register unsigned short int IREGION4 = 20;
    sbit  IREGION4_bit at MPU_TYPER.B20;
    const register unsigned short int IREGION5 = 21;
    sbit  IREGION5_bit at MPU_TYPER.B21;
    const register unsigned short int IREGION6 = 22;
    sbit  IREGION6_bit at MPU_TYPER.B22;
    const register unsigned short int IREGION7 = 23;
    sbit  IREGION7_bit at MPU_TYPER.B23;

sfr far unsigned long   volatile MPU_CTRL             absolute 0xE000ED94;
    sbit  ENABLE_MPU_CTRL_bit at MPU_CTRL.B0;
    const register unsigned short int HFNMIENA = 1;
    sbit  HFNMIENA_bit at MPU_CTRL.B1;
    const register unsigned short int PRIVDEFENA = 2;
    sbit  PRIVDEFENA_bit at MPU_CTRL.B2;

sfr far unsigned long   volatile MPU_RNR              absolute 0xE000ED98;
    const register unsigned short int REGION0 = 0;
    sbit  REGION0_bit at MPU_RNR.B0;
    const register unsigned short int REGION1 = 1;
    sbit  REGION1_bit at MPU_RNR.B1;
    const register unsigned short int REGION2 = 2;
    sbit  REGION2_bit at MPU_RNR.B2;
    const register unsigned short int REGION3 = 3;
    sbit  REGION3_bit at MPU_RNR.B3;
    const register unsigned short int REGION4 = 4;
    sbit  REGION4_bit at MPU_RNR.B4;
    const register unsigned short int REGION5 = 5;
    sbit  REGION5_bit at MPU_RNR.B5;
    const register unsigned short int REGION6 = 6;
    sbit  REGION6_bit at MPU_RNR.B6;
    const register unsigned short int REGION7 = 7;
    sbit  REGION7_bit at MPU_RNR.B7;

sfr far unsigned long   volatile MPU_RBAR             absolute 0xE000ED9C;
    sbit  REGION0_MPU_RBAR_bit at MPU_RBAR.B0;
    sbit  REGION1_MPU_RBAR_bit at MPU_RBAR.B1;
    sbit  REGION2_MPU_RBAR_bit at MPU_RBAR.B2;
    sbit  REGION3_MPU_RBAR_bit at MPU_RBAR.B3;
    const register unsigned short int VALID = 4;
    sbit  VALID_bit at MPU_RBAR.B4;
    const register unsigned short int ADDR0 = 5;
    sbit  ADDR0_bit at MPU_RBAR.B5;
    const register unsigned short int ADDR1 = 6;
    sbit  ADDR1_bit at MPU_RBAR.B6;
    const register unsigned short int ADDR2 = 7;
    sbit  ADDR2_bit at MPU_RBAR.B7;
    const register unsigned short int ADDR3 = 8;
    sbit  ADDR3_bit at MPU_RBAR.B8;
    const register unsigned short int ADDR4 = 9;
    sbit  ADDR4_bit at MPU_RBAR.B9;
    const register unsigned short int ADDR5 = 10;
    sbit  ADDR5_bit at MPU_RBAR.B10;
    const register unsigned short int ADDR6 = 11;
    sbit  ADDR6_bit at MPU_RBAR.B11;
    const register unsigned short int ADDR7 = 12;
    sbit  ADDR7_bit at MPU_RBAR.B12;
    const register unsigned short int ADDR8 = 13;
    sbit  ADDR8_bit at MPU_RBAR.B13;
    const register unsigned short int ADDR9 = 14;
    sbit  ADDR9_bit at MPU_RBAR.B14;
    const register unsigned short int ADDR10 = 15;
    sbit  ADDR10_bit at MPU_RBAR.B15;
    const register unsigned short int ADDR11 = 16;
    sbit  ADDR11_bit at MPU_RBAR.B16;
    const register unsigned short int ADDR12 = 17;
    sbit  ADDR12_bit at MPU_RBAR.B17;
    const register unsigned short int ADDR13 = 18;
    sbit  ADDR13_bit at MPU_RBAR.B18;
    const register unsigned short int ADDR14 = 19;
    sbit  ADDR14_bit at MPU_RBAR.B19;
    const register unsigned short int ADDR15 = 20;
    sbit  ADDR15_bit at MPU_RBAR.B20;
    const register unsigned short int ADDR16 = 21;
    sbit  ADDR16_bit at MPU_RBAR.B21;
    const register unsigned short int ADDR17 = 22;
    sbit  ADDR17_bit at MPU_RBAR.B22;
    const register unsigned short int ADDR18 = 23;
    sbit  ADDR18_bit at MPU_RBAR.B23;
    const register unsigned short int ADDR19 = 24;
    sbit  ADDR19_bit at MPU_RBAR.B24;
    const register unsigned short int ADDR20 = 25;
    sbit  ADDR20_bit at MPU_RBAR.B25;
    const register unsigned short int ADDR21 = 26;
    sbit  ADDR21_bit at MPU_RBAR.B26;
    const register unsigned short int ADDR22 = 27;
    sbit  ADDR22_bit at MPU_RBAR.B27;
    const register unsigned short int ADDR23 = 28;
    sbit  ADDR23_bit at MPU_RBAR.B28;
    const register unsigned short int ADDR24 = 29;
    sbit  ADDR24_bit at MPU_RBAR.B29;
    const register unsigned short int ADDR25 = 30;
    sbit  ADDR25_bit at MPU_RBAR.B30;
    const register unsigned short int ADDR26 = 31;
    sbit  ADDR26_bit at MPU_RBAR.B31;

sfr far unsigned long   volatile MPU_RASR             absolute 0xE000EDA0;
    sbit  ENABLE_MPU_RASR_bit at MPU_RASR.B0;
    const register unsigned short int SIZE0 = 1;
    sbit  SIZE0_bit at MPU_RASR.B1;
    const register unsigned short int SIZE1 = 2;
    sbit  SIZE1_bit at MPU_RASR.B2;
    const register unsigned short int SIZE2 = 3;
    sbit  SIZE2_bit at MPU_RASR.B3;
    const register unsigned short int SIZE3 = 4;
    sbit  SIZE3_bit at MPU_RASR.B4;
    const register unsigned short int SIZE4 = 5;
    sbit  SIZE4_bit at MPU_RASR.B5;
    const register unsigned short int SRD0 = 8;
    sbit  SRD0_bit at MPU_RASR.B8;
    const register unsigned short int SRD1 = 9;
    sbit  SRD1_bit at MPU_RASR.B9;
    const register unsigned short int SRD2 = 10;
    sbit  SRD2_bit at MPU_RASR.B10;
    const register unsigned short int SRD3 = 11;
    sbit  SRD3_bit at MPU_RASR.B11;
    const register unsigned short int SRD4 = 12;
    sbit  SRD4_bit at MPU_RASR.B12;
    const register unsigned short int SRD5 = 13;
    sbit  SRD5_bit at MPU_RASR.B13;
    const register unsigned short int SRD6 = 14;
    sbit  SRD6_bit at MPU_RASR.B14;
    const register unsigned short int SRD7 = 15;
    sbit  SRD7_bit at MPU_RASR.B15;
    const register unsigned short int B = 16;
    sbit  B_bit at MPU_RASR.B16;
    const register unsigned short int C = 17;
    sbit  C_bit at MPU_RASR.B17;
    const register unsigned short int S = 18;
    sbit  S_bit at MPU_RASR.B18;
    const register unsigned short int TEX0 = 19;
    sbit  TEX0_bit at MPU_RASR.B19;
    const register unsigned short int TEX1 = 20;
    sbit  TEX1_bit at MPU_RASR.B20;
    const register unsigned short int TEX2 = 21;
    sbit  TEX2_bit at MPU_RASR.B21;
    const register unsigned short int AP0 = 24;
    sbit  AP0_bit at MPU_RASR.B24;
    const register unsigned short int AP1 = 25;
    sbit  AP1_bit at MPU_RASR.B25;
    const register unsigned short int AP2 = 26;
    sbit  AP2_bit at MPU_RASR.B26;
    const register unsigned short int XN = 28;
    sbit  XN_bit at MPU_RASR.B28;

sfr far unsigned long   volatile STK_CSR              absolute 0xE000E010;
    sbit  ENABLE_STK_CSR_bit at STK_CSR.B0;
    const register unsigned short int TICKINT = 1;
    sbit  TICKINT_bit at STK_CSR.B1;
    const register unsigned short int CLKSOURCE = 2;
    sbit  CLKSOURCE_bit at STK_CSR.B2;
    const register unsigned short int COUNTFLAG = 16;
    sbit  COUNTFLAG_bit at STK_CSR.B16;

sfr far unsigned long   volatile STK_RVR              absolute 0xE000E014;
    const register unsigned short int RELOAD0 = 0;
    sbit  RELOAD0_bit at STK_RVR.B0;
    const register unsigned short int RELOAD1 = 1;
    sbit  RELOAD1_bit at STK_RVR.B1;
    const register unsigned short int RELOAD2 = 2;
    sbit  RELOAD2_bit at STK_RVR.B2;
    const register unsigned short int RELOAD3 = 3;
    sbit  RELOAD3_bit at STK_RVR.B3;
    const register unsigned short int RELOAD4 = 4;
    sbit  RELOAD4_bit at STK_RVR.B4;
    const register unsigned short int RELOAD5 = 5;
    sbit  RELOAD5_bit at STK_RVR.B5;
    const register unsigned short int RELOAD6 = 6;
    sbit  RELOAD6_bit at STK_RVR.B6;
    const register unsigned short int RELOAD7 = 7;
    sbit  RELOAD7_bit at STK_RVR.B7;
    const register unsigned short int RELOAD8 = 8;
    sbit  RELOAD8_bit at STK_RVR.B8;
    const register unsigned short int RELOAD9 = 9;
    sbit  RELOAD9_bit at STK_RVR.B9;
    const register unsigned short int RELOAD10 = 10;
    sbit  RELOAD10_bit at STK_RVR.B10;
    const register unsigned short int RELOAD11 = 11;
    sbit  RELOAD11_bit at STK_RVR.B11;
    const register unsigned short int RELOAD12 = 12;
    sbit  RELOAD12_bit at STK_RVR.B12;
    const register unsigned short int RELOAD13 = 13;
    sbit  RELOAD13_bit at STK_RVR.B13;
    const register unsigned short int RELOAD14 = 14;
    sbit  RELOAD14_bit at STK_RVR.B14;
    const register unsigned short int RELOAD15 = 15;
    sbit  RELOAD15_bit at STK_RVR.B15;
    const register unsigned short int RELOAD16 = 16;
    sbit  RELOAD16_bit at STK_RVR.B16;
    const register unsigned short int RELOAD17 = 17;
    sbit  RELOAD17_bit at STK_RVR.B17;
    const register unsigned short int RELOAD18 = 18;
    sbit  RELOAD18_bit at STK_RVR.B18;
    const register unsigned short int RELOAD19 = 19;
    sbit  RELOAD19_bit at STK_RVR.B19;
    const register unsigned short int RELOAD20 = 20;
    sbit  RELOAD20_bit at STK_RVR.B20;
    const register unsigned short int RELOAD21 = 21;
    sbit  RELOAD21_bit at STK_RVR.B21;
    const register unsigned short int RELOAD22 = 22;
    sbit  RELOAD22_bit at STK_RVR.B22;
    const register unsigned short int RELOAD23 = 23;
    sbit  RELOAD23_bit at STK_RVR.B23;

sfr far unsigned long   volatile STK_CVR              absolute 0xE000E018;
    const register unsigned short int CURRENT0 = 0;
    sbit  CURRENT0_bit at STK_CVR.B0;
    const register unsigned short int CURRENT1 = 1;
    sbit  CURRENT1_bit at STK_CVR.B1;
    const register unsigned short int CURRENT2 = 2;
    sbit  CURRENT2_bit at STK_CVR.B2;
    const register unsigned short int CURRENT3 = 3;
    sbit  CURRENT3_bit at STK_CVR.B3;
    const register unsigned short int CURRENT4 = 4;
    sbit  CURRENT4_bit at STK_CVR.B4;
    const register unsigned short int CURRENT5 = 5;
    sbit  CURRENT5_bit at STK_CVR.B5;
    const register unsigned short int CURRENT6 = 6;
    sbit  CURRENT6_bit at STK_CVR.B6;
    const register unsigned short int CURRENT7 = 7;
    sbit  CURRENT7_bit at STK_CVR.B7;
    const register unsigned short int CURRENT8 = 8;
    sbit  CURRENT8_bit at STK_CVR.B8;
    const register unsigned short int CURRENT9 = 9;
    sbit  CURRENT9_bit at STK_CVR.B9;
    const register unsigned short int CURRENT10 = 10;
    sbit  CURRENT10_bit at STK_CVR.B10;
    const register unsigned short int CURRENT11 = 11;
    sbit  CURRENT11_bit at STK_CVR.B11;
    const register unsigned short int CURRENT12 = 12;
    sbit  CURRENT12_bit at STK_CVR.B12;
    const register unsigned short int CURRENT13 = 13;
    sbit  CURRENT13_bit at STK_CVR.B13;
    const register unsigned short int CURRENT14 = 14;
    sbit  CURRENT14_bit at STK_CVR.B14;
    const register unsigned short int CURRENT15 = 15;
    sbit  CURRENT15_bit at STK_CVR.B15;
    const register unsigned short int CURRENT16 = 16;
    sbit  CURRENT16_bit at STK_CVR.B16;
    const register unsigned short int CURRENT17 = 17;
    sbit  CURRENT17_bit at STK_CVR.B17;
    const register unsigned short int CURRENT18 = 18;
    sbit  CURRENT18_bit at STK_CVR.B18;
    const register unsigned short int CURRENT19 = 19;
    sbit  CURRENT19_bit at STK_CVR.B19;
    const register unsigned short int CURRENT20 = 20;
    sbit  CURRENT20_bit at STK_CVR.B20;
    const register unsigned short int CURRENT21 = 21;
    sbit  CURRENT21_bit at STK_CVR.B21;
    const register unsigned short int CURRENT22 = 22;
    sbit  CURRENT22_bit at STK_CVR.B22;
    const register unsigned short int CURRENT23 = 23;
    sbit  CURRENT23_bit at STK_CVR.B23;

sfr far unsigned long   volatile STK_CALIB            absolute 0xE000E01C;
    const register unsigned short int TENMS0 = 0;
    sbit  TENMS0_bit at STK_CALIB.B0;
    const register unsigned short int TENMS1 = 1;
    sbit  TENMS1_bit at STK_CALIB.B1;
    const register unsigned short int TENMS2 = 2;
    sbit  TENMS2_bit at STK_CALIB.B2;
    const register unsigned short int TENMS3 = 3;
    sbit  TENMS3_bit at STK_CALIB.B3;
    const register unsigned short int TENMS4 = 4;
    sbit  TENMS4_bit at STK_CALIB.B4;
    const register unsigned short int TENMS5 = 5;
    sbit  TENMS5_bit at STK_CALIB.B5;
    const register unsigned short int TENMS6 = 6;
    sbit  TENMS6_bit at STK_CALIB.B6;
    const register unsigned short int TENMS7 = 7;
    sbit  TENMS7_bit at STK_CALIB.B7;
    const register unsigned short int TENMS8 = 8;
    sbit  TENMS8_bit at STK_CALIB.B8;
    const register unsigned short int TENMS9 = 9;
    sbit  TENMS9_bit at STK_CALIB.B9;
    const register unsigned short int TENMS10 = 10;
    sbit  TENMS10_bit at STK_CALIB.B10;
    const register unsigned short int TENMS11 = 11;
    sbit  TENMS11_bit at STK_CALIB.B11;
    const register unsigned short int TENMS12 = 12;
    sbit  TENMS12_bit at STK_CALIB.B12;
    const register unsigned short int TENMS13 = 13;
    sbit  TENMS13_bit at STK_CALIB.B13;
    const register unsigned short int TENMS14 = 14;
    sbit  TENMS14_bit at STK_CALIB.B14;
    const register unsigned short int TENMS15 = 15;
    sbit  TENMS15_bit at STK_CALIB.B15;
    const register unsigned short int TENMS16 = 16;
    sbit  TENMS16_bit at STK_CALIB.B16;
    const register unsigned short int TENMS17 = 17;
    sbit  TENMS17_bit at STK_CALIB.B17;
    const register unsigned short int TENMS18 = 18;
    sbit  TENMS18_bit at STK_CALIB.B18;
    const register unsigned short int TENMS19 = 19;
    sbit  TENMS19_bit at STK_CALIB.B19;
    const register unsigned short int TENMS20 = 20;
    sbit  TENMS20_bit at STK_CALIB.B20;
    const register unsigned short int TENMS21 = 21;
    sbit  TENMS21_bit at STK_CALIB.B21;
    const register unsigned short int TENMS22 = 22;
    sbit  TENMS22_bit at STK_CALIB.B22;
    const register unsigned short int TENMS23 = 23;
    sbit  TENMS23_bit at STK_CALIB.B23;
    const register unsigned short int SKEW = 30;
    sbit  SKEW_bit at STK_CALIB.B30;
    const register unsigned short int NOREF = 31;
    sbit  NOREF_bit at STK_CALIB.B31;

sfr far unsigned long   volatile SCB_CPUID            absolute 0xE000ED00;
    const register unsigned short int Revision0 = 0;
    sbit  Revision0_bit at SCB_CPUID.B0;
    const register unsigned short int Revision1 = 1;
    sbit  Revision1_bit at SCB_CPUID.B1;
    const register unsigned short int Revision2 = 2;
    sbit  Revision2_bit at SCB_CPUID.B2;
    const register unsigned short int Revision3 = 3;
    sbit  Revision3_bit at SCB_CPUID.B3;
    const register unsigned short int PartNo0 = 4;
    sbit  PartNo0_bit at SCB_CPUID.B4;
    const register unsigned short int PartNo1 = 5;
    sbit  PartNo1_bit at SCB_CPUID.B5;
    const register unsigned short int PartNo2 = 6;
    sbit  PartNo2_bit at SCB_CPUID.B6;
    const register unsigned short int PartNo3 = 7;
    sbit  PartNo3_bit at SCB_CPUID.B7;
    const register unsigned short int PartNo4 = 8;
    sbit  PartNo4_bit at SCB_CPUID.B8;
    const register unsigned short int PartNo5 = 9;
    sbit  PartNo5_bit at SCB_CPUID.B9;
    const register unsigned short int PartNo6 = 10;
    sbit  PartNo6_bit at SCB_CPUID.B10;
    const register unsigned short int PartNo7 = 11;
    sbit  PartNo7_bit at SCB_CPUID.B11;
    const register unsigned short int PartNo8 = 12;
    sbit  PartNo8_bit at SCB_CPUID.B12;
    const register unsigned short int PartNo9 = 13;
    sbit  PartNo9_bit at SCB_CPUID.B13;
    const register unsigned short int PartNo10 = 14;
    sbit  PartNo10_bit at SCB_CPUID.B14;
    const register unsigned short int PartNo11 = 15;
    sbit  PartNo11_bit at SCB_CPUID.B15;
    const register unsigned short int Architecture0 = 16;
    sbit  Architecture0_bit at SCB_CPUID.B16;
    const register unsigned short int Architecture1 = 17;
    sbit  Architecture1_bit at SCB_CPUID.B17;
    const register unsigned short int Architecture2 = 18;
    sbit  Architecture2_bit at SCB_CPUID.B18;
    const register unsigned short int Architecture3 = 19;
    sbit  Architecture3_bit at SCB_CPUID.B19;
    const register unsigned short int Variant0 = 20;
    sbit  Variant0_bit at SCB_CPUID.B20;
    const register unsigned short int Variant1 = 21;
    sbit  Variant1_bit at SCB_CPUID.B21;
    const register unsigned short int Variant2 = 22;
    sbit  Variant2_bit at SCB_CPUID.B22;
    const register unsigned short int Variant3 = 23;
    sbit  Variant3_bit at SCB_CPUID.B23;
    const register unsigned short int Implementer0 = 24;
    sbit  Implementer0_bit at SCB_CPUID.B24;
    const register unsigned short int Implementer1 = 25;
    sbit  Implementer1_bit at SCB_CPUID.B25;
    const register unsigned short int Implementer2 = 26;
    sbit  Implementer2_bit at SCB_CPUID.B26;
    const register unsigned short int Implementer3 = 27;
    sbit  Implementer3_bit at SCB_CPUID.B27;
    const register unsigned short int Implementer4 = 28;
    sbit  Implementer4_bit at SCB_CPUID.B28;
    const register unsigned short int Implementer5 = 29;
    sbit  Implementer5_bit at SCB_CPUID.B29;
    const register unsigned short int Implementer6 = 30;
    sbit  Implementer6_bit at SCB_CPUID.B30;
    const register unsigned short int Implementer7 = 31;
    sbit  Implementer7_bit at SCB_CPUID.B31;

sfr far unsigned long   volatile SCB_ICSR             absolute 0xE000ED04;
    const register unsigned short int VECTACTIVE0 = 0;
    sbit  VECTACTIVE0_bit at SCB_ICSR.B0;
    const register unsigned short int VECTACTIVE1 = 1;
    sbit  VECTACTIVE1_bit at SCB_ICSR.B1;
    const register unsigned short int VECTACTIVE2 = 2;
    sbit  VECTACTIVE2_bit at SCB_ICSR.B2;
    const register unsigned short int VECTACTIVE3 = 3;
    sbit  VECTACTIVE3_bit at SCB_ICSR.B3;
    const register unsigned short int VECTACTIVE4 = 4;
    sbit  VECTACTIVE4_bit at SCB_ICSR.B4;
    const register unsigned short int VECTACTIVE5 = 5;
    sbit  VECTACTIVE5_bit at SCB_ICSR.B5;
    const register unsigned short int VECTACTIVE6 = 6;
    sbit  VECTACTIVE6_bit at SCB_ICSR.B6;
    const register unsigned short int VECTACTIVE7 = 7;
    sbit  VECTACTIVE7_bit at SCB_ICSR.B7;
    const register unsigned short int VECTACTIVE8 = 8;
    sbit  VECTACTIVE8_bit at SCB_ICSR.B8;
    const register unsigned short int RETTOBASE = 11;
    sbit  RETTOBASE_bit at SCB_ICSR.B11;
    const register unsigned short int VECTPENDING0 = 12;
    sbit  VECTPENDING0_bit at SCB_ICSR.B12;
    const register unsigned short int VECTPENDING1 = 13;
    sbit  VECTPENDING1_bit at SCB_ICSR.B13;
    const register unsigned short int VECTPENDING2 = 14;
    sbit  VECTPENDING2_bit at SCB_ICSR.B14;
    const register unsigned short int VECTPENDING3 = 15;
    sbit  VECTPENDING3_bit at SCB_ICSR.B15;
    const register unsigned short int VECTPENDING4 = 16;
    sbit  VECTPENDING4_bit at SCB_ICSR.B16;
    const register unsigned short int VECTPENDING5 = 17;
    sbit  VECTPENDING5_bit at SCB_ICSR.B17;
    const register unsigned short int VECTPENDING6 = 18;
    sbit  VECTPENDING6_bit at SCB_ICSR.B18;
    const register unsigned short int ISRPENDING = 22;
    sbit  ISRPENDING_bit at SCB_ICSR.B22;
    const register unsigned short int PENDSTCLR = 25;
    sbit  PENDSTCLR_bit at SCB_ICSR.B25;
    const register unsigned short int PENDSTSET = 26;
    sbit  PENDSTSET_bit at SCB_ICSR.B26;
    const register unsigned short int PENDSVCLR = 27;
    sbit  PENDSVCLR_bit at SCB_ICSR.B27;
    const register unsigned short int PENDSVSET = 28;
    sbit  PENDSVSET_bit at SCB_ICSR.B28;
    const register unsigned short int NMIPENDSET = 31;
    sbit  NMIPENDSET_bit at SCB_ICSR.B31;

sfr far unsigned long   volatile SCB_VTOR             absolute 0xE000ED08;
    const register unsigned short int TBLOFF0 = 7;
    sbit  TBLOFF0_bit at SCB_VTOR.B7;
    const register unsigned short int TBLOFF1 = 8;
    sbit  TBLOFF1_bit at SCB_VTOR.B8;
    const register unsigned short int TBLOFF2 = 9;
    sbit  TBLOFF2_bit at SCB_VTOR.B9;
    const register unsigned short int TBLOFF3 = 10;
    sbit  TBLOFF3_bit at SCB_VTOR.B10;
    const register unsigned short int TBLOFF4 = 11;
    sbit  TBLOFF4_bit at SCB_VTOR.B11;
    const register unsigned short int TBLOFF5 = 12;
    sbit  TBLOFF5_bit at SCB_VTOR.B12;
    const register unsigned short int TBLOFF6 = 13;
    sbit  TBLOFF6_bit at SCB_VTOR.B13;
    const register unsigned short int TBLOFF7 = 14;
    sbit  TBLOFF7_bit at SCB_VTOR.B14;
    const register unsigned short int TBLOFF8 = 15;
    sbit  TBLOFF8_bit at SCB_VTOR.B15;
    const register unsigned short int TBLOFF9 = 16;
    sbit  TBLOFF9_bit at SCB_VTOR.B16;
    const register unsigned short int TBLOFF10 = 17;
    sbit  TBLOFF10_bit at SCB_VTOR.B17;
    const register unsigned short int TBLOFF11 = 18;
    sbit  TBLOFF11_bit at SCB_VTOR.B18;
    const register unsigned short int TBLOFF12 = 19;
    sbit  TBLOFF12_bit at SCB_VTOR.B19;
    const register unsigned short int TBLOFF13 = 20;
    sbit  TBLOFF13_bit at SCB_VTOR.B20;
    const register unsigned short int TBLOFF14 = 21;
    sbit  TBLOFF14_bit at SCB_VTOR.B21;
    const register unsigned short int TBLOFF15 = 22;
    sbit  TBLOFF15_bit at SCB_VTOR.B22;
    const register unsigned short int TBLOFF16 = 23;
    sbit  TBLOFF16_bit at SCB_VTOR.B23;
    const register unsigned short int TBLOFF17 = 24;
    sbit  TBLOFF17_bit at SCB_VTOR.B24;
    const register unsigned short int TBLOFF18 = 25;
    sbit  TBLOFF18_bit at SCB_VTOR.B25;
    const register unsigned short int TBLOFF19 = 26;
    sbit  TBLOFF19_bit at SCB_VTOR.B26;
    const register unsigned short int TBLOFF20 = 27;
    sbit  TBLOFF20_bit at SCB_VTOR.B27;
    const register unsigned short int TBLOFF21 = 28;
    sbit  TBLOFF21_bit at SCB_VTOR.B28;
    const register unsigned short int TBLOFF22 = 29;
    sbit  TBLOFF22_bit at SCB_VTOR.B29;
    const register unsigned short int TBLOFF23 = 30;
    sbit  TBLOFF23_bit at SCB_VTOR.B30;
    const register unsigned short int TBLOFF24 = 31;
    sbit  TBLOFF24_bit at SCB_VTOR.B31;

sfr far unsigned long   volatile SCB_AIRCR            absolute 0xE000ED0C;
    const register unsigned short int VECTCLRACTIVE = 1;
    sbit  VECTCLRACTIVE_bit at SCB_AIRCR.B1;
    const register unsigned short int SYSRESETREQ = 2;
    sbit  SYSRESETREQ_bit at SCB_AIRCR.B2;
    const register unsigned short int ENDIANESS = 15;
    sbit  ENDIANESS_bit at SCB_AIRCR.B15;
    const register unsigned short int VECTKEYSTAT0 = 16;
    sbit  VECTKEYSTAT0_bit at SCB_AIRCR.B16;
    const register unsigned short int VECTKEYSTAT1 = 17;
    sbit  VECTKEYSTAT1_bit at SCB_AIRCR.B17;
    const register unsigned short int VECTKEYSTAT2 = 18;
    sbit  VECTKEYSTAT2_bit at SCB_AIRCR.B18;
    const register unsigned short int VECTKEYSTAT3 = 19;
    sbit  VECTKEYSTAT3_bit at SCB_AIRCR.B19;
    const register unsigned short int VECTKEYSTAT4 = 20;
    sbit  VECTKEYSTAT4_bit at SCB_AIRCR.B20;
    const register unsigned short int VECTKEYSTAT5 = 21;
    sbit  VECTKEYSTAT5_bit at SCB_AIRCR.B21;
    const register unsigned short int VECTKEYSTAT6 = 22;
    sbit  VECTKEYSTAT6_bit at SCB_AIRCR.B22;
    const register unsigned short int VECTKEYSTAT7 = 23;
    sbit  VECTKEYSTAT7_bit at SCB_AIRCR.B23;
    const register unsigned short int VECTKEYSTAT8 = 24;
    sbit  VECTKEYSTAT8_bit at SCB_AIRCR.B24;
    const register unsigned short int VECTKEYSTAT9 = 25;
    sbit  VECTKEYSTAT9_bit at SCB_AIRCR.B25;
    const register unsigned short int VECTKEYSTAT10 = 26;
    sbit  VECTKEYSTAT10_bit at SCB_AIRCR.B26;
    const register unsigned short int VECTKEYSTAT11 = 27;
    sbit  VECTKEYSTAT11_bit at SCB_AIRCR.B27;
    const register unsigned short int VECTKEYSTAT12 = 28;
    sbit  VECTKEYSTAT12_bit at SCB_AIRCR.B28;
    const register unsigned short int VECTKEYSTAT13 = 29;
    sbit  VECTKEYSTAT13_bit at SCB_AIRCR.B29;
    const register unsigned short int VECTKEYSTAT14 = 30;
    sbit  VECTKEYSTAT14_bit at SCB_AIRCR.B30;
    const register unsigned short int VECTKEYSTAT15 = 31;
    sbit  VECTKEYSTAT15_bit at SCB_AIRCR.B31;

sfr far unsigned long   volatile SCB_SCR              absolute 0xE000ED10;
    const register unsigned short int SLEEPONEXIT = 1;
    sbit  SLEEPONEXIT_bit at SCB_SCR.B1;
    const register unsigned short int SLEEPDEEP = 2;
    sbit  SLEEPDEEP_bit at SCB_SCR.B2;
    const register unsigned short int SEVEONPEND = 4;
    sbit  SEVEONPEND_bit at SCB_SCR.B4;

sfr far unsigned long   volatile SCB_CCR              absolute 0xE000ED14;
    const register unsigned short int NONBASETHRDENA = 0;
    sbit  NONBASETHRDENA_bit at SCB_CCR.B0;
    const register unsigned short int USERSETMPEND = 1;
    sbit  USERSETMPEND_bit at SCB_CCR.B1;
    const register unsigned short int UNALIGN__TRP = 3;
    sbit  UNALIGN__TRP_bit at SCB_CCR.B3;
    const register unsigned short int DIV_0_TRP = 4;
    sbit  DIV_0_TRP_bit at SCB_CCR.B4;
    const register unsigned short int BFHFNMIGN = 8;
    sbit  BFHFNMIGN_bit at SCB_CCR.B8;
    const register unsigned short int STKALIGN = 9;
    sbit  STKALIGN_bit at SCB_CCR.B9;

sfr far unsigned long   volatile SCB_SHPR2            absolute 0xE000ED1C;
    sbit  PRI_110_SCB_SHPR2_bit at SCB_SHPR2.B24;
    sbit  PRI_111_SCB_SHPR2_bit at SCB_SHPR2.B25;
    sbit  PRI_112_SCB_SHPR2_bit at SCB_SHPR2.B26;
    sbit  PRI_113_SCB_SHPR2_bit at SCB_SHPR2.B27;
    sbit  PRI_114_SCB_SHPR2_bit at SCB_SHPR2.B28;
    sbit  PRI_115_SCB_SHPR2_bit at SCB_SHPR2.B29;
    sbit  PRI_116_SCB_SHPR2_bit at SCB_SHPR2.B30;
    sbit  PRI_117_SCB_SHPR2_bit at SCB_SHPR2.B31;

sfr far unsigned long   volatile SCB_SHPR3            absolute 0xE000ED20;
    sbit  PRI_140_SCB_SHPR3_bit at SCB_SHPR3.B16;
    sbit  PRI_141_SCB_SHPR3_bit at SCB_SHPR3.B17;
    sbit  PRI_142_SCB_SHPR3_bit at SCB_SHPR3.B18;
    sbit  PRI_143_SCB_SHPR3_bit at SCB_SHPR3.B19;
    sbit  PRI_144_SCB_SHPR3_bit at SCB_SHPR3.B20;
    sbit  PRI_145_SCB_SHPR3_bit at SCB_SHPR3.B21;
    sbit  PRI_146_SCB_SHPR3_bit at SCB_SHPR3.B22;
    sbit  PRI_147_SCB_SHPR3_bit at SCB_SHPR3.B23;
    sbit  PRI_150_SCB_SHPR3_bit at SCB_SHPR3.B24;
    sbit  PRI_151_SCB_SHPR3_bit at SCB_SHPR3.B25;
    sbit  PRI_152_SCB_SHPR3_bit at SCB_SHPR3.B26;
    sbit  PRI_153_SCB_SHPR3_bit at SCB_SHPR3.B27;
    sbit  PRI_154_SCB_SHPR3_bit at SCB_SHPR3.B28;
    sbit  PRI_155_SCB_SHPR3_bit at SCB_SHPR3.B29;
    sbit  PRI_156_SCB_SHPR3_bit at SCB_SHPR3.B30;
    sbit  PRI_157_SCB_SHPR3_bit at SCB_SHPR3.B31;

sfr unsigned long   volatile VREFBUF_CSR          absolute 0x40010030;
    const register unsigned short int ENVR = 0;
    sbit  ENVR_bit at VREFBUF_CSR.B0;
    const register unsigned short int HIZ = 1;
    sbit  HIZ_bit at VREFBUF_CSR.B1;
    const register unsigned short int VRR = 3;
    sbit  VRR_bit at VREFBUF_CSR.B3;
    const register unsigned short int VRS0 = 4;
    sbit  VRS0_bit at VREFBUF_CSR.B4;
    const register unsigned short int VRS1 = 5;
    sbit  VRS1_bit at VREFBUF_CSR.B5;
    const register unsigned short int VRS2 = 6;
    sbit  VRS2_bit at VREFBUF_CSR.B6;

sfr unsigned long   volatile VREFBUF_CCR          absolute 0x40010034;
    const register unsigned short int TRIM0 = 0;
    sbit  TRIM0_bit at VREFBUF_CCR.B0;
    const register unsigned short int TRIM1 = 1;
    sbit  TRIM1_bit at VREFBUF_CCR.B1;
    const register unsigned short int TRIM2 = 2;
    sbit  TRIM2_bit at VREFBUF_CCR.B2;
    const register unsigned short int TRIM3 = 3;
    sbit  TRIM3_bit at VREFBUF_CCR.B3;
    const register unsigned short int TRIM4 = 4;
    sbit  TRIM4_bit at VREFBUF_CCR.B4;
    const register unsigned short int TRIM5 = 5;
    sbit  TRIM5_bit at VREFBUF_CCR.B5;

sfr unsigned long   volatile DBG_IDCODE           absolute 0x40015800;
    const register unsigned short int DEV_ID0 = 0;
    sbit  DEV_ID0_bit at DBG_IDCODE.B0;
    const register unsigned short int DEV_ID1 = 1;
    sbit  DEV_ID1_bit at DBG_IDCODE.B1;
    const register unsigned short int DEV_ID2 = 2;
    sbit  DEV_ID2_bit at DBG_IDCODE.B2;
    const register unsigned short int DEV_ID3 = 3;
    sbit  DEV_ID3_bit at DBG_IDCODE.B3;
    const register unsigned short int DEV_ID4 = 4;
    sbit  DEV_ID4_bit at DBG_IDCODE.B4;
    const register unsigned short int DEV_ID5 = 5;
    sbit  DEV_ID5_bit at DBG_IDCODE.B5;
    const register unsigned short int DEV_ID6 = 6;
    sbit  DEV_ID6_bit at DBG_IDCODE.B6;
    const register unsigned short int DEV_ID7 = 7;
    sbit  DEV_ID7_bit at DBG_IDCODE.B7;
    const register unsigned short int DEV_ID8 = 8;
    sbit  DEV_ID8_bit at DBG_IDCODE.B8;
    const register unsigned short int DEV_ID9 = 9;
    sbit  DEV_ID9_bit at DBG_IDCODE.B9;
    const register unsigned short int DEV_ID10 = 10;
    sbit  DEV_ID10_bit at DBG_IDCODE.B10;
    const register unsigned short int DEV_ID11 = 11;
    sbit  DEV_ID11_bit at DBG_IDCODE.B11;
    const register unsigned short int REV_ID0 = 16;
    sbit  REV_ID0_bit at DBG_IDCODE.B16;
    const register unsigned short int REV_ID1 = 17;
    sbit  REV_ID1_bit at DBG_IDCODE.B17;
    const register unsigned short int REV_ID2 = 18;
    sbit  REV_ID2_bit at DBG_IDCODE.B18;
    const register unsigned short int REV_ID3 = 19;
    sbit  REV_ID3_bit at DBG_IDCODE.B19;
    const register unsigned short int REV_ID4 = 20;
    sbit  REV_ID4_bit at DBG_IDCODE.B20;
    const register unsigned short int REV_ID5 = 21;
    sbit  REV_ID5_bit at DBG_IDCODE.B21;
    const register unsigned short int REV_ID6 = 22;
    sbit  REV_ID6_bit at DBG_IDCODE.B22;
    const register unsigned short int REV_ID7 = 23;
    sbit  REV_ID7_bit at DBG_IDCODE.B23;
    const register unsigned short int REV_ID8 = 24;
    sbit  REV_ID8_bit at DBG_IDCODE.B24;
    const register unsigned short int REV_ID9 = 25;
    sbit  REV_ID9_bit at DBG_IDCODE.B25;
    const register unsigned short int REV_ID10 = 26;
    sbit  REV_ID10_bit at DBG_IDCODE.B26;
    const register unsigned short int REV_ID11 = 27;
    sbit  REV_ID11_bit at DBG_IDCODE.B27;
    const register unsigned short int REV_ID12 = 28;
    sbit  REV_ID12_bit at DBG_IDCODE.B28;
    const register unsigned short int REV_ID13 = 29;
    sbit  REV_ID13_bit at DBG_IDCODE.B29;
    const register unsigned short int REV_ID14 = 30;
    sbit  REV_ID14_bit at DBG_IDCODE.B30;
    const register unsigned short int REV_ID15 = 31;
    sbit  REV_ID15_bit at DBG_IDCODE.B31;

sfr unsigned long   volatile DBG_CR               absolute 0x40015804;
    const register unsigned short int DBG_STOP = 1;
    sbit  DBG_STOP_bit at DBG_CR.B1;
    const register unsigned short int DBG_STANDBY = 2;
    sbit  DBG_STANDBY_bit at DBG_CR.B2;

sfr unsigned long   volatile DBG_APB_FZ1          absolute 0x40015808;
    const register unsigned short int DBG_TIM2_STOP = 0;
    sbit  DBG_TIM2_STOP_bit at DBG_APB_FZ1.B0;
    const register unsigned short int DBG_TIM3_STOP = 1;
    sbit  DBG_TIM3_STOP_bit at DBG_APB_FZ1.B1;
    const register unsigned short int DBG_RTC_STOP = 10;
    sbit  DBG_RTC_STOP_bit at DBG_APB_FZ1.B10;
    const register unsigned short int DBG_WWDG_STOP = 11;
    sbit  DBG_WWDG_STOP_bit at DBG_APB_FZ1.B11;
    const register unsigned short int DBG_IWDG_STOP = 12;
    sbit  DBG_IWDG_STOP_bit at DBG_APB_FZ1.B12;
    const register unsigned short int DBG_I2C1_STOP = 21;
    sbit  DBG_I2C1_STOP_bit at DBG_APB_FZ1.B21;
    const register unsigned short int DBG_LPTIM2_STOP = 30;
    sbit  DBG_LPTIM2_STOP_bit at DBG_APB_FZ1.B30;
    const register unsigned short int DBG_LPTIM1_STOP = 31;
    sbit  DBG_LPTIM1_STOP_bit at DBG_APB_FZ1.B31;

sfr unsigned long   volatile DBG_APB_FZ2          absolute 0x4001580C;
    const register unsigned short int DBG_TIM1_STOP = 11;
    sbit  DBG_TIM1_STOP_bit at DBG_APB_FZ2.B11;
    const register unsigned short int DBG_TIM14_STOP = 15;
    sbit  DBG_TIM14_STOP_bit at DBG_APB_FZ2.B15;
    const register unsigned short int DBG_TIM16_STOP = 17;
    sbit  DBG_TIM16_STOP_bit at DBG_APB_FZ2.B17;
    const register unsigned short int DBG_TIM17_STOP = 18;
    sbit  DBG_TIM17_STOP_bit at DBG_APB_FZ2.B18;

sfr far unsigned long   volatile NVIC_STIR_STIR       absolute 0xE000EF00;
    const register unsigned short int INTID0 = 0;
    sbit  INTID0_bit at NVIC_STIR_STIR.B0;
    const register unsigned short int INTID1 = 1;
    sbit  INTID1_bit at NVIC_STIR_STIR.B1;
    const register unsigned short int INTID2 = 2;
    sbit  INTID2_bit at NVIC_STIR_STIR.B2;
    const register unsigned short int INTID3 = 3;
    sbit  INTID3_bit at NVIC_STIR_STIR.B3;
    const register unsigned short int INTID4 = 4;
    sbit  INTID4_bit at NVIC_STIR_STIR.B4;
    const register unsigned short int INTID5 = 5;
    sbit  INTID5_bit at NVIC_STIR_STIR.B5;
    const register unsigned short int INTID6 = 6;
    sbit  INTID6_bit at NVIC_STIR_STIR.B6;
    const register unsigned short int INTID7 = 7;
    sbit  INTID7_bit at NVIC_STIR_STIR.B7;
    const register unsigned short int INTID8 = 8;
    sbit  INTID8_bit at NVIC_STIR_STIR.B8;

sfr far unsigned long   volatile SCB_ACTRL_ACTRL      absolute 0xE000E008;
    const register unsigned short int DISMCYCINT = 0;
    sbit  DISMCYCINT_bit at SCB_ACTRL_ACTRL.B0;
    const register unsigned short int DISDEFWBUF = 1;
    sbit  DISDEFWBUF_bit at SCB_ACTRL_ACTRL.B1;
    const register unsigned short int DISFOLD = 2;
    sbit  DISFOLD_bit at SCB_ACTRL_ACTRL.B2;
    const register unsigned short int DISFPCA = 8;
    sbit  DISFPCA_bit at SCB_ACTRL_ACTRL.B8;
    const register unsigned short int DISOOFP = 9;
    sbit  DISOOFP_bit at SCB_ACTRL_ACTRL.B9;

sfr far unsigned long   volatile FPU_CPACR_CPACR      absolute 0xE000ED88;
    const register unsigned short int CP0 = 20;
    sbit  CP0_bit at FPU_CPACR_CPACR.B20;
    const register unsigned short int CP1 = 21;
    sbit  CP1_bit at FPU_CPACR_CPACR.B21;
    const register unsigned short int CP2 = 22;
    sbit  CP2_bit at FPU_CPACR_CPACR.B22;
    const register unsigned short int CP3 = 23;
    sbit  CP3_bit at FPU_CPACR_CPACR.B23;

sfr far unsigned long   volatile FPU_FPCCR            absolute 0xE000EF34;
    const register unsigned short int LSPACT = 0;
    sbit  LSPACT_bit at FPU_FPCCR.B0;
    const register unsigned short int USER = 1;
    sbit  USER_bit at FPU_FPCCR.B1;
    const register unsigned short int THREAD = 3;
    sbit  THREAD_bit at FPU_FPCCR.B3;
    const register unsigned short int HFRDY = 4;
    sbit  HFRDY_bit at FPU_FPCCR.B4;
    const register unsigned short int MMRDY = 5;
    sbit  MMRDY_bit at FPU_FPCCR.B5;
    const register unsigned short int BFRDY = 6;
    sbit  BFRDY_bit at FPU_FPCCR.B6;
    const register unsigned short int MONRDY = 8;
    sbit  MONRDY_bit at FPU_FPCCR.B8;
    const register unsigned short int LSPEN = 30;
    sbit  LSPEN_bit at FPU_FPCCR.B30;
    const register unsigned short int ASPEN = 31;
    sbit  ASPEN_bit at FPU_FPCCR.B31;

sfr far unsigned long   volatile FPU_FPCAR            absolute 0xE000EF38;
    const register unsigned short int ADDRESS0 = 3;
    sbit  ADDRESS0_bit at FPU_FPCAR.B3;
    const register unsigned short int ADDRESS1 = 4;
    sbit  ADDRESS1_bit at FPU_FPCAR.B4;
    const register unsigned short int ADDRESS2 = 5;
    sbit  ADDRESS2_bit at FPU_FPCAR.B5;
    const register unsigned short int ADDRESS3 = 6;
    sbit  ADDRESS3_bit at FPU_FPCAR.B6;
    const register unsigned short int ADDRESS4 = 7;
    sbit  ADDRESS4_bit at FPU_FPCAR.B7;
    const register unsigned short int ADDRESS5 = 8;
    sbit  ADDRESS5_bit at FPU_FPCAR.B8;
    const register unsigned short int ADDRESS6 = 9;
    sbit  ADDRESS6_bit at FPU_FPCAR.B9;
    const register unsigned short int ADDRESS7 = 10;
    sbit  ADDRESS7_bit at FPU_FPCAR.B10;
    const register unsigned short int ADDRESS8 = 11;
    sbit  ADDRESS8_bit at FPU_FPCAR.B11;
    const register unsigned short int ADDRESS9 = 12;
    sbit  ADDRESS9_bit at FPU_FPCAR.B12;
    const register unsigned short int ADDRESS10 = 13;
    sbit  ADDRESS10_bit at FPU_FPCAR.B13;
    const register unsigned short int ADDRESS11 = 14;
    sbit  ADDRESS11_bit at FPU_FPCAR.B14;
    const register unsigned short int ADDRESS12 = 15;
    sbit  ADDRESS12_bit at FPU_FPCAR.B15;
    const register unsigned short int ADDRESS13 = 16;
    sbit  ADDRESS13_bit at FPU_FPCAR.B16;
    const register unsigned short int ADDRESS14 = 17;
    sbit  ADDRESS14_bit at FPU_FPCAR.B17;
    const register unsigned short int ADDRESS15 = 18;
    sbit  ADDRESS15_bit at FPU_FPCAR.B18;
    const register unsigned short int ADDRESS16 = 19;
    sbit  ADDRESS16_bit at FPU_FPCAR.B19;
    const register unsigned short int ADDRESS17 = 20;
    sbit  ADDRESS17_bit at FPU_FPCAR.B20;
    const register unsigned short int ADDRESS18 = 21;
    sbit  ADDRESS18_bit at FPU_FPCAR.B21;
    const register unsigned short int ADDRESS19 = 22;
    sbit  ADDRESS19_bit at FPU_FPCAR.B22;
    const register unsigned short int ADDRESS20 = 23;
    sbit  ADDRESS20_bit at FPU_FPCAR.B23;
    const register unsigned short int ADDRESS21 = 24;
    sbit  ADDRESS21_bit at FPU_FPCAR.B24;
    const register unsigned short int ADDRESS22 = 25;
    sbit  ADDRESS22_bit at FPU_FPCAR.B25;
    const register unsigned short int ADDRESS23 = 26;
    sbit  ADDRESS23_bit at FPU_FPCAR.B26;
    const register unsigned short int ADDRESS24 = 27;
    sbit  ADDRESS24_bit at FPU_FPCAR.B27;
    const register unsigned short int ADDRESS25 = 28;
    sbit  ADDRESS25_bit at FPU_FPCAR.B28;
    const register unsigned short int ADDRESS26 = 29;
    sbit  ADDRESS26_bit at FPU_FPCAR.B29;
    const register unsigned short int ADDRESS27 = 30;
    sbit  ADDRESS27_bit at FPU_FPCAR.B30;
    const register unsigned short int ADDRESS28 = 31;
    sbit  ADDRESS28_bit at FPU_FPCAR.B31;

sfr far unsigned long   volatile FPU_FPSCR            absolute 0xE000EF3C;
    const register unsigned short int IOC = 0;
    sbit  IOC_bit at FPU_FPSCR.B0;
    const register unsigned short int DZC = 1;
    sbit  DZC_bit at FPU_FPSCR.B1;
    const register unsigned short int OFC = 2;
    sbit  OFC_bit at FPU_FPSCR.B2;
    const register unsigned short int UFC = 3;
    sbit  UFC_bit at FPU_FPSCR.B3;
    const register unsigned short int IXC = 4;
    sbit  IXC_bit at FPU_FPSCR.B4;
    const register unsigned short int IDC = 7;
    sbit  IDC_bit at FPU_FPSCR.B7;
    const register unsigned short int RMode0 = 22;
    sbit  RMode0_bit at FPU_FPSCR.B22;
    const register unsigned short int RMode1 = 23;
    sbit  RMode1_bit at FPU_FPSCR.B23;
    const register unsigned short int FZ = 24;
    sbit  FZ_bit at FPU_FPSCR.B24;
    const register unsigned short int DN = 25;
    sbit  DN_bit at FPU_FPSCR.B25;
    const register unsigned short int AHP = 26;
    sbit  AHP_bit at FPU_FPSCR.B26;
    const register unsigned short int V = 28;
    sbit  V_bit at FPU_FPSCR.B28;
    sbit  C_FPU_FPSCR_bit at FPU_FPSCR.B29;
    const register unsigned short int Z = 30;
    sbit  Z_bit at FPU_FPSCR.B30;
    const register unsigned short int N = 31;
    sbit  N_bit at FPU_FPSCR.B31;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE0 absolute 0x40010100;
    const register unsigned short int WWDG = 0;
    sbit  WWDG_bit at SYSCFG_ITLINE_ITLINE0.B0;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE1 absolute 0x40010104;
    const register unsigned short int PVDOUT = 0;
    sbit  PVDOUT_bit at SYSCFG_ITLINE_ITLINE1.B0;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE2 absolute 0x40010108;
    const register unsigned short int TAMP = 0;
    sbit  TAMP_bit at SYSCFG_ITLINE_ITLINE2.B0;
    const register unsigned short int RTC = 1;
    sbit  RTC_bit at SYSCFG_ITLINE_ITLINE2.B1;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE3 absolute 0x4001010C;
    const register unsigned short int FLASH_ITF = 0;
    sbit  FLASH_ITF_bit at SYSCFG_ITLINE_ITLINE3.B0;
    const register unsigned short int FLASH_ECC = 1;
    sbit  FLASH_ECC_bit at SYSCFG_ITLINE_ITLINE3.B1;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE4 absolute 0x40010110;
    const register unsigned short int RCC = 0;
    sbit  RCC_bit at SYSCFG_ITLINE_ITLINE4.B0;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE5 absolute 0x40010114;
    const register unsigned short int EXTI0 = 0;
    sbit  EXTI0_bit at SYSCFG_ITLINE_ITLINE5.B0;
    const register unsigned short int EXTI1 = 1;
    sbit  EXTI1_bit at SYSCFG_ITLINE_ITLINE5.B1;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE6 absolute 0x40010118;
    const register unsigned short int EXTI2 = 0;
    sbit  EXTI2_bit at SYSCFG_ITLINE_ITLINE6.B0;
    const register unsigned short int EXTI3 = 1;
    sbit  EXTI3_bit at SYSCFG_ITLINE_ITLINE6.B1;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE7 absolute 0x4001011C;
    const register unsigned short int EXTI4 = 0;
    sbit  EXTI4_bit at SYSCFG_ITLINE_ITLINE7.B0;
    const register unsigned short int EXTI5 = 1;
    sbit  EXTI5_bit at SYSCFG_ITLINE_ITLINE7.B1;
    const register unsigned short int EXTI6 = 2;
    sbit  EXTI6_bit at SYSCFG_ITLINE_ITLINE7.B2;
    const register unsigned short int EXTI7 = 3;
    sbit  EXTI7_bit at SYSCFG_ITLINE_ITLINE7.B3;
    const register unsigned short int EXTI8 = 4;
    sbit  EXTI8_bit at SYSCFG_ITLINE_ITLINE7.B4;
    const register unsigned short int EXTI9 = 5;
    sbit  EXTI9_bit at SYSCFG_ITLINE_ITLINE7.B5;
    const register unsigned short int EXTI10 = 6;
    sbit  EXTI10_bit at SYSCFG_ITLINE_ITLINE7.B6;
    const register unsigned short int EXTI11 = 7;
    sbit  EXTI11_bit at SYSCFG_ITLINE_ITLINE7.B7;
    const register unsigned short int EXTI12 = 8;
    sbit  EXTI12_bit at SYSCFG_ITLINE_ITLINE7.B8;
    const register unsigned short int EXTI13 = 9;
    sbit  EXTI13_bit at SYSCFG_ITLINE_ITLINE7.B9;
    const register unsigned short int EXTI14 = 10;
    sbit  EXTI14_bit at SYSCFG_ITLINE_ITLINE7.B10;
    const register unsigned short int EXTI15 = 11;
    sbit  EXTI15_bit at SYSCFG_ITLINE_ITLINE7.B11;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE9 absolute 0x40010124;
    const register unsigned short int DMA1_CH1 = 0;
    sbit  DMA1_CH1_bit at SYSCFG_ITLINE_ITLINE9.B0;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE10 absolute 0x40010128;
    const register unsigned short int DMA1_CH2 = 0;
    sbit  DMA1_CH2_bit at SYSCFG_ITLINE_ITLINE10.B0;
    const register unsigned short int DMA1_CH3 = 1;
    sbit  DMA1_CH3_bit at SYSCFG_ITLINE_ITLINE10.B1;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE11 absolute 0x4001012C;
    const register unsigned short int DMAMUX = 0;
    sbit  DMAMUX_bit at SYSCFG_ITLINE_ITLINE11.B0;
    const register unsigned short int DMA1_CH4 = 1;
    sbit  DMA1_CH4_bit at SYSCFG_ITLINE_ITLINE11.B1;
    const register unsigned short int DMA1_CH5 = 2;
    sbit  DMA1_CH5_bit at SYSCFG_ITLINE_ITLINE11.B2;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE12 absolute 0x40010130;
    const register unsigned short int ADC = 0;
    sbit  ADC_bit at SYSCFG_ITLINE_ITLINE12.B0;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE13 absolute 0x40010134;
    const register unsigned short int TIM1_CCU = 0;
    sbit  TIM1_CCU_bit at SYSCFG_ITLINE_ITLINE13.B0;
    const register unsigned short int TIM1_TRG = 1;
    sbit  TIM1_TRG_bit at SYSCFG_ITLINE_ITLINE13.B1;
    const register unsigned short int TIM1_UPD = 2;
    sbit  TIM1_UPD_bit at SYSCFG_ITLINE_ITLINE13.B2;
    const register unsigned short int TIM1_BRK = 3;
    sbit  TIM1_BRK_bit at SYSCFG_ITLINE_ITLINE13.B3;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE14 absolute 0x40010138;
    const register unsigned short int TIM1_CC = 0;
    sbit  TIM1_CC_bit at SYSCFG_ITLINE_ITLINE14.B0;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE15 absolute 0x4001013C;
    const register unsigned short int TIM2 = 0;
    sbit  TIM2_bit at SYSCFG_ITLINE_ITLINE15.B0;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE16 absolute 0x40010140;
    const register unsigned short int TIM3 = 0;
    sbit  TIM3_bit at SYSCFG_ITLINE_ITLINE16.B0;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE17 absolute 0x40010144;
    const register unsigned short int LPTIM1 = 2;
    sbit  LPTIM1_bit at SYSCFG_ITLINE_ITLINE17.B2;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE18 absolute 0x40010148;
    const register unsigned short int LPTIM2 = 1;
    sbit  LPTIM2_bit at SYSCFG_ITLINE_ITLINE18.B1;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE19 absolute 0x4001014C;
    const register unsigned short int TIM14 = 0;
    sbit  TIM14_bit at SYSCFG_ITLINE_ITLINE19.B0;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE21 absolute 0x40010154;
    const register unsigned short int TIM16 = 0;
    sbit  TIM16_bit at SYSCFG_ITLINE_ITLINE21.B0;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE22 absolute 0x40010158;
    const register unsigned short int TIM17 = 0;
    sbit  TIM17_bit at SYSCFG_ITLINE_ITLINE22.B0;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE23 absolute 0x4001015C;
    const register unsigned short int I2C1 = 0;
    sbit  I2C1_bit at SYSCFG_ITLINE_ITLINE23.B0;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE24 absolute 0x40010160;
    const register unsigned short int I2C2 = 0;
    sbit  I2C2_bit at SYSCFG_ITLINE_ITLINE24.B0;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE25 absolute 0x40010164;
    const register unsigned short int SPI1 = 0;
    sbit  SPI1_bit at SYSCFG_ITLINE_ITLINE25.B0;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE26 absolute 0x40010168;
    const register unsigned short int SPI2 = 0;
    sbit  SPI2_bit at SYSCFG_ITLINE_ITLINE26.B0;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE27 absolute 0x4001016C;
    const register unsigned short int USART1 = 0;
    sbit  USART1_bit at SYSCFG_ITLINE_ITLINE27.B0;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE28 absolute 0x40010170;
    const register unsigned short int USART2 = 0;
    sbit  USART2_bit at SYSCFG_ITLINE_ITLINE28.B0;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE29 absolute 0x40010174;
    const register unsigned short int USART5 = 2;
    sbit  USART5_bit at SYSCFG_ITLINE_ITLINE29.B2;

sfr unsigned long   volatile SYSCFG_ITLINE_ITLINE31 absolute 0x4001017C;
    const register unsigned short int RNG = 0;
    sbit  RNG_bit at SYSCFG_ITLINE_ITLINE31.B0;
    const register unsigned short int AES = 1;
    sbit  AES_bit at SYSCFG_ITLINE_ITLINE31.B1;


 typedef struct tagIWDG_KRBITS {
  union {
    struct {
      unsigned KEY : 16;
      unsigned : 16;
    };
  };
} typeIWDG_KRBITS;
sfr volatile typeIWDG_KRBITS IWDG_KRbits absolute 0x40003000;

 typedef struct tagIWDG_PRBITS {
  union {
    struct {
      unsigned PR : 3;
      unsigned : 29;
    };
  };
} typeIWDG_PRBITS;
sfr volatile typeIWDG_PRBITS IWDG_PRbits absolute 0x40003004;

 typedef struct tagIWDG_RLRBITS {
  union {
    struct {
      unsigned RL : 12;
      unsigned : 20;
    };
  };
} typeIWDG_RLRBITS;
sfr volatile typeIWDG_RLRBITS IWDG_RLRbits absolute 0x40003008;

 typedef struct tagIWDG_SRBITS {
  union {
    struct {
      unsigned PVU : 1;
      unsigned RVU : 1;
      unsigned WVU : 1;
      unsigned : 29;
    };
  };
} typeIWDG_SRBITS;
sfr volatile typeIWDG_SRBITS IWDG_SRbits absolute 0x4000300C;

 typedef struct tagIWDG_WINRBITS {
  union {
    struct {
      unsigned WIN : 12;
      unsigned : 20;
    };
  };
} typeIWDG_WINRBITS;
sfr volatile typeIWDG_WINRBITS IWDG_WINRbits absolute 0x40003010;

 typedef struct tagWWDG_CRBITS {
  union {
    struct {
      unsigned T : 7;
      unsigned WDGA : 1;
      unsigned : 24;
    };
  };
} typeWWDG_CRBITS;
sfr volatile typeWWDG_CRBITS WWDG_CRbits absolute 0x40002C00;

 typedef struct tagWWDG_CFRBITS {
  union {
    struct {
      unsigned W : 7;
      unsigned : 2;
      unsigned EWI : 1;
      unsigned : 1;
      unsigned WDGTB : 3;
      unsigned : 18;
    };
  };
} typeWWDG_CFRBITS;
sfr volatile typeWWDG_CFRBITS WWDG_CFRbits absolute 0x40002C04;

 typedef struct tagWWDG_SRBITS {
  union {
    struct {
      unsigned EWIF : 1;
      unsigned : 31;
    };
  };
} typeWWDG_SRBITS;
sfr volatile typeWWDG_SRBITS WWDG_SRbits absolute 0x40002C08;

 typedef struct tagFLASH_ACRBITS {
  union {
    struct {
      unsigned LATENCY : 3;
      unsigned : 5;
      unsigned PRFTEN : 1;
      unsigned ICEN : 1;
      unsigned : 1;
      unsigned ICRST : 1;
      unsigned : 4;
      unsigned EMPTY_ : 1;
      unsigned : 1;
      unsigned DBG_SWEN : 1;
      unsigned : 13;
    };
  };
} typeFLASH_ACRBITS;
sfr volatile typeFLASH_ACRBITS FLASH_ACRbits absolute 0x40022000;

 typedef struct tagFLASH_KEYRBITS {
  union {
    struct {
      unsigned KEYR : 32;
    };
  };
} typeFLASH_KEYRBITS;
sfr volatile typeFLASH_KEYRBITS FLASH_KEYRbits absolute 0x40022008;

 typedef struct tagFLASH_OPTKEYRBITS {
  union {
    struct {
      unsigned OPTKEYR : 32;
    };
  };
} typeFLASH_OPTKEYRBITS;
sfr volatile typeFLASH_OPTKEYRBITS FLASH_OPTKEYRbits absolute 0x4002200C;

 typedef struct tagFLASH_SRBITS {
  union {
    struct {
      unsigned EOP : 1;
      unsigned OPERR : 1;
      unsigned : 1;
      unsigned PROGERR : 1;
      unsigned WRPERR : 1;
      unsigned PGAERR : 1;
      unsigned SIZERR : 1;
      unsigned PGSERR : 1;
      unsigned MISERR : 1;
      unsigned FASTERR : 1;
      unsigned : 4;
      unsigned RDERR : 1;
      unsigned OPTVERR : 1;
      unsigned BSY : 1;
      unsigned : 1;
      unsigned CFGBSY : 1;
      unsigned : 13;
    };
  };
} typeFLASH_SRBITS;
sfr volatile typeFLASH_SRBITS FLASH_SRbits absolute 0x40022010;

 typedef struct tagFLASH_CRBITS {
  union {
    struct {
      unsigned PG : 1;
      unsigned PER : 1;
      unsigned MER : 1;
      unsigned PNB : 6;
      unsigned : 7;
      unsigned STRT : 1;
      unsigned OPTSTRT : 1;
      unsigned FSTPG : 1;
      unsigned : 5;
      unsigned EOPIE : 1;
      unsigned ERRIE : 1;
      unsigned RDERRIE : 1;
      unsigned OBL_LAUNCH : 1;
      unsigned SEC_PROT : 1;
      unsigned : 1;
      unsigned OPTLOCK : 1;
      unsigned LOCK_ : 1;
    };
  };
} typeFLASH_CRBITS;
sfr volatile typeFLASH_CRBITS FLASH_CRbits absolute 0x40022014;

 typedef struct tagFLASH_ECCRBITS {
  union {
    struct {
      unsigned ADDR_ECC : 14;
      unsigned : 6;
      unsigned SYSF_ECC : 1;
      unsigned : 3;
      unsigned ECCIE : 1;
      unsigned : 5;
      unsigned ECCC : 1;
      unsigned ECCD : 1;
    };
  };
} typeFLASH_ECCRBITS;
sfr volatile typeFLASH_ECCRBITS FLASH_ECCRbits absolute 0x40022018;

 typedef struct tagFLASH_OPTRBITS {
  union {
    struct {
      unsigned RDP : 8;
      unsigned BOREN : 1;
      unsigned BORF_LEV : 2;
      unsigned BORR_LEV : 2;
      unsigned nRST_STOP : 1;
      unsigned nRST_STDBY : 1;
      unsigned nRSTS_HDW : 1;
      unsigned IDWG_SW : 1;
      unsigned IWDG_STOP : 1;
      unsigned IWDG_STDBY : 1;
      unsigned WWDG_SW : 1;
      unsigned : 2;
      unsigned RAM_PARITY_CHECK : 1;
      unsigned : 1;
      unsigned nBOOT_SEL : 1;
      unsigned nBOOT1 : 1;
      unsigned nBOOT0 : 1;
      unsigned NRST_MODE : 2;
      unsigned IRHEN : 1;
      unsigned : 2;
    };
  };
} typeFLASH_OPTRBITS;
sfr volatile typeFLASH_OPTRBITS FLASH_OPTRbits absolute 0x40022020;

 typedef struct tagFLASH_PCROP1ASRBITS {
  union {
    struct {
      unsigned PCROP1A_STRT : 8;
      unsigned : 24;
    };
  };
} typeFLASH_PCROP1ASRBITS;
sfr volatile typeFLASH_PCROP1ASRBITS FLASH_PCROP1ASRbits absolute 0x40022024;

 typedef struct tagFLASH_PCROP1AERBITS {
  union {
    struct {
      unsigned PCROP1A_END : 8;
      unsigned : 23;
      unsigned PCROP_RDP : 1;
    };
  };
} typeFLASH_PCROP1AERBITS;
sfr volatile typeFLASH_PCROP1AERBITS FLASH_PCROP1AERbits absolute 0x40022028;

 typedef struct tagFLASH_WRP1ARBITS {
  union {
    struct {
      unsigned WRP1A_STRT : 6;
      unsigned : 10;
      unsigned WRP1A_END : 6;
      unsigned : 10;
    };
  };
} typeFLASH_WRP1ARBITS;
sfr volatile typeFLASH_WRP1ARBITS FLASH_WRP1ARbits absolute 0x4002202C;

 typedef struct tagFLASH_WRP1BRBITS {
  union {
    struct {
      unsigned WRP1B_STRT : 6;
      unsigned : 10;
      unsigned WRP1B_END : 6;
      unsigned : 10;
    };
  };
} typeFLASH_WRP1BRBITS;
sfr volatile typeFLASH_WRP1BRBITS FLASH_WRP1BRbits absolute 0x40022030;

 typedef struct tagFLASH_PCROP1BSRBITS {
  union {
    struct {
      unsigned PCROP1B_STRT : 8;
      unsigned : 24;
    };
  };
} typeFLASH_PCROP1BSRBITS;
sfr volatile typeFLASH_PCROP1BSRBITS FLASH_PCROP1BSRbits absolute 0x40022034;

 typedef struct tagFLASH_PCROP1BERBITS {
  union {
    struct {
      unsigned PCROP1B_END : 8;
      unsigned : 24;
    };
  };
} typeFLASH_PCROP1BERBITS;
sfr volatile typeFLASH_PCROP1BERBITS FLASH_PCROP1BERbits absolute 0x40022038;

 typedef struct tagFLASH_SECRBITS {
  union {
    struct {
      unsigned SEC_SIZE : 7;
      unsigned : 9;
      unsigned BOOT_LOCK : 1;
      unsigned : 15;
    };
  };
} typeFLASH_SECRBITS;
sfr volatile typeFLASH_SECRBITS FLASH_SECRbits absolute 0x40022080;

 typedef struct tagRCC_CRBITS {
  union {
    struct {
      unsigned : 8;
      unsigned HSION : 1;
      unsigned HSIKERON : 1;
      unsigned HSIRDY : 1;
      unsigned HSIDIV : 3;
      unsigned : 2;
      unsigned HSEON : 1;
      unsigned HSERDY : 1;
      unsigned HSEBYP : 1;
      unsigned CSSON : 1;
      unsigned : 4;
      unsigned PLLON : 1;
      unsigned PLLRDY : 1;
      unsigned : 6;
    };
  };
} typeRCC_CRBITS;
sfr volatile typeRCC_CRBITS RCC_CRbits absolute 0x40021000;

 typedef struct tagRCC_ICSCRBITS {
  union {
    struct {
      unsigned HSICAL : 8;
      unsigned HSITRIM : 7;
      unsigned : 17;
    };
  };
} typeRCC_ICSCRBITS;
sfr volatile typeRCC_ICSCRBITS RCC_ICSCRbits absolute 0x40021004;

 typedef struct tagRCC_CFGRBITS {
  union {
    struct {
      unsigned SW : 3;
      unsigned SWS : 3;
      unsigned : 2;
      unsigned HPRE : 4;
      unsigned PPRE : 3;
      unsigned : 9;
      unsigned MCOSEL : 3;
      unsigned : 1;
      unsigned MCOPRE : 3;
      unsigned : 1;
    };
  };
} typeRCC_CFGRBITS;
sfr volatile typeRCC_CFGRBITS RCC_CFGRbits absolute 0x40021008;

 typedef struct tagRCC_PLLSYSCFGRBITS {
  union {
    struct {
      unsigned PLLSRC : 2;
      unsigned : 2;
      unsigned PLLM : 3;
      unsigned : 1;
      unsigned PLLN : 7;
      unsigned : 1;
      unsigned PLLPEN : 1;
      unsigned PLLP : 5;
      unsigned : 2;
      unsigned PLLQEN : 1;
      unsigned PLLQ : 3;
      unsigned PLLREN : 1;
      unsigned PLLR : 3;
    };
  };
} typeRCC_PLLSYSCFGRBITS;
sfr volatile typeRCC_PLLSYSCFGRBITS RCC_PLLSYSCFGRbits absolute 0x4002100C;

 typedef struct tagRCC_CIERBITS {
  union {
    struct {
      unsigned LSIRDYIE : 1;
      unsigned LSERDYIE : 1;
      unsigned : 1;
      unsigned HSIRDYIE : 1;
      unsigned HSERDYIE : 1;
      unsigned PLLSYSRDYIE : 1;
      unsigned : 26;
    };
  };
} typeRCC_CIERBITS;
sfr volatile typeRCC_CIERBITS RCC_CIERbits absolute 0x40021018;

 typedef struct tagRCC_CIFRBITS {
  union {
    struct {
      unsigned LSIRDYF : 1;
      unsigned LSERDYF : 1;
      unsigned : 1;
      unsigned HSIRDYF : 1;
      unsigned HSERDYF : 1;
      unsigned PLLSYSRDYF : 1;
      unsigned : 2;
      unsigned CSSF : 1;
      unsigned LSECSSF : 1;
      unsigned : 22;
    };
  };
} typeRCC_CIFRBITS;
sfr volatile typeRCC_CIFRBITS RCC_CIFRbits absolute 0x4002101C;

 typedef struct tagRCC_CICRBITS {
  union {
    struct {
      unsigned LSIRDYC : 1;
      unsigned LSERDYC : 1;
      unsigned : 1;
      unsigned HSIRDYC : 1;
      unsigned HSERDYC : 1;
      unsigned PLLSYSRDYC : 1;
      unsigned : 2;
      unsigned CSSC : 1;
      unsigned LSECSSC : 1;
      unsigned : 22;
    };
  };
} typeRCC_CICRBITS;
sfr volatile typeRCC_CICRBITS RCC_CICRbits absolute 0x40021020;

 typedef struct tagRCC_AHBRSTRBITS {
  union {
    struct {
      unsigned DMARST : 1;
      unsigned : 7;
      unsigned FLASHRST : 1;
      unsigned : 3;
      unsigned CRCRST : 1;
      unsigned : 3;
      unsigned AESRST : 1;
      unsigned : 1;
      unsigned RNGRST : 1;
      unsigned : 13;
    };
  };
} typeRCC_AHBRSTRBITS;
sfr volatile typeRCC_AHBRSTRBITS RCC_AHBRSTRbits absolute 0x40021028;

 typedef struct tagRCC_IOPRSTRBITS {
  union {
    struct {
      unsigned IOPARST : 1;
      unsigned IOPBRST : 1;
      unsigned IOPCRST : 1;
      unsigned IOPDRST : 1;
      unsigned : 1;
      unsigned IOPFRST : 1;
      unsigned : 26;
    };
  };
} typeRCC_IOPRSTRBITS;
sfr volatile typeRCC_IOPRSTRBITS RCC_IOPRSTRbits absolute 0x40021024;

 typedef struct tagRCC_APBRSTR1BITS {
  union {
    struct {
      unsigned TIM2RST : 1;
      unsigned TIM3RST : 1;
      unsigned : 12;
      unsigned SPI2RST : 1;
      unsigned : 2;
      unsigned USART2RST : 1;
      unsigned : 2;
      unsigned LPUART1RST : 1;
      unsigned I2C1RST : 1;
      unsigned I2C2RST : 1;
      unsigned : 4;
      unsigned DBGRST : 1;
      unsigned PWRRST : 1;
      unsigned : 1;
      unsigned LPTIM2RST : 1;
      unsigned LPTIM1RST : 1;
    };
  };
} typeRCC_APBRSTR1BITS;
sfr volatile typeRCC_APBRSTR1BITS RCC_APBRSTR1bits absolute 0x4002102C;

 typedef struct tagRCC_APBRSTR2BITS {
  union {
    struct {
      unsigned SYSCFGRST : 1;
      unsigned : 10;
      unsigned TIM1RST : 1;
      unsigned SPI1RST : 1;
      unsigned : 1;
      unsigned USART1RST : 1;
      unsigned TIM14RST : 1;
      unsigned : 1;
      unsigned TIM16RST : 1;
      unsigned TIM17RST : 1;
      unsigned : 1;
      unsigned ADCRST : 1;
      unsigned : 11;
    };
  };
} typeRCC_APBRSTR2BITS;
sfr volatile typeRCC_APBRSTR2BITS RCC_APBRSTR2bits absolute 0x40021030;

 typedef struct tagRCC_IOPENRBITS {
  union {
    struct {
      unsigned IOPAEN : 1;
      unsigned IOPBEN : 1;
      unsigned IOPCEN : 1;
      unsigned IOPDEN : 1;
      unsigned : 1;
      unsigned IOPFEN : 1;
      unsigned : 26;
    };
  };
} typeRCC_IOPENRBITS;
sfr volatile typeRCC_IOPENRBITS RCC_IOPENRbits absolute 0x40021034;

 typedef struct tagRCC_AHBENRBITS {
  union {
    struct {
      unsigned DMAEN : 1;
      unsigned : 7;
      unsigned FLASHEN : 1;
      unsigned : 3;
      unsigned CRCEN : 1;
      unsigned : 3;
      unsigned AESEN : 1;
      unsigned : 1;
      unsigned RNGEN : 1;
      unsigned : 13;
    };
  };
} typeRCC_AHBENRBITS;
sfr volatile typeRCC_AHBENRBITS RCC_AHBENRbits absolute 0x40021038;

 typedef struct tagRCC_APBENR1BITS {
  union {
    struct {
      unsigned TIM2EN : 1;
      unsigned TIM3EN : 1;
      unsigned : 8;
      unsigned RTCAPBEN : 1;
      unsigned WWDGEN : 1;
      unsigned : 2;
      unsigned SPI2EN : 1;
      unsigned : 2;
      unsigned USART2EN : 1;
      unsigned : 2;
      unsigned LPUART1EN : 1;
      unsigned I2C1EN : 1;
      unsigned I2C2EN : 1;
      unsigned : 4;
      unsigned DBGEN : 1;
      unsigned PWREN : 1;
      unsigned : 1;
      unsigned LPTIM2EN : 1;
      unsigned LPTIM1EN : 1;
    };
  };
} typeRCC_APBENR1BITS;
sfr volatile typeRCC_APBENR1BITS RCC_APBENR1bits absolute 0x4002103C;

 typedef struct tagRCC_APBENR2BITS {
  union {
    struct {
      unsigned SYSCFGEN : 1;
      unsigned : 10;
      unsigned TIM1EN : 1;
      unsigned SPI1EN : 1;
      unsigned : 1;
      unsigned USART1EN : 1;
      unsigned TIM14EN : 1;
      unsigned : 1;
      unsigned TIM16EN : 1;
      unsigned TIM17EN : 1;
      unsigned : 1;
      unsigned ADCEN : 1;
      unsigned : 11;
    };
  };
} typeRCC_APBENR2BITS;
sfr volatile typeRCC_APBENR2BITS RCC_APBENR2bits absolute 0x40021040;

 typedef struct tagRCC_IOPSMENRBITS {
  union {
    struct {
      unsigned IOPASMEN : 1;
      unsigned IOPBSMEN : 1;
      unsigned IOPCSMEN : 1;
      unsigned IOPDSMEN : 1;
      unsigned : 1;
      unsigned IOPFSMEN : 1;
      unsigned : 26;
    };
  };
} typeRCC_IOPSMENRBITS;
sfr volatile typeRCC_IOPSMENRBITS RCC_IOPSMENRbits absolute 0x40021044;

 typedef struct tagRCC_AHBSMENRBITS {
  union {
    struct {
      unsigned DMASMEN : 1;
      unsigned : 7;
      unsigned FLASHSMEN : 1;
      unsigned SRAMSMEN : 1;
      unsigned : 2;
      unsigned CRCSMEN : 1;
      unsigned : 3;
      unsigned AESSMEN : 1;
      unsigned : 1;
      unsigned RNGSMEN : 1;
      unsigned : 13;
    };
  };
} typeRCC_AHBSMENRBITS;
sfr volatile typeRCC_AHBSMENRBITS RCC_AHBSMENRbits absolute 0x40021048;

 typedef struct tagRCC_APBSMENR1BITS {
  union {
    struct {
      unsigned TIM2SMEN : 1;
      unsigned TIM3SMEN : 1;
      unsigned : 8;
      unsigned RTCAPBSMEN : 1;
      unsigned WWDGSMEN : 1;
      unsigned : 2;
      unsigned SPI2SMEN : 1;
      unsigned : 2;
      unsigned USART2SMEN : 1;
      unsigned : 2;
      unsigned LPUART1SMEN : 1;
      unsigned I2C1SMEN : 1;
      unsigned I2C2SMEN : 1;
      unsigned : 4;
      unsigned DBGSMEN : 1;
      unsigned PWRSMEN : 1;
      unsigned : 1;
      unsigned LPTIM2SMEN : 1;
      unsigned LPTIM1SMEN : 1;
    };
  };
} typeRCC_APBSMENR1BITS;
sfr volatile typeRCC_APBSMENR1BITS RCC_APBSMENR1bits absolute 0x4002104C;

 typedef struct tagRCC_APBSMENR2BITS {
  union {
    struct {
      unsigned SYSCFGSMEN : 1;
      unsigned : 10;
      unsigned TIM1SMEN : 1;
      unsigned SPI1SMEN : 1;
      unsigned : 1;
      unsigned USART1SMEN : 1;
      unsigned TIM14SMEN : 1;
      unsigned : 1;
      unsigned TIM16SMEN : 1;
      unsigned TIM17SMEN : 1;
      unsigned : 1;
      unsigned ADCSMEN : 1;
      unsigned : 11;
    };
  };
} typeRCC_APBSMENR2BITS;
sfr volatile typeRCC_APBSMENR2BITS RCC_APBSMENR2bits absolute 0x40021050;

 typedef struct tagRCC_CCIPRBITS {
  union {
    struct {
      unsigned USART1SEL : 2;
      unsigned : 8;
      unsigned LPUART1SEL : 2;
      unsigned I2C1SEL : 2;
      unsigned I2S2SEL : 2;
      unsigned : 2;
      unsigned LPTIM1SEL : 2;
      unsigned LPTIM2SEL : 2;
      unsigned TIM1SEL : 1;
      unsigned : 3;
      unsigned RNGSEL : 2;
      unsigned RNGDIV : 2;
      unsigned ADCSEL : 2;
    };
  };
} typeRCC_CCIPRBITS;
sfr volatile typeRCC_CCIPRBITS RCC_CCIPRbits absolute 0x40021054;

 typedef struct tagRCC_BDCRBITS {
  union {
    struct {
      unsigned LSEON : 1;
      unsigned LSERDY : 1;
      unsigned LSEBYP : 1;
      unsigned LSEDRV : 2;
      unsigned LSECSSON : 1;
      unsigned LSECSSD : 1;
      unsigned : 1;
      unsigned RTCSEL : 2;
      unsigned : 5;
      unsigned RTCEN : 1;
      unsigned BDRST : 1;
      unsigned : 7;
      unsigned LSCOEN : 1;
      unsigned LSCOSEL : 1;
      unsigned : 6;
    };
  };
} typeRCC_BDCRBITS;
sfr volatile typeRCC_BDCRBITS RCC_BDCRbits absolute 0x4002105C;

 typedef struct tagRCC_CSRBITS {
  union {
    struct {
      unsigned LSION : 1;
      unsigned LSIRDY : 1;
      unsigned : 21;
      unsigned RMVF : 1;
      unsigned : 1;
      unsigned OBLRSTF : 1;
      unsigned PINRSTF : 1;
      unsigned PWRRSTF : 1;
      unsigned SFTRSTF : 1;
      unsigned IWDGRSTF : 1;
      unsigned WWDGRSTF : 1;
      unsigned LPWRRSTF : 1;
    };
  };
} typeRCC_CSRBITS;
sfr volatile typeRCC_CSRBITS RCC_CSRbits absolute 0x40021060;

 typedef struct tagPWR_CR1BITS {
  union {
    struct {
      unsigned LPMS : 3;
      unsigned FPD_STOP : 1;
      unsigned FPD_LPRUN : 1;
      unsigned FPD_LPSLP : 1;
      unsigned : 2;
      unsigned DBP : 1;
      unsigned VOS : 2;
      unsigned : 3;
      unsigned LPR : 1;
      unsigned : 17;
    };
  };
} typePWR_CR1BITS;
sfr volatile typePWR_CR1BITS PWR_CR1bits absolute 0x40007000;

 typedef struct tagPWR_CR2BITS {
  union {
    struct {
      unsigned PVDE : 1;
      unsigned PVDFT : 3;
      unsigned PVDRT : 3;
      unsigned : 25;
    };
  };
} typePWR_CR2BITS;
sfr volatile typePWR_CR2BITS PWR_CR2bits absolute 0x40007004;

 typedef struct tagPWR_CR3BITS {
  union {
    struct {
      unsigned EWUP1 : 1;
      unsigned EWUP2 : 1;
      unsigned : 1;
      unsigned EWUP4 : 1;
      unsigned EWUP5 : 1;
      unsigned EWUP6 : 1;
      unsigned : 2;
      unsigned RRS : 1;
      unsigned ULPEN : 1;
      unsigned APC : 1;
      unsigned : 4;
      unsigned EIWUL : 1;
      unsigned : 16;
    };
  };
} typePWR_CR3BITS;
sfr volatile typePWR_CR3BITS PWR_CR3bits absolute 0x40007008;

 typedef struct tagPWR_CR4BITS {
  union {
    struct {
      unsigned WP1 : 1;
      unsigned WP2 : 1;
      unsigned : 1;
      unsigned WP4 : 1;
      unsigned WP5 : 1;
      unsigned WP6 : 1;
      unsigned : 2;
      unsigned VBE : 1;
      unsigned VBRS : 1;
      unsigned : 22;
    };
  };
} typePWR_CR4BITS;
sfr volatile typePWR_CR4BITS PWR_CR4bits absolute 0x4000700C;

 typedef struct tagPWR_SR1BITS {
  union {
    struct {
      unsigned WUF1 : 1;
      unsigned WUF2 : 1;
      unsigned : 1;
      unsigned WUF4 : 1;
      unsigned WUF5 : 1;
      unsigned WUF6 : 1;
      unsigned : 2;
      unsigned SBF : 1;
      unsigned : 6;
      unsigned WUFI : 1;
      unsigned : 16;
    };
  };
} typePWR_SR1BITS;
sfr volatile typePWR_SR1BITS PWR_SR1bits absolute 0x40007010;

 typedef struct tagPWR_SR2BITS {
  union {
    struct {
      unsigned : 7;
      unsigned FLASH_RDY : 1;
      unsigned REGLPS : 1;
      unsigned REGLPF : 1;
      unsigned VOSF : 1;
      unsigned PVDO : 1;
      unsigned : 20;
    };
  };
} typePWR_SR2BITS;
sfr volatile typePWR_SR2BITS PWR_SR2bits absolute 0x40007014;

 typedef struct tagPWR_SCRBITS {
  union {
    struct {
      unsigned CWUF1 : 1;
      unsigned CWUF2 : 1;
      unsigned : 1;
      unsigned CWUF4 : 1;
      unsigned CWUF5 : 1;
      unsigned CWUF6 : 1;
      unsigned : 2;
      unsigned CSBF : 1;
      unsigned : 23;
    };
  };
} typePWR_SCRBITS;
sfr volatile typePWR_SCRBITS PWR_SCRbits absolute 0x40007018;

 typedef struct tagPWR_PUCRABITS {
  union {
    struct {
      unsigned PU0 : 1;
      unsigned PU1 : 1;
      unsigned PU2 : 1;
      unsigned PU3 : 1;
      unsigned PU4 : 1;
      unsigned PU5 : 1;
      unsigned PU6 : 1;
      unsigned PU7 : 1;
      unsigned PU8 : 1;
      unsigned PU9 : 1;
      unsigned PU10 : 1;
      unsigned PU11 : 1;
      unsigned PU12 : 1;
      unsigned PU13 : 1;
      unsigned PU14 : 1;
      unsigned PU15 : 1;
      unsigned : 16;
    };
  };
} typePWR_PUCRABITS;
sfr volatile typePWR_PUCRABITS PWR_PUCRAbits absolute 0x40007020;

 typedef struct tagPWR_PDCRABITS {
  union {
    struct {
      unsigned PD0 : 1;
      unsigned PD1 : 1;
      unsigned PD2 : 1;
      unsigned PD3 : 1;
      unsigned PD4 : 1;
      unsigned PD5 : 1;
      unsigned PD6 : 1;
      unsigned PD7 : 1;
      unsigned PD8 : 1;
      unsigned PD9 : 1;
      unsigned PD10 : 1;
      unsigned PD11 : 1;
      unsigned PD12 : 1;
      unsigned PD13 : 1;
      unsigned PD14 : 1;
      unsigned PD15 : 1;
      unsigned : 16;
    };
  };
} typePWR_PDCRABITS;
sfr volatile typePWR_PDCRABITS PWR_PDCRAbits absolute 0x40007024;

 typedef struct tagPWR_PUCRBBITS {
  union {
    struct {
      unsigned PU0 : 1;
      unsigned PU1 : 1;
      unsigned PU2 : 1;
      unsigned PU3 : 1;
      unsigned PU4 : 1;
      unsigned PU5 : 1;
      unsigned PU6 : 1;
      unsigned PU7 : 1;
      unsigned PU8 : 1;
      unsigned PU9 : 1;
      unsigned PU10 : 1;
      unsigned PU11 : 1;
      unsigned PU12 : 1;
      unsigned PU13 : 1;
      unsigned PU14 : 1;
      unsigned PU15 : 1;
      unsigned : 16;
    };
  };
} typePWR_PUCRBBITS;
sfr volatile typePWR_PUCRBBITS PWR_PUCRBbits absolute 0x40007028;

 typedef struct tagPWR_PDCRBBITS {
  union {
    struct {
      unsigned PD0 : 1;
      unsigned PD1 : 1;
      unsigned PD2 : 1;
      unsigned PD3 : 1;
      unsigned PD4 : 1;
      unsigned PD5 : 1;
      unsigned PD6 : 1;
      unsigned PD7 : 1;
      unsigned PD8 : 1;
      unsigned PD9 : 1;
      unsigned PD10 : 1;
      unsigned PD11 : 1;
      unsigned PD12 : 1;
      unsigned PD13 : 1;
      unsigned PD14 : 1;
      unsigned PD15 : 1;
      unsigned : 16;
    };
  };
} typePWR_PDCRBBITS;
sfr volatile typePWR_PDCRBBITS PWR_PDCRBbits absolute 0x4000702C;

 typedef struct tagPWR_PUCRCBITS {
  union {
    struct {
      unsigned : 6;
      unsigned PU6 : 1;
      unsigned PU7 : 1;
      unsigned : 5;
      unsigned PU13 : 1;
      unsigned PU14 : 1;
      unsigned PU15 : 1;
      unsigned : 16;
    };
  };
} typePWR_PUCRCBITS;
sfr volatile typePWR_PUCRCBITS PWR_PUCRCbits absolute 0x40007030;

 typedef struct tagPWR_PDCRCBITS {
  union {
    struct {
      unsigned PD0 : 1;
      unsigned PD1 : 1;
      unsigned PD2 : 1;
      unsigned PD3 : 1;
      unsigned PD4 : 1;
      unsigned PD5 : 1;
      unsigned PD6 : 1;
      unsigned PD7 : 1;
      unsigned PD8 : 1;
      unsigned PD9 : 1;
      unsigned PD10 : 1;
      unsigned PD11 : 1;
      unsigned PD12 : 1;
      unsigned PD13 : 1;
      unsigned PD14 : 1;
      unsigned PD15 : 1;
      unsigned : 16;
    };
  };
} typePWR_PDCRCBITS;
sfr volatile typePWR_PDCRCBITS PWR_PDCRCbits absolute 0x40007034;

 typedef struct tagPWR_PUCRDBITS {
  union {
    struct {
      unsigned PU0 : 1;
      unsigned PU1 : 1;
      unsigned PU2 : 1;
      unsigned PU3 : 1;
      unsigned : 28;
    };
  };
} typePWR_PUCRDBITS;
sfr volatile typePWR_PUCRDBITS PWR_PUCRDbits absolute 0x40007038;

 typedef struct tagPWR_PDCRDBITS {
  union {
    struct {
      unsigned PD0 : 1;
      unsigned PD1 : 1;
      unsigned PD2 : 1;
      unsigned PD3 : 1;
      unsigned PD4 : 1;
      unsigned PD5 : 1;
      unsigned PD6 : 1;
      unsigned : 1;
      unsigned PD8 : 1;
      unsigned PD9 : 1;
      unsigned : 22;
    };
  };
} typePWR_PDCRDBITS;
sfr volatile typePWR_PDCRDBITS PWR_PDCRDbits absolute 0x4000703C;

 typedef struct tagPWR_PUCRFBITS {
  union {
    struct {
      unsigned PU0 : 1;
      unsigned PU1 : 1;
      unsigned PU2 : 1;
      unsigned : 29;
    };
  };
} typePWR_PUCRFBITS;
sfr volatile typePWR_PUCRFBITS PWR_PUCRFbits absolute 0x40007048;

 typedef struct tagPWR_PDCRFBITS {
  union {
    struct {
      unsigned PD0 : 1;
      unsigned PD1 : 1;
      unsigned PD2 : 1;
      unsigned : 29;
    };
  };
} typePWR_PDCRFBITS;
sfr volatile typePWR_PDCRFBITS PWR_PDCRFbits absolute 0x4000704C;

 typedef struct tagDMA_ISRBITS {
  union {
    struct {
      unsigned GIF0 : 1;
      unsigned TCIF1 : 1;
      unsigned HTIF2 : 1;
      unsigned TEIF3 : 1;
      unsigned GIF4 : 1;
      unsigned TCIF5 : 1;
      unsigned HTIF6 : 1;
      unsigned TEIF7 : 1;
      unsigned GIF8 : 1;
      unsigned TCIF9 : 1;
      unsigned HTIF10 : 1;
      unsigned TEIF11 : 1;
      unsigned GIF12 : 1;
      unsigned TCIF13 : 1;
      unsigned HTIF14 : 1;
      unsigned TEIF15 : 1;
      unsigned GIF16 : 1;
      unsigned TCIF17 : 1;
      unsigned HTIF18 : 1;
      unsigned TEIF19 : 1;
      unsigned GIF20 : 1;
      unsigned TCIF21 : 1;
      unsigned HTIF22 : 1;
      unsigned TEIF23 : 1;
      unsigned GIF24 : 1;
      unsigned TCIF25 : 1;
      unsigned HTIF26 : 1;
      unsigned TEIF27 : 1;
      unsigned : 4;
    };
  };
} typeDMA_ISRBITS;
sfr volatile typeDMA_ISRBITS DMA_ISRbits absolute 0x40020000;

 typedef struct tagDMA_IFCRBITS {
  union {
    struct {
      unsigned CGIF0 : 1;
      unsigned CTCIF1 : 1;
      unsigned CHTIF2 : 1;
      unsigned CTEIF3 : 1;
      unsigned CGIF4 : 1;
      unsigned CTCIF5 : 1;
      unsigned CHTIF6 : 1;
      unsigned CTEIF7 : 1;
      unsigned CGIF8 : 1;
      unsigned CTCIF9 : 1;
      unsigned CHTIF10 : 1;
      unsigned CTEIF11 : 1;
      unsigned CGIF12 : 1;
      unsigned CTCIF13 : 1;
      unsigned CHTIF14 : 1;
      unsigned CTEIF15 : 1;
      unsigned CGIF16 : 1;
      unsigned CTCIF17 : 1;
      unsigned CHTIF18 : 1;
      unsigned CTEIF19 : 1;
      unsigned CGIF20 : 1;
      unsigned CTCIF21 : 1;
      unsigned CHTIF22 : 1;
      unsigned CTEIF23 : 1;
      unsigned CGIF24 : 1;
      unsigned CTCIF25 : 1;
      unsigned CHTIF26 : 1;
      unsigned CTEIF27 : 1;
      unsigned : 4;
    };
  };
} typeDMA_IFCRBITS;
sfr volatile typeDMA_IFCRBITS DMA_IFCRbits absolute 0x40020004;

 typedef struct tagDMA_CCR1BITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned TCIE : 1;
      unsigned HTIE : 1;
      unsigned TEIE : 1;
      unsigned DIR_ : 1;
      unsigned CIRC : 1;
      unsigned PINC : 1;
      unsigned MINC : 1;
      unsigned PSIZE : 2;
      unsigned MSIZE : 2;
      unsigned PL : 2;
      unsigned MEM2MEM : 1;
      unsigned : 17;
    };
  };
} typeDMA_CCR1BITS;
sfr volatile typeDMA_CCR1BITS DMA_CCR1bits absolute 0x40020008;

 typedef struct tagDMA_CCR2BITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned TCIE : 1;
      unsigned HTIE : 1;
      unsigned TEIE : 1;
      unsigned DIR_ : 1;
      unsigned CIRC : 1;
      unsigned PINC : 1;
      unsigned MINC : 1;
      unsigned PSIZE : 2;
      unsigned MSIZE : 2;
      unsigned PL : 2;
      unsigned MEM2MEM : 1;
      unsigned : 17;
    };
  };
} typeDMA_CCR2BITS;
sfr volatile typeDMA_CCR2BITS DMA_CCR2bits absolute 0x4002001C;

 typedef struct tagDMA_CCR3BITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned TCIE : 1;
      unsigned HTIE : 1;
      unsigned TEIE : 1;
      unsigned DIR_ : 1;
      unsigned CIRC : 1;
      unsigned PINC : 1;
      unsigned MINC : 1;
      unsigned PSIZE : 2;
      unsigned MSIZE : 2;
      unsigned PL : 2;
      unsigned MEM2MEM : 1;
      unsigned : 17;
    };
  };
} typeDMA_CCR3BITS;
sfr volatile typeDMA_CCR3BITS DMA_CCR3bits absolute 0x40020030;

 typedef struct tagDMA_CCR4BITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned TCIE : 1;
      unsigned HTIE : 1;
      unsigned TEIE : 1;
      unsigned DIR_ : 1;
      unsigned CIRC : 1;
      unsigned PINC : 1;
      unsigned MINC : 1;
      unsigned PSIZE : 2;
      unsigned MSIZE : 2;
      unsigned PL : 2;
      unsigned MEM2MEM : 1;
      unsigned : 17;
    };
  };
} typeDMA_CCR4BITS;
sfr volatile typeDMA_CCR4BITS DMA_CCR4bits absolute 0x40020044;

 typedef struct tagDMA_CCR5BITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned TCIE : 1;
      unsigned HTIE : 1;
      unsigned TEIE : 1;
      unsigned DIR_ : 1;
      unsigned CIRC : 1;
      unsigned PINC : 1;
      unsigned MINC : 1;
      unsigned PSIZE : 2;
      unsigned MSIZE : 2;
      unsigned PL : 2;
      unsigned MEM2MEM : 1;
      unsigned : 17;
    };
  };
} typeDMA_CCR5BITS;
sfr volatile typeDMA_CCR5BITS DMA_CCR5bits absolute 0x40020058;

 typedef struct tagDMA_CNDTR1BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA_CNDTR1BITS;
sfr volatile typeDMA_CNDTR1BITS DMA_CNDTR1bits absolute 0x4002000C;

 typedef struct tagDMA_CNDTR2BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA_CNDTR2BITS;
sfr volatile typeDMA_CNDTR2BITS DMA_CNDTR2bits absolute 0x40020020;

 typedef struct tagDMA_CNDTR3BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA_CNDTR3BITS;
sfr volatile typeDMA_CNDTR3BITS DMA_CNDTR3bits absolute 0x40020034;

 typedef struct tagDMA_CNDTR4BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA_CNDTR4BITS;
sfr volatile typeDMA_CNDTR4BITS DMA_CNDTR4bits absolute 0x40020048;

 typedef struct tagDMA_CNDTR5BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA_CNDTR5BITS;
sfr volatile typeDMA_CNDTR5BITS DMA_CNDTR5bits absolute 0x4002005C;

 typedef struct tagDMA_CPAR1BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA_CPAR1BITS;
sfr volatile typeDMA_CPAR1BITS DMA_CPAR1bits absolute 0x40020010;

 typedef struct tagDMA_CPAR2BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA_CPAR2BITS;
sfr volatile typeDMA_CPAR2BITS DMA_CPAR2bits absolute 0x40020024;

 typedef struct tagDMA_CPAR3BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA_CPAR3BITS;
sfr volatile typeDMA_CPAR3BITS DMA_CPAR3bits absolute 0x40020038;

 typedef struct tagDMA_CPAR4BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA_CPAR4BITS;
sfr volatile typeDMA_CPAR4BITS DMA_CPAR4bits absolute 0x4002004C;

 typedef struct tagDMA_CPAR5BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA_CPAR5BITS;
sfr volatile typeDMA_CPAR5BITS DMA_CPAR5bits absolute 0x40020060;

 typedef struct tagDMA_CMAR1BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA_CMAR1BITS;
sfr volatile typeDMA_CMAR1BITS DMA_CMAR1bits absolute 0x40020014;

 typedef struct tagDMA_CMAR2BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA_CMAR2BITS;
sfr volatile typeDMA_CMAR2BITS DMA_CMAR2bits absolute 0x40020028;

 typedef struct tagDMA_CMAR3BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA_CMAR3BITS;
sfr volatile typeDMA_CMAR3BITS DMA_CMAR3bits absolute 0x4002003C;

 typedef struct tagDMA_CMAR4BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA_CMAR4BITS;
sfr volatile typeDMA_CMAR4BITS DMA_CMAR4bits absolute 0x40020050;

 typedef struct tagDMA_CMAR5BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA_CMAR5BITS;
sfr volatile typeDMA_CMAR5BITS DMA_CMAR5bits absolute 0x40020064;

 typedef struct tagDMAMUX_C0CRBITS {
  union {
    struct {
      unsigned DMAREQ_ID : 8;
      unsigned SOIE : 1;
      unsigned EGE : 1;
      unsigned : 6;
      unsigned SE : 1;
      unsigned SPOL : 2;
      unsigned NBREQ : 5;
      unsigned SYNC_ID : 5;
      unsigned : 3;
    };
  };
} typeDMAMUX_C0CRBITS;
sfr volatile typeDMAMUX_C0CRBITS DMAMUX_C0CRbits absolute 0x40020800;

 typedef struct tagDMAMUX_C1CRBITS {
  union {
    struct {
      unsigned DMAREQ_ID : 8;
      unsigned SOIE : 1;
      unsigned EGE : 1;
      unsigned : 6;
      unsigned SE : 1;
      unsigned SPOL : 2;
      unsigned NBREQ : 5;
      unsigned SYNC_ID : 5;
      unsigned : 3;
    };
  };
} typeDMAMUX_C1CRBITS;
sfr volatile typeDMAMUX_C1CRBITS DMAMUX_C1CRbits absolute 0x40020804;

 typedef struct tagDMAMUX_C2CRBITS {
  union {
    struct {
      unsigned DMAREQ_ID : 8;
      unsigned SOIE : 1;
      unsigned EGE : 1;
      unsigned : 6;
      unsigned SE : 1;
      unsigned SPOL : 2;
      unsigned NBREQ : 5;
      unsigned SYNC_ID : 5;
      unsigned : 3;
    };
  };
} typeDMAMUX_C2CRBITS;
sfr volatile typeDMAMUX_C2CRBITS DMAMUX_C2CRbits absolute 0x40020808;

 typedef struct tagDMAMUX_C3CRBITS {
  union {
    struct {
      unsigned DMAREQ_ID : 8;
      unsigned SOIE : 1;
      unsigned EGE : 1;
      unsigned : 6;
      unsigned SE : 1;
      unsigned SPOL : 2;
      unsigned NBREQ : 5;
      unsigned SYNC_ID : 5;
      unsigned : 3;
    };
  };
} typeDMAMUX_C3CRBITS;
sfr volatile typeDMAMUX_C3CRBITS DMAMUX_C3CRbits absolute 0x4002080C;

 typedef struct tagDMAMUX_C4CRBITS {
  union {
    struct {
      unsigned DMAREQ_ID : 8;
      unsigned SOIE : 1;
      unsigned EGE : 1;
      unsigned : 6;
      unsigned SE : 1;
      unsigned SPOL : 2;
      unsigned NBREQ : 5;
      unsigned SYNC_ID : 5;
      unsigned : 3;
    };
  };
} typeDMAMUX_C4CRBITS;
sfr volatile typeDMAMUX_C4CRBITS DMAMUX_C4CRbits absolute 0x40020810;

 typedef struct tagDMAMUX_C5CRBITS {
  union {
    struct {
      unsigned DMAREQ_ID : 8;
      unsigned SOIE : 1;
      unsigned EGE : 1;
      unsigned : 6;
      unsigned SE : 1;
      unsigned SPOL : 2;
      unsigned NBREQ : 5;
      unsigned SYNC_ID : 5;
      unsigned : 3;
    };
  };
} typeDMAMUX_C5CRBITS;
sfr volatile typeDMAMUX_C5CRBITS DMAMUX_C5CRbits absolute 0x40020814;

 typedef struct tagDMAMUX_C6CRBITS {
  union {
    struct {
      unsigned DMAREQ_ID : 8;
      unsigned SOIE : 1;
      unsigned EGE : 1;
      unsigned : 6;
      unsigned SE : 1;
      unsigned SPOL : 2;
      unsigned NBREQ : 5;
      unsigned SYNC_ID : 5;
      unsigned : 3;
    };
  };
} typeDMAMUX_C6CRBITS;
sfr volatile typeDMAMUX_C6CRBITS DMAMUX_C6CRbits absolute 0x40020818;

 typedef struct tagDMAMUX_RG0CRBITS {
  union {
    struct {
      unsigned SIG_ID : 5;
      unsigned : 3;
      unsigned OIE : 1;
      unsigned : 7;
      unsigned GE : 1;
      unsigned GPOL : 2;
      unsigned GNBREQ : 5;
      unsigned : 8;
    };
  };
} typeDMAMUX_RG0CRBITS;
sfr volatile typeDMAMUX_RG0CRBITS DMAMUX_RG0CRbits absolute 0x40020900;

 typedef struct tagDMAMUX_RG1CRBITS {
  union {
    struct {
      unsigned SIG_ID : 5;
      unsigned : 3;
      unsigned OIE : 1;
      unsigned : 7;
      unsigned GE : 1;
      unsigned GPOL : 2;
      unsigned GNBREQ : 5;
      unsigned : 8;
    };
  };
} typeDMAMUX_RG1CRBITS;
sfr volatile typeDMAMUX_RG1CRBITS DMAMUX_RG1CRbits absolute 0x40020904;

 typedef struct tagDMAMUX_RG2CRBITS {
  union {
    struct {
      unsigned SIG_ID : 5;
      unsigned : 3;
      unsigned OIE : 1;
      unsigned : 7;
      unsigned GE : 1;
      unsigned GPOL : 2;
      unsigned GNBREQ : 5;
      unsigned : 8;
    };
  };
} typeDMAMUX_RG2CRBITS;
sfr volatile typeDMAMUX_RG2CRBITS DMAMUX_RG2CRbits absolute 0x40020908;

 typedef struct tagDMAMUX_RG3CRBITS {
  union {
    struct {
      unsigned SIG_ID : 5;
      unsigned : 3;
      unsigned OIE : 1;
      unsigned : 7;
      unsigned GE : 1;
      unsigned GPOL : 2;
      unsigned GNBREQ : 5;
      unsigned : 8;
    };
  };
} typeDMAMUX_RG3CRBITS;
sfr volatile typeDMAMUX_RG3CRBITS DMAMUX_RG3CRbits absolute 0x4002090C;

 typedef struct tagDMAMUX_RGSRBITS {
  union {
    struct {
      unsigned OF : 4;
      unsigned : 28;
    };
  };
} typeDMAMUX_RGSRBITS;
sfr volatile typeDMAMUX_RGSRBITS DMAMUX_RGSRbits absolute 0x40020940;

 typedef struct tagDMAMUX_RGCFRBITS {
  union {
    struct {
      unsigned COF : 4;
      unsigned : 28;
    };
  };
} typeDMAMUX_RGCFRBITS;
sfr volatile typeDMAMUX_RGCFRBITS DMAMUX_RGCFRbits absolute 0x40020944;

 typedef struct tagGPIOA_MODERBITS {
  union {
    struct {
      unsigned MODER0 : 2;
      unsigned MODER1 : 2;
      unsigned MODER2 : 2;
      unsigned MODER3 : 2;
      unsigned MODER4 : 2;
      unsigned MODER5 : 2;
      unsigned MODER6 : 2;
      unsigned MODER7 : 2;
      unsigned MODER8 : 2;
      unsigned MODER9 : 2;
      unsigned MODER10 : 2;
      unsigned MODER11 : 2;
      unsigned MODER12 : 2;
      unsigned MODER13 : 2;
      unsigned MODER14 : 2;
      unsigned MODER15 : 2;
    };
  };
} typeGPIOA_MODERBITS;
sfr far volatile typeGPIOA_MODERBITS GPIOA_MODERbits absolute 0x50000000;

 typedef struct tagGPIOA_OTYPERBITS {
  union {
    struct {
      unsigned OT0 : 1;
      unsigned OT1 : 1;
      unsigned OT2 : 1;
      unsigned OT3 : 1;
      unsigned OT4 : 1;
      unsigned OT5 : 1;
      unsigned OT6 : 1;
      unsigned OT7 : 1;
      unsigned OT8 : 1;
      unsigned OT9 : 1;
      unsigned OT10 : 1;
      unsigned OT11 : 1;
      unsigned OT12 : 1;
      unsigned OT13 : 1;
      unsigned OT14 : 1;
      unsigned OT15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOA_OTYPERBITS;
sfr far volatile typeGPIOA_OTYPERBITS GPIOA_OTYPERbits absolute 0x50000004;

 typedef struct tagGPIOA_OSPEEDRBITS {
  union {
    struct {
      unsigned OSPEEDR0 : 2;
      unsigned OSPEEDR1 : 2;
      unsigned OSPEEDR2 : 2;
      unsigned OSPEEDR3 : 2;
      unsigned OSPEEDR4 : 2;
      unsigned OSPEEDR5 : 2;
      unsigned OSPEEDR6 : 2;
      unsigned OSPEEDR7 : 2;
      unsigned OSPEEDR8 : 2;
      unsigned OSPEEDR9 : 2;
      unsigned OSPEEDR10 : 2;
      unsigned OSPEEDR11 : 2;
      unsigned OSPEEDR12 : 2;
      unsigned OSPEEDR13 : 2;
      unsigned OSPEEDR14 : 2;
      unsigned OSPEEDR15 : 2;
    };
  };
} typeGPIOA_OSPEEDRBITS;
sfr far volatile typeGPIOA_OSPEEDRBITS GPIOA_OSPEEDRbits absolute 0x50000008;

 typedef struct tagGPIOA_PUPDRBITS {
  union {
    struct {
      unsigned PUPDR0 : 2;
      unsigned PUPDR1 : 2;
      unsigned PUPDR2 : 2;
      unsigned PUPDR3 : 2;
      unsigned PUPDR4 : 2;
      unsigned PUPDR5 : 2;
      unsigned PUPDR6 : 2;
      unsigned PUPDR7 : 2;
      unsigned PUPDR8 : 2;
      unsigned PUPDR9 : 2;
      unsigned PUPDR10 : 2;
      unsigned PUPDR11 : 2;
      unsigned PUPDR12 : 2;
      unsigned PUPDR13 : 2;
      unsigned PUPDR14 : 2;
      unsigned PUPDR15 : 2;
    };
  };
} typeGPIOA_PUPDRBITS;
sfr far volatile typeGPIOA_PUPDRBITS GPIOA_PUPDRbits absolute 0x5000000C;

 typedef struct tagGPIOA_IDRBITS {
  union {
    struct {
      unsigned IDR0 : 1;
      unsigned IDR1 : 1;
      unsigned IDR2 : 1;
      unsigned IDR3 : 1;
      unsigned IDR4 : 1;
      unsigned IDR5 : 1;
      unsigned IDR6 : 1;
      unsigned IDR7 : 1;
      unsigned IDR8 : 1;
      unsigned IDR9 : 1;
      unsigned IDR10 : 1;
      unsigned IDR11 : 1;
      unsigned IDR12 : 1;
      unsigned IDR13 : 1;
      unsigned IDR14 : 1;
      unsigned IDR15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOA_IDRBITS;
sfr far volatile typeGPIOA_IDRBITS GPIOA_IDRbits absolute 0x50000010;

 typedef struct tagGPIOA_ODRBITS {
  union {
    struct {
      unsigned ODR0 : 1;
      unsigned ODR1 : 1;
      unsigned ODR2 : 1;
      unsigned ODR3 : 1;
      unsigned ODR4 : 1;
      unsigned ODR5 : 1;
      unsigned ODR6 : 1;
      unsigned ODR7 : 1;
      unsigned ODR8 : 1;
      unsigned ODR9 : 1;
      unsigned ODR10 : 1;
      unsigned ODR11 : 1;
      unsigned ODR12 : 1;
      unsigned ODR13 : 1;
      unsigned ODR14 : 1;
      unsigned ODR15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOA_ODRBITS;
sfr far volatile typeGPIOA_ODRBITS GPIOA_ODRbits absolute 0x50000014;

 typedef struct tagGPIOA_BSRRBITS {
  union {
    struct {
      unsigned BS0 : 1;
      unsigned BS1 : 1;
      unsigned BS2 : 1;
      unsigned BS3 : 1;
      unsigned BS4 : 1;
      unsigned BS5 : 1;
      unsigned BS6 : 1;
      unsigned BS7 : 1;
      unsigned BS8 : 1;
      unsigned BS9 : 1;
      unsigned BS10 : 1;
      unsigned BS11 : 1;
      unsigned BS12 : 1;
      unsigned BS13 : 1;
      unsigned BS14 : 1;
      unsigned BS15 : 1;
      unsigned BR0 : 1;
      unsigned BR1 : 1;
      unsigned BR2 : 1;
      unsigned BR3 : 1;
      unsigned BR4 : 1;
      unsigned BR5 : 1;
      unsigned BR6 : 1;
      unsigned BR7 : 1;
      unsigned BR8 : 1;
      unsigned BR9 : 1;
      unsigned BR10 : 1;
      unsigned BR11 : 1;
      unsigned BR12 : 1;
      unsigned BR13 : 1;
      unsigned BR14 : 1;
      unsigned BR15 : 1;
    };
  };
} typeGPIOA_BSRRBITS;
sfr far volatile typeGPIOA_BSRRBITS GPIOA_BSRRbits absolute 0x50000018;

 typedef struct tagGPIOA_LCKRBITS {
  union {
    struct {
      unsigned LCK0 : 1;
      unsigned LCK1 : 1;
      unsigned LCK2 : 1;
      unsigned LCK3 : 1;
      unsigned LCK4 : 1;
      unsigned LCK5 : 1;
      unsigned LCK6 : 1;
      unsigned LCK7 : 1;
      unsigned LCK8 : 1;
      unsigned LCK9 : 1;
      unsigned LCK10 : 1;
      unsigned LCK11 : 1;
      unsigned LCK12 : 1;
      unsigned LCK13 : 1;
      unsigned LCK14 : 1;
      unsigned LCK15 : 1;
      unsigned LCKK : 1;
      unsigned : 15;
    };
  };
} typeGPIOA_LCKRBITS;
sfr far volatile typeGPIOA_LCKRBITS GPIOA_LCKRbits absolute 0x5000001C;

 typedef struct tagGPIOA_AFRLBITS {
  union {
    struct {
      unsigned AFSEL0 : 4;
      unsigned AFSEL1 : 4;
      unsigned AFSEL2 : 4;
      unsigned AFSEL3 : 4;
      unsigned AFSEL4 : 4;
      unsigned AFSEL5 : 4;
      unsigned AFSEL6 : 4;
      unsigned AFSEL7 : 4;
    };
  };
} typeGPIOA_AFRLBITS;
sfr far volatile typeGPIOA_AFRLBITS GPIOA_AFRLbits absolute 0x50000020;

 typedef struct tagGPIOA_AFRHBITS {
  union {
    struct {
      unsigned AFSEL8 : 4;
      unsigned AFSEL9 : 4;
      unsigned AFSEL10 : 4;
      unsigned AFSEL11 : 4;
      unsigned AFSEL12 : 4;
      unsigned AFSEL13 : 4;
      unsigned AFSEL14 : 4;
      unsigned AFSEL15 : 4;
    };
  };
} typeGPIOA_AFRHBITS;
sfr far volatile typeGPIOA_AFRHBITS GPIOA_AFRHbits absolute 0x50000024;

 typedef struct tagGPIOA_BRRBITS {
  union {
    struct {
      unsigned BR0 : 1;
      unsigned BR1 : 1;
      unsigned BR2 : 1;
      unsigned BR3 : 1;
      unsigned BR4 : 1;
      unsigned BR5 : 1;
      unsigned BR6 : 1;
      unsigned BR7 : 1;
      unsigned BR8 : 1;
      unsigned BR9 : 1;
      unsigned BR10 : 1;
      unsigned BR11 : 1;
      unsigned BR12 : 1;
      unsigned BR13 : 1;
      unsigned BR14 : 1;
      unsigned BR15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOA_BRRBITS;
sfr far volatile typeGPIOA_BRRBITS GPIOA_BRRbits absolute 0x50000028;

 typedef struct tagGPIOB_MODERBITS {
  union {
    struct {
      unsigned MODER0 : 2;
      unsigned MODER1 : 2;
      unsigned MODER2 : 2;
      unsigned MODER3 : 2;
      unsigned MODER4 : 2;
      unsigned MODER5 : 2;
      unsigned MODER6 : 2;
      unsigned MODER7 : 2;
      unsigned MODER8 : 2;
      unsigned MODER9 : 2;
      unsigned MODER10 : 2;
      unsigned MODER11 : 2;
      unsigned MODER12 : 2;
      unsigned MODER13 : 2;
      unsigned MODER14 : 2;
      unsigned MODER15 : 2;
    };
  };
} typeGPIOB_MODERBITS;
sfr far volatile typeGPIOB_MODERBITS GPIOB_MODERbits absolute 0x50000400;

 typedef struct tagGPIOB_OTYPERBITS {
  union {
    struct {
      unsigned OT0 : 1;
      unsigned OT1 : 1;
      unsigned OT2 : 1;
      unsigned OT3 : 1;
      unsigned OT4 : 1;
      unsigned OT5 : 1;
      unsigned OT6 : 1;
      unsigned OT7 : 1;
      unsigned OT8 : 1;
      unsigned OT9 : 1;
      unsigned OT10 : 1;
      unsigned OT11 : 1;
      unsigned OT12 : 1;
      unsigned OT13 : 1;
      unsigned OT14 : 1;
      unsigned OT15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOB_OTYPERBITS;
sfr far volatile typeGPIOB_OTYPERBITS GPIOB_OTYPERbits absolute 0x50000404;

 typedef struct tagGPIOB_OSPEEDRBITS {
  union {
    struct {
      unsigned OSPEEDR0 : 2;
      unsigned OSPEEDR1 : 2;
      unsigned OSPEEDR2 : 2;
      unsigned OSPEEDR3 : 2;
      unsigned OSPEEDR4 : 2;
      unsigned OSPEEDR5 : 2;
      unsigned OSPEEDR6 : 2;
      unsigned OSPEEDR7 : 2;
      unsigned OSPEEDR8 : 2;
      unsigned OSPEEDR9 : 2;
      unsigned OSPEEDR10 : 2;
      unsigned OSPEEDR11 : 2;
      unsigned OSPEEDR12 : 2;
      unsigned OSPEEDR13 : 2;
      unsigned OSPEEDR14 : 2;
      unsigned OSPEEDR15 : 2;
    };
  };
} typeGPIOB_OSPEEDRBITS;
sfr far volatile typeGPIOB_OSPEEDRBITS GPIOB_OSPEEDRbits absolute 0x50000408;

 typedef struct tagGPIOB_PUPDRBITS {
  union {
    struct {
      unsigned PUPDR0 : 2;
      unsigned PUPDR1 : 2;
      unsigned PUPDR2 : 2;
      unsigned PUPDR3 : 2;
      unsigned PUPDR4 : 2;
      unsigned PUPDR5 : 2;
      unsigned PUPDR6 : 2;
      unsigned PUPDR7 : 2;
      unsigned PUPDR8 : 2;
      unsigned PUPDR9 : 2;
      unsigned PUPDR10 : 2;
      unsigned PUPDR11 : 2;
      unsigned PUPDR12 : 2;
      unsigned PUPDR13 : 2;
      unsigned PUPDR14 : 2;
      unsigned PUPDR15 : 2;
    };
  };
} typeGPIOB_PUPDRBITS;
sfr far volatile typeGPIOB_PUPDRBITS GPIOB_PUPDRbits absolute 0x5000040C;

 typedef struct tagGPIOB_IDRBITS {
  union {
    struct {
      unsigned IDR0 : 1;
      unsigned IDR1 : 1;
      unsigned IDR2 : 1;
      unsigned IDR3 : 1;
      unsigned IDR4 : 1;
      unsigned IDR5 : 1;
      unsigned IDR6 : 1;
      unsigned IDR7 : 1;
      unsigned IDR8 : 1;
      unsigned IDR9 : 1;
      unsigned IDR10 : 1;
      unsigned IDR11 : 1;
      unsigned IDR12 : 1;
      unsigned IDR13 : 1;
      unsigned IDR14 : 1;
      unsigned IDR15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOB_IDRBITS;
sfr far volatile typeGPIOB_IDRBITS GPIOB_IDRbits absolute 0x50000410;

 typedef struct tagGPIOB_ODRBITS {
  union {
    struct {
      unsigned ODR0 : 1;
      unsigned ODR1 : 1;
      unsigned ODR2 : 1;
      unsigned ODR3 : 1;
      unsigned ODR4 : 1;
      unsigned ODR5 : 1;
      unsigned ODR6 : 1;
      unsigned ODR7 : 1;
      unsigned ODR8 : 1;
      unsigned ODR9 : 1;
      unsigned ODR10 : 1;
      unsigned ODR11 : 1;
      unsigned ODR12 : 1;
      unsigned ODR13 : 1;
      unsigned ODR14 : 1;
      unsigned ODR15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOB_ODRBITS;
sfr far volatile typeGPIOB_ODRBITS GPIOB_ODRbits absolute 0x50000414;

 typedef struct tagGPIOB_BSRRBITS {
  union {
    struct {
      unsigned BS0 : 1;
      unsigned BS1 : 1;
      unsigned BS2 : 1;
      unsigned BS3 : 1;
      unsigned BS4 : 1;
      unsigned BS5 : 1;
      unsigned BS6 : 1;
      unsigned BS7 : 1;
      unsigned BS8 : 1;
      unsigned BS9 : 1;
      unsigned BS10 : 1;
      unsigned BS11 : 1;
      unsigned BS12 : 1;
      unsigned BS13 : 1;
      unsigned BS14 : 1;
      unsigned BS15 : 1;
      unsigned BR0 : 1;
      unsigned BR1 : 1;
      unsigned BR2 : 1;
      unsigned BR3 : 1;
      unsigned BR4 : 1;
      unsigned BR5 : 1;
      unsigned BR6 : 1;
      unsigned BR7 : 1;
      unsigned BR8 : 1;
      unsigned BR9 : 1;
      unsigned BR10 : 1;
      unsigned BR11 : 1;
      unsigned BR12 : 1;
      unsigned BR13 : 1;
      unsigned BR14 : 1;
      unsigned BR15 : 1;
    };
  };
} typeGPIOB_BSRRBITS;
sfr far volatile typeGPIOB_BSRRBITS GPIOB_BSRRbits absolute 0x50000418;

 typedef struct tagGPIOB_LCKRBITS {
  union {
    struct {
      unsigned LCK0 : 1;
      unsigned LCK1 : 1;
      unsigned LCK2 : 1;
      unsigned LCK3 : 1;
      unsigned LCK4 : 1;
      unsigned LCK5 : 1;
      unsigned LCK6 : 1;
      unsigned LCK7 : 1;
      unsigned LCK8 : 1;
      unsigned LCK9 : 1;
      unsigned LCK10 : 1;
      unsigned LCK11 : 1;
      unsigned LCK12 : 1;
      unsigned LCK13 : 1;
      unsigned LCK14 : 1;
      unsigned LCK15 : 1;
      unsigned LCKK : 1;
      unsigned : 15;
    };
  };
} typeGPIOB_LCKRBITS;
sfr far volatile typeGPIOB_LCKRBITS GPIOB_LCKRbits absolute 0x5000041C;

 typedef struct tagGPIOB_AFRLBITS {
  union {
    struct {
      unsigned AFSEL0 : 4;
      unsigned AFSEL1 : 4;
      unsigned AFSEL2 : 4;
      unsigned AFSEL3 : 4;
      unsigned AFSEL4 : 4;
      unsigned AFSEL5 : 4;
      unsigned AFSEL6 : 4;
      unsigned AFSEL7 : 4;
    };
  };
} typeGPIOB_AFRLBITS;
sfr far volatile typeGPIOB_AFRLBITS GPIOB_AFRLbits absolute 0x50000420;

 typedef struct tagGPIOB_AFRHBITS {
  union {
    struct {
      unsigned AFSEL8 : 4;
      unsigned AFSEL9 : 4;
      unsigned AFSEL10 : 4;
      unsigned AFSEL11 : 4;
      unsigned AFSEL12 : 4;
      unsigned AFSEL13 : 4;
      unsigned AFSEL14 : 4;
      unsigned AFSEL15 : 4;
    };
  };
} typeGPIOB_AFRHBITS;
sfr far volatile typeGPIOB_AFRHBITS GPIOB_AFRHbits absolute 0x50000424;

 typedef struct tagGPIOB_BRRBITS {
  union {
    struct {
      unsigned BR0 : 1;
      unsigned BR1 : 1;
      unsigned BR2 : 1;
      unsigned BR3 : 1;
      unsigned BR4 : 1;
      unsigned BR5 : 1;
      unsigned BR6 : 1;
      unsigned BR7 : 1;
      unsigned BR8 : 1;
      unsigned BR9 : 1;
      unsigned BR10 : 1;
      unsigned BR11 : 1;
      unsigned BR12 : 1;
      unsigned BR13 : 1;
      unsigned BR14 : 1;
      unsigned BR15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOB_BRRBITS;
sfr far volatile typeGPIOB_BRRBITS GPIOB_BRRbits absolute 0x50000428;

 typedef struct tagGPIOC_MODERBITS {
  union {
    struct {
      unsigned MODER0 : 2;
      unsigned MODER1 : 2;
      unsigned MODER2 : 2;
      unsigned MODER3 : 2;
      unsigned MODER4 : 2;
      unsigned MODER5 : 2;
      unsigned MODER6 : 2;
      unsigned MODER7 : 2;
      unsigned MODER8 : 2;
      unsigned MODER9 : 2;
      unsigned MODER10 : 2;
      unsigned MODER11 : 2;
      unsigned MODER12 : 2;
      unsigned MODER13 : 2;
      unsigned MODER14 : 2;
      unsigned MODER15 : 2;
    };
  };
} typeGPIOC_MODERBITS;
sfr far volatile typeGPIOC_MODERBITS GPIOC_MODERbits absolute 0x50000800;

 typedef struct tagGPIOC_OTYPERBITS {
  union {
    struct {
      unsigned OT0 : 1;
      unsigned OT1 : 1;
      unsigned OT2 : 1;
      unsigned OT3 : 1;
      unsigned OT4 : 1;
      unsigned OT5 : 1;
      unsigned OT6 : 1;
      unsigned OT7 : 1;
      unsigned OT8 : 1;
      unsigned OT9 : 1;
      unsigned OT10 : 1;
      unsigned OT11 : 1;
      unsigned OT12 : 1;
      unsigned OT13 : 1;
      unsigned OT14 : 1;
      unsigned OT15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOC_OTYPERBITS;
sfr far volatile typeGPIOC_OTYPERBITS GPIOC_OTYPERbits absolute 0x50000804;

 typedef struct tagGPIOC_OSPEEDRBITS {
  union {
    struct {
      unsigned OSPEEDR0 : 2;
      unsigned OSPEEDR1 : 2;
      unsigned OSPEEDR2 : 2;
      unsigned OSPEEDR3 : 2;
      unsigned OSPEEDR4 : 2;
      unsigned OSPEEDR5 : 2;
      unsigned OSPEEDR6 : 2;
      unsigned OSPEEDR7 : 2;
      unsigned OSPEEDR8 : 2;
      unsigned OSPEEDR9 : 2;
      unsigned OSPEEDR10 : 2;
      unsigned OSPEEDR11 : 2;
      unsigned OSPEEDR12 : 2;
      unsigned OSPEEDR13 : 2;
      unsigned OSPEEDR14 : 2;
      unsigned OSPEEDR15 : 2;
    };
  };
} typeGPIOC_OSPEEDRBITS;
sfr far volatile typeGPIOC_OSPEEDRBITS GPIOC_OSPEEDRbits absolute 0x50000808;

 typedef struct tagGPIOC_PUPDRBITS {
  union {
    struct {
      unsigned PUPDR0 : 2;
      unsigned PUPDR1 : 2;
      unsigned PUPDR2 : 2;
      unsigned PUPDR3 : 2;
      unsigned PUPDR4 : 2;
      unsigned PUPDR5 : 2;
      unsigned PUPDR6 : 2;
      unsigned PUPDR7 : 2;
      unsigned PUPDR8 : 2;
      unsigned PUPDR9 : 2;
      unsigned PUPDR10 : 2;
      unsigned PUPDR11 : 2;
      unsigned PUPDR12 : 2;
      unsigned PUPDR13 : 2;
      unsigned PUPDR14 : 2;
      unsigned PUPDR15 : 2;
    };
  };
} typeGPIOC_PUPDRBITS;
sfr far volatile typeGPIOC_PUPDRBITS GPIOC_PUPDRbits absolute 0x5000080C;

 typedef struct tagGPIOC_IDRBITS {
  union {
    struct {
      unsigned IDR0 : 1;
      unsigned IDR1 : 1;
      unsigned IDR2 : 1;
      unsigned IDR3 : 1;
      unsigned IDR4 : 1;
      unsigned IDR5 : 1;
      unsigned IDR6 : 1;
      unsigned IDR7 : 1;
      unsigned IDR8 : 1;
      unsigned IDR9 : 1;
      unsigned IDR10 : 1;
      unsigned IDR11 : 1;
      unsigned IDR12 : 1;
      unsigned IDR13 : 1;
      unsigned IDR14 : 1;
      unsigned IDR15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOC_IDRBITS;
sfr far volatile typeGPIOC_IDRBITS GPIOC_IDRbits absolute 0x50000810;

 typedef struct tagGPIOC_ODRBITS {
  union {
    struct {
      unsigned ODR0 : 1;
      unsigned ODR1 : 1;
      unsigned ODR2 : 1;
      unsigned ODR3 : 1;
      unsigned ODR4 : 1;
      unsigned ODR5 : 1;
      unsigned ODR6 : 1;
      unsigned ODR7 : 1;
      unsigned ODR8 : 1;
      unsigned ODR9 : 1;
      unsigned ODR10 : 1;
      unsigned ODR11 : 1;
      unsigned ODR12 : 1;
      unsigned ODR13 : 1;
      unsigned ODR14 : 1;
      unsigned ODR15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOC_ODRBITS;
sfr far volatile typeGPIOC_ODRBITS GPIOC_ODRbits absolute 0x50000814;

 typedef struct tagGPIOC_BSRRBITS {
  union {
    struct {
      unsigned BS0 : 1;
      unsigned BS1 : 1;
      unsigned BS2 : 1;
      unsigned BS3 : 1;
      unsigned BS4 : 1;
      unsigned BS5 : 1;
      unsigned BS6 : 1;
      unsigned BS7 : 1;
      unsigned BS8 : 1;
      unsigned BS9 : 1;
      unsigned BS10 : 1;
      unsigned BS11 : 1;
      unsigned BS12 : 1;
      unsigned BS13 : 1;
      unsigned BS14 : 1;
      unsigned BS15 : 1;
      unsigned BR0 : 1;
      unsigned BR1 : 1;
      unsigned BR2 : 1;
      unsigned BR3 : 1;
      unsigned BR4 : 1;
      unsigned BR5 : 1;
      unsigned BR6 : 1;
      unsigned BR7 : 1;
      unsigned BR8 : 1;
      unsigned BR9 : 1;
      unsigned BR10 : 1;
      unsigned BR11 : 1;
      unsigned BR12 : 1;
      unsigned BR13 : 1;
      unsigned BR14 : 1;
      unsigned BR15 : 1;
    };
  };
} typeGPIOC_BSRRBITS;
sfr far volatile typeGPIOC_BSRRBITS GPIOC_BSRRbits absolute 0x50000818;

 typedef struct tagGPIOC_LCKRBITS {
  union {
    struct {
      unsigned LCK0 : 1;
      unsigned LCK1 : 1;
      unsigned LCK2 : 1;
      unsigned LCK3 : 1;
      unsigned LCK4 : 1;
      unsigned LCK5 : 1;
      unsigned LCK6 : 1;
      unsigned LCK7 : 1;
      unsigned LCK8 : 1;
      unsigned LCK9 : 1;
      unsigned LCK10 : 1;
      unsigned LCK11 : 1;
      unsigned LCK12 : 1;
      unsigned LCK13 : 1;
      unsigned LCK14 : 1;
      unsigned LCK15 : 1;
      unsigned LCKK : 1;
      unsigned : 15;
    };
  };
} typeGPIOC_LCKRBITS;
sfr far volatile typeGPIOC_LCKRBITS GPIOC_LCKRbits absolute 0x5000081C;

 typedef struct tagGPIOC_AFRLBITS {
  union {
    struct {
      unsigned AFSEL0 : 4;
      unsigned AFSEL1 : 4;
      unsigned AFSEL2 : 4;
      unsigned AFSEL3 : 4;
      unsigned AFSEL4 : 4;
      unsigned AFSEL5 : 4;
      unsigned AFSEL6 : 4;
      unsigned AFSEL7 : 4;
    };
  };
} typeGPIOC_AFRLBITS;
sfr far volatile typeGPIOC_AFRLBITS GPIOC_AFRLbits absolute 0x50000820;

 typedef struct tagGPIOC_AFRHBITS {
  union {
    struct {
      unsigned AFSEL8 : 4;
      unsigned AFSEL9 : 4;
      unsigned AFSEL10 : 4;
      unsigned AFSEL11 : 4;
      unsigned AFSEL12 : 4;
      unsigned AFSEL13 : 4;
      unsigned AFSEL14 : 4;
      unsigned AFSEL15 : 4;
    };
  };
} typeGPIOC_AFRHBITS;
sfr far volatile typeGPIOC_AFRHBITS GPIOC_AFRHbits absolute 0x50000824;

 typedef struct tagGPIOC_BRRBITS {
  union {
    struct {
      unsigned BR0 : 1;
      unsigned BR1 : 1;
      unsigned BR2 : 1;
      unsigned BR3 : 1;
      unsigned BR4 : 1;
      unsigned BR5 : 1;
      unsigned BR6 : 1;
      unsigned BR7 : 1;
      unsigned BR8 : 1;
      unsigned BR9 : 1;
      unsigned BR10 : 1;
      unsigned BR11 : 1;
      unsigned BR12 : 1;
      unsigned BR13 : 1;
      unsigned BR14 : 1;
      unsigned BR15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOC_BRRBITS;
sfr far volatile typeGPIOC_BRRBITS GPIOC_BRRbits absolute 0x50000828;

 typedef struct tagGPIOD_MODERBITS {
  union {
    struct {
      unsigned MODER0 : 2;
      unsigned MODER1 : 2;
      unsigned MODER2 : 2;
      unsigned MODER3 : 2;
      unsigned MODER4 : 2;
      unsigned MODER5 : 2;
      unsigned MODER6 : 2;
      unsigned MODER7 : 2;
      unsigned MODER8 : 2;
      unsigned MODER9 : 2;
      unsigned MODER10 : 2;
      unsigned MODER11 : 2;
      unsigned MODER12 : 2;
      unsigned MODER13 : 2;
      unsigned MODER14 : 2;
      unsigned MODER15 : 2;
    };
  };
} typeGPIOD_MODERBITS;
sfr far volatile typeGPIOD_MODERBITS GPIOD_MODERbits absolute 0x50000C00;

 typedef struct tagGPIOD_OTYPERBITS {
  union {
    struct {
      unsigned OT0 : 1;
      unsigned OT1 : 1;
      unsigned OT2 : 1;
      unsigned OT3 : 1;
      unsigned OT4 : 1;
      unsigned OT5 : 1;
      unsigned OT6 : 1;
      unsigned OT7 : 1;
      unsigned OT8 : 1;
      unsigned OT9 : 1;
      unsigned OT10 : 1;
      unsigned OT11 : 1;
      unsigned OT12 : 1;
      unsigned OT13 : 1;
      unsigned OT14 : 1;
      unsigned OT15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOD_OTYPERBITS;
sfr far volatile typeGPIOD_OTYPERBITS GPIOD_OTYPERbits absolute 0x50000C04;

 typedef struct tagGPIOD_OSPEEDRBITS {
  union {
    struct {
      unsigned OSPEEDR0 : 2;
      unsigned OSPEEDR1 : 2;
      unsigned OSPEEDR2 : 2;
      unsigned OSPEEDR3 : 2;
      unsigned OSPEEDR4 : 2;
      unsigned OSPEEDR5 : 2;
      unsigned OSPEEDR6 : 2;
      unsigned OSPEEDR7 : 2;
      unsigned OSPEEDR8 : 2;
      unsigned OSPEEDR9 : 2;
      unsigned OSPEEDR10 : 2;
      unsigned OSPEEDR11 : 2;
      unsigned OSPEEDR12 : 2;
      unsigned OSPEEDR13 : 2;
      unsigned OSPEEDR14 : 2;
      unsigned OSPEEDR15 : 2;
    };
  };
} typeGPIOD_OSPEEDRBITS;
sfr far volatile typeGPIOD_OSPEEDRBITS GPIOD_OSPEEDRbits absolute 0x50000C08;

 typedef struct tagGPIOD_PUPDRBITS {
  union {
    struct {
      unsigned PUPDR0 : 2;
      unsigned PUPDR1 : 2;
      unsigned PUPDR2 : 2;
      unsigned PUPDR3 : 2;
      unsigned PUPDR4 : 2;
      unsigned PUPDR5 : 2;
      unsigned PUPDR6 : 2;
      unsigned PUPDR7 : 2;
      unsigned PUPDR8 : 2;
      unsigned PUPDR9 : 2;
      unsigned PUPDR10 : 2;
      unsigned PUPDR11 : 2;
      unsigned PUPDR12 : 2;
      unsigned PUPDR13 : 2;
      unsigned PUPDR14 : 2;
      unsigned PUPDR15 : 2;
    };
  };
} typeGPIOD_PUPDRBITS;
sfr far volatile typeGPIOD_PUPDRBITS GPIOD_PUPDRbits absolute 0x50000C0C;

 typedef struct tagGPIOD_IDRBITS {
  union {
    struct {
      unsigned IDR0 : 1;
      unsigned IDR1 : 1;
      unsigned IDR2 : 1;
      unsigned IDR3 : 1;
      unsigned IDR4 : 1;
      unsigned IDR5 : 1;
      unsigned IDR6 : 1;
      unsigned IDR7 : 1;
      unsigned IDR8 : 1;
      unsigned IDR9 : 1;
      unsigned IDR10 : 1;
      unsigned IDR11 : 1;
      unsigned IDR12 : 1;
      unsigned IDR13 : 1;
      unsigned IDR14 : 1;
      unsigned IDR15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOD_IDRBITS;
sfr far volatile typeGPIOD_IDRBITS GPIOD_IDRbits absolute 0x50000C10;

 typedef struct tagGPIOD_ODRBITS {
  union {
    struct {
      unsigned ODR0 : 1;
      unsigned ODR1 : 1;
      unsigned ODR2 : 1;
      unsigned ODR3 : 1;
      unsigned ODR4 : 1;
      unsigned ODR5 : 1;
      unsigned ODR6 : 1;
      unsigned ODR7 : 1;
      unsigned ODR8 : 1;
      unsigned ODR9 : 1;
      unsigned ODR10 : 1;
      unsigned ODR11 : 1;
      unsigned ODR12 : 1;
      unsigned ODR13 : 1;
      unsigned ODR14 : 1;
      unsigned ODR15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOD_ODRBITS;
sfr far volatile typeGPIOD_ODRBITS GPIOD_ODRbits absolute 0x50000C14;

 typedef struct tagGPIOD_BSRRBITS {
  union {
    struct {
      unsigned BS0 : 1;
      unsigned BS1 : 1;
      unsigned BS2 : 1;
      unsigned BS3 : 1;
      unsigned BS4 : 1;
      unsigned BS5 : 1;
      unsigned BS6 : 1;
      unsigned BS7 : 1;
      unsigned BS8 : 1;
      unsigned BS9 : 1;
      unsigned BS10 : 1;
      unsigned BS11 : 1;
      unsigned BS12 : 1;
      unsigned BS13 : 1;
      unsigned BS14 : 1;
      unsigned BS15 : 1;
      unsigned BR0 : 1;
      unsigned BR1 : 1;
      unsigned BR2 : 1;
      unsigned BR3 : 1;
      unsigned BR4 : 1;
      unsigned BR5 : 1;
      unsigned BR6 : 1;
      unsigned BR7 : 1;
      unsigned BR8 : 1;
      unsigned BR9 : 1;
      unsigned BR10 : 1;
      unsigned BR11 : 1;
      unsigned BR12 : 1;
      unsigned BR13 : 1;
      unsigned BR14 : 1;
      unsigned BR15 : 1;
    };
  };
} typeGPIOD_BSRRBITS;
sfr far volatile typeGPIOD_BSRRBITS GPIOD_BSRRbits absolute 0x50000C18;

 typedef struct tagGPIOD_LCKRBITS {
  union {
    struct {
      unsigned LCK0 : 1;
      unsigned LCK1 : 1;
      unsigned LCK2 : 1;
      unsigned LCK3 : 1;
      unsigned LCK4 : 1;
      unsigned LCK5 : 1;
      unsigned LCK6 : 1;
      unsigned LCK7 : 1;
      unsigned LCK8 : 1;
      unsigned LCK9 : 1;
      unsigned LCK10 : 1;
      unsigned LCK11 : 1;
      unsigned LCK12 : 1;
      unsigned LCK13 : 1;
      unsigned LCK14 : 1;
      unsigned LCK15 : 1;
      unsigned LCKK : 1;
      unsigned : 15;
    };
  };
} typeGPIOD_LCKRBITS;
sfr far volatile typeGPIOD_LCKRBITS GPIOD_LCKRbits absolute 0x50000C1C;

 typedef struct tagGPIOD_AFRLBITS {
  union {
    struct {
      unsigned AFSEL0 : 4;
      unsigned AFSEL1 : 4;
      unsigned AFSEL2 : 4;
      unsigned AFSEL3 : 4;
      unsigned AFSEL4 : 4;
      unsigned AFSEL5 : 4;
      unsigned AFSEL6 : 4;
      unsigned AFSEL7 : 4;
    };
  };
} typeGPIOD_AFRLBITS;
sfr far volatile typeGPIOD_AFRLBITS GPIOD_AFRLbits absolute 0x50000C20;

 typedef struct tagGPIOD_AFRHBITS {
  union {
    struct {
      unsigned AFSEL8 : 4;
      unsigned AFSEL9 : 4;
      unsigned AFSEL10 : 4;
      unsigned AFSEL11 : 4;
      unsigned AFSEL12 : 4;
      unsigned AFSEL13 : 4;
      unsigned AFSEL14 : 4;
      unsigned AFSEL15 : 4;
    };
  };
} typeGPIOD_AFRHBITS;
sfr far volatile typeGPIOD_AFRHBITS GPIOD_AFRHbits absolute 0x50000C24;

 typedef struct tagGPIOD_BRRBITS {
  union {
    struct {
      unsigned BR0 : 1;
      unsigned BR1 : 1;
      unsigned BR2 : 1;
      unsigned BR3 : 1;
      unsigned BR4 : 1;
      unsigned BR5 : 1;
      unsigned BR6 : 1;
      unsigned BR7 : 1;
      unsigned BR8 : 1;
      unsigned BR9 : 1;
      unsigned BR10 : 1;
      unsigned BR11 : 1;
      unsigned BR12 : 1;
      unsigned BR13 : 1;
      unsigned BR14 : 1;
      unsigned BR15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOD_BRRBITS;
sfr far volatile typeGPIOD_BRRBITS GPIOD_BRRbits absolute 0x50000C28;

 typedef struct tagGPIOF_MODERBITS {
  union {
    struct {
      unsigned MODER0 : 2;
      unsigned MODER1 : 2;
      unsigned MODER2 : 2;
      unsigned MODER3 : 2;
      unsigned MODER4 : 2;
      unsigned MODER5 : 2;
      unsigned MODER6 : 2;
      unsigned MODER7 : 2;
      unsigned MODER8 : 2;
      unsigned MODER9 : 2;
      unsigned MODER10 : 2;
      unsigned MODER11 : 2;
      unsigned MODER12 : 2;
      unsigned MODER13 : 2;
      unsigned MODER14 : 2;
      unsigned MODER15 : 2;
    };
  };
} typeGPIOF_MODERBITS;
sfr far volatile typeGPIOF_MODERBITS GPIOF_MODERbits absolute 0x50001400;

 typedef struct tagGPIOF_OTYPERBITS {
  union {
    struct {
      unsigned OT0 : 1;
      unsigned OT1 : 1;
      unsigned OT2 : 1;
      unsigned OT3 : 1;
      unsigned OT4 : 1;
      unsigned OT5 : 1;
      unsigned OT6 : 1;
      unsigned OT7 : 1;
      unsigned OT8 : 1;
      unsigned OT9 : 1;
      unsigned OT10 : 1;
      unsigned OT11 : 1;
      unsigned OT12 : 1;
      unsigned OT13 : 1;
      unsigned OT14 : 1;
      unsigned OT15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOF_OTYPERBITS;
sfr far volatile typeGPIOF_OTYPERBITS GPIOF_OTYPERbits absolute 0x50001404;

 typedef struct tagGPIOF_OSPEEDRBITS {
  union {
    struct {
      unsigned OSPEEDR0 : 2;
      unsigned OSPEEDR1 : 2;
      unsigned OSPEEDR2 : 2;
      unsigned OSPEEDR3 : 2;
      unsigned OSPEEDR4 : 2;
      unsigned OSPEEDR5 : 2;
      unsigned OSPEEDR6 : 2;
      unsigned OSPEEDR7 : 2;
      unsigned OSPEEDR8 : 2;
      unsigned OSPEEDR9 : 2;
      unsigned OSPEEDR10 : 2;
      unsigned OSPEEDR11 : 2;
      unsigned OSPEEDR12 : 2;
      unsigned OSPEEDR13 : 2;
      unsigned OSPEEDR14 : 2;
      unsigned OSPEEDR15 : 2;
    };
  };
} typeGPIOF_OSPEEDRBITS;
sfr far volatile typeGPIOF_OSPEEDRBITS GPIOF_OSPEEDRbits absolute 0x50001408;

 typedef struct tagGPIOF_PUPDRBITS {
  union {
    struct {
      unsigned PUPDR0 : 2;
      unsigned PUPDR1 : 2;
      unsigned PUPDR2 : 2;
      unsigned PUPDR3 : 2;
      unsigned PUPDR4 : 2;
      unsigned PUPDR5 : 2;
      unsigned PUPDR6 : 2;
      unsigned PUPDR7 : 2;
      unsigned PUPDR8 : 2;
      unsigned PUPDR9 : 2;
      unsigned PUPDR10 : 2;
      unsigned PUPDR11 : 2;
      unsigned PUPDR12 : 2;
      unsigned PUPDR13 : 2;
      unsigned PUPDR14 : 2;
      unsigned PUPDR15 : 2;
    };
  };
} typeGPIOF_PUPDRBITS;
sfr far volatile typeGPIOF_PUPDRBITS GPIOF_PUPDRbits absolute 0x5000140C;

 typedef struct tagGPIOF_IDRBITS {
  union {
    struct {
      unsigned IDR0 : 1;
      unsigned IDR1 : 1;
      unsigned IDR2 : 1;
      unsigned IDR3 : 1;
      unsigned IDR4 : 1;
      unsigned IDR5 : 1;
      unsigned IDR6 : 1;
      unsigned IDR7 : 1;
      unsigned IDR8 : 1;
      unsigned IDR9 : 1;
      unsigned IDR10 : 1;
      unsigned IDR11 : 1;
      unsigned IDR12 : 1;
      unsigned IDR13 : 1;
      unsigned IDR14 : 1;
      unsigned IDR15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOF_IDRBITS;
sfr far volatile typeGPIOF_IDRBITS GPIOF_IDRbits absolute 0x50001410;

 typedef struct tagGPIOF_ODRBITS {
  union {
    struct {
      unsigned ODR0 : 1;
      unsigned ODR1 : 1;
      unsigned ODR2 : 1;
      unsigned ODR3 : 1;
      unsigned ODR4 : 1;
      unsigned ODR5 : 1;
      unsigned ODR6 : 1;
      unsigned ODR7 : 1;
      unsigned ODR8 : 1;
      unsigned ODR9 : 1;
      unsigned ODR10 : 1;
      unsigned ODR11 : 1;
      unsigned ODR12 : 1;
      unsigned ODR13 : 1;
      unsigned ODR14 : 1;
      unsigned ODR15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOF_ODRBITS;
sfr far volatile typeGPIOF_ODRBITS GPIOF_ODRbits absolute 0x50001414;

 typedef struct tagGPIOF_BSRRBITS {
  union {
    struct {
      unsigned BS0 : 1;
      unsigned BS1 : 1;
      unsigned BS2 : 1;
      unsigned BS3 : 1;
      unsigned BS4 : 1;
      unsigned BS5 : 1;
      unsigned BS6 : 1;
      unsigned BS7 : 1;
      unsigned BS8 : 1;
      unsigned BS9 : 1;
      unsigned BS10 : 1;
      unsigned BS11 : 1;
      unsigned BS12 : 1;
      unsigned BS13 : 1;
      unsigned BS14 : 1;
      unsigned BS15 : 1;
      unsigned BR0 : 1;
      unsigned BR1 : 1;
      unsigned BR2 : 1;
      unsigned BR3 : 1;
      unsigned BR4 : 1;
      unsigned BR5 : 1;
      unsigned BR6 : 1;
      unsigned BR7 : 1;
      unsigned BR8 : 1;
      unsigned BR9 : 1;
      unsigned BR10 : 1;
      unsigned BR11 : 1;
      unsigned BR12 : 1;
      unsigned BR13 : 1;
      unsigned BR14 : 1;
      unsigned BR15 : 1;
    };
  };
} typeGPIOF_BSRRBITS;
sfr far volatile typeGPIOF_BSRRBITS GPIOF_BSRRbits absolute 0x50001418;

 typedef struct tagGPIOF_LCKRBITS {
  union {
    struct {
      unsigned LCK0 : 1;
      unsigned LCK1 : 1;
      unsigned LCK2 : 1;
      unsigned LCK3 : 1;
      unsigned LCK4 : 1;
      unsigned LCK5 : 1;
      unsigned LCK6 : 1;
      unsigned LCK7 : 1;
      unsigned LCK8 : 1;
      unsigned LCK9 : 1;
      unsigned LCK10 : 1;
      unsigned LCK11 : 1;
      unsigned LCK12 : 1;
      unsigned LCK13 : 1;
      unsigned LCK14 : 1;
      unsigned LCK15 : 1;
      unsigned LCKK : 1;
      unsigned : 15;
    };
  };
} typeGPIOF_LCKRBITS;
sfr far volatile typeGPIOF_LCKRBITS GPIOF_LCKRbits absolute 0x5000141C;

 typedef struct tagGPIOF_AFRLBITS {
  union {
    struct {
      unsigned AFSEL0 : 4;
      unsigned AFSEL1 : 4;
      unsigned AFSEL2 : 4;
      unsigned AFSEL3 : 4;
      unsigned AFSEL4 : 4;
      unsigned AFSEL5 : 4;
      unsigned AFSEL6 : 4;
      unsigned AFSEL7 : 4;
    };
  };
} typeGPIOF_AFRLBITS;
sfr far volatile typeGPIOF_AFRLBITS GPIOF_AFRLbits absolute 0x50001420;

 typedef struct tagGPIOF_AFRHBITS {
  union {
    struct {
      unsigned AFSEL8 : 4;
      unsigned AFSEL9 : 4;
      unsigned AFSEL10 : 4;
      unsigned AFSEL11 : 4;
      unsigned AFSEL12 : 4;
      unsigned AFSEL13 : 4;
      unsigned AFSEL14 : 4;
      unsigned AFSEL15 : 4;
    };
  };
} typeGPIOF_AFRHBITS;
sfr far volatile typeGPIOF_AFRHBITS GPIOF_AFRHbits absolute 0x50001424;

 typedef struct tagGPIOF_BRRBITS {
  union {
    struct {
      unsigned BR0 : 1;
      unsigned BR1 : 1;
      unsigned BR2 : 1;
      unsigned BR3 : 1;
      unsigned BR4 : 1;
      unsigned BR5 : 1;
      unsigned BR6 : 1;
      unsigned BR7 : 1;
      unsigned BR8 : 1;
      unsigned BR9 : 1;
      unsigned BR10 : 1;
      unsigned BR11 : 1;
      unsigned BR12 : 1;
      unsigned BR13 : 1;
      unsigned BR14 : 1;
      unsigned BR15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOF_BRRBITS;
sfr far volatile typeGPIOF_BRRBITS GPIOF_BRRbits absolute 0x50001428;

 typedef struct tagRNG_CRBITS {
  union {
    struct {
      unsigned : 2;
      unsigned RNGEN : 1;
      unsigned IE : 1;
      unsigned : 1;
      unsigned CED : 1;
      unsigned BYP : 1;
      unsigned : 25;
    };
  };
} typeRNG_CRBITS;
sfr volatile typeRNG_CRBITS RNG_CRbits absolute 0x40025000;

 typedef struct tagRNG_SRBITS {
  union {
    struct {
      unsigned DRDY : 1;
      unsigned CECS : 1;
      unsigned SECS : 1;
      unsigned : 2;
      unsigned CEIS : 1;
      unsigned SEIS : 1;
      unsigned : 25;
    };
  };
} typeRNG_SRBITS;
sfr volatile typeRNG_SRBITS RNG_SRbits absolute 0x40025004;

 typedef struct tagRNG_DRBITS {
  union {
    struct {
      unsigned RNDATA : 32;
    };
  };
} typeRNG_DRBITS;
sfr volatile typeRNG_DRBITS RNG_DRbits absolute 0x40025008;

 typedef struct tagCRC_DRBITS {
  union {
    struct {
      unsigned DR : 32;
    };
  };
} typeCRC_DRBITS;
sfr volatile typeCRC_DRBITS CRC_DRbits absolute 0x40023000;

 typedef struct tagCRC_IDRBITS {
  union {
    struct {
      unsigned IDR : 32;
    };
  };
} typeCRC_IDRBITS;
sfr volatile typeCRC_IDRBITS CRC_IDRbits absolute 0x40023004;

 typedef struct tagCRC_CRBITS {
  union {
    struct {
      unsigned RESET_ : 1;
      unsigned : 2;
      unsigned POLYSIZE : 2;
      unsigned REV_IN : 2;
      unsigned REV_OUT : 1;
      unsigned : 24;
    };
  };
} typeCRC_CRBITS;
sfr volatile typeCRC_CRBITS CRC_CRbits absolute 0x40023008;

 typedef struct tagCRC_INITBITS {
  union {
    struct {
      unsigned CRC_INIT : 32;
    };
  };
} typeCRC_INITBITS;
sfr volatile typeCRC_INITBITS CRC_INITbits absolute 0x40023010;

 typedef struct tagCRC_POLBITS {
  union {
    struct {
      unsigned POL : 32;
    };
  };
} typeCRC_POLBITS;
sfr volatile typeCRC_POLBITS CRC_POLbits absolute 0x40023014;

 typedef struct tagEXTI_RTSR1BITS {
  union {
    struct {
      unsigned TR0 : 1;
      unsigned TR1 : 1;
      unsigned TR2 : 1;
      unsigned TR3 : 1;
      unsigned TR4 : 1;
      unsigned TR5 : 1;
      unsigned TR6 : 1;
      unsigned TR7 : 1;
      unsigned TR8 : 1;
      unsigned TR9 : 1;
      unsigned TR10 : 1;
      unsigned TR11 : 1;
      unsigned TR12 : 1;
      unsigned TR13 : 1;
      unsigned TR14 : 1;
      unsigned TR15 : 1;
      unsigned TR16 : 1;
      unsigned : 15;
    };
  };
} typeEXTI_RTSR1BITS;
sfr volatile typeEXTI_RTSR1BITS EXTI_RTSR1bits absolute 0x40021800;

 typedef struct tagEXTI_FTSR1BITS {
  union {
    struct {
      unsigned TR0 : 1;
      unsigned TR1 : 1;
      unsigned TR2 : 1;
      unsigned TR3 : 1;
      unsigned TR4 : 1;
      unsigned TR5 : 1;
      unsigned TR6 : 1;
      unsigned TR7 : 1;
      unsigned TR8 : 1;
      unsigned TR9 : 1;
      unsigned TR10 : 1;
      unsigned TR11 : 1;
      unsigned TR12 : 1;
      unsigned TR13 : 1;
      unsigned TR14 : 1;
      unsigned TR15 : 1;
      unsigned TR16 : 1;
      unsigned : 15;
    };
  };
} typeEXTI_FTSR1BITS;
sfr volatile typeEXTI_FTSR1BITS EXTI_FTSR1bits absolute 0x40021804;

 typedef struct tagEXTI_SWIER1BITS {
  union {
    struct {
      unsigned SWIER0 : 1;
      unsigned SWIER1 : 1;
      unsigned SWIER2 : 1;
      unsigned SWIER3 : 1;
      unsigned SWIER4 : 1;
      unsigned SWIER5 : 1;
      unsigned SWIER6 : 1;
      unsigned SWIER7 : 1;
      unsigned SWIER8 : 1;
      unsigned SWIER9 : 1;
      unsigned SWIER10 : 1;
      unsigned SWIER11 : 1;
      unsigned SWIER12 : 1;
      unsigned SWIER13 : 1;
      unsigned SWIER14 : 1;
      unsigned SWIER15 : 1;
      unsigned SWIER16 : 1;
      unsigned : 15;
    };
  };
} typeEXTI_SWIER1BITS;
sfr volatile typeEXTI_SWIER1BITS EXTI_SWIER1bits absolute 0x40021808;

 typedef struct tagEXTI_RPR1BITS {
  union {
    struct {
      unsigned RPIF0 : 1;
      unsigned RPIF1 : 1;
      unsigned RPIF2 : 1;
      unsigned RPIF3 : 1;
      unsigned RPIF4 : 1;
      unsigned RPIF5 : 1;
      unsigned RPIF6 : 1;
      unsigned RPIF7 : 1;
      unsigned RPIF8 : 1;
      unsigned RPIF9 : 1;
      unsigned RPIF10 : 1;
      unsigned RPIF11 : 1;
      unsigned RPIF12 : 1;
      unsigned RPIF13 : 1;
      unsigned RPIF14 : 1;
      unsigned RPIF15 : 1;
      unsigned RPIF16 : 1;
      unsigned : 15;
    };
  };
} typeEXTI_RPR1BITS;
sfr volatile typeEXTI_RPR1BITS EXTI_RPR1bits absolute 0x4002180C;

 typedef struct tagEXTI_FPR1BITS {
  union {
    struct {
      unsigned FPIF0 : 1;
      unsigned FPIF1 : 1;
      unsigned FPIF2 : 1;
      unsigned FPIF3 : 1;
      unsigned FPIF4 : 1;
      unsigned FPIF5 : 1;
      unsigned FPIF6 : 1;
      unsigned FPIF7 : 1;
      unsigned FPIF8 : 1;
      unsigned FPIF9 : 1;
      unsigned FPIF10 : 1;
      unsigned FPIF11 : 1;
      unsigned FPIF12 : 1;
      unsigned FPIF13 : 1;
      unsigned FPIF14 : 1;
      unsigned FPIF15 : 1;
      unsigned FPIF16 : 1;
      unsigned : 15;
    };
  };
} typeEXTI_FPR1BITS;
sfr volatile typeEXTI_FPR1BITS EXTI_FPR1bits absolute 0x40021810;

 typedef struct tagEXTI_EXTICR1BITS {
  union {
    struct {
      unsigned EXTI0_7 : 8;
      unsigned EXTI8_15 : 8;
      unsigned EXTI16_23 : 8;
      unsigned EXTI24_31 : 8;
    };
  };
} typeEXTI_EXTICR1BITS;
sfr volatile typeEXTI_EXTICR1BITS EXTI_EXTICR1bits absolute 0x40021860;

 typedef struct tagEXTI_EXTICR2BITS {
  union {
    struct {
      unsigned EXTI0_7 : 8;
      unsigned EXTI8_15 : 8;
      unsigned EXTI16_23 : 8;
      unsigned EXTI24_31 : 8;
    };
  };
} typeEXTI_EXTICR2BITS;
sfr volatile typeEXTI_EXTICR2BITS EXTI_EXTICR2bits absolute 0x40021864;

 typedef struct tagEXTI_EXTICR3BITS {
  union {
    struct {
      unsigned EXTI0_7 : 8;
      unsigned EXTI8_15 : 8;
      unsigned EXTI16_23 : 8;
      unsigned EXTI24_31 : 8;
    };
  };
} typeEXTI_EXTICR3BITS;
sfr volatile typeEXTI_EXTICR3BITS EXTI_EXTICR3bits absolute 0x40021868;

 typedef struct tagEXTI_EXTICR4BITS {
  union {
    struct {
      unsigned EXTI0_7 : 8;
      unsigned EXTI8_15 : 8;
      unsigned EXTI16_23 : 8;
      unsigned EXTI24_31 : 8;
    };
  };
} typeEXTI_EXTICR4BITS;
sfr volatile typeEXTI_EXTICR4BITS EXTI_EXTICR4bits absolute 0x4002186C;

 typedef struct tagEXTI_IMR1BITS {
  union {
    struct {
      unsigned IM0 : 1;
      unsigned IM1 : 1;
      unsigned IM2 : 1;
      unsigned IM3 : 1;
      unsigned IM4 : 1;
      unsigned IM5 : 1;
      unsigned IM6 : 1;
      unsigned IM7 : 1;
      unsigned IM8 : 1;
      unsigned IM9 : 1;
      unsigned IM10 : 1;
      unsigned IM11 : 1;
      unsigned IM12 : 1;
      unsigned IM13 : 1;
      unsigned IM14 : 1;
      unsigned IM15 : 1;
      unsigned IM16 : 1;
      unsigned : 2;
      unsigned IM19 : 1;
      unsigned IM20 : 1;
      unsigned IM21 : 1;
      unsigned IM22 : 1;
      unsigned IM23 : 1;
      unsigned IM24 : 1;
      unsigned IM25 : 1;
      unsigned IM26 : 1;
      unsigned : 1;
      unsigned IM28 : 1;
      unsigned IM29 : 1;
      unsigned IM30 : 1;
      unsigned IM31 : 1;
    };
  };
} typeEXTI_IMR1BITS;
sfr volatile typeEXTI_IMR1BITS EXTI_IMR1bits absolute 0x40021880;

 typedef struct tagEXTI_EMR1BITS {
  union {
    struct {
      unsigned EM0 : 1;
      unsigned EM1 : 1;
      unsigned EM2 : 1;
      unsigned EM3 : 1;
      unsigned EM4 : 1;
      unsigned EM5 : 1;
      unsigned EM6 : 1;
      unsigned EM7 : 1;
      unsigned EM8 : 1;
      unsigned EM9 : 1;
      unsigned EM10 : 1;
      unsigned EM11 : 1;
      unsigned EM12 : 1;
      unsigned EM13 : 1;
      unsigned EM14 : 1;
      unsigned EM15 : 1;
      unsigned EM16 : 1;
      unsigned : 2;
      unsigned EM19 : 1;
      unsigned : 1;
      unsigned EM21 : 1;
      unsigned : 1;
      unsigned EM23 : 1;
      unsigned : 1;
      unsigned EM25 : 1;
      unsigned EM26 : 1;
      unsigned : 1;
      unsigned EM28 : 1;
      unsigned EM29 : 1;
      unsigned EM30 : 1;
      unsigned EM31 : 1;
    };
  };
} typeEXTI_EMR1BITS;
sfr volatile typeEXTI_EMR1BITS EXTI_EMR1bits absolute 0x40021884;

 typedef struct tagTIM16_CR1BITS {
  union {
    struct {
      unsigned CEN : 1;
      unsigned UDIS : 1;
      unsigned URS : 1;
      unsigned OPM : 1;
      unsigned : 3;
      unsigned ARPE : 1;
      unsigned CKD : 2;
      unsigned : 1;
      unsigned UIFREMAP : 1;
      unsigned : 20;
    };
  };
} typeTIM16_CR1BITS;
sfr volatile typeTIM16_CR1BITS TIM16_CR1bits absolute 0x40014400;

 typedef struct tagTIM16_CR2BITS {
  union {
    struct {
      unsigned CCPC : 1;
      unsigned : 1;
      unsigned CCUS : 1;
      unsigned CCDS : 1;
      unsigned : 4;
      unsigned OIS1 : 1;
      unsigned OIS1N : 1;
      unsigned : 22;
    };
  };
} typeTIM16_CR2BITS;
sfr volatile typeTIM16_CR2BITS TIM16_CR2bits absolute 0x40014404;

 typedef struct tagTIM16_DIERBITS {
  union {
    struct {
      unsigned UIE : 1;
      unsigned CC1IE : 1;
      unsigned : 3;
      unsigned COMIE : 1;
      unsigned : 1;
      unsigned BIE : 1;
      unsigned UDE : 1;
      unsigned CC1DE : 1;
      unsigned : 3;
      unsigned COMDE : 1;
      unsigned : 18;
    };
  };
} typeTIM16_DIERBITS;
sfr volatile typeTIM16_DIERBITS TIM16_DIERbits absolute 0x4001440C;

 typedef struct tagTIM16_SRBITS {
  union {
    struct {
      unsigned UIF : 1;
      unsigned CC1IF : 1;
      unsigned : 3;
      unsigned COMIF : 1;
      unsigned : 1;
      unsigned BIF : 1;
      unsigned : 1;
      unsigned CC1OF : 1;
      unsigned : 22;
    };
  };
} typeTIM16_SRBITS;
sfr volatile typeTIM16_SRBITS TIM16_SRbits absolute 0x40014410;

 typedef struct tagTIM16_EGRBITS {
  union {
    struct {
      unsigned UG : 1;
      unsigned CC1G : 1;
      unsigned : 3;
      unsigned COMG : 1;
      unsigned : 1;
      unsigned BG : 1;
      unsigned : 24;
    };
  };
} typeTIM16_EGRBITS;
sfr volatile typeTIM16_EGRBITS TIM16_EGRbits absolute 0x40014414;

 typedef struct tagTIM16_CCMR1_OutputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned OC1FE : 1;
      unsigned OC1PE : 1;
      unsigned OC1M : 3;
      unsigned : 9;
      unsigned OC1M_2 : 1;
      unsigned : 15;
    };
  };
} typeTIM16_CCMR1_OutputBITS;
sfr volatile typeTIM16_CCMR1_OutputBITS TIM16_CCMR1_Outputbits absolute 0x40014418;

 typedef struct tagTIM16_CCMR1_InputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned IC1PSC : 2;
      unsigned IC1F : 4;
      unsigned : 24;
    };
  };
} typeTIM16_CCMR1_InputBITS;
sfr volatile typeTIM16_CCMR1_InputBITS TIM16_CCMR1_Inputbits absolute 0x40014418;

 typedef struct tagTIM16_CCERBITS {
  union {
    struct {
      unsigned CC1E : 1;
      unsigned CC1P : 1;
      unsigned CC1NE : 1;
      unsigned CC1NP : 1;
      unsigned : 28;
    };
  };
} typeTIM16_CCERBITS;
sfr volatile typeTIM16_CCERBITS TIM16_CCERbits absolute 0x40014420;

 typedef struct tagTIM16_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 15;
      unsigned UIFCPY : 1;
    };
  };
} typeTIM16_CNTBITS;
sfr volatile typeTIM16_CNTBITS TIM16_CNTbits absolute 0x40014424;

 typedef struct tagTIM16_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM16_PSCBITS;
sfr volatile typeTIM16_PSCBITS TIM16_PSCbits absolute 0x40014428;

 typedef struct tagTIM16_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM16_ARRBITS;
sfr volatile typeTIM16_ARRBITS TIM16_ARRbits absolute 0x4001442C;

 typedef struct tagTIM16_RCRBITS {
  union {
    struct {
      unsigned REP : 8;
      unsigned : 24;
    };
  };
} typeTIM16_RCRBITS;
sfr volatile typeTIM16_RCRBITS TIM16_RCRbits absolute 0x40014430;

 typedef struct tagTIM16_CCR1BITS {
  union {
    struct {
      unsigned CCR1 : 16;
      unsigned : 16;
    };
  };
} typeTIM16_CCR1BITS;
sfr volatile typeTIM16_CCR1BITS TIM16_CCR1bits absolute 0x40014434;

 typedef struct tagTIM16_BDTRBITS {
  union {
    struct {
      unsigned DTG : 8;
      unsigned LOCK : 2;
      unsigned OSSI : 1;
      unsigned OSSR : 1;
      unsigned BKE : 1;
      unsigned BKP : 1;
      unsigned AOE : 1;
      unsigned MOE : 1;
      unsigned BKF : 4;
      unsigned : 6;
      unsigned BKDSRM : 1;
      unsigned : 1;
      unsigned BKBID : 1;
      unsigned : 3;
    };
  };
} typeTIM16_BDTRBITS;
sfr volatile typeTIM16_BDTRBITS TIM16_BDTRbits absolute 0x40014444;

 typedef struct tagTIM16_DCRBITS {
  union {
    struct {
      unsigned DBA : 5;
      unsigned : 3;
      unsigned DBL : 5;
      unsigned : 19;
    };
  };
} typeTIM16_DCRBITS;
sfr volatile typeTIM16_DCRBITS TIM16_DCRbits absolute 0x40014448;

 typedef struct tagTIM16_DMARBITS {
  union {
    struct {
      unsigned DMAB : 16;
      unsigned : 16;
    };
  };
} typeTIM16_DMARBITS;
sfr volatile typeTIM16_DMARBITS TIM16_DMARbits absolute 0x4001444C;

 typedef struct tagTIM16_AF1BITS {
  union {
    struct {
      unsigned BKINE : 1;
      unsigned BKCMP1E : 1;
      unsigned BKCMP2E : 1;
      unsigned : 5;
      unsigned BKDFBK1E : 1;
      unsigned BKINP : 1;
      unsigned BKCMP1P : 1;
      unsigned BKCMP2P : 1;
      unsigned : 20;
    };
  };
} typeTIM16_AF1BITS;
sfr volatile typeTIM16_AF1BITS TIM16_AF1bits absolute 0x40014460;

 typedef struct tagTIM16_TISELBITS {
  union {
    struct {
      unsigned TI1SEL : 4;
      unsigned : 28;
    };
  };
} typeTIM16_TISELBITS;
sfr volatile typeTIM16_TISELBITS TIM16_TISELbits absolute 0x40014468;

 typedef struct tagTIM17_CR1BITS {
  union {
    struct {
      unsigned CEN : 1;
      unsigned UDIS : 1;
      unsigned URS : 1;
      unsigned OPM : 1;
      unsigned : 3;
      unsigned ARPE : 1;
      unsigned CKD : 2;
      unsigned : 1;
      unsigned UIFREMAP : 1;
      unsigned : 20;
    };
  };
} typeTIM17_CR1BITS;
sfr volatile typeTIM17_CR1BITS TIM17_CR1bits absolute 0x40014800;

 typedef struct tagTIM17_CR2BITS {
  union {
    struct {
      unsigned CCPC : 1;
      unsigned : 1;
      unsigned CCUS : 1;
      unsigned CCDS : 1;
      unsigned : 4;
      unsigned OIS1 : 1;
      unsigned OIS1N : 1;
      unsigned : 22;
    };
  };
} typeTIM17_CR2BITS;
sfr volatile typeTIM17_CR2BITS TIM17_CR2bits absolute 0x40014804;

 typedef struct tagTIM17_DIERBITS {
  union {
    struct {
      unsigned UIE : 1;
      unsigned CC1IE : 1;
      unsigned : 3;
      unsigned COMIE : 1;
      unsigned : 1;
      unsigned BIE : 1;
      unsigned UDE : 1;
      unsigned CC1DE : 1;
      unsigned : 3;
      unsigned COMDE : 1;
      unsigned : 18;
    };
  };
} typeTIM17_DIERBITS;
sfr volatile typeTIM17_DIERBITS TIM17_DIERbits absolute 0x4001480C;

 typedef struct tagTIM17_SRBITS {
  union {
    struct {
      unsigned UIF : 1;
      unsigned CC1IF : 1;
      unsigned : 3;
      unsigned COMIF : 1;
      unsigned : 1;
      unsigned BIF : 1;
      unsigned : 1;
      unsigned CC1OF : 1;
      unsigned : 22;
    };
  };
} typeTIM17_SRBITS;
sfr volatile typeTIM17_SRBITS TIM17_SRbits absolute 0x40014810;

 typedef struct tagTIM17_EGRBITS {
  union {
    struct {
      unsigned UG : 1;
      unsigned CC1G : 1;
      unsigned : 3;
      unsigned COMG : 1;
      unsigned : 1;
      unsigned BG : 1;
      unsigned : 24;
    };
  };
} typeTIM17_EGRBITS;
sfr volatile typeTIM17_EGRBITS TIM17_EGRbits absolute 0x40014814;

 typedef struct tagTIM17_CCMR1_OutputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned OC1FE : 1;
      unsigned OC1PE : 1;
      unsigned OC1M : 3;
      unsigned : 9;
      unsigned OC1M_2 : 1;
      unsigned : 15;
    };
  };
} typeTIM17_CCMR1_OutputBITS;
sfr volatile typeTIM17_CCMR1_OutputBITS TIM17_CCMR1_Outputbits absolute 0x40014818;

 typedef struct tagTIM17_CCMR1_InputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned IC1PSC : 2;
      unsigned IC1F : 4;
      unsigned : 24;
    };
  };
} typeTIM17_CCMR1_InputBITS;
sfr volatile typeTIM17_CCMR1_InputBITS TIM17_CCMR1_Inputbits absolute 0x40014818;

 typedef struct tagTIM17_CCERBITS {
  union {
    struct {
      unsigned CC1E : 1;
      unsigned CC1P : 1;
      unsigned CC1NE : 1;
      unsigned CC1NP : 1;
      unsigned : 28;
    };
  };
} typeTIM17_CCERBITS;
sfr volatile typeTIM17_CCERBITS TIM17_CCERbits absolute 0x40014820;

 typedef struct tagTIM17_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 15;
      unsigned UIFCPY : 1;
    };
  };
} typeTIM17_CNTBITS;
sfr volatile typeTIM17_CNTBITS TIM17_CNTbits absolute 0x40014824;

 typedef struct tagTIM17_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM17_PSCBITS;
sfr volatile typeTIM17_PSCBITS TIM17_PSCbits absolute 0x40014828;

 typedef struct tagTIM17_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM17_ARRBITS;
sfr volatile typeTIM17_ARRBITS TIM17_ARRbits absolute 0x4001482C;

 typedef struct tagTIM17_RCRBITS {
  union {
    struct {
      unsigned REP : 8;
      unsigned : 24;
    };
  };
} typeTIM17_RCRBITS;
sfr volatile typeTIM17_RCRBITS TIM17_RCRbits absolute 0x40014830;

 typedef struct tagTIM17_CCR1BITS {
  union {
    struct {
      unsigned CCR1 : 16;
      unsigned : 16;
    };
  };
} typeTIM17_CCR1BITS;
sfr volatile typeTIM17_CCR1BITS TIM17_CCR1bits absolute 0x40014834;

 typedef struct tagTIM17_BDTRBITS {
  union {
    struct {
      unsigned DTG : 8;
      unsigned LOCK : 2;
      unsigned OSSI : 1;
      unsigned OSSR : 1;
      unsigned BKE : 1;
      unsigned BKP : 1;
      unsigned AOE : 1;
      unsigned MOE : 1;
      unsigned BKF : 4;
      unsigned : 6;
      unsigned BKDSRM : 1;
      unsigned : 1;
      unsigned BKBID : 1;
      unsigned : 3;
    };
  };
} typeTIM17_BDTRBITS;
sfr volatile typeTIM17_BDTRBITS TIM17_BDTRbits absolute 0x40014844;

 typedef struct tagTIM17_DCRBITS {
  union {
    struct {
      unsigned DBA : 5;
      unsigned : 3;
      unsigned DBL : 5;
      unsigned : 19;
    };
  };
} typeTIM17_DCRBITS;
sfr volatile typeTIM17_DCRBITS TIM17_DCRbits absolute 0x40014848;

 typedef struct tagTIM17_DMARBITS {
  union {
    struct {
      unsigned DMAB : 16;
      unsigned : 16;
    };
  };
} typeTIM17_DMARBITS;
sfr volatile typeTIM17_DMARBITS TIM17_DMARbits absolute 0x4001484C;

 typedef struct tagTIM17_AF1BITS {
  union {
    struct {
      unsigned BKINE : 1;
      unsigned BKCMP1E : 1;
      unsigned BKCMP2E : 1;
      unsigned : 5;
      unsigned BKDFBK1E : 1;
      unsigned BKINP : 1;
      unsigned BKCMP1P : 1;
      unsigned BKCMP2P : 1;
      unsigned : 20;
    };
  };
} typeTIM17_AF1BITS;
sfr volatile typeTIM17_AF1BITS TIM17_AF1bits absolute 0x40014860;

 typedef struct tagTIM17_TISELBITS {
  union {
    struct {
      unsigned TI1SEL : 4;
      unsigned : 28;
    };
  };
} typeTIM17_TISELBITS;
sfr volatile typeTIM17_TISELBITS TIM17_TISELbits absolute 0x40014868;

 typedef struct tagUSART1_CR1BITS {
  union {
    struct {
      unsigned UE : 1;
      unsigned UESM : 1;
      unsigned RE : 1;
      unsigned TE : 1;
      unsigned IDLEIE : 1;
      unsigned RXNEIE : 1;
      unsigned TCIE : 1;
      unsigned TXEIE : 1;
      unsigned PEIE : 1;
      unsigned PS : 1;
      unsigned PCE : 1;
      unsigned WAKE : 1;
      unsigned M0 : 1;
      unsigned MME : 1;
      unsigned CMIE : 1;
      unsigned OVER8 : 1;
      unsigned DEDT : 5;
      unsigned DEAT : 5;
      unsigned RTOIE : 1;
      unsigned EOBIE : 1;
      unsigned M1 : 1;
      unsigned FIFOEN : 1;
      unsigned TXFEIE : 1;
      unsigned RXFFIE : 1;
    };
  };
} typeUSART1_CR1BITS;
sfr volatile typeUSART1_CR1BITS USART1_CR1bits absolute 0x40013800;

 typedef struct tagUSART1_CR2BITS {
  union {
    struct {
      unsigned SLVEN : 1;
      unsigned : 2;
      unsigned DIS_NSS : 1;
      unsigned ADDM7 : 1;
      unsigned LBDL : 1;
      unsigned LBDIE : 1;
      unsigned : 1;
      unsigned LBCL : 1;
      unsigned CPHA : 1;
      unsigned CPOL : 1;
      unsigned CLKEN : 1;
      unsigned STOP : 2;
      unsigned LINEN : 1;
      unsigned SWAP : 1;
      unsigned RXINV : 1;
      unsigned TXINV : 1;
      unsigned TAINV : 1;
      unsigned MSBFIRST : 1;
      unsigned ABREN : 1;
      unsigned ABRMOD : 2;
      unsigned RTOEN : 1;
      unsigned ADD0_3 : 4;
      unsigned ADD4_7 : 4;
    };
  };
} typeUSART1_CR2BITS;
sfr volatile typeUSART1_CR2BITS USART1_CR2bits absolute 0x40013804;

 typedef struct tagUSART1_CR3BITS {
  union {
    struct {
      unsigned EIE : 1;
      unsigned IREN : 1;
      unsigned IRLP : 1;
      unsigned HDSEL : 1;
      unsigned NACK : 1;
      unsigned SCEN : 1;
      unsigned DMAR : 1;
      unsigned DMAT : 1;
      unsigned RTSE : 1;
      unsigned CTSE : 1;
      unsigned CTSIE : 1;
      unsigned ONEBIT : 1;
      unsigned OVRDIS : 1;
      unsigned DDRE : 1;
      unsigned DEM : 1;
      unsigned DEP : 1;
      unsigned : 1;
      unsigned SCARCNT : 3;
      unsigned WUS : 2;
      unsigned WUFIE : 1;
      unsigned TXFTIE : 1;
      unsigned TCBGTIE : 1;
      unsigned RXFTCFG : 3;
      unsigned RXFTIE : 1;
      unsigned TXFTCFG : 3;
    };
  };
} typeUSART1_CR3BITS;
sfr volatile typeUSART1_CR3BITS USART1_CR3bits absolute 0x40013808;

 typedef struct tagUSART1_BRRBITS {
  union {
    struct {
      unsigned BRR_0_3 : 4;
      unsigned BRR_4_15 : 12;
      unsigned : 16;
    };
  };
} typeUSART1_BRRBITS;
sfr volatile typeUSART1_BRRBITS USART1_BRRbits absolute 0x4001380C;

 typedef struct tagUSART1_GTPRBITS {
  union {
    struct {
      unsigned PSC : 8;
      unsigned GT : 8;
      unsigned : 16;
    };
  };
} typeUSART1_GTPRBITS;
sfr volatile typeUSART1_GTPRBITS USART1_GTPRbits absolute 0x40013810;

 typedef struct tagUSART1_RTORBITS {
  union {
    struct {
      unsigned RTO : 24;
      unsigned BLEN : 8;
    };
  };
} typeUSART1_RTORBITS;
sfr volatile typeUSART1_RTORBITS USART1_RTORbits absolute 0x40013814;

 typedef struct tagUSART1_RQRBITS {
  union {
    struct {
      unsigned ABRRQ : 1;
      unsigned SBKRQ : 1;
      unsigned MMRQ : 1;
      unsigned RXFRQ : 1;
      unsigned TXFRQ : 1;
      unsigned : 27;
    };
  };
} typeUSART1_RQRBITS;
sfr volatile typeUSART1_RQRBITS USART1_RQRbits absolute 0x40013818;

 typedef struct tagUSART1_ISRBITS {
  union {
    struct {
      unsigned PE : 1;
      unsigned FE : 1;
      unsigned NF : 1;
      unsigned ORE : 1;
      unsigned IDLE : 1;
      unsigned RXNE : 1;
      unsigned TC : 1;
      unsigned TXE : 1;
      unsigned LBDF : 1;
      unsigned CTSIF : 1;
      unsigned CTS : 1;
      unsigned RTOF : 1;
      unsigned EOBF : 1;
      unsigned UDR : 1;
      unsigned ABRE : 1;
      unsigned ABRF : 1;
      unsigned BUSY : 1;
      unsigned CMF : 1;
      unsigned SBKF : 1;
      unsigned RWU : 1;
      unsigned WUF : 1;
      unsigned TEACK : 1;
      unsigned REACK : 1;
      unsigned TXFE : 1;
      unsigned RXFF : 1;
      unsigned TCBGT : 1;
      unsigned RXFT : 1;
      unsigned TXFT : 1;
      unsigned : 4;
    };
  };
} typeUSART1_ISRBITS;
sfr volatile typeUSART1_ISRBITS USART1_ISRbits absolute 0x4001381C;

 typedef struct tagUSART1_ICRBITS {
  union {
    struct {
      unsigned PECF : 1;
      unsigned FECF : 1;
      unsigned NCF : 1;
      unsigned ORECF : 1;
      unsigned IDLECF : 1;
      unsigned TXFECF : 1;
      unsigned TCCF : 1;
      unsigned TCBGTCF : 1;
      unsigned LBDCF : 1;
      unsigned CTSCF : 1;
      unsigned : 1;
      unsigned RTOCF : 1;
      unsigned EOBCF : 1;
      unsigned UDRCF : 1;
      unsigned : 3;
      unsigned CMCF : 1;
      unsigned : 2;
      unsigned WUCF : 1;
      unsigned : 11;
    };
  };
} typeUSART1_ICRBITS;
sfr volatile typeUSART1_ICRBITS USART1_ICRbits absolute 0x40013820;

 typedef struct tagUSART1_RDRBITS {
  union {
    struct {
      unsigned RDR : 9;
      unsigned : 23;
    };
  };
} typeUSART1_RDRBITS;
sfr volatile typeUSART1_RDRBITS USART1_RDRbits absolute 0x40013824;

 typedef struct tagUSART1_TDRBITS {
  union {
    struct {
      unsigned TDR : 9;
      unsigned : 23;
    };
  };
} typeUSART1_TDRBITS;
sfr volatile typeUSART1_TDRBITS USART1_TDRbits absolute 0x40013828;

 typedef struct tagUSART1_PRESCBITS {
  union {
    struct {
      unsigned PRESCALER : 4;
      unsigned : 28;
    };
  };
} typeUSART1_PRESCBITS;
sfr volatile typeUSART1_PRESCBITS USART1_PRESCbits absolute 0x4001382C;

 typedef struct tagUSART2_CR1BITS {
  union {
    struct {
      unsigned UE : 1;
      unsigned UESM : 1;
      unsigned RE : 1;
      unsigned TE : 1;
      unsigned IDLEIE : 1;
      unsigned RXNEIE : 1;
      unsigned TCIE : 1;
      unsigned TXEIE : 1;
      unsigned PEIE : 1;
      unsigned PS : 1;
      unsigned PCE : 1;
      unsigned WAKE : 1;
      unsigned M0 : 1;
      unsigned MME : 1;
      unsigned CMIE : 1;
      unsigned OVER8 : 1;
      unsigned DEDT : 5;
      unsigned DEAT : 5;
      unsigned RTOIE : 1;
      unsigned EOBIE : 1;
      unsigned M1 : 1;
      unsigned FIFOEN : 1;
      unsigned TXFEIE : 1;
      unsigned RXFFIE : 1;
    };
  };
} typeUSART2_CR1BITS;
sfr volatile typeUSART2_CR1BITS USART2_CR1bits absolute 0x40004400;

 typedef struct tagUSART2_CR2BITS {
  union {
    struct {
      unsigned SLVEN : 1;
      unsigned : 2;
      unsigned DIS_NSS : 1;
      unsigned ADDM7 : 1;
      unsigned LBDL : 1;
      unsigned LBDIE : 1;
      unsigned : 1;
      unsigned LBCL : 1;
      unsigned CPHA : 1;
      unsigned CPOL : 1;
      unsigned CLKEN : 1;
      unsigned STOP : 2;
      unsigned LINEN : 1;
      unsigned SWAP : 1;
      unsigned RXINV : 1;
      unsigned TXINV : 1;
      unsigned TAINV : 1;
      unsigned MSBFIRST : 1;
      unsigned ABREN : 1;
      unsigned ABRMOD : 2;
      unsigned RTOEN : 1;
      unsigned ADD0_3 : 4;
      unsigned ADD4_7 : 4;
    };
  };
} typeUSART2_CR2BITS;
sfr volatile typeUSART2_CR2BITS USART2_CR2bits absolute 0x40004404;

 typedef struct tagUSART2_CR3BITS {
  union {
    struct {
      unsigned EIE : 1;
      unsigned IREN : 1;
      unsigned IRLP : 1;
      unsigned HDSEL : 1;
      unsigned NACK : 1;
      unsigned SCEN : 1;
      unsigned DMAR : 1;
      unsigned DMAT : 1;
      unsigned RTSE : 1;
      unsigned CTSE : 1;
      unsigned CTSIE : 1;
      unsigned ONEBIT : 1;
      unsigned OVRDIS : 1;
      unsigned DDRE : 1;
      unsigned DEM : 1;
      unsigned DEP : 1;
      unsigned : 1;
      unsigned SCARCNT : 3;
      unsigned WUS : 2;
      unsigned WUFIE : 1;
      unsigned TXFTIE : 1;
      unsigned TCBGTIE : 1;
      unsigned RXFTCFG : 3;
      unsigned RXFTIE : 1;
      unsigned TXFTCFG : 3;
    };
  };
} typeUSART2_CR3BITS;
sfr volatile typeUSART2_CR3BITS USART2_CR3bits absolute 0x40004408;

 typedef struct tagUSART2_BRRBITS {
  union {
    struct {
      unsigned BRR_0_3 : 4;
      unsigned BRR_4_15 : 12;
      unsigned : 16;
    };
  };
} typeUSART2_BRRBITS;
sfr volatile typeUSART2_BRRBITS USART2_BRRbits absolute 0x4000440C;

 typedef struct tagUSART2_GTPRBITS {
  union {
    struct {
      unsigned PSC : 8;
      unsigned GT : 8;
      unsigned : 16;
    };
  };
} typeUSART2_GTPRBITS;
sfr volatile typeUSART2_GTPRBITS USART2_GTPRbits absolute 0x40004410;

 typedef struct tagUSART2_RTORBITS {
  union {
    struct {
      unsigned RTO : 24;
      unsigned BLEN : 8;
    };
  };
} typeUSART2_RTORBITS;
sfr volatile typeUSART2_RTORBITS USART2_RTORbits absolute 0x40004414;

 typedef struct tagUSART2_RQRBITS {
  union {
    struct {
      unsigned ABRRQ : 1;
      unsigned SBKRQ : 1;
      unsigned MMRQ : 1;
      unsigned RXFRQ : 1;
      unsigned TXFRQ : 1;
      unsigned : 27;
    };
  };
} typeUSART2_RQRBITS;
sfr volatile typeUSART2_RQRBITS USART2_RQRbits absolute 0x40004418;

 typedef struct tagUSART2_ISRBITS {
  union {
    struct {
      unsigned PE : 1;
      unsigned FE : 1;
      unsigned NF : 1;
      unsigned ORE : 1;
      unsigned IDLE : 1;
      unsigned RXNE : 1;
      unsigned TC : 1;
      unsigned TXE : 1;
      unsigned LBDF : 1;
      unsigned CTSIF : 1;
      unsigned CTS : 1;
      unsigned RTOF : 1;
      unsigned EOBF : 1;
      unsigned UDR : 1;
      unsigned ABRE : 1;
      unsigned ABRF : 1;
      unsigned BUSY : 1;
      unsigned CMF : 1;
      unsigned SBKF : 1;
      unsigned RWU : 1;
      unsigned WUF : 1;
      unsigned TEACK : 1;
      unsigned REACK : 1;
      unsigned TXFE : 1;
      unsigned RXFF : 1;
      unsigned TCBGT : 1;
      unsigned RXFT : 1;
      unsigned TXFT : 1;
      unsigned : 4;
    };
  };
} typeUSART2_ISRBITS;
sfr volatile typeUSART2_ISRBITS USART2_ISRbits absolute 0x4000441C;

 typedef struct tagUSART2_ICRBITS {
  union {
    struct {
      unsigned PECF : 1;
      unsigned FECF : 1;
      unsigned NCF : 1;
      unsigned ORECF : 1;
      unsigned IDLECF : 1;
      unsigned TXFECF : 1;
      unsigned TCCF : 1;
      unsigned TCBGTCF : 1;
      unsigned LBDCF : 1;
      unsigned CTSCF : 1;
      unsigned : 1;
      unsigned RTOCF : 1;
      unsigned EOBCF : 1;
      unsigned UDRCF : 1;
      unsigned : 3;
      unsigned CMCF : 1;
      unsigned : 2;
      unsigned WUCF : 1;
      unsigned : 11;
    };
  };
} typeUSART2_ICRBITS;
sfr volatile typeUSART2_ICRBITS USART2_ICRbits absolute 0x40004420;

 typedef struct tagUSART2_RDRBITS {
  union {
    struct {
      unsigned RDR : 9;
      unsigned : 23;
    };
  };
} typeUSART2_RDRBITS;
sfr volatile typeUSART2_RDRBITS USART2_RDRbits absolute 0x40004424;

 typedef struct tagUSART2_TDRBITS {
  union {
    struct {
      unsigned TDR : 9;
      unsigned : 23;
    };
  };
} typeUSART2_TDRBITS;
sfr volatile typeUSART2_TDRBITS USART2_TDRbits absolute 0x40004428;

 typedef struct tagUSART2_PRESCBITS {
  union {
    struct {
      unsigned PRESCALER : 4;
      unsigned : 28;
    };
  };
} typeUSART2_PRESCBITS;
sfr volatile typeUSART2_PRESCBITS USART2_PRESCbits absolute 0x4000442C;

 typedef struct tagSPI1_CR1BITS {
  union {
    struct {
      unsigned CPHA : 1;
      unsigned CPOL : 1;
      unsigned MSTR : 1;
      unsigned BR : 3;
      unsigned SPE : 1;
      unsigned LSBFIRST : 1;
      unsigned SSI : 1;
      unsigned SSM : 1;
      unsigned RXONLY : 1;
      unsigned DFF : 1;
      unsigned CRCNEXT : 1;
      unsigned CRCEN : 1;
      unsigned BIDIOE : 1;
      unsigned BIDIMODE : 1;
      unsigned : 16;
    };
  };
} typeSPI1_CR1BITS;
sfr volatile typeSPI1_CR1BITS SPI1_CR1bits absolute 0x40013000;

 typedef struct tagSPI1_CR2BITS {
  union {
    struct {
      unsigned RXDMAEN : 1;
      unsigned TXDMAEN : 1;
      unsigned SSOE : 1;
      unsigned NSSP : 1;
      unsigned FRF : 1;
      unsigned ERRIE : 1;
      unsigned RXNEIE : 1;
      unsigned TXEIE : 1;
      unsigned DS : 4;
      unsigned FRXTH : 1;
      unsigned LDMA_RX : 1;
      unsigned LDMA_TX : 1;
      unsigned : 17;
    };
  };
} typeSPI1_CR2BITS;
sfr volatile typeSPI1_CR2BITS SPI1_CR2bits absolute 0x40013004;

 typedef struct tagSPI1_SRBITS {
  union {
    struct {
      unsigned RXNE : 1;
      unsigned TXE : 1;
      unsigned CHSIDE : 1;
      unsigned UDR : 1;
      unsigned CRCERR : 1;
      unsigned MODF_ : 1;
      unsigned OVR : 1;
      unsigned BSY : 1;
      unsigned TIFRFE : 1;
      unsigned FRLVL : 2;
      unsigned FTLVL : 2;
      unsigned : 19;
    };
  };
} typeSPI1_SRBITS;
sfr volatile typeSPI1_SRBITS SPI1_SRbits absolute 0x40013008;

 typedef struct tagSPI1_DRBITS {
  union {
    struct {
      unsigned DR : 16;
      unsigned : 16;
    };
  };
} typeSPI1_DRBITS;
sfr volatile typeSPI1_DRBITS SPI1_DRbits absolute 0x4001300C;

 typedef struct tagSPI1_CRCPRBITS {
  union {
    struct {
      unsigned CRCPOLY : 16;
      unsigned : 16;
    };
  };
} typeSPI1_CRCPRBITS;
sfr volatile typeSPI1_CRCPRBITS SPI1_CRCPRbits absolute 0x40013010;

 typedef struct tagSPI1_RXCRCRBITS {
  union {
    struct {
      unsigned RxCRC : 16;
      unsigned : 16;
    };
  };
} typeSPI1_RXCRCRBITS;
sfr volatile typeSPI1_RXCRCRBITS SPI1_RXCRCRbits absolute 0x40013014;

 typedef struct tagSPI1_TXCRCRBITS {
  union {
    struct {
      unsigned TxCRC : 16;
      unsigned : 16;
    };
  };
} typeSPI1_TXCRCRBITS;
sfr volatile typeSPI1_TXCRCRBITS SPI1_TXCRCRbits absolute 0x40013018;

 typedef struct tagSPI1_I2SCFGRBITS {
  union {
    struct {
      unsigned CHLEN : 1;
      unsigned DATLEN : 2;
      unsigned CKPOL : 1;
      unsigned I2SSTD : 2;
      unsigned : 1;
      unsigned PCMSYNC : 1;
      unsigned I2SCFG : 2;
      unsigned SE2 : 1;
      unsigned I2SMOD : 1;
      unsigned : 20;
    };
  };
} typeSPI1_I2SCFGRBITS;
sfr volatile typeSPI1_I2SCFGRBITS SPI1_I2SCFGRbits absolute 0x4001301C;

 typedef struct tagSPI1_I2SPRBITS {
  union {
    struct {
      unsigned I2SDIV : 8;
      unsigned ODD : 1;
      unsigned MCKOE : 1;
      unsigned : 22;
    };
  };
} typeSPI1_I2SPRBITS;
sfr volatile typeSPI1_I2SPRBITS SPI1_I2SPRbits absolute 0x40013020;

 typedef struct tagSPI2_CR1BITS {
  union {
    struct {
      unsigned CPHA : 1;
      unsigned CPOL : 1;
      unsigned MSTR : 1;
      unsigned BR : 3;
      unsigned SPE : 1;
      unsigned LSBFIRST : 1;
      unsigned SSI : 1;
      unsigned SSM : 1;
      unsigned RXONLY : 1;
      unsigned DFF : 1;
      unsigned CRCNEXT : 1;
      unsigned CRCEN : 1;
      unsigned BIDIOE : 1;
      unsigned BIDIMODE : 1;
      unsigned : 16;
    };
  };
} typeSPI2_CR1BITS;
sfr volatile typeSPI2_CR1BITS SPI2_CR1bits absolute 0x40003800;

 typedef struct tagSPI2_CR2BITS {
  union {
    struct {
      unsigned RXDMAEN : 1;
      unsigned TXDMAEN : 1;
      unsigned SSOE : 1;
      unsigned NSSP : 1;
      unsigned FRF : 1;
      unsigned ERRIE : 1;
      unsigned RXNEIE : 1;
      unsigned TXEIE : 1;
      unsigned DS : 4;
      unsigned FRXTH : 1;
      unsigned LDMA_RX : 1;
      unsigned LDMA_TX : 1;
      unsigned : 17;
    };
  };
} typeSPI2_CR2BITS;
sfr volatile typeSPI2_CR2BITS SPI2_CR2bits absolute 0x40003804;

 typedef struct tagSPI2_SRBITS {
  union {
    struct {
      unsigned RXNE : 1;
      unsigned TXE : 1;
      unsigned CHSIDE : 1;
      unsigned UDR : 1;
      unsigned CRCERR : 1;
      unsigned MODF_ : 1;
      unsigned OVR : 1;
      unsigned BSY : 1;
      unsigned TIFRFE : 1;
      unsigned FRLVL : 2;
      unsigned FTLVL : 2;
      unsigned : 19;
    };
  };
} typeSPI2_SRBITS;
sfr volatile typeSPI2_SRBITS SPI2_SRbits absolute 0x40003808;

 typedef struct tagSPI2_DRBITS {
  union {
    struct {
      unsigned DR : 16;
      unsigned : 16;
    };
  };
} typeSPI2_DRBITS;
sfr volatile typeSPI2_DRBITS SPI2_DRbits absolute 0x4000380C;

 typedef struct tagSPI2_CRCPRBITS {
  union {
    struct {
      unsigned CRCPOLY : 16;
      unsigned : 16;
    };
  };
} typeSPI2_CRCPRBITS;
sfr volatile typeSPI2_CRCPRBITS SPI2_CRCPRbits absolute 0x40003810;

 typedef struct tagSPI2_RXCRCRBITS {
  union {
    struct {
      unsigned RxCRC : 16;
      unsigned : 16;
    };
  };
} typeSPI2_RXCRCRBITS;
sfr volatile typeSPI2_RXCRCRBITS SPI2_RXCRCRbits absolute 0x40003814;

 typedef struct tagSPI2_TXCRCRBITS {
  union {
    struct {
      unsigned TxCRC : 16;
      unsigned : 16;
    };
  };
} typeSPI2_TXCRCRBITS;
sfr volatile typeSPI2_TXCRCRBITS SPI2_TXCRCRbits absolute 0x40003818;

 typedef struct tagSPI2_I2SCFGRBITS {
  union {
    struct {
      unsigned CHLEN : 1;
      unsigned DATLEN : 2;
      unsigned CKPOL : 1;
      unsigned I2SSTD : 2;
      unsigned : 1;
      unsigned PCMSYNC : 1;
      unsigned I2SCFG : 2;
      unsigned SE2 : 1;
      unsigned I2SMOD : 1;
      unsigned : 20;
    };
  };
} typeSPI2_I2SCFGRBITS;
sfr volatile typeSPI2_I2SCFGRBITS SPI2_I2SCFGRbits absolute 0x4000381C;

 typedef struct tagSPI2_I2SPRBITS {
  union {
    struct {
      unsigned I2SDIV : 8;
      unsigned ODD : 1;
      unsigned MCKOE : 1;
      unsigned : 22;
    };
  };
} typeSPI2_I2SPRBITS;
sfr volatile typeSPI2_I2SPRBITS SPI2_I2SPRbits absolute 0x40003820;

 typedef struct tagTIM1_CR1BITS {
  union {
    struct {
      unsigned CEN : 1;
      unsigned UDIS : 1;
      unsigned URS : 1;
      unsigned OPM : 1;
      unsigned DIR_ : 1;
      unsigned CMS : 2;
      unsigned ARPE : 1;
      unsigned CKD : 2;
      unsigned : 1;
      unsigned UIFREMAP : 1;
      unsigned : 20;
    };
  };
} typeTIM1_CR1BITS;
sfr volatile typeTIM1_CR1BITS TIM1_CR1bits absolute 0x40012C00;

 typedef struct tagTIM1_CR2BITS {
  union {
    struct {
      unsigned CCPC : 1;
      unsigned : 1;
      unsigned CCUS : 1;
      unsigned CCDS : 1;
      unsigned MMS : 3;
      unsigned TI1S : 1;
      unsigned OIS1 : 1;
      unsigned OIS1N : 1;
      unsigned OIS2 : 1;
      unsigned OIS2N : 1;
      unsigned OIS3 : 1;
      unsigned OIS3N : 1;
      unsigned OIS4 : 1;
      unsigned : 1;
      unsigned OIS5 : 1;
      unsigned : 1;
      unsigned OIS6 : 1;
      unsigned : 1;
      unsigned MMS2 : 4;
      unsigned : 8;
    };
  };
} typeTIM1_CR2BITS;
sfr volatile typeTIM1_CR2BITS TIM1_CR2bits absolute 0x40012C04;

 typedef struct tagTIM1_SMCRBITS {
  union {
    struct {
      unsigned SMS : 3;
      unsigned OCCS : 1;
      unsigned TS_4 : 3;
      unsigned MSM : 1;
      unsigned ETF : 4;
      unsigned ETPS : 2;
      unsigned ECE : 1;
      unsigned ETP : 1;
      unsigned SMS_3 : 1;
      unsigned : 3;
      unsigned TS : 2;
      unsigned : 10;
    };
  };
} typeTIM1_SMCRBITS;
sfr volatile typeTIM1_SMCRBITS TIM1_SMCRbits absolute 0x40012C08;

 typedef struct tagTIM1_DIERBITS {
  union {
    struct {
      unsigned UIE : 1;
      unsigned CC1IE : 1;
      unsigned CC2IE : 1;
      unsigned CC3IE : 1;
      unsigned CC4IE : 1;
      unsigned COMIE : 1;
      unsigned TIE : 1;
      unsigned BIE : 1;
      unsigned UDE : 1;
      unsigned CC1DE : 1;
      unsigned CC2DE : 1;
      unsigned CC3DE : 1;
      unsigned CC4DE : 1;
      unsigned COMDE : 1;
      unsigned TDE : 1;
      unsigned : 17;
    };
  };
} typeTIM1_DIERBITS;
sfr volatile typeTIM1_DIERBITS TIM1_DIERbits absolute 0x40012C0C;

 typedef struct tagTIM1_SRBITS {
  union {
    struct {
      unsigned UIF : 1;
      unsigned CC1IF : 1;
      unsigned CC2IF : 1;
      unsigned CC3IF : 1;
      unsigned CC4IF : 1;
      unsigned COMIF : 1;
      unsigned TIF : 1;
      unsigned BIF : 1;
      unsigned B2IF : 1;
      unsigned CC1OF : 1;
      unsigned CC2OF : 1;
      unsigned CC3OF : 1;
      unsigned CC4OF : 1;
      unsigned SBIF : 1;
      unsigned : 2;
      unsigned CC5IF : 1;
      unsigned CC6IF : 1;
      unsigned : 14;
    };
  };
} typeTIM1_SRBITS;
sfr volatile typeTIM1_SRBITS TIM1_SRbits absolute 0x40012C10;

 typedef struct tagTIM1_EGRBITS {
  union {
    struct {
      unsigned UG : 1;
      unsigned CC1G : 1;
      unsigned CC2G : 1;
      unsigned CC3G : 1;
      unsigned CC4G : 1;
      unsigned COMG : 1;
      unsigned TG : 1;
      unsigned BG : 1;
      unsigned B2G : 1;
      unsigned : 23;
    };
  };
} typeTIM1_EGRBITS;
sfr volatile typeTIM1_EGRBITS TIM1_EGRbits absolute 0x40012C14;

 typedef struct tagTIM1_CCMR1_OutputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned OC1FE : 1;
      unsigned OC1PE : 1;
      unsigned OC1M : 3;
      unsigned OC1CE : 1;
      unsigned CC2S : 2;
      unsigned OC2FE : 1;
      unsigned OC2PE : 1;
      unsigned OC2M : 3;
      unsigned OC2CE : 1;
      unsigned OC1M_3 : 1;
      unsigned : 7;
      unsigned OC2M_3 : 1;
      unsigned : 7;
    };
  };
} typeTIM1_CCMR1_OutputBITS;
sfr volatile typeTIM1_CCMR1_OutputBITS TIM1_CCMR1_Outputbits absolute 0x40012C18;

 typedef struct tagTIM1_CCMR1_InputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned OC1FE : 1;
      unsigned OC1PE : 1;
      unsigned OC1M : 3;
      unsigned OC1CE : 1;
      unsigned CC2S : 2;
      unsigned OC2FE : 1;
      unsigned OC2PE : 1;
      unsigned OC2M : 3;
      unsigned OC2CE : 1;
      unsigned : 16;
    };
  };
} typeTIM1_CCMR1_InputBITS;
sfr volatile typeTIM1_CCMR1_InputBITS TIM1_CCMR1_Inputbits absolute 0x40012C18;

 typedef struct tagTIM1_CCMR2_OutputBITS {
  union {
    struct {
      unsigned CC3S : 2;
      unsigned OC3FE : 1;
      unsigned OC3PE : 1;
      unsigned OC3M : 3;
      unsigned OC3CE : 1;
      unsigned CC4S : 2;
      unsigned OC4FE : 1;
      unsigned OC4PE : 1;
      unsigned OC4M : 3;
      unsigned OC4CE : 1;
      unsigned OC3M_3 : 1;
      unsigned : 7;
      unsigned OC4M_3 : 1;
      unsigned : 7;
    };
  };
} typeTIM1_CCMR2_OutputBITS;
sfr volatile typeTIM1_CCMR2_OutputBITS TIM1_CCMR2_Outputbits absolute 0x40012C1C;

 typedef struct tagTIM1_CCMR2_InputBITS {
  union {
    struct {
      unsigned CC3S : 2;
      unsigned OC3FE : 1;
      unsigned OC3PE : 1;
      unsigned OC3M : 3;
      unsigned OC3CE : 1;
      unsigned CC4S : 2;
      unsigned OC4FE : 1;
      unsigned OC4PE : 1;
      unsigned OC4M : 3;
      unsigned OC4CE : 1;
      unsigned : 16;
    };
  };
} typeTIM1_CCMR2_InputBITS;
sfr volatile typeTIM1_CCMR2_InputBITS TIM1_CCMR2_Inputbits absolute 0x40012C1C;

 typedef struct tagTIM1_CCERBITS {
  union {
    struct {
      unsigned CC1E : 1;
      unsigned CC1P : 1;
      unsigned CC1NE : 1;
      unsigned CC1NP : 1;
      unsigned CC2E : 1;
      unsigned CC2P : 1;
      unsigned CC2NE : 1;
      unsigned CC2NP : 1;
      unsigned CC3E : 1;
      unsigned CC3P : 1;
      unsigned CC3NE : 1;
      unsigned CC3NP : 1;
      unsigned CC4E : 1;
      unsigned CC4P : 1;
      unsigned : 1;
      unsigned CC4NP : 1;
      unsigned CC5E : 1;
      unsigned CC5P : 1;
      unsigned : 2;
      unsigned CC6E : 1;
      unsigned CC6P : 1;
      unsigned : 10;
    };
  };
} typeTIM1_CCERBITS;
sfr volatile typeTIM1_CCERBITS TIM1_CCERbits absolute 0x40012C20;

 typedef struct tagTIM1_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 15;
      unsigned UIFCPY : 1;
    };
  };
} typeTIM1_CNTBITS;
sfr volatile typeTIM1_CNTBITS TIM1_CNTbits absolute 0x40012C24;

 typedef struct tagTIM1_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM1_PSCBITS;
sfr volatile typeTIM1_PSCBITS TIM1_PSCbits absolute 0x40012C28;

 typedef struct tagTIM1_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM1_ARRBITS;
sfr volatile typeTIM1_ARRBITS TIM1_ARRbits absolute 0x40012C2C;

 typedef struct tagTIM1_RCRBITS {
  union {
    struct {
      unsigned REP : 16;
      unsigned : 16;
    };
  };
} typeTIM1_RCRBITS;
sfr volatile typeTIM1_RCRBITS TIM1_RCRbits absolute 0x40012C30;

 typedef struct tagTIM1_CCR1BITS {
  union {
    struct {
      unsigned CCR1 : 16;
      unsigned : 16;
    };
  };
} typeTIM1_CCR1BITS;
sfr volatile typeTIM1_CCR1BITS TIM1_CCR1bits absolute 0x40012C34;

 typedef struct tagTIM1_CCR2BITS {
  union {
    struct {
      unsigned CCR2 : 16;
      unsigned : 16;
    };
  };
} typeTIM1_CCR2BITS;
sfr volatile typeTIM1_CCR2BITS TIM1_CCR2bits absolute 0x40012C38;

 typedef struct tagTIM1_CCR3BITS {
  union {
    struct {
      unsigned CCR3 : 16;
      unsigned : 16;
    };
  };
} typeTIM1_CCR3BITS;
sfr volatile typeTIM1_CCR3BITS TIM1_CCR3bits absolute 0x40012C3C;

 typedef struct tagTIM1_CCR4BITS {
  union {
    struct {
      unsigned CCR4 : 16;
      unsigned : 16;
    };
  };
} typeTIM1_CCR4BITS;
sfr volatile typeTIM1_CCR4BITS TIM1_CCR4bits absolute 0x40012C40;

 typedef struct tagTIM1_BDTRBITS {
  union {
    struct {
      unsigned DTG : 8;
      unsigned LOCK : 2;
      unsigned OSSI : 1;
      unsigned OSSR : 1;
      unsigned BKE : 1;
      unsigned BKP : 1;
      unsigned AOE : 1;
      unsigned MOE : 1;
      unsigned BKF : 4;
      unsigned BK2F : 4;
      unsigned BK2E : 1;
      unsigned BK2P : 1;
      unsigned BKDSRM : 1;
      unsigned BK2DSRM : 1;
      unsigned BKBID : 1;
      unsigned BK2ID : 1;
      unsigned : 2;
    };
  };
} typeTIM1_BDTRBITS;
sfr volatile typeTIM1_BDTRBITS TIM1_BDTRbits absolute 0x40012C44;

 typedef struct tagTIM1_DCRBITS {
  union {
    struct {
      unsigned DBA : 5;
      unsigned : 3;
      unsigned DBL : 5;
      unsigned : 19;
    };
  };
} typeTIM1_DCRBITS;
sfr volatile typeTIM1_DCRBITS TIM1_DCRbits absolute 0x40012C48;

 typedef struct tagTIM1_DMARBITS {
  union {
    struct {
      unsigned DMAB : 16;
      unsigned : 16;
    };
  };
} typeTIM1_DMARBITS;
sfr volatile typeTIM1_DMARBITS TIM1_DMARbits absolute 0x40012C4C;

 typedef struct tagTIM1_OR1BITS {
  union {
    struct {
      unsigned OCREF_CLR : 1;
      unsigned : 31;
    };
  };
} typeTIM1_OR1BITS;
sfr volatile typeTIM1_OR1BITS TIM1_OR1bits absolute 0x40012C50;

 typedef struct tagTIM1_CCMR3_OutputBITS {
  union {
    struct {
      unsigned : 2;
      unsigned OC5FE : 1;
      unsigned OC5PE : 1;
      unsigned OC5M : 3;
      unsigned OC5CE : 1;
      unsigned : 2;
      unsigned OC6FE : 1;
      unsigned OC6PE : 1;
      unsigned OC6M : 3;
      unsigned OC6CE : 1;
      unsigned OC5M_bit3 : 1;
      unsigned : 7;
      unsigned OC6M_bit3 : 1;
      unsigned : 7;
    };
  };
} typeTIM1_CCMR3_OutputBITS;
sfr volatile typeTIM1_CCMR3_OutputBITS TIM1_CCMR3_Outputbits absolute 0x40012C54;

 typedef struct tagTIM1_CCR5BITS {
  union {
    struct {
      unsigned CCR5 : 16;
      unsigned : 13;
      unsigned GC5C1 : 1;
      unsigned GC5C2 : 1;
      unsigned GC5C3 : 1;
    };
  };
} typeTIM1_CCR5BITS;
sfr volatile typeTIM1_CCR5BITS TIM1_CCR5bits absolute 0x40012C58;

 typedef struct tagTIM1_CCR6BITS {
  union {
    struct {
      unsigned CCR6 : 16;
      unsigned : 16;
    };
  };
} typeTIM1_CCR6BITS;
sfr volatile typeTIM1_CCR6BITS TIM1_CCR6bits absolute 0x40012C5C;

 typedef struct tagTIM1_AF1BITS {
  union {
    struct {
      unsigned BKINE : 1;
      unsigned BKCMP1E : 1;
      unsigned BKCMP2E : 1;
      unsigned : 6;
      unsigned BKINP : 1;
      unsigned BKCMP1P : 1;
      unsigned BKCMP2P : 1;
      unsigned : 2;
      unsigned ETRSEL : 3;
      unsigned : 15;
    };
  };
} typeTIM1_AF1BITS;
sfr volatile typeTIM1_AF1BITS TIM1_AF1bits absolute 0x40012C60;

 typedef struct tagTIM1_AF2BITS {
  union {
    struct {
      unsigned BK2INE : 1;
      unsigned BK2CMP1E : 1;
      unsigned BK2CMP2E : 1;
      unsigned : 5;
      unsigned BK2DFBK0E : 1;
      unsigned BK2INP : 1;
      unsigned BK2CMP1P : 1;
      unsigned BK2CMP2P : 1;
      unsigned : 20;
    };
  };
} typeTIM1_AF2BITS;
sfr volatile typeTIM1_AF2BITS TIM1_AF2bits absolute 0x40012C64;

 typedef struct tagTIM1_TISELBITS {
  union {
    struct {
      unsigned TI1SEL3_0 : 4;
      unsigned : 4;
      unsigned TI2SEL3_0 : 4;
      unsigned : 4;
      unsigned TI3SEL3_0 : 4;
      unsigned : 4;
      unsigned TI4SEL3_0 : 4;
      unsigned : 4;
    };
  };
} typeTIM1_TISELBITS;
sfr volatile typeTIM1_TISELBITS TIM1_TISELbits absolute 0x40012C68;

 typedef struct tagADC_ISRBITS {
  union {
    struct {
      unsigned ADRDY : 1;
      unsigned EOSMP : 1;
      unsigned EOC : 1;
      unsigned EOS : 1;
      unsigned OVR : 1;
      unsigned : 2;
      unsigned AWD1 : 1;
      unsigned AWD2 : 1;
      unsigned AWD3 : 1;
      unsigned : 1;
      unsigned EOCAL : 1;
      unsigned : 1;
      unsigned CCRDY : 1;
      unsigned : 18;
    };
  };
} typeADC_ISRBITS;
sfr volatile typeADC_ISRBITS ADC_ISRbits absolute 0x40012400;

 typedef struct tagADC_IERBITS {
  union {
    struct {
      unsigned ADRDYIE : 1;
      unsigned EOSMPIE : 1;
      unsigned EOCIE : 1;
      unsigned EOSIE : 1;
      unsigned OVRIE : 1;
      unsigned : 2;
      unsigned AWD1IE : 1;
      unsigned AWD2IE : 1;
      unsigned AWD3IE : 1;
      unsigned : 1;
      unsigned EOCALIE : 1;
      unsigned : 1;
      unsigned CCRDYIE : 1;
      unsigned : 18;
    };
  };
} typeADC_IERBITS;
sfr volatile typeADC_IERBITS ADC_IERbits absolute 0x40012404;

 typedef struct tagADC_CRBITS {
  union {
    struct {
      unsigned ADEN : 1;
      unsigned ADDIS : 1;
      unsigned ADSTART : 1;
      unsigned : 1;
      unsigned ADSTP : 1;
      unsigned : 23;
      unsigned ADVREGEN : 1;
      unsigned : 2;
      unsigned ADCAL : 1;
    };
  };
} typeADC_CRBITS;
sfr volatile typeADC_CRBITS ADC_CRbits absolute 0x40012408;

 typedef struct tagADC_CFGR1BITS {
  union {
    struct {
      unsigned DMAEN : 1;
      unsigned DMACFG : 1;
      unsigned SCANDIR : 1;
      unsigned RES : 2;
      unsigned ALIGN : 1;
      unsigned EXTSEL : 3;
      unsigned : 1;
      unsigned EXTEN : 2;
      unsigned OVRMOD : 1;
      unsigned CONT : 1;
      unsigned WAIT : 1;
      unsigned AUTOFF : 1;
      unsigned DISCEN : 1;
      unsigned : 4;
      unsigned CHSELRMOD : 1;
      unsigned AWD1SGL : 1;
      unsigned AWD1EN : 1;
      unsigned : 2;
      unsigned AWDCH1CH : 5;
      unsigned : 1;
    };
  };
} typeADC_CFGR1BITS;
sfr volatile typeADC_CFGR1BITS ADC_CFGR1bits absolute 0x4001240C;

 typedef struct tagADC_CFGR2BITS {
  union {
    struct {
      unsigned OVSE : 1;
      unsigned : 1;
      unsigned OVSR : 3;
      unsigned OVSS : 4;
      unsigned TOVS : 1;
      unsigned : 19;
      unsigned LFTRIG : 1;
      unsigned CKMODE : 2;
    };
  };
} typeADC_CFGR2BITS;
sfr volatile typeADC_CFGR2BITS ADC_CFGR2bits absolute 0x40012410;

 typedef struct tagADC_SMPRBITS {
  union {
    struct {
      unsigned SMP1 : 3;
      unsigned : 1;
      unsigned SMP2 : 3;
      unsigned : 1;
      unsigned SMPSEL : 19;
      unsigned : 5;
    };
  };
} typeADC_SMPRBITS;
sfr volatile typeADC_SMPRBITS ADC_SMPRbits absolute 0x40012414;

 typedef struct tagADC_AWD1TRBITS {
  union {
    struct {
      unsigned LT1 : 12;
      unsigned : 4;
      unsigned HT1 : 12;
      unsigned : 4;
    };
  };
} typeADC_AWD1TRBITS;
sfr volatile typeADC_AWD1TRBITS ADC_AWD1TRbits absolute 0x40012420;

 typedef struct tagADC_AWD2TRBITS {
  union {
    struct {
      unsigned LT2 : 12;
      unsigned : 4;
      unsigned HT2 : 12;
      unsigned : 4;
    };
  };
} typeADC_AWD2TRBITS;
sfr volatile typeADC_AWD2TRBITS ADC_AWD2TRbits absolute 0x40012424;

 typedef struct tagADC_CHSELRBITS {
  union {
    struct {
      unsigned CHSEL : 19;
      unsigned : 13;
    };
  };
} typeADC_CHSELRBITS;
sfr volatile typeADC_CHSELRBITS ADC_CHSELRbits absolute 0x40012428;

 typedef struct tagADC_CHSELR_1BITS {
  union {
    struct {
      unsigned SQ1 : 4;
      unsigned SQ2 : 4;
      unsigned SQ3 : 4;
      unsigned SQ4 : 4;
      unsigned SQ5 : 4;
      unsigned SQ6 : 4;
      unsigned SQ7 : 4;
      unsigned SQ8 : 4;
    };
  };
} typeADC_CHSELR_1BITS;
sfr volatile typeADC_CHSELR_1BITS ADC_CHSELR_1bits absolute 0x40012428;

 typedef struct tagADC_AWD3TRBITS {
  union {
    struct {
      unsigned LT3 : 12;
      unsigned : 4;
      unsigned HT3 : 12;
      unsigned : 4;
    };
  };
} typeADC_AWD3TRBITS;
sfr volatile typeADC_AWD3TRBITS ADC_AWD3TRbits absolute 0x4001242C;

 typedef struct tagADC_DRBITS {
  union {
    struct {
      unsigned regularDATA : 16;
      unsigned : 16;
    };
  };
} typeADC_DRBITS;
sfr volatile typeADC_DRBITS ADC_DRbits absolute 0x40012440;

 typedef struct tagADC_AWD2CRBITS {
  union {
    struct {
      unsigned AWD2CH : 19;
      unsigned : 13;
    };
  };
} typeADC_AWD2CRBITS;
sfr volatile typeADC_AWD2CRBITS ADC_AWD2CRbits absolute 0x400124A0;

 typedef struct tagADC_AWD3CRBITS {
  union {
    struct {
      unsigned AWD3CH : 19;
      unsigned : 13;
    };
  };
} typeADC_AWD3CRBITS;
sfr volatile typeADC_AWD3CRBITS ADC_AWD3CRbits absolute 0x400124A4;

 typedef struct tagADC_CALFACTBITS {
  union {
    struct {
      unsigned CALFACT : 7;
      unsigned : 25;
    };
  };
} typeADC_CALFACTBITS;
sfr volatile typeADC_CALFACTBITS ADC_CALFACTbits absolute 0x400124B4;

 typedef struct tagADC_CCRBITS {
  union {
    struct {
      unsigned : 18;
      unsigned PRESC : 4;
      unsigned VREFEN : 1;
      unsigned TSEN : 1;
      unsigned VBATEN : 1;
      unsigned : 7;
    };
  };
} typeADC_CCRBITS;
sfr volatile typeADC_CCRBITS ADC_CCRbits absolute 0x40012708;

 typedef struct tagSYSCFG_CFGR1BITS {
  union {
    struct {
      unsigned MEM_MODE : 2;
      unsigned : 2;
      unsigned PA11_PA12_RMP : 1;
      unsigned IR_POL : 1;
      unsigned IR_MOD : 2;
      unsigned BOOSTEN : 1;
      unsigned : 7;
      unsigned I2C_PBx_FMP : 4;
      unsigned I2C1_FMP : 1;
      unsigned I2C2_FMP : 1;
      unsigned I2C_PAx_FMP : 2;
      unsigned : 8;
    };
  };
} typeSYSCFG_CFGR1BITS;
sfr volatile typeSYSCFG_CFGR1BITS SYSCFG_CFGR1bits absolute 0x40010000;

 typedef struct tagSYSCFG_CFGR2BITS {
  union {
    struct {
      unsigned LOCKUP_LOCK : 1;
      unsigned SRAM_PARITY_LOCK : 1;
      unsigned PVD_LOCK : 1;
      unsigned ECC_LOCK : 1;
      unsigned : 4;
      unsigned SRAM_PEF : 1;
      unsigned : 7;
      unsigned PA1_CDEN : 1;
      unsigned PA3_CDEN : 1;
      unsigned PA5_CDEN : 1;
      unsigned PA6_CDEN : 1;
      unsigned PA13_CDEN : 1;
      unsigned PB0_CDEN : 1;
      unsigned PB1_CDEN : 1;
      unsigned PB2_CDEN : 1;
      unsigned : 8;
    };
  };
} typeSYSCFG_CFGR2BITS;
sfr volatile typeSYSCFG_CFGR2BITS SYSCFG_CFGR2bits absolute 0x40010018;

 typedef struct tagTAMP_CR1BITS {
  union {
    struct {
      unsigned TAMP1E : 1;
      unsigned TAMP2E : 1;
      unsigned : 14;
      unsigned ITAMP1E : 1;
      unsigned : 1;
      unsigned ITAMP3E : 1;
      unsigned ITAMP4E : 1;
      unsigned ITAMP5E : 1;
      unsigned ITAMP6E : 1;
      unsigned : 10;
    };
  };
} typeTAMP_CR1BITS;
sfr volatile typeTAMP_CR1BITS TAMP_CR1bits absolute 0x4000B000;

 typedef struct tagTAMP_CR2BITS {
  union {
    struct {
      unsigned TAMP1NOER : 1;
      unsigned TAMP2NOER : 1;
      unsigned : 14;
      unsigned TAMP1MSK : 1;
      unsigned TAMP2MSK : 1;
      unsigned : 6;
      unsigned TAMP1TRG : 1;
      unsigned TAMP2TRG : 1;
      unsigned : 6;
    };
  };
} typeTAMP_CR2BITS;
sfr volatile typeTAMP_CR2BITS TAMP_CR2bits absolute 0x4000B004;

 typedef struct tagTAMP_FLTCRBITS {
  union {
    struct {
      unsigned TAMPFREQ : 3;
      unsigned TAMPFLT : 2;
      unsigned TAMPPRCH : 2;
      unsigned TAMPPUDIS : 1;
      unsigned : 24;
    };
  };
} typeTAMP_FLTCRBITS;
sfr volatile typeTAMP_FLTCRBITS TAMP_FLTCRbits absolute 0x4000B00C;

 typedef struct tagTAMP_IERBITS {
  union {
    struct {
      unsigned TAMP1IE : 1;
      unsigned TAMP2IE : 1;
      unsigned : 14;
      unsigned ITAMP1IE : 1;
      unsigned : 1;
      unsigned ITAMP3IE : 1;
      unsigned ITAMP4IE : 1;
      unsigned ITAMP5IE : 1;
      unsigned ITAMP6IE : 1;
      unsigned : 10;
    };
  };
} typeTAMP_IERBITS;
sfr volatile typeTAMP_IERBITS TAMP_IERbits absolute 0x4000B02C;

 typedef struct tagTAMP_SRBITS {
  union {
    struct {
      unsigned TAMP1F : 1;
      unsigned TAMP2F : 1;
      unsigned : 14;
      unsigned ITAMP1F : 1;
      unsigned : 1;
      unsigned ITAMP3F : 1;
      unsigned ITAMP4F : 1;
      unsigned ITAMP5F : 1;
      unsigned ITAMP6F : 1;
      unsigned ITAMP7F : 1;
      unsigned : 9;
    };
  };
} typeTAMP_SRBITS;
sfr volatile typeTAMP_SRBITS TAMP_SRbits absolute 0x4000B030;

 typedef struct tagTAMP_MISRBITS {
  union {
    struct {
      unsigned TAMP1MF : 1;
      unsigned TAMP2MF : 1;
      unsigned : 14;
      unsigned ITAMP1MF : 1;
      unsigned : 1;
      unsigned ITAMP3MF : 1;
      unsigned ITAMP4MF : 1;
      unsigned ITAMP5MF : 1;
      unsigned ITAMP6MF : 1;
      unsigned : 10;
    };
  };
} typeTAMP_MISRBITS;
sfr volatile typeTAMP_MISRBITS TAMP_MISRbits absolute 0x4000B034;

 typedef struct tagTAMP_SCRBITS {
  union {
    struct {
      unsigned CTAMP1F : 1;
      unsigned CTAMP2F : 1;
      unsigned : 14;
      unsigned CITAMP1F : 1;
      unsigned : 1;
      unsigned CITAMP3F : 1;
      unsigned CITAMP4F : 1;
      unsigned CITAMP5F : 1;
      unsigned CITAMP6F : 1;
      unsigned CITAMP7F : 1;
      unsigned : 9;
    };
  };
} typeTAMP_SCRBITS;
sfr volatile typeTAMP_SCRBITS TAMP_SCRbits absolute 0x4000B03C;

 typedef struct tagTAMP_BKP0RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeTAMP_BKP0RBITS;
sfr volatile typeTAMP_BKP0RBITS TAMP_BKP0Rbits absolute 0x4000B100;

 typedef struct tagTAMP_BKP1RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeTAMP_BKP1RBITS;
sfr volatile typeTAMP_BKP1RBITS TAMP_BKP1Rbits absolute 0x4000B104;

 typedef struct tagTAMP_BKP2RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeTAMP_BKP2RBITS;
sfr volatile typeTAMP_BKP2RBITS TAMP_BKP2Rbits absolute 0x4000B108;

 typedef struct tagTAMP_BKP3RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeTAMP_BKP3RBITS;
sfr volatile typeTAMP_BKP3RBITS TAMP_BKP3Rbits absolute 0x4000B10C;

 typedef struct tagTAMP_BKP4RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeTAMP_BKP4RBITS;
sfr volatile typeTAMP_BKP4RBITS TAMP_BKP4Rbits absolute 0x4000B110;

 typedef struct tagLPTIM1_ISRBITS {
  union {
    struct {
      unsigned CMPM : 1;
      unsigned ARRM : 1;
      unsigned EXTTRIG : 1;
      unsigned CMPOK : 1;
      unsigned ARROK : 1;
      unsigned UP : 1;
      unsigned DOWN : 1;
      unsigned : 25;
    };
  };
} typeLPTIM1_ISRBITS;
sfr volatile typeLPTIM1_ISRBITS LPTIM1_ISRbits absolute 0x40007C00;

 typedef struct tagLPTIM1_ICRBITS {
  union {
    struct {
      unsigned CMPMCF : 1;
      unsigned ARRMCF : 1;
      unsigned EXTTRIGCF : 1;
      unsigned CMPOKCF : 1;
      unsigned ARROKCF : 1;
      unsigned UPCF : 1;
      unsigned DOWNCF : 1;
      unsigned : 25;
    };
  };
} typeLPTIM1_ICRBITS;
sfr volatile typeLPTIM1_ICRBITS LPTIM1_ICRbits absolute 0x40007C04;

 typedef struct tagLPTIM1_IERBITS {
  union {
    struct {
      unsigned CMPMIE : 1;
      unsigned ARRMIE : 1;
      unsigned EXTTRIGIE : 1;
      unsigned CMPOKIE : 1;
      unsigned ARROKIE : 1;
      unsigned UPIE : 1;
      unsigned DOWNIE : 1;
      unsigned : 25;
    };
  };
} typeLPTIM1_IERBITS;
sfr volatile typeLPTIM1_IERBITS LPTIM1_IERbits absolute 0x40007C08;

 typedef struct tagLPTIM1_CFGRBITS {
  union {
    struct {
      unsigned CKSEL : 1;
      unsigned CKPOL : 2;
      unsigned CKFLT : 2;
      unsigned : 1;
      unsigned TRGFLT : 2;
      unsigned : 1;
      unsigned PRESC : 3;
      unsigned : 1;
      unsigned TRIGSEL : 3;
      unsigned : 1;
      unsigned TRIGEN : 2;
      unsigned TIMOUT : 1;
      unsigned WAVE : 1;
      unsigned WAVPOL : 1;
      unsigned PRELOAD : 1;
      unsigned COUNTMODE : 1;
      unsigned ENC : 1;
      unsigned : 7;
    };
  };
} typeLPTIM1_CFGRBITS;
sfr volatile typeLPTIM1_CFGRBITS LPTIM1_CFGRbits absolute 0x40007C0C;

 typedef struct tagLPTIM1_CRBITS {
  union {
    struct {
      unsigned ENABLE_ : 1;
      unsigned SNGSTRT : 1;
      unsigned CNTSTRT : 1;
      unsigned COUNTRST : 1;
      unsigned RSTARE : 1;
      unsigned : 27;
    };
  };
} typeLPTIM1_CRBITS;
sfr volatile typeLPTIM1_CRBITS LPTIM1_CRbits absolute 0x40007C10;

 typedef struct tagLPTIM1_CMPBITS {
  union {
    struct {
      unsigned CMP : 16;
      unsigned : 16;
    };
  };
} typeLPTIM1_CMPBITS;
sfr volatile typeLPTIM1_CMPBITS LPTIM1_CMPbits absolute 0x40007C14;

 typedef struct tagLPTIM1_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeLPTIM1_ARRBITS;
sfr volatile typeLPTIM1_ARRBITS LPTIM1_ARRbits absolute 0x40007C18;

 typedef struct tagLPTIM1_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
    };
  };
} typeLPTIM1_CNTBITS;
sfr volatile typeLPTIM1_CNTBITS LPTIM1_CNTbits absolute 0x40007C1C;

 typedef struct tagLPTIM1_CFGR2BITS {
  union {
    struct {
      unsigned IN1SEL : 2;
      unsigned : 2;
      unsigned IN2SEL : 2;
      unsigned : 26;
    };
  };
} typeLPTIM1_CFGR2BITS;
sfr volatile typeLPTIM1_CFGR2BITS LPTIM1_CFGR2bits absolute 0x40007C24;

 typedef struct tagLPTIM2_ISRBITS {
  union {
    struct {
      unsigned CMPM : 1;
      unsigned ARRM : 1;
      unsigned EXTTRIG : 1;
      unsigned CMPOK : 1;
      unsigned ARROK : 1;
      unsigned UP : 1;
      unsigned DOWN : 1;
      unsigned : 25;
    };
  };
} typeLPTIM2_ISRBITS;
sfr volatile typeLPTIM2_ISRBITS LPTIM2_ISRbits absolute 0x40009400;

 typedef struct tagLPTIM2_ICRBITS {
  union {
    struct {
      unsigned CMPMCF : 1;
      unsigned ARRMCF : 1;
      unsigned EXTTRIGCF : 1;
      unsigned CMPOKCF : 1;
      unsigned ARROKCF : 1;
      unsigned UPCF : 1;
      unsigned DOWNCF : 1;
      unsigned : 25;
    };
  };
} typeLPTIM2_ICRBITS;
sfr volatile typeLPTIM2_ICRBITS LPTIM2_ICRbits absolute 0x40009404;

 typedef struct tagLPTIM2_IERBITS {
  union {
    struct {
      unsigned CMPMIE : 1;
      unsigned ARRMIE : 1;
      unsigned EXTTRIGIE : 1;
      unsigned CMPOKIE : 1;
      unsigned ARROKIE : 1;
      unsigned UPIE : 1;
      unsigned DOWNIE : 1;
      unsigned : 25;
    };
  };
} typeLPTIM2_IERBITS;
sfr volatile typeLPTIM2_IERBITS LPTIM2_IERbits absolute 0x40009408;

 typedef struct tagLPTIM2_CFGRBITS {
  union {
    struct {
      unsigned CKSEL : 1;
      unsigned CKPOL : 2;
      unsigned CKFLT : 2;
      unsigned : 1;
      unsigned TRGFLT : 2;
      unsigned : 1;
      unsigned PRESC : 3;
      unsigned : 1;
      unsigned TRIGSEL : 3;
      unsigned : 1;
      unsigned TRIGEN : 2;
      unsigned TIMOUT : 1;
      unsigned WAVE : 1;
      unsigned WAVPOL : 1;
      unsigned PRELOAD : 1;
      unsigned COUNTMODE : 1;
      unsigned ENC : 1;
      unsigned : 7;
    };
  };
} typeLPTIM2_CFGRBITS;
sfr volatile typeLPTIM2_CFGRBITS LPTIM2_CFGRbits absolute 0x4000940C;

 typedef struct tagLPTIM2_CRBITS {
  union {
    struct {
      unsigned ENABLE_ : 1;
      unsigned SNGSTRT : 1;
      unsigned CNTSTRT : 1;
      unsigned COUNTRST : 1;
      unsigned RSTARE : 1;
      unsigned : 27;
    };
  };
} typeLPTIM2_CRBITS;
sfr volatile typeLPTIM2_CRBITS LPTIM2_CRbits absolute 0x40009410;

 typedef struct tagLPTIM2_CMPBITS {
  union {
    struct {
      unsigned CMP : 16;
      unsigned : 16;
    };
  };
} typeLPTIM2_CMPBITS;
sfr volatile typeLPTIM2_CMPBITS LPTIM2_CMPbits absolute 0x40009414;

 typedef struct tagLPTIM2_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeLPTIM2_ARRBITS;
sfr volatile typeLPTIM2_ARRBITS LPTIM2_ARRbits absolute 0x40009418;

 typedef struct tagLPTIM2_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
    };
  };
} typeLPTIM2_CNTBITS;
sfr volatile typeLPTIM2_CNTBITS LPTIM2_CNTbits absolute 0x4000941C;

 typedef struct tagLPTIM2_CFGR2BITS {
  union {
    struct {
      unsigned IN1SEL : 2;
      unsigned : 2;
      unsigned IN2SEL : 2;
      unsigned : 26;
    };
  };
} typeLPTIM2_CFGR2BITS;
sfr volatile typeLPTIM2_CFGR2BITS LPTIM2_CFGR2bits absolute 0x40009424;

 typedef struct tagLPUART_CR1BITS {
  union {
    struct {
      unsigned UE : 1;
      unsigned UESM : 1;
      unsigned RE : 1;
      unsigned TE : 1;
      unsigned IDLEIE : 1;
      unsigned RXNEIE : 1;
      unsigned TCIE : 1;
      unsigned TXEIE : 1;
      unsigned PEIE : 1;
      unsigned PS : 1;
      unsigned PCE : 1;
      unsigned WAKE : 1;
      unsigned M0 : 1;
      unsigned MME : 1;
      unsigned CMIE : 1;
      unsigned : 1;
      unsigned DEDT0 : 5;
      unsigned DEAT : 5;
      unsigned : 2;
      unsigned M1 : 1;
      unsigned FIFOEN : 1;
      unsigned TXFEIE : 1;
      unsigned RXFFIE : 1;
    };
  };
} typeLPUART_CR1BITS;
sfr volatile typeLPUART_CR1BITS LPUART_CR1bits absolute 0x40008000;

 typedef struct tagLPUART_CR2BITS {
  union {
    struct {
      unsigned : 4;
      unsigned ADDM7 : 1;
      unsigned : 7;
      unsigned STOP : 2;
      unsigned : 1;
      unsigned SWAP : 1;
      unsigned RXINV : 1;
      unsigned TXINV : 1;
      unsigned TAINV : 1;
      unsigned MSBFIRST : 1;
      unsigned : 4;
      unsigned ADD0_3 : 4;
      unsigned ADD4_7 : 4;
    };
  };
} typeLPUART_CR2BITS;
sfr volatile typeLPUART_CR2BITS LPUART_CR2bits absolute 0x40008004;

 typedef struct tagLPUART_CR3BITS {
  union {
    struct {
      unsigned EIE : 1;
      unsigned : 2;
      unsigned HDSEL : 1;
      unsigned : 2;
      unsigned DMAR : 1;
      unsigned DMAT : 1;
      unsigned RTSE : 1;
      unsigned CTSE : 1;
      unsigned CTSIE : 1;
      unsigned : 1;
      unsigned OVRDIS : 1;
      unsigned DDRE : 1;
      unsigned DEM : 1;
      unsigned DEP : 1;
      unsigned : 4;
      unsigned WUS : 2;
      unsigned WUFIE : 1;
      unsigned TXFTIE : 1;
      unsigned : 1;
      unsigned RXFTCFG : 3;
      unsigned RXFTIE : 1;
      unsigned TXFTCFG : 3;
    };
  };
} typeLPUART_CR3BITS;
sfr volatile typeLPUART_CR3BITS LPUART_CR3bits absolute 0x40008008;

 typedef struct tagLPUART_BRRBITS {
  union {
    struct {
      unsigned BRR : 20;
      unsigned : 12;
    };
  };
} typeLPUART_BRRBITS;
sfr volatile typeLPUART_BRRBITS LPUART_BRRbits absolute 0x4000800C;

 typedef struct tagLPUART_RQRBITS {
  union {
    struct {
      unsigned ABRRQ : 1;
      unsigned SBKRQ : 1;
      unsigned MMRQ : 1;
      unsigned RXFRQ : 1;
      unsigned TXFRQ : 1;
      unsigned : 27;
    };
  };
} typeLPUART_RQRBITS;
sfr volatile typeLPUART_RQRBITS LPUART_RQRbits absolute 0x40008018;

 typedef struct tagLPUART_ISRBITS {
  union {
    struct {
      unsigned PE : 1;
      unsigned FE : 1;
      unsigned NF : 1;
      unsigned ORE : 1;
      unsigned IDLE : 1;
      unsigned RXNE : 1;
      unsigned TC : 1;
      unsigned TXE : 1;
      unsigned : 1;
      unsigned CTSIF : 1;
      unsigned CTS : 1;
      unsigned : 5;
      unsigned BUSY : 1;
      unsigned CMF : 1;
      unsigned SBKF : 1;
      unsigned RWU : 1;
      unsigned WUF : 1;
      unsigned TEACK : 1;
      unsigned REACK : 1;
      unsigned TXFE : 1;
      unsigned RXFF : 1;
      unsigned : 1;
      unsigned RXFT : 1;
      unsigned TXFT : 1;
      unsigned : 4;
    };
  };
} typeLPUART_ISRBITS;
sfr volatile typeLPUART_ISRBITS LPUART_ISRbits absolute 0x4000801C;

 typedef struct tagLPUART_ICRBITS {
  union {
    struct {
      unsigned PECF : 1;
      unsigned FECF : 1;
      unsigned NCF : 1;
      unsigned ORECF : 1;
      unsigned IDLECF : 1;
      unsigned : 1;
      unsigned TCCF : 1;
      unsigned : 2;
      unsigned CTSCF : 1;
      unsigned : 7;
      unsigned CMCF : 1;
      unsigned : 2;
      unsigned WUCF : 1;
      unsigned : 11;
    };
  };
} typeLPUART_ICRBITS;
sfr volatile typeLPUART_ICRBITS LPUART_ICRbits absolute 0x40008020;

 typedef struct tagLPUART_RDRBITS {
  union {
    struct {
      unsigned RDR : 9;
      unsigned : 23;
    };
  };
} typeLPUART_RDRBITS;
sfr volatile typeLPUART_RDRBITS LPUART_RDRbits absolute 0x40008024;

 typedef struct tagLPUART_TDRBITS {
  union {
    struct {
      unsigned TDR : 9;
      unsigned : 23;
    };
  };
} typeLPUART_TDRBITS;
sfr volatile typeLPUART_TDRBITS LPUART_TDRbits absolute 0x40008028;

 typedef struct tagLPUART_PRESCBITS {
  union {
    struct {
      unsigned PRESCALER : 4;
      unsigned : 28;
    };
  };
} typeLPUART_PRESCBITS;
sfr volatile typeLPUART_PRESCBITS LPUART_PRESCbits absolute 0x4000802C;

 typedef struct tagI2C1_CR1BITS {
  union {
    struct {
      unsigned PE : 1;
      unsigned TXIE : 1;
      unsigned RXIE : 1;
      unsigned ADDRIE : 1;
      unsigned NACKIE : 1;
      unsigned STOPIE : 1;
      unsigned TCIE : 1;
      unsigned ERRIE : 1;
      unsigned DNF : 4;
      unsigned ANFOFF : 1;
      unsigned : 1;
      unsigned TXDMAEN : 1;
      unsigned RXDMAEN : 1;
      unsigned SBC : 1;
      unsigned NOSTRETCH : 1;
      unsigned WUPEN : 1;
      unsigned GCEN : 1;
      unsigned SMBHEN : 1;
      unsigned SMBDEN : 1;
      unsigned ALERTEN : 1;
      unsigned PECEN : 1;
      unsigned : 8;
    };
  };
} typeI2C1_CR1BITS;
sfr volatile typeI2C1_CR1BITS I2C1_CR1bits absolute 0x40005400;

 typedef struct tagI2C1_CR2BITS {
  union {
    struct {
      unsigned SADD : 10;
      unsigned RD_WRN : 1;
      unsigned ADD10 : 1;
      unsigned HEAD10R : 1;
      unsigned START : 1;
      unsigned STOP_ : 1;
      unsigned NACK : 1;
      unsigned NBYTES : 8;
      unsigned RELOAD : 1;
      unsigned AUTOEND : 1;
      unsigned PECBYTE : 1;
      unsigned : 5;
    };
  };
} typeI2C1_CR2BITS;
sfr volatile typeI2C1_CR2BITS I2C1_CR2bits absolute 0x40005404;

 typedef struct tagI2C1_OAR1BITS {
  union {
    struct {
      unsigned OA1_0 : 1;
      unsigned OA1_7_1 : 7;
      unsigned OA1_8_9 : 2;
      unsigned OA1MODE : 1;
      unsigned : 4;
      unsigned OA1EN : 1;
      unsigned : 16;
    };
  };
} typeI2C1_OAR1BITS;
sfr volatile typeI2C1_OAR1BITS I2C1_OAR1bits absolute 0x40005408;

 typedef struct tagI2C1_OAR2BITS {
  union {
    struct {
      unsigned : 1;
      unsigned OA2 : 7;
      unsigned OA2MSK : 3;
      unsigned : 4;
      unsigned OA2EN : 1;
      unsigned : 16;
    };
  };
} typeI2C1_OAR2BITS;
sfr volatile typeI2C1_OAR2BITS I2C1_OAR2bits absolute 0x4000540C;

 typedef struct tagI2C1_TIMINGRBITS {
  union {
    struct {
      unsigned SCLL : 8;
      unsigned SCLH : 8;
      unsigned SDADEL : 4;
      unsigned SCLDEL : 4;
      unsigned : 4;
      unsigned PRESC : 4;
    };
  };
} typeI2C1_TIMINGRBITS;
sfr volatile typeI2C1_TIMINGRBITS I2C1_TIMINGRbits absolute 0x40005410;

 typedef struct tagI2C1_TIMEOUTRBITS {
  union {
    struct {
      unsigned TIMEOUTA : 12;
      unsigned TIDLE : 1;
      unsigned : 2;
      unsigned TIMOUTEN : 1;
      unsigned TIMEOUTB : 12;
      unsigned : 3;
      unsigned TEXTEN : 1;
    };
  };
} typeI2C1_TIMEOUTRBITS;
sfr volatile typeI2C1_TIMEOUTRBITS I2C1_TIMEOUTRbits absolute 0x40005414;

 typedef struct tagI2C1_ISRBITS {
  union {
    struct {
      unsigned TXE : 1;
      unsigned TXIS : 1;
      unsigned RXNE : 1;
      unsigned ADDR : 1;
      unsigned NACKF : 1;
      unsigned STOPF : 1;
      unsigned TC : 1;
      unsigned TCR : 1;
      unsigned BERR : 1;
      unsigned ARLO : 1;
      unsigned OVR : 1;
      unsigned PECERR : 1;
      unsigned TIMEOUT : 1;
      unsigned ALERT : 1;
      unsigned : 1;
      unsigned BUSY : 1;
      unsigned DIR_ : 1;
      unsigned ADDCODE : 7;
      unsigned : 8;
    };
  };
} typeI2C1_ISRBITS;
sfr volatile typeI2C1_ISRBITS I2C1_ISRbits absolute 0x40005418;

 typedef struct tagI2C1_ICRBITS {
  union {
    struct {
      unsigned : 3;
      unsigned ADDRCF : 1;
      unsigned NACKCF : 1;
      unsigned STOPCF : 1;
      unsigned : 2;
      unsigned BERRCF : 1;
      unsigned ARLOCF : 1;
      unsigned OVRCF : 1;
      unsigned PECCF : 1;
      unsigned TIMOUTCF : 1;
      unsigned ALERTCF : 1;
      unsigned : 18;
    };
  };
} typeI2C1_ICRBITS;
sfr volatile typeI2C1_ICRBITS I2C1_ICRbits absolute 0x4000541C;

 typedef struct tagI2C1_PECRBITS {
  union {
    struct {
      unsigned PEC : 8;
      unsigned : 24;
    };
  };
} typeI2C1_PECRBITS;
sfr volatile typeI2C1_PECRBITS I2C1_PECRbits absolute 0x40005420;

 typedef struct tagI2C1_RXDRBITS {
  union {
    struct {
      unsigned RXDATA : 8;
      unsigned : 24;
    };
  };
} typeI2C1_RXDRBITS;
sfr volatile typeI2C1_RXDRBITS I2C1_RXDRbits absolute 0x40005424;

 typedef struct tagI2C1_TXDRBITS {
  union {
    struct {
      unsigned TXDATA : 8;
      unsigned : 24;
    };
  };
} typeI2C1_TXDRBITS;
sfr volatile typeI2C1_TXDRBITS I2C1_TXDRbits absolute 0x40005428;

 typedef struct tagI2C2_CR1BITS {
  union {
    struct {
      unsigned PE : 1;
      unsigned TXIE : 1;
      unsigned RXIE : 1;
      unsigned ADDRIE : 1;
      unsigned NACKIE : 1;
      unsigned STOPIE : 1;
      unsigned TCIE : 1;
      unsigned ERRIE : 1;
      unsigned DNF : 4;
      unsigned ANFOFF : 1;
      unsigned : 1;
      unsigned TXDMAEN : 1;
      unsigned RXDMAEN : 1;
      unsigned SBC : 1;
      unsigned NOSTRETCH : 1;
      unsigned WUPEN : 1;
      unsigned GCEN : 1;
      unsigned SMBHEN : 1;
      unsigned SMBDEN : 1;
      unsigned ALERTEN : 1;
      unsigned PECEN : 1;
      unsigned : 8;
    };
  };
} typeI2C2_CR1BITS;
sfr volatile typeI2C2_CR1BITS I2C2_CR1bits absolute 0x40005800;

 typedef struct tagI2C2_CR2BITS {
  union {
    struct {
      unsigned SADD : 10;
      unsigned RD_WRN : 1;
      unsigned ADD10 : 1;
      unsigned HEAD10R : 1;
      unsigned START : 1;
      unsigned STOP_ : 1;
      unsigned NACK : 1;
      unsigned NBYTES : 8;
      unsigned RELOAD : 1;
      unsigned AUTOEND : 1;
      unsigned PECBYTE : 1;
      unsigned : 5;
    };
  };
} typeI2C2_CR2BITS;
sfr volatile typeI2C2_CR2BITS I2C2_CR2bits absolute 0x40005804;

 typedef struct tagI2C2_OAR1BITS {
  union {
    struct {
      unsigned OA1_0 : 1;
      unsigned OA1_7_1 : 7;
      unsigned OA1_8_9 : 2;
      unsigned OA1MODE : 1;
      unsigned : 4;
      unsigned OA1EN : 1;
      unsigned : 16;
    };
  };
} typeI2C2_OAR1BITS;
sfr volatile typeI2C2_OAR1BITS I2C2_OAR1bits absolute 0x40005808;

 typedef struct tagI2C2_OAR2BITS {
  union {
    struct {
      unsigned : 1;
      unsigned OA2 : 7;
      unsigned OA2MSK : 3;
      unsigned : 4;
      unsigned OA2EN : 1;
      unsigned : 16;
    };
  };
} typeI2C2_OAR2BITS;
sfr volatile typeI2C2_OAR2BITS I2C2_OAR2bits absolute 0x4000580C;

 typedef struct tagI2C2_TIMINGRBITS {
  union {
    struct {
      unsigned SCLL : 8;
      unsigned SCLH : 8;
      unsigned SDADEL : 4;
      unsigned SCLDEL : 4;
      unsigned : 4;
      unsigned PRESC : 4;
    };
  };
} typeI2C2_TIMINGRBITS;
sfr volatile typeI2C2_TIMINGRBITS I2C2_TIMINGRbits absolute 0x40005810;

 typedef struct tagI2C2_TIMEOUTRBITS {
  union {
    struct {
      unsigned TIMEOUTA : 12;
      unsigned TIDLE : 1;
      unsigned : 2;
      unsigned TIMOUTEN : 1;
      unsigned TIMEOUTB : 12;
      unsigned : 3;
      unsigned TEXTEN : 1;
    };
  };
} typeI2C2_TIMEOUTRBITS;
sfr volatile typeI2C2_TIMEOUTRBITS I2C2_TIMEOUTRbits absolute 0x40005814;

 typedef struct tagI2C2_ISRBITS {
  union {
    struct {
      unsigned TXE : 1;
      unsigned TXIS : 1;
      unsigned RXNE : 1;
      unsigned ADDR : 1;
      unsigned NACKF : 1;
      unsigned STOPF : 1;
      unsigned TC : 1;
      unsigned TCR : 1;
      unsigned BERR : 1;
      unsigned ARLO : 1;
      unsigned OVR : 1;
      unsigned PECERR : 1;
      unsigned TIMEOUT : 1;
      unsigned ALERT : 1;
      unsigned : 1;
      unsigned BUSY : 1;
      unsigned DIR_ : 1;
      unsigned ADDCODE : 7;
      unsigned : 8;
    };
  };
} typeI2C2_ISRBITS;
sfr volatile typeI2C2_ISRBITS I2C2_ISRbits absolute 0x40005818;

 typedef struct tagI2C2_ICRBITS {
  union {
    struct {
      unsigned : 3;
      unsigned ADDRCF : 1;
      unsigned NACKCF : 1;
      unsigned STOPCF : 1;
      unsigned : 2;
      unsigned BERRCF : 1;
      unsigned ARLOCF : 1;
      unsigned OVRCF : 1;
      unsigned PECCF : 1;
      unsigned TIMOUTCF : 1;
      unsigned ALERTCF : 1;
      unsigned : 18;
    };
  };
} typeI2C2_ICRBITS;
sfr volatile typeI2C2_ICRBITS I2C2_ICRbits absolute 0x4000581C;

 typedef struct tagI2C2_PECRBITS {
  union {
    struct {
      unsigned PEC : 8;
      unsigned : 24;
    };
  };
} typeI2C2_PECRBITS;
sfr volatile typeI2C2_PECRBITS I2C2_PECRbits absolute 0x40005820;

 typedef struct tagI2C2_RXDRBITS {
  union {
    struct {
      unsigned RXDATA : 8;
      unsigned : 24;
    };
  };
} typeI2C2_RXDRBITS;
sfr volatile typeI2C2_RXDRBITS I2C2_RXDRbits absolute 0x40005824;

 typedef struct tagI2C2_TXDRBITS {
  union {
    struct {
      unsigned TXDATA : 8;
      unsigned : 24;
    };
  };
} typeI2C2_TXDRBITS;
sfr volatile typeI2C2_TXDRBITS I2C2_TXDRbits absolute 0x40005828;

 typedef struct tagRTC_TRBITS {
  union {
    struct {
      unsigned SU : 4;
      unsigned ST : 3;
      unsigned : 1;
      unsigned MNU : 4;
      unsigned MNT : 3;
      unsigned : 1;
      unsigned HU : 4;
      unsigned HT : 2;
      unsigned PM : 1;
      unsigned : 9;
    };
  };
} typeRTC_TRBITS;
sfr volatile typeRTC_TRBITS RTC_TRbits absolute 0x40002800;

 typedef struct tagRTC_DRBITS {
  union {
    struct {
      unsigned DU : 4;
      unsigned DT : 2;
      unsigned : 2;
      unsigned MU : 4;
      unsigned MT : 1;
      unsigned WDU : 3;
      unsigned YU : 4;
      unsigned YT : 4;
      unsigned : 8;
    };
  };
} typeRTC_DRBITS;
sfr volatile typeRTC_DRBITS RTC_DRbits absolute 0x40002804;

 typedef struct tagRTC_SSRBITS {
  union {
    struct {
      unsigned SS : 16;
      unsigned : 16;
    };
  };
} typeRTC_SSRBITS;
sfr volatile typeRTC_SSRBITS RTC_SSRbits absolute 0x40002808;

 typedef struct tagRTC_ICSRBITS {
  union {
    struct {
      unsigned ALRAWF : 1;
      unsigned ALRBWF : 1;
      unsigned WUTWF : 1;
      unsigned SHPF : 1;
      unsigned INITS : 1;
      unsigned RSF : 1;
      unsigned INITF : 1;
      unsigned INIT : 1;
      unsigned : 8;
      unsigned RECALPF : 1;
      unsigned : 15;
    };
  };
} typeRTC_ICSRBITS;
sfr volatile typeRTC_ICSRBITS RTC_ICSRbits absolute 0x4000280C;

 typedef struct tagRTC_PRERBITS {
  union {
    struct {
      unsigned PREDIV_S : 15;
      unsigned : 1;
      unsigned PREDIV_A : 7;
      unsigned : 9;
    };
  };
} typeRTC_PRERBITS;
sfr volatile typeRTC_PRERBITS RTC_PRERbits absolute 0x40002810;

 typedef struct tagRTC_WUTRBITS {
  union {
    struct {
      unsigned WUT : 16;
      unsigned : 16;
    };
  };
} typeRTC_WUTRBITS;
sfr volatile typeRTC_WUTRBITS RTC_WUTRbits absolute 0x40002814;

 typedef struct tagRTC_CRBITS {
  union {
    struct {
      unsigned WUCKSEL : 3;
      unsigned TSEDGE : 1;
      unsigned REFCKON : 1;
      unsigned BYPSHAD : 1;
      unsigned FMT : 1;
      unsigned : 1;
      unsigned ALRAE : 1;
      unsigned ALRBE : 1;
      unsigned WUTE : 1;
      unsigned TSE : 1;
      unsigned ALRAIE : 1;
      unsigned ALRBIE : 1;
      unsigned WUTIE : 1;
      unsigned TSIE : 1;
      unsigned ADD1H : 1;
      unsigned SUB1H : 1;
      unsigned BKP : 1;
      unsigned COSEL : 1;
      unsigned POL : 1;
      unsigned OSEL : 2;
      unsigned COE : 1;
      unsigned ITSE : 1;
      unsigned TAMPTS : 1;
      unsigned TAMPOE : 1;
      unsigned : 2;
      unsigned TAMPALRM_PU : 1;
      unsigned TAMPALRM_TYPE : 1;
      unsigned OUT2EN : 1;
    };
  };
} typeRTC_CRBITS;
sfr volatile typeRTC_CRBITS RTC_CRbits absolute 0x40002818;

 typedef struct tagRTC_WPRBITS {
  union {
    struct {
      unsigned KEY : 8;
      unsigned : 24;
    };
  };
} typeRTC_WPRBITS;
sfr volatile typeRTC_WPRBITS RTC_WPRbits absolute 0x40002824;

 typedef struct tagRTC_CALRBITS {
  union {
    struct {
      unsigned CALM : 9;
      unsigned : 4;
      unsigned CALW16 : 1;
      unsigned CALW8 : 1;
      unsigned CALP : 1;
      unsigned : 16;
    };
  };
} typeRTC_CALRBITS;
sfr volatile typeRTC_CALRBITS RTC_CALRbits absolute 0x40002828;

 typedef struct tagRTC_SHIFTRBITS {
  union {
    struct {
      unsigned SUBFS : 15;
      unsigned : 16;
      unsigned ADD1S : 1;
    };
  };
} typeRTC_SHIFTRBITS;
sfr volatile typeRTC_SHIFTRBITS RTC_SHIFTRbits absolute 0x4000282C;

 typedef struct tagRTC_TSTRBITS {
  union {
    struct {
      unsigned SU : 4;
      unsigned ST : 3;
      unsigned : 1;
      unsigned MNU : 4;
      unsigned MNT : 3;
      unsigned : 1;
      unsigned HU : 4;
      unsigned HT : 2;
      unsigned PM : 1;
      unsigned : 9;
    };
  };
} typeRTC_TSTRBITS;
sfr volatile typeRTC_TSTRBITS RTC_TSTRbits absolute 0x40002830;

 typedef struct tagRTC_TSDRBITS {
  union {
    struct {
      unsigned DU : 4;
      unsigned DT : 2;
      unsigned : 2;
      unsigned MU : 4;
      unsigned MT : 1;
      unsigned WDU : 3;
      unsigned : 16;
    };
  };
} typeRTC_TSDRBITS;
sfr volatile typeRTC_TSDRBITS RTC_TSDRbits absolute 0x40002834;

 typedef struct tagRTC_TSSSRBITS {
  union {
    struct {
      unsigned SS : 16;
      unsigned : 16;
    };
  };
} typeRTC_TSSSRBITS;
sfr volatile typeRTC_TSSSRBITS RTC_TSSSRbits absolute 0x40002838;

 typedef struct tagRTC_ALRMARBITS {
  union {
    struct {
      unsigned SU : 4;
      unsigned ST : 3;
      unsigned MSK1 : 1;
      unsigned MNU : 4;
      unsigned MNT : 3;
      unsigned MSK2 : 1;
      unsigned HU : 4;
      unsigned HT : 2;
      unsigned PM : 1;
      unsigned MSK3 : 1;
      unsigned DU : 4;
      unsigned DT : 2;
      unsigned WDSEL : 1;
      unsigned MSK4 : 1;
    };
  };
} typeRTC_ALRMARBITS;
sfr volatile typeRTC_ALRMARBITS RTC_ALRMARbits absolute 0x40002840;

 typedef struct tagRTC_ALRMASSRBITS {
  union {
    struct {
      unsigned SS : 15;
      unsigned : 9;
      unsigned MASKSS : 4;
      unsigned : 4;
    };
  };
} typeRTC_ALRMASSRBITS;
sfr volatile typeRTC_ALRMASSRBITS RTC_ALRMASSRbits absolute 0x40002844;

 typedef struct tagRTC_ALRMBRBITS {
  union {
    struct {
      unsigned SU : 4;
      unsigned ST : 3;
      unsigned MSK1 : 1;
      unsigned MNU : 4;
      unsigned MNT : 3;
      unsigned MSK2 : 1;
      unsigned HU : 4;
      unsigned HT : 2;
      unsigned PM : 1;
      unsigned MSK3 : 1;
      unsigned DU : 4;
      unsigned DT : 2;
      unsigned WDSEL : 1;
      unsigned MSK4 : 1;
    };
  };
} typeRTC_ALRMBRBITS;
sfr volatile typeRTC_ALRMBRBITS RTC_ALRMBRbits absolute 0x40002848;

 typedef struct tagRTC_ALRMBSSRBITS {
  union {
    struct {
      unsigned SS : 15;
      unsigned : 9;
      unsigned MASKSS : 4;
      unsigned : 4;
    };
  };
} typeRTC_ALRMBSSRBITS;
sfr volatile typeRTC_ALRMBSSRBITS RTC_ALRMBSSRbits absolute 0x4000284C;

 typedef struct tagRTC_SRBITS {
  union {
    struct {
      unsigned ALRAF : 1;
      unsigned ALRBF : 1;
      unsigned WUTF : 1;
      unsigned TSF : 1;
      unsigned TSOVF : 1;
      unsigned ITSF : 1;
      unsigned : 26;
    };
  };
} typeRTC_SRBITS;
sfr volatile typeRTC_SRBITS RTC_SRbits absolute 0x40002850;

 typedef struct tagRTC_MISRBITS {
  union {
    struct {
      unsigned ALRAMF : 1;
      unsigned ALRBMF : 1;
      unsigned WUTMF : 1;
      unsigned TSMF : 1;
      unsigned TSOVMF : 1;
      unsigned ITSMF : 1;
      unsigned : 26;
    };
  };
} typeRTC_MISRBITS;
sfr volatile typeRTC_MISRBITS RTC_MISRbits absolute 0x40002854;

 typedef struct tagRTC_SCRBITS {
  union {
    struct {
      unsigned CALRAF : 1;
      unsigned CALRBF : 1;
      unsigned CWUTF : 1;
      unsigned CTSF : 1;
      unsigned CTSOVF : 1;
      unsigned CITSF : 1;
      unsigned : 26;
    };
  };
} typeRTC_SCRBITS;
sfr volatile typeRTC_SCRBITS RTC_SCRbits absolute 0x4000285C;

 typedef struct tagTIM14_CR1BITS {
  union {
    struct {
      unsigned CEN : 1;
      unsigned UDIS : 1;
      unsigned URS : 1;
      unsigned OPM : 1;
      unsigned : 3;
      unsigned ARPE : 1;
      unsigned CKD : 2;
      unsigned : 1;
      unsigned UIFREMAP : 1;
      unsigned : 20;
    };
  };
} typeTIM14_CR1BITS;
sfr volatile typeTIM14_CR1BITS TIM14_CR1bits absolute 0x40002000;

 typedef struct tagTIM14_DIERBITS {
  union {
    struct {
      unsigned UIE : 1;
      unsigned CC1IE : 1;
      unsigned : 30;
    };
  };
} typeTIM14_DIERBITS;
sfr volatile typeTIM14_DIERBITS TIM14_DIERbits absolute 0x4000200C;

 typedef struct tagTIM14_SRBITS {
  union {
    struct {
      unsigned UIF : 1;
      unsigned CC1IF : 1;
      unsigned : 7;
      unsigned CC1OF : 1;
      unsigned : 22;
    };
  };
} typeTIM14_SRBITS;
sfr volatile typeTIM14_SRBITS TIM14_SRbits absolute 0x40002010;

 typedef struct tagTIM14_EGRBITS {
  union {
    struct {
      unsigned UG : 1;
      unsigned CC1G : 1;
      unsigned : 30;
    };
  };
} typeTIM14_EGRBITS;
sfr volatile typeTIM14_EGRBITS TIM14_EGRbits absolute 0x40002014;

 typedef struct tagTIM14_CCMR1_OutputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned OC1FE : 1;
      unsigned OC1PE : 1;
      unsigned OC1M : 3;
      unsigned OC1CE : 1;
      unsigned : 8;
      unsigned OC1M_3 : 1;
      unsigned : 15;
    };
  };
} typeTIM14_CCMR1_OutputBITS;
sfr volatile typeTIM14_CCMR1_OutputBITS TIM14_CCMR1_Outputbits absolute 0x40002018;

 typedef struct tagTIM14_CCMR1_InputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned ICPCS : 2;
      unsigned IC1F : 4;
      unsigned : 24;
    };
  };
} typeTIM14_CCMR1_InputBITS;
sfr volatile typeTIM14_CCMR1_InputBITS TIM14_CCMR1_Inputbits absolute 0x40002018;

 typedef struct tagTIM14_CCERBITS {
  union {
    struct {
      unsigned CC1E : 1;
      unsigned CC1P : 1;
      unsigned : 1;
      unsigned CC1NP : 1;
      unsigned : 28;
    };
  };
} typeTIM14_CCERBITS;
sfr volatile typeTIM14_CCERBITS TIM14_CCERbits absolute 0x40002020;

 typedef struct tagTIM14_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 15;
      unsigned UIFCPY : 1;
    };
  };
} typeTIM14_CNTBITS;
sfr volatile typeTIM14_CNTBITS TIM14_CNTbits absolute 0x40002024;

 typedef struct tagTIM14_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM14_PSCBITS;
sfr volatile typeTIM14_PSCBITS TIM14_PSCbits absolute 0x40002028;

 typedef struct tagTIM14_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM14_ARRBITS;
sfr volatile typeTIM14_ARRBITS TIM14_ARRbits absolute 0x4000202C;

 typedef struct tagTIM14_CCR1BITS {
  union {
    struct {
      unsigned CCR1 : 16;
      unsigned : 16;
    };
  };
} typeTIM14_CCR1BITS;
sfr volatile typeTIM14_CCR1BITS TIM14_CCR1bits absolute 0x40002034;

 typedef struct tagTIM14_TISELBITS {
  union {
    struct {
      unsigned TISEL : 4;
      unsigned : 28;
    };
  };
} typeTIM14_TISELBITS;
sfr volatile typeTIM14_TISELBITS TIM14_TISELbits absolute 0x40002068;

 typedef struct tagTIM2_CR1BITS {
  union {
    struct {
      unsigned CEN : 1;
      unsigned UDIS : 1;
      unsigned URS : 1;
      unsigned OPM : 1;
      unsigned DIR_ : 1;
      unsigned CMS : 2;
      unsigned ARPE : 1;
      unsigned CKD : 2;
      unsigned : 1;
      unsigned UIFREMAP : 1;
      unsigned : 20;
    };
  };
} typeTIM2_CR1BITS;
sfr volatile typeTIM2_CR1BITS TIM2_CR1bits absolute 0x40000000;

 typedef struct tagTIM2_CR2BITS {
  union {
    struct {
      unsigned : 3;
      unsigned CCDS : 1;
      unsigned MMS : 3;
      unsigned TI1S : 1;
      unsigned : 24;
    };
  };
} typeTIM2_CR2BITS;
sfr volatile typeTIM2_CR2BITS TIM2_CR2bits absolute 0x40000004;

 typedef struct tagTIM2_SMCRBITS {
  union {
    struct {
      unsigned SMS : 3;
      unsigned OCCS : 1;
      unsigned TS : 3;
      unsigned MSM : 1;
      unsigned ETF : 4;
      unsigned ETPS : 2;
      unsigned ECE : 1;
      unsigned ETP : 1;
      unsigned SMS_3 : 1;
      unsigned : 3;
      unsigned TS_4_3 : 2;
      unsigned : 10;
    };
  };
} typeTIM2_SMCRBITS;
sfr volatile typeTIM2_SMCRBITS TIM2_SMCRbits absolute 0x40000008;

 typedef struct tagTIM2_DIERBITS {
  union {
    struct {
      unsigned UIE : 1;
      unsigned CC1IE : 1;
      unsigned CC2IE : 1;
      unsigned CC3IE : 1;
      unsigned CC4IE : 1;
      unsigned : 1;
      unsigned TIE : 1;
      unsigned : 1;
      unsigned UDE : 1;
      unsigned CC1DE : 1;
      unsigned CC2DE : 1;
      unsigned CC3DE : 1;
      unsigned CC4DE : 1;
      unsigned : 1;
      unsigned TDE : 1;
      unsigned : 17;
    };
  };
} typeTIM2_DIERBITS;
sfr volatile typeTIM2_DIERBITS TIM2_DIERbits absolute 0x4000000C;

 typedef struct tagTIM2_SRBITS {
  union {
    struct {
      unsigned UIF : 1;
      unsigned CC1IF : 1;
      unsigned CC2IF : 1;
      unsigned CC3IF : 1;
      unsigned CC4IF : 1;
      unsigned : 1;
      unsigned TIF : 1;
      unsigned : 2;
      unsigned CC1OF : 1;
      unsigned CC2OF : 1;
      unsigned CC3OF : 1;
      unsigned CC4OF : 1;
      unsigned : 19;
    };
  };
} typeTIM2_SRBITS;
sfr volatile typeTIM2_SRBITS TIM2_SRbits absolute 0x40000010;

 typedef struct tagTIM2_EGRBITS {
  union {
    struct {
      unsigned UG : 1;
      unsigned CC1G : 1;
      unsigned CC2G : 1;
      unsigned CC3G : 1;
      unsigned CC4G : 1;
      unsigned : 1;
      unsigned TG : 1;
      unsigned : 25;
    };
  };
} typeTIM2_EGRBITS;
sfr volatile typeTIM2_EGRBITS TIM2_EGRbits absolute 0x40000014;

 typedef struct tagTIM2_CCMR1_OutputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned OC1FE : 1;
      unsigned OC1PE : 1;
      unsigned OC1M : 3;
      unsigned OC1CE : 1;
      unsigned CC2S : 2;
      unsigned OC2FE : 1;
      unsigned OC2PE : 1;
      unsigned OC2M : 3;
      unsigned OC2CE : 1;
      unsigned OC1M_3 : 1;
      unsigned : 7;
      unsigned OC2M_3 : 1;
      unsigned : 7;
    };
  };
} typeTIM2_CCMR1_OutputBITS;
sfr volatile typeTIM2_CCMR1_OutputBITS TIM2_CCMR1_Outputbits absolute 0x40000018;

 typedef struct tagTIM2_CCMR1_InputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned IC1PSC : 2;
      unsigned IC1F : 4;
      unsigned CC2S : 2;
      unsigned IC2PSC : 2;
      unsigned IC2F : 4;
      unsigned : 16;
    };
  };
} typeTIM2_CCMR1_InputBITS;
sfr volatile typeTIM2_CCMR1_InputBITS TIM2_CCMR1_Inputbits absolute 0x40000018;

 typedef struct tagTIM2_CCMR2_OutputBITS {
  union {
    struct {
      unsigned CC3S : 2;
      unsigned OC3FE : 1;
      unsigned OC3PE : 1;
      unsigned OC3M : 3;
      unsigned OC3CE : 1;
      unsigned CC4S : 2;
      unsigned OC4FE : 1;
      unsigned OC4PE : 1;
      unsigned OC4M : 3;
      unsigned OC4CE : 1;
      unsigned OC3M_3 : 1;
      unsigned : 7;
      unsigned OC4M_3 : 1;
      unsigned : 7;
    };
  };
} typeTIM2_CCMR2_OutputBITS;
sfr volatile typeTIM2_CCMR2_OutputBITS TIM2_CCMR2_Outputbits absolute 0x4000001C;

 typedef struct tagTIM2_CCMR2_InputBITS {
  union {
    struct {
      unsigned CC3S : 2;
      unsigned IC3PSC : 2;
      unsigned IC3F : 4;
      unsigned CC4S : 2;
      unsigned IC4PSC : 2;
      unsigned IC4F : 4;
      unsigned : 16;
    };
  };
} typeTIM2_CCMR2_InputBITS;
sfr volatile typeTIM2_CCMR2_InputBITS TIM2_CCMR2_Inputbits absolute 0x4000001C;

 typedef struct tagTIM2_CCERBITS {
  union {
    struct {
      unsigned CC1E : 1;
      unsigned CC1P : 1;
      unsigned : 1;
      unsigned CC1NP : 1;
      unsigned CC2E : 1;
      unsigned CC2P : 1;
      unsigned : 1;
      unsigned CC2NP : 1;
      unsigned CC3E : 1;
      unsigned CC3P : 1;
      unsigned : 1;
      unsigned CC3NP : 1;
      unsigned CC4E : 1;
      unsigned CC4P : 1;
      unsigned : 1;
      unsigned CC4NP : 1;
      unsigned : 16;
    };
  };
} typeTIM2_CCERBITS;
sfr volatile typeTIM2_CCERBITS TIM2_CCERbits absolute 0x40000020;

 typedef struct tagTIM2_CNTBITS {
  union {
    struct {
      unsigned CNT_L : 16;
      unsigned CNT_H : 16;
    };
  };
} typeTIM2_CNTBITS;
sfr volatile typeTIM2_CNTBITS TIM2_CNTbits absolute 0x40000024;

 typedef struct tagTIM2_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM2_PSCBITS;
sfr volatile typeTIM2_PSCBITS TIM2_PSCbits absolute 0x40000028;

 typedef struct tagTIM2_ARRBITS {
  union {
    struct {
      unsigned ARR_L : 16;
      unsigned ARR_H : 16;
    };
  };
} typeTIM2_ARRBITS;
sfr volatile typeTIM2_ARRBITS TIM2_ARRbits absolute 0x4000002C;

 typedef struct tagTIM2_CCR1BITS {
  union {
    struct {
      unsigned CCR1_L : 16;
      unsigned CCR1_H : 16;
    };
  };
} typeTIM2_CCR1BITS;
sfr volatile typeTIM2_CCR1BITS TIM2_CCR1bits absolute 0x40000034;

 typedef struct tagTIM2_CCR2BITS {
  union {
    struct {
      unsigned CCR2_L : 16;
      unsigned CCR2_H : 16;
    };
  };
} typeTIM2_CCR2BITS;
sfr volatile typeTIM2_CCR2BITS TIM2_CCR2bits absolute 0x40000038;

 typedef struct tagTIM2_CCR3BITS {
  union {
    struct {
      unsigned CCR3_L : 16;
      unsigned CCR3_H : 16;
    };
  };
} typeTIM2_CCR3BITS;
sfr volatile typeTIM2_CCR3BITS TIM2_CCR3bits absolute 0x4000003C;

 typedef struct tagTIM2_CCR4BITS {
  union {
    struct {
      unsigned CCR4_L : 16;
      unsigned CCR4_H : 16;
    };
  };
} typeTIM2_CCR4BITS;
sfr volatile typeTIM2_CCR4BITS TIM2_CCR4bits absolute 0x40000040;

 typedef struct tagTIM2_DCRBITS {
  union {
    struct {
      unsigned DBA : 5;
      unsigned : 3;
      unsigned DBL : 5;
      unsigned : 19;
    };
  };
} typeTIM2_DCRBITS;
sfr volatile typeTIM2_DCRBITS TIM2_DCRbits absolute 0x40000048;

 typedef struct tagTIM2_DMARBITS {
  union {
    struct {
      unsigned DMAB : 16;
      unsigned : 16;
    };
  };
} typeTIM2_DMARBITS;
sfr volatile typeTIM2_DMARBITS TIM2_DMARbits absolute 0x4000004C;

 typedef struct tagTIM2_OR1BITS {
  union {
    struct {
      unsigned IOCREF_CLR : 1;
      unsigned : 31;
    };
  };
} typeTIM2_OR1BITS;
sfr volatile typeTIM2_OR1BITS TIM2_OR1bits absolute 0x40000050;

 typedef struct tagTIM2_AF1BITS {
  union {
    struct {
      unsigned : 14;
      unsigned ETRSEL : 4;
      unsigned : 14;
    };
  };
} typeTIM2_AF1BITS;
sfr volatile typeTIM2_AF1BITS TIM2_AF1bits absolute 0x40000060;

 typedef struct tagTIM2_TISELBITS {
  union {
    struct {
      unsigned TI1SEL : 4;
      unsigned : 4;
      unsigned TI2SEL : 4;
      unsigned : 20;
    };
  };
} typeTIM2_TISELBITS;
sfr volatile typeTIM2_TISELBITS TIM2_TISELbits absolute 0x40000068;

 typedef struct tagTIM3_CR1BITS {
  union {
    struct {
      unsigned CEN : 1;
      unsigned UDIS : 1;
      unsigned URS : 1;
      unsigned OPM : 1;
      unsigned DIR_ : 1;
      unsigned CMS : 2;
      unsigned ARPE : 1;
      unsigned CKD : 2;
      unsigned : 1;
      unsigned UIFREMAP : 1;
      unsigned : 20;
    };
  };
} typeTIM3_CR1BITS;
sfr volatile typeTIM3_CR1BITS TIM3_CR1bits absolute 0x40000400;

 typedef struct tagTIM3_CR2BITS {
  union {
    struct {
      unsigned : 3;
      unsigned CCDS : 1;
      unsigned MMS : 3;
      unsigned TI1S : 1;
      unsigned : 24;
    };
  };
} typeTIM3_CR2BITS;
sfr volatile typeTIM3_CR2BITS TIM3_CR2bits absolute 0x40000404;

 typedef struct tagTIM3_SMCRBITS {
  union {
    struct {
      unsigned SMS : 3;
      unsigned OCCS : 1;
      unsigned TS : 3;
      unsigned MSM : 1;
      unsigned ETF : 4;
      unsigned ETPS : 2;
      unsigned ECE : 1;
      unsigned ETP : 1;
      unsigned SMS_3 : 1;
      unsigned : 3;
      unsigned TS_4_3 : 2;
      unsigned : 10;
    };
  };
} typeTIM3_SMCRBITS;
sfr volatile typeTIM3_SMCRBITS TIM3_SMCRbits absolute 0x40000408;

 typedef struct tagTIM3_DIERBITS {
  union {
    struct {
      unsigned UIE : 1;
      unsigned CC1IE : 1;
      unsigned CC2IE : 1;
      unsigned CC3IE : 1;
      unsigned CC4IE : 1;
      unsigned : 1;
      unsigned TIE : 1;
      unsigned : 1;
      unsigned UDE : 1;
      unsigned CC1DE : 1;
      unsigned CC2DE : 1;
      unsigned CC3DE : 1;
      unsigned CC4DE : 1;
      unsigned : 1;
      unsigned TDE : 1;
      unsigned : 17;
    };
  };
} typeTIM3_DIERBITS;
sfr volatile typeTIM3_DIERBITS TIM3_DIERbits absolute 0x4000040C;

 typedef struct tagTIM3_SRBITS {
  union {
    struct {
      unsigned UIF : 1;
      unsigned CC1IF : 1;
      unsigned CC2IF : 1;
      unsigned CC3IF : 1;
      unsigned CC4IF : 1;
      unsigned : 1;
      unsigned TIF : 1;
      unsigned : 2;
      unsigned CC1OF : 1;
      unsigned CC2OF : 1;
      unsigned CC3OF : 1;
      unsigned CC4OF : 1;
      unsigned : 19;
    };
  };
} typeTIM3_SRBITS;
sfr volatile typeTIM3_SRBITS TIM3_SRbits absolute 0x40000410;

 typedef struct tagTIM3_EGRBITS {
  union {
    struct {
      unsigned UG : 1;
      unsigned CC1G : 1;
      unsigned CC2G : 1;
      unsigned CC3G : 1;
      unsigned CC4G : 1;
      unsigned : 1;
      unsigned TG : 1;
      unsigned : 25;
    };
  };
} typeTIM3_EGRBITS;
sfr volatile typeTIM3_EGRBITS TIM3_EGRbits absolute 0x40000414;

 typedef struct tagTIM3_CCMR1_OutputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned OC1FE : 1;
      unsigned OC1PE : 1;
      unsigned OC1M : 3;
      unsigned OC1CE : 1;
      unsigned CC2S : 2;
      unsigned OC2FE : 1;
      unsigned OC2PE : 1;
      unsigned OC2M : 3;
      unsigned OC2CE : 1;
      unsigned OC1M_3 : 1;
      unsigned : 7;
      unsigned OC2M_3 : 1;
      unsigned : 7;
    };
  };
} typeTIM3_CCMR1_OutputBITS;
sfr volatile typeTIM3_CCMR1_OutputBITS TIM3_CCMR1_Outputbits absolute 0x40000418;

 typedef struct tagTIM3_CCMR1_InputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned IC1PSC : 2;
      unsigned IC1F : 4;
      unsigned CC2S : 2;
      unsigned IC2PSC : 2;
      unsigned IC2F : 4;
      unsigned : 16;
    };
  };
} typeTIM3_CCMR1_InputBITS;
sfr volatile typeTIM3_CCMR1_InputBITS TIM3_CCMR1_Inputbits absolute 0x40000418;

 typedef struct tagTIM3_CCMR2_OutputBITS {
  union {
    struct {
      unsigned CC3S : 2;
      unsigned OC3FE : 1;
      unsigned OC3PE : 1;
      unsigned OC3M : 3;
      unsigned OC3CE : 1;
      unsigned CC4S : 2;
      unsigned OC4FE : 1;
      unsigned OC4PE : 1;
      unsigned OC4M : 3;
      unsigned OC4CE : 1;
      unsigned OC3M_3 : 1;
      unsigned : 7;
      unsigned OC4M_3 : 1;
      unsigned : 7;
    };
  };
} typeTIM3_CCMR2_OutputBITS;
sfr volatile typeTIM3_CCMR2_OutputBITS TIM3_CCMR2_Outputbits absolute 0x4000041C;

 typedef struct tagTIM3_CCMR2_InputBITS {
  union {
    struct {
      unsigned CC3S : 2;
      unsigned IC3PSC : 2;
      unsigned IC3F : 4;
      unsigned CC4S : 2;
      unsigned IC4PSC : 2;
      unsigned IC4F : 4;
      unsigned : 16;
    };
  };
} typeTIM3_CCMR2_InputBITS;
sfr volatile typeTIM3_CCMR2_InputBITS TIM3_CCMR2_Inputbits absolute 0x4000041C;

 typedef struct tagTIM3_CCERBITS {
  union {
    struct {
      unsigned CC1E : 1;
      unsigned CC1P : 1;
      unsigned : 1;
      unsigned CC1NP : 1;
      unsigned CC2E : 1;
      unsigned CC2P : 1;
      unsigned : 1;
      unsigned CC2NP : 1;
      unsigned CC3E : 1;
      unsigned CC3P : 1;
      unsigned : 1;
      unsigned CC3NP : 1;
      unsigned CC4E : 1;
      unsigned CC4P : 1;
      unsigned : 1;
      unsigned CC4NP : 1;
      unsigned : 16;
    };
  };
} typeTIM3_CCERBITS;
sfr volatile typeTIM3_CCERBITS TIM3_CCERbits absolute 0x40000420;

 typedef struct tagTIM3_CNTBITS {
  union {
    struct {
      unsigned CNT_L : 16;
      unsigned CNT_H : 16;
    };
  };
} typeTIM3_CNTBITS;
sfr volatile typeTIM3_CNTBITS TIM3_CNTbits absolute 0x40000424;

 typedef struct tagTIM3_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM3_PSCBITS;
sfr volatile typeTIM3_PSCBITS TIM3_PSCbits absolute 0x40000428;

 typedef struct tagTIM3_ARRBITS {
  union {
    struct {
      unsigned ARR_L : 16;
      unsigned ARR_H : 16;
    };
  };
} typeTIM3_ARRBITS;
sfr volatile typeTIM3_ARRBITS TIM3_ARRbits absolute 0x4000042C;

 typedef struct tagTIM3_CCR1BITS {
  union {
    struct {
      unsigned CCR1_L : 16;
      unsigned CCR1_H : 16;
    };
  };
} typeTIM3_CCR1BITS;
sfr volatile typeTIM3_CCR1BITS TIM3_CCR1bits absolute 0x40000434;

 typedef struct tagTIM3_CCR2BITS {
  union {
    struct {
      unsigned CCR2_L : 16;
      unsigned CCR2_H : 16;
    };
  };
} typeTIM3_CCR2BITS;
sfr volatile typeTIM3_CCR2BITS TIM3_CCR2bits absolute 0x40000438;

 typedef struct tagTIM3_CCR3BITS {
  union {
    struct {
      unsigned CCR3_L : 16;
      unsigned CCR3_H : 16;
    };
  };
} typeTIM3_CCR3BITS;
sfr volatile typeTIM3_CCR3BITS TIM3_CCR3bits absolute 0x4000043C;

 typedef struct tagTIM3_CCR4BITS {
  union {
    struct {
      unsigned CCR4_L : 16;
      unsigned CCR4_H : 16;
    };
  };
} typeTIM3_CCR4BITS;
sfr volatile typeTIM3_CCR4BITS TIM3_CCR4bits absolute 0x40000440;

 typedef struct tagTIM3_DCRBITS {
  union {
    struct {
      unsigned DBA : 5;
      unsigned : 3;
      unsigned DBL : 5;
      unsigned : 19;
    };
  };
} typeTIM3_DCRBITS;
sfr volatile typeTIM3_DCRBITS TIM3_DCRbits absolute 0x40000448;

 typedef struct tagTIM3_DMARBITS {
  union {
    struct {
      unsigned DMAB : 16;
      unsigned : 16;
    };
  };
} typeTIM3_DMARBITS;
sfr volatile typeTIM3_DMARBITS TIM3_DMARbits absolute 0x4000044C;

 typedef struct tagTIM3_OR1BITS {
  union {
    struct {
      unsigned IOCREF_CLR : 1;
      unsigned : 31;
    };
  };
} typeTIM3_OR1BITS;
sfr volatile typeTIM3_OR1BITS TIM3_OR1bits absolute 0x40000450;

 typedef struct tagTIM3_AF1BITS {
  union {
    struct {
      unsigned : 14;
      unsigned ETRSEL : 4;
      unsigned : 14;
    };
  };
} typeTIM3_AF1BITS;
sfr volatile typeTIM3_AF1BITS TIM3_AF1bits absolute 0x40000460;

 typedef struct tagTIM3_TISELBITS {
  union {
    struct {
      unsigned TI1SEL : 4;
      unsigned : 4;
      unsigned TI2SEL : 4;
      unsigned : 20;
    };
  };
} typeTIM3_TISELBITS;
sfr volatile typeTIM3_TISELBITS TIM3_TISELbits absolute 0x40000468;

 typedef struct tagNVIC_ISERBITS {
  union {
    struct {
      unsigned SETENA : 32;
    };
  };
} typeNVIC_ISERBITS;
sfr far volatile typeNVIC_ISERBITS NVIC_ISERbits absolute 0xE000E100;

 typedef struct tagNVIC_ICERBITS {
  union {
    struct {
      unsigned CLRENA : 32;
    };
  };
} typeNVIC_ICERBITS;
sfr far volatile typeNVIC_ICERBITS NVIC_ICERbits absolute 0xE000E180;

 typedef struct tagNVIC_ISPRBITS {
  union {
    struct {
      unsigned SETPEND : 32;
    };
  };
} typeNVIC_ISPRBITS;
sfr far volatile typeNVIC_ISPRBITS NVIC_ISPRbits absolute 0xE000E200;

 typedef struct tagNVIC_ICPRBITS {
  union {
    struct {
      unsigned CLRPEND : 32;
    };
  };
} typeNVIC_ICPRBITS;
sfr far volatile typeNVIC_ICPRBITS NVIC_ICPRbits absolute 0xE000E280;

 typedef struct tagNVIC_IPR0BITS {
  union {
    struct {
      unsigned PRI_0 : 8;
      unsigned PRI_1 : 8;
      unsigned PRI_2 : 8;
      unsigned PRI_3 : 8;
    };
  };
} typeNVIC_IPR0BITS;
sfr far volatile typeNVIC_IPR0BITS NVIC_IPR0bits absolute 0xE000E400;

 typedef struct tagNVIC_IPR1BITS {
  union {
    struct {
      unsigned PRI_4 : 8;
      unsigned PRI_5 : 8;
      unsigned PRI_6 : 8;
      unsigned PRI_7 : 8;
    };
  };
} typeNVIC_IPR1BITS;
sfr far volatile typeNVIC_IPR1BITS NVIC_IPR1bits absolute 0xE000E404;

 typedef struct tagNVIC_IPR2BITS {
  union {
    struct {
      unsigned PRI_8 : 8;
      unsigned PRI_9 : 8;
      unsigned PRI_10 : 8;
      unsigned PRI_11 : 8;
    };
  };
} typeNVIC_IPR2BITS;
sfr far volatile typeNVIC_IPR2BITS NVIC_IPR2bits absolute 0xE000E408;

 typedef struct tagNVIC_IPR3BITS {
  union {
    struct {
      unsigned PRI_12 : 8;
      unsigned PRI_13 : 8;
      unsigned PRI_14 : 8;
      unsigned PRI_15 : 8;
    };
  };
} typeNVIC_IPR3BITS;
sfr far volatile typeNVIC_IPR3BITS NVIC_IPR3bits absolute 0xE000E40C;

 typedef struct tagNVIC_IPR4BITS {
  union {
    struct {
      unsigned PRI_16 : 8;
      unsigned PRI_17 : 8;
      unsigned PRI_18 : 8;
      unsigned PRI_19 : 8;
    };
  };
} typeNVIC_IPR4BITS;
sfr far volatile typeNVIC_IPR4BITS NVIC_IPR4bits absolute 0xE000E410;

 typedef struct tagNVIC_IPR5BITS {
  union {
    struct {
      unsigned PRI_20 : 8;
      unsigned PRI_21 : 8;
      unsigned PRI_22 : 8;
      unsigned PRI_23 : 8;
    };
  };
} typeNVIC_IPR5BITS;
sfr far volatile typeNVIC_IPR5BITS NVIC_IPR5bits absolute 0xE000E414;

 typedef struct tagNVIC_IPR6BITS {
  union {
    struct {
      unsigned PRI_24 : 8;
      unsigned PRI_25 : 8;
      unsigned PRI_26 : 8;
      unsigned PRI_27 : 8;
    };
  };
} typeNVIC_IPR6BITS;
sfr far volatile typeNVIC_IPR6BITS NVIC_IPR6bits absolute 0xE000E418;

 typedef struct tagNVIC_IPR7BITS {
  union {
    struct {
      unsigned PRI_28 : 8;
      unsigned PRI_29 : 8;
      unsigned PRI_30 : 8;
      unsigned PRI_31 : 8;
    };
  };
} typeNVIC_IPR7BITS;
sfr far volatile typeNVIC_IPR7BITS NVIC_IPR7bits absolute 0xE000E41C;

 typedef struct tagMPU_TYPERBITS {
  union {
    struct {
      unsigned SEPARATE : 1;
      unsigned : 7;
      unsigned DREGION : 8;
      unsigned IREGION : 8;
      unsigned : 8;
    };
  };
} typeMPU_TYPERBITS;
sfr far volatile typeMPU_TYPERBITS MPU_TYPERbits absolute 0xE000ED90;

 typedef struct tagMPU_CTRLBITS {
  union {
    struct {
      unsigned ENABLE_ : 1;
      unsigned HFNMIENA : 1;
      unsigned PRIVDEFENA : 1;
      unsigned : 29;
    };
  };
} typeMPU_CTRLBITS;
sfr far volatile typeMPU_CTRLBITS MPU_CTRLbits absolute 0xE000ED94;

 typedef struct tagMPU_RNRBITS {
  union {
    struct {
      unsigned REGION : 8;
      unsigned : 24;
    };
  };
} typeMPU_RNRBITS;
sfr far volatile typeMPU_RNRBITS MPU_RNRbits absolute 0xE000ED98;

 typedef struct tagMPU_RBARBITS {
  union {
    struct {
      unsigned REGION : 4;
      unsigned VALID : 1;
      unsigned ADDR : 27;
    };
  };
} typeMPU_RBARBITS;
sfr far volatile typeMPU_RBARBITS MPU_RBARbits absolute 0xE000ED9C;

 typedef struct tagMPU_RASRBITS {
  union {
    struct {
      unsigned ENABLE_ : 1;
      unsigned SIZE : 5;
      unsigned : 2;
      unsigned SRD : 8;
      unsigned B : 1;
      unsigned C : 1;
      unsigned S : 1;
      unsigned TEX : 3;
      unsigned : 2;
      unsigned AP : 3;
      unsigned : 1;
      unsigned XN : 1;
      unsigned : 3;
    };
  };
} typeMPU_RASRBITS;
sfr far volatile typeMPU_RASRBITS MPU_RASRbits absolute 0xE000EDA0;

 typedef struct tagSTK_CSRBITS {
  union {
    struct {
      unsigned ENABLE_ : 1;
      unsigned TICKINT : 1;
      unsigned CLKSOURCE : 1;
      unsigned : 13;
      unsigned COUNTFLAG : 1;
      unsigned : 15;
    };
  };
} typeSTK_CSRBITS;
sfr far volatile typeSTK_CSRBITS STK_CSRbits absolute 0xE000E010;

 typedef struct tagSTK_RVRBITS {
  union {
    struct {
      unsigned RELOAD : 24;
      unsigned : 8;
    };
  };
} typeSTK_RVRBITS;
sfr far volatile typeSTK_RVRBITS STK_RVRbits absolute 0xE000E014;

 typedef struct tagSTK_CVRBITS {
  union {
    struct {
      unsigned CURRENT : 24;
      unsigned : 8;
    };
  };
} typeSTK_CVRBITS;
sfr far volatile typeSTK_CVRBITS STK_CVRbits absolute 0xE000E018;

 typedef struct tagSTK_CALIBBITS {
  union {
    struct {
      unsigned TENMS : 24;
      unsigned : 6;
      unsigned SKEW : 1;
      unsigned NOREF : 1;
    };
  };
} typeSTK_CALIBBITS;
sfr far volatile typeSTK_CALIBBITS STK_CALIBbits absolute 0xE000E01C;

 typedef struct tagSCB_CPUIDBITS {
  union {
    struct {
      unsigned Revision : 4;
      unsigned PartNo : 12;
      unsigned Architecture : 4;
      unsigned Variant : 4;
      unsigned Implementer : 8;
    };
  };
} typeSCB_CPUIDBITS;
sfr far volatile typeSCB_CPUIDBITS SCB_CPUIDbits absolute 0xE000ED00;

 typedef struct tagSCB_ICSRBITS {
  union {
    struct {
      unsigned VECTACTIVE : 9;
      unsigned : 2;
      unsigned RETTOBASE : 1;
      unsigned VECTPENDING : 7;
      unsigned : 3;
      unsigned ISRPENDING : 1;
      unsigned : 2;
      unsigned PENDSTCLR : 1;
      unsigned PENDSTSET : 1;
      unsigned PENDSVCLR : 1;
      unsigned PENDSVSET : 1;
      unsigned : 2;
      unsigned NMIPENDSET : 1;
    };
  };
} typeSCB_ICSRBITS;
sfr far volatile typeSCB_ICSRBITS SCB_ICSRbits absolute 0xE000ED04;

 typedef struct tagSCB_VTORBITS {
  union {
    struct {
      unsigned : 7;
      unsigned TBLOFF : 25;
    };
  };
} typeSCB_VTORBITS;
sfr far volatile typeSCB_VTORBITS SCB_VTORbits absolute 0xE000ED08;

 typedef struct tagSCB_AIRCRBITS {
  union {
    struct {
      unsigned : 1;
      unsigned VECTCLRACTIVE : 1;
      unsigned SYSRESETREQ : 1;
      unsigned : 12;
      unsigned ENDIANESS : 1;
      unsigned VECTKEYSTAT : 16;
    };
  };
} typeSCB_AIRCRBITS;
sfr far volatile typeSCB_AIRCRBITS SCB_AIRCRbits absolute 0xE000ED0C;

 typedef struct tagSCB_SCRBITS {
  union {
    struct {
      unsigned : 1;
      unsigned SLEEPONEXIT : 1;
      unsigned SLEEPDEEP : 1;
      unsigned : 1;
      unsigned SEVEONPEND : 1;
      unsigned : 27;
    };
  };
} typeSCB_SCRBITS;
sfr far volatile typeSCB_SCRBITS SCB_SCRbits absolute 0xE000ED10;

 typedef struct tagSCB_CCRBITS {
  union {
    struct {
      unsigned NONBASETHRDENA : 1;
      unsigned USERSETMPEND : 1;
      unsigned : 1;
      unsigned UNALIGN__TRP : 1;
      unsigned DIV_0_TRP : 1;
      unsigned : 3;
      unsigned BFHFNMIGN : 1;
      unsigned STKALIGN : 1;
      unsigned : 22;
    };
  };
} typeSCB_CCRBITS;
sfr far volatile typeSCB_CCRBITS SCB_CCRbits absolute 0xE000ED14;

 typedef struct tagSCB_SHPR2BITS {
  union {
    struct {
      unsigned : 24;
      unsigned PRI_11 : 8;
    };
  };
} typeSCB_SHPR2BITS;
sfr far volatile typeSCB_SHPR2BITS SCB_SHPR2bits absolute 0xE000ED1C;

 typedef struct tagSCB_SHPR3BITS {
  union {
    struct {
      unsigned : 16;
      unsigned PRI_14 : 8;
      unsigned PRI_15 : 8;
    };
  };
} typeSCB_SHPR3BITS;
sfr far volatile typeSCB_SHPR3BITS SCB_SHPR3bits absolute 0xE000ED20;

 typedef struct tagVREFBUF_CSRBITS {
  union {
    struct {
      unsigned ENVR : 1;
      unsigned HIZ : 1;
      unsigned : 1;
      unsigned VRR : 1;
      unsigned VRS : 3;
      unsigned : 25;
    };
  };
} typeVREFBUF_CSRBITS;
sfr volatile typeVREFBUF_CSRBITS VREFBUF_CSRbits absolute 0x40010030;

 typedef struct tagVREFBUF_CCRBITS {
  union {
    struct {
      unsigned TRIM : 6;
      unsigned : 26;
    };
  };
} typeVREFBUF_CCRBITS;
sfr volatile typeVREFBUF_CCRBITS VREFBUF_CCRbits absolute 0x40010034;

 typedef struct tagDBG_IDCODEBITS {
  union {
    struct {
      unsigned DEV_ID : 12;
      unsigned : 4;
      unsigned REV_ID : 16;
    };
  };
} typeDBG_IDCODEBITS;
sfr volatile typeDBG_IDCODEBITS DBG_IDCODEbits absolute 0x40015800;

 typedef struct tagDBG_CRBITS {
  union {
    struct {
      unsigned : 1;
      unsigned DBG_STOP : 1;
      unsigned DBG_STANDBY : 1;
      unsigned : 29;
    };
  };
} typeDBG_CRBITS;
sfr volatile typeDBG_CRBITS DBG_CRbits absolute 0x40015804;

 typedef struct tagDBG_APB_FZ1BITS {
  union {
    struct {
      unsigned DBG_TIM2_STOP : 1;
      unsigned DBG_TIM3_STOP : 1;
      unsigned : 8;
      unsigned DBG_RTC_STOP : 1;
      unsigned DBG_WWDG_STOP : 1;
      unsigned DBG_IWDG_STOP : 1;
      unsigned : 8;
      unsigned DBG_I2C1_STOP : 1;
      unsigned : 8;
      unsigned DBG_LPTIM2_STOP : 1;
      unsigned DBG_LPTIM1_STOP : 1;
    };
  };
} typeDBG_APB_FZ1BITS;
sfr volatile typeDBG_APB_FZ1BITS DBG_APB_FZ1bits absolute 0x40015808;

 typedef struct tagDBG_APB_FZ2BITS {
  union {
    struct {
      unsigned : 11;
      unsigned DBG_TIM1_STOP : 1;
      unsigned : 3;
      unsigned DBG_TIM14_STOP : 1;
      unsigned : 1;
      unsigned DBG_TIM16_STOP : 1;
      unsigned DBG_TIM17_STOP : 1;
      unsigned : 13;
    };
  };
} typeDBG_APB_FZ2BITS;
sfr volatile typeDBG_APB_FZ2BITS DBG_APB_FZ2bits absolute 0x4001580C;

 typedef struct tagNVIC_STIR_STIRBITS {
  union {
    struct {
      unsigned INTID : 9;
      unsigned : 23;
    };
  };
} typeNVIC_STIR_STIRBITS;
sfr far volatile typeNVIC_STIR_STIRBITS NVIC_STIR_STIRbits absolute 0xE000EF00;

 typedef struct tagSCB_ACTRL_ACTRLBITS {
  union {
    struct {
      unsigned DISMCYCINT : 1;
      unsigned DISDEFWBUF : 1;
      unsigned DISFOLD : 1;
      unsigned : 5;
      unsigned DISFPCA : 1;
      unsigned DISOOFP : 1;
      unsigned : 22;
    };
  };
} typeSCB_ACTRL_ACTRLBITS;
sfr far volatile typeSCB_ACTRL_ACTRLBITS SCB_ACTRL_ACTRLbits absolute 0xE000E008;

 typedef struct tagFPU_CPACR_CPACRBITS {
  union {
    struct {
      unsigned : 20;
      unsigned CP : 4;
      unsigned : 8;
    };
  };
} typeFPU_CPACR_CPACRBITS;
sfr far volatile typeFPU_CPACR_CPACRBITS FPU_CPACR_CPACRbits absolute 0xE000ED88;

 typedef struct tagFPU_FPCCRBITS {
  union {
    struct {
      unsigned LSPACT : 1;
      unsigned USER : 1;
      unsigned : 1;
      unsigned THREAD : 1;
      unsigned HFRDY : 1;
      unsigned MMRDY : 1;
      unsigned BFRDY : 1;
      unsigned : 1;
      unsigned MONRDY : 1;
      unsigned : 21;
      unsigned LSPEN : 1;
      unsigned ASPEN : 1;
    };
  };
} typeFPU_FPCCRBITS;
sfr far volatile typeFPU_FPCCRBITS FPU_FPCCRbits absolute 0xE000EF34;

 typedef struct tagFPU_FPCARBITS {
  union {
    struct {
      unsigned : 3;
      unsigned ADDRESS : 29;
    };
  };
} typeFPU_FPCARBITS;
sfr far volatile typeFPU_FPCARBITS FPU_FPCARbits absolute 0xE000EF38;

 typedef struct tagFPU_FPSCRBITS {
  union {
    struct {
      unsigned IOC : 1;
      unsigned DZC : 1;
      unsigned OFC : 1;
      unsigned UFC : 1;
      unsigned IXC : 1;
      unsigned : 2;
      unsigned IDC : 1;
      unsigned : 14;
      unsigned RMode : 2;
      unsigned FZ : 1;
      unsigned DN : 1;
      unsigned AHP : 1;
      unsigned : 1;
      unsigned V : 1;
      unsigned C : 1;
      unsigned Z : 1;
      unsigned N : 1;
    };
  };
} typeFPU_FPSCRBITS;
sfr far volatile typeFPU_FPSCRBITS FPU_FPSCRbits absolute 0xE000EF3C;

 typedef struct tagSYSCFG_ITLINE_ITLINE0BITS {
  union {
    struct {
      unsigned WWDG : 1;
      unsigned : 31;
    };
  };
} typeSYSCFG_ITLINE_ITLINE0BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE0BITS SYSCFG_ITLINE_ITLINE0bits absolute 0x40010100;

 typedef struct tagSYSCFG_ITLINE_ITLINE1BITS {
  union {
    struct {
      unsigned PVDOUT : 1;
      unsigned : 31;
    };
  };
} typeSYSCFG_ITLINE_ITLINE1BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE1BITS SYSCFG_ITLINE_ITLINE1bits absolute 0x40010104;

 typedef struct tagSYSCFG_ITLINE_ITLINE2BITS {
  union {
    struct {
      unsigned TAMP : 1;
      unsigned RTC : 1;
      unsigned : 30;
    };
  };
} typeSYSCFG_ITLINE_ITLINE2BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE2BITS SYSCFG_ITLINE_ITLINE2bits absolute 0x40010108;

 typedef struct tagSYSCFG_ITLINE_ITLINE3BITS {
  union {
    struct {
      unsigned FLASH_ITF : 1;
      unsigned FLASH_ECC : 1;
      unsigned : 30;
    };
  };
} typeSYSCFG_ITLINE_ITLINE3BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE3BITS SYSCFG_ITLINE_ITLINE3bits absolute 0x4001010C;

 typedef struct tagSYSCFG_ITLINE_ITLINE4BITS {
  union {
    struct {
      unsigned RCC : 1;
      unsigned : 31;
    };
  };
} typeSYSCFG_ITLINE_ITLINE4BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE4BITS SYSCFG_ITLINE_ITLINE4bits absolute 0x40010110;

 typedef struct tagSYSCFG_ITLINE_ITLINE5BITS {
  union {
    struct {
      unsigned EXTI0 : 1;
      unsigned EXTI1 : 1;
      unsigned : 30;
    };
  };
} typeSYSCFG_ITLINE_ITLINE5BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE5BITS SYSCFG_ITLINE_ITLINE5bits absolute 0x40010114;

 typedef struct tagSYSCFG_ITLINE_ITLINE6BITS {
  union {
    struct {
      unsigned EXTI2 : 1;
      unsigned EXTI3 : 1;
      unsigned : 30;
    };
  };
} typeSYSCFG_ITLINE_ITLINE6BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE6BITS SYSCFG_ITLINE_ITLINE6bits absolute 0x40010118;

 typedef struct tagSYSCFG_ITLINE_ITLINE7BITS {
  union {
    struct {
      unsigned EXTI4 : 1;
      unsigned EXTI5 : 1;
      unsigned EXTI6 : 1;
      unsigned EXTI7 : 1;
      unsigned EXTI8 : 1;
      unsigned EXTI9 : 1;
      unsigned EXTI10 : 1;
      unsigned EXTI11 : 1;
      unsigned EXTI12 : 1;
      unsigned EXTI13 : 1;
      unsigned EXTI14 : 1;
      unsigned EXTI15 : 1;
      unsigned : 20;
    };
  };
} typeSYSCFG_ITLINE_ITLINE7BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE7BITS SYSCFG_ITLINE_ITLINE7bits absolute 0x4001011C;

 typedef struct tagSYSCFG_ITLINE_ITLINE9BITS {
  union {
    struct {
      unsigned DMA1_CH1 : 1;
      unsigned : 31;
    };
  };
} typeSYSCFG_ITLINE_ITLINE9BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE9BITS SYSCFG_ITLINE_ITLINE9bits absolute 0x40010124;

 typedef struct tagSYSCFG_ITLINE_ITLINE10BITS {
  union {
    struct {
      unsigned DMA1_CH2 : 1;
      unsigned DMA1_CH3 : 1;
      unsigned : 30;
    };
  };
} typeSYSCFG_ITLINE_ITLINE10BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE10BITS SYSCFG_ITLINE_ITLINE10bits absolute 0x40010128;

 typedef struct tagSYSCFG_ITLINE_ITLINE11BITS {
  union {
    struct {
      unsigned DMAMUX : 1;
      unsigned DMA1_CH4 : 1;
      unsigned DMA1_CH5 : 1;
      unsigned : 29;
    };
  };
} typeSYSCFG_ITLINE_ITLINE11BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE11BITS SYSCFG_ITLINE_ITLINE11bits absolute 0x4001012C;

 typedef struct tagSYSCFG_ITLINE_ITLINE12BITS {
  union {
    struct {
      unsigned ADC : 1;
      unsigned : 31;
    };
  };
} typeSYSCFG_ITLINE_ITLINE12BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE12BITS SYSCFG_ITLINE_ITLINE12bits absolute 0x40010130;

 typedef struct tagSYSCFG_ITLINE_ITLINE13BITS {
  union {
    struct {
      unsigned TIM1_CCU : 1;
      unsigned TIM1_TRG : 1;
      unsigned TIM1_UPD : 1;
      unsigned TIM1_BRK : 1;
      unsigned : 28;
    };
  };
} typeSYSCFG_ITLINE_ITLINE13BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE13BITS SYSCFG_ITLINE_ITLINE13bits absolute 0x40010134;

 typedef struct tagSYSCFG_ITLINE_ITLINE14BITS {
  union {
    struct {
      unsigned TIM1_CC : 1;
      unsigned : 31;
    };
  };
} typeSYSCFG_ITLINE_ITLINE14BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE14BITS SYSCFG_ITLINE_ITLINE14bits absolute 0x40010138;

 typedef struct tagSYSCFG_ITLINE_ITLINE15BITS {
  union {
    struct {
      unsigned TIM2 : 1;
      unsigned : 31;
    };
  };
} typeSYSCFG_ITLINE_ITLINE15BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE15BITS SYSCFG_ITLINE_ITLINE15bits absolute 0x4001013C;

 typedef struct tagSYSCFG_ITLINE_ITLINE16BITS {
  union {
    struct {
      unsigned TIM3 : 1;
      unsigned : 31;
    };
  };
} typeSYSCFG_ITLINE_ITLINE16BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE16BITS SYSCFG_ITLINE_ITLINE16bits absolute 0x40010140;

 typedef struct tagSYSCFG_ITLINE_ITLINE17BITS {
  union {
    struct {
      unsigned : 2;
      unsigned LPTIM1 : 1;
      unsigned : 29;
    };
  };
} typeSYSCFG_ITLINE_ITLINE17BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE17BITS SYSCFG_ITLINE_ITLINE17bits absolute 0x40010144;

 typedef struct tagSYSCFG_ITLINE_ITLINE18BITS {
  union {
    struct {
      unsigned : 1;
      unsigned LPTIM2 : 1;
      unsigned : 30;
    };
  };
} typeSYSCFG_ITLINE_ITLINE18BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE18BITS SYSCFG_ITLINE_ITLINE18bits absolute 0x40010148;

 typedef struct tagSYSCFG_ITLINE_ITLINE19BITS {
  union {
    struct {
      unsigned TIM14 : 1;
      unsigned : 31;
    };
  };
} typeSYSCFG_ITLINE_ITLINE19BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE19BITS SYSCFG_ITLINE_ITLINE19bits absolute 0x4001014C;

 typedef struct tagSYSCFG_ITLINE_ITLINE21BITS {
  union {
    struct {
      unsigned TIM16 : 1;
      unsigned : 31;
    };
  };
} typeSYSCFG_ITLINE_ITLINE21BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE21BITS SYSCFG_ITLINE_ITLINE21bits absolute 0x40010154;

 typedef struct tagSYSCFG_ITLINE_ITLINE22BITS {
  union {
    struct {
      unsigned TIM17 : 1;
      unsigned : 31;
    };
  };
} typeSYSCFG_ITLINE_ITLINE22BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE22BITS SYSCFG_ITLINE_ITLINE22bits absolute 0x40010158;

 typedef struct tagSYSCFG_ITLINE_ITLINE23BITS {
  union {
    struct {
      unsigned I2C1 : 1;
      unsigned : 31;
    };
  };
} typeSYSCFG_ITLINE_ITLINE23BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE23BITS SYSCFG_ITLINE_ITLINE23bits absolute 0x4001015C;

 typedef struct tagSYSCFG_ITLINE_ITLINE24BITS {
  union {
    struct {
      unsigned I2C2 : 1;
      unsigned : 31;
    };
  };
} typeSYSCFG_ITLINE_ITLINE24BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE24BITS SYSCFG_ITLINE_ITLINE24bits absolute 0x40010160;

 typedef struct tagSYSCFG_ITLINE_ITLINE25BITS {
  union {
    struct {
      unsigned SPI1 : 1;
      unsigned : 31;
    };
  };
} typeSYSCFG_ITLINE_ITLINE25BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE25BITS SYSCFG_ITLINE_ITLINE25bits absolute 0x40010164;

 typedef struct tagSYSCFG_ITLINE_ITLINE26BITS {
  union {
    struct {
      unsigned SPI2 : 1;
      unsigned : 31;
    };
  };
} typeSYSCFG_ITLINE_ITLINE26BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE26BITS SYSCFG_ITLINE_ITLINE26bits absolute 0x40010168;

 typedef struct tagSYSCFG_ITLINE_ITLINE27BITS {
  union {
    struct {
      unsigned USART1 : 1;
      unsigned : 31;
    };
  };
} typeSYSCFG_ITLINE_ITLINE27BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE27BITS SYSCFG_ITLINE_ITLINE27bits absolute 0x4001016C;

 typedef struct tagSYSCFG_ITLINE_ITLINE28BITS {
  union {
    struct {
      unsigned USART2 : 1;
      unsigned : 31;
    };
  };
} typeSYSCFG_ITLINE_ITLINE28BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE28BITS SYSCFG_ITLINE_ITLINE28bits absolute 0x40010170;

 typedef struct tagSYSCFG_ITLINE_ITLINE29BITS {
  union {
    struct {
      unsigned : 2;
      unsigned USART5 : 1;
      unsigned : 29;
    };
  };
} typeSYSCFG_ITLINE_ITLINE29BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE29BITS SYSCFG_ITLINE_ITLINE29bits absolute 0x40010174;

 typedef struct tagSYSCFG_ITLINE_ITLINE31BITS {
  union {
    struct {
      unsigned RNG : 1;
      unsigned AES : 1;
      unsigned : 30;
    };
  };
} typeSYSCFG_ITLINE_ITLINE31BITS;
sfr volatile typeSYSCFG_ITLINE_ITLINE31BITS SYSCFG_ITLINE_ITLINE31bits absolute 0x4001017C;
