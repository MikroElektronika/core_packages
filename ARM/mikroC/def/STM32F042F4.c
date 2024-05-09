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
const IVT_INT_PVD_VDDIO2         = 17;
const IVT_INT_RTC                = 18;
const IVT_INT_FLASH              = 19;
const IVT_INT_RCC_CRS            = 20;
const IVT_INT_EXTI0_1            = 21;
const IVT_INT_EXTI2_3            = 22;
const IVT_INT_EXTI4_15           = 23;
const IVT_INT_TSC                = 24;
const IVT_INT_DMA_CH1            = 25;
const IVT_INT_DMA_CH2_3          = 26;
const IVT_INT_DMA_CH4_5_6_7      = 27;
const IVT_INT_ADC_COMP           = 28;
const IVT_INT_TIM1_BRK_UP_TRG_COM = 29;
const IVT_INT_TIM1_CC            = 30;
const IVT_INT_TIM2               = 31;
const IVT_INT_TIM3               = 32;
const IVT_INT_TIM6_DAC           = 33;
const IVT_INT_TIM7               = 34;
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
const IVT_INT_USART3_4           = 45;
const IVT_INT_CEC_CAN            = 46;
const IVT_INT_USB                = 47;


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
    const register unsigned short int IDR0 = 0;
    sbit  IDR0_bit at CRC_IDR.B0;
    const register unsigned short int IDR1 = 1;
    sbit  IDR1_bit at CRC_IDR.B1;
    const register unsigned short int IDR2 = 2;
    sbit  IDR2_bit at CRC_IDR.B2;
    const register unsigned short int IDR3 = 3;
    sbit  IDR3_bit at CRC_IDR.B3;
    const register unsigned short int IDR4 = 4;
    sbit  IDR4_bit at CRC_IDR.B4;
    const register unsigned short int IDR5 = 5;
    sbit  IDR5_bit at CRC_IDR.B5;
    const register unsigned short int IDR6 = 6;
    sbit  IDR6_bit at CRC_IDR.B6;
    const register unsigned short int IDR7 = 7;
    sbit  IDR7_bit at CRC_IDR.B7;

sfr unsigned long   volatile CRC_CR               absolute 0x40023008;
    const register unsigned short int RESET_ = 0;
    sbit  RESET_bit at CRC_CR.B0;
    const register unsigned short int REV_IN0 = 5;
    sbit  REV_IN0_bit at CRC_CR.B5;
    const register unsigned short int REV_IN1 = 6;
    sbit  REV_IN1_bit at CRC_CR.B6;
    const register unsigned short int REV_OUT = 7;
    sbit  REV_OUT_bit at CRC_CR.B7;

sfr unsigned long   volatile CRC_INIT             absolute 0x4002300C;
    const register unsigned short int INIT0 = 0;
    sbit  INIT0_bit at CRC_INIT.B0;
    const register unsigned short int INIT1 = 1;
    sbit  INIT1_bit at CRC_INIT.B1;
    const register unsigned short int INIT2 = 2;
    sbit  INIT2_bit at CRC_INIT.B2;
    const register unsigned short int INIT3 = 3;
    sbit  INIT3_bit at CRC_INIT.B3;
    const register unsigned short int INIT4 = 4;
    sbit  INIT4_bit at CRC_INIT.B4;
    const register unsigned short int INIT5 = 5;
    sbit  INIT5_bit at CRC_INIT.B5;
    const register unsigned short int INIT6 = 6;
    sbit  INIT6_bit at CRC_INIT.B6;
    const register unsigned short int INIT7 = 7;
    sbit  INIT7_bit at CRC_INIT.B7;
    const register unsigned short int INIT8 = 8;
    sbit  INIT8_bit at CRC_INIT.B8;
    const register unsigned short int INIT9 = 9;
    sbit  INIT9_bit at CRC_INIT.B9;
    const register unsigned short int INIT10 = 10;
    sbit  INIT10_bit at CRC_INIT.B10;
    const register unsigned short int INIT11 = 11;
    sbit  INIT11_bit at CRC_INIT.B11;
    const register unsigned short int INIT12 = 12;
    sbit  INIT12_bit at CRC_INIT.B12;
    const register unsigned short int INIT13 = 13;
    sbit  INIT13_bit at CRC_INIT.B13;
    const register unsigned short int INIT14 = 14;
    sbit  INIT14_bit at CRC_INIT.B14;
    const register unsigned short int INIT15 = 15;
    sbit  INIT15_bit at CRC_INIT.B15;
    const register unsigned short int INIT16 = 16;
    sbit  INIT16_bit at CRC_INIT.B16;
    const register unsigned short int INIT17 = 17;
    sbit  INIT17_bit at CRC_INIT.B17;
    const register unsigned short int INIT18 = 18;
    sbit  INIT18_bit at CRC_INIT.B18;
    const register unsigned short int INIT19 = 19;
    sbit  INIT19_bit at CRC_INIT.B19;
    const register unsigned short int INIT20 = 20;
    sbit  INIT20_bit at CRC_INIT.B20;
    const register unsigned short int INIT21 = 21;
    sbit  INIT21_bit at CRC_INIT.B21;
    const register unsigned short int INIT22 = 22;
    sbit  INIT22_bit at CRC_INIT.B22;
    const register unsigned short int INIT23 = 23;
    sbit  INIT23_bit at CRC_INIT.B23;
    const register unsigned short int INIT24 = 24;
    sbit  INIT24_bit at CRC_INIT.B24;
    const register unsigned short int INIT25 = 25;
    sbit  INIT25_bit at CRC_INIT.B25;
    const register unsigned short int INIT26 = 26;
    sbit  INIT26_bit at CRC_INIT.B26;
    const register unsigned short int INIT27 = 27;
    sbit  INIT27_bit at CRC_INIT.B27;
    const register unsigned short int INIT28 = 28;
    sbit  INIT28_bit at CRC_INIT.B28;
    const register unsigned short int INIT29 = 29;
    sbit  INIT29_bit at CRC_INIT.B29;
    const register unsigned short int INIT30 = 30;
    sbit  INIT30_bit at CRC_INIT.B30;
    const register unsigned short int INIT31 = 31;
    sbit  INIT31_bit at CRC_INIT.B31;

sfr far unsigned long   volatile GPIOF_BASE           absolute 0x48001400;
sfr far unsigned long   volatile GPIOF_MODER          absolute 0x48001400;
    const register unsigned short int MODER150 = 30;
    sbit  MODER150_bit at GPIOF_MODER.B30;
    const register unsigned short int MODER151 = 31;
    sbit  MODER151_bit at GPIOF_MODER.B31;
    const register unsigned short int MODER140 = 28;
    sbit  MODER140_bit at GPIOF_MODER.B28;
    const register unsigned short int MODER141 = 29;
    sbit  MODER141_bit at GPIOF_MODER.B29;
    const register unsigned short int MODER130 = 26;
    sbit  MODER130_bit at GPIOF_MODER.B26;
    const register unsigned short int MODER131 = 27;
    sbit  MODER131_bit at GPIOF_MODER.B27;
    const register unsigned short int MODER120 = 24;
    sbit  MODER120_bit at GPIOF_MODER.B24;
    const register unsigned short int MODER121 = 25;
    sbit  MODER121_bit at GPIOF_MODER.B25;
    const register unsigned short int MODER110 = 22;
    sbit  MODER110_bit at GPIOF_MODER.B22;
    const register unsigned short int MODER111 = 23;
    sbit  MODER111_bit at GPIOF_MODER.B23;
    const register unsigned short int MODER100 = 20;
    sbit  MODER100_bit at GPIOF_MODER.B20;
    const register unsigned short int MODER101 = 21;
    sbit  MODER101_bit at GPIOF_MODER.B21;
    const register unsigned short int MODER90 = 18;
    sbit  MODER90_bit at GPIOF_MODER.B18;
    const register unsigned short int MODER91 = 19;
    sbit  MODER91_bit at GPIOF_MODER.B19;
    const register unsigned short int MODER80 = 16;
    sbit  MODER80_bit at GPIOF_MODER.B16;
    const register unsigned short int MODER81 = 17;
    sbit  MODER81_bit at GPIOF_MODER.B17;
    const register unsigned short int MODER70 = 14;
    sbit  MODER70_bit at GPIOF_MODER.B14;
    const register unsigned short int MODER71 = 15;
    sbit  MODER71_bit at GPIOF_MODER.B15;
    const register unsigned short int MODER60 = 12;
    sbit  MODER60_bit at GPIOF_MODER.B12;
    const register unsigned short int MODER61 = 13;
    sbit  MODER61_bit at GPIOF_MODER.B13;
    const register unsigned short int MODER50 = 10;
    sbit  MODER50_bit at GPIOF_MODER.B10;
    const register unsigned short int MODER51 = 11;
    sbit  MODER51_bit at GPIOF_MODER.B11;
    const register unsigned short int MODER40 = 8;
    sbit  MODER40_bit at GPIOF_MODER.B8;
    const register unsigned short int MODER41 = 9;
    sbit  MODER41_bit at GPIOF_MODER.B9;
    const register unsigned short int MODER30 = 6;
    sbit  MODER30_bit at GPIOF_MODER.B6;
    const register unsigned short int MODER31 = 7;
    sbit  MODER31_bit at GPIOF_MODER.B7;
    const register unsigned short int MODER20 = 4;
    sbit  MODER20_bit at GPIOF_MODER.B4;
    const register unsigned short int MODER21 = 5;
    sbit  MODER21_bit at GPIOF_MODER.B5;
    const register unsigned short int MODER10 = 2;
    sbit  MODER10_bit at GPIOF_MODER.B2;
    const register unsigned short int MODER11 = 3;
    sbit  MODER11_bit at GPIOF_MODER.B3;
    const register unsigned short int MODER00 = 0;
    sbit  MODER00_bit at GPIOF_MODER.B0;
    const register unsigned short int MODER01 = 1;
    sbit  MODER01_bit at GPIOF_MODER.B1;

sfr far unsigned long   volatile GPIOF_OTYPER         absolute 0x48001404;
    const register unsigned short int OT15 = 15;
    sbit  OT15_bit at GPIOF_OTYPER.B15;
    const register unsigned short int OT14 = 14;
    sbit  OT14_bit at GPIOF_OTYPER.B14;
    const register unsigned short int OT13 = 13;
    sbit  OT13_bit at GPIOF_OTYPER.B13;
    const register unsigned short int OT12 = 12;
    sbit  OT12_bit at GPIOF_OTYPER.B12;
    const register unsigned short int OT11 = 11;
    sbit  OT11_bit at GPIOF_OTYPER.B11;
    const register unsigned short int OT10 = 10;
    sbit  OT10_bit at GPIOF_OTYPER.B10;
    const register unsigned short int OT9 = 9;
    sbit  OT9_bit at GPIOF_OTYPER.B9;
    const register unsigned short int OT8 = 8;
    sbit  OT8_bit at GPIOF_OTYPER.B8;
    const register unsigned short int OT7 = 7;
    sbit  OT7_bit at GPIOF_OTYPER.B7;
    const register unsigned short int OT6 = 6;
    sbit  OT6_bit at GPIOF_OTYPER.B6;
    const register unsigned short int OT5 = 5;
    sbit  OT5_bit at GPIOF_OTYPER.B5;
    const register unsigned short int OT4 = 4;
    sbit  OT4_bit at GPIOF_OTYPER.B4;
    const register unsigned short int OT3 = 3;
    sbit  OT3_bit at GPIOF_OTYPER.B3;
    const register unsigned short int OT2 = 2;
    sbit  OT2_bit at GPIOF_OTYPER.B2;
    const register unsigned short int OT1 = 1;
    sbit  OT1_bit at GPIOF_OTYPER.B1;
    const register unsigned short int OT0 = 0;
    sbit  OT0_bit at GPIOF_OTYPER.B0;

sfr far unsigned long   volatile GPIOF_OSPEEDR        absolute 0x48001408;
    const register unsigned short int OSPEEDR150 = 30;
    sbit  OSPEEDR150_bit at GPIOF_OSPEEDR.B30;
    const register unsigned short int OSPEEDR151 = 31;
    sbit  OSPEEDR151_bit at GPIOF_OSPEEDR.B31;
    const register unsigned short int OSPEEDR140 = 28;
    sbit  OSPEEDR140_bit at GPIOF_OSPEEDR.B28;
    const register unsigned short int OSPEEDR141 = 29;
    sbit  OSPEEDR141_bit at GPIOF_OSPEEDR.B29;
    const register unsigned short int OSPEEDR130 = 26;
    sbit  OSPEEDR130_bit at GPIOF_OSPEEDR.B26;
    const register unsigned short int OSPEEDR131 = 27;
    sbit  OSPEEDR131_bit at GPIOF_OSPEEDR.B27;
    const register unsigned short int OSPEEDR120 = 24;
    sbit  OSPEEDR120_bit at GPIOF_OSPEEDR.B24;
    const register unsigned short int OSPEEDR121 = 25;
    sbit  OSPEEDR121_bit at GPIOF_OSPEEDR.B25;
    const register unsigned short int OSPEEDR110 = 22;
    sbit  OSPEEDR110_bit at GPIOF_OSPEEDR.B22;
    const register unsigned short int OSPEEDR111 = 23;
    sbit  OSPEEDR111_bit at GPIOF_OSPEEDR.B23;
    const register unsigned short int OSPEEDR100 = 20;
    sbit  OSPEEDR100_bit at GPIOF_OSPEEDR.B20;
    const register unsigned short int OSPEEDR101 = 21;
    sbit  OSPEEDR101_bit at GPIOF_OSPEEDR.B21;
    const register unsigned short int OSPEEDR90 = 18;
    sbit  OSPEEDR90_bit at GPIOF_OSPEEDR.B18;
    const register unsigned short int OSPEEDR91 = 19;
    sbit  OSPEEDR91_bit at GPIOF_OSPEEDR.B19;
    const register unsigned short int OSPEEDR80 = 16;
    sbit  OSPEEDR80_bit at GPIOF_OSPEEDR.B16;
    const register unsigned short int OSPEEDR81 = 17;
    sbit  OSPEEDR81_bit at GPIOF_OSPEEDR.B17;
    const register unsigned short int OSPEEDR70 = 14;
    sbit  OSPEEDR70_bit at GPIOF_OSPEEDR.B14;
    const register unsigned short int OSPEEDR71 = 15;
    sbit  OSPEEDR71_bit at GPIOF_OSPEEDR.B15;
    const register unsigned short int OSPEEDR60 = 12;
    sbit  OSPEEDR60_bit at GPIOF_OSPEEDR.B12;
    const register unsigned short int OSPEEDR61 = 13;
    sbit  OSPEEDR61_bit at GPIOF_OSPEEDR.B13;
    const register unsigned short int OSPEEDR50 = 10;
    sbit  OSPEEDR50_bit at GPIOF_OSPEEDR.B10;
    const register unsigned short int OSPEEDR51 = 11;
    sbit  OSPEEDR51_bit at GPIOF_OSPEEDR.B11;
    const register unsigned short int OSPEEDR40 = 8;
    sbit  OSPEEDR40_bit at GPIOF_OSPEEDR.B8;
    const register unsigned short int OSPEEDR41 = 9;
    sbit  OSPEEDR41_bit at GPIOF_OSPEEDR.B9;
    const register unsigned short int OSPEEDR30 = 6;
    sbit  OSPEEDR30_bit at GPIOF_OSPEEDR.B6;
    const register unsigned short int OSPEEDR31 = 7;
    sbit  OSPEEDR31_bit at GPIOF_OSPEEDR.B7;
    const register unsigned short int OSPEEDR20 = 4;
    sbit  OSPEEDR20_bit at GPIOF_OSPEEDR.B4;
    const register unsigned short int OSPEEDR21 = 5;
    sbit  OSPEEDR21_bit at GPIOF_OSPEEDR.B5;
    const register unsigned short int OSPEEDR10 = 2;
    sbit  OSPEEDR10_bit at GPIOF_OSPEEDR.B2;
    const register unsigned short int OSPEEDR11 = 3;
    sbit  OSPEEDR11_bit at GPIOF_OSPEEDR.B3;
    const register unsigned short int OSPEEDR00 = 0;
    sbit  OSPEEDR00_bit at GPIOF_OSPEEDR.B0;
    const register unsigned short int OSPEEDR01 = 1;
    sbit  OSPEEDR01_bit at GPIOF_OSPEEDR.B1;

sfr far unsigned long   volatile GPIOF_PUPDR          absolute 0x4800140C;
    const register unsigned short int PUPDR150 = 30;
    sbit  PUPDR150_bit at GPIOF_PUPDR.B30;
    const register unsigned short int PUPDR151 = 31;
    sbit  PUPDR151_bit at GPIOF_PUPDR.B31;
    const register unsigned short int PUPDR140 = 28;
    sbit  PUPDR140_bit at GPIOF_PUPDR.B28;
    const register unsigned short int PUPDR141 = 29;
    sbit  PUPDR141_bit at GPIOF_PUPDR.B29;
    const register unsigned short int PUPDR130 = 26;
    sbit  PUPDR130_bit at GPIOF_PUPDR.B26;
    const register unsigned short int PUPDR131 = 27;
    sbit  PUPDR131_bit at GPIOF_PUPDR.B27;
    const register unsigned short int PUPDR120 = 24;
    sbit  PUPDR120_bit at GPIOF_PUPDR.B24;
    const register unsigned short int PUPDR121 = 25;
    sbit  PUPDR121_bit at GPIOF_PUPDR.B25;
    const register unsigned short int PUPDR110 = 22;
    sbit  PUPDR110_bit at GPIOF_PUPDR.B22;
    const register unsigned short int PUPDR111 = 23;
    sbit  PUPDR111_bit at GPIOF_PUPDR.B23;
    const register unsigned short int PUPDR100 = 20;
    sbit  PUPDR100_bit at GPIOF_PUPDR.B20;
    const register unsigned short int PUPDR101 = 21;
    sbit  PUPDR101_bit at GPIOF_PUPDR.B21;
    const register unsigned short int PUPDR90 = 18;
    sbit  PUPDR90_bit at GPIOF_PUPDR.B18;
    const register unsigned short int PUPDR91 = 19;
    sbit  PUPDR91_bit at GPIOF_PUPDR.B19;
    const register unsigned short int PUPDR80 = 16;
    sbit  PUPDR80_bit at GPIOF_PUPDR.B16;
    const register unsigned short int PUPDR81 = 17;
    sbit  PUPDR81_bit at GPIOF_PUPDR.B17;
    const register unsigned short int PUPDR70 = 14;
    sbit  PUPDR70_bit at GPIOF_PUPDR.B14;
    const register unsigned short int PUPDR71 = 15;
    sbit  PUPDR71_bit at GPIOF_PUPDR.B15;
    const register unsigned short int PUPDR60 = 12;
    sbit  PUPDR60_bit at GPIOF_PUPDR.B12;
    const register unsigned short int PUPDR61 = 13;
    sbit  PUPDR61_bit at GPIOF_PUPDR.B13;
    const register unsigned short int PUPDR50 = 10;
    sbit  PUPDR50_bit at GPIOF_PUPDR.B10;
    const register unsigned short int PUPDR51 = 11;
    sbit  PUPDR51_bit at GPIOF_PUPDR.B11;
    const register unsigned short int PUPDR40 = 8;
    sbit  PUPDR40_bit at GPIOF_PUPDR.B8;
    const register unsigned short int PUPDR41 = 9;
    sbit  PUPDR41_bit at GPIOF_PUPDR.B9;
    const register unsigned short int PUPDR30 = 6;
    sbit  PUPDR30_bit at GPIOF_PUPDR.B6;
    const register unsigned short int PUPDR31 = 7;
    sbit  PUPDR31_bit at GPIOF_PUPDR.B7;
    const register unsigned short int PUPDR20 = 4;
    sbit  PUPDR20_bit at GPIOF_PUPDR.B4;
    const register unsigned short int PUPDR21 = 5;
    sbit  PUPDR21_bit at GPIOF_PUPDR.B5;
    const register unsigned short int PUPDR10 = 2;
    sbit  PUPDR10_bit at GPIOF_PUPDR.B2;
    const register unsigned short int PUPDR11 = 3;
    sbit  PUPDR11_bit at GPIOF_PUPDR.B3;
    const register unsigned short int PUPDR00 = 0;
    sbit  PUPDR00_bit at GPIOF_PUPDR.B0;
    const register unsigned short int PUPDR01 = 1;
    sbit  PUPDR01_bit at GPIOF_PUPDR.B1;

sfr far unsigned long   volatile GPIOF_IDR            absolute 0x48001410;
    const register unsigned short int IDR15 = 15;
    sbit  IDR15_bit at GPIOF_IDR.B15;
    const register unsigned short int IDR14 = 14;
    sbit  IDR14_bit at GPIOF_IDR.B14;
    const register unsigned short int IDR13 = 13;
    sbit  IDR13_bit at GPIOF_IDR.B13;
    const register unsigned short int IDR12 = 12;
    sbit  IDR12_bit at GPIOF_IDR.B12;
    const register unsigned short int IDR11 = 11;
    sbit  IDR11_bit at GPIOF_IDR.B11;
    const register unsigned short int IDR10 = 10;
    sbit  IDR10_bit at GPIOF_IDR.B10;
    const register unsigned short int IDR9 = 9;
    sbit  IDR9_bit at GPIOF_IDR.B9;
    const register unsigned short int IDR8 = 8;
    sbit  IDR8_bit at GPIOF_IDR.B8;
    sbit  IDR7_GPIOF_IDR_bit at GPIOF_IDR.B7;
    sbit  IDR6_GPIOF_IDR_bit at GPIOF_IDR.B6;
    sbit  IDR5_GPIOF_IDR_bit at GPIOF_IDR.B5;
    sbit  IDR4_GPIOF_IDR_bit at GPIOF_IDR.B4;
    sbit  IDR3_GPIOF_IDR_bit at GPIOF_IDR.B3;
    sbit  IDR2_GPIOF_IDR_bit at GPIOF_IDR.B2;
    sbit  IDR1_GPIOF_IDR_bit at GPIOF_IDR.B1;
    sbit  IDR0_GPIOF_IDR_bit at GPIOF_IDR.B0;

sfr far unsigned long   volatile GPIOF_ODR            absolute 0x48001414;
    const register unsigned short int ODR15 = 15;
    sbit  ODR15_bit at GPIOF_ODR.B15;
    const register unsigned short int ODR14 = 14;
    sbit  ODR14_bit at GPIOF_ODR.B14;
    const register unsigned short int ODR13 = 13;
    sbit  ODR13_bit at GPIOF_ODR.B13;
    const register unsigned short int ODR12 = 12;
    sbit  ODR12_bit at GPIOF_ODR.B12;
    const register unsigned short int ODR11 = 11;
    sbit  ODR11_bit at GPIOF_ODR.B11;
    const register unsigned short int ODR10 = 10;
    sbit  ODR10_bit at GPIOF_ODR.B10;
    const register unsigned short int ODR9 = 9;
    sbit  ODR9_bit at GPIOF_ODR.B9;
    const register unsigned short int ODR8 = 8;
    sbit  ODR8_bit at GPIOF_ODR.B8;
    const register unsigned short int ODR7 = 7;
    sbit  ODR7_bit at GPIOF_ODR.B7;
    const register unsigned short int ODR6 = 6;
    sbit  ODR6_bit at GPIOF_ODR.B6;
    const register unsigned short int ODR5 = 5;
    sbit  ODR5_bit at GPIOF_ODR.B5;
    const register unsigned short int ODR4 = 4;
    sbit  ODR4_bit at GPIOF_ODR.B4;
    const register unsigned short int ODR3 = 3;
    sbit  ODR3_bit at GPIOF_ODR.B3;
    const register unsigned short int ODR2 = 2;
    sbit  ODR2_bit at GPIOF_ODR.B2;
    const register unsigned short int ODR1 = 1;
    sbit  ODR1_bit at GPIOF_ODR.B1;
    const register unsigned short int ODR0 = 0;
    sbit  ODR0_bit at GPIOF_ODR.B0;

sfr far unsigned long   volatile GPIOF_BSRR           absolute 0x48001418;
    const register unsigned short int BR15 = 31;
    sbit  BR15_bit at GPIOF_BSRR.B31;
    const register unsigned short int BR14 = 30;
    sbit  BR14_bit at GPIOF_BSRR.B30;
    const register unsigned short int BR13 = 29;
    sbit  BR13_bit at GPIOF_BSRR.B29;
    const register unsigned short int BR12 = 28;
    sbit  BR12_bit at GPIOF_BSRR.B28;
    const register unsigned short int BR11 = 27;
    sbit  BR11_bit at GPIOF_BSRR.B27;
    const register unsigned short int BR10 = 26;
    sbit  BR10_bit at GPIOF_BSRR.B26;
    const register unsigned short int BR9 = 25;
    sbit  BR9_bit at GPIOF_BSRR.B25;
    const register unsigned short int BR8 = 24;
    sbit  BR8_bit at GPIOF_BSRR.B24;
    const register unsigned short int BR7 = 23;
    sbit  BR7_bit at GPIOF_BSRR.B23;
    const register unsigned short int BR6 = 22;
    sbit  BR6_bit at GPIOF_BSRR.B22;
    const register unsigned short int BR5 = 21;
    sbit  BR5_bit at GPIOF_BSRR.B21;
    const register unsigned short int BR4 = 20;
    sbit  BR4_bit at GPIOF_BSRR.B20;
    const register unsigned short int BR3 = 19;
    sbit  BR3_bit at GPIOF_BSRR.B19;
    const register unsigned short int BR2 = 18;
    sbit  BR2_bit at GPIOF_BSRR.B18;
    const register unsigned short int BR1 = 17;
    sbit  BR1_bit at GPIOF_BSRR.B17;
    const register unsigned short int BR0 = 16;
    sbit  BR0_bit at GPIOF_BSRR.B16;
    const register unsigned short int BS15 = 15;
    sbit  BS15_bit at GPIOF_BSRR.B15;
    const register unsigned short int BS14 = 14;
    sbit  BS14_bit at GPIOF_BSRR.B14;
    const register unsigned short int BS13 = 13;
    sbit  BS13_bit at GPIOF_BSRR.B13;
    const register unsigned short int BS12 = 12;
    sbit  BS12_bit at GPIOF_BSRR.B12;
    const register unsigned short int BS11 = 11;
    sbit  BS11_bit at GPIOF_BSRR.B11;
    const register unsigned short int BS10 = 10;
    sbit  BS10_bit at GPIOF_BSRR.B10;
    const register unsigned short int BS9 = 9;
    sbit  BS9_bit at GPIOF_BSRR.B9;
    const register unsigned short int BS8 = 8;
    sbit  BS8_bit at GPIOF_BSRR.B8;
    const register unsigned short int BS7 = 7;
    sbit  BS7_bit at GPIOF_BSRR.B7;
    const register unsigned short int BS6 = 6;
    sbit  BS6_bit at GPIOF_BSRR.B6;
    const register unsigned short int BS5 = 5;
    sbit  BS5_bit at GPIOF_BSRR.B5;
    const register unsigned short int BS4 = 4;
    sbit  BS4_bit at GPIOF_BSRR.B4;
    const register unsigned short int BS3 = 3;
    sbit  BS3_bit at GPIOF_BSRR.B3;
    const register unsigned short int BS2 = 2;
    sbit  BS2_bit at GPIOF_BSRR.B2;
    const register unsigned short int BS1 = 1;
    sbit  BS1_bit at GPIOF_BSRR.B1;
    const register unsigned short int BS0 = 0;
    sbit  BS0_bit at GPIOF_BSRR.B0;

sfr far unsigned long   volatile GPIOF_LCKR           absolute 0x4800141C;
    const register unsigned short int LCKK = 16;
    sbit  LCKK_bit at GPIOF_LCKR.B16;
    const register unsigned short int LCK15 = 15;
    sbit  LCK15_bit at GPIOF_LCKR.B15;
    const register unsigned short int LCK14 = 14;
    sbit  LCK14_bit at GPIOF_LCKR.B14;
    const register unsigned short int LCK13 = 13;
    sbit  LCK13_bit at GPIOF_LCKR.B13;
    const register unsigned short int LCK12 = 12;
    sbit  LCK12_bit at GPIOF_LCKR.B12;
    const register unsigned short int LCK11 = 11;
    sbit  LCK11_bit at GPIOF_LCKR.B11;
    const register unsigned short int LCK10 = 10;
    sbit  LCK10_bit at GPIOF_LCKR.B10;
    const register unsigned short int LCK9 = 9;
    sbit  LCK9_bit at GPIOF_LCKR.B9;
    const register unsigned short int LCK8 = 8;
    sbit  LCK8_bit at GPIOF_LCKR.B8;
    const register unsigned short int LCK7 = 7;
    sbit  LCK7_bit at GPIOF_LCKR.B7;
    const register unsigned short int LCK6 = 6;
    sbit  LCK6_bit at GPIOF_LCKR.B6;
    const register unsigned short int LCK5 = 5;
    sbit  LCK5_bit at GPIOF_LCKR.B5;
    const register unsigned short int LCK4 = 4;
    sbit  LCK4_bit at GPIOF_LCKR.B4;
    const register unsigned short int LCK3 = 3;
    sbit  LCK3_bit at GPIOF_LCKR.B3;
    const register unsigned short int LCK2 = 2;
    sbit  LCK2_bit at GPIOF_LCKR.B2;
    const register unsigned short int LCK1 = 1;
    sbit  LCK1_bit at GPIOF_LCKR.B1;
    const register unsigned short int LCK0 = 0;
    sbit  LCK0_bit at GPIOF_LCKR.B0;

sfr far unsigned long   volatile GPIOF_AFRL           absolute 0x48001420;
    const register unsigned short int AFRL70 = 28;
    sbit  AFRL70_bit at GPIOF_AFRL.B28;
    const register unsigned short int AFRL71 = 29;
    sbit  AFRL71_bit at GPIOF_AFRL.B29;
    const register unsigned short int AFRL72 = 30;
    sbit  AFRL72_bit at GPIOF_AFRL.B30;
    const register unsigned short int AFRL73 = 31;
    sbit  AFRL73_bit at GPIOF_AFRL.B31;
    const register unsigned short int AFRL60 = 24;
    sbit  AFRL60_bit at GPIOF_AFRL.B24;
    const register unsigned short int AFRL61 = 25;
    sbit  AFRL61_bit at GPIOF_AFRL.B25;
    const register unsigned short int AFRL62 = 26;
    sbit  AFRL62_bit at GPIOF_AFRL.B26;
    const register unsigned short int AFRL63 = 27;
    sbit  AFRL63_bit at GPIOF_AFRL.B27;
    const register unsigned short int AFRL50 = 20;
    sbit  AFRL50_bit at GPIOF_AFRL.B20;
    const register unsigned short int AFRL51 = 21;
    sbit  AFRL51_bit at GPIOF_AFRL.B21;
    const register unsigned short int AFRL52 = 22;
    sbit  AFRL52_bit at GPIOF_AFRL.B22;
    const register unsigned short int AFRL53 = 23;
    sbit  AFRL53_bit at GPIOF_AFRL.B23;
    const register unsigned short int AFRL40 = 16;
    sbit  AFRL40_bit at GPIOF_AFRL.B16;
    const register unsigned short int AFRL41 = 17;
    sbit  AFRL41_bit at GPIOF_AFRL.B17;
    const register unsigned short int AFRL42 = 18;
    sbit  AFRL42_bit at GPIOF_AFRL.B18;
    const register unsigned short int AFRL43 = 19;
    sbit  AFRL43_bit at GPIOF_AFRL.B19;
    const register unsigned short int AFRL30 = 12;
    sbit  AFRL30_bit at GPIOF_AFRL.B12;
    const register unsigned short int AFRL31 = 13;
    sbit  AFRL31_bit at GPIOF_AFRL.B13;
    const register unsigned short int AFRL32 = 14;
    sbit  AFRL32_bit at GPIOF_AFRL.B14;
    const register unsigned short int AFRL33 = 15;
    sbit  AFRL33_bit at GPIOF_AFRL.B15;
    const register unsigned short int AFRL20 = 8;
    sbit  AFRL20_bit at GPIOF_AFRL.B8;
    const register unsigned short int AFRL21 = 9;
    sbit  AFRL21_bit at GPIOF_AFRL.B9;
    const register unsigned short int AFRL22 = 10;
    sbit  AFRL22_bit at GPIOF_AFRL.B10;
    const register unsigned short int AFRL23 = 11;
    sbit  AFRL23_bit at GPIOF_AFRL.B11;
    const register unsigned short int AFRL10 = 4;
    sbit  AFRL10_bit at GPIOF_AFRL.B4;
    const register unsigned short int AFRL11 = 5;
    sbit  AFRL11_bit at GPIOF_AFRL.B5;
    const register unsigned short int AFRL12 = 6;
    sbit  AFRL12_bit at GPIOF_AFRL.B6;
    const register unsigned short int AFRL13 = 7;
    sbit  AFRL13_bit at GPIOF_AFRL.B7;
    const register unsigned short int AFRL00 = 0;
    sbit  AFRL00_bit at GPIOF_AFRL.B0;
    const register unsigned short int AFRL01 = 1;
    sbit  AFRL01_bit at GPIOF_AFRL.B1;
    const register unsigned short int AFRL02 = 2;
    sbit  AFRL02_bit at GPIOF_AFRL.B2;
    const register unsigned short int AFRL03 = 3;
    sbit  AFRL03_bit at GPIOF_AFRL.B3;

sfr far unsigned long   volatile GPIOF_AFRH           absolute 0x48001424;
    const register unsigned short int AFRH150 = 28;
    sbit  AFRH150_bit at GPIOF_AFRH.B28;
    const register unsigned short int AFRH151 = 29;
    sbit  AFRH151_bit at GPIOF_AFRH.B29;
    const register unsigned short int AFRH152 = 30;
    sbit  AFRH152_bit at GPIOF_AFRH.B30;
    const register unsigned short int AFRH153 = 31;
    sbit  AFRH153_bit at GPIOF_AFRH.B31;
    const register unsigned short int AFRH140 = 24;
    sbit  AFRH140_bit at GPIOF_AFRH.B24;
    const register unsigned short int AFRH141 = 25;
    sbit  AFRH141_bit at GPIOF_AFRH.B25;
    const register unsigned short int AFRH142 = 26;
    sbit  AFRH142_bit at GPIOF_AFRH.B26;
    const register unsigned short int AFRH143 = 27;
    sbit  AFRH143_bit at GPIOF_AFRH.B27;
    const register unsigned short int AFRH130 = 20;
    sbit  AFRH130_bit at GPIOF_AFRH.B20;
    const register unsigned short int AFRH131 = 21;
    sbit  AFRH131_bit at GPIOF_AFRH.B21;
    const register unsigned short int AFRH132 = 22;
    sbit  AFRH132_bit at GPIOF_AFRH.B22;
    const register unsigned short int AFRH133 = 23;
    sbit  AFRH133_bit at GPIOF_AFRH.B23;
    const register unsigned short int AFRH120 = 16;
    sbit  AFRH120_bit at GPIOF_AFRH.B16;
    const register unsigned short int AFRH121 = 17;
    sbit  AFRH121_bit at GPIOF_AFRH.B17;
    const register unsigned short int AFRH122 = 18;
    sbit  AFRH122_bit at GPIOF_AFRH.B18;
    const register unsigned short int AFRH123 = 19;
    sbit  AFRH123_bit at GPIOF_AFRH.B19;
    const register unsigned short int AFRH110 = 12;
    sbit  AFRH110_bit at GPIOF_AFRH.B12;
    const register unsigned short int AFRH111 = 13;
    sbit  AFRH111_bit at GPIOF_AFRH.B13;
    const register unsigned short int AFRH112 = 14;
    sbit  AFRH112_bit at GPIOF_AFRH.B14;
    const register unsigned short int AFRH113 = 15;
    sbit  AFRH113_bit at GPIOF_AFRH.B15;
    const register unsigned short int AFRH100 = 8;
    sbit  AFRH100_bit at GPIOF_AFRH.B8;
    const register unsigned short int AFRH101 = 9;
    sbit  AFRH101_bit at GPIOF_AFRH.B9;
    const register unsigned short int AFRH102 = 10;
    sbit  AFRH102_bit at GPIOF_AFRH.B10;
    const register unsigned short int AFRH103 = 11;
    sbit  AFRH103_bit at GPIOF_AFRH.B11;
    const register unsigned short int AFRH90 = 4;
    sbit  AFRH90_bit at GPIOF_AFRH.B4;
    const register unsigned short int AFRH91 = 5;
    sbit  AFRH91_bit at GPIOF_AFRH.B5;
    const register unsigned short int AFRH92 = 6;
    sbit  AFRH92_bit at GPIOF_AFRH.B6;
    const register unsigned short int AFRH93 = 7;
    sbit  AFRH93_bit at GPIOF_AFRH.B7;
    const register unsigned short int AFRH80 = 0;
    sbit  AFRH80_bit at GPIOF_AFRH.B0;
    const register unsigned short int AFRH81 = 1;
    sbit  AFRH81_bit at GPIOF_AFRH.B1;
    const register unsigned short int AFRH82 = 2;
    sbit  AFRH82_bit at GPIOF_AFRH.B2;
    const register unsigned short int AFRH83 = 3;
    sbit  AFRH83_bit at GPIOF_AFRH.B3;

sfr far unsigned long   volatile GPIOF_BRR            absolute 0x48001428;
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

sfr far unsigned long   volatile GPIOC_BASE           absolute 0x48000800;
sfr far unsigned long   volatile GPIOC_MODER          absolute 0x48000800;
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

sfr far unsigned long   volatile GPIOC_OTYPER         absolute 0x48000804;
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

sfr far unsigned long   volatile GPIOC_OSPEEDR        absolute 0x48000808;
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

sfr far unsigned long   volatile GPIOC_PUPDR          absolute 0x4800080C;
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

sfr far unsigned long   volatile GPIOC_IDR            absolute 0x48000810;
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

sfr far unsigned long   volatile GPIOC_ODR            absolute 0x48000814;
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

sfr far unsigned long   volatile GPIOC_BSRR           absolute 0x48000818;
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

sfr far unsigned long   volatile GPIOC_LCKR           absolute 0x4800081C;
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

sfr far unsigned long   volatile GPIOC_AFRL           absolute 0x48000820;
    sbit  AFRL70_GPIOC_AFRL_bit at GPIOC_AFRL.B28;
    sbit  AFRL71_GPIOC_AFRL_bit at GPIOC_AFRL.B29;
    sbit  AFRL72_GPIOC_AFRL_bit at GPIOC_AFRL.B30;
    sbit  AFRL73_GPIOC_AFRL_bit at GPIOC_AFRL.B31;
    sbit  AFRL60_GPIOC_AFRL_bit at GPIOC_AFRL.B24;
    sbit  AFRL61_GPIOC_AFRL_bit at GPIOC_AFRL.B25;
    sbit  AFRL62_GPIOC_AFRL_bit at GPIOC_AFRL.B26;
    sbit  AFRL63_GPIOC_AFRL_bit at GPIOC_AFRL.B27;
    sbit  AFRL50_GPIOC_AFRL_bit at GPIOC_AFRL.B20;
    sbit  AFRL51_GPIOC_AFRL_bit at GPIOC_AFRL.B21;
    sbit  AFRL52_GPIOC_AFRL_bit at GPIOC_AFRL.B22;
    sbit  AFRL53_GPIOC_AFRL_bit at GPIOC_AFRL.B23;
    sbit  AFRL40_GPIOC_AFRL_bit at GPIOC_AFRL.B16;
    sbit  AFRL41_GPIOC_AFRL_bit at GPIOC_AFRL.B17;
    sbit  AFRL42_GPIOC_AFRL_bit at GPIOC_AFRL.B18;
    sbit  AFRL43_GPIOC_AFRL_bit at GPIOC_AFRL.B19;
    sbit  AFRL30_GPIOC_AFRL_bit at GPIOC_AFRL.B12;
    sbit  AFRL31_GPIOC_AFRL_bit at GPIOC_AFRL.B13;
    sbit  AFRL32_GPIOC_AFRL_bit at GPIOC_AFRL.B14;
    sbit  AFRL33_GPIOC_AFRL_bit at GPIOC_AFRL.B15;
    sbit  AFRL20_GPIOC_AFRL_bit at GPIOC_AFRL.B8;
    sbit  AFRL21_GPIOC_AFRL_bit at GPIOC_AFRL.B9;
    sbit  AFRL22_GPIOC_AFRL_bit at GPIOC_AFRL.B10;
    sbit  AFRL23_GPIOC_AFRL_bit at GPIOC_AFRL.B11;
    sbit  AFRL10_GPIOC_AFRL_bit at GPIOC_AFRL.B4;
    sbit  AFRL11_GPIOC_AFRL_bit at GPIOC_AFRL.B5;
    sbit  AFRL12_GPIOC_AFRL_bit at GPIOC_AFRL.B6;
    sbit  AFRL13_GPIOC_AFRL_bit at GPIOC_AFRL.B7;
    sbit  AFRL00_GPIOC_AFRL_bit at GPIOC_AFRL.B0;
    sbit  AFRL01_GPIOC_AFRL_bit at GPIOC_AFRL.B1;
    sbit  AFRL02_GPIOC_AFRL_bit at GPIOC_AFRL.B2;
    sbit  AFRL03_GPIOC_AFRL_bit at GPIOC_AFRL.B3;

sfr far unsigned long   volatile GPIOC_AFRH           absolute 0x48000824;
    sbit  AFRH150_GPIOC_AFRH_bit at GPIOC_AFRH.B28;
    sbit  AFRH151_GPIOC_AFRH_bit at GPIOC_AFRH.B29;
    sbit  AFRH152_GPIOC_AFRH_bit at GPIOC_AFRH.B30;
    sbit  AFRH153_GPIOC_AFRH_bit at GPIOC_AFRH.B31;
    sbit  AFRH140_GPIOC_AFRH_bit at GPIOC_AFRH.B24;
    sbit  AFRH141_GPIOC_AFRH_bit at GPIOC_AFRH.B25;
    sbit  AFRH142_GPIOC_AFRH_bit at GPIOC_AFRH.B26;
    sbit  AFRH143_GPIOC_AFRH_bit at GPIOC_AFRH.B27;
    sbit  AFRH130_GPIOC_AFRH_bit at GPIOC_AFRH.B20;
    sbit  AFRH131_GPIOC_AFRH_bit at GPIOC_AFRH.B21;
    sbit  AFRH132_GPIOC_AFRH_bit at GPIOC_AFRH.B22;
    sbit  AFRH133_GPIOC_AFRH_bit at GPIOC_AFRH.B23;
    sbit  AFRH120_GPIOC_AFRH_bit at GPIOC_AFRH.B16;
    sbit  AFRH121_GPIOC_AFRH_bit at GPIOC_AFRH.B17;
    sbit  AFRH122_GPIOC_AFRH_bit at GPIOC_AFRH.B18;
    sbit  AFRH123_GPIOC_AFRH_bit at GPIOC_AFRH.B19;
    sbit  AFRH110_GPIOC_AFRH_bit at GPIOC_AFRH.B12;
    sbit  AFRH111_GPIOC_AFRH_bit at GPIOC_AFRH.B13;
    sbit  AFRH112_GPIOC_AFRH_bit at GPIOC_AFRH.B14;
    sbit  AFRH113_GPIOC_AFRH_bit at GPIOC_AFRH.B15;
    sbit  AFRH100_GPIOC_AFRH_bit at GPIOC_AFRH.B8;
    sbit  AFRH101_GPIOC_AFRH_bit at GPIOC_AFRH.B9;
    sbit  AFRH102_GPIOC_AFRH_bit at GPIOC_AFRH.B10;
    sbit  AFRH103_GPIOC_AFRH_bit at GPIOC_AFRH.B11;
    sbit  AFRH90_GPIOC_AFRH_bit at GPIOC_AFRH.B4;
    sbit  AFRH91_GPIOC_AFRH_bit at GPIOC_AFRH.B5;
    sbit  AFRH92_GPIOC_AFRH_bit at GPIOC_AFRH.B6;
    sbit  AFRH93_GPIOC_AFRH_bit at GPIOC_AFRH.B7;
    sbit  AFRH80_GPIOC_AFRH_bit at GPIOC_AFRH.B0;
    sbit  AFRH81_GPIOC_AFRH_bit at GPIOC_AFRH.B1;
    sbit  AFRH82_GPIOC_AFRH_bit at GPIOC_AFRH.B2;
    sbit  AFRH83_GPIOC_AFRH_bit at GPIOC_AFRH.B3;

sfr far unsigned long   volatile GPIOC_BRR            absolute 0x48000828;
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

sfr far unsigned long   volatile GPIOB_BASE           absolute 0x48000400;
sfr far unsigned long   volatile GPIOB_MODER          absolute 0x48000400;
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

sfr far unsigned long   volatile GPIOB_OTYPER         absolute 0x48000404;
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

sfr far unsigned long   volatile GPIOB_OSPEEDR        absolute 0x48000408;
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

sfr far unsigned long   volatile GPIOB_PUPDR          absolute 0x4800040C;
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

sfr far unsigned long   volatile GPIOB_IDR            absolute 0x48000410;
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

sfr far unsigned long   volatile GPIOB_ODR            absolute 0x48000414;
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

sfr far unsigned long   volatile GPIOB_BSRR           absolute 0x48000418;
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

sfr far unsigned long   volatile GPIOB_LCKR           absolute 0x4800041C;
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

sfr far unsigned long   volatile GPIOB_AFRL           absolute 0x48000420;
    sbit  AFRL70_GPIOB_AFRL_bit at GPIOB_AFRL.B28;
    sbit  AFRL71_GPIOB_AFRL_bit at GPIOB_AFRL.B29;
    sbit  AFRL72_GPIOB_AFRL_bit at GPIOB_AFRL.B30;
    sbit  AFRL73_GPIOB_AFRL_bit at GPIOB_AFRL.B31;
    sbit  AFRL60_GPIOB_AFRL_bit at GPIOB_AFRL.B24;
    sbit  AFRL61_GPIOB_AFRL_bit at GPIOB_AFRL.B25;
    sbit  AFRL62_GPIOB_AFRL_bit at GPIOB_AFRL.B26;
    sbit  AFRL63_GPIOB_AFRL_bit at GPIOB_AFRL.B27;
    sbit  AFRL50_GPIOB_AFRL_bit at GPIOB_AFRL.B20;
    sbit  AFRL51_GPIOB_AFRL_bit at GPIOB_AFRL.B21;
    sbit  AFRL52_GPIOB_AFRL_bit at GPIOB_AFRL.B22;
    sbit  AFRL53_GPIOB_AFRL_bit at GPIOB_AFRL.B23;
    sbit  AFRL40_GPIOB_AFRL_bit at GPIOB_AFRL.B16;
    sbit  AFRL41_GPIOB_AFRL_bit at GPIOB_AFRL.B17;
    sbit  AFRL42_GPIOB_AFRL_bit at GPIOB_AFRL.B18;
    sbit  AFRL43_GPIOB_AFRL_bit at GPIOB_AFRL.B19;
    sbit  AFRL30_GPIOB_AFRL_bit at GPIOB_AFRL.B12;
    sbit  AFRL31_GPIOB_AFRL_bit at GPIOB_AFRL.B13;
    sbit  AFRL32_GPIOB_AFRL_bit at GPIOB_AFRL.B14;
    sbit  AFRL33_GPIOB_AFRL_bit at GPIOB_AFRL.B15;
    sbit  AFRL20_GPIOB_AFRL_bit at GPIOB_AFRL.B8;
    sbit  AFRL21_GPIOB_AFRL_bit at GPIOB_AFRL.B9;
    sbit  AFRL22_GPIOB_AFRL_bit at GPIOB_AFRL.B10;
    sbit  AFRL23_GPIOB_AFRL_bit at GPIOB_AFRL.B11;
    sbit  AFRL10_GPIOB_AFRL_bit at GPIOB_AFRL.B4;
    sbit  AFRL11_GPIOB_AFRL_bit at GPIOB_AFRL.B5;
    sbit  AFRL12_GPIOB_AFRL_bit at GPIOB_AFRL.B6;
    sbit  AFRL13_GPIOB_AFRL_bit at GPIOB_AFRL.B7;
    sbit  AFRL00_GPIOB_AFRL_bit at GPIOB_AFRL.B0;
    sbit  AFRL01_GPIOB_AFRL_bit at GPIOB_AFRL.B1;
    sbit  AFRL02_GPIOB_AFRL_bit at GPIOB_AFRL.B2;
    sbit  AFRL03_GPIOB_AFRL_bit at GPIOB_AFRL.B3;

sfr far unsigned long   volatile GPIOB_AFRH           absolute 0x48000424;
    sbit  AFRH150_GPIOB_AFRH_bit at GPIOB_AFRH.B28;
    sbit  AFRH151_GPIOB_AFRH_bit at GPIOB_AFRH.B29;
    sbit  AFRH152_GPIOB_AFRH_bit at GPIOB_AFRH.B30;
    sbit  AFRH153_GPIOB_AFRH_bit at GPIOB_AFRH.B31;
    sbit  AFRH140_GPIOB_AFRH_bit at GPIOB_AFRH.B24;
    sbit  AFRH141_GPIOB_AFRH_bit at GPIOB_AFRH.B25;
    sbit  AFRH142_GPIOB_AFRH_bit at GPIOB_AFRH.B26;
    sbit  AFRH143_GPIOB_AFRH_bit at GPIOB_AFRH.B27;
    sbit  AFRH130_GPIOB_AFRH_bit at GPIOB_AFRH.B20;
    sbit  AFRH131_GPIOB_AFRH_bit at GPIOB_AFRH.B21;
    sbit  AFRH132_GPIOB_AFRH_bit at GPIOB_AFRH.B22;
    sbit  AFRH133_GPIOB_AFRH_bit at GPIOB_AFRH.B23;
    sbit  AFRH120_GPIOB_AFRH_bit at GPIOB_AFRH.B16;
    sbit  AFRH121_GPIOB_AFRH_bit at GPIOB_AFRH.B17;
    sbit  AFRH122_GPIOB_AFRH_bit at GPIOB_AFRH.B18;
    sbit  AFRH123_GPIOB_AFRH_bit at GPIOB_AFRH.B19;
    sbit  AFRH110_GPIOB_AFRH_bit at GPIOB_AFRH.B12;
    sbit  AFRH111_GPIOB_AFRH_bit at GPIOB_AFRH.B13;
    sbit  AFRH112_GPIOB_AFRH_bit at GPIOB_AFRH.B14;
    sbit  AFRH113_GPIOB_AFRH_bit at GPIOB_AFRH.B15;
    sbit  AFRH100_GPIOB_AFRH_bit at GPIOB_AFRH.B8;
    sbit  AFRH101_GPIOB_AFRH_bit at GPIOB_AFRH.B9;
    sbit  AFRH102_GPIOB_AFRH_bit at GPIOB_AFRH.B10;
    sbit  AFRH103_GPIOB_AFRH_bit at GPIOB_AFRH.B11;
    sbit  AFRH90_GPIOB_AFRH_bit at GPIOB_AFRH.B4;
    sbit  AFRH91_GPIOB_AFRH_bit at GPIOB_AFRH.B5;
    sbit  AFRH92_GPIOB_AFRH_bit at GPIOB_AFRH.B6;
    sbit  AFRH93_GPIOB_AFRH_bit at GPIOB_AFRH.B7;
    sbit  AFRH80_GPIOB_AFRH_bit at GPIOB_AFRH.B0;
    sbit  AFRH81_GPIOB_AFRH_bit at GPIOB_AFRH.B1;
    sbit  AFRH82_GPIOB_AFRH_bit at GPIOB_AFRH.B2;
    sbit  AFRH83_GPIOB_AFRH_bit at GPIOB_AFRH.B3;

sfr far unsigned long   volatile GPIOB_BRR            absolute 0x48000428;
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

sfr far unsigned long   volatile GPIOA_BASE           absolute 0x48000000;
sfr far unsigned long   volatile GPIOA_MODER          absolute 0x48000000;
    sbit  MODER150_GPIOA_MODER_bit at GPIOA_MODER.B30;
    sbit  MODER151_GPIOA_MODER_bit at GPIOA_MODER.B31;
    sbit  MODER140_GPIOA_MODER_bit at GPIOA_MODER.B28;
    sbit  MODER141_GPIOA_MODER_bit at GPIOA_MODER.B29;
    sbit  MODER130_GPIOA_MODER_bit at GPIOA_MODER.B26;
    sbit  MODER131_GPIOA_MODER_bit at GPIOA_MODER.B27;
    sbit  MODER120_GPIOA_MODER_bit at GPIOA_MODER.B24;
    sbit  MODER121_GPIOA_MODER_bit at GPIOA_MODER.B25;
    sbit  MODER110_GPIOA_MODER_bit at GPIOA_MODER.B22;
    sbit  MODER111_GPIOA_MODER_bit at GPIOA_MODER.B23;
    sbit  MODER100_GPIOA_MODER_bit at GPIOA_MODER.B20;
    sbit  MODER101_GPIOA_MODER_bit at GPIOA_MODER.B21;
    sbit  MODER90_GPIOA_MODER_bit at GPIOA_MODER.B18;
    sbit  MODER91_GPIOA_MODER_bit at GPIOA_MODER.B19;
    sbit  MODER80_GPIOA_MODER_bit at GPIOA_MODER.B16;
    sbit  MODER81_GPIOA_MODER_bit at GPIOA_MODER.B17;
    sbit  MODER70_GPIOA_MODER_bit at GPIOA_MODER.B14;
    sbit  MODER71_GPIOA_MODER_bit at GPIOA_MODER.B15;
    sbit  MODER60_GPIOA_MODER_bit at GPIOA_MODER.B12;
    sbit  MODER61_GPIOA_MODER_bit at GPIOA_MODER.B13;
    sbit  MODER50_GPIOA_MODER_bit at GPIOA_MODER.B10;
    sbit  MODER51_GPIOA_MODER_bit at GPIOA_MODER.B11;
    sbit  MODER40_GPIOA_MODER_bit at GPIOA_MODER.B8;
    sbit  MODER41_GPIOA_MODER_bit at GPIOA_MODER.B9;
    sbit  MODER30_GPIOA_MODER_bit at GPIOA_MODER.B6;
    sbit  MODER31_GPIOA_MODER_bit at GPIOA_MODER.B7;
    sbit  MODER20_GPIOA_MODER_bit at GPIOA_MODER.B4;
    sbit  MODER21_GPIOA_MODER_bit at GPIOA_MODER.B5;
    sbit  MODER10_GPIOA_MODER_bit at GPIOA_MODER.B2;
    sbit  MODER11_GPIOA_MODER_bit at GPIOA_MODER.B3;
    sbit  MODER00_GPIOA_MODER_bit at GPIOA_MODER.B0;
    sbit  MODER01_GPIOA_MODER_bit at GPIOA_MODER.B1;

sfr far unsigned long   volatile GPIOA_OTYPER         absolute 0x48000004;
    sbit  OT15_GPIOA_OTYPER_bit at GPIOA_OTYPER.B15;
    sbit  OT14_GPIOA_OTYPER_bit at GPIOA_OTYPER.B14;
    sbit  OT13_GPIOA_OTYPER_bit at GPIOA_OTYPER.B13;
    sbit  OT12_GPIOA_OTYPER_bit at GPIOA_OTYPER.B12;
    sbit  OT11_GPIOA_OTYPER_bit at GPIOA_OTYPER.B11;
    sbit  OT10_GPIOA_OTYPER_bit at GPIOA_OTYPER.B10;
    sbit  OT9_GPIOA_OTYPER_bit at GPIOA_OTYPER.B9;
    sbit  OT8_GPIOA_OTYPER_bit at GPIOA_OTYPER.B8;
    sbit  OT7_GPIOA_OTYPER_bit at GPIOA_OTYPER.B7;
    sbit  OT6_GPIOA_OTYPER_bit at GPIOA_OTYPER.B6;
    sbit  OT5_GPIOA_OTYPER_bit at GPIOA_OTYPER.B5;
    sbit  OT4_GPIOA_OTYPER_bit at GPIOA_OTYPER.B4;
    sbit  OT3_GPIOA_OTYPER_bit at GPIOA_OTYPER.B3;
    sbit  OT2_GPIOA_OTYPER_bit at GPIOA_OTYPER.B2;
    sbit  OT1_GPIOA_OTYPER_bit at GPIOA_OTYPER.B1;
    sbit  OT0_GPIOA_OTYPER_bit at GPIOA_OTYPER.B0;

sfr far unsigned long   volatile GPIOA_OSPEEDR        absolute 0x48000008;
    sbit  OSPEEDR150_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B30;
    sbit  OSPEEDR151_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B31;
    sbit  OSPEEDR140_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B28;
    sbit  OSPEEDR141_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B29;
    sbit  OSPEEDR130_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B26;
    sbit  OSPEEDR131_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B27;
    sbit  OSPEEDR120_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B24;
    sbit  OSPEEDR121_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B25;
    sbit  OSPEEDR110_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B22;
    sbit  OSPEEDR111_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B23;
    sbit  OSPEEDR100_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B20;
    sbit  OSPEEDR101_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B21;
    sbit  OSPEEDR90_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B18;
    sbit  OSPEEDR91_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B19;
    sbit  OSPEEDR80_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B16;
    sbit  OSPEEDR81_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B17;
    sbit  OSPEEDR70_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B14;
    sbit  OSPEEDR71_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B15;
    sbit  OSPEEDR60_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B12;
    sbit  OSPEEDR61_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B13;
    sbit  OSPEEDR50_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B10;
    sbit  OSPEEDR51_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B11;
    sbit  OSPEEDR40_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B8;
    sbit  OSPEEDR41_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B9;
    sbit  OSPEEDR30_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B6;
    sbit  OSPEEDR31_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B7;
    sbit  OSPEEDR20_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B4;
    sbit  OSPEEDR21_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B5;
    sbit  OSPEEDR10_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B2;
    sbit  OSPEEDR11_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B3;
    sbit  OSPEEDR00_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B0;
    sbit  OSPEEDR01_GPIOA_OSPEEDR_bit at GPIOA_OSPEEDR.B1;

sfr far unsigned long   volatile GPIOA_PUPDR          absolute 0x4800000C;
    sbit  PUPDR150_GPIOA_PUPDR_bit at GPIOA_PUPDR.B30;
    sbit  PUPDR151_GPIOA_PUPDR_bit at GPIOA_PUPDR.B31;
    sbit  PUPDR140_GPIOA_PUPDR_bit at GPIOA_PUPDR.B28;
    sbit  PUPDR141_GPIOA_PUPDR_bit at GPIOA_PUPDR.B29;
    sbit  PUPDR130_GPIOA_PUPDR_bit at GPIOA_PUPDR.B26;
    sbit  PUPDR131_GPIOA_PUPDR_bit at GPIOA_PUPDR.B27;
    sbit  PUPDR120_GPIOA_PUPDR_bit at GPIOA_PUPDR.B24;
    sbit  PUPDR121_GPIOA_PUPDR_bit at GPIOA_PUPDR.B25;
    sbit  PUPDR110_GPIOA_PUPDR_bit at GPIOA_PUPDR.B22;
    sbit  PUPDR111_GPIOA_PUPDR_bit at GPIOA_PUPDR.B23;
    sbit  PUPDR100_GPIOA_PUPDR_bit at GPIOA_PUPDR.B20;
    sbit  PUPDR101_GPIOA_PUPDR_bit at GPIOA_PUPDR.B21;
    sbit  PUPDR90_GPIOA_PUPDR_bit at GPIOA_PUPDR.B18;
    sbit  PUPDR91_GPIOA_PUPDR_bit at GPIOA_PUPDR.B19;
    sbit  PUPDR80_GPIOA_PUPDR_bit at GPIOA_PUPDR.B16;
    sbit  PUPDR81_GPIOA_PUPDR_bit at GPIOA_PUPDR.B17;
    sbit  PUPDR70_GPIOA_PUPDR_bit at GPIOA_PUPDR.B14;
    sbit  PUPDR71_GPIOA_PUPDR_bit at GPIOA_PUPDR.B15;
    sbit  PUPDR60_GPIOA_PUPDR_bit at GPIOA_PUPDR.B12;
    sbit  PUPDR61_GPIOA_PUPDR_bit at GPIOA_PUPDR.B13;
    sbit  PUPDR50_GPIOA_PUPDR_bit at GPIOA_PUPDR.B10;
    sbit  PUPDR51_GPIOA_PUPDR_bit at GPIOA_PUPDR.B11;
    sbit  PUPDR40_GPIOA_PUPDR_bit at GPIOA_PUPDR.B8;
    sbit  PUPDR41_GPIOA_PUPDR_bit at GPIOA_PUPDR.B9;
    sbit  PUPDR30_GPIOA_PUPDR_bit at GPIOA_PUPDR.B6;
    sbit  PUPDR31_GPIOA_PUPDR_bit at GPIOA_PUPDR.B7;
    sbit  PUPDR20_GPIOA_PUPDR_bit at GPIOA_PUPDR.B4;
    sbit  PUPDR21_GPIOA_PUPDR_bit at GPIOA_PUPDR.B5;
    sbit  PUPDR10_GPIOA_PUPDR_bit at GPIOA_PUPDR.B2;
    sbit  PUPDR11_GPIOA_PUPDR_bit at GPIOA_PUPDR.B3;
    sbit  PUPDR00_GPIOA_PUPDR_bit at GPIOA_PUPDR.B0;
    sbit  PUPDR01_GPIOA_PUPDR_bit at GPIOA_PUPDR.B1;

sfr far unsigned long   volatile GPIOA_IDR            absolute 0x48000010;
    sbit  IDR15_GPIOA_IDR_bit at GPIOA_IDR.B15;
    sbit  IDR14_GPIOA_IDR_bit at GPIOA_IDR.B14;
    sbit  IDR13_GPIOA_IDR_bit at GPIOA_IDR.B13;
    sbit  IDR12_GPIOA_IDR_bit at GPIOA_IDR.B12;
    sbit  IDR11_GPIOA_IDR_bit at GPIOA_IDR.B11;
    sbit  IDR10_GPIOA_IDR_bit at GPIOA_IDR.B10;
    sbit  IDR9_GPIOA_IDR_bit at GPIOA_IDR.B9;
    sbit  IDR8_GPIOA_IDR_bit at GPIOA_IDR.B8;
    sbit  IDR7_GPIOA_IDR_bit at GPIOA_IDR.B7;
    sbit  IDR6_GPIOA_IDR_bit at GPIOA_IDR.B6;
    sbit  IDR5_GPIOA_IDR_bit at GPIOA_IDR.B5;
    sbit  IDR4_GPIOA_IDR_bit at GPIOA_IDR.B4;
    sbit  IDR3_GPIOA_IDR_bit at GPIOA_IDR.B3;
    sbit  IDR2_GPIOA_IDR_bit at GPIOA_IDR.B2;
    sbit  IDR1_GPIOA_IDR_bit at GPIOA_IDR.B1;
    sbit  IDR0_GPIOA_IDR_bit at GPIOA_IDR.B0;

sfr far unsigned long   volatile GPIOA_ODR            absolute 0x48000014;
    sbit  ODR15_GPIOA_ODR_bit at GPIOA_ODR.B15;
    sbit  ODR14_GPIOA_ODR_bit at GPIOA_ODR.B14;
    sbit  ODR13_GPIOA_ODR_bit at GPIOA_ODR.B13;
    sbit  ODR12_GPIOA_ODR_bit at GPIOA_ODR.B12;
    sbit  ODR11_GPIOA_ODR_bit at GPIOA_ODR.B11;
    sbit  ODR10_GPIOA_ODR_bit at GPIOA_ODR.B10;
    sbit  ODR9_GPIOA_ODR_bit at GPIOA_ODR.B9;
    sbit  ODR8_GPIOA_ODR_bit at GPIOA_ODR.B8;
    sbit  ODR7_GPIOA_ODR_bit at GPIOA_ODR.B7;
    sbit  ODR6_GPIOA_ODR_bit at GPIOA_ODR.B6;
    sbit  ODR5_GPIOA_ODR_bit at GPIOA_ODR.B5;
    sbit  ODR4_GPIOA_ODR_bit at GPIOA_ODR.B4;
    sbit  ODR3_GPIOA_ODR_bit at GPIOA_ODR.B3;
    sbit  ODR2_GPIOA_ODR_bit at GPIOA_ODR.B2;
    sbit  ODR1_GPIOA_ODR_bit at GPIOA_ODR.B1;
    sbit  ODR0_GPIOA_ODR_bit at GPIOA_ODR.B0;

sfr far unsigned long   volatile GPIOA_BSRR           absolute 0x48000018;
    sbit  BR15_GPIOA_BSRR_bit at GPIOA_BSRR.B31;
    sbit  BR14_GPIOA_BSRR_bit at GPIOA_BSRR.B30;
    sbit  BR13_GPIOA_BSRR_bit at GPIOA_BSRR.B29;
    sbit  BR12_GPIOA_BSRR_bit at GPIOA_BSRR.B28;
    sbit  BR11_GPIOA_BSRR_bit at GPIOA_BSRR.B27;
    sbit  BR10_GPIOA_BSRR_bit at GPIOA_BSRR.B26;
    sbit  BR9_GPIOA_BSRR_bit at GPIOA_BSRR.B25;
    sbit  BR8_GPIOA_BSRR_bit at GPIOA_BSRR.B24;
    sbit  BR7_GPIOA_BSRR_bit at GPIOA_BSRR.B23;
    sbit  BR6_GPIOA_BSRR_bit at GPIOA_BSRR.B22;
    sbit  BR5_GPIOA_BSRR_bit at GPIOA_BSRR.B21;
    sbit  BR4_GPIOA_BSRR_bit at GPIOA_BSRR.B20;
    sbit  BR3_GPIOA_BSRR_bit at GPIOA_BSRR.B19;
    sbit  BR2_GPIOA_BSRR_bit at GPIOA_BSRR.B18;
    sbit  BR1_GPIOA_BSRR_bit at GPIOA_BSRR.B17;
    sbit  BR0_GPIOA_BSRR_bit at GPIOA_BSRR.B16;
    sbit  BS15_GPIOA_BSRR_bit at GPIOA_BSRR.B15;
    sbit  BS14_GPIOA_BSRR_bit at GPIOA_BSRR.B14;
    sbit  BS13_GPIOA_BSRR_bit at GPIOA_BSRR.B13;
    sbit  BS12_GPIOA_BSRR_bit at GPIOA_BSRR.B12;
    sbit  BS11_GPIOA_BSRR_bit at GPIOA_BSRR.B11;
    sbit  BS10_GPIOA_BSRR_bit at GPIOA_BSRR.B10;
    sbit  BS9_GPIOA_BSRR_bit at GPIOA_BSRR.B9;
    sbit  BS8_GPIOA_BSRR_bit at GPIOA_BSRR.B8;
    sbit  BS7_GPIOA_BSRR_bit at GPIOA_BSRR.B7;
    sbit  BS6_GPIOA_BSRR_bit at GPIOA_BSRR.B6;
    sbit  BS5_GPIOA_BSRR_bit at GPIOA_BSRR.B5;
    sbit  BS4_GPIOA_BSRR_bit at GPIOA_BSRR.B4;
    sbit  BS3_GPIOA_BSRR_bit at GPIOA_BSRR.B3;
    sbit  BS2_GPIOA_BSRR_bit at GPIOA_BSRR.B2;
    sbit  BS1_GPIOA_BSRR_bit at GPIOA_BSRR.B1;
    sbit  BS0_GPIOA_BSRR_bit at GPIOA_BSRR.B0;

sfr far unsigned long   volatile GPIOA_LCKR           absolute 0x4800001C;
    sbit  LCKK_GPIOA_LCKR_bit at GPIOA_LCKR.B16;
    sbit  LCK15_GPIOA_LCKR_bit at GPIOA_LCKR.B15;
    sbit  LCK14_GPIOA_LCKR_bit at GPIOA_LCKR.B14;
    sbit  LCK13_GPIOA_LCKR_bit at GPIOA_LCKR.B13;
    sbit  LCK12_GPIOA_LCKR_bit at GPIOA_LCKR.B12;
    sbit  LCK11_GPIOA_LCKR_bit at GPIOA_LCKR.B11;
    sbit  LCK10_GPIOA_LCKR_bit at GPIOA_LCKR.B10;
    sbit  LCK9_GPIOA_LCKR_bit at GPIOA_LCKR.B9;
    sbit  LCK8_GPIOA_LCKR_bit at GPIOA_LCKR.B8;
    sbit  LCK7_GPIOA_LCKR_bit at GPIOA_LCKR.B7;
    sbit  LCK6_GPIOA_LCKR_bit at GPIOA_LCKR.B6;
    sbit  LCK5_GPIOA_LCKR_bit at GPIOA_LCKR.B5;
    sbit  LCK4_GPIOA_LCKR_bit at GPIOA_LCKR.B4;
    sbit  LCK3_GPIOA_LCKR_bit at GPIOA_LCKR.B3;
    sbit  LCK2_GPIOA_LCKR_bit at GPIOA_LCKR.B2;
    sbit  LCK1_GPIOA_LCKR_bit at GPIOA_LCKR.B1;
    sbit  LCK0_GPIOA_LCKR_bit at GPIOA_LCKR.B0;

sfr far unsigned long   volatile GPIOA_AFRL           absolute 0x48000020;
    sbit  AFRL70_GPIOA_AFRL_bit at GPIOA_AFRL.B28;
    sbit  AFRL71_GPIOA_AFRL_bit at GPIOA_AFRL.B29;
    sbit  AFRL72_GPIOA_AFRL_bit at GPIOA_AFRL.B30;
    sbit  AFRL73_GPIOA_AFRL_bit at GPIOA_AFRL.B31;
    sbit  AFRL60_GPIOA_AFRL_bit at GPIOA_AFRL.B24;
    sbit  AFRL61_GPIOA_AFRL_bit at GPIOA_AFRL.B25;
    sbit  AFRL62_GPIOA_AFRL_bit at GPIOA_AFRL.B26;
    sbit  AFRL63_GPIOA_AFRL_bit at GPIOA_AFRL.B27;
    sbit  AFRL50_GPIOA_AFRL_bit at GPIOA_AFRL.B20;
    sbit  AFRL51_GPIOA_AFRL_bit at GPIOA_AFRL.B21;
    sbit  AFRL52_GPIOA_AFRL_bit at GPIOA_AFRL.B22;
    sbit  AFRL53_GPIOA_AFRL_bit at GPIOA_AFRL.B23;
    sbit  AFRL40_GPIOA_AFRL_bit at GPIOA_AFRL.B16;
    sbit  AFRL41_GPIOA_AFRL_bit at GPIOA_AFRL.B17;
    sbit  AFRL42_GPIOA_AFRL_bit at GPIOA_AFRL.B18;
    sbit  AFRL43_GPIOA_AFRL_bit at GPIOA_AFRL.B19;
    sbit  AFRL30_GPIOA_AFRL_bit at GPIOA_AFRL.B12;
    sbit  AFRL31_GPIOA_AFRL_bit at GPIOA_AFRL.B13;
    sbit  AFRL32_GPIOA_AFRL_bit at GPIOA_AFRL.B14;
    sbit  AFRL33_GPIOA_AFRL_bit at GPIOA_AFRL.B15;
    sbit  AFRL20_GPIOA_AFRL_bit at GPIOA_AFRL.B8;
    sbit  AFRL21_GPIOA_AFRL_bit at GPIOA_AFRL.B9;
    sbit  AFRL22_GPIOA_AFRL_bit at GPIOA_AFRL.B10;
    sbit  AFRL23_GPIOA_AFRL_bit at GPIOA_AFRL.B11;
    sbit  AFRL10_GPIOA_AFRL_bit at GPIOA_AFRL.B4;
    sbit  AFRL11_GPIOA_AFRL_bit at GPIOA_AFRL.B5;
    sbit  AFRL12_GPIOA_AFRL_bit at GPIOA_AFRL.B6;
    sbit  AFRL13_GPIOA_AFRL_bit at GPIOA_AFRL.B7;
    sbit  AFRL00_GPIOA_AFRL_bit at GPIOA_AFRL.B0;
    sbit  AFRL01_GPIOA_AFRL_bit at GPIOA_AFRL.B1;
    sbit  AFRL02_GPIOA_AFRL_bit at GPIOA_AFRL.B2;
    sbit  AFRL03_GPIOA_AFRL_bit at GPIOA_AFRL.B3;

sfr far unsigned long   volatile GPIOA_AFRH           absolute 0x48000024;
    sbit  AFRH150_GPIOA_AFRH_bit at GPIOA_AFRH.B28;
    sbit  AFRH151_GPIOA_AFRH_bit at GPIOA_AFRH.B29;
    sbit  AFRH152_GPIOA_AFRH_bit at GPIOA_AFRH.B30;
    sbit  AFRH153_GPIOA_AFRH_bit at GPIOA_AFRH.B31;
    sbit  AFRH140_GPIOA_AFRH_bit at GPIOA_AFRH.B24;
    sbit  AFRH141_GPIOA_AFRH_bit at GPIOA_AFRH.B25;
    sbit  AFRH142_GPIOA_AFRH_bit at GPIOA_AFRH.B26;
    sbit  AFRH143_GPIOA_AFRH_bit at GPIOA_AFRH.B27;
    sbit  AFRH130_GPIOA_AFRH_bit at GPIOA_AFRH.B20;
    sbit  AFRH131_GPIOA_AFRH_bit at GPIOA_AFRH.B21;
    sbit  AFRH132_GPIOA_AFRH_bit at GPIOA_AFRH.B22;
    sbit  AFRH133_GPIOA_AFRH_bit at GPIOA_AFRH.B23;
    sbit  AFRH120_GPIOA_AFRH_bit at GPIOA_AFRH.B16;
    sbit  AFRH121_GPIOA_AFRH_bit at GPIOA_AFRH.B17;
    sbit  AFRH122_GPIOA_AFRH_bit at GPIOA_AFRH.B18;
    sbit  AFRH123_GPIOA_AFRH_bit at GPIOA_AFRH.B19;
    sbit  AFRH110_GPIOA_AFRH_bit at GPIOA_AFRH.B12;
    sbit  AFRH111_GPIOA_AFRH_bit at GPIOA_AFRH.B13;
    sbit  AFRH112_GPIOA_AFRH_bit at GPIOA_AFRH.B14;
    sbit  AFRH113_GPIOA_AFRH_bit at GPIOA_AFRH.B15;
    sbit  AFRH100_GPIOA_AFRH_bit at GPIOA_AFRH.B8;
    sbit  AFRH101_GPIOA_AFRH_bit at GPIOA_AFRH.B9;
    sbit  AFRH102_GPIOA_AFRH_bit at GPIOA_AFRH.B10;
    sbit  AFRH103_GPIOA_AFRH_bit at GPIOA_AFRH.B11;
    sbit  AFRH90_GPIOA_AFRH_bit at GPIOA_AFRH.B4;
    sbit  AFRH91_GPIOA_AFRH_bit at GPIOA_AFRH.B5;
    sbit  AFRH92_GPIOA_AFRH_bit at GPIOA_AFRH.B6;
    sbit  AFRH93_GPIOA_AFRH_bit at GPIOA_AFRH.B7;
    sbit  AFRH80_GPIOA_AFRH_bit at GPIOA_AFRH.B0;
    sbit  AFRH81_GPIOA_AFRH_bit at GPIOA_AFRH.B1;
    sbit  AFRH82_GPIOA_AFRH_bit at GPIOA_AFRH.B2;
    sbit  AFRH83_GPIOA_AFRH_bit at GPIOA_AFRH.B3;

sfr far unsigned long   volatile GPIOA_BRR            absolute 0x48000028;
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

sfr unsigned long   volatile SPI1_CR1             absolute 0x40013000;
    const register unsigned short int BIDIMODE = 15;
    sbit  BIDIMODE_bit at SPI1_CR1.B15;
    const register unsigned short int BIDIOE = 14;
    sbit  BIDIOE_bit at SPI1_CR1.B14;
    const register unsigned short int CRCEN = 13;
    sbit  CRCEN_bit at SPI1_CR1.B13;
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
    const register unsigned short int CPOL = 1;
    sbit  CPOL_bit at SPI1_CR1.B1;
    const register unsigned short int CPHA = 0;
    sbit  CPHA_bit at SPI1_CR1.B0;

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
    const register unsigned short int ERRIE = 5;
    sbit  ERRIE_bit at SPI1_CR2.B5;
    const register unsigned short int RXNEIE = 6;
    sbit  RXNEIE_bit at SPI1_CR2.B6;
    const register unsigned short int TXEIE = 7;
    sbit  TXEIE_bit at SPI1_CR2.B7;
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
    const register unsigned short int RXNE = 0;
    sbit  RXNE_bit at SPI1_SR.B0;
    const register unsigned short int TXE = 1;
    sbit  TXE_bit at SPI1_SR.B1;
    const register unsigned short int CHSIDE = 2;
    sbit  CHSIDE_bit at SPI1_SR.B2;
    const register unsigned short int UDR = 3;
    sbit  UDR_bit at SPI1_SR.B3;
    const register unsigned short int CRCERR = 4;
    sbit  CRCERR_bit at SPI1_SR.B4;
    const register unsigned short int MODF_ = 5;
    sbit  MODF_bit at SPI1_SR.B5;
    const register unsigned short int OVR = 6;
    sbit  OVR_bit at SPI1_SR.B6;
    const register unsigned short int BSY = 7;
    sbit  BSY_bit at SPI1_SR.B7;
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
    const register unsigned short int I2SMOD = 11;
    sbit  I2SMOD_bit at SPI1_I2SCFGR.B11;
    const register unsigned short int I2SE = 10;
    sbit  I2SE_bit at SPI1_I2SCFGR.B10;
    const register unsigned short int I2SCFG0 = 8;
    sbit  I2SCFG0_bit at SPI1_I2SCFGR.B8;
    const register unsigned short int I2SCFG1 = 9;
    sbit  I2SCFG1_bit at SPI1_I2SCFGR.B9;
    const register unsigned short int PCMSYNC = 7;
    sbit  PCMSYNC_bit at SPI1_I2SCFGR.B7;
    const register unsigned short int I2SSTD0 = 4;
    sbit  I2SSTD0_bit at SPI1_I2SCFGR.B4;
    const register unsigned short int I2SSTD1 = 5;
    sbit  I2SSTD1_bit at SPI1_I2SCFGR.B5;
    const register unsigned short int CKPOL = 3;
    sbit  CKPOL_bit at SPI1_I2SCFGR.B3;
    const register unsigned short int DATLEN0 = 1;
    sbit  DATLEN0_bit at SPI1_I2SCFGR.B1;
    const register unsigned short int DATLEN1 = 2;
    sbit  DATLEN1_bit at SPI1_I2SCFGR.B2;
    const register unsigned short int CHLEN = 0;
    sbit  CHLEN_bit at SPI1_I2SCFGR.B0;

sfr unsigned long   volatile SPI1_I2SPR           absolute 0x40013020;
    const register unsigned short int MCKOE = 9;
    sbit  MCKOE_bit at SPI1_I2SPR.B9;
    const register unsigned short int ODD = 8;
    sbit  ODD_bit at SPI1_I2SPR.B8;
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
    sbit  I2SMOD_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B11;
    sbit  I2SE_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B10;
    sbit  I2SCFG0_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B8;
    sbit  I2SCFG1_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B9;
    sbit  PCMSYNC_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B7;
    sbit  I2SSTD0_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B4;
    sbit  I2SSTD1_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B5;
    sbit  CKPOL_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B3;
    sbit  DATLEN0_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B1;
    sbit  DATLEN1_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B2;
    sbit  CHLEN_SPI2_I2SCFGR_bit at SPI2_I2SCFGR.B0;

sfr unsigned long   volatile SPI2_I2SPR           absolute 0x40003820;
    sbit  MCKOE_SPI2_I2SPR_bit at SPI2_I2SPR.B9;
    sbit  ODD_SPI2_I2SPR_bit at SPI2_I2SPR.B8;
    sbit  I2SDIV0_SPI2_I2SPR_bit at SPI2_I2SPR.B0;
    sbit  I2SDIV1_SPI2_I2SPR_bit at SPI2_I2SPR.B1;
    sbit  I2SDIV2_SPI2_I2SPR_bit at SPI2_I2SPR.B2;
    sbit  I2SDIV3_SPI2_I2SPR_bit at SPI2_I2SPR.B3;
    sbit  I2SDIV4_SPI2_I2SPR_bit at SPI2_I2SPR.B4;
    sbit  I2SDIV5_SPI2_I2SPR_bit at SPI2_I2SPR.B5;
    sbit  I2SDIV6_SPI2_I2SPR_bit at SPI2_I2SPR.B6;
    sbit  I2SDIV7_SPI2_I2SPR_bit at SPI2_I2SPR.B7;

sfr unsigned long   volatile PWR_CR               absolute 0x40007000;
    const register unsigned short int FPDS = 9;
    sbit  FPDS_bit at PWR_CR.B9;
    const register unsigned short int DBP = 8;
    sbit  DBP_bit at PWR_CR.B8;
    const register unsigned short int PLS0 = 5;
    sbit  PLS0_bit at PWR_CR.B5;
    const register unsigned short int PLS1 = 6;
    sbit  PLS1_bit at PWR_CR.B6;
    const register unsigned short int PLS2 = 7;
    sbit  PLS2_bit at PWR_CR.B7;
    const register unsigned short int PVDE = 4;
    sbit  PVDE_bit at PWR_CR.B4;
    const register unsigned short int CSBF = 3;
    sbit  CSBF_bit at PWR_CR.B3;
    const register unsigned short int CWUF = 2;
    sbit  CWUF_bit at PWR_CR.B2;
    const register unsigned short int PDDS = 1;
    sbit  PDDS_bit at PWR_CR.B1;
    const register unsigned short int LPDS = 0;
    sbit  LPDS_bit at PWR_CR.B0;

sfr unsigned long   volatile PWR_CSR              absolute 0x40007004;
    const register unsigned short int BRE = 9;
    sbit  BRE_bit at PWR_CSR.B9;
    const register unsigned short int EWUP = 8;
    sbit  EWUP_bit at PWR_CSR.B8;
    const register unsigned short int BRR = 3;
    sbit  BRR_bit at PWR_CSR.B3;
    const register unsigned short int PVDO = 2;
    sbit  PVDO_bit at PWR_CSR.B2;
    const register unsigned short int SBF = 1;
    sbit  SBF_bit at PWR_CSR.B1;
    const register unsigned short int WUF = 0;
    sbit  WUF_bit at PWR_CSR.B0;

sfr unsigned long   volatile I2C1_CR1             absolute 0x40005400;
    const register unsigned short int PE = 0;
    sbit  PE_bit at I2C1_CR1.B0;
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
    const register unsigned short int TCIE = 6;
    sbit  TCIE_bit at I2C1_CR1.B6;
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
    const register unsigned short int SWRST = 13;
    sbit  SWRST_bit at I2C1_CR1.B13;
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
    const register unsigned short int NACK = 15;
    sbit  NACK_bit at I2C1_CR2.B15;
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
    const register unsigned short int SADD80 = 8;
    sbit  SADD80_bit at I2C1_CR2.B8;
    const register unsigned short int SADD81 = 9;
    sbit  SADD81_bit at I2C1_CR2.B9;
    const register unsigned short int SADD10 = 1;
    sbit  SADD10_bit at I2C1_CR2.B1;
    const register unsigned short int SADD11 = 2;
    sbit  SADD11_bit at I2C1_CR2.B2;
    const register unsigned short int SADD12 = 3;
    sbit  SADD12_bit at I2C1_CR2.B3;
    const register unsigned short int SADD13 = 4;
    sbit  SADD13_bit at I2C1_CR2.B4;
    const register unsigned short int SADD14 = 5;
    sbit  SADD14_bit at I2C1_CR2.B5;
    const register unsigned short int SADD15 = 6;
    sbit  SADD15_bit at I2C1_CR2.B6;
    const register unsigned short int SADD16 = 7;
    sbit  SADD16_bit at I2C1_CR2.B7;
    const register unsigned short int SADD0 = 0;
    sbit  SADD0_bit at I2C1_CR2.B0;

sfr unsigned long   volatile I2C1_OAR1            absolute 0x40005408;
    const register unsigned short int OA1_0 = 0;
    sbit  OA1_0_bit at I2C1_OAR1.B0;
    const register unsigned short int OA1_10 = 1;
    sbit  OA1_10_bit at I2C1_OAR1.B1;
    const register unsigned short int OA1_11 = 2;
    sbit  OA1_11_bit at I2C1_OAR1.B2;
    const register unsigned short int OA1_12 = 3;
    sbit  OA1_12_bit at I2C1_OAR1.B3;
    const register unsigned short int OA1_13 = 4;
    sbit  OA1_13_bit at I2C1_OAR1.B4;
    const register unsigned short int OA1_14 = 5;
    sbit  OA1_14_bit at I2C1_OAR1.B5;
    const register unsigned short int OA1_15 = 6;
    sbit  OA1_15_bit at I2C1_OAR1.B6;
    const register unsigned short int OA1_16 = 7;
    sbit  OA1_16_bit at I2C1_OAR1.B7;
    const register unsigned short int OA1_80 = 8;
    sbit  OA1_80_bit at I2C1_OAR1.B8;
    const register unsigned short int OA1_81 = 9;
    sbit  OA1_81_bit at I2C1_OAR1.B9;
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
    const register unsigned short int PRESC0 = 28;
    sbit  PRESC0_bit at I2C1_TIMINGR.B28;
    const register unsigned short int PRESC1 = 29;
    sbit  PRESC1_bit at I2C1_TIMINGR.B29;
    const register unsigned short int PRESC2 = 30;
    sbit  PRESC2_bit at I2C1_TIMINGR.B30;
    const register unsigned short int PRESC3 = 31;
    sbit  PRESC3_bit at I2C1_TIMINGR.B31;

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
    const register unsigned short int DIR_ = 16;
    sbit  DIR_bit at I2C1_ISR.B16;
    const register unsigned short int BUSY = 15;
    sbit  BUSY_bit at I2C1_ISR.B15;
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
    const register unsigned short int TC = 6;
    sbit  TC_bit at I2C1_ISR.B6;
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
    const register unsigned short int PVU = 0;
    sbit  PVU_bit at IWDG_SR.B0;
    const register unsigned short int RVU = 1;
    sbit  RVU_bit at IWDG_SR.B1;
    const register unsigned short int WVU = 2;
    sbit  WVU_bit at IWDG_SR.B2;

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
    const register unsigned short int EWI = 9;
    sbit  EWI_bit at WWDG_CFR.B9;
    const register unsigned short int WDGTB0 = 7;
    sbit  WDGTB0_bit at WWDG_CFR.B7;
    const register unsigned short int WDGTB1 = 8;
    sbit  WDGTB1_bit at WWDG_CFR.B8;
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

sfr unsigned long   volatile TIM1_CR1             absolute 0x40012C00;
    const register unsigned short int CKD0 = 8;
    sbit  CKD0_bit at TIM1_CR1.B8;
    const register unsigned short int CKD1 = 9;
    sbit  CKD1_bit at TIM1_CR1.B9;
    const register unsigned short int ARPE = 7;
    sbit  ARPE_bit at TIM1_CR1.B7;
    const register unsigned short int CMS0 = 5;
    sbit  CMS0_bit at TIM1_CR1.B5;
    const register unsigned short int CMS1 = 6;
    sbit  CMS1_bit at TIM1_CR1.B6;
    sbit  DIR_TIM1_CR1_bit at TIM1_CR1.B4;
    const register unsigned short int OPM = 3;
    sbit  OPM_bit at TIM1_CR1.B3;
    const register unsigned short int URS = 2;
    sbit  URS_bit at TIM1_CR1.B2;
    const register unsigned short int UDIS = 1;
    sbit  UDIS_bit at TIM1_CR1.B1;
    const register unsigned short int CEN = 0;
    sbit  CEN_bit at TIM1_CR1.B0;

sfr unsigned long   volatile TIM1_CR2             absolute 0x40012C04;
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
    const register unsigned short int OIS1N = 9;
    sbit  OIS1N_bit at TIM1_CR2.B9;
    const register unsigned short int OIS1 = 8;
    sbit  OIS1_bit at TIM1_CR2.B8;
    const register unsigned short int TI1S = 7;
    sbit  TI1S_bit at TIM1_CR2.B7;
    const register unsigned short int MMS0 = 4;
    sbit  MMS0_bit at TIM1_CR2.B4;
    const register unsigned short int MMS1 = 5;
    sbit  MMS1_bit at TIM1_CR2.B5;
    const register unsigned short int MMS2 = 6;
    sbit  MMS2_bit at TIM1_CR2.B6;
    const register unsigned short int CCDS = 3;
    sbit  CCDS_bit at TIM1_CR2.B3;
    const register unsigned short int CCUS = 2;
    sbit  CCUS_bit at TIM1_CR2.B2;
    const register unsigned short int CCPC = 0;
    sbit  CCPC_bit at TIM1_CR2.B0;

sfr unsigned long   volatile TIM1_SMCR            absolute 0x40012C08;
    const register unsigned short int ETP = 15;
    sbit  ETP_bit at TIM1_SMCR.B15;
    const register unsigned short int ECE = 14;
    sbit  ECE_bit at TIM1_SMCR.B14;
    const register unsigned short int ETPS0 = 12;
    sbit  ETPS0_bit at TIM1_SMCR.B12;
    const register unsigned short int ETPS1 = 13;
    sbit  ETPS1_bit at TIM1_SMCR.B13;
    const register unsigned short int ETF0 = 8;
    sbit  ETF0_bit at TIM1_SMCR.B8;
    const register unsigned short int ETF1 = 9;
    sbit  ETF1_bit at TIM1_SMCR.B9;
    const register unsigned short int ETF2 = 10;
    sbit  ETF2_bit at TIM1_SMCR.B10;
    const register unsigned short int ETF3 = 11;
    sbit  ETF3_bit at TIM1_SMCR.B11;
    const register unsigned short int MSM = 7;
    sbit  MSM_bit at TIM1_SMCR.B7;
    const register unsigned short int TS0 = 4;
    sbit  TS0_bit at TIM1_SMCR.B4;
    const register unsigned short int TS1 = 5;
    sbit  TS1_bit at TIM1_SMCR.B5;
    const register unsigned short int TS2 = 6;
    sbit  TS2_bit at TIM1_SMCR.B6;
    const register unsigned short int SMS0 = 0;
    sbit  SMS0_bit at TIM1_SMCR.B0;
    const register unsigned short int SMS1 = 1;
    sbit  SMS1_bit at TIM1_SMCR.B1;
    const register unsigned short int SMS2 = 2;
    sbit  SMS2_bit at TIM1_SMCR.B2;

sfr unsigned long   volatile TIM1_DIER            absolute 0x40012C0C;
    const register unsigned short int TDE = 14;
    sbit  TDE_bit at TIM1_DIER.B14;
    const register unsigned short int COMDE = 13;
    sbit  COMDE_bit at TIM1_DIER.B13;
    const register unsigned short int CC4DE = 12;
    sbit  CC4DE_bit at TIM1_DIER.B12;
    const register unsigned short int CC3DE = 11;
    sbit  CC3DE_bit at TIM1_DIER.B11;
    const register unsigned short int CC2DE = 10;
    sbit  CC2DE_bit at TIM1_DIER.B10;
    const register unsigned short int CC1DE = 9;
    sbit  CC1DE_bit at TIM1_DIER.B9;
    const register unsigned short int UDE = 8;
    sbit  UDE_bit at TIM1_DIER.B8;
    const register unsigned short int BIE = 7;
    sbit  BIE_bit at TIM1_DIER.B7;
    const register unsigned short int TIE = 6;
    sbit  TIE_bit at TIM1_DIER.B6;
    const register unsigned short int COMIE = 5;
    sbit  COMIE_bit at TIM1_DIER.B5;
    const register unsigned short int CC4IE = 4;
    sbit  CC4IE_bit at TIM1_DIER.B4;
    const register unsigned short int CC3IE = 3;
    sbit  CC3IE_bit at TIM1_DIER.B3;
    const register unsigned short int CC2IE = 2;
    sbit  CC2IE_bit at TIM1_DIER.B2;
    const register unsigned short int CC1IE = 1;
    sbit  CC1IE_bit at TIM1_DIER.B1;
    const register unsigned short int UIE = 0;
    sbit  UIE_bit at TIM1_DIER.B0;

sfr unsigned long   volatile TIM1_SR              absolute 0x40012C10;
    const register unsigned short int CC4OF = 12;
    sbit  CC4OF_bit at TIM1_SR.B12;
    const register unsigned short int CC3OF = 11;
    sbit  CC3OF_bit at TIM1_SR.B11;
    const register unsigned short int CC2OF = 10;
    sbit  CC2OF_bit at TIM1_SR.B10;
    const register unsigned short int CC1OF = 9;
    sbit  CC1OF_bit at TIM1_SR.B9;
    const register unsigned short int BIF = 7;
    sbit  BIF_bit at TIM1_SR.B7;
    const register unsigned short int TIF = 6;
    sbit  TIF_bit at TIM1_SR.B6;
    const register unsigned short int COMIF = 5;
    sbit  COMIF_bit at TIM1_SR.B5;
    const register unsigned short int CC4IF = 4;
    sbit  CC4IF_bit at TIM1_SR.B4;
    const register unsigned short int CC3IF = 3;
    sbit  CC3IF_bit at TIM1_SR.B3;
    const register unsigned short int CC2IF = 2;
    sbit  CC2IF_bit at TIM1_SR.B2;
    const register unsigned short int CC1IF = 1;
    sbit  CC1IF_bit at TIM1_SR.B1;
    const register unsigned short int UIF = 0;
    sbit  UIF_bit at TIM1_SR.B0;

sfr unsigned long   volatile TIM1_EGR             absolute 0x40012C14;
    const register unsigned short int BG = 7;
    sbit  BG_bit at TIM1_EGR.B7;
    const register unsigned short int TG = 6;
    sbit  TG_bit at TIM1_EGR.B6;
    const register unsigned short int COMG = 5;
    sbit  COMG_bit at TIM1_EGR.B5;
    const register unsigned short int CC4G = 4;
    sbit  CC4G_bit at TIM1_EGR.B4;
    const register unsigned short int CC3G = 3;
    sbit  CC3G_bit at TIM1_EGR.B3;
    const register unsigned short int CC2G = 2;
    sbit  CC2G_bit at TIM1_EGR.B2;
    const register unsigned short int CC1G = 1;
    sbit  CC1G_bit at TIM1_EGR.B1;
    const register unsigned short int UG = 0;
    sbit  UG_bit at TIM1_EGR.B0;

sfr unsigned long   volatile TIM1_CCMR1_Output    absolute 0x40012C18;
    const register unsigned short int OC2CE = 15;
    sbit  OC2CE_bit at TIM1_CCMR1_Output.B15;
    const register unsigned short int OC2M0 = 12;
    sbit  OC2M0_bit at TIM1_CCMR1_Output.B12;
    const register unsigned short int OC2M1 = 13;
    sbit  OC2M1_bit at TIM1_CCMR1_Output.B13;
    const register unsigned short int OC2M2 = 14;
    sbit  OC2M2_bit at TIM1_CCMR1_Output.B14;
    const register unsigned short int OC2PE = 11;
    sbit  OC2PE_bit at TIM1_CCMR1_Output.B11;
    const register unsigned short int OC2FE = 10;
    sbit  OC2FE_bit at TIM1_CCMR1_Output.B10;
    const register unsigned short int CC2S0 = 8;
    sbit  CC2S0_bit at TIM1_CCMR1_Output.B8;
    const register unsigned short int CC2S1 = 9;
    sbit  CC2S1_bit at TIM1_CCMR1_Output.B9;
    const register unsigned short int OC1CE = 7;
    sbit  OC1CE_bit at TIM1_CCMR1_Output.B7;
    const register unsigned short int OC1M0 = 4;
    sbit  OC1M0_bit at TIM1_CCMR1_Output.B4;
    const register unsigned short int OC1M1 = 5;
    sbit  OC1M1_bit at TIM1_CCMR1_Output.B5;
    const register unsigned short int OC1M2 = 6;
    sbit  OC1M2_bit at TIM1_CCMR1_Output.B6;
    const register unsigned short int OC1PE = 3;
    sbit  OC1PE_bit at TIM1_CCMR1_Output.B3;
    const register unsigned short int OC1FE = 2;
    sbit  OC1FE_bit at TIM1_CCMR1_Output.B2;
    const register unsigned short int CC1S0 = 0;
    sbit  CC1S0_bit at TIM1_CCMR1_Output.B0;
    const register unsigned short int CC1S1 = 1;
    sbit  CC1S1_bit at TIM1_CCMR1_Output.B1;

sfr unsigned long   volatile TIM1_CCMR1_Input     absolute 0x40012C18;
    const register unsigned short int IC2F0 = 12;
    sbit  IC2F0_bit at TIM1_CCMR1_Input.B12;
    const register unsigned short int IC2F1 = 13;
    sbit  IC2F1_bit at TIM1_CCMR1_Input.B13;
    const register unsigned short int IC2F2 = 14;
    sbit  IC2F2_bit at TIM1_CCMR1_Input.B14;
    const register unsigned short int IC2F3 = 15;
    sbit  IC2F3_bit at TIM1_CCMR1_Input.B15;
    const register unsigned short int IC2PCS0 = 10;
    sbit  IC2PCS0_bit at TIM1_CCMR1_Input.B10;
    const register unsigned short int IC2PCS1 = 11;
    sbit  IC2PCS1_bit at TIM1_CCMR1_Input.B11;
    sbit  CC2S0_TIM1_CCMR1_Input_bit at TIM1_CCMR1_Input.B8;
    sbit  CC2S1_TIM1_CCMR1_Input_bit at TIM1_CCMR1_Input.B9;
    const register unsigned short int IC1F0 = 4;
    sbit  IC1F0_bit at TIM1_CCMR1_Input.B4;
    const register unsigned short int IC1F1 = 5;
    sbit  IC1F1_bit at TIM1_CCMR1_Input.B5;
    const register unsigned short int IC1F2 = 6;
    sbit  IC1F2_bit at TIM1_CCMR1_Input.B6;
    const register unsigned short int IC1F3 = 7;
    sbit  IC1F3_bit at TIM1_CCMR1_Input.B7;
    const register unsigned short int IC1PCS0 = 2;
    sbit  IC1PCS0_bit at TIM1_CCMR1_Input.B2;
    const register unsigned short int IC1PCS1 = 3;
    sbit  IC1PCS1_bit at TIM1_CCMR1_Input.B3;
    sbit  CC1S0_TIM1_CCMR1_Input_bit at TIM1_CCMR1_Input.B0;
    sbit  CC1S1_TIM1_CCMR1_Input_bit at TIM1_CCMR1_Input.B1;

sfr unsigned long   volatile TIM1_CCMR2_Output    absolute 0x40012C1C;
    const register unsigned short int OC4CE = 15;
    sbit  OC4CE_bit at TIM1_CCMR2_Output.B15;
    const register unsigned short int OC4M0 = 12;
    sbit  OC4M0_bit at TIM1_CCMR2_Output.B12;
    const register unsigned short int OC4M1 = 13;
    sbit  OC4M1_bit at TIM1_CCMR2_Output.B13;
    const register unsigned short int OC4M2 = 14;
    sbit  OC4M2_bit at TIM1_CCMR2_Output.B14;
    const register unsigned short int OC4PE = 11;
    sbit  OC4PE_bit at TIM1_CCMR2_Output.B11;
    const register unsigned short int OC4FE = 10;
    sbit  OC4FE_bit at TIM1_CCMR2_Output.B10;
    const register unsigned short int CC4S0 = 8;
    sbit  CC4S0_bit at TIM1_CCMR2_Output.B8;
    const register unsigned short int CC4S1 = 9;
    sbit  CC4S1_bit at TIM1_CCMR2_Output.B9;
    const register unsigned short int OC3CE = 7;
    sbit  OC3CE_bit at TIM1_CCMR2_Output.B7;
    const register unsigned short int OC3M0 = 4;
    sbit  OC3M0_bit at TIM1_CCMR2_Output.B4;
    const register unsigned short int OC3M1 = 5;
    sbit  OC3M1_bit at TIM1_CCMR2_Output.B5;
    const register unsigned short int OC3M2 = 6;
    sbit  OC3M2_bit at TIM1_CCMR2_Output.B6;
    const register unsigned short int OC3PE = 3;
    sbit  OC3PE_bit at TIM1_CCMR2_Output.B3;
    const register unsigned short int OC3FE = 2;
    sbit  OC3FE_bit at TIM1_CCMR2_Output.B2;
    const register unsigned short int CC3S0 = 0;
    sbit  CC3S0_bit at TIM1_CCMR2_Output.B0;
    const register unsigned short int CC3S1 = 1;
    sbit  CC3S1_bit at TIM1_CCMR2_Output.B1;

sfr unsigned long   volatile TIM1_CCMR2_Input     absolute 0x40012C1C;
    const register unsigned short int IC4F0 = 12;
    sbit  IC4F0_bit at TIM1_CCMR2_Input.B12;
    const register unsigned short int IC4F1 = 13;
    sbit  IC4F1_bit at TIM1_CCMR2_Input.B13;
    const register unsigned short int IC4F2 = 14;
    sbit  IC4F2_bit at TIM1_CCMR2_Input.B14;
    const register unsigned short int IC4F3 = 15;
    sbit  IC4F3_bit at TIM1_CCMR2_Input.B15;
    const register unsigned short int IC4PSC0 = 10;
    sbit  IC4PSC0_bit at TIM1_CCMR2_Input.B10;
    const register unsigned short int IC4PSC1 = 11;
    sbit  IC4PSC1_bit at TIM1_CCMR2_Input.B11;
    sbit  CC4S0_TIM1_CCMR2_Input_bit at TIM1_CCMR2_Input.B8;
    sbit  CC4S1_TIM1_CCMR2_Input_bit at TIM1_CCMR2_Input.B9;
    const register unsigned short int IC3F0 = 4;
    sbit  IC3F0_bit at TIM1_CCMR2_Input.B4;
    const register unsigned short int IC3F1 = 5;
    sbit  IC3F1_bit at TIM1_CCMR2_Input.B5;
    const register unsigned short int IC3F2 = 6;
    sbit  IC3F2_bit at TIM1_CCMR2_Input.B6;
    const register unsigned short int IC3F3 = 7;
    sbit  IC3F3_bit at TIM1_CCMR2_Input.B7;
    const register unsigned short int IC3PSC0 = 2;
    sbit  IC3PSC0_bit at TIM1_CCMR2_Input.B2;
    const register unsigned short int IC3PSC1 = 3;
    sbit  IC3PSC1_bit at TIM1_CCMR2_Input.B3;
    sbit  CC3S0_TIM1_CCMR2_Input_bit at TIM1_CCMR2_Input.B0;
    sbit  CC3S1_TIM1_CCMR2_Input_bit at TIM1_CCMR2_Input.B1;

sfr unsigned long   volatile TIM1_CCER            absolute 0x40012C20;
    const register unsigned short int CC4P = 13;
    sbit  CC4P_bit at TIM1_CCER.B13;
    const register unsigned short int CC4E = 12;
    sbit  CC4E_bit at TIM1_CCER.B12;
    const register unsigned short int CC3NP = 11;
    sbit  CC3NP_bit at TIM1_CCER.B11;
    const register unsigned short int CC3NE = 10;
    sbit  CC3NE_bit at TIM1_CCER.B10;
    const register unsigned short int CC3P = 9;
    sbit  CC3P_bit at TIM1_CCER.B9;
    const register unsigned short int CC3E = 8;
    sbit  CC3E_bit at TIM1_CCER.B8;
    const register unsigned short int CC2NP = 7;
    sbit  CC2NP_bit at TIM1_CCER.B7;
    const register unsigned short int CC2NE = 6;
    sbit  CC2NE_bit at TIM1_CCER.B6;
    const register unsigned short int CC2P = 5;
    sbit  CC2P_bit at TIM1_CCER.B5;
    const register unsigned short int CC2E = 4;
    sbit  CC2E_bit at TIM1_CCER.B4;
    const register unsigned short int CC1NP = 3;
    sbit  CC1NP_bit at TIM1_CCER.B3;
    const register unsigned short int CC1NE = 2;
    sbit  CC1NE_bit at TIM1_CCER.B2;
    const register unsigned short int CC1P = 1;
    sbit  CC1P_bit at TIM1_CCER.B1;
    const register unsigned short int CC1E = 0;
    sbit  CC1E_bit at TIM1_CCER.B0;

sfr unsigned long   volatile TIM1_CNT             absolute 0x40012C24;
    const register unsigned short int CNT0 = 0;
    sbit  CNT0_bit at TIM1_CNT.B0;
    const register unsigned short int CNT1 = 1;
    sbit  CNT1_bit at TIM1_CNT.B1;
    const register unsigned short int CNT2 = 2;
    sbit  CNT2_bit at TIM1_CNT.B2;
    const register unsigned short int CNT3 = 3;
    sbit  CNT3_bit at TIM1_CNT.B3;
    const register unsigned short int CNT4 = 4;
    sbit  CNT4_bit at TIM1_CNT.B4;
    const register unsigned short int CNT5 = 5;
    sbit  CNT5_bit at TIM1_CNT.B5;
    const register unsigned short int CNT6 = 6;
    sbit  CNT6_bit at TIM1_CNT.B6;
    const register unsigned short int CNT7 = 7;
    sbit  CNT7_bit at TIM1_CNT.B7;
    const register unsigned short int CNT8 = 8;
    sbit  CNT8_bit at TIM1_CNT.B8;
    const register unsigned short int CNT9 = 9;
    sbit  CNT9_bit at TIM1_CNT.B9;
    const register unsigned short int CNT10 = 10;
    sbit  CNT10_bit at TIM1_CNT.B10;
    const register unsigned short int CNT11 = 11;
    sbit  CNT11_bit at TIM1_CNT.B11;
    const register unsigned short int CNT12 = 12;
    sbit  CNT12_bit at TIM1_CNT.B12;
    const register unsigned short int CNT13 = 13;
    sbit  CNT13_bit at TIM1_CNT.B13;
    const register unsigned short int CNT14 = 14;
    sbit  CNT14_bit at TIM1_CNT.B14;
    const register unsigned short int CNT15 = 15;
    sbit  CNT15_bit at TIM1_CNT.B15;

sfr unsigned long   volatile TIM1_PSC             absolute 0x40012C28;
    const register unsigned short int PSC0 = 0;
    sbit  PSC0_bit at TIM1_PSC.B0;
    const register unsigned short int PSC1 = 1;
    sbit  PSC1_bit at TIM1_PSC.B1;
    const register unsigned short int PSC2 = 2;
    sbit  PSC2_bit at TIM1_PSC.B2;
    const register unsigned short int PSC3 = 3;
    sbit  PSC3_bit at TIM1_PSC.B3;
    const register unsigned short int PSC4 = 4;
    sbit  PSC4_bit at TIM1_PSC.B4;
    const register unsigned short int PSC5 = 5;
    sbit  PSC5_bit at TIM1_PSC.B5;
    const register unsigned short int PSC6 = 6;
    sbit  PSC6_bit at TIM1_PSC.B6;
    const register unsigned short int PSC7 = 7;
    sbit  PSC7_bit at TIM1_PSC.B7;
    const register unsigned short int PSC8 = 8;
    sbit  PSC8_bit at TIM1_PSC.B8;
    const register unsigned short int PSC9 = 9;
    sbit  PSC9_bit at TIM1_PSC.B9;
    const register unsigned short int PSC10 = 10;
    sbit  PSC10_bit at TIM1_PSC.B10;
    const register unsigned short int PSC11 = 11;
    sbit  PSC11_bit at TIM1_PSC.B11;
    const register unsigned short int PSC12 = 12;
    sbit  PSC12_bit at TIM1_PSC.B12;
    const register unsigned short int PSC13 = 13;
    sbit  PSC13_bit at TIM1_PSC.B13;
    const register unsigned short int PSC14 = 14;
    sbit  PSC14_bit at TIM1_PSC.B14;
    const register unsigned short int PSC15 = 15;
    sbit  PSC15_bit at TIM1_PSC.B15;

sfr unsigned long   volatile TIM1_ARR             absolute 0x40012C2C;
    const register unsigned short int ARR0 = 0;
    sbit  ARR0_bit at TIM1_ARR.B0;
    const register unsigned short int ARR1 = 1;
    sbit  ARR1_bit at TIM1_ARR.B1;
    const register unsigned short int ARR2 = 2;
    sbit  ARR2_bit at TIM1_ARR.B2;
    const register unsigned short int ARR3 = 3;
    sbit  ARR3_bit at TIM1_ARR.B3;
    const register unsigned short int ARR4 = 4;
    sbit  ARR4_bit at TIM1_ARR.B4;
    const register unsigned short int ARR5 = 5;
    sbit  ARR5_bit at TIM1_ARR.B5;
    const register unsigned short int ARR6 = 6;
    sbit  ARR6_bit at TIM1_ARR.B6;
    const register unsigned short int ARR7 = 7;
    sbit  ARR7_bit at TIM1_ARR.B7;
    const register unsigned short int ARR8 = 8;
    sbit  ARR8_bit at TIM1_ARR.B8;
    const register unsigned short int ARR9 = 9;
    sbit  ARR9_bit at TIM1_ARR.B9;
    const register unsigned short int ARR10 = 10;
    sbit  ARR10_bit at TIM1_ARR.B10;
    const register unsigned short int ARR11 = 11;
    sbit  ARR11_bit at TIM1_ARR.B11;
    const register unsigned short int ARR12 = 12;
    sbit  ARR12_bit at TIM1_ARR.B12;
    const register unsigned short int ARR13 = 13;
    sbit  ARR13_bit at TIM1_ARR.B13;
    const register unsigned short int ARR14 = 14;
    sbit  ARR14_bit at TIM1_ARR.B14;
    const register unsigned short int ARR15 = 15;
    sbit  ARR15_bit at TIM1_ARR.B15;

sfr unsigned long   volatile TIM1_RCR             absolute 0x40012C30;
    const register unsigned short int REP0 = 0;
    sbit  REP0_bit at TIM1_RCR.B0;
    const register unsigned short int REP1 = 1;
    sbit  REP1_bit at TIM1_RCR.B1;
    const register unsigned short int REP2 = 2;
    sbit  REP2_bit at TIM1_RCR.B2;
    const register unsigned short int REP3 = 3;
    sbit  REP3_bit at TIM1_RCR.B3;
    const register unsigned short int REP4 = 4;
    sbit  REP4_bit at TIM1_RCR.B4;
    const register unsigned short int REP5 = 5;
    sbit  REP5_bit at TIM1_RCR.B5;
    const register unsigned short int REP6 = 6;
    sbit  REP6_bit at TIM1_RCR.B6;
    const register unsigned short int REP7 = 7;
    sbit  REP7_bit at TIM1_RCR.B7;

sfr unsigned long   volatile TIM1_CCR1            absolute 0x40012C34;
    const register unsigned short int CCR10 = 0;
    sbit  CCR10_bit at TIM1_CCR1.B0;
    const register unsigned short int CCR11 = 1;
    sbit  CCR11_bit at TIM1_CCR1.B1;
    const register unsigned short int CCR12 = 2;
    sbit  CCR12_bit at TIM1_CCR1.B2;
    const register unsigned short int CCR13 = 3;
    sbit  CCR13_bit at TIM1_CCR1.B3;
    const register unsigned short int CCR14 = 4;
    sbit  CCR14_bit at TIM1_CCR1.B4;
    const register unsigned short int CCR15 = 5;
    sbit  CCR15_bit at TIM1_CCR1.B5;
    const register unsigned short int CCR16 = 6;
    sbit  CCR16_bit at TIM1_CCR1.B6;
    const register unsigned short int CCR17 = 7;
    sbit  CCR17_bit at TIM1_CCR1.B7;
    const register unsigned short int CCR18 = 8;
    sbit  CCR18_bit at TIM1_CCR1.B8;
    const register unsigned short int CCR19 = 9;
    sbit  CCR19_bit at TIM1_CCR1.B9;
    const register unsigned short int CCR110 = 10;
    sbit  CCR110_bit at TIM1_CCR1.B10;
    const register unsigned short int CCR111 = 11;
    sbit  CCR111_bit at TIM1_CCR1.B11;
    const register unsigned short int CCR112 = 12;
    sbit  CCR112_bit at TIM1_CCR1.B12;
    const register unsigned short int CCR113 = 13;
    sbit  CCR113_bit at TIM1_CCR1.B13;
    const register unsigned short int CCR114 = 14;
    sbit  CCR114_bit at TIM1_CCR1.B14;
    const register unsigned short int CCR115 = 15;
    sbit  CCR115_bit at TIM1_CCR1.B15;

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
    const register unsigned short int MOE = 15;
    sbit  MOE_bit at TIM1_BDTR.B15;
    const register unsigned short int AOE = 14;
    sbit  AOE_bit at TIM1_BDTR.B14;
    const register unsigned short int BKP = 13;
    sbit  BKP_bit at TIM1_BDTR.B13;
    const register unsigned short int BKE = 12;
    sbit  BKE_bit at TIM1_BDTR.B12;
    const register unsigned short int OSSR = 11;
    sbit  OSSR_bit at TIM1_BDTR.B11;
    const register unsigned short int OSSI = 10;
    sbit  OSSI_bit at TIM1_BDTR.B10;
    const register unsigned short int LOCK0 = 8;
    sbit  LOCK0_bit at TIM1_BDTR.B8;
    const register unsigned short int LOCK1 = 9;
    sbit  LOCK1_bit at TIM1_BDTR.B9;
    const register unsigned short int DTG0 = 0;
    sbit  DTG0_bit at TIM1_BDTR.B0;
    const register unsigned short int DTG1 = 1;
    sbit  DTG1_bit at TIM1_BDTR.B1;
    const register unsigned short int DTG2 = 2;
    sbit  DTG2_bit at TIM1_BDTR.B2;
    const register unsigned short int DTG3 = 3;
    sbit  DTG3_bit at TIM1_BDTR.B3;
    const register unsigned short int DTG4 = 4;
    sbit  DTG4_bit at TIM1_BDTR.B4;
    const register unsigned short int DTG5 = 5;
    sbit  DTG5_bit at TIM1_BDTR.B5;
    const register unsigned short int DTG6 = 6;
    sbit  DTG6_bit at TIM1_BDTR.B6;
    const register unsigned short int DTG7 = 7;
    sbit  DTG7_bit at TIM1_BDTR.B7;

sfr unsigned long   volatile TIM1_DCR             absolute 0x40012C48;
    const register unsigned short int DBL0 = 8;
    sbit  DBL0_bit at TIM1_DCR.B8;
    const register unsigned short int DBL1 = 9;
    sbit  DBL1_bit at TIM1_DCR.B9;
    const register unsigned short int DBL2 = 10;
    sbit  DBL2_bit at TIM1_DCR.B10;
    const register unsigned short int DBL3 = 11;
    sbit  DBL3_bit at TIM1_DCR.B11;
    const register unsigned short int DBL4 = 12;
    sbit  DBL4_bit at TIM1_DCR.B12;
    const register unsigned short int DBA0 = 0;
    sbit  DBA0_bit at TIM1_DCR.B0;
    const register unsigned short int DBA1 = 1;
    sbit  DBA1_bit at TIM1_DCR.B1;
    const register unsigned short int DBA2 = 2;
    sbit  DBA2_bit at TIM1_DCR.B2;
    const register unsigned short int DBA3 = 3;
    sbit  DBA3_bit at TIM1_DCR.B3;
    const register unsigned short int DBA4 = 4;
    sbit  DBA4_bit at TIM1_DCR.B4;

sfr unsigned long   volatile TIM1_DMAR            absolute 0x40012C4C;
    const register unsigned short int DMAB0 = 0;
    sbit  DMAB0_bit at TIM1_DMAR.B0;
    const register unsigned short int DMAB1 = 1;
    sbit  DMAB1_bit at TIM1_DMAR.B1;
    const register unsigned short int DMAB2 = 2;
    sbit  DMAB2_bit at TIM1_DMAR.B2;
    const register unsigned short int DMAB3 = 3;
    sbit  DMAB3_bit at TIM1_DMAR.B3;
    const register unsigned short int DMAB4 = 4;
    sbit  DMAB4_bit at TIM1_DMAR.B4;
    const register unsigned short int DMAB5 = 5;
    sbit  DMAB5_bit at TIM1_DMAR.B5;
    const register unsigned short int DMAB6 = 6;
    sbit  DMAB6_bit at TIM1_DMAR.B6;
    const register unsigned short int DMAB7 = 7;
    sbit  DMAB7_bit at TIM1_DMAR.B7;
    const register unsigned short int DMAB8 = 8;
    sbit  DMAB8_bit at TIM1_DMAR.B8;
    const register unsigned short int DMAB9 = 9;
    sbit  DMAB9_bit at TIM1_DMAR.B9;
    const register unsigned short int DMAB10 = 10;
    sbit  DMAB10_bit at TIM1_DMAR.B10;
    const register unsigned short int DMAB11 = 11;
    sbit  DMAB11_bit at TIM1_DMAR.B11;
    const register unsigned short int DMAB12 = 12;
    sbit  DMAB12_bit at TIM1_DMAR.B12;
    const register unsigned short int DMAB13 = 13;
    sbit  DMAB13_bit at TIM1_DMAR.B13;
    const register unsigned short int DMAB14 = 14;
    sbit  DMAB14_bit at TIM1_DMAR.B14;
    const register unsigned short int DMAB15 = 15;
    sbit  DMAB15_bit at TIM1_DMAR.B15;

sfr unsigned long   volatile TIM2_CR1             absolute 0x40000000;
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
    sbit  TS2_TIM2_SMCR_bit at TIM2_SMCR.B6;
    sbit  SMS0_TIM2_SMCR_bit at TIM2_SMCR.B0;
    sbit  SMS1_TIM2_SMCR_bit at TIM2_SMCR.B1;
    sbit  SMS2_TIM2_SMCR_bit at TIM2_SMCR.B2;

sfr unsigned long   volatile TIM2_DIER            absolute 0x4000000C;
    sbit  TDE_TIM2_DIER_bit at TIM2_DIER.B14;
    sbit  COMDE_TIM2_DIER_bit at TIM2_DIER.B13;
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
    sbit  IC2F0_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B12;
    sbit  IC2F1_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B13;
    sbit  IC2F2_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B14;
    sbit  IC2F3_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B15;
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
    const register unsigned short int IC1PSC0 = 2;
    sbit  IC1PSC0_bit at TIM2_CCMR1_Input.B2;
    const register unsigned short int IC1PSC1 = 3;
    sbit  IC1PSC1_bit at TIM2_CCMR1_Input.B3;
    sbit  CC1S0_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B0;
    sbit  CC1S1_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B1;

sfr unsigned long   volatile TIM2_CCMR2_Output    absolute 0x4000001C;
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
    sbit  IC4F0_TIM2_CCMR2_Input_bit at TIM2_CCMR2_Input.B12;
    sbit  IC4F1_TIM2_CCMR2_Input_bit at TIM2_CCMR2_Input.B13;
    sbit  IC4F2_TIM2_CCMR2_Input_bit at TIM2_CCMR2_Input.B14;
    sbit  IC4F3_TIM2_CCMR2_Input_bit at TIM2_CCMR2_Input.B15;
    sbit  IC4PSC0_TIM2_CCMR2_Input_bit at TIM2_CCMR2_Input.B10;
    sbit  IC4PSC1_TIM2_CCMR2_Input_bit at TIM2_CCMR2_Input.B11;
    sbit  CC4S0_TIM2_CCMR2_Input_bit at TIM2_CCMR2_Input.B8;
    sbit  CC4S1_TIM2_CCMR2_Input_bit at TIM2_CCMR2_Input.B9;
    sbit  IC3F0_TIM2_CCMR2_Input_bit at TIM2_CCMR2_Input.B4;
    sbit  IC3F1_TIM2_CCMR2_Input_bit at TIM2_CCMR2_Input.B5;
    sbit  IC3F2_TIM2_CCMR2_Input_bit at TIM2_CCMR2_Input.B6;
    sbit  IC3F3_TIM2_CCMR2_Input_bit at TIM2_CCMR2_Input.B7;
    sbit  IC3PSC0_TIM2_CCMR2_Input_bit at TIM2_CCMR2_Input.B2;
    sbit  IC3PSC1_TIM2_CCMR2_Input_bit at TIM2_CCMR2_Input.B3;
    sbit  CC3S0_TIM2_CCMR2_Input_bit at TIM2_CCMR2_Input.B0;
    sbit  CC3S1_TIM2_CCMR2_Input_bit at TIM2_CCMR2_Input.B1;

sfr unsigned long   volatile TIM2_CCER            absolute 0x40000020;
    const register unsigned short int CC4NP = 15;
    sbit  CC4NP_bit at TIM2_CCER.B15;
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
    const register unsigned short int DMAR0 = 0;
    sbit  DMAR0_bit at TIM2_DMAR.B0;
    const register unsigned short int DMAR1 = 1;
    sbit  DMAR1_bit at TIM2_DMAR.B1;
    const register unsigned short int DMAR2 = 2;
    sbit  DMAR2_bit at TIM2_DMAR.B2;
    const register unsigned short int DMAR3 = 3;
    sbit  DMAR3_bit at TIM2_DMAR.B3;
    const register unsigned short int DMAR4 = 4;
    sbit  DMAR4_bit at TIM2_DMAR.B4;
    const register unsigned short int DMAR5 = 5;
    sbit  DMAR5_bit at TIM2_DMAR.B5;
    const register unsigned short int DMAR6 = 6;
    sbit  DMAR6_bit at TIM2_DMAR.B6;
    const register unsigned short int DMAR7 = 7;
    sbit  DMAR7_bit at TIM2_DMAR.B7;
    const register unsigned short int DMAR8 = 8;
    sbit  DMAR8_bit at TIM2_DMAR.B8;
    const register unsigned short int DMAR9 = 9;
    sbit  DMAR9_bit at TIM2_DMAR.B9;
    const register unsigned short int DMAR10 = 10;
    sbit  DMAR10_bit at TIM2_DMAR.B10;
    const register unsigned short int DMAR11 = 11;
    sbit  DMAR11_bit at TIM2_DMAR.B11;
    const register unsigned short int DMAR12 = 12;
    sbit  DMAR12_bit at TIM2_DMAR.B12;
    const register unsigned short int DMAR13 = 13;
    sbit  DMAR13_bit at TIM2_DMAR.B13;
    const register unsigned short int DMAR14 = 14;
    sbit  DMAR14_bit at TIM2_DMAR.B14;
    const register unsigned short int DMAR15 = 15;
    sbit  DMAR15_bit at TIM2_DMAR.B15;

sfr unsigned long   volatile TIM3_CR1             absolute 0x40000400;
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
    sbit  SMS0_TIM3_SMCR_bit at TIM3_SMCR.B0;
    sbit  SMS1_TIM3_SMCR_bit at TIM3_SMCR.B1;
    sbit  SMS2_TIM3_SMCR_bit at TIM3_SMCR.B2;

sfr unsigned long   volatile TIM3_DIER            absolute 0x4000040C;
    sbit  TDE_TIM3_DIER_bit at TIM3_DIER.B14;
    sbit  COMDE_TIM3_DIER_bit at TIM3_DIER.B13;
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
    sbit  DMAR0_TIM3_DMAR_bit at TIM3_DMAR.B0;
    sbit  DMAR1_TIM3_DMAR_bit at TIM3_DMAR.B1;
    sbit  DMAR2_TIM3_DMAR_bit at TIM3_DMAR.B2;
    sbit  DMAR3_TIM3_DMAR_bit at TIM3_DMAR.B3;
    sbit  DMAR4_TIM3_DMAR_bit at TIM3_DMAR.B4;
    sbit  DMAR5_TIM3_DMAR_bit at TIM3_DMAR.B5;
    sbit  DMAR6_TIM3_DMAR_bit at TIM3_DMAR.B6;
    sbit  DMAR7_TIM3_DMAR_bit at TIM3_DMAR.B7;
    sbit  DMAR8_TIM3_DMAR_bit at TIM3_DMAR.B8;
    sbit  DMAR9_TIM3_DMAR_bit at TIM3_DMAR.B9;
    sbit  DMAR10_TIM3_DMAR_bit at TIM3_DMAR.B10;
    sbit  DMAR11_TIM3_DMAR_bit at TIM3_DMAR.B11;
    sbit  DMAR12_TIM3_DMAR_bit at TIM3_DMAR.B12;
    sbit  DMAR13_TIM3_DMAR_bit at TIM3_DMAR.B13;
    sbit  DMAR14_TIM3_DMAR_bit at TIM3_DMAR.B14;
    sbit  DMAR15_TIM3_DMAR_bit at TIM3_DMAR.B15;

sfr unsigned long   volatile TIM14_CR1            absolute 0x40002000;
    sbit  CKD0_TIM14_CR1_bit at TIM14_CR1.B8;
    sbit  CKD1_TIM14_CR1_bit at TIM14_CR1.B9;
    sbit  ARPE_TIM14_CR1_bit at TIM14_CR1.B7;
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

sfr unsigned long   volatile TIM14_CCMR1_Input    absolute 0x40002018;
    sbit  IC1F0_TIM14_CCMR1_Input_bit at TIM14_CCMR1_Input.B4;
    sbit  IC1F1_TIM14_CCMR1_Input_bit at TIM14_CCMR1_Input.B5;
    sbit  IC1F2_TIM14_CCMR1_Input_bit at TIM14_CCMR1_Input.B6;
    sbit  IC1F3_TIM14_CCMR1_Input_bit at TIM14_CCMR1_Input.B7;
    sbit  IC1PSC0_TIM14_CCMR1_Input_bit at TIM14_CCMR1_Input.B2;
    sbit  IC1PSC1_TIM14_CCMR1_Input_bit at TIM14_CCMR1_Input.B3;
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

sfr unsigned long   volatile TIM14_OR             absolute 0x40002050;
    const register unsigned short int RMP0 = 0;
    sbit  RMP0_bit at TIM14_OR.B0;
    const register unsigned short int RMP1 = 1;
    sbit  RMP1_bit at TIM14_OR.B1;

sfr unsigned long   volatile EXTI_IMR             absolute 0x40010400;
    const register unsigned short int MR0 = 0;
    sbit  MR0_bit at EXTI_IMR.B0;
    const register unsigned short int MR1 = 1;
    sbit  MR1_bit at EXTI_IMR.B1;
    const register unsigned short int MR2 = 2;
    sbit  MR2_bit at EXTI_IMR.B2;
    const register unsigned short int MR3 = 3;
    sbit  MR3_bit at EXTI_IMR.B3;
    const register unsigned short int MR4 = 4;
    sbit  MR4_bit at EXTI_IMR.B4;
    const register unsigned short int MR5 = 5;
    sbit  MR5_bit at EXTI_IMR.B5;
    const register unsigned short int MR6 = 6;
    sbit  MR6_bit at EXTI_IMR.B6;
    const register unsigned short int MR7 = 7;
    sbit  MR7_bit at EXTI_IMR.B7;
    const register unsigned short int MR8 = 8;
    sbit  MR8_bit at EXTI_IMR.B8;
    const register unsigned short int MR9 = 9;
    sbit  MR9_bit at EXTI_IMR.B9;
    const register unsigned short int MR10 = 10;
    sbit  MR10_bit at EXTI_IMR.B10;
    const register unsigned short int MR11 = 11;
    sbit  MR11_bit at EXTI_IMR.B11;
    const register unsigned short int MR12 = 12;
    sbit  MR12_bit at EXTI_IMR.B12;
    const register unsigned short int MR13 = 13;
    sbit  MR13_bit at EXTI_IMR.B13;
    const register unsigned short int MR14 = 14;
    sbit  MR14_bit at EXTI_IMR.B14;
    const register unsigned short int MR15 = 15;
    sbit  MR15_bit at EXTI_IMR.B15;
    const register unsigned short int MR16 = 16;
    sbit  MR16_bit at EXTI_IMR.B16;
    const register unsigned short int MR17 = 17;
    sbit  MR17_bit at EXTI_IMR.B17;
    const register unsigned short int MR18 = 18;
    sbit  MR18_bit at EXTI_IMR.B18;
    const register unsigned short int MR19 = 19;
    sbit  MR19_bit at EXTI_IMR.B19;
    const register unsigned short int MR20 = 20;
    sbit  MR20_bit at EXTI_IMR.B20;
    const register unsigned short int MR21 = 21;
    sbit  MR21_bit at EXTI_IMR.B21;
    const register unsigned short int MR22 = 22;
    sbit  MR22_bit at EXTI_IMR.B22;
    const register unsigned short int MR23 = 23;
    sbit  MR23_bit at EXTI_IMR.B23;
    const register unsigned short int MR24 = 24;
    sbit  MR24_bit at EXTI_IMR.B24;
    const register unsigned short int MR25 = 25;
    sbit  MR25_bit at EXTI_IMR.B25;
    const register unsigned short int MR26 = 26;
    sbit  MR26_bit at EXTI_IMR.B26;
    const register unsigned short int MR27 = 27;
    sbit  MR27_bit at EXTI_IMR.B27;

sfr unsigned long   volatile EXTI_EMR             absolute 0x40010404;
    sbit  MR0_EXTI_EMR_bit at EXTI_EMR.B0;
    sbit  MR1_EXTI_EMR_bit at EXTI_EMR.B1;
    sbit  MR2_EXTI_EMR_bit at EXTI_EMR.B2;
    sbit  MR3_EXTI_EMR_bit at EXTI_EMR.B3;
    sbit  MR4_EXTI_EMR_bit at EXTI_EMR.B4;
    sbit  MR5_EXTI_EMR_bit at EXTI_EMR.B5;
    sbit  MR6_EXTI_EMR_bit at EXTI_EMR.B6;
    sbit  MR7_EXTI_EMR_bit at EXTI_EMR.B7;
    sbit  MR8_EXTI_EMR_bit at EXTI_EMR.B8;
    sbit  MR9_EXTI_EMR_bit at EXTI_EMR.B9;
    sbit  MR10_EXTI_EMR_bit at EXTI_EMR.B10;
    sbit  MR11_EXTI_EMR_bit at EXTI_EMR.B11;
    sbit  MR12_EXTI_EMR_bit at EXTI_EMR.B12;
    sbit  MR13_EXTI_EMR_bit at EXTI_EMR.B13;
    sbit  MR14_EXTI_EMR_bit at EXTI_EMR.B14;
    sbit  MR15_EXTI_EMR_bit at EXTI_EMR.B15;
    sbit  MR16_EXTI_EMR_bit at EXTI_EMR.B16;
    sbit  MR17_EXTI_EMR_bit at EXTI_EMR.B17;
    sbit  MR18_EXTI_EMR_bit at EXTI_EMR.B18;
    sbit  MR19_EXTI_EMR_bit at EXTI_EMR.B19;
    sbit  MR20_EXTI_EMR_bit at EXTI_EMR.B20;
    sbit  MR21_EXTI_EMR_bit at EXTI_EMR.B21;
    sbit  MR22_EXTI_EMR_bit at EXTI_EMR.B22;
    sbit  MR23_EXTI_EMR_bit at EXTI_EMR.B23;
    sbit  MR24_EXTI_EMR_bit at EXTI_EMR.B24;
    sbit  MR25_EXTI_EMR_bit at EXTI_EMR.B25;
    sbit  MR26_EXTI_EMR_bit at EXTI_EMR.B26;
    sbit  MR27_EXTI_EMR_bit at EXTI_EMR.B27;

sfr unsigned long   volatile EXTI_RTSR            absolute 0x40010408;
    const register unsigned short int TR0 = 0;
    sbit  TR0_bit at EXTI_RTSR.B0;
    const register unsigned short int TR1 = 1;
    sbit  TR1_bit at EXTI_RTSR.B1;
    const register unsigned short int TR2 = 2;
    sbit  TR2_bit at EXTI_RTSR.B2;
    const register unsigned short int TR3 = 3;
    sbit  TR3_bit at EXTI_RTSR.B3;
    const register unsigned short int TR4 = 4;
    sbit  TR4_bit at EXTI_RTSR.B4;
    const register unsigned short int TR5 = 5;
    sbit  TR5_bit at EXTI_RTSR.B5;
    const register unsigned short int TR6 = 6;
    sbit  TR6_bit at EXTI_RTSR.B6;
    const register unsigned short int TR7 = 7;
    sbit  TR7_bit at EXTI_RTSR.B7;
    const register unsigned short int TR8 = 8;
    sbit  TR8_bit at EXTI_RTSR.B8;
    const register unsigned short int TR9 = 9;
    sbit  TR9_bit at EXTI_RTSR.B9;
    const register unsigned short int TR10 = 10;
    sbit  TR10_bit at EXTI_RTSR.B10;
    const register unsigned short int TR11 = 11;
    sbit  TR11_bit at EXTI_RTSR.B11;
    const register unsigned short int TR12 = 12;
    sbit  TR12_bit at EXTI_RTSR.B12;
    const register unsigned short int TR13 = 13;
    sbit  TR13_bit at EXTI_RTSR.B13;
    const register unsigned short int TR14 = 14;
    sbit  TR14_bit at EXTI_RTSR.B14;
    const register unsigned short int TR15 = 15;
    sbit  TR15_bit at EXTI_RTSR.B15;
    const register unsigned short int TR16 = 16;
    sbit  TR16_bit at EXTI_RTSR.B16;
    const register unsigned short int TR17 = 17;
    sbit  TR17_bit at EXTI_RTSR.B17;
    const register unsigned short int TR19 = 19;
    sbit  TR19_bit at EXTI_RTSR.B19;

sfr unsigned long   volatile EXTI_FTSR            absolute 0x4001040C;
    sbit  TR0_EXTI_FTSR_bit at EXTI_FTSR.B0;
    sbit  TR1_EXTI_FTSR_bit at EXTI_FTSR.B1;
    sbit  TR2_EXTI_FTSR_bit at EXTI_FTSR.B2;
    sbit  TR3_EXTI_FTSR_bit at EXTI_FTSR.B3;
    sbit  TR4_EXTI_FTSR_bit at EXTI_FTSR.B4;
    sbit  TR5_EXTI_FTSR_bit at EXTI_FTSR.B5;
    sbit  TR6_EXTI_FTSR_bit at EXTI_FTSR.B6;
    sbit  TR7_EXTI_FTSR_bit at EXTI_FTSR.B7;
    sbit  TR8_EXTI_FTSR_bit at EXTI_FTSR.B8;
    sbit  TR9_EXTI_FTSR_bit at EXTI_FTSR.B9;
    sbit  TR10_EXTI_FTSR_bit at EXTI_FTSR.B10;
    sbit  TR11_EXTI_FTSR_bit at EXTI_FTSR.B11;
    sbit  TR12_EXTI_FTSR_bit at EXTI_FTSR.B12;
    sbit  TR13_EXTI_FTSR_bit at EXTI_FTSR.B13;
    sbit  TR14_EXTI_FTSR_bit at EXTI_FTSR.B14;
    sbit  TR15_EXTI_FTSR_bit at EXTI_FTSR.B15;
    sbit  TR16_EXTI_FTSR_bit at EXTI_FTSR.B16;
    sbit  TR17_EXTI_FTSR_bit at EXTI_FTSR.B17;
    sbit  TR19_EXTI_FTSR_bit at EXTI_FTSR.B19;

sfr unsigned long   volatile EXTI_SWIER           absolute 0x40010410;
    const register unsigned short int SWIER0 = 0;
    sbit  SWIER0_bit at EXTI_SWIER.B0;
    const register unsigned short int SWIER1 = 1;
    sbit  SWIER1_bit at EXTI_SWIER.B1;
    const register unsigned short int SWIER2 = 2;
    sbit  SWIER2_bit at EXTI_SWIER.B2;
    const register unsigned short int SWIER3 = 3;
    sbit  SWIER3_bit at EXTI_SWIER.B3;
    const register unsigned short int SWIER4 = 4;
    sbit  SWIER4_bit at EXTI_SWIER.B4;
    const register unsigned short int SWIER5 = 5;
    sbit  SWIER5_bit at EXTI_SWIER.B5;
    const register unsigned short int SWIER6 = 6;
    sbit  SWIER6_bit at EXTI_SWIER.B6;
    const register unsigned short int SWIER7 = 7;
    sbit  SWIER7_bit at EXTI_SWIER.B7;
    const register unsigned short int SWIER8 = 8;
    sbit  SWIER8_bit at EXTI_SWIER.B8;
    const register unsigned short int SWIER9 = 9;
    sbit  SWIER9_bit at EXTI_SWIER.B9;
    const register unsigned short int SWIER10 = 10;
    sbit  SWIER10_bit at EXTI_SWIER.B10;
    const register unsigned short int SWIER11 = 11;
    sbit  SWIER11_bit at EXTI_SWIER.B11;
    const register unsigned short int SWIER12 = 12;
    sbit  SWIER12_bit at EXTI_SWIER.B12;
    const register unsigned short int SWIER13 = 13;
    sbit  SWIER13_bit at EXTI_SWIER.B13;
    const register unsigned short int SWIER14 = 14;
    sbit  SWIER14_bit at EXTI_SWIER.B14;
    const register unsigned short int SWIER15 = 15;
    sbit  SWIER15_bit at EXTI_SWIER.B15;
    const register unsigned short int SWIER16 = 16;
    sbit  SWIER16_bit at EXTI_SWIER.B16;
    const register unsigned short int SWIER17 = 17;
    sbit  SWIER17_bit at EXTI_SWIER.B17;
    const register unsigned short int SWIER19 = 19;
    sbit  SWIER19_bit at EXTI_SWIER.B19;

sfr unsigned long   volatile EXTI_PR              absolute 0x40010414;
    sbit  PR0_EXTI_PR_bit at EXTI_PR.B0;
    sbit  PR1_EXTI_PR_bit at EXTI_PR.B1;
    sbit  PR2_EXTI_PR_bit at EXTI_PR.B2;
    const register unsigned short int PR3 = 3;
    sbit  PR3_bit at EXTI_PR.B3;
    const register unsigned short int PR4 = 4;
    sbit  PR4_bit at EXTI_PR.B4;
    const register unsigned short int PR5 = 5;
    sbit  PR5_bit at EXTI_PR.B5;
    const register unsigned short int PR6 = 6;
    sbit  PR6_bit at EXTI_PR.B6;
    const register unsigned short int PR7 = 7;
    sbit  PR7_bit at EXTI_PR.B7;
    const register unsigned short int PR8 = 8;
    sbit  PR8_bit at EXTI_PR.B8;
    const register unsigned short int PR9 = 9;
    sbit  PR9_bit at EXTI_PR.B9;
    const register unsigned short int PR10 = 10;
    sbit  PR10_bit at EXTI_PR.B10;
    const register unsigned short int PR11 = 11;
    sbit  PR11_bit at EXTI_PR.B11;
    const register unsigned short int PR12 = 12;
    sbit  PR12_bit at EXTI_PR.B12;
    const register unsigned short int PR13 = 13;
    sbit  PR13_bit at EXTI_PR.B13;
    const register unsigned short int PR14 = 14;
    sbit  PR14_bit at EXTI_PR.B14;
    const register unsigned short int PR15 = 15;
    sbit  PR15_bit at EXTI_PR.B15;
    const register unsigned short int PR16 = 16;
    sbit  PR16_bit at EXTI_PR.B16;
    const register unsigned short int PR17 = 17;
    sbit  PR17_bit at EXTI_PR.B17;
    const register unsigned short int PR19 = 19;
    sbit  PR19_bit at EXTI_PR.B19;

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
    const register unsigned short int PRI_000 = 6;
    sbit  PRI_000_bit at NVIC_IPR0.B6;
    const register unsigned short int PRI_001 = 7;
    sbit  PRI_001_bit at NVIC_IPR0.B7;
    const register unsigned short int PRI_010 = 14;
    sbit  PRI_010_bit at NVIC_IPR0.B14;
    const register unsigned short int PRI_011 = 15;
    sbit  PRI_011_bit at NVIC_IPR0.B15;
    const register unsigned short int PRI_020 = 22;
    sbit  PRI_020_bit at NVIC_IPR0.B22;
    const register unsigned short int PRI_021 = 23;
    sbit  PRI_021_bit at NVIC_IPR0.B23;
    const register unsigned short int PRI_030 = 30;
    sbit  PRI_030_bit at NVIC_IPR0.B30;
    const register unsigned short int PRI_031 = 31;
    sbit  PRI_031_bit at NVIC_IPR0.B31;

sfr far unsigned long   volatile NVIC_IPR1            absolute 0xE000E404;
    const register unsigned short int PRI_400 = 6;
    sbit  PRI_400_bit at NVIC_IPR1.B6;
    const register unsigned short int PRI_401 = 7;
    sbit  PRI_401_bit at NVIC_IPR1.B7;
    const register unsigned short int PRI_410 = 14;
    sbit  PRI_410_bit at NVIC_IPR1.B14;
    const register unsigned short int PRI_411 = 15;
    sbit  PRI_411_bit at NVIC_IPR1.B15;
    const register unsigned short int PRI_420 = 22;
    sbit  PRI_420_bit at NVIC_IPR1.B22;
    const register unsigned short int PRI_421 = 23;
    sbit  PRI_421_bit at NVIC_IPR1.B23;
    const register unsigned short int PRI_430 = 30;
    sbit  PRI_430_bit at NVIC_IPR1.B30;
    const register unsigned short int PRI_431 = 31;
    sbit  PRI_431_bit at NVIC_IPR1.B31;

sfr far unsigned long   volatile NVIC_IPR2            absolute 0xE000E408;
    const register unsigned short int PRI_800 = 6;
    sbit  PRI_800_bit at NVIC_IPR2.B6;
    const register unsigned short int PRI_801 = 7;
    sbit  PRI_801_bit at NVIC_IPR2.B7;
    const register unsigned short int PRI_810 = 14;
    sbit  PRI_810_bit at NVIC_IPR2.B14;
    const register unsigned short int PRI_811 = 15;
    sbit  PRI_811_bit at NVIC_IPR2.B15;
    const register unsigned short int PRI_820 = 22;
    sbit  PRI_820_bit at NVIC_IPR2.B22;
    const register unsigned short int PRI_821 = 23;
    sbit  PRI_821_bit at NVIC_IPR2.B23;
    const register unsigned short int PRI_830 = 30;
    sbit  PRI_830_bit at NVIC_IPR2.B30;
    const register unsigned short int PRI_831 = 31;
    sbit  PRI_831_bit at NVIC_IPR2.B31;

sfr far unsigned long   volatile NVIC_IPR3            absolute 0xE000E40C;
    const register unsigned short int PRI_1200 = 6;
    sbit  PRI_1200_bit at NVIC_IPR3.B6;
    const register unsigned short int PRI_1201 = 7;
    sbit  PRI_1201_bit at NVIC_IPR3.B7;
    const register unsigned short int PRI_1210 = 14;
    sbit  PRI_1210_bit at NVIC_IPR3.B14;
    const register unsigned short int PRI_1211 = 15;
    sbit  PRI_1211_bit at NVIC_IPR3.B15;
    const register unsigned short int PRI_1220 = 22;
    sbit  PRI_1220_bit at NVIC_IPR3.B22;
    const register unsigned short int PRI_1221 = 23;
    sbit  PRI_1221_bit at NVIC_IPR3.B23;
    const register unsigned short int PRI_1230 = 30;
    sbit  PRI_1230_bit at NVIC_IPR3.B30;
    const register unsigned short int PRI_1231 = 31;
    sbit  PRI_1231_bit at NVIC_IPR3.B31;

sfr far unsigned long   volatile NVIC_IPR4            absolute 0xE000E410;
    const register unsigned short int PRI_1600 = 6;
    sbit  PRI_1600_bit at NVIC_IPR4.B6;
    const register unsigned short int PRI_1601 = 7;
    sbit  PRI_1601_bit at NVIC_IPR4.B7;
    const register unsigned short int PRI_1610 = 14;
    sbit  PRI_1610_bit at NVIC_IPR4.B14;
    const register unsigned short int PRI_1611 = 15;
    sbit  PRI_1611_bit at NVIC_IPR4.B15;
    const register unsigned short int PRI_1620 = 22;
    sbit  PRI_1620_bit at NVIC_IPR4.B22;
    const register unsigned short int PRI_1621 = 23;
    sbit  PRI_1621_bit at NVIC_IPR4.B23;
    const register unsigned short int PRI_1630 = 30;
    sbit  PRI_1630_bit at NVIC_IPR4.B30;
    const register unsigned short int PRI_1631 = 31;
    sbit  PRI_1631_bit at NVIC_IPR4.B31;

sfr far unsigned long   volatile NVIC_IPR5            absolute 0xE000E414;
    const register unsigned short int PRI_2000 = 6;
    sbit  PRI_2000_bit at NVIC_IPR5.B6;
    const register unsigned short int PRI_2001 = 7;
    sbit  PRI_2001_bit at NVIC_IPR5.B7;
    const register unsigned short int PRI_2010 = 14;
    sbit  PRI_2010_bit at NVIC_IPR5.B14;
    const register unsigned short int PRI_2011 = 15;
    sbit  PRI_2011_bit at NVIC_IPR5.B15;
    const register unsigned short int PRI_2020 = 22;
    sbit  PRI_2020_bit at NVIC_IPR5.B22;
    const register unsigned short int PRI_2021 = 23;
    sbit  PRI_2021_bit at NVIC_IPR5.B23;
    const register unsigned short int PRI_2030 = 30;
    sbit  PRI_2030_bit at NVIC_IPR5.B30;
    const register unsigned short int PRI_2031 = 31;
    sbit  PRI_2031_bit at NVIC_IPR5.B31;

sfr far unsigned long   volatile NVIC_IPR6            absolute 0xE000E418;
    const register unsigned short int PRI_2400 = 6;
    sbit  PRI_2400_bit at NVIC_IPR6.B6;
    const register unsigned short int PRI_2401 = 7;
    sbit  PRI_2401_bit at NVIC_IPR6.B7;
    const register unsigned short int PRI_2410 = 14;
    sbit  PRI_2410_bit at NVIC_IPR6.B14;
    const register unsigned short int PRI_2411 = 15;
    sbit  PRI_2411_bit at NVIC_IPR6.B15;
    const register unsigned short int PRI_2420 = 22;
    sbit  PRI_2420_bit at NVIC_IPR6.B22;
    const register unsigned short int PRI_2421 = 23;
    sbit  PRI_2421_bit at NVIC_IPR6.B23;
    const register unsigned short int PRI_2430 = 30;
    sbit  PRI_2430_bit at NVIC_IPR6.B30;
    const register unsigned short int PRI_2431 = 31;
    sbit  PRI_2431_bit at NVIC_IPR6.B31;

sfr far unsigned long   volatile NVIC_IPR7            absolute 0xE000E41C;
    const register unsigned short int PRI_2800 = 6;
    sbit  PRI_2800_bit at NVIC_IPR7.B6;
    const register unsigned short int PRI_2801 = 7;
    sbit  PRI_2801_bit at NVIC_IPR7.B7;
    const register unsigned short int PRI_2810 = 14;
    sbit  PRI_2810_bit at NVIC_IPR7.B14;
    const register unsigned short int PRI_2811 = 15;
    sbit  PRI_2811_bit at NVIC_IPR7.B15;
    const register unsigned short int PRI_2820 = 22;
    sbit  PRI_2820_bit at NVIC_IPR7.B22;
    const register unsigned short int PRI_2821 = 23;
    sbit  PRI_2821_bit at NVIC_IPR7.B23;
    const register unsigned short int PRI_2830 = 30;
    sbit  PRI_2830_bit at NVIC_IPR7.B30;
    const register unsigned short int PRI_2831 = 31;
    sbit  PRI_2831_bit at NVIC_IPR7.B31;

sfr far unsigned long   volatile STK_CSR              absolute 0xE000E010;
    const register unsigned short int COUNTFLAG = 16;
    sbit  COUNTFLAG_bit at STK_CSR.B16;
    const register unsigned short int CLKSOURCE = 2;
    sbit  CLKSOURCE_bit at STK_CSR.B2;
    const register unsigned short int TICKINT = 1;
    sbit  TICKINT_bit at STK_CSR.B1;
    const register unsigned short int ENABLE_ = 0;
    sbit  ENABLE_bit at STK_CSR.B0;

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
    const register unsigned short int NOREF = 31;
    sbit  NOREF_bit at STK_CALIB.B31;
    const register unsigned short int SKEW = 30;
    sbit  SKEW_bit at STK_CALIB.B30;
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

sfr far unsigned long   volatile SCB_CPUID            absolute 0xE000ED00;
    const register unsigned short int IMPLEMENTER0 = 24;
    sbit  IMPLEMENTER0_bit at SCB_CPUID.B24;
    const register unsigned short int IMPLEMENTER1 = 25;
    sbit  IMPLEMENTER1_bit at SCB_CPUID.B25;
    const register unsigned short int IMPLEMENTER2 = 26;
    sbit  IMPLEMENTER2_bit at SCB_CPUID.B26;
    const register unsigned short int IMPLEMENTER3 = 27;
    sbit  IMPLEMENTER3_bit at SCB_CPUID.B27;
    const register unsigned short int IMPLEMENTER4 = 28;
    sbit  IMPLEMENTER4_bit at SCB_CPUID.B28;
    const register unsigned short int IMPLEMENTER5 = 29;
    sbit  IMPLEMENTER5_bit at SCB_CPUID.B29;
    const register unsigned short int IMPLEMENTER6 = 30;
    sbit  IMPLEMENTER6_bit at SCB_CPUID.B30;
    const register unsigned short int IMPLEMENTER7 = 31;
    sbit  IMPLEMENTER7_bit at SCB_CPUID.B31;
    const register unsigned short int VARIANT0 = 20;
    sbit  VARIANT0_bit at SCB_CPUID.B20;
    const register unsigned short int VARIANT1 = 21;
    sbit  VARIANT1_bit at SCB_CPUID.B21;
    const register unsigned short int VARIANT2 = 22;
    sbit  VARIANT2_bit at SCB_CPUID.B22;
    const register unsigned short int VARIANT3 = 23;
    sbit  VARIANT3_bit at SCB_CPUID.B23;
    const register unsigned short int CONSTANT0 = 16;
    sbit  CONSTANT0_bit at SCB_CPUID.B16;
    const register unsigned short int CONSTANT1 = 17;
    sbit  CONSTANT1_bit at SCB_CPUID.B17;
    const register unsigned short int CONSTANT2 = 18;
    sbit  CONSTANT2_bit at SCB_CPUID.B18;
    const register unsigned short int CONSTANT3 = 19;
    sbit  CONSTANT3_bit at SCB_CPUID.B19;
    const register unsigned short int PARTNO0 = 4;
    sbit  PARTNO0_bit at SCB_CPUID.B4;
    const register unsigned short int PARTNO1 = 5;
    sbit  PARTNO1_bit at SCB_CPUID.B5;
    const register unsigned short int PARTNO2 = 6;
    sbit  PARTNO2_bit at SCB_CPUID.B6;
    const register unsigned short int PARTNO3 = 7;
    sbit  PARTNO3_bit at SCB_CPUID.B7;
    const register unsigned short int PARTNO4 = 8;
    sbit  PARTNO4_bit at SCB_CPUID.B8;
    const register unsigned short int PARTNO5 = 9;
    sbit  PARTNO5_bit at SCB_CPUID.B9;
    const register unsigned short int PARTNO6 = 10;
    sbit  PARTNO6_bit at SCB_CPUID.B10;
    const register unsigned short int PARTNO7 = 11;
    sbit  PARTNO7_bit at SCB_CPUID.B11;
    const register unsigned short int PARTNO8 = 12;
    sbit  PARTNO8_bit at SCB_CPUID.B12;
    const register unsigned short int PARTNO9 = 13;
    sbit  PARTNO9_bit at SCB_CPUID.B13;
    const register unsigned short int PARTNO10 = 14;
    sbit  PARTNO10_bit at SCB_CPUID.B14;
    const register unsigned short int PARTNO11 = 15;
    sbit  PARTNO11_bit at SCB_CPUID.B15;
    const register unsigned short int REVISION0 = 0;
    sbit  REVISION0_bit at SCB_CPUID.B0;
    const register unsigned short int REVISION1 = 1;
    sbit  REVISION1_bit at SCB_CPUID.B1;
    const register unsigned short int REVISION2 = 2;
    sbit  REVISION2_bit at SCB_CPUID.B2;
    const register unsigned short int REVISION3 = 3;
    sbit  REVISION3_bit at SCB_CPUID.B3;

sfr far unsigned long   volatile SCB_ICSR             absolute 0xE000ED04;
    const register unsigned short int NMIPENDSET = 31;
    sbit  NMIPENDSET_bit at SCB_ICSR.B31;
    const register unsigned short int PENDSVSET = 28;
    sbit  PENDSVSET_bit at SCB_ICSR.B28;
    const register unsigned short int PENDSVCLR = 27;
    sbit  PENDSVCLR_bit at SCB_ICSR.B27;
    const register unsigned short int PENDSTSET = 26;
    sbit  PENDSTSET_bit at SCB_ICSR.B26;
    const register unsigned short int PENDSTCLR = 25;
    sbit  PENDSTCLR_bit at SCB_ICSR.B25;
    const register unsigned short int ISRPENDING = 22;
    sbit  ISRPENDING_bit at SCB_ICSR.B22;
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

sfr far unsigned long   volatile SCB_AIRCR            absolute 0xE000ED0C;
    const register unsigned short int VECTKEY0 = 16;
    sbit  VECTKEY0_bit at SCB_AIRCR.B16;
    const register unsigned short int VECTKEY1 = 17;
    sbit  VECTKEY1_bit at SCB_AIRCR.B17;
    const register unsigned short int VECTKEY2 = 18;
    sbit  VECTKEY2_bit at SCB_AIRCR.B18;
    const register unsigned short int VECTKEY3 = 19;
    sbit  VECTKEY3_bit at SCB_AIRCR.B19;
    const register unsigned short int VECTKEY4 = 20;
    sbit  VECTKEY4_bit at SCB_AIRCR.B20;
    const register unsigned short int VECTKEY5 = 21;
    sbit  VECTKEY5_bit at SCB_AIRCR.B21;
    const register unsigned short int VECTKEY6 = 22;
    sbit  VECTKEY6_bit at SCB_AIRCR.B22;
    const register unsigned short int VECTKEY7 = 23;
    sbit  VECTKEY7_bit at SCB_AIRCR.B23;
    const register unsigned short int VECTKEY8 = 24;
    sbit  VECTKEY8_bit at SCB_AIRCR.B24;
    const register unsigned short int VECTKEY9 = 25;
    sbit  VECTKEY9_bit at SCB_AIRCR.B25;
    const register unsigned short int VECTKEY10 = 26;
    sbit  VECTKEY10_bit at SCB_AIRCR.B26;
    const register unsigned short int VECTKEY11 = 27;
    sbit  VECTKEY11_bit at SCB_AIRCR.B27;
    const register unsigned short int VECTKEY12 = 28;
    sbit  VECTKEY12_bit at SCB_AIRCR.B28;
    const register unsigned short int VECTKEY13 = 29;
    sbit  VECTKEY13_bit at SCB_AIRCR.B29;
    const register unsigned short int VECTKEY14 = 30;
    sbit  VECTKEY14_bit at SCB_AIRCR.B30;
    const register unsigned short int VECTKEY15 = 31;
    sbit  VECTKEY15_bit at SCB_AIRCR.B31;
    const register unsigned short int ENDIANESS = 15;
    sbit  ENDIANESS_bit at SCB_AIRCR.B15;
    const register unsigned short int SYSRESETREQ = 2;
    sbit  SYSRESETREQ_bit at SCB_AIRCR.B2;
    const register unsigned short int VECTCLRACTIVE = 1;
    sbit  VECTCLRACTIVE_bit at SCB_AIRCR.B1;

sfr far unsigned long   volatile SCB_SCR              absolute 0xE000ED10;
    const register unsigned short int SEVONPEND = 4;
    sbit  SEVONPEND_bit at SCB_SCR.B4;
    const register unsigned short int SLEEPDEEP = 2;
    sbit  SLEEPDEEP_bit at SCB_SCR.B2;
    const register unsigned short int SLEEPONEXIT = 1;
    sbit  SLEEPONEXIT_bit at SCB_SCR.B1;

sfr far unsigned long   volatile SCB_CCR              absolute 0xE000ED14;
    const register unsigned short int STKALIGN = 9;
    sbit  STKALIGN_bit at SCB_CCR.B9;
    const register unsigned short int UNALIGN_TRP = 3;
    sbit  UNALIGN_TRP_bit at SCB_CCR.B3;

sfr far unsigned long   volatile SCB_SHPR2            absolute 0xE000ED1C;
    const register unsigned short int PRI_110 = 24;
    sbit  PRI_110_bit at SCB_SHPR2.B24;
    const register unsigned short int PRI_111 = 25;
    sbit  PRI_111_bit at SCB_SHPR2.B25;
    const register unsigned short int PRI_112 = 26;
    sbit  PRI_112_bit at SCB_SHPR2.B26;
    const register unsigned short int PRI_113 = 27;
    sbit  PRI_113_bit at SCB_SHPR2.B27;
    const register unsigned short int PRI_114 = 28;
    sbit  PRI_114_bit at SCB_SHPR2.B28;
    const register unsigned short int PRI_115 = 29;
    sbit  PRI_115_bit at SCB_SHPR2.B29;
    const register unsigned short int PRI_116 = 30;
    sbit  PRI_116_bit at SCB_SHPR2.B30;
    const register unsigned short int PRI_117 = 31;
    sbit  PRI_117_bit at SCB_SHPR2.B31;

sfr far unsigned long   volatile SCB_SHPR3            absolute 0xE000ED20;
    const register unsigned short int PRI_150 = 24;
    sbit  PRI_150_bit at SCB_SHPR3.B24;
    const register unsigned short int PRI_151 = 25;
    sbit  PRI_151_bit at SCB_SHPR3.B25;
    const register unsigned short int PRI_152 = 26;
    sbit  PRI_152_bit at SCB_SHPR3.B26;
    const register unsigned short int PRI_153 = 27;
    sbit  PRI_153_bit at SCB_SHPR3.B27;
    const register unsigned short int PRI_154 = 28;
    sbit  PRI_154_bit at SCB_SHPR3.B28;
    const register unsigned short int PRI_155 = 29;
    sbit  PRI_155_bit at SCB_SHPR3.B29;
    const register unsigned short int PRI_156 = 30;
    sbit  PRI_156_bit at SCB_SHPR3.B30;
    const register unsigned short int PRI_157 = 31;
    sbit  PRI_157_bit at SCB_SHPR3.B31;
    const register unsigned short int PRI_140 = 16;
    sbit  PRI_140_bit at SCB_SHPR3.B16;
    const register unsigned short int PRI_141 = 17;
    sbit  PRI_141_bit at SCB_SHPR3.B17;
    const register unsigned short int PRI_142 = 18;
    sbit  PRI_142_bit at SCB_SHPR3.B18;
    const register unsigned short int PRI_143 = 19;
    sbit  PRI_143_bit at SCB_SHPR3.B19;
    const register unsigned short int PRI_144 = 20;
    sbit  PRI_144_bit at SCB_SHPR3.B20;
    const register unsigned short int PRI_145 = 21;
    sbit  PRI_145_bit at SCB_SHPR3.B21;
    const register unsigned short int PRI_146 = 22;
    sbit  PRI_146_bit at SCB_SHPR3.B22;
    const register unsigned short int PRI_147 = 23;
    sbit  PRI_147_bit at SCB_SHPR3.B23;

sfr unsigned long   volatile DMA_ISR              absolute 0x40020000;
    const register unsigned short int GIF1 = 0;
    sbit  GIF1_bit at DMA_ISR.B0;
    const register unsigned short int TCIF1 = 1;
    sbit  TCIF1_bit at DMA_ISR.B1;
    const register unsigned short int HTIF1 = 2;
    sbit  HTIF1_bit at DMA_ISR.B2;
    const register unsigned short int TEIF1 = 3;
    sbit  TEIF1_bit at DMA_ISR.B3;
    const register unsigned short int GIF2 = 4;
    sbit  GIF2_bit at DMA_ISR.B4;
    const register unsigned short int TCIF2 = 5;
    sbit  TCIF2_bit at DMA_ISR.B5;
    const register unsigned short int HTIF2 = 6;
    sbit  HTIF2_bit at DMA_ISR.B6;
    const register unsigned short int TEIF2 = 7;
    sbit  TEIF2_bit at DMA_ISR.B7;
    const register unsigned short int GIF3 = 8;
    sbit  GIF3_bit at DMA_ISR.B8;
    const register unsigned short int TCIF3 = 9;
    sbit  TCIF3_bit at DMA_ISR.B9;
    const register unsigned short int HTIF3 = 10;
    sbit  HTIF3_bit at DMA_ISR.B10;
    const register unsigned short int TEIF3 = 11;
    sbit  TEIF3_bit at DMA_ISR.B11;
    const register unsigned short int GIF4 = 12;
    sbit  GIF4_bit at DMA_ISR.B12;
    const register unsigned short int TCIF4 = 13;
    sbit  TCIF4_bit at DMA_ISR.B13;
    const register unsigned short int HTIF4 = 14;
    sbit  HTIF4_bit at DMA_ISR.B14;
    const register unsigned short int TEIF4 = 15;
    sbit  TEIF4_bit at DMA_ISR.B15;
    const register unsigned short int GIF5 = 16;
    sbit  GIF5_bit at DMA_ISR.B16;
    const register unsigned short int TCIF5 = 17;
    sbit  TCIF5_bit at DMA_ISR.B17;
    const register unsigned short int HTIF5 = 18;
    sbit  HTIF5_bit at DMA_ISR.B18;
    const register unsigned short int TEIF5 = 19;
    sbit  TEIF5_bit at DMA_ISR.B19;
    const register unsigned short int GIF6 = 20;
    sbit  GIF6_bit at DMA_ISR.B20;
    const register unsigned short int TCIF6 = 21;
    sbit  TCIF6_bit at DMA_ISR.B21;
    const register unsigned short int HTIF6 = 22;
    sbit  HTIF6_bit at DMA_ISR.B22;
    const register unsigned short int TEIF6 = 23;
    sbit  TEIF6_bit at DMA_ISR.B23;
    const register unsigned short int GIF7 = 24;
    sbit  GIF7_bit at DMA_ISR.B24;
    const register unsigned short int TCIF7 = 25;
    sbit  TCIF7_bit at DMA_ISR.B25;
    const register unsigned short int HTIF7 = 26;
    sbit  HTIF7_bit at DMA_ISR.B26;
    const register unsigned short int TEIF7 = 27;
    sbit  TEIF7_bit at DMA_ISR.B27;

sfr unsigned long   volatile DMA_IFCR             absolute 0x40020004;
    const register unsigned short int CGIF1 = 0;
    sbit  CGIF1_bit at DMA_IFCR.B0;
    const register unsigned short int CTCIF1 = 1;
    sbit  CTCIF1_bit at DMA_IFCR.B1;
    const register unsigned short int CHTIF1 = 2;
    sbit  CHTIF1_bit at DMA_IFCR.B2;
    const register unsigned short int CTEIF1 = 3;
    sbit  CTEIF1_bit at DMA_IFCR.B3;
    const register unsigned short int CGIF2 = 4;
    sbit  CGIF2_bit at DMA_IFCR.B4;
    const register unsigned short int CTCIF2 = 5;
    sbit  CTCIF2_bit at DMA_IFCR.B5;
    const register unsigned short int CHTIF2 = 6;
    sbit  CHTIF2_bit at DMA_IFCR.B6;
    const register unsigned short int CTEIF2 = 7;
    sbit  CTEIF2_bit at DMA_IFCR.B7;
    const register unsigned short int CGIF3 = 8;
    sbit  CGIF3_bit at DMA_IFCR.B8;
    const register unsigned short int CTCIF3 = 9;
    sbit  CTCIF3_bit at DMA_IFCR.B9;
    const register unsigned short int CHTIF3 = 10;
    sbit  CHTIF3_bit at DMA_IFCR.B10;
    const register unsigned short int CTEIF3 = 11;
    sbit  CTEIF3_bit at DMA_IFCR.B11;
    const register unsigned short int CGIF4 = 12;
    sbit  CGIF4_bit at DMA_IFCR.B12;
    const register unsigned short int CTCIF4 = 13;
    sbit  CTCIF4_bit at DMA_IFCR.B13;
    const register unsigned short int CHTIF4 = 14;
    sbit  CHTIF4_bit at DMA_IFCR.B14;
    const register unsigned short int CTEIF4 = 15;
    sbit  CTEIF4_bit at DMA_IFCR.B15;
    const register unsigned short int CGIF5 = 16;
    sbit  CGIF5_bit at DMA_IFCR.B16;
    const register unsigned short int CTCIF5 = 17;
    sbit  CTCIF5_bit at DMA_IFCR.B17;
    const register unsigned short int CHTIF5 = 18;
    sbit  CHTIF5_bit at DMA_IFCR.B18;
    const register unsigned short int CTEIF5 = 19;
    sbit  CTEIF5_bit at DMA_IFCR.B19;
    const register unsigned short int CGIF6 = 20;
    sbit  CGIF6_bit at DMA_IFCR.B20;
    const register unsigned short int CTCIF6 = 21;
    sbit  CTCIF6_bit at DMA_IFCR.B21;
    const register unsigned short int CHTIF6 = 22;
    sbit  CHTIF6_bit at DMA_IFCR.B22;
    const register unsigned short int CTEIF6 = 23;
    sbit  CTEIF6_bit at DMA_IFCR.B23;
    const register unsigned short int CGIF7 = 24;
    sbit  CGIF7_bit at DMA_IFCR.B24;
    const register unsigned short int CTCIF7 = 25;
    sbit  CTCIF7_bit at DMA_IFCR.B25;
    const register unsigned short int CHTIF7 = 26;
    sbit  CHTIF7_bit at DMA_IFCR.B26;
    const register unsigned short int CTEIF7 = 27;
    sbit  CTEIF7_bit at DMA_IFCR.B27;

sfr unsigned long   volatile DMA_CCR1             absolute 0x40020008;
    const register unsigned short int EN = 0;
    sbit  EN_bit at DMA_CCR1.B0;
    sbit  TCIE_DMA_CCR1_bit at DMA_CCR1.B1;
    const register unsigned short int HTIE = 2;
    sbit  HTIE_bit at DMA_CCR1.B2;
    const register unsigned short int TEIE = 3;
    sbit  TEIE_bit at DMA_CCR1.B3;
    sbit  DIR_DMA_CCR1_bit at DMA_CCR1.B4;
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

sfr unsigned long   volatile DMA_CCR6             absolute 0x4002006C;
    sbit  EN_DMA_CCR6_bit at DMA_CCR6.B0;
    sbit  TCIE_DMA_CCR6_bit at DMA_CCR6.B1;
    sbit  HTIE_DMA_CCR6_bit at DMA_CCR6.B2;
    sbit  TEIE_DMA_CCR6_bit at DMA_CCR6.B3;
    sbit  DIR_DMA_CCR6_bit at DMA_CCR6.B4;
    sbit  CIRC_DMA_CCR6_bit at DMA_CCR6.B5;
    sbit  PINC_DMA_CCR6_bit at DMA_CCR6.B6;
    sbit  MINC_DMA_CCR6_bit at DMA_CCR6.B7;
    sbit  PSIZE0_DMA_CCR6_bit at DMA_CCR6.B8;
    sbit  PSIZE1_DMA_CCR6_bit at DMA_CCR6.B9;
    sbit  MSIZE0_DMA_CCR6_bit at DMA_CCR6.B10;
    sbit  MSIZE1_DMA_CCR6_bit at DMA_CCR6.B11;
    sbit  PL0_DMA_CCR6_bit at DMA_CCR6.B12;
    sbit  PL1_DMA_CCR6_bit at DMA_CCR6.B13;
    sbit  MEM2MEM_DMA_CCR6_bit at DMA_CCR6.B14;

sfr unsigned long   volatile DMA_CNDTR6           absolute 0x40020070;
    sbit  NDT0_DMA_CNDTR6_bit at DMA_CNDTR6.B0;
    sbit  NDT1_DMA_CNDTR6_bit at DMA_CNDTR6.B1;
    sbit  NDT2_DMA_CNDTR6_bit at DMA_CNDTR6.B2;
    sbit  NDT3_DMA_CNDTR6_bit at DMA_CNDTR6.B3;
    sbit  NDT4_DMA_CNDTR6_bit at DMA_CNDTR6.B4;
    sbit  NDT5_DMA_CNDTR6_bit at DMA_CNDTR6.B5;
    sbit  NDT6_DMA_CNDTR6_bit at DMA_CNDTR6.B6;
    sbit  NDT7_DMA_CNDTR6_bit at DMA_CNDTR6.B7;
    sbit  NDT8_DMA_CNDTR6_bit at DMA_CNDTR6.B8;
    sbit  NDT9_DMA_CNDTR6_bit at DMA_CNDTR6.B9;
    sbit  NDT10_DMA_CNDTR6_bit at DMA_CNDTR6.B10;
    sbit  NDT11_DMA_CNDTR6_bit at DMA_CNDTR6.B11;
    sbit  NDT12_DMA_CNDTR6_bit at DMA_CNDTR6.B12;
    sbit  NDT13_DMA_CNDTR6_bit at DMA_CNDTR6.B13;
    sbit  NDT14_DMA_CNDTR6_bit at DMA_CNDTR6.B14;
    sbit  NDT15_DMA_CNDTR6_bit at DMA_CNDTR6.B15;

sfr unsigned long   volatile DMA_CPAR6            absolute 0x40020074;
    sbit  PA0_DMA_CPAR6_bit at DMA_CPAR6.B0;
    sbit  PA1_DMA_CPAR6_bit at DMA_CPAR6.B1;
    sbit  PA2_DMA_CPAR6_bit at DMA_CPAR6.B2;
    sbit  PA3_DMA_CPAR6_bit at DMA_CPAR6.B3;
    sbit  PA4_DMA_CPAR6_bit at DMA_CPAR6.B4;
    sbit  PA5_DMA_CPAR6_bit at DMA_CPAR6.B5;
    sbit  PA6_DMA_CPAR6_bit at DMA_CPAR6.B6;
    sbit  PA7_DMA_CPAR6_bit at DMA_CPAR6.B7;
    sbit  PA8_DMA_CPAR6_bit at DMA_CPAR6.B8;
    sbit  PA9_DMA_CPAR6_bit at DMA_CPAR6.B9;
    sbit  PA10_DMA_CPAR6_bit at DMA_CPAR6.B10;
    sbit  PA11_DMA_CPAR6_bit at DMA_CPAR6.B11;
    sbit  PA12_DMA_CPAR6_bit at DMA_CPAR6.B12;
    sbit  PA13_DMA_CPAR6_bit at DMA_CPAR6.B13;
    sbit  PA14_DMA_CPAR6_bit at DMA_CPAR6.B14;
    sbit  PA15_DMA_CPAR6_bit at DMA_CPAR6.B15;
    sbit  PA16_DMA_CPAR6_bit at DMA_CPAR6.B16;
    sbit  PA17_DMA_CPAR6_bit at DMA_CPAR6.B17;
    sbit  PA18_DMA_CPAR6_bit at DMA_CPAR6.B18;
    sbit  PA19_DMA_CPAR6_bit at DMA_CPAR6.B19;
    sbit  PA20_DMA_CPAR6_bit at DMA_CPAR6.B20;
    sbit  PA21_DMA_CPAR6_bit at DMA_CPAR6.B21;
    sbit  PA22_DMA_CPAR6_bit at DMA_CPAR6.B22;
    sbit  PA23_DMA_CPAR6_bit at DMA_CPAR6.B23;
    sbit  PA24_DMA_CPAR6_bit at DMA_CPAR6.B24;
    sbit  PA25_DMA_CPAR6_bit at DMA_CPAR6.B25;
    sbit  PA26_DMA_CPAR6_bit at DMA_CPAR6.B26;
    sbit  PA27_DMA_CPAR6_bit at DMA_CPAR6.B27;
    sbit  PA28_DMA_CPAR6_bit at DMA_CPAR6.B28;
    sbit  PA29_DMA_CPAR6_bit at DMA_CPAR6.B29;
    sbit  PA30_DMA_CPAR6_bit at DMA_CPAR6.B30;
    sbit  PA31_DMA_CPAR6_bit at DMA_CPAR6.B31;

sfr unsigned long   volatile DMA_CMAR6            absolute 0x40020078;
    sbit  MA0_DMA_CMAR6_bit at DMA_CMAR6.B0;
    sbit  MA1_DMA_CMAR6_bit at DMA_CMAR6.B1;
    sbit  MA2_DMA_CMAR6_bit at DMA_CMAR6.B2;
    sbit  MA3_DMA_CMAR6_bit at DMA_CMAR6.B3;
    sbit  MA4_DMA_CMAR6_bit at DMA_CMAR6.B4;
    sbit  MA5_DMA_CMAR6_bit at DMA_CMAR6.B5;
    sbit  MA6_DMA_CMAR6_bit at DMA_CMAR6.B6;
    sbit  MA7_DMA_CMAR6_bit at DMA_CMAR6.B7;
    sbit  MA8_DMA_CMAR6_bit at DMA_CMAR6.B8;
    sbit  MA9_DMA_CMAR6_bit at DMA_CMAR6.B9;
    sbit  MA10_DMA_CMAR6_bit at DMA_CMAR6.B10;
    sbit  MA11_DMA_CMAR6_bit at DMA_CMAR6.B11;
    sbit  MA12_DMA_CMAR6_bit at DMA_CMAR6.B12;
    sbit  MA13_DMA_CMAR6_bit at DMA_CMAR6.B13;
    sbit  MA14_DMA_CMAR6_bit at DMA_CMAR6.B14;
    sbit  MA15_DMA_CMAR6_bit at DMA_CMAR6.B15;
    sbit  MA16_DMA_CMAR6_bit at DMA_CMAR6.B16;
    sbit  MA17_DMA_CMAR6_bit at DMA_CMAR6.B17;
    sbit  MA18_DMA_CMAR6_bit at DMA_CMAR6.B18;
    sbit  MA19_DMA_CMAR6_bit at DMA_CMAR6.B19;
    sbit  MA20_DMA_CMAR6_bit at DMA_CMAR6.B20;
    sbit  MA21_DMA_CMAR6_bit at DMA_CMAR6.B21;
    sbit  MA22_DMA_CMAR6_bit at DMA_CMAR6.B22;
    sbit  MA23_DMA_CMAR6_bit at DMA_CMAR6.B23;
    sbit  MA24_DMA_CMAR6_bit at DMA_CMAR6.B24;
    sbit  MA25_DMA_CMAR6_bit at DMA_CMAR6.B25;
    sbit  MA26_DMA_CMAR6_bit at DMA_CMAR6.B26;
    sbit  MA27_DMA_CMAR6_bit at DMA_CMAR6.B27;
    sbit  MA28_DMA_CMAR6_bit at DMA_CMAR6.B28;
    sbit  MA29_DMA_CMAR6_bit at DMA_CMAR6.B29;
    sbit  MA30_DMA_CMAR6_bit at DMA_CMAR6.B30;
    sbit  MA31_DMA_CMAR6_bit at DMA_CMAR6.B31;

sfr unsigned long   volatile DMA_CCR7             absolute 0x40020080;
    sbit  EN_DMA_CCR7_bit at DMA_CCR7.B0;
    sbit  TCIE_DMA_CCR7_bit at DMA_CCR7.B1;
    sbit  HTIE_DMA_CCR7_bit at DMA_CCR7.B2;
    sbit  TEIE_DMA_CCR7_bit at DMA_CCR7.B3;
    sbit  DIR_DMA_CCR7_bit at DMA_CCR7.B4;
    sbit  CIRC_DMA_CCR7_bit at DMA_CCR7.B5;
    sbit  PINC_DMA_CCR7_bit at DMA_CCR7.B6;
    sbit  MINC_DMA_CCR7_bit at DMA_CCR7.B7;
    sbit  PSIZE0_DMA_CCR7_bit at DMA_CCR7.B8;
    sbit  PSIZE1_DMA_CCR7_bit at DMA_CCR7.B9;
    sbit  MSIZE0_DMA_CCR7_bit at DMA_CCR7.B10;
    sbit  MSIZE1_DMA_CCR7_bit at DMA_CCR7.B11;
    sbit  PL0_DMA_CCR7_bit at DMA_CCR7.B12;
    sbit  PL1_DMA_CCR7_bit at DMA_CCR7.B13;
    sbit  MEM2MEM_DMA_CCR7_bit at DMA_CCR7.B14;

sfr unsigned long   volatile DMA_CNDTR7           absolute 0x40020084;
    sbit  NDT0_DMA_CNDTR7_bit at DMA_CNDTR7.B0;
    sbit  NDT1_DMA_CNDTR7_bit at DMA_CNDTR7.B1;
    sbit  NDT2_DMA_CNDTR7_bit at DMA_CNDTR7.B2;
    sbit  NDT3_DMA_CNDTR7_bit at DMA_CNDTR7.B3;
    sbit  NDT4_DMA_CNDTR7_bit at DMA_CNDTR7.B4;
    sbit  NDT5_DMA_CNDTR7_bit at DMA_CNDTR7.B5;
    sbit  NDT6_DMA_CNDTR7_bit at DMA_CNDTR7.B6;
    sbit  NDT7_DMA_CNDTR7_bit at DMA_CNDTR7.B7;
    sbit  NDT8_DMA_CNDTR7_bit at DMA_CNDTR7.B8;
    sbit  NDT9_DMA_CNDTR7_bit at DMA_CNDTR7.B9;
    sbit  NDT10_DMA_CNDTR7_bit at DMA_CNDTR7.B10;
    sbit  NDT11_DMA_CNDTR7_bit at DMA_CNDTR7.B11;
    sbit  NDT12_DMA_CNDTR7_bit at DMA_CNDTR7.B12;
    sbit  NDT13_DMA_CNDTR7_bit at DMA_CNDTR7.B13;
    sbit  NDT14_DMA_CNDTR7_bit at DMA_CNDTR7.B14;
    sbit  NDT15_DMA_CNDTR7_bit at DMA_CNDTR7.B15;

sfr unsigned long   volatile DMA_CPAR7            absolute 0x40020088;
    sbit  PA0_DMA_CPAR7_bit at DMA_CPAR7.B0;
    sbit  PA1_DMA_CPAR7_bit at DMA_CPAR7.B1;
    sbit  PA2_DMA_CPAR7_bit at DMA_CPAR7.B2;
    sbit  PA3_DMA_CPAR7_bit at DMA_CPAR7.B3;
    sbit  PA4_DMA_CPAR7_bit at DMA_CPAR7.B4;
    sbit  PA5_DMA_CPAR7_bit at DMA_CPAR7.B5;
    sbit  PA6_DMA_CPAR7_bit at DMA_CPAR7.B6;
    sbit  PA7_DMA_CPAR7_bit at DMA_CPAR7.B7;
    sbit  PA8_DMA_CPAR7_bit at DMA_CPAR7.B8;
    sbit  PA9_DMA_CPAR7_bit at DMA_CPAR7.B9;
    sbit  PA10_DMA_CPAR7_bit at DMA_CPAR7.B10;
    sbit  PA11_DMA_CPAR7_bit at DMA_CPAR7.B11;
    sbit  PA12_DMA_CPAR7_bit at DMA_CPAR7.B12;
    sbit  PA13_DMA_CPAR7_bit at DMA_CPAR7.B13;
    sbit  PA14_DMA_CPAR7_bit at DMA_CPAR7.B14;
    sbit  PA15_DMA_CPAR7_bit at DMA_CPAR7.B15;
    sbit  PA16_DMA_CPAR7_bit at DMA_CPAR7.B16;
    sbit  PA17_DMA_CPAR7_bit at DMA_CPAR7.B17;
    sbit  PA18_DMA_CPAR7_bit at DMA_CPAR7.B18;
    sbit  PA19_DMA_CPAR7_bit at DMA_CPAR7.B19;
    sbit  PA20_DMA_CPAR7_bit at DMA_CPAR7.B20;
    sbit  PA21_DMA_CPAR7_bit at DMA_CPAR7.B21;
    sbit  PA22_DMA_CPAR7_bit at DMA_CPAR7.B22;
    sbit  PA23_DMA_CPAR7_bit at DMA_CPAR7.B23;
    sbit  PA24_DMA_CPAR7_bit at DMA_CPAR7.B24;
    sbit  PA25_DMA_CPAR7_bit at DMA_CPAR7.B25;
    sbit  PA26_DMA_CPAR7_bit at DMA_CPAR7.B26;
    sbit  PA27_DMA_CPAR7_bit at DMA_CPAR7.B27;
    sbit  PA28_DMA_CPAR7_bit at DMA_CPAR7.B28;
    sbit  PA29_DMA_CPAR7_bit at DMA_CPAR7.B29;
    sbit  PA30_DMA_CPAR7_bit at DMA_CPAR7.B30;
    sbit  PA31_DMA_CPAR7_bit at DMA_CPAR7.B31;

sfr unsigned long   volatile DMA_CMAR7            absolute 0x4002008C;
    sbit  MA0_DMA_CMAR7_bit at DMA_CMAR7.B0;
    sbit  MA1_DMA_CMAR7_bit at DMA_CMAR7.B1;
    sbit  MA2_DMA_CMAR7_bit at DMA_CMAR7.B2;
    sbit  MA3_DMA_CMAR7_bit at DMA_CMAR7.B3;
    sbit  MA4_DMA_CMAR7_bit at DMA_CMAR7.B4;
    sbit  MA5_DMA_CMAR7_bit at DMA_CMAR7.B5;
    sbit  MA6_DMA_CMAR7_bit at DMA_CMAR7.B6;
    sbit  MA7_DMA_CMAR7_bit at DMA_CMAR7.B7;
    sbit  MA8_DMA_CMAR7_bit at DMA_CMAR7.B8;
    sbit  MA9_DMA_CMAR7_bit at DMA_CMAR7.B9;
    sbit  MA10_DMA_CMAR7_bit at DMA_CMAR7.B10;
    sbit  MA11_DMA_CMAR7_bit at DMA_CMAR7.B11;
    sbit  MA12_DMA_CMAR7_bit at DMA_CMAR7.B12;
    sbit  MA13_DMA_CMAR7_bit at DMA_CMAR7.B13;
    sbit  MA14_DMA_CMAR7_bit at DMA_CMAR7.B14;
    sbit  MA15_DMA_CMAR7_bit at DMA_CMAR7.B15;
    sbit  MA16_DMA_CMAR7_bit at DMA_CMAR7.B16;
    sbit  MA17_DMA_CMAR7_bit at DMA_CMAR7.B17;
    sbit  MA18_DMA_CMAR7_bit at DMA_CMAR7.B18;
    sbit  MA19_DMA_CMAR7_bit at DMA_CMAR7.B19;
    sbit  MA20_DMA_CMAR7_bit at DMA_CMAR7.B20;
    sbit  MA21_DMA_CMAR7_bit at DMA_CMAR7.B21;
    sbit  MA22_DMA_CMAR7_bit at DMA_CMAR7.B22;
    sbit  MA23_DMA_CMAR7_bit at DMA_CMAR7.B23;
    sbit  MA24_DMA_CMAR7_bit at DMA_CMAR7.B24;
    sbit  MA25_DMA_CMAR7_bit at DMA_CMAR7.B25;
    sbit  MA26_DMA_CMAR7_bit at DMA_CMAR7.B26;
    sbit  MA27_DMA_CMAR7_bit at DMA_CMAR7.B27;
    sbit  MA28_DMA_CMAR7_bit at DMA_CMAR7.B28;
    sbit  MA29_DMA_CMAR7_bit at DMA_CMAR7.B29;
    sbit  MA30_DMA_CMAR7_bit at DMA_CMAR7.B30;
    sbit  MA31_DMA_CMAR7_bit at DMA_CMAR7.B31;

sfr unsigned long   volatile RCC_CR               absolute 0x40021000;
    const register unsigned short int HSION = 0;
    sbit  HSION_bit at RCC_CR.B0;
    const register unsigned short int HSIRDY = 1;
    sbit  HSIRDY_bit at RCC_CR.B1;
    const register unsigned short int HSITRIM0 = 3;
    sbit  HSITRIM0_bit at RCC_CR.B3;
    const register unsigned short int HSITRIM1 = 4;
    sbit  HSITRIM1_bit at RCC_CR.B4;
    const register unsigned short int HSITRIM2 = 5;
    sbit  HSITRIM2_bit at RCC_CR.B5;
    const register unsigned short int HSITRIM3 = 6;
    sbit  HSITRIM3_bit at RCC_CR.B6;
    const register unsigned short int HSITRIM4 = 7;
    sbit  HSITRIM4_bit at RCC_CR.B7;
    const register unsigned short int HSICAL0 = 8;
    sbit  HSICAL0_bit at RCC_CR.B8;
    const register unsigned short int HSICAL1 = 9;
    sbit  HSICAL1_bit at RCC_CR.B9;
    const register unsigned short int HSICAL2 = 10;
    sbit  HSICAL2_bit at RCC_CR.B10;
    const register unsigned short int HSICAL3 = 11;
    sbit  HSICAL3_bit at RCC_CR.B11;
    const register unsigned short int HSICAL4 = 12;
    sbit  HSICAL4_bit at RCC_CR.B12;
    const register unsigned short int HSICAL5 = 13;
    sbit  HSICAL5_bit at RCC_CR.B13;
    const register unsigned short int HSICAL6 = 14;
    sbit  HSICAL6_bit at RCC_CR.B14;
    const register unsigned short int HSICAL7 = 15;
    sbit  HSICAL7_bit at RCC_CR.B15;
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

sfr unsigned long   volatile RCC_CFGR             absolute 0x40021004;
    const register unsigned short int SW0 = 0;
    sbit  SW0_bit at RCC_CFGR.B0;
    const register unsigned short int SW1 = 1;
    sbit  SW1_bit at RCC_CFGR.B1;
    const register unsigned short int SWS0 = 2;
    sbit  SWS0_bit at RCC_CFGR.B2;
    const register unsigned short int SWS1 = 3;
    sbit  SWS1_bit at RCC_CFGR.B3;
    const register unsigned short int HPRE0 = 4;
    sbit  HPRE0_bit at RCC_CFGR.B4;
    const register unsigned short int HPRE1 = 5;
    sbit  HPRE1_bit at RCC_CFGR.B5;
    const register unsigned short int HPRE2 = 6;
    sbit  HPRE2_bit at RCC_CFGR.B6;
    const register unsigned short int HPRE3 = 7;
    sbit  HPRE3_bit at RCC_CFGR.B7;
    const register unsigned short int PPRE0 = 8;
    sbit  PPRE0_bit at RCC_CFGR.B8;
    const register unsigned short int PPRE1 = 9;
    sbit  PPRE1_bit at RCC_CFGR.B9;
    const register unsigned short int PPRE2 = 10;
    sbit  PPRE2_bit at RCC_CFGR.B10;
    const register unsigned short int ADCPRE = 14;
    sbit  ADCPRE_bit at RCC_CFGR.B14;
    const register unsigned short int PLLSRC0 = 15;
    sbit  PLLSRC0_bit at RCC_CFGR.B15;
    const register unsigned short int PLLSRC1 = 16;
    sbit  PLLSRC1_bit at RCC_CFGR.B16;
    const register unsigned short int PLLXTPRE = 17;
    sbit  PLLXTPRE_bit at RCC_CFGR.B17;
    const register unsigned short int PLLMUL0 = 18;
    sbit  PLLMUL0_bit at RCC_CFGR.B18;
    const register unsigned short int PLLMUL1 = 19;
    sbit  PLLMUL1_bit at RCC_CFGR.B19;
    const register unsigned short int PLLMUL2 = 20;
    sbit  PLLMUL2_bit at RCC_CFGR.B20;
    const register unsigned short int PLLMUL3 = 21;
    sbit  PLLMUL3_bit at RCC_CFGR.B21;
    const register unsigned short int MCO0 = 24;
    sbit  MCO0_bit at RCC_CFGR.B24;
    const register unsigned short int MCO1 = 25;
    sbit  MCO1_bit at RCC_CFGR.B25;
    const register unsigned short int MCO2 = 26;
    sbit  MCO2_bit at RCC_CFGR.B26;
    const register unsigned short int MCOPRE0 = 28;
    sbit  MCOPRE0_bit at RCC_CFGR.B28;
    const register unsigned short int MCOPRE1 = 29;
    sbit  MCOPRE1_bit at RCC_CFGR.B29;
    const register unsigned short int MCOPRE2 = 30;
    sbit  MCOPRE2_bit at RCC_CFGR.B30;
    const register unsigned short int PLLNODIV = 31;
    sbit  PLLNODIV_bit at RCC_CFGR.B31;

sfr unsigned long   volatile RCC_CIR              absolute 0x40021008;
    const register unsigned short int LSIRDYF = 0;
    sbit  LSIRDYF_bit at RCC_CIR.B0;
    const register unsigned short int LSERDYF = 1;
    sbit  LSERDYF_bit at RCC_CIR.B1;
    const register unsigned short int HSIRDYF = 2;
    sbit  HSIRDYF_bit at RCC_CIR.B2;
    const register unsigned short int HSERDYF = 3;
    sbit  HSERDYF_bit at RCC_CIR.B3;
    const register unsigned short int PLLRDYF = 4;
    sbit  PLLRDYF_bit at RCC_CIR.B4;
    const register unsigned short int HSI14RDYF = 5;
    sbit  HSI14RDYF_bit at RCC_CIR.B5;
    const register unsigned short int HSI48RDYF = 6;
    sbit  HSI48RDYF_bit at RCC_CIR.B6;
    const register unsigned short int CSSF = 7;
    sbit  CSSF_bit at RCC_CIR.B7;
    const register unsigned short int LSIRDYIE = 8;
    sbit  LSIRDYIE_bit at RCC_CIR.B8;
    const register unsigned short int LSERDYIE = 9;
    sbit  LSERDYIE_bit at RCC_CIR.B9;
    const register unsigned short int HSIRDYIE = 10;
    sbit  HSIRDYIE_bit at RCC_CIR.B10;
    const register unsigned short int HSERDYIE = 11;
    sbit  HSERDYIE_bit at RCC_CIR.B11;
    const register unsigned short int PLLRDYIE = 12;
    sbit  PLLRDYIE_bit at RCC_CIR.B12;
    const register unsigned short int HSI14RDYE = 13;
    sbit  HSI14RDYE_bit at RCC_CIR.B13;
    const register unsigned short int HSI48RDYIE = 14;
    sbit  HSI48RDYIE_bit at RCC_CIR.B14;
    const register unsigned short int LSIRDYC = 16;
    sbit  LSIRDYC_bit at RCC_CIR.B16;
    const register unsigned short int LSERDYC = 17;
    sbit  LSERDYC_bit at RCC_CIR.B17;
    const register unsigned short int HSIRDYC = 18;
    sbit  HSIRDYC_bit at RCC_CIR.B18;
    const register unsigned short int HSERDYC = 19;
    sbit  HSERDYC_bit at RCC_CIR.B19;
    const register unsigned short int PLLRDYC = 20;
    sbit  PLLRDYC_bit at RCC_CIR.B20;
    const register unsigned short int HSI14RDYC = 21;
    sbit  HSI14RDYC_bit at RCC_CIR.B21;
    const register unsigned short int HSI48RDYC = 22;
    sbit  HSI48RDYC_bit at RCC_CIR.B22;
    const register unsigned short int CSSC = 23;
    sbit  CSSC_bit at RCC_CIR.B23;

sfr unsigned long   volatile RCC_APB2RSTR         absolute 0x4002100C;
    const register unsigned short int SYSCFGRST = 0;
    sbit  SYSCFGRST_bit at RCC_APB2RSTR.B0;
    const register unsigned short int ADCRST = 9;
    sbit  ADCRST_bit at RCC_APB2RSTR.B9;
    const register unsigned short int TIM1RST = 11;
    sbit  TIM1RST_bit at RCC_APB2RSTR.B11;
    const register unsigned short int SPI1RST = 12;
    sbit  SPI1RST_bit at RCC_APB2RSTR.B12;
    const register unsigned short int USART1RST = 14;
    sbit  USART1RST_bit at RCC_APB2RSTR.B14;
    const register unsigned short int TIM16RST = 17;
    sbit  TIM16RST_bit at RCC_APB2RSTR.B17;
    const register unsigned short int TIM17RST = 18;
    sbit  TIM17RST_bit at RCC_APB2RSTR.B18;
    const register unsigned short int DBGMCURST = 22;
    sbit  DBGMCURST_bit at RCC_APB2RSTR.B22;

sfr unsigned long   volatile RCC_APB1RSTR         absolute 0x40021010;
    const register unsigned short int TIM2RST = 0;
    sbit  TIM2RST_bit at RCC_APB1RSTR.B0;
    const register unsigned short int TIM3RST = 1;
    sbit  TIM3RST_bit at RCC_APB1RSTR.B1;
    const register unsigned short int TIM14RST = 8;
    sbit  TIM14RST_bit at RCC_APB1RSTR.B8;
    const register unsigned short int WWDGRST = 11;
    sbit  WWDGRST_bit at RCC_APB1RSTR.B11;
    const register unsigned short int SPI2RST = 14;
    sbit  SPI2RST_bit at RCC_APB1RSTR.B14;
    const register unsigned short int USART2RST = 17;
    sbit  USART2RST_bit at RCC_APB1RSTR.B17;
    const register unsigned short int I2C1RST = 21;
    sbit  I2C1RST_bit at RCC_APB1RSTR.B21;
    const register unsigned short int USBRST = 23;
    sbit  USBRST_bit at RCC_APB1RSTR.B23;
    const register unsigned short int CANRST = 25;
    sbit  CANRST_bit at RCC_APB1RSTR.B25;
    const register unsigned short int CRSRST = 27;
    sbit  CRSRST_bit at RCC_APB1RSTR.B27;
    const register unsigned short int PWRRST = 28;
    sbit  PWRRST_bit at RCC_APB1RSTR.B28;
    const register unsigned short int CECRST = 30;
    sbit  CECRST_bit at RCC_APB1RSTR.B30;

sfr unsigned long   volatile RCC_AHBENR           absolute 0x40021014;
    const register unsigned short int DMAEN = 0;
    sbit  DMAEN_bit at RCC_AHBENR.B0;
    const register unsigned short int SRAMEN = 2;
    sbit  SRAMEN_bit at RCC_AHBENR.B2;
    const register unsigned short int FLITFEN = 4;
    sbit  FLITFEN_bit at RCC_AHBENR.B4;
    sbit  CRCEN_RCC_AHBENR_bit at RCC_AHBENR.B6;
    const register unsigned short int IOPAEN = 17;
    sbit  IOPAEN_bit at RCC_AHBENR.B17;
    const register unsigned short int IOPBEN = 18;
    sbit  IOPBEN_bit at RCC_AHBENR.B18;
    const register unsigned short int IOPCEN = 19;
    sbit  IOPCEN_bit at RCC_AHBENR.B19;
    const register unsigned short int IOPFEN = 22;
    sbit  IOPFEN_bit at RCC_AHBENR.B22;
    const register unsigned short int TSCEN = 24;
    sbit  TSCEN_bit at RCC_AHBENR.B24;

sfr unsigned long   volatile RCC_APB2ENR          absolute 0x40021018;
    const register unsigned short int SYSCFGEN = 0;
    sbit  SYSCFGEN_bit at RCC_APB2ENR.B0;
    const register unsigned short int ADCEN = 9;
    sbit  ADCEN_bit at RCC_APB2ENR.B9;
    const register unsigned short int TIM1EN = 11;
    sbit  TIM1EN_bit at RCC_APB2ENR.B11;
    const register unsigned short int SPI1EN = 12;
    sbit  SPI1EN_bit at RCC_APB2ENR.B12;
    const register unsigned short int USART1EN = 14;
    sbit  USART1EN_bit at RCC_APB2ENR.B14;
    const register unsigned short int TIM16EN = 17;
    sbit  TIM16EN_bit at RCC_APB2ENR.B17;
    const register unsigned short int TIM17EN = 18;
    sbit  TIM17EN_bit at RCC_APB2ENR.B18;
    const register unsigned short int DBGMCUEN = 22;
    sbit  DBGMCUEN_bit at RCC_APB2ENR.B22;

sfr unsigned long   volatile RCC_APB1ENR          absolute 0x4002101C;
    const register unsigned short int TIM2EN = 0;
    sbit  TIM2EN_bit at RCC_APB1ENR.B0;
    const register unsigned short int TIM3EN = 1;
    sbit  TIM3EN_bit at RCC_APB1ENR.B1;
    const register unsigned short int TIM14EN = 8;
    sbit  TIM14EN_bit at RCC_APB1ENR.B8;
    const register unsigned short int WWDGEN = 11;
    sbit  WWDGEN_bit at RCC_APB1ENR.B11;
    const register unsigned short int SPI2EN = 14;
    sbit  SPI2EN_bit at RCC_APB1ENR.B14;
    const register unsigned short int USART2EN = 17;
    sbit  USART2EN_bit at RCC_APB1ENR.B17;
    const register unsigned short int I2C1EN = 21;
    sbit  I2C1EN_bit at RCC_APB1ENR.B21;
    const register unsigned short int USBEN = 23;
    sbit  USBEN_bit at RCC_APB1ENR.B23;
    const register unsigned short int CANEN = 25;
    sbit  CANEN_bit at RCC_APB1ENR.B25;
    const register unsigned short int CRSEN = 27;
    sbit  CRSEN_bit at RCC_APB1ENR.B27;
    const register unsigned short int PWREN = 28;
    sbit  PWREN_bit at RCC_APB1ENR.B28;
    const register unsigned short int DACEN = 29;
    sbit  DACEN_bit at RCC_APB1ENR.B29;
    const register unsigned short int CECEN = 30;
    sbit  CECEN_bit at RCC_APB1ENR.B30;

sfr unsigned long   volatile RCC_BDCR             absolute 0x40021020;
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
    const register unsigned short int RTCSEL0 = 8;
    sbit  RTCSEL0_bit at RCC_BDCR.B8;
    const register unsigned short int RTCSEL1 = 9;
    sbit  RTCSEL1_bit at RCC_BDCR.B9;
    const register unsigned short int RTCEN = 15;
    sbit  RTCEN_bit at RCC_BDCR.B15;
    const register unsigned short int BDRST = 16;
    sbit  BDRST_bit at RCC_BDCR.B16;

sfr unsigned long   volatile RCC_CSR              absolute 0x40021024;
    const register unsigned short int LSION = 0;
    sbit  LSION_bit at RCC_CSR.B0;
    const register unsigned short int LSIRDY = 1;
    sbit  LSIRDY_bit at RCC_CSR.B1;
    const register unsigned short int RMVF = 24;
    sbit  RMVF_bit at RCC_CSR.B24;
    const register unsigned short int OBLRSTF = 25;
    sbit  OBLRSTF_bit at RCC_CSR.B25;
    const register unsigned short int PINRSTF = 26;
    sbit  PINRSTF_bit at RCC_CSR.B26;
    const register unsigned short int PORRSTF = 27;
    sbit  PORRSTF_bit at RCC_CSR.B27;
    const register unsigned short int SFTRSTF = 28;
    sbit  SFTRSTF_bit at RCC_CSR.B28;
    const register unsigned short int IWDGRSTF = 29;
    sbit  IWDGRSTF_bit at RCC_CSR.B29;
    const register unsigned short int WWDGRSTF = 30;
    sbit  WWDGRSTF_bit at RCC_CSR.B30;
    const register unsigned short int LPWRRSTF = 31;
    sbit  LPWRRSTF_bit at RCC_CSR.B31;

sfr unsigned long   volatile RCC_AHBRSTR          absolute 0x40021028;
    const register unsigned short int IOPARST = 17;
    sbit  IOPARST_bit at RCC_AHBRSTR.B17;
    const register unsigned short int IOPBRST = 18;
    sbit  IOPBRST_bit at RCC_AHBRSTR.B18;
    const register unsigned short int IOPCRST = 19;
    sbit  IOPCRST_bit at RCC_AHBRSTR.B19;
    const register unsigned short int IOPFRST = 22;
    sbit  IOPFRST_bit at RCC_AHBRSTR.B22;
    const register unsigned short int TSCRST = 24;
    sbit  TSCRST_bit at RCC_AHBRSTR.B24;

sfr unsigned long   volatile RCC_CFGR2            absolute 0x4002102C;
    const register unsigned short int PREDIV0 = 0;
    sbit  PREDIV0_bit at RCC_CFGR2.B0;
    const register unsigned short int PREDIV1 = 1;
    sbit  PREDIV1_bit at RCC_CFGR2.B1;
    const register unsigned short int PREDIV2 = 2;
    sbit  PREDIV2_bit at RCC_CFGR2.B2;
    const register unsigned short int PREDIV3 = 3;
    sbit  PREDIV3_bit at RCC_CFGR2.B3;

sfr unsigned long   volatile RCC_CFGR3            absolute 0x40021030;
    const register unsigned short int USART1SW0 = 0;
    sbit  USART1SW0_bit at RCC_CFGR3.B0;
    const register unsigned short int USART1SW1 = 1;
    sbit  USART1SW1_bit at RCC_CFGR3.B1;
    const register unsigned short int I2C1SW = 4;
    sbit  I2C1SW_bit at RCC_CFGR3.B4;
    const register unsigned short int CECSW = 6;
    sbit  CECSW_bit at RCC_CFGR3.B6;
    const register unsigned short int USBSW = 7;
    sbit  USBSW_bit at RCC_CFGR3.B7;
    const register unsigned short int ADCSW = 8;
    sbit  ADCSW_bit at RCC_CFGR3.B8;
    const register unsigned short int USART2SW0 = 16;
    sbit  USART2SW0_bit at RCC_CFGR3.B16;
    const register unsigned short int USART2SW1 = 17;
    sbit  USART2SW1_bit at RCC_CFGR3.B17;

sfr unsigned long   volatile RCC_CR2              absolute 0x40021034;
    const register unsigned short int HSI14ON = 0;
    sbit  HSI14ON_bit at RCC_CR2.B0;
    const register unsigned short int HSI14RDY = 1;
    sbit  HSI14RDY_bit at RCC_CR2.B1;
    const register unsigned short int HSI14DIS = 2;
    sbit  HSI14DIS_bit at RCC_CR2.B2;
    const register unsigned short int HSI14TRIM0 = 3;
    sbit  HSI14TRIM0_bit at RCC_CR2.B3;
    const register unsigned short int HSI14TRIM1 = 4;
    sbit  HSI14TRIM1_bit at RCC_CR2.B4;
    const register unsigned short int HSI14TRIM2 = 5;
    sbit  HSI14TRIM2_bit at RCC_CR2.B5;
    const register unsigned short int HSI14TRIM3 = 6;
    sbit  HSI14TRIM3_bit at RCC_CR2.B6;
    const register unsigned short int HSI14TRIM4 = 7;
    sbit  HSI14TRIM4_bit at RCC_CR2.B7;
    const register unsigned short int HSI14CAL0 = 8;
    sbit  HSI14CAL0_bit at RCC_CR2.B8;
    const register unsigned short int HSI14CAL1 = 9;
    sbit  HSI14CAL1_bit at RCC_CR2.B9;
    const register unsigned short int HSI14CAL2 = 10;
    sbit  HSI14CAL2_bit at RCC_CR2.B10;
    const register unsigned short int HSI14CAL3 = 11;
    sbit  HSI14CAL3_bit at RCC_CR2.B11;
    const register unsigned short int HSI14CAL4 = 12;
    sbit  HSI14CAL4_bit at RCC_CR2.B12;
    const register unsigned short int HSI14CAL5 = 13;
    sbit  HSI14CAL5_bit at RCC_CR2.B13;
    const register unsigned short int HSI14CAL6 = 14;
    sbit  HSI14CAL6_bit at RCC_CR2.B14;
    const register unsigned short int HSI14CAL7 = 15;
    sbit  HSI14CAL7_bit at RCC_CR2.B15;
    const register unsigned short int HSI48ON = 16;
    sbit  HSI48ON_bit at RCC_CR2.B16;
    const register unsigned short int HSI48RDY = 17;
    sbit  HSI48RDY_bit at RCC_CR2.B17;
    const register unsigned short int HSI48CAL = 24;
    sbit  HSI48CAL_bit at RCC_CR2.B24;

sfr unsigned long   volatile SYSCFG_CFGR1         absolute 0x40010000;
    const register unsigned short int MEM_MODE0 = 0;
    sbit  MEM_MODE0_bit at SYSCFG_CFGR1.B0;
    const register unsigned short int MEM_MODE1 = 1;
    sbit  MEM_MODE1_bit at SYSCFG_CFGR1.B1;
    const register unsigned short int ADC_DMA_RMP = 8;
    sbit  ADC_DMA_RMP_bit at SYSCFG_CFGR1.B8;
    const register unsigned short int USART1_TX_DMA_RMP = 9;
    sbit  USART1_TX_DMA_RMP_bit at SYSCFG_CFGR1.B9;
    const register unsigned short int USART1_RX_DMA_RMP = 10;
    sbit  USART1_RX_DMA_RMP_bit at SYSCFG_CFGR1.B10;
    const register unsigned short int TIM16_DMA_RMP = 11;
    sbit  TIM16_DMA_RMP_bit at SYSCFG_CFGR1.B11;
    const register unsigned short int TIM17_DMA_RMP = 12;
    sbit  TIM17_DMA_RMP_bit at SYSCFG_CFGR1.B12;
    const register unsigned short int I2C_PB6_FM = 16;
    sbit  I2C_PB6_FM_bit at SYSCFG_CFGR1.B16;
    const register unsigned short int I2C_PB7_FM = 17;
    sbit  I2C_PB7_FM_bit at SYSCFG_CFGR1.B17;
    const register unsigned short int I2C_PB8_FM = 18;
    sbit  I2C_PB8_FM_bit at SYSCFG_CFGR1.B18;
    const register unsigned short int I2C_PB9_FM = 19;
    sbit  I2C_PB9_FM_bit at SYSCFG_CFGR1.B19;
    const register unsigned short int I2C1_FM_plus = 20;
    sbit  I2C1_FM_plus_bit at SYSCFG_CFGR1.B20;
    const register unsigned short int I2C2_FM_plus = 21;
    sbit  I2C2_FM_plus_bit at SYSCFG_CFGR1.B21;
    const register unsigned short int SPI2_DMA_RMP = 24;
    sbit  SPI2_DMA_RMP_bit at SYSCFG_CFGR1.B24;
    const register unsigned short int USART2_DMA_RMP = 25;
    sbit  USART2_DMA_RMP_bit at SYSCFG_CFGR1.B25;
    const register unsigned short int USART3_DMA_RMP = 26;
    sbit  USART3_DMA_RMP_bit at SYSCFG_CFGR1.B26;
    const register unsigned short int I2C1_DMA_RMP = 27;
    sbit  I2C1_DMA_RMP_bit at SYSCFG_CFGR1.B27;
    const register unsigned short int TIM1_DMA_RMP = 28;
    sbit  TIM1_DMA_RMP_bit at SYSCFG_CFGR1.B28;
    const register unsigned short int TIM2_DMA_RMP = 29;
    sbit  TIM2_DMA_RMP_bit at SYSCFG_CFGR1.B29;
    const register unsigned short int TIM3_DMA_RMP = 30;
    sbit  TIM3_DMA_RMP_bit at SYSCFG_CFGR1.B30;

sfr unsigned long   volatile SYSCFG_EXTICR1       absolute 0x40010008;
    const register unsigned short int EXTI30 = 12;
    sbit  EXTI30_bit at SYSCFG_EXTICR1.B12;
    const register unsigned short int EXTI31 = 13;
    sbit  EXTI31_bit at SYSCFG_EXTICR1.B13;
    const register unsigned short int EXTI32 = 14;
    sbit  EXTI32_bit at SYSCFG_EXTICR1.B14;
    const register unsigned short int EXTI33 = 15;
    sbit  EXTI33_bit at SYSCFG_EXTICR1.B15;
    const register unsigned short int EXTI20 = 8;
    sbit  EXTI20_bit at SYSCFG_EXTICR1.B8;
    const register unsigned short int EXTI21 = 9;
    sbit  EXTI21_bit at SYSCFG_EXTICR1.B9;
    const register unsigned short int EXTI22 = 10;
    sbit  EXTI22_bit at SYSCFG_EXTICR1.B10;
    const register unsigned short int EXTI23 = 11;
    sbit  EXTI23_bit at SYSCFG_EXTICR1.B11;
    const register unsigned short int EXTI10 = 4;
    sbit  EXTI10_bit at SYSCFG_EXTICR1.B4;
    const register unsigned short int EXTI11 = 5;
    sbit  EXTI11_bit at SYSCFG_EXTICR1.B5;
    const register unsigned short int EXTI12 = 6;
    sbit  EXTI12_bit at SYSCFG_EXTICR1.B6;
    const register unsigned short int EXTI13 = 7;
    sbit  EXTI13_bit at SYSCFG_EXTICR1.B7;
    const register unsigned short int EXTI00 = 0;
    sbit  EXTI00_bit at SYSCFG_EXTICR1.B0;
    const register unsigned short int EXTI01 = 1;
    sbit  EXTI01_bit at SYSCFG_EXTICR1.B1;
    const register unsigned short int EXTI02 = 2;
    sbit  EXTI02_bit at SYSCFG_EXTICR1.B2;
    const register unsigned short int EXTI03 = 3;
    sbit  EXTI03_bit at SYSCFG_EXTICR1.B3;

sfr unsigned long   volatile SYSCFG_EXTICR2       absolute 0x4001000C;
    const register unsigned short int EXTI70 = 12;
    sbit  EXTI70_bit at SYSCFG_EXTICR2.B12;
    const register unsigned short int EXTI71 = 13;
    sbit  EXTI71_bit at SYSCFG_EXTICR2.B13;
    const register unsigned short int EXTI72 = 14;
    sbit  EXTI72_bit at SYSCFG_EXTICR2.B14;
    const register unsigned short int EXTI73 = 15;
    sbit  EXTI73_bit at SYSCFG_EXTICR2.B15;
    const register unsigned short int EXTI60 = 8;
    sbit  EXTI60_bit at SYSCFG_EXTICR2.B8;
    const register unsigned short int EXTI61 = 9;
    sbit  EXTI61_bit at SYSCFG_EXTICR2.B9;
    const register unsigned short int EXTI62 = 10;
    sbit  EXTI62_bit at SYSCFG_EXTICR2.B10;
    const register unsigned short int EXTI63 = 11;
    sbit  EXTI63_bit at SYSCFG_EXTICR2.B11;
    const register unsigned short int EXTI50 = 4;
    sbit  EXTI50_bit at SYSCFG_EXTICR2.B4;
    const register unsigned short int EXTI51 = 5;
    sbit  EXTI51_bit at SYSCFG_EXTICR2.B5;
    const register unsigned short int EXTI52 = 6;
    sbit  EXTI52_bit at SYSCFG_EXTICR2.B6;
    const register unsigned short int EXTI53 = 7;
    sbit  EXTI53_bit at SYSCFG_EXTICR2.B7;
    const register unsigned short int EXTI40 = 0;
    sbit  EXTI40_bit at SYSCFG_EXTICR2.B0;
    const register unsigned short int EXTI41 = 1;
    sbit  EXTI41_bit at SYSCFG_EXTICR2.B1;
    const register unsigned short int EXTI42 = 2;
    sbit  EXTI42_bit at SYSCFG_EXTICR2.B2;
    const register unsigned short int EXTI43 = 3;
    sbit  EXTI43_bit at SYSCFG_EXTICR2.B3;

sfr unsigned long   volatile SYSCFG_EXTICR3       absolute 0x40010010;
    const register unsigned short int EXTI110 = 12;
    sbit  EXTI110_bit at SYSCFG_EXTICR3.B12;
    const register unsigned short int EXTI111 = 13;
    sbit  EXTI111_bit at SYSCFG_EXTICR3.B13;
    const register unsigned short int EXTI112 = 14;
    sbit  EXTI112_bit at SYSCFG_EXTICR3.B14;
    const register unsigned short int EXTI113 = 15;
    sbit  EXTI113_bit at SYSCFG_EXTICR3.B15;
    const register unsigned short int EXTI100 = 8;
    sbit  EXTI100_bit at SYSCFG_EXTICR3.B8;
    const register unsigned short int EXTI101 = 9;
    sbit  EXTI101_bit at SYSCFG_EXTICR3.B9;
    const register unsigned short int EXTI102 = 10;
    sbit  EXTI102_bit at SYSCFG_EXTICR3.B10;
    const register unsigned short int EXTI103 = 11;
    sbit  EXTI103_bit at SYSCFG_EXTICR3.B11;
    const register unsigned short int EXTI90 = 4;
    sbit  EXTI90_bit at SYSCFG_EXTICR3.B4;
    const register unsigned short int EXTI91 = 5;
    sbit  EXTI91_bit at SYSCFG_EXTICR3.B5;
    const register unsigned short int EXTI92 = 6;
    sbit  EXTI92_bit at SYSCFG_EXTICR3.B6;
    const register unsigned short int EXTI93 = 7;
    sbit  EXTI93_bit at SYSCFG_EXTICR3.B7;
    const register unsigned short int EXTI80 = 0;
    sbit  EXTI80_bit at SYSCFG_EXTICR3.B0;
    const register unsigned short int EXTI81 = 1;
    sbit  EXTI81_bit at SYSCFG_EXTICR3.B1;
    const register unsigned short int EXTI82 = 2;
    sbit  EXTI82_bit at SYSCFG_EXTICR3.B2;
    const register unsigned short int EXTI83 = 3;
    sbit  EXTI83_bit at SYSCFG_EXTICR3.B3;

sfr unsigned long   volatile SYSCFG_EXTICR4       absolute 0x40010014;
    const register unsigned short int EXTI150 = 12;
    sbit  EXTI150_bit at SYSCFG_EXTICR4.B12;
    const register unsigned short int EXTI151 = 13;
    sbit  EXTI151_bit at SYSCFG_EXTICR4.B13;
    const register unsigned short int EXTI152 = 14;
    sbit  EXTI152_bit at SYSCFG_EXTICR4.B14;
    const register unsigned short int EXTI153 = 15;
    sbit  EXTI153_bit at SYSCFG_EXTICR4.B15;
    const register unsigned short int EXTI140 = 8;
    sbit  EXTI140_bit at SYSCFG_EXTICR4.B8;
    const register unsigned short int EXTI141 = 9;
    sbit  EXTI141_bit at SYSCFG_EXTICR4.B9;
    const register unsigned short int EXTI142 = 10;
    sbit  EXTI142_bit at SYSCFG_EXTICR4.B10;
    const register unsigned short int EXTI143 = 11;
    sbit  EXTI143_bit at SYSCFG_EXTICR4.B11;
    const register unsigned short int EXTI130 = 4;
    sbit  EXTI130_bit at SYSCFG_EXTICR4.B4;
    const register unsigned short int EXTI131 = 5;
    sbit  EXTI131_bit at SYSCFG_EXTICR4.B5;
    const register unsigned short int EXTI132 = 6;
    sbit  EXTI132_bit at SYSCFG_EXTICR4.B6;
    const register unsigned short int EXTI133 = 7;
    sbit  EXTI133_bit at SYSCFG_EXTICR4.B7;
    const register unsigned short int EXTI120 = 0;
    sbit  EXTI120_bit at SYSCFG_EXTICR4.B0;
    const register unsigned short int EXTI121 = 1;
    sbit  EXTI121_bit at SYSCFG_EXTICR4.B1;
    const register unsigned short int EXTI122 = 2;
    sbit  EXTI122_bit at SYSCFG_EXTICR4.B2;
    const register unsigned short int EXTI123 = 3;
    sbit  EXTI123_bit at SYSCFG_EXTICR4.B3;

sfr unsigned long   volatile SYSCFG_CFGR2         absolute 0x40010018;
    const register unsigned short int SRAM_PEF = 8;
    sbit  SRAM_PEF_bit at SYSCFG_CFGR2.B8;
    const register unsigned short int PVD_LOCK = 2;
    sbit  PVD_LOCK_bit at SYSCFG_CFGR2.B2;
    const register unsigned short int SRAM_PARITY_LOCK = 1;
    sbit  SRAM_PARITY_LOCK_bit at SYSCFG_CFGR2.B1;
    const register unsigned short int LOCUP_LOCK = 0;
    sbit  LOCUP_LOCK_bit at SYSCFG_CFGR2.B0;

sfr unsigned long   volatile ADC_ISR              absolute 0x40012400;
    const register unsigned short int AWD = 7;
    sbit  AWD_bit at ADC_ISR.B7;
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
    const register unsigned short int AWDIE = 7;
    sbit  AWDIE_bit at ADC_IER.B7;
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
    const register unsigned short int ADSTP = 4;
    sbit  ADSTP_bit at ADC_CR.B4;
    const register unsigned short int ADSTART = 2;
    sbit  ADSTART_bit at ADC_CR.B2;
    const register unsigned short int ADDIS = 1;
    sbit  ADDIS_bit at ADC_CR.B1;
    const register unsigned short int ADEN = 0;
    sbit  ADEN_bit at ADC_CR.B0;

sfr unsigned long   volatile ADC_CFGR1            absolute 0x4001240C;
    const register unsigned short int AWDCH0 = 26;
    sbit  AWDCH0_bit at ADC_CFGR1.B26;
    const register unsigned short int AWDCH1 = 27;
    sbit  AWDCH1_bit at ADC_CFGR1.B27;
    const register unsigned short int AWDCH2 = 28;
    sbit  AWDCH2_bit at ADC_CFGR1.B28;
    const register unsigned short int AWDCH3 = 29;
    sbit  AWDCH3_bit at ADC_CFGR1.B29;
    const register unsigned short int AWDCH4 = 30;
    sbit  AWDCH4_bit at ADC_CFGR1.B30;
    const register unsigned short int AWDEN = 23;
    sbit  AWDEN_bit at ADC_CFGR1.B23;
    const register unsigned short int AWDSGL = 22;
    sbit  AWDSGL_bit at ADC_CFGR1.B22;
    const register unsigned short int DISCEN = 16;
    sbit  DISCEN_bit at ADC_CFGR1.B16;
    const register unsigned short int AUTOFF = 15;
    sbit  AUTOFF_bit at ADC_CFGR1.B15;
    const register unsigned short int AUTDLY = 14;
    sbit  AUTDLY_bit at ADC_CFGR1.B14;
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
    const register unsigned short int JITOFF_D4 = 31;
    sbit  JITOFF_D4_bit at ADC_CFGR2.B31;
    const register unsigned short int JITOFF_D2 = 30;
    sbit  JITOFF_D2_bit at ADC_CFGR2.B30;

sfr unsigned long   volatile ADC_SMPR             absolute 0x40012414;
    const register unsigned short int SMPR0 = 0;
    sbit  SMPR0_bit at ADC_SMPR.B0;
    const register unsigned short int SMPR1 = 1;
    sbit  SMPR1_bit at ADC_SMPR.B1;
    const register unsigned short int SMPR2 = 2;
    sbit  SMPR2_bit at ADC_SMPR.B2;

sfr unsigned long   volatile ADC_TR               absolute 0x40012420;
    const register unsigned short int HT0 = 16;
    sbit  HT0_bit at ADC_TR.B16;
    const register unsigned short int HT1 = 17;
    sbit  HT1_bit at ADC_TR.B17;
    const register unsigned short int HT2 = 18;
    sbit  HT2_bit at ADC_TR.B18;
    const register unsigned short int HT3 = 19;
    sbit  HT3_bit at ADC_TR.B19;
    const register unsigned short int HT4 = 20;
    sbit  HT4_bit at ADC_TR.B20;
    const register unsigned short int HT5 = 21;
    sbit  HT5_bit at ADC_TR.B21;
    const register unsigned short int HT6 = 22;
    sbit  HT6_bit at ADC_TR.B22;
    const register unsigned short int HT7 = 23;
    sbit  HT7_bit at ADC_TR.B23;
    const register unsigned short int HT8 = 24;
    sbit  HT8_bit at ADC_TR.B24;
    const register unsigned short int HT9 = 25;
    sbit  HT9_bit at ADC_TR.B25;
    const register unsigned short int HT10 = 26;
    sbit  HT10_bit at ADC_TR.B26;
    const register unsigned short int HT11 = 27;
    sbit  HT11_bit at ADC_TR.B27;
    const register unsigned short int LT0 = 0;
    sbit  LT0_bit at ADC_TR.B0;
    const register unsigned short int LT1 = 1;
    sbit  LT1_bit at ADC_TR.B1;
    const register unsigned short int LT2 = 2;
    sbit  LT2_bit at ADC_TR.B2;
    const register unsigned short int LT3 = 3;
    sbit  LT3_bit at ADC_TR.B3;
    const register unsigned short int LT4 = 4;
    sbit  LT4_bit at ADC_TR.B4;
    const register unsigned short int LT5 = 5;
    sbit  LT5_bit at ADC_TR.B5;
    const register unsigned short int LT6 = 6;
    sbit  LT6_bit at ADC_TR.B6;
    const register unsigned short int LT7 = 7;
    sbit  LT7_bit at ADC_TR.B7;
    const register unsigned short int LT8 = 8;
    sbit  LT8_bit at ADC_TR.B8;
    const register unsigned short int LT9 = 9;
    sbit  LT9_bit at ADC_TR.B9;
    const register unsigned short int LT10 = 10;
    sbit  LT10_bit at ADC_TR.B10;
    const register unsigned short int LT11 = 11;
    sbit  LT11_bit at ADC_TR.B11;

sfr unsigned long   volatile ADC_CHSELR           absolute 0x40012428;
    const register unsigned short int CHSEL18 = 18;
    sbit  CHSEL18_bit at ADC_CHSELR.B18;
    const register unsigned short int CHSEL17 = 17;
    sbit  CHSEL17_bit at ADC_CHSELR.B17;
    const register unsigned short int CHSEL16 = 16;
    sbit  CHSEL16_bit at ADC_CHSELR.B16;
    const register unsigned short int CHSEL15 = 15;
    sbit  CHSEL15_bit at ADC_CHSELR.B15;
    const register unsigned short int CHSEL14 = 14;
    sbit  CHSEL14_bit at ADC_CHSELR.B14;
    const register unsigned short int CHSEL13 = 13;
    sbit  CHSEL13_bit at ADC_CHSELR.B13;
    const register unsigned short int CHSEL12 = 12;
    sbit  CHSEL12_bit at ADC_CHSELR.B12;
    const register unsigned short int CHSEL11 = 11;
    sbit  CHSEL11_bit at ADC_CHSELR.B11;
    const register unsigned short int CHSEL10 = 10;
    sbit  CHSEL10_bit at ADC_CHSELR.B10;
    const register unsigned short int CHSEL9 = 9;
    sbit  CHSEL9_bit at ADC_CHSELR.B9;
    const register unsigned short int CHSEL8 = 8;
    sbit  CHSEL8_bit at ADC_CHSELR.B8;
    const register unsigned short int CHSEL7 = 7;
    sbit  CHSEL7_bit at ADC_CHSELR.B7;
    const register unsigned short int CHSEL6 = 6;
    sbit  CHSEL6_bit at ADC_CHSELR.B6;
    const register unsigned short int CHSEL5 = 5;
    sbit  CHSEL5_bit at ADC_CHSELR.B5;
    const register unsigned short int CHSEL4 = 4;
    sbit  CHSEL4_bit at ADC_CHSELR.B4;
    const register unsigned short int CHSEL3 = 3;
    sbit  CHSEL3_bit at ADC_CHSELR.B3;
    const register unsigned short int CHSEL2 = 2;
    sbit  CHSEL2_bit at ADC_CHSELR.B2;
    const register unsigned short int CHSEL1 = 1;
    sbit  CHSEL1_bit at ADC_CHSELR.B1;
    const register unsigned short int CHSEL0 = 0;
    sbit  CHSEL0_bit at ADC_CHSELR.B0;

sfr unsigned long   volatile ADC_DR               absolute 0x40012440;
    const register unsigned short int DATA0 = 0;
    sbit  DATA0_bit at ADC_DR.B0;
    const register unsigned short int DATA1 = 1;
    sbit  DATA1_bit at ADC_DR.B1;
    const register unsigned short int DATA2 = 2;
    sbit  DATA2_bit at ADC_DR.B2;
    const register unsigned short int DATA3 = 3;
    sbit  DATA3_bit at ADC_DR.B3;
    const register unsigned short int DATA4 = 4;
    sbit  DATA4_bit at ADC_DR.B4;
    const register unsigned short int DATA5 = 5;
    sbit  DATA5_bit at ADC_DR.B5;
    const register unsigned short int DATA6 = 6;
    sbit  DATA6_bit at ADC_DR.B6;
    const register unsigned short int DATA7 = 7;
    sbit  DATA7_bit at ADC_DR.B7;
    const register unsigned short int DATA8 = 8;
    sbit  DATA8_bit at ADC_DR.B8;
    const register unsigned short int DATA9 = 9;
    sbit  DATA9_bit at ADC_DR.B9;
    const register unsigned short int DATA10 = 10;
    sbit  DATA10_bit at ADC_DR.B10;
    const register unsigned short int DATA11 = 11;
    sbit  DATA11_bit at ADC_DR.B11;
    const register unsigned short int DATA12 = 12;
    sbit  DATA12_bit at ADC_DR.B12;
    const register unsigned short int DATA13 = 13;
    sbit  DATA13_bit at ADC_DR.B13;
    const register unsigned short int DATA14 = 14;
    sbit  DATA14_bit at ADC_DR.B14;
    const register unsigned short int DATA15 = 15;
    sbit  DATA15_bit at ADC_DR.B15;

sfr unsigned long   volatile ADC_CCR              absolute 0x40012708;
    const register unsigned short int VBATEN = 24;
    sbit  VBATEN_bit at ADC_CCR.B24;
    const register unsigned short int TSEN = 23;
    sbit  TSEN_bit at ADC_CCR.B23;
    const register unsigned short int VREFEN = 22;
    sbit  VREFEN_bit at ADC_CCR.B22;

sfr unsigned long   volatile USART1_CR1           absolute 0x40013800;
    const register unsigned short int UE = 0;
    sbit  UE_bit at USART1_CR1.B0;
    const register unsigned short int UESM = 1;
    sbit  UESM_bit at USART1_CR1.B1;
    const register unsigned short int RE = 2;
    sbit  RE_bit at USART1_CR1.B2;
    const register unsigned short int TE = 3;
    sbit  TE_bit at USART1_CR1.B3;
    const register unsigned short int IDLEIE = 4;
    sbit  IDLEIE_bit at USART1_CR1.B4;
    sbit  RXNEIE_USART1_CR1_bit at USART1_CR1.B5;
    sbit  TCIE_USART1_CR1_bit at USART1_CR1.B6;
    sbit  TXEIE_USART1_CR1_bit at USART1_CR1.B7;
    const register unsigned short int PEIE = 8;
    sbit  PEIE_bit at USART1_CR1.B8;
    const register unsigned short int PS = 9;
    sbit  PS_bit at USART1_CR1.B9;
    const register unsigned short int PCE = 10;
    sbit  PCE_bit at USART1_CR1.B10;
    const register unsigned short int WAKE = 11;
    sbit  WAKE_bit at USART1_CR1.B11;
    const register unsigned short int M = 12;
    sbit  M_bit at USART1_CR1.B12;
    const register unsigned short int MME = 13;
    sbit  MME_bit at USART1_CR1.B13;
    const register unsigned short int CMIE = 14;
    sbit  CMIE_bit at USART1_CR1.B14;
    const register unsigned short int OVER8 = 15;
    sbit  OVER8_bit at USART1_CR1.B15;
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
    const register unsigned short int RTOIE = 26;
    sbit  RTOIE_bit at USART1_CR1.B26;
    const register unsigned short int EOBIE = 27;
    sbit  EOBIE_bit at USART1_CR1.B27;
    const register unsigned short int M1 = 28;
    sbit  M1_bit at USART1_CR1.B28;

sfr unsigned long   volatile USART1_CR2           absolute 0x40013804;
    const register unsigned short int ADD40 = 28;
    sbit  ADD40_bit at USART1_CR2.B28;
    const register unsigned short int ADD41 = 29;
    sbit  ADD41_bit at USART1_CR2.B29;
    const register unsigned short int ADD42 = 30;
    sbit  ADD42_bit at USART1_CR2.B30;
    const register unsigned short int ADD43 = 31;
    sbit  ADD43_bit at USART1_CR2.B31;
    const register unsigned short int ADD00 = 24;
    sbit  ADD00_bit at USART1_CR2.B24;
    const register unsigned short int ADD01 = 25;
    sbit  ADD01_bit at USART1_CR2.B25;
    const register unsigned short int ADD02 = 26;
    sbit  ADD02_bit at USART1_CR2.B26;
    const register unsigned short int ADD03 = 27;
    sbit  ADD03_bit at USART1_CR2.B27;
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
    const register unsigned short int DATAINV = 18;
    sbit  DATAINV_bit at USART1_CR2.B18;
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
    sbit  CPOL_USART1_CR2_bit at USART1_CR2.B10;
    sbit  CPHA_USART1_CR2_bit at USART1_CR2.B9;
    const register unsigned short int LBCL = 8;
    sbit  LBCL_bit at USART1_CR2.B8;
    const register unsigned short int LBDIE = 6;
    sbit  LBDIE_bit at USART1_CR2.B6;
    const register unsigned short int LBDL = 5;
    sbit  LBDL_bit at USART1_CR2.B5;
    const register unsigned short int ADDM7 = 4;
    sbit  ADDM7_bit at USART1_CR2.B4;

sfr unsigned long   volatile USART1_CR3           absolute 0x40013808;
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
    sbit  NACK_USART1_CR3_bit at USART1_CR3.B4;
    const register unsigned short int HDSEL = 3;
    sbit  HDSEL_bit at USART1_CR3.B3;
    const register unsigned short int IRLP = 2;
    sbit  IRLP_bit at USART1_CR3.B2;
    const register unsigned short int IREN = 1;
    sbit  IREN_bit at USART1_CR3.B1;
    const register unsigned short int EIE = 0;
    sbit  EIE_bit at USART1_CR3.B0;

sfr unsigned long   volatile USART1_BRR           absolute 0x4001380C;
    const register unsigned short int DIV_Mantissa0 = 4;
    sbit  DIV_Mantissa0_bit at USART1_BRR.B4;
    const register unsigned short int DIV_Mantissa1 = 5;
    sbit  DIV_Mantissa1_bit at USART1_BRR.B5;
    const register unsigned short int DIV_Mantissa2 = 6;
    sbit  DIV_Mantissa2_bit at USART1_BRR.B6;
    const register unsigned short int DIV_Mantissa3 = 7;
    sbit  DIV_Mantissa3_bit at USART1_BRR.B7;
    const register unsigned short int DIV_Mantissa4 = 8;
    sbit  DIV_Mantissa4_bit at USART1_BRR.B8;
    const register unsigned short int DIV_Mantissa5 = 9;
    sbit  DIV_Mantissa5_bit at USART1_BRR.B9;
    const register unsigned short int DIV_Mantissa6 = 10;
    sbit  DIV_Mantissa6_bit at USART1_BRR.B10;
    const register unsigned short int DIV_Mantissa7 = 11;
    sbit  DIV_Mantissa7_bit at USART1_BRR.B11;
    const register unsigned short int DIV_Mantissa8 = 12;
    sbit  DIV_Mantissa8_bit at USART1_BRR.B12;
    const register unsigned short int DIV_Mantissa9 = 13;
    sbit  DIV_Mantissa9_bit at USART1_BRR.B13;
    const register unsigned short int DIV_Mantissa10 = 14;
    sbit  DIV_Mantissa10_bit at USART1_BRR.B14;
    const register unsigned short int DIV_Mantissa11 = 15;
    sbit  DIV_Mantissa11_bit at USART1_BRR.B15;
    const register unsigned short int DIV_Fraction0 = 0;
    sbit  DIV_Fraction0_bit at USART1_BRR.B0;
    const register unsigned short int DIV_Fraction1 = 1;
    sbit  DIV_Fraction1_bit at USART1_BRR.B1;
    const register unsigned short int DIV_Fraction2 = 2;
    sbit  DIV_Fraction2_bit at USART1_BRR.B2;
    const register unsigned short int DIV_Fraction3 = 3;
    sbit  DIV_Fraction3_bit at USART1_BRR.B3;

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
    const register unsigned short int REACK = 22;
    sbit  REACK_bit at USART1_ISR.B22;
    const register unsigned short int TEACK = 21;
    sbit  TEACK_bit at USART1_ISR.B21;
    sbit  WUF_USART1_ISR_bit at USART1_ISR.B20;
    const register unsigned short int RWU = 19;
    sbit  RWU_bit at USART1_ISR.B19;
    const register unsigned short int SBKF = 18;
    sbit  SBKF_bit at USART1_ISR.B18;
    const register unsigned short int CMF = 17;
    sbit  CMF_bit at USART1_ISR.B17;
    sbit  BUSY_USART1_ISR_bit at USART1_ISR.B16;
    const register unsigned short int ABRF = 15;
    sbit  ABRF_bit at USART1_ISR.B15;
    const register unsigned short int ABRE = 14;
    sbit  ABRE_bit at USART1_ISR.B14;
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
    sbit  TXE_USART1_ISR_bit at USART1_ISR.B7;
    sbit  TC_USART1_ISR_bit at USART1_ISR.B6;
    sbit  RXNE_USART1_ISR_bit at USART1_ISR.B5;
    const register unsigned short int IDLE = 4;
    sbit  IDLE_bit at USART1_ISR.B4;
    const register unsigned short int ORE = 3;
    sbit  ORE_bit at USART1_ISR.B3;
    const register unsigned short int NF = 2;
    sbit  NF_bit at USART1_ISR.B2;
    const register unsigned short int FE = 1;
    sbit  FE_bit at USART1_ISR.B1;
    sbit  PE_USART1_ISR_bit at USART1_ISR.B0;

sfr unsigned long   volatile USART1_ICR           absolute 0x40013820;
    const register unsigned short int WUCF = 20;
    sbit  WUCF_bit at USART1_ICR.B20;
    const register unsigned short int CMCF = 17;
    sbit  CMCF_bit at USART1_ICR.B17;
    const register unsigned short int EOBCF = 12;
    sbit  EOBCF_bit at USART1_ICR.B12;
    const register unsigned short int RTOCF = 11;
    sbit  RTOCF_bit at USART1_ICR.B11;
    const register unsigned short int CTSCF = 9;
    sbit  CTSCF_bit at USART1_ICR.B9;
    const register unsigned short int LBDCF = 8;
    sbit  LBDCF_bit at USART1_ICR.B8;
    const register unsigned short int TCCF = 6;
    sbit  TCCF_bit at USART1_ICR.B6;
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

sfr unsigned long   volatile USART2_CR1           absolute 0x40004400;
    sbit  UE_USART2_CR1_bit at USART2_CR1.B0;
    sbit  UESM_USART2_CR1_bit at USART2_CR1.B1;
    sbit  RE_USART2_CR1_bit at USART2_CR1.B2;
    sbit  TE_USART2_CR1_bit at USART2_CR1.B3;
    sbit  IDLEIE_USART2_CR1_bit at USART2_CR1.B4;
    sbit  RXNEIE_USART2_CR1_bit at USART2_CR1.B5;
    sbit  TCIE_USART2_CR1_bit at USART2_CR1.B6;
    sbit  TXEIE_USART2_CR1_bit at USART2_CR1.B7;
    sbit  PEIE_USART2_CR1_bit at USART2_CR1.B8;
    sbit  PS_USART2_CR1_bit at USART2_CR1.B9;
    sbit  PCE_USART2_CR1_bit at USART2_CR1.B10;
    sbit  WAKE_USART2_CR1_bit at USART2_CR1.B11;
    sbit  M_USART2_CR1_bit at USART2_CR1.B12;
    sbit  MME_USART2_CR1_bit at USART2_CR1.B13;
    sbit  CMIE_USART2_CR1_bit at USART2_CR1.B14;
    sbit  OVER8_USART2_CR1_bit at USART2_CR1.B15;
    sbit  DEDT0_USART2_CR1_bit at USART2_CR1.B16;
    sbit  DEDT1_USART2_CR1_bit at USART2_CR1.B17;
    sbit  DEDT2_USART2_CR1_bit at USART2_CR1.B18;
    sbit  DEDT3_USART2_CR1_bit at USART2_CR1.B19;
    sbit  DEDT4_USART2_CR1_bit at USART2_CR1.B20;
    sbit  DEAT0_USART2_CR1_bit at USART2_CR1.B21;
    sbit  DEAT1_USART2_CR1_bit at USART2_CR1.B22;
    sbit  DEAT2_USART2_CR1_bit at USART2_CR1.B23;
    sbit  DEAT3_USART2_CR1_bit at USART2_CR1.B24;
    sbit  DEAT4_USART2_CR1_bit at USART2_CR1.B25;
    sbit  RTOIE_USART2_CR1_bit at USART2_CR1.B26;
    sbit  EOBIE_USART2_CR1_bit at USART2_CR1.B27;
    sbit  M1_USART2_CR1_bit at USART2_CR1.B28;

sfr unsigned long   volatile USART2_CR2           absolute 0x40004404;
    sbit  ADD40_USART2_CR2_bit at USART2_CR2.B28;
    sbit  ADD41_USART2_CR2_bit at USART2_CR2.B29;
    sbit  ADD42_USART2_CR2_bit at USART2_CR2.B30;
    sbit  ADD43_USART2_CR2_bit at USART2_CR2.B31;
    sbit  ADD00_USART2_CR2_bit at USART2_CR2.B24;
    sbit  ADD01_USART2_CR2_bit at USART2_CR2.B25;
    sbit  ADD02_USART2_CR2_bit at USART2_CR2.B26;
    sbit  ADD03_USART2_CR2_bit at USART2_CR2.B27;
    sbit  RTOEN_USART2_CR2_bit at USART2_CR2.B23;
    sbit  ABRMOD0_USART2_CR2_bit at USART2_CR2.B21;
    sbit  ABRMOD1_USART2_CR2_bit at USART2_CR2.B22;
    sbit  ABREN_USART2_CR2_bit at USART2_CR2.B20;
    sbit  MSBFIRST_USART2_CR2_bit at USART2_CR2.B19;
    sbit  DATAINV_USART2_CR2_bit at USART2_CR2.B18;
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

sfr unsigned long   volatile USART2_CR3           absolute 0x40004408;
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
    sbit  DIV_Mantissa0_USART2_BRR_bit at USART2_BRR.B4;
    sbit  DIV_Mantissa1_USART2_BRR_bit at USART2_BRR.B5;
    sbit  DIV_Mantissa2_USART2_BRR_bit at USART2_BRR.B6;
    sbit  DIV_Mantissa3_USART2_BRR_bit at USART2_BRR.B7;
    sbit  DIV_Mantissa4_USART2_BRR_bit at USART2_BRR.B8;
    sbit  DIV_Mantissa5_USART2_BRR_bit at USART2_BRR.B9;
    sbit  DIV_Mantissa6_USART2_BRR_bit at USART2_BRR.B10;
    sbit  DIV_Mantissa7_USART2_BRR_bit at USART2_BRR.B11;
    sbit  DIV_Mantissa8_USART2_BRR_bit at USART2_BRR.B12;
    sbit  DIV_Mantissa9_USART2_BRR_bit at USART2_BRR.B13;
    sbit  DIV_Mantissa10_USART2_BRR_bit at USART2_BRR.B14;
    sbit  DIV_Mantissa11_USART2_BRR_bit at USART2_BRR.B15;
    sbit  DIV_Fraction0_USART2_BRR_bit at USART2_BRR.B0;
    sbit  DIV_Fraction1_USART2_BRR_bit at USART2_BRR.B1;
    sbit  DIV_Fraction2_USART2_BRR_bit at USART2_BRR.B2;
    sbit  DIV_Fraction3_USART2_BRR_bit at USART2_BRR.B3;

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
    sbit  REACK_USART2_ISR_bit at USART2_ISR.B22;
    sbit  TEACK_USART2_ISR_bit at USART2_ISR.B21;
    sbit  WUF_USART2_ISR_bit at USART2_ISR.B20;
    sbit  RWU_USART2_ISR_bit at USART2_ISR.B19;
    sbit  SBKF_USART2_ISR_bit at USART2_ISR.B18;
    sbit  CMF_USART2_ISR_bit at USART2_ISR.B17;
    sbit  BUSY_USART2_ISR_bit at USART2_ISR.B16;
    sbit  ABRF_USART2_ISR_bit at USART2_ISR.B15;
    sbit  ABRE_USART2_ISR_bit at USART2_ISR.B14;
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
    sbit  EOBCF_USART2_ICR_bit at USART2_ICR.B12;
    sbit  RTOCF_USART2_ICR_bit at USART2_ICR.B11;
    sbit  CTSCF_USART2_ICR_bit at USART2_ICR.B9;
    sbit  LBDCF_USART2_ICR_bit at USART2_ICR.B8;
    sbit  TCCF_USART2_ICR_bit at USART2_ICR.B6;
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

sfr unsigned long   volatile COMP_CSR             absolute 0x4001001C;
    const register unsigned short int COMP1EN = 0;
    sbit  COMP1EN_bit at COMP_CSR.B0;
    const register unsigned short int COMP1_INP_DAC = 1;
    sbit  COMP1_INP_DAC_bit at COMP_CSR.B1;
    const register unsigned short int COMP1MODE0 = 2;
    sbit  COMP1MODE0_bit at COMP_CSR.B2;
    const register unsigned short int COMP1MODE1 = 3;
    sbit  COMP1MODE1_bit at COMP_CSR.B3;
    const register unsigned short int COMP1INSEL0 = 4;
    sbit  COMP1INSEL0_bit at COMP_CSR.B4;
    const register unsigned short int COMP1INSEL1 = 5;
    sbit  COMP1INSEL1_bit at COMP_CSR.B5;
    const register unsigned short int COMP1INSEL2 = 6;
    sbit  COMP1INSEL2_bit at COMP_CSR.B6;
    const register unsigned short int COMP1OUTSEL0 = 8;
    sbit  COMP1OUTSEL0_bit at COMP_CSR.B8;
    const register unsigned short int COMP1OUTSEL1 = 9;
    sbit  COMP1OUTSEL1_bit at COMP_CSR.B9;
    const register unsigned short int COMP1OUTSEL2 = 10;
    sbit  COMP1OUTSEL2_bit at COMP_CSR.B10;
    const register unsigned short int COMP1POL = 11;
    sbit  COMP1POL_bit at COMP_CSR.B11;
    const register unsigned short int COMP1HYST0 = 12;
    sbit  COMP1HYST0_bit at COMP_CSR.B12;
    const register unsigned short int COMP1HYST1 = 13;
    sbit  COMP1HYST1_bit at COMP_CSR.B13;
    const register unsigned short int COMP1OUT = 14;
    sbit  COMP1OUT_bit at COMP_CSR.B14;
    const register unsigned short int COMP1LOCK = 15;
    sbit  COMP1LOCK_bit at COMP_CSR.B15;
    const register unsigned short int COMP2EN = 16;
    sbit  COMP2EN_bit at COMP_CSR.B16;
    const register unsigned short int COMP2MODE0 = 18;
    sbit  COMP2MODE0_bit at COMP_CSR.B18;
    const register unsigned short int COMP2MODE1 = 19;
    sbit  COMP2MODE1_bit at COMP_CSR.B19;
    const register unsigned short int COMP2INSEL0 = 20;
    sbit  COMP2INSEL0_bit at COMP_CSR.B20;
    const register unsigned short int COMP2INSEL1 = 21;
    sbit  COMP2INSEL1_bit at COMP_CSR.B21;
    const register unsigned short int COMP2INSEL2 = 22;
    sbit  COMP2INSEL2_bit at COMP_CSR.B22;
    const register unsigned short int WNDWEN = 23;
    sbit  WNDWEN_bit at COMP_CSR.B23;
    const register unsigned short int COMP2OUTSEL0 = 24;
    sbit  COMP2OUTSEL0_bit at COMP_CSR.B24;
    const register unsigned short int COMP2OUTSEL1 = 25;
    sbit  COMP2OUTSEL1_bit at COMP_CSR.B25;
    const register unsigned short int COMP2OUTSEL2 = 26;
    sbit  COMP2OUTSEL2_bit at COMP_CSR.B26;
    const register unsigned short int COMP2POL = 27;
    sbit  COMP2POL_bit at COMP_CSR.B27;
    const register unsigned short int COMP2HYST0 = 28;
    sbit  COMP2HYST0_bit at COMP_CSR.B28;
    const register unsigned short int COMP2HYST1 = 29;
    sbit  COMP2HYST1_bit at COMP_CSR.B29;
    const register unsigned short int COMP2OUT = 30;
    sbit  COMP2OUT_bit at COMP_CSR.B30;
    const register unsigned short int COMP2LOCK = 31;
    sbit  COMP2LOCK_bit at COMP_CSR.B31;

sfr unsigned long   volatile RTC_TR               absolute 0x40002800;
    const register unsigned short int PM = 22;
    sbit  PM_bit at RTC_TR.B22;
    sbit  HT0_RTC_TR_bit at RTC_TR.B20;
    sbit  HT1_RTC_TR_bit at RTC_TR.B21;
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

sfr unsigned long   volatile RTC_CR               absolute 0x40002808;
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
    const register unsigned short int TSE = 11;
    sbit  TSE_bit at RTC_CR.B11;
    const register unsigned short int ALRAIE = 12;
    sbit  ALRAIE_bit at RTC_CR.B12;
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

sfr unsigned long   volatile RTC_ISR              absolute 0x4000280C;
    const register unsigned short int ALRAWF = 0;
    sbit  ALRAWF_bit at RTC_ISR.B0;
    const register unsigned short int SHPF = 3;
    sbit  SHPF_bit at RTC_ISR.B3;
    const register unsigned short int INITS = 4;
    sbit  INITS_bit at RTC_ISR.B4;
    const register unsigned short int RSF = 5;
    sbit  RSF_bit at RTC_ISR.B5;
    const register unsigned short int INITF = 6;
    sbit  INITF_bit at RTC_ISR.B6;
    const register unsigned short int INIT = 7;
    sbit  INIT_bit at RTC_ISR.B7;
    const register unsigned short int ALRAF = 8;
    sbit  ALRAF_bit at RTC_ISR.B8;
    const register unsigned short int TSF = 11;
    sbit  TSF_bit at RTC_ISR.B11;
    const register unsigned short int TSOVF = 12;
    sbit  TSOVF_bit at RTC_ISR.B12;
    const register unsigned short int TAMP1F = 13;
    sbit  TAMP1F_bit at RTC_ISR.B13;
    const register unsigned short int TAMP2F = 14;
    sbit  TAMP2F_bit at RTC_ISR.B14;
    const register unsigned short int RECALPF = 16;
    sbit  RECALPF_bit at RTC_ISR.B16;

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

sfr unsigned long   volatile RTC_ALRMAR           absolute 0x4000281C;
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

sfr unsigned long   volatile RTC_WPR              absolute 0x40002824;
    sbit  KEY0_RTC_WPR_bit at RTC_WPR.B0;
    sbit  KEY1_RTC_WPR_bit at RTC_WPR.B1;
    sbit  KEY2_RTC_WPR_bit at RTC_WPR.B2;
    sbit  KEY3_RTC_WPR_bit at RTC_WPR.B3;
    sbit  KEY4_RTC_WPR_bit at RTC_WPR.B4;
    sbit  KEY5_RTC_WPR_bit at RTC_WPR.B5;
    sbit  KEY6_RTC_WPR_bit at RTC_WPR.B6;
    sbit  KEY7_RTC_WPR_bit at RTC_WPR.B7;

sfr unsigned long   volatile RTC_SSR              absolute 0x40002828;
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
    sbit  PM_RTC_TSTR_bit at RTC_TSTR.B22;
    sbit  HT0_RTC_TSTR_bit at RTC_TSTR.B20;
    sbit  HT1_RTC_TSTR_bit at RTC_TSTR.B21;
    sbit  HU0_RTC_TSTR_bit at RTC_TSTR.B16;
    sbit  HU1_RTC_TSTR_bit at RTC_TSTR.B17;
    sbit  HU2_RTC_TSTR_bit at RTC_TSTR.B18;
    sbit  HU3_RTC_TSTR_bit at RTC_TSTR.B19;
    sbit  MNT0_RTC_TSTR_bit at RTC_TSTR.B12;
    sbit  MNT1_RTC_TSTR_bit at RTC_TSTR.B13;
    sbit  MNT2_RTC_TSTR_bit at RTC_TSTR.B14;
    sbit  MNU0_RTC_TSTR_bit at RTC_TSTR.B8;
    sbit  MNU1_RTC_TSTR_bit at RTC_TSTR.B9;
    sbit  MNU2_RTC_TSTR_bit at RTC_TSTR.B10;
    sbit  MNU3_RTC_TSTR_bit at RTC_TSTR.B11;
    sbit  ST0_RTC_TSTR_bit at RTC_TSTR.B4;
    sbit  ST1_RTC_TSTR_bit at RTC_TSTR.B5;
    sbit  ST2_RTC_TSTR_bit at RTC_TSTR.B6;
    sbit  SU0_RTC_TSTR_bit at RTC_TSTR.B0;
    sbit  SU1_RTC_TSTR_bit at RTC_TSTR.B1;
    sbit  SU2_RTC_TSTR_bit at RTC_TSTR.B2;
    sbit  SU3_RTC_TSTR_bit at RTC_TSTR.B3;

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

sfr unsigned long   volatile RTC_CALR             absolute 0x4000283C;
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

sfr unsigned long   volatile RTC_TAFCR            absolute 0x40002840;
    const register unsigned short int PC15MODE = 23;
    sbit  PC15MODE_bit at RTC_TAFCR.B23;
    const register unsigned short int PC15VALUE = 22;
    sbit  PC15VALUE_bit at RTC_TAFCR.B22;
    const register unsigned short int PC14MODE = 21;
    sbit  PC14MODE_bit at RTC_TAFCR.B21;
    const register unsigned short int PC14VALUE = 20;
    sbit  PC14VALUE_bit at RTC_TAFCR.B20;
    const register unsigned short int PC13MODE = 19;
    sbit  PC13MODE_bit at RTC_TAFCR.B19;
    const register unsigned short int PC13VALUE = 18;
    sbit  PC13VALUE_bit at RTC_TAFCR.B18;
    const register unsigned short int TAMP_PUDIS = 15;
    sbit  TAMP_PUDIS_bit at RTC_TAFCR.B15;
    const register unsigned short int TAMP_PRCH0 = 13;
    sbit  TAMP_PRCH0_bit at RTC_TAFCR.B13;
    const register unsigned short int TAMP_PRCH1 = 14;
    sbit  TAMP_PRCH1_bit at RTC_TAFCR.B14;
    const register unsigned short int TAMPFLT0 = 11;
    sbit  TAMPFLT0_bit at RTC_TAFCR.B11;
    const register unsigned short int TAMPFLT1 = 12;
    sbit  TAMPFLT1_bit at RTC_TAFCR.B12;
    const register unsigned short int TAMPFREQ0 = 8;
    sbit  TAMPFREQ0_bit at RTC_TAFCR.B8;
    const register unsigned short int TAMPFREQ1 = 9;
    sbit  TAMPFREQ1_bit at RTC_TAFCR.B9;
    const register unsigned short int TAMPFREQ2 = 10;
    sbit  TAMPFREQ2_bit at RTC_TAFCR.B10;
    const register unsigned short int TAMPTS = 7;
    sbit  TAMPTS_bit at RTC_TAFCR.B7;
    const register unsigned short int TAMP2_TRG = 4;
    sbit  TAMP2_TRG_bit at RTC_TAFCR.B4;
    const register unsigned short int TAMP2E = 3;
    sbit  TAMP2E_bit at RTC_TAFCR.B3;
    const register unsigned short int TAMPIE = 2;
    sbit  TAMPIE_bit at RTC_TAFCR.B2;
    const register unsigned short int TAMP1TRG = 1;
    sbit  TAMP1TRG_bit at RTC_TAFCR.B1;
    const register unsigned short int TAMP1E = 0;
    sbit  TAMP1E_bit at RTC_TAFCR.B0;

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

sfr unsigned long   volatile RTC_BKP0R            absolute 0x40002850;
    const register unsigned short int BKP0 = 0;
    sbit  BKP0_bit at RTC_BKP0R.B0;
    const register unsigned short int BKP1 = 1;
    sbit  BKP1_bit at RTC_BKP0R.B1;
    const register unsigned short int BKP2 = 2;
    sbit  BKP2_bit at RTC_BKP0R.B2;
    const register unsigned short int BKP3 = 3;
    sbit  BKP3_bit at RTC_BKP0R.B3;
    const register unsigned short int BKP4 = 4;
    sbit  BKP4_bit at RTC_BKP0R.B4;
    const register unsigned short int BKP5 = 5;
    sbit  BKP5_bit at RTC_BKP0R.B5;
    const register unsigned short int BKP6 = 6;
    sbit  BKP6_bit at RTC_BKP0R.B6;
    const register unsigned short int BKP7 = 7;
    sbit  BKP7_bit at RTC_BKP0R.B7;
    const register unsigned short int BKP8 = 8;
    sbit  BKP8_bit at RTC_BKP0R.B8;
    const register unsigned short int BKP9 = 9;
    sbit  BKP9_bit at RTC_BKP0R.B9;
    const register unsigned short int BKP10 = 10;
    sbit  BKP10_bit at RTC_BKP0R.B10;
    const register unsigned short int BKP11 = 11;
    sbit  BKP11_bit at RTC_BKP0R.B11;
    const register unsigned short int BKP12 = 12;
    sbit  BKP12_bit at RTC_BKP0R.B12;
    const register unsigned short int BKP13 = 13;
    sbit  BKP13_bit at RTC_BKP0R.B13;
    const register unsigned short int BKP14 = 14;
    sbit  BKP14_bit at RTC_BKP0R.B14;
    const register unsigned short int BKP15 = 15;
    sbit  BKP15_bit at RTC_BKP0R.B15;
    const register unsigned short int BKP16 = 16;
    sbit  BKP16_bit at RTC_BKP0R.B16;
    const register unsigned short int BKP17 = 17;
    sbit  BKP17_bit at RTC_BKP0R.B17;
    const register unsigned short int BKP18 = 18;
    sbit  BKP18_bit at RTC_BKP0R.B18;
    const register unsigned short int BKP19 = 19;
    sbit  BKP19_bit at RTC_BKP0R.B19;
    const register unsigned short int BKP20 = 20;
    sbit  BKP20_bit at RTC_BKP0R.B20;
    const register unsigned short int BKP21 = 21;
    sbit  BKP21_bit at RTC_BKP0R.B21;
    const register unsigned short int BKP22 = 22;
    sbit  BKP22_bit at RTC_BKP0R.B22;
    const register unsigned short int BKP23 = 23;
    sbit  BKP23_bit at RTC_BKP0R.B23;
    const register unsigned short int BKP24 = 24;
    sbit  BKP24_bit at RTC_BKP0R.B24;
    const register unsigned short int BKP25 = 25;
    sbit  BKP25_bit at RTC_BKP0R.B25;
    const register unsigned short int BKP26 = 26;
    sbit  BKP26_bit at RTC_BKP0R.B26;
    const register unsigned short int BKP27 = 27;
    sbit  BKP27_bit at RTC_BKP0R.B27;
    const register unsigned short int BKP28 = 28;
    sbit  BKP28_bit at RTC_BKP0R.B28;
    const register unsigned short int BKP29 = 29;
    sbit  BKP29_bit at RTC_BKP0R.B29;
    const register unsigned short int BKP30 = 30;
    sbit  BKP30_bit at RTC_BKP0R.B30;
    const register unsigned short int BKP31 = 31;
    sbit  BKP31_bit at RTC_BKP0R.B31;

sfr unsigned long   volatile RTC_BKP1R            absolute 0x40002854;
    sbit  BKP0_RTC_BKP1R_bit at RTC_BKP1R.B0;
    sbit  BKP1_RTC_BKP1R_bit at RTC_BKP1R.B1;
    sbit  BKP2_RTC_BKP1R_bit at RTC_BKP1R.B2;
    sbit  BKP3_RTC_BKP1R_bit at RTC_BKP1R.B3;
    sbit  BKP4_RTC_BKP1R_bit at RTC_BKP1R.B4;
    sbit  BKP5_RTC_BKP1R_bit at RTC_BKP1R.B5;
    sbit  BKP6_RTC_BKP1R_bit at RTC_BKP1R.B6;
    sbit  BKP7_RTC_BKP1R_bit at RTC_BKP1R.B7;
    sbit  BKP8_RTC_BKP1R_bit at RTC_BKP1R.B8;
    sbit  BKP9_RTC_BKP1R_bit at RTC_BKP1R.B9;
    sbit  BKP10_RTC_BKP1R_bit at RTC_BKP1R.B10;
    sbit  BKP11_RTC_BKP1R_bit at RTC_BKP1R.B11;
    sbit  BKP12_RTC_BKP1R_bit at RTC_BKP1R.B12;
    sbit  BKP13_RTC_BKP1R_bit at RTC_BKP1R.B13;
    sbit  BKP14_RTC_BKP1R_bit at RTC_BKP1R.B14;
    sbit  BKP15_RTC_BKP1R_bit at RTC_BKP1R.B15;
    sbit  BKP16_RTC_BKP1R_bit at RTC_BKP1R.B16;
    sbit  BKP17_RTC_BKP1R_bit at RTC_BKP1R.B17;
    sbit  BKP18_RTC_BKP1R_bit at RTC_BKP1R.B18;
    sbit  BKP19_RTC_BKP1R_bit at RTC_BKP1R.B19;
    sbit  BKP20_RTC_BKP1R_bit at RTC_BKP1R.B20;
    sbit  BKP21_RTC_BKP1R_bit at RTC_BKP1R.B21;
    sbit  BKP22_RTC_BKP1R_bit at RTC_BKP1R.B22;
    sbit  BKP23_RTC_BKP1R_bit at RTC_BKP1R.B23;
    sbit  BKP24_RTC_BKP1R_bit at RTC_BKP1R.B24;
    sbit  BKP25_RTC_BKP1R_bit at RTC_BKP1R.B25;
    sbit  BKP26_RTC_BKP1R_bit at RTC_BKP1R.B26;
    sbit  BKP27_RTC_BKP1R_bit at RTC_BKP1R.B27;
    sbit  BKP28_RTC_BKP1R_bit at RTC_BKP1R.B28;
    sbit  BKP29_RTC_BKP1R_bit at RTC_BKP1R.B29;
    sbit  BKP30_RTC_BKP1R_bit at RTC_BKP1R.B30;
    sbit  BKP31_RTC_BKP1R_bit at RTC_BKP1R.B31;

sfr unsigned long   volatile RTC_BKP2R            absolute 0x40002858;
    sbit  BKP0_RTC_BKP2R_bit at RTC_BKP2R.B0;
    sbit  BKP1_RTC_BKP2R_bit at RTC_BKP2R.B1;
    sbit  BKP2_RTC_BKP2R_bit at RTC_BKP2R.B2;
    sbit  BKP3_RTC_BKP2R_bit at RTC_BKP2R.B3;
    sbit  BKP4_RTC_BKP2R_bit at RTC_BKP2R.B4;
    sbit  BKP5_RTC_BKP2R_bit at RTC_BKP2R.B5;
    sbit  BKP6_RTC_BKP2R_bit at RTC_BKP2R.B6;
    sbit  BKP7_RTC_BKP2R_bit at RTC_BKP2R.B7;
    sbit  BKP8_RTC_BKP2R_bit at RTC_BKP2R.B8;
    sbit  BKP9_RTC_BKP2R_bit at RTC_BKP2R.B9;
    sbit  BKP10_RTC_BKP2R_bit at RTC_BKP2R.B10;
    sbit  BKP11_RTC_BKP2R_bit at RTC_BKP2R.B11;
    sbit  BKP12_RTC_BKP2R_bit at RTC_BKP2R.B12;
    sbit  BKP13_RTC_BKP2R_bit at RTC_BKP2R.B13;
    sbit  BKP14_RTC_BKP2R_bit at RTC_BKP2R.B14;
    sbit  BKP15_RTC_BKP2R_bit at RTC_BKP2R.B15;
    sbit  BKP16_RTC_BKP2R_bit at RTC_BKP2R.B16;
    sbit  BKP17_RTC_BKP2R_bit at RTC_BKP2R.B17;
    sbit  BKP18_RTC_BKP2R_bit at RTC_BKP2R.B18;
    sbit  BKP19_RTC_BKP2R_bit at RTC_BKP2R.B19;
    sbit  BKP20_RTC_BKP2R_bit at RTC_BKP2R.B20;
    sbit  BKP21_RTC_BKP2R_bit at RTC_BKP2R.B21;
    sbit  BKP22_RTC_BKP2R_bit at RTC_BKP2R.B22;
    sbit  BKP23_RTC_BKP2R_bit at RTC_BKP2R.B23;
    sbit  BKP24_RTC_BKP2R_bit at RTC_BKP2R.B24;
    sbit  BKP25_RTC_BKP2R_bit at RTC_BKP2R.B25;
    sbit  BKP26_RTC_BKP2R_bit at RTC_BKP2R.B26;
    sbit  BKP27_RTC_BKP2R_bit at RTC_BKP2R.B27;
    sbit  BKP28_RTC_BKP2R_bit at RTC_BKP2R.B28;
    sbit  BKP29_RTC_BKP2R_bit at RTC_BKP2R.B29;
    sbit  BKP30_RTC_BKP2R_bit at RTC_BKP2R.B30;
    sbit  BKP31_RTC_BKP2R_bit at RTC_BKP2R.B31;

sfr unsigned long   volatile RTC_BKP3R            absolute 0x4000285C;
    sbit  BKP0_RTC_BKP3R_bit at RTC_BKP3R.B0;
    sbit  BKP1_RTC_BKP3R_bit at RTC_BKP3R.B1;
    sbit  BKP2_RTC_BKP3R_bit at RTC_BKP3R.B2;
    sbit  BKP3_RTC_BKP3R_bit at RTC_BKP3R.B3;
    sbit  BKP4_RTC_BKP3R_bit at RTC_BKP3R.B4;
    sbit  BKP5_RTC_BKP3R_bit at RTC_BKP3R.B5;
    sbit  BKP6_RTC_BKP3R_bit at RTC_BKP3R.B6;
    sbit  BKP7_RTC_BKP3R_bit at RTC_BKP3R.B7;
    sbit  BKP8_RTC_BKP3R_bit at RTC_BKP3R.B8;
    sbit  BKP9_RTC_BKP3R_bit at RTC_BKP3R.B9;
    sbit  BKP10_RTC_BKP3R_bit at RTC_BKP3R.B10;
    sbit  BKP11_RTC_BKP3R_bit at RTC_BKP3R.B11;
    sbit  BKP12_RTC_BKP3R_bit at RTC_BKP3R.B12;
    sbit  BKP13_RTC_BKP3R_bit at RTC_BKP3R.B13;
    sbit  BKP14_RTC_BKP3R_bit at RTC_BKP3R.B14;
    sbit  BKP15_RTC_BKP3R_bit at RTC_BKP3R.B15;
    sbit  BKP16_RTC_BKP3R_bit at RTC_BKP3R.B16;
    sbit  BKP17_RTC_BKP3R_bit at RTC_BKP3R.B17;
    sbit  BKP18_RTC_BKP3R_bit at RTC_BKP3R.B18;
    sbit  BKP19_RTC_BKP3R_bit at RTC_BKP3R.B19;
    sbit  BKP20_RTC_BKP3R_bit at RTC_BKP3R.B20;
    sbit  BKP21_RTC_BKP3R_bit at RTC_BKP3R.B21;
    sbit  BKP22_RTC_BKP3R_bit at RTC_BKP3R.B22;
    sbit  BKP23_RTC_BKP3R_bit at RTC_BKP3R.B23;
    sbit  BKP24_RTC_BKP3R_bit at RTC_BKP3R.B24;
    sbit  BKP25_RTC_BKP3R_bit at RTC_BKP3R.B25;
    sbit  BKP26_RTC_BKP3R_bit at RTC_BKP3R.B26;
    sbit  BKP27_RTC_BKP3R_bit at RTC_BKP3R.B27;
    sbit  BKP28_RTC_BKP3R_bit at RTC_BKP3R.B28;
    sbit  BKP29_RTC_BKP3R_bit at RTC_BKP3R.B29;
    sbit  BKP30_RTC_BKP3R_bit at RTC_BKP3R.B30;
    sbit  BKP31_RTC_BKP3R_bit at RTC_BKP3R.B31;

sfr unsigned long   volatile RTC_BKP4R            absolute 0x40002860;
    sbit  BKP0_RTC_BKP4R_bit at RTC_BKP4R.B0;
    sbit  BKP1_RTC_BKP4R_bit at RTC_BKP4R.B1;
    sbit  BKP2_RTC_BKP4R_bit at RTC_BKP4R.B2;
    sbit  BKP3_RTC_BKP4R_bit at RTC_BKP4R.B3;
    sbit  BKP4_RTC_BKP4R_bit at RTC_BKP4R.B4;
    sbit  BKP5_RTC_BKP4R_bit at RTC_BKP4R.B5;
    sbit  BKP6_RTC_BKP4R_bit at RTC_BKP4R.B6;
    sbit  BKP7_RTC_BKP4R_bit at RTC_BKP4R.B7;
    sbit  BKP8_RTC_BKP4R_bit at RTC_BKP4R.B8;
    sbit  BKP9_RTC_BKP4R_bit at RTC_BKP4R.B9;
    sbit  BKP10_RTC_BKP4R_bit at RTC_BKP4R.B10;
    sbit  BKP11_RTC_BKP4R_bit at RTC_BKP4R.B11;
    sbit  BKP12_RTC_BKP4R_bit at RTC_BKP4R.B12;
    sbit  BKP13_RTC_BKP4R_bit at RTC_BKP4R.B13;
    sbit  BKP14_RTC_BKP4R_bit at RTC_BKP4R.B14;
    sbit  BKP15_RTC_BKP4R_bit at RTC_BKP4R.B15;
    sbit  BKP16_RTC_BKP4R_bit at RTC_BKP4R.B16;
    sbit  BKP17_RTC_BKP4R_bit at RTC_BKP4R.B17;
    sbit  BKP18_RTC_BKP4R_bit at RTC_BKP4R.B18;
    sbit  BKP19_RTC_BKP4R_bit at RTC_BKP4R.B19;
    sbit  BKP20_RTC_BKP4R_bit at RTC_BKP4R.B20;
    sbit  BKP21_RTC_BKP4R_bit at RTC_BKP4R.B21;
    sbit  BKP22_RTC_BKP4R_bit at RTC_BKP4R.B22;
    sbit  BKP23_RTC_BKP4R_bit at RTC_BKP4R.B23;
    sbit  BKP24_RTC_BKP4R_bit at RTC_BKP4R.B24;
    sbit  BKP25_RTC_BKP4R_bit at RTC_BKP4R.B25;
    sbit  BKP26_RTC_BKP4R_bit at RTC_BKP4R.B26;
    sbit  BKP27_RTC_BKP4R_bit at RTC_BKP4R.B27;
    sbit  BKP28_RTC_BKP4R_bit at RTC_BKP4R.B28;
    sbit  BKP29_RTC_BKP4R_bit at RTC_BKP4R.B29;
    sbit  BKP30_RTC_BKP4R_bit at RTC_BKP4R.B30;
    sbit  BKP31_RTC_BKP4R_bit at RTC_BKP4R.B31;

sfr unsigned long   volatile TIM16_CR1            absolute 0x40014400;
    sbit  CKD0_TIM16_CR1_bit at TIM16_CR1.B8;
    sbit  CKD1_TIM16_CR1_bit at TIM16_CR1.B9;
    sbit  ARPE_TIM16_CR1_bit at TIM16_CR1.B7;
    sbit  OPM_TIM16_CR1_bit at TIM16_CR1.B3;
    sbit  URS_TIM16_CR1_bit at TIM16_CR1.B2;
    sbit  UDIS_TIM16_CR1_bit at TIM16_CR1.B1;
    sbit  CEN_TIM16_CR1_bit at TIM16_CR1.B0;

sfr unsigned long   volatile TIM16_CR2            absolute 0x40014404;
    sbit  OIS1N_TIM16_CR2_bit at TIM16_CR2.B9;
    sbit  OIS1_TIM16_CR2_bit at TIM16_CR2.B8;
    sbit  CCDS_TIM16_CR2_bit at TIM16_CR2.B3;
    sbit  CCUS_TIM16_CR2_bit at TIM16_CR2.B2;
    sbit  CCPC_TIM16_CR2_bit at TIM16_CR2.B0;

sfr unsigned long   volatile TIM16_DIER           absolute 0x4001440C;
    sbit  TDE_TIM16_DIER_bit at TIM16_DIER.B14;
    sbit  CC1DE_TIM16_DIER_bit at TIM16_DIER.B9;
    sbit  UDE_TIM16_DIER_bit at TIM16_DIER.B8;
    sbit  BIE_TIM16_DIER_bit at TIM16_DIER.B7;
    sbit  TIE_TIM16_DIER_bit at TIM16_DIER.B6;
    sbit  COMIE_TIM16_DIER_bit at TIM16_DIER.B5;
    sbit  CC1IE_TIM16_DIER_bit at TIM16_DIER.B1;
    sbit  UIE_TIM16_DIER_bit at TIM16_DIER.B0;

sfr unsigned long   volatile TIM16_SR             absolute 0x40014410;
    sbit  CC1OF_TIM16_SR_bit at TIM16_SR.B9;
    sbit  BIF_TIM16_SR_bit at TIM16_SR.B7;
    sbit  TIF_TIM16_SR_bit at TIM16_SR.B6;
    sbit  COMIF_TIM16_SR_bit at TIM16_SR.B5;
    sbit  CC1IF_TIM16_SR_bit at TIM16_SR.B1;
    sbit  UIF_TIM16_SR_bit at TIM16_SR.B0;

sfr unsigned long   volatile TIM16_EGR            absolute 0x40014414;
    sbit  BG_TIM16_EGR_bit at TIM16_EGR.B7;
    sbit  TG_TIM16_EGR_bit at TIM16_EGR.B6;
    sbit  COMG_TIM16_EGR_bit at TIM16_EGR.B5;
    sbit  CC1G_TIM16_EGR_bit at TIM16_EGR.B1;
    sbit  UG_TIM16_EGR_bit at TIM16_EGR.B0;

sfr unsigned long   volatile TIM16_CCMR1_Output   absolute 0x40014418;
    sbit  OC1M0_TIM16_CCMR1_Output_bit at TIM16_CCMR1_Output.B4;
    sbit  OC1M1_TIM16_CCMR1_Output_bit at TIM16_CCMR1_Output.B5;
    sbit  OC1M2_TIM16_CCMR1_Output_bit at TIM16_CCMR1_Output.B6;
    sbit  OC1PE_TIM16_CCMR1_Output_bit at TIM16_CCMR1_Output.B3;
    sbit  OC1FE_TIM16_CCMR1_Output_bit at TIM16_CCMR1_Output.B2;
    sbit  CC1S0_TIM16_CCMR1_Output_bit at TIM16_CCMR1_Output.B0;
    sbit  CC1S1_TIM16_CCMR1_Output_bit at TIM16_CCMR1_Output.B1;

sfr unsigned long   volatile TIM16_CCMR1_Input    absolute 0x40014418;
    sbit  IC1F0_TIM16_CCMR1_Input_bit at TIM16_CCMR1_Input.B4;
    sbit  IC1F1_TIM16_CCMR1_Input_bit at TIM16_CCMR1_Input.B5;
    sbit  IC1F2_TIM16_CCMR1_Input_bit at TIM16_CCMR1_Input.B6;
    sbit  IC1F3_TIM16_CCMR1_Input_bit at TIM16_CCMR1_Input.B7;
    sbit  IC1PSC0_TIM16_CCMR1_Input_bit at TIM16_CCMR1_Input.B2;
    sbit  IC1PSC1_TIM16_CCMR1_Input_bit at TIM16_CCMR1_Input.B3;
    sbit  CC1S0_TIM16_CCMR1_Input_bit at TIM16_CCMR1_Input.B0;
    sbit  CC1S1_TIM16_CCMR1_Input_bit at TIM16_CCMR1_Input.B1;

sfr unsigned long   volatile TIM16_CCER           absolute 0x40014420;
    sbit  CC1NP_TIM16_CCER_bit at TIM16_CCER.B3;
    sbit  CC1NE_TIM16_CCER_bit at TIM16_CCER.B2;
    sbit  CC1P_TIM16_CCER_bit at TIM16_CCER.B1;
    sbit  CC1E_TIM16_CCER_bit at TIM16_CCER.B0;

sfr unsigned long   volatile TIM16_CNT            absolute 0x40014424;
    sbit  CNT0_TIM16_CNT_bit at TIM16_CNT.B0;
    sbit  CNT1_TIM16_CNT_bit at TIM16_CNT.B1;
    sbit  CNT2_TIM16_CNT_bit at TIM16_CNT.B2;
    sbit  CNT3_TIM16_CNT_bit at TIM16_CNT.B3;
    sbit  CNT4_TIM16_CNT_bit at TIM16_CNT.B4;
    sbit  CNT5_TIM16_CNT_bit at TIM16_CNT.B5;
    sbit  CNT6_TIM16_CNT_bit at TIM16_CNT.B6;
    sbit  CNT7_TIM16_CNT_bit at TIM16_CNT.B7;
    sbit  CNT8_TIM16_CNT_bit at TIM16_CNT.B8;
    sbit  CNT9_TIM16_CNT_bit at TIM16_CNT.B9;
    sbit  CNT10_TIM16_CNT_bit at TIM16_CNT.B10;
    sbit  CNT11_TIM16_CNT_bit at TIM16_CNT.B11;
    sbit  CNT12_TIM16_CNT_bit at TIM16_CNT.B12;
    sbit  CNT13_TIM16_CNT_bit at TIM16_CNT.B13;
    sbit  CNT14_TIM16_CNT_bit at TIM16_CNT.B14;
    sbit  CNT15_TIM16_CNT_bit at TIM16_CNT.B15;

sfr unsigned long   volatile TIM16_PSC            absolute 0x40014428;
    sbit  PSC0_TIM16_PSC_bit at TIM16_PSC.B0;
    sbit  PSC1_TIM16_PSC_bit at TIM16_PSC.B1;
    sbit  PSC2_TIM16_PSC_bit at TIM16_PSC.B2;
    sbit  PSC3_TIM16_PSC_bit at TIM16_PSC.B3;
    sbit  PSC4_TIM16_PSC_bit at TIM16_PSC.B4;
    sbit  PSC5_TIM16_PSC_bit at TIM16_PSC.B5;
    sbit  PSC6_TIM16_PSC_bit at TIM16_PSC.B6;
    sbit  PSC7_TIM16_PSC_bit at TIM16_PSC.B7;
    sbit  PSC8_TIM16_PSC_bit at TIM16_PSC.B8;
    sbit  PSC9_TIM16_PSC_bit at TIM16_PSC.B9;
    sbit  PSC10_TIM16_PSC_bit at TIM16_PSC.B10;
    sbit  PSC11_TIM16_PSC_bit at TIM16_PSC.B11;
    sbit  PSC12_TIM16_PSC_bit at TIM16_PSC.B12;
    sbit  PSC13_TIM16_PSC_bit at TIM16_PSC.B13;
    sbit  PSC14_TIM16_PSC_bit at TIM16_PSC.B14;
    sbit  PSC15_TIM16_PSC_bit at TIM16_PSC.B15;

sfr unsigned long   volatile TIM16_ARR            absolute 0x4001442C;
    sbit  ARR0_TIM16_ARR_bit at TIM16_ARR.B0;
    sbit  ARR1_TIM16_ARR_bit at TIM16_ARR.B1;
    sbit  ARR2_TIM16_ARR_bit at TIM16_ARR.B2;
    sbit  ARR3_TIM16_ARR_bit at TIM16_ARR.B3;
    sbit  ARR4_TIM16_ARR_bit at TIM16_ARR.B4;
    sbit  ARR5_TIM16_ARR_bit at TIM16_ARR.B5;
    sbit  ARR6_TIM16_ARR_bit at TIM16_ARR.B6;
    sbit  ARR7_TIM16_ARR_bit at TIM16_ARR.B7;
    sbit  ARR8_TIM16_ARR_bit at TIM16_ARR.B8;
    sbit  ARR9_TIM16_ARR_bit at TIM16_ARR.B9;
    sbit  ARR10_TIM16_ARR_bit at TIM16_ARR.B10;
    sbit  ARR11_TIM16_ARR_bit at TIM16_ARR.B11;
    sbit  ARR12_TIM16_ARR_bit at TIM16_ARR.B12;
    sbit  ARR13_TIM16_ARR_bit at TIM16_ARR.B13;
    sbit  ARR14_TIM16_ARR_bit at TIM16_ARR.B14;
    sbit  ARR15_TIM16_ARR_bit at TIM16_ARR.B15;

sfr unsigned long   volatile TIM16_RCR            absolute 0x40014430;
    sbit  REP0_TIM16_RCR_bit at TIM16_RCR.B0;
    sbit  REP1_TIM16_RCR_bit at TIM16_RCR.B1;
    sbit  REP2_TIM16_RCR_bit at TIM16_RCR.B2;
    sbit  REP3_TIM16_RCR_bit at TIM16_RCR.B3;
    sbit  REP4_TIM16_RCR_bit at TIM16_RCR.B4;
    sbit  REP5_TIM16_RCR_bit at TIM16_RCR.B5;
    sbit  REP6_TIM16_RCR_bit at TIM16_RCR.B6;
    sbit  REP7_TIM16_RCR_bit at TIM16_RCR.B7;

sfr unsigned long   volatile TIM16_CCR1           absolute 0x40014434;
    sbit  CCR10_TIM16_CCR1_bit at TIM16_CCR1.B0;
    sbit  CCR11_TIM16_CCR1_bit at TIM16_CCR1.B1;
    sbit  CCR12_TIM16_CCR1_bit at TIM16_CCR1.B2;
    sbit  CCR13_TIM16_CCR1_bit at TIM16_CCR1.B3;
    sbit  CCR14_TIM16_CCR1_bit at TIM16_CCR1.B4;
    sbit  CCR15_TIM16_CCR1_bit at TIM16_CCR1.B5;
    sbit  CCR16_TIM16_CCR1_bit at TIM16_CCR1.B6;
    sbit  CCR17_TIM16_CCR1_bit at TIM16_CCR1.B7;
    sbit  CCR18_TIM16_CCR1_bit at TIM16_CCR1.B8;
    sbit  CCR19_TIM16_CCR1_bit at TIM16_CCR1.B9;
    sbit  CCR110_TIM16_CCR1_bit at TIM16_CCR1.B10;
    sbit  CCR111_TIM16_CCR1_bit at TIM16_CCR1.B11;
    sbit  CCR112_TIM16_CCR1_bit at TIM16_CCR1.B12;
    sbit  CCR113_TIM16_CCR1_bit at TIM16_CCR1.B13;
    sbit  CCR114_TIM16_CCR1_bit at TIM16_CCR1.B14;
    sbit  CCR115_TIM16_CCR1_bit at TIM16_CCR1.B15;

sfr unsigned long   volatile TIM16_BDTR           absolute 0x40014444;
    sbit  MOE_TIM16_BDTR_bit at TIM16_BDTR.B15;
    sbit  AOE_TIM16_BDTR_bit at TIM16_BDTR.B14;
    sbit  BKP_TIM16_BDTR_bit at TIM16_BDTR.B13;
    sbit  BKE_TIM16_BDTR_bit at TIM16_BDTR.B12;
    sbit  OSSR_TIM16_BDTR_bit at TIM16_BDTR.B11;
    sbit  OSSI_TIM16_BDTR_bit at TIM16_BDTR.B10;
    sbit  LOCK0_TIM16_BDTR_bit at TIM16_BDTR.B8;
    sbit  LOCK1_TIM16_BDTR_bit at TIM16_BDTR.B9;
    sbit  DTG0_TIM16_BDTR_bit at TIM16_BDTR.B0;
    sbit  DTG1_TIM16_BDTR_bit at TIM16_BDTR.B1;
    sbit  DTG2_TIM16_BDTR_bit at TIM16_BDTR.B2;
    sbit  DTG3_TIM16_BDTR_bit at TIM16_BDTR.B3;
    sbit  DTG4_TIM16_BDTR_bit at TIM16_BDTR.B4;
    sbit  DTG5_TIM16_BDTR_bit at TIM16_BDTR.B5;
    sbit  DTG6_TIM16_BDTR_bit at TIM16_BDTR.B6;
    sbit  DTG7_TIM16_BDTR_bit at TIM16_BDTR.B7;

sfr unsigned long   volatile TIM16_DCR            absolute 0x40014448;
    sbit  DBL0_TIM16_DCR_bit at TIM16_DCR.B8;
    sbit  DBL1_TIM16_DCR_bit at TIM16_DCR.B9;
    sbit  DBL2_TIM16_DCR_bit at TIM16_DCR.B10;
    sbit  DBL3_TIM16_DCR_bit at TIM16_DCR.B11;
    sbit  DBL4_TIM16_DCR_bit at TIM16_DCR.B12;
    sbit  DBA0_TIM16_DCR_bit at TIM16_DCR.B0;
    sbit  DBA1_TIM16_DCR_bit at TIM16_DCR.B1;
    sbit  DBA2_TIM16_DCR_bit at TIM16_DCR.B2;
    sbit  DBA3_TIM16_DCR_bit at TIM16_DCR.B3;
    sbit  DBA4_TIM16_DCR_bit at TIM16_DCR.B4;

sfr unsigned long   volatile TIM16_DMAR           absolute 0x4001444C;
    sbit  DMAB0_TIM16_DMAR_bit at TIM16_DMAR.B0;
    sbit  DMAB1_TIM16_DMAR_bit at TIM16_DMAR.B1;
    sbit  DMAB2_TIM16_DMAR_bit at TIM16_DMAR.B2;
    sbit  DMAB3_TIM16_DMAR_bit at TIM16_DMAR.B3;
    sbit  DMAB4_TIM16_DMAR_bit at TIM16_DMAR.B4;
    sbit  DMAB5_TIM16_DMAR_bit at TIM16_DMAR.B5;
    sbit  DMAB6_TIM16_DMAR_bit at TIM16_DMAR.B6;
    sbit  DMAB7_TIM16_DMAR_bit at TIM16_DMAR.B7;
    sbit  DMAB8_TIM16_DMAR_bit at TIM16_DMAR.B8;
    sbit  DMAB9_TIM16_DMAR_bit at TIM16_DMAR.B9;
    sbit  DMAB10_TIM16_DMAR_bit at TIM16_DMAR.B10;
    sbit  DMAB11_TIM16_DMAR_bit at TIM16_DMAR.B11;
    sbit  DMAB12_TIM16_DMAR_bit at TIM16_DMAR.B12;
    sbit  DMAB13_TIM16_DMAR_bit at TIM16_DMAR.B13;
    sbit  DMAB14_TIM16_DMAR_bit at TIM16_DMAR.B14;
    sbit  DMAB15_TIM16_DMAR_bit at TIM16_DMAR.B15;

sfr unsigned long   volatile TIM17_CR1            absolute 0x40014800;
    sbit  CKD0_TIM17_CR1_bit at TIM17_CR1.B8;
    sbit  CKD1_TIM17_CR1_bit at TIM17_CR1.B9;
    sbit  ARPE_TIM17_CR1_bit at TIM17_CR1.B7;
    sbit  OPM_TIM17_CR1_bit at TIM17_CR1.B3;
    sbit  URS_TIM17_CR1_bit at TIM17_CR1.B2;
    sbit  UDIS_TIM17_CR1_bit at TIM17_CR1.B1;
    sbit  CEN_TIM17_CR1_bit at TIM17_CR1.B0;

sfr unsigned long   volatile TIM17_CR2            absolute 0x40014804;
    sbit  OIS1N_TIM17_CR2_bit at TIM17_CR2.B9;
    sbit  OIS1_TIM17_CR2_bit at TIM17_CR2.B8;
    sbit  CCDS_TIM17_CR2_bit at TIM17_CR2.B3;
    sbit  CCUS_TIM17_CR2_bit at TIM17_CR2.B2;
    sbit  CCPC_TIM17_CR2_bit at TIM17_CR2.B0;

sfr unsigned long   volatile TIM17_DIER           absolute 0x4001480C;
    sbit  TDE_TIM17_DIER_bit at TIM17_DIER.B14;
    sbit  CC1DE_TIM17_DIER_bit at TIM17_DIER.B9;
    sbit  UDE_TIM17_DIER_bit at TIM17_DIER.B8;
    sbit  BIE_TIM17_DIER_bit at TIM17_DIER.B7;
    sbit  TIE_TIM17_DIER_bit at TIM17_DIER.B6;
    sbit  COMIE_TIM17_DIER_bit at TIM17_DIER.B5;
    sbit  CC1IE_TIM17_DIER_bit at TIM17_DIER.B1;
    sbit  UIE_TIM17_DIER_bit at TIM17_DIER.B0;

sfr unsigned long   volatile TIM17_SR             absolute 0x40014810;
    sbit  CC1OF_TIM17_SR_bit at TIM17_SR.B9;
    sbit  BIF_TIM17_SR_bit at TIM17_SR.B7;
    sbit  TIF_TIM17_SR_bit at TIM17_SR.B6;
    sbit  COMIF_TIM17_SR_bit at TIM17_SR.B5;
    sbit  CC1IF_TIM17_SR_bit at TIM17_SR.B1;
    sbit  UIF_TIM17_SR_bit at TIM17_SR.B0;

sfr unsigned long   volatile TIM17_EGR            absolute 0x40014814;
    sbit  BG_TIM17_EGR_bit at TIM17_EGR.B7;
    sbit  TG_TIM17_EGR_bit at TIM17_EGR.B6;
    sbit  COMG_TIM17_EGR_bit at TIM17_EGR.B5;
    sbit  CC1G_TIM17_EGR_bit at TIM17_EGR.B1;
    sbit  UG_TIM17_EGR_bit at TIM17_EGR.B0;

sfr unsigned long   volatile TIM17_CCMR1_Output   absolute 0x40014818;
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
    sbit  MOE_TIM17_BDTR_bit at TIM17_BDTR.B15;
    sbit  AOE_TIM17_BDTR_bit at TIM17_BDTR.B14;
    sbit  BKP_TIM17_BDTR_bit at TIM17_BDTR.B13;
    sbit  BKE_TIM17_BDTR_bit at TIM17_BDTR.B12;
    sbit  OSSR_TIM17_BDTR_bit at TIM17_BDTR.B11;
    sbit  OSSI_TIM17_BDTR_bit at TIM17_BDTR.B10;
    sbit  LOCK0_TIM17_BDTR_bit at TIM17_BDTR.B8;
    sbit  LOCK1_TIM17_BDTR_bit at TIM17_BDTR.B9;
    sbit  DTG0_TIM17_BDTR_bit at TIM17_BDTR.B0;
    sbit  DTG1_TIM17_BDTR_bit at TIM17_BDTR.B1;
    sbit  DTG2_TIM17_BDTR_bit at TIM17_BDTR.B2;
    sbit  DTG3_TIM17_BDTR_bit at TIM17_BDTR.B3;
    sbit  DTG4_TIM17_BDTR_bit at TIM17_BDTR.B4;
    sbit  DTG5_TIM17_BDTR_bit at TIM17_BDTR.B5;
    sbit  DTG6_TIM17_BDTR_bit at TIM17_BDTR.B6;
    sbit  DTG7_TIM17_BDTR_bit at TIM17_BDTR.B7;

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

sfr unsigned long   volatile TSC_CR               absolute 0x40024000;
    const register unsigned short int CTPH0 = 28;
    sbit  CTPH0_bit at TSC_CR.B28;
    const register unsigned short int CTPH1 = 29;
    sbit  CTPH1_bit at TSC_CR.B29;
    const register unsigned short int CTPH2 = 30;
    sbit  CTPH2_bit at TSC_CR.B30;
    const register unsigned short int CTPH3 = 31;
    sbit  CTPH3_bit at TSC_CR.B31;
    const register unsigned short int CTPL0 = 24;
    sbit  CTPL0_bit at TSC_CR.B24;
    const register unsigned short int CTPL1 = 25;
    sbit  CTPL1_bit at TSC_CR.B25;
    const register unsigned short int CTPL2 = 26;
    sbit  CTPL2_bit at TSC_CR.B26;
    const register unsigned short int CTPL3 = 27;
    sbit  CTPL3_bit at TSC_CR.B27;
    const register unsigned short int SSD0 = 17;
    sbit  SSD0_bit at TSC_CR.B17;
    const register unsigned short int SSD1 = 18;
    sbit  SSD1_bit at TSC_CR.B18;
    const register unsigned short int SSD2 = 19;
    sbit  SSD2_bit at TSC_CR.B19;
    const register unsigned short int SSD3 = 20;
    sbit  SSD3_bit at TSC_CR.B20;
    const register unsigned short int SSD4 = 21;
    sbit  SSD4_bit at TSC_CR.B21;
    const register unsigned short int SSD5 = 22;
    sbit  SSD5_bit at TSC_CR.B22;
    const register unsigned short int SSD6 = 23;
    sbit  SSD6_bit at TSC_CR.B23;
    const register unsigned short int SSE = 16;
    sbit  SSE_bit at TSC_CR.B16;
    const register unsigned short int SSPSC = 15;
    sbit  SSPSC_bit at TSC_CR.B15;
    const register unsigned short int PGPSC0 = 12;
    sbit  PGPSC0_bit at TSC_CR.B12;
    const register unsigned short int PGPSC1 = 13;
    sbit  PGPSC1_bit at TSC_CR.B13;
    const register unsigned short int PGPSC2 = 14;
    sbit  PGPSC2_bit at TSC_CR.B14;
    const register unsigned short int MCV0 = 5;
    sbit  MCV0_bit at TSC_CR.B5;
    const register unsigned short int MCV1 = 6;
    sbit  MCV1_bit at TSC_CR.B6;
    const register unsigned short int MCV2 = 7;
    sbit  MCV2_bit at TSC_CR.B7;
    const register unsigned short int IODEF = 4;
    sbit  IODEF_bit at TSC_CR.B4;
    const register unsigned short int SYNCPOL = 3;
    sbit  SYNCPOL_bit at TSC_CR.B3;
    const register unsigned short int AM = 2;
    sbit  AM_bit at TSC_CR.B2;
    sbit  START_TSC_CR_bit at TSC_CR.B1;
    const register unsigned short int TSCE = 0;
    sbit  TSCE_bit at TSC_CR.B0;

sfr unsigned long   volatile TSC_IER              absolute 0x40024004;
    const register unsigned short int MCEIE = 1;
    sbit  MCEIE_bit at TSC_IER.B1;
    const register unsigned short int EOAIE = 0;
    sbit  EOAIE_bit at TSC_IER.B0;

sfr unsigned long   volatile TSC_ICR              absolute 0x40024008;
    const register unsigned short int MCEIC = 1;
    sbit  MCEIC_bit at TSC_ICR.B1;
    const register unsigned short int EOAIC = 0;
    sbit  EOAIC_bit at TSC_ICR.B0;

sfr unsigned long   volatile TSC_ISR              absolute 0x4002400C;
    const register unsigned short int MCEF = 1;
    sbit  MCEF_bit at TSC_ISR.B1;
    const register unsigned short int EOAF = 0;
    sbit  EOAF_bit at TSC_ISR.B0;

sfr unsigned long   volatile TSC_IOHCR            absolute 0x40024010;
    const register unsigned short int G6_IO4 = 23;
    sbit  G6_IO4_bit at TSC_IOHCR.B23;
    const register unsigned short int G6_IO3 = 22;
    sbit  G6_IO3_bit at TSC_IOHCR.B22;
    const register unsigned short int G6_IO2 = 21;
    sbit  G6_IO2_bit at TSC_IOHCR.B21;
    const register unsigned short int G6_IO1 = 20;
    sbit  G6_IO1_bit at TSC_IOHCR.B20;
    const register unsigned short int G5_IO4 = 19;
    sbit  G5_IO4_bit at TSC_IOHCR.B19;
    const register unsigned short int G5_IO3 = 18;
    sbit  G5_IO3_bit at TSC_IOHCR.B18;
    const register unsigned short int G5_IO2 = 17;
    sbit  G5_IO2_bit at TSC_IOHCR.B17;
    const register unsigned short int G5_IO1 = 16;
    sbit  G5_IO1_bit at TSC_IOHCR.B16;
    const register unsigned short int G4_IO4 = 15;
    sbit  G4_IO4_bit at TSC_IOHCR.B15;
    const register unsigned short int G4_IO3 = 14;
    sbit  G4_IO3_bit at TSC_IOHCR.B14;
    const register unsigned short int G4_IO2 = 13;
    sbit  G4_IO2_bit at TSC_IOHCR.B13;
    const register unsigned short int G4_IO1 = 12;
    sbit  G4_IO1_bit at TSC_IOHCR.B12;
    const register unsigned short int G3_IO4 = 11;
    sbit  G3_IO4_bit at TSC_IOHCR.B11;
    const register unsigned short int G3_IO3 = 10;
    sbit  G3_IO3_bit at TSC_IOHCR.B10;
    const register unsigned short int G3_IO2 = 9;
    sbit  G3_IO2_bit at TSC_IOHCR.B9;
    const register unsigned short int G3_IO1 = 8;
    sbit  G3_IO1_bit at TSC_IOHCR.B8;
    const register unsigned short int G2_IO4 = 7;
    sbit  G2_IO4_bit at TSC_IOHCR.B7;
    const register unsigned short int G2_IO3 = 6;
    sbit  G2_IO3_bit at TSC_IOHCR.B6;
    const register unsigned short int G2_IO2 = 5;
    sbit  G2_IO2_bit at TSC_IOHCR.B5;
    const register unsigned short int G2_IO1 = 4;
    sbit  G2_IO1_bit at TSC_IOHCR.B4;
    const register unsigned short int G1_IO4 = 3;
    sbit  G1_IO4_bit at TSC_IOHCR.B3;
    const register unsigned short int G1_IO3 = 2;
    sbit  G1_IO3_bit at TSC_IOHCR.B2;
    const register unsigned short int G1_IO2 = 1;
    sbit  G1_IO2_bit at TSC_IOHCR.B1;
    const register unsigned short int G1_IO1 = 0;
    sbit  G1_IO1_bit at TSC_IOHCR.B0;

sfr unsigned long   volatile TSC_IOASCR           absolute 0x40024018;
    sbit  G6_IO4_TSC_IOASCR_bit at TSC_IOASCR.B23;
    sbit  G6_IO3_TSC_IOASCR_bit at TSC_IOASCR.B22;
    sbit  G6_IO2_TSC_IOASCR_bit at TSC_IOASCR.B21;
    sbit  G6_IO1_TSC_IOASCR_bit at TSC_IOASCR.B20;
    sbit  G5_IO4_TSC_IOASCR_bit at TSC_IOASCR.B19;
    sbit  G5_IO3_TSC_IOASCR_bit at TSC_IOASCR.B18;
    sbit  G5_IO2_TSC_IOASCR_bit at TSC_IOASCR.B17;
    sbit  G5_IO1_TSC_IOASCR_bit at TSC_IOASCR.B16;
    sbit  G4_IO4_TSC_IOASCR_bit at TSC_IOASCR.B15;
    sbit  G4_IO3_TSC_IOASCR_bit at TSC_IOASCR.B14;
    sbit  G4_IO2_TSC_IOASCR_bit at TSC_IOASCR.B13;
    sbit  G4_IO1_TSC_IOASCR_bit at TSC_IOASCR.B12;
    sbit  G3_IO4_TSC_IOASCR_bit at TSC_IOASCR.B11;
    sbit  G3_IO3_TSC_IOASCR_bit at TSC_IOASCR.B10;
    sbit  G3_IO2_TSC_IOASCR_bit at TSC_IOASCR.B9;
    sbit  G3_IO1_TSC_IOASCR_bit at TSC_IOASCR.B8;
    sbit  G2_IO4_TSC_IOASCR_bit at TSC_IOASCR.B7;
    sbit  G2_IO3_TSC_IOASCR_bit at TSC_IOASCR.B6;
    sbit  G2_IO2_TSC_IOASCR_bit at TSC_IOASCR.B5;
    sbit  G2_IO1_TSC_IOASCR_bit at TSC_IOASCR.B4;
    sbit  G1_IO4_TSC_IOASCR_bit at TSC_IOASCR.B3;
    sbit  G1_IO3_TSC_IOASCR_bit at TSC_IOASCR.B2;
    sbit  G1_IO2_TSC_IOASCR_bit at TSC_IOASCR.B1;
    sbit  G1_IO1_TSC_IOASCR_bit at TSC_IOASCR.B0;

sfr unsigned long   volatile TSC_IOSCR            absolute 0x40024020;
    sbit  G6_IO4_TSC_IOSCR_bit at TSC_IOSCR.B23;
    sbit  G6_IO3_TSC_IOSCR_bit at TSC_IOSCR.B22;
    sbit  G6_IO2_TSC_IOSCR_bit at TSC_IOSCR.B21;
    sbit  G6_IO1_TSC_IOSCR_bit at TSC_IOSCR.B20;
    sbit  G5_IO4_TSC_IOSCR_bit at TSC_IOSCR.B19;
    sbit  G5_IO3_TSC_IOSCR_bit at TSC_IOSCR.B18;
    sbit  G5_IO2_TSC_IOSCR_bit at TSC_IOSCR.B17;
    sbit  G5_IO1_TSC_IOSCR_bit at TSC_IOSCR.B16;
    sbit  G4_IO4_TSC_IOSCR_bit at TSC_IOSCR.B15;
    sbit  G4_IO3_TSC_IOSCR_bit at TSC_IOSCR.B14;
    sbit  G4_IO2_TSC_IOSCR_bit at TSC_IOSCR.B13;
    sbit  G4_IO1_TSC_IOSCR_bit at TSC_IOSCR.B12;
    sbit  G3_IO4_TSC_IOSCR_bit at TSC_IOSCR.B11;
    sbit  G3_IO3_TSC_IOSCR_bit at TSC_IOSCR.B10;
    sbit  G3_IO2_TSC_IOSCR_bit at TSC_IOSCR.B9;
    sbit  G3_IO1_TSC_IOSCR_bit at TSC_IOSCR.B8;
    sbit  G2_IO4_TSC_IOSCR_bit at TSC_IOSCR.B7;
    sbit  G2_IO3_TSC_IOSCR_bit at TSC_IOSCR.B6;
    sbit  G2_IO2_TSC_IOSCR_bit at TSC_IOSCR.B5;
    sbit  G2_IO1_TSC_IOSCR_bit at TSC_IOSCR.B4;
    sbit  G1_IO4_TSC_IOSCR_bit at TSC_IOSCR.B3;
    sbit  G1_IO3_TSC_IOSCR_bit at TSC_IOSCR.B2;
    sbit  G1_IO2_TSC_IOSCR_bit at TSC_IOSCR.B1;
    sbit  G1_IO1_TSC_IOSCR_bit at TSC_IOSCR.B0;

sfr unsigned long   volatile TSC_IOCCR            absolute 0x40024028;
    sbit  G6_IO4_TSC_IOCCR_bit at TSC_IOCCR.B23;
    sbit  G6_IO3_TSC_IOCCR_bit at TSC_IOCCR.B22;
    sbit  G6_IO2_TSC_IOCCR_bit at TSC_IOCCR.B21;
    sbit  G6_IO1_TSC_IOCCR_bit at TSC_IOCCR.B20;
    sbit  G5_IO4_TSC_IOCCR_bit at TSC_IOCCR.B19;
    sbit  G5_IO3_TSC_IOCCR_bit at TSC_IOCCR.B18;
    sbit  G5_IO2_TSC_IOCCR_bit at TSC_IOCCR.B17;
    sbit  G5_IO1_TSC_IOCCR_bit at TSC_IOCCR.B16;
    sbit  G4_IO4_TSC_IOCCR_bit at TSC_IOCCR.B15;
    sbit  G4_IO3_TSC_IOCCR_bit at TSC_IOCCR.B14;
    sbit  G4_IO2_TSC_IOCCR_bit at TSC_IOCCR.B13;
    sbit  G4_IO1_TSC_IOCCR_bit at TSC_IOCCR.B12;
    sbit  G3_IO4_TSC_IOCCR_bit at TSC_IOCCR.B11;
    sbit  G3_IO3_TSC_IOCCR_bit at TSC_IOCCR.B10;
    sbit  G3_IO2_TSC_IOCCR_bit at TSC_IOCCR.B9;
    sbit  G3_IO1_TSC_IOCCR_bit at TSC_IOCCR.B8;
    sbit  G2_IO4_TSC_IOCCR_bit at TSC_IOCCR.B7;
    sbit  G2_IO3_TSC_IOCCR_bit at TSC_IOCCR.B6;
    sbit  G2_IO2_TSC_IOCCR_bit at TSC_IOCCR.B5;
    sbit  G2_IO1_TSC_IOCCR_bit at TSC_IOCCR.B4;
    sbit  G1_IO4_TSC_IOCCR_bit at TSC_IOCCR.B3;
    sbit  G1_IO3_TSC_IOCCR_bit at TSC_IOCCR.B2;
    sbit  G1_IO2_TSC_IOCCR_bit at TSC_IOCCR.B1;
    sbit  G1_IO1_TSC_IOCCR_bit at TSC_IOCCR.B0;

sfr unsigned long   volatile TSC_IOGCSR           absolute 0x40024030;
    const register unsigned short int G8S = 23;
    sbit  G8S_bit at TSC_IOGCSR.B23;
    const register unsigned short int G7S = 22;
    sbit  G7S_bit at TSC_IOGCSR.B22;
    const register unsigned short int G6S = 21;
    sbit  G6S_bit at TSC_IOGCSR.B21;
    const register unsigned short int G5S = 20;
    sbit  G5S_bit at TSC_IOGCSR.B20;
    const register unsigned short int G4S = 19;
    sbit  G4S_bit at TSC_IOGCSR.B19;
    const register unsigned short int G3S = 18;
    sbit  G3S_bit at TSC_IOGCSR.B18;
    const register unsigned short int G2S = 17;
    sbit  G2S_bit at TSC_IOGCSR.B17;
    const register unsigned short int G1S = 16;
    sbit  G1S_bit at TSC_IOGCSR.B16;
    const register unsigned short int G8E = 7;
    sbit  G8E_bit at TSC_IOGCSR.B7;
    const register unsigned short int G7E = 6;
    sbit  G7E_bit at TSC_IOGCSR.B6;
    const register unsigned short int G6E = 5;
    sbit  G6E_bit at TSC_IOGCSR.B5;
    const register unsigned short int G5E = 4;
    sbit  G5E_bit at TSC_IOGCSR.B4;
    const register unsigned short int G4E = 3;
    sbit  G4E_bit at TSC_IOGCSR.B3;
    const register unsigned short int G3E = 2;
    sbit  G3E_bit at TSC_IOGCSR.B2;
    const register unsigned short int G2E = 1;
    sbit  G2E_bit at TSC_IOGCSR.B1;
    const register unsigned short int G1E = 0;
    sbit  G1E_bit at TSC_IOGCSR.B0;

sfr unsigned long   volatile TSC_IOG1CR           absolute 0x40024034;
    sbit  CNT0_TSC_IOG1CR_bit at TSC_IOG1CR.B0;
    sbit  CNT1_TSC_IOG1CR_bit at TSC_IOG1CR.B1;
    sbit  CNT2_TSC_IOG1CR_bit at TSC_IOG1CR.B2;
    sbit  CNT3_TSC_IOG1CR_bit at TSC_IOG1CR.B3;
    sbit  CNT4_TSC_IOG1CR_bit at TSC_IOG1CR.B4;
    sbit  CNT5_TSC_IOG1CR_bit at TSC_IOG1CR.B5;
    sbit  CNT6_TSC_IOG1CR_bit at TSC_IOG1CR.B6;
    sbit  CNT7_TSC_IOG1CR_bit at TSC_IOG1CR.B7;
    sbit  CNT8_TSC_IOG1CR_bit at TSC_IOG1CR.B8;
    sbit  CNT9_TSC_IOG1CR_bit at TSC_IOG1CR.B9;
    sbit  CNT10_TSC_IOG1CR_bit at TSC_IOG1CR.B10;
    sbit  CNT11_TSC_IOG1CR_bit at TSC_IOG1CR.B11;
    sbit  CNT12_TSC_IOG1CR_bit at TSC_IOG1CR.B12;
    sbit  CNT13_TSC_IOG1CR_bit at TSC_IOG1CR.B13;

sfr unsigned long   volatile TSC_IOG2CR           absolute 0x40024038;
    sbit  CNT0_TSC_IOG2CR_bit at TSC_IOG2CR.B0;
    sbit  CNT1_TSC_IOG2CR_bit at TSC_IOG2CR.B1;
    sbit  CNT2_TSC_IOG2CR_bit at TSC_IOG2CR.B2;
    sbit  CNT3_TSC_IOG2CR_bit at TSC_IOG2CR.B3;
    sbit  CNT4_TSC_IOG2CR_bit at TSC_IOG2CR.B4;
    sbit  CNT5_TSC_IOG2CR_bit at TSC_IOG2CR.B5;
    sbit  CNT6_TSC_IOG2CR_bit at TSC_IOG2CR.B6;
    sbit  CNT7_TSC_IOG2CR_bit at TSC_IOG2CR.B7;
    sbit  CNT8_TSC_IOG2CR_bit at TSC_IOG2CR.B8;
    sbit  CNT9_TSC_IOG2CR_bit at TSC_IOG2CR.B9;
    sbit  CNT10_TSC_IOG2CR_bit at TSC_IOG2CR.B10;
    sbit  CNT11_TSC_IOG2CR_bit at TSC_IOG2CR.B11;
    sbit  CNT12_TSC_IOG2CR_bit at TSC_IOG2CR.B12;
    sbit  CNT13_TSC_IOG2CR_bit at TSC_IOG2CR.B13;

sfr unsigned long   volatile TSC_IOG3CR           absolute 0x4002403C;
    sbit  CNT0_TSC_IOG3CR_bit at TSC_IOG3CR.B0;
    sbit  CNT1_TSC_IOG3CR_bit at TSC_IOG3CR.B1;
    sbit  CNT2_TSC_IOG3CR_bit at TSC_IOG3CR.B2;
    sbit  CNT3_TSC_IOG3CR_bit at TSC_IOG3CR.B3;
    sbit  CNT4_TSC_IOG3CR_bit at TSC_IOG3CR.B4;
    sbit  CNT5_TSC_IOG3CR_bit at TSC_IOG3CR.B5;
    sbit  CNT6_TSC_IOG3CR_bit at TSC_IOG3CR.B6;
    sbit  CNT7_TSC_IOG3CR_bit at TSC_IOG3CR.B7;
    sbit  CNT8_TSC_IOG3CR_bit at TSC_IOG3CR.B8;
    sbit  CNT9_TSC_IOG3CR_bit at TSC_IOG3CR.B9;
    sbit  CNT10_TSC_IOG3CR_bit at TSC_IOG3CR.B10;
    sbit  CNT11_TSC_IOG3CR_bit at TSC_IOG3CR.B11;
    sbit  CNT12_TSC_IOG3CR_bit at TSC_IOG3CR.B12;
    sbit  CNT13_TSC_IOG3CR_bit at TSC_IOG3CR.B13;

sfr unsigned long   volatile TSC_IOG4CR           absolute 0x40024040;
    sbit  CNT0_TSC_IOG4CR_bit at TSC_IOG4CR.B0;
    sbit  CNT1_TSC_IOG4CR_bit at TSC_IOG4CR.B1;
    sbit  CNT2_TSC_IOG4CR_bit at TSC_IOG4CR.B2;
    sbit  CNT3_TSC_IOG4CR_bit at TSC_IOG4CR.B3;
    sbit  CNT4_TSC_IOG4CR_bit at TSC_IOG4CR.B4;
    sbit  CNT5_TSC_IOG4CR_bit at TSC_IOG4CR.B5;
    sbit  CNT6_TSC_IOG4CR_bit at TSC_IOG4CR.B6;
    sbit  CNT7_TSC_IOG4CR_bit at TSC_IOG4CR.B7;
    sbit  CNT8_TSC_IOG4CR_bit at TSC_IOG4CR.B8;
    sbit  CNT9_TSC_IOG4CR_bit at TSC_IOG4CR.B9;
    sbit  CNT10_TSC_IOG4CR_bit at TSC_IOG4CR.B10;
    sbit  CNT11_TSC_IOG4CR_bit at TSC_IOG4CR.B11;
    sbit  CNT12_TSC_IOG4CR_bit at TSC_IOG4CR.B12;
    sbit  CNT13_TSC_IOG4CR_bit at TSC_IOG4CR.B13;

sfr unsigned long   volatile TSC_IOG5CR           absolute 0x40024044;
    sbit  CNT0_TSC_IOG5CR_bit at TSC_IOG5CR.B0;
    sbit  CNT1_TSC_IOG5CR_bit at TSC_IOG5CR.B1;
    sbit  CNT2_TSC_IOG5CR_bit at TSC_IOG5CR.B2;
    sbit  CNT3_TSC_IOG5CR_bit at TSC_IOG5CR.B3;
    sbit  CNT4_TSC_IOG5CR_bit at TSC_IOG5CR.B4;
    sbit  CNT5_TSC_IOG5CR_bit at TSC_IOG5CR.B5;
    sbit  CNT6_TSC_IOG5CR_bit at TSC_IOG5CR.B6;
    sbit  CNT7_TSC_IOG5CR_bit at TSC_IOG5CR.B7;
    sbit  CNT8_TSC_IOG5CR_bit at TSC_IOG5CR.B8;
    sbit  CNT9_TSC_IOG5CR_bit at TSC_IOG5CR.B9;
    sbit  CNT10_TSC_IOG5CR_bit at TSC_IOG5CR.B10;
    sbit  CNT11_TSC_IOG5CR_bit at TSC_IOG5CR.B11;
    sbit  CNT12_TSC_IOG5CR_bit at TSC_IOG5CR.B12;
    sbit  CNT13_TSC_IOG5CR_bit at TSC_IOG5CR.B13;

sfr unsigned long   volatile TSC_IOG6CR           absolute 0x40024048;
    sbit  CNT0_TSC_IOG6CR_bit at TSC_IOG6CR.B0;
    sbit  CNT1_TSC_IOG6CR_bit at TSC_IOG6CR.B1;
    sbit  CNT2_TSC_IOG6CR_bit at TSC_IOG6CR.B2;
    sbit  CNT3_TSC_IOG6CR_bit at TSC_IOG6CR.B3;
    sbit  CNT4_TSC_IOG6CR_bit at TSC_IOG6CR.B4;
    sbit  CNT5_TSC_IOG6CR_bit at TSC_IOG6CR.B5;
    sbit  CNT6_TSC_IOG6CR_bit at TSC_IOG6CR.B6;
    sbit  CNT7_TSC_IOG6CR_bit at TSC_IOG6CR.B7;
    sbit  CNT8_TSC_IOG6CR_bit at TSC_IOG6CR.B8;
    sbit  CNT9_TSC_IOG6CR_bit at TSC_IOG6CR.B9;
    sbit  CNT10_TSC_IOG6CR_bit at TSC_IOG6CR.B10;
    sbit  CNT11_TSC_IOG6CR_bit at TSC_IOG6CR.B11;
    sbit  CNT12_TSC_IOG6CR_bit at TSC_IOG6CR.B12;
    sbit  CNT13_TSC_IOG6CR_bit at TSC_IOG6CR.B13;

sfr unsigned long   volatile CEC_CR               absolute 0x40007800;
    const register unsigned short int TXEOM = 2;
    sbit  TXEOM_bit at CEC_CR.B2;
    const register unsigned short int TXSOM = 1;
    sbit  TXSOM_bit at CEC_CR.B1;
    sbit  CECEN_CEC_CR_bit at CEC_CR.B0;

sfr unsigned long   volatile CEC_CFGR             absolute 0x40007804;
    const register unsigned short int LBPEGEN = 11;
    sbit  LBPEGEN_bit at CEC_CFGR.B11;
    const register unsigned short int BREGEN = 10;
    sbit  BREGEN_bit at CEC_CFGR.B10;
    const register unsigned short int BRESTP = 9;
    sbit  BRESTP_bit at CEC_CFGR.B9;
    const register unsigned short int RXTOL = 8;
    sbit  RXTOL_bit at CEC_CFGR.B8;
    const register unsigned short int SFT0 = 5;
    sbit  SFT0_bit at CEC_CFGR.B5;
    const register unsigned short int SFT1 = 6;
    sbit  SFT1_bit at CEC_CFGR.B6;
    const register unsigned short int SFT2 = 7;
    sbit  SFT2_bit at CEC_CFGR.B7;
    const register unsigned short int LSTN = 4;
    sbit  LSTN_bit at CEC_CFGR.B4;
    const register unsigned short int OAR0 = 0;
    sbit  OAR0_bit at CEC_CFGR.B0;
    const register unsigned short int OAR1 = 1;
    sbit  OAR1_bit at CEC_CFGR.B1;
    const register unsigned short int OAR2 = 2;
    sbit  OAR2_bit at CEC_CFGR.B2;
    const register unsigned short int OAR3 = 3;
    sbit  OAR3_bit at CEC_CFGR.B3;

sfr unsigned long   volatile CEC_TXDR             absolute 0x40007808;
    const register unsigned short int TXD0 = 0;
    sbit  TXD0_bit at CEC_TXDR.B0;
    const register unsigned short int TXD1 = 1;
    sbit  TXD1_bit at CEC_TXDR.B1;
    const register unsigned short int TXD2 = 2;
    sbit  TXD2_bit at CEC_TXDR.B2;
    const register unsigned short int TXD3 = 3;
    sbit  TXD3_bit at CEC_TXDR.B3;
    const register unsigned short int TXD4 = 4;
    sbit  TXD4_bit at CEC_TXDR.B4;
    const register unsigned short int TXD5 = 5;
    sbit  TXD5_bit at CEC_TXDR.B5;
    const register unsigned short int TXD6 = 6;
    sbit  TXD6_bit at CEC_TXDR.B6;
    const register unsigned short int TXD7 = 7;
    sbit  TXD7_bit at CEC_TXDR.B7;

sfr unsigned long   volatile CEC_RXDR             absolute 0x4000780C;
    const register unsigned short int RXDR0 = 0;
    sbit  RXDR0_bit at CEC_RXDR.B0;
    const register unsigned short int RXDR1 = 1;
    sbit  RXDR1_bit at CEC_RXDR.B1;
    const register unsigned short int RXDR2 = 2;
    sbit  RXDR2_bit at CEC_RXDR.B2;
    const register unsigned short int RXDR3 = 3;
    sbit  RXDR3_bit at CEC_RXDR.B3;
    const register unsigned short int RXDR4 = 4;
    sbit  RXDR4_bit at CEC_RXDR.B4;
    const register unsigned short int RXDR5 = 5;
    sbit  RXDR5_bit at CEC_RXDR.B5;
    const register unsigned short int RXDR6 = 6;
    sbit  RXDR6_bit at CEC_RXDR.B6;
    const register unsigned short int RXDR7 = 7;
    sbit  RXDR7_bit at CEC_RXDR.B7;

sfr unsigned long   volatile CEC_ISR              absolute 0x40007810;
    const register unsigned short int TXACKE = 12;
    sbit  TXACKE_bit at CEC_ISR.B12;
    const register unsigned short int TXERR = 11;
    sbit  TXERR_bit at CEC_ISR.B11;
    const register unsigned short int TXUDR = 10;
    sbit  TXUDR_bit at CEC_ISR.B10;
    const register unsigned short int TXEND = 9;
    sbit  TXEND_bit at CEC_ISR.B9;
    const register unsigned short int TXBR = 8;
    sbit  TXBR_bit at CEC_ISR.B8;
    const register unsigned short int ARBLST = 7;
    sbit  ARBLST_bit at CEC_ISR.B7;
    const register unsigned short int RXACKE = 6;
    sbit  RXACKE_bit at CEC_ISR.B6;
    const register unsigned short int LBPE = 5;
    sbit  LBPE_bit at CEC_ISR.B5;
    const register unsigned short int SBPE = 4;
    sbit  SBPE_bit at CEC_ISR.B4;
    sbit  BRE_CEC_ISR_bit at CEC_ISR.B3;
    const register unsigned short int RXOVR = 2;
    sbit  RXOVR_bit at CEC_ISR.B2;
    const register unsigned short int RXEND = 1;
    sbit  RXEND_bit at CEC_ISR.B1;
    const register unsigned short int RXBR = 0;
    sbit  RXBR_bit at CEC_ISR.B0;

sfr unsigned long   volatile CEC_IER              absolute 0x40007814;
    const register unsigned short int TXACKIE = 12;
    sbit  TXACKIE_bit at CEC_IER.B12;
    const register unsigned short int TXERRIE = 11;
    sbit  TXERRIE_bit at CEC_IER.B11;
    const register unsigned short int TXUDRIE = 10;
    sbit  TXUDRIE_bit at CEC_IER.B10;
    const register unsigned short int TXENDIE = 9;
    sbit  TXENDIE_bit at CEC_IER.B9;
    const register unsigned short int TXBRIE = 8;
    sbit  TXBRIE_bit at CEC_IER.B8;
    const register unsigned short int ARBLSTIE = 7;
    sbit  ARBLSTIE_bit at CEC_IER.B7;
    const register unsigned short int RXACKIE = 6;
    sbit  RXACKIE_bit at CEC_IER.B6;
    const register unsigned short int LBPEIE = 5;
    sbit  LBPEIE_bit at CEC_IER.B5;
    const register unsigned short int SBPEIE = 4;
    sbit  SBPEIE_bit at CEC_IER.B4;
    const register unsigned short int BREIE = 3;
    sbit  BREIE_bit at CEC_IER.B3;
    const register unsigned short int RXOVRIE = 2;
    sbit  RXOVRIE_bit at CEC_IER.B2;
    const register unsigned short int RXENDIE = 1;
    sbit  RXENDIE_bit at CEC_IER.B1;
    const register unsigned short int RXBRIE = 0;
    sbit  RXBRIE_bit at CEC_IER.B0;

sfr unsigned long   volatile FLASH_ACR            absolute 0x40022000;
    const register unsigned short int LATENCY0 = 0;
    sbit  LATENCY0_bit at FLASH_ACR.B0;
    const register unsigned short int LATENCY1 = 1;
    sbit  LATENCY1_bit at FLASH_ACR.B1;
    const register unsigned short int LATENCY2 = 2;
    sbit  LATENCY2_bit at FLASH_ACR.B2;
    const register unsigned short int PRFTBE = 4;
    sbit  PRFTBE_bit at FLASH_ACR.B4;
    const register unsigned short int PRFTBS = 5;
    sbit  PRFTBS_bit at FLASH_ACR.B5;

sfr unsigned long   volatile FLASH_KEYR           absolute 0x40022004;
    const register unsigned short int FKEYR0 = 0;
    sbit  FKEYR0_bit at FLASH_KEYR.B0;
    const register unsigned short int FKEYR1 = 1;
    sbit  FKEYR1_bit at FLASH_KEYR.B1;
    const register unsigned short int FKEYR2 = 2;
    sbit  FKEYR2_bit at FLASH_KEYR.B2;
    const register unsigned short int FKEYR3 = 3;
    sbit  FKEYR3_bit at FLASH_KEYR.B3;
    const register unsigned short int FKEYR4 = 4;
    sbit  FKEYR4_bit at FLASH_KEYR.B4;
    const register unsigned short int FKEYR5 = 5;
    sbit  FKEYR5_bit at FLASH_KEYR.B5;
    const register unsigned short int FKEYR6 = 6;
    sbit  FKEYR6_bit at FLASH_KEYR.B6;
    const register unsigned short int FKEYR7 = 7;
    sbit  FKEYR7_bit at FLASH_KEYR.B7;
    const register unsigned short int FKEYR8 = 8;
    sbit  FKEYR8_bit at FLASH_KEYR.B8;
    const register unsigned short int FKEYR9 = 9;
    sbit  FKEYR9_bit at FLASH_KEYR.B9;
    const register unsigned short int FKEYR10 = 10;
    sbit  FKEYR10_bit at FLASH_KEYR.B10;
    const register unsigned short int FKEYR11 = 11;
    sbit  FKEYR11_bit at FLASH_KEYR.B11;
    const register unsigned short int FKEYR12 = 12;
    sbit  FKEYR12_bit at FLASH_KEYR.B12;
    const register unsigned short int FKEYR13 = 13;
    sbit  FKEYR13_bit at FLASH_KEYR.B13;
    const register unsigned short int FKEYR14 = 14;
    sbit  FKEYR14_bit at FLASH_KEYR.B14;
    const register unsigned short int FKEYR15 = 15;
    sbit  FKEYR15_bit at FLASH_KEYR.B15;
    const register unsigned short int FKEYR16 = 16;
    sbit  FKEYR16_bit at FLASH_KEYR.B16;
    const register unsigned short int FKEYR17 = 17;
    sbit  FKEYR17_bit at FLASH_KEYR.B17;
    const register unsigned short int FKEYR18 = 18;
    sbit  FKEYR18_bit at FLASH_KEYR.B18;
    const register unsigned short int FKEYR19 = 19;
    sbit  FKEYR19_bit at FLASH_KEYR.B19;
    const register unsigned short int FKEYR20 = 20;
    sbit  FKEYR20_bit at FLASH_KEYR.B20;
    const register unsigned short int FKEYR21 = 21;
    sbit  FKEYR21_bit at FLASH_KEYR.B21;
    const register unsigned short int FKEYR22 = 22;
    sbit  FKEYR22_bit at FLASH_KEYR.B22;
    const register unsigned short int FKEYR23 = 23;
    sbit  FKEYR23_bit at FLASH_KEYR.B23;
    const register unsigned short int FKEYR24 = 24;
    sbit  FKEYR24_bit at FLASH_KEYR.B24;
    const register unsigned short int FKEYR25 = 25;
    sbit  FKEYR25_bit at FLASH_KEYR.B25;
    const register unsigned short int FKEYR26 = 26;
    sbit  FKEYR26_bit at FLASH_KEYR.B26;
    const register unsigned short int FKEYR27 = 27;
    sbit  FKEYR27_bit at FLASH_KEYR.B27;
    const register unsigned short int FKEYR28 = 28;
    sbit  FKEYR28_bit at FLASH_KEYR.B28;
    const register unsigned short int FKEYR29 = 29;
    sbit  FKEYR29_bit at FLASH_KEYR.B29;
    const register unsigned short int FKEYR30 = 30;
    sbit  FKEYR30_bit at FLASH_KEYR.B30;
    const register unsigned short int FKEYR31 = 31;
    sbit  FKEYR31_bit at FLASH_KEYR.B31;

sfr unsigned long   volatile FLASH_OPTKEYR        absolute 0x40022008;
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

sfr unsigned long   volatile FLASH_SR             absolute 0x4002200C;
    const register unsigned short int EOP = 5;
    sbit  EOP_bit at FLASH_SR.B5;
    const register unsigned short int WRPRT = 4;
    sbit  WRPRT_bit at FLASH_SR.B4;
    const register unsigned short int PGERR = 2;
    sbit  PGERR_bit at FLASH_SR.B2;
    sbit  BSY_FLASH_SR_bit at FLASH_SR.B0;

sfr unsigned long   volatile FLASH_CR             absolute 0x40022010;
    const register unsigned short int FORCE_OPTLOAD = 13;
    sbit  FORCE_OPTLOAD_bit at FLASH_CR.B13;
    const register unsigned short int EOPIE = 12;
    sbit  EOPIE_bit at FLASH_CR.B12;
    sbit  ERRIE_FLASH_CR_bit at FLASH_CR.B10;
    const register unsigned short int OPTWRE = 9;
    sbit  OPTWRE_bit at FLASH_CR.B9;
    const register unsigned short int LOCK_ = 7;
    sbit  LOCK_bit at FLASH_CR.B7;
    const register unsigned short int STRT = 6;
    sbit  STRT_bit at FLASH_CR.B6;
    const register unsigned short int OPTER = 5;
    sbit  OPTER_bit at FLASH_CR.B5;
    const register unsigned short int OPTPG = 4;
    sbit  OPTPG_bit at FLASH_CR.B4;
    const register unsigned short int MER = 2;
    sbit  MER_bit at FLASH_CR.B2;
    const register unsigned short int PER = 1;
    sbit  PER_bit at FLASH_CR.B1;
    const register unsigned short int PG = 0;
    sbit  PG_bit at FLASH_CR.B0;

sfr unsigned long   volatile FLASH_AR             absolute 0x40022014;
    const register unsigned short int FAR0 = 0;
    sbit  FAR0_bit at FLASH_AR.B0;
    const register unsigned short int FAR1 = 1;
    sbit  FAR1_bit at FLASH_AR.B1;
    const register unsigned short int FAR2 = 2;
    sbit  FAR2_bit at FLASH_AR.B2;
    const register unsigned short int FAR3 = 3;
    sbit  FAR3_bit at FLASH_AR.B3;
    const register unsigned short int FAR4 = 4;
    sbit  FAR4_bit at FLASH_AR.B4;
    const register unsigned short int FAR5 = 5;
    sbit  FAR5_bit at FLASH_AR.B5;
    const register unsigned short int FAR6 = 6;
    sbit  FAR6_bit at FLASH_AR.B6;
    const register unsigned short int FAR7 = 7;
    sbit  FAR7_bit at FLASH_AR.B7;
    const register unsigned short int FAR8 = 8;
    sbit  FAR8_bit at FLASH_AR.B8;
    const register unsigned short int FAR9 = 9;
    sbit  FAR9_bit at FLASH_AR.B9;
    const register unsigned short int FAR10 = 10;
    sbit  FAR10_bit at FLASH_AR.B10;
    const register unsigned short int FAR11 = 11;
    sbit  FAR11_bit at FLASH_AR.B11;
    const register unsigned short int FAR12 = 12;
    sbit  FAR12_bit at FLASH_AR.B12;
    const register unsigned short int FAR13 = 13;
    sbit  FAR13_bit at FLASH_AR.B13;
    const register unsigned short int FAR14 = 14;
    sbit  FAR14_bit at FLASH_AR.B14;
    const register unsigned short int FAR15 = 15;
    sbit  FAR15_bit at FLASH_AR.B15;
    const register unsigned short int FAR16 = 16;
    sbit  FAR16_bit at FLASH_AR.B16;
    const register unsigned short int FAR17 = 17;
    sbit  FAR17_bit at FLASH_AR.B17;
    const register unsigned short int FAR18 = 18;
    sbit  FAR18_bit at FLASH_AR.B18;
    const register unsigned short int FAR19 = 19;
    sbit  FAR19_bit at FLASH_AR.B19;
    const register unsigned short int FAR20 = 20;
    sbit  FAR20_bit at FLASH_AR.B20;
    const register unsigned short int FAR21 = 21;
    sbit  FAR21_bit at FLASH_AR.B21;
    const register unsigned short int FAR22 = 22;
    sbit  FAR22_bit at FLASH_AR.B22;
    const register unsigned short int FAR23 = 23;
    sbit  FAR23_bit at FLASH_AR.B23;
    const register unsigned short int FAR24 = 24;
    sbit  FAR24_bit at FLASH_AR.B24;
    const register unsigned short int FAR25 = 25;
    sbit  FAR25_bit at FLASH_AR.B25;
    const register unsigned short int FAR26 = 26;
    sbit  FAR26_bit at FLASH_AR.B26;
    const register unsigned short int FAR27 = 27;
    sbit  FAR27_bit at FLASH_AR.B27;
    const register unsigned short int FAR28 = 28;
    sbit  FAR28_bit at FLASH_AR.B28;
    const register unsigned short int FAR29 = 29;
    sbit  FAR29_bit at FLASH_AR.B29;
    const register unsigned short int FAR30 = 30;
    sbit  FAR30_bit at FLASH_AR.B30;
    const register unsigned short int FAR31 = 31;
    sbit  FAR31_bit at FLASH_AR.B31;

sfr unsigned long   volatile FLASH_OBR            absolute 0x4002201C;
    sbit  Data10_FLASH_OBR_bit at FLASH_OBR.B24;
    sbit  Data11_FLASH_OBR_bit at FLASH_OBR.B25;
    sbit  Data12_FLASH_OBR_bit at FLASH_OBR.B26;
    sbit  Data13_FLASH_OBR_bit at FLASH_OBR.B27;
    sbit  Data14_FLASH_OBR_bit at FLASH_OBR.B28;
    sbit  Data15_FLASH_OBR_bit at FLASH_OBR.B29;
    const register unsigned short int Data16 = 30;
    sbit  Data16_bit at FLASH_OBR.B30;
    const register unsigned short int Data17 = 31;
    sbit  Data17_bit at FLASH_OBR.B31;
    const register unsigned short int Data00 = 16;
    sbit  Data00_bit at FLASH_OBR.B16;
    const register unsigned short int Data01 = 17;
    sbit  Data01_bit at FLASH_OBR.B17;
    const register unsigned short int Data02 = 18;
    sbit  Data02_bit at FLASH_OBR.B18;
    const register unsigned short int Data03 = 19;
    sbit  Data03_bit at FLASH_OBR.B19;
    const register unsigned short int Data04 = 20;
    sbit  Data04_bit at FLASH_OBR.B20;
    const register unsigned short int Data05 = 21;
    sbit  Data05_bit at FLASH_OBR.B21;
    const register unsigned short int Data06 = 22;
    sbit  Data06_bit at FLASH_OBR.B22;
    const register unsigned short int Data07 = 23;
    sbit  Data07_bit at FLASH_OBR.B23;
    const register unsigned short int VDDA_MONITOR = 13;
    sbit  VDDA_MONITOR_bit at FLASH_OBR.B13;
    const register unsigned short int BOOT1 = 12;
    sbit  BOOT1_bit at FLASH_OBR.B12;
    const register unsigned short int nRST_STDBY = 10;
    sbit  nRST_STDBY_bit at FLASH_OBR.B10;
    const register unsigned short int nRST_STOP = 9;
    sbit  nRST_STOP_bit at FLASH_OBR.B9;
    const register unsigned short int WDG_SW = 8;
    sbit  WDG_SW_bit at FLASH_OBR.B8;
    const register unsigned short int LEVEL2_PROT = 2;
    sbit  LEVEL2_PROT_bit at FLASH_OBR.B2;
    const register unsigned short int LEVEL1_PROT = 1;
    sbit  LEVEL1_PROT_bit at FLASH_OBR.B1;
    const register unsigned short int OPTERR = 0;
    sbit  OPTERR_bit at FLASH_OBR.B0;

sfr unsigned long   volatile FLASH_WRPR           absolute 0x40022020;
    const register unsigned short int WRP0 = 0;
    sbit  WRP0_bit at FLASH_WRPR.B0;
    const register unsigned short int WRP1 = 1;
    sbit  WRP1_bit at FLASH_WRPR.B1;
    const register unsigned short int WRP2 = 2;
    sbit  WRP2_bit at FLASH_WRPR.B2;
    const register unsigned short int WRP3 = 3;
    sbit  WRP3_bit at FLASH_WRPR.B3;
    const register unsigned short int WRP4 = 4;
    sbit  WRP4_bit at FLASH_WRPR.B4;
    const register unsigned short int WRP5 = 5;
    sbit  WRP5_bit at FLASH_WRPR.B5;
    const register unsigned short int WRP6 = 6;
    sbit  WRP6_bit at FLASH_WRPR.B6;
    const register unsigned short int WRP7 = 7;
    sbit  WRP7_bit at FLASH_WRPR.B7;
    const register unsigned short int WRP8 = 8;
    sbit  WRP8_bit at FLASH_WRPR.B8;
    const register unsigned short int WRP9 = 9;
    sbit  WRP9_bit at FLASH_WRPR.B9;
    const register unsigned short int WRP10 = 10;
    sbit  WRP10_bit at FLASH_WRPR.B10;
    const register unsigned short int WRP11 = 11;
    sbit  WRP11_bit at FLASH_WRPR.B11;
    const register unsigned short int WRP12 = 12;
    sbit  WRP12_bit at FLASH_WRPR.B12;
    const register unsigned short int WRP13 = 13;
    sbit  WRP13_bit at FLASH_WRPR.B13;
    const register unsigned short int WRP14 = 14;
    sbit  WRP14_bit at FLASH_WRPR.B14;
    const register unsigned short int WRP15 = 15;
    sbit  WRP15_bit at FLASH_WRPR.B15;
    const register unsigned short int WRP16 = 16;
    sbit  WRP16_bit at FLASH_WRPR.B16;
    const register unsigned short int WRP17 = 17;
    sbit  WRP17_bit at FLASH_WRPR.B17;
    const register unsigned short int WRP18 = 18;
    sbit  WRP18_bit at FLASH_WRPR.B18;
    const register unsigned short int WRP19 = 19;
    sbit  WRP19_bit at FLASH_WRPR.B19;
    const register unsigned short int WRP20 = 20;
    sbit  WRP20_bit at FLASH_WRPR.B20;
    const register unsigned short int WRP21 = 21;
    sbit  WRP21_bit at FLASH_WRPR.B21;
    const register unsigned short int WRP22 = 22;
    sbit  WRP22_bit at FLASH_WRPR.B22;
    const register unsigned short int WRP23 = 23;
    sbit  WRP23_bit at FLASH_WRPR.B23;
    const register unsigned short int WRP24 = 24;
    sbit  WRP24_bit at FLASH_WRPR.B24;
    const register unsigned short int WRP25 = 25;
    sbit  WRP25_bit at FLASH_WRPR.B25;
    const register unsigned short int WRP26 = 26;
    sbit  WRP26_bit at FLASH_WRPR.B26;
    const register unsigned short int WRP27 = 27;
    sbit  WRP27_bit at FLASH_WRPR.B27;
    const register unsigned short int WRP28 = 28;
    sbit  WRP28_bit at FLASH_WRPR.B28;
    const register unsigned short int WRP29 = 29;
    sbit  WRP29_bit at FLASH_WRPR.B29;
    const register unsigned short int WRP30 = 30;
    sbit  WRP30_bit at FLASH_WRPR.B30;
    const register unsigned short int WRP31 = 31;
    sbit  WRP31_bit at FLASH_WRPR.B31;

sfr unsigned long   volatile DBGMCU_IDCODE        absolute 0x40015800;
    const register unsigned short int DEV_ID0 = 0;
    sbit  DEV_ID0_bit at DBGMCU_IDCODE.B0;
    const register unsigned short int DEV_ID1 = 1;
    sbit  DEV_ID1_bit at DBGMCU_IDCODE.B1;
    const register unsigned short int DEV_ID2 = 2;
    sbit  DEV_ID2_bit at DBGMCU_IDCODE.B2;
    const register unsigned short int DEV_ID3 = 3;
    sbit  DEV_ID3_bit at DBGMCU_IDCODE.B3;
    const register unsigned short int DEV_ID4 = 4;
    sbit  DEV_ID4_bit at DBGMCU_IDCODE.B4;
    const register unsigned short int DEV_ID5 = 5;
    sbit  DEV_ID5_bit at DBGMCU_IDCODE.B5;
    const register unsigned short int DEV_ID6 = 6;
    sbit  DEV_ID6_bit at DBGMCU_IDCODE.B6;
    const register unsigned short int DEV_ID7 = 7;
    sbit  DEV_ID7_bit at DBGMCU_IDCODE.B7;
    const register unsigned short int DEV_ID8 = 8;
    sbit  DEV_ID8_bit at DBGMCU_IDCODE.B8;
    const register unsigned short int DEV_ID9 = 9;
    sbit  DEV_ID9_bit at DBGMCU_IDCODE.B9;
    const register unsigned short int DEV_ID10 = 10;
    sbit  DEV_ID10_bit at DBGMCU_IDCODE.B10;
    const register unsigned short int DEV_ID11 = 11;
    sbit  DEV_ID11_bit at DBGMCU_IDCODE.B11;
    const register unsigned short int DIV_ID0 = 12;
    sbit  DIV_ID0_bit at DBGMCU_IDCODE.B12;
    const register unsigned short int DIV_ID1 = 13;
    sbit  DIV_ID1_bit at DBGMCU_IDCODE.B13;
    const register unsigned short int DIV_ID2 = 14;
    sbit  DIV_ID2_bit at DBGMCU_IDCODE.B14;
    const register unsigned short int DIV_ID3 = 15;
    sbit  DIV_ID3_bit at DBGMCU_IDCODE.B15;
    const register unsigned short int REV_ID0 = 16;
    sbit  REV_ID0_bit at DBGMCU_IDCODE.B16;
    const register unsigned short int REV_ID1 = 17;
    sbit  REV_ID1_bit at DBGMCU_IDCODE.B17;
    const register unsigned short int REV_ID2 = 18;
    sbit  REV_ID2_bit at DBGMCU_IDCODE.B18;
    const register unsigned short int REV_ID3 = 19;
    sbit  REV_ID3_bit at DBGMCU_IDCODE.B19;
    const register unsigned short int REV_ID4 = 20;
    sbit  REV_ID4_bit at DBGMCU_IDCODE.B20;
    const register unsigned short int REV_ID5 = 21;
    sbit  REV_ID5_bit at DBGMCU_IDCODE.B21;
    const register unsigned short int REV_ID6 = 22;
    sbit  REV_ID6_bit at DBGMCU_IDCODE.B22;
    const register unsigned short int REV_ID7 = 23;
    sbit  REV_ID7_bit at DBGMCU_IDCODE.B23;
    const register unsigned short int REV_ID8 = 24;
    sbit  REV_ID8_bit at DBGMCU_IDCODE.B24;
    const register unsigned short int REV_ID9 = 25;
    sbit  REV_ID9_bit at DBGMCU_IDCODE.B25;
    const register unsigned short int REV_ID10 = 26;
    sbit  REV_ID10_bit at DBGMCU_IDCODE.B26;
    const register unsigned short int REV_ID11 = 27;
    sbit  REV_ID11_bit at DBGMCU_IDCODE.B27;
    const register unsigned short int REV_ID12 = 28;
    sbit  REV_ID12_bit at DBGMCU_IDCODE.B28;
    const register unsigned short int REV_ID13 = 29;
    sbit  REV_ID13_bit at DBGMCU_IDCODE.B29;
    const register unsigned short int REV_ID14 = 30;
    sbit  REV_ID14_bit at DBGMCU_IDCODE.B30;
    const register unsigned short int REV_ID15 = 31;
    sbit  REV_ID15_bit at DBGMCU_IDCODE.B31;

sfr unsigned long   volatile DBGMCU_CR            absolute 0x40015804;
    const register unsigned short int DBG_STOP = 1;
    sbit  DBG_STOP_bit at DBGMCU_CR.B1;
    const register unsigned short int DBG_STANDBY = 2;
    sbit  DBG_STANDBY_bit at DBGMCU_CR.B2;

sfr unsigned long   volatile DBGMCU_APBLFZ        absolute 0x40015808;
    const register unsigned short int DBG_TIMER2_STOP = 0;
    sbit  DBG_TIMER2_STOP_bit at DBGMCU_APBLFZ.B0;
    const register unsigned short int DBG_TIMER3_STOP = 1;
    sbit  DBG_TIMER3_STOP_bit at DBGMCU_APBLFZ.B1;
    const register unsigned short int DBG_TIMER6_STOP = 4;
    sbit  DBG_TIMER6_STOP_bit at DBGMCU_APBLFZ.B4;
    const register unsigned short int DBG_TIMER14_STOP = 8;
    sbit  DBG_TIMER14_STOP_bit at DBGMCU_APBLFZ.B8;
    const register unsigned short int DBG_RTC_STOP = 10;
    sbit  DBG_RTC_STOP_bit at DBGMCU_APBLFZ.B10;
    const register unsigned short int DBG_WWDG_STOP = 11;
    sbit  DBG_WWDG_STOP_bit at DBGMCU_APBLFZ.B11;
    const register unsigned short int DBG_IWDG_STOP = 12;
    sbit  DBG_IWDG_STOP_bit at DBGMCU_APBLFZ.B12;
    const register unsigned short int I2C1_SMBUS_TIMEOUT = 21;
    sbit  I2C1_SMBUS_TIMEOUT_bit at DBGMCU_APBLFZ.B21;

sfr unsigned long   volatile DBGMCU_APBHFZ        absolute 0x4001580C;
    const register unsigned short int DBG_TIMER1_STOP = 11;
    sbit  DBG_TIMER1_STOP_bit at DBGMCU_APBHFZ.B11;
    const register unsigned short int DBG_TIMER15_STO = 16;
    sbit  DBG_TIMER15_STO_bit at DBGMCU_APBHFZ.B16;
    const register unsigned short int DBG_TIMER16_STO = 17;
    sbit  DBG_TIMER16_STO_bit at DBGMCU_APBHFZ.B17;
    const register unsigned short int DBG_TIMER17_STO = 18;
    sbit  DBG_TIMER17_STO_bit at DBGMCU_APBHFZ.B18;

sfr unsigned long   volatile USB_EP0R             absolute 0x40005C00;
    const register unsigned short int EA0 = 0;
    sbit  EA0_bit at USB_EP0R.B0;
    const register unsigned short int EA1 = 1;
    sbit  EA1_bit at USB_EP0R.B1;
    const register unsigned short int EA2 = 2;
    sbit  EA2_bit at USB_EP0R.B2;
    const register unsigned short int EA3 = 3;
    sbit  EA3_bit at USB_EP0R.B3;
    const register unsigned short int STAT_TX0 = 4;
    sbit  STAT_TX0_bit at USB_EP0R.B4;
    const register unsigned short int STAT_TX1 = 5;
    sbit  STAT_TX1_bit at USB_EP0R.B5;
    const register unsigned short int DTOG_TX = 6;
    sbit  DTOG_TX_bit at USB_EP0R.B6;
    const register unsigned short int CTR_TX = 7;
    sbit  CTR_TX_bit at USB_EP0R.B7;
    const register unsigned short int EP_KIND = 8;
    sbit  EP_KIND_bit at USB_EP0R.B8;
    const register unsigned short int EP_TYPE0 = 9;
    sbit  EP_TYPE0_bit at USB_EP0R.B9;
    const register unsigned short int EP_TYPE1 = 10;
    sbit  EP_TYPE1_bit at USB_EP0R.B10;
    const register unsigned short int SETUP = 11;
    sbit  SETUP_bit at USB_EP0R.B11;
    const register unsigned short int STAT_RX0 = 12;
    sbit  STAT_RX0_bit at USB_EP0R.B12;
    const register unsigned short int STAT_RX1 = 13;
    sbit  STAT_RX1_bit at USB_EP0R.B13;
    const register unsigned short int DTOG_RX = 14;
    sbit  DTOG_RX_bit at USB_EP0R.B14;
    const register unsigned short int CTR_RX = 15;
    sbit  CTR_RX_bit at USB_EP0R.B15;

sfr unsigned long   volatile USB_EP1R             absolute 0x40005C04;
    sbit  EA0_USB_EP1R_bit at USB_EP1R.B0;
    sbit  EA1_USB_EP1R_bit at USB_EP1R.B1;
    sbit  EA2_USB_EP1R_bit at USB_EP1R.B2;
    sbit  EA3_USB_EP1R_bit at USB_EP1R.B3;
    sbit  STAT_TX0_USB_EP1R_bit at USB_EP1R.B4;
    sbit  STAT_TX1_USB_EP1R_bit at USB_EP1R.B5;
    sbit  DTOG_TX_USB_EP1R_bit at USB_EP1R.B6;
    sbit  CTR_TX_USB_EP1R_bit at USB_EP1R.B7;
    sbit  EP_KIND_USB_EP1R_bit at USB_EP1R.B8;
    sbit  EP_TYPE0_USB_EP1R_bit at USB_EP1R.B9;
    sbit  EP_TYPE1_USB_EP1R_bit at USB_EP1R.B10;
    sbit  SETUP_USB_EP1R_bit at USB_EP1R.B11;
    sbit  STAT_RX0_USB_EP1R_bit at USB_EP1R.B12;
    sbit  STAT_RX1_USB_EP1R_bit at USB_EP1R.B13;
    sbit  DTOG_RX_USB_EP1R_bit at USB_EP1R.B14;
    sbit  CTR_RX_USB_EP1R_bit at USB_EP1R.B15;

sfr unsigned long   volatile USB_EP2R             absolute 0x40005C08;
    sbit  EA0_USB_EP2R_bit at USB_EP2R.B0;
    sbit  EA1_USB_EP2R_bit at USB_EP2R.B1;
    sbit  EA2_USB_EP2R_bit at USB_EP2R.B2;
    sbit  EA3_USB_EP2R_bit at USB_EP2R.B3;
    sbit  STAT_TX0_USB_EP2R_bit at USB_EP2R.B4;
    sbit  STAT_TX1_USB_EP2R_bit at USB_EP2R.B5;
    sbit  DTOG_TX_USB_EP2R_bit at USB_EP2R.B6;
    sbit  CTR_TX_USB_EP2R_bit at USB_EP2R.B7;
    sbit  EP_KIND_USB_EP2R_bit at USB_EP2R.B8;
    sbit  EP_TYPE0_USB_EP2R_bit at USB_EP2R.B9;
    sbit  EP_TYPE1_USB_EP2R_bit at USB_EP2R.B10;
    sbit  SETUP_USB_EP2R_bit at USB_EP2R.B11;
    sbit  STAT_RX0_USB_EP2R_bit at USB_EP2R.B12;
    sbit  STAT_RX1_USB_EP2R_bit at USB_EP2R.B13;
    sbit  DTOG_RX_USB_EP2R_bit at USB_EP2R.B14;
    sbit  CTR_RX_USB_EP2R_bit at USB_EP2R.B15;

sfr unsigned long   volatile USB_EP3R             absolute 0x40005C0C;
    sbit  EA0_USB_EP3R_bit at USB_EP3R.B0;
    sbit  EA1_USB_EP3R_bit at USB_EP3R.B1;
    sbit  EA2_USB_EP3R_bit at USB_EP3R.B2;
    sbit  EA3_USB_EP3R_bit at USB_EP3R.B3;
    sbit  STAT_TX0_USB_EP3R_bit at USB_EP3R.B4;
    sbit  STAT_TX1_USB_EP3R_bit at USB_EP3R.B5;
    sbit  DTOG_TX_USB_EP3R_bit at USB_EP3R.B6;
    sbit  CTR_TX_USB_EP3R_bit at USB_EP3R.B7;
    sbit  EP_KIND_USB_EP3R_bit at USB_EP3R.B8;
    sbit  EP_TYPE0_USB_EP3R_bit at USB_EP3R.B9;
    sbit  EP_TYPE1_USB_EP3R_bit at USB_EP3R.B10;
    sbit  SETUP_USB_EP3R_bit at USB_EP3R.B11;
    sbit  STAT_RX0_USB_EP3R_bit at USB_EP3R.B12;
    sbit  STAT_RX1_USB_EP3R_bit at USB_EP3R.B13;
    sbit  DTOG_RX_USB_EP3R_bit at USB_EP3R.B14;
    sbit  CTR_RX_USB_EP3R_bit at USB_EP3R.B15;

sfr unsigned long   volatile USB_EP4R             absolute 0x40005C10;
    sbit  EA0_USB_EP4R_bit at USB_EP4R.B0;
    sbit  EA1_USB_EP4R_bit at USB_EP4R.B1;
    sbit  EA2_USB_EP4R_bit at USB_EP4R.B2;
    sbit  EA3_USB_EP4R_bit at USB_EP4R.B3;
    sbit  STAT_TX0_USB_EP4R_bit at USB_EP4R.B4;
    sbit  STAT_TX1_USB_EP4R_bit at USB_EP4R.B5;
    sbit  DTOG_TX_USB_EP4R_bit at USB_EP4R.B6;
    sbit  CTR_TX_USB_EP4R_bit at USB_EP4R.B7;
    sbit  EP_KIND_USB_EP4R_bit at USB_EP4R.B8;
    sbit  EP_TYPE0_USB_EP4R_bit at USB_EP4R.B9;
    sbit  EP_TYPE1_USB_EP4R_bit at USB_EP4R.B10;
    sbit  SETUP_USB_EP4R_bit at USB_EP4R.B11;
    sbit  STAT_RX0_USB_EP4R_bit at USB_EP4R.B12;
    sbit  STAT_RX1_USB_EP4R_bit at USB_EP4R.B13;
    sbit  DTOG_RX_USB_EP4R_bit at USB_EP4R.B14;
    sbit  CTR_RX_USB_EP4R_bit at USB_EP4R.B15;

sfr unsigned long   volatile USB_EP5R             absolute 0x40005C14;
    sbit  EA0_USB_EP5R_bit at USB_EP5R.B0;
    sbit  EA1_USB_EP5R_bit at USB_EP5R.B1;
    sbit  EA2_USB_EP5R_bit at USB_EP5R.B2;
    sbit  EA3_USB_EP5R_bit at USB_EP5R.B3;
    sbit  STAT_TX0_USB_EP5R_bit at USB_EP5R.B4;
    sbit  STAT_TX1_USB_EP5R_bit at USB_EP5R.B5;
    sbit  DTOG_TX_USB_EP5R_bit at USB_EP5R.B6;
    sbit  CTR_TX_USB_EP5R_bit at USB_EP5R.B7;
    sbit  EP_KIND_USB_EP5R_bit at USB_EP5R.B8;
    sbit  EP_TYPE0_USB_EP5R_bit at USB_EP5R.B9;
    sbit  EP_TYPE1_USB_EP5R_bit at USB_EP5R.B10;
    sbit  SETUP_USB_EP5R_bit at USB_EP5R.B11;
    sbit  STAT_RX0_USB_EP5R_bit at USB_EP5R.B12;
    sbit  STAT_RX1_USB_EP5R_bit at USB_EP5R.B13;
    sbit  DTOG_RX_USB_EP5R_bit at USB_EP5R.B14;
    sbit  CTR_RX_USB_EP5R_bit at USB_EP5R.B15;

sfr unsigned long   volatile USB_EP6R             absolute 0x40005C18;
    sbit  EA0_USB_EP6R_bit at USB_EP6R.B0;
    sbit  EA1_USB_EP6R_bit at USB_EP6R.B1;
    sbit  EA2_USB_EP6R_bit at USB_EP6R.B2;
    sbit  EA3_USB_EP6R_bit at USB_EP6R.B3;
    sbit  STAT_TX0_USB_EP6R_bit at USB_EP6R.B4;
    sbit  STAT_TX1_USB_EP6R_bit at USB_EP6R.B5;
    sbit  DTOG_TX_USB_EP6R_bit at USB_EP6R.B6;
    sbit  CTR_TX_USB_EP6R_bit at USB_EP6R.B7;
    sbit  EP_KIND_USB_EP6R_bit at USB_EP6R.B8;
    sbit  EP_TYPE0_USB_EP6R_bit at USB_EP6R.B9;
    sbit  EP_TYPE1_USB_EP6R_bit at USB_EP6R.B10;
    sbit  SETUP_USB_EP6R_bit at USB_EP6R.B11;
    sbit  STAT_RX0_USB_EP6R_bit at USB_EP6R.B12;
    sbit  STAT_RX1_USB_EP6R_bit at USB_EP6R.B13;
    sbit  DTOG_RX_USB_EP6R_bit at USB_EP6R.B14;
    sbit  CTR_RX_USB_EP6R_bit at USB_EP6R.B15;

sfr unsigned long   volatile USB_EP7R             absolute 0x40005C1C;
    sbit  EA0_USB_EP7R_bit at USB_EP7R.B0;
    sbit  EA1_USB_EP7R_bit at USB_EP7R.B1;
    sbit  EA2_USB_EP7R_bit at USB_EP7R.B2;
    sbit  EA3_USB_EP7R_bit at USB_EP7R.B3;
    sbit  STAT_TX0_USB_EP7R_bit at USB_EP7R.B4;
    sbit  STAT_TX1_USB_EP7R_bit at USB_EP7R.B5;
    sbit  DTOG_TX_USB_EP7R_bit at USB_EP7R.B6;
    sbit  CTR_TX_USB_EP7R_bit at USB_EP7R.B7;
    sbit  EP_KIND_USB_EP7R_bit at USB_EP7R.B8;
    sbit  EP_TYPE0_USB_EP7R_bit at USB_EP7R.B9;
    sbit  EP_TYPE1_USB_EP7R_bit at USB_EP7R.B10;
    sbit  SETUP_USB_EP7R_bit at USB_EP7R.B11;
    sbit  STAT_RX0_USB_EP7R_bit at USB_EP7R.B12;
    sbit  STAT_RX1_USB_EP7R_bit at USB_EP7R.B13;
    sbit  DTOG_RX_USB_EP7R_bit at USB_EP7R.B14;
    sbit  CTR_RX_USB_EP7R_bit at USB_EP7R.B15;

sfr unsigned long   volatile USB_CNTR             absolute 0x40005C40;
    const register unsigned short int FRES = 0;
    sbit  FRES_bit at USB_CNTR.B0;
    const register unsigned short int PDWN = 1;
    sbit  PDWN_bit at USB_CNTR.B1;
    const register unsigned short int LPMODE = 2;
    sbit  LPMODE_bit at USB_CNTR.B2;
    const register unsigned short int FSUSP = 3;
    sbit  FSUSP_bit at USB_CNTR.B3;
    const register unsigned short int RESUME_ = 4;
    sbit  RESUME_bit at USB_CNTR.B4;
    const register unsigned short int L1RESUME = 5;
    sbit  L1RESUME_bit at USB_CNTR.B5;
    const register unsigned short int L1REQM = 7;
    sbit  L1REQM_bit at USB_CNTR.B7;
    const register unsigned short int ESOFM = 8;
    sbit  ESOFM_bit at USB_CNTR.B8;
    const register unsigned short int SOFM = 9;
    sbit  SOFM_bit at USB_CNTR.B9;
    const register unsigned short int RESETM = 10;
    sbit  RESETM_bit at USB_CNTR.B10;
    const register unsigned short int SUSPM = 11;
    sbit  SUSPM_bit at USB_CNTR.B11;
    const register unsigned short int WKUPM = 12;
    sbit  WKUPM_bit at USB_CNTR.B12;
    const register unsigned short int ERRM = 13;
    sbit  ERRM_bit at USB_CNTR.B13;
    const register unsigned short int PMAOVRM = 14;
    sbit  PMAOVRM_bit at USB_CNTR.B14;
    const register unsigned short int CTRM = 15;
    sbit  CTRM_bit at USB_CNTR.B15;

sfr unsigned long   volatile USB_ISTR             absolute 0x40005C44;
    const register unsigned short int EP_ID0 = 0;
    sbit  EP_ID0_bit at USB_ISTR.B0;
    const register unsigned short int EP_ID1 = 1;
    sbit  EP_ID1_bit at USB_ISTR.B1;
    const register unsigned short int EP_ID2 = 2;
    sbit  EP_ID2_bit at USB_ISTR.B2;
    const register unsigned short int EP_ID3 = 3;
    sbit  EP_ID3_bit at USB_ISTR.B3;
    sbit  DIR_USB_ISTR_bit at USB_ISTR.B4;
    const register unsigned short int L1REQ = 7;
    sbit  L1REQ_bit at USB_ISTR.B7;
    const register unsigned short int ESOF = 8;
    sbit  ESOF_bit at USB_ISTR.B8;
    const register unsigned short int SOF = 9;
    sbit  SOF_bit at USB_ISTR.B9;
    sbit  RESET_USB_ISTR_bit at USB_ISTR.B10;
    const register unsigned short int SUSP = 11;
    sbit  SUSP_bit at USB_ISTR.B11;
    const register unsigned short int WKUP = 12;
    sbit  WKUP_bit at USB_ISTR.B12;
    const register unsigned short int ERR_ = 13;
    sbit  ERR_bit at USB_ISTR.B13;
    const register unsigned short int PMAOVR = 14;
    sbit  PMAOVR_bit at USB_ISTR.B14;
    const register unsigned short int CTR = 15;
    sbit  CTR_bit at USB_ISTR.B15;

sfr unsigned long   volatile USB_FNR              absolute 0x40005C48;
    const register unsigned short int FN0 = 0;
    sbit  FN0_bit at USB_FNR.B0;
    const register unsigned short int FN1 = 1;
    sbit  FN1_bit at USB_FNR.B1;
    const register unsigned short int FN2 = 2;
    sbit  FN2_bit at USB_FNR.B2;
    const register unsigned short int FN3 = 3;
    sbit  FN3_bit at USB_FNR.B3;
    const register unsigned short int FN4 = 4;
    sbit  FN4_bit at USB_FNR.B4;
    const register unsigned short int FN5 = 5;
    sbit  FN5_bit at USB_FNR.B5;
    const register unsigned short int FN6 = 6;
    sbit  FN6_bit at USB_FNR.B6;
    const register unsigned short int FN7 = 7;
    sbit  FN7_bit at USB_FNR.B7;
    const register unsigned short int FN8 = 8;
    sbit  FN8_bit at USB_FNR.B8;
    const register unsigned short int FN9 = 9;
    sbit  FN9_bit at USB_FNR.B9;
    const register unsigned short int FN10 = 10;
    sbit  FN10_bit at USB_FNR.B10;
    const register unsigned short int LSOF0 = 11;
    sbit  LSOF0_bit at USB_FNR.B11;
    const register unsigned short int LSOF1 = 12;
    sbit  LSOF1_bit at USB_FNR.B12;
    const register unsigned short int LCK = 13;
    sbit  LCK_bit at USB_FNR.B13;
    const register unsigned short int RXDM = 14;
    sbit  RXDM_bit at USB_FNR.B14;
    const register unsigned short int RXDP = 15;
    sbit  RXDP_bit at USB_FNR.B15;

sfr unsigned long   volatile USB_DADDR            absolute 0x40005C4C;
    const register unsigned short int ADD0 = 0;
    sbit  ADD0_bit at USB_DADDR.B0;
    const register unsigned short int ADD1 = 1;
    sbit  ADD1_bit at USB_DADDR.B1;
    const register unsigned short int ADD2 = 2;
    sbit  ADD2_bit at USB_DADDR.B2;
    const register unsigned short int ADD3 = 3;
    sbit  ADD3_bit at USB_DADDR.B3;
    const register unsigned short int ADD4 = 4;
    sbit  ADD4_bit at USB_DADDR.B4;
    const register unsigned short int ADD5 = 5;
    sbit  ADD5_bit at USB_DADDR.B5;
    const register unsigned short int ADD6 = 6;
    sbit  ADD6_bit at USB_DADDR.B6;
    const register unsigned short int EF = 7;
    sbit  EF_bit at USB_DADDR.B7;

sfr unsigned long   volatile USB_BTABLE           absolute 0x40005C50;
    const register unsigned short int BTABLE0 = 3;
    sbit  BTABLE0_bit at USB_BTABLE.B3;
    const register unsigned short int BTABLE1 = 4;
    sbit  BTABLE1_bit at USB_BTABLE.B4;
    const register unsigned short int BTABLE2 = 5;
    sbit  BTABLE2_bit at USB_BTABLE.B5;
    const register unsigned short int BTABLE3 = 6;
    sbit  BTABLE3_bit at USB_BTABLE.B6;
    const register unsigned short int BTABLE4 = 7;
    sbit  BTABLE4_bit at USB_BTABLE.B7;
    const register unsigned short int BTABLE5 = 8;
    sbit  BTABLE5_bit at USB_BTABLE.B8;
    const register unsigned short int BTABLE6 = 9;
    sbit  BTABLE6_bit at USB_BTABLE.B9;
    const register unsigned short int BTABLE7 = 10;
    sbit  BTABLE7_bit at USB_BTABLE.B10;
    const register unsigned short int BTABLE8 = 11;
    sbit  BTABLE8_bit at USB_BTABLE.B11;
    const register unsigned short int BTABLE9 = 12;
    sbit  BTABLE9_bit at USB_BTABLE.B12;
    const register unsigned short int BTABLE10 = 13;
    sbit  BTABLE10_bit at USB_BTABLE.B13;
    const register unsigned short int BTABLE11 = 14;
    sbit  BTABLE11_bit at USB_BTABLE.B14;
    const register unsigned short int BTABLE12 = 15;
    sbit  BTABLE12_bit at USB_BTABLE.B15;

sfr unsigned long   volatile USB_LPMCSR           absolute 0x40005C54;
    const register unsigned short int LPMEN = 0;
    sbit  LPMEN_bit at USB_LPMCSR.B0;
    const register unsigned short int LPMACK = 1;
    sbit  LPMACK_bit at USB_LPMCSR.B1;
    const register unsigned short int REMWAKE = 3;
    sbit  REMWAKE_bit at USB_LPMCSR.B3;
    const register unsigned short int BESL0 = 4;
    sbit  BESL0_bit at USB_LPMCSR.B4;
    const register unsigned short int BESL1 = 5;
    sbit  BESL1_bit at USB_LPMCSR.B5;
    const register unsigned short int BESL2 = 6;
    sbit  BESL2_bit at USB_LPMCSR.B6;
    const register unsigned short int BESL3 = 7;
    sbit  BESL3_bit at USB_LPMCSR.B7;

sfr unsigned long   volatile USB_BCDR             absolute 0x40005C58;
    const register unsigned short int BCDEN = 0;
    sbit  BCDEN_bit at USB_BCDR.B0;
    const register unsigned short int DCDEN = 1;
    sbit  DCDEN_bit at USB_BCDR.B1;
    const register unsigned short int PDEN = 2;
    sbit  PDEN_bit at USB_BCDR.B2;
    const register unsigned short int SDEN = 3;
    sbit  SDEN_bit at USB_BCDR.B3;
    const register unsigned short int DCDET = 4;
    sbit  DCDET_bit at USB_BCDR.B4;
    const register unsigned short int PDET = 5;
    sbit  PDET_bit at USB_BCDR.B5;
    const register unsigned short int SDET = 6;
    sbit  SDET_bit at USB_BCDR.B6;
    const register unsigned short int PS2DET = 7;
    sbit  PS2DET_bit at USB_BCDR.B7;
    const register unsigned short int DPPU = 15;
    sbit  DPPU_bit at USB_BCDR.B15;

sfr unsigned long   volatile CRS_CR               absolute 0x40006C00;
    const register unsigned short int TRIM0 = 8;
    sbit  TRIM0_bit at CRS_CR.B8;
    const register unsigned short int TRIM1 = 9;
    sbit  TRIM1_bit at CRS_CR.B9;
    const register unsigned short int TRIM2 = 10;
    sbit  TRIM2_bit at CRS_CR.B10;
    const register unsigned short int TRIM3 = 11;
    sbit  TRIM3_bit at CRS_CR.B11;
    const register unsigned short int TRIM4 = 12;
    sbit  TRIM4_bit at CRS_CR.B12;
    const register unsigned short int TRIM5 = 13;
    sbit  TRIM5_bit at CRS_CR.B13;
    const register unsigned short int SWSYNC = 7;
    sbit  SWSYNC_bit at CRS_CR.B7;
    const register unsigned short int AUTOTRIMEN = 6;
    sbit  AUTOTRIMEN_bit at CRS_CR.B6;
    sbit  CEN_CRS_CR_bit at CRS_CR.B5;
    const register unsigned short int ESYNCIE = 3;
    sbit  ESYNCIE_bit at CRS_CR.B3;
    sbit  ERRIE_CRS_CR_bit at CRS_CR.B2;
    const register unsigned short int SYNCWARNIE = 1;
    sbit  SYNCWARNIE_bit at CRS_CR.B1;
    const register unsigned short int SYNCOKIE = 0;
    sbit  SYNCOKIE_bit at CRS_CR.B0;

sfr unsigned long   volatile CRS_CFGR             absolute 0x40006C04;
    sbit  SYNCPOL_CRS_CFGR_bit at CRS_CFGR.B31;
    const register unsigned short int SYNCSRC0 = 28;
    sbit  SYNCSRC0_bit at CRS_CFGR.B28;
    const register unsigned short int SYNCSRC1 = 29;
    sbit  SYNCSRC1_bit at CRS_CFGR.B29;
    const register unsigned short int SYNCDIV0 = 24;
    sbit  SYNCDIV0_bit at CRS_CFGR.B24;
    const register unsigned short int SYNCDIV1 = 25;
    sbit  SYNCDIV1_bit at CRS_CFGR.B25;
    const register unsigned short int SYNCDIV2 = 26;
    sbit  SYNCDIV2_bit at CRS_CFGR.B26;
    const register unsigned short int FELIM0 = 16;
    sbit  FELIM0_bit at CRS_CFGR.B16;
    const register unsigned short int FELIM1 = 17;
    sbit  FELIM1_bit at CRS_CFGR.B17;
    const register unsigned short int FELIM2 = 18;
    sbit  FELIM2_bit at CRS_CFGR.B18;
    const register unsigned short int FELIM3 = 19;
    sbit  FELIM3_bit at CRS_CFGR.B19;
    const register unsigned short int FELIM4 = 20;
    sbit  FELIM4_bit at CRS_CFGR.B20;
    const register unsigned short int FELIM5 = 21;
    sbit  FELIM5_bit at CRS_CFGR.B21;
    const register unsigned short int FELIM6 = 22;
    sbit  FELIM6_bit at CRS_CFGR.B22;
    const register unsigned short int FELIM7 = 23;
    sbit  FELIM7_bit at CRS_CFGR.B23;
    sbit  RELOAD0_CRS_CFGR_bit at CRS_CFGR.B0;
    sbit  RELOAD1_CRS_CFGR_bit at CRS_CFGR.B1;
    sbit  RELOAD2_CRS_CFGR_bit at CRS_CFGR.B2;
    sbit  RELOAD3_CRS_CFGR_bit at CRS_CFGR.B3;
    sbit  RELOAD4_CRS_CFGR_bit at CRS_CFGR.B4;
    sbit  RELOAD5_CRS_CFGR_bit at CRS_CFGR.B5;
    sbit  RELOAD6_CRS_CFGR_bit at CRS_CFGR.B6;
    sbit  RELOAD7_CRS_CFGR_bit at CRS_CFGR.B7;
    sbit  RELOAD8_CRS_CFGR_bit at CRS_CFGR.B8;
    sbit  RELOAD9_CRS_CFGR_bit at CRS_CFGR.B9;
    sbit  RELOAD10_CRS_CFGR_bit at CRS_CFGR.B10;
    sbit  RELOAD11_CRS_CFGR_bit at CRS_CFGR.B11;
    sbit  RELOAD12_CRS_CFGR_bit at CRS_CFGR.B12;
    sbit  RELOAD13_CRS_CFGR_bit at CRS_CFGR.B13;
    sbit  RELOAD14_CRS_CFGR_bit at CRS_CFGR.B14;
    sbit  RELOAD15_CRS_CFGR_bit at CRS_CFGR.B15;

sfr unsigned long   volatile CRS_ISR              absolute 0x40006C08;
    const register unsigned short int FECAP0 = 16;
    sbit  FECAP0_bit at CRS_ISR.B16;
    const register unsigned short int FECAP1 = 17;
    sbit  FECAP1_bit at CRS_ISR.B17;
    const register unsigned short int FECAP2 = 18;
    sbit  FECAP2_bit at CRS_ISR.B18;
    const register unsigned short int FECAP3 = 19;
    sbit  FECAP3_bit at CRS_ISR.B19;
    const register unsigned short int FECAP4 = 20;
    sbit  FECAP4_bit at CRS_ISR.B20;
    const register unsigned short int FECAP5 = 21;
    sbit  FECAP5_bit at CRS_ISR.B21;
    const register unsigned short int FECAP6 = 22;
    sbit  FECAP6_bit at CRS_ISR.B22;
    const register unsigned short int FECAP7 = 23;
    sbit  FECAP7_bit at CRS_ISR.B23;
    const register unsigned short int FECAP8 = 24;
    sbit  FECAP8_bit at CRS_ISR.B24;
    const register unsigned short int FECAP9 = 25;
    sbit  FECAP9_bit at CRS_ISR.B25;
    const register unsigned short int FECAP10 = 26;
    sbit  FECAP10_bit at CRS_ISR.B26;
    const register unsigned short int FECAP11 = 27;
    sbit  FECAP11_bit at CRS_ISR.B27;
    const register unsigned short int FECAP12 = 28;
    sbit  FECAP12_bit at CRS_ISR.B28;
    const register unsigned short int FECAP13 = 29;
    sbit  FECAP13_bit at CRS_ISR.B29;
    const register unsigned short int FECAP14 = 30;
    sbit  FECAP14_bit at CRS_ISR.B30;
    const register unsigned short int FECAP15 = 31;
    sbit  FECAP15_bit at CRS_ISR.B31;
    const register unsigned short int FEDIR = 15;
    sbit  FEDIR_bit at CRS_ISR.B15;
    const register unsigned short int TRIMOVF = 10;
    sbit  TRIMOVF_bit at CRS_ISR.B10;
    const register unsigned short int SYNCMISS = 9;
    sbit  SYNCMISS_bit at CRS_ISR.B9;
    const register unsigned short int SYNCERR = 8;
    sbit  SYNCERR_bit at CRS_ISR.B8;
    const register unsigned short int ESYNCF = 3;
    sbit  ESYNCF_bit at CRS_ISR.B3;
    const register unsigned short int ERRF = 2;
    sbit  ERRF_bit at CRS_ISR.B2;
    const register unsigned short int SYNCWARNF = 1;
    sbit  SYNCWARNF_bit at CRS_ISR.B1;
    const register unsigned short int SYNCOKF = 0;
    sbit  SYNCOKF_bit at CRS_ISR.B0;

sfr unsigned long   volatile CRS_ICR              absolute 0x40006C0C;
    const register unsigned short int ESYNCC = 3;
    sbit  ESYNCC_bit at CRS_ICR.B3;
    const register unsigned short int ERRC = 2;
    sbit  ERRC_bit at CRS_ICR.B2;
    const register unsigned short int SYNCWARNC = 1;
    sbit  SYNCWARNC_bit at CRS_ICR.B1;
    const register unsigned short int SYNCOKC = 0;
    sbit  SYNCOKC_bit at CRS_ICR.B0;

sfr unsigned long   volatile CAN1_MCR             absolute 0x40006400;
    const register unsigned short int DBF = 16;
    sbit  DBF_bit at CAN1_MCR.B16;
    sbit  RESET_CAN1_MCR_bit at CAN1_MCR.B15;
    const register unsigned short int TTCM = 7;
    sbit  TTCM_bit at CAN1_MCR.B7;
    const register unsigned short int ABOM = 6;
    sbit  ABOM_bit at CAN1_MCR.B6;
    const register unsigned short int AWUM = 5;
    sbit  AWUM_bit at CAN1_MCR.B5;
    const register unsigned short int NART = 4;
    sbit  NART_bit at CAN1_MCR.B4;
    const register unsigned short int RFLM = 3;
    sbit  RFLM_bit at CAN1_MCR.B3;
    const register unsigned short int TXFP = 2;
    sbit  TXFP_bit at CAN1_MCR.B2;
    const register unsigned short int SLEEP = 1;
    sbit  SLEEP_bit at CAN1_MCR.B1;
    const register unsigned short int INRQ = 0;
    sbit  INRQ_bit at CAN1_MCR.B0;

sfr unsigned long   volatile CAN1_MSR             absolute 0x40006404;
    const register unsigned short int RX_ = 11;
    sbit  RX_bit at CAN1_MSR.B11;
    const register unsigned short int SAMP = 10;
    sbit  SAMP_bit at CAN1_MSR.B10;
    const register unsigned short int RXM = 9;
    sbit  RXM_bit at CAN1_MSR.B9;
    const register unsigned short int TXM = 8;
    sbit  TXM_bit at CAN1_MSR.B8;
    const register unsigned short int SLAKI = 4;
    sbit  SLAKI_bit at CAN1_MSR.B4;
    const register unsigned short int WKUI = 3;
    sbit  WKUI_bit at CAN1_MSR.B3;
    const register unsigned short int ERRI = 2;
    sbit  ERRI_bit at CAN1_MSR.B2;
    const register unsigned short int SLAK = 1;
    sbit  SLAK_bit at CAN1_MSR.B1;
    const register unsigned short int INAK = 0;
    sbit  INAK_bit at CAN1_MSR.B0;

sfr unsigned long   volatile CAN1_TSR             absolute 0x40006408;
    const register unsigned short int LOW2 = 31;
    sbit  LOW2_bit at CAN1_TSR.B31;
    const register unsigned short int LOW1 = 30;
    sbit  LOW1_bit at CAN1_TSR.B30;
    const register unsigned short int LOW0 = 29;
    sbit  LOW0_bit at CAN1_TSR.B29;
    const register unsigned short int TME2 = 28;
    sbit  TME2_bit at CAN1_TSR.B28;
    const register unsigned short int TME1 = 27;
    sbit  TME1_bit at CAN1_TSR.B27;
    const register unsigned short int TME0 = 26;
    sbit  TME0_bit at CAN1_TSR.B26;
    const register unsigned short int CODE0 = 24;
    sbit  CODE0_bit at CAN1_TSR.B24;
    const register unsigned short int CODE1 = 25;
    sbit  CODE1_bit at CAN1_TSR.B25;
    const register unsigned short int ABRQ2 = 23;
    sbit  ABRQ2_bit at CAN1_TSR.B23;
    const register unsigned short int TERR2 = 19;
    sbit  TERR2_bit at CAN1_TSR.B19;
    const register unsigned short int ALST2 = 18;
    sbit  ALST2_bit at CAN1_TSR.B18;
    const register unsigned short int TXOK2 = 17;
    sbit  TXOK2_bit at CAN1_TSR.B17;
    const register unsigned short int RQCP2 = 16;
    sbit  RQCP2_bit at CAN1_TSR.B16;
    const register unsigned short int ABRQ1 = 15;
    sbit  ABRQ1_bit at CAN1_TSR.B15;
    const register unsigned short int TERR1 = 11;
    sbit  TERR1_bit at CAN1_TSR.B11;
    const register unsigned short int ALST1 = 10;
    sbit  ALST1_bit at CAN1_TSR.B10;
    const register unsigned short int TXOK1 = 9;
    sbit  TXOK1_bit at CAN1_TSR.B9;
    const register unsigned short int RQCP1 = 8;
    sbit  RQCP1_bit at CAN1_TSR.B8;
    const register unsigned short int ABRQ0 = 7;
    sbit  ABRQ0_bit at CAN1_TSR.B7;
    const register unsigned short int TERR0 = 3;
    sbit  TERR0_bit at CAN1_TSR.B3;
    const register unsigned short int ALST0 = 2;
    sbit  ALST0_bit at CAN1_TSR.B2;
    const register unsigned short int TXOK0 = 1;
    sbit  TXOK0_bit at CAN1_TSR.B1;
    const register unsigned short int RQCP0 = 0;
    sbit  RQCP0_bit at CAN1_TSR.B0;

sfr unsigned long   volatile CAN1_RF0R            absolute 0x4000640C;
    const register unsigned short int RFOM0 = 5;
    sbit  RFOM0_bit at CAN1_RF0R.B5;
    const register unsigned short int FOVR0 = 4;
    sbit  FOVR0_bit at CAN1_RF0R.B4;
    const register unsigned short int FULL0 = 3;
    sbit  FULL0_bit at CAN1_RF0R.B3;
    const register unsigned short int FMP00 = 0;
    sbit  FMP00_bit at CAN1_RF0R.B0;
    const register unsigned short int FMP01 = 1;
    sbit  FMP01_bit at CAN1_RF0R.B1;

sfr unsigned long   volatile CAN1_RF1R            absolute 0x40006410;
    const register unsigned short int RFOM1 = 5;
    sbit  RFOM1_bit at CAN1_RF1R.B5;
    const register unsigned short int FOVR1 = 4;
    sbit  FOVR1_bit at CAN1_RF1R.B4;
    const register unsigned short int FULL1 = 3;
    sbit  FULL1_bit at CAN1_RF1R.B3;
    const register unsigned short int FMP10 = 0;
    sbit  FMP10_bit at CAN1_RF1R.B0;
    const register unsigned short int FMP11 = 1;
    sbit  FMP11_bit at CAN1_RF1R.B1;

sfr unsigned long   volatile CAN1_IER             absolute 0x40006414;
    const register unsigned short int SLKIE = 17;
    sbit  SLKIE_bit at CAN1_IER.B17;
    const register unsigned short int WKUIE = 16;
    sbit  WKUIE_bit at CAN1_IER.B16;
    sbit  ERRIE_CAN1_IER_bit at CAN1_IER.B15;
    const register unsigned short int LECIE = 11;
    sbit  LECIE_bit at CAN1_IER.B11;
    const register unsigned short int BOFIE = 10;
    sbit  BOFIE_bit at CAN1_IER.B10;
    const register unsigned short int EPVIE = 9;
    sbit  EPVIE_bit at CAN1_IER.B9;
    const register unsigned short int EWGIE = 8;
    sbit  EWGIE_bit at CAN1_IER.B8;
    const register unsigned short int FOVIE1 = 6;
    sbit  FOVIE1_bit at CAN1_IER.B6;
    const register unsigned short int FFIE1 = 5;
    sbit  FFIE1_bit at CAN1_IER.B5;
    const register unsigned short int FMPIE1 = 4;
    sbit  FMPIE1_bit at CAN1_IER.B4;
    const register unsigned short int FOVIE0 = 3;
    sbit  FOVIE0_bit at CAN1_IER.B3;
    const register unsigned short int FFIE0 = 2;
    sbit  FFIE0_bit at CAN1_IER.B2;
    const register unsigned short int FMPIE0 = 1;
    sbit  FMPIE0_bit at CAN1_IER.B1;
    const register unsigned short int TMEIE = 0;
    sbit  TMEIE_bit at CAN1_IER.B0;

sfr unsigned long   volatile CAN1_ESR             absolute 0x40006418;
    const register unsigned short int REC0 = 24;
    sbit  REC0_bit at CAN1_ESR.B24;
    const register unsigned short int REC1 = 25;
    sbit  REC1_bit at CAN1_ESR.B25;
    const register unsigned short int REC2 = 26;
    sbit  REC2_bit at CAN1_ESR.B26;
    const register unsigned short int REC3 = 27;
    sbit  REC3_bit at CAN1_ESR.B27;
    const register unsigned short int REC4 = 28;
    sbit  REC4_bit at CAN1_ESR.B28;
    const register unsigned short int REC5 = 29;
    sbit  REC5_bit at CAN1_ESR.B29;
    const register unsigned short int REC6 = 30;
    sbit  REC6_bit at CAN1_ESR.B30;
    const register unsigned short int REC7 = 31;
    sbit  REC7_bit at CAN1_ESR.B31;
    const register unsigned short int TEC0 = 16;
    sbit  TEC0_bit at CAN1_ESR.B16;
    const register unsigned short int TEC1 = 17;
    sbit  TEC1_bit at CAN1_ESR.B17;
    const register unsigned short int TEC2 = 18;
    sbit  TEC2_bit at CAN1_ESR.B18;
    const register unsigned short int TEC3 = 19;
    sbit  TEC3_bit at CAN1_ESR.B19;
    const register unsigned short int TEC4 = 20;
    sbit  TEC4_bit at CAN1_ESR.B20;
    const register unsigned short int TEC5 = 21;
    sbit  TEC5_bit at CAN1_ESR.B21;
    const register unsigned short int TEC6 = 22;
    sbit  TEC6_bit at CAN1_ESR.B22;
    const register unsigned short int TEC7 = 23;
    sbit  TEC7_bit at CAN1_ESR.B23;
    const register unsigned short int LEC0 = 4;
    sbit  LEC0_bit at CAN1_ESR.B4;
    const register unsigned short int LEC1 = 5;
    sbit  LEC1_bit at CAN1_ESR.B5;
    const register unsigned short int LEC2 = 6;
    sbit  LEC2_bit at CAN1_ESR.B6;
    const register unsigned short int BOFF = 2;
    sbit  BOFF_bit at CAN1_ESR.B2;
    const register unsigned short int EPVF = 1;
    sbit  EPVF_bit at CAN1_ESR.B1;
    const register unsigned short int EWGF = 0;
    sbit  EWGF_bit at CAN1_ESR.B0;

sfr unsigned long   volatile CAN1_BTR             absolute 0x4000641C;
    const register unsigned short int SILM = 31;
    sbit  SILM_bit at CAN1_BTR.B31;
    const register unsigned short int LBKM = 30;
    sbit  LBKM_bit at CAN1_BTR.B30;
    const register unsigned short int SJW0 = 24;
    sbit  SJW0_bit at CAN1_BTR.B24;
    const register unsigned short int SJW1 = 25;
    sbit  SJW1_bit at CAN1_BTR.B25;
    const register unsigned short int TS20 = 20;
    sbit  TS20_bit at CAN1_BTR.B20;
    const register unsigned short int TS21 = 21;
    sbit  TS21_bit at CAN1_BTR.B21;
    const register unsigned short int TS22 = 22;
    sbit  TS22_bit at CAN1_BTR.B22;
    const register unsigned short int TS10 = 16;
    sbit  TS10_bit at CAN1_BTR.B16;
    const register unsigned short int TS11 = 17;
    sbit  TS11_bit at CAN1_BTR.B17;
    const register unsigned short int TS12 = 18;
    sbit  TS12_bit at CAN1_BTR.B18;
    const register unsigned short int TS13 = 19;
    sbit  TS13_bit at CAN1_BTR.B19;
    const register unsigned short int BRP0 = 0;
    sbit  BRP0_bit at CAN1_BTR.B0;
    const register unsigned short int BRP1 = 1;
    sbit  BRP1_bit at CAN1_BTR.B1;
    const register unsigned short int BRP2 = 2;
    sbit  BRP2_bit at CAN1_BTR.B2;
    const register unsigned short int BRP3 = 3;
    sbit  BRP3_bit at CAN1_BTR.B3;
    const register unsigned short int BRP4 = 4;
    sbit  BRP4_bit at CAN1_BTR.B4;
    const register unsigned short int BRP5 = 5;
    sbit  BRP5_bit at CAN1_BTR.B5;
    const register unsigned short int BRP6 = 6;
    sbit  BRP6_bit at CAN1_BTR.B6;
    const register unsigned short int BRP7 = 7;
    sbit  BRP7_bit at CAN1_BTR.B7;
    const register unsigned short int BRP8 = 8;
    sbit  BRP8_bit at CAN1_BTR.B8;
    const register unsigned short int BRP9 = 9;
    sbit  BRP9_bit at CAN1_BTR.B9;

sfr unsigned long   volatile CAN1_TI0R            absolute 0x40006580;
    const register unsigned short int STID0 = 21;
    sbit  STID0_bit at CAN1_TI0R.B21;
    const register unsigned short int STID1 = 22;
    sbit  STID1_bit at CAN1_TI0R.B22;
    const register unsigned short int STID2 = 23;
    sbit  STID2_bit at CAN1_TI0R.B23;
    const register unsigned short int STID3 = 24;
    sbit  STID3_bit at CAN1_TI0R.B24;
    const register unsigned short int STID4 = 25;
    sbit  STID4_bit at CAN1_TI0R.B25;
    const register unsigned short int STID5 = 26;
    sbit  STID5_bit at CAN1_TI0R.B26;
    const register unsigned short int STID6 = 27;
    sbit  STID6_bit at CAN1_TI0R.B27;
    const register unsigned short int STID7 = 28;
    sbit  STID7_bit at CAN1_TI0R.B28;
    const register unsigned short int STID8 = 29;
    sbit  STID8_bit at CAN1_TI0R.B29;
    const register unsigned short int STID9 = 30;
    sbit  STID9_bit at CAN1_TI0R.B30;
    const register unsigned short int STID10 = 31;
    sbit  STID10_bit at CAN1_TI0R.B31;
    const register unsigned short int EXID0 = 3;
    sbit  EXID0_bit at CAN1_TI0R.B3;
    const register unsigned short int EXID1 = 4;
    sbit  EXID1_bit at CAN1_TI0R.B4;
    const register unsigned short int EXID2 = 5;
    sbit  EXID2_bit at CAN1_TI0R.B5;
    const register unsigned short int EXID3 = 6;
    sbit  EXID3_bit at CAN1_TI0R.B6;
    const register unsigned short int EXID4 = 7;
    sbit  EXID4_bit at CAN1_TI0R.B7;
    const register unsigned short int EXID5 = 8;
    sbit  EXID5_bit at CAN1_TI0R.B8;
    const register unsigned short int EXID6 = 9;
    sbit  EXID6_bit at CAN1_TI0R.B9;
    const register unsigned short int EXID7 = 10;
    sbit  EXID7_bit at CAN1_TI0R.B10;
    const register unsigned short int EXID8 = 11;
    sbit  EXID8_bit at CAN1_TI0R.B11;
    const register unsigned short int EXID9 = 12;
    sbit  EXID9_bit at CAN1_TI0R.B12;
    const register unsigned short int EXID10 = 13;
    sbit  EXID10_bit at CAN1_TI0R.B13;
    const register unsigned short int EXID11 = 14;
    sbit  EXID11_bit at CAN1_TI0R.B14;
    const register unsigned short int EXID12 = 15;
    sbit  EXID12_bit at CAN1_TI0R.B15;
    const register unsigned short int EXID13 = 16;
    sbit  EXID13_bit at CAN1_TI0R.B16;
    const register unsigned short int EXID14 = 17;
    sbit  EXID14_bit at CAN1_TI0R.B17;
    const register unsigned short int EXID15 = 18;
    sbit  EXID15_bit at CAN1_TI0R.B18;
    const register unsigned short int EXID16 = 19;
    sbit  EXID16_bit at CAN1_TI0R.B19;
    const register unsigned short int EXID17 = 20;
    sbit  EXID17_bit at CAN1_TI0R.B20;
    const register unsigned short int IDE = 2;
    sbit  IDE_bit at CAN1_TI0R.B2;
    const register unsigned short int RTR = 1;
    sbit  RTR_bit at CAN1_TI0R.B1;
    const register unsigned short int TXRQ = 0;
    sbit  TXRQ_bit at CAN1_TI0R.B0;

sfr unsigned long   volatile CAN1_TDT0R           absolute 0x40006584;
    const register unsigned short int TIME0 = 16;
    sbit  TIME0_bit at CAN1_TDT0R.B16;
    const register unsigned short int TIME1 = 17;
    sbit  TIME1_bit at CAN1_TDT0R.B17;
    const register unsigned short int TIME2 = 18;
    sbit  TIME2_bit at CAN1_TDT0R.B18;
    const register unsigned short int TIME3 = 19;
    sbit  TIME3_bit at CAN1_TDT0R.B19;
    const register unsigned short int TIME4 = 20;
    sbit  TIME4_bit at CAN1_TDT0R.B20;
    const register unsigned short int TIME5 = 21;
    sbit  TIME5_bit at CAN1_TDT0R.B21;
    const register unsigned short int TIME6 = 22;
    sbit  TIME6_bit at CAN1_TDT0R.B22;
    const register unsigned short int TIME7 = 23;
    sbit  TIME7_bit at CAN1_TDT0R.B23;
    const register unsigned short int TIME8 = 24;
    sbit  TIME8_bit at CAN1_TDT0R.B24;
    const register unsigned short int TIME9 = 25;
    sbit  TIME9_bit at CAN1_TDT0R.B25;
    const register unsigned short int TIME10 = 26;
    sbit  TIME10_bit at CAN1_TDT0R.B26;
    const register unsigned short int TIME11 = 27;
    sbit  TIME11_bit at CAN1_TDT0R.B27;
    const register unsigned short int TIME12 = 28;
    sbit  TIME12_bit at CAN1_TDT0R.B28;
    const register unsigned short int TIME13 = 29;
    sbit  TIME13_bit at CAN1_TDT0R.B29;
    const register unsigned short int TIME14 = 30;
    sbit  TIME14_bit at CAN1_TDT0R.B30;
    const register unsigned short int TIME15 = 31;
    sbit  TIME15_bit at CAN1_TDT0R.B31;
    const register unsigned short int TGT = 8;
    sbit  TGT_bit at CAN1_TDT0R.B8;
    const register unsigned short int DLC0 = 0;
    sbit  DLC0_bit at CAN1_TDT0R.B0;
    const register unsigned short int DLC1 = 1;
    sbit  DLC1_bit at CAN1_TDT0R.B1;
    const register unsigned short int DLC2 = 2;
    sbit  DLC2_bit at CAN1_TDT0R.B2;
    const register unsigned short int DLC3 = 3;
    sbit  DLC3_bit at CAN1_TDT0R.B3;

sfr unsigned long   volatile CAN1_TDL0R           absolute 0x40006588;
    const register unsigned short int DATA30 = 24;
    sbit  DATA30_bit at CAN1_TDL0R.B24;
    const register unsigned short int DATA31 = 25;
    sbit  DATA31_bit at CAN1_TDL0R.B25;
    const register unsigned short int DATA32 = 26;
    sbit  DATA32_bit at CAN1_TDL0R.B26;
    const register unsigned short int DATA33 = 27;
    sbit  DATA33_bit at CAN1_TDL0R.B27;
    const register unsigned short int DATA34 = 28;
    sbit  DATA34_bit at CAN1_TDL0R.B28;
    const register unsigned short int DATA35 = 29;
    sbit  DATA35_bit at CAN1_TDL0R.B29;
    const register unsigned short int DATA36 = 30;
    sbit  DATA36_bit at CAN1_TDL0R.B30;
    const register unsigned short int DATA37 = 31;
    sbit  DATA37_bit at CAN1_TDL0R.B31;
    const register unsigned short int DATA20 = 16;
    sbit  DATA20_bit at CAN1_TDL0R.B16;
    const register unsigned short int DATA21 = 17;
    sbit  DATA21_bit at CAN1_TDL0R.B17;
    const register unsigned short int DATA22 = 18;
    sbit  DATA22_bit at CAN1_TDL0R.B18;
    const register unsigned short int DATA23 = 19;
    sbit  DATA23_bit at CAN1_TDL0R.B19;
    const register unsigned short int DATA24 = 20;
    sbit  DATA24_bit at CAN1_TDL0R.B20;
    const register unsigned short int DATA25 = 21;
    sbit  DATA25_bit at CAN1_TDL0R.B21;
    const register unsigned short int DATA26 = 22;
    sbit  DATA26_bit at CAN1_TDL0R.B22;
    const register unsigned short int DATA27 = 23;
    sbit  DATA27_bit at CAN1_TDL0R.B23;
    sbit  DATA10_CAN1_TDL0R_bit at CAN1_TDL0R.B8;
    sbit  DATA11_CAN1_TDL0R_bit at CAN1_TDL0R.B9;
    sbit  DATA12_CAN1_TDL0R_bit at CAN1_TDL0R.B10;
    sbit  DATA13_CAN1_TDL0R_bit at CAN1_TDL0R.B11;
    sbit  DATA14_CAN1_TDL0R_bit at CAN1_TDL0R.B12;
    sbit  DATA15_CAN1_TDL0R_bit at CAN1_TDL0R.B13;
    sbit  DATA16_CAN1_TDL0R_bit at CAN1_TDL0R.B14;
    sbit  DATA17_CAN1_TDL0R_bit at CAN1_TDL0R.B15;
    sbit  DATA00_CAN1_TDL0R_bit at CAN1_TDL0R.B0;
    sbit  DATA01_CAN1_TDL0R_bit at CAN1_TDL0R.B1;
    sbit  DATA02_CAN1_TDL0R_bit at CAN1_TDL0R.B2;
    sbit  DATA03_CAN1_TDL0R_bit at CAN1_TDL0R.B3;
    sbit  DATA04_CAN1_TDL0R_bit at CAN1_TDL0R.B4;
    sbit  DATA05_CAN1_TDL0R_bit at CAN1_TDL0R.B5;
    sbit  DATA06_CAN1_TDL0R_bit at CAN1_TDL0R.B6;
    sbit  DATA07_CAN1_TDL0R_bit at CAN1_TDL0R.B7;

sfr unsigned long   volatile CAN1_TDH0R           absolute 0x4000658C;
    const register unsigned short int DATA70 = 24;
    sbit  DATA70_bit at CAN1_TDH0R.B24;
    const register unsigned short int DATA71 = 25;
    sbit  DATA71_bit at CAN1_TDH0R.B25;
    const register unsigned short int DATA72 = 26;
    sbit  DATA72_bit at CAN1_TDH0R.B26;
    const register unsigned short int DATA73 = 27;
    sbit  DATA73_bit at CAN1_TDH0R.B27;
    const register unsigned short int DATA74 = 28;
    sbit  DATA74_bit at CAN1_TDH0R.B28;
    const register unsigned short int DATA75 = 29;
    sbit  DATA75_bit at CAN1_TDH0R.B29;
    const register unsigned short int DATA76 = 30;
    sbit  DATA76_bit at CAN1_TDH0R.B30;
    const register unsigned short int DATA77 = 31;
    sbit  DATA77_bit at CAN1_TDH0R.B31;
    const register unsigned short int DATA60 = 16;
    sbit  DATA60_bit at CAN1_TDH0R.B16;
    const register unsigned short int DATA61 = 17;
    sbit  DATA61_bit at CAN1_TDH0R.B17;
    const register unsigned short int DATA62 = 18;
    sbit  DATA62_bit at CAN1_TDH0R.B18;
    const register unsigned short int DATA63 = 19;
    sbit  DATA63_bit at CAN1_TDH0R.B19;
    const register unsigned short int DATA64 = 20;
    sbit  DATA64_bit at CAN1_TDH0R.B20;
    const register unsigned short int DATA65 = 21;
    sbit  DATA65_bit at CAN1_TDH0R.B21;
    const register unsigned short int DATA66 = 22;
    sbit  DATA66_bit at CAN1_TDH0R.B22;
    const register unsigned short int DATA67 = 23;
    sbit  DATA67_bit at CAN1_TDH0R.B23;
    const register unsigned short int DATA50 = 8;
    sbit  DATA50_bit at CAN1_TDH0R.B8;
    const register unsigned short int DATA51 = 9;
    sbit  DATA51_bit at CAN1_TDH0R.B9;
    const register unsigned short int DATA52 = 10;
    sbit  DATA52_bit at CAN1_TDH0R.B10;
    const register unsigned short int DATA53 = 11;
    sbit  DATA53_bit at CAN1_TDH0R.B11;
    const register unsigned short int DATA54 = 12;
    sbit  DATA54_bit at CAN1_TDH0R.B12;
    const register unsigned short int DATA55 = 13;
    sbit  DATA55_bit at CAN1_TDH0R.B13;
    const register unsigned short int DATA56 = 14;
    sbit  DATA56_bit at CAN1_TDH0R.B14;
    const register unsigned short int DATA57 = 15;
    sbit  DATA57_bit at CAN1_TDH0R.B15;
    const register unsigned short int DATA40 = 0;
    sbit  DATA40_bit at CAN1_TDH0R.B0;
    const register unsigned short int DATA41 = 1;
    sbit  DATA41_bit at CAN1_TDH0R.B1;
    const register unsigned short int DATA42 = 2;
    sbit  DATA42_bit at CAN1_TDH0R.B2;
    const register unsigned short int DATA43 = 3;
    sbit  DATA43_bit at CAN1_TDH0R.B3;
    const register unsigned short int DATA44 = 4;
    sbit  DATA44_bit at CAN1_TDH0R.B4;
    const register unsigned short int DATA45 = 5;
    sbit  DATA45_bit at CAN1_TDH0R.B5;
    const register unsigned short int DATA46 = 6;
    sbit  DATA46_bit at CAN1_TDH0R.B6;
    const register unsigned short int DATA47 = 7;
    sbit  DATA47_bit at CAN1_TDH0R.B7;

sfr unsigned long   volatile CAN1_TI1R            absolute 0x40006590;
    sbit  STID0_CAN1_TI1R_bit at CAN1_TI1R.B21;
    sbit  STID1_CAN1_TI1R_bit at CAN1_TI1R.B22;
    sbit  STID2_CAN1_TI1R_bit at CAN1_TI1R.B23;
    sbit  STID3_CAN1_TI1R_bit at CAN1_TI1R.B24;
    sbit  STID4_CAN1_TI1R_bit at CAN1_TI1R.B25;
    sbit  STID5_CAN1_TI1R_bit at CAN1_TI1R.B26;
    sbit  STID6_CAN1_TI1R_bit at CAN1_TI1R.B27;
    sbit  STID7_CAN1_TI1R_bit at CAN1_TI1R.B28;
    sbit  STID8_CAN1_TI1R_bit at CAN1_TI1R.B29;
    sbit  STID9_CAN1_TI1R_bit at CAN1_TI1R.B30;
    sbit  STID10_CAN1_TI1R_bit at CAN1_TI1R.B31;
    sbit  EXID0_CAN1_TI1R_bit at CAN1_TI1R.B3;
    sbit  EXID1_CAN1_TI1R_bit at CAN1_TI1R.B4;
    sbit  EXID2_CAN1_TI1R_bit at CAN1_TI1R.B5;
    sbit  EXID3_CAN1_TI1R_bit at CAN1_TI1R.B6;
    sbit  EXID4_CAN1_TI1R_bit at CAN1_TI1R.B7;
    sbit  EXID5_CAN1_TI1R_bit at CAN1_TI1R.B8;
    sbit  EXID6_CAN1_TI1R_bit at CAN1_TI1R.B9;
    sbit  EXID7_CAN1_TI1R_bit at CAN1_TI1R.B10;
    sbit  EXID8_CAN1_TI1R_bit at CAN1_TI1R.B11;
    sbit  EXID9_CAN1_TI1R_bit at CAN1_TI1R.B12;
    sbit  EXID10_CAN1_TI1R_bit at CAN1_TI1R.B13;
    sbit  EXID11_CAN1_TI1R_bit at CAN1_TI1R.B14;
    sbit  EXID12_CAN1_TI1R_bit at CAN1_TI1R.B15;
    sbit  EXID13_CAN1_TI1R_bit at CAN1_TI1R.B16;
    sbit  EXID14_CAN1_TI1R_bit at CAN1_TI1R.B17;
    sbit  EXID15_CAN1_TI1R_bit at CAN1_TI1R.B18;
    sbit  EXID16_CAN1_TI1R_bit at CAN1_TI1R.B19;
    sbit  EXID17_CAN1_TI1R_bit at CAN1_TI1R.B20;
    sbit  IDE_CAN1_TI1R_bit at CAN1_TI1R.B2;
    sbit  RTR_CAN1_TI1R_bit at CAN1_TI1R.B1;
    sbit  TXRQ_CAN1_TI1R_bit at CAN1_TI1R.B0;

sfr unsigned long   volatile CAN1_TDT1R           absolute 0x40006594;
    sbit  TIME0_CAN1_TDT1R_bit at CAN1_TDT1R.B16;
    sbit  TIME1_CAN1_TDT1R_bit at CAN1_TDT1R.B17;
    sbit  TIME2_CAN1_TDT1R_bit at CAN1_TDT1R.B18;
    sbit  TIME3_CAN1_TDT1R_bit at CAN1_TDT1R.B19;
    sbit  TIME4_CAN1_TDT1R_bit at CAN1_TDT1R.B20;
    sbit  TIME5_CAN1_TDT1R_bit at CAN1_TDT1R.B21;
    sbit  TIME6_CAN1_TDT1R_bit at CAN1_TDT1R.B22;
    sbit  TIME7_CAN1_TDT1R_bit at CAN1_TDT1R.B23;
    sbit  TIME8_CAN1_TDT1R_bit at CAN1_TDT1R.B24;
    sbit  TIME9_CAN1_TDT1R_bit at CAN1_TDT1R.B25;
    sbit  TIME10_CAN1_TDT1R_bit at CAN1_TDT1R.B26;
    sbit  TIME11_CAN1_TDT1R_bit at CAN1_TDT1R.B27;
    sbit  TIME12_CAN1_TDT1R_bit at CAN1_TDT1R.B28;
    sbit  TIME13_CAN1_TDT1R_bit at CAN1_TDT1R.B29;
    sbit  TIME14_CAN1_TDT1R_bit at CAN1_TDT1R.B30;
    sbit  TIME15_CAN1_TDT1R_bit at CAN1_TDT1R.B31;
    sbit  TGT_CAN1_TDT1R_bit at CAN1_TDT1R.B8;
    sbit  DLC0_CAN1_TDT1R_bit at CAN1_TDT1R.B0;
    sbit  DLC1_CAN1_TDT1R_bit at CAN1_TDT1R.B1;
    sbit  DLC2_CAN1_TDT1R_bit at CAN1_TDT1R.B2;
    sbit  DLC3_CAN1_TDT1R_bit at CAN1_TDT1R.B3;

sfr unsigned long   volatile CAN1_TDL1R           absolute 0x40006598;
    sbit  DATA30_CAN1_TDL1R_bit at CAN1_TDL1R.B24;
    sbit  DATA31_CAN1_TDL1R_bit at CAN1_TDL1R.B25;
    sbit  DATA32_CAN1_TDL1R_bit at CAN1_TDL1R.B26;
    sbit  DATA33_CAN1_TDL1R_bit at CAN1_TDL1R.B27;
    sbit  DATA34_CAN1_TDL1R_bit at CAN1_TDL1R.B28;
    sbit  DATA35_CAN1_TDL1R_bit at CAN1_TDL1R.B29;
    sbit  DATA36_CAN1_TDL1R_bit at CAN1_TDL1R.B30;
    sbit  DATA37_CAN1_TDL1R_bit at CAN1_TDL1R.B31;
    sbit  DATA20_CAN1_TDL1R_bit at CAN1_TDL1R.B16;
    sbit  DATA21_CAN1_TDL1R_bit at CAN1_TDL1R.B17;
    sbit  DATA22_CAN1_TDL1R_bit at CAN1_TDL1R.B18;
    sbit  DATA23_CAN1_TDL1R_bit at CAN1_TDL1R.B19;
    sbit  DATA24_CAN1_TDL1R_bit at CAN1_TDL1R.B20;
    sbit  DATA25_CAN1_TDL1R_bit at CAN1_TDL1R.B21;
    sbit  DATA26_CAN1_TDL1R_bit at CAN1_TDL1R.B22;
    sbit  DATA27_CAN1_TDL1R_bit at CAN1_TDL1R.B23;
    sbit  DATA10_CAN1_TDL1R_bit at CAN1_TDL1R.B8;
    sbit  DATA11_CAN1_TDL1R_bit at CAN1_TDL1R.B9;
    sbit  DATA12_CAN1_TDL1R_bit at CAN1_TDL1R.B10;
    sbit  DATA13_CAN1_TDL1R_bit at CAN1_TDL1R.B11;
    sbit  DATA14_CAN1_TDL1R_bit at CAN1_TDL1R.B12;
    sbit  DATA15_CAN1_TDL1R_bit at CAN1_TDL1R.B13;
    sbit  DATA16_CAN1_TDL1R_bit at CAN1_TDL1R.B14;
    sbit  DATA17_CAN1_TDL1R_bit at CAN1_TDL1R.B15;
    sbit  DATA00_CAN1_TDL1R_bit at CAN1_TDL1R.B0;
    sbit  DATA01_CAN1_TDL1R_bit at CAN1_TDL1R.B1;
    sbit  DATA02_CAN1_TDL1R_bit at CAN1_TDL1R.B2;
    sbit  DATA03_CAN1_TDL1R_bit at CAN1_TDL1R.B3;
    sbit  DATA04_CAN1_TDL1R_bit at CAN1_TDL1R.B4;
    sbit  DATA05_CAN1_TDL1R_bit at CAN1_TDL1R.B5;
    sbit  DATA06_CAN1_TDL1R_bit at CAN1_TDL1R.B6;
    sbit  DATA07_CAN1_TDL1R_bit at CAN1_TDL1R.B7;

sfr unsigned long   volatile CAN1_TDH1R           absolute 0x4000659C;
    sbit  DATA70_CAN1_TDH1R_bit at CAN1_TDH1R.B24;
    sbit  DATA71_CAN1_TDH1R_bit at CAN1_TDH1R.B25;
    sbit  DATA72_CAN1_TDH1R_bit at CAN1_TDH1R.B26;
    sbit  DATA73_CAN1_TDH1R_bit at CAN1_TDH1R.B27;
    sbit  DATA74_CAN1_TDH1R_bit at CAN1_TDH1R.B28;
    sbit  DATA75_CAN1_TDH1R_bit at CAN1_TDH1R.B29;
    sbit  DATA76_CAN1_TDH1R_bit at CAN1_TDH1R.B30;
    sbit  DATA77_CAN1_TDH1R_bit at CAN1_TDH1R.B31;
    sbit  DATA60_CAN1_TDH1R_bit at CAN1_TDH1R.B16;
    sbit  DATA61_CAN1_TDH1R_bit at CAN1_TDH1R.B17;
    sbit  DATA62_CAN1_TDH1R_bit at CAN1_TDH1R.B18;
    sbit  DATA63_CAN1_TDH1R_bit at CAN1_TDH1R.B19;
    sbit  DATA64_CAN1_TDH1R_bit at CAN1_TDH1R.B20;
    sbit  DATA65_CAN1_TDH1R_bit at CAN1_TDH1R.B21;
    sbit  DATA66_CAN1_TDH1R_bit at CAN1_TDH1R.B22;
    sbit  DATA67_CAN1_TDH1R_bit at CAN1_TDH1R.B23;
    sbit  DATA50_CAN1_TDH1R_bit at CAN1_TDH1R.B8;
    sbit  DATA51_CAN1_TDH1R_bit at CAN1_TDH1R.B9;
    sbit  DATA52_CAN1_TDH1R_bit at CAN1_TDH1R.B10;
    sbit  DATA53_CAN1_TDH1R_bit at CAN1_TDH1R.B11;
    sbit  DATA54_CAN1_TDH1R_bit at CAN1_TDH1R.B12;
    sbit  DATA55_CAN1_TDH1R_bit at CAN1_TDH1R.B13;
    sbit  DATA56_CAN1_TDH1R_bit at CAN1_TDH1R.B14;
    sbit  DATA57_CAN1_TDH1R_bit at CAN1_TDH1R.B15;
    sbit  DATA40_CAN1_TDH1R_bit at CAN1_TDH1R.B0;
    sbit  DATA41_CAN1_TDH1R_bit at CAN1_TDH1R.B1;
    sbit  DATA42_CAN1_TDH1R_bit at CAN1_TDH1R.B2;
    sbit  DATA43_CAN1_TDH1R_bit at CAN1_TDH1R.B3;
    sbit  DATA44_CAN1_TDH1R_bit at CAN1_TDH1R.B4;
    sbit  DATA45_CAN1_TDH1R_bit at CAN1_TDH1R.B5;
    sbit  DATA46_CAN1_TDH1R_bit at CAN1_TDH1R.B6;
    sbit  DATA47_CAN1_TDH1R_bit at CAN1_TDH1R.B7;

sfr unsigned long   volatile CAN1_TI2R            absolute 0x400065A0;
    sbit  STID0_CAN1_TI2R_bit at CAN1_TI2R.B21;
    sbit  STID1_CAN1_TI2R_bit at CAN1_TI2R.B22;
    sbit  STID2_CAN1_TI2R_bit at CAN1_TI2R.B23;
    sbit  STID3_CAN1_TI2R_bit at CAN1_TI2R.B24;
    sbit  STID4_CAN1_TI2R_bit at CAN1_TI2R.B25;
    sbit  STID5_CAN1_TI2R_bit at CAN1_TI2R.B26;
    sbit  STID6_CAN1_TI2R_bit at CAN1_TI2R.B27;
    sbit  STID7_CAN1_TI2R_bit at CAN1_TI2R.B28;
    sbit  STID8_CAN1_TI2R_bit at CAN1_TI2R.B29;
    sbit  STID9_CAN1_TI2R_bit at CAN1_TI2R.B30;
    sbit  STID10_CAN1_TI2R_bit at CAN1_TI2R.B31;
    sbit  EXID0_CAN1_TI2R_bit at CAN1_TI2R.B3;
    sbit  EXID1_CAN1_TI2R_bit at CAN1_TI2R.B4;
    sbit  EXID2_CAN1_TI2R_bit at CAN1_TI2R.B5;
    sbit  EXID3_CAN1_TI2R_bit at CAN1_TI2R.B6;
    sbit  EXID4_CAN1_TI2R_bit at CAN1_TI2R.B7;
    sbit  EXID5_CAN1_TI2R_bit at CAN1_TI2R.B8;
    sbit  EXID6_CAN1_TI2R_bit at CAN1_TI2R.B9;
    sbit  EXID7_CAN1_TI2R_bit at CAN1_TI2R.B10;
    sbit  EXID8_CAN1_TI2R_bit at CAN1_TI2R.B11;
    sbit  EXID9_CAN1_TI2R_bit at CAN1_TI2R.B12;
    sbit  EXID10_CAN1_TI2R_bit at CAN1_TI2R.B13;
    sbit  EXID11_CAN1_TI2R_bit at CAN1_TI2R.B14;
    sbit  EXID12_CAN1_TI2R_bit at CAN1_TI2R.B15;
    sbit  EXID13_CAN1_TI2R_bit at CAN1_TI2R.B16;
    sbit  EXID14_CAN1_TI2R_bit at CAN1_TI2R.B17;
    sbit  EXID15_CAN1_TI2R_bit at CAN1_TI2R.B18;
    sbit  EXID16_CAN1_TI2R_bit at CAN1_TI2R.B19;
    sbit  EXID17_CAN1_TI2R_bit at CAN1_TI2R.B20;
    sbit  IDE_CAN1_TI2R_bit at CAN1_TI2R.B2;
    sbit  RTR_CAN1_TI2R_bit at CAN1_TI2R.B1;
    sbit  TXRQ_CAN1_TI2R_bit at CAN1_TI2R.B0;

sfr unsigned long   volatile CAN1_TDT2R           absolute 0x400065A4;
    sbit  TIME0_CAN1_TDT2R_bit at CAN1_TDT2R.B16;
    sbit  TIME1_CAN1_TDT2R_bit at CAN1_TDT2R.B17;
    sbit  TIME2_CAN1_TDT2R_bit at CAN1_TDT2R.B18;
    sbit  TIME3_CAN1_TDT2R_bit at CAN1_TDT2R.B19;
    sbit  TIME4_CAN1_TDT2R_bit at CAN1_TDT2R.B20;
    sbit  TIME5_CAN1_TDT2R_bit at CAN1_TDT2R.B21;
    sbit  TIME6_CAN1_TDT2R_bit at CAN1_TDT2R.B22;
    sbit  TIME7_CAN1_TDT2R_bit at CAN1_TDT2R.B23;
    sbit  TIME8_CAN1_TDT2R_bit at CAN1_TDT2R.B24;
    sbit  TIME9_CAN1_TDT2R_bit at CAN1_TDT2R.B25;
    sbit  TIME10_CAN1_TDT2R_bit at CAN1_TDT2R.B26;
    sbit  TIME11_CAN1_TDT2R_bit at CAN1_TDT2R.B27;
    sbit  TIME12_CAN1_TDT2R_bit at CAN1_TDT2R.B28;
    sbit  TIME13_CAN1_TDT2R_bit at CAN1_TDT2R.B29;
    sbit  TIME14_CAN1_TDT2R_bit at CAN1_TDT2R.B30;
    sbit  TIME15_CAN1_TDT2R_bit at CAN1_TDT2R.B31;
    sbit  TGT_CAN1_TDT2R_bit at CAN1_TDT2R.B8;
    sbit  DLC0_CAN1_TDT2R_bit at CAN1_TDT2R.B0;
    sbit  DLC1_CAN1_TDT2R_bit at CAN1_TDT2R.B1;
    sbit  DLC2_CAN1_TDT2R_bit at CAN1_TDT2R.B2;
    sbit  DLC3_CAN1_TDT2R_bit at CAN1_TDT2R.B3;

sfr unsigned long   volatile CAN1_TDL2R           absolute 0x400065A8;
    sbit  DATA30_CAN1_TDL2R_bit at CAN1_TDL2R.B24;
    sbit  DATA31_CAN1_TDL2R_bit at CAN1_TDL2R.B25;
    sbit  DATA32_CAN1_TDL2R_bit at CAN1_TDL2R.B26;
    sbit  DATA33_CAN1_TDL2R_bit at CAN1_TDL2R.B27;
    sbit  DATA34_CAN1_TDL2R_bit at CAN1_TDL2R.B28;
    sbit  DATA35_CAN1_TDL2R_bit at CAN1_TDL2R.B29;
    sbit  DATA36_CAN1_TDL2R_bit at CAN1_TDL2R.B30;
    sbit  DATA37_CAN1_TDL2R_bit at CAN1_TDL2R.B31;
    sbit  DATA20_CAN1_TDL2R_bit at CAN1_TDL2R.B16;
    sbit  DATA21_CAN1_TDL2R_bit at CAN1_TDL2R.B17;
    sbit  DATA22_CAN1_TDL2R_bit at CAN1_TDL2R.B18;
    sbit  DATA23_CAN1_TDL2R_bit at CAN1_TDL2R.B19;
    sbit  DATA24_CAN1_TDL2R_bit at CAN1_TDL2R.B20;
    sbit  DATA25_CAN1_TDL2R_bit at CAN1_TDL2R.B21;
    sbit  DATA26_CAN1_TDL2R_bit at CAN1_TDL2R.B22;
    sbit  DATA27_CAN1_TDL2R_bit at CAN1_TDL2R.B23;
    sbit  DATA10_CAN1_TDL2R_bit at CAN1_TDL2R.B8;
    sbit  DATA11_CAN1_TDL2R_bit at CAN1_TDL2R.B9;
    sbit  DATA12_CAN1_TDL2R_bit at CAN1_TDL2R.B10;
    sbit  DATA13_CAN1_TDL2R_bit at CAN1_TDL2R.B11;
    sbit  DATA14_CAN1_TDL2R_bit at CAN1_TDL2R.B12;
    sbit  DATA15_CAN1_TDL2R_bit at CAN1_TDL2R.B13;
    sbit  DATA16_CAN1_TDL2R_bit at CAN1_TDL2R.B14;
    sbit  DATA17_CAN1_TDL2R_bit at CAN1_TDL2R.B15;
    sbit  DATA00_CAN1_TDL2R_bit at CAN1_TDL2R.B0;
    sbit  DATA01_CAN1_TDL2R_bit at CAN1_TDL2R.B1;
    sbit  DATA02_CAN1_TDL2R_bit at CAN1_TDL2R.B2;
    sbit  DATA03_CAN1_TDL2R_bit at CAN1_TDL2R.B3;
    sbit  DATA04_CAN1_TDL2R_bit at CAN1_TDL2R.B4;
    sbit  DATA05_CAN1_TDL2R_bit at CAN1_TDL2R.B5;
    sbit  DATA06_CAN1_TDL2R_bit at CAN1_TDL2R.B6;
    sbit  DATA07_CAN1_TDL2R_bit at CAN1_TDL2R.B7;

sfr unsigned long   volatile CAN1_TDH2R           absolute 0x400065AC;
    sbit  DATA70_CAN1_TDH2R_bit at CAN1_TDH2R.B24;
    sbit  DATA71_CAN1_TDH2R_bit at CAN1_TDH2R.B25;
    sbit  DATA72_CAN1_TDH2R_bit at CAN1_TDH2R.B26;
    sbit  DATA73_CAN1_TDH2R_bit at CAN1_TDH2R.B27;
    sbit  DATA74_CAN1_TDH2R_bit at CAN1_TDH2R.B28;
    sbit  DATA75_CAN1_TDH2R_bit at CAN1_TDH2R.B29;
    sbit  DATA76_CAN1_TDH2R_bit at CAN1_TDH2R.B30;
    sbit  DATA77_CAN1_TDH2R_bit at CAN1_TDH2R.B31;
    sbit  DATA60_CAN1_TDH2R_bit at CAN1_TDH2R.B16;
    sbit  DATA61_CAN1_TDH2R_bit at CAN1_TDH2R.B17;
    sbit  DATA62_CAN1_TDH2R_bit at CAN1_TDH2R.B18;
    sbit  DATA63_CAN1_TDH2R_bit at CAN1_TDH2R.B19;
    sbit  DATA64_CAN1_TDH2R_bit at CAN1_TDH2R.B20;
    sbit  DATA65_CAN1_TDH2R_bit at CAN1_TDH2R.B21;
    sbit  DATA66_CAN1_TDH2R_bit at CAN1_TDH2R.B22;
    sbit  DATA67_CAN1_TDH2R_bit at CAN1_TDH2R.B23;
    sbit  DATA50_CAN1_TDH2R_bit at CAN1_TDH2R.B8;
    sbit  DATA51_CAN1_TDH2R_bit at CAN1_TDH2R.B9;
    sbit  DATA52_CAN1_TDH2R_bit at CAN1_TDH2R.B10;
    sbit  DATA53_CAN1_TDH2R_bit at CAN1_TDH2R.B11;
    sbit  DATA54_CAN1_TDH2R_bit at CAN1_TDH2R.B12;
    sbit  DATA55_CAN1_TDH2R_bit at CAN1_TDH2R.B13;
    sbit  DATA56_CAN1_TDH2R_bit at CAN1_TDH2R.B14;
    sbit  DATA57_CAN1_TDH2R_bit at CAN1_TDH2R.B15;
    sbit  DATA40_CAN1_TDH2R_bit at CAN1_TDH2R.B0;
    sbit  DATA41_CAN1_TDH2R_bit at CAN1_TDH2R.B1;
    sbit  DATA42_CAN1_TDH2R_bit at CAN1_TDH2R.B2;
    sbit  DATA43_CAN1_TDH2R_bit at CAN1_TDH2R.B3;
    sbit  DATA44_CAN1_TDH2R_bit at CAN1_TDH2R.B4;
    sbit  DATA45_CAN1_TDH2R_bit at CAN1_TDH2R.B5;
    sbit  DATA46_CAN1_TDH2R_bit at CAN1_TDH2R.B6;
    sbit  DATA47_CAN1_TDH2R_bit at CAN1_TDH2R.B7;

sfr unsigned long   volatile CAN1_RI0R            absolute 0x400065B0;
    sbit  STID0_CAN1_RI0R_bit at CAN1_RI0R.B21;
    sbit  STID1_CAN1_RI0R_bit at CAN1_RI0R.B22;
    sbit  STID2_CAN1_RI0R_bit at CAN1_RI0R.B23;
    sbit  STID3_CAN1_RI0R_bit at CAN1_RI0R.B24;
    sbit  STID4_CAN1_RI0R_bit at CAN1_RI0R.B25;
    sbit  STID5_CAN1_RI0R_bit at CAN1_RI0R.B26;
    sbit  STID6_CAN1_RI0R_bit at CAN1_RI0R.B27;
    sbit  STID7_CAN1_RI0R_bit at CAN1_RI0R.B28;
    sbit  STID8_CAN1_RI0R_bit at CAN1_RI0R.B29;
    sbit  STID9_CAN1_RI0R_bit at CAN1_RI0R.B30;
    sbit  STID10_CAN1_RI0R_bit at CAN1_RI0R.B31;
    sbit  EXID0_CAN1_RI0R_bit at CAN1_RI0R.B3;
    sbit  EXID1_CAN1_RI0R_bit at CAN1_RI0R.B4;
    sbit  EXID2_CAN1_RI0R_bit at CAN1_RI0R.B5;
    sbit  EXID3_CAN1_RI0R_bit at CAN1_RI0R.B6;
    sbit  EXID4_CAN1_RI0R_bit at CAN1_RI0R.B7;
    sbit  EXID5_CAN1_RI0R_bit at CAN1_RI0R.B8;
    sbit  EXID6_CAN1_RI0R_bit at CAN1_RI0R.B9;
    sbit  EXID7_CAN1_RI0R_bit at CAN1_RI0R.B10;
    sbit  EXID8_CAN1_RI0R_bit at CAN1_RI0R.B11;
    sbit  EXID9_CAN1_RI0R_bit at CAN1_RI0R.B12;
    sbit  EXID10_CAN1_RI0R_bit at CAN1_RI0R.B13;
    sbit  EXID11_CAN1_RI0R_bit at CAN1_RI0R.B14;
    sbit  EXID12_CAN1_RI0R_bit at CAN1_RI0R.B15;
    sbit  EXID13_CAN1_RI0R_bit at CAN1_RI0R.B16;
    sbit  EXID14_CAN1_RI0R_bit at CAN1_RI0R.B17;
    sbit  EXID15_CAN1_RI0R_bit at CAN1_RI0R.B18;
    sbit  EXID16_CAN1_RI0R_bit at CAN1_RI0R.B19;
    sbit  EXID17_CAN1_RI0R_bit at CAN1_RI0R.B20;
    sbit  IDE_CAN1_RI0R_bit at CAN1_RI0R.B2;
    sbit  RTR_CAN1_RI0R_bit at CAN1_RI0R.B1;

sfr unsigned long   volatile CAN1_RDT0R           absolute 0x400065B4;
    sbit  TIME0_CAN1_RDT0R_bit at CAN1_RDT0R.B16;
    sbit  TIME1_CAN1_RDT0R_bit at CAN1_RDT0R.B17;
    sbit  TIME2_CAN1_RDT0R_bit at CAN1_RDT0R.B18;
    sbit  TIME3_CAN1_RDT0R_bit at CAN1_RDT0R.B19;
    sbit  TIME4_CAN1_RDT0R_bit at CAN1_RDT0R.B20;
    sbit  TIME5_CAN1_RDT0R_bit at CAN1_RDT0R.B21;
    sbit  TIME6_CAN1_RDT0R_bit at CAN1_RDT0R.B22;
    sbit  TIME7_CAN1_RDT0R_bit at CAN1_RDT0R.B23;
    sbit  TIME8_CAN1_RDT0R_bit at CAN1_RDT0R.B24;
    sbit  TIME9_CAN1_RDT0R_bit at CAN1_RDT0R.B25;
    sbit  TIME10_CAN1_RDT0R_bit at CAN1_RDT0R.B26;
    sbit  TIME11_CAN1_RDT0R_bit at CAN1_RDT0R.B27;
    sbit  TIME12_CAN1_RDT0R_bit at CAN1_RDT0R.B28;
    sbit  TIME13_CAN1_RDT0R_bit at CAN1_RDT0R.B29;
    sbit  TIME14_CAN1_RDT0R_bit at CAN1_RDT0R.B30;
    sbit  TIME15_CAN1_RDT0R_bit at CAN1_RDT0R.B31;
    const register unsigned short int FMI0 = 8;
    sbit  FMI0_bit at CAN1_RDT0R.B8;
    const register unsigned short int FMI1 = 9;
    sbit  FMI1_bit at CAN1_RDT0R.B9;
    const register unsigned short int FMI2 = 10;
    sbit  FMI2_bit at CAN1_RDT0R.B10;
    const register unsigned short int FMI3 = 11;
    sbit  FMI3_bit at CAN1_RDT0R.B11;
    const register unsigned short int FMI4 = 12;
    sbit  FMI4_bit at CAN1_RDT0R.B12;
    const register unsigned short int FMI5 = 13;
    sbit  FMI5_bit at CAN1_RDT0R.B13;
    const register unsigned short int FMI6 = 14;
    sbit  FMI6_bit at CAN1_RDT0R.B14;
    const register unsigned short int FMI7 = 15;
    sbit  FMI7_bit at CAN1_RDT0R.B15;
    sbit  DLC0_CAN1_RDT0R_bit at CAN1_RDT0R.B0;
    sbit  DLC1_CAN1_RDT0R_bit at CAN1_RDT0R.B1;
    sbit  DLC2_CAN1_RDT0R_bit at CAN1_RDT0R.B2;
    sbit  DLC3_CAN1_RDT0R_bit at CAN1_RDT0R.B3;

sfr unsigned long   volatile CAN1_RDL0R           absolute 0x400065B8;
    sbit  DATA30_CAN1_RDL0R_bit at CAN1_RDL0R.B24;
    sbit  DATA31_CAN1_RDL0R_bit at CAN1_RDL0R.B25;
    sbit  DATA32_CAN1_RDL0R_bit at CAN1_RDL0R.B26;
    sbit  DATA33_CAN1_RDL0R_bit at CAN1_RDL0R.B27;
    sbit  DATA34_CAN1_RDL0R_bit at CAN1_RDL0R.B28;
    sbit  DATA35_CAN1_RDL0R_bit at CAN1_RDL0R.B29;
    sbit  DATA36_CAN1_RDL0R_bit at CAN1_RDL0R.B30;
    sbit  DATA37_CAN1_RDL0R_bit at CAN1_RDL0R.B31;
    sbit  DATA20_CAN1_RDL0R_bit at CAN1_RDL0R.B16;
    sbit  DATA21_CAN1_RDL0R_bit at CAN1_RDL0R.B17;
    sbit  DATA22_CAN1_RDL0R_bit at CAN1_RDL0R.B18;
    sbit  DATA23_CAN1_RDL0R_bit at CAN1_RDL0R.B19;
    sbit  DATA24_CAN1_RDL0R_bit at CAN1_RDL0R.B20;
    sbit  DATA25_CAN1_RDL0R_bit at CAN1_RDL0R.B21;
    sbit  DATA26_CAN1_RDL0R_bit at CAN1_RDL0R.B22;
    sbit  DATA27_CAN1_RDL0R_bit at CAN1_RDL0R.B23;
    sbit  DATA10_CAN1_RDL0R_bit at CAN1_RDL0R.B8;
    sbit  DATA11_CAN1_RDL0R_bit at CAN1_RDL0R.B9;
    sbit  DATA12_CAN1_RDL0R_bit at CAN1_RDL0R.B10;
    sbit  DATA13_CAN1_RDL0R_bit at CAN1_RDL0R.B11;
    sbit  DATA14_CAN1_RDL0R_bit at CAN1_RDL0R.B12;
    sbit  DATA15_CAN1_RDL0R_bit at CAN1_RDL0R.B13;
    sbit  DATA16_CAN1_RDL0R_bit at CAN1_RDL0R.B14;
    sbit  DATA17_CAN1_RDL0R_bit at CAN1_RDL0R.B15;
    sbit  DATA00_CAN1_RDL0R_bit at CAN1_RDL0R.B0;
    sbit  DATA01_CAN1_RDL0R_bit at CAN1_RDL0R.B1;
    sbit  DATA02_CAN1_RDL0R_bit at CAN1_RDL0R.B2;
    sbit  DATA03_CAN1_RDL0R_bit at CAN1_RDL0R.B3;
    sbit  DATA04_CAN1_RDL0R_bit at CAN1_RDL0R.B4;
    sbit  DATA05_CAN1_RDL0R_bit at CAN1_RDL0R.B5;
    sbit  DATA06_CAN1_RDL0R_bit at CAN1_RDL0R.B6;
    sbit  DATA07_CAN1_RDL0R_bit at CAN1_RDL0R.B7;

sfr unsigned long   volatile CAN1_RDH0R           absolute 0x400065BC;
    sbit  DATA70_CAN1_RDH0R_bit at CAN1_RDH0R.B24;
    sbit  DATA71_CAN1_RDH0R_bit at CAN1_RDH0R.B25;
    sbit  DATA72_CAN1_RDH0R_bit at CAN1_RDH0R.B26;
    sbit  DATA73_CAN1_RDH0R_bit at CAN1_RDH0R.B27;
    sbit  DATA74_CAN1_RDH0R_bit at CAN1_RDH0R.B28;
    sbit  DATA75_CAN1_RDH0R_bit at CAN1_RDH0R.B29;
    sbit  DATA76_CAN1_RDH0R_bit at CAN1_RDH0R.B30;
    sbit  DATA77_CAN1_RDH0R_bit at CAN1_RDH0R.B31;
    sbit  DATA60_CAN1_RDH0R_bit at CAN1_RDH0R.B16;
    sbit  DATA61_CAN1_RDH0R_bit at CAN1_RDH0R.B17;
    sbit  DATA62_CAN1_RDH0R_bit at CAN1_RDH0R.B18;
    sbit  DATA63_CAN1_RDH0R_bit at CAN1_RDH0R.B19;
    sbit  DATA64_CAN1_RDH0R_bit at CAN1_RDH0R.B20;
    sbit  DATA65_CAN1_RDH0R_bit at CAN1_RDH0R.B21;
    sbit  DATA66_CAN1_RDH0R_bit at CAN1_RDH0R.B22;
    sbit  DATA67_CAN1_RDH0R_bit at CAN1_RDH0R.B23;
    sbit  DATA50_CAN1_RDH0R_bit at CAN1_RDH0R.B8;
    sbit  DATA51_CAN1_RDH0R_bit at CAN1_RDH0R.B9;
    sbit  DATA52_CAN1_RDH0R_bit at CAN1_RDH0R.B10;
    sbit  DATA53_CAN1_RDH0R_bit at CAN1_RDH0R.B11;
    sbit  DATA54_CAN1_RDH0R_bit at CAN1_RDH0R.B12;
    sbit  DATA55_CAN1_RDH0R_bit at CAN1_RDH0R.B13;
    sbit  DATA56_CAN1_RDH0R_bit at CAN1_RDH0R.B14;
    sbit  DATA57_CAN1_RDH0R_bit at CAN1_RDH0R.B15;
    sbit  DATA40_CAN1_RDH0R_bit at CAN1_RDH0R.B0;
    sbit  DATA41_CAN1_RDH0R_bit at CAN1_RDH0R.B1;
    sbit  DATA42_CAN1_RDH0R_bit at CAN1_RDH0R.B2;
    sbit  DATA43_CAN1_RDH0R_bit at CAN1_RDH0R.B3;
    sbit  DATA44_CAN1_RDH0R_bit at CAN1_RDH0R.B4;
    sbit  DATA45_CAN1_RDH0R_bit at CAN1_RDH0R.B5;
    sbit  DATA46_CAN1_RDH0R_bit at CAN1_RDH0R.B6;
    sbit  DATA47_CAN1_RDH0R_bit at CAN1_RDH0R.B7;

sfr unsigned long   volatile CAN1_RI1R            absolute 0x400065C0;
    sbit  STID0_CAN1_RI1R_bit at CAN1_RI1R.B21;
    sbit  STID1_CAN1_RI1R_bit at CAN1_RI1R.B22;
    sbit  STID2_CAN1_RI1R_bit at CAN1_RI1R.B23;
    sbit  STID3_CAN1_RI1R_bit at CAN1_RI1R.B24;
    sbit  STID4_CAN1_RI1R_bit at CAN1_RI1R.B25;
    sbit  STID5_CAN1_RI1R_bit at CAN1_RI1R.B26;
    sbit  STID6_CAN1_RI1R_bit at CAN1_RI1R.B27;
    sbit  STID7_CAN1_RI1R_bit at CAN1_RI1R.B28;
    sbit  STID8_CAN1_RI1R_bit at CAN1_RI1R.B29;
    sbit  STID9_CAN1_RI1R_bit at CAN1_RI1R.B30;
    sbit  STID10_CAN1_RI1R_bit at CAN1_RI1R.B31;
    sbit  EXID0_CAN1_RI1R_bit at CAN1_RI1R.B3;
    sbit  EXID1_CAN1_RI1R_bit at CAN1_RI1R.B4;
    sbit  EXID2_CAN1_RI1R_bit at CAN1_RI1R.B5;
    sbit  EXID3_CAN1_RI1R_bit at CAN1_RI1R.B6;
    sbit  EXID4_CAN1_RI1R_bit at CAN1_RI1R.B7;
    sbit  EXID5_CAN1_RI1R_bit at CAN1_RI1R.B8;
    sbit  EXID6_CAN1_RI1R_bit at CAN1_RI1R.B9;
    sbit  EXID7_CAN1_RI1R_bit at CAN1_RI1R.B10;
    sbit  EXID8_CAN1_RI1R_bit at CAN1_RI1R.B11;
    sbit  EXID9_CAN1_RI1R_bit at CAN1_RI1R.B12;
    sbit  EXID10_CAN1_RI1R_bit at CAN1_RI1R.B13;
    sbit  EXID11_CAN1_RI1R_bit at CAN1_RI1R.B14;
    sbit  EXID12_CAN1_RI1R_bit at CAN1_RI1R.B15;
    sbit  EXID13_CAN1_RI1R_bit at CAN1_RI1R.B16;
    sbit  EXID14_CAN1_RI1R_bit at CAN1_RI1R.B17;
    sbit  EXID15_CAN1_RI1R_bit at CAN1_RI1R.B18;
    sbit  EXID16_CAN1_RI1R_bit at CAN1_RI1R.B19;
    sbit  EXID17_CAN1_RI1R_bit at CAN1_RI1R.B20;
    sbit  IDE_CAN1_RI1R_bit at CAN1_RI1R.B2;
    sbit  RTR_CAN1_RI1R_bit at CAN1_RI1R.B1;

sfr unsigned long   volatile CAN1_RDT1R           absolute 0x400065C4;
    sbit  TIME0_CAN1_RDT1R_bit at CAN1_RDT1R.B16;
    sbit  TIME1_CAN1_RDT1R_bit at CAN1_RDT1R.B17;
    sbit  TIME2_CAN1_RDT1R_bit at CAN1_RDT1R.B18;
    sbit  TIME3_CAN1_RDT1R_bit at CAN1_RDT1R.B19;
    sbit  TIME4_CAN1_RDT1R_bit at CAN1_RDT1R.B20;
    sbit  TIME5_CAN1_RDT1R_bit at CAN1_RDT1R.B21;
    sbit  TIME6_CAN1_RDT1R_bit at CAN1_RDT1R.B22;
    sbit  TIME7_CAN1_RDT1R_bit at CAN1_RDT1R.B23;
    sbit  TIME8_CAN1_RDT1R_bit at CAN1_RDT1R.B24;
    sbit  TIME9_CAN1_RDT1R_bit at CAN1_RDT1R.B25;
    sbit  TIME10_CAN1_RDT1R_bit at CAN1_RDT1R.B26;
    sbit  TIME11_CAN1_RDT1R_bit at CAN1_RDT1R.B27;
    sbit  TIME12_CAN1_RDT1R_bit at CAN1_RDT1R.B28;
    sbit  TIME13_CAN1_RDT1R_bit at CAN1_RDT1R.B29;
    sbit  TIME14_CAN1_RDT1R_bit at CAN1_RDT1R.B30;
    sbit  TIME15_CAN1_RDT1R_bit at CAN1_RDT1R.B31;
    sbit  FMI0_CAN1_RDT1R_bit at CAN1_RDT1R.B8;
    sbit  FMI1_CAN1_RDT1R_bit at CAN1_RDT1R.B9;
    sbit  FMI2_CAN1_RDT1R_bit at CAN1_RDT1R.B10;
    sbit  FMI3_CAN1_RDT1R_bit at CAN1_RDT1R.B11;
    sbit  FMI4_CAN1_RDT1R_bit at CAN1_RDT1R.B12;
    sbit  FMI5_CAN1_RDT1R_bit at CAN1_RDT1R.B13;
    sbit  FMI6_CAN1_RDT1R_bit at CAN1_RDT1R.B14;
    sbit  FMI7_CAN1_RDT1R_bit at CAN1_RDT1R.B15;
    sbit  DLC0_CAN1_RDT1R_bit at CAN1_RDT1R.B0;
    sbit  DLC1_CAN1_RDT1R_bit at CAN1_RDT1R.B1;
    sbit  DLC2_CAN1_RDT1R_bit at CAN1_RDT1R.B2;
    sbit  DLC3_CAN1_RDT1R_bit at CAN1_RDT1R.B3;

sfr unsigned long   volatile CAN1_RDL1R           absolute 0x400065C8;
    sbit  DATA30_CAN1_RDL1R_bit at CAN1_RDL1R.B24;
    sbit  DATA31_CAN1_RDL1R_bit at CAN1_RDL1R.B25;
    sbit  DATA32_CAN1_RDL1R_bit at CAN1_RDL1R.B26;
    sbit  DATA33_CAN1_RDL1R_bit at CAN1_RDL1R.B27;
    sbit  DATA34_CAN1_RDL1R_bit at CAN1_RDL1R.B28;
    sbit  DATA35_CAN1_RDL1R_bit at CAN1_RDL1R.B29;
    sbit  DATA36_CAN1_RDL1R_bit at CAN1_RDL1R.B30;
    sbit  DATA37_CAN1_RDL1R_bit at CAN1_RDL1R.B31;
    sbit  DATA20_CAN1_RDL1R_bit at CAN1_RDL1R.B16;
    sbit  DATA21_CAN1_RDL1R_bit at CAN1_RDL1R.B17;
    sbit  DATA22_CAN1_RDL1R_bit at CAN1_RDL1R.B18;
    sbit  DATA23_CAN1_RDL1R_bit at CAN1_RDL1R.B19;
    sbit  DATA24_CAN1_RDL1R_bit at CAN1_RDL1R.B20;
    sbit  DATA25_CAN1_RDL1R_bit at CAN1_RDL1R.B21;
    sbit  DATA26_CAN1_RDL1R_bit at CAN1_RDL1R.B22;
    sbit  DATA27_CAN1_RDL1R_bit at CAN1_RDL1R.B23;
    sbit  DATA10_CAN1_RDL1R_bit at CAN1_RDL1R.B8;
    sbit  DATA11_CAN1_RDL1R_bit at CAN1_RDL1R.B9;
    sbit  DATA12_CAN1_RDL1R_bit at CAN1_RDL1R.B10;
    sbit  DATA13_CAN1_RDL1R_bit at CAN1_RDL1R.B11;
    sbit  DATA14_CAN1_RDL1R_bit at CAN1_RDL1R.B12;
    sbit  DATA15_CAN1_RDL1R_bit at CAN1_RDL1R.B13;
    sbit  DATA16_CAN1_RDL1R_bit at CAN1_RDL1R.B14;
    sbit  DATA17_CAN1_RDL1R_bit at CAN1_RDL1R.B15;
    sbit  DATA00_CAN1_RDL1R_bit at CAN1_RDL1R.B0;
    sbit  DATA01_CAN1_RDL1R_bit at CAN1_RDL1R.B1;
    sbit  DATA02_CAN1_RDL1R_bit at CAN1_RDL1R.B2;
    sbit  DATA03_CAN1_RDL1R_bit at CAN1_RDL1R.B3;
    sbit  DATA04_CAN1_RDL1R_bit at CAN1_RDL1R.B4;
    sbit  DATA05_CAN1_RDL1R_bit at CAN1_RDL1R.B5;
    sbit  DATA06_CAN1_RDL1R_bit at CAN1_RDL1R.B6;
    sbit  DATA07_CAN1_RDL1R_bit at CAN1_RDL1R.B7;

sfr unsigned long   volatile CAN1_RDH1R           absolute 0x400065CC;
    sbit  DATA70_CAN1_RDH1R_bit at CAN1_RDH1R.B24;
    sbit  DATA71_CAN1_RDH1R_bit at CAN1_RDH1R.B25;
    sbit  DATA72_CAN1_RDH1R_bit at CAN1_RDH1R.B26;
    sbit  DATA73_CAN1_RDH1R_bit at CAN1_RDH1R.B27;
    sbit  DATA74_CAN1_RDH1R_bit at CAN1_RDH1R.B28;
    sbit  DATA75_CAN1_RDH1R_bit at CAN1_RDH1R.B29;
    sbit  DATA76_CAN1_RDH1R_bit at CAN1_RDH1R.B30;
    sbit  DATA77_CAN1_RDH1R_bit at CAN1_RDH1R.B31;
    sbit  DATA60_CAN1_RDH1R_bit at CAN1_RDH1R.B16;
    sbit  DATA61_CAN1_RDH1R_bit at CAN1_RDH1R.B17;
    sbit  DATA62_CAN1_RDH1R_bit at CAN1_RDH1R.B18;
    sbit  DATA63_CAN1_RDH1R_bit at CAN1_RDH1R.B19;
    sbit  DATA64_CAN1_RDH1R_bit at CAN1_RDH1R.B20;
    sbit  DATA65_CAN1_RDH1R_bit at CAN1_RDH1R.B21;
    sbit  DATA66_CAN1_RDH1R_bit at CAN1_RDH1R.B22;
    sbit  DATA67_CAN1_RDH1R_bit at CAN1_RDH1R.B23;
    sbit  DATA50_CAN1_RDH1R_bit at CAN1_RDH1R.B8;
    sbit  DATA51_CAN1_RDH1R_bit at CAN1_RDH1R.B9;
    sbit  DATA52_CAN1_RDH1R_bit at CAN1_RDH1R.B10;
    sbit  DATA53_CAN1_RDH1R_bit at CAN1_RDH1R.B11;
    sbit  DATA54_CAN1_RDH1R_bit at CAN1_RDH1R.B12;
    sbit  DATA55_CAN1_RDH1R_bit at CAN1_RDH1R.B13;
    sbit  DATA56_CAN1_RDH1R_bit at CAN1_RDH1R.B14;
    sbit  DATA57_CAN1_RDH1R_bit at CAN1_RDH1R.B15;
    sbit  DATA40_CAN1_RDH1R_bit at CAN1_RDH1R.B0;
    sbit  DATA41_CAN1_RDH1R_bit at CAN1_RDH1R.B1;
    sbit  DATA42_CAN1_RDH1R_bit at CAN1_RDH1R.B2;
    sbit  DATA43_CAN1_RDH1R_bit at CAN1_RDH1R.B3;
    sbit  DATA44_CAN1_RDH1R_bit at CAN1_RDH1R.B4;
    sbit  DATA45_CAN1_RDH1R_bit at CAN1_RDH1R.B5;
    sbit  DATA46_CAN1_RDH1R_bit at CAN1_RDH1R.B6;
    sbit  DATA47_CAN1_RDH1R_bit at CAN1_RDH1R.B7;

sfr unsigned long   volatile CAN1_FMR             absolute 0x40006600;
    const register unsigned short int CAN2SB0 = 8;
    sbit  CAN2SB0_bit at CAN1_FMR.B8;
    const register unsigned short int CAN2SB1 = 9;
    sbit  CAN2SB1_bit at CAN1_FMR.B9;
    const register unsigned short int CAN2SB2 = 10;
    sbit  CAN2SB2_bit at CAN1_FMR.B10;
    const register unsigned short int CAN2SB3 = 11;
    sbit  CAN2SB3_bit at CAN1_FMR.B11;
    const register unsigned short int CAN2SB4 = 12;
    sbit  CAN2SB4_bit at CAN1_FMR.B12;
    const register unsigned short int CAN2SB5 = 13;
    sbit  CAN2SB5_bit at CAN1_FMR.B13;
    const register unsigned short int FINIT = 0;
    sbit  FINIT_bit at CAN1_FMR.B0;

sfr unsigned long   volatile CAN1_FM1R            absolute 0x40006604;
    const register unsigned short int FBM0 = 0;
    sbit  FBM0_bit at CAN1_FM1R.B0;
    const register unsigned short int FBM1 = 1;
    sbit  FBM1_bit at CAN1_FM1R.B1;
    const register unsigned short int FBM2 = 2;
    sbit  FBM2_bit at CAN1_FM1R.B2;
    const register unsigned short int FBM3 = 3;
    sbit  FBM3_bit at CAN1_FM1R.B3;
    const register unsigned short int FBM4 = 4;
    sbit  FBM4_bit at CAN1_FM1R.B4;
    const register unsigned short int FBM5 = 5;
    sbit  FBM5_bit at CAN1_FM1R.B5;
    const register unsigned short int FBM6 = 6;
    sbit  FBM6_bit at CAN1_FM1R.B6;
    const register unsigned short int FBM7 = 7;
    sbit  FBM7_bit at CAN1_FM1R.B7;
    const register unsigned short int FBM8 = 8;
    sbit  FBM8_bit at CAN1_FM1R.B8;
    const register unsigned short int FBM9 = 9;
    sbit  FBM9_bit at CAN1_FM1R.B9;
    const register unsigned short int FBM10 = 10;
    sbit  FBM10_bit at CAN1_FM1R.B10;
    const register unsigned short int FBM11 = 11;
    sbit  FBM11_bit at CAN1_FM1R.B11;
    const register unsigned short int FBM12 = 12;
    sbit  FBM12_bit at CAN1_FM1R.B12;
    const register unsigned short int FBM13 = 13;
    sbit  FBM13_bit at CAN1_FM1R.B13;
    const register unsigned short int FBM14 = 14;
    sbit  FBM14_bit at CAN1_FM1R.B14;
    const register unsigned short int FBM15 = 15;
    sbit  FBM15_bit at CAN1_FM1R.B15;
    const register unsigned short int FBM16 = 16;
    sbit  FBM16_bit at CAN1_FM1R.B16;
    const register unsigned short int FBM17 = 17;
    sbit  FBM17_bit at CAN1_FM1R.B17;
    const register unsigned short int FBM18 = 18;
    sbit  FBM18_bit at CAN1_FM1R.B18;
    const register unsigned short int FBM19 = 19;
    sbit  FBM19_bit at CAN1_FM1R.B19;
    const register unsigned short int FBM20 = 20;
    sbit  FBM20_bit at CAN1_FM1R.B20;
    const register unsigned short int FBM21 = 21;
    sbit  FBM21_bit at CAN1_FM1R.B21;
    const register unsigned short int FBM22 = 22;
    sbit  FBM22_bit at CAN1_FM1R.B22;
    const register unsigned short int FBM23 = 23;
    sbit  FBM23_bit at CAN1_FM1R.B23;
    const register unsigned short int FBM24 = 24;
    sbit  FBM24_bit at CAN1_FM1R.B24;
    const register unsigned short int FBM25 = 25;
    sbit  FBM25_bit at CAN1_FM1R.B25;
    const register unsigned short int FBM26 = 26;
    sbit  FBM26_bit at CAN1_FM1R.B26;
    const register unsigned short int FBM27 = 27;
    sbit  FBM27_bit at CAN1_FM1R.B27;

sfr unsigned long   volatile CAN1_FS1R            absolute 0x4000660C;
    const register unsigned short int FSC0 = 0;
    sbit  FSC0_bit at CAN1_FS1R.B0;
    const register unsigned short int FSC1 = 1;
    sbit  FSC1_bit at CAN1_FS1R.B1;
    const register unsigned short int FSC2 = 2;
    sbit  FSC2_bit at CAN1_FS1R.B2;
    const register unsigned short int FSC3 = 3;
    sbit  FSC3_bit at CAN1_FS1R.B3;
    const register unsigned short int FSC4 = 4;
    sbit  FSC4_bit at CAN1_FS1R.B4;
    const register unsigned short int FSC5 = 5;
    sbit  FSC5_bit at CAN1_FS1R.B5;
    const register unsigned short int FSC6 = 6;
    sbit  FSC6_bit at CAN1_FS1R.B6;
    const register unsigned short int FSC7 = 7;
    sbit  FSC7_bit at CAN1_FS1R.B7;
    const register unsigned short int FSC8 = 8;
    sbit  FSC8_bit at CAN1_FS1R.B8;
    const register unsigned short int FSC9 = 9;
    sbit  FSC9_bit at CAN1_FS1R.B9;
    const register unsigned short int FSC10 = 10;
    sbit  FSC10_bit at CAN1_FS1R.B10;
    const register unsigned short int FSC11 = 11;
    sbit  FSC11_bit at CAN1_FS1R.B11;
    const register unsigned short int FSC12 = 12;
    sbit  FSC12_bit at CAN1_FS1R.B12;
    const register unsigned short int FSC13 = 13;
    sbit  FSC13_bit at CAN1_FS1R.B13;
    const register unsigned short int FSC14 = 14;
    sbit  FSC14_bit at CAN1_FS1R.B14;
    const register unsigned short int FSC15 = 15;
    sbit  FSC15_bit at CAN1_FS1R.B15;
    const register unsigned short int FSC16 = 16;
    sbit  FSC16_bit at CAN1_FS1R.B16;
    const register unsigned short int FSC17 = 17;
    sbit  FSC17_bit at CAN1_FS1R.B17;
    const register unsigned short int FSC18 = 18;
    sbit  FSC18_bit at CAN1_FS1R.B18;
    const register unsigned short int FSC19 = 19;
    sbit  FSC19_bit at CAN1_FS1R.B19;
    const register unsigned short int FSC20 = 20;
    sbit  FSC20_bit at CAN1_FS1R.B20;
    const register unsigned short int FSC21 = 21;
    sbit  FSC21_bit at CAN1_FS1R.B21;
    const register unsigned short int FSC22 = 22;
    sbit  FSC22_bit at CAN1_FS1R.B22;
    const register unsigned short int FSC23 = 23;
    sbit  FSC23_bit at CAN1_FS1R.B23;
    const register unsigned short int FSC24 = 24;
    sbit  FSC24_bit at CAN1_FS1R.B24;
    const register unsigned short int FSC25 = 25;
    sbit  FSC25_bit at CAN1_FS1R.B25;
    const register unsigned short int FSC26 = 26;
    sbit  FSC26_bit at CAN1_FS1R.B26;
    const register unsigned short int FSC27 = 27;
    sbit  FSC27_bit at CAN1_FS1R.B27;

sfr unsigned long   volatile CAN1_FFA1R           absolute 0x40006614;
    const register unsigned short int FFA0 = 0;
    sbit  FFA0_bit at CAN1_FFA1R.B0;
    const register unsigned short int FFA1 = 1;
    sbit  FFA1_bit at CAN1_FFA1R.B1;
    const register unsigned short int FFA2 = 2;
    sbit  FFA2_bit at CAN1_FFA1R.B2;
    const register unsigned short int FFA3 = 3;
    sbit  FFA3_bit at CAN1_FFA1R.B3;
    const register unsigned short int FFA4 = 4;
    sbit  FFA4_bit at CAN1_FFA1R.B4;
    const register unsigned short int FFA5 = 5;
    sbit  FFA5_bit at CAN1_FFA1R.B5;
    const register unsigned short int FFA6 = 6;
    sbit  FFA6_bit at CAN1_FFA1R.B6;
    const register unsigned short int FFA7 = 7;
    sbit  FFA7_bit at CAN1_FFA1R.B7;
    const register unsigned short int FFA8 = 8;
    sbit  FFA8_bit at CAN1_FFA1R.B8;
    const register unsigned short int FFA9 = 9;
    sbit  FFA9_bit at CAN1_FFA1R.B9;
    const register unsigned short int FFA10 = 10;
    sbit  FFA10_bit at CAN1_FFA1R.B10;
    const register unsigned short int FFA11 = 11;
    sbit  FFA11_bit at CAN1_FFA1R.B11;
    const register unsigned short int FFA12 = 12;
    sbit  FFA12_bit at CAN1_FFA1R.B12;
    const register unsigned short int FFA13 = 13;
    sbit  FFA13_bit at CAN1_FFA1R.B13;
    const register unsigned short int FFA14 = 14;
    sbit  FFA14_bit at CAN1_FFA1R.B14;
    const register unsigned short int FFA15 = 15;
    sbit  FFA15_bit at CAN1_FFA1R.B15;
    const register unsigned short int FFA16 = 16;
    sbit  FFA16_bit at CAN1_FFA1R.B16;
    const register unsigned short int FFA17 = 17;
    sbit  FFA17_bit at CAN1_FFA1R.B17;
    const register unsigned short int FFA18 = 18;
    sbit  FFA18_bit at CAN1_FFA1R.B18;
    const register unsigned short int FFA19 = 19;
    sbit  FFA19_bit at CAN1_FFA1R.B19;
    const register unsigned short int FFA20 = 20;
    sbit  FFA20_bit at CAN1_FFA1R.B20;
    const register unsigned short int FFA21 = 21;
    sbit  FFA21_bit at CAN1_FFA1R.B21;
    const register unsigned short int FFA22 = 22;
    sbit  FFA22_bit at CAN1_FFA1R.B22;
    const register unsigned short int FFA23 = 23;
    sbit  FFA23_bit at CAN1_FFA1R.B23;
    const register unsigned short int FFA24 = 24;
    sbit  FFA24_bit at CAN1_FFA1R.B24;
    const register unsigned short int FFA25 = 25;
    sbit  FFA25_bit at CAN1_FFA1R.B25;
    const register unsigned short int FFA26 = 26;
    sbit  FFA26_bit at CAN1_FFA1R.B26;
    const register unsigned short int FFA27 = 27;
    sbit  FFA27_bit at CAN1_FFA1R.B27;

sfr unsigned long   volatile CAN1_FA1R            absolute 0x4000661C;
    const register unsigned short int FACT0 = 0;
    sbit  FACT0_bit at CAN1_FA1R.B0;
    const register unsigned short int FACT1 = 1;
    sbit  FACT1_bit at CAN1_FA1R.B1;
    const register unsigned short int FACT2 = 2;
    sbit  FACT2_bit at CAN1_FA1R.B2;
    const register unsigned short int FACT3 = 3;
    sbit  FACT3_bit at CAN1_FA1R.B3;
    const register unsigned short int FACT4 = 4;
    sbit  FACT4_bit at CAN1_FA1R.B4;
    const register unsigned short int FACT5 = 5;
    sbit  FACT5_bit at CAN1_FA1R.B5;
    const register unsigned short int FACT6 = 6;
    sbit  FACT6_bit at CAN1_FA1R.B6;
    const register unsigned short int FACT7 = 7;
    sbit  FACT7_bit at CAN1_FA1R.B7;
    const register unsigned short int FACT8 = 8;
    sbit  FACT8_bit at CAN1_FA1R.B8;
    const register unsigned short int FACT9 = 9;
    sbit  FACT9_bit at CAN1_FA1R.B9;
    const register unsigned short int FACT10 = 10;
    sbit  FACT10_bit at CAN1_FA1R.B10;
    const register unsigned short int FACT11 = 11;
    sbit  FACT11_bit at CAN1_FA1R.B11;
    const register unsigned short int FACT12 = 12;
    sbit  FACT12_bit at CAN1_FA1R.B12;
    const register unsigned short int FACT13 = 13;
    sbit  FACT13_bit at CAN1_FA1R.B13;
    const register unsigned short int FACT14 = 14;
    sbit  FACT14_bit at CAN1_FA1R.B14;
    const register unsigned short int FACT15 = 15;
    sbit  FACT15_bit at CAN1_FA1R.B15;
    const register unsigned short int FACT16 = 16;
    sbit  FACT16_bit at CAN1_FA1R.B16;
    const register unsigned short int FACT17 = 17;
    sbit  FACT17_bit at CAN1_FA1R.B17;
    const register unsigned short int FACT18 = 18;
    sbit  FACT18_bit at CAN1_FA1R.B18;
    const register unsigned short int FACT19 = 19;
    sbit  FACT19_bit at CAN1_FA1R.B19;
    const register unsigned short int FACT20 = 20;
    sbit  FACT20_bit at CAN1_FA1R.B20;
    const register unsigned short int FACT21 = 21;
    sbit  FACT21_bit at CAN1_FA1R.B21;
    const register unsigned short int FACT22 = 22;
    sbit  FACT22_bit at CAN1_FA1R.B22;
    const register unsigned short int FACT23 = 23;
    sbit  FACT23_bit at CAN1_FA1R.B23;
    const register unsigned short int FACT24 = 24;
    sbit  FACT24_bit at CAN1_FA1R.B24;
    const register unsigned short int FACT25 = 25;
    sbit  FACT25_bit at CAN1_FA1R.B25;
    const register unsigned short int FACT26 = 26;
    sbit  FACT26_bit at CAN1_FA1R.B26;
    const register unsigned short int FACT27 = 27;
    sbit  FACT27_bit at CAN1_FA1R.B27;

sfr unsigned long   volatile CAN1_F0R1            absolute 0x40006640;
    const register unsigned short int FB0 = 0;
    sbit  FB0_bit at CAN1_F0R1.B0;
    const register unsigned short int FB1 = 1;
    sbit  FB1_bit at CAN1_F0R1.B1;
    const register unsigned short int FB2 = 2;
    sbit  FB2_bit at CAN1_F0R1.B2;
    const register unsigned short int FB3 = 3;
    sbit  FB3_bit at CAN1_F0R1.B3;
    const register unsigned short int FB4 = 4;
    sbit  FB4_bit at CAN1_F0R1.B4;
    const register unsigned short int FB5 = 5;
    sbit  FB5_bit at CAN1_F0R1.B5;
    const register unsigned short int FB6 = 6;
    sbit  FB6_bit at CAN1_F0R1.B6;
    const register unsigned short int FB7 = 7;
    sbit  FB7_bit at CAN1_F0R1.B7;
    const register unsigned short int FB8 = 8;
    sbit  FB8_bit at CAN1_F0R1.B8;
    const register unsigned short int FB9 = 9;
    sbit  FB9_bit at CAN1_F0R1.B9;
    const register unsigned short int FB10 = 10;
    sbit  FB10_bit at CAN1_F0R1.B10;
    const register unsigned short int FB11 = 11;
    sbit  FB11_bit at CAN1_F0R1.B11;
    const register unsigned short int FB12 = 12;
    sbit  FB12_bit at CAN1_F0R1.B12;
    const register unsigned short int FB13 = 13;
    sbit  FB13_bit at CAN1_F0R1.B13;
    const register unsigned short int FB14 = 14;
    sbit  FB14_bit at CAN1_F0R1.B14;
    const register unsigned short int FB15 = 15;
    sbit  FB15_bit at CAN1_F0R1.B15;
    const register unsigned short int FB16 = 16;
    sbit  FB16_bit at CAN1_F0R1.B16;
    const register unsigned short int FB17 = 17;
    sbit  FB17_bit at CAN1_F0R1.B17;
    const register unsigned short int FB18 = 18;
    sbit  FB18_bit at CAN1_F0R1.B18;
    const register unsigned short int FB19 = 19;
    sbit  FB19_bit at CAN1_F0R1.B19;
    const register unsigned short int FB20 = 20;
    sbit  FB20_bit at CAN1_F0R1.B20;
    const register unsigned short int FB21 = 21;
    sbit  FB21_bit at CAN1_F0R1.B21;
    const register unsigned short int FB22 = 22;
    sbit  FB22_bit at CAN1_F0R1.B22;
    const register unsigned short int FB23 = 23;
    sbit  FB23_bit at CAN1_F0R1.B23;
    const register unsigned short int FB24 = 24;
    sbit  FB24_bit at CAN1_F0R1.B24;
    const register unsigned short int FB25 = 25;
    sbit  FB25_bit at CAN1_F0R1.B25;
    const register unsigned short int FB26 = 26;
    sbit  FB26_bit at CAN1_F0R1.B26;
    const register unsigned short int FB27 = 27;
    sbit  FB27_bit at CAN1_F0R1.B27;
    const register unsigned short int FB28 = 28;
    sbit  FB28_bit at CAN1_F0R1.B28;
    const register unsigned short int FB29 = 29;
    sbit  FB29_bit at CAN1_F0R1.B29;
    const register unsigned short int FB30 = 30;
    sbit  FB30_bit at CAN1_F0R1.B30;
    const register unsigned short int FB31 = 31;
    sbit  FB31_bit at CAN1_F0R1.B31;

sfr unsigned long   volatile CAN1_F0R2            absolute 0x40006644;
    sbit  FB0_CAN1_F0R2_bit at CAN1_F0R2.B0;
    sbit  FB1_CAN1_F0R2_bit at CAN1_F0R2.B1;
    sbit  FB2_CAN1_F0R2_bit at CAN1_F0R2.B2;
    sbit  FB3_CAN1_F0R2_bit at CAN1_F0R2.B3;
    sbit  FB4_CAN1_F0R2_bit at CAN1_F0R2.B4;
    sbit  FB5_CAN1_F0R2_bit at CAN1_F0R2.B5;
    sbit  FB6_CAN1_F0R2_bit at CAN1_F0R2.B6;
    sbit  FB7_CAN1_F0R2_bit at CAN1_F0R2.B7;
    sbit  FB8_CAN1_F0R2_bit at CAN1_F0R2.B8;
    sbit  FB9_CAN1_F0R2_bit at CAN1_F0R2.B9;
    sbit  FB10_CAN1_F0R2_bit at CAN1_F0R2.B10;
    sbit  FB11_CAN1_F0R2_bit at CAN1_F0R2.B11;
    sbit  FB12_CAN1_F0R2_bit at CAN1_F0R2.B12;
    sbit  FB13_CAN1_F0R2_bit at CAN1_F0R2.B13;
    sbit  FB14_CAN1_F0R2_bit at CAN1_F0R2.B14;
    sbit  FB15_CAN1_F0R2_bit at CAN1_F0R2.B15;
    sbit  FB16_CAN1_F0R2_bit at CAN1_F0R2.B16;
    sbit  FB17_CAN1_F0R2_bit at CAN1_F0R2.B17;
    sbit  FB18_CAN1_F0R2_bit at CAN1_F0R2.B18;
    sbit  FB19_CAN1_F0R2_bit at CAN1_F0R2.B19;
    sbit  FB20_CAN1_F0R2_bit at CAN1_F0R2.B20;
    sbit  FB21_CAN1_F0R2_bit at CAN1_F0R2.B21;
    sbit  FB22_CAN1_F0R2_bit at CAN1_F0R2.B22;
    sbit  FB23_CAN1_F0R2_bit at CAN1_F0R2.B23;
    sbit  FB24_CAN1_F0R2_bit at CAN1_F0R2.B24;
    sbit  FB25_CAN1_F0R2_bit at CAN1_F0R2.B25;
    sbit  FB26_CAN1_F0R2_bit at CAN1_F0R2.B26;
    sbit  FB27_CAN1_F0R2_bit at CAN1_F0R2.B27;
    sbit  FB28_CAN1_F0R2_bit at CAN1_F0R2.B28;
    sbit  FB29_CAN1_F0R2_bit at CAN1_F0R2.B29;
    sbit  FB30_CAN1_F0R2_bit at CAN1_F0R2.B30;
    sbit  FB31_CAN1_F0R2_bit at CAN1_F0R2.B31;

sfr unsigned long   volatile CAN1_F1R1            absolute 0x40006648;
    sbit  FB0_CAN1_F1R1_bit at CAN1_F1R1.B0;
    sbit  FB1_CAN1_F1R1_bit at CAN1_F1R1.B1;
    sbit  FB2_CAN1_F1R1_bit at CAN1_F1R1.B2;
    sbit  FB3_CAN1_F1R1_bit at CAN1_F1R1.B3;
    sbit  FB4_CAN1_F1R1_bit at CAN1_F1R1.B4;
    sbit  FB5_CAN1_F1R1_bit at CAN1_F1R1.B5;
    sbit  FB6_CAN1_F1R1_bit at CAN1_F1R1.B6;
    sbit  FB7_CAN1_F1R1_bit at CAN1_F1R1.B7;
    sbit  FB8_CAN1_F1R1_bit at CAN1_F1R1.B8;
    sbit  FB9_CAN1_F1R1_bit at CAN1_F1R1.B9;
    sbit  FB10_CAN1_F1R1_bit at CAN1_F1R1.B10;
    sbit  FB11_CAN1_F1R1_bit at CAN1_F1R1.B11;
    sbit  FB12_CAN1_F1R1_bit at CAN1_F1R1.B12;
    sbit  FB13_CAN1_F1R1_bit at CAN1_F1R1.B13;
    sbit  FB14_CAN1_F1R1_bit at CAN1_F1R1.B14;
    sbit  FB15_CAN1_F1R1_bit at CAN1_F1R1.B15;
    sbit  FB16_CAN1_F1R1_bit at CAN1_F1R1.B16;
    sbit  FB17_CAN1_F1R1_bit at CAN1_F1R1.B17;
    sbit  FB18_CAN1_F1R1_bit at CAN1_F1R1.B18;
    sbit  FB19_CAN1_F1R1_bit at CAN1_F1R1.B19;
    sbit  FB20_CAN1_F1R1_bit at CAN1_F1R1.B20;
    sbit  FB21_CAN1_F1R1_bit at CAN1_F1R1.B21;
    sbit  FB22_CAN1_F1R1_bit at CAN1_F1R1.B22;
    sbit  FB23_CAN1_F1R1_bit at CAN1_F1R1.B23;
    sbit  FB24_CAN1_F1R1_bit at CAN1_F1R1.B24;
    sbit  FB25_CAN1_F1R1_bit at CAN1_F1R1.B25;
    sbit  FB26_CAN1_F1R1_bit at CAN1_F1R1.B26;
    sbit  FB27_CAN1_F1R1_bit at CAN1_F1R1.B27;
    sbit  FB28_CAN1_F1R1_bit at CAN1_F1R1.B28;
    sbit  FB29_CAN1_F1R1_bit at CAN1_F1R1.B29;
    sbit  FB30_CAN1_F1R1_bit at CAN1_F1R1.B30;
    sbit  FB31_CAN1_F1R1_bit at CAN1_F1R1.B31;

sfr unsigned long   volatile CAN1_F1R2            absolute 0x4000664C;
    sbit  FB0_CAN1_F1R2_bit at CAN1_F1R2.B0;
    sbit  FB1_CAN1_F1R2_bit at CAN1_F1R2.B1;
    sbit  FB2_CAN1_F1R2_bit at CAN1_F1R2.B2;
    sbit  FB3_CAN1_F1R2_bit at CAN1_F1R2.B3;
    sbit  FB4_CAN1_F1R2_bit at CAN1_F1R2.B4;
    sbit  FB5_CAN1_F1R2_bit at CAN1_F1R2.B5;
    sbit  FB6_CAN1_F1R2_bit at CAN1_F1R2.B6;
    sbit  FB7_CAN1_F1R2_bit at CAN1_F1R2.B7;
    sbit  FB8_CAN1_F1R2_bit at CAN1_F1R2.B8;
    sbit  FB9_CAN1_F1R2_bit at CAN1_F1R2.B9;
    sbit  FB10_CAN1_F1R2_bit at CAN1_F1R2.B10;
    sbit  FB11_CAN1_F1R2_bit at CAN1_F1R2.B11;
    sbit  FB12_CAN1_F1R2_bit at CAN1_F1R2.B12;
    sbit  FB13_CAN1_F1R2_bit at CAN1_F1R2.B13;
    sbit  FB14_CAN1_F1R2_bit at CAN1_F1R2.B14;
    sbit  FB15_CAN1_F1R2_bit at CAN1_F1R2.B15;
    sbit  FB16_CAN1_F1R2_bit at CAN1_F1R2.B16;
    sbit  FB17_CAN1_F1R2_bit at CAN1_F1R2.B17;
    sbit  FB18_CAN1_F1R2_bit at CAN1_F1R2.B18;
    sbit  FB19_CAN1_F1R2_bit at CAN1_F1R2.B19;
    sbit  FB20_CAN1_F1R2_bit at CAN1_F1R2.B20;
    sbit  FB21_CAN1_F1R2_bit at CAN1_F1R2.B21;
    sbit  FB22_CAN1_F1R2_bit at CAN1_F1R2.B22;
    sbit  FB23_CAN1_F1R2_bit at CAN1_F1R2.B23;
    sbit  FB24_CAN1_F1R2_bit at CAN1_F1R2.B24;
    sbit  FB25_CAN1_F1R2_bit at CAN1_F1R2.B25;
    sbit  FB26_CAN1_F1R2_bit at CAN1_F1R2.B26;
    sbit  FB27_CAN1_F1R2_bit at CAN1_F1R2.B27;
    sbit  FB28_CAN1_F1R2_bit at CAN1_F1R2.B28;
    sbit  FB29_CAN1_F1R2_bit at CAN1_F1R2.B29;
    sbit  FB30_CAN1_F1R2_bit at CAN1_F1R2.B30;
    sbit  FB31_CAN1_F1R2_bit at CAN1_F1R2.B31;

sfr unsigned long   volatile CAN1_F2R1            absolute 0x40006650;
    sbit  FB0_CAN1_F2R1_bit at CAN1_F2R1.B0;
    sbit  FB1_CAN1_F2R1_bit at CAN1_F2R1.B1;
    sbit  FB2_CAN1_F2R1_bit at CAN1_F2R1.B2;
    sbit  FB3_CAN1_F2R1_bit at CAN1_F2R1.B3;
    sbit  FB4_CAN1_F2R1_bit at CAN1_F2R1.B4;
    sbit  FB5_CAN1_F2R1_bit at CAN1_F2R1.B5;
    sbit  FB6_CAN1_F2R1_bit at CAN1_F2R1.B6;
    sbit  FB7_CAN1_F2R1_bit at CAN1_F2R1.B7;
    sbit  FB8_CAN1_F2R1_bit at CAN1_F2R1.B8;
    sbit  FB9_CAN1_F2R1_bit at CAN1_F2R1.B9;
    sbit  FB10_CAN1_F2R1_bit at CAN1_F2R1.B10;
    sbit  FB11_CAN1_F2R1_bit at CAN1_F2R1.B11;
    sbit  FB12_CAN1_F2R1_bit at CAN1_F2R1.B12;
    sbit  FB13_CAN1_F2R1_bit at CAN1_F2R1.B13;
    sbit  FB14_CAN1_F2R1_bit at CAN1_F2R1.B14;
    sbit  FB15_CAN1_F2R1_bit at CAN1_F2R1.B15;
    sbit  FB16_CAN1_F2R1_bit at CAN1_F2R1.B16;
    sbit  FB17_CAN1_F2R1_bit at CAN1_F2R1.B17;
    sbit  FB18_CAN1_F2R1_bit at CAN1_F2R1.B18;
    sbit  FB19_CAN1_F2R1_bit at CAN1_F2R1.B19;
    sbit  FB20_CAN1_F2R1_bit at CAN1_F2R1.B20;
    sbit  FB21_CAN1_F2R1_bit at CAN1_F2R1.B21;
    sbit  FB22_CAN1_F2R1_bit at CAN1_F2R1.B22;
    sbit  FB23_CAN1_F2R1_bit at CAN1_F2R1.B23;
    sbit  FB24_CAN1_F2R1_bit at CAN1_F2R1.B24;
    sbit  FB25_CAN1_F2R1_bit at CAN1_F2R1.B25;
    sbit  FB26_CAN1_F2R1_bit at CAN1_F2R1.B26;
    sbit  FB27_CAN1_F2R1_bit at CAN1_F2R1.B27;
    sbit  FB28_CAN1_F2R1_bit at CAN1_F2R1.B28;
    sbit  FB29_CAN1_F2R1_bit at CAN1_F2R1.B29;
    sbit  FB30_CAN1_F2R1_bit at CAN1_F2R1.B30;
    sbit  FB31_CAN1_F2R1_bit at CAN1_F2R1.B31;

sfr unsigned long   volatile CAN1_F2R2            absolute 0x40006654;
    sbit  FB0_CAN1_F2R2_bit at CAN1_F2R2.B0;
    sbit  FB1_CAN1_F2R2_bit at CAN1_F2R2.B1;
    sbit  FB2_CAN1_F2R2_bit at CAN1_F2R2.B2;
    sbit  FB3_CAN1_F2R2_bit at CAN1_F2R2.B3;
    sbit  FB4_CAN1_F2R2_bit at CAN1_F2R2.B4;
    sbit  FB5_CAN1_F2R2_bit at CAN1_F2R2.B5;
    sbit  FB6_CAN1_F2R2_bit at CAN1_F2R2.B6;
    sbit  FB7_CAN1_F2R2_bit at CAN1_F2R2.B7;
    sbit  FB8_CAN1_F2R2_bit at CAN1_F2R2.B8;
    sbit  FB9_CAN1_F2R2_bit at CAN1_F2R2.B9;
    sbit  FB10_CAN1_F2R2_bit at CAN1_F2R2.B10;
    sbit  FB11_CAN1_F2R2_bit at CAN1_F2R2.B11;
    sbit  FB12_CAN1_F2R2_bit at CAN1_F2R2.B12;
    sbit  FB13_CAN1_F2R2_bit at CAN1_F2R2.B13;
    sbit  FB14_CAN1_F2R2_bit at CAN1_F2R2.B14;
    sbit  FB15_CAN1_F2R2_bit at CAN1_F2R2.B15;
    sbit  FB16_CAN1_F2R2_bit at CAN1_F2R2.B16;
    sbit  FB17_CAN1_F2R2_bit at CAN1_F2R2.B17;
    sbit  FB18_CAN1_F2R2_bit at CAN1_F2R2.B18;
    sbit  FB19_CAN1_F2R2_bit at CAN1_F2R2.B19;
    sbit  FB20_CAN1_F2R2_bit at CAN1_F2R2.B20;
    sbit  FB21_CAN1_F2R2_bit at CAN1_F2R2.B21;
    sbit  FB22_CAN1_F2R2_bit at CAN1_F2R2.B22;
    sbit  FB23_CAN1_F2R2_bit at CAN1_F2R2.B23;
    sbit  FB24_CAN1_F2R2_bit at CAN1_F2R2.B24;
    sbit  FB25_CAN1_F2R2_bit at CAN1_F2R2.B25;
    sbit  FB26_CAN1_F2R2_bit at CAN1_F2R2.B26;
    sbit  FB27_CAN1_F2R2_bit at CAN1_F2R2.B27;
    sbit  FB28_CAN1_F2R2_bit at CAN1_F2R2.B28;
    sbit  FB29_CAN1_F2R2_bit at CAN1_F2R2.B29;
    sbit  FB30_CAN1_F2R2_bit at CAN1_F2R2.B30;
    sbit  FB31_CAN1_F2R2_bit at CAN1_F2R2.B31;

sfr unsigned long   volatile CAN1_F3R1            absolute 0x40006658;
    sbit  FB0_CAN1_F3R1_bit at CAN1_F3R1.B0;
    sbit  FB1_CAN1_F3R1_bit at CAN1_F3R1.B1;
    sbit  FB2_CAN1_F3R1_bit at CAN1_F3R1.B2;
    sbit  FB3_CAN1_F3R1_bit at CAN1_F3R1.B3;
    sbit  FB4_CAN1_F3R1_bit at CAN1_F3R1.B4;
    sbit  FB5_CAN1_F3R1_bit at CAN1_F3R1.B5;
    sbit  FB6_CAN1_F3R1_bit at CAN1_F3R1.B6;
    sbit  FB7_CAN1_F3R1_bit at CAN1_F3R1.B7;
    sbit  FB8_CAN1_F3R1_bit at CAN1_F3R1.B8;
    sbit  FB9_CAN1_F3R1_bit at CAN1_F3R1.B9;
    sbit  FB10_CAN1_F3R1_bit at CAN1_F3R1.B10;
    sbit  FB11_CAN1_F3R1_bit at CAN1_F3R1.B11;
    sbit  FB12_CAN1_F3R1_bit at CAN1_F3R1.B12;
    sbit  FB13_CAN1_F3R1_bit at CAN1_F3R1.B13;
    sbit  FB14_CAN1_F3R1_bit at CAN1_F3R1.B14;
    sbit  FB15_CAN1_F3R1_bit at CAN1_F3R1.B15;
    sbit  FB16_CAN1_F3R1_bit at CAN1_F3R1.B16;
    sbit  FB17_CAN1_F3R1_bit at CAN1_F3R1.B17;
    sbit  FB18_CAN1_F3R1_bit at CAN1_F3R1.B18;
    sbit  FB19_CAN1_F3R1_bit at CAN1_F3R1.B19;
    sbit  FB20_CAN1_F3R1_bit at CAN1_F3R1.B20;
    sbit  FB21_CAN1_F3R1_bit at CAN1_F3R1.B21;
    sbit  FB22_CAN1_F3R1_bit at CAN1_F3R1.B22;
    sbit  FB23_CAN1_F3R1_bit at CAN1_F3R1.B23;
    sbit  FB24_CAN1_F3R1_bit at CAN1_F3R1.B24;
    sbit  FB25_CAN1_F3R1_bit at CAN1_F3R1.B25;
    sbit  FB26_CAN1_F3R1_bit at CAN1_F3R1.B26;
    sbit  FB27_CAN1_F3R1_bit at CAN1_F3R1.B27;
    sbit  FB28_CAN1_F3R1_bit at CAN1_F3R1.B28;
    sbit  FB29_CAN1_F3R1_bit at CAN1_F3R1.B29;
    sbit  FB30_CAN1_F3R1_bit at CAN1_F3R1.B30;
    sbit  FB31_CAN1_F3R1_bit at CAN1_F3R1.B31;

sfr unsigned long   volatile CAN1_F3R2            absolute 0x4000665C;
    sbit  FB0_CAN1_F3R2_bit at CAN1_F3R2.B0;
    sbit  FB1_CAN1_F3R2_bit at CAN1_F3R2.B1;
    sbit  FB2_CAN1_F3R2_bit at CAN1_F3R2.B2;
    sbit  FB3_CAN1_F3R2_bit at CAN1_F3R2.B3;
    sbit  FB4_CAN1_F3R2_bit at CAN1_F3R2.B4;
    sbit  FB5_CAN1_F3R2_bit at CAN1_F3R2.B5;
    sbit  FB6_CAN1_F3R2_bit at CAN1_F3R2.B6;
    sbit  FB7_CAN1_F3R2_bit at CAN1_F3R2.B7;
    sbit  FB8_CAN1_F3R2_bit at CAN1_F3R2.B8;
    sbit  FB9_CAN1_F3R2_bit at CAN1_F3R2.B9;
    sbit  FB10_CAN1_F3R2_bit at CAN1_F3R2.B10;
    sbit  FB11_CAN1_F3R2_bit at CAN1_F3R2.B11;
    sbit  FB12_CAN1_F3R2_bit at CAN1_F3R2.B12;
    sbit  FB13_CAN1_F3R2_bit at CAN1_F3R2.B13;
    sbit  FB14_CAN1_F3R2_bit at CAN1_F3R2.B14;
    sbit  FB15_CAN1_F3R2_bit at CAN1_F3R2.B15;
    sbit  FB16_CAN1_F3R2_bit at CAN1_F3R2.B16;
    sbit  FB17_CAN1_F3R2_bit at CAN1_F3R2.B17;
    sbit  FB18_CAN1_F3R2_bit at CAN1_F3R2.B18;
    sbit  FB19_CAN1_F3R2_bit at CAN1_F3R2.B19;
    sbit  FB20_CAN1_F3R2_bit at CAN1_F3R2.B20;
    sbit  FB21_CAN1_F3R2_bit at CAN1_F3R2.B21;
    sbit  FB22_CAN1_F3R2_bit at CAN1_F3R2.B22;
    sbit  FB23_CAN1_F3R2_bit at CAN1_F3R2.B23;
    sbit  FB24_CAN1_F3R2_bit at CAN1_F3R2.B24;
    sbit  FB25_CAN1_F3R2_bit at CAN1_F3R2.B25;
    sbit  FB26_CAN1_F3R2_bit at CAN1_F3R2.B26;
    sbit  FB27_CAN1_F3R2_bit at CAN1_F3R2.B27;
    sbit  FB28_CAN1_F3R2_bit at CAN1_F3R2.B28;
    sbit  FB29_CAN1_F3R2_bit at CAN1_F3R2.B29;
    sbit  FB30_CAN1_F3R2_bit at CAN1_F3R2.B30;
    sbit  FB31_CAN1_F3R2_bit at CAN1_F3R2.B31;

sfr unsigned long   volatile CAN1_F4R1            absolute 0x40006660;
    sbit  FB0_CAN1_F4R1_bit at CAN1_F4R1.B0;
    sbit  FB1_CAN1_F4R1_bit at CAN1_F4R1.B1;
    sbit  FB2_CAN1_F4R1_bit at CAN1_F4R1.B2;
    sbit  FB3_CAN1_F4R1_bit at CAN1_F4R1.B3;
    sbit  FB4_CAN1_F4R1_bit at CAN1_F4R1.B4;
    sbit  FB5_CAN1_F4R1_bit at CAN1_F4R1.B5;
    sbit  FB6_CAN1_F4R1_bit at CAN1_F4R1.B6;
    sbit  FB7_CAN1_F4R1_bit at CAN1_F4R1.B7;
    sbit  FB8_CAN1_F4R1_bit at CAN1_F4R1.B8;
    sbit  FB9_CAN1_F4R1_bit at CAN1_F4R1.B9;
    sbit  FB10_CAN1_F4R1_bit at CAN1_F4R1.B10;
    sbit  FB11_CAN1_F4R1_bit at CAN1_F4R1.B11;
    sbit  FB12_CAN1_F4R1_bit at CAN1_F4R1.B12;
    sbit  FB13_CAN1_F4R1_bit at CAN1_F4R1.B13;
    sbit  FB14_CAN1_F4R1_bit at CAN1_F4R1.B14;
    sbit  FB15_CAN1_F4R1_bit at CAN1_F4R1.B15;
    sbit  FB16_CAN1_F4R1_bit at CAN1_F4R1.B16;
    sbit  FB17_CAN1_F4R1_bit at CAN1_F4R1.B17;
    sbit  FB18_CAN1_F4R1_bit at CAN1_F4R1.B18;
    sbit  FB19_CAN1_F4R1_bit at CAN1_F4R1.B19;
    sbit  FB20_CAN1_F4R1_bit at CAN1_F4R1.B20;
    sbit  FB21_CAN1_F4R1_bit at CAN1_F4R1.B21;
    sbit  FB22_CAN1_F4R1_bit at CAN1_F4R1.B22;
    sbit  FB23_CAN1_F4R1_bit at CAN1_F4R1.B23;
    sbit  FB24_CAN1_F4R1_bit at CAN1_F4R1.B24;
    sbit  FB25_CAN1_F4R1_bit at CAN1_F4R1.B25;
    sbit  FB26_CAN1_F4R1_bit at CAN1_F4R1.B26;
    sbit  FB27_CAN1_F4R1_bit at CAN1_F4R1.B27;
    sbit  FB28_CAN1_F4R1_bit at CAN1_F4R1.B28;
    sbit  FB29_CAN1_F4R1_bit at CAN1_F4R1.B29;
    sbit  FB30_CAN1_F4R1_bit at CAN1_F4R1.B30;
    sbit  FB31_CAN1_F4R1_bit at CAN1_F4R1.B31;

sfr unsigned long   volatile CAN1_F4R2            absolute 0x40006664;
    sbit  FB0_CAN1_F4R2_bit at CAN1_F4R2.B0;
    sbit  FB1_CAN1_F4R2_bit at CAN1_F4R2.B1;
    sbit  FB2_CAN1_F4R2_bit at CAN1_F4R2.B2;
    sbit  FB3_CAN1_F4R2_bit at CAN1_F4R2.B3;
    sbit  FB4_CAN1_F4R2_bit at CAN1_F4R2.B4;
    sbit  FB5_CAN1_F4R2_bit at CAN1_F4R2.B5;
    sbit  FB6_CAN1_F4R2_bit at CAN1_F4R2.B6;
    sbit  FB7_CAN1_F4R2_bit at CAN1_F4R2.B7;
    sbit  FB8_CAN1_F4R2_bit at CAN1_F4R2.B8;
    sbit  FB9_CAN1_F4R2_bit at CAN1_F4R2.B9;
    sbit  FB10_CAN1_F4R2_bit at CAN1_F4R2.B10;
    sbit  FB11_CAN1_F4R2_bit at CAN1_F4R2.B11;
    sbit  FB12_CAN1_F4R2_bit at CAN1_F4R2.B12;
    sbit  FB13_CAN1_F4R2_bit at CAN1_F4R2.B13;
    sbit  FB14_CAN1_F4R2_bit at CAN1_F4R2.B14;
    sbit  FB15_CAN1_F4R2_bit at CAN1_F4R2.B15;
    sbit  FB16_CAN1_F4R2_bit at CAN1_F4R2.B16;
    sbit  FB17_CAN1_F4R2_bit at CAN1_F4R2.B17;
    sbit  FB18_CAN1_F4R2_bit at CAN1_F4R2.B18;
    sbit  FB19_CAN1_F4R2_bit at CAN1_F4R2.B19;
    sbit  FB20_CAN1_F4R2_bit at CAN1_F4R2.B20;
    sbit  FB21_CAN1_F4R2_bit at CAN1_F4R2.B21;
    sbit  FB22_CAN1_F4R2_bit at CAN1_F4R2.B22;
    sbit  FB23_CAN1_F4R2_bit at CAN1_F4R2.B23;
    sbit  FB24_CAN1_F4R2_bit at CAN1_F4R2.B24;
    sbit  FB25_CAN1_F4R2_bit at CAN1_F4R2.B25;
    sbit  FB26_CAN1_F4R2_bit at CAN1_F4R2.B26;
    sbit  FB27_CAN1_F4R2_bit at CAN1_F4R2.B27;
    sbit  FB28_CAN1_F4R2_bit at CAN1_F4R2.B28;
    sbit  FB29_CAN1_F4R2_bit at CAN1_F4R2.B29;
    sbit  FB30_CAN1_F4R2_bit at CAN1_F4R2.B30;
    sbit  FB31_CAN1_F4R2_bit at CAN1_F4R2.B31;

sfr unsigned long   volatile CAN1_F5R1            absolute 0x40006668;
    sbit  FB0_CAN1_F5R1_bit at CAN1_F5R1.B0;
    sbit  FB1_CAN1_F5R1_bit at CAN1_F5R1.B1;
    sbit  FB2_CAN1_F5R1_bit at CAN1_F5R1.B2;
    sbit  FB3_CAN1_F5R1_bit at CAN1_F5R1.B3;
    sbit  FB4_CAN1_F5R1_bit at CAN1_F5R1.B4;
    sbit  FB5_CAN1_F5R1_bit at CAN1_F5R1.B5;
    sbit  FB6_CAN1_F5R1_bit at CAN1_F5R1.B6;
    sbit  FB7_CAN1_F5R1_bit at CAN1_F5R1.B7;
    sbit  FB8_CAN1_F5R1_bit at CAN1_F5R1.B8;
    sbit  FB9_CAN1_F5R1_bit at CAN1_F5R1.B9;
    sbit  FB10_CAN1_F5R1_bit at CAN1_F5R1.B10;
    sbit  FB11_CAN1_F5R1_bit at CAN1_F5R1.B11;
    sbit  FB12_CAN1_F5R1_bit at CAN1_F5R1.B12;
    sbit  FB13_CAN1_F5R1_bit at CAN1_F5R1.B13;
    sbit  FB14_CAN1_F5R1_bit at CAN1_F5R1.B14;
    sbit  FB15_CAN1_F5R1_bit at CAN1_F5R1.B15;
    sbit  FB16_CAN1_F5R1_bit at CAN1_F5R1.B16;
    sbit  FB17_CAN1_F5R1_bit at CAN1_F5R1.B17;
    sbit  FB18_CAN1_F5R1_bit at CAN1_F5R1.B18;
    sbit  FB19_CAN1_F5R1_bit at CAN1_F5R1.B19;
    sbit  FB20_CAN1_F5R1_bit at CAN1_F5R1.B20;
    sbit  FB21_CAN1_F5R1_bit at CAN1_F5R1.B21;
    sbit  FB22_CAN1_F5R1_bit at CAN1_F5R1.B22;
    sbit  FB23_CAN1_F5R1_bit at CAN1_F5R1.B23;
    sbit  FB24_CAN1_F5R1_bit at CAN1_F5R1.B24;
    sbit  FB25_CAN1_F5R1_bit at CAN1_F5R1.B25;
    sbit  FB26_CAN1_F5R1_bit at CAN1_F5R1.B26;
    sbit  FB27_CAN1_F5R1_bit at CAN1_F5R1.B27;
    sbit  FB28_CAN1_F5R1_bit at CAN1_F5R1.B28;
    sbit  FB29_CAN1_F5R1_bit at CAN1_F5R1.B29;
    sbit  FB30_CAN1_F5R1_bit at CAN1_F5R1.B30;
    sbit  FB31_CAN1_F5R1_bit at CAN1_F5R1.B31;

sfr unsigned long   volatile CAN1_F5R2            absolute 0x4000666C;
    sbit  FB0_CAN1_F5R2_bit at CAN1_F5R2.B0;
    sbit  FB1_CAN1_F5R2_bit at CAN1_F5R2.B1;
    sbit  FB2_CAN1_F5R2_bit at CAN1_F5R2.B2;
    sbit  FB3_CAN1_F5R2_bit at CAN1_F5R2.B3;
    sbit  FB4_CAN1_F5R2_bit at CAN1_F5R2.B4;
    sbit  FB5_CAN1_F5R2_bit at CAN1_F5R2.B5;
    sbit  FB6_CAN1_F5R2_bit at CAN1_F5R2.B6;
    sbit  FB7_CAN1_F5R2_bit at CAN1_F5R2.B7;
    sbit  FB8_CAN1_F5R2_bit at CAN1_F5R2.B8;
    sbit  FB9_CAN1_F5R2_bit at CAN1_F5R2.B9;
    sbit  FB10_CAN1_F5R2_bit at CAN1_F5R2.B10;
    sbit  FB11_CAN1_F5R2_bit at CAN1_F5R2.B11;
    sbit  FB12_CAN1_F5R2_bit at CAN1_F5R2.B12;
    sbit  FB13_CAN1_F5R2_bit at CAN1_F5R2.B13;
    sbit  FB14_CAN1_F5R2_bit at CAN1_F5R2.B14;
    sbit  FB15_CAN1_F5R2_bit at CAN1_F5R2.B15;
    sbit  FB16_CAN1_F5R2_bit at CAN1_F5R2.B16;
    sbit  FB17_CAN1_F5R2_bit at CAN1_F5R2.B17;
    sbit  FB18_CAN1_F5R2_bit at CAN1_F5R2.B18;
    sbit  FB19_CAN1_F5R2_bit at CAN1_F5R2.B19;
    sbit  FB20_CAN1_F5R2_bit at CAN1_F5R2.B20;
    sbit  FB21_CAN1_F5R2_bit at CAN1_F5R2.B21;
    sbit  FB22_CAN1_F5R2_bit at CAN1_F5R2.B22;
    sbit  FB23_CAN1_F5R2_bit at CAN1_F5R2.B23;
    sbit  FB24_CAN1_F5R2_bit at CAN1_F5R2.B24;
    sbit  FB25_CAN1_F5R2_bit at CAN1_F5R2.B25;
    sbit  FB26_CAN1_F5R2_bit at CAN1_F5R2.B26;
    sbit  FB27_CAN1_F5R2_bit at CAN1_F5R2.B27;
    sbit  FB28_CAN1_F5R2_bit at CAN1_F5R2.B28;
    sbit  FB29_CAN1_F5R2_bit at CAN1_F5R2.B29;
    sbit  FB30_CAN1_F5R2_bit at CAN1_F5R2.B30;
    sbit  FB31_CAN1_F5R2_bit at CAN1_F5R2.B31;

sfr unsigned long   volatile CAN1_F6R1            absolute 0x40006670;
    sbit  FB0_CAN1_F6R1_bit at CAN1_F6R1.B0;
    sbit  FB1_CAN1_F6R1_bit at CAN1_F6R1.B1;
    sbit  FB2_CAN1_F6R1_bit at CAN1_F6R1.B2;
    sbit  FB3_CAN1_F6R1_bit at CAN1_F6R1.B3;
    sbit  FB4_CAN1_F6R1_bit at CAN1_F6R1.B4;
    sbit  FB5_CAN1_F6R1_bit at CAN1_F6R1.B5;
    sbit  FB6_CAN1_F6R1_bit at CAN1_F6R1.B6;
    sbit  FB7_CAN1_F6R1_bit at CAN1_F6R1.B7;
    sbit  FB8_CAN1_F6R1_bit at CAN1_F6R1.B8;
    sbit  FB9_CAN1_F6R1_bit at CAN1_F6R1.B9;
    sbit  FB10_CAN1_F6R1_bit at CAN1_F6R1.B10;
    sbit  FB11_CAN1_F6R1_bit at CAN1_F6R1.B11;
    sbit  FB12_CAN1_F6R1_bit at CAN1_F6R1.B12;
    sbit  FB13_CAN1_F6R1_bit at CAN1_F6R1.B13;
    sbit  FB14_CAN1_F6R1_bit at CAN1_F6R1.B14;
    sbit  FB15_CAN1_F6R1_bit at CAN1_F6R1.B15;
    sbit  FB16_CAN1_F6R1_bit at CAN1_F6R1.B16;
    sbit  FB17_CAN1_F6R1_bit at CAN1_F6R1.B17;
    sbit  FB18_CAN1_F6R1_bit at CAN1_F6R1.B18;
    sbit  FB19_CAN1_F6R1_bit at CAN1_F6R1.B19;
    sbit  FB20_CAN1_F6R1_bit at CAN1_F6R1.B20;
    sbit  FB21_CAN1_F6R1_bit at CAN1_F6R1.B21;
    sbit  FB22_CAN1_F6R1_bit at CAN1_F6R1.B22;
    sbit  FB23_CAN1_F6R1_bit at CAN1_F6R1.B23;
    sbit  FB24_CAN1_F6R1_bit at CAN1_F6R1.B24;
    sbit  FB25_CAN1_F6R1_bit at CAN1_F6R1.B25;
    sbit  FB26_CAN1_F6R1_bit at CAN1_F6R1.B26;
    sbit  FB27_CAN1_F6R1_bit at CAN1_F6R1.B27;
    sbit  FB28_CAN1_F6R1_bit at CAN1_F6R1.B28;
    sbit  FB29_CAN1_F6R1_bit at CAN1_F6R1.B29;
    sbit  FB30_CAN1_F6R1_bit at CAN1_F6R1.B30;
    sbit  FB31_CAN1_F6R1_bit at CAN1_F6R1.B31;

sfr unsigned long   volatile CAN1_F6R2            absolute 0x40006674;
    sbit  FB0_CAN1_F6R2_bit at CAN1_F6R2.B0;
    sbit  FB1_CAN1_F6R2_bit at CAN1_F6R2.B1;
    sbit  FB2_CAN1_F6R2_bit at CAN1_F6R2.B2;
    sbit  FB3_CAN1_F6R2_bit at CAN1_F6R2.B3;
    sbit  FB4_CAN1_F6R2_bit at CAN1_F6R2.B4;
    sbit  FB5_CAN1_F6R2_bit at CAN1_F6R2.B5;
    sbit  FB6_CAN1_F6R2_bit at CAN1_F6R2.B6;
    sbit  FB7_CAN1_F6R2_bit at CAN1_F6R2.B7;
    sbit  FB8_CAN1_F6R2_bit at CAN1_F6R2.B8;
    sbit  FB9_CAN1_F6R2_bit at CAN1_F6R2.B9;
    sbit  FB10_CAN1_F6R2_bit at CAN1_F6R2.B10;
    sbit  FB11_CAN1_F6R2_bit at CAN1_F6R2.B11;
    sbit  FB12_CAN1_F6R2_bit at CAN1_F6R2.B12;
    sbit  FB13_CAN1_F6R2_bit at CAN1_F6R2.B13;
    sbit  FB14_CAN1_F6R2_bit at CAN1_F6R2.B14;
    sbit  FB15_CAN1_F6R2_bit at CAN1_F6R2.B15;
    sbit  FB16_CAN1_F6R2_bit at CAN1_F6R2.B16;
    sbit  FB17_CAN1_F6R2_bit at CAN1_F6R2.B17;
    sbit  FB18_CAN1_F6R2_bit at CAN1_F6R2.B18;
    sbit  FB19_CAN1_F6R2_bit at CAN1_F6R2.B19;
    sbit  FB20_CAN1_F6R2_bit at CAN1_F6R2.B20;
    sbit  FB21_CAN1_F6R2_bit at CAN1_F6R2.B21;
    sbit  FB22_CAN1_F6R2_bit at CAN1_F6R2.B22;
    sbit  FB23_CAN1_F6R2_bit at CAN1_F6R2.B23;
    sbit  FB24_CAN1_F6R2_bit at CAN1_F6R2.B24;
    sbit  FB25_CAN1_F6R2_bit at CAN1_F6R2.B25;
    sbit  FB26_CAN1_F6R2_bit at CAN1_F6R2.B26;
    sbit  FB27_CAN1_F6R2_bit at CAN1_F6R2.B27;
    sbit  FB28_CAN1_F6R2_bit at CAN1_F6R2.B28;
    sbit  FB29_CAN1_F6R2_bit at CAN1_F6R2.B29;
    sbit  FB30_CAN1_F6R2_bit at CAN1_F6R2.B30;
    sbit  FB31_CAN1_F6R2_bit at CAN1_F6R2.B31;

sfr unsigned long   volatile CAN1_F7R1            absolute 0x40006678;
    sbit  FB0_CAN1_F7R1_bit at CAN1_F7R1.B0;
    sbit  FB1_CAN1_F7R1_bit at CAN1_F7R1.B1;
    sbit  FB2_CAN1_F7R1_bit at CAN1_F7R1.B2;
    sbit  FB3_CAN1_F7R1_bit at CAN1_F7R1.B3;
    sbit  FB4_CAN1_F7R1_bit at CAN1_F7R1.B4;
    sbit  FB5_CAN1_F7R1_bit at CAN1_F7R1.B5;
    sbit  FB6_CAN1_F7R1_bit at CAN1_F7R1.B6;
    sbit  FB7_CAN1_F7R1_bit at CAN1_F7R1.B7;
    sbit  FB8_CAN1_F7R1_bit at CAN1_F7R1.B8;
    sbit  FB9_CAN1_F7R1_bit at CAN1_F7R1.B9;
    sbit  FB10_CAN1_F7R1_bit at CAN1_F7R1.B10;
    sbit  FB11_CAN1_F7R1_bit at CAN1_F7R1.B11;
    sbit  FB12_CAN1_F7R1_bit at CAN1_F7R1.B12;
    sbit  FB13_CAN1_F7R1_bit at CAN1_F7R1.B13;
    sbit  FB14_CAN1_F7R1_bit at CAN1_F7R1.B14;
    sbit  FB15_CAN1_F7R1_bit at CAN1_F7R1.B15;
    sbit  FB16_CAN1_F7R1_bit at CAN1_F7R1.B16;
    sbit  FB17_CAN1_F7R1_bit at CAN1_F7R1.B17;
    sbit  FB18_CAN1_F7R1_bit at CAN1_F7R1.B18;
    sbit  FB19_CAN1_F7R1_bit at CAN1_F7R1.B19;
    sbit  FB20_CAN1_F7R1_bit at CAN1_F7R1.B20;
    sbit  FB21_CAN1_F7R1_bit at CAN1_F7R1.B21;
    sbit  FB22_CAN1_F7R1_bit at CAN1_F7R1.B22;
    sbit  FB23_CAN1_F7R1_bit at CAN1_F7R1.B23;
    sbit  FB24_CAN1_F7R1_bit at CAN1_F7R1.B24;
    sbit  FB25_CAN1_F7R1_bit at CAN1_F7R1.B25;
    sbit  FB26_CAN1_F7R1_bit at CAN1_F7R1.B26;
    sbit  FB27_CAN1_F7R1_bit at CAN1_F7R1.B27;
    sbit  FB28_CAN1_F7R1_bit at CAN1_F7R1.B28;
    sbit  FB29_CAN1_F7R1_bit at CAN1_F7R1.B29;
    sbit  FB30_CAN1_F7R1_bit at CAN1_F7R1.B30;
    sbit  FB31_CAN1_F7R1_bit at CAN1_F7R1.B31;

sfr unsigned long   volatile CAN1_F7R2            absolute 0x4000667C;
    sbit  FB0_CAN1_F7R2_bit at CAN1_F7R2.B0;
    sbit  FB1_CAN1_F7R2_bit at CAN1_F7R2.B1;
    sbit  FB2_CAN1_F7R2_bit at CAN1_F7R2.B2;
    sbit  FB3_CAN1_F7R2_bit at CAN1_F7R2.B3;
    sbit  FB4_CAN1_F7R2_bit at CAN1_F7R2.B4;
    sbit  FB5_CAN1_F7R2_bit at CAN1_F7R2.B5;
    sbit  FB6_CAN1_F7R2_bit at CAN1_F7R2.B6;
    sbit  FB7_CAN1_F7R2_bit at CAN1_F7R2.B7;
    sbit  FB8_CAN1_F7R2_bit at CAN1_F7R2.B8;
    sbit  FB9_CAN1_F7R2_bit at CAN1_F7R2.B9;
    sbit  FB10_CAN1_F7R2_bit at CAN1_F7R2.B10;
    sbit  FB11_CAN1_F7R2_bit at CAN1_F7R2.B11;
    sbit  FB12_CAN1_F7R2_bit at CAN1_F7R2.B12;
    sbit  FB13_CAN1_F7R2_bit at CAN1_F7R2.B13;
    sbit  FB14_CAN1_F7R2_bit at CAN1_F7R2.B14;
    sbit  FB15_CAN1_F7R2_bit at CAN1_F7R2.B15;
    sbit  FB16_CAN1_F7R2_bit at CAN1_F7R2.B16;
    sbit  FB17_CAN1_F7R2_bit at CAN1_F7R2.B17;
    sbit  FB18_CAN1_F7R2_bit at CAN1_F7R2.B18;
    sbit  FB19_CAN1_F7R2_bit at CAN1_F7R2.B19;
    sbit  FB20_CAN1_F7R2_bit at CAN1_F7R2.B20;
    sbit  FB21_CAN1_F7R2_bit at CAN1_F7R2.B21;
    sbit  FB22_CAN1_F7R2_bit at CAN1_F7R2.B22;
    sbit  FB23_CAN1_F7R2_bit at CAN1_F7R2.B23;
    sbit  FB24_CAN1_F7R2_bit at CAN1_F7R2.B24;
    sbit  FB25_CAN1_F7R2_bit at CAN1_F7R2.B25;
    sbit  FB26_CAN1_F7R2_bit at CAN1_F7R2.B26;
    sbit  FB27_CAN1_F7R2_bit at CAN1_F7R2.B27;
    sbit  FB28_CAN1_F7R2_bit at CAN1_F7R2.B28;
    sbit  FB29_CAN1_F7R2_bit at CAN1_F7R2.B29;
    sbit  FB30_CAN1_F7R2_bit at CAN1_F7R2.B30;
    sbit  FB31_CAN1_F7R2_bit at CAN1_F7R2.B31;

sfr unsigned long   volatile CAN1_F8R1            absolute 0x40006680;
    sbit  FB0_CAN1_F8R1_bit at CAN1_F8R1.B0;
    sbit  FB1_CAN1_F8R1_bit at CAN1_F8R1.B1;
    sbit  FB2_CAN1_F8R1_bit at CAN1_F8R1.B2;
    sbit  FB3_CAN1_F8R1_bit at CAN1_F8R1.B3;
    sbit  FB4_CAN1_F8R1_bit at CAN1_F8R1.B4;
    sbit  FB5_CAN1_F8R1_bit at CAN1_F8R1.B5;
    sbit  FB6_CAN1_F8R1_bit at CAN1_F8R1.B6;
    sbit  FB7_CAN1_F8R1_bit at CAN1_F8R1.B7;
    sbit  FB8_CAN1_F8R1_bit at CAN1_F8R1.B8;
    sbit  FB9_CAN1_F8R1_bit at CAN1_F8R1.B9;
    sbit  FB10_CAN1_F8R1_bit at CAN1_F8R1.B10;
    sbit  FB11_CAN1_F8R1_bit at CAN1_F8R1.B11;
    sbit  FB12_CAN1_F8R1_bit at CAN1_F8R1.B12;
    sbit  FB13_CAN1_F8R1_bit at CAN1_F8R1.B13;
    sbit  FB14_CAN1_F8R1_bit at CAN1_F8R1.B14;
    sbit  FB15_CAN1_F8R1_bit at CAN1_F8R1.B15;
    sbit  FB16_CAN1_F8R1_bit at CAN1_F8R1.B16;
    sbit  FB17_CAN1_F8R1_bit at CAN1_F8R1.B17;
    sbit  FB18_CAN1_F8R1_bit at CAN1_F8R1.B18;
    sbit  FB19_CAN1_F8R1_bit at CAN1_F8R1.B19;
    sbit  FB20_CAN1_F8R1_bit at CAN1_F8R1.B20;
    sbit  FB21_CAN1_F8R1_bit at CAN1_F8R1.B21;
    sbit  FB22_CAN1_F8R1_bit at CAN1_F8R1.B22;
    sbit  FB23_CAN1_F8R1_bit at CAN1_F8R1.B23;
    sbit  FB24_CAN1_F8R1_bit at CAN1_F8R1.B24;
    sbit  FB25_CAN1_F8R1_bit at CAN1_F8R1.B25;
    sbit  FB26_CAN1_F8R1_bit at CAN1_F8R1.B26;
    sbit  FB27_CAN1_F8R1_bit at CAN1_F8R1.B27;
    sbit  FB28_CAN1_F8R1_bit at CAN1_F8R1.B28;
    sbit  FB29_CAN1_F8R1_bit at CAN1_F8R1.B29;
    sbit  FB30_CAN1_F8R1_bit at CAN1_F8R1.B30;
    sbit  FB31_CAN1_F8R1_bit at CAN1_F8R1.B31;

sfr unsigned long   volatile CAN1_F8R2            absolute 0x40006684;
    sbit  FB0_CAN1_F8R2_bit at CAN1_F8R2.B0;
    sbit  FB1_CAN1_F8R2_bit at CAN1_F8R2.B1;
    sbit  FB2_CAN1_F8R2_bit at CAN1_F8R2.B2;
    sbit  FB3_CAN1_F8R2_bit at CAN1_F8R2.B3;
    sbit  FB4_CAN1_F8R2_bit at CAN1_F8R2.B4;
    sbit  FB5_CAN1_F8R2_bit at CAN1_F8R2.B5;
    sbit  FB6_CAN1_F8R2_bit at CAN1_F8R2.B6;
    sbit  FB7_CAN1_F8R2_bit at CAN1_F8R2.B7;
    sbit  FB8_CAN1_F8R2_bit at CAN1_F8R2.B8;
    sbit  FB9_CAN1_F8R2_bit at CAN1_F8R2.B9;
    sbit  FB10_CAN1_F8R2_bit at CAN1_F8R2.B10;
    sbit  FB11_CAN1_F8R2_bit at CAN1_F8R2.B11;
    sbit  FB12_CAN1_F8R2_bit at CAN1_F8R2.B12;
    sbit  FB13_CAN1_F8R2_bit at CAN1_F8R2.B13;
    sbit  FB14_CAN1_F8R2_bit at CAN1_F8R2.B14;
    sbit  FB15_CAN1_F8R2_bit at CAN1_F8R2.B15;
    sbit  FB16_CAN1_F8R2_bit at CAN1_F8R2.B16;
    sbit  FB17_CAN1_F8R2_bit at CAN1_F8R2.B17;
    sbit  FB18_CAN1_F8R2_bit at CAN1_F8R2.B18;
    sbit  FB19_CAN1_F8R2_bit at CAN1_F8R2.B19;
    sbit  FB20_CAN1_F8R2_bit at CAN1_F8R2.B20;
    sbit  FB21_CAN1_F8R2_bit at CAN1_F8R2.B21;
    sbit  FB22_CAN1_F8R2_bit at CAN1_F8R2.B22;
    sbit  FB23_CAN1_F8R2_bit at CAN1_F8R2.B23;
    sbit  FB24_CAN1_F8R2_bit at CAN1_F8R2.B24;
    sbit  FB25_CAN1_F8R2_bit at CAN1_F8R2.B25;
    sbit  FB26_CAN1_F8R2_bit at CAN1_F8R2.B26;
    sbit  FB27_CAN1_F8R2_bit at CAN1_F8R2.B27;
    sbit  FB28_CAN1_F8R2_bit at CAN1_F8R2.B28;
    sbit  FB29_CAN1_F8R2_bit at CAN1_F8R2.B29;
    sbit  FB30_CAN1_F8R2_bit at CAN1_F8R2.B30;
    sbit  FB31_CAN1_F8R2_bit at CAN1_F8R2.B31;

sfr unsigned long   volatile CAN1_F9R1            absolute 0x40006688;
    sbit  FB0_CAN1_F9R1_bit at CAN1_F9R1.B0;
    sbit  FB1_CAN1_F9R1_bit at CAN1_F9R1.B1;
    sbit  FB2_CAN1_F9R1_bit at CAN1_F9R1.B2;
    sbit  FB3_CAN1_F9R1_bit at CAN1_F9R1.B3;
    sbit  FB4_CAN1_F9R1_bit at CAN1_F9R1.B4;
    sbit  FB5_CAN1_F9R1_bit at CAN1_F9R1.B5;
    sbit  FB6_CAN1_F9R1_bit at CAN1_F9R1.B6;
    sbit  FB7_CAN1_F9R1_bit at CAN1_F9R1.B7;
    sbit  FB8_CAN1_F9R1_bit at CAN1_F9R1.B8;
    sbit  FB9_CAN1_F9R1_bit at CAN1_F9R1.B9;
    sbit  FB10_CAN1_F9R1_bit at CAN1_F9R1.B10;
    sbit  FB11_CAN1_F9R1_bit at CAN1_F9R1.B11;
    sbit  FB12_CAN1_F9R1_bit at CAN1_F9R1.B12;
    sbit  FB13_CAN1_F9R1_bit at CAN1_F9R1.B13;
    sbit  FB14_CAN1_F9R1_bit at CAN1_F9R1.B14;
    sbit  FB15_CAN1_F9R1_bit at CAN1_F9R1.B15;
    sbit  FB16_CAN1_F9R1_bit at CAN1_F9R1.B16;
    sbit  FB17_CAN1_F9R1_bit at CAN1_F9R1.B17;
    sbit  FB18_CAN1_F9R1_bit at CAN1_F9R1.B18;
    sbit  FB19_CAN1_F9R1_bit at CAN1_F9R1.B19;
    sbit  FB20_CAN1_F9R1_bit at CAN1_F9R1.B20;
    sbit  FB21_CAN1_F9R1_bit at CAN1_F9R1.B21;
    sbit  FB22_CAN1_F9R1_bit at CAN1_F9R1.B22;
    sbit  FB23_CAN1_F9R1_bit at CAN1_F9R1.B23;
    sbit  FB24_CAN1_F9R1_bit at CAN1_F9R1.B24;
    sbit  FB25_CAN1_F9R1_bit at CAN1_F9R1.B25;
    sbit  FB26_CAN1_F9R1_bit at CAN1_F9R1.B26;
    sbit  FB27_CAN1_F9R1_bit at CAN1_F9R1.B27;
    sbit  FB28_CAN1_F9R1_bit at CAN1_F9R1.B28;
    sbit  FB29_CAN1_F9R1_bit at CAN1_F9R1.B29;
    sbit  FB30_CAN1_F9R1_bit at CAN1_F9R1.B30;
    sbit  FB31_CAN1_F9R1_bit at CAN1_F9R1.B31;

sfr unsigned long   volatile CAN1_F9R2            absolute 0x4000668C;
    sbit  FB0_CAN1_F9R2_bit at CAN1_F9R2.B0;
    sbit  FB1_CAN1_F9R2_bit at CAN1_F9R2.B1;
    sbit  FB2_CAN1_F9R2_bit at CAN1_F9R2.B2;
    sbit  FB3_CAN1_F9R2_bit at CAN1_F9R2.B3;
    sbit  FB4_CAN1_F9R2_bit at CAN1_F9R2.B4;
    sbit  FB5_CAN1_F9R2_bit at CAN1_F9R2.B5;
    sbit  FB6_CAN1_F9R2_bit at CAN1_F9R2.B6;
    sbit  FB7_CAN1_F9R2_bit at CAN1_F9R2.B7;
    sbit  FB8_CAN1_F9R2_bit at CAN1_F9R2.B8;
    sbit  FB9_CAN1_F9R2_bit at CAN1_F9R2.B9;
    sbit  FB10_CAN1_F9R2_bit at CAN1_F9R2.B10;
    sbit  FB11_CAN1_F9R2_bit at CAN1_F9R2.B11;
    sbit  FB12_CAN1_F9R2_bit at CAN1_F9R2.B12;
    sbit  FB13_CAN1_F9R2_bit at CAN1_F9R2.B13;
    sbit  FB14_CAN1_F9R2_bit at CAN1_F9R2.B14;
    sbit  FB15_CAN1_F9R2_bit at CAN1_F9R2.B15;
    sbit  FB16_CAN1_F9R2_bit at CAN1_F9R2.B16;
    sbit  FB17_CAN1_F9R2_bit at CAN1_F9R2.B17;
    sbit  FB18_CAN1_F9R2_bit at CAN1_F9R2.B18;
    sbit  FB19_CAN1_F9R2_bit at CAN1_F9R2.B19;
    sbit  FB20_CAN1_F9R2_bit at CAN1_F9R2.B20;
    sbit  FB21_CAN1_F9R2_bit at CAN1_F9R2.B21;
    sbit  FB22_CAN1_F9R2_bit at CAN1_F9R2.B22;
    sbit  FB23_CAN1_F9R2_bit at CAN1_F9R2.B23;
    sbit  FB24_CAN1_F9R2_bit at CAN1_F9R2.B24;
    sbit  FB25_CAN1_F9R2_bit at CAN1_F9R2.B25;
    sbit  FB26_CAN1_F9R2_bit at CAN1_F9R2.B26;
    sbit  FB27_CAN1_F9R2_bit at CAN1_F9R2.B27;
    sbit  FB28_CAN1_F9R2_bit at CAN1_F9R2.B28;
    sbit  FB29_CAN1_F9R2_bit at CAN1_F9R2.B29;
    sbit  FB30_CAN1_F9R2_bit at CAN1_F9R2.B30;
    sbit  FB31_CAN1_F9R2_bit at CAN1_F9R2.B31;

sfr unsigned long   volatile CAN1_F10R1           absolute 0x40006690;
    sbit  FB0_CAN1_F10R1_bit at CAN1_F10R1.B0;
    sbit  FB1_CAN1_F10R1_bit at CAN1_F10R1.B1;
    sbit  FB2_CAN1_F10R1_bit at CAN1_F10R1.B2;
    sbit  FB3_CAN1_F10R1_bit at CAN1_F10R1.B3;
    sbit  FB4_CAN1_F10R1_bit at CAN1_F10R1.B4;
    sbit  FB5_CAN1_F10R1_bit at CAN1_F10R1.B5;
    sbit  FB6_CAN1_F10R1_bit at CAN1_F10R1.B6;
    sbit  FB7_CAN1_F10R1_bit at CAN1_F10R1.B7;
    sbit  FB8_CAN1_F10R1_bit at CAN1_F10R1.B8;
    sbit  FB9_CAN1_F10R1_bit at CAN1_F10R1.B9;
    sbit  FB10_CAN1_F10R1_bit at CAN1_F10R1.B10;
    sbit  FB11_CAN1_F10R1_bit at CAN1_F10R1.B11;
    sbit  FB12_CAN1_F10R1_bit at CAN1_F10R1.B12;
    sbit  FB13_CAN1_F10R1_bit at CAN1_F10R1.B13;
    sbit  FB14_CAN1_F10R1_bit at CAN1_F10R1.B14;
    sbit  FB15_CAN1_F10R1_bit at CAN1_F10R1.B15;
    sbit  FB16_CAN1_F10R1_bit at CAN1_F10R1.B16;
    sbit  FB17_CAN1_F10R1_bit at CAN1_F10R1.B17;
    sbit  FB18_CAN1_F10R1_bit at CAN1_F10R1.B18;
    sbit  FB19_CAN1_F10R1_bit at CAN1_F10R1.B19;
    sbit  FB20_CAN1_F10R1_bit at CAN1_F10R1.B20;
    sbit  FB21_CAN1_F10R1_bit at CAN1_F10R1.B21;
    sbit  FB22_CAN1_F10R1_bit at CAN1_F10R1.B22;
    sbit  FB23_CAN1_F10R1_bit at CAN1_F10R1.B23;
    sbit  FB24_CAN1_F10R1_bit at CAN1_F10R1.B24;
    sbit  FB25_CAN1_F10R1_bit at CAN1_F10R1.B25;
    sbit  FB26_CAN1_F10R1_bit at CAN1_F10R1.B26;
    sbit  FB27_CAN1_F10R1_bit at CAN1_F10R1.B27;
    sbit  FB28_CAN1_F10R1_bit at CAN1_F10R1.B28;
    sbit  FB29_CAN1_F10R1_bit at CAN1_F10R1.B29;
    sbit  FB30_CAN1_F10R1_bit at CAN1_F10R1.B30;
    sbit  FB31_CAN1_F10R1_bit at CAN1_F10R1.B31;

sfr unsigned long   volatile CAN1_F10R2           absolute 0x40006694;
    sbit  FB0_CAN1_F10R2_bit at CAN1_F10R2.B0;
    sbit  FB1_CAN1_F10R2_bit at CAN1_F10R2.B1;
    sbit  FB2_CAN1_F10R2_bit at CAN1_F10R2.B2;
    sbit  FB3_CAN1_F10R2_bit at CAN1_F10R2.B3;
    sbit  FB4_CAN1_F10R2_bit at CAN1_F10R2.B4;
    sbit  FB5_CAN1_F10R2_bit at CAN1_F10R2.B5;
    sbit  FB6_CAN1_F10R2_bit at CAN1_F10R2.B6;
    sbit  FB7_CAN1_F10R2_bit at CAN1_F10R2.B7;
    sbit  FB8_CAN1_F10R2_bit at CAN1_F10R2.B8;
    sbit  FB9_CAN1_F10R2_bit at CAN1_F10R2.B9;
    sbit  FB10_CAN1_F10R2_bit at CAN1_F10R2.B10;
    sbit  FB11_CAN1_F10R2_bit at CAN1_F10R2.B11;
    sbit  FB12_CAN1_F10R2_bit at CAN1_F10R2.B12;
    sbit  FB13_CAN1_F10R2_bit at CAN1_F10R2.B13;
    sbit  FB14_CAN1_F10R2_bit at CAN1_F10R2.B14;
    sbit  FB15_CAN1_F10R2_bit at CAN1_F10R2.B15;
    sbit  FB16_CAN1_F10R2_bit at CAN1_F10R2.B16;
    sbit  FB17_CAN1_F10R2_bit at CAN1_F10R2.B17;
    sbit  FB18_CAN1_F10R2_bit at CAN1_F10R2.B18;
    sbit  FB19_CAN1_F10R2_bit at CAN1_F10R2.B19;
    sbit  FB20_CAN1_F10R2_bit at CAN1_F10R2.B20;
    sbit  FB21_CAN1_F10R2_bit at CAN1_F10R2.B21;
    sbit  FB22_CAN1_F10R2_bit at CAN1_F10R2.B22;
    sbit  FB23_CAN1_F10R2_bit at CAN1_F10R2.B23;
    sbit  FB24_CAN1_F10R2_bit at CAN1_F10R2.B24;
    sbit  FB25_CAN1_F10R2_bit at CAN1_F10R2.B25;
    sbit  FB26_CAN1_F10R2_bit at CAN1_F10R2.B26;
    sbit  FB27_CAN1_F10R2_bit at CAN1_F10R2.B27;
    sbit  FB28_CAN1_F10R2_bit at CAN1_F10R2.B28;
    sbit  FB29_CAN1_F10R2_bit at CAN1_F10R2.B29;
    sbit  FB30_CAN1_F10R2_bit at CAN1_F10R2.B30;
    sbit  FB31_CAN1_F10R2_bit at CAN1_F10R2.B31;

sfr unsigned long   volatile CAN1_F11R1           absolute 0x40006698;
    sbit  FB0_CAN1_F11R1_bit at CAN1_F11R1.B0;
    sbit  FB1_CAN1_F11R1_bit at CAN1_F11R1.B1;
    sbit  FB2_CAN1_F11R1_bit at CAN1_F11R1.B2;
    sbit  FB3_CAN1_F11R1_bit at CAN1_F11R1.B3;
    sbit  FB4_CAN1_F11R1_bit at CAN1_F11R1.B4;
    sbit  FB5_CAN1_F11R1_bit at CAN1_F11R1.B5;
    sbit  FB6_CAN1_F11R1_bit at CAN1_F11R1.B6;
    sbit  FB7_CAN1_F11R1_bit at CAN1_F11R1.B7;
    sbit  FB8_CAN1_F11R1_bit at CAN1_F11R1.B8;
    sbit  FB9_CAN1_F11R1_bit at CAN1_F11R1.B9;
    sbit  FB10_CAN1_F11R1_bit at CAN1_F11R1.B10;
    sbit  FB11_CAN1_F11R1_bit at CAN1_F11R1.B11;
    sbit  FB12_CAN1_F11R1_bit at CAN1_F11R1.B12;
    sbit  FB13_CAN1_F11R1_bit at CAN1_F11R1.B13;
    sbit  FB14_CAN1_F11R1_bit at CAN1_F11R1.B14;
    sbit  FB15_CAN1_F11R1_bit at CAN1_F11R1.B15;
    sbit  FB16_CAN1_F11R1_bit at CAN1_F11R1.B16;
    sbit  FB17_CAN1_F11R1_bit at CAN1_F11R1.B17;
    sbit  FB18_CAN1_F11R1_bit at CAN1_F11R1.B18;
    sbit  FB19_CAN1_F11R1_bit at CAN1_F11R1.B19;
    sbit  FB20_CAN1_F11R1_bit at CAN1_F11R1.B20;
    sbit  FB21_CAN1_F11R1_bit at CAN1_F11R1.B21;
    sbit  FB22_CAN1_F11R1_bit at CAN1_F11R1.B22;
    sbit  FB23_CAN1_F11R1_bit at CAN1_F11R1.B23;
    sbit  FB24_CAN1_F11R1_bit at CAN1_F11R1.B24;
    sbit  FB25_CAN1_F11R1_bit at CAN1_F11R1.B25;
    sbit  FB26_CAN1_F11R1_bit at CAN1_F11R1.B26;
    sbit  FB27_CAN1_F11R1_bit at CAN1_F11R1.B27;
    sbit  FB28_CAN1_F11R1_bit at CAN1_F11R1.B28;
    sbit  FB29_CAN1_F11R1_bit at CAN1_F11R1.B29;
    sbit  FB30_CAN1_F11R1_bit at CAN1_F11R1.B30;
    sbit  FB31_CAN1_F11R1_bit at CAN1_F11R1.B31;

sfr unsigned long   volatile CAN1_F11R2           absolute 0x4000669C;
    sbit  FB0_CAN1_F11R2_bit at CAN1_F11R2.B0;
    sbit  FB1_CAN1_F11R2_bit at CAN1_F11R2.B1;
    sbit  FB2_CAN1_F11R2_bit at CAN1_F11R2.B2;
    sbit  FB3_CAN1_F11R2_bit at CAN1_F11R2.B3;
    sbit  FB4_CAN1_F11R2_bit at CAN1_F11R2.B4;
    sbit  FB5_CAN1_F11R2_bit at CAN1_F11R2.B5;
    sbit  FB6_CAN1_F11R2_bit at CAN1_F11R2.B6;
    sbit  FB7_CAN1_F11R2_bit at CAN1_F11R2.B7;
    sbit  FB8_CAN1_F11R2_bit at CAN1_F11R2.B8;
    sbit  FB9_CAN1_F11R2_bit at CAN1_F11R2.B9;
    sbit  FB10_CAN1_F11R2_bit at CAN1_F11R2.B10;
    sbit  FB11_CAN1_F11R2_bit at CAN1_F11R2.B11;
    sbit  FB12_CAN1_F11R2_bit at CAN1_F11R2.B12;
    sbit  FB13_CAN1_F11R2_bit at CAN1_F11R2.B13;
    sbit  FB14_CAN1_F11R2_bit at CAN1_F11R2.B14;
    sbit  FB15_CAN1_F11R2_bit at CAN1_F11R2.B15;
    sbit  FB16_CAN1_F11R2_bit at CAN1_F11R2.B16;
    sbit  FB17_CAN1_F11R2_bit at CAN1_F11R2.B17;
    sbit  FB18_CAN1_F11R2_bit at CAN1_F11R2.B18;
    sbit  FB19_CAN1_F11R2_bit at CAN1_F11R2.B19;
    sbit  FB20_CAN1_F11R2_bit at CAN1_F11R2.B20;
    sbit  FB21_CAN1_F11R2_bit at CAN1_F11R2.B21;
    sbit  FB22_CAN1_F11R2_bit at CAN1_F11R2.B22;
    sbit  FB23_CAN1_F11R2_bit at CAN1_F11R2.B23;
    sbit  FB24_CAN1_F11R2_bit at CAN1_F11R2.B24;
    sbit  FB25_CAN1_F11R2_bit at CAN1_F11R2.B25;
    sbit  FB26_CAN1_F11R2_bit at CAN1_F11R2.B26;
    sbit  FB27_CAN1_F11R2_bit at CAN1_F11R2.B27;
    sbit  FB28_CAN1_F11R2_bit at CAN1_F11R2.B28;
    sbit  FB29_CAN1_F11R2_bit at CAN1_F11R2.B29;
    sbit  FB30_CAN1_F11R2_bit at CAN1_F11R2.B30;
    sbit  FB31_CAN1_F11R2_bit at CAN1_F11R2.B31;

sfr unsigned long   volatile CAN1_F12R1           absolute 0x400066A0;
    sbit  FB0_CAN1_F12R1_bit at CAN1_F12R1.B0;
    sbit  FB1_CAN1_F12R1_bit at CAN1_F12R1.B1;
    sbit  FB2_CAN1_F12R1_bit at CAN1_F12R1.B2;
    sbit  FB3_CAN1_F12R1_bit at CAN1_F12R1.B3;
    sbit  FB4_CAN1_F12R1_bit at CAN1_F12R1.B4;
    sbit  FB5_CAN1_F12R1_bit at CAN1_F12R1.B5;
    sbit  FB6_CAN1_F12R1_bit at CAN1_F12R1.B6;
    sbit  FB7_CAN1_F12R1_bit at CAN1_F12R1.B7;
    sbit  FB8_CAN1_F12R1_bit at CAN1_F12R1.B8;
    sbit  FB9_CAN1_F12R1_bit at CAN1_F12R1.B9;
    sbit  FB10_CAN1_F12R1_bit at CAN1_F12R1.B10;
    sbit  FB11_CAN1_F12R1_bit at CAN1_F12R1.B11;
    sbit  FB12_CAN1_F12R1_bit at CAN1_F12R1.B12;
    sbit  FB13_CAN1_F12R1_bit at CAN1_F12R1.B13;
    sbit  FB14_CAN1_F12R1_bit at CAN1_F12R1.B14;
    sbit  FB15_CAN1_F12R1_bit at CAN1_F12R1.B15;
    sbit  FB16_CAN1_F12R1_bit at CAN1_F12R1.B16;
    sbit  FB17_CAN1_F12R1_bit at CAN1_F12R1.B17;
    sbit  FB18_CAN1_F12R1_bit at CAN1_F12R1.B18;
    sbit  FB19_CAN1_F12R1_bit at CAN1_F12R1.B19;
    sbit  FB20_CAN1_F12R1_bit at CAN1_F12R1.B20;
    sbit  FB21_CAN1_F12R1_bit at CAN1_F12R1.B21;
    sbit  FB22_CAN1_F12R1_bit at CAN1_F12R1.B22;
    sbit  FB23_CAN1_F12R1_bit at CAN1_F12R1.B23;
    sbit  FB24_CAN1_F12R1_bit at CAN1_F12R1.B24;
    sbit  FB25_CAN1_F12R1_bit at CAN1_F12R1.B25;
    sbit  FB26_CAN1_F12R1_bit at CAN1_F12R1.B26;
    sbit  FB27_CAN1_F12R1_bit at CAN1_F12R1.B27;
    sbit  FB28_CAN1_F12R1_bit at CAN1_F12R1.B28;
    sbit  FB29_CAN1_F12R1_bit at CAN1_F12R1.B29;
    sbit  FB30_CAN1_F12R1_bit at CAN1_F12R1.B30;
    sbit  FB31_CAN1_F12R1_bit at CAN1_F12R1.B31;

sfr unsigned long   volatile CAN1_F12R2           absolute 0x400066A4;
    sbit  FB0_CAN1_F12R2_bit at CAN1_F12R2.B0;
    sbit  FB1_CAN1_F12R2_bit at CAN1_F12R2.B1;
    sbit  FB2_CAN1_F12R2_bit at CAN1_F12R2.B2;
    sbit  FB3_CAN1_F12R2_bit at CAN1_F12R2.B3;
    sbit  FB4_CAN1_F12R2_bit at CAN1_F12R2.B4;
    sbit  FB5_CAN1_F12R2_bit at CAN1_F12R2.B5;
    sbit  FB6_CAN1_F12R2_bit at CAN1_F12R2.B6;
    sbit  FB7_CAN1_F12R2_bit at CAN1_F12R2.B7;
    sbit  FB8_CAN1_F12R2_bit at CAN1_F12R2.B8;
    sbit  FB9_CAN1_F12R2_bit at CAN1_F12R2.B9;
    sbit  FB10_CAN1_F12R2_bit at CAN1_F12R2.B10;
    sbit  FB11_CAN1_F12R2_bit at CAN1_F12R2.B11;
    sbit  FB12_CAN1_F12R2_bit at CAN1_F12R2.B12;
    sbit  FB13_CAN1_F12R2_bit at CAN1_F12R2.B13;
    sbit  FB14_CAN1_F12R2_bit at CAN1_F12R2.B14;
    sbit  FB15_CAN1_F12R2_bit at CAN1_F12R2.B15;
    sbit  FB16_CAN1_F12R2_bit at CAN1_F12R2.B16;
    sbit  FB17_CAN1_F12R2_bit at CAN1_F12R2.B17;
    sbit  FB18_CAN1_F12R2_bit at CAN1_F12R2.B18;
    sbit  FB19_CAN1_F12R2_bit at CAN1_F12R2.B19;
    sbit  FB20_CAN1_F12R2_bit at CAN1_F12R2.B20;
    sbit  FB21_CAN1_F12R2_bit at CAN1_F12R2.B21;
    sbit  FB22_CAN1_F12R2_bit at CAN1_F12R2.B22;
    sbit  FB23_CAN1_F12R2_bit at CAN1_F12R2.B23;
    sbit  FB24_CAN1_F12R2_bit at CAN1_F12R2.B24;
    sbit  FB25_CAN1_F12R2_bit at CAN1_F12R2.B25;
    sbit  FB26_CAN1_F12R2_bit at CAN1_F12R2.B26;
    sbit  FB27_CAN1_F12R2_bit at CAN1_F12R2.B27;
    sbit  FB28_CAN1_F12R2_bit at CAN1_F12R2.B28;
    sbit  FB29_CAN1_F12R2_bit at CAN1_F12R2.B29;
    sbit  FB30_CAN1_F12R2_bit at CAN1_F12R2.B30;
    sbit  FB31_CAN1_F12R2_bit at CAN1_F12R2.B31;

sfr unsigned long   volatile CAN1_F13R1           absolute 0x400066A8;
    sbit  FB0_CAN1_F13R1_bit at CAN1_F13R1.B0;
    sbit  FB1_CAN1_F13R1_bit at CAN1_F13R1.B1;
    sbit  FB2_CAN1_F13R1_bit at CAN1_F13R1.B2;
    sbit  FB3_CAN1_F13R1_bit at CAN1_F13R1.B3;
    sbit  FB4_CAN1_F13R1_bit at CAN1_F13R1.B4;
    sbit  FB5_CAN1_F13R1_bit at CAN1_F13R1.B5;
    sbit  FB6_CAN1_F13R1_bit at CAN1_F13R1.B6;
    sbit  FB7_CAN1_F13R1_bit at CAN1_F13R1.B7;
    sbit  FB8_CAN1_F13R1_bit at CAN1_F13R1.B8;
    sbit  FB9_CAN1_F13R1_bit at CAN1_F13R1.B9;
    sbit  FB10_CAN1_F13R1_bit at CAN1_F13R1.B10;
    sbit  FB11_CAN1_F13R1_bit at CAN1_F13R1.B11;
    sbit  FB12_CAN1_F13R1_bit at CAN1_F13R1.B12;
    sbit  FB13_CAN1_F13R1_bit at CAN1_F13R1.B13;
    sbit  FB14_CAN1_F13R1_bit at CAN1_F13R1.B14;
    sbit  FB15_CAN1_F13R1_bit at CAN1_F13R1.B15;
    sbit  FB16_CAN1_F13R1_bit at CAN1_F13R1.B16;
    sbit  FB17_CAN1_F13R1_bit at CAN1_F13R1.B17;
    sbit  FB18_CAN1_F13R1_bit at CAN1_F13R1.B18;
    sbit  FB19_CAN1_F13R1_bit at CAN1_F13R1.B19;
    sbit  FB20_CAN1_F13R1_bit at CAN1_F13R1.B20;
    sbit  FB21_CAN1_F13R1_bit at CAN1_F13R1.B21;
    sbit  FB22_CAN1_F13R1_bit at CAN1_F13R1.B22;
    sbit  FB23_CAN1_F13R1_bit at CAN1_F13R1.B23;
    sbit  FB24_CAN1_F13R1_bit at CAN1_F13R1.B24;
    sbit  FB25_CAN1_F13R1_bit at CAN1_F13R1.B25;
    sbit  FB26_CAN1_F13R1_bit at CAN1_F13R1.B26;
    sbit  FB27_CAN1_F13R1_bit at CAN1_F13R1.B27;
    sbit  FB28_CAN1_F13R1_bit at CAN1_F13R1.B28;
    sbit  FB29_CAN1_F13R1_bit at CAN1_F13R1.B29;
    sbit  FB30_CAN1_F13R1_bit at CAN1_F13R1.B30;
    sbit  FB31_CAN1_F13R1_bit at CAN1_F13R1.B31;

sfr unsigned long   volatile CAN1_F13R2           absolute 0x400066AC;
    sbit  FB0_CAN1_F13R2_bit at CAN1_F13R2.B0;
    sbit  FB1_CAN1_F13R2_bit at CAN1_F13R2.B1;
    sbit  FB2_CAN1_F13R2_bit at CAN1_F13R2.B2;
    sbit  FB3_CAN1_F13R2_bit at CAN1_F13R2.B3;
    sbit  FB4_CAN1_F13R2_bit at CAN1_F13R2.B4;
    sbit  FB5_CAN1_F13R2_bit at CAN1_F13R2.B5;
    sbit  FB6_CAN1_F13R2_bit at CAN1_F13R2.B6;
    sbit  FB7_CAN1_F13R2_bit at CAN1_F13R2.B7;
    sbit  FB8_CAN1_F13R2_bit at CAN1_F13R2.B8;
    sbit  FB9_CAN1_F13R2_bit at CAN1_F13R2.B9;
    sbit  FB10_CAN1_F13R2_bit at CAN1_F13R2.B10;
    sbit  FB11_CAN1_F13R2_bit at CAN1_F13R2.B11;
    sbit  FB12_CAN1_F13R2_bit at CAN1_F13R2.B12;
    sbit  FB13_CAN1_F13R2_bit at CAN1_F13R2.B13;
    sbit  FB14_CAN1_F13R2_bit at CAN1_F13R2.B14;
    sbit  FB15_CAN1_F13R2_bit at CAN1_F13R2.B15;
    sbit  FB16_CAN1_F13R2_bit at CAN1_F13R2.B16;
    sbit  FB17_CAN1_F13R2_bit at CAN1_F13R2.B17;
    sbit  FB18_CAN1_F13R2_bit at CAN1_F13R2.B18;
    sbit  FB19_CAN1_F13R2_bit at CAN1_F13R2.B19;
    sbit  FB20_CAN1_F13R2_bit at CAN1_F13R2.B20;
    sbit  FB21_CAN1_F13R2_bit at CAN1_F13R2.B21;
    sbit  FB22_CAN1_F13R2_bit at CAN1_F13R2.B22;
    sbit  FB23_CAN1_F13R2_bit at CAN1_F13R2.B23;
    sbit  FB24_CAN1_F13R2_bit at CAN1_F13R2.B24;
    sbit  FB25_CAN1_F13R2_bit at CAN1_F13R2.B25;
    sbit  FB26_CAN1_F13R2_bit at CAN1_F13R2.B26;
    sbit  FB27_CAN1_F13R2_bit at CAN1_F13R2.B27;
    sbit  FB28_CAN1_F13R2_bit at CAN1_F13R2.B28;
    sbit  FB29_CAN1_F13R2_bit at CAN1_F13R2.B29;
    sbit  FB30_CAN1_F13R2_bit at CAN1_F13R2.B30;
    sbit  FB31_CAN1_F13R2_bit at CAN1_F13R2.B31;

sfr unsigned long   volatile CAN1_F14R1           absolute 0x400066B0;
    sbit  FB0_CAN1_F14R1_bit at CAN1_F14R1.B0;
    sbit  FB1_CAN1_F14R1_bit at CAN1_F14R1.B1;
    sbit  FB2_CAN1_F14R1_bit at CAN1_F14R1.B2;
    sbit  FB3_CAN1_F14R1_bit at CAN1_F14R1.B3;
    sbit  FB4_CAN1_F14R1_bit at CAN1_F14R1.B4;
    sbit  FB5_CAN1_F14R1_bit at CAN1_F14R1.B5;
    sbit  FB6_CAN1_F14R1_bit at CAN1_F14R1.B6;
    sbit  FB7_CAN1_F14R1_bit at CAN1_F14R1.B7;
    sbit  FB8_CAN1_F14R1_bit at CAN1_F14R1.B8;
    sbit  FB9_CAN1_F14R1_bit at CAN1_F14R1.B9;
    sbit  FB10_CAN1_F14R1_bit at CAN1_F14R1.B10;
    sbit  FB11_CAN1_F14R1_bit at CAN1_F14R1.B11;
    sbit  FB12_CAN1_F14R1_bit at CAN1_F14R1.B12;
    sbit  FB13_CAN1_F14R1_bit at CAN1_F14R1.B13;
    sbit  FB14_CAN1_F14R1_bit at CAN1_F14R1.B14;
    sbit  FB15_CAN1_F14R1_bit at CAN1_F14R1.B15;
    sbit  FB16_CAN1_F14R1_bit at CAN1_F14R1.B16;
    sbit  FB17_CAN1_F14R1_bit at CAN1_F14R1.B17;
    sbit  FB18_CAN1_F14R1_bit at CAN1_F14R1.B18;
    sbit  FB19_CAN1_F14R1_bit at CAN1_F14R1.B19;
    sbit  FB20_CAN1_F14R1_bit at CAN1_F14R1.B20;
    sbit  FB21_CAN1_F14R1_bit at CAN1_F14R1.B21;
    sbit  FB22_CAN1_F14R1_bit at CAN1_F14R1.B22;
    sbit  FB23_CAN1_F14R1_bit at CAN1_F14R1.B23;
    sbit  FB24_CAN1_F14R1_bit at CAN1_F14R1.B24;
    sbit  FB25_CAN1_F14R1_bit at CAN1_F14R1.B25;
    sbit  FB26_CAN1_F14R1_bit at CAN1_F14R1.B26;
    sbit  FB27_CAN1_F14R1_bit at CAN1_F14R1.B27;
    sbit  FB28_CAN1_F14R1_bit at CAN1_F14R1.B28;
    sbit  FB29_CAN1_F14R1_bit at CAN1_F14R1.B29;
    sbit  FB30_CAN1_F14R1_bit at CAN1_F14R1.B30;
    sbit  FB31_CAN1_F14R1_bit at CAN1_F14R1.B31;

sfr unsigned long   volatile CAN1_F14R2           absolute 0x400066B4;
    sbit  FB0_CAN1_F14R2_bit at CAN1_F14R2.B0;
    sbit  FB1_CAN1_F14R2_bit at CAN1_F14R2.B1;
    sbit  FB2_CAN1_F14R2_bit at CAN1_F14R2.B2;
    sbit  FB3_CAN1_F14R2_bit at CAN1_F14R2.B3;
    sbit  FB4_CAN1_F14R2_bit at CAN1_F14R2.B4;
    sbit  FB5_CAN1_F14R2_bit at CAN1_F14R2.B5;
    sbit  FB6_CAN1_F14R2_bit at CAN1_F14R2.B6;
    sbit  FB7_CAN1_F14R2_bit at CAN1_F14R2.B7;
    sbit  FB8_CAN1_F14R2_bit at CAN1_F14R2.B8;
    sbit  FB9_CAN1_F14R2_bit at CAN1_F14R2.B9;
    sbit  FB10_CAN1_F14R2_bit at CAN1_F14R2.B10;
    sbit  FB11_CAN1_F14R2_bit at CAN1_F14R2.B11;
    sbit  FB12_CAN1_F14R2_bit at CAN1_F14R2.B12;
    sbit  FB13_CAN1_F14R2_bit at CAN1_F14R2.B13;
    sbit  FB14_CAN1_F14R2_bit at CAN1_F14R2.B14;
    sbit  FB15_CAN1_F14R2_bit at CAN1_F14R2.B15;
    sbit  FB16_CAN1_F14R2_bit at CAN1_F14R2.B16;
    sbit  FB17_CAN1_F14R2_bit at CAN1_F14R2.B17;
    sbit  FB18_CAN1_F14R2_bit at CAN1_F14R2.B18;
    sbit  FB19_CAN1_F14R2_bit at CAN1_F14R2.B19;
    sbit  FB20_CAN1_F14R2_bit at CAN1_F14R2.B20;
    sbit  FB21_CAN1_F14R2_bit at CAN1_F14R2.B21;
    sbit  FB22_CAN1_F14R2_bit at CAN1_F14R2.B22;
    sbit  FB23_CAN1_F14R2_bit at CAN1_F14R2.B23;
    sbit  FB24_CAN1_F14R2_bit at CAN1_F14R2.B24;
    sbit  FB25_CAN1_F14R2_bit at CAN1_F14R2.B25;
    sbit  FB26_CAN1_F14R2_bit at CAN1_F14R2.B26;
    sbit  FB27_CAN1_F14R2_bit at CAN1_F14R2.B27;
    sbit  FB28_CAN1_F14R2_bit at CAN1_F14R2.B28;
    sbit  FB29_CAN1_F14R2_bit at CAN1_F14R2.B29;
    sbit  FB30_CAN1_F14R2_bit at CAN1_F14R2.B30;
    sbit  FB31_CAN1_F14R2_bit at CAN1_F14R2.B31;

sfr unsigned long   volatile CAN1_F15R1           absolute 0x400066B8;
    sbit  FB0_CAN1_F15R1_bit at CAN1_F15R1.B0;
    sbit  FB1_CAN1_F15R1_bit at CAN1_F15R1.B1;
    sbit  FB2_CAN1_F15R1_bit at CAN1_F15R1.B2;
    sbit  FB3_CAN1_F15R1_bit at CAN1_F15R1.B3;
    sbit  FB4_CAN1_F15R1_bit at CAN1_F15R1.B4;
    sbit  FB5_CAN1_F15R1_bit at CAN1_F15R1.B5;
    sbit  FB6_CAN1_F15R1_bit at CAN1_F15R1.B6;
    sbit  FB7_CAN1_F15R1_bit at CAN1_F15R1.B7;
    sbit  FB8_CAN1_F15R1_bit at CAN1_F15R1.B8;
    sbit  FB9_CAN1_F15R1_bit at CAN1_F15R1.B9;
    sbit  FB10_CAN1_F15R1_bit at CAN1_F15R1.B10;
    sbit  FB11_CAN1_F15R1_bit at CAN1_F15R1.B11;
    sbit  FB12_CAN1_F15R1_bit at CAN1_F15R1.B12;
    sbit  FB13_CAN1_F15R1_bit at CAN1_F15R1.B13;
    sbit  FB14_CAN1_F15R1_bit at CAN1_F15R1.B14;
    sbit  FB15_CAN1_F15R1_bit at CAN1_F15R1.B15;
    sbit  FB16_CAN1_F15R1_bit at CAN1_F15R1.B16;
    sbit  FB17_CAN1_F15R1_bit at CAN1_F15R1.B17;
    sbit  FB18_CAN1_F15R1_bit at CAN1_F15R1.B18;
    sbit  FB19_CAN1_F15R1_bit at CAN1_F15R1.B19;
    sbit  FB20_CAN1_F15R1_bit at CAN1_F15R1.B20;
    sbit  FB21_CAN1_F15R1_bit at CAN1_F15R1.B21;
    sbit  FB22_CAN1_F15R1_bit at CAN1_F15R1.B22;
    sbit  FB23_CAN1_F15R1_bit at CAN1_F15R1.B23;
    sbit  FB24_CAN1_F15R1_bit at CAN1_F15R1.B24;
    sbit  FB25_CAN1_F15R1_bit at CAN1_F15R1.B25;
    sbit  FB26_CAN1_F15R1_bit at CAN1_F15R1.B26;
    sbit  FB27_CAN1_F15R1_bit at CAN1_F15R1.B27;
    sbit  FB28_CAN1_F15R1_bit at CAN1_F15R1.B28;
    sbit  FB29_CAN1_F15R1_bit at CAN1_F15R1.B29;
    sbit  FB30_CAN1_F15R1_bit at CAN1_F15R1.B30;
    sbit  FB31_CAN1_F15R1_bit at CAN1_F15R1.B31;

sfr unsigned long   volatile CAN1_F15R2           absolute 0x400066BC;
    sbit  FB0_CAN1_F15R2_bit at CAN1_F15R2.B0;
    sbit  FB1_CAN1_F15R2_bit at CAN1_F15R2.B1;
    sbit  FB2_CAN1_F15R2_bit at CAN1_F15R2.B2;
    sbit  FB3_CAN1_F15R2_bit at CAN1_F15R2.B3;
    sbit  FB4_CAN1_F15R2_bit at CAN1_F15R2.B4;
    sbit  FB5_CAN1_F15R2_bit at CAN1_F15R2.B5;
    sbit  FB6_CAN1_F15R2_bit at CAN1_F15R2.B6;
    sbit  FB7_CAN1_F15R2_bit at CAN1_F15R2.B7;
    sbit  FB8_CAN1_F15R2_bit at CAN1_F15R2.B8;
    sbit  FB9_CAN1_F15R2_bit at CAN1_F15R2.B9;
    sbit  FB10_CAN1_F15R2_bit at CAN1_F15R2.B10;
    sbit  FB11_CAN1_F15R2_bit at CAN1_F15R2.B11;
    sbit  FB12_CAN1_F15R2_bit at CAN1_F15R2.B12;
    sbit  FB13_CAN1_F15R2_bit at CAN1_F15R2.B13;
    sbit  FB14_CAN1_F15R2_bit at CAN1_F15R2.B14;
    sbit  FB15_CAN1_F15R2_bit at CAN1_F15R2.B15;
    sbit  FB16_CAN1_F15R2_bit at CAN1_F15R2.B16;
    sbit  FB17_CAN1_F15R2_bit at CAN1_F15R2.B17;
    sbit  FB18_CAN1_F15R2_bit at CAN1_F15R2.B18;
    sbit  FB19_CAN1_F15R2_bit at CAN1_F15R2.B19;
    sbit  FB20_CAN1_F15R2_bit at CAN1_F15R2.B20;
    sbit  FB21_CAN1_F15R2_bit at CAN1_F15R2.B21;
    sbit  FB22_CAN1_F15R2_bit at CAN1_F15R2.B22;
    sbit  FB23_CAN1_F15R2_bit at CAN1_F15R2.B23;
    sbit  FB24_CAN1_F15R2_bit at CAN1_F15R2.B24;
    sbit  FB25_CAN1_F15R2_bit at CAN1_F15R2.B25;
    sbit  FB26_CAN1_F15R2_bit at CAN1_F15R2.B26;
    sbit  FB27_CAN1_F15R2_bit at CAN1_F15R2.B27;
    sbit  FB28_CAN1_F15R2_bit at CAN1_F15R2.B28;
    sbit  FB29_CAN1_F15R2_bit at CAN1_F15R2.B29;
    sbit  FB30_CAN1_F15R2_bit at CAN1_F15R2.B30;
    sbit  FB31_CAN1_F15R2_bit at CAN1_F15R2.B31;

sfr unsigned long   volatile CAN1_F16R1           absolute 0x400066C0;
    sbit  FB0_CAN1_F16R1_bit at CAN1_F16R1.B0;
    sbit  FB1_CAN1_F16R1_bit at CAN1_F16R1.B1;
    sbit  FB2_CAN1_F16R1_bit at CAN1_F16R1.B2;
    sbit  FB3_CAN1_F16R1_bit at CAN1_F16R1.B3;
    sbit  FB4_CAN1_F16R1_bit at CAN1_F16R1.B4;
    sbit  FB5_CAN1_F16R1_bit at CAN1_F16R1.B5;
    sbit  FB6_CAN1_F16R1_bit at CAN1_F16R1.B6;
    sbit  FB7_CAN1_F16R1_bit at CAN1_F16R1.B7;
    sbit  FB8_CAN1_F16R1_bit at CAN1_F16R1.B8;
    sbit  FB9_CAN1_F16R1_bit at CAN1_F16R1.B9;
    sbit  FB10_CAN1_F16R1_bit at CAN1_F16R1.B10;
    sbit  FB11_CAN1_F16R1_bit at CAN1_F16R1.B11;
    sbit  FB12_CAN1_F16R1_bit at CAN1_F16R1.B12;
    sbit  FB13_CAN1_F16R1_bit at CAN1_F16R1.B13;
    sbit  FB14_CAN1_F16R1_bit at CAN1_F16R1.B14;
    sbit  FB15_CAN1_F16R1_bit at CAN1_F16R1.B15;
    sbit  FB16_CAN1_F16R1_bit at CAN1_F16R1.B16;
    sbit  FB17_CAN1_F16R1_bit at CAN1_F16R1.B17;
    sbit  FB18_CAN1_F16R1_bit at CAN1_F16R1.B18;
    sbit  FB19_CAN1_F16R1_bit at CAN1_F16R1.B19;
    sbit  FB20_CAN1_F16R1_bit at CAN1_F16R1.B20;
    sbit  FB21_CAN1_F16R1_bit at CAN1_F16R1.B21;
    sbit  FB22_CAN1_F16R1_bit at CAN1_F16R1.B22;
    sbit  FB23_CAN1_F16R1_bit at CAN1_F16R1.B23;
    sbit  FB24_CAN1_F16R1_bit at CAN1_F16R1.B24;
    sbit  FB25_CAN1_F16R1_bit at CAN1_F16R1.B25;
    sbit  FB26_CAN1_F16R1_bit at CAN1_F16R1.B26;
    sbit  FB27_CAN1_F16R1_bit at CAN1_F16R1.B27;
    sbit  FB28_CAN1_F16R1_bit at CAN1_F16R1.B28;
    sbit  FB29_CAN1_F16R1_bit at CAN1_F16R1.B29;
    sbit  FB30_CAN1_F16R1_bit at CAN1_F16R1.B30;
    sbit  FB31_CAN1_F16R1_bit at CAN1_F16R1.B31;

sfr unsigned long   volatile CAN1_F16R2           absolute 0x400066C4;
    sbit  FB0_CAN1_F16R2_bit at CAN1_F16R2.B0;
    sbit  FB1_CAN1_F16R2_bit at CAN1_F16R2.B1;
    sbit  FB2_CAN1_F16R2_bit at CAN1_F16R2.B2;
    sbit  FB3_CAN1_F16R2_bit at CAN1_F16R2.B3;
    sbit  FB4_CAN1_F16R2_bit at CAN1_F16R2.B4;
    sbit  FB5_CAN1_F16R2_bit at CAN1_F16R2.B5;
    sbit  FB6_CAN1_F16R2_bit at CAN1_F16R2.B6;
    sbit  FB7_CAN1_F16R2_bit at CAN1_F16R2.B7;
    sbit  FB8_CAN1_F16R2_bit at CAN1_F16R2.B8;
    sbit  FB9_CAN1_F16R2_bit at CAN1_F16R2.B9;
    sbit  FB10_CAN1_F16R2_bit at CAN1_F16R2.B10;
    sbit  FB11_CAN1_F16R2_bit at CAN1_F16R2.B11;
    sbit  FB12_CAN1_F16R2_bit at CAN1_F16R2.B12;
    sbit  FB13_CAN1_F16R2_bit at CAN1_F16R2.B13;
    sbit  FB14_CAN1_F16R2_bit at CAN1_F16R2.B14;
    sbit  FB15_CAN1_F16R2_bit at CAN1_F16R2.B15;
    sbit  FB16_CAN1_F16R2_bit at CAN1_F16R2.B16;
    sbit  FB17_CAN1_F16R2_bit at CAN1_F16R2.B17;
    sbit  FB18_CAN1_F16R2_bit at CAN1_F16R2.B18;
    sbit  FB19_CAN1_F16R2_bit at CAN1_F16R2.B19;
    sbit  FB20_CAN1_F16R2_bit at CAN1_F16R2.B20;
    sbit  FB21_CAN1_F16R2_bit at CAN1_F16R2.B21;
    sbit  FB22_CAN1_F16R2_bit at CAN1_F16R2.B22;
    sbit  FB23_CAN1_F16R2_bit at CAN1_F16R2.B23;
    sbit  FB24_CAN1_F16R2_bit at CAN1_F16R2.B24;
    sbit  FB25_CAN1_F16R2_bit at CAN1_F16R2.B25;
    sbit  FB26_CAN1_F16R2_bit at CAN1_F16R2.B26;
    sbit  FB27_CAN1_F16R2_bit at CAN1_F16R2.B27;
    sbit  FB28_CAN1_F16R2_bit at CAN1_F16R2.B28;
    sbit  FB29_CAN1_F16R2_bit at CAN1_F16R2.B29;
    sbit  FB30_CAN1_F16R2_bit at CAN1_F16R2.B30;
    sbit  FB31_CAN1_F16R2_bit at CAN1_F16R2.B31;

sfr unsigned long   volatile CAN1_F17R1           absolute 0x400066C8;
    sbit  FB0_CAN1_F17R1_bit at CAN1_F17R1.B0;
    sbit  FB1_CAN1_F17R1_bit at CAN1_F17R1.B1;
    sbit  FB2_CAN1_F17R1_bit at CAN1_F17R1.B2;
    sbit  FB3_CAN1_F17R1_bit at CAN1_F17R1.B3;
    sbit  FB4_CAN1_F17R1_bit at CAN1_F17R1.B4;
    sbit  FB5_CAN1_F17R1_bit at CAN1_F17R1.B5;
    sbit  FB6_CAN1_F17R1_bit at CAN1_F17R1.B6;
    sbit  FB7_CAN1_F17R1_bit at CAN1_F17R1.B7;
    sbit  FB8_CAN1_F17R1_bit at CAN1_F17R1.B8;
    sbit  FB9_CAN1_F17R1_bit at CAN1_F17R1.B9;
    sbit  FB10_CAN1_F17R1_bit at CAN1_F17R1.B10;
    sbit  FB11_CAN1_F17R1_bit at CAN1_F17R1.B11;
    sbit  FB12_CAN1_F17R1_bit at CAN1_F17R1.B12;
    sbit  FB13_CAN1_F17R1_bit at CAN1_F17R1.B13;
    sbit  FB14_CAN1_F17R1_bit at CAN1_F17R1.B14;
    sbit  FB15_CAN1_F17R1_bit at CAN1_F17R1.B15;
    sbit  FB16_CAN1_F17R1_bit at CAN1_F17R1.B16;
    sbit  FB17_CAN1_F17R1_bit at CAN1_F17R1.B17;
    sbit  FB18_CAN1_F17R1_bit at CAN1_F17R1.B18;
    sbit  FB19_CAN1_F17R1_bit at CAN1_F17R1.B19;
    sbit  FB20_CAN1_F17R1_bit at CAN1_F17R1.B20;
    sbit  FB21_CAN1_F17R1_bit at CAN1_F17R1.B21;
    sbit  FB22_CAN1_F17R1_bit at CAN1_F17R1.B22;
    sbit  FB23_CAN1_F17R1_bit at CAN1_F17R1.B23;
    sbit  FB24_CAN1_F17R1_bit at CAN1_F17R1.B24;
    sbit  FB25_CAN1_F17R1_bit at CAN1_F17R1.B25;
    sbit  FB26_CAN1_F17R1_bit at CAN1_F17R1.B26;
    sbit  FB27_CAN1_F17R1_bit at CAN1_F17R1.B27;
    sbit  FB28_CAN1_F17R1_bit at CAN1_F17R1.B28;
    sbit  FB29_CAN1_F17R1_bit at CAN1_F17R1.B29;
    sbit  FB30_CAN1_F17R1_bit at CAN1_F17R1.B30;
    sbit  FB31_CAN1_F17R1_bit at CAN1_F17R1.B31;

sfr unsigned long   volatile CAN1_F17R2           absolute 0x400066CC;
    sbit  FB0_CAN1_F17R2_bit at CAN1_F17R2.B0;
    sbit  FB1_CAN1_F17R2_bit at CAN1_F17R2.B1;
    sbit  FB2_CAN1_F17R2_bit at CAN1_F17R2.B2;
    sbit  FB3_CAN1_F17R2_bit at CAN1_F17R2.B3;
    sbit  FB4_CAN1_F17R2_bit at CAN1_F17R2.B4;
    sbit  FB5_CAN1_F17R2_bit at CAN1_F17R2.B5;
    sbit  FB6_CAN1_F17R2_bit at CAN1_F17R2.B6;
    sbit  FB7_CAN1_F17R2_bit at CAN1_F17R2.B7;
    sbit  FB8_CAN1_F17R2_bit at CAN1_F17R2.B8;
    sbit  FB9_CAN1_F17R2_bit at CAN1_F17R2.B9;
    sbit  FB10_CAN1_F17R2_bit at CAN1_F17R2.B10;
    sbit  FB11_CAN1_F17R2_bit at CAN1_F17R2.B11;
    sbit  FB12_CAN1_F17R2_bit at CAN1_F17R2.B12;
    sbit  FB13_CAN1_F17R2_bit at CAN1_F17R2.B13;
    sbit  FB14_CAN1_F17R2_bit at CAN1_F17R2.B14;
    sbit  FB15_CAN1_F17R2_bit at CAN1_F17R2.B15;
    sbit  FB16_CAN1_F17R2_bit at CAN1_F17R2.B16;
    sbit  FB17_CAN1_F17R2_bit at CAN1_F17R2.B17;
    sbit  FB18_CAN1_F17R2_bit at CAN1_F17R2.B18;
    sbit  FB19_CAN1_F17R2_bit at CAN1_F17R2.B19;
    sbit  FB20_CAN1_F17R2_bit at CAN1_F17R2.B20;
    sbit  FB21_CAN1_F17R2_bit at CAN1_F17R2.B21;
    sbit  FB22_CAN1_F17R2_bit at CAN1_F17R2.B22;
    sbit  FB23_CAN1_F17R2_bit at CAN1_F17R2.B23;
    sbit  FB24_CAN1_F17R2_bit at CAN1_F17R2.B24;
    sbit  FB25_CAN1_F17R2_bit at CAN1_F17R2.B25;
    sbit  FB26_CAN1_F17R2_bit at CAN1_F17R2.B26;
    sbit  FB27_CAN1_F17R2_bit at CAN1_F17R2.B27;
    sbit  FB28_CAN1_F17R2_bit at CAN1_F17R2.B28;
    sbit  FB29_CAN1_F17R2_bit at CAN1_F17R2.B29;
    sbit  FB30_CAN1_F17R2_bit at CAN1_F17R2.B30;
    sbit  FB31_CAN1_F17R2_bit at CAN1_F17R2.B31;

sfr unsigned long   volatile CAN1_F18R1           absolute 0x400066D0;
    sbit  FB0_CAN1_F18R1_bit at CAN1_F18R1.B0;
    sbit  FB1_CAN1_F18R1_bit at CAN1_F18R1.B1;
    sbit  FB2_CAN1_F18R1_bit at CAN1_F18R1.B2;
    sbit  FB3_CAN1_F18R1_bit at CAN1_F18R1.B3;
    sbit  FB4_CAN1_F18R1_bit at CAN1_F18R1.B4;
    sbit  FB5_CAN1_F18R1_bit at CAN1_F18R1.B5;
    sbit  FB6_CAN1_F18R1_bit at CAN1_F18R1.B6;
    sbit  FB7_CAN1_F18R1_bit at CAN1_F18R1.B7;
    sbit  FB8_CAN1_F18R1_bit at CAN1_F18R1.B8;
    sbit  FB9_CAN1_F18R1_bit at CAN1_F18R1.B9;
    sbit  FB10_CAN1_F18R1_bit at CAN1_F18R1.B10;
    sbit  FB11_CAN1_F18R1_bit at CAN1_F18R1.B11;
    sbit  FB12_CAN1_F18R1_bit at CAN1_F18R1.B12;
    sbit  FB13_CAN1_F18R1_bit at CAN1_F18R1.B13;
    sbit  FB14_CAN1_F18R1_bit at CAN1_F18R1.B14;
    sbit  FB15_CAN1_F18R1_bit at CAN1_F18R1.B15;
    sbit  FB16_CAN1_F18R1_bit at CAN1_F18R1.B16;
    sbit  FB17_CAN1_F18R1_bit at CAN1_F18R1.B17;
    sbit  FB18_CAN1_F18R1_bit at CAN1_F18R1.B18;
    sbit  FB19_CAN1_F18R1_bit at CAN1_F18R1.B19;
    sbit  FB20_CAN1_F18R1_bit at CAN1_F18R1.B20;
    sbit  FB21_CAN1_F18R1_bit at CAN1_F18R1.B21;
    sbit  FB22_CAN1_F18R1_bit at CAN1_F18R1.B22;
    sbit  FB23_CAN1_F18R1_bit at CAN1_F18R1.B23;
    sbit  FB24_CAN1_F18R1_bit at CAN1_F18R1.B24;
    sbit  FB25_CAN1_F18R1_bit at CAN1_F18R1.B25;
    sbit  FB26_CAN1_F18R1_bit at CAN1_F18R1.B26;
    sbit  FB27_CAN1_F18R1_bit at CAN1_F18R1.B27;
    sbit  FB28_CAN1_F18R1_bit at CAN1_F18R1.B28;
    sbit  FB29_CAN1_F18R1_bit at CAN1_F18R1.B29;
    sbit  FB30_CAN1_F18R1_bit at CAN1_F18R1.B30;
    sbit  FB31_CAN1_F18R1_bit at CAN1_F18R1.B31;

sfr unsigned long   volatile CAN1_F18R2           absolute 0x400066D4;
    sbit  FB0_CAN1_F18R2_bit at CAN1_F18R2.B0;
    sbit  FB1_CAN1_F18R2_bit at CAN1_F18R2.B1;
    sbit  FB2_CAN1_F18R2_bit at CAN1_F18R2.B2;
    sbit  FB3_CAN1_F18R2_bit at CAN1_F18R2.B3;
    sbit  FB4_CAN1_F18R2_bit at CAN1_F18R2.B4;
    sbit  FB5_CAN1_F18R2_bit at CAN1_F18R2.B5;
    sbit  FB6_CAN1_F18R2_bit at CAN1_F18R2.B6;
    sbit  FB7_CAN1_F18R2_bit at CAN1_F18R2.B7;
    sbit  FB8_CAN1_F18R2_bit at CAN1_F18R2.B8;
    sbit  FB9_CAN1_F18R2_bit at CAN1_F18R2.B9;
    sbit  FB10_CAN1_F18R2_bit at CAN1_F18R2.B10;
    sbit  FB11_CAN1_F18R2_bit at CAN1_F18R2.B11;
    sbit  FB12_CAN1_F18R2_bit at CAN1_F18R2.B12;
    sbit  FB13_CAN1_F18R2_bit at CAN1_F18R2.B13;
    sbit  FB14_CAN1_F18R2_bit at CAN1_F18R2.B14;
    sbit  FB15_CAN1_F18R2_bit at CAN1_F18R2.B15;
    sbit  FB16_CAN1_F18R2_bit at CAN1_F18R2.B16;
    sbit  FB17_CAN1_F18R2_bit at CAN1_F18R2.B17;
    sbit  FB18_CAN1_F18R2_bit at CAN1_F18R2.B18;
    sbit  FB19_CAN1_F18R2_bit at CAN1_F18R2.B19;
    sbit  FB20_CAN1_F18R2_bit at CAN1_F18R2.B20;
    sbit  FB21_CAN1_F18R2_bit at CAN1_F18R2.B21;
    sbit  FB22_CAN1_F18R2_bit at CAN1_F18R2.B22;
    sbit  FB23_CAN1_F18R2_bit at CAN1_F18R2.B23;
    sbit  FB24_CAN1_F18R2_bit at CAN1_F18R2.B24;
    sbit  FB25_CAN1_F18R2_bit at CAN1_F18R2.B25;
    sbit  FB26_CAN1_F18R2_bit at CAN1_F18R2.B26;
    sbit  FB27_CAN1_F18R2_bit at CAN1_F18R2.B27;
    sbit  FB28_CAN1_F18R2_bit at CAN1_F18R2.B28;
    sbit  FB29_CAN1_F18R2_bit at CAN1_F18R2.B29;
    sbit  FB30_CAN1_F18R2_bit at CAN1_F18R2.B30;
    sbit  FB31_CAN1_F18R2_bit at CAN1_F18R2.B31;

sfr unsigned long   volatile CAN1_F19R1           absolute 0x400066D8;
    sbit  FB0_CAN1_F19R1_bit at CAN1_F19R1.B0;
    sbit  FB1_CAN1_F19R1_bit at CAN1_F19R1.B1;
    sbit  FB2_CAN1_F19R1_bit at CAN1_F19R1.B2;
    sbit  FB3_CAN1_F19R1_bit at CAN1_F19R1.B3;
    sbit  FB4_CAN1_F19R1_bit at CAN1_F19R1.B4;
    sbit  FB5_CAN1_F19R1_bit at CAN1_F19R1.B5;
    sbit  FB6_CAN1_F19R1_bit at CAN1_F19R1.B6;
    sbit  FB7_CAN1_F19R1_bit at CAN1_F19R1.B7;
    sbit  FB8_CAN1_F19R1_bit at CAN1_F19R1.B8;
    sbit  FB9_CAN1_F19R1_bit at CAN1_F19R1.B9;
    sbit  FB10_CAN1_F19R1_bit at CAN1_F19R1.B10;
    sbit  FB11_CAN1_F19R1_bit at CAN1_F19R1.B11;
    sbit  FB12_CAN1_F19R1_bit at CAN1_F19R1.B12;
    sbit  FB13_CAN1_F19R1_bit at CAN1_F19R1.B13;
    sbit  FB14_CAN1_F19R1_bit at CAN1_F19R1.B14;
    sbit  FB15_CAN1_F19R1_bit at CAN1_F19R1.B15;
    sbit  FB16_CAN1_F19R1_bit at CAN1_F19R1.B16;
    sbit  FB17_CAN1_F19R1_bit at CAN1_F19R1.B17;
    sbit  FB18_CAN1_F19R1_bit at CAN1_F19R1.B18;
    sbit  FB19_CAN1_F19R1_bit at CAN1_F19R1.B19;
    sbit  FB20_CAN1_F19R1_bit at CAN1_F19R1.B20;
    sbit  FB21_CAN1_F19R1_bit at CAN1_F19R1.B21;
    sbit  FB22_CAN1_F19R1_bit at CAN1_F19R1.B22;
    sbit  FB23_CAN1_F19R1_bit at CAN1_F19R1.B23;
    sbit  FB24_CAN1_F19R1_bit at CAN1_F19R1.B24;
    sbit  FB25_CAN1_F19R1_bit at CAN1_F19R1.B25;
    sbit  FB26_CAN1_F19R1_bit at CAN1_F19R1.B26;
    sbit  FB27_CAN1_F19R1_bit at CAN1_F19R1.B27;
    sbit  FB28_CAN1_F19R1_bit at CAN1_F19R1.B28;
    sbit  FB29_CAN1_F19R1_bit at CAN1_F19R1.B29;
    sbit  FB30_CAN1_F19R1_bit at CAN1_F19R1.B30;
    sbit  FB31_CAN1_F19R1_bit at CAN1_F19R1.B31;

sfr unsigned long   volatile CAN1_F19R2           absolute 0x400066DC;
    sbit  FB0_CAN1_F19R2_bit at CAN1_F19R2.B0;
    sbit  FB1_CAN1_F19R2_bit at CAN1_F19R2.B1;
    sbit  FB2_CAN1_F19R2_bit at CAN1_F19R2.B2;
    sbit  FB3_CAN1_F19R2_bit at CAN1_F19R2.B3;
    sbit  FB4_CAN1_F19R2_bit at CAN1_F19R2.B4;
    sbit  FB5_CAN1_F19R2_bit at CAN1_F19R2.B5;
    sbit  FB6_CAN1_F19R2_bit at CAN1_F19R2.B6;
    sbit  FB7_CAN1_F19R2_bit at CAN1_F19R2.B7;
    sbit  FB8_CAN1_F19R2_bit at CAN1_F19R2.B8;
    sbit  FB9_CAN1_F19R2_bit at CAN1_F19R2.B9;
    sbit  FB10_CAN1_F19R2_bit at CAN1_F19R2.B10;
    sbit  FB11_CAN1_F19R2_bit at CAN1_F19R2.B11;
    sbit  FB12_CAN1_F19R2_bit at CAN1_F19R2.B12;
    sbit  FB13_CAN1_F19R2_bit at CAN1_F19R2.B13;
    sbit  FB14_CAN1_F19R2_bit at CAN1_F19R2.B14;
    sbit  FB15_CAN1_F19R2_bit at CAN1_F19R2.B15;
    sbit  FB16_CAN1_F19R2_bit at CAN1_F19R2.B16;
    sbit  FB17_CAN1_F19R2_bit at CAN1_F19R2.B17;
    sbit  FB18_CAN1_F19R2_bit at CAN1_F19R2.B18;
    sbit  FB19_CAN1_F19R2_bit at CAN1_F19R2.B19;
    sbit  FB20_CAN1_F19R2_bit at CAN1_F19R2.B20;
    sbit  FB21_CAN1_F19R2_bit at CAN1_F19R2.B21;
    sbit  FB22_CAN1_F19R2_bit at CAN1_F19R2.B22;
    sbit  FB23_CAN1_F19R2_bit at CAN1_F19R2.B23;
    sbit  FB24_CAN1_F19R2_bit at CAN1_F19R2.B24;
    sbit  FB25_CAN1_F19R2_bit at CAN1_F19R2.B25;
    sbit  FB26_CAN1_F19R2_bit at CAN1_F19R2.B26;
    sbit  FB27_CAN1_F19R2_bit at CAN1_F19R2.B27;
    sbit  FB28_CAN1_F19R2_bit at CAN1_F19R2.B28;
    sbit  FB29_CAN1_F19R2_bit at CAN1_F19R2.B29;
    sbit  FB30_CAN1_F19R2_bit at CAN1_F19R2.B30;
    sbit  FB31_CAN1_F19R2_bit at CAN1_F19R2.B31;

sfr unsigned long   volatile CAN1_F20R1           absolute 0x400066E0;
    sbit  FB0_CAN1_F20R1_bit at CAN1_F20R1.B0;
    sbit  FB1_CAN1_F20R1_bit at CAN1_F20R1.B1;
    sbit  FB2_CAN1_F20R1_bit at CAN1_F20R1.B2;
    sbit  FB3_CAN1_F20R1_bit at CAN1_F20R1.B3;
    sbit  FB4_CAN1_F20R1_bit at CAN1_F20R1.B4;
    sbit  FB5_CAN1_F20R1_bit at CAN1_F20R1.B5;
    sbit  FB6_CAN1_F20R1_bit at CAN1_F20R1.B6;
    sbit  FB7_CAN1_F20R1_bit at CAN1_F20R1.B7;
    sbit  FB8_CAN1_F20R1_bit at CAN1_F20R1.B8;
    sbit  FB9_CAN1_F20R1_bit at CAN1_F20R1.B9;
    sbit  FB10_CAN1_F20R1_bit at CAN1_F20R1.B10;
    sbit  FB11_CAN1_F20R1_bit at CAN1_F20R1.B11;
    sbit  FB12_CAN1_F20R1_bit at CAN1_F20R1.B12;
    sbit  FB13_CAN1_F20R1_bit at CAN1_F20R1.B13;
    sbit  FB14_CAN1_F20R1_bit at CAN1_F20R1.B14;
    sbit  FB15_CAN1_F20R1_bit at CAN1_F20R1.B15;
    sbit  FB16_CAN1_F20R1_bit at CAN1_F20R1.B16;
    sbit  FB17_CAN1_F20R1_bit at CAN1_F20R1.B17;
    sbit  FB18_CAN1_F20R1_bit at CAN1_F20R1.B18;
    sbit  FB19_CAN1_F20R1_bit at CAN1_F20R1.B19;
    sbit  FB20_CAN1_F20R1_bit at CAN1_F20R1.B20;
    sbit  FB21_CAN1_F20R1_bit at CAN1_F20R1.B21;
    sbit  FB22_CAN1_F20R1_bit at CAN1_F20R1.B22;
    sbit  FB23_CAN1_F20R1_bit at CAN1_F20R1.B23;
    sbit  FB24_CAN1_F20R1_bit at CAN1_F20R1.B24;
    sbit  FB25_CAN1_F20R1_bit at CAN1_F20R1.B25;
    sbit  FB26_CAN1_F20R1_bit at CAN1_F20R1.B26;
    sbit  FB27_CAN1_F20R1_bit at CAN1_F20R1.B27;
    sbit  FB28_CAN1_F20R1_bit at CAN1_F20R1.B28;
    sbit  FB29_CAN1_F20R1_bit at CAN1_F20R1.B29;
    sbit  FB30_CAN1_F20R1_bit at CAN1_F20R1.B30;
    sbit  FB31_CAN1_F20R1_bit at CAN1_F20R1.B31;

sfr unsigned long   volatile CAN1_F20R2           absolute 0x400066E4;
    sbit  FB0_CAN1_F20R2_bit at CAN1_F20R2.B0;
    sbit  FB1_CAN1_F20R2_bit at CAN1_F20R2.B1;
    sbit  FB2_CAN1_F20R2_bit at CAN1_F20R2.B2;
    sbit  FB3_CAN1_F20R2_bit at CAN1_F20R2.B3;
    sbit  FB4_CAN1_F20R2_bit at CAN1_F20R2.B4;
    sbit  FB5_CAN1_F20R2_bit at CAN1_F20R2.B5;
    sbit  FB6_CAN1_F20R2_bit at CAN1_F20R2.B6;
    sbit  FB7_CAN1_F20R2_bit at CAN1_F20R2.B7;
    sbit  FB8_CAN1_F20R2_bit at CAN1_F20R2.B8;
    sbit  FB9_CAN1_F20R2_bit at CAN1_F20R2.B9;
    sbit  FB10_CAN1_F20R2_bit at CAN1_F20R2.B10;
    sbit  FB11_CAN1_F20R2_bit at CAN1_F20R2.B11;
    sbit  FB12_CAN1_F20R2_bit at CAN1_F20R2.B12;
    sbit  FB13_CAN1_F20R2_bit at CAN1_F20R2.B13;
    sbit  FB14_CAN1_F20R2_bit at CAN1_F20R2.B14;
    sbit  FB15_CAN1_F20R2_bit at CAN1_F20R2.B15;
    sbit  FB16_CAN1_F20R2_bit at CAN1_F20R2.B16;
    sbit  FB17_CAN1_F20R2_bit at CAN1_F20R2.B17;
    sbit  FB18_CAN1_F20R2_bit at CAN1_F20R2.B18;
    sbit  FB19_CAN1_F20R2_bit at CAN1_F20R2.B19;
    sbit  FB20_CAN1_F20R2_bit at CAN1_F20R2.B20;
    sbit  FB21_CAN1_F20R2_bit at CAN1_F20R2.B21;
    sbit  FB22_CAN1_F20R2_bit at CAN1_F20R2.B22;
    sbit  FB23_CAN1_F20R2_bit at CAN1_F20R2.B23;
    sbit  FB24_CAN1_F20R2_bit at CAN1_F20R2.B24;
    sbit  FB25_CAN1_F20R2_bit at CAN1_F20R2.B25;
    sbit  FB26_CAN1_F20R2_bit at CAN1_F20R2.B26;
    sbit  FB27_CAN1_F20R2_bit at CAN1_F20R2.B27;
    sbit  FB28_CAN1_F20R2_bit at CAN1_F20R2.B28;
    sbit  FB29_CAN1_F20R2_bit at CAN1_F20R2.B29;
    sbit  FB30_CAN1_F20R2_bit at CAN1_F20R2.B30;
    sbit  FB31_CAN1_F20R2_bit at CAN1_F20R2.B31;

sfr unsigned long   volatile CAN1_F21R1           absolute 0x400066E8;
    sbit  FB0_CAN1_F21R1_bit at CAN1_F21R1.B0;
    sbit  FB1_CAN1_F21R1_bit at CAN1_F21R1.B1;
    sbit  FB2_CAN1_F21R1_bit at CAN1_F21R1.B2;
    sbit  FB3_CAN1_F21R1_bit at CAN1_F21R1.B3;
    sbit  FB4_CAN1_F21R1_bit at CAN1_F21R1.B4;
    sbit  FB5_CAN1_F21R1_bit at CAN1_F21R1.B5;
    sbit  FB6_CAN1_F21R1_bit at CAN1_F21R1.B6;
    sbit  FB7_CAN1_F21R1_bit at CAN1_F21R1.B7;
    sbit  FB8_CAN1_F21R1_bit at CAN1_F21R1.B8;
    sbit  FB9_CAN1_F21R1_bit at CAN1_F21R1.B9;
    sbit  FB10_CAN1_F21R1_bit at CAN1_F21R1.B10;
    sbit  FB11_CAN1_F21R1_bit at CAN1_F21R1.B11;
    sbit  FB12_CAN1_F21R1_bit at CAN1_F21R1.B12;
    sbit  FB13_CAN1_F21R1_bit at CAN1_F21R1.B13;
    sbit  FB14_CAN1_F21R1_bit at CAN1_F21R1.B14;
    sbit  FB15_CAN1_F21R1_bit at CAN1_F21R1.B15;
    sbit  FB16_CAN1_F21R1_bit at CAN1_F21R1.B16;
    sbit  FB17_CAN1_F21R1_bit at CAN1_F21R1.B17;
    sbit  FB18_CAN1_F21R1_bit at CAN1_F21R1.B18;
    sbit  FB19_CAN1_F21R1_bit at CAN1_F21R1.B19;
    sbit  FB20_CAN1_F21R1_bit at CAN1_F21R1.B20;
    sbit  FB21_CAN1_F21R1_bit at CAN1_F21R1.B21;
    sbit  FB22_CAN1_F21R1_bit at CAN1_F21R1.B22;
    sbit  FB23_CAN1_F21R1_bit at CAN1_F21R1.B23;
    sbit  FB24_CAN1_F21R1_bit at CAN1_F21R1.B24;
    sbit  FB25_CAN1_F21R1_bit at CAN1_F21R1.B25;
    sbit  FB26_CAN1_F21R1_bit at CAN1_F21R1.B26;
    sbit  FB27_CAN1_F21R1_bit at CAN1_F21R1.B27;
    sbit  FB28_CAN1_F21R1_bit at CAN1_F21R1.B28;
    sbit  FB29_CAN1_F21R1_bit at CAN1_F21R1.B29;
    sbit  FB30_CAN1_F21R1_bit at CAN1_F21R1.B30;
    sbit  FB31_CAN1_F21R1_bit at CAN1_F21R1.B31;

sfr unsigned long   volatile CAN1_F21R2           absolute 0x400066EC;
    sbit  FB0_CAN1_F21R2_bit at CAN1_F21R2.B0;
    sbit  FB1_CAN1_F21R2_bit at CAN1_F21R2.B1;
    sbit  FB2_CAN1_F21R2_bit at CAN1_F21R2.B2;
    sbit  FB3_CAN1_F21R2_bit at CAN1_F21R2.B3;
    sbit  FB4_CAN1_F21R2_bit at CAN1_F21R2.B4;
    sbit  FB5_CAN1_F21R2_bit at CAN1_F21R2.B5;
    sbit  FB6_CAN1_F21R2_bit at CAN1_F21R2.B6;
    sbit  FB7_CAN1_F21R2_bit at CAN1_F21R2.B7;
    sbit  FB8_CAN1_F21R2_bit at CAN1_F21R2.B8;
    sbit  FB9_CAN1_F21R2_bit at CAN1_F21R2.B9;
    sbit  FB10_CAN1_F21R2_bit at CAN1_F21R2.B10;
    sbit  FB11_CAN1_F21R2_bit at CAN1_F21R2.B11;
    sbit  FB12_CAN1_F21R2_bit at CAN1_F21R2.B12;
    sbit  FB13_CAN1_F21R2_bit at CAN1_F21R2.B13;
    sbit  FB14_CAN1_F21R2_bit at CAN1_F21R2.B14;
    sbit  FB15_CAN1_F21R2_bit at CAN1_F21R2.B15;
    sbit  FB16_CAN1_F21R2_bit at CAN1_F21R2.B16;
    sbit  FB17_CAN1_F21R2_bit at CAN1_F21R2.B17;
    sbit  FB18_CAN1_F21R2_bit at CAN1_F21R2.B18;
    sbit  FB19_CAN1_F21R2_bit at CAN1_F21R2.B19;
    sbit  FB20_CAN1_F21R2_bit at CAN1_F21R2.B20;
    sbit  FB21_CAN1_F21R2_bit at CAN1_F21R2.B21;
    sbit  FB22_CAN1_F21R2_bit at CAN1_F21R2.B22;
    sbit  FB23_CAN1_F21R2_bit at CAN1_F21R2.B23;
    sbit  FB24_CAN1_F21R2_bit at CAN1_F21R2.B24;
    sbit  FB25_CAN1_F21R2_bit at CAN1_F21R2.B25;
    sbit  FB26_CAN1_F21R2_bit at CAN1_F21R2.B26;
    sbit  FB27_CAN1_F21R2_bit at CAN1_F21R2.B27;
    sbit  FB28_CAN1_F21R2_bit at CAN1_F21R2.B28;
    sbit  FB29_CAN1_F21R2_bit at CAN1_F21R2.B29;
    sbit  FB30_CAN1_F21R2_bit at CAN1_F21R2.B30;
    sbit  FB31_CAN1_F21R2_bit at CAN1_F21R2.B31;

sfr unsigned long   volatile CAN1_F22R1           absolute 0x400066F0;
    sbit  FB0_CAN1_F22R1_bit at CAN1_F22R1.B0;
    sbit  FB1_CAN1_F22R1_bit at CAN1_F22R1.B1;
    sbit  FB2_CAN1_F22R1_bit at CAN1_F22R1.B2;
    sbit  FB3_CAN1_F22R1_bit at CAN1_F22R1.B3;
    sbit  FB4_CAN1_F22R1_bit at CAN1_F22R1.B4;
    sbit  FB5_CAN1_F22R1_bit at CAN1_F22R1.B5;
    sbit  FB6_CAN1_F22R1_bit at CAN1_F22R1.B6;
    sbit  FB7_CAN1_F22R1_bit at CAN1_F22R1.B7;
    sbit  FB8_CAN1_F22R1_bit at CAN1_F22R1.B8;
    sbit  FB9_CAN1_F22R1_bit at CAN1_F22R1.B9;
    sbit  FB10_CAN1_F22R1_bit at CAN1_F22R1.B10;
    sbit  FB11_CAN1_F22R1_bit at CAN1_F22R1.B11;
    sbit  FB12_CAN1_F22R1_bit at CAN1_F22R1.B12;
    sbit  FB13_CAN1_F22R1_bit at CAN1_F22R1.B13;
    sbit  FB14_CAN1_F22R1_bit at CAN1_F22R1.B14;
    sbit  FB15_CAN1_F22R1_bit at CAN1_F22R1.B15;
    sbit  FB16_CAN1_F22R1_bit at CAN1_F22R1.B16;
    sbit  FB17_CAN1_F22R1_bit at CAN1_F22R1.B17;
    sbit  FB18_CAN1_F22R1_bit at CAN1_F22R1.B18;
    sbit  FB19_CAN1_F22R1_bit at CAN1_F22R1.B19;
    sbit  FB20_CAN1_F22R1_bit at CAN1_F22R1.B20;
    sbit  FB21_CAN1_F22R1_bit at CAN1_F22R1.B21;
    sbit  FB22_CAN1_F22R1_bit at CAN1_F22R1.B22;
    sbit  FB23_CAN1_F22R1_bit at CAN1_F22R1.B23;
    sbit  FB24_CAN1_F22R1_bit at CAN1_F22R1.B24;
    sbit  FB25_CAN1_F22R1_bit at CAN1_F22R1.B25;
    sbit  FB26_CAN1_F22R1_bit at CAN1_F22R1.B26;
    sbit  FB27_CAN1_F22R1_bit at CAN1_F22R1.B27;
    sbit  FB28_CAN1_F22R1_bit at CAN1_F22R1.B28;
    sbit  FB29_CAN1_F22R1_bit at CAN1_F22R1.B29;
    sbit  FB30_CAN1_F22R1_bit at CAN1_F22R1.B30;
    sbit  FB31_CAN1_F22R1_bit at CAN1_F22R1.B31;

sfr unsigned long   volatile CAN1_F22R2           absolute 0x400066F4;
    sbit  FB0_CAN1_F22R2_bit at CAN1_F22R2.B0;
    sbit  FB1_CAN1_F22R2_bit at CAN1_F22R2.B1;
    sbit  FB2_CAN1_F22R2_bit at CAN1_F22R2.B2;
    sbit  FB3_CAN1_F22R2_bit at CAN1_F22R2.B3;
    sbit  FB4_CAN1_F22R2_bit at CAN1_F22R2.B4;
    sbit  FB5_CAN1_F22R2_bit at CAN1_F22R2.B5;
    sbit  FB6_CAN1_F22R2_bit at CAN1_F22R2.B6;
    sbit  FB7_CAN1_F22R2_bit at CAN1_F22R2.B7;
    sbit  FB8_CAN1_F22R2_bit at CAN1_F22R2.B8;
    sbit  FB9_CAN1_F22R2_bit at CAN1_F22R2.B9;
    sbit  FB10_CAN1_F22R2_bit at CAN1_F22R2.B10;
    sbit  FB11_CAN1_F22R2_bit at CAN1_F22R2.B11;
    sbit  FB12_CAN1_F22R2_bit at CAN1_F22R2.B12;
    sbit  FB13_CAN1_F22R2_bit at CAN1_F22R2.B13;
    sbit  FB14_CAN1_F22R2_bit at CAN1_F22R2.B14;
    sbit  FB15_CAN1_F22R2_bit at CAN1_F22R2.B15;
    sbit  FB16_CAN1_F22R2_bit at CAN1_F22R2.B16;
    sbit  FB17_CAN1_F22R2_bit at CAN1_F22R2.B17;
    sbit  FB18_CAN1_F22R2_bit at CAN1_F22R2.B18;
    sbit  FB19_CAN1_F22R2_bit at CAN1_F22R2.B19;
    sbit  FB20_CAN1_F22R2_bit at CAN1_F22R2.B20;
    sbit  FB21_CAN1_F22R2_bit at CAN1_F22R2.B21;
    sbit  FB22_CAN1_F22R2_bit at CAN1_F22R2.B22;
    sbit  FB23_CAN1_F22R2_bit at CAN1_F22R2.B23;
    sbit  FB24_CAN1_F22R2_bit at CAN1_F22R2.B24;
    sbit  FB25_CAN1_F22R2_bit at CAN1_F22R2.B25;
    sbit  FB26_CAN1_F22R2_bit at CAN1_F22R2.B26;
    sbit  FB27_CAN1_F22R2_bit at CAN1_F22R2.B27;
    sbit  FB28_CAN1_F22R2_bit at CAN1_F22R2.B28;
    sbit  FB29_CAN1_F22R2_bit at CAN1_F22R2.B29;
    sbit  FB30_CAN1_F22R2_bit at CAN1_F22R2.B30;
    sbit  FB31_CAN1_F22R2_bit at CAN1_F22R2.B31;

sfr unsigned long   volatile CAN1_F23R1           absolute 0x400066F8;
    sbit  FB0_CAN1_F23R1_bit at CAN1_F23R1.B0;
    sbit  FB1_CAN1_F23R1_bit at CAN1_F23R1.B1;
    sbit  FB2_CAN1_F23R1_bit at CAN1_F23R1.B2;
    sbit  FB3_CAN1_F23R1_bit at CAN1_F23R1.B3;
    sbit  FB4_CAN1_F23R1_bit at CAN1_F23R1.B4;
    sbit  FB5_CAN1_F23R1_bit at CAN1_F23R1.B5;
    sbit  FB6_CAN1_F23R1_bit at CAN1_F23R1.B6;
    sbit  FB7_CAN1_F23R1_bit at CAN1_F23R1.B7;
    sbit  FB8_CAN1_F23R1_bit at CAN1_F23R1.B8;
    sbit  FB9_CAN1_F23R1_bit at CAN1_F23R1.B9;
    sbit  FB10_CAN1_F23R1_bit at CAN1_F23R1.B10;
    sbit  FB11_CAN1_F23R1_bit at CAN1_F23R1.B11;
    sbit  FB12_CAN1_F23R1_bit at CAN1_F23R1.B12;
    sbit  FB13_CAN1_F23R1_bit at CAN1_F23R1.B13;
    sbit  FB14_CAN1_F23R1_bit at CAN1_F23R1.B14;
    sbit  FB15_CAN1_F23R1_bit at CAN1_F23R1.B15;
    sbit  FB16_CAN1_F23R1_bit at CAN1_F23R1.B16;
    sbit  FB17_CAN1_F23R1_bit at CAN1_F23R1.B17;
    sbit  FB18_CAN1_F23R1_bit at CAN1_F23R1.B18;
    sbit  FB19_CAN1_F23R1_bit at CAN1_F23R1.B19;
    sbit  FB20_CAN1_F23R1_bit at CAN1_F23R1.B20;
    sbit  FB21_CAN1_F23R1_bit at CAN1_F23R1.B21;
    sbit  FB22_CAN1_F23R1_bit at CAN1_F23R1.B22;
    sbit  FB23_CAN1_F23R1_bit at CAN1_F23R1.B23;
    sbit  FB24_CAN1_F23R1_bit at CAN1_F23R1.B24;
    sbit  FB25_CAN1_F23R1_bit at CAN1_F23R1.B25;
    sbit  FB26_CAN1_F23R1_bit at CAN1_F23R1.B26;
    sbit  FB27_CAN1_F23R1_bit at CAN1_F23R1.B27;
    sbit  FB28_CAN1_F23R1_bit at CAN1_F23R1.B28;
    sbit  FB29_CAN1_F23R1_bit at CAN1_F23R1.B29;
    sbit  FB30_CAN1_F23R1_bit at CAN1_F23R1.B30;
    sbit  FB31_CAN1_F23R1_bit at CAN1_F23R1.B31;

sfr unsigned long   volatile CAN1_F23R2           absolute 0x400066FC;
    sbit  FB0_CAN1_F23R2_bit at CAN1_F23R2.B0;
    sbit  FB1_CAN1_F23R2_bit at CAN1_F23R2.B1;
    sbit  FB2_CAN1_F23R2_bit at CAN1_F23R2.B2;
    sbit  FB3_CAN1_F23R2_bit at CAN1_F23R2.B3;
    sbit  FB4_CAN1_F23R2_bit at CAN1_F23R2.B4;
    sbit  FB5_CAN1_F23R2_bit at CAN1_F23R2.B5;
    sbit  FB6_CAN1_F23R2_bit at CAN1_F23R2.B6;
    sbit  FB7_CAN1_F23R2_bit at CAN1_F23R2.B7;
    sbit  FB8_CAN1_F23R2_bit at CAN1_F23R2.B8;
    sbit  FB9_CAN1_F23R2_bit at CAN1_F23R2.B9;
    sbit  FB10_CAN1_F23R2_bit at CAN1_F23R2.B10;
    sbit  FB11_CAN1_F23R2_bit at CAN1_F23R2.B11;
    sbit  FB12_CAN1_F23R2_bit at CAN1_F23R2.B12;
    sbit  FB13_CAN1_F23R2_bit at CAN1_F23R2.B13;
    sbit  FB14_CAN1_F23R2_bit at CAN1_F23R2.B14;
    sbit  FB15_CAN1_F23R2_bit at CAN1_F23R2.B15;
    sbit  FB16_CAN1_F23R2_bit at CAN1_F23R2.B16;
    sbit  FB17_CAN1_F23R2_bit at CAN1_F23R2.B17;
    sbit  FB18_CAN1_F23R2_bit at CAN1_F23R2.B18;
    sbit  FB19_CAN1_F23R2_bit at CAN1_F23R2.B19;
    sbit  FB20_CAN1_F23R2_bit at CAN1_F23R2.B20;
    sbit  FB21_CAN1_F23R2_bit at CAN1_F23R2.B21;
    sbit  FB22_CAN1_F23R2_bit at CAN1_F23R2.B22;
    sbit  FB23_CAN1_F23R2_bit at CAN1_F23R2.B23;
    sbit  FB24_CAN1_F23R2_bit at CAN1_F23R2.B24;
    sbit  FB25_CAN1_F23R2_bit at CAN1_F23R2.B25;
    sbit  FB26_CAN1_F23R2_bit at CAN1_F23R2.B26;
    sbit  FB27_CAN1_F23R2_bit at CAN1_F23R2.B27;
    sbit  FB28_CAN1_F23R2_bit at CAN1_F23R2.B28;
    sbit  FB29_CAN1_F23R2_bit at CAN1_F23R2.B29;
    sbit  FB30_CAN1_F23R2_bit at CAN1_F23R2.B30;
    sbit  FB31_CAN1_F23R2_bit at CAN1_F23R2.B31;

sfr unsigned long   volatile CAN1_F24R1           absolute 0x40006700;
    sbit  FB0_CAN1_F24R1_bit at CAN1_F24R1.B0;
    sbit  FB1_CAN1_F24R1_bit at CAN1_F24R1.B1;
    sbit  FB2_CAN1_F24R1_bit at CAN1_F24R1.B2;
    sbit  FB3_CAN1_F24R1_bit at CAN1_F24R1.B3;
    sbit  FB4_CAN1_F24R1_bit at CAN1_F24R1.B4;
    sbit  FB5_CAN1_F24R1_bit at CAN1_F24R1.B5;
    sbit  FB6_CAN1_F24R1_bit at CAN1_F24R1.B6;
    sbit  FB7_CAN1_F24R1_bit at CAN1_F24R1.B7;
    sbit  FB8_CAN1_F24R1_bit at CAN1_F24R1.B8;
    sbit  FB9_CAN1_F24R1_bit at CAN1_F24R1.B9;
    sbit  FB10_CAN1_F24R1_bit at CAN1_F24R1.B10;
    sbit  FB11_CAN1_F24R1_bit at CAN1_F24R1.B11;
    sbit  FB12_CAN1_F24R1_bit at CAN1_F24R1.B12;
    sbit  FB13_CAN1_F24R1_bit at CAN1_F24R1.B13;
    sbit  FB14_CAN1_F24R1_bit at CAN1_F24R1.B14;
    sbit  FB15_CAN1_F24R1_bit at CAN1_F24R1.B15;
    sbit  FB16_CAN1_F24R1_bit at CAN1_F24R1.B16;
    sbit  FB17_CAN1_F24R1_bit at CAN1_F24R1.B17;
    sbit  FB18_CAN1_F24R1_bit at CAN1_F24R1.B18;
    sbit  FB19_CAN1_F24R1_bit at CAN1_F24R1.B19;
    sbit  FB20_CAN1_F24R1_bit at CAN1_F24R1.B20;
    sbit  FB21_CAN1_F24R1_bit at CAN1_F24R1.B21;
    sbit  FB22_CAN1_F24R1_bit at CAN1_F24R1.B22;
    sbit  FB23_CAN1_F24R1_bit at CAN1_F24R1.B23;
    sbit  FB24_CAN1_F24R1_bit at CAN1_F24R1.B24;
    sbit  FB25_CAN1_F24R1_bit at CAN1_F24R1.B25;
    sbit  FB26_CAN1_F24R1_bit at CAN1_F24R1.B26;
    sbit  FB27_CAN1_F24R1_bit at CAN1_F24R1.B27;
    sbit  FB28_CAN1_F24R1_bit at CAN1_F24R1.B28;
    sbit  FB29_CAN1_F24R1_bit at CAN1_F24R1.B29;
    sbit  FB30_CAN1_F24R1_bit at CAN1_F24R1.B30;
    sbit  FB31_CAN1_F24R1_bit at CAN1_F24R1.B31;

sfr unsigned long   volatile CAN1_F24R2           absolute 0x40006704;
    sbit  FB0_CAN1_F24R2_bit at CAN1_F24R2.B0;
    sbit  FB1_CAN1_F24R2_bit at CAN1_F24R2.B1;
    sbit  FB2_CAN1_F24R2_bit at CAN1_F24R2.B2;
    sbit  FB3_CAN1_F24R2_bit at CAN1_F24R2.B3;
    sbit  FB4_CAN1_F24R2_bit at CAN1_F24R2.B4;
    sbit  FB5_CAN1_F24R2_bit at CAN1_F24R2.B5;
    sbit  FB6_CAN1_F24R2_bit at CAN1_F24R2.B6;
    sbit  FB7_CAN1_F24R2_bit at CAN1_F24R2.B7;
    sbit  FB8_CAN1_F24R2_bit at CAN1_F24R2.B8;
    sbit  FB9_CAN1_F24R2_bit at CAN1_F24R2.B9;
    sbit  FB10_CAN1_F24R2_bit at CAN1_F24R2.B10;
    sbit  FB11_CAN1_F24R2_bit at CAN1_F24R2.B11;
    sbit  FB12_CAN1_F24R2_bit at CAN1_F24R2.B12;
    sbit  FB13_CAN1_F24R2_bit at CAN1_F24R2.B13;
    sbit  FB14_CAN1_F24R2_bit at CAN1_F24R2.B14;
    sbit  FB15_CAN1_F24R2_bit at CAN1_F24R2.B15;
    sbit  FB16_CAN1_F24R2_bit at CAN1_F24R2.B16;
    sbit  FB17_CAN1_F24R2_bit at CAN1_F24R2.B17;
    sbit  FB18_CAN1_F24R2_bit at CAN1_F24R2.B18;
    sbit  FB19_CAN1_F24R2_bit at CAN1_F24R2.B19;
    sbit  FB20_CAN1_F24R2_bit at CAN1_F24R2.B20;
    sbit  FB21_CAN1_F24R2_bit at CAN1_F24R2.B21;
    sbit  FB22_CAN1_F24R2_bit at CAN1_F24R2.B22;
    sbit  FB23_CAN1_F24R2_bit at CAN1_F24R2.B23;
    sbit  FB24_CAN1_F24R2_bit at CAN1_F24R2.B24;
    sbit  FB25_CAN1_F24R2_bit at CAN1_F24R2.B25;
    sbit  FB26_CAN1_F24R2_bit at CAN1_F24R2.B26;
    sbit  FB27_CAN1_F24R2_bit at CAN1_F24R2.B27;
    sbit  FB28_CAN1_F24R2_bit at CAN1_F24R2.B28;
    sbit  FB29_CAN1_F24R2_bit at CAN1_F24R2.B29;
    sbit  FB30_CAN1_F24R2_bit at CAN1_F24R2.B30;
    sbit  FB31_CAN1_F24R2_bit at CAN1_F24R2.B31;

sfr unsigned long   volatile CAN1_F25R1           absolute 0x40006708;
    sbit  FB0_CAN1_F25R1_bit at CAN1_F25R1.B0;
    sbit  FB1_CAN1_F25R1_bit at CAN1_F25R1.B1;
    sbit  FB2_CAN1_F25R1_bit at CAN1_F25R1.B2;
    sbit  FB3_CAN1_F25R1_bit at CAN1_F25R1.B3;
    sbit  FB4_CAN1_F25R1_bit at CAN1_F25R1.B4;
    sbit  FB5_CAN1_F25R1_bit at CAN1_F25R1.B5;
    sbit  FB6_CAN1_F25R1_bit at CAN1_F25R1.B6;
    sbit  FB7_CAN1_F25R1_bit at CAN1_F25R1.B7;
    sbit  FB8_CAN1_F25R1_bit at CAN1_F25R1.B8;
    sbit  FB9_CAN1_F25R1_bit at CAN1_F25R1.B9;
    sbit  FB10_CAN1_F25R1_bit at CAN1_F25R1.B10;
    sbit  FB11_CAN1_F25R1_bit at CAN1_F25R1.B11;
    sbit  FB12_CAN1_F25R1_bit at CAN1_F25R1.B12;
    sbit  FB13_CAN1_F25R1_bit at CAN1_F25R1.B13;
    sbit  FB14_CAN1_F25R1_bit at CAN1_F25R1.B14;
    sbit  FB15_CAN1_F25R1_bit at CAN1_F25R1.B15;
    sbit  FB16_CAN1_F25R1_bit at CAN1_F25R1.B16;
    sbit  FB17_CAN1_F25R1_bit at CAN1_F25R1.B17;
    sbit  FB18_CAN1_F25R1_bit at CAN1_F25R1.B18;
    sbit  FB19_CAN1_F25R1_bit at CAN1_F25R1.B19;
    sbit  FB20_CAN1_F25R1_bit at CAN1_F25R1.B20;
    sbit  FB21_CAN1_F25R1_bit at CAN1_F25R1.B21;
    sbit  FB22_CAN1_F25R1_bit at CAN1_F25R1.B22;
    sbit  FB23_CAN1_F25R1_bit at CAN1_F25R1.B23;
    sbit  FB24_CAN1_F25R1_bit at CAN1_F25R1.B24;
    sbit  FB25_CAN1_F25R1_bit at CAN1_F25R1.B25;
    sbit  FB26_CAN1_F25R1_bit at CAN1_F25R1.B26;
    sbit  FB27_CAN1_F25R1_bit at CAN1_F25R1.B27;
    sbit  FB28_CAN1_F25R1_bit at CAN1_F25R1.B28;
    sbit  FB29_CAN1_F25R1_bit at CAN1_F25R1.B29;
    sbit  FB30_CAN1_F25R1_bit at CAN1_F25R1.B30;
    sbit  FB31_CAN1_F25R1_bit at CAN1_F25R1.B31;

sfr unsigned long   volatile CAN1_F25R2           absolute 0x4000670C;
    sbit  FB0_CAN1_F25R2_bit at CAN1_F25R2.B0;
    sbit  FB1_CAN1_F25R2_bit at CAN1_F25R2.B1;
    sbit  FB2_CAN1_F25R2_bit at CAN1_F25R2.B2;
    sbit  FB3_CAN1_F25R2_bit at CAN1_F25R2.B3;
    sbit  FB4_CAN1_F25R2_bit at CAN1_F25R2.B4;
    sbit  FB5_CAN1_F25R2_bit at CAN1_F25R2.B5;
    sbit  FB6_CAN1_F25R2_bit at CAN1_F25R2.B6;
    sbit  FB7_CAN1_F25R2_bit at CAN1_F25R2.B7;
    sbit  FB8_CAN1_F25R2_bit at CAN1_F25R2.B8;
    sbit  FB9_CAN1_F25R2_bit at CAN1_F25R2.B9;
    sbit  FB10_CAN1_F25R2_bit at CAN1_F25R2.B10;
    sbit  FB11_CAN1_F25R2_bit at CAN1_F25R2.B11;
    sbit  FB12_CAN1_F25R2_bit at CAN1_F25R2.B12;
    sbit  FB13_CAN1_F25R2_bit at CAN1_F25R2.B13;
    sbit  FB14_CAN1_F25R2_bit at CAN1_F25R2.B14;
    sbit  FB15_CAN1_F25R2_bit at CAN1_F25R2.B15;
    sbit  FB16_CAN1_F25R2_bit at CAN1_F25R2.B16;
    sbit  FB17_CAN1_F25R2_bit at CAN1_F25R2.B17;
    sbit  FB18_CAN1_F25R2_bit at CAN1_F25R2.B18;
    sbit  FB19_CAN1_F25R2_bit at CAN1_F25R2.B19;
    sbit  FB20_CAN1_F25R2_bit at CAN1_F25R2.B20;
    sbit  FB21_CAN1_F25R2_bit at CAN1_F25R2.B21;
    sbit  FB22_CAN1_F25R2_bit at CAN1_F25R2.B22;
    sbit  FB23_CAN1_F25R2_bit at CAN1_F25R2.B23;
    sbit  FB24_CAN1_F25R2_bit at CAN1_F25R2.B24;
    sbit  FB25_CAN1_F25R2_bit at CAN1_F25R2.B25;
    sbit  FB26_CAN1_F25R2_bit at CAN1_F25R2.B26;
    sbit  FB27_CAN1_F25R2_bit at CAN1_F25R2.B27;
    sbit  FB28_CAN1_F25R2_bit at CAN1_F25R2.B28;
    sbit  FB29_CAN1_F25R2_bit at CAN1_F25R2.B29;
    sbit  FB30_CAN1_F25R2_bit at CAN1_F25R2.B30;
    sbit  FB31_CAN1_F25R2_bit at CAN1_F25R2.B31;

sfr unsigned long   volatile CAN1_F26R1           absolute 0x40006710;
    sbit  FB0_CAN1_F26R1_bit at CAN1_F26R1.B0;
    sbit  FB1_CAN1_F26R1_bit at CAN1_F26R1.B1;
    sbit  FB2_CAN1_F26R1_bit at CAN1_F26R1.B2;
    sbit  FB3_CAN1_F26R1_bit at CAN1_F26R1.B3;
    sbit  FB4_CAN1_F26R1_bit at CAN1_F26R1.B4;
    sbit  FB5_CAN1_F26R1_bit at CAN1_F26R1.B5;
    sbit  FB6_CAN1_F26R1_bit at CAN1_F26R1.B6;
    sbit  FB7_CAN1_F26R1_bit at CAN1_F26R1.B7;
    sbit  FB8_CAN1_F26R1_bit at CAN1_F26R1.B8;
    sbit  FB9_CAN1_F26R1_bit at CAN1_F26R1.B9;
    sbit  FB10_CAN1_F26R1_bit at CAN1_F26R1.B10;
    sbit  FB11_CAN1_F26R1_bit at CAN1_F26R1.B11;
    sbit  FB12_CAN1_F26R1_bit at CAN1_F26R1.B12;
    sbit  FB13_CAN1_F26R1_bit at CAN1_F26R1.B13;
    sbit  FB14_CAN1_F26R1_bit at CAN1_F26R1.B14;
    sbit  FB15_CAN1_F26R1_bit at CAN1_F26R1.B15;
    sbit  FB16_CAN1_F26R1_bit at CAN1_F26R1.B16;
    sbit  FB17_CAN1_F26R1_bit at CAN1_F26R1.B17;
    sbit  FB18_CAN1_F26R1_bit at CAN1_F26R1.B18;
    sbit  FB19_CAN1_F26R1_bit at CAN1_F26R1.B19;
    sbit  FB20_CAN1_F26R1_bit at CAN1_F26R1.B20;
    sbit  FB21_CAN1_F26R1_bit at CAN1_F26R1.B21;
    sbit  FB22_CAN1_F26R1_bit at CAN1_F26R1.B22;
    sbit  FB23_CAN1_F26R1_bit at CAN1_F26R1.B23;
    sbit  FB24_CAN1_F26R1_bit at CAN1_F26R1.B24;
    sbit  FB25_CAN1_F26R1_bit at CAN1_F26R1.B25;
    sbit  FB26_CAN1_F26R1_bit at CAN1_F26R1.B26;
    sbit  FB27_CAN1_F26R1_bit at CAN1_F26R1.B27;
    sbit  FB28_CAN1_F26R1_bit at CAN1_F26R1.B28;
    sbit  FB29_CAN1_F26R1_bit at CAN1_F26R1.B29;
    sbit  FB30_CAN1_F26R1_bit at CAN1_F26R1.B30;
    sbit  FB31_CAN1_F26R1_bit at CAN1_F26R1.B31;

sfr unsigned long   volatile CAN1_F26R2           absolute 0x40006714;
    sbit  FB0_CAN1_F26R2_bit at CAN1_F26R2.B0;
    sbit  FB1_CAN1_F26R2_bit at CAN1_F26R2.B1;
    sbit  FB2_CAN1_F26R2_bit at CAN1_F26R2.B2;
    sbit  FB3_CAN1_F26R2_bit at CAN1_F26R2.B3;
    sbit  FB4_CAN1_F26R2_bit at CAN1_F26R2.B4;
    sbit  FB5_CAN1_F26R2_bit at CAN1_F26R2.B5;
    sbit  FB6_CAN1_F26R2_bit at CAN1_F26R2.B6;
    sbit  FB7_CAN1_F26R2_bit at CAN1_F26R2.B7;
    sbit  FB8_CAN1_F26R2_bit at CAN1_F26R2.B8;
    sbit  FB9_CAN1_F26R2_bit at CAN1_F26R2.B9;
    sbit  FB10_CAN1_F26R2_bit at CAN1_F26R2.B10;
    sbit  FB11_CAN1_F26R2_bit at CAN1_F26R2.B11;
    sbit  FB12_CAN1_F26R2_bit at CAN1_F26R2.B12;
    sbit  FB13_CAN1_F26R2_bit at CAN1_F26R2.B13;
    sbit  FB14_CAN1_F26R2_bit at CAN1_F26R2.B14;
    sbit  FB15_CAN1_F26R2_bit at CAN1_F26R2.B15;
    sbit  FB16_CAN1_F26R2_bit at CAN1_F26R2.B16;
    sbit  FB17_CAN1_F26R2_bit at CAN1_F26R2.B17;
    sbit  FB18_CAN1_F26R2_bit at CAN1_F26R2.B18;
    sbit  FB19_CAN1_F26R2_bit at CAN1_F26R2.B19;
    sbit  FB20_CAN1_F26R2_bit at CAN1_F26R2.B20;
    sbit  FB21_CAN1_F26R2_bit at CAN1_F26R2.B21;
    sbit  FB22_CAN1_F26R2_bit at CAN1_F26R2.B22;
    sbit  FB23_CAN1_F26R2_bit at CAN1_F26R2.B23;
    sbit  FB24_CAN1_F26R2_bit at CAN1_F26R2.B24;
    sbit  FB25_CAN1_F26R2_bit at CAN1_F26R2.B25;
    sbit  FB26_CAN1_F26R2_bit at CAN1_F26R2.B26;
    sbit  FB27_CAN1_F26R2_bit at CAN1_F26R2.B27;
    sbit  FB28_CAN1_F26R2_bit at CAN1_F26R2.B28;
    sbit  FB29_CAN1_F26R2_bit at CAN1_F26R2.B29;
    sbit  FB30_CAN1_F26R2_bit at CAN1_F26R2.B30;
    sbit  FB31_CAN1_F26R2_bit at CAN1_F26R2.B31;

sfr unsigned long   volatile CAN1_F27R1           absolute 0x40006718;
    sbit  FB0_CAN1_F27R1_bit at CAN1_F27R1.B0;
    sbit  FB1_CAN1_F27R1_bit at CAN1_F27R1.B1;
    sbit  FB2_CAN1_F27R1_bit at CAN1_F27R1.B2;
    sbit  FB3_CAN1_F27R1_bit at CAN1_F27R1.B3;
    sbit  FB4_CAN1_F27R1_bit at CAN1_F27R1.B4;
    sbit  FB5_CAN1_F27R1_bit at CAN1_F27R1.B5;
    sbit  FB6_CAN1_F27R1_bit at CAN1_F27R1.B6;
    sbit  FB7_CAN1_F27R1_bit at CAN1_F27R1.B7;
    sbit  FB8_CAN1_F27R1_bit at CAN1_F27R1.B8;
    sbit  FB9_CAN1_F27R1_bit at CAN1_F27R1.B9;
    sbit  FB10_CAN1_F27R1_bit at CAN1_F27R1.B10;
    sbit  FB11_CAN1_F27R1_bit at CAN1_F27R1.B11;
    sbit  FB12_CAN1_F27R1_bit at CAN1_F27R1.B12;
    sbit  FB13_CAN1_F27R1_bit at CAN1_F27R1.B13;
    sbit  FB14_CAN1_F27R1_bit at CAN1_F27R1.B14;
    sbit  FB15_CAN1_F27R1_bit at CAN1_F27R1.B15;
    sbit  FB16_CAN1_F27R1_bit at CAN1_F27R1.B16;
    sbit  FB17_CAN1_F27R1_bit at CAN1_F27R1.B17;
    sbit  FB18_CAN1_F27R1_bit at CAN1_F27R1.B18;
    sbit  FB19_CAN1_F27R1_bit at CAN1_F27R1.B19;
    sbit  FB20_CAN1_F27R1_bit at CAN1_F27R1.B20;
    sbit  FB21_CAN1_F27R1_bit at CAN1_F27R1.B21;
    sbit  FB22_CAN1_F27R1_bit at CAN1_F27R1.B22;
    sbit  FB23_CAN1_F27R1_bit at CAN1_F27R1.B23;
    sbit  FB24_CAN1_F27R1_bit at CAN1_F27R1.B24;
    sbit  FB25_CAN1_F27R1_bit at CAN1_F27R1.B25;
    sbit  FB26_CAN1_F27R1_bit at CAN1_F27R1.B26;
    sbit  FB27_CAN1_F27R1_bit at CAN1_F27R1.B27;
    sbit  FB28_CAN1_F27R1_bit at CAN1_F27R1.B28;
    sbit  FB29_CAN1_F27R1_bit at CAN1_F27R1.B29;
    sbit  FB30_CAN1_F27R1_bit at CAN1_F27R1.B30;
    sbit  FB31_CAN1_F27R1_bit at CAN1_F27R1.B31;

sfr unsigned long   volatile CAN1_F27R2           absolute 0x4000671C;
    sbit  FB0_CAN1_F27R2_bit at CAN1_F27R2.B0;
    sbit  FB1_CAN1_F27R2_bit at CAN1_F27R2.B1;
    sbit  FB2_CAN1_F27R2_bit at CAN1_F27R2.B2;
    sbit  FB3_CAN1_F27R2_bit at CAN1_F27R2.B3;
    sbit  FB4_CAN1_F27R2_bit at CAN1_F27R2.B4;
    sbit  FB5_CAN1_F27R2_bit at CAN1_F27R2.B5;
    sbit  FB6_CAN1_F27R2_bit at CAN1_F27R2.B6;
    sbit  FB7_CAN1_F27R2_bit at CAN1_F27R2.B7;
    sbit  FB8_CAN1_F27R2_bit at CAN1_F27R2.B8;
    sbit  FB9_CAN1_F27R2_bit at CAN1_F27R2.B9;
    sbit  FB10_CAN1_F27R2_bit at CAN1_F27R2.B10;
    sbit  FB11_CAN1_F27R2_bit at CAN1_F27R2.B11;
    sbit  FB12_CAN1_F27R2_bit at CAN1_F27R2.B12;
    sbit  FB13_CAN1_F27R2_bit at CAN1_F27R2.B13;
    sbit  FB14_CAN1_F27R2_bit at CAN1_F27R2.B14;
    sbit  FB15_CAN1_F27R2_bit at CAN1_F27R2.B15;
    sbit  FB16_CAN1_F27R2_bit at CAN1_F27R2.B16;
    sbit  FB17_CAN1_F27R2_bit at CAN1_F27R2.B17;
    sbit  FB18_CAN1_F27R2_bit at CAN1_F27R2.B18;
    sbit  FB19_CAN1_F27R2_bit at CAN1_F27R2.B19;
    sbit  FB20_CAN1_F27R2_bit at CAN1_F27R2.B20;
    sbit  FB21_CAN1_F27R2_bit at CAN1_F27R2.B21;
    sbit  FB22_CAN1_F27R2_bit at CAN1_F27R2.B22;
    sbit  FB23_CAN1_F27R2_bit at CAN1_F27R2.B23;
    sbit  FB24_CAN1_F27R2_bit at CAN1_F27R2.B24;
    sbit  FB25_CAN1_F27R2_bit at CAN1_F27R2.B25;
    sbit  FB26_CAN1_F27R2_bit at CAN1_F27R2.B26;
    sbit  FB27_CAN1_F27R2_bit at CAN1_F27R2.B27;
    sbit  FB28_CAN1_F27R2_bit at CAN1_F27R2.B28;
    sbit  FB29_CAN1_F27R2_bit at CAN1_F27R2.B29;
    sbit  FB30_CAN1_F27R2_bit at CAN1_F27R2.B30;
    sbit  FB31_CAN1_F27R2_bit at CAN1_F27R2.B31;


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
      unsigned IDR : 8;
      unsigned : 24;
    };
  };
} typeCRC_IDRBITS;
sfr volatile typeCRC_IDRBITS CRC_IDRbits absolute 0x40023004;

 typedef struct tagCRC_CRBITS {
  union {
    struct {
      unsigned RESET_ : 1;
      unsigned : 4;
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
      unsigned INIT : 32;
    };
  };
} typeCRC_INITBITS;
sfr volatile typeCRC_INITBITS CRC_INITbits absolute 0x4002300C;

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
sfr far volatile typeGPIOF_MODERBITS GPIOF_MODERbits absolute 0x48001400;

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
sfr far volatile typeGPIOF_OTYPERBITS GPIOF_OTYPERbits absolute 0x48001404;

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
sfr far volatile typeGPIOF_OSPEEDRBITS GPIOF_OSPEEDRbits absolute 0x48001408;

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
sfr far volatile typeGPIOF_PUPDRBITS GPIOF_PUPDRbits absolute 0x4800140C;

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
sfr far volatile typeGPIOF_IDRBITS GPIOF_IDRbits absolute 0x48001410;

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
sfr far volatile typeGPIOF_ODRBITS GPIOF_ODRbits absolute 0x48001414;

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
sfr far volatile typeGPIOF_BSRRBITS GPIOF_BSRRbits absolute 0x48001418;

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
sfr far volatile typeGPIOF_LCKRBITS GPIOF_LCKRbits absolute 0x4800141C;

 typedef struct tagGPIOF_AFRLBITS {
  union {
    struct {
      unsigned AFRL0 : 4;
      unsigned AFRL1 : 4;
      unsigned AFRL2 : 4;
      unsigned AFRL3 : 4;
      unsigned AFRL4 : 4;
      unsigned AFRL5 : 4;
      unsigned AFRL6 : 4;
      unsigned AFRL7 : 4;
    };
  };
} typeGPIOF_AFRLBITS;
sfr far volatile typeGPIOF_AFRLBITS GPIOF_AFRLbits absolute 0x48001420;

 typedef struct tagGPIOF_AFRHBITS {
  union {
    struct {
      unsigned AFRH8 : 4;
      unsigned AFRH9 : 4;
      unsigned AFRH10 : 4;
      unsigned AFRH11 : 4;
      unsigned AFRH12 : 4;
      unsigned AFRH13 : 4;
      unsigned AFRH14 : 4;
      unsigned AFRH15 : 4;
    };
  };
} typeGPIOF_AFRHBITS;
sfr far volatile typeGPIOF_AFRHBITS GPIOF_AFRHbits absolute 0x48001424;

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
sfr far volatile typeGPIOF_BRRBITS GPIOF_BRRbits absolute 0x48001428;

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
sfr far volatile typeGPIOC_MODERBITS GPIOC_MODERbits absolute 0x48000800;

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
sfr far volatile typeGPIOC_OTYPERBITS GPIOC_OTYPERbits absolute 0x48000804;

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
sfr far volatile typeGPIOC_OSPEEDRBITS GPIOC_OSPEEDRbits absolute 0x48000808;

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
sfr far volatile typeGPIOC_PUPDRBITS GPIOC_PUPDRbits absolute 0x4800080C;

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
sfr far volatile typeGPIOC_IDRBITS GPIOC_IDRbits absolute 0x48000810;

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
sfr far volatile typeGPIOC_ODRBITS GPIOC_ODRbits absolute 0x48000814;

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
sfr far volatile typeGPIOC_BSRRBITS GPIOC_BSRRbits absolute 0x48000818;

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
sfr far volatile typeGPIOC_LCKRBITS GPIOC_LCKRbits absolute 0x4800081C;

 typedef struct tagGPIOC_AFRLBITS {
  union {
    struct {
      unsigned AFRL0 : 4;
      unsigned AFRL1 : 4;
      unsigned AFRL2 : 4;
      unsigned AFRL3 : 4;
      unsigned AFRL4 : 4;
      unsigned AFRL5 : 4;
      unsigned AFRL6 : 4;
      unsigned AFRL7 : 4;
    };
  };
} typeGPIOC_AFRLBITS;
sfr far volatile typeGPIOC_AFRLBITS GPIOC_AFRLbits absolute 0x48000820;

 typedef struct tagGPIOC_AFRHBITS {
  union {
    struct {
      unsigned AFRH8 : 4;
      unsigned AFRH9 : 4;
      unsigned AFRH10 : 4;
      unsigned AFRH11 : 4;
      unsigned AFRH12 : 4;
      unsigned AFRH13 : 4;
      unsigned AFRH14 : 4;
      unsigned AFRH15 : 4;
    };
  };
} typeGPIOC_AFRHBITS;
sfr far volatile typeGPIOC_AFRHBITS GPIOC_AFRHbits absolute 0x48000824;

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
sfr far volatile typeGPIOC_BRRBITS GPIOC_BRRbits absolute 0x48000828;

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
sfr far volatile typeGPIOB_MODERBITS GPIOB_MODERbits absolute 0x48000400;

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
sfr far volatile typeGPIOB_OTYPERBITS GPIOB_OTYPERbits absolute 0x48000404;

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
sfr far volatile typeGPIOB_OSPEEDRBITS GPIOB_OSPEEDRbits absolute 0x48000408;

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
sfr far volatile typeGPIOB_PUPDRBITS GPIOB_PUPDRbits absolute 0x4800040C;

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
sfr far volatile typeGPIOB_IDRBITS GPIOB_IDRbits absolute 0x48000410;

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
sfr far volatile typeGPIOB_ODRBITS GPIOB_ODRbits absolute 0x48000414;

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
sfr far volatile typeGPIOB_BSRRBITS GPIOB_BSRRbits absolute 0x48000418;

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
sfr far volatile typeGPIOB_LCKRBITS GPIOB_LCKRbits absolute 0x4800041C;

 typedef struct tagGPIOB_AFRLBITS {
  union {
    struct {
      unsigned AFRL0 : 4;
      unsigned AFRL1 : 4;
      unsigned AFRL2 : 4;
      unsigned AFRL3 : 4;
      unsigned AFRL4 : 4;
      unsigned AFRL5 : 4;
      unsigned AFRL6 : 4;
      unsigned AFRL7 : 4;
    };
  };
} typeGPIOB_AFRLBITS;
sfr far volatile typeGPIOB_AFRLBITS GPIOB_AFRLbits absolute 0x48000420;

 typedef struct tagGPIOB_AFRHBITS {
  union {
    struct {
      unsigned AFRH8 : 4;
      unsigned AFRH9 : 4;
      unsigned AFRH10 : 4;
      unsigned AFRH11 : 4;
      unsigned AFRH12 : 4;
      unsigned AFRH13 : 4;
      unsigned AFRH14 : 4;
      unsigned AFRH15 : 4;
    };
  };
} typeGPIOB_AFRHBITS;
sfr far volatile typeGPIOB_AFRHBITS GPIOB_AFRHbits absolute 0x48000424;

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
sfr far volatile typeGPIOB_BRRBITS GPIOB_BRRbits absolute 0x48000428;

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
sfr far volatile typeGPIOA_MODERBITS GPIOA_MODERbits absolute 0x48000000;

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
sfr far volatile typeGPIOA_OTYPERBITS GPIOA_OTYPERbits absolute 0x48000004;

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
sfr far volatile typeGPIOA_OSPEEDRBITS GPIOA_OSPEEDRbits absolute 0x48000008;

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
sfr far volatile typeGPIOA_PUPDRBITS GPIOA_PUPDRbits absolute 0x4800000C;

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
sfr far volatile typeGPIOA_IDRBITS GPIOA_IDRbits absolute 0x48000010;

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
sfr far volatile typeGPIOA_ODRBITS GPIOA_ODRbits absolute 0x48000014;

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
sfr far volatile typeGPIOA_BSRRBITS GPIOA_BSRRbits absolute 0x48000018;

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
sfr far volatile typeGPIOA_LCKRBITS GPIOA_LCKRbits absolute 0x4800001C;

 typedef struct tagGPIOA_AFRLBITS {
  union {
    struct {
      unsigned AFRL0 : 4;
      unsigned AFRL1 : 4;
      unsigned AFRL2 : 4;
      unsigned AFRL3 : 4;
      unsigned AFRL4 : 4;
      unsigned AFRL5 : 4;
      unsigned AFRL6 : 4;
      unsigned AFRL7 : 4;
    };
  };
} typeGPIOA_AFRLBITS;
sfr far volatile typeGPIOA_AFRLBITS GPIOA_AFRLbits absolute 0x48000020;

 typedef struct tagGPIOA_AFRHBITS {
  union {
    struct {
      unsigned AFRH8 : 4;
      unsigned AFRH9 : 4;
      unsigned AFRH10 : 4;
      unsigned AFRH11 : 4;
      unsigned AFRH12 : 4;
      unsigned AFRH13 : 4;
      unsigned AFRH14 : 4;
      unsigned AFRH15 : 4;
    };
  };
} typeGPIOA_AFRHBITS;
sfr far volatile typeGPIOA_AFRHBITS GPIOA_AFRHbits absolute 0x48000024;

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
sfr far volatile typeGPIOA_BRRBITS GPIOA_BRRbits absolute 0x48000028;

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
      unsigned I2SE : 1;
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
      unsigned I2SE : 1;
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

 typedef struct tagPWR_CRBITS {
  union {
    struct {
      unsigned LPDS : 1;
      unsigned PDDS : 1;
      unsigned CWUF : 1;
      unsigned CSBF : 1;
      unsigned PVDE : 1;
      unsigned PLS : 3;
      unsigned DBP : 1;
      unsigned FPDS : 1;
      unsigned : 22;
    };
  };
} typePWR_CRBITS;
sfr volatile typePWR_CRBITS PWR_CRbits absolute 0x40007000;

 typedef struct tagPWR_CSRBITS {
  union {
    struct {
      unsigned WUF : 1;
      unsigned SBF : 1;
      unsigned PVDO : 1;
      unsigned BRR : 1;
      unsigned : 4;
      unsigned EWUP : 1;
      unsigned BRE : 1;
      unsigned : 22;
    };
  };
} typePWR_CSRBITS;
sfr volatile typePWR_CSRBITS PWR_CSRbits absolute 0x40007004;

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
      unsigned SWRST : 1;
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
      unsigned SADD0 : 1;
      unsigned SADD1 : 7;
      unsigned SADD8 : 2;
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
      unsigned OA1_1 : 7;
      unsigned OA1_8 : 2;
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
      unsigned WDGTB : 2;
      unsigned EWI : 1;
      unsigned : 22;
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
      unsigned : 22;
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
      unsigned : 17;
    };
  };
} typeTIM1_CR2BITS;
sfr volatile typeTIM1_CR2BITS TIM1_CR2bits absolute 0x40012C04;

 typedef struct tagTIM1_SMCRBITS {
  union {
    struct {
      unsigned SMS : 3;
      unsigned : 1;
      unsigned TS : 3;
      unsigned MSM : 1;
      unsigned ETF : 4;
      unsigned ETPS : 2;
      unsigned ECE : 1;
      unsigned ETP : 1;
      unsigned : 16;
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
      unsigned : 1;
      unsigned CC1OF : 1;
      unsigned CC2OF : 1;
      unsigned CC3OF : 1;
      unsigned CC4OF : 1;
      unsigned : 19;
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
      unsigned : 24;
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
      unsigned : 16;
    };
  };
} typeTIM1_CCMR1_OutputBITS;
sfr volatile typeTIM1_CCMR1_OutputBITS TIM1_CCMR1_Outputbits absolute 0x40012C18;

 typedef struct tagTIM1_CCMR1_InputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned IC1PCS : 2;
      unsigned IC1F : 4;
      unsigned CC2S : 2;
      unsigned IC2PCS : 2;
      unsigned IC2F : 4;
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
      unsigned : 16;
    };
  };
} typeTIM1_CCMR2_OutputBITS;
sfr volatile typeTIM1_CCMR2_OutputBITS TIM1_CCMR2_Outputbits absolute 0x40012C1C;

 typedef struct tagTIM1_CCMR2_InputBITS {
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
      unsigned : 18;
    };
  };
} typeTIM1_CCERBITS;
sfr volatile typeTIM1_CCERBITS TIM1_CCERbits absolute 0x40012C20;

 typedef struct tagTIM1_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
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
      unsigned REP : 8;
      unsigned : 24;
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
      unsigned : 16;
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
      unsigned : 22;
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
      unsigned : 1;
      unsigned TS : 3;
      unsigned MSM : 1;
      unsigned ETF : 4;
      unsigned ETPS : 2;
      unsigned ECE : 1;
      unsigned ETP : 1;
      unsigned : 16;
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
      unsigned COMDE : 1;
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
      unsigned : 16;
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
      unsigned : 16;
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
      unsigned DMAR : 16;
      unsigned : 16;
    };
  };
} typeTIM2_DMARBITS;
sfr volatile typeTIM2_DMARBITS TIM2_DMARbits absolute 0x4000004C;

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
      unsigned : 22;
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
      unsigned : 1;
      unsigned TS : 3;
      unsigned MSM : 1;
      unsigned ETF : 4;
      unsigned ETPS : 2;
      unsigned ECE : 1;
      unsigned ETP : 1;
      unsigned : 16;
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
      unsigned COMDE : 1;
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
      unsigned : 16;
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
      unsigned : 16;
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
      unsigned DMAR : 16;
      unsigned : 16;
    };
  };
} typeTIM3_DMARBITS;
sfr volatile typeTIM3_DMARBITS TIM3_DMARbits absolute 0x4000044C;

 typedef struct tagTIM14_CR1BITS {
  union {
    struct {
      unsigned CEN : 1;
      unsigned UDIS : 1;
      unsigned URS : 1;
      unsigned : 4;
      unsigned ARPE : 1;
      unsigned CKD : 2;
      unsigned : 22;
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
      unsigned : 25;
    };
  };
} typeTIM14_CCMR1_OutputBITS;
sfr volatile typeTIM14_CCMR1_OutputBITS TIM14_CCMR1_Outputbits absolute 0x40002018;

 typedef struct tagTIM14_CCMR1_InputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned IC1PSC : 2;
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
      unsigned : 16;
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

 typedef struct tagTIM14_ORBITS {
  union {
    struct {
      unsigned RMP : 2;
      unsigned : 30;
    };
  };
} typeTIM14_ORBITS;
sfr volatile typeTIM14_ORBITS TIM14_ORbits absolute 0x40002050;

 typedef struct tagEXTI_IMRBITS {
  union {
    struct {
      unsigned MR0 : 1;
      unsigned MR1 : 1;
      unsigned MR2 : 1;
      unsigned MR3 : 1;
      unsigned MR4 : 1;
      unsigned MR5 : 1;
      unsigned MR6 : 1;
      unsigned MR7 : 1;
      unsigned MR8 : 1;
      unsigned MR9 : 1;
      unsigned MR10 : 1;
      unsigned MR11 : 1;
      unsigned MR12 : 1;
      unsigned MR13 : 1;
      unsigned MR14 : 1;
      unsigned MR15 : 1;
      unsigned MR16 : 1;
      unsigned MR17 : 1;
      unsigned MR18 : 1;
      unsigned MR19 : 1;
      unsigned MR20 : 1;
      unsigned MR21 : 1;
      unsigned MR22 : 1;
      unsigned MR23 : 1;
      unsigned MR24 : 1;
      unsigned MR25 : 1;
      unsigned MR26 : 1;
      unsigned MR27 : 1;
      unsigned : 4;
    };
  };
} typeEXTI_IMRBITS;
sfr volatile typeEXTI_IMRBITS EXTI_IMRbits absolute 0x40010400;

 typedef struct tagEXTI_EMRBITS {
  union {
    struct {
      unsigned MR0 : 1;
      unsigned MR1 : 1;
      unsigned MR2 : 1;
      unsigned MR3 : 1;
      unsigned MR4 : 1;
      unsigned MR5 : 1;
      unsigned MR6 : 1;
      unsigned MR7 : 1;
      unsigned MR8 : 1;
      unsigned MR9 : 1;
      unsigned MR10 : 1;
      unsigned MR11 : 1;
      unsigned MR12 : 1;
      unsigned MR13 : 1;
      unsigned MR14 : 1;
      unsigned MR15 : 1;
      unsigned MR16 : 1;
      unsigned MR17 : 1;
      unsigned MR18 : 1;
      unsigned MR19 : 1;
      unsigned MR20 : 1;
      unsigned MR21 : 1;
      unsigned MR22 : 1;
      unsigned MR23 : 1;
      unsigned MR24 : 1;
      unsigned MR25 : 1;
      unsigned MR26 : 1;
      unsigned MR27 : 1;
      unsigned : 4;
    };
  };
} typeEXTI_EMRBITS;
sfr volatile typeEXTI_EMRBITS EXTI_EMRbits absolute 0x40010404;

 typedef struct tagEXTI_RTSRBITS {
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
      unsigned TR17 : 1;
      unsigned : 1;
      unsigned TR19 : 1;
      unsigned : 12;
    };
  };
} typeEXTI_RTSRBITS;
sfr volatile typeEXTI_RTSRBITS EXTI_RTSRbits absolute 0x40010408;

 typedef struct tagEXTI_FTSRBITS {
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
      unsigned TR17 : 1;
      unsigned : 1;
      unsigned TR19 : 1;
      unsigned : 12;
    };
  };
} typeEXTI_FTSRBITS;
sfr volatile typeEXTI_FTSRBITS EXTI_FTSRbits absolute 0x4001040C;

 typedef struct tagEXTI_SWIERBITS {
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
      unsigned SWIER17 : 1;
      unsigned : 1;
      unsigned SWIER19 : 1;
      unsigned : 12;
    };
  };
} typeEXTI_SWIERBITS;
sfr volatile typeEXTI_SWIERBITS EXTI_SWIERbits absolute 0x40010410;

 typedef struct tagEXTI_PRBITS {
  union {
    struct {
      unsigned PR0 : 1;
      unsigned PR1 : 1;
      unsigned PR2 : 1;
      unsigned PR3 : 1;
      unsigned PR4 : 1;
      unsigned PR5 : 1;
      unsigned PR6 : 1;
      unsigned PR7 : 1;
      unsigned PR8 : 1;
      unsigned PR9 : 1;
      unsigned PR10 : 1;
      unsigned PR11 : 1;
      unsigned PR12 : 1;
      unsigned PR13 : 1;
      unsigned PR14 : 1;
      unsigned PR15 : 1;
      unsigned PR16 : 1;
      unsigned PR17 : 1;
      unsigned : 1;
      unsigned PR19 : 1;
      unsigned : 12;
    };
  };
} typeEXTI_PRBITS;
sfr volatile typeEXTI_PRBITS EXTI_PRbits absolute 0x40010414;

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
      unsigned : 6;
      unsigned PRI_00 : 2;
      unsigned : 6;
      unsigned PRI_01 : 2;
      unsigned : 6;
      unsigned PRI_02 : 2;
      unsigned : 6;
      unsigned PRI_03 : 2;
    };
  };
} typeNVIC_IPR0BITS;
sfr far volatile typeNVIC_IPR0BITS NVIC_IPR0bits absolute 0xE000E400;

 typedef struct tagNVIC_IPR1BITS {
  union {
    struct {
      unsigned : 6;
      unsigned PRI_40 : 2;
      unsigned : 6;
      unsigned PRI_41 : 2;
      unsigned : 6;
      unsigned PRI_42 : 2;
      unsigned : 6;
      unsigned PRI_43 : 2;
    };
  };
} typeNVIC_IPR1BITS;
sfr far volatile typeNVIC_IPR1BITS NVIC_IPR1bits absolute 0xE000E404;

 typedef struct tagNVIC_IPR2BITS {
  union {
    struct {
      unsigned : 6;
      unsigned PRI_80 : 2;
      unsigned : 6;
      unsigned PRI_81 : 2;
      unsigned : 6;
      unsigned PRI_82 : 2;
      unsigned : 6;
      unsigned PRI_83 : 2;
    };
  };
} typeNVIC_IPR2BITS;
sfr far volatile typeNVIC_IPR2BITS NVIC_IPR2bits absolute 0xE000E408;

 typedef struct tagNVIC_IPR3BITS {
  union {
    struct {
      unsigned : 6;
      unsigned PRI_120 : 2;
      unsigned : 6;
      unsigned PRI_121 : 2;
      unsigned : 6;
      unsigned PRI_122 : 2;
      unsigned : 6;
      unsigned PRI_123 : 2;
    };
  };
} typeNVIC_IPR3BITS;
sfr far volatile typeNVIC_IPR3BITS NVIC_IPR3bits absolute 0xE000E40C;

 typedef struct tagNVIC_IPR4BITS {
  union {
    struct {
      unsigned : 6;
      unsigned PRI_160 : 2;
      unsigned : 6;
      unsigned PRI_161 : 2;
      unsigned : 6;
      unsigned PRI_162 : 2;
      unsigned : 6;
      unsigned PRI_163 : 2;
    };
  };
} typeNVIC_IPR4BITS;
sfr far volatile typeNVIC_IPR4BITS NVIC_IPR4bits absolute 0xE000E410;

 typedef struct tagNVIC_IPR5BITS {
  union {
    struct {
      unsigned : 6;
      unsigned PRI_200 : 2;
      unsigned : 6;
      unsigned PRI_201 : 2;
      unsigned : 6;
      unsigned PRI_202 : 2;
      unsigned : 6;
      unsigned PRI_203 : 2;
    };
  };
} typeNVIC_IPR5BITS;
sfr far volatile typeNVIC_IPR5BITS NVIC_IPR5bits absolute 0xE000E414;

 typedef struct tagNVIC_IPR6BITS {
  union {
    struct {
      unsigned : 6;
      unsigned PRI_240 : 2;
      unsigned : 6;
      unsigned PRI_241 : 2;
      unsigned : 6;
      unsigned PRI_242 : 2;
      unsigned : 6;
      unsigned PRI_243 : 2;
    };
  };
} typeNVIC_IPR6BITS;
sfr far volatile typeNVIC_IPR6BITS NVIC_IPR6bits absolute 0xE000E418;

 typedef struct tagNVIC_IPR7BITS {
  union {
    struct {
      unsigned : 6;
      unsigned PRI_280 : 2;
      unsigned : 6;
      unsigned PRI_281 : 2;
      unsigned : 6;
      unsigned PRI_282 : 2;
      unsigned : 6;
      unsigned PRI_283 : 2;
    };
  };
} typeNVIC_IPR7BITS;
sfr far volatile typeNVIC_IPR7BITS NVIC_IPR7bits absolute 0xE000E41C;

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
      unsigned REVISION : 4;
      unsigned PARTNO : 12;
      unsigned CONSTANT : 4;
      unsigned VARIANT : 4;
      unsigned IMPLEMENTER : 8;
    };
  };
} typeSCB_CPUIDBITS;
sfr far volatile typeSCB_CPUIDBITS SCB_CPUIDbits absolute 0xE000ED00;

 typedef struct tagSCB_ICSRBITS {
  union {
    struct {
      unsigned VECTACTIVE : 6;
      unsigned : 6;
      unsigned VECTPENDING : 6;
      unsigned : 4;
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

 typedef struct tagSCB_AIRCRBITS {
  union {
    struct {
      unsigned : 1;
      unsigned VECTCLRACTIVE : 1;
      unsigned SYSRESETREQ : 1;
      unsigned : 12;
      unsigned ENDIANESS : 1;
      unsigned VECTKEY : 16;
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
      unsigned SEVONPEND : 1;
      unsigned : 27;
    };
  };
} typeSCB_SCRBITS;
sfr far volatile typeSCB_SCRBITS SCB_SCRbits absolute 0xE000ED10;

 typedef struct tagSCB_CCRBITS {
  union {
    struct {
      unsigned : 3;
      unsigned UNALIGN_TRP : 1;
      unsigned : 5;
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

 typedef struct tagDMA_ISRBITS {
  union {
    struct {
      unsigned GIF1 : 1;
      unsigned TCIF1 : 1;
      unsigned HTIF1 : 1;
      unsigned TEIF1 : 1;
      unsigned GIF2 : 1;
      unsigned TCIF2 : 1;
      unsigned HTIF2 : 1;
      unsigned TEIF2 : 1;
      unsigned GIF3 : 1;
      unsigned TCIF3 : 1;
      unsigned HTIF3 : 1;
      unsigned TEIF3 : 1;
      unsigned GIF4 : 1;
      unsigned TCIF4 : 1;
      unsigned HTIF4 : 1;
      unsigned TEIF4 : 1;
      unsigned GIF5 : 1;
      unsigned TCIF5 : 1;
      unsigned HTIF5 : 1;
      unsigned TEIF5 : 1;
      unsigned GIF6 : 1;
      unsigned TCIF6 : 1;
      unsigned HTIF6 : 1;
      unsigned TEIF6 : 1;
      unsigned GIF7 : 1;
      unsigned TCIF7 : 1;
      unsigned HTIF7 : 1;
      unsigned TEIF7 : 1;
      unsigned : 4;
    };
  };
} typeDMA_ISRBITS;
sfr volatile typeDMA_ISRBITS DMA_ISRbits absolute 0x40020000;

 typedef struct tagDMA_IFCRBITS {
  union {
    struct {
      unsigned CGIF1 : 1;
      unsigned CTCIF1 : 1;
      unsigned CHTIF1 : 1;
      unsigned CTEIF1 : 1;
      unsigned CGIF2 : 1;
      unsigned CTCIF2 : 1;
      unsigned CHTIF2 : 1;
      unsigned CTEIF2 : 1;
      unsigned CGIF3 : 1;
      unsigned CTCIF3 : 1;
      unsigned CHTIF3 : 1;
      unsigned CTEIF3 : 1;
      unsigned CGIF4 : 1;
      unsigned CTCIF4 : 1;
      unsigned CHTIF4 : 1;
      unsigned CTEIF4 : 1;
      unsigned CGIF5 : 1;
      unsigned CTCIF5 : 1;
      unsigned CHTIF5 : 1;
      unsigned CTEIF5 : 1;
      unsigned CGIF6 : 1;
      unsigned CTCIF6 : 1;
      unsigned CHTIF6 : 1;
      unsigned CTEIF6 : 1;
      unsigned CGIF7 : 1;
      unsigned CTCIF7 : 1;
      unsigned CHTIF7 : 1;
      unsigned CTEIF7 : 1;
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

 typedef struct tagDMA_CNDTR1BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA_CNDTR1BITS;
sfr volatile typeDMA_CNDTR1BITS DMA_CNDTR1bits absolute 0x4002000C;

 typedef struct tagDMA_CPAR1BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA_CPAR1BITS;
sfr volatile typeDMA_CPAR1BITS DMA_CPAR1bits absolute 0x40020010;

 typedef struct tagDMA_CMAR1BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA_CMAR1BITS;
sfr volatile typeDMA_CMAR1BITS DMA_CMAR1bits absolute 0x40020014;

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

 typedef struct tagDMA_CNDTR2BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA_CNDTR2BITS;
sfr volatile typeDMA_CNDTR2BITS DMA_CNDTR2bits absolute 0x40020020;

 typedef struct tagDMA_CPAR2BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA_CPAR2BITS;
sfr volatile typeDMA_CPAR2BITS DMA_CPAR2bits absolute 0x40020024;

 typedef struct tagDMA_CMAR2BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA_CMAR2BITS;
sfr volatile typeDMA_CMAR2BITS DMA_CMAR2bits absolute 0x40020028;

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

 typedef struct tagDMA_CNDTR3BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA_CNDTR3BITS;
sfr volatile typeDMA_CNDTR3BITS DMA_CNDTR3bits absolute 0x40020034;

 typedef struct tagDMA_CPAR3BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA_CPAR3BITS;
sfr volatile typeDMA_CPAR3BITS DMA_CPAR3bits absolute 0x40020038;

 typedef struct tagDMA_CMAR3BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA_CMAR3BITS;
sfr volatile typeDMA_CMAR3BITS DMA_CMAR3bits absolute 0x4002003C;

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

 typedef struct tagDMA_CNDTR4BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA_CNDTR4BITS;
sfr volatile typeDMA_CNDTR4BITS DMA_CNDTR4bits absolute 0x40020048;

 typedef struct tagDMA_CPAR4BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA_CPAR4BITS;
sfr volatile typeDMA_CPAR4BITS DMA_CPAR4bits absolute 0x4002004C;

 typedef struct tagDMA_CMAR4BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA_CMAR4BITS;
sfr volatile typeDMA_CMAR4BITS DMA_CMAR4bits absolute 0x40020050;

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

 typedef struct tagDMA_CNDTR5BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA_CNDTR5BITS;
sfr volatile typeDMA_CNDTR5BITS DMA_CNDTR5bits absolute 0x4002005C;

 typedef struct tagDMA_CPAR5BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA_CPAR5BITS;
sfr volatile typeDMA_CPAR5BITS DMA_CPAR5bits absolute 0x40020060;

 typedef struct tagDMA_CMAR5BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA_CMAR5BITS;
sfr volatile typeDMA_CMAR5BITS DMA_CMAR5bits absolute 0x40020064;

 typedef struct tagDMA_CCR6BITS {
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
} typeDMA_CCR6BITS;
sfr volatile typeDMA_CCR6BITS DMA_CCR6bits absolute 0x4002006C;

 typedef struct tagDMA_CNDTR6BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA_CNDTR6BITS;
sfr volatile typeDMA_CNDTR6BITS DMA_CNDTR6bits absolute 0x40020070;

 typedef struct tagDMA_CPAR6BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA_CPAR6BITS;
sfr volatile typeDMA_CPAR6BITS DMA_CPAR6bits absolute 0x40020074;

 typedef struct tagDMA_CMAR6BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA_CMAR6BITS;
sfr volatile typeDMA_CMAR6BITS DMA_CMAR6bits absolute 0x40020078;

 typedef struct tagDMA_CCR7BITS {
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
} typeDMA_CCR7BITS;
sfr volatile typeDMA_CCR7BITS DMA_CCR7bits absolute 0x40020080;

 typedef struct tagDMA_CNDTR7BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA_CNDTR7BITS;
sfr volatile typeDMA_CNDTR7BITS DMA_CNDTR7bits absolute 0x40020084;

 typedef struct tagDMA_CPAR7BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA_CPAR7BITS;
sfr volatile typeDMA_CPAR7BITS DMA_CPAR7bits absolute 0x40020088;

 typedef struct tagDMA_CMAR7BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA_CMAR7BITS;
sfr volatile typeDMA_CMAR7BITS DMA_CMAR7bits absolute 0x4002008C;

 typedef struct tagRCC_CRBITS {
  union {
    struct {
      unsigned HSION : 1;
      unsigned HSIRDY : 1;
      unsigned : 1;
      unsigned HSITRIM : 5;
      unsigned HSICAL : 8;
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

 typedef struct tagRCC_CFGRBITS {
  union {
    struct {
      unsigned SW : 2;
      unsigned SWS : 2;
      unsigned HPRE : 4;
      unsigned PPRE : 3;
      unsigned : 3;
      unsigned ADCPRE : 1;
      unsigned PLLSRC : 2;
      unsigned PLLXTPRE : 1;
      unsigned PLLMUL : 4;
      unsigned : 2;
      unsigned MCO : 3;
      unsigned : 1;
      unsigned MCOPRE : 3;
      unsigned PLLNODIV : 1;
    };
  };
} typeRCC_CFGRBITS;
sfr volatile typeRCC_CFGRBITS RCC_CFGRbits absolute 0x40021004;

 typedef struct tagRCC_CIRBITS {
  union {
    struct {
      unsigned LSIRDYF : 1;
      unsigned LSERDYF : 1;
      unsigned HSIRDYF : 1;
      unsigned HSERDYF : 1;
      unsigned PLLRDYF : 1;
      unsigned HSI14RDYF : 1;
      unsigned HSI48RDYF : 1;
      unsigned CSSF : 1;
      unsigned LSIRDYIE : 1;
      unsigned LSERDYIE : 1;
      unsigned HSIRDYIE : 1;
      unsigned HSERDYIE : 1;
      unsigned PLLRDYIE : 1;
      unsigned HSI14RDYE : 1;
      unsigned HSI48RDYIE : 1;
      unsigned : 1;
      unsigned LSIRDYC : 1;
      unsigned LSERDYC : 1;
      unsigned HSIRDYC : 1;
      unsigned HSERDYC : 1;
      unsigned PLLRDYC : 1;
      unsigned HSI14RDYC : 1;
      unsigned HSI48RDYC : 1;
      unsigned CSSC : 1;
      unsigned : 8;
    };
  };
} typeRCC_CIRBITS;
sfr volatile typeRCC_CIRBITS RCC_CIRbits absolute 0x40021008;

 typedef struct tagRCC_APB2RSTRBITS {
  union {
    struct {
      unsigned SYSCFGRST : 1;
      unsigned : 8;
      unsigned ADCRST : 1;
      unsigned : 1;
      unsigned TIM1RST : 1;
      unsigned SPI1RST : 1;
      unsigned : 1;
      unsigned USART1RST : 1;
      unsigned : 2;
      unsigned TIM16RST : 1;
      unsigned TIM17RST : 1;
      unsigned : 3;
      unsigned DBGMCURST : 1;
      unsigned : 9;
    };
  };
} typeRCC_APB2RSTRBITS;
sfr volatile typeRCC_APB2RSTRBITS RCC_APB2RSTRbits absolute 0x4002100C;

 typedef struct tagRCC_APB1RSTRBITS {
  union {
    struct {
      unsigned TIM2RST : 1;
      unsigned TIM3RST : 1;
      unsigned : 6;
      unsigned TIM14RST : 1;
      unsigned : 2;
      unsigned WWDGRST : 1;
      unsigned : 2;
      unsigned SPI2RST : 1;
      unsigned : 2;
      unsigned USART2RST : 1;
      unsigned : 3;
      unsigned I2C1RST : 1;
      unsigned : 1;
      unsigned USBRST : 1;
      unsigned : 1;
      unsigned CANRST : 1;
      unsigned : 1;
      unsigned CRSRST : 1;
      unsigned PWRRST : 1;
      unsigned : 1;
      unsigned CECRST : 1;
      unsigned : 1;
    };
  };
} typeRCC_APB1RSTRBITS;
sfr volatile typeRCC_APB1RSTRBITS RCC_APB1RSTRbits absolute 0x40021010;

 typedef struct tagRCC_AHBENRBITS {
  union {
    struct {
      unsigned DMAEN : 1;
      unsigned : 1;
      unsigned SRAMEN : 1;
      unsigned : 1;
      unsigned FLITFEN : 1;
      unsigned : 1;
      unsigned CRCEN : 1;
      unsigned : 10;
      unsigned IOPAEN : 1;
      unsigned IOPBEN : 1;
      unsigned IOPCEN : 1;
      unsigned : 2;
      unsigned IOPFEN : 1;
      unsigned : 1;
      unsigned TSCEN : 1;
      unsigned : 7;
    };
  };
} typeRCC_AHBENRBITS;
sfr volatile typeRCC_AHBENRBITS RCC_AHBENRbits absolute 0x40021014;

 typedef struct tagRCC_APB2ENRBITS {
  union {
    struct {
      unsigned SYSCFGEN : 1;
      unsigned : 8;
      unsigned ADCEN : 1;
      unsigned : 1;
      unsigned TIM1EN : 1;
      unsigned SPI1EN : 1;
      unsigned : 1;
      unsigned USART1EN : 1;
      unsigned : 2;
      unsigned TIM16EN : 1;
      unsigned TIM17EN : 1;
      unsigned : 3;
      unsigned DBGMCUEN : 1;
      unsigned : 9;
    };
  };
} typeRCC_APB2ENRBITS;
sfr volatile typeRCC_APB2ENRBITS RCC_APB2ENRbits absolute 0x40021018;

 typedef struct tagRCC_APB1ENRBITS {
  union {
    struct {
      unsigned TIM2EN : 1;
      unsigned TIM3EN : 1;
      unsigned : 6;
      unsigned TIM14EN : 1;
      unsigned : 2;
      unsigned WWDGEN : 1;
      unsigned : 2;
      unsigned SPI2EN : 1;
      unsigned : 2;
      unsigned USART2EN : 1;
      unsigned : 3;
      unsigned I2C1EN : 1;
      unsigned : 1;
      unsigned USBEN : 1;
      unsigned : 1;
      unsigned CANEN : 1;
      unsigned : 1;
      unsigned CRSEN : 1;
      unsigned PWREN : 1;
      unsigned DACEN : 1;
      unsigned CECEN : 1;
      unsigned : 1;
    };
  };
} typeRCC_APB1ENRBITS;
sfr volatile typeRCC_APB1ENRBITS RCC_APB1ENRbits absolute 0x4002101C;

 typedef struct tagRCC_BDCRBITS {
  union {
    struct {
      unsigned LSEON : 1;
      unsigned LSERDY : 1;
      unsigned LSEBYP : 1;
      unsigned LSEDRV : 2;
      unsigned : 3;
      unsigned RTCSEL : 2;
      unsigned : 5;
      unsigned RTCEN : 1;
      unsigned BDRST : 1;
      unsigned : 15;
    };
  };
} typeRCC_BDCRBITS;
sfr volatile typeRCC_BDCRBITS RCC_BDCRbits absolute 0x40021020;

 typedef struct tagRCC_CSRBITS {
  union {
    struct {
      unsigned LSION : 1;
      unsigned LSIRDY : 1;
      unsigned : 22;
      unsigned RMVF : 1;
      unsigned OBLRSTF : 1;
      unsigned PINRSTF : 1;
      unsigned PORRSTF : 1;
      unsigned SFTRSTF : 1;
      unsigned IWDGRSTF : 1;
      unsigned WWDGRSTF : 1;
      unsigned LPWRRSTF : 1;
    };
  };
} typeRCC_CSRBITS;
sfr volatile typeRCC_CSRBITS RCC_CSRbits absolute 0x40021024;

 typedef struct tagRCC_AHBRSTRBITS {
  union {
    struct {
      unsigned : 17;
      unsigned IOPARST : 1;
      unsigned IOPBRST : 1;
      unsigned IOPCRST : 1;
      unsigned : 2;
      unsigned IOPFRST : 1;
      unsigned : 1;
      unsigned TSCRST : 1;
      unsigned : 7;
    };
  };
} typeRCC_AHBRSTRBITS;
sfr volatile typeRCC_AHBRSTRBITS RCC_AHBRSTRbits absolute 0x40021028;

 typedef struct tagRCC_CFGR2BITS {
  union {
    struct {
      unsigned PREDIV : 4;
      unsigned : 28;
    };
  };
} typeRCC_CFGR2BITS;
sfr volatile typeRCC_CFGR2BITS RCC_CFGR2bits absolute 0x4002102C;

 typedef struct tagRCC_CFGR3BITS {
  union {
    struct {
      unsigned USART1SW : 2;
      unsigned : 2;
      unsigned I2C1SW : 1;
      unsigned : 1;
      unsigned CECSW : 1;
      unsigned USBSW : 1;
      unsigned ADCSW : 1;
      unsigned : 7;
      unsigned USART2SW : 2;
      unsigned : 14;
    };
  };
} typeRCC_CFGR3BITS;
sfr volatile typeRCC_CFGR3BITS RCC_CFGR3bits absolute 0x40021030;

 typedef struct tagRCC_CR2BITS {
  union {
    struct {
      unsigned HSI14ON : 1;
      unsigned HSI14RDY : 1;
      unsigned HSI14DIS : 1;
      unsigned HSI14TRIM : 5;
      unsigned HSI14CAL : 8;
      unsigned HSI48ON : 1;
      unsigned HSI48RDY : 1;
      unsigned : 6;
      unsigned HSI48CAL : 1;
      unsigned : 7;
    };
  };
} typeRCC_CR2BITS;
sfr volatile typeRCC_CR2BITS RCC_CR2bits absolute 0x40021034;

 typedef struct tagSYSCFG_CFGR1BITS {
  union {
    struct {
      unsigned MEM_MODE : 2;
      unsigned : 6;
      unsigned ADC_DMA_RMP : 1;
      unsigned USART1_TX_DMA_RMP : 1;
      unsigned USART1_RX_DMA_RMP : 1;
      unsigned TIM16_DMA_RMP : 1;
      unsigned TIM17_DMA_RMP : 1;
      unsigned : 3;
      unsigned I2C_PB6_FM : 1;
      unsigned I2C_PB7_FM : 1;
      unsigned I2C_PB8_FM : 1;
      unsigned I2C_PB9_FM : 1;
      unsigned I2C1_FM_plus : 1;
      unsigned I2C2_FM_plus : 1;
      unsigned : 2;
      unsigned SPI2_DMA_RMP : 1;
      unsigned USART2_DMA_RMP : 1;
      unsigned USART3_DMA_RMP : 1;
      unsigned I2C1_DMA_RMP : 1;
      unsigned TIM1_DMA_RMP : 1;
      unsigned TIM2_DMA_RMP : 1;
      unsigned TIM3_DMA_RMP : 1;
      unsigned : 1;
    };
  };
} typeSYSCFG_CFGR1BITS;
sfr volatile typeSYSCFG_CFGR1BITS SYSCFG_CFGR1bits absolute 0x40010000;

 typedef struct tagSYSCFG_EXTICR1BITS {
  union {
    struct {
      unsigned EXTI0 : 4;
      unsigned EXTI1 : 4;
      unsigned EXTI2 : 4;
      unsigned EXTI3 : 4;
      unsigned : 16;
    };
  };
} typeSYSCFG_EXTICR1BITS;
sfr volatile typeSYSCFG_EXTICR1BITS SYSCFG_EXTICR1bits absolute 0x40010008;

 typedef struct tagSYSCFG_EXTICR2BITS {
  union {
    struct {
      unsigned EXTI4 : 4;
      unsigned EXTI5 : 4;
      unsigned EXTI6 : 4;
      unsigned EXTI7 : 4;
      unsigned : 16;
    };
  };
} typeSYSCFG_EXTICR2BITS;
sfr volatile typeSYSCFG_EXTICR2BITS SYSCFG_EXTICR2bits absolute 0x4001000C;

 typedef struct tagSYSCFG_EXTICR3BITS {
  union {
    struct {
      unsigned EXTI8 : 4;
      unsigned EXTI9 : 4;
      unsigned EXTI10 : 4;
      unsigned EXTI11 : 4;
      unsigned : 16;
    };
  };
} typeSYSCFG_EXTICR3BITS;
sfr volatile typeSYSCFG_EXTICR3BITS SYSCFG_EXTICR3bits absolute 0x40010010;

 typedef struct tagSYSCFG_EXTICR4BITS {
  union {
    struct {
      unsigned EXTI12 : 4;
      unsigned EXTI13 : 4;
      unsigned EXTI14 : 4;
      unsigned EXTI15 : 4;
      unsigned : 16;
    };
  };
} typeSYSCFG_EXTICR4BITS;
sfr volatile typeSYSCFG_EXTICR4BITS SYSCFG_EXTICR4bits absolute 0x40010014;

 typedef struct tagSYSCFG_CFGR2BITS {
  union {
    struct {
      unsigned LOCUP_LOCK : 1;
      unsigned SRAM_PARITY_LOCK : 1;
      unsigned PVD_LOCK : 1;
      unsigned : 5;
      unsigned SRAM_PEF : 1;
      unsigned : 23;
    };
  };
} typeSYSCFG_CFGR2BITS;
sfr volatile typeSYSCFG_CFGR2BITS SYSCFG_CFGR2bits absolute 0x40010018;

 typedef struct tagADC_ISRBITS {
  union {
    struct {
      unsigned ADRDY : 1;
      unsigned EOSMP : 1;
      unsigned EOC : 1;
      unsigned EOS : 1;
      unsigned OVR : 1;
      unsigned : 2;
      unsigned AWD : 1;
      unsigned : 24;
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
      unsigned AWDIE : 1;
      unsigned : 24;
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
      unsigned : 26;
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
      unsigned AUTDLY : 1;
      unsigned AUTOFF : 1;
      unsigned DISCEN : 1;
      unsigned : 5;
      unsigned AWDSGL : 1;
      unsigned AWDEN : 1;
      unsigned : 2;
      unsigned AWDCH : 5;
      unsigned : 1;
    };
  };
} typeADC_CFGR1BITS;
sfr volatile typeADC_CFGR1BITS ADC_CFGR1bits absolute 0x4001240C;

 typedef struct tagADC_CFGR2BITS {
  union {
    struct {
      unsigned : 30;
      unsigned JITOFF_D2 : 1;
      unsigned JITOFF_D4 : 1;
    };
  };
} typeADC_CFGR2BITS;
sfr volatile typeADC_CFGR2BITS ADC_CFGR2bits absolute 0x40012410;

 typedef struct tagADC_SMPRBITS {
  union {
    struct {
      unsigned SMPR : 3;
      unsigned : 29;
    };
  };
} typeADC_SMPRBITS;
sfr volatile typeADC_SMPRBITS ADC_SMPRbits absolute 0x40012414;

 typedef struct tagADC_TRBITS {
  union {
    struct {
      unsigned LT : 12;
      unsigned : 4;
      unsigned HT : 12;
      unsigned : 4;
    };
  };
} typeADC_TRBITS;
sfr volatile typeADC_TRBITS ADC_TRbits absolute 0x40012420;

 typedef struct tagADC_CHSELRBITS {
  union {
    struct {
      unsigned CHSEL0 : 1;
      unsigned CHSEL1 : 1;
      unsigned CHSEL2 : 1;
      unsigned CHSEL3 : 1;
      unsigned CHSEL4 : 1;
      unsigned CHSEL5 : 1;
      unsigned CHSEL6 : 1;
      unsigned CHSEL7 : 1;
      unsigned CHSEL8 : 1;
      unsigned CHSEL9 : 1;
      unsigned CHSEL10 : 1;
      unsigned CHSEL11 : 1;
      unsigned CHSEL12 : 1;
      unsigned CHSEL13 : 1;
      unsigned CHSEL14 : 1;
      unsigned CHSEL15 : 1;
      unsigned CHSEL16 : 1;
      unsigned CHSEL17 : 1;
      unsigned CHSEL18 : 1;
      unsigned : 13;
    };
  };
} typeADC_CHSELRBITS;
sfr volatile typeADC_CHSELRBITS ADC_CHSELRbits absolute 0x40012428;

 typedef struct tagADC_DRBITS {
  union {
    struct {
      unsigned DATA : 16;
      unsigned : 16;
    };
  };
} typeADC_DRBITS;
sfr volatile typeADC_DRBITS ADC_DRbits absolute 0x40012440;

 typedef struct tagADC_CCRBITS {
  union {
    struct {
      unsigned : 22;
      unsigned VREFEN : 1;
      unsigned TSEN : 1;
      unsigned VBATEN : 1;
      unsigned : 7;
    };
  };
} typeADC_CCRBITS;
sfr volatile typeADC_CCRBITS ADC_CCRbits absolute 0x40012708;

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
      unsigned M : 1;
      unsigned MME : 1;
      unsigned CMIE : 1;
      unsigned OVER8 : 1;
      unsigned DEDT : 5;
      unsigned DEAT : 5;
      unsigned RTOIE : 1;
      unsigned EOBIE : 1;
      unsigned M1 : 1;
      unsigned : 3;
    };
  };
} typeUSART1_CR1BITS;
sfr volatile typeUSART1_CR1BITS USART1_CR1bits absolute 0x40013800;

 typedef struct tagUSART1_CR2BITS {
  union {
    struct {
      unsigned : 4;
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
      unsigned DATAINV : 1;
      unsigned MSBFIRST : 1;
      unsigned ABREN : 1;
      unsigned ABRMOD : 2;
      unsigned RTOEN : 1;
      unsigned ADD0 : 4;
      unsigned ADD4 : 4;
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
      unsigned : 9;
    };
  };
} typeUSART1_CR3BITS;
sfr volatile typeUSART1_CR3BITS USART1_CR3bits absolute 0x40013808;

 typedef struct tagUSART1_BRRBITS {
  union {
    struct {
      unsigned DIV_Fraction : 4;
      unsigned DIV_Mantissa : 12;
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
      unsigned : 1;
      unsigned ABRE : 1;
      unsigned ABRF : 1;
      unsigned BUSY : 1;
      unsigned CMF : 1;
      unsigned SBKF : 1;
      unsigned RWU : 1;
      unsigned WUF : 1;
      unsigned TEACK : 1;
      unsigned REACK : 1;
      unsigned : 9;
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
      unsigned : 1;
      unsigned TCCF : 1;
      unsigned : 1;
      unsigned LBDCF : 1;
      unsigned CTSCF : 1;
      unsigned : 1;
      unsigned RTOCF : 1;
      unsigned EOBCF : 1;
      unsigned : 4;
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
      unsigned M : 1;
      unsigned MME : 1;
      unsigned CMIE : 1;
      unsigned OVER8 : 1;
      unsigned DEDT : 5;
      unsigned DEAT : 5;
      unsigned RTOIE : 1;
      unsigned EOBIE : 1;
      unsigned M1 : 1;
      unsigned : 3;
    };
  };
} typeUSART2_CR1BITS;
sfr volatile typeUSART2_CR1BITS USART2_CR1bits absolute 0x40004400;

 typedef struct tagUSART2_CR2BITS {
  union {
    struct {
      unsigned : 4;
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
      unsigned DATAINV : 1;
      unsigned MSBFIRST : 1;
      unsigned ABREN : 1;
      unsigned ABRMOD : 2;
      unsigned RTOEN : 1;
      unsigned ADD0 : 4;
      unsigned ADD4 : 4;
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
      unsigned : 9;
    };
  };
} typeUSART2_CR3BITS;
sfr volatile typeUSART2_CR3BITS USART2_CR3bits absolute 0x40004408;

 typedef struct tagUSART2_BRRBITS {
  union {
    struct {
      unsigned DIV_Fraction : 4;
      unsigned DIV_Mantissa : 12;
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
      unsigned : 1;
      unsigned ABRE : 1;
      unsigned ABRF : 1;
      unsigned BUSY : 1;
      unsigned CMF : 1;
      unsigned SBKF : 1;
      unsigned RWU : 1;
      unsigned WUF : 1;
      unsigned TEACK : 1;
      unsigned REACK : 1;
      unsigned : 9;
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
      unsigned : 1;
      unsigned TCCF : 1;
      unsigned : 1;
      unsigned LBDCF : 1;
      unsigned CTSCF : 1;
      unsigned : 1;
      unsigned RTOCF : 1;
      unsigned EOBCF : 1;
      unsigned : 4;
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

 typedef struct tagCOMP_CSRBITS {
  union {
    struct {
      unsigned COMP1EN : 1;
      unsigned COMP1_INP_DAC : 1;
      unsigned COMP1MODE : 2;
      unsigned COMP1INSEL : 3;
      unsigned : 1;
      unsigned COMP1OUTSEL : 3;
      unsigned COMP1POL : 1;
      unsigned COMP1HYST : 2;
      unsigned COMP1OUT : 1;
      unsigned COMP1LOCK : 1;
      unsigned COMP2EN : 1;
      unsigned : 1;
      unsigned COMP2MODE : 2;
      unsigned COMP2INSEL : 3;
      unsigned WNDWEN : 1;
      unsigned COMP2OUTSEL : 3;
      unsigned COMP2POL : 1;
      unsigned COMP2HYST : 2;
      unsigned COMP2OUT : 1;
      unsigned COMP2LOCK : 1;
    };
  };
} typeCOMP_CSRBITS;
sfr volatile typeCOMP_CSRBITS COMP_CSRbits absolute 0x4001001C;

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

 typedef struct tagRTC_CRBITS {
  union {
    struct {
      unsigned : 3;
      unsigned TSEDGE : 1;
      unsigned REFCKON : 1;
      unsigned BYPSHAD : 1;
      unsigned FMT : 1;
      unsigned : 1;
      unsigned ALRAE : 1;
      unsigned : 2;
      unsigned TSE : 1;
      unsigned ALRAIE : 1;
      unsigned : 2;
      unsigned TSIE : 1;
      unsigned ADD1H : 1;
      unsigned SUB1H : 1;
      unsigned BKP : 1;
      unsigned COSEL : 1;
      unsigned POL : 1;
      unsigned OSEL : 2;
      unsigned COE : 1;
      unsigned : 8;
    };
  };
} typeRTC_CRBITS;
sfr volatile typeRTC_CRBITS RTC_CRbits absolute 0x40002808;

 typedef struct tagRTC_ISRBITS {
  union {
    struct {
      unsigned ALRAWF : 1;
      unsigned : 2;
      unsigned SHPF : 1;
      unsigned INITS : 1;
      unsigned RSF : 1;
      unsigned INITF : 1;
      unsigned INIT : 1;
      unsigned ALRAF : 1;
      unsigned : 2;
      unsigned TSF : 1;
      unsigned TSOVF : 1;
      unsigned TAMP1F : 1;
      unsigned TAMP2F : 1;
      unsigned : 1;
      unsigned RECALPF : 1;
      unsigned : 15;
    };
  };
} typeRTC_ISRBITS;
sfr volatile typeRTC_ISRBITS RTC_ISRbits absolute 0x4000280C;

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
sfr volatile typeRTC_ALRMARBITS RTC_ALRMARbits absolute 0x4000281C;

 typedef struct tagRTC_WPRBITS {
  union {
    struct {
      unsigned KEY : 8;
      unsigned : 24;
    };
  };
} typeRTC_WPRBITS;
sfr volatile typeRTC_WPRBITS RTC_WPRbits absolute 0x40002824;

 typedef struct tagRTC_SSRBITS {
  union {
    struct {
      unsigned SS : 16;
      unsigned : 16;
    };
  };
} typeRTC_SSRBITS;
sfr volatile typeRTC_SSRBITS RTC_SSRbits absolute 0x40002828;

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
sfr volatile typeRTC_CALRBITS RTC_CALRbits absolute 0x4000283C;

 typedef struct tagRTC_TAFCRBITS {
  union {
    struct {
      unsigned TAMP1E : 1;
      unsigned TAMP1TRG : 1;
      unsigned TAMPIE : 1;
      unsigned TAMP2E : 1;
      unsigned TAMP2_TRG : 1;
      unsigned : 2;
      unsigned TAMPTS : 1;
      unsigned TAMPFREQ : 3;
      unsigned TAMPFLT : 2;
      unsigned TAMP_PRCH : 2;
      unsigned TAMP_PUDIS : 1;
      unsigned : 2;
      unsigned PC13VALUE : 1;
      unsigned PC13MODE : 1;
      unsigned PC14VALUE : 1;
      unsigned PC14MODE : 1;
      unsigned PC15VALUE : 1;
      unsigned PC15MODE : 1;
      unsigned : 8;
    };
  };
} typeRTC_TAFCRBITS;
sfr volatile typeRTC_TAFCRBITS RTC_TAFCRbits absolute 0x40002840;

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

 typedef struct tagRTC_BKP0RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP0RBITS;
sfr volatile typeRTC_BKP0RBITS RTC_BKP0Rbits absolute 0x40002850;

 typedef struct tagRTC_BKP1RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP1RBITS;
sfr volatile typeRTC_BKP1RBITS RTC_BKP1Rbits absolute 0x40002854;

 typedef struct tagRTC_BKP2RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP2RBITS;
sfr volatile typeRTC_BKP2RBITS RTC_BKP2Rbits absolute 0x40002858;

 typedef struct tagRTC_BKP3RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP3RBITS;
sfr volatile typeRTC_BKP3RBITS RTC_BKP3Rbits absolute 0x4000285C;

 typedef struct tagRTC_BKP4RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP4RBITS;
sfr volatile typeRTC_BKP4RBITS RTC_BKP4Rbits absolute 0x40002860;

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
      unsigned : 22;
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
      unsigned TIE : 1;
      unsigned BIE : 1;
      unsigned UDE : 1;
      unsigned CC1DE : 1;
      unsigned : 4;
      unsigned TDE : 1;
      unsigned : 17;
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
      unsigned TIF : 1;
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
      unsigned TG : 1;
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
      unsigned : 25;
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
      unsigned : 16;
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
      unsigned : 16;
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
      unsigned : 22;
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
      unsigned TIE : 1;
      unsigned BIE : 1;
      unsigned UDE : 1;
      unsigned CC1DE : 1;
      unsigned : 4;
      unsigned TDE : 1;
      unsigned : 17;
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
      unsigned TIF : 1;
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
      unsigned TG : 1;
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
      unsigned : 25;
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
      unsigned : 16;
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
      unsigned : 16;
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

 typedef struct tagTSC_CRBITS {
  union {
    struct {
      unsigned TSCE : 1;
      unsigned START : 1;
      unsigned AM : 1;
      unsigned SYNCPOL : 1;
      unsigned IODEF : 1;
      unsigned MCV : 3;
      unsigned : 4;
      unsigned PGPSC : 3;
      unsigned SSPSC : 1;
      unsigned SSE : 1;
      unsigned SSD : 7;
      unsigned CTPL : 4;
      unsigned CTPH : 4;
    };
  };
} typeTSC_CRBITS;
sfr volatile typeTSC_CRBITS TSC_CRbits absolute 0x40024000;

 typedef struct tagTSC_IERBITS {
  union {
    struct {
      unsigned EOAIE : 1;
      unsigned MCEIE : 1;
      unsigned : 30;
    };
  };
} typeTSC_IERBITS;
sfr volatile typeTSC_IERBITS TSC_IERbits absolute 0x40024004;

 typedef struct tagTSC_ICRBITS {
  union {
    struct {
      unsigned EOAIC : 1;
      unsigned MCEIC : 1;
      unsigned : 30;
    };
  };
} typeTSC_ICRBITS;
sfr volatile typeTSC_ICRBITS TSC_ICRbits absolute 0x40024008;

 typedef struct tagTSC_ISRBITS {
  union {
    struct {
      unsigned EOAF : 1;
      unsigned MCEF : 1;
      unsigned : 30;
    };
  };
} typeTSC_ISRBITS;
sfr volatile typeTSC_ISRBITS TSC_ISRbits absolute 0x4002400C;

 typedef struct tagTSC_IOHCRBITS {
  union {
    struct {
      unsigned G1_IO1 : 1;
      unsigned G1_IO2 : 1;
      unsigned G1_IO3 : 1;
      unsigned G1_IO4 : 1;
      unsigned G2_IO1 : 1;
      unsigned G2_IO2 : 1;
      unsigned G2_IO3 : 1;
      unsigned G2_IO4 : 1;
      unsigned G3_IO1 : 1;
      unsigned G3_IO2 : 1;
      unsigned G3_IO3 : 1;
      unsigned G3_IO4 : 1;
      unsigned G4_IO1 : 1;
      unsigned G4_IO2 : 1;
      unsigned G4_IO3 : 1;
      unsigned G4_IO4 : 1;
      unsigned G5_IO1 : 1;
      unsigned G5_IO2 : 1;
      unsigned G5_IO3 : 1;
      unsigned G5_IO4 : 1;
      unsigned G6_IO1 : 1;
      unsigned G6_IO2 : 1;
      unsigned G6_IO3 : 1;
      unsigned G6_IO4 : 1;
      unsigned : 8;
    };
  };
} typeTSC_IOHCRBITS;
sfr volatile typeTSC_IOHCRBITS TSC_IOHCRbits absolute 0x40024010;

 typedef struct tagTSC_IOASCRBITS {
  union {
    struct {
      unsigned G1_IO1 : 1;
      unsigned G1_IO2 : 1;
      unsigned G1_IO3 : 1;
      unsigned G1_IO4 : 1;
      unsigned G2_IO1 : 1;
      unsigned G2_IO2 : 1;
      unsigned G2_IO3 : 1;
      unsigned G2_IO4 : 1;
      unsigned G3_IO1 : 1;
      unsigned G3_IO2 : 1;
      unsigned G3_IO3 : 1;
      unsigned G3_IO4 : 1;
      unsigned G4_IO1 : 1;
      unsigned G4_IO2 : 1;
      unsigned G4_IO3 : 1;
      unsigned G4_IO4 : 1;
      unsigned G5_IO1 : 1;
      unsigned G5_IO2 : 1;
      unsigned G5_IO3 : 1;
      unsigned G5_IO4 : 1;
      unsigned G6_IO1 : 1;
      unsigned G6_IO2 : 1;
      unsigned G6_IO3 : 1;
      unsigned G6_IO4 : 1;
      unsigned : 8;
    };
  };
} typeTSC_IOASCRBITS;
sfr volatile typeTSC_IOASCRBITS TSC_IOASCRbits absolute 0x40024018;

 typedef struct tagTSC_IOSCRBITS {
  union {
    struct {
      unsigned G1_IO1 : 1;
      unsigned G1_IO2 : 1;
      unsigned G1_IO3 : 1;
      unsigned G1_IO4 : 1;
      unsigned G2_IO1 : 1;
      unsigned G2_IO2 : 1;
      unsigned G2_IO3 : 1;
      unsigned G2_IO4 : 1;
      unsigned G3_IO1 : 1;
      unsigned G3_IO2 : 1;
      unsigned G3_IO3 : 1;
      unsigned G3_IO4 : 1;
      unsigned G4_IO1 : 1;
      unsigned G4_IO2 : 1;
      unsigned G4_IO3 : 1;
      unsigned G4_IO4 : 1;
      unsigned G5_IO1 : 1;
      unsigned G5_IO2 : 1;
      unsigned G5_IO3 : 1;
      unsigned G5_IO4 : 1;
      unsigned G6_IO1 : 1;
      unsigned G6_IO2 : 1;
      unsigned G6_IO3 : 1;
      unsigned G6_IO4 : 1;
      unsigned : 8;
    };
  };
} typeTSC_IOSCRBITS;
sfr volatile typeTSC_IOSCRBITS TSC_IOSCRbits absolute 0x40024020;

 typedef struct tagTSC_IOCCRBITS {
  union {
    struct {
      unsigned G1_IO1 : 1;
      unsigned G1_IO2 : 1;
      unsigned G1_IO3 : 1;
      unsigned G1_IO4 : 1;
      unsigned G2_IO1 : 1;
      unsigned G2_IO2 : 1;
      unsigned G2_IO3 : 1;
      unsigned G2_IO4 : 1;
      unsigned G3_IO1 : 1;
      unsigned G3_IO2 : 1;
      unsigned G3_IO3 : 1;
      unsigned G3_IO4 : 1;
      unsigned G4_IO1 : 1;
      unsigned G4_IO2 : 1;
      unsigned G4_IO3 : 1;
      unsigned G4_IO4 : 1;
      unsigned G5_IO1 : 1;
      unsigned G5_IO2 : 1;
      unsigned G5_IO3 : 1;
      unsigned G5_IO4 : 1;
      unsigned G6_IO1 : 1;
      unsigned G6_IO2 : 1;
      unsigned G6_IO3 : 1;
      unsigned G6_IO4 : 1;
      unsigned : 8;
    };
  };
} typeTSC_IOCCRBITS;
sfr volatile typeTSC_IOCCRBITS TSC_IOCCRbits absolute 0x40024028;

 typedef struct tagTSC_IOGCSRBITS {
  union {
    struct {
      unsigned G1E : 1;
      unsigned G2E : 1;
      unsigned G3E : 1;
      unsigned G4E : 1;
      unsigned G5E : 1;
      unsigned G6E : 1;
      unsigned G7E : 1;
      unsigned G8E : 1;
      unsigned : 8;
      unsigned G1S : 1;
      unsigned G2S : 1;
      unsigned G3S : 1;
      unsigned G4S : 1;
      unsigned G5S : 1;
      unsigned G6S : 1;
      unsigned G7S : 1;
      unsigned G8S : 1;
      unsigned : 8;
    };
  };
} typeTSC_IOGCSRBITS;
sfr volatile typeTSC_IOGCSRBITS TSC_IOGCSRbits absolute 0x40024030;

 typedef struct tagTSC_IOG1CRBITS {
  union {
    struct {
      unsigned CNT : 14;
      unsigned : 18;
    };
  };
} typeTSC_IOG1CRBITS;
sfr volatile typeTSC_IOG1CRBITS TSC_IOG1CRbits absolute 0x40024034;

 typedef struct tagTSC_IOG2CRBITS {
  union {
    struct {
      unsigned CNT : 14;
      unsigned : 18;
    };
  };
} typeTSC_IOG2CRBITS;
sfr volatile typeTSC_IOG2CRBITS TSC_IOG2CRbits absolute 0x40024038;

 typedef struct tagTSC_IOG3CRBITS {
  union {
    struct {
      unsigned CNT : 14;
      unsigned : 18;
    };
  };
} typeTSC_IOG3CRBITS;
sfr volatile typeTSC_IOG3CRBITS TSC_IOG3CRbits absolute 0x4002403C;

 typedef struct tagTSC_IOG4CRBITS {
  union {
    struct {
      unsigned CNT : 14;
      unsigned : 18;
    };
  };
} typeTSC_IOG4CRBITS;
sfr volatile typeTSC_IOG4CRBITS TSC_IOG4CRbits absolute 0x40024040;

 typedef struct tagTSC_IOG5CRBITS {
  union {
    struct {
      unsigned CNT : 14;
      unsigned : 18;
    };
  };
} typeTSC_IOG5CRBITS;
sfr volatile typeTSC_IOG5CRBITS TSC_IOG5CRbits absolute 0x40024044;

 typedef struct tagTSC_IOG6CRBITS {
  union {
    struct {
      unsigned CNT : 14;
      unsigned : 18;
    };
  };
} typeTSC_IOG6CRBITS;
sfr volatile typeTSC_IOG6CRBITS TSC_IOG6CRbits absolute 0x40024048;

 typedef struct tagCEC_CRBITS {
  union {
    struct {
      unsigned CECEN : 1;
      unsigned TXSOM : 1;
      unsigned TXEOM : 1;
      unsigned : 29;
    };
  };
} typeCEC_CRBITS;
sfr volatile typeCEC_CRBITS CEC_CRbits absolute 0x40007800;

 typedef struct tagCEC_CFGRBITS {
  union {
    struct {
      unsigned OAR : 4;
      unsigned LSTN : 1;
      unsigned SFT : 3;
      unsigned RXTOL : 1;
      unsigned BRESTP : 1;
      unsigned BREGEN : 1;
      unsigned LBPEGEN : 1;
      unsigned : 20;
    };
  };
} typeCEC_CFGRBITS;
sfr volatile typeCEC_CFGRBITS CEC_CFGRbits absolute 0x40007804;

 typedef struct tagCEC_TXDRBITS {
  union {
    struct {
      unsigned TXD : 8;
      unsigned : 24;
    };
  };
} typeCEC_TXDRBITS;
sfr volatile typeCEC_TXDRBITS CEC_TXDRbits absolute 0x40007808;

 typedef struct tagCEC_RXDRBITS {
  union {
    struct {
      unsigned RXDR : 8;
      unsigned : 24;
    };
  };
} typeCEC_RXDRBITS;
sfr volatile typeCEC_RXDRBITS CEC_RXDRbits absolute 0x4000780C;

 typedef struct tagCEC_ISRBITS {
  union {
    struct {
      unsigned RXBR : 1;
      unsigned RXEND : 1;
      unsigned RXOVR : 1;
      unsigned BRE : 1;
      unsigned SBPE : 1;
      unsigned LBPE : 1;
      unsigned RXACKE : 1;
      unsigned ARBLST : 1;
      unsigned TXBR : 1;
      unsigned TXEND : 1;
      unsigned TXUDR : 1;
      unsigned TXERR : 1;
      unsigned TXACKE : 1;
      unsigned : 19;
    };
  };
} typeCEC_ISRBITS;
sfr volatile typeCEC_ISRBITS CEC_ISRbits absolute 0x40007810;

 typedef struct tagCEC_IERBITS {
  union {
    struct {
      unsigned RXBRIE : 1;
      unsigned RXENDIE : 1;
      unsigned RXOVRIE : 1;
      unsigned BREIE : 1;
      unsigned SBPEIE : 1;
      unsigned LBPEIE : 1;
      unsigned RXACKIE : 1;
      unsigned ARBLSTIE : 1;
      unsigned TXBRIE : 1;
      unsigned TXENDIE : 1;
      unsigned TXUDRIE : 1;
      unsigned TXERRIE : 1;
      unsigned TXACKIE : 1;
      unsigned : 19;
    };
  };
} typeCEC_IERBITS;
sfr volatile typeCEC_IERBITS CEC_IERbits absolute 0x40007814;

 typedef struct tagFLASH_ACRBITS {
  union {
    struct {
      unsigned LATENCY : 3;
      unsigned : 1;
      unsigned PRFTBE : 1;
      unsigned PRFTBS : 1;
      unsigned : 26;
    };
  };
} typeFLASH_ACRBITS;
sfr volatile typeFLASH_ACRBITS FLASH_ACRbits absolute 0x40022000;

 typedef struct tagFLASH_KEYRBITS {
  union {
    struct {
      unsigned FKEYR : 32;
    };
  };
} typeFLASH_KEYRBITS;
sfr volatile typeFLASH_KEYRBITS FLASH_KEYRbits absolute 0x40022004;

 typedef struct tagFLASH_OPTKEYRBITS {
  union {
    struct {
      unsigned OPTKEYR : 32;
    };
  };
} typeFLASH_OPTKEYRBITS;
sfr volatile typeFLASH_OPTKEYRBITS FLASH_OPTKEYRbits absolute 0x40022008;

 typedef struct tagFLASH_SRBITS {
  union {
    struct {
      unsigned BSY : 1;
      unsigned : 1;
      unsigned PGERR : 1;
      unsigned : 1;
      unsigned WRPRT : 1;
      unsigned EOP : 1;
      unsigned : 26;
    };
  };
} typeFLASH_SRBITS;
sfr volatile typeFLASH_SRBITS FLASH_SRbits absolute 0x4002200C;

 typedef struct tagFLASH_CRBITS {
  union {
    struct {
      unsigned PG : 1;
      unsigned PER : 1;
      unsigned MER : 1;
      unsigned : 1;
      unsigned OPTPG : 1;
      unsigned OPTER : 1;
      unsigned STRT : 1;
      unsigned LOCK_ : 1;
      unsigned : 1;
      unsigned OPTWRE : 1;
      unsigned ERRIE : 1;
      unsigned : 1;
      unsigned EOPIE : 1;
      unsigned FORCE_OPTLOAD : 1;
      unsigned : 18;
    };
  };
} typeFLASH_CRBITS;
sfr volatile typeFLASH_CRBITS FLASH_CRbits absolute 0x40022010;

 typedef struct tagFLASH_ARBITS {
  union {
    struct {
      unsigned FAR : 32;
    };
  };
} typeFLASH_ARBITS;
sfr volatile typeFLASH_ARBITS FLASH_ARbits absolute 0x40022014;

 typedef struct tagFLASH_OBRBITS {
  union {
    struct {
      unsigned OPTERR : 1;
      unsigned LEVEL1_PROT : 1;
      unsigned LEVEL2_PROT : 1;
      unsigned : 5;
      unsigned WDG_SW : 1;
      unsigned nRST_STOP : 1;
      unsigned nRST_STDBY : 1;
      unsigned : 1;
      unsigned BOOT1 : 1;
      unsigned VDDA_MONITOR : 1;
      unsigned : 2;
      unsigned Data0 : 8;
      unsigned Data1 : 8;
    };
  };
} typeFLASH_OBRBITS;
sfr volatile typeFLASH_OBRBITS FLASH_OBRbits absolute 0x4002201C;

 typedef struct tagFLASH_WRPRBITS {
  union {
    struct {
      unsigned WRP : 32;
    };
  };
} typeFLASH_WRPRBITS;
sfr volatile typeFLASH_WRPRBITS FLASH_WRPRbits absolute 0x40022020;

 typedef struct tagDBGMCU_IDCODEBITS {
  union {
    struct {
      unsigned DEV_ID : 12;
      unsigned DIV_ID : 4;
      unsigned REV_ID : 16;
    };
  };
} typeDBGMCU_IDCODEBITS;
sfr volatile typeDBGMCU_IDCODEBITS DBGMCU_IDCODEbits absolute 0x40015800;

 typedef struct tagDBGMCU_CRBITS {
  union {
    struct {
      unsigned : 1;
      unsigned DBG_STOP : 1;
      unsigned DBG_STANDBY : 1;
      unsigned : 29;
    };
  };
} typeDBGMCU_CRBITS;
sfr volatile typeDBGMCU_CRBITS DBGMCU_CRbits absolute 0x40015804;

 typedef struct tagDBGMCU_APBLFZBITS {
  union {
    struct {
      unsigned DBG_TIMER2_STOP : 1;
      unsigned DBG_TIMER3_STOP : 1;
      unsigned : 2;
      unsigned DBG_TIMER6_STOP : 1;
      unsigned : 3;
      unsigned DBG_TIMER14_STOP : 1;
      unsigned : 1;
      unsigned DBG_RTC_STOP : 1;
      unsigned DBG_WWDG_STOP : 1;
      unsigned DBG_IWDG_STOP : 1;
      unsigned : 8;
      unsigned I2C1_SMBUS_TIMEOUT : 1;
      unsigned : 10;
    };
  };
} typeDBGMCU_APBLFZBITS;
sfr volatile typeDBGMCU_APBLFZBITS DBGMCU_APBLFZbits absolute 0x40015808;

 typedef struct tagDBGMCU_APBHFZBITS {
  union {
    struct {
      unsigned : 11;
      unsigned DBG_TIMER1_STOP : 1;
      unsigned : 4;
      unsigned DBG_TIMER15_STO : 1;
      unsigned DBG_TIMER16_STO : 1;
      unsigned DBG_TIMER17_STO : 1;
      unsigned : 13;
    };
  };
} typeDBGMCU_APBHFZBITS;
sfr volatile typeDBGMCU_APBHFZBITS DBGMCU_APBHFZbits absolute 0x4001580C;

 typedef struct tagUSB_EP0RBITS {
  union {
    struct {
      unsigned EA : 4;
      unsigned STAT_TX : 2;
      unsigned DTOG_TX : 1;
      unsigned CTR_TX : 1;
      unsigned EP_KIND : 1;
      unsigned EP_TYPE : 2;
      unsigned SETUP : 1;
      unsigned STAT_RX : 2;
      unsigned DTOG_RX : 1;
      unsigned CTR_RX : 1;
      unsigned : 16;
    };
  };
} typeUSB_EP0RBITS;
sfr volatile typeUSB_EP0RBITS USB_EP0Rbits absolute 0x40005C00;

 typedef struct tagUSB_EP1RBITS {
  union {
    struct {
      unsigned EA : 4;
      unsigned STAT_TX : 2;
      unsigned DTOG_TX : 1;
      unsigned CTR_TX : 1;
      unsigned EP_KIND : 1;
      unsigned EP_TYPE : 2;
      unsigned SETUP : 1;
      unsigned STAT_RX : 2;
      unsigned DTOG_RX : 1;
      unsigned CTR_RX : 1;
      unsigned : 16;
    };
  };
} typeUSB_EP1RBITS;
sfr volatile typeUSB_EP1RBITS USB_EP1Rbits absolute 0x40005C04;

 typedef struct tagUSB_EP2RBITS {
  union {
    struct {
      unsigned EA : 4;
      unsigned STAT_TX : 2;
      unsigned DTOG_TX : 1;
      unsigned CTR_TX : 1;
      unsigned EP_KIND : 1;
      unsigned EP_TYPE : 2;
      unsigned SETUP : 1;
      unsigned STAT_RX : 2;
      unsigned DTOG_RX : 1;
      unsigned CTR_RX : 1;
      unsigned : 16;
    };
  };
} typeUSB_EP2RBITS;
sfr volatile typeUSB_EP2RBITS USB_EP2Rbits absolute 0x40005C08;

 typedef struct tagUSB_EP3RBITS {
  union {
    struct {
      unsigned EA : 4;
      unsigned STAT_TX : 2;
      unsigned DTOG_TX : 1;
      unsigned CTR_TX : 1;
      unsigned EP_KIND : 1;
      unsigned EP_TYPE : 2;
      unsigned SETUP : 1;
      unsigned STAT_RX : 2;
      unsigned DTOG_RX : 1;
      unsigned CTR_RX : 1;
      unsigned : 16;
    };
  };
} typeUSB_EP3RBITS;
sfr volatile typeUSB_EP3RBITS USB_EP3Rbits absolute 0x40005C0C;

 typedef struct tagUSB_EP4RBITS {
  union {
    struct {
      unsigned EA : 4;
      unsigned STAT_TX : 2;
      unsigned DTOG_TX : 1;
      unsigned CTR_TX : 1;
      unsigned EP_KIND : 1;
      unsigned EP_TYPE : 2;
      unsigned SETUP : 1;
      unsigned STAT_RX : 2;
      unsigned DTOG_RX : 1;
      unsigned CTR_RX : 1;
      unsigned : 16;
    };
  };
} typeUSB_EP4RBITS;
sfr volatile typeUSB_EP4RBITS USB_EP4Rbits absolute 0x40005C10;

 typedef struct tagUSB_EP5RBITS {
  union {
    struct {
      unsigned EA : 4;
      unsigned STAT_TX : 2;
      unsigned DTOG_TX : 1;
      unsigned CTR_TX : 1;
      unsigned EP_KIND : 1;
      unsigned EP_TYPE : 2;
      unsigned SETUP : 1;
      unsigned STAT_RX : 2;
      unsigned DTOG_RX : 1;
      unsigned CTR_RX : 1;
      unsigned : 16;
    };
  };
} typeUSB_EP5RBITS;
sfr volatile typeUSB_EP5RBITS USB_EP5Rbits absolute 0x40005C14;

 typedef struct tagUSB_EP6RBITS {
  union {
    struct {
      unsigned EA : 4;
      unsigned STAT_TX : 2;
      unsigned DTOG_TX : 1;
      unsigned CTR_TX : 1;
      unsigned EP_KIND : 1;
      unsigned EP_TYPE : 2;
      unsigned SETUP : 1;
      unsigned STAT_RX : 2;
      unsigned DTOG_RX : 1;
      unsigned CTR_RX : 1;
      unsigned : 16;
    };
  };
} typeUSB_EP6RBITS;
sfr volatile typeUSB_EP6RBITS USB_EP6Rbits absolute 0x40005C18;

 typedef struct tagUSB_EP7RBITS {
  union {
    struct {
      unsigned EA : 4;
      unsigned STAT_TX : 2;
      unsigned DTOG_TX : 1;
      unsigned CTR_TX : 1;
      unsigned EP_KIND : 1;
      unsigned EP_TYPE : 2;
      unsigned SETUP : 1;
      unsigned STAT_RX : 2;
      unsigned DTOG_RX : 1;
      unsigned CTR_RX : 1;
      unsigned : 16;
    };
  };
} typeUSB_EP7RBITS;
sfr volatile typeUSB_EP7RBITS USB_EP7Rbits absolute 0x40005C1C;

 typedef struct tagUSB_CNTRBITS {
  union {
    struct {
      unsigned FRES : 1;
      unsigned PDWN : 1;
      unsigned LPMODE : 1;
      unsigned FSUSP : 1;
      unsigned RESUME_ : 1;
      unsigned L1RESUME : 1;
      unsigned : 1;
      unsigned L1REQM : 1;
      unsigned ESOFM : 1;
      unsigned SOFM : 1;
      unsigned RESETM : 1;
      unsigned SUSPM : 1;
      unsigned WKUPM : 1;
      unsigned ERRM : 1;
      unsigned PMAOVRM : 1;
      unsigned CTRM : 1;
      unsigned : 16;
    };
  };
} typeUSB_CNTRBITS;
sfr volatile typeUSB_CNTRBITS USB_CNTRbits absolute 0x40005C40;

 typedef struct tagUSB_ISTRBITS {
  union {
    struct {
      unsigned EP_ID : 4;
      unsigned DIR_ : 1;
      unsigned : 2;
      unsigned L1REQ : 1;
      unsigned ESOF : 1;
      unsigned SOF : 1;
      unsigned RESET_ : 1;
      unsigned SUSP : 1;
      unsigned WKUP : 1;
      unsigned ERR_ : 1;
      unsigned PMAOVR : 1;
      unsigned CTR : 1;
      unsigned : 16;
    };
  };
} typeUSB_ISTRBITS;
sfr volatile typeUSB_ISTRBITS USB_ISTRbits absolute 0x40005C44;

 typedef struct tagUSB_FNRBITS {
  union {
    struct {
      unsigned FN : 11;
      unsigned LSOF : 2;
      unsigned LCK : 1;
      unsigned RXDM : 1;
      unsigned RXDP : 1;
      unsigned : 16;
    };
  };
} typeUSB_FNRBITS;
sfr volatile typeUSB_FNRBITS USB_FNRbits absolute 0x40005C48;

 typedef struct tagUSB_DADDRBITS {
  union {
    struct {
      unsigned ADD : 7;
      unsigned EF : 1;
      unsigned : 24;
    };
  };
} typeUSB_DADDRBITS;
sfr volatile typeUSB_DADDRBITS USB_DADDRbits absolute 0x40005C4C;

 typedef struct tagUSB_BTABLEBITS {
  union {
    struct {
      unsigned : 3;
      unsigned BTABLE : 13;
      unsigned : 16;
    };
  };
} typeUSB_BTABLEBITS;
sfr volatile typeUSB_BTABLEBITS USB_BTABLEbits absolute 0x40005C50;

 typedef struct tagUSB_LPMCSRBITS {
  union {
    struct {
      unsigned LPMEN : 1;
      unsigned LPMACK : 1;
      unsigned : 1;
      unsigned REMWAKE : 1;
      unsigned BESL : 4;
      unsigned : 24;
    };
  };
} typeUSB_LPMCSRBITS;
sfr volatile typeUSB_LPMCSRBITS USB_LPMCSRbits absolute 0x40005C54;

 typedef struct tagUSB_BCDRBITS {
  union {
    struct {
      unsigned BCDEN : 1;
      unsigned DCDEN : 1;
      unsigned PDEN : 1;
      unsigned SDEN : 1;
      unsigned DCDET : 1;
      unsigned PDET : 1;
      unsigned SDET : 1;
      unsigned PS2DET : 1;
      unsigned : 7;
      unsigned DPPU : 1;
      unsigned : 16;
    };
  };
} typeUSB_BCDRBITS;
sfr volatile typeUSB_BCDRBITS USB_BCDRbits absolute 0x40005C58;

 typedef struct tagCRS_CRBITS {
  union {
    struct {
      unsigned SYNCOKIE : 1;
      unsigned SYNCWARNIE : 1;
      unsigned ERRIE : 1;
      unsigned ESYNCIE : 1;
      unsigned : 1;
      unsigned CEN : 1;
      unsigned AUTOTRIMEN : 1;
      unsigned SWSYNC : 1;
      unsigned TRIM : 6;
      unsigned : 18;
    };
  };
} typeCRS_CRBITS;
sfr volatile typeCRS_CRBITS CRS_CRbits absolute 0x40006C00;

 typedef struct tagCRS_CFGRBITS {
  union {
    struct {
      unsigned RELOAD : 16;
      unsigned FELIM : 8;
      unsigned SYNCDIV : 3;
      unsigned : 1;
      unsigned SYNCSRC : 2;
      unsigned : 1;
      unsigned SYNCPOL : 1;
    };
  };
} typeCRS_CFGRBITS;
sfr volatile typeCRS_CFGRBITS CRS_CFGRbits absolute 0x40006C04;

 typedef struct tagCRS_ISRBITS {
  union {
    struct {
      unsigned SYNCOKF : 1;
      unsigned SYNCWARNF : 1;
      unsigned ERRF : 1;
      unsigned ESYNCF : 1;
      unsigned : 4;
      unsigned SYNCERR : 1;
      unsigned SYNCMISS : 1;
      unsigned TRIMOVF : 1;
      unsigned : 4;
      unsigned FEDIR : 1;
      unsigned FECAP : 16;
    };
  };
} typeCRS_ISRBITS;
sfr volatile typeCRS_ISRBITS CRS_ISRbits absolute 0x40006C08;

 typedef struct tagCRS_ICRBITS {
  union {
    struct {
      unsigned SYNCOKC : 1;
      unsigned SYNCWARNC : 1;
      unsigned ERRC : 1;
      unsigned ESYNCC : 1;
      unsigned : 28;
    };
  };
} typeCRS_ICRBITS;
sfr volatile typeCRS_ICRBITS CRS_ICRbits absolute 0x40006C0C;

 typedef struct tagCAN1_MCRBITS {
  union {
    struct {
      unsigned INRQ : 1;
      unsigned SLEEP : 1;
      unsigned TXFP : 1;
      unsigned RFLM : 1;
      unsigned NART : 1;
      unsigned AWUM : 1;
      unsigned ABOM : 1;
      unsigned TTCM : 1;
      unsigned : 7;
      unsigned RESET_ : 1;
      unsigned DBF : 1;
      unsigned : 15;
    };
  };
} typeCAN1_MCRBITS;
sfr volatile typeCAN1_MCRBITS CAN1_MCRbits absolute 0x40006400;

 typedef struct tagCAN1_MSRBITS {
  union {
    struct {
      unsigned INAK : 1;
      unsigned SLAK : 1;
      unsigned ERRI : 1;
      unsigned WKUI : 1;
      unsigned SLAKI : 1;
      unsigned : 3;
      unsigned TXM : 1;
      unsigned RXM : 1;
      unsigned SAMP : 1;
      unsigned RX_ : 1;
      unsigned : 20;
    };
  };
} typeCAN1_MSRBITS;
sfr volatile typeCAN1_MSRBITS CAN1_MSRbits absolute 0x40006404;

 typedef struct tagCAN1_TSRBITS {
  union {
    struct {
      unsigned RQCP0 : 1;
      unsigned TXOK0 : 1;
      unsigned ALST0 : 1;
      unsigned TERR0 : 1;
      unsigned : 3;
      unsigned ABRQ0 : 1;
      unsigned RQCP1 : 1;
      unsigned TXOK1 : 1;
      unsigned ALST1 : 1;
      unsigned TERR1 : 1;
      unsigned : 3;
      unsigned ABRQ1 : 1;
      unsigned RQCP2 : 1;
      unsigned TXOK2 : 1;
      unsigned ALST2 : 1;
      unsigned TERR2 : 1;
      unsigned : 3;
      unsigned ABRQ2 : 1;
      unsigned CODE : 2;
      unsigned TME0 : 1;
      unsigned TME1 : 1;
      unsigned TME2 : 1;
      unsigned LOW0 : 1;
      unsigned LOW1 : 1;
      unsigned LOW2 : 1;
    };
  };
} typeCAN1_TSRBITS;
sfr volatile typeCAN1_TSRBITS CAN1_TSRbits absolute 0x40006408;

 typedef struct tagCAN1_RF0RBITS {
  union {
    struct {
      unsigned FMP0 : 2;
      unsigned : 1;
      unsigned FULL0 : 1;
      unsigned FOVR0 : 1;
      unsigned RFOM0 : 1;
      unsigned : 26;
    };
  };
} typeCAN1_RF0RBITS;
sfr volatile typeCAN1_RF0RBITS CAN1_RF0Rbits absolute 0x4000640C;

 typedef struct tagCAN1_RF1RBITS {
  union {
    struct {
      unsigned FMP1 : 2;
      unsigned : 1;
      unsigned FULL1 : 1;
      unsigned FOVR1 : 1;
      unsigned RFOM1 : 1;
      unsigned : 26;
    };
  };
} typeCAN1_RF1RBITS;
sfr volatile typeCAN1_RF1RBITS CAN1_RF1Rbits absolute 0x40006410;

 typedef struct tagCAN1_IERBITS {
  union {
    struct {
      unsigned TMEIE : 1;
      unsigned FMPIE0 : 1;
      unsigned FFIE0 : 1;
      unsigned FOVIE0 : 1;
      unsigned FMPIE1 : 1;
      unsigned FFIE1 : 1;
      unsigned FOVIE1 : 1;
      unsigned : 1;
      unsigned EWGIE : 1;
      unsigned EPVIE : 1;
      unsigned BOFIE : 1;
      unsigned LECIE : 1;
      unsigned : 3;
      unsigned ERRIE : 1;
      unsigned WKUIE : 1;
      unsigned SLKIE : 1;
      unsigned : 14;
    };
  };
} typeCAN1_IERBITS;
sfr volatile typeCAN1_IERBITS CAN1_IERbits absolute 0x40006414;

 typedef struct tagCAN1_ESRBITS {
  union {
    struct {
      unsigned EWGF : 1;
      unsigned EPVF : 1;
      unsigned BOFF : 1;
      unsigned : 1;
      unsigned LEC : 3;
      unsigned : 9;
      unsigned TEC : 8;
      unsigned REC : 8;
    };
  };
} typeCAN1_ESRBITS;
sfr volatile typeCAN1_ESRBITS CAN1_ESRbits absolute 0x40006418;

 typedef struct tagCAN1_BTRBITS {
  union {
    struct {
      unsigned BRP : 10;
      unsigned : 6;
      unsigned TS1 : 4;
      unsigned TS2 : 3;
      unsigned : 1;
      unsigned SJW : 2;
      unsigned : 4;
      unsigned LBKM : 1;
      unsigned SILM : 1;
    };
  };
} typeCAN1_BTRBITS;
sfr volatile typeCAN1_BTRBITS CAN1_BTRbits absolute 0x4000641C;

 typedef struct tagCAN1_TI0RBITS {
  union {
    struct {
      unsigned TXRQ : 1;
      unsigned RTR : 1;
      unsigned IDE : 1;
      unsigned EXID : 18;
      unsigned STID : 11;
    };
  };
} typeCAN1_TI0RBITS;
sfr volatile typeCAN1_TI0RBITS CAN1_TI0Rbits absolute 0x40006580;

 typedef struct tagCAN1_TDT0RBITS {
  union {
    struct {
      unsigned DLC : 4;
      unsigned : 4;
      unsigned TGT : 1;
      unsigned : 7;
      unsigned TIME : 16;
    };
  };
} typeCAN1_TDT0RBITS;
sfr volatile typeCAN1_TDT0RBITS CAN1_TDT0Rbits absolute 0x40006584;

 typedef struct tagCAN1_TDL0RBITS {
  union {
    struct {
      unsigned DATA0 : 8;
      unsigned DATA1 : 8;
      unsigned DATA2 : 8;
      unsigned DATA3 : 8;
    };
  };
} typeCAN1_TDL0RBITS;
sfr volatile typeCAN1_TDL0RBITS CAN1_TDL0Rbits absolute 0x40006588;

 typedef struct tagCAN1_TDH0RBITS {
  union {
    struct {
      unsigned DATA4 : 8;
      unsigned DATA5 : 8;
      unsigned DATA6 : 8;
      unsigned DATA7 : 8;
    };
  };
} typeCAN1_TDH0RBITS;
sfr volatile typeCAN1_TDH0RBITS CAN1_TDH0Rbits absolute 0x4000658C;

 typedef struct tagCAN1_TI1RBITS {
  union {
    struct {
      unsigned TXRQ : 1;
      unsigned RTR : 1;
      unsigned IDE : 1;
      unsigned EXID : 18;
      unsigned STID : 11;
    };
  };
} typeCAN1_TI1RBITS;
sfr volatile typeCAN1_TI1RBITS CAN1_TI1Rbits absolute 0x40006590;

 typedef struct tagCAN1_TDT1RBITS {
  union {
    struct {
      unsigned DLC : 4;
      unsigned : 4;
      unsigned TGT : 1;
      unsigned : 7;
      unsigned TIME : 16;
    };
  };
} typeCAN1_TDT1RBITS;
sfr volatile typeCAN1_TDT1RBITS CAN1_TDT1Rbits absolute 0x40006594;

 typedef struct tagCAN1_TDL1RBITS {
  union {
    struct {
      unsigned DATA0 : 8;
      unsigned DATA1 : 8;
      unsigned DATA2 : 8;
      unsigned DATA3 : 8;
    };
  };
} typeCAN1_TDL1RBITS;
sfr volatile typeCAN1_TDL1RBITS CAN1_TDL1Rbits absolute 0x40006598;

 typedef struct tagCAN1_TDH1RBITS {
  union {
    struct {
      unsigned DATA4 : 8;
      unsigned DATA5 : 8;
      unsigned DATA6 : 8;
      unsigned DATA7 : 8;
    };
  };
} typeCAN1_TDH1RBITS;
sfr volatile typeCAN1_TDH1RBITS CAN1_TDH1Rbits absolute 0x4000659C;

 typedef struct tagCAN1_TI2RBITS {
  union {
    struct {
      unsigned TXRQ : 1;
      unsigned RTR : 1;
      unsigned IDE : 1;
      unsigned EXID : 18;
      unsigned STID : 11;
    };
  };
} typeCAN1_TI2RBITS;
sfr volatile typeCAN1_TI2RBITS CAN1_TI2Rbits absolute 0x400065A0;

 typedef struct tagCAN1_TDT2RBITS {
  union {
    struct {
      unsigned DLC : 4;
      unsigned : 4;
      unsigned TGT : 1;
      unsigned : 7;
      unsigned TIME : 16;
    };
  };
} typeCAN1_TDT2RBITS;
sfr volatile typeCAN1_TDT2RBITS CAN1_TDT2Rbits absolute 0x400065A4;

 typedef struct tagCAN1_TDL2RBITS {
  union {
    struct {
      unsigned DATA0 : 8;
      unsigned DATA1 : 8;
      unsigned DATA2 : 8;
      unsigned DATA3 : 8;
    };
  };
} typeCAN1_TDL2RBITS;
sfr volatile typeCAN1_TDL2RBITS CAN1_TDL2Rbits absolute 0x400065A8;

 typedef struct tagCAN1_TDH2RBITS {
  union {
    struct {
      unsigned DATA4 : 8;
      unsigned DATA5 : 8;
      unsigned DATA6 : 8;
      unsigned DATA7 : 8;
    };
  };
} typeCAN1_TDH2RBITS;
sfr volatile typeCAN1_TDH2RBITS CAN1_TDH2Rbits absolute 0x400065AC;

 typedef struct tagCAN1_RI0RBITS {
  union {
    struct {
      unsigned : 1;
      unsigned RTR : 1;
      unsigned IDE : 1;
      unsigned EXID : 18;
      unsigned STID : 11;
    };
  };
} typeCAN1_RI0RBITS;
sfr volatile typeCAN1_RI0RBITS CAN1_RI0Rbits absolute 0x400065B0;

 typedef struct tagCAN1_RDT0RBITS {
  union {
    struct {
      unsigned DLC : 4;
      unsigned : 4;
      unsigned FMI : 8;
      unsigned TIME : 16;
    };
  };
} typeCAN1_RDT0RBITS;
sfr volatile typeCAN1_RDT0RBITS CAN1_RDT0Rbits absolute 0x400065B4;

 typedef struct tagCAN1_RDL0RBITS {
  union {
    struct {
      unsigned DATA0 : 8;
      unsigned DATA1 : 8;
      unsigned DATA2 : 8;
      unsigned DATA3 : 8;
    };
  };
} typeCAN1_RDL0RBITS;
sfr volatile typeCAN1_RDL0RBITS CAN1_RDL0Rbits absolute 0x400065B8;

 typedef struct tagCAN1_RDH0RBITS {
  union {
    struct {
      unsigned DATA4 : 8;
      unsigned DATA5 : 8;
      unsigned DATA6 : 8;
      unsigned DATA7 : 8;
    };
  };
} typeCAN1_RDH0RBITS;
sfr volatile typeCAN1_RDH0RBITS CAN1_RDH0Rbits absolute 0x400065BC;

 typedef struct tagCAN1_RI1RBITS {
  union {
    struct {
      unsigned : 1;
      unsigned RTR : 1;
      unsigned IDE : 1;
      unsigned EXID : 18;
      unsigned STID : 11;
    };
  };
} typeCAN1_RI1RBITS;
sfr volatile typeCAN1_RI1RBITS CAN1_RI1Rbits absolute 0x400065C0;

 typedef struct tagCAN1_RDT1RBITS {
  union {
    struct {
      unsigned DLC : 4;
      unsigned : 4;
      unsigned FMI : 8;
      unsigned TIME : 16;
    };
  };
} typeCAN1_RDT1RBITS;
sfr volatile typeCAN1_RDT1RBITS CAN1_RDT1Rbits absolute 0x400065C4;

 typedef struct tagCAN1_RDL1RBITS {
  union {
    struct {
      unsigned DATA0 : 8;
      unsigned DATA1 : 8;
      unsigned DATA2 : 8;
      unsigned DATA3 : 8;
    };
  };
} typeCAN1_RDL1RBITS;
sfr volatile typeCAN1_RDL1RBITS CAN1_RDL1Rbits absolute 0x400065C8;

 typedef struct tagCAN1_RDH1RBITS {
  union {
    struct {
      unsigned DATA4 : 8;
      unsigned DATA5 : 8;
      unsigned DATA6 : 8;
      unsigned DATA7 : 8;
    };
  };
} typeCAN1_RDH1RBITS;
sfr volatile typeCAN1_RDH1RBITS CAN1_RDH1Rbits absolute 0x400065CC;

 typedef struct tagCAN1_FMRBITS {
  union {
    struct {
      unsigned FINIT : 1;
      unsigned : 7;
      unsigned CAN2SB : 6;
      unsigned : 18;
    };
  };
} typeCAN1_FMRBITS;
sfr volatile typeCAN1_FMRBITS CAN1_FMRbits absolute 0x40006600;

 typedef struct tagCAN1_FM1RBITS {
  union {
    struct {
      unsigned FBM0 : 1;
      unsigned FBM1 : 1;
      unsigned FBM2 : 1;
      unsigned FBM3 : 1;
      unsigned FBM4 : 1;
      unsigned FBM5 : 1;
      unsigned FBM6 : 1;
      unsigned FBM7 : 1;
      unsigned FBM8 : 1;
      unsigned FBM9 : 1;
      unsigned FBM10 : 1;
      unsigned FBM11 : 1;
      unsigned FBM12 : 1;
      unsigned FBM13 : 1;
      unsigned FBM14 : 1;
      unsigned FBM15 : 1;
      unsigned FBM16 : 1;
      unsigned FBM17 : 1;
      unsigned FBM18 : 1;
      unsigned FBM19 : 1;
      unsigned FBM20 : 1;
      unsigned FBM21 : 1;
      unsigned FBM22 : 1;
      unsigned FBM23 : 1;
      unsigned FBM24 : 1;
      unsigned FBM25 : 1;
      unsigned FBM26 : 1;
      unsigned FBM27 : 1;
      unsigned : 4;
    };
  };
} typeCAN1_FM1RBITS;
sfr volatile typeCAN1_FM1RBITS CAN1_FM1Rbits absolute 0x40006604;

 typedef struct tagCAN1_FS1RBITS {
  union {
    struct {
      unsigned FSC0 : 1;
      unsigned FSC1 : 1;
      unsigned FSC2 : 1;
      unsigned FSC3 : 1;
      unsigned FSC4 : 1;
      unsigned FSC5 : 1;
      unsigned FSC6 : 1;
      unsigned FSC7 : 1;
      unsigned FSC8 : 1;
      unsigned FSC9 : 1;
      unsigned FSC10 : 1;
      unsigned FSC11 : 1;
      unsigned FSC12 : 1;
      unsigned FSC13 : 1;
      unsigned FSC14 : 1;
      unsigned FSC15 : 1;
      unsigned FSC16 : 1;
      unsigned FSC17 : 1;
      unsigned FSC18 : 1;
      unsigned FSC19 : 1;
      unsigned FSC20 : 1;
      unsigned FSC21 : 1;
      unsigned FSC22 : 1;
      unsigned FSC23 : 1;
      unsigned FSC24 : 1;
      unsigned FSC25 : 1;
      unsigned FSC26 : 1;
      unsigned FSC27 : 1;
      unsigned : 4;
    };
  };
} typeCAN1_FS1RBITS;
sfr volatile typeCAN1_FS1RBITS CAN1_FS1Rbits absolute 0x4000660C;

 typedef struct tagCAN1_FFA1RBITS {
  union {
    struct {
      unsigned FFA0 : 1;
      unsigned FFA1 : 1;
      unsigned FFA2 : 1;
      unsigned FFA3 : 1;
      unsigned FFA4 : 1;
      unsigned FFA5 : 1;
      unsigned FFA6 : 1;
      unsigned FFA7 : 1;
      unsigned FFA8 : 1;
      unsigned FFA9 : 1;
      unsigned FFA10 : 1;
      unsigned FFA11 : 1;
      unsigned FFA12 : 1;
      unsigned FFA13 : 1;
      unsigned FFA14 : 1;
      unsigned FFA15 : 1;
      unsigned FFA16 : 1;
      unsigned FFA17 : 1;
      unsigned FFA18 : 1;
      unsigned FFA19 : 1;
      unsigned FFA20 : 1;
      unsigned FFA21 : 1;
      unsigned FFA22 : 1;
      unsigned FFA23 : 1;
      unsigned FFA24 : 1;
      unsigned FFA25 : 1;
      unsigned FFA26 : 1;
      unsigned FFA27 : 1;
      unsigned : 4;
    };
  };
} typeCAN1_FFA1RBITS;
sfr volatile typeCAN1_FFA1RBITS CAN1_FFA1Rbits absolute 0x40006614;

 typedef struct tagCAN1_FA1RBITS {
  union {
    struct {
      unsigned FACT0 : 1;
      unsigned FACT1 : 1;
      unsigned FACT2 : 1;
      unsigned FACT3 : 1;
      unsigned FACT4 : 1;
      unsigned FACT5 : 1;
      unsigned FACT6 : 1;
      unsigned FACT7 : 1;
      unsigned FACT8 : 1;
      unsigned FACT9 : 1;
      unsigned FACT10 : 1;
      unsigned FACT11 : 1;
      unsigned FACT12 : 1;
      unsigned FACT13 : 1;
      unsigned FACT14 : 1;
      unsigned FACT15 : 1;
      unsigned FACT16 : 1;
      unsigned FACT17 : 1;
      unsigned FACT18 : 1;
      unsigned FACT19 : 1;
      unsigned FACT20 : 1;
      unsigned FACT21 : 1;
      unsigned FACT22 : 1;
      unsigned FACT23 : 1;
      unsigned FACT24 : 1;
      unsigned FACT25 : 1;
      unsigned FACT26 : 1;
      unsigned FACT27 : 1;
      unsigned : 4;
    };
  };
} typeCAN1_FA1RBITS;
sfr volatile typeCAN1_FA1RBITS CAN1_FA1Rbits absolute 0x4000661C;

 typedef struct tagCAN1_F0R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F0R1BITS;
sfr volatile typeCAN1_F0R1BITS CAN1_F0R1bits absolute 0x40006640;

 typedef struct tagCAN1_F0R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F0R2BITS;
sfr volatile typeCAN1_F0R2BITS CAN1_F0R2bits absolute 0x40006644;

 typedef struct tagCAN1_F1R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F1R1BITS;
sfr volatile typeCAN1_F1R1BITS CAN1_F1R1bits absolute 0x40006648;

 typedef struct tagCAN1_F1R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F1R2BITS;
sfr volatile typeCAN1_F1R2BITS CAN1_F1R2bits absolute 0x4000664C;

 typedef struct tagCAN1_F2R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F2R1BITS;
sfr volatile typeCAN1_F2R1BITS CAN1_F2R1bits absolute 0x40006650;

 typedef struct tagCAN1_F2R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F2R2BITS;
sfr volatile typeCAN1_F2R2BITS CAN1_F2R2bits absolute 0x40006654;

 typedef struct tagCAN1_F3R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F3R1BITS;
sfr volatile typeCAN1_F3R1BITS CAN1_F3R1bits absolute 0x40006658;

 typedef struct tagCAN1_F3R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F3R2BITS;
sfr volatile typeCAN1_F3R2BITS CAN1_F3R2bits absolute 0x4000665C;

 typedef struct tagCAN1_F4R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F4R1BITS;
sfr volatile typeCAN1_F4R1BITS CAN1_F4R1bits absolute 0x40006660;

 typedef struct tagCAN1_F4R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F4R2BITS;
sfr volatile typeCAN1_F4R2BITS CAN1_F4R2bits absolute 0x40006664;

 typedef struct tagCAN1_F5R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F5R1BITS;
sfr volatile typeCAN1_F5R1BITS CAN1_F5R1bits absolute 0x40006668;

 typedef struct tagCAN1_F5R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F5R2BITS;
sfr volatile typeCAN1_F5R2BITS CAN1_F5R2bits absolute 0x4000666C;

 typedef struct tagCAN1_F6R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F6R1BITS;
sfr volatile typeCAN1_F6R1BITS CAN1_F6R1bits absolute 0x40006670;

 typedef struct tagCAN1_F6R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F6R2BITS;
sfr volatile typeCAN1_F6R2BITS CAN1_F6R2bits absolute 0x40006674;

 typedef struct tagCAN1_F7R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F7R1BITS;
sfr volatile typeCAN1_F7R1BITS CAN1_F7R1bits absolute 0x40006678;

 typedef struct tagCAN1_F7R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F7R2BITS;
sfr volatile typeCAN1_F7R2BITS CAN1_F7R2bits absolute 0x4000667C;

 typedef struct tagCAN1_F8R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F8R1BITS;
sfr volatile typeCAN1_F8R1BITS CAN1_F8R1bits absolute 0x40006680;

 typedef struct tagCAN1_F8R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F8R2BITS;
sfr volatile typeCAN1_F8R2BITS CAN1_F8R2bits absolute 0x40006684;

 typedef struct tagCAN1_F9R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F9R1BITS;
sfr volatile typeCAN1_F9R1BITS CAN1_F9R1bits absolute 0x40006688;

 typedef struct tagCAN1_F9R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F9R2BITS;
sfr volatile typeCAN1_F9R2BITS CAN1_F9R2bits absolute 0x4000668C;

 typedef struct tagCAN1_F10R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F10R1BITS;
sfr volatile typeCAN1_F10R1BITS CAN1_F10R1bits absolute 0x40006690;

 typedef struct tagCAN1_F10R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F10R2BITS;
sfr volatile typeCAN1_F10R2BITS CAN1_F10R2bits absolute 0x40006694;

 typedef struct tagCAN1_F11R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F11R1BITS;
sfr volatile typeCAN1_F11R1BITS CAN1_F11R1bits absolute 0x40006698;

 typedef struct tagCAN1_F11R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F11R2BITS;
sfr volatile typeCAN1_F11R2BITS CAN1_F11R2bits absolute 0x4000669C;

 typedef struct tagCAN1_F12R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F12R1BITS;
sfr volatile typeCAN1_F12R1BITS CAN1_F12R1bits absolute 0x400066A0;

 typedef struct tagCAN1_F12R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F12R2BITS;
sfr volatile typeCAN1_F12R2BITS CAN1_F12R2bits absolute 0x400066A4;

 typedef struct tagCAN1_F13R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F13R1BITS;
sfr volatile typeCAN1_F13R1BITS CAN1_F13R1bits absolute 0x400066A8;

 typedef struct tagCAN1_F13R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F13R2BITS;
sfr volatile typeCAN1_F13R2BITS CAN1_F13R2bits absolute 0x400066AC;

 typedef struct tagCAN1_F14R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F14R1BITS;
sfr volatile typeCAN1_F14R1BITS CAN1_F14R1bits absolute 0x400066B0;

 typedef struct tagCAN1_F14R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F14R2BITS;
sfr volatile typeCAN1_F14R2BITS CAN1_F14R2bits absolute 0x400066B4;

 typedef struct tagCAN1_F15R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F15R1BITS;
sfr volatile typeCAN1_F15R1BITS CAN1_F15R1bits absolute 0x400066B8;

 typedef struct tagCAN1_F15R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F15R2BITS;
sfr volatile typeCAN1_F15R2BITS CAN1_F15R2bits absolute 0x400066BC;

 typedef struct tagCAN1_F16R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F16R1BITS;
sfr volatile typeCAN1_F16R1BITS CAN1_F16R1bits absolute 0x400066C0;

 typedef struct tagCAN1_F16R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F16R2BITS;
sfr volatile typeCAN1_F16R2BITS CAN1_F16R2bits absolute 0x400066C4;

 typedef struct tagCAN1_F17R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F17R1BITS;
sfr volatile typeCAN1_F17R1BITS CAN1_F17R1bits absolute 0x400066C8;

 typedef struct tagCAN1_F17R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F17R2BITS;
sfr volatile typeCAN1_F17R2BITS CAN1_F17R2bits absolute 0x400066CC;

 typedef struct tagCAN1_F18R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F18R1BITS;
sfr volatile typeCAN1_F18R1BITS CAN1_F18R1bits absolute 0x400066D0;

 typedef struct tagCAN1_F18R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F18R2BITS;
sfr volatile typeCAN1_F18R2BITS CAN1_F18R2bits absolute 0x400066D4;

 typedef struct tagCAN1_F19R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F19R1BITS;
sfr volatile typeCAN1_F19R1BITS CAN1_F19R1bits absolute 0x400066D8;

 typedef struct tagCAN1_F19R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F19R2BITS;
sfr volatile typeCAN1_F19R2BITS CAN1_F19R2bits absolute 0x400066DC;

 typedef struct tagCAN1_F20R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F20R1BITS;
sfr volatile typeCAN1_F20R1BITS CAN1_F20R1bits absolute 0x400066E0;

 typedef struct tagCAN1_F20R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F20R2BITS;
sfr volatile typeCAN1_F20R2BITS CAN1_F20R2bits absolute 0x400066E4;

 typedef struct tagCAN1_F21R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F21R1BITS;
sfr volatile typeCAN1_F21R1BITS CAN1_F21R1bits absolute 0x400066E8;

 typedef struct tagCAN1_F21R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F21R2BITS;
sfr volatile typeCAN1_F21R2BITS CAN1_F21R2bits absolute 0x400066EC;

 typedef struct tagCAN1_F22R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F22R1BITS;
sfr volatile typeCAN1_F22R1BITS CAN1_F22R1bits absolute 0x400066F0;

 typedef struct tagCAN1_F22R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F22R2BITS;
sfr volatile typeCAN1_F22R2BITS CAN1_F22R2bits absolute 0x400066F4;

 typedef struct tagCAN1_F23R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F23R1BITS;
sfr volatile typeCAN1_F23R1BITS CAN1_F23R1bits absolute 0x400066F8;

 typedef struct tagCAN1_F23R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F23R2BITS;
sfr volatile typeCAN1_F23R2BITS CAN1_F23R2bits absolute 0x400066FC;

 typedef struct tagCAN1_F24R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F24R1BITS;
sfr volatile typeCAN1_F24R1BITS CAN1_F24R1bits absolute 0x40006700;

 typedef struct tagCAN1_F24R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F24R2BITS;
sfr volatile typeCAN1_F24R2BITS CAN1_F24R2bits absolute 0x40006704;

 typedef struct tagCAN1_F25R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F25R1BITS;
sfr volatile typeCAN1_F25R1BITS CAN1_F25R1bits absolute 0x40006708;

 typedef struct tagCAN1_F25R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F25R2BITS;
sfr volatile typeCAN1_F25R2BITS CAN1_F25R2bits absolute 0x4000670C;

 typedef struct tagCAN1_F26R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F26R1BITS;
sfr volatile typeCAN1_F26R1BITS CAN1_F26R1bits absolute 0x40006710;

 typedef struct tagCAN1_F26R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F26R2BITS;
sfr volatile typeCAN1_F26R2BITS CAN1_F26R2bits absolute 0x40006714;

 typedef struct tagCAN1_F27R1BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F27R1BITS;
sfr volatile typeCAN1_F27R1BITS CAN1_F27R1bits absolute 0x40006718;

 typedef struct tagCAN1_F27R2BITS {
  union {
    struct {
      unsigned FB0 : 1;
      unsigned FB1 : 1;
      unsigned FB2 : 1;
      unsigned FB3 : 1;
      unsigned FB4 : 1;
      unsigned FB5 : 1;
      unsigned FB6 : 1;
      unsigned FB7 : 1;
      unsigned FB8 : 1;
      unsigned FB9 : 1;
      unsigned FB10 : 1;
      unsigned FB11 : 1;
      unsigned FB12 : 1;
      unsigned FB13 : 1;
      unsigned FB14 : 1;
      unsigned FB15 : 1;
      unsigned FB16 : 1;
      unsigned FB17 : 1;
      unsigned FB18 : 1;
      unsigned FB19 : 1;
      unsigned FB20 : 1;
      unsigned FB21 : 1;
      unsigned FB22 : 1;
      unsigned FB23 : 1;
      unsigned FB24 : 1;
      unsigned FB25 : 1;
      unsigned FB26 : 1;
      unsigned FB27 : 1;
      unsigned FB28 : 1;
      unsigned FB29 : 1;
      unsigned FB30 : 1;
      unsigned FB31 : 1;
    };
  };
} typeCAN1_F27R2BITS;
sfr volatile typeCAN1_F27R2BITS CAN1_F27R2bits absolute 0x4000671C;
