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
const unsigned long _FLASH_ERASE = 256;
const unsigned long _FLASH_WRITE_LATCH = 4;


// Interrupt Vector Table Constants

const IVT_INT_NMI                = 2;
const IVT_INT_HardFault          = 3;
const IVT_INT_MemManage          = 4;
const IVT_INT_BusFault           = 5;
const IVT_INT_UsageFault         = 6;
const IVT_INT_RESERVED1          = 7;
const IVT_INT_RESERVED2          = 8;
const IVT_INT_RESERVED3          = 9;
const IVT_INT_RESERVED4          = 10;
const IVT_INT_SVCall             = 11;
const IVT_INT_DebugMon           = 12;
const IVT_INT_RESERVED5          = 13;
const IVT_INT_PendSV             = 14;
const IVT_INT_SysTick            = 15;
const IVT_INT_WWDG               = 16;
const IVT_INT_PVD                = 17;
const IVT_INT_RTC                = 18;
const IVT_INT_FLASH              = 19;
const IVT_INT_RCC_CRS            = 20;
const IVT_INT_EXTI0_1            = 21;
const IVT_INT_EXTI2_3            = 22;
const IVT_INT_EXTI4_15           = 23;
const IVT_INT_RESERVD6           = 24;
const IVT_INT_DMA_CH1            = 25;
const IVT_INT_DMA_CH2_CH3        = 26;
const IVT_INT_DMA_CH4_CH7        = 27;
const IVT_INT_ADC_COMP           = 28;
const IVT_INT_LPTIM1             = 29;
const IVT_INT_RESERVED7          = 30;
const IVT_INT_TIM2               = 31;
const IVT_INT_RESERVED8          = 32;
const IVT_INT_TIM6_DAC           = 33;
const IVT_INT_RESERVED9          = 34;
const IVT_INT_RESERVED10         = 35;
const IVT_INT_TIM21              = 36;
const IVT_INT_RESERVED11         = 37;
const IVT_INT_TIM22              = 38;
const IVT_INT_I2C1               = 39;
const IVT_INT_I2C2               = 40;
const IVT_INT_SPI1               = 41;
const IVT_INT_SPI2               = 42;
const IVT_INT_USART1             = 43;
const IVT_INT_USART2             = 44;
const IVT_INT_LPUART1            = 45;


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
sfr unsigned long   volatile AES_CR               absolute 0x40026000;
    const register unsigned short int DMAOUTEN = 12;
    sbit  DMAOUTEN_bit at AES_CR.B12;
    const register unsigned short int DMAINEN = 11;
    sbit  DMAINEN_bit at AES_CR.B11;
    const register unsigned short int ERRIE = 10;
    sbit  ERRIE_bit at AES_CR.B10;
    const register unsigned short int CCFIE = 9;
    sbit  CCFIE_bit at AES_CR.B9;
    const register unsigned short int ERRC = 8;
    sbit  ERRC_bit at AES_CR.B8;
    const register unsigned short int CCFC = 7;
    sbit  CCFC_bit at AES_CR.B7;
    const register unsigned short int CHMOD0 = 5;
    sbit  CHMOD0_bit at AES_CR.B5;
    const register unsigned short int CHMOD1 = 6;
    sbit  CHMOD1_bit at AES_CR.B6;
    const register unsigned short int MODE0 = 3;
    sbit  MODE0_bit at AES_CR.B3;
    const register unsigned short int MODE1 = 4;
    sbit  MODE1_bit at AES_CR.B4;
    const register unsigned short int DATATYPE0 = 1;
    sbit  DATATYPE0_bit at AES_CR.B1;
    const register unsigned short int DATATYPE1 = 2;
    sbit  DATATYPE1_bit at AES_CR.B2;
    const register unsigned short int EN = 0;
    sbit  EN_bit at AES_CR.B0;

sfr unsigned long   volatile AES_SR               absolute 0x40026004;
    const register unsigned short int WRERR = 2;
    sbit  WRERR_bit at AES_SR.B2;
    const register unsigned short int RDERR = 1;
    sbit  RDERR_bit at AES_SR.B1;
    const register unsigned short int CCF = 0;
    sbit  CCF_bit at AES_SR.B0;

sfr unsigned long   volatile AES_DINR             absolute 0x40026008;
    const register unsigned short int AES_DINR0 = 0;
    sbit  AES_DINR0_bit at AES_DINR.B0;
    const register unsigned short int AES_DINR1 = 1;
    sbit  AES_DINR1_bit at AES_DINR.B1;
    const register unsigned short int AES_DINR2 = 2;
    sbit  AES_DINR2_bit at AES_DINR.B2;
    const register unsigned short int AES_DINR3 = 3;
    sbit  AES_DINR3_bit at AES_DINR.B3;
    const register unsigned short int AES_DINR4 = 4;
    sbit  AES_DINR4_bit at AES_DINR.B4;
    const register unsigned short int AES_DINR5 = 5;
    sbit  AES_DINR5_bit at AES_DINR.B5;
    const register unsigned short int AES_DINR6 = 6;
    sbit  AES_DINR6_bit at AES_DINR.B6;
    const register unsigned short int AES_DINR7 = 7;
    sbit  AES_DINR7_bit at AES_DINR.B7;
    const register unsigned short int AES_DINR8 = 8;
    sbit  AES_DINR8_bit at AES_DINR.B8;
    const register unsigned short int AES_DINR9 = 9;
    sbit  AES_DINR9_bit at AES_DINR.B9;
    const register unsigned short int AES_DINR10 = 10;
    sbit  AES_DINR10_bit at AES_DINR.B10;
    const register unsigned short int AES_DINR11 = 11;
    sbit  AES_DINR11_bit at AES_DINR.B11;
    const register unsigned short int AES_DINR12 = 12;
    sbit  AES_DINR12_bit at AES_DINR.B12;
    const register unsigned short int AES_DINR13 = 13;
    sbit  AES_DINR13_bit at AES_DINR.B13;
    const register unsigned short int AES_DINR14 = 14;
    sbit  AES_DINR14_bit at AES_DINR.B14;
    const register unsigned short int AES_DINR15 = 15;
    sbit  AES_DINR15_bit at AES_DINR.B15;
    const register unsigned short int AES_DINR16 = 16;
    sbit  AES_DINR16_bit at AES_DINR.B16;
    const register unsigned short int AES_DINR17 = 17;
    sbit  AES_DINR17_bit at AES_DINR.B17;
    const register unsigned short int AES_DINR18 = 18;
    sbit  AES_DINR18_bit at AES_DINR.B18;
    const register unsigned short int AES_DINR19 = 19;
    sbit  AES_DINR19_bit at AES_DINR.B19;
    const register unsigned short int AES_DINR20 = 20;
    sbit  AES_DINR20_bit at AES_DINR.B20;
    const register unsigned short int AES_DINR21 = 21;
    sbit  AES_DINR21_bit at AES_DINR.B21;
    const register unsigned short int AES_DINR22 = 22;
    sbit  AES_DINR22_bit at AES_DINR.B22;
    const register unsigned short int AES_DINR23 = 23;
    sbit  AES_DINR23_bit at AES_DINR.B23;
    const register unsigned short int AES_DINR24 = 24;
    sbit  AES_DINR24_bit at AES_DINR.B24;
    const register unsigned short int AES_DINR25 = 25;
    sbit  AES_DINR25_bit at AES_DINR.B25;
    const register unsigned short int AES_DINR26 = 26;
    sbit  AES_DINR26_bit at AES_DINR.B26;
    const register unsigned short int AES_DINR27 = 27;
    sbit  AES_DINR27_bit at AES_DINR.B27;
    const register unsigned short int AES_DINR28 = 28;
    sbit  AES_DINR28_bit at AES_DINR.B28;
    const register unsigned short int AES_DINR29 = 29;
    sbit  AES_DINR29_bit at AES_DINR.B29;
    const register unsigned short int AES_DINR30 = 30;
    sbit  AES_DINR30_bit at AES_DINR.B30;
    const register unsigned short int AES_DINR31 = 31;
    sbit  AES_DINR31_bit at AES_DINR.B31;

sfr unsigned long   volatile AES_DOUTR            absolute 0x4002600C;
    const register unsigned short int AES_DOUTR0 = 0;
    sbit  AES_DOUTR0_bit at AES_DOUTR.B0;
    const register unsigned short int AES_DOUTR1 = 1;
    sbit  AES_DOUTR1_bit at AES_DOUTR.B1;
    const register unsigned short int AES_DOUTR2 = 2;
    sbit  AES_DOUTR2_bit at AES_DOUTR.B2;
    const register unsigned short int AES_DOUTR3 = 3;
    sbit  AES_DOUTR3_bit at AES_DOUTR.B3;
    const register unsigned short int AES_DOUTR4 = 4;
    sbit  AES_DOUTR4_bit at AES_DOUTR.B4;
    const register unsigned short int AES_DOUTR5 = 5;
    sbit  AES_DOUTR5_bit at AES_DOUTR.B5;
    const register unsigned short int AES_DOUTR6 = 6;
    sbit  AES_DOUTR6_bit at AES_DOUTR.B6;
    const register unsigned short int AES_DOUTR7 = 7;
    sbit  AES_DOUTR7_bit at AES_DOUTR.B7;
    const register unsigned short int AES_DOUTR8 = 8;
    sbit  AES_DOUTR8_bit at AES_DOUTR.B8;
    const register unsigned short int AES_DOUTR9 = 9;
    sbit  AES_DOUTR9_bit at AES_DOUTR.B9;
    const register unsigned short int AES_DOUTR10 = 10;
    sbit  AES_DOUTR10_bit at AES_DOUTR.B10;
    const register unsigned short int AES_DOUTR11 = 11;
    sbit  AES_DOUTR11_bit at AES_DOUTR.B11;
    const register unsigned short int AES_DOUTR12 = 12;
    sbit  AES_DOUTR12_bit at AES_DOUTR.B12;
    const register unsigned short int AES_DOUTR13 = 13;
    sbit  AES_DOUTR13_bit at AES_DOUTR.B13;
    const register unsigned short int AES_DOUTR14 = 14;
    sbit  AES_DOUTR14_bit at AES_DOUTR.B14;
    const register unsigned short int AES_DOUTR15 = 15;
    sbit  AES_DOUTR15_bit at AES_DOUTR.B15;
    const register unsigned short int AES_DOUTR16 = 16;
    sbit  AES_DOUTR16_bit at AES_DOUTR.B16;
    const register unsigned short int AES_DOUTR17 = 17;
    sbit  AES_DOUTR17_bit at AES_DOUTR.B17;
    const register unsigned short int AES_DOUTR18 = 18;
    sbit  AES_DOUTR18_bit at AES_DOUTR.B18;
    const register unsigned short int AES_DOUTR19 = 19;
    sbit  AES_DOUTR19_bit at AES_DOUTR.B19;
    const register unsigned short int AES_DOUTR20 = 20;
    sbit  AES_DOUTR20_bit at AES_DOUTR.B20;
    const register unsigned short int AES_DOUTR21 = 21;
    sbit  AES_DOUTR21_bit at AES_DOUTR.B21;
    const register unsigned short int AES_DOUTR22 = 22;
    sbit  AES_DOUTR22_bit at AES_DOUTR.B22;
    const register unsigned short int AES_DOUTR23 = 23;
    sbit  AES_DOUTR23_bit at AES_DOUTR.B23;
    const register unsigned short int AES_DOUTR24 = 24;
    sbit  AES_DOUTR24_bit at AES_DOUTR.B24;
    const register unsigned short int AES_DOUTR25 = 25;
    sbit  AES_DOUTR25_bit at AES_DOUTR.B25;
    const register unsigned short int AES_DOUTR26 = 26;
    sbit  AES_DOUTR26_bit at AES_DOUTR.B26;
    const register unsigned short int AES_DOUTR27 = 27;
    sbit  AES_DOUTR27_bit at AES_DOUTR.B27;
    const register unsigned short int AES_DOUTR28 = 28;
    sbit  AES_DOUTR28_bit at AES_DOUTR.B28;
    const register unsigned short int AES_DOUTR29 = 29;
    sbit  AES_DOUTR29_bit at AES_DOUTR.B29;
    const register unsigned short int AES_DOUTR30 = 30;
    sbit  AES_DOUTR30_bit at AES_DOUTR.B30;
    const register unsigned short int AES_DOUTR31 = 31;
    sbit  AES_DOUTR31_bit at AES_DOUTR.B31;

sfr unsigned long   volatile AES_KEYR0            absolute 0x40026010;
    const register unsigned short int AES_KEYR00 = 0;
    sbit  AES_KEYR00_bit at AES_KEYR0.B0;
    const register unsigned short int AES_KEYR01 = 1;
    sbit  AES_KEYR01_bit at AES_KEYR0.B1;
    const register unsigned short int AES_KEYR02 = 2;
    sbit  AES_KEYR02_bit at AES_KEYR0.B2;
    const register unsigned short int AES_KEYR03 = 3;
    sbit  AES_KEYR03_bit at AES_KEYR0.B3;
    const register unsigned short int AES_KEYR04 = 4;
    sbit  AES_KEYR04_bit at AES_KEYR0.B4;
    const register unsigned short int AES_KEYR05 = 5;
    sbit  AES_KEYR05_bit at AES_KEYR0.B5;
    const register unsigned short int AES_KEYR06 = 6;
    sbit  AES_KEYR06_bit at AES_KEYR0.B6;
    const register unsigned short int AES_KEYR07 = 7;
    sbit  AES_KEYR07_bit at AES_KEYR0.B7;
    const register unsigned short int AES_KEYR08 = 8;
    sbit  AES_KEYR08_bit at AES_KEYR0.B8;
    const register unsigned short int AES_KEYR09 = 9;
    sbit  AES_KEYR09_bit at AES_KEYR0.B9;
    const register unsigned short int AES_KEYR010 = 10;
    sbit  AES_KEYR010_bit at AES_KEYR0.B10;
    const register unsigned short int AES_KEYR011 = 11;
    sbit  AES_KEYR011_bit at AES_KEYR0.B11;
    const register unsigned short int AES_KEYR012 = 12;
    sbit  AES_KEYR012_bit at AES_KEYR0.B12;
    const register unsigned short int AES_KEYR013 = 13;
    sbit  AES_KEYR013_bit at AES_KEYR0.B13;
    const register unsigned short int AES_KEYR014 = 14;
    sbit  AES_KEYR014_bit at AES_KEYR0.B14;
    const register unsigned short int AES_KEYR015 = 15;
    sbit  AES_KEYR015_bit at AES_KEYR0.B15;
    const register unsigned short int AES_KEYR016 = 16;
    sbit  AES_KEYR016_bit at AES_KEYR0.B16;
    const register unsigned short int AES_KEYR017 = 17;
    sbit  AES_KEYR017_bit at AES_KEYR0.B17;
    const register unsigned short int AES_KEYR018 = 18;
    sbit  AES_KEYR018_bit at AES_KEYR0.B18;
    const register unsigned short int AES_KEYR019 = 19;
    sbit  AES_KEYR019_bit at AES_KEYR0.B19;
    const register unsigned short int AES_KEYR020 = 20;
    sbit  AES_KEYR020_bit at AES_KEYR0.B20;
    const register unsigned short int AES_KEYR021 = 21;
    sbit  AES_KEYR021_bit at AES_KEYR0.B21;
    const register unsigned short int AES_KEYR022 = 22;
    sbit  AES_KEYR022_bit at AES_KEYR0.B22;
    const register unsigned short int AES_KEYR023 = 23;
    sbit  AES_KEYR023_bit at AES_KEYR0.B23;
    const register unsigned short int AES_KEYR024 = 24;
    sbit  AES_KEYR024_bit at AES_KEYR0.B24;
    const register unsigned short int AES_KEYR025 = 25;
    sbit  AES_KEYR025_bit at AES_KEYR0.B25;
    const register unsigned short int AES_KEYR026 = 26;
    sbit  AES_KEYR026_bit at AES_KEYR0.B26;
    const register unsigned short int AES_KEYR027 = 27;
    sbit  AES_KEYR027_bit at AES_KEYR0.B27;
    const register unsigned short int AES_KEYR028 = 28;
    sbit  AES_KEYR028_bit at AES_KEYR0.B28;
    const register unsigned short int AES_KEYR029 = 29;
    sbit  AES_KEYR029_bit at AES_KEYR0.B29;
    const register unsigned short int AES_KEYR030 = 30;
    sbit  AES_KEYR030_bit at AES_KEYR0.B30;
    const register unsigned short int AES_KEYR031 = 31;
    sbit  AES_KEYR031_bit at AES_KEYR0.B31;

sfr unsigned long   volatile AES_KEYR1            absolute 0x40026014;
    const register unsigned short int AES_KEYR10 = 0;
    sbit  AES_KEYR10_bit at AES_KEYR1.B0;
    const register unsigned short int AES_KEYR11 = 1;
    sbit  AES_KEYR11_bit at AES_KEYR1.B1;
    const register unsigned short int AES_KEYR12 = 2;
    sbit  AES_KEYR12_bit at AES_KEYR1.B2;
    const register unsigned short int AES_KEYR13 = 3;
    sbit  AES_KEYR13_bit at AES_KEYR1.B3;
    const register unsigned short int AES_KEYR14 = 4;
    sbit  AES_KEYR14_bit at AES_KEYR1.B4;
    const register unsigned short int AES_KEYR15 = 5;
    sbit  AES_KEYR15_bit at AES_KEYR1.B5;
    const register unsigned short int AES_KEYR16 = 6;
    sbit  AES_KEYR16_bit at AES_KEYR1.B6;
    const register unsigned short int AES_KEYR17 = 7;
    sbit  AES_KEYR17_bit at AES_KEYR1.B7;
    const register unsigned short int AES_KEYR18 = 8;
    sbit  AES_KEYR18_bit at AES_KEYR1.B8;
    const register unsigned short int AES_KEYR19 = 9;
    sbit  AES_KEYR19_bit at AES_KEYR1.B9;
    const register unsigned short int AES_KEYR110 = 10;
    sbit  AES_KEYR110_bit at AES_KEYR1.B10;
    const register unsigned short int AES_KEYR111 = 11;
    sbit  AES_KEYR111_bit at AES_KEYR1.B11;
    const register unsigned short int AES_KEYR112 = 12;
    sbit  AES_KEYR112_bit at AES_KEYR1.B12;
    const register unsigned short int AES_KEYR113 = 13;
    sbit  AES_KEYR113_bit at AES_KEYR1.B13;
    const register unsigned short int AES_KEYR114 = 14;
    sbit  AES_KEYR114_bit at AES_KEYR1.B14;
    const register unsigned short int AES_KEYR115 = 15;
    sbit  AES_KEYR115_bit at AES_KEYR1.B15;
    const register unsigned short int AES_KEYR116 = 16;
    sbit  AES_KEYR116_bit at AES_KEYR1.B16;
    const register unsigned short int AES_KEYR117 = 17;
    sbit  AES_KEYR117_bit at AES_KEYR1.B17;
    const register unsigned short int AES_KEYR118 = 18;
    sbit  AES_KEYR118_bit at AES_KEYR1.B18;
    const register unsigned short int AES_KEYR119 = 19;
    sbit  AES_KEYR119_bit at AES_KEYR1.B19;
    const register unsigned short int AES_KEYR120 = 20;
    sbit  AES_KEYR120_bit at AES_KEYR1.B20;
    const register unsigned short int AES_KEYR121 = 21;
    sbit  AES_KEYR121_bit at AES_KEYR1.B21;
    const register unsigned short int AES_KEYR122 = 22;
    sbit  AES_KEYR122_bit at AES_KEYR1.B22;
    const register unsigned short int AES_KEYR123 = 23;
    sbit  AES_KEYR123_bit at AES_KEYR1.B23;
    const register unsigned short int AES_KEYR124 = 24;
    sbit  AES_KEYR124_bit at AES_KEYR1.B24;
    const register unsigned short int AES_KEYR125 = 25;
    sbit  AES_KEYR125_bit at AES_KEYR1.B25;
    const register unsigned short int AES_KEYR126 = 26;
    sbit  AES_KEYR126_bit at AES_KEYR1.B26;
    const register unsigned short int AES_KEYR127 = 27;
    sbit  AES_KEYR127_bit at AES_KEYR1.B27;
    const register unsigned short int AES_KEYR128 = 28;
    sbit  AES_KEYR128_bit at AES_KEYR1.B28;
    const register unsigned short int AES_KEYR129 = 29;
    sbit  AES_KEYR129_bit at AES_KEYR1.B29;
    const register unsigned short int AES_KEYR130 = 30;
    sbit  AES_KEYR130_bit at AES_KEYR1.B30;
    const register unsigned short int AES_KEYR131 = 31;
    sbit  AES_KEYR131_bit at AES_KEYR1.B31;

sfr unsigned long   volatile AES_KEYR2            absolute 0x40026018;
    const register unsigned short int AES_KEYR20 = 0;
    sbit  AES_KEYR20_bit at AES_KEYR2.B0;
    const register unsigned short int AES_KEYR21 = 1;
    sbit  AES_KEYR21_bit at AES_KEYR2.B1;
    const register unsigned short int AES_KEYR22 = 2;
    sbit  AES_KEYR22_bit at AES_KEYR2.B2;
    const register unsigned short int AES_KEYR23 = 3;
    sbit  AES_KEYR23_bit at AES_KEYR2.B3;
    const register unsigned short int AES_KEYR24 = 4;
    sbit  AES_KEYR24_bit at AES_KEYR2.B4;
    const register unsigned short int AES_KEYR25 = 5;
    sbit  AES_KEYR25_bit at AES_KEYR2.B5;
    const register unsigned short int AES_KEYR26 = 6;
    sbit  AES_KEYR26_bit at AES_KEYR2.B6;
    const register unsigned short int AES_KEYR27 = 7;
    sbit  AES_KEYR27_bit at AES_KEYR2.B7;
    const register unsigned short int AES_KEYR28 = 8;
    sbit  AES_KEYR28_bit at AES_KEYR2.B8;
    const register unsigned short int AES_KEYR29 = 9;
    sbit  AES_KEYR29_bit at AES_KEYR2.B9;
    const register unsigned short int AES_KEYR210 = 10;
    sbit  AES_KEYR210_bit at AES_KEYR2.B10;
    const register unsigned short int AES_KEYR211 = 11;
    sbit  AES_KEYR211_bit at AES_KEYR2.B11;
    const register unsigned short int AES_KEYR212 = 12;
    sbit  AES_KEYR212_bit at AES_KEYR2.B12;
    const register unsigned short int AES_KEYR213 = 13;
    sbit  AES_KEYR213_bit at AES_KEYR2.B13;
    const register unsigned short int AES_KEYR214 = 14;
    sbit  AES_KEYR214_bit at AES_KEYR2.B14;
    const register unsigned short int AES_KEYR215 = 15;
    sbit  AES_KEYR215_bit at AES_KEYR2.B15;
    const register unsigned short int AES_KEYR216 = 16;
    sbit  AES_KEYR216_bit at AES_KEYR2.B16;
    const register unsigned short int AES_KEYR217 = 17;
    sbit  AES_KEYR217_bit at AES_KEYR2.B17;
    const register unsigned short int AES_KEYR218 = 18;
    sbit  AES_KEYR218_bit at AES_KEYR2.B18;
    const register unsigned short int AES_KEYR219 = 19;
    sbit  AES_KEYR219_bit at AES_KEYR2.B19;
    const register unsigned short int AES_KEYR220 = 20;
    sbit  AES_KEYR220_bit at AES_KEYR2.B20;
    const register unsigned short int AES_KEYR221 = 21;
    sbit  AES_KEYR221_bit at AES_KEYR2.B21;
    const register unsigned short int AES_KEYR222 = 22;
    sbit  AES_KEYR222_bit at AES_KEYR2.B22;
    const register unsigned short int AES_KEYR223 = 23;
    sbit  AES_KEYR223_bit at AES_KEYR2.B23;
    const register unsigned short int AES_KEYR224 = 24;
    sbit  AES_KEYR224_bit at AES_KEYR2.B24;
    const register unsigned short int AES_KEYR225 = 25;
    sbit  AES_KEYR225_bit at AES_KEYR2.B25;
    const register unsigned short int AES_KEYR226 = 26;
    sbit  AES_KEYR226_bit at AES_KEYR2.B26;
    const register unsigned short int AES_KEYR227 = 27;
    sbit  AES_KEYR227_bit at AES_KEYR2.B27;
    const register unsigned short int AES_KEYR228 = 28;
    sbit  AES_KEYR228_bit at AES_KEYR2.B28;
    const register unsigned short int AES_KEYR229 = 29;
    sbit  AES_KEYR229_bit at AES_KEYR2.B29;
    const register unsigned short int AES_KEYR230 = 30;
    sbit  AES_KEYR230_bit at AES_KEYR2.B30;
    const register unsigned short int AES_KEYR231 = 31;
    sbit  AES_KEYR231_bit at AES_KEYR2.B31;

sfr unsigned long   volatile AES_KEYR3            absolute 0x4002601C;
    const register unsigned short int AES_KEYR30 = 0;
    sbit  AES_KEYR30_bit at AES_KEYR3.B0;
    const register unsigned short int AES_KEYR31 = 1;
    sbit  AES_KEYR31_bit at AES_KEYR3.B1;
    const register unsigned short int AES_KEYR32 = 2;
    sbit  AES_KEYR32_bit at AES_KEYR3.B2;
    const register unsigned short int AES_KEYR33 = 3;
    sbit  AES_KEYR33_bit at AES_KEYR3.B3;
    const register unsigned short int AES_KEYR34 = 4;
    sbit  AES_KEYR34_bit at AES_KEYR3.B4;
    const register unsigned short int AES_KEYR35 = 5;
    sbit  AES_KEYR35_bit at AES_KEYR3.B5;
    const register unsigned short int AES_KEYR36 = 6;
    sbit  AES_KEYR36_bit at AES_KEYR3.B6;
    const register unsigned short int AES_KEYR37 = 7;
    sbit  AES_KEYR37_bit at AES_KEYR3.B7;
    const register unsigned short int AES_KEYR38 = 8;
    sbit  AES_KEYR38_bit at AES_KEYR3.B8;
    const register unsigned short int AES_KEYR39 = 9;
    sbit  AES_KEYR39_bit at AES_KEYR3.B9;
    const register unsigned short int AES_KEYR310 = 10;
    sbit  AES_KEYR310_bit at AES_KEYR3.B10;
    const register unsigned short int AES_KEYR311 = 11;
    sbit  AES_KEYR311_bit at AES_KEYR3.B11;
    const register unsigned short int AES_KEYR312 = 12;
    sbit  AES_KEYR312_bit at AES_KEYR3.B12;
    const register unsigned short int AES_KEYR313 = 13;
    sbit  AES_KEYR313_bit at AES_KEYR3.B13;
    const register unsigned short int AES_KEYR314 = 14;
    sbit  AES_KEYR314_bit at AES_KEYR3.B14;
    const register unsigned short int AES_KEYR315 = 15;
    sbit  AES_KEYR315_bit at AES_KEYR3.B15;
    const register unsigned short int AES_KEYR316 = 16;
    sbit  AES_KEYR316_bit at AES_KEYR3.B16;
    const register unsigned short int AES_KEYR317 = 17;
    sbit  AES_KEYR317_bit at AES_KEYR3.B17;
    const register unsigned short int AES_KEYR318 = 18;
    sbit  AES_KEYR318_bit at AES_KEYR3.B18;
    const register unsigned short int AES_KEYR319 = 19;
    sbit  AES_KEYR319_bit at AES_KEYR3.B19;
    const register unsigned short int AES_KEYR320 = 20;
    sbit  AES_KEYR320_bit at AES_KEYR3.B20;
    const register unsigned short int AES_KEYR321 = 21;
    sbit  AES_KEYR321_bit at AES_KEYR3.B21;
    const register unsigned short int AES_KEYR322 = 22;
    sbit  AES_KEYR322_bit at AES_KEYR3.B22;
    const register unsigned short int AES_KEYR323 = 23;
    sbit  AES_KEYR323_bit at AES_KEYR3.B23;
    const register unsigned short int AES_KEYR324 = 24;
    sbit  AES_KEYR324_bit at AES_KEYR3.B24;
    const register unsigned short int AES_KEYR325 = 25;
    sbit  AES_KEYR325_bit at AES_KEYR3.B25;
    const register unsigned short int AES_KEYR326 = 26;
    sbit  AES_KEYR326_bit at AES_KEYR3.B26;
    const register unsigned short int AES_KEYR327 = 27;
    sbit  AES_KEYR327_bit at AES_KEYR3.B27;
    const register unsigned short int AES_KEYR328 = 28;
    sbit  AES_KEYR328_bit at AES_KEYR3.B28;
    const register unsigned short int AES_KEYR329 = 29;
    sbit  AES_KEYR329_bit at AES_KEYR3.B29;
    const register unsigned short int AES_KEYR330 = 30;
    sbit  AES_KEYR330_bit at AES_KEYR3.B30;
    const register unsigned short int AES_KEYR331 = 31;
    sbit  AES_KEYR331_bit at AES_KEYR3.B31;

sfr unsigned long   volatile AES_IVR0             absolute 0x40026020;
    const register unsigned short int AES_IVR00 = 0;
    sbit  AES_IVR00_bit at AES_IVR0.B0;
    const register unsigned short int AES_IVR01 = 1;
    sbit  AES_IVR01_bit at AES_IVR0.B1;
    const register unsigned short int AES_IVR02 = 2;
    sbit  AES_IVR02_bit at AES_IVR0.B2;
    const register unsigned short int AES_IVR03 = 3;
    sbit  AES_IVR03_bit at AES_IVR0.B3;
    const register unsigned short int AES_IVR04 = 4;
    sbit  AES_IVR04_bit at AES_IVR0.B4;
    const register unsigned short int AES_IVR05 = 5;
    sbit  AES_IVR05_bit at AES_IVR0.B5;
    const register unsigned short int AES_IVR06 = 6;
    sbit  AES_IVR06_bit at AES_IVR0.B6;
    const register unsigned short int AES_IVR07 = 7;
    sbit  AES_IVR07_bit at AES_IVR0.B7;
    const register unsigned short int AES_IVR08 = 8;
    sbit  AES_IVR08_bit at AES_IVR0.B8;
    const register unsigned short int AES_IVR09 = 9;
    sbit  AES_IVR09_bit at AES_IVR0.B9;
    const register unsigned short int AES_IVR010 = 10;
    sbit  AES_IVR010_bit at AES_IVR0.B10;
    const register unsigned short int AES_IVR011 = 11;
    sbit  AES_IVR011_bit at AES_IVR0.B11;
    const register unsigned short int AES_IVR012 = 12;
    sbit  AES_IVR012_bit at AES_IVR0.B12;
    const register unsigned short int AES_IVR013 = 13;
    sbit  AES_IVR013_bit at AES_IVR0.B13;
    const register unsigned short int AES_IVR014 = 14;
    sbit  AES_IVR014_bit at AES_IVR0.B14;
    const register unsigned short int AES_IVR015 = 15;
    sbit  AES_IVR015_bit at AES_IVR0.B15;
    const register unsigned short int AES_IVR016 = 16;
    sbit  AES_IVR016_bit at AES_IVR0.B16;
    const register unsigned short int AES_IVR017 = 17;
    sbit  AES_IVR017_bit at AES_IVR0.B17;
    const register unsigned short int AES_IVR018 = 18;
    sbit  AES_IVR018_bit at AES_IVR0.B18;
    const register unsigned short int AES_IVR019 = 19;
    sbit  AES_IVR019_bit at AES_IVR0.B19;
    const register unsigned short int AES_IVR020 = 20;
    sbit  AES_IVR020_bit at AES_IVR0.B20;
    const register unsigned short int AES_IVR021 = 21;
    sbit  AES_IVR021_bit at AES_IVR0.B21;
    const register unsigned short int AES_IVR022 = 22;
    sbit  AES_IVR022_bit at AES_IVR0.B22;
    const register unsigned short int AES_IVR023 = 23;
    sbit  AES_IVR023_bit at AES_IVR0.B23;
    const register unsigned short int AES_IVR024 = 24;
    sbit  AES_IVR024_bit at AES_IVR0.B24;
    const register unsigned short int AES_IVR025 = 25;
    sbit  AES_IVR025_bit at AES_IVR0.B25;
    const register unsigned short int AES_IVR026 = 26;
    sbit  AES_IVR026_bit at AES_IVR0.B26;
    const register unsigned short int AES_IVR027 = 27;
    sbit  AES_IVR027_bit at AES_IVR0.B27;
    const register unsigned short int AES_IVR028 = 28;
    sbit  AES_IVR028_bit at AES_IVR0.B28;
    const register unsigned short int AES_IVR029 = 29;
    sbit  AES_IVR029_bit at AES_IVR0.B29;
    const register unsigned short int AES_IVR030 = 30;
    sbit  AES_IVR030_bit at AES_IVR0.B30;
    const register unsigned short int AES_IVR031 = 31;
    sbit  AES_IVR031_bit at AES_IVR0.B31;

sfr unsigned long   volatile AES_IVR1             absolute 0x40026024;
    const register unsigned short int AES_IVR10 = 0;
    sbit  AES_IVR10_bit at AES_IVR1.B0;
    const register unsigned short int AES_IVR11 = 1;
    sbit  AES_IVR11_bit at AES_IVR1.B1;
    const register unsigned short int AES_IVR12 = 2;
    sbit  AES_IVR12_bit at AES_IVR1.B2;
    const register unsigned short int AES_IVR13 = 3;
    sbit  AES_IVR13_bit at AES_IVR1.B3;
    const register unsigned short int AES_IVR14 = 4;
    sbit  AES_IVR14_bit at AES_IVR1.B4;
    const register unsigned short int AES_IVR15 = 5;
    sbit  AES_IVR15_bit at AES_IVR1.B5;
    const register unsigned short int AES_IVR16 = 6;
    sbit  AES_IVR16_bit at AES_IVR1.B6;
    const register unsigned short int AES_IVR17 = 7;
    sbit  AES_IVR17_bit at AES_IVR1.B7;
    const register unsigned short int AES_IVR18 = 8;
    sbit  AES_IVR18_bit at AES_IVR1.B8;
    const register unsigned short int AES_IVR19 = 9;
    sbit  AES_IVR19_bit at AES_IVR1.B9;
    const register unsigned short int AES_IVR110 = 10;
    sbit  AES_IVR110_bit at AES_IVR1.B10;
    const register unsigned short int AES_IVR111 = 11;
    sbit  AES_IVR111_bit at AES_IVR1.B11;
    const register unsigned short int AES_IVR112 = 12;
    sbit  AES_IVR112_bit at AES_IVR1.B12;
    const register unsigned short int AES_IVR113 = 13;
    sbit  AES_IVR113_bit at AES_IVR1.B13;
    const register unsigned short int AES_IVR114 = 14;
    sbit  AES_IVR114_bit at AES_IVR1.B14;
    const register unsigned short int AES_IVR115 = 15;
    sbit  AES_IVR115_bit at AES_IVR1.B15;
    const register unsigned short int AES_IVR116 = 16;
    sbit  AES_IVR116_bit at AES_IVR1.B16;
    const register unsigned short int AES_IVR117 = 17;
    sbit  AES_IVR117_bit at AES_IVR1.B17;
    const register unsigned short int AES_IVR118 = 18;
    sbit  AES_IVR118_bit at AES_IVR1.B18;
    const register unsigned short int AES_IVR119 = 19;
    sbit  AES_IVR119_bit at AES_IVR1.B19;
    const register unsigned short int AES_IVR120 = 20;
    sbit  AES_IVR120_bit at AES_IVR1.B20;
    const register unsigned short int AES_IVR121 = 21;
    sbit  AES_IVR121_bit at AES_IVR1.B21;
    const register unsigned short int AES_IVR122 = 22;
    sbit  AES_IVR122_bit at AES_IVR1.B22;
    const register unsigned short int AES_IVR123 = 23;
    sbit  AES_IVR123_bit at AES_IVR1.B23;
    const register unsigned short int AES_IVR124 = 24;
    sbit  AES_IVR124_bit at AES_IVR1.B24;
    const register unsigned short int AES_IVR125 = 25;
    sbit  AES_IVR125_bit at AES_IVR1.B25;
    const register unsigned short int AES_IVR126 = 26;
    sbit  AES_IVR126_bit at AES_IVR1.B26;
    const register unsigned short int AES_IVR127 = 27;
    sbit  AES_IVR127_bit at AES_IVR1.B27;
    const register unsigned short int AES_IVR128 = 28;
    sbit  AES_IVR128_bit at AES_IVR1.B28;
    const register unsigned short int AES_IVR129 = 29;
    sbit  AES_IVR129_bit at AES_IVR1.B29;
    const register unsigned short int AES_IVR130 = 30;
    sbit  AES_IVR130_bit at AES_IVR1.B30;
    const register unsigned short int AES_IVR131 = 31;
    sbit  AES_IVR131_bit at AES_IVR1.B31;

sfr unsigned long   volatile AES_IVR2             absolute 0x40026028;
    const register unsigned short int AES_IVR20 = 0;
    sbit  AES_IVR20_bit at AES_IVR2.B0;
    const register unsigned short int AES_IVR21 = 1;
    sbit  AES_IVR21_bit at AES_IVR2.B1;
    const register unsigned short int AES_IVR22 = 2;
    sbit  AES_IVR22_bit at AES_IVR2.B2;
    const register unsigned short int AES_IVR23 = 3;
    sbit  AES_IVR23_bit at AES_IVR2.B3;
    const register unsigned short int AES_IVR24 = 4;
    sbit  AES_IVR24_bit at AES_IVR2.B4;
    const register unsigned short int AES_IVR25 = 5;
    sbit  AES_IVR25_bit at AES_IVR2.B5;
    const register unsigned short int AES_IVR26 = 6;
    sbit  AES_IVR26_bit at AES_IVR2.B6;
    const register unsigned short int AES_IVR27 = 7;
    sbit  AES_IVR27_bit at AES_IVR2.B7;
    const register unsigned short int AES_IVR28 = 8;
    sbit  AES_IVR28_bit at AES_IVR2.B8;
    const register unsigned short int AES_IVR29 = 9;
    sbit  AES_IVR29_bit at AES_IVR2.B9;
    const register unsigned short int AES_IVR210 = 10;
    sbit  AES_IVR210_bit at AES_IVR2.B10;
    const register unsigned short int AES_IVR211 = 11;
    sbit  AES_IVR211_bit at AES_IVR2.B11;
    const register unsigned short int AES_IVR212 = 12;
    sbit  AES_IVR212_bit at AES_IVR2.B12;
    const register unsigned short int AES_IVR213 = 13;
    sbit  AES_IVR213_bit at AES_IVR2.B13;
    const register unsigned short int AES_IVR214 = 14;
    sbit  AES_IVR214_bit at AES_IVR2.B14;
    const register unsigned short int AES_IVR215 = 15;
    sbit  AES_IVR215_bit at AES_IVR2.B15;
    const register unsigned short int AES_IVR216 = 16;
    sbit  AES_IVR216_bit at AES_IVR2.B16;
    const register unsigned short int AES_IVR217 = 17;
    sbit  AES_IVR217_bit at AES_IVR2.B17;
    const register unsigned short int AES_IVR218 = 18;
    sbit  AES_IVR218_bit at AES_IVR2.B18;
    const register unsigned short int AES_IVR219 = 19;
    sbit  AES_IVR219_bit at AES_IVR2.B19;
    const register unsigned short int AES_IVR220 = 20;
    sbit  AES_IVR220_bit at AES_IVR2.B20;
    const register unsigned short int AES_IVR221 = 21;
    sbit  AES_IVR221_bit at AES_IVR2.B21;
    const register unsigned short int AES_IVR222 = 22;
    sbit  AES_IVR222_bit at AES_IVR2.B22;
    const register unsigned short int AES_IVR223 = 23;
    sbit  AES_IVR223_bit at AES_IVR2.B23;
    const register unsigned short int AES_IVR224 = 24;
    sbit  AES_IVR224_bit at AES_IVR2.B24;
    const register unsigned short int AES_IVR225 = 25;
    sbit  AES_IVR225_bit at AES_IVR2.B25;
    const register unsigned short int AES_IVR226 = 26;
    sbit  AES_IVR226_bit at AES_IVR2.B26;
    const register unsigned short int AES_IVR227 = 27;
    sbit  AES_IVR227_bit at AES_IVR2.B27;
    const register unsigned short int AES_IVR228 = 28;
    sbit  AES_IVR228_bit at AES_IVR2.B28;
    const register unsigned short int AES_IVR229 = 29;
    sbit  AES_IVR229_bit at AES_IVR2.B29;
    const register unsigned short int AES_IVR230 = 30;
    sbit  AES_IVR230_bit at AES_IVR2.B30;
    const register unsigned short int AES_IVR231 = 31;
    sbit  AES_IVR231_bit at AES_IVR2.B31;

sfr unsigned long   volatile AES_IVR3             absolute 0x4002602C;
    const register unsigned short int AES_IVR30 = 0;
    sbit  AES_IVR30_bit at AES_IVR3.B0;
    const register unsigned short int AES_IVR31 = 1;
    sbit  AES_IVR31_bit at AES_IVR3.B1;
    const register unsigned short int AES_IVR32 = 2;
    sbit  AES_IVR32_bit at AES_IVR3.B2;
    const register unsigned short int AES_IVR33 = 3;
    sbit  AES_IVR33_bit at AES_IVR3.B3;
    const register unsigned short int AES_IVR34 = 4;
    sbit  AES_IVR34_bit at AES_IVR3.B4;
    const register unsigned short int AES_IVR35 = 5;
    sbit  AES_IVR35_bit at AES_IVR3.B5;
    const register unsigned short int AES_IVR36 = 6;
    sbit  AES_IVR36_bit at AES_IVR3.B6;
    const register unsigned short int AES_IVR37 = 7;
    sbit  AES_IVR37_bit at AES_IVR3.B7;
    const register unsigned short int AES_IVR38 = 8;
    sbit  AES_IVR38_bit at AES_IVR3.B8;
    const register unsigned short int AES_IVR39 = 9;
    sbit  AES_IVR39_bit at AES_IVR3.B9;
    const register unsigned short int AES_IVR310 = 10;
    sbit  AES_IVR310_bit at AES_IVR3.B10;
    const register unsigned short int AES_IVR311 = 11;
    sbit  AES_IVR311_bit at AES_IVR3.B11;
    const register unsigned short int AES_IVR312 = 12;
    sbit  AES_IVR312_bit at AES_IVR3.B12;
    const register unsigned short int AES_IVR313 = 13;
    sbit  AES_IVR313_bit at AES_IVR3.B13;
    const register unsigned short int AES_IVR314 = 14;
    sbit  AES_IVR314_bit at AES_IVR3.B14;
    const register unsigned short int AES_IVR315 = 15;
    sbit  AES_IVR315_bit at AES_IVR3.B15;
    const register unsigned short int AES_IVR316 = 16;
    sbit  AES_IVR316_bit at AES_IVR3.B16;
    const register unsigned short int AES_IVR317 = 17;
    sbit  AES_IVR317_bit at AES_IVR3.B17;
    const register unsigned short int AES_IVR318 = 18;
    sbit  AES_IVR318_bit at AES_IVR3.B18;
    const register unsigned short int AES_IVR319 = 19;
    sbit  AES_IVR319_bit at AES_IVR3.B19;
    const register unsigned short int AES_IVR320 = 20;
    sbit  AES_IVR320_bit at AES_IVR3.B20;
    const register unsigned short int AES_IVR321 = 21;
    sbit  AES_IVR321_bit at AES_IVR3.B21;
    const register unsigned short int AES_IVR322 = 22;
    sbit  AES_IVR322_bit at AES_IVR3.B22;
    const register unsigned short int AES_IVR323 = 23;
    sbit  AES_IVR323_bit at AES_IVR3.B23;
    const register unsigned short int AES_IVR324 = 24;
    sbit  AES_IVR324_bit at AES_IVR3.B24;
    const register unsigned short int AES_IVR325 = 25;
    sbit  AES_IVR325_bit at AES_IVR3.B25;
    const register unsigned short int AES_IVR326 = 26;
    sbit  AES_IVR326_bit at AES_IVR3.B26;
    const register unsigned short int AES_IVR327 = 27;
    sbit  AES_IVR327_bit at AES_IVR3.B27;
    const register unsigned short int AES_IVR328 = 28;
    sbit  AES_IVR328_bit at AES_IVR3.B28;
    const register unsigned short int AES_IVR329 = 29;
    sbit  AES_IVR329_bit at AES_IVR3.B29;
    const register unsigned short int AES_IVR330 = 30;
    sbit  AES_IVR330_bit at AES_IVR3.B30;
    const register unsigned short int AES_IVR331 = 31;
    sbit  AES_IVR331_bit at AES_IVR3.B31;

sfr unsigned long   volatile DMA1_ISR             absolute 0x40020000;
    const register unsigned short int TEIF7 = 27;
    sbit  TEIF7_bit at DMA1_ISR.B27;
    const register unsigned short int HTIF7 = 26;
    sbit  HTIF7_bit at DMA1_ISR.B26;
    const register unsigned short int TCIF7 = 25;
    sbit  TCIF7_bit at DMA1_ISR.B25;
    const register unsigned short int GIF7 = 24;
    sbit  GIF7_bit at DMA1_ISR.B24;
    const register unsigned short int TEIF6 = 23;
    sbit  TEIF6_bit at DMA1_ISR.B23;
    const register unsigned short int HTIF6 = 22;
    sbit  HTIF6_bit at DMA1_ISR.B22;
    const register unsigned short int TCIF6 = 21;
    sbit  TCIF6_bit at DMA1_ISR.B21;
    const register unsigned short int GIF6 = 20;
    sbit  GIF6_bit at DMA1_ISR.B20;
    const register unsigned short int TEIF5 = 19;
    sbit  TEIF5_bit at DMA1_ISR.B19;
    const register unsigned short int HTIF5 = 18;
    sbit  HTIF5_bit at DMA1_ISR.B18;
    const register unsigned short int TCIF5 = 17;
    sbit  TCIF5_bit at DMA1_ISR.B17;
    const register unsigned short int GIF5 = 16;
    sbit  GIF5_bit at DMA1_ISR.B16;
    const register unsigned short int TEIF4 = 15;
    sbit  TEIF4_bit at DMA1_ISR.B15;
    const register unsigned short int HTIF4 = 14;
    sbit  HTIF4_bit at DMA1_ISR.B14;
    const register unsigned short int TCIF4 = 13;
    sbit  TCIF4_bit at DMA1_ISR.B13;
    const register unsigned short int GIF4 = 12;
    sbit  GIF4_bit at DMA1_ISR.B12;
    const register unsigned short int TEIF3 = 11;
    sbit  TEIF3_bit at DMA1_ISR.B11;
    const register unsigned short int HTIF3 = 10;
    sbit  HTIF3_bit at DMA1_ISR.B10;
    const register unsigned short int TCIF3 = 9;
    sbit  TCIF3_bit at DMA1_ISR.B9;
    const register unsigned short int GIF3 = 8;
    sbit  GIF3_bit at DMA1_ISR.B8;
    const register unsigned short int TEIF2 = 7;
    sbit  TEIF2_bit at DMA1_ISR.B7;
    const register unsigned short int HTIF2 = 6;
    sbit  HTIF2_bit at DMA1_ISR.B6;
    const register unsigned short int TCIF2 = 5;
    sbit  TCIF2_bit at DMA1_ISR.B5;
    const register unsigned short int GIF2 = 4;
    sbit  GIF2_bit at DMA1_ISR.B4;
    const register unsigned short int TEIF1 = 3;
    sbit  TEIF1_bit at DMA1_ISR.B3;
    const register unsigned short int HTIF1 = 2;
    sbit  HTIF1_bit at DMA1_ISR.B2;
    const register unsigned short int TCIF1 = 1;
    sbit  TCIF1_bit at DMA1_ISR.B1;
    const register unsigned short int GIF1 = 0;
    sbit  GIF1_bit at DMA1_ISR.B0;

sfr unsigned long   volatile DMA1_IFCR            absolute 0x40020004;
    const register unsigned short int CTEIF7 = 27;
    sbit  CTEIF7_bit at DMA1_IFCR.B27;
    const register unsigned short int CHTIF7 = 26;
    sbit  CHTIF7_bit at DMA1_IFCR.B26;
    const register unsigned short int CTCIF7 = 25;
    sbit  CTCIF7_bit at DMA1_IFCR.B25;
    const register unsigned short int CGIF7 = 24;
    sbit  CGIF7_bit at DMA1_IFCR.B24;
    const register unsigned short int CTEIF6 = 23;
    sbit  CTEIF6_bit at DMA1_IFCR.B23;
    const register unsigned short int CHTIF6 = 22;
    sbit  CHTIF6_bit at DMA1_IFCR.B22;
    const register unsigned short int CTCIF6 = 21;
    sbit  CTCIF6_bit at DMA1_IFCR.B21;
    const register unsigned short int CGIF6 = 20;
    sbit  CGIF6_bit at DMA1_IFCR.B20;
    const register unsigned short int CTEIF5 = 19;
    sbit  CTEIF5_bit at DMA1_IFCR.B19;
    const register unsigned short int CHTIF5 = 18;
    sbit  CHTIF5_bit at DMA1_IFCR.B18;
    const register unsigned short int CTCIF5 = 17;
    sbit  CTCIF5_bit at DMA1_IFCR.B17;
    const register unsigned short int CGIF5 = 16;
    sbit  CGIF5_bit at DMA1_IFCR.B16;
    const register unsigned short int CTEIF4 = 15;
    sbit  CTEIF4_bit at DMA1_IFCR.B15;
    const register unsigned short int CHTIF4 = 14;
    sbit  CHTIF4_bit at DMA1_IFCR.B14;
    const register unsigned short int CTCIF4 = 13;
    sbit  CTCIF4_bit at DMA1_IFCR.B13;
    const register unsigned short int CGIF4 = 12;
    sbit  CGIF4_bit at DMA1_IFCR.B12;
    const register unsigned short int CTEIF3 = 11;
    sbit  CTEIF3_bit at DMA1_IFCR.B11;
    const register unsigned short int CHTIF3 = 10;
    sbit  CHTIF3_bit at DMA1_IFCR.B10;
    const register unsigned short int CTCIF3 = 9;
    sbit  CTCIF3_bit at DMA1_IFCR.B9;
    const register unsigned short int CGIF3 = 8;
    sbit  CGIF3_bit at DMA1_IFCR.B8;
    const register unsigned short int CTEIF2 = 7;
    sbit  CTEIF2_bit at DMA1_IFCR.B7;
    const register unsigned short int CHTIF2 = 6;
    sbit  CHTIF2_bit at DMA1_IFCR.B6;
    const register unsigned short int CTCIF2 = 5;
    sbit  CTCIF2_bit at DMA1_IFCR.B5;
    const register unsigned short int CGIF2 = 4;
    sbit  CGIF2_bit at DMA1_IFCR.B4;
    const register unsigned short int CTEIF1 = 3;
    sbit  CTEIF1_bit at DMA1_IFCR.B3;
    const register unsigned short int CHTIF1 = 2;
    sbit  CHTIF1_bit at DMA1_IFCR.B2;
    const register unsigned short int CTCIF1 = 1;
    sbit  CTCIF1_bit at DMA1_IFCR.B1;
    const register unsigned short int CGIF1 = 0;
    sbit  CGIF1_bit at DMA1_IFCR.B0;

sfr unsigned long   volatile DMA1_CCR1            absolute 0x40020008;
    const register unsigned short int MEM2MEM = 14;
    sbit  MEM2MEM_bit at DMA1_CCR1.B14;
    const register unsigned short int PL0 = 12;
    sbit  PL0_bit at DMA1_CCR1.B12;
    const register unsigned short int PL1 = 13;
    sbit  PL1_bit at DMA1_CCR1.B13;
    const register unsigned short int MSIZE0 = 10;
    sbit  MSIZE0_bit at DMA1_CCR1.B10;
    const register unsigned short int MSIZE1 = 11;
    sbit  MSIZE1_bit at DMA1_CCR1.B11;
    const register unsigned short int PSIZE0 = 8;
    sbit  PSIZE0_bit at DMA1_CCR1.B8;
    const register unsigned short int PSIZE1 = 9;
    sbit  PSIZE1_bit at DMA1_CCR1.B9;
    const register unsigned short int MINC = 7;
    sbit  MINC_bit at DMA1_CCR1.B7;
    const register unsigned short int PINC = 6;
    sbit  PINC_bit at DMA1_CCR1.B6;
    const register unsigned short int CIRC = 5;
    sbit  CIRC_bit at DMA1_CCR1.B5;
    const register unsigned short int DIR_ = 4;
    sbit  DIR_bit at DMA1_CCR1.B4;
    const register unsigned short int TEIE = 3;
    sbit  TEIE_bit at DMA1_CCR1.B3;
    const register unsigned short int HTIE = 2;
    sbit  HTIE_bit at DMA1_CCR1.B2;
    const register unsigned short int TCIE = 1;
    sbit  TCIE_bit at DMA1_CCR1.B1;
    sbit  EN_DMA1_CCR1_bit at DMA1_CCR1.B0;

sfr unsigned long   volatile DMA1_CNDTR1          absolute 0x4002000C;
    const register unsigned short int NDT0 = 0;
    sbit  NDT0_bit at DMA1_CNDTR1.B0;
    const register unsigned short int NDT1 = 1;
    sbit  NDT1_bit at DMA1_CNDTR1.B1;
    const register unsigned short int NDT2 = 2;
    sbit  NDT2_bit at DMA1_CNDTR1.B2;
    const register unsigned short int NDT3 = 3;
    sbit  NDT3_bit at DMA1_CNDTR1.B3;
    const register unsigned short int NDT4 = 4;
    sbit  NDT4_bit at DMA1_CNDTR1.B4;
    const register unsigned short int NDT5 = 5;
    sbit  NDT5_bit at DMA1_CNDTR1.B5;
    const register unsigned short int NDT6 = 6;
    sbit  NDT6_bit at DMA1_CNDTR1.B6;
    const register unsigned short int NDT7 = 7;
    sbit  NDT7_bit at DMA1_CNDTR1.B7;
    const register unsigned short int NDT8 = 8;
    sbit  NDT8_bit at DMA1_CNDTR1.B8;
    const register unsigned short int NDT9 = 9;
    sbit  NDT9_bit at DMA1_CNDTR1.B9;
    const register unsigned short int NDT10 = 10;
    sbit  NDT10_bit at DMA1_CNDTR1.B10;
    const register unsigned short int NDT11 = 11;
    sbit  NDT11_bit at DMA1_CNDTR1.B11;
    const register unsigned short int NDT12 = 12;
    sbit  NDT12_bit at DMA1_CNDTR1.B12;
    const register unsigned short int NDT13 = 13;
    sbit  NDT13_bit at DMA1_CNDTR1.B13;
    const register unsigned short int NDT14 = 14;
    sbit  NDT14_bit at DMA1_CNDTR1.B14;
    const register unsigned short int NDT15 = 15;
    sbit  NDT15_bit at DMA1_CNDTR1.B15;

sfr unsigned long   volatile DMA1_CPAR1           absolute 0x40020010;
    const register unsigned short int PA0 = 0;
    sbit  PA0_bit at DMA1_CPAR1.B0;
    const register unsigned short int PA1 = 1;
    sbit  PA1_bit at DMA1_CPAR1.B1;
    const register unsigned short int PA2 = 2;
    sbit  PA2_bit at DMA1_CPAR1.B2;
    const register unsigned short int PA3 = 3;
    sbit  PA3_bit at DMA1_CPAR1.B3;
    const register unsigned short int PA4 = 4;
    sbit  PA4_bit at DMA1_CPAR1.B4;
    const register unsigned short int PA5 = 5;
    sbit  PA5_bit at DMA1_CPAR1.B5;
    const register unsigned short int PA6 = 6;
    sbit  PA6_bit at DMA1_CPAR1.B6;
    const register unsigned short int PA7 = 7;
    sbit  PA7_bit at DMA1_CPAR1.B7;
    const register unsigned short int PA8 = 8;
    sbit  PA8_bit at DMA1_CPAR1.B8;
    const register unsigned short int PA9 = 9;
    sbit  PA9_bit at DMA1_CPAR1.B9;
    const register unsigned short int PA10 = 10;
    sbit  PA10_bit at DMA1_CPAR1.B10;
    const register unsigned short int PA11 = 11;
    sbit  PA11_bit at DMA1_CPAR1.B11;
    const register unsigned short int PA12 = 12;
    sbit  PA12_bit at DMA1_CPAR1.B12;
    const register unsigned short int PA13 = 13;
    sbit  PA13_bit at DMA1_CPAR1.B13;
    const register unsigned short int PA14 = 14;
    sbit  PA14_bit at DMA1_CPAR1.B14;
    const register unsigned short int PA15 = 15;
    sbit  PA15_bit at DMA1_CPAR1.B15;
    const register unsigned short int PA16 = 16;
    sbit  PA16_bit at DMA1_CPAR1.B16;
    const register unsigned short int PA17 = 17;
    sbit  PA17_bit at DMA1_CPAR1.B17;
    const register unsigned short int PA18 = 18;
    sbit  PA18_bit at DMA1_CPAR1.B18;
    const register unsigned short int PA19 = 19;
    sbit  PA19_bit at DMA1_CPAR1.B19;
    const register unsigned short int PA20 = 20;
    sbit  PA20_bit at DMA1_CPAR1.B20;
    const register unsigned short int PA21 = 21;
    sbit  PA21_bit at DMA1_CPAR1.B21;
    const register unsigned short int PA22 = 22;
    sbit  PA22_bit at DMA1_CPAR1.B22;
    const register unsigned short int PA23 = 23;
    sbit  PA23_bit at DMA1_CPAR1.B23;
    const register unsigned short int PA24 = 24;
    sbit  PA24_bit at DMA1_CPAR1.B24;
    const register unsigned short int PA25 = 25;
    sbit  PA25_bit at DMA1_CPAR1.B25;
    const register unsigned short int PA26 = 26;
    sbit  PA26_bit at DMA1_CPAR1.B26;
    const register unsigned short int PA27 = 27;
    sbit  PA27_bit at DMA1_CPAR1.B27;
    const register unsigned short int PA28 = 28;
    sbit  PA28_bit at DMA1_CPAR1.B28;
    const register unsigned short int PA29 = 29;
    sbit  PA29_bit at DMA1_CPAR1.B29;
    const register unsigned short int PA30 = 30;
    sbit  PA30_bit at DMA1_CPAR1.B30;
    const register unsigned short int PA31 = 31;
    sbit  PA31_bit at DMA1_CPAR1.B31;

sfr unsigned long   volatile DMA1_CMAR1           absolute 0x40020014;
    const register unsigned short int MA0 = 0;
    sbit  MA0_bit at DMA1_CMAR1.B0;
    const register unsigned short int MA1 = 1;
    sbit  MA1_bit at DMA1_CMAR1.B1;
    const register unsigned short int MA2 = 2;
    sbit  MA2_bit at DMA1_CMAR1.B2;
    const register unsigned short int MA3 = 3;
    sbit  MA3_bit at DMA1_CMAR1.B3;
    const register unsigned short int MA4 = 4;
    sbit  MA4_bit at DMA1_CMAR1.B4;
    const register unsigned short int MA5 = 5;
    sbit  MA5_bit at DMA1_CMAR1.B5;
    const register unsigned short int MA6 = 6;
    sbit  MA6_bit at DMA1_CMAR1.B6;
    const register unsigned short int MA7 = 7;
    sbit  MA7_bit at DMA1_CMAR1.B7;
    const register unsigned short int MA8 = 8;
    sbit  MA8_bit at DMA1_CMAR1.B8;
    const register unsigned short int MA9 = 9;
    sbit  MA9_bit at DMA1_CMAR1.B9;
    const register unsigned short int MA10 = 10;
    sbit  MA10_bit at DMA1_CMAR1.B10;
    const register unsigned short int MA11 = 11;
    sbit  MA11_bit at DMA1_CMAR1.B11;
    const register unsigned short int MA12 = 12;
    sbit  MA12_bit at DMA1_CMAR1.B12;
    const register unsigned short int MA13 = 13;
    sbit  MA13_bit at DMA1_CMAR1.B13;
    const register unsigned short int MA14 = 14;
    sbit  MA14_bit at DMA1_CMAR1.B14;
    const register unsigned short int MA15 = 15;
    sbit  MA15_bit at DMA1_CMAR1.B15;
    const register unsigned short int MA16 = 16;
    sbit  MA16_bit at DMA1_CMAR1.B16;
    const register unsigned short int MA17 = 17;
    sbit  MA17_bit at DMA1_CMAR1.B17;
    const register unsigned short int MA18 = 18;
    sbit  MA18_bit at DMA1_CMAR1.B18;
    const register unsigned short int MA19 = 19;
    sbit  MA19_bit at DMA1_CMAR1.B19;
    const register unsigned short int MA20 = 20;
    sbit  MA20_bit at DMA1_CMAR1.B20;
    const register unsigned short int MA21 = 21;
    sbit  MA21_bit at DMA1_CMAR1.B21;
    const register unsigned short int MA22 = 22;
    sbit  MA22_bit at DMA1_CMAR1.B22;
    const register unsigned short int MA23 = 23;
    sbit  MA23_bit at DMA1_CMAR1.B23;
    const register unsigned short int MA24 = 24;
    sbit  MA24_bit at DMA1_CMAR1.B24;
    const register unsigned short int MA25 = 25;
    sbit  MA25_bit at DMA1_CMAR1.B25;
    const register unsigned short int MA26 = 26;
    sbit  MA26_bit at DMA1_CMAR1.B26;
    const register unsigned short int MA27 = 27;
    sbit  MA27_bit at DMA1_CMAR1.B27;
    const register unsigned short int MA28 = 28;
    sbit  MA28_bit at DMA1_CMAR1.B28;
    const register unsigned short int MA29 = 29;
    sbit  MA29_bit at DMA1_CMAR1.B29;
    const register unsigned short int MA30 = 30;
    sbit  MA30_bit at DMA1_CMAR1.B30;
    const register unsigned short int MA31 = 31;
    sbit  MA31_bit at DMA1_CMAR1.B31;

sfr unsigned long   volatile DMA1_CCR2            absolute 0x4002001C;
    sbit  MEM2MEM_DMA1_CCR2_bit at DMA1_CCR2.B14;
    sbit  PL0_DMA1_CCR2_bit at DMA1_CCR2.B12;
    sbit  PL1_DMA1_CCR2_bit at DMA1_CCR2.B13;
    sbit  MSIZE0_DMA1_CCR2_bit at DMA1_CCR2.B10;
    sbit  MSIZE1_DMA1_CCR2_bit at DMA1_CCR2.B11;
    sbit  PSIZE0_DMA1_CCR2_bit at DMA1_CCR2.B8;
    sbit  PSIZE1_DMA1_CCR2_bit at DMA1_CCR2.B9;
    sbit  MINC_DMA1_CCR2_bit at DMA1_CCR2.B7;
    sbit  PINC_DMA1_CCR2_bit at DMA1_CCR2.B6;
    sbit  CIRC_DMA1_CCR2_bit at DMA1_CCR2.B5;
    sbit  DIR_DMA1_CCR2_bit at DMA1_CCR2.B4;
    sbit  TEIE_DMA1_CCR2_bit at DMA1_CCR2.B3;
    sbit  HTIE_DMA1_CCR2_bit at DMA1_CCR2.B2;
    sbit  TCIE_DMA1_CCR2_bit at DMA1_CCR2.B1;
    sbit  EN_DMA1_CCR2_bit at DMA1_CCR2.B0;

sfr unsigned long   volatile DMA1_CNDTR2          absolute 0x40020020;
    sbit  NDT0_DMA1_CNDTR2_bit at DMA1_CNDTR2.B0;
    sbit  NDT1_DMA1_CNDTR2_bit at DMA1_CNDTR2.B1;
    sbit  NDT2_DMA1_CNDTR2_bit at DMA1_CNDTR2.B2;
    sbit  NDT3_DMA1_CNDTR2_bit at DMA1_CNDTR2.B3;
    sbit  NDT4_DMA1_CNDTR2_bit at DMA1_CNDTR2.B4;
    sbit  NDT5_DMA1_CNDTR2_bit at DMA1_CNDTR2.B5;
    sbit  NDT6_DMA1_CNDTR2_bit at DMA1_CNDTR2.B6;
    sbit  NDT7_DMA1_CNDTR2_bit at DMA1_CNDTR2.B7;
    sbit  NDT8_DMA1_CNDTR2_bit at DMA1_CNDTR2.B8;
    sbit  NDT9_DMA1_CNDTR2_bit at DMA1_CNDTR2.B9;
    sbit  NDT10_DMA1_CNDTR2_bit at DMA1_CNDTR2.B10;
    sbit  NDT11_DMA1_CNDTR2_bit at DMA1_CNDTR2.B11;
    sbit  NDT12_DMA1_CNDTR2_bit at DMA1_CNDTR2.B12;
    sbit  NDT13_DMA1_CNDTR2_bit at DMA1_CNDTR2.B13;
    sbit  NDT14_DMA1_CNDTR2_bit at DMA1_CNDTR2.B14;
    sbit  NDT15_DMA1_CNDTR2_bit at DMA1_CNDTR2.B15;

sfr unsigned long   volatile DMA1_CPAR2           absolute 0x40020024;
    sbit  PA0_DMA1_CPAR2_bit at DMA1_CPAR2.B0;
    sbit  PA1_DMA1_CPAR2_bit at DMA1_CPAR2.B1;
    sbit  PA2_DMA1_CPAR2_bit at DMA1_CPAR2.B2;
    sbit  PA3_DMA1_CPAR2_bit at DMA1_CPAR2.B3;
    sbit  PA4_DMA1_CPAR2_bit at DMA1_CPAR2.B4;
    sbit  PA5_DMA1_CPAR2_bit at DMA1_CPAR2.B5;
    sbit  PA6_DMA1_CPAR2_bit at DMA1_CPAR2.B6;
    sbit  PA7_DMA1_CPAR2_bit at DMA1_CPAR2.B7;
    sbit  PA8_DMA1_CPAR2_bit at DMA1_CPAR2.B8;
    sbit  PA9_DMA1_CPAR2_bit at DMA1_CPAR2.B9;
    sbit  PA10_DMA1_CPAR2_bit at DMA1_CPAR2.B10;
    sbit  PA11_DMA1_CPAR2_bit at DMA1_CPAR2.B11;
    sbit  PA12_DMA1_CPAR2_bit at DMA1_CPAR2.B12;
    sbit  PA13_DMA1_CPAR2_bit at DMA1_CPAR2.B13;
    sbit  PA14_DMA1_CPAR2_bit at DMA1_CPAR2.B14;
    sbit  PA15_DMA1_CPAR2_bit at DMA1_CPAR2.B15;
    sbit  PA16_DMA1_CPAR2_bit at DMA1_CPAR2.B16;
    sbit  PA17_DMA1_CPAR2_bit at DMA1_CPAR2.B17;
    sbit  PA18_DMA1_CPAR2_bit at DMA1_CPAR2.B18;
    sbit  PA19_DMA1_CPAR2_bit at DMA1_CPAR2.B19;
    sbit  PA20_DMA1_CPAR2_bit at DMA1_CPAR2.B20;
    sbit  PA21_DMA1_CPAR2_bit at DMA1_CPAR2.B21;
    sbit  PA22_DMA1_CPAR2_bit at DMA1_CPAR2.B22;
    sbit  PA23_DMA1_CPAR2_bit at DMA1_CPAR2.B23;
    sbit  PA24_DMA1_CPAR2_bit at DMA1_CPAR2.B24;
    sbit  PA25_DMA1_CPAR2_bit at DMA1_CPAR2.B25;
    sbit  PA26_DMA1_CPAR2_bit at DMA1_CPAR2.B26;
    sbit  PA27_DMA1_CPAR2_bit at DMA1_CPAR2.B27;
    sbit  PA28_DMA1_CPAR2_bit at DMA1_CPAR2.B28;
    sbit  PA29_DMA1_CPAR2_bit at DMA1_CPAR2.B29;
    sbit  PA30_DMA1_CPAR2_bit at DMA1_CPAR2.B30;
    sbit  PA31_DMA1_CPAR2_bit at DMA1_CPAR2.B31;

sfr unsigned long   volatile DMA1_CMAR2           absolute 0x40020028;
    sbit  MA0_DMA1_CMAR2_bit at DMA1_CMAR2.B0;
    sbit  MA1_DMA1_CMAR2_bit at DMA1_CMAR2.B1;
    sbit  MA2_DMA1_CMAR2_bit at DMA1_CMAR2.B2;
    sbit  MA3_DMA1_CMAR2_bit at DMA1_CMAR2.B3;
    sbit  MA4_DMA1_CMAR2_bit at DMA1_CMAR2.B4;
    sbit  MA5_DMA1_CMAR2_bit at DMA1_CMAR2.B5;
    sbit  MA6_DMA1_CMAR2_bit at DMA1_CMAR2.B6;
    sbit  MA7_DMA1_CMAR2_bit at DMA1_CMAR2.B7;
    sbit  MA8_DMA1_CMAR2_bit at DMA1_CMAR2.B8;
    sbit  MA9_DMA1_CMAR2_bit at DMA1_CMAR2.B9;
    sbit  MA10_DMA1_CMAR2_bit at DMA1_CMAR2.B10;
    sbit  MA11_DMA1_CMAR2_bit at DMA1_CMAR2.B11;
    sbit  MA12_DMA1_CMAR2_bit at DMA1_CMAR2.B12;
    sbit  MA13_DMA1_CMAR2_bit at DMA1_CMAR2.B13;
    sbit  MA14_DMA1_CMAR2_bit at DMA1_CMAR2.B14;
    sbit  MA15_DMA1_CMAR2_bit at DMA1_CMAR2.B15;
    sbit  MA16_DMA1_CMAR2_bit at DMA1_CMAR2.B16;
    sbit  MA17_DMA1_CMAR2_bit at DMA1_CMAR2.B17;
    sbit  MA18_DMA1_CMAR2_bit at DMA1_CMAR2.B18;
    sbit  MA19_DMA1_CMAR2_bit at DMA1_CMAR2.B19;
    sbit  MA20_DMA1_CMAR2_bit at DMA1_CMAR2.B20;
    sbit  MA21_DMA1_CMAR2_bit at DMA1_CMAR2.B21;
    sbit  MA22_DMA1_CMAR2_bit at DMA1_CMAR2.B22;
    sbit  MA23_DMA1_CMAR2_bit at DMA1_CMAR2.B23;
    sbit  MA24_DMA1_CMAR2_bit at DMA1_CMAR2.B24;
    sbit  MA25_DMA1_CMAR2_bit at DMA1_CMAR2.B25;
    sbit  MA26_DMA1_CMAR2_bit at DMA1_CMAR2.B26;
    sbit  MA27_DMA1_CMAR2_bit at DMA1_CMAR2.B27;
    sbit  MA28_DMA1_CMAR2_bit at DMA1_CMAR2.B28;
    sbit  MA29_DMA1_CMAR2_bit at DMA1_CMAR2.B29;
    sbit  MA30_DMA1_CMAR2_bit at DMA1_CMAR2.B30;
    sbit  MA31_DMA1_CMAR2_bit at DMA1_CMAR2.B31;

sfr unsigned long   volatile DMA1_CCR3            absolute 0x40020030;
    sbit  MEM2MEM_DMA1_CCR3_bit at DMA1_CCR3.B14;
    sbit  PL0_DMA1_CCR3_bit at DMA1_CCR3.B12;
    sbit  PL1_DMA1_CCR3_bit at DMA1_CCR3.B13;
    sbit  MSIZE0_DMA1_CCR3_bit at DMA1_CCR3.B10;
    sbit  MSIZE1_DMA1_CCR3_bit at DMA1_CCR3.B11;
    sbit  PSIZE0_DMA1_CCR3_bit at DMA1_CCR3.B8;
    sbit  PSIZE1_DMA1_CCR3_bit at DMA1_CCR3.B9;
    sbit  MINC_DMA1_CCR3_bit at DMA1_CCR3.B7;
    sbit  PINC_DMA1_CCR3_bit at DMA1_CCR3.B6;
    sbit  CIRC_DMA1_CCR3_bit at DMA1_CCR3.B5;
    sbit  DIR_DMA1_CCR3_bit at DMA1_CCR3.B4;
    sbit  TEIE_DMA1_CCR3_bit at DMA1_CCR3.B3;
    sbit  HTIE_DMA1_CCR3_bit at DMA1_CCR3.B2;
    sbit  TCIE_DMA1_CCR3_bit at DMA1_CCR3.B1;
    sbit  EN_DMA1_CCR3_bit at DMA1_CCR3.B0;

sfr unsigned long   volatile DMA1_CNDTR3          absolute 0x40020034;
    sbit  NDT0_DMA1_CNDTR3_bit at DMA1_CNDTR3.B0;
    sbit  NDT1_DMA1_CNDTR3_bit at DMA1_CNDTR3.B1;
    sbit  NDT2_DMA1_CNDTR3_bit at DMA1_CNDTR3.B2;
    sbit  NDT3_DMA1_CNDTR3_bit at DMA1_CNDTR3.B3;
    sbit  NDT4_DMA1_CNDTR3_bit at DMA1_CNDTR3.B4;
    sbit  NDT5_DMA1_CNDTR3_bit at DMA1_CNDTR3.B5;
    sbit  NDT6_DMA1_CNDTR3_bit at DMA1_CNDTR3.B6;
    sbit  NDT7_DMA1_CNDTR3_bit at DMA1_CNDTR3.B7;
    sbit  NDT8_DMA1_CNDTR3_bit at DMA1_CNDTR3.B8;
    sbit  NDT9_DMA1_CNDTR3_bit at DMA1_CNDTR3.B9;
    sbit  NDT10_DMA1_CNDTR3_bit at DMA1_CNDTR3.B10;
    sbit  NDT11_DMA1_CNDTR3_bit at DMA1_CNDTR3.B11;
    sbit  NDT12_DMA1_CNDTR3_bit at DMA1_CNDTR3.B12;
    sbit  NDT13_DMA1_CNDTR3_bit at DMA1_CNDTR3.B13;
    sbit  NDT14_DMA1_CNDTR3_bit at DMA1_CNDTR3.B14;
    sbit  NDT15_DMA1_CNDTR3_bit at DMA1_CNDTR3.B15;

sfr unsigned long   volatile DMA1_CPAR3           absolute 0x40020038;
    sbit  PA0_DMA1_CPAR3_bit at DMA1_CPAR3.B0;
    sbit  PA1_DMA1_CPAR3_bit at DMA1_CPAR3.B1;
    sbit  PA2_DMA1_CPAR3_bit at DMA1_CPAR3.B2;
    sbit  PA3_DMA1_CPAR3_bit at DMA1_CPAR3.B3;
    sbit  PA4_DMA1_CPAR3_bit at DMA1_CPAR3.B4;
    sbit  PA5_DMA1_CPAR3_bit at DMA1_CPAR3.B5;
    sbit  PA6_DMA1_CPAR3_bit at DMA1_CPAR3.B6;
    sbit  PA7_DMA1_CPAR3_bit at DMA1_CPAR3.B7;
    sbit  PA8_DMA1_CPAR3_bit at DMA1_CPAR3.B8;
    sbit  PA9_DMA1_CPAR3_bit at DMA1_CPAR3.B9;
    sbit  PA10_DMA1_CPAR3_bit at DMA1_CPAR3.B10;
    sbit  PA11_DMA1_CPAR3_bit at DMA1_CPAR3.B11;
    sbit  PA12_DMA1_CPAR3_bit at DMA1_CPAR3.B12;
    sbit  PA13_DMA1_CPAR3_bit at DMA1_CPAR3.B13;
    sbit  PA14_DMA1_CPAR3_bit at DMA1_CPAR3.B14;
    sbit  PA15_DMA1_CPAR3_bit at DMA1_CPAR3.B15;
    sbit  PA16_DMA1_CPAR3_bit at DMA1_CPAR3.B16;
    sbit  PA17_DMA1_CPAR3_bit at DMA1_CPAR3.B17;
    sbit  PA18_DMA1_CPAR3_bit at DMA1_CPAR3.B18;
    sbit  PA19_DMA1_CPAR3_bit at DMA1_CPAR3.B19;
    sbit  PA20_DMA1_CPAR3_bit at DMA1_CPAR3.B20;
    sbit  PA21_DMA1_CPAR3_bit at DMA1_CPAR3.B21;
    sbit  PA22_DMA1_CPAR3_bit at DMA1_CPAR3.B22;
    sbit  PA23_DMA1_CPAR3_bit at DMA1_CPAR3.B23;
    sbit  PA24_DMA1_CPAR3_bit at DMA1_CPAR3.B24;
    sbit  PA25_DMA1_CPAR3_bit at DMA1_CPAR3.B25;
    sbit  PA26_DMA1_CPAR3_bit at DMA1_CPAR3.B26;
    sbit  PA27_DMA1_CPAR3_bit at DMA1_CPAR3.B27;
    sbit  PA28_DMA1_CPAR3_bit at DMA1_CPAR3.B28;
    sbit  PA29_DMA1_CPAR3_bit at DMA1_CPAR3.B29;
    sbit  PA30_DMA1_CPAR3_bit at DMA1_CPAR3.B30;
    sbit  PA31_DMA1_CPAR3_bit at DMA1_CPAR3.B31;

sfr unsigned long   volatile DMA1_CMAR3           absolute 0x4002003C;
    sbit  MA0_DMA1_CMAR3_bit at DMA1_CMAR3.B0;
    sbit  MA1_DMA1_CMAR3_bit at DMA1_CMAR3.B1;
    sbit  MA2_DMA1_CMAR3_bit at DMA1_CMAR3.B2;
    sbit  MA3_DMA1_CMAR3_bit at DMA1_CMAR3.B3;
    sbit  MA4_DMA1_CMAR3_bit at DMA1_CMAR3.B4;
    sbit  MA5_DMA1_CMAR3_bit at DMA1_CMAR3.B5;
    sbit  MA6_DMA1_CMAR3_bit at DMA1_CMAR3.B6;
    sbit  MA7_DMA1_CMAR3_bit at DMA1_CMAR3.B7;
    sbit  MA8_DMA1_CMAR3_bit at DMA1_CMAR3.B8;
    sbit  MA9_DMA1_CMAR3_bit at DMA1_CMAR3.B9;
    sbit  MA10_DMA1_CMAR3_bit at DMA1_CMAR3.B10;
    sbit  MA11_DMA1_CMAR3_bit at DMA1_CMAR3.B11;
    sbit  MA12_DMA1_CMAR3_bit at DMA1_CMAR3.B12;
    sbit  MA13_DMA1_CMAR3_bit at DMA1_CMAR3.B13;
    sbit  MA14_DMA1_CMAR3_bit at DMA1_CMAR3.B14;
    sbit  MA15_DMA1_CMAR3_bit at DMA1_CMAR3.B15;
    sbit  MA16_DMA1_CMAR3_bit at DMA1_CMAR3.B16;
    sbit  MA17_DMA1_CMAR3_bit at DMA1_CMAR3.B17;
    sbit  MA18_DMA1_CMAR3_bit at DMA1_CMAR3.B18;
    sbit  MA19_DMA1_CMAR3_bit at DMA1_CMAR3.B19;
    sbit  MA20_DMA1_CMAR3_bit at DMA1_CMAR3.B20;
    sbit  MA21_DMA1_CMAR3_bit at DMA1_CMAR3.B21;
    sbit  MA22_DMA1_CMAR3_bit at DMA1_CMAR3.B22;
    sbit  MA23_DMA1_CMAR3_bit at DMA1_CMAR3.B23;
    sbit  MA24_DMA1_CMAR3_bit at DMA1_CMAR3.B24;
    sbit  MA25_DMA1_CMAR3_bit at DMA1_CMAR3.B25;
    sbit  MA26_DMA1_CMAR3_bit at DMA1_CMAR3.B26;
    sbit  MA27_DMA1_CMAR3_bit at DMA1_CMAR3.B27;
    sbit  MA28_DMA1_CMAR3_bit at DMA1_CMAR3.B28;
    sbit  MA29_DMA1_CMAR3_bit at DMA1_CMAR3.B29;
    sbit  MA30_DMA1_CMAR3_bit at DMA1_CMAR3.B30;
    sbit  MA31_DMA1_CMAR3_bit at DMA1_CMAR3.B31;

sfr unsigned long   volatile DMA1_CCR4            absolute 0x40020044;
    sbit  MEM2MEM_DMA1_CCR4_bit at DMA1_CCR4.B14;
    sbit  PL0_DMA1_CCR4_bit at DMA1_CCR4.B12;
    sbit  PL1_DMA1_CCR4_bit at DMA1_CCR4.B13;
    sbit  MSIZE0_DMA1_CCR4_bit at DMA1_CCR4.B10;
    sbit  MSIZE1_DMA1_CCR4_bit at DMA1_CCR4.B11;
    sbit  PSIZE0_DMA1_CCR4_bit at DMA1_CCR4.B8;
    sbit  PSIZE1_DMA1_CCR4_bit at DMA1_CCR4.B9;
    sbit  MINC_DMA1_CCR4_bit at DMA1_CCR4.B7;
    sbit  PINC_DMA1_CCR4_bit at DMA1_CCR4.B6;
    sbit  CIRC_DMA1_CCR4_bit at DMA1_CCR4.B5;
    sbit  DIR_DMA1_CCR4_bit at DMA1_CCR4.B4;
    sbit  TEIE_DMA1_CCR4_bit at DMA1_CCR4.B3;
    sbit  HTIE_DMA1_CCR4_bit at DMA1_CCR4.B2;
    sbit  TCIE_DMA1_CCR4_bit at DMA1_CCR4.B1;
    sbit  EN_DMA1_CCR4_bit at DMA1_CCR4.B0;

sfr unsigned long   volatile DMA1_CNDTR4          absolute 0x40020048;
    sbit  NDT0_DMA1_CNDTR4_bit at DMA1_CNDTR4.B0;
    sbit  NDT1_DMA1_CNDTR4_bit at DMA1_CNDTR4.B1;
    sbit  NDT2_DMA1_CNDTR4_bit at DMA1_CNDTR4.B2;
    sbit  NDT3_DMA1_CNDTR4_bit at DMA1_CNDTR4.B3;
    sbit  NDT4_DMA1_CNDTR4_bit at DMA1_CNDTR4.B4;
    sbit  NDT5_DMA1_CNDTR4_bit at DMA1_CNDTR4.B5;
    sbit  NDT6_DMA1_CNDTR4_bit at DMA1_CNDTR4.B6;
    sbit  NDT7_DMA1_CNDTR4_bit at DMA1_CNDTR4.B7;
    sbit  NDT8_DMA1_CNDTR4_bit at DMA1_CNDTR4.B8;
    sbit  NDT9_DMA1_CNDTR4_bit at DMA1_CNDTR4.B9;
    sbit  NDT10_DMA1_CNDTR4_bit at DMA1_CNDTR4.B10;
    sbit  NDT11_DMA1_CNDTR4_bit at DMA1_CNDTR4.B11;
    sbit  NDT12_DMA1_CNDTR4_bit at DMA1_CNDTR4.B12;
    sbit  NDT13_DMA1_CNDTR4_bit at DMA1_CNDTR4.B13;
    sbit  NDT14_DMA1_CNDTR4_bit at DMA1_CNDTR4.B14;
    sbit  NDT15_DMA1_CNDTR4_bit at DMA1_CNDTR4.B15;

sfr unsigned long   volatile DMA1_CPAR4           absolute 0x4002004C;
    sbit  PA0_DMA1_CPAR4_bit at DMA1_CPAR4.B0;
    sbit  PA1_DMA1_CPAR4_bit at DMA1_CPAR4.B1;
    sbit  PA2_DMA1_CPAR4_bit at DMA1_CPAR4.B2;
    sbit  PA3_DMA1_CPAR4_bit at DMA1_CPAR4.B3;
    sbit  PA4_DMA1_CPAR4_bit at DMA1_CPAR4.B4;
    sbit  PA5_DMA1_CPAR4_bit at DMA1_CPAR4.B5;
    sbit  PA6_DMA1_CPAR4_bit at DMA1_CPAR4.B6;
    sbit  PA7_DMA1_CPAR4_bit at DMA1_CPAR4.B7;
    sbit  PA8_DMA1_CPAR4_bit at DMA1_CPAR4.B8;
    sbit  PA9_DMA1_CPAR4_bit at DMA1_CPAR4.B9;
    sbit  PA10_DMA1_CPAR4_bit at DMA1_CPAR4.B10;
    sbit  PA11_DMA1_CPAR4_bit at DMA1_CPAR4.B11;
    sbit  PA12_DMA1_CPAR4_bit at DMA1_CPAR4.B12;
    sbit  PA13_DMA1_CPAR4_bit at DMA1_CPAR4.B13;
    sbit  PA14_DMA1_CPAR4_bit at DMA1_CPAR4.B14;
    sbit  PA15_DMA1_CPAR4_bit at DMA1_CPAR4.B15;
    sbit  PA16_DMA1_CPAR4_bit at DMA1_CPAR4.B16;
    sbit  PA17_DMA1_CPAR4_bit at DMA1_CPAR4.B17;
    sbit  PA18_DMA1_CPAR4_bit at DMA1_CPAR4.B18;
    sbit  PA19_DMA1_CPAR4_bit at DMA1_CPAR4.B19;
    sbit  PA20_DMA1_CPAR4_bit at DMA1_CPAR4.B20;
    sbit  PA21_DMA1_CPAR4_bit at DMA1_CPAR4.B21;
    sbit  PA22_DMA1_CPAR4_bit at DMA1_CPAR4.B22;
    sbit  PA23_DMA1_CPAR4_bit at DMA1_CPAR4.B23;
    sbit  PA24_DMA1_CPAR4_bit at DMA1_CPAR4.B24;
    sbit  PA25_DMA1_CPAR4_bit at DMA1_CPAR4.B25;
    sbit  PA26_DMA1_CPAR4_bit at DMA1_CPAR4.B26;
    sbit  PA27_DMA1_CPAR4_bit at DMA1_CPAR4.B27;
    sbit  PA28_DMA1_CPAR4_bit at DMA1_CPAR4.B28;
    sbit  PA29_DMA1_CPAR4_bit at DMA1_CPAR4.B29;
    sbit  PA30_DMA1_CPAR4_bit at DMA1_CPAR4.B30;
    sbit  PA31_DMA1_CPAR4_bit at DMA1_CPAR4.B31;

sfr unsigned long   volatile DMA1_CMAR4           absolute 0x40020050;
    sbit  MA0_DMA1_CMAR4_bit at DMA1_CMAR4.B0;
    sbit  MA1_DMA1_CMAR4_bit at DMA1_CMAR4.B1;
    sbit  MA2_DMA1_CMAR4_bit at DMA1_CMAR4.B2;
    sbit  MA3_DMA1_CMAR4_bit at DMA1_CMAR4.B3;
    sbit  MA4_DMA1_CMAR4_bit at DMA1_CMAR4.B4;
    sbit  MA5_DMA1_CMAR4_bit at DMA1_CMAR4.B5;
    sbit  MA6_DMA1_CMAR4_bit at DMA1_CMAR4.B6;
    sbit  MA7_DMA1_CMAR4_bit at DMA1_CMAR4.B7;
    sbit  MA8_DMA1_CMAR4_bit at DMA1_CMAR4.B8;
    sbit  MA9_DMA1_CMAR4_bit at DMA1_CMAR4.B9;
    sbit  MA10_DMA1_CMAR4_bit at DMA1_CMAR4.B10;
    sbit  MA11_DMA1_CMAR4_bit at DMA1_CMAR4.B11;
    sbit  MA12_DMA1_CMAR4_bit at DMA1_CMAR4.B12;
    sbit  MA13_DMA1_CMAR4_bit at DMA1_CMAR4.B13;
    sbit  MA14_DMA1_CMAR4_bit at DMA1_CMAR4.B14;
    sbit  MA15_DMA1_CMAR4_bit at DMA1_CMAR4.B15;
    sbit  MA16_DMA1_CMAR4_bit at DMA1_CMAR4.B16;
    sbit  MA17_DMA1_CMAR4_bit at DMA1_CMAR4.B17;
    sbit  MA18_DMA1_CMAR4_bit at DMA1_CMAR4.B18;
    sbit  MA19_DMA1_CMAR4_bit at DMA1_CMAR4.B19;
    sbit  MA20_DMA1_CMAR4_bit at DMA1_CMAR4.B20;
    sbit  MA21_DMA1_CMAR4_bit at DMA1_CMAR4.B21;
    sbit  MA22_DMA1_CMAR4_bit at DMA1_CMAR4.B22;
    sbit  MA23_DMA1_CMAR4_bit at DMA1_CMAR4.B23;
    sbit  MA24_DMA1_CMAR4_bit at DMA1_CMAR4.B24;
    sbit  MA25_DMA1_CMAR4_bit at DMA1_CMAR4.B25;
    sbit  MA26_DMA1_CMAR4_bit at DMA1_CMAR4.B26;
    sbit  MA27_DMA1_CMAR4_bit at DMA1_CMAR4.B27;
    sbit  MA28_DMA1_CMAR4_bit at DMA1_CMAR4.B28;
    sbit  MA29_DMA1_CMAR4_bit at DMA1_CMAR4.B29;
    sbit  MA30_DMA1_CMAR4_bit at DMA1_CMAR4.B30;
    sbit  MA31_DMA1_CMAR4_bit at DMA1_CMAR4.B31;

sfr unsigned long   volatile DMA1_CCR5            absolute 0x40020058;
    sbit  MEM2MEM_DMA1_CCR5_bit at DMA1_CCR5.B14;
    sbit  PL0_DMA1_CCR5_bit at DMA1_CCR5.B12;
    sbit  PL1_DMA1_CCR5_bit at DMA1_CCR5.B13;
    sbit  MSIZE0_DMA1_CCR5_bit at DMA1_CCR5.B10;
    sbit  MSIZE1_DMA1_CCR5_bit at DMA1_CCR5.B11;
    sbit  PSIZE0_DMA1_CCR5_bit at DMA1_CCR5.B8;
    sbit  PSIZE1_DMA1_CCR5_bit at DMA1_CCR5.B9;
    sbit  MINC_DMA1_CCR5_bit at DMA1_CCR5.B7;
    sbit  PINC_DMA1_CCR5_bit at DMA1_CCR5.B6;
    sbit  CIRC_DMA1_CCR5_bit at DMA1_CCR5.B5;
    sbit  DIR_DMA1_CCR5_bit at DMA1_CCR5.B4;
    sbit  TEIE_DMA1_CCR5_bit at DMA1_CCR5.B3;
    sbit  HTIE_DMA1_CCR5_bit at DMA1_CCR5.B2;
    sbit  TCIE_DMA1_CCR5_bit at DMA1_CCR5.B1;
    sbit  EN_DMA1_CCR5_bit at DMA1_CCR5.B0;

sfr unsigned long   volatile DMA1_CNDTR5          absolute 0x4002005C;
    sbit  NDT0_DMA1_CNDTR5_bit at DMA1_CNDTR5.B0;
    sbit  NDT1_DMA1_CNDTR5_bit at DMA1_CNDTR5.B1;
    sbit  NDT2_DMA1_CNDTR5_bit at DMA1_CNDTR5.B2;
    sbit  NDT3_DMA1_CNDTR5_bit at DMA1_CNDTR5.B3;
    sbit  NDT4_DMA1_CNDTR5_bit at DMA1_CNDTR5.B4;
    sbit  NDT5_DMA1_CNDTR5_bit at DMA1_CNDTR5.B5;
    sbit  NDT6_DMA1_CNDTR5_bit at DMA1_CNDTR5.B6;
    sbit  NDT7_DMA1_CNDTR5_bit at DMA1_CNDTR5.B7;
    sbit  NDT8_DMA1_CNDTR5_bit at DMA1_CNDTR5.B8;
    sbit  NDT9_DMA1_CNDTR5_bit at DMA1_CNDTR5.B9;
    sbit  NDT10_DMA1_CNDTR5_bit at DMA1_CNDTR5.B10;
    sbit  NDT11_DMA1_CNDTR5_bit at DMA1_CNDTR5.B11;
    sbit  NDT12_DMA1_CNDTR5_bit at DMA1_CNDTR5.B12;
    sbit  NDT13_DMA1_CNDTR5_bit at DMA1_CNDTR5.B13;
    sbit  NDT14_DMA1_CNDTR5_bit at DMA1_CNDTR5.B14;
    sbit  NDT15_DMA1_CNDTR5_bit at DMA1_CNDTR5.B15;

sfr unsigned long   volatile DMA1_CPAR5           absolute 0x40020060;
    sbit  PA0_DMA1_CPAR5_bit at DMA1_CPAR5.B0;
    sbit  PA1_DMA1_CPAR5_bit at DMA1_CPAR5.B1;
    sbit  PA2_DMA1_CPAR5_bit at DMA1_CPAR5.B2;
    sbit  PA3_DMA1_CPAR5_bit at DMA1_CPAR5.B3;
    sbit  PA4_DMA1_CPAR5_bit at DMA1_CPAR5.B4;
    sbit  PA5_DMA1_CPAR5_bit at DMA1_CPAR5.B5;
    sbit  PA6_DMA1_CPAR5_bit at DMA1_CPAR5.B6;
    sbit  PA7_DMA1_CPAR5_bit at DMA1_CPAR5.B7;
    sbit  PA8_DMA1_CPAR5_bit at DMA1_CPAR5.B8;
    sbit  PA9_DMA1_CPAR5_bit at DMA1_CPAR5.B9;
    sbit  PA10_DMA1_CPAR5_bit at DMA1_CPAR5.B10;
    sbit  PA11_DMA1_CPAR5_bit at DMA1_CPAR5.B11;
    sbit  PA12_DMA1_CPAR5_bit at DMA1_CPAR5.B12;
    sbit  PA13_DMA1_CPAR5_bit at DMA1_CPAR5.B13;
    sbit  PA14_DMA1_CPAR5_bit at DMA1_CPAR5.B14;
    sbit  PA15_DMA1_CPAR5_bit at DMA1_CPAR5.B15;
    sbit  PA16_DMA1_CPAR5_bit at DMA1_CPAR5.B16;
    sbit  PA17_DMA1_CPAR5_bit at DMA1_CPAR5.B17;
    sbit  PA18_DMA1_CPAR5_bit at DMA1_CPAR5.B18;
    sbit  PA19_DMA1_CPAR5_bit at DMA1_CPAR5.B19;
    sbit  PA20_DMA1_CPAR5_bit at DMA1_CPAR5.B20;
    sbit  PA21_DMA1_CPAR5_bit at DMA1_CPAR5.B21;
    sbit  PA22_DMA1_CPAR5_bit at DMA1_CPAR5.B22;
    sbit  PA23_DMA1_CPAR5_bit at DMA1_CPAR5.B23;
    sbit  PA24_DMA1_CPAR5_bit at DMA1_CPAR5.B24;
    sbit  PA25_DMA1_CPAR5_bit at DMA1_CPAR5.B25;
    sbit  PA26_DMA1_CPAR5_bit at DMA1_CPAR5.B26;
    sbit  PA27_DMA1_CPAR5_bit at DMA1_CPAR5.B27;
    sbit  PA28_DMA1_CPAR5_bit at DMA1_CPAR5.B28;
    sbit  PA29_DMA1_CPAR5_bit at DMA1_CPAR5.B29;
    sbit  PA30_DMA1_CPAR5_bit at DMA1_CPAR5.B30;
    sbit  PA31_DMA1_CPAR5_bit at DMA1_CPAR5.B31;

sfr unsigned long   volatile DMA1_CMAR5           absolute 0x40020064;
    sbit  MA0_DMA1_CMAR5_bit at DMA1_CMAR5.B0;
    sbit  MA1_DMA1_CMAR5_bit at DMA1_CMAR5.B1;
    sbit  MA2_DMA1_CMAR5_bit at DMA1_CMAR5.B2;
    sbit  MA3_DMA1_CMAR5_bit at DMA1_CMAR5.B3;
    sbit  MA4_DMA1_CMAR5_bit at DMA1_CMAR5.B4;
    sbit  MA5_DMA1_CMAR5_bit at DMA1_CMAR5.B5;
    sbit  MA6_DMA1_CMAR5_bit at DMA1_CMAR5.B6;
    sbit  MA7_DMA1_CMAR5_bit at DMA1_CMAR5.B7;
    sbit  MA8_DMA1_CMAR5_bit at DMA1_CMAR5.B8;
    sbit  MA9_DMA1_CMAR5_bit at DMA1_CMAR5.B9;
    sbit  MA10_DMA1_CMAR5_bit at DMA1_CMAR5.B10;
    sbit  MA11_DMA1_CMAR5_bit at DMA1_CMAR5.B11;
    sbit  MA12_DMA1_CMAR5_bit at DMA1_CMAR5.B12;
    sbit  MA13_DMA1_CMAR5_bit at DMA1_CMAR5.B13;
    sbit  MA14_DMA1_CMAR5_bit at DMA1_CMAR5.B14;
    sbit  MA15_DMA1_CMAR5_bit at DMA1_CMAR5.B15;
    sbit  MA16_DMA1_CMAR5_bit at DMA1_CMAR5.B16;
    sbit  MA17_DMA1_CMAR5_bit at DMA1_CMAR5.B17;
    sbit  MA18_DMA1_CMAR5_bit at DMA1_CMAR5.B18;
    sbit  MA19_DMA1_CMAR5_bit at DMA1_CMAR5.B19;
    sbit  MA20_DMA1_CMAR5_bit at DMA1_CMAR5.B20;
    sbit  MA21_DMA1_CMAR5_bit at DMA1_CMAR5.B21;
    sbit  MA22_DMA1_CMAR5_bit at DMA1_CMAR5.B22;
    sbit  MA23_DMA1_CMAR5_bit at DMA1_CMAR5.B23;
    sbit  MA24_DMA1_CMAR5_bit at DMA1_CMAR5.B24;
    sbit  MA25_DMA1_CMAR5_bit at DMA1_CMAR5.B25;
    sbit  MA26_DMA1_CMAR5_bit at DMA1_CMAR5.B26;
    sbit  MA27_DMA1_CMAR5_bit at DMA1_CMAR5.B27;
    sbit  MA28_DMA1_CMAR5_bit at DMA1_CMAR5.B28;
    sbit  MA29_DMA1_CMAR5_bit at DMA1_CMAR5.B29;
    sbit  MA30_DMA1_CMAR5_bit at DMA1_CMAR5.B30;
    sbit  MA31_DMA1_CMAR5_bit at DMA1_CMAR5.B31;

sfr unsigned long   volatile DMA1_CCR6            absolute 0x4002006C;
    sbit  MEM2MEM_DMA1_CCR6_bit at DMA1_CCR6.B14;
    sbit  PL0_DMA1_CCR6_bit at DMA1_CCR6.B12;
    sbit  PL1_DMA1_CCR6_bit at DMA1_CCR6.B13;
    sbit  MSIZE0_DMA1_CCR6_bit at DMA1_CCR6.B10;
    sbit  MSIZE1_DMA1_CCR6_bit at DMA1_CCR6.B11;
    sbit  PSIZE0_DMA1_CCR6_bit at DMA1_CCR6.B8;
    sbit  PSIZE1_DMA1_CCR6_bit at DMA1_CCR6.B9;
    sbit  MINC_DMA1_CCR6_bit at DMA1_CCR6.B7;
    sbit  PINC_DMA1_CCR6_bit at DMA1_CCR6.B6;
    sbit  CIRC_DMA1_CCR6_bit at DMA1_CCR6.B5;
    sbit  DIR_DMA1_CCR6_bit at DMA1_CCR6.B4;
    sbit  TEIE_DMA1_CCR6_bit at DMA1_CCR6.B3;
    sbit  HTIE_DMA1_CCR6_bit at DMA1_CCR6.B2;
    sbit  TCIE_DMA1_CCR6_bit at DMA1_CCR6.B1;
    sbit  EN_DMA1_CCR6_bit at DMA1_CCR6.B0;

sfr unsigned long   volatile DMA1_CNDTR6          absolute 0x40020070;
    sbit  NDT0_DMA1_CNDTR6_bit at DMA1_CNDTR6.B0;
    sbit  NDT1_DMA1_CNDTR6_bit at DMA1_CNDTR6.B1;
    sbit  NDT2_DMA1_CNDTR6_bit at DMA1_CNDTR6.B2;
    sbit  NDT3_DMA1_CNDTR6_bit at DMA1_CNDTR6.B3;
    sbit  NDT4_DMA1_CNDTR6_bit at DMA1_CNDTR6.B4;
    sbit  NDT5_DMA1_CNDTR6_bit at DMA1_CNDTR6.B5;
    sbit  NDT6_DMA1_CNDTR6_bit at DMA1_CNDTR6.B6;
    sbit  NDT7_DMA1_CNDTR6_bit at DMA1_CNDTR6.B7;
    sbit  NDT8_DMA1_CNDTR6_bit at DMA1_CNDTR6.B8;
    sbit  NDT9_DMA1_CNDTR6_bit at DMA1_CNDTR6.B9;
    sbit  NDT10_DMA1_CNDTR6_bit at DMA1_CNDTR6.B10;
    sbit  NDT11_DMA1_CNDTR6_bit at DMA1_CNDTR6.B11;
    sbit  NDT12_DMA1_CNDTR6_bit at DMA1_CNDTR6.B12;
    sbit  NDT13_DMA1_CNDTR6_bit at DMA1_CNDTR6.B13;
    sbit  NDT14_DMA1_CNDTR6_bit at DMA1_CNDTR6.B14;
    sbit  NDT15_DMA1_CNDTR6_bit at DMA1_CNDTR6.B15;

sfr unsigned long   volatile DMA1_CPAR6           absolute 0x40020074;
    sbit  PA0_DMA1_CPAR6_bit at DMA1_CPAR6.B0;
    sbit  PA1_DMA1_CPAR6_bit at DMA1_CPAR6.B1;
    sbit  PA2_DMA1_CPAR6_bit at DMA1_CPAR6.B2;
    sbit  PA3_DMA1_CPAR6_bit at DMA1_CPAR6.B3;
    sbit  PA4_DMA1_CPAR6_bit at DMA1_CPAR6.B4;
    sbit  PA5_DMA1_CPAR6_bit at DMA1_CPAR6.B5;
    sbit  PA6_DMA1_CPAR6_bit at DMA1_CPAR6.B6;
    sbit  PA7_DMA1_CPAR6_bit at DMA1_CPAR6.B7;
    sbit  PA8_DMA1_CPAR6_bit at DMA1_CPAR6.B8;
    sbit  PA9_DMA1_CPAR6_bit at DMA1_CPAR6.B9;
    sbit  PA10_DMA1_CPAR6_bit at DMA1_CPAR6.B10;
    sbit  PA11_DMA1_CPAR6_bit at DMA1_CPAR6.B11;
    sbit  PA12_DMA1_CPAR6_bit at DMA1_CPAR6.B12;
    sbit  PA13_DMA1_CPAR6_bit at DMA1_CPAR6.B13;
    sbit  PA14_DMA1_CPAR6_bit at DMA1_CPAR6.B14;
    sbit  PA15_DMA1_CPAR6_bit at DMA1_CPAR6.B15;
    sbit  PA16_DMA1_CPAR6_bit at DMA1_CPAR6.B16;
    sbit  PA17_DMA1_CPAR6_bit at DMA1_CPAR6.B17;
    sbit  PA18_DMA1_CPAR6_bit at DMA1_CPAR6.B18;
    sbit  PA19_DMA1_CPAR6_bit at DMA1_CPAR6.B19;
    sbit  PA20_DMA1_CPAR6_bit at DMA1_CPAR6.B20;
    sbit  PA21_DMA1_CPAR6_bit at DMA1_CPAR6.B21;
    sbit  PA22_DMA1_CPAR6_bit at DMA1_CPAR6.B22;
    sbit  PA23_DMA1_CPAR6_bit at DMA1_CPAR6.B23;
    sbit  PA24_DMA1_CPAR6_bit at DMA1_CPAR6.B24;
    sbit  PA25_DMA1_CPAR6_bit at DMA1_CPAR6.B25;
    sbit  PA26_DMA1_CPAR6_bit at DMA1_CPAR6.B26;
    sbit  PA27_DMA1_CPAR6_bit at DMA1_CPAR6.B27;
    sbit  PA28_DMA1_CPAR6_bit at DMA1_CPAR6.B28;
    sbit  PA29_DMA1_CPAR6_bit at DMA1_CPAR6.B29;
    sbit  PA30_DMA1_CPAR6_bit at DMA1_CPAR6.B30;
    sbit  PA31_DMA1_CPAR6_bit at DMA1_CPAR6.B31;

sfr unsigned long   volatile DMA1_CMAR6           absolute 0x40020078;
    sbit  MA0_DMA1_CMAR6_bit at DMA1_CMAR6.B0;
    sbit  MA1_DMA1_CMAR6_bit at DMA1_CMAR6.B1;
    sbit  MA2_DMA1_CMAR6_bit at DMA1_CMAR6.B2;
    sbit  MA3_DMA1_CMAR6_bit at DMA1_CMAR6.B3;
    sbit  MA4_DMA1_CMAR6_bit at DMA1_CMAR6.B4;
    sbit  MA5_DMA1_CMAR6_bit at DMA1_CMAR6.B5;
    sbit  MA6_DMA1_CMAR6_bit at DMA1_CMAR6.B6;
    sbit  MA7_DMA1_CMAR6_bit at DMA1_CMAR6.B7;
    sbit  MA8_DMA1_CMAR6_bit at DMA1_CMAR6.B8;
    sbit  MA9_DMA1_CMAR6_bit at DMA1_CMAR6.B9;
    sbit  MA10_DMA1_CMAR6_bit at DMA1_CMAR6.B10;
    sbit  MA11_DMA1_CMAR6_bit at DMA1_CMAR6.B11;
    sbit  MA12_DMA1_CMAR6_bit at DMA1_CMAR6.B12;
    sbit  MA13_DMA1_CMAR6_bit at DMA1_CMAR6.B13;
    sbit  MA14_DMA1_CMAR6_bit at DMA1_CMAR6.B14;
    sbit  MA15_DMA1_CMAR6_bit at DMA1_CMAR6.B15;
    sbit  MA16_DMA1_CMAR6_bit at DMA1_CMAR6.B16;
    sbit  MA17_DMA1_CMAR6_bit at DMA1_CMAR6.B17;
    sbit  MA18_DMA1_CMAR6_bit at DMA1_CMAR6.B18;
    sbit  MA19_DMA1_CMAR6_bit at DMA1_CMAR6.B19;
    sbit  MA20_DMA1_CMAR6_bit at DMA1_CMAR6.B20;
    sbit  MA21_DMA1_CMAR6_bit at DMA1_CMAR6.B21;
    sbit  MA22_DMA1_CMAR6_bit at DMA1_CMAR6.B22;
    sbit  MA23_DMA1_CMAR6_bit at DMA1_CMAR6.B23;
    sbit  MA24_DMA1_CMAR6_bit at DMA1_CMAR6.B24;
    sbit  MA25_DMA1_CMAR6_bit at DMA1_CMAR6.B25;
    sbit  MA26_DMA1_CMAR6_bit at DMA1_CMAR6.B26;
    sbit  MA27_DMA1_CMAR6_bit at DMA1_CMAR6.B27;
    sbit  MA28_DMA1_CMAR6_bit at DMA1_CMAR6.B28;
    sbit  MA29_DMA1_CMAR6_bit at DMA1_CMAR6.B29;
    sbit  MA30_DMA1_CMAR6_bit at DMA1_CMAR6.B30;
    sbit  MA31_DMA1_CMAR6_bit at DMA1_CMAR6.B31;

sfr unsigned long   volatile DMA1_CCR7            absolute 0x40020080;
    sbit  MEM2MEM_DMA1_CCR7_bit at DMA1_CCR7.B14;
    sbit  PL0_DMA1_CCR7_bit at DMA1_CCR7.B12;
    sbit  PL1_DMA1_CCR7_bit at DMA1_CCR7.B13;
    sbit  MSIZE0_DMA1_CCR7_bit at DMA1_CCR7.B10;
    sbit  MSIZE1_DMA1_CCR7_bit at DMA1_CCR7.B11;
    sbit  PSIZE0_DMA1_CCR7_bit at DMA1_CCR7.B8;
    sbit  PSIZE1_DMA1_CCR7_bit at DMA1_CCR7.B9;
    sbit  MINC_DMA1_CCR7_bit at DMA1_CCR7.B7;
    sbit  PINC_DMA1_CCR7_bit at DMA1_CCR7.B6;
    sbit  CIRC_DMA1_CCR7_bit at DMA1_CCR7.B5;
    sbit  DIR_DMA1_CCR7_bit at DMA1_CCR7.B4;
    sbit  TEIE_DMA1_CCR7_bit at DMA1_CCR7.B3;
    sbit  HTIE_DMA1_CCR7_bit at DMA1_CCR7.B2;
    sbit  TCIE_DMA1_CCR7_bit at DMA1_CCR7.B1;
    sbit  EN_DMA1_CCR7_bit at DMA1_CCR7.B0;

sfr unsigned long   volatile DMA1_CNDTR7          absolute 0x40020084;
    sbit  NDT0_DMA1_CNDTR7_bit at DMA1_CNDTR7.B0;
    sbit  NDT1_DMA1_CNDTR7_bit at DMA1_CNDTR7.B1;
    sbit  NDT2_DMA1_CNDTR7_bit at DMA1_CNDTR7.B2;
    sbit  NDT3_DMA1_CNDTR7_bit at DMA1_CNDTR7.B3;
    sbit  NDT4_DMA1_CNDTR7_bit at DMA1_CNDTR7.B4;
    sbit  NDT5_DMA1_CNDTR7_bit at DMA1_CNDTR7.B5;
    sbit  NDT6_DMA1_CNDTR7_bit at DMA1_CNDTR7.B6;
    sbit  NDT7_DMA1_CNDTR7_bit at DMA1_CNDTR7.B7;
    sbit  NDT8_DMA1_CNDTR7_bit at DMA1_CNDTR7.B8;
    sbit  NDT9_DMA1_CNDTR7_bit at DMA1_CNDTR7.B9;
    sbit  NDT10_DMA1_CNDTR7_bit at DMA1_CNDTR7.B10;
    sbit  NDT11_DMA1_CNDTR7_bit at DMA1_CNDTR7.B11;
    sbit  NDT12_DMA1_CNDTR7_bit at DMA1_CNDTR7.B12;
    sbit  NDT13_DMA1_CNDTR7_bit at DMA1_CNDTR7.B13;
    sbit  NDT14_DMA1_CNDTR7_bit at DMA1_CNDTR7.B14;
    sbit  NDT15_DMA1_CNDTR7_bit at DMA1_CNDTR7.B15;

sfr unsigned long   volatile DMA1_CPAR7           absolute 0x40020088;
    sbit  PA0_DMA1_CPAR7_bit at DMA1_CPAR7.B0;
    sbit  PA1_DMA1_CPAR7_bit at DMA1_CPAR7.B1;
    sbit  PA2_DMA1_CPAR7_bit at DMA1_CPAR7.B2;
    sbit  PA3_DMA1_CPAR7_bit at DMA1_CPAR7.B3;
    sbit  PA4_DMA1_CPAR7_bit at DMA1_CPAR7.B4;
    sbit  PA5_DMA1_CPAR7_bit at DMA1_CPAR7.B5;
    sbit  PA6_DMA1_CPAR7_bit at DMA1_CPAR7.B6;
    sbit  PA7_DMA1_CPAR7_bit at DMA1_CPAR7.B7;
    sbit  PA8_DMA1_CPAR7_bit at DMA1_CPAR7.B8;
    sbit  PA9_DMA1_CPAR7_bit at DMA1_CPAR7.B9;
    sbit  PA10_DMA1_CPAR7_bit at DMA1_CPAR7.B10;
    sbit  PA11_DMA1_CPAR7_bit at DMA1_CPAR7.B11;
    sbit  PA12_DMA1_CPAR7_bit at DMA1_CPAR7.B12;
    sbit  PA13_DMA1_CPAR7_bit at DMA1_CPAR7.B13;
    sbit  PA14_DMA1_CPAR7_bit at DMA1_CPAR7.B14;
    sbit  PA15_DMA1_CPAR7_bit at DMA1_CPAR7.B15;
    sbit  PA16_DMA1_CPAR7_bit at DMA1_CPAR7.B16;
    sbit  PA17_DMA1_CPAR7_bit at DMA1_CPAR7.B17;
    sbit  PA18_DMA1_CPAR7_bit at DMA1_CPAR7.B18;
    sbit  PA19_DMA1_CPAR7_bit at DMA1_CPAR7.B19;
    sbit  PA20_DMA1_CPAR7_bit at DMA1_CPAR7.B20;
    sbit  PA21_DMA1_CPAR7_bit at DMA1_CPAR7.B21;
    sbit  PA22_DMA1_CPAR7_bit at DMA1_CPAR7.B22;
    sbit  PA23_DMA1_CPAR7_bit at DMA1_CPAR7.B23;
    sbit  PA24_DMA1_CPAR7_bit at DMA1_CPAR7.B24;
    sbit  PA25_DMA1_CPAR7_bit at DMA1_CPAR7.B25;
    sbit  PA26_DMA1_CPAR7_bit at DMA1_CPAR7.B26;
    sbit  PA27_DMA1_CPAR7_bit at DMA1_CPAR7.B27;
    sbit  PA28_DMA1_CPAR7_bit at DMA1_CPAR7.B28;
    sbit  PA29_DMA1_CPAR7_bit at DMA1_CPAR7.B29;
    sbit  PA30_DMA1_CPAR7_bit at DMA1_CPAR7.B30;
    sbit  PA31_DMA1_CPAR7_bit at DMA1_CPAR7.B31;

sfr unsigned long   volatile DMA1_CMAR7           absolute 0x4002008C;
    sbit  MA0_DMA1_CMAR7_bit at DMA1_CMAR7.B0;
    sbit  MA1_DMA1_CMAR7_bit at DMA1_CMAR7.B1;
    sbit  MA2_DMA1_CMAR7_bit at DMA1_CMAR7.B2;
    sbit  MA3_DMA1_CMAR7_bit at DMA1_CMAR7.B3;
    sbit  MA4_DMA1_CMAR7_bit at DMA1_CMAR7.B4;
    sbit  MA5_DMA1_CMAR7_bit at DMA1_CMAR7.B5;
    sbit  MA6_DMA1_CMAR7_bit at DMA1_CMAR7.B6;
    sbit  MA7_DMA1_CMAR7_bit at DMA1_CMAR7.B7;
    sbit  MA8_DMA1_CMAR7_bit at DMA1_CMAR7.B8;
    sbit  MA9_DMA1_CMAR7_bit at DMA1_CMAR7.B9;
    sbit  MA10_DMA1_CMAR7_bit at DMA1_CMAR7.B10;
    sbit  MA11_DMA1_CMAR7_bit at DMA1_CMAR7.B11;
    sbit  MA12_DMA1_CMAR7_bit at DMA1_CMAR7.B12;
    sbit  MA13_DMA1_CMAR7_bit at DMA1_CMAR7.B13;
    sbit  MA14_DMA1_CMAR7_bit at DMA1_CMAR7.B14;
    sbit  MA15_DMA1_CMAR7_bit at DMA1_CMAR7.B15;
    sbit  MA16_DMA1_CMAR7_bit at DMA1_CMAR7.B16;
    sbit  MA17_DMA1_CMAR7_bit at DMA1_CMAR7.B17;
    sbit  MA18_DMA1_CMAR7_bit at DMA1_CMAR7.B18;
    sbit  MA19_DMA1_CMAR7_bit at DMA1_CMAR7.B19;
    sbit  MA20_DMA1_CMAR7_bit at DMA1_CMAR7.B20;
    sbit  MA21_DMA1_CMAR7_bit at DMA1_CMAR7.B21;
    sbit  MA22_DMA1_CMAR7_bit at DMA1_CMAR7.B22;
    sbit  MA23_DMA1_CMAR7_bit at DMA1_CMAR7.B23;
    sbit  MA24_DMA1_CMAR7_bit at DMA1_CMAR7.B24;
    sbit  MA25_DMA1_CMAR7_bit at DMA1_CMAR7.B25;
    sbit  MA26_DMA1_CMAR7_bit at DMA1_CMAR7.B26;
    sbit  MA27_DMA1_CMAR7_bit at DMA1_CMAR7.B27;
    sbit  MA28_DMA1_CMAR7_bit at DMA1_CMAR7.B28;
    sbit  MA29_DMA1_CMAR7_bit at DMA1_CMAR7.B29;
    sbit  MA30_DMA1_CMAR7_bit at DMA1_CMAR7.B30;
    sbit  MA31_DMA1_CMAR7_bit at DMA1_CMAR7.B31;

sfr unsigned long   volatile DMA1_CSELR           absolute 0x400200A8;
    const register unsigned short int C7S0 = 24;
    sbit  C7S0_bit at DMA1_CSELR.B24;
    const register unsigned short int C7S1 = 25;
    sbit  C7S1_bit at DMA1_CSELR.B25;
    const register unsigned short int C7S2 = 26;
    sbit  C7S2_bit at DMA1_CSELR.B26;
    const register unsigned short int C7S3 = 27;
    sbit  C7S3_bit at DMA1_CSELR.B27;
    const register unsigned short int C6S0 = 20;
    sbit  C6S0_bit at DMA1_CSELR.B20;
    const register unsigned short int C6S1 = 21;
    sbit  C6S1_bit at DMA1_CSELR.B21;
    const register unsigned short int C6S2 = 22;
    sbit  C6S2_bit at DMA1_CSELR.B22;
    const register unsigned short int C6S3 = 23;
    sbit  C6S3_bit at DMA1_CSELR.B23;
    const register unsigned short int C5S0 = 16;
    sbit  C5S0_bit at DMA1_CSELR.B16;
    const register unsigned short int C5S1 = 17;
    sbit  C5S1_bit at DMA1_CSELR.B17;
    const register unsigned short int C5S2 = 18;
    sbit  C5S2_bit at DMA1_CSELR.B18;
    const register unsigned short int C5S3 = 19;
    sbit  C5S3_bit at DMA1_CSELR.B19;
    const register unsigned short int C4S0 = 12;
    sbit  C4S0_bit at DMA1_CSELR.B12;
    const register unsigned short int C4S1 = 13;
    sbit  C4S1_bit at DMA1_CSELR.B13;
    const register unsigned short int C4S2 = 14;
    sbit  C4S2_bit at DMA1_CSELR.B14;
    const register unsigned short int C4S3 = 15;
    sbit  C4S3_bit at DMA1_CSELR.B15;
    const register unsigned short int C3S0 = 8;
    sbit  C3S0_bit at DMA1_CSELR.B8;
    const register unsigned short int C3S1 = 9;
    sbit  C3S1_bit at DMA1_CSELR.B9;
    const register unsigned short int C3S2 = 10;
    sbit  C3S2_bit at DMA1_CSELR.B10;
    const register unsigned short int C3S3 = 11;
    sbit  C3S3_bit at DMA1_CSELR.B11;
    const register unsigned short int C2S0 = 4;
    sbit  C2S0_bit at DMA1_CSELR.B4;
    const register unsigned short int C2S1 = 5;
    sbit  C2S1_bit at DMA1_CSELR.B5;
    const register unsigned short int C2S2 = 6;
    sbit  C2S2_bit at DMA1_CSELR.B6;
    const register unsigned short int C2S3 = 7;
    sbit  C2S3_bit at DMA1_CSELR.B7;
    const register unsigned short int C1S0 = 0;
    sbit  C1S0_bit at DMA1_CSELR.B0;
    const register unsigned short int C1S1 = 1;
    sbit  C1S1_bit at DMA1_CSELR.B1;
    const register unsigned short int C1S2 = 2;
    sbit  C1S2_bit at DMA1_CSELR.B2;
    const register unsigned short int C1S3 = 3;
    sbit  C1S3_bit at DMA1_CSELR.B3;

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
    const register unsigned short int Polynomialcoefficients0 = 0;
    sbit  Polynomialcoefficients0_bit at CRC_POL.B0;
    const register unsigned short int Polynomialcoefficients1 = 1;
    sbit  Polynomialcoefficients1_bit at CRC_POL.B1;
    const register unsigned short int Polynomialcoefficients2 = 2;
    sbit  Polynomialcoefficients2_bit at CRC_POL.B2;
    const register unsigned short int Polynomialcoefficients3 = 3;
    sbit  Polynomialcoefficients3_bit at CRC_POL.B3;
    const register unsigned short int Polynomialcoefficients4 = 4;
    sbit  Polynomialcoefficients4_bit at CRC_POL.B4;
    const register unsigned short int Polynomialcoefficients5 = 5;
    sbit  Polynomialcoefficients5_bit at CRC_POL.B5;
    const register unsigned short int Polynomialcoefficients6 = 6;
    sbit  Polynomialcoefficients6_bit at CRC_POL.B6;
    const register unsigned short int Polynomialcoefficients7 = 7;
    sbit  Polynomialcoefficients7_bit at CRC_POL.B7;
    const register unsigned short int Polynomialcoefficients8 = 8;
    sbit  Polynomialcoefficients8_bit at CRC_POL.B8;
    const register unsigned short int Polynomialcoefficients9 = 9;
    sbit  Polynomialcoefficients9_bit at CRC_POL.B9;
    const register unsigned short int Polynomialcoefficients10 = 10;
    sbit  Polynomialcoefficients10_bit at CRC_POL.B10;
    const register unsigned short int Polynomialcoefficients11 = 11;
    sbit  Polynomialcoefficients11_bit at CRC_POL.B11;
    const register unsigned short int Polynomialcoefficients12 = 12;
    sbit  Polynomialcoefficients12_bit at CRC_POL.B12;
    const register unsigned short int Polynomialcoefficients13 = 13;
    sbit  Polynomialcoefficients13_bit at CRC_POL.B13;
    const register unsigned short int Polynomialcoefficients14 = 14;
    sbit  Polynomialcoefficients14_bit at CRC_POL.B14;
    const register unsigned short int Polynomialcoefficients15 = 15;
    sbit  Polynomialcoefficients15_bit at CRC_POL.B15;
    const register unsigned short int Polynomialcoefficients16 = 16;
    sbit  Polynomialcoefficients16_bit at CRC_POL.B16;
    const register unsigned short int Polynomialcoefficients17 = 17;
    sbit  Polynomialcoefficients17_bit at CRC_POL.B17;
    const register unsigned short int Polynomialcoefficients18 = 18;
    sbit  Polynomialcoefficients18_bit at CRC_POL.B18;
    const register unsigned short int Polynomialcoefficients19 = 19;
    sbit  Polynomialcoefficients19_bit at CRC_POL.B19;
    const register unsigned short int Polynomialcoefficients20 = 20;
    sbit  Polynomialcoefficients20_bit at CRC_POL.B20;
    const register unsigned short int Polynomialcoefficients21 = 21;
    sbit  Polynomialcoefficients21_bit at CRC_POL.B21;
    const register unsigned short int Polynomialcoefficients22 = 22;
    sbit  Polynomialcoefficients22_bit at CRC_POL.B22;
    const register unsigned short int Polynomialcoefficients23 = 23;
    sbit  Polynomialcoefficients23_bit at CRC_POL.B23;
    const register unsigned short int Polynomialcoefficients24 = 24;
    sbit  Polynomialcoefficients24_bit at CRC_POL.B24;
    const register unsigned short int Polynomialcoefficients25 = 25;
    sbit  Polynomialcoefficients25_bit at CRC_POL.B25;
    const register unsigned short int Polynomialcoefficients26 = 26;
    sbit  Polynomialcoefficients26_bit at CRC_POL.B26;
    const register unsigned short int Polynomialcoefficients27 = 27;
    sbit  Polynomialcoefficients27_bit at CRC_POL.B27;
    const register unsigned short int Polynomialcoefficients28 = 28;
    sbit  Polynomialcoefficients28_bit at CRC_POL.B28;
    const register unsigned short int Polynomialcoefficients29 = 29;
    sbit  Polynomialcoefficients29_bit at CRC_POL.B29;
    const register unsigned short int Polynomialcoefficients30 = 30;
    sbit  Polynomialcoefficients30_bit at CRC_POL.B30;
    const register unsigned short int Polynomialcoefficients31 = 31;
    sbit  Polynomialcoefficients31_bit at CRC_POL.B31;

sfr far unsigned long   volatile GPIOA_BASE           absolute 0x50000000;
sfr far unsigned long   volatile GPIOA_MODER          absolute 0x50000000;
    const register unsigned short int MODE00 = 0;
    sbit  MODE00_bit at GPIOA_MODER.B0;
    const register unsigned short int MODE01 = 1;
    sbit  MODE01_bit at GPIOA_MODER.B1;
    const register unsigned short int MODE10 = 2;
    sbit  MODE10_bit at GPIOA_MODER.B2;
    const register unsigned short int MODE11 = 3;
    sbit  MODE11_bit at GPIOA_MODER.B3;
    const register unsigned short int MODE20 = 4;
    sbit  MODE20_bit at GPIOA_MODER.B4;
    const register unsigned short int MODE21 = 5;
    sbit  MODE21_bit at GPIOA_MODER.B5;
    const register unsigned short int MODE30 = 6;
    sbit  MODE30_bit at GPIOA_MODER.B6;
    const register unsigned short int MODE31 = 7;
    sbit  MODE31_bit at GPIOA_MODER.B7;
    const register unsigned short int MODE40 = 8;
    sbit  MODE40_bit at GPIOA_MODER.B8;
    const register unsigned short int MODE41 = 9;
    sbit  MODE41_bit at GPIOA_MODER.B9;
    const register unsigned short int MODE50 = 10;
    sbit  MODE50_bit at GPIOA_MODER.B10;
    const register unsigned short int MODE51 = 11;
    sbit  MODE51_bit at GPIOA_MODER.B11;
    const register unsigned short int MODE60 = 12;
    sbit  MODE60_bit at GPIOA_MODER.B12;
    const register unsigned short int MODE61 = 13;
    sbit  MODE61_bit at GPIOA_MODER.B13;
    const register unsigned short int MODE70 = 14;
    sbit  MODE70_bit at GPIOA_MODER.B14;
    const register unsigned short int MODE71 = 15;
    sbit  MODE71_bit at GPIOA_MODER.B15;
    const register unsigned short int MODE80 = 16;
    sbit  MODE80_bit at GPIOA_MODER.B16;
    const register unsigned short int MODE81 = 17;
    sbit  MODE81_bit at GPIOA_MODER.B17;
    const register unsigned short int MODE90 = 18;
    sbit  MODE90_bit at GPIOA_MODER.B18;
    const register unsigned short int MODE91 = 19;
    sbit  MODE91_bit at GPIOA_MODER.B19;
    const register unsigned short int MODE100 = 20;
    sbit  MODE100_bit at GPIOA_MODER.B20;
    const register unsigned short int MODE101 = 21;
    sbit  MODE101_bit at GPIOA_MODER.B21;
    const register unsigned short int MODE110 = 22;
    sbit  MODE110_bit at GPIOA_MODER.B22;
    const register unsigned short int MODE111 = 23;
    sbit  MODE111_bit at GPIOA_MODER.B23;
    const register unsigned short int MODE120 = 24;
    sbit  MODE120_bit at GPIOA_MODER.B24;
    const register unsigned short int MODE121 = 25;
    sbit  MODE121_bit at GPIOA_MODER.B25;
    const register unsigned short int MODE130 = 26;
    sbit  MODE130_bit at GPIOA_MODER.B26;
    const register unsigned short int MODE131 = 27;
    sbit  MODE131_bit at GPIOA_MODER.B27;
    const register unsigned short int MODE140 = 28;
    sbit  MODE140_bit at GPIOA_MODER.B28;
    const register unsigned short int MODE141 = 29;
    sbit  MODE141_bit at GPIOA_MODER.B29;
    const register unsigned short int MODE150 = 30;
    sbit  MODE150_bit at GPIOA_MODER.B30;
    const register unsigned short int MODE151 = 31;
    sbit  MODE151_bit at GPIOA_MODER.B31;

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
    const register unsigned short int OSPEED150 = 30;
    sbit  OSPEED150_bit at GPIOA_OSPEEDR.B30;
    const register unsigned short int OSPEED151 = 31;
    sbit  OSPEED151_bit at GPIOA_OSPEEDR.B31;
    const register unsigned short int OSPEED140 = 28;
    sbit  OSPEED140_bit at GPIOA_OSPEEDR.B28;
    const register unsigned short int OSPEED141 = 29;
    sbit  OSPEED141_bit at GPIOA_OSPEEDR.B29;
    const register unsigned short int OSPEED130 = 26;
    sbit  OSPEED130_bit at GPIOA_OSPEEDR.B26;
    const register unsigned short int OSPEED131 = 27;
    sbit  OSPEED131_bit at GPIOA_OSPEEDR.B27;
    const register unsigned short int OSPEED120 = 24;
    sbit  OSPEED120_bit at GPIOA_OSPEEDR.B24;
    const register unsigned short int OSPEED121 = 25;
    sbit  OSPEED121_bit at GPIOA_OSPEEDR.B25;
    const register unsigned short int OSPEED110 = 22;
    sbit  OSPEED110_bit at GPIOA_OSPEEDR.B22;
    const register unsigned short int OSPEED111 = 23;
    sbit  OSPEED111_bit at GPIOA_OSPEEDR.B23;
    const register unsigned short int OSPEED100 = 20;
    sbit  OSPEED100_bit at GPIOA_OSPEEDR.B20;
    const register unsigned short int OSPEED101 = 21;
    sbit  OSPEED101_bit at GPIOA_OSPEEDR.B21;
    const register unsigned short int OSPEED90 = 18;
    sbit  OSPEED90_bit at GPIOA_OSPEEDR.B18;
    const register unsigned short int OSPEED91 = 19;
    sbit  OSPEED91_bit at GPIOA_OSPEEDR.B19;
    const register unsigned short int OSPEED80 = 16;
    sbit  OSPEED80_bit at GPIOA_OSPEEDR.B16;
    const register unsigned short int OSPEED81 = 17;
    sbit  OSPEED81_bit at GPIOA_OSPEEDR.B17;
    const register unsigned short int OSPEED70 = 14;
    sbit  OSPEED70_bit at GPIOA_OSPEEDR.B14;
    const register unsigned short int OSPEED71 = 15;
    sbit  OSPEED71_bit at GPIOA_OSPEEDR.B15;
    const register unsigned short int OSPEED60 = 12;
    sbit  OSPEED60_bit at GPIOA_OSPEEDR.B12;
    const register unsigned short int OSPEED61 = 13;
    sbit  OSPEED61_bit at GPIOA_OSPEEDR.B13;
    const register unsigned short int OSPEED50 = 10;
    sbit  OSPEED50_bit at GPIOA_OSPEEDR.B10;
    const register unsigned short int OSPEED51 = 11;
    sbit  OSPEED51_bit at GPIOA_OSPEEDR.B11;
    const register unsigned short int OSPEED40 = 8;
    sbit  OSPEED40_bit at GPIOA_OSPEEDR.B8;
    const register unsigned short int OSPEED41 = 9;
    sbit  OSPEED41_bit at GPIOA_OSPEEDR.B9;
    const register unsigned short int OSPEED30 = 6;
    sbit  OSPEED30_bit at GPIOA_OSPEEDR.B6;
    const register unsigned short int OSPEED31 = 7;
    sbit  OSPEED31_bit at GPIOA_OSPEEDR.B7;
    const register unsigned short int OSPEED20 = 4;
    sbit  OSPEED20_bit at GPIOA_OSPEEDR.B4;
    const register unsigned short int OSPEED21 = 5;
    sbit  OSPEED21_bit at GPIOA_OSPEEDR.B5;
    const register unsigned short int OSPEED10 = 2;
    sbit  OSPEED10_bit at GPIOA_OSPEEDR.B2;
    const register unsigned short int OSPEED11 = 3;
    sbit  OSPEED11_bit at GPIOA_OSPEEDR.B3;
    const register unsigned short int OSPEED00 = 0;
    sbit  OSPEED00_bit at GPIOA_OSPEEDR.B0;
    const register unsigned short int OSPEED01 = 1;
    sbit  OSPEED01_bit at GPIOA_OSPEEDR.B1;

sfr far unsigned long   volatile GPIOA_PUPDR          absolute 0x5000000C;
    const register unsigned short int PUPD150 = 30;
    sbit  PUPD150_bit at GPIOA_PUPDR.B30;
    const register unsigned short int PUPD151 = 31;
    sbit  PUPD151_bit at GPIOA_PUPDR.B31;
    const register unsigned short int PUPD140 = 28;
    sbit  PUPD140_bit at GPIOA_PUPDR.B28;
    const register unsigned short int PUPD141 = 29;
    sbit  PUPD141_bit at GPIOA_PUPDR.B29;
    const register unsigned short int PUPD130 = 26;
    sbit  PUPD130_bit at GPIOA_PUPDR.B26;
    const register unsigned short int PUPD131 = 27;
    sbit  PUPD131_bit at GPIOA_PUPDR.B27;
    const register unsigned short int PUPD120 = 24;
    sbit  PUPD120_bit at GPIOA_PUPDR.B24;
    const register unsigned short int PUPD121 = 25;
    sbit  PUPD121_bit at GPIOA_PUPDR.B25;
    const register unsigned short int PUPD110 = 22;
    sbit  PUPD110_bit at GPIOA_PUPDR.B22;
    const register unsigned short int PUPD111 = 23;
    sbit  PUPD111_bit at GPIOA_PUPDR.B23;
    const register unsigned short int PUPD100 = 20;
    sbit  PUPD100_bit at GPIOA_PUPDR.B20;
    const register unsigned short int PUPD101 = 21;
    sbit  PUPD101_bit at GPIOA_PUPDR.B21;
    const register unsigned short int PUPD90 = 18;
    sbit  PUPD90_bit at GPIOA_PUPDR.B18;
    const register unsigned short int PUPD91 = 19;
    sbit  PUPD91_bit at GPIOA_PUPDR.B19;
    const register unsigned short int PUPD80 = 16;
    sbit  PUPD80_bit at GPIOA_PUPDR.B16;
    const register unsigned short int PUPD81 = 17;
    sbit  PUPD81_bit at GPIOA_PUPDR.B17;
    const register unsigned short int PUPD70 = 14;
    sbit  PUPD70_bit at GPIOA_PUPDR.B14;
    const register unsigned short int PUPD71 = 15;
    sbit  PUPD71_bit at GPIOA_PUPDR.B15;
    const register unsigned short int PUPD60 = 12;
    sbit  PUPD60_bit at GPIOA_PUPDR.B12;
    const register unsigned short int PUPD61 = 13;
    sbit  PUPD61_bit at GPIOA_PUPDR.B13;
    const register unsigned short int PUPD50 = 10;
    sbit  PUPD50_bit at GPIOA_PUPDR.B10;
    const register unsigned short int PUPD51 = 11;
    sbit  PUPD51_bit at GPIOA_PUPDR.B11;
    const register unsigned short int PUPD40 = 8;
    sbit  PUPD40_bit at GPIOA_PUPDR.B8;
    const register unsigned short int PUPD41 = 9;
    sbit  PUPD41_bit at GPIOA_PUPDR.B9;
    const register unsigned short int PUPD30 = 6;
    sbit  PUPD30_bit at GPIOA_PUPDR.B6;
    const register unsigned short int PUPD31 = 7;
    sbit  PUPD31_bit at GPIOA_PUPDR.B7;
    const register unsigned short int PUPD20 = 4;
    sbit  PUPD20_bit at GPIOA_PUPDR.B4;
    const register unsigned short int PUPD21 = 5;
    sbit  PUPD21_bit at GPIOA_PUPDR.B5;
    const register unsigned short int PUPD10 = 2;
    sbit  PUPD10_bit at GPIOA_PUPDR.B2;
    const register unsigned short int PUPD11 = 3;
    sbit  PUPD11_bit at GPIOA_PUPDR.B3;
    const register unsigned short int PUPD00 = 0;
    sbit  PUPD00_bit at GPIOA_PUPDR.B0;
    const register unsigned short int PUPD01 = 1;
    sbit  PUPD01_bit at GPIOA_PUPDR.B1;

sfr far unsigned long   volatile GPIOA_IDR            absolute 0x50000010;
    const register unsigned short int ID15 = 15;
    sbit  ID15_bit at GPIOA_IDR.B15;
    const register unsigned short int ID14 = 14;
    sbit  ID14_bit at GPIOA_IDR.B14;
    const register unsigned short int ID13 = 13;
    sbit  ID13_bit at GPIOA_IDR.B13;
    const register unsigned short int ID12 = 12;
    sbit  ID12_bit at GPIOA_IDR.B12;
    const register unsigned short int ID11 = 11;
    sbit  ID11_bit at GPIOA_IDR.B11;
    const register unsigned short int ID10 = 10;
    sbit  ID10_bit at GPIOA_IDR.B10;
    const register unsigned short int ID9 = 9;
    sbit  ID9_bit at GPIOA_IDR.B9;
    const register unsigned short int ID8 = 8;
    sbit  ID8_bit at GPIOA_IDR.B8;
    const register unsigned short int ID7 = 7;
    sbit  ID7_bit at GPIOA_IDR.B7;
    const register unsigned short int ID6 = 6;
    sbit  ID6_bit at GPIOA_IDR.B6;
    const register unsigned short int ID5 = 5;
    sbit  ID5_bit at GPIOA_IDR.B5;
    const register unsigned short int ID4 = 4;
    sbit  ID4_bit at GPIOA_IDR.B4;
    const register unsigned short int ID3 = 3;
    sbit  ID3_bit at GPIOA_IDR.B3;
    const register unsigned short int ID2 = 2;
    sbit  ID2_bit at GPIOA_IDR.B2;
    const register unsigned short int ID1 = 1;
    sbit  ID1_bit at GPIOA_IDR.B1;
    const register unsigned short int ID0 = 0;
    sbit  ID0_bit at GPIOA_IDR.B0;

sfr far unsigned long   volatile GPIOA_ODR            absolute 0x50000014;
    const register unsigned short int OD15 = 15;
    sbit  OD15_bit at GPIOA_ODR.B15;
    const register unsigned short int OD14 = 14;
    sbit  OD14_bit at GPIOA_ODR.B14;
    const register unsigned short int OD13 = 13;
    sbit  OD13_bit at GPIOA_ODR.B13;
    const register unsigned short int OD12 = 12;
    sbit  OD12_bit at GPIOA_ODR.B12;
    const register unsigned short int OD11 = 11;
    sbit  OD11_bit at GPIOA_ODR.B11;
    const register unsigned short int OD10 = 10;
    sbit  OD10_bit at GPIOA_ODR.B10;
    const register unsigned short int OD9 = 9;
    sbit  OD9_bit at GPIOA_ODR.B9;
    const register unsigned short int OD8 = 8;
    sbit  OD8_bit at GPIOA_ODR.B8;
    const register unsigned short int OD7 = 7;
    sbit  OD7_bit at GPIOA_ODR.B7;
    const register unsigned short int OD6 = 6;
    sbit  OD6_bit at GPIOA_ODR.B6;
    const register unsigned short int OD5 = 5;
    sbit  OD5_bit at GPIOA_ODR.B5;
    const register unsigned short int OD4 = 4;
    sbit  OD4_bit at GPIOA_ODR.B4;
    const register unsigned short int OD3 = 3;
    sbit  OD3_bit at GPIOA_ODR.B3;
    const register unsigned short int OD2 = 2;
    sbit  OD2_bit at GPIOA_ODR.B2;
    const register unsigned short int OD1 = 1;
    sbit  OD1_bit at GPIOA_ODR.B1;
    const register unsigned short int OD0 = 0;
    sbit  OD0_bit at GPIOA_ODR.B0;

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
    sbit  BR15_GPIOA_BRR_bit at GPIOA_BRR.B15;
    sbit  BR14_GPIOA_BRR_bit at GPIOA_BRR.B14;
    sbit  BR13_GPIOA_BRR_bit at GPIOA_BRR.B13;
    sbit  BR12_GPIOA_BRR_bit at GPIOA_BRR.B12;
    sbit  BR11_GPIOA_BRR_bit at GPIOA_BRR.B11;
    sbit  BR10_GPIOA_BRR_bit at GPIOA_BRR.B10;
    sbit  BR9_GPIOA_BRR_bit at GPIOA_BRR.B9;
    sbit  BR8_GPIOA_BRR_bit at GPIOA_BRR.B8;
    sbit  BR7_GPIOA_BRR_bit at GPIOA_BRR.B7;
    sbit  BR6_GPIOA_BRR_bit at GPIOA_BRR.B6;
    sbit  BR5_GPIOA_BRR_bit at GPIOA_BRR.B5;
    sbit  BR4_GPIOA_BRR_bit at GPIOA_BRR.B4;
    sbit  BR3_GPIOA_BRR_bit at GPIOA_BRR.B3;
    sbit  BR2_GPIOA_BRR_bit at GPIOA_BRR.B2;
    sbit  BR1_GPIOA_BRR_bit at GPIOA_BRR.B1;
    sbit  BR0_GPIOA_BRR_bit at GPIOA_BRR.B0;

sfr far unsigned long   volatile GPIOB_BASE           absolute 0x50000400;
sfr far unsigned long   volatile GPIOB_MODER          absolute 0x50000400;
    sbit  MODE150_GPIOB_MODER_bit at GPIOB_MODER.B30;
    sbit  MODE151_GPIOB_MODER_bit at GPIOB_MODER.B31;
    sbit  MODE140_GPIOB_MODER_bit at GPIOB_MODER.B28;
    sbit  MODE141_GPIOB_MODER_bit at GPIOB_MODER.B29;
    sbit  MODE130_GPIOB_MODER_bit at GPIOB_MODER.B26;
    sbit  MODE131_GPIOB_MODER_bit at GPIOB_MODER.B27;
    sbit  MODE120_GPIOB_MODER_bit at GPIOB_MODER.B24;
    sbit  MODE121_GPIOB_MODER_bit at GPIOB_MODER.B25;
    sbit  MODE110_GPIOB_MODER_bit at GPIOB_MODER.B22;
    sbit  MODE111_GPIOB_MODER_bit at GPIOB_MODER.B23;
    sbit  MODE100_GPIOB_MODER_bit at GPIOB_MODER.B20;
    sbit  MODE101_GPIOB_MODER_bit at GPIOB_MODER.B21;
    sbit  MODE90_GPIOB_MODER_bit at GPIOB_MODER.B18;
    sbit  MODE91_GPIOB_MODER_bit at GPIOB_MODER.B19;
    sbit  MODE80_GPIOB_MODER_bit at GPIOB_MODER.B16;
    sbit  MODE81_GPIOB_MODER_bit at GPIOB_MODER.B17;
    sbit  MODE70_GPIOB_MODER_bit at GPIOB_MODER.B14;
    sbit  MODE71_GPIOB_MODER_bit at GPIOB_MODER.B15;
    sbit  MODE60_GPIOB_MODER_bit at GPIOB_MODER.B12;
    sbit  MODE61_GPIOB_MODER_bit at GPIOB_MODER.B13;
    sbit  MODE50_GPIOB_MODER_bit at GPIOB_MODER.B10;
    sbit  MODE51_GPIOB_MODER_bit at GPIOB_MODER.B11;
    sbit  MODE40_GPIOB_MODER_bit at GPIOB_MODER.B8;
    sbit  MODE41_GPIOB_MODER_bit at GPIOB_MODER.B9;
    sbit  MODE30_GPIOB_MODER_bit at GPIOB_MODER.B6;
    sbit  MODE31_GPIOB_MODER_bit at GPIOB_MODER.B7;
    sbit  MODE20_GPIOB_MODER_bit at GPIOB_MODER.B4;
    sbit  MODE21_GPIOB_MODER_bit at GPIOB_MODER.B5;
    sbit  MODE10_GPIOB_MODER_bit at GPIOB_MODER.B2;
    sbit  MODE11_GPIOB_MODER_bit at GPIOB_MODER.B3;
    sbit  MODE00_GPIOB_MODER_bit at GPIOB_MODER.B0;
    sbit  MODE01_GPIOB_MODER_bit at GPIOB_MODER.B1;

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
    sbit  OSPEED150_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B30;
    sbit  OSPEED151_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B31;
    sbit  OSPEED140_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B28;
    sbit  OSPEED141_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B29;
    sbit  OSPEED130_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B26;
    sbit  OSPEED131_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B27;
    sbit  OSPEED120_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B24;
    sbit  OSPEED121_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B25;
    sbit  OSPEED110_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B22;
    sbit  OSPEED111_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B23;
    sbit  OSPEED100_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B20;
    sbit  OSPEED101_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B21;
    sbit  OSPEED90_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B18;
    sbit  OSPEED91_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B19;
    sbit  OSPEED80_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B16;
    sbit  OSPEED81_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B17;
    sbit  OSPEED70_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B14;
    sbit  OSPEED71_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B15;
    sbit  OSPEED60_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B12;
    sbit  OSPEED61_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B13;
    sbit  OSPEED50_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B10;
    sbit  OSPEED51_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B11;
    sbit  OSPEED40_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B8;
    sbit  OSPEED41_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B9;
    sbit  OSPEED30_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B6;
    sbit  OSPEED31_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B7;
    sbit  OSPEED20_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B4;
    sbit  OSPEED21_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B5;
    sbit  OSPEED10_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B2;
    sbit  OSPEED11_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B3;
    sbit  OSPEED00_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B0;
    sbit  OSPEED01_GPIOB_OSPEEDR_bit at GPIOB_OSPEEDR.B1;

sfr far unsigned long   volatile GPIOB_PUPDR          absolute 0x5000040C;
    sbit  PUPD150_GPIOB_PUPDR_bit at GPIOB_PUPDR.B30;
    sbit  PUPD151_GPIOB_PUPDR_bit at GPIOB_PUPDR.B31;
    sbit  PUPD140_GPIOB_PUPDR_bit at GPIOB_PUPDR.B28;
    sbit  PUPD141_GPIOB_PUPDR_bit at GPIOB_PUPDR.B29;
    sbit  PUPD130_GPIOB_PUPDR_bit at GPIOB_PUPDR.B26;
    sbit  PUPD131_GPIOB_PUPDR_bit at GPIOB_PUPDR.B27;
    sbit  PUPD120_GPIOB_PUPDR_bit at GPIOB_PUPDR.B24;
    sbit  PUPD121_GPIOB_PUPDR_bit at GPIOB_PUPDR.B25;
    sbit  PUPD110_GPIOB_PUPDR_bit at GPIOB_PUPDR.B22;
    sbit  PUPD111_GPIOB_PUPDR_bit at GPIOB_PUPDR.B23;
    sbit  PUPD100_GPIOB_PUPDR_bit at GPIOB_PUPDR.B20;
    sbit  PUPD101_GPIOB_PUPDR_bit at GPIOB_PUPDR.B21;
    sbit  PUPD90_GPIOB_PUPDR_bit at GPIOB_PUPDR.B18;
    sbit  PUPD91_GPIOB_PUPDR_bit at GPIOB_PUPDR.B19;
    sbit  PUPD80_GPIOB_PUPDR_bit at GPIOB_PUPDR.B16;
    sbit  PUPD81_GPIOB_PUPDR_bit at GPIOB_PUPDR.B17;
    sbit  PUPD70_GPIOB_PUPDR_bit at GPIOB_PUPDR.B14;
    sbit  PUPD71_GPIOB_PUPDR_bit at GPIOB_PUPDR.B15;
    sbit  PUPD60_GPIOB_PUPDR_bit at GPIOB_PUPDR.B12;
    sbit  PUPD61_GPIOB_PUPDR_bit at GPIOB_PUPDR.B13;
    sbit  PUPD50_GPIOB_PUPDR_bit at GPIOB_PUPDR.B10;
    sbit  PUPD51_GPIOB_PUPDR_bit at GPIOB_PUPDR.B11;
    sbit  PUPD40_GPIOB_PUPDR_bit at GPIOB_PUPDR.B8;
    sbit  PUPD41_GPIOB_PUPDR_bit at GPIOB_PUPDR.B9;
    sbit  PUPD30_GPIOB_PUPDR_bit at GPIOB_PUPDR.B6;
    sbit  PUPD31_GPIOB_PUPDR_bit at GPIOB_PUPDR.B7;
    sbit  PUPD20_GPIOB_PUPDR_bit at GPIOB_PUPDR.B4;
    sbit  PUPD21_GPIOB_PUPDR_bit at GPIOB_PUPDR.B5;
    sbit  PUPD10_GPIOB_PUPDR_bit at GPIOB_PUPDR.B2;
    sbit  PUPD11_GPIOB_PUPDR_bit at GPIOB_PUPDR.B3;
    sbit  PUPD00_GPIOB_PUPDR_bit at GPIOB_PUPDR.B0;
    sbit  PUPD01_GPIOB_PUPDR_bit at GPIOB_PUPDR.B1;

sfr far unsigned long   volatile GPIOB_IDR            absolute 0x50000410;
    sbit  ID15_GPIOB_IDR_bit at GPIOB_IDR.B15;
    sbit  ID14_GPIOB_IDR_bit at GPIOB_IDR.B14;
    sbit  ID13_GPIOB_IDR_bit at GPIOB_IDR.B13;
    sbit  ID12_GPIOB_IDR_bit at GPIOB_IDR.B12;
    sbit  ID11_GPIOB_IDR_bit at GPIOB_IDR.B11;
    sbit  ID10_GPIOB_IDR_bit at GPIOB_IDR.B10;
    sbit  ID9_GPIOB_IDR_bit at GPIOB_IDR.B9;
    sbit  ID8_GPIOB_IDR_bit at GPIOB_IDR.B8;
    sbit  ID7_GPIOB_IDR_bit at GPIOB_IDR.B7;
    sbit  ID6_GPIOB_IDR_bit at GPIOB_IDR.B6;
    sbit  ID5_GPIOB_IDR_bit at GPIOB_IDR.B5;
    sbit  ID4_GPIOB_IDR_bit at GPIOB_IDR.B4;
    sbit  ID3_GPIOB_IDR_bit at GPIOB_IDR.B3;
    sbit  ID2_GPIOB_IDR_bit at GPIOB_IDR.B2;
    sbit  ID1_GPIOB_IDR_bit at GPIOB_IDR.B1;
    sbit  ID0_GPIOB_IDR_bit at GPIOB_IDR.B0;

sfr far unsigned long   volatile GPIOB_ODR            absolute 0x50000414;
    sbit  OD15_GPIOB_ODR_bit at GPIOB_ODR.B15;
    sbit  OD14_GPIOB_ODR_bit at GPIOB_ODR.B14;
    sbit  OD13_GPIOB_ODR_bit at GPIOB_ODR.B13;
    sbit  OD12_GPIOB_ODR_bit at GPIOB_ODR.B12;
    sbit  OD11_GPIOB_ODR_bit at GPIOB_ODR.B11;
    sbit  OD10_GPIOB_ODR_bit at GPIOB_ODR.B10;
    sbit  OD9_GPIOB_ODR_bit at GPIOB_ODR.B9;
    sbit  OD8_GPIOB_ODR_bit at GPIOB_ODR.B8;
    sbit  OD7_GPIOB_ODR_bit at GPIOB_ODR.B7;
    sbit  OD6_GPIOB_ODR_bit at GPIOB_ODR.B6;
    sbit  OD5_GPIOB_ODR_bit at GPIOB_ODR.B5;
    sbit  OD4_GPIOB_ODR_bit at GPIOB_ODR.B4;
    sbit  OD3_GPIOB_ODR_bit at GPIOB_ODR.B3;
    sbit  OD2_GPIOB_ODR_bit at GPIOB_ODR.B2;
    sbit  OD1_GPIOB_ODR_bit at GPIOB_ODR.B1;
    sbit  OD0_GPIOB_ODR_bit at GPIOB_ODR.B0;

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
    sbit  BR15_GPIOB_BRR_bit at GPIOB_BRR.B15;
    sbit  BR14_GPIOB_BRR_bit at GPIOB_BRR.B14;
    sbit  BR13_GPIOB_BRR_bit at GPIOB_BRR.B13;
    sbit  BR12_GPIOB_BRR_bit at GPIOB_BRR.B12;
    sbit  BR11_GPIOB_BRR_bit at GPIOB_BRR.B11;
    sbit  BR10_GPIOB_BRR_bit at GPIOB_BRR.B10;
    sbit  BR9_GPIOB_BRR_bit at GPIOB_BRR.B9;
    sbit  BR8_GPIOB_BRR_bit at GPIOB_BRR.B8;
    sbit  BR7_GPIOB_BRR_bit at GPIOB_BRR.B7;
    sbit  BR6_GPIOB_BRR_bit at GPIOB_BRR.B6;
    sbit  BR5_GPIOB_BRR_bit at GPIOB_BRR.B5;
    sbit  BR4_GPIOB_BRR_bit at GPIOB_BRR.B4;
    sbit  BR3_GPIOB_BRR_bit at GPIOB_BRR.B3;
    sbit  BR2_GPIOB_BRR_bit at GPIOB_BRR.B2;
    sbit  BR1_GPIOB_BRR_bit at GPIOB_BRR.B1;
    sbit  BR0_GPIOB_BRR_bit at GPIOB_BRR.B0;

sfr far unsigned long   volatile GPIOC_BASE           absolute 0x50000800;
sfr far unsigned long   volatile GPIOC_MODER          absolute 0x50000800;
    sbit  MODE150_GPIOC_MODER_bit at GPIOC_MODER.B30;
    sbit  MODE151_GPIOC_MODER_bit at GPIOC_MODER.B31;
    sbit  MODE140_GPIOC_MODER_bit at GPIOC_MODER.B28;
    sbit  MODE141_GPIOC_MODER_bit at GPIOC_MODER.B29;
    sbit  MODE130_GPIOC_MODER_bit at GPIOC_MODER.B26;
    sbit  MODE131_GPIOC_MODER_bit at GPIOC_MODER.B27;
    sbit  MODE120_GPIOC_MODER_bit at GPIOC_MODER.B24;
    sbit  MODE121_GPIOC_MODER_bit at GPIOC_MODER.B25;
    sbit  MODE110_GPIOC_MODER_bit at GPIOC_MODER.B22;
    sbit  MODE111_GPIOC_MODER_bit at GPIOC_MODER.B23;
    sbit  MODE100_GPIOC_MODER_bit at GPIOC_MODER.B20;
    sbit  MODE101_GPIOC_MODER_bit at GPIOC_MODER.B21;
    sbit  MODE90_GPIOC_MODER_bit at GPIOC_MODER.B18;
    sbit  MODE91_GPIOC_MODER_bit at GPIOC_MODER.B19;
    sbit  MODE80_GPIOC_MODER_bit at GPIOC_MODER.B16;
    sbit  MODE81_GPIOC_MODER_bit at GPIOC_MODER.B17;
    sbit  MODE70_GPIOC_MODER_bit at GPIOC_MODER.B14;
    sbit  MODE71_GPIOC_MODER_bit at GPIOC_MODER.B15;
    sbit  MODE60_GPIOC_MODER_bit at GPIOC_MODER.B12;
    sbit  MODE61_GPIOC_MODER_bit at GPIOC_MODER.B13;
    sbit  MODE50_GPIOC_MODER_bit at GPIOC_MODER.B10;
    sbit  MODE51_GPIOC_MODER_bit at GPIOC_MODER.B11;
    sbit  MODE40_GPIOC_MODER_bit at GPIOC_MODER.B8;
    sbit  MODE41_GPIOC_MODER_bit at GPIOC_MODER.B9;
    sbit  MODE30_GPIOC_MODER_bit at GPIOC_MODER.B6;
    sbit  MODE31_GPIOC_MODER_bit at GPIOC_MODER.B7;
    sbit  MODE20_GPIOC_MODER_bit at GPIOC_MODER.B4;
    sbit  MODE21_GPIOC_MODER_bit at GPIOC_MODER.B5;
    sbit  MODE10_GPIOC_MODER_bit at GPIOC_MODER.B2;
    sbit  MODE11_GPIOC_MODER_bit at GPIOC_MODER.B3;
    sbit  MODE00_GPIOC_MODER_bit at GPIOC_MODER.B0;
    sbit  MODE01_GPIOC_MODER_bit at GPIOC_MODER.B1;

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
    sbit  OSPEED150_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B30;
    sbit  OSPEED151_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B31;
    sbit  OSPEED140_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B28;
    sbit  OSPEED141_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B29;
    sbit  OSPEED130_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B26;
    sbit  OSPEED131_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B27;
    sbit  OSPEED120_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B24;
    sbit  OSPEED121_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B25;
    sbit  OSPEED110_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B22;
    sbit  OSPEED111_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B23;
    sbit  OSPEED100_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B20;
    sbit  OSPEED101_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B21;
    sbit  OSPEED90_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B18;
    sbit  OSPEED91_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B19;
    sbit  OSPEED80_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B16;
    sbit  OSPEED81_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B17;
    sbit  OSPEED70_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B14;
    sbit  OSPEED71_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B15;
    sbit  OSPEED60_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B12;
    sbit  OSPEED61_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B13;
    sbit  OSPEED50_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B10;
    sbit  OSPEED51_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B11;
    sbit  OSPEED40_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B8;
    sbit  OSPEED41_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B9;
    sbit  OSPEED30_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B6;
    sbit  OSPEED31_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B7;
    sbit  OSPEED20_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B4;
    sbit  OSPEED21_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B5;
    sbit  OSPEED10_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B2;
    sbit  OSPEED11_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B3;
    sbit  OSPEED00_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B0;
    sbit  OSPEED01_GPIOC_OSPEEDR_bit at GPIOC_OSPEEDR.B1;

sfr far unsigned long   volatile GPIOC_PUPDR          absolute 0x5000080C;
    sbit  PUPD150_GPIOC_PUPDR_bit at GPIOC_PUPDR.B30;
    sbit  PUPD151_GPIOC_PUPDR_bit at GPIOC_PUPDR.B31;
    sbit  PUPD140_GPIOC_PUPDR_bit at GPIOC_PUPDR.B28;
    sbit  PUPD141_GPIOC_PUPDR_bit at GPIOC_PUPDR.B29;
    sbit  PUPD130_GPIOC_PUPDR_bit at GPIOC_PUPDR.B26;
    sbit  PUPD131_GPIOC_PUPDR_bit at GPIOC_PUPDR.B27;
    sbit  PUPD120_GPIOC_PUPDR_bit at GPIOC_PUPDR.B24;
    sbit  PUPD121_GPIOC_PUPDR_bit at GPIOC_PUPDR.B25;
    sbit  PUPD110_GPIOC_PUPDR_bit at GPIOC_PUPDR.B22;
    sbit  PUPD111_GPIOC_PUPDR_bit at GPIOC_PUPDR.B23;
    sbit  PUPD100_GPIOC_PUPDR_bit at GPIOC_PUPDR.B20;
    sbit  PUPD101_GPIOC_PUPDR_bit at GPIOC_PUPDR.B21;
    sbit  PUPD90_GPIOC_PUPDR_bit at GPIOC_PUPDR.B18;
    sbit  PUPD91_GPIOC_PUPDR_bit at GPIOC_PUPDR.B19;
    sbit  PUPD80_GPIOC_PUPDR_bit at GPIOC_PUPDR.B16;
    sbit  PUPD81_GPIOC_PUPDR_bit at GPIOC_PUPDR.B17;
    sbit  PUPD70_GPIOC_PUPDR_bit at GPIOC_PUPDR.B14;
    sbit  PUPD71_GPIOC_PUPDR_bit at GPIOC_PUPDR.B15;
    sbit  PUPD60_GPIOC_PUPDR_bit at GPIOC_PUPDR.B12;
    sbit  PUPD61_GPIOC_PUPDR_bit at GPIOC_PUPDR.B13;
    sbit  PUPD50_GPIOC_PUPDR_bit at GPIOC_PUPDR.B10;
    sbit  PUPD51_GPIOC_PUPDR_bit at GPIOC_PUPDR.B11;
    sbit  PUPD40_GPIOC_PUPDR_bit at GPIOC_PUPDR.B8;
    sbit  PUPD41_GPIOC_PUPDR_bit at GPIOC_PUPDR.B9;
    sbit  PUPD30_GPIOC_PUPDR_bit at GPIOC_PUPDR.B6;
    sbit  PUPD31_GPIOC_PUPDR_bit at GPIOC_PUPDR.B7;
    sbit  PUPD20_GPIOC_PUPDR_bit at GPIOC_PUPDR.B4;
    sbit  PUPD21_GPIOC_PUPDR_bit at GPIOC_PUPDR.B5;
    sbit  PUPD10_GPIOC_PUPDR_bit at GPIOC_PUPDR.B2;
    sbit  PUPD11_GPIOC_PUPDR_bit at GPIOC_PUPDR.B3;
    sbit  PUPD00_GPIOC_PUPDR_bit at GPIOC_PUPDR.B0;
    sbit  PUPD01_GPIOC_PUPDR_bit at GPIOC_PUPDR.B1;

sfr far unsigned long   volatile GPIOC_IDR            absolute 0x50000810;
    sbit  ID15_GPIOC_IDR_bit at GPIOC_IDR.B15;
    sbit  ID14_GPIOC_IDR_bit at GPIOC_IDR.B14;
    sbit  ID13_GPIOC_IDR_bit at GPIOC_IDR.B13;
    sbit  ID12_GPIOC_IDR_bit at GPIOC_IDR.B12;
    sbit  ID11_GPIOC_IDR_bit at GPIOC_IDR.B11;
    sbit  ID10_GPIOC_IDR_bit at GPIOC_IDR.B10;
    sbit  ID9_GPIOC_IDR_bit at GPIOC_IDR.B9;
    sbit  ID8_GPIOC_IDR_bit at GPIOC_IDR.B8;
    sbit  ID7_GPIOC_IDR_bit at GPIOC_IDR.B7;
    sbit  ID6_GPIOC_IDR_bit at GPIOC_IDR.B6;
    sbit  ID5_GPIOC_IDR_bit at GPIOC_IDR.B5;
    sbit  ID4_GPIOC_IDR_bit at GPIOC_IDR.B4;
    sbit  ID3_GPIOC_IDR_bit at GPIOC_IDR.B3;
    sbit  ID2_GPIOC_IDR_bit at GPIOC_IDR.B2;
    sbit  ID1_GPIOC_IDR_bit at GPIOC_IDR.B1;
    sbit  ID0_GPIOC_IDR_bit at GPIOC_IDR.B0;

sfr far unsigned long   volatile GPIOC_ODR            absolute 0x50000814;
    sbit  OD15_GPIOC_ODR_bit at GPIOC_ODR.B15;
    sbit  OD14_GPIOC_ODR_bit at GPIOC_ODR.B14;
    sbit  OD13_GPIOC_ODR_bit at GPIOC_ODR.B13;
    sbit  OD12_GPIOC_ODR_bit at GPIOC_ODR.B12;
    sbit  OD11_GPIOC_ODR_bit at GPIOC_ODR.B11;
    sbit  OD10_GPIOC_ODR_bit at GPIOC_ODR.B10;
    sbit  OD9_GPIOC_ODR_bit at GPIOC_ODR.B9;
    sbit  OD8_GPIOC_ODR_bit at GPIOC_ODR.B8;
    sbit  OD7_GPIOC_ODR_bit at GPIOC_ODR.B7;
    sbit  OD6_GPIOC_ODR_bit at GPIOC_ODR.B6;
    sbit  OD5_GPIOC_ODR_bit at GPIOC_ODR.B5;
    sbit  OD4_GPIOC_ODR_bit at GPIOC_ODR.B4;
    sbit  OD3_GPIOC_ODR_bit at GPIOC_ODR.B3;
    sbit  OD2_GPIOC_ODR_bit at GPIOC_ODR.B2;
    sbit  OD1_GPIOC_ODR_bit at GPIOC_ODR.B1;
    sbit  OD0_GPIOC_ODR_bit at GPIOC_ODR.B0;

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
    sbit  BR15_GPIOC_BRR_bit at GPIOC_BRR.B15;
    sbit  BR14_GPIOC_BRR_bit at GPIOC_BRR.B14;
    sbit  BR13_GPIOC_BRR_bit at GPIOC_BRR.B13;
    sbit  BR12_GPIOC_BRR_bit at GPIOC_BRR.B12;
    sbit  BR11_GPIOC_BRR_bit at GPIOC_BRR.B11;
    sbit  BR10_GPIOC_BRR_bit at GPIOC_BRR.B10;
    sbit  BR9_GPIOC_BRR_bit at GPIOC_BRR.B9;
    sbit  BR8_GPIOC_BRR_bit at GPIOC_BRR.B8;
    sbit  BR7_GPIOC_BRR_bit at GPIOC_BRR.B7;
    sbit  BR6_GPIOC_BRR_bit at GPIOC_BRR.B6;
    sbit  BR5_GPIOC_BRR_bit at GPIOC_BRR.B5;
    sbit  BR4_GPIOC_BRR_bit at GPIOC_BRR.B4;
    sbit  BR3_GPIOC_BRR_bit at GPIOC_BRR.B3;
    sbit  BR2_GPIOC_BRR_bit at GPIOC_BRR.B2;
    sbit  BR1_GPIOC_BRR_bit at GPIOC_BRR.B1;
    sbit  BR0_GPIOC_BRR_bit at GPIOC_BRR.B0;

sfr far unsigned long   volatile GPIOD_BASE           absolute 0x50000C00;
sfr far unsigned long   volatile GPIOD_MODER          absolute 0x50000C00;
    sbit  MODE150_GPIOD_MODER_bit at GPIOD_MODER.B30;
    sbit  MODE151_GPIOD_MODER_bit at GPIOD_MODER.B31;
    sbit  MODE140_GPIOD_MODER_bit at GPIOD_MODER.B28;
    sbit  MODE141_GPIOD_MODER_bit at GPIOD_MODER.B29;
    sbit  MODE130_GPIOD_MODER_bit at GPIOD_MODER.B26;
    sbit  MODE131_GPIOD_MODER_bit at GPIOD_MODER.B27;
    sbit  MODE120_GPIOD_MODER_bit at GPIOD_MODER.B24;
    sbit  MODE121_GPIOD_MODER_bit at GPIOD_MODER.B25;
    sbit  MODE110_GPIOD_MODER_bit at GPIOD_MODER.B22;
    sbit  MODE111_GPIOD_MODER_bit at GPIOD_MODER.B23;
    sbit  MODE100_GPIOD_MODER_bit at GPIOD_MODER.B20;
    sbit  MODE101_GPIOD_MODER_bit at GPIOD_MODER.B21;
    sbit  MODE90_GPIOD_MODER_bit at GPIOD_MODER.B18;
    sbit  MODE91_GPIOD_MODER_bit at GPIOD_MODER.B19;
    sbit  MODE80_GPIOD_MODER_bit at GPIOD_MODER.B16;
    sbit  MODE81_GPIOD_MODER_bit at GPIOD_MODER.B17;
    sbit  MODE70_GPIOD_MODER_bit at GPIOD_MODER.B14;
    sbit  MODE71_GPIOD_MODER_bit at GPIOD_MODER.B15;
    sbit  MODE60_GPIOD_MODER_bit at GPIOD_MODER.B12;
    sbit  MODE61_GPIOD_MODER_bit at GPIOD_MODER.B13;
    sbit  MODE50_GPIOD_MODER_bit at GPIOD_MODER.B10;
    sbit  MODE51_GPIOD_MODER_bit at GPIOD_MODER.B11;
    sbit  MODE40_GPIOD_MODER_bit at GPIOD_MODER.B8;
    sbit  MODE41_GPIOD_MODER_bit at GPIOD_MODER.B9;
    sbit  MODE30_GPIOD_MODER_bit at GPIOD_MODER.B6;
    sbit  MODE31_GPIOD_MODER_bit at GPIOD_MODER.B7;
    sbit  MODE20_GPIOD_MODER_bit at GPIOD_MODER.B4;
    sbit  MODE21_GPIOD_MODER_bit at GPIOD_MODER.B5;
    sbit  MODE10_GPIOD_MODER_bit at GPIOD_MODER.B2;
    sbit  MODE11_GPIOD_MODER_bit at GPIOD_MODER.B3;
    sbit  MODE00_GPIOD_MODER_bit at GPIOD_MODER.B0;
    sbit  MODE01_GPIOD_MODER_bit at GPIOD_MODER.B1;

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
    sbit  OSPEED150_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B30;
    sbit  OSPEED151_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B31;
    sbit  OSPEED140_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B28;
    sbit  OSPEED141_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B29;
    sbit  OSPEED130_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B26;
    sbit  OSPEED131_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B27;
    sbit  OSPEED120_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B24;
    sbit  OSPEED121_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B25;
    sbit  OSPEED110_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B22;
    sbit  OSPEED111_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B23;
    sbit  OSPEED100_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B20;
    sbit  OSPEED101_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B21;
    sbit  OSPEED90_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B18;
    sbit  OSPEED91_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B19;
    sbit  OSPEED80_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B16;
    sbit  OSPEED81_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B17;
    sbit  OSPEED70_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B14;
    sbit  OSPEED71_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B15;
    sbit  OSPEED60_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B12;
    sbit  OSPEED61_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B13;
    sbit  OSPEED50_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B10;
    sbit  OSPEED51_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B11;
    sbit  OSPEED40_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B8;
    sbit  OSPEED41_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B9;
    sbit  OSPEED30_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B6;
    sbit  OSPEED31_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B7;
    sbit  OSPEED20_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B4;
    sbit  OSPEED21_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B5;
    sbit  OSPEED10_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B2;
    sbit  OSPEED11_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B3;
    sbit  OSPEED00_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B0;
    sbit  OSPEED01_GPIOD_OSPEEDR_bit at GPIOD_OSPEEDR.B1;

sfr far unsigned long   volatile GPIOD_PUPDR          absolute 0x50000C0C;
    sbit  PUPD150_GPIOD_PUPDR_bit at GPIOD_PUPDR.B30;
    sbit  PUPD151_GPIOD_PUPDR_bit at GPIOD_PUPDR.B31;
    sbit  PUPD140_GPIOD_PUPDR_bit at GPIOD_PUPDR.B28;
    sbit  PUPD141_GPIOD_PUPDR_bit at GPIOD_PUPDR.B29;
    sbit  PUPD130_GPIOD_PUPDR_bit at GPIOD_PUPDR.B26;
    sbit  PUPD131_GPIOD_PUPDR_bit at GPIOD_PUPDR.B27;
    sbit  PUPD120_GPIOD_PUPDR_bit at GPIOD_PUPDR.B24;
    sbit  PUPD121_GPIOD_PUPDR_bit at GPIOD_PUPDR.B25;
    sbit  PUPD110_GPIOD_PUPDR_bit at GPIOD_PUPDR.B22;
    sbit  PUPD111_GPIOD_PUPDR_bit at GPIOD_PUPDR.B23;
    sbit  PUPD100_GPIOD_PUPDR_bit at GPIOD_PUPDR.B20;
    sbit  PUPD101_GPIOD_PUPDR_bit at GPIOD_PUPDR.B21;
    sbit  PUPD90_GPIOD_PUPDR_bit at GPIOD_PUPDR.B18;
    sbit  PUPD91_GPIOD_PUPDR_bit at GPIOD_PUPDR.B19;
    sbit  PUPD80_GPIOD_PUPDR_bit at GPIOD_PUPDR.B16;
    sbit  PUPD81_GPIOD_PUPDR_bit at GPIOD_PUPDR.B17;
    sbit  PUPD70_GPIOD_PUPDR_bit at GPIOD_PUPDR.B14;
    sbit  PUPD71_GPIOD_PUPDR_bit at GPIOD_PUPDR.B15;
    sbit  PUPD60_GPIOD_PUPDR_bit at GPIOD_PUPDR.B12;
    sbit  PUPD61_GPIOD_PUPDR_bit at GPIOD_PUPDR.B13;
    sbit  PUPD50_GPIOD_PUPDR_bit at GPIOD_PUPDR.B10;
    sbit  PUPD51_GPIOD_PUPDR_bit at GPIOD_PUPDR.B11;
    sbit  PUPD40_GPIOD_PUPDR_bit at GPIOD_PUPDR.B8;
    sbit  PUPD41_GPIOD_PUPDR_bit at GPIOD_PUPDR.B9;
    sbit  PUPD30_GPIOD_PUPDR_bit at GPIOD_PUPDR.B6;
    sbit  PUPD31_GPIOD_PUPDR_bit at GPIOD_PUPDR.B7;
    sbit  PUPD20_GPIOD_PUPDR_bit at GPIOD_PUPDR.B4;
    sbit  PUPD21_GPIOD_PUPDR_bit at GPIOD_PUPDR.B5;
    sbit  PUPD10_GPIOD_PUPDR_bit at GPIOD_PUPDR.B2;
    sbit  PUPD11_GPIOD_PUPDR_bit at GPIOD_PUPDR.B3;
    sbit  PUPD00_GPIOD_PUPDR_bit at GPIOD_PUPDR.B0;
    sbit  PUPD01_GPIOD_PUPDR_bit at GPIOD_PUPDR.B1;

sfr far unsigned long   volatile GPIOD_IDR            absolute 0x50000C10;
    sbit  ID15_GPIOD_IDR_bit at GPIOD_IDR.B15;
    sbit  ID14_GPIOD_IDR_bit at GPIOD_IDR.B14;
    sbit  ID13_GPIOD_IDR_bit at GPIOD_IDR.B13;
    sbit  ID12_GPIOD_IDR_bit at GPIOD_IDR.B12;
    sbit  ID11_GPIOD_IDR_bit at GPIOD_IDR.B11;
    sbit  ID10_GPIOD_IDR_bit at GPIOD_IDR.B10;
    sbit  ID9_GPIOD_IDR_bit at GPIOD_IDR.B9;
    sbit  ID8_GPIOD_IDR_bit at GPIOD_IDR.B8;
    sbit  ID7_GPIOD_IDR_bit at GPIOD_IDR.B7;
    sbit  ID6_GPIOD_IDR_bit at GPIOD_IDR.B6;
    sbit  ID5_GPIOD_IDR_bit at GPIOD_IDR.B5;
    sbit  ID4_GPIOD_IDR_bit at GPIOD_IDR.B4;
    sbit  ID3_GPIOD_IDR_bit at GPIOD_IDR.B3;
    sbit  ID2_GPIOD_IDR_bit at GPIOD_IDR.B2;
    sbit  ID1_GPIOD_IDR_bit at GPIOD_IDR.B1;
    sbit  ID0_GPIOD_IDR_bit at GPIOD_IDR.B0;

sfr far unsigned long   volatile GPIOD_ODR            absolute 0x50000C14;
    sbit  OD15_GPIOD_ODR_bit at GPIOD_ODR.B15;
    sbit  OD14_GPIOD_ODR_bit at GPIOD_ODR.B14;
    sbit  OD13_GPIOD_ODR_bit at GPIOD_ODR.B13;
    sbit  OD12_GPIOD_ODR_bit at GPIOD_ODR.B12;
    sbit  OD11_GPIOD_ODR_bit at GPIOD_ODR.B11;
    sbit  OD10_GPIOD_ODR_bit at GPIOD_ODR.B10;
    sbit  OD9_GPIOD_ODR_bit at GPIOD_ODR.B9;
    sbit  OD8_GPIOD_ODR_bit at GPIOD_ODR.B8;
    sbit  OD7_GPIOD_ODR_bit at GPIOD_ODR.B7;
    sbit  OD6_GPIOD_ODR_bit at GPIOD_ODR.B6;
    sbit  OD5_GPIOD_ODR_bit at GPIOD_ODR.B5;
    sbit  OD4_GPIOD_ODR_bit at GPIOD_ODR.B4;
    sbit  OD3_GPIOD_ODR_bit at GPIOD_ODR.B3;
    sbit  OD2_GPIOD_ODR_bit at GPIOD_ODR.B2;
    sbit  OD1_GPIOD_ODR_bit at GPIOD_ODR.B1;
    sbit  OD0_GPIOD_ODR_bit at GPIOD_ODR.B0;

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
    sbit  BR15_GPIOD_BRR_bit at GPIOD_BRR.B15;
    sbit  BR14_GPIOD_BRR_bit at GPIOD_BRR.B14;
    sbit  BR13_GPIOD_BRR_bit at GPIOD_BRR.B13;
    sbit  BR12_GPIOD_BRR_bit at GPIOD_BRR.B12;
    sbit  BR11_GPIOD_BRR_bit at GPIOD_BRR.B11;
    sbit  BR10_GPIOD_BRR_bit at GPIOD_BRR.B10;
    sbit  BR9_GPIOD_BRR_bit at GPIOD_BRR.B9;
    sbit  BR8_GPIOD_BRR_bit at GPIOD_BRR.B8;
    sbit  BR7_GPIOD_BRR_bit at GPIOD_BRR.B7;
    sbit  BR6_GPIOD_BRR_bit at GPIOD_BRR.B6;
    sbit  BR5_GPIOD_BRR_bit at GPIOD_BRR.B5;
    sbit  BR4_GPIOD_BRR_bit at GPIOD_BRR.B4;
    sbit  BR3_GPIOD_BRR_bit at GPIOD_BRR.B3;
    sbit  BR2_GPIOD_BRR_bit at GPIOD_BRR.B2;
    sbit  BR1_GPIOD_BRR_bit at GPIOD_BRR.B1;
    sbit  BR0_GPIOD_BRR_bit at GPIOD_BRR.B0;

sfr far unsigned long   volatile GPIOH_BASE           absolute 0x50001C00;
sfr far unsigned long   volatile GPIOH_MODER          absolute 0x50001C00;
    sbit  MODE150_GPIOH_MODER_bit at GPIOH_MODER.B30;
    sbit  MODE151_GPIOH_MODER_bit at GPIOH_MODER.B31;
    sbit  MODE140_GPIOH_MODER_bit at GPIOH_MODER.B28;
    sbit  MODE141_GPIOH_MODER_bit at GPIOH_MODER.B29;
    sbit  MODE130_GPIOH_MODER_bit at GPIOH_MODER.B26;
    sbit  MODE131_GPIOH_MODER_bit at GPIOH_MODER.B27;
    sbit  MODE120_GPIOH_MODER_bit at GPIOH_MODER.B24;
    sbit  MODE121_GPIOH_MODER_bit at GPIOH_MODER.B25;
    sbit  MODE110_GPIOH_MODER_bit at GPIOH_MODER.B22;
    sbit  MODE111_GPIOH_MODER_bit at GPIOH_MODER.B23;
    sbit  MODE100_GPIOH_MODER_bit at GPIOH_MODER.B20;
    sbit  MODE101_GPIOH_MODER_bit at GPIOH_MODER.B21;
    sbit  MODE90_GPIOH_MODER_bit at GPIOH_MODER.B18;
    sbit  MODE91_GPIOH_MODER_bit at GPIOH_MODER.B19;
    sbit  MODE80_GPIOH_MODER_bit at GPIOH_MODER.B16;
    sbit  MODE81_GPIOH_MODER_bit at GPIOH_MODER.B17;
    sbit  MODE70_GPIOH_MODER_bit at GPIOH_MODER.B14;
    sbit  MODE71_GPIOH_MODER_bit at GPIOH_MODER.B15;
    sbit  MODE60_GPIOH_MODER_bit at GPIOH_MODER.B12;
    sbit  MODE61_GPIOH_MODER_bit at GPIOH_MODER.B13;
    sbit  MODE50_GPIOH_MODER_bit at GPIOH_MODER.B10;
    sbit  MODE51_GPIOH_MODER_bit at GPIOH_MODER.B11;
    sbit  MODE40_GPIOH_MODER_bit at GPIOH_MODER.B8;
    sbit  MODE41_GPIOH_MODER_bit at GPIOH_MODER.B9;
    sbit  MODE30_GPIOH_MODER_bit at GPIOH_MODER.B6;
    sbit  MODE31_GPIOH_MODER_bit at GPIOH_MODER.B7;
    sbit  MODE20_GPIOH_MODER_bit at GPIOH_MODER.B4;
    sbit  MODE21_GPIOH_MODER_bit at GPIOH_MODER.B5;
    sbit  MODE10_GPIOH_MODER_bit at GPIOH_MODER.B2;
    sbit  MODE11_GPIOH_MODER_bit at GPIOH_MODER.B3;
    sbit  MODE00_GPIOH_MODER_bit at GPIOH_MODER.B0;
    sbit  MODE01_GPIOH_MODER_bit at GPIOH_MODER.B1;

sfr far unsigned long   volatile GPIOH_OTYPER         absolute 0x50001C04;
    sbit  OT15_GPIOH_OTYPER_bit at GPIOH_OTYPER.B15;
    sbit  OT14_GPIOH_OTYPER_bit at GPIOH_OTYPER.B14;
    sbit  OT13_GPIOH_OTYPER_bit at GPIOH_OTYPER.B13;
    sbit  OT12_GPIOH_OTYPER_bit at GPIOH_OTYPER.B12;
    sbit  OT11_GPIOH_OTYPER_bit at GPIOH_OTYPER.B11;
    sbit  OT10_GPIOH_OTYPER_bit at GPIOH_OTYPER.B10;
    sbit  OT9_GPIOH_OTYPER_bit at GPIOH_OTYPER.B9;
    sbit  OT8_GPIOH_OTYPER_bit at GPIOH_OTYPER.B8;
    sbit  OT7_GPIOH_OTYPER_bit at GPIOH_OTYPER.B7;
    sbit  OT6_GPIOH_OTYPER_bit at GPIOH_OTYPER.B6;
    sbit  OT5_GPIOH_OTYPER_bit at GPIOH_OTYPER.B5;
    sbit  OT4_GPIOH_OTYPER_bit at GPIOH_OTYPER.B4;
    sbit  OT3_GPIOH_OTYPER_bit at GPIOH_OTYPER.B3;
    sbit  OT2_GPIOH_OTYPER_bit at GPIOH_OTYPER.B2;
    sbit  OT1_GPIOH_OTYPER_bit at GPIOH_OTYPER.B1;
    sbit  OT0_GPIOH_OTYPER_bit at GPIOH_OTYPER.B0;

sfr far unsigned long   volatile GPIOH_OSPEEDR        absolute 0x50001C08;
    sbit  OSPEED150_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B30;
    sbit  OSPEED151_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B31;
    sbit  OSPEED140_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B28;
    sbit  OSPEED141_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B29;
    sbit  OSPEED130_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B26;
    sbit  OSPEED131_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B27;
    sbit  OSPEED120_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B24;
    sbit  OSPEED121_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B25;
    sbit  OSPEED110_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B22;
    sbit  OSPEED111_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B23;
    sbit  OSPEED100_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B20;
    sbit  OSPEED101_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B21;
    sbit  OSPEED90_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B18;
    sbit  OSPEED91_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B19;
    sbit  OSPEED80_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B16;
    sbit  OSPEED81_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B17;
    sbit  OSPEED70_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B14;
    sbit  OSPEED71_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B15;
    sbit  OSPEED60_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B12;
    sbit  OSPEED61_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B13;
    sbit  OSPEED50_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B10;
    sbit  OSPEED51_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B11;
    sbit  OSPEED40_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B8;
    sbit  OSPEED41_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B9;
    sbit  OSPEED30_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B6;
    sbit  OSPEED31_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B7;
    sbit  OSPEED20_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B4;
    sbit  OSPEED21_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B5;
    sbit  OSPEED10_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B2;
    sbit  OSPEED11_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B3;
    sbit  OSPEED00_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B0;
    sbit  OSPEED01_GPIOH_OSPEEDR_bit at GPIOH_OSPEEDR.B1;

sfr far unsigned long   volatile GPIOH_PUPDR          absolute 0x50001C0C;
    sbit  PUPD150_GPIOH_PUPDR_bit at GPIOH_PUPDR.B30;
    sbit  PUPD151_GPIOH_PUPDR_bit at GPIOH_PUPDR.B31;
    sbit  PUPD140_GPIOH_PUPDR_bit at GPIOH_PUPDR.B28;
    sbit  PUPD141_GPIOH_PUPDR_bit at GPIOH_PUPDR.B29;
    sbit  PUPD130_GPIOH_PUPDR_bit at GPIOH_PUPDR.B26;
    sbit  PUPD131_GPIOH_PUPDR_bit at GPIOH_PUPDR.B27;
    sbit  PUPD120_GPIOH_PUPDR_bit at GPIOH_PUPDR.B24;
    sbit  PUPD121_GPIOH_PUPDR_bit at GPIOH_PUPDR.B25;
    sbit  PUPD110_GPIOH_PUPDR_bit at GPIOH_PUPDR.B22;
    sbit  PUPD111_GPIOH_PUPDR_bit at GPIOH_PUPDR.B23;
    sbit  PUPD100_GPIOH_PUPDR_bit at GPIOH_PUPDR.B20;
    sbit  PUPD101_GPIOH_PUPDR_bit at GPIOH_PUPDR.B21;
    sbit  PUPD90_GPIOH_PUPDR_bit at GPIOH_PUPDR.B18;
    sbit  PUPD91_GPIOH_PUPDR_bit at GPIOH_PUPDR.B19;
    sbit  PUPD80_GPIOH_PUPDR_bit at GPIOH_PUPDR.B16;
    sbit  PUPD81_GPIOH_PUPDR_bit at GPIOH_PUPDR.B17;
    sbit  PUPD70_GPIOH_PUPDR_bit at GPIOH_PUPDR.B14;
    sbit  PUPD71_GPIOH_PUPDR_bit at GPIOH_PUPDR.B15;
    sbit  PUPD60_GPIOH_PUPDR_bit at GPIOH_PUPDR.B12;
    sbit  PUPD61_GPIOH_PUPDR_bit at GPIOH_PUPDR.B13;
    sbit  PUPD50_GPIOH_PUPDR_bit at GPIOH_PUPDR.B10;
    sbit  PUPD51_GPIOH_PUPDR_bit at GPIOH_PUPDR.B11;
    sbit  PUPD40_GPIOH_PUPDR_bit at GPIOH_PUPDR.B8;
    sbit  PUPD41_GPIOH_PUPDR_bit at GPIOH_PUPDR.B9;
    sbit  PUPD30_GPIOH_PUPDR_bit at GPIOH_PUPDR.B6;
    sbit  PUPD31_GPIOH_PUPDR_bit at GPIOH_PUPDR.B7;
    sbit  PUPD20_GPIOH_PUPDR_bit at GPIOH_PUPDR.B4;
    sbit  PUPD21_GPIOH_PUPDR_bit at GPIOH_PUPDR.B5;
    sbit  PUPD10_GPIOH_PUPDR_bit at GPIOH_PUPDR.B2;
    sbit  PUPD11_GPIOH_PUPDR_bit at GPIOH_PUPDR.B3;
    sbit  PUPD00_GPIOH_PUPDR_bit at GPIOH_PUPDR.B0;
    sbit  PUPD01_GPIOH_PUPDR_bit at GPIOH_PUPDR.B1;

sfr far unsigned long   volatile GPIOH_IDR            absolute 0x50001C10;
    sbit  ID15_GPIOH_IDR_bit at GPIOH_IDR.B15;
    sbit  ID14_GPIOH_IDR_bit at GPIOH_IDR.B14;
    sbit  ID13_GPIOH_IDR_bit at GPIOH_IDR.B13;
    sbit  ID12_GPIOH_IDR_bit at GPIOH_IDR.B12;
    sbit  ID11_GPIOH_IDR_bit at GPIOH_IDR.B11;
    sbit  ID10_GPIOH_IDR_bit at GPIOH_IDR.B10;
    sbit  ID9_GPIOH_IDR_bit at GPIOH_IDR.B9;
    sbit  ID8_GPIOH_IDR_bit at GPIOH_IDR.B8;
    sbit  ID7_GPIOH_IDR_bit at GPIOH_IDR.B7;
    sbit  ID6_GPIOH_IDR_bit at GPIOH_IDR.B6;
    sbit  ID5_GPIOH_IDR_bit at GPIOH_IDR.B5;
    sbit  ID4_GPIOH_IDR_bit at GPIOH_IDR.B4;
    sbit  ID3_GPIOH_IDR_bit at GPIOH_IDR.B3;
    sbit  ID2_GPIOH_IDR_bit at GPIOH_IDR.B2;
    sbit  ID1_GPIOH_IDR_bit at GPIOH_IDR.B1;
    sbit  ID0_GPIOH_IDR_bit at GPIOH_IDR.B0;

sfr far unsigned long   volatile GPIOH_ODR            absolute 0x50001C14;
    sbit  OD15_GPIOH_ODR_bit at GPIOH_ODR.B15;
    sbit  OD14_GPIOH_ODR_bit at GPIOH_ODR.B14;
    sbit  OD13_GPIOH_ODR_bit at GPIOH_ODR.B13;
    sbit  OD12_GPIOH_ODR_bit at GPIOH_ODR.B12;
    sbit  OD11_GPIOH_ODR_bit at GPIOH_ODR.B11;
    sbit  OD10_GPIOH_ODR_bit at GPIOH_ODR.B10;
    sbit  OD9_GPIOH_ODR_bit at GPIOH_ODR.B9;
    sbit  OD8_GPIOH_ODR_bit at GPIOH_ODR.B8;
    sbit  OD7_GPIOH_ODR_bit at GPIOH_ODR.B7;
    sbit  OD6_GPIOH_ODR_bit at GPIOH_ODR.B6;
    sbit  OD5_GPIOH_ODR_bit at GPIOH_ODR.B5;
    sbit  OD4_GPIOH_ODR_bit at GPIOH_ODR.B4;
    sbit  OD3_GPIOH_ODR_bit at GPIOH_ODR.B3;
    sbit  OD2_GPIOH_ODR_bit at GPIOH_ODR.B2;
    sbit  OD1_GPIOH_ODR_bit at GPIOH_ODR.B1;
    sbit  OD0_GPIOH_ODR_bit at GPIOH_ODR.B0;

sfr far unsigned long   volatile GPIOH_BSRR           absolute 0x50001C18;
    sbit  BR15_GPIOH_BSRR_bit at GPIOH_BSRR.B31;
    sbit  BR14_GPIOH_BSRR_bit at GPIOH_BSRR.B30;
    sbit  BR13_GPIOH_BSRR_bit at GPIOH_BSRR.B29;
    sbit  BR12_GPIOH_BSRR_bit at GPIOH_BSRR.B28;
    sbit  BR11_GPIOH_BSRR_bit at GPIOH_BSRR.B27;
    sbit  BR10_GPIOH_BSRR_bit at GPIOH_BSRR.B26;
    sbit  BR9_GPIOH_BSRR_bit at GPIOH_BSRR.B25;
    sbit  BR8_GPIOH_BSRR_bit at GPIOH_BSRR.B24;
    sbit  BR7_GPIOH_BSRR_bit at GPIOH_BSRR.B23;
    sbit  BR6_GPIOH_BSRR_bit at GPIOH_BSRR.B22;
    sbit  BR5_GPIOH_BSRR_bit at GPIOH_BSRR.B21;
    sbit  BR4_GPIOH_BSRR_bit at GPIOH_BSRR.B20;
    sbit  BR3_GPIOH_BSRR_bit at GPIOH_BSRR.B19;
    sbit  BR2_GPIOH_BSRR_bit at GPIOH_BSRR.B18;
    sbit  BR1_GPIOH_BSRR_bit at GPIOH_BSRR.B17;
    sbit  BR0_GPIOH_BSRR_bit at GPIOH_BSRR.B16;
    sbit  BS15_GPIOH_BSRR_bit at GPIOH_BSRR.B15;
    sbit  BS14_GPIOH_BSRR_bit at GPIOH_BSRR.B14;
    sbit  BS13_GPIOH_BSRR_bit at GPIOH_BSRR.B13;
    sbit  BS12_GPIOH_BSRR_bit at GPIOH_BSRR.B12;
    sbit  BS11_GPIOH_BSRR_bit at GPIOH_BSRR.B11;
    sbit  BS10_GPIOH_BSRR_bit at GPIOH_BSRR.B10;
    sbit  BS9_GPIOH_BSRR_bit at GPIOH_BSRR.B9;
    sbit  BS8_GPIOH_BSRR_bit at GPIOH_BSRR.B8;
    sbit  BS7_GPIOH_BSRR_bit at GPIOH_BSRR.B7;
    sbit  BS6_GPIOH_BSRR_bit at GPIOH_BSRR.B6;
    sbit  BS5_GPIOH_BSRR_bit at GPIOH_BSRR.B5;
    sbit  BS4_GPIOH_BSRR_bit at GPIOH_BSRR.B4;
    sbit  BS3_GPIOH_BSRR_bit at GPIOH_BSRR.B3;
    sbit  BS2_GPIOH_BSRR_bit at GPIOH_BSRR.B2;
    sbit  BS1_GPIOH_BSRR_bit at GPIOH_BSRR.B1;
    sbit  BS0_GPIOH_BSRR_bit at GPIOH_BSRR.B0;

sfr far unsigned long   volatile GPIOH_LCKR           absolute 0x50001C1C;
    sbit  LCKK_GPIOH_LCKR_bit at GPIOH_LCKR.B16;
    sbit  LCK15_GPIOH_LCKR_bit at GPIOH_LCKR.B15;
    sbit  LCK14_GPIOH_LCKR_bit at GPIOH_LCKR.B14;
    sbit  LCK13_GPIOH_LCKR_bit at GPIOH_LCKR.B13;
    sbit  LCK12_GPIOH_LCKR_bit at GPIOH_LCKR.B12;
    sbit  LCK11_GPIOH_LCKR_bit at GPIOH_LCKR.B11;
    sbit  LCK10_GPIOH_LCKR_bit at GPIOH_LCKR.B10;
    sbit  LCK9_GPIOH_LCKR_bit at GPIOH_LCKR.B9;
    sbit  LCK8_GPIOH_LCKR_bit at GPIOH_LCKR.B8;
    sbit  LCK7_GPIOH_LCKR_bit at GPIOH_LCKR.B7;
    sbit  LCK6_GPIOH_LCKR_bit at GPIOH_LCKR.B6;
    sbit  LCK5_GPIOH_LCKR_bit at GPIOH_LCKR.B5;
    sbit  LCK4_GPIOH_LCKR_bit at GPIOH_LCKR.B4;
    sbit  LCK3_GPIOH_LCKR_bit at GPIOH_LCKR.B3;
    sbit  LCK2_GPIOH_LCKR_bit at GPIOH_LCKR.B2;
    sbit  LCK1_GPIOH_LCKR_bit at GPIOH_LCKR.B1;
    sbit  LCK0_GPIOH_LCKR_bit at GPIOH_LCKR.B0;

sfr far unsigned long   volatile GPIOH_AFRL           absolute 0x50001C20;
    sbit  AFSEL70_GPIOH_AFRL_bit at GPIOH_AFRL.B28;
    sbit  AFSEL71_GPIOH_AFRL_bit at GPIOH_AFRL.B29;
    sbit  AFSEL72_GPIOH_AFRL_bit at GPIOH_AFRL.B30;
    sbit  AFSEL73_GPIOH_AFRL_bit at GPIOH_AFRL.B31;
    sbit  AFSEL60_GPIOH_AFRL_bit at GPIOH_AFRL.B24;
    sbit  AFSEL61_GPIOH_AFRL_bit at GPIOH_AFRL.B25;
    sbit  AFSEL62_GPIOH_AFRL_bit at GPIOH_AFRL.B26;
    sbit  AFSEL63_GPIOH_AFRL_bit at GPIOH_AFRL.B27;
    sbit  AFSEL50_GPIOH_AFRL_bit at GPIOH_AFRL.B20;
    sbit  AFSEL51_GPIOH_AFRL_bit at GPIOH_AFRL.B21;
    sbit  AFSEL52_GPIOH_AFRL_bit at GPIOH_AFRL.B22;
    sbit  AFSEL53_GPIOH_AFRL_bit at GPIOH_AFRL.B23;
    sbit  AFSEL40_GPIOH_AFRL_bit at GPIOH_AFRL.B16;
    sbit  AFSEL41_GPIOH_AFRL_bit at GPIOH_AFRL.B17;
    sbit  AFSEL42_GPIOH_AFRL_bit at GPIOH_AFRL.B18;
    sbit  AFSEL43_GPIOH_AFRL_bit at GPIOH_AFRL.B19;
    sbit  AFSEL30_GPIOH_AFRL_bit at GPIOH_AFRL.B12;
    sbit  AFSEL31_GPIOH_AFRL_bit at GPIOH_AFRL.B13;
    sbit  AFSEL32_GPIOH_AFRL_bit at GPIOH_AFRL.B14;
    sbit  AFSEL33_GPIOH_AFRL_bit at GPIOH_AFRL.B15;
    sbit  AFSEL20_GPIOH_AFRL_bit at GPIOH_AFRL.B8;
    sbit  AFSEL21_GPIOH_AFRL_bit at GPIOH_AFRL.B9;
    sbit  AFSEL22_GPIOH_AFRL_bit at GPIOH_AFRL.B10;
    sbit  AFSEL23_GPIOH_AFRL_bit at GPIOH_AFRL.B11;
    sbit  AFSEL10_GPIOH_AFRL_bit at GPIOH_AFRL.B4;
    sbit  AFSEL11_GPIOH_AFRL_bit at GPIOH_AFRL.B5;
    sbit  AFSEL12_GPIOH_AFRL_bit at GPIOH_AFRL.B6;
    sbit  AFSEL13_GPIOH_AFRL_bit at GPIOH_AFRL.B7;
    sbit  AFSEL00_GPIOH_AFRL_bit at GPIOH_AFRL.B0;
    sbit  AFSEL01_GPIOH_AFRL_bit at GPIOH_AFRL.B1;
    sbit  AFSEL02_GPIOH_AFRL_bit at GPIOH_AFRL.B2;
    sbit  AFSEL03_GPIOH_AFRL_bit at GPIOH_AFRL.B3;

sfr far unsigned long   volatile GPIOH_AFRH           absolute 0x50001C24;
    sbit  AFSEL150_GPIOH_AFRH_bit at GPIOH_AFRH.B28;
    sbit  AFSEL151_GPIOH_AFRH_bit at GPIOH_AFRH.B29;
    sbit  AFSEL152_GPIOH_AFRH_bit at GPIOH_AFRH.B30;
    sbit  AFSEL153_GPIOH_AFRH_bit at GPIOH_AFRH.B31;
    sbit  AFSEL140_GPIOH_AFRH_bit at GPIOH_AFRH.B24;
    sbit  AFSEL141_GPIOH_AFRH_bit at GPIOH_AFRH.B25;
    sbit  AFSEL142_GPIOH_AFRH_bit at GPIOH_AFRH.B26;
    sbit  AFSEL143_GPIOH_AFRH_bit at GPIOH_AFRH.B27;
    sbit  AFSEL130_GPIOH_AFRH_bit at GPIOH_AFRH.B20;
    sbit  AFSEL131_GPIOH_AFRH_bit at GPIOH_AFRH.B21;
    sbit  AFSEL132_GPIOH_AFRH_bit at GPIOH_AFRH.B22;
    sbit  AFSEL133_GPIOH_AFRH_bit at GPIOH_AFRH.B23;
    sbit  AFSEL120_GPIOH_AFRH_bit at GPIOH_AFRH.B16;
    sbit  AFSEL121_GPIOH_AFRH_bit at GPIOH_AFRH.B17;
    sbit  AFSEL122_GPIOH_AFRH_bit at GPIOH_AFRH.B18;
    sbit  AFSEL123_GPIOH_AFRH_bit at GPIOH_AFRH.B19;
    sbit  AFSEL110_GPIOH_AFRH_bit at GPIOH_AFRH.B12;
    sbit  AFSEL111_GPIOH_AFRH_bit at GPIOH_AFRH.B13;
    sbit  AFSEL112_GPIOH_AFRH_bit at GPIOH_AFRH.B14;
    sbit  AFSEL113_GPIOH_AFRH_bit at GPIOH_AFRH.B15;
    sbit  AFSEL100_GPIOH_AFRH_bit at GPIOH_AFRH.B8;
    sbit  AFSEL101_GPIOH_AFRH_bit at GPIOH_AFRH.B9;
    sbit  AFSEL102_GPIOH_AFRH_bit at GPIOH_AFRH.B10;
    sbit  AFSEL103_GPIOH_AFRH_bit at GPIOH_AFRH.B11;
    sbit  AFSEL90_GPIOH_AFRH_bit at GPIOH_AFRH.B4;
    sbit  AFSEL91_GPIOH_AFRH_bit at GPIOH_AFRH.B5;
    sbit  AFSEL92_GPIOH_AFRH_bit at GPIOH_AFRH.B6;
    sbit  AFSEL93_GPIOH_AFRH_bit at GPIOH_AFRH.B7;
    sbit  AFSEL80_GPIOH_AFRH_bit at GPIOH_AFRH.B0;
    sbit  AFSEL81_GPIOH_AFRH_bit at GPIOH_AFRH.B1;
    sbit  AFSEL82_GPIOH_AFRH_bit at GPIOH_AFRH.B2;
    sbit  AFSEL83_GPIOH_AFRH_bit at GPIOH_AFRH.B3;

sfr far unsigned long   volatile GPIOH_BRR            absolute 0x50001C28;
    sbit  BR15_GPIOH_BRR_bit at GPIOH_BRR.B15;
    sbit  BR14_GPIOH_BRR_bit at GPIOH_BRR.B14;
    sbit  BR13_GPIOH_BRR_bit at GPIOH_BRR.B13;
    sbit  BR12_GPIOH_BRR_bit at GPIOH_BRR.B12;
    sbit  BR11_GPIOH_BRR_bit at GPIOH_BRR.B11;
    sbit  BR10_GPIOH_BRR_bit at GPIOH_BRR.B10;
    sbit  BR9_GPIOH_BRR_bit at GPIOH_BRR.B9;
    sbit  BR8_GPIOH_BRR_bit at GPIOH_BRR.B8;
    sbit  BR7_GPIOH_BRR_bit at GPIOH_BRR.B7;
    sbit  BR6_GPIOH_BRR_bit at GPIOH_BRR.B6;
    sbit  BR5_GPIOH_BRR_bit at GPIOH_BRR.B5;
    sbit  BR4_GPIOH_BRR_bit at GPIOH_BRR.B4;
    sbit  BR3_GPIOH_BRR_bit at GPIOH_BRR.B3;
    sbit  BR2_GPIOH_BRR_bit at GPIOH_BRR.B2;
    sbit  BR1_GPIOH_BRR_bit at GPIOH_BRR.B1;
    sbit  BR0_GPIOH_BRR_bit at GPIOH_BRR.B0;

sfr far unsigned long   volatile GPIOE_BASE           absolute 0x50001000;
sfr far unsigned long   volatile GPIOE_MODER          absolute 0x50001000;
    sbit  MODE150_GPIOE_MODER_bit at GPIOE_MODER.B30;
    sbit  MODE151_GPIOE_MODER_bit at GPIOE_MODER.B31;
    sbit  MODE140_GPIOE_MODER_bit at GPIOE_MODER.B28;
    sbit  MODE141_GPIOE_MODER_bit at GPIOE_MODER.B29;
    sbit  MODE130_GPIOE_MODER_bit at GPIOE_MODER.B26;
    sbit  MODE131_GPIOE_MODER_bit at GPIOE_MODER.B27;
    sbit  MODE120_GPIOE_MODER_bit at GPIOE_MODER.B24;
    sbit  MODE121_GPIOE_MODER_bit at GPIOE_MODER.B25;
    sbit  MODE110_GPIOE_MODER_bit at GPIOE_MODER.B22;
    sbit  MODE111_GPIOE_MODER_bit at GPIOE_MODER.B23;
    sbit  MODE100_GPIOE_MODER_bit at GPIOE_MODER.B20;
    sbit  MODE101_GPIOE_MODER_bit at GPIOE_MODER.B21;
    sbit  MODE90_GPIOE_MODER_bit at GPIOE_MODER.B18;
    sbit  MODE91_GPIOE_MODER_bit at GPIOE_MODER.B19;
    sbit  MODE80_GPIOE_MODER_bit at GPIOE_MODER.B16;
    sbit  MODE81_GPIOE_MODER_bit at GPIOE_MODER.B17;
    sbit  MODE70_GPIOE_MODER_bit at GPIOE_MODER.B14;
    sbit  MODE71_GPIOE_MODER_bit at GPIOE_MODER.B15;
    sbit  MODE60_GPIOE_MODER_bit at GPIOE_MODER.B12;
    sbit  MODE61_GPIOE_MODER_bit at GPIOE_MODER.B13;
    sbit  MODE50_GPIOE_MODER_bit at GPIOE_MODER.B10;
    sbit  MODE51_GPIOE_MODER_bit at GPIOE_MODER.B11;
    sbit  MODE40_GPIOE_MODER_bit at GPIOE_MODER.B8;
    sbit  MODE41_GPIOE_MODER_bit at GPIOE_MODER.B9;
    sbit  MODE30_GPIOE_MODER_bit at GPIOE_MODER.B6;
    sbit  MODE31_GPIOE_MODER_bit at GPIOE_MODER.B7;
    sbit  MODE20_GPIOE_MODER_bit at GPIOE_MODER.B4;
    sbit  MODE21_GPIOE_MODER_bit at GPIOE_MODER.B5;
    sbit  MODE10_GPIOE_MODER_bit at GPIOE_MODER.B2;
    sbit  MODE11_GPIOE_MODER_bit at GPIOE_MODER.B3;
    sbit  MODE00_GPIOE_MODER_bit at GPIOE_MODER.B0;
    sbit  MODE01_GPIOE_MODER_bit at GPIOE_MODER.B1;

sfr far unsigned long   volatile GPIOE_OTYPER         absolute 0x50001004;
    sbit  OT15_GPIOE_OTYPER_bit at GPIOE_OTYPER.B15;
    sbit  OT14_GPIOE_OTYPER_bit at GPIOE_OTYPER.B14;
    sbit  OT13_GPIOE_OTYPER_bit at GPIOE_OTYPER.B13;
    sbit  OT12_GPIOE_OTYPER_bit at GPIOE_OTYPER.B12;
    sbit  OT11_GPIOE_OTYPER_bit at GPIOE_OTYPER.B11;
    sbit  OT10_GPIOE_OTYPER_bit at GPIOE_OTYPER.B10;
    sbit  OT9_GPIOE_OTYPER_bit at GPIOE_OTYPER.B9;
    sbit  OT8_GPIOE_OTYPER_bit at GPIOE_OTYPER.B8;
    sbit  OT7_GPIOE_OTYPER_bit at GPIOE_OTYPER.B7;
    sbit  OT6_GPIOE_OTYPER_bit at GPIOE_OTYPER.B6;
    sbit  OT5_GPIOE_OTYPER_bit at GPIOE_OTYPER.B5;
    sbit  OT4_GPIOE_OTYPER_bit at GPIOE_OTYPER.B4;
    sbit  OT3_GPIOE_OTYPER_bit at GPIOE_OTYPER.B3;
    sbit  OT2_GPIOE_OTYPER_bit at GPIOE_OTYPER.B2;
    sbit  OT1_GPIOE_OTYPER_bit at GPIOE_OTYPER.B1;
    sbit  OT0_GPIOE_OTYPER_bit at GPIOE_OTYPER.B0;

sfr far unsigned long   volatile GPIOE_OSPEEDR        absolute 0x50001008;
    sbit  OSPEED150_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B30;
    sbit  OSPEED151_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B31;
    sbit  OSPEED140_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B28;
    sbit  OSPEED141_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B29;
    sbit  OSPEED130_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B26;
    sbit  OSPEED131_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B27;
    sbit  OSPEED120_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B24;
    sbit  OSPEED121_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B25;
    sbit  OSPEED110_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B22;
    sbit  OSPEED111_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B23;
    sbit  OSPEED100_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B20;
    sbit  OSPEED101_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B21;
    sbit  OSPEED90_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B18;
    sbit  OSPEED91_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B19;
    sbit  OSPEED80_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B16;
    sbit  OSPEED81_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B17;
    sbit  OSPEED70_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B14;
    sbit  OSPEED71_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B15;
    sbit  OSPEED60_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B12;
    sbit  OSPEED61_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B13;
    sbit  OSPEED50_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B10;
    sbit  OSPEED51_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B11;
    sbit  OSPEED40_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B8;
    sbit  OSPEED41_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B9;
    sbit  OSPEED30_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B6;
    sbit  OSPEED31_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B7;
    sbit  OSPEED20_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B4;
    sbit  OSPEED21_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B5;
    sbit  OSPEED10_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B2;
    sbit  OSPEED11_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B3;
    sbit  OSPEED00_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B0;
    sbit  OSPEED01_GPIOE_OSPEEDR_bit at GPIOE_OSPEEDR.B1;

sfr far unsigned long   volatile GPIOE_PUPDR          absolute 0x5000100C;
    sbit  PUPD150_GPIOE_PUPDR_bit at GPIOE_PUPDR.B30;
    sbit  PUPD151_GPIOE_PUPDR_bit at GPIOE_PUPDR.B31;
    sbit  PUPD140_GPIOE_PUPDR_bit at GPIOE_PUPDR.B28;
    sbit  PUPD141_GPIOE_PUPDR_bit at GPIOE_PUPDR.B29;
    sbit  PUPD130_GPIOE_PUPDR_bit at GPIOE_PUPDR.B26;
    sbit  PUPD131_GPIOE_PUPDR_bit at GPIOE_PUPDR.B27;
    sbit  PUPD120_GPIOE_PUPDR_bit at GPIOE_PUPDR.B24;
    sbit  PUPD121_GPIOE_PUPDR_bit at GPIOE_PUPDR.B25;
    sbit  PUPD110_GPIOE_PUPDR_bit at GPIOE_PUPDR.B22;
    sbit  PUPD111_GPIOE_PUPDR_bit at GPIOE_PUPDR.B23;
    sbit  PUPD100_GPIOE_PUPDR_bit at GPIOE_PUPDR.B20;
    sbit  PUPD101_GPIOE_PUPDR_bit at GPIOE_PUPDR.B21;
    sbit  PUPD90_GPIOE_PUPDR_bit at GPIOE_PUPDR.B18;
    sbit  PUPD91_GPIOE_PUPDR_bit at GPIOE_PUPDR.B19;
    sbit  PUPD80_GPIOE_PUPDR_bit at GPIOE_PUPDR.B16;
    sbit  PUPD81_GPIOE_PUPDR_bit at GPIOE_PUPDR.B17;
    sbit  PUPD70_GPIOE_PUPDR_bit at GPIOE_PUPDR.B14;
    sbit  PUPD71_GPIOE_PUPDR_bit at GPIOE_PUPDR.B15;
    sbit  PUPD60_GPIOE_PUPDR_bit at GPIOE_PUPDR.B12;
    sbit  PUPD61_GPIOE_PUPDR_bit at GPIOE_PUPDR.B13;
    sbit  PUPD50_GPIOE_PUPDR_bit at GPIOE_PUPDR.B10;
    sbit  PUPD51_GPIOE_PUPDR_bit at GPIOE_PUPDR.B11;
    sbit  PUPD40_GPIOE_PUPDR_bit at GPIOE_PUPDR.B8;
    sbit  PUPD41_GPIOE_PUPDR_bit at GPIOE_PUPDR.B9;
    sbit  PUPD30_GPIOE_PUPDR_bit at GPIOE_PUPDR.B6;
    sbit  PUPD31_GPIOE_PUPDR_bit at GPIOE_PUPDR.B7;
    sbit  PUPD20_GPIOE_PUPDR_bit at GPIOE_PUPDR.B4;
    sbit  PUPD21_GPIOE_PUPDR_bit at GPIOE_PUPDR.B5;
    sbit  PUPD10_GPIOE_PUPDR_bit at GPIOE_PUPDR.B2;
    sbit  PUPD11_GPIOE_PUPDR_bit at GPIOE_PUPDR.B3;
    sbit  PUPD00_GPIOE_PUPDR_bit at GPIOE_PUPDR.B0;
    sbit  PUPD01_GPIOE_PUPDR_bit at GPIOE_PUPDR.B1;

sfr far unsigned long   volatile GPIOE_IDR            absolute 0x50001010;
    sbit  ID15_GPIOE_IDR_bit at GPIOE_IDR.B15;
    sbit  ID14_GPIOE_IDR_bit at GPIOE_IDR.B14;
    sbit  ID13_GPIOE_IDR_bit at GPIOE_IDR.B13;
    sbit  ID12_GPIOE_IDR_bit at GPIOE_IDR.B12;
    sbit  ID11_GPIOE_IDR_bit at GPIOE_IDR.B11;
    sbit  ID10_GPIOE_IDR_bit at GPIOE_IDR.B10;
    sbit  ID9_GPIOE_IDR_bit at GPIOE_IDR.B9;
    sbit  ID8_GPIOE_IDR_bit at GPIOE_IDR.B8;
    sbit  ID7_GPIOE_IDR_bit at GPIOE_IDR.B7;
    sbit  ID6_GPIOE_IDR_bit at GPIOE_IDR.B6;
    sbit  ID5_GPIOE_IDR_bit at GPIOE_IDR.B5;
    sbit  ID4_GPIOE_IDR_bit at GPIOE_IDR.B4;
    sbit  ID3_GPIOE_IDR_bit at GPIOE_IDR.B3;
    sbit  ID2_GPIOE_IDR_bit at GPIOE_IDR.B2;
    sbit  ID1_GPIOE_IDR_bit at GPIOE_IDR.B1;
    sbit  ID0_GPIOE_IDR_bit at GPIOE_IDR.B0;

sfr far unsigned long   volatile GPIOE_ODR            absolute 0x50001014;
    sbit  OD15_GPIOE_ODR_bit at GPIOE_ODR.B15;
    sbit  OD14_GPIOE_ODR_bit at GPIOE_ODR.B14;
    sbit  OD13_GPIOE_ODR_bit at GPIOE_ODR.B13;
    sbit  OD12_GPIOE_ODR_bit at GPIOE_ODR.B12;
    sbit  OD11_GPIOE_ODR_bit at GPIOE_ODR.B11;
    sbit  OD10_GPIOE_ODR_bit at GPIOE_ODR.B10;
    sbit  OD9_GPIOE_ODR_bit at GPIOE_ODR.B9;
    sbit  OD8_GPIOE_ODR_bit at GPIOE_ODR.B8;
    sbit  OD7_GPIOE_ODR_bit at GPIOE_ODR.B7;
    sbit  OD6_GPIOE_ODR_bit at GPIOE_ODR.B6;
    sbit  OD5_GPIOE_ODR_bit at GPIOE_ODR.B5;
    sbit  OD4_GPIOE_ODR_bit at GPIOE_ODR.B4;
    sbit  OD3_GPIOE_ODR_bit at GPIOE_ODR.B3;
    sbit  OD2_GPIOE_ODR_bit at GPIOE_ODR.B2;
    sbit  OD1_GPIOE_ODR_bit at GPIOE_ODR.B1;
    sbit  OD0_GPIOE_ODR_bit at GPIOE_ODR.B0;

sfr far unsigned long   volatile GPIOE_BSRR           absolute 0x50001018;
    sbit  BR15_GPIOE_BSRR_bit at GPIOE_BSRR.B31;
    sbit  BR14_GPIOE_BSRR_bit at GPIOE_BSRR.B30;
    sbit  BR13_GPIOE_BSRR_bit at GPIOE_BSRR.B29;
    sbit  BR12_GPIOE_BSRR_bit at GPIOE_BSRR.B28;
    sbit  BR11_GPIOE_BSRR_bit at GPIOE_BSRR.B27;
    sbit  BR10_GPIOE_BSRR_bit at GPIOE_BSRR.B26;
    sbit  BR9_GPIOE_BSRR_bit at GPIOE_BSRR.B25;
    sbit  BR8_GPIOE_BSRR_bit at GPIOE_BSRR.B24;
    sbit  BR7_GPIOE_BSRR_bit at GPIOE_BSRR.B23;
    sbit  BR6_GPIOE_BSRR_bit at GPIOE_BSRR.B22;
    sbit  BR5_GPIOE_BSRR_bit at GPIOE_BSRR.B21;
    sbit  BR4_GPIOE_BSRR_bit at GPIOE_BSRR.B20;
    sbit  BR3_GPIOE_BSRR_bit at GPIOE_BSRR.B19;
    sbit  BR2_GPIOE_BSRR_bit at GPIOE_BSRR.B18;
    sbit  BR1_GPIOE_BSRR_bit at GPIOE_BSRR.B17;
    sbit  BR0_GPIOE_BSRR_bit at GPIOE_BSRR.B16;
    sbit  BS15_GPIOE_BSRR_bit at GPIOE_BSRR.B15;
    sbit  BS14_GPIOE_BSRR_bit at GPIOE_BSRR.B14;
    sbit  BS13_GPIOE_BSRR_bit at GPIOE_BSRR.B13;
    sbit  BS12_GPIOE_BSRR_bit at GPIOE_BSRR.B12;
    sbit  BS11_GPIOE_BSRR_bit at GPIOE_BSRR.B11;
    sbit  BS10_GPIOE_BSRR_bit at GPIOE_BSRR.B10;
    sbit  BS9_GPIOE_BSRR_bit at GPIOE_BSRR.B9;
    sbit  BS8_GPIOE_BSRR_bit at GPIOE_BSRR.B8;
    sbit  BS7_GPIOE_BSRR_bit at GPIOE_BSRR.B7;
    sbit  BS6_GPIOE_BSRR_bit at GPIOE_BSRR.B6;
    sbit  BS5_GPIOE_BSRR_bit at GPIOE_BSRR.B5;
    sbit  BS4_GPIOE_BSRR_bit at GPIOE_BSRR.B4;
    sbit  BS3_GPIOE_BSRR_bit at GPIOE_BSRR.B3;
    sbit  BS2_GPIOE_BSRR_bit at GPIOE_BSRR.B2;
    sbit  BS1_GPIOE_BSRR_bit at GPIOE_BSRR.B1;
    sbit  BS0_GPIOE_BSRR_bit at GPIOE_BSRR.B0;

sfr far unsigned long   volatile GPIOE_LCKR           absolute 0x5000101C;
    sbit  LCKK_GPIOE_LCKR_bit at GPIOE_LCKR.B16;
    sbit  LCK15_GPIOE_LCKR_bit at GPIOE_LCKR.B15;
    sbit  LCK14_GPIOE_LCKR_bit at GPIOE_LCKR.B14;
    sbit  LCK13_GPIOE_LCKR_bit at GPIOE_LCKR.B13;
    sbit  LCK12_GPIOE_LCKR_bit at GPIOE_LCKR.B12;
    sbit  LCK11_GPIOE_LCKR_bit at GPIOE_LCKR.B11;
    sbit  LCK10_GPIOE_LCKR_bit at GPIOE_LCKR.B10;
    sbit  LCK9_GPIOE_LCKR_bit at GPIOE_LCKR.B9;
    sbit  LCK8_GPIOE_LCKR_bit at GPIOE_LCKR.B8;
    sbit  LCK7_GPIOE_LCKR_bit at GPIOE_LCKR.B7;
    sbit  LCK6_GPIOE_LCKR_bit at GPIOE_LCKR.B6;
    sbit  LCK5_GPIOE_LCKR_bit at GPIOE_LCKR.B5;
    sbit  LCK4_GPIOE_LCKR_bit at GPIOE_LCKR.B4;
    sbit  LCK3_GPIOE_LCKR_bit at GPIOE_LCKR.B3;
    sbit  LCK2_GPIOE_LCKR_bit at GPIOE_LCKR.B2;
    sbit  LCK1_GPIOE_LCKR_bit at GPIOE_LCKR.B1;
    sbit  LCK0_GPIOE_LCKR_bit at GPIOE_LCKR.B0;

sfr far unsigned long   volatile GPIOE_AFRL           absolute 0x50001020;
    sbit  AFSEL70_GPIOE_AFRL_bit at GPIOE_AFRL.B28;
    sbit  AFSEL71_GPIOE_AFRL_bit at GPIOE_AFRL.B29;
    sbit  AFSEL72_GPIOE_AFRL_bit at GPIOE_AFRL.B30;
    sbit  AFSEL73_GPIOE_AFRL_bit at GPIOE_AFRL.B31;
    sbit  AFSEL60_GPIOE_AFRL_bit at GPIOE_AFRL.B24;
    sbit  AFSEL61_GPIOE_AFRL_bit at GPIOE_AFRL.B25;
    sbit  AFSEL62_GPIOE_AFRL_bit at GPIOE_AFRL.B26;
    sbit  AFSEL63_GPIOE_AFRL_bit at GPIOE_AFRL.B27;
    sbit  AFSEL50_GPIOE_AFRL_bit at GPIOE_AFRL.B20;
    sbit  AFSEL51_GPIOE_AFRL_bit at GPIOE_AFRL.B21;
    sbit  AFSEL52_GPIOE_AFRL_bit at GPIOE_AFRL.B22;
    sbit  AFSEL53_GPIOE_AFRL_bit at GPIOE_AFRL.B23;
    sbit  AFSEL40_GPIOE_AFRL_bit at GPIOE_AFRL.B16;
    sbit  AFSEL41_GPIOE_AFRL_bit at GPIOE_AFRL.B17;
    sbit  AFSEL42_GPIOE_AFRL_bit at GPIOE_AFRL.B18;
    sbit  AFSEL43_GPIOE_AFRL_bit at GPIOE_AFRL.B19;
    sbit  AFSEL30_GPIOE_AFRL_bit at GPIOE_AFRL.B12;
    sbit  AFSEL31_GPIOE_AFRL_bit at GPIOE_AFRL.B13;
    sbit  AFSEL32_GPIOE_AFRL_bit at GPIOE_AFRL.B14;
    sbit  AFSEL33_GPIOE_AFRL_bit at GPIOE_AFRL.B15;
    sbit  AFSEL20_GPIOE_AFRL_bit at GPIOE_AFRL.B8;
    sbit  AFSEL21_GPIOE_AFRL_bit at GPIOE_AFRL.B9;
    sbit  AFSEL22_GPIOE_AFRL_bit at GPIOE_AFRL.B10;
    sbit  AFSEL23_GPIOE_AFRL_bit at GPIOE_AFRL.B11;
    sbit  AFSEL10_GPIOE_AFRL_bit at GPIOE_AFRL.B4;
    sbit  AFSEL11_GPIOE_AFRL_bit at GPIOE_AFRL.B5;
    sbit  AFSEL12_GPIOE_AFRL_bit at GPIOE_AFRL.B6;
    sbit  AFSEL13_GPIOE_AFRL_bit at GPIOE_AFRL.B7;
    sbit  AFSEL00_GPIOE_AFRL_bit at GPIOE_AFRL.B0;
    sbit  AFSEL01_GPIOE_AFRL_bit at GPIOE_AFRL.B1;
    sbit  AFSEL02_GPIOE_AFRL_bit at GPIOE_AFRL.B2;
    sbit  AFSEL03_GPIOE_AFRL_bit at GPIOE_AFRL.B3;

sfr far unsigned long   volatile GPIOE_AFRH           absolute 0x50001024;
    sbit  AFSEL150_GPIOE_AFRH_bit at GPIOE_AFRH.B28;
    sbit  AFSEL151_GPIOE_AFRH_bit at GPIOE_AFRH.B29;
    sbit  AFSEL152_GPIOE_AFRH_bit at GPIOE_AFRH.B30;
    sbit  AFSEL153_GPIOE_AFRH_bit at GPIOE_AFRH.B31;
    sbit  AFSEL140_GPIOE_AFRH_bit at GPIOE_AFRH.B24;
    sbit  AFSEL141_GPIOE_AFRH_bit at GPIOE_AFRH.B25;
    sbit  AFSEL142_GPIOE_AFRH_bit at GPIOE_AFRH.B26;
    sbit  AFSEL143_GPIOE_AFRH_bit at GPIOE_AFRH.B27;
    sbit  AFSEL130_GPIOE_AFRH_bit at GPIOE_AFRH.B20;
    sbit  AFSEL131_GPIOE_AFRH_bit at GPIOE_AFRH.B21;
    sbit  AFSEL132_GPIOE_AFRH_bit at GPIOE_AFRH.B22;
    sbit  AFSEL133_GPIOE_AFRH_bit at GPIOE_AFRH.B23;
    sbit  AFSEL120_GPIOE_AFRH_bit at GPIOE_AFRH.B16;
    sbit  AFSEL121_GPIOE_AFRH_bit at GPIOE_AFRH.B17;
    sbit  AFSEL122_GPIOE_AFRH_bit at GPIOE_AFRH.B18;
    sbit  AFSEL123_GPIOE_AFRH_bit at GPIOE_AFRH.B19;
    sbit  AFSEL110_GPIOE_AFRH_bit at GPIOE_AFRH.B12;
    sbit  AFSEL111_GPIOE_AFRH_bit at GPIOE_AFRH.B13;
    sbit  AFSEL112_GPIOE_AFRH_bit at GPIOE_AFRH.B14;
    sbit  AFSEL113_GPIOE_AFRH_bit at GPIOE_AFRH.B15;
    sbit  AFSEL100_GPIOE_AFRH_bit at GPIOE_AFRH.B8;
    sbit  AFSEL101_GPIOE_AFRH_bit at GPIOE_AFRH.B9;
    sbit  AFSEL102_GPIOE_AFRH_bit at GPIOE_AFRH.B10;
    sbit  AFSEL103_GPIOE_AFRH_bit at GPIOE_AFRH.B11;
    sbit  AFSEL90_GPIOE_AFRH_bit at GPIOE_AFRH.B4;
    sbit  AFSEL91_GPIOE_AFRH_bit at GPIOE_AFRH.B5;
    sbit  AFSEL92_GPIOE_AFRH_bit at GPIOE_AFRH.B6;
    sbit  AFSEL93_GPIOE_AFRH_bit at GPIOE_AFRH.B7;
    sbit  AFSEL80_GPIOE_AFRH_bit at GPIOE_AFRH.B0;
    sbit  AFSEL81_GPIOE_AFRH_bit at GPIOE_AFRH.B1;
    sbit  AFSEL82_GPIOE_AFRH_bit at GPIOE_AFRH.B2;
    sbit  AFSEL83_GPIOE_AFRH_bit at GPIOE_AFRH.B3;

sfr far unsigned long   volatile GPIOE_BRR            absolute 0x50001028;
    sbit  BR15_GPIOE_BRR_bit at GPIOE_BRR.B15;
    sbit  BR14_GPIOE_BRR_bit at GPIOE_BRR.B14;
    sbit  BR13_GPIOE_BRR_bit at GPIOE_BRR.B13;
    sbit  BR12_GPIOE_BRR_bit at GPIOE_BRR.B12;
    sbit  BR11_GPIOE_BRR_bit at GPIOE_BRR.B11;
    sbit  BR10_GPIOE_BRR_bit at GPIOE_BRR.B10;
    sbit  BR9_GPIOE_BRR_bit at GPIOE_BRR.B9;
    sbit  BR8_GPIOE_BRR_bit at GPIOE_BRR.B8;
    sbit  BR7_GPIOE_BRR_bit at GPIOE_BRR.B7;
    sbit  BR6_GPIOE_BRR_bit at GPIOE_BRR.B6;
    sbit  BR5_GPIOE_BRR_bit at GPIOE_BRR.B5;
    sbit  BR4_GPIOE_BRR_bit at GPIOE_BRR.B4;
    sbit  BR3_GPIOE_BRR_bit at GPIOE_BRR.B3;
    sbit  BR2_GPIOE_BRR_bit at GPIOE_BRR.B2;
    sbit  BR1_GPIOE_BRR_bit at GPIOE_BRR.B1;
    sbit  BR0_GPIOE_BRR_bit at GPIOE_BRR.B0;

sfr unsigned long   volatile LPTIM_ISR            absolute 0x40007C00;
    const register unsigned short int DOWN = 6;
    sbit  DOWN_bit at LPTIM_ISR.B6;
    const register unsigned short int UP = 5;
    sbit  UP_bit at LPTIM_ISR.B5;
    const register unsigned short int ARROK = 4;
    sbit  ARROK_bit at LPTIM_ISR.B4;
    const register unsigned short int CMPOK = 3;
    sbit  CMPOK_bit at LPTIM_ISR.B3;
    const register unsigned short int EXTTRIG = 2;
    sbit  EXTTRIG_bit at LPTIM_ISR.B2;
    const register unsigned short int ARRM = 1;
    sbit  ARRM_bit at LPTIM_ISR.B1;
    const register unsigned short int CMPM = 0;
    sbit  CMPM_bit at LPTIM_ISR.B0;

sfr unsigned long   volatile LPTIM_ICR            absolute 0x40007C04;
    const register unsigned short int DOWNCF = 6;
    sbit  DOWNCF_bit at LPTIM_ICR.B6;
    const register unsigned short int UPCF = 5;
    sbit  UPCF_bit at LPTIM_ICR.B5;
    const register unsigned short int ARROKCF = 4;
    sbit  ARROKCF_bit at LPTIM_ICR.B4;
    const register unsigned short int CMPOKCF = 3;
    sbit  CMPOKCF_bit at LPTIM_ICR.B3;
    const register unsigned short int EXTTRIGCF = 2;
    sbit  EXTTRIGCF_bit at LPTIM_ICR.B2;
    const register unsigned short int ARRMCF = 1;
    sbit  ARRMCF_bit at LPTIM_ICR.B1;
    const register unsigned short int CMPMCF = 0;
    sbit  CMPMCF_bit at LPTIM_ICR.B0;

sfr unsigned long   volatile LPTIM_IER            absolute 0x40007C08;
    const register unsigned short int DOWNIE = 6;
    sbit  DOWNIE_bit at LPTIM_IER.B6;
    const register unsigned short int UPIE = 5;
    sbit  UPIE_bit at LPTIM_IER.B5;
    const register unsigned short int ARROKIE = 4;
    sbit  ARROKIE_bit at LPTIM_IER.B4;
    const register unsigned short int CMPOKIE = 3;
    sbit  CMPOKIE_bit at LPTIM_IER.B3;
    const register unsigned short int EXTTRIGIE = 2;
    sbit  EXTTRIGIE_bit at LPTIM_IER.B2;
    const register unsigned short int ARRMIE = 1;
    sbit  ARRMIE_bit at LPTIM_IER.B1;
    const register unsigned short int CMPMIE = 0;
    sbit  CMPMIE_bit at LPTIM_IER.B0;

sfr unsigned long   volatile LPTIM_CFGR           absolute 0x40007C0C;
    const register unsigned short int ENC = 24;
    sbit  ENC_bit at LPTIM_CFGR.B24;
    const register unsigned short int COUNTMODE = 23;
    sbit  COUNTMODE_bit at LPTIM_CFGR.B23;
    const register unsigned short int PRELOAD = 22;
    sbit  PRELOAD_bit at LPTIM_CFGR.B22;
    const register unsigned short int WAVPOL = 21;
    sbit  WAVPOL_bit at LPTIM_CFGR.B21;
    const register unsigned short int WAVE = 20;
    sbit  WAVE_bit at LPTIM_CFGR.B20;
    const register unsigned short int TIMOUT = 19;
    sbit  TIMOUT_bit at LPTIM_CFGR.B19;
    const register unsigned short int TRIGEN0 = 17;
    sbit  TRIGEN0_bit at LPTIM_CFGR.B17;
    const register unsigned short int TRIGEN1 = 18;
    sbit  TRIGEN1_bit at LPTIM_CFGR.B18;
    const register unsigned short int TRIGSEL0 = 13;
    sbit  TRIGSEL0_bit at LPTIM_CFGR.B13;
    const register unsigned short int TRIGSEL1 = 14;
    sbit  TRIGSEL1_bit at LPTIM_CFGR.B14;
    const register unsigned short int TRIGSEL2 = 15;
    sbit  TRIGSEL2_bit at LPTIM_CFGR.B15;
    const register unsigned short int PRESC0 = 9;
    sbit  PRESC0_bit at LPTIM_CFGR.B9;
    const register unsigned short int PRESC1 = 10;
    sbit  PRESC1_bit at LPTIM_CFGR.B10;
    const register unsigned short int PRESC2 = 11;
    sbit  PRESC2_bit at LPTIM_CFGR.B11;
    const register unsigned short int TRGFLT0 = 6;
    sbit  TRGFLT0_bit at LPTIM_CFGR.B6;
    const register unsigned short int TRGFLT1 = 7;
    sbit  TRGFLT1_bit at LPTIM_CFGR.B7;
    const register unsigned short int CKFLT0 = 3;
    sbit  CKFLT0_bit at LPTIM_CFGR.B3;
    const register unsigned short int CKFLT1 = 4;
    sbit  CKFLT1_bit at LPTIM_CFGR.B4;
    const register unsigned short int CKPOL0 = 1;
    sbit  CKPOL0_bit at LPTIM_CFGR.B1;
    const register unsigned short int CKPOL1 = 2;
    sbit  CKPOL1_bit at LPTIM_CFGR.B2;
    const register unsigned short int CKSEL = 0;
    sbit  CKSEL_bit at LPTIM_CFGR.B0;

sfr unsigned long   volatile LPTIM_CR             absolute 0x40007C10;
    const register unsigned short int CNTSTRT = 2;
    sbit  CNTSTRT_bit at LPTIM_CR.B2;
    const register unsigned short int SNGSTRT = 1;
    sbit  SNGSTRT_bit at LPTIM_CR.B1;
    const register unsigned short int ENABLE_ = 0;
    sbit  ENABLE_bit at LPTIM_CR.B0;

sfr unsigned long   volatile LPTIM_CMP            absolute 0x40007C14;
    const register unsigned short int CMP0 = 0;
    sbit  CMP0_bit at LPTIM_CMP.B0;
    const register unsigned short int CMP1 = 1;
    sbit  CMP1_bit at LPTIM_CMP.B1;
    const register unsigned short int CMP2 = 2;
    sbit  CMP2_bit at LPTIM_CMP.B2;
    const register unsigned short int CMP3 = 3;
    sbit  CMP3_bit at LPTIM_CMP.B3;
    const register unsigned short int CMP4 = 4;
    sbit  CMP4_bit at LPTIM_CMP.B4;
    const register unsigned short int CMP5 = 5;
    sbit  CMP5_bit at LPTIM_CMP.B5;
    const register unsigned short int CMP6 = 6;
    sbit  CMP6_bit at LPTIM_CMP.B6;
    const register unsigned short int CMP7 = 7;
    sbit  CMP7_bit at LPTIM_CMP.B7;
    const register unsigned short int CMP8 = 8;
    sbit  CMP8_bit at LPTIM_CMP.B8;
    const register unsigned short int CMP9 = 9;
    sbit  CMP9_bit at LPTIM_CMP.B9;
    const register unsigned short int CMP10 = 10;
    sbit  CMP10_bit at LPTIM_CMP.B10;
    const register unsigned short int CMP11 = 11;
    sbit  CMP11_bit at LPTIM_CMP.B11;
    const register unsigned short int CMP12 = 12;
    sbit  CMP12_bit at LPTIM_CMP.B12;
    const register unsigned short int CMP13 = 13;
    sbit  CMP13_bit at LPTIM_CMP.B13;
    const register unsigned short int CMP14 = 14;
    sbit  CMP14_bit at LPTIM_CMP.B14;
    const register unsigned short int CMP15 = 15;
    sbit  CMP15_bit at LPTIM_CMP.B15;

sfr unsigned long   volatile LPTIM_ARR            absolute 0x40007C18;
    const register unsigned short int ARR0 = 0;
    sbit  ARR0_bit at LPTIM_ARR.B0;
    const register unsigned short int ARR1 = 1;
    sbit  ARR1_bit at LPTIM_ARR.B1;
    const register unsigned short int ARR2 = 2;
    sbit  ARR2_bit at LPTIM_ARR.B2;
    const register unsigned short int ARR3 = 3;
    sbit  ARR3_bit at LPTIM_ARR.B3;
    const register unsigned short int ARR4 = 4;
    sbit  ARR4_bit at LPTIM_ARR.B4;
    const register unsigned short int ARR5 = 5;
    sbit  ARR5_bit at LPTIM_ARR.B5;
    const register unsigned short int ARR6 = 6;
    sbit  ARR6_bit at LPTIM_ARR.B6;
    const register unsigned short int ARR7 = 7;
    sbit  ARR7_bit at LPTIM_ARR.B7;
    const register unsigned short int ARR8 = 8;
    sbit  ARR8_bit at LPTIM_ARR.B8;
    const register unsigned short int ARR9 = 9;
    sbit  ARR9_bit at LPTIM_ARR.B9;
    const register unsigned short int ARR10 = 10;
    sbit  ARR10_bit at LPTIM_ARR.B10;
    const register unsigned short int ARR11 = 11;
    sbit  ARR11_bit at LPTIM_ARR.B11;
    const register unsigned short int ARR12 = 12;
    sbit  ARR12_bit at LPTIM_ARR.B12;
    const register unsigned short int ARR13 = 13;
    sbit  ARR13_bit at LPTIM_ARR.B13;
    const register unsigned short int ARR14 = 14;
    sbit  ARR14_bit at LPTIM_ARR.B14;
    const register unsigned short int ARR15 = 15;
    sbit  ARR15_bit at LPTIM_ARR.B15;

sfr unsigned long   volatile LPTIM_CNT            absolute 0x40007C1C;
    const register unsigned short int CNT0 = 0;
    sbit  CNT0_bit at LPTIM_CNT.B0;
    const register unsigned short int CNT1 = 1;
    sbit  CNT1_bit at LPTIM_CNT.B1;
    const register unsigned short int CNT2 = 2;
    sbit  CNT2_bit at LPTIM_CNT.B2;
    const register unsigned short int CNT3 = 3;
    sbit  CNT3_bit at LPTIM_CNT.B3;
    const register unsigned short int CNT4 = 4;
    sbit  CNT4_bit at LPTIM_CNT.B4;
    const register unsigned short int CNT5 = 5;
    sbit  CNT5_bit at LPTIM_CNT.B5;
    const register unsigned short int CNT6 = 6;
    sbit  CNT6_bit at LPTIM_CNT.B6;
    const register unsigned short int CNT7 = 7;
    sbit  CNT7_bit at LPTIM_CNT.B7;
    const register unsigned short int CNT8 = 8;
    sbit  CNT8_bit at LPTIM_CNT.B8;
    const register unsigned short int CNT9 = 9;
    sbit  CNT9_bit at LPTIM_CNT.B9;
    const register unsigned short int CNT10 = 10;
    sbit  CNT10_bit at LPTIM_CNT.B10;
    const register unsigned short int CNT11 = 11;
    sbit  CNT11_bit at LPTIM_CNT.B11;
    const register unsigned short int CNT12 = 12;
    sbit  CNT12_bit at LPTIM_CNT.B12;
    const register unsigned short int CNT13 = 13;
    sbit  CNT13_bit at LPTIM_CNT.B13;
    const register unsigned short int CNT14 = 14;
    sbit  CNT14_bit at LPTIM_CNT.B14;
    const register unsigned short int CNT15 = 15;
    sbit  CNT15_bit at LPTIM_CNT.B15;

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

sfr unsigned long   volatile RTC_CR               absolute 0x40002808;
    const register unsigned short int COE = 23;
    sbit  COE_bit at RTC_CR.B23;
    const register unsigned short int OSEL0 = 21;
    sbit  OSEL0_bit at RTC_CR.B21;
    const register unsigned short int OSEL1 = 22;
    sbit  OSEL1_bit at RTC_CR.B22;
    const register unsigned short int POL = 20;
    sbit  POL_bit at RTC_CR.B20;
    const register unsigned short int COSEL = 19;
    sbit  COSEL_bit at RTC_CR.B19;
    const register unsigned short int BKP = 18;
    sbit  BKP_bit at RTC_CR.B18;
    const register unsigned short int SUB1H = 17;
    sbit  SUB1H_bit at RTC_CR.B17;
    const register unsigned short int ADD1H = 16;
    sbit  ADD1H_bit at RTC_CR.B16;
    const register unsigned short int TSIE = 15;
    sbit  TSIE_bit at RTC_CR.B15;
    const register unsigned short int WUTIE = 14;
    sbit  WUTIE_bit at RTC_CR.B14;
    const register unsigned short int ALRBIE = 13;
    sbit  ALRBIE_bit at RTC_CR.B13;
    const register unsigned short int ALRAIE = 12;
    sbit  ALRAIE_bit at RTC_CR.B12;
    const register unsigned short int TSE = 11;
    sbit  TSE_bit at RTC_CR.B11;
    const register unsigned short int WUTE = 10;
    sbit  WUTE_bit at RTC_CR.B10;
    const register unsigned short int ALRBE = 9;
    sbit  ALRBE_bit at RTC_CR.B9;
    const register unsigned short int ALRAE = 8;
    sbit  ALRAE_bit at RTC_CR.B8;
    const register unsigned short int FMT = 6;
    sbit  FMT_bit at RTC_CR.B6;
    const register unsigned short int BYPSHAD = 5;
    sbit  BYPSHAD_bit at RTC_CR.B5;
    const register unsigned short int REFCKON = 4;
    sbit  REFCKON_bit at RTC_CR.B4;
    const register unsigned short int TSEDGE = 3;
    sbit  TSEDGE_bit at RTC_CR.B3;
    const register unsigned short int WUCKSEL0 = 0;
    sbit  WUCKSEL0_bit at RTC_CR.B0;
    const register unsigned short int WUCKSEL1 = 1;
    sbit  WUCKSEL1_bit at RTC_CR.B1;
    const register unsigned short int WUCKSEL2 = 2;
    sbit  WUCKSEL2_bit at RTC_CR.B2;

sfr unsigned long   volatile RTC_ISR              absolute 0x4000280C;
    const register unsigned short int TAMP2F = 14;
    sbit  TAMP2F_bit at RTC_ISR.B14;
    const register unsigned short int TAMP1F = 13;
    sbit  TAMP1F_bit at RTC_ISR.B13;
    const register unsigned short int TSOVF = 12;
    sbit  TSOVF_bit at RTC_ISR.B12;
    const register unsigned short int TSF = 11;
    sbit  TSF_bit at RTC_ISR.B11;
    const register unsigned short int WUTF = 10;
    sbit  WUTF_bit at RTC_ISR.B10;
    const register unsigned short int ALRBF = 9;
    sbit  ALRBF_bit at RTC_ISR.B9;
    const register unsigned short int ALRAF = 8;
    sbit  ALRAF_bit at RTC_ISR.B8;
    const register unsigned short int INIT = 7;
    sbit  INIT_bit at RTC_ISR.B7;
    const register unsigned short int INITF = 6;
    sbit  INITF_bit at RTC_ISR.B6;
    const register unsigned short int RSF = 5;
    sbit  RSF_bit at RTC_ISR.B5;
    const register unsigned short int INITS = 4;
    sbit  INITS_bit at RTC_ISR.B4;
    const register unsigned short int SHPF = 3;
    sbit  SHPF_bit at RTC_ISR.B3;
    const register unsigned short int WUTWF = 2;
    sbit  WUTWF_bit at RTC_ISR.B2;
    const register unsigned short int ALRBWF = 1;
    sbit  ALRBWF_bit at RTC_ISR.B1;
    const register unsigned short int ALRAWF = 0;
    sbit  ALRAWF_bit at RTC_ISR.B0;

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
    const register unsigned short int PREDIV_S15 = 15;
    sbit  PREDIV_S15_bit at RTC_PRER.B15;

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

sfr unsigned long   volatile RTC_ALRMBR           absolute 0x40002820;
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

sfr unsigned long   volatile RTC_WPR              absolute 0x40002824;
    const register unsigned short int KEY0 = 0;
    sbit  KEY0_bit at RTC_WPR.B0;
    const register unsigned short int KEY1 = 1;
    sbit  KEY1_bit at RTC_WPR.B1;
    const register unsigned short int KEY2 = 2;
    sbit  KEY2_bit at RTC_WPR.B2;
    const register unsigned short int KEY3 = 3;
    sbit  KEY3_bit at RTC_WPR.B3;
    const register unsigned short int KEY4 = 4;
    sbit  KEY4_bit at RTC_WPR.B4;
    const register unsigned short int KEY5 = 5;
    sbit  KEY5_bit at RTC_WPR.B5;
    const register unsigned short int KEY6 = 6;
    sbit  KEY6_bit at RTC_WPR.B6;
    const register unsigned short int KEY7 = 7;
    sbit  KEY7_bit at RTC_WPR.B7;

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

sfr unsigned long   volatile RTC_TAMPCR           absolute 0x40002840;
    const register unsigned short int TAMP2MF = 21;
    sbit  TAMP2MF_bit at RTC_TAMPCR.B21;
    const register unsigned short int TAMP2NOERASE = 20;
    sbit  TAMP2NOERASE_bit at RTC_TAMPCR.B20;
    const register unsigned short int TAMP2IE = 19;
    sbit  TAMP2IE_bit at RTC_TAMPCR.B19;
    const register unsigned short int TAMP1MF = 18;
    sbit  TAMP1MF_bit at RTC_TAMPCR.B18;
    const register unsigned short int TAMP1NOERASE = 17;
    sbit  TAMP1NOERASE_bit at RTC_TAMPCR.B17;
    const register unsigned short int TAMP1IE = 16;
    sbit  TAMP1IE_bit at RTC_TAMPCR.B16;
    const register unsigned short int TAMPPUDIS = 15;
    sbit  TAMPPUDIS_bit at RTC_TAMPCR.B15;
    const register unsigned short int TAMPPRCH0 = 13;
    sbit  TAMPPRCH0_bit at RTC_TAMPCR.B13;
    const register unsigned short int TAMPPRCH1 = 14;
    sbit  TAMPPRCH1_bit at RTC_TAMPCR.B14;
    const register unsigned short int TAMPFLT0 = 11;
    sbit  TAMPFLT0_bit at RTC_TAMPCR.B11;
    const register unsigned short int TAMPFLT1 = 12;
    sbit  TAMPFLT1_bit at RTC_TAMPCR.B12;
    const register unsigned short int TAMPFREQ0 = 8;
    sbit  TAMPFREQ0_bit at RTC_TAMPCR.B8;
    const register unsigned short int TAMPFREQ1 = 9;
    sbit  TAMPFREQ1_bit at RTC_TAMPCR.B9;
    const register unsigned short int TAMPFREQ2 = 10;
    sbit  TAMPFREQ2_bit at RTC_TAMPCR.B10;
    const register unsigned short int TAMPTS = 7;
    sbit  TAMPTS_bit at RTC_TAMPCR.B7;
    const register unsigned short int TAMP2_TRG = 4;
    sbit  TAMP2_TRG_bit at RTC_TAMPCR.B4;
    const register unsigned short int TAMP2E = 3;
    sbit  TAMP2E_bit at RTC_TAMPCR.B3;
    const register unsigned short int TAMPIE = 2;
    sbit  TAMPIE_bit at RTC_TAMPCR.B2;
    const register unsigned short int TAMP1TRG = 1;
    sbit  TAMP1TRG_bit at RTC_TAMPCR.B1;
    const register unsigned short int TAMP1E = 0;
    sbit  TAMP1E_bit at RTC_TAMPCR.B0;

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

sfr unsigned long   volatile RTC_ALRMBSSR         absolute 0x40002848;
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

sfr unsigned long   volatile RTC_OR               absolute 0x4000284C;
    const register unsigned short int RTC_OUT_RMP = 1;
    sbit  RTC_OUT_RMP_bit at RTC_OR.B1;
    const register unsigned short int RTC_ALARM_TYPE = 0;
    sbit  RTC_ALARM_TYPE_bit at RTC_OR.B0;

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

sfr unsigned long   volatile USART1_CR1           absolute 0x40013800;
    const register unsigned short int M1 = 28;
    sbit  M1_bit at USART1_CR1.B28;
    const register unsigned short int EOBIE = 27;
    sbit  EOBIE_bit at USART1_CR1.B27;
    const register unsigned short int RTOIE = 26;
    sbit  RTOIE_bit at USART1_CR1.B26;
    const register unsigned short int DEAT4 = 25;
    sbit  DEAT4_bit at USART1_CR1.B25;
    const register unsigned short int DEAT3 = 24;
    sbit  DEAT3_bit at USART1_CR1.B24;
    const register unsigned short int DEAT2 = 23;
    sbit  DEAT2_bit at USART1_CR1.B23;
    const register unsigned short int DEAT1 = 22;
    sbit  DEAT1_bit at USART1_CR1.B22;
    const register unsigned short int DEAT0 = 21;
    sbit  DEAT0_bit at USART1_CR1.B21;
    const register unsigned short int DEDT4 = 20;
    sbit  DEDT4_bit at USART1_CR1.B20;
    const register unsigned short int DEDT3 = 19;
    sbit  DEDT3_bit at USART1_CR1.B19;
    const register unsigned short int DEDT2 = 18;
    sbit  DEDT2_bit at USART1_CR1.B18;
    const register unsigned short int DEDT1 = 17;
    sbit  DEDT1_bit at USART1_CR1.B17;
    const register unsigned short int DEDT0 = 16;
    sbit  DEDT0_bit at USART1_CR1.B16;
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
    const register unsigned short int ABRMOD1 = 22;
    sbit  ABRMOD1_bit at USART1_CR2.B22;
    const register unsigned short int ABRMOD0 = 21;
    sbit  ABRMOD0_bit at USART1_CR2.B21;
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
    const register unsigned short int PSC0 = 0;
    sbit  PSC0_bit at USART1_GTPR.B0;
    const register unsigned short int PSC1 = 1;
    sbit  PSC1_bit at USART1_GTPR.B1;
    const register unsigned short int PSC2 = 2;
    sbit  PSC2_bit at USART1_GTPR.B2;
    const register unsigned short int PSC3 = 3;
    sbit  PSC3_bit at USART1_GTPR.B3;
    const register unsigned short int PSC4 = 4;
    sbit  PSC4_bit at USART1_GTPR.B4;
    const register unsigned short int PSC5 = 5;
    sbit  PSC5_bit at USART1_GTPR.B5;
    const register unsigned short int PSC6 = 6;
    sbit  PSC6_bit at USART1_GTPR.B6;
    const register unsigned short int PSC7 = 7;
    sbit  PSC7_bit at USART1_GTPR.B7;

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
    sbit  M1_USART2_CR1_bit at USART2_CR1.B28;
    sbit  EOBIE_USART2_CR1_bit at USART2_CR1.B27;
    sbit  RTOIE_USART2_CR1_bit at USART2_CR1.B26;
    sbit  DEAT4_USART2_CR1_bit at USART2_CR1.B25;
    sbit  DEAT3_USART2_CR1_bit at USART2_CR1.B24;
    sbit  DEAT2_USART2_CR1_bit at USART2_CR1.B23;
    sbit  DEAT1_USART2_CR1_bit at USART2_CR1.B22;
    sbit  DEAT0_USART2_CR1_bit at USART2_CR1.B21;
    sbit  DEDT4_USART2_CR1_bit at USART2_CR1.B20;
    sbit  DEDT3_USART2_CR1_bit at USART2_CR1.B19;
    sbit  DEDT2_USART2_CR1_bit at USART2_CR1.B18;
    sbit  DEDT1_USART2_CR1_bit at USART2_CR1.B17;
    sbit  DEDT0_USART2_CR1_bit at USART2_CR1.B16;
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
    sbit  ABRMOD1_USART2_CR2_bit at USART2_CR2.B22;
    sbit  ABRMOD0_USART2_CR2_bit at USART2_CR2.B21;
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

sfr unsigned long   volatile USART4_CR1           absolute 0x40004C00;
    sbit  M1_USART4_CR1_bit at USART4_CR1.B28;
    sbit  EOBIE_USART4_CR1_bit at USART4_CR1.B27;
    sbit  RTOIE_USART4_CR1_bit at USART4_CR1.B26;
    sbit  DEAT4_USART4_CR1_bit at USART4_CR1.B25;
    sbit  DEAT3_USART4_CR1_bit at USART4_CR1.B24;
    sbit  DEAT2_USART4_CR1_bit at USART4_CR1.B23;
    sbit  DEAT1_USART4_CR1_bit at USART4_CR1.B22;
    sbit  DEAT0_USART4_CR1_bit at USART4_CR1.B21;
    sbit  DEDT4_USART4_CR1_bit at USART4_CR1.B20;
    sbit  DEDT3_USART4_CR1_bit at USART4_CR1.B19;
    sbit  DEDT2_USART4_CR1_bit at USART4_CR1.B18;
    sbit  DEDT1_USART4_CR1_bit at USART4_CR1.B17;
    sbit  DEDT0_USART4_CR1_bit at USART4_CR1.B16;
    sbit  OVER8_USART4_CR1_bit at USART4_CR1.B15;
    sbit  CMIE_USART4_CR1_bit at USART4_CR1.B14;
    sbit  MME_USART4_CR1_bit at USART4_CR1.B13;
    sbit  M0_USART4_CR1_bit at USART4_CR1.B12;
    sbit  WAKE_USART4_CR1_bit at USART4_CR1.B11;
    sbit  PCE_USART4_CR1_bit at USART4_CR1.B10;
    sbit  PS_USART4_CR1_bit at USART4_CR1.B9;
    sbit  PEIE_USART4_CR1_bit at USART4_CR1.B8;
    sbit  TXEIE_USART4_CR1_bit at USART4_CR1.B7;
    sbit  TCIE_USART4_CR1_bit at USART4_CR1.B6;
    sbit  RXNEIE_USART4_CR1_bit at USART4_CR1.B5;
    sbit  IDLEIE_USART4_CR1_bit at USART4_CR1.B4;
    sbit  TE_USART4_CR1_bit at USART4_CR1.B3;
    sbit  RE_USART4_CR1_bit at USART4_CR1.B2;
    sbit  UESM_USART4_CR1_bit at USART4_CR1.B1;
    sbit  UE_USART4_CR1_bit at USART4_CR1.B0;

sfr unsigned long   volatile USART4_CR2           absolute 0x40004C04;
    sbit  ADD4_70_USART4_CR2_bit at USART4_CR2.B28;
    sbit  ADD4_71_USART4_CR2_bit at USART4_CR2.B29;
    sbit  ADD4_72_USART4_CR2_bit at USART4_CR2.B30;
    sbit  ADD4_73_USART4_CR2_bit at USART4_CR2.B31;
    sbit  ADD0_30_USART4_CR2_bit at USART4_CR2.B24;
    sbit  ADD0_31_USART4_CR2_bit at USART4_CR2.B25;
    sbit  ADD0_32_USART4_CR2_bit at USART4_CR2.B26;
    sbit  ADD0_33_USART4_CR2_bit at USART4_CR2.B27;
    sbit  RTOEN_USART4_CR2_bit at USART4_CR2.B23;
    sbit  ABRMOD1_USART4_CR2_bit at USART4_CR2.B22;
    sbit  ABRMOD0_USART4_CR2_bit at USART4_CR2.B21;
    sbit  ABREN_USART4_CR2_bit at USART4_CR2.B20;
    sbit  MSBFIRST_USART4_CR2_bit at USART4_CR2.B19;
    sbit  TAINV_USART4_CR2_bit at USART4_CR2.B18;
    sbit  TXINV_USART4_CR2_bit at USART4_CR2.B17;
    sbit  RXINV_USART4_CR2_bit at USART4_CR2.B16;
    sbit  SWAP_USART4_CR2_bit at USART4_CR2.B15;
    sbit  LINEN_USART4_CR2_bit at USART4_CR2.B14;
    sbit  STOP0_USART4_CR2_bit at USART4_CR2.B12;
    sbit  STOP1_USART4_CR2_bit at USART4_CR2.B13;
    sbit  CLKEN_USART4_CR2_bit at USART4_CR2.B11;
    sbit  CPOL_USART4_CR2_bit at USART4_CR2.B10;
    sbit  CPHA_USART4_CR2_bit at USART4_CR2.B9;
    sbit  LBCL_USART4_CR2_bit at USART4_CR2.B8;
    sbit  LBDIE_USART4_CR2_bit at USART4_CR2.B6;
    sbit  LBDL_USART4_CR2_bit at USART4_CR2.B5;
    sbit  ADDM7_USART4_CR2_bit at USART4_CR2.B4;

sfr unsigned long   volatile USART4_CR3           absolute 0x40004C08;
    sbit  WUFIE_USART4_CR3_bit at USART4_CR3.B22;
    sbit  WUS0_USART4_CR3_bit at USART4_CR3.B20;
    sbit  WUS1_USART4_CR3_bit at USART4_CR3.B21;
    sbit  SCARCNT0_USART4_CR3_bit at USART4_CR3.B17;
    sbit  SCARCNT1_USART4_CR3_bit at USART4_CR3.B18;
    sbit  SCARCNT2_USART4_CR3_bit at USART4_CR3.B19;
    sbit  DEP_USART4_CR3_bit at USART4_CR3.B15;
    sbit  DEM_USART4_CR3_bit at USART4_CR3.B14;
    sbit  DDRE_USART4_CR3_bit at USART4_CR3.B13;
    sbit  OVRDIS_USART4_CR3_bit at USART4_CR3.B12;
    sbit  ONEBIT_USART4_CR3_bit at USART4_CR3.B11;
    sbit  CTSIE_USART4_CR3_bit at USART4_CR3.B10;
    sbit  CTSE_USART4_CR3_bit at USART4_CR3.B9;
    sbit  RTSE_USART4_CR3_bit at USART4_CR3.B8;
    sbit  DMAT_USART4_CR3_bit at USART4_CR3.B7;
    sbit  DMAR_USART4_CR3_bit at USART4_CR3.B6;
    sbit  SCEN_USART4_CR3_bit at USART4_CR3.B5;
    sbit  NACK_USART4_CR3_bit at USART4_CR3.B4;
    sbit  HDSEL_USART4_CR3_bit at USART4_CR3.B3;
    sbit  IRLP_USART4_CR3_bit at USART4_CR3.B2;
    sbit  IREN_USART4_CR3_bit at USART4_CR3.B1;
    sbit  EIE_USART4_CR3_bit at USART4_CR3.B0;

sfr unsigned long   volatile USART4_BRR           absolute 0x40004C0C;
    sbit  DIV_Mantissa0_USART4_BRR_bit at USART4_BRR.B4;
    sbit  DIV_Mantissa1_USART4_BRR_bit at USART4_BRR.B5;
    sbit  DIV_Mantissa2_USART4_BRR_bit at USART4_BRR.B6;
    sbit  DIV_Mantissa3_USART4_BRR_bit at USART4_BRR.B7;
    sbit  DIV_Mantissa4_USART4_BRR_bit at USART4_BRR.B8;
    sbit  DIV_Mantissa5_USART4_BRR_bit at USART4_BRR.B9;
    sbit  DIV_Mantissa6_USART4_BRR_bit at USART4_BRR.B10;
    sbit  DIV_Mantissa7_USART4_BRR_bit at USART4_BRR.B11;
    sbit  DIV_Mantissa8_USART4_BRR_bit at USART4_BRR.B12;
    sbit  DIV_Mantissa9_USART4_BRR_bit at USART4_BRR.B13;
    sbit  DIV_Mantissa10_USART4_BRR_bit at USART4_BRR.B14;
    sbit  DIV_Mantissa11_USART4_BRR_bit at USART4_BRR.B15;
    sbit  DIV_Fraction0_USART4_BRR_bit at USART4_BRR.B0;
    sbit  DIV_Fraction1_USART4_BRR_bit at USART4_BRR.B1;
    sbit  DIV_Fraction2_USART4_BRR_bit at USART4_BRR.B2;
    sbit  DIV_Fraction3_USART4_BRR_bit at USART4_BRR.B3;

sfr unsigned long   volatile USART4_GTPR          absolute 0x40004C10;
    sbit  GT0_USART4_GTPR_bit at USART4_GTPR.B8;
    sbit  GT1_USART4_GTPR_bit at USART4_GTPR.B9;
    sbit  GT2_USART4_GTPR_bit at USART4_GTPR.B10;
    sbit  GT3_USART4_GTPR_bit at USART4_GTPR.B11;
    sbit  GT4_USART4_GTPR_bit at USART4_GTPR.B12;
    sbit  GT5_USART4_GTPR_bit at USART4_GTPR.B13;
    sbit  GT6_USART4_GTPR_bit at USART4_GTPR.B14;
    sbit  GT7_USART4_GTPR_bit at USART4_GTPR.B15;
    sbit  PSC0_USART4_GTPR_bit at USART4_GTPR.B0;
    sbit  PSC1_USART4_GTPR_bit at USART4_GTPR.B1;
    sbit  PSC2_USART4_GTPR_bit at USART4_GTPR.B2;
    sbit  PSC3_USART4_GTPR_bit at USART4_GTPR.B3;
    sbit  PSC4_USART4_GTPR_bit at USART4_GTPR.B4;
    sbit  PSC5_USART4_GTPR_bit at USART4_GTPR.B5;
    sbit  PSC6_USART4_GTPR_bit at USART4_GTPR.B6;
    sbit  PSC7_USART4_GTPR_bit at USART4_GTPR.B7;

sfr unsigned long   volatile USART4_RTOR          absolute 0x40004C14;
    sbit  BLEN0_USART4_RTOR_bit at USART4_RTOR.B24;
    sbit  BLEN1_USART4_RTOR_bit at USART4_RTOR.B25;
    sbit  BLEN2_USART4_RTOR_bit at USART4_RTOR.B26;
    sbit  BLEN3_USART4_RTOR_bit at USART4_RTOR.B27;
    sbit  BLEN4_USART4_RTOR_bit at USART4_RTOR.B28;
    sbit  BLEN5_USART4_RTOR_bit at USART4_RTOR.B29;
    sbit  BLEN6_USART4_RTOR_bit at USART4_RTOR.B30;
    sbit  BLEN7_USART4_RTOR_bit at USART4_RTOR.B31;
    sbit  RTO0_USART4_RTOR_bit at USART4_RTOR.B0;
    sbit  RTO1_USART4_RTOR_bit at USART4_RTOR.B1;
    sbit  RTO2_USART4_RTOR_bit at USART4_RTOR.B2;
    sbit  RTO3_USART4_RTOR_bit at USART4_RTOR.B3;
    sbit  RTO4_USART4_RTOR_bit at USART4_RTOR.B4;
    sbit  RTO5_USART4_RTOR_bit at USART4_RTOR.B5;
    sbit  RTO6_USART4_RTOR_bit at USART4_RTOR.B6;
    sbit  RTO7_USART4_RTOR_bit at USART4_RTOR.B7;
    sbit  RTO8_USART4_RTOR_bit at USART4_RTOR.B8;
    sbit  RTO9_USART4_RTOR_bit at USART4_RTOR.B9;
    sbit  RTO10_USART4_RTOR_bit at USART4_RTOR.B10;
    sbit  RTO11_USART4_RTOR_bit at USART4_RTOR.B11;
    sbit  RTO12_USART4_RTOR_bit at USART4_RTOR.B12;
    sbit  RTO13_USART4_RTOR_bit at USART4_RTOR.B13;
    sbit  RTO14_USART4_RTOR_bit at USART4_RTOR.B14;
    sbit  RTO15_USART4_RTOR_bit at USART4_RTOR.B15;
    sbit  RTO16_USART4_RTOR_bit at USART4_RTOR.B16;
    sbit  RTO17_USART4_RTOR_bit at USART4_RTOR.B17;
    sbit  RTO18_USART4_RTOR_bit at USART4_RTOR.B18;
    sbit  RTO19_USART4_RTOR_bit at USART4_RTOR.B19;
    sbit  RTO20_USART4_RTOR_bit at USART4_RTOR.B20;
    sbit  RTO21_USART4_RTOR_bit at USART4_RTOR.B21;
    sbit  RTO22_USART4_RTOR_bit at USART4_RTOR.B22;
    sbit  RTO23_USART4_RTOR_bit at USART4_RTOR.B23;

sfr unsigned long   volatile USART4_RQR           absolute 0x40004C18;
    sbit  TXFRQ_USART4_RQR_bit at USART4_RQR.B4;
    sbit  RXFRQ_USART4_RQR_bit at USART4_RQR.B3;
    sbit  MMRQ_USART4_RQR_bit at USART4_RQR.B2;
    sbit  SBKRQ_USART4_RQR_bit at USART4_RQR.B1;
    sbit  ABRRQ_USART4_RQR_bit at USART4_RQR.B0;

sfr unsigned long   volatile USART4_ISR           absolute 0x40004C1C;
    sbit  REACK_USART4_ISR_bit at USART4_ISR.B22;
    sbit  TEACK_USART4_ISR_bit at USART4_ISR.B21;
    sbit  WUF_USART4_ISR_bit at USART4_ISR.B20;
    sbit  RWU_USART4_ISR_bit at USART4_ISR.B19;
    sbit  SBKF_USART4_ISR_bit at USART4_ISR.B18;
    sbit  CMF_USART4_ISR_bit at USART4_ISR.B17;
    sbit  BUSY_USART4_ISR_bit at USART4_ISR.B16;
    sbit  ABRF_USART4_ISR_bit at USART4_ISR.B15;
    sbit  ABRE_USART4_ISR_bit at USART4_ISR.B14;
    sbit  EOBF_USART4_ISR_bit at USART4_ISR.B12;
    sbit  RTOF_USART4_ISR_bit at USART4_ISR.B11;
    sbit  CTS_USART4_ISR_bit at USART4_ISR.B10;
    sbit  CTSIF_USART4_ISR_bit at USART4_ISR.B9;
    sbit  LBDF_USART4_ISR_bit at USART4_ISR.B8;
    sbit  TXE_USART4_ISR_bit at USART4_ISR.B7;
    sbit  TC_USART4_ISR_bit at USART4_ISR.B6;
    sbit  RXNE_USART4_ISR_bit at USART4_ISR.B5;
    sbit  IDLE_USART4_ISR_bit at USART4_ISR.B4;
    sbit  ORE_USART4_ISR_bit at USART4_ISR.B3;
    sbit  NF_USART4_ISR_bit at USART4_ISR.B2;
    sbit  FE_USART4_ISR_bit at USART4_ISR.B1;
    sbit  PE_USART4_ISR_bit at USART4_ISR.B0;

sfr unsigned long   volatile USART4_ICR           absolute 0x40004C20;
    sbit  WUCF_USART4_ICR_bit at USART4_ICR.B20;
    sbit  CMCF_USART4_ICR_bit at USART4_ICR.B17;
    sbit  EOBCF_USART4_ICR_bit at USART4_ICR.B12;
    sbit  RTOCF_USART4_ICR_bit at USART4_ICR.B11;
    sbit  CTSCF_USART4_ICR_bit at USART4_ICR.B9;
    sbit  LBDCF_USART4_ICR_bit at USART4_ICR.B8;
    sbit  TCCF_USART4_ICR_bit at USART4_ICR.B6;
    sbit  IDLECF_USART4_ICR_bit at USART4_ICR.B4;
    sbit  ORECF_USART4_ICR_bit at USART4_ICR.B3;
    sbit  NCF_USART4_ICR_bit at USART4_ICR.B2;
    sbit  FECF_USART4_ICR_bit at USART4_ICR.B1;
    sbit  PECF_USART4_ICR_bit at USART4_ICR.B0;

sfr unsigned long   volatile USART4_RDR           absolute 0x40004C24;
    sbit  RDR0_USART4_RDR_bit at USART4_RDR.B0;
    sbit  RDR1_USART4_RDR_bit at USART4_RDR.B1;
    sbit  RDR2_USART4_RDR_bit at USART4_RDR.B2;
    sbit  RDR3_USART4_RDR_bit at USART4_RDR.B3;
    sbit  RDR4_USART4_RDR_bit at USART4_RDR.B4;
    sbit  RDR5_USART4_RDR_bit at USART4_RDR.B5;
    sbit  RDR6_USART4_RDR_bit at USART4_RDR.B6;
    sbit  RDR7_USART4_RDR_bit at USART4_RDR.B7;
    sbit  RDR8_USART4_RDR_bit at USART4_RDR.B8;

sfr unsigned long   volatile USART4_TDR           absolute 0x40004C28;
    sbit  TDR0_USART4_TDR_bit at USART4_TDR.B0;
    sbit  TDR1_USART4_TDR_bit at USART4_TDR.B1;
    sbit  TDR2_USART4_TDR_bit at USART4_TDR.B2;
    sbit  TDR3_USART4_TDR_bit at USART4_TDR.B3;
    sbit  TDR4_USART4_TDR_bit at USART4_TDR.B4;
    sbit  TDR5_USART4_TDR_bit at USART4_TDR.B5;
    sbit  TDR6_USART4_TDR_bit at USART4_TDR.B6;
    sbit  TDR7_USART4_TDR_bit at USART4_TDR.B7;
    sbit  TDR8_USART4_TDR_bit at USART4_TDR.B8;

sfr unsigned long   volatile USART5_CR1           absolute 0x40005000;
    sbit  M1_USART5_CR1_bit at USART5_CR1.B28;
    sbit  EOBIE_USART5_CR1_bit at USART5_CR1.B27;
    sbit  RTOIE_USART5_CR1_bit at USART5_CR1.B26;
    sbit  DEAT4_USART5_CR1_bit at USART5_CR1.B25;
    sbit  DEAT3_USART5_CR1_bit at USART5_CR1.B24;
    sbit  DEAT2_USART5_CR1_bit at USART5_CR1.B23;
    sbit  DEAT1_USART5_CR1_bit at USART5_CR1.B22;
    sbit  DEAT0_USART5_CR1_bit at USART5_CR1.B21;
    sbit  DEDT4_USART5_CR1_bit at USART5_CR1.B20;
    sbit  DEDT3_USART5_CR1_bit at USART5_CR1.B19;
    sbit  DEDT2_USART5_CR1_bit at USART5_CR1.B18;
    sbit  DEDT1_USART5_CR1_bit at USART5_CR1.B17;
    sbit  DEDT0_USART5_CR1_bit at USART5_CR1.B16;
    sbit  OVER8_USART5_CR1_bit at USART5_CR1.B15;
    sbit  CMIE_USART5_CR1_bit at USART5_CR1.B14;
    sbit  MME_USART5_CR1_bit at USART5_CR1.B13;
    sbit  M0_USART5_CR1_bit at USART5_CR1.B12;
    sbit  WAKE_USART5_CR1_bit at USART5_CR1.B11;
    sbit  PCE_USART5_CR1_bit at USART5_CR1.B10;
    sbit  PS_USART5_CR1_bit at USART5_CR1.B9;
    sbit  PEIE_USART5_CR1_bit at USART5_CR1.B8;
    sbit  TXEIE_USART5_CR1_bit at USART5_CR1.B7;
    sbit  TCIE_USART5_CR1_bit at USART5_CR1.B6;
    sbit  RXNEIE_USART5_CR1_bit at USART5_CR1.B5;
    sbit  IDLEIE_USART5_CR1_bit at USART5_CR1.B4;
    sbit  TE_USART5_CR1_bit at USART5_CR1.B3;
    sbit  RE_USART5_CR1_bit at USART5_CR1.B2;
    sbit  UESM_USART5_CR1_bit at USART5_CR1.B1;
    sbit  UE_USART5_CR1_bit at USART5_CR1.B0;

sfr unsigned long   volatile USART5_CR2           absolute 0x40005004;
    sbit  ADD4_70_USART5_CR2_bit at USART5_CR2.B28;
    sbit  ADD4_71_USART5_CR2_bit at USART5_CR2.B29;
    sbit  ADD4_72_USART5_CR2_bit at USART5_CR2.B30;
    sbit  ADD4_73_USART5_CR2_bit at USART5_CR2.B31;
    sbit  ADD0_30_USART5_CR2_bit at USART5_CR2.B24;
    sbit  ADD0_31_USART5_CR2_bit at USART5_CR2.B25;
    sbit  ADD0_32_USART5_CR2_bit at USART5_CR2.B26;
    sbit  ADD0_33_USART5_CR2_bit at USART5_CR2.B27;
    sbit  RTOEN_USART5_CR2_bit at USART5_CR2.B23;
    sbit  ABRMOD1_USART5_CR2_bit at USART5_CR2.B22;
    sbit  ABRMOD0_USART5_CR2_bit at USART5_CR2.B21;
    sbit  ABREN_USART5_CR2_bit at USART5_CR2.B20;
    sbit  MSBFIRST_USART5_CR2_bit at USART5_CR2.B19;
    sbit  TAINV_USART5_CR2_bit at USART5_CR2.B18;
    sbit  TXINV_USART5_CR2_bit at USART5_CR2.B17;
    sbit  RXINV_USART5_CR2_bit at USART5_CR2.B16;
    sbit  SWAP_USART5_CR2_bit at USART5_CR2.B15;
    sbit  LINEN_USART5_CR2_bit at USART5_CR2.B14;
    sbit  STOP0_USART5_CR2_bit at USART5_CR2.B12;
    sbit  STOP1_USART5_CR2_bit at USART5_CR2.B13;
    sbit  CLKEN_USART5_CR2_bit at USART5_CR2.B11;
    sbit  CPOL_USART5_CR2_bit at USART5_CR2.B10;
    sbit  CPHA_USART5_CR2_bit at USART5_CR2.B9;
    sbit  LBCL_USART5_CR2_bit at USART5_CR2.B8;
    sbit  LBDIE_USART5_CR2_bit at USART5_CR2.B6;
    sbit  LBDL_USART5_CR2_bit at USART5_CR2.B5;
    sbit  ADDM7_USART5_CR2_bit at USART5_CR2.B4;

sfr unsigned long   volatile USART5_CR3           absolute 0x40005008;
    sbit  WUFIE_USART5_CR3_bit at USART5_CR3.B22;
    sbit  WUS0_USART5_CR3_bit at USART5_CR3.B20;
    sbit  WUS1_USART5_CR3_bit at USART5_CR3.B21;
    sbit  SCARCNT0_USART5_CR3_bit at USART5_CR3.B17;
    sbit  SCARCNT1_USART5_CR3_bit at USART5_CR3.B18;
    sbit  SCARCNT2_USART5_CR3_bit at USART5_CR3.B19;
    sbit  DEP_USART5_CR3_bit at USART5_CR3.B15;
    sbit  DEM_USART5_CR3_bit at USART5_CR3.B14;
    sbit  DDRE_USART5_CR3_bit at USART5_CR3.B13;
    sbit  OVRDIS_USART5_CR3_bit at USART5_CR3.B12;
    sbit  ONEBIT_USART5_CR3_bit at USART5_CR3.B11;
    sbit  CTSIE_USART5_CR3_bit at USART5_CR3.B10;
    sbit  CTSE_USART5_CR3_bit at USART5_CR3.B9;
    sbit  RTSE_USART5_CR3_bit at USART5_CR3.B8;
    sbit  DMAT_USART5_CR3_bit at USART5_CR3.B7;
    sbit  DMAR_USART5_CR3_bit at USART5_CR3.B6;
    sbit  SCEN_USART5_CR3_bit at USART5_CR3.B5;
    sbit  NACK_USART5_CR3_bit at USART5_CR3.B4;
    sbit  HDSEL_USART5_CR3_bit at USART5_CR3.B3;
    sbit  IRLP_USART5_CR3_bit at USART5_CR3.B2;
    sbit  IREN_USART5_CR3_bit at USART5_CR3.B1;
    sbit  EIE_USART5_CR3_bit at USART5_CR3.B0;

sfr unsigned long   volatile USART5_BRR           absolute 0x4000500C;
    sbit  DIV_Mantissa0_USART5_BRR_bit at USART5_BRR.B4;
    sbit  DIV_Mantissa1_USART5_BRR_bit at USART5_BRR.B5;
    sbit  DIV_Mantissa2_USART5_BRR_bit at USART5_BRR.B6;
    sbit  DIV_Mantissa3_USART5_BRR_bit at USART5_BRR.B7;
    sbit  DIV_Mantissa4_USART5_BRR_bit at USART5_BRR.B8;
    sbit  DIV_Mantissa5_USART5_BRR_bit at USART5_BRR.B9;
    sbit  DIV_Mantissa6_USART5_BRR_bit at USART5_BRR.B10;
    sbit  DIV_Mantissa7_USART5_BRR_bit at USART5_BRR.B11;
    sbit  DIV_Mantissa8_USART5_BRR_bit at USART5_BRR.B12;
    sbit  DIV_Mantissa9_USART5_BRR_bit at USART5_BRR.B13;
    sbit  DIV_Mantissa10_USART5_BRR_bit at USART5_BRR.B14;
    sbit  DIV_Mantissa11_USART5_BRR_bit at USART5_BRR.B15;
    sbit  DIV_Fraction0_USART5_BRR_bit at USART5_BRR.B0;
    sbit  DIV_Fraction1_USART5_BRR_bit at USART5_BRR.B1;
    sbit  DIV_Fraction2_USART5_BRR_bit at USART5_BRR.B2;
    sbit  DIV_Fraction3_USART5_BRR_bit at USART5_BRR.B3;

sfr unsigned long   volatile USART5_GTPR          absolute 0x40005010;
    sbit  GT0_USART5_GTPR_bit at USART5_GTPR.B8;
    sbit  GT1_USART5_GTPR_bit at USART5_GTPR.B9;
    sbit  GT2_USART5_GTPR_bit at USART5_GTPR.B10;
    sbit  GT3_USART5_GTPR_bit at USART5_GTPR.B11;
    sbit  GT4_USART5_GTPR_bit at USART5_GTPR.B12;
    sbit  GT5_USART5_GTPR_bit at USART5_GTPR.B13;
    sbit  GT6_USART5_GTPR_bit at USART5_GTPR.B14;
    sbit  GT7_USART5_GTPR_bit at USART5_GTPR.B15;
    sbit  PSC0_USART5_GTPR_bit at USART5_GTPR.B0;
    sbit  PSC1_USART5_GTPR_bit at USART5_GTPR.B1;
    sbit  PSC2_USART5_GTPR_bit at USART5_GTPR.B2;
    sbit  PSC3_USART5_GTPR_bit at USART5_GTPR.B3;
    sbit  PSC4_USART5_GTPR_bit at USART5_GTPR.B4;
    sbit  PSC5_USART5_GTPR_bit at USART5_GTPR.B5;
    sbit  PSC6_USART5_GTPR_bit at USART5_GTPR.B6;
    sbit  PSC7_USART5_GTPR_bit at USART5_GTPR.B7;

sfr unsigned long   volatile USART5_RTOR          absolute 0x40005014;
    sbit  BLEN0_USART5_RTOR_bit at USART5_RTOR.B24;
    sbit  BLEN1_USART5_RTOR_bit at USART5_RTOR.B25;
    sbit  BLEN2_USART5_RTOR_bit at USART5_RTOR.B26;
    sbit  BLEN3_USART5_RTOR_bit at USART5_RTOR.B27;
    sbit  BLEN4_USART5_RTOR_bit at USART5_RTOR.B28;
    sbit  BLEN5_USART5_RTOR_bit at USART5_RTOR.B29;
    sbit  BLEN6_USART5_RTOR_bit at USART5_RTOR.B30;
    sbit  BLEN7_USART5_RTOR_bit at USART5_RTOR.B31;
    sbit  RTO0_USART5_RTOR_bit at USART5_RTOR.B0;
    sbit  RTO1_USART5_RTOR_bit at USART5_RTOR.B1;
    sbit  RTO2_USART5_RTOR_bit at USART5_RTOR.B2;
    sbit  RTO3_USART5_RTOR_bit at USART5_RTOR.B3;
    sbit  RTO4_USART5_RTOR_bit at USART5_RTOR.B4;
    sbit  RTO5_USART5_RTOR_bit at USART5_RTOR.B5;
    sbit  RTO6_USART5_RTOR_bit at USART5_RTOR.B6;
    sbit  RTO7_USART5_RTOR_bit at USART5_RTOR.B7;
    sbit  RTO8_USART5_RTOR_bit at USART5_RTOR.B8;
    sbit  RTO9_USART5_RTOR_bit at USART5_RTOR.B9;
    sbit  RTO10_USART5_RTOR_bit at USART5_RTOR.B10;
    sbit  RTO11_USART5_RTOR_bit at USART5_RTOR.B11;
    sbit  RTO12_USART5_RTOR_bit at USART5_RTOR.B12;
    sbit  RTO13_USART5_RTOR_bit at USART5_RTOR.B13;
    sbit  RTO14_USART5_RTOR_bit at USART5_RTOR.B14;
    sbit  RTO15_USART5_RTOR_bit at USART5_RTOR.B15;
    sbit  RTO16_USART5_RTOR_bit at USART5_RTOR.B16;
    sbit  RTO17_USART5_RTOR_bit at USART5_RTOR.B17;
    sbit  RTO18_USART5_RTOR_bit at USART5_RTOR.B18;
    sbit  RTO19_USART5_RTOR_bit at USART5_RTOR.B19;
    sbit  RTO20_USART5_RTOR_bit at USART5_RTOR.B20;
    sbit  RTO21_USART5_RTOR_bit at USART5_RTOR.B21;
    sbit  RTO22_USART5_RTOR_bit at USART5_RTOR.B22;
    sbit  RTO23_USART5_RTOR_bit at USART5_RTOR.B23;

sfr unsigned long   volatile USART5_RQR           absolute 0x40005018;
    sbit  TXFRQ_USART5_RQR_bit at USART5_RQR.B4;
    sbit  RXFRQ_USART5_RQR_bit at USART5_RQR.B3;
    sbit  MMRQ_USART5_RQR_bit at USART5_RQR.B2;
    sbit  SBKRQ_USART5_RQR_bit at USART5_RQR.B1;
    sbit  ABRRQ_USART5_RQR_bit at USART5_RQR.B0;

sfr unsigned long   volatile USART5_ISR           absolute 0x4000501C;
    sbit  REACK_USART5_ISR_bit at USART5_ISR.B22;
    sbit  TEACK_USART5_ISR_bit at USART5_ISR.B21;
    sbit  WUF_USART5_ISR_bit at USART5_ISR.B20;
    sbit  RWU_USART5_ISR_bit at USART5_ISR.B19;
    sbit  SBKF_USART5_ISR_bit at USART5_ISR.B18;
    sbit  CMF_USART5_ISR_bit at USART5_ISR.B17;
    sbit  BUSY_USART5_ISR_bit at USART5_ISR.B16;
    sbit  ABRF_USART5_ISR_bit at USART5_ISR.B15;
    sbit  ABRE_USART5_ISR_bit at USART5_ISR.B14;
    sbit  EOBF_USART5_ISR_bit at USART5_ISR.B12;
    sbit  RTOF_USART5_ISR_bit at USART5_ISR.B11;
    sbit  CTS_USART5_ISR_bit at USART5_ISR.B10;
    sbit  CTSIF_USART5_ISR_bit at USART5_ISR.B9;
    sbit  LBDF_USART5_ISR_bit at USART5_ISR.B8;
    sbit  TXE_USART5_ISR_bit at USART5_ISR.B7;
    sbit  TC_USART5_ISR_bit at USART5_ISR.B6;
    sbit  RXNE_USART5_ISR_bit at USART5_ISR.B5;
    sbit  IDLE_USART5_ISR_bit at USART5_ISR.B4;
    sbit  ORE_USART5_ISR_bit at USART5_ISR.B3;
    sbit  NF_USART5_ISR_bit at USART5_ISR.B2;
    sbit  FE_USART5_ISR_bit at USART5_ISR.B1;
    sbit  PE_USART5_ISR_bit at USART5_ISR.B0;

sfr unsigned long   volatile USART5_ICR           absolute 0x40005020;
    sbit  WUCF_USART5_ICR_bit at USART5_ICR.B20;
    sbit  CMCF_USART5_ICR_bit at USART5_ICR.B17;
    sbit  EOBCF_USART5_ICR_bit at USART5_ICR.B12;
    sbit  RTOCF_USART5_ICR_bit at USART5_ICR.B11;
    sbit  CTSCF_USART5_ICR_bit at USART5_ICR.B9;
    sbit  LBDCF_USART5_ICR_bit at USART5_ICR.B8;
    sbit  TCCF_USART5_ICR_bit at USART5_ICR.B6;
    sbit  IDLECF_USART5_ICR_bit at USART5_ICR.B4;
    sbit  ORECF_USART5_ICR_bit at USART5_ICR.B3;
    sbit  NCF_USART5_ICR_bit at USART5_ICR.B2;
    sbit  FECF_USART5_ICR_bit at USART5_ICR.B1;
    sbit  PECF_USART5_ICR_bit at USART5_ICR.B0;

sfr unsigned long   volatile USART5_RDR           absolute 0x40005024;
    sbit  RDR0_USART5_RDR_bit at USART5_RDR.B0;
    sbit  RDR1_USART5_RDR_bit at USART5_RDR.B1;
    sbit  RDR2_USART5_RDR_bit at USART5_RDR.B2;
    sbit  RDR3_USART5_RDR_bit at USART5_RDR.B3;
    sbit  RDR4_USART5_RDR_bit at USART5_RDR.B4;
    sbit  RDR5_USART5_RDR_bit at USART5_RDR.B5;
    sbit  RDR6_USART5_RDR_bit at USART5_RDR.B6;
    sbit  RDR7_USART5_RDR_bit at USART5_RDR.B7;
    sbit  RDR8_USART5_RDR_bit at USART5_RDR.B8;

sfr unsigned long   volatile USART5_TDR           absolute 0x40005028;
    sbit  TDR0_USART5_TDR_bit at USART5_TDR.B0;
    sbit  TDR1_USART5_TDR_bit at USART5_TDR.B1;
    sbit  TDR2_USART5_TDR_bit at USART5_TDR.B2;
    sbit  TDR3_USART5_TDR_bit at USART5_TDR.B3;
    sbit  TDR4_USART5_TDR_bit at USART5_TDR.B4;
    sbit  TDR5_USART5_TDR_bit at USART5_TDR.B5;
    sbit  TDR6_USART5_TDR_bit at USART5_TDR.B6;
    sbit  TDR7_USART5_TDR_bit at USART5_TDR.B7;
    sbit  TDR8_USART5_TDR_bit at USART5_TDR.B8;

sfr unsigned long   volatile IWDG_KR              absolute 0x40003000;
    sbit  KEY0_IWDG_KR_bit at IWDG_KR.B0;
    sbit  KEY1_IWDG_KR_bit at IWDG_KR.B1;
    sbit  KEY2_IWDG_KR_bit at IWDG_KR.B2;
    sbit  KEY3_IWDG_KR_bit at IWDG_KR.B3;
    sbit  KEY4_IWDG_KR_bit at IWDG_KR.B4;
    sbit  KEY5_IWDG_KR_bit at IWDG_KR.B5;
    sbit  KEY6_IWDG_KR_bit at IWDG_KR.B6;
    sbit  KEY7_IWDG_KR_bit at IWDG_KR.B7;
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
    const register unsigned short int EWI = 9;
    sbit  EWI_bit at WWDG_CFR.B9;
    const register unsigned short int WDGTB1 = 8;
    sbit  WDGTB1_bit at WWDG_CFR.B8;
    const register unsigned short int WDGTB0 = 7;
    sbit  WDGTB0_bit at WWDG_CFR.B7;
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

sfr unsigned long   volatile Firewall_FIREWALL_CSSA absolute 0x40011C00;
    const register unsigned short int ADD0 = 8;
    sbit  ADD0_bit at Firewall_FIREWALL_CSSA.B8;
    const register unsigned short int ADD1 = 9;
    sbit  ADD1_bit at Firewall_FIREWALL_CSSA.B9;
    const register unsigned short int ADD2 = 10;
    sbit  ADD2_bit at Firewall_FIREWALL_CSSA.B10;
    const register unsigned short int ADD3 = 11;
    sbit  ADD3_bit at Firewall_FIREWALL_CSSA.B11;
    const register unsigned short int ADD4 = 12;
    sbit  ADD4_bit at Firewall_FIREWALL_CSSA.B12;
    const register unsigned short int ADD5 = 13;
    sbit  ADD5_bit at Firewall_FIREWALL_CSSA.B13;
    const register unsigned short int ADD6 = 14;
    sbit  ADD6_bit at Firewall_FIREWALL_CSSA.B14;
    const register unsigned short int ADD7 = 15;
    sbit  ADD7_bit at Firewall_FIREWALL_CSSA.B15;
    const register unsigned short int ADD8 = 16;
    sbit  ADD8_bit at Firewall_FIREWALL_CSSA.B16;
    const register unsigned short int ADD9 = 17;
    sbit  ADD9_bit at Firewall_FIREWALL_CSSA.B17;
    const register unsigned short int ADD10 = 18;
    sbit  ADD10_bit at Firewall_FIREWALL_CSSA.B18;
    const register unsigned short int ADD11 = 19;
    sbit  ADD11_bit at Firewall_FIREWALL_CSSA.B19;
    const register unsigned short int ADD12 = 20;
    sbit  ADD12_bit at Firewall_FIREWALL_CSSA.B20;
    const register unsigned short int ADD13 = 21;
    sbit  ADD13_bit at Firewall_FIREWALL_CSSA.B21;
    const register unsigned short int ADD14 = 22;
    sbit  ADD14_bit at Firewall_FIREWALL_CSSA.B22;
    const register unsigned short int ADD15 = 23;
    sbit  ADD15_bit at Firewall_FIREWALL_CSSA.B23;

sfr unsigned long   volatile Firewall_FIREWALL_CSL absolute 0x40011C04;
    const register unsigned short int LENG0 = 8;
    sbit  LENG0_bit at Firewall_FIREWALL_CSL.B8;
    const register unsigned short int LENG1 = 9;
    sbit  LENG1_bit at Firewall_FIREWALL_CSL.B9;
    const register unsigned short int LENG2 = 10;
    sbit  LENG2_bit at Firewall_FIREWALL_CSL.B10;
    const register unsigned short int LENG3 = 11;
    sbit  LENG3_bit at Firewall_FIREWALL_CSL.B11;
    const register unsigned short int LENG4 = 12;
    sbit  LENG4_bit at Firewall_FIREWALL_CSL.B12;
    const register unsigned short int LENG5 = 13;
    sbit  LENG5_bit at Firewall_FIREWALL_CSL.B13;
    const register unsigned short int LENG6 = 14;
    sbit  LENG6_bit at Firewall_FIREWALL_CSL.B14;
    const register unsigned short int LENG7 = 15;
    sbit  LENG7_bit at Firewall_FIREWALL_CSL.B15;
    const register unsigned short int LENG8 = 16;
    sbit  LENG8_bit at Firewall_FIREWALL_CSL.B16;
    const register unsigned short int LENG9 = 17;
    sbit  LENG9_bit at Firewall_FIREWALL_CSL.B17;
    const register unsigned short int LENG10 = 18;
    sbit  LENG10_bit at Firewall_FIREWALL_CSL.B18;
    const register unsigned short int LENG11 = 19;
    sbit  LENG11_bit at Firewall_FIREWALL_CSL.B19;
    const register unsigned short int LENG12 = 20;
    sbit  LENG12_bit at Firewall_FIREWALL_CSL.B20;
    const register unsigned short int LENG13 = 21;
    sbit  LENG13_bit at Firewall_FIREWALL_CSL.B21;

sfr unsigned long   volatile Firewall_FIREWALL_NVDSSA absolute 0x40011C08;
    sbit  ADD0_Firewall_FIREWALL_NVDSSA_bit at Firewall_FIREWALL_NVDSSA.B8;
    sbit  ADD1_Firewall_FIREWALL_NVDSSA_bit at Firewall_FIREWALL_NVDSSA.B9;
    sbit  ADD2_Firewall_FIREWALL_NVDSSA_bit at Firewall_FIREWALL_NVDSSA.B10;
    sbit  ADD3_Firewall_FIREWALL_NVDSSA_bit at Firewall_FIREWALL_NVDSSA.B11;
    sbit  ADD4_Firewall_FIREWALL_NVDSSA_bit at Firewall_FIREWALL_NVDSSA.B12;
    sbit  ADD5_Firewall_FIREWALL_NVDSSA_bit at Firewall_FIREWALL_NVDSSA.B13;
    sbit  ADD6_Firewall_FIREWALL_NVDSSA_bit at Firewall_FIREWALL_NVDSSA.B14;
    sbit  ADD7_Firewall_FIREWALL_NVDSSA_bit at Firewall_FIREWALL_NVDSSA.B15;
    sbit  ADD8_Firewall_FIREWALL_NVDSSA_bit at Firewall_FIREWALL_NVDSSA.B16;
    sbit  ADD9_Firewall_FIREWALL_NVDSSA_bit at Firewall_FIREWALL_NVDSSA.B17;
    sbit  ADD10_Firewall_FIREWALL_NVDSSA_bit at Firewall_FIREWALL_NVDSSA.B18;
    sbit  ADD11_Firewall_FIREWALL_NVDSSA_bit at Firewall_FIREWALL_NVDSSA.B19;
    sbit  ADD12_Firewall_FIREWALL_NVDSSA_bit at Firewall_FIREWALL_NVDSSA.B20;
    sbit  ADD13_Firewall_FIREWALL_NVDSSA_bit at Firewall_FIREWALL_NVDSSA.B21;
    sbit  ADD14_Firewall_FIREWALL_NVDSSA_bit at Firewall_FIREWALL_NVDSSA.B22;
    sbit  ADD15_Firewall_FIREWALL_NVDSSA_bit at Firewall_FIREWALL_NVDSSA.B23;

sfr unsigned long   volatile Firewall_FIREWALL_NVDSL absolute 0x40011C0C;
    sbit  LENG0_Firewall_FIREWALL_NVDSL_bit at Firewall_FIREWALL_NVDSL.B8;
    sbit  LENG1_Firewall_FIREWALL_NVDSL_bit at Firewall_FIREWALL_NVDSL.B9;
    sbit  LENG2_Firewall_FIREWALL_NVDSL_bit at Firewall_FIREWALL_NVDSL.B10;
    sbit  LENG3_Firewall_FIREWALL_NVDSL_bit at Firewall_FIREWALL_NVDSL.B11;
    sbit  LENG4_Firewall_FIREWALL_NVDSL_bit at Firewall_FIREWALL_NVDSL.B12;
    sbit  LENG5_Firewall_FIREWALL_NVDSL_bit at Firewall_FIREWALL_NVDSL.B13;
    sbit  LENG6_Firewall_FIREWALL_NVDSL_bit at Firewall_FIREWALL_NVDSL.B14;
    sbit  LENG7_Firewall_FIREWALL_NVDSL_bit at Firewall_FIREWALL_NVDSL.B15;
    sbit  LENG8_Firewall_FIREWALL_NVDSL_bit at Firewall_FIREWALL_NVDSL.B16;
    sbit  LENG9_Firewall_FIREWALL_NVDSL_bit at Firewall_FIREWALL_NVDSL.B17;
    sbit  LENG10_Firewall_FIREWALL_NVDSL_bit at Firewall_FIREWALL_NVDSL.B18;
    sbit  LENG11_Firewall_FIREWALL_NVDSL_bit at Firewall_FIREWALL_NVDSL.B19;
    sbit  LENG12_Firewall_FIREWALL_NVDSL_bit at Firewall_FIREWALL_NVDSL.B20;
    sbit  LENG13_Firewall_FIREWALL_NVDSL_bit at Firewall_FIREWALL_NVDSL.B21;

sfr unsigned long   volatile Firewall_FIREWALL_VDSSA absolute 0x40011C10;
    sbit  ADD0_Firewall_FIREWALL_VDSSA_bit at Firewall_FIREWALL_VDSSA.B6;
    sbit  ADD1_Firewall_FIREWALL_VDSSA_bit at Firewall_FIREWALL_VDSSA.B7;
    sbit  ADD2_Firewall_FIREWALL_VDSSA_bit at Firewall_FIREWALL_VDSSA.B8;
    sbit  ADD3_Firewall_FIREWALL_VDSSA_bit at Firewall_FIREWALL_VDSSA.B9;
    sbit  ADD4_Firewall_FIREWALL_VDSSA_bit at Firewall_FIREWALL_VDSSA.B10;
    sbit  ADD5_Firewall_FIREWALL_VDSSA_bit at Firewall_FIREWALL_VDSSA.B11;
    sbit  ADD6_Firewall_FIREWALL_VDSSA_bit at Firewall_FIREWALL_VDSSA.B12;
    sbit  ADD7_Firewall_FIREWALL_VDSSA_bit at Firewall_FIREWALL_VDSSA.B13;
    sbit  ADD8_Firewall_FIREWALL_VDSSA_bit at Firewall_FIREWALL_VDSSA.B14;
    sbit  ADD9_Firewall_FIREWALL_VDSSA_bit at Firewall_FIREWALL_VDSSA.B15;

sfr unsigned long   volatile Firewall_FIREWALL_VDSL absolute 0x40011C14;
    sbit  LENG0_Firewall_FIREWALL_VDSL_bit at Firewall_FIREWALL_VDSL.B6;
    sbit  LENG1_Firewall_FIREWALL_VDSL_bit at Firewall_FIREWALL_VDSL.B7;
    sbit  LENG2_Firewall_FIREWALL_VDSL_bit at Firewall_FIREWALL_VDSL.B8;
    sbit  LENG3_Firewall_FIREWALL_VDSL_bit at Firewall_FIREWALL_VDSL.B9;
    sbit  LENG4_Firewall_FIREWALL_VDSL_bit at Firewall_FIREWALL_VDSL.B10;
    sbit  LENG5_Firewall_FIREWALL_VDSL_bit at Firewall_FIREWALL_VDSL.B11;
    sbit  LENG6_Firewall_FIREWALL_VDSL_bit at Firewall_FIREWALL_VDSL.B12;
    sbit  LENG7_Firewall_FIREWALL_VDSL_bit at Firewall_FIREWALL_VDSL.B13;
    sbit  LENG8_Firewall_FIREWALL_VDSL_bit at Firewall_FIREWALL_VDSL.B14;
    sbit  LENG9_Firewall_FIREWALL_VDSL_bit at Firewall_FIREWALL_VDSL.B15;

sfr unsigned long   volatile Firewall_FIREWALL_CR absolute 0x40011C20;
    const register unsigned short int VDE = 2;
    sbit  VDE_bit at Firewall_FIREWALL_CR.B2;
    const register unsigned short int VDS = 1;
    sbit  VDS_bit at Firewall_FIREWALL_CR.B1;
    const register unsigned short int FPA = 0;
    sbit  FPA_bit at Firewall_FIREWALL_CR.B0;

sfr unsigned long   volatile RCC_CR               absolute 0x40021000;
    const register unsigned short int PLLRDY = 25;
    sbit  PLLRDY_bit at RCC_CR.B25;
    const register unsigned short int PLLON = 24;
    sbit  PLLON_bit at RCC_CR.B24;
    const register unsigned short int RTCPRE0 = 20;
    sbit  RTCPRE0_bit at RCC_CR.B20;
    const register unsigned short int RTCPRE1 = 21;
    sbit  RTCPRE1_bit at RCC_CR.B21;
    const register unsigned short int CSSLSEON = 19;
    sbit  CSSLSEON_bit at RCC_CR.B19;
    const register unsigned short int HSEBYP = 18;
    sbit  HSEBYP_bit at RCC_CR.B18;
    const register unsigned short int HSERDY = 17;
    sbit  HSERDY_bit at RCC_CR.B17;
    const register unsigned short int HSEON = 16;
    sbit  HSEON_bit at RCC_CR.B16;
    const register unsigned short int MSIRDY = 9;
    sbit  MSIRDY_bit at RCC_CR.B9;
    const register unsigned short int MSION = 8;
    sbit  MSION_bit at RCC_CR.B8;
    const register unsigned short int HSI16DIVF = 4;
    sbit  HSI16DIVF_bit at RCC_CR.B4;
    const register unsigned short int HSI16DIVEN = 3;
    sbit  HSI16DIVEN_bit at RCC_CR.B3;
    const register unsigned short int HSI16RDYF = 2;
    sbit  HSI16RDYF_bit at RCC_CR.B2;
    const register unsigned short int HSI16KERON = 1;
    sbit  HSI16KERON_bit at RCC_CR.B1;
    const register unsigned short int HSI16ON = 0;
    sbit  HSI16ON_bit at RCC_CR.B0;
    const register unsigned short int HSI16OUTEN = 5;
    sbit  HSI16OUTEN_bit at RCC_CR.B5;

sfr unsigned long   volatile RCC_ICSCR            absolute 0x40021004;
    const register unsigned short int MSITRIM0 = 24;
    sbit  MSITRIM0_bit at RCC_ICSCR.B24;
    const register unsigned short int MSITRIM1 = 25;
    sbit  MSITRIM1_bit at RCC_ICSCR.B25;
    const register unsigned short int MSITRIM2 = 26;
    sbit  MSITRIM2_bit at RCC_ICSCR.B26;
    const register unsigned short int MSITRIM3 = 27;
    sbit  MSITRIM3_bit at RCC_ICSCR.B27;
    const register unsigned short int MSITRIM4 = 28;
    sbit  MSITRIM4_bit at RCC_ICSCR.B28;
    const register unsigned short int MSITRIM5 = 29;
    sbit  MSITRIM5_bit at RCC_ICSCR.B29;
    const register unsigned short int MSITRIM6 = 30;
    sbit  MSITRIM6_bit at RCC_ICSCR.B30;
    const register unsigned short int MSITRIM7 = 31;
    sbit  MSITRIM7_bit at RCC_ICSCR.B31;
    const register unsigned short int MSICAL0 = 16;
    sbit  MSICAL0_bit at RCC_ICSCR.B16;
    const register unsigned short int MSICAL1 = 17;
    sbit  MSICAL1_bit at RCC_ICSCR.B17;
    const register unsigned short int MSICAL2 = 18;
    sbit  MSICAL2_bit at RCC_ICSCR.B18;
    const register unsigned short int MSICAL3 = 19;
    sbit  MSICAL3_bit at RCC_ICSCR.B19;
    const register unsigned short int MSICAL4 = 20;
    sbit  MSICAL4_bit at RCC_ICSCR.B20;
    const register unsigned short int MSICAL5 = 21;
    sbit  MSICAL5_bit at RCC_ICSCR.B21;
    const register unsigned short int MSICAL6 = 22;
    sbit  MSICAL6_bit at RCC_ICSCR.B22;
    const register unsigned short int MSICAL7 = 23;
    sbit  MSICAL7_bit at RCC_ICSCR.B23;
    const register unsigned short int MSIRANGE0 = 13;
    sbit  MSIRANGE0_bit at RCC_ICSCR.B13;
    const register unsigned short int MSIRANGE1 = 14;
    sbit  MSIRANGE1_bit at RCC_ICSCR.B14;
    const register unsigned short int MSIRANGE2 = 15;
    sbit  MSIRANGE2_bit at RCC_ICSCR.B15;
    const register unsigned short int HSI16TRIM0 = 8;
    sbit  HSI16TRIM0_bit at RCC_ICSCR.B8;
    const register unsigned short int HSI16TRIM1 = 9;
    sbit  HSI16TRIM1_bit at RCC_ICSCR.B9;
    const register unsigned short int HSI16TRIM2 = 10;
    sbit  HSI16TRIM2_bit at RCC_ICSCR.B10;
    const register unsigned short int HSI16TRIM3 = 11;
    sbit  HSI16TRIM3_bit at RCC_ICSCR.B11;
    const register unsigned short int HSI16TRIM4 = 12;
    sbit  HSI16TRIM4_bit at RCC_ICSCR.B12;
    const register unsigned short int HSI16CAL0 = 0;
    sbit  HSI16CAL0_bit at RCC_ICSCR.B0;
    const register unsigned short int HSI16CAL1 = 1;
    sbit  HSI16CAL1_bit at RCC_ICSCR.B1;
    const register unsigned short int HSI16CAL2 = 2;
    sbit  HSI16CAL2_bit at RCC_ICSCR.B2;
    const register unsigned short int HSI16CAL3 = 3;
    sbit  HSI16CAL3_bit at RCC_ICSCR.B3;
    const register unsigned short int HSI16CAL4 = 4;
    sbit  HSI16CAL4_bit at RCC_ICSCR.B4;
    const register unsigned short int HSI16CAL5 = 5;
    sbit  HSI16CAL5_bit at RCC_ICSCR.B5;
    const register unsigned short int HSI16CAL6 = 6;
    sbit  HSI16CAL6_bit at RCC_ICSCR.B6;
    const register unsigned short int HSI16CAL7 = 7;
    sbit  HSI16CAL7_bit at RCC_ICSCR.B7;

sfr unsigned long   volatile RCC_CFGR             absolute 0x4002100C;
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
    const register unsigned short int PLLDIV0 = 22;
    sbit  PLLDIV0_bit at RCC_CFGR.B22;
    const register unsigned short int PLLDIV1 = 23;
    sbit  PLLDIV1_bit at RCC_CFGR.B23;
    const register unsigned short int PLLMUL0 = 18;
    sbit  PLLMUL0_bit at RCC_CFGR.B18;
    const register unsigned short int PLLMUL1 = 19;
    sbit  PLLMUL1_bit at RCC_CFGR.B19;
    const register unsigned short int PLLMUL2 = 20;
    sbit  PLLMUL2_bit at RCC_CFGR.B20;
    const register unsigned short int PLLMUL3 = 21;
    sbit  PLLMUL3_bit at RCC_CFGR.B21;
    const register unsigned short int PLLSRC = 16;
    sbit  PLLSRC_bit at RCC_CFGR.B16;
    const register unsigned short int STOPWUCK = 15;
    sbit  STOPWUCK_bit at RCC_CFGR.B15;
    const register unsigned short int PPRE20 = 11;
    sbit  PPRE20_bit at RCC_CFGR.B11;
    const register unsigned short int PPRE21 = 12;
    sbit  PPRE21_bit at RCC_CFGR.B12;
    const register unsigned short int PPRE22 = 13;
    sbit  PPRE22_bit at RCC_CFGR.B13;
    const register unsigned short int PPRE10 = 8;
    sbit  PPRE10_bit at RCC_CFGR.B8;
    const register unsigned short int PPRE11 = 9;
    sbit  PPRE11_bit at RCC_CFGR.B9;
    const register unsigned short int PPRE12 = 10;
    sbit  PPRE12_bit at RCC_CFGR.B10;
    const register unsigned short int HPRE0 = 4;
    sbit  HPRE0_bit at RCC_CFGR.B4;
    const register unsigned short int HPRE1 = 5;
    sbit  HPRE1_bit at RCC_CFGR.B5;
    const register unsigned short int HPRE2 = 6;
    sbit  HPRE2_bit at RCC_CFGR.B6;
    const register unsigned short int HPRE3 = 7;
    sbit  HPRE3_bit at RCC_CFGR.B7;
    const register unsigned short int SWS0 = 2;
    sbit  SWS0_bit at RCC_CFGR.B2;
    const register unsigned short int SWS1 = 3;
    sbit  SWS1_bit at RCC_CFGR.B3;
    const register unsigned short int SW0 = 0;
    sbit  SW0_bit at RCC_CFGR.B0;
    const register unsigned short int SW1 = 1;
    sbit  SW1_bit at RCC_CFGR.B1;

sfr unsigned long   volatile RCC_CIER             absolute 0x40021010;
    const register unsigned short int CSSLSE = 7;
    sbit  CSSLSE_bit at RCC_CIER.B7;
    const register unsigned short int MSIRDYIE = 5;
    sbit  MSIRDYIE_bit at RCC_CIER.B5;
    const register unsigned short int PLLRDYIE = 4;
    sbit  PLLRDYIE_bit at RCC_CIER.B4;
    const register unsigned short int HSERDYIE = 3;
    sbit  HSERDYIE_bit at RCC_CIER.B3;
    const register unsigned short int HSI16RDYIE = 2;
    sbit  HSI16RDYIE_bit at RCC_CIER.B2;
    const register unsigned short int LSERDYIE = 1;
    sbit  LSERDYIE_bit at RCC_CIER.B1;
    const register unsigned short int LSIRDYIE = 0;
    sbit  LSIRDYIE_bit at RCC_CIER.B0;

sfr unsigned long   volatile RCC_CIFR             absolute 0x40021014;
    const register unsigned short int CSSHSEF = 8;
    sbit  CSSHSEF_bit at RCC_CIFR.B8;
    const register unsigned short int CSSLSEF = 7;
    sbit  CSSLSEF_bit at RCC_CIFR.B7;
    const register unsigned short int MSIRDYF = 5;
    sbit  MSIRDYF_bit at RCC_CIFR.B5;
    const register unsigned short int PLLRDYF = 4;
    sbit  PLLRDYF_bit at RCC_CIFR.B4;
    const register unsigned short int HSERDYF = 3;
    sbit  HSERDYF_bit at RCC_CIFR.B3;
    sbit  HSI16RDYF_RCC_CIFR_bit at RCC_CIFR.B2;
    const register unsigned short int LSERDYF = 1;
    sbit  LSERDYF_bit at RCC_CIFR.B1;
    const register unsigned short int LSIRDYF = 0;
    sbit  LSIRDYF_bit at RCC_CIFR.B0;

sfr unsigned long   volatile RCC_CICR             absolute 0x40021018;
    const register unsigned short int CSSHSEC = 8;
    sbit  CSSHSEC_bit at RCC_CICR.B8;
    const register unsigned short int CSSLSEC = 7;
    sbit  CSSLSEC_bit at RCC_CICR.B7;
    const register unsigned short int MSIRDYC = 5;
    sbit  MSIRDYC_bit at RCC_CICR.B5;
    const register unsigned short int PLLRDYC = 4;
    sbit  PLLRDYC_bit at RCC_CICR.B4;
    const register unsigned short int HSERDYC = 3;
    sbit  HSERDYC_bit at RCC_CICR.B3;
    const register unsigned short int HSI16RDYC = 2;
    sbit  HSI16RDYC_bit at RCC_CICR.B2;
    const register unsigned short int LSERDYC = 1;
    sbit  LSERDYC_bit at RCC_CICR.B1;
    const register unsigned short int LSIRDYC = 0;
    sbit  LSIRDYC_bit at RCC_CICR.B0;

sfr unsigned long   volatile RCC_IOPRSTR          absolute 0x4002101C;
    const register unsigned short int IOPHRST = 7;
    sbit  IOPHRST_bit at RCC_IOPRSTR.B7;
    const register unsigned short int IOPDRST = 3;
    sbit  IOPDRST_bit at RCC_IOPRSTR.B3;
    const register unsigned short int IOPCRST = 2;
    sbit  IOPCRST_bit at RCC_IOPRSTR.B2;
    const register unsigned short int IOPBRST = 1;
    sbit  IOPBRST_bit at RCC_IOPRSTR.B1;
    const register unsigned short int IOPARST = 0;
    sbit  IOPARST_bit at RCC_IOPRSTR.B0;
    const register unsigned short int IOPERST = 4;
    sbit  IOPERST_bit at RCC_IOPRSTR.B4;

sfr unsigned long   volatile RCC_AHBRSTR          absolute 0x40021020;
    const register unsigned short int CRYPRST = 24;
    sbit  CRYPRST_bit at RCC_AHBRSTR.B24;
    const register unsigned short int CRCRST = 12;
    sbit  CRCRST_bit at RCC_AHBRSTR.B12;
    const register unsigned short int MIFRST = 8;
    sbit  MIFRST_bit at RCC_AHBRSTR.B8;
    const register unsigned short int DMARST = 0;
    sbit  DMARST_bit at RCC_AHBRSTR.B0;

sfr unsigned long   volatile RCC_APB2RSTR         absolute 0x40021024;
    const register unsigned short int DBGRST = 22;
    sbit  DBGRST_bit at RCC_APB2RSTR.B22;
    const register unsigned short int USART1RST = 14;
    sbit  USART1RST_bit at RCC_APB2RSTR.B14;
    const register unsigned short int SPI1RST = 12;
    sbit  SPI1RST_bit at RCC_APB2RSTR.B12;
    const register unsigned short int ADCRST = 9;
    sbit  ADCRST_bit at RCC_APB2RSTR.B9;
    const register unsigned short int TIM22RST = 5;
    sbit  TIM22RST_bit at RCC_APB2RSTR.B5;
    const register unsigned short int TIM21RST = 2;
    sbit  TIM21RST_bit at RCC_APB2RSTR.B2;
    const register unsigned short int SYSCFGRST = 0;
    sbit  SYSCFGRST_bit at RCC_APB2RSTR.B0;

sfr unsigned long   volatile RCC_APB1RSTR         absolute 0x40021028;
    const register unsigned short int LPTIM1RST = 31;
    sbit  LPTIM1RST_bit at RCC_APB1RSTR.B31;
    const register unsigned short int PWRRST = 28;
    sbit  PWRRST_bit at RCC_APB1RSTR.B28;
    const register unsigned short int I2C2RST = 22;
    sbit  I2C2RST_bit at RCC_APB1RSTR.B22;
    const register unsigned short int I2C1RST = 21;
    sbit  I2C1RST_bit at RCC_APB1RSTR.B21;
    const register unsigned short int LPUART1RST = 18;
    sbit  LPUART1RST_bit at RCC_APB1RSTR.B18;
    const register unsigned short int USART2RST = 17;
    sbit  USART2RST_bit at RCC_APB1RSTR.B17;
    const register unsigned short int SPI2RST = 14;
    sbit  SPI2RST_bit at RCC_APB1RSTR.B14;
    const register unsigned short int WWDGRST = 11;
    sbit  WWDGRST_bit at RCC_APB1RSTR.B11;
    const register unsigned short int TIM6RST = 4;
    sbit  TIM6RST_bit at RCC_APB1RSTR.B4;
    const register unsigned short int TIM2RST = 0;
    sbit  TIM2RST_bit at RCC_APB1RSTR.B0;
    const register unsigned short int TIM3RST = 1;
    sbit  TIM3RST_bit at RCC_APB1RSTR.B1;
    const register unsigned short int TIM7RST = 5;
    sbit  TIM7RST_bit at RCC_APB1RSTR.B5;
    const register unsigned short int USART4RST = 19;
    sbit  USART4RST_bit at RCC_APB1RSTR.B19;
    const register unsigned short int USART5RST = 20;
    sbit  USART5RST_bit at RCC_APB1RSTR.B20;
    sbit  CRCRST_RCC_APB1RSTR_bit at RCC_APB1RSTR.B27;
    const register unsigned short int I2C3 = 30;
    sbit  I2C3_bit at RCC_APB1RSTR.B30;

sfr unsigned long   volatile RCC_IOPENR           absolute 0x4002102C;
    const register unsigned short int IOPHEN = 7;
    sbit  IOPHEN_bit at RCC_IOPENR.B7;
    const register unsigned short int IOPDEN = 3;
    sbit  IOPDEN_bit at RCC_IOPENR.B3;
    const register unsigned short int IOPCEN = 2;
    sbit  IOPCEN_bit at RCC_IOPENR.B2;
    const register unsigned short int IOPBEN = 1;
    sbit  IOPBEN_bit at RCC_IOPENR.B1;
    const register unsigned short int IOPAEN = 0;
    sbit  IOPAEN_bit at RCC_IOPENR.B0;
    const register unsigned short int IOPEEN = 4;
    sbit  IOPEEN_bit at RCC_IOPENR.B4;

sfr unsigned long   volatile RCC_AHBENR           absolute 0x40021030;
    const register unsigned short int CRYPEN = 24;
    sbit  CRYPEN_bit at RCC_AHBENR.B24;
    const register unsigned short int CRCEN = 12;
    sbit  CRCEN_bit at RCC_AHBENR.B12;
    const register unsigned short int MIFEN = 8;
    sbit  MIFEN_bit at RCC_AHBENR.B8;
    const register unsigned short int DMAEN = 0;
    sbit  DMAEN_bit at RCC_AHBENR.B0;

sfr unsigned long   volatile RCC_APB2ENR          absolute 0x40021034;
    const register unsigned short int DBGEN = 22;
    sbit  DBGEN_bit at RCC_APB2ENR.B22;
    const register unsigned short int USART1EN = 14;
    sbit  USART1EN_bit at RCC_APB2ENR.B14;
    const register unsigned short int SPI1EN = 12;
    sbit  SPI1EN_bit at RCC_APB2ENR.B12;
    const register unsigned short int ADCEN = 9;
    sbit  ADCEN_bit at RCC_APB2ENR.B9;
    const register unsigned short int FWEN = 7;
    sbit  FWEN_bit at RCC_APB2ENR.B7;
    const register unsigned short int TIM22EN = 5;
    sbit  TIM22EN_bit at RCC_APB2ENR.B5;
    const register unsigned short int TIM21EN = 2;
    sbit  TIM21EN_bit at RCC_APB2ENR.B2;
    const register unsigned short int SYSCFGEN = 0;
    sbit  SYSCFGEN_bit at RCC_APB2ENR.B0;

sfr unsigned long   volatile RCC_APB1ENR          absolute 0x40021038;
    const register unsigned short int LPTIM1EN = 31;
    sbit  LPTIM1EN_bit at RCC_APB1ENR.B31;
    const register unsigned short int PWREN = 28;
    sbit  PWREN_bit at RCC_APB1ENR.B28;
    const register unsigned short int I2C2EN = 22;
    sbit  I2C2EN_bit at RCC_APB1ENR.B22;
    const register unsigned short int I2C1EN = 21;
    sbit  I2C1EN_bit at RCC_APB1ENR.B21;
    const register unsigned short int LPUART1EN = 18;
    sbit  LPUART1EN_bit at RCC_APB1ENR.B18;
    const register unsigned short int USART2EN = 17;
    sbit  USART2EN_bit at RCC_APB1ENR.B17;
    const register unsigned short int SPI2EN = 14;
    sbit  SPI2EN_bit at RCC_APB1ENR.B14;
    const register unsigned short int WWDGEN = 11;
    sbit  WWDGEN_bit at RCC_APB1ENR.B11;
    const register unsigned short int TIM6EN = 4;
    sbit  TIM6EN_bit at RCC_APB1ENR.B4;
    const register unsigned short int TIM2EN = 0;
    sbit  TIM2EN_bit at RCC_APB1ENR.B0;
    const register unsigned short int TIM3EN = 1;
    sbit  TIM3EN_bit at RCC_APB1ENR.B1;
    const register unsigned short int TIM7EN = 5;
    sbit  TIM7EN_bit at RCC_APB1ENR.B5;
    const register unsigned short int USART4EN = 19;
    sbit  USART4EN_bit at RCC_APB1ENR.B19;
    const register unsigned short int USART5EN = 20;
    sbit  USART5EN_bit at RCC_APB1ENR.B20;
    const register unsigned short int I2C3EN = 30;
    sbit  I2C3EN_bit at RCC_APB1ENR.B30;

sfr unsigned long   volatile RCC_IOPSMEN          absolute 0x4002103C;
    const register unsigned short int IOPHSMEN = 7;
    sbit  IOPHSMEN_bit at RCC_IOPSMEN.B7;
    const register unsigned short int IOPDSMEN = 3;
    sbit  IOPDSMEN_bit at RCC_IOPSMEN.B3;
    const register unsigned short int IOPCSMEN = 2;
    sbit  IOPCSMEN_bit at RCC_IOPSMEN.B2;
    const register unsigned short int IOPBSMEN = 1;
    sbit  IOPBSMEN_bit at RCC_IOPSMEN.B1;
    const register unsigned short int IOPASMEN = 0;
    sbit  IOPASMEN_bit at RCC_IOPSMEN.B0;
    const register unsigned short int IOPESMEN = 4;
    sbit  IOPESMEN_bit at RCC_IOPSMEN.B4;

sfr unsigned long   volatile RCC_AHBSMENR         absolute 0x40021040;
    const register unsigned short int CRYPTSMEN = 24;
    sbit  CRYPTSMEN_bit at RCC_AHBSMENR.B24;
    const register unsigned short int CRCSMEN = 12;
    sbit  CRCSMEN_bit at RCC_AHBSMENR.B12;
    const register unsigned short int SRAMSMEN = 9;
    sbit  SRAMSMEN_bit at RCC_AHBSMENR.B9;
    const register unsigned short int MIFSMEN = 8;
    sbit  MIFSMEN_bit at RCC_AHBSMENR.B8;
    const register unsigned short int DMASMEN = 0;
    sbit  DMASMEN_bit at RCC_AHBSMENR.B0;

sfr unsigned long   volatile RCC_APB2SMENR        absolute 0x40021044;
    const register unsigned short int DBGSMEN = 22;
    sbit  DBGSMEN_bit at RCC_APB2SMENR.B22;
    const register unsigned short int USART1SMEN = 14;
    sbit  USART1SMEN_bit at RCC_APB2SMENR.B14;
    const register unsigned short int SPI1SMEN = 12;
    sbit  SPI1SMEN_bit at RCC_APB2SMENR.B12;
    const register unsigned short int ADCSMEN = 9;
    sbit  ADCSMEN_bit at RCC_APB2SMENR.B9;
    const register unsigned short int TIM22SMEN = 5;
    sbit  TIM22SMEN_bit at RCC_APB2SMENR.B5;
    const register unsigned short int TIM21SMEN = 2;
    sbit  TIM21SMEN_bit at RCC_APB2SMENR.B2;
    const register unsigned short int SYSCFGSMEN = 0;
    sbit  SYSCFGSMEN_bit at RCC_APB2SMENR.B0;

sfr unsigned long   volatile RCC_APB1SMENR        absolute 0x40021048;
    const register unsigned short int LPTIM1SMEN = 31;
    sbit  LPTIM1SMEN_bit at RCC_APB1SMENR.B31;
    const register unsigned short int PWRSMEN = 28;
    sbit  PWRSMEN_bit at RCC_APB1SMENR.B28;
    const register unsigned short int CRSSMEN = 27;
    sbit  CRSSMEN_bit at RCC_APB1SMENR.B27;
    const register unsigned short int I2C2SMEN = 22;
    sbit  I2C2SMEN_bit at RCC_APB1SMENR.B22;
    const register unsigned short int I2C1SMEN = 21;
    sbit  I2C1SMEN_bit at RCC_APB1SMENR.B21;
    const register unsigned short int LPUART1SMEN = 18;
    sbit  LPUART1SMEN_bit at RCC_APB1SMENR.B18;
    const register unsigned short int USART2SMEN = 17;
    sbit  USART2SMEN_bit at RCC_APB1SMENR.B17;
    const register unsigned short int SPI2SMEN = 14;
    sbit  SPI2SMEN_bit at RCC_APB1SMENR.B14;
    const register unsigned short int WWDGSMEN = 11;
    sbit  WWDGSMEN_bit at RCC_APB1SMENR.B11;
    const register unsigned short int TIM6SMEN = 4;
    sbit  TIM6SMEN_bit at RCC_APB1SMENR.B4;
    const register unsigned short int TIM2SMEN = 0;
    sbit  TIM2SMEN_bit at RCC_APB1SMENR.B0;
    const register unsigned short int TIM3SMEN = 1;
    sbit  TIM3SMEN_bit at RCC_APB1SMENR.B1;
    const register unsigned short int TIM7SMEN = 5;
    sbit  TIM7SMEN_bit at RCC_APB1SMENR.B5;
    const register unsigned short int USART4SMEN = 19;
    sbit  USART4SMEN_bit at RCC_APB1SMENR.B19;
    const register unsigned short int USART5SMEN = 20;
    sbit  USART5SMEN_bit at RCC_APB1SMENR.B20;
    const register unsigned short int I2C3SMEN = 30;
    sbit  I2C3SMEN_bit at RCC_APB1SMENR.B30;

sfr unsigned long   volatile RCC_CCIPR            absolute 0x4002104C;
    const register unsigned short int LPTIM1SEL1 = 19;
    sbit  LPTIM1SEL1_bit at RCC_CCIPR.B19;
    const register unsigned short int LPTIM1SEL0 = 18;
    sbit  LPTIM1SEL0_bit at RCC_CCIPR.B18;
    const register unsigned short int I2C1SEL1 = 13;
    sbit  I2C1SEL1_bit at RCC_CCIPR.B13;
    const register unsigned short int I2C1SEL0 = 12;
    sbit  I2C1SEL0_bit at RCC_CCIPR.B12;
    const register unsigned short int LPUART1SEL1 = 11;
    sbit  LPUART1SEL1_bit at RCC_CCIPR.B11;
    const register unsigned short int LPUART1SEL0 = 10;
    sbit  LPUART1SEL0_bit at RCC_CCIPR.B10;
    const register unsigned short int USART2SEL1 = 3;
    sbit  USART2SEL1_bit at RCC_CCIPR.B3;
    const register unsigned short int USART2SEL0 = 2;
    sbit  USART2SEL0_bit at RCC_CCIPR.B2;
    const register unsigned short int USART1SEL1 = 1;
    sbit  USART1SEL1_bit at RCC_CCIPR.B1;
    const register unsigned short int USART1SEL0 = 0;
    sbit  USART1SEL0_bit at RCC_CCIPR.B0;
    const register unsigned short int I2C3SEL0 = 16;
    sbit  I2C3SEL0_bit at RCC_CCIPR.B16;
    const register unsigned short int I2C3SEL1 = 17;
    sbit  I2C3SEL1_bit at RCC_CCIPR.B17;

sfr unsigned long   volatile RCC_CSR              absolute 0x40021050;
    const register unsigned short int LPWRSTF = 31;
    sbit  LPWRSTF_bit at RCC_CSR.B31;
    const register unsigned short int WWDGRSTF = 30;
    sbit  WWDGRSTF_bit at RCC_CSR.B30;
    const register unsigned short int IWDGRSTF = 29;
    sbit  IWDGRSTF_bit at RCC_CSR.B29;
    const register unsigned short int SFTRSTF = 28;
    sbit  SFTRSTF_bit at RCC_CSR.B28;
    const register unsigned short int PORRSTF = 27;
    sbit  PORRSTF_bit at RCC_CSR.B27;
    const register unsigned short int PINRSTF = 26;
    sbit  PINRSTF_bit at RCC_CSR.B26;
    const register unsigned short int OBLRSTF = 25;
    sbit  OBLRSTF_bit at RCC_CSR.B25;
    const register unsigned short int FWRSTF = 24;
    sbit  FWRSTF_bit at RCC_CSR.B24;
    const register unsigned short int RTCRST = 19;
    sbit  RTCRST_bit at RCC_CSR.B19;
    const register unsigned short int RTCEN = 18;
    sbit  RTCEN_bit at RCC_CSR.B18;
    const register unsigned short int RTCSEL0 = 16;
    sbit  RTCSEL0_bit at RCC_CSR.B16;
    const register unsigned short int RTCSEL1 = 17;
    sbit  RTCSEL1_bit at RCC_CSR.B17;
    const register unsigned short int CSSLSED = 14;
    sbit  CSSLSED_bit at RCC_CSR.B14;
    sbit  CSSLSEON_RCC_CSR_bit at RCC_CSR.B13;
    const register unsigned short int LSEDRV0 = 11;
    sbit  LSEDRV0_bit at RCC_CSR.B11;
    const register unsigned short int LSEDRV1 = 12;
    sbit  LSEDRV1_bit at RCC_CSR.B12;
    const register unsigned short int LSEBYP = 10;
    sbit  LSEBYP_bit at RCC_CSR.B10;
    const register unsigned short int LSERDY = 9;
    sbit  LSERDY_bit at RCC_CSR.B9;
    const register unsigned short int LSEON = 8;
    sbit  LSEON_bit at RCC_CSR.B8;
    const register unsigned short int LSIRDY = 1;
    sbit  LSIRDY_bit at RCC_CSR.B1;
    const register unsigned short int LSION = 0;
    sbit  LSION_bit at RCC_CSR.B0;
    const register unsigned short int LSIIWDGLP = 2;
    sbit  LSIIWDGLP_bit at RCC_CSR.B2;
    const register unsigned short int RMVF = 23;
    sbit  RMVF_bit at RCC_CSR.B23;

sfr unsigned long   volatile SYSCFG_CFGR1         absolute 0x40010000;
    const register unsigned short int BOOT_MODE0 = 8;
    sbit  BOOT_MODE0_bit at SYSCFG_CFGR1.B8;
    const register unsigned short int BOOT_MODE1 = 9;
    sbit  BOOT_MODE1_bit at SYSCFG_CFGR1.B9;
    const register unsigned short int MEM_MODE0 = 0;
    sbit  MEM_MODE0_bit at SYSCFG_CFGR1.B0;
    const register unsigned short int MEM_MODE1 = 1;
    sbit  MEM_MODE1_bit at SYSCFG_CFGR1.B1;

sfr unsigned long   volatile SYSCFG_CFGR2         absolute 0x40010004;
    const register unsigned short int I2C2_FMP = 13;
    sbit  I2C2_FMP_bit at SYSCFG_CFGR2.B13;
    const register unsigned short int I2C1_FMP = 12;
    sbit  I2C1_FMP_bit at SYSCFG_CFGR2.B12;
    const register unsigned short int I2C_PB9_FMP = 11;
    sbit  I2C_PB9_FMP_bit at SYSCFG_CFGR2.B11;
    const register unsigned short int I2C_PB8_FMP = 10;
    sbit  I2C_PB8_FMP_bit at SYSCFG_CFGR2.B10;
    const register unsigned short int I2C_PB7_FMP = 9;
    sbit  I2C_PB7_FMP_bit at SYSCFG_CFGR2.B9;
    const register unsigned short int I2C_PB6_FMP = 8;
    sbit  I2C_PB6_FMP_bit at SYSCFG_CFGR2.B8;
    const register unsigned short int CAPA0 = 1;
    sbit  CAPA0_bit at SYSCFG_CFGR2.B1;
    const register unsigned short int CAPA1 = 2;
    sbit  CAPA1_bit at SYSCFG_CFGR2.B2;
    const register unsigned short int CAPA2 = 3;
    sbit  CAPA2_bit at SYSCFG_CFGR2.B3;
    const register unsigned short int FWDISEN = 0;
    sbit  FWDISEN_bit at SYSCFG_CFGR2.B0;

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

sfr unsigned long   volatile SYSCFG_CFGR3         absolute 0x40010020;
    const register unsigned short int REF_LOCK = 31;
    sbit  REF_LOCK_bit at SYSCFG_CFGR3.B31;
    const register unsigned short int VREFINT_RDYF = 30;
    sbit  VREFINT_RDYF_bit at SYSCFG_CFGR3.B30;
    const register unsigned short int VREFINT_COMP_RDYF = 29;
    sbit  VREFINT_COMP_RDYF_bit at SYSCFG_CFGR3.B29;
    const register unsigned short int VREFINT_ADC_RDYF = 28;
    sbit  VREFINT_ADC_RDYF_bit at SYSCFG_CFGR3.B28;
    const register unsigned short int SENSOR_ADC_RDYF = 27;
    sbit  SENSOR_ADC_RDYF_bit at SYSCFG_CFGR3.B27;
    const register unsigned short int REF_RC48MHz_RDYF = 26;
    sbit  REF_RC48MHz_RDYF_bit at SYSCFG_CFGR3.B26;
    const register unsigned short int ENREF_RC48MHz = 13;
    sbit  ENREF_RC48MHz_bit at SYSCFG_CFGR3.B13;
    const register unsigned short int ENBUF_VREFINT_COMP = 12;
    sbit  ENBUF_VREFINT_COMP_bit at SYSCFG_CFGR3.B12;
    const register unsigned short int ENBUF_SENSOR_ADC = 9;
    sbit  ENBUF_SENSOR_ADC_bit at SYSCFG_CFGR3.B9;
    const register unsigned short int ENBUF_BGAP_ADC = 8;
    sbit  ENBUF_BGAP_ADC_bit at SYSCFG_CFGR3.B8;
    const register unsigned short int SEL_VREF_OUT0 = 4;
    sbit  SEL_VREF_OUT0_bit at SYSCFG_CFGR3.B4;
    const register unsigned short int SEL_VREF_OUT1 = 5;
    sbit  SEL_VREF_OUT1_bit at SYSCFG_CFGR3.B5;
    const register unsigned short int EN_BGAP = 0;
    sbit  EN_BGAP_bit at SYSCFG_CFGR3.B0;

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
    const register unsigned short int FRF = 4;
    sbit  FRF_bit at SPI1_CR2.B4;
    sbit  ERRIE_SPI1_CR2_bit at SPI1_CR2.B5;
    sbit  RXNEIE_SPI1_CR2_bit at SPI1_CR2.B6;
    sbit  TXEIE_SPI1_CR2_bit at SPI1_CR2.B7;

sfr unsigned long   volatile SPI1_SR              absolute 0x40013008;
    sbit  RXNE_SPI1_SR_bit at SPI1_SR.B0;
    sbit  TXE_SPI1_SR_bit at SPI1_SR.B1;
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
    sbit  FRF_SPI2_CR2_bit at SPI2_CR2.B4;
    sbit  ERRIE_SPI2_CR2_bit at SPI2_CR2.B5;
    sbit  RXNEIE_SPI2_CR2_bit at SPI2_CR2.B6;
    sbit  TXEIE_SPI2_CR2_bit at SPI2_CR2.B7;

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
    sbit  ADD10_I2C1_CR2_bit at I2C1_CR2.B11;
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
    const register unsigned short int OA10 = 0;
    sbit  OA10_bit at I2C1_OAR1.B0;
    const register unsigned short int OA11 = 1;
    sbit  OA11_bit at I2C1_OAR1.B1;
    const register unsigned short int OA12 = 2;
    sbit  OA12_bit at I2C1_OAR1.B2;
    const register unsigned short int OA13 = 3;
    sbit  OA13_bit at I2C1_OAR1.B3;
    const register unsigned short int OA14 = 4;
    sbit  OA14_bit at I2C1_OAR1.B4;
    const register unsigned short int OA15 = 5;
    sbit  OA15_bit at I2C1_OAR1.B5;
    const register unsigned short int OA16 = 6;
    sbit  OA16_bit at I2C1_OAR1.B6;
    const register unsigned short int OA17 = 7;
    sbit  OA17_bit at I2C1_OAR1.B7;
    const register unsigned short int OA18 = 8;
    sbit  OA18_bit at I2C1_OAR1.B8;
    const register unsigned short int OA19 = 9;
    sbit  OA19_bit at I2C1_OAR1.B9;
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
    sbit  OA10_I2C2_OAR1_bit at I2C2_OAR1.B0;
    sbit  OA11_I2C2_OAR1_bit at I2C2_OAR1.B1;
    sbit  OA12_I2C2_OAR1_bit at I2C2_OAR1.B2;
    sbit  OA13_I2C2_OAR1_bit at I2C2_OAR1.B3;
    sbit  OA14_I2C2_OAR1_bit at I2C2_OAR1.B4;
    sbit  OA15_I2C2_OAR1_bit at I2C2_OAR1.B5;
    sbit  OA16_I2C2_OAR1_bit at I2C2_OAR1.B6;
    sbit  OA17_I2C2_OAR1_bit at I2C2_OAR1.B7;
    sbit  OA18_I2C2_OAR1_bit at I2C2_OAR1.B8;
    sbit  OA19_I2C2_OAR1_bit at I2C2_OAR1.B9;
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

sfr unsigned long   volatile I2C3_CR1             absolute 0x40007800;
    sbit  PE_I2C3_CR1_bit at I2C3_CR1.B0;
    sbit  TXIE_I2C3_CR1_bit at I2C3_CR1.B1;
    sbit  RXIE_I2C3_CR1_bit at I2C3_CR1.B2;
    sbit  ADDRIE_I2C3_CR1_bit at I2C3_CR1.B3;
    sbit  NACKIE_I2C3_CR1_bit at I2C3_CR1.B4;
    sbit  STOPIE_I2C3_CR1_bit at I2C3_CR1.B5;
    sbit  TCIE_I2C3_CR1_bit at I2C3_CR1.B6;
    sbit  ERRIE_I2C3_CR1_bit at I2C3_CR1.B7;
    sbit  DNF0_I2C3_CR1_bit at I2C3_CR1.B8;
    sbit  DNF1_I2C3_CR1_bit at I2C3_CR1.B9;
    sbit  DNF2_I2C3_CR1_bit at I2C3_CR1.B10;
    sbit  DNF3_I2C3_CR1_bit at I2C3_CR1.B11;
    sbit  ANFOFF_I2C3_CR1_bit at I2C3_CR1.B12;
    sbit  TXDMAEN_I2C3_CR1_bit at I2C3_CR1.B14;
    sbit  RXDMAEN_I2C3_CR1_bit at I2C3_CR1.B15;
    sbit  SBC_I2C3_CR1_bit at I2C3_CR1.B16;
    sbit  NOSTRETCH_I2C3_CR1_bit at I2C3_CR1.B17;
    sbit  WUPEN_I2C3_CR1_bit at I2C3_CR1.B18;
    sbit  GCEN_I2C3_CR1_bit at I2C3_CR1.B19;
    sbit  SMBHEN_I2C3_CR1_bit at I2C3_CR1.B20;
    sbit  SMBDEN_I2C3_CR1_bit at I2C3_CR1.B21;
    sbit  ALERTEN_I2C3_CR1_bit at I2C3_CR1.B22;
    sbit  PECEN_I2C3_CR1_bit at I2C3_CR1.B23;

sfr unsigned long   volatile I2C3_CR2             absolute 0x40007804;
    sbit  PECBYTE_I2C3_CR2_bit at I2C3_CR2.B26;
    sbit  AUTOEND_I2C3_CR2_bit at I2C3_CR2.B25;
    sbit  RELOAD_I2C3_CR2_bit at I2C3_CR2.B24;
    sbit  NBYTES0_I2C3_CR2_bit at I2C3_CR2.B16;
    sbit  NBYTES1_I2C3_CR2_bit at I2C3_CR2.B17;
    sbit  NBYTES2_I2C3_CR2_bit at I2C3_CR2.B18;
    sbit  NBYTES3_I2C3_CR2_bit at I2C3_CR2.B19;
    sbit  NBYTES4_I2C3_CR2_bit at I2C3_CR2.B20;
    sbit  NBYTES5_I2C3_CR2_bit at I2C3_CR2.B21;
    sbit  NBYTES6_I2C3_CR2_bit at I2C3_CR2.B22;
    sbit  NBYTES7_I2C3_CR2_bit at I2C3_CR2.B23;
    sbit  NACK_I2C3_CR2_bit at I2C3_CR2.B15;
    sbit  STOP_I2C3_CR2_bit at I2C3_CR2.B14;
    sbit  START_I2C3_CR2_bit at I2C3_CR2.B13;
    sbit  HEAD10R_I2C3_CR2_bit at I2C3_CR2.B12;
    sbit  ADD10_I2C3_CR2_bit at I2C3_CR2.B11;
    sbit  RD_WRN_I2C3_CR2_bit at I2C3_CR2.B10;
    sbit  SADD0_I2C3_CR2_bit at I2C3_CR2.B0;
    sbit  SADD1_I2C3_CR2_bit at I2C3_CR2.B1;
    sbit  SADD2_I2C3_CR2_bit at I2C3_CR2.B2;
    sbit  SADD3_I2C3_CR2_bit at I2C3_CR2.B3;
    sbit  SADD4_I2C3_CR2_bit at I2C3_CR2.B4;
    sbit  SADD5_I2C3_CR2_bit at I2C3_CR2.B5;
    sbit  SADD6_I2C3_CR2_bit at I2C3_CR2.B6;
    sbit  SADD7_I2C3_CR2_bit at I2C3_CR2.B7;
    sbit  SADD8_I2C3_CR2_bit at I2C3_CR2.B8;
    sbit  SADD9_I2C3_CR2_bit at I2C3_CR2.B9;

sfr unsigned long   volatile I2C3_OAR1            absolute 0x40007808;
    sbit  OA10_I2C3_OAR1_bit at I2C3_OAR1.B0;
    sbit  OA11_I2C3_OAR1_bit at I2C3_OAR1.B1;
    sbit  OA12_I2C3_OAR1_bit at I2C3_OAR1.B2;
    sbit  OA13_I2C3_OAR1_bit at I2C3_OAR1.B3;
    sbit  OA14_I2C3_OAR1_bit at I2C3_OAR1.B4;
    sbit  OA15_I2C3_OAR1_bit at I2C3_OAR1.B5;
    sbit  OA16_I2C3_OAR1_bit at I2C3_OAR1.B6;
    sbit  OA17_I2C3_OAR1_bit at I2C3_OAR1.B7;
    sbit  OA18_I2C3_OAR1_bit at I2C3_OAR1.B8;
    sbit  OA19_I2C3_OAR1_bit at I2C3_OAR1.B9;
    sbit  OA1MODE_I2C3_OAR1_bit at I2C3_OAR1.B10;
    sbit  OA1EN_I2C3_OAR1_bit at I2C3_OAR1.B15;

sfr unsigned long   volatile I2C3_OAR2            absolute 0x4000780C;
    sbit  OA20_I2C3_OAR2_bit at I2C3_OAR2.B1;
    sbit  OA21_I2C3_OAR2_bit at I2C3_OAR2.B2;
    sbit  OA22_I2C3_OAR2_bit at I2C3_OAR2.B3;
    sbit  OA23_I2C3_OAR2_bit at I2C3_OAR2.B4;
    sbit  OA24_I2C3_OAR2_bit at I2C3_OAR2.B5;
    sbit  OA25_I2C3_OAR2_bit at I2C3_OAR2.B6;
    sbit  OA26_I2C3_OAR2_bit at I2C3_OAR2.B7;
    sbit  OA2MSK0_I2C3_OAR2_bit at I2C3_OAR2.B8;
    sbit  OA2MSK1_I2C3_OAR2_bit at I2C3_OAR2.B9;
    sbit  OA2MSK2_I2C3_OAR2_bit at I2C3_OAR2.B10;
    sbit  OA2EN_I2C3_OAR2_bit at I2C3_OAR2.B15;

sfr unsigned long   volatile I2C3_TIMINGR         absolute 0x40007810;
    sbit  SCLL0_I2C3_TIMINGR_bit at I2C3_TIMINGR.B0;
    sbit  SCLL1_I2C3_TIMINGR_bit at I2C3_TIMINGR.B1;
    sbit  SCLL2_I2C3_TIMINGR_bit at I2C3_TIMINGR.B2;
    sbit  SCLL3_I2C3_TIMINGR_bit at I2C3_TIMINGR.B3;
    sbit  SCLL4_I2C3_TIMINGR_bit at I2C3_TIMINGR.B4;
    sbit  SCLL5_I2C3_TIMINGR_bit at I2C3_TIMINGR.B5;
    sbit  SCLL6_I2C3_TIMINGR_bit at I2C3_TIMINGR.B6;
    sbit  SCLL7_I2C3_TIMINGR_bit at I2C3_TIMINGR.B7;
    sbit  SCLH0_I2C3_TIMINGR_bit at I2C3_TIMINGR.B8;
    sbit  SCLH1_I2C3_TIMINGR_bit at I2C3_TIMINGR.B9;
    sbit  SCLH2_I2C3_TIMINGR_bit at I2C3_TIMINGR.B10;
    sbit  SCLH3_I2C3_TIMINGR_bit at I2C3_TIMINGR.B11;
    sbit  SCLH4_I2C3_TIMINGR_bit at I2C3_TIMINGR.B12;
    sbit  SCLH5_I2C3_TIMINGR_bit at I2C3_TIMINGR.B13;
    sbit  SCLH6_I2C3_TIMINGR_bit at I2C3_TIMINGR.B14;
    sbit  SCLH7_I2C3_TIMINGR_bit at I2C3_TIMINGR.B15;
    sbit  SDADEL0_I2C3_TIMINGR_bit at I2C3_TIMINGR.B16;
    sbit  SDADEL1_I2C3_TIMINGR_bit at I2C3_TIMINGR.B17;
    sbit  SDADEL2_I2C3_TIMINGR_bit at I2C3_TIMINGR.B18;
    sbit  SDADEL3_I2C3_TIMINGR_bit at I2C3_TIMINGR.B19;
    sbit  SCLDEL0_I2C3_TIMINGR_bit at I2C3_TIMINGR.B20;
    sbit  SCLDEL1_I2C3_TIMINGR_bit at I2C3_TIMINGR.B21;
    sbit  SCLDEL2_I2C3_TIMINGR_bit at I2C3_TIMINGR.B22;
    sbit  SCLDEL3_I2C3_TIMINGR_bit at I2C3_TIMINGR.B23;
    sbit  PRESC0_I2C3_TIMINGR_bit at I2C3_TIMINGR.B28;
    sbit  PRESC1_I2C3_TIMINGR_bit at I2C3_TIMINGR.B29;
    sbit  PRESC2_I2C3_TIMINGR_bit at I2C3_TIMINGR.B30;
    sbit  PRESC3_I2C3_TIMINGR_bit at I2C3_TIMINGR.B31;

sfr unsigned long   volatile I2C3_TIMEOUTR        absolute 0x40007814;
    sbit  TIMEOUTA0_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B0;
    sbit  TIMEOUTA1_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B1;
    sbit  TIMEOUTA2_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B2;
    sbit  TIMEOUTA3_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B3;
    sbit  TIMEOUTA4_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B4;
    sbit  TIMEOUTA5_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B5;
    sbit  TIMEOUTA6_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B6;
    sbit  TIMEOUTA7_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B7;
    sbit  TIMEOUTA8_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B8;
    sbit  TIMEOUTA9_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B9;
    sbit  TIMEOUTA10_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B10;
    sbit  TIMEOUTA11_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B11;
    sbit  TIDLE_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B12;
    sbit  TIMOUTEN_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B15;
    sbit  TIMEOUTB0_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B16;
    sbit  TIMEOUTB1_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B17;
    sbit  TIMEOUTB2_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B18;
    sbit  TIMEOUTB3_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B19;
    sbit  TIMEOUTB4_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B20;
    sbit  TIMEOUTB5_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B21;
    sbit  TIMEOUTB6_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B22;
    sbit  TIMEOUTB7_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B23;
    sbit  TIMEOUTB8_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B24;
    sbit  TIMEOUTB9_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B25;
    sbit  TIMEOUTB10_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B26;
    sbit  TIMEOUTB11_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B27;
    sbit  TEXTEN_I2C3_TIMEOUTR_bit at I2C3_TIMEOUTR.B31;

sfr unsigned long   volatile I2C3_ISR             absolute 0x40007818;
    sbit  ADDCODE0_I2C3_ISR_bit at I2C3_ISR.B17;
    sbit  ADDCODE1_I2C3_ISR_bit at I2C3_ISR.B18;
    sbit  ADDCODE2_I2C3_ISR_bit at I2C3_ISR.B19;
    sbit  ADDCODE3_I2C3_ISR_bit at I2C3_ISR.B20;
    sbit  ADDCODE4_I2C3_ISR_bit at I2C3_ISR.B21;
    sbit  ADDCODE5_I2C3_ISR_bit at I2C3_ISR.B22;
    sbit  ADDCODE6_I2C3_ISR_bit at I2C3_ISR.B23;
    sbit  DIR_I2C3_ISR_bit at I2C3_ISR.B16;
    sbit  BUSY_I2C3_ISR_bit at I2C3_ISR.B15;
    sbit  ALERT_I2C3_ISR_bit at I2C3_ISR.B13;
    sbit  TIMEOUT_I2C3_ISR_bit at I2C3_ISR.B12;
    sbit  PECERR_I2C3_ISR_bit at I2C3_ISR.B11;
    sbit  OVR_I2C3_ISR_bit at I2C3_ISR.B10;
    sbit  ARLO_I2C3_ISR_bit at I2C3_ISR.B9;
    sbit  BERR_I2C3_ISR_bit at I2C3_ISR.B8;
    sbit  TCR_I2C3_ISR_bit at I2C3_ISR.B7;
    sbit  TC_I2C3_ISR_bit at I2C3_ISR.B6;
    sbit  STOPF_I2C3_ISR_bit at I2C3_ISR.B5;
    sbit  NACKF_I2C3_ISR_bit at I2C3_ISR.B4;
    sbit  ADDR_I2C3_ISR_bit at I2C3_ISR.B3;
    sbit  RXNE_I2C3_ISR_bit at I2C3_ISR.B2;
    sbit  TXIS_I2C3_ISR_bit at I2C3_ISR.B1;
    sbit  TXE_I2C3_ISR_bit at I2C3_ISR.B0;

sfr unsigned long   volatile I2C3_ICR             absolute 0x4000781C;
    sbit  ALERTCF_I2C3_ICR_bit at I2C3_ICR.B13;
    sbit  TIMOUTCF_I2C3_ICR_bit at I2C3_ICR.B12;
    sbit  PECCF_I2C3_ICR_bit at I2C3_ICR.B11;
    sbit  OVRCF_I2C3_ICR_bit at I2C3_ICR.B10;
    sbit  ARLOCF_I2C3_ICR_bit at I2C3_ICR.B9;
    sbit  BERRCF_I2C3_ICR_bit at I2C3_ICR.B8;
    sbit  STOPCF_I2C3_ICR_bit at I2C3_ICR.B5;
    sbit  NACKCF_I2C3_ICR_bit at I2C3_ICR.B4;
    sbit  ADDRCF_I2C3_ICR_bit at I2C3_ICR.B3;

sfr unsigned long   volatile I2C3_PECR            absolute 0x40007820;
    sbit  PEC0_I2C3_PECR_bit at I2C3_PECR.B0;
    sbit  PEC1_I2C3_PECR_bit at I2C3_PECR.B1;
    sbit  PEC2_I2C3_PECR_bit at I2C3_PECR.B2;
    sbit  PEC3_I2C3_PECR_bit at I2C3_PECR.B3;
    sbit  PEC4_I2C3_PECR_bit at I2C3_PECR.B4;
    sbit  PEC5_I2C3_PECR_bit at I2C3_PECR.B5;
    sbit  PEC6_I2C3_PECR_bit at I2C3_PECR.B6;
    sbit  PEC7_I2C3_PECR_bit at I2C3_PECR.B7;

sfr unsigned long   volatile I2C3_RXDR            absolute 0x40007824;
    sbit  RXDATA0_I2C3_RXDR_bit at I2C3_RXDR.B0;
    sbit  RXDATA1_I2C3_RXDR_bit at I2C3_RXDR.B1;
    sbit  RXDATA2_I2C3_RXDR_bit at I2C3_RXDR.B2;
    sbit  RXDATA3_I2C3_RXDR_bit at I2C3_RXDR.B3;
    sbit  RXDATA4_I2C3_RXDR_bit at I2C3_RXDR.B4;
    sbit  RXDATA5_I2C3_RXDR_bit at I2C3_RXDR.B5;
    sbit  RXDATA6_I2C3_RXDR_bit at I2C3_RXDR.B6;
    sbit  RXDATA7_I2C3_RXDR_bit at I2C3_RXDR.B7;

sfr unsigned long   volatile I2C3_TXDR            absolute 0x40007828;
    sbit  TXDATA0_I2C3_TXDR_bit at I2C3_TXDR.B0;
    sbit  TXDATA1_I2C3_TXDR_bit at I2C3_TXDR.B1;
    sbit  TXDATA2_I2C3_TXDR_bit at I2C3_TXDR.B2;
    sbit  TXDATA3_I2C3_TXDR_bit at I2C3_TXDR.B3;
    sbit  TXDATA4_I2C3_TXDR_bit at I2C3_TXDR.B4;
    sbit  TXDATA5_I2C3_TXDR_bit at I2C3_TXDR.B5;
    sbit  TXDATA6_I2C3_TXDR_bit at I2C3_TXDR.B6;
    sbit  TXDATA7_I2C3_TXDR_bit at I2C3_TXDR.B7;

sfr unsigned long   volatile PWR_CR               absolute 0x40007000;
    const register unsigned short int LPDS = 0;
    sbit  LPDS_bit at PWR_CR.B0;
    const register unsigned short int PDDS = 1;
    sbit  PDDS_bit at PWR_CR.B1;
    const register unsigned short int CWUF = 2;
    sbit  CWUF_bit at PWR_CR.B2;
    const register unsigned short int CSBF = 3;
    sbit  CSBF_bit at PWR_CR.B3;
    const register unsigned short int PVDE = 4;
    sbit  PVDE_bit at PWR_CR.B4;
    const register unsigned short int PLS0 = 5;
    sbit  PLS0_bit at PWR_CR.B5;
    const register unsigned short int PLS1 = 6;
    sbit  PLS1_bit at PWR_CR.B6;
    const register unsigned short int PLS2 = 7;
    sbit  PLS2_bit at PWR_CR.B7;
    const register unsigned short int DBP = 8;
    sbit  DBP_bit at PWR_CR.B8;
    const register unsigned short int ULP = 9;
    sbit  ULP_bit at PWR_CR.B9;
    const register unsigned short int FWU = 10;
    sbit  FWU_bit at PWR_CR.B10;
    const register unsigned short int VOS0 = 11;
    sbit  VOS0_bit at PWR_CR.B11;
    const register unsigned short int VOS1 = 12;
    sbit  VOS1_bit at PWR_CR.B12;
    const register unsigned short int DS_EE_KOFF = 13;
    sbit  DS_EE_KOFF_bit at PWR_CR.B13;
    const register unsigned short int LPRUN = 14;
    sbit  LPRUN_bit at PWR_CR.B14;

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
    sbit  WUF_PWR_CSR_bit at PWR_CSR.B0;
    const register unsigned short int VOSF = 4;
    sbit  VOSF_bit at PWR_CSR.B4;
    const register unsigned short int REGLPF = 5;
    sbit  REGLPF_bit at PWR_CSR.B5;

sfr unsigned long   volatile FLASH_ACR            absolute 0x40022000;
    const register unsigned short int LATENCY = 0;
    sbit  LATENCY_bit at FLASH_ACR.B0;
    const register unsigned short int PRFTEN = 1;
    sbit  PRFTEN_bit at FLASH_ACR.B1;
    const register unsigned short int SLEEP_PD = 3;
    sbit  SLEEP_PD_bit at FLASH_ACR.B3;
    const register unsigned short int RUN_PD = 4;
    sbit  RUN_PD_bit at FLASH_ACR.B4;
    const register unsigned short int DESAB_BUF = 5;
    sbit  DESAB_BUF_bit at FLASH_ACR.B5;
    const register unsigned short int PRE_READ = 6;
    sbit  PRE_READ_bit at FLASH_ACR.B6;

sfr unsigned long   volatile FLASH_PECR           absolute 0x40022004;
    const register unsigned short int PELOCK = 0;
    sbit  PELOCK_bit at FLASH_PECR.B0;
    const register unsigned short int PRGLOCK = 1;
    sbit  PRGLOCK_bit at FLASH_PECR.B1;
    const register unsigned short int OPTLOCK = 2;
    sbit  OPTLOCK_bit at FLASH_PECR.B2;
    const register unsigned short int PROG = 3;
    sbit  PROG_bit at FLASH_PECR.B3;
    const register unsigned short int DATA_ = 4;
    sbit  DATA_bit at FLASH_PECR.B4;
    const register unsigned short int FTDW = 8;
    sbit  FTDW_bit at FLASH_PECR.B8;
    const register unsigned short int ERASE_ = 9;
    sbit  ERASE_bit at FLASH_PECR.B9;
    const register unsigned short int FPRG = 10;
    sbit  FPRG_bit at FLASH_PECR.B10;
    const register unsigned short int PARALLELBANK = 15;
    sbit  PARALLELBANK_bit at FLASH_PECR.B15;
    const register unsigned short int EOPIE = 16;
    sbit  EOPIE_bit at FLASH_PECR.B16;
    sbit  ERRIE_FLASH_PECR_bit at FLASH_PECR.B17;
    const register unsigned short int OBL_LAUNCH = 18;
    sbit  OBL_LAUNCH_bit at FLASH_PECR.B18;

sfr unsigned long   volatile FLASH_PDKEYR         absolute 0x40022008;
    const register unsigned short int PDKEYR0 = 0;
    sbit  PDKEYR0_bit at FLASH_PDKEYR.B0;
    const register unsigned short int PDKEYR1 = 1;
    sbit  PDKEYR1_bit at FLASH_PDKEYR.B1;
    const register unsigned short int PDKEYR2 = 2;
    sbit  PDKEYR2_bit at FLASH_PDKEYR.B2;
    const register unsigned short int PDKEYR3 = 3;
    sbit  PDKEYR3_bit at FLASH_PDKEYR.B3;
    const register unsigned short int PDKEYR4 = 4;
    sbit  PDKEYR4_bit at FLASH_PDKEYR.B4;
    const register unsigned short int PDKEYR5 = 5;
    sbit  PDKEYR5_bit at FLASH_PDKEYR.B5;
    const register unsigned short int PDKEYR6 = 6;
    sbit  PDKEYR6_bit at FLASH_PDKEYR.B6;
    const register unsigned short int PDKEYR7 = 7;
    sbit  PDKEYR7_bit at FLASH_PDKEYR.B7;
    const register unsigned short int PDKEYR8 = 8;
    sbit  PDKEYR8_bit at FLASH_PDKEYR.B8;
    const register unsigned short int PDKEYR9 = 9;
    sbit  PDKEYR9_bit at FLASH_PDKEYR.B9;
    const register unsigned short int PDKEYR10 = 10;
    sbit  PDKEYR10_bit at FLASH_PDKEYR.B10;
    const register unsigned short int PDKEYR11 = 11;
    sbit  PDKEYR11_bit at FLASH_PDKEYR.B11;
    const register unsigned short int PDKEYR12 = 12;
    sbit  PDKEYR12_bit at FLASH_PDKEYR.B12;
    const register unsigned short int PDKEYR13 = 13;
    sbit  PDKEYR13_bit at FLASH_PDKEYR.B13;
    const register unsigned short int PDKEYR14 = 14;
    sbit  PDKEYR14_bit at FLASH_PDKEYR.B14;
    const register unsigned short int PDKEYR15 = 15;
    sbit  PDKEYR15_bit at FLASH_PDKEYR.B15;
    const register unsigned short int PDKEYR16 = 16;
    sbit  PDKEYR16_bit at FLASH_PDKEYR.B16;
    const register unsigned short int PDKEYR17 = 17;
    sbit  PDKEYR17_bit at FLASH_PDKEYR.B17;
    const register unsigned short int PDKEYR18 = 18;
    sbit  PDKEYR18_bit at FLASH_PDKEYR.B18;
    const register unsigned short int PDKEYR19 = 19;
    sbit  PDKEYR19_bit at FLASH_PDKEYR.B19;
    const register unsigned short int PDKEYR20 = 20;
    sbit  PDKEYR20_bit at FLASH_PDKEYR.B20;
    const register unsigned short int PDKEYR21 = 21;
    sbit  PDKEYR21_bit at FLASH_PDKEYR.B21;
    const register unsigned short int PDKEYR22 = 22;
    sbit  PDKEYR22_bit at FLASH_PDKEYR.B22;
    const register unsigned short int PDKEYR23 = 23;
    sbit  PDKEYR23_bit at FLASH_PDKEYR.B23;
    const register unsigned short int PDKEYR24 = 24;
    sbit  PDKEYR24_bit at FLASH_PDKEYR.B24;
    const register unsigned short int PDKEYR25 = 25;
    sbit  PDKEYR25_bit at FLASH_PDKEYR.B25;
    const register unsigned short int PDKEYR26 = 26;
    sbit  PDKEYR26_bit at FLASH_PDKEYR.B26;
    const register unsigned short int PDKEYR27 = 27;
    sbit  PDKEYR27_bit at FLASH_PDKEYR.B27;
    const register unsigned short int PDKEYR28 = 28;
    sbit  PDKEYR28_bit at FLASH_PDKEYR.B28;
    const register unsigned short int PDKEYR29 = 29;
    sbit  PDKEYR29_bit at FLASH_PDKEYR.B29;
    const register unsigned short int PDKEYR30 = 30;
    sbit  PDKEYR30_bit at FLASH_PDKEYR.B30;
    const register unsigned short int PDKEYR31 = 31;
    sbit  PDKEYR31_bit at FLASH_PDKEYR.B31;

sfr unsigned long   volatile FLASH_PEKEYR         absolute 0x4002200C;
    const register unsigned short int PEKEYR0 = 0;
    sbit  PEKEYR0_bit at FLASH_PEKEYR.B0;
    const register unsigned short int PEKEYR1 = 1;
    sbit  PEKEYR1_bit at FLASH_PEKEYR.B1;
    const register unsigned short int PEKEYR2 = 2;
    sbit  PEKEYR2_bit at FLASH_PEKEYR.B2;
    const register unsigned short int PEKEYR3 = 3;
    sbit  PEKEYR3_bit at FLASH_PEKEYR.B3;
    const register unsigned short int PEKEYR4 = 4;
    sbit  PEKEYR4_bit at FLASH_PEKEYR.B4;
    const register unsigned short int PEKEYR5 = 5;
    sbit  PEKEYR5_bit at FLASH_PEKEYR.B5;
    const register unsigned short int PEKEYR6 = 6;
    sbit  PEKEYR6_bit at FLASH_PEKEYR.B6;
    const register unsigned short int PEKEYR7 = 7;
    sbit  PEKEYR7_bit at FLASH_PEKEYR.B7;
    const register unsigned short int PEKEYR8 = 8;
    sbit  PEKEYR8_bit at FLASH_PEKEYR.B8;
    const register unsigned short int PEKEYR9 = 9;
    sbit  PEKEYR9_bit at FLASH_PEKEYR.B9;
    const register unsigned short int PEKEYR10 = 10;
    sbit  PEKEYR10_bit at FLASH_PEKEYR.B10;
    const register unsigned short int PEKEYR11 = 11;
    sbit  PEKEYR11_bit at FLASH_PEKEYR.B11;
    const register unsigned short int PEKEYR12 = 12;
    sbit  PEKEYR12_bit at FLASH_PEKEYR.B12;
    const register unsigned short int PEKEYR13 = 13;
    sbit  PEKEYR13_bit at FLASH_PEKEYR.B13;
    const register unsigned short int PEKEYR14 = 14;
    sbit  PEKEYR14_bit at FLASH_PEKEYR.B14;
    const register unsigned short int PEKEYR15 = 15;
    sbit  PEKEYR15_bit at FLASH_PEKEYR.B15;
    const register unsigned short int PEKEYR16 = 16;
    sbit  PEKEYR16_bit at FLASH_PEKEYR.B16;
    const register unsigned short int PEKEYR17 = 17;
    sbit  PEKEYR17_bit at FLASH_PEKEYR.B17;
    const register unsigned short int PEKEYR18 = 18;
    sbit  PEKEYR18_bit at FLASH_PEKEYR.B18;
    const register unsigned short int PEKEYR19 = 19;
    sbit  PEKEYR19_bit at FLASH_PEKEYR.B19;
    const register unsigned short int PEKEYR20 = 20;
    sbit  PEKEYR20_bit at FLASH_PEKEYR.B20;
    const register unsigned short int PEKEYR21 = 21;
    sbit  PEKEYR21_bit at FLASH_PEKEYR.B21;
    const register unsigned short int PEKEYR22 = 22;
    sbit  PEKEYR22_bit at FLASH_PEKEYR.B22;
    const register unsigned short int PEKEYR23 = 23;
    sbit  PEKEYR23_bit at FLASH_PEKEYR.B23;
    const register unsigned short int PEKEYR24 = 24;
    sbit  PEKEYR24_bit at FLASH_PEKEYR.B24;
    const register unsigned short int PEKEYR25 = 25;
    sbit  PEKEYR25_bit at FLASH_PEKEYR.B25;
    const register unsigned short int PEKEYR26 = 26;
    sbit  PEKEYR26_bit at FLASH_PEKEYR.B26;
    const register unsigned short int PEKEYR27 = 27;
    sbit  PEKEYR27_bit at FLASH_PEKEYR.B27;
    const register unsigned short int PEKEYR28 = 28;
    sbit  PEKEYR28_bit at FLASH_PEKEYR.B28;
    const register unsigned short int PEKEYR29 = 29;
    sbit  PEKEYR29_bit at FLASH_PEKEYR.B29;
    const register unsigned short int PEKEYR30 = 30;
    sbit  PEKEYR30_bit at FLASH_PEKEYR.B30;
    const register unsigned short int PEKEYR31 = 31;
    sbit  PEKEYR31_bit at FLASH_PEKEYR.B31;

sfr unsigned long   volatile FLASH_PRGKEYR        absolute 0x40022010;
    const register unsigned short int PRGKEYR0 = 0;
    sbit  PRGKEYR0_bit at FLASH_PRGKEYR.B0;
    const register unsigned short int PRGKEYR1 = 1;
    sbit  PRGKEYR1_bit at FLASH_PRGKEYR.B1;
    const register unsigned short int PRGKEYR2 = 2;
    sbit  PRGKEYR2_bit at FLASH_PRGKEYR.B2;
    const register unsigned short int PRGKEYR3 = 3;
    sbit  PRGKEYR3_bit at FLASH_PRGKEYR.B3;
    const register unsigned short int PRGKEYR4 = 4;
    sbit  PRGKEYR4_bit at FLASH_PRGKEYR.B4;
    const register unsigned short int PRGKEYR5 = 5;
    sbit  PRGKEYR5_bit at FLASH_PRGKEYR.B5;
    const register unsigned short int PRGKEYR6 = 6;
    sbit  PRGKEYR6_bit at FLASH_PRGKEYR.B6;
    const register unsigned short int PRGKEYR7 = 7;
    sbit  PRGKEYR7_bit at FLASH_PRGKEYR.B7;
    const register unsigned short int PRGKEYR8 = 8;
    sbit  PRGKEYR8_bit at FLASH_PRGKEYR.B8;
    const register unsigned short int PRGKEYR9 = 9;
    sbit  PRGKEYR9_bit at FLASH_PRGKEYR.B9;
    const register unsigned short int PRGKEYR10 = 10;
    sbit  PRGKEYR10_bit at FLASH_PRGKEYR.B10;
    const register unsigned short int PRGKEYR11 = 11;
    sbit  PRGKEYR11_bit at FLASH_PRGKEYR.B11;
    const register unsigned short int PRGKEYR12 = 12;
    sbit  PRGKEYR12_bit at FLASH_PRGKEYR.B12;
    const register unsigned short int PRGKEYR13 = 13;
    sbit  PRGKEYR13_bit at FLASH_PRGKEYR.B13;
    const register unsigned short int PRGKEYR14 = 14;
    sbit  PRGKEYR14_bit at FLASH_PRGKEYR.B14;
    const register unsigned short int PRGKEYR15 = 15;
    sbit  PRGKEYR15_bit at FLASH_PRGKEYR.B15;
    const register unsigned short int PRGKEYR16 = 16;
    sbit  PRGKEYR16_bit at FLASH_PRGKEYR.B16;
    const register unsigned short int PRGKEYR17 = 17;
    sbit  PRGKEYR17_bit at FLASH_PRGKEYR.B17;
    const register unsigned short int PRGKEYR18 = 18;
    sbit  PRGKEYR18_bit at FLASH_PRGKEYR.B18;
    const register unsigned short int PRGKEYR19 = 19;
    sbit  PRGKEYR19_bit at FLASH_PRGKEYR.B19;
    const register unsigned short int PRGKEYR20 = 20;
    sbit  PRGKEYR20_bit at FLASH_PRGKEYR.B20;
    const register unsigned short int PRGKEYR21 = 21;
    sbit  PRGKEYR21_bit at FLASH_PRGKEYR.B21;
    const register unsigned short int PRGKEYR22 = 22;
    sbit  PRGKEYR22_bit at FLASH_PRGKEYR.B22;
    const register unsigned short int PRGKEYR23 = 23;
    sbit  PRGKEYR23_bit at FLASH_PRGKEYR.B23;
    const register unsigned short int PRGKEYR24 = 24;
    sbit  PRGKEYR24_bit at FLASH_PRGKEYR.B24;
    const register unsigned short int PRGKEYR25 = 25;
    sbit  PRGKEYR25_bit at FLASH_PRGKEYR.B25;
    const register unsigned short int PRGKEYR26 = 26;
    sbit  PRGKEYR26_bit at FLASH_PRGKEYR.B26;
    const register unsigned short int PRGKEYR27 = 27;
    sbit  PRGKEYR27_bit at FLASH_PRGKEYR.B27;
    const register unsigned short int PRGKEYR28 = 28;
    sbit  PRGKEYR28_bit at FLASH_PRGKEYR.B28;
    const register unsigned short int PRGKEYR29 = 29;
    sbit  PRGKEYR29_bit at FLASH_PRGKEYR.B29;
    const register unsigned short int PRGKEYR30 = 30;
    sbit  PRGKEYR30_bit at FLASH_PRGKEYR.B30;
    const register unsigned short int PRGKEYR31 = 31;
    sbit  PRGKEYR31_bit at FLASH_PRGKEYR.B31;

sfr unsigned long   volatile FLASH_OPTKEYR        absolute 0x40022014;
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

sfr unsigned long   volatile FLASH_SR             absolute 0x40022018;
    sbit  BSY_FLASH_SR_bit at FLASH_SR.B0;
    const register unsigned short int EOP = 1;
    sbit  EOP_bit at FLASH_SR.B1;
    const register unsigned short int ENDHV = 2;
    sbit  ENDHV_bit at FLASH_SR.B2;
    const register unsigned short int READY = 3;
    sbit  READY_bit at FLASH_SR.B3;
    const register unsigned short int WRPERR = 8;
    sbit  WRPERR_bit at FLASH_SR.B8;
    const register unsigned short int PGAERR = 9;
    sbit  PGAERR_bit at FLASH_SR.B9;
    const register unsigned short int SIZERR = 10;
    sbit  SIZERR_bit at FLASH_SR.B10;
    const register unsigned short int OPTVERR = 11;
    sbit  OPTVERR_bit at FLASH_SR.B11;
    sbit  RDERR_FLASH_SR_bit at FLASH_SR.B14;
    const register unsigned short int NOTZEROERR = 16;
    sbit  NOTZEROERR_bit at FLASH_SR.B16;
    const register unsigned short int FWWERR = 17;
    sbit  FWWERR_bit at FLASH_SR.B17;

sfr unsigned long   volatile FLASH_OBR            absolute 0x4002201C;
    const register unsigned short int RDPRT0 = 0;
    sbit  RDPRT0_bit at FLASH_OBR.B0;
    const register unsigned short int RDPRT1 = 1;
    sbit  RDPRT1_bit at FLASH_OBR.B1;
    const register unsigned short int RDPRT2 = 2;
    sbit  RDPRT2_bit at FLASH_OBR.B2;
    const register unsigned short int RDPRT3 = 3;
    sbit  RDPRT3_bit at FLASH_OBR.B3;
    const register unsigned short int RDPRT4 = 4;
    sbit  RDPRT4_bit at FLASH_OBR.B4;
    const register unsigned short int RDPRT5 = 5;
    sbit  RDPRT5_bit at FLASH_OBR.B5;
    const register unsigned short int RDPRT6 = 6;
    sbit  RDPRT6_bit at FLASH_OBR.B6;
    const register unsigned short int RDPRT7 = 7;
    sbit  RDPRT7_bit at FLASH_OBR.B7;
    const register unsigned short int BOR_LEV0 = 16;
    sbit  BOR_LEV0_bit at FLASH_OBR.B16;
    const register unsigned short int BOR_LEV1 = 17;
    sbit  BOR_LEV1_bit at FLASH_OBR.B17;
    const register unsigned short int BOR_LEV2 = 18;
    sbit  BOR_LEV2_bit at FLASH_OBR.B18;
    const register unsigned short int BOR_LEV3 = 19;
    sbit  BOR_LEV3_bit at FLASH_OBR.B19;
    const register unsigned short int SPRMOD = 8;
    sbit  SPRMOD_bit at FLASH_OBR.B8;

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
    const register unsigned short int MR19 = 19;
    sbit  MR19_bit at EXTI_IMR.B19;
    const register unsigned short int MR21 = 21;
    sbit  MR21_bit at EXTI_IMR.B21;
    const register unsigned short int MR22 = 22;
    sbit  MR22_bit at EXTI_IMR.B22;
    const register unsigned short int MR23 = 23;
    sbit  MR23_bit at EXTI_IMR.B23;
    const register unsigned short int MR25 = 25;
    sbit  MR25_bit at EXTI_IMR.B25;
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
    sbit  MR19_EXTI_EMR_bit at EXTI_EMR.B19;
    sbit  MR21_EXTI_EMR_bit at EXTI_EMR.B21;
    sbit  MR22_EXTI_EMR_bit at EXTI_EMR.B22;
    sbit  MR23_EXTI_EMR_bit at EXTI_EMR.B23;
    sbit  MR25_EXTI_EMR_bit at EXTI_EMR.B25;
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

sfr unsigned long   volatile ADC_ISR              absolute 0x40012400;
    const register unsigned short int ADRDY = 0;
    sbit  ADRDY_bit at ADC_ISR.B0;
    const register unsigned short int EOSMP = 1;
    sbit  EOSMP_bit at ADC_ISR.B1;
    const register unsigned short int EOC = 2;
    sbit  EOC_bit at ADC_ISR.B2;
    const register unsigned short int EOS = 3;
    sbit  EOS_bit at ADC_ISR.B3;
    sbit  OVR_ADC_ISR_bit at ADC_ISR.B4;
    const register unsigned short int AWD = 7;
    sbit  AWD_bit at ADC_ISR.B7;
    const register unsigned short int EOCAL = 11;
    sbit  EOCAL_bit at ADC_ISR.B11;

sfr unsigned long   volatile ADC_IER              absolute 0x40012404;
    const register unsigned short int ADRDYIE = 0;
    sbit  ADRDYIE_bit at ADC_IER.B0;
    const register unsigned short int EOSMPIE = 1;
    sbit  EOSMPIE_bit at ADC_IER.B1;
    const register unsigned short int EOCIE = 2;
    sbit  EOCIE_bit at ADC_IER.B2;
    const register unsigned short int EOSIE = 3;
    sbit  EOSIE_bit at ADC_IER.B3;
    const register unsigned short int OVRIE = 4;
    sbit  OVRIE_bit at ADC_IER.B4;
    const register unsigned short int AWDIE = 7;
    sbit  AWDIE_bit at ADC_IER.B7;
    const register unsigned short int EOCALIE = 11;
    sbit  EOCALIE_bit at ADC_IER.B11;

sfr unsigned long   volatile ADC_CR               absolute 0x40012408;
    const register unsigned short int ADEN = 0;
    sbit  ADEN_bit at ADC_CR.B0;
    const register unsigned short int ADDIS = 1;
    sbit  ADDIS_bit at ADC_CR.B1;
    const register unsigned short int ADSTART = 2;
    sbit  ADSTART_bit at ADC_CR.B2;
    const register unsigned short int ADSTP = 4;
    sbit  ADSTP_bit at ADC_CR.B4;
    const register unsigned short int ADVREGEN = 28;
    sbit  ADVREGEN_bit at ADC_CR.B28;
    const register unsigned short int ADCAL = 31;
    sbit  ADCAL_bit at ADC_CR.B31;

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
    const register unsigned short int OVSE = 0;
    sbit  OVSE_bit at ADC_CFGR2.B0;
    const register unsigned short int OVSR0 = 2;
    sbit  OVSR0_bit at ADC_CFGR2.B2;
    const register unsigned short int OVSR1 = 3;
    sbit  OVSR1_bit at ADC_CFGR2.B3;
    const register unsigned short int OVSR2 = 4;
    sbit  OVSR2_bit at ADC_CFGR2.B4;
    const register unsigned short int OVSS0 = 5;
    sbit  OVSS0_bit at ADC_CFGR2.B5;
    const register unsigned short int OVSS1 = 6;
    sbit  OVSS1_bit at ADC_CFGR2.B6;
    const register unsigned short int OVSS2 = 7;
    sbit  OVSS2_bit at ADC_CFGR2.B7;
    const register unsigned short int OVSS3 = 8;
    sbit  OVSS3_bit at ADC_CFGR2.B8;
    const register unsigned short int TOVS = 9;
    sbit  TOVS_bit at ADC_CFGR2.B9;
    const register unsigned short int CKMODE0 = 30;
    sbit  CKMODE0_bit at ADC_CFGR2.B30;
    const register unsigned short int CKMODE1 = 31;
    sbit  CKMODE1_bit at ADC_CFGR2.B31;

sfr unsigned long   volatile ADC_SMPR             absolute 0x40012414;
    const register unsigned short int SMPR0 = 0;
    sbit  SMPR0_bit at ADC_SMPR.B0;
    const register unsigned short int SMPR1 = 1;
    sbit  SMPR1_bit at ADC_SMPR.B1;
    const register unsigned short int SMPR2 = 2;
    sbit  SMPR2_bit at ADC_SMPR.B2;

sfr unsigned long   volatile ADC_TR               absolute 0x40012420;
    sbit  HT0_ADC_TR_bit at ADC_TR.B16;
    sbit  HT1_ADC_TR_bit at ADC_TR.B17;
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
    sbit  PRESC0_ADC_CCR_bit at ADC_CCR.B18;
    sbit  PRESC1_ADC_CCR_bit at ADC_CCR.B19;
    sbit  PRESC2_ADC_CCR_bit at ADC_CCR.B20;
    sbit  PRESC3_ADC_CCR_bit at ADC_CCR.B21;
    const register unsigned short int VREFEN = 22;
    sbit  VREFEN_bit at ADC_CCR.B22;
    const register unsigned short int TSEN = 23;
    sbit  TSEN_bit at ADC_CCR.B23;
    const register unsigned short int VLCDEN = 24;
    sbit  VLCDEN_bit at ADC_CCR.B24;
    const register unsigned short int LFMEN = 25;
    sbit  LFMEN_bit at ADC_CCR.B25;

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
    const register unsigned short int DBG_SLEEP = 0;
    sbit  DBG_SLEEP_bit at DBG_CR.B0;

sfr unsigned long   volatile DBG_APB1_FZ          absolute 0x40015808;
    const register unsigned short int DBG_TIMER2_STOP = 0;
    sbit  DBG_TIMER2_STOP_bit at DBG_APB1_FZ.B0;
    const register unsigned short int DBG_TIMER6_STOP = 4;
    sbit  DBG_TIMER6_STOP_bit at DBG_APB1_FZ.B4;
    const register unsigned short int DBG_RTC_STOP = 10;
    sbit  DBG_RTC_STOP_bit at DBG_APB1_FZ.B10;
    const register unsigned short int DBG_WWDG_STOP = 11;
    sbit  DBG_WWDG_STOP_bit at DBG_APB1_FZ.B11;
    const register unsigned short int DBG_IWDG_STOP = 12;
    sbit  DBG_IWDG_STOP_bit at DBG_APB1_FZ.B12;
    const register unsigned short int DBG_I2C1_STOP = 21;
    sbit  DBG_I2C1_STOP_bit at DBG_APB1_FZ.B21;
    const register unsigned short int DBG_I2C2_STOP = 22;
    sbit  DBG_I2C2_STOP_bit at DBG_APB1_FZ.B22;
    const register unsigned short int DBG_LPTIMER_STOP = 31;
    sbit  DBG_LPTIMER_STOP_bit at DBG_APB1_FZ.B31;

sfr unsigned long   volatile DBG_APB2_FZ          absolute 0x4001580C;
    const register unsigned short int DBG_TIMER21_STOP = 2;
    sbit  DBG_TIMER21_STOP_bit at DBG_APB2_FZ.B2;
    const register unsigned short int DBG_TIMER22_STO = 6;
    sbit  DBG_TIMER22_STO_bit at DBG_APB2_FZ.B6;

sfr unsigned long   volatile TIM2_CR1             absolute 0x40000000;
    const register unsigned short int CKD0 = 8;
    sbit  CKD0_bit at TIM2_CR1.B8;
    const register unsigned short int CKD1 = 9;
    sbit  CKD1_bit at TIM2_CR1.B9;
    const register unsigned short int ARPE = 7;
    sbit  ARPE_bit at TIM2_CR1.B7;
    const register unsigned short int CMS0 = 5;
    sbit  CMS0_bit at TIM2_CR1.B5;
    const register unsigned short int CMS1 = 6;
    sbit  CMS1_bit at TIM2_CR1.B6;
    sbit  DIR_TIM2_CR1_bit at TIM2_CR1.B4;
    const register unsigned short int OPM = 3;
    sbit  OPM_bit at TIM2_CR1.B3;
    const register unsigned short int URS = 2;
    sbit  URS_bit at TIM2_CR1.B2;
    const register unsigned short int UDIS = 1;
    sbit  UDIS_bit at TIM2_CR1.B1;
    const register unsigned short int CEN = 0;
    sbit  CEN_bit at TIM2_CR1.B0;

sfr unsigned long   volatile TIM2_CR2             absolute 0x40000004;
    const register unsigned short int TI1S = 7;
    sbit  TI1S_bit at TIM2_CR2.B7;
    const register unsigned short int MMS0 = 4;
    sbit  MMS0_bit at TIM2_CR2.B4;
    const register unsigned short int MMS1 = 5;
    sbit  MMS1_bit at TIM2_CR2.B5;
    const register unsigned short int MMS2 = 6;
    sbit  MMS2_bit at TIM2_CR2.B6;
    const register unsigned short int CCDS = 3;
    sbit  CCDS_bit at TIM2_CR2.B3;

sfr unsigned long   volatile TIM2_SMCR            absolute 0x40000008;
    const register unsigned short int ETP = 15;
    sbit  ETP_bit at TIM2_SMCR.B15;
    const register unsigned short int ECE = 14;
    sbit  ECE_bit at TIM2_SMCR.B14;
    const register unsigned short int ETPS0 = 12;
    sbit  ETPS0_bit at TIM2_SMCR.B12;
    const register unsigned short int ETPS1 = 13;
    sbit  ETPS1_bit at TIM2_SMCR.B13;
    const register unsigned short int ETF0 = 8;
    sbit  ETF0_bit at TIM2_SMCR.B8;
    const register unsigned short int ETF1 = 9;
    sbit  ETF1_bit at TIM2_SMCR.B9;
    const register unsigned short int ETF2 = 10;
    sbit  ETF2_bit at TIM2_SMCR.B10;
    const register unsigned short int ETF3 = 11;
    sbit  ETF3_bit at TIM2_SMCR.B11;
    const register unsigned short int MSM = 7;
    sbit  MSM_bit at TIM2_SMCR.B7;
    const register unsigned short int TS0 = 4;
    sbit  TS0_bit at TIM2_SMCR.B4;
    const register unsigned short int TS1 = 5;
    sbit  TS1_bit at TIM2_SMCR.B5;
    const register unsigned short int TS2 = 6;
    sbit  TS2_bit at TIM2_SMCR.B6;
    const register unsigned short int SMS0 = 0;
    sbit  SMS0_bit at TIM2_SMCR.B0;
    const register unsigned short int SMS1 = 1;
    sbit  SMS1_bit at TIM2_SMCR.B1;
    const register unsigned short int SMS2 = 2;
    sbit  SMS2_bit at TIM2_SMCR.B2;

sfr unsigned long   volatile TIM2_DIER            absolute 0x4000000C;
    const register unsigned short int TDE = 14;
    sbit  TDE_bit at TIM2_DIER.B14;
    const register unsigned short int COMDE = 13;
    sbit  COMDE_bit at TIM2_DIER.B13;
    const register unsigned short int CC4DE = 12;
    sbit  CC4DE_bit at TIM2_DIER.B12;
    const register unsigned short int CC3DE = 11;
    sbit  CC3DE_bit at TIM2_DIER.B11;
    const register unsigned short int CC2DE = 10;
    sbit  CC2DE_bit at TIM2_DIER.B10;
    const register unsigned short int CC1DE = 9;
    sbit  CC1DE_bit at TIM2_DIER.B9;
    const register unsigned short int UDE = 8;
    sbit  UDE_bit at TIM2_DIER.B8;
    const register unsigned short int TIE = 6;
    sbit  TIE_bit at TIM2_DIER.B6;
    const register unsigned short int CC4IE = 4;
    sbit  CC4IE_bit at TIM2_DIER.B4;
    const register unsigned short int CC3IE = 3;
    sbit  CC3IE_bit at TIM2_DIER.B3;
    const register unsigned short int CC2IE = 2;
    sbit  CC2IE_bit at TIM2_DIER.B2;
    const register unsigned short int CC1IE = 1;
    sbit  CC1IE_bit at TIM2_DIER.B1;
    const register unsigned short int UIE = 0;
    sbit  UIE_bit at TIM2_DIER.B0;

sfr unsigned long   volatile TIM2_SR              absolute 0x40000010;
    const register unsigned short int CC4OF = 12;
    sbit  CC4OF_bit at TIM2_SR.B12;
    const register unsigned short int CC3OF = 11;
    sbit  CC3OF_bit at TIM2_SR.B11;
    const register unsigned short int CC2OF = 10;
    sbit  CC2OF_bit at TIM2_SR.B10;
    const register unsigned short int CC1OF = 9;
    sbit  CC1OF_bit at TIM2_SR.B9;
    const register unsigned short int TIF = 6;
    sbit  TIF_bit at TIM2_SR.B6;
    const register unsigned short int CC4IF = 4;
    sbit  CC4IF_bit at TIM2_SR.B4;
    const register unsigned short int CC3IF = 3;
    sbit  CC3IF_bit at TIM2_SR.B3;
    const register unsigned short int CC2IF = 2;
    sbit  CC2IF_bit at TIM2_SR.B2;
    const register unsigned short int CC1IF = 1;
    sbit  CC1IF_bit at TIM2_SR.B1;
    const register unsigned short int UIF = 0;
    sbit  UIF_bit at TIM2_SR.B0;

sfr unsigned long   volatile TIM2_EGR             absolute 0x40000014;
    const register unsigned short int TG = 6;
    sbit  TG_bit at TIM2_EGR.B6;
    const register unsigned short int CC4G = 4;
    sbit  CC4G_bit at TIM2_EGR.B4;
    const register unsigned short int CC3G = 3;
    sbit  CC3G_bit at TIM2_EGR.B3;
    const register unsigned short int CC2G = 2;
    sbit  CC2G_bit at TIM2_EGR.B2;
    const register unsigned short int CC1G = 1;
    sbit  CC1G_bit at TIM2_EGR.B1;
    const register unsigned short int UG = 0;
    sbit  UG_bit at TIM2_EGR.B0;

sfr unsigned long   volatile TIM2_CCMR1_Output    absolute 0x40000018;
    const register unsigned short int OC2CE = 15;
    sbit  OC2CE_bit at TIM2_CCMR1_Output.B15;
    const register unsigned short int OC2M0 = 12;
    sbit  OC2M0_bit at TIM2_CCMR1_Output.B12;
    const register unsigned short int OC2M1 = 13;
    sbit  OC2M1_bit at TIM2_CCMR1_Output.B13;
    const register unsigned short int OC2M2 = 14;
    sbit  OC2M2_bit at TIM2_CCMR1_Output.B14;
    const register unsigned short int OC2PE = 11;
    sbit  OC2PE_bit at TIM2_CCMR1_Output.B11;
    const register unsigned short int OC2FE = 10;
    sbit  OC2FE_bit at TIM2_CCMR1_Output.B10;
    const register unsigned short int CC2S0 = 8;
    sbit  CC2S0_bit at TIM2_CCMR1_Output.B8;
    const register unsigned short int CC2S1 = 9;
    sbit  CC2S1_bit at TIM2_CCMR1_Output.B9;
    const register unsigned short int OC1CE = 7;
    sbit  OC1CE_bit at TIM2_CCMR1_Output.B7;
    const register unsigned short int OC1M0 = 4;
    sbit  OC1M0_bit at TIM2_CCMR1_Output.B4;
    const register unsigned short int OC1M1 = 5;
    sbit  OC1M1_bit at TIM2_CCMR1_Output.B5;
    const register unsigned short int OC1M2 = 6;
    sbit  OC1M2_bit at TIM2_CCMR1_Output.B6;
    const register unsigned short int OC1PE = 3;
    sbit  OC1PE_bit at TIM2_CCMR1_Output.B3;
    const register unsigned short int OC1FE = 2;
    sbit  OC1FE_bit at TIM2_CCMR1_Output.B2;
    const register unsigned short int CC1S0 = 0;
    sbit  CC1S0_bit at TIM2_CCMR1_Output.B0;
    const register unsigned short int CC1S1 = 1;
    sbit  CC1S1_bit at TIM2_CCMR1_Output.B1;

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
    const register unsigned short int IC1F0 = 4;
    sbit  IC1F0_bit at TIM2_CCMR1_Input.B4;
    const register unsigned short int IC1F1 = 5;
    sbit  IC1F1_bit at TIM2_CCMR1_Input.B5;
    const register unsigned short int IC1F2 = 6;
    sbit  IC1F2_bit at TIM2_CCMR1_Input.B6;
    const register unsigned short int IC1F3 = 7;
    sbit  IC1F3_bit at TIM2_CCMR1_Input.B7;
    const register unsigned short int IC1PSC0 = 2;
    sbit  IC1PSC0_bit at TIM2_CCMR1_Input.B2;
    const register unsigned short int IC1PSC1 = 3;
    sbit  IC1PSC1_bit at TIM2_CCMR1_Input.B3;
    sbit  CC1S0_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B0;
    sbit  CC1S1_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B1;

sfr unsigned long   volatile TIM2_CCMR2_Output    absolute 0x4000001C;
    const register unsigned short int OC4CE = 15;
    sbit  OC4CE_bit at TIM2_CCMR2_Output.B15;
    const register unsigned short int OC4M0 = 12;
    sbit  OC4M0_bit at TIM2_CCMR2_Output.B12;
    const register unsigned short int OC4M1 = 13;
    sbit  OC4M1_bit at TIM2_CCMR2_Output.B13;
    const register unsigned short int OC4M2 = 14;
    sbit  OC4M2_bit at TIM2_CCMR2_Output.B14;
    const register unsigned short int OC4PE = 11;
    sbit  OC4PE_bit at TIM2_CCMR2_Output.B11;
    const register unsigned short int OC4FE = 10;
    sbit  OC4FE_bit at TIM2_CCMR2_Output.B10;
    const register unsigned short int CC4S0 = 8;
    sbit  CC4S0_bit at TIM2_CCMR2_Output.B8;
    const register unsigned short int CC4S1 = 9;
    sbit  CC4S1_bit at TIM2_CCMR2_Output.B9;
    const register unsigned short int OC3CE = 7;
    sbit  OC3CE_bit at TIM2_CCMR2_Output.B7;
    const register unsigned short int OC3M0 = 4;
    sbit  OC3M0_bit at TIM2_CCMR2_Output.B4;
    const register unsigned short int OC3M1 = 5;
    sbit  OC3M1_bit at TIM2_CCMR2_Output.B5;
    const register unsigned short int OC3M2 = 6;
    sbit  OC3M2_bit at TIM2_CCMR2_Output.B6;
    const register unsigned short int OC3PE = 3;
    sbit  OC3PE_bit at TIM2_CCMR2_Output.B3;
    const register unsigned short int OC3FE = 2;
    sbit  OC3FE_bit at TIM2_CCMR2_Output.B2;
    const register unsigned short int CC3S0 = 0;
    sbit  CC3S0_bit at TIM2_CCMR2_Output.B0;
    const register unsigned short int CC3S1 = 1;
    sbit  CC3S1_bit at TIM2_CCMR2_Output.B1;

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
    const register unsigned short int CC4NP = 15;
    sbit  CC4NP_bit at TIM2_CCER.B15;
    const register unsigned short int CC4P = 13;
    sbit  CC4P_bit at TIM2_CCER.B13;
    const register unsigned short int CC4E = 12;
    sbit  CC4E_bit at TIM2_CCER.B12;
    const register unsigned short int CC3NP = 11;
    sbit  CC3NP_bit at TIM2_CCER.B11;
    const register unsigned short int CC3P = 9;
    sbit  CC3P_bit at TIM2_CCER.B9;
    const register unsigned short int CC3E = 8;
    sbit  CC3E_bit at TIM2_CCER.B8;
    const register unsigned short int CC2NP = 7;
    sbit  CC2NP_bit at TIM2_CCER.B7;
    const register unsigned short int CC2P = 5;
    sbit  CC2P_bit at TIM2_CCER.B5;
    const register unsigned short int CC2E = 4;
    sbit  CC2E_bit at TIM2_CCER.B4;
    const register unsigned short int CC1NP = 3;
    sbit  CC1NP_bit at TIM2_CCER.B3;
    const register unsigned short int CC1P = 1;
    sbit  CC1P_bit at TIM2_CCER.B1;
    const register unsigned short int CC1E = 0;
    sbit  CC1E_bit at TIM2_CCER.B0;

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
    const register unsigned short int PSC8 = 8;
    sbit  PSC8_bit at TIM2_PSC.B8;
    const register unsigned short int PSC9 = 9;
    sbit  PSC9_bit at TIM2_PSC.B9;
    const register unsigned short int PSC10 = 10;
    sbit  PSC10_bit at TIM2_PSC.B10;
    const register unsigned short int PSC11 = 11;
    sbit  PSC11_bit at TIM2_PSC.B11;
    const register unsigned short int PSC12 = 12;
    sbit  PSC12_bit at TIM2_PSC.B12;
    const register unsigned short int PSC13 = 13;
    sbit  PSC13_bit at TIM2_PSC.B13;
    const register unsigned short int PSC14 = 14;
    sbit  PSC14_bit at TIM2_PSC.B14;
    const register unsigned short int PSC15 = 15;
    sbit  PSC15_bit at TIM2_PSC.B15;

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
    const register unsigned short int DBL0 = 8;
    sbit  DBL0_bit at TIM2_DCR.B8;
    const register unsigned short int DBL1 = 9;
    sbit  DBL1_bit at TIM2_DCR.B9;
    const register unsigned short int DBL2 = 10;
    sbit  DBL2_bit at TIM2_DCR.B10;
    const register unsigned short int DBL3 = 11;
    sbit  DBL3_bit at TIM2_DCR.B11;
    const register unsigned short int DBL4 = 12;
    sbit  DBL4_bit at TIM2_DCR.B12;
    const register unsigned short int DBA0 = 0;
    sbit  DBA0_bit at TIM2_DCR.B0;
    const register unsigned short int DBA1 = 1;
    sbit  DBA1_bit at TIM2_DCR.B1;
    const register unsigned short int DBA2 = 2;
    sbit  DBA2_bit at TIM2_DCR.B2;
    const register unsigned short int DBA3 = 3;
    sbit  DBA3_bit at TIM2_DCR.B3;
    const register unsigned short int DBA4 = 4;
    sbit  DBA4_bit at TIM2_DCR.B4;

sfr unsigned long   volatile TIM2_DMAR            absolute 0x4000004C;
    const register unsigned short int DMAB0 = 0;
    sbit  DMAB0_bit at TIM2_DMAR.B0;
    const register unsigned short int DMAB1 = 1;
    sbit  DMAB1_bit at TIM2_DMAR.B1;
    const register unsigned short int DMAB2 = 2;
    sbit  DMAB2_bit at TIM2_DMAR.B2;
    const register unsigned short int DMAB3 = 3;
    sbit  DMAB3_bit at TIM2_DMAR.B3;
    const register unsigned short int DMAB4 = 4;
    sbit  DMAB4_bit at TIM2_DMAR.B4;
    const register unsigned short int DMAB5 = 5;
    sbit  DMAB5_bit at TIM2_DMAR.B5;
    const register unsigned short int DMAB6 = 6;
    sbit  DMAB6_bit at TIM2_DMAR.B6;
    const register unsigned short int DMAB7 = 7;
    sbit  DMAB7_bit at TIM2_DMAR.B7;
    const register unsigned short int DMAB8 = 8;
    sbit  DMAB8_bit at TIM2_DMAR.B8;
    const register unsigned short int DMAB9 = 9;
    sbit  DMAB9_bit at TIM2_DMAR.B9;
    const register unsigned short int DMAB10 = 10;
    sbit  DMAB10_bit at TIM2_DMAR.B10;
    const register unsigned short int DMAB11 = 11;
    sbit  DMAB11_bit at TIM2_DMAR.B11;
    const register unsigned short int DMAB12 = 12;
    sbit  DMAB12_bit at TIM2_DMAR.B12;
    const register unsigned short int DMAB13 = 13;
    sbit  DMAB13_bit at TIM2_DMAR.B13;
    const register unsigned short int DMAB14 = 14;
    sbit  DMAB14_bit at TIM2_DMAR.B14;
    const register unsigned short int DMAB15 = 15;
    sbit  DMAB15_bit at TIM2_DMAR.B15;

sfr unsigned long   volatile TIM2_OR              absolute 0x40000050;
    const register unsigned short int ETR_RMP0 = 0;
    sbit  ETR_RMP0_bit at TIM2_OR.B0;
    const register unsigned short int ETR_RMP1 = 1;
    sbit  ETR_RMP1_bit at TIM2_OR.B1;
    const register unsigned short int ETR_RMP2 = 2;
    sbit  ETR_RMP2_bit at TIM2_OR.B2;
    const register unsigned short int TI4_RMP0 = 3;
    sbit  TI4_RMP0_bit at TIM2_OR.B3;
    const register unsigned short int TI4_RMP1 = 4;
    sbit  TI4_RMP1_bit at TIM2_OR.B4;

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

sfr unsigned long   volatile TIM3_OR              absolute 0x40000450;
    sbit  ETR_RMP0_TIM3_OR_bit at TIM3_OR.B0;
    sbit  ETR_RMP1_TIM3_OR_bit at TIM3_OR.B1;
    sbit  ETR_RMP2_TIM3_OR_bit at TIM3_OR.B2;
    sbit  TI4_RMP0_TIM3_OR_bit at TIM3_OR.B3;
    sbit  TI4_RMP1_TIM3_OR_bit at TIM3_OR.B4;

sfr unsigned long   volatile TIM6_CR1             absolute 0x40001000;
    sbit  ARPE_TIM6_CR1_bit at TIM6_CR1.B7;
    sbit  OPM_TIM6_CR1_bit at TIM6_CR1.B3;
    sbit  URS_TIM6_CR1_bit at TIM6_CR1.B2;
    sbit  UDIS_TIM6_CR1_bit at TIM6_CR1.B1;
    sbit  CEN_TIM6_CR1_bit at TIM6_CR1.B0;

sfr unsigned long   volatile TIM6_CR2             absolute 0x40001004;
    sbit  MMS0_TIM6_CR2_bit at TIM6_CR2.B4;
    sbit  MMS1_TIM6_CR2_bit at TIM6_CR2.B5;
    sbit  MMS2_TIM6_CR2_bit at TIM6_CR2.B6;

sfr unsigned long   volatile TIM6_DIER            absolute 0x4000100C;
    sbit  UDE_TIM6_DIER_bit at TIM6_DIER.B8;
    sbit  UIE_TIM6_DIER_bit at TIM6_DIER.B0;

sfr unsigned long   volatile TIM6_SR              absolute 0x40001010;
    sbit  UIF_TIM6_SR_bit at TIM6_SR.B0;

sfr unsigned long   volatile TIM6_EGR             absolute 0x40001014;
    sbit  UG_TIM6_EGR_bit at TIM6_EGR.B0;

sfr unsigned long   volatile TIM6_CNT             absolute 0x40001024;
    sbit  CNT0_TIM6_CNT_bit at TIM6_CNT.B0;
    sbit  CNT1_TIM6_CNT_bit at TIM6_CNT.B1;
    sbit  CNT2_TIM6_CNT_bit at TIM6_CNT.B2;
    sbit  CNT3_TIM6_CNT_bit at TIM6_CNT.B3;
    sbit  CNT4_TIM6_CNT_bit at TIM6_CNT.B4;
    sbit  CNT5_TIM6_CNT_bit at TIM6_CNT.B5;
    sbit  CNT6_TIM6_CNT_bit at TIM6_CNT.B6;
    sbit  CNT7_TIM6_CNT_bit at TIM6_CNT.B7;
    sbit  CNT8_TIM6_CNT_bit at TIM6_CNT.B8;
    sbit  CNT9_TIM6_CNT_bit at TIM6_CNT.B9;
    sbit  CNT10_TIM6_CNT_bit at TIM6_CNT.B10;
    sbit  CNT11_TIM6_CNT_bit at TIM6_CNT.B11;
    sbit  CNT12_TIM6_CNT_bit at TIM6_CNT.B12;
    sbit  CNT13_TIM6_CNT_bit at TIM6_CNT.B13;
    sbit  CNT14_TIM6_CNT_bit at TIM6_CNT.B14;
    sbit  CNT15_TIM6_CNT_bit at TIM6_CNT.B15;

sfr unsigned long   volatile TIM6_PSC             absolute 0x40001028;
    sbit  PSC0_TIM6_PSC_bit at TIM6_PSC.B0;
    sbit  PSC1_TIM6_PSC_bit at TIM6_PSC.B1;
    sbit  PSC2_TIM6_PSC_bit at TIM6_PSC.B2;
    sbit  PSC3_TIM6_PSC_bit at TIM6_PSC.B3;
    sbit  PSC4_TIM6_PSC_bit at TIM6_PSC.B4;
    sbit  PSC5_TIM6_PSC_bit at TIM6_PSC.B5;
    sbit  PSC6_TIM6_PSC_bit at TIM6_PSC.B6;
    sbit  PSC7_TIM6_PSC_bit at TIM6_PSC.B7;
    sbit  PSC8_TIM6_PSC_bit at TIM6_PSC.B8;
    sbit  PSC9_TIM6_PSC_bit at TIM6_PSC.B9;
    sbit  PSC10_TIM6_PSC_bit at TIM6_PSC.B10;
    sbit  PSC11_TIM6_PSC_bit at TIM6_PSC.B11;
    sbit  PSC12_TIM6_PSC_bit at TIM6_PSC.B12;
    sbit  PSC13_TIM6_PSC_bit at TIM6_PSC.B13;
    sbit  PSC14_TIM6_PSC_bit at TIM6_PSC.B14;
    sbit  PSC15_TIM6_PSC_bit at TIM6_PSC.B15;

sfr unsigned long   volatile TIM6_ARR             absolute 0x4000102C;
    sbit  ARR0_TIM6_ARR_bit at TIM6_ARR.B0;
    sbit  ARR1_TIM6_ARR_bit at TIM6_ARR.B1;
    sbit  ARR2_TIM6_ARR_bit at TIM6_ARR.B2;
    sbit  ARR3_TIM6_ARR_bit at TIM6_ARR.B3;
    sbit  ARR4_TIM6_ARR_bit at TIM6_ARR.B4;
    sbit  ARR5_TIM6_ARR_bit at TIM6_ARR.B5;
    sbit  ARR6_TIM6_ARR_bit at TIM6_ARR.B6;
    sbit  ARR7_TIM6_ARR_bit at TIM6_ARR.B7;
    sbit  ARR8_TIM6_ARR_bit at TIM6_ARR.B8;
    sbit  ARR9_TIM6_ARR_bit at TIM6_ARR.B9;
    sbit  ARR10_TIM6_ARR_bit at TIM6_ARR.B10;
    sbit  ARR11_TIM6_ARR_bit at TIM6_ARR.B11;
    sbit  ARR12_TIM6_ARR_bit at TIM6_ARR.B12;
    sbit  ARR13_TIM6_ARR_bit at TIM6_ARR.B13;
    sbit  ARR14_TIM6_ARR_bit at TIM6_ARR.B14;
    sbit  ARR15_TIM6_ARR_bit at TIM6_ARR.B15;

sfr unsigned long   volatile TIM7_CR1             absolute 0x40000C00;
    sbit  ARPE_TIM7_CR1_bit at TIM7_CR1.B7;
    sbit  OPM_TIM7_CR1_bit at TIM7_CR1.B3;
    sbit  URS_TIM7_CR1_bit at TIM7_CR1.B2;
    sbit  UDIS_TIM7_CR1_bit at TIM7_CR1.B1;
    sbit  CEN_TIM7_CR1_bit at TIM7_CR1.B0;

sfr unsigned long   volatile TIM7_CR2             absolute 0x40000C04;
    sbit  MMS0_TIM7_CR2_bit at TIM7_CR2.B4;
    sbit  MMS1_TIM7_CR2_bit at TIM7_CR2.B5;
    sbit  MMS2_TIM7_CR2_bit at TIM7_CR2.B6;

sfr unsigned long   volatile TIM7_DIER            absolute 0x40000C0C;
    sbit  UDE_TIM7_DIER_bit at TIM7_DIER.B8;
    sbit  UIE_TIM7_DIER_bit at TIM7_DIER.B0;

sfr unsigned long   volatile TIM7_SR              absolute 0x40000C10;
    sbit  UIF_TIM7_SR_bit at TIM7_SR.B0;

sfr unsigned long   volatile TIM7_EGR             absolute 0x40000C14;
    sbit  UG_TIM7_EGR_bit at TIM7_EGR.B0;

sfr unsigned long   volatile TIM7_CNT             absolute 0x40000C24;
    sbit  CNT0_TIM7_CNT_bit at TIM7_CNT.B0;
    sbit  CNT1_TIM7_CNT_bit at TIM7_CNT.B1;
    sbit  CNT2_TIM7_CNT_bit at TIM7_CNT.B2;
    sbit  CNT3_TIM7_CNT_bit at TIM7_CNT.B3;
    sbit  CNT4_TIM7_CNT_bit at TIM7_CNT.B4;
    sbit  CNT5_TIM7_CNT_bit at TIM7_CNT.B5;
    sbit  CNT6_TIM7_CNT_bit at TIM7_CNT.B6;
    sbit  CNT7_TIM7_CNT_bit at TIM7_CNT.B7;
    sbit  CNT8_TIM7_CNT_bit at TIM7_CNT.B8;
    sbit  CNT9_TIM7_CNT_bit at TIM7_CNT.B9;
    sbit  CNT10_TIM7_CNT_bit at TIM7_CNT.B10;
    sbit  CNT11_TIM7_CNT_bit at TIM7_CNT.B11;
    sbit  CNT12_TIM7_CNT_bit at TIM7_CNT.B12;
    sbit  CNT13_TIM7_CNT_bit at TIM7_CNT.B13;
    sbit  CNT14_TIM7_CNT_bit at TIM7_CNT.B14;
    sbit  CNT15_TIM7_CNT_bit at TIM7_CNT.B15;

sfr unsigned long   volatile TIM7_PSC             absolute 0x40000C28;
    sbit  PSC0_TIM7_PSC_bit at TIM7_PSC.B0;
    sbit  PSC1_TIM7_PSC_bit at TIM7_PSC.B1;
    sbit  PSC2_TIM7_PSC_bit at TIM7_PSC.B2;
    sbit  PSC3_TIM7_PSC_bit at TIM7_PSC.B3;
    sbit  PSC4_TIM7_PSC_bit at TIM7_PSC.B4;
    sbit  PSC5_TIM7_PSC_bit at TIM7_PSC.B5;
    sbit  PSC6_TIM7_PSC_bit at TIM7_PSC.B6;
    sbit  PSC7_TIM7_PSC_bit at TIM7_PSC.B7;
    sbit  PSC8_TIM7_PSC_bit at TIM7_PSC.B8;
    sbit  PSC9_TIM7_PSC_bit at TIM7_PSC.B9;
    sbit  PSC10_TIM7_PSC_bit at TIM7_PSC.B10;
    sbit  PSC11_TIM7_PSC_bit at TIM7_PSC.B11;
    sbit  PSC12_TIM7_PSC_bit at TIM7_PSC.B12;
    sbit  PSC13_TIM7_PSC_bit at TIM7_PSC.B13;
    sbit  PSC14_TIM7_PSC_bit at TIM7_PSC.B14;
    sbit  PSC15_TIM7_PSC_bit at TIM7_PSC.B15;

sfr unsigned long   volatile TIM7_ARR             absolute 0x40000C2C;
    sbit  ARR0_TIM7_ARR_bit at TIM7_ARR.B0;
    sbit  ARR1_TIM7_ARR_bit at TIM7_ARR.B1;
    sbit  ARR2_TIM7_ARR_bit at TIM7_ARR.B2;
    sbit  ARR3_TIM7_ARR_bit at TIM7_ARR.B3;
    sbit  ARR4_TIM7_ARR_bit at TIM7_ARR.B4;
    sbit  ARR5_TIM7_ARR_bit at TIM7_ARR.B5;
    sbit  ARR6_TIM7_ARR_bit at TIM7_ARR.B6;
    sbit  ARR7_TIM7_ARR_bit at TIM7_ARR.B7;
    sbit  ARR8_TIM7_ARR_bit at TIM7_ARR.B8;
    sbit  ARR9_TIM7_ARR_bit at TIM7_ARR.B9;
    sbit  ARR10_TIM7_ARR_bit at TIM7_ARR.B10;
    sbit  ARR11_TIM7_ARR_bit at TIM7_ARR.B11;
    sbit  ARR12_TIM7_ARR_bit at TIM7_ARR.B12;
    sbit  ARR13_TIM7_ARR_bit at TIM7_ARR.B13;
    sbit  ARR14_TIM7_ARR_bit at TIM7_ARR.B14;
    sbit  ARR15_TIM7_ARR_bit at TIM7_ARR.B15;

sfr unsigned long   volatile TIM21_CR1            absolute 0x40010800;
    sbit  CEN_TIM21_CR1_bit at TIM21_CR1.B0;
    sbit  UDIS_TIM21_CR1_bit at TIM21_CR1.B1;
    sbit  URS_TIM21_CR1_bit at TIM21_CR1.B2;
    sbit  OPM_TIM21_CR1_bit at TIM21_CR1.B3;
    sbit  DIR_TIM21_CR1_bit at TIM21_CR1.B4;
    sbit  CMS0_TIM21_CR1_bit at TIM21_CR1.B5;
    sbit  CMS1_TIM21_CR1_bit at TIM21_CR1.B6;
    sbit  ARPE_TIM21_CR1_bit at TIM21_CR1.B7;
    sbit  CKD0_TIM21_CR1_bit at TIM21_CR1.B8;
    sbit  CKD1_TIM21_CR1_bit at TIM21_CR1.B9;

sfr unsigned long   volatile TIM21_CR2            absolute 0x40010804;
    sbit  MMS0_TIM21_CR2_bit at TIM21_CR2.B4;
    sbit  MMS1_TIM21_CR2_bit at TIM21_CR2.B5;
    sbit  MMS2_TIM21_CR2_bit at TIM21_CR2.B6;

sfr unsigned long   volatile TIM21_SMCR           absolute 0x40010808;
    sbit  SMS0_TIM21_SMCR_bit at TIM21_SMCR.B0;
    sbit  SMS1_TIM21_SMCR_bit at TIM21_SMCR.B1;
    sbit  SMS2_TIM21_SMCR_bit at TIM21_SMCR.B2;
    sbit  TS0_TIM21_SMCR_bit at TIM21_SMCR.B4;
    sbit  TS1_TIM21_SMCR_bit at TIM21_SMCR.B5;
    sbit  TS2_TIM21_SMCR_bit at TIM21_SMCR.B6;
    sbit  MSM_TIM21_SMCR_bit at TIM21_SMCR.B7;
    sbit  ETF0_TIM21_SMCR_bit at TIM21_SMCR.B8;
    sbit  ETF1_TIM21_SMCR_bit at TIM21_SMCR.B9;
    sbit  ETF2_TIM21_SMCR_bit at TIM21_SMCR.B10;
    sbit  ETF3_TIM21_SMCR_bit at TIM21_SMCR.B11;
    sbit  ETPS0_TIM21_SMCR_bit at TIM21_SMCR.B12;
    sbit  ETPS1_TIM21_SMCR_bit at TIM21_SMCR.B13;
    sbit  ECE_TIM21_SMCR_bit at TIM21_SMCR.B14;
    sbit  ETP_TIM21_SMCR_bit at TIM21_SMCR.B15;

sfr unsigned long   volatile TIM21_DIER           absolute 0x4001080C;
    sbit  TIE_TIM21_DIER_bit at TIM21_DIER.B6;
    sbit  CC2IE_TIM21_DIER_bit at TIM21_DIER.B2;
    sbit  CC1IE_TIM21_DIER_bit at TIM21_DIER.B1;
    sbit  UIE_TIM21_DIER_bit at TIM21_DIER.B0;

sfr unsigned long   volatile TIM21_SR             absolute 0x40010810;
    sbit  CC2OF_TIM21_SR_bit at TIM21_SR.B10;
    sbit  CC1OF_TIM21_SR_bit at TIM21_SR.B9;
    sbit  TIF_TIM21_SR_bit at TIM21_SR.B6;
    sbit  CC2IF_TIM21_SR_bit at TIM21_SR.B2;
    sbit  CC1IF_TIM21_SR_bit at TIM21_SR.B1;
    sbit  UIF_TIM21_SR_bit at TIM21_SR.B0;

sfr unsigned long   volatile TIM21_EGR            absolute 0x40010814;
    sbit  TG_TIM21_EGR_bit at TIM21_EGR.B6;
    sbit  CC2G_TIM21_EGR_bit at TIM21_EGR.B2;
    sbit  CC1G_TIM21_EGR_bit at TIM21_EGR.B1;
    sbit  UG_TIM21_EGR_bit at TIM21_EGR.B0;

sfr unsigned long   volatile TIM21_CCMR1_Output   absolute 0x40010818;
    sbit  OC2M0_TIM21_CCMR1_Output_bit at TIM21_CCMR1_Output.B12;
    sbit  OC2M1_TIM21_CCMR1_Output_bit at TIM21_CCMR1_Output.B13;
    sbit  OC2M2_TIM21_CCMR1_Output_bit at TIM21_CCMR1_Output.B14;
    sbit  OC2PE_TIM21_CCMR1_Output_bit at TIM21_CCMR1_Output.B11;
    sbit  OC2FE_TIM21_CCMR1_Output_bit at TIM21_CCMR1_Output.B10;
    sbit  CC2S0_TIM21_CCMR1_Output_bit at TIM21_CCMR1_Output.B8;
    sbit  CC2S1_TIM21_CCMR1_Output_bit at TIM21_CCMR1_Output.B9;
    sbit  OC1M0_TIM21_CCMR1_Output_bit at TIM21_CCMR1_Output.B4;
    sbit  OC1M1_TIM21_CCMR1_Output_bit at TIM21_CCMR1_Output.B5;
    sbit  OC1M2_TIM21_CCMR1_Output_bit at TIM21_CCMR1_Output.B6;
    sbit  OC1PE_TIM21_CCMR1_Output_bit at TIM21_CCMR1_Output.B3;
    sbit  OC1FE_TIM21_CCMR1_Output_bit at TIM21_CCMR1_Output.B2;
    sbit  CC1S0_TIM21_CCMR1_Output_bit at TIM21_CCMR1_Output.B0;
    sbit  CC1S1_TIM21_CCMR1_Output_bit at TIM21_CCMR1_Output.B1;

sfr unsigned long   volatile TIM21_CCMR1_Input    absolute 0x40010818;
    sbit  IC2F0_TIM21_CCMR1_Input_bit at TIM21_CCMR1_Input.B12;
    sbit  IC2F1_TIM21_CCMR1_Input_bit at TIM21_CCMR1_Input.B13;
    sbit  IC2F2_TIM21_CCMR1_Input_bit at TIM21_CCMR1_Input.B14;
    sbit  IC2F3_TIM21_CCMR1_Input_bit at TIM21_CCMR1_Input.B15;
    sbit  IC2PSC0_TIM21_CCMR1_Input_bit at TIM21_CCMR1_Input.B10;
    sbit  IC2PSC1_TIM21_CCMR1_Input_bit at TIM21_CCMR1_Input.B11;
    sbit  CC2S0_TIM21_CCMR1_Input_bit at TIM21_CCMR1_Input.B8;
    sbit  CC2S1_TIM21_CCMR1_Input_bit at TIM21_CCMR1_Input.B9;
    sbit  IC1F0_TIM21_CCMR1_Input_bit at TIM21_CCMR1_Input.B4;
    sbit  IC1F1_TIM21_CCMR1_Input_bit at TIM21_CCMR1_Input.B5;
    sbit  IC1F2_TIM21_CCMR1_Input_bit at TIM21_CCMR1_Input.B6;
    sbit  IC1F3_TIM21_CCMR1_Input_bit at TIM21_CCMR1_Input.B7;
    sbit  IC1PSC0_TIM21_CCMR1_Input_bit at TIM21_CCMR1_Input.B2;
    sbit  IC1PSC1_TIM21_CCMR1_Input_bit at TIM21_CCMR1_Input.B3;
    sbit  CC1S0_TIM21_CCMR1_Input_bit at TIM21_CCMR1_Input.B0;
    sbit  CC1S1_TIM21_CCMR1_Input_bit at TIM21_CCMR1_Input.B1;

sfr unsigned long   volatile TIM21_CCER           absolute 0x40010820;
    sbit  CC2NP_TIM21_CCER_bit at TIM21_CCER.B7;
    sbit  CC2P_TIM21_CCER_bit at TIM21_CCER.B5;
    sbit  CC2E_TIM21_CCER_bit at TIM21_CCER.B4;
    sbit  CC1NP_TIM21_CCER_bit at TIM21_CCER.B3;
    sbit  CC1P_TIM21_CCER_bit at TIM21_CCER.B1;
    sbit  CC1E_TIM21_CCER_bit at TIM21_CCER.B0;

sfr unsigned long   volatile TIM21_CNT            absolute 0x40010824;
    sbit  CNT0_TIM21_CNT_bit at TIM21_CNT.B0;
    sbit  CNT1_TIM21_CNT_bit at TIM21_CNT.B1;
    sbit  CNT2_TIM21_CNT_bit at TIM21_CNT.B2;
    sbit  CNT3_TIM21_CNT_bit at TIM21_CNT.B3;
    sbit  CNT4_TIM21_CNT_bit at TIM21_CNT.B4;
    sbit  CNT5_TIM21_CNT_bit at TIM21_CNT.B5;
    sbit  CNT6_TIM21_CNT_bit at TIM21_CNT.B6;
    sbit  CNT7_TIM21_CNT_bit at TIM21_CNT.B7;
    sbit  CNT8_TIM21_CNT_bit at TIM21_CNT.B8;
    sbit  CNT9_TIM21_CNT_bit at TIM21_CNT.B9;
    sbit  CNT10_TIM21_CNT_bit at TIM21_CNT.B10;
    sbit  CNT11_TIM21_CNT_bit at TIM21_CNT.B11;
    sbit  CNT12_TIM21_CNT_bit at TIM21_CNT.B12;
    sbit  CNT13_TIM21_CNT_bit at TIM21_CNT.B13;
    sbit  CNT14_TIM21_CNT_bit at TIM21_CNT.B14;
    sbit  CNT15_TIM21_CNT_bit at TIM21_CNT.B15;

sfr unsigned long   volatile TIM21_PSC            absolute 0x40010828;
    sbit  PSC0_TIM21_PSC_bit at TIM21_PSC.B0;
    sbit  PSC1_TIM21_PSC_bit at TIM21_PSC.B1;
    sbit  PSC2_TIM21_PSC_bit at TIM21_PSC.B2;
    sbit  PSC3_TIM21_PSC_bit at TIM21_PSC.B3;
    sbit  PSC4_TIM21_PSC_bit at TIM21_PSC.B4;
    sbit  PSC5_TIM21_PSC_bit at TIM21_PSC.B5;
    sbit  PSC6_TIM21_PSC_bit at TIM21_PSC.B6;
    sbit  PSC7_TIM21_PSC_bit at TIM21_PSC.B7;
    sbit  PSC8_TIM21_PSC_bit at TIM21_PSC.B8;
    sbit  PSC9_TIM21_PSC_bit at TIM21_PSC.B9;
    sbit  PSC10_TIM21_PSC_bit at TIM21_PSC.B10;
    sbit  PSC11_TIM21_PSC_bit at TIM21_PSC.B11;
    sbit  PSC12_TIM21_PSC_bit at TIM21_PSC.B12;
    sbit  PSC13_TIM21_PSC_bit at TIM21_PSC.B13;
    sbit  PSC14_TIM21_PSC_bit at TIM21_PSC.B14;
    sbit  PSC15_TIM21_PSC_bit at TIM21_PSC.B15;

sfr unsigned long   volatile TIM21_ARR            absolute 0x4001082C;
    sbit  ARR0_TIM21_ARR_bit at TIM21_ARR.B0;
    sbit  ARR1_TIM21_ARR_bit at TIM21_ARR.B1;
    sbit  ARR2_TIM21_ARR_bit at TIM21_ARR.B2;
    sbit  ARR3_TIM21_ARR_bit at TIM21_ARR.B3;
    sbit  ARR4_TIM21_ARR_bit at TIM21_ARR.B4;
    sbit  ARR5_TIM21_ARR_bit at TIM21_ARR.B5;
    sbit  ARR6_TIM21_ARR_bit at TIM21_ARR.B6;
    sbit  ARR7_TIM21_ARR_bit at TIM21_ARR.B7;
    sbit  ARR8_TIM21_ARR_bit at TIM21_ARR.B8;
    sbit  ARR9_TIM21_ARR_bit at TIM21_ARR.B9;
    sbit  ARR10_TIM21_ARR_bit at TIM21_ARR.B10;
    sbit  ARR11_TIM21_ARR_bit at TIM21_ARR.B11;
    sbit  ARR12_TIM21_ARR_bit at TIM21_ARR.B12;
    sbit  ARR13_TIM21_ARR_bit at TIM21_ARR.B13;
    sbit  ARR14_TIM21_ARR_bit at TIM21_ARR.B14;
    sbit  ARR15_TIM21_ARR_bit at TIM21_ARR.B15;

sfr unsigned long   volatile TIM21_CCR1           absolute 0x40010834;
    const register unsigned short int CCR10 = 0;
    sbit  CCR10_bit at TIM21_CCR1.B0;
    const register unsigned short int CCR11 = 1;
    sbit  CCR11_bit at TIM21_CCR1.B1;
    const register unsigned short int CCR12 = 2;
    sbit  CCR12_bit at TIM21_CCR1.B2;
    const register unsigned short int CCR13 = 3;
    sbit  CCR13_bit at TIM21_CCR1.B3;
    const register unsigned short int CCR14 = 4;
    sbit  CCR14_bit at TIM21_CCR1.B4;
    const register unsigned short int CCR15 = 5;
    sbit  CCR15_bit at TIM21_CCR1.B5;
    const register unsigned short int CCR16 = 6;
    sbit  CCR16_bit at TIM21_CCR1.B6;
    const register unsigned short int CCR17 = 7;
    sbit  CCR17_bit at TIM21_CCR1.B7;
    const register unsigned short int CCR18 = 8;
    sbit  CCR18_bit at TIM21_CCR1.B8;
    const register unsigned short int CCR19 = 9;
    sbit  CCR19_bit at TIM21_CCR1.B9;
    const register unsigned short int CCR110 = 10;
    sbit  CCR110_bit at TIM21_CCR1.B10;
    const register unsigned short int CCR111 = 11;
    sbit  CCR111_bit at TIM21_CCR1.B11;
    const register unsigned short int CCR112 = 12;
    sbit  CCR112_bit at TIM21_CCR1.B12;
    const register unsigned short int CCR113 = 13;
    sbit  CCR113_bit at TIM21_CCR1.B13;
    const register unsigned short int CCR114 = 14;
    sbit  CCR114_bit at TIM21_CCR1.B14;
    const register unsigned short int CCR115 = 15;
    sbit  CCR115_bit at TIM21_CCR1.B15;

sfr unsigned long   volatile TIM21_CCR2           absolute 0x40010838;
    const register unsigned short int CCR20 = 0;
    sbit  CCR20_bit at TIM21_CCR2.B0;
    const register unsigned short int CCR21 = 1;
    sbit  CCR21_bit at TIM21_CCR2.B1;
    const register unsigned short int CCR22 = 2;
    sbit  CCR22_bit at TIM21_CCR2.B2;
    const register unsigned short int CCR23 = 3;
    sbit  CCR23_bit at TIM21_CCR2.B3;
    const register unsigned short int CCR24 = 4;
    sbit  CCR24_bit at TIM21_CCR2.B4;
    const register unsigned short int CCR25 = 5;
    sbit  CCR25_bit at TIM21_CCR2.B5;
    const register unsigned short int CCR26 = 6;
    sbit  CCR26_bit at TIM21_CCR2.B6;
    const register unsigned short int CCR27 = 7;
    sbit  CCR27_bit at TIM21_CCR2.B7;
    const register unsigned short int CCR28 = 8;
    sbit  CCR28_bit at TIM21_CCR2.B8;
    const register unsigned short int CCR29 = 9;
    sbit  CCR29_bit at TIM21_CCR2.B9;
    const register unsigned short int CCR210 = 10;
    sbit  CCR210_bit at TIM21_CCR2.B10;
    const register unsigned short int CCR211 = 11;
    sbit  CCR211_bit at TIM21_CCR2.B11;
    const register unsigned short int CCR212 = 12;
    sbit  CCR212_bit at TIM21_CCR2.B12;
    const register unsigned short int CCR213 = 13;
    sbit  CCR213_bit at TIM21_CCR2.B13;
    const register unsigned short int CCR214 = 14;
    sbit  CCR214_bit at TIM21_CCR2.B14;
    const register unsigned short int CCR215 = 15;
    sbit  CCR215_bit at TIM21_CCR2.B15;

sfr unsigned long   volatile TIM21_OR             absolute 0x40010850;
    sbit  ETR_RMP0_TIM21_OR_bit at TIM21_OR.B0;
    sbit  ETR_RMP1_TIM21_OR_bit at TIM21_OR.B1;
    const register unsigned short int TI1_RMP0 = 2;
    sbit  TI1_RMP0_bit at TIM21_OR.B2;
    const register unsigned short int TI1_RMP1 = 3;
    sbit  TI1_RMP1_bit at TIM21_OR.B3;
    const register unsigned short int TI1_RMP2 = 4;
    sbit  TI1_RMP2_bit at TIM21_OR.B4;
    const register unsigned short int TI2_RMP = 5;
    sbit  TI2_RMP_bit at TIM21_OR.B5;

sfr unsigned long   volatile TIM22_CR1            absolute 0x40011400;
    sbit  CEN_TIM22_CR1_bit at TIM22_CR1.B0;
    sbit  UDIS_TIM22_CR1_bit at TIM22_CR1.B1;
    sbit  URS_TIM22_CR1_bit at TIM22_CR1.B2;
    sbit  OPM_TIM22_CR1_bit at TIM22_CR1.B3;
    sbit  DIR_TIM22_CR1_bit at TIM22_CR1.B4;
    sbit  CMS0_TIM22_CR1_bit at TIM22_CR1.B5;
    sbit  CMS1_TIM22_CR1_bit at TIM22_CR1.B6;
    sbit  ARPE_TIM22_CR1_bit at TIM22_CR1.B7;
    sbit  CKD0_TIM22_CR1_bit at TIM22_CR1.B8;
    sbit  CKD1_TIM22_CR1_bit at TIM22_CR1.B9;

sfr unsigned long   volatile TIM22_CR2            absolute 0x40011404;
    sbit  MMS0_TIM22_CR2_bit at TIM22_CR2.B4;
    sbit  MMS1_TIM22_CR2_bit at TIM22_CR2.B5;
    sbit  MMS2_TIM22_CR2_bit at TIM22_CR2.B6;

sfr unsigned long   volatile TIM22_SMCR           absolute 0x40011408;
    sbit  SMS0_TIM22_SMCR_bit at TIM22_SMCR.B0;
    sbit  SMS1_TIM22_SMCR_bit at TIM22_SMCR.B1;
    sbit  SMS2_TIM22_SMCR_bit at TIM22_SMCR.B2;
    sbit  TS0_TIM22_SMCR_bit at TIM22_SMCR.B4;
    sbit  TS1_TIM22_SMCR_bit at TIM22_SMCR.B5;
    sbit  TS2_TIM22_SMCR_bit at TIM22_SMCR.B6;
    sbit  MSM_TIM22_SMCR_bit at TIM22_SMCR.B7;
    sbit  ETF0_TIM22_SMCR_bit at TIM22_SMCR.B8;
    sbit  ETF1_TIM22_SMCR_bit at TIM22_SMCR.B9;
    sbit  ETF2_TIM22_SMCR_bit at TIM22_SMCR.B10;
    sbit  ETF3_TIM22_SMCR_bit at TIM22_SMCR.B11;
    sbit  ETPS0_TIM22_SMCR_bit at TIM22_SMCR.B12;
    sbit  ETPS1_TIM22_SMCR_bit at TIM22_SMCR.B13;
    sbit  ECE_TIM22_SMCR_bit at TIM22_SMCR.B14;
    sbit  ETP_TIM22_SMCR_bit at TIM22_SMCR.B15;

sfr unsigned long   volatile TIM22_DIER           absolute 0x4001140C;
    sbit  TIE_TIM22_DIER_bit at TIM22_DIER.B6;
    sbit  CC2IE_TIM22_DIER_bit at TIM22_DIER.B2;
    sbit  CC1IE_TIM22_DIER_bit at TIM22_DIER.B1;
    sbit  UIE_TIM22_DIER_bit at TIM22_DIER.B0;

sfr unsigned long   volatile TIM22_SR             absolute 0x40011410;
    sbit  CC2OF_TIM22_SR_bit at TIM22_SR.B10;
    sbit  CC1OF_TIM22_SR_bit at TIM22_SR.B9;
    sbit  TIF_TIM22_SR_bit at TIM22_SR.B6;
    sbit  CC2IF_TIM22_SR_bit at TIM22_SR.B2;
    sbit  CC1IF_TIM22_SR_bit at TIM22_SR.B1;
    sbit  UIF_TIM22_SR_bit at TIM22_SR.B0;

sfr unsigned long   volatile TIM22_EGR            absolute 0x40011414;
    sbit  TG_TIM22_EGR_bit at TIM22_EGR.B6;
    sbit  CC2G_TIM22_EGR_bit at TIM22_EGR.B2;
    sbit  CC1G_TIM22_EGR_bit at TIM22_EGR.B1;
    sbit  UG_TIM22_EGR_bit at TIM22_EGR.B0;

sfr unsigned long   volatile TIM22_CCMR1_Output   absolute 0x40011418;
    sbit  OC2M0_TIM22_CCMR1_Output_bit at TIM22_CCMR1_Output.B12;
    sbit  OC2M1_TIM22_CCMR1_Output_bit at TIM22_CCMR1_Output.B13;
    sbit  OC2M2_TIM22_CCMR1_Output_bit at TIM22_CCMR1_Output.B14;
    sbit  OC2PE_TIM22_CCMR1_Output_bit at TIM22_CCMR1_Output.B11;
    sbit  OC2FE_TIM22_CCMR1_Output_bit at TIM22_CCMR1_Output.B10;
    sbit  CC2S0_TIM22_CCMR1_Output_bit at TIM22_CCMR1_Output.B8;
    sbit  CC2S1_TIM22_CCMR1_Output_bit at TIM22_CCMR1_Output.B9;
    sbit  OC1M0_TIM22_CCMR1_Output_bit at TIM22_CCMR1_Output.B4;
    sbit  OC1M1_TIM22_CCMR1_Output_bit at TIM22_CCMR1_Output.B5;
    sbit  OC1M2_TIM22_CCMR1_Output_bit at TIM22_CCMR1_Output.B6;
    sbit  OC1PE_TIM22_CCMR1_Output_bit at TIM22_CCMR1_Output.B3;
    sbit  OC1FE_TIM22_CCMR1_Output_bit at TIM22_CCMR1_Output.B2;
    sbit  CC1S0_TIM22_CCMR1_Output_bit at TIM22_CCMR1_Output.B0;
    sbit  CC1S1_TIM22_CCMR1_Output_bit at TIM22_CCMR1_Output.B1;

sfr unsigned long   volatile TIM22_CCMR1_Input    absolute 0x40011418;
    sbit  IC2F0_TIM22_CCMR1_Input_bit at TIM22_CCMR1_Input.B12;
    sbit  IC2F1_TIM22_CCMR1_Input_bit at TIM22_CCMR1_Input.B13;
    sbit  IC2F2_TIM22_CCMR1_Input_bit at TIM22_CCMR1_Input.B14;
    sbit  IC2F3_TIM22_CCMR1_Input_bit at TIM22_CCMR1_Input.B15;
    sbit  IC2PSC0_TIM22_CCMR1_Input_bit at TIM22_CCMR1_Input.B10;
    sbit  IC2PSC1_TIM22_CCMR1_Input_bit at TIM22_CCMR1_Input.B11;
    sbit  CC2S0_TIM22_CCMR1_Input_bit at TIM22_CCMR1_Input.B8;
    sbit  CC2S1_TIM22_CCMR1_Input_bit at TIM22_CCMR1_Input.B9;
    sbit  IC1F0_TIM22_CCMR1_Input_bit at TIM22_CCMR1_Input.B4;
    sbit  IC1F1_TIM22_CCMR1_Input_bit at TIM22_CCMR1_Input.B5;
    sbit  IC1F2_TIM22_CCMR1_Input_bit at TIM22_CCMR1_Input.B6;
    sbit  IC1F3_TIM22_CCMR1_Input_bit at TIM22_CCMR1_Input.B7;
    sbit  IC1PSC0_TIM22_CCMR1_Input_bit at TIM22_CCMR1_Input.B2;
    sbit  IC1PSC1_TIM22_CCMR1_Input_bit at TIM22_CCMR1_Input.B3;
    sbit  CC1S0_TIM22_CCMR1_Input_bit at TIM22_CCMR1_Input.B0;
    sbit  CC1S1_TIM22_CCMR1_Input_bit at TIM22_CCMR1_Input.B1;

sfr unsigned long   volatile TIM22_CCER           absolute 0x40011420;
    sbit  CC2NP_TIM22_CCER_bit at TIM22_CCER.B7;
    sbit  CC2P_TIM22_CCER_bit at TIM22_CCER.B5;
    sbit  CC2E_TIM22_CCER_bit at TIM22_CCER.B4;
    sbit  CC1NP_TIM22_CCER_bit at TIM22_CCER.B3;
    sbit  CC1P_TIM22_CCER_bit at TIM22_CCER.B1;
    sbit  CC1E_TIM22_CCER_bit at TIM22_CCER.B0;

sfr unsigned long   volatile TIM22_CNT            absolute 0x40011424;
    sbit  CNT0_TIM22_CNT_bit at TIM22_CNT.B0;
    sbit  CNT1_TIM22_CNT_bit at TIM22_CNT.B1;
    sbit  CNT2_TIM22_CNT_bit at TIM22_CNT.B2;
    sbit  CNT3_TIM22_CNT_bit at TIM22_CNT.B3;
    sbit  CNT4_TIM22_CNT_bit at TIM22_CNT.B4;
    sbit  CNT5_TIM22_CNT_bit at TIM22_CNT.B5;
    sbit  CNT6_TIM22_CNT_bit at TIM22_CNT.B6;
    sbit  CNT7_TIM22_CNT_bit at TIM22_CNT.B7;
    sbit  CNT8_TIM22_CNT_bit at TIM22_CNT.B8;
    sbit  CNT9_TIM22_CNT_bit at TIM22_CNT.B9;
    sbit  CNT10_TIM22_CNT_bit at TIM22_CNT.B10;
    sbit  CNT11_TIM22_CNT_bit at TIM22_CNT.B11;
    sbit  CNT12_TIM22_CNT_bit at TIM22_CNT.B12;
    sbit  CNT13_TIM22_CNT_bit at TIM22_CNT.B13;
    sbit  CNT14_TIM22_CNT_bit at TIM22_CNT.B14;
    sbit  CNT15_TIM22_CNT_bit at TIM22_CNT.B15;

sfr unsigned long   volatile TIM22_PSC            absolute 0x40011428;
    sbit  PSC0_TIM22_PSC_bit at TIM22_PSC.B0;
    sbit  PSC1_TIM22_PSC_bit at TIM22_PSC.B1;
    sbit  PSC2_TIM22_PSC_bit at TIM22_PSC.B2;
    sbit  PSC3_TIM22_PSC_bit at TIM22_PSC.B3;
    sbit  PSC4_TIM22_PSC_bit at TIM22_PSC.B4;
    sbit  PSC5_TIM22_PSC_bit at TIM22_PSC.B5;
    sbit  PSC6_TIM22_PSC_bit at TIM22_PSC.B6;
    sbit  PSC7_TIM22_PSC_bit at TIM22_PSC.B7;
    sbit  PSC8_TIM22_PSC_bit at TIM22_PSC.B8;
    sbit  PSC9_TIM22_PSC_bit at TIM22_PSC.B9;
    sbit  PSC10_TIM22_PSC_bit at TIM22_PSC.B10;
    sbit  PSC11_TIM22_PSC_bit at TIM22_PSC.B11;
    sbit  PSC12_TIM22_PSC_bit at TIM22_PSC.B12;
    sbit  PSC13_TIM22_PSC_bit at TIM22_PSC.B13;
    sbit  PSC14_TIM22_PSC_bit at TIM22_PSC.B14;
    sbit  PSC15_TIM22_PSC_bit at TIM22_PSC.B15;

sfr unsigned long   volatile TIM22_ARR            absolute 0x4001142C;
    sbit  ARR0_TIM22_ARR_bit at TIM22_ARR.B0;
    sbit  ARR1_TIM22_ARR_bit at TIM22_ARR.B1;
    sbit  ARR2_TIM22_ARR_bit at TIM22_ARR.B2;
    sbit  ARR3_TIM22_ARR_bit at TIM22_ARR.B3;
    sbit  ARR4_TIM22_ARR_bit at TIM22_ARR.B4;
    sbit  ARR5_TIM22_ARR_bit at TIM22_ARR.B5;
    sbit  ARR6_TIM22_ARR_bit at TIM22_ARR.B6;
    sbit  ARR7_TIM22_ARR_bit at TIM22_ARR.B7;
    sbit  ARR8_TIM22_ARR_bit at TIM22_ARR.B8;
    sbit  ARR9_TIM22_ARR_bit at TIM22_ARR.B9;
    sbit  ARR10_TIM22_ARR_bit at TIM22_ARR.B10;
    sbit  ARR11_TIM22_ARR_bit at TIM22_ARR.B11;
    sbit  ARR12_TIM22_ARR_bit at TIM22_ARR.B12;
    sbit  ARR13_TIM22_ARR_bit at TIM22_ARR.B13;
    sbit  ARR14_TIM22_ARR_bit at TIM22_ARR.B14;
    sbit  ARR15_TIM22_ARR_bit at TIM22_ARR.B15;

sfr unsigned long   volatile TIM22_CCR1           absolute 0x40011434;
    sbit  CCR10_TIM22_CCR1_bit at TIM22_CCR1.B0;
    sbit  CCR11_TIM22_CCR1_bit at TIM22_CCR1.B1;
    sbit  CCR12_TIM22_CCR1_bit at TIM22_CCR1.B2;
    sbit  CCR13_TIM22_CCR1_bit at TIM22_CCR1.B3;
    sbit  CCR14_TIM22_CCR1_bit at TIM22_CCR1.B4;
    sbit  CCR15_TIM22_CCR1_bit at TIM22_CCR1.B5;
    sbit  CCR16_TIM22_CCR1_bit at TIM22_CCR1.B6;
    sbit  CCR17_TIM22_CCR1_bit at TIM22_CCR1.B7;
    sbit  CCR18_TIM22_CCR1_bit at TIM22_CCR1.B8;
    sbit  CCR19_TIM22_CCR1_bit at TIM22_CCR1.B9;
    sbit  CCR110_TIM22_CCR1_bit at TIM22_CCR1.B10;
    sbit  CCR111_TIM22_CCR1_bit at TIM22_CCR1.B11;
    sbit  CCR112_TIM22_CCR1_bit at TIM22_CCR1.B12;
    sbit  CCR113_TIM22_CCR1_bit at TIM22_CCR1.B13;
    sbit  CCR114_TIM22_CCR1_bit at TIM22_CCR1.B14;
    sbit  CCR115_TIM22_CCR1_bit at TIM22_CCR1.B15;

sfr unsigned long   volatile TIM22_CCR2           absolute 0x40011438;
    sbit  CCR20_TIM22_CCR2_bit at TIM22_CCR2.B0;
    sbit  CCR21_TIM22_CCR2_bit at TIM22_CCR2.B1;
    sbit  CCR22_TIM22_CCR2_bit at TIM22_CCR2.B2;
    sbit  CCR23_TIM22_CCR2_bit at TIM22_CCR2.B3;
    sbit  CCR24_TIM22_CCR2_bit at TIM22_CCR2.B4;
    sbit  CCR25_TIM22_CCR2_bit at TIM22_CCR2.B5;
    sbit  CCR26_TIM22_CCR2_bit at TIM22_CCR2.B6;
    sbit  CCR27_TIM22_CCR2_bit at TIM22_CCR2.B7;
    sbit  CCR28_TIM22_CCR2_bit at TIM22_CCR2.B8;
    sbit  CCR29_TIM22_CCR2_bit at TIM22_CCR2.B9;
    sbit  CCR210_TIM22_CCR2_bit at TIM22_CCR2.B10;
    sbit  CCR211_TIM22_CCR2_bit at TIM22_CCR2.B11;
    sbit  CCR212_TIM22_CCR2_bit at TIM22_CCR2.B12;
    sbit  CCR213_TIM22_CCR2_bit at TIM22_CCR2.B13;
    sbit  CCR214_TIM22_CCR2_bit at TIM22_CCR2.B14;
    sbit  CCR215_TIM22_CCR2_bit at TIM22_CCR2.B15;

sfr unsigned long   volatile TIM22_OR             absolute 0x40011450;
    sbit  ETR_RMP0_TIM22_OR_bit at TIM22_OR.B0;
    sbit  ETR_RMP1_TIM22_OR_bit at TIM22_OR.B1;
    sbit  TI1_RMP0_TIM22_OR_bit at TIM22_OR.B2;
    sbit  TI1_RMP1_TIM22_OR_bit at TIM22_OR.B3;

sfr unsigned long   volatile LPUART1_CR1          absolute 0x40004800;
    sbit  M1_LPUART1_CR1_bit at LPUART1_CR1.B28;
    sbit  DEAT4_LPUART1_CR1_bit at LPUART1_CR1.B25;
    sbit  DEAT3_LPUART1_CR1_bit at LPUART1_CR1.B24;
    sbit  DEAT2_LPUART1_CR1_bit at LPUART1_CR1.B23;
    sbit  DEAT1_LPUART1_CR1_bit at LPUART1_CR1.B22;
    sbit  DEAT0_LPUART1_CR1_bit at LPUART1_CR1.B21;
    sbit  DEDT4_LPUART1_CR1_bit at LPUART1_CR1.B20;
    sbit  DEDT3_LPUART1_CR1_bit at LPUART1_CR1.B19;
    sbit  DEDT2_LPUART1_CR1_bit at LPUART1_CR1.B18;
    sbit  DEDT1_LPUART1_CR1_bit at LPUART1_CR1.B17;
    sbit  DEDT0_LPUART1_CR1_bit at LPUART1_CR1.B16;
    sbit  CMIE_LPUART1_CR1_bit at LPUART1_CR1.B14;
    sbit  MME_LPUART1_CR1_bit at LPUART1_CR1.B13;
    sbit  M0_LPUART1_CR1_bit at LPUART1_CR1.B12;
    sbit  WAKE_LPUART1_CR1_bit at LPUART1_CR1.B11;
    sbit  PCE_LPUART1_CR1_bit at LPUART1_CR1.B10;
    sbit  PS_LPUART1_CR1_bit at LPUART1_CR1.B9;
    sbit  PEIE_LPUART1_CR1_bit at LPUART1_CR1.B8;
    sbit  TXEIE_LPUART1_CR1_bit at LPUART1_CR1.B7;
    sbit  TCIE_LPUART1_CR1_bit at LPUART1_CR1.B6;
    sbit  RXNEIE_LPUART1_CR1_bit at LPUART1_CR1.B5;
    sbit  IDLEIE_LPUART1_CR1_bit at LPUART1_CR1.B4;
    sbit  TE_LPUART1_CR1_bit at LPUART1_CR1.B3;
    sbit  RE_LPUART1_CR1_bit at LPUART1_CR1.B2;
    sbit  UESM_LPUART1_CR1_bit at LPUART1_CR1.B1;
    sbit  UE_LPUART1_CR1_bit at LPUART1_CR1.B0;

sfr unsigned long   volatile LPUART1_CR2          absolute 0x40004804;
    sbit  ADD4_70_LPUART1_CR2_bit at LPUART1_CR2.B28;
    sbit  ADD4_71_LPUART1_CR2_bit at LPUART1_CR2.B29;
    sbit  ADD4_72_LPUART1_CR2_bit at LPUART1_CR2.B30;
    sbit  ADD4_73_LPUART1_CR2_bit at LPUART1_CR2.B31;
    sbit  ADD0_30_LPUART1_CR2_bit at LPUART1_CR2.B24;
    sbit  ADD0_31_LPUART1_CR2_bit at LPUART1_CR2.B25;
    sbit  ADD0_32_LPUART1_CR2_bit at LPUART1_CR2.B26;
    sbit  ADD0_33_LPUART1_CR2_bit at LPUART1_CR2.B27;
    sbit  MSBFIRST_LPUART1_CR2_bit at LPUART1_CR2.B19;
    sbit  TAINV_LPUART1_CR2_bit at LPUART1_CR2.B18;
    sbit  TXINV_LPUART1_CR2_bit at LPUART1_CR2.B17;
    sbit  RXINV_LPUART1_CR2_bit at LPUART1_CR2.B16;
    sbit  SWAP_LPUART1_CR2_bit at LPUART1_CR2.B15;
    sbit  STOP0_LPUART1_CR2_bit at LPUART1_CR2.B12;
    sbit  STOP1_LPUART1_CR2_bit at LPUART1_CR2.B13;
    sbit  CLKEN_LPUART1_CR2_bit at LPUART1_CR2.B11;
    sbit  ADDM7_LPUART1_CR2_bit at LPUART1_CR2.B4;

sfr unsigned long   volatile LPUART1_CR3          absolute 0x40004808;
    sbit  WUFIE_LPUART1_CR3_bit at LPUART1_CR3.B22;
    sbit  WUS0_LPUART1_CR3_bit at LPUART1_CR3.B20;
    sbit  WUS1_LPUART1_CR3_bit at LPUART1_CR3.B21;
    sbit  DEP_LPUART1_CR3_bit at LPUART1_CR3.B15;
    sbit  DEM_LPUART1_CR3_bit at LPUART1_CR3.B14;
    sbit  DDRE_LPUART1_CR3_bit at LPUART1_CR3.B13;
    sbit  OVRDIS_LPUART1_CR3_bit at LPUART1_CR3.B12;
    sbit  CTSIE_LPUART1_CR3_bit at LPUART1_CR3.B10;
    sbit  CTSE_LPUART1_CR3_bit at LPUART1_CR3.B9;
    sbit  RTSE_LPUART1_CR3_bit at LPUART1_CR3.B8;
    sbit  DMAT_LPUART1_CR3_bit at LPUART1_CR3.B7;
    sbit  DMAR_LPUART1_CR3_bit at LPUART1_CR3.B6;
    sbit  HDSEL_LPUART1_CR3_bit at LPUART1_CR3.B3;
    sbit  EIE_LPUART1_CR3_bit at LPUART1_CR3.B0;

sfr unsigned long   volatile LPUART1_BRR          absolute 0x4000480C;
    const register unsigned short int BRR0 = 0;
    sbit  BRR0_bit at LPUART1_BRR.B0;
    const register unsigned short int BRR1 = 1;
    sbit  BRR1_bit at LPUART1_BRR.B1;
    const register unsigned short int BRR2 = 2;
    sbit  BRR2_bit at LPUART1_BRR.B2;
    const register unsigned short int BRR3 = 3;
    sbit  BRR3_bit at LPUART1_BRR.B3;
    const register unsigned short int BRR4 = 4;
    sbit  BRR4_bit at LPUART1_BRR.B4;
    const register unsigned short int BRR5 = 5;
    sbit  BRR5_bit at LPUART1_BRR.B5;
    const register unsigned short int BRR6 = 6;
    sbit  BRR6_bit at LPUART1_BRR.B6;
    const register unsigned short int BRR7 = 7;
    sbit  BRR7_bit at LPUART1_BRR.B7;
    const register unsigned short int BRR8 = 8;
    sbit  BRR8_bit at LPUART1_BRR.B8;
    const register unsigned short int BRR9 = 9;
    sbit  BRR9_bit at LPUART1_BRR.B9;
    const register unsigned short int BRR10 = 10;
    sbit  BRR10_bit at LPUART1_BRR.B10;
    const register unsigned short int BRR11 = 11;
    sbit  BRR11_bit at LPUART1_BRR.B11;
    const register unsigned short int BRR12 = 12;
    sbit  BRR12_bit at LPUART1_BRR.B12;
    const register unsigned short int BRR13 = 13;
    sbit  BRR13_bit at LPUART1_BRR.B13;
    const register unsigned short int BRR14 = 14;
    sbit  BRR14_bit at LPUART1_BRR.B14;
    const register unsigned short int BRR15 = 15;
    sbit  BRR15_bit at LPUART1_BRR.B15;
    const register unsigned short int BRR16 = 16;
    sbit  BRR16_bit at LPUART1_BRR.B16;
    const register unsigned short int BRR17 = 17;
    sbit  BRR17_bit at LPUART1_BRR.B17;
    const register unsigned short int BRR18 = 18;
    sbit  BRR18_bit at LPUART1_BRR.B18;
    const register unsigned short int BRR19 = 19;
    sbit  BRR19_bit at LPUART1_BRR.B19;

sfr unsigned long   volatile LPUART1_RQR          absolute 0x40004818;
    sbit  RXFRQ_LPUART1_RQR_bit at LPUART1_RQR.B3;
    sbit  MMRQ_LPUART1_RQR_bit at LPUART1_RQR.B2;
    sbit  SBKRQ_LPUART1_RQR_bit at LPUART1_RQR.B1;

sfr unsigned long   volatile LPUART1_ISR          absolute 0x4000481C;
    sbit  REACK_LPUART1_ISR_bit at LPUART1_ISR.B22;
    sbit  TEACK_LPUART1_ISR_bit at LPUART1_ISR.B21;
    sbit  WUF_LPUART1_ISR_bit at LPUART1_ISR.B20;
    sbit  RWU_LPUART1_ISR_bit at LPUART1_ISR.B19;
    sbit  SBKF_LPUART1_ISR_bit at LPUART1_ISR.B18;
    sbit  CMF_LPUART1_ISR_bit at LPUART1_ISR.B17;
    sbit  BUSY_LPUART1_ISR_bit at LPUART1_ISR.B16;
    sbit  CTS_LPUART1_ISR_bit at LPUART1_ISR.B10;
    sbit  CTSIF_LPUART1_ISR_bit at LPUART1_ISR.B9;
    sbit  TXE_LPUART1_ISR_bit at LPUART1_ISR.B7;
    sbit  TC_LPUART1_ISR_bit at LPUART1_ISR.B6;
    sbit  RXNE_LPUART1_ISR_bit at LPUART1_ISR.B5;
    sbit  IDLE_LPUART1_ISR_bit at LPUART1_ISR.B4;
    sbit  ORE_LPUART1_ISR_bit at LPUART1_ISR.B3;
    sbit  NF_LPUART1_ISR_bit at LPUART1_ISR.B2;
    sbit  FE_LPUART1_ISR_bit at LPUART1_ISR.B1;
    sbit  PE_LPUART1_ISR_bit at LPUART1_ISR.B0;

sfr unsigned long   volatile LPUART1_ICR          absolute 0x40004820;
    sbit  WUCF_LPUART1_ICR_bit at LPUART1_ICR.B20;
    sbit  CMCF_LPUART1_ICR_bit at LPUART1_ICR.B17;
    sbit  CTSCF_LPUART1_ICR_bit at LPUART1_ICR.B9;
    sbit  TCCF_LPUART1_ICR_bit at LPUART1_ICR.B6;
    sbit  IDLECF_LPUART1_ICR_bit at LPUART1_ICR.B4;
    sbit  ORECF_LPUART1_ICR_bit at LPUART1_ICR.B3;
    sbit  NCF_LPUART1_ICR_bit at LPUART1_ICR.B2;
    sbit  FECF_LPUART1_ICR_bit at LPUART1_ICR.B1;
    sbit  PECF_LPUART1_ICR_bit at LPUART1_ICR.B0;

sfr unsigned long   volatile LPUART1_RDR          absolute 0x40004824;
    sbit  RDR0_LPUART1_RDR_bit at LPUART1_RDR.B0;
    sbit  RDR1_LPUART1_RDR_bit at LPUART1_RDR.B1;
    sbit  RDR2_LPUART1_RDR_bit at LPUART1_RDR.B2;
    sbit  RDR3_LPUART1_RDR_bit at LPUART1_RDR.B3;
    sbit  RDR4_LPUART1_RDR_bit at LPUART1_RDR.B4;
    sbit  RDR5_LPUART1_RDR_bit at LPUART1_RDR.B5;
    sbit  RDR6_LPUART1_RDR_bit at LPUART1_RDR.B6;
    sbit  RDR7_LPUART1_RDR_bit at LPUART1_RDR.B7;
    sbit  RDR8_LPUART1_RDR_bit at LPUART1_RDR.B8;

sfr unsigned long   volatile LPUART1_TDR          absolute 0x40004828;
    sbit  TDR0_LPUART1_TDR_bit at LPUART1_TDR.B0;
    sbit  TDR1_LPUART1_TDR_bit at LPUART1_TDR.B1;
    sbit  TDR2_LPUART1_TDR_bit at LPUART1_TDR.B2;
    sbit  TDR3_LPUART1_TDR_bit at LPUART1_TDR.B3;
    sbit  TDR4_LPUART1_TDR_bit at LPUART1_TDR.B4;
    sbit  TDR5_LPUART1_TDR_bit at LPUART1_TDR.B5;
    sbit  TDR6_LPUART1_TDR_bit at LPUART1_TDR.B6;
    sbit  TDR7_LPUART1_TDR_bit at LPUART1_TDR.B7;
    sbit  TDR8_LPUART1_TDR_bit at LPUART1_TDR.B8;

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

sfr far unsigned long   volatile STK_CSR              absolute 0xE000E010;
    const register unsigned short int COUNTFLAG = 16;
    sbit  COUNTFLAG_bit at STK_CSR.B16;
    const register unsigned short int CLKSOURCE = 2;
    sbit  CLKSOURCE_bit at STK_CSR.B2;
    const register unsigned short int TICKINT = 1;
    sbit  TICKINT_bit at STK_CSR.B1;
    sbit  ENABLE_STK_CSR_bit at STK_CSR.B0;

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
    const register unsigned short int BFHFNMIGN = 8;
    sbit  BFHFNMIGN_bit at SCB_CCR.B8;
    const register unsigned short int DIV_0_TRP = 4;
    sbit  DIV_0_TRP_bit at SCB_CCR.B4;
    const register unsigned short int UNALIGN_TRP = 3;
    sbit  UNALIGN_TRP_bit at SCB_CCR.B3;
    const register unsigned short int USERSETMPEND = 1;
    sbit  USERSETMPEND_bit at SCB_CCR.B1;
    const register unsigned short int USENONBASETHRDENARSETMPEND = 0;
    sbit  USENONBASETHRDENARSETMPEND_bit at SCB_CCR.B0;

sfr far unsigned long   volatile SCB_SHPR2            absolute 0xE000ED1C;
    sbit  PRI_60_SCB_SHPR2_bit at SCB_SHPR2.B16;
    sbit  PRI_61_SCB_SHPR2_bit at SCB_SHPR2.B17;
    sbit  PRI_62_SCB_SHPR2_bit at SCB_SHPR2.B18;
    sbit  PRI_63_SCB_SHPR2_bit at SCB_SHPR2.B19;
    sbit  PRI_64_SCB_SHPR2_bit at SCB_SHPR2.B20;
    sbit  PRI_65_SCB_SHPR2_bit at SCB_SHPR2.B21;
    sbit  PRI_66_SCB_SHPR2_bit at SCB_SHPR2.B22;
    sbit  PRI_67_SCB_SHPR2_bit at SCB_SHPR2.B23;
    sbit  PRI_50_SCB_SHPR2_bit at SCB_SHPR2.B8;
    sbit  PRI_51_SCB_SHPR2_bit at SCB_SHPR2.B9;
    sbit  PRI_52_SCB_SHPR2_bit at SCB_SHPR2.B10;
    sbit  PRI_53_SCB_SHPR2_bit at SCB_SHPR2.B11;
    sbit  PRI_54_SCB_SHPR2_bit at SCB_SHPR2.B12;
    sbit  PRI_55_SCB_SHPR2_bit at SCB_SHPR2.B13;
    sbit  PRI_56_SCB_SHPR2_bit at SCB_SHPR2.B14;
    sbit  PRI_57_SCB_SHPR2_bit at SCB_SHPR2.B15;
    sbit  PRI_40_SCB_SHPR2_bit at SCB_SHPR2.B0;
    sbit  PRI_41_SCB_SHPR2_bit at SCB_SHPR2.B1;
    sbit  PRI_42_SCB_SHPR2_bit at SCB_SHPR2.B2;
    sbit  PRI_43_SCB_SHPR2_bit at SCB_SHPR2.B3;
    sbit  PRI_44_SCB_SHPR2_bit at SCB_SHPR2.B4;
    sbit  PRI_45_SCB_SHPR2_bit at SCB_SHPR2.B5;
    sbit  PRI_46_SCB_SHPR2_bit at SCB_SHPR2.B6;
    sbit  PRI_47_SCB_SHPR2_bit at SCB_SHPR2.B7;

sfr far unsigned long   volatile SCB_SHPR3            absolute 0xE000ED20;
    sbit  PRI_150_SCB_SHPR3_bit at SCB_SHPR3.B24;
    sbit  PRI_151_SCB_SHPR3_bit at SCB_SHPR3.B25;
    sbit  PRI_152_SCB_SHPR3_bit at SCB_SHPR3.B26;
    sbit  PRI_153_SCB_SHPR3_bit at SCB_SHPR3.B27;
    sbit  PRI_154_SCB_SHPR3_bit at SCB_SHPR3.B28;
    sbit  PRI_155_SCB_SHPR3_bit at SCB_SHPR3.B29;
    sbit  PRI_156_SCB_SHPR3_bit at SCB_SHPR3.B30;
    sbit  PRI_157_SCB_SHPR3_bit at SCB_SHPR3.B31;
    sbit  PRI_140_SCB_SHPR3_bit at SCB_SHPR3.B16;
    sbit  PRI_141_SCB_SHPR3_bit at SCB_SHPR3.B17;
    sbit  PRI_142_SCB_SHPR3_bit at SCB_SHPR3.B18;
    sbit  PRI_143_SCB_SHPR3_bit at SCB_SHPR3.B19;
    sbit  PRI_144_SCB_SHPR3_bit at SCB_SHPR3.B20;
    sbit  PRI_145_SCB_SHPR3_bit at SCB_SHPR3.B21;
    sbit  PRI_146_SCB_SHPR3_bit at SCB_SHPR3.B22;
    sbit  PRI_147_SCB_SHPR3_bit at SCB_SHPR3.B23;


 typedef struct tagAES_CRBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned DATATYPE : 2;
      unsigned MODE : 2;
      unsigned CHMOD : 2;
      unsigned CCFC : 1;
      unsigned ERRC : 1;
      unsigned CCFIE : 1;
      unsigned ERRIE : 1;
      unsigned DMAINEN : 1;
      unsigned DMAOUTEN : 1;
      unsigned : 19;
    };
  };
} typeAES_CRBITS;
sfr volatile typeAES_CRBITS AES_CRbits absolute 0x40026000;

 typedef struct tagAES_SRBITS {
  union {
    struct {
      unsigned CCF : 1;
      unsigned RDERR : 1;
      unsigned WRERR : 1;
      unsigned : 29;
    };
  };
} typeAES_SRBITS;
sfr volatile typeAES_SRBITS AES_SRbits absolute 0x40026004;

 typedef struct tagAES_DINRBITS {
  union {
    struct {
      unsigned AES_DINR : 32;
    };
  };
} typeAES_DINRBITS;
sfr volatile typeAES_DINRBITS AES_DINRbits absolute 0x40026008;

 typedef struct tagAES_DOUTRBITS {
  union {
    struct {
      unsigned AES_DOUTR : 32;
    };
  };
} typeAES_DOUTRBITS;
sfr volatile typeAES_DOUTRBITS AES_DOUTRbits absolute 0x4002600C;

 typedef struct tagAES_KEYR0BITS {
  union {
    struct {
      unsigned AES_KEYR0 : 32;
    };
  };
} typeAES_KEYR0BITS;
sfr volatile typeAES_KEYR0BITS AES_KEYR0bits absolute 0x40026010;

 typedef struct tagAES_KEYR1BITS {
  union {
    struct {
      unsigned AES_KEYR1 : 32;
    };
  };
} typeAES_KEYR1BITS;
sfr volatile typeAES_KEYR1BITS AES_KEYR1bits absolute 0x40026014;

 typedef struct tagAES_KEYR2BITS {
  union {
    struct {
      unsigned AES_KEYR2 : 32;
    };
  };
} typeAES_KEYR2BITS;
sfr volatile typeAES_KEYR2BITS AES_KEYR2bits absolute 0x40026018;

 typedef struct tagAES_KEYR3BITS {
  union {
    struct {
      unsigned AES_KEYR3 : 32;
    };
  };
} typeAES_KEYR3BITS;
sfr volatile typeAES_KEYR3BITS AES_KEYR3bits absolute 0x4002601C;

 typedef struct tagAES_IVR0BITS {
  union {
    struct {
      unsigned AES_IVR0 : 32;
    };
  };
} typeAES_IVR0BITS;
sfr volatile typeAES_IVR0BITS AES_IVR0bits absolute 0x40026020;

 typedef struct tagAES_IVR1BITS {
  union {
    struct {
      unsigned AES_IVR1 : 32;
    };
  };
} typeAES_IVR1BITS;
sfr volatile typeAES_IVR1BITS AES_IVR1bits absolute 0x40026024;

 typedef struct tagAES_IVR2BITS {
  union {
    struct {
      unsigned AES_IVR2 : 32;
    };
  };
} typeAES_IVR2BITS;
sfr volatile typeAES_IVR2BITS AES_IVR2bits absolute 0x40026028;

 typedef struct tagAES_IVR3BITS {
  union {
    struct {
      unsigned AES_IVR3 : 32;
    };
  };
} typeAES_IVR3BITS;
sfr volatile typeAES_IVR3BITS AES_IVR3bits absolute 0x4002602C;

 typedef struct tagDMA1_ISRBITS {
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
} typeDMA1_ISRBITS;
sfr volatile typeDMA1_ISRBITS DMA1_ISRbits absolute 0x40020000;

 typedef struct tagDMA1_IFCRBITS {
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
} typeDMA1_IFCRBITS;
sfr volatile typeDMA1_IFCRBITS DMA1_IFCRbits absolute 0x40020004;

 typedef struct tagDMA1_CCR1BITS {
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
} typeDMA1_CCR1BITS;
sfr volatile typeDMA1_CCR1BITS DMA1_CCR1bits absolute 0x40020008;

 typedef struct tagDMA1_CNDTR1BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_CNDTR1BITS;
sfr volatile typeDMA1_CNDTR1BITS DMA1_CNDTR1bits absolute 0x4002000C;

 typedef struct tagDMA1_CPAR1BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_CPAR1BITS;
sfr volatile typeDMA1_CPAR1BITS DMA1_CPAR1bits absolute 0x40020010;

 typedef struct tagDMA1_CMAR1BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA1_CMAR1BITS;
sfr volatile typeDMA1_CMAR1BITS DMA1_CMAR1bits absolute 0x40020014;

 typedef struct tagDMA1_CCR2BITS {
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
} typeDMA1_CCR2BITS;
sfr volatile typeDMA1_CCR2BITS DMA1_CCR2bits absolute 0x4002001C;

 typedef struct tagDMA1_CNDTR2BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_CNDTR2BITS;
sfr volatile typeDMA1_CNDTR2BITS DMA1_CNDTR2bits absolute 0x40020020;

 typedef struct tagDMA1_CPAR2BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_CPAR2BITS;
sfr volatile typeDMA1_CPAR2BITS DMA1_CPAR2bits absolute 0x40020024;

 typedef struct tagDMA1_CMAR2BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA1_CMAR2BITS;
sfr volatile typeDMA1_CMAR2BITS DMA1_CMAR2bits absolute 0x40020028;

 typedef struct tagDMA1_CCR3BITS {
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
} typeDMA1_CCR3BITS;
sfr volatile typeDMA1_CCR3BITS DMA1_CCR3bits absolute 0x40020030;

 typedef struct tagDMA1_CNDTR3BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_CNDTR3BITS;
sfr volatile typeDMA1_CNDTR3BITS DMA1_CNDTR3bits absolute 0x40020034;

 typedef struct tagDMA1_CPAR3BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_CPAR3BITS;
sfr volatile typeDMA1_CPAR3BITS DMA1_CPAR3bits absolute 0x40020038;

 typedef struct tagDMA1_CMAR3BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA1_CMAR3BITS;
sfr volatile typeDMA1_CMAR3BITS DMA1_CMAR3bits absolute 0x4002003C;

 typedef struct tagDMA1_CCR4BITS {
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
} typeDMA1_CCR4BITS;
sfr volatile typeDMA1_CCR4BITS DMA1_CCR4bits absolute 0x40020044;

 typedef struct tagDMA1_CNDTR4BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_CNDTR4BITS;
sfr volatile typeDMA1_CNDTR4BITS DMA1_CNDTR4bits absolute 0x40020048;

 typedef struct tagDMA1_CPAR4BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_CPAR4BITS;
sfr volatile typeDMA1_CPAR4BITS DMA1_CPAR4bits absolute 0x4002004C;

 typedef struct tagDMA1_CMAR4BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA1_CMAR4BITS;
sfr volatile typeDMA1_CMAR4BITS DMA1_CMAR4bits absolute 0x40020050;

 typedef struct tagDMA1_CCR5BITS {
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
} typeDMA1_CCR5BITS;
sfr volatile typeDMA1_CCR5BITS DMA1_CCR5bits absolute 0x40020058;

 typedef struct tagDMA1_CNDTR5BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_CNDTR5BITS;
sfr volatile typeDMA1_CNDTR5BITS DMA1_CNDTR5bits absolute 0x4002005C;

 typedef struct tagDMA1_CPAR5BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_CPAR5BITS;
sfr volatile typeDMA1_CPAR5BITS DMA1_CPAR5bits absolute 0x40020060;

 typedef struct tagDMA1_CMAR5BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA1_CMAR5BITS;
sfr volatile typeDMA1_CMAR5BITS DMA1_CMAR5bits absolute 0x40020064;

 typedef struct tagDMA1_CCR6BITS {
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
} typeDMA1_CCR6BITS;
sfr volatile typeDMA1_CCR6BITS DMA1_CCR6bits absolute 0x4002006C;

 typedef struct tagDMA1_CNDTR6BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_CNDTR6BITS;
sfr volatile typeDMA1_CNDTR6BITS DMA1_CNDTR6bits absolute 0x40020070;

 typedef struct tagDMA1_CPAR6BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_CPAR6BITS;
sfr volatile typeDMA1_CPAR6BITS DMA1_CPAR6bits absolute 0x40020074;

 typedef struct tagDMA1_CMAR6BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA1_CMAR6BITS;
sfr volatile typeDMA1_CMAR6BITS DMA1_CMAR6bits absolute 0x40020078;

 typedef struct tagDMA1_CCR7BITS {
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
} typeDMA1_CCR7BITS;
sfr volatile typeDMA1_CCR7BITS DMA1_CCR7bits absolute 0x40020080;

 typedef struct tagDMA1_CNDTR7BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_CNDTR7BITS;
sfr volatile typeDMA1_CNDTR7BITS DMA1_CNDTR7bits absolute 0x40020084;

 typedef struct tagDMA1_CPAR7BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_CPAR7BITS;
sfr volatile typeDMA1_CPAR7BITS DMA1_CPAR7bits absolute 0x40020088;

 typedef struct tagDMA1_CMAR7BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA1_CMAR7BITS;
sfr volatile typeDMA1_CMAR7BITS DMA1_CMAR7bits absolute 0x4002008C;

 typedef struct tagDMA1_CSELRBITS {
  union {
    struct {
      unsigned C1S : 4;
      unsigned C2S : 4;
      unsigned C3S : 4;
      unsigned C4S : 4;
      unsigned C5S : 4;
      unsigned C6S : 4;
      unsigned C7S : 4;
      unsigned : 4;
    };
  };
} typeDMA1_CSELRBITS;
sfr volatile typeDMA1_CSELRBITS DMA1_CSELRbits absolute 0x400200A8;

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
      unsigned Polynomialcoefficients : 32;
    };
  };
} typeCRC_POLBITS;
sfr volatile typeCRC_POLBITS CRC_POLbits absolute 0x40023014;

 typedef struct tagGPIOA_MODERBITS {
  union {
    struct {
      unsigned MODE0 : 2;
      unsigned MODE1 : 2;
      unsigned MODE2 : 2;
      unsigned MODE3 : 2;
      unsigned MODE4 : 2;
      unsigned MODE5 : 2;
      unsigned MODE6 : 2;
      unsigned MODE7 : 2;
      unsigned MODE8 : 2;
      unsigned MODE9 : 2;
      unsigned MODE10 : 2;
      unsigned MODE11 : 2;
      unsigned MODE12 : 2;
      unsigned MODE13 : 2;
      unsigned MODE14 : 2;
      unsigned MODE15 : 2;
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
      unsigned OSPEED0 : 2;
      unsigned OSPEED1 : 2;
      unsigned OSPEED2 : 2;
      unsigned OSPEED3 : 2;
      unsigned OSPEED4 : 2;
      unsigned OSPEED5 : 2;
      unsigned OSPEED6 : 2;
      unsigned OSPEED7 : 2;
      unsigned OSPEED8 : 2;
      unsigned OSPEED9 : 2;
      unsigned OSPEED10 : 2;
      unsigned OSPEED11 : 2;
      unsigned OSPEED12 : 2;
      unsigned OSPEED13 : 2;
      unsigned OSPEED14 : 2;
      unsigned OSPEED15 : 2;
    };
  };
} typeGPIOA_OSPEEDRBITS;
sfr far volatile typeGPIOA_OSPEEDRBITS GPIOA_OSPEEDRbits absolute 0x50000008;

 typedef struct tagGPIOA_PUPDRBITS {
  union {
    struct {
      unsigned PUPD0 : 2;
      unsigned PUPD1 : 2;
      unsigned PUPD2 : 2;
      unsigned PUPD3 : 2;
      unsigned PUPD4 : 2;
      unsigned PUPD5 : 2;
      unsigned PUPD6 : 2;
      unsigned PUPD7 : 2;
      unsigned PUPD8 : 2;
      unsigned PUPD9 : 2;
      unsigned PUPD10 : 2;
      unsigned PUPD11 : 2;
      unsigned PUPD12 : 2;
      unsigned PUPD13 : 2;
      unsigned PUPD14 : 2;
      unsigned PUPD15 : 2;
    };
  };
} typeGPIOA_PUPDRBITS;
sfr far volatile typeGPIOA_PUPDRBITS GPIOA_PUPDRbits absolute 0x5000000C;

 typedef struct tagGPIOA_IDRBITS {
  union {
    struct {
      unsigned ID0 : 1;
      unsigned ID1 : 1;
      unsigned ID2 : 1;
      unsigned ID3 : 1;
      unsigned ID4 : 1;
      unsigned ID5 : 1;
      unsigned ID6 : 1;
      unsigned ID7 : 1;
      unsigned ID8 : 1;
      unsigned ID9 : 1;
      unsigned ID10 : 1;
      unsigned ID11 : 1;
      unsigned ID12 : 1;
      unsigned ID13 : 1;
      unsigned ID14 : 1;
      unsigned ID15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOA_IDRBITS;
sfr far volatile typeGPIOA_IDRBITS GPIOA_IDRbits absolute 0x50000010;

 typedef struct tagGPIOA_ODRBITS {
  union {
    struct {
      unsigned OD0 : 1;
      unsigned OD1 : 1;
      unsigned OD2 : 1;
      unsigned OD3 : 1;
      unsigned OD4 : 1;
      unsigned OD5 : 1;
      unsigned OD6 : 1;
      unsigned OD7 : 1;
      unsigned OD8 : 1;
      unsigned OD9 : 1;
      unsigned OD10 : 1;
      unsigned OD11 : 1;
      unsigned OD12 : 1;
      unsigned OD13 : 1;
      unsigned OD14 : 1;
      unsigned OD15 : 1;
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
      unsigned MODE0 : 2;
      unsigned MODE1 : 2;
      unsigned MODE2 : 2;
      unsigned MODE3 : 2;
      unsigned MODE4 : 2;
      unsigned MODE5 : 2;
      unsigned MODE6 : 2;
      unsigned MODE7 : 2;
      unsigned MODE8 : 2;
      unsigned MODE9 : 2;
      unsigned MODE10 : 2;
      unsigned MODE11 : 2;
      unsigned MODE12 : 2;
      unsigned MODE13 : 2;
      unsigned MODE14 : 2;
      unsigned MODE15 : 2;
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
      unsigned OSPEED0 : 2;
      unsigned OSPEED1 : 2;
      unsigned OSPEED2 : 2;
      unsigned OSPEED3 : 2;
      unsigned OSPEED4 : 2;
      unsigned OSPEED5 : 2;
      unsigned OSPEED6 : 2;
      unsigned OSPEED7 : 2;
      unsigned OSPEED8 : 2;
      unsigned OSPEED9 : 2;
      unsigned OSPEED10 : 2;
      unsigned OSPEED11 : 2;
      unsigned OSPEED12 : 2;
      unsigned OSPEED13 : 2;
      unsigned OSPEED14 : 2;
      unsigned OSPEED15 : 2;
    };
  };
} typeGPIOB_OSPEEDRBITS;
sfr far volatile typeGPIOB_OSPEEDRBITS GPIOB_OSPEEDRbits absolute 0x50000408;

 typedef struct tagGPIOB_PUPDRBITS {
  union {
    struct {
      unsigned PUPD0 : 2;
      unsigned PUPD1 : 2;
      unsigned PUPD2 : 2;
      unsigned PUPD3 : 2;
      unsigned PUPD4 : 2;
      unsigned PUPD5 : 2;
      unsigned PUPD6 : 2;
      unsigned PUPD7 : 2;
      unsigned PUPD8 : 2;
      unsigned PUPD9 : 2;
      unsigned PUPD10 : 2;
      unsigned PUPD11 : 2;
      unsigned PUPD12 : 2;
      unsigned PUPD13 : 2;
      unsigned PUPD14 : 2;
      unsigned PUPD15 : 2;
    };
  };
} typeGPIOB_PUPDRBITS;
sfr far volatile typeGPIOB_PUPDRBITS GPIOB_PUPDRbits absolute 0x5000040C;

 typedef struct tagGPIOB_IDRBITS {
  union {
    struct {
      unsigned ID0 : 1;
      unsigned ID1 : 1;
      unsigned ID2 : 1;
      unsigned ID3 : 1;
      unsigned ID4 : 1;
      unsigned ID5 : 1;
      unsigned ID6 : 1;
      unsigned ID7 : 1;
      unsigned ID8 : 1;
      unsigned ID9 : 1;
      unsigned ID10 : 1;
      unsigned ID11 : 1;
      unsigned ID12 : 1;
      unsigned ID13 : 1;
      unsigned ID14 : 1;
      unsigned ID15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOB_IDRBITS;
sfr far volatile typeGPIOB_IDRBITS GPIOB_IDRbits absolute 0x50000410;

 typedef struct tagGPIOB_ODRBITS {
  union {
    struct {
      unsigned OD0 : 1;
      unsigned OD1 : 1;
      unsigned OD2 : 1;
      unsigned OD3 : 1;
      unsigned OD4 : 1;
      unsigned OD5 : 1;
      unsigned OD6 : 1;
      unsigned OD7 : 1;
      unsigned OD8 : 1;
      unsigned OD9 : 1;
      unsigned OD10 : 1;
      unsigned OD11 : 1;
      unsigned OD12 : 1;
      unsigned OD13 : 1;
      unsigned OD14 : 1;
      unsigned OD15 : 1;
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
      unsigned MODE0 : 2;
      unsigned MODE1 : 2;
      unsigned MODE2 : 2;
      unsigned MODE3 : 2;
      unsigned MODE4 : 2;
      unsigned MODE5 : 2;
      unsigned MODE6 : 2;
      unsigned MODE7 : 2;
      unsigned MODE8 : 2;
      unsigned MODE9 : 2;
      unsigned MODE10 : 2;
      unsigned MODE11 : 2;
      unsigned MODE12 : 2;
      unsigned MODE13 : 2;
      unsigned MODE14 : 2;
      unsigned MODE15 : 2;
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
      unsigned OSPEED0 : 2;
      unsigned OSPEED1 : 2;
      unsigned OSPEED2 : 2;
      unsigned OSPEED3 : 2;
      unsigned OSPEED4 : 2;
      unsigned OSPEED5 : 2;
      unsigned OSPEED6 : 2;
      unsigned OSPEED7 : 2;
      unsigned OSPEED8 : 2;
      unsigned OSPEED9 : 2;
      unsigned OSPEED10 : 2;
      unsigned OSPEED11 : 2;
      unsigned OSPEED12 : 2;
      unsigned OSPEED13 : 2;
      unsigned OSPEED14 : 2;
      unsigned OSPEED15 : 2;
    };
  };
} typeGPIOC_OSPEEDRBITS;
sfr far volatile typeGPIOC_OSPEEDRBITS GPIOC_OSPEEDRbits absolute 0x50000808;

 typedef struct tagGPIOC_PUPDRBITS {
  union {
    struct {
      unsigned PUPD0 : 2;
      unsigned PUPD1 : 2;
      unsigned PUPD2 : 2;
      unsigned PUPD3 : 2;
      unsigned PUPD4 : 2;
      unsigned PUPD5 : 2;
      unsigned PUPD6 : 2;
      unsigned PUPD7 : 2;
      unsigned PUPD8 : 2;
      unsigned PUPD9 : 2;
      unsigned PUPD10 : 2;
      unsigned PUPD11 : 2;
      unsigned PUPD12 : 2;
      unsigned PUPD13 : 2;
      unsigned PUPD14 : 2;
      unsigned PUPD15 : 2;
    };
  };
} typeGPIOC_PUPDRBITS;
sfr far volatile typeGPIOC_PUPDRBITS GPIOC_PUPDRbits absolute 0x5000080C;

 typedef struct tagGPIOC_IDRBITS {
  union {
    struct {
      unsigned ID0 : 1;
      unsigned ID1 : 1;
      unsigned ID2 : 1;
      unsigned ID3 : 1;
      unsigned ID4 : 1;
      unsigned ID5 : 1;
      unsigned ID6 : 1;
      unsigned ID7 : 1;
      unsigned ID8 : 1;
      unsigned ID9 : 1;
      unsigned ID10 : 1;
      unsigned ID11 : 1;
      unsigned ID12 : 1;
      unsigned ID13 : 1;
      unsigned ID14 : 1;
      unsigned ID15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOC_IDRBITS;
sfr far volatile typeGPIOC_IDRBITS GPIOC_IDRbits absolute 0x50000810;

 typedef struct tagGPIOC_ODRBITS {
  union {
    struct {
      unsigned OD0 : 1;
      unsigned OD1 : 1;
      unsigned OD2 : 1;
      unsigned OD3 : 1;
      unsigned OD4 : 1;
      unsigned OD5 : 1;
      unsigned OD6 : 1;
      unsigned OD7 : 1;
      unsigned OD8 : 1;
      unsigned OD9 : 1;
      unsigned OD10 : 1;
      unsigned OD11 : 1;
      unsigned OD12 : 1;
      unsigned OD13 : 1;
      unsigned OD14 : 1;
      unsigned OD15 : 1;
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
      unsigned MODE0 : 2;
      unsigned MODE1 : 2;
      unsigned MODE2 : 2;
      unsigned MODE3 : 2;
      unsigned MODE4 : 2;
      unsigned MODE5 : 2;
      unsigned MODE6 : 2;
      unsigned MODE7 : 2;
      unsigned MODE8 : 2;
      unsigned MODE9 : 2;
      unsigned MODE10 : 2;
      unsigned MODE11 : 2;
      unsigned MODE12 : 2;
      unsigned MODE13 : 2;
      unsigned MODE14 : 2;
      unsigned MODE15 : 2;
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
      unsigned OSPEED0 : 2;
      unsigned OSPEED1 : 2;
      unsigned OSPEED2 : 2;
      unsigned OSPEED3 : 2;
      unsigned OSPEED4 : 2;
      unsigned OSPEED5 : 2;
      unsigned OSPEED6 : 2;
      unsigned OSPEED7 : 2;
      unsigned OSPEED8 : 2;
      unsigned OSPEED9 : 2;
      unsigned OSPEED10 : 2;
      unsigned OSPEED11 : 2;
      unsigned OSPEED12 : 2;
      unsigned OSPEED13 : 2;
      unsigned OSPEED14 : 2;
      unsigned OSPEED15 : 2;
    };
  };
} typeGPIOD_OSPEEDRBITS;
sfr far volatile typeGPIOD_OSPEEDRBITS GPIOD_OSPEEDRbits absolute 0x50000C08;

 typedef struct tagGPIOD_PUPDRBITS {
  union {
    struct {
      unsigned PUPD0 : 2;
      unsigned PUPD1 : 2;
      unsigned PUPD2 : 2;
      unsigned PUPD3 : 2;
      unsigned PUPD4 : 2;
      unsigned PUPD5 : 2;
      unsigned PUPD6 : 2;
      unsigned PUPD7 : 2;
      unsigned PUPD8 : 2;
      unsigned PUPD9 : 2;
      unsigned PUPD10 : 2;
      unsigned PUPD11 : 2;
      unsigned PUPD12 : 2;
      unsigned PUPD13 : 2;
      unsigned PUPD14 : 2;
      unsigned PUPD15 : 2;
    };
  };
} typeGPIOD_PUPDRBITS;
sfr far volatile typeGPIOD_PUPDRBITS GPIOD_PUPDRbits absolute 0x50000C0C;

 typedef struct tagGPIOD_IDRBITS {
  union {
    struct {
      unsigned ID0 : 1;
      unsigned ID1 : 1;
      unsigned ID2 : 1;
      unsigned ID3 : 1;
      unsigned ID4 : 1;
      unsigned ID5 : 1;
      unsigned ID6 : 1;
      unsigned ID7 : 1;
      unsigned ID8 : 1;
      unsigned ID9 : 1;
      unsigned ID10 : 1;
      unsigned ID11 : 1;
      unsigned ID12 : 1;
      unsigned ID13 : 1;
      unsigned ID14 : 1;
      unsigned ID15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOD_IDRBITS;
sfr far volatile typeGPIOD_IDRBITS GPIOD_IDRbits absolute 0x50000C10;

 typedef struct tagGPIOD_ODRBITS {
  union {
    struct {
      unsigned OD0 : 1;
      unsigned OD1 : 1;
      unsigned OD2 : 1;
      unsigned OD3 : 1;
      unsigned OD4 : 1;
      unsigned OD5 : 1;
      unsigned OD6 : 1;
      unsigned OD7 : 1;
      unsigned OD8 : 1;
      unsigned OD9 : 1;
      unsigned OD10 : 1;
      unsigned OD11 : 1;
      unsigned OD12 : 1;
      unsigned OD13 : 1;
      unsigned OD14 : 1;
      unsigned OD15 : 1;
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

 typedef struct tagGPIOH_MODERBITS {
  union {
    struct {
      unsigned MODE0 : 2;
      unsigned MODE1 : 2;
      unsigned MODE2 : 2;
      unsigned MODE3 : 2;
      unsigned MODE4 : 2;
      unsigned MODE5 : 2;
      unsigned MODE6 : 2;
      unsigned MODE7 : 2;
      unsigned MODE8 : 2;
      unsigned MODE9 : 2;
      unsigned MODE10 : 2;
      unsigned MODE11 : 2;
      unsigned MODE12 : 2;
      unsigned MODE13 : 2;
      unsigned MODE14 : 2;
      unsigned MODE15 : 2;
    };
  };
} typeGPIOH_MODERBITS;
sfr far volatile typeGPIOH_MODERBITS GPIOH_MODERbits absolute 0x50001C00;

 typedef struct tagGPIOH_OTYPERBITS {
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
} typeGPIOH_OTYPERBITS;
sfr far volatile typeGPIOH_OTYPERBITS GPIOH_OTYPERbits absolute 0x50001C04;

 typedef struct tagGPIOH_OSPEEDRBITS {
  union {
    struct {
      unsigned OSPEED0 : 2;
      unsigned OSPEED1 : 2;
      unsigned OSPEED2 : 2;
      unsigned OSPEED3 : 2;
      unsigned OSPEED4 : 2;
      unsigned OSPEED5 : 2;
      unsigned OSPEED6 : 2;
      unsigned OSPEED7 : 2;
      unsigned OSPEED8 : 2;
      unsigned OSPEED9 : 2;
      unsigned OSPEED10 : 2;
      unsigned OSPEED11 : 2;
      unsigned OSPEED12 : 2;
      unsigned OSPEED13 : 2;
      unsigned OSPEED14 : 2;
      unsigned OSPEED15 : 2;
    };
  };
} typeGPIOH_OSPEEDRBITS;
sfr far volatile typeGPIOH_OSPEEDRBITS GPIOH_OSPEEDRbits absolute 0x50001C08;

 typedef struct tagGPIOH_PUPDRBITS {
  union {
    struct {
      unsigned PUPD0 : 2;
      unsigned PUPD1 : 2;
      unsigned PUPD2 : 2;
      unsigned PUPD3 : 2;
      unsigned PUPD4 : 2;
      unsigned PUPD5 : 2;
      unsigned PUPD6 : 2;
      unsigned PUPD7 : 2;
      unsigned PUPD8 : 2;
      unsigned PUPD9 : 2;
      unsigned PUPD10 : 2;
      unsigned PUPD11 : 2;
      unsigned PUPD12 : 2;
      unsigned PUPD13 : 2;
      unsigned PUPD14 : 2;
      unsigned PUPD15 : 2;
    };
  };
} typeGPIOH_PUPDRBITS;
sfr far volatile typeGPIOH_PUPDRBITS GPIOH_PUPDRbits absolute 0x50001C0C;

 typedef struct tagGPIOH_IDRBITS {
  union {
    struct {
      unsigned ID0 : 1;
      unsigned ID1 : 1;
      unsigned ID2 : 1;
      unsigned ID3 : 1;
      unsigned ID4 : 1;
      unsigned ID5 : 1;
      unsigned ID6 : 1;
      unsigned ID7 : 1;
      unsigned ID8 : 1;
      unsigned ID9 : 1;
      unsigned ID10 : 1;
      unsigned ID11 : 1;
      unsigned ID12 : 1;
      unsigned ID13 : 1;
      unsigned ID14 : 1;
      unsigned ID15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOH_IDRBITS;
sfr far volatile typeGPIOH_IDRBITS GPIOH_IDRbits absolute 0x50001C10;

 typedef struct tagGPIOH_ODRBITS {
  union {
    struct {
      unsigned OD0 : 1;
      unsigned OD1 : 1;
      unsigned OD2 : 1;
      unsigned OD3 : 1;
      unsigned OD4 : 1;
      unsigned OD5 : 1;
      unsigned OD6 : 1;
      unsigned OD7 : 1;
      unsigned OD8 : 1;
      unsigned OD9 : 1;
      unsigned OD10 : 1;
      unsigned OD11 : 1;
      unsigned OD12 : 1;
      unsigned OD13 : 1;
      unsigned OD14 : 1;
      unsigned OD15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOH_ODRBITS;
sfr far volatile typeGPIOH_ODRBITS GPIOH_ODRbits absolute 0x50001C14;

 typedef struct tagGPIOH_BSRRBITS {
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
} typeGPIOH_BSRRBITS;
sfr far volatile typeGPIOH_BSRRBITS GPIOH_BSRRbits absolute 0x50001C18;

 typedef struct tagGPIOH_LCKRBITS {
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
} typeGPIOH_LCKRBITS;
sfr far volatile typeGPIOH_LCKRBITS GPIOH_LCKRbits absolute 0x50001C1C;

 typedef struct tagGPIOH_AFRLBITS {
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
} typeGPIOH_AFRLBITS;
sfr far volatile typeGPIOH_AFRLBITS GPIOH_AFRLbits absolute 0x50001C20;

 typedef struct tagGPIOH_AFRHBITS {
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
} typeGPIOH_AFRHBITS;
sfr far volatile typeGPIOH_AFRHBITS GPIOH_AFRHbits absolute 0x50001C24;

 typedef struct tagGPIOH_BRRBITS {
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
} typeGPIOH_BRRBITS;
sfr far volatile typeGPIOH_BRRBITS GPIOH_BRRbits absolute 0x50001C28;

 typedef struct tagGPIOE_MODERBITS {
  union {
    struct {
      unsigned MODE0 : 2;
      unsigned MODE1 : 2;
      unsigned MODE2 : 2;
      unsigned MODE3 : 2;
      unsigned MODE4 : 2;
      unsigned MODE5 : 2;
      unsigned MODE6 : 2;
      unsigned MODE7 : 2;
      unsigned MODE8 : 2;
      unsigned MODE9 : 2;
      unsigned MODE10 : 2;
      unsigned MODE11 : 2;
      unsigned MODE12 : 2;
      unsigned MODE13 : 2;
      unsigned MODE14 : 2;
      unsigned MODE15 : 2;
    };
  };
} typeGPIOE_MODERBITS;
sfr far volatile typeGPIOE_MODERBITS GPIOE_MODERbits absolute 0x50001000;

 typedef struct tagGPIOE_OTYPERBITS {
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
} typeGPIOE_OTYPERBITS;
sfr far volatile typeGPIOE_OTYPERBITS GPIOE_OTYPERbits absolute 0x50001004;

 typedef struct tagGPIOE_OSPEEDRBITS {
  union {
    struct {
      unsigned OSPEED0 : 2;
      unsigned OSPEED1 : 2;
      unsigned OSPEED2 : 2;
      unsigned OSPEED3 : 2;
      unsigned OSPEED4 : 2;
      unsigned OSPEED5 : 2;
      unsigned OSPEED6 : 2;
      unsigned OSPEED7 : 2;
      unsigned OSPEED8 : 2;
      unsigned OSPEED9 : 2;
      unsigned OSPEED10 : 2;
      unsigned OSPEED11 : 2;
      unsigned OSPEED12 : 2;
      unsigned OSPEED13 : 2;
      unsigned OSPEED14 : 2;
      unsigned OSPEED15 : 2;
    };
  };
} typeGPIOE_OSPEEDRBITS;
sfr far volatile typeGPIOE_OSPEEDRBITS GPIOE_OSPEEDRbits absolute 0x50001008;

 typedef struct tagGPIOE_PUPDRBITS {
  union {
    struct {
      unsigned PUPD0 : 2;
      unsigned PUPD1 : 2;
      unsigned PUPD2 : 2;
      unsigned PUPD3 : 2;
      unsigned PUPD4 : 2;
      unsigned PUPD5 : 2;
      unsigned PUPD6 : 2;
      unsigned PUPD7 : 2;
      unsigned PUPD8 : 2;
      unsigned PUPD9 : 2;
      unsigned PUPD10 : 2;
      unsigned PUPD11 : 2;
      unsigned PUPD12 : 2;
      unsigned PUPD13 : 2;
      unsigned PUPD14 : 2;
      unsigned PUPD15 : 2;
    };
  };
} typeGPIOE_PUPDRBITS;
sfr far volatile typeGPIOE_PUPDRBITS GPIOE_PUPDRbits absolute 0x5000100C;

 typedef struct tagGPIOE_IDRBITS {
  union {
    struct {
      unsigned ID0 : 1;
      unsigned ID1 : 1;
      unsigned ID2 : 1;
      unsigned ID3 : 1;
      unsigned ID4 : 1;
      unsigned ID5 : 1;
      unsigned ID6 : 1;
      unsigned ID7 : 1;
      unsigned ID8 : 1;
      unsigned ID9 : 1;
      unsigned ID10 : 1;
      unsigned ID11 : 1;
      unsigned ID12 : 1;
      unsigned ID13 : 1;
      unsigned ID14 : 1;
      unsigned ID15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOE_IDRBITS;
sfr far volatile typeGPIOE_IDRBITS GPIOE_IDRbits absolute 0x50001010;

 typedef struct tagGPIOE_ODRBITS {
  union {
    struct {
      unsigned OD0 : 1;
      unsigned OD1 : 1;
      unsigned OD2 : 1;
      unsigned OD3 : 1;
      unsigned OD4 : 1;
      unsigned OD5 : 1;
      unsigned OD6 : 1;
      unsigned OD7 : 1;
      unsigned OD8 : 1;
      unsigned OD9 : 1;
      unsigned OD10 : 1;
      unsigned OD11 : 1;
      unsigned OD12 : 1;
      unsigned OD13 : 1;
      unsigned OD14 : 1;
      unsigned OD15 : 1;
      unsigned : 16;
    };
  };
} typeGPIOE_ODRBITS;
sfr far volatile typeGPIOE_ODRBITS GPIOE_ODRbits absolute 0x50001014;

 typedef struct tagGPIOE_BSRRBITS {
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
} typeGPIOE_BSRRBITS;
sfr far volatile typeGPIOE_BSRRBITS GPIOE_BSRRbits absolute 0x50001018;

 typedef struct tagGPIOE_LCKRBITS {
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
} typeGPIOE_LCKRBITS;
sfr far volatile typeGPIOE_LCKRBITS GPIOE_LCKRbits absolute 0x5000101C;

 typedef struct tagGPIOE_AFRLBITS {
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
} typeGPIOE_AFRLBITS;
sfr far volatile typeGPIOE_AFRLBITS GPIOE_AFRLbits absolute 0x50001020;

 typedef struct tagGPIOE_AFRHBITS {
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
} typeGPIOE_AFRHBITS;
sfr far volatile typeGPIOE_AFRHBITS GPIOE_AFRHbits absolute 0x50001024;

 typedef struct tagGPIOE_BRRBITS {
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
} typeGPIOE_BRRBITS;
sfr far volatile typeGPIOE_BRRBITS GPIOE_BRRbits absolute 0x50001028;

 typedef struct tagLPTIM_ISRBITS {
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
} typeLPTIM_ISRBITS;
sfr volatile typeLPTIM_ISRBITS LPTIM_ISRbits absolute 0x40007C00;

 typedef struct tagLPTIM_ICRBITS {
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
} typeLPTIM_ICRBITS;
sfr volatile typeLPTIM_ICRBITS LPTIM_ICRbits absolute 0x40007C04;

 typedef struct tagLPTIM_IERBITS {
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
} typeLPTIM_IERBITS;
sfr volatile typeLPTIM_IERBITS LPTIM_IERbits absolute 0x40007C08;

 typedef struct tagLPTIM_CFGRBITS {
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
} typeLPTIM_CFGRBITS;
sfr volatile typeLPTIM_CFGRBITS LPTIM_CFGRbits absolute 0x40007C0C;

 typedef struct tagLPTIM_CRBITS {
  union {
    struct {
      unsigned ENABLE_ : 1;
      unsigned SNGSTRT : 1;
      unsigned CNTSTRT : 1;
      unsigned : 29;
    };
  };
} typeLPTIM_CRBITS;
sfr volatile typeLPTIM_CRBITS LPTIM_CRbits absolute 0x40007C10;

 typedef struct tagLPTIM_CMPBITS {
  union {
    struct {
      unsigned CMP : 16;
      unsigned : 16;
    };
  };
} typeLPTIM_CMPBITS;
sfr volatile typeLPTIM_CMPBITS LPTIM_CMPbits absolute 0x40007C14;

 typedef struct tagLPTIM_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeLPTIM_ARRBITS;
sfr volatile typeLPTIM_ARRBITS LPTIM_ARRbits absolute 0x40007C18;

 typedef struct tagLPTIM_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
    };
  };
} typeLPTIM_CNTBITS;
sfr volatile typeLPTIM_CNTBITS LPTIM_CNTbits absolute 0x40007C1C;

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
      unsigned : 8;
    };
  };
} typeRTC_CRBITS;
sfr volatile typeRTC_CRBITS RTC_CRbits absolute 0x40002808;

 typedef struct tagRTC_ISRBITS {
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
      unsigned ALRAF : 1;
      unsigned ALRBF : 1;
      unsigned WUTF : 1;
      unsigned TSF : 1;
      unsigned TSOVF : 1;
      unsigned TAMP1F : 1;
      unsigned TAMP2F : 1;
      unsigned : 17;
    };
  };
} typeRTC_ISRBITS;
sfr volatile typeRTC_ISRBITS RTC_ISRbits absolute 0x4000280C;

 typedef struct tagRTC_PRERBITS {
  union {
    struct {
      unsigned PREDIV_S : 16;
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
sfr volatile typeRTC_ALRMBRBITS RTC_ALRMBRbits absolute 0x40002820;

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

 typedef struct tagRTC_TAMPCRBITS {
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
      unsigned TAMPPRCH : 2;
      unsigned TAMPPUDIS : 1;
      unsigned TAMP1IE : 1;
      unsigned TAMP1NOERASE : 1;
      unsigned TAMP1MF : 1;
      unsigned TAMP2IE : 1;
      unsigned TAMP2NOERASE : 1;
      unsigned TAMP2MF : 1;
      unsigned : 10;
    };
  };
} typeRTC_TAMPCRBITS;
sfr volatile typeRTC_TAMPCRBITS RTC_TAMPCRbits absolute 0x40002840;

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
sfr volatile typeRTC_ALRMBSSRBITS RTC_ALRMBSSRbits absolute 0x40002848;

 typedef struct tagRTC_ORBITS {
  union {
    struct {
      unsigned RTC_ALARM_TYPE : 1;
      unsigned RTC_OUT_RMP : 1;
      unsigned : 30;
    };
  };
} typeRTC_ORBITS;
sfr volatile typeRTC_ORBITS RTC_ORbits absolute 0x4000284C;

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
      unsigned DEDT0 : 1;
      unsigned DEDT1 : 1;
      unsigned DEDT2 : 1;
      unsigned DEDT3 : 1;
      unsigned DEDT4 : 1;
      unsigned DEAT0 : 1;
      unsigned DEAT1 : 1;
      unsigned DEAT2 : 1;
      unsigned DEAT3 : 1;
      unsigned DEAT4 : 1;
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
      unsigned TAINV : 1;
      unsigned MSBFIRST : 1;
      unsigned ABREN : 1;
      unsigned ABRMOD0 : 1;
      unsigned ABRMOD1 : 1;
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
      unsigned M0 : 1;
      unsigned MME : 1;
      unsigned CMIE : 1;
      unsigned OVER8 : 1;
      unsigned DEDT0 : 1;
      unsigned DEDT1 : 1;
      unsigned DEDT2 : 1;
      unsigned DEDT3 : 1;
      unsigned DEDT4 : 1;
      unsigned DEAT0 : 1;
      unsigned DEAT1 : 1;
      unsigned DEAT2 : 1;
      unsigned DEAT3 : 1;
      unsigned DEAT4 : 1;
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
      unsigned TAINV : 1;
      unsigned MSBFIRST : 1;
      unsigned ABREN : 1;
      unsigned ABRMOD0 : 1;
      unsigned ABRMOD1 : 1;
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

 typedef struct tagUSART4_CR1BITS {
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
      unsigned DEDT0 : 1;
      unsigned DEDT1 : 1;
      unsigned DEDT2 : 1;
      unsigned DEDT3 : 1;
      unsigned DEDT4 : 1;
      unsigned DEAT0 : 1;
      unsigned DEAT1 : 1;
      unsigned DEAT2 : 1;
      unsigned DEAT3 : 1;
      unsigned DEAT4 : 1;
      unsigned RTOIE : 1;
      unsigned EOBIE : 1;
      unsigned M1 : 1;
      unsigned : 3;
    };
  };
} typeUSART4_CR1BITS;
sfr volatile typeUSART4_CR1BITS USART4_CR1bits absolute 0x40004C00;

 typedef struct tagUSART4_CR2BITS {
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
      unsigned TAINV : 1;
      unsigned MSBFIRST : 1;
      unsigned ABREN : 1;
      unsigned ABRMOD0 : 1;
      unsigned ABRMOD1 : 1;
      unsigned RTOEN : 1;
      unsigned ADD0_3 : 4;
      unsigned ADD4_7 : 4;
    };
  };
} typeUSART4_CR2BITS;
sfr volatile typeUSART4_CR2BITS USART4_CR2bits absolute 0x40004C04;

 typedef struct tagUSART4_CR3BITS {
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
} typeUSART4_CR3BITS;
sfr volatile typeUSART4_CR3BITS USART4_CR3bits absolute 0x40004C08;

 typedef struct tagUSART4_BRRBITS {
  union {
    struct {
      unsigned DIV_Fraction : 4;
      unsigned DIV_Mantissa : 12;
      unsigned : 16;
    };
  };
} typeUSART4_BRRBITS;
sfr volatile typeUSART4_BRRBITS USART4_BRRbits absolute 0x40004C0C;

 typedef struct tagUSART4_GTPRBITS {
  union {
    struct {
      unsigned PSC : 8;
      unsigned GT : 8;
      unsigned : 16;
    };
  };
} typeUSART4_GTPRBITS;
sfr volatile typeUSART4_GTPRBITS USART4_GTPRbits absolute 0x40004C10;

 typedef struct tagUSART4_RTORBITS {
  union {
    struct {
      unsigned RTO : 24;
      unsigned BLEN : 8;
    };
  };
} typeUSART4_RTORBITS;
sfr volatile typeUSART4_RTORBITS USART4_RTORbits absolute 0x40004C14;

 typedef struct tagUSART4_RQRBITS {
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
} typeUSART4_RQRBITS;
sfr volatile typeUSART4_RQRBITS USART4_RQRbits absolute 0x40004C18;

 typedef struct tagUSART4_ISRBITS {
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
} typeUSART4_ISRBITS;
sfr volatile typeUSART4_ISRBITS USART4_ISRbits absolute 0x40004C1C;

 typedef struct tagUSART4_ICRBITS {
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
} typeUSART4_ICRBITS;
sfr volatile typeUSART4_ICRBITS USART4_ICRbits absolute 0x40004C20;

 typedef struct tagUSART4_RDRBITS {
  union {
    struct {
      unsigned RDR : 9;
      unsigned : 23;
    };
  };
} typeUSART4_RDRBITS;
sfr volatile typeUSART4_RDRBITS USART4_RDRbits absolute 0x40004C24;

 typedef struct tagUSART4_TDRBITS {
  union {
    struct {
      unsigned TDR : 9;
      unsigned : 23;
    };
  };
} typeUSART4_TDRBITS;
sfr volatile typeUSART4_TDRBITS USART4_TDRbits absolute 0x40004C28;

 typedef struct tagUSART5_CR1BITS {
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
      unsigned DEDT0 : 1;
      unsigned DEDT1 : 1;
      unsigned DEDT2 : 1;
      unsigned DEDT3 : 1;
      unsigned DEDT4 : 1;
      unsigned DEAT0 : 1;
      unsigned DEAT1 : 1;
      unsigned DEAT2 : 1;
      unsigned DEAT3 : 1;
      unsigned DEAT4 : 1;
      unsigned RTOIE : 1;
      unsigned EOBIE : 1;
      unsigned M1 : 1;
      unsigned : 3;
    };
  };
} typeUSART5_CR1BITS;
sfr volatile typeUSART5_CR1BITS USART5_CR1bits absolute 0x40005000;

 typedef struct tagUSART5_CR2BITS {
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
      unsigned TAINV : 1;
      unsigned MSBFIRST : 1;
      unsigned ABREN : 1;
      unsigned ABRMOD0 : 1;
      unsigned ABRMOD1 : 1;
      unsigned RTOEN : 1;
      unsigned ADD0_3 : 4;
      unsigned ADD4_7 : 4;
    };
  };
} typeUSART5_CR2BITS;
sfr volatile typeUSART5_CR2BITS USART5_CR2bits absolute 0x40005004;

 typedef struct tagUSART5_CR3BITS {
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
} typeUSART5_CR3BITS;
sfr volatile typeUSART5_CR3BITS USART5_CR3bits absolute 0x40005008;

 typedef struct tagUSART5_BRRBITS {
  union {
    struct {
      unsigned DIV_Fraction : 4;
      unsigned DIV_Mantissa : 12;
      unsigned : 16;
    };
  };
} typeUSART5_BRRBITS;
sfr volatile typeUSART5_BRRBITS USART5_BRRbits absolute 0x4000500C;

 typedef struct tagUSART5_GTPRBITS {
  union {
    struct {
      unsigned PSC : 8;
      unsigned GT : 8;
      unsigned : 16;
    };
  };
} typeUSART5_GTPRBITS;
sfr volatile typeUSART5_GTPRBITS USART5_GTPRbits absolute 0x40005010;

 typedef struct tagUSART5_RTORBITS {
  union {
    struct {
      unsigned RTO : 24;
      unsigned BLEN : 8;
    };
  };
} typeUSART5_RTORBITS;
sfr volatile typeUSART5_RTORBITS USART5_RTORbits absolute 0x40005014;

 typedef struct tagUSART5_RQRBITS {
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
} typeUSART5_RQRBITS;
sfr volatile typeUSART5_RQRBITS USART5_RQRbits absolute 0x40005018;

 typedef struct tagUSART5_ISRBITS {
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
} typeUSART5_ISRBITS;
sfr volatile typeUSART5_ISRBITS USART5_ISRbits absolute 0x4000501C;

 typedef struct tagUSART5_ICRBITS {
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
} typeUSART5_ICRBITS;
sfr volatile typeUSART5_ICRBITS USART5_ICRbits absolute 0x40005020;

 typedef struct tagUSART5_RDRBITS {
  union {
    struct {
      unsigned RDR : 9;
      unsigned : 23;
    };
  };
} typeUSART5_RDRBITS;
sfr volatile typeUSART5_RDRBITS USART5_RDRbits absolute 0x40005024;

 typedef struct tagUSART5_TDRBITS {
  union {
    struct {
      unsigned TDR : 9;
      unsigned : 23;
    };
  };
} typeUSART5_TDRBITS;
sfr volatile typeUSART5_TDRBITS USART5_TDRbits absolute 0x40005028;

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
      unsigned WDGTB0 : 1;
      unsigned WDGTB1 : 1;
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

 typedef struct tagFirewall_FIREWALL_CSSABITS {
  union {
    struct {
      unsigned : 8;
      unsigned ADD : 16;
      unsigned : 8;
    };
  };
} typeFirewall_FIREWALL_CSSABITS;
sfr volatile typeFirewall_FIREWALL_CSSABITS Firewall_FIREWALL_CSSAbits absolute 0x40011C00;

 typedef struct tagFirewall_FIREWALL_CSLBITS {
  union {
    struct {
      unsigned : 8;
      unsigned LENG : 14;
      unsigned : 10;
    };
  };
} typeFirewall_FIREWALL_CSLBITS;
sfr volatile typeFirewall_FIREWALL_CSLBITS Firewall_FIREWALL_CSLbits absolute 0x40011C04;

 typedef struct tagFirewall_FIREWALL_NVDSSABITS {
  union {
    struct {
      unsigned : 8;
      unsigned ADD : 16;
      unsigned : 8;
    };
  };
} typeFirewall_FIREWALL_NVDSSABITS;
sfr volatile typeFirewall_FIREWALL_NVDSSABITS Firewall_FIREWALL_NVDSSAbits absolute 0x40011C08;

 typedef struct tagFirewall_FIREWALL_NVDSLBITS {
  union {
    struct {
      unsigned : 8;
      unsigned LENG : 14;
      unsigned : 10;
    };
  };
} typeFirewall_FIREWALL_NVDSLBITS;
sfr volatile typeFirewall_FIREWALL_NVDSLBITS Firewall_FIREWALL_NVDSLbits absolute 0x40011C0C;

 typedef struct tagFirewall_FIREWALL_VDSSABITS {
  union {
    struct {
      unsigned : 6;
      unsigned ADD : 10;
      unsigned : 16;
    };
  };
} typeFirewall_FIREWALL_VDSSABITS;
sfr volatile typeFirewall_FIREWALL_VDSSABITS Firewall_FIREWALL_VDSSAbits absolute 0x40011C10;

 typedef struct tagFirewall_FIREWALL_VDSLBITS {
  union {
    struct {
      unsigned : 6;
      unsigned LENG : 10;
      unsigned : 16;
    };
  };
} typeFirewall_FIREWALL_VDSLBITS;
sfr volatile typeFirewall_FIREWALL_VDSLBITS Firewall_FIREWALL_VDSLbits absolute 0x40011C14;

 typedef struct tagFirewall_FIREWALL_CRBITS {
  union {
    struct {
      unsigned FPA : 1;
      unsigned VDS : 1;
      unsigned VDE : 1;
      unsigned : 29;
    };
  };
} typeFirewall_FIREWALL_CRBITS;
sfr volatile typeFirewall_FIREWALL_CRBITS Firewall_FIREWALL_CRbits absolute 0x40011C20;

 typedef struct tagRCC_CRBITS {
  union {
    struct {
      unsigned HSI16ON : 1;
      unsigned HSI16KERON : 1;
      unsigned HSI16RDYF : 1;
      unsigned HSI16DIVEN : 1;
      unsigned HSI16DIVF : 1;
      unsigned HSI16OUTEN : 1;
      unsigned : 2;
      unsigned MSION : 1;
      unsigned MSIRDY : 1;
      unsigned : 6;
      unsigned HSEON : 1;
      unsigned HSERDY : 1;
      unsigned HSEBYP : 1;
      unsigned CSSLSEON : 1;
      unsigned RTCPRE : 2;
      unsigned : 2;
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
      unsigned HSI16CAL : 8;
      unsigned HSI16TRIM : 5;
      unsigned MSIRANGE : 3;
      unsigned MSICAL : 8;
      unsigned MSITRIM : 8;
    };
  };
} typeRCC_ICSCRBITS;
sfr volatile typeRCC_ICSCRBITS RCC_ICSCRbits absolute 0x40021004;

 typedef struct tagRCC_CFGRBITS {
  union {
    struct {
      unsigned SW : 2;
      unsigned SWS : 2;
      unsigned HPRE : 4;
      unsigned PPRE1 : 3;
      unsigned PPRE2 : 3;
      unsigned : 1;
      unsigned STOPWUCK : 1;
      unsigned PLLSRC : 1;
      unsigned : 1;
      unsigned PLLMUL : 4;
      unsigned PLLDIV : 2;
      unsigned MCOSEL : 3;
      unsigned : 1;
      unsigned MCOPRE : 3;
      unsigned : 1;
    };
  };
} typeRCC_CFGRBITS;
sfr volatile typeRCC_CFGRBITS RCC_CFGRbits absolute 0x4002100C;

 typedef struct tagRCC_CIERBITS {
  union {
    struct {
      unsigned LSIRDYIE : 1;
      unsigned LSERDYIE : 1;
      unsigned HSI16RDYIE : 1;
      unsigned HSERDYIE : 1;
      unsigned PLLRDYIE : 1;
      unsigned MSIRDYIE : 1;
      unsigned : 1;
      unsigned CSSLSE : 1;
      unsigned : 24;
    };
  };
} typeRCC_CIERBITS;
sfr volatile typeRCC_CIERBITS RCC_CIERbits absolute 0x40021010;

 typedef struct tagRCC_CIFRBITS {
  union {
    struct {
      unsigned LSIRDYF : 1;
      unsigned LSERDYF : 1;
      unsigned HSI16RDYF : 1;
      unsigned HSERDYF : 1;
      unsigned PLLRDYF : 1;
      unsigned MSIRDYF : 1;
      unsigned : 1;
      unsigned CSSLSEF : 1;
      unsigned CSSHSEF : 1;
      unsigned : 23;
    };
  };
} typeRCC_CIFRBITS;
sfr volatile typeRCC_CIFRBITS RCC_CIFRbits absolute 0x40021014;

 typedef struct tagRCC_CICRBITS {
  union {
    struct {
      unsigned LSIRDYC : 1;
      unsigned LSERDYC : 1;
      unsigned HSI16RDYC : 1;
      unsigned HSERDYC : 1;
      unsigned PLLRDYC : 1;
      unsigned MSIRDYC : 1;
      unsigned : 1;
      unsigned CSSLSEC : 1;
      unsigned CSSHSEC : 1;
      unsigned : 23;
    };
  };
} typeRCC_CICRBITS;
sfr volatile typeRCC_CICRBITS RCC_CICRbits absolute 0x40021018;

 typedef struct tagRCC_IOPRSTRBITS {
  union {
    struct {
      unsigned IOPARST : 1;
      unsigned IOPBRST : 1;
      unsigned IOPCRST : 1;
      unsigned IOPDRST : 1;
      unsigned IOPERST : 1;
      unsigned : 2;
      unsigned IOPHRST : 1;
      unsigned : 24;
    };
  };
} typeRCC_IOPRSTRBITS;
sfr volatile typeRCC_IOPRSTRBITS RCC_IOPRSTRbits absolute 0x4002101C;

 typedef struct tagRCC_AHBRSTRBITS {
  union {
    struct {
      unsigned DMARST : 1;
      unsigned : 7;
      unsigned MIFRST : 1;
      unsigned : 3;
      unsigned CRCRST : 1;
      unsigned : 11;
      unsigned CRYPRST : 1;
      unsigned : 7;
    };
  };
} typeRCC_AHBRSTRBITS;
sfr volatile typeRCC_AHBRSTRBITS RCC_AHBRSTRbits absolute 0x40021020;

 typedef struct tagRCC_APB2RSTRBITS {
  union {
    struct {
      unsigned SYSCFGRST : 1;
      unsigned : 1;
      unsigned TIM21RST : 1;
      unsigned : 2;
      unsigned TIM22RST : 1;
      unsigned : 3;
      unsigned ADCRST : 1;
      unsigned : 2;
      unsigned SPI1RST : 1;
      unsigned : 1;
      unsigned USART1RST : 1;
      unsigned : 7;
      unsigned DBGRST : 1;
      unsigned : 9;
    };
  };
} typeRCC_APB2RSTRBITS;
sfr volatile typeRCC_APB2RSTRBITS RCC_APB2RSTRbits absolute 0x40021024;

 typedef struct tagRCC_APB1RSTRBITS {
  union {
    struct {
      unsigned TIM2RST : 1;
      unsigned TIM3RST : 1;
      unsigned : 2;
      unsigned TIM6RST : 1;
      unsigned TIM7RST : 1;
      unsigned : 5;
      unsigned WWDGRST : 1;
      unsigned : 2;
      unsigned SPI2RST : 1;
      unsigned : 2;
      unsigned USART2RST : 1;
      unsigned LPUART1RST : 1;
      unsigned USART4RST : 1;
      unsigned USART5RST : 1;
      unsigned I2C1RST : 1;
      unsigned I2C2RST : 1;
      unsigned : 4;
      unsigned CRCRST : 1;
      unsigned PWRRST : 1;
      unsigned : 1;
      unsigned I2C3 : 1;
      unsigned LPTIM1RST : 1;
    };
  };
} typeRCC_APB1RSTRBITS;
sfr volatile typeRCC_APB1RSTRBITS RCC_APB1RSTRbits absolute 0x40021028;

 typedef struct tagRCC_IOPENRBITS {
  union {
    struct {
      unsigned IOPAEN : 1;
      unsigned IOPBEN : 1;
      unsigned IOPCEN : 1;
      unsigned IOPDEN : 1;
      unsigned IOPEEN : 1;
      unsigned : 2;
      unsigned IOPHEN : 1;
      unsigned : 24;
    };
  };
} typeRCC_IOPENRBITS;
sfr volatile typeRCC_IOPENRBITS RCC_IOPENRbits absolute 0x4002102C;

 typedef struct tagRCC_AHBENRBITS {
  union {
    struct {
      unsigned DMAEN : 1;
      unsigned : 7;
      unsigned MIFEN : 1;
      unsigned : 3;
      unsigned CRCEN : 1;
      unsigned : 11;
      unsigned CRYPEN : 1;
      unsigned : 7;
    };
  };
} typeRCC_AHBENRBITS;
sfr volatile typeRCC_AHBENRBITS RCC_AHBENRbits absolute 0x40021030;

 typedef struct tagRCC_APB2ENRBITS {
  union {
    struct {
      unsigned SYSCFGEN : 1;
      unsigned : 1;
      unsigned TIM21EN : 1;
      unsigned : 2;
      unsigned TIM22EN : 1;
      unsigned : 1;
      unsigned FWEN : 1;
      unsigned : 1;
      unsigned ADCEN : 1;
      unsigned : 2;
      unsigned SPI1EN : 1;
      unsigned : 1;
      unsigned USART1EN : 1;
      unsigned : 7;
      unsigned DBGEN : 1;
      unsigned : 9;
    };
  };
} typeRCC_APB2ENRBITS;
sfr volatile typeRCC_APB2ENRBITS RCC_APB2ENRbits absolute 0x40021034;

 typedef struct tagRCC_APB1ENRBITS {
  union {
    struct {
      unsigned TIM2EN : 1;
      unsigned TIM3EN : 1;
      unsigned : 2;
      unsigned TIM6EN : 1;
      unsigned TIM7EN : 1;
      unsigned : 5;
      unsigned WWDGEN : 1;
      unsigned : 2;
      unsigned SPI2EN : 1;
      unsigned : 2;
      unsigned USART2EN : 1;
      unsigned LPUART1EN : 1;
      unsigned USART4EN : 1;
      unsigned USART5EN : 1;
      unsigned I2C1EN : 1;
      unsigned I2C2EN : 1;
      unsigned : 5;
      unsigned PWREN : 1;
      unsigned : 1;
      unsigned I2C3EN : 1;
      unsigned LPTIM1EN : 1;
    };
  };
} typeRCC_APB1ENRBITS;
sfr volatile typeRCC_APB1ENRBITS RCC_APB1ENRbits absolute 0x40021038;

 typedef struct tagRCC_IOPSMENBITS {
  union {
    struct {
      unsigned IOPASMEN : 1;
      unsigned IOPBSMEN : 1;
      unsigned IOPCSMEN : 1;
      unsigned IOPDSMEN : 1;
      unsigned IOPESMEN : 1;
      unsigned : 2;
      unsigned IOPHSMEN : 1;
      unsigned : 24;
    };
  };
} typeRCC_IOPSMENBITS;
sfr volatile typeRCC_IOPSMENBITS RCC_IOPSMENbits absolute 0x4002103C;

 typedef struct tagRCC_AHBSMENRBITS {
  union {
    struct {
      unsigned DMASMEN : 1;
      unsigned : 7;
      unsigned MIFSMEN : 1;
      unsigned SRAMSMEN : 1;
      unsigned : 2;
      unsigned CRCSMEN : 1;
      unsigned : 11;
      unsigned CRYPTSMEN : 1;
      unsigned : 7;
    };
  };
} typeRCC_AHBSMENRBITS;
sfr volatile typeRCC_AHBSMENRBITS RCC_AHBSMENRbits absolute 0x40021040;

 typedef struct tagRCC_APB2SMENRBITS {
  union {
    struct {
      unsigned SYSCFGSMEN : 1;
      unsigned : 1;
      unsigned TIM21SMEN : 1;
      unsigned : 2;
      unsigned TIM22SMEN : 1;
      unsigned : 3;
      unsigned ADCSMEN : 1;
      unsigned : 2;
      unsigned SPI1SMEN : 1;
      unsigned : 1;
      unsigned USART1SMEN : 1;
      unsigned : 7;
      unsigned DBGSMEN : 1;
      unsigned : 9;
    };
  };
} typeRCC_APB2SMENRBITS;
sfr volatile typeRCC_APB2SMENRBITS RCC_APB2SMENRbits absolute 0x40021044;

 typedef struct tagRCC_APB1SMENRBITS {
  union {
    struct {
      unsigned TIM2SMEN : 1;
      unsigned TIM3SMEN : 1;
      unsigned : 2;
      unsigned TIM6SMEN : 1;
      unsigned TIM7SMEN : 1;
      unsigned : 5;
      unsigned WWDGSMEN : 1;
      unsigned : 2;
      unsigned SPI2SMEN : 1;
      unsigned : 2;
      unsigned USART2SMEN : 1;
      unsigned LPUART1SMEN : 1;
      unsigned USART4SMEN : 1;
      unsigned USART5SMEN : 1;
      unsigned I2C1SMEN : 1;
      unsigned I2C2SMEN : 1;
      unsigned : 4;
      unsigned CRSSMEN : 1;
      unsigned PWRSMEN : 1;
      unsigned : 1;
      unsigned I2C3SMEN : 1;
      unsigned LPTIM1SMEN : 1;
    };
  };
} typeRCC_APB1SMENRBITS;
sfr volatile typeRCC_APB1SMENRBITS RCC_APB1SMENRbits absolute 0x40021048;

 typedef struct tagRCC_CCIPRBITS {
  union {
    struct {
      unsigned USART1SEL0 : 1;
      unsigned USART1SEL1 : 1;
      unsigned USART2SEL0 : 1;
      unsigned USART2SEL1 : 1;
      unsigned : 6;
      unsigned LPUART1SEL0 : 1;
      unsigned LPUART1SEL1 : 1;
      unsigned I2C1SEL0 : 1;
      unsigned I2C1SEL1 : 1;
      unsigned : 2;
      unsigned I2C3SEL0 : 1;
      unsigned I2C3SEL1 : 1;
      unsigned LPTIM1SEL0 : 1;
      unsigned LPTIM1SEL1 : 1;
      unsigned : 12;
    };
  };
} typeRCC_CCIPRBITS;
sfr volatile typeRCC_CCIPRBITS RCC_CCIPRbits absolute 0x4002104C;

 typedef struct tagRCC_CSRBITS {
  union {
    struct {
      unsigned LSION : 1;
      unsigned LSIRDY : 1;
      unsigned LSIIWDGLP : 1;
      unsigned : 5;
      unsigned LSEON : 1;
      unsigned LSERDY : 1;
      unsigned LSEBYP : 1;
      unsigned LSEDRV : 2;
      unsigned CSSLSEON : 1;
      unsigned CSSLSED : 1;
      unsigned : 1;
      unsigned RTCSEL : 2;
      unsigned RTCEN : 1;
      unsigned RTCRST : 1;
      unsigned : 3;
      unsigned RMVF : 1;
      unsigned FWRSTF : 1;
      unsigned OBLRSTF : 1;
      unsigned PINRSTF : 1;
      unsigned PORRSTF : 1;
      unsigned SFTRSTF : 1;
      unsigned IWDGRSTF : 1;
      unsigned WWDGRSTF : 1;
      unsigned LPWRSTF : 1;
    };
  };
} typeRCC_CSRBITS;
sfr volatile typeRCC_CSRBITS RCC_CSRbits absolute 0x40021050;

 typedef struct tagSYSCFG_CFGR1BITS {
  union {
    struct {
      unsigned MEM_MODE : 2;
      unsigned : 6;
      unsigned BOOT_MODE : 2;
      unsigned : 22;
    };
  };
} typeSYSCFG_CFGR1BITS;
sfr volatile typeSYSCFG_CFGR1BITS SYSCFG_CFGR1bits absolute 0x40010000;

 typedef struct tagSYSCFG_CFGR2BITS {
  union {
    struct {
      unsigned FWDISEN : 1;
      unsigned CAPA : 3;
      unsigned : 4;
      unsigned I2C_PB6_FMP : 1;
      unsigned I2C_PB7_FMP : 1;
      unsigned I2C_PB8_FMP : 1;
      unsigned I2C_PB9_FMP : 1;
      unsigned I2C1_FMP : 1;
      unsigned I2C2_FMP : 1;
      unsigned : 18;
    };
  };
} typeSYSCFG_CFGR2BITS;
sfr volatile typeSYSCFG_CFGR2BITS SYSCFG_CFGR2bits absolute 0x40010004;

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

 typedef struct tagSYSCFG_CFGR3BITS {
  union {
    struct {
      unsigned EN_BGAP : 1;
      unsigned : 3;
      unsigned SEL_VREF_OUT : 2;
      unsigned : 2;
      unsigned ENBUF_BGAP_ADC : 1;
      unsigned ENBUF_SENSOR_ADC : 1;
      unsigned : 2;
      unsigned ENBUF_VREFINT_COMP : 1;
      unsigned ENREF_RC48MHz : 1;
      unsigned : 12;
      unsigned REF_RC48MHz_RDYF : 1;
      unsigned SENSOR_ADC_RDYF : 1;
      unsigned VREFINT_ADC_RDYF : 1;
      unsigned VREFINT_COMP_RDYF : 1;
      unsigned VREFINT_RDYF : 1;
      unsigned REF_LOCK : 1;
    };
  };
} typeSYSCFG_CFGR3BITS;
sfr volatile typeSYSCFG_CFGR3BITS SYSCFG_CFGR3bits absolute 0x40010020;

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
      unsigned : 1;
      unsigned FRF : 1;
      unsigned ERRIE : 1;
      unsigned RXNEIE : 1;
      unsigned TXEIE : 1;
      unsigned : 24;
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
      unsigned : 23;
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
      unsigned : 1;
      unsigned FRF : 1;
      unsigned ERRIE : 1;
      unsigned RXNEIE : 1;
      unsigned TXEIE : 1;
      unsigned : 24;
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
      unsigned : 23;
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
      unsigned OA1 : 10;
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
      unsigned OA1 : 10;
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

 typedef struct tagI2C3_CR1BITS {
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
} typeI2C3_CR1BITS;
sfr volatile typeI2C3_CR1BITS I2C3_CR1bits absolute 0x40007800;

 typedef struct tagI2C3_CR2BITS {
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
} typeI2C3_CR2BITS;
sfr volatile typeI2C3_CR2BITS I2C3_CR2bits absolute 0x40007804;

 typedef struct tagI2C3_OAR1BITS {
  union {
    struct {
      unsigned OA1 : 10;
      unsigned OA1MODE : 1;
      unsigned : 4;
      unsigned OA1EN : 1;
      unsigned : 16;
    };
  };
} typeI2C3_OAR1BITS;
sfr volatile typeI2C3_OAR1BITS I2C3_OAR1bits absolute 0x40007808;

 typedef struct tagI2C3_OAR2BITS {
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
} typeI2C3_OAR2BITS;
sfr volatile typeI2C3_OAR2BITS I2C3_OAR2bits absolute 0x4000780C;

 typedef struct tagI2C3_TIMINGRBITS {
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
} typeI2C3_TIMINGRBITS;
sfr volatile typeI2C3_TIMINGRBITS I2C3_TIMINGRbits absolute 0x40007810;

 typedef struct tagI2C3_TIMEOUTRBITS {
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
} typeI2C3_TIMEOUTRBITS;
sfr volatile typeI2C3_TIMEOUTRBITS I2C3_TIMEOUTRbits absolute 0x40007814;

 typedef struct tagI2C3_ISRBITS {
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
} typeI2C3_ISRBITS;
sfr volatile typeI2C3_ISRBITS I2C3_ISRbits absolute 0x40007818;

 typedef struct tagI2C3_ICRBITS {
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
} typeI2C3_ICRBITS;
sfr volatile typeI2C3_ICRBITS I2C3_ICRbits absolute 0x4000781C;

 typedef struct tagI2C3_PECRBITS {
  union {
    struct {
      unsigned PEC : 8;
      unsigned : 24;
    };
  };
} typeI2C3_PECRBITS;
sfr volatile typeI2C3_PECRBITS I2C3_PECRbits absolute 0x40007820;

 typedef struct tagI2C3_RXDRBITS {
  union {
    struct {
      unsigned RXDATA : 8;
      unsigned : 24;
    };
  };
} typeI2C3_RXDRBITS;
sfr volatile typeI2C3_RXDRBITS I2C3_RXDRbits absolute 0x40007824;

 typedef struct tagI2C3_TXDRBITS {
  union {
    struct {
      unsigned TXDATA : 8;
      unsigned : 24;
    };
  };
} typeI2C3_TXDRBITS;
sfr volatile typeI2C3_TXDRBITS I2C3_TXDRbits absolute 0x40007828;

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
      unsigned ULP : 1;
      unsigned FWU : 1;
      unsigned VOS : 2;
      unsigned DS_EE_KOFF : 1;
      unsigned LPRUN : 1;
      unsigned : 17;
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
      unsigned VOSF : 1;
      unsigned REGLPF : 1;
      unsigned : 2;
      unsigned EWUP : 1;
      unsigned BRE : 1;
      unsigned : 22;
    };
  };
} typePWR_CSRBITS;
sfr volatile typePWR_CSRBITS PWR_CSRbits absolute 0x40007004;

 typedef struct tagFLASH_ACRBITS {
  union {
    struct {
      unsigned LATENCY : 1;
      unsigned PRFTEN : 1;
      unsigned : 1;
      unsigned SLEEP_PD : 1;
      unsigned RUN_PD : 1;
      unsigned DESAB_BUF : 1;
      unsigned PRE_READ : 1;
      unsigned : 25;
    };
  };
} typeFLASH_ACRBITS;
sfr volatile typeFLASH_ACRBITS FLASH_ACRbits absolute 0x40022000;

 typedef struct tagFLASH_PECRBITS {
  union {
    struct {
      unsigned PELOCK : 1;
      unsigned PRGLOCK : 1;
      unsigned OPTLOCK : 1;
      unsigned PROG : 1;
      unsigned DATA_ : 1;
      unsigned : 3;
      unsigned FTDW : 1;
      unsigned ERASE_ : 1;
      unsigned FPRG : 1;
      unsigned : 4;
      unsigned PARALLELBANK : 1;
      unsigned EOPIE : 1;
      unsigned ERRIE : 1;
      unsigned OBL_LAUNCH : 1;
      unsigned : 13;
    };
  };
} typeFLASH_PECRBITS;
sfr volatile typeFLASH_PECRBITS FLASH_PECRbits absolute 0x40022004;

 typedef struct tagFLASH_PDKEYRBITS {
  union {
    struct {
      unsigned PDKEYR : 32;
    };
  };
} typeFLASH_PDKEYRBITS;
sfr volatile typeFLASH_PDKEYRBITS FLASH_PDKEYRbits absolute 0x40022008;

 typedef struct tagFLASH_PEKEYRBITS {
  union {
    struct {
      unsigned PEKEYR : 32;
    };
  };
} typeFLASH_PEKEYRBITS;
sfr volatile typeFLASH_PEKEYRBITS FLASH_PEKEYRbits absolute 0x4002200C;

 typedef struct tagFLASH_PRGKEYRBITS {
  union {
    struct {
      unsigned PRGKEYR : 32;
    };
  };
} typeFLASH_PRGKEYRBITS;
sfr volatile typeFLASH_PRGKEYRBITS FLASH_PRGKEYRbits absolute 0x40022010;

 typedef struct tagFLASH_OPTKEYRBITS {
  union {
    struct {
      unsigned OPTKEYR : 32;
    };
  };
} typeFLASH_OPTKEYRBITS;
sfr volatile typeFLASH_OPTKEYRBITS FLASH_OPTKEYRbits absolute 0x40022014;

 typedef struct tagFLASH_SRBITS {
  union {
    struct {
      unsigned BSY : 1;
      unsigned EOP : 1;
      unsigned ENDHV : 1;
      unsigned READY : 1;
      unsigned : 4;
      unsigned WRPERR : 1;
      unsigned PGAERR : 1;
      unsigned SIZERR : 1;
      unsigned OPTVERR : 1;
      unsigned : 2;
      unsigned RDERR : 1;
      unsigned : 1;
      unsigned NOTZEROERR : 1;
      unsigned FWWERR : 1;
      unsigned : 14;
    };
  };
} typeFLASH_SRBITS;
sfr volatile typeFLASH_SRBITS FLASH_SRbits absolute 0x40022018;

 typedef struct tagFLASH_OBRBITS {
  union {
    struct {
      unsigned RDPRT : 8;
      unsigned SPRMOD : 1;
      unsigned : 7;
      unsigned BOR_LEV : 4;
      unsigned : 12;
    };
  };
} typeFLASH_OBRBITS;
sfr volatile typeFLASH_OBRBITS FLASH_OBRbits absolute 0x4002201C;

 typedef struct tagFLASH_WRPRBITS {
  union {
    struct {
      unsigned WRP : 16;
      unsigned : 16;
    };
  };
} typeFLASH_WRPRBITS;
sfr volatile typeFLASH_WRPRBITS FLASH_WRPRbits absolute 0x40022020;

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
      unsigned : 1;
      unsigned MR19 : 1;
      unsigned : 1;
      unsigned MR21 : 1;
      unsigned MR22 : 1;
      unsigned MR23 : 1;
      unsigned : 1;
      unsigned MR25 : 1;
      unsigned : 1;
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
      unsigned : 1;
      unsigned MR19 : 1;
      unsigned : 1;
      unsigned MR21 : 1;
      unsigned MR22 : 1;
      unsigned MR23 : 1;
      unsigned : 1;
      unsigned MR25 : 1;
      unsigned : 1;
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
      unsigned : 3;
      unsigned EOCAL : 1;
      unsigned : 20;
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
      unsigned : 3;
      unsigned EOCALIE : 1;
      unsigned : 20;
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
      unsigned OVSE : 1;
      unsigned : 1;
      unsigned OVSR : 3;
      unsigned OVSS : 4;
      unsigned TOVS : 1;
      unsigned : 20;
      unsigned CKMODE : 2;
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
      unsigned VLCDEN : 1;
      unsigned LFMEN : 1;
      unsigned : 6;
    };
  };
} typeADC_CCRBITS;
sfr volatile typeADC_CCRBITS ADC_CCRbits absolute 0x40012708;

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
      unsigned DBG_SLEEP : 1;
      unsigned DBG_STOP : 1;
      unsigned DBG_STANDBY : 1;
      unsigned : 29;
    };
  };
} typeDBG_CRBITS;
sfr volatile typeDBG_CRBITS DBG_CRbits absolute 0x40015804;

 typedef struct tagDBG_APB1_FZBITS {
  union {
    struct {
      unsigned DBG_TIMER2_STOP : 1;
      unsigned : 3;
      unsigned DBG_TIMER6_STOP : 1;
      unsigned : 5;
      unsigned DBG_RTC_STOP : 1;
      unsigned DBG_WWDG_STOP : 1;
      unsigned DBG_IWDG_STOP : 1;
      unsigned : 8;
      unsigned DBG_I2C1_STOP : 1;
      unsigned DBG_I2C2_STOP : 1;
      unsigned : 8;
      unsigned DBG_LPTIMER_STOP : 1;
    };
  };
} typeDBG_APB1_FZBITS;
sfr volatile typeDBG_APB1_FZBITS DBG_APB1_FZbits absolute 0x40015808;

 typedef struct tagDBG_APB2_FZBITS {
  union {
    struct {
      unsigned : 2;
      unsigned DBG_TIMER21_STOP : 1;
      unsigned : 3;
      unsigned DBG_TIMER22_STO : 1;
      unsigned : 25;
    };
  };
} typeDBG_APB2_FZBITS;
sfr volatile typeDBG_APB2_FZBITS DBG_APB2_FZbits absolute 0x4001580C;

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
      unsigned DMAB : 16;
      unsigned : 16;
    };
  };
} typeTIM2_DMARBITS;
sfr volatile typeTIM2_DMARBITS TIM2_DMARbits absolute 0x4000004C;

 typedef struct tagTIM2_ORBITS {
  union {
    struct {
      unsigned ETR_RMP : 3;
      unsigned TI4_RMP : 2;
      unsigned : 27;
    };
  };
} typeTIM2_ORBITS;
sfr volatile typeTIM2_ORBITS TIM2_ORbits absolute 0x40000050;

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
      unsigned DMAB : 16;
      unsigned : 16;
    };
  };
} typeTIM3_DMARBITS;
sfr volatile typeTIM3_DMARBITS TIM3_DMARbits absolute 0x4000044C;

 typedef struct tagTIM3_ORBITS {
  union {
    struct {
      unsigned ETR_RMP : 3;
      unsigned TI4_RMP : 2;
      unsigned : 27;
    };
  };
} typeTIM3_ORBITS;
sfr volatile typeTIM3_ORBITS TIM3_ORbits absolute 0x40000450;

 typedef struct tagTIM6_CR1BITS {
  union {
    struct {
      unsigned CEN : 1;
      unsigned UDIS : 1;
      unsigned URS : 1;
      unsigned OPM : 1;
      unsigned : 3;
      unsigned ARPE : 1;
      unsigned : 24;
    };
  };
} typeTIM6_CR1BITS;
sfr volatile typeTIM6_CR1BITS TIM6_CR1bits absolute 0x40001000;

 typedef struct tagTIM6_CR2BITS {
  union {
    struct {
      unsigned : 4;
      unsigned MMS : 3;
      unsigned : 25;
    };
  };
} typeTIM6_CR2BITS;
sfr volatile typeTIM6_CR2BITS TIM6_CR2bits absolute 0x40001004;

 typedef struct tagTIM6_DIERBITS {
  union {
    struct {
      unsigned UIE : 1;
      unsigned : 7;
      unsigned UDE : 1;
      unsigned : 23;
    };
  };
} typeTIM6_DIERBITS;
sfr volatile typeTIM6_DIERBITS TIM6_DIERbits absolute 0x4000100C;

 typedef struct tagTIM6_SRBITS {
  union {
    struct {
      unsigned UIF : 1;
      unsigned : 31;
    };
  };
} typeTIM6_SRBITS;
sfr volatile typeTIM6_SRBITS TIM6_SRbits absolute 0x40001010;

 typedef struct tagTIM6_EGRBITS {
  union {
    struct {
      unsigned UG : 1;
      unsigned : 31;
    };
  };
} typeTIM6_EGRBITS;
sfr volatile typeTIM6_EGRBITS TIM6_EGRbits absolute 0x40001014;

 typedef struct tagTIM6_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
    };
  };
} typeTIM6_CNTBITS;
sfr volatile typeTIM6_CNTBITS TIM6_CNTbits absolute 0x40001024;

 typedef struct tagTIM6_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM6_PSCBITS;
sfr volatile typeTIM6_PSCBITS TIM6_PSCbits absolute 0x40001028;

 typedef struct tagTIM6_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM6_ARRBITS;
sfr volatile typeTIM6_ARRBITS TIM6_ARRbits absolute 0x4000102C;

 typedef struct tagTIM7_CR1BITS {
  union {
    struct {
      unsigned CEN : 1;
      unsigned UDIS : 1;
      unsigned URS : 1;
      unsigned OPM : 1;
      unsigned : 3;
      unsigned ARPE : 1;
      unsigned : 24;
    };
  };
} typeTIM7_CR1BITS;
sfr volatile typeTIM7_CR1BITS TIM7_CR1bits absolute 0x40000C00;

 typedef struct tagTIM7_CR2BITS {
  union {
    struct {
      unsigned : 4;
      unsigned MMS : 3;
      unsigned : 25;
    };
  };
} typeTIM7_CR2BITS;
sfr volatile typeTIM7_CR2BITS TIM7_CR2bits absolute 0x40000C04;

 typedef struct tagTIM7_DIERBITS {
  union {
    struct {
      unsigned UIE : 1;
      unsigned : 7;
      unsigned UDE : 1;
      unsigned : 23;
    };
  };
} typeTIM7_DIERBITS;
sfr volatile typeTIM7_DIERBITS TIM7_DIERbits absolute 0x40000C0C;

 typedef struct tagTIM7_SRBITS {
  union {
    struct {
      unsigned UIF : 1;
      unsigned : 31;
    };
  };
} typeTIM7_SRBITS;
sfr volatile typeTIM7_SRBITS TIM7_SRbits absolute 0x40000C10;

 typedef struct tagTIM7_EGRBITS {
  union {
    struct {
      unsigned UG : 1;
      unsigned : 31;
    };
  };
} typeTIM7_EGRBITS;
sfr volatile typeTIM7_EGRBITS TIM7_EGRbits absolute 0x40000C14;

 typedef struct tagTIM7_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
    };
  };
} typeTIM7_CNTBITS;
sfr volatile typeTIM7_CNTBITS TIM7_CNTbits absolute 0x40000C24;

 typedef struct tagTIM7_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM7_PSCBITS;
sfr volatile typeTIM7_PSCBITS TIM7_PSCbits absolute 0x40000C28;

 typedef struct tagTIM7_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM7_ARRBITS;
sfr volatile typeTIM7_ARRBITS TIM7_ARRbits absolute 0x40000C2C;

 typedef struct tagTIM21_CR1BITS {
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
} typeTIM21_CR1BITS;
sfr volatile typeTIM21_CR1BITS TIM21_CR1bits absolute 0x40010800;

 typedef struct tagTIM21_CR2BITS {
  union {
    struct {
      unsigned : 4;
      unsigned MMS : 3;
      unsigned : 25;
    };
  };
} typeTIM21_CR2BITS;
sfr volatile typeTIM21_CR2BITS TIM21_CR2bits absolute 0x40010804;

 typedef struct tagTIM21_SMCRBITS {
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
} typeTIM21_SMCRBITS;
sfr volatile typeTIM21_SMCRBITS TIM21_SMCRbits absolute 0x40010808;

 typedef struct tagTIM21_DIERBITS {
  union {
    struct {
      unsigned UIE : 1;
      unsigned CC1IE : 1;
      unsigned CC2IE : 1;
      unsigned : 3;
      unsigned TIE : 1;
      unsigned : 25;
    };
  };
} typeTIM21_DIERBITS;
sfr volatile typeTIM21_DIERBITS TIM21_DIERbits absolute 0x4001080C;

 typedef struct tagTIM21_SRBITS {
  union {
    struct {
      unsigned UIF : 1;
      unsigned CC1IF : 1;
      unsigned CC2IF : 1;
      unsigned : 3;
      unsigned TIF : 1;
      unsigned : 2;
      unsigned CC1OF : 1;
      unsigned CC2OF : 1;
      unsigned : 21;
    };
  };
} typeTIM21_SRBITS;
sfr volatile typeTIM21_SRBITS TIM21_SRbits absolute 0x40010810;

 typedef struct tagTIM21_EGRBITS {
  union {
    struct {
      unsigned UG : 1;
      unsigned CC1G : 1;
      unsigned CC2G : 1;
      unsigned : 3;
      unsigned TG : 1;
      unsigned : 25;
    };
  };
} typeTIM21_EGRBITS;
sfr volatile typeTIM21_EGRBITS TIM21_EGRbits absolute 0x40010814;

 typedef struct tagTIM21_CCMR1_OutputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned OC1FE : 1;
      unsigned OC1PE : 1;
      unsigned OC1M : 3;
      unsigned : 1;
      unsigned CC2S : 2;
      unsigned OC2FE : 1;
      unsigned OC2PE : 1;
      unsigned OC2M : 3;
      unsigned : 17;
    };
  };
} typeTIM21_CCMR1_OutputBITS;
sfr volatile typeTIM21_CCMR1_OutputBITS TIM21_CCMR1_Outputbits absolute 0x40010818;

 typedef struct tagTIM21_CCMR1_InputBITS {
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
} typeTIM21_CCMR1_InputBITS;
sfr volatile typeTIM21_CCMR1_InputBITS TIM21_CCMR1_Inputbits absolute 0x40010818;

 typedef struct tagTIM21_CCERBITS {
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
      unsigned : 24;
    };
  };
} typeTIM21_CCERBITS;
sfr volatile typeTIM21_CCERBITS TIM21_CCERbits absolute 0x40010820;

 typedef struct tagTIM21_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
    };
  };
} typeTIM21_CNTBITS;
sfr volatile typeTIM21_CNTBITS TIM21_CNTbits absolute 0x40010824;

 typedef struct tagTIM21_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM21_PSCBITS;
sfr volatile typeTIM21_PSCBITS TIM21_PSCbits absolute 0x40010828;

 typedef struct tagTIM21_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM21_ARRBITS;
sfr volatile typeTIM21_ARRBITS TIM21_ARRbits absolute 0x4001082C;

 typedef struct tagTIM21_CCR1BITS {
  union {
    struct {
      unsigned CCR1 : 16;
      unsigned : 16;
    };
  };
} typeTIM21_CCR1BITS;
sfr volatile typeTIM21_CCR1BITS TIM21_CCR1bits absolute 0x40010834;

 typedef struct tagTIM21_CCR2BITS {
  union {
    struct {
      unsigned CCR2 : 16;
      unsigned : 16;
    };
  };
} typeTIM21_CCR2BITS;
sfr volatile typeTIM21_CCR2BITS TIM21_CCR2bits absolute 0x40010838;

 typedef struct tagTIM21_ORBITS {
  union {
    struct {
      unsigned ETR_RMP : 2;
      unsigned TI1_RMP : 3;
      unsigned TI2_RMP : 1;
      unsigned : 26;
    };
  };
} typeTIM21_ORBITS;
sfr volatile typeTIM21_ORBITS TIM21_ORbits absolute 0x40010850;

 typedef struct tagTIM22_CR1BITS {
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
} typeTIM22_CR1BITS;
sfr volatile typeTIM22_CR1BITS TIM22_CR1bits absolute 0x40011400;

 typedef struct tagTIM22_CR2BITS {
  union {
    struct {
      unsigned : 4;
      unsigned MMS : 3;
      unsigned : 25;
    };
  };
} typeTIM22_CR2BITS;
sfr volatile typeTIM22_CR2BITS TIM22_CR2bits absolute 0x40011404;

 typedef struct tagTIM22_SMCRBITS {
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
} typeTIM22_SMCRBITS;
sfr volatile typeTIM22_SMCRBITS TIM22_SMCRbits absolute 0x40011408;

 typedef struct tagTIM22_DIERBITS {
  union {
    struct {
      unsigned UIE : 1;
      unsigned CC1IE : 1;
      unsigned CC2IE : 1;
      unsigned : 3;
      unsigned TIE : 1;
      unsigned : 25;
    };
  };
} typeTIM22_DIERBITS;
sfr volatile typeTIM22_DIERBITS TIM22_DIERbits absolute 0x4001140C;

 typedef struct tagTIM22_SRBITS {
  union {
    struct {
      unsigned UIF : 1;
      unsigned CC1IF : 1;
      unsigned CC2IF : 1;
      unsigned : 3;
      unsigned TIF : 1;
      unsigned : 2;
      unsigned CC1OF : 1;
      unsigned CC2OF : 1;
      unsigned : 21;
    };
  };
} typeTIM22_SRBITS;
sfr volatile typeTIM22_SRBITS TIM22_SRbits absolute 0x40011410;

 typedef struct tagTIM22_EGRBITS {
  union {
    struct {
      unsigned UG : 1;
      unsigned CC1G : 1;
      unsigned CC2G : 1;
      unsigned : 3;
      unsigned TG : 1;
      unsigned : 25;
    };
  };
} typeTIM22_EGRBITS;
sfr volatile typeTIM22_EGRBITS TIM22_EGRbits absolute 0x40011414;

 typedef struct tagTIM22_CCMR1_OutputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned OC1FE : 1;
      unsigned OC1PE : 1;
      unsigned OC1M : 3;
      unsigned : 1;
      unsigned CC2S : 2;
      unsigned OC2FE : 1;
      unsigned OC2PE : 1;
      unsigned OC2M : 3;
      unsigned : 17;
    };
  };
} typeTIM22_CCMR1_OutputBITS;
sfr volatile typeTIM22_CCMR1_OutputBITS TIM22_CCMR1_Outputbits absolute 0x40011418;

 typedef struct tagTIM22_CCMR1_InputBITS {
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
} typeTIM22_CCMR1_InputBITS;
sfr volatile typeTIM22_CCMR1_InputBITS TIM22_CCMR1_Inputbits absolute 0x40011418;

 typedef struct tagTIM22_CCERBITS {
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
      unsigned : 24;
    };
  };
} typeTIM22_CCERBITS;
sfr volatile typeTIM22_CCERBITS TIM22_CCERbits absolute 0x40011420;

 typedef struct tagTIM22_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
    };
  };
} typeTIM22_CNTBITS;
sfr volatile typeTIM22_CNTBITS TIM22_CNTbits absolute 0x40011424;

 typedef struct tagTIM22_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM22_PSCBITS;
sfr volatile typeTIM22_PSCBITS TIM22_PSCbits absolute 0x40011428;

 typedef struct tagTIM22_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM22_ARRBITS;
sfr volatile typeTIM22_ARRBITS TIM22_ARRbits absolute 0x4001142C;

 typedef struct tagTIM22_CCR1BITS {
  union {
    struct {
      unsigned CCR1 : 16;
      unsigned : 16;
    };
  };
} typeTIM22_CCR1BITS;
sfr volatile typeTIM22_CCR1BITS TIM22_CCR1bits absolute 0x40011434;

 typedef struct tagTIM22_CCR2BITS {
  union {
    struct {
      unsigned CCR2 : 16;
      unsigned : 16;
    };
  };
} typeTIM22_CCR2BITS;
sfr volatile typeTIM22_CCR2BITS TIM22_CCR2bits absolute 0x40011438;

 typedef struct tagTIM22_ORBITS {
  union {
    struct {
      unsigned ETR_RMP : 2;
      unsigned TI1_RMP : 2;
      unsigned : 28;
    };
  };
} typeTIM22_ORBITS;
sfr volatile typeTIM22_ORBITS TIM22_ORbits absolute 0x40011450;

 typedef struct tagLPUART1_CR1BITS {
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
      unsigned DEDT0 : 1;
      unsigned DEDT1 : 1;
      unsigned DEDT2 : 1;
      unsigned DEDT3 : 1;
      unsigned DEDT4 : 1;
      unsigned DEAT0 : 1;
      unsigned DEAT1 : 1;
      unsigned DEAT2 : 1;
      unsigned DEAT3 : 1;
      unsigned DEAT4 : 1;
      unsigned : 2;
      unsigned M1 : 1;
      unsigned : 3;
    };
  };
} typeLPUART1_CR1BITS;
sfr volatile typeLPUART1_CR1BITS LPUART1_CR1bits absolute 0x40004800;

 typedef struct tagLPUART1_CR2BITS {
  union {
    struct {
      unsigned : 4;
      unsigned ADDM7 : 1;
      unsigned : 6;
      unsigned CLKEN : 1;
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
} typeLPUART1_CR2BITS;
sfr volatile typeLPUART1_CR2BITS LPUART1_CR2bits absolute 0x40004804;

 typedef struct tagLPUART1_CR3BITS {
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
      unsigned : 9;
    };
  };
} typeLPUART1_CR3BITS;
sfr volatile typeLPUART1_CR3BITS LPUART1_CR3bits absolute 0x40004808;

 typedef struct tagLPUART1_BRRBITS {
  union {
    struct {
      unsigned BRR : 20;
      unsigned : 12;
    };
  };
} typeLPUART1_BRRBITS;
sfr volatile typeLPUART1_BRRBITS LPUART1_BRRbits absolute 0x4000480C;

 typedef struct tagLPUART1_RQRBITS {
  union {
    struct {
      unsigned : 1;
      unsigned SBKRQ : 1;
      unsigned MMRQ : 1;
      unsigned RXFRQ : 1;
      unsigned : 28;
    };
  };
} typeLPUART1_RQRBITS;
sfr volatile typeLPUART1_RQRBITS LPUART1_RQRbits absolute 0x40004818;

 typedef struct tagLPUART1_ISRBITS {
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
      unsigned : 9;
    };
  };
} typeLPUART1_ISRBITS;
sfr volatile typeLPUART1_ISRBITS LPUART1_ISRbits absolute 0x4000481C;

 typedef struct tagLPUART1_ICRBITS {
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
} typeLPUART1_ICRBITS;
sfr volatile typeLPUART1_ICRBITS LPUART1_ICRbits absolute 0x40004820;

 typedef struct tagLPUART1_RDRBITS {
  union {
    struct {
      unsigned RDR : 9;
      unsigned : 23;
    };
  };
} typeLPUART1_RDRBITS;
sfr volatile typeLPUART1_RDRBITS LPUART1_RDRbits absolute 0x40004824;

 typedef struct tagLPUART1_TDRBITS {
  union {
    struct {
      unsigned TDR : 9;
      unsigned : 23;
    };
  };
} typeLPUART1_TDRBITS;
sfr volatile typeLPUART1_TDRBITS LPUART1_TDRbits absolute 0x40004828;

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
      unsigned USENONBASETHRDENARSETMPEND : 1;
      unsigned USERSETMPEND : 1;
      unsigned : 1;
      unsigned UNALIGN_TRP : 1;
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
      unsigned PRI_4 : 8;
      unsigned PRI_5 : 8;
      unsigned PRI_6 : 8;
      unsigned : 8;
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
