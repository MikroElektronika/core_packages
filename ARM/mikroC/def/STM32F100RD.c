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

const unsigned long __FLASH_SIZE = 0x00060000;
const unsigned long _FLASH_ERASE = 2048;
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
const IVT_INT_TAMPER_STAMP       = 18;
const IVT_INT_RTC_WKUP           = 19;
const IVT_INT_FLASH              = 20;
const IVT_INT_RCC                = 21;
const IVT_INT_EXTI0              = 22;
const IVT_INT_EXTI1              = 23;
const IVT_INT_EXTI2              = 24;
const IVT_INT_EXTI3              = 25;
const IVT_INT_EXTI4              = 26;
const IVT_INT_DMA1_Channel1      = 27;
const IVT_INT_DMA1_Channel2      = 28;
const IVT_INT_DMA1_Channel3      = 29;
const IVT_INT_DMA1_Channel4      = 30;
const IVT_INT_DMA1_Channel5      = 31;
const IVT_INT_DMA1_Channel6      = 32;
const IVT_INT_DMA1_Channel7      = 33;
const IVT_INT_ADC1               = 34;
const IVT_INT_RESERVED6          = 35;
const IVT_INT_RESERVED7          = 36;
const IVT_INT_RESERVED8          = 37;
const IVT_INT_RESERVED9          = 38;
const IVT_INT_EXTI9_5            = 39;
const IVT_INT_TIM1_BRK_TIM15     = 40;
const IVT_INT_TIM1_UP_TIM16      = 41;
const IVT_INT_TIM1_TRG_COM_TIM17 = 42;
const IVT_INT_TIM1_CC            = 43;
const IVT_INT_TIM2               = 44;
const IVT_INT_TIM3               = 45;
const IVT_INT_TIM4               = 46;
const IVT_INT_I2C1_EV            = 47;
const IVT_INT_I2C1_ER            = 48;
const IVT_INT_I2C2_EV            = 49;
const IVT_INT_I2C2_ER            = 50;
const IVT_INT_SPI1               = 51;
const IVT_INT_SPI2               = 52;
const IVT_INT_USART1             = 53;
const IVT_INT_USART2             = 54;
const IVT_INT_USART3             = 55;
const IVT_INT_EXTI15_10          = 56;
const IVT_INT_RTC_Alarm          = 57;
const IVT_INT_CEC                = 58;
const IVT_INT_TIM12              = 59;
const IVT_INT_TIM13              = 60;
const IVT_INT_TIM14              = 61;
const IVT_INT_RESERVED10         = 62;
const IVT_INT_RESERVED11         = 63;
const IVT_INT_FSMC               = 64;
const IVT_INT_RESERVED12         = 65;
const IVT_INT_TIM5               = 66;
const IVT_INT_SPI3               = 67;
const IVT_INT_UART4              = 68;
const IVT_INT_UART5              = 69;
const IVT_INT_TIM6_DAC           = 70;
const IVT_INT_TIM7               = 71;
const IVT_INT_DMA2_Channel1      = 72;
const IVT_INT_DMA2_Channel2      = 73;
const IVT_INT_DMA2_Channel3      = 74;
const IVT_INT_DMA2_Channel4_5    = 75;
const IVT_INT_DMA2_Channel5      = 76;


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
sfr far unsigned long   volatile FSMC_BCR1            absolute 0xA0000000;
    const register unsigned short int CBURSTRW = 19;
    sbit  CBURSTRW_bit at FSMC_BCR1.B19;
    const register unsigned short int ASYNCWAIT = 15;
    sbit  ASYNCWAIT_bit at FSMC_BCR1.B15;
    const register unsigned short int EXTMOD = 14;
    sbit  EXTMOD_bit at FSMC_BCR1.B14;
    const register unsigned short int WAITEN = 13;
    sbit  WAITEN_bit at FSMC_BCR1.B13;
    const register unsigned short int WREN = 12;
    sbit  WREN_bit at FSMC_BCR1.B12;
    const register unsigned short int WAITCFG = 11;
    sbit  WAITCFG_bit at FSMC_BCR1.B11;
    const register unsigned short int WAITPOL = 9;
    sbit  WAITPOL_bit at FSMC_BCR1.B9;
    const register unsigned short int BURSTEN = 8;
    sbit  BURSTEN_bit at FSMC_BCR1.B8;
    const register unsigned short int FACCEN = 6;
    sbit  FACCEN_bit at FSMC_BCR1.B6;
    const register unsigned short int MWID0 = 4;
    sbit  MWID0_bit at FSMC_BCR1.B4;
    const register unsigned short int MWID1 = 5;
    sbit  MWID1_bit at FSMC_BCR1.B5;
    const register unsigned short int MTYP0 = 2;
    sbit  MTYP0_bit at FSMC_BCR1.B2;
    const register unsigned short int MTYP1 = 3;
    sbit  MTYP1_bit at FSMC_BCR1.B3;
    const register unsigned short int MUXEN = 1;
    sbit  MUXEN_bit at FSMC_BCR1.B1;
    const register unsigned short int MBKEN = 0;
    sbit  MBKEN_bit at FSMC_BCR1.B0;

sfr far unsigned long   volatile FSMC_BTR1            absolute 0xA0000004;
    const register unsigned short int ACCMOD0 = 28;
    sbit  ACCMOD0_bit at FSMC_BTR1.B28;
    const register unsigned short int ACCMOD1 = 29;
    sbit  ACCMOD1_bit at FSMC_BTR1.B29;
    const register unsigned short int DATLAT0 = 24;
    sbit  DATLAT0_bit at FSMC_BTR1.B24;
    const register unsigned short int DATLAT1 = 25;
    sbit  DATLAT1_bit at FSMC_BTR1.B25;
    const register unsigned short int DATLAT2 = 26;
    sbit  DATLAT2_bit at FSMC_BTR1.B26;
    const register unsigned short int DATLAT3 = 27;
    sbit  DATLAT3_bit at FSMC_BTR1.B27;
    const register unsigned short int CLKDIV0 = 20;
    sbit  CLKDIV0_bit at FSMC_BTR1.B20;
    const register unsigned short int CLKDIV1 = 21;
    sbit  CLKDIV1_bit at FSMC_BTR1.B21;
    const register unsigned short int CLKDIV2 = 22;
    sbit  CLKDIV2_bit at FSMC_BTR1.B22;
    const register unsigned short int CLKDIV3 = 23;
    sbit  CLKDIV3_bit at FSMC_BTR1.B23;
    const register unsigned short int BUSTURN0 = 16;
    sbit  BUSTURN0_bit at FSMC_BTR1.B16;
    const register unsigned short int BUSTURN1 = 17;
    sbit  BUSTURN1_bit at FSMC_BTR1.B17;
    const register unsigned short int BUSTURN2 = 18;
    sbit  BUSTURN2_bit at FSMC_BTR1.B18;
    const register unsigned short int BUSTURN3 = 19;
    sbit  BUSTURN3_bit at FSMC_BTR1.B19;
    const register unsigned short int DATAST0 = 8;
    sbit  DATAST0_bit at FSMC_BTR1.B8;
    const register unsigned short int DATAST1 = 9;
    sbit  DATAST1_bit at FSMC_BTR1.B9;
    const register unsigned short int DATAST2 = 10;
    sbit  DATAST2_bit at FSMC_BTR1.B10;
    const register unsigned short int DATAST3 = 11;
    sbit  DATAST3_bit at FSMC_BTR1.B11;
    const register unsigned short int DATAST4 = 12;
    sbit  DATAST4_bit at FSMC_BTR1.B12;
    const register unsigned short int DATAST5 = 13;
    sbit  DATAST5_bit at FSMC_BTR1.B13;
    const register unsigned short int DATAST6 = 14;
    sbit  DATAST6_bit at FSMC_BTR1.B14;
    const register unsigned short int DATAST7 = 15;
    sbit  DATAST7_bit at FSMC_BTR1.B15;
    const register unsigned short int ADDHLD0 = 4;
    sbit  ADDHLD0_bit at FSMC_BTR1.B4;
    const register unsigned short int ADDHLD1 = 5;
    sbit  ADDHLD1_bit at FSMC_BTR1.B5;
    const register unsigned short int ADDHLD2 = 6;
    sbit  ADDHLD2_bit at FSMC_BTR1.B6;
    const register unsigned short int ADDHLD3 = 7;
    sbit  ADDHLD3_bit at FSMC_BTR1.B7;
    const register unsigned short int ADDSET0 = 0;
    sbit  ADDSET0_bit at FSMC_BTR1.B0;
    const register unsigned short int ADDSET1 = 1;
    sbit  ADDSET1_bit at FSMC_BTR1.B1;
    const register unsigned short int ADDSET2 = 2;
    sbit  ADDSET2_bit at FSMC_BTR1.B2;
    const register unsigned short int ADDSET3 = 3;
    sbit  ADDSET3_bit at FSMC_BTR1.B3;

sfr far unsigned long   volatile FSMC_BCR2            absolute 0xA0000008;
    sbit  CBURSTRW_FSMC_BCR2_bit at FSMC_BCR2.B19;
    sbit  ASYNCWAIT_FSMC_BCR2_bit at FSMC_BCR2.B15;
    sbit  EXTMOD_FSMC_BCR2_bit at FSMC_BCR2.B14;
    sbit  WAITEN_FSMC_BCR2_bit at FSMC_BCR2.B13;
    sbit  WREN_FSMC_BCR2_bit at FSMC_BCR2.B12;
    sbit  WAITCFG_FSMC_BCR2_bit at FSMC_BCR2.B11;
    const register unsigned short int WRAPMOD = 10;
    sbit  WRAPMOD_bit at FSMC_BCR2.B10;
    sbit  WAITPOL_FSMC_BCR2_bit at FSMC_BCR2.B9;
    sbit  BURSTEN_FSMC_BCR2_bit at FSMC_BCR2.B8;
    sbit  FACCEN_FSMC_BCR2_bit at FSMC_BCR2.B6;
    sbit  MWID0_FSMC_BCR2_bit at FSMC_BCR2.B4;
    sbit  MWID1_FSMC_BCR2_bit at FSMC_BCR2.B5;
    sbit  MTYP0_FSMC_BCR2_bit at FSMC_BCR2.B2;
    sbit  MTYP1_FSMC_BCR2_bit at FSMC_BCR2.B3;
    sbit  MUXEN_FSMC_BCR2_bit at FSMC_BCR2.B1;
    sbit  MBKEN_FSMC_BCR2_bit at FSMC_BCR2.B0;

sfr far unsigned long   volatile FSMC_BTR2            absolute 0xA000000C;
    sbit  ACCMOD0_FSMC_BTR2_bit at FSMC_BTR2.B28;
    sbit  ACCMOD1_FSMC_BTR2_bit at FSMC_BTR2.B29;
    sbit  DATLAT0_FSMC_BTR2_bit at FSMC_BTR2.B24;
    sbit  DATLAT1_FSMC_BTR2_bit at FSMC_BTR2.B25;
    sbit  DATLAT2_FSMC_BTR2_bit at FSMC_BTR2.B26;
    sbit  DATLAT3_FSMC_BTR2_bit at FSMC_BTR2.B27;
    sbit  CLKDIV0_FSMC_BTR2_bit at FSMC_BTR2.B20;
    sbit  CLKDIV1_FSMC_BTR2_bit at FSMC_BTR2.B21;
    sbit  CLKDIV2_FSMC_BTR2_bit at FSMC_BTR2.B22;
    sbit  CLKDIV3_FSMC_BTR2_bit at FSMC_BTR2.B23;
    sbit  BUSTURN0_FSMC_BTR2_bit at FSMC_BTR2.B16;
    sbit  BUSTURN1_FSMC_BTR2_bit at FSMC_BTR2.B17;
    sbit  BUSTURN2_FSMC_BTR2_bit at FSMC_BTR2.B18;
    sbit  BUSTURN3_FSMC_BTR2_bit at FSMC_BTR2.B19;
    sbit  DATAST0_FSMC_BTR2_bit at FSMC_BTR2.B8;
    sbit  DATAST1_FSMC_BTR2_bit at FSMC_BTR2.B9;
    sbit  DATAST2_FSMC_BTR2_bit at FSMC_BTR2.B10;
    sbit  DATAST3_FSMC_BTR2_bit at FSMC_BTR2.B11;
    sbit  DATAST4_FSMC_BTR2_bit at FSMC_BTR2.B12;
    sbit  DATAST5_FSMC_BTR2_bit at FSMC_BTR2.B13;
    sbit  DATAST6_FSMC_BTR2_bit at FSMC_BTR2.B14;
    sbit  DATAST7_FSMC_BTR2_bit at FSMC_BTR2.B15;
    sbit  ADDHLD0_FSMC_BTR2_bit at FSMC_BTR2.B4;
    sbit  ADDHLD1_FSMC_BTR2_bit at FSMC_BTR2.B5;
    sbit  ADDHLD2_FSMC_BTR2_bit at FSMC_BTR2.B6;
    sbit  ADDHLD3_FSMC_BTR2_bit at FSMC_BTR2.B7;
    sbit  ADDSET0_FSMC_BTR2_bit at FSMC_BTR2.B0;
    sbit  ADDSET1_FSMC_BTR2_bit at FSMC_BTR2.B1;
    sbit  ADDSET2_FSMC_BTR2_bit at FSMC_BTR2.B2;
    sbit  ADDSET3_FSMC_BTR2_bit at FSMC_BTR2.B3;

sfr far unsigned long   volatile FSMC_BCR3            absolute 0xA0000010;
    sbit  CBURSTRW_FSMC_BCR3_bit at FSMC_BCR3.B19;
    sbit  ASYNCWAIT_FSMC_BCR3_bit at FSMC_BCR3.B15;
    sbit  EXTMOD_FSMC_BCR3_bit at FSMC_BCR3.B14;
    sbit  WAITEN_FSMC_BCR3_bit at FSMC_BCR3.B13;
    sbit  WREN_FSMC_BCR3_bit at FSMC_BCR3.B12;
    sbit  WAITCFG_FSMC_BCR3_bit at FSMC_BCR3.B11;
    sbit  WRAPMOD_FSMC_BCR3_bit at FSMC_BCR3.B10;
    sbit  WAITPOL_FSMC_BCR3_bit at FSMC_BCR3.B9;
    sbit  BURSTEN_FSMC_BCR3_bit at FSMC_BCR3.B8;
    sbit  FACCEN_FSMC_BCR3_bit at FSMC_BCR3.B6;
    sbit  MWID0_FSMC_BCR3_bit at FSMC_BCR3.B4;
    sbit  MWID1_FSMC_BCR3_bit at FSMC_BCR3.B5;
    sbit  MTYP0_FSMC_BCR3_bit at FSMC_BCR3.B2;
    sbit  MTYP1_FSMC_BCR3_bit at FSMC_BCR3.B3;
    sbit  MUXEN_FSMC_BCR3_bit at FSMC_BCR3.B1;
    sbit  MBKEN_FSMC_BCR3_bit at FSMC_BCR3.B0;

sfr far unsigned long   volatile FSMC_BTR3            absolute 0xA0000014;
    sbit  ACCMOD0_FSMC_BTR3_bit at FSMC_BTR3.B28;
    sbit  ACCMOD1_FSMC_BTR3_bit at FSMC_BTR3.B29;
    sbit  DATLAT0_FSMC_BTR3_bit at FSMC_BTR3.B24;
    sbit  DATLAT1_FSMC_BTR3_bit at FSMC_BTR3.B25;
    sbit  DATLAT2_FSMC_BTR3_bit at FSMC_BTR3.B26;
    sbit  DATLAT3_FSMC_BTR3_bit at FSMC_BTR3.B27;
    sbit  CLKDIV0_FSMC_BTR3_bit at FSMC_BTR3.B20;
    sbit  CLKDIV1_FSMC_BTR3_bit at FSMC_BTR3.B21;
    sbit  CLKDIV2_FSMC_BTR3_bit at FSMC_BTR3.B22;
    sbit  CLKDIV3_FSMC_BTR3_bit at FSMC_BTR3.B23;
    sbit  BUSTURN0_FSMC_BTR3_bit at FSMC_BTR3.B16;
    sbit  BUSTURN1_FSMC_BTR3_bit at FSMC_BTR3.B17;
    sbit  BUSTURN2_FSMC_BTR3_bit at FSMC_BTR3.B18;
    sbit  BUSTURN3_FSMC_BTR3_bit at FSMC_BTR3.B19;
    sbit  DATAST0_FSMC_BTR3_bit at FSMC_BTR3.B8;
    sbit  DATAST1_FSMC_BTR3_bit at FSMC_BTR3.B9;
    sbit  DATAST2_FSMC_BTR3_bit at FSMC_BTR3.B10;
    sbit  DATAST3_FSMC_BTR3_bit at FSMC_BTR3.B11;
    sbit  DATAST4_FSMC_BTR3_bit at FSMC_BTR3.B12;
    sbit  DATAST5_FSMC_BTR3_bit at FSMC_BTR3.B13;
    sbit  DATAST6_FSMC_BTR3_bit at FSMC_BTR3.B14;
    sbit  DATAST7_FSMC_BTR3_bit at FSMC_BTR3.B15;
    sbit  ADDHLD0_FSMC_BTR3_bit at FSMC_BTR3.B4;
    sbit  ADDHLD1_FSMC_BTR3_bit at FSMC_BTR3.B5;
    sbit  ADDHLD2_FSMC_BTR3_bit at FSMC_BTR3.B6;
    sbit  ADDHLD3_FSMC_BTR3_bit at FSMC_BTR3.B7;
    sbit  ADDSET0_FSMC_BTR3_bit at FSMC_BTR3.B0;
    sbit  ADDSET1_FSMC_BTR3_bit at FSMC_BTR3.B1;
    sbit  ADDSET2_FSMC_BTR3_bit at FSMC_BTR3.B2;
    sbit  ADDSET3_FSMC_BTR3_bit at FSMC_BTR3.B3;

sfr far unsigned long   volatile FSMC_BCR4            absolute 0xA0000018;
    sbit  CBURSTRW_FSMC_BCR4_bit at FSMC_BCR4.B19;
    sbit  ASYNCWAIT_FSMC_BCR4_bit at FSMC_BCR4.B15;
    sbit  EXTMOD_FSMC_BCR4_bit at FSMC_BCR4.B14;
    sbit  WAITEN_FSMC_BCR4_bit at FSMC_BCR4.B13;
    sbit  WREN_FSMC_BCR4_bit at FSMC_BCR4.B12;
    sbit  WAITCFG_FSMC_BCR4_bit at FSMC_BCR4.B11;
    sbit  WRAPMOD_FSMC_BCR4_bit at FSMC_BCR4.B10;
    sbit  WAITPOL_FSMC_BCR4_bit at FSMC_BCR4.B9;
    sbit  BURSTEN_FSMC_BCR4_bit at FSMC_BCR4.B8;
    sbit  FACCEN_FSMC_BCR4_bit at FSMC_BCR4.B6;
    sbit  MWID0_FSMC_BCR4_bit at FSMC_BCR4.B4;
    sbit  MWID1_FSMC_BCR4_bit at FSMC_BCR4.B5;
    sbit  MTYP0_FSMC_BCR4_bit at FSMC_BCR4.B2;
    sbit  MTYP1_FSMC_BCR4_bit at FSMC_BCR4.B3;
    sbit  MUXEN_FSMC_BCR4_bit at FSMC_BCR4.B1;
    sbit  MBKEN_FSMC_BCR4_bit at FSMC_BCR4.B0;

sfr far unsigned long   volatile FSMC_BTR4            absolute 0xA000001C;
    sbit  ACCMOD0_FSMC_BTR4_bit at FSMC_BTR4.B28;
    sbit  ACCMOD1_FSMC_BTR4_bit at FSMC_BTR4.B29;
    sbit  DATLAT0_FSMC_BTR4_bit at FSMC_BTR4.B24;
    sbit  DATLAT1_FSMC_BTR4_bit at FSMC_BTR4.B25;
    sbit  DATLAT2_FSMC_BTR4_bit at FSMC_BTR4.B26;
    sbit  DATLAT3_FSMC_BTR4_bit at FSMC_BTR4.B27;
    sbit  CLKDIV0_FSMC_BTR4_bit at FSMC_BTR4.B20;
    sbit  CLKDIV1_FSMC_BTR4_bit at FSMC_BTR4.B21;
    sbit  CLKDIV2_FSMC_BTR4_bit at FSMC_BTR4.B22;
    sbit  CLKDIV3_FSMC_BTR4_bit at FSMC_BTR4.B23;
    sbit  BUSTURN0_FSMC_BTR4_bit at FSMC_BTR4.B16;
    sbit  BUSTURN1_FSMC_BTR4_bit at FSMC_BTR4.B17;
    sbit  BUSTURN2_FSMC_BTR4_bit at FSMC_BTR4.B18;
    sbit  BUSTURN3_FSMC_BTR4_bit at FSMC_BTR4.B19;
    sbit  DATAST0_FSMC_BTR4_bit at FSMC_BTR4.B8;
    sbit  DATAST1_FSMC_BTR4_bit at FSMC_BTR4.B9;
    sbit  DATAST2_FSMC_BTR4_bit at FSMC_BTR4.B10;
    sbit  DATAST3_FSMC_BTR4_bit at FSMC_BTR4.B11;
    sbit  DATAST4_FSMC_BTR4_bit at FSMC_BTR4.B12;
    sbit  DATAST5_FSMC_BTR4_bit at FSMC_BTR4.B13;
    sbit  DATAST6_FSMC_BTR4_bit at FSMC_BTR4.B14;
    sbit  DATAST7_FSMC_BTR4_bit at FSMC_BTR4.B15;
    sbit  ADDHLD0_FSMC_BTR4_bit at FSMC_BTR4.B4;
    sbit  ADDHLD1_FSMC_BTR4_bit at FSMC_BTR4.B5;
    sbit  ADDHLD2_FSMC_BTR4_bit at FSMC_BTR4.B6;
    sbit  ADDHLD3_FSMC_BTR4_bit at FSMC_BTR4.B7;
    sbit  ADDSET0_FSMC_BTR4_bit at FSMC_BTR4.B0;
    sbit  ADDSET1_FSMC_BTR4_bit at FSMC_BTR4.B1;
    sbit  ADDSET2_FSMC_BTR4_bit at FSMC_BTR4.B2;
    sbit  ADDSET3_FSMC_BTR4_bit at FSMC_BTR4.B3;

sfr far unsigned long   volatile FSMC_BWTR1           absolute 0xA0000104;
    sbit  ACCMOD0_FSMC_BWTR1_bit at FSMC_BWTR1.B28;
    sbit  ACCMOD1_FSMC_BWTR1_bit at FSMC_BWTR1.B29;
    sbit  DATLAT0_FSMC_BWTR1_bit at FSMC_BWTR1.B24;
    sbit  DATLAT1_FSMC_BWTR1_bit at FSMC_BWTR1.B25;
    sbit  DATLAT2_FSMC_BWTR1_bit at FSMC_BWTR1.B26;
    sbit  DATLAT3_FSMC_BWTR1_bit at FSMC_BWTR1.B27;
    sbit  CLKDIV0_FSMC_BWTR1_bit at FSMC_BWTR1.B20;
    sbit  CLKDIV1_FSMC_BWTR1_bit at FSMC_BWTR1.B21;
    sbit  CLKDIV2_FSMC_BWTR1_bit at FSMC_BWTR1.B22;
    sbit  CLKDIV3_FSMC_BWTR1_bit at FSMC_BWTR1.B23;
    sbit  DATAST0_FSMC_BWTR1_bit at FSMC_BWTR1.B8;
    sbit  DATAST1_FSMC_BWTR1_bit at FSMC_BWTR1.B9;
    sbit  DATAST2_FSMC_BWTR1_bit at FSMC_BWTR1.B10;
    sbit  DATAST3_FSMC_BWTR1_bit at FSMC_BWTR1.B11;
    sbit  DATAST4_FSMC_BWTR1_bit at FSMC_BWTR1.B12;
    sbit  DATAST5_FSMC_BWTR1_bit at FSMC_BWTR1.B13;
    sbit  DATAST6_FSMC_BWTR1_bit at FSMC_BWTR1.B14;
    sbit  DATAST7_FSMC_BWTR1_bit at FSMC_BWTR1.B15;
    sbit  ADDHLD0_FSMC_BWTR1_bit at FSMC_BWTR1.B4;
    sbit  ADDHLD1_FSMC_BWTR1_bit at FSMC_BWTR1.B5;
    sbit  ADDHLD2_FSMC_BWTR1_bit at FSMC_BWTR1.B6;
    sbit  ADDHLD3_FSMC_BWTR1_bit at FSMC_BWTR1.B7;
    sbit  ADDSET0_FSMC_BWTR1_bit at FSMC_BWTR1.B0;
    sbit  ADDSET1_FSMC_BWTR1_bit at FSMC_BWTR1.B1;
    sbit  ADDSET2_FSMC_BWTR1_bit at FSMC_BWTR1.B2;
    sbit  ADDSET3_FSMC_BWTR1_bit at FSMC_BWTR1.B3;

sfr far unsigned long   volatile FSMC_BWTR2           absolute 0xA000010C;
    sbit  ACCMOD0_FSMC_BWTR2_bit at FSMC_BWTR2.B28;
    sbit  ACCMOD1_FSMC_BWTR2_bit at FSMC_BWTR2.B29;
    sbit  DATLAT0_FSMC_BWTR2_bit at FSMC_BWTR2.B24;
    sbit  DATLAT1_FSMC_BWTR2_bit at FSMC_BWTR2.B25;
    sbit  DATLAT2_FSMC_BWTR2_bit at FSMC_BWTR2.B26;
    sbit  DATLAT3_FSMC_BWTR2_bit at FSMC_BWTR2.B27;
    sbit  CLKDIV0_FSMC_BWTR2_bit at FSMC_BWTR2.B20;
    sbit  CLKDIV1_FSMC_BWTR2_bit at FSMC_BWTR2.B21;
    sbit  CLKDIV2_FSMC_BWTR2_bit at FSMC_BWTR2.B22;
    sbit  CLKDIV3_FSMC_BWTR2_bit at FSMC_BWTR2.B23;
    sbit  DATAST0_FSMC_BWTR2_bit at FSMC_BWTR2.B8;
    sbit  DATAST1_FSMC_BWTR2_bit at FSMC_BWTR2.B9;
    sbit  DATAST2_FSMC_BWTR2_bit at FSMC_BWTR2.B10;
    sbit  DATAST3_FSMC_BWTR2_bit at FSMC_BWTR2.B11;
    sbit  DATAST4_FSMC_BWTR2_bit at FSMC_BWTR2.B12;
    sbit  DATAST5_FSMC_BWTR2_bit at FSMC_BWTR2.B13;
    sbit  DATAST6_FSMC_BWTR2_bit at FSMC_BWTR2.B14;
    sbit  DATAST7_FSMC_BWTR2_bit at FSMC_BWTR2.B15;
    sbit  ADDHLD0_FSMC_BWTR2_bit at FSMC_BWTR2.B4;
    sbit  ADDHLD1_FSMC_BWTR2_bit at FSMC_BWTR2.B5;
    sbit  ADDHLD2_FSMC_BWTR2_bit at FSMC_BWTR2.B6;
    sbit  ADDHLD3_FSMC_BWTR2_bit at FSMC_BWTR2.B7;
    sbit  ADDSET0_FSMC_BWTR2_bit at FSMC_BWTR2.B0;
    sbit  ADDSET1_FSMC_BWTR2_bit at FSMC_BWTR2.B1;
    sbit  ADDSET2_FSMC_BWTR2_bit at FSMC_BWTR2.B2;
    sbit  ADDSET3_FSMC_BWTR2_bit at FSMC_BWTR2.B3;

sfr far unsigned long   volatile FSMC_BWTR3           absolute 0xA0000114;
    sbit  ACCMOD0_FSMC_BWTR3_bit at FSMC_BWTR3.B28;
    sbit  ACCMOD1_FSMC_BWTR3_bit at FSMC_BWTR3.B29;
    sbit  DATLAT0_FSMC_BWTR3_bit at FSMC_BWTR3.B24;
    sbit  DATLAT1_FSMC_BWTR3_bit at FSMC_BWTR3.B25;
    sbit  DATLAT2_FSMC_BWTR3_bit at FSMC_BWTR3.B26;
    sbit  DATLAT3_FSMC_BWTR3_bit at FSMC_BWTR3.B27;
    sbit  CLKDIV0_FSMC_BWTR3_bit at FSMC_BWTR3.B20;
    sbit  CLKDIV1_FSMC_BWTR3_bit at FSMC_BWTR3.B21;
    sbit  CLKDIV2_FSMC_BWTR3_bit at FSMC_BWTR3.B22;
    sbit  CLKDIV3_FSMC_BWTR3_bit at FSMC_BWTR3.B23;
    sbit  DATAST0_FSMC_BWTR3_bit at FSMC_BWTR3.B8;
    sbit  DATAST1_FSMC_BWTR3_bit at FSMC_BWTR3.B9;
    sbit  DATAST2_FSMC_BWTR3_bit at FSMC_BWTR3.B10;
    sbit  DATAST3_FSMC_BWTR3_bit at FSMC_BWTR3.B11;
    sbit  DATAST4_FSMC_BWTR3_bit at FSMC_BWTR3.B12;
    sbit  DATAST5_FSMC_BWTR3_bit at FSMC_BWTR3.B13;
    sbit  DATAST6_FSMC_BWTR3_bit at FSMC_BWTR3.B14;
    sbit  DATAST7_FSMC_BWTR3_bit at FSMC_BWTR3.B15;
    sbit  ADDHLD0_FSMC_BWTR3_bit at FSMC_BWTR3.B4;
    sbit  ADDHLD1_FSMC_BWTR3_bit at FSMC_BWTR3.B5;
    sbit  ADDHLD2_FSMC_BWTR3_bit at FSMC_BWTR3.B6;
    sbit  ADDHLD3_FSMC_BWTR3_bit at FSMC_BWTR3.B7;
    sbit  ADDSET0_FSMC_BWTR3_bit at FSMC_BWTR3.B0;
    sbit  ADDSET1_FSMC_BWTR3_bit at FSMC_BWTR3.B1;
    sbit  ADDSET2_FSMC_BWTR3_bit at FSMC_BWTR3.B2;
    sbit  ADDSET3_FSMC_BWTR3_bit at FSMC_BWTR3.B3;

sfr far unsigned long   volatile FSMC_BWTR4           absolute 0xA000011C;
    sbit  ACCMOD0_FSMC_BWTR4_bit at FSMC_BWTR4.B28;
    sbit  ACCMOD1_FSMC_BWTR4_bit at FSMC_BWTR4.B29;
    sbit  DATLAT0_FSMC_BWTR4_bit at FSMC_BWTR4.B24;
    sbit  DATLAT1_FSMC_BWTR4_bit at FSMC_BWTR4.B25;
    sbit  DATLAT2_FSMC_BWTR4_bit at FSMC_BWTR4.B26;
    sbit  DATLAT3_FSMC_BWTR4_bit at FSMC_BWTR4.B27;
    sbit  CLKDIV0_FSMC_BWTR4_bit at FSMC_BWTR4.B20;
    sbit  CLKDIV1_FSMC_BWTR4_bit at FSMC_BWTR4.B21;
    sbit  CLKDIV2_FSMC_BWTR4_bit at FSMC_BWTR4.B22;
    sbit  CLKDIV3_FSMC_BWTR4_bit at FSMC_BWTR4.B23;
    sbit  DATAST0_FSMC_BWTR4_bit at FSMC_BWTR4.B8;
    sbit  DATAST1_FSMC_BWTR4_bit at FSMC_BWTR4.B9;
    sbit  DATAST2_FSMC_BWTR4_bit at FSMC_BWTR4.B10;
    sbit  DATAST3_FSMC_BWTR4_bit at FSMC_BWTR4.B11;
    sbit  DATAST4_FSMC_BWTR4_bit at FSMC_BWTR4.B12;
    sbit  DATAST5_FSMC_BWTR4_bit at FSMC_BWTR4.B13;
    sbit  DATAST6_FSMC_BWTR4_bit at FSMC_BWTR4.B14;
    sbit  DATAST7_FSMC_BWTR4_bit at FSMC_BWTR4.B15;
    sbit  ADDHLD0_FSMC_BWTR4_bit at FSMC_BWTR4.B4;
    sbit  ADDHLD1_FSMC_BWTR4_bit at FSMC_BWTR4.B5;
    sbit  ADDHLD2_FSMC_BWTR4_bit at FSMC_BWTR4.B6;
    sbit  ADDHLD3_FSMC_BWTR4_bit at FSMC_BWTR4.B7;
    sbit  ADDSET0_FSMC_BWTR4_bit at FSMC_BWTR4.B0;
    sbit  ADDSET1_FSMC_BWTR4_bit at FSMC_BWTR4.B1;
    sbit  ADDSET2_FSMC_BWTR4_bit at FSMC_BWTR4.B2;
    sbit  ADDSET3_FSMC_BWTR4_bit at FSMC_BWTR4.B3;

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

sfr unsigned long   volatile PWR_CSR              absolute 0x40007004;
    const register unsigned short int WUF = 0;
    sbit  WUF_bit at PWR_CSR.B0;
    const register unsigned short int SBF = 1;
    sbit  SBF_bit at PWR_CSR.B1;
    const register unsigned short int PVDO = 2;
    sbit  PVDO_bit at PWR_CSR.B2;
    const register unsigned short int EWUP = 8;
    sbit  EWUP_bit at PWR_CSR.B8;

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
    const register unsigned short int PPRE10 = 8;
    sbit  PPRE10_bit at RCC_CFGR.B8;
    const register unsigned short int PPRE11 = 9;
    sbit  PPRE11_bit at RCC_CFGR.B9;
    const register unsigned short int PPRE12 = 10;
    sbit  PPRE12_bit at RCC_CFGR.B10;
    const register unsigned short int PPRE20 = 11;
    sbit  PPRE20_bit at RCC_CFGR.B11;
    const register unsigned short int PPRE21 = 12;
    sbit  PPRE21_bit at RCC_CFGR.B12;
    const register unsigned short int PPRE22 = 13;
    sbit  PPRE22_bit at RCC_CFGR.B13;
    const register unsigned short int ADCPRE0 = 14;
    sbit  ADCPRE0_bit at RCC_CFGR.B14;
    const register unsigned short int ADCPRE1 = 15;
    sbit  ADCPRE1_bit at RCC_CFGR.B15;
    const register unsigned short int PLLSRC = 16;
    sbit  PLLSRC_bit at RCC_CFGR.B16;
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
    const register unsigned short int CSSC = 23;
    sbit  CSSC_bit at RCC_CIR.B23;

sfr unsigned long   volatile RCC_APB2RSTR         absolute 0x4002100C;
    const register unsigned short int AFIORST = 0;
    sbit  AFIORST_bit at RCC_APB2RSTR.B0;
    const register unsigned short int IOPARST = 2;
    sbit  IOPARST_bit at RCC_APB2RSTR.B2;
    const register unsigned short int IOPBRST = 3;
    sbit  IOPBRST_bit at RCC_APB2RSTR.B3;
    const register unsigned short int IOPCRST = 4;
    sbit  IOPCRST_bit at RCC_APB2RSTR.B4;
    const register unsigned short int IOPDRST = 5;
    sbit  IOPDRST_bit at RCC_APB2RSTR.B5;
    const register unsigned short int IOPERST = 6;
    sbit  IOPERST_bit at RCC_APB2RSTR.B6;
    const register unsigned short int IOPFRST = 7;
    sbit  IOPFRST_bit at RCC_APB2RSTR.B7;
    const register unsigned short int IOPGRST = 8;
    sbit  IOPGRST_bit at RCC_APB2RSTR.B8;
    const register unsigned short int ADC1RST = 9;
    sbit  ADC1RST_bit at RCC_APB2RSTR.B9;
    const register unsigned short int TIM1RST = 11;
    sbit  TIM1RST_bit at RCC_APB2RSTR.B11;
    const register unsigned short int SPI1RST = 12;
    sbit  SPI1RST_bit at RCC_APB2RSTR.B12;
    const register unsigned short int USART1RST = 14;
    sbit  USART1RST_bit at RCC_APB2RSTR.B14;
    const register unsigned short int TIM15RST = 16;
    sbit  TIM15RST_bit at RCC_APB2RSTR.B16;
    const register unsigned short int TIM16RST = 17;
    sbit  TIM16RST_bit at RCC_APB2RSTR.B17;
    const register unsigned short int TIM17RST = 18;
    sbit  TIM17RST_bit at RCC_APB2RSTR.B18;

sfr unsigned long   volatile RCC_APB1RSTR         absolute 0x40021010;
    const register unsigned short int TIM2RST = 0;
    sbit  TIM2RST_bit at RCC_APB1RSTR.B0;
    const register unsigned short int TIM3RST = 1;
    sbit  TIM3RST_bit at RCC_APB1RSTR.B1;
    const register unsigned short int TIM4RST = 2;
    sbit  TIM4RST_bit at RCC_APB1RSTR.B2;
    const register unsigned short int TIM5RST = 3;
    sbit  TIM5RST_bit at RCC_APB1RSTR.B3;
    const register unsigned short int TIM6RST = 4;
    sbit  TIM6RST_bit at RCC_APB1RSTR.B4;
    const register unsigned short int TIM7RST = 5;
    sbit  TIM7RST_bit at RCC_APB1RSTR.B5;
    const register unsigned short int TIM12RST = 6;
    sbit  TIM12RST_bit at RCC_APB1RSTR.B6;
    const register unsigned short int TIM13RST = 7;
    sbit  TIM13RST_bit at RCC_APB1RSTR.B7;
    const register unsigned short int TIM14RST = 8;
    sbit  TIM14RST_bit at RCC_APB1RSTR.B8;
    const register unsigned short int WWDGRST = 11;
    sbit  WWDGRST_bit at RCC_APB1RSTR.B11;
    const register unsigned short int SPI2RST = 14;
    sbit  SPI2RST_bit at RCC_APB1RSTR.B14;
    const register unsigned short int SPI3RST = 15;
    sbit  SPI3RST_bit at RCC_APB1RSTR.B15;
    const register unsigned short int USART2RST = 17;
    sbit  USART2RST_bit at RCC_APB1RSTR.B17;
    const register unsigned short int USART3RST = 18;
    sbit  USART3RST_bit at RCC_APB1RSTR.B18;
    const register unsigned short int USART4RST = 19;
    sbit  USART4RST_bit at RCC_APB1RSTR.B19;
    const register unsigned short int USART5RST = 20;
    sbit  USART5RST_bit at RCC_APB1RSTR.B20;
    const register unsigned short int I2C1RST = 21;
    sbit  I2C1RST_bit at RCC_APB1RSTR.B21;
    const register unsigned short int I2C2RST = 22;
    sbit  I2C2RST_bit at RCC_APB1RSTR.B22;
    const register unsigned short int BKPRST = 27;
    sbit  BKPRST_bit at RCC_APB1RSTR.B27;
    const register unsigned short int PWRRST = 28;
    sbit  PWRRST_bit at RCC_APB1RSTR.B28;
    const register unsigned short int DACRST = 29;
    sbit  DACRST_bit at RCC_APB1RSTR.B29;
    const register unsigned short int CECRST = 30;
    sbit  CECRST_bit at RCC_APB1RSTR.B30;

sfr unsigned long   volatile RCC_AHBENR           absolute 0x40021014;
    const register unsigned short int DMA1EN = 0;
    sbit  DMA1EN_bit at RCC_AHBENR.B0;
    const register unsigned short int DMA2EN = 1;
    sbit  DMA2EN_bit at RCC_AHBENR.B1;
    const register unsigned short int SRAMEN = 2;
    sbit  SRAMEN_bit at RCC_AHBENR.B2;
    const register unsigned short int FLITFEN = 4;
    sbit  FLITFEN_bit at RCC_AHBENR.B4;
    const register unsigned short int CRCEN = 6;
    sbit  CRCEN_bit at RCC_AHBENR.B6;
    const register unsigned short int FSMCEN = 8;
    sbit  FSMCEN_bit at RCC_AHBENR.B8;

sfr unsigned long   volatile RCC_APB2ENR          absolute 0x40021018;
    const register unsigned short int AFIOEN = 0;
    sbit  AFIOEN_bit at RCC_APB2ENR.B0;
    const register unsigned short int IOPAEN = 2;
    sbit  IOPAEN_bit at RCC_APB2ENR.B2;
    const register unsigned short int IOPBEN = 3;
    sbit  IOPBEN_bit at RCC_APB2ENR.B3;
    const register unsigned short int IOPCEN = 4;
    sbit  IOPCEN_bit at RCC_APB2ENR.B4;
    const register unsigned short int IOPDEN = 5;
    sbit  IOPDEN_bit at RCC_APB2ENR.B5;
    const register unsigned short int IOPEEN = 6;
    sbit  IOPEEN_bit at RCC_APB2ENR.B6;
    const register unsigned short int IOPFEN = 7;
    sbit  IOPFEN_bit at RCC_APB2ENR.B7;
    const register unsigned short int IOPGEN = 8;
    sbit  IOPGEN_bit at RCC_APB2ENR.B8;
    const register unsigned short int ADC1EN = 9;
    sbit  ADC1EN_bit at RCC_APB2ENR.B9;
    const register unsigned short int TIM1EN = 11;
    sbit  TIM1EN_bit at RCC_APB2ENR.B11;
    const register unsigned short int SPI1EN = 12;
    sbit  SPI1EN_bit at RCC_APB2ENR.B12;
    const register unsigned short int USART1EN = 14;
    sbit  USART1EN_bit at RCC_APB2ENR.B14;
    const register unsigned short int TIM15EN = 16;
    sbit  TIM15EN_bit at RCC_APB2ENR.B16;
    const register unsigned short int TIM16EN = 17;
    sbit  TIM16EN_bit at RCC_APB2ENR.B17;
    const register unsigned short int TIM17EN = 18;
    sbit  TIM17EN_bit at RCC_APB2ENR.B18;

sfr unsigned long   volatile RCC_APB1ENR          absolute 0x4002101C;
    const register unsigned short int TIM2EN = 0;
    sbit  TIM2EN_bit at RCC_APB1ENR.B0;
    const register unsigned short int TIM3EN = 1;
    sbit  TIM3EN_bit at RCC_APB1ENR.B1;
    const register unsigned short int TIM4EN = 2;
    sbit  TIM4EN_bit at RCC_APB1ENR.B2;
    const register unsigned short int TIM5EN = 3;
    sbit  TIM5EN_bit at RCC_APB1ENR.B3;
    const register unsigned short int TIM6EN = 4;
    sbit  TIM6EN_bit at RCC_APB1ENR.B4;
    const register unsigned short int TIM7EN = 5;
    sbit  TIM7EN_bit at RCC_APB1ENR.B5;
    const register unsigned short int TIM12EN = 6;
    sbit  TIM12EN_bit at RCC_APB1ENR.B6;
    const register unsigned short int TIM13EN = 7;
    sbit  TIM13EN_bit at RCC_APB1ENR.B7;
    const register unsigned short int TIM14EN = 8;
    sbit  TIM14EN_bit at RCC_APB1ENR.B8;
    const register unsigned short int WWDGEN = 11;
    sbit  WWDGEN_bit at RCC_APB1ENR.B11;
    const register unsigned short int SPI2EN = 14;
    sbit  SPI2EN_bit at RCC_APB1ENR.B14;
    const register unsigned short int SPI3EN = 15;
    sbit  SPI3EN_bit at RCC_APB1ENR.B15;
    const register unsigned short int USART2EN = 17;
    sbit  USART2EN_bit at RCC_APB1ENR.B17;
    const register unsigned short int USART3EN = 18;
    sbit  USART3EN_bit at RCC_APB1ENR.B18;
    const register unsigned short int UART4EN = 19;
    sbit  UART4EN_bit at RCC_APB1ENR.B19;
    const register unsigned short int UART5EN = 20;
    sbit  UART5EN_bit at RCC_APB1ENR.B20;
    const register unsigned short int I2C1EN = 21;
    sbit  I2C1EN_bit at RCC_APB1ENR.B21;
    const register unsigned short int I2C2EN = 22;
    sbit  I2C2EN_bit at RCC_APB1ENR.B22;
    const register unsigned short int BKPEN = 27;
    sbit  BKPEN_bit at RCC_APB1ENR.B27;
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

sfr unsigned long   volatile RCC_CFGR2            absolute 0x4002102C;
    const register unsigned short int PREDIV10 = 0;
    sbit  PREDIV10_bit at RCC_CFGR2.B0;
    const register unsigned short int PREDIV11 = 1;
    sbit  PREDIV11_bit at RCC_CFGR2.B1;
    const register unsigned short int PREDIV12 = 2;
    sbit  PREDIV12_bit at RCC_CFGR2.B2;
    const register unsigned short int PREDIV13 = 3;
    sbit  PREDIV13_bit at RCC_CFGR2.B3;

sfr unsigned long   volatile GPIOA_BASE           absolute 0x40010800;
sfr unsigned long   volatile GPIOA_CRL            absolute 0x40010800;
    const register unsigned short int MODE00 = 0;
    sbit  MODE00_bit at GPIOA_CRL.B0;
    const register unsigned short int MODE01 = 1;
    sbit  MODE01_bit at GPIOA_CRL.B1;
    const register unsigned short int CNF00 = 2;
    sbit  CNF00_bit at GPIOA_CRL.B2;
    const register unsigned short int CNF01 = 3;
    sbit  CNF01_bit at GPIOA_CRL.B3;
    const register unsigned short int MODE10 = 4;
    sbit  MODE10_bit at GPIOA_CRL.B4;
    const register unsigned short int MODE11 = 5;
    sbit  MODE11_bit at GPIOA_CRL.B5;
    const register unsigned short int CNF10 = 6;
    sbit  CNF10_bit at GPIOA_CRL.B6;
    const register unsigned short int CNF11 = 7;
    sbit  CNF11_bit at GPIOA_CRL.B7;
    const register unsigned short int MODE20 = 8;
    sbit  MODE20_bit at GPIOA_CRL.B8;
    const register unsigned short int MODE21 = 9;
    sbit  MODE21_bit at GPIOA_CRL.B9;
    const register unsigned short int CNF20 = 10;
    sbit  CNF20_bit at GPIOA_CRL.B10;
    const register unsigned short int CNF21 = 11;
    sbit  CNF21_bit at GPIOA_CRL.B11;
    const register unsigned short int MODE30 = 12;
    sbit  MODE30_bit at GPIOA_CRL.B12;
    const register unsigned short int MODE31 = 13;
    sbit  MODE31_bit at GPIOA_CRL.B13;
    const register unsigned short int CNF30 = 14;
    sbit  CNF30_bit at GPIOA_CRL.B14;
    const register unsigned short int CNF31 = 15;
    sbit  CNF31_bit at GPIOA_CRL.B15;
    const register unsigned short int MODE40 = 16;
    sbit  MODE40_bit at GPIOA_CRL.B16;
    const register unsigned short int MODE41 = 17;
    sbit  MODE41_bit at GPIOA_CRL.B17;
    const register unsigned short int CNF40 = 18;
    sbit  CNF40_bit at GPIOA_CRL.B18;
    const register unsigned short int CNF41 = 19;
    sbit  CNF41_bit at GPIOA_CRL.B19;
    const register unsigned short int MODE50 = 20;
    sbit  MODE50_bit at GPIOA_CRL.B20;
    const register unsigned short int MODE51 = 21;
    sbit  MODE51_bit at GPIOA_CRL.B21;
    const register unsigned short int CNF50 = 22;
    sbit  CNF50_bit at GPIOA_CRL.B22;
    const register unsigned short int CNF51 = 23;
    sbit  CNF51_bit at GPIOA_CRL.B23;
    const register unsigned short int MODE60 = 24;
    sbit  MODE60_bit at GPIOA_CRL.B24;
    const register unsigned short int MODE61 = 25;
    sbit  MODE61_bit at GPIOA_CRL.B25;
    const register unsigned short int CNF60 = 26;
    sbit  CNF60_bit at GPIOA_CRL.B26;
    const register unsigned short int CNF61 = 27;
    sbit  CNF61_bit at GPIOA_CRL.B27;
    const register unsigned short int MODE70 = 28;
    sbit  MODE70_bit at GPIOA_CRL.B28;
    const register unsigned short int MODE71 = 29;
    sbit  MODE71_bit at GPIOA_CRL.B29;
    const register unsigned short int CNF70 = 30;
    sbit  CNF70_bit at GPIOA_CRL.B30;
    const register unsigned short int CNF71 = 31;
    sbit  CNF71_bit at GPIOA_CRL.B31;

sfr unsigned long   volatile GPIOA_CRH            absolute 0x40010804;
    const register unsigned short int MODE80 = 0;
    sbit  MODE80_bit at GPIOA_CRH.B0;
    const register unsigned short int MODE81 = 1;
    sbit  MODE81_bit at GPIOA_CRH.B1;
    const register unsigned short int CNF80 = 2;
    sbit  CNF80_bit at GPIOA_CRH.B2;
    const register unsigned short int CNF81 = 3;
    sbit  CNF81_bit at GPIOA_CRH.B3;
    const register unsigned short int MODE90 = 4;
    sbit  MODE90_bit at GPIOA_CRH.B4;
    const register unsigned short int MODE91 = 5;
    sbit  MODE91_bit at GPIOA_CRH.B5;
    const register unsigned short int CNF90 = 6;
    sbit  CNF90_bit at GPIOA_CRH.B6;
    const register unsigned short int CNF91 = 7;
    sbit  CNF91_bit at GPIOA_CRH.B7;
    const register unsigned short int MODE100 = 8;
    sbit  MODE100_bit at GPIOA_CRH.B8;
    const register unsigned short int MODE101 = 9;
    sbit  MODE101_bit at GPIOA_CRH.B9;
    const register unsigned short int CNF100 = 10;
    sbit  CNF100_bit at GPIOA_CRH.B10;
    const register unsigned short int CNF101 = 11;
    sbit  CNF101_bit at GPIOA_CRH.B11;
    const register unsigned short int MODE110 = 12;
    sbit  MODE110_bit at GPIOA_CRH.B12;
    const register unsigned short int MODE111 = 13;
    sbit  MODE111_bit at GPIOA_CRH.B13;
    const register unsigned short int CNF110 = 14;
    sbit  CNF110_bit at GPIOA_CRH.B14;
    const register unsigned short int CNF111 = 15;
    sbit  CNF111_bit at GPIOA_CRH.B15;
    const register unsigned short int MODE120 = 16;
    sbit  MODE120_bit at GPIOA_CRH.B16;
    const register unsigned short int MODE121 = 17;
    sbit  MODE121_bit at GPIOA_CRH.B17;
    const register unsigned short int CNF120 = 18;
    sbit  CNF120_bit at GPIOA_CRH.B18;
    const register unsigned short int CNF121 = 19;
    sbit  CNF121_bit at GPIOA_CRH.B19;
    const register unsigned short int MODE130 = 20;
    sbit  MODE130_bit at GPIOA_CRH.B20;
    const register unsigned short int MODE131 = 21;
    sbit  MODE131_bit at GPIOA_CRH.B21;
    const register unsigned short int CNF130 = 22;
    sbit  CNF130_bit at GPIOA_CRH.B22;
    const register unsigned short int CNF131 = 23;
    sbit  CNF131_bit at GPIOA_CRH.B23;
    const register unsigned short int MODE140 = 24;
    sbit  MODE140_bit at GPIOA_CRH.B24;
    const register unsigned short int MODE141 = 25;
    sbit  MODE141_bit at GPIOA_CRH.B25;
    const register unsigned short int CNF140 = 26;
    sbit  CNF140_bit at GPIOA_CRH.B26;
    const register unsigned short int CNF141 = 27;
    sbit  CNF141_bit at GPIOA_CRH.B27;
    const register unsigned short int MODE150 = 28;
    sbit  MODE150_bit at GPIOA_CRH.B28;
    const register unsigned short int MODE151 = 29;
    sbit  MODE151_bit at GPIOA_CRH.B29;
    const register unsigned short int CNF150 = 30;
    sbit  CNF150_bit at GPIOA_CRH.B30;
    const register unsigned short int CNF151 = 31;
    sbit  CNF151_bit at GPIOA_CRH.B31;

sfr unsigned long   volatile GPIOA_IDR            absolute 0x40010808;
    const register unsigned short int IDR0 = 0;
    sbit  IDR0_bit at GPIOA_IDR.B0;
    const register unsigned short int IDR1 = 1;
    sbit  IDR1_bit at GPIOA_IDR.B1;
    const register unsigned short int IDR2 = 2;
    sbit  IDR2_bit at GPIOA_IDR.B2;
    const register unsigned short int IDR3 = 3;
    sbit  IDR3_bit at GPIOA_IDR.B3;
    const register unsigned short int IDR4 = 4;
    sbit  IDR4_bit at GPIOA_IDR.B4;
    const register unsigned short int IDR5 = 5;
    sbit  IDR5_bit at GPIOA_IDR.B5;
    const register unsigned short int IDR6 = 6;
    sbit  IDR6_bit at GPIOA_IDR.B6;
    const register unsigned short int IDR7 = 7;
    sbit  IDR7_bit at GPIOA_IDR.B7;
    const register unsigned short int IDR8 = 8;
    sbit  IDR8_bit at GPIOA_IDR.B8;
    const register unsigned short int IDR9 = 9;
    sbit  IDR9_bit at GPIOA_IDR.B9;
    const register unsigned short int IDR10 = 10;
    sbit  IDR10_bit at GPIOA_IDR.B10;
    const register unsigned short int IDR11 = 11;
    sbit  IDR11_bit at GPIOA_IDR.B11;
    const register unsigned short int IDR12 = 12;
    sbit  IDR12_bit at GPIOA_IDR.B12;
    const register unsigned short int IDR13 = 13;
    sbit  IDR13_bit at GPIOA_IDR.B13;
    const register unsigned short int IDR14 = 14;
    sbit  IDR14_bit at GPIOA_IDR.B14;
    const register unsigned short int IDR15 = 15;
    sbit  IDR15_bit at GPIOA_IDR.B15;

sfr unsigned long   volatile GPIOA_ODR            absolute 0x4001080C;
    const register unsigned short int ODR0 = 0;
    sbit  ODR0_bit at GPIOA_ODR.B0;
    const register unsigned short int ODR1 = 1;
    sbit  ODR1_bit at GPIOA_ODR.B1;
    const register unsigned short int ODR2 = 2;
    sbit  ODR2_bit at GPIOA_ODR.B2;
    const register unsigned short int ODR3 = 3;
    sbit  ODR3_bit at GPIOA_ODR.B3;
    const register unsigned short int ODR4 = 4;
    sbit  ODR4_bit at GPIOA_ODR.B4;
    const register unsigned short int ODR5 = 5;
    sbit  ODR5_bit at GPIOA_ODR.B5;
    const register unsigned short int ODR6 = 6;
    sbit  ODR6_bit at GPIOA_ODR.B6;
    const register unsigned short int ODR7 = 7;
    sbit  ODR7_bit at GPIOA_ODR.B7;
    const register unsigned short int ODR8 = 8;
    sbit  ODR8_bit at GPIOA_ODR.B8;
    const register unsigned short int ODR9 = 9;
    sbit  ODR9_bit at GPIOA_ODR.B9;
    const register unsigned short int ODR10 = 10;
    sbit  ODR10_bit at GPIOA_ODR.B10;
    const register unsigned short int ODR11 = 11;
    sbit  ODR11_bit at GPIOA_ODR.B11;
    const register unsigned short int ODR12 = 12;
    sbit  ODR12_bit at GPIOA_ODR.B12;
    const register unsigned short int ODR13 = 13;
    sbit  ODR13_bit at GPIOA_ODR.B13;
    const register unsigned short int ODR14 = 14;
    sbit  ODR14_bit at GPIOA_ODR.B14;
    const register unsigned short int ODR15 = 15;
    sbit  ODR15_bit at GPIOA_ODR.B15;

sfr unsigned long   volatile GPIOA_BSRR           absolute 0x40010810;
    const register unsigned short int BS0 = 0;
    sbit  BS0_bit at GPIOA_BSRR.B0;
    const register unsigned short int BS1 = 1;
    sbit  BS1_bit at GPIOA_BSRR.B1;
    const register unsigned short int BS2 = 2;
    sbit  BS2_bit at GPIOA_BSRR.B2;
    const register unsigned short int BS3 = 3;
    sbit  BS3_bit at GPIOA_BSRR.B3;
    const register unsigned short int BS4 = 4;
    sbit  BS4_bit at GPIOA_BSRR.B4;
    const register unsigned short int BS5 = 5;
    sbit  BS5_bit at GPIOA_BSRR.B5;
    const register unsigned short int BS6 = 6;
    sbit  BS6_bit at GPIOA_BSRR.B6;
    const register unsigned short int BS7 = 7;
    sbit  BS7_bit at GPIOA_BSRR.B7;
    const register unsigned short int BS8 = 8;
    sbit  BS8_bit at GPIOA_BSRR.B8;
    const register unsigned short int BS9 = 9;
    sbit  BS9_bit at GPIOA_BSRR.B9;
    const register unsigned short int BS10 = 10;
    sbit  BS10_bit at GPIOA_BSRR.B10;
    const register unsigned short int BS11 = 11;
    sbit  BS11_bit at GPIOA_BSRR.B11;
    const register unsigned short int BS12 = 12;
    sbit  BS12_bit at GPIOA_BSRR.B12;
    const register unsigned short int BS13 = 13;
    sbit  BS13_bit at GPIOA_BSRR.B13;
    const register unsigned short int BS14 = 14;
    sbit  BS14_bit at GPIOA_BSRR.B14;
    const register unsigned short int BS15 = 15;
    sbit  BS15_bit at GPIOA_BSRR.B15;
    const register unsigned short int BR0 = 16;
    sbit  BR0_bit at GPIOA_BSRR.B16;
    const register unsigned short int BR1 = 17;
    sbit  BR1_bit at GPIOA_BSRR.B17;
    const register unsigned short int BR2 = 18;
    sbit  BR2_bit at GPIOA_BSRR.B18;
    const register unsigned short int BR3 = 19;
    sbit  BR3_bit at GPIOA_BSRR.B19;
    const register unsigned short int BR4 = 20;
    sbit  BR4_bit at GPIOA_BSRR.B20;
    const register unsigned short int BR5 = 21;
    sbit  BR5_bit at GPIOA_BSRR.B21;
    const register unsigned short int BR6 = 22;
    sbit  BR6_bit at GPIOA_BSRR.B22;
    const register unsigned short int BR7 = 23;
    sbit  BR7_bit at GPIOA_BSRR.B23;
    const register unsigned short int BR8 = 24;
    sbit  BR8_bit at GPIOA_BSRR.B24;
    const register unsigned short int BR9 = 25;
    sbit  BR9_bit at GPIOA_BSRR.B25;
    const register unsigned short int BR10 = 26;
    sbit  BR10_bit at GPIOA_BSRR.B26;
    const register unsigned short int BR11 = 27;
    sbit  BR11_bit at GPIOA_BSRR.B27;
    const register unsigned short int BR12 = 28;
    sbit  BR12_bit at GPIOA_BSRR.B28;
    const register unsigned short int BR13 = 29;
    sbit  BR13_bit at GPIOA_BSRR.B29;
    const register unsigned short int BR14 = 30;
    sbit  BR14_bit at GPIOA_BSRR.B30;
    const register unsigned short int BR15 = 31;
    sbit  BR15_bit at GPIOA_BSRR.B31;

sfr unsigned long   volatile GPIOA_BRR            absolute 0x40010814;
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

sfr unsigned long   volatile GPIOA_LCKR           absolute 0x40010818;
    const register unsigned short int LCK0 = 0;
    sbit  LCK0_bit at GPIOA_LCKR.B0;
    const register unsigned short int LCK1 = 1;
    sbit  LCK1_bit at GPIOA_LCKR.B1;
    const register unsigned short int LCK2 = 2;
    sbit  LCK2_bit at GPIOA_LCKR.B2;
    const register unsigned short int LCK3 = 3;
    sbit  LCK3_bit at GPIOA_LCKR.B3;
    const register unsigned short int LCK4 = 4;
    sbit  LCK4_bit at GPIOA_LCKR.B4;
    const register unsigned short int LCK5 = 5;
    sbit  LCK5_bit at GPIOA_LCKR.B5;
    const register unsigned short int LCK6 = 6;
    sbit  LCK6_bit at GPIOA_LCKR.B6;
    const register unsigned short int LCK7 = 7;
    sbit  LCK7_bit at GPIOA_LCKR.B7;
    const register unsigned short int LCK8 = 8;
    sbit  LCK8_bit at GPIOA_LCKR.B8;
    const register unsigned short int LCK9 = 9;
    sbit  LCK9_bit at GPIOA_LCKR.B9;
    const register unsigned short int LCK10 = 10;
    sbit  LCK10_bit at GPIOA_LCKR.B10;
    const register unsigned short int LCK11 = 11;
    sbit  LCK11_bit at GPIOA_LCKR.B11;
    const register unsigned short int LCK12 = 12;
    sbit  LCK12_bit at GPIOA_LCKR.B12;
    const register unsigned short int LCK13 = 13;
    sbit  LCK13_bit at GPIOA_LCKR.B13;
    const register unsigned short int LCK14 = 14;
    sbit  LCK14_bit at GPIOA_LCKR.B14;
    const register unsigned short int LCK15 = 15;
    sbit  LCK15_bit at GPIOA_LCKR.B15;
    const register unsigned short int LCKK = 16;
    sbit  LCKK_bit at GPIOA_LCKR.B16;

sfr unsigned long   volatile GPIOB_BASE           absolute 0x40010C00;
sfr unsigned long   volatile GPIOB_CRL            absolute 0x40010C00;
    sbit  MODE00_GPIOB_CRL_bit at GPIOB_CRL.B0;
    sbit  MODE01_GPIOB_CRL_bit at GPIOB_CRL.B1;
    sbit  CNF00_GPIOB_CRL_bit at GPIOB_CRL.B2;
    sbit  CNF01_GPIOB_CRL_bit at GPIOB_CRL.B3;
    sbit  MODE10_GPIOB_CRL_bit at GPIOB_CRL.B4;
    sbit  MODE11_GPIOB_CRL_bit at GPIOB_CRL.B5;
    sbit  CNF10_GPIOB_CRL_bit at GPIOB_CRL.B6;
    sbit  CNF11_GPIOB_CRL_bit at GPIOB_CRL.B7;
    sbit  MODE20_GPIOB_CRL_bit at GPIOB_CRL.B8;
    sbit  MODE21_GPIOB_CRL_bit at GPIOB_CRL.B9;
    sbit  CNF20_GPIOB_CRL_bit at GPIOB_CRL.B10;
    sbit  CNF21_GPIOB_CRL_bit at GPIOB_CRL.B11;
    sbit  MODE30_GPIOB_CRL_bit at GPIOB_CRL.B12;
    sbit  MODE31_GPIOB_CRL_bit at GPIOB_CRL.B13;
    sbit  CNF30_GPIOB_CRL_bit at GPIOB_CRL.B14;
    sbit  CNF31_GPIOB_CRL_bit at GPIOB_CRL.B15;
    sbit  MODE40_GPIOB_CRL_bit at GPIOB_CRL.B16;
    sbit  MODE41_GPIOB_CRL_bit at GPIOB_CRL.B17;
    sbit  CNF40_GPIOB_CRL_bit at GPIOB_CRL.B18;
    sbit  CNF41_GPIOB_CRL_bit at GPIOB_CRL.B19;
    sbit  MODE50_GPIOB_CRL_bit at GPIOB_CRL.B20;
    sbit  MODE51_GPIOB_CRL_bit at GPIOB_CRL.B21;
    sbit  CNF50_GPIOB_CRL_bit at GPIOB_CRL.B22;
    sbit  CNF51_GPIOB_CRL_bit at GPIOB_CRL.B23;
    sbit  MODE60_GPIOB_CRL_bit at GPIOB_CRL.B24;
    sbit  MODE61_GPIOB_CRL_bit at GPIOB_CRL.B25;
    sbit  CNF60_GPIOB_CRL_bit at GPIOB_CRL.B26;
    sbit  CNF61_GPIOB_CRL_bit at GPIOB_CRL.B27;
    sbit  MODE70_GPIOB_CRL_bit at GPIOB_CRL.B28;
    sbit  MODE71_GPIOB_CRL_bit at GPIOB_CRL.B29;
    sbit  CNF70_GPIOB_CRL_bit at GPIOB_CRL.B30;
    sbit  CNF71_GPIOB_CRL_bit at GPIOB_CRL.B31;

sfr unsigned long   volatile GPIOB_CRH            absolute 0x40010C04;
    sbit  MODE80_GPIOB_CRH_bit at GPIOB_CRH.B0;
    sbit  MODE81_GPIOB_CRH_bit at GPIOB_CRH.B1;
    sbit  CNF80_GPIOB_CRH_bit at GPIOB_CRH.B2;
    sbit  CNF81_GPIOB_CRH_bit at GPIOB_CRH.B3;
    sbit  MODE90_GPIOB_CRH_bit at GPIOB_CRH.B4;
    sbit  MODE91_GPIOB_CRH_bit at GPIOB_CRH.B5;
    sbit  CNF90_GPIOB_CRH_bit at GPIOB_CRH.B6;
    sbit  CNF91_GPIOB_CRH_bit at GPIOB_CRH.B7;
    sbit  MODE100_GPIOB_CRH_bit at GPIOB_CRH.B8;
    sbit  MODE101_GPIOB_CRH_bit at GPIOB_CRH.B9;
    sbit  CNF100_GPIOB_CRH_bit at GPIOB_CRH.B10;
    sbit  CNF101_GPIOB_CRH_bit at GPIOB_CRH.B11;
    sbit  MODE110_GPIOB_CRH_bit at GPIOB_CRH.B12;
    sbit  MODE111_GPIOB_CRH_bit at GPIOB_CRH.B13;
    sbit  CNF110_GPIOB_CRH_bit at GPIOB_CRH.B14;
    sbit  CNF111_GPIOB_CRH_bit at GPIOB_CRH.B15;
    sbit  MODE120_GPIOB_CRH_bit at GPIOB_CRH.B16;
    sbit  MODE121_GPIOB_CRH_bit at GPIOB_CRH.B17;
    sbit  CNF120_GPIOB_CRH_bit at GPIOB_CRH.B18;
    sbit  CNF121_GPIOB_CRH_bit at GPIOB_CRH.B19;
    sbit  MODE130_GPIOB_CRH_bit at GPIOB_CRH.B20;
    sbit  MODE131_GPIOB_CRH_bit at GPIOB_CRH.B21;
    sbit  CNF130_GPIOB_CRH_bit at GPIOB_CRH.B22;
    sbit  CNF131_GPIOB_CRH_bit at GPIOB_CRH.B23;
    sbit  MODE140_GPIOB_CRH_bit at GPIOB_CRH.B24;
    sbit  MODE141_GPIOB_CRH_bit at GPIOB_CRH.B25;
    sbit  CNF140_GPIOB_CRH_bit at GPIOB_CRH.B26;
    sbit  CNF141_GPIOB_CRH_bit at GPIOB_CRH.B27;
    sbit  MODE150_GPIOB_CRH_bit at GPIOB_CRH.B28;
    sbit  MODE151_GPIOB_CRH_bit at GPIOB_CRH.B29;
    sbit  CNF150_GPIOB_CRH_bit at GPIOB_CRH.B30;
    sbit  CNF151_GPIOB_CRH_bit at GPIOB_CRH.B31;

sfr unsigned long   volatile GPIOB_IDR            absolute 0x40010C08;
    sbit  IDR0_GPIOB_IDR_bit at GPIOB_IDR.B0;
    sbit  IDR1_GPIOB_IDR_bit at GPIOB_IDR.B1;
    sbit  IDR2_GPIOB_IDR_bit at GPIOB_IDR.B2;
    sbit  IDR3_GPIOB_IDR_bit at GPIOB_IDR.B3;
    sbit  IDR4_GPIOB_IDR_bit at GPIOB_IDR.B4;
    sbit  IDR5_GPIOB_IDR_bit at GPIOB_IDR.B5;
    sbit  IDR6_GPIOB_IDR_bit at GPIOB_IDR.B6;
    sbit  IDR7_GPIOB_IDR_bit at GPIOB_IDR.B7;
    sbit  IDR8_GPIOB_IDR_bit at GPIOB_IDR.B8;
    sbit  IDR9_GPIOB_IDR_bit at GPIOB_IDR.B9;
    sbit  IDR10_GPIOB_IDR_bit at GPIOB_IDR.B10;
    sbit  IDR11_GPIOB_IDR_bit at GPIOB_IDR.B11;
    sbit  IDR12_GPIOB_IDR_bit at GPIOB_IDR.B12;
    sbit  IDR13_GPIOB_IDR_bit at GPIOB_IDR.B13;
    sbit  IDR14_GPIOB_IDR_bit at GPIOB_IDR.B14;
    sbit  IDR15_GPIOB_IDR_bit at GPIOB_IDR.B15;

sfr unsigned long   volatile GPIOB_ODR            absolute 0x40010C0C;
    sbit  ODR0_GPIOB_ODR_bit at GPIOB_ODR.B0;
    sbit  ODR1_GPIOB_ODR_bit at GPIOB_ODR.B1;
    sbit  ODR2_GPIOB_ODR_bit at GPIOB_ODR.B2;
    sbit  ODR3_GPIOB_ODR_bit at GPIOB_ODR.B3;
    sbit  ODR4_GPIOB_ODR_bit at GPIOB_ODR.B4;
    sbit  ODR5_GPIOB_ODR_bit at GPIOB_ODR.B5;
    sbit  ODR6_GPIOB_ODR_bit at GPIOB_ODR.B6;
    sbit  ODR7_GPIOB_ODR_bit at GPIOB_ODR.B7;
    sbit  ODR8_GPIOB_ODR_bit at GPIOB_ODR.B8;
    sbit  ODR9_GPIOB_ODR_bit at GPIOB_ODR.B9;
    sbit  ODR10_GPIOB_ODR_bit at GPIOB_ODR.B10;
    sbit  ODR11_GPIOB_ODR_bit at GPIOB_ODR.B11;
    sbit  ODR12_GPIOB_ODR_bit at GPIOB_ODR.B12;
    sbit  ODR13_GPIOB_ODR_bit at GPIOB_ODR.B13;
    sbit  ODR14_GPIOB_ODR_bit at GPIOB_ODR.B14;
    sbit  ODR15_GPIOB_ODR_bit at GPIOB_ODR.B15;

sfr unsigned long   volatile GPIOB_BSRR           absolute 0x40010C10;
    sbit  BS0_GPIOB_BSRR_bit at GPIOB_BSRR.B0;
    sbit  BS1_GPIOB_BSRR_bit at GPIOB_BSRR.B1;
    sbit  BS2_GPIOB_BSRR_bit at GPIOB_BSRR.B2;
    sbit  BS3_GPIOB_BSRR_bit at GPIOB_BSRR.B3;
    sbit  BS4_GPIOB_BSRR_bit at GPIOB_BSRR.B4;
    sbit  BS5_GPIOB_BSRR_bit at GPIOB_BSRR.B5;
    sbit  BS6_GPIOB_BSRR_bit at GPIOB_BSRR.B6;
    sbit  BS7_GPIOB_BSRR_bit at GPIOB_BSRR.B7;
    sbit  BS8_GPIOB_BSRR_bit at GPIOB_BSRR.B8;
    sbit  BS9_GPIOB_BSRR_bit at GPIOB_BSRR.B9;
    sbit  BS10_GPIOB_BSRR_bit at GPIOB_BSRR.B10;
    sbit  BS11_GPIOB_BSRR_bit at GPIOB_BSRR.B11;
    sbit  BS12_GPIOB_BSRR_bit at GPIOB_BSRR.B12;
    sbit  BS13_GPIOB_BSRR_bit at GPIOB_BSRR.B13;
    sbit  BS14_GPIOB_BSRR_bit at GPIOB_BSRR.B14;
    sbit  BS15_GPIOB_BSRR_bit at GPIOB_BSRR.B15;
    sbit  BR0_GPIOB_BSRR_bit at GPIOB_BSRR.B16;
    sbit  BR1_GPIOB_BSRR_bit at GPIOB_BSRR.B17;
    sbit  BR2_GPIOB_BSRR_bit at GPIOB_BSRR.B18;
    sbit  BR3_GPIOB_BSRR_bit at GPIOB_BSRR.B19;
    sbit  BR4_GPIOB_BSRR_bit at GPIOB_BSRR.B20;
    sbit  BR5_GPIOB_BSRR_bit at GPIOB_BSRR.B21;
    sbit  BR6_GPIOB_BSRR_bit at GPIOB_BSRR.B22;
    sbit  BR7_GPIOB_BSRR_bit at GPIOB_BSRR.B23;
    sbit  BR8_GPIOB_BSRR_bit at GPIOB_BSRR.B24;
    sbit  BR9_GPIOB_BSRR_bit at GPIOB_BSRR.B25;
    sbit  BR10_GPIOB_BSRR_bit at GPIOB_BSRR.B26;
    sbit  BR11_GPIOB_BSRR_bit at GPIOB_BSRR.B27;
    sbit  BR12_GPIOB_BSRR_bit at GPIOB_BSRR.B28;
    sbit  BR13_GPIOB_BSRR_bit at GPIOB_BSRR.B29;
    sbit  BR14_GPIOB_BSRR_bit at GPIOB_BSRR.B30;
    sbit  BR15_GPIOB_BSRR_bit at GPIOB_BSRR.B31;

sfr unsigned long   volatile GPIOB_BRR            absolute 0x40010C14;
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

sfr unsigned long   volatile GPIOB_LCKR           absolute 0x40010C18;
    sbit  LCK0_GPIOB_LCKR_bit at GPIOB_LCKR.B0;
    sbit  LCK1_GPIOB_LCKR_bit at GPIOB_LCKR.B1;
    sbit  LCK2_GPIOB_LCKR_bit at GPIOB_LCKR.B2;
    sbit  LCK3_GPIOB_LCKR_bit at GPIOB_LCKR.B3;
    sbit  LCK4_GPIOB_LCKR_bit at GPIOB_LCKR.B4;
    sbit  LCK5_GPIOB_LCKR_bit at GPIOB_LCKR.B5;
    sbit  LCK6_GPIOB_LCKR_bit at GPIOB_LCKR.B6;
    sbit  LCK7_GPIOB_LCKR_bit at GPIOB_LCKR.B7;
    sbit  LCK8_GPIOB_LCKR_bit at GPIOB_LCKR.B8;
    sbit  LCK9_GPIOB_LCKR_bit at GPIOB_LCKR.B9;
    sbit  LCK10_GPIOB_LCKR_bit at GPIOB_LCKR.B10;
    sbit  LCK11_GPIOB_LCKR_bit at GPIOB_LCKR.B11;
    sbit  LCK12_GPIOB_LCKR_bit at GPIOB_LCKR.B12;
    sbit  LCK13_GPIOB_LCKR_bit at GPIOB_LCKR.B13;
    sbit  LCK14_GPIOB_LCKR_bit at GPIOB_LCKR.B14;
    sbit  LCK15_GPIOB_LCKR_bit at GPIOB_LCKR.B15;
    sbit  LCKK_GPIOB_LCKR_bit at GPIOB_LCKR.B16;

sfr unsigned long   volatile GPIOC_BASE           absolute 0x40011000;
sfr unsigned long   volatile GPIOC_CRL            absolute 0x40011000;
    sbit  MODE00_GPIOC_CRL_bit at GPIOC_CRL.B0;
    sbit  MODE01_GPIOC_CRL_bit at GPIOC_CRL.B1;
    sbit  CNF00_GPIOC_CRL_bit at GPIOC_CRL.B2;
    sbit  CNF01_GPIOC_CRL_bit at GPIOC_CRL.B3;
    sbit  MODE10_GPIOC_CRL_bit at GPIOC_CRL.B4;
    sbit  MODE11_GPIOC_CRL_bit at GPIOC_CRL.B5;
    sbit  CNF10_GPIOC_CRL_bit at GPIOC_CRL.B6;
    sbit  CNF11_GPIOC_CRL_bit at GPIOC_CRL.B7;
    sbit  MODE20_GPIOC_CRL_bit at GPIOC_CRL.B8;
    sbit  MODE21_GPIOC_CRL_bit at GPIOC_CRL.B9;
    sbit  CNF20_GPIOC_CRL_bit at GPIOC_CRL.B10;
    sbit  CNF21_GPIOC_CRL_bit at GPIOC_CRL.B11;
    sbit  MODE30_GPIOC_CRL_bit at GPIOC_CRL.B12;
    sbit  MODE31_GPIOC_CRL_bit at GPIOC_CRL.B13;
    sbit  CNF30_GPIOC_CRL_bit at GPIOC_CRL.B14;
    sbit  CNF31_GPIOC_CRL_bit at GPIOC_CRL.B15;
    sbit  MODE40_GPIOC_CRL_bit at GPIOC_CRL.B16;
    sbit  MODE41_GPIOC_CRL_bit at GPIOC_CRL.B17;
    sbit  CNF40_GPIOC_CRL_bit at GPIOC_CRL.B18;
    sbit  CNF41_GPIOC_CRL_bit at GPIOC_CRL.B19;
    sbit  MODE50_GPIOC_CRL_bit at GPIOC_CRL.B20;
    sbit  MODE51_GPIOC_CRL_bit at GPIOC_CRL.B21;
    sbit  CNF50_GPIOC_CRL_bit at GPIOC_CRL.B22;
    sbit  CNF51_GPIOC_CRL_bit at GPIOC_CRL.B23;
    sbit  MODE60_GPIOC_CRL_bit at GPIOC_CRL.B24;
    sbit  MODE61_GPIOC_CRL_bit at GPIOC_CRL.B25;
    sbit  CNF60_GPIOC_CRL_bit at GPIOC_CRL.B26;
    sbit  CNF61_GPIOC_CRL_bit at GPIOC_CRL.B27;
    sbit  MODE70_GPIOC_CRL_bit at GPIOC_CRL.B28;
    sbit  MODE71_GPIOC_CRL_bit at GPIOC_CRL.B29;
    sbit  CNF70_GPIOC_CRL_bit at GPIOC_CRL.B30;
    sbit  CNF71_GPIOC_CRL_bit at GPIOC_CRL.B31;

sfr unsigned long   volatile GPIOC_CRH            absolute 0x40011004;
    sbit  MODE80_GPIOC_CRH_bit at GPIOC_CRH.B0;
    sbit  MODE81_GPIOC_CRH_bit at GPIOC_CRH.B1;
    sbit  CNF80_GPIOC_CRH_bit at GPIOC_CRH.B2;
    sbit  CNF81_GPIOC_CRH_bit at GPIOC_CRH.B3;
    sbit  MODE90_GPIOC_CRH_bit at GPIOC_CRH.B4;
    sbit  MODE91_GPIOC_CRH_bit at GPIOC_CRH.B5;
    sbit  CNF90_GPIOC_CRH_bit at GPIOC_CRH.B6;
    sbit  CNF91_GPIOC_CRH_bit at GPIOC_CRH.B7;
    sbit  MODE100_GPIOC_CRH_bit at GPIOC_CRH.B8;
    sbit  MODE101_GPIOC_CRH_bit at GPIOC_CRH.B9;
    sbit  CNF100_GPIOC_CRH_bit at GPIOC_CRH.B10;
    sbit  CNF101_GPIOC_CRH_bit at GPIOC_CRH.B11;
    sbit  MODE110_GPIOC_CRH_bit at GPIOC_CRH.B12;
    sbit  MODE111_GPIOC_CRH_bit at GPIOC_CRH.B13;
    sbit  CNF110_GPIOC_CRH_bit at GPIOC_CRH.B14;
    sbit  CNF111_GPIOC_CRH_bit at GPIOC_CRH.B15;
    sbit  MODE120_GPIOC_CRH_bit at GPIOC_CRH.B16;
    sbit  MODE121_GPIOC_CRH_bit at GPIOC_CRH.B17;
    sbit  CNF120_GPIOC_CRH_bit at GPIOC_CRH.B18;
    sbit  CNF121_GPIOC_CRH_bit at GPIOC_CRH.B19;
    sbit  MODE130_GPIOC_CRH_bit at GPIOC_CRH.B20;
    sbit  MODE131_GPIOC_CRH_bit at GPIOC_CRH.B21;
    sbit  CNF130_GPIOC_CRH_bit at GPIOC_CRH.B22;
    sbit  CNF131_GPIOC_CRH_bit at GPIOC_CRH.B23;
    sbit  MODE140_GPIOC_CRH_bit at GPIOC_CRH.B24;
    sbit  MODE141_GPIOC_CRH_bit at GPIOC_CRH.B25;
    sbit  CNF140_GPIOC_CRH_bit at GPIOC_CRH.B26;
    sbit  CNF141_GPIOC_CRH_bit at GPIOC_CRH.B27;
    sbit  MODE150_GPIOC_CRH_bit at GPIOC_CRH.B28;
    sbit  MODE151_GPIOC_CRH_bit at GPIOC_CRH.B29;
    sbit  CNF150_GPIOC_CRH_bit at GPIOC_CRH.B30;
    sbit  CNF151_GPIOC_CRH_bit at GPIOC_CRH.B31;

sfr unsigned long   volatile GPIOC_IDR            absolute 0x40011008;
    sbit  IDR0_GPIOC_IDR_bit at GPIOC_IDR.B0;
    sbit  IDR1_GPIOC_IDR_bit at GPIOC_IDR.B1;
    sbit  IDR2_GPIOC_IDR_bit at GPIOC_IDR.B2;
    sbit  IDR3_GPIOC_IDR_bit at GPIOC_IDR.B3;
    sbit  IDR4_GPIOC_IDR_bit at GPIOC_IDR.B4;
    sbit  IDR5_GPIOC_IDR_bit at GPIOC_IDR.B5;
    sbit  IDR6_GPIOC_IDR_bit at GPIOC_IDR.B6;
    sbit  IDR7_GPIOC_IDR_bit at GPIOC_IDR.B7;
    sbit  IDR8_GPIOC_IDR_bit at GPIOC_IDR.B8;
    sbit  IDR9_GPIOC_IDR_bit at GPIOC_IDR.B9;
    sbit  IDR10_GPIOC_IDR_bit at GPIOC_IDR.B10;
    sbit  IDR11_GPIOC_IDR_bit at GPIOC_IDR.B11;
    sbit  IDR12_GPIOC_IDR_bit at GPIOC_IDR.B12;
    sbit  IDR13_GPIOC_IDR_bit at GPIOC_IDR.B13;
    sbit  IDR14_GPIOC_IDR_bit at GPIOC_IDR.B14;
    sbit  IDR15_GPIOC_IDR_bit at GPIOC_IDR.B15;

sfr unsigned long   volatile GPIOC_ODR            absolute 0x4001100C;
    sbit  ODR0_GPIOC_ODR_bit at GPIOC_ODR.B0;
    sbit  ODR1_GPIOC_ODR_bit at GPIOC_ODR.B1;
    sbit  ODR2_GPIOC_ODR_bit at GPIOC_ODR.B2;
    sbit  ODR3_GPIOC_ODR_bit at GPIOC_ODR.B3;
    sbit  ODR4_GPIOC_ODR_bit at GPIOC_ODR.B4;
    sbit  ODR5_GPIOC_ODR_bit at GPIOC_ODR.B5;
    sbit  ODR6_GPIOC_ODR_bit at GPIOC_ODR.B6;
    sbit  ODR7_GPIOC_ODR_bit at GPIOC_ODR.B7;
    sbit  ODR8_GPIOC_ODR_bit at GPIOC_ODR.B8;
    sbit  ODR9_GPIOC_ODR_bit at GPIOC_ODR.B9;
    sbit  ODR10_GPIOC_ODR_bit at GPIOC_ODR.B10;
    sbit  ODR11_GPIOC_ODR_bit at GPIOC_ODR.B11;
    sbit  ODR12_GPIOC_ODR_bit at GPIOC_ODR.B12;
    sbit  ODR13_GPIOC_ODR_bit at GPIOC_ODR.B13;
    sbit  ODR14_GPIOC_ODR_bit at GPIOC_ODR.B14;
    sbit  ODR15_GPIOC_ODR_bit at GPIOC_ODR.B15;

sfr unsigned long   volatile GPIOC_BSRR           absolute 0x40011010;
    sbit  BS0_GPIOC_BSRR_bit at GPIOC_BSRR.B0;
    sbit  BS1_GPIOC_BSRR_bit at GPIOC_BSRR.B1;
    sbit  BS2_GPIOC_BSRR_bit at GPIOC_BSRR.B2;
    sbit  BS3_GPIOC_BSRR_bit at GPIOC_BSRR.B3;
    sbit  BS4_GPIOC_BSRR_bit at GPIOC_BSRR.B4;
    sbit  BS5_GPIOC_BSRR_bit at GPIOC_BSRR.B5;
    sbit  BS6_GPIOC_BSRR_bit at GPIOC_BSRR.B6;
    sbit  BS7_GPIOC_BSRR_bit at GPIOC_BSRR.B7;
    sbit  BS8_GPIOC_BSRR_bit at GPIOC_BSRR.B8;
    sbit  BS9_GPIOC_BSRR_bit at GPIOC_BSRR.B9;
    sbit  BS10_GPIOC_BSRR_bit at GPIOC_BSRR.B10;
    sbit  BS11_GPIOC_BSRR_bit at GPIOC_BSRR.B11;
    sbit  BS12_GPIOC_BSRR_bit at GPIOC_BSRR.B12;
    sbit  BS13_GPIOC_BSRR_bit at GPIOC_BSRR.B13;
    sbit  BS14_GPIOC_BSRR_bit at GPIOC_BSRR.B14;
    sbit  BS15_GPIOC_BSRR_bit at GPIOC_BSRR.B15;
    sbit  BR0_GPIOC_BSRR_bit at GPIOC_BSRR.B16;
    sbit  BR1_GPIOC_BSRR_bit at GPIOC_BSRR.B17;
    sbit  BR2_GPIOC_BSRR_bit at GPIOC_BSRR.B18;
    sbit  BR3_GPIOC_BSRR_bit at GPIOC_BSRR.B19;
    sbit  BR4_GPIOC_BSRR_bit at GPIOC_BSRR.B20;
    sbit  BR5_GPIOC_BSRR_bit at GPIOC_BSRR.B21;
    sbit  BR6_GPIOC_BSRR_bit at GPIOC_BSRR.B22;
    sbit  BR7_GPIOC_BSRR_bit at GPIOC_BSRR.B23;
    sbit  BR8_GPIOC_BSRR_bit at GPIOC_BSRR.B24;
    sbit  BR9_GPIOC_BSRR_bit at GPIOC_BSRR.B25;
    sbit  BR10_GPIOC_BSRR_bit at GPIOC_BSRR.B26;
    sbit  BR11_GPIOC_BSRR_bit at GPIOC_BSRR.B27;
    sbit  BR12_GPIOC_BSRR_bit at GPIOC_BSRR.B28;
    sbit  BR13_GPIOC_BSRR_bit at GPIOC_BSRR.B29;
    sbit  BR14_GPIOC_BSRR_bit at GPIOC_BSRR.B30;
    sbit  BR15_GPIOC_BSRR_bit at GPIOC_BSRR.B31;

sfr unsigned long   volatile GPIOC_BRR            absolute 0x40011014;
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

sfr unsigned long   volatile GPIOC_LCKR           absolute 0x40011018;
    sbit  LCK0_GPIOC_LCKR_bit at GPIOC_LCKR.B0;
    sbit  LCK1_GPIOC_LCKR_bit at GPIOC_LCKR.B1;
    sbit  LCK2_GPIOC_LCKR_bit at GPIOC_LCKR.B2;
    sbit  LCK3_GPIOC_LCKR_bit at GPIOC_LCKR.B3;
    sbit  LCK4_GPIOC_LCKR_bit at GPIOC_LCKR.B4;
    sbit  LCK5_GPIOC_LCKR_bit at GPIOC_LCKR.B5;
    sbit  LCK6_GPIOC_LCKR_bit at GPIOC_LCKR.B6;
    sbit  LCK7_GPIOC_LCKR_bit at GPIOC_LCKR.B7;
    sbit  LCK8_GPIOC_LCKR_bit at GPIOC_LCKR.B8;
    sbit  LCK9_GPIOC_LCKR_bit at GPIOC_LCKR.B9;
    sbit  LCK10_GPIOC_LCKR_bit at GPIOC_LCKR.B10;
    sbit  LCK11_GPIOC_LCKR_bit at GPIOC_LCKR.B11;
    sbit  LCK12_GPIOC_LCKR_bit at GPIOC_LCKR.B12;
    sbit  LCK13_GPIOC_LCKR_bit at GPIOC_LCKR.B13;
    sbit  LCK14_GPIOC_LCKR_bit at GPIOC_LCKR.B14;
    sbit  LCK15_GPIOC_LCKR_bit at GPIOC_LCKR.B15;
    sbit  LCKK_GPIOC_LCKR_bit at GPIOC_LCKR.B16;

sfr unsigned long   volatile GPIOD_BASE           absolute 0x40011400;
sfr unsigned long   volatile GPIOD_CRL            absolute 0x40011400;
    sbit  MODE00_GPIOD_CRL_bit at GPIOD_CRL.B0;
    sbit  MODE01_GPIOD_CRL_bit at GPIOD_CRL.B1;
    sbit  CNF00_GPIOD_CRL_bit at GPIOD_CRL.B2;
    sbit  CNF01_GPIOD_CRL_bit at GPIOD_CRL.B3;
    sbit  MODE10_GPIOD_CRL_bit at GPIOD_CRL.B4;
    sbit  MODE11_GPIOD_CRL_bit at GPIOD_CRL.B5;
    sbit  CNF10_GPIOD_CRL_bit at GPIOD_CRL.B6;
    sbit  CNF11_GPIOD_CRL_bit at GPIOD_CRL.B7;
    sbit  MODE20_GPIOD_CRL_bit at GPIOD_CRL.B8;
    sbit  MODE21_GPIOD_CRL_bit at GPIOD_CRL.B9;
    sbit  CNF20_GPIOD_CRL_bit at GPIOD_CRL.B10;
    sbit  CNF21_GPIOD_CRL_bit at GPIOD_CRL.B11;
    sbit  MODE30_GPIOD_CRL_bit at GPIOD_CRL.B12;
    sbit  MODE31_GPIOD_CRL_bit at GPIOD_CRL.B13;
    sbit  CNF30_GPIOD_CRL_bit at GPIOD_CRL.B14;
    sbit  CNF31_GPIOD_CRL_bit at GPIOD_CRL.B15;
    sbit  MODE40_GPIOD_CRL_bit at GPIOD_CRL.B16;
    sbit  MODE41_GPIOD_CRL_bit at GPIOD_CRL.B17;
    sbit  CNF40_GPIOD_CRL_bit at GPIOD_CRL.B18;
    sbit  CNF41_GPIOD_CRL_bit at GPIOD_CRL.B19;
    sbit  MODE50_GPIOD_CRL_bit at GPIOD_CRL.B20;
    sbit  MODE51_GPIOD_CRL_bit at GPIOD_CRL.B21;
    sbit  CNF50_GPIOD_CRL_bit at GPIOD_CRL.B22;
    sbit  CNF51_GPIOD_CRL_bit at GPIOD_CRL.B23;
    sbit  MODE60_GPIOD_CRL_bit at GPIOD_CRL.B24;
    sbit  MODE61_GPIOD_CRL_bit at GPIOD_CRL.B25;
    sbit  CNF60_GPIOD_CRL_bit at GPIOD_CRL.B26;
    sbit  CNF61_GPIOD_CRL_bit at GPIOD_CRL.B27;
    sbit  MODE70_GPIOD_CRL_bit at GPIOD_CRL.B28;
    sbit  MODE71_GPIOD_CRL_bit at GPIOD_CRL.B29;
    sbit  CNF70_GPIOD_CRL_bit at GPIOD_CRL.B30;
    sbit  CNF71_GPIOD_CRL_bit at GPIOD_CRL.B31;

sfr unsigned long   volatile GPIOD_CRH            absolute 0x40011404;
    sbit  MODE80_GPIOD_CRH_bit at GPIOD_CRH.B0;
    sbit  MODE81_GPIOD_CRH_bit at GPIOD_CRH.B1;
    sbit  CNF80_GPIOD_CRH_bit at GPIOD_CRH.B2;
    sbit  CNF81_GPIOD_CRH_bit at GPIOD_CRH.B3;
    sbit  MODE90_GPIOD_CRH_bit at GPIOD_CRH.B4;
    sbit  MODE91_GPIOD_CRH_bit at GPIOD_CRH.B5;
    sbit  CNF90_GPIOD_CRH_bit at GPIOD_CRH.B6;
    sbit  CNF91_GPIOD_CRH_bit at GPIOD_CRH.B7;
    sbit  MODE100_GPIOD_CRH_bit at GPIOD_CRH.B8;
    sbit  MODE101_GPIOD_CRH_bit at GPIOD_CRH.B9;
    sbit  CNF100_GPIOD_CRH_bit at GPIOD_CRH.B10;
    sbit  CNF101_GPIOD_CRH_bit at GPIOD_CRH.B11;
    sbit  MODE110_GPIOD_CRH_bit at GPIOD_CRH.B12;
    sbit  MODE111_GPIOD_CRH_bit at GPIOD_CRH.B13;
    sbit  CNF110_GPIOD_CRH_bit at GPIOD_CRH.B14;
    sbit  CNF111_GPIOD_CRH_bit at GPIOD_CRH.B15;
    sbit  MODE120_GPIOD_CRH_bit at GPIOD_CRH.B16;
    sbit  MODE121_GPIOD_CRH_bit at GPIOD_CRH.B17;
    sbit  CNF120_GPIOD_CRH_bit at GPIOD_CRH.B18;
    sbit  CNF121_GPIOD_CRH_bit at GPIOD_CRH.B19;
    sbit  MODE130_GPIOD_CRH_bit at GPIOD_CRH.B20;
    sbit  MODE131_GPIOD_CRH_bit at GPIOD_CRH.B21;
    sbit  CNF130_GPIOD_CRH_bit at GPIOD_CRH.B22;
    sbit  CNF131_GPIOD_CRH_bit at GPIOD_CRH.B23;
    sbit  MODE140_GPIOD_CRH_bit at GPIOD_CRH.B24;
    sbit  MODE141_GPIOD_CRH_bit at GPIOD_CRH.B25;
    sbit  CNF140_GPIOD_CRH_bit at GPIOD_CRH.B26;
    sbit  CNF141_GPIOD_CRH_bit at GPIOD_CRH.B27;
    sbit  MODE150_GPIOD_CRH_bit at GPIOD_CRH.B28;
    sbit  MODE151_GPIOD_CRH_bit at GPIOD_CRH.B29;
    sbit  CNF150_GPIOD_CRH_bit at GPIOD_CRH.B30;
    sbit  CNF151_GPIOD_CRH_bit at GPIOD_CRH.B31;

sfr unsigned long   volatile GPIOD_IDR            absolute 0x40011408;
    sbit  IDR0_GPIOD_IDR_bit at GPIOD_IDR.B0;
    sbit  IDR1_GPIOD_IDR_bit at GPIOD_IDR.B1;
    sbit  IDR2_GPIOD_IDR_bit at GPIOD_IDR.B2;
    sbit  IDR3_GPIOD_IDR_bit at GPIOD_IDR.B3;
    sbit  IDR4_GPIOD_IDR_bit at GPIOD_IDR.B4;
    sbit  IDR5_GPIOD_IDR_bit at GPIOD_IDR.B5;
    sbit  IDR6_GPIOD_IDR_bit at GPIOD_IDR.B6;
    sbit  IDR7_GPIOD_IDR_bit at GPIOD_IDR.B7;
    sbit  IDR8_GPIOD_IDR_bit at GPIOD_IDR.B8;
    sbit  IDR9_GPIOD_IDR_bit at GPIOD_IDR.B9;
    sbit  IDR10_GPIOD_IDR_bit at GPIOD_IDR.B10;
    sbit  IDR11_GPIOD_IDR_bit at GPIOD_IDR.B11;
    sbit  IDR12_GPIOD_IDR_bit at GPIOD_IDR.B12;
    sbit  IDR13_GPIOD_IDR_bit at GPIOD_IDR.B13;
    sbit  IDR14_GPIOD_IDR_bit at GPIOD_IDR.B14;
    sbit  IDR15_GPIOD_IDR_bit at GPIOD_IDR.B15;

sfr unsigned long   volatile GPIOD_ODR            absolute 0x4001140C;
    sbit  ODR0_GPIOD_ODR_bit at GPIOD_ODR.B0;
    sbit  ODR1_GPIOD_ODR_bit at GPIOD_ODR.B1;
    sbit  ODR2_GPIOD_ODR_bit at GPIOD_ODR.B2;
    sbit  ODR3_GPIOD_ODR_bit at GPIOD_ODR.B3;
    sbit  ODR4_GPIOD_ODR_bit at GPIOD_ODR.B4;
    sbit  ODR5_GPIOD_ODR_bit at GPIOD_ODR.B5;
    sbit  ODR6_GPIOD_ODR_bit at GPIOD_ODR.B6;
    sbit  ODR7_GPIOD_ODR_bit at GPIOD_ODR.B7;
    sbit  ODR8_GPIOD_ODR_bit at GPIOD_ODR.B8;
    sbit  ODR9_GPIOD_ODR_bit at GPIOD_ODR.B9;
    sbit  ODR10_GPIOD_ODR_bit at GPIOD_ODR.B10;
    sbit  ODR11_GPIOD_ODR_bit at GPIOD_ODR.B11;
    sbit  ODR12_GPIOD_ODR_bit at GPIOD_ODR.B12;
    sbit  ODR13_GPIOD_ODR_bit at GPIOD_ODR.B13;
    sbit  ODR14_GPIOD_ODR_bit at GPIOD_ODR.B14;
    sbit  ODR15_GPIOD_ODR_bit at GPIOD_ODR.B15;

sfr unsigned long   volatile GPIOD_BSRR           absolute 0x40011410;
    sbit  BS0_GPIOD_BSRR_bit at GPIOD_BSRR.B0;
    sbit  BS1_GPIOD_BSRR_bit at GPIOD_BSRR.B1;
    sbit  BS2_GPIOD_BSRR_bit at GPIOD_BSRR.B2;
    sbit  BS3_GPIOD_BSRR_bit at GPIOD_BSRR.B3;
    sbit  BS4_GPIOD_BSRR_bit at GPIOD_BSRR.B4;
    sbit  BS5_GPIOD_BSRR_bit at GPIOD_BSRR.B5;
    sbit  BS6_GPIOD_BSRR_bit at GPIOD_BSRR.B6;
    sbit  BS7_GPIOD_BSRR_bit at GPIOD_BSRR.B7;
    sbit  BS8_GPIOD_BSRR_bit at GPIOD_BSRR.B8;
    sbit  BS9_GPIOD_BSRR_bit at GPIOD_BSRR.B9;
    sbit  BS10_GPIOD_BSRR_bit at GPIOD_BSRR.B10;
    sbit  BS11_GPIOD_BSRR_bit at GPIOD_BSRR.B11;
    sbit  BS12_GPIOD_BSRR_bit at GPIOD_BSRR.B12;
    sbit  BS13_GPIOD_BSRR_bit at GPIOD_BSRR.B13;
    sbit  BS14_GPIOD_BSRR_bit at GPIOD_BSRR.B14;
    sbit  BS15_GPIOD_BSRR_bit at GPIOD_BSRR.B15;
    sbit  BR0_GPIOD_BSRR_bit at GPIOD_BSRR.B16;
    sbit  BR1_GPIOD_BSRR_bit at GPIOD_BSRR.B17;
    sbit  BR2_GPIOD_BSRR_bit at GPIOD_BSRR.B18;
    sbit  BR3_GPIOD_BSRR_bit at GPIOD_BSRR.B19;
    sbit  BR4_GPIOD_BSRR_bit at GPIOD_BSRR.B20;
    sbit  BR5_GPIOD_BSRR_bit at GPIOD_BSRR.B21;
    sbit  BR6_GPIOD_BSRR_bit at GPIOD_BSRR.B22;
    sbit  BR7_GPIOD_BSRR_bit at GPIOD_BSRR.B23;
    sbit  BR8_GPIOD_BSRR_bit at GPIOD_BSRR.B24;
    sbit  BR9_GPIOD_BSRR_bit at GPIOD_BSRR.B25;
    sbit  BR10_GPIOD_BSRR_bit at GPIOD_BSRR.B26;
    sbit  BR11_GPIOD_BSRR_bit at GPIOD_BSRR.B27;
    sbit  BR12_GPIOD_BSRR_bit at GPIOD_BSRR.B28;
    sbit  BR13_GPIOD_BSRR_bit at GPIOD_BSRR.B29;
    sbit  BR14_GPIOD_BSRR_bit at GPIOD_BSRR.B30;
    sbit  BR15_GPIOD_BSRR_bit at GPIOD_BSRR.B31;

sfr unsigned long   volatile GPIOD_BRR            absolute 0x40011414;
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

sfr unsigned long   volatile GPIOD_LCKR           absolute 0x40011418;
    sbit  LCK0_GPIOD_LCKR_bit at GPIOD_LCKR.B0;
    sbit  LCK1_GPIOD_LCKR_bit at GPIOD_LCKR.B1;
    sbit  LCK2_GPIOD_LCKR_bit at GPIOD_LCKR.B2;
    sbit  LCK3_GPIOD_LCKR_bit at GPIOD_LCKR.B3;
    sbit  LCK4_GPIOD_LCKR_bit at GPIOD_LCKR.B4;
    sbit  LCK5_GPIOD_LCKR_bit at GPIOD_LCKR.B5;
    sbit  LCK6_GPIOD_LCKR_bit at GPIOD_LCKR.B6;
    sbit  LCK7_GPIOD_LCKR_bit at GPIOD_LCKR.B7;
    sbit  LCK8_GPIOD_LCKR_bit at GPIOD_LCKR.B8;
    sbit  LCK9_GPIOD_LCKR_bit at GPIOD_LCKR.B9;
    sbit  LCK10_GPIOD_LCKR_bit at GPIOD_LCKR.B10;
    sbit  LCK11_GPIOD_LCKR_bit at GPIOD_LCKR.B11;
    sbit  LCK12_GPIOD_LCKR_bit at GPIOD_LCKR.B12;
    sbit  LCK13_GPIOD_LCKR_bit at GPIOD_LCKR.B13;
    sbit  LCK14_GPIOD_LCKR_bit at GPIOD_LCKR.B14;
    sbit  LCK15_GPIOD_LCKR_bit at GPIOD_LCKR.B15;
    sbit  LCKK_GPIOD_LCKR_bit at GPIOD_LCKR.B16;

sfr unsigned long   volatile GPIOE_BASE           absolute 0x40011800;
sfr unsigned long   volatile GPIOE_CRL            absolute 0x40011800;
    sbit  MODE00_GPIOE_CRL_bit at GPIOE_CRL.B0;
    sbit  MODE01_GPIOE_CRL_bit at GPIOE_CRL.B1;
    sbit  CNF00_GPIOE_CRL_bit at GPIOE_CRL.B2;
    sbit  CNF01_GPIOE_CRL_bit at GPIOE_CRL.B3;
    sbit  MODE10_GPIOE_CRL_bit at GPIOE_CRL.B4;
    sbit  MODE11_GPIOE_CRL_bit at GPIOE_CRL.B5;
    sbit  CNF10_GPIOE_CRL_bit at GPIOE_CRL.B6;
    sbit  CNF11_GPIOE_CRL_bit at GPIOE_CRL.B7;
    sbit  MODE20_GPIOE_CRL_bit at GPIOE_CRL.B8;
    sbit  MODE21_GPIOE_CRL_bit at GPIOE_CRL.B9;
    sbit  CNF20_GPIOE_CRL_bit at GPIOE_CRL.B10;
    sbit  CNF21_GPIOE_CRL_bit at GPIOE_CRL.B11;
    sbit  MODE30_GPIOE_CRL_bit at GPIOE_CRL.B12;
    sbit  MODE31_GPIOE_CRL_bit at GPIOE_CRL.B13;
    sbit  CNF30_GPIOE_CRL_bit at GPIOE_CRL.B14;
    sbit  CNF31_GPIOE_CRL_bit at GPIOE_CRL.B15;
    sbit  MODE40_GPIOE_CRL_bit at GPIOE_CRL.B16;
    sbit  MODE41_GPIOE_CRL_bit at GPIOE_CRL.B17;
    sbit  CNF40_GPIOE_CRL_bit at GPIOE_CRL.B18;
    sbit  CNF41_GPIOE_CRL_bit at GPIOE_CRL.B19;
    sbit  MODE50_GPIOE_CRL_bit at GPIOE_CRL.B20;
    sbit  MODE51_GPIOE_CRL_bit at GPIOE_CRL.B21;
    sbit  CNF50_GPIOE_CRL_bit at GPIOE_CRL.B22;
    sbit  CNF51_GPIOE_CRL_bit at GPIOE_CRL.B23;
    sbit  MODE60_GPIOE_CRL_bit at GPIOE_CRL.B24;
    sbit  MODE61_GPIOE_CRL_bit at GPIOE_CRL.B25;
    sbit  CNF60_GPIOE_CRL_bit at GPIOE_CRL.B26;
    sbit  CNF61_GPIOE_CRL_bit at GPIOE_CRL.B27;
    sbit  MODE70_GPIOE_CRL_bit at GPIOE_CRL.B28;
    sbit  MODE71_GPIOE_CRL_bit at GPIOE_CRL.B29;
    sbit  CNF70_GPIOE_CRL_bit at GPIOE_CRL.B30;
    sbit  CNF71_GPIOE_CRL_bit at GPIOE_CRL.B31;

sfr unsigned long   volatile GPIOE_CRH            absolute 0x40011804;
    sbit  MODE80_GPIOE_CRH_bit at GPIOE_CRH.B0;
    sbit  MODE81_GPIOE_CRH_bit at GPIOE_CRH.B1;
    sbit  CNF80_GPIOE_CRH_bit at GPIOE_CRH.B2;
    sbit  CNF81_GPIOE_CRH_bit at GPIOE_CRH.B3;
    sbit  MODE90_GPIOE_CRH_bit at GPIOE_CRH.B4;
    sbit  MODE91_GPIOE_CRH_bit at GPIOE_CRH.B5;
    sbit  CNF90_GPIOE_CRH_bit at GPIOE_CRH.B6;
    sbit  CNF91_GPIOE_CRH_bit at GPIOE_CRH.B7;
    sbit  MODE100_GPIOE_CRH_bit at GPIOE_CRH.B8;
    sbit  MODE101_GPIOE_CRH_bit at GPIOE_CRH.B9;
    sbit  CNF100_GPIOE_CRH_bit at GPIOE_CRH.B10;
    sbit  CNF101_GPIOE_CRH_bit at GPIOE_CRH.B11;
    sbit  MODE110_GPIOE_CRH_bit at GPIOE_CRH.B12;
    sbit  MODE111_GPIOE_CRH_bit at GPIOE_CRH.B13;
    sbit  CNF110_GPIOE_CRH_bit at GPIOE_CRH.B14;
    sbit  CNF111_GPIOE_CRH_bit at GPIOE_CRH.B15;
    sbit  MODE120_GPIOE_CRH_bit at GPIOE_CRH.B16;
    sbit  MODE121_GPIOE_CRH_bit at GPIOE_CRH.B17;
    sbit  CNF120_GPIOE_CRH_bit at GPIOE_CRH.B18;
    sbit  CNF121_GPIOE_CRH_bit at GPIOE_CRH.B19;
    sbit  MODE130_GPIOE_CRH_bit at GPIOE_CRH.B20;
    sbit  MODE131_GPIOE_CRH_bit at GPIOE_CRH.B21;
    sbit  CNF130_GPIOE_CRH_bit at GPIOE_CRH.B22;
    sbit  CNF131_GPIOE_CRH_bit at GPIOE_CRH.B23;
    sbit  MODE140_GPIOE_CRH_bit at GPIOE_CRH.B24;
    sbit  MODE141_GPIOE_CRH_bit at GPIOE_CRH.B25;
    sbit  CNF140_GPIOE_CRH_bit at GPIOE_CRH.B26;
    sbit  CNF141_GPIOE_CRH_bit at GPIOE_CRH.B27;
    sbit  MODE150_GPIOE_CRH_bit at GPIOE_CRH.B28;
    sbit  MODE151_GPIOE_CRH_bit at GPIOE_CRH.B29;
    sbit  CNF150_GPIOE_CRH_bit at GPIOE_CRH.B30;
    sbit  CNF151_GPIOE_CRH_bit at GPIOE_CRH.B31;

sfr unsigned long   volatile GPIOE_IDR            absolute 0x40011808;
    sbit  IDR0_GPIOE_IDR_bit at GPIOE_IDR.B0;
    sbit  IDR1_GPIOE_IDR_bit at GPIOE_IDR.B1;
    sbit  IDR2_GPIOE_IDR_bit at GPIOE_IDR.B2;
    sbit  IDR3_GPIOE_IDR_bit at GPIOE_IDR.B3;
    sbit  IDR4_GPIOE_IDR_bit at GPIOE_IDR.B4;
    sbit  IDR5_GPIOE_IDR_bit at GPIOE_IDR.B5;
    sbit  IDR6_GPIOE_IDR_bit at GPIOE_IDR.B6;
    sbit  IDR7_GPIOE_IDR_bit at GPIOE_IDR.B7;
    sbit  IDR8_GPIOE_IDR_bit at GPIOE_IDR.B8;
    sbit  IDR9_GPIOE_IDR_bit at GPIOE_IDR.B9;
    sbit  IDR10_GPIOE_IDR_bit at GPIOE_IDR.B10;
    sbit  IDR11_GPIOE_IDR_bit at GPIOE_IDR.B11;
    sbit  IDR12_GPIOE_IDR_bit at GPIOE_IDR.B12;
    sbit  IDR13_GPIOE_IDR_bit at GPIOE_IDR.B13;
    sbit  IDR14_GPIOE_IDR_bit at GPIOE_IDR.B14;
    sbit  IDR15_GPIOE_IDR_bit at GPIOE_IDR.B15;

sfr unsigned long   volatile GPIOE_ODR            absolute 0x4001180C;
    sbit  ODR0_GPIOE_ODR_bit at GPIOE_ODR.B0;
    sbit  ODR1_GPIOE_ODR_bit at GPIOE_ODR.B1;
    sbit  ODR2_GPIOE_ODR_bit at GPIOE_ODR.B2;
    sbit  ODR3_GPIOE_ODR_bit at GPIOE_ODR.B3;
    sbit  ODR4_GPIOE_ODR_bit at GPIOE_ODR.B4;
    sbit  ODR5_GPIOE_ODR_bit at GPIOE_ODR.B5;
    sbit  ODR6_GPIOE_ODR_bit at GPIOE_ODR.B6;
    sbit  ODR7_GPIOE_ODR_bit at GPIOE_ODR.B7;
    sbit  ODR8_GPIOE_ODR_bit at GPIOE_ODR.B8;
    sbit  ODR9_GPIOE_ODR_bit at GPIOE_ODR.B9;
    sbit  ODR10_GPIOE_ODR_bit at GPIOE_ODR.B10;
    sbit  ODR11_GPIOE_ODR_bit at GPIOE_ODR.B11;
    sbit  ODR12_GPIOE_ODR_bit at GPIOE_ODR.B12;
    sbit  ODR13_GPIOE_ODR_bit at GPIOE_ODR.B13;
    sbit  ODR14_GPIOE_ODR_bit at GPIOE_ODR.B14;
    sbit  ODR15_GPIOE_ODR_bit at GPIOE_ODR.B15;

sfr unsigned long   volatile GPIOE_BSRR           absolute 0x40011810;
    sbit  BS0_GPIOE_BSRR_bit at GPIOE_BSRR.B0;
    sbit  BS1_GPIOE_BSRR_bit at GPIOE_BSRR.B1;
    sbit  BS2_GPIOE_BSRR_bit at GPIOE_BSRR.B2;
    sbit  BS3_GPIOE_BSRR_bit at GPIOE_BSRR.B3;
    sbit  BS4_GPIOE_BSRR_bit at GPIOE_BSRR.B4;
    sbit  BS5_GPIOE_BSRR_bit at GPIOE_BSRR.B5;
    sbit  BS6_GPIOE_BSRR_bit at GPIOE_BSRR.B6;
    sbit  BS7_GPIOE_BSRR_bit at GPIOE_BSRR.B7;
    sbit  BS8_GPIOE_BSRR_bit at GPIOE_BSRR.B8;
    sbit  BS9_GPIOE_BSRR_bit at GPIOE_BSRR.B9;
    sbit  BS10_GPIOE_BSRR_bit at GPIOE_BSRR.B10;
    sbit  BS11_GPIOE_BSRR_bit at GPIOE_BSRR.B11;
    sbit  BS12_GPIOE_BSRR_bit at GPIOE_BSRR.B12;
    sbit  BS13_GPIOE_BSRR_bit at GPIOE_BSRR.B13;
    sbit  BS14_GPIOE_BSRR_bit at GPIOE_BSRR.B14;
    sbit  BS15_GPIOE_BSRR_bit at GPIOE_BSRR.B15;
    sbit  BR0_GPIOE_BSRR_bit at GPIOE_BSRR.B16;
    sbit  BR1_GPIOE_BSRR_bit at GPIOE_BSRR.B17;
    sbit  BR2_GPIOE_BSRR_bit at GPIOE_BSRR.B18;
    sbit  BR3_GPIOE_BSRR_bit at GPIOE_BSRR.B19;
    sbit  BR4_GPIOE_BSRR_bit at GPIOE_BSRR.B20;
    sbit  BR5_GPIOE_BSRR_bit at GPIOE_BSRR.B21;
    sbit  BR6_GPIOE_BSRR_bit at GPIOE_BSRR.B22;
    sbit  BR7_GPIOE_BSRR_bit at GPIOE_BSRR.B23;
    sbit  BR8_GPIOE_BSRR_bit at GPIOE_BSRR.B24;
    sbit  BR9_GPIOE_BSRR_bit at GPIOE_BSRR.B25;
    sbit  BR10_GPIOE_BSRR_bit at GPIOE_BSRR.B26;
    sbit  BR11_GPIOE_BSRR_bit at GPIOE_BSRR.B27;
    sbit  BR12_GPIOE_BSRR_bit at GPIOE_BSRR.B28;
    sbit  BR13_GPIOE_BSRR_bit at GPIOE_BSRR.B29;
    sbit  BR14_GPIOE_BSRR_bit at GPIOE_BSRR.B30;
    sbit  BR15_GPIOE_BSRR_bit at GPIOE_BSRR.B31;

sfr unsigned long   volatile GPIOE_BRR            absolute 0x40011814;
    sbit  BR0_GPIOE_BRR_bit at GPIOE_BRR.B0;
    sbit  BR1_GPIOE_BRR_bit at GPIOE_BRR.B1;
    sbit  BR2_GPIOE_BRR_bit at GPIOE_BRR.B2;
    sbit  BR3_GPIOE_BRR_bit at GPIOE_BRR.B3;
    sbit  BR4_GPIOE_BRR_bit at GPIOE_BRR.B4;
    sbit  BR5_GPIOE_BRR_bit at GPIOE_BRR.B5;
    sbit  BR6_GPIOE_BRR_bit at GPIOE_BRR.B6;
    sbit  BR7_GPIOE_BRR_bit at GPIOE_BRR.B7;
    sbit  BR8_GPIOE_BRR_bit at GPIOE_BRR.B8;
    sbit  BR9_GPIOE_BRR_bit at GPIOE_BRR.B9;
    sbit  BR10_GPIOE_BRR_bit at GPIOE_BRR.B10;
    sbit  BR11_GPIOE_BRR_bit at GPIOE_BRR.B11;
    sbit  BR12_GPIOE_BRR_bit at GPIOE_BRR.B12;
    sbit  BR13_GPIOE_BRR_bit at GPIOE_BRR.B13;
    sbit  BR14_GPIOE_BRR_bit at GPIOE_BRR.B14;
    sbit  BR15_GPIOE_BRR_bit at GPIOE_BRR.B15;

sfr unsigned long   volatile GPIOE_LCKR           absolute 0x40011818;
    sbit  LCK0_GPIOE_LCKR_bit at GPIOE_LCKR.B0;
    sbit  LCK1_GPIOE_LCKR_bit at GPIOE_LCKR.B1;
    sbit  LCK2_GPIOE_LCKR_bit at GPIOE_LCKR.B2;
    sbit  LCK3_GPIOE_LCKR_bit at GPIOE_LCKR.B3;
    sbit  LCK4_GPIOE_LCKR_bit at GPIOE_LCKR.B4;
    sbit  LCK5_GPIOE_LCKR_bit at GPIOE_LCKR.B5;
    sbit  LCK6_GPIOE_LCKR_bit at GPIOE_LCKR.B6;
    sbit  LCK7_GPIOE_LCKR_bit at GPIOE_LCKR.B7;
    sbit  LCK8_GPIOE_LCKR_bit at GPIOE_LCKR.B8;
    sbit  LCK9_GPIOE_LCKR_bit at GPIOE_LCKR.B9;
    sbit  LCK10_GPIOE_LCKR_bit at GPIOE_LCKR.B10;
    sbit  LCK11_GPIOE_LCKR_bit at GPIOE_LCKR.B11;
    sbit  LCK12_GPIOE_LCKR_bit at GPIOE_LCKR.B12;
    sbit  LCK13_GPIOE_LCKR_bit at GPIOE_LCKR.B13;
    sbit  LCK14_GPIOE_LCKR_bit at GPIOE_LCKR.B14;
    sbit  LCK15_GPIOE_LCKR_bit at GPIOE_LCKR.B15;
    sbit  LCKK_GPIOE_LCKR_bit at GPIOE_LCKR.B16;

sfr unsigned long   volatile GPIOF_BASE           absolute 0x40011C00;
sfr unsigned long   volatile GPIOF_CRL            absolute 0x40011C00;
    sbit  MODE00_GPIOF_CRL_bit at GPIOF_CRL.B0;
    sbit  MODE01_GPIOF_CRL_bit at GPIOF_CRL.B1;
    sbit  CNF00_GPIOF_CRL_bit at GPIOF_CRL.B2;
    sbit  CNF01_GPIOF_CRL_bit at GPIOF_CRL.B3;
    sbit  MODE10_GPIOF_CRL_bit at GPIOF_CRL.B4;
    sbit  MODE11_GPIOF_CRL_bit at GPIOF_CRL.B5;
    sbit  CNF10_GPIOF_CRL_bit at GPIOF_CRL.B6;
    sbit  CNF11_GPIOF_CRL_bit at GPIOF_CRL.B7;
    sbit  MODE20_GPIOF_CRL_bit at GPIOF_CRL.B8;
    sbit  MODE21_GPIOF_CRL_bit at GPIOF_CRL.B9;
    sbit  CNF20_GPIOF_CRL_bit at GPIOF_CRL.B10;
    sbit  CNF21_GPIOF_CRL_bit at GPIOF_CRL.B11;
    sbit  MODE30_GPIOF_CRL_bit at GPIOF_CRL.B12;
    sbit  MODE31_GPIOF_CRL_bit at GPIOF_CRL.B13;
    sbit  CNF30_GPIOF_CRL_bit at GPIOF_CRL.B14;
    sbit  CNF31_GPIOF_CRL_bit at GPIOF_CRL.B15;
    sbit  MODE40_GPIOF_CRL_bit at GPIOF_CRL.B16;
    sbit  MODE41_GPIOF_CRL_bit at GPIOF_CRL.B17;
    sbit  CNF40_GPIOF_CRL_bit at GPIOF_CRL.B18;
    sbit  CNF41_GPIOF_CRL_bit at GPIOF_CRL.B19;
    sbit  MODE50_GPIOF_CRL_bit at GPIOF_CRL.B20;
    sbit  MODE51_GPIOF_CRL_bit at GPIOF_CRL.B21;
    sbit  CNF50_GPIOF_CRL_bit at GPIOF_CRL.B22;
    sbit  CNF51_GPIOF_CRL_bit at GPIOF_CRL.B23;
    sbit  MODE60_GPIOF_CRL_bit at GPIOF_CRL.B24;
    sbit  MODE61_GPIOF_CRL_bit at GPIOF_CRL.B25;
    sbit  CNF60_GPIOF_CRL_bit at GPIOF_CRL.B26;
    sbit  CNF61_GPIOF_CRL_bit at GPIOF_CRL.B27;
    sbit  MODE70_GPIOF_CRL_bit at GPIOF_CRL.B28;
    sbit  MODE71_GPIOF_CRL_bit at GPIOF_CRL.B29;
    sbit  CNF70_GPIOF_CRL_bit at GPIOF_CRL.B30;
    sbit  CNF71_GPIOF_CRL_bit at GPIOF_CRL.B31;

sfr unsigned long   volatile GPIOF_CRH            absolute 0x40011C04;
    sbit  MODE80_GPIOF_CRH_bit at GPIOF_CRH.B0;
    sbit  MODE81_GPIOF_CRH_bit at GPIOF_CRH.B1;
    sbit  CNF80_GPIOF_CRH_bit at GPIOF_CRH.B2;
    sbit  CNF81_GPIOF_CRH_bit at GPIOF_CRH.B3;
    sbit  MODE90_GPIOF_CRH_bit at GPIOF_CRH.B4;
    sbit  MODE91_GPIOF_CRH_bit at GPIOF_CRH.B5;
    sbit  CNF90_GPIOF_CRH_bit at GPIOF_CRH.B6;
    sbit  CNF91_GPIOF_CRH_bit at GPIOF_CRH.B7;
    sbit  MODE100_GPIOF_CRH_bit at GPIOF_CRH.B8;
    sbit  MODE101_GPIOF_CRH_bit at GPIOF_CRH.B9;
    sbit  CNF100_GPIOF_CRH_bit at GPIOF_CRH.B10;
    sbit  CNF101_GPIOF_CRH_bit at GPIOF_CRH.B11;
    sbit  MODE110_GPIOF_CRH_bit at GPIOF_CRH.B12;
    sbit  MODE111_GPIOF_CRH_bit at GPIOF_CRH.B13;
    sbit  CNF110_GPIOF_CRH_bit at GPIOF_CRH.B14;
    sbit  CNF111_GPIOF_CRH_bit at GPIOF_CRH.B15;
    sbit  MODE120_GPIOF_CRH_bit at GPIOF_CRH.B16;
    sbit  MODE121_GPIOF_CRH_bit at GPIOF_CRH.B17;
    sbit  CNF120_GPIOF_CRH_bit at GPIOF_CRH.B18;
    sbit  CNF121_GPIOF_CRH_bit at GPIOF_CRH.B19;
    sbit  MODE130_GPIOF_CRH_bit at GPIOF_CRH.B20;
    sbit  MODE131_GPIOF_CRH_bit at GPIOF_CRH.B21;
    sbit  CNF130_GPIOF_CRH_bit at GPIOF_CRH.B22;
    sbit  CNF131_GPIOF_CRH_bit at GPIOF_CRH.B23;
    sbit  MODE140_GPIOF_CRH_bit at GPIOF_CRH.B24;
    sbit  MODE141_GPIOF_CRH_bit at GPIOF_CRH.B25;
    sbit  CNF140_GPIOF_CRH_bit at GPIOF_CRH.B26;
    sbit  CNF141_GPIOF_CRH_bit at GPIOF_CRH.B27;
    sbit  MODE150_GPIOF_CRH_bit at GPIOF_CRH.B28;
    sbit  MODE151_GPIOF_CRH_bit at GPIOF_CRH.B29;
    sbit  CNF150_GPIOF_CRH_bit at GPIOF_CRH.B30;
    sbit  CNF151_GPIOF_CRH_bit at GPIOF_CRH.B31;

sfr unsigned long   volatile GPIOF_IDR            absolute 0x40011C08;
    sbit  IDR0_GPIOF_IDR_bit at GPIOF_IDR.B0;
    sbit  IDR1_GPIOF_IDR_bit at GPIOF_IDR.B1;
    sbit  IDR2_GPIOF_IDR_bit at GPIOF_IDR.B2;
    sbit  IDR3_GPIOF_IDR_bit at GPIOF_IDR.B3;
    sbit  IDR4_GPIOF_IDR_bit at GPIOF_IDR.B4;
    sbit  IDR5_GPIOF_IDR_bit at GPIOF_IDR.B5;
    sbit  IDR6_GPIOF_IDR_bit at GPIOF_IDR.B6;
    sbit  IDR7_GPIOF_IDR_bit at GPIOF_IDR.B7;
    sbit  IDR8_GPIOF_IDR_bit at GPIOF_IDR.B8;
    sbit  IDR9_GPIOF_IDR_bit at GPIOF_IDR.B9;
    sbit  IDR10_GPIOF_IDR_bit at GPIOF_IDR.B10;
    sbit  IDR11_GPIOF_IDR_bit at GPIOF_IDR.B11;
    sbit  IDR12_GPIOF_IDR_bit at GPIOF_IDR.B12;
    sbit  IDR13_GPIOF_IDR_bit at GPIOF_IDR.B13;
    sbit  IDR14_GPIOF_IDR_bit at GPIOF_IDR.B14;
    sbit  IDR15_GPIOF_IDR_bit at GPIOF_IDR.B15;

sfr unsigned long   volatile GPIOF_ODR            absolute 0x40011C0C;
    sbit  ODR0_GPIOF_ODR_bit at GPIOF_ODR.B0;
    sbit  ODR1_GPIOF_ODR_bit at GPIOF_ODR.B1;
    sbit  ODR2_GPIOF_ODR_bit at GPIOF_ODR.B2;
    sbit  ODR3_GPIOF_ODR_bit at GPIOF_ODR.B3;
    sbit  ODR4_GPIOF_ODR_bit at GPIOF_ODR.B4;
    sbit  ODR5_GPIOF_ODR_bit at GPIOF_ODR.B5;
    sbit  ODR6_GPIOF_ODR_bit at GPIOF_ODR.B6;
    sbit  ODR7_GPIOF_ODR_bit at GPIOF_ODR.B7;
    sbit  ODR8_GPIOF_ODR_bit at GPIOF_ODR.B8;
    sbit  ODR9_GPIOF_ODR_bit at GPIOF_ODR.B9;
    sbit  ODR10_GPIOF_ODR_bit at GPIOF_ODR.B10;
    sbit  ODR11_GPIOF_ODR_bit at GPIOF_ODR.B11;
    sbit  ODR12_GPIOF_ODR_bit at GPIOF_ODR.B12;
    sbit  ODR13_GPIOF_ODR_bit at GPIOF_ODR.B13;
    sbit  ODR14_GPIOF_ODR_bit at GPIOF_ODR.B14;
    sbit  ODR15_GPIOF_ODR_bit at GPIOF_ODR.B15;

sfr unsigned long   volatile GPIOF_BSRR           absolute 0x40011C10;
    sbit  BS0_GPIOF_BSRR_bit at GPIOF_BSRR.B0;
    sbit  BS1_GPIOF_BSRR_bit at GPIOF_BSRR.B1;
    sbit  BS2_GPIOF_BSRR_bit at GPIOF_BSRR.B2;
    sbit  BS3_GPIOF_BSRR_bit at GPIOF_BSRR.B3;
    sbit  BS4_GPIOF_BSRR_bit at GPIOF_BSRR.B4;
    sbit  BS5_GPIOF_BSRR_bit at GPIOF_BSRR.B5;
    sbit  BS6_GPIOF_BSRR_bit at GPIOF_BSRR.B6;
    sbit  BS7_GPIOF_BSRR_bit at GPIOF_BSRR.B7;
    sbit  BS8_GPIOF_BSRR_bit at GPIOF_BSRR.B8;
    sbit  BS9_GPIOF_BSRR_bit at GPIOF_BSRR.B9;
    sbit  BS10_GPIOF_BSRR_bit at GPIOF_BSRR.B10;
    sbit  BS11_GPIOF_BSRR_bit at GPIOF_BSRR.B11;
    sbit  BS12_GPIOF_BSRR_bit at GPIOF_BSRR.B12;
    sbit  BS13_GPIOF_BSRR_bit at GPIOF_BSRR.B13;
    sbit  BS14_GPIOF_BSRR_bit at GPIOF_BSRR.B14;
    sbit  BS15_GPIOF_BSRR_bit at GPIOF_BSRR.B15;
    sbit  BR0_GPIOF_BSRR_bit at GPIOF_BSRR.B16;
    sbit  BR1_GPIOF_BSRR_bit at GPIOF_BSRR.B17;
    sbit  BR2_GPIOF_BSRR_bit at GPIOF_BSRR.B18;
    sbit  BR3_GPIOF_BSRR_bit at GPIOF_BSRR.B19;
    sbit  BR4_GPIOF_BSRR_bit at GPIOF_BSRR.B20;
    sbit  BR5_GPIOF_BSRR_bit at GPIOF_BSRR.B21;
    sbit  BR6_GPIOF_BSRR_bit at GPIOF_BSRR.B22;
    sbit  BR7_GPIOF_BSRR_bit at GPIOF_BSRR.B23;
    sbit  BR8_GPIOF_BSRR_bit at GPIOF_BSRR.B24;
    sbit  BR9_GPIOF_BSRR_bit at GPIOF_BSRR.B25;
    sbit  BR10_GPIOF_BSRR_bit at GPIOF_BSRR.B26;
    sbit  BR11_GPIOF_BSRR_bit at GPIOF_BSRR.B27;
    sbit  BR12_GPIOF_BSRR_bit at GPIOF_BSRR.B28;
    sbit  BR13_GPIOF_BSRR_bit at GPIOF_BSRR.B29;
    sbit  BR14_GPIOF_BSRR_bit at GPIOF_BSRR.B30;
    sbit  BR15_GPIOF_BSRR_bit at GPIOF_BSRR.B31;

sfr unsigned long   volatile GPIOF_BRR            absolute 0x40011C14;
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

sfr unsigned long   volatile GPIOF_LCKR           absolute 0x40011C18;
    sbit  LCK0_GPIOF_LCKR_bit at GPIOF_LCKR.B0;
    sbit  LCK1_GPIOF_LCKR_bit at GPIOF_LCKR.B1;
    sbit  LCK2_GPIOF_LCKR_bit at GPIOF_LCKR.B2;
    sbit  LCK3_GPIOF_LCKR_bit at GPIOF_LCKR.B3;
    sbit  LCK4_GPIOF_LCKR_bit at GPIOF_LCKR.B4;
    sbit  LCK5_GPIOF_LCKR_bit at GPIOF_LCKR.B5;
    sbit  LCK6_GPIOF_LCKR_bit at GPIOF_LCKR.B6;
    sbit  LCK7_GPIOF_LCKR_bit at GPIOF_LCKR.B7;
    sbit  LCK8_GPIOF_LCKR_bit at GPIOF_LCKR.B8;
    sbit  LCK9_GPIOF_LCKR_bit at GPIOF_LCKR.B9;
    sbit  LCK10_GPIOF_LCKR_bit at GPIOF_LCKR.B10;
    sbit  LCK11_GPIOF_LCKR_bit at GPIOF_LCKR.B11;
    sbit  LCK12_GPIOF_LCKR_bit at GPIOF_LCKR.B12;
    sbit  LCK13_GPIOF_LCKR_bit at GPIOF_LCKR.B13;
    sbit  LCK14_GPIOF_LCKR_bit at GPIOF_LCKR.B14;
    sbit  LCK15_GPIOF_LCKR_bit at GPIOF_LCKR.B15;
    sbit  LCKK_GPIOF_LCKR_bit at GPIOF_LCKR.B16;

sfr unsigned long   volatile GPIOG_BASE           absolute 0x40012000;
sfr unsigned long   volatile GPIOG_CRL            absolute 0x40012000;
    sbit  MODE00_GPIOG_CRL_bit at GPIOG_CRL.B0;
    sbit  MODE01_GPIOG_CRL_bit at GPIOG_CRL.B1;
    sbit  CNF00_GPIOG_CRL_bit at GPIOG_CRL.B2;
    sbit  CNF01_GPIOG_CRL_bit at GPIOG_CRL.B3;
    sbit  MODE10_GPIOG_CRL_bit at GPIOG_CRL.B4;
    sbit  MODE11_GPIOG_CRL_bit at GPIOG_CRL.B5;
    sbit  CNF10_GPIOG_CRL_bit at GPIOG_CRL.B6;
    sbit  CNF11_GPIOG_CRL_bit at GPIOG_CRL.B7;
    sbit  MODE20_GPIOG_CRL_bit at GPIOG_CRL.B8;
    sbit  MODE21_GPIOG_CRL_bit at GPIOG_CRL.B9;
    sbit  CNF20_GPIOG_CRL_bit at GPIOG_CRL.B10;
    sbit  CNF21_GPIOG_CRL_bit at GPIOG_CRL.B11;
    sbit  MODE30_GPIOG_CRL_bit at GPIOG_CRL.B12;
    sbit  MODE31_GPIOG_CRL_bit at GPIOG_CRL.B13;
    sbit  CNF30_GPIOG_CRL_bit at GPIOG_CRL.B14;
    sbit  CNF31_GPIOG_CRL_bit at GPIOG_CRL.B15;
    sbit  MODE40_GPIOG_CRL_bit at GPIOG_CRL.B16;
    sbit  MODE41_GPIOG_CRL_bit at GPIOG_CRL.B17;
    sbit  CNF40_GPIOG_CRL_bit at GPIOG_CRL.B18;
    sbit  CNF41_GPIOG_CRL_bit at GPIOG_CRL.B19;
    sbit  MODE50_GPIOG_CRL_bit at GPIOG_CRL.B20;
    sbit  MODE51_GPIOG_CRL_bit at GPIOG_CRL.B21;
    sbit  CNF50_GPIOG_CRL_bit at GPIOG_CRL.B22;
    sbit  CNF51_GPIOG_CRL_bit at GPIOG_CRL.B23;
    sbit  MODE60_GPIOG_CRL_bit at GPIOG_CRL.B24;
    sbit  MODE61_GPIOG_CRL_bit at GPIOG_CRL.B25;
    sbit  CNF60_GPIOG_CRL_bit at GPIOG_CRL.B26;
    sbit  CNF61_GPIOG_CRL_bit at GPIOG_CRL.B27;
    sbit  MODE70_GPIOG_CRL_bit at GPIOG_CRL.B28;
    sbit  MODE71_GPIOG_CRL_bit at GPIOG_CRL.B29;
    sbit  CNF70_GPIOG_CRL_bit at GPIOG_CRL.B30;
    sbit  CNF71_GPIOG_CRL_bit at GPIOG_CRL.B31;

sfr unsigned long   volatile GPIOG_CRH            absolute 0x40012004;
    sbit  MODE80_GPIOG_CRH_bit at GPIOG_CRH.B0;
    sbit  MODE81_GPIOG_CRH_bit at GPIOG_CRH.B1;
    sbit  CNF80_GPIOG_CRH_bit at GPIOG_CRH.B2;
    sbit  CNF81_GPIOG_CRH_bit at GPIOG_CRH.B3;
    sbit  MODE90_GPIOG_CRH_bit at GPIOG_CRH.B4;
    sbit  MODE91_GPIOG_CRH_bit at GPIOG_CRH.B5;
    sbit  CNF90_GPIOG_CRH_bit at GPIOG_CRH.B6;
    sbit  CNF91_GPIOG_CRH_bit at GPIOG_CRH.B7;
    sbit  MODE100_GPIOG_CRH_bit at GPIOG_CRH.B8;
    sbit  MODE101_GPIOG_CRH_bit at GPIOG_CRH.B9;
    sbit  CNF100_GPIOG_CRH_bit at GPIOG_CRH.B10;
    sbit  CNF101_GPIOG_CRH_bit at GPIOG_CRH.B11;
    sbit  MODE110_GPIOG_CRH_bit at GPIOG_CRH.B12;
    sbit  MODE111_GPIOG_CRH_bit at GPIOG_CRH.B13;
    sbit  CNF110_GPIOG_CRH_bit at GPIOG_CRH.B14;
    sbit  CNF111_GPIOG_CRH_bit at GPIOG_CRH.B15;
    sbit  MODE120_GPIOG_CRH_bit at GPIOG_CRH.B16;
    sbit  MODE121_GPIOG_CRH_bit at GPIOG_CRH.B17;
    sbit  CNF120_GPIOG_CRH_bit at GPIOG_CRH.B18;
    sbit  CNF121_GPIOG_CRH_bit at GPIOG_CRH.B19;
    sbit  MODE130_GPIOG_CRH_bit at GPIOG_CRH.B20;
    sbit  MODE131_GPIOG_CRH_bit at GPIOG_CRH.B21;
    sbit  CNF130_GPIOG_CRH_bit at GPIOG_CRH.B22;
    sbit  CNF131_GPIOG_CRH_bit at GPIOG_CRH.B23;
    sbit  MODE140_GPIOG_CRH_bit at GPIOG_CRH.B24;
    sbit  MODE141_GPIOG_CRH_bit at GPIOG_CRH.B25;
    sbit  CNF140_GPIOG_CRH_bit at GPIOG_CRH.B26;
    sbit  CNF141_GPIOG_CRH_bit at GPIOG_CRH.B27;
    sbit  MODE150_GPIOG_CRH_bit at GPIOG_CRH.B28;
    sbit  MODE151_GPIOG_CRH_bit at GPIOG_CRH.B29;
    sbit  CNF150_GPIOG_CRH_bit at GPIOG_CRH.B30;
    sbit  CNF151_GPIOG_CRH_bit at GPIOG_CRH.B31;

sfr unsigned long   volatile GPIOG_IDR            absolute 0x40012008;
    sbit  IDR0_GPIOG_IDR_bit at GPIOG_IDR.B0;
    sbit  IDR1_GPIOG_IDR_bit at GPIOG_IDR.B1;
    sbit  IDR2_GPIOG_IDR_bit at GPIOG_IDR.B2;
    sbit  IDR3_GPIOG_IDR_bit at GPIOG_IDR.B3;
    sbit  IDR4_GPIOG_IDR_bit at GPIOG_IDR.B4;
    sbit  IDR5_GPIOG_IDR_bit at GPIOG_IDR.B5;
    sbit  IDR6_GPIOG_IDR_bit at GPIOG_IDR.B6;
    sbit  IDR7_GPIOG_IDR_bit at GPIOG_IDR.B7;
    sbit  IDR8_GPIOG_IDR_bit at GPIOG_IDR.B8;
    sbit  IDR9_GPIOG_IDR_bit at GPIOG_IDR.B9;
    sbit  IDR10_GPIOG_IDR_bit at GPIOG_IDR.B10;
    sbit  IDR11_GPIOG_IDR_bit at GPIOG_IDR.B11;
    sbit  IDR12_GPIOG_IDR_bit at GPIOG_IDR.B12;
    sbit  IDR13_GPIOG_IDR_bit at GPIOG_IDR.B13;
    sbit  IDR14_GPIOG_IDR_bit at GPIOG_IDR.B14;
    sbit  IDR15_GPIOG_IDR_bit at GPIOG_IDR.B15;

sfr unsigned long   volatile GPIOG_ODR            absolute 0x4001200C;
    sbit  ODR0_GPIOG_ODR_bit at GPIOG_ODR.B0;
    sbit  ODR1_GPIOG_ODR_bit at GPIOG_ODR.B1;
    sbit  ODR2_GPIOG_ODR_bit at GPIOG_ODR.B2;
    sbit  ODR3_GPIOG_ODR_bit at GPIOG_ODR.B3;
    sbit  ODR4_GPIOG_ODR_bit at GPIOG_ODR.B4;
    sbit  ODR5_GPIOG_ODR_bit at GPIOG_ODR.B5;
    sbit  ODR6_GPIOG_ODR_bit at GPIOG_ODR.B6;
    sbit  ODR7_GPIOG_ODR_bit at GPIOG_ODR.B7;
    sbit  ODR8_GPIOG_ODR_bit at GPIOG_ODR.B8;
    sbit  ODR9_GPIOG_ODR_bit at GPIOG_ODR.B9;
    sbit  ODR10_GPIOG_ODR_bit at GPIOG_ODR.B10;
    sbit  ODR11_GPIOG_ODR_bit at GPIOG_ODR.B11;
    sbit  ODR12_GPIOG_ODR_bit at GPIOG_ODR.B12;
    sbit  ODR13_GPIOG_ODR_bit at GPIOG_ODR.B13;
    sbit  ODR14_GPIOG_ODR_bit at GPIOG_ODR.B14;
    sbit  ODR15_GPIOG_ODR_bit at GPIOG_ODR.B15;

sfr unsigned long   volatile GPIOG_BSRR           absolute 0x40012010;
    sbit  BS0_GPIOG_BSRR_bit at GPIOG_BSRR.B0;
    sbit  BS1_GPIOG_BSRR_bit at GPIOG_BSRR.B1;
    sbit  BS2_GPIOG_BSRR_bit at GPIOG_BSRR.B2;
    sbit  BS3_GPIOG_BSRR_bit at GPIOG_BSRR.B3;
    sbit  BS4_GPIOG_BSRR_bit at GPIOG_BSRR.B4;
    sbit  BS5_GPIOG_BSRR_bit at GPIOG_BSRR.B5;
    sbit  BS6_GPIOG_BSRR_bit at GPIOG_BSRR.B6;
    sbit  BS7_GPIOG_BSRR_bit at GPIOG_BSRR.B7;
    sbit  BS8_GPIOG_BSRR_bit at GPIOG_BSRR.B8;
    sbit  BS9_GPIOG_BSRR_bit at GPIOG_BSRR.B9;
    sbit  BS10_GPIOG_BSRR_bit at GPIOG_BSRR.B10;
    sbit  BS11_GPIOG_BSRR_bit at GPIOG_BSRR.B11;
    sbit  BS12_GPIOG_BSRR_bit at GPIOG_BSRR.B12;
    sbit  BS13_GPIOG_BSRR_bit at GPIOG_BSRR.B13;
    sbit  BS14_GPIOG_BSRR_bit at GPIOG_BSRR.B14;
    sbit  BS15_GPIOG_BSRR_bit at GPIOG_BSRR.B15;
    sbit  BR0_GPIOG_BSRR_bit at GPIOG_BSRR.B16;
    sbit  BR1_GPIOG_BSRR_bit at GPIOG_BSRR.B17;
    sbit  BR2_GPIOG_BSRR_bit at GPIOG_BSRR.B18;
    sbit  BR3_GPIOG_BSRR_bit at GPIOG_BSRR.B19;
    sbit  BR4_GPIOG_BSRR_bit at GPIOG_BSRR.B20;
    sbit  BR5_GPIOG_BSRR_bit at GPIOG_BSRR.B21;
    sbit  BR6_GPIOG_BSRR_bit at GPIOG_BSRR.B22;
    sbit  BR7_GPIOG_BSRR_bit at GPIOG_BSRR.B23;
    sbit  BR8_GPIOG_BSRR_bit at GPIOG_BSRR.B24;
    sbit  BR9_GPIOG_BSRR_bit at GPIOG_BSRR.B25;
    sbit  BR10_GPIOG_BSRR_bit at GPIOG_BSRR.B26;
    sbit  BR11_GPIOG_BSRR_bit at GPIOG_BSRR.B27;
    sbit  BR12_GPIOG_BSRR_bit at GPIOG_BSRR.B28;
    sbit  BR13_GPIOG_BSRR_bit at GPIOG_BSRR.B29;
    sbit  BR14_GPIOG_BSRR_bit at GPIOG_BSRR.B30;
    sbit  BR15_GPIOG_BSRR_bit at GPIOG_BSRR.B31;

sfr unsigned long   volatile GPIOG_BRR            absolute 0x40012014;
    sbit  BR0_GPIOG_BRR_bit at GPIOG_BRR.B0;
    sbit  BR1_GPIOG_BRR_bit at GPIOG_BRR.B1;
    sbit  BR2_GPIOG_BRR_bit at GPIOG_BRR.B2;
    sbit  BR3_GPIOG_BRR_bit at GPIOG_BRR.B3;
    sbit  BR4_GPIOG_BRR_bit at GPIOG_BRR.B4;
    sbit  BR5_GPIOG_BRR_bit at GPIOG_BRR.B5;
    sbit  BR6_GPIOG_BRR_bit at GPIOG_BRR.B6;
    sbit  BR7_GPIOG_BRR_bit at GPIOG_BRR.B7;
    sbit  BR8_GPIOG_BRR_bit at GPIOG_BRR.B8;
    sbit  BR9_GPIOG_BRR_bit at GPIOG_BRR.B9;
    sbit  BR10_GPIOG_BRR_bit at GPIOG_BRR.B10;
    sbit  BR11_GPIOG_BRR_bit at GPIOG_BRR.B11;
    sbit  BR12_GPIOG_BRR_bit at GPIOG_BRR.B12;
    sbit  BR13_GPIOG_BRR_bit at GPIOG_BRR.B13;
    sbit  BR14_GPIOG_BRR_bit at GPIOG_BRR.B14;
    sbit  BR15_GPIOG_BRR_bit at GPIOG_BRR.B15;

sfr unsigned long   volatile GPIOG_LCKR           absolute 0x40012018;
    sbit  LCK0_GPIOG_LCKR_bit at GPIOG_LCKR.B0;
    sbit  LCK1_GPIOG_LCKR_bit at GPIOG_LCKR.B1;
    sbit  LCK2_GPIOG_LCKR_bit at GPIOG_LCKR.B2;
    sbit  LCK3_GPIOG_LCKR_bit at GPIOG_LCKR.B3;
    sbit  LCK4_GPIOG_LCKR_bit at GPIOG_LCKR.B4;
    sbit  LCK5_GPIOG_LCKR_bit at GPIOG_LCKR.B5;
    sbit  LCK6_GPIOG_LCKR_bit at GPIOG_LCKR.B6;
    sbit  LCK7_GPIOG_LCKR_bit at GPIOG_LCKR.B7;
    sbit  LCK8_GPIOG_LCKR_bit at GPIOG_LCKR.B8;
    sbit  LCK9_GPIOG_LCKR_bit at GPIOG_LCKR.B9;
    sbit  LCK10_GPIOG_LCKR_bit at GPIOG_LCKR.B10;
    sbit  LCK11_GPIOG_LCKR_bit at GPIOG_LCKR.B11;
    sbit  LCK12_GPIOG_LCKR_bit at GPIOG_LCKR.B12;
    sbit  LCK13_GPIOG_LCKR_bit at GPIOG_LCKR.B13;
    sbit  LCK14_GPIOG_LCKR_bit at GPIOG_LCKR.B14;
    sbit  LCK15_GPIOG_LCKR_bit at GPIOG_LCKR.B15;
    sbit  LCKK_GPIOG_LCKR_bit at GPIOG_LCKR.B16;

sfr unsigned long   volatile AFIO_EVCR            absolute 0x40010000;
    const register unsigned short int PIN0 = 0;
    sbit  PIN0_bit at AFIO_EVCR.B0;
    const register unsigned short int PIN1 = 1;
    sbit  PIN1_bit at AFIO_EVCR.B1;
    const register unsigned short int PIN2 = 2;
    sbit  PIN2_bit at AFIO_EVCR.B2;
    const register unsigned short int PIN3 = 3;
    sbit  PIN3_bit at AFIO_EVCR.B3;
    const register unsigned short int PORT0 = 4;
    sbit  PORT0_bit at AFIO_EVCR.B4;
    const register unsigned short int PORT1 = 5;
    sbit  PORT1_bit at AFIO_EVCR.B5;
    const register unsigned short int PORT2 = 6;
    sbit  PORT2_bit at AFIO_EVCR.B6;
    const register unsigned short int EVOE = 7;
    sbit  EVOE_bit at AFIO_EVCR.B7;

sfr unsigned long   volatile AFIO_MAPR            absolute 0x40010004;
    const register unsigned short int SPI1_REMAP = 0;
    sbit  SPI1_REMAP_bit at AFIO_MAPR.B0;
    const register unsigned short int I2C1_REMAP = 1;
    sbit  I2C1_REMAP_bit at AFIO_MAPR.B1;
    const register unsigned short int USART1_REMAP = 2;
    sbit  USART1_REMAP_bit at AFIO_MAPR.B2;
    const register unsigned short int USART2_REMAP = 3;
    sbit  USART2_REMAP_bit at AFIO_MAPR.B3;
    const register unsigned short int USART3_REMAP0 = 4;
    sbit  USART3_REMAP0_bit at AFIO_MAPR.B4;
    const register unsigned short int USART3_REMAP1 = 5;
    sbit  USART3_REMAP1_bit at AFIO_MAPR.B5;
    const register unsigned short int TIM1_REMAP0 = 6;
    sbit  TIM1_REMAP0_bit at AFIO_MAPR.B6;
    const register unsigned short int TIM1_REMAP1 = 7;
    sbit  TIM1_REMAP1_bit at AFIO_MAPR.B7;
    const register unsigned short int TIM2_REMAP0 = 8;
    sbit  TIM2_REMAP0_bit at AFIO_MAPR.B8;
    const register unsigned short int TIM2_REMAP1 = 9;
    sbit  TIM2_REMAP1_bit at AFIO_MAPR.B9;
    const register unsigned short int TIM3_REMAP0 = 10;
    sbit  TIM3_REMAP0_bit at AFIO_MAPR.B10;
    const register unsigned short int TIM3_REMAP1 = 11;
    sbit  TIM3_REMAP1_bit at AFIO_MAPR.B11;
    const register unsigned short int TIM4_REMAP = 12;
    sbit  TIM4_REMAP_bit at AFIO_MAPR.B12;
    const register unsigned short int PD01_REMAP = 15;
    sbit  PD01_REMAP_bit at AFIO_MAPR.B15;
    const register unsigned short int TIM5CH4_IREMAP = 16;
    sbit  TIM5CH4_IREMAP_bit at AFIO_MAPR.B16;
    const register unsigned short int SWJ_CFG0 = 24;
    sbit  SWJ_CFG0_bit at AFIO_MAPR.B24;
    const register unsigned short int SWJ_CFG1 = 25;
    sbit  SWJ_CFG1_bit at AFIO_MAPR.B25;
    const register unsigned short int SWJ_CFG2 = 26;
    sbit  SWJ_CFG2_bit at AFIO_MAPR.B26;

sfr unsigned long   volatile AFIO_EXTICR1         absolute 0x40010008;
    const register unsigned short int EXTI00 = 0;
    sbit  EXTI00_bit at AFIO_EXTICR1.B0;
    const register unsigned short int EXTI01 = 1;
    sbit  EXTI01_bit at AFIO_EXTICR1.B1;
    const register unsigned short int EXTI02 = 2;
    sbit  EXTI02_bit at AFIO_EXTICR1.B2;
    const register unsigned short int EXTI03 = 3;
    sbit  EXTI03_bit at AFIO_EXTICR1.B3;
    const register unsigned short int EXTI10 = 4;
    sbit  EXTI10_bit at AFIO_EXTICR1.B4;
    const register unsigned short int EXTI11 = 5;
    sbit  EXTI11_bit at AFIO_EXTICR1.B5;
    const register unsigned short int EXTI12 = 6;
    sbit  EXTI12_bit at AFIO_EXTICR1.B6;
    const register unsigned short int EXTI13 = 7;
    sbit  EXTI13_bit at AFIO_EXTICR1.B7;
    const register unsigned short int EXTI20 = 8;
    sbit  EXTI20_bit at AFIO_EXTICR1.B8;
    const register unsigned short int EXTI21 = 9;
    sbit  EXTI21_bit at AFIO_EXTICR1.B9;
    const register unsigned short int EXTI22 = 10;
    sbit  EXTI22_bit at AFIO_EXTICR1.B10;
    const register unsigned short int EXTI23 = 11;
    sbit  EXTI23_bit at AFIO_EXTICR1.B11;
    const register unsigned short int EXTI30 = 12;
    sbit  EXTI30_bit at AFIO_EXTICR1.B12;
    const register unsigned short int EXTI31 = 13;
    sbit  EXTI31_bit at AFIO_EXTICR1.B13;
    const register unsigned short int EXTI32 = 14;
    sbit  EXTI32_bit at AFIO_EXTICR1.B14;
    const register unsigned short int EXTI33 = 15;
    sbit  EXTI33_bit at AFIO_EXTICR1.B15;

sfr unsigned long   volatile AFIO_EXTICR2         absolute 0x4001000C;
    const register unsigned short int EXTI40 = 0;
    sbit  EXTI40_bit at AFIO_EXTICR2.B0;
    const register unsigned short int EXTI41 = 1;
    sbit  EXTI41_bit at AFIO_EXTICR2.B1;
    const register unsigned short int EXTI42 = 2;
    sbit  EXTI42_bit at AFIO_EXTICR2.B2;
    const register unsigned short int EXTI43 = 3;
    sbit  EXTI43_bit at AFIO_EXTICR2.B3;
    const register unsigned short int EXTI50 = 4;
    sbit  EXTI50_bit at AFIO_EXTICR2.B4;
    const register unsigned short int EXTI51 = 5;
    sbit  EXTI51_bit at AFIO_EXTICR2.B5;
    const register unsigned short int EXTI52 = 6;
    sbit  EXTI52_bit at AFIO_EXTICR2.B6;
    const register unsigned short int EXTI53 = 7;
    sbit  EXTI53_bit at AFIO_EXTICR2.B7;
    const register unsigned short int EXTI60 = 8;
    sbit  EXTI60_bit at AFIO_EXTICR2.B8;
    const register unsigned short int EXTI61 = 9;
    sbit  EXTI61_bit at AFIO_EXTICR2.B9;
    const register unsigned short int EXTI62 = 10;
    sbit  EXTI62_bit at AFIO_EXTICR2.B10;
    const register unsigned short int EXTI63 = 11;
    sbit  EXTI63_bit at AFIO_EXTICR2.B11;
    const register unsigned short int EXTI70 = 12;
    sbit  EXTI70_bit at AFIO_EXTICR2.B12;
    const register unsigned short int EXTI71 = 13;
    sbit  EXTI71_bit at AFIO_EXTICR2.B13;
    const register unsigned short int EXTI72 = 14;
    sbit  EXTI72_bit at AFIO_EXTICR2.B14;
    const register unsigned short int EXTI73 = 15;
    sbit  EXTI73_bit at AFIO_EXTICR2.B15;

sfr unsigned long   volatile AFIO_EXTICR3         absolute 0x40010010;
    const register unsigned short int EXTI80 = 0;
    sbit  EXTI80_bit at AFIO_EXTICR3.B0;
    const register unsigned short int EXTI81 = 1;
    sbit  EXTI81_bit at AFIO_EXTICR3.B1;
    const register unsigned short int EXTI82 = 2;
    sbit  EXTI82_bit at AFIO_EXTICR3.B2;
    const register unsigned short int EXTI83 = 3;
    sbit  EXTI83_bit at AFIO_EXTICR3.B3;
    const register unsigned short int EXTI90 = 4;
    sbit  EXTI90_bit at AFIO_EXTICR3.B4;
    const register unsigned short int EXTI91 = 5;
    sbit  EXTI91_bit at AFIO_EXTICR3.B5;
    const register unsigned short int EXTI92 = 6;
    sbit  EXTI92_bit at AFIO_EXTICR3.B6;
    const register unsigned short int EXTI93 = 7;
    sbit  EXTI93_bit at AFIO_EXTICR3.B7;
    const register unsigned short int EXTI100 = 8;
    sbit  EXTI100_bit at AFIO_EXTICR3.B8;
    const register unsigned short int EXTI101 = 9;
    sbit  EXTI101_bit at AFIO_EXTICR3.B9;
    const register unsigned short int EXTI102 = 10;
    sbit  EXTI102_bit at AFIO_EXTICR3.B10;
    const register unsigned short int EXTI103 = 11;
    sbit  EXTI103_bit at AFIO_EXTICR3.B11;
    const register unsigned short int EXTI110 = 12;
    sbit  EXTI110_bit at AFIO_EXTICR3.B12;
    const register unsigned short int EXTI111 = 13;
    sbit  EXTI111_bit at AFIO_EXTICR3.B13;
    const register unsigned short int EXTI112 = 14;
    sbit  EXTI112_bit at AFIO_EXTICR3.B14;
    const register unsigned short int EXTI113 = 15;
    sbit  EXTI113_bit at AFIO_EXTICR3.B15;

sfr unsigned long   volatile AFIO_EXTICR4         absolute 0x40010014;
    const register unsigned short int EXTI120 = 0;
    sbit  EXTI120_bit at AFIO_EXTICR4.B0;
    const register unsigned short int EXTI121 = 1;
    sbit  EXTI121_bit at AFIO_EXTICR4.B1;
    const register unsigned short int EXTI122 = 2;
    sbit  EXTI122_bit at AFIO_EXTICR4.B2;
    const register unsigned short int EXTI123 = 3;
    sbit  EXTI123_bit at AFIO_EXTICR4.B3;
    const register unsigned short int EXTI130 = 4;
    sbit  EXTI130_bit at AFIO_EXTICR4.B4;
    const register unsigned short int EXTI131 = 5;
    sbit  EXTI131_bit at AFIO_EXTICR4.B5;
    const register unsigned short int EXTI132 = 6;
    sbit  EXTI132_bit at AFIO_EXTICR4.B6;
    const register unsigned short int EXTI133 = 7;
    sbit  EXTI133_bit at AFIO_EXTICR4.B7;
    const register unsigned short int EXTI140 = 8;
    sbit  EXTI140_bit at AFIO_EXTICR4.B8;
    const register unsigned short int EXTI141 = 9;
    sbit  EXTI141_bit at AFIO_EXTICR4.B9;
    const register unsigned short int EXTI142 = 10;
    sbit  EXTI142_bit at AFIO_EXTICR4.B10;
    const register unsigned short int EXTI143 = 11;
    sbit  EXTI143_bit at AFIO_EXTICR4.B11;
    const register unsigned short int EXTI150 = 12;
    sbit  EXTI150_bit at AFIO_EXTICR4.B12;
    const register unsigned short int EXTI151 = 13;
    sbit  EXTI151_bit at AFIO_EXTICR4.B13;
    const register unsigned short int EXTI152 = 14;
    sbit  EXTI152_bit at AFIO_EXTICR4.B14;
    const register unsigned short int EXTI153 = 15;
    sbit  EXTI153_bit at AFIO_EXTICR4.B15;

sfr unsigned long   volatile AFIO_MAPR2           absolute 0x4001001C;
    const register unsigned short int TIM15_REMAP = 0;
    sbit  TIM15_REMAP_bit at AFIO_MAPR2.B0;
    const register unsigned short int TIM16_REMAP = 1;
    sbit  TIM16_REMAP_bit at AFIO_MAPR2.B1;
    const register unsigned short int TIM17_REMAP = 2;
    sbit  TIM17_REMAP_bit at AFIO_MAPR2.B2;
    const register unsigned short int TIM13_REMAP = 8;
    sbit  TIM13_REMAP_bit at AFIO_MAPR2.B8;
    const register unsigned short int TIM14_REMAP = 9;
    sbit  TIM14_REMAP_bit at AFIO_MAPR2.B9;
    const register unsigned short int FSMC_NADV = 10;
    sbit  FSMC_NADV_bit at AFIO_MAPR2.B10;
    const register unsigned short int CEC_REMAP = 3;
    sbit  CEC_REMAP_bit at AFIO_MAPR2.B3;
    const register unsigned short int TIM1_DMA_REMAP = 4;
    sbit  TIM1_DMA_REMAP_bit at AFIO_MAPR2.B4;
    const register unsigned short int TIM67_DAC_DMA_REMAP = 11;
    sbit  TIM67_DAC_DMA_REMAP_bit at AFIO_MAPR2.B11;
    const register unsigned short int TIM12_REMAP = 12;
    sbit  TIM12_REMAP_bit at AFIO_MAPR2.B12;
    const register unsigned short int MISC_REMAP = 13;
    sbit  MISC_REMAP_bit at AFIO_MAPR2.B13;

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

sfr unsigned long   volatile EXTI_PR              absolute 0x40010414;
    const register unsigned short int PR0 = 0;
    sbit  PR0_bit at EXTI_PR.B0;
    const register unsigned short int PR1 = 1;
    sbit  PR1_bit at EXTI_PR.B1;
    const register unsigned short int PR2 = 2;
    sbit  PR2_bit at EXTI_PR.B2;
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

sfr unsigned long   volatile DMA1_ISR             absolute 0x40020000;
    const register unsigned short int GIF1 = 0;
    sbit  GIF1_bit at DMA1_ISR.B0;
    const register unsigned short int TCIF1 = 1;
    sbit  TCIF1_bit at DMA1_ISR.B1;
    const register unsigned short int HTIF1 = 2;
    sbit  HTIF1_bit at DMA1_ISR.B2;
    const register unsigned short int TEIF1 = 3;
    sbit  TEIF1_bit at DMA1_ISR.B3;
    const register unsigned short int GIF2 = 4;
    sbit  GIF2_bit at DMA1_ISR.B4;
    const register unsigned short int TCIF2 = 5;
    sbit  TCIF2_bit at DMA1_ISR.B5;
    const register unsigned short int HTIF2 = 6;
    sbit  HTIF2_bit at DMA1_ISR.B6;
    const register unsigned short int TEIF2 = 7;
    sbit  TEIF2_bit at DMA1_ISR.B7;
    const register unsigned short int GIF3 = 8;
    sbit  GIF3_bit at DMA1_ISR.B8;
    const register unsigned short int TCIF3 = 9;
    sbit  TCIF3_bit at DMA1_ISR.B9;
    const register unsigned short int HTIF3 = 10;
    sbit  HTIF3_bit at DMA1_ISR.B10;
    const register unsigned short int TEIF3 = 11;
    sbit  TEIF3_bit at DMA1_ISR.B11;
    const register unsigned short int GIF4 = 12;
    sbit  GIF4_bit at DMA1_ISR.B12;
    const register unsigned short int TCIF4 = 13;
    sbit  TCIF4_bit at DMA1_ISR.B13;
    const register unsigned short int HTIF4 = 14;
    sbit  HTIF4_bit at DMA1_ISR.B14;
    const register unsigned short int TEIF4 = 15;
    sbit  TEIF4_bit at DMA1_ISR.B15;
    const register unsigned short int GIF5 = 16;
    sbit  GIF5_bit at DMA1_ISR.B16;
    const register unsigned short int TCIF5 = 17;
    sbit  TCIF5_bit at DMA1_ISR.B17;
    const register unsigned short int HTIF5 = 18;
    sbit  HTIF5_bit at DMA1_ISR.B18;
    const register unsigned short int TEIF5 = 19;
    sbit  TEIF5_bit at DMA1_ISR.B19;
    const register unsigned short int GIF6 = 20;
    sbit  GIF6_bit at DMA1_ISR.B20;
    const register unsigned short int TCIF6 = 21;
    sbit  TCIF6_bit at DMA1_ISR.B21;
    const register unsigned short int HTIF6 = 22;
    sbit  HTIF6_bit at DMA1_ISR.B22;
    const register unsigned short int TEIF6 = 23;
    sbit  TEIF6_bit at DMA1_ISR.B23;
    const register unsigned short int GIF7 = 24;
    sbit  GIF7_bit at DMA1_ISR.B24;
    const register unsigned short int TCIF7 = 25;
    sbit  TCIF7_bit at DMA1_ISR.B25;
    const register unsigned short int HTIF7 = 26;
    sbit  HTIF7_bit at DMA1_ISR.B26;
    const register unsigned short int TEIF7 = 27;
    sbit  TEIF7_bit at DMA1_ISR.B27;

sfr unsigned long   volatile DMA1_IFCR            absolute 0x40020004;
    const register unsigned short int CGIF1 = 0;
    sbit  CGIF1_bit at DMA1_IFCR.B0;
    const register unsigned short int CGIF2 = 4;
    sbit  CGIF2_bit at DMA1_IFCR.B4;
    const register unsigned short int CGIF3 = 8;
    sbit  CGIF3_bit at DMA1_IFCR.B8;
    const register unsigned short int CGIF4 = 12;
    sbit  CGIF4_bit at DMA1_IFCR.B12;
    const register unsigned short int CGIF5 = 16;
    sbit  CGIF5_bit at DMA1_IFCR.B16;
    const register unsigned short int CGIF6 = 20;
    sbit  CGIF6_bit at DMA1_IFCR.B20;
    const register unsigned short int CGIF7 = 24;
    sbit  CGIF7_bit at DMA1_IFCR.B24;
    const register unsigned short int CTCIF1 = 1;
    sbit  CTCIF1_bit at DMA1_IFCR.B1;
    const register unsigned short int CTCIF2 = 5;
    sbit  CTCIF2_bit at DMA1_IFCR.B5;
    const register unsigned short int CTCIF3 = 9;
    sbit  CTCIF3_bit at DMA1_IFCR.B9;
    const register unsigned short int CTCIF4 = 13;
    sbit  CTCIF4_bit at DMA1_IFCR.B13;
    const register unsigned short int CTCIF5 = 17;
    sbit  CTCIF5_bit at DMA1_IFCR.B17;
    const register unsigned short int CTCIF6 = 21;
    sbit  CTCIF6_bit at DMA1_IFCR.B21;
    const register unsigned short int CTCIF7 = 25;
    sbit  CTCIF7_bit at DMA1_IFCR.B25;
    const register unsigned short int CHTIF1 = 2;
    sbit  CHTIF1_bit at DMA1_IFCR.B2;
    const register unsigned short int CHTIF2 = 6;
    sbit  CHTIF2_bit at DMA1_IFCR.B6;
    const register unsigned short int CHTIF3 = 10;
    sbit  CHTIF3_bit at DMA1_IFCR.B10;
    const register unsigned short int CHTIF4 = 14;
    sbit  CHTIF4_bit at DMA1_IFCR.B14;
    const register unsigned short int CHTIF5 = 18;
    sbit  CHTIF5_bit at DMA1_IFCR.B18;
    const register unsigned short int CHTIF6 = 22;
    sbit  CHTIF6_bit at DMA1_IFCR.B22;
    const register unsigned short int CHTIF7 = 26;
    sbit  CHTIF7_bit at DMA1_IFCR.B26;
    const register unsigned short int CTEIF1 = 3;
    sbit  CTEIF1_bit at DMA1_IFCR.B3;
    const register unsigned short int CTEIF2 = 7;
    sbit  CTEIF2_bit at DMA1_IFCR.B7;
    const register unsigned short int CTEIF3 = 11;
    sbit  CTEIF3_bit at DMA1_IFCR.B11;
    const register unsigned short int CTEIF4 = 15;
    sbit  CTEIF4_bit at DMA1_IFCR.B15;
    const register unsigned short int CTEIF5 = 19;
    sbit  CTEIF5_bit at DMA1_IFCR.B19;
    const register unsigned short int CTEIF6 = 23;
    sbit  CTEIF6_bit at DMA1_IFCR.B23;
    const register unsigned short int CTEIF7 = 27;
    sbit  CTEIF7_bit at DMA1_IFCR.B27;

sfr unsigned long   volatile DMA1_CCR1            absolute 0x40020008;
    const register unsigned short int EN = 0;
    sbit  EN_bit at DMA1_CCR1.B0;
    const register unsigned short int TCIE = 1;
    sbit  TCIE_bit at DMA1_CCR1.B1;
    const register unsigned short int HTIE = 2;
    sbit  HTIE_bit at DMA1_CCR1.B2;
    const register unsigned short int TEIE = 3;
    sbit  TEIE_bit at DMA1_CCR1.B3;
    const register unsigned short int DIR_ = 4;
    sbit  DIR_bit at DMA1_CCR1.B4;
    const register unsigned short int CIRC = 5;
    sbit  CIRC_bit at DMA1_CCR1.B5;
    const register unsigned short int PINC = 6;
    sbit  PINC_bit at DMA1_CCR1.B6;
    const register unsigned short int MINC = 7;
    sbit  MINC_bit at DMA1_CCR1.B7;
    const register unsigned short int PSIZE0 = 8;
    sbit  PSIZE0_bit at DMA1_CCR1.B8;
    const register unsigned short int PSIZE1 = 9;
    sbit  PSIZE1_bit at DMA1_CCR1.B9;
    const register unsigned short int MSIZE0 = 10;
    sbit  MSIZE0_bit at DMA1_CCR1.B10;
    const register unsigned short int MSIZE1 = 11;
    sbit  MSIZE1_bit at DMA1_CCR1.B11;
    const register unsigned short int PL0 = 12;
    sbit  PL0_bit at DMA1_CCR1.B12;
    const register unsigned short int PL1 = 13;
    sbit  PL1_bit at DMA1_CCR1.B13;
    const register unsigned short int MEM2MEM = 14;
    sbit  MEM2MEM_bit at DMA1_CCR1.B14;

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
    sbit  EN_DMA1_CCR2_bit at DMA1_CCR2.B0;
    sbit  TCIE_DMA1_CCR2_bit at DMA1_CCR2.B1;
    sbit  HTIE_DMA1_CCR2_bit at DMA1_CCR2.B2;
    sbit  TEIE_DMA1_CCR2_bit at DMA1_CCR2.B3;
    sbit  DIR_DMA1_CCR2_bit at DMA1_CCR2.B4;
    sbit  CIRC_DMA1_CCR2_bit at DMA1_CCR2.B5;
    sbit  PINC_DMA1_CCR2_bit at DMA1_CCR2.B6;
    sbit  MINC_DMA1_CCR2_bit at DMA1_CCR2.B7;
    sbit  PSIZE0_DMA1_CCR2_bit at DMA1_CCR2.B8;
    sbit  PSIZE1_DMA1_CCR2_bit at DMA1_CCR2.B9;
    sbit  MSIZE0_DMA1_CCR2_bit at DMA1_CCR2.B10;
    sbit  MSIZE1_DMA1_CCR2_bit at DMA1_CCR2.B11;
    sbit  PL0_DMA1_CCR2_bit at DMA1_CCR2.B12;
    sbit  PL1_DMA1_CCR2_bit at DMA1_CCR2.B13;
    sbit  MEM2MEM_DMA1_CCR2_bit at DMA1_CCR2.B14;

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
    sbit  EN_DMA1_CCR3_bit at DMA1_CCR3.B0;
    sbit  TCIE_DMA1_CCR3_bit at DMA1_CCR3.B1;
    sbit  HTIE_DMA1_CCR3_bit at DMA1_CCR3.B2;
    sbit  TEIE_DMA1_CCR3_bit at DMA1_CCR3.B3;
    sbit  DIR_DMA1_CCR3_bit at DMA1_CCR3.B4;
    sbit  CIRC_DMA1_CCR3_bit at DMA1_CCR3.B5;
    sbit  PINC_DMA1_CCR3_bit at DMA1_CCR3.B6;
    sbit  MINC_DMA1_CCR3_bit at DMA1_CCR3.B7;
    sbit  PSIZE0_DMA1_CCR3_bit at DMA1_CCR3.B8;
    sbit  PSIZE1_DMA1_CCR3_bit at DMA1_CCR3.B9;
    sbit  MSIZE0_DMA1_CCR3_bit at DMA1_CCR3.B10;
    sbit  MSIZE1_DMA1_CCR3_bit at DMA1_CCR3.B11;
    sbit  PL0_DMA1_CCR3_bit at DMA1_CCR3.B12;
    sbit  PL1_DMA1_CCR3_bit at DMA1_CCR3.B13;
    sbit  MEM2MEM_DMA1_CCR3_bit at DMA1_CCR3.B14;

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
    sbit  EN_DMA1_CCR4_bit at DMA1_CCR4.B0;
    sbit  TCIE_DMA1_CCR4_bit at DMA1_CCR4.B1;
    sbit  HTIE_DMA1_CCR4_bit at DMA1_CCR4.B2;
    sbit  TEIE_DMA1_CCR4_bit at DMA1_CCR4.B3;
    sbit  DIR_DMA1_CCR4_bit at DMA1_CCR4.B4;
    sbit  CIRC_DMA1_CCR4_bit at DMA1_CCR4.B5;
    sbit  PINC_DMA1_CCR4_bit at DMA1_CCR4.B6;
    sbit  MINC_DMA1_CCR4_bit at DMA1_CCR4.B7;
    sbit  PSIZE0_DMA1_CCR4_bit at DMA1_CCR4.B8;
    sbit  PSIZE1_DMA1_CCR4_bit at DMA1_CCR4.B9;
    sbit  MSIZE0_DMA1_CCR4_bit at DMA1_CCR4.B10;
    sbit  MSIZE1_DMA1_CCR4_bit at DMA1_CCR4.B11;
    sbit  PL0_DMA1_CCR4_bit at DMA1_CCR4.B12;
    sbit  PL1_DMA1_CCR4_bit at DMA1_CCR4.B13;
    sbit  MEM2MEM_DMA1_CCR4_bit at DMA1_CCR4.B14;

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
    sbit  EN_DMA1_CCR5_bit at DMA1_CCR5.B0;
    sbit  TCIE_DMA1_CCR5_bit at DMA1_CCR5.B1;
    sbit  HTIE_DMA1_CCR5_bit at DMA1_CCR5.B2;
    sbit  TEIE_DMA1_CCR5_bit at DMA1_CCR5.B3;
    sbit  DIR_DMA1_CCR5_bit at DMA1_CCR5.B4;
    sbit  CIRC_DMA1_CCR5_bit at DMA1_CCR5.B5;
    sbit  PINC_DMA1_CCR5_bit at DMA1_CCR5.B6;
    sbit  MINC_DMA1_CCR5_bit at DMA1_CCR5.B7;
    sbit  PSIZE0_DMA1_CCR5_bit at DMA1_CCR5.B8;
    sbit  PSIZE1_DMA1_CCR5_bit at DMA1_CCR5.B9;
    sbit  MSIZE0_DMA1_CCR5_bit at DMA1_CCR5.B10;
    sbit  MSIZE1_DMA1_CCR5_bit at DMA1_CCR5.B11;
    sbit  PL0_DMA1_CCR5_bit at DMA1_CCR5.B12;
    sbit  PL1_DMA1_CCR5_bit at DMA1_CCR5.B13;
    sbit  MEM2MEM_DMA1_CCR5_bit at DMA1_CCR5.B14;

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
    sbit  EN_DMA1_CCR6_bit at DMA1_CCR6.B0;
    sbit  TCIE_DMA1_CCR6_bit at DMA1_CCR6.B1;
    sbit  HTIE_DMA1_CCR6_bit at DMA1_CCR6.B2;
    sbit  TEIE_DMA1_CCR6_bit at DMA1_CCR6.B3;
    sbit  DIR_DMA1_CCR6_bit at DMA1_CCR6.B4;
    sbit  CIRC_DMA1_CCR6_bit at DMA1_CCR6.B5;
    sbit  PINC_DMA1_CCR6_bit at DMA1_CCR6.B6;
    sbit  MINC_DMA1_CCR6_bit at DMA1_CCR6.B7;
    sbit  PSIZE0_DMA1_CCR6_bit at DMA1_CCR6.B8;
    sbit  PSIZE1_DMA1_CCR6_bit at DMA1_CCR6.B9;
    sbit  MSIZE0_DMA1_CCR6_bit at DMA1_CCR6.B10;
    sbit  MSIZE1_DMA1_CCR6_bit at DMA1_CCR6.B11;
    sbit  PL0_DMA1_CCR6_bit at DMA1_CCR6.B12;
    sbit  PL1_DMA1_CCR6_bit at DMA1_CCR6.B13;
    sbit  MEM2MEM_DMA1_CCR6_bit at DMA1_CCR6.B14;

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
    sbit  EN_DMA1_CCR7_bit at DMA1_CCR7.B0;
    sbit  TCIE_DMA1_CCR7_bit at DMA1_CCR7.B1;
    sbit  HTIE_DMA1_CCR7_bit at DMA1_CCR7.B2;
    sbit  TEIE_DMA1_CCR7_bit at DMA1_CCR7.B3;
    sbit  DIR_DMA1_CCR7_bit at DMA1_CCR7.B4;
    sbit  CIRC_DMA1_CCR7_bit at DMA1_CCR7.B5;
    sbit  PINC_DMA1_CCR7_bit at DMA1_CCR7.B6;
    sbit  MINC_DMA1_CCR7_bit at DMA1_CCR7.B7;
    sbit  PSIZE0_DMA1_CCR7_bit at DMA1_CCR7.B8;
    sbit  PSIZE1_DMA1_CCR7_bit at DMA1_CCR7.B9;
    sbit  MSIZE0_DMA1_CCR7_bit at DMA1_CCR7.B10;
    sbit  MSIZE1_DMA1_CCR7_bit at DMA1_CCR7.B11;
    sbit  PL0_DMA1_CCR7_bit at DMA1_CCR7.B12;
    sbit  PL1_DMA1_CCR7_bit at DMA1_CCR7.B13;
    sbit  MEM2MEM_DMA1_CCR7_bit at DMA1_CCR7.B14;

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

sfr unsigned long   volatile DMA2_ISR             absolute 0x40020400;
    sbit  GIF1_DMA2_ISR_bit at DMA2_ISR.B0;
    sbit  TCIF1_DMA2_ISR_bit at DMA2_ISR.B1;
    sbit  HTIF1_DMA2_ISR_bit at DMA2_ISR.B2;
    sbit  TEIF1_DMA2_ISR_bit at DMA2_ISR.B3;
    sbit  GIF2_DMA2_ISR_bit at DMA2_ISR.B4;
    sbit  TCIF2_DMA2_ISR_bit at DMA2_ISR.B5;
    sbit  HTIF2_DMA2_ISR_bit at DMA2_ISR.B6;
    sbit  TEIF2_DMA2_ISR_bit at DMA2_ISR.B7;
    sbit  GIF3_DMA2_ISR_bit at DMA2_ISR.B8;
    sbit  TCIF3_DMA2_ISR_bit at DMA2_ISR.B9;
    sbit  HTIF3_DMA2_ISR_bit at DMA2_ISR.B10;
    sbit  TEIF3_DMA2_ISR_bit at DMA2_ISR.B11;
    sbit  GIF4_DMA2_ISR_bit at DMA2_ISR.B12;
    sbit  TCIF4_DMA2_ISR_bit at DMA2_ISR.B13;
    sbit  HTIF4_DMA2_ISR_bit at DMA2_ISR.B14;
    sbit  TEIF4_DMA2_ISR_bit at DMA2_ISR.B15;
    sbit  GIF5_DMA2_ISR_bit at DMA2_ISR.B16;
    sbit  TCIF5_DMA2_ISR_bit at DMA2_ISR.B17;
    sbit  HTIF5_DMA2_ISR_bit at DMA2_ISR.B18;
    sbit  TEIF5_DMA2_ISR_bit at DMA2_ISR.B19;
    sbit  GIF6_DMA2_ISR_bit at DMA2_ISR.B20;
    sbit  TCIF6_DMA2_ISR_bit at DMA2_ISR.B21;
    sbit  HTIF6_DMA2_ISR_bit at DMA2_ISR.B22;
    sbit  TEIF6_DMA2_ISR_bit at DMA2_ISR.B23;
    sbit  GIF7_DMA2_ISR_bit at DMA2_ISR.B24;
    sbit  TCIF7_DMA2_ISR_bit at DMA2_ISR.B25;
    sbit  HTIF7_DMA2_ISR_bit at DMA2_ISR.B26;
    sbit  TEIF7_DMA2_ISR_bit at DMA2_ISR.B27;

sfr unsigned long   volatile DMA2_IFCR            absolute 0x40020404;
    sbit  CGIF1_DMA2_IFCR_bit at DMA2_IFCR.B0;
    sbit  CGIF2_DMA2_IFCR_bit at DMA2_IFCR.B4;
    sbit  CGIF3_DMA2_IFCR_bit at DMA2_IFCR.B8;
    sbit  CGIF4_DMA2_IFCR_bit at DMA2_IFCR.B12;
    sbit  CGIF5_DMA2_IFCR_bit at DMA2_IFCR.B16;
    sbit  CGIF6_DMA2_IFCR_bit at DMA2_IFCR.B20;
    sbit  CGIF7_DMA2_IFCR_bit at DMA2_IFCR.B24;
    sbit  CTCIF1_DMA2_IFCR_bit at DMA2_IFCR.B1;
    sbit  CTCIF2_DMA2_IFCR_bit at DMA2_IFCR.B5;
    sbit  CTCIF3_DMA2_IFCR_bit at DMA2_IFCR.B9;
    sbit  CTCIF4_DMA2_IFCR_bit at DMA2_IFCR.B13;
    sbit  CTCIF5_DMA2_IFCR_bit at DMA2_IFCR.B17;
    sbit  CTCIF6_DMA2_IFCR_bit at DMA2_IFCR.B21;
    sbit  CTCIF7_DMA2_IFCR_bit at DMA2_IFCR.B25;
    sbit  CHTIF1_DMA2_IFCR_bit at DMA2_IFCR.B2;
    sbit  CHTIF2_DMA2_IFCR_bit at DMA2_IFCR.B6;
    sbit  CHTIF3_DMA2_IFCR_bit at DMA2_IFCR.B10;
    sbit  CHTIF4_DMA2_IFCR_bit at DMA2_IFCR.B14;
    sbit  CHTIF5_DMA2_IFCR_bit at DMA2_IFCR.B18;
    sbit  CHTIF6_DMA2_IFCR_bit at DMA2_IFCR.B22;
    sbit  CHTIF7_DMA2_IFCR_bit at DMA2_IFCR.B26;
    sbit  CTEIF1_DMA2_IFCR_bit at DMA2_IFCR.B3;
    sbit  CTEIF2_DMA2_IFCR_bit at DMA2_IFCR.B7;
    sbit  CTEIF3_DMA2_IFCR_bit at DMA2_IFCR.B11;
    sbit  CTEIF4_DMA2_IFCR_bit at DMA2_IFCR.B15;
    sbit  CTEIF5_DMA2_IFCR_bit at DMA2_IFCR.B19;
    sbit  CTEIF6_DMA2_IFCR_bit at DMA2_IFCR.B23;
    sbit  CTEIF7_DMA2_IFCR_bit at DMA2_IFCR.B27;

sfr unsigned long   volatile DMA2_CCR1            absolute 0x40020408;
    sbit  EN_DMA2_CCR1_bit at DMA2_CCR1.B0;
    sbit  TCIE_DMA2_CCR1_bit at DMA2_CCR1.B1;
    sbit  HTIE_DMA2_CCR1_bit at DMA2_CCR1.B2;
    sbit  TEIE_DMA2_CCR1_bit at DMA2_CCR1.B3;
    sbit  DIR_DMA2_CCR1_bit at DMA2_CCR1.B4;
    sbit  CIRC_DMA2_CCR1_bit at DMA2_CCR1.B5;
    sbit  PINC_DMA2_CCR1_bit at DMA2_CCR1.B6;
    sbit  MINC_DMA2_CCR1_bit at DMA2_CCR1.B7;
    sbit  PSIZE0_DMA2_CCR1_bit at DMA2_CCR1.B8;
    sbit  PSIZE1_DMA2_CCR1_bit at DMA2_CCR1.B9;
    sbit  MSIZE0_DMA2_CCR1_bit at DMA2_CCR1.B10;
    sbit  MSIZE1_DMA2_CCR1_bit at DMA2_CCR1.B11;
    sbit  PL0_DMA2_CCR1_bit at DMA2_CCR1.B12;
    sbit  PL1_DMA2_CCR1_bit at DMA2_CCR1.B13;
    sbit  MEM2MEM_DMA2_CCR1_bit at DMA2_CCR1.B14;

sfr unsigned long   volatile DMA2_CNDTR1          absolute 0x4002040C;
    sbit  NDT0_DMA2_CNDTR1_bit at DMA2_CNDTR1.B0;
    sbit  NDT1_DMA2_CNDTR1_bit at DMA2_CNDTR1.B1;
    sbit  NDT2_DMA2_CNDTR1_bit at DMA2_CNDTR1.B2;
    sbit  NDT3_DMA2_CNDTR1_bit at DMA2_CNDTR1.B3;
    sbit  NDT4_DMA2_CNDTR1_bit at DMA2_CNDTR1.B4;
    sbit  NDT5_DMA2_CNDTR1_bit at DMA2_CNDTR1.B5;
    sbit  NDT6_DMA2_CNDTR1_bit at DMA2_CNDTR1.B6;
    sbit  NDT7_DMA2_CNDTR1_bit at DMA2_CNDTR1.B7;
    sbit  NDT8_DMA2_CNDTR1_bit at DMA2_CNDTR1.B8;
    sbit  NDT9_DMA2_CNDTR1_bit at DMA2_CNDTR1.B9;
    sbit  NDT10_DMA2_CNDTR1_bit at DMA2_CNDTR1.B10;
    sbit  NDT11_DMA2_CNDTR1_bit at DMA2_CNDTR1.B11;
    sbit  NDT12_DMA2_CNDTR1_bit at DMA2_CNDTR1.B12;
    sbit  NDT13_DMA2_CNDTR1_bit at DMA2_CNDTR1.B13;
    sbit  NDT14_DMA2_CNDTR1_bit at DMA2_CNDTR1.B14;
    sbit  NDT15_DMA2_CNDTR1_bit at DMA2_CNDTR1.B15;

sfr unsigned long   volatile DMA2_CPAR1           absolute 0x40020410;
    sbit  PA0_DMA2_CPAR1_bit at DMA2_CPAR1.B0;
    sbit  PA1_DMA2_CPAR1_bit at DMA2_CPAR1.B1;
    sbit  PA2_DMA2_CPAR1_bit at DMA2_CPAR1.B2;
    sbit  PA3_DMA2_CPAR1_bit at DMA2_CPAR1.B3;
    sbit  PA4_DMA2_CPAR1_bit at DMA2_CPAR1.B4;
    sbit  PA5_DMA2_CPAR1_bit at DMA2_CPAR1.B5;
    sbit  PA6_DMA2_CPAR1_bit at DMA2_CPAR1.B6;
    sbit  PA7_DMA2_CPAR1_bit at DMA2_CPAR1.B7;
    sbit  PA8_DMA2_CPAR1_bit at DMA2_CPAR1.B8;
    sbit  PA9_DMA2_CPAR1_bit at DMA2_CPAR1.B9;
    sbit  PA10_DMA2_CPAR1_bit at DMA2_CPAR1.B10;
    sbit  PA11_DMA2_CPAR1_bit at DMA2_CPAR1.B11;
    sbit  PA12_DMA2_CPAR1_bit at DMA2_CPAR1.B12;
    sbit  PA13_DMA2_CPAR1_bit at DMA2_CPAR1.B13;
    sbit  PA14_DMA2_CPAR1_bit at DMA2_CPAR1.B14;
    sbit  PA15_DMA2_CPAR1_bit at DMA2_CPAR1.B15;
    sbit  PA16_DMA2_CPAR1_bit at DMA2_CPAR1.B16;
    sbit  PA17_DMA2_CPAR1_bit at DMA2_CPAR1.B17;
    sbit  PA18_DMA2_CPAR1_bit at DMA2_CPAR1.B18;
    sbit  PA19_DMA2_CPAR1_bit at DMA2_CPAR1.B19;
    sbit  PA20_DMA2_CPAR1_bit at DMA2_CPAR1.B20;
    sbit  PA21_DMA2_CPAR1_bit at DMA2_CPAR1.B21;
    sbit  PA22_DMA2_CPAR1_bit at DMA2_CPAR1.B22;
    sbit  PA23_DMA2_CPAR1_bit at DMA2_CPAR1.B23;
    sbit  PA24_DMA2_CPAR1_bit at DMA2_CPAR1.B24;
    sbit  PA25_DMA2_CPAR1_bit at DMA2_CPAR1.B25;
    sbit  PA26_DMA2_CPAR1_bit at DMA2_CPAR1.B26;
    sbit  PA27_DMA2_CPAR1_bit at DMA2_CPAR1.B27;
    sbit  PA28_DMA2_CPAR1_bit at DMA2_CPAR1.B28;
    sbit  PA29_DMA2_CPAR1_bit at DMA2_CPAR1.B29;
    sbit  PA30_DMA2_CPAR1_bit at DMA2_CPAR1.B30;
    sbit  PA31_DMA2_CPAR1_bit at DMA2_CPAR1.B31;

sfr unsigned long   volatile DMA2_CMAR1           absolute 0x40020414;
    sbit  MA0_DMA2_CMAR1_bit at DMA2_CMAR1.B0;
    sbit  MA1_DMA2_CMAR1_bit at DMA2_CMAR1.B1;
    sbit  MA2_DMA2_CMAR1_bit at DMA2_CMAR1.B2;
    sbit  MA3_DMA2_CMAR1_bit at DMA2_CMAR1.B3;
    sbit  MA4_DMA2_CMAR1_bit at DMA2_CMAR1.B4;
    sbit  MA5_DMA2_CMAR1_bit at DMA2_CMAR1.B5;
    sbit  MA6_DMA2_CMAR1_bit at DMA2_CMAR1.B6;
    sbit  MA7_DMA2_CMAR1_bit at DMA2_CMAR1.B7;
    sbit  MA8_DMA2_CMAR1_bit at DMA2_CMAR1.B8;
    sbit  MA9_DMA2_CMAR1_bit at DMA2_CMAR1.B9;
    sbit  MA10_DMA2_CMAR1_bit at DMA2_CMAR1.B10;
    sbit  MA11_DMA2_CMAR1_bit at DMA2_CMAR1.B11;
    sbit  MA12_DMA2_CMAR1_bit at DMA2_CMAR1.B12;
    sbit  MA13_DMA2_CMAR1_bit at DMA2_CMAR1.B13;
    sbit  MA14_DMA2_CMAR1_bit at DMA2_CMAR1.B14;
    sbit  MA15_DMA2_CMAR1_bit at DMA2_CMAR1.B15;
    sbit  MA16_DMA2_CMAR1_bit at DMA2_CMAR1.B16;
    sbit  MA17_DMA2_CMAR1_bit at DMA2_CMAR1.B17;
    sbit  MA18_DMA2_CMAR1_bit at DMA2_CMAR1.B18;
    sbit  MA19_DMA2_CMAR1_bit at DMA2_CMAR1.B19;
    sbit  MA20_DMA2_CMAR1_bit at DMA2_CMAR1.B20;
    sbit  MA21_DMA2_CMAR1_bit at DMA2_CMAR1.B21;
    sbit  MA22_DMA2_CMAR1_bit at DMA2_CMAR1.B22;
    sbit  MA23_DMA2_CMAR1_bit at DMA2_CMAR1.B23;
    sbit  MA24_DMA2_CMAR1_bit at DMA2_CMAR1.B24;
    sbit  MA25_DMA2_CMAR1_bit at DMA2_CMAR1.B25;
    sbit  MA26_DMA2_CMAR1_bit at DMA2_CMAR1.B26;
    sbit  MA27_DMA2_CMAR1_bit at DMA2_CMAR1.B27;
    sbit  MA28_DMA2_CMAR1_bit at DMA2_CMAR1.B28;
    sbit  MA29_DMA2_CMAR1_bit at DMA2_CMAR1.B29;
    sbit  MA30_DMA2_CMAR1_bit at DMA2_CMAR1.B30;
    sbit  MA31_DMA2_CMAR1_bit at DMA2_CMAR1.B31;

sfr unsigned long   volatile DMA2_CCR2            absolute 0x4002041C;
    sbit  EN_DMA2_CCR2_bit at DMA2_CCR2.B0;
    sbit  TCIE_DMA2_CCR2_bit at DMA2_CCR2.B1;
    sbit  HTIE_DMA2_CCR2_bit at DMA2_CCR2.B2;
    sbit  TEIE_DMA2_CCR2_bit at DMA2_CCR2.B3;
    sbit  DIR_DMA2_CCR2_bit at DMA2_CCR2.B4;
    sbit  CIRC_DMA2_CCR2_bit at DMA2_CCR2.B5;
    sbit  PINC_DMA2_CCR2_bit at DMA2_CCR2.B6;
    sbit  MINC_DMA2_CCR2_bit at DMA2_CCR2.B7;
    sbit  PSIZE0_DMA2_CCR2_bit at DMA2_CCR2.B8;
    sbit  PSIZE1_DMA2_CCR2_bit at DMA2_CCR2.B9;
    sbit  MSIZE0_DMA2_CCR2_bit at DMA2_CCR2.B10;
    sbit  MSIZE1_DMA2_CCR2_bit at DMA2_CCR2.B11;
    sbit  PL0_DMA2_CCR2_bit at DMA2_CCR2.B12;
    sbit  PL1_DMA2_CCR2_bit at DMA2_CCR2.B13;
    sbit  MEM2MEM_DMA2_CCR2_bit at DMA2_CCR2.B14;

sfr unsigned long   volatile DMA2_CNDTR2          absolute 0x40020420;
    sbit  NDT0_DMA2_CNDTR2_bit at DMA2_CNDTR2.B0;
    sbit  NDT1_DMA2_CNDTR2_bit at DMA2_CNDTR2.B1;
    sbit  NDT2_DMA2_CNDTR2_bit at DMA2_CNDTR2.B2;
    sbit  NDT3_DMA2_CNDTR2_bit at DMA2_CNDTR2.B3;
    sbit  NDT4_DMA2_CNDTR2_bit at DMA2_CNDTR2.B4;
    sbit  NDT5_DMA2_CNDTR2_bit at DMA2_CNDTR2.B5;
    sbit  NDT6_DMA2_CNDTR2_bit at DMA2_CNDTR2.B6;
    sbit  NDT7_DMA2_CNDTR2_bit at DMA2_CNDTR2.B7;
    sbit  NDT8_DMA2_CNDTR2_bit at DMA2_CNDTR2.B8;
    sbit  NDT9_DMA2_CNDTR2_bit at DMA2_CNDTR2.B9;
    sbit  NDT10_DMA2_CNDTR2_bit at DMA2_CNDTR2.B10;
    sbit  NDT11_DMA2_CNDTR2_bit at DMA2_CNDTR2.B11;
    sbit  NDT12_DMA2_CNDTR2_bit at DMA2_CNDTR2.B12;
    sbit  NDT13_DMA2_CNDTR2_bit at DMA2_CNDTR2.B13;
    sbit  NDT14_DMA2_CNDTR2_bit at DMA2_CNDTR2.B14;
    sbit  NDT15_DMA2_CNDTR2_bit at DMA2_CNDTR2.B15;

sfr unsigned long   volatile DMA2_CPAR2           absolute 0x40020424;
    sbit  PA0_DMA2_CPAR2_bit at DMA2_CPAR2.B0;
    sbit  PA1_DMA2_CPAR2_bit at DMA2_CPAR2.B1;
    sbit  PA2_DMA2_CPAR2_bit at DMA2_CPAR2.B2;
    sbit  PA3_DMA2_CPAR2_bit at DMA2_CPAR2.B3;
    sbit  PA4_DMA2_CPAR2_bit at DMA2_CPAR2.B4;
    sbit  PA5_DMA2_CPAR2_bit at DMA2_CPAR2.B5;
    sbit  PA6_DMA2_CPAR2_bit at DMA2_CPAR2.B6;
    sbit  PA7_DMA2_CPAR2_bit at DMA2_CPAR2.B7;
    sbit  PA8_DMA2_CPAR2_bit at DMA2_CPAR2.B8;
    sbit  PA9_DMA2_CPAR2_bit at DMA2_CPAR2.B9;
    sbit  PA10_DMA2_CPAR2_bit at DMA2_CPAR2.B10;
    sbit  PA11_DMA2_CPAR2_bit at DMA2_CPAR2.B11;
    sbit  PA12_DMA2_CPAR2_bit at DMA2_CPAR2.B12;
    sbit  PA13_DMA2_CPAR2_bit at DMA2_CPAR2.B13;
    sbit  PA14_DMA2_CPAR2_bit at DMA2_CPAR2.B14;
    sbit  PA15_DMA2_CPAR2_bit at DMA2_CPAR2.B15;
    sbit  PA16_DMA2_CPAR2_bit at DMA2_CPAR2.B16;
    sbit  PA17_DMA2_CPAR2_bit at DMA2_CPAR2.B17;
    sbit  PA18_DMA2_CPAR2_bit at DMA2_CPAR2.B18;
    sbit  PA19_DMA2_CPAR2_bit at DMA2_CPAR2.B19;
    sbit  PA20_DMA2_CPAR2_bit at DMA2_CPAR2.B20;
    sbit  PA21_DMA2_CPAR2_bit at DMA2_CPAR2.B21;
    sbit  PA22_DMA2_CPAR2_bit at DMA2_CPAR2.B22;
    sbit  PA23_DMA2_CPAR2_bit at DMA2_CPAR2.B23;
    sbit  PA24_DMA2_CPAR2_bit at DMA2_CPAR2.B24;
    sbit  PA25_DMA2_CPAR2_bit at DMA2_CPAR2.B25;
    sbit  PA26_DMA2_CPAR2_bit at DMA2_CPAR2.B26;
    sbit  PA27_DMA2_CPAR2_bit at DMA2_CPAR2.B27;
    sbit  PA28_DMA2_CPAR2_bit at DMA2_CPAR2.B28;
    sbit  PA29_DMA2_CPAR2_bit at DMA2_CPAR2.B29;
    sbit  PA30_DMA2_CPAR2_bit at DMA2_CPAR2.B30;
    sbit  PA31_DMA2_CPAR2_bit at DMA2_CPAR2.B31;

sfr unsigned long   volatile DMA2_CMAR2           absolute 0x40020428;
    sbit  MA0_DMA2_CMAR2_bit at DMA2_CMAR2.B0;
    sbit  MA1_DMA2_CMAR2_bit at DMA2_CMAR2.B1;
    sbit  MA2_DMA2_CMAR2_bit at DMA2_CMAR2.B2;
    sbit  MA3_DMA2_CMAR2_bit at DMA2_CMAR2.B3;
    sbit  MA4_DMA2_CMAR2_bit at DMA2_CMAR2.B4;
    sbit  MA5_DMA2_CMAR2_bit at DMA2_CMAR2.B5;
    sbit  MA6_DMA2_CMAR2_bit at DMA2_CMAR2.B6;
    sbit  MA7_DMA2_CMAR2_bit at DMA2_CMAR2.B7;
    sbit  MA8_DMA2_CMAR2_bit at DMA2_CMAR2.B8;
    sbit  MA9_DMA2_CMAR2_bit at DMA2_CMAR2.B9;
    sbit  MA10_DMA2_CMAR2_bit at DMA2_CMAR2.B10;
    sbit  MA11_DMA2_CMAR2_bit at DMA2_CMAR2.B11;
    sbit  MA12_DMA2_CMAR2_bit at DMA2_CMAR2.B12;
    sbit  MA13_DMA2_CMAR2_bit at DMA2_CMAR2.B13;
    sbit  MA14_DMA2_CMAR2_bit at DMA2_CMAR2.B14;
    sbit  MA15_DMA2_CMAR2_bit at DMA2_CMAR2.B15;
    sbit  MA16_DMA2_CMAR2_bit at DMA2_CMAR2.B16;
    sbit  MA17_DMA2_CMAR2_bit at DMA2_CMAR2.B17;
    sbit  MA18_DMA2_CMAR2_bit at DMA2_CMAR2.B18;
    sbit  MA19_DMA2_CMAR2_bit at DMA2_CMAR2.B19;
    sbit  MA20_DMA2_CMAR2_bit at DMA2_CMAR2.B20;
    sbit  MA21_DMA2_CMAR2_bit at DMA2_CMAR2.B21;
    sbit  MA22_DMA2_CMAR2_bit at DMA2_CMAR2.B22;
    sbit  MA23_DMA2_CMAR2_bit at DMA2_CMAR2.B23;
    sbit  MA24_DMA2_CMAR2_bit at DMA2_CMAR2.B24;
    sbit  MA25_DMA2_CMAR2_bit at DMA2_CMAR2.B25;
    sbit  MA26_DMA2_CMAR2_bit at DMA2_CMAR2.B26;
    sbit  MA27_DMA2_CMAR2_bit at DMA2_CMAR2.B27;
    sbit  MA28_DMA2_CMAR2_bit at DMA2_CMAR2.B28;
    sbit  MA29_DMA2_CMAR2_bit at DMA2_CMAR2.B29;
    sbit  MA30_DMA2_CMAR2_bit at DMA2_CMAR2.B30;
    sbit  MA31_DMA2_CMAR2_bit at DMA2_CMAR2.B31;

sfr unsigned long   volatile DMA2_CCR3            absolute 0x40020430;
    sbit  EN_DMA2_CCR3_bit at DMA2_CCR3.B0;
    sbit  TCIE_DMA2_CCR3_bit at DMA2_CCR3.B1;
    sbit  HTIE_DMA2_CCR3_bit at DMA2_CCR3.B2;
    sbit  TEIE_DMA2_CCR3_bit at DMA2_CCR3.B3;
    sbit  DIR_DMA2_CCR3_bit at DMA2_CCR3.B4;
    sbit  CIRC_DMA2_CCR3_bit at DMA2_CCR3.B5;
    sbit  PINC_DMA2_CCR3_bit at DMA2_CCR3.B6;
    sbit  MINC_DMA2_CCR3_bit at DMA2_CCR3.B7;
    sbit  PSIZE0_DMA2_CCR3_bit at DMA2_CCR3.B8;
    sbit  PSIZE1_DMA2_CCR3_bit at DMA2_CCR3.B9;
    sbit  MSIZE0_DMA2_CCR3_bit at DMA2_CCR3.B10;
    sbit  MSIZE1_DMA2_CCR3_bit at DMA2_CCR3.B11;
    sbit  PL0_DMA2_CCR3_bit at DMA2_CCR3.B12;
    sbit  PL1_DMA2_CCR3_bit at DMA2_CCR3.B13;
    sbit  MEM2MEM_DMA2_CCR3_bit at DMA2_CCR3.B14;

sfr unsigned long   volatile DMA2_CNDTR3          absolute 0x40020434;
    sbit  NDT0_DMA2_CNDTR3_bit at DMA2_CNDTR3.B0;
    sbit  NDT1_DMA2_CNDTR3_bit at DMA2_CNDTR3.B1;
    sbit  NDT2_DMA2_CNDTR3_bit at DMA2_CNDTR3.B2;
    sbit  NDT3_DMA2_CNDTR3_bit at DMA2_CNDTR3.B3;
    sbit  NDT4_DMA2_CNDTR3_bit at DMA2_CNDTR3.B4;
    sbit  NDT5_DMA2_CNDTR3_bit at DMA2_CNDTR3.B5;
    sbit  NDT6_DMA2_CNDTR3_bit at DMA2_CNDTR3.B6;
    sbit  NDT7_DMA2_CNDTR3_bit at DMA2_CNDTR3.B7;
    sbit  NDT8_DMA2_CNDTR3_bit at DMA2_CNDTR3.B8;
    sbit  NDT9_DMA2_CNDTR3_bit at DMA2_CNDTR3.B9;
    sbit  NDT10_DMA2_CNDTR3_bit at DMA2_CNDTR3.B10;
    sbit  NDT11_DMA2_CNDTR3_bit at DMA2_CNDTR3.B11;
    sbit  NDT12_DMA2_CNDTR3_bit at DMA2_CNDTR3.B12;
    sbit  NDT13_DMA2_CNDTR3_bit at DMA2_CNDTR3.B13;
    sbit  NDT14_DMA2_CNDTR3_bit at DMA2_CNDTR3.B14;
    sbit  NDT15_DMA2_CNDTR3_bit at DMA2_CNDTR3.B15;

sfr unsigned long   volatile DMA2_CPAR3           absolute 0x40020438;
    sbit  PA0_DMA2_CPAR3_bit at DMA2_CPAR3.B0;
    sbit  PA1_DMA2_CPAR3_bit at DMA2_CPAR3.B1;
    sbit  PA2_DMA2_CPAR3_bit at DMA2_CPAR3.B2;
    sbit  PA3_DMA2_CPAR3_bit at DMA2_CPAR3.B3;
    sbit  PA4_DMA2_CPAR3_bit at DMA2_CPAR3.B4;
    sbit  PA5_DMA2_CPAR3_bit at DMA2_CPAR3.B5;
    sbit  PA6_DMA2_CPAR3_bit at DMA2_CPAR3.B6;
    sbit  PA7_DMA2_CPAR3_bit at DMA2_CPAR3.B7;
    sbit  PA8_DMA2_CPAR3_bit at DMA2_CPAR3.B8;
    sbit  PA9_DMA2_CPAR3_bit at DMA2_CPAR3.B9;
    sbit  PA10_DMA2_CPAR3_bit at DMA2_CPAR3.B10;
    sbit  PA11_DMA2_CPAR3_bit at DMA2_CPAR3.B11;
    sbit  PA12_DMA2_CPAR3_bit at DMA2_CPAR3.B12;
    sbit  PA13_DMA2_CPAR3_bit at DMA2_CPAR3.B13;
    sbit  PA14_DMA2_CPAR3_bit at DMA2_CPAR3.B14;
    sbit  PA15_DMA2_CPAR3_bit at DMA2_CPAR3.B15;
    sbit  PA16_DMA2_CPAR3_bit at DMA2_CPAR3.B16;
    sbit  PA17_DMA2_CPAR3_bit at DMA2_CPAR3.B17;
    sbit  PA18_DMA2_CPAR3_bit at DMA2_CPAR3.B18;
    sbit  PA19_DMA2_CPAR3_bit at DMA2_CPAR3.B19;
    sbit  PA20_DMA2_CPAR3_bit at DMA2_CPAR3.B20;
    sbit  PA21_DMA2_CPAR3_bit at DMA2_CPAR3.B21;
    sbit  PA22_DMA2_CPAR3_bit at DMA2_CPAR3.B22;
    sbit  PA23_DMA2_CPAR3_bit at DMA2_CPAR3.B23;
    sbit  PA24_DMA2_CPAR3_bit at DMA2_CPAR3.B24;
    sbit  PA25_DMA2_CPAR3_bit at DMA2_CPAR3.B25;
    sbit  PA26_DMA2_CPAR3_bit at DMA2_CPAR3.B26;
    sbit  PA27_DMA2_CPAR3_bit at DMA2_CPAR3.B27;
    sbit  PA28_DMA2_CPAR3_bit at DMA2_CPAR3.B28;
    sbit  PA29_DMA2_CPAR3_bit at DMA2_CPAR3.B29;
    sbit  PA30_DMA2_CPAR3_bit at DMA2_CPAR3.B30;
    sbit  PA31_DMA2_CPAR3_bit at DMA2_CPAR3.B31;

sfr unsigned long   volatile DMA2_CMAR3           absolute 0x4002043C;
    sbit  MA0_DMA2_CMAR3_bit at DMA2_CMAR3.B0;
    sbit  MA1_DMA2_CMAR3_bit at DMA2_CMAR3.B1;
    sbit  MA2_DMA2_CMAR3_bit at DMA2_CMAR3.B2;
    sbit  MA3_DMA2_CMAR3_bit at DMA2_CMAR3.B3;
    sbit  MA4_DMA2_CMAR3_bit at DMA2_CMAR3.B4;
    sbit  MA5_DMA2_CMAR3_bit at DMA2_CMAR3.B5;
    sbit  MA6_DMA2_CMAR3_bit at DMA2_CMAR3.B6;
    sbit  MA7_DMA2_CMAR3_bit at DMA2_CMAR3.B7;
    sbit  MA8_DMA2_CMAR3_bit at DMA2_CMAR3.B8;
    sbit  MA9_DMA2_CMAR3_bit at DMA2_CMAR3.B9;
    sbit  MA10_DMA2_CMAR3_bit at DMA2_CMAR3.B10;
    sbit  MA11_DMA2_CMAR3_bit at DMA2_CMAR3.B11;
    sbit  MA12_DMA2_CMAR3_bit at DMA2_CMAR3.B12;
    sbit  MA13_DMA2_CMAR3_bit at DMA2_CMAR3.B13;
    sbit  MA14_DMA2_CMAR3_bit at DMA2_CMAR3.B14;
    sbit  MA15_DMA2_CMAR3_bit at DMA2_CMAR3.B15;
    sbit  MA16_DMA2_CMAR3_bit at DMA2_CMAR3.B16;
    sbit  MA17_DMA2_CMAR3_bit at DMA2_CMAR3.B17;
    sbit  MA18_DMA2_CMAR3_bit at DMA2_CMAR3.B18;
    sbit  MA19_DMA2_CMAR3_bit at DMA2_CMAR3.B19;
    sbit  MA20_DMA2_CMAR3_bit at DMA2_CMAR3.B20;
    sbit  MA21_DMA2_CMAR3_bit at DMA2_CMAR3.B21;
    sbit  MA22_DMA2_CMAR3_bit at DMA2_CMAR3.B22;
    sbit  MA23_DMA2_CMAR3_bit at DMA2_CMAR3.B23;
    sbit  MA24_DMA2_CMAR3_bit at DMA2_CMAR3.B24;
    sbit  MA25_DMA2_CMAR3_bit at DMA2_CMAR3.B25;
    sbit  MA26_DMA2_CMAR3_bit at DMA2_CMAR3.B26;
    sbit  MA27_DMA2_CMAR3_bit at DMA2_CMAR3.B27;
    sbit  MA28_DMA2_CMAR3_bit at DMA2_CMAR3.B28;
    sbit  MA29_DMA2_CMAR3_bit at DMA2_CMAR3.B29;
    sbit  MA30_DMA2_CMAR3_bit at DMA2_CMAR3.B30;
    sbit  MA31_DMA2_CMAR3_bit at DMA2_CMAR3.B31;

sfr unsigned long   volatile DMA2_CCR4            absolute 0x40020444;
    sbit  EN_DMA2_CCR4_bit at DMA2_CCR4.B0;
    sbit  TCIE_DMA2_CCR4_bit at DMA2_CCR4.B1;
    sbit  HTIE_DMA2_CCR4_bit at DMA2_CCR4.B2;
    sbit  TEIE_DMA2_CCR4_bit at DMA2_CCR4.B3;
    sbit  DIR_DMA2_CCR4_bit at DMA2_CCR4.B4;
    sbit  CIRC_DMA2_CCR4_bit at DMA2_CCR4.B5;
    sbit  PINC_DMA2_CCR4_bit at DMA2_CCR4.B6;
    sbit  MINC_DMA2_CCR4_bit at DMA2_CCR4.B7;
    sbit  PSIZE0_DMA2_CCR4_bit at DMA2_CCR4.B8;
    sbit  PSIZE1_DMA2_CCR4_bit at DMA2_CCR4.B9;
    sbit  MSIZE0_DMA2_CCR4_bit at DMA2_CCR4.B10;
    sbit  MSIZE1_DMA2_CCR4_bit at DMA2_CCR4.B11;
    sbit  PL0_DMA2_CCR4_bit at DMA2_CCR4.B12;
    sbit  PL1_DMA2_CCR4_bit at DMA2_CCR4.B13;
    sbit  MEM2MEM_DMA2_CCR4_bit at DMA2_CCR4.B14;

sfr unsigned long   volatile DMA2_CNDTR4          absolute 0x40020448;
    sbit  NDT0_DMA2_CNDTR4_bit at DMA2_CNDTR4.B0;
    sbit  NDT1_DMA2_CNDTR4_bit at DMA2_CNDTR4.B1;
    sbit  NDT2_DMA2_CNDTR4_bit at DMA2_CNDTR4.B2;
    sbit  NDT3_DMA2_CNDTR4_bit at DMA2_CNDTR4.B3;
    sbit  NDT4_DMA2_CNDTR4_bit at DMA2_CNDTR4.B4;
    sbit  NDT5_DMA2_CNDTR4_bit at DMA2_CNDTR4.B5;
    sbit  NDT6_DMA2_CNDTR4_bit at DMA2_CNDTR4.B6;
    sbit  NDT7_DMA2_CNDTR4_bit at DMA2_CNDTR4.B7;
    sbit  NDT8_DMA2_CNDTR4_bit at DMA2_CNDTR4.B8;
    sbit  NDT9_DMA2_CNDTR4_bit at DMA2_CNDTR4.B9;
    sbit  NDT10_DMA2_CNDTR4_bit at DMA2_CNDTR4.B10;
    sbit  NDT11_DMA2_CNDTR4_bit at DMA2_CNDTR4.B11;
    sbit  NDT12_DMA2_CNDTR4_bit at DMA2_CNDTR4.B12;
    sbit  NDT13_DMA2_CNDTR4_bit at DMA2_CNDTR4.B13;
    sbit  NDT14_DMA2_CNDTR4_bit at DMA2_CNDTR4.B14;
    sbit  NDT15_DMA2_CNDTR4_bit at DMA2_CNDTR4.B15;

sfr unsigned long   volatile DMA2_CPAR4           absolute 0x4002044C;
    sbit  PA0_DMA2_CPAR4_bit at DMA2_CPAR4.B0;
    sbit  PA1_DMA2_CPAR4_bit at DMA2_CPAR4.B1;
    sbit  PA2_DMA2_CPAR4_bit at DMA2_CPAR4.B2;
    sbit  PA3_DMA2_CPAR4_bit at DMA2_CPAR4.B3;
    sbit  PA4_DMA2_CPAR4_bit at DMA2_CPAR4.B4;
    sbit  PA5_DMA2_CPAR4_bit at DMA2_CPAR4.B5;
    sbit  PA6_DMA2_CPAR4_bit at DMA2_CPAR4.B6;
    sbit  PA7_DMA2_CPAR4_bit at DMA2_CPAR4.B7;
    sbit  PA8_DMA2_CPAR4_bit at DMA2_CPAR4.B8;
    sbit  PA9_DMA2_CPAR4_bit at DMA2_CPAR4.B9;
    sbit  PA10_DMA2_CPAR4_bit at DMA2_CPAR4.B10;
    sbit  PA11_DMA2_CPAR4_bit at DMA2_CPAR4.B11;
    sbit  PA12_DMA2_CPAR4_bit at DMA2_CPAR4.B12;
    sbit  PA13_DMA2_CPAR4_bit at DMA2_CPAR4.B13;
    sbit  PA14_DMA2_CPAR4_bit at DMA2_CPAR4.B14;
    sbit  PA15_DMA2_CPAR4_bit at DMA2_CPAR4.B15;
    sbit  PA16_DMA2_CPAR4_bit at DMA2_CPAR4.B16;
    sbit  PA17_DMA2_CPAR4_bit at DMA2_CPAR4.B17;
    sbit  PA18_DMA2_CPAR4_bit at DMA2_CPAR4.B18;
    sbit  PA19_DMA2_CPAR4_bit at DMA2_CPAR4.B19;
    sbit  PA20_DMA2_CPAR4_bit at DMA2_CPAR4.B20;
    sbit  PA21_DMA2_CPAR4_bit at DMA2_CPAR4.B21;
    sbit  PA22_DMA2_CPAR4_bit at DMA2_CPAR4.B22;
    sbit  PA23_DMA2_CPAR4_bit at DMA2_CPAR4.B23;
    sbit  PA24_DMA2_CPAR4_bit at DMA2_CPAR4.B24;
    sbit  PA25_DMA2_CPAR4_bit at DMA2_CPAR4.B25;
    sbit  PA26_DMA2_CPAR4_bit at DMA2_CPAR4.B26;
    sbit  PA27_DMA2_CPAR4_bit at DMA2_CPAR4.B27;
    sbit  PA28_DMA2_CPAR4_bit at DMA2_CPAR4.B28;
    sbit  PA29_DMA2_CPAR4_bit at DMA2_CPAR4.B29;
    sbit  PA30_DMA2_CPAR4_bit at DMA2_CPAR4.B30;
    sbit  PA31_DMA2_CPAR4_bit at DMA2_CPAR4.B31;

sfr unsigned long   volatile DMA2_CMAR4           absolute 0x40020450;
    sbit  MA0_DMA2_CMAR4_bit at DMA2_CMAR4.B0;
    sbit  MA1_DMA2_CMAR4_bit at DMA2_CMAR4.B1;
    sbit  MA2_DMA2_CMAR4_bit at DMA2_CMAR4.B2;
    sbit  MA3_DMA2_CMAR4_bit at DMA2_CMAR4.B3;
    sbit  MA4_DMA2_CMAR4_bit at DMA2_CMAR4.B4;
    sbit  MA5_DMA2_CMAR4_bit at DMA2_CMAR4.B5;
    sbit  MA6_DMA2_CMAR4_bit at DMA2_CMAR4.B6;
    sbit  MA7_DMA2_CMAR4_bit at DMA2_CMAR4.B7;
    sbit  MA8_DMA2_CMAR4_bit at DMA2_CMAR4.B8;
    sbit  MA9_DMA2_CMAR4_bit at DMA2_CMAR4.B9;
    sbit  MA10_DMA2_CMAR4_bit at DMA2_CMAR4.B10;
    sbit  MA11_DMA2_CMAR4_bit at DMA2_CMAR4.B11;
    sbit  MA12_DMA2_CMAR4_bit at DMA2_CMAR4.B12;
    sbit  MA13_DMA2_CMAR4_bit at DMA2_CMAR4.B13;
    sbit  MA14_DMA2_CMAR4_bit at DMA2_CMAR4.B14;
    sbit  MA15_DMA2_CMAR4_bit at DMA2_CMAR4.B15;
    sbit  MA16_DMA2_CMAR4_bit at DMA2_CMAR4.B16;
    sbit  MA17_DMA2_CMAR4_bit at DMA2_CMAR4.B17;
    sbit  MA18_DMA2_CMAR4_bit at DMA2_CMAR4.B18;
    sbit  MA19_DMA2_CMAR4_bit at DMA2_CMAR4.B19;
    sbit  MA20_DMA2_CMAR4_bit at DMA2_CMAR4.B20;
    sbit  MA21_DMA2_CMAR4_bit at DMA2_CMAR4.B21;
    sbit  MA22_DMA2_CMAR4_bit at DMA2_CMAR4.B22;
    sbit  MA23_DMA2_CMAR4_bit at DMA2_CMAR4.B23;
    sbit  MA24_DMA2_CMAR4_bit at DMA2_CMAR4.B24;
    sbit  MA25_DMA2_CMAR4_bit at DMA2_CMAR4.B25;
    sbit  MA26_DMA2_CMAR4_bit at DMA2_CMAR4.B26;
    sbit  MA27_DMA2_CMAR4_bit at DMA2_CMAR4.B27;
    sbit  MA28_DMA2_CMAR4_bit at DMA2_CMAR4.B28;
    sbit  MA29_DMA2_CMAR4_bit at DMA2_CMAR4.B29;
    sbit  MA30_DMA2_CMAR4_bit at DMA2_CMAR4.B30;
    sbit  MA31_DMA2_CMAR4_bit at DMA2_CMAR4.B31;

sfr unsigned long   volatile DMA2_CCR5            absolute 0x40020458;
    sbit  EN_DMA2_CCR5_bit at DMA2_CCR5.B0;
    sbit  TCIE_DMA2_CCR5_bit at DMA2_CCR5.B1;
    sbit  HTIE_DMA2_CCR5_bit at DMA2_CCR5.B2;
    sbit  TEIE_DMA2_CCR5_bit at DMA2_CCR5.B3;
    sbit  DIR_DMA2_CCR5_bit at DMA2_CCR5.B4;
    sbit  CIRC_DMA2_CCR5_bit at DMA2_CCR5.B5;
    sbit  PINC_DMA2_CCR5_bit at DMA2_CCR5.B6;
    sbit  MINC_DMA2_CCR5_bit at DMA2_CCR5.B7;
    sbit  PSIZE0_DMA2_CCR5_bit at DMA2_CCR5.B8;
    sbit  PSIZE1_DMA2_CCR5_bit at DMA2_CCR5.B9;
    sbit  MSIZE0_DMA2_CCR5_bit at DMA2_CCR5.B10;
    sbit  MSIZE1_DMA2_CCR5_bit at DMA2_CCR5.B11;
    sbit  PL0_DMA2_CCR5_bit at DMA2_CCR5.B12;
    sbit  PL1_DMA2_CCR5_bit at DMA2_CCR5.B13;
    sbit  MEM2MEM_DMA2_CCR5_bit at DMA2_CCR5.B14;

sfr unsigned long   volatile DMA2_CNDTR5          absolute 0x4002045C;
    sbit  NDT0_DMA2_CNDTR5_bit at DMA2_CNDTR5.B0;
    sbit  NDT1_DMA2_CNDTR5_bit at DMA2_CNDTR5.B1;
    sbit  NDT2_DMA2_CNDTR5_bit at DMA2_CNDTR5.B2;
    sbit  NDT3_DMA2_CNDTR5_bit at DMA2_CNDTR5.B3;
    sbit  NDT4_DMA2_CNDTR5_bit at DMA2_CNDTR5.B4;
    sbit  NDT5_DMA2_CNDTR5_bit at DMA2_CNDTR5.B5;
    sbit  NDT6_DMA2_CNDTR5_bit at DMA2_CNDTR5.B6;
    sbit  NDT7_DMA2_CNDTR5_bit at DMA2_CNDTR5.B7;
    sbit  NDT8_DMA2_CNDTR5_bit at DMA2_CNDTR5.B8;
    sbit  NDT9_DMA2_CNDTR5_bit at DMA2_CNDTR5.B9;
    sbit  NDT10_DMA2_CNDTR5_bit at DMA2_CNDTR5.B10;
    sbit  NDT11_DMA2_CNDTR5_bit at DMA2_CNDTR5.B11;
    sbit  NDT12_DMA2_CNDTR5_bit at DMA2_CNDTR5.B12;
    sbit  NDT13_DMA2_CNDTR5_bit at DMA2_CNDTR5.B13;
    sbit  NDT14_DMA2_CNDTR5_bit at DMA2_CNDTR5.B14;
    sbit  NDT15_DMA2_CNDTR5_bit at DMA2_CNDTR5.B15;

sfr unsigned long   volatile DMA2_CPAR5           absolute 0x40020460;
    sbit  PA0_DMA2_CPAR5_bit at DMA2_CPAR5.B0;
    sbit  PA1_DMA2_CPAR5_bit at DMA2_CPAR5.B1;
    sbit  PA2_DMA2_CPAR5_bit at DMA2_CPAR5.B2;
    sbit  PA3_DMA2_CPAR5_bit at DMA2_CPAR5.B3;
    sbit  PA4_DMA2_CPAR5_bit at DMA2_CPAR5.B4;
    sbit  PA5_DMA2_CPAR5_bit at DMA2_CPAR5.B5;
    sbit  PA6_DMA2_CPAR5_bit at DMA2_CPAR5.B6;
    sbit  PA7_DMA2_CPAR5_bit at DMA2_CPAR5.B7;
    sbit  PA8_DMA2_CPAR5_bit at DMA2_CPAR5.B8;
    sbit  PA9_DMA2_CPAR5_bit at DMA2_CPAR5.B9;
    sbit  PA10_DMA2_CPAR5_bit at DMA2_CPAR5.B10;
    sbit  PA11_DMA2_CPAR5_bit at DMA2_CPAR5.B11;
    sbit  PA12_DMA2_CPAR5_bit at DMA2_CPAR5.B12;
    sbit  PA13_DMA2_CPAR5_bit at DMA2_CPAR5.B13;
    sbit  PA14_DMA2_CPAR5_bit at DMA2_CPAR5.B14;
    sbit  PA15_DMA2_CPAR5_bit at DMA2_CPAR5.B15;
    sbit  PA16_DMA2_CPAR5_bit at DMA2_CPAR5.B16;
    sbit  PA17_DMA2_CPAR5_bit at DMA2_CPAR5.B17;
    sbit  PA18_DMA2_CPAR5_bit at DMA2_CPAR5.B18;
    sbit  PA19_DMA2_CPAR5_bit at DMA2_CPAR5.B19;
    sbit  PA20_DMA2_CPAR5_bit at DMA2_CPAR5.B20;
    sbit  PA21_DMA2_CPAR5_bit at DMA2_CPAR5.B21;
    sbit  PA22_DMA2_CPAR5_bit at DMA2_CPAR5.B22;
    sbit  PA23_DMA2_CPAR5_bit at DMA2_CPAR5.B23;
    sbit  PA24_DMA2_CPAR5_bit at DMA2_CPAR5.B24;
    sbit  PA25_DMA2_CPAR5_bit at DMA2_CPAR5.B25;
    sbit  PA26_DMA2_CPAR5_bit at DMA2_CPAR5.B26;
    sbit  PA27_DMA2_CPAR5_bit at DMA2_CPAR5.B27;
    sbit  PA28_DMA2_CPAR5_bit at DMA2_CPAR5.B28;
    sbit  PA29_DMA2_CPAR5_bit at DMA2_CPAR5.B29;
    sbit  PA30_DMA2_CPAR5_bit at DMA2_CPAR5.B30;
    sbit  PA31_DMA2_CPAR5_bit at DMA2_CPAR5.B31;

sfr unsigned long   volatile DMA2_CMAR5           absolute 0x40020464;
    sbit  MA0_DMA2_CMAR5_bit at DMA2_CMAR5.B0;
    sbit  MA1_DMA2_CMAR5_bit at DMA2_CMAR5.B1;
    sbit  MA2_DMA2_CMAR5_bit at DMA2_CMAR5.B2;
    sbit  MA3_DMA2_CMAR5_bit at DMA2_CMAR5.B3;
    sbit  MA4_DMA2_CMAR5_bit at DMA2_CMAR5.B4;
    sbit  MA5_DMA2_CMAR5_bit at DMA2_CMAR5.B5;
    sbit  MA6_DMA2_CMAR5_bit at DMA2_CMAR5.B6;
    sbit  MA7_DMA2_CMAR5_bit at DMA2_CMAR5.B7;
    sbit  MA8_DMA2_CMAR5_bit at DMA2_CMAR5.B8;
    sbit  MA9_DMA2_CMAR5_bit at DMA2_CMAR5.B9;
    sbit  MA10_DMA2_CMAR5_bit at DMA2_CMAR5.B10;
    sbit  MA11_DMA2_CMAR5_bit at DMA2_CMAR5.B11;
    sbit  MA12_DMA2_CMAR5_bit at DMA2_CMAR5.B12;
    sbit  MA13_DMA2_CMAR5_bit at DMA2_CMAR5.B13;
    sbit  MA14_DMA2_CMAR5_bit at DMA2_CMAR5.B14;
    sbit  MA15_DMA2_CMAR5_bit at DMA2_CMAR5.B15;
    sbit  MA16_DMA2_CMAR5_bit at DMA2_CMAR5.B16;
    sbit  MA17_DMA2_CMAR5_bit at DMA2_CMAR5.B17;
    sbit  MA18_DMA2_CMAR5_bit at DMA2_CMAR5.B18;
    sbit  MA19_DMA2_CMAR5_bit at DMA2_CMAR5.B19;
    sbit  MA20_DMA2_CMAR5_bit at DMA2_CMAR5.B20;
    sbit  MA21_DMA2_CMAR5_bit at DMA2_CMAR5.B21;
    sbit  MA22_DMA2_CMAR5_bit at DMA2_CMAR5.B22;
    sbit  MA23_DMA2_CMAR5_bit at DMA2_CMAR5.B23;
    sbit  MA24_DMA2_CMAR5_bit at DMA2_CMAR5.B24;
    sbit  MA25_DMA2_CMAR5_bit at DMA2_CMAR5.B25;
    sbit  MA26_DMA2_CMAR5_bit at DMA2_CMAR5.B26;
    sbit  MA27_DMA2_CMAR5_bit at DMA2_CMAR5.B27;
    sbit  MA28_DMA2_CMAR5_bit at DMA2_CMAR5.B28;
    sbit  MA29_DMA2_CMAR5_bit at DMA2_CMAR5.B29;
    sbit  MA30_DMA2_CMAR5_bit at DMA2_CMAR5.B30;
    sbit  MA31_DMA2_CMAR5_bit at DMA2_CMAR5.B31;

sfr unsigned long   volatile DMA2_CCR6            absolute 0x4002046C;
    sbit  EN_DMA2_CCR6_bit at DMA2_CCR6.B0;
    sbit  TCIE_DMA2_CCR6_bit at DMA2_CCR6.B1;
    sbit  HTIE_DMA2_CCR6_bit at DMA2_CCR6.B2;
    sbit  TEIE_DMA2_CCR6_bit at DMA2_CCR6.B3;
    sbit  DIR_DMA2_CCR6_bit at DMA2_CCR6.B4;
    sbit  CIRC_DMA2_CCR6_bit at DMA2_CCR6.B5;
    sbit  PINC_DMA2_CCR6_bit at DMA2_CCR6.B6;
    sbit  MINC_DMA2_CCR6_bit at DMA2_CCR6.B7;
    sbit  PSIZE0_DMA2_CCR6_bit at DMA2_CCR6.B8;
    sbit  PSIZE1_DMA2_CCR6_bit at DMA2_CCR6.B9;
    sbit  MSIZE0_DMA2_CCR6_bit at DMA2_CCR6.B10;
    sbit  MSIZE1_DMA2_CCR6_bit at DMA2_CCR6.B11;
    sbit  PL0_DMA2_CCR6_bit at DMA2_CCR6.B12;
    sbit  PL1_DMA2_CCR6_bit at DMA2_CCR6.B13;
    sbit  MEM2MEM_DMA2_CCR6_bit at DMA2_CCR6.B14;

sfr unsigned long   volatile DMA2_CNDTR6          absolute 0x40020470;
    sbit  NDT0_DMA2_CNDTR6_bit at DMA2_CNDTR6.B0;
    sbit  NDT1_DMA2_CNDTR6_bit at DMA2_CNDTR6.B1;
    sbit  NDT2_DMA2_CNDTR6_bit at DMA2_CNDTR6.B2;
    sbit  NDT3_DMA2_CNDTR6_bit at DMA2_CNDTR6.B3;
    sbit  NDT4_DMA2_CNDTR6_bit at DMA2_CNDTR6.B4;
    sbit  NDT5_DMA2_CNDTR6_bit at DMA2_CNDTR6.B5;
    sbit  NDT6_DMA2_CNDTR6_bit at DMA2_CNDTR6.B6;
    sbit  NDT7_DMA2_CNDTR6_bit at DMA2_CNDTR6.B7;
    sbit  NDT8_DMA2_CNDTR6_bit at DMA2_CNDTR6.B8;
    sbit  NDT9_DMA2_CNDTR6_bit at DMA2_CNDTR6.B9;
    sbit  NDT10_DMA2_CNDTR6_bit at DMA2_CNDTR6.B10;
    sbit  NDT11_DMA2_CNDTR6_bit at DMA2_CNDTR6.B11;
    sbit  NDT12_DMA2_CNDTR6_bit at DMA2_CNDTR6.B12;
    sbit  NDT13_DMA2_CNDTR6_bit at DMA2_CNDTR6.B13;
    sbit  NDT14_DMA2_CNDTR6_bit at DMA2_CNDTR6.B14;
    sbit  NDT15_DMA2_CNDTR6_bit at DMA2_CNDTR6.B15;

sfr unsigned long   volatile DMA2_CPAR6           absolute 0x40020474;
    sbit  PA0_DMA2_CPAR6_bit at DMA2_CPAR6.B0;
    sbit  PA1_DMA2_CPAR6_bit at DMA2_CPAR6.B1;
    sbit  PA2_DMA2_CPAR6_bit at DMA2_CPAR6.B2;
    sbit  PA3_DMA2_CPAR6_bit at DMA2_CPAR6.B3;
    sbit  PA4_DMA2_CPAR6_bit at DMA2_CPAR6.B4;
    sbit  PA5_DMA2_CPAR6_bit at DMA2_CPAR6.B5;
    sbit  PA6_DMA2_CPAR6_bit at DMA2_CPAR6.B6;
    sbit  PA7_DMA2_CPAR6_bit at DMA2_CPAR6.B7;
    sbit  PA8_DMA2_CPAR6_bit at DMA2_CPAR6.B8;
    sbit  PA9_DMA2_CPAR6_bit at DMA2_CPAR6.B9;
    sbit  PA10_DMA2_CPAR6_bit at DMA2_CPAR6.B10;
    sbit  PA11_DMA2_CPAR6_bit at DMA2_CPAR6.B11;
    sbit  PA12_DMA2_CPAR6_bit at DMA2_CPAR6.B12;
    sbit  PA13_DMA2_CPAR6_bit at DMA2_CPAR6.B13;
    sbit  PA14_DMA2_CPAR6_bit at DMA2_CPAR6.B14;
    sbit  PA15_DMA2_CPAR6_bit at DMA2_CPAR6.B15;
    sbit  PA16_DMA2_CPAR6_bit at DMA2_CPAR6.B16;
    sbit  PA17_DMA2_CPAR6_bit at DMA2_CPAR6.B17;
    sbit  PA18_DMA2_CPAR6_bit at DMA2_CPAR6.B18;
    sbit  PA19_DMA2_CPAR6_bit at DMA2_CPAR6.B19;
    sbit  PA20_DMA2_CPAR6_bit at DMA2_CPAR6.B20;
    sbit  PA21_DMA2_CPAR6_bit at DMA2_CPAR6.B21;
    sbit  PA22_DMA2_CPAR6_bit at DMA2_CPAR6.B22;
    sbit  PA23_DMA2_CPAR6_bit at DMA2_CPAR6.B23;
    sbit  PA24_DMA2_CPAR6_bit at DMA2_CPAR6.B24;
    sbit  PA25_DMA2_CPAR6_bit at DMA2_CPAR6.B25;
    sbit  PA26_DMA2_CPAR6_bit at DMA2_CPAR6.B26;
    sbit  PA27_DMA2_CPAR6_bit at DMA2_CPAR6.B27;
    sbit  PA28_DMA2_CPAR6_bit at DMA2_CPAR6.B28;
    sbit  PA29_DMA2_CPAR6_bit at DMA2_CPAR6.B29;
    sbit  PA30_DMA2_CPAR6_bit at DMA2_CPAR6.B30;
    sbit  PA31_DMA2_CPAR6_bit at DMA2_CPAR6.B31;

sfr unsigned long   volatile DMA2_CMAR6           absolute 0x40020478;
    sbit  MA0_DMA2_CMAR6_bit at DMA2_CMAR6.B0;
    sbit  MA1_DMA2_CMAR6_bit at DMA2_CMAR6.B1;
    sbit  MA2_DMA2_CMAR6_bit at DMA2_CMAR6.B2;
    sbit  MA3_DMA2_CMAR6_bit at DMA2_CMAR6.B3;
    sbit  MA4_DMA2_CMAR6_bit at DMA2_CMAR6.B4;
    sbit  MA5_DMA2_CMAR6_bit at DMA2_CMAR6.B5;
    sbit  MA6_DMA2_CMAR6_bit at DMA2_CMAR6.B6;
    sbit  MA7_DMA2_CMAR6_bit at DMA2_CMAR6.B7;
    sbit  MA8_DMA2_CMAR6_bit at DMA2_CMAR6.B8;
    sbit  MA9_DMA2_CMAR6_bit at DMA2_CMAR6.B9;
    sbit  MA10_DMA2_CMAR6_bit at DMA2_CMAR6.B10;
    sbit  MA11_DMA2_CMAR6_bit at DMA2_CMAR6.B11;
    sbit  MA12_DMA2_CMAR6_bit at DMA2_CMAR6.B12;
    sbit  MA13_DMA2_CMAR6_bit at DMA2_CMAR6.B13;
    sbit  MA14_DMA2_CMAR6_bit at DMA2_CMAR6.B14;
    sbit  MA15_DMA2_CMAR6_bit at DMA2_CMAR6.B15;
    sbit  MA16_DMA2_CMAR6_bit at DMA2_CMAR6.B16;
    sbit  MA17_DMA2_CMAR6_bit at DMA2_CMAR6.B17;
    sbit  MA18_DMA2_CMAR6_bit at DMA2_CMAR6.B18;
    sbit  MA19_DMA2_CMAR6_bit at DMA2_CMAR6.B19;
    sbit  MA20_DMA2_CMAR6_bit at DMA2_CMAR6.B20;
    sbit  MA21_DMA2_CMAR6_bit at DMA2_CMAR6.B21;
    sbit  MA22_DMA2_CMAR6_bit at DMA2_CMAR6.B22;
    sbit  MA23_DMA2_CMAR6_bit at DMA2_CMAR6.B23;
    sbit  MA24_DMA2_CMAR6_bit at DMA2_CMAR6.B24;
    sbit  MA25_DMA2_CMAR6_bit at DMA2_CMAR6.B25;
    sbit  MA26_DMA2_CMAR6_bit at DMA2_CMAR6.B26;
    sbit  MA27_DMA2_CMAR6_bit at DMA2_CMAR6.B27;
    sbit  MA28_DMA2_CMAR6_bit at DMA2_CMAR6.B28;
    sbit  MA29_DMA2_CMAR6_bit at DMA2_CMAR6.B29;
    sbit  MA30_DMA2_CMAR6_bit at DMA2_CMAR6.B30;
    sbit  MA31_DMA2_CMAR6_bit at DMA2_CMAR6.B31;

sfr unsigned long   volatile DMA2_CCR7            absolute 0x40020480;
    sbit  EN_DMA2_CCR7_bit at DMA2_CCR7.B0;
    sbit  TCIE_DMA2_CCR7_bit at DMA2_CCR7.B1;
    sbit  HTIE_DMA2_CCR7_bit at DMA2_CCR7.B2;
    sbit  TEIE_DMA2_CCR7_bit at DMA2_CCR7.B3;
    sbit  DIR_DMA2_CCR7_bit at DMA2_CCR7.B4;
    sbit  CIRC_DMA2_CCR7_bit at DMA2_CCR7.B5;
    sbit  PINC_DMA2_CCR7_bit at DMA2_CCR7.B6;
    sbit  MINC_DMA2_CCR7_bit at DMA2_CCR7.B7;
    sbit  PSIZE0_DMA2_CCR7_bit at DMA2_CCR7.B8;
    sbit  PSIZE1_DMA2_CCR7_bit at DMA2_CCR7.B9;
    sbit  MSIZE0_DMA2_CCR7_bit at DMA2_CCR7.B10;
    sbit  MSIZE1_DMA2_CCR7_bit at DMA2_CCR7.B11;
    sbit  PL0_DMA2_CCR7_bit at DMA2_CCR7.B12;
    sbit  PL1_DMA2_CCR7_bit at DMA2_CCR7.B13;
    sbit  MEM2MEM_DMA2_CCR7_bit at DMA2_CCR7.B14;

sfr unsigned long   volatile DMA2_CNDTR7          absolute 0x40020484;
    sbit  NDT0_DMA2_CNDTR7_bit at DMA2_CNDTR7.B0;
    sbit  NDT1_DMA2_CNDTR7_bit at DMA2_CNDTR7.B1;
    sbit  NDT2_DMA2_CNDTR7_bit at DMA2_CNDTR7.B2;
    sbit  NDT3_DMA2_CNDTR7_bit at DMA2_CNDTR7.B3;
    sbit  NDT4_DMA2_CNDTR7_bit at DMA2_CNDTR7.B4;
    sbit  NDT5_DMA2_CNDTR7_bit at DMA2_CNDTR7.B5;
    sbit  NDT6_DMA2_CNDTR7_bit at DMA2_CNDTR7.B6;
    sbit  NDT7_DMA2_CNDTR7_bit at DMA2_CNDTR7.B7;
    sbit  NDT8_DMA2_CNDTR7_bit at DMA2_CNDTR7.B8;
    sbit  NDT9_DMA2_CNDTR7_bit at DMA2_CNDTR7.B9;
    sbit  NDT10_DMA2_CNDTR7_bit at DMA2_CNDTR7.B10;
    sbit  NDT11_DMA2_CNDTR7_bit at DMA2_CNDTR7.B11;
    sbit  NDT12_DMA2_CNDTR7_bit at DMA2_CNDTR7.B12;
    sbit  NDT13_DMA2_CNDTR7_bit at DMA2_CNDTR7.B13;
    sbit  NDT14_DMA2_CNDTR7_bit at DMA2_CNDTR7.B14;
    sbit  NDT15_DMA2_CNDTR7_bit at DMA2_CNDTR7.B15;

sfr unsigned long   volatile DMA2_CPAR7           absolute 0x40020488;
    sbit  PA0_DMA2_CPAR7_bit at DMA2_CPAR7.B0;
    sbit  PA1_DMA2_CPAR7_bit at DMA2_CPAR7.B1;
    sbit  PA2_DMA2_CPAR7_bit at DMA2_CPAR7.B2;
    sbit  PA3_DMA2_CPAR7_bit at DMA2_CPAR7.B3;
    sbit  PA4_DMA2_CPAR7_bit at DMA2_CPAR7.B4;
    sbit  PA5_DMA2_CPAR7_bit at DMA2_CPAR7.B5;
    sbit  PA6_DMA2_CPAR7_bit at DMA2_CPAR7.B6;
    sbit  PA7_DMA2_CPAR7_bit at DMA2_CPAR7.B7;
    sbit  PA8_DMA2_CPAR7_bit at DMA2_CPAR7.B8;
    sbit  PA9_DMA2_CPAR7_bit at DMA2_CPAR7.B9;
    sbit  PA10_DMA2_CPAR7_bit at DMA2_CPAR7.B10;
    sbit  PA11_DMA2_CPAR7_bit at DMA2_CPAR7.B11;
    sbit  PA12_DMA2_CPAR7_bit at DMA2_CPAR7.B12;
    sbit  PA13_DMA2_CPAR7_bit at DMA2_CPAR7.B13;
    sbit  PA14_DMA2_CPAR7_bit at DMA2_CPAR7.B14;
    sbit  PA15_DMA2_CPAR7_bit at DMA2_CPAR7.B15;
    sbit  PA16_DMA2_CPAR7_bit at DMA2_CPAR7.B16;
    sbit  PA17_DMA2_CPAR7_bit at DMA2_CPAR7.B17;
    sbit  PA18_DMA2_CPAR7_bit at DMA2_CPAR7.B18;
    sbit  PA19_DMA2_CPAR7_bit at DMA2_CPAR7.B19;
    sbit  PA20_DMA2_CPAR7_bit at DMA2_CPAR7.B20;
    sbit  PA21_DMA2_CPAR7_bit at DMA2_CPAR7.B21;
    sbit  PA22_DMA2_CPAR7_bit at DMA2_CPAR7.B22;
    sbit  PA23_DMA2_CPAR7_bit at DMA2_CPAR7.B23;
    sbit  PA24_DMA2_CPAR7_bit at DMA2_CPAR7.B24;
    sbit  PA25_DMA2_CPAR7_bit at DMA2_CPAR7.B25;
    sbit  PA26_DMA2_CPAR7_bit at DMA2_CPAR7.B26;
    sbit  PA27_DMA2_CPAR7_bit at DMA2_CPAR7.B27;
    sbit  PA28_DMA2_CPAR7_bit at DMA2_CPAR7.B28;
    sbit  PA29_DMA2_CPAR7_bit at DMA2_CPAR7.B29;
    sbit  PA30_DMA2_CPAR7_bit at DMA2_CPAR7.B30;
    sbit  PA31_DMA2_CPAR7_bit at DMA2_CPAR7.B31;

sfr unsigned long   volatile DMA2_CMAR7           absolute 0x4002048C;
    sbit  MA0_DMA2_CMAR7_bit at DMA2_CMAR7.B0;
    sbit  MA1_DMA2_CMAR7_bit at DMA2_CMAR7.B1;
    sbit  MA2_DMA2_CMAR7_bit at DMA2_CMAR7.B2;
    sbit  MA3_DMA2_CMAR7_bit at DMA2_CMAR7.B3;
    sbit  MA4_DMA2_CMAR7_bit at DMA2_CMAR7.B4;
    sbit  MA5_DMA2_CMAR7_bit at DMA2_CMAR7.B5;
    sbit  MA6_DMA2_CMAR7_bit at DMA2_CMAR7.B6;
    sbit  MA7_DMA2_CMAR7_bit at DMA2_CMAR7.B7;
    sbit  MA8_DMA2_CMAR7_bit at DMA2_CMAR7.B8;
    sbit  MA9_DMA2_CMAR7_bit at DMA2_CMAR7.B9;
    sbit  MA10_DMA2_CMAR7_bit at DMA2_CMAR7.B10;
    sbit  MA11_DMA2_CMAR7_bit at DMA2_CMAR7.B11;
    sbit  MA12_DMA2_CMAR7_bit at DMA2_CMAR7.B12;
    sbit  MA13_DMA2_CMAR7_bit at DMA2_CMAR7.B13;
    sbit  MA14_DMA2_CMAR7_bit at DMA2_CMAR7.B14;
    sbit  MA15_DMA2_CMAR7_bit at DMA2_CMAR7.B15;
    sbit  MA16_DMA2_CMAR7_bit at DMA2_CMAR7.B16;
    sbit  MA17_DMA2_CMAR7_bit at DMA2_CMAR7.B17;
    sbit  MA18_DMA2_CMAR7_bit at DMA2_CMAR7.B18;
    sbit  MA19_DMA2_CMAR7_bit at DMA2_CMAR7.B19;
    sbit  MA20_DMA2_CMAR7_bit at DMA2_CMAR7.B20;
    sbit  MA21_DMA2_CMAR7_bit at DMA2_CMAR7.B21;
    sbit  MA22_DMA2_CMAR7_bit at DMA2_CMAR7.B22;
    sbit  MA23_DMA2_CMAR7_bit at DMA2_CMAR7.B23;
    sbit  MA24_DMA2_CMAR7_bit at DMA2_CMAR7.B24;
    sbit  MA25_DMA2_CMAR7_bit at DMA2_CMAR7.B25;
    sbit  MA26_DMA2_CMAR7_bit at DMA2_CMAR7.B26;
    sbit  MA27_DMA2_CMAR7_bit at DMA2_CMAR7.B27;
    sbit  MA28_DMA2_CMAR7_bit at DMA2_CMAR7.B28;
    sbit  MA29_DMA2_CMAR7_bit at DMA2_CMAR7.B29;
    sbit  MA30_DMA2_CMAR7_bit at DMA2_CMAR7.B30;
    sbit  MA31_DMA2_CMAR7_bit at DMA2_CMAR7.B31;

sfr unsigned long   volatile FLASH_ACR            absolute 0x40022000;
    const register unsigned short int HLFCYA = 3;
    sbit  HLFCYA_bit at FLASH_ACR.B3;

sfr unsigned long   volatile FLASH_KEYR           absolute 0x40022004;
    const register unsigned short int KEY0 = 0;
    sbit  KEY0_bit at FLASH_KEYR.B0;
    const register unsigned short int KEY1 = 1;
    sbit  KEY1_bit at FLASH_KEYR.B1;
    const register unsigned short int KEY2 = 2;
    sbit  KEY2_bit at FLASH_KEYR.B2;
    const register unsigned short int KEY3 = 3;
    sbit  KEY3_bit at FLASH_KEYR.B3;
    const register unsigned short int KEY4 = 4;
    sbit  KEY4_bit at FLASH_KEYR.B4;
    const register unsigned short int KEY5 = 5;
    sbit  KEY5_bit at FLASH_KEYR.B5;
    const register unsigned short int KEY6 = 6;
    sbit  KEY6_bit at FLASH_KEYR.B6;
    const register unsigned short int KEY7 = 7;
    sbit  KEY7_bit at FLASH_KEYR.B7;
    const register unsigned short int KEY8 = 8;
    sbit  KEY8_bit at FLASH_KEYR.B8;
    const register unsigned short int KEY9 = 9;
    sbit  KEY9_bit at FLASH_KEYR.B9;
    const register unsigned short int KEY10 = 10;
    sbit  KEY10_bit at FLASH_KEYR.B10;
    const register unsigned short int KEY11 = 11;
    sbit  KEY11_bit at FLASH_KEYR.B11;
    const register unsigned short int KEY12 = 12;
    sbit  KEY12_bit at FLASH_KEYR.B12;
    const register unsigned short int KEY13 = 13;
    sbit  KEY13_bit at FLASH_KEYR.B13;
    const register unsigned short int KEY14 = 14;
    sbit  KEY14_bit at FLASH_KEYR.B14;
    const register unsigned short int KEY15 = 15;
    sbit  KEY15_bit at FLASH_KEYR.B15;
    const register unsigned short int KEY16 = 16;
    sbit  KEY16_bit at FLASH_KEYR.B16;
    const register unsigned short int KEY17 = 17;
    sbit  KEY17_bit at FLASH_KEYR.B17;
    const register unsigned short int KEY18 = 18;
    sbit  KEY18_bit at FLASH_KEYR.B18;
    const register unsigned short int KEY19 = 19;
    sbit  KEY19_bit at FLASH_KEYR.B19;
    const register unsigned short int KEY20 = 20;
    sbit  KEY20_bit at FLASH_KEYR.B20;
    const register unsigned short int KEY21 = 21;
    sbit  KEY21_bit at FLASH_KEYR.B21;
    const register unsigned short int KEY22 = 22;
    sbit  KEY22_bit at FLASH_KEYR.B22;
    const register unsigned short int KEY23 = 23;
    sbit  KEY23_bit at FLASH_KEYR.B23;
    const register unsigned short int KEY24 = 24;
    sbit  KEY24_bit at FLASH_KEYR.B24;
    const register unsigned short int KEY25 = 25;
    sbit  KEY25_bit at FLASH_KEYR.B25;
    const register unsigned short int KEY26 = 26;
    sbit  KEY26_bit at FLASH_KEYR.B26;
    const register unsigned short int KEY27 = 27;
    sbit  KEY27_bit at FLASH_KEYR.B27;
    const register unsigned short int KEY28 = 28;
    sbit  KEY28_bit at FLASH_KEYR.B28;
    const register unsigned short int KEY29 = 29;
    sbit  KEY29_bit at FLASH_KEYR.B29;
    const register unsigned short int KEY30 = 30;
    sbit  KEY30_bit at FLASH_KEYR.B30;
    const register unsigned short int KEY31 = 31;
    sbit  KEY31_bit at FLASH_KEYR.B31;

sfr unsigned long   volatile FLASH_OPTKEYR        absolute 0x40022008;
    const register unsigned short int OPTKEY0 = 0;
    sbit  OPTKEY0_bit at FLASH_OPTKEYR.B0;
    const register unsigned short int OPTKEY1 = 1;
    sbit  OPTKEY1_bit at FLASH_OPTKEYR.B1;
    const register unsigned short int OPTKEY2 = 2;
    sbit  OPTKEY2_bit at FLASH_OPTKEYR.B2;
    const register unsigned short int OPTKEY3 = 3;
    sbit  OPTKEY3_bit at FLASH_OPTKEYR.B3;
    const register unsigned short int OPTKEY4 = 4;
    sbit  OPTKEY4_bit at FLASH_OPTKEYR.B4;
    const register unsigned short int OPTKEY5 = 5;
    sbit  OPTKEY5_bit at FLASH_OPTKEYR.B5;
    const register unsigned short int OPTKEY6 = 6;
    sbit  OPTKEY6_bit at FLASH_OPTKEYR.B6;
    const register unsigned short int OPTKEY7 = 7;
    sbit  OPTKEY7_bit at FLASH_OPTKEYR.B7;
    const register unsigned short int OPTKEY8 = 8;
    sbit  OPTKEY8_bit at FLASH_OPTKEYR.B8;
    const register unsigned short int OPTKEY9 = 9;
    sbit  OPTKEY9_bit at FLASH_OPTKEYR.B9;
    const register unsigned short int OPTKEY10 = 10;
    sbit  OPTKEY10_bit at FLASH_OPTKEYR.B10;
    const register unsigned short int OPTKEY11 = 11;
    sbit  OPTKEY11_bit at FLASH_OPTKEYR.B11;
    const register unsigned short int OPTKEY12 = 12;
    sbit  OPTKEY12_bit at FLASH_OPTKEYR.B12;
    const register unsigned short int OPTKEY13 = 13;
    sbit  OPTKEY13_bit at FLASH_OPTKEYR.B13;
    const register unsigned short int OPTKEY14 = 14;
    sbit  OPTKEY14_bit at FLASH_OPTKEYR.B14;
    const register unsigned short int OPTKEY15 = 15;
    sbit  OPTKEY15_bit at FLASH_OPTKEYR.B15;
    const register unsigned short int OPTKEY16 = 16;
    sbit  OPTKEY16_bit at FLASH_OPTKEYR.B16;
    const register unsigned short int OPTKEY17 = 17;
    sbit  OPTKEY17_bit at FLASH_OPTKEYR.B17;
    const register unsigned short int OPTKEY18 = 18;
    sbit  OPTKEY18_bit at FLASH_OPTKEYR.B18;
    const register unsigned short int OPTKEY19 = 19;
    sbit  OPTKEY19_bit at FLASH_OPTKEYR.B19;
    const register unsigned short int OPTKEY20 = 20;
    sbit  OPTKEY20_bit at FLASH_OPTKEYR.B20;
    const register unsigned short int OPTKEY21 = 21;
    sbit  OPTKEY21_bit at FLASH_OPTKEYR.B21;
    const register unsigned short int OPTKEY22 = 22;
    sbit  OPTKEY22_bit at FLASH_OPTKEYR.B22;
    const register unsigned short int OPTKEY23 = 23;
    sbit  OPTKEY23_bit at FLASH_OPTKEYR.B23;
    const register unsigned short int OPTKEY24 = 24;
    sbit  OPTKEY24_bit at FLASH_OPTKEYR.B24;
    const register unsigned short int OPTKEY25 = 25;
    sbit  OPTKEY25_bit at FLASH_OPTKEYR.B25;
    const register unsigned short int OPTKEY26 = 26;
    sbit  OPTKEY26_bit at FLASH_OPTKEYR.B26;
    const register unsigned short int OPTKEY27 = 27;
    sbit  OPTKEY27_bit at FLASH_OPTKEYR.B27;
    const register unsigned short int OPTKEY28 = 28;
    sbit  OPTKEY28_bit at FLASH_OPTKEYR.B28;
    const register unsigned short int OPTKEY29 = 29;
    sbit  OPTKEY29_bit at FLASH_OPTKEYR.B29;
    const register unsigned short int OPTKEY30 = 30;
    sbit  OPTKEY30_bit at FLASH_OPTKEYR.B30;
    const register unsigned short int OPTKEY31 = 31;
    sbit  OPTKEY31_bit at FLASH_OPTKEYR.B31;

sfr unsigned long   volatile FLASH_SR             absolute 0x4002200C;
    const register unsigned short int EOP = 5;
    sbit  EOP_bit at FLASH_SR.B5;
    const register unsigned short int WRPRTERR = 4;
    sbit  WRPRTERR_bit at FLASH_SR.B4;
    const register unsigned short int PGERR = 2;
    sbit  PGERR_bit at FLASH_SR.B2;
    const register unsigned short int BSY = 0;
    sbit  BSY_bit at FLASH_SR.B0;

sfr unsigned long   volatile FLASH_CR             absolute 0x40022010;
    const register unsigned short int PG = 0;
    sbit  PG_bit at FLASH_CR.B0;
    const register unsigned short int PER = 1;
    sbit  PER_bit at FLASH_CR.B1;
    const register unsigned short int MER = 2;
    sbit  MER_bit at FLASH_CR.B2;
    const register unsigned short int OPTPG = 4;
    sbit  OPTPG_bit at FLASH_CR.B4;
    const register unsigned short int OPTER = 5;
    sbit  OPTER_bit at FLASH_CR.B5;
    const register unsigned short int STRT = 6;
    sbit  STRT_bit at FLASH_CR.B6;
    const register unsigned short int LOCK_ = 7;
    sbit  LOCK_bit at FLASH_CR.B7;
    const register unsigned short int OPTWRE = 9;
    sbit  OPTWRE_bit at FLASH_CR.B9;
    const register unsigned short int ERRIE = 10;
    sbit  ERRIE_bit at FLASH_CR.B10;
    const register unsigned short int EOPIE = 12;
    sbit  EOPIE_bit at FLASH_CR.B12;

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
    const register unsigned short int OPTERR = 0;
    sbit  OPTERR_bit at FLASH_OBR.B0;
    const register unsigned short int RDPRT = 1;
    sbit  RDPRT_bit at FLASH_OBR.B1;
    const register unsigned short int WDG_SW = 2;
    sbit  WDG_SW_bit at FLASH_OBR.B2;
    const register unsigned short int nRST_STOP = 3;
    sbit  nRST_STOP_bit at FLASH_OBR.B3;
    const register unsigned short int nRST_STDBY = 4;
    sbit  nRST_STDBY_bit at FLASH_OBR.B4;
    const register unsigned short int Data00 = 10;
    sbit  Data00_bit at FLASH_OBR.B10;
    const register unsigned short int Data01 = 11;
    sbit  Data01_bit at FLASH_OBR.B11;
    const register unsigned short int Data02 = 12;
    sbit  Data02_bit at FLASH_OBR.B12;
    const register unsigned short int Data03 = 13;
    sbit  Data03_bit at FLASH_OBR.B13;
    const register unsigned short int Data04 = 14;
    sbit  Data04_bit at FLASH_OBR.B14;
    const register unsigned short int Data05 = 15;
    sbit  Data05_bit at FLASH_OBR.B15;
    const register unsigned short int Data06 = 16;
    sbit  Data06_bit at FLASH_OBR.B16;
    const register unsigned short int Data07 = 17;
    sbit  Data07_bit at FLASH_OBR.B17;
    const register unsigned short int Data10 = 18;
    sbit  Data10_bit at FLASH_OBR.B18;
    const register unsigned short int Data11 = 19;
    sbit  Data11_bit at FLASH_OBR.B19;
    const register unsigned short int Data12 = 20;
    sbit  Data12_bit at FLASH_OBR.B20;
    const register unsigned short int Data13 = 21;
    sbit  Data13_bit at FLASH_OBR.B21;
    const register unsigned short int Data14 = 22;
    sbit  Data14_bit at FLASH_OBR.B22;
    const register unsigned short int Data15 = 23;
    sbit  Data15_bit at FLASH_OBR.B23;
    const register unsigned short int Data16 = 24;
    sbit  Data16_bit at FLASH_OBR.B24;
    const register unsigned short int Data17 = 25;
    sbit  Data17_bit at FLASH_OBR.B25;

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

sfr unsigned long   volatile RTC_CRH              absolute 0x40002800;
    const register unsigned short int SECIE = 0;
    sbit  SECIE_bit at RTC_CRH.B0;
    const register unsigned short int ALRIE = 1;
    sbit  ALRIE_bit at RTC_CRH.B1;
    const register unsigned short int OWIE = 2;
    sbit  OWIE_bit at RTC_CRH.B2;

sfr unsigned long   volatile RTC_CRL              absolute 0x40002804;
    const register unsigned short int SECF = 0;
    sbit  SECF_bit at RTC_CRL.B0;
    const register unsigned short int ALRF = 1;
    sbit  ALRF_bit at RTC_CRL.B1;
    const register unsigned short int OWF = 2;
    sbit  OWF_bit at RTC_CRL.B2;
    const register unsigned short int RSF = 3;
    sbit  RSF_bit at RTC_CRL.B3;
    const register unsigned short int CNF = 4;
    sbit  CNF_bit at RTC_CRL.B4;
    const register unsigned short int RTOFF = 5;
    sbit  RTOFF_bit at RTC_CRL.B5;

sfr unsigned long   volatile RTC_PRLH             absolute 0x40002808;
    const register unsigned short int PRLH0 = 0;
    sbit  PRLH0_bit at RTC_PRLH.B0;
    const register unsigned short int PRLH1 = 1;
    sbit  PRLH1_bit at RTC_PRLH.B1;
    const register unsigned short int PRLH2 = 2;
    sbit  PRLH2_bit at RTC_PRLH.B2;
    const register unsigned short int PRLH3 = 3;
    sbit  PRLH3_bit at RTC_PRLH.B3;

sfr unsigned long   volatile RTC_PRLL             absolute 0x4000280C;
    const register unsigned short int PRLL0 = 0;
    sbit  PRLL0_bit at RTC_PRLL.B0;
    const register unsigned short int PRLL1 = 1;
    sbit  PRLL1_bit at RTC_PRLL.B1;
    const register unsigned short int PRLL2 = 2;
    sbit  PRLL2_bit at RTC_PRLL.B2;
    const register unsigned short int PRLL3 = 3;
    sbit  PRLL3_bit at RTC_PRLL.B3;
    const register unsigned short int PRLL4 = 4;
    sbit  PRLL4_bit at RTC_PRLL.B4;
    const register unsigned short int PRLL5 = 5;
    sbit  PRLL5_bit at RTC_PRLL.B5;
    const register unsigned short int PRLL6 = 6;
    sbit  PRLL6_bit at RTC_PRLL.B6;
    const register unsigned short int PRLL7 = 7;
    sbit  PRLL7_bit at RTC_PRLL.B7;
    const register unsigned short int PRLL8 = 8;
    sbit  PRLL8_bit at RTC_PRLL.B8;
    const register unsigned short int PRLL9 = 9;
    sbit  PRLL9_bit at RTC_PRLL.B9;
    const register unsigned short int PRLL10 = 10;
    sbit  PRLL10_bit at RTC_PRLL.B10;
    const register unsigned short int PRLL11 = 11;
    sbit  PRLL11_bit at RTC_PRLL.B11;
    const register unsigned short int PRLL12 = 12;
    sbit  PRLL12_bit at RTC_PRLL.B12;
    const register unsigned short int PRLL13 = 13;
    sbit  PRLL13_bit at RTC_PRLL.B13;
    const register unsigned short int PRLL14 = 14;
    sbit  PRLL14_bit at RTC_PRLL.B14;
    const register unsigned short int PRLL15 = 15;
    sbit  PRLL15_bit at RTC_PRLL.B15;

sfr unsigned long   volatile RTC_DIVH             absolute 0x40002810;
    const register unsigned short int DIVH0 = 0;
    sbit  DIVH0_bit at RTC_DIVH.B0;
    const register unsigned short int DIVH1 = 1;
    sbit  DIVH1_bit at RTC_DIVH.B1;
    const register unsigned short int DIVH2 = 2;
    sbit  DIVH2_bit at RTC_DIVH.B2;
    const register unsigned short int DIVH3 = 3;
    sbit  DIVH3_bit at RTC_DIVH.B3;

sfr unsigned long   volatile RTC_DIVL             absolute 0x40002814;
    const register unsigned short int DIVL0 = 0;
    sbit  DIVL0_bit at RTC_DIVL.B0;
    const register unsigned short int DIVL1 = 1;
    sbit  DIVL1_bit at RTC_DIVL.B1;
    const register unsigned short int DIVL2 = 2;
    sbit  DIVL2_bit at RTC_DIVL.B2;
    const register unsigned short int DIVL3 = 3;
    sbit  DIVL3_bit at RTC_DIVL.B3;
    const register unsigned short int DIVL4 = 4;
    sbit  DIVL4_bit at RTC_DIVL.B4;
    const register unsigned short int DIVL5 = 5;
    sbit  DIVL5_bit at RTC_DIVL.B5;
    const register unsigned short int DIVL6 = 6;
    sbit  DIVL6_bit at RTC_DIVL.B6;
    const register unsigned short int DIVL7 = 7;
    sbit  DIVL7_bit at RTC_DIVL.B7;
    const register unsigned short int DIVL8 = 8;
    sbit  DIVL8_bit at RTC_DIVL.B8;
    const register unsigned short int DIVL9 = 9;
    sbit  DIVL9_bit at RTC_DIVL.B9;
    const register unsigned short int DIVL10 = 10;
    sbit  DIVL10_bit at RTC_DIVL.B10;
    const register unsigned short int DIVL11 = 11;
    sbit  DIVL11_bit at RTC_DIVL.B11;
    const register unsigned short int DIVL12 = 12;
    sbit  DIVL12_bit at RTC_DIVL.B12;
    const register unsigned short int DIVL13 = 13;
    sbit  DIVL13_bit at RTC_DIVL.B13;
    const register unsigned short int DIVL14 = 14;
    sbit  DIVL14_bit at RTC_DIVL.B14;
    const register unsigned short int DIVL15 = 15;
    sbit  DIVL15_bit at RTC_DIVL.B15;

sfr unsigned long   volatile RTC_CNTH             absolute 0x40002818;
    const register unsigned short int CNTH0 = 0;
    sbit  CNTH0_bit at RTC_CNTH.B0;
    const register unsigned short int CNTH1 = 1;
    sbit  CNTH1_bit at RTC_CNTH.B1;
    const register unsigned short int CNTH2 = 2;
    sbit  CNTH2_bit at RTC_CNTH.B2;
    const register unsigned short int CNTH3 = 3;
    sbit  CNTH3_bit at RTC_CNTH.B3;
    const register unsigned short int CNTH4 = 4;
    sbit  CNTH4_bit at RTC_CNTH.B4;
    const register unsigned short int CNTH5 = 5;
    sbit  CNTH5_bit at RTC_CNTH.B5;
    const register unsigned short int CNTH6 = 6;
    sbit  CNTH6_bit at RTC_CNTH.B6;
    const register unsigned short int CNTH7 = 7;
    sbit  CNTH7_bit at RTC_CNTH.B7;
    const register unsigned short int CNTH8 = 8;
    sbit  CNTH8_bit at RTC_CNTH.B8;
    const register unsigned short int CNTH9 = 9;
    sbit  CNTH9_bit at RTC_CNTH.B9;
    const register unsigned short int CNTH10 = 10;
    sbit  CNTH10_bit at RTC_CNTH.B10;
    const register unsigned short int CNTH11 = 11;
    sbit  CNTH11_bit at RTC_CNTH.B11;
    const register unsigned short int CNTH12 = 12;
    sbit  CNTH12_bit at RTC_CNTH.B12;
    const register unsigned short int CNTH13 = 13;
    sbit  CNTH13_bit at RTC_CNTH.B13;
    const register unsigned short int CNTH14 = 14;
    sbit  CNTH14_bit at RTC_CNTH.B14;
    const register unsigned short int CNTH15 = 15;
    sbit  CNTH15_bit at RTC_CNTH.B15;

sfr unsigned long   volatile RTC_CNTL             absolute 0x4000281C;
    const register unsigned short int CNTL0 = 0;
    sbit  CNTL0_bit at RTC_CNTL.B0;
    const register unsigned short int CNTL1 = 1;
    sbit  CNTL1_bit at RTC_CNTL.B1;
    const register unsigned short int CNTL2 = 2;
    sbit  CNTL2_bit at RTC_CNTL.B2;
    const register unsigned short int CNTL3 = 3;
    sbit  CNTL3_bit at RTC_CNTL.B3;
    const register unsigned short int CNTL4 = 4;
    sbit  CNTL4_bit at RTC_CNTL.B4;
    const register unsigned short int CNTL5 = 5;
    sbit  CNTL5_bit at RTC_CNTL.B5;
    const register unsigned short int CNTL6 = 6;
    sbit  CNTL6_bit at RTC_CNTL.B6;
    const register unsigned short int CNTL7 = 7;
    sbit  CNTL7_bit at RTC_CNTL.B7;
    const register unsigned short int CNTL8 = 8;
    sbit  CNTL8_bit at RTC_CNTL.B8;
    const register unsigned short int CNTL9 = 9;
    sbit  CNTL9_bit at RTC_CNTL.B9;
    const register unsigned short int CNTL10 = 10;
    sbit  CNTL10_bit at RTC_CNTL.B10;
    const register unsigned short int CNTL11 = 11;
    sbit  CNTL11_bit at RTC_CNTL.B11;
    const register unsigned short int CNTL12 = 12;
    sbit  CNTL12_bit at RTC_CNTL.B12;
    const register unsigned short int CNTL13 = 13;
    sbit  CNTL13_bit at RTC_CNTL.B13;
    const register unsigned short int CNTL14 = 14;
    sbit  CNTL14_bit at RTC_CNTL.B14;
    const register unsigned short int CNTL15 = 15;
    sbit  CNTL15_bit at RTC_CNTL.B15;

sfr unsigned long   volatile RTC_ALRH             absolute 0x40002820;
    const register unsigned short int ALRH0 = 0;
    sbit  ALRH0_bit at RTC_ALRH.B0;
    const register unsigned short int ALRH1 = 1;
    sbit  ALRH1_bit at RTC_ALRH.B1;
    const register unsigned short int ALRH2 = 2;
    sbit  ALRH2_bit at RTC_ALRH.B2;
    const register unsigned short int ALRH3 = 3;
    sbit  ALRH3_bit at RTC_ALRH.B3;
    const register unsigned short int ALRH4 = 4;
    sbit  ALRH4_bit at RTC_ALRH.B4;
    const register unsigned short int ALRH5 = 5;
    sbit  ALRH5_bit at RTC_ALRH.B5;
    const register unsigned short int ALRH6 = 6;
    sbit  ALRH6_bit at RTC_ALRH.B6;
    const register unsigned short int ALRH7 = 7;
    sbit  ALRH7_bit at RTC_ALRH.B7;
    const register unsigned short int ALRH8 = 8;
    sbit  ALRH8_bit at RTC_ALRH.B8;
    const register unsigned short int ALRH9 = 9;
    sbit  ALRH9_bit at RTC_ALRH.B9;
    const register unsigned short int ALRH10 = 10;
    sbit  ALRH10_bit at RTC_ALRH.B10;
    const register unsigned short int ALRH11 = 11;
    sbit  ALRH11_bit at RTC_ALRH.B11;
    const register unsigned short int ALRH12 = 12;
    sbit  ALRH12_bit at RTC_ALRH.B12;
    const register unsigned short int ALRH13 = 13;
    sbit  ALRH13_bit at RTC_ALRH.B13;
    const register unsigned short int ALRH14 = 14;
    sbit  ALRH14_bit at RTC_ALRH.B14;
    const register unsigned short int ALRH15 = 15;
    sbit  ALRH15_bit at RTC_ALRH.B15;

sfr unsigned long   volatile RTC_ALRL             absolute 0x40002824;
    const register unsigned short int ALRL0 = 0;
    sbit  ALRL0_bit at RTC_ALRL.B0;
    const register unsigned short int ALRL1 = 1;
    sbit  ALRL1_bit at RTC_ALRL.B1;
    const register unsigned short int ALRL2 = 2;
    sbit  ALRL2_bit at RTC_ALRL.B2;
    const register unsigned short int ALRL3 = 3;
    sbit  ALRL3_bit at RTC_ALRL.B3;
    const register unsigned short int ALRL4 = 4;
    sbit  ALRL4_bit at RTC_ALRL.B4;
    const register unsigned short int ALRL5 = 5;
    sbit  ALRL5_bit at RTC_ALRL.B5;
    const register unsigned short int ALRL6 = 6;
    sbit  ALRL6_bit at RTC_ALRL.B6;
    const register unsigned short int ALRL7 = 7;
    sbit  ALRL7_bit at RTC_ALRL.B7;
    const register unsigned short int ALRL8 = 8;
    sbit  ALRL8_bit at RTC_ALRL.B8;
    const register unsigned short int ALRL9 = 9;
    sbit  ALRL9_bit at RTC_ALRL.B9;
    const register unsigned short int ALRL10 = 10;
    sbit  ALRL10_bit at RTC_ALRL.B10;
    const register unsigned short int ALRL11 = 11;
    sbit  ALRL11_bit at RTC_ALRL.B11;
    const register unsigned short int ALRL12 = 12;
    sbit  ALRL12_bit at RTC_ALRL.B12;
    const register unsigned short int ALRL13 = 13;
    sbit  ALRL13_bit at RTC_ALRL.B13;
    const register unsigned short int ALRL14 = 14;
    sbit  ALRL14_bit at RTC_ALRL.B14;
    const register unsigned short int ALRL15 = 15;
    sbit  ALRL15_bit at RTC_ALRL.B15;

sfr unsigned long   volatile BKP_DR1              absolute 0x40006C04;
    const register unsigned short int D10 = 0;
    sbit  D10_bit at BKP_DR1.B0;
    const register unsigned short int D11 = 1;
    sbit  D11_bit at BKP_DR1.B1;
    const register unsigned short int D12 = 2;
    sbit  D12_bit at BKP_DR1.B2;
    const register unsigned short int D13 = 3;
    sbit  D13_bit at BKP_DR1.B3;
    const register unsigned short int D14 = 4;
    sbit  D14_bit at BKP_DR1.B4;
    const register unsigned short int D15 = 5;
    sbit  D15_bit at BKP_DR1.B5;
    const register unsigned short int D16 = 6;
    sbit  D16_bit at BKP_DR1.B6;
    const register unsigned short int D17 = 7;
    sbit  D17_bit at BKP_DR1.B7;
    const register unsigned short int D18 = 8;
    sbit  D18_bit at BKP_DR1.B8;
    const register unsigned short int D19 = 9;
    sbit  D19_bit at BKP_DR1.B9;
    const register unsigned short int D110 = 10;
    sbit  D110_bit at BKP_DR1.B10;
    const register unsigned short int D111 = 11;
    sbit  D111_bit at BKP_DR1.B11;
    const register unsigned short int D112 = 12;
    sbit  D112_bit at BKP_DR1.B12;
    const register unsigned short int D113 = 13;
    sbit  D113_bit at BKP_DR1.B13;
    const register unsigned short int D114 = 14;
    sbit  D114_bit at BKP_DR1.B14;
    const register unsigned short int D115 = 15;
    sbit  D115_bit at BKP_DR1.B15;

sfr unsigned long   volatile BKP_DR2              absolute 0x40006C08;
    const register unsigned short int D20 = 0;
    sbit  D20_bit at BKP_DR2.B0;
    const register unsigned short int D21 = 1;
    sbit  D21_bit at BKP_DR2.B1;
    const register unsigned short int D22 = 2;
    sbit  D22_bit at BKP_DR2.B2;
    const register unsigned short int D23 = 3;
    sbit  D23_bit at BKP_DR2.B3;
    const register unsigned short int D24 = 4;
    sbit  D24_bit at BKP_DR2.B4;
    const register unsigned short int D25 = 5;
    sbit  D25_bit at BKP_DR2.B5;
    const register unsigned short int D26 = 6;
    sbit  D26_bit at BKP_DR2.B6;
    const register unsigned short int D27 = 7;
    sbit  D27_bit at BKP_DR2.B7;
    const register unsigned short int D28 = 8;
    sbit  D28_bit at BKP_DR2.B8;
    const register unsigned short int D29 = 9;
    sbit  D29_bit at BKP_DR2.B9;
    const register unsigned short int D210 = 10;
    sbit  D210_bit at BKP_DR2.B10;
    const register unsigned short int D211 = 11;
    sbit  D211_bit at BKP_DR2.B11;
    const register unsigned short int D212 = 12;
    sbit  D212_bit at BKP_DR2.B12;
    const register unsigned short int D213 = 13;
    sbit  D213_bit at BKP_DR2.B13;
    const register unsigned short int D214 = 14;
    sbit  D214_bit at BKP_DR2.B14;
    const register unsigned short int D215 = 15;
    sbit  D215_bit at BKP_DR2.B15;

sfr unsigned long   volatile BKP_DR3              absolute 0x40006C0C;
    const register unsigned short int D30 = 0;
    sbit  D30_bit at BKP_DR3.B0;
    const register unsigned short int D31 = 1;
    sbit  D31_bit at BKP_DR3.B1;
    const register unsigned short int D32 = 2;
    sbit  D32_bit at BKP_DR3.B2;
    const register unsigned short int D33 = 3;
    sbit  D33_bit at BKP_DR3.B3;
    const register unsigned short int D34 = 4;
    sbit  D34_bit at BKP_DR3.B4;
    const register unsigned short int D35 = 5;
    sbit  D35_bit at BKP_DR3.B5;
    const register unsigned short int D36 = 6;
    sbit  D36_bit at BKP_DR3.B6;
    const register unsigned short int D37 = 7;
    sbit  D37_bit at BKP_DR3.B7;
    const register unsigned short int D38 = 8;
    sbit  D38_bit at BKP_DR3.B8;
    const register unsigned short int D39 = 9;
    sbit  D39_bit at BKP_DR3.B9;
    const register unsigned short int D310 = 10;
    sbit  D310_bit at BKP_DR3.B10;
    const register unsigned short int D311 = 11;
    sbit  D311_bit at BKP_DR3.B11;
    const register unsigned short int D312 = 12;
    sbit  D312_bit at BKP_DR3.B12;
    const register unsigned short int D313 = 13;
    sbit  D313_bit at BKP_DR3.B13;
    const register unsigned short int D314 = 14;
    sbit  D314_bit at BKP_DR3.B14;
    const register unsigned short int D315 = 15;
    sbit  D315_bit at BKP_DR3.B15;

sfr unsigned long   volatile BKP_DR4              absolute 0x40006C10;
    const register unsigned short int D40 = 0;
    sbit  D40_bit at BKP_DR4.B0;
    const register unsigned short int D41 = 1;
    sbit  D41_bit at BKP_DR4.B1;
    const register unsigned short int D42 = 2;
    sbit  D42_bit at BKP_DR4.B2;
    const register unsigned short int D43 = 3;
    sbit  D43_bit at BKP_DR4.B3;
    const register unsigned short int D44 = 4;
    sbit  D44_bit at BKP_DR4.B4;
    const register unsigned short int D45 = 5;
    sbit  D45_bit at BKP_DR4.B5;
    const register unsigned short int D46 = 6;
    sbit  D46_bit at BKP_DR4.B6;
    const register unsigned short int D47 = 7;
    sbit  D47_bit at BKP_DR4.B7;
    const register unsigned short int D48 = 8;
    sbit  D48_bit at BKP_DR4.B8;
    const register unsigned short int D49 = 9;
    sbit  D49_bit at BKP_DR4.B9;
    const register unsigned short int D410 = 10;
    sbit  D410_bit at BKP_DR4.B10;
    const register unsigned short int D411 = 11;
    sbit  D411_bit at BKP_DR4.B11;
    const register unsigned short int D412 = 12;
    sbit  D412_bit at BKP_DR4.B12;
    const register unsigned short int D413 = 13;
    sbit  D413_bit at BKP_DR4.B13;
    const register unsigned short int D414 = 14;
    sbit  D414_bit at BKP_DR4.B14;
    const register unsigned short int D415 = 15;
    sbit  D415_bit at BKP_DR4.B15;

sfr unsigned long   volatile BKP_DR5              absolute 0x40006C14;
    const register unsigned short int D50 = 0;
    sbit  D50_bit at BKP_DR5.B0;
    const register unsigned short int D51 = 1;
    sbit  D51_bit at BKP_DR5.B1;
    const register unsigned short int D52 = 2;
    sbit  D52_bit at BKP_DR5.B2;
    const register unsigned short int D53 = 3;
    sbit  D53_bit at BKP_DR5.B3;
    const register unsigned short int D54 = 4;
    sbit  D54_bit at BKP_DR5.B4;
    const register unsigned short int D55 = 5;
    sbit  D55_bit at BKP_DR5.B5;
    const register unsigned short int D56 = 6;
    sbit  D56_bit at BKP_DR5.B6;
    const register unsigned short int D57 = 7;
    sbit  D57_bit at BKP_DR5.B7;
    const register unsigned short int D58 = 8;
    sbit  D58_bit at BKP_DR5.B8;
    const register unsigned short int D59 = 9;
    sbit  D59_bit at BKP_DR5.B9;
    const register unsigned short int D510 = 10;
    sbit  D510_bit at BKP_DR5.B10;
    const register unsigned short int D511 = 11;
    sbit  D511_bit at BKP_DR5.B11;
    const register unsigned short int D512 = 12;
    sbit  D512_bit at BKP_DR5.B12;
    const register unsigned short int D513 = 13;
    sbit  D513_bit at BKP_DR5.B13;
    const register unsigned short int D514 = 14;
    sbit  D514_bit at BKP_DR5.B14;
    const register unsigned short int D515 = 15;
    sbit  D515_bit at BKP_DR5.B15;

sfr unsigned long   volatile BKP_DR6              absolute 0x40006C18;
    const register unsigned short int D60 = 0;
    sbit  D60_bit at BKP_DR6.B0;
    const register unsigned short int D61 = 1;
    sbit  D61_bit at BKP_DR6.B1;
    const register unsigned short int D62 = 2;
    sbit  D62_bit at BKP_DR6.B2;
    const register unsigned short int D63 = 3;
    sbit  D63_bit at BKP_DR6.B3;
    const register unsigned short int D64 = 4;
    sbit  D64_bit at BKP_DR6.B4;
    const register unsigned short int D65 = 5;
    sbit  D65_bit at BKP_DR6.B5;
    const register unsigned short int D66 = 6;
    sbit  D66_bit at BKP_DR6.B6;
    const register unsigned short int D67 = 7;
    sbit  D67_bit at BKP_DR6.B7;
    const register unsigned short int D68 = 8;
    sbit  D68_bit at BKP_DR6.B8;
    const register unsigned short int D69 = 9;
    sbit  D69_bit at BKP_DR6.B9;
    const register unsigned short int D610 = 10;
    sbit  D610_bit at BKP_DR6.B10;
    const register unsigned short int D611 = 11;
    sbit  D611_bit at BKP_DR6.B11;
    const register unsigned short int D612 = 12;
    sbit  D612_bit at BKP_DR6.B12;
    const register unsigned short int D613 = 13;
    sbit  D613_bit at BKP_DR6.B13;
    const register unsigned short int D614 = 14;
    sbit  D614_bit at BKP_DR6.B14;
    const register unsigned short int D615 = 15;
    sbit  D615_bit at BKP_DR6.B15;

sfr unsigned long   volatile BKP_DR7              absolute 0x40006C1C;
    const register unsigned short int D70 = 0;
    sbit  D70_bit at BKP_DR7.B0;
    const register unsigned short int D71 = 1;
    sbit  D71_bit at BKP_DR7.B1;
    const register unsigned short int D72 = 2;
    sbit  D72_bit at BKP_DR7.B2;
    const register unsigned short int D73 = 3;
    sbit  D73_bit at BKP_DR7.B3;
    const register unsigned short int D74 = 4;
    sbit  D74_bit at BKP_DR7.B4;
    const register unsigned short int D75 = 5;
    sbit  D75_bit at BKP_DR7.B5;
    const register unsigned short int D76 = 6;
    sbit  D76_bit at BKP_DR7.B6;
    const register unsigned short int D77 = 7;
    sbit  D77_bit at BKP_DR7.B7;
    const register unsigned short int D78 = 8;
    sbit  D78_bit at BKP_DR7.B8;
    const register unsigned short int D79 = 9;
    sbit  D79_bit at BKP_DR7.B9;
    const register unsigned short int D710 = 10;
    sbit  D710_bit at BKP_DR7.B10;
    const register unsigned short int D711 = 11;
    sbit  D711_bit at BKP_DR7.B11;
    const register unsigned short int D712 = 12;
    sbit  D712_bit at BKP_DR7.B12;
    const register unsigned short int D713 = 13;
    sbit  D713_bit at BKP_DR7.B13;
    const register unsigned short int D714 = 14;
    sbit  D714_bit at BKP_DR7.B14;
    const register unsigned short int D715 = 15;
    sbit  D715_bit at BKP_DR7.B15;

sfr unsigned long   volatile BKP_DR8              absolute 0x40006C20;
    const register unsigned short int D80 = 0;
    sbit  D80_bit at BKP_DR8.B0;
    const register unsigned short int D81 = 1;
    sbit  D81_bit at BKP_DR8.B1;
    const register unsigned short int D82 = 2;
    sbit  D82_bit at BKP_DR8.B2;
    const register unsigned short int D83 = 3;
    sbit  D83_bit at BKP_DR8.B3;
    const register unsigned short int D84 = 4;
    sbit  D84_bit at BKP_DR8.B4;
    const register unsigned short int D85 = 5;
    sbit  D85_bit at BKP_DR8.B5;
    const register unsigned short int D86 = 6;
    sbit  D86_bit at BKP_DR8.B6;
    const register unsigned short int D87 = 7;
    sbit  D87_bit at BKP_DR8.B7;
    const register unsigned short int D88 = 8;
    sbit  D88_bit at BKP_DR8.B8;
    const register unsigned short int D89 = 9;
    sbit  D89_bit at BKP_DR8.B9;
    const register unsigned short int D810 = 10;
    sbit  D810_bit at BKP_DR8.B10;
    const register unsigned short int D811 = 11;
    sbit  D811_bit at BKP_DR8.B11;
    const register unsigned short int D812 = 12;
    sbit  D812_bit at BKP_DR8.B12;
    const register unsigned short int D813 = 13;
    sbit  D813_bit at BKP_DR8.B13;
    const register unsigned short int D814 = 14;
    sbit  D814_bit at BKP_DR8.B14;
    const register unsigned short int D815 = 15;
    sbit  D815_bit at BKP_DR8.B15;

sfr unsigned long   volatile BKP_DR9              absolute 0x40006C24;
    const register unsigned short int D90 = 0;
    sbit  D90_bit at BKP_DR9.B0;
    const register unsigned short int D91 = 1;
    sbit  D91_bit at BKP_DR9.B1;
    const register unsigned short int D92 = 2;
    sbit  D92_bit at BKP_DR9.B2;
    const register unsigned short int D93 = 3;
    sbit  D93_bit at BKP_DR9.B3;
    const register unsigned short int D94 = 4;
    sbit  D94_bit at BKP_DR9.B4;
    const register unsigned short int D95 = 5;
    sbit  D95_bit at BKP_DR9.B5;
    const register unsigned short int D96 = 6;
    sbit  D96_bit at BKP_DR9.B6;
    const register unsigned short int D97 = 7;
    sbit  D97_bit at BKP_DR9.B7;
    const register unsigned short int D98 = 8;
    sbit  D98_bit at BKP_DR9.B8;
    const register unsigned short int D99 = 9;
    sbit  D99_bit at BKP_DR9.B9;
    const register unsigned short int D910 = 10;
    sbit  D910_bit at BKP_DR9.B10;
    const register unsigned short int D911 = 11;
    sbit  D911_bit at BKP_DR9.B11;
    const register unsigned short int D912 = 12;
    sbit  D912_bit at BKP_DR9.B12;
    const register unsigned short int D913 = 13;
    sbit  D913_bit at BKP_DR9.B13;
    const register unsigned short int D914 = 14;
    sbit  D914_bit at BKP_DR9.B14;
    const register unsigned short int D915 = 15;
    sbit  D915_bit at BKP_DR9.B15;

sfr unsigned long   volatile BKP_DR10             absolute 0x40006C28;
    const register unsigned short int D100 = 0;
    sbit  D100_bit at BKP_DR10.B0;
    const register unsigned short int D101 = 1;
    sbit  D101_bit at BKP_DR10.B1;
    const register unsigned short int D102 = 2;
    sbit  D102_bit at BKP_DR10.B2;
    const register unsigned short int D103 = 3;
    sbit  D103_bit at BKP_DR10.B3;
    const register unsigned short int D104 = 4;
    sbit  D104_bit at BKP_DR10.B4;
    const register unsigned short int D105 = 5;
    sbit  D105_bit at BKP_DR10.B5;
    const register unsigned short int D106 = 6;
    sbit  D106_bit at BKP_DR10.B6;
    const register unsigned short int D107 = 7;
    sbit  D107_bit at BKP_DR10.B7;
    const register unsigned short int D108 = 8;
    sbit  D108_bit at BKP_DR10.B8;
    const register unsigned short int D109 = 9;
    sbit  D109_bit at BKP_DR10.B9;
    const register unsigned short int D1010 = 10;
    sbit  D1010_bit at BKP_DR10.B10;
    const register unsigned short int D1011 = 11;
    sbit  D1011_bit at BKP_DR10.B11;
    const register unsigned short int D1012 = 12;
    sbit  D1012_bit at BKP_DR10.B12;
    const register unsigned short int D1013 = 13;
    sbit  D1013_bit at BKP_DR10.B13;
    const register unsigned short int D1014 = 14;
    sbit  D1014_bit at BKP_DR10.B14;
    const register unsigned short int D1015 = 15;
    sbit  D1015_bit at BKP_DR10.B15;

sfr unsigned long   volatile BKP_DR11             absolute 0x40006C40;
    const register unsigned short int DR110 = 0;
    sbit  DR110_bit at BKP_DR11.B0;
    const register unsigned short int DR111 = 1;
    sbit  DR111_bit at BKP_DR11.B1;
    const register unsigned short int DR112 = 2;
    sbit  DR112_bit at BKP_DR11.B2;
    const register unsigned short int DR113 = 3;
    sbit  DR113_bit at BKP_DR11.B3;
    const register unsigned short int DR114 = 4;
    sbit  DR114_bit at BKP_DR11.B4;
    const register unsigned short int DR115 = 5;
    sbit  DR115_bit at BKP_DR11.B5;
    const register unsigned short int DR116 = 6;
    sbit  DR116_bit at BKP_DR11.B6;
    const register unsigned short int DR117 = 7;
    sbit  DR117_bit at BKP_DR11.B7;
    const register unsigned short int DR118 = 8;
    sbit  DR118_bit at BKP_DR11.B8;
    const register unsigned short int DR119 = 9;
    sbit  DR119_bit at BKP_DR11.B9;
    const register unsigned short int DR1110 = 10;
    sbit  DR1110_bit at BKP_DR11.B10;
    const register unsigned short int DR1111 = 11;
    sbit  DR1111_bit at BKP_DR11.B11;
    const register unsigned short int DR1112 = 12;
    sbit  DR1112_bit at BKP_DR11.B12;
    const register unsigned short int DR1113 = 13;
    sbit  DR1113_bit at BKP_DR11.B13;
    const register unsigned short int DR1114 = 14;
    sbit  DR1114_bit at BKP_DR11.B14;
    const register unsigned short int DR1115 = 15;
    sbit  DR1115_bit at BKP_DR11.B15;

sfr unsigned long   volatile BKP_DR12             absolute 0x40006C44;
    const register unsigned short int DR120 = 0;
    sbit  DR120_bit at BKP_DR12.B0;
    const register unsigned short int DR121 = 1;
    sbit  DR121_bit at BKP_DR12.B1;
    const register unsigned short int DR122 = 2;
    sbit  DR122_bit at BKP_DR12.B2;
    const register unsigned short int DR123 = 3;
    sbit  DR123_bit at BKP_DR12.B3;
    const register unsigned short int DR124 = 4;
    sbit  DR124_bit at BKP_DR12.B4;
    const register unsigned short int DR125 = 5;
    sbit  DR125_bit at BKP_DR12.B5;
    const register unsigned short int DR126 = 6;
    sbit  DR126_bit at BKP_DR12.B6;
    const register unsigned short int DR127 = 7;
    sbit  DR127_bit at BKP_DR12.B7;
    const register unsigned short int DR128 = 8;
    sbit  DR128_bit at BKP_DR12.B8;
    const register unsigned short int DR129 = 9;
    sbit  DR129_bit at BKP_DR12.B9;
    const register unsigned short int DR1210 = 10;
    sbit  DR1210_bit at BKP_DR12.B10;
    const register unsigned short int DR1211 = 11;
    sbit  DR1211_bit at BKP_DR12.B11;
    const register unsigned short int DR1212 = 12;
    sbit  DR1212_bit at BKP_DR12.B12;
    const register unsigned short int DR1213 = 13;
    sbit  DR1213_bit at BKP_DR12.B13;
    const register unsigned short int DR1214 = 14;
    sbit  DR1214_bit at BKP_DR12.B14;
    const register unsigned short int DR1215 = 15;
    sbit  DR1215_bit at BKP_DR12.B15;

sfr unsigned long   volatile BKP_DR13             absolute 0x40006C48;
    const register unsigned short int DR130 = 0;
    sbit  DR130_bit at BKP_DR13.B0;
    const register unsigned short int DR131 = 1;
    sbit  DR131_bit at BKP_DR13.B1;
    const register unsigned short int DR132 = 2;
    sbit  DR132_bit at BKP_DR13.B2;
    const register unsigned short int DR133 = 3;
    sbit  DR133_bit at BKP_DR13.B3;
    const register unsigned short int DR134 = 4;
    sbit  DR134_bit at BKP_DR13.B4;
    const register unsigned short int DR135 = 5;
    sbit  DR135_bit at BKP_DR13.B5;
    const register unsigned short int DR136 = 6;
    sbit  DR136_bit at BKP_DR13.B6;
    const register unsigned short int DR137 = 7;
    sbit  DR137_bit at BKP_DR13.B7;
    const register unsigned short int DR138 = 8;
    sbit  DR138_bit at BKP_DR13.B8;
    const register unsigned short int DR139 = 9;
    sbit  DR139_bit at BKP_DR13.B9;
    const register unsigned short int DR1310 = 10;
    sbit  DR1310_bit at BKP_DR13.B10;
    const register unsigned short int DR1311 = 11;
    sbit  DR1311_bit at BKP_DR13.B11;
    const register unsigned short int DR1312 = 12;
    sbit  DR1312_bit at BKP_DR13.B12;
    const register unsigned short int DR1313 = 13;
    sbit  DR1313_bit at BKP_DR13.B13;
    const register unsigned short int DR1314 = 14;
    sbit  DR1314_bit at BKP_DR13.B14;
    const register unsigned short int DR1315 = 15;
    sbit  DR1315_bit at BKP_DR13.B15;

sfr unsigned long   volatile BKP_DR14             absolute 0x40006C4C;
    const register unsigned short int D140 = 0;
    sbit  D140_bit at BKP_DR14.B0;
    const register unsigned short int D141 = 1;
    sbit  D141_bit at BKP_DR14.B1;
    const register unsigned short int D142 = 2;
    sbit  D142_bit at BKP_DR14.B2;
    const register unsigned short int D143 = 3;
    sbit  D143_bit at BKP_DR14.B3;
    const register unsigned short int D144 = 4;
    sbit  D144_bit at BKP_DR14.B4;
    const register unsigned short int D145 = 5;
    sbit  D145_bit at BKP_DR14.B5;
    const register unsigned short int D146 = 6;
    sbit  D146_bit at BKP_DR14.B6;
    const register unsigned short int D147 = 7;
    sbit  D147_bit at BKP_DR14.B7;
    const register unsigned short int D148 = 8;
    sbit  D148_bit at BKP_DR14.B8;
    const register unsigned short int D149 = 9;
    sbit  D149_bit at BKP_DR14.B9;
    const register unsigned short int D1410 = 10;
    sbit  D1410_bit at BKP_DR14.B10;
    const register unsigned short int D1411 = 11;
    sbit  D1411_bit at BKP_DR14.B11;
    const register unsigned short int D1412 = 12;
    sbit  D1412_bit at BKP_DR14.B12;
    const register unsigned short int D1413 = 13;
    sbit  D1413_bit at BKP_DR14.B13;
    const register unsigned short int D1414 = 14;
    sbit  D1414_bit at BKP_DR14.B14;
    const register unsigned short int D1415 = 15;
    sbit  D1415_bit at BKP_DR14.B15;

sfr unsigned long   volatile BKP_DR15             absolute 0x40006C50;
    const register unsigned short int D150 = 0;
    sbit  D150_bit at BKP_DR15.B0;
    const register unsigned short int D151 = 1;
    sbit  D151_bit at BKP_DR15.B1;
    const register unsigned short int D152 = 2;
    sbit  D152_bit at BKP_DR15.B2;
    const register unsigned short int D153 = 3;
    sbit  D153_bit at BKP_DR15.B3;
    const register unsigned short int D154 = 4;
    sbit  D154_bit at BKP_DR15.B4;
    const register unsigned short int D155 = 5;
    sbit  D155_bit at BKP_DR15.B5;
    const register unsigned short int D156 = 6;
    sbit  D156_bit at BKP_DR15.B6;
    const register unsigned short int D157 = 7;
    sbit  D157_bit at BKP_DR15.B7;
    const register unsigned short int D158 = 8;
    sbit  D158_bit at BKP_DR15.B8;
    const register unsigned short int D159 = 9;
    sbit  D159_bit at BKP_DR15.B9;
    const register unsigned short int D1510 = 10;
    sbit  D1510_bit at BKP_DR15.B10;
    const register unsigned short int D1511 = 11;
    sbit  D1511_bit at BKP_DR15.B11;
    const register unsigned short int D1512 = 12;
    sbit  D1512_bit at BKP_DR15.B12;
    const register unsigned short int D1513 = 13;
    sbit  D1513_bit at BKP_DR15.B13;
    const register unsigned short int D1514 = 14;
    sbit  D1514_bit at BKP_DR15.B14;
    const register unsigned short int D1515 = 15;
    sbit  D1515_bit at BKP_DR15.B15;

sfr unsigned long   volatile BKP_DR16             absolute 0x40006C54;
    const register unsigned short int D160 = 0;
    sbit  D160_bit at BKP_DR16.B0;
    const register unsigned short int D161 = 1;
    sbit  D161_bit at BKP_DR16.B1;
    const register unsigned short int D162 = 2;
    sbit  D162_bit at BKP_DR16.B2;
    const register unsigned short int D163 = 3;
    sbit  D163_bit at BKP_DR16.B3;
    const register unsigned short int D164 = 4;
    sbit  D164_bit at BKP_DR16.B4;
    const register unsigned short int D165 = 5;
    sbit  D165_bit at BKP_DR16.B5;
    const register unsigned short int D166 = 6;
    sbit  D166_bit at BKP_DR16.B6;
    const register unsigned short int D167 = 7;
    sbit  D167_bit at BKP_DR16.B7;
    const register unsigned short int D168 = 8;
    sbit  D168_bit at BKP_DR16.B8;
    const register unsigned short int D169 = 9;
    sbit  D169_bit at BKP_DR16.B9;
    const register unsigned short int D1610 = 10;
    sbit  D1610_bit at BKP_DR16.B10;
    const register unsigned short int D1611 = 11;
    sbit  D1611_bit at BKP_DR16.B11;
    const register unsigned short int D1612 = 12;
    sbit  D1612_bit at BKP_DR16.B12;
    const register unsigned short int D1613 = 13;
    sbit  D1613_bit at BKP_DR16.B13;
    const register unsigned short int D1614 = 14;
    sbit  D1614_bit at BKP_DR16.B14;
    const register unsigned short int D1615 = 15;
    sbit  D1615_bit at BKP_DR16.B15;

sfr unsigned long   volatile BKP_DR17             absolute 0x40006C58;
    const register unsigned short int D170 = 0;
    sbit  D170_bit at BKP_DR17.B0;
    const register unsigned short int D171 = 1;
    sbit  D171_bit at BKP_DR17.B1;
    const register unsigned short int D172 = 2;
    sbit  D172_bit at BKP_DR17.B2;
    const register unsigned short int D173 = 3;
    sbit  D173_bit at BKP_DR17.B3;
    const register unsigned short int D174 = 4;
    sbit  D174_bit at BKP_DR17.B4;
    const register unsigned short int D175 = 5;
    sbit  D175_bit at BKP_DR17.B5;
    const register unsigned short int D176 = 6;
    sbit  D176_bit at BKP_DR17.B6;
    const register unsigned short int D177 = 7;
    sbit  D177_bit at BKP_DR17.B7;
    const register unsigned short int D178 = 8;
    sbit  D178_bit at BKP_DR17.B8;
    const register unsigned short int D179 = 9;
    sbit  D179_bit at BKP_DR17.B9;
    const register unsigned short int D1710 = 10;
    sbit  D1710_bit at BKP_DR17.B10;
    const register unsigned short int D1711 = 11;
    sbit  D1711_bit at BKP_DR17.B11;
    const register unsigned short int D1712 = 12;
    sbit  D1712_bit at BKP_DR17.B12;
    const register unsigned short int D1713 = 13;
    sbit  D1713_bit at BKP_DR17.B13;
    const register unsigned short int D1714 = 14;
    sbit  D1714_bit at BKP_DR17.B14;
    const register unsigned short int D1715 = 15;
    sbit  D1715_bit at BKP_DR17.B15;

sfr unsigned long   volatile BKP_DR18             absolute 0x40006C5C;
    const register unsigned short int D180 = 0;
    sbit  D180_bit at BKP_DR18.B0;
    const register unsigned short int D181 = 1;
    sbit  D181_bit at BKP_DR18.B1;
    const register unsigned short int D182 = 2;
    sbit  D182_bit at BKP_DR18.B2;
    const register unsigned short int D183 = 3;
    sbit  D183_bit at BKP_DR18.B3;
    const register unsigned short int D184 = 4;
    sbit  D184_bit at BKP_DR18.B4;
    const register unsigned short int D185 = 5;
    sbit  D185_bit at BKP_DR18.B5;
    const register unsigned short int D186 = 6;
    sbit  D186_bit at BKP_DR18.B6;
    const register unsigned short int D187 = 7;
    sbit  D187_bit at BKP_DR18.B7;
    const register unsigned short int D188 = 8;
    sbit  D188_bit at BKP_DR18.B8;
    const register unsigned short int D189 = 9;
    sbit  D189_bit at BKP_DR18.B9;
    const register unsigned short int D1810 = 10;
    sbit  D1810_bit at BKP_DR18.B10;
    const register unsigned short int D1811 = 11;
    sbit  D1811_bit at BKP_DR18.B11;
    const register unsigned short int D1812 = 12;
    sbit  D1812_bit at BKP_DR18.B12;
    const register unsigned short int D1813 = 13;
    sbit  D1813_bit at BKP_DR18.B13;
    const register unsigned short int D1814 = 14;
    sbit  D1814_bit at BKP_DR18.B14;
    const register unsigned short int D1815 = 15;
    sbit  D1815_bit at BKP_DR18.B15;

sfr unsigned long   volatile BKP_DR19             absolute 0x40006C60;
    const register unsigned short int D190 = 0;
    sbit  D190_bit at BKP_DR19.B0;
    const register unsigned short int D191 = 1;
    sbit  D191_bit at BKP_DR19.B1;
    const register unsigned short int D192 = 2;
    sbit  D192_bit at BKP_DR19.B2;
    const register unsigned short int D193 = 3;
    sbit  D193_bit at BKP_DR19.B3;
    const register unsigned short int D194 = 4;
    sbit  D194_bit at BKP_DR19.B4;
    const register unsigned short int D195 = 5;
    sbit  D195_bit at BKP_DR19.B5;
    const register unsigned short int D196 = 6;
    sbit  D196_bit at BKP_DR19.B6;
    const register unsigned short int D197 = 7;
    sbit  D197_bit at BKP_DR19.B7;
    const register unsigned short int D198 = 8;
    sbit  D198_bit at BKP_DR19.B8;
    const register unsigned short int D199 = 9;
    sbit  D199_bit at BKP_DR19.B9;
    const register unsigned short int D1910 = 10;
    sbit  D1910_bit at BKP_DR19.B10;
    const register unsigned short int D1911 = 11;
    sbit  D1911_bit at BKP_DR19.B11;
    const register unsigned short int D1912 = 12;
    sbit  D1912_bit at BKP_DR19.B12;
    const register unsigned short int D1913 = 13;
    sbit  D1913_bit at BKP_DR19.B13;
    const register unsigned short int D1914 = 14;
    sbit  D1914_bit at BKP_DR19.B14;
    const register unsigned short int D1915 = 15;
    sbit  D1915_bit at BKP_DR19.B15;

sfr unsigned long   volatile BKP_DR20             absolute 0x40006C64;
    const register unsigned short int D200 = 0;
    sbit  D200_bit at BKP_DR20.B0;
    const register unsigned short int D201 = 1;
    sbit  D201_bit at BKP_DR20.B1;
    const register unsigned short int D202 = 2;
    sbit  D202_bit at BKP_DR20.B2;
    const register unsigned short int D203 = 3;
    sbit  D203_bit at BKP_DR20.B3;
    const register unsigned short int D204 = 4;
    sbit  D204_bit at BKP_DR20.B4;
    const register unsigned short int D205 = 5;
    sbit  D205_bit at BKP_DR20.B5;
    const register unsigned short int D206 = 6;
    sbit  D206_bit at BKP_DR20.B6;
    const register unsigned short int D207 = 7;
    sbit  D207_bit at BKP_DR20.B7;
    const register unsigned short int D208 = 8;
    sbit  D208_bit at BKP_DR20.B8;
    const register unsigned short int D209 = 9;
    sbit  D209_bit at BKP_DR20.B9;
    const register unsigned short int D2010 = 10;
    sbit  D2010_bit at BKP_DR20.B10;
    const register unsigned short int D2011 = 11;
    sbit  D2011_bit at BKP_DR20.B11;
    const register unsigned short int D2012 = 12;
    sbit  D2012_bit at BKP_DR20.B12;
    const register unsigned short int D2013 = 13;
    sbit  D2013_bit at BKP_DR20.B13;
    const register unsigned short int D2014 = 14;
    sbit  D2014_bit at BKP_DR20.B14;
    const register unsigned short int D2015 = 15;
    sbit  D2015_bit at BKP_DR20.B15;

sfr unsigned long   volatile BKP_DR21             absolute 0x40006C68;
    sbit  D210_BKP_DR21_bit at BKP_DR21.B0;
    sbit  D211_BKP_DR21_bit at BKP_DR21.B1;
    sbit  D212_BKP_DR21_bit at BKP_DR21.B2;
    sbit  D213_BKP_DR21_bit at BKP_DR21.B3;
    sbit  D214_BKP_DR21_bit at BKP_DR21.B4;
    sbit  D215_BKP_DR21_bit at BKP_DR21.B5;
    const register unsigned short int D216 = 6;
    sbit  D216_bit at BKP_DR21.B6;
    const register unsigned short int D217 = 7;
    sbit  D217_bit at BKP_DR21.B7;
    const register unsigned short int D218 = 8;
    sbit  D218_bit at BKP_DR21.B8;
    const register unsigned short int D219 = 9;
    sbit  D219_bit at BKP_DR21.B9;
    const register unsigned short int D2110 = 10;
    sbit  D2110_bit at BKP_DR21.B10;
    const register unsigned short int D2111 = 11;
    sbit  D2111_bit at BKP_DR21.B11;
    const register unsigned short int D2112 = 12;
    sbit  D2112_bit at BKP_DR21.B12;
    const register unsigned short int D2113 = 13;
    sbit  D2113_bit at BKP_DR21.B13;
    const register unsigned short int D2114 = 14;
    sbit  D2114_bit at BKP_DR21.B14;
    const register unsigned short int D2115 = 15;
    sbit  D2115_bit at BKP_DR21.B15;

sfr unsigned long   volatile BKP_DR22             absolute 0x40006C6C;
    const register unsigned short int D220 = 0;
    sbit  D220_bit at BKP_DR22.B0;
    const register unsigned short int D221 = 1;
    sbit  D221_bit at BKP_DR22.B1;
    const register unsigned short int D222 = 2;
    sbit  D222_bit at BKP_DR22.B2;
    const register unsigned short int D223 = 3;
    sbit  D223_bit at BKP_DR22.B3;
    const register unsigned short int D224 = 4;
    sbit  D224_bit at BKP_DR22.B4;
    const register unsigned short int D225 = 5;
    sbit  D225_bit at BKP_DR22.B5;
    const register unsigned short int D226 = 6;
    sbit  D226_bit at BKP_DR22.B6;
    const register unsigned short int D227 = 7;
    sbit  D227_bit at BKP_DR22.B7;
    const register unsigned short int D228 = 8;
    sbit  D228_bit at BKP_DR22.B8;
    const register unsigned short int D229 = 9;
    sbit  D229_bit at BKP_DR22.B9;
    const register unsigned short int D2210 = 10;
    sbit  D2210_bit at BKP_DR22.B10;
    const register unsigned short int D2211 = 11;
    sbit  D2211_bit at BKP_DR22.B11;
    const register unsigned short int D2212 = 12;
    sbit  D2212_bit at BKP_DR22.B12;
    const register unsigned short int D2213 = 13;
    sbit  D2213_bit at BKP_DR22.B13;
    const register unsigned short int D2214 = 14;
    sbit  D2214_bit at BKP_DR22.B14;
    const register unsigned short int D2215 = 15;
    sbit  D2215_bit at BKP_DR22.B15;

sfr unsigned long   volatile BKP_DR23             absolute 0x40006C70;
    const register unsigned short int D230 = 0;
    sbit  D230_bit at BKP_DR23.B0;
    const register unsigned short int D231 = 1;
    sbit  D231_bit at BKP_DR23.B1;
    const register unsigned short int D232 = 2;
    sbit  D232_bit at BKP_DR23.B2;
    const register unsigned short int D233 = 3;
    sbit  D233_bit at BKP_DR23.B3;
    const register unsigned short int D234 = 4;
    sbit  D234_bit at BKP_DR23.B4;
    const register unsigned short int D235 = 5;
    sbit  D235_bit at BKP_DR23.B5;
    const register unsigned short int D236 = 6;
    sbit  D236_bit at BKP_DR23.B6;
    const register unsigned short int D237 = 7;
    sbit  D237_bit at BKP_DR23.B7;
    const register unsigned short int D238 = 8;
    sbit  D238_bit at BKP_DR23.B8;
    const register unsigned short int D239 = 9;
    sbit  D239_bit at BKP_DR23.B9;
    const register unsigned short int D2310 = 10;
    sbit  D2310_bit at BKP_DR23.B10;
    const register unsigned short int D2311 = 11;
    sbit  D2311_bit at BKP_DR23.B11;
    const register unsigned short int D2312 = 12;
    sbit  D2312_bit at BKP_DR23.B12;
    const register unsigned short int D2313 = 13;
    sbit  D2313_bit at BKP_DR23.B13;
    const register unsigned short int D2314 = 14;
    sbit  D2314_bit at BKP_DR23.B14;
    const register unsigned short int D2315 = 15;
    sbit  D2315_bit at BKP_DR23.B15;

sfr unsigned long   volatile BKP_DR24             absolute 0x40006C74;
    const register unsigned short int D240 = 0;
    sbit  D240_bit at BKP_DR24.B0;
    const register unsigned short int D241 = 1;
    sbit  D241_bit at BKP_DR24.B1;
    const register unsigned short int D242 = 2;
    sbit  D242_bit at BKP_DR24.B2;
    const register unsigned short int D243 = 3;
    sbit  D243_bit at BKP_DR24.B3;
    const register unsigned short int D244 = 4;
    sbit  D244_bit at BKP_DR24.B4;
    const register unsigned short int D245 = 5;
    sbit  D245_bit at BKP_DR24.B5;
    const register unsigned short int D246 = 6;
    sbit  D246_bit at BKP_DR24.B6;
    const register unsigned short int D247 = 7;
    sbit  D247_bit at BKP_DR24.B7;
    const register unsigned short int D248 = 8;
    sbit  D248_bit at BKP_DR24.B8;
    const register unsigned short int D249 = 9;
    sbit  D249_bit at BKP_DR24.B9;
    const register unsigned short int D2410 = 10;
    sbit  D2410_bit at BKP_DR24.B10;
    const register unsigned short int D2411 = 11;
    sbit  D2411_bit at BKP_DR24.B11;
    const register unsigned short int D2412 = 12;
    sbit  D2412_bit at BKP_DR24.B12;
    const register unsigned short int D2413 = 13;
    sbit  D2413_bit at BKP_DR24.B13;
    const register unsigned short int D2414 = 14;
    sbit  D2414_bit at BKP_DR24.B14;
    const register unsigned short int D2415 = 15;
    sbit  D2415_bit at BKP_DR24.B15;

sfr unsigned long   volatile BKP_DR25             absolute 0x40006C78;
    const register unsigned short int D250 = 0;
    sbit  D250_bit at BKP_DR25.B0;
    const register unsigned short int D251 = 1;
    sbit  D251_bit at BKP_DR25.B1;
    const register unsigned short int D252 = 2;
    sbit  D252_bit at BKP_DR25.B2;
    const register unsigned short int D253 = 3;
    sbit  D253_bit at BKP_DR25.B3;
    const register unsigned short int D254 = 4;
    sbit  D254_bit at BKP_DR25.B4;
    const register unsigned short int D255 = 5;
    sbit  D255_bit at BKP_DR25.B5;
    const register unsigned short int D256 = 6;
    sbit  D256_bit at BKP_DR25.B6;
    const register unsigned short int D257 = 7;
    sbit  D257_bit at BKP_DR25.B7;
    const register unsigned short int D258 = 8;
    sbit  D258_bit at BKP_DR25.B8;
    const register unsigned short int D259 = 9;
    sbit  D259_bit at BKP_DR25.B9;
    const register unsigned short int D2510 = 10;
    sbit  D2510_bit at BKP_DR25.B10;
    const register unsigned short int D2511 = 11;
    sbit  D2511_bit at BKP_DR25.B11;
    const register unsigned short int D2512 = 12;
    sbit  D2512_bit at BKP_DR25.B12;
    const register unsigned short int D2513 = 13;
    sbit  D2513_bit at BKP_DR25.B13;
    const register unsigned short int D2514 = 14;
    sbit  D2514_bit at BKP_DR25.B14;
    const register unsigned short int D2515 = 15;
    sbit  D2515_bit at BKP_DR25.B15;

sfr unsigned long   volatile BKP_DR26             absolute 0x40006C7C;
    const register unsigned short int D260 = 0;
    sbit  D260_bit at BKP_DR26.B0;
    const register unsigned short int D261 = 1;
    sbit  D261_bit at BKP_DR26.B1;
    const register unsigned short int D262 = 2;
    sbit  D262_bit at BKP_DR26.B2;
    const register unsigned short int D263 = 3;
    sbit  D263_bit at BKP_DR26.B3;
    const register unsigned short int D264 = 4;
    sbit  D264_bit at BKP_DR26.B4;
    const register unsigned short int D265 = 5;
    sbit  D265_bit at BKP_DR26.B5;
    const register unsigned short int D266 = 6;
    sbit  D266_bit at BKP_DR26.B6;
    const register unsigned short int D267 = 7;
    sbit  D267_bit at BKP_DR26.B7;
    const register unsigned short int D268 = 8;
    sbit  D268_bit at BKP_DR26.B8;
    const register unsigned short int D269 = 9;
    sbit  D269_bit at BKP_DR26.B9;
    const register unsigned short int D2610 = 10;
    sbit  D2610_bit at BKP_DR26.B10;
    const register unsigned short int D2611 = 11;
    sbit  D2611_bit at BKP_DR26.B11;
    const register unsigned short int D2612 = 12;
    sbit  D2612_bit at BKP_DR26.B12;
    const register unsigned short int D2613 = 13;
    sbit  D2613_bit at BKP_DR26.B13;
    const register unsigned short int D2614 = 14;
    sbit  D2614_bit at BKP_DR26.B14;
    const register unsigned short int D2615 = 15;
    sbit  D2615_bit at BKP_DR26.B15;

sfr unsigned long   volatile BKP_DR27             absolute 0x40006C80;
    const register unsigned short int D270 = 0;
    sbit  D270_bit at BKP_DR27.B0;
    const register unsigned short int D271 = 1;
    sbit  D271_bit at BKP_DR27.B1;
    const register unsigned short int D272 = 2;
    sbit  D272_bit at BKP_DR27.B2;
    const register unsigned short int D273 = 3;
    sbit  D273_bit at BKP_DR27.B3;
    const register unsigned short int D274 = 4;
    sbit  D274_bit at BKP_DR27.B4;
    const register unsigned short int D275 = 5;
    sbit  D275_bit at BKP_DR27.B5;
    const register unsigned short int D276 = 6;
    sbit  D276_bit at BKP_DR27.B6;
    const register unsigned short int D277 = 7;
    sbit  D277_bit at BKP_DR27.B7;
    const register unsigned short int D278 = 8;
    sbit  D278_bit at BKP_DR27.B8;
    const register unsigned short int D279 = 9;
    sbit  D279_bit at BKP_DR27.B9;
    const register unsigned short int D2710 = 10;
    sbit  D2710_bit at BKP_DR27.B10;
    const register unsigned short int D2711 = 11;
    sbit  D2711_bit at BKP_DR27.B11;
    const register unsigned short int D2712 = 12;
    sbit  D2712_bit at BKP_DR27.B12;
    const register unsigned short int D2713 = 13;
    sbit  D2713_bit at BKP_DR27.B13;
    const register unsigned short int D2714 = 14;
    sbit  D2714_bit at BKP_DR27.B14;
    const register unsigned short int D2715 = 15;
    sbit  D2715_bit at BKP_DR27.B15;

sfr unsigned long   volatile BKP_DR28             absolute 0x40006C84;
    const register unsigned short int D280 = 0;
    sbit  D280_bit at BKP_DR28.B0;
    const register unsigned short int D281 = 1;
    sbit  D281_bit at BKP_DR28.B1;
    const register unsigned short int D282 = 2;
    sbit  D282_bit at BKP_DR28.B2;
    const register unsigned short int D283 = 3;
    sbit  D283_bit at BKP_DR28.B3;
    const register unsigned short int D284 = 4;
    sbit  D284_bit at BKP_DR28.B4;
    const register unsigned short int D285 = 5;
    sbit  D285_bit at BKP_DR28.B5;
    const register unsigned short int D286 = 6;
    sbit  D286_bit at BKP_DR28.B6;
    const register unsigned short int D287 = 7;
    sbit  D287_bit at BKP_DR28.B7;
    const register unsigned short int D288 = 8;
    sbit  D288_bit at BKP_DR28.B8;
    const register unsigned short int D289 = 9;
    sbit  D289_bit at BKP_DR28.B9;
    const register unsigned short int D2810 = 10;
    sbit  D2810_bit at BKP_DR28.B10;
    const register unsigned short int D2811 = 11;
    sbit  D2811_bit at BKP_DR28.B11;
    const register unsigned short int D2812 = 12;
    sbit  D2812_bit at BKP_DR28.B12;
    const register unsigned short int D2813 = 13;
    sbit  D2813_bit at BKP_DR28.B13;
    const register unsigned short int D2814 = 14;
    sbit  D2814_bit at BKP_DR28.B14;
    const register unsigned short int D2815 = 15;
    sbit  D2815_bit at BKP_DR28.B15;

sfr unsigned long   volatile BKP_DR29             absolute 0x40006C88;
    const register unsigned short int D290 = 0;
    sbit  D290_bit at BKP_DR29.B0;
    const register unsigned short int D291 = 1;
    sbit  D291_bit at BKP_DR29.B1;
    const register unsigned short int D292 = 2;
    sbit  D292_bit at BKP_DR29.B2;
    const register unsigned short int D293 = 3;
    sbit  D293_bit at BKP_DR29.B3;
    const register unsigned short int D294 = 4;
    sbit  D294_bit at BKP_DR29.B4;
    const register unsigned short int D295 = 5;
    sbit  D295_bit at BKP_DR29.B5;
    const register unsigned short int D296 = 6;
    sbit  D296_bit at BKP_DR29.B6;
    const register unsigned short int D297 = 7;
    sbit  D297_bit at BKP_DR29.B7;
    const register unsigned short int D298 = 8;
    sbit  D298_bit at BKP_DR29.B8;
    const register unsigned short int D299 = 9;
    sbit  D299_bit at BKP_DR29.B9;
    const register unsigned short int D2910 = 10;
    sbit  D2910_bit at BKP_DR29.B10;
    const register unsigned short int D2911 = 11;
    sbit  D2911_bit at BKP_DR29.B11;
    const register unsigned short int D2912 = 12;
    sbit  D2912_bit at BKP_DR29.B12;
    const register unsigned short int D2913 = 13;
    sbit  D2913_bit at BKP_DR29.B13;
    const register unsigned short int D2914 = 14;
    sbit  D2914_bit at BKP_DR29.B14;
    const register unsigned short int D2915 = 15;
    sbit  D2915_bit at BKP_DR29.B15;

sfr unsigned long   volatile BKP_DR30             absolute 0x40006C8C;
    const register unsigned short int D300 = 0;
    sbit  D300_bit at BKP_DR30.B0;
    const register unsigned short int D301 = 1;
    sbit  D301_bit at BKP_DR30.B1;
    const register unsigned short int D302 = 2;
    sbit  D302_bit at BKP_DR30.B2;
    const register unsigned short int D303 = 3;
    sbit  D303_bit at BKP_DR30.B3;
    const register unsigned short int D304 = 4;
    sbit  D304_bit at BKP_DR30.B4;
    const register unsigned short int D305 = 5;
    sbit  D305_bit at BKP_DR30.B5;
    const register unsigned short int D306 = 6;
    sbit  D306_bit at BKP_DR30.B6;
    const register unsigned short int D307 = 7;
    sbit  D307_bit at BKP_DR30.B7;
    const register unsigned short int D308 = 8;
    sbit  D308_bit at BKP_DR30.B8;
    const register unsigned short int D309 = 9;
    sbit  D309_bit at BKP_DR30.B9;
    const register unsigned short int D3010 = 10;
    sbit  D3010_bit at BKP_DR30.B10;
    const register unsigned short int D3011 = 11;
    sbit  D3011_bit at BKP_DR30.B11;
    const register unsigned short int D3012 = 12;
    sbit  D3012_bit at BKP_DR30.B12;
    const register unsigned short int D3013 = 13;
    sbit  D3013_bit at BKP_DR30.B13;
    const register unsigned short int D3014 = 14;
    sbit  D3014_bit at BKP_DR30.B14;
    const register unsigned short int D3015 = 15;
    sbit  D3015_bit at BKP_DR30.B15;

sfr unsigned long   volatile BKP_DR31             absolute 0x40006C90;
    sbit  D310_BKP_DR31_bit at BKP_DR31.B0;
    sbit  D311_BKP_DR31_bit at BKP_DR31.B1;
    sbit  D312_BKP_DR31_bit at BKP_DR31.B2;
    sbit  D313_BKP_DR31_bit at BKP_DR31.B3;
    sbit  D314_BKP_DR31_bit at BKP_DR31.B4;
    sbit  D315_BKP_DR31_bit at BKP_DR31.B5;
    const register unsigned short int D316 = 6;
    sbit  D316_bit at BKP_DR31.B6;
    const register unsigned short int D317 = 7;
    sbit  D317_bit at BKP_DR31.B7;
    const register unsigned short int D318 = 8;
    sbit  D318_bit at BKP_DR31.B8;
    const register unsigned short int D319 = 9;
    sbit  D319_bit at BKP_DR31.B9;
    const register unsigned short int D3110 = 10;
    sbit  D3110_bit at BKP_DR31.B10;
    const register unsigned short int D3111 = 11;
    sbit  D3111_bit at BKP_DR31.B11;
    const register unsigned short int D3112 = 12;
    sbit  D3112_bit at BKP_DR31.B12;
    const register unsigned short int D3113 = 13;
    sbit  D3113_bit at BKP_DR31.B13;
    const register unsigned short int D3114 = 14;
    sbit  D3114_bit at BKP_DR31.B14;
    const register unsigned short int D3115 = 15;
    sbit  D3115_bit at BKP_DR31.B15;

sfr unsigned long   volatile BKP_DR32             absolute 0x40006C94;
    const register unsigned short int D320 = 0;
    sbit  D320_bit at BKP_DR32.B0;
    const register unsigned short int D321 = 1;
    sbit  D321_bit at BKP_DR32.B1;
    const register unsigned short int D322 = 2;
    sbit  D322_bit at BKP_DR32.B2;
    const register unsigned short int D323 = 3;
    sbit  D323_bit at BKP_DR32.B3;
    const register unsigned short int D324 = 4;
    sbit  D324_bit at BKP_DR32.B4;
    const register unsigned short int D325 = 5;
    sbit  D325_bit at BKP_DR32.B5;
    const register unsigned short int D326 = 6;
    sbit  D326_bit at BKP_DR32.B6;
    const register unsigned short int D327 = 7;
    sbit  D327_bit at BKP_DR32.B7;
    const register unsigned short int D328 = 8;
    sbit  D328_bit at BKP_DR32.B8;
    const register unsigned short int D329 = 9;
    sbit  D329_bit at BKP_DR32.B9;
    const register unsigned short int D3210 = 10;
    sbit  D3210_bit at BKP_DR32.B10;
    const register unsigned short int D3211 = 11;
    sbit  D3211_bit at BKP_DR32.B11;
    const register unsigned short int D3212 = 12;
    sbit  D3212_bit at BKP_DR32.B12;
    const register unsigned short int D3213 = 13;
    sbit  D3213_bit at BKP_DR32.B13;
    const register unsigned short int D3214 = 14;
    sbit  D3214_bit at BKP_DR32.B14;
    const register unsigned short int D3215 = 15;
    sbit  D3215_bit at BKP_DR32.B15;

sfr unsigned long   volatile BKP_DR33             absolute 0x40006C98;
    const register unsigned short int D330 = 0;
    sbit  D330_bit at BKP_DR33.B0;
    const register unsigned short int D331 = 1;
    sbit  D331_bit at BKP_DR33.B1;
    const register unsigned short int D332 = 2;
    sbit  D332_bit at BKP_DR33.B2;
    const register unsigned short int D333 = 3;
    sbit  D333_bit at BKP_DR33.B3;
    const register unsigned short int D334 = 4;
    sbit  D334_bit at BKP_DR33.B4;
    const register unsigned short int D335 = 5;
    sbit  D335_bit at BKP_DR33.B5;
    const register unsigned short int D336 = 6;
    sbit  D336_bit at BKP_DR33.B6;
    const register unsigned short int D337 = 7;
    sbit  D337_bit at BKP_DR33.B7;
    const register unsigned short int D338 = 8;
    sbit  D338_bit at BKP_DR33.B8;
    const register unsigned short int D339 = 9;
    sbit  D339_bit at BKP_DR33.B9;
    const register unsigned short int D3310 = 10;
    sbit  D3310_bit at BKP_DR33.B10;
    const register unsigned short int D3311 = 11;
    sbit  D3311_bit at BKP_DR33.B11;
    const register unsigned short int D3312 = 12;
    sbit  D3312_bit at BKP_DR33.B12;
    const register unsigned short int D3313 = 13;
    sbit  D3313_bit at BKP_DR33.B13;
    const register unsigned short int D3314 = 14;
    sbit  D3314_bit at BKP_DR33.B14;
    const register unsigned short int D3315 = 15;
    sbit  D3315_bit at BKP_DR33.B15;

sfr unsigned long   volatile BKP_DR34             absolute 0x40006C9C;
    const register unsigned short int D340 = 0;
    sbit  D340_bit at BKP_DR34.B0;
    const register unsigned short int D341 = 1;
    sbit  D341_bit at BKP_DR34.B1;
    const register unsigned short int D342 = 2;
    sbit  D342_bit at BKP_DR34.B2;
    const register unsigned short int D343 = 3;
    sbit  D343_bit at BKP_DR34.B3;
    const register unsigned short int D344 = 4;
    sbit  D344_bit at BKP_DR34.B4;
    const register unsigned short int D345 = 5;
    sbit  D345_bit at BKP_DR34.B5;
    const register unsigned short int D346 = 6;
    sbit  D346_bit at BKP_DR34.B6;
    const register unsigned short int D347 = 7;
    sbit  D347_bit at BKP_DR34.B7;
    const register unsigned short int D348 = 8;
    sbit  D348_bit at BKP_DR34.B8;
    const register unsigned short int D349 = 9;
    sbit  D349_bit at BKP_DR34.B9;
    const register unsigned short int D3410 = 10;
    sbit  D3410_bit at BKP_DR34.B10;
    const register unsigned short int D3411 = 11;
    sbit  D3411_bit at BKP_DR34.B11;
    const register unsigned short int D3412 = 12;
    sbit  D3412_bit at BKP_DR34.B12;
    const register unsigned short int D3413 = 13;
    sbit  D3413_bit at BKP_DR34.B13;
    const register unsigned short int D3414 = 14;
    sbit  D3414_bit at BKP_DR34.B14;
    const register unsigned short int D3415 = 15;
    sbit  D3415_bit at BKP_DR34.B15;

sfr unsigned long   volatile BKP_DR35             absolute 0x40006CA0;
    const register unsigned short int D350 = 0;
    sbit  D350_bit at BKP_DR35.B0;
    const register unsigned short int D351 = 1;
    sbit  D351_bit at BKP_DR35.B1;
    const register unsigned short int D352 = 2;
    sbit  D352_bit at BKP_DR35.B2;
    const register unsigned short int D353 = 3;
    sbit  D353_bit at BKP_DR35.B3;
    const register unsigned short int D354 = 4;
    sbit  D354_bit at BKP_DR35.B4;
    const register unsigned short int D355 = 5;
    sbit  D355_bit at BKP_DR35.B5;
    const register unsigned short int D356 = 6;
    sbit  D356_bit at BKP_DR35.B6;
    const register unsigned short int D357 = 7;
    sbit  D357_bit at BKP_DR35.B7;
    const register unsigned short int D358 = 8;
    sbit  D358_bit at BKP_DR35.B8;
    const register unsigned short int D359 = 9;
    sbit  D359_bit at BKP_DR35.B9;
    const register unsigned short int D3510 = 10;
    sbit  D3510_bit at BKP_DR35.B10;
    const register unsigned short int D3511 = 11;
    sbit  D3511_bit at BKP_DR35.B11;
    const register unsigned short int D3512 = 12;
    sbit  D3512_bit at BKP_DR35.B12;
    const register unsigned short int D3513 = 13;
    sbit  D3513_bit at BKP_DR35.B13;
    const register unsigned short int D3514 = 14;
    sbit  D3514_bit at BKP_DR35.B14;
    const register unsigned short int D3515 = 15;
    sbit  D3515_bit at BKP_DR35.B15;

sfr unsigned long   volatile BKP_DR36             absolute 0x40006CA4;
    const register unsigned short int D360 = 0;
    sbit  D360_bit at BKP_DR36.B0;
    const register unsigned short int D361 = 1;
    sbit  D361_bit at BKP_DR36.B1;
    const register unsigned short int D362 = 2;
    sbit  D362_bit at BKP_DR36.B2;
    const register unsigned short int D363 = 3;
    sbit  D363_bit at BKP_DR36.B3;
    const register unsigned short int D364 = 4;
    sbit  D364_bit at BKP_DR36.B4;
    const register unsigned short int D365 = 5;
    sbit  D365_bit at BKP_DR36.B5;
    const register unsigned short int D366 = 6;
    sbit  D366_bit at BKP_DR36.B6;
    const register unsigned short int D367 = 7;
    sbit  D367_bit at BKP_DR36.B7;
    const register unsigned short int D368 = 8;
    sbit  D368_bit at BKP_DR36.B8;
    const register unsigned short int D369 = 9;
    sbit  D369_bit at BKP_DR36.B9;
    const register unsigned short int D3610 = 10;
    sbit  D3610_bit at BKP_DR36.B10;
    const register unsigned short int D3611 = 11;
    sbit  D3611_bit at BKP_DR36.B11;
    const register unsigned short int D3612 = 12;
    sbit  D3612_bit at BKP_DR36.B12;
    const register unsigned short int D3613 = 13;
    sbit  D3613_bit at BKP_DR36.B13;
    const register unsigned short int D3614 = 14;
    sbit  D3614_bit at BKP_DR36.B14;
    const register unsigned short int D3615 = 15;
    sbit  D3615_bit at BKP_DR36.B15;

sfr unsigned long   volatile BKP_DR37             absolute 0x40006CA8;
    const register unsigned short int D370 = 0;
    sbit  D370_bit at BKP_DR37.B0;
    const register unsigned short int D371 = 1;
    sbit  D371_bit at BKP_DR37.B1;
    const register unsigned short int D372 = 2;
    sbit  D372_bit at BKP_DR37.B2;
    const register unsigned short int D373 = 3;
    sbit  D373_bit at BKP_DR37.B3;
    const register unsigned short int D374 = 4;
    sbit  D374_bit at BKP_DR37.B4;
    const register unsigned short int D375 = 5;
    sbit  D375_bit at BKP_DR37.B5;
    const register unsigned short int D376 = 6;
    sbit  D376_bit at BKP_DR37.B6;
    const register unsigned short int D377 = 7;
    sbit  D377_bit at BKP_DR37.B7;
    const register unsigned short int D378 = 8;
    sbit  D378_bit at BKP_DR37.B8;
    const register unsigned short int D379 = 9;
    sbit  D379_bit at BKP_DR37.B9;
    const register unsigned short int D3710 = 10;
    sbit  D3710_bit at BKP_DR37.B10;
    const register unsigned short int D3711 = 11;
    sbit  D3711_bit at BKP_DR37.B11;
    const register unsigned short int D3712 = 12;
    sbit  D3712_bit at BKP_DR37.B12;
    const register unsigned short int D3713 = 13;
    sbit  D3713_bit at BKP_DR37.B13;
    const register unsigned short int D3714 = 14;
    sbit  D3714_bit at BKP_DR37.B14;
    const register unsigned short int D3715 = 15;
    sbit  D3715_bit at BKP_DR37.B15;

sfr unsigned long   volatile BKP_DR38             absolute 0x40006CAC;
    const register unsigned short int D380 = 0;
    sbit  D380_bit at BKP_DR38.B0;
    const register unsigned short int D381 = 1;
    sbit  D381_bit at BKP_DR38.B1;
    const register unsigned short int D382 = 2;
    sbit  D382_bit at BKP_DR38.B2;
    const register unsigned short int D383 = 3;
    sbit  D383_bit at BKP_DR38.B3;
    const register unsigned short int D384 = 4;
    sbit  D384_bit at BKP_DR38.B4;
    const register unsigned short int D385 = 5;
    sbit  D385_bit at BKP_DR38.B5;
    const register unsigned short int D386 = 6;
    sbit  D386_bit at BKP_DR38.B6;
    const register unsigned short int D387 = 7;
    sbit  D387_bit at BKP_DR38.B7;
    const register unsigned short int D388 = 8;
    sbit  D388_bit at BKP_DR38.B8;
    const register unsigned short int D389 = 9;
    sbit  D389_bit at BKP_DR38.B9;
    const register unsigned short int D3810 = 10;
    sbit  D3810_bit at BKP_DR38.B10;
    const register unsigned short int D3811 = 11;
    sbit  D3811_bit at BKP_DR38.B11;
    const register unsigned short int D3812 = 12;
    sbit  D3812_bit at BKP_DR38.B12;
    const register unsigned short int D3813 = 13;
    sbit  D3813_bit at BKP_DR38.B13;
    const register unsigned short int D3814 = 14;
    sbit  D3814_bit at BKP_DR38.B14;
    const register unsigned short int D3815 = 15;
    sbit  D3815_bit at BKP_DR38.B15;

sfr unsigned long   volatile BKP_DR39             absolute 0x40006CB0;
    const register unsigned short int D390 = 0;
    sbit  D390_bit at BKP_DR39.B0;
    const register unsigned short int D391 = 1;
    sbit  D391_bit at BKP_DR39.B1;
    const register unsigned short int D392 = 2;
    sbit  D392_bit at BKP_DR39.B2;
    const register unsigned short int D393 = 3;
    sbit  D393_bit at BKP_DR39.B3;
    const register unsigned short int D394 = 4;
    sbit  D394_bit at BKP_DR39.B4;
    const register unsigned short int D395 = 5;
    sbit  D395_bit at BKP_DR39.B5;
    const register unsigned short int D396 = 6;
    sbit  D396_bit at BKP_DR39.B6;
    const register unsigned short int D397 = 7;
    sbit  D397_bit at BKP_DR39.B7;
    const register unsigned short int D398 = 8;
    sbit  D398_bit at BKP_DR39.B8;
    const register unsigned short int D399 = 9;
    sbit  D399_bit at BKP_DR39.B9;
    const register unsigned short int D3910 = 10;
    sbit  D3910_bit at BKP_DR39.B10;
    const register unsigned short int D3911 = 11;
    sbit  D3911_bit at BKP_DR39.B11;
    const register unsigned short int D3912 = 12;
    sbit  D3912_bit at BKP_DR39.B12;
    const register unsigned short int D3913 = 13;
    sbit  D3913_bit at BKP_DR39.B13;
    const register unsigned short int D3914 = 14;
    sbit  D3914_bit at BKP_DR39.B14;
    const register unsigned short int D3915 = 15;
    sbit  D3915_bit at BKP_DR39.B15;

sfr unsigned long   volatile BKP_DR40             absolute 0x40006CB4;
    const register unsigned short int D400 = 0;
    sbit  D400_bit at BKP_DR40.B0;
    const register unsigned short int D401 = 1;
    sbit  D401_bit at BKP_DR40.B1;
    const register unsigned short int D402 = 2;
    sbit  D402_bit at BKP_DR40.B2;
    const register unsigned short int D403 = 3;
    sbit  D403_bit at BKP_DR40.B3;
    const register unsigned short int D404 = 4;
    sbit  D404_bit at BKP_DR40.B4;
    const register unsigned short int D405 = 5;
    sbit  D405_bit at BKP_DR40.B5;
    const register unsigned short int D406 = 6;
    sbit  D406_bit at BKP_DR40.B6;
    const register unsigned short int D407 = 7;
    sbit  D407_bit at BKP_DR40.B7;
    const register unsigned short int D408 = 8;
    sbit  D408_bit at BKP_DR40.B8;
    const register unsigned short int D409 = 9;
    sbit  D409_bit at BKP_DR40.B9;
    const register unsigned short int D4010 = 10;
    sbit  D4010_bit at BKP_DR40.B10;
    const register unsigned short int D4011 = 11;
    sbit  D4011_bit at BKP_DR40.B11;
    const register unsigned short int D4012 = 12;
    sbit  D4012_bit at BKP_DR40.B12;
    const register unsigned short int D4013 = 13;
    sbit  D4013_bit at BKP_DR40.B13;
    const register unsigned short int D4014 = 14;
    sbit  D4014_bit at BKP_DR40.B14;
    const register unsigned short int D4015 = 15;
    sbit  D4015_bit at BKP_DR40.B15;

sfr unsigned long   volatile BKP_DR41             absolute 0x40006CB8;
    sbit  D410_BKP_DR41_bit at BKP_DR41.B0;
    sbit  D411_BKP_DR41_bit at BKP_DR41.B1;
    sbit  D412_BKP_DR41_bit at BKP_DR41.B2;
    sbit  D413_BKP_DR41_bit at BKP_DR41.B3;
    sbit  D414_BKP_DR41_bit at BKP_DR41.B4;
    sbit  D415_BKP_DR41_bit at BKP_DR41.B5;
    const register unsigned short int D416 = 6;
    sbit  D416_bit at BKP_DR41.B6;
    const register unsigned short int D417 = 7;
    sbit  D417_bit at BKP_DR41.B7;
    const register unsigned short int D418 = 8;
    sbit  D418_bit at BKP_DR41.B8;
    const register unsigned short int D419 = 9;
    sbit  D419_bit at BKP_DR41.B9;
    const register unsigned short int D4110 = 10;
    sbit  D4110_bit at BKP_DR41.B10;
    const register unsigned short int D4111 = 11;
    sbit  D4111_bit at BKP_DR41.B11;
    const register unsigned short int D4112 = 12;
    sbit  D4112_bit at BKP_DR41.B12;
    const register unsigned short int D4113 = 13;
    sbit  D4113_bit at BKP_DR41.B13;
    const register unsigned short int D4114 = 14;
    sbit  D4114_bit at BKP_DR41.B14;
    const register unsigned short int D4115 = 15;
    sbit  D4115_bit at BKP_DR41.B15;

sfr unsigned long   volatile BKP_DR42             absolute 0x40006CBC;
    const register unsigned short int D420 = 0;
    sbit  D420_bit at BKP_DR42.B0;
    const register unsigned short int D421 = 1;
    sbit  D421_bit at BKP_DR42.B1;
    const register unsigned short int D422 = 2;
    sbit  D422_bit at BKP_DR42.B2;
    const register unsigned short int D423 = 3;
    sbit  D423_bit at BKP_DR42.B3;
    const register unsigned short int D424 = 4;
    sbit  D424_bit at BKP_DR42.B4;
    const register unsigned short int D425 = 5;
    sbit  D425_bit at BKP_DR42.B5;
    const register unsigned short int D426 = 6;
    sbit  D426_bit at BKP_DR42.B6;
    const register unsigned short int D427 = 7;
    sbit  D427_bit at BKP_DR42.B7;
    const register unsigned short int D428 = 8;
    sbit  D428_bit at BKP_DR42.B8;
    const register unsigned short int D429 = 9;
    sbit  D429_bit at BKP_DR42.B9;
    const register unsigned short int D4210 = 10;
    sbit  D4210_bit at BKP_DR42.B10;
    const register unsigned short int D4211 = 11;
    sbit  D4211_bit at BKP_DR42.B11;
    const register unsigned short int D4212 = 12;
    sbit  D4212_bit at BKP_DR42.B12;
    const register unsigned short int D4213 = 13;
    sbit  D4213_bit at BKP_DR42.B13;
    const register unsigned short int D4214 = 14;
    sbit  D4214_bit at BKP_DR42.B14;
    const register unsigned short int D4215 = 15;
    sbit  D4215_bit at BKP_DR42.B15;

sfr unsigned long   volatile BKP_RTCCR            absolute 0x40006C2C;
    const register unsigned short int CAL0 = 0;
    sbit  CAL0_bit at BKP_RTCCR.B0;
    const register unsigned short int CAL1 = 1;
    sbit  CAL1_bit at BKP_RTCCR.B1;
    const register unsigned short int CAL2 = 2;
    sbit  CAL2_bit at BKP_RTCCR.B2;
    const register unsigned short int CAL3 = 3;
    sbit  CAL3_bit at BKP_RTCCR.B3;
    const register unsigned short int CAL4 = 4;
    sbit  CAL4_bit at BKP_RTCCR.B4;
    const register unsigned short int CAL5 = 5;
    sbit  CAL5_bit at BKP_RTCCR.B5;
    const register unsigned short int CAL6 = 6;
    sbit  CAL6_bit at BKP_RTCCR.B6;
    const register unsigned short int CCO = 7;
    sbit  CCO_bit at BKP_RTCCR.B7;
    const register unsigned short int ASOE = 8;
    sbit  ASOE_bit at BKP_RTCCR.B8;
    const register unsigned short int ASOS = 9;
    sbit  ASOS_bit at BKP_RTCCR.B9;

sfr unsigned long   volatile BKP_CR               absolute 0x40006C30;
    const register unsigned short int TPE = 0;
    sbit  TPE_bit at BKP_CR.B0;
    const register unsigned short int TPAL = 1;
    sbit  TPAL_bit at BKP_CR.B1;

sfr unsigned long   volatile BKP_CSR              absolute 0x40006C34;
    const register unsigned short int CTE = 0;
    sbit  CTE_bit at BKP_CSR.B0;
    const register unsigned short int CTI = 1;
    sbit  CTI_bit at BKP_CSR.B1;
    const register unsigned short int TPIE = 2;
    sbit  TPIE_bit at BKP_CSR.B2;
    const register unsigned short int TEF = 8;
    sbit  TEF_bit at BKP_CSR.B8;
    const register unsigned short int TIF = 9;
    sbit  TIF_bit at BKP_CSR.B9;

sfr unsigned long   volatile IWDG_KR              absolute 0x40003000;
    sbit  KEY0_IWDG_KR_bit at IWDG_KR.B0;
    sbit  KEY1_IWDG_KR_bit at IWDG_KR.B1;
    sbit  KEY2_IWDG_KR_bit at IWDG_KR.B2;
    sbit  KEY3_IWDG_KR_bit at IWDG_KR.B3;
    sbit  KEY4_IWDG_KR_bit at IWDG_KR.B4;
    sbit  KEY5_IWDG_KR_bit at IWDG_KR.B5;
    sbit  KEY6_IWDG_KR_bit at IWDG_KR.B6;
    sbit  KEY7_IWDG_KR_bit at IWDG_KR.B7;
    sbit  KEY8_IWDG_KR_bit at IWDG_KR.B8;
    sbit  KEY9_IWDG_KR_bit at IWDG_KR.B9;
    sbit  KEY10_IWDG_KR_bit at IWDG_KR.B10;
    sbit  KEY11_IWDG_KR_bit at IWDG_KR.B11;
    sbit  KEY12_IWDG_KR_bit at IWDG_KR.B12;
    sbit  KEY13_IWDG_KR_bit at IWDG_KR.B13;
    sbit  KEY14_IWDG_KR_bit at IWDG_KR.B14;
    sbit  KEY15_IWDG_KR_bit at IWDG_KR.B15;

sfr unsigned long   volatile IWDG_PR              absolute 0x40003004;
    sbit  PR0_IWDG_PR_bit at IWDG_PR.B0;
    sbit  PR1_IWDG_PR_bit at IWDG_PR.B1;
    sbit  PR2_IWDG_PR_bit at IWDG_PR.B2;

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

sfr unsigned long   volatile WWDG_CR              absolute 0x40002C00;
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
    const register unsigned short int WDGA = 7;
    sbit  WDGA_bit at WWDG_CR.B7;

sfr unsigned long   volatile WWDG_CFR             absolute 0x40002C04;
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
    const register unsigned short int WDGTB0 = 7;
    sbit  WDGTB0_bit at WWDG_CFR.B7;
    const register unsigned short int WDGTB1 = 8;
    sbit  WDGTB1_bit at WWDG_CFR.B8;
    const register unsigned short int EWI = 9;
    sbit  EWI_bit at WWDG_CFR.B9;

sfr unsigned long   volatile WWDG_SR              absolute 0x40002C08;
    sbit  EWI_WWDG_SR_bit at WWDG_SR.B0;

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
    const register unsigned short int UIE = 0;
    sbit  UIE_bit at TIM1_DIER.B0;
    const register unsigned short int CC1IE = 1;
    sbit  CC1IE_bit at TIM1_DIER.B1;
    const register unsigned short int CC2IE = 2;
    sbit  CC2IE_bit at TIM1_DIER.B2;
    const register unsigned short int CC3IE = 3;
    sbit  CC3IE_bit at TIM1_DIER.B3;
    const register unsigned short int CC4IE = 4;
    sbit  CC4IE_bit at TIM1_DIER.B4;
    const register unsigned short int COMIE = 5;
    sbit  COMIE_bit at TIM1_DIER.B5;
    const register unsigned short int TIE = 6;
    sbit  TIE_bit at TIM1_DIER.B6;
    const register unsigned short int BIE = 7;
    sbit  BIE_bit at TIM1_DIER.B7;
    const register unsigned short int UDE = 8;
    sbit  UDE_bit at TIM1_DIER.B8;
    const register unsigned short int CC1DE = 9;
    sbit  CC1DE_bit at TIM1_DIER.B9;
    const register unsigned short int CC2DE = 10;
    sbit  CC2DE_bit at TIM1_DIER.B10;
    const register unsigned short int CC3DE = 11;
    sbit  CC3DE_bit at TIM1_DIER.B11;
    const register unsigned short int CC4DE = 12;
    sbit  CC4DE_bit at TIM1_DIER.B12;
    const register unsigned short int COMDE = 13;
    sbit  COMDE_bit at TIM1_DIER.B13;
    const register unsigned short int TDE = 14;
    sbit  TDE_bit at TIM1_DIER.B14;

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
    sbit  TIF_TIM1_SR_bit at TIM1_SR.B6;
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
    const register unsigned short int ICPCS0 = 2;
    sbit  ICPCS0_bit at TIM1_CCMR1_Input.B2;
    const register unsigned short int ICPCS1 = 3;
    sbit  ICPCS1_bit at TIM1_CCMR1_Input.B3;
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
    const register unsigned short int IC4F0 = 15;
    sbit  IC4F0_bit at TIM1_CCMR2_Input.B15;
    const register unsigned short int IC4F1 = 16;
    sbit  IC4F1_bit at TIM1_CCMR2_Input.B16;
    const register unsigned short int IC4F2 = 17;
    sbit  IC4F2_bit at TIM1_CCMR2_Input.B17;
    const register unsigned short int IC4F3 = 18;
    sbit  IC4F3_bit at TIM1_CCMR2_Input.B18;
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
    const register unsigned short int OCCS = 3;
    sbit  OCCS_bit at TIM2_SMCR.B3;

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
    sbit  CC4P_TIM2_CCER_bit at TIM2_CCER.B13;
    sbit  CC4E_TIM2_CCER_bit at TIM2_CCER.B12;
    sbit  CC3P_TIM2_CCER_bit at TIM2_CCER.B9;
    sbit  CC3E_TIM2_CCER_bit at TIM2_CCER.B8;
    sbit  CC2P_TIM2_CCER_bit at TIM2_CCER.B5;
    sbit  CC2E_TIM2_CCER_bit at TIM2_CCER.B4;
    sbit  CC1P_TIM2_CCER_bit at TIM2_CCER.B1;
    sbit  CC1E_TIM2_CCER_bit at TIM2_CCER.B0;

sfr unsigned long   volatile TIM2_CNT             absolute 0x40000024;
    sbit  CNT0_TIM2_CNT_bit at TIM2_CNT.B0;
    sbit  CNT1_TIM2_CNT_bit at TIM2_CNT.B1;
    sbit  CNT2_TIM2_CNT_bit at TIM2_CNT.B2;
    sbit  CNT3_TIM2_CNT_bit at TIM2_CNT.B3;
    sbit  CNT4_TIM2_CNT_bit at TIM2_CNT.B4;
    sbit  CNT5_TIM2_CNT_bit at TIM2_CNT.B5;
    sbit  CNT6_TIM2_CNT_bit at TIM2_CNT.B6;
    sbit  CNT7_TIM2_CNT_bit at TIM2_CNT.B7;
    sbit  CNT8_TIM2_CNT_bit at TIM2_CNT.B8;
    sbit  CNT9_TIM2_CNT_bit at TIM2_CNT.B9;
    sbit  CNT10_TIM2_CNT_bit at TIM2_CNT.B10;
    sbit  CNT11_TIM2_CNT_bit at TIM2_CNT.B11;
    sbit  CNT12_TIM2_CNT_bit at TIM2_CNT.B12;
    sbit  CNT13_TIM2_CNT_bit at TIM2_CNT.B13;
    sbit  CNT14_TIM2_CNT_bit at TIM2_CNT.B14;
    sbit  CNT15_TIM2_CNT_bit at TIM2_CNT.B15;

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
    sbit  ARR0_TIM2_ARR_bit at TIM2_ARR.B0;
    sbit  ARR1_TIM2_ARR_bit at TIM2_ARR.B1;
    sbit  ARR2_TIM2_ARR_bit at TIM2_ARR.B2;
    sbit  ARR3_TIM2_ARR_bit at TIM2_ARR.B3;
    sbit  ARR4_TIM2_ARR_bit at TIM2_ARR.B4;
    sbit  ARR5_TIM2_ARR_bit at TIM2_ARR.B5;
    sbit  ARR6_TIM2_ARR_bit at TIM2_ARR.B6;
    sbit  ARR7_TIM2_ARR_bit at TIM2_ARR.B7;
    sbit  ARR8_TIM2_ARR_bit at TIM2_ARR.B8;
    sbit  ARR9_TIM2_ARR_bit at TIM2_ARR.B9;
    sbit  ARR10_TIM2_ARR_bit at TIM2_ARR.B10;
    sbit  ARR11_TIM2_ARR_bit at TIM2_ARR.B11;
    sbit  ARR12_TIM2_ARR_bit at TIM2_ARR.B12;
    sbit  ARR13_TIM2_ARR_bit at TIM2_ARR.B13;
    sbit  ARR14_TIM2_ARR_bit at TIM2_ARR.B14;
    sbit  ARR15_TIM2_ARR_bit at TIM2_ARR.B15;

sfr unsigned long   volatile TIM2_CCR1            absolute 0x40000034;
    sbit  CCR10_TIM2_CCR1_bit at TIM2_CCR1.B0;
    sbit  CCR11_TIM2_CCR1_bit at TIM2_CCR1.B1;
    sbit  CCR12_TIM2_CCR1_bit at TIM2_CCR1.B2;
    sbit  CCR13_TIM2_CCR1_bit at TIM2_CCR1.B3;
    sbit  CCR14_TIM2_CCR1_bit at TIM2_CCR1.B4;
    sbit  CCR15_TIM2_CCR1_bit at TIM2_CCR1.B5;
    sbit  CCR16_TIM2_CCR1_bit at TIM2_CCR1.B6;
    sbit  CCR17_TIM2_CCR1_bit at TIM2_CCR1.B7;
    sbit  CCR18_TIM2_CCR1_bit at TIM2_CCR1.B8;
    sbit  CCR19_TIM2_CCR1_bit at TIM2_CCR1.B9;
    sbit  CCR110_TIM2_CCR1_bit at TIM2_CCR1.B10;
    sbit  CCR111_TIM2_CCR1_bit at TIM2_CCR1.B11;
    sbit  CCR112_TIM2_CCR1_bit at TIM2_CCR1.B12;
    sbit  CCR113_TIM2_CCR1_bit at TIM2_CCR1.B13;
    sbit  CCR114_TIM2_CCR1_bit at TIM2_CCR1.B14;
    sbit  CCR115_TIM2_CCR1_bit at TIM2_CCR1.B15;

sfr unsigned long   volatile TIM2_CCR2            absolute 0x40000038;
    sbit  CCR20_TIM2_CCR2_bit at TIM2_CCR2.B0;
    sbit  CCR21_TIM2_CCR2_bit at TIM2_CCR2.B1;
    sbit  CCR22_TIM2_CCR2_bit at TIM2_CCR2.B2;
    sbit  CCR23_TIM2_CCR2_bit at TIM2_CCR2.B3;
    sbit  CCR24_TIM2_CCR2_bit at TIM2_CCR2.B4;
    sbit  CCR25_TIM2_CCR2_bit at TIM2_CCR2.B5;
    sbit  CCR26_TIM2_CCR2_bit at TIM2_CCR2.B6;
    sbit  CCR27_TIM2_CCR2_bit at TIM2_CCR2.B7;
    sbit  CCR28_TIM2_CCR2_bit at TIM2_CCR2.B8;
    sbit  CCR29_TIM2_CCR2_bit at TIM2_CCR2.B9;
    sbit  CCR210_TIM2_CCR2_bit at TIM2_CCR2.B10;
    sbit  CCR211_TIM2_CCR2_bit at TIM2_CCR2.B11;
    sbit  CCR212_TIM2_CCR2_bit at TIM2_CCR2.B12;
    sbit  CCR213_TIM2_CCR2_bit at TIM2_CCR2.B13;
    sbit  CCR214_TIM2_CCR2_bit at TIM2_CCR2.B14;
    sbit  CCR215_TIM2_CCR2_bit at TIM2_CCR2.B15;

sfr unsigned long   volatile TIM2_CCR3            absolute 0x4000003C;
    sbit  CCR30_TIM2_CCR3_bit at TIM2_CCR3.B0;
    sbit  CCR31_TIM2_CCR3_bit at TIM2_CCR3.B1;
    sbit  CCR32_TIM2_CCR3_bit at TIM2_CCR3.B2;
    sbit  CCR33_TIM2_CCR3_bit at TIM2_CCR3.B3;
    sbit  CCR34_TIM2_CCR3_bit at TIM2_CCR3.B4;
    sbit  CCR35_TIM2_CCR3_bit at TIM2_CCR3.B5;
    sbit  CCR36_TIM2_CCR3_bit at TIM2_CCR3.B6;
    sbit  CCR37_TIM2_CCR3_bit at TIM2_CCR3.B7;
    sbit  CCR38_TIM2_CCR3_bit at TIM2_CCR3.B8;
    sbit  CCR39_TIM2_CCR3_bit at TIM2_CCR3.B9;
    sbit  CCR310_TIM2_CCR3_bit at TIM2_CCR3.B10;
    sbit  CCR311_TIM2_CCR3_bit at TIM2_CCR3.B11;
    sbit  CCR312_TIM2_CCR3_bit at TIM2_CCR3.B12;
    sbit  CCR313_TIM2_CCR3_bit at TIM2_CCR3.B13;
    sbit  CCR314_TIM2_CCR3_bit at TIM2_CCR3.B14;
    sbit  CCR315_TIM2_CCR3_bit at TIM2_CCR3.B15;

sfr unsigned long   volatile TIM2_CCR4            absolute 0x40000040;
    sbit  CCR40_TIM2_CCR4_bit at TIM2_CCR4.B0;
    sbit  CCR41_TIM2_CCR4_bit at TIM2_CCR4.B1;
    sbit  CCR42_TIM2_CCR4_bit at TIM2_CCR4.B2;
    sbit  CCR43_TIM2_CCR4_bit at TIM2_CCR4.B3;
    sbit  CCR44_TIM2_CCR4_bit at TIM2_CCR4.B4;
    sbit  CCR45_TIM2_CCR4_bit at TIM2_CCR4.B5;
    sbit  CCR46_TIM2_CCR4_bit at TIM2_CCR4.B6;
    sbit  CCR47_TIM2_CCR4_bit at TIM2_CCR4.B7;
    sbit  CCR48_TIM2_CCR4_bit at TIM2_CCR4.B8;
    sbit  CCR49_TIM2_CCR4_bit at TIM2_CCR4.B9;
    sbit  CCR410_TIM2_CCR4_bit at TIM2_CCR4.B10;
    sbit  CCR411_TIM2_CCR4_bit at TIM2_CCR4.B11;
    sbit  CCR412_TIM2_CCR4_bit at TIM2_CCR4.B12;
    sbit  CCR413_TIM2_CCR4_bit at TIM2_CCR4.B13;
    sbit  CCR414_TIM2_CCR4_bit at TIM2_CCR4.B14;
    sbit  CCR415_TIM2_CCR4_bit at TIM2_CCR4.B15;

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
    sbit  OCCS_TIM3_SMCR_bit at TIM3_SMCR.B3;

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
    sbit  CC4P_TIM3_CCER_bit at TIM3_CCER.B13;
    sbit  CC4E_TIM3_CCER_bit at TIM3_CCER.B12;
    sbit  CC3P_TIM3_CCER_bit at TIM3_CCER.B9;
    sbit  CC3E_TIM3_CCER_bit at TIM3_CCER.B8;
    sbit  CC2P_TIM3_CCER_bit at TIM3_CCER.B5;
    sbit  CC2E_TIM3_CCER_bit at TIM3_CCER.B4;
    sbit  CC1P_TIM3_CCER_bit at TIM3_CCER.B1;
    sbit  CC1E_TIM3_CCER_bit at TIM3_CCER.B0;

sfr unsigned long   volatile TIM3_CNT             absolute 0x40000424;
    sbit  CNT0_TIM3_CNT_bit at TIM3_CNT.B0;
    sbit  CNT1_TIM3_CNT_bit at TIM3_CNT.B1;
    sbit  CNT2_TIM3_CNT_bit at TIM3_CNT.B2;
    sbit  CNT3_TIM3_CNT_bit at TIM3_CNT.B3;
    sbit  CNT4_TIM3_CNT_bit at TIM3_CNT.B4;
    sbit  CNT5_TIM3_CNT_bit at TIM3_CNT.B5;
    sbit  CNT6_TIM3_CNT_bit at TIM3_CNT.B6;
    sbit  CNT7_TIM3_CNT_bit at TIM3_CNT.B7;
    sbit  CNT8_TIM3_CNT_bit at TIM3_CNT.B8;
    sbit  CNT9_TIM3_CNT_bit at TIM3_CNT.B9;
    sbit  CNT10_TIM3_CNT_bit at TIM3_CNT.B10;
    sbit  CNT11_TIM3_CNT_bit at TIM3_CNT.B11;
    sbit  CNT12_TIM3_CNT_bit at TIM3_CNT.B12;
    sbit  CNT13_TIM3_CNT_bit at TIM3_CNT.B13;
    sbit  CNT14_TIM3_CNT_bit at TIM3_CNT.B14;
    sbit  CNT15_TIM3_CNT_bit at TIM3_CNT.B15;

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
    sbit  ARR0_TIM3_ARR_bit at TIM3_ARR.B0;
    sbit  ARR1_TIM3_ARR_bit at TIM3_ARR.B1;
    sbit  ARR2_TIM3_ARR_bit at TIM3_ARR.B2;
    sbit  ARR3_TIM3_ARR_bit at TIM3_ARR.B3;
    sbit  ARR4_TIM3_ARR_bit at TIM3_ARR.B4;
    sbit  ARR5_TIM3_ARR_bit at TIM3_ARR.B5;
    sbit  ARR6_TIM3_ARR_bit at TIM3_ARR.B6;
    sbit  ARR7_TIM3_ARR_bit at TIM3_ARR.B7;
    sbit  ARR8_TIM3_ARR_bit at TIM3_ARR.B8;
    sbit  ARR9_TIM3_ARR_bit at TIM3_ARR.B9;
    sbit  ARR10_TIM3_ARR_bit at TIM3_ARR.B10;
    sbit  ARR11_TIM3_ARR_bit at TIM3_ARR.B11;
    sbit  ARR12_TIM3_ARR_bit at TIM3_ARR.B12;
    sbit  ARR13_TIM3_ARR_bit at TIM3_ARR.B13;
    sbit  ARR14_TIM3_ARR_bit at TIM3_ARR.B14;
    sbit  ARR15_TIM3_ARR_bit at TIM3_ARR.B15;

sfr unsigned long   volatile TIM3_CCR1            absolute 0x40000434;
    sbit  CCR10_TIM3_CCR1_bit at TIM3_CCR1.B0;
    sbit  CCR11_TIM3_CCR1_bit at TIM3_CCR1.B1;
    sbit  CCR12_TIM3_CCR1_bit at TIM3_CCR1.B2;
    sbit  CCR13_TIM3_CCR1_bit at TIM3_CCR1.B3;
    sbit  CCR14_TIM3_CCR1_bit at TIM3_CCR1.B4;
    sbit  CCR15_TIM3_CCR1_bit at TIM3_CCR1.B5;
    sbit  CCR16_TIM3_CCR1_bit at TIM3_CCR1.B6;
    sbit  CCR17_TIM3_CCR1_bit at TIM3_CCR1.B7;
    sbit  CCR18_TIM3_CCR1_bit at TIM3_CCR1.B8;
    sbit  CCR19_TIM3_CCR1_bit at TIM3_CCR1.B9;
    sbit  CCR110_TIM3_CCR1_bit at TIM3_CCR1.B10;
    sbit  CCR111_TIM3_CCR1_bit at TIM3_CCR1.B11;
    sbit  CCR112_TIM3_CCR1_bit at TIM3_CCR1.B12;
    sbit  CCR113_TIM3_CCR1_bit at TIM3_CCR1.B13;
    sbit  CCR114_TIM3_CCR1_bit at TIM3_CCR1.B14;
    sbit  CCR115_TIM3_CCR1_bit at TIM3_CCR1.B15;

sfr unsigned long   volatile TIM3_CCR2            absolute 0x40000438;
    sbit  CCR20_TIM3_CCR2_bit at TIM3_CCR2.B0;
    sbit  CCR21_TIM3_CCR2_bit at TIM3_CCR2.B1;
    sbit  CCR22_TIM3_CCR2_bit at TIM3_CCR2.B2;
    sbit  CCR23_TIM3_CCR2_bit at TIM3_CCR2.B3;
    sbit  CCR24_TIM3_CCR2_bit at TIM3_CCR2.B4;
    sbit  CCR25_TIM3_CCR2_bit at TIM3_CCR2.B5;
    sbit  CCR26_TIM3_CCR2_bit at TIM3_CCR2.B6;
    sbit  CCR27_TIM3_CCR2_bit at TIM3_CCR2.B7;
    sbit  CCR28_TIM3_CCR2_bit at TIM3_CCR2.B8;
    sbit  CCR29_TIM3_CCR2_bit at TIM3_CCR2.B9;
    sbit  CCR210_TIM3_CCR2_bit at TIM3_CCR2.B10;
    sbit  CCR211_TIM3_CCR2_bit at TIM3_CCR2.B11;
    sbit  CCR212_TIM3_CCR2_bit at TIM3_CCR2.B12;
    sbit  CCR213_TIM3_CCR2_bit at TIM3_CCR2.B13;
    sbit  CCR214_TIM3_CCR2_bit at TIM3_CCR2.B14;
    sbit  CCR215_TIM3_CCR2_bit at TIM3_CCR2.B15;

sfr unsigned long   volatile TIM3_CCR3            absolute 0x4000043C;
    sbit  CCR30_TIM3_CCR3_bit at TIM3_CCR3.B0;
    sbit  CCR31_TIM3_CCR3_bit at TIM3_CCR3.B1;
    sbit  CCR32_TIM3_CCR3_bit at TIM3_CCR3.B2;
    sbit  CCR33_TIM3_CCR3_bit at TIM3_CCR3.B3;
    sbit  CCR34_TIM3_CCR3_bit at TIM3_CCR3.B4;
    sbit  CCR35_TIM3_CCR3_bit at TIM3_CCR3.B5;
    sbit  CCR36_TIM3_CCR3_bit at TIM3_CCR3.B6;
    sbit  CCR37_TIM3_CCR3_bit at TIM3_CCR3.B7;
    sbit  CCR38_TIM3_CCR3_bit at TIM3_CCR3.B8;
    sbit  CCR39_TIM3_CCR3_bit at TIM3_CCR3.B9;
    sbit  CCR310_TIM3_CCR3_bit at TIM3_CCR3.B10;
    sbit  CCR311_TIM3_CCR3_bit at TIM3_CCR3.B11;
    sbit  CCR312_TIM3_CCR3_bit at TIM3_CCR3.B12;
    sbit  CCR313_TIM3_CCR3_bit at TIM3_CCR3.B13;
    sbit  CCR314_TIM3_CCR3_bit at TIM3_CCR3.B14;
    sbit  CCR315_TIM3_CCR3_bit at TIM3_CCR3.B15;

sfr unsigned long   volatile TIM3_CCR4            absolute 0x40000440;
    sbit  CCR40_TIM3_CCR4_bit at TIM3_CCR4.B0;
    sbit  CCR41_TIM3_CCR4_bit at TIM3_CCR4.B1;
    sbit  CCR42_TIM3_CCR4_bit at TIM3_CCR4.B2;
    sbit  CCR43_TIM3_CCR4_bit at TIM3_CCR4.B3;
    sbit  CCR44_TIM3_CCR4_bit at TIM3_CCR4.B4;
    sbit  CCR45_TIM3_CCR4_bit at TIM3_CCR4.B5;
    sbit  CCR46_TIM3_CCR4_bit at TIM3_CCR4.B6;
    sbit  CCR47_TIM3_CCR4_bit at TIM3_CCR4.B7;
    sbit  CCR48_TIM3_CCR4_bit at TIM3_CCR4.B8;
    sbit  CCR49_TIM3_CCR4_bit at TIM3_CCR4.B9;
    sbit  CCR410_TIM3_CCR4_bit at TIM3_CCR4.B10;
    sbit  CCR411_TIM3_CCR4_bit at TIM3_CCR4.B11;
    sbit  CCR412_TIM3_CCR4_bit at TIM3_CCR4.B12;
    sbit  CCR413_TIM3_CCR4_bit at TIM3_CCR4.B13;
    sbit  CCR414_TIM3_CCR4_bit at TIM3_CCR4.B14;
    sbit  CCR415_TIM3_CCR4_bit at TIM3_CCR4.B15;

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

sfr unsigned long   volatile TIM4_CR1             absolute 0x40000800;
    sbit  CKD0_TIM4_CR1_bit at TIM4_CR1.B8;
    sbit  CKD1_TIM4_CR1_bit at TIM4_CR1.B9;
    sbit  ARPE_TIM4_CR1_bit at TIM4_CR1.B7;
    sbit  CMS0_TIM4_CR1_bit at TIM4_CR1.B5;
    sbit  CMS1_TIM4_CR1_bit at TIM4_CR1.B6;
    sbit  DIR_TIM4_CR1_bit at TIM4_CR1.B4;
    sbit  OPM_TIM4_CR1_bit at TIM4_CR1.B3;
    sbit  URS_TIM4_CR1_bit at TIM4_CR1.B2;
    sbit  UDIS_TIM4_CR1_bit at TIM4_CR1.B1;
    sbit  CEN_TIM4_CR1_bit at TIM4_CR1.B0;

sfr unsigned long   volatile TIM4_CR2             absolute 0x40000804;
    sbit  TI1S_TIM4_CR2_bit at TIM4_CR2.B7;
    sbit  MMS0_TIM4_CR2_bit at TIM4_CR2.B4;
    sbit  MMS1_TIM4_CR2_bit at TIM4_CR2.B5;
    sbit  MMS2_TIM4_CR2_bit at TIM4_CR2.B6;
    sbit  CCDS_TIM4_CR2_bit at TIM4_CR2.B3;

sfr unsigned long   volatile TIM4_SMCR            absolute 0x40000808;
    sbit  ETP_TIM4_SMCR_bit at TIM4_SMCR.B15;
    sbit  ECE_TIM4_SMCR_bit at TIM4_SMCR.B14;
    sbit  ETPS0_TIM4_SMCR_bit at TIM4_SMCR.B12;
    sbit  ETPS1_TIM4_SMCR_bit at TIM4_SMCR.B13;
    sbit  ETF0_TIM4_SMCR_bit at TIM4_SMCR.B8;
    sbit  ETF1_TIM4_SMCR_bit at TIM4_SMCR.B9;
    sbit  ETF2_TIM4_SMCR_bit at TIM4_SMCR.B10;
    sbit  ETF3_TIM4_SMCR_bit at TIM4_SMCR.B11;
    sbit  MSM_TIM4_SMCR_bit at TIM4_SMCR.B7;
    sbit  TS0_TIM4_SMCR_bit at TIM4_SMCR.B4;
    sbit  TS1_TIM4_SMCR_bit at TIM4_SMCR.B5;
    sbit  TS2_TIM4_SMCR_bit at TIM4_SMCR.B6;
    sbit  SMS0_TIM4_SMCR_bit at TIM4_SMCR.B0;
    sbit  SMS1_TIM4_SMCR_bit at TIM4_SMCR.B1;
    sbit  SMS2_TIM4_SMCR_bit at TIM4_SMCR.B2;
    sbit  OCCS_TIM4_SMCR_bit at TIM4_SMCR.B3;

sfr unsigned long   volatile TIM4_DIER            absolute 0x4000080C;
    sbit  TDE_TIM4_DIER_bit at TIM4_DIER.B14;
    sbit  CC4DE_TIM4_DIER_bit at TIM4_DIER.B12;
    sbit  CC3DE_TIM4_DIER_bit at TIM4_DIER.B11;
    sbit  CC2DE_TIM4_DIER_bit at TIM4_DIER.B10;
    sbit  CC1DE_TIM4_DIER_bit at TIM4_DIER.B9;
    sbit  UDE_TIM4_DIER_bit at TIM4_DIER.B8;
    sbit  TIE_TIM4_DIER_bit at TIM4_DIER.B6;
    sbit  CC4IE_TIM4_DIER_bit at TIM4_DIER.B4;
    sbit  CC3IE_TIM4_DIER_bit at TIM4_DIER.B3;
    sbit  CC2IE_TIM4_DIER_bit at TIM4_DIER.B2;
    sbit  CC1IE_TIM4_DIER_bit at TIM4_DIER.B1;
    sbit  UIE_TIM4_DIER_bit at TIM4_DIER.B0;

sfr unsigned long   volatile TIM4_SR              absolute 0x40000810;
    sbit  CC4OF_TIM4_SR_bit at TIM4_SR.B12;
    sbit  CC3OF_TIM4_SR_bit at TIM4_SR.B11;
    sbit  CC2OF_TIM4_SR_bit at TIM4_SR.B10;
    sbit  CC1OF_TIM4_SR_bit at TIM4_SR.B9;
    sbit  TIF_TIM4_SR_bit at TIM4_SR.B6;
    sbit  CC4IF_TIM4_SR_bit at TIM4_SR.B4;
    sbit  CC3IF_TIM4_SR_bit at TIM4_SR.B3;
    sbit  CC2IF_TIM4_SR_bit at TIM4_SR.B2;
    sbit  CC1IF_TIM4_SR_bit at TIM4_SR.B1;
    sbit  UIF_TIM4_SR_bit at TIM4_SR.B0;

sfr unsigned long   volatile TIM4_EGR             absolute 0x40000814;
    sbit  TG_TIM4_EGR_bit at TIM4_EGR.B6;
    sbit  CC4G_TIM4_EGR_bit at TIM4_EGR.B4;
    sbit  CC3G_TIM4_EGR_bit at TIM4_EGR.B3;
    sbit  CC2G_TIM4_EGR_bit at TIM4_EGR.B2;
    sbit  CC1G_TIM4_EGR_bit at TIM4_EGR.B1;
    sbit  UG_TIM4_EGR_bit at TIM4_EGR.B0;

sfr unsigned long   volatile TIM4_CCMR1_Output    absolute 0x40000818;
    sbit  OC2CE_TIM4_CCMR1_Output_bit at TIM4_CCMR1_Output.B15;
    sbit  OC2M0_TIM4_CCMR1_Output_bit at TIM4_CCMR1_Output.B12;
    sbit  OC2M1_TIM4_CCMR1_Output_bit at TIM4_CCMR1_Output.B13;
    sbit  OC2M2_TIM4_CCMR1_Output_bit at TIM4_CCMR1_Output.B14;
    sbit  OC2PE_TIM4_CCMR1_Output_bit at TIM4_CCMR1_Output.B11;
    sbit  OC2FE_TIM4_CCMR1_Output_bit at TIM4_CCMR1_Output.B10;
    sbit  CC2S0_TIM4_CCMR1_Output_bit at TIM4_CCMR1_Output.B8;
    sbit  CC2S1_TIM4_CCMR1_Output_bit at TIM4_CCMR1_Output.B9;
    sbit  OC1CE_TIM4_CCMR1_Output_bit at TIM4_CCMR1_Output.B7;
    sbit  OC1M0_TIM4_CCMR1_Output_bit at TIM4_CCMR1_Output.B4;
    sbit  OC1M1_TIM4_CCMR1_Output_bit at TIM4_CCMR1_Output.B5;
    sbit  OC1M2_TIM4_CCMR1_Output_bit at TIM4_CCMR1_Output.B6;
    sbit  OC1PE_TIM4_CCMR1_Output_bit at TIM4_CCMR1_Output.B3;
    sbit  OC1FE_TIM4_CCMR1_Output_bit at TIM4_CCMR1_Output.B2;
    sbit  CC1S0_TIM4_CCMR1_Output_bit at TIM4_CCMR1_Output.B0;
    sbit  CC1S1_TIM4_CCMR1_Output_bit at TIM4_CCMR1_Output.B1;

sfr unsigned long   volatile TIM4_CCMR1_Input     absolute 0x40000818;
    sbit  IC2F0_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B12;
    sbit  IC2F1_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B13;
    sbit  IC2F2_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B14;
    sbit  IC2F3_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B15;
    sbit  IC2PSC0_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B10;
    sbit  IC2PSC1_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B11;
    sbit  CC2S0_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B8;
    sbit  CC2S1_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B9;
    sbit  IC1F0_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B4;
    sbit  IC1F1_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B5;
    sbit  IC1F2_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B6;
    sbit  IC1F3_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B7;
    sbit  IC1PSC0_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B2;
    sbit  IC1PSC1_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B3;
    sbit  CC1S0_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B0;
    sbit  CC1S1_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B1;

sfr unsigned long   volatile TIM4_CCMR2_Output    absolute 0x4000081C;
    sbit  OC4CE_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B15;
    sbit  OC4M0_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B12;
    sbit  OC4M1_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B13;
    sbit  OC4M2_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B14;
    sbit  OC4PE_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B11;
    sbit  OC4FE_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B10;
    sbit  CC4S0_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B8;
    sbit  CC4S1_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B9;
    sbit  OC3CE_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B7;
    sbit  OC3M0_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B4;
    sbit  OC3M1_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B5;
    sbit  OC3M2_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B6;
    sbit  OC3PE_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B3;
    sbit  OC3FE_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B2;
    sbit  CC3S0_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B0;
    sbit  CC3S1_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B1;

sfr unsigned long   volatile TIM4_CCMR2_Input     absolute 0x4000081C;
    sbit  IC4F0_TIM4_CCMR2_Input_bit at TIM4_CCMR2_Input.B12;
    sbit  IC4F1_TIM4_CCMR2_Input_bit at TIM4_CCMR2_Input.B13;
    sbit  IC4F2_TIM4_CCMR2_Input_bit at TIM4_CCMR2_Input.B14;
    sbit  IC4F3_TIM4_CCMR2_Input_bit at TIM4_CCMR2_Input.B15;
    sbit  IC4PSC0_TIM4_CCMR2_Input_bit at TIM4_CCMR2_Input.B10;
    sbit  IC4PSC1_TIM4_CCMR2_Input_bit at TIM4_CCMR2_Input.B11;
    sbit  CC4S0_TIM4_CCMR2_Input_bit at TIM4_CCMR2_Input.B8;
    sbit  CC4S1_TIM4_CCMR2_Input_bit at TIM4_CCMR2_Input.B9;
    sbit  IC3F0_TIM4_CCMR2_Input_bit at TIM4_CCMR2_Input.B4;
    sbit  IC3F1_TIM4_CCMR2_Input_bit at TIM4_CCMR2_Input.B5;
    sbit  IC3F2_TIM4_CCMR2_Input_bit at TIM4_CCMR2_Input.B6;
    sbit  IC3F3_TIM4_CCMR2_Input_bit at TIM4_CCMR2_Input.B7;
    sbit  IC3PSC0_TIM4_CCMR2_Input_bit at TIM4_CCMR2_Input.B2;
    sbit  IC3PSC1_TIM4_CCMR2_Input_bit at TIM4_CCMR2_Input.B3;
    sbit  CC3S0_TIM4_CCMR2_Input_bit at TIM4_CCMR2_Input.B0;
    sbit  CC3S1_TIM4_CCMR2_Input_bit at TIM4_CCMR2_Input.B1;

sfr unsigned long   volatile TIM4_CCER            absolute 0x40000820;
    sbit  CC4P_TIM4_CCER_bit at TIM4_CCER.B13;
    sbit  CC4E_TIM4_CCER_bit at TIM4_CCER.B12;
    sbit  CC3P_TIM4_CCER_bit at TIM4_CCER.B9;
    sbit  CC3E_TIM4_CCER_bit at TIM4_CCER.B8;
    sbit  CC2P_TIM4_CCER_bit at TIM4_CCER.B5;
    sbit  CC2E_TIM4_CCER_bit at TIM4_CCER.B4;
    sbit  CC1P_TIM4_CCER_bit at TIM4_CCER.B1;
    sbit  CC1E_TIM4_CCER_bit at TIM4_CCER.B0;

sfr unsigned long   volatile TIM4_CNT             absolute 0x40000824;
    sbit  CNT0_TIM4_CNT_bit at TIM4_CNT.B0;
    sbit  CNT1_TIM4_CNT_bit at TIM4_CNT.B1;
    sbit  CNT2_TIM4_CNT_bit at TIM4_CNT.B2;
    sbit  CNT3_TIM4_CNT_bit at TIM4_CNT.B3;
    sbit  CNT4_TIM4_CNT_bit at TIM4_CNT.B4;
    sbit  CNT5_TIM4_CNT_bit at TIM4_CNT.B5;
    sbit  CNT6_TIM4_CNT_bit at TIM4_CNT.B6;
    sbit  CNT7_TIM4_CNT_bit at TIM4_CNT.B7;
    sbit  CNT8_TIM4_CNT_bit at TIM4_CNT.B8;
    sbit  CNT9_TIM4_CNT_bit at TIM4_CNT.B9;
    sbit  CNT10_TIM4_CNT_bit at TIM4_CNT.B10;
    sbit  CNT11_TIM4_CNT_bit at TIM4_CNT.B11;
    sbit  CNT12_TIM4_CNT_bit at TIM4_CNT.B12;
    sbit  CNT13_TIM4_CNT_bit at TIM4_CNT.B13;
    sbit  CNT14_TIM4_CNT_bit at TIM4_CNT.B14;
    sbit  CNT15_TIM4_CNT_bit at TIM4_CNT.B15;

sfr unsigned long   volatile TIM4_PSC             absolute 0x40000828;
    sbit  PSC0_TIM4_PSC_bit at TIM4_PSC.B0;
    sbit  PSC1_TIM4_PSC_bit at TIM4_PSC.B1;
    sbit  PSC2_TIM4_PSC_bit at TIM4_PSC.B2;
    sbit  PSC3_TIM4_PSC_bit at TIM4_PSC.B3;
    sbit  PSC4_TIM4_PSC_bit at TIM4_PSC.B4;
    sbit  PSC5_TIM4_PSC_bit at TIM4_PSC.B5;
    sbit  PSC6_TIM4_PSC_bit at TIM4_PSC.B6;
    sbit  PSC7_TIM4_PSC_bit at TIM4_PSC.B7;
    sbit  PSC8_TIM4_PSC_bit at TIM4_PSC.B8;
    sbit  PSC9_TIM4_PSC_bit at TIM4_PSC.B9;
    sbit  PSC10_TIM4_PSC_bit at TIM4_PSC.B10;
    sbit  PSC11_TIM4_PSC_bit at TIM4_PSC.B11;
    sbit  PSC12_TIM4_PSC_bit at TIM4_PSC.B12;
    sbit  PSC13_TIM4_PSC_bit at TIM4_PSC.B13;
    sbit  PSC14_TIM4_PSC_bit at TIM4_PSC.B14;
    sbit  PSC15_TIM4_PSC_bit at TIM4_PSC.B15;

sfr unsigned long   volatile TIM4_ARR             absolute 0x4000082C;
    sbit  ARR0_TIM4_ARR_bit at TIM4_ARR.B0;
    sbit  ARR1_TIM4_ARR_bit at TIM4_ARR.B1;
    sbit  ARR2_TIM4_ARR_bit at TIM4_ARR.B2;
    sbit  ARR3_TIM4_ARR_bit at TIM4_ARR.B3;
    sbit  ARR4_TIM4_ARR_bit at TIM4_ARR.B4;
    sbit  ARR5_TIM4_ARR_bit at TIM4_ARR.B5;
    sbit  ARR6_TIM4_ARR_bit at TIM4_ARR.B6;
    sbit  ARR7_TIM4_ARR_bit at TIM4_ARR.B7;
    sbit  ARR8_TIM4_ARR_bit at TIM4_ARR.B8;
    sbit  ARR9_TIM4_ARR_bit at TIM4_ARR.B9;
    sbit  ARR10_TIM4_ARR_bit at TIM4_ARR.B10;
    sbit  ARR11_TIM4_ARR_bit at TIM4_ARR.B11;
    sbit  ARR12_TIM4_ARR_bit at TIM4_ARR.B12;
    sbit  ARR13_TIM4_ARR_bit at TIM4_ARR.B13;
    sbit  ARR14_TIM4_ARR_bit at TIM4_ARR.B14;
    sbit  ARR15_TIM4_ARR_bit at TIM4_ARR.B15;

sfr unsigned long   volatile TIM4_CCR1            absolute 0x40000834;
    sbit  CCR10_TIM4_CCR1_bit at TIM4_CCR1.B0;
    sbit  CCR11_TIM4_CCR1_bit at TIM4_CCR1.B1;
    sbit  CCR12_TIM4_CCR1_bit at TIM4_CCR1.B2;
    sbit  CCR13_TIM4_CCR1_bit at TIM4_CCR1.B3;
    sbit  CCR14_TIM4_CCR1_bit at TIM4_CCR1.B4;
    sbit  CCR15_TIM4_CCR1_bit at TIM4_CCR1.B5;
    sbit  CCR16_TIM4_CCR1_bit at TIM4_CCR1.B6;
    sbit  CCR17_TIM4_CCR1_bit at TIM4_CCR1.B7;
    sbit  CCR18_TIM4_CCR1_bit at TIM4_CCR1.B8;
    sbit  CCR19_TIM4_CCR1_bit at TIM4_CCR1.B9;
    sbit  CCR110_TIM4_CCR1_bit at TIM4_CCR1.B10;
    sbit  CCR111_TIM4_CCR1_bit at TIM4_CCR1.B11;
    sbit  CCR112_TIM4_CCR1_bit at TIM4_CCR1.B12;
    sbit  CCR113_TIM4_CCR1_bit at TIM4_CCR1.B13;
    sbit  CCR114_TIM4_CCR1_bit at TIM4_CCR1.B14;
    sbit  CCR115_TIM4_CCR1_bit at TIM4_CCR1.B15;

sfr unsigned long   volatile TIM4_CCR2            absolute 0x40000838;
    sbit  CCR20_TIM4_CCR2_bit at TIM4_CCR2.B0;
    sbit  CCR21_TIM4_CCR2_bit at TIM4_CCR2.B1;
    sbit  CCR22_TIM4_CCR2_bit at TIM4_CCR2.B2;
    sbit  CCR23_TIM4_CCR2_bit at TIM4_CCR2.B3;
    sbit  CCR24_TIM4_CCR2_bit at TIM4_CCR2.B4;
    sbit  CCR25_TIM4_CCR2_bit at TIM4_CCR2.B5;
    sbit  CCR26_TIM4_CCR2_bit at TIM4_CCR2.B6;
    sbit  CCR27_TIM4_CCR2_bit at TIM4_CCR2.B7;
    sbit  CCR28_TIM4_CCR2_bit at TIM4_CCR2.B8;
    sbit  CCR29_TIM4_CCR2_bit at TIM4_CCR2.B9;
    sbit  CCR210_TIM4_CCR2_bit at TIM4_CCR2.B10;
    sbit  CCR211_TIM4_CCR2_bit at TIM4_CCR2.B11;
    sbit  CCR212_TIM4_CCR2_bit at TIM4_CCR2.B12;
    sbit  CCR213_TIM4_CCR2_bit at TIM4_CCR2.B13;
    sbit  CCR214_TIM4_CCR2_bit at TIM4_CCR2.B14;
    sbit  CCR215_TIM4_CCR2_bit at TIM4_CCR2.B15;

sfr unsigned long   volatile TIM4_CCR3            absolute 0x4000083C;
    sbit  CCR30_TIM4_CCR3_bit at TIM4_CCR3.B0;
    sbit  CCR31_TIM4_CCR3_bit at TIM4_CCR3.B1;
    sbit  CCR32_TIM4_CCR3_bit at TIM4_CCR3.B2;
    sbit  CCR33_TIM4_CCR3_bit at TIM4_CCR3.B3;
    sbit  CCR34_TIM4_CCR3_bit at TIM4_CCR3.B4;
    sbit  CCR35_TIM4_CCR3_bit at TIM4_CCR3.B5;
    sbit  CCR36_TIM4_CCR3_bit at TIM4_CCR3.B6;
    sbit  CCR37_TIM4_CCR3_bit at TIM4_CCR3.B7;
    sbit  CCR38_TIM4_CCR3_bit at TIM4_CCR3.B8;
    sbit  CCR39_TIM4_CCR3_bit at TIM4_CCR3.B9;
    sbit  CCR310_TIM4_CCR3_bit at TIM4_CCR3.B10;
    sbit  CCR311_TIM4_CCR3_bit at TIM4_CCR3.B11;
    sbit  CCR312_TIM4_CCR3_bit at TIM4_CCR3.B12;
    sbit  CCR313_TIM4_CCR3_bit at TIM4_CCR3.B13;
    sbit  CCR314_TIM4_CCR3_bit at TIM4_CCR3.B14;
    sbit  CCR315_TIM4_CCR3_bit at TIM4_CCR3.B15;

sfr unsigned long   volatile TIM4_CCR4            absolute 0x40000840;
    sbit  CCR40_TIM4_CCR4_bit at TIM4_CCR4.B0;
    sbit  CCR41_TIM4_CCR4_bit at TIM4_CCR4.B1;
    sbit  CCR42_TIM4_CCR4_bit at TIM4_CCR4.B2;
    sbit  CCR43_TIM4_CCR4_bit at TIM4_CCR4.B3;
    sbit  CCR44_TIM4_CCR4_bit at TIM4_CCR4.B4;
    sbit  CCR45_TIM4_CCR4_bit at TIM4_CCR4.B5;
    sbit  CCR46_TIM4_CCR4_bit at TIM4_CCR4.B6;
    sbit  CCR47_TIM4_CCR4_bit at TIM4_CCR4.B7;
    sbit  CCR48_TIM4_CCR4_bit at TIM4_CCR4.B8;
    sbit  CCR49_TIM4_CCR4_bit at TIM4_CCR4.B9;
    sbit  CCR410_TIM4_CCR4_bit at TIM4_CCR4.B10;
    sbit  CCR411_TIM4_CCR4_bit at TIM4_CCR4.B11;
    sbit  CCR412_TIM4_CCR4_bit at TIM4_CCR4.B12;
    sbit  CCR413_TIM4_CCR4_bit at TIM4_CCR4.B13;
    sbit  CCR414_TIM4_CCR4_bit at TIM4_CCR4.B14;
    sbit  CCR415_TIM4_CCR4_bit at TIM4_CCR4.B15;

sfr unsigned long   volatile TIM4_DCR             absolute 0x40000848;
    sbit  DBL0_TIM4_DCR_bit at TIM4_DCR.B8;
    sbit  DBL1_TIM4_DCR_bit at TIM4_DCR.B9;
    sbit  DBL2_TIM4_DCR_bit at TIM4_DCR.B10;
    sbit  DBL3_TIM4_DCR_bit at TIM4_DCR.B11;
    sbit  DBL4_TIM4_DCR_bit at TIM4_DCR.B12;
    sbit  DBA0_TIM4_DCR_bit at TIM4_DCR.B0;
    sbit  DBA1_TIM4_DCR_bit at TIM4_DCR.B1;
    sbit  DBA2_TIM4_DCR_bit at TIM4_DCR.B2;
    sbit  DBA3_TIM4_DCR_bit at TIM4_DCR.B3;
    sbit  DBA4_TIM4_DCR_bit at TIM4_DCR.B4;

sfr unsigned long   volatile TIM4_DMAR            absolute 0x4000084C;
    sbit  DMAB0_TIM4_DMAR_bit at TIM4_DMAR.B0;
    sbit  DMAB1_TIM4_DMAR_bit at TIM4_DMAR.B1;
    sbit  DMAB2_TIM4_DMAR_bit at TIM4_DMAR.B2;
    sbit  DMAB3_TIM4_DMAR_bit at TIM4_DMAR.B3;
    sbit  DMAB4_TIM4_DMAR_bit at TIM4_DMAR.B4;
    sbit  DMAB5_TIM4_DMAR_bit at TIM4_DMAR.B5;
    sbit  DMAB6_TIM4_DMAR_bit at TIM4_DMAR.B6;
    sbit  DMAB7_TIM4_DMAR_bit at TIM4_DMAR.B7;
    sbit  DMAB8_TIM4_DMAR_bit at TIM4_DMAR.B8;
    sbit  DMAB9_TIM4_DMAR_bit at TIM4_DMAR.B9;
    sbit  DMAB10_TIM4_DMAR_bit at TIM4_DMAR.B10;
    sbit  DMAB11_TIM4_DMAR_bit at TIM4_DMAR.B11;
    sbit  DMAB12_TIM4_DMAR_bit at TIM4_DMAR.B12;
    sbit  DMAB13_TIM4_DMAR_bit at TIM4_DMAR.B13;
    sbit  DMAB14_TIM4_DMAR_bit at TIM4_DMAR.B14;
    sbit  DMAB15_TIM4_DMAR_bit at TIM4_DMAR.B15;

sfr unsigned long   volatile TIM5_CR1             absolute 0x40000C00;
    sbit  CKD0_TIM5_CR1_bit at TIM5_CR1.B8;
    sbit  CKD1_TIM5_CR1_bit at TIM5_CR1.B9;
    sbit  ARPE_TIM5_CR1_bit at TIM5_CR1.B7;
    sbit  CMS0_TIM5_CR1_bit at TIM5_CR1.B5;
    sbit  CMS1_TIM5_CR1_bit at TIM5_CR1.B6;
    sbit  DIR_TIM5_CR1_bit at TIM5_CR1.B4;
    sbit  OPM_TIM5_CR1_bit at TIM5_CR1.B3;
    sbit  URS_TIM5_CR1_bit at TIM5_CR1.B2;
    sbit  UDIS_TIM5_CR1_bit at TIM5_CR1.B1;
    sbit  CEN_TIM5_CR1_bit at TIM5_CR1.B0;

sfr unsigned long   volatile TIM5_CR2             absolute 0x40000C04;
    sbit  TI1S_TIM5_CR2_bit at TIM5_CR2.B7;
    sbit  MMS0_TIM5_CR2_bit at TIM5_CR2.B4;
    sbit  MMS1_TIM5_CR2_bit at TIM5_CR2.B5;
    sbit  MMS2_TIM5_CR2_bit at TIM5_CR2.B6;
    sbit  CCDS_TIM5_CR2_bit at TIM5_CR2.B3;

sfr unsigned long   volatile TIM5_SMCR            absolute 0x40000C08;
    sbit  ETP_TIM5_SMCR_bit at TIM5_SMCR.B15;
    sbit  ECE_TIM5_SMCR_bit at TIM5_SMCR.B14;
    sbit  ETPS0_TIM5_SMCR_bit at TIM5_SMCR.B12;
    sbit  ETPS1_TIM5_SMCR_bit at TIM5_SMCR.B13;
    sbit  ETF0_TIM5_SMCR_bit at TIM5_SMCR.B8;
    sbit  ETF1_TIM5_SMCR_bit at TIM5_SMCR.B9;
    sbit  ETF2_TIM5_SMCR_bit at TIM5_SMCR.B10;
    sbit  ETF3_TIM5_SMCR_bit at TIM5_SMCR.B11;
    sbit  MSM_TIM5_SMCR_bit at TIM5_SMCR.B7;
    sbit  TS0_TIM5_SMCR_bit at TIM5_SMCR.B4;
    sbit  TS1_TIM5_SMCR_bit at TIM5_SMCR.B5;
    sbit  TS2_TIM5_SMCR_bit at TIM5_SMCR.B6;
    sbit  SMS0_TIM5_SMCR_bit at TIM5_SMCR.B0;
    sbit  SMS1_TIM5_SMCR_bit at TIM5_SMCR.B1;
    sbit  SMS2_TIM5_SMCR_bit at TIM5_SMCR.B2;
    sbit  OCCS_TIM5_SMCR_bit at TIM5_SMCR.B3;

sfr unsigned long   volatile TIM5_DIER            absolute 0x40000C0C;
    sbit  TDE_TIM5_DIER_bit at TIM5_DIER.B14;
    sbit  CC4DE_TIM5_DIER_bit at TIM5_DIER.B12;
    sbit  CC3DE_TIM5_DIER_bit at TIM5_DIER.B11;
    sbit  CC2DE_TIM5_DIER_bit at TIM5_DIER.B10;
    sbit  CC1DE_TIM5_DIER_bit at TIM5_DIER.B9;
    sbit  UDE_TIM5_DIER_bit at TIM5_DIER.B8;
    sbit  TIE_TIM5_DIER_bit at TIM5_DIER.B6;
    sbit  CC4IE_TIM5_DIER_bit at TIM5_DIER.B4;
    sbit  CC3IE_TIM5_DIER_bit at TIM5_DIER.B3;
    sbit  CC2IE_TIM5_DIER_bit at TIM5_DIER.B2;
    sbit  CC1IE_TIM5_DIER_bit at TIM5_DIER.B1;
    sbit  UIE_TIM5_DIER_bit at TIM5_DIER.B0;

sfr unsigned long   volatile TIM5_SR              absolute 0x40000C10;
    sbit  CC4OF_TIM5_SR_bit at TIM5_SR.B12;
    sbit  CC3OF_TIM5_SR_bit at TIM5_SR.B11;
    sbit  CC2OF_TIM5_SR_bit at TIM5_SR.B10;
    sbit  CC1OF_TIM5_SR_bit at TIM5_SR.B9;
    sbit  TIF_TIM5_SR_bit at TIM5_SR.B6;
    sbit  CC4IF_TIM5_SR_bit at TIM5_SR.B4;
    sbit  CC3IF_TIM5_SR_bit at TIM5_SR.B3;
    sbit  CC2IF_TIM5_SR_bit at TIM5_SR.B2;
    sbit  CC1IF_TIM5_SR_bit at TIM5_SR.B1;
    sbit  UIF_TIM5_SR_bit at TIM5_SR.B0;

sfr unsigned long   volatile TIM5_EGR             absolute 0x40000C14;
    sbit  TG_TIM5_EGR_bit at TIM5_EGR.B6;
    sbit  CC4G_TIM5_EGR_bit at TIM5_EGR.B4;
    sbit  CC3G_TIM5_EGR_bit at TIM5_EGR.B3;
    sbit  CC2G_TIM5_EGR_bit at TIM5_EGR.B2;
    sbit  CC1G_TIM5_EGR_bit at TIM5_EGR.B1;
    sbit  UG_TIM5_EGR_bit at TIM5_EGR.B0;

sfr unsigned long   volatile TIM5_CCMR1_Output    absolute 0x40000C18;
    sbit  OC2CE_TIM5_CCMR1_Output_bit at TIM5_CCMR1_Output.B15;
    sbit  OC2M0_TIM5_CCMR1_Output_bit at TIM5_CCMR1_Output.B12;
    sbit  OC2M1_TIM5_CCMR1_Output_bit at TIM5_CCMR1_Output.B13;
    sbit  OC2M2_TIM5_CCMR1_Output_bit at TIM5_CCMR1_Output.B14;
    sbit  OC2PE_TIM5_CCMR1_Output_bit at TIM5_CCMR1_Output.B11;
    sbit  OC2FE_TIM5_CCMR1_Output_bit at TIM5_CCMR1_Output.B10;
    sbit  CC2S0_TIM5_CCMR1_Output_bit at TIM5_CCMR1_Output.B8;
    sbit  CC2S1_TIM5_CCMR1_Output_bit at TIM5_CCMR1_Output.B9;
    sbit  OC1CE_TIM5_CCMR1_Output_bit at TIM5_CCMR1_Output.B7;
    sbit  OC1M0_TIM5_CCMR1_Output_bit at TIM5_CCMR1_Output.B4;
    sbit  OC1M1_TIM5_CCMR1_Output_bit at TIM5_CCMR1_Output.B5;
    sbit  OC1M2_TIM5_CCMR1_Output_bit at TIM5_CCMR1_Output.B6;
    sbit  OC1PE_TIM5_CCMR1_Output_bit at TIM5_CCMR1_Output.B3;
    sbit  OC1FE_TIM5_CCMR1_Output_bit at TIM5_CCMR1_Output.B2;
    sbit  CC1S0_TIM5_CCMR1_Output_bit at TIM5_CCMR1_Output.B0;
    sbit  CC1S1_TIM5_CCMR1_Output_bit at TIM5_CCMR1_Output.B1;

sfr unsigned long   volatile TIM5_CCMR1_Input     absolute 0x40000C18;
    sbit  IC2F0_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B12;
    sbit  IC2F1_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B13;
    sbit  IC2F2_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B14;
    sbit  IC2F3_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B15;
    sbit  IC2PSC0_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B10;
    sbit  IC2PSC1_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B11;
    sbit  CC2S0_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B8;
    sbit  CC2S1_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B9;
    sbit  IC1F0_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B4;
    sbit  IC1F1_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B5;
    sbit  IC1F2_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B6;
    sbit  IC1F3_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B7;
    sbit  IC1PSC0_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B2;
    sbit  IC1PSC1_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B3;
    sbit  CC1S0_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B0;
    sbit  CC1S1_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B1;

sfr unsigned long   volatile TIM5_CCMR2_Output    absolute 0x40000C1C;
    sbit  OC4CE_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B15;
    sbit  OC4M0_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B12;
    sbit  OC4M1_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B13;
    sbit  OC4M2_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B14;
    sbit  OC4PE_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B11;
    sbit  OC4FE_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B10;
    sbit  CC4S0_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B8;
    sbit  CC4S1_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B9;
    sbit  OC3CE_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B7;
    sbit  OC3M0_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B4;
    sbit  OC3M1_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B5;
    sbit  OC3M2_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B6;
    sbit  OC3PE_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B3;
    sbit  OC3FE_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B2;
    sbit  CC3S0_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B0;
    sbit  CC3S1_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B1;

sfr unsigned long   volatile TIM5_CCMR2_Input     absolute 0x40000C1C;
    sbit  IC4F0_TIM5_CCMR2_Input_bit at TIM5_CCMR2_Input.B12;
    sbit  IC4F1_TIM5_CCMR2_Input_bit at TIM5_CCMR2_Input.B13;
    sbit  IC4F2_TIM5_CCMR2_Input_bit at TIM5_CCMR2_Input.B14;
    sbit  IC4F3_TIM5_CCMR2_Input_bit at TIM5_CCMR2_Input.B15;
    sbit  IC4PSC0_TIM5_CCMR2_Input_bit at TIM5_CCMR2_Input.B10;
    sbit  IC4PSC1_TIM5_CCMR2_Input_bit at TIM5_CCMR2_Input.B11;
    sbit  CC4S0_TIM5_CCMR2_Input_bit at TIM5_CCMR2_Input.B8;
    sbit  CC4S1_TIM5_CCMR2_Input_bit at TIM5_CCMR2_Input.B9;
    sbit  IC3F0_TIM5_CCMR2_Input_bit at TIM5_CCMR2_Input.B4;
    sbit  IC3F1_TIM5_CCMR2_Input_bit at TIM5_CCMR2_Input.B5;
    sbit  IC3F2_TIM5_CCMR2_Input_bit at TIM5_CCMR2_Input.B6;
    sbit  IC3F3_TIM5_CCMR2_Input_bit at TIM5_CCMR2_Input.B7;
    sbit  IC3PSC0_TIM5_CCMR2_Input_bit at TIM5_CCMR2_Input.B2;
    sbit  IC3PSC1_TIM5_CCMR2_Input_bit at TIM5_CCMR2_Input.B3;
    sbit  CC3S0_TIM5_CCMR2_Input_bit at TIM5_CCMR2_Input.B0;
    sbit  CC3S1_TIM5_CCMR2_Input_bit at TIM5_CCMR2_Input.B1;

sfr unsigned long   volatile TIM5_CCER            absolute 0x40000C20;
    sbit  CC4P_TIM5_CCER_bit at TIM5_CCER.B13;
    sbit  CC4E_TIM5_CCER_bit at TIM5_CCER.B12;
    sbit  CC3P_TIM5_CCER_bit at TIM5_CCER.B9;
    sbit  CC3E_TIM5_CCER_bit at TIM5_CCER.B8;
    sbit  CC2P_TIM5_CCER_bit at TIM5_CCER.B5;
    sbit  CC2E_TIM5_CCER_bit at TIM5_CCER.B4;
    sbit  CC1P_TIM5_CCER_bit at TIM5_CCER.B1;
    sbit  CC1E_TIM5_CCER_bit at TIM5_CCER.B0;

sfr unsigned long   volatile TIM5_CNT             absolute 0x40000C24;
    sbit  CNT0_TIM5_CNT_bit at TIM5_CNT.B0;
    sbit  CNT1_TIM5_CNT_bit at TIM5_CNT.B1;
    sbit  CNT2_TIM5_CNT_bit at TIM5_CNT.B2;
    sbit  CNT3_TIM5_CNT_bit at TIM5_CNT.B3;
    sbit  CNT4_TIM5_CNT_bit at TIM5_CNT.B4;
    sbit  CNT5_TIM5_CNT_bit at TIM5_CNT.B5;
    sbit  CNT6_TIM5_CNT_bit at TIM5_CNT.B6;
    sbit  CNT7_TIM5_CNT_bit at TIM5_CNT.B7;
    sbit  CNT8_TIM5_CNT_bit at TIM5_CNT.B8;
    sbit  CNT9_TIM5_CNT_bit at TIM5_CNT.B9;
    sbit  CNT10_TIM5_CNT_bit at TIM5_CNT.B10;
    sbit  CNT11_TIM5_CNT_bit at TIM5_CNT.B11;
    sbit  CNT12_TIM5_CNT_bit at TIM5_CNT.B12;
    sbit  CNT13_TIM5_CNT_bit at TIM5_CNT.B13;
    sbit  CNT14_TIM5_CNT_bit at TIM5_CNT.B14;
    sbit  CNT15_TIM5_CNT_bit at TIM5_CNT.B15;

sfr unsigned long   volatile TIM5_PSC             absolute 0x40000C28;
    sbit  PSC0_TIM5_PSC_bit at TIM5_PSC.B0;
    sbit  PSC1_TIM5_PSC_bit at TIM5_PSC.B1;
    sbit  PSC2_TIM5_PSC_bit at TIM5_PSC.B2;
    sbit  PSC3_TIM5_PSC_bit at TIM5_PSC.B3;
    sbit  PSC4_TIM5_PSC_bit at TIM5_PSC.B4;
    sbit  PSC5_TIM5_PSC_bit at TIM5_PSC.B5;
    sbit  PSC6_TIM5_PSC_bit at TIM5_PSC.B6;
    sbit  PSC7_TIM5_PSC_bit at TIM5_PSC.B7;
    sbit  PSC8_TIM5_PSC_bit at TIM5_PSC.B8;
    sbit  PSC9_TIM5_PSC_bit at TIM5_PSC.B9;
    sbit  PSC10_TIM5_PSC_bit at TIM5_PSC.B10;
    sbit  PSC11_TIM5_PSC_bit at TIM5_PSC.B11;
    sbit  PSC12_TIM5_PSC_bit at TIM5_PSC.B12;
    sbit  PSC13_TIM5_PSC_bit at TIM5_PSC.B13;
    sbit  PSC14_TIM5_PSC_bit at TIM5_PSC.B14;
    sbit  PSC15_TIM5_PSC_bit at TIM5_PSC.B15;

sfr unsigned long   volatile TIM5_ARR             absolute 0x40000C2C;
    sbit  ARR0_TIM5_ARR_bit at TIM5_ARR.B0;
    sbit  ARR1_TIM5_ARR_bit at TIM5_ARR.B1;
    sbit  ARR2_TIM5_ARR_bit at TIM5_ARR.B2;
    sbit  ARR3_TIM5_ARR_bit at TIM5_ARR.B3;
    sbit  ARR4_TIM5_ARR_bit at TIM5_ARR.B4;
    sbit  ARR5_TIM5_ARR_bit at TIM5_ARR.B5;
    sbit  ARR6_TIM5_ARR_bit at TIM5_ARR.B6;
    sbit  ARR7_TIM5_ARR_bit at TIM5_ARR.B7;
    sbit  ARR8_TIM5_ARR_bit at TIM5_ARR.B8;
    sbit  ARR9_TIM5_ARR_bit at TIM5_ARR.B9;
    sbit  ARR10_TIM5_ARR_bit at TIM5_ARR.B10;
    sbit  ARR11_TIM5_ARR_bit at TIM5_ARR.B11;
    sbit  ARR12_TIM5_ARR_bit at TIM5_ARR.B12;
    sbit  ARR13_TIM5_ARR_bit at TIM5_ARR.B13;
    sbit  ARR14_TIM5_ARR_bit at TIM5_ARR.B14;
    sbit  ARR15_TIM5_ARR_bit at TIM5_ARR.B15;

sfr unsigned long   volatile TIM5_CCR1            absolute 0x40000C34;
    sbit  CCR10_TIM5_CCR1_bit at TIM5_CCR1.B0;
    sbit  CCR11_TIM5_CCR1_bit at TIM5_CCR1.B1;
    sbit  CCR12_TIM5_CCR1_bit at TIM5_CCR1.B2;
    sbit  CCR13_TIM5_CCR1_bit at TIM5_CCR1.B3;
    sbit  CCR14_TIM5_CCR1_bit at TIM5_CCR1.B4;
    sbit  CCR15_TIM5_CCR1_bit at TIM5_CCR1.B5;
    sbit  CCR16_TIM5_CCR1_bit at TIM5_CCR1.B6;
    sbit  CCR17_TIM5_CCR1_bit at TIM5_CCR1.B7;
    sbit  CCR18_TIM5_CCR1_bit at TIM5_CCR1.B8;
    sbit  CCR19_TIM5_CCR1_bit at TIM5_CCR1.B9;
    sbit  CCR110_TIM5_CCR1_bit at TIM5_CCR1.B10;
    sbit  CCR111_TIM5_CCR1_bit at TIM5_CCR1.B11;
    sbit  CCR112_TIM5_CCR1_bit at TIM5_CCR1.B12;
    sbit  CCR113_TIM5_CCR1_bit at TIM5_CCR1.B13;
    sbit  CCR114_TIM5_CCR1_bit at TIM5_CCR1.B14;
    sbit  CCR115_TIM5_CCR1_bit at TIM5_CCR1.B15;

sfr unsigned long   volatile TIM5_CCR2            absolute 0x40000C38;
    sbit  CCR20_TIM5_CCR2_bit at TIM5_CCR2.B0;
    sbit  CCR21_TIM5_CCR2_bit at TIM5_CCR2.B1;
    sbit  CCR22_TIM5_CCR2_bit at TIM5_CCR2.B2;
    sbit  CCR23_TIM5_CCR2_bit at TIM5_CCR2.B3;
    sbit  CCR24_TIM5_CCR2_bit at TIM5_CCR2.B4;
    sbit  CCR25_TIM5_CCR2_bit at TIM5_CCR2.B5;
    sbit  CCR26_TIM5_CCR2_bit at TIM5_CCR2.B6;
    sbit  CCR27_TIM5_CCR2_bit at TIM5_CCR2.B7;
    sbit  CCR28_TIM5_CCR2_bit at TIM5_CCR2.B8;
    sbit  CCR29_TIM5_CCR2_bit at TIM5_CCR2.B9;
    sbit  CCR210_TIM5_CCR2_bit at TIM5_CCR2.B10;
    sbit  CCR211_TIM5_CCR2_bit at TIM5_CCR2.B11;
    sbit  CCR212_TIM5_CCR2_bit at TIM5_CCR2.B12;
    sbit  CCR213_TIM5_CCR2_bit at TIM5_CCR2.B13;
    sbit  CCR214_TIM5_CCR2_bit at TIM5_CCR2.B14;
    sbit  CCR215_TIM5_CCR2_bit at TIM5_CCR2.B15;

sfr unsigned long   volatile TIM5_CCR3            absolute 0x40000C3C;
    sbit  CCR30_TIM5_CCR3_bit at TIM5_CCR3.B0;
    sbit  CCR31_TIM5_CCR3_bit at TIM5_CCR3.B1;
    sbit  CCR32_TIM5_CCR3_bit at TIM5_CCR3.B2;
    sbit  CCR33_TIM5_CCR3_bit at TIM5_CCR3.B3;
    sbit  CCR34_TIM5_CCR3_bit at TIM5_CCR3.B4;
    sbit  CCR35_TIM5_CCR3_bit at TIM5_CCR3.B5;
    sbit  CCR36_TIM5_CCR3_bit at TIM5_CCR3.B6;
    sbit  CCR37_TIM5_CCR3_bit at TIM5_CCR3.B7;
    sbit  CCR38_TIM5_CCR3_bit at TIM5_CCR3.B8;
    sbit  CCR39_TIM5_CCR3_bit at TIM5_CCR3.B9;
    sbit  CCR310_TIM5_CCR3_bit at TIM5_CCR3.B10;
    sbit  CCR311_TIM5_CCR3_bit at TIM5_CCR3.B11;
    sbit  CCR312_TIM5_CCR3_bit at TIM5_CCR3.B12;
    sbit  CCR313_TIM5_CCR3_bit at TIM5_CCR3.B13;
    sbit  CCR314_TIM5_CCR3_bit at TIM5_CCR3.B14;
    sbit  CCR315_TIM5_CCR3_bit at TIM5_CCR3.B15;

sfr unsigned long   volatile TIM5_CCR4            absolute 0x40000C40;
    sbit  CCR40_TIM5_CCR4_bit at TIM5_CCR4.B0;
    sbit  CCR41_TIM5_CCR4_bit at TIM5_CCR4.B1;
    sbit  CCR42_TIM5_CCR4_bit at TIM5_CCR4.B2;
    sbit  CCR43_TIM5_CCR4_bit at TIM5_CCR4.B3;
    sbit  CCR44_TIM5_CCR4_bit at TIM5_CCR4.B4;
    sbit  CCR45_TIM5_CCR4_bit at TIM5_CCR4.B5;
    sbit  CCR46_TIM5_CCR4_bit at TIM5_CCR4.B6;
    sbit  CCR47_TIM5_CCR4_bit at TIM5_CCR4.B7;
    sbit  CCR48_TIM5_CCR4_bit at TIM5_CCR4.B8;
    sbit  CCR49_TIM5_CCR4_bit at TIM5_CCR4.B9;
    sbit  CCR410_TIM5_CCR4_bit at TIM5_CCR4.B10;
    sbit  CCR411_TIM5_CCR4_bit at TIM5_CCR4.B11;
    sbit  CCR412_TIM5_CCR4_bit at TIM5_CCR4.B12;
    sbit  CCR413_TIM5_CCR4_bit at TIM5_CCR4.B13;
    sbit  CCR414_TIM5_CCR4_bit at TIM5_CCR4.B14;
    sbit  CCR415_TIM5_CCR4_bit at TIM5_CCR4.B15;

sfr unsigned long   volatile TIM5_DCR             absolute 0x40000C48;
    sbit  DBL0_TIM5_DCR_bit at TIM5_DCR.B8;
    sbit  DBL1_TIM5_DCR_bit at TIM5_DCR.B9;
    sbit  DBL2_TIM5_DCR_bit at TIM5_DCR.B10;
    sbit  DBL3_TIM5_DCR_bit at TIM5_DCR.B11;
    sbit  DBL4_TIM5_DCR_bit at TIM5_DCR.B12;
    sbit  DBA0_TIM5_DCR_bit at TIM5_DCR.B0;
    sbit  DBA1_TIM5_DCR_bit at TIM5_DCR.B1;
    sbit  DBA2_TIM5_DCR_bit at TIM5_DCR.B2;
    sbit  DBA3_TIM5_DCR_bit at TIM5_DCR.B3;
    sbit  DBA4_TIM5_DCR_bit at TIM5_DCR.B4;

sfr unsigned long   volatile TIM5_DMAR            absolute 0x40000C4C;
    sbit  DMAB0_TIM5_DMAR_bit at TIM5_DMAR.B0;
    sbit  DMAB1_TIM5_DMAR_bit at TIM5_DMAR.B1;
    sbit  DMAB2_TIM5_DMAR_bit at TIM5_DMAR.B2;
    sbit  DMAB3_TIM5_DMAR_bit at TIM5_DMAR.B3;
    sbit  DMAB4_TIM5_DMAR_bit at TIM5_DMAR.B4;
    sbit  DMAB5_TIM5_DMAR_bit at TIM5_DMAR.B5;
    sbit  DMAB6_TIM5_DMAR_bit at TIM5_DMAR.B6;
    sbit  DMAB7_TIM5_DMAR_bit at TIM5_DMAR.B7;
    sbit  DMAB8_TIM5_DMAR_bit at TIM5_DMAR.B8;
    sbit  DMAB9_TIM5_DMAR_bit at TIM5_DMAR.B9;
    sbit  DMAB10_TIM5_DMAR_bit at TIM5_DMAR.B10;
    sbit  DMAB11_TIM5_DMAR_bit at TIM5_DMAR.B11;
    sbit  DMAB12_TIM5_DMAR_bit at TIM5_DMAR.B12;
    sbit  DMAB13_TIM5_DMAR_bit at TIM5_DMAR.B13;
    sbit  DMAB14_TIM5_DMAR_bit at TIM5_DMAR.B14;
    sbit  DMAB15_TIM5_DMAR_bit at TIM5_DMAR.B15;

sfr unsigned long   volatile TIM12_CR1            absolute 0x40001800;
    sbit  CKD0_TIM12_CR1_bit at TIM12_CR1.B8;
    sbit  CKD1_TIM12_CR1_bit at TIM12_CR1.B9;
    sbit  ARPE_TIM12_CR1_bit at TIM12_CR1.B7;
    sbit  OPM_TIM12_CR1_bit at TIM12_CR1.B3;
    sbit  URS_TIM12_CR1_bit at TIM12_CR1.B2;
    sbit  UDIS_TIM12_CR1_bit at TIM12_CR1.B1;
    sbit  CEN_TIM12_CR1_bit at TIM12_CR1.B0;

sfr unsigned long   volatile TIM12_CR2            absolute 0x40001804;
    sbit  MMS0_TIM12_CR2_bit at TIM12_CR2.B4;
    sbit  MMS1_TIM12_CR2_bit at TIM12_CR2.B5;
    sbit  MMS2_TIM12_CR2_bit at TIM12_CR2.B6;

sfr unsigned long   volatile TIM12_SMCR           absolute 0x40001808;
    sbit  MSM_TIM12_SMCR_bit at TIM12_SMCR.B7;
    sbit  TS0_TIM12_SMCR_bit at TIM12_SMCR.B4;
    sbit  TS1_TIM12_SMCR_bit at TIM12_SMCR.B5;
    sbit  TS2_TIM12_SMCR_bit at TIM12_SMCR.B6;
    sbit  SMS0_TIM12_SMCR_bit at TIM12_SMCR.B0;
    sbit  SMS1_TIM12_SMCR_bit at TIM12_SMCR.B1;
    sbit  SMS2_TIM12_SMCR_bit at TIM12_SMCR.B2;

sfr unsigned long   volatile TIM12_DIER           absolute 0x4000180C;
    sbit  TIE_TIM12_DIER_bit at TIM12_DIER.B6;
    sbit  CC2IE_TIM12_DIER_bit at TIM12_DIER.B2;
    sbit  CC1IE_TIM12_DIER_bit at TIM12_DIER.B1;
    sbit  UIE_TIM12_DIER_bit at TIM12_DIER.B0;

sfr unsigned long   volatile TIM12_SR             absolute 0x40001810;
    sbit  CC2OF_TIM12_SR_bit at TIM12_SR.B10;
    sbit  CC1OF_TIM12_SR_bit at TIM12_SR.B9;
    sbit  TIF_TIM12_SR_bit at TIM12_SR.B6;
    sbit  CC2IF_TIM12_SR_bit at TIM12_SR.B2;
    sbit  CC1IF_TIM12_SR_bit at TIM12_SR.B1;
    sbit  UIF_TIM12_SR_bit at TIM12_SR.B0;

sfr unsigned long   volatile TIM12_EGR            absolute 0x40001814;
    sbit  TG_TIM12_EGR_bit at TIM12_EGR.B6;
    sbit  CC2G_TIM12_EGR_bit at TIM12_EGR.B2;
    sbit  CC1G_TIM12_EGR_bit at TIM12_EGR.B1;
    sbit  UG_TIM12_EGR_bit at TIM12_EGR.B0;

sfr unsigned long   volatile TIM12_CCMR1_Output   absolute 0x40001818;
    sbit  OC2M0_TIM12_CCMR1_Output_bit at TIM12_CCMR1_Output.B12;
    sbit  OC2M1_TIM12_CCMR1_Output_bit at TIM12_CCMR1_Output.B13;
    sbit  OC2M2_TIM12_CCMR1_Output_bit at TIM12_CCMR1_Output.B14;
    sbit  OC2PE_TIM12_CCMR1_Output_bit at TIM12_CCMR1_Output.B11;
    sbit  OC2FE_TIM12_CCMR1_Output_bit at TIM12_CCMR1_Output.B10;
    sbit  CC2S0_TIM12_CCMR1_Output_bit at TIM12_CCMR1_Output.B8;
    sbit  CC2S1_TIM12_CCMR1_Output_bit at TIM12_CCMR1_Output.B9;
    sbit  OC1M0_TIM12_CCMR1_Output_bit at TIM12_CCMR1_Output.B4;
    sbit  OC1M1_TIM12_CCMR1_Output_bit at TIM12_CCMR1_Output.B5;
    sbit  OC1M2_TIM12_CCMR1_Output_bit at TIM12_CCMR1_Output.B6;
    sbit  OC1PE_TIM12_CCMR1_Output_bit at TIM12_CCMR1_Output.B3;
    sbit  OC1FE_TIM12_CCMR1_Output_bit at TIM12_CCMR1_Output.B2;
    sbit  CC1S0_TIM12_CCMR1_Output_bit at TIM12_CCMR1_Output.B0;
    sbit  CC1S1_TIM12_CCMR1_Output_bit at TIM12_CCMR1_Output.B1;

sfr unsigned long   volatile TIM12_CCMR1_Input    absolute 0x40001818;
    sbit  IC2F0_TIM12_CCMR1_Input_bit at TIM12_CCMR1_Input.B12;
    sbit  IC2F1_TIM12_CCMR1_Input_bit at TIM12_CCMR1_Input.B13;
    sbit  IC2F2_TIM12_CCMR1_Input_bit at TIM12_CCMR1_Input.B14;
    sbit  IC2F3_TIM12_CCMR1_Input_bit at TIM12_CCMR1_Input.B15;
    sbit  IC2PSC0_TIM12_CCMR1_Input_bit at TIM12_CCMR1_Input.B10;
    sbit  IC2PSC1_TIM12_CCMR1_Input_bit at TIM12_CCMR1_Input.B11;
    sbit  CC2S0_TIM12_CCMR1_Input_bit at TIM12_CCMR1_Input.B8;
    sbit  CC2S1_TIM12_CCMR1_Input_bit at TIM12_CCMR1_Input.B9;
    sbit  IC1F0_TIM12_CCMR1_Input_bit at TIM12_CCMR1_Input.B4;
    sbit  IC1F1_TIM12_CCMR1_Input_bit at TIM12_CCMR1_Input.B5;
    sbit  IC1F2_TIM12_CCMR1_Input_bit at TIM12_CCMR1_Input.B6;
    sbit  IC1F3_TIM12_CCMR1_Input_bit at TIM12_CCMR1_Input.B7;
    sbit  IC1PSC0_TIM12_CCMR1_Input_bit at TIM12_CCMR1_Input.B2;
    sbit  IC1PSC1_TIM12_CCMR1_Input_bit at TIM12_CCMR1_Input.B3;
    sbit  CC1S0_TIM12_CCMR1_Input_bit at TIM12_CCMR1_Input.B0;
    sbit  CC1S1_TIM12_CCMR1_Input_bit at TIM12_CCMR1_Input.B1;

sfr unsigned long   volatile TIM12_CCER           absolute 0x40001820;
    sbit  CC2NP_TIM12_CCER_bit at TIM12_CCER.B7;
    sbit  CC2P_TIM12_CCER_bit at TIM12_CCER.B5;
    sbit  CC2E_TIM12_CCER_bit at TIM12_CCER.B4;
    sbit  CC1NP_TIM12_CCER_bit at TIM12_CCER.B3;
    sbit  CC1P_TIM12_CCER_bit at TIM12_CCER.B1;
    sbit  CC1E_TIM12_CCER_bit at TIM12_CCER.B0;

sfr unsigned long   volatile TIM12_CNT            absolute 0x40001824;
    sbit  CNT0_TIM12_CNT_bit at TIM12_CNT.B0;
    sbit  CNT1_TIM12_CNT_bit at TIM12_CNT.B1;
    sbit  CNT2_TIM12_CNT_bit at TIM12_CNT.B2;
    sbit  CNT3_TIM12_CNT_bit at TIM12_CNT.B3;
    sbit  CNT4_TIM12_CNT_bit at TIM12_CNT.B4;
    sbit  CNT5_TIM12_CNT_bit at TIM12_CNT.B5;
    sbit  CNT6_TIM12_CNT_bit at TIM12_CNT.B6;
    sbit  CNT7_TIM12_CNT_bit at TIM12_CNT.B7;
    sbit  CNT8_TIM12_CNT_bit at TIM12_CNT.B8;
    sbit  CNT9_TIM12_CNT_bit at TIM12_CNT.B9;
    sbit  CNT10_TIM12_CNT_bit at TIM12_CNT.B10;
    sbit  CNT11_TIM12_CNT_bit at TIM12_CNT.B11;
    sbit  CNT12_TIM12_CNT_bit at TIM12_CNT.B12;
    sbit  CNT13_TIM12_CNT_bit at TIM12_CNT.B13;
    sbit  CNT14_TIM12_CNT_bit at TIM12_CNT.B14;
    sbit  CNT15_TIM12_CNT_bit at TIM12_CNT.B15;

sfr unsigned long   volatile TIM12_PSC            absolute 0x40001828;
    sbit  PSC0_TIM12_PSC_bit at TIM12_PSC.B0;
    sbit  PSC1_TIM12_PSC_bit at TIM12_PSC.B1;
    sbit  PSC2_TIM12_PSC_bit at TIM12_PSC.B2;
    sbit  PSC3_TIM12_PSC_bit at TIM12_PSC.B3;
    sbit  PSC4_TIM12_PSC_bit at TIM12_PSC.B4;
    sbit  PSC5_TIM12_PSC_bit at TIM12_PSC.B5;
    sbit  PSC6_TIM12_PSC_bit at TIM12_PSC.B6;
    sbit  PSC7_TIM12_PSC_bit at TIM12_PSC.B7;
    sbit  PSC8_TIM12_PSC_bit at TIM12_PSC.B8;
    sbit  PSC9_TIM12_PSC_bit at TIM12_PSC.B9;
    sbit  PSC10_TIM12_PSC_bit at TIM12_PSC.B10;
    sbit  PSC11_TIM12_PSC_bit at TIM12_PSC.B11;
    sbit  PSC12_TIM12_PSC_bit at TIM12_PSC.B12;
    sbit  PSC13_TIM12_PSC_bit at TIM12_PSC.B13;
    sbit  PSC14_TIM12_PSC_bit at TIM12_PSC.B14;
    sbit  PSC15_TIM12_PSC_bit at TIM12_PSC.B15;

sfr unsigned long   volatile TIM12_ARR            absolute 0x4000182C;
    sbit  ARR0_TIM12_ARR_bit at TIM12_ARR.B0;
    sbit  ARR1_TIM12_ARR_bit at TIM12_ARR.B1;
    sbit  ARR2_TIM12_ARR_bit at TIM12_ARR.B2;
    sbit  ARR3_TIM12_ARR_bit at TIM12_ARR.B3;
    sbit  ARR4_TIM12_ARR_bit at TIM12_ARR.B4;
    sbit  ARR5_TIM12_ARR_bit at TIM12_ARR.B5;
    sbit  ARR6_TIM12_ARR_bit at TIM12_ARR.B6;
    sbit  ARR7_TIM12_ARR_bit at TIM12_ARR.B7;
    sbit  ARR8_TIM12_ARR_bit at TIM12_ARR.B8;
    sbit  ARR9_TIM12_ARR_bit at TIM12_ARR.B9;
    sbit  ARR10_TIM12_ARR_bit at TIM12_ARR.B10;
    sbit  ARR11_TIM12_ARR_bit at TIM12_ARR.B11;
    sbit  ARR12_TIM12_ARR_bit at TIM12_ARR.B12;
    sbit  ARR13_TIM12_ARR_bit at TIM12_ARR.B13;
    sbit  ARR14_TIM12_ARR_bit at TIM12_ARR.B14;
    sbit  ARR15_TIM12_ARR_bit at TIM12_ARR.B15;

sfr unsigned long   volatile TIM12_CCR1           absolute 0x40001834;
    sbit  CCR10_TIM12_CCR1_bit at TIM12_CCR1.B0;
    sbit  CCR11_TIM12_CCR1_bit at TIM12_CCR1.B1;
    sbit  CCR12_TIM12_CCR1_bit at TIM12_CCR1.B2;
    sbit  CCR13_TIM12_CCR1_bit at TIM12_CCR1.B3;
    sbit  CCR14_TIM12_CCR1_bit at TIM12_CCR1.B4;
    sbit  CCR15_TIM12_CCR1_bit at TIM12_CCR1.B5;
    sbit  CCR16_TIM12_CCR1_bit at TIM12_CCR1.B6;
    sbit  CCR17_TIM12_CCR1_bit at TIM12_CCR1.B7;
    sbit  CCR18_TIM12_CCR1_bit at TIM12_CCR1.B8;
    sbit  CCR19_TIM12_CCR1_bit at TIM12_CCR1.B9;
    sbit  CCR110_TIM12_CCR1_bit at TIM12_CCR1.B10;
    sbit  CCR111_TIM12_CCR1_bit at TIM12_CCR1.B11;
    sbit  CCR112_TIM12_CCR1_bit at TIM12_CCR1.B12;
    sbit  CCR113_TIM12_CCR1_bit at TIM12_CCR1.B13;
    sbit  CCR114_TIM12_CCR1_bit at TIM12_CCR1.B14;
    sbit  CCR115_TIM12_CCR1_bit at TIM12_CCR1.B15;

sfr unsigned long   volatile TIM12_CCR2           absolute 0x40001838;
    sbit  CCR20_TIM12_CCR2_bit at TIM12_CCR2.B0;
    sbit  CCR21_TIM12_CCR2_bit at TIM12_CCR2.B1;
    sbit  CCR22_TIM12_CCR2_bit at TIM12_CCR2.B2;
    sbit  CCR23_TIM12_CCR2_bit at TIM12_CCR2.B3;
    sbit  CCR24_TIM12_CCR2_bit at TIM12_CCR2.B4;
    sbit  CCR25_TIM12_CCR2_bit at TIM12_CCR2.B5;
    sbit  CCR26_TIM12_CCR2_bit at TIM12_CCR2.B6;
    sbit  CCR27_TIM12_CCR2_bit at TIM12_CCR2.B7;
    sbit  CCR28_TIM12_CCR2_bit at TIM12_CCR2.B8;
    sbit  CCR29_TIM12_CCR2_bit at TIM12_CCR2.B9;
    sbit  CCR210_TIM12_CCR2_bit at TIM12_CCR2.B10;
    sbit  CCR211_TIM12_CCR2_bit at TIM12_CCR2.B11;
    sbit  CCR212_TIM12_CCR2_bit at TIM12_CCR2.B12;
    sbit  CCR213_TIM12_CCR2_bit at TIM12_CCR2.B13;
    sbit  CCR214_TIM12_CCR2_bit at TIM12_CCR2.B14;
    sbit  CCR215_TIM12_CCR2_bit at TIM12_CCR2.B15;

sfr unsigned long   volatile TIM13_CR1            absolute 0x40001C00;
    sbit  CKD0_TIM13_CR1_bit at TIM13_CR1.B8;
    sbit  CKD1_TIM13_CR1_bit at TIM13_CR1.B9;
    sbit  ARPE_TIM13_CR1_bit at TIM13_CR1.B7;
    sbit  URS_TIM13_CR1_bit at TIM13_CR1.B2;
    sbit  UDIS_TIM13_CR1_bit at TIM13_CR1.B1;
    sbit  CEN_TIM13_CR1_bit at TIM13_CR1.B0;

sfr unsigned long   volatile TIM13_DIER           absolute 0x40001C0C;
    sbit  CC1IE_TIM13_DIER_bit at TIM13_DIER.B1;
    sbit  UIE_TIM13_DIER_bit at TIM13_DIER.B0;

sfr unsigned long   volatile TIM13_SR             absolute 0x40001C10;
    sbit  CC1OF_TIM13_SR_bit at TIM13_SR.B9;
    sbit  CC1IF_TIM13_SR_bit at TIM13_SR.B1;
    sbit  UIF_TIM13_SR_bit at TIM13_SR.B0;

sfr unsigned long   volatile TIM13_EGR            absolute 0x40001C14;
    sbit  CC1G_TIM13_EGR_bit at TIM13_EGR.B1;
    sbit  UG_TIM13_EGR_bit at TIM13_EGR.B0;

sfr unsigned long   volatile TIM13_CCMR1_Output   absolute 0x40001C18;
    sbit  CC1S0_TIM13_CCMR1_Output_bit at TIM13_CCMR1_Output.B0;
    sbit  CC1S1_TIM13_CCMR1_Output_bit at TIM13_CCMR1_Output.B1;
    sbit  OC1FE_TIM13_CCMR1_Output_bit at TIM13_CCMR1_Output.B2;
    sbit  OC1PE_TIM13_CCMR1_Output_bit at TIM13_CCMR1_Output.B3;
    sbit  OC1M0_TIM13_CCMR1_Output_bit at TIM13_CCMR1_Output.B4;
    sbit  OC1M1_TIM13_CCMR1_Output_bit at TIM13_CCMR1_Output.B5;
    sbit  OC1M2_TIM13_CCMR1_Output_bit at TIM13_CCMR1_Output.B6;

sfr unsigned long   volatile TIM13_CCMR1_Input    absolute 0x40001C18;
    sbit  IC1F0_TIM13_CCMR1_Input_bit at TIM13_CCMR1_Input.B4;
    sbit  IC1F1_TIM13_CCMR1_Input_bit at TIM13_CCMR1_Input.B5;
    sbit  IC1F2_TIM13_CCMR1_Input_bit at TIM13_CCMR1_Input.B6;
    sbit  IC1F3_TIM13_CCMR1_Input_bit at TIM13_CCMR1_Input.B7;
    sbit  IC1PSC0_TIM13_CCMR1_Input_bit at TIM13_CCMR1_Input.B2;
    sbit  IC1PSC1_TIM13_CCMR1_Input_bit at TIM13_CCMR1_Input.B3;
    sbit  CC1S0_TIM13_CCMR1_Input_bit at TIM13_CCMR1_Input.B0;
    sbit  CC1S1_TIM13_CCMR1_Input_bit at TIM13_CCMR1_Input.B1;

sfr unsigned long   volatile TIM13_CCER           absolute 0x40001C20;
    sbit  CC1NP_TIM13_CCER_bit at TIM13_CCER.B3;
    sbit  CC1P_TIM13_CCER_bit at TIM13_CCER.B1;
    sbit  CC1E_TIM13_CCER_bit at TIM13_CCER.B0;

sfr unsigned long   volatile TIM13_CNT            absolute 0x40001C24;
    sbit  CNT0_TIM13_CNT_bit at TIM13_CNT.B0;
    sbit  CNT1_TIM13_CNT_bit at TIM13_CNT.B1;
    sbit  CNT2_TIM13_CNT_bit at TIM13_CNT.B2;
    sbit  CNT3_TIM13_CNT_bit at TIM13_CNT.B3;
    sbit  CNT4_TIM13_CNT_bit at TIM13_CNT.B4;
    sbit  CNT5_TIM13_CNT_bit at TIM13_CNT.B5;
    sbit  CNT6_TIM13_CNT_bit at TIM13_CNT.B6;
    sbit  CNT7_TIM13_CNT_bit at TIM13_CNT.B7;
    sbit  CNT8_TIM13_CNT_bit at TIM13_CNT.B8;
    sbit  CNT9_TIM13_CNT_bit at TIM13_CNT.B9;
    sbit  CNT10_TIM13_CNT_bit at TIM13_CNT.B10;
    sbit  CNT11_TIM13_CNT_bit at TIM13_CNT.B11;
    sbit  CNT12_TIM13_CNT_bit at TIM13_CNT.B12;
    sbit  CNT13_TIM13_CNT_bit at TIM13_CNT.B13;
    sbit  CNT14_TIM13_CNT_bit at TIM13_CNT.B14;
    sbit  CNT15_TIM13_CNT_bit at TIM13_CNT.B15;

sfr unsigned long   volatile TIM13_PSC            absolute 0x40001C28;
    sbit  PSC0_TIM13_PSC_bit at TIM13_PSC.B0;
    sbit  PSC1_TIM13_PSC_bit at TIM13_PSC.B1;
    sbit  PSC2_TIM13_PSC_bit at TIM13_PSC.B2;
    sbit  PSC3_TIM13_PSC_bit at TIM13_PSC.B3;
    sbit  PSC4_TIM13_PSC_bit at TIM13_PSC.B4;
    sbit  PSC5_TIM13_PSC_bit at TIM13_PSC.B5;
    sbit  PSC6_TIM13_PSC_bit at TIM13_PSC.B6;
    sbit  PSC7_TIM13_PSC_bit at TIM13_PSC.B7;
    sbit  PSC8_TIM13_PSC_bit at TIM13_PSC.B8;
    sbit  PSC9_TIM13_PSC_bit at TIM13_PSC.B9;
    sbit  PSC10_TIM13_PSC_bit at TIM13_PSC.B10;
    sbit  PSC11_TIM13_PSC_bit at TIM13_PSC.B11;
    sbit  PSC12_TIM13_PSC_bit at TIM13_PSC.B12;
    sbit  PSC13_TIM13_PSC_bit at TIM13_PSC.B13;
    sbit  PSC14_TIM13_PSC_bit at TIM13_PSC.B14;
    sbit  PSC15_TIM13_PSC_bit at TIM13_PSC.B15;

sfr unsigned long   volatile TIM13_ARR            absolute 0x40001C2C;
    sbit  ARR0_TIM13_ARR_bit at TIM13_ARR.B0;
    sbit  ARR1_TIM13_ARR_bit at TIM13_ARR.B1;
    sbit  ARR2_TIM13_ARR_bit at TIM13_ARR.B2;
    sbit  ARR3_TIM13_ARR_bit at TIM13_ARR.B3;
    sbit  ARR4_TIM13_ARR_bit at TIM13_ARR.B4;
    sbit  ARR5_TIM13_ARR_bit at TIM13_ARR.B5;
    sbit  ARR6_TIM13_ARR_bit at TIM13_ARR.B6;
    sbit  ARR7_TIM13_ARR_bit at TIM13_ARR.B7;
    sbit  ARR8_TIM13_ARR_bit at TIM13_ARR.B8;
    sbit  ARR9_TIM13_ARR_bit at TIM13_ARR.B9;
    sbit  ARR10_TIM13_ARR_bit at TIM13_ARR.B10;
    sbit  ARR11_TIM13_ARR_bit at TIM13_ARR.B11;
    sbit  ARR12_TIM13_ARR_bit at TIM13_ARR.B12;
    sbit  ARR13_TIM13_ARR_bit at TIM13_ARR.B13;
    sbit  ARR14_TIM13_ARR_bit at TIM13_ARR.B14;
    sbit  ARR15_TIM13_ARR_bit at TIM13_ARR.B15;

sfr unsigned long   volatile TIM13_CCR1           absolute 0x40001C34;
    sbit  CCR10_TIM13_CCR1_bit at TIM13_CCR1.B0;
    sbit  CCR11_TIM13_CCR1_bit at TIM13_CCR1.B1;
    sbit  CCR12_TIM13_CCR1_bit at TIM13_CCR1.B2;
    sbit  CCR13_TIM13_CCR1_bit at TIM13_CCR1.B3;
    sbit  CCR14_TIM13_CCR1_bit at TIM13_CCR1.B4;
    sbit  CCR15_TIM13_CCR1_bit at TIM13_CCR1.B5;
    sbit  CCR16_TIM13_CCR1_bit at TIM13_CCR1.B6;
    sbit  CCR17_TIM13_CCR1_bit at TIM13_CCR1.B7;
    sbit  CCR18_TIM13_CCR1_bit at TIM13_CCR1.B8;
    sbit  CCR19_TIM13_CCR1_bit at TIM13_CCR1.B9;
    sbit  CCR110_TIM13_CCR1_bit at TIM13_CCR1.B10;
    sbit  CCR111_TIM13_CCR1_bit at TIM13_CCR1.B11;
    sbit  CCR112_TIM13_CCR1_bit at TIM13_CCR1.B12;
    sbit  CCR113_TIM13_CCR1_bit at TIM13_CCR1.B13;
    sbit  CCR114_TIM13_CCR1_bit at TIM13_CCR1.B14;
    sbit  CCR115_TIM13_CCR1_bit at TIM13_CCR1.B15;

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

sfr unsigned long   volatile TIM7_CR1             absolute 0x40001400;
    sbit  ARPE_TIM7_CR1_bit at TIM7_CR1.B7;
    sbit  OPM_TIM7_CR1_bit at TIM7_CR1.B3;
    sbit  URS_TIM7_CR1_bit at TIM7_CR1.B2;
    sbit  UDIS_TIM7_CR1_bit at TIM7_CR1.B1;
    sbit  CEN_TIM7_CR1_bit at TIM7_CR1.B0;

sfr unsigned long   volatile TIM7_CR2             absolute 0x40001404;
    sbit  MMS0_TIM7_CR2_bit at TIM7_CR2.B4;
    sbit  MMS1_TIM7_CR2_bit at TIM7_CR2.B5;
    sbit  MMS2_TIM7_CR2_bit at TIM7_CR2.B6;

sfr unsigned long   volatile TIM7_DIER            absolute 0x4000140C;
    sbit  UDE_TIM7_DIER_bit at TIM7_DIER.B8;
    sbit  UIE_TIM7_DIER_bit at TIM7_DIER.B0;

sfr unsigned long   volatile TIM7_SR              absolute 0x40001410;
    sbit  UIF_TIM7_SR_bit at TIM7_SR.B0;

sfr unsigned long   volatile TIM7_EGR             absolute 0x40001414;
    sbit  UG_TIM7_EGR_bit at TIM7_EGR.B0;

sfr unsigned long   volatile TIM7_CNT             absolute 0x40001424;
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

sfr unsigned long   volatile TIM7_PSC             absolute 0x40001428;
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

sfr unsigned long   volatile TIM7_ARR             absolute 0x4000142C;
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

sfr unsigned long   volatile I2C1_CR1             absolute 0x40005400;
    const register unsigned short int SWRST = 15;
    sbit  SWRST_bit at I2C1_CR1.B15;
    const register unsigned short int ALERT = 13;
    sbit  ALERT_bit at I2C1_CR1.B13;
    const register unsigned short int PEC = 12;
    sbit  PEC_bit at I2C1_CR1.B12;
    const register unsigned short int POS = 11;
    sbit  POS_bit at I2C1_CR1.B11;
    const register unsigned short int ACK = 10;
    sbit  ACK_bit at I2C1_CR1.B10;
    const register unsigned short int STOP_ = 9;
    sbit  STOP_bit at I2C1_CR1.B9;
    const register unsigned short int START = 8;
    sbit  START_bit at I2C1_CR1.B8;
    const register unsigned short int NOSTRETCH = 7;
    sbit  NOSTRETCH_bit at I2C1_CR1.B7;
    const register unsigned short int ENGC = 6;
    sbit  ENGC_bit at I2C1_CR1.B6;
    const register unsigned short int ENPEC = 5;
    sbit  ENPEC_bit at I2C1_CR1.B5;
    const register unsigned short int ENARP = 4;
    sbit  ENARP_bit at I2C1_CR1.B4;
    const register unsigned short int SMBTYPE = 3;
    sbit  SMBTYPE_bit at I2C1_CR1.B3;
    const register unsigned short int SMBUS = 1;
    sbit  SMBUS_bit at I2C1_CR1.B1;
    const register unsigned short int PE = 0;
    sbit  PE_bit at I2C1_CR1.B0;

sfr unsigned long   volatile I2C1_CR2             absolute 0x40005404;
    const register unsigned short int LAST = 12;
    sbit  LAST_bit at I2C1_CR2.B12;
    const register unsigned short int DMAEN = 11;
    sbit  DMAEN_bit at I2C1_CR2.B11;
    const register unsigned short int ITBUFEN = 10;
    sbit  ITBUFEN_bit at I2C1_CR2.B10;
    const register unsigned short int ITEVTEN = 9;
    sbit  ITEVTEN_bit at I2C1_CR2.B9;
    const register unsigned short int ITERREN = 8;
    sbit  ITERREN_bit at I2C1_CR2.B8;
    const register unsigned short int FREQ0 = 0;
    sbit  FREQ0_bit at I2C1_CR2.B0;
    const register unsigned short int FREQ1 = 1;
    sbit  FREQ1_bit at I2C1_CR2.B1;
    const register unsigned short int FREQ2 = 2;
    sbit  FREQ2_bit at I2C1_CR2.B2;
    const register unsigned short int FREQ3 = 3;
    sbit  FREQ3_bit at I2C1_CR2.B3;
    const register unsigned short int FREQ4 = 4;
    sbit  FREQ4_bit at I2C1_CR2.B4;
    const register unsigned short int FREQ5 = 5;
    sbit  FREQ5_bit at I2C1_CR2.B5;

sfr unsigned long   volatile I2C1_OAR1            absolute 0x40005408;
    const register unsigned short int ADDMODE = 15;
    sbit  ADDMODE_bit at I2C1_OAR1.B15;
    const register unsigned short int ADD100 = 8;
    sbit  ADD100_bit at I2C1_OAR1.B8;
    const register unsigned short int ADD101 = 9;
    sbit  ADD101_bit at I2C1_OAR1.B9;
    const register unsigned short int ADD70 = 1;
    sbit  ADD70_bit at I2C1_OAR1.B1;
    const register unsigned short int ADD71 = 2;
    sbit  ADD71_bit at I2C1_OAR1.B2;
    const register unsigned short int ADD72 = 3;
    sbit  ADD72_bit at I2C1_OAR1.B3;
    const register unsigned short int ADD73 = 4;
    sbit  ADD73_bit at I2C1_OAR1.B4;
    const register unsigned short int ADD74 = 5;
    sbit  ADD74_bit at I2C1_OAR1.B5;
    const register unsigned short int ADD75 = 6;
    sbit  ADD75_bit at I2C1_OAR1.B6;
    const register unsigned short int ADD76 = 7;
    sbit  ADD76_bit at I2C1_OAR1.B7;
    const register unsigned short int ADD0 = 0;
    sbit  ADD0_bit at I2C1_OAR1.B0;

sfr unsigned long   volatile I2C1_OAR2            absolute 0x4000540C;
    const register unsigned short int ADD20 = 1;
    sbit  ADD20_bit at I2C1_OAR2.B1;
    const register unsigned short int ADD21 = 2;
    sbit  ADD21_bit at I2C1_OAR2.B2;
    const register unsigned short int ADD22 = 3;
    sbit  ADD22_bit at I2C1_OAR2.B3;
    const register unsigned short int ADD23 = 4;
    sbit  ADD23_bit at I2C1_OAR2.B4;
    const register unsigned short int ADD24 = 5;
    sbit  ADD24_bit at I2C1_OAR2.B5;
    const register unsigned short int ADD25 = 6;
    sbit  ADD25_bit at I2C1_OAR2.B6;
    const register unsigned short int ADD26 = 7;
    sbit  ADD26_bit at I2C1_OAR2.B7;
    const register unsigned short int ENDUAL = 0;
    sbit  ENDUAL_bit at I2C1_OAR2.B0;

sfr unsigned long   volatile I2C1_DR              absolute 0x40005410;
    const register unsigned short int DR0 = 0;
    sbit  DR0_bit at I2C1_DR.B0;
    const register unsigned short int DR1 = 1;
    sbit  DR1_bit at I2C1_DR.B1;
    const register unsigned short int DR2 = 2;
    sbit  DR2_bit at I2C1_DR.B2;
    const register unsigned short int DR3 = 3;
    sbit  DR3_bit at I2C1_DR.B3;
    const register unsigned short int DR4 = 4;
    sbit  DR4_bit at I2C1_DR.B4;
    const register unsigned short int DR5 = 5;
    sbit  DR5_bit at I2C1_DR.B5;
    const register unsigned short int DR6 = 6;
    sbit  DR6_bit at I2C1_DR.B6;
    const register unsigned short int DR7 = 7;
    sbit  DR7_bit at I2C1_DR.B7;

sfr unsigned long   volatile I2C1_SR1             absolute 0x40005414;
    const register unsigned short int SMBALERT = 15;
    sbit  SMBALERT_bit at I2C1_SR1.B15;
    const register unsigned short int TIMEOUT = 14;
    sbit  TIMEOUT_bit at I2C1_SR1.B14;
    const register unsigned short int PECERR = 12;
    sbit  PECERR_bit at I2C1_SR1.B12;
    const register unsigned short int OVR = 11;
    sbit  OVR_bit at I2C1_SR1.B11;
    const register unsigned short int AF = 10;
    sbit  AF_bit at I2C1_SR1.B10;
    const register unsigned short int ARLO = 9;
    sbit  ARLO_bit at I2C1_SR1.B9;
    const register unsigned short int BERR = 8;
    sbit  BERR_bit at I2C1_SR1.B8;
    const register unsigned short int TxE = 7;
    sbit  TxE_bit at I2C1_SR1.B7;
    const register unsigned short int RxNE = 6;
    sbit  RxNE_bit at I2C1_SR1.B6;
    const register unsigned short int STOPF = 4;
    sbit  STOPF_bit at I2C1_SR1.B4;
    const register unsigned short int ADD10 = 3;
    sbit  ADD10_bit at I2C1_SR1.B3;
    const register unsigned short int BTF = 2;
    sbit  BTF_bit at I2C1_SR1.B2;
    const register unsigned short int ADDR = 1;
    sbit  ADDR_bit at I2C1_SR1.B1;
    const register unsigned short int SB = 0;
    sbit  SB_bit at I2C1_SR1.B0;

sfr unsigned long   volatile I2C1_SR2             absolute 0x40005418;
    const register unsigned short int PEC0 = 8;
    sbit  PEC0_bit at I2C1_SR2.B8;
    const register unsigned short int PEC1 = 9;
    sbit  PEC1_bit at I2C1_SR2.B9;
    const register unsigned short int PEC2 = 10;
    sbit  PEC2_bit at I2C1_SR2.B10;
    const register unsigned short int PEC3 = 11;
    sbit  PEC3_bit at I2C1_SR2.B11;
    const register unsigned short int PEC4 = 12;
    sbit  PEC4_bit at I2C1_SR2.B12;
    const register unsigned short int PEC5 = 13;
    sbit  PEC5_bit at I2C1_SR2.B13;
    const register unsigned short int PEC6 = 14;
    sbit  PEC6_bit at I2C1_SR2.B14;
    const register unsigned short int PEC7 = 15;
    sbit  PEC7_bit at I2C1_SR2.B15;
    const register unsigned short int DUALF = 7;
    sbit  DUALF_bit at I2C1_SR2.B7;
    const register unsigned short int SMBHOST = 6;
    sbit  SMBHOST_bit at I2C1_SR2.B6;
    const register unsigned short int SMBDEFAULT = 5;
    sbit  SMBDEFAULT_bit at I2C1_SR2.B5;
    const register unsigned short int GENCALL = 4;
    sbit  GENCALL_bit at I2C1_SR2.B4;
    const register unsigned short int TRA = 2;
    sbit  TRA_bit at I2C1_SR2.B2;
    const register unsigned short int BUSY = 1;
    sbit  BUSY_bit at I2C1_SR2.B1;
    const register unsigned short int MSL = 0;
    sbit  MSL_bit at I2C1_SR2.B0;

sfr unsigned long   volatile I2C1_CCR             absolute 0x4000541C;
    const register unsigned short int F_S = 15;
    sbit  F_S_bit at I2C1_CCR.B15;
    const register unsigned short int DUTY = 14;
    sbit  DUTY_bit at I2C1_CCR.B14;
    const register unsigned short int CCR0 = 0;
    sbit  CCR0_bit at I2C1_CCR.B0;
    const register unsigned short int CCR1 = 1;
    sbit  CCR1_bit at I2C1_CCR.B1;
    const register unsigned short int CCR2 = 2;
    sbit  CCR2_bit at I2C1_CCR.B2;
    const register unsigned short int CCR3 = 3;
    sbit  CCR3_bit at I2C1_CCR.B3;
    const register unsigned short int CCR4 = 4;
    sbit  CCR4_bit at I2C1_CCR.B4;
    const register unsigned short int CCR5 = 5;
    sbit  CCR5_bit at I2C1_CCR.B5;
    const register unsigned short int CCR6 = 6;
    sbit  CCR6_bit at I2C1_CCR.B6;
    const register unsigned short int CCR7 = 7;
    sbit  CCR7_bit at I2C1_CCR.B7;
    const register unsigned short int CCR8 = 8;
    sbit  CCR8_bit at I2C1_CCR.B8;
    const register unsigned short int CCR9 = 9;
    sbit  CCR9_bit at I2C1_CCR.B9;
    sbit  CCR10_I2C1_CCR_bit at I2C1_CCR.B10;
    sbit  CCR11_I2C1_CCR_bit at I2C1_CCR.B11;

sfr unsigned long   volatile I2C1_TRISE           absolute 0x40005420;
    const register unsigned short int TRISE0 = 0;
    sbit  TRISE0_bit at I2C1_TRISE.B0;
    const register unsigned short int TRISE1 = 1;
    sbit  TRISE1_bit at I2C1_TRISE.B1;
    const register unsigned short int TRISE2 = 2;
    sbit  TRISE2_bit at I2C1_TRISE.B2;
    const register unsigned short int TRISE3 = 3;
    sbit  TRISE3_bit at I2C1_TRISE.B3;
    const register unsigned short int TRISE4 = 4;
    sbit  TRISE4_bit at I2C1_TRISE.B4;
    const register unsigned short int TRISE5 = 5;
    sbit  TRISE5_bit at I2C1_TRISE.B5;

sfr unsigned long   volatile I2C2_CR1             absolute 0x40005800;
    sbit  SWRST_I2C2_CR1_bit at I2C2_CR1.B15;
    sbit  ALERT_I2C2_CR1_bit at I2C2_CR1.B13;
    sbit  PEC_I2C2_CR1_bit at I2C2_CR1.B12;
    sbit  POS_I2C2_CR1_bit at I2C2_CR1.B11;
    sbit  ACK_I2C2_CR1_bit at I2C2_CR1.B10;
    sbit  STOP_I2C2_CR1_bit at I2C2_CR1.B9;
    sbit  START_I2C2_CR1_bit at I2C2_CR1.B8;
    sbit  NOSTRETCH_I2C2_CR1_bit at I2C2_CR1.B7;
    sbit  ENGC_I2C2_CR1_bit at I2C2_CR1.B6;
    sbit  ENPEC_I2C2_CR1_bit at I2C2_CR1.B5;
    sbit  ENARP_I2C2_CR1_bit at I2C2_CR1.B4;
    sbit  SMBTYPE_I2C2_CR1_bit at I2C2_CR1.B3;
    sbit  SMBUS_I2C2_CR1_bit at I2C2_CR1.B1;
    sbit  PE_I2C2_CR1_bit at I2C2_CR1.B0;

sfr unsigned long   volatile I2C2_CR2             absolute 0x40005804;
    sbit  LAST_I2C2_CR2_bit at I2C2_CR2.B12;
    sbit  DMAEN_I2C2_CR2_bit at I2C2_CR2.B11;
    sbit  ITBUFEN_I2C2_CR2_bit at I2C2_CR2.B10;
    sbit  ITEVTEN_I2C2_CR2_bit at I2C2_CR2.B9;
    sbit  ITERREN_I2C2_CR2_bit at I2C2_CR2.B8;
    sbit  FREQ0_I2C2_CR2_bit at I2C2_CR2.B0;
    sbit  FREQ1_I2C2_CR2_bit at I2C2_CR2.B1;
    sbit  FREQ2_I2C2_CR2_bit at I2C2_CR2.B2;
    sbit  FREQ3_I2C2_CR2_bit at I2C2_CR2.B3;
    sbit  FREQ4_I2C2_CR2_bit at I2C2_CR2.B4;
    sbit  FREQ5_I2C2_CR2_bit at I2C2_CR2.B5;

sfr unsigned long   volatile I2C2_OAR1            absolute 0x40005808;
    sbit  ADDMODE_I2C2_OAR1_bit at I2C2_OAR1.B15;
    sbit  ADD100_I2C2_OAR1_bit at I2C2_OAR1.B8;
    sbit  ADD101_I2C2_OAR1_bit at I2C2_OAR1.B9;
    sbit  ADD70_I2C2_OAR1_bit at I2C2_OAR1.B1;
    sbit  ADD71_I2C2_OAR1_bit at I2C2_OAR1.B2;
    sbit  ADD72_I2C2_OAR1_bit at I2C2_OAR1.B3;
    sbit  ADD73_I2C2_OAR1_bit at I2C2_OAR1.B4;
    sbit  ADD74_I2C2_OAR1_bit at I2C2_OAR1.B5;
    sbit  ADD75_I2C2_OAR1_bit at I2C2_OAR1.B6;
    sbit  ADD76_I2C2_OAR1_bit at I2C2_OAR1.B7;
    sbit  ADD0_I2C2_OAR1_bit at I2C2_OAR1.B0;

sfr unsigned long   volatile I2C2_OAR2            absolute 0x4000580C;
    sbit  ADD20_I2C2_OAR2_bit at I2C2_OAR2.B1;
    sbit  ADD21_I2C2_OAR2_bit at I2C2_OAR2.B2;
    sbit  ADD22_I2C2_OAR2_bit at I2C2_OAR2.B3;
    sbit  ADD23_I2C2_OAR2_bit at I2C2_OAR2.B4;
    sbit  ADD24_I2C2_OAR2_bit at I2C2_OAR2.B5;
    sbit  ADD25_I2C2_OAR2_bit at I2C2_OAR2.B6;
    sbit  ADD26_I2C2_OAR2_bit at I2C2_OAR2.B7;
    sbit  ENDUAL_I2C2_OAR2_bit at I2C2_OAR2.B0;

sfr unsigned long   volatile I2C2_DR              absolute 0x40005810;
    sbit  DR0_I2C2_DR_bit at I2C2_DR.B0;
    sbit  DR1_I2C2_DR_bit at I2C2_DR.B1;
    sbit  DR2_I2C2_DR_bit at I2C2_DR.B2;
    sbit  DR3_I2C2_DR_bit at I2C2_DR.B3;
    sbit  DR4_I2C2_DR_bit at I2C2_DR.B4;
    sbit  DR5_I2C2_DR_bit at I2C2_DR.B5;
    sbit  DR6_I2C2_DR_bit at I2C2_DR.B6;
    sbit  DR7_I2C2_DR_bit at I2C2_DR.B7;

sfr unsigned long   volatile I2C2_SR1             absolute 0x40005814;
    sbit  SMBALERT_I2C2_SR1_bit at I2C2_SR1.B15;
    sbit  TIMEOUT_I2C2_SR1_bit at I2C2_SR1.B14;
    sbit  PECERR_I2C2_SR1_bit at I2C2_SR1.B12;
    sbit  OVR_I2C2_SR1_bit at I2C2_SR1.B11;
    sbit  AF_I2C2_SR1_bit at I2C2_SR1.B10;
    sbit  ARLO_I2C2_SR1_bit at I2C2_SR1.B9;
    sbit  BERR_I2C2_SR1_bit at I2C2_SR1.B8;
    sbit  TxE_I2C2_SR1_bit at I2C2_SR1.B7;
    sbit  RxNE_I2C2_SR1_bit at I2C2_SR1.B6;
    sbit  STOPF_I2C2_SR1_bit at I2C2_SR1.B4;
    sbit  ADD10_I2C2_SR1_bit at I2C2_SR1.B3;
    sbit  BTF_I2C2_SR1_bit at I2C2_SR1.B2;
    sbit  ADDR_I2C2_SR1_bit at I2C2_SR1.B1;
    sbit  SB_I2C2_SR1_bit at I2C2_SR1.B0;

sfr unsigned long   volatile I2C2_SR2             absolute 0x40005818;
    sbit  PEC0_I2C2_SR2_bit at I2C2_SR2.B8;
    sbit  PEC1_I2C2_SR2_bit at I2C2_SR2.B9;
    sbit  PEC2_I2C2_SR2_bit at I2C2_SR2.B10;
    sbit  PEC3_I2C2_SR2_bit at I2C2_SR2.B11;
    sbit  PEC4_I2C2_SR2_bit at I2C2_SR2.B12;
    sbit  PEC5_I2C2_SR2_bit at I2C2_SR2.B13;
    sbit  PEC6_I2C2_SR2_bit at I2C2_SR2.B14;
    sbit  PEC7_I2C2_SR2_bit at I2C2_SR2.B15;
    sbit  DUALF_I2C2_SR2_bit at I2C2_SR2.B7;
    sbit  SMBHOST_I2C2_SR2_bit at I2C2_SR2.B6;
    sbit  SMBDEFAULT_I2C2_SR2_bit at I2C2_SR2.B5;
    sbit  GENCALL_I2C2_SR2_bit at I2C2_SR2.B4;
    sbit  TRA_I2C2_SR2_bit at I2C2_SR2.B2;
    sbit  BUSY_I2C2_SR2_bit at I2C2_SR2.B1;
    sbit  MSL_I2C2_SR2_bit at I2C2_SR2.B0;

sfr unsigned long   volatile I2C2_CCR             absolute 0x4000581C;
    sbit  F_S_I2C2_CCR_bit at I2C2_CCR.B15;
    sbit  DUTY_I2C2_CCR_bit at I2C2_CCR.B14;
    sbit  CCR0_I2C2_CCR_bit at I2C2_CCR.B0;
    sbit  CCR1_I2C2_CCR_bit at I2C2_CCR.B1;
    sbit  CCR2_I2C2_CCR_bit at I2C2_CCR.B2;
    sbit  CCR3_I2C2_CCR_bit at I2C2_CCR.B3;
    sbit  CCR4_I2C2_CCR_bit at I2C2_CCR.B4;
    sbit  CCR5_I2C2_CCR_bit at I2C2_CCR.B5;
    sbit  CCR6_I2C2_CCR_bit at I2C2_CCR.B6;
    sbit  CCR7_I2C2_CCR_bit at I2C2_CCR.B7;
    sbit  CCR8_I2C2_CCR_bit at I2C2_CCR.B8;
    sbit  CCR9_I2C2_CCR_bit at I2C2_CCR.B9;
    sbit  CCR10_I2C2_CCR_bit at I2C2_CCR.B10;
    sbit  CCR11_I2C2_CCR_bit at I2C2_CCR.B11;

sfr unsigned long   volatile I2C2_TRISE           absolute 0x40005820;
    sbit  TRISE0_I2C2_TRISE_bit at I2C2_TRISE.B0;
    sbit  TRISE1_I2C2_TRISE_bit at I2C2_TRISE.B1;
    sbit  TRISE2_I2C2_TRISE_bit at I2C2_TRISE.B2;
    sbit  TRISE3_I2C2_TRISE_bit at I2C2_TRISE.B3;
    sbit  TRISE4_I2C2_TRISE_bit at I2C2_TRISE.B4;
    sbit  TRISE5_I2C2_TRISE_bit at I2C2_TRISE.B5;

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
    const register unsigned short int CPOL = 1;
    sbit  CPOL_bit at SPI1_CR1.B1;
    const register unsigned short int CPHA = 0;
    sbit  CPHA_bit at SPI1_CR1.B0;

sfr unsigned long   volatile SPI1_CR2             absolute 0x40013004;
    const register unsigned short int TXEIE = 7;
    sbit  TXEIE_bit at SPI1_CR2.B7;
    const register unsigned short int RXNEIE = 6;
    sbit  RXNEIE_bit at SPI1_CR2.B6;
    sbit  ERRIE_SPI1_CR2_bit at SPI1_CR2.B5;
    const register unsigned short int SSOE = 2;
    sbit  SSOE_bit at SPI1_CR2.B2;
    const register unsigned short int TXDMAEN = 1;
    sbit  TXDMAEN_bit at SPI1_CR2.B1;
    const register unsigned short int RXDMAEN = 0;
    sbit  RXDMAEN_bit at SPI1_CR2.B0;

sfr unsigned long   volatile SPI1_SR              absolute 0x40013008;
    sbit  BSY_SPI1_SR_bit at SPI1_SR.B7;
    sbit  OVR_SPI1_SR_bit at SPI1_SR.B6;
    const register unsigned short int MODF_ = 5;
    sbit  MODF_bit at SPI1_SR.B5;
    const register unsigned short int CRCERR = 4;
    sbit  CRCERR_bit at SPI1_SR.B4;
    sbit  TXE_SPI1_SR_bit at SPI1_SR.B1;
    sbit  RXNE_SPI1_SR_bit at SPI1_SR.B0;

sfr unsigned long   volatile SPI1_DR              absolute 0x4001300C;
    sbit  DR0_SPI1_DR_bit at SPI1_DR.B0;
    sbit  DR1_SPI1_DR_bit at SPI1_DR.B1;
    sbit  DR2_SPI1_DR_bit at SPI1_DR.B2;
    sbit  DR3_SPI1_DR_bit at SPI1_DR.B3;
    sbit  DR4_SPI1_DR_bit at SPI1_DR.B4;
    sbit  DR5_SPI1_DR_bit at SPI1_DR.B5;
    sbit  DR6_SPI1_DR_bit at SPI1_DR.B6;
    sbit  DR7_SPI1_DR_bit at SPI1_DR.B7;
    const register unsigned short int DR8 = 8;
    sbit  DR8_bit at SPI1_DR.B8;
    const register unsigned short int DR9 = 9;
    sbit  DR9_bit at SPI1_DR.B9;
    const register unsigned short int DR10 = 10;
    sbit  DR10_bit at SPI1_DR.B10;
    const register unsigned short int DR11 = 11;
    sbit  DR11_bit at SPI1_DR.B11;
    const register unsigned short int DR12 = 12;
    sbit  DR12_bit at SPI1_DR.B12;
    const register unsigned short int DR13 = 13;
    sbit  DR13_bit at SPI1_DR.B13;
    const register unsigned short int DR14 = 14;
    sbit  DR14_bit at SPI1_DR.B14;
    const register unsigned short int DR15 = 15;
    sbit  DR15_bit at SPI1_DR.B15;

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
    sbit  TXEIE_SPI2_CR2_bit at SPI2_CR2.B7;
    sbit  RXNEIE_SPI2_CR2_bit at SPI2_CR2.B6;
    sbit  ERRIE_SPI2_CR2_bit at SPI2_CR2.B5;
    sbit  SSOE_SPI2_CR2_bit at SPI2_CR2.B2;
    sbit  TXDMAEN_SPI2_CR2_bit at SPI2_CR2.B1;
    sbit  RXDMAEN_SPI2_CR2_bit at SPI2_CR2.B0;

sfr unsigned long   volatile SPI2_SR              absolute 0x40003808;
    sbit  BSY_SPI2_SR_bit at SPI2_SR.B7;
    sbit  OVR_SPI2_SR_bit at SPI2_SR.B6;
    sbit  MODF_SPI2_SR_bit at SPI2_SR.B5;
    sbit  CRCERR_SPI2_SR_bit at SPI2_SR.B4;
    sbit  TXE_SPI2_SR_bit at SPI2_SR.B1;
    sbit  RXNE_SPI2_SR_bit at SPI2_SR.B0;

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

sfr unsigned long   volatile SPI3_CR1             absolute 0x40003C00;
    sbit  BIDIMODE_SPI3_CR1_bit at SPI3_CR1.B15;
    sbit  BIDIOE_SPI3_CR1_bit at SPI3_CR1.B14;
    sbit  CRCEN_SPI3_CR1_bit at SPI3_CR1.B13;
    sbit  CRCNEXT_SPI3_CR1_bit at SPI3_CR1.B12;
    sbit  DFF_SPI3_CR1_bit at SPI3_CR1.B11;
    sbit  RXONLY_SPI3_CR1_bit at SPI3_CR1.B10;
    sbit  SSM_SPI3_CR1_bit at SPI3_CR1.B9;
    sbit  SSI_SPI3_CR1_bit at SPI3_CR1.B8;
    sbit  LSBFIRST_SPI3_CR1_bit at SPI3_CR1.B7;
    sbit  SPE_SPI3_CR1_bit at SPI3_CR1.B6;
    sbit  BR0_SPI3_CR1_bit at SPI3_CR1.B3;
    sbit  BR1_SPI3_CR1_bit at SPI3_CR1.B4;
    sbit  BR2_SPI3_CR1_bit at SPI3_CR1.B5;
    sbit  MSTR_SPI3_CR1_bit at SPI3_CR1.B2;
    sbit  CPOL_SPI3_CR1_bit at SPI3_CR1.B1;
    sbit  CPHA_SPI3_CR1_bit at SPI3_CR1.B0;

sfr unsigned long   volatile SPI3_CR2             absolute 0x40003C04;
    sbit  TXEIE_SPI3_CR2_bit at SPI3_CR2.B7;
    sbit  RXNEIE_SPI3_CR2_bit at SPI3_CR2.B6;
    sbit  ERRIE_SPI3_CR2_bit at SPI3_CR2.B5;
    sbit  SSOE_SPI3_CR2_bit at SPI3_CR2.B2;
    sbit  TXDMAEN_SPI3_CR2_bit at SPI3_CR2.B1;
    sbit  RXDMAEN_SPI3_CR2_bit at SPI3_CR2.B0;

sfr unsigned long   volatile SPI3_SR              absolute 0x40003C08;
    sbit  BSY_SPI3_SR_bit at SPI3_SR.B7;
    sbit  OVR_SPI3_SR_bit at SPI3_SR.B6;
    sbit  MODF_SPI3_SR_bit at SPI3_SR.B5;
    sbit  CRCERR_SPI3_SR_bit at SPI3_SR.B4;
    sbit  TXE_SPI3_SR_bit at SPI3_SR.B1;
    sbit  RXNE_SPI3_SR_bit at SPI3_SR.B0;

sfr unsigned long   volatile SPI3_DR              absolute 0x40003C0C;
    sbit  DR0_SPI3_DR_bit at SPI3_DR.B0;
    sbit  DR1_SPI3_DR_bit at SPI3_DR.B1;
    sbit  DR2_SPI3_DR_bit at SPI3_DR.B2;
    sbit  DR3_SPI3_DR_bit at SPI3_DR.B3;
    sbit  DR4_SPI3_DR_bit at SPI3_DR.B4;
    sbit  DR5_SPI3_DR_bit at SPI3_DR.B5;
    sbit  DR6_SPI3_DR_bit at SPI3_DR.B6;
    sbit  DR7_SPI3_DR_bit at SPI3_DR.B7;
    sbit  DR8_SPI3_DR_bit at SPI3_DR.B8;
    sbit  DR9_SPI3_DR_bit at SPI3_DR.B9;
    sbit  DR10_SPI3_DR_bit at SPI3_DR.B10;
    sbit  DR11_SPI3_DR_bit at SPI3_DR.B11;
    sbit  DR12_SPI3_DR_bit at SPI3_DR.B12;
    sbit  DR13_SPI3_DR_bit at SPI3_DR.B13;
    sbit  DR14_SPI3_DR_bit at SPI3_DR.B14;
    sbit  DR15_SPI3_DR_bit at SPI3_DR.B15;

sfr unsigned long   volatile SPI3_CRCPR           absolute 0x40003C10;
    sbit  CRCPOLY0_SPI3_CRCPR_bit at SPI3_CRCPR.B0;
    sbit  CRCPOLY1_SPI3_CRCPR_bit at SPI3_CRCPR.B1;
    sbit  CRCPOLY2_SPI3_CRCPR_bit at SPI3_CRCPR.B2;
    sbit  CRCPOLY3_SPI3_CRCPR_bit at SPI3_CRCPR.B3;
    sbit  CRCPOLY4_SPI3_CRCPR_bit at SPI3_CRCPR.B4;
    sbit  CRCPOLY5_SPI3_CRCPR_bit at SPI3_CRCPR.B5;
    sbit  CRCPOLY6_SPI3_CRCPR_bit at SPI3_CRCPR.B6;
    sbit  CRCPOLY7_SPI3_CRCPR_bit at SPI3_CRCPR.B7;
    sbit  CRCPOLY8_SPI3_CRCPR_bit at SPI3_CRCPR.B8;
    sbit  CRCPOLY9_SPI3_CRCPR_bit at SPI3_CRCPR.B9;
    sbit  CRCPOLY10_SPI3_CRCPR_bit at SPI3_CRCPR.B10;
    sbit  CRCPOLY11_SPI3_CRCPR_bit at SPI3_CRCPR.B11;
    sbit  CRCPOLY12_SPI3_CRCPR_bit at SPI3_CRCPR.B12;
    sbit  CRCPOLY13_SPI3_CRCPR_bit at SPI3_CRCPR.B13;
    sbit  CRCPOLY14_SPI3_CRCPR_bit at SPI3_CRCPR.B14;
    sbit  CRCPOLY15_SPI3_CRCPR_bit at SPI3_CRCPR.B15;

sfr unsigned long   volatile SPI3_RXCRCR          absolute 0x40003C14;
    sbit  RxCRC0_SPI3_RXCRCR_bit at SPI3_RXCRCR.B0;
    sbit  RxCRC1_SPI3_RXCRCR_bit at SPI3_RXCRCR.B1;
    sbit  RxCRC2_SPI3_RXCRCR_bit at SPI3_RXCRCR.B2;
    sbit  RxCRC3_SPI3_RXCRCR_bit at SPI3_RXCRCR.B3;
    sbit  RxCRC4_SPI3_RXCRCR_bit at SPI3_RXCRCR.B4;
    sbit  RxCRC5_SPI3_RXCRCR_bit at SPI3_RXCRCR.B5;
    sbit  RxCRC6_SPI3_RXCRCR_bit at SPI3_RXCRCR.B6;
    sbit  RxCRC7_SPI3_RXCRCR_bit at SPI3_RXCRCR.B7;
    sbit  RxCRC8_SPI3_RXCRCR_bit at SPI3_RXCRCR.B8;
    sbit  RxCRC9_SPI3_RXCRCR_bit at SPI3_RXCRCR.B9;
    sbit  RxCRC10_SPI3_RXCRCR_bit at SPI3_RXCRCR.B10;
    sbit  RxCRC11_SPI3_RXCRCR_bit at SPI3_RXCRCR.B11;
    sbit  RxCRC12_SPI3_RXCRCR_bit at SPI3_RXCRCR.B12;
    sbit  RxCRC13_SPI3_RXCRCR_bit at SPI3_RXCRCR.B13;
    sbit  RxCRC14_SPI3_RXCRCR_bit at SPI3_RXCRCR.B14;
    sbit  RxCRC15_SPI3_RXCRCR_bit at SPI3_RXCRCR.B15;

sfr unsigned long   volatile SPI3_TXCRCR          absolute 0x40003C18;
    sbit  TxCRC0_SPI3_TXCRCR_bit at SPI3_TXCRCR.B0;
    sbit  TxCRC1_SPI3_TXCRCR_bit at SPI3_TXCRCR.B1;
    sbit  TxCRC2_SPI3_TXCRCR_bit at SPI3_TXCRCR.B2;
    sbit  TxCRC3_SPI3_TXCRCR_bit at SPI3_TXCRCR.B3;
    sbit  TxCRC4_SPI3_TXCRCR_bit at SPI3_TXCRCR.B4;
    sbit  TxCRC5_SPI3_TXCRCR_bit at SPI3_TXCRCR.B5;
    sbit  TxCRC6_SPI3_TXCRCR_bit at SPI3_TXCRCR.B6;
    sbit  TxCRC7_SPI3_TXCRCR_bit at SPI3_TXCRCR.B7;
    sbit  TxCRC8_SPI3_TXCRCR_bit at SPI3_TXCRCR.B8;
    sbit  TxCRC9_SPI3_TXCRCR_bit at SPI3_TXCRCR.B9;
    sbit  TxCRC10_SPI3_TXCRCR_bit at SPI3_TXCRCR.B10;
    sbit  TxCRC11_SPI3_TXCRCR_bit at SPI3_TXCRCR.B11;
    sbit  TxCRC12_SPI3_TXCRCR_bit at SPI3_TXCRCR.B12;
    sbit  TxCRC13_SPI3_TXCRCR_bit at SPI3_TXCRCR.B13;
    sbit  TxCRC14_SPI3_TXCRCR_bit at SPI3_TXCRCR.B14;
    sbit  TxCRC15_SPI3_TXCRCR_bit at SPI3_TXCRCR.B15;

sfr unsigned long   volatile USART1_SR            absolute 0x40013800;
    const register unsigned short int CTS = 9;
    sbit  CTS_bit at USART1_SR.B9;
    const register unsigned short int LBD = 8;
    sbit  LBD_bit at USART1_SR.B8;
    sbit  TXE_USART1_SR_bit at USART1_SR.B7;
    const register unsigned short int TC = 6;
    sbit  TC_bit at USART1_SR.B6;
    sbit  RXNE_USART1_SR_bit at USART1_SR.B5;
    const register unsigned short int IDLE = 4;
    sbit  IDLE_bit at USART1_SR.B4;
    const register unsigned short int ORE = 3;
    sbit  ORE_bit at USART1_SR.B3;
    const register unsigned short int NE = 2;
    sbit  NE_bit at USART1_SR.B2;
    const register unsigned short int FE = 1;
    sbit  FE_bit at USART1_SR.B1;
    sbit  PE_USART1_SR_bit at USART1_SR.B0;

sfr unsigned long   volatile USART1_DR            absolute 0x40013804;
    sbit  DR0_USART1_DR_bit at USART1_DR.B0;
    sbit  DR1_USART1_DR_bit at USART1_DR.B1;
    sbit  DR2_USART1_DR_bit at USART1_DR.B2;
    sbit  DR3_USART1_DR_bit at USART1_DR.B3;
    sbit  DR4_USART1_DR_bit at USART1_DR.B4;
    sbit  DR5_USART1_DR_bit at USART1_DR.B5;
    sbit  DR6_USART1_DR_bit at USART1_DR.B6;
    sbit  DR7_USART1_DR_bit at USART1_DR.B7;
    sbit  DR8_USART1_DR_bit at USART1_DR.B8;

sfr unsigned long   volatile USART1_BRR           absolute 0x40013808;
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

sfr unsigned long   volatile USART1_CR1           absolute 0x4001380C;
    const register unsigned short int UE = 13;
    sbit  UE_bit at USART1_CR1.B13;
    const register unsigned short int M = 12;
    sbit  M_bit at USART1_CR1.B12;
    const register unsigned short int WAKE = 11;
    sbit  WAKE_bit at USART1_CR1.B11;
    const register unsigned short int PCE = 10;
    sbit  PCE_bit at USART1_CR1.B10;
    const register unsigned short int PS = 9;
    sbit  PS_bit at USART1_CR1.B9;
    const register unsigned short int PEIE = 8;
    sbit  PEIE_bit at USART1_CR1.B8;
    sbit  TXEIE_USART1_CR1_bit at USART1_CR1.B7;
    sbit  TCIE_USART1_CR1_bit at USART1_CR1.B6;
    sbit  RXNEIE_USART1_CR1_bit at USART1_CR1.B5;
    const register unsigned short int IDLEIE = 4;
    sbit  IDLEIE_bit at USART1_CR1.B4;
    const register unsigned short int TE = 3;
    sbit  TE_bit at USART1_CR1.B3;
    const register unsigned short int RE = 2;
    sbit  RE_bit at USART1_CR1.B2;
    const register unsigned short int RWU = 1;
    sbit  RWU_bit at USART1_CR1.B1;
    const register unsigned short int SBK = 0;
    sbit  SBK_bit at USART1_CR1.B0;

sfr unsigned long   volatile USART1_CR2           absolute 0x40013810;
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
    sbit  ADD0_USART1_CR2_bit at USART1_CR2.B0;
    const register unsigned short int ADD1 = 1;
    sbit  ADD1_bit at USART1_CR2.B1;
    const register unsigned short int ADD2 = 2;
    sbit  ADD2_bit at USART1_CR2.B2;
    const register unsigned short int ADD3 = 3;
    sbit  ADD3_bit at USART1_CR2.B3;

sfr unsigned long   volatile USART1_CR3           absolute 0x40013814;
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

sfr unsigned long   volatile USART1_GTPR          absolute 0x40013818;
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

sfr unsigned long   volatile USART2_SR            absolute 0x40004400;
    sbit  CTS_USART2_SR_bit at USART2_SR.B9;
    sbit  LBD_USART2_SR_bit at USART2_SR.B8;
    sbit  TXE_USART2_SR_bit at USART2_SR.B7;
    sbit  TC_USART2_SR_bit at USART2_SR.B6;
    sbit  RXNE_USART2_SR_bit at USART2_SR.B5;
    sbit  IDLE_USART2_SR_bit at USART2_SR.B4;
    sbit  ORE_USART2_SR_bit at USART2_SR.B3;
    sbit  NE_USART2_SR_bit at USART2_SR.B2;
    sbit  FE_USART2_SR_bit at USART2_SR.B1;
    sbit  PE_USART2_SR_bit at USART2_SR.B0;

sfr unsigned long   volatile USART2_DR            absolute 0x40004404;
    sbit  DR0_USART2_DR_bit at USART2_DR.B0;
    sbit  DR1_USART2_DR_bit at USART2_DR.B1;
    sbit  DR2_USART2_DR_bit at USART2_DR.B2;
    sbit  DR3_USART2_DR_bit at USART2_DR.B3;
    sbit  DR4_USART2_DR_bit at USART2_DR.B4;
    sbit  DR5_USART2_DR_bit at USART2_DR.B5;
    sbit  DR6_USART2_DR_bit at USART2_DR.B6;
    sbit  DR7_USART2_DR_bit at USART2_DR.B7;
    sbit  DR8_USART2_DR_bit at USART2_DR.B8;

sfr unsigned long   volatile USART2_BRR           absolute 0x40004408;
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

sfr unsigned long   volatile USART2_CR1           absolute 0x4000440C;
    sbit  UE_USART2_CR1_bit at USART2_CR1.B13;
    sbit  M_USART2_CR1_bit at USART2_CR1.B12;
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
    sbit  RWU_USART2_CR1_bit at USART2_CR1.B1;
    sbit  SBK_USART2_CR1_bit at USART2_CR1.B0;

sfr unsigned long   volatile USART2_CR2           absolute 0x40004410;
    sbit  LINEN_USART2_CR2_bit at USART2_CR2.B14;
    sbit  STOP0_USART2_CR2_bit at USART2_CR2.B12;
    sbit  STOP1_USART2_CR2_bit at USART2_CR2.B13;
    sbit  CLKEN_USART2_CR2_bit at USART2_CR2.B11;
    sbit  CPOL_USART2_CR2_bit at USART2_CR2.B10;
    sbit  CPHA_USART2_CR2_bit at USART2_CR2.B9;
    sbit  LBCL_USART2_CR2_bit at USART2_CR2.B8;
    sbit  LBDIE_USART2_CR2_bit at USART2_CR2.B6;
    sbit  LBDL_USART2_CR2_bit at USART2_CR2.B5;
    sbit  ADD0_USART2_CR2_bit at USART2_CR2.B0;
    sbit  ADD1_USART2_CR2_bit at USART2_CR2.B1;
    sbit  ADD2_USART2_CR2_bit at USART2_CR2.B2;
    sbit  ADD3_USART2_CR2_bit at USART2_CR2.B3;

sfr unsigned long   volatile USART2_CR3           absolute 0x40004414;
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

sfr unsigned long   volatile USART2_GTPR          absolute 0x40004418;
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

sfr unsigned long   volatile USART3_SR            absolute 0x40004800;
    sbit  CTS_USART3_SR_bit at USART3_SR.B9;
    sbit  LBD_USART3_SR_bit at USART3_SR.B8;
    sbit  TXE_USART3_SR_bit at USART3_SR.B7;
    sbit  TC_USART3_SR_bit at USART3_SR.B6;
    sbit  RXNE_USART3_SR_bit at USART3_SR.B5;
    sbit  IDLE_USART3_SR_bit at USART3_SR.B4;
    sbit  ORE_USART3_SR_bit at USART3_SR.B3;
    sbit  NE_USART3_SR_bit at USART3_SR.B2;
    sbit  FE_USART3_SR_bit at USART3_SR.B1;
    sbit  PE_USART3_SR_bit at USART3_SR.B0;

sfr unsigned long   volatile USART3_DR            absolute 0x40004804;
    sbit  DR0_USART3_DR_bit at USART3_DR.B0;
    sbit  DR1_USART3_DR_bit at USART3_DR.B1;
    sbit  DR2_USART3_DR_bit at USART3_DR.B2;
    sbit  DR3_USART3_DR_bit at USART3_DR.B3;
    sbit  DR4_USART3_DR_bit at USART3_DR.B4;
    sbit  DR5_USART3_DR_bit at USART3_DR.B5;
    sbit  DR6_USART3_DR_bit at USART3_DR.B6;
    sbit  DR7_USART3_DR_bit at USART3_DR.B7;
    sbit  DR8_USART3_DR_bit at USART3_DR.B8;

sfr unsigned long   volatile USART3_BRR           absolute 0x40004808;
    sbit  DIV_Mantissa0_USART3_BRR_bit at USART3_BRR.B4;
    sbit  DIV_Mantissa1_USART3_BRR_bit at USART3_BRR.B5;
    sbit  DIV_Mantissa2_USART3_BRR_bit at USART3_BRR.B6;
    sbit  DIV_Mantissa3_USART3_BRR_bit at USART3_BRR.B7;
    sbit  DIV_Mantissa4_USART3_BRR_bit at USART3_BRR.B8;
    sbit  DIV_Mantissa5_USART3_BRR_bit at USART3_BRR.B9;
    sbit  DIV_Mantissa6_USART3_BRR_bit at USART3_BRR.B10;
    sbit  DIV_Mantissa7_USART3_BRR_bit at USART3_BRR.B11;
    sbit  DIV_Mantissa8_USART3_BRR_bit at USART3_BRR.B12;
    sbit  DIV_Mantissa9_USART3_BRR_bit at USART3_BRR.B13;
    sbit  DIV_Mantissa10_USART3_BRR_bit at USART3_BRR.B14;
    sbit  DIV_Mantissa11_USART3_BRR_bit at USART3_BRR.B15;
    sbit  DIV_Fraction0_USART3_BRR_bit at USART3_BRR.B0;
    sbit  DIV_Fraction1_USART3_BRR_bit at USART3_BRR.B1;
    sbit  DIV_Fraction2_USART3_BRR_bit at USART3_BRR.B2;
    sbit  DIV_Fraction3_USART3_BRR_bit at USART3_BRR.B3;

sfr unsigned long   volatile USART3_CR1           absolute 0x4000480C;
    sbit  UE_USART3_CR1_bit at USART3_CR1.B13;
    sbit  M_USART3_CR1_bit at USART3_CR1.B12;
    sbit  WAKE_USART3_CR1_bit at USART3_CR1.B11;
    sbit  PCE_USART3_CR1_bit at USART3_CR1.B10;
    sbit  PS_USART3_CR1_bit at USART3_CR1.B9;
    sbit  PEIE_USART3_CR1_bit at USART3_CR1.B8;
    sbit  TXEIE_USART3_CR1_bit at USART3_CR1.B7;
    sbit  TCIE_USART3_CR1_bit at USART3_CR1.B6;
    sbit  RXNEIE_USART3_CR1_bit at USART3_CR1.B5;
    sbit  IDLEIE_USART3_CR1_bit at USART3_CR1.B4;
    sbit  TE_USART3_CR1_bit at USART3_CR1.B3;
    sbit  RE_USART3_CR1_bit at USART3_CR1.B2;
    sbit  RWU_USART3_CR1_bit at USART3_CR1.B1;
    sbit  SBK_USART3_CR1_bit at USART3_CR1.B0;

sfr unsigned long   volatile USART3_CR2           absolute 0x40004810;
    sbit  LINEN_USART3_CR2_bit at USART3_CR2.B14;
    sbit  STOP0_USART3_CR2_bit at USART3_CR2.B12;
    sbit  STOP1_USART3_CR2_bit at USART3_CR2.B13;
    sbit  CLKEN_USART3_CR2_bit at USART3_CR2.B11;
    sbit  CPOL_USART3_CR2_bit at USART3_CR2.B10;
    sbit  CPHA_USART3_CR2_bit at USART3_CR2.B9;
    sbit  LBCL_USART3_CR2_bit at USART3_CR2.B8;
    sbit  LBDIE_USART3_CR2_bit at USART3_CR2.B6;
    sbit  LBDL_USART3_CR2_bit at USART3_CR2.B5;
    sbit  ADD0_USART3_CR2_bit at USART3_CR2.B0;
    sbit  ADD1_USART3_CR2_bit at USART3_CR2.B1;
    sbit  ADD2_USART3_CR2_bit at USART3_CR2.B2;
    sbit  ADD3_USART3_CR2_bit at USART3_CR2.B3;

sfr unsigned long   volatile USART3_CR3           absolute 0x40004814;
    sbit  CTSIE_USART3_CR3_bit at USART3_CR3.B10;
    sbit  CTSE_USART3_CR3_bit at USART3_CR3.B9;
    sbit  RTSE_USART3_CR3_bit at USART3_CR3.B8;
    sbit  DMAT_USART3_CR3_bit at USART3_CR3.B7;
    sbit  DMAR_USART3_CR3_bit at USART3_CR3.B6;
    sbit  SCEN_USART3_CR3_bit at USART3_CR3.B5;
    sbit  NACK_USART3_CR3_bit at USART3_CR3.B4;
    sbit  HDSEL_USART3_CR3_bit at USART3_CR3.B3;
    sbit  IRLP_USART3_CR3_bit at USART3_CR3.B2;
    sbit  IREN_USART3_CR3_bit at USART3_CR3.B1;
    sbit  EIE_USART3_CR3_bit at USART3_CR3.B0;

sfr unsigned long   volatile USART3_GTPR          absolute 0x40004818;
    sbit  GT0_USART3_GTPR_bit at USART3_GTPR.B8;
    sbit  GT1_USART3_GTPR_bit at USART3_GTPR.B9;
    sbit  GT2_USART3_GTPR_bit at USART3_GTPR.B10;
    sbit  GT3_USART3_GTPR_bit at USART3_GTPR.B11;
    sbit  GT4_USART3_GTPR_bit at USART3_GTPR.B12;
    sbit  GT5_USART3_GTPR_bit at USART3_GTPR.B13;
    sbit  GT6_USART3_GTPR_bit at USART3_GTPR.B14;
    sbit  GT7_USART3_GTPR_bit at USART3_GTPR.B15;
    sbit  PSC0_USART3_GTPR_bit at USART3_GTPR.B0;
    sbit  PSC1_USART3_GTPR_bit at USART3_GTPR.B1;
    sbit  PSC2_USART3_GTPR_bit at USART3_GTPR.B2;
    sbit  PSC3_USART3_GTPR_bit at USART3_GTPR.B3;
    sbit  PSC4_USART3_GTPR_bit at USART3_GTPR.B4;
    sbit  PSC5_USART3_GTPR_bit at USART3_GTPR.B5;
    sbit  PSC6_USART3_GTPR_bit at USART3_GTPR.B6;
    sbit  PSC7_USART3_GTPR_bit at USART3_GTPR.B7;

sfr unsigned long   volatile ADC1_SR              absolute 0x40012400;
    sbit  STRT_ADC1_SR_bit at ADC1_SR.B4;
    const register unsigned short int JSTRT = 3;
    sbit  JSTRT_bit at ADC1_SR.B3;
    const register unsigned short int JEOC = 2;
    sbit  JEOC_bit at ADC1_SR.B2;
    const register unsigned short int EOC = 1;
    sbit  EOC_bit at ADC1_SR.B1;
    const register unsigned short int AWD = 0;
    sbit  AWD_bit at ADC1_SR.B0;

sfr unsigned long   volatile ADC1_CR1             absolute 0x40012404;
    const register unsigned short int AWDEN = 23;
    sbit  AWDEN_bit at ADC1_CR1.B23;
    const register unsigned short int JAWDEN = 22;
    sbit  JAWDEN_bit at ADC1_CR1.B22;
    const register unsigned short int DISCNUM0 = 13;
    sbit  DISCNUM0_bit at ADC1_CR1.B13;
    const register unsigned short int DISCNUM1 = 14;
    sbit  DISCNUM1_bit at ADC1_CR1.B14;
    const register unsigned short int DISCNUM2 = 15;
    sbit  DISCNUM2_bit at ADC1_CR1.B15;
    const register unsigned short int JDISCEN = 12;
    sbit  JDISCEN_bit at ADC1_CR1.B12;
    const register unsigned short int DISCEN = 11;
    sbit  DISCEN_bit at ADC1_CR1.B11;
    const register unsigned short int JAUTO = 10;
    sbit  JAUTO_bit at ADC1_CR1.B10;
    const register unsigned short int AWDSGL = 9;
    sbit  AWDSGL_bit at ADC1_CR1.B9;
    const register unsigned short int SCAN = 8;
    sbit  SCAN_bit at ADC1_CR1.B8;
    const register unsigned short int JEOCIE = 7;
    sbit  JEOCIE_bit at ADC1_CR1.B7;
    const register unsigned short int AWDIE = 6;
    sbit  AWDIE_bit at ADC1_CR1.B6;
    const register unsigned short int EOCIE = 5;
    sbit  EOCIE_bit at ADC1_CR1.B5;
    const register unsigned short int AWDCH0 = 0;
    sbit  AWDCH0_bit at ADC1_CR1.B0;
    const register unsigned short int AWDCH1 = 1;
    sbit  AWDCH1_bit at ADC1_CR1.B1;
    const register unsigned short int AWDCH2 = 2;
    sbit  AWDCH2_bit at ADC1_CR1.B2;
    const register unsigned short int AWDCH3 = 3;
    sbit  AWDCH3_bit at ADC1_CR1.B3;
    const register unsigned short int AWDCH4 = 4;
    sbit  AWDCH4_bit at ADC1_CR1.B4;

sfr unsigned long   volatile ADC1_CR2             absolute 0x40012408;
    const register unsigned short int TSVREFE = 23;
    sbit  TSVREFE_bit at ADC1_CR2.B23;
    const register unsigned short int SWSTART = 22;
    sbit  SWSTART_bit at ADC1_CR2.B22;
    const register unsigned short int JSWSTART = 21;
    sbit  JSWSTART_bit at ADC1_CR2.B21;
    const register unsigned short int EXTTRIG = 20;
    sbit  EXTTRIG_bit at ADC1_CR2.B20;
    const register unsigned short int EXTSEL0 = 17;
    sbit  EXTSEL0_bit at ADC1_CR2.B17;
    const register unsigned short int EXTSEL1 = 18;
    sbit  EXTSEL1_bit at ADC1_CR2.B18;
    const register unsigned short int EXTSEL2 = 19;
    sbit  EXTSEL2_bit at ADC1_CR2.B19;
    const register unsigned short int JEXTTRIG = 15;
    sbit  JEXTTRIG_bit at ADC1_CR2.B15;
    const register unsigned short int JEXTSEL0 = 12;
    sbit  JEXTSEL0_bit at ADC1_CR2.B12;
    const register unsigned short int JEXTSEL1 = 13;
    sbit  JEXTSEL1_bit at ADC1_CR2.B13;
    const register unsigned short int JEXTSEL2 = 14;
    sbit  JEXTSEL2_bit at ADC1_CR2.B14;
    const register unsigned short int ALIGN = 11;
    sbit  ALIGN_bit at ADC1_CR2.B11;
    const register unsigned short int DMA_ = 8;
    sbit  DMA_bit at ADC1_CR2.B8;
    const register unsigned short int RSTCAL = 3;
    sbit  RSTCAL_bit at ADC1_CR2.B3;
    const register unsigned short int CAL = 2;
    sbit  CAL_bit at ADC1_CR2.B2;
    const register unsigned short int CONT = 1;
    sbit  CONT_bit at ADC1_CR2.B1;
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADC1_CR2.B0;

sfr unsigned long   volatile ADC1_SMPR1           absolute 0x4001240C;
    const register unsigned short int SMP100 = 0;
    sbit  SMP100_bit at ADC1_SMPR1.B0;
    const register unsigned short int SMP101 = 1;
    sbit  SMP101_bit at ADC1_SMPR1.B1;
    const register unsigned short int SMP102 = 2;
    sbit  SMP102_bit at ADC1_SMPR1.B2;
    const register unsigned short int SMP110 = 3;
    sbit  SMP110_bit at ADC1_SMPR1.B3;
    const register unsigned short int SMP111 = 4;
    sbit  SMP111_bit at ADC1_SMPR1.B4;
    const register unsigned short int SMP112 = 5;
    sbit  SMP112_bit at ADC1_SMPR1.B5;
    const register unsigned short int SMP120 = 6;
    sbit  SMP120_bit at ADC1_SMPR1.B6;
    const register unsigned short int SMP121 = 7;
    sbit  SMP121_bit at ADC1_SMPR1.B7;
    const register unsigned short int SMP122 = 8;
    sbit  SMP122_bit at ADC1_SMPR1.B8;
    const register unsigned short int SMP130 = 9;
    sbit  SMP130_bit at ADC1_SMPR1.B9;
    const register unsigned short int SMP131 = 10;
    sbit  SMP131_bit at ADC1_SMPR1.B10;
    const register unsigned short int SMP132 = 11;
    sbit  SMP132_bit at ADC1_SMPR1.B11;
    const register unsigned short int SMP140 = 12;
    sbit  SMP140_bit at ADC1_SMPR1.B12;
    const register unsigned short int SMP141 = 13;
    sbit  SMP141_bit at ADC1_SMPR1.B13;
    const register unsigned short int SMP142 = 14;
    sbit  SMP142_bit at ADC1_SMPR1.B14;
    const register unsigned short int SMP150 = 15;
    sbit  SMP150_bit at ADC1_SMPR1.B15;
    const register unsigned short int SMP151 = 16;
    sbit  SMP151_bit at ADC1_SMPR1.B16;
    const register unsigned short int SMP152 = 17;
    sbit  SMP152_bit at ADC1_SMPR1.B17;
    const register unsigned short int SMP160 = 18;
    sbit  SMP160_bit at ADC1_SMPR1.B18;
    const register unsigned short int SMP161 = 19;
    sbit  SMP161_bit at ADC1_SMPR1.B19;
    const register unsigned short int SMP162 = 20;
    sbit  SMP162_bit at ADC1_SMPR1.B20;
    const register unsigned short int SMP170 = 21;
    sbit  SMP170_bit at ADC1_SMPR1.B21;
    const register unsigned short int SMP171 = 22;
    sbit  SMP171_bit at ADC1_SMPR1.B22;
    const register unsigned short int SMP172 = 23;
    sbit  SMP172_bit at ADC1_SMPR1.B23;

sfr unsigned long   volatile ADC1_SMPR2           absolute 0x40012410;
    const register unsigned short int SMP00 = 0;
    sbit  SMP00_bit at ADC1_SMPR2.B0;
    const register unsigned short int SMP01 = 1;
    sbit  SMP01_bit at ADC1_SMPR2.B1;
    const register unsigned short int SMP02 = 2;
    sbit  SMP02_bit at ADC1_SMPR2.B2;
    const register unsigned short int SMP10 = 3;
    sbit  SMP10_bit at ADC1_SMPR2.B3;
    const register unsigned short int SMP11 = 4;
    sbit  SMP11_bit at ADC1_SMPR2.B4;
    const register unsigned short int SMP12 = 5;
    sbit  SMP12_bit at ADC1_SMPR2.B5;
    const register unsigned short int SMP20 = 6;
    sbit  SMP20_bit at ADC1_SMPR2.B6;
    const register unsigned short int SMP21 = 7;
    sbit  SMP21_bit at ADC1_SMPR2.B7;
    const register unsigned short int SMP22 = 8;
    sbit  SMP22_bit at ADC1_SMPR2.B8;
    const register unsigned short int SMP30 = 9;
    sbit  SMP30_bit at ADC1_SMPR2.B9;
    const register unsigned short int SMP31 = 10;
    sbit  SMP31_bit at ADC1_SMPR2.B10;
    const register unsigned short int SMP32 = 11;
    sbit  SMP32_bit at ADC1_SMPR2.B11;
    const register unsigned short int SMP40 = 12;
    sbit  SMP40_bit at ADC1_SMPR2.B12;
    const register unsigned short int SMP41 = 13;
    sbit  SMP41_bit at ADC1_SMPR2.B13;
    const register unsigned short int SMP42 = 14;
    sbit  SMP42_bit at ADC1_SMPR2.B14;
    const register unsigned short int SMP50 = 15;
    sbit  SMP50_bit at ADC1_SMPR2.B15;
    const register unsigned short int SMP51 = 16;
    sbit  SMP51_bit at ADC1_SMPR2.B16;
    const register unsigned short int SMP52 = 17;
    sbit  SMP52_bit at ADC1_SMPR2.B17;
    const register unsigned short int SMP60 = 18;
    sbit  SMP60_bit at ADC1_SMPR2.B18;
    const register unsigned short int SMP61 = 19;
    sbit  SMP61_bit at ADC1_SMPR2.B19;
    const register unsigned short int SMP62 = 20;
    sbit  SMP62_bit at ADC1_SMPR2.B20;
    const register unsigned short int SMP70 = 21;
    sbit  SMP70_bit at ADC1_SMPR2.B21;
    const register unsigned short int SMP71 = 22;
    sbit  SMP71_bit at ADC1_SMPR2.B22;
    const register unsigned short int SMP72 = 23;
    sbit  SMP72_bit at ADC1_SMPR2.B23;
    const register unsigned short int SMP80 = 24;
    sbit  SMP80_bit at ADC1_SMPR2.B24;
    const register unsigned short int SMP81 = 25;
    sbit  SMP81_bit at ADC1_SMPR2.B25;
    const register unsigned short int SMP82 = 26;
    sbit  SMP82_bit at ADC1_SMPR2.B26;
    const register unsigned short int SMP90 = 27;
    sbit  SMP90_bit at ADC1_SMPR2.B27;
    const register unsigned short int SMP91 = 28;
    sbit  SMP91_bit at ADC1_SMPR2.B28;
    const register unsigned short int SMP92 = 29;
    sbit  SMP92_bit at ADC1_SMPR2.B29;

sfr unsigned long   volatile ADC1_JOFR1           absolute 0x40012414;
    const register unsigned short int JOFFSET10 = 0;
    sbit  JOFFSET10_bit at ADC1_JOFR1.B0;
    const register unsigned short int JOFFSET11 = 1;
    sbit  JOFFSET11_bit at ADC1_JOFR1.B1;
    const register unsigned short int JOFFSET12 = 2;
    sbit  JOFFSET12_bit at ADC1_JOFR1.B2;
    const register unsigned short int JOFFSET13 = 3;
    sbit  JOFFSET13_bit at ADC1_JOFR1.B3;
    const register unsigned short int JOFFSET14 = 4;
    sbit  JOFFSET14_bit at ADC1_JOFR1.B4;
    const register unsigned short int JOFFSET15 = 5;
    sbit  JOFFSET15_bit at ADC1_JOFR1.B5;
    const register unsigned short int JOFFSET16 = 6;
    sbit  JOFFSET16_bit at ADC1_JOFR1.B6;
    const register unsigned short int JOFFSET17 = 7;
    sbit  JOFFSET17_bit at ADC1_JOFR1.B7;
    const register unsigned short int JOFFSET18 = 8;
    sbit  JOFFSET18_bit at ADC1_JOFR1.B8;
    const register unsigned short int JOFFSET19 = 9;
    sbit  JOFFSET19_bit at ADC1_JOFR1.B9;
    const register unsigned short int JOFFSET110 = 10;
    sbit  JOFFSET110_bit at ADC1_JOFR1.B10;
    const register unsigned short int JOFFSET111 = 11;
    sbit  JOFFSET111_bit at ADC1_JOFR1.B11;

sfr unsigned long   volatile ADC1_JOFR2           absolute 0x40012418;
    const register unsigned short int JOFFSET20 = 0;
    sbit  JOFFSET20_bit at ADC1_JOFR2.B0;
    const register unsigned short int JOFFSET21 = 1;
    sbit  JOFFSET21_bit at ADC1_JOFR2.B1;
    const register unsigned short int JOFFSET22 = 2;
    sbit  JOFFSET22_bit at ADC1_JOFR2.B2;
    const register unsigned short int JOFFSET23 = 3;
    sbit  JOFFSET23_bit at ADC1_JOFR2.B3;
    const register unsigned short int JOFFSET24 = 4;
    sbit  JOFFSET24_bit at ADC1_JOFR2.B4;
    const register unsigned short int JOFFSET25 = 5;
    sbit  JOFFSET25_bit at ADC1_JOFR2.B5;
    const register unsigned short int JOFFSET26 = 6;
    sbit  JOFFSET26_bit at ADC1_JOFR2.B6;
    const register unsigned short int JOFFSET27 = 7;
    sbit  JOFFSET27_bit at ADC1_JOFR2.B7;
    const register unsigned short int JOFFSET28 = 8;
    sbit  JOFFSET28_bit at ADC1_JOFR2.B8;
    const register unsigned short int JOFFSET29 = 9;
    sbit  JOFFSET29_bit at ADC1_JOFR2.B9;
    const register unsigned short int JOFFSET210 = 10;
    sbit  JOFFSET210_bit at ADC1_JOFR2.B10;
    const register unsigned short int JOFFSET211 = 11;
    sbit  JOFFSET211_bit at ADC1_JOFR2.B11;

sfr unsigned long   volatile ADC1_JOFR3           absolute 0x4001241C;
    const register unsigned short int JOFFSET30 = 0;
    sbit  JOFFSET30_bit at ADC1_JOFR3.B0;
    const register unsigned short int JOFFSET31 = 1;
    sbit  JOFFSET31_bit at ADC1_JOFR3.B1;
    const register unsigned short int JOFFSET32 = 2;
    sbit  JOFFSET32_bit at ADC1_JOFR3.B2;
    const register unsigned short int JOFFSET33 = 3;
    sbit  JOFFSET33_bit at ADC1_JOFR3.B3;
    const register unsigned short int JOFFSET34 = 4;
    sbit  JOFFSET34_bit at ADC1_JOFR3.B4;
    const register unsigned short int JOFFSET35 = 5;
    sbit  JOFFSET35_bit at ADC1_JOFR3.B5;
    const register unsigned short int JOFFSET36 = 6;
    sbit  JOFFSET36_bit at ADC1_JOFR3.B6;
    const register unsigned short int JOFFSET37 = 7;
    sbit  JOFFSET37_bit at ADC1_JOFR3.B7;
    const register unsigned short int JOFFSET38 = 8;
    sbit  JOFFSET38_bit at ADC1_JOFR3.B8;
    const register unsigned short int JOFFSET39 = 9;
    sbit  JOFFSET39_bit at ADC1_JOFR3.B9;
    const register unsigned short int JOFFSET310 = 10;
    sbit  JOFFSET310_bit at ADC1_JOFR3.B10;
    const register unsigned short int JOFFSET311 = 11;
    sbit  JOFFSET311_bit at ADC1_JOFR3.B11;

sfr unsigned long   volatile ADC1_JOFR4           absolute 0x40012420;
    const register unsigned short int JOFFSET40 = 0;
    sbit  JOFFSET40_bit at ADC1_JOFR4.B0;
    const register unsigned short int JOFFSET41 = 1;
    sbit  JOFFSET41_bit at ADC1_JOFR4.B1;
    const register unsigned short int JOFFSET42 = 2;
    sbit  JOFFSET42_bit at ADC1_JOFR4.B2;
    const register unsigned short int JOFFSET43 = 3;
    sbit  JOFFSET43_bit at ADC1_JOFR4.B3;
    const register unsigned short int JOFFSET44 = 4;
    sbit  JOFFSET44_bit at ADC1_JOFR4.B4;
    const register unsigned short int JOFFSET45 = 5;
    sbit  JOFFSET45_bit at ADC1_JOFR4.B5;
    const register unsigned short int JOFFSET46 = 6;
    sbit  JOFFSET46_bit at ADC1_JOFR4.B6;
    const register unsigned short int JOFFSET47 = 7;
    sbit  JOFFSET47_bit at ADC1_JOFR4.B7;
    const register unsigned short int JOFFSET48 = 8;
    sbit  JOFFSET48_bit at ADC1_JOFR4.B8;
    const register unsigned short int JOFFSET49 = 9;
    sbit  JOFFSET49_bit at ADC1_JOFR4.B9;
    const register unsigned short int JOFFSET410 = 10;
    sbit  JOFFSET410_bit at ADC1_JOFR4.B10;
    const register unsigned short int JOFFSET411 = 11;
    sbit  JOFFSET411_bit at ADC1_JOFR4.B11;

sfr unsigned long   volatile ADC1_HTR             absolute 0x40012424;
    const register unsigned short int HT0 = 0;
    sbit  HT0_bit at ADC1_HTR.B0;
    const register unsigned short int HT1 = 1;
    sbit  HT1_bit at ADC1_HTR.B1;
    const register unsigned short int HT2 = 2;
    sbit  HT2_bit at ADC1_HTR.B2;
    const register unsigned short int HT3 = 3;
    sbit  HT3_bit at ADC1_HTR.B3;
    const register unsigned short int HT4 = 4;
    sbit  HT4_bit at ADC1_HTR.B4;
    const register unsigned short int HT5 = 5;
    sbit  HT5_bit at ADC1_HTR.B5;
    const register unsigned short int HT6 = 6;
    sbit  HT6_bit at ADC1_HTR.B6;
    const register unsigned short int HT7 = 7;
    sbit  HT7_bit at ADC1_HTR.B7;
    const register unsigned short int HT8 = 8;
    sbit  HT8_bit at ADC1_HTR.B8;
    const register unsigned short int HT9 = 9;
    sbit  HT9_bit at ADC1_HTR.B9;
    const register unsigned short int HT10 = 10;
    sbit  HT10_bit at ADC1_HTR.B10;
    const register unsigned short int HT11 = 11;
    sbit  HT11_bit at ADC1_HTR.B11;

sfr unsigned long   volatile ADC1_LTR             absolute 0x40012428;
    const register unsigned short int LT0 = 0;
    sbit  LT0_bit at ADC1_LTR.B0;
    const register unsigned short int LT1 = 1;
    sbit  LT1_bit at ADC1_LTR.B1;
    const register unsigned short int LT2 = 2;
    sbit  LT2_bit at ADC1_LTR.B2;
    const register unsigned short int LT3 = 3;
    sbit  LT3_bit at ADC1_LTR.B3;
    const register unsigned short int LT4 = 4;
    sbit  LT4_bit at ADC1_LTR.B4;
    const register unsigned short int LT5 = 5;
    sbit  LT5_bit at ADC1_LTR.B5;
    const register unsigned short int LT6 = 6;
    sbit  LT6_bit at ADC1_LTR.B6;
    const register unsigned short int LT7 = 7;
    sbit  LT7_bit at ADC1_LTR.B7;
    const register unsigned short int LT8 = 8;
    sbit  LT8_bit at ADC1_LTR.B8;
    const register unsigned short int LT9 = 9;
    sbit  LT9_bit at ADC1_LTR.B9;
    const register unsigned short int LT10 = 10;
    sbit  LT10_bit at ADC1_LTR.B10;
    const register unsigned short int LT11 = 11;
    sbit  LT11_bit at ADC1_LTR.B11;

sfr unsigned long   volatile ADC1_SQR1            absolute 0x4001242C;
    const register unsigned short int L0 = 20;
    sbit  L0_bit at ADC1_SQR1.B20;
    const register unsigned short int L1 = 21;
    sbit  L1_bit at ADC1_SQR1.B21;
    const register unsigned short int L2 = 22;
    sbit  L2_bit at ADC1_SQR1.B22;
    const register unsigned short int L3 = 23;
    sbit  L3_bit at ADC1_SQR1.B23;
    const register unsigned short int SQ160 = 15;
    sbit  SQ160_bit at ADC1_SQR1.B15;
    const register unsigned short int SQ161 = 16;
    sbit  SQ161_bit at ADC1_SQR1.B16;
    const register unsigned short int SQ162 = 17;
    sbit  SQ162_bit at ADC1_SQR1.B17;
    const register unsigned short int SQ163 = 18;
    sbit  SQ163_bit at ADC1_SQR1.B18;
    const register unsigned short int SQ164 = 19;
    sbit  SQ164_bit at ADC1_SQR1.B19;
    const register unsigned short int SQ150 = 10;
    sbit  SQ150_bit at ADC1_SQR1.B10;
    const register unsigned short int SQ151 = 11;
    sbit  SQ151_bit at ADC1_SQR1.B11;
    const register unsigned short int SQ152 = 12;
    sbit  SQ152_bit at ADC1_SQR1.B12;
    const register unsigned short int SQ153 = 13;
    sbit  SQ153_bit at ADC1_SQR1.B13;
    const register unsigned short int SQ154 = 14;
    sbit  SQ154_bit at ADC1_SQR1.B14;
    const register unsigned short int SQ140 = 5;
    sbit  SQ140_bit at ADC1_SQR1.B5;
    const register unsigned short int SQ141 = 6;
    sbit  SQ141_bit at ADC1_SQR1.B6;
    const register unsigned short int SQ142 = 7;
    sbit  SQ142_bit at ADC1_SQR1.B7;
    const register unsigned short int SQ143 = 8;
    sbit  SQ143_bit at ADC1_SQR1.B8;
    const register unsigned short int SQ144 = 9;
    sbit  SQ144_bit at ADC1_SQR1.B9;
    const register unsigned short int SQ130 = 0;
    sbit  SQ130_bit at ADC1_SQR1.B0;
    const register unsigned short int SQ131 = 1;
    sbit  SQ131_bit at ADC1_SQR1.B1;
    const register unsigned short int SQ132 = 2;
    sbit  SQ132_bit at ADC1_SQR1.B2;
    const register unsigned short int SQ133 = 3;
    sbit  SQ133_bit at ADC1_SQR1.B3;
    const register unsigned short int SQ134 = 4;
    sbit  SQ134_bit at ADC1_SQR1.B4;

sfr unsigned long   volatile ADC1_SQR2            absolute 0x40012430;
    const register unsigned short int SQ120 = 25;
    sbit  SQ120_bit at ADC1_SQR2.B25;
    const register unsigned short int SQ121 = 26;
    sbit  SQ121_bit at ADC1_SQR2.B26;
    const register unsigned short int SQ122 = 27;
    sbit  SQ122_bit at ADC1_SQR2.B27;
    const register unsigned short int SQ123 = 28;
    sbit  SQ123_bit at ADC1_SQR2.B28;
    const register unsigned short int SQ124 = 29;
    sbit  SQ124_bit at ADC1_SQR2.B29;
    const register unsigned short int SQ110 = 20;
    sbit  SQ110_bit at ADC1_SQR2.B20;
    const register unsigned short int SQ111 = 21;
    sbit  SQ111_bit at ADC1_SQR2.B21;
    const register unsigned short int SQ112 = 22;
    sbit  SQ112_bit at ADC1_SQR2.B22;
    const register unsigned short int SQ113 = 23;
    sbit  SQ113_bit at ADC1_SQR2.B23;
    const register unsigned short int SQ114 = 24;
    sbit  SQ114_bit at ADC1_SQR2.B24;
    const register unsigned short int SQ100 = 15;
    sbit  SQ100_bit at ADC1_SQR2.B15;
    const register unsigned short int SQ101 = 16;
    sbit  SQ101_bit at ADC1_SQR2.B16;
    const register unsigned short int SQ102 = 17;
    sbit  SQ102_bit at ADC1_SQR2.B17;
    const register unsigned short int SQ103 = 18;
    sbit  SQ103_bit at ADC1_SQR2.B18;
    const register unsigned short int SQ104 = 19;
    sbit  SQ104_bit at ADC1_SQR2.B19;
    const register unsigned short int SQ90 = 10;
    sbit  SQ90_bit at ADC1_SQR2.B10;
    const register unsigned short int SQ91 = 11;
    sbit  SQ91_bit at ADC1_SQR2.B11;
    const register unsigned short int SQ92 = 12;
    sbit  SQ92_bit at ADC1_SQR2.B12;
    const register unsigned short int SQ93 = 13;
    sbit  SQ93_bit at ADC1_SQR2.B13;
    const register unsigned short int SQ94 = 14;
    sbit  SQ94_bit at ADC1_SQR2.B14;
    const register unsigned short int SQ80 = 5;
    sbit  SQ80_bit at ADC1_SQR2.B5;
    const register unsigned short int SQ81 = 6;
    sbit  SQ81_bit at ADC1_SQR2.B6;
    const register unsigned short int SQ82 = 7;
    sbit  SQ82_bit at ADC1_SQR2.B7;
    const register unsigned short int SQ83 = 8;
    sbit  SQ83_bit at ADC1_SQR2.B8;
    const register unsigned short int SQ84 = 9;
    sbit  SQ84_bit at ADC1_SQR2.B9;
    const register unsigned short int SQ70 = 0;
    sbit  SQ70_bit at ADC1_SQR2.B0;
    const register unsigned short int SQ71 = 1;
    sbit  SQ71_bit at ADC1_SQR2.B1;
    const register unsigned short int SQ72 = 2;
    sbit  SQ72_bit at ADC1_SQR2.B2;
    const register unsigned short int SQ73 = 3;
    sbit  SQ73_bit at ADC1_SQR2.B3;
    const register unsigned short int SQ74 = 4;
    sbit  SQ74_bit at ADC1_SQR2.B4;

sfr unsigned long   volatile ADC1_SQR3            absolute 0x40012434;
    const register unsigned short int SQ60 = 25;
    sbit  SQ60_bit at ADC1_SQR3.B25;
    const register unsigned short int SQ61 = 26;
    sbit  SQ61_bit at ADC1_SQR3.B26;
    const register unsigned short int SQ62 = 27;
    sbit  SQ62_bit at ADC1_SQR3.B27;
    const register unsigned short int SQ63 = 28;
    sbit  SQ63_bit at ADC1_SQR3.B28;
    const register unsigned short int SQ64 = 29;
    sbit  SQ64_bit at ADC1_SQR3.B29;
    const register unsigned short int SQ50 = 20;
    sbit  SQ50_bit at ADC1_SQR3.B20;
    const register unsigned short int SQ51 = 21;
    sbit  SQ51_bit at ADC1_SQR3.B21;
    const register unsigned short int SQ52 = 22;
    sbit  SQ52_bit at ADC1_SQR3.B22;
    const register unsigned short int SQ53 = 23;
    sbit  SQ53_bit at ADC1_SQR3.B23;
    const register unsigned short int SQ54 = 24;
    sbit  SQ54_bit at ADC1_SQR3.B24;
    const register unsigned short int SQ40 = 15;
    sbit  SQ40_bit at ADC1_SQR3.B15;
    const register unsigned short int SQ41 = 16;
    sbit  SQ41_bit at ADC1_SQR3.B16;
    const register unsigned short int SQ42 = 17;
    sbit  SQ42_bit at ADC1_SQR3.B17;
    const register unsigned short int SQ43 = 18;
    sbit  SQ43_bit at ADC1_SQR3.B18;
    const register unsigned short int SQ44 = 19;
    sbit  SQ44_bit at ADC1_SQR3.B19;
    const register unsigned short int SQ30 = 10;
    sbit  SQ30_bit at ADC1_SQR3.B10;
    const register unsigned short int SQ31 = 11;
    sbit  SQ31_bit at ADC1_SQR3.B11;
    const register unsigned short int SQ32 = 12;
    sbit  SQ32_bit at ADC1_SQR3.B12;
    const register unsigned short int SQ33 = 13;
    sbit  SQ33_bit at ADC1_SQR3.B13;
    const register unsigned short int SQ34 = 14;
    sbit  SQ34_bit at ADC1_SQR3.B14;
    const register unsigned short int SQ20 = 5;
    sbit  SQ20_bit at ADC1_SQR3.B5;
    const register unsigned short int SQ21 = 6;
    sbit  SQ21_bit at ADC1_SQR3.B6;
    const register unsigned short int SQ22 = 7;
    sbit  SQ22_bit at ADC1_SQR3.B7;
    const register unsigned short int SQ23 = 8;
    sbit  SQ23_bit at ADC1_SQR3.B8;
    const register unsigned short int SQ24 = 9;
    sbit  SQ24_bit at ADC1_SQR3.B9;
    const register unsigned short int SQ10 = 0;
    sbit  SQ10_bit at ADC1_SQR3.B0;
    const register unsigned short int SQ11 = 1;
    sbit  SQ11_bit at ADC1_SQR3.B1;
    const register unsigned short int SQ12 = 2;
    sbit  SQ12_bit at ADC1_SQR3.B2;
    const register unsigned short int SQ13 = 3;
    sbit  SQ13_bit at ADC1_SQR3.B3;
    const register unsigned short int SQ14 = 4;
    sbit  SQ14_bit at ADC1_SQR3.B4;

sfr unsigned long   volatile ADC1_JSQR            absolute 0x40012438;
    const register unsigned short int JL0 = 20;
    sbit  JL0_bit at ADC1_JSQR.B20;
    const register unsigned short int JL1 = 21;
    sbit  JL1_bit at ADC1_JSQR.B21;
    const register unsigned short int JSQ40 = 15;
    sbit  JSQ40_bit at ADC1_JSQR.B15;
    const register unsigned short int JSQ41 = 16;
    sbit  JSQ41_bit at ADC1_JSQR.B16;
    const register unsigned short int JSQ42 = 17;
    sbit  JSQ42_bit at ADC1_JSQR.B17;
    const register unsigned short int JSQ43 = 18;
    sbit  JSQ43_bit at ADC1_JSQR.B18;
    const register unsigned short int JSQ44 = 19;
    sbit  JSQ44_bit at ADC1_JSQR.B19;
    const register unsigned short int JSQ30 = 10;
    sbit  JSQ30_bit at ADC1_JSQR.B10;
    const register unsigned short int JSQ31 = 11;
    sbit  JSQ31_bit at ADC1_JSQR.B11;
    const register unsigned short int JSQ32 = 12;
    sbit  JSQ32_bit at ADC1_JSQR.B12;
    const register unsigned short int JSQ33 = 13;
    sbit  JSQ33_bit at ADC1_JSQR.B13;
    const register unsigned short int JSQ34 = 14;
    sbit  JSQ34_bit at ADC1_JSQR.B14;
    const register unsigned short int JSQ20 = 5;
    sbit  JSQ20_bit at ADC1_JSQR.B5;
    const register unsigned short int JSQ21 = 6;
    sbit  JSQ21_bit at ADC1_JSQR.B6;
    const register unsigned short int JSQ22 = 7;
    sbit  JSQ22_bit at ADC1_JSQR.B7;
    const register unsigned short int JSQ23 = 8;
    sbit  JSQ23_bit at ADC1_JSQR.B8;
    const register unsigned short int JSQ24 = 9;
    sbit  JSQ24_bit at ADC1_JSQR.B9;
    const register unsigned short int JSQ10 = 0;
    sbit  JSQ10_bit at ADC1_JSQR.B0;
    const register unsigned short int JSQ11 = 1;
    sbit  JSQ11_bit at ADC1_JSQR.B1;
    const register unsigned short int JSQ12 = 2;
    sbit  JSQ12_bit at ADC1_JSQR.B2;
    const register unsigned short int JSQ13 = 3;
    sbit  JSQ13_bit at ADC1_JSQR.B3;
    const register unsigned short int JSQ14 = 4;
    sbit  JSQ14_bit at ADC1_JSQR.B4;

sfr unsigned long   volatile ADC1_JDR1            absolute 0x4001243C;
    const register unsigned short int JDATA0 = 0;
    sbit  JDATA0_bit at ADC1_JDR1.B0;
    const register unsigned short int JDATA1 = 1;
    sbit  JDATA1_bit at ADC1_JDR1.B1;
    const register unsigned short int JDATA2 = 2;
    sbit  JDATA2_bit at ADC1_JDR1.B2;
    const register unsigned short int JDATA3 = 3;
    sbit  JDATA3_bit at ADC1_JDR1.B3;
    const register unsigned short int JDATA4 = 4;
    sbit  JDATA4_bit at ADC1_JDR1.B4;
    const register unsigned short int JDATA5 = 5;
    sbit  JDATA5_bit at ADC1_JDR1.B5;
    const register unsigned short int JDATA6 = 6;
    sbit  JDATA6_bit at ADC1_JDR1.B6;
    const register unsigned short int JDATA7 = 7;
    sbit  JDATA7_bit at ADC1_JDR1.B7;
    const register unsigned short int JDATA8 = 8;
    sbit  JDATA8_bit at ADC1_JDR1.B8;
    const register unsigned short int JDATA9 = 9;
    sbit  JDATA9_bit at ADC1_JDR1.B9;
    const register unsigned short int JDATA10 = 10;
    sbit  JDATA10_bit at ADC1_JDR1.B10;
    const register unsigned short int JDATA11 = 11;
    sbit  JDATA11_bit at ADC1_JDR1.B11;
    const register unsigned short int JDATA12 = 12;
    sbit  JDATA12_bit at ADC1_JDR1.B12;
    const register unsigned short int JDATA13 = 13;
    sbit  JDATA13_bit at ADC1_JDR1.B13;
    const register unsigned short int JDATA14 = 14;
    sbit  JDATA14_bit at ADC1_JDR1.B14;
    const register unsigned short int JDATA15 = 15;
    sbit  JDATA15_bit at ADC1_JDR1.B15;

sfr unsigned long   volatile ADC1_JDR2            absolute 0x40012440;
    sbit  JDATA0_ADC1_JDR2_bit at ADC1_JDR2.B0;
    sbit  JDATA1_ADC1_JDR2_bit at ADC1_JDR2.B1;
    sbit  JDATA2_ADC1_JDR2_bit at ADC1_JDR2.B2;
    sbit  JDATA3_ADC1_JDR2_bit at ADC1_JDR2.B3;
    sbit  JDATA4_ADC1_JDR2_bit at ADC1_JDR2.B4;
    sbit  JDATA5_ADC1_JDR2_bit at ADC1_JDR2.B5;
    sbit  JDATA6_ADC1_JDR2_bit at ADC1_JDR2.B6;
    sbit  JDATA7_ADC1_JDR2_bit at ADC1_JDR2.B7;
    sbit  JDATA8_ADC1_JDR2_bit at ADC1_JDR2.B8;
    sbit  JDATA9_ADC1_JDR2_bit at ADC1_JDR2.B9;
    sbit  JDATA10_ADC1_JDR2_bit at ADC1_JDR2.B10;
    sbit  JDATA11_ADC1_JDR2_bit at ADC1_JDR2.B11;
    sbit  JDATA12_ADC1_JDR2_bit at ADC1_JDR2.B12;
    sbit  JDATA13_ADC1_JDR2_bit at ADC1_JDR2.B13;
    sbit  JDATA14_ADC1_JDR2_bit at ADC1_JDR2.B14;
    sbit  JDATA15_ADC1_JDR2_bit at ADC1_JDR2.B15;

sfr unsigned long   volatile ADC1_JDR3            absolute 0x40012444;
    sbit  JDATA0_ADC1_JDR3_bit at ADC1_JDR3.B0;
    sbit  JDATA1_ADC1_JDR3_bit at ADC1_JDR3.B1;
    sbit  JDATA2_ADC1_JDR3_bit at ADC1_JDR3.B2;
    sbit  JDATA3_ADC1_JDR3_bit at ADC1_JDR3.B3;
    sbit  JDATA4_ADC1_JDR3_bit at ADC1_JDR3.B4;
    sbit  JDATA5_ADC1_JDR3_bit at ADC1_JDR3.B5;
    sbit  JDATA6_ADC1_JDR3_bit at ADC1_JDR3.B6;
    sbit  JDATA7_ADC1_JDR3_bit at ADC1_JDR3.B7;
    sbit  JDATA8_ADC1_JDR3_bit at ADC1_JDR3.B8;
    sbit  JDATA9_ADC1_JDR3_bit at ADC1_JDR3.B9;
    sbit  JDATA10_ADC1_JDR3_bit at ADC1_JDR3.B10;
    sbit  JDATA11_ADC1_JDR3_bit at ADC1_JDR3.B11;
    sbit  JDATA12_ADC1_JDR3_bit at ADC1_JDR3.B12;
    sbit  JDATA13_ADC1_JDR3_bit at ADC1_JDR3.B13;
    sbit  JDATA14_ADC1_JDR3_bit at ADC1_JDR3.B14;
    sbit  JDATA15_ADC1_JDR3_bit at ADC1_JDR3.B15;

sfr unsigned long   volatile ADC1_JDR4            absolute 0x40012448;
    sbit  JDATA0_ADC1_JDR4_bit at ADC1_JDR4.B0;
    sbit  JDATA1_ADC1_JDR4_bit at ADC1_JDR4.B1;
    sbit  JDATA2_ADC1_JDR4_bit at ADC1_JDR4.B2;
    sbit  JDATA3_ADC1_JDR4_bit at ADC1_JDR4.B3;
    sbit  JDATA4_ADC1_JDR4_bit at ADC1_JDR4.B4;
    sbit  JDATA5_ADC1_JDR4_bit at ADC1_JDR4.B5;
    sbit  JDATA6_ADC1_JDR4_bit at ADC1_JDR4.B6;
    sbit  JDATA7_ADC1_JDR4_bit at ADC1_JDR4.B7;
    sbit  JDATA8_ADC1_JDR4_bit at ADC1_JDR4.B8;
    sbit  JDATA9_ADC1_JDR4_bit at ADC1_JDR4.B9;
    sbit  JDATA10_ADC1_JDR4_bit at ADC1_JDR4.B10;
    sbit  JDATA11_ADC1_JDR4_bit at ADC1_JDR4.B11;
    sbit  JDATA12_ADC1_JDR4_bit at ADC1_JDR4.B12;
    sbit  JDATA13_ADC1_JDR4_bit at ADC1_JDR4.B13;
    sbit  JDATA14_ADC1_JDR4_bit at ADC1_JDR4.B14;
    sbit  JDATA15_ADC1_JDR4_bit at ADC1_JDR4.B15;

sfr unsigned long   volatile ADC1_DR              absolute 0x4001244C;
    const register unsigned short int DATA0 = 0;
    sbit  DATA0_bit at ADC1_DR.B0;
    const register unsigned short int DATA1 = 1;
    sbit  DATA1_bit at ADC1_DR.B1;
    const register unsigned short int DATA2 = 2;
    sbit  DATA2_bit at ADC1_DR.B2;
    const register unsigned short int DATA3 = 3;
    sbit  DATA3_bit at ADC1_DR.B3;
    const register unsigned short int DATA4 = 4;
    sbit  DATA4_bit at ADC1_DR.B4;
    const register unsigned short int DATA5 = 5;
    sbit  DATA5_bit at ADC1_DR.B5;
    const register unsigned short int DATA6 = 6;
    sbit  DATA6_bit at ADC1_DR.B6;
    const register unsigned short int DATA7 = 7;
    sbit  DATA7_bit at ADC1_DR.B7;
    const register unsigned short int DATA8 = 8;
    sbit  DATA8_bit at ADC1_DR.B8;
    const register unsigned short int DATA9 = 9;
    sbit  DATA9_bit at ADC1_DR.B9;
    sbit  DATA10_ADC1_DR_bit at ADC1_DR.B10;
    sbit  DATA11_ADC1_DR_bit at ADC1_DR.B11;
    sbit  DATA12_ADC1_DR_bit at ADC1_DR.B12;
    sbit  DATA13_ADC1_DR_bit at ADC1_DR.B13;
    sbit  DATA14_ADC1_DR_bit at ADC1_DR.B14;
    sbit  DATA15_ADC1_DR_bit at ADC1_DR.B15;

sfr unsigned long   volatile DAC_CR               absolute 0x40007400;
    const register unsigned short int EN1 = 0;
    sbit  EN1_bit at DAC_CR.B0;
    const register unsigned short int BOFF1 = 1;
    sbit  BOFF1_bit at DAC_CR.B1;
    const register unsigned short int TEN1 = 2;
    sbit  TEN1_bit at DAC_CR.B2;
    const register unsigned short int TSEL10 = 3;
    sbit  TSEL10_bit at DAC_CR.B3;
    const register unsigned short int TSEL11 = 4;
    sbit  TSEL11_bit at DAC_CR.B4;
    const register unsigned short int TSEL12 = 5;
    sbit  TSEL12_bit at DAC_CR.B5;
    const register unsigned short int WAVE10 = 6;
    sbit  WAVE10_bit at DAC_CR.B6;
    const register unsigned short int WAVE11 = 7;
    sbit  WAVE11_bit at DAC_CR.B7;
    const register unsigned short int MAMP10 = 8;
    sbit  MAMP10_bit at DAC_CR.B8;
    const register unsigned short int MAMP11 = 9;
    sbit  MAMP11_bit at DAC_CR.B9;
    const register unsigned short int MAMP12 = 10;
    sbit  MAMP12_bit at DAC_CR.B10;
    const register unsigned short int MAMP13 = 11;
    sbit  MAMP13_bit at DAC_CR.B11;
    const register unsigned short int DMAEN1 = 12;
    sbit  DMAEN1_bit at DAC_CR.B12;
    const register unsigned short int EN2 = 16;
    sbit  EN2_bit at DAC_CR.B16;
    const register unsigned short int BOFF2 = 17;
    sbit  BOFF2_bit at DAC_CR.B17;
    const register unsigned short int TEN2 = 18;
    sbit  TEN2_bit at DAC_CR.B18;
    const register unsigned short int TSEL20 = 19;
    sbit  TSEL20_bit at DAC_CR.B19;
    const register unsigned short int TSEL21 = 20;
    sbit  TSEL21_bit at DAC_CR.B20;
    const register unsigned short int TSEL22 = 21;
    sbit  TSEL22_bit at DAC_CR.B21;
    const register unsigned short int WAVE20 = 22;
    sbit  WAVE20_bit at DAC_CR.B22;
    const register unsigned short int WAVE21 = 23;
    sbit  WAVE21_bit at DAC_CR.B23;
    const register unsigned short int MAMP20 = 24;
    sbit  MAMP20_bit at DAC_CR.B24;
    const register unsigned short int MAMP21 = 25;
    sbit  MAMP21_bit at DAC_CR.B25;
    const register unsigned short int MAMP22 = 26;
    sbit  MAMP22_bit at DAC_CR.B26;
    const register unsigned short int MAMP23 = 27;
    sbit  MAMP23_bit at DAC_CR.B27;
    const register unsigned short int DMAEN2 = 28;
    sbit  DMAEN2_bit at DAC_CR.B28;
    const register unsigned short int DMAUDRIE1 = 13;
    sbit  DMAUDRIE1_bit at DAC_CR.B13;
    const register unsigned short int DMAUDRIE2 = 29;
    sbit  DMAUDRIE2_bit at DAC_CR.B29;

sfr unsigned long   volatile DAC_SWTRIGR          absolute 0x40007404;
    const register unsigned short int SWTRIG1 = 0;
    sbit  SWTRIG1_bit at DAC_SWTRIGR.B0;
    const register unsigned short int SWTRIG2 = 1;
    sbit  SWTRIG2_bit at DAC_SWTRIGR.B1;

sfr unsigned long   volatile DAC_DHR12R1          absolute 0x40007408;
    const register unsigned short int DACC1DHR0 = 0;
    sbit  DACC1DHR0_bit at DAC_DHR12R1.B0;
    const register unsigned short int DACC1DHR1 = 1;
    sbit  DACC1DHR1_bit at DAC_DHR12R1.B1;
    const register unsigned short int DACC1DHR2 = 2;
    sbit  DACC1DHR2_bit at DAC_DHR12R1.B2;
    const register unsigned short int DACC1DHR3 = 3;
    sbit  DACC1DHR3_bit at DAC_DHR12R1.B3;
    const register unsigned short int DACC1DHR4 = 4;
    sbit  DACC1DHR4_bit at DAC_DHR12R1.B4;
    const register unsigned short int DACC1DHR5 = 5;
    sbit  DACC1DHR5_bit at DAC_DHR12R1.B5;
    const register unsigned short int DACC1DHR6 = 6;
    sbit  DACC1DHR6_bit at DAC_DHR12R1.B6;
    const register unsigned short int DACC1DHR7 = 7;
    sbit  DACC1DHR7_bit at DAC_DHR12R1.B7;
    const register unsigned short int DACC1DHR8 = 8;
    sbit  DACC1DHR8_bit at DAC_DHR12R1.B8;
    const register unsigned short int DACC1DHR9 = 9;
    sbit  DACC1DHR9_bit at DAC_DHR12R1.B9;
    const register unsigned short int DACC1DHR10 = 10;
    sbit  DACC1DHR10_bit at DAC_DHR12R1.B10;
    const register unsigned short int DACC1DHR11 = 11;
    sbit  DACC1DHR11_bit at DAC_DHR12R1.B11;

sfr unsigned long   volatile DAC_DHR12L1          absolute 0x4000740C;
    sbit  DACC1DHR0_DAC_DHR12L1_bit at DAC_DHR12L1.B4;
    sbit  DACC1DHR1_DAC_DHR12L1_bit at DAC_DHR12L1.B5;
    sbit  DACC1DHR2_DAC_DHR12L1_bit at DAC_DHR12L1.B6;
    sbit  DACC1DHR3_DAC_DHR12L1_bit at DAC_DHR12L1.B7;
    sbit  DACC1DHR4_DAC_DHR12L1_bit at DAC_DHR12L1.B8;
    sbit  DACC1DHR5_DAC_DHR12L1_bit at DAC_DHR12L1.B9;
    sbit  DACC1DHR6_DAC_DHR12L1_bit at DAC_DHR12L1.B10;
    sbit  DACC1DHR7_DAC_DHR12L1_bit at DAC_DHR12L1.B11;
    sbit  DACC1DHR8_DAC_DHR12L1_bit at DAC_DHR12L1.B12;
    sbit  DACC1DHR9_DAC_DHR12L1_bit at DAC_DHR12L1.B13;
    sbit  DACC1DHR10_DAC_DHR12L1_bit at DAC_DHR12L1.B14;
    sbit  DACC1DHR11_DAC_DHR12L1_bit at DAC_DHR12L1.B15;

sfr unsigned long   volatile DAC_DHR8R1           absolute 0x40007410;
    sbit  DACC1DHR0_DAC_DHR8R1_bit at DAC_DHR8R1.B0;
    sbit  DACC1DHR1_DAC_DHR8R1_bit at DAC_DHR8R1.B1;
    sbit  DACC1DHR2_DAC_DHR8R1_bit at DAC_DHR8R1.B2;
    sbit  DACC1DHR3_DAC_DHR8R1_bit at DAC_DHR8R1.B3;
    sbit  DACC1DHR4_DAC_DHR8R1_bit at DAC_DHR8R1.B4;
    sbit  DACC1DHR5_DAC_DHR8R1_bit at DAC_DHR8R1.B5;
    sbit  DACC1DHR6_DAC_DHR8R1_bit at DAC_DHR8R1.B6;
    sbit  DACC1DHR7_DAC_DHR8R1_bit at DAC_DHR8R1.B7;

sfr unsigned long   volatile DAC_DHR12R2          absolute 0x40007414;
    const register unsigned short int DACC2DHR0 = 0;
    sbit  DACC2DHR0_bit at DAC_DHR12R2.B0;
    const register unsigned short int DACC2DHR1 = 1;
    sbit  DACC2DHR1_bit at DAC_DHR12R2.B1;
    const register unsigned short int DACC2DHR2 = 2;
    sbit  DACC2DHR2_bit at DAC_DHR12R2.B2;
    const register unsigned short int DACC2DHR3 = 3;
    sbit  DACC2DHR3_bit at DAC_DHR12R2.B3;
    const register unsigned short int DACC2DHR4 = 4;
    sbit  DACC2DHR4_bit at DAC_DHR12R2.B4;
    const register unsigned short int DACC2DHR5 = 5;
    sbit  DACC2DHR5_bit at DAC_DHR12R2.B5;
    const register unsigned short int DACC2DHR6 = 6;
    sbit  DACC2DHR6_bit at DAC_DHR12R2.B6;
    const register unsigned short int DACC2DHR7 = 7;
    sbit  DACC2DHR7_bit at DAC_DHR12R2.B7;
    const register unsigned short int DACC2DHR8 = 8;
    sbit  DACC2DHR8_bit at DAC_DHR12R2.B8;
    const register unsigned short int DACC2DHR9 = 9;
    sbit  DACC2DHR9_bit at DAC_DHR12R2.B9;
    const register unsigned short int DACC2DHR10 = 10;
    sbit  DACC2DHR10_bit at DAC_DHR12R2.B10;
    const register unsigned short int DACC2DHR11 = 11;
    sbit  DACC2DHR11_bit at DAC_DHR12R2.B11;

sfr unsigned long   volatile DAC_DHR12L2          absolute 0x40007418;
    sbit  DACC2DHR0_DAC_DHR12L2_bit at DAC_DHR12L2.B4;
    sbit  DACC2DHR1_DAC_DHR12L2_bit at DAC_DHR12L2.B5;
    sbit  DACC2DHR2_DAC_DHR12L2_bit at DAC_DHR12L2.B6;
    sbit  DACC2DHR3_DAC_DHR12L2_bit at DAC_DHR12L2.B7;
    sbit  DACC2DHR4_DAC_DHR12L2_bit at DAC_DHR12L2.B8;
    sbit  DACC2DHR5_DAC_DHR12L2_bit at DAC_DHR12L2.B9;
    sbit  DACC2DHR6_DAC_DHR12L2_bit at DAC_DHR12L2.B10;
    sbit  DACC2DHR7_DAC_DHR12L2_bit at DAC_DHR12L2.B11;
    sbit  DACC2DHR8_DAC_DHR12L2_bit at DAC_DHR12L2.B12;
    sbit  DACC2DHR9_DAC_DHR12L2_bit at DAC_DHR12L2.B13;
    sbit  DACC2DHR10_DAC_DHR12L2_bit at DAC_DHR12L2.B14;
    sbit  DACC2DHR11_DAC_DHR12L2_bit at DAC_DHR12L2.B15;

sfr unsigned long   volatile DAC_DHR8R2           absolute 0x4000741C;
    sbit  DACC2DHR0_DAC_DHR8R2_bit at DAC_DHR8R2.B0;
    sbit  DACC2DHR1_DAC_DHR8R2_bit at DAC_DHR8R2.B1;
    sbit  DACC2DHR2_DAC_DHR8R2_bit at DAC_DHR8R2.B2;
    sbit  DACC2DHR3_DAC_DHR8R2_bit at DAC_DHR8R2.B3;
    sbit  DACC2DHR4_DAC_DHR8R2_bit at DAC_DHR8R2.B4;
    sbit  DACC2DHR5_DAC_DHR8R2_bit at DAC_DHR8R2.B5;
    sbit  DACC2DHR6_DAC_DHR8R2_bit at DAC_DHR8R2.B6;
    sbit  DACC2DHR7_DAC_DHR8R2_bit at DAC_DHR8R2.B7;

sfr unsigned long   volatile DAC_DHR12RD          absolute 0x40007420;
    sbit  DACC1DHR0_DAC_DHR12RD_bit at DAC_DHR12RD.B0;
    sbit  DACC1DHR1_DAC_DHR12RD_bit at DAC_DHR12RD.B1;
    sbit  DACC1DHR2_DAC_DHR12RD_bit at DAC_DHR12RD.B2;
    sbit  DACC1DHR3_DAC_DHR12RD_bit at DAC_DHR12RD.B3;
    sbit  DACC1DHR4_DAC_DHR12RD_bit at DAC_DHR12RD.B4;
    sbit  DACC1DHR5_DAC_DHR12RD_bit at DAC_DHR12RD.B5;
    sbit  DACC1DHR6_DAC_DHR12RD_bit at DAC_DHR12RD.B6;
    sbit  DACC1DHR7_DAC_DHR12RD_bit at DAC_DHR12RD.B7;
    sbit  DACC1DHR8_DAC_DHR12RD_bit at DAC_DHR12RD.B8;
    sbit  DACC1DHR9_DAC_DHR12RD_bit at DAC_DHR12RD.B9;
    sbit  DACC1DHR10_DAC_DHR12RD_bit at DAC_DHR12RD.B10;
    sbit  DACC1DHR11_DAC_DHR12RD_bit at DAC_DHR12RD.B11;
    sbit  DACC2DHR0_DAC_DHR12RD_bit at DAC_DHR12RD.B16;
    sbit  DACC2DHR1_DAC_DHR12RD_bit at DAC_DHR12RD.B17;
    sbit  DACC2DHR2_DAC_DHR12RD_bit at DAC_DHR12RD.B18;
    sbit  DACC2DHR3_DAC_DHR12RD_bit at DAC_DHR12RD.B19;
    sbit  DACC2DHR4_DAC_DHR12RD_bit at DAC_DHR12RD.B20;
    sbit  DACC2DHR5_DAC_DHR12RD_bit at DAC_DHR12RD.B21;
    sbit  DACC2DHR6_DAC_DHR12RD_bit at DAC_DHR12RD.B22;
    sbit  DACC2DHR7_DAC_DHR12RD_bit at DAC_DHR12RD.B23;
    sbit  DACC2DHR8_DAC_DHR12RD_bit at DAC_DHR12RD.B24;
    sbit  DACC2DHR9_DAC_DHR12RD_bit at DAC_DHR12RD.B25;
    sbit  DACC2DHR10_DAC_DHR12RD_bit at DAC_DHR12RD.B26;
    sbit  DACC2DHR11_DAC_DHR12RD_bit at DAC_DHR12RD.B27;

sfr unsigned long   volatile DAC_DHR12LD          absolute 0x40007424;
    sbit  DACC1DHR0_DAC_DHR12LD_bit at DAC_DHR12LD.B4;
    sbit  DACC1DHR1_DAC_DHR12LD_bit at DAC_DHR12LD.B5;
    sbit  DACC1DHR2_DAC_DHR12LD_bit at DAC_DHR12LD.B6;
    sbit  DACC1DHR3_DAC_DHR12LD_bit at DAC_DHR12LD.B7;
    sbit  DACC1DHR4_DAC_DHR12LD_bit at DAC_DHR12LD.B8;
    sbit  DACC1DHR5_DAC_DHR12LD_bit at DAC_DHR12LD.B9;
    sbit  DACC1DHR6_DAC_DHR12LD_bit at DAC_DHR12LD.B10;
    sbit  DACC1DHR7_DAC_DHR12LD_bit at DAC_DHR12LD.B11;
    sbit  DACC1DHR8_DAC_DHR12LD_bit at DAC_DHR12LD.B12;
    sbit  DACC1DHR9_DAC_DHR12LD_bit at DAC_DHR12LD.B13;
    sbit  DACC1DHR10_DAC_DHR12LD_bit at DAC_DHR12LD.B14;
    sbit  DACC1DHR11_DAC_DHR12LD_bit at DAC_DHR12LD.B15;
    sbit  DACC2DHR0_DAC_DHR12LD_bit at DAC_DHR12LD.B20;
    sbit  DACC2DHR1_DAC_DHR12LD_bit at DAC_DHR12LD.B21;
    sbit  DACC2DHR2_DAC_DHR12LD_bit at DAC_DHR12LD.B22;
    sbit  DACC2DHR3_DAC_DHR12LD_bit at DAC_DHR12LD.B23;
    sbit  DACC2DHR4_DAC_DHR12LD_bit at DAC_DHR12LD.B24;
    sbit  DACC2DHR5_DAC_DHR12LD_bit at DAC_DHR12LD.B25;
    sbit  DACC2DHR6_DAC_DHR12LD_bit at DAC_DHR12LD.B26;
    sbit  DACC2DHR7_DAC_DHR12LD_bit at DAC_DHR12LD.B27;
    sbit  DACC2DHR8_DAC_DHR12LD_bit at DAC_DHR12LD.B28;
    sbit  DACC2DHR9_DAC_DHR12LD_bit at DAC_DHR12LD.B29;
    sbit  DACC2DHR10_DAC_DHR12LD_bit at DAC_DHR12LD.B30;
    sbit  DACC2DHR11_DAC_DHR12LD_bit at DAC_DHR12LD.B31;

sfr unsigned long   volatile DAC_DHR8RD           absolute 0x40007428;
    sbit  DACC1DHR0_DAC_DHR8RD_bit at DAC_DHR8RD.B0;
    sbit  DACC1DHR1_DAC_DHR8RD_bit at DAC_DHR8RD.B1;
    sbit  DACC1DHR2_DAC_DHR8RD_bit at DAC_DHR8RD.B2;
    sbit  DACC1DHR3_DAC_DHR8RD_bit at DAC_DHR8RD.B3;
    sbit  DACC1DHR4_DAC_DHR8RD_bit at DAC_DHR8RD.B4;
    sbit  DACC1DHR5_DAC_DHR8RD_bit at DAC_DHR8RD.B5;
    sbit  DACC1DHR6_DAC_DHR8RD_bit at DAC_DHR8RD.B6;
    sbit  DACC1DHR7_DAC_DHR8RD_bit at DAC_DHR8RD.B7;
    sbit  DACC2DHR0_DAC_DHR8RD_bit at DAC_DHR8RD.B8;
    sbit  DACC2DHR1_DAC_DHR8RD_bit at DAC_DHR8RD.B9;
    sbit  DACC2DHR2_DAC_DHR8RD_bit at DAC_DHR8RD.B10;
    sbit  DACC2DHR3_DAC_DHR8RD_bit at DAC_DHR8RD.B11;
    sbit  DACC2DHR4_DAC_DHR8RD_bit at DAC_DHR8RD.B12;
    sbit  DACC2DHR5_DAC_DHR8RD_bit at DAC_DHR8RD.B13;
    sbit  DACC2DHR6_DAC_DHR8RD_bit at DAC_DHR8RD.B14;
    sbit  DACC2DHR7_DAC_DHR8RD_bit at DAC_DHR8RD.B15;

sfr unsigned long   volatile DAC_DOR1             absolute 0x4000742C;
    const register unsigned short int DACC1DOR0 = 0;
    sbit  DACC1DOR0_bit at DAC_DOR1.B0;
    const register unsigned short int DACC1DOR1 = 1;
    sbit  DACC1DOR1_bit at DAC_DOR1.B1;
    const register unsigned short int DACC1DOR2 = 2;
    sbit  DACC1DOR2_bit at DAC_DOR1.B2;
    const register unsigned short int DACC1DOR3 = 3;
    sbit  DACC1DOR3_bit at DAC_DOR1.B3;
    const register unsigned short int DACC1DOR4 = 4;
    sbit  DACC1DOR4_bit at DAC_DOR1.B4;
    const register unsigned short int DACC1DOR5 = 5;
    sbit  DACC1DOR5_bit at DAC_DOR1.B5;
    const register unsigned short int DACC1DOR6 = 6;
    sbit  DACC1DOR6_bit at DAC_DOR1.B6;
    const register unsigned short int DACC1DOR7 = 7;
    sbit  DACC1DOR7_bit at DAC_DOR1.B7;
    const register unsigned short int DACC1DOR8 = 8;
    sbit  DACC1DOR8_bit at DAC_DOR1.B8;
    const register unsigned short int DACC1DOR9 = 9;
    sbit  DACC1DOR9_bit at DAC_DOR1.B9;
    const register unsigned short int DACC1DOR10 = 10;
    sbit  DACC1DOR10_bit at DAC_DOR1.B10;
    const register unsigned short int DACC1DOR11 = 11;
    sbit  DACC1DOR11_bit at DAC_DOR1.B11;

sfr unsigned long   volatile DAC_DOR2             absolute 0x40007430;
    const register unsigned short int DACC2DOR0 = 0;
    sbit  DACC2DOR0_bit at DAC_DOR2.B0;
    const register unsigned short int DACC2DOR1 = 1;
    sbit  DACC2DOR1_bit at DAC_DOR2.B1;
    const register unsigned short int DACC2DOR2 = 2;
    sbit  DACC2DOR2_bit at DAC_DOR2.B2;
    const register unsigned short int DACC2DOR3 = 3;
    sbit  DACC2DOR3_bit at DAC_DOR2.B3;
    const register unsigned short int DACC2DOR4 = 4;
    sbit  DACC2DOR4_bit at DAC_DOR2.B4;
    const register unsigned short int DACC2DOR5 = 5;
    sbit  DACC2DOR5_bit at DAC_DOR2.B5;
    const register unsigned short int DACC2DOR6 = 6;
    sbit  DACC2DOR6_bit at DAC_DOR2.B6;
    const register unsigned short int DACC2DOR7 = 7;
    sbit  DACC2DOR7_bit at DAC_DOR2.B7;
    const register unsigned short int DACC2DOR8 = 8;
    sbit  DACC2DOR8_bit at DAC_DOR2.B8;
    const register unsigned short int DACC2DOR9 = 9;
    sbit  DACC2DOR9_bit at DAC_DOR2.B9;
    const register unsigned short int DACC2DOR10 = 10;
    sbit  DACC2DOR10_bit at DAC_DOR2.B10;
    const register unsigned short int DACC2DOR11 = 11;
    sbit  DACC2DOR11_bit at DAC_DOR2.B11;

sfr unsigned long   volatile DAC_SR               absolute 0x40007434;
    const register unsigned short int DMAUDR1 = 13;
    sbit  DMAUDR1_bit at DAC_SR.B13;
    const register unsigned short int DMAUDR2 = 29;
    sbit  DMAUDR2_bit at DAC_SR.B29;

sfr far unsigned long   volatile DBG_IDCODE           absolute 0xE0042000;
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

sfr far unsigned long   volatile DBG_CR               absolute 0xE0042004;
    const register unsigned short int DBG_SLEEP = 0;
    sbit  DBG_SLEEP_bit at DBG_CR.B0;
    const register unsigned short int DBG_STOP = 1;
    sbit  DBG_STOP_bit at DBG_CR.B1;
    const register unsigned short int DBG_STANDBY = 2;
    sbit  DBG_STANDBY_bit at DBG_CR.B2;
    const register unsigned short int TRACE_IOEN = 5;
    sbit  TRACE_IOEN_bit at DBG_CR.B5;
    const register unsigned short int TRACE_MODE0 = 6;
    sbit  TRACE_MODE0_bit at DBG_CR.B6;
    const register unsigned short int TRACE_MODE1 = 7;
    sbit  TRACE_MODE1_bit at DBG_CR.B7;
    const register unsigned short int DBG_IWDG_STOP = 8;
    sbit  DBG_IWDG_STOP_bit at DBG_CR.B8;
    const register unsigned short int DBG_WWDG_STOP = 9;
    sbit  DBG_WWDG_STOP_bit at DBG_CR.B9;
    const register unsigned short int DBG_TIM1_STOP = 10;
    sbit  DBG_TIM1_STOP_bit at DBG_CR.B10;
    const register unsigned short int DBG_TIM2_STOP = 11;
    sbit  DBG_TIM2_STOP_bit at DBG_CR.B11;
    const register unsigned short int DBG_TIM3_STOP = 12;
    sbit  DBG_TIM3_STOP_bit at DBG_CR.B12;
    const register unsigned short int DBG_TIM4_STOP = 13;
    sbit  DBG_TIM4_STOP_bit at DBG_CR.B13;
    const register unsigned short int DBG_I2C1_SMBUS_TIMEOUT = 15;
    sbit  DBG_I2C1_SMBUS_TIMEOUT_bit at DBG_CR.B15;
    const register unsigned short int DBG_I2C2_SMBUS_TIMEOUT = 16;
    sbit  DBG_I2C2_SMBUS_TIMEOUT_bit at DBG_CR.B16;
    const register unsigned short int DBG_TIM5_STOP = 18;
    sbit  DBG_TIM5_STOP_bit at DBG_CR.B18;
    const register unsigned short int DBG_TIM6_STOP = 19;
    sbit  DBG_TIM6_STOP_bit at DBG_CR.B19;
    const register unsigned short int DBG_TIM7_STOP = 20;
    sbit  DBG_TIM7_STOP_bit at DBG_CR.B20;
    const register unsigned short int DBG_TIM15_STOP = 22;
    sbit  DBG_TIM15_STOP_bit at DBG_CR.B22;
    const register unsigned short int DBG_TIM16_STOP = 23;
    sbit  DBG_TIM16_STOP_bit at DBG_CR.B23;
    const register unsigned short int DBG_TIM17_STOP = 24;
    sbit  DBG_TIM17_STOP_bit at DBG_CR.B24;
    const register unsigned short int DBG_TIM12_STOP = 25;
    sbit  DBG_TIM12_STOP_bit at DBG_CR.B25;
    const register unsigned short int DBG_TIM13_STOP = 26;
    sbit  DBG_TIM13_STOP_bit at DBG_CR.B26;
    const register unsigned short int DBG_TIM14_STOP = 27;
    sbit  DBG_TIM14_STOP_bit at DBG_CR.B27;

sfr unsigned long   volatile UART4_SR             absolute 0x40004C00;
    sbit  PE_UART4_SR_bit at UART4_SR.B0;
    sbit  FE_UART4_SR_bit at UART4_SR.B1;
    sbit  NE_UART4_SR_bit at UART4_SR.B2;
    sbit  ORE_UART4_SR_bit at UART4_SR.B3;
    sbit  IDLE_UART4_SR_bit at UART4_SR.B4;
    sbit  RXNE_UART4_SR_bit at UART4_SR.B5;
    sbit  TC_UART4_SR_bit at UART4_SR.B6;
    sbit  TXE_UART4_SR_bit at UART4_SR.B7;
    sbit  LBD_UART4_SR_bit at UART4_SR.B8;

sfr unsigned long   volatile UART4_DR             absolute 0x40004C04;
    sbit  DR0_UART4_DR_bit at UART4_DR.B0;
    sbit  DR1_UART4_DR_bit at UART4_DR.B1;
    sbit  DR2_UART4_DR_bit at UART4_DR.B2;
    sbit  DR3_UART4_DR_bit at UART4_DR.B3;
    sbit  DR4_UART4_DR_bit at UART4_DR.B4;
    sbit  DR5_UART4_DR_bit at UART4_DR.B5;
    sbit  DR6_UART4_DR_bit at UART4_DR.B6;
    sbit  DR7_UART4_DR_bit at UART4_DR.B7;
    sbit  DR8_UART4_DR_bit at UART4_DR.B8;

sfr unsigned long   volatile UART4_BRR            absolute 0x40004C08;
    sbit  DIV_Fraction0_UART4_BRR_bit at UART4_BRR.B0;
    sbit  DIV_Fraction1_UART4_BRR_bit at UART4_BRR.B1;
    sbit  DIV_Fraction2_UART4_BRR_bit at UART4_BRR.B2;
    sbit  DIV_Fraction3_UART4_BRR_bit at UART4_BRR.B3;
    sbit  DIV_Mantissa0_UART4_BRR_bit at UART4_BRR.B4;
    sbit  DIV_Mantissa1_UART4_BRR_bit at UART4_BRR.B5;
    sbit  DIV_Mantissa2_UART4_BRR_bit at UART4_BRR.B6;
    sbit  DIV_Mantissa3_UART4_BRR_bit at UART4_BRR.B7;
    sbit  DIV_Mantissa4_UART4_BRR_bit at UART4_BRR.B8;
    sbit  DIV_Mantissa5_UART4_BRR_bit at UART4_BRR.B9;
    sbit  DIV_Mantissa6_UART4_BRR_bit at UART4_BRR.B10;
    sbit  DIV_Mantissa7_UART4_BRR_bit at UART4_BRR.B11;
    sbit  DIV_Mantissa8_UART4_BRR_bit at UART4_BRR.B12;
    sbit  DIV_Mantissa9_UART4_BRR_bit at UART4_BRR.B13;
    sbit  DIV_Mantissa10_UART4_BRR_bit at UART4_BRR.B14;
    sbit  DIV_Mantissa11_UART4_BRR_bit at UART4_BRR.B15;

sfr unsigned long   volatile UART4_CR1            absolute 0x40004C0C;
    sbit  SBK_UART4_CR1_bit at UART4_CR1.B0;
    sbit  RWU_UART4_CR1_bit at UART4_CR1.B1;
    sbit  RE_UART4_CR1_bit at UART4_CR1.B2;
    sbit  TE_UART4_CR1_bit at UART4_CR1.B3;
    sbit  IDLEIE_UART4_CR1_bit at UART4_CR1.B4;
    sbit  RXNEIE_UART4_CR1_bit at UART4_CR1.B5;
    sbit  TCIE_UART4_CR1_bit at UART4_CR1.B6;
    sbit  TXEIE_UART4_CR1_bit at UART4_CR1.B7;
    sbit  PEIE_UART4_CR1_bit at UART4_CR1.B8;
    sbit  PS_UART4_CR1_bit at UART4_CR1.B9;
    sbit  PCE_UART4_CR1_bit at UART4_CR1.B10;
    sbit  WAKE_UART4_CR1_bit at UART4_CR1.B11;
    sbit  M_UART4_CR1_bit at UART4_CR1.B12;
    sbit  UE_UART4_CR1_bit at UART4_CR1.B13;

sfr unsigned long   volatile UART4_CR2            absolute 0x40004C10;
    sbit  ADD0_UART4_CR2_bit at UART4_CR2.B0;
    sbit  ADD1_UART4_CR2_bit at UART4_CR2.B1;
    sbit  ADD2_UART4_CR2_bit at UART4_CR2.B2;
    sbit  ADD3_UART4_CR2_bit at UART4_CR2.B3;
    sbit  LBDL_UART4_CR2_bit at UART4_CR2.B5;
    sbit  LBDIE_UART4_CR2_bit at UART4_CR2.B6;
    sbit  STOP0_UART4_CR2_bit at UART4_CR2.B12;
    sbit  STOP1_UART4_CR2_bit at UART4_CR2.B13;
    sbit  LINEN_UART4_CR2_bit at UART4_CR2.B14;

sfr unsigned long   volatile UART4_CR3            absolute 0x40004C14;
    sbit  EIE_UART4_CR3_bit at UART4_CR3.B0;
    sbit  IREN_UART4_CR3_bit at UART4_CR3.B1;
    sbit  IRLP_UART4_CR3_bit at UART4_CR3.B2;
    sbit  HDSEL_UART4_CR3_bit at UART4_CR3.B3;
    sbit  DMAR_UART4_CR3_bit at UART4_CR3.B6;
    sbit  DMAT_UART4_CR3_bit at UART4_CR3.B7;

sfr unsigned long   volatile UART5_SR             absolute 0x40005000;
    sbit  PE_UART5_SR_bit at UART5_SR.B0;
    sbit  FE_UART5_SR_bit at UART5_SR.B1;
    sbit  NE_UART5_SR_bit at UART5_SR.B2;
    sbit  ORE_UART5_SR_bit at UART5_SR.B3;
    sbit  IDLE_UART5_SR_bit at UART5_SR.B4;
    sbit  RXNE_UART5_SR_bit at UART5_SR.B5;
    sbit  TC_UART5_SR_bit at UART5_SR.B6;
    sbit  TXE_UART5_SR_bit at UART5_SR.B7;
    sbit  LBD_UART5_SR_bit at UART5_SR.B8;

sfr unsigned long   volatile UART5_DR             absolute 0x40005004;
    sbit  DR0_UART5_DR_bit at UART5_DR.B0;
    sbit  DR1_UART5_DR_bit at UART5_DR.B1;
    sbit  DR2_UART5_DR_bit at UART5_DR.B2;
    sbit  DR3_UART5_DR_bit at UART5_DR.B3;
    sbit  DR4_UART5_DR_bit at UART5_DR.B4;
    sbit  DR5_UART5_DR_bit at UART5_DR.B5;
    sbit  DR6_UART5_DR_bit at UART5_DR.B6;
    sbit  DR7_UART5_DR_bit at UART5_DR.B7;
    sbit  DR8_UART5_DR_bit at UART5_DR.B8;

sfr unsigned long   volatile UART5_BRR            absolute 0x40005008;
    sbit  DIV_Fraction0_UART5_BRR_bit at UART5_BRR.B0;
    sbit  DIV_Fraction1_UART5_BRR_bit at UART5_BRR.B1;
    sbit  DIV_Fraction2_UART5_BRR_bit at UART5_BRR.B2;
    sbit  DIV_Fraction3_UART5_BRR_bit at UART5_BRR.B3;
    sbit  DIV_Mantissa0_UART5_BRR_bit at UART5_BRR.B4;
    sbit  DIV_Mantissa1_UART5_BRR_bit at UART5_BRR.B5;
    sbit  DIV_Mantissa2_UART5_BRR_bit at UART5_BRR.B6;
    sbit  DIV_Mantissa3_UART5_BRR_bit at UART5_BRR.B7;
    sbit  DIV_Mantissa4_UART5_BRR_bit at UART5_BRR.B8;
    sbit  DIV_Mantissa5_UART5_BRR_bit at UART5_BRR.B9;
    sbit  DIV_Mantissa6_UART5_BRR_bit at UART5_BRR.B10;
    sbit  DIV_Mantissa7_UART5_BRR_bit at UART5_BRR.B11;
    sbit  DIV_Mantissa8_UART5_BRR_bit at UART5_BRR.B12;
    sbit  DIV_Mantissa9_UART5_BRR_bit at UART5_BRR.B13;
    sbit  DIV_Mantissa10_UART5_BRR_bit at UART5_BRR.B14;
    sbit  DIV_Mantissa11_UART5_BRR_bit at UART5_BRR.B15;

sfr unsigned long   volatile UART5_CR1            absolute 0x4000500C;
    sbit  SBK_UART5_CR1_bit at UART5_CR1.B0;
    sbit  RWU_UART5_CR1_bit at UART5_CR1.B1;
    sbit  RE_UART5_CR1_bit at UART5_CR1.B2;
    sbit  TE_UART5_CR1_bit at UART5_CR1.B3;
    sbit  IDLEIE_UART5_CR1_bit at UART5_CR1.B4;
    sbit  RXNEIE_UART5_CR1_bit at UART5_CR1.B5;
    sbit  TCIE_UART5_CR1_bit at UART5_CR1.B6;
    sbit  TXEIE_UART5_CR1_bit at UART5_CR1.B7;
    sbit  PEIE_UART5_CR1_bit at UART5_CR1.B8;
    sbit  PS_UART5_CR1_bit at UART5_CR1.B9;
    sbit  PCE_UART5_CR1_bit at UART5_CR1.B10;
    sbit  WAKE_UART5_CR1_bit at UART5_CR1.B11;
    sbit  M_UART5_CR1_bit at UART5_CR1.B12;
    sbit  UE_UART5_CR1_bit at UART5_CR1.B13;

sfr unsigned long   volatile UART5_CR2            absolute 0x40005010;
    sbit  ADD0_UART5_CR2_bit at UART5_CR2.B0;
    sbit  ADD1_UART5_CR2_bit at UART5_CR2.B1;
    sbit  ADD2_UART5_CR2_bit at UART5_CR2.B2;
    sbit  ADD3_UART5_CR2_bit at UART5_CR2.B3;
    sbit  LBDL_UART5_CR2_bit at UART5_CR2.B5;
    sbit  LBDIE_UART5_CR2_bit at UART5_CR2.B6;
    sbit  STOP0_UART5_CR2_bit at UART5_CR2.B12;
    sbit  STOP1_UART5_CR2_bit at UART5_CR2.B13;
    sbit  LINEN_UART5_CR2_bit at UART5_CR2.B14;

sfr unsigned long   volatile UART5_CR3            absolute 0x40005014;
    sbit  EIE_UART5_CR3_bit at UART5_CR3.B0;
    sbit  IREN_UART5_CR3_bit at UART5_CR3.B1;
    sbit  IRLP_UART5_CR3_bit at UART5_CR3.B2;
    sbit  HDSEL_UART5_CR3_bit at UART5_CR3.B3;
    sbit  DMAT_UART5_CR3_bit at UART5_CR3.B7;

sfr unsigned long   volatile CRC_DR               absolute 0x40023000;
    sbit  DR0_CRC_DR_bit at CRC_DR.B0;
    sbit  DR1_CRC_DR_bit at CRC_DR.B1;
    sbit  DR2_CRC_DR_bit at CRC_DR.B2;
    sbit  DR3_CRC_DR_bit at CRC_DR.B3;
    sbit  DR4_CRC_DR_bit at CRC_DR.B4;
    sbit  DR5_CRC_DR_bit at CRC_DR.B5;
    sbit  DR6_CRC_DR_bit at CRC_DR.B6;
    sbit  DR7_CRC_DR_bit at CRC_DR.B7;
    sbit  DR8_CRC_DR_bit at CRC_DR.B8;
    sbit  DR9_CRC_DR_bit at CRC_DR.B9;
    sbit  DR10_CRC_DR_bit at CRC_DR.B10;
    sbit  DR11_CRC_DR_bit at CRC_DR.B11;
    sbit  DR12_CRC_DR_bit at CRC_DR.B12;
    sbit  DR13_CRC_DR_bit at CRC_DR.B13;
    sbit  DR14_CRC_DR_bit at CRC_DR.B14;
    sbit  DR15_CRC_DR_bit at CRC_DR.B15;
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

sfr unsigned long   volatile CRC_CR               absolute 0x40023008;
    const register unsigned short int RESET_ = 0;
    sbit  RESET_bit at CRC_CR.B0;

sfr unsigned long   volatile TIM15_CR1            absolute 0x40014000;
    sbit  CKD0_TIM15_CR1_bit at TIM15_CR1.B8;
    sbit  CKD1_TIM15_CR1_bit at TIM15_CR1.B9;
    sbit  ARPE_TIM15_CR1_bit at TIM15_CR1.B7;
    sbit  OPM_TIM15_CR1_bit at TIM15_CR1.B3;
    sbit  URS_TIM15_CR1_bit at TIM15_CR1.B2;
    sbit  UDIS_TIM15_CR1_bit at TIM15_CR1.B1;
    sbit  CEN_TIM15_CR1_bit at TIM15_CR1.B0;

sfr unsigned long   volatile TIM15_CR2            absolute 0x40014004;
    sbit  OIS2_TIM15_CR2_bit at TIM15_CR2.B10;
    sbit  OIS1N_TIM15_CR2_bit at TIM15_CR2.B9;
    sbit  OIS1_TIM15_CR2_bit at TIM15_CR2.B8;
    sbit  MMS0_TIM15_CR2_bit at TIM15_CR2.B4;
    sbit  MMS1_TIM15_CR2_bit at TIM15_CR2.B5;
    sbit  MMS2_TIM15_CR2_bit at TIM15_CR2.B6;
    sbit  CCDS_TIM15_CR2_bit at TIM15_CR2.B3;
    sbit  CCUS_TIM15_CR2_bit at TIM15_CR2.B2;
    sbit  CCPC_TIM15_CR2_bit at TIM15_CR2.B0;

sfr unsigned long   volatile TIM15_SMCR           absolute 0x40014008;
    sbit  MSM_TIM15_SMCR_bit at TIM15_SMCR.B7;
    sbit  TS0_TIM15_SMCR_bit at TIM15_SMCR.B4;
    sbit  TS1_TIM15_SMCR_bit at TIM15_SMCR.B5;
    sbit  TS2_TIM15_SMCR_bit at TIM15_SMCR.B6;
    sbit  SMS0_TIM15_SMCR_bit at TIM15_SMCR.B0;
    sbit  SMS1_TIM15_SMCR_bit at TIM15_SMCR.B1;
    sbit  SMS2_TIM15_SMCR_bit at TIM15_SMCR.B2;

sfr unsigned long   volatile TIM15_DIER           absolute 0x4001400C;
    sbit  TDE_TIM15_DIER_bit at TIM15_DIER.B14;
    sbit  CC2DE_TIM15_DIER_bit at TIM15_DIER.B10;
    sbit  CC1DE_TIM15_DIER_bit at TIM15_DIER.B9;
    sbit  UDE_TIM15_DIER_bit at TIM15_DIER.B8;
    sbit  BIE_TIM15_DIER_bit at TIM15_DIER.B7;
    sbit  TIE_TIM15_DIER_bit at TIM15_DIER.B6;
    sbit  COMIE_TIM15_DIER_bit at TIM15_DIER.B5;
    sbit  CC2IE_TIM15_DIER_bit at TIM15_DIER.B2;
    sbit  CC1IE_TIM15_DIER_bit at TIM15_DIER.B1;
    sbit  UIE_TIM15_DIER_bit at TIM15_DIER.B0;

sfr unsigned long   volatile TIM15_SR             absolute 0x40014010;
    sbit  CC2OF_TIM15_SR_bit at TIM15_SR.B10;
    sbit  CC1OF_TIM15_SR_bit at TIM15_SR.B9;
    sbit  BIF_TIM15_SR_bit at TIM15_SR.B7;
    sbit  TIF_TIM15_SR_bit at TIM15_SR.B6;
    sbit  COMIF_TIM15_SR_bit at TIM15_SR.B5;
    sbit  CC2IF_TIM15_SR_bit at TIM15_SR.B2;
    sbit  CC1IF_TIM15_SR_bit at TIM15_SR.B1;
    sbit  UIF_TIM15_SR_bit at TIM15_SR.B0;

sfr unsigned long   volatile TIM15_EGR            absolute 0x40014014;
    sbit  BG_TIM15_EGR_bit at TIM15_EGR.B7;
    sbit  TG_TIM15_EGR_bit at TIM15_EGR.B6;
    sbit  COMG_TIM15_EGR_bit at TIM15_EGR.B5;
    sbit  CC2G_TIM15_EGR_bit at TIM15_EGR.B2;
    sbit  CC1G_TIM15_EGR_bit at TIM15_EGR.B1;
    sbit  UG_TIM15_EGR_bit at TIM15_EGR.B0;

sfr unsigned long   volatile TIM15_CCMR1_Output   absolute 0x40014018;
    sbit  OC2M0_TIM15_CCMR1_Output_bit at TIM15_CCMR1_Output.B12;
    sbit  OC2M1_TIM15_CCMR1_Output_bit at TIM15_CCMR1_Output.B13;
    sbit  OC2M2_TIM15_CCMR1_Output_bit at TIM15_CCMR1_Output.B14;
    sbit  OC2PE_TIM15_CCMR1_Output_bit at TIM15_CCMR1_Output.B11;
    sbit  OC2FE_TIM15_CCMR1_Output_bit at TIM15_CCMR1_Output.B10;
    sbit  CC2S0_TIM15_CCMR1_Output_bit at TIM15_CCMR1_Output.B8;
    sbit  CC2S1_TIM15_CCMR1_Output_bit at TIM15_CCMR1_Output.B9;
    sbit  OC1M0_TIM15_CCMR1_Output_bit at TIM15_CCMR1_Output.B4;
    sbit  OC1M1_TIM15_CCMR1_Output_bit at TIM15_CCMR1_Output.B5;
    sbit  OC1M2_TIM15_CCMR1_Output_bit at TIM15_CCMR1_Output.B6;
    sbit  OC1PE_TIM15_CCMR1_Output_bit at TIM15_CCMR1_Output.B3;
    sbit  OC1FE_TIM15_CCMR1_Output_bit at TIM15_CCMR1_Output.B2;
    sbit  CC1S0_TIM15_CCMR1_Output_bit at TIM15_CCMR1_Output.B0;
    sbit  CC1S1_TIM15_CCMR1_Output_bit at TIM15_CCMR1_Output.B1;

sfr unsigned long   volatile TIM15_CCMR1_Input    absolute 0x40014018;
    sbit  IC2F0_TIM15_CCMR1_Input_bit at TIM15_CCMR1_Input.B12;
    sbit  IC2F1_TIM15_CCMR1_Input_bit at TIM15_CCMR1_Input.B13;
    sbit  IC2F2_TIM15_CCMR1_Input_bit at TIM15_CCMR1_Input.B14;
    sbit  IC2F3_TIM15_CCMR1_Input_bit at TIM15_CCMR1_Input.B15;
    sbit  IC2PSC0_TIM15_CCMR1_Input_bit at TIM15_CCMR1_Input.B10;
    sbit  IC2PSC1_TIM15_CCMR1_Input_bit at TIM15_CCMR1_Input.B11;
    sbit  CC2S0_TIM15_CCMR1_Input_bit at TIM15_CCMR1_Input.B8;
    sbit  CC2S1_TIM15_CCMR1_Input_bit at TIM15_CCMR1_Input.B9;
    sbit  IC1F0_TIM15_CCMR1_Input_bit at TIM15_CCMR1_Input.B4;
    sbit  IC1F1_TIM15_CCMR1_Input_bit at TIM15_CCMR1_Input.B5;
    sbit  IC1F2_TIM15_CCMR1_Input_bit at TIM15_CCMR1_Input.B6;
    sbit  IC1F3_TIM15_CCMR1_Input_bit at TIM15_CCMR1_Input.B7;
    sbit  IC1PSC0_TIM15_CCMR1_Input_bit at TIM15_CCMR1_Input.B2;
    sbit  IC1PSC1_TIM15_CCMR1_Input_bit at TIM15_CCMR1_Input.B3;
    sbit  CC1S0_TIM15_CCMR1_Input_bit at TIM15_CCMR1_Input.B0;
    sbit  CC1S1_TIM15_CCMR1_Input_bit at TIM15_CCMR1_Input.B1;

sfr unsigned long   volatile TIM15_CCER           absolute 0x40014020;
    sbit  CC2NP_TIM15_CCER_bit at TIM15_CCER.B7;
    sbit  CC2P_TIM15_CCER_bit at TIM15_CCER.B5;
    sbit  CC2E_TIM15_CCER_bit at TIM15_CCER.B4;
    sbit  CC1NP_TIM15_CCER_bit at TIM15_CCER.B3;
    sbit  CC1NE_TIM15_CCER_bit at TIM15_CCER.B2;
    sbit  CC1P_TIM15_CCER_bit at TIM15_CCER.B1;
    sbit  CC1E_TIM15_CCER_bit at TIM15_CCER.B0;

sfr unsigned long   volatile TIM15_CNT            absolute 0x40014024;
    sbit  CNT0_TIM15_CNT_bit at TIM15_CNT.B0;
    sbit  CNT1_TIM15_CNT_bit at TIM15_CNT.B1;
    sbit  CNT2_TIM15_CNT_bit at TIM15_CNT.B2;
    sbit  CNT3_TIM15_CNT_bit at TIM15_CNT.B3;
    sbit  CNT4_TIM15_CNT_bit at TIM15_CNT.B4;
    sbit  CNT5_TIM15_CNT_bit at TIM15_CNT.B5;
    sbit  CNT6_TIM15_CNT_bit at TIM15_CNT.B6;
    sbit  CNT7_TIM15_CNT_bit at TIM15_CNT.B7;
    sbit  CNT8_TIM15_CNT_bit at TIM15_CNT.B8;
    sbit  CNT9_TIM15_CNT_bit at TIM15_CNT.B9;
    sbit  CNT10_TIM15_CNT_bit at TIM15_CNT.B10;
    sbit  CNT11_TIM15_CNT_bit at TIM15_CNT.B11;
    sbit  CNT12_TIM15_CNT_bit at TIM15_CNT.B12;
    sbit  CNT13_TIM15_CNT_bit at TIM15_CNT.B13;
    sbit  CNT14_TIM15_CNT_bit at TIM15_CNT.B14;
    sbit  CNT15_TIM15_CNT_bit at TIM15_CNT.B15;

sfr unsigned long   volatile TIM15_PSC            absolute 0x40014028;
    sbit  PSC0_TIM15_PSC_bit at TIM15_PSC.B0;
    sbit  PSC1_TIM15_PSC_bit at TIM15_PSC.B1;
    sbit  PSC2_TIM15_PSC_bit at TIM15_PSC.B2;
    sbit  PSC3_TIM15_PSC_bit at TIM15_PSC.B3;
    sbit  PSC4_TIM15_PSC_bit at TIM15_PSC.B4;
    sbit  PSC5_TIM15_PSC_bit at TIM15_PSC.B5;
    sbit  PSC6_TIM15_PSC_bit at TIM15_PSC.B6;
    sbit  PSC7_TIM15_PSC_bit at TIM15_PSC.B7;
    sbit  PSC8_TIM15_PSC_bit at TIM15_PSC.B8;
    sbit  PSC9_TIM15_PSC_bit at TIM15_PSC.B9;
    sbit  PSC10_TIM15_PSC_bit at TIM15_PSC.B10;
    sbit  PSC11_TIM15_PSC_bit at TIM15_PSC.B11;
    sbit  PSC12_TIM15_PSC_bit at TIM15_PSC.B12;
    sbit  PSC13_TIM15_PSC_bit at TIM15_PSC.B13;
    sbit  PSC14_TIM15_PSC_bit at TIM15_PSC.B14;
    sbit  PSC15_TIM15_PSC_bit at TIM15_PSC.B15;

sfr unsigned long   volatile TIM15_ARR            absolute 0x4001402C;
    sbit  ARR0_TIM15_ARR_bit at TIM15_ARR.B0;
    sbit  ARR1_TIM15_ARR_bit at TIM15_ARR.B1;
    sbit  ARR2_TIM15_ARR_bit at TIM15_ARR.B2;
    sbit  ARR3_TIM15_ARR_bit at TIM15_ARR.B3;
    sbit  ARR4_TIM15_ARR_bit at TIM15_ARR.B4;
    sbit  ARR5_TIM15_ARR_bit at TIM15_ARR.B5;
    sbit  ARR6_TIM15_ARR_bit at TIM15_ARR.B6;
    sbit  ARR7_TIM15_ARR_bit at TIM15_ARR.B7;
    sbit  ARR8_TIM15_ARR_bit at TIM15_ARR.B8;
    sbit  ARR9_TIM15_ARR_bit at TIM15_ARR.B9;
    sbit  ARR10_TIM15_ARR_bit at TIM15_ARR.B10;
    sbit  ARR11_TIM15_ARR_bit at TIM15_ARR.B11;
    sbit  ARR12_TIM15_ARR_bit at TIM15_ARR.B12;
    sbit  ARR13_TIM15_ARR_bit at TIM15_ARR.B13;
    sbit  ARR14_TIM15_ARR_bit at TIM15_ARR.B14;
    sbit  ARR15_TIM15_ARR_bit at TIM15_ARR.B15;

sfr unsigned long   volatile TIM15_RCR            absolute 0x40014030;
    sbit  REP0_TIM15_RCR_bit at TIM15_RCR.B0;
    sbit  REP1_TIM15_RCR_bit at TIM15_RCR.B1;
    sbit  REP2_TIM15_RCR_bit at TIM15_RCR.B2;
    sbit  REP3_TIM15_RCR_bit at TIM15_RCR.B3;
    sbit  REP4_TIM15_RCR_bit at TIM15_RCR.B4;
    sbit  REP5_TIM15_RCR_bit at TIM15_RCR.B5;
    sbit  REP6_TIM15_RCR_bit at TIM15_RCR.B6;
    sbit  REP7_TIM15_RCR_bit at TIM15_RCR.B7;

sfr unsigned long   volatile TIM15_CCR1           absolute 0x40014034;
    sbit  CCR10_TIM15_CCR1_bit at TIM15_CCR1.B0;
    sbit  CCR11_TIM15_CCR1_bit at TIM15_CCR1.B1;
    sbit  CCR12_TIM15_CCR1_bit at TIM15_CCR1.B2;
    sbit  CCR13_TIM15_CCR1_bit at TIM15_CCR1.B3;
    sbit  CCR14_TIM15_CCR1_bit at TIM15_CCR1.B4;
    sbit  CCR15_TIM15_CCR1_bit at TIM15_CCR1.B5;
    sbit  CCR16_TIM15_CCR1_bit at TIM15_CCR1.B6;
    sbit  CCR17_TIM15_CCR1_bit at TIM15_CCR1.B7;
    sbit  CCR18_TIM15_CCR1_bit at TIM15_CCR1.B8;
    sbit  CCR19_TIM15_CCR1_bit at TIM15_CCR1.B9;
    sbit  CCR110_TIM15_CCR1_bit at TIM15_CCR1.B10;
    sbit  CCR111_TIM15_CCR1_bit at TIM15_CCR1.B11;
    sbit  CCR112_TIM15_CCR1_bit at TIM15_CCR1.B12;
    sbit  CCR113_TIM15_CCR1_bit at TIM15_CCR1.B13;
    sbit  CCR114_TIM15_CCR1_bit at TIM15_CCR1.B14;
    sbit  CCR115_TIM15_CCR1_bit at TIM15_CCR1.B15;

sfr unsigned long   volatile TIM15_CCR2           absolute 0x40014038;
    sbit  CCR20_TIM15_CCR2_bit at TIM15_CCR2.B0;
    sbit  CCR21_TIM15_CCR2_bit at TIM15_CCR2.B1;
    sbit  CCR22_TIM15_CCR2_bit at TIM15_CCR2.B2;
    sbit  CCR23_TIM15_CCR2_bit at TIM15_CCR2.B3;
    sbit  CCR24_TIM15_CCR2_bit at TIM15_CCR2.B4;
    sbit  CCR25_TIM15_CCR2_bit at TIM15_CCR2.B5;
    sbit  CCR26_TIM15_CCR2_bit at TIM15_CCR2.B6;
    sbit  CCR27_TIM15_CCR2_bit at TIM15_CCR2.B7;
    sbit  CCR28_TIM15_CCR2_bit at TIM15_CCR2.B8;
    sbit  CCR29_TIM15_CCR2_bit at TIM15_CCR2.B9;
    sbit  CCR210_TIM15_CCR2_bit at TIM15_CCR2.B10;
    sbit  CCR211_TIM15_CCR2_bit at TIM15_CCR2.B11;
    sbit  CCR212_TIM15_CCR2_bit at TIM15_CCR2.B12;
    sbit  CCR213_TIM15_CCR2_bit at TIM15_CCR2.B13;
    sbit  CCR214_TIM15_CCR2_bit at TIM15_CCR2.B14;
    sbit  CCR215_TIM15_CCR2_bit at TIM15_CCR2.B15;

sfr unsigned long   volatile TIM15_BDTR           absolute 0x40014044;
    sbit  MOE_TIM15_BDTR_bit at TIM15_BDTR.B15;
    sbit  AOE_TIM15_BDTR_bit at TIM15_BDTR.B14;
    sbit  BKP_TIM15_BDTR_bit at TIM15_BDTR.B13;
    sbit  BKE_TIM15_BDTR_bit at TIM15_BDTR.B12;
    sbit  OSSR_TIM15_BDTR_bit at TIM15_BDTR.B11;
    sbit  OSSI_TIM15_BDTR_bit at TIM15_BDTR.B10;
    sbit  LOCK0_TIM15_BDTR_bit at TIM15_BDTR.B8;
    sbit  LOCK1_TIM15_BDTR_bit at TIM15_BDTR.B9;
    sbit  DTG0_TIM15_BDTR_bit at TIM15_BDTR.B0;
    sbit  DTG1_TIM15_BDTR_bit at TIM15_BDTR.B1;
    sbit  DTG2_TIM15_BDTR_bit at TIM15_BDTR.B2;
    sbit  DTG3_TIM15_BDTR_bit at TIM15_BDTR.B3;
    sbit  DTG4_TIM15_BDTR_bit at TIM15_BDTR.B4;
    sbit  DTG5_TIM15_BDTR_bit at TIM15_BDTR.B5;
    sbit  DTG6_TIM15_BDTR_bit at TIM15_BDTR.B6;
    sbit  DTG7_TIM15_BDTR_bit at TIM15_BDTR.B7;

sfr unsigned long   volatile TIM15_DCR            absolute 0x40014048;
    sbit  DBL0_TIM15_DCR_bit at TIM15_DCR.B8;
    sbit  DBL1_TIM15_DCR_bit at TIM15_DCR.B9;
    sbit  DBL2_TIM15_DCR_bit at TIM15_DCR.B10;
    sbit  DBL3_TIM15_DCR_bit at TIM15_DCR.B11;
    sbit  DBL4_TIM15_DCR_bit at TIM15_DCR.B12;
    sbit  DBA0_TIM15_DCR_bit at TIM15_DCR.B0;
    sbit  DBA1_TIM15_DCR_bit at TIM15_DCR.B1;
    sbit  DBA2_TIM15_DCR_bit at TIM15_DCR.B2;
    sbit  DBA3_TIM15_DCR_bit at TIM15_DCR.B3;
    sbit  DBA4_TIM15_DCR_bit at TIM15_DCR.B4;

sfr unsigned long   volatile TIM15_DMAR           absolute 0x4001404C;
    sbit  DMAB0_TIM15_DMAR_bit at TIM15_DMAR.B0;
    sbit  DMAB1_TIM15_DMAR_bit at TIM15_DMAR.B1;
    sbit  DMAB2_TIM15_DMAR_bit at TIM15_DMAR.B2;
    sbit  DMAB3_TIM15_DMAR_bit at TIM15_DMAR.B3;
    sbit  DMAB4_TIM15_DMAR_bit at TIM15_DMAR.B4;
    sbit  DMAB5_TIM15_DMAR_bit at TIM15_DMAR.B5;
    sbit  DMAB6_TIM15_DMAR_bit at TIM15_DMAR.B6;
    sbit  DMAB7_TIM15_DMAR_bit at TIM15_DMAR.B7;
    sbit  DMAB8_TIM15_DMAR_bit at TIM15_DMAR.B8;
    sbit  DMAB9_TIM15_DMAR_bit at TIM15_DMAR.B9;
    sbit  DMAB10_TIM15_DMAR_bit at TIM15_DMAR.B10;
    sbit  DMAB11_TIM15_DMAR_bit at TIM15_DMAR.B11;
    sbit  DMAB12_TIM15_DMAR_bit at TIM15_DMAR.B12;
    sbit  DMAB13_TIM15_DMAR_bit at TIM15_DMAR.B13;
    sbit  DMAB14_TIM15_DMAR_bit at TIM15_DMAR.B14;
    sbit  DMAB15_TIM15_DMAR_bit at TIM15_DMAR.B15;

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
    sbit  TI1S_TIM16_CR2_bit at TIM16_CR2.B7;
    sbit  MMS0_TIM16_CR2_bit at TIM16_CR2.B4;
    sbit  MMS1_TIM16_CR2_bit at TIM16_CR2.B5;
    sbit  MMS2_TIM16_CR2_bit at TIM16_CR2.B6;
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
    sbit  TI1S_TIM17_CR2_bit at TIM17_CR2.B7;
    sbit  MMS0_TIM17_CR2_bit at TIM17_CR2.B4;
    sbit  MMS1_TIM17_CR2_bit at TIM17_CR2.B5;
    sbit  MMS2_TIM17_CR2_bit at TIM17_CR2.B6;
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

sfr unsigned long   volatile CEC_CFGR             absolute 0x40007800;
    sbit  PE_CEC_CFGR_bit at CEC_CFGR.B0;
    const register unsigned short int IE = 1;
    sbit  IE_bit at CEC_CFGR.B1;
    const register unsigned short int BTEM = 2;
    sbit  BTEM_bit at CEC_CFGR.B2;
    const register unsigned short int BPEM = 3;
    sbit  BPEM_bit at CEC_CFGR.B3;

sfr unsigned long   volatile CEC_OAR              absolute 0x40007804;
    const register unsigned short int OA0 = 0;
    sbit  OA0_bit at CEC_OAR.B0;
    const register unsigned short int OA1 = 1;
    sbit  OA1_bit at CEC_OAR.B1;
    const register unsigned short int OA2 = 2;
    sbit  OA2_bit at CEC_OAR.B2;
    const register unsigned short int OA3 = 3;
    sbit  OA3_bit at CEC_OAR.B3;

sfr unsigned long   volatile CEC_PRES             absolute 0x40007808;
    const register unsigned short int PRESC0 = 0;
    sbit  PRESC0_bit at CEC_PRES.B0;
    const register unsigned short int PRESC1 = 1;
    sbit  PRESC1_bit at CEC_PRES.B1;
    const register unsigned short int PRESC2 = 2;
    sbit  PRESC2_bit at CEC_PRES.B2;
    const register unsigned short int PRESC3 = 3;
    sbit  PRESC3_bit at CEC_PRES.B3;
    const register unsigned short int PRESC4 = 4;
    sbit  PRESC4_bit at CEC_PRES.B4;
    const register unsigned short int PRESC5 = 5;
    sbit  PRESC5_bit at CEC_PRES.B5;
    const register unsigned short int PRESC6 = 6;
    sbit  PRESC6_bit at CEC_PRES.B6;
    const register unsigned short int PRESC7 = 7;
    sbit  PRESC7_bit at CEC_PRES.B7;
    const register unsigned short int PRESC8 = 8;
    sbit  PRESC8_bit at CEC_PRES.B8;
    const register unsigned short int PRESC9 = 9;
    sbit  PRESC9_bit at CEC_PRES.B9;
    const register unsigned short int PRESC10 = 10;
    sbit  PRESC10_bit at CEC_PRES.B10;
    const register unsigned short int PRESC11 = 11;
    sbit  PRESC11_bit at CEC_PRES.B11;
    const register unsigned short int PRESC12 = 12;
    sbit  PRESC12_bit at CEC_PRES.B12;
    const register unsigned short int PRESC13 = 13;
    sbit  PRESC13_bit at CEC_PRES.B13;

sfr unsigned long   volatile CEC_ESR              absolute 0x4000780C;
    const register unsigned short int BTE = 0;
    sbit  BTE_bit at CEC_ESR.B0;
    const register unsigned short int BPE = 1;
    sbit  BPE_bit at CEC_ESR.B1;
    const register unsigned short int RBTFE = 2;
    sbit  RBTFE_bit at CEC_ESR.B2;
    const register unsigned short int SBE = 3;
    sbit  SBE_bit at CEC_ESR.B3;
    const register unsigned short int ACKE = 4;
    sbit  ACKE_bit at CEC_ESR.B4;
    const register unsigned short int LINE_ = 5;
    sbit  LINE_bit at CEC_ESR.B5;
    const register unsigned short int TBTFE = 6;
    sbit  TBTFE_bit at CEC_ESR.B6;

sfr unsigned long   volatile CEC_CSR              absolute 0x40007810;
    const register unsigned short int TSOM = 0;
    sbit  TSOM_bit at CEC_CSR.B0;
    const register unsigned short int TEOM = 1;
    sbit  TEOM_bit at CEC_CSR.B1;
    const register unsigned short int TERR = 2;
    sbit  TERR_bit at CEC_CSR.B2;
    const register unsigned short int TBTRF = 3;
    sbit  TBTRF_bit at CEC_CSR.B3;
    const register unsigned short int RSOM = 4;
    sbit  RSOM_bit at CEC_CSR.B4;
    const register unsigned short int REOM = 5;
    sbit  REOM_bit at CEC_CSR.B5;
    const register unsigned short int RERR = 6;
    sbit  RERR_bit at CEC_CSR.B6;
    const register unsigned short int RBTF = 7;
    sbit  RBTF_bit at CEC_CSR.B7;

sfr unsigned long   volatile CEC_TXD              absolute 0x40007814;
    const register unsigned short int TXD0 = 0;
    sbit  TXD0_bit at CEC_TXD.B0;
    const register unsigned short int TXD1 = 1;
    sbit  TXD1_bit at CEC_TXD.B1;
    const register unsigned short int TXD2 = 2;
    sbit  TXD2_bit at CEC_TXD.B2;
    const register unsigned short int TXD3 = 3;
    sbit  TXD3_bit at CEC_TXD.B3;
    const register unsigned short int TXD4 = 4;
    sbit  TXD4_bit at CEC_TXD.B4;
    const register unsigned short int TXD5 = 5;
    sbit  TXD5_bit at CEC_TXD.B5;
    const register unsigned short int TXD6 = 6;
    sbit  TXD6_bit at CEC_TXD.B6;
    const register unsigned short int TXD7 = 7;
    sbit  TXD7_bit at CEC_TXD.B7;

sfr unsigned long   volatile CEC_RXD              absolute 0x40007818;
    const register unsigned short int RXD0 = 0;
    sbit  RXD0_bit at CEC_RXD.B0;
    const register unsigned short int RXD1 = 1;
    sbit  RXD1_bit at CEC_RXD.B1;
    const register unsigned short int RXD2 = 2;
    sbit  RXD2_bit at CEC_RXD.B2;
    const register unsigned short int RXD3 = 3;
    sbit  RXD3_bit at CEC_RXD.B3;
    const register unsigned short int RXD4 = 4;
    sbit  RXD4_bit at CEC_RXD.B4;
    const register unsigned short int RXD5 = 5;
    sbit  RXD5_bit at CEC_RXD.B5;
    const register unsigned short int RXD6 = 6;
    sbit  RXD6_bit at CEC_RXD.B6;
    const register unsigned short int RXD7 = 7;
    sbit  RXD7_bit at CEC_RXD.B7;

sfr far unsigned long   volatile NVIC_ICTR            absolute 0xE000E004;
    const register unsigned short int INTLINESNUM0 = 0;
    sbit  INTLINESNUM0_bit at NVIC_ICTR.B0;
    const register unsigned short int INTLINESNUM1 = 1;
    sbit  INTLINESNUM1_bit at NVIC_ICTR.B1;
    const register unsigned short int INTLINESNUM2 = 2;
    sbit  INTLINESNUM2_bit at NVIC_ICTR.B2;
    const register unsigned short int INTLINESNUM3 = 3;
    sbit  INTLINESNUM3_bit at NVIC_ICTR.B3;

sfr far unsigned long   volatile NVIC_STIR            absolute 0xE000EF00;
    const register unsigned short int INTID0 = 0;
    sbit  INTID0_bit at NVIC_STIR.B0;
    const register unsigned short int INTID1 = 1;
    sbit  INTID1_bit at NVIC_STIR.B1;
    const register unsigned short int INTID2 = 2;
    sbit  INTID2_bit at NVIC_STIR.B2;
    const register unsigned short int INTID3 = 3;
    sbit  INTID3_bit at NVIC_STIR.B3;
    const register unsigned short int INTID4 = 4;
    sbit  INTID4_bit at NVIC_STIR.B4;
    const register unsigned short int INTID5 = 5;
    sbit  INTID5_bit at NVIC_STIR.B5;
    const register unsigned short int INTID6 = 6;
    sbit  INTID6_bit at NVIC_STIR.B6;
    const register unsigned short int INTID7 = 7;
    sbit  INTID7_bit at NVIC_STIR.B7;
    const register unsigned short int INTID8 = 8;
    sbit  INTID8_bit at NVIC_STIR.B8;

sfr far unsigned long   volatile NVIC_ISER0           absolute 0xE000E100;
    const register unsigned short int SETENA0 = 0;
    sbit  SETENA0_bit at NVIC_ISER0.B0;
    const register unsigned short int SETENA1 = 1;
    sbit  SETENA1_bit at NVIC_ISER0.B1;
    const register unsigned short int SETENA2 = 2;
    sbit  SETENA2_bit at NVIC_ISER0.B2;
    const register unsigned short int SETENA3 = 3;
    sbit  SETENA3_bit at NVIC_ISER0.B3;
    const register unsigned short int SETENA4 = 4;
    sbit  SETENA4_bit at NVIC_ISER0.B4;
    const register unsigned short int SETENA5 = 5;
    sbit  SETENA5_bit at NVIC_ISER0.B5;
    const register unsigned short int SETENA6 = 6;
    sbit  SETENA6_bit at NVIC_ISER0.B6;
    const register unsigned short int SETENA7 = 7;
    sbit  SETENA7_bit at NVIC_ISER0.B7;
    const register unsigned short int SETENA8 = 8;
    sbit  SETENA8_bit at NVIC_ISER0.B8;
    const register unsigned short int SETENA9 = 9;
    sbit  SETENA9_bit at NVIC_ISER0.B9;
    const register unsigned short int SETENA10 = 10;
    sbit  SETENA10_bit at NVIC_ISER0.B10;
    const register unsigned short int SETENA11 = 11;
    sbit  SETENA11_bit at NVIC_ISER0.B11;
    const register unsigned short int SETENA12 = 12;
    sbit  SETENA12_bit at NVIC_ISER0.B12;
    const register unsigned short int SETENA13 = 13;
    sbit  SETENA13_bit at NVIC_ISER0.B13;
    const register unsigned short int SETENA14 = 14;
    sbit  SETENA14_bit at NVIC_ISER0.B14;
    const register unsigned short int SETENA15 = 15;
    sbit  SETENA15_bit at NVIC_ISER0.B15;
    const register unsigned short int SETENA16 = 16;
    sbit  SETENA16_bit at NVIC_ISER0.B16;
    const register unsigned short int SETENA17 = 17;
    sbit  SETENA17_bit at NVIC_ISER0.B17;
    const register unsigned short int SETENA18 = 18;
    sbit  SETENA18_bit at NVIC_ISER0.B18;
    const register unsigned short int SETENA19 = 19;
    sbit  SETENA19_bit at NVIC_ISER0.B19;
    const register unsigned short int SETENA20 = 20;
    sbit  SETENA20_bit at NVIC_ISER0.B20;
    const register unsigned short int SETENA21 = 21;
    sbit  SETENA21_bit at NVIC_ISER0.B21;
    const register unsigned short int SETENA22 = 22;
    sbit  SETENA22_bit at NVIC_ISER0.B22;
    const register unsigned short int SETENA23 = 23;
    sbit  SETENA23_bit at NVIC_ISER0.B23;
    const register unsigned short int SETENA24 = 24;
    sbit  SETENA24_bit at NVIC_ISER0.B24;
    const register unsigned short int SETENA25 = 25;
    sbit  SETENA25_bit at NVIC_ISER0.B25;
    const register unsigned short int SETENA26 = 26;
    sbit  SETENA26_bit at NVIC_ISER0.B26;
    const register unsigned short int SETENA27 = 27;
    sbit  SETENA27_bit at NVIC_ISER0.B27;
    const register unsigned short int SETENA28 = 28;
    sbit  SETENA28_bit at NVIC_ISER0.B28;
    const register unsigned short int SETENA29 = 29;
    sbit  SETENA29_bit at NVIC_ISER0.B29;
    const register unsigned short int SETENA30 = 30;
    sbit  SETENA30_bit at NVIC_ISER0.B30;
    const register unsigned short int SETENA31 = 31;
    sbit  SETENA31_bit at NVIC_ISER0.B31;

sfr far unsigned long   volatile NVIC_ISER1           absolute 0xE000E104;
    sbit  SETENA0_NVIC_ISER1_bit at NVIC_ISER1.B0;
    sbit  SETENA1_NVIC_ISER1_bit at NVIC_ISER1.B1;
    sbit  SETENA2_NVIC_ISER1_bit at NVIC_ISER1.B2;
    sbit  SETENA3_NVIC_ISER1_bit at NVIC_ISER1.B3;
    sbit  SETENA4_NVIC_ISER1_bit at NVIC_ISER1.B4;
    sbit  SETENA5_NVIC_ISER1_bit at NVIC_ISER1.B5;
    sbit  SETENA6_NVIC_ISER1_bit at NVIC_ISER1.B6;
    sbit  SETENA7_NVIC_ISER1_bit at NVIC_ISER1.B7;
    sbit  SETENA8_NVIC_ISER1_bit at NVIC_ISER1.B8;
    sbit  SETENA9_NVIC_ISER1_bit at NVIC_ISER1.B9;
    sbit  SETENA10_NVIC_ISER1_bit at NVIC_ISER1.B10;
    sbit  SETENA11_NVIC_ISER1_bit at NVIC_ISER1.B11;
    sbit  SETENA12_NVIC_ISER1_bit at NVIC_ISER1.B12;
    sbit  SETENA13_NVIC_ISER1_bit at NVIC_ISER1.B13;
    sbit  SETENA14_NVIC_ISER1_bit at NVIC_ISER1.B14;
    sbit  SETENA15_NVIC_ISER1_bit at NVIC_ISER1.B15;
    sbit  SETENA16_NVIC_ISER1_bit at NVIC_ISER1.B16;
    sbit  SETENA17_NVIC_ISER1_bit at NVIC_ISER1.B17;
    sbit  SETENA18_NVIC_ISER1_bit at NVIC_ISER1.B18;
    sbit  SETENA19_NVIC_ISER1_bit at NVIC_ISER1.B19;
    sbit  SETENA20_NVIC_ISER1_bit at NVIC_ISER1.B20;
    sbit  SETENA21_NVIC_ISER1_bit at NVIC_ISER1.B21;
    sbit  SETENA22_NVIC_ISER1_bit at NVIC_ISER1.B22;
    sbit  SETENA23_NVIC_ISER1_bit at NVIC_ISER1.B23;
    sbit  SETENA24_NVIC_ISER1_bit at NVIC_ISER1.B24;
    sbit  SETENA25_NVIC_ISER1_bit at NVIC_ISER1.B25;
    sbit  SETENA26_NVIC_ISER1_bit at NVIC_ISER1.B26;
    sbit  SETENA27_NVIC_ISER1_bit at NVIC_ISER1.B27;
    sbit  SETENA28_NVIC_ISER1_bit at NVIC_ISER1.B28;
    sbit  SETENA29_NVIC_ISER1_bit at NVIC_ISER1.B29;
    sbit  SETENA30_NVIC_ISER1_bit at NVIC_ISER1.B30;
    sbit  SETENA31_NVIC_ISER1_bit at NVIC_ISER1.B31;

sfr far unsigned long   volatile NVIC_ISER2           absolute 0xE000E108;
    sbit  SETENA0_NVIC_ISER2_bit at NVIC_ISER2.B0;
    sbit  SETENA1_NVIC_ISER2_bit at NVIC_ISER2.B1;
    sbit  SETENA2_NVIC_ISER2_bit at NVIC_ISER2.B2;
    sbit  SETENA3_NVIC_ISER2_bit at NVIC_ISER2.B3;
    sbit  SETENA4_NVIC_ISER2_bit at NVIC_ISER2.B4;
    sbit  SETENA5_NVIC_ISER2_bit at NVIC_ISER2.B5;
    sbit  SETENA6_NVIC_ISER2_bit at NVIC_ISER2.B6;
    sbit  SETENA7_NVIC_ISER2_bit at NVIC_ISER2.B7;
    sbit  SETENA8_NVIC_ISER2_bit at NVIC_ISER2.B8;
    sbit  SETENA9_NVIC_ISER2_bit at NVIC_ISER2.B9;
    sbit  SETENA10_NVIC_ISER2_bit at NVIC_ISER2.B10;
    sbit  SETENA11_NVIC_ISER2_bit at NVIC_ISER2.B11;
    sbit  SETENA12_NVIC_ISER2_bit at NVIC_ISER2.B12;
    sbit  SETENA13_NVIC_ISER2_bit at NVIC_ISER2.B13;
    sbit  SETENA14_NVIC_ISER2_bit at NVIC_ISER2.B14;
    sbit  SETENA15_NVIC_ISER2_bit at NVIC_ISER2.B15;

sfr far unsigned long   volatile NVIC_ICER0           absolute 0xE000E180;
    const register unsigned short int CLRENA0 = 0;
    sbit  CLRENA0_bit at NVIC_ICER0.B0;
    const register unsigned short int CLRENA1 = 1;
    sbit  CLRENA1_bit at NVIC_ICER0.B1;
    const register unsigned short int CLRENA2 = 2;
    sbit  CLRENA2_bit at NVIC_ICER0.B2;
    const register unsigned short int CLRENA3 = 3;
    sbit  CLRENA3_bit at NVIC_ICER0.B3;
    const register unsigned short int CLRENA4 = 4;
    sbit  CLRENA4_bit at NVIC_ICER0.B4;
    const register unsigned short int CLRENA5 = 5;
    sbit  CLRENA5_bit at NVIC_ICER0.B5;
    const register unsigned short int CLRENA6 = 6;
    sbit  CLRENA6_bit at NVIC_ICER0.B6;
    const register unsigned short int CLRENA7 = 7;
    sbit  CLRENA7_bit at NVIC_ICER0.B7;
    const register unsigned short int CLRENA8 = 8;
    sbit  CLRENA8_bit at NVIC_ICER0.B8;
    const register unsigned short int CLRENA9 = 9;
    sbit  CLRENA9_bit at NVIC_ICER0.B9;
    const register unsigned short int CLRENA10 = 10;
    sbit  CLRENA10_bit at NVIC_ICER0.B10;
    const register unsigned short int CLRENA11 = 11;
    sbit  CLRENA11_bit at NVIC_ICER0.B11;
    const register unsigned short int CLRENA12 = 12;
    sbit  CLRENA12_bit at NVIC_ICER0.B12;
    const register unsigned short int CLRENA13 = 13;
    sbit  CLRENA13_bit at NVIC_ICER0.B13;
    const register unsigned short int CLRENA14 = 14;
    sbit  CLRENA14_bit at NVIC_ICER0.B14;
    const register unsigned short int CLRENA15 = 15;
    sbit  CLRENA15_bit at NVIC_ICER0.B15;
    const register unsigned short int CLRENA16 = 16;
    sbit  CLRENA16_bit at NVIC_ICER0.B16;
    const register unsigned short int CLRENA17 = 17;
    sbit  CLRENA17_bit at NVIC_ICER0.B17;
    const register unsigned short int CLRENA18 = 18;
    sbit  CLRENA18_bit at NVIC_ICER0.B18;
    const register unsigned short int CLRENA19 = 19;
    sbit  CLRENA19_bit at NVIC_ICER0.B19;
    const register unsigned short int CLRENA20 = 20;
    sbit  CLRENA20_bit at NVIC_ICER0.B20;
    const register unsigned short int CLRENA21 = 21;
    sbit  CLRENA21_bit at NVIC_ICER0.B21;
    const register unsigned short int CLRENA22 = 22;
    sbit  CLRENA22_bit at NVIC_ICER0.B22;
    const register unsigned short int CLRENA23 = 23;
    sbit  CLRENA23_bit at NVIC_ICER0.B23;
    const register unsigned short int CLRENA24 = 24;
    sbit  CLRENA24_bit at NVIC_ICER0.B24;
    const register unsigned short int CLRENA25 = 25;
    sbit  CLRENA25_bit at NVIC_ICER0.B25;
    const register unsigned short int CLRENA26 = 26;
    sbit  CLRENA26_bit at NVIC_ICER0.B26;
    const register unsigned short int CLRENA27 = 27;
    sbit  CLRENA27_bit at NVIC_ICER0.B27;
    const register unsigned short int CLRENA28 = 28;
    sbit  CLRENA28_bit at NVIC_ICER0.B28;
    const register unsigned short int CLRENA29 = 29;
    sbit  CLRENA29_bit at NVIC_ICER0.B29;
    const register unsigned short int CLRENA30 = 30;
    sbit  CLRENA30_bit at NVIC_ICER0.B30;
    const register unsigned short int CLRENA31 = 31;
    sbit  CLRENA31_bit at NVIC_ICER0.B31;

sfr far unsigned long   volatile NVIC_ICER1           absolute 0xE000E184;
    sbit  CLRENA0_NVIC_ICER1_bit at NVIC_ICER1.B0;
    sbit  CLRENA1_NVIC_ICER1_bit at NVIC_ICER1.B1;
    sbit  CLRENA2_NVIC_ICER1_bit at NVIC_ICER1.B2;
    sbit  CLRENA3_NVIC_ICER1_bit at NVIC_ICER1.B3;
    sbit  CLRENA4_NVIC_ICER1_bit at NVIC_ICER1.B4;
    sbit  CLRENA5_NVIC_ICER1_bit at NVIC_ICER1.B5;
    sbit  CLRENA6_NVIC_ICER1_bit at NVIC_ICER1.B6;
    sbit  CLRENA7_NVIC_ICER1_bit at NVIC_ICER1.B7;
    sbit  CLRENA8_NVIC_ICER1_bit at NVIC_ICER1.B8;
    sbit  CLRENA9_NVIC_ICER1_bit at NVIC_ICER1.B9;
    sbit  CLRENA10_NVIC_ICER1_bit at NVIC_ICER1.B10;
    sbit  CLRENA11_NVIC_ICER1_bit at NVIC_ICER1.B11;
    sbit  CLRENA12_NVIC_ICER1_bit at NVIC_ICER1.B12;
    sbit  CLRENA13_NVIC_ICER1_bit at NVIC_ICER1.B13;
    sbit  CLRENA14_NVIC_ICER1_bit at NVIC_ICER1.B14;
    sbit  CLRENA15_NVIC_ICER1_bit at NVIC_ICER1.B15;
    sbit  CLRENA16_NVIC_ICER1_bit at NVIC_ICER1.B16;
    sbit  CLRENA17_NVIC_ICER1_bit at NVIC_ICER1.B17;
    sbit  CLRENA18_NVIC_ICER1_bit at NVIC_ICER1.B18;
    sbit  CLRENA19_NVIC_ICER1_bit at NVIC_ICER1.B19;
    sbit  CLRENA20_NVIC_ICER1_bit at NVIC_ICER1.B20;
    sbit  CLRENA21_NVIC_ICER1_bit at NVIC_ICER1.B21;
    sbit  CLRENA22_NVIC_ICER1_bit at NVIC_ICER1.B22;
    sbit  CLRENA23_NVIC_ICER1_bit at NVIC_ICER1.B23;
    sbit  CLRENA24_NVIC_ICER1_bit at NVIC_ICER1.B24;
    sbit  CLRENA25_NVIC_ICER1_bit at NVIC_ICER1.B25;
    sbit  CLRENA26_NVIC_ICER1_bit at NVIC_ICER1.B26;
    sbit  CLRENA27_NVIC_ICER1_bit at NVIC_ICER1.B27;
    sbit  CLRENA28_NVIC_ICER1_bit at NVIC_ICER1.B28;
    sbit  CLRENA29_NVIC_ICER1_bit at NVIC_ICER1.B29;
    sbit  CLRENA30_NVIC_ICER1_bit at NVIC_ICER1.B30;
    sbit  CLRENA31_NVIC_ICER1_bit at NVIC_ICER1.B31;

sfr far unsigned long   volatile NVIC_ICER2           absolute 0xE000E188;
    sbit  CLRENA0_NVIC_ICER2_bit at NVIC_ICER2.B0;
    sbit  CLRENA1_NVIC_ICER2_bit at NVIC_ICER2.B1;
    sbit  CLRENA2_NVIC_ICER2_bit at NVIC_ICER2.B2;
    sbit  CLRENA3_NVIC_ICER2_bit at NVIC_ICER2.B3;
    sbit  CLRENA4_NVIC_ICER2_bit at NVIC_ICER2.B4;
    sbit  CLRENA5_NVIC_ICER2_bit at NVIC_ICER2.B5;
    sbit  CLRENA6_NVIC_ICER2_bit at NVIC_ICER2.B6;
    sbit  CLRENA7_NVIC_ICER2_bit at NVIC_ICER2.B7;
    sbit  CLRENA8_NVIC_ICER2_bit at NVIC_ICER2.B8;
    sbit  CLRENA9_NVIC_ICER2_bit at NVIC_ICER2.B9;
    sbit  CLRENA10_NVIC_ICER2_bit at NVIC_ICER2.B10;
    sbit  CLRENA11_NVIC_ICER2_bit at NVIC_ICER2.B11;
    sbit  CLRENA12_NVIC_ICER2_bit at NVIC_ICER2.B12;
    sbit  CLRENA13_NVIC_ICER2_bit at NVIC_ICER2.B13;
    sbit  CLRENA14_NVIC_ICER2_bit at NVIC_ICER2.B14;
    sbit  CLRENA15_NVIC_ICER2_bit at NVIC_ICER2.B15;

sfr far unsigned long   volatile NVIC_ISPR0           absolute 0xE000E200;
    const register unsigned short int SETPEND0 = 0;
    sbit  SETPEND0_bit at NVIC_ISPR0.B0;
    const register unsigned short int SETPEND1 = 1;
    sbit  SETPEND1_bit at NVIC_ISPR0.B1;
    const register unsigned short int SETPEND2 = 2;
    sbit  SETPEND2_bit at NVIC_ISPR0.B2;
    const register unsigned short int SETPEND3 = 3;
    sbit  SETPEND3_bit at NVIC_ISPR0.B3;
    const register unsigned short int SETPEND4 = 4;
    sbit  SETPEND4_bit at NVIC_ISPR0.B4;
    const register unsigned short int SETPEND5 = 5;
    sbit  SETPEND5_bit at NVIC_ISPR0.B5;
    const register unsigned short int SETPEND6 = 6;
    sbit  SETPEND6_bit at NVIC_ISPR0.B6;
    const register unsigned short int SETPEND7 = 7;
    sbit  SETPEND7_bit at NVIC_ISPR0.B7;
    const register unsigned short int SETPEND8 = 8;
    sbit  SETPEND8_bit at NVIC_ISPR0.B8;
    const register unsigned short int SETPEND9 = 9;
    sbit  SETPEND9_bit at NVIC_ISPR0.B9;
    const register unsigned short int SETPEND10 = 10;
    sbit  SETPEND10_bit at NVIC_ISPR0.B10;
    const register unsigned short int SETPEND11 = 11;
    sbit  SETPEND11_bit at NVIC_ISPR0.B11;
    const register unsigned short int SETPEND12 = 12;
    sbit  SETPEND12_bit at NVIC_ISPR0.B12;
    const register unsigned short int SETPEND13 = 13;
    sbit  SETPEND13_bit at NVIC_ISPR0.B13;
    const register unsigned short int SETPEND14 = 14;
    sbit  SETPEND14_bit at NVIC_ISPR0.B14;
    const register unsigned short int SETPEND15 = 15;
    sbit  SETPEND15_bit at NVIC_ISPR0.B15;
    const register unsigned short int SETPEND16 = 16;
    sbit  SETPEND16_bit at NVIC_ISPR0.B16;
    const register unsigned short int SETPEND17 = 17;
    sbit  SETPEND17_bit at NVIC_ISPR0.B17;
    const register unsigned short int SETPEND18 = 18;
    sbit  SETPEND18_bit at NVIC_ISPR0.B18;
    const register unsigned short int SETPEND19 = 19;
    sbit  SETPEND19_bit at NVIC_ISPR0.B19;
    const register unsigned short int SETPEND20 = 20;
    sbit  SETPEND20_bit at NVIC_ISPR0.B20;
    const register unsigned short int SETPEND21 = 21;
    sbit  SETPEND21_bit at NVIC_ISPR0.B21;
    const register unsigned short int SETPEND22 = 22;
    sbit  SETPEND22_bit at NVIC_ISPR0.B22;
    const register unsigned short int SETPEND23 = 23;
    sbit  SETPEND23_bit at NVIC_ISPR0.B23;
    const register unsigned short int SETPEND24 = 24;
    sbit  SETPEND24_bit at NVIC_ISPR0.B24;
    const register unsigned short int SETPEND25 = 25;
    sbit  SETPEND25_bit at NVIC_ISPR0.B25;
    const register unsigned short int SETPEND26 = 26;
    sbit  SETPEND26_bit at NVIC_ISPR0.B26;
    const register unsigned short int SETPEND27 = 27;
    sbit  SETPEND27_bit at NVIC_ISPR0.B27;
    const register unsigned short int SETPEND28 = 28;
    sbit  SETPEND28_bit at NVIC_ISPR0.B28;
    const register unsigned short int SETPEND29 = 29;
    sbit  SETPEND29_bit at NVIC_ISPR0.B29;
    const register unsigned short int SETPEND30 = 30;
    sbit  SETPEND30_bit at NVIC_ISPR0.B30;
    const register unsigned short int SETPEND31 = 31;
    sbit  SETPEND31_bit at NVIC_ISPR0.B31;

sfr far unsigned long   volatile NVIC_ISPR1           absolute 0xE000E204;
    sbit  SETPEND0_NVIC_ISPR1_bit at NVIC_ISPR1.B0;
    sbit  SETPEND1_NVIC_ISPR1_bit at NVIC_ISPR1.B1;
    sbit  SETPEND2_NVIC_ISPR1_bit at NVIC_ISPR1.B2;
    sbit  SETPEND3_NVIC_ISPR1_bit at NVIC_ISPR1.B3;
    sbit  SETPEND4_NVIC_ISPR1_bit at NVIC_ISPR1.B4;
    sbit  SETPEND5_NVIC_ISPR1_bit at NVIC_ISPR1.B5;
    sbit  SETPEND6_NVIC_ISPR1_bit at NVIC_ISPR1.B6;
    sbit  SETPEND7_NVIC_ISPR1_bit at NVIC_ISPR1.B7;
    sbit  SETPEND8_NVIC_ISPR1_bit at NVIC_ISPR1.B8;
    sbit  SETPEND9_NVIC_ISPR1_bit at NVIC_ISPR1.B9;
    sbit  SETPEND10_NVIC_ISPR1_bit at NVIC_ISPR1.B10;
    sbit  SETPEND11_NVIC_ISPR1_bit at NVIC_ISPR1.B11;
    sbit  SETPEND12_NVIC_ISPR1_bit at NVIC_ISPR1.B12;
    sbit  SETPEND13_NVIC_ISPR1_bit at NVIC_ISPR1.B13;
    sbit  SETPEND14_NVIC_ISPR1_bit at NVIC_ISPR1.B14;
    sbit  SETPEND15_NVIC_ISPR1_bit at NVIC_ISPR1.B15;
    sbit  SETPEND16_NVIC_ISPR1_bit at NVIC_ISPR1.B16;
    sbit  SETPEND17_NVIC_ISPR1_bit at NVIC_ISPR1.B17;
    sbit  SETPEND18_NVIC_ISPR1_bit at NVIC_ISPR1.B18;
    sbit  SETPEND19_NVIC_ISPR1_bit at NVIC_ISPR1.B19;
    sbit  SETPEND20_NVIC_ISPR1_bit at NVIC_ISPR1.B20;
    sbit  SETPEND21_NVIC_ISPR1_bit at NVIC_ISPR1.B21;
    sbit  SETPEND22_NVIC_ISPR1_bit at NVIC_ISPR1.B22;
    sbit  SETPEND23_NVIC_ISPR1_bit at NVIC_ISPR1.B23;
    sbit  SETPEND24_NVIC_ISPR1_bit at NVIC_ISPR1.B24;
    sbit  SETPEND25_NVIC_ISPR1_bit at NVIC_ISPR1.B25;
    sbit  SETPEND26_NVIC_ISPR1_bit at NVIC_ISPR1.B26;
    sbit  SETPEND27_NVIC_ISPR1_bit at NVIC_ISPR1.B27;
    sbit  SETPEND28_NVIC_ISPR1_bit at NVIC_ISPR1.B28;
    sbit  SETPEND29_NVIC_ISPR1_bit at NVIC_ISPR1.B29;
    sbit  SETPEND30_NVIC_ISPR1_bit at NVIC_ISPR1.B30;
    sbit  SETPEND31_NVIC_ISPR1_bit at NVIC_ISPR1.B31;

sfr far unsigned long   volatile NVIC_ISPR2           absolute 0xE000E208;
    sbit  SETPEND0_NVIC_ISPR2_bit at NVIC_ISPR2.B0;
    sbit  SETPEND1_NVIC_ISPR2_bit at NVIC_ISPR2.B1;
    sbit  SETPEND2_NVIC_ISPR2_bit at NVIC_ISPR2.B2;
    sbit  SETPEND3_NVIC_ISPR2_bit at NVIC_ISPR2.B3;
    sbit  SETPEND4_NVIC_ISPR2_bit at NVIC_ISPR2.B4;
    sbit  SETPEND5_NVIC_ISPR2_bit at NVIC_ISPR2.B5;
    sbit  SETPEND6_NVIC_ISPR2_bit at NVIC_ISPR2.B6;
    sbit  SETPEND7_NVIC_ISPR2_bit at NVIC_ISPR2.B7;
    sbit  SETPEND8_NVIC_ISPR2_bit at NVIC_ISPR2.B8;
    sbit  SETPEND9_NVIC_ISPR2_bit at NVIC_ISPR2.B9;
    sbit  SETPEND10_NVIC_ISPR2_bit at NVIC_ISPR2.B10;
    sbit  SETPEND11_NVIC_ISPR2_bit at NVIC_ISPR2.B11;
    sbit  SETPEND12_NVIC_ISPR2_bit at NVIC_ISPR2.B12;
    sbit  SETPEND13_NVIC_ISPR2_bit at NVIC_ISPR2.B13;
    sbit  SETPEND14_NVIC_ISPR2_bit at NVIC_ISPR2.B14;
    sbit  SETPEND15_NVIC_ISPR2_bit at NVIC_ISPR2.B15;

sfr far unsigned long   volatile NVIC_ICPR0           absolute 0xE000E280;
    const register unsigned short int CLRPEND0 = 0;
    sbit  CLRPEND0_bit at NVIC_ICPR0.B0;
    const register unsigned short int CLRPEND1 = 1;
    sbit  CLRPEND1_bit at NVIC_ICPR0.B1;
    const register unsigned short int CLRPEND2 = 2;
    sbit  CLRPEND2_bit at NVIC_ICPR0.B2;
    const register unsigned short int CLRPEND3 = 3;
    sbit  CLRPEND3_bit at NVIC_ICPR0.B3;
    const register unsigned short int CLRPEND4 = 4;
    sbit  CLRPEND4_bit at NVIC_ICPR0.B4;
    const register unsigned short int CLRPEND5 = 5;
    sbit  CLRPEND5_bit at NVIC_ICPR0.B5;
    const register unsigned short int CLRPEND6 = 6;
    sbit  CLRPEND6_bit at NVIC_ICPR0.B6;
    const register unsigned short int CLRPEND7 = 7;
    sbit  CLRPEND7_bit at NVIC_ICPR0.B7;
    const register unsigned short int CLRPEND8 = 8;
    sbit  CLRPEND8_bit at NVIC_ICPR0.B8;
    const register unsigned short int CLRPEND9 = 9;
    sbit  CLRPEND9_bit at NVIC_ICPR0.B9;
    const register unsigned short int CLRPEND10 = 10;
    sbit  CLRPEND10_bit at NVIC_ICPR0.B10;
    const register unsigned short int CLRPEND11 = 11;
    sbit  CLRPEND11_bit at NVIC_ICPR0.B11;
    const register unsigned short int CLRPEND12 = 12;
    sbit  CLRPEND12_bit at NVIC_ICPR0.B12;
    const register unsigned short int CLRPEND13 = 13;
    sbit  CLRPEND13_bit at NVIC_ICPR0.B13;
    const register unsigned short int CLRPEND14 = 14;
    sbit  CLRPEND14_bit at NVIC_ICPR0.B14;
    const register unsigned short int CLRPEND15 = 15;
    sbit  CLRPEND15_bit at NVIC_ICPR0.B15;
    const register unsigned short int CLRPEND16 = 16;
    sbit  CLRPEND16_bit at NVIC_ICPR0.B16;
    const register unsigned short int CLRPEND17 = 17;
    sbit  CLRPEND17_bit at NVIC_ICPR0.B17;
    const register unsigned short int CLRPEND18 = 18;
    sbit  CLRPEND18_bit at NVIC_ICPR0.B18;
    const register unsigned short int CLRPEND19 = 19;
    sbit  CLRPEND19_bit at NVIC_ICPR0.B19;
    const register unsigned short int CLRPEND20 = 20;
    sbit  CLRPEND20_bit at NVIC_ICPR0.B20;
    const register unsigned short int CLRPEND21 = 21;
    sbit  CLRPEND21_bit at NVIC_ICPR0.B21;
    const register unsigned short int CLRPEND22 = 22;
    sbit  CLRPEND22_bit at NVIC_ICPR0.B22;
    const register unsigned short int CLRPEND23 = 23;
    sbit  CLRPEND23_bit at NVIC_ICPR0.B23;
    const register unsigned short int CLRPEND24 = 24;
    sbit  CLRPEND24_bit at NVIC_ICPR0.B24;
    const register unsigned short int CLRPEND25 = 25;
    sbit  CLRPEND25_bit at NVIC_ICPR0.B25;
    const register unsigned short int CLRPEND26 = 26;
    sbit  CLRPEND26_bit at NVIC_ICPR0.B26;
    const register unsigned short int CLRPEND27 = 27;
    sbit  CLRPEND27_bit at NVIC_ICPR0.B27;
    const register unsigned short int CLRPEND28 = 28;
    sbit  CLRPEND28_bit at NVIC_ICPR0.B28;
    const register unsigned short int CLRPEND29 = 29;
    sbit  CLRPEND29_bit at NVIC_ICPR0.B29;
    const register unsigned short int CLRPEND30 = 30;
    sbit  CLRPEND30_bit at NVIC_ICPR0.B30;
    const register unsigned short int CLRPEND31 = 31;
    sbit  CLRPEND31_bit at NVIC_ICPR0.B31;

sfr far unsigned long   volatile NVIC_ICPR1           absolute 0xE000E284;
    sbit  CLRPEND0_NVIC_ICPR1_bit at NVIC_ICPR1.B0;
    sbit  CLRPEND1_NVIC_ICPR1_bit at NVIC_ICPR1.B1;
    sbit  CLRPEND2_NVIC_ICPR1_bit at NVIC_ICPR1.B2;
    sbit  CLRPEND3_NVIC_ICPR1_bit at NVIC_ICPR1.B3;
    sbit  CLRPEND4_NVIC_ICPR1_bit at NVIC_ICPR1.B4;
    sbit  CLRPEND5_NVIC_ICPR1_bit at NVIC_ICPR1.B5;
    sbit  CLRPEND6_NVIC_ICPR1_bit at NVIC_ICPR1.B6;
    sbit  CLRPEND7_NVIC_ICPR1_bit at NVIC_ICPR1.B7;
    sbit  CLRPEND8_NVIC_ICPR1_bit at NVIC_ICPR1.B8;
    sbit  CLRPEND9_NVIC_ICPR1_bit at NVIC_ICPR1.B9;
    sbit  CLRPEND10_NVIC_ICPR1_bit at NVIC_ICPR1.B10;
    sbit  CLRPEND11_NVIC_ICPR1_bit at NVIC_ICPR1.B11;
    sbit  CLRPEND12_NVIC_ICPR1_bit at NVIC_ICPR1.B12;
    sbit  CLRPEND13_NVIC_ICPR1_bit at NVIC_ICPR1.B13;
    sbit  CLRPEND14_NVIC_ICPR1_bit at NVIC_ICPR1.B14;
    sbit  CLRPEND15_NVIC_ICPR1_bit at NVIC_ICPR1.B15;
    sbit  CLRPEND16_NVIC_ICPR1_bit at NVIC_ICPR1.B16;
    sbit  CLRPEND17_NVIC_ICPR1_bit at NVIC_ICPR1.B17;
    sbit  CLRPEND18_NVIC_ICPR1_bit at NVIC_ICPR1.B18;
    sbit  CLRPEND19_NVIC_ICPR1_bit at NVIC_ICPR1.B19;
    sbit  CLRPEND20_NVIC_ICPR1_bit at NVIC_ICPR1.B20;
    sbit  CLRPEND21_NVIC_ICPR1_bit at NVIC_ICPR1.B21;
    sbit  CLRPEND22_NVIC_ICPR1_bit at NVIC_ICPR1.B22;
    sbit  CLRPEND23_NVIC_ICPR1_bit at NVIC_ICPR1.B23;
    sbit  CLRPEND24_NVIC_ICPR1_bit at NVIC_ICPR1.B24;
    sbit  CLRPEND25_NVIC_ICPR1_bit at NVIC_ICPR1.B25;
    sbit  CLRPEND26_NVIC_ICPR1_bit at NVIC_ICPR1.B26;
    sbit  CLRPEND27_NVIC_ICPR1_bit at NVIC_ICPR1.B27;
    sbit  CLRPEND28_NVIC_ICPR1_bit at NVIC_ICPR1.B28;
    sbit  CLRPEND29_NVIC_ICPR1_bit at NVIC_ICPR1.B29;
    sbit  CLRPEND30_NVIC_ICPR1_bit at NVIC_ICPR1.B30;
    sbit  CLRPEND31_NVIC_ICPR1_bit at NVIC_ICPR1.B31;

sfr far unsigned long   volatile NVIC_ICPR2           absolute 0xE000E288;
    sbit  CLRPEND0_NVIC_ICPR2_bit at NVIC_ICPR2.B0;
    sbit  CLRPEND1_NVIC_ICPR2_bit at NVIC_ICPR2.B1;
    sbit  CLRPEND2_NVIC_ICPR2_bit at NVIC_ICPR2.B2;
    sbit  CLRPEND3_NVIC_ICPR2_bit at NVIC_ICPR2.B3;
    sbit  CLRPEND4_NVIC_ICPR2_bit at NVIC_ICPR2.B4;
    sbit  CLRPEND5_NVIC_ICPR2_bit at NVIC_ICPR2.B5;
    sbit  CLRPEND6_NVIC_ICPR2_bit at NVIC_ICPR2.B6;
    sbit  CLRPEND7_NVIC_ICPR2_bit at NVIC_ICPR2.B7;
    sbit  CLRPEND8_NVIC_ICPR2_bit at NVIC_ICPR2.B8;
    sbit  CLRPEND9_NVIC_ICPR2_bit at NVIC_ICPR2.B9;
    sbit  CLRPEND10_NVIC_ICPR2_bit at NVIC_ICPR2.B10;
    sbit  CLRPEND11_NVIC_ICPR2_bit at NVIC_ICPR2.B11;
    sbit  CLRPEND12_NVIC_ICPR2_bit at NVIC_ICPR2.B12;
    sbit  CLRPEND13_NVIC_ICPR2_bit at NVIC_ICPR2.B13;
    sbit  CLRPEND14_NVIC_ICPR2_bit at NVIC_ICPR2.B14;
    sbit  CLRPEND15_NVIC_ICPR2_bit at NVIC_ICPR2.B15;

sfr far unsigned long   volatile NVIC_IABR0           absolute 0xE000E300;
    const register unsigned short int ACTIVE0 = 0;
    sbit  ACTIVE0_bit at NVIC_IABR0.B0;
    const register unsigned short int ACTIVE1 = 1;
    sbit  ACTIVE1_bit at NVIC_IABR0.B1;
    const register unsigned short int ACTIVE2 = 2;
    sbit  ACTIVE2_bit at NVIC_IABR0.B2;
    const register unsigned short int ACTIVE3 = 3;
    sbit  ACTIVE3_bit at NVIC_IABR0.B3;
    const register unsigned short int ACTIVE4 = 4;
    sbit  ACTIVE4_bit at NVIC_IABR0.B4;
    const register unsigned short int ACTIVE5 = 5;
    sbit  ACTIVE5_bit at NVIC_IABR0.B5;
    const register unsigned short int ACTIVE6 = 6;
    sbit  ACTIVE6_bit at NVIC_IABR0.B6;
    const register unsigned short int ACTIVE7 = 7;
    sbit  ACTIVE7_bit at NVIC_IABR0.B7;
    const register unsigned short int ACTIVE8 = 8;
    sbit  ACTIVE8_bit at NVIC_IABR0.B8;
    const register unsigned short int ACTIVE9 = 9;
    sbit  ACTIVE9_bit at NVIC_IABR0.B9;
    const register unsigned short int ACTIVE10 = 10;
    sbit  ACTIVE10_bit at NVIC_IABR0.B10;
    const register unsigned short int ACTIVE11 = 11;
    sbit  ACTIVE11_bit at NVIC_IABR0.B11;
    const register unsigned short int ACTIVE12 = 12;
    sbit  ACTIVE12_bit at NVIC_IABR0.B12;
    const register unsigned short int ACTIVE13 = 13;
    sbit  ACTIVE13_bit at NVIC_IABR0.B13;
    const register unsigned short int ACTIVE14 = 14;
    sbit  ACTIVE14_bit at NVIC_IABR0.B14;
    const register unsigned short int ACTIVE15 = 15;
    sbit  ACTIVE15_bit at NVIC_IABR0.B15;
    const register unsigned short int ACTIVE16 = 16;
    sbit  ACTIVE16_bit at NVIC_IABR0.B16;
    const register unsigned short int ACTIVE17 = 17;
    sbit  ACTIVE17_bit at NVIC_IABR0.B17;
    const register unsigned short int ACTIVE18 = 18;
    sbit  ACTIVE18_bit at NVIC_IABR0.B18;
    const register unsigned short int ACTIVE19 = 19;
    sbit  ACTIVE19_bit at NVIC_IABR0.B19;
    const register unsigned short int ACTIVE20 = 20;
    sbit  ACTIVE20_bit at NVIC_IABR0.B20;
    const register unsigned short int ACTIVE21 = 21;
    sbit  ACTIVE21_bit at NVIC_IABR0.B21;
    const register unsigned short int ACTIVE22 = 22;
    sbit  ACTIVE22_bit at NVIC_IABR0.B22;
    const register unsigned short int ACTIVE23 = 23;
    sbit  ACTIVE23_bit at NVIC_IABR0.B23;
    const register unsigned short int ACTIVE24 = 24;
    sbit  ACTIVE24_bit at NVIC_IABR0.B24;
    const register unsigned short int ACTIVE25 = 25;
    sbit  ACTIVE25_bit at NVIC_IABR0.B25;
    const register unsigned short int ACTIVE26 = 26;
    sbit  ACTIVE26_bit at NVIC_IABR0.B26;
    const register unsigned short int ACTIVE27 = 27;
    sbit  ACTIVE27_bit at NVIC_IABR0.B27;
    const register unsigned short int ACTIVE28 = 28;
    sbit  ACTIVE28_bit at NVIC_IABR0.B28;
    const register unsigned short int ACTIVE29 = 29;
    sbit  ACTIVE29_bit at NVIC_IABR0.B29;
    const register unsigned short int ACTIVE30 = 30;
    sbit  ACTIVE30_bit at NVIC_IABR0.B30;
    const register unsigned short int ACTIVE31 = 31;
    sbit  ACTIVE31_bit at NVIC_IABR0.B31;

sfr far unsigned long   volatile NVIC_IABR1           absolute 0xE000E304;
    sbit  ACTIVE0_NVIC_IABR1_bit at NVIC_IABR1.B0;
    sbit  ACTIVE1_NVIC_IABR1_bit at NVIC_IABR1.B1;
    sbit  ACTIVE2_NVIC_IABR1_bit at NVIC_IABR1.B2;
    sbit  ACTIVE3_NVIC_IABR1_bit at NVIC_IABR1.B3;
    sbit  ACTIVE4_NVIC_IABR1_bit at NVIC_IABR1.B4;
    sbit  ACTIVE5_NVIC_IABR1_bit at NVIC_IABR1.B5;
    sbit  ACTIVE6_NVIC_IABR1_bit at NVIC_IABR1.B6;
    sbit  ACTIVE7_NVIC_IABR1_bit at NVIC_IABR1.B7;
    sbit  ACTIVE8_NVIC_IABR1_bit at NVIC_IABR1.B8;
    sbit  ACTIVE9_NVIC_IABR1_bit at NVIC_IABR1.B9;
    sbit  ACTIVE10_NVIC_IABR1_bit at NVIC_IABR1.B10;
    sbit  ACTIVE11_NVIC_IABR1_bit at NVIC_IABR1.B11;
    sbit  ACTIVE12_NVIC_IABR1_bit at NVIC_IABR1.B12;
    sbit  ACTIVE13_NVIC_IABR1_bit at NVIC_IABR1.B13;
    sbit  ACTIVE14_NVIC_IABR1_bit at NVIC_IABR1.B14;
    sbit  ACTIVE15_NVIC_IABR1_bit at NVIC_IABR1.B15;
    sbit  ACTIVE16_NVIC_IABR1_bit at NVIC_IABR1.B16;
    sbit  ACTIVE17_NVIC_IABR1_bit at NVIC_IABR1.B17;
    sbit  ACTIVE18_NVIC_IABR1_bit at NVIC_IABR1.B18;
    sbit  ACTIVE19_NVIC_IABR1_bit at NVIC_IABR1.B19;
    sbit  ACTIVE20_NVIC_IABR1_bit at NVIC_IABR1.B20;
    sbit  ACTIVE21_NVIC_IABR1_bit at NVIC_IABR1.B21;
    sbit  ACTIVE22_NVIC_IABR1_bit at NVIC_IABR1.B22;
    sbit  ACTIVE23_NVIC_IABR1_bit at NVIC_IABR1.B23;
    sbit  ACTIVE24_NVIC_IABR1_bit at NVIC_IABR1.B24;
    sbit  ACTIVE25_NVIC_IABR1_bit at NVIC_IABR1.B25;
    sbit  ACTIVE26_NVIC_IABR1_bit at NVIC_IABR1.B26;
    sbit  ACTIVE27_NVIC_IABR1_bit at NVIC_IABR1.B27;
    sbit  ACTIVE28_NVIC_IABR1_bit at NVIC_IABR1.B28;
    sbit  ACTIVE29_NVIC_IABR1_bit at NVIC_IABR1.B29;
    sbit  ACTIVE30_NVIC_IABR1_bit at NVIC_IABR1.B30;
    sbit  ACTIVE31_NVIC_IABR1_bit at NVIC_IABR1.B31;

sfr far unsigned long   volatile NVIC_IABR2           absolute 0xE000E308;
    sbit  ACTIVE0_NVIC_IABR2_bit at NVIC_IABR2.B0;
    sbit  ACTIVE1_NVIC_IABR2_bit at NVIC_IABR2.B1;
    sbit  ACTIVE2_NVIC_IABR2_bit at NVIC_IABR2.B2;
    sbit  ACTIVE3_NVIC_IABR2_bit at NVIC_IABR2.B3;
    sbit  ACTIVE4_NVIC_IABR2_bit at NVIC_IABR2.B4;
    sbit  ACTIVE5_NVIC_IABR2_bit at NVIC_IABR2.B5;
    sbit  ACTIVE6_NVIC_IABR2_bit at NVIC_IABR2.B6;
    sbit  ACTIVE7_NVIC_IABR2_bit at NVIC_IABR2.B7;
    sbit  ACTIVE8_NVIC_IABR2_bit at NVIC_IABR2.B8;
    sbit  ACTIVE9_NVIC_IABR2_bit at NVIC_IABR2.B9;
    sbit  ACTIVE10_NVIC_IABR2_bit at NVIC_IABR2.B10;
    sbit  ACTIVE11_NVIC_IABR2_bit at NVIC_IABR2.B11;
    sbit  ACTIVE12_NVIC_IABR2_bit at NVIC_IABR2.B12;
    sbit  ACTIVE13_NVIC_IABR2_bit at NVIC_IABR2.B13;
    sbit  ACTIVE14_NVIC_IABR2_bit at NVIC_IABR2.B14;
    sbit  ACTIVE15_NVIC_IABR2_bit at NVIC_IABR2.B15;

sfr far unsigned long   volatile NVIC_IPR0            absolute 0xE000E400;
    const register unsigned short int IPR_N00 = 0;
    sbit  IPR_N00_bit at NVIC_IPR0.B0;
    const register unsigned short int IPR_N01 = 1;
    sbit  IPR_N01_bit at NVIC_IPR0.B1;
    const register unsigned short int IPR_N02 = 2;
    sbit  IPR_N02_bit at NVIC_IPR0.B2;
    const register unsigned short int IPR_N03 = 3;
    sbit  IPR_N03_bit at NVIC_IPR0.B3;
    const register unsigned short int IPR_N04 = 4;
    sbit  IPR_N04_bit at NVIC_IPR0.B4;
    const register unsigned short int IPR_N05 = 5;
    sbit  IPR_N05_bit at NVIC_IPR0.B5;
    const register unsigned short int IPR_N06 = 6;
    sbit  IPR_N06_bit at NVIC_IPR0.B6;
    const register unsigned short int IPR_N07 = 7;
    sbit  IPR_N07_bit at NVIC_IPR0.B7;
    const register unsigned short int IPR_N10 = 8;
    sbit  IPR_N10_bit at NVIC_IPR0.B8;
    const register unsigned short int IPR_N11 = 9;
    sbit  IPR_N11_bit at NVIC_IPR0.B9;
    const register unsigned short int IPR_N12 = 10;
    sbit  IPR_N12_bit at NVIC_IPR0.B10;
    const register unsigned short int IPR_N13 = 11;
    sbit  IPR_N13_bit at NVIC_IPR0.B11;
    const register unsigned short int IPR_N14 = 12;
    sbit  IPR_N14_bit at NVIC_IPR0.B12;
    const register unsigned short int IPR_N15 = 13;
    sbit  IPR_N15_bit at NVIC_IPR0.B13;
    const register unsigned short int IPR_N16 = 14;
    sbit  IPR_N16_bit at NVIC_IPR0.B14;
    const register unsigned short int IPR_N17 = 15;
    sbit  IPR_N17_bit at NVIC_IPR0.B15;
    const register unsigned short int IPR_N20 = 16;
    sbit  IPR_N20_bit at NVIC_IPR0.B16;
    const register unsigned short int IPR_N21 = 17;
    sbit  IPR_N21_bit at NVIC_IPR0.B17;
    const register unsigned short int IPR_N22 = 18;
    sbit  IPR_N22_bit at NVIC_IPR0.B18;
    const register unsigned short int IPR_N23 = 19;
    sbit  IPR_N23_bit at NVIC_IPR0.B19;
    const register unsigned short int IPR_N24 = 20;
    sbit  IPR_N24_bit at NVIC_IPR0.B20;
    const register unsigned short int IPR_N25 = 21;
    sbit  IPR_N25_bit at NVIC_IPR0.B21;
    const register unsigned short int IPR_N26 = 22;
    sbit  IPR_N26_bit at NVIC_IPR0.B22;
    const register unsigned short int IPR_N27 = 23;
    sbit  IPR_N27_bit at NVIC_IPR0.B23;
    const register unsigned short int IPR_N30 = 24;
    sbit  IPR_N30_bit at NVIC_IPR0.B24;
    const register unsigned short int IPR_N31 = 25;
    sbit  IPR_N31_bit at NVIC_IPR0.B25;
    const register unsigned short int IPR_N32 = 26;
    sbit  IPR_N32_bit at NVIC_IPR0.B26;
    const register unsigned short int IPR_N33 = 27;
    sbit  IPR_N33_bit at NVIC_IPR0.B27;
    const register unsigned short int IPR_N34 = 28;
    sbit  IPR_N34_bit at NVIC_IPR0.B28;
    const register unsigned short int IPR_N35 = 29;
    sbit  IPR_N35_bit at NVIC_IPR0.B29;
    const register unsigned short int IPR_N36 = 30;
    sbit  IPR_N36_bit at NVIC_IPR0.B30;
    const register unsigned short int IPR_N37 = 31;
    sbit  IPR_N37_bit at NVIC_IPR0.B31;

sfr far unsigned long   volatile NVIC_IPR1            absolute 0xE000E404;
    sbit  IPR_N00_NVIC_IPR1_bit at NVIC_IPR1.B0;
    sbit  IPR_N01_NVIC_IPR1_bit at NVIC_IPR1.B1;
    sbit  IPR_N02_NVIC_IPR1_bit at NVIC_IPR1.B2;
    sbit  IPR_N03_NVIC_IPR1_bit at NVIC_IPR1.B3;
    sbit  IPR_N04_NVIC_IPR1_bit at NVIC_IPR1.B4;
    sbit  IPR_N05_NVIC_IPR1_bit at NVIC_IPR1.B5;
    sbit  IPR_N06_NVIC_IPR1_bit at NVIC_IPR1.B6;
    sbit  IPR_N07_NVIC_IPR1_bit at NVIC_IPR1.B7;
    sbit  IPR_N10_NVIC_IPR1_bit at NVIC_IPR1.B8;
    sbit  IPR_N11_NVIC_IPR1_bit at NVIC_IPR1.B9;
    sbit  IPR_N12_NVIC_IPR1_bit at NVIC_IPR1.B10;
    sbit  IPR_N13_NVIC_IPR1_bit at NVIC_IPR1.B11;
    sbit  IPR_N14_NVIC_IPR1_bit at NVIC_IPR1.B12;
    sbit  IPR_N15_NVIC_IPR1_bit at NVIC_IPR1.B13;
    sbit  IPR_N16_NVIC_IPR1_bit at NVIC_IPR1.B14;
    sbit  IPR_N17_NVIC_IPR1_bit at NVIC_IPR1.B15;
    sbit  IPR_N20_NVIC_IPR1_bit at NVIC_IPR1.B16;
    sbit  IPR_N21_NVIC_IPR1_bit at NVIC_IPR1.B17;
    sbit  IPR_N22_NVIC_IPR1_bit at NVIC_IPR1.B18;
    sbit  IPR_N23_NVIC_IPR1_bit at NVIC_IPR1.B19;
    sbit  IPR_N24_NVIC_IPR1_bit at NVIC_IPR1.B20;
    sbit  IPR_N25_NVIC_IPR1_bit at NVIC_IPR1.B21;
    sbit  IPR_N26_NVIC_IPR1_bit at NVIC_IPR1.B22;
    sbit  IPR_N27_NVIC_IPR1_bit at NVIC_IPR1.B23;
    sbit  IPR_N30_NVIC_IPR1_bit at NVIC_IPR1.B24;
    sbit  IPR_N31_NVIC_IPR1_bit at NVIC_IPR1.B25;
    sbit  IPR_N32_NVIC_IPR1_bit at NVIC_IPR1.B26;
    sbit  IPR_N33_NVIC_IPR1_bit at NVIC_IPR1.B27;
    sbit  IPR_N34_NVIC_IPR1_bit at NVIC_IPR1.B28;
    sbit  IPR_N35_NVIC_IPR1_bit at NVIC_IPR1.B29;
    sbit  IPR_N36_NVIC_IPR1_bit at NVIC_IPR1.B30;
    sbit  IPR_N37_NVIC_IPR1_bit at NVIC_IPR1.B31;

sfr far unsigned long   volatile NVIC_IPR2            absolute 0xE000E408;
    sbit  IPR_N00_NVIC_IPR2_bit at NVIC_IPR2.B0;
    sbit  IPR_N01_NVIC_IPR2_bit at NVIC_IPR2.B1;
    sbit  IPR_N02_NVIC_IPR2_bit at NVIC_IPR2.B2;
    sbit  IPR_N03_NVIC_IPR2_bit at NVIC_IPR2.B3;
    sbit  IPR_N04_NVIC_IPR2_bit at NVIC_IPR2.B4;
    sbit  IPR_N05_NVIC_IPR2_bit at NVIC_IPR2.B5;
    sbit  IPR_N06_NVIC_IPR2_bit at NVIC_IPR2.B6;
    sbit  IPR_N07_NVIC_IPR2_bit at NVIC_IPR2.B7;
    sbit  IPR_N10_NVIC_IPR2_bit at NVIC_IPR2.B8;
    sbit  IPR_N11_NVIC_IPR2_bit at NVIC_IPR2.B9;
    sbit  IPR_N12_NVIC_IPR2_bit at NVIC_IPR2.B10;
    sbit  IPR_N13_NVIC_IPR2_bit at NVIC_IPR2.B11;
    sbit  IPR_N14_NVIC_IPR2_bit at NVIC_IPR2.B12;
    sbit  IPR_N15_NVIC_IPR2_bit at NVIC_IPR2.B13;
    sbit  IPR_N16_NVIC_IPR2_bit at NVIC_IPR2.B14;
    sbit  IPR_N17_NVIC_IPR2_bit at NVIC_IPR2.B15;
    sbit  IPR_N20_NVIC_IPR2_bit at NVIC_IPR2.B16;
    sbit  IPR_N21_NVIC_IPR2_bit at NVIC_IPR2.B17;
    sbit  IPR_N22_NVIC_IPR2_bit at NVIC_IPR2.B18;
    sbit  IPR_N23_NVIC_IPR2_bit at NVIC_IPR2.B19;
    sbit  IPR_N24_NVIC_IPR2_bit at NVIC_IPR2.B20;
    sbit  IPR_N25_NVIC_IPR2_bit at NVIC_IPR2.B21;
    sbit  IPR_N26_NVIC_IPR2_bit at NVIC_IPR2.B22;
    sbit  IPR_N27_NVIC_IPR2_bit at NVIC_IPR2.B23;
    sbit  IPR_N30_NVIC_IPR2_bit at NVIC_IPR2.B24;
    sbit  IPR_N31_NVIC_IPR2_bit at NVIC_IPR2.B25;
    sbit  IPR_N32_NVIC_IPR2_bit at NVIC_IPR2.B26;
    sbit  IPR_N33_NVIC_IPR2_bit at NVIC_IPR2.B27;
    sbit  IPR_N34_NVIC_IPR2_bit at NVIC_IPR2.B28;
    sbit  IPR_N35_NVIC_IPR2_bit at NVIC_IPR2.B29;
    sbit  IPR_N36_NVIC_IPR2_bit at NVIC_IPR2.B30;
    sbit  IPR_N37_NVIC_IPR2_bit at NVIC_IPR2.B31;

sfr far unsigned long   volatile NVIC_IPR3            absolute 0xE000E40C;
    sbit  IPR_N00_NVIC_IPR3_bit at NVIC_IPR3.B0;
    sbit  IPR_N01_NVIC_IPR3_bit at NVIC_IPR3.B1;
    sbit  IPR_N02_NVIC_IPR3_bit at NVIC_IPR3.B2;
    sbit  IPR_N03_NVIC_IPR3_bit at NVIC_IPR3.B3;
    sbit  IPR_N04_NVIC_IPR3_bit at NVIC_IPR3.B4;
    sbit  IPR_N05_NVIC_IPR3_bit at NVIC_IPR3.B5;
    sbit  IPR_N06_NVIC_IPR3_bit at NVIC_IPR3.B6;
    sbit  IPR_N07_NVIC_IPR3_bit at NVIC_IPR3.B7;
    sbit  IPR_N10_NVIC_IPR3_bit at NVIC_IPR3.B8;
    sbit  IPR_N11_NVIC_IPR3_bit at NVIC_IPR3.B9;
    sbit  IPR_N12_NVIC_IPR3_bit at NVIC_IPR3.B10;
    sbit  IPR_N13_NVIC_IPR3_bit at NVIC_IPR3.B11;
    sbit  IPR_N14_NVIC_IPR3_bit at NVIC_IPR3.B12;
    sbit  IPR_N15_NVIC_IPR3_bit at NVIC_IPR3.B13;
    sbit  IPR_N16_NVIC_IPR3_bit at NVIC_IPR3.B14;
    sbit  IPR_N17_NVIC_IPR3_bit at NVIC_IPR3.B15;
    sbit  IPR_N20_NVIC_IPR3_bit at NVIC_IPR3.B16;
    sbit  IPR_N21_NVIC_IPR3_bit at NVIC_IPR3.B17;
    sbit  IPR_N22_NVIC_IPR3_bit at NVIC_IPR3.B18;
    sbit  IPR_N23_NVIC_IPR3_bit at NVIC_IPR3.B19;
    sbit  IPR_N24_NVIC_IPR3_bit at NVIC_IPR3.B20;
    sbit  IPR_N25_NVIC_IPR3_bit at NVIC_IPR3.B21;
    sbit  IPR_N26_NVIC_IPR3_bit at NVIC_IPR3.B22;
    sbit  IPR_N27_NVIC_IPR3_bit at NVIC_IPR3.B23;
    sbit  IPR_N30_NVIC_IPR3_bit at NVIC_IPR3.B24;
    sbit  IPR_N31_NVIC_IPR3_bit at NVIC_IPR3.B25;
    sbit  IPR_N32_NVIC_IPR3_bit at NVIC_IPR3.B26;
    sbit  IPR_N33_NVIC_IPR3_bit at NVIC_IPR3.B27;
    sbit  IPR_N34_NVIC_IPR3_bit at NVIC_IPR3.B28;
    sbit  IPR_N35_NVIC_IPR3_bit at NVIC_IPR3.B29;
    sbit  IPR_N36_NVIC_IPR3_bit at NVIC_IPR3.B30;
    sbit  IPR_N37_NVIC_IPR3_bit at NVIC_IPR3.B31;

sfr far unsigned long   volatile NVIC_IPR4            absolute 0xE000E410;
    sbit  IPR_N00_NVIC_IPR4_bit at NVIC_IPR4.B0;
    sbit  IPR_N01_NVIC_IPR4_bit at NVIC_IPR4.B1;
    sbit  IPR_N02_NVIC_IPR4_bit at NVIC_IPR4.B2;
    sbit  IPR_N03_NVIC_IPR4_bit at NVIC_IPR4.B3;
    sbit  IPR_N04_NVIC_IPR4_bit at NVIC_IPR4.B4;
    sbit  IPR_N05_NVIC_IPR4_bit at NVIC_IPR4.B5;
    sbit  IPR_N06_NVIC_IPR4_bit at NVIC_IPR4.B6;
    sbit  IPR_N07_NVIC_IPR4_bit at NVIC_IPR4.B7;
    sbit  IPR_N10_NVIC_IPR4_bit at NVIC_IPR4.B8;
    sbit  IPR_N11_NVIC_IPR4_bit at NVIC_IPR4.B9;
    sbit  IPR_N12_NVIC_IPR4_bit at NVIC_IPR4.B10;
    sbit  IPR_N13_NVIC_IPR4_bit at NVIC_IPR4.B11;
    sbit  IPR_N14_NVIC_IPR4_bit at NVIC_IPR4.B12;
    sbit  IPR_N15_NVIC_IPR4_bit at NVIC_IPR4.B13;
    sbit  IPR_N16_NVIC_IPR4_bit at NVIC_IPR4.B14;
    sbit  IPR_N17_NVIC_IPR4_bit at NVIC_IPR4.B15;
    sbit  IPR_N20_NVIC_IPR4_bit at NVIC_IPR4.B16;
    sbit  IPR_N21_NVIC_IPR4_bit at NVIC_IPR4.B17;
    sbit  IPR_N22_NVIC_IPR4_bit at NVIC_IPR4.B18;
    sbit  IPR_N23_NVIC_IPR4_bit at NVIC_IPR4.B19;
    sbit  IPR_N24_NVIC_IPR4_bit at NVIC_IPR4.B20;
    sbit  IPR_N25_NVIC_IPR4_bit at NVIC_IPR4.B21;
    sbit  IPR_N26_NVIC_IPR4_bit at NVIC_IPR4.B22;
    sbit  IPR_N27_NVIC_IPR4_bit at NVIC_IPR4.B23;
    sbit  IPR_N30_NVIC_IPR4_bit at NVIC_IPR4.B24;
    sbit  IPR_N31_NVIC_IPR4_bit at NVIC_IPR4.B25;
    sbit  IPR_N32_NVIC_IPR4_bit at NVIC_IPR4.B26;
    sbit  IPR_N33_NVIC_IPR4_bit at NVIC_IPR4.B27;
    sbit  IPR_N34_NVIC_IPR4_bit at NVIC_IPR4.B28;
    sbit  IPR_N35_NVIC_IPR4_bit at NVIC_IPR4.B29;
    sbit  IPR_N36_NVIC_IPR4_bit at NVIC_IPR4.B30;
    sbit  IPR_N37_NVIC_IPR4_bit at NVIC_IPR4.B31;

sfr far unsigned long   volatile NVIC_IPR5            absolute 0xE000E414;
    sbit  IPR_N00_NVIC_IPR5_bit at NVIC_IPR5.B0;
    sbit  IPR_N01_NVIC_IPR5_bit at NVIC_IPR5.B1;
    sbit  IPR_N02_NVIC_IPR5_bit at NVIC_IPR5.B2;
    sbit  IPR_N03_NVIC_IPR5_bit at NVIC_IPR5.B3;
    sbit  IPR_N04_NVIC_IPR5_bit at NVIC_IPR5.B4;
    sbit  IPR_N05_NVIC_IPR5_bit at NVIC_IPR5.B5;
    sbit  IPR_N06_NVIC_IPR5_bit at NVIC_IPR5.B6;
    sbit  IPR_N07_NVIC_IPR5_bit at NVIC_IPR5.B7;
    sbit  IPR_N10_NVIC_IPR5_bit at NVIC_IPR5.B8;
    sbit  IPR_N11_NVIC_IPR5_bit at NVIC_IPR5.B9;
    sbit  IPR_N12_NVIC_IPR5_bit at NVIC_IPR5.B10;
    sbit  IPR_N13_NVIC_IPR5_bit at NVIC_IPR5.B11;
    sbit  IPR_N14_NVIC_IPR5_bit at NVIC_IPR5.B12;
    sbit  IPR_N15_NVIC_IPR5_bit at NVIC_IPR5.B13;
    sbit  IPR_N16_NVIC_IPR5_bit at NVIC_IPR5.B14;
    sbit  IPR_N17_NVIC_IPR5_bit at NVIC_IPR5.B15;
    sbit  IPR_N20_NVIC_IPR5_bit at NVIC_IPR5.B16;
    sbit  IPR_N21_NVIC_IPR5_bit at NVIC_IPR5.B17;
    sbit  IPR_N22_NVIC_IPR5_bit at NVIC_IPR5.B18;
    sbit  IPR_N23_NVIC_IPR5_bit at NVIC_IPR5.B19;
    sbit  IPR_N24_NVIC_IPR5_bit at NVIC_IPR5.B20;
    sbit  IPR_N25_NVIC_IPR5_bit at NVIC_IPR5.B21;
    sbit  IPR_N26_NVIC_IPR5_bit at NVIC_IPR5.B22;
    sbit  IPR_N27_NVIC_IPR5_bit at NVIC_IPR5.B23;
    sbit  IPR_N30_NVIC_IPR5_bit at NVIC_IPR5.B24;
    sbit  IPR_N31_NVIC_IPR5_bit at NVIC_IPR5.B25;
    sbit  IPR_N32_NVIC_IPR5_bit at NVIC_IPR5.B26;
    sbit  IPR_N33_NVIC_IPR5_bit at NVIC_IPR5.B27;
    sbit  IPR_N34_NVIC_IPR5_bit at NVIC_IPR5.B28;
    sbit  IPR_N35_NVIC_IPR5_bit at NVIC_IPR5.B29;
    sbit  IPR_N36_NVIC_IPR5_bit at NVIC_IPR5.B30;
    sbit  IPR_N37_NVIC_IPR5_bit at NVIC_IPR5.B31;

sfr far unsigned long   volatile NVIC_IPR6            absolute 0xE000E418;
    sbit  IPR_N00_NVIC_IPR6_bit at NVIC_IPR6.B0;
    sbit  IPR_N01_NVIC_IPR6_bit at NVIC_IPR6.B1;
    sbit  IPR_N02_NVIC_IPR6_bit at NVIC_IPR6.B2;
    sbit  IPR_N03_NVIC_IPR6_bit at NVIC_IPR6.B3;
    sbit  IPR_N04_NVIC_IPR6_bit at NVIC_IPR6.B4;
    sbit  IPR_N05_NVIC_IPR6_bit at NVIC_IPR6.B5;
    sbit  IPR_N06_NVIC_IPR6_bit at NVIC_IPR6.B6;
    sbit  IPR_N07_NVIC_IPR6_bit at NVIC_IPR6.B7;
    sbit  IPR_N10_NVIC_IPR6_bit at NVIC_IPR6.B8;
    sbit  IPR_N11_NVIC_IPR6_bit at NVIC_IPR6.B9;
    sbit  IPR_N12_NVIC_IPR6_bit at NVIC_IPR6.B10;
    sbit  IPR_N13_NVIC_IPR6_bit at NVIC_IPR6.B11;
    sbit  IPR_N14_NVIC_IPR6_bit at NVIC_IPR6.B12;
    sbit  IPR_N15_NVIC_IPR6_bit at NVIC_IPR6.B13;
    sbit  IPR_N16_NVIC_IPR6_bit at NVIC_IPR6.B14;
    sbit  IPR_N17_NVIC_IPR6_bit at NVIC_IPR6.B15;
    sbit  IPR_N20_NVIC_IPR6_bit at NVIC_IPR6.B16;
    sbit  IPR_N21_NVIC_IPR6_bit at NVIC_IPR6.B17;
    sbit  IPR_N22_NVIC_IPR6_bit at NVIC_IPR6.B18;
    sbit  IPR_N23_NVIC_IPR6_bit at NVIC_IPR6.B19;
    sbit  IPR_N24_NVIC_IPR6_bit at NVIC_IPR6.B20;
    sbit  IPR_N25_NVIC_IPR6_bit at NVIC_IPR6.B21;
    sbit  IPR_N26_NVIC_IPR6_bit at NVIC_IPR6.B22;
    sbit  IPR_N27_NVIC_IPR6_bit at NVIC_IPR6.B23;
    sbit  IPR_N30_NVIC_IPR6_bit at NVIC_IPR6.B24;
    sbit  IPR_N31_NVIC_IPR6_bit at NVIC_IPR6.B25;
    sbit  IPR_N32_NVIC_IPR6_bit at NVIC_IPR6.B26;
    sbit  IPR_N33_NVIC_IPR6_bit at NVIC_IPR6.B27;
    sbit  IPR_N34_NVIC_IPR6_bit at NVIC_IPR6.B28;
    sbit  IPR_N35_NVIC_IPR6_bit at NVIC_IPR6.B29;
    sbit  IPR_N36_NVIC_IPR6_bit at NVIC_IPR6.B30;
    sbit  IPR_N37_NVIC_IPR6_bit at NVIC_IPR6.B31;

sfr far unsigned long   volatile NVIC_IPR7            absolute 0xE000E41C;
    sbit  IPR_N00_NVIC_IPR7_bit at NVIC_IPR7.B0;
    sbit  IPR_N01_NVIC_IPR7_bit at NVIC_IPR7.B1;
    sbit  IPR_N02_NVIC_IPR7_bit at NVIC_IPR7.B2;
    sbit  IPR_N03_NVIC_IPR7_bit at NVIC_IPR7.B3;
    sbit  IPR_N04_NVIC_IPR7_bit at NVIC_IPR7.B4;
    sbit  IPR_N05_NVIC_IPR7_bit at NVIC_IPR7.B5;
    sbit  IPR_N06_NVIC_IPR7_bit at NVIC_IPR7.B6;
    sbit  IPR_N07_NVIC_IPR7_bit at NVIC_IPR7.B7;
    sbit  IPR_N10_NVIC_IPR7_bit at NVIC_IPR7.B8;
    sbit  IPR_N11_NVIC_IPR7_bit at NVIC_IPR7.B9;
    sbit  IPR_N12_NVIC_IPR7_bit at NVIC_IPR7.B10;
    sbit  IPR_N13_NVIC_IPR7_bit at NVIC_IPR7.B11;
    sbit  IPR_N14_NVIC_IPR7_bit at NVIC_IPR7.B12;
    sbit  IPR_N15_NVIC_IPR7_bit at NVIC_IPR7.B13;
    sbit  IPR_N16_NVIC_IPR7_bit at NVIC_IPR7.B14;
    sbit  IPR_N17_NVIC_IPR7_bit at NVIC_IPR7.B15;
    sbit  IPR_N20_NVIC_IPR7_bit at NVIC_IPR7.B16;
    sbit  IPR_N21_NVIC_IPR7_bit at NVIC_IPR7.B17;
    sbit  IPR_N22_NVIC_IPR7_bit at NVIC_IPR7.B18;
    sbit  IPR_N23_NVIC_IPR7_bit at NVIC_IPR7.B19;
    sbit  IPR_N24_NVIC_IPR7_bit at NVIC_IPR7.B20;
    sbit  IPR_N25_NVIC_IPR7_bit at NVIC_IPR7.B21;
    sbit  IPR_N26_NVIC_IPR7_bit at NVIC_IPR7.B22;
    sbit  IPR_N27_NVIC_IPR7_bit at NVIC_IPR7.B23;
    sbit  IPR_N30_NVIC_IPR7_bit at NVIC_IPR7.B24;
    sbit  IPR_N31_NVIC_IPR7_bit at NVIC_IPR7.B25;
    sbit  IPR_N32_NVIC_IPR7_bit at NVIC_IPR7.B26;
    sbit  IPR_N33_NVIC_IPR7_bit at NVIC_IPR7.B27;
    sbit  IPR_N34_NVIC_IPR7_bit at NVIC_IPR7.B28;
    sbit  IPR_N35_NVIC_IPR7_bit at NVIC_IPR7.B29;
    sbit  IPR_N36_NVIC_IPR7_bit at NVIC_IPR7.B30;
    sbit  IPR_N37_NVIC_IPR7_bit at NVIC_IPR7.B31;

sfr far unsigned long   volatile NVIC_IPR8            absolute 0xE000E420;
    sbit  IPR_N00_NVIC_IPR8_bit at NVIC_IPR8.B0;
    sbit  IPR_N01_NVIC_IPR8_bit at NVIC_IPR8.B1;
    sbit  IPR_N02_NVIC_IPR8_bit at NVIC_IPR8.B2;
    sbit  IPR_N03_NVIC_IPR8_bit at NVIC_IPR8.B3;
    sbit  IPR_N04_NVIC_IPR8_bit at NVIC_IPR8.B4;
    sbit  IPR_N05_NVIC_IPR8_bit at NVIC_IPR8.B5;
    sbit  IPR_N06_NVIC_IPR8_bit at NVIC_IPR8.B6;
    sbit  IPR_N07_NVIC_IPR8_bit at NVIC_IPR8.B7;
    sbit  IPR_N10_NVIC_IPR8_bit at NVIC_IPR8.B8;
    sbit  IPR_N11_NVIC_IPR8_bit at NVIC_IPR8.B9;
    sbit  IPR_N12_NVIC_IPR8_bit at NVIC_IPR8.B10;
    sbit  IPR_N13_NVIC_IPR8_bit at NVIC_IPR8.B11;
    sbit  IPR_N14_NVIC_IPR8_bit at NVIC_IPR8.B12;
    sbit  IPR_N15_NVIC_IPR8_bit at NVIC_IPR8.B13;
    sbit  IPR_N16_NVIC_IPR8_bit at NVIC_IPR8.B14;
    sbit  IPR_N17_NVIC_IPR8_bit at NVIC_IPR8.B15;
    sbit  IPR_N20_NVIC_IPR8_bit at NVIC_IPR8.B16;
    sbit  IPR_N21_NVIC_IPR8_bit at NVIC_IPR8.B17;
    sbit  IPR_N22_NVIC_IPR8_bit at NVIC_IPR8.B18;
    sbit  IPR_N23_NVIC_IPR8_bit at NVIC_IPR8.B19;
    sbit  IPR_N24_NVIC_IPR8_bit at NVIC_IPR8.B20;
    sbit  IPR_N25_NVIC_IPR8_bit at NVIC_IPR8.B21;
    sbit  IPR_N26_NVIC_IPR8_bit at NVIC_IPR8.B22;
    sbit  IPR_N27_NVIC_IPR8_bit at NVIC_IPR8.B23;
    sbit  IPR_N30_NVIC_IPR8_bit at NVIC_IPR8.B24;
    sbit  IPR_N31_NVIC_IPR8_bit at NVIC_IPR8.B25;
    sbit  IPR_N32_NVIC_IPR8_bit at NVIC_IPR8.B26;
    sbit  IPR_N33_NVIC_IPR8_bit at NVIC_IPR8.B27;
    sbit  IPR_N34_NVIC_IPR8_bit at NVIC_IPR8.B28;
    sbit  IPR_N35_NVIC_IPR8_bit at NVIC_IPR8.B29;
    sbit  IPR_N36_NVIC_IPR8_bit at NVIC_IPR8.B30;
    sbit  IPR_N37_NVIC_IPR8_bit at NVIC_IPR8.B31;

sfr far unsigned long   volatile NVIC_IPR9            absolute 0xE000E424;
    sbit  IPR_N00_NVIC_IPR9_bit at NVIC_IPR9.B0;
    sbit  IPR_N01_NVIC_IPR9_bit at NVIC_IPR9.B1;
    sbit  IPR_N02_NVIC_IPR9_bit at NVIC_IPR9.B2;
    sbit  IPR_N03_NVIC_IPR9_bit at NVIC_IPR9.B3;
    sbit  IPR_N04_NVIC_IPR9_bit at NVIC_IPR9.B4;
    sbit  IPR_N05_NVIC_IPR9_bit at NVIC_IPR9.B5;
    sbit  IPR_N06_NVIC_IPR9_bit at NVIC_IPR9.B6;
    sbit  IPR_N07_NVIC_IPR9_bit at NVIC_IPR9.B7;
    sbit  IPR_N10_NVIC_IPR9_bit at NVIC_IPR9.B8;
    sbit  IPR_N11_NVIC_IPR9_bit at NVIC_IPR9.B9;
    sbit  IPR_N12_NVIC_IPR9_bit at NVIC_IPR9.B10;
    sbit  IPR_N13_NVIC_IPR9_bit at NVIC_IPR9.B11;
    sbit  IPR_N14_NVIC_IPR9_bit at NVIC_IPR9.B12;
    sbit  IPR_N15_NVIC_IPR9_bit at NVIC_IPR9.B13;
    sbit  IPR_N16_NVIC_IPR9_bit at NVIC_IPR9.B14;
    sbit  IPR_N17_NVIC_IPR9_bit at NVIC_IPR9.B15;
    sbit  IPR_N20_NVIC_IPR9_bit at NVIC_IPR9.B16;
    sbit  IPR_N21_NVIC_IPR9_bit at NVIC_IPR9.B17;
    sbit  IPR_N22_NVIC_IPR9_bit at NVIC_IPR9.B18;
    sbit  IPR_N23_NVIC_IPR9_bit at NVIC_IPR9.B19;
    sbit  IPR_N24_NVIC_IPR9_bit at NVIC_IPR9.B20;
    sbit  IPR_N25_NVIC_IPR9_bit at NVIC_IPR9.B21;
    sbit  IPR_N26_NVIC_IPR9_bit at NVIC_IPR9.B22;
    sbit  IPR_N27_NVIC_IPR9_bit at NVIC_IPR9.B23;
    sbit  IPR_N30_NVIC_IPR9_bit at NVIC_IPR9.B24;
    sbit  IPR_N31_NVIC_IPR9_bit at NVIC_IPR9.B25;
    sbit  IPR_N32_NVIC_IPR9_bit at NVIC_IPR9.B26;
    sbit  IPR_N33_NVIC_IPR9_bit at NVIC_IPR9.B27;
    sbit  IPR_N34_NVIC_IPR9_bit at NVIC_IPR9.B28;
    sbit  IPR_N35_NVIC_IPR9_bit at NVIC_IPR9.B29;
    sbit  IPR_N36_NVIC_IPR9_bit at NVIC_IPR9.B30;
    sbit  IPR_N37_NVIC_IPR9_bit at NVIC_IPR9.B31;

sfr far unsigned long   volatile NVIC_IPR10           absolute 0xE000E428;
    sbit  IPR_N00_NVIC_IPR10_bit at NVIC_IPR10.B0;
    sbit  IPR_N01_NVIC_IPR10_bit at NVIC_IPR10.B1;
    sbit  IPR_N02_NVIC_IPR10_bit at NVIC_IPR10.B2;
    sbit  IPR_N03_NVIC_IPR10_bit at NVIC_IPR10.B3;
    sbit  IPR_N04_NVIC_IPR10_bit at NVIC_IPR10.B4;
    sbit  IPR_N05_NVIC_IPR10_bit at NVIC_IPR10.B5;
    sbit  IPR_N06_NVIC_IPR10_bit at NVIC_IPR10.B6;
    sbit  IPR_N07_NVIC_IPR10_bit at NVIC_IPR10.B7;
    sbit  IPR_N10_NVIC_IPR10_bit at NVIC_IPR10.B8;
    sbit  IPR_N11_NVIC_IPR10_bit at NVIC_IPR10.B9;
    sbit  IPR_N12_NVIC_IPR10_bit at NVIC_IPR10.B10;
    sbit  IPR_N13_NVIC_IPR10_bit at NVIC_IPR10.B11;
    sbit  IPR_N14_NVIC_IPR10_bit at NVIC_IPR10.B12;
    sbit  IPR_N15_NVIC_IPR10_bit at NVIC_IPR10.B13;
    sbit  IPR_N16_NVIC_IPR10_bit at NVIC_IPR10.B14;
    sbit  IPR_N17_NVIC_IPR10_bit at NVIC_IPR10.B15;
    sbit  IPR_N20_NVIC_IPR10_bit at NVIC_IPR10.B16;
    sbit  IPR_N21_NVIC_IPR10_bit at NVIC_IPR10.B17;
    sbit  IPR_N22_NVIC_IPR10_bit at NVIC_IPR10.B18;
    sbit  IPR_N23_NVIC_IPR10_bit at NVIC_IPR10.B19;
    sbit  IPR_N24_NVIC_IPR10_bit at NVIC_IPR10.B20;
    sbit  IPR_N25_NVIC_IPR10_bit at NVIC_IPR10.B21;
    sbit  IPR_N26_NVIC_IPR10_bit at NVIC_IPR10.B22;
    sbit  IPR_N27_NVIC_IPR10_bit at NVIC_IPR10.B23;
    sbit  IPR_N30_NVIC_IPR10_bit at NVIC_IPR10.B24;
    sbit  IPR_N31_NVIC_IPR10_bit at NVIC_IPR10.B25;
    sbit  IPR_N32_NVIC_IPR10_bit at NVIC_IPR10.B26;
    sbit  IPR_N33_NVIC_IPR10_bit at NVIC_IPR10.B27;
    sbit  IPR_N34_NVIC_IPR10_bit at NVIC_IPR10.B28;
    sbit  IPR_N35_NVIC_IPR10_bit at NVIC_IPR10.B29;
    sbit  IPR_N36_NVIC_IPR10_bit at NVIC_IPR10.B30;
    sbit  IPR_N37_NVIC_IPR10_bit at NVIC_IPR10.B31;

sfr far unsigned long   volatile NVIC_IPR11           absolute 0xE000E42C;
    sbit  IPR_N00_NVIC_IPR11_bit at NVIC_IPR11.B0;
    sbit  IPR_N01_NVIC_IPR11_bit at NVIC_IPR11.B1;
    sbit  IPR_N02_NVIC_IPR11_bit at NVIC_IPR11.B2;
    sbit  IPR_N03_NVIC_IPR11_bit at NVIC_IPR11.B3;
    sbit  IPR_N04_NVIC_IPR11_bit at NVIC_IPR11.B4;
    sbit  IPR_N05_NVIC_IPR11_bit at NVIC_IPR11.B5;
    sbit  IPR_N06_NVIC_IPR11_bit at NVIC_IPR11.B6;
    sbit  IPR_N07_NVIC_IPR11_bit at NVIC_IPR11.B7;
    sbit  IPR_N10_NVIC_IPR11_bit at NVIC_IPR11.B8;
    sbit  IPR_N11_NVIC_IPR11_bit at NVIC_IPR11.B9;
    sbit  IPR_N12_NVIC_IPR11_bit at NVIC_IPR11.B10;
    sbit  IPR_N13_NVIC_IPR11_bit at NVIC_IPR11.B11;
    sbit  IPR_N14_NVIC_IPR11_bit at NVIC_IPR11.B12;
    sbit  IPR_N15_NVIC_IPR11_bit at NVIC_IPR11.B13;
    sbit  IPR_N16_NVIC_IPR11_bit at NVIC_IPR11.B14;
    sbit  IPR_N17_NVIC_IPR11_bit at NVIC_IPR11.B15;
    sbit  IPR_N20_NVIC_IPR11_bit at NVIC_IPR11.B16;
    sbit  IPR_N21_NVIC_IPR11_bit at NVIC_IPR11.B17;
    sbit  IPR_N22_NVIC_IPR11_bit at NVIC_IPR11.B18;
    sbit  IPR_N23_NVIC_IPR11_bit at NVIC_IPR11.B19;
    sbit  IPR_N24_NVIC_IPR11_bit at NVIC_IPR11.B20;
    sbit  IPR_N25_NVIC_IPR11_bit at NVIC_IPR11.B21;
    sbit  IPR_N26_NVIC_IPR11_bit at NVIC_IPR11.B22;
    sbit  IPR_N27_NVIC_IPR11_bit at NVIC_IPR11.B23;
    sbit  IPR_N30_NVIC_IPR11_bit at NVIC_IPR11.B24;
    sbit  IPR_N31_NVIC_IPR11_bit at NVIC_IPR11.B25;
    sbit  IPR_N32_NVIC_IPR11_bit at NVIC_IPR11.B26;
    sbit  IPR_N33_NVIC_IPR11_bit at NVIC_IPR11.B27;
    sbit  IPR_N34_NVIC_IPR11_bit at NVIC_IPR11.B28;
    sbit  IPR_N35_NVIC_IPR11_bit at NVIC_IPR11.B29;
    sbit  IPR_N36_NVIC_IPR11_bit at NVIC_IPR11.B30;
    sbit  IPR_N37_NVIC_IPR11_bit at NVIC_IPR11.B31;

sfr far unsigned long   volatile NVIC_IPR12           absolute 0xE000E430;
    sbit  IPR_N00_NVIC_IPR12_bit at NVIC_IPR12.B0;
    sbit  IPR_N01_NVIC_IPR12_bit at NVIC_IPR12.B1;
    sbit  IPR_N02_NVIC_IPR12_bit at NVIC_IPR12.B2;
    sbit  IPR_N03_NVIC_IPR12_bit at NVIC_IPR12.B3;
    sbit  IPR_N04_NVIC_IPR12_bit at NVIC_IPR12.B4;
    sbit  IPR_N05_NVIC_IPR12_bit at NVIC_IPR12.B5;
    sbit  IPR_N06_NVIC_IPR12_bit at NVIC_IPR12.B6;
    sbit  IPR_N07_NVIC_IPR12_bit at NVIC_IPR12.B7;
    sbit  IPR_N10_NVIC_IPR12_bit at NVIC_IPR12.B8;
    sbit  IPR_N11_NVIC_IPR12_bit at NVIC_IPR12.B9;
    sbit  IPR_N12_NVIC_IPR12_bit at NVIC_IPR12.B10;
    sbit  IPR_N13_NVIC_IPR12_bit at NVIC_IPR12.B11;
    sbit  IPR_N14_NVIC_IPR12_bit at NVIC_IPR12.B12;
    sbit  IPR_N15_NVIC_IPR12_bit at NVIC_IPR12.B13;
    sbit  IPR_N16_NVIC_IPR12_bit at NVIC_IPR12.B14;
    sbit  IPR_N17_NVIC_IPR12_bit at NVIC_IPR12.B15;
    sbit  IPR_N20_NVIC_IPR12_bit at NVIC_IPR12.B16;
    sbit  IPR_N21_NVIC_IPR12_bit at NVIC_IPR12.B17;
    sbit  IPR_N22_NVIC_IPR12_bit at NVIC_IPR12.B18;
    sbit  IPR_N23_NVIC_IPR12_bit at NVIC_IPR12.B19;
    sbit  IPR_N24_NVIC_IPR12_bit at NVIC_IPR12.B20;
    sbit  IPR_N25_NVIC_IPR12_bit at NVIC_IPR12.B21;
    sbit  IPR_N26_NVIC_IPR12_bit at NVIC_IPR12.B22;
    sbit  IPR_N27_NVIC_IPR12_bit at NVIC_IPR12.B23;
    sbit  IPR_N30_NVIC_IPR12_bit at NVIC_IPR12.B24;
    sbit  IPR_N31_NVIC_IPR12_bit at NVIC_IPR12.B25;
    sbit  IPR_N32_NVIC_IPR12_bit at NVIC_IPR12.B26;
    sbit  IPR_N33_NVIC_IPR12_bit at NVIC_IPR12.B27;
    sbit  IPR_N34_NVIC_IPR12_bit at NVIC_IPR12.B28;
    sbit  IPR_N35_NVIC_IPR12_bit at NVIC_IPR12.B29;
    sbit  IPR_N36_NVIC_IPR12_bit at NVIC_IPR12.B30;
    sbit  IPR_N37_NVIC_IPR12_bit at NVIC_IPR12.B31;

sfr far unsigned long   volatile NVIC_IPR13           absolute 0xE000E434;
    sbit  IPR_N00_NVIC_IPR13_bit at NVIC_IPR13.B0;
    sbit  IPR_N01_NVIC_IPR13_bit at NVIC_IPR13.B1;
    sbit  IPR_N02_NVIC_IPR13_bit at NVIC_IPR13.B2;
    sbit  IPR_N03_NVIC_IPR13_bit at NVIC_IPR13.B3;
    sbit  IPR_N04_NVIC_IPR13_bit at NVIC_IPR13.B4;
    sbit  IPR_N05_NVIC_IPR13_bit at NVIC_IPR13.B5;
    sbit  IPR_N06_NVIC_IPR13_bit at NVIC_IPR13.B6;
    sbit  IPR_N07_NVIC_IPR13_bit at NVIC_IPR13.B7;
    sbit  IPR_N10_NVIC_IPR13_bit at NVIC_IPR13.B8;
    sbit  IPR_N11_NVIC_IPR13_bit at NVIC_IPR13.B9;
    sbit  IPR_N12_NVIC_IPR13_bit at NVIC_IPR13.B10;
    sbit  IPR_N13_NVIC_IPR13_bit at NVIC_IPR13.B11;
    sbit  IPR_N14_NVIC_IPR13_bit at NVIC_IPR13.B12;
    sbit  IPR_N15_NVIC_IPR13_bit at NVIC_IPR13.B13;
    sbit  IPR_N16_NVIC_IPR13_bit at NVIC_IPR13.B14;
    sbit  IPR_N17_NVIC_IPR13_bit at NVIC_IPR13.B15;
    sbit  IPR_N20_NVIC_IPR13_bit at NVIC_IPR13.B16;
    sbit  IPR_N21_NVIC_IPR13_bit at NVIC_IPR13.B17;
    sbit  IPR_N22_NVIC_IPR13_bit at NVIC_IPR13.B18;
    sbit  IPR_N23_NVIC_IPR13_bit at NVIC_IPR13.B19;
    sbit  IPR_N24_NVIC_IPR13_bit at NVIC_IPR13.B20;
    sbit  IPR_N25_NVIC_IPR13_bit at NVIC_IPR13.B21;
    sbit  IPR_N26_NVIC_IPR13_bit at NVIC_IPR13.B22;
    sbit  IPR_N27_NVIC_IPR13_bit at NVIC_IPR13.B23;
    sbit  IPR_N30_NVIC_IPR13_bit at NVIC_IPR13.B24;
    sbit  IPR_N31_NVIC_IPR13_bit at NVIC_IPR13.B25;
    sbit  IPR_N32_NVIC_IPR13_bit at NVIC_IPR13.B26;
    sbit  IPR_N33_NVIC_IPR13_bit at NVIC_IPR13.B27;
    sbit  IPR_N34_NVIC_IPR13_bit at NVIC_IPR13.B28;
    sbit  IPR_N35_NVIC_IPR13_bit at NVIC_IPR13.B29;
    sbit  IPR_N36_NVIC_IPR13_bit at NVIC_IPR13.B30;
    sbit  IPR_N37_NVIC_IPR13_bit at NVIC_IPR13.B31;

sfr far unsigned long   volatile NVIC_IPR14           absolute 0xE000E438;
    sbit  IPR_N00_NVIC_IPR14_bit at NVIC_IPR14.B0;
    sbit  IPR_N01_NVIC_IPR14_bit at NVIC_IPR14.B1;
    sbit  IPR_N02_NVIC_IPR14_bit at NVIC_IPR14.B2;
    sbit  IPR_N03_NVIC_IPR14_bit at NVIC_IPR14.B3;
    sbit  IPR_N04_NVIC_IPR14_bit at NVIC_IPR14.B4;
    sbit  IPR_N05_NVIC_IPR14_bit at NVIC_IPR14.B5;
    sbit  IPR_N06_NVIC_IPR14_bit at NVIC_IPR14.B6;
    sbit  IPR_N07_NVIC_IPR14_bit at NVIC_IPR14.B7;
    sbit  IPR_N10_NVIC_IPR14_bit at NVIC_IPR14.B8;
    sbit  IPR_N11_NVIC_IPR14_bit at NVIC_IPR14.B9;
    sbit  IPR_N12_NVIC_IPR14_bit at NVIC_IPR14.B10;
    sbit  IPR_N13_NVIC_IPR14_bit at NVIC_IPR14.B11;
    sbit  IPR_N14_NVIC_IPR14_bit at NVIC_IPR14.B12;
    sbit  IPR_N15_NVIC_IPR14_bit at NVIC_IPR14.B13;
    sbit  IPR_N16_NVIC_IPR14_bit at NVIC_IPR14.B14;
    sbit  IPR_N17_NVIC_IPR14_bit at NVIC_IPR14.B15;
    sbit  IPR_N20_NVIC_IPR14_bit at NVIC_IPR14.B16;
    sbit  IPR_N21_NVIC_IPR14_bit at NVIC_IPR14.B17;
    sbit  IPR_N22_NVIC_IPR14_bit at NVIC_IPR14.B18;
    sbit  IPR_N23_NVIC_IPR14_bit at NVIC_IPR14.B19;
    sbit  IPR_N24_NVIC_IPR14_bit at NVIC_IPR14.B20;
    sbit  IPR_N25_NVIC_IPR14_bit at NVIC_IPR14.B21;
    sbit  IPR_N26_NVIC_IPR14_bit at NVIC_IPR14.B22;
    sbit  IPR_N27_NVIC_IPR14_bit at NVIC_IPR14.B23;
    sbit  IPR_N30_NVIC_IPR14_bit at NVIC_IPR14.B24;
    sbit  IPR_N31_NVIC_IPR14_bit at NVIC_IPR14.B25;
    sbit  IPR_N32_NVIC_IPR14_bit at NVIC_IPR14.B26;
    sbit  IPR_N33_NVIC_IPR14_bit at NVIC_IPR14.B27;
    sbit  IPR_N34_NVIC_IPR14_bit at NVIC_IPR14.B28;
    sbit  IPR_N35_NVIC_IPR14_bit at NVIC_IPR14.B29;
    sbit  IPR_N36_NVIC_IPR14_bit at NVIC_IPR14.B30;
    sbit  IPR_N37_NVIC_IPR14_bit at NVIC_IPR14.B31;

sfr far unsigned long   volatile SCB_CPUID            absolute 0xE000ED00;
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
    const register unsigned short int RETOBASE = 11;
    sbit  RETOBASE_bit at SCB_ICSR.B11;
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
    const register unsigned short int VECTPENDING7 = 19;
    sbit  VECTPENDING7_bit at SCB_ICSR.B19;
    const register unsigned short int VECTPENDING8 = 20;
    sbit  VECTPENDING8_bit at SCB_ICSR.B20;
    const register unsigned short int VECTPENDING9 = 21;
    sbit  VECTPENDING9_bit at SCB_ICSR.B21;
    const register unsigned short int ISRPENDING = 22;
    sbit  ISRPENDING_bit at SCB_ICSR.B22;
    sbit  ISRPENDING_SCB_ICSR_bit at SCB_ICSR.B22;
    const register unsigned short int PENDSTCLR = 25;
    sbit  PENDSTCLR_bit at SCB_ICSR.B25;
    const register unsigned short int PENDSTSET = 26;
    sbit  PENDSTSET_bit at SCB_ICSR.B26;
    const register unsigned short int PENDSVCLR = 27;
    sbit  PENDSVCLR_bit at SCB_ICSR.B27;
    const register unsigned short int PENDSVSET = 28;
    sbit  PENDSVSET_bit at SCB_ICSR.B28;

sfr far unsigned long   volatile SCB_VTOR             absolute 0xE000ED08;
    const register unsigned short int TABLEOFF0 = 9;
    sbit  TABLEOFF0_bit at SCB_VTOR.B9;
    const register unsigned short int TABLEOFF1 = 10;
    sbit  TABLEOFF1_bit at SCB_VTOR.B10;
    const register unsigned short int TABLEOFF2 = 11;
    sbit  TABLEOFF2_bit at SCB_VTOR.B11;
    const register unsigned short int TABLEOFF3 = 12;
    sbit  TABLEOFF3_bit at SCB_VTOR.B12;
    const register unsigned short int TABLEOFF4 = 13;
    sbit  TABLEOFF4_bit at SCB_VTOR.B13;
    const register unsigned short int TABLEOFF5 = 14;
    sbit  TABLEOFF5_bit at SCB_VTOR.B14;
    const register unsigned short int TABLEOFF6 = 15;
    sbit  TABLEOFF6_bit at SCB_VTOR.B15;
    const register unsigned short int TABLEOFF7 = 16;
    sbit  TABLEOFF7_bit at SCB_VTOR.B16;
    const register unsigned short int TABLEOFF8 = 17;
    sbit  TABLEOFF8_bit at SCB_VTOR.B17;
    const register unsigned short int TABLEOFF9 = 18;
    sbit  TABLEOFF9_bit at SCB_VTOR.B18;
    const register unsigned short int TABLEOFF10 = 19;
    sbit  TABLEOFF10_bit at SCB_VTOR.B19;
    const register unsigned short int TABLEOFF11 = 20;
    sbit  TABLEOFF11_bit at SCB_VTOR.B20;
    const register unsigned short int TABLEOFF12 = 21;
    sbit  TABLEOFF12_bit at SCB_VTOR.B21;
    const register unsigned short int TABLEOFF13 = 22;
    sbit  TABLEOFF13_bit at SCB_VTOR.B22;
    const register unsigned short int TABLEOFF14 = 23;
    sbit  TABLEOFF14_bit at SCB_VTOR.B23;
    const register unsigned short int TABLEOFF15 = 24;
    sbit  TABLEOFF15_bit at SCB_VTOR.B24;
    const register unsigned short int TABLEOFF16 = 25;
    sbit  TABLEOFF16_bit at SCB_VTOR.B25;
    const register unsigned short int TABLEOFF17 = 26;
    sbit  TABLEOFF17_bit at SCB_VTOR.B26;
    const register unsigned short int TABLEOFF18 = 27;
    sbit  TABLEOFF18_bit at SCB_VTOR.B27;
    const register unsigned short int TABLEOFF19 = 28;
    sbit  TABLEOFF19_bit at SCB_VTOR.B28;
    const register unsigned short int TABLEOFF20 = 29;
    sbit  TABLEOFF20_bit at SCB_VTOR.B29;

sfr far unsigned long   volatile SCB_AIRCR            absolute 0xE000ED0C;
    const register unsigned short int VECTRESET = 0;
    sbit  VECTRESET_bit at SCB_AIRCR.B0;
    const register unsigned short int VECTCLRACTIVE = 1;
    sbit  VECTCLRACTIVE_bit at SCB_AIRCR.B1;
    const register unsigned short int SYSRESETREQ = 2;
    sbit  SYSRESETREQ_bit at SCB_AIRCR.B2;
    const register unsigned short int PRIGROUP0 = 8;
    sbit  PRIGROUP0_bit at SCB_AIRCR.B8;
    const register unsigned short int PRIGROUP1 = 9;
    sbit  PRIGROUP1_bit at SCB_AIRCR.B9;
    const register unsigned short int PRIGROUP2 = 10;
    sbit  PRIGROUP2_bit at SCB_AIRCR.B10;
    const register unsigned short int ENDIANESS = 15;
    sbit  ENDIANESS_bit at SCB_AIRCR.B15;
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

sfr far unsigned long   volatile SCB_SCR              absolute 0xE000ED10;
    const register unsigned short int SLEEPONEXIT = 1;
    sbit  SLEEPONEXIT_bit at SCB_SCR.B1;
    const register unsigned short int SLEEPDEEP = 2;
    sbit  SLEEPDEEP_bit at SCB_SCR.B2;
    const register unsigned short int SEVONPEND = 4;
    sbit  SEVONPEND_bit at SCB_SCR.B4;

sfr far unsigned long   volatile SCB_CCR              absolute 0xE000ED14;
    const register unsigned short int NONBASETHRDENA = 0;
    sbit  NONBASETHRDENA_bit at SCB_CCR.B0;
    const register unsigned short int USERSETMPEND = 1;
    sbit  USERSETMPEND_bit at SCB_CCR.B1;
    const register unsigned short int UNALIGN_TRP = 3;
    sbit  UNALIGN_TRP_bit at SCB_CCR.B3;
    const register unsigned short int DIV_0_TRP = 4;
    sbit  DIV_0_TRP_bit at SCB_CCR.B4;
    const register unsigned short int BFHFNIGN = 8;
    sbit  BFHFNIGN_bit at SCB_CCR.B8;
    const register unsigned short int STKALIGN = 9;
    sbit  STKALIGN_bit at SCB_CCR.B9;

sfr far unsigned long   volatile SCB_SHPR1            absolute 0xE000ED18;
    const register unsigned short int PRI40 = 0;
    sbit  PRI40_bit at SCB_SHPR1.B0;
    const register unsigned short int PRI41 = 1;
    sbit  PRI41_bit at SCB_SHPR1.B1;
    const register unsigned short int PRI42 = 2;
    sbit  PRI42_bit at SCB_SHPR1.B2;
    const register unsigned short int PRI43 = 3;
    sbit  PRI43_bit at SCB_SHPR1.B3;
    const register unsigned short int PRI44 = 4;
    sbit  PRI44_bit at SCB_SHPR1.B4;
    const register unsigned short int PRI45 = 5;
    sbit  PRI45_bit at SCB_SHPR1.B5;
    const register unsigned short int PRI46 = 6;
    sbit  PRI46_bit at SCB_SHPR1.B6;
    const register unsigned short int PRI47 = 7;
    sbit  PRI47_bit at SCB_SHPR1.B7;
    const register unsigned short int PRI50 = 8;
    sbit  PRI50_bit at SCB_SHPR1.B8;
    const register unsigned short int PRI51 = 9;
    sbit  PRI51_bit at SCB_SHPR1.B9;
    const register unsigned short int PRI52 = 10;
    sbit  PRI52_bit at SCB_SHPR1.B10;
    const register unsigned short int PRI53 = 11;
    sbit  PRI53_bit at SCB_SHPR1.B11;
    const register unsigned short int PRI54 = 12;
    sbit  PRI54_bit at SCB_SHPR1.B12;
    const register unsigned short int PRI55 = 13;
    sbit  PRI55_bit at SCB_SHPR1.B13;
    const register unsigned short int PRI56 = 14;
    sbit  PRI56_bit at SCB_SHPR1.B14;
    const register unsigned short int PRI57 = 15;
    sbit  PRI57_bit at SCB_SHPR1.B15;
    const register unsigned short int PRI60 = 16;
    sbit  PRI60_bit at SCB_SHPR1.B16;
    const register unsigned short int PRI61 = 17;
    sbit  PRI61_bit at SCB_SHPR1.B17;
    const register unsigned short int PRI62 = 18;
    sbit  PRI62_bit at SCB_SHPR1.B18;
    const register unsigned short int PRI63 = 19;
    sbit  PRI63_bit at SCB_SHPR1.B19;
    const register unsigned short int PRI64 = 20;
    sbit  PRI64_bit at SCB_SHPR1.B20;
    const register unsigned short int PRI65 = 21;
    sbit  PRI65_bit at SCB_SHPR1.B21;
    const register unsigned short int PRI66 = 22;
    sbit  PRI66_bit at SCB_SHPR1.B22;
    const register unsigned short int PRI67 = 23;
    sbit  PRI67_bit at SCB_SHPR1.B23;

sfr far unsigned long   volatile SCB_SHPR2            absolute 0xE000ED1C;
    const register unsigned short int PRI110 = 24;
    sbit  PRI110_bit at SCB_SHPR2.B24;
    const register unsigned short int PRI111 = 25;
    sbit  PRI111_bit at SCB_SHPR2.B25;
    const register unsigned short int PRI112 = 26;
    sbit  PRI112_bit at SCB_SHPR2.B26;
    const register unsigned short int PRI113 = 27;
    sbit  PRI113_bit at SCB_SHPR2.B27;
    const register unsigned short int PRI114 = 28;
    sbit  PRI114_bit at SCB_SHPR2.B28;
    const register unsigned short int PRI115 = 29;
    sbit  PRI115_bit at SCB_SHPR2.B29;
    const register unsigned short int PRI116 = 30;
    sbit  PRI116_bit at SCB_SHPR2.B30;
    const register unsigned short int PRI117 = 31;
    sbit  PRI117_bit at SCB_SHPR2.B31;

sfr far unsigned long   volatile SCB_SHPR3            absolute 0xE000ED20;
    const register unsigned short int PRI140 = 16;
    sbit  PRI140_bit at SCB_SHPR3.B16;
    const register unsigned short int PRI141 = 17;
    sbit  PRI141_bit at SCB_SHPR3.B17;
    const register unsigned short int PRI142 = 18;
    sbit  PRI142_bit at SCB_SHPR3.B18;
    const register unsigned short int PRI143 = 19;
    sbit  PRI143_bit at SCB_SHPR3.B19;
    const register unsigned short int PRI144 = 20;
    sbit  PRI144_bit at SCB_SHPR3.B20;
    const register unsigned short int PRI145 = 21;
    sbit  PRI145_bit at SCB_SHPR3.B21;
    const register unsigned short int PRI146 = 22;
    sbit  PRI146_bit at SCB_SHPR3.B22;
    const register unsigned short int PRI147 = 23;
    sbit  PRI147_bit at SCB_SHPR3.B23;
    const register unsigned short int PRI150 = 24;
    sbit  PRI150_bit at SCB_SHPR3.B24;
    const register unsigned short int PRI151 = 25;
    sbit  PRI151_bit at SCB_SHPR3.B25;
    const register unsigned short int PRI152 = 26;
    sbit  PRI152_bit at SCB_SHPR3.B26;
    const register unsigned short int PRI153 = 27;
    sbit  PRI153_bit at SCB_SHPR3.B27;
    const register unsigned short int PRI154 = 28;
    sbit  PRI154_bit at SCB_SHPR3.B28;
    const register unsigned short int PRI155 = 29;
    sbit  PRI155_bit at SCB_SHPR3.B29;
    const register unsigned short int PRI156 = 30;
    sbit  PRI156_bit at SCB_SHPR3.B30;
    const register unsigned short int PRI157 = 31;
    sbit  PRI157_bit at SCB_SHPR3.B31;

sfr far unsigned long   volatile SCB_SHCRS            absolute 0xE000ED24;
    const register unsigned short int MEMFAULTACT = 0;
    sbit  MEMFAULTACT_bit at SCB_SHCRS.B0;
    const register unsigned short int BUSFAULTACT = 1;
    sbit  BUSFAULTACT_bit at SCB_SHCRS.B1;
    const register unsigned short int USGFAULTACT = 3;
    sbit  USGFAULTACT_bit at SCB_SHCRS.B3;
    const register unsigned short int SVCALLACT = 7;
    sbit  SVCALLACT_bit at SCB_SHCRS.B7;
    const register unsigned short int MONITORACT = 8;
    sbit  MONITORACT_bit at SCB_SHCRS.B8;
    const register unsigned short int PENDSVACT = 10;
    sbit  PENDSVACT_bit at SCB_SHCRS.B10;
    const register unsigned short int SYSTICKACT = 11;
    sbit  SYSTICKACT_bit at SCB_SHCRS.B11;
    const register unsigned short int USGFAULTPENDED = 12;
    sbit  USGFAULTPENDED_bit at SCB_SHCRS.B12;
    const register unsigned short int MEMFAULTPENDED = 13;
    sbit  MEMFAULTPENDED_bit at SCB_SHCRS.B13;
    const register unsigned short int BUSFAULTPENDED = 14;
    sbit  BUSFAULTPENDED_bit at SCB_SHCRS.B14;
    const register unsigned short int SVCALLPENDED = 15;
    sbit  SVCALLPENDED_bit at SCB_SHCRS.B15;
    const register unsigned short int MEMFAULTENA = 16;
    sbit  MEMFAULTENA_bit at SCB_SHCRS.B16;
    const register unsigned short int BUSFAULTENA = 17;
    sbit  BUSFAULTENA_bit at SCB_SHCRS.B17;
    const register unsigned short int USGFAULTENA = 18;
    sbit  USGFAULTENA_bit at SCB_SHCRS.B18;

sfr far unsigned long   volatile SCB_CFSR             absolute 0xE000ED28;
    const register unsigned short int MMFSR0 = 0;
    sbit  MMFSR0_bit at SCB_CFSR.B0;
    const register unsigned short int MMFSR1 = 1;
    sbit  MMFSR1_bit at SCB_CFSR.B1;
    const register unsigned short int MMFSR2 = 2;
    sbit  MMFSR2_bit at SCB_CFSR.B2;
    const register unsigned short int MMFSR3 = 3;
    sbit  MMFSR3_bit at SCB_CFSR.B3;
    const register unsigned short int MMFSR4 = 4;
    sbit  MMFSR4_bit at SCB_CFSR.B4;
    const register unsigned short int MMFSR5 = 5;
    sbit  MMFSR5_bit at SCB_CFSR.B5;
    const register unsigned short int MMFSR6 = 6;
    sbit  MMFSR6_bit at SCB_CFSR.B6;
    const register unsigned short int MMFSR7 = 7;
    sbit  MMFSR7_bit at SCB_CFSR.B7;
    const register unsigned short int BFSR0 = 8;
    sbit  BFSR0_bit at SCB_CFSR.B8;
    const register unsigned short int BFSR1 = 9;
    sbit  BFSR1_bit at SCB_CFSR.B9;
    const register unsigned short int BFSR2 = 10;
    sbit  BFSR2_bit at SCB_CFSR.B10;
    const register unsigned short int BFSR3 = 11;
    sbit  BFSR3_bit at SCB_CFSR.B11;
    const register unsigned short int BFSR4 = 12;
    sbit  BFSR4_bit at SCB_CFSR.B12;
    const register unsigned short int BFSR5 = 13;
    sbit  BFSR5_bit at SCB_CFSR.B13;
    const register unsigned short int BFSR6 = 14;
    sbit  BFSR6_bit at SCB_CFSR.B14;
    const register unsigned short int BFSR7 = 15;
    sbit  BFSR7_bit at SCB_CFSR.B15;
    const register unsigned short int UFSR0 = 16;
    sbit  UFSR0_bit at SCB_CFSR.B16;
    const register unsigned short int UFSR1 = 17;
    sbit  UFSR1_bit at SCB_CFSR.B17;
    const register unsigned short int UFSR2 = 18;
    sbit  UFSR2_bit at SCB_CFSR.B18;
    const register unsigned short int UFSR3 = 19;
    sbit  UFSR3_bit at SCB_CFSR.B19;
    const register unsigned short int UFSR4 = 20;
    sbit  UFSR4_bit at SCB_CFSR.B20;
    const register unsigned short int UFSR5 = 21;
    sbit  UFSR5_bit at SCB_CFSR.B21;
    const register unsigned short int UFSR6 = 22;
    sbit  UFSR6_bit at SCB_CFSR.B22;
    const register unsigned short int UFSR7 = 23;
    sbit  UFSR7_bit at SCB_CFSR.B23;
    const register unsigned short int UFSR8 = 24;
    sbit  UFSR8_bit at SCB_CFSR.B24;
    const register unsigned short int UFSR9 = 25;
    sbit  UFSR9_bit at SCB_CFSR.B25;
    const register unsigned short int UFSR10 = 26;
    sbit  UFSR10_bit at SCB_CFSR.B26;
    const register unsigned short int UFSR11 = 27;
    sbit  UFSR11_bit at SCB_CFSR.B27;
    const register unsigned short int UFSR12 = 28;
    sbit  UFSR12_bit at SCB_CFSR.B28;
    const register unsigned short int UFSR13 = 29;
    sbit  UFSR13_bit at SCB_CFSR.B29;
    const register unsigned short int UFSR14 = 30;
    sbit  UFSR14_bit at SCB_CFSR.B30;
    const register unsigned short int UFSR15 = 31;
    sbit  UFSR15_bit at SCB_CFSR.B31;

sfr far unsigned long   volatile SCB_HFSR             absolute 0xE000ED2C;
    const register unsigned short int VECTTBL = 1;
    sbit  VECTTBL_bit at SCB_HFSR.B1;
    const register unsigned short int FORCED = 30;
    sbit  FORCED_bit at SCB_HFSR.B30;
    const register unsigned short int DEBUG_VT = 31;
    sbit  DEBUG_VT_bit at SCB_HFSR.B31;

sfr far unsigned long   volatile SCB_MMAR             absolute 0xE000ED34;
    const register unsigned short int MMAR0 = 0;
    sbit  MMAR0_bit at SCB_MMAR.B0;
    const register unsigned short int MMAR1 = 1;
    sbit  MMAR1_bit at SCB_MMAR.B1;
    const register unsigned short int MMAR2 = 2;
    sbit  MMAR2_bit at SCB_MMAR.B2;
    const register unsigned short int MMAR3 = 3;
    sbit  MMAR3_bit at SCB_MMAR.B3;
    const register unsigned short int MMAR4 = 4;
    sbit  MMAR4_bit at SCB_MMAR.B4;
    const register unsigned short int MMAR5 = 5;
    sbit  MMAR5_bit at SCB_MMAR.B5;
    const register unsigned short int MMAR6 = 6;
    sbit  MMAR6_bit at SCB_MMAR.B6;
    const register unsigned short int MMAR7 = 7;
    sbit  MMAR7_bit at SCB_MMAR.B7;
    const register unsigned short int MMAR8 = 8;
    sbit  MMAR8_bit at SCB_MMAR.B8;
    const register unsigned short int MMAR9 = 9;
    sbit  MMAR9_bit at SCB_MMAR.B9;
    const register unsigned short int MMAR10 = 10;
    sbit  MMAR10_bit at SCB_MMAR.B10;
    const register unsigned short int MMAR11 = 11;
    sbit  MMAR11_bit at SCB_MMAR.B11;
    const register unsigned short int MMAR12 = 12;
    sbit  MMAR12_bit at SCB_MMAR.B12;
    const register unsigned short int MMAR13 = 13;
    sbit  MMAR13_bit at SCB_MMAR.B13;
    const register unsigned short int MMAR14 = 14;
    sbit  MMAR14_bit at SCB_MMAR.B14;
    const register unsigned short int MMAR15 = 15;
    sbit  MMAR15_bit at SCB_MMAR.B15;
    const register unsigned short int MMAR16 = 16;
    sbit  MMAR16_bit at SCB_MMAR.B16;
    const register unsigned short int MMAR17 = 17;
    sbit  MMAR17_bit at SCB_MMAR.B17;
    const register unsigned short int MMAR18 = 18;
    sbit  MMAR18_bit at SCB_MMAR.B18;
    const register unsigned short int MMAR19 = 19;
    sbit  MMAR19_bit at SCB_MMAR.B19;
    const register unsigned short int MMAR20 = 20;
    sbit  MMAR20_bit at SCB_MMAR.B20;
    const register unsigned short int MMAR21 = 21;
    sbit  MMAR21_bit at SCB_MMAR.B21;
    const register unsigned short int MMAR22 = 22;
    sbit  MMAR22_bit at SCB_MMAR.B22;
    const register unsigned short int MMAR23 = 23;
    sbit  MMAR23_bit at SCB_MMAR.B23;
    const register unsigned short int MMAR24 = 24;
    sbit  MMAR24_bit at SCB_MMAR.B24;
    const register unsigned short int MMAR25 = 25;
    sbit  MMAR25_bit at SCB_MMAR.B25;
    const register unsigned short int MMAR26 = 26;
    sbit  MMAR26_bit at SCB_MMAR.B26;
    const register unsigned short int MMAR27 = 27;
    sbit  MMAR27_bit at SCB_MMAR.B27;
    const register unsigned short int MMAR28 = 28;
    sbit  MMAR28_bit at SCB_MMAR.B28;
    const register unsigned short int MMAR29 = 29;
    sbit  MMAR29_bit at SCB_MMAR.B29;
    const register unsigned short int MMAR30 = 30;
    sbit  MMAR30_bit at SCB_MMAR.B30;
    const register unsigned short int MMAR31 = 31;
    sbit  MMAR31_bit at SCB_MMAR.B31;

sfr far unsigned long   volatile SCB_BFAR             absolute 0xE000ED38;
    const register unsigned short int BFAR0 = 0;
    sbit  BFAR0_bit at SCB_BFAR.B0;
    const register unsigned short int BFAR1 = 1;
    sbit  BFAR1_bit at SCB_BFAR.B1;
    const register unsigned short int BFAR2 = 2;
    sbit  BFAR2_bit at SCB_BFAR.B2;
    const register unsigned short int BFAR3 = 3;
    sbit  BFAR3_bit at SCB_BFAR.B3;
    const register unsigned short int BFAR4 = 4;
    sbit  BFAR4_bit at SCB_BFAR.B4;
    const register unsigned short int BFAR5 = 5;
    sbit  BFAR5_bit at SCB_BFAR.B5;
    const register unsigned short int BFAR6 = 6;
    sbit  BFAR6_bit at SCB_BFAR.B6;
    const register unsigned short int BFAR7 = 7;
    sbit  BFAR7_bit at SCB_BFAR.B7;
    const register unsigned short int BFAR8 = 8;
    sbit  BFAR8_bit at SCB_BFAR.B8;
    const register unsigned short int BFAR9 = 9;
    sbit  BFAR9_bit at SCB_BFAR.B9;
    const register unsigned short int BFAR10 = 10;
    sbit  BFAR10_bit at SCB_BFAR.B10;
    const register unsigned short int BFAR11 = 11;
    sbit  BFAR11_bit at SCB_BFAR.B11;
    const register unsigned short int BFAR12 = 12;
    sbit  BFAR12_bit at SCB_BFAR.B12;
    const register unsigned short int BFAR13 = 13;
    sbit  BFAR13_bit at SCB_BFAR.B13;
    const register unsigned short int BFAR14 = 14;
    sbit  BFAR14_bit at SCB_BFAR.B14;
    const register unsigned short int BFAR15 = 15;
    sbit  BFAR15_bit at SCB_BFAR.B15;
    const register unsigned short int BFAR16 = 16;
    sbit  BFAR16_bit at SCB_BFAR.B16;
    const register unsigned short int BFAR17 = 17;
    sbit  BFAR17_bit at SCB_BFAR.B17;
    const register unsigned short int BFAR18 = 18;
    sbit  BFAR18_bit at SCB_BFAR.B18;
    const register unsigned short int BFAR19 = 19;
    sbit  BFAR19_bit at SCB_BFAR.B19;
    const register unsigned short int BFAR20 = 20;
    sbit  BFAR20_bit at SCB_BFAR.B20;
    const register unsigned short int BFAR21 = 21;
    sbit  BFAR21_bit at SCB_BFAR.B21;
    const register unsigned short int BFAR22 = 22;
    sbit  BFAR22_bit at SCB_BFAR.B22;
    const register unsigned short int BFAR23 = 23;
    sbit  BFAR23_bit at SCB_BFAR.B23;
    const register unsigned short int BFAR24 = 24;
    sbit  BFAR24_bit at SCB_BFAR.B24;
    const register unsigned short int BFAR25 = 25;
    sbit  BFAR25_bit at SCB_BFAR.B25;
    const register unsigned short int BFAR26 = 26;
    sbit  BFAR26_bit at SCB_BFAR.B26;
    const register unsigned short int BFAR27 = 27;
    sbit  BFAR27_bit at SCB_BFAR.B27;
    const register unsigned short int BFAR28 = 28;
    sbit  BFAR28_bit at SCB_BFAR.B28;
    const register unsigned short int BFAR29 = 29;
    sbit  BFAR29_bit at SCB_BFAR.B29;
    const register unsigned short int BFAR30 = 30;
    sbit  BFAR30_bit at SCB_BFAR.B30;
    const register unsigned short int BFAR31 = 31;
    sbit  BFAR31_bit at SCB_BFAR.B31;

sfr far unsigned long   volatile STK_CTRL             absolute 0xE000E010;
    const register unsigned short int ENABLE_ = 0;
    sbit  ENABLE_bit at STK_CTRL.B0;
    const register unsigned short int TICKINT = 1;
    sbit  TICKINT_bit at STK_CTRL.B1;
    const register unsigned short int CLKSOURCE = 2;
    sbit  CLKSOURCE_bit at STK_CTRL.B2;
    const register unsigned short int COUNTFLAG = 16;
    sbit  COUNTFLAG_bit at STK_CTRL.B16;

sfr far unsigned long   volatile STK_LOAD             absolute 0xE000E014;
    const register unsigned short int RELOAD0 = 0;
    sbit  RELOAD0_bit at STK_LOAD.B0;
    const register unsigned short int RELOAD1 = 1;
    sbit  RELOAD1_bit at STK_LOAD.B1;
    const register unsigned short int RELOAD2 = 2;
    sbit  RELOAD2_bit at STK_LOAD.B2;
    const register unsigned short int RELOAD3 = 3;
    sbit  RELOAD3_bit at STK_LOAD.B3;
    const register unsigned short int RELOAD4 = 4;
    sbit  RELOAD4_bit at STK_LOAD.B4;
    const register unsigned short int RELOAD5 = 5;
    sbit  RELOAD5_bit at STK_LOAD.B5;
    const register unsigned short int RELOAD6 = 6;
    sbit  RELOAD6_bit at STK_LOAD.B6;
    const register unsigned short int RELOAD7 = 7;
    sbit  RELOAD7_bit at STK_LOAD.B7;
    const register unsigned short int RELOAD8 = 8;
    sbit  RELOAD8_bit at STK_LOAD.B8;
    const register unsigned short int RELOAD9 = 9;
    sbit  RELOAD9_bit at STK_LOAD.B9;
    const register unsigned short int RELOAD10 = 10;
    sbit  RELOAD10_bit at STK_LOAD.B10;
    const register unsigned short int RELOAD11 = 11;
    sbit  RELOAD11_bit at STK_LOAD.B11;
    const register unsigned short int RELOAD12 = 12;
    sbit  RELOAD12_bit at STK_LOAD.B12;
    const register unsigned short int RELOAD13 = 13;
    sbit  RELOAD13_bit at STK_LOAD.B13;
    const register unsigned short int RELOAD14 = 14;
    sbit  RELOAD14_bit at STK_LOAD.B14;
    const register unsigned short int RELOAD15 = 15;
    sbit  RELOAD15_bit at STK_LOAD.B15;
    const register unsigned short int RELOAD16 = 16;
    sbit  RELOAD16_bit at STK_LOAD.B16;
    const register unsigned short int RELOAD17 = 17;
    sbit  RELOAD17_bit at STK_LOAD.B17;
    const register unsigned short int RELOAD18 = 18;
    sbit  RELOAD18_bit at STK_LOAD.B18;
    const register unsigned short int RELOAD19 = 19;
    sbit  RELOAD19_bit at STK_LOAD.B19;
    const register unsigned short int RELOAD20 = 20;
    sbit  RELOAD20_bit at STK_LOAD.B20;
    const register unsigned short int RELOAD21 = 21;
    sbit  RELOAD21_bit at STK_LOAD.B21;
    const register unsigned short int RELOAD22 = 22;
    sbit  RELOAD22_bit at STK_LOAD.B22;
    const register unsigned short int RELOAD23 = 23;
    sbit  RELOAD23_bit at STK_LOAD.B23;

sfr far unsigned long   volatile STK_VAL              absolute 0xE000E018;
    const register unsigned short int CURRENT0 = 0;
    sbit  CURRENT0_bit at STK_VAL.B0;
    const register unsigned short int CURRENT1 = 1;
    sbit  CURRENT1_bit at STK_VAL.B1;
    const register unsigned short int CURRENT2 = 2;
    sbit  CURRENT2_bit at STK_VAL.B2;
    const register unsigned short int CURRENT3 = 3;
    sbit  CURRENT3_bit at STK_VAL.B3;
    const register unsigned short int CURRENT4 = 4;
    sbit  CURRENT4_bit at STK_VAL.B4;
    const register unsigned short int CURRENT5 = 5;
    sbit  CURRENT5_bit at STK_VAL.B5;
    const register unsigned short int CURRENT6 = 6;
    sbit  CURRENT6_bit at STK_VAL.B6;
    const register unsigned short int CURRENT7 = 7;
    sbit  CURRENT7_bit at STK_VAL.B7;
    const register unsigned short int CURRENT8 = 8;
    sbit  CURRENT8_bit at STK_VAL.B8;
    const register unsigned short int CURRENT9 = 9;
    sbit  CURRENT9_bit at STK_VAL.B9;
    const register unsigned short int CURRENT10 = 10;
    sbit  CURRENT10_bit at STK_VAL.B10;
    const register unsigned short int CURRENT11 = 11;
    sbit  CURRENT11_bit at STK_VAL.B11;
    const register unsigned short int CURRENT12 = 12;
    sbit  CURRENT12_bit at STK_VAL.B12;
    const register unsigned short int CURRENT13 = 13;
    sbit  CURRENT13_bit at STK_VAL.B13;
    const register unsigned short int CURRENT14 = 14;
    sbit  CURRENT14_bit at STK_VAL.B14;
    const register unsigned short int CURRENT15 = 15;
    sbit  CURRENT15_bit at STK_VAL.B15;
    const register unsigned short int CURRENT16 = 16;
    sbit  CURRENT16_bit at STK_VAL.B16;
    const register unsigned short int CURRENT17 = 17;
    sbit  CURRENT17_bit at STK_VAL.B17;
    const register unsigned short int CURRENT18 = 18;
    sbit  CURRENT18_bit at STK_VAL.B18;
    const register unsigned short int CURRENT19 = 19;
    sbit  CURRENT19_bit at STK_VAL.B19;
    const register unsigned short int CURRENT20 = 20;
    sbit  CURRENT20_bit at STK_VAL.B20;
    const register unsigned short int CURRENT21 = 21;
    sbit  CURRENT21_bit at STK_VAL.B21;
    const register unsigned short int CURRENT22 = 22;
    sbit  CURRENT22_bit at STK_VAL.B22;
    const register unsigned short int CURRENT23 = 23;
    sbit  CURRENT23_bit at STK_VAL.B23;

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


 typedef struct tagFSMC_BCR1BITS {
  union {
    struct {
      unsigned MBKEN : 1;
      unsigned MUXEN : 1;
      unsigned MTYP : 2;
      unsigned MWID : 2;
      unsigned FACCEN : 1;
      unsigned : 1;
      unsigned BURSTEN : 1;
      unsigned WAITPOL : 1;
      unsigned : 1;
      unsigned WAITCFG : 1;
      unsigned WREN : 1;
      unsigned WAITEN : 1;
      unsigned EXTMOD : 1;
      unsigned ASYNCWAIT : 1;
      unsigned : 3;
      unsigned CBURSTRW : 1;
      unsigned : 12;
    };
  };
} typeFSMC_BCR1BITS;
sfr far volatile typeFSMC_BCR1BITS FSMC_BCR1bits absolute 0xA0000000;

 typedef struct tagFSMC_BTR1BITS {
  union {
    struct {
      unsigned ADDSET : 4;
      unsigned ADDHLD : 4;
      unsigned DATAST : 8;
      unsigned BUSTURN : 4;
      unsigned CLKDIV : 4;
      unsigned DATLAT : 4;
      unsigned ACCMOD : 2;
      unsigned : 2;
    };
  };
} typeFSMC_BTR1BITS;
sfr far volatile typeFSMC_BTR1BITS FSMC_BTR1bits absolute 0xA0000004;

 typedef struct tagFSMC_BCR2BITS {
  union {
    struct {
      unsigned MBKEN : 1;
      unsigned MUXEN : 1;
      unsigned MTYP : 2;
      unsigned MWID : 2;
      unsigned FACCEN : 1;
      unsigned : 1;
      unsigned BURSTEN : 1;
      unsigned WAITPOL : 1;
      unsigned WRAPMOD : 1;
      unsigned WAITCFG : 1;
      unsigned WREN : 1;
      unsigned WAITEN : 1;
      unsigned EXTMOD : 1;
      unsigned ASYNCWAIT : 1;
      unsigned : 3;
      unsigned CBURSTRW : 1;
      unsigned : 12;
    };
  };
} typeFSMC_BCR2BITS;
sfr far volatile typeFSMC_BCR2BITS FSMC_BCR2bits absolute 0xA0000008;

 typedef struct tagFSMC_BTR2BITS {
  union {
    struct {
      unsigned ADDSET : 4;
      unsigned ADDHLD : 4;
      unsigned DATAST : 8;
      unsigned BUSTURN : 4;
      unsigned CLKDIV : 4;
      unsigned DATLAT : 4;
      unsigned ACCMOD : 2;
      unsigned : 2;
    };
  };
} typeFSMC_BTR2BITS;
sfr far volatile typeFSMC_BTR2BITS FSMC_BTR2bits absolute 0xA000000C;

 typedef struct tagFSMC_BCR3BITS {
  union {
    struct {
      unsigned MBKEN : 1;
      unsigned MUXEN : 1;
      unsigned MTYP : 2;
      unsigned MWID : 2;
      unsigned FACCEN : 1;
      unsigned : 1;
      unsigned BURSTEN : 1;
      unsigned WAITPOL : 1;
      unsigned WRAPMOD : 1;
      unsigned WAITCFG : 1;
      unsigned WREN : 1;
      unsigned WAITEN : 1;
      unsigned EXTMOD : 1;
      unsigned ASYNCWAIT : 1;
      unsigned : 3;
      unsigned CBURSTRW : 1;
      unsigned : 12;
    };
  };
} typeFSMC_BCR3BITS;
sfr far volatile typeFSMC_BCR3BITS FSMC_BCR3bits absolute 0xA0000010;

 typedef struct tagFSMC_BTR3BITS {
  union {
    struct {
      unsigned ADDSET : 4;
      unsigned ADDHLD : 4;
      unsigned DATAST : 8;
      unsigned BUSTURN : 4;
      unsigned CLKDIV : 4;
      unsigned DATLAT : 4;
      unsigned ACCMOD : 2;
      unsigned : 2;
    };
  };
} typeFSMC_BTR3BITS;
sfr far volatile typeFSMC_BTR3BITS FSMC_BTR3bits absolute 0xA0000014;

 typedef struct tagFSMC_BCR4BITS {
  union {
    struct {
      unsigned MBKEN : 1;
      unsigned MUXEN : 1;
      unsigned MTYP : 2;
      unsigned MWID : 2;
      unsigned FACCEN : 1;
      unsigned : 1;
      unsigned BURSTEN : 1;
      unsigned WAITPOL : 1;
      unsigned WRAPMOD : 1;
      unsigned WAITCFG : 1;
      unsigned WREN : 1;
      unsigned WAITEN : 1;
      unsigned EXTMOD : 1;
      unsigned ASYNCWAIT : 1;
      unsigned : 3;
      unsigned CBURSTRW : 1;
      unsigned : 12;
    };
  };
} typeFSMC_BCR4BITS;
sfr far volatile typeFSMC_BCR4BITS FSMC_BCR4bits absolute 0xA0000018;

 typedef struct tagFSMC_BTR4BITS {
  union {
    struct {
      unsigned ADDSET : 4;
      unsigned ADDHLD : 4;
      unsigned DATAST : 8;
      unsigned BUSTURN : 4;
      unsigned CLKDIV : 4;
      unsigned DATLAT : 4;
      unsigned ACCMOD : 2;
      unsigned : 2;
    };
  };
} typeFSMC_BTR4BITS;
sfr far volatile typeFSMC_BTR4BITS FSMC_BTR4bits absolute 0xA000001C;

 typedef struct tagFSMC_BWTR1BITS {
  union {
    struct {
      unsigned ADDSET : 4;
      unsigned ADDHLD : 4;
      unsigned DATAST : 8;
      unsigned : 4;
      unsigned CLKDIV : 4;
      unsigned DATLAT : 4;
      unsigned ACCMOD : 2;
      unsigned : 2;
    };
  };
} typeFSMC_BWTR1BITS;
sfr far volatile typeFSMC_BWTR1BITS FSMC_BWTR1bits absolute 0xA0000104;

 typedef struct tagFSMC_BWTR2BITS {
  union {
    struct {
      unsigned ADDSET : 4;
      unsigned ADDHLD : 4;
      unsigned DATAST : 8;
      unsigned : 4;
      unsigned CLKDIV : 4;
      unsigned DATLAT : 4;
      unsigned ACCMOD : 2;
      unsigned : 2;
    };
  };
} typeFSMC_BWTR2BITS;
sfr far volatile typeFSMC_BWTR2BITS FSMC_BWTR2bits absolute 0xA000010C;

 typedef struct tagFSMC_BWTR3BITS {
  union {
    struct {
      unsigned ADDSET : 4;
      unsigned ADDHLD : 4;
      unsigned DATAST : 8;
      unsigned : 4;
      unsigned CLKDIV : 4;
      unsigned DATLAT : 4;
      unsigned ACCMOD : 2;
      unsigned : 2;
    };
  };
} typeFSMC_BWTR3BITS;
sfr far volatile typeFSMC_BWTR3BITS FSMC_BWTR3bits absolute 0xA0000114;

 typedef struct tagFSMC_BWTR4BITS {
  union {
    struct {
      unsigned ADDSET : 4;
      unsigned ADDHLD : 4;
      unsigned DATAST : 8;
      unsigned : 4;
      unsigned CLKDIV : 4;
      unsigned DATLAT : 4;
      unsigned ACCMOD : 2;
      unsigned : 2;
    };
  };
} typeFSMC_BWTR4BITS;
sfr far volatile typeFSMC_BWTR4BITS FSMC_BWTR4bits absolute 0xA000011C;

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
      unsigned : 23;
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
      unsigned : 5;
      unsigned EWUP : 1;
      unsigned : 23;
    };
  };
} typePWR_CSRBITS;
sfr volatile typePWR_CSRBITS PWR_CSRbits absolute 0x40007004;

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
      unsigned PPRE1 : 3;
      unsigned PPRE2 : 3;
      unsigned ADCPRE : 2;
      unsigned PLLSRC : 1;
      unsigned PLLXTPRE : 1;
      unsigned PLLMUL : 4;
      unsigned : 2;
      unsigned MCO : 3;
      unsigned : 5;
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
      unsigned : 2;
      unsigned CSSF : 1;
      unsigned LSIRDYIE : 1;
      unsigned LSERDYIE : 1;
      unsigned HSIRDYIE : 1;
      unsigned HSERDYIE : 1;
      unsigned PLLRDYIE : 1;
      unsigned : 3;
      unsigned LSIRDYC : 1;
      unsigned LSERDYC : 1;
      unsigned HSIRDYC : 1;
      unsigned HSERDYC : 1;
      unsigned PLLRDYC : 1;
      unsigned : 2;
      unsigned CSSC : 1;
      unsigned : 8;
    };
  };
} typeRCC_CIRBITS;
sfr volatile typeRCC_CIRBITS RCC_CIRbits absolute 0x40021008;

 typedef struct tagRCC_APB2RSTRBITS {
  union {
    struct {
      unsigned AFIORST : 1;
      unsigned : 1;
      unsigned IOPARST : 1;
      unsigned IOPBRST : 1;
      unsigned IOPCRST : 1;
      unsigned IOPDRST : 1;
      unsigned IOPERST : 1;
      unsigned IOPFRST : 1;
      unsigned IOPGRST : 1;
      unsigned ADC1RST : 1;
      unsigned : 1;
      unsigned TIM1RST : 1;
      unsigned SPI1RST : 1;
      unsigned : 1;
      unsigned USART1RST : 1;
      unsigned : 1;
      unsigned TIM15RST : 1;
      unsigned TIM16RST : 1;
      unsigned TIM17RST : 1;
      unsigned : 13;
    };
  };
} typeRCC_APB2RSTRBITS;
sfr volatile typeRCC_APB2RSTRBITS RCC_APB2RSTRbits absolute 0x4002100C;

 typedef struct tagRCC_APB1RSTRBITS {
  union {
    struct {
      unsigned TIM2RST : 1;
      unsigned TIM3RST : 1;
      unsigned TIM4RST : 1;
      unsigned TIM5RST : 1;
      unsigned TIM6RST : 1;
      unsigned TIM7RST : 1;
      unsigned TIM12RST : 1;
      unsigned TIM13RST : 1;
      unsigned TIM14RST : 1;
      unsigned : 2;
      unsigned WWDGRST : 1;
      unsigned : 2;
      unsigned SPI2RST : 1;
      unsigned SPI3RST : 1;
      unsigned : 1;
      unsigned USART2RST : 1;
      unsigned USART3RST : 1;
      unsigned USART4RST : 1;
      unsigned USART5RST : 1;
      unsigned I2C1RST : 1;
      unsigned I2C2RST : 1;
      unsigned : 4;
      unsigned BKPRST : 1;
      unsigned PWRRST : 1;
      unsigned DACRST : 1;
      unsigned CECRST : 1;
      unsigned : 1;
    };
  };
} typeRCC_APB1RSTRBITS;
sfr volatile typeRCC_APB1RSTRBITS RCC_APB1RSTRbits absolute 0x40021010;

 typedef struct tagRCC_AHBENRBITS {
  union {
    struct {
      unsigned DMA1EN : 1;
      unsigned DMA2EN : 1;
      unsigned SRAMEN : 1;
      unsigned : 1;
      unsigned FLITFEN : 1;
      unsigned : 1;
      unsigned CRCEN : 1;
      unsigned : 1;
      unsigned FSMCEN : 1;
      unsigned : 23;
    };
  };
} typeRCC_AHBENRBITS;
sfr volatile typeRCC_AHBENRBITS RCC_AHBENRbits absolute 0x40021014;

 typedef struct tagRCC_APB2ENRBITS {
  union {
    struct {
      unsigned AFIOEN : 1;
      unsigned : 1;
      unsigned IOPAEN : 1;
      unsigned IOPBEN : 1;
      unsigned IOPCEN : 1;
      unsigned IOPDEN : 1;
      unsigned IOPEEN : 1;
      unsigned IOPFEN : 1;
      unsigned IOPGEN : 1;
      unsigned ADC1EN : 1;
      unsigned : 1;
      unsigned TIM1EN : 1;
      unsigned SPI1EN : 1;
      unsigned : 1;
      unsigned USART1EN : 1;
      unsigned : 1;
      unsigned TIM15EN : 1;
      unsigned TIM16EN : 1;
      unsigned TIM17EN : 1;
      unsigned : 13;
    };
  };
} typeRCC_APB2ENRBITS;
sfr volatile typeRCC_APB2ENRBITS RCC_APB2ENRbits absolute 0x40021018;

 typedef struct tagRCC_APB1ENRBITS {
  union {
    struct {
      unsigned TIM2EN : 1;
      unsigned TIM3EN : 1;
      unsigned TIM4EN : 1;
      unsigned TIM5EN : 1;
      unsigned TIM6EN : 1;
      unsigned TIM7EN : 1;
      unsigned TIM12EN : 1;
      unsigned TIM13EN : 1;
      unsigned TIM14EN : 1;
      unsigned : 2;
      unsigned WWDGEN : 1;
      unsigned : 2;
      unsigned SPI2EN : 1;
      unsigned SPI3EN : 1;
      unsigned : 1;
      unsigned USART2EN : 1;
      unsigned USART3EN : 1;
      unsigned UART4EN : 1;
      unsigned UART5EN : 1;
      unsigned I2C1EN : 1;
      unsigned I2C2EN : 1;
      unsigned : 4;
      unsigned BKPEN : 1;
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
      unsigned : 5;
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
      unsigned : 1;
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

 typedef struct tagRCC_CFGR2BITS {
  union {
    struct {
      unsigned PREDIV1 : 4;
      unsigned : 28;
    };
  };
} typeRCC_CFGR2BITS;
sfr volatile typeRCC_CFGR2BITS RCC_CFGR2bits absolute 0x4002102C;

 typedef struct tagGPIOA_CRLBITS {
  union {
    struct {
      unsigned MODE0 : 2;
      unsigned CNF0 : 2;
      unsigned MODE1 : 2;
      unsigned CNF1 : 2;
      unsigned MODE2 : 2;
      unsigned CNF2 : 2;
      unsigned MODE3 : 2;
      unsigned CNF3 : 2;
      unsigned MODE4 : 2;
      unsigned CNF4 : 2;
      unsigned MODE5 : 2;
      unsigned CNF5 : 2;
      unsigned MODE6 : 2;
      unsigned CNF6 : 2;
      unsigned MODE7 : 2;
      unsigned CNF7 : 2;
    };
  };
} typeGPIOA_CRLBITS;
sfr volatile typeGPIOA_CRLBITS GPIOA_CRLbits absolute 0x40010800;

 typedef struct tagGPIOA_CRHBITS {
  union {
    struct {
      unsigned MODE8 : 2;
      unsigned CNF8 : 2;
      unsigned MODE9 : 2;
      unsigned CNF9 : 2;
      unsigned MODE10 : 2;
      unsigned CNF10 : 2;
      unsigned MODE11 : 2;
      unsigned CNF11 : 2;
      unsigned MODE12 : 2;
      unsigned CNF12 : 2;
      unsigned MODE13 : 2;
      unsigned CNF13 : 2;
      unsigned MODE14 : 2;
      unsigned CNF14 : 2;
      unsigned MODE15 : 2;
      unsigned CNF15 : 2;
    };
  };
} typeGPIOA_CRHBITS;
sfr volatile typeGPIOA_CRHBITS GPIOA_CRHbits absolute 0x40010804;

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
sfr volatile typeGPIOA_IDRBITS GPIOA_IDRbits absolute 0x40010808;

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
sfr volatile typeGPIOA_ODRBITS GPIOA_ODRbits absolute 0x4001080C;

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
sfr volatile typeGPIOA_BSRRBITS GPIOA_BSRRbits absolute 0x40010810;

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
sfr volatile typeGPIOA_BRRBITS GPIOA_BRRbits absolute 0x40010814;

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
sfr volatile typeGPIOA_LCKRBITS GPIOA_LCKRbits absolute 0x40010818;

 typedef struct tagGPIOB_CRLBITS {
  union {
    struct {
      unsigned MODE0 : 2;
      unsigned CNF0 : 2;
      unsigned MODE1 : 2;
      unsigned CNF1 : 2;
      unsigned MODE2 : 2;
      unsigned CNF2 : 2;
      unsigned MODE3 : 2;
      unsigned CNF3 : 2;
      unsigned MODE4 : 2;
      unsigned CNF4 : 2;
      unsigned MODE5 : 2;
      unsigned CNF5 : 2;
      unsigned MODE6 : 2;
      unsigned CNF6 : 2;
      unsigned MODE7 : 2;
      unsigned CNF7 : 2;
    };
  };
} typeGPIOB_CRLBITS;
sfr volatile typeGPIOB_CRLBITS GPIOB_CRLbits absolute 0x40010C00;

 typedef struct tagGPIOB_CRHBITS {
  union {
    struct {
      unsigned MODE8 : 2;
      unsigned CNF8 : 2;
      unsigned MODE9 : 2;
      unsigned CNF9 : 2;
      unsigned MODE10 : 2;
      unsigned CNF10 : 2;
      unsigned MODE11 : 2;
      unsigned CNF11 : 2;
      unsigned MODE12 : 2;
      unsigned CNF12 : 2;
      unsigned MODE13 : 2;
      unsigned CNF13 : 2;
      unsigned MODE14 : 2;
      unsigned CNF14 : 2;
      unsigned MODE15 : 2;
      unsigned CNF15 : 2;
    };
  };
} typeGPIOB_CRHBITS;
sfr volatile typeGPIOB_CRHBITS GPIOB_CRHbits absolute 0x40010C04;

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
sfr volatile typeGPIOB_IDRBITS GPIOB_IDRbits absolute 0x40010C08;

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
sfr volatile typeGPIOB_ODRBITS GPIOB_ODRbits absolute 0x40010C0C;

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
sfr volatile typeGPIOB_BSRRBITS GPIOB_BSRRbits absolute 0x40010C10;

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
sfr volatile typeGPIOB_BRRBITS GPIOB_BRRbits absolute 0x40010C14;

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
sfr volatile typeGPIOB_LCKRBITS GPIOB_LCKRbits absolute 0x40010C18;

 typedef struct tagGPIOC_CRLBITS {
  union {
    struct {
      unsigned MODE0 : 2;
      unsigned CNF0 : 2;
      unsigned MODE1 : 2;
      unsigned CNF1 : 2;
      unsigned MODE2 : 2;
      unsigned CNF2 : 2;
      unsigned MODE3 : 2;
      unsigned CNF3 : 2;
      unsigned MODE4 : 2;
      unsigned CNF4 : 2;
      unsigned MODE5 : 2;
      unsigned CNF5 : 2;
      unsigned MODE6 : 2;
      unsigned CNF6 : 2;
      unsigned MODE7 : 2;
      unsigned CNF7 : 2;
    };
  };
} typeGPIOC_CRLBITS;
sfr volatile typeGPIOC_CRLBITS GPIOC_CRLbits absolute 0x40011000;

 typedef struct tagGPIOC_CRHBITS {
  union {
    struct {
      unsigned MODE8 : 2;
      unsigned CNF8 : 2;
      unsigned MODE9 : 2;
      unsigned CNF9 : 2;
      unsigned MODE10 : 2;
      unsigned CNF10 : 2;
      unsigned MODE11 : 2;
      unsigned CNF11 : 2;
      unsigned MODE12 : 2;
      unsigned CNF12 : 2;
      unsigned MODE13 : 2;
      unsigned CNF13 : 2;
      unsigned MODE14 : 2;
      unsigned CNF14 : 2;
      unsigned MODE15 : 2;
      unsigned CNF15 : 2;
    };
  };
} typeGPIOC_CRHBITS;
sfr volatile typeGPIOC_CRHBITS GPIOC_CRHbits absolute 0x40011004;

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
sfr volatile typeGPIOC_IDRBITS GPIOC_IDRbits absolute 0x40011008;

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
sfr volatile typeGPIOC_ODRBITS GPIOC_ODRbits absolute 0x4001100C;

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
sfr volatile typeGPIOC_BSRRBITS GPIOC_BSRRbits absolute 0x40011010;

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
sfr volatile typeGPIOC_BRRBITS GPIOC_BRRbits absolute 0x40011014;

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
sfr volatile typeGPIOC_LCKRBITS GPIOC_LCKRbits absolute 0x40011018;

 typedef struct tagGPIOD_CRLBITS {
  union {
    struct {
      unsigned MODE0 : 2;
      unsigned CNF0 : 2;
      unsigned MODE1 : 2;
      unsigned CNF1 : 2;
      unsigned MODE2 : 2;
      unsigned CNF2 : 2;
      unsigned MODE3 : 2;
      unsigned CNF3 : 2;
      unsigned MODE4 : 2;
      unsigned CNF4 : 2;
      unsigned MODE5 : 2;
      unsigned CNF5 : 2;
      unsigned MODE6 : 2;
      unsigned CNF6 : 2;
      unsigned MODE7 : 2;
      unsigned CNF7 : 2;
    };
  };
} typeGPIOD_CRLBITS;
sfr volatile typeGPIOD_CRLBITS GPIOD_CRLbits absolute 0x40011400;

 typedef struct tagGPIOD_CRHBITS {
  union {
    struct {
      unsigned MODE8 : 2;
      unsigned CNF8 : 2;
      unsigned MODE9 : 2;
      unsigned CNF9 : 2;
      unsigned MODE10 : 2;
      unsigned CNF10 : 2;
      unsigned MODE11 : 2;
      unsigned CNF11 : 2;
      unsigned MODE12 : 2;
      unsigned CNF12 : 2;
      unsigned MODE13 : 2;
      unsigned CNF13 : 2;
      unsigned MODE14 : 2;
      unsigned CNF14 : 2;
      unsigned MODE15 : 2;
      unsigned CNF15 : 2;
    };
  };
} typeGPIOD_CRHBITS;
sfr volatile typeGPIOD_CRHBITS GPIOD_CRHbits absolute 0x40011404;

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
sfr volatile typeGPIOD_IDRBITS GPIOD_IDRbits absolute 0x40011408;

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
sfr volatile typeGPIOD_ODRBITS GPIOD_ODRbits absolute 0x4001140C;

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
sfr volatile typeGPIOD_BSRRBITS GPIOD_BSRRbits absolute 0x40011410;

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
sfr volatile typeGPIOD_BRRBITS GPIOD_BRRbits absolute 0x40011414;

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
sfr volatile typeGPIOD_LCKRBITS GPIOD_LCKRbits absolute 0x40011418;

 typedef struct tagGPIOE_CRLBITS {
  union {
    struct {
      unsigned MODE0 : 2;
      unsigned CNF0 : 2;
      unsigned MODE1 : 2;
      unsigned CNF1 : 2;
      unsigned MODE2 : 2;
      unsigned CNF2 : 2;
      unsigned MODE3 : 2;
      unsigned CNF3 : 2;
      unsigned MODE4 : 2;
      unsigned CNF4 : 2;
      unsigned MODE5 : 2;
      unsigned CNF5 : 2;
      unsigned MODE6 : 2;
      unsigned CNF6 : 2;
      unsigned MODE7 : 2;
      unsigned CNF7 : 2;
    };
  };
} typeGPIOE_CRLBITS;
sfr volatile typeGPIOE_CRLBITS GPIOE_CRLbits absolute 0x40011800;

 typedef struct tagGPIOE_CRHBITS {
  union {
    struct {
      unsigned MODE8 : 2;
      unsigned CNF8 : 2;
      unsigned MODE9 : 2;
      unsigned CNF9 : 2;
      unsigned MODE10 : 2;
      unsigned CNF10 : 2;
      unsigned MODE11 : 2;
      unsigned CNF11 : 2;
      unsigned MODE12 : 2;
      unsigned CNF12 : 2;
      unsigned MODE13 : 2;
      unsigned CNF13 : 2;
      unsigned MODE14 : 2;
      unsigned CNF14 : 2;
      unsigned MODE15 : 2;
      unsigned CNF15 : 2;
    };
  };
} typeGPIOE_CRHBITS;
sfr volatile typeGPIOE_CRHBITS GPIOE_CRHbits absolute 0x40011804;

 typedef struct tagGPIOE_IDRBITS {
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
} typeGPIOE_IDRBITS;
sfr volatile typeGPIOE_IDRBITS GPIOE_IDRbits absolute 0x40011808;

 typedef struct tagGPIOE_ODRBITS {
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
} typeGPIOE_ODRBITS;
sfr volatile typeGPIOE_ODRBITS GPIOE_ODRbits absolute 0x4001180C;

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
sfr volatile typeGPIOE_BSRRBITS GPIOE_BSRRbits absolute 0x40011810;

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
sfr volatile typeGPIOE_BRRBITS GPIOE_BRRbits absolute 0x40011814;

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
sfr volatile typeGPIOE_LCKRBITS GPIOE_LCKRbits absolute 0x40011818;

 typedef struct tagGPIOF_CRLBITS {
  union {
    struct {
      unsigned MODE0 : 2;
      unsigned CNF0 : 2;
      unsigned MODE1 : 2;
      unsigned CNF1 : 2;
      unsigned MODE2 : 2;
      unsigned CNF2 : 2;
      unsigned MODE3 : 2;
      unsigned CNF3 : 2;
      unsigned MODE4 : 2;
      unsigned CNF4 : 2;
      unsigned MODE5 : 2;
      unsigned CNF5 : 2;
      unsigned MODE6 : 2;
      unsigned CNF6 : 2;
      unsigned MODE7 : 2;
      unsigned CNF7 : 2;
    };
  };
} typeGPIOF_CRLBITS;
sfr volatile typeGPIOF_CRLBITS GPIOF_CRLbits absolute 0x40011C00;

 typedef struct tagGPIOF_CRHBITS {
  union {
    struct {
      unsigned MODE8 : 2;
      unsigned CNF8 : 2;
      unsigned MODE9 : 2;
      unsigned CNF9 : 2;
      unsigned MODE10 : 2;
      unsigned CNF10 : 2;
      unsigned MODE11 : 2;
      unsigned CNF11 : 2;
      unsigned MODE12 : 2;
      unsigned CNF12 : 2;
      unsigned MODE13 : 2;
      unsigned CNF13 : 2;
      unsigned MODE14 : 2;
      unsigned CNF14 : 2;
      unsigned MODE15 : 2;
      unsigned CNF15 : 2;
    };
  };
} typeGPIOF_CRHBITS;
sfr volatile typeGPIOF_CRHBITS GPIOF_CRHbits absolute 0x40011C04;

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
sfr volatile typeGPIOF_IDRBITS GPIOF_IDRbits absolute 0x40011C08;

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
sfr volatile typeGPIOF_ODRBITS GPIOF_ODRbits absolute 0x40011C0C;

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
sfr volatile typeGPIOF_BSRRBITS GPIOF_BSRRbits absolute 0x40011C10;

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
sfr volatile typeGPIOF_BRRBITS GPIOF_BRRbits absolute 0x40011C14;

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
sfr volatile typeGPIOF_LCKRBITS GPIOF_LCKRbits absolute 0x40011C18;

 typedef struct tagGPIOG_CRLBITS {
  union {
    struct {
      unsigned MODE0 : 2;
      unsigned CNF0 : 2;
      unsigned MODE1 : 2;
      unsigned CNF1 : 2;
      unsigned MODE2 : 2;
      unsigned CNF2 : 2;
      unsigned MODE3 : 2;
      unsigned CNF3 : 2;
      unsigned MODE4 : 2;
      unsigned CNF4 : 2;
      unsigned MODE5 : 2;
      unsigned CNF5 : 2;
      unsigned MODE6 : 2;
      unsigned CNF6 : 2;
      unsigned MODE7 : 2;
      unsigned CNF7 : 2;
    };
  };
} typeGPIOG_CRLBITS;
sfr volatile typeGPIOG_CRLBITS GPIOG_CRLbits absolute 0x40012000;

 typedef struct tagGPIOG_CRHBITS {
  union {
    struct {
      unsigned MODE8 : 2;
      unsigned CNF8 : 2;
      unsigned MODE9 : 2;
      unsigned CNF9 : 2;
      unsigned MODE10 : 2;
      unsigned CNF10 : 2;
      unsigned MODE11 : 2;
      unsigned CNF11 : 2;
      unsigned MODE12 : 2;
      unsigned CNF12 : 2;
      unsigned MODE13 : 2;
      unsigned CNF13 : 2;
      unsigned MODE14 : 2;
      unsigned CNF14 : 2;
      unsigned MODE15 : 2;
      unsigned CNF15 : 2;
    };
  };
} typeGPIOG_CRHBITS;
sfr volatile typeGPIOG_CRHBITS GPIOG_CRHbits absolute 0x40012004;

 typedef struct tagGPIOG_IDRBITS {
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
} typeGPIOG_IDRBITS;
sfr volatile typeGPIOG_IDRBITS GPIOG_IDRbits absolute 0x40012008;

 typedef struct tagGPIOG_ODRBITS {
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
} typeGPIOG_ODRBITS;
sfr volatile typeGPIOG_ODRBITS GPIOG_ODRbits absolute 0x4001200C;

 typedef struct tagGPIOG_BSRRBITS {
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
} typeGPIOG_BSRRBITS;
sfr volatile typeGPIOG_BSRRBITS GPIOG_BSRRbits absolute 0x40012010;

 typedef struct tagGPIOG_BRRBITS {
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
} typeGPIOG_BRRBITS;
sfr volatile typeGPIOG_BRRBITS GPIOG_BRRbits absolute 0x40012014;

 typedef struct tagGPIOG_LCKRBITS {
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
} typeGPIOG_LCKRBITS;
sfr volatile typeGPIOG_LCKRBITS GPIOG_LCKRbits absolute 0x40012018;

 typedef struct tagAFIO_EVCRBITS {
  union {
    struct {
      unsigned PIN : 4;
      unsigned PORT : 3;
      unsigned EVOE : 1;
      unsigned : 24;
    };
  };
} typeAFIO_EVCRBITS;
sfr volatile typeAFIO_EVCRBITS AFIO_EVCRbits absolute 0x40010000;

 typedef struct tagAFIO_MAPRBITS {
  union {
    struct {
      unsigned SPI1_REMAP : 1;
      unsigned I2C1_REMAP : 1;
      unsigned USART1_REMAP : 1;
      unsigned USART2_REMAP : 1;
      unsigned USART3_REMAP : 2;
      unsigned TIM1_REMAP : 2;
      unsigned TIM2_REMAP : 2;
      unsigned TIM3_REMAP : 2;
      unsigned TIM4_REMAP : 1;
      unsigned : 2;
      unsigned PD01_REMAP : 1;
      unsigned TIM5CH4_IREMAP : 1;
      unsigned : 7;
      unsigned SWJ_CFG : 3;
      unsigned : 5;
    };
  };
} typeAFIO_MAPRBITS;
sfr volatile typeAFIO_MAPRBITS AFIO_MAPRbits absolute 0x40010004;

 typedef struct tagAFIO_EXTICR1BITS {
  union {
    struct {
      unsigned EXTI0 : 4;
      unsigned EXTI1 : 4;
      unsigned EXTI2 : 4;
      unsigned EXTI3 : 4;
      unsigned : 16;
    };
  };
} typeAFIO_EXTICR1BITS;
sfr volatile typeAFIO_EXTICR1BITS AFIO_EXTICR1bits absolute 0x40010008;

 typedef struct tagAFIO_EXTICR2BITS {
  union {
    struct {
      unsigned EXTI4 : 4;
      unsigned EXTI5 : 4;
      unsigned EXTI6 : 4;
      unsigned EXTI7 : 4;
      unsigned : 16;
    };
  };
} typeAFIO_EXTICR2BITS;
sfr volatile typeAFIO_EXTICR2BITS AFIO_EXTICR2bits absolute 0x4001000C;

 typedef struct tagAFIO_EXTICR3BITS {
  union {
    struct {
      unsigned EXTI8 : 4;
      unsigned EXTI9 : 4;
      unsigned EXTI10 : 4;
      unsigned EXTI11 : 4;
      unsigned : 16;
    };
  };
} typeAFIO_EXTICR3BITS;
sfr volatile typeAFIO_EXTICR3BITS AFIO_EXTICR3bits absolute 0x40010010;

 typedef struct tagAFIO_EXTICR4BITS {
  union {
    struct {
      unsigned EXTI12 : 4;
      unsigned EXTI13 : 4;
      unsigned EXTI14 : 4;
      unsigned EXTI15 : 4;
      unsigned : 16;
    };
  };
} typeAFIO_EXTICR4BITS;
sfr volatile typeAFIO_EXTICR4BITS AFIO_EXTICR4bits absolute 0x40010014;

 typedef struct tagAFIO_MAPR2BITS {
  union {
    struct {
      unsigned TIM15_REMAP : 1;
      unsigned TIM16_REMAP : 1;
      unsigned TIM17_REMAP : 1;
      unsigned CEC_REMAP : 1;
      unsigned TIM1_DMA_REMAP : 1;
      unsigned : 3;
      unsigned TIM13_REMAP : 1;
      unsigned TIM14_REMAP : 1;
      unsigned FSMC_NADV : 1;
      unsigned TIM67_DAC_DMA_REMAP : 1;
      unsigned TIM12_REMAP : 1;
      unsigned MISC_REMAP : 1;
      unsigned : 18;
    };
  };
} typeAFIO_MAPR2BITS;
sfr volatile typeAFIO_MAPR2BITS AFIO_MAPR2bits absolute 0x4001001C;

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
      unsigned : 14;
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
      unsigned : 14;
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
      unsigned : 14;
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
      unsigned : 14;
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
      unsigned : 14;
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
      unsigned : 14;
    };
  };
} typeEXTI_PRBITS;
sfr volatile typeEXTI_PRBITS EXTI_PRbits absolute 0x40010414;

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

 typedef struct tagDMA2_ISRBITS {
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
} typeDMA2_ISRBITS;
sfr volatile typeDMA2_ISRBITS DMA2_ISRbits absolute 0x40020400;

 typedef struct tagDMA2_IFCRBITS {
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
} typeDMA2_IFCRBITS;
sfr volatile typeDMA2_IFCRBITS DMA2_IFCRbits absolute 0x40020404;

 typedef struct tagDMA2_CCR1BITS {
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
} typeDMA2_CCR1BITS;
sfr volatile typeDMA2_CCR1BITS DMA2_CCR1bits absolute 0x40020408;

 typedef struct tagDMA2_CNDTR1BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_CNDTR1BITS;
sfr volatile typeDMA2_CNDTR1BITS DMA2_CNDTR1bits absolute 0x4002040C;

 typedef struct tagDMA2_CPAR1BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_CPAR1BITS;
sfr volatile typeDMA2_CPAR1BITS DMA2_CPAR1bits absolute 0x40020410;

 typedef struct tagDMA2_CMAR1BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA2_CMAR1BITS;
sfr volatile typeDMA2_CMAR1BITS DMA2_CMAR1bits absolute 0x40020414;

 typedef struct tagDMA2_CCR2BITS {
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
} typeDMA2_CCR2BITS;
sfr volatile typeDMA2_CCR2BITS DMA2_CCR2bits absolute 0x4002041C;

 typedef struct tagDMA2_CNDTR2BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_CNDTR2BITS;
sfr volatile typeDMA2_CNDTR2BITS DMA2_CNDTR2bits absolute 0x40020420;

 typedef struct tagDMA2_CPAR2BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_CPAR2BITS;
sfr volatile typeDMA2_CPAR2BITS DMA2_CPAR2bits absolute 0x40020424;

 typedef struct tagDMA2_CMAR2BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA2_CMAR2BITS;
sfr volatile typeDMA2_CMAR2BITS DMA2_CMAR2bits absolute 0x40020428;

 typedef struct tagDMA2_CCR3BITS {
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
} typeDMA2_CCR3BITS;
sfr volatile typeDMA2_CCR3BITS DMA2_CCR3bits absolute 0x40020430;

 typedef struct tagDMA2_CNDTR3BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_CNDTR3BITS;
sfr volatile typeDMA2_CNDTR3BITS DMA2_CNDTR3bits absolute 0x40020434;

 typedef struct tagDMA2_CPAR3BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_CPAR3BITS;
sfr volatile typeDMA2_CPAR3BITS DMA2_CPAR3bits absolute 0x40020438;

 typedef struct tagDMA2_CMAR3BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA2_CMAR3BITS;
sfr volatile typeDMA2_CMAR3BITS DMA2_CMAR3bits absolute 0x4002043C;

 typedef struct tagDMA2_CCR4BITS {
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
} typeDMA2_CCR4BITS;
sfr volatile typeDMA2_CCR4BITS DMA2_CCR4bits absolute 0x40020444;

 typedef struct tagDMA2_CNDTR4BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_CNDTR4BITS;
sfr volatile typeDMA2_CNDTR4BITS DMA2_CNDTR4bits absolute 0x40020448;

 typedef struct tagDMA2_CPAR4BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_CPAR4BITS;
sfr volatile typeDMA2_CPAR4BITS DMA2_CPAR4bits absolute 0x4002044C;

 typedef struct tagDMA2_CMAR4BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA2_CMAR4BITS;
sfr volatile typeDMA2_CMAR4BITS DMA2_CMAR4bits absolute 0x40020450;

 typedef struct tagDMA2_CCR5BITS {
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
} typeDMA2_CCR5BITS;
sfr volatile typeDMA2_CCR5BITS DMA2_CCR5bits absolute 0x40020458;

 typedef struct tagDMA2_CNDTR5BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_CNDTR5BITS;
sfr volatile typeDMA2_CNDTR5BITS DMA2_CNDTR5bits absolute 0x4002045C;

 typedef struct tagDMA2_CPAR5BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_CPAR5BITS;
sfr volatile typeDMA2_CPAR5BITS DMA2_CPAR5bits absolute 0x40020460;

 typedef struct tagDMA2_CMAR5BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA2_CMAR5BITS;
sfr volatile typeDMA2_CMAR5BITS DMA2_CMAR5bits absolute 0x40020464;

 typedef struct tagDMA2_CCR6BITS {
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
} typeDMA2_CCR6BITS;
sfr volatile typeDMA2_CCR6BITS DMA2_CCR6bits absolute 0x4002046C;

 typedef struct tagDMA2_CNDTR6BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_CNDTR6BITS;
sfr volatile typeDMA2_CNDTR6BITS DMA2_CNDTR6bits absolute 0x40020470;

 typedef struct tagDMA2_CPAR6BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_CPAR6BITS;
sfr volatile typeDMA2_CPAR6BITS DMA2_CPAR6bits absolute 0x40020474;

 typedef struct tagDMA2_CMAR6BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA2_CMAR6BITS;
sfr volatile typeDMA2_CMAR6BITS DMA2_CMAR6bits absolute 0x40020478;

 typedef struct tagDMA2_CCR7BITS {
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
} typeDMA2_CCR7BITS;
sfr volatile typeDMA2_CCR7BITS DMA2_CCR7bits absolute 0x40020480;

 typedef struct tagDMA2_CNDTR7BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_CNDTR7BITS;
sfr volatile typeDMA2_CNDTR7BITS DMA2_CNDTR7bits absolute 0x40020484;

 typedef struct tagDMA2_CPAR7BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_CPAR7BITS;
sfr volatile typeDMA2_CPAR7BITS DMA2_CPAR7bits absolute 0x40020488;

 typedef struct tagDMA2_CMAR7BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA2_CMAR7BITS;
sfr volatile typeDMA2_CMAR7BITS DMA2_CMAR7bits absolute 0x4002048C;

 typedef struct tagFLASH_ACRBITS {
  union {
    struct {
      unsigned : 3;
      unsigned HLFCYA : 1;
      unsigned : 28;
    };
  };
} typeFLASH_ACRBITS;
sfr volatile typeFLASH_ACRBITS FLASH_ACRbits absolute 0x40022000;

 typedef struct tagFLASH_KEYRBITS {
  union {
    struct {
      unsigned KEY : 32;
    };
  };
} typeFLASH_KEYRBITS;
sfr volatile typeFLASH_KEYRBITS FLASH_KEYRbits absolute 0x40022004;

 typedef struct tagFLASH_OPTKEYRBITS {
  union {
    struct {
      unsigned OPTKEY : 32;
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
      unsigned WRPRTERR : 1;
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
      unsigned : 19;
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
      unsigned RDPRT : 1;
      unsigned WDG_SW : 1;
      unsigned nRST_STOP : 1;
      unsigned nRST_STDBY : 1;
      unsigned : 5;
      unsigned Data0 : 8;
      unsigned Data1 : 8;
      unsigned : 6;
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

 typedef struct tagRTC_CRHBITS {
  union {
    struct {
      unsigned SECIE : 1;
      unsigned ALRIE : 1;
      unsigned OWIE : 1;
      unsigned : 29;
    };
  };
} typeRTC_CRHBITS;
sfr volatile typeRTC_CRHBITS RTC_CRHbits absolute 0x40002800;

 typedef struct tagRTC_CRLBITS {
  union {
    struct {
      unsigned SECF : 1;
      unsigned ALRF : 1;
      unsigned OWF : 1;
      unsigned RSF : 1;
      unsigned CNF : 1;
      unsigned RTOFF : 1;
      unsigned : 26;
    };
  };
} typeRTC_CRLBITS;
sfr volatile typeRTC_CRLBITS RTC_CRLbits absolute 0x40002804;

 typedef struct tagRTC_PRLHBITS {
  union {
    struct {
      unsigned PRLH : 4;
      unsigned : 28;
    };
  };
} typeRTC_PRLHBITS;
sfr volatile typeRTC_PRLHBITS RTC_PRLHbits absolute 0x40002808;

 typedef struct tagRTC_PRLLBITS {
  union {
    struct {
      unsigned PRLL : 16;
      unsigned : 16;
    };
  };
} typeRTC_PRLLBITS;
sfr volatile typeRTC_PRLLBITS RTC_PRLLbits absolute 0x4000280C;

 typedef struct tagRTC_DIVHBITS {
  union {
    struct {
      unsigned DIVH : 4;
      unsigned : 28;
    };
  };
} typeRTC_DIVHBITS;
sfr volatile typeRTC_DIVHBITS RTC_DIVHbits absolute 0x40002810;

 typedef struct tagRTC_DIVLBITS {
  union {
    struct {
      unsigned DIVL : 16;
      unsigned : 16;
    };
  };
} typeRTC_DIVLBITS;
sfr volatile typeRTC_DIVLBITS RTC_DIVLbits absolute 0x40002814;

 typedef struct tagRTC_CNTHBITS {
  union {
    struct {
      unsigned CNTH : 16;
      unsigned : 16;
    };
  };
} typeRTC_CNTHBITS;
sfr volatile typeRTC_CNTHBITS RTC_CNTHbits absolute 0x40002818;

 typedef struct tagRTC_CNTLBITS {
  union {
    struct {
      unsigned CNTL : 16;
      unsigned : 16;
    };
  };
} typeRTC_CNTLBITS;
sfr volatile typeRTC_CNTLBITS RTC_CNTLbits absolute 0x4000281C;

 typedef struct tagRTC_ALRHBITS {
  union {
    struct {
      unsigned ALRH : 16;
      unsigned : 16;
    };
  };
} typeRTC_ALRHBITS;
sfr volatile typeRTC_ALRHBITS RTC_ALRHbits absolute 0x40002820;

 typedef struct tagRTC_ALRLBITS {
  union {
    struct {
      unsigned ALRL : 16;
      unsigned : 16;
    };
  };
} typeRTC_ALRLBITS;
sfr volatile typeRTC_ALRLBITS RTC_ALRLbits absolute 0x40002824;

 typedef struct tagBKP_DR1BITS {
  union {
    struct {
      unsigned D1 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR1BITS;
sfr volatile typeBKP_DR1BITS BKP_DR1bits absolute 0x40006C04;

 typedef struct tagBKP_DR2BITS {
  union {
    struct {
      unsigned D2 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR2BITS;
sfr volatile typeBKP_DR2BITS BKP_DR2bits absolute 0x40006C08;

 typedef struct tagBKP_DR3BITS {
  union {
    struct {
      unsigned D3 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR3BITS;
sfr volatile typeBKP_DR3BITS BKP_DR3bits absolute 0x40006C0C;

 typedef struct tagBKP_DR4BITS {
  union {
    struct {
      unsigned D4 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR4BITS;
sfr volatile typeBKP_DR4BITS BKP_DR4bits absolute 0x40006C10;

 typedef struct tagBKP_DR5BITS {
  union {
    struct {
      unsigned D5 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR5BITS;
sfr volatile typeBKP_DR5BITS BKP_DR5bits absolute 0x40006C14;

 typedef struct tagBKP_DR6BITS {
  union {
    struct {
      unsigned D6 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR6BITS;
sfr volatile typeBKP_DR6BITS BKP_DR6bits absolute 0x40006C18;

 typedef struct tagBKP_DR7BITS {
  union {
    struct {
      unsigned D7 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR7BITS;
sfr volatile typeBKP_DR7BITS BKP_DR7bits absolute 0x40006C1C;

 typedef struct tagBKP_DR8BITS {
  union {
    struct {
      unsigned D8 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR8BITS;
sfr volatile typeBKP_DR8BITS BKP_DR8bits absolute 0x40006C20;

 typedef struct tagBKP_DR9BITS {
  union {
    struct {
      unsigned D9 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR9BITS;
sfr volatile typeBKP_DR9BITS BKP_DR9bits absolute 0x40006C24;

 typedef struct tagBKP_DR10BITS {
  union {
    struct {
      unsigned D10 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR10BITS;
sfr volatile typeBKP_DR10BITS BKP_DR10bits absolute 0x40006C28;

 typedef struct tagBKP_DR11BITS {
  union {
    struct {
      unsigned DR11 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR11BITS;
sfr volatile typeBKP_DR11BITS BKP_DR11bits absolute 0x40006C40;

 typedef struct tagBKP_DR12BITS {
  union {
    struct {
      unsigned DR12 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR12BITS;
sfr volatile typeBKP_DR12BITS BKP_DR12bits absolute 0x40006C44;

 typedef struct tagBKP_DR13BITS {
  union {
    struct {
      unsigned DR13 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR13BITS;
sfr volatile typeBKP_DR13BITS BKP_DR13bits absolute 0x40006C48;

 typedef struct tagBKP_DR14BITS {
  union {
    struct {
      unsigned D14 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR14BITS;
sfr volatile typeBKP_DR14BITS BKP_DR14bits absolute 0x40006C4C;

 typedef struct tagBKP_DR15BITS {
  union {
    struct {
      unsigned D15 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR15BITS;
sfr volatile typeBKP_DR15BITS BKP_DR15bits absolute 0x40006C50;

 typedef struct tagBKP_DR16BITS {
  union {
    struct {
      unsigned D16 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR16BITS;
sfr volatile typeBKP_DR16BITS BKP_DR16bits absolute 0x40006C54;

 typedef struct tagBKP_DR17BITS {
  union {
    struct {
      unsigned D17 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR17BITS;
sfr volatile typeBKP_DR17BITS BKP_DR17bits absolute 0x40006C58;

 typedef struct tagBKP_DR18BITS {
  union {
    struct {
      unsigned D18 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR18BITS;
sfr volatile typeBKP_DR18BITS BKP_DR18bits absolute 0x40006C5C;

 typedef struct tagBKP_DR19BITS {
  union {
    struct {
      unsigned D19 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR19BITS;
sfr volatile typeBKP_DR19BITS BKP_DR19bits absolute 0x40006C60;

 typedef struct tagBKP_DR20BITS {
  union {
    struct {
      unsigned D20 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR20BITS;
sfr volatile typeBKP_DR20BITS BKP_DR20bits absolute 0x40006C64;

 typedef struct tagBKP_DR21BITS {
  union {
    struct {
      unsigned D21 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR21BITS;
sfr volatile typeBKP_DR21BITS BKP_DR21bits absolute 0x40006C68;

 typedef struct tagBKP_DR22BITS {
  union {
    struct {
      unsigned D22 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR22BITS;
sfr volatile typeBKP_DR22BITS BKP_DR22bits absolute 0x40006C6C;

 typedef struct tagBKP_DR23BITS {
  union {
    struct {
      unsigned D23 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR23BITS;
sfr volatile typeBKP_DR23BITS BKP_DR23bits absolute 0x40006C70;

 typedef struct tagBKP_DR24BITS {
  union {
    struct {
      unsigned D24 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR24BITS;
sfr volatile typeBKP_DR24BITS BKP_DR24bits absolute 0x40006C74;

 typedef struct tagBKP_DR25BITS {
  union {
    struct {
      unsigned D25 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR25BITS;
sfr volatile typeBKP_DR25BITS BKP_DR25bits absolute 0x40006C78;

 typedef struct tagBKP_DR26BITS {
  union {
    struct {
      unsigned D26 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR26BITS;
sfr volatile typeBKP_DR26BITS BKP_DR26bits absolute 0x40006C7C;

 typedef struct tagBKP_DR27BITS {
  union {
    struct {
      unsigned D27 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR27BITS;
sfr volatile typeBKP_DR27BITS BKP_DR27bits absolute 0x40006C80;

 typedef struct tagBKP_DR28BITS {
  union {
    struct {
      unsigned D28 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR28BITS;
sfr volatile typeBKP_DR28BITS BKP_DR28bits absolute 0x40006C84;

 typedef struct tagBKP_DR29BITS {
  union {
    struct {
      unsigned D29 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR29BITS;
sfr volatile typeBKP_DR29BITS BKP_DR29bits absolute 0x40006C88;

 typedef struct tagBKP_DR30BITS {
  union {
    struct {
      unsigned D30 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR30BITS;
sfr volatile typeBKP_DR30BITS BKP_DR30bits absolute 0x40006C8C;

 typedef struct tagBKP_DR31BITS {
  union {
    struct {
      unsigned D31 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR31BITS;
sfr volatile typeBKP_DR31BITS BKP_DR31bits absolute 0x40006C90;

 typedef struct tagBKP_DR32BITS {
  union {
    struct {
      unsigned D32 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR32BITS;
sfr volatile typeBKP_DR32BITS BKP_DR32bits absolute 0x40006C94;

 typedef struct tagBKP_DR33BITS {
  union {
    struct {
      unsigned D33 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR33BITS;
sfr volatile typeBKP_DR33BITS BKP_DR33bits absolute 0x40006C98;

 typedef struct tagBKP_DR34BITS {
  union {
    struct {
      unsigned D34 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR34BITS;
sfr volatile typeBKP_DR34BITS BKP_DR34bits absolute 0x40006C9C;

 typedef struct tagBKP_DR35BITS {
  union {
    struct {
      unsigned D35 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR35BITS;
sfr volatile typeBKP_DR35BITS BKP_DR35bits absolute 0x40006CA0;

 typedef struct tagBKP_DR36BITS {
  union {
    struct {
      unsigned D36 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR36BITS;
sfr volatile typeBKP_DR36BITS BKP_DR36bits absolute 0x40006CA4;

 typedef struct tagBKP_DR37BITS {
  union {
    struct {
      unsigned D37 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR37BITS;
sfr volatile typeBKP_DR37BITS BKP_DR37bits absolute 0x40006CA8;

 typedef struct tagBKP_DR38BITS {
  union {
    struct {
      unsigned D38 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR38BITS;
sfr volatile typeBKP_DR38BITS BKP_DR38bits absolute 0x40006CAC;

 typedef struct tagBKP_DR39BITS {
  union {
    struct {
      unsigned D39 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR39BITS;
sfr volatile typeBKP_DR39BITS BKP_DR39bits absolute 0x40006CB0;

 typedef struct tagBKP_DR40BITS {
  union {
    struct {
      unsigned D40 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR40BITS;
sfr volatile typeBKP_DR40BITS BKP_DR40bits absolute 0x40006CB4;

 typedef struct tagBKP_DR41BITS {
  union {
    struct {
      unsigned D41 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR41BITS;
sfr volatile typeBKP_DR41BITS BKP_DR41bits absolute 0x40006CB8;

 typedef struct tagBKP_DR42BITS {
  union {
    struct {
      unsigned D42 : 16;
      unsigned : 16;
    };
  };
} typeBKP_DR42BITS;
sfr volatile typeBKP_DR42BITS BKP_DR42bits absolute 0x40006CBC;

 typedef struct tagBKP_RTCCRBITS {
  union {
    struct {
      unsigned CAL : 7;
      unsigned CCO : 1;
      unsigned ASOE : 1;
      unsigned ASOS : 1;
      unsigned : 22;
    };
  };
} typeBKP_RTCCRBITS;
sfr volatile typeBKP_RTCCRBITS BKP_RTCCRbits absolute 0x40006C2C;

 typedef struct tagBKP_CRBITS {
  union {
    struct {
      unsigned TPE : 1;
      unsigned TPAL : 1;
      unsigned : 30;
    };
  };
} typeBKP_CRBITS;
sfr volatile typeBKP_CRBITS BKP_CRbits absolute 0x40006C30;

 typedef struct tagBKP_CSRBITS {
  union {
    struct {
      unsigned CTE : 1;
      unsigned CTI : 1;
      unsigned TPIE : 1;
      unsigned : 5;
      unsigned TEF : 1;
      unsigned TIF : 1;
      unsigned : 22;
    };
  };
} typeBKP_CSRBITS;
sfr volatile typeBKP_CSRBITS BKP_CSRbits absolute 0x40006C34;

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
      unsigned : 30;
    };
  };
} typeIWDG_SRBITS;
sfr volatile typeIWDG_SRBITS IWDG_SRbits absolute 0x4000300C;

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
      unsigned EWI : 1;
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
      unsigned ICPCS : 2;
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
      unsigned : 3;
      unsigned IC4F : 4;
      unsigned : 13;
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

 typedef struct tagTIM1_RCRBITS {
  union {
    struct {
      unsigned REP : 8;
      unsigned : 24;
    };
  };
} typeTIM1_RCRBITS;
sfr volatile typeTIM1_RCRBITS TIM1_RCRbits absolute 0x40012C30;

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
      unsigned OCCS : 1;
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
      unsigned : 2;
      unsigned CC2E : 1;
      unsigned CC2P : 1;
      unsigned : 2;
      unsigned CC3E : 1;
      unsigned CC3P : 1;
      unsigned : 2;
      unsigned CC4E : 1;
      unsigned CC4P : 1;
      unsigned : 18;
    };
  };
} typeTIM2_CCERBITS;
sfr volatile typeTIM2_CCERBITS TIM2_CCERbits absolute 0x40000020;

 typedef struct tagTIM2_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
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
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM2_ARRBITS;
sfr volatile typeTIM2_ARRBITS TIM2_ARRbits absolute 0x4000002C;

 typedef struct tagTIM2_CCR1BITS {
  union {
    struct {
      unsigned CCR1 : 16;
      unsigned : 16;
    };
  };
} typeTIM2_CCR1BITS;
sfr volatile typeTIM2_CCR1BITS TIM2_CCR1bits absolute 0x40000034;

 typedef struct tagTIM2_CCR2BITS {
  union {
    struct {
      unsigned CCR2 : 16;
      unsigned : 16;
    };
  };
} typeTIM2_CCR2BITS;
sfr volatile typeTIM2_CCR2BITS TIM2_CCR2bits absolute 0x40000038;

 typedef struct tagTIM2_CCR3BITS {
  union {
    struct {
      unsigned CCR3 : 16;
      unsigned : 16;
    };
  };
} typeTIM2_CCR3BITS;
sfr volatile typeTIM2_CCR3BITS TIM2_CCR3bits absolute 0x4000003C;

 typedef struct tagTIM2_CCR4BITS {
  union {
    struct {
      unsigned CCR4 : 16;
      unsigned : 16;
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
      unsigned OCCS : 1;
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
      unsigned : 2;
      unsigned CC2E : 1;
      unsigned CC2P : 1;
      unsigned : 2;
      unsigned CC3E : 1;
      unsigned CC3P : 1;
      unsigned : 2;
      unsigned CC4E : 1;
      unsigned CC4P : 1;
      unsigned : 18;
    };
  };
} typeTIM3_CCERBITS;
sfr volatile typeTIM3_CCERBITS TIM3_CCERbits absolute 0x40000420;

 typedef struct tagTIM3_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
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
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM3_ARRBITS;
sfr volatile typeTIM3_ARRBITS TIM3_ARRbits absolute 0x4000042C;

 typedef struct tagTIM3_CCR1BITS {
  union {
    struct {
      unsigned CCR1 : 16;
      unsigned : 16;
    };
  };
} typeTIM3_CCR1BITS;
sfr volatile typeTIM3_CCR1BITS TIM3_CCR1bits absolute 0x40000434;

 typedef struct tagTIM3_CCR2BITS {
  union {
    struct {
      unsigned CCR2 : 16;
      unsigned : 16;
    };
  };
} typeTIM3_CCR2BITS;
sfr volatile typeTIM3_CCR2BITS TIM3_CCR2bits absolute 0x40000438;

 typedef struct tagTIM3_CCR3BITS {
  union {
    struct {
      unsigned CCR3 : 16;
      unsigned : 16;
    };
  };
} typeTIM3_CCR3BITS;
sfr volatile typeTIM3_CCR3BITS TIM3_CCR3bits absolute 0x4000043C;

 typedef struct tagTIM3_CCR4BITS {
  union {
    struct {
      unsigned CCR4 : 16;
      unsigned : 16;
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

 typedef struct tagTIM4_CR1BITS {
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
} typeTIM4_CR1BITS;
sfr volatile typeTIM4_CR1BITS TIM4_CR1bits absolute 0x40000800;

 typedef struct tagTIM4_CR2BITS {
  union {
    struct {
      unsigned : 3;
      unsigned CCDS : 1;
      unsigned MMS : 3;
      unsigned TI1S : 1;
      unsigned : 24;
    };
  };
} typeTIM4_CR2BITS;
sfr volatile typeTIM4_CR2BITS TIM4_CR2bits absolute 0x40000804;

 typedef struct tagTIM4_SMCRBITS {
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
      unsigned : 16;
    };
  };
} typeTIM4_SMCRBITS;
sfr volatile typeTIM4_SMCRBITS TIM4_SMCRbits absolute 0x40000808;

 typedef struct tagTIM4_DIERBITS {
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
} typeTIM4_DIERBITS;
sfr volatile typeTIM4_DIERBITS TIM4_DIERbits absolute 0x4000080C;

 typedef struct tagTIM4_SRBITS {
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
} typeTIM4_SRBITS;
sfr volatile typeTIM4_SRBITS TIM4_SRbits absolute 0x40000810;

 typedef struct tagTIM4_EGRBITS {
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
} typeTIM4_EGRBITS;
sfr volatile typeTIM4_EGRBITS TIM4_EGRbits absolute 0x40000814;

 typedef struct tagTIM4_CCMR1_OutputBITS {
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
} typeTIM4_CCMR1_OutputBITS;
sfr volatile typeTIM4_CCMR1_OutputBITS TIM4_CCMR1_Outputbits absolute 0x40000818;

 typedef struct tagTIM4_CCMR1_InputBITS {
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
} typeTIM4_CCMR1_InputBITS;
sfr volatile typeTIM4_CCMR1_InputBITS TIM4_CCMR1_Inputbits absolute 0x40000818;

 typedef struct tagTIM4_CCMR2_OutputBITS {
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
} typeTIM4_CCMR2_OutputBITS;
sfr volatile typeTIM4_CCMR2_OutputBITS TIM4_CCMR2_Outputbits absolute 0x4000081C;

 typedef struct tagTIM4_CCMR2_InputBITS {
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
} typeTIM4_CCMR2_InputBITS;
sfr volatile typeTIM4_CCMR2_InputBITS TIM4_CCMR2_Inputbits absolute 0x4000081C;

 typedef struct tagTIM4_CCERBITS {
  union {
    struct {
      unsigned CC1E : 1;
      unsigned CC1P : 1;
      unsigned : 2;
      unsigned CC2E : 1;
      unsigned CC2P : 1;
      unsigned : 2;
      unsigned CC3E : 1;
      unsigned CC3P : 1;
      unsigned : 2;
      unsigned CC4E : 1;
      unsigned CC4P : 1;
      unsigned : 18;
    };
  };
} typeTIM4_CCERBITS;
sfr volatile typeTIM4_CCERBITS TIM4_CCERbits absolute 0x40000820;

 typedef struct tagTIM4_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
    };
  };
} typeTIM4_CNTBITS;
sfr volatile typeTIM4_CNTBITS TIM4_CNTbits absolute 0x40000824;

 typedef struct tagTIM4_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM4_PSCBITS;
sfr volatile typeTIM4_PSCBITS TIM4_PSCbits absolute 0x40000828;

 typedef struct tagTIM4_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM4_ARRBITS;
sfr volatile typeTIM4_ARRBITS TIM4_ARRbits absolute 0x4000082C;

 typedef struct tagTIM4_CCR1BITS {
  union {
    struct {
      unsigned CCR1 : 16;
      unsigned : 16;
    };
  };
} typeTIM4_CCR1BITS;
sfr volatile typeTIM4_CCR1BITS TIM4_CCR1bits absolute 0x40000834;

 typedef struct tagTIM4_CCR2BITS {
  union {
    struct {
      unsigned CCR2 : 16;
      unsigned : 16;
    };
  };
} typeTIM4_CCR2BITS;
sfr volatile typeTIM4_CCR2BITS TIM4_CCR2bits absolute 0x40000838;

 typedef struct tagTIM4_CCR3BITS {
  union {
    struct {
      unsigned CCR3 : 16;
      unsigned : 16;
    };
  };
} typeTIM4_CCR3BITS;
sfr volatile typeTIM4_CCR3BITS TIM4_CCR3bits absolute 0x4000083C;

 typedef struct tagTIM4_CCR4BITS {
  union {
    struct {
      unsigned CCR4 : 16;
      unsigned : 16;
    };
  };
} typeTIM4_CCR4BITS;
sfr volatile typeTIM4_CCR4BITS TIM4_CCR4bits absolute 0x40000840;

 typedef struct tagTIM4_DCRBITS {
  union {
    struct {
      unsigned DBA : 5;
      unsigned : 3;
      unsigned DBL : 5;
      unsigned : 19;
    };
  };
} typeTIM4_DCRBITS;
sfr volatile typeTIM4_DCRBITS TIM4_DCRbits absolute 0x40000848;

 typedef struct tagTIM4_DMARBITS {
  union {
    struct {
      unsigned DMAB : 16;
      unsigned : 16;
    };
  };
} typeTIM4_DMARBITS;
sfr volatile typeTIM4_DMARBITS TIM4_DMARbits absolute 0x4000084C;

 typedef struct tagTIM5_CR1BITS {
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
} typeTIM5_CR1BITS;
sfr volatile typeTIM5_CR1BITS TIM5_CR1bits absolute 0x40000C00;

 typedef struct tagTIM5_CR2BITS {
  union {
    struct {
      unsigned : 3;
      unsigned CCDS : 1;
      unsigned MMS : 3;
      unsigned TI1S : 1;
      unsigned : 24;
    };
  };
} typeTIM5_CR2BITS;
sfr volatile typeTIM5_CR2BITS TIM5_CR2bits absolute 0x40000C04;

 typedef struct tagTIM5_SMCRBITS {
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
      unsigned : 16;
    };
  };
} typeTIM5_SMCRBITS;
sfr volatile typeTIM5_SMCRBITS TIM5_SMCRbits absolute 0x40000C08;

 typedef struct tagTIM5_DIERBITS {
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
} typeTIM5_DIERBITS;
sfr volatile typeTIM5_DIERBITS TIM5_DIERbits absolute 0x40000C0C;

 typedef struct tagTIM5_SRBITS {
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
} typeTIM5_SRBITS;
sfr volatile typeTIM5_SRBITS TIM5_SRbits absolute 0x40000C10;

 typedef struct tagTIM5_EGRBITS {
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
} typeTIM5_EGRBITS;
sfr volatile typeTIM5_EGRBITS TIM5_EGRbits absolute 0x40000C14;

 typedef struct tagTIM5_CCMR1_OutputBITS {
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
} typeTIM5_CCMR1_OutputBITS;
sfr volatile typeTIM5_CCMR1_OutputBITS TIM5_CCMR1_Outputbits absolute 0x40000C18;

 typedef struct tagTIM5_CCMR1_InputBITS {
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
} typeTIM5_CCMR1_InputBITS;
sfr volatile typeTIM5_CCMR1_InputBITS TIM5_CCMR1_Inputbits absolute 0x40000C18;

 typedef struct tagTIM5_CCMR2_OutputBITS {
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
} typeTIM5_CCMR2_OutputBITS;
sfr volatile typeTIM5_CCMR2_OutputBITS TIM5_CCMR2_Outputbits absolute 0x40000C1C;

 typedef struct tagTIM5_CCMR2_InputBITS {
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
} typeTIM5_CCMR2_InputBITS;
sfr volatile typeTIM5_CCMR2_InputBITS TIM5_CCMR2_Inputbits absolute 0x40000C1C;

 typedef struct tagTIM5_CCERBITS {
  union {
    struct {
      unsigned CC1E : 1;
      unsigned CC1P : 1;
      unsigned : 2;
      unsigned CC2E : 1;
      unsigned CC2P : 1;
      unsigned : 2;
      unsigned CC3E : 1;
      unsigned CC3P : 1;
      unsigned : 2;
      unsigned CC4E : 1;
      unsigned CC4P : 1;
      unsigned : 18;
    };
  };
} typeTIM5_CCERBITS;
sfr volatile typeTIM5_CCERBITS TIM5_CCERbits absolute 0x40000C20;

 typedef struct tagTIM5_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
    };
  };
} typeTIM5_CNTBITS;
sfr volatile typeTIM5_CNTBITS TIM5_CNTbits absolute 0x40000C24;

 typedef struct tagTIM5_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM5_PSCBITS;
sfr volatile typeTIM5_PSCBITS TIM5_PSCbits absolute 0x40000C28;

 typedef struct tagTIM5_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM5_ARRBITS;
sfr volatile typeTIM5_ARRBITS TIM5_ARRbits absolute 0x40000C2C;

 typedef struct tagTIM5_CCR1BITS {
  union {
    struct {
      unsigned CCR1 : 16;
      unsigned : 16;
    };
  };
} typeTIM5_CCR1BITS;
sfr volatile typeTIM5_CCR1BITS TIM5_CCR1bits absolute 0x40000C34;

 typedef struct tagTIM5_CCR2BITS {
  union {
    struct {
      unsigned CCR2 : 16;
      unsigned : 16;
    };
  };
} typeTIM5_CCR2BITS;
sfr volatile typeTIM5_CCR2BITS TIM5_CCR2bits absolute 0x40000C38;

 typedef struct tagTIM5_CCR3BITS {
  union {
    struct {
      unsigned CCR3 : 16;
      unsigned : 16;
    };
  };
} typeTIM5_CCR3BITS;
sfr volatile typeTIM5_CCR3BITS TIM5_CCR3bits absolute 0x40000C3C;

 typedef struct tagTIM5_CCR4BITS {
  union {
    struct {
      unsigned CCR4 : 16;
      unsigned : 16;
    };
  };
} typeTIM5_CCR4BITS;
sfr volatile typeTIM5_CCR4BITS TIM5_CCR4bits absolute 0x40000C40;

 typedef struct tagTIM5_DCRBITS {
  union {
    struct {
      unsigned DBA : 5;
      unsigned : 3;
      unsigned DBL : 5;
      unsigned : 19;
    };
  };
} typeTIM5_DCRBITS;
sfr volatile typeTIM5_DCRBITS TIM5_DCRbits absolute 0x40000C48;

 typedef struct tagTIM5_DMARBITS {
  union {
    struct {
      unsigned DMAB : 16;
      unsigned : 16;
    };
  };
} typeTIM5_DMARBITS;
sfr volatile typeTIM5_DMARBITS TIM5_DMARbits absolute 0x40000C4C;

 typedef struct tagTIM12_CR1BITS {
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
} typeTIM12_CR1BITS;
sfr volatile typeTIM12_CR1BITS TIM12_CR1bits absolute 0x40001800;

 typedef struct tagTIM12_CR2BITS {
  union {
    struct {
      unsigned : 4;
      unsigned MMS : 3;
      unsigned : 25;
    };
  };
} typeTIM12_CR2BITS;
sfr volatile typeTIM12_CR2BITS TIM12_CR2bits absolute 0x40001804;

 typedef struct tagTIM12_SMCRBITS {
  union {
    struct {
      unsigned SMS : 3;
      unsigned : 1;
      unsigned TS : 3;
      unsigned MSM : 1;
      unsigned : 24;
    };
  };
} typeTIM12_SMCRBITS;
sfr volatile typeTIM12_SMCRBITS TIM12_SMCRbits absolute 0x40001808;

 typedef struct tagTIM12_DIERBITS {
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
} typeTIM12_DIERBITS;
sfr volatile typeTIM12_DIERBITS TIM12_DIERbits absolute 0x4000180C;

 typedef struct tagTIM12_SRBITS {
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
} typeTIM12_SRBITS;
sfr volatile typeTIM12_SRBITS TIM12_SRbits absolute 0x40001810;

 typedef struct tagTIM12_EGRBITS {
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
} typeTIM12_EGRBITS;
sfr volatile typeTIM12_EGRBITS TIM12_EGRbits absolute 0x40001814;

 typedef struct tagTIM12_CCMR1_OutputBITS {
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
} typeTIM12_CCMR1_OutputBITS;
sfr volatile typeTIM12_CCMR1_OutputBITS TIM12_CCMR1_Outputbits absolute 0x40001818;

 typedef struct tagTIM12_CCMR1_InputBITS {
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
} typeTIM12_CCMR1_InputBITS;
sfr volatile typeTIM12_CCMR1_InputBITS TIM12_CCMR1_Inputbits absolute 0x40001818;

 typedef struct tagTIM12_CCERBITS {
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
} typeTIM12_CCERBITS;
sfr volatile typeTIM12_CCERBITS TIM12_CCERbits absolute 0x40001820;

 typedef struct tagTIM12_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
    };
  };
} typeTIM12_CNTBITS;
sfr volatile typeTIM12_CNTBITS TIM12_CNTbits absolute 0x40001824;

 typedef struct tagTIM12_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM12_PSCBITS;
sfr volatile typeTIM12_PSCBITS TIM12_PSCbits absolute 0x40001828;

 typedef struct tagTIM12_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM12_ARRBITS;
sfr volatile typeTIM12_ARRBITS TIM12_ARRbits absolute 0x4000182C;

 typedef struct tagTIM12_CCR1BITS {
  union {
    struct {
      unsigned CCR1 : 16;
      unsigned : 16;
    };
  };
} typeTIM12_CCR1BITS;
sfr volatile typeTIM12_CCR1BITS TIM12_CCR1bits absolute 0x40001834;

 typedef struct tagTIM12_CCR2BITS {
  union {
    struct {
      unsigned CCR2 : 16;
      unsigned : 16;
    };
  };
} typeTIM12_CCR2BITS;
sfr volatile typeTIM12_CCR2BITS TIM12_CCR2bits absolute 0x40001838;

 typedef struct tagTIM13_CR1BITS {
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
} typeTIM13_CR1BITS;
sfr volatile typeTIM13_CR1BITS TIM13_CR1bits absolute 0x40001C00;

 typedef struct tagTIM13_DIERBITS {
  union {
    struct {
      unsigned UIE : 1;
      unsigned CC1IE : 1;
      unsigned : 30;
    };
  };
} typeTIM13_DIERBITS;
sfr volatile typeTIM13_DIERBITS TIM13_DIERbits absolute 0x40001C0C;

 typedef struct tagTIM13_SRBITS {
  union {
    struct {
      unsigned UIF : 1;
      unsigned CC1IF : 1;
      unsigned : 7;
      unsigned CC1OF : 1;
      unsigned : 22;
    };
  };
} typeTIM13_SRBITS;
sfr volatile typeTIM13_SRBITS TIM13_SRbits absolute 0x40001C10;

 typedef struct tagTIM13_EGRBITS {
  union {
    struct {
      unsigned UG : 1;
      unsigned CC1G : 1;
      unsigned : 30;
    };
  };
} typeTIM13_EGRBITS;
sfr volatile typeTIM13_EGRBITS TIM13_EGRbits absolute 0x40001C14;

 typedef struct tagTIM13_CCMR1_OutputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned OC1FE : 1;
      unsigned OC1PE : 1;
      unsigned OC1M : 3;
      unsigned : 25;
    };
  };
} typeTIM13_CCMR1_OutputBITS;
sfr volatile typeTIM13_CCMR1_OutputBITS TIM13_CCMR1_Outputbits absolute 0x40001C18;

 typedef struct tagTIM13_CCMR1_InputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned IC1PSC : 2;
      unsigned IC1F : 4;
      unsigned : 24;
    };
  };
} typeTIM13_CCMR1_InputBITS;
sfr volatile typeTIM13_CCMR1_InputBITS TIM13_CCMR1_Inputbits absolute 0x40001C18;

 typedef struct tagTIM13_CCERBITS {
  union {
    struct {
      unsigned CC1E : 1;
      unsigned CC1P : 1;
      unsigned : 1;
      unsigned CC1NP : 1;
      unsigned : 28;
    };
  };
} typeTIM13_CCERBITS;
sfr volatile typeTIM13_CCERBITS TIM13_CCERbits absolute 0x40001C20;

 typedef struct tagTIM13_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
    };
  };
} typeTIM13_CNTBITS;
sfr volatile typeTIM13_CNTBITS TIM13_CNTbits absolute 0x40001C24;

 typedef struct tagTIM13_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM13_PSCBITS;
sfr volatile typeTIM13_PSCBITS TIM13_PSCbits absolute 0x40001C28;

 typedef struct tagTIM13_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM13_ARRBITS;
sfr volatile typeTIM13_ARRBITS TIM13_ARRbits absolute 0x40001C2C;

 typedef struct tagTIM13_CCR1BITS {
  union {
    struct {
      unsigned CCR1 : 16;
      unsigned : 16;
    };
  };
} typeTIM13_CCR1BITS;
sfr volatile typeTIM13_CCR1BITS TIM13_CCR1bits absolute 0x40001C34;

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
sfr volatile typeTIM7_CR1BITS TIM7_CR1bits absolute 0x40001400;

 typedef struct tagTIM7_CR2BITS {
  union {
    struct {
      unsigned : 4;
      unsigned MMS : 3;
      unsigned : 25;
    };
  };
} typeTIM7_CR2BITS;
sfr volatile typeTIM7_CR2BITS TIM7_CR2bits absolute 0x40001404;

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
sfr volatile typeTIM7_DIERBITS TIM7_DIERbits absolute 0x4000140C;

 typedef struct tagTIM7_SRBITS {
  union {
    struct {
      unsigned UIF : 1;
      unsigned : 31;
    };
  };
} typeTIM7_SRBITS;
sfr volatile typeTIM7_SRBITS TIM7_SRbits absolute 0x40001410;

 typedef struct tagTIM7_EGRBITS {
  union {
    struct {
      unsigned UG : 1;
      unsigned : 31;
    };
  };
} typeTIM7_EGRBITS;
sfr volatile typeTIM7_EGRBITS TIM7_EGRbits absolute 0x40001414;

 typedef struct tagTIM7_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
    };
  };
} typeTIM7_CNTBITS;
sfr volatile typeTIM7_CNTBITS TIM7_CNTbits absolute 0x40001424;

 typedef struct tagTIM7_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM7_PSCBITS;
sfr volatile typeTIM7_PSCBITS TIM7_PSCbits absolute 0x40001428;

 typedef struct tagTIM7_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM7_ARRBITS;
sfr volatile typeTIM7_ARRBITS TIM7_ARRbits absolute 0x4000142C;

 typedef struct tagI2C1_CR1BITS {
  union {
    struct {
      unsigned PE : 1;
      unsigned SMBUS : 1;
      unsigned : 1;
      unsigned SMBTYPE : 1;
      unsigned ENARP : 1;
      unsigned ENPEC : 1;
      unsigned ENGC : 1;
      unsigned NOSTRETCH : 1;
      unsigned START : 1;
      unsigned STOP_ : 1;
      unsigned ACK : 1;
      unsigned POS : 1;
      unsigned PEC : 1;
      unsigned ALERT : 1;
      unsigned : 1;
      unsigned SWRST : 1;
      unsigned : 16;
    };
  };
} typeI2C1_CR1BITS;
sfr volatile typeI2C1_CR1BITS I2C1_CR1bits absolute 0x40005400;

 typedef struct tagI2C1_CR2BITS {
  union {
    struct {
      unsigned FREQ : 6;
      unsigned : 2;
      unsigned ITERREN : 1;
      unsigned ITEVTEN : 1;
      unsigned ITBUFEN : 1;
      unsigned DMAEN : 1;
      unsigned LAST : 1;
      unsigned : 19;
    };
  };
} typeI2C1_CR2BITS;
sfr volatile typeI2C1_CR2BITS I2C1_CR2bits absolute 0x40005404;

 typedef struct tagI2C1_OAR1BITS {
  union {
    struct {
      unsigned ADD0 : 1;
      unsigned ADD7 : 7;
      unsigned ADD10 : 2;
      unsigned : 5;
      unsigned ADDMODE : 1;
      unsigned : 16;
    };
  };
} typeI2C1_OAR1BITS;
sfr volatile typeI2C1_OAR1BITS I2C1_OAR1bits absolute 0x40005408;

 typedef struct tagI2C1_OAR2BITS {
  union {
    struct {
      unsigned ENDUAL : 1;
      unsigned ADD2 : 7;
      unsigned : 24;
    };
  };
} typeI2C1_OAR2BITS;
sfr volatile typeI2C1_OAR2BITS I2C1_OAR2bits absolute 0x4000540C;

 typedef struct tagI2C1_DRBITS {
  union {
    struct {
      unsigned DR : 8;
      unsigned : 24;
    };
  };
} typeI2C1_DRBITS;
sfr volatile typeI2C1_DRBITS I2C1_DRbits absolute 0x40005410;

 typedef struct tagI2C1_SR1BITS {
  union {
    struct {
      unsigned SB : 1;
      unsigned ADDR : 1;
      unsigned BTF : 1;
      unsigned ADD10 : 1;
      unsigned STOPF : 1;
      unsigned : 1;
      unsigned RxNE : 1;
      unsigned TxE : 1;
      unsigned BERR : 1;
      unsigned ARLO : 1;
      unsigned AF : 1;
      unsigned OVR : 1;
      unsigned PECERR : 1;
      unsigned : 1;
      unsigned TIMEOUT : 1;
      unsigned SMBALERT : 1;
      unsigned : 16;
    };
  };
} typeI2C1_SR1BITS;
sfr volatile typeI2C1_SR1BITS I2C1_SR1bits absolute 0x40005414;

 typedef struct tagI2C1_SR2BITS {
  union {
    struct {
      unsigned MSL : 1;
      unsigned BUSY : 1;
      unsigned TRA : 1;
      unsigned : 1;
      unsigned GENCALL : 1;
      unsigned SMBDEFAULT : 1;
      unsigned SMBHOST : 1;
      unsigned DUALF : 1;
      unsigned PEC : 8;
      unsigned : 16;
    };
  };
} typeI2C1_SR2BITS;
sfr volatile typeI2C1_SR2BITS I2C1_SR2bits absolute 0x40005418;

 typedef struct tagI2C1_CCRBITS {
  union {
    struct {
      unsigned CCR : 12;
      unsigned : 2;
      unsigned DUTY : 1;
      unsigned F_S : 1;
      unsigned : 16;
    };
  };
} typeI2C1_CCRBITS;
sfr volatile typeI2C1_CCRBITS I2C1_CCRbits absolute 0x4000541C;

 typedef struct tagI2C1_TRISEBITS {
  union {
    struct {
      unsigned TRISE : 6;
      unsigned : 26;
    };
  };
} typeI2C1_TRISEBITS;
sfr volatile typeI2C1_TRISEBITS I2C1_TRISEbits absolute 0x40005420;

 typedef struct tagI2C2_CR1BITS {
  union {
    struct {
      unsigned PE : 1;
      unsigned SMBUS : 1;
      unsigned : 1;
      unsigned SMBTYPE : 1;
      unsigned ENARP : 1;
      unsigned ENPEC : 1;
      unsigned ENGC : 1;
      unsigned NOSTRETCH : 1;
      unsigned START : 1;
      unsigned STOP_ : 1;
      unsigned ACK : 1;
      unsigned POS : 1;
      unsigned PEC : 1;
      unsigned ALERT : 1;
      unsigned : 1;
      unsigned SWRST : 1;
      unsigned : 16;
    };
  };
} typeI2C2_CR1BITS;
sfr volatile typeI2C2_CR1BITS I2C2_CR1bits absolute 0x40005800;

 typedef struct tagI2C2_CR2BITS {
  union {
    struct {
      unsigned FREQ : 6;
      unsigned : 2;
      unsigned ITERREN : 1;
      unsigned ITEVTEN : 1;
      unsigned ITBUFEN : 1;
      unsigned DMAEN : 1;
      unsigned LAST : 1;
      unsigned : 19;
    };
  };
} typeI2C2_CR2BITS;
sfr volatile typeI2C2_CR2BITS I2C2_CR2bits absolute 0x40005804;

 typedef struct tagI2C2_OAR1BITS {
  union {
    struct {
      unsigned ADD0 : 1;
      unsigned ADD7 : 7;
      unsigned ADD10 : 2;
      unsigned : 5;
      unsigned ADDMODE : 1;
      unsigned : 16;
    };
  };
} typeI2C2_OAR1BITS;
sfr volatile typeI2C2_OAR1BITS I2C2_OAR1bits absolute 0x40005808;

 typedef struct tagI2C2_OAR2BITS {
  union {
    struct {
      unsigned ENDUAL : 1;
      unsigned ADD2 : 7;
      unsigned : 24;
    };
  };
} typeI2C2_OAR2BITS;
sfr volatile typeI2C2_OAR2BITS I2C2_OAR2bits absolute 0x4000580C;

 typedef struct tagI2C2_DRBITS {
  union {
    struct {
      unsigned DR : 8;
      unsigned : 24;
    };
  };
} typeI2C2_DRBITS;
sfr volatile typeI2C2_DRBITS I2C2_DRbits absolute 0x40005810;

 typedef struct tagI2C2_SR1BITS {
  union {
    struct {
      unsigned SB : 1;
      unsigned ADDR : 1;
      unsigned BTF : 1;
      unsigned ADD10 : 1;
      unsigned STOPF : 1;
      unsigned : 1;
      unsigned RxNE : 1;
      unsigned TxE : 1;
      unsigned BERR : 1;
      unsigned ARLO : 1;
      unsigned AF : 1;
      unsigned OVR : 1;
      unsigned PECERR : 1;
      unsigned : 1;
      unsigned TIMEOUT : 1;
      unsigned SMBALERT : 1;
      unsigned : 16;
    };
  };
} typeI2C2_SR1BITS;
sfr volatile typeI2C2_SR1BITS I2C2_SR1bits absolute 0x40005814;

 typedef struct tagI2C2_SR2BITS {
  union {
    struct {
      unsigned MSL : 1;
      unsigned BUSY : 1;
      unsigned TRA : 1;
      unsigned : 1;
      unsigned GENCALL : 1;
      unsigned SMBDEFAULT : 1;
      unsigned SMBHOST : 1;
      unsigned DUALF : 1;
      unsigned PEC : 8;
      unsigned : 16;
    };
  };
} typeI2C2_SR2BITS;
sfr volatile typeI2C2_SR2BITS I2C2_SR2bits absolute 0x40005818;

 typedef struct tagI2C2_CCRBITS {
  union {
    struct {
      unsigned CCR : 12;
      unsigned : 2;
      unsigned DUTY : 1;
      unsigned F_S : 1;
      unsigned : 16;
    };
  };
} typeI2C2_CCRBITS;
sfr volatile typeI2C2_CCRBITS I2C2_CCRbits absolute 0x4000581C;

 typedef struct tagI2C2_TRISEBITS {
  union {
    struct {
      unsigned TRISE : 6;
      unsigned : 26;
    };
  };
} typeI2C2_TRISEBITS;
sfr volatile typeI2C2_TRISEBITS I2C2_TRISEbits absolute 0x40005820;

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
      unsigned : 2;
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
      unsigned : 2;
      unsigned CRCERR : 1;
      unsigned MODF_ : 1;
      unsigned OVR : 1;
      unsigned BSY : 1;
      unsigned : 24;
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
      unsigned : 2;
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
      unsigned : 2;
      unsigned CRCERR : 1;
      unsigned MODF_ : 1;
      unsigned OVR : 1;
      unsigned BSY : 1;
      unsigned : 24;
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

 typedef struct tagSPI3_CR1BITS {
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
} typeSPI3_CR1BITS;
sfr volatile typeSPI3_CR1BITS SPI3_CR1bits absolute 0x40003C00;

 typedef struct tagSPI3_CR2BITS {
  union {
    struct {
      unsigned RXDMAEN : 1;
      unsigned TXDMAEN : 1;
      unsigned SSOE : 1;
      unsigned : 2;
      unsigned ERRIE : 1;
      unsigned RXNEIE : 1;
      unsigned TXEIE : 1;
      unsigned : 24;
    };
  };
} typeSPI3_CR2BITS;
sfr volatile typeSPI3_CR2BITS SPI3_CR2bits absolute 0x40003C04;

 typedef struct tagSPI3_SRBITS {
  union {
    struct {
      unsigned RXNE : 1;
      unsigned TXE : 1;
      unsigned : 2;
      unsigned CRCERR : 1;
      unsigned MODF_ : 1;
      unsigned OVR : 1;
      unsigned BSY : 1;
      unsigned : 24;
    };
  };
} typeSPI3_SRBITS;
sfr volatile typeSPI3_SRBITS SPI3_SRbits absolute 0x40003C08;

 typedef struct tagSPI3_DRBITS {
  union {
    struct {
      unsigned DR : 16;
      unsigned : 16;
    };
  };
} typeSPI3_DRBITS;
sfr volatile typeSPI3_DRBITS SPI3_DRbits absolute 0x40003C0C;

 typedef struct tagSPI3_CRCPRBITS {
  union {
    struct {
      unsigned CRCPOLY : 16;
      unsigned : 16;
    };
  };
} typeSPI3_CRCPRBITS;
sfr volatile typeSPI3_CRCPRBITS SPI3_CRCPRbits absolute 0x40003C10;

 typedef struct tagSPI3_RXCRCRBITS {
  union {
    struct {
      unsigned RxCRC : 16;
      unsigned : 16;
    };
  };
} typeSPI3_RXCRCRBITS;
sfr volatile typeSPI3_RXCRCRBITS SPI3_RXCRCRbits absolute 0x40003C14;

 typedef struct tagSPI3_TXCRCRBITS {
  union {
    struct {
      unsigned TxCRC : 16;
      unsigned : 16;
    };
  };
} typeSPI3_TXCRCRBITS;
sfr volatile typeSPI3_TXCRCRBITS SPI3_TXCRCRbits absolute 0x40003C18;

 typedef struct tagUSART1_SRBITS {
  union {
    struct {
      unsigned PE : 1;
      unsigned FE : 1;
      unsigned NE : 1;
      unsigned ORE : 1;
      unsigned IDLE : 1;
      unsigned RXNE : 1;
      unsigned TC : 1;
      unsigned TXE : 1;
      unsigned LBD : 1;
      unsigned CTS : 1;
      unsigned : 22;
    };
  };
} typeUSART1_SRBITS;
sfr volatile typeUSART1_SRBITS USART1_SRbits absolute 0x40013800;

 typedef struct tagUSART1_DRBITS {
  union {
    struct {
      unsigned DR : 9;
      unsigned : 23;
    };
  };
} typeUSART1_DRBITS;
sfr volatile typeUSART1_DRBITS USART1_DRbits absolute 0x40013804;

 typedef struct tagUSART1_BRRBITS {
  union {
    struct {
      unsigned DIV_Fraction : 4;
      unsigned DIV_Mantissa : 12;
      unsigned : 16;
    };
  };
} typeUSART1_BRRBITS;
sfr volatile typeUSART1_BRRBITS USART1_BRRbits absolute 0x40013808;

 typedef struct tagUSART1_CR1BITS {
  union {
    struct {
      unsigned SBK : 1;
      unsigned RWU : 1;
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
      unsigned UE : 1;
      unsigned : 18;
    };
  };
} typeUSART1_CR1BITS;
sfr volatile typeUSART1_CR1BITS USART1_CR1bits absolute 0x4001380C;

 typedef struct tagUSART1_CR2BITS {
  union {
    struct {
      unsigned ADD : 4;
      unsigned : 1;
      unsigned LBDL : 1;
      unsigned LBDIE : 1;
      unsigned : 1;
      unsigned LBCL : 1;
      unsigned CPHA : 1;
      unsigned CPOL : 1;
      unsigned CLKEN : 1;
      unsigned STOP : 2;
      unsigned LINEN : 1;
      unsigned : 17;
    };
  };
} typeUSART1_CR2BITS;
sfr volatile typeUSART1_CR2BITS USART1_CR2bits absolute 0x40013810;

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
      unsigned : 21;
    };
  };
} typeUSART1_CR3BITS;
sfr volatile typeUSART1_CR3BITS USART1_CR3bits absolute 0x40013814;

 typedef struct tagUSART1_GTPRBITS {
  union {
    struct {
      unsigned PSC : 8;
      unsigned GT : 8;
      unsigned : 16;
    };
  };
} typeUSART1_GTPRBITS;
sfr volatile typeUSART1_GTPRBITS USART1_GTPRbits absolute 0x40013818;

 typedef struct tagUSART2_SRBITS {
  union {
    struct {
      unsigned PE : 1;
      unsigned FE : 1;
      unsigned NE : 1;
      unsigned ORE : 1;
      unsigned IDLE : 1;
      unsigned RXNE : 1;
      unsigned TC : 1;
      unsigned TXE : 1;
      unsigned LBD : 1;
      unsigned CTS : 1;
      unsigned : 22;
    };
  };
} typeUSART2_SRBITS;
sfr volatile typeUSART2_SRBITS USART2_SRbits absolute 0x40004400;

 typedef struct tagUSART2_DRBITS {
  union {
    struct {
      unsigned DR : 9;
      unsigned : 23;
    };
  };
} typeUSART2_DRBITS;
sfr volatile typeUSART2_DRBITS USART2_DRbits absolute 0x40004404;

 typedef struct tagUSART2_BRRBITS {
  union {
    struct {
      unsigned DIV_Fraction : 4;
      unsigned DIV_Mantissa : 12;
      unsigned : 16;
    };
  };
} typeUSART2_BRRBITS;
sfr volatile typeUSART2_BRRBITS USART2_BRRbits absolute 0x40004408;

 typedef struct tagUSART2_CR1BITS {
  union {
    struct {
      unsigned SBK : 1;
      unsigned RWU : 1;
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
      unsigned UE : 1;
      unsigned : 18;
    };
  };
} typeUSART2_CR1BITS;
sfr volatile typeUSART2_CR1BITS USART2_CR1bits absolute 0x4000440C;

 typedef struct tagUSART2_CR2BITS {
  union {
    struct {
      unsigned ADD : 4;
      unsigned : 1;
      unsigned LBDL : 1;
      unsigned LBDIE : 1;
      unsigned : 1;
      unsigned LBCL : 1;
      unsigned CPHA : 1;
      unsigned CPOL : 1;
      unsigned CLKEN : 1;
      unsigned STOP : 2;
      unsigned LINEN : 1;
      unsigned : 17;
    };
  };
} typeUSART2_CR2BITS;
sfr volatile typeUSART2_CR2BITS USART2_CR2bits absolute 0x40004410;

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
      unsigned : 21;
    };
  };
} typeUSART2_CR3BITS;
sfr volatile typeUSART2_CR3BITS USART2_CR3bits absolute 0x40004414;

 typedef struct tagUSART2_GTPRBITS {
  union {
    struct {
      unsigned PSC : 8;
      unsigned GT : 8;
      unsigned : 16;
    };
  };
} typeUSART2_GTPRBITS;
sfr volatile typeUSART2_GTPRBITS USART2_GTPRbits absolute 0x40004418;

 typedef struct tagUSART3_SRBITS {
  union {
    struct {
      unsigned PE : 1;
      unsigned FE : 1;
      unsigned NE : 1;
      unsigned ORE : 1;
      unsigned IDLE : 1;
      unsigned RXNE : 1;
      unsigned TC : 1;
      unsigned TXE : 1;
      unsigned LBD : 1;
      unsigned CTS : 1;
      unsigned : 22;
    };
  };
} typeUSART3_SRBITS;
sfr volatile typeUSART3_SRBITS USART3_SRbits absolute 0x40004800;

 typedef struct tagUSART3_DRBITS {
  union {
    struct {
      unsigned DR : 9;
      unsigned : 23;
    };
  };
} typeUSART3_DRBITS;
sfr volatile typeUSART3_DRBITS USART3_DRbits absolute 0x40004804;

 typedef struct tagUSART3_BRRBITS {
  union {
    struct {
      unsigned DIV_Fraction : 4;
      unsigned DIV_Mantissa : 12;
      unsigned : 16;
    };
  };
} typeUSART3_BRRBITS;
sfr volatile typeUSART3_BRRBITS USART3_BRRbits absolute 0x40004808;

 typedef struct tagUSART3_CR1BITS {
  union {
    struct {
      unsigned SBK : 1;
      unsigned RWU : 1;
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
      unsigned UE : 1;
      unsigned : 18;
    };
  };
} typeUSART3_CR1BITS;
sfr volatile typeUSART3_CR1BITS USART3_CR1bits absolute 0x4000480C;

 typedef struct tagUSART3_CR2BITS {
  union {
    struct {
      unsigned ADD : 4;
      unsigned : 1;
      unsigned LBDL : 1;
      unsigned LBDIE : 1;
      unsigned : 1;
      unsigned LBCL : 1;
      unsigned CPHA : 1;
      unsigned CPOL : 1;
      unsigned CLKEN : 1;
      unsigned STOP : 2;
      unsigned LINEN : 1;
      unsigned : 17;
    };
  };
} typeUSART3_CR2BITS;
sfr volatile typeUSART3_CR2BITS USART3_CR2bits absolute 0x40004810;

 typedef struct tagUSART3_CR3BITS {
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
      unsigned : 21;
    };
  };
} typeUSART3_CR3BITS;
sfr volatile typeUSART3_CR3BITS USART3_CR3bits absolute 0x40004814;

 typedef struct tagUSART3_GTPRBITS {
  union {
    struct {
      unsigned PSC : 8;
      unsigned GT : 8;
      unsigned : 16;
    };
  };
} typeUSART3_GTPRBITS;
sfr volatile typeUSART3_GTPRBITS USART3_GTPRbits absolute 0x40004818;

 typedef struct tagADC1_SRBITS {
  union {
    struct {
      unsigned AWD : 1;
      unsigned EOC : 1;
      unsigned JEOC : 1;
      unsigned JSTRT : 1;
      unsigned STRT : 1;
      unsigned : 27;
    };
  };
} typeADC1_SRBITS;
sfr volatile typeADC1_SRBITS ADC1_SRbits absolute 0x40012400;

 typedef struct tagADC1_CR1BITS {
  union {
    struct {
      unsigned AWDCH : 5;
      unsigned EOCIE : 1;
      unsigned AWDIE : 1;
      unsigned JEOCIE : 1;
      unsigned SCAN : 1;
      unsigned AWDSGL : 1;
      unsigned JAUTO : 1;
      unsigned DISCEN : 1;
      unsigned JDISCEN : 1;
      unsigned DISCNUM : 3;
      unsigned : 6;
      unsigned JAWDEN : 1;
      unsigned AWDEN : 1;
      unsigned : 8;
    };
  };
} typeADC1_CR1BITS;
sfr volatile typeADC1_CR1BITS ADC1_CR1bits absolute 0x40012404;

 typedef struct tagADC1_CR2BITS {
  union {
    struct {
      unsigned ADON : 1;
      unsigned CONT : 1;
      unsigned CAL : 1;
      unsigned RSTCAL : 1;
      unsigned : 4;
      unsigned DMA_ : 1;
      unsigned : 2;
      unsigned ALIGN : 1;
      unsigned JEXTSEL : 3;
      unsigned JEXTTRIG : 1;
      unsigned : 1;
      unsigned EXTSEL : 3;
      unsigned EXTTRIG : 1;
      unsigned JSWSTART : 1;
      unsigned SWSTART : 1;
      unsigned TSVREFE : 1;
      unsigned : 8;
    };
  };
} typeADC1_CR2BITS;
sfr volatile typeADC1_CR2BITS ADC1_CR2bits absolute 0x40012408;

 typedef struct tagADC1_SMPR1BITS {
  union {
    struct {
      unsigned SMP10 : 3;
      unsigned SMP11 : 3;
      unsigned SMP12 : 3;
      unsigned SMP13 : 3;
      unsigned SMP14 : 3;
      unsigned SMP15 : 3;
      unsigned SMP16 : 3;
      unsigned SMP17 : 3;
      unsigned : 8;
    };
  };
} typeADC1_SMPR1BITS;
sfr volatile typeADC1_SMPR1BITS ADC1_SMPR1bits absolute 0x4001240C;

 typedef struct tagADC1_SMPR2BITS {
  union {
    struct {
      unsigned SMP0 : 3;
      unsigned SMP1 : 3;
      unsigned SMP2 : 3;
      unsigned SMP3 : 3;
      unsigned SMP4 : 3;
      unsigned SMP5 : 3;
      unsigned SMP6 : 3;
      unsigned SMP7 : 3;
      unsigned SMP8 : 3;
      unsigned SMP9 : 3;
      unsigned : 2;
    };
  };
} typeADC1_SMPR2BITS;
sfr volatile typeADC1_SMPR2BITS ADC1_SMPR2bits absolute 0x40012410;

 typedef struct tagADC1_JOFR1BITS {
  union {
    struct {
      unsigned JOFFSET1 : 12;
      unsigned : 20;
    };
  };
} typeADC1_JOFR1BITS;
sfr volatile typeADC1_JOFR1BITS ADC1_JOFR1bits absolute 0x40012414;

 typedef struct tagADC1_JOFR2BITS {
  union {
    struct {
      unsigned JOFFSET2 : 12;
      unsigned : 20;
    };
  };
} typeADC1_JOFR2BITS;
sfr volatile typeADC1_JOFR2BITS ADC1_JOFR2bits absolute 0x40012418;

 typedef struct tagADC1_JOFR3BITS {
  union {
    struct {
      unsigned JOFFSET3 : 12;
      unsigned : 20;
    };
  };
} typeADC1_JOFR3BITS;
sfr volatile typeADC1_JOFR3BITS ADC1_JOFR3bits absolute 0x4001241C;

 typedef struct tagADC1_JOFR4BITS {
  union {
    struct {
      unsigned JOFFSET4 : 12;
      unsigned : 20;
    };
  };
} typeADC1_JOFR4BITS;
sfr volatile typeADC1_JOFR4BITS ADC1_JOFR4bits absolute 0x40012420;

 typedef struct tagADC1_HTRBITS {
  union {
    struct {
      unsigned HT : 12;
      unsigned : 20;
    };
  };
} typeADC1_HTRBITS;
sfr volatile typeADC1_HTRBITS ADC1_HTRbits absolute 0x40012424;

 typedef struct tagADC1_LTRBITS {
  union {
    struct {
      unsigned LT : 12;
      unsigned : 20;
    };
  };
} typeADC1_LTRBITS;
sfr volatile typeADC1_LTRBITS ADC1_LTRbits absolute 0x40012428;

 typedef struct tagADC1_SQR1BITS {
  union {
    struct {
      unsigned SQ13 : 5;
      unsigned SQ14 : 5;
      unsigned SQ15 : 5;
      unsigned SQ16 : 5;
      unsigned L : 4;
      unsigned : 8;
    };
  };
} typeADC1_SQR1BITS;
sfr volatile typeADC1_SQR1BITS ADC1_SQR1bits absolute 0x4001242C;

 typedef struct tagADC1_SQR2BITS {
  union {
    struct {
      unsigned SQ7 : 5;
      unsigned SQ8 : 5;
      unsigned SQ9 : 5;
      unsigned SQ10 : 5;
      unsigned SQ11 : 5;
      unsigned SQ12 : 5;
      unsigned : 2;
    };
  };
} typeADC1_SQR2BITS;
sfr volatile typeADC1_SQR2BITS ADC1_SQR2bits absolute 0x40012430;

 typedef struct tagADC1_SQR3BITS {
  union {
    struct {
      unsigned SQ1 : 5;
      unsigned SQ2 : 5;
      unsigned SQ3 : 5;
      unsigned SQ4 : 5;
      unsigned SQ5 : 5;
      unsigned SQ6 : 5;
      unsigned : 2;
    };
  };
} typeADC1_SQR3BITS;
sfr volatile typeADC1_SQR3BITS ADC1_SQR3bits absolute 0x40012434;

 typedef struct tagADC1_JSQRBITS {
  union {
    struct {
      unsigned JSQ1 : 5;
      unsigned JSQ2 : 5;
      unsigned JSQ3 : 5;
      unsigned JSQ4 : 5;
      unsigned JL : 2;
      unsigned : 10;
    };
  };
} typeADC1_JSQRBITS;
sfr volatile typeADC1_JSQRBITS ADC1_JSQRbits absolute 0x40012438;

 typedef struct tagADC1_JDR1BITS {
  union {
    struct {
      unsigned JDATA : 16;
      unsigned : 16;
    };
  };
} typeADC1_JDR1BITS;
sfr volatile typeADC1_JDR1BITS ADC1_JDR1bits absolute 0x4001243C;

 typedef struct tagADC1_JDR2BITS {
  union {
    struct {
      unsigned JDATA : 16;
      unsigned : 16;
    };
  };
} typeADC1_JDR2BITS;
sfr volatile typeADC1_JDR2BITS ADC1_JDR2bits absolute 0x40012440;

 typedef struct tagADC1_JDR3BITS {
  union {
    struct {
      unsigned JDATA : 16;
      unsigned : 16;
    };
  };
} typeADC1_JDR3BITS;
sfr volatile typeADC1_JDR3BITS ADC1_JDR3bits absolute 0x40012444;

 typedef struct tagADC1_JDR4BITS {
  union {
    struct {
      unsigned JDATA : 16;
      unsigned : 16;
    };
  };
} typeADC1_JDR4BITS;
sfr volatile typeADC1_JDR4BITS ADC1_JDR4bits absolute 0x40012448;

 typedef struct tagADC1_DRBITS {
  union {
    struct {
      unsigned DATA : 16;
      unsigned : 16;
    };
  };
} typeADC1_DRBITS;
sfr volatile typeADC1_DRBITS ADC1_DRbits absolute 0x4001244C;

 typedef struct tagDAC_CRBITS {
  union {
    struct {
      unsigned EN1 : 1;
      unsigned BOFF1 : 1;
      unsigned TEN1 : 1;
      unsigned TSEL1 : 3;
      unsigned WAVE1 : 2;
      unsigned MAMP1 : 4;
      unsigned DMAEN1 : 1;
      unsigned DMAUDRIE1 : 1;
      unsigned : 2;
      unsigned EN2 : 1;
      unsigned BOFF2 : 1;
      unsigned TEN2 : 1;
      unsigned TSEL2 : 3;
      unsigned WAVE2 : 2;
      unsigned MAMP2 : 4;
      unsigned DMAEN2 : 1;
      unsigned DMAUDRIE2 : 1;
      unsigned : 2;
    };
  };
} typeDAC_CRBITS;
sfr volatile typeDAC_CRBITS DAC_CRbits absolute 0x40007400;

 typedef struct tagDAC_SWTRIGRBITS {
  union {
    struct {
      unsigned SWTRIG1 : 1;
      unsigned SWTRIG2 : 1;
      unsigned : 30;
    };
  };
} typeDAC_SWTRIGRBITS;
sfr volatile typeDAC_SWTRIGRBITS DAC_SWTRIGRbits absolute 0x40007404;

 typedef struct tagDAC_DHR12R1BITS {
  union {
    struct {
      unsigned DACC1DHR : 12;
      unsigned : 20;
    };
  };
} typeDAC_DHR12R1BITS;
sfr volatile typeDAC_DHR12R1BITS DAC_DHR12R1bits absolute 0x40007408;

 typedef struct tagDAC_DHR12L1BITS {
  union {
    struct {
      unsigned : 4;
      unsigned DACC1DHR : 12;
      unsigned : 16;
    };
  };
} typeDAC_DHR12L1BITS;
sfr volatile typeDAC_DHR12L1BITS DAC_DHR12L1bits absolute 0x4000740C;

 typedef struct tagDAC_DHR8R1BITS {
  union {
    struct {
      unsigned DACC1DHR : 8;
      unsigned : 24;
    };
  };
} typeDAC_DHR8R1BITS;
sfr volatile typeDAC_DHR8R1BITS DAC_DHR8R1bits absolute 0x40007410;

 typedef struct tagDAC_DHR12R2BITS {
  union {
    struct {
      unsigned DACC2DHR : 12;
      unsigned : 20;
    };
  };
} typeDAC_DHR12R2BITS;
sfr volatile typeDAC_DHR12R2BITS DAC_DHR12R2bits absolute 0x40007414;

 typedef struct tagDAC_DHR12L2BITS {
  union {
    struct {
      unsigned : 4;
      unsigned DACC2DHR : 12;
      unsigned : 16;
    };
  };
} typeDAC_DHR12L2BITS;
sfr volatile typeDAC_DHR12L2BITS DAC_DHR12L2bits absolute 0x40007418;

 typedef struct tagDAC_DHR8R2BITS {
  union {
    struct {
      unsigned DACC2DHR : 8;
      unsigned : 24;
    };
  };
} typeDAC_DHR8R2BITS;
sfr volatile typeDAC_DHR8R2BITS DAC_DHR8R2bits absolute 0x4000741C;

 typedef struct tagDAC_DHR12RDBITS {
  union {
    struct {
      unsigned DACC1DHR : 12;
      unsigned : 4;
      unsigned DACC2DHR : 12;
      unsigned : 4;
    };
  };
} typeDAC_DHR12RDBITS;
sfr volatile typeDAC_DHR12RDBITS DAC_DHR12RDbits absolute 0x40007420;

 typedef struct tagDAC_DHR12LDBITS {
  union {
    struct {
      unsigned : 4;
      unsigned DACC1DHR : 12;
      unsigned : 4;
      unsigned DACC2DHR : 12;
    };
  };
} typeDAC_DHR12LDBITS;
sfr volatile typeDAC_DHR12LDBITS DAC_DHR12LDbits absolute 0x40007424;

 typedef struct tagDAC_DHR8RDBITS {
  union {
    struct {
      unsigned DACC1DHR : 8;
      unsigned DACC2DHR : 8;
      unsigned : 16;
    };
  };
} typeDAC_DHR8RDBITS;
sfr volatile typeDAC_DHR8RDBITS DAC_DHR8RDbits absolute 0x40007428;

 typedef struct tagDAC_DOR1BITS {
  union {
    struct {
      unsigned DACC1DOR : 12;
      unsigned : 20;
    };
  };
} typeDAC_DOR1BITS;
sfr volatile typeDAC_DOR1BITS DAC_DOR1bits absolute 0x4000742C;

 typedef struct tagDAC_DOR2BITS {
  union {
    struct {
      unsigned DACC2DOR : 12;
      unsigned : 20;
    };
  };
} typeDAC_DOR2BITS;
sfr volatile typeDAC_DOR2BITS DAC_DOR2bits absolute 0x40007430;

 typedef struct tagDAC_SRBITS {
  union {
    struct {
      unsigned : 13;
      unsigned DMAUDR1 : 1;
      unsigned : 15;
      unsigned DMAUDR2 : 1;
      unsigned : 2;
    };
  };
} typeDAC_SRBITS;
sfr volatile typeDAC_SRBITS DAC_SRbits absolute 0x40007434;

 typedef struct tagDBG_IDCODEBITS {
  union {
    struct {
      unsigned DEV_ID : 12;
      unsigned : 4;
      unsigned REV_ID : 16;
    };
  };
} typeDBG_IDCODEBITS;
sfr far volatile typeDBG_IDCODEBITS DBG_IDCODEbits absolute 0xE0042000;

 typedef struct tagDBG_CRBITS {
  union {
    struct {
      unsigned DBG_SLEEP : 1;
      unsigned DBG_STOP : 1;
      unsigned DBG_STANDBY : 1;
      unsigned : 2;
      unsigned TRACE_IOEN : 1;
      unsigned TRACE_MODE : 2;
      unsigned DBG_IWDG_STOP : 1;
      unsigned DBG_WWDG_STOP : 1;
      unsigned DBG_TIM1_STOP : 1;
      unsigned DBG_TIM2_STOP : 1;
      unsigned DBG_TIM3_STOP : 1;
      unsigned DBG_TIM4_STOP : 1;
      unsigned : 1;
      unsigned DBG_I2C1_SMBUS_TIMEOUT : 1;
      unsigned DBG_I2C2_SMBUS_TIMEOUT : 1;
      unsigned : 1;
      unsigned DBG_TIM5_STOP : 1;
      unsigned DBG_TIM6_STOP : 1;
      unsigned DBG_TIM7_STOP : 1;
      unsigned : 1;
      unsigned DBG_TIM15_STOP : 1;
      unsigned DBG_TIM16_STOP : 1;
      unsigned DBG_TIM17_STOP : 1;
      unsigned DBG_TIM12_STOP : 1;
      unsigned DBG_TIM13_STOP : 1;
      unsigned DBG_TIM14_STOP : 1;
      unsigned : 4;
    };
  };
} typeDBG_CRBITS;
sfr far volatile typeDBG_CRBITS DBG_CRbits absolute 0xE0042004;

 typedef struct tagUART4_SRBITS {
  union {
    struct {
      unsigned PE : 1;
      unsigned FE : 1;
      unsigned NE : 1;
      unsigned ORE : 1;
      unsigned IDLE : 1;
      unsigned RXNE : 1;
      unsigned TC : 1;
      unsigned TXE : 1;
      unsigned LBD : 1;
      unsigned : 23;
    };
  };
} typeUART4_SRBITS;
sfr volatile typeUART4_SRBITS UART4_SRbits absolute 0x40004C00;

 typedef struct tagUART4_DRBITS {
  union {
    struct {
      unsigned DR : 9;
      unsigned : 23;
    };
  };
} typeUART4_DRBITS;
sfr volatile typeUART4_DRBITS UART4_DRbits absolute 0x40004C04;

 typedef struct tagUART4_BRRBITS {
  union {
    struct {
      unsigned DIV_Fraction : 4;
      unsigned DIV_Mantissa : 12;
      unsigned : 16;
    };
  };
} typeUART4_BRRBITS;
sfr volatile typeUART4_BRRBITS UART4_BRRbits absolute 0x40004C08;

 typedef struct tagUART4_CR1BITS {
  union {
    struct {
      unsigned SBK : 1;
      unsigned RWU : 1;
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
      unsigned UE : 1;
      unsigned : 18;
    };
  };
} typeUART4_CR1BITS;
sfr volatile typeUART4_CR1BITS UART4_CR1bits absolute 0x40004C0C;

 typedef struct tagUART4_CR2BITS {
  union {
    struct {
      unsigned ADD : 4;
      unsigned : 1;
      unsigned LBDL : 1;
      unsigned LBDIE : 1;
      unsigned : 5;
      unsigned STOP : 2;
      unsigned LINEN : 1;
      unsigned : 17;
    };
  };
} typeUART4_CR2BITS;
sfr volatile typeUART4_CR2BITS UART4_CR2bits absolute 0x40004C10;

 typedef struct tagUART4_CR3BITS {
  union {
    struct {
      unsigned EIE : 1;
      unsigned IREN : 1;
      unsigned IRLP : 1;
      unsigned HDSEL : 1;
      unsigned : 2;
      unsigned DMAR : 1;
      unsigned DMAT : 1;
      unsigned : 24;
    };
  };
} typeUART4_CR3BITS;
sfr volatile typeUART4_CR3BITS UART4_CR3bits absolute 0x40004C14;

 typedef struct tagUART5_SRBITS {
  union {
    struct {
      unsigned PE : 1;
      unsigned FE : 1;
      unsigned NE : 1;
      unsigned ORE : 1;
      unsigned IDLE : 1;
      unsigned RXNE : 1;
      unsigned TC : 1;
      unsigned TXE : 1;
      unsigned LBD : 1;
      unsigned : 23;
    };
  };
} typeUART5_SRBITS;
sfr volatile typeUART5_SRBITS UART5_SRbits absolute 0x40005000;

 typedef struct tagUART5_DRBITS {
  union {
    struct {
      unsigned DR : 9;
      unsigned : 23;
    };
  };
} typeUART5_DRBITS;
sfr volatile typeUART5_DRBITS UART5_DRbits absolute 0x40005004;

 typedef struct tagUART5_BRRBITS {
  union {
    struct {
      unsigned DIV_Fraction : 4;
      unsigned DIV_Mantissa : 12;
      unsigned : 16;
    };
  };
} typeUART5_BRRBITS;
sfr volatile typeUART5_BRRBITS UART5_BRRbits absolute 0x40005008;

 typedef struct tagUART5_CR1BITS {
  union {
    struct {
      unsigned SBK : 1;
      unsigned RWU : 1;
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
      unsigned UE : 1;
      unsigned : 18;
    };
  };
} typeUART5_CR1BITS;
sfr volatile typeUART5_CR1BITS UART5_CR1bits absolute 0x4000500C;

 typedef struct tagUART5_CR2BITS {
  union {
    struct {
      unsigned ADD : 4;
      unsigned : 1;
      unsigned LBDL : 1;
      unsigned LBDIE : 1;
      unsigned : 5;
      unsigned STOP : 2;
      unsigned LINEN : 1;
      unsigned : 17;
    };
  };
} typeUART5_CR2BITS;
sfr volatile typeUART5_CR2BITS UART5_CR2bits absolute 0x40005010;

 typedef struct tagUART5_CR3BITS {
  union {
    struct {
      unsigned EIE : 1;
      unsigned IREN : 1;
      unsigned IRLP : 1;
      unsigned HDSEL : 1;
      unsigned : 3;
      unsigned DMAT : 1;
      unsigned : 24;
    };
  };
} typeUART5_CR3BITS;
sfr volatile typeUART5_CR3BITS UART5_CR3bits absolute 0x40005014;

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
      unsigned : 31;
    };
  };
} typeCRC_CRBITS;
sfr volatile typeCRC_CRBITS CRC_CRbits absolute 0x40023008;

 typedef struct tagTIM15_CR1BITS {
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
} typeTIM15_CR1BITS;
sfr volatile typeTIM15_CR1BITS TIM15_CR1bits absolute 0x40014000;

 typedef struct tagTIM15_CR2BITS {
  union {
    struct {
      unsigned CCPC : 1;
      unsigned : 1;
      unsigned CCUS : 1;
      unsigned CCDS : 1;
      unsigned MMS : 3;
      unsigned : 1;
      unsigned OIS1 : 1;
      unsigned OIS1N : 1;
      unsigned OIS2 : 1;
      unsigned : 21;
    };
  };
} typeTIM15_CR2BITS;
sfr volatile typeTIM15_CR2BITS TIM15_CR2bits absolute 0x40014004;

 typedef struct tagTIM15_SMCRBITS {
  union {
    struct {
      unsigned SMS : 3;
      unsigned : 1;
      unsigned TS : 3;
      unsigned MSM : 1;
      unsigned : 24;
    };
  };
} typeTIM15_SMCRBITS;
sfr volatile typeTIM15_SMCRBITS TIM15_SMCRbits absolute 0x40014008;

 typedef struct tagTIM15_DIERBITS {
  union {
    struct {
      unsigned UIE : 1;
      unsigned CC1IE : 1;
      unsigned CC2IE : 1;
      unsigned : 2;
      unsigned COMIE : 1;
      unsigned TIE : 1;
      unsigned BIE : 1;
      unsigned UDE : 1;
      unsigned CC1DE : 1;
      unsigned CC2DE : 1;
      unsigned : 3;
      unsigned TDE : 1;
      unsigned : 17;
    };
  };
} typeTIM15_DIERBITS;
sfr volatile typeTIM15_DIERBITS TIM15_DIERbits absolute 0x4001400C;

 typedef struct tagTIM15_SRBITS {
  union {
    struct {
      unsigned UIF : 1;
      unsigned CC1IF : 1;
      unsigned CC2IF : 1;
      unsigned : 2;
      unsigned COMIF : 1;
      unsigned TIF : 1;
      unsigned BIF : 1;
      unsigned : 1;
      unsigned CC1OF : 1;
      unsigned CC2OF : 1;
      unsigned : 21;
    };
  };
} typeTIM15_SRBITS;
sfr volatile typeTIM15_SRBITS TIM15_SRbits absolute 0x40014010;

 typedef struct tagTIM15_EGRBITS {
  union {
    struct {
      unsigned UG : 1;
      unsigned CC1G : 1;
      unsigned CC2G : 1;
      unsigned : 2;
      unsigned COMG : 1;
      unsigned TG : 1;
      unsigned BG : 1;
      unsigned : 24;
    };
  };
} typeTIM15_EGRBITS;
sfr volatile typeTIM15_EGRBITS TIM15_EGRbits absolute 0x40014014;

 typedef struct tagTIM15_CCMR1_OutputBITS {
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
} typeTIM15_CCMR1_OutputBITS;
sfr volatile typeTIM15_CCMR1_OutputBITS TIM15_CCMR1_Outputbits absolute 0x40014018;

 typedef struct tagTIM15_CCMR1_InputBITS {
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
} typeTIM15_CCMR1_InputBITS;
sfr volatile typeTIM15_CCMR1_InputBITS TIM15_CCMR1_Inputbits absolute 0x40014018;

 typedef struct tagTIM15_CCERBITS {
  union {
    struct {
      unsigned CC1E : 1;
      unsigned CC1P : 1;
      unsigned CC1NE : 1;
      unsigned CC1NP : 1;
      unsigned CC2E : 1;
      unsigned CC2P : 1;
      unsigned : 1;
      unsigned CC2NP : 1;
      unsigned : 24;
    };
  };
} typeTIM15_CCERBITS;
sfr volatile typeTIM15_CCERBITS TIM15_CCERbits absolute 0x40014020;

 typedef struct tagTIM15_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
    };
  };
} typeTIM15_CNTBITS;
sfr volatile typeTIM15_CNTBITS TIM15_CNTbits absolute 0x40014024;

 typedef struct tagTIM15_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM15_PSCBITS;
sfr volatile typeTIM15_PSCBITS TIM15_PSCbits absolute 0x40014028;

 typedef struct tagTIM15_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM15_ARRBITS;
sfr volatile typeTIM15_ARRBITS TIM15_ARRbits absolute 0x4001402C;

 typedef struct tagTIM15_RCRBITS {
  union {
    struct {
      unsigned REP : 8;
      unsigned : 24;
    };
  };
} typeTIM15_RCRBITS;
sfr volatile typeTIM15_RCRBITS TIM15_RCRbits absolute 0x40014030;

 typedef struct tagTIM15_CCR1BITS {
  union {
    struct {
      unsigned CCR1 : 16;
      unsigned : 16;
    };
  };
} typeTIM15_CCR1BITS;
sfr volatile typeTIM15_CCR1BITS TIM15_CCR1bits absolute 0x40014034;

 typedef struct tagTIM15_CCR2BITS {
  union {
    struct {
      unsigned CCR2 : 16;
      unsigned : 16;
    };
  };
} typeTIM15_CCR2BITS;
sfr volatile typeTIM15_CCR2BITS TIM15_CCR2bits absolute 0x40014038;

 typedef struct tagTIM15_BDTRBITS {
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
} typeTIM15_BDTRBITS;
sfr volatile typeTIM15_BDTRBITS TIM15_BDTRbits absolute 0x40014044;

 typedef struct tagTIM15_DCRBITS {
  union {
    struct {
      unsigned DBA : 5;
      unsigned : 3;
      unsigned DBL : 5;
      unsigned : 19;
    };
  };
} typeTIM15_DCRBITS;
sfr volatile typeTIM15_DCRBITS TIM15_DCRbits absolute 0x40014048;

 typedef struct tagTIM15_DMARBITS {
  union {
    struct {
      unsigned DMAB : 16;
      unsigned : 16;
    };
  };
} typeTIM15_DMARBITS;
sfr volatile typeTIM15_DMARBITS TIM15_DMARbits absolute 0x4001404C;

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
      unsigned MMS : 3;
      unsigned TI1S : 1;
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
      unsigned MMS : 3;
      unsigned TI1S : 1;
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

 typedef struct tagCEC_CFGRBITS {
  union {
    struct {
      unsigned PE : 1;
      unsigned IE : 1;
      unsigned BTEM : 1;
      unsigned BPEM : 1;
      unsigned : 28;
    };
  };
} typeCEC_CFGRBITS;
sfr volatile typeCEC_CFGRBITS CEC_CFGRbits absolute 0x40007800;

 typedef struct tagCEC_OARBITS {
  union {
    struct {
      unsigned OA : 4;
      unsigned : 28;
    };
  };
} typeCEC_OARBITS;
sfr volatile typeCEC_OARBITS CEC_OARbits absolute 0x40007804;

 typedef struct tagCEC_PRESBITS {
  union {
    struct {
      unsigned PRESC : 14;
      unsigned : 18;
    };
  };
} typeCEC_PRESBITS;
sfr volatile typeCEC_PRESBITS CEC_PRESbits absolute 0x40007808;

 typedef struct tagCEC_ESRBITS {
  union {
    struct {
      unsigned BTE : 1;
      unsigned BPE : 1;
      unsigned RBTFE : 1;
      unsigned SBE : 1;
      unsigned ACKE : 1;
      unsigned LINE_ : 1;
      unsigned TBTFE : 1;
      unsigned : 25;
    };
  };
} typeCEC_ESRBITS;
sfr volatile typeCEC_ESRBITS CEC_ESRbits absolute 0x4000780C;

 typedef struct tagCEC_CSRBITS {
  union {
    struct {
      unsigned TSOM : 1;
      unsigned TEOM : 1;
      unsigned TERR : 1;
      unsigned TBTRF : 1;
      unsigned RSOM : 1;
      unsigned REOM : 1;
      unsigned RERR : 1;
      unsigned RBTF : 1;
      unsigned : 24;
    };
  };
} typeCEC_CSRBITS;
sfr volatile typeCEC_CSRBITS CEC_CSRbits absolute 0x40007810;

 typedef struct tagCEC_TXDBITS {
  union {
    struct {
      unsigned TXD : 8;
      unsigned : 24;
    };
  };
} typeCEC_TXDBITS;
sfr volatile typeCEC_TXDBITS CEC_TXDbits absolute 0x40007814;

 typedef struct tagCEC_RXDBITS {
  union {
    struct {
      unsigned RXD : 8;
      unsigned : 24;
    };
  };
} typeCEC_RXDBITS;
sfr volatile typeCEC_RXDBITS CEC_RXDbits absolute 0x40007818;

 typedef struct tagNVIC_ICTRBITS {
  union {
    struct {
      unsigned INTLINESNUM : 4;
      unsigned : 28;
    };
  };
} typeNVIC_ICTRBITS;
sfr far volatile typeNVIC_ICTRBITS NVIC_ICTRbits absolute 0xE000E004;

 typedef struct tagNVIC_STIRBITS {
  union {
    struct {
      unsigned INTID : 9;
      unsigned : 23;
    };
  };
} typeNVIC_STIRBITS;
sfr far volatile typeNVIC_STIRBITS NVIC_STIRbits absolute 0xE000EF00;

 typedef struct tagNVIC_ISER0BITS {
  union {
    struct {
      unsigned SETENA : 32;
    };
  };
} typeNVIC_ISER0BITS;
sfr far volatile typeNVIC_ISER0BITS NVIC_ISER0bits absolute 0xE000E100;

 typedef struct tagNVIC_ISER1BITS {
  union {
    struct {
      unsigned SETENA : 32;
    };
  };
} typeNVIC_ISER1BITS;
sfr far volatile typeNVIC_ISER1BITS NVIC_ISER1bits absolute 0xE000E104;

 typedef struct tagNVIC_ISER2BITS {
  union {
    struct {
      unsigned SETENA : 16;
      unsigned : 16;
    };
  };
} typeNVIC_ISER2BITS;
sfr far volatile typeNVIC_ISER2BITS NVIC_ISER2bits absolute 0xE000E108;

 typedef struct tagNVIC_ICER0BITS {
  union {
    struct {
      unsigned CLRENA : 32;
    };
  };
} typeNVIC_ICER0BITS;
sfr far volatile typeNVIC_ICER0BITS NVIC_ICER0bits absolute 0xE000E180;

 typedef struct tagNVIC_ICER1BITS {
  union {
    struct {
      unsigned CLRENA : 32;
    };
  };
} typeNVIC_ICER1BITS;
sfr far volatile typeNVIC_ICER1BITS NVIC_ICER1bits absolute 0xE000E184;

 typedef struct tagNVIC_ICER2BITS {
  union {
    struct {
      unsigned CLRENA : 16;
      unsigned : 16;
    };
  };
} typeNVIC_ICER2BITS;
sfr far volatile typeNVIC_ICER2BITS NVIC_ICER2bits absolute 0xE000E188;

 typedef struct tagNVIC_ISPR0BITS {
  union {
    struct {
      unsigned SETPEND : 32;
    };
  };
} typeNVIC_ISPR0BITS;
sfr far volatile typeNVIC_ISPR0BITS NVIC_ISPR0bits absolute 0xE000E200;

 typedef struct tagNVIC_ISPR1BITS {
  union {
    struct {
      unsigned SETPEND : 32;
    };
  };
} typeNVIC_ISPR1BITS;
sfr far volatile typeNVIC_ISPR1BITS NVIC_ISPR1bits absolute 0xE000E204;

 typedef struct tagNVIC_ISPR2BITS {
  union {
    struct {
      unsigned SETPEND : 16;
      unsigned : 16;
    };
  };
} typeNVIC_ISPR2BITS;
sfr far volatile typeNVIC_ISPR2BITS NVIC_ISPR2bits absolute 0xE000E208;

 typedef struct tagNVIC_ICPR0BITS {
  union {
    struct {
      unsigned CLRPEND : 32;
    };
  };
} typeNVIC_ICPR0BITS;
sfr far volatile typeNVIC_ICPR0BITS NVIC_ICPR0bits absolute 0xE000E280;

 typedef struct tagNVIC_ICPR1BITS {
  union {
    struct {
      unsigned CLRPEND : 32;
    };
  };
} typeNVIC_ICPR1BITS;
sfr far volatile typeNVIC_ICPR1BITS NVIC_ICPR1bits absolute 0xE000E284;

 typedef struct tagNVIC_ICPR2BITS {
  union {
    struct {
      unsigned CLRPEND : 16;
      unsigned : 16;
    };
  };
} typeNVIC_ICPR2BITS;
sfr far volatile typeNVIC_ICPR2BITS NVIC_ICPR2bits absolute 0xE000E288;

 typedef struct tagNVIC_IABR0BITS {
  union {
    struct {
      unsigned ACTIVE : 32;
    };
  };
} typeNVIC_IABR0BITS;
sfr far volatile typeNVIC_IABR0BITS NVIC_IABR0bits absolute 0xE000E300;

 typedef struct tagNVIC_IABR1BITS {
  union {
    struct {
      unsigned ACTIVE : 32;
    };
  };
} typeNVIC_IABR1BITS;
sfr far volatile typeNVIC_IABR1BITS NVIC_IABR1bits absolute 0xE000E304;

 typedef struct tagNVIC_IABR2BITS {
  union {
    struct {
      unsigned ACTIVE : 16;
      unsigned : 16;
    };
  };
} typeNVIC_IABR2BITS;
sfr far volatile typeNVIC_IABR2BITS NVIC_IABR2bits absolute 0xE000E308;

 typedef struct tagNVIC_IPR0BITS {
  union {
    struct {
      unsigned IPR_N0 : 8;
      unsigned IPR_N1 : 8;
      unsigned IPR_N2 : 8;
      unsigned IPR_N3 : 8;
    };
  };
} typeNVIC_IPR0BITS;
sfr far volatile typeNVIC_IPR0BITS NVIC_IPR0bits absolute 0xE000E400;

 typedef struct tagNVIC_IPR1BITS {
  union {
    struct {
      unsigned IPR_N0 : 8;
      unsigned IPR_N1 : 8;
      unsigned IPR_N2 : 8;
      unsigned IPR_N3 : 8;
    };
  };
} typeNVIC_IPR1BITS;
sfr far volatile typeNVIC_IPR1BITS NVIC_IPR1bits absolute 0xE000E404;

 typedef struct tagNVIC_IPR2BITS {
  union {
    struct {
      unsigned IPR_N0 : 8;
      unsigned IPR_N1 : 8;
      unsigned IPR_N2 : 8;
      unsigned IPR_N3 : 8;
    };
  };
} typeNVIC_IPR2BITS;
sfr far volatile typeNVIC_IPR2BITS NVIC_IPR2bits absolute 0xE000E408;

 typedef struct tagNVIC_IPR3BITS {
  union {
    struct {
      unsigned IPR_N0 : 8;
      unsigned IPR_N1 : 8;
      unsigned IPR_N2 : 8;
      unsigned IPR_N3 : 8;
    };
  };
} typeNVIC_IPR3BITS;
sfr far volatile typeNVIC_IPR3BITS NVIC_IPR3bits absolute 0xE000E40C;

 typedef struct tagNVIC_IPR4BITS {
  union {
    struct {
      unsigned IPR_N0 : 8;
      unsigned IPR_N1 : 8;
      unsigned IPR_N2 : 8;
      unsigned IPR_N3 : 8;
    };
  };
} typeNVIC_IPR4BITS;
sfr far volatile typeNVIC_IPR4BITS NVIC_IPR4bits absolute 0xE000E410;

 typedef struct tagNVIC_IPR5BITS {
  union {
    struct {
      unsigned IPR_N0 : 8;
      unsigned IPR_N1 : 8;
      unsigned IPR_N2 : 8;
      unsigned IPR_N3 : 8;
    };
  };
} typeNVIC_IPR5BITS;
sfr far volatile typeNVIC_IPR5BITS NVIC_IPR5bits absolute 0xE000E414;

 typedef struct tagNVIC_IPR6BITS {
  union {
    struct {
      unsigned IPR_N0 : 8;
      unsigned IPR_N1 : 8;
      unsigned IPR_N2 : 8;
      unsigned IPR_N3 : 8;
    };
  };
} typeNVIC_IPR6BITS;
sfr far volatile typeNVIC_IPR6BITS NVIC_IPR6bits absolute 0xE000E418;

 typedef struct tagNVIC_IPR7BITS {
  union {
    struct {
      unsigned IPR_N0 : 8;
      unsigned IPR_N1 : 8;
      unsigned IPR_N2 : 8;
      unsigned IPR_N3 : 8;
    };
  };
} typeNVIC_IPR7BITS;
sfr far volatile typeNVIC_IPR7BITS NVIC_IPR7bits absolute 0xE000E41C;

 typedef struct tagNVIC_IPR8BITS {
  union {
    struct {
      unsigned IPR_N0 : 8;
      unsigned IPR_N1 : 8;
      unsigned IPR_N2 : 8;
      unsigned IPR_N3 : 8;
    };
  };
} typeNVIC_IPR8BITS;
sfr far volatile typeNVIC_IPR8BITS NVIC_IPR8bits absolute 0xE000E420;

 typedef struct tagNVIC_IPR9BITS {
  union {
    struct {
      unsigned IPR_N0 : 8;
      unsigned IPR_N1 : 8;
      unsigned IPR_N2 : 8;
      unsigned IPR_N3 : 8;
    };
  };
} typeNVIC_IPR9BITS;
sfr far volatile typeNVIC_IPR9BITS NVIC_IPR9bits absolute 0xE000E424;

 typedef struct tagNVIC_IPR10BITS {
  union {
    struct {
      unsigned IPR_N0 : 8;
      unsigned IPR_N1 : 8;
      unsigned IPR_N2 : 8;
      unsigned IPR_N3 : 8;
    };
  };
} typeNVIC_IPR10BITS;
sfr far volatile typeNVIC_IPR10BITS NVIC_IPR10bits absolute 0xE000E428;

 typedef struct tagNVIC_IPR11BITS {
  union {
    struct {
      unsigned IPR_N0 : 8;
      unsigned IPR_N1 : 8;
      unsigned IPR_N2 : 8;
      unsigned IPR_N3 : 8;
    };
  };
} typeNVIC_IPR11BITS;
sfr far volatile typeNVIC_IPR11BITS NVIC_IPR11bits absolute 0xE000E42C;

 typedef struct tagNVIC_IPR12BITS {
  union {
    struct {
      unsigned IPR_N0 : 8;
      unsigned IPR_N1 : 8;
      unsigned IPR_N2 : 8;
      unsigned IPR_N3 : 8;
    };
  };
} typeNVIC_IPR12BITS;
sfr far volatile typeNVIC_IPR12BITS NVIC_IPR12bits absolute 0xE000E430;

 typedef struct tagNVIC_IPR13BITS {
  union {
    struct {
      unsigned IPR_N0 : 8;
      unsigned IPR_N1 : 8;
      unsigned IPR_N2 : 8;
      unsigned IPR_N3 : 8;
    };
  };
} typeNVIC_IPR13BITS;
sfr far volatile typeNVIC_IPR13BITS NVIC_IPR13bits absolute 0xE000E434;

 typedef struct tagNVIC_IPR14BITS {
  union {
    struct {
      unsigned IPR_N0 : 8;
      unsigned IPR_N1 : 8;
      unsigned IPR_N2 : 8;
      unsigned IPR_N3 : 8;
    };
  };
} typeNVIC_IPR14BITS;
sfr far volatile typeNVIC_IPR14BITS NVIC_IPR14bits absolute 0xE000E438;

 typedef struct tagSCB_ICSRBITS {
  union {
    struct {
      unsigned VECTACTIVE : 9;
      unsigned : 2;
      unsigned RETOBASE : 1;
      unsigned VECTPENDING : 10;
      unsigned ISRPENDING : 1;
      unsigned : 2;
      unsigned PENDSTCLR : 1;
      unsigned PENDSTSET : 1;
      unsigned PENDSVCLR : 1;
      unsigned PENDSVSET : 1;
      unsigned : 3;
    };
  };
} typeSCB_ICSRBITS;
sfr far volatile typeSCB_ICSRBITS SCB_ICSRbits absolute 0xE000ED04;

 typedef struct tagSCB_VTORBITS {
  union {
    struct {
      unsigned : 9;
      unsigned TABLEOFF : 21;
      unsigned : 2;
    };
  };
} typeSCB_VTORBITS;
sfr far volatile typeSCB_VTORBITS SCB_VTORbits absolute 0xE000ED08;

 typedef struct tagSCB_AIRCRBITS {
  union {
    struct {
      unsigned VECTRESET : 1;
      unsigned VECTCLRACTIVE : 1;
      unsigned SYSRESETREQ : 1;
      unsigned : 5;
      unsigned PRIGROUP : 3;
      unsigned : 4;
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
      unsigned NONBASETHRDENA : 1;
      unsigned USERSETMPEND : 1;
      unsigned : 1;
      unsigned UNALIGN_TRP : 1;
      unsigned DIV_0_TRP : 1;
      unsigned : 3;
      unsigned BFHFNIGN : 1;
      unsigned STKALIGN : 1;
      unsigned : 22;
    };
  };
} typeSCB_CCRBITS;
sfr far volatile typeSCB_CCRBITS SCB_CCRbits absolute 0xE000ED14;

 typedef struct tagSCB_SHPR1BITS {
  union {
    struct {
      unsigned PRI4 : 8;
      unsigned PRI5 : 8;
      unsigned PRI6 : 8;
      unsigned : 8;
    };
  };
} typeSCB_SHPR1BITS;
sfr far volatile typeSCB_SHPR1BITS SCB_SHPR1bits absolute 0xE000ED18;

 typedef struct tagSCB_SHPR2BITS {
  union {
    struct {
      unsigned : 24;
      unsigned PRI11 : 8;
    };
  };
} typeSCB_SHPR2BITS;
sfr far volatile typeSCB_SHPR2BITS SCB_SHPR2bits absolute 0xE000ED1C;

 typedef struct tagSCB_SHPR3BITS {
  union {
    struct {
      unsigned : 16;
      unsigned PRI14 : 8;
      unsigned PRI15 : 8;
    };
  };
} typeSCB_SHPR3BITS;
sfr far volatile typeSCB_SHPR3BITS SCB_SHPR3bits absolute 0xE000ED20;

 typedef struct tagSCB_SHCRSBITS {
  union {
    struct {
      unsigned MEMFAULTACT : 1;
      unsigned BUSFAULTACT : 1;
      unsigned : 1;
      unsigned USGFAULTACT : 1;
      unsigned : 3;
      unsigned SVCALLACT : 1;
      unsigned MONITORACT : 1;
      unsigned : 1;
      unsigned PENDSVACT : 1;
      unsigned SYSTICKACT : 1;
      unsigned USGFAULTPENDED : 1;
      unsigned MEMFAULTPENDED : 1;
      unsigned BUSFAULTPENDED : 1;
      unsigned SVCALLPENDED : 1;
      unsigned MEMFAULTENA : 1;
      unsigned BUSFAULTENA : 1;
      unsigned USGFAULTENA : 1;
      unsigned : 13;
    };
  };
} typeSCB_SHCRSBITS;
sfr far volatile typeSCB_SHCRSBITS SCB_SHCRSbits absolute 0xE000ED24;

 typedef struct tagSCB_CFSRBITS {
  union {
    struct {
      unsigned MMFSR : 8;
      unsigned BFSR : 8;
      unsigned UFSR : 16;
    };
  };
} typeSCB_CFSRBITS;
sfr far volatile typeSCB_CFSRBITS SCB_CFSRbits absolute 0xE000ED28;

 typedef struct tagSCB_HFSRBITS {
  union {
    struct {
      unsigned : 1;
      unsigned VECTTBL : 1;
      unsigned : 28;
      unsigned FORCED : 1;
      unsigned DEBUG_VT : 1;
    };
  };
} typeSCB_HFSRBITS;
sfr far volatile typeSCB_HFSRBITS SCB_HFSRbits absolute 0xE000ED2C;

 typedef struct tagSCB_MMARBITS {
  union {
    struct {
      unsigned MMAR : 32;
    };
  };
} typeSCB_MMARBITS;
sfr far volatile typeSCB_MMARBITS SCB_MMARbits absolute 0xE000ED34;

 typedef struct tagSCB_BFARBITS {
  union {
    struct {
      unsigned BFAR : 32;
    };
  };
} typeSCB_BFARBITS;
sfr far volatile typeSCB_BFARBITS SCB_BFARbits absolute 0xE000ED38;

 typedef struct tagSTK_CTRLBITS {
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
} typeSTK_CTRLBITS;
sfr far volatile typeSTK_CTRLBITS STK_CTRLbits absolute 0xE000E010;

 typedef struct tagSTK_LOADBITS {
  union {
    struct {
      unsigned RELOAD : 24;
      unsigned : 8;
    };
  };
} typeSTK_LOADBITS;
sfr far volatile typeSTK_LOADBITS STK_LOADbits absolute 0xE000E014;

 typedef struct tagSTK_VALBITS {
  union {
    struct {
      unsigned CURRENT : 24;
      unsigned : 8;
    };
  };
} typeSTK_VALBITS;
sfr far volatile typeSTK_VALBITS STK_VALbits absolute 0xE000E018;

 typedef struct tagSTK_CALIBBITS {
  union {
    struct {
      unsigned TENMS : 24;
      unsigned : 8;
    };
  };
} typeSTK_CALIBBITS;
sfr far volatile typeSTK_CALIBBITS STK_CALIBbits absolute 0xE000E01C;
