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

const unsigned long __FLASH_SIZE = 0x00040000;
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
const IVT_INT_TAMP_STAMP         = 18;
const IVT_INT_RTC_WKUP           = 19;
const IVT_INT_FLASH              = 20;
const IVT_INT_RCC                = 21;
const IVT_INT_EXTI0              = 22;
const IVT_INT_EXTI1              = 23;
const IVT_INT_EXTI2              = 24;
const IVT_INT_EXTI3              = 25;
const IVT_INT_EXTI4              = 26;
const IVT_INT_DMA1_CH1           = 27;
const IVT_INT_DMA1_CH2           = 28;
const IVT_INT_DMA1_CH3           = 29;
const IVT_INT_DMA1_CH4           = 30;
const IVT_INT_DMA1_CH5           = 31;
const IVT_INT_DMA1_CH6           = 32;
const IVT_INT_DMA1_CH7           = 33;
const IVT_INT_ADC1               = 34;
const IVT_INT_USB_HP             = 35;
const IVT_INT_USB_LP             = 36;
const IVT_INT_DAC                = 37;
const IVT_INT_COMP_CA            = 38;
const IVT_INT_EXTI9_5            = 39;
const IVT_INT_LCD                = 40;
const IVT_INT_TIM9               = 41;
const IVT_INT_TIM10              = 42;
const IVT_INT_TIM11              = 43;
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
const IVT_INT_OTG_FS_WKUP        = 58;
const IVT_INT_TIM6               = 59;
const IVT_INT_TIM7               = 60;
const IVT_INT_TIM5               = 61;
const IVT_INT_SPI3               = 62;
const IVT_INT_DMA2_CH1           = 63;
const IVT_INT_DMA2_CH2           = 64;
const IVT_INT_DMA2_CH3           = 65;
const IVT_INT_DMA2_CH4           = 66;
const IVT_INT_DMA2_CH5           = 67;
const IVT_INT_AES                = 68;
const IVT_INT_COMP_ACQ           = 69;


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
sfr unsigned long   volatile ADC_CSR              absolute 0x40012700;
    const register unsigned short int ADONS1 = 6;
    sbit  ADONS1_bit at ADC_CSR.B6;
    const register unsigned short int OVR1 = 5;
    sbit  OVR1_bit at ADC_CSR.B5;
    const register unsigned short int STRT1 = 4;
    sbit  STRT1_bit at ADC_CSR.B4;
    const register unsigned short int JSTRT1 = 3;
    sbit  JSTRT1_bit at ADC_CSR.B3;
    const register unsigned short int JEOC1 = 2;
    sbit  JEOC1_bit at ADC_CSR.B2;
    const register unsigned short int EOC1 = 1;
    sbit  EOC1_bit at ADC_CSR.B1;
    const register unsigned short int AWD1 = 0;
    sbit  AWD1_bit at ADC_CSR.B0;

sfr unsigned long   volatile ADC_CCR              absolute 0x40012704;
    const register unsigned short int TSVREFE = 23;
    sbit  TSVREFE_bit at ADC_CCR.B23;
    const register unsigned short int ADCPRE0 = 16;
    sbit  ADCPRE0_bit at ADC_CCR.B16;
    const register unsigned short int ADCPRE1 = 17;
    sbit  ADCPRE1_bit at ADC_CCR.B17;

sfr unsigned long   volatile COMP_CSR             absolute 0x40007C00;
    const register unsigned short int TSUSP = 31;
    sbit  TSUSP_bit at COMP_CSR.B31;
    const register unsigned short int CAIF = 30;
    sbit  CAIF_bit at COMP_CSR.B30;
    const register unsigned short int CAIE = 29;
    sbit  CAIE_bit at COMP_CSR.B29;
    const register unsigned short int RCH13 = 28;
    sbit  RCH13_bit at COMP_CSR.B28;
    const register unsigned short int FCH8 = 27;
    sbit  FCH8_bit at COMP_CSR.B27;
    const register unsigned short int FCH3 = 26;
    sbit  FCH3_bit at COMP_CSR.B26;
    const register unsigned short int OUTSEL0 = 21;
    sbit  OUTSEL0_bit at COMP_CSR.B21;
    const register unsigned short int OUTSEL1 = 22;
    sbit  OUTSEL1_bit at COMP_CSR.B22;
    const register unsigned short int OUTSEL2 = 23;
    sbit  OUTSEL2_bit at COMP_CSR.B23;
    const register unsigned short int INSEL0 = 18;
    sbit  INSEL0_bit at COMP_CSR.B18;
    const register unsigned short int INSEL1 = 19;
    sbit  INSEL1_bit at COMP_CSR.B19;
    const register unsigned short int INSEL2 = 20;
    sbit  INSEL2_bit at COMP_CSR.B20;
    const register unsigned short int WNDWE = 17;
    sbit  WNDWE_bit at COMP_CSR.B17;
    const register unsigned short int VREFOUTEN = 16;
    sbit  VREFOUTEN_bit at COMP_CSR.B16;
    const register unsigned short int CMP2OUT = 13;
    sbit  CMP2OUT_bit at COMP_CSR.B13;
    const register unsigned short int SPEED = 12;
    sbit  SPEED_bit at COMP_CSR.B12;
    const register unsigned short int CMP1OUT = 7;
    sbit  CMP1OUT_bit at COMP_CSR.B7;
    const register unsigned short int SW1 = 5;
    sbit  SW1_bit at COMP_CSR.B5;
    const register unsigned short int CMP1EN = 4;
    sbit  CMP1EN_bit at COMP_CSR.B4;
    const register unsigned short int PD400K = 3;
    sbit  PD400K_bit at COMP_CSR.B3;
    const register unsigned short int PD10K = 2;
    sbit  PD10K_bit at COMP_CSR.B2;
    const register unsigned short int PU400K = 1;
    sbit  PU400K_bit at COMP_CSR.B1;
    const register unsigned short int PU10K = 0;
    sbit  PU10K_bit at COMP_CSR.B0;

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

sfr unsigned long   volatile CRC_CR               absolute 0x40023008;
    const register unsigned short int RESET_ = 0;
    sbit  RESET_bit at CRC_CR.B0;

sfr unsigned long   volatile DAC_CR               absolute 0x40007400;
    const register unsigned short int DMAUDRIE2 = 29;
    sbit  DMAUDRIE2_bit at DAC_CR.B29;
    const register unsigned short int DMAEN2 = 28;
    sbit  DMAEN2_bit at DAC_CR.B28;
    const register unsigned short int MAMP20 = 24;
    sbit  MAMP20_bit at DAC_CR.B24;
    const register unsigned short int MAMP21 = 25;
    sbit  MAMP21_bit at DAC_CR.B25;
    const register unsigned short int MAMP22 = 26;
    sbit  MAMP22_bit at DAC_CR.B26;
    const register unsigned short int MAMP23 = 27;
    sbit  MAMP23_bit at DAC_CR.B27;
    const register unsigned short int WAVE20 = 22;
    sbit  WAVE20_bit at DAC_CR.B22;
    const register unsigned short int WAVE21 = 23;
    sbit  WAVE21_bit at DAC_CR.B23;
    const register unsigned short int TSEL20 = 19;
    sbit  TSEL20_bit at DAC_CR.B19;
    const register unsigned short int TSEL21 = 20;
    sbit  TSEL21_bit at DAC_CR.B20;
    const register unsigned short int TSEL22 = 21;
    sbit  TSEL22_bit at DAC_CR.B21;
    const register unsigned short int TEN2 = 18;
    sbit  TEN2_bit at DAC_CR.B18;
    const register unsigned short int BOFF2 = 17;
    sbit  BOFF2_bit at DAC_CR.B17;
    const register unsigned short int EN2 = 16;
    sbit  EN2_bit at DAC_CR.B16;
    const register unsigned short int DMAUDRIE1 = 13;
    sbit  DMAUDRIE1_bit at DAC_CR.B13;
    const register unsigned short int DMAEN1 = 12;
    sbit  DMAEN1_bit at DAC_CR.B12;
    const register unsigned short int MAMP10 = 8;
    sbit  MAMP10_bit at DAC_CR.B8;
    const register unsigned short int MAMP11 = 9;
    sbit  MAMP11_bit at DAC_CR.B9;
    const register unsigned short int MAMP12 = 10;
    sbit  MAMP12_bit at DAC_CR.B10;
    const register unsigned short int MAMP13 = 11;
    sbit  MAMP13_bit at DAC_CR.B11;
    const register unsigned short int WAVE10 = 6;
    sbit  WAVE10_bit at DAC_CR.B6;
    const register unsigned short int WAVE11 = 7;
    sbit  WAVE11_bit at DAC_CR.B7;
    const register unsigned short int TSEL10 = 3;
    sbit  TSEL10_bit at DAC_CR.B3;
    const register unsigned short int TSEL11 = 4;
    sbit  TSEL11_bit at DAC_CR.B4;
    const register unsigned short int TSEL12 = 5;
    sbit  TSEL12_bit at DAC_CR.B5;
    const register unsigned short int TEN1 = 2;
    sbit  TEN1_bit at DAC_CR.B2;
    const register unsigned short int BOFF1 = 1;
    sbit  BOFF1_bit at DAC_CR.B1;
    const register unsigned short int EN1 = 0;
    sbit  EN1_bit at DAC_CR.B0;

sfr unsigned long   volatile DAC_SWTRIGR          absolute 0x40007404;
    const register unsigned short int SWTRIG2 = 1;
    sbit  SWTRIG2_bit at DAC_SWTRIGR.B1;
    const register unsigned short int SWTRIG1 = 0;
    sbit  SWTRIG1_bit at DAC_SWTRIGR.B0;

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

sfr unsigned long   volatile DAC_DHR12LD          absolute 0x40007424;
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

sfr unsigned long   volatile DAC_DHR8RD           absolute 0x40007428;
    sbit  DACC2DHR0_DAC_DHR8RD_bit at DAC_DHR8RD.B8;
    sbit  DACC2DHR1_DAC_DHR8RD_bit at DAC_DHR8RD.B9;
    sbit  DACC2DHR2_DAC_DHR8RD_bit at DAC_DHR8RD.B10;
    sbit  DACC2DHR3_DAC_DHR8RD_bit at DAC_DHR8RD.B11;
    sbit  DACC2DHR4_DAC_DHR8RD_bit at DAC_DHR8RD.B12;
    sbit  DACC2DHR5_DAC_DHR8RD_bit at DAC_DHR8RD.B13;
    sbit  DACC2DHR6_DAC_DHR8RD_bit at DAC_DHR8RD.B14;
    sbit  DACC2DHR7_DAC_DHR8RD_bit at DAC_DHR8RD.B15;
    sbit  DACC1DHR0_DAC_DHR8RD_bit at DAC_DHR8RD.B0;
    sbit  DACC1DHR1_DAC_DHR8RD_bit at DAC_DHR8RD.B1;
    sbit  DACC1DHR2_DAC_DHR8RD_bit at DAC_DHR8RD.B2;
    sbit  DACC1DHR3_DAC_DHR8RD_bit at DAC_DHR8RD.B3;
    sbit  DACC1DHR4_DAC_DHR8RD_bit at DAC_DHR8RD.B4;
    sbit  DACC1DHR5_DAC_DHR8RD_bit at DAC_DHR8RD.B5;
    sbit  DACC1DHR6_DAC_DHR8RD_bit at DAC_DHR8RD.B6;
    sbit  DACC1DHR7_DAC_DHR8RD_bit at DAC_DHR8RD.B7;

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
    const register unsigned short int DMAUDR2 = 29;
    sbit  DMAUDR2_bit at DAC_SR.B29;
    const register unsigned short int DMAUDR1 = 13;
    sbit  DMAUDR1_bit at DAC_SR.B13;

sfr unsigned long   volatile DMA1_ISR             absolute 0x40026000;
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

sfr unsigned long   volatile DMA1_IFCR            absolute 0x40026004;
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

sfr unsigned long   volatile DMA1_CCR1            absolute 0x40026008;
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
    const register unsigned short int EN = 0;
    sbit  EN_bit at DMA1_CCR1.B0;

sfr unsigned long   volatile DMA1_CNDTR1          absolute 0x4002600C;
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

sfr unsigned long   volatile DMA1_CPAR1           absolute 0x40026010;
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

sfr unsigned long   volatile DMA1_CMAR1           absolute 0x40026014;
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

sfr unsigned long   volatile DMA1_CCR2            absolute 0x4002601C;
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

sfr unsigned long   volatile DMA1_CNDTR2          absolute 0x40026020;
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

sfr unsigned long   volatile DMA1_CPAR2           absolute 0x40026024;
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

sfr unsigned long   volatile DMA1_CMAR2           absolute 0x40026028;
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

sfr unsigned long   volatile DMA1_CCR3            absolute 0x40026030;
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

sfr unsigned long   volatile DMA1_CNDTR3          absolute 0x40026034;
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

sfr unsigned long   volatile DMA1_CPAR3           absolute 0x40026038;
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

sfr unsigned long   volatile DMA1_CMAR3           absolute 0x4002603C;
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

sfr unsigned long   volatile DMA1_CCR4            absolute 0x40026044;
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

sfr unsigned long   volatile DMA1_CNDTR4          absolute 0x40026048;
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

sfr unsigned long   volatile DMA1_CPAR4           absolute 0x4002604C;
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

sfr unsigned long   volatile DMA1_CMAR4           absolute 0x40026050;
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

sfr unsigned long   volatile DMA1_CCR5            absolute 0x40026058;
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

sfr unsigned long   volatile DMA1_CNDTR5          absolute 0x4002605C;
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

sfr unsigned long   volatile DMA1_CPAR5           absolute 0x40026060;
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

sfr unsigned long   volatile DMA1_CMAR5           absolute 0x40026064;
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

sfr unsigned long   volatile DMA1_CCR6            absolute 0x4002606C;
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

sfr unsigned long   volatile DMA1_CNDTR6          absolute 0x40026070;
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

sfr unsigned long   volatile DMA1_CPAR6           absolute 0x40026074;
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

sfr unsigned long   volatile DMA1_CMAR6           absolute 0x40026078;
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

sfr unsigned long   volatile DMA1_CCR7            absolute 0x40026080;
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

sfr unsigned long   volatile DMA1_CNDTR7          absolute 0x40026084;
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

sfr unsigned long   volatile DMA1_CPAR7           absolute 0x40026088;
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

sfr unsigned long   volatile DMA1_CMAR7           absolute 0x4002608C;
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

sfr unsigned long   volatile DMA2_ISR             absolute 0x40026400;
    sbit  TEIF7_DMA2_ISR_bit at DMA2_ISR.B27;
    sbit  HTIF7_DMA2_ISR_bit at DMA2_ISR.B26;
    sbit  TCIF7_DMA2_ISR_bit at DMA2_ISR.B25;
    sbit  GIF7_DMA2_ISR_bit at DMA2_ISR.B24;
    sbit  TEIF6_DMA2_ISR_bit at DMA2_ISR.B23;
    sbit  HTIF6_DMA2_ISR_bit at DMA2_ISR.B22;
    sbit  TCIF6_DMA2_ISR_bit at DMA2_ISR.B21;
    sbit  GIF6_DMA2_ISR_bit at DMA2_ISR.B20;
    sbit  TEIF5_DMA2_ISR_bit at DMA2_ISR.B19;
    sbit  HTIF5_DMA2_ISR_bit at DMA2_ISR.B18;
    sbit  TCIF5_DMA2_ISR_bit at DMA2_ISR.B17;
    sbit  GIF5_DMA2_ISR_bit at DMA2_ISR.B16;
    sbit  TEIF4_DMA2_ISR_bit at DMA2_ISR.B15;
    sbit  HTIF4_DMA2_ISR_bit at DMA2_ISR.B14;
    sbit  TCIF4_DMA2_ISR_bit at DMA2_ISR.B13;
    sbit  GIF4_DMA2_ISR_bit at DMA2_ISR.B12;
    sbit  TEIF3_DMA2_ISR_bit at DMA2_ISR.B11;
    sbit  HTIF3_DMA2_ISR_bit at DMA2_ISR.B10;
    sbit  TCIF3_DMA2_ISR_bit at DMA2_ISR.B9;
    sbit  GIF3_DMA2_ISR_bit at DMA2_ISR.B8;
    sbit  TEIF2_DMA2_ISR_bit at DMA2_ISR.B7;
    sbit  HTIF2_DMA2_ISR_bit at DMA2_ISR.B6;
    sbit  TCIF2_DMA2_ISR_bit at DMA2_ISR.B5;
    sbit  GIF2_DMA2_ISR_bit at DMA2_ISR.B4;
    sbit  TEIF1_DMA2_ISR_bit at DMA2_ISR.B3;
    sbit  HTIF1_DMA2_ISR_bit at DMA2_ISR.B2;
    sbit  TCIF1_DMA2_ISR_bit at DMA2_ISR.B1;
    sbit  GIF1_DMA2_ISR_bit at DMA2_ISR.B0;

sfr unsigned long   volatile DMA2_IFCR            absolute 0x40026404;
    sbit  CTEIF7_DMA2_IFCR_bit at DMA2_IFCR.B27;
    sbit  CHTIF7_DMA2_IFCR_bit at DMA2_IFCR.B26;
    sbit  CTCIF7_DMA2_IFCR_bit at DMA2_IFCR.B25;
    sbit  CGIF7_DMA2_IFCR_bit at DMA2_IFCR.B24;
    sbit  CTEIF6_DMA2_IFCR_bit at DMA2_IFCR.B23;
    sbit  CHTIF6_DMA2_IFCR_bit at DMA2_IFCR.B22;
    sbit  CTCIF6_DMA2_IFCR_bit at DMA2_IFCR.B21;
    sbit  CGIF6_DMA2_IFCR_bit at DMA2_IFCR.B20;
    sbit  CTEIF5_DMA2_IFCR_bit at DMA2_IFCR.B19;
    sbit  CHTIF5_DMA2_IFCR_bit at DMA2_IFCR.B18;
    sbit  CTCIF5_DMA2_IFCR_bit at DMA2_IFCR.B17;
    sbit  CGIF5_DMA2_IFCR_bit at DMA2_IFCR.B16;
    sbit  CTEIF4_DMA2_IFCR_bit at DMA2_IFCR.B15;
    sbit  CHTIF4_DMA2_IFCR_bit at DMA2_IFCR.B14;
    sbit  CTCIF4_DMA2_IFCR_bit at DMA2_IFCR.B13;
    sbit  CGIF4_DMA2_IFCR_bit at DMA2_IFCR.B12;
    sbit  CTEIF3_DMA2_IFCR_bit at DMA2_IFCR.B11;
    sbit  CHTIF3_DMA2_IFCR_bit at DMA2_IFCR.B10;
    sbit  CTCIF3_DMA2_IFCR_bit at DMA2_IFCR.B9;
    sbit  CGIF3_DMA2_IFCR_bit at DMA2_IFCR.B8;
    sbit  CTEIF2_DMA2_IFCR_bit at DMA2_IFCR.B7;
    sbit  CHTIF2_DMA2_IFCR_bit at DMA2_IFCR.B6;
    sbit  CTCIF2_DMA2_IFCR_bit at DMA2_IFCR.B5;
    sbit  CGIF2_DMA2_IFCR_bit at DMA2_IFCR.B4;
    sbit  CTEIF1_DMA2_IFCR_bit at DMA2_IFCR.B3;
    sbit  CHTIF1_DMA2_IFCR_bit at DMA2_IFCR.B2;
    sbit  CTCIF1_DMA2_IFCR_bit at DMA2_IFCR.B1;
    sbit  CGIF1_DMA2_IFCR_bit at DMA2_IFCR.B0;

sfr unsigned long   volatile DMA2_CCR1            absolute 0x40026408;
    sbit  MEM2MEM_DMA2_CCR1_bit at DMA2_CCR1.B14;
    sbit  PL0_DMA2_CCR1_bit at DMA2_CCR1.B12;
    sbit  PL1_DMA2_CCR1_bit at DMA2_CCR1.B13;
    sbit  MSIZE0_DMA2_CCR1_bit at DMA2_CCR1.B10;
    sbit  MSIZE1_DMA2_CCR1_bit at DMA2_CCR1.B11;
    sbit  PSIZE0_DMA2_CCR1_bit at DMA2_CCR1.B8;
    sbit  PSIZE1_DMA2_CCR1_bit at DMA2_CCR1.B9;
    sbit  MINC_DMA2_CCR1_bit at DMA2_CCR1.B7;
    sbit  PINC_DMA2_CCR1_bit at DMA2_CCR1.B6;
    sbit  CIRC_DMA2_CCR1_bit at DMA2_CCR1.B5;
    sbit  DIR_DMA2_CCR1_bit at DMA2_CCR1.B4;
    sbit  TEIE_DMA2_CCR1_bit at DMA2_CCR1.B3;
    sbit  HTIE_DMA2_CCR1_bit at DMA2_CCR1.B2;
    sbit  TCIE_DMA2_CCR1_bit at DMA2_CCR1.B1;
    sbit  EN_DMA2_CCR1_bit at DMA2_CCR1.B0;

sfr unsigned long   volatile DMA2_CNDTR1          absolute 0x4002640C;
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

sfr unsigned long   volatile DMA2_CPAR1           absolute 0x40026410;
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

sfr unsigned long   volatile DMA2_CMAR1           absolute 0x40026414;
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

sfr unsigned long   volatile DMA2_CCR2            absolute 0x4002641C;
    sbit  MEM2MEM_DMA2_CCR2_bit at DMA2_CCR2.B14;
    sbit  PL0_DMA2_CCR2_bit at DMA2_CCR2.B12;
    sbit  PL1_DMA2_CCR2_bit at DMA2_CCR2.B13;
    sbit  MSIZE0_DMA2_CCR2_bit at DMA2_CCR2.B10;
    sbit  MSIZE1_DMA2_CCR2_bit at DMA2_CCR2.B11;
    sbit  PSIZE0_DMA2_CCR2_bit at DMA2_CCR2.B8;
    sbit  PSIZE1_DMA2_CCR2_bit at DMA2_CCR2.B9;
    sbit  MINC_DMA2_CCR2_bit at DMA2_CCR2.B7;
    sbit  PINC_DMA2_CCR2_bit at DMA2_CCR2.B6;
    sbit  CIRC_DMA2_CCR2_bit at DMA2_CCR2.B5;
    sbit  DIR_DMA2_CCR2_bit at DMA2_CCR2.B4;
    sbit  TEIE_DMA2_CCR2_bit at DMA2_CCR2.B3;
    sbit  HTIE_DMA2_CCR2_bit at DMA2_CCR2.B2;
    sbit  TCIE_DMA2_CCR2_bit at DMA2_CCR2.B1;
    sbit  EN_DMA2_CCR2_bit at DMA2_CCR2.B0;

sfr unsigned long   volatile DMA2_CNDTR2          absolute 0x40026420;
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

sfr unsigned long   volatile DMA2_CPAR2           absolute 0x40026424;
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

sfr unsigned long   volatile DMA2_CMAR2           absolute 0x40026428;
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

sfr unsigned long   volatile DMA2_CCR3            absolute 0x40026430;
    sbit  MEM2MEM_DMA2_CCR3_bit at DMA2_CCR3.B14;
    sbit  PL0_DMA2_CCR3_bit at DMA2_CCR3.B12;
    sbit  PL1_DMA2_CCR3_bit at DMA2_CCR3.B13;
    sbit  MSIZE0_DMA2_CCR3_bit at DMA2_CCR3.B10;
    sbit  MSIZE1_DMA2_CCR3_bit at DMA2_CCR3.B11;
    sbit  PSIZE0_DMA2_CCR3_bit at DMA2_CCR3.B8;
    sbit  PSIZE1_DMA2_CCR3_bit at DMA2_CCR3.B9;
    sbit  MINC_DMA2_CCR3_bit at DMA2_CCR3.B7;
    sbit  PINC_DMA2_CCR3_bit at DMA2_CCR3.B6;
    sbit  CIRC_DMA2_CCR3_bit at DMA2_CCR3.B5;
    sbit  DIR_DMA2_CCR3_bit at DMA2_CCR3.B4;
    sbit  TEIE_DMA2_CCR3_bit at DMA2_CCR3.B3;
    sbit  HTIE_DMA2_CCR3_bit at DMA2_CCR3.B2;
    sbit  TCIE_DMA2_CCR3_bit at DMA2_CCR3.B1;
    sbit  EN_DMA2_CCR3_bit at DMA2_CCR3.B0;

sfr unsigned long   volatile DMA2_CNDTR3          absolute 0x40026434;
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

sfr unsigned long   volatile DMA2_CPAR3           absolute 0x40026438;
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

sfr unsigned long   volatile DMA2_CMAR3           absolute 0x4002643C;
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

sfr unsigned long   volatile DMA2_CCR4            absolute 0x40026444;
    sbit  MEM2MEM_DMA2_CCR4_bit at DMA2_CCR4.B14;
    sbit  PL0_DMA2_CCR4_bit at DMA2_CCR4.B12;
    sbit  PL1_DMA2_CCR4_bit at DMA2_CCR4.B13;
    sbit  MSIZE0_DMA2_CCR4_bit at DMA2_CCR4.B10;
    sbit  MSIZE1_DMA2_CCR4_bit at DMA2_CCR4.B11;
    sbit  PSIZE0_DMA2_CCR4_bit at DMA2_CCR4.B8;
    sbit  PSIZE1_DMA2_CCR4_bit at DMA2_CCR4.B9;
    sbit  MINC_DMA2_CCR4_bit at DMA2_CCR4.B7;
    sbit  PINC_DMA2_CCR4_bit at DMA2_CCR4.B6;
    sbit  CIRC_DMA2_CCR4_bit at DMA2_CCR4.B5;
    sbit  DIR_DMA2_CCR4_bit at DMA2_CCR4.B4;
    sbit  TEIE_DMA2_CCR4_bit at DMA2_CCR4.B3;
    sbit  HTIE_DMA2_CCR4_bit at DMA2_CCR4.B2;
    sbit  TCIE_DMA2_CCR4_bit at DMA2_CCR4.B1;
    sbit  EN_DMA2_CCR4_bit at DMA2_CCR4.B0;

sfr unsigned long   volatile DMA2_CNDTR4          absolute 0x40026448;
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

sfr unsigned long   volatile DMA2_CPAR4           absolute 0x4002644C;
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

sfr unsigned long   volatile DMA2_CMAR4           absolute 0x40026450;
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

sfr unsigned long   volatile DMA2_CCR5            absolute 0x40026458;
    sbit  MEM2MEM_DMA2_CCR5_bit at DMA2_CCR5.B14;
    sbit  PL0_DMA2_CCR5_bit at DMA2_CCR5.B12;
    sbit  PL1_DMA2_CCR5_bit at DMA2_CCR5.B13;
    sbit  MSIZE0_DMA2_CCR5_bit at DMA2_CCR5.B10;
    sbit  MSIZE1_DMA2_CCR5_bit at DMA2_CCR5.B11;
    sbit  PSIZE0_DMA2_CCR5_bit at DMA2_CCR5.B8;
    sbit  PSIZE1_DMA2_CCR5_bit at DMA2_CCR5.B9;
    sbit  MINC_DMA2_CCR5_bit at DMA2_CCR5.B7;
    sbit  PINC_DMA2_CCR5_bit at DMA2_CCR5.B6;
    sbit  CIRC_DMA2_CCR5_bit at DMA2_CCR5.B5;
    sbit  DIR_DMA2_CCR5_bit at DMA2_CCR5.B4;
    sbit  TEIE_DMA2_CCR5_bit at DMA2_CCR5.B3;
    sbit  HTIE_DMA2_CCR5_bit at DMA2_CCR5.B2;
    sbit  TCIE_DMA2_CCR5_bit at DMA2_CCR5.B1;
    sbit  EN_DMA2_CCR5_bit at DMA2_CCR5.B0;

sfr unsigned long   volatile DMA2_CNDTR5          absolute 0x4002645C;
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

sfr unsigned long   volatile DMA2_CPAR5           absolute 0x40026460;
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

sfr unsigned long   volatile DMA2_CMAR5           absolute 0x40026464;
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

sfr unsigned long   volatile DMA2_CCR6            absolute 0x4002646C;
    sbit  MEM2MEM_DMA2_CCR6_bit at DMA2_CCR6.B14;
    sbit  PL0_DMA2_CCR6_bit at DMA2_CCR6.B12;
    sbit  PL1_DMA2_CCR6_bit at DMA2_CCR6.B13;
    sbit  MSIZE0_DMA2_CCR6_bit at DMA2_CCR6.B10;
    sbit  MSIZE1_DMA2_CCR6_bit at DMA2_CCR6.B11;
    sbit  PSIZE0_DMA2_CCR6_bit at DMA2_CCR6.B8;
    sbit  PSIZE1_DMA2_CCR6_bit at DMA2_CCR6.B9;
    sbit  MINC_DMA2_CCR6_bit at DMA2_CCR6.B7;
    sbit  PINC_DMA2_CCR6_bit at DMA2_CCR6.B6;
    sbit  CIRC_DMA2_CCR6_bit at DMA2_CCR6.B5;
    sbit  DIR_DMA2_CCR6_bit at DMA2_CCR6.B4;
    sbit  TEIE_DMA2_CCR6_bit at DMA2_CCR6.B3;
    sbit  HTIE_DMA2_CCR6_bit at DMA2_CCR6.B2;
    sbit  TCIE_DMA2_CCR6_bit at DMA2_CCR6.B1;
    sbit  EN_DMA2_CCR6_bit at DMA2_CCR6.B0;

sfr unsigned long   volatile DMA2_CNDTR6          absolute 0x40026470;
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

sfr unsigned long   volatile DMA2_CPAR6           absolute 0x40026474;
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

sfr unsigned long   volatile DMA2_CMAR6           absolute 0x40026478;
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

sfr unsigned long   volatile DMA2_CCR7            absolute 0x40026480;
    sbit  MEM2MEM_DMA2_CCR7_bit at DMA2_CCR7.B14;
    sbit  PL0_DMA2_CCR7_bit at DMA2_CCR7.B12;
    sbit  PL1_DMA2_CCR7_bit at DMA2_CCR7.B13;
    sbit  MSIZE0_DMA2_CCR7_bit at DMA2_CCR7.B10;
    sbit  MSIZE1_DMA2_CCR7_bit at DMA2_CCR7.B11;
    sbit  PSIZE0_DMA2_CCR7_bit at DMA2_CCR7.B8;
    sbit  PSIZE1_DMA2_CCR7_bit at DMA2_CCR7.B9;
    sbit  MINC_DMA2_CCR7_bit at DMA2_CCR7.B7;
    sbit  PINC_DMA2_CCR7_bit at DMA2_CCR7.B6;
    sbit  CIRC_DMA2_CCR7_bit at DMA2_CCR7.B5;
    sbit  DIR_DMA2_CCR7_bit at DMA2_CCR7.B4;
    sbit  TEIE_DMA2_CCR7_bit at DMA2_CCR7.B3;
    sbit  HTIE_DMA2_CCR7_bit at DMA2_CCR7.B2;
    sbit  TCIE_DMA2_CCR7_bit at DMA2_CCR7.B1;
    sbit  EN_DMA2_CCR7_bit at DMA2_CCR7.B0;

sfr unsigned long   volatile DMA2_CNDTR7          absolute 0x40026484;
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

sfr unsigned long   volatile DMA2_CPAR7           absolute 0x40026488;
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

sfr unsigned long   volatile DMA2_CMAR7           absolute 0x4002648C;
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
    const register unsigned short int TR18 = 18;
    sbit  TR18_bit at EXTI_RTSR.B18;
    const register unsigned short int TR19 = 19;
    sbit  TR19_bit at EXTI_RTSR.B19;
    const register unsigned short int TR20 = 20;
    sbit  TR20_bit at EXTI_RTSR.B20;
    const register unsigned short int TR21 = 21;
    sbit  TR21_bit at EXTI_RTSR.B21;
    const register unsigned short int TR22 = 22;
    sbit  TR22_bit at EXTI_RTSR.B22;

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
    sbit  TR18_EXTI_FTSR_bit at EXTI_FTSR.B18;
    sbit  TR19_EXTI_FTSR_bit at EXTI_FTSR.B19;
    sbit  TR20_EXTI_FTSR_bit at EXTI_FTSR.B20;
    sbit  TR21_EXTI_FTSR_bit at EXTI_FTSR.B21;
    sbit  TR22_EXTI_FTSR_bit at EXTI_FTSR.B22;

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
    const register unsigned short int SWIER18 = 18;
    sbit  SWIER18_bit at EXTI_SWIER.B18;
    const register unsigned short int SWIER19 = 19;
    sbit  SWIER19_bit at EXTI_SWIER.B19;
    const register unsigned short int SWIER20 = 20;
    sbit  SWIER20_bit at EXTI_SWIER.B20;
    const register unsigned short int SWIER21 = 21;
    sbit  SWIER21_bit at EXTI_SWIER.B21;
    const register unsigned short int SWIER22 = 22;
    sbit  SWIER22_bit at EXTI_SWIER.B22;

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
    const register unsigned short int PR18 = 18;
    sbit  PR18_bit at EXTI_PR.B18;
    const register unsigned short int PR19 = 19;
    sbit  PR19_bit at EXTI_PR.B19;
    const register unsigned short int PR20 = 20;
    sbit  PR20_bit at EXTI_PR.B20;
    const register unsigned short int PR21 = 21;
    sbit  PR21_bit at EXTI_PR.B21;
    const register unsigned short int PR22 = 22;
    sbit  PR22_bit at EXTI_PR.B22;

sfr unsigned long   volatile FLASH_ACR            absolute 0x40023C00;
    const register unsigned short int LATENCY = 0;
    sbit  LATENCY_bit at FLASH_ACR.B0;
    const register unsigned short int PRFTEN = 1;
    sbit  PRFTEN_bit at FLASH_ACR.B1;
    const register unsigned short int ACC64 = 2;
    sbit  ACC64_bit at FLASH_ACR.B2;
    const register unsigned short int SLEEP_PD = 3;
    sbit  SLEEP_PD_bit at FLASH_ACR.B3;
    const register unsigned short int RUN_PD = 4;
    sbit  RUN_PD_bit at FLASH_ACR.B4;

sfr unsigned long   volatile FLASH_PECR           absolute 0x40023C04;
    const register unsigned short int PELOCK = 0;
    sbit  PELOCK_bit at FLASH_PECR.B0;
    const register unsigned short int PRGLOCK = 1;
    sbit  PRGLOCK_bit at FLASH_PECR.B1;
    const register unsigned short int OPTLOCK = 2;
    sbit  OPTLOCK_bit at FLASH_PECR.B2;
    const register unsigned short int PRG = 3;
    sbit  PRG_bit at FLASH_PECR.B3;
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
    const register unsigned short int ERRIE = 17;
    sbit  ERRIE_bit at FLASH_PECR.B17;
    const register unsigned short int OBL_LAUNCH = 18;
    sbit  OBL_LAUNCH_bit at FLASH_PECR.B18;

sfr unsigned long   volatile FLASH_PDKEYR         absolute 0x40023C08;
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

sfr unsigned long   volatile FLASH_PEKEYR         absolute 0x40023C0C;
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

sfr unsigned long   volatile FLASH_PRGKEYR        absolute 0x40023C10;
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

sfr unsigned long   volatile FLASH_OPTKEYR        absolute 0x40023C14;
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

sfr unsigned long   volatile FLASH_SR             absolute 0x40023C18;
    const register unsigned short int BSY = 0;
    sbit  BSY_bit at FLASH_SR.B0;
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
    const register unsigned short int OPTVERRUSR = 12;
    sbit  OPTVERRUSR_bit at FLASH_SR.B12;

sfr unsigned long   volatile FLASH_OBR            absolute 0x40023C1C;
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
    const register unsigned short int IWDG_SW = 20;
    sbit  IWDG_SW_bit at FLASH_OBR.B20;
    const register unsigned short int nRTS_STOP = 21;
    sbit  nRTS_STOP_bit at FLASH_OBR.B21;
    const register unsigned short int nRST_STDBY = 22;
    sbit  nRST_STDBY_bit at FLASH_OBR.B22;
    const register unsigned short int BFB2 = 23;
    sbit  BFB2_bit at FLASH_OBR.B23;

sfr unsigned long   volatile FLASH_WRPR1          absolute 0x40023C20;
    const register unsigned short int WRP10 = 0;
    sbit  WRP10_bit at FLASH_WRPR1.B0;
    const register unsigned short int WRP11 = 1;
    sbit  WRP11_bit at FLASH_WRPR1.B1;
    const register unsigned short int WRP12 = 2;
    sbit  WRP12_bit at FLASH_WRPR1.B2;
    const register unsigned short int WRP13 = 3;
    sbit  WRP13_bit at FLASH_WRPR1.B3;
    const register unsigned short int WRP14 = 4;
    sbit  WRP14_bit at FLASH_WRPR1.B4;
    const register unsigned short int WRP15 = 5;
    sbit  WRP15_bit at FLASH_WRPR1.B5;
    const register unsigned short int WRP16 = 6;
    sbit  WRP16_bit at FLASH_WRPR1.B6;
    const register unsigned short int WRP17 = 7;
    sbit  WRP17_bit at FLASH_WRPR1.B7;
    const register unsigned short int WRP18 = 8;
    sbit  WRP18_bit at FLASH_WRPR1.B8;
    const register unsigned short int WRP19 = 9;
    sbit  WRP19_bit at FLASH_WRPR1.B9;
    const register unsigned short int WRP110 = 10;
    sbit  WRP110_bit at FLASH_WRPR1.B10;
    const register unsigned short int WRP111 = 11;
    sbit  WRP111_bit at FLASH_WRPR1.B11;
    const register unsigned short int WRP112 = 12;
    sbit  WRP112_bit at FLASH_WRPR1.B12;
    const register unsigned short int WRP113 = 13;
    sbit  WRP113_bit at FLASH_WRPR1.B13;
    const register unsigned short int WRP114 = 14;
    sbit  WRP114_bit at FLASH_WRPR1.B14;
    const register unsigned short int WRP115 = 15;
    sbit  WRP115_bit at FLASH_WRPR1.B15;
    const register unsigned short int WRP116 = 16;
    sbit  WRP116_bit at FLASH_WRPR1.B16;
    const register unsigned short int WRP117 = 17;
    sbit  WRP117_bit at FLASH_WRPR1.B17;
    const register unsigned short int WRP118 = 18;
    sbit  WRP118_bit at FLASH_WRPR1.B18;
    const register unsigned short int WRP119 = 19;
    sbit  WRP119_bit at FLASH_WRPR1.B19;
    const register unsigned short int WRP120 = 20;
    sbit  WRP120_bit at FLASH_WRPR1.B20;
    const register unsigned short int WRP121 = 21;
    sbit  WRP121_bit at FLASH_WRPR1.B21;
    const register unsigned short int WRP122 = 22;
    sbit  WRP122_bit at FLASH_WRPR1.B22;
    const register unsigned short int WRP123 = 23;
    sbit  WRP123_bit at FLASH_WRPR1.B23;
    const register unsigned short int WRP124 = 24;
    sbit  WRP124_bit at FLASH_WRPR1.B24;
    const register unsigned short int WRP125 = 25;
    sbit  WRP125_bit at FLASH_WRPR1.B25;
    const register unsigned short int WRP126 = 26;
    sbit  WRP126_bit at FLASH_WRPR1.B26;
    const register unsigned short int WRP127 = 27;
    sbit  WRP127_bit at FLASH_WRPR1.B27;
    const register unsigned short int WRP128 = 28;
    sbit  WRP128_bit at FLASH_WRPR1.B28;
    const register unsigned short int WRP129 = 29;
    sbit  WRP129_bit at FLASH_WRPR1.B29;
    const register unsigned short int WRP130 = 30;
    sbit  WRP130_bit at FLASH_WRPR1.B30;
    const register unsigned short int WRP131 = 31;
    sbit  WRP131_bit at FLASH_WRPR1.B31;

sfr unsigned long   volatile FLASH_WRPR2          absolute 0x40023C80;
    const register unsigned short int WRP20 = 0;
    sbit  WRP20_bit at FLASH_WRPR2.B0;
    const register unsigned short int WRP21 = 1;
    sbit  WRP21_bit at FLASH_WRPR2.B1;
    const register unsigned short int WRP22 = 2;
    sbit  WRP22_bit at FLASH_WRPR2.B2;
    const register unsigned short int WRP23 = 3;
    sbit  WRP23_bit at FLASH_WRPR2.B3;
    const register unsigned short int WRP24 = 4;
    sbit  WRP24_bit at FLASH_WRPR2.B4;
    const register unsigned short int WRP25 = 5;
    sbit  WRP25_bit at FLASH_WRPR2.B5;
    const register unsigned short int WRP26 = 6;
    sbit  WRP26_bit at FLASH_WRPR2.B6;
    const register unsigned short int WRP27 = 7;
    sbit  WRP27_bit at FLASH_WRPR2.B7;
    const register unsigned short int WRP28 = 8;
    sbit  WRP28_bit at FLASH_WRPR2.B8;
    const register unsigned short int WRP29 = 9;
    sbit  WRP29_bit at FLASH_WRPR2.B9;
    const register unsigned short int WRP210 = 10;
    sbit  WRP210_bit at FLASH_WRPR2.B10;
    const register unsigned short int WRP211 = 11;
    sbit  WRP211_bit at FLASH_WRPR2.B11;
    const register unsigned short int WRP212 = 12;
    sbit  WRP212_bit at FLASH_WRPR2.B12;
    const register unsigned short int WRP213 = 13;
    sbit  WRP213_bit at FLASH_WRPR2.B13;
    const register unsigned short int WRP214 = 14;
    sbit  WRP214_bit at FLASH_WRPR2.B14;
    const register unsigned short int WRP215 = 15;
    sbit  WRP215_bit at FLASH_WRPR2.B15;
    const register unsigned short int WRP216 = 16;
    sbit  WRP216_bit at FLASH_WRPR2.B16;
    const register unsigned short int WRP217 = 17;
    sbit  WRP217_bit at FLASH_WRPR2.B17;
    const register unsigned short int WRP218 = 18;
    sbit  WRP218_bit at FLASH_WRPR2.B18;
    const register unsigned short int WRP219 = 19;
    sbit  WRP219_bit at FLASH_WRPR2.B19;
    const register unsigned short int WRP220 = 20;
    sbit  WRP220_bit at FLASH_WRPR2.B20;
    const register unsigned short int WRP221 = 21;
    sbit  WRP221_bit at FLASH_WRPR2.B21;
    const register unsigned short int WRP222 = 22;
    sbit  WRP222_bit at FLASH_WRPR2.B22;
    const register unsigned short int WRP223 = 23;
    sbit  WRP223_bit at FLASH_WRPR2.B23;
    const register unsigned short int WRP224 = 24;
    sbit  WRP224_bit at FLASH_WRPR2.B24;
    const register unsigned short int WRP225 = 25;
    sbit  WRP225_bit at FLASH_WRPR2.B25;
    const register unsigned short int WRP226 = 26;
    sbit  WRP226_bit at FLASH_WRPR2.B26;
    const register unsigned short int WRP227 = 27;
    sbit  WRP227_bit at FLASH_WRPR2.B27;
    const register unsigned short int WRP228 = 28;
    sbit  WRP228_bit at FLASH_WRPR2.B28;
    const register unsigned short int WRP229 = 29;
    sbit  WRP229_bit at FLASH_WRPR2.B29;
    const register unsigned short int WRP230 = 30;
    sbit  WRP230_bit at FLASH_WRPR2.B30;
    const register unsigned short int WRP231 = 31;
    sbit  WRP231_bit at FLASH_WRPR2.B31;

sfr unsigned long   volatile FLASH_WRPR3          absolute 0x40023C84;
    const register unsigned short int WRP30 = 0;
    sbit  WRP30_bit at FLASH_WRPR3.B0;
    const register unsigned short int WRP31 = 1;
    sbit  WRP31_bit at FLASH_WRPR3.B1;
    const register unsigned short int WRP32 = 2;
    sbit  WRP32_bit at FLASH_WRPR3.B2;
    const register unsigned short int WRP33 = 3;
    sbit  WRP33_bit at FLASH_WRPR3.B3;
    const register unsigned short int WRP34 = 4;
    sbit  WRP34_bit at FLASH_WRPR3.B4;
    const register unsigned short int WRP35 = 5;
    sbit  WRP35_bit at FLASH_WRPR3.B5;
    const register unsigned short int WRP36 = 6;
    sbit  WRP36_bit at FLASH_WRPR3.B6;
    const register unsigned short int WRP37 = 7;
    sbit  WRP37_bit at FLASH_WRPR3.B7;
    const register unsigned short int WRP38 = 8;
    sbit  WRP38_bit at FLASH_WRPR3.B8;
    const register unsigned short int WRP39 = 9;
    sbit  WRP39_bit at FLASH_WRPR3.B9;
    const register unsigned short int WRP310 = 10;
    sbit  WRP310_bit at FLASH_WRPR3.B10;
    const register unsigned short int WRP311 = 11;
    sbit  WRP311_bit at FLASH_WRPR3.B11;
    const register unsigned short int WRP312 = 12;
    sbit  WRP312_bit at FLASH_WRPR3.B12;
    const register unsigned short int WRP313 = 13;
    sbit  WRP313_bit at FLASH_WRPR3.B13;
    const register unsigned short int WRP314 = 14;
    sbit  WRP314_bit at FLASH_WRPR3.B14;
    const register unsigned short int WRP315 = 15;
    sbit  WRP315_bit at FLASH_WRPR3.B15;
    const register unsigned short int WRP316 = 16;
    sbit  WRP316_bit at FLASH_WRPR3.B16;
    const register unsigned short int WRP317 = 17;
    sbit  WRP317_bit at FLASH_WRPR3.B17;
    const register unsigned short int WRP318 = 18;
    sbit  WRP318_bit at FLASH_WRPR3.B18;
    const register unsigned short int WRP319 = 19;
    sbit  WRP319_bit at FLASH_WRPR3.B19;
    const register unsigned short int WRP320 = 20;
    sbit  WRP320_bit at FLASH_WRPR3.B20;
    const register unsigned short int WRP321 = 21;
    sbit  WRP321_bit at FLASH_WRPR3.B21;
    const register unsigned short int WRP322 = 22;
    sbit  WRP322_bit at FLASH_WRPR3.B22;
    const register unsigned short int WRP323 = 23;
    sbit  WRP323_bit at FLASH_WRPR3.B23;
    const register unsigned short int WRP324 = 24;
    sbit  WRP324_bit at FLASH_WRPR3.B24;
    const register unsigned short int WRP325 = 25;
    sbit  WRP325_bit at FLASH_WRPR3.B25;
    const register unsigned short int WRP326 = 26;
    sbit  WRP326_bit at FLASH_WRPR3.B26;
    const register unsigned short int WRP327 = 27;
    sbit  WRP327_bit at FLASH_WRPR3.B27;
    const register unsigned short int WRP328 = 28;
    sbit  WRP328_bit at FLASH_WRPR3.B28;
    const register unsigned short int WRP329 = 29;
    sbit  WRP329_bit at FLASH_WRPR3.B29;
    const register unsigned short int WRP330 = 30;
    sbit  WRP330_bit at FLASH_WRPR3.B30;
    const register unsigned short int WRP331 = 31;
    sbit  WRP331_bit at FLASH_WRPR3.B31;

sfr unsigned long   volatile GPIOA_BASE           absolute 0x40020000;
sfr unsigned long   volatile GPIOA_MODER          absolute 0x40020000;
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

sfr unsigned long   volatile GPIOA_OTYPER         absolute 0x40020004;
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

sfr unsigned long   volatile GPIOA_OSPEEDER       absolute 0x40020008;
    const register unsigned short int OSPEEDR150 = 30;
    sbit  OSPEEDR150_bit at GPIOA_OSPEEDER.B30;
    const register unsigned short int OSPEEDR151 = 31;
    sbit  OSPEEDR151_bit at GPIOA_OSPEEDER.B31;
    const register unsigned short int OSPEEDR140 = 28;
    sbit  OSPEEDR140_bit at GPIOA_OSPEEDER.B28;
    const register unsigned short int OSPEEDR141 = 29;
    sbit  OSPEEDR141_bit at GPIOA_OSPEEDER.B29;
    const register unsigned short int OSPEEDR130 = 26;
    sbit  OSPEEDR130_bit at GPIOA_OSPEEDER.B26;
    const register unsigned short int OSPEEDR131 = 27;
    sbit  OSPEEDR131_bit at GPIOA_OSPEEDER.B27;
    const register unsigned short int OSPEEDR120 = 24;
    sbit  OSPEEDR120_bit at GPIOA_OSPEEDER.B24;
    const register unsigned short int OSPEEDR121 = 25;
    sbit  OSPEEDR121_bit at GPIOA_OSPEEDER.B25;
    const register unsigned short int OSPEEDR110 = 22;
    sbit  OSPEEDR110_bit at GPIOA_OSPEEDER.B22;
    const register unsigned short int OSPEEDR111 = 23;
    sbit  OSPEEDR111_bit at GPIOA_OSPEEDER.B23;
    const register unsigned short int OSPEEDR100 = 20;
    sbit  OSPEEDR100_bit at GPIOA_OSPEEDER.B20;
    const register unsigned short int OSPEEDR101 = 21;
    sbit  OSPEEDR101_bit at GPIOA_OSPEEDER.B21;
    const register unsigned short int OSPEEDR90 = 18;
    sbit  OSPEEDR90_bit at GPIOA_OSPEEDER.B18;
    const register unsigned short int OSPEEDR91 = 19;
    sbit  OSPEEDR91_bit at GPIOA_OSPEEDER.B19;
    const register unsigned short int OSPEEDR80 = 16;
    sbit  OSPEEDR80_bit at GPIOA_OSPEEDER.B16;
    const register unsigned short int OSPEEDR81 = 17;
    sbit  OSPEEDR81_bit at GPIOA_OSPEEDER.B17;
    const register unsigned short int OSPEEDR70 = 14;
    sbit  OSPEEDR70_bit at GPIOA_OSPEEDER.B14;
    const register unsigned short int OSPEEDR71 = 15;
    sbit  OSPEEDR71_bit at GPIOA_OSPEEDER.B15;
    const register unsigned short int OSPEEDR60 = 12;
    sbit  OSPEEDR60_bit at GPIOA_OSPEEDER.B12;
    const register unsigned short int OSPEEDR61 = 13;
    sbit  OSPEEDR61_bit at GPIOA_OSPEEDER.B13;
    const register unsigned short int OSPEEDR50 = 10;
    sbit  OSPEEDR50_bit at GPIOA_OSPEEDER.B10;
    const register unsigned short int OSPEEDR51 = 11;
    sbit  OSPEEDR51_bit at GPIOA_OSPEEDER.B11;
    const register unsigned short int OSPEEDR40 = 8;
    sbit  OSPEEDR40_bit at GPIOA_OSPEEDER.B8;
    const register unsigned short int OSPEEDR41 = 9;
    sbit  OSPEEDR41_bit at GPIOA_OSPEEDER.B9;
    const register unsigned short int OSPEEDR30 = 6;
    sbit  OSPEEDR30_bit at GPIOA_OSPEEDER.B6;
    const register unsigned short int OSPEEDR31 = 7;
    sbit  OSPEEDR31_bit at GPIOA_OSPEEDER.B7;
    const register unsigned short int OSPEEDR20 = 4;
    sbit  OSPEEDR20_bit at GPIOA_OSPEEDER.B4;
    const register unsigned short int OSPEEDR21 = 5;
    sbit  OSPEEDR21_bit at GPIOA_OSPEEDER.B5;
    const register unsigned short int OSPEEDR10 = 2;
    sbit  OSPEEDR10_bit at GPIOA_OSPEEDER.B2;
    const register unsigned short int OSPEEDR11 = 3;
    sbit  OSPEEDR11_bit at GPIOA_OSPEEDER.B3;
    const register unsigned short int OSPEEDR00 = 0;
    sbit  OSPEEDR00_bit at GPIOA_OSPEEDER.B0;
    const register unsigned short int OSPEEDR01 = 1;
    sbit  OSPEEDR01_bit at GPIOA_OSPEEDER.B1;

sfr unsigned long   volatile GPIOA_PUPDR          absolute 0x4002000C;
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

sfr unsigned long   volatile GPIOA_IDR            absolute 0x40020010;
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
    sbit  IDR6_GPIOA_IDR_bit at GPIOA_IDR.B6;
    sbit  IDR5_GPIOA_IDR_bit at GPIOA_IDR.B5;
    sbit  IDR4_GPIOA_IDR_bit at GPIOA_IDR.B4;
    sbit  IDR3_GPIOA_IDR_bit at GPIOA_IDR.B3;
    sbit  IDR2_GPIOA_IDR_bit at GPIOA_IDR.B2;
    sbit  IDR1_GPIOA_IDR_bit at GPIOA_IDR.B1;
    sbit  IDR0_GPIOA_IDR_bit at GPIOA_IDR.B0;

sfr unsigned long   volatile GPIOA_ODR            absolute 0x40020014;
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

sfr unsigned long   volatile GPIOA_BSRR           absolute 0x40020018;
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

sfr unsigned long   volatile GPIOA_LCKR           absolute 0x4002001C;
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

sfr unsigned long   volatile GPIOA_AFRL           absolute 0x40020020;
    const register unsigned short int AFRL70 = 28;
    sbit  AFRL70_bit at GPIOA_AFRL.B28;
    const register unsigned short int AFRL71 = 29;
    sbit  AFRL71_bit at GPIOA_AFRL.B29;
    const register unsigned short int AFRL72 = 30;
    sbit  AFRL72_bit at GPIOA_AFRL.B30;
    const register unsigned short int AFRL73 = 31;
    sbit  AFRL73_bit at GPIOA_AFRL.B31;
    const register unsigned short int AFRL60 = 24;
    sbit  AFRL60_bit at GPIOA_AFRL.B24;
    const register unsigned short int AFRL61 = 25;
    sbit  AFRL61_bit at GPIOA_AFRL.B25;
    const register unsigned short int AFRL62 = 26;
    sbit  AFRL62_bit at GPIOA_AFRL.B26;
    const register unsigned short int AFRL63 = 27;
    sbit  AFRL63_bit at GPIOA_AFRL.B27;
    const register unsigned short int AFRL50 = 20;
    sbit  AFRL50_bit at GPIOA_AFRL.B20;
    const register unsigned short int AFRL51 = 21;
    sbit  AFRL51_bit at GPIOA_AFRL.B21;
    const register unsigned short int AFRL52 = 22;
    sbit  AFRL52_bit at GPIOA_AFRL.B22;
    const register unsigned short int AFRL53 = 23;
    sbit  AFRL53_bit at GPIOA_AFRL.B23;
    const register unsigned short int AFRL40 = 16;
    sbit  AFRL40_bit at GPIOA_AFRL.B16;
    const register unsigned short int AFRL41 = 17;
    sbit  AFRL41_bit at GPIOA_AFRL.B17;
    const register unsigned short int AFRL42 = 18;
    sbit  AFRL42_bit at GPIOA_AFRL.B18;
    const register unsigned short int AFRL43 = 19;
    sbit  AFRL43_bit at GPIOA_AFRL.B19;
    const register unsigned short int AFRL30 = 12;
    sbit  AFRL30_bit at GPIOA_AFRL.B12;
    const register unsigned short int AFRL31 = 13;
    sbit  AFRL31_bit at GPIOA_AFRL.B13;
    const register unsigned short int AFRL32 = 14;
    sbit  AFRL32_bit at GPIOA_AFRL.B14;
    const register unsigned short int AFRL33 = 15;
    sbit  AFRL33_bit at GPIOA_AFRL.B15;
    const register unsigned short int AFRL20 = 8;
    sbit  AFRL20_bit at GPIOA_AFRL.B8;
    const register unsigned short int AFRL21 = 9;
    sbit  AFRL21_bit at GPIOA_AFRL.B9;
    const register unsigned short int AFRL22 = 10;
    sbit  AFRL22_bit at GPIOA_AFRL.B10;
    const register unsigned short int AFRL23 = 11;
    sbit  AFRL23_bit at GPIOA_AFRL.B11;
    const register unsigned short int AFRL10 = 4;
    sbit  AFRL10_bit at GPIOA_AFRL.B4;
    const register unsigned short int AFRL11 = 5;
    sbit  AFRL11_bit at GPIOA_AFRL.B5;
    const register unsigned short int AFRL12 = 6;
    sbit  AFRL12_bit at GPIOA_AFRL.B6;
    const register unsigned short int AFRL13 = 7;
    sbit  AFRL13_bit at GPIOA_AFRL.B7;
    const register unsigned short int AFRL00 = 0;
    sbit  AFRL00_bit at GPIOA_AFRL.B0;
    const register unsigned short int AFRL01 = 1;
    sbit  AFRL01_bit at GPIOA_AFRL.B1;
    const register unsigned short int AFRL02 = 2;
    sbit  AFRL02_bit at GPIOA_AFRL.B2;
    const register unsigned short int AFRL03 = 3;
    sbit  AFRL03_bit at GPIOA_AFRL.B3;

sfr unsigned long   volatile GPIOA_AFRH           absolute 0x40020024;
    const register unsigned short int AFRH150 = 28;
    sbit  AFRH150_bit at GPIOA_AFRH.B28;
    const register unsigned short int AFRH151 = 29;
    sbit  AFRH151_bit at GPIOA_AFRH.B29;
    const register unsigned short int AFRH152 = 30;
    sbit  AFRH152_bit at GPIOA_AFRH.B30;
    const register unsigned short int AFRH153 = 31;
    sbit  AFRH153_bit at GPIOA_AFRH.B31;
    const register unsigned short int AFRH140 = 24;
    sbit  AFRH140_bit at GPIOA_AFRH.B24;
    const register unsigned short int AFRH141 = 25;
    sbit  AFRH141_bit at GPIOA_AFRH.B25;
    const register unsigned short int AFRH142 = 26;
    sbit  AFRH142_bit at GPIOA_AFRH.B26;
    const register unsigned short int AFRH143 = 27;
    sbit  AFRH143_bit at GPIOA_AFRH.B27;
    const register unsigned short int AFRH130 = 20;
    sbit  AFRH130_bit at GPIOA_AFRH.B20;
    const register unsigned short int AFRH131 = 21;
    sbit  AFRH131_bit at GPIOA_AFRH.B21;
    const register unsigned short int AFRH132 = 22;
    sbit  AFRH132_bit at GPIOA_AFRH.B22;
    const register unsigned short int AFRH133 = 23;
    sbit  AFRH133_bit at GPIOA_AFRH.B23;
    const register unsigned short int AFRH120 = 16;
    sbit  AFRH120_bit at GPIOA_AFRH.B16;
    const register unsigned short int AFRH121 = 17;
    sbit  AFRH121_bit at GPIOA_AFRH.B17;
    const register unsigned short int AFRH122 = 18;
    sbit  AFRH122_bit at GPIOA_AFRH.B18;
    const register unsigned short int AFRH123 = 19;
    sbit  AFRH123_bit at GPIOA_AFRH.B19;
    const register unsigned short int AFRH110 = 12;
    sbit  AFRH110_bit at GPIOA_AFRH.B12;
    const register unsigned short int AFRH111 = 13;
    sbit  AFRH111_bit at GPIOA_AFRH.B13;
    const register unsigned short int AFRH112 = 14;
    sbit  AFRH112_bit at GPIOA_AFRH.B14;
    const register unsigned short int AFRH113 = 15;
    sbit  AFRH113_bit at GPIOA_AFRH.B15;
    const register unsigned short int AFRH100 = 8;
    sbit  AFRH100_bit at GPIOA_AFRH.B8;
    const register unsigned short int AFRH101 = 9;
    sbit  AFRH101_bit at GPIOA_AFRH.B9;
    const register unsigned short int AFRH102 = 10;
    sbit  AFRH102_bit at GPIOA_AFRH.B10;
    const register unsigned short int AFRH103 = 11;
    sbit  AFRH103_bit at GPIOA_AFRH.B11;
    const register unsigned short int AFRH90 = 4;
    sbit  AFRH90_bit at GPIOA_AFRH.B4;
    const register unsigned short int AFRH91 = 5;
    sbit  AFRH91_bit at GPIOA_AFRH.B5;
    const register unsigned short int AFRH92 = 6;
    sbit  AFRH92_bit at GPIOA_AFRH.B6;
    const register unsigned short int AFRH93 = 7;
    sbit  AFRH93_bit at GPIOA_AFRH.B7;
    const register unsigned short int AFRH80 = 0;
    sbit  AFRH80_bit at GPIOA_AFRH.B0;
    const register unsigned short int AFRH81 = 1;
    sbit  AFRH81_bit at GPIOA_AFRH.B1;
    const register unsigned short int AFRH82 = 2;
    sbit  AFRH82_bit at GPIOA_AFRH.B2;
    const register unsigned short int AFRH83 = 3;
    sbit  AFRH83_bit at GPIOA_AFRH.B3;

sfr unsigned long   volatile GPIOB_BASE           absolute 0x40020400;
sfr unsigned long   volatile GPIOB_MODER          absolute 0x40020400;
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

sfr unsigned long   volatile GPIOB_OTYPER         absolute 0x40020404;
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

sfr unsigned long   volatile GPIOB_OSPEEDER       absolute 0x40020408;
    sbit  OSPEEDR150_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B30;
    sbit  OSPEEDR151_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B31;
    sbit  OSPEEDR140_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B28;
    sbit  OSPEEDR141_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B29;
    sbit  OSPEEDR130_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B26;
    sbit  OSPEEDR131_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B27;
    sbit  OSPEEDR120_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B24;
    sbit  OSPEEDR121_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B25;
    sbit  OSPEEDR110_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B22;
    sbit  OSPEEDR111_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B23;
    sbit  OSPEEDR100_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B20;
    sbit  OSPEEDR101_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B21;
    sbit  OSPEEDR90_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B18;
    sbit  OSPEEDR91_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B19;
    sbit  OSPEEDR80_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B16;
    sbit  OSPEEDR81_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B17;
    sbit  OSPEEDR70_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B14;
    sbit  OSPEEDR71_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B15;
    sbit  OSPEEDR60_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B12;
    sbit  OSPEEDR61_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B13;
    sbit  OSPEEDR50_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B10;
    sbit  OSPEEDR51_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B11;
    sbit  OSPEEDR40_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B8;
    sbit  OSPEEDR41_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B9;
    sbit  OSPEEDR30_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B6;
    sbit  OSPEEDR31_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B7;
    sbit  OSPEEDR20_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B4;
    sbit  OSPEEDR21_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B5;
    sbit  OSPEEDR10_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B2;
    sbit  OSPEEDR11_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B3;
    sbit  OSPEEDR00_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B0;
    sbit  OSPEEDR01_GPIOB_OSPEEDER_bit at GPIOB_OSPEEDER.B1;

sfr unsigned long   volatile GPIOB_PUPDR          absolute 0x4002040C;
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

sfr unsigned long   volatile GPIOB_IDR            absolute 0x40020410;
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

sfr unsigned long   volatile GPIOB_ODR            absolute 0x40020414;
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

sfr unsigned long   volatile GPIOB_BSRR           absolute 0x40020418;
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

sfr unsigned long   volatile GPIOB_LCKR           absolute 0x4002041C;
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

sfr unsigned long   volatile GPIOB_AFRL           absolute 0x40020420;
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

sfr unsigned long   volatile GPIOB_AFRH           absolute 0x40020424;
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

sfr unsigned long   volatile GPIOC_BASE           absolute 0x40020800;
sfr unsigned long   volatile GPIOC_MODER          absolute 0x40020800;
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

sfr unsigned long   volatile GPIOC_OTYPER         absolute 0x40020804;
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

sfr unsigned long   volatile GPIOC_OSPEEDER       absolute 0x40020808;
    sbit  OSPEEDR150_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B30;
    sbit  OSPEEDR151_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B31;
    sbit  OSPEEDR140_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B28;
    sbit  OSPEEDR141_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B29;
    sbit  OSPEEDR130_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B26;
    sbit  OSPEEDR131_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B27;
    sbit  OSPEEDR120_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B24;
    sbit  OSPEEDR121_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B25;
    sbit  OSPEEDR110_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B22;
    sbit  OSPEEDR111_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B23;
    sbit  OSPEEDR100_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B20;
    sbit  OSPEEDR101_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B21;
    sbit  OSPEEDR90_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B18;
    sbit  OSPEEDR91_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B19;
    sbit  OSPEEDR80_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B16;
    sbit  OSPEEDR81_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B17;
    sbit  OSPEEDR70_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B14;
    sbit  OSPEEDR71_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B15;
    sbit  OSPEEDR60_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B12;
    sbit  OSPEEDR61_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B13;
    sbit  OSPEEDR50_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B10;
    sbit  OSPEEDR51_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B11;
    sbit  OSPEEDR40_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B8;
    sbit  OSPEEDR41_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B9;
    sbit  OSPEEDR30_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B6;
    sbit  OSPEEDR31_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B7;
    sbit  OSPEEDR20_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B4;
    sbit  OSPEEDR21_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B5;
    sbit  OSPEEDR10_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B2;
    sbit  OSPEEDR11_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B3;
    sbit  OSPEEDR00_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B0;
    sbit  OSPEEDR01_GPIOC_OSPEEDER_bit at GPIOC_OSPEEDER.B1;

sfr unsigned long   volatile GPIOC_PUPDR          absolute 0x4002080C;
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

sfr unsigned long   volatile GPIOC_IDR            absolute 0x40020810;
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

sfr unsigned long   volatile GPIOC_ODR            absolute 0x40020814;
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

sfr unsigned long   volatile GPIOC_BSRR           absolute 0x40020818;
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

sfr unsigned long   volatile GPIOC_LCKR           absolute 0x4002081C;
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

sfr unsigned long   volatile GPIOC_AFRL           absolute 0x40020820;
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

sfr unsigned long   volatile GPIOC_AFRH           absolute 0x40020824;
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

sfr unsigned long   volatile GPIOD_BASE           absolute 0x40020C00;
sfr unsigned long   volatile GPIOD_MODER          absolute 0x40020C00;
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

sfr unsigned long   volatile GPIOD_OTYPER         absolute 0x40020C04;
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

sfr unsigned long   volatile GPIOD_OSPEEDER       absolute 0x40020C08;
    sbit  OSPEEDR150_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B30;
    sbit  OSPEEDR151_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B31;
    sbit  OSPEEDR140_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B28;
    sbit  OSPEEDR141_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B29;
    sbit  OSPEEDR130_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B26;
    sbit  OSPEEDR131_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B27;
    sbit  OSPEEDR120_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B24;
    sbit  OSPEEDR121_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B25;
    sbit  OSPEEDR110_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B22;
    sbit  OSPEEDR111_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B23;
    sbit  OSPEEDR100_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B20;
    sbit  OSPEEDR101_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B21;
    sbit  OSPEEDR90_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B18;
    sbit  OSPEEDR91_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B19;
    sbit  OSPEEDR80_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B16;
    sbit  OSPEEDR81_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B17;
    sbit  OSPEEDR70_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B14;
    sbit  OSPEEDR71_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B15;
    sbit  OSPEEDR60_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B12;
    sbit  OSPEEDR61_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B13;
    sbit  OSPEEDR50_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B10;
    sbit  OSPEEDR51_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B11;
    sbit  OSPEEDR40_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B8;
    sbit  OSPEEDR41_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B9;
    sbit  OSPEEDR30_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B6;
    sbit  OSPEEDR31_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B7;
    sbit  OSPEEDR20_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B4;
    sbit  OSPEEDR21_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B5;
    sbit  OSPEEDR10_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B2;
    sbit  OSPEEDR11_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B3;
    sbit  OSPEEDR00_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B0;
    sbit  OSPEEDR01_GPIOD_OSPEEDER_bit at GPIOD_OSPEEDER.B1;

sfr unsigned long   volatile GPIOD_PUPDR          absolute 0x40020C0C;
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

sfr unsigned long   volatile GPIOD_IDR            absolute 0x40020C10;
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

sfr unsigned long   volatile GPIOD_ODR            absolute 0x40020C14;
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

sfr unsigned long   volatile GPIOD_BSRR           absolute 0x40020C18;
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

sfr unsigned long   volatile GPIOD_LCKR           absolute 0x40020C1C;
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

sfr unsigned long   volatile GPIOD_AFRL           absolute 0x40020C20;
    sbit  AFRL70_GPIOD_AFRL_bit at GPIOD_AFRL.B28;
    sbit  AFRL71_GPIOD_AFRL_bit at GPIOD_AFRL.B29;
    sbit  AFRL72_GPIOD_AFRL_bit at GPIOD_AFRL.B30;
    sbit  AFRL73_GPIOD_AFRL_bit at GPIOD_AFRL.B31;
    sbit  AFRL60_GPIOD_AFRL_bit at GPIOD_AFRL.B24;
    sbit  AFRL61_GPIOD_AFRL_bit at GPIOD_AFRL.B25;
    sbit  AFRL62_GPIOD_AFRL_bit at GPIOD_AFRL.B26;
    sbit  AFRL63_GPIOD_AFRL_bit at GPIOD_AFRL.B27;
    sbit  AFRL50_GPIOD_AFRL_bit at GPIOD_AFRL.B20;
    sbit  AFRL51_GPIOD_AFRL_bit at GPIOD_AFRL.B21;
    sbit  AFRL52_GPIOD_AFRL_bit at GPIOD_AFRL.B22;
    sbit  AFRL53_GPIOD_AFRL_bit at GPIOD_AFRL.B23;
    sbit  AFRL40_GPIOD_AFRL_bit at GPIOD_AFRL.B16;
    sbit  AFRL41_GPIOD_AFRL_bit at GPIOD_AFRL.B17;
    sbit  AFRL42_GPIOD_AFRL_bit at GPIOD_AFRL.B18;
    sbit  AFRL43_GPIOD_AFRL_bit at GPIOD_AFRL.B19;
    sbit  AFRL30_GPIOD_AFRL_bit at GPIOD_AFRL.B12;
    sbit  AFRL31_GPIOD_AFRL_bit at GPIOD_AFRL.B13;
    sbit  AFRL32_GPIOD_AFRL_bit at GPIOD_AFRL.B14;
    sbit  AFRL33_GPIOD_AFRL_bit at GPIOD_AFRL.B15;
    sbit  AFRL20_GPIOD_AFRL_bit at GPIOD_AFRL.B8;
    sbit  AFRL21_GPIOD_AFRL_bit at GPIOD_AFRL.B9;
    sbit  AFRL22_GPIOD_AFRL_bit at GPIOD_AFRL.B10;
    sbit  AFRL23_GPIOD_AFRL_bit at GPIOD_AFRL.B11;
    sbit  AFRL10_GPIOD_AFRL_bit at GPIOD_AFRL.B4;
    sbit  AFRL11_GPIOD_AFRL_bit at GPIOD_AFRL.B5;
    sbit  AFRL12_GPIOD_AFRL_bit at GPIOD_AFRL.B6;
    sbit  AFRL13_GPIOD_AFRL_bit at GPIOD_AFRL.B7;
    sbit  AFRL00_GPIOD_AFRL_bit at GPIOD_AFRL.B0;
    sbit  AFRL01_GPIOD_AFRL_bit at GPIOD_AFRL.B1;
    sbit  AFRL02_GPIOD_AFRL_bit at GPIOD_AFRL.B2;
    sbit  AFRL03_GPIOD_AFRL_bit at GPIOD_AFRL.B3;

sfr unsigned long   volatile GPIOD_AFRH           absolute 0x40020C24;
    sbit  AFRH150_GPIOD_AFRH_bit at GPIOD_AFRH.B28;
    sbit  AFRH151_GPIOD_AFRH_bit at GPIOD_AFRH.B29;
    sbit  AFRH152_GPIOD_AFRH_bit at GPIOD_AFRH.B30;
    sbit  AFRH153_GPIOD_AFRH_bit at GPIOD_AFRH.B31;
    sbit  AFRH140_GPIOD_AFRH_bit at GPIOD_AFRH.B24;
    sbit  AFRH141_GPIOD_AFRH_bit at GPIOD_AFRH.B25;
    sbit  AFRH142_GPIOD_AFRH_bit at GPIOD_AFRH.B26;
    sbit  AFRH143_GPIOD_AFRH_bit at GPIOD_AFRH.B27;
    sbit  AFRH130_GPIOD_AFRH_bit at GPIOD_AFRH.B20;
    sbit  AFRH131_GPIOD_AFRH_bit at GPIOD_AFRH.B21;
    sbit  AFRH132_GPIOD_AFRH_bit at GPIOD_AFRH.B22;
    sbit  AFRH133_GPIOD_AFRH_bit at GPIOD_AFRH.B23;
    sbit  AFRH120_GPIOD_AFRH_bit at GPIOD_AFRH.B16;
    sbit  AFRH121_GPIOD_AFRH_bit at GPIOD_AFRH.B17;
    sbit  AFRH122_GPIOD_AFRH_bit at GPIOD_AFRH.B18;
    sbit  AFRH123_GPIOD_AFRH_bit at GPIOD_AFRH.B19;
    sbit  AFRH110_GPIOD_AFRH_bit at GPIOD_AFRH.B12;
    sbit  AFRH111_GPIOD_AFRH_bit at GPIOD_AFRH.B13;
    sbit  AFRH112_GPIOD_AFRH_bit at GPIOD_AFRH.B14;
    sbit  AFRH113_GPIOD_AFRH_bit at GPIOD_AFRH.B15;
    sbit  AFRH100_GPIOD_AFRH_bit at GPIOD_AFRH.B8;
    sbit  AFRH101_GPIOD_AFRH_bit at GPIOD_AFRH.B9;
    sbit  AFRH102_GPIOD_AFRH_bit at GPIOD_AFRH.B10;
    sbit  AFRH103_GPIOD_AFRH_bit at GPIOD_AFRH.B11;
    sbit  AFRH90_GPIOD_AFRH_bit at GPIOD_AFRH.B4;
    sbit  AFRH91_GPIOD_AFRH_bit at GPIOD_AFRH.B5;
    sbit  AFRH92_GPIOD_AFRH_bit at GPIOD_AFRH.B6;
    sbit  AFRH93_GPIOD_AFRH_bit at GPIOD_AFRH.B7;
    sbit  AFRH80_GPIOD_AFRH_bit at GPIOD_AFRH.B0;
    sbit  AFRH81_GPIOD_AFRH_bit at GPIOD_AFRH.B1;
    sbit  AFRH82_GPIOD_AFRH_bit at GPIOD_AFRH.B2;
    sbit  AFRH83_GPIOD_AFRH_bit at GPIOD_AFRH.B3;

sfr unsigned long   volatile GPIOE_BASE           absolute 0x40021000;
sfr unsigned long   volatile GPIOE_MODER          absolute 0x40021000;
    sbit  MODER150_GPIOE_MODER_bit at GPIOE_MODER.B30;
    sbit  MODER151_GPIOE_MODER_bit at GPIOE_MODER.B31;
    sbit  MODER140_GPIOE_MODER_bit at GPIOE_MODER.B28;
    sbit  MODER141_GPIOE_MODER_bit at GPIOE_MODER.B29;
    sbit  MODER130_GPIOE_MODER_bit at GPIOE_MODER.B26;
    sbit  MODER131_GPIOE_MODER_bit at GPIOE_MODER.B27;
    sbit  MODER120_GPIOE_MODER_bit at GPIOE_MODER.B24;
    sbit  MODER121_GPIOE_MODER_bit at GPIOE_MODER.B25;
    sbit  MODER110_GPIOE_MODER_bit at GPIOE_MODER.B22;
    sbit  MODER111_GPIOE_MODER_bit at GPIOE_MODER.B23;
    sbit  MODER100_GPIOE_MODER_bit at GPIOE_MODER.B20;
    sbit  MODER101_GPIOE_MODER_bit at GPIOE_MODER.B21;
    sbit  MODER90_GPIOE_MODER_bit at GPIOE_MODER.B18;
    sbit  MODER91_GPIOE_MODER_bit at GPIOE_MODER.B19;
    sbit  MODER80_GPIOE_MODER_bit at GPIOE_MODER.B16;
    sbit  MODER81_GPIOE_MODER_bit at GPIOE_MODER.B17;
    sbit  MODER70_GPIOE_MODER_bit at GPIOE_MODER.B14;
    sbit  MODER71_GPIOE_MODER_bit at GPIOE_MODER.B15;
    sbit  MODER60_GPIOE_MODER_bit at GPIOE_MODER.B12;
    sbit  MODER61_GPIOE_MODER_bit at GPIOE_MODER.B13;
    sbit  MODER50_GPIOE_MODER_bit at GPIOE_MODER.B10;
    sbit  MODER51_GPIOE_MODER_bit at GPIOE_MODER.B11;
    sbit  MODER40_GPIOE_MODER_bit at GPIOE_MODER.B8;
    sbit  MODER41_GPIOE_MODER_bit at GPIOE_MODER.B9;
    sbit  MODER30_GPIOE_MODER_bit at GPIOE_MODER.B6;
    sbit  MODER31_GPIOE_MODER_bit at GPIOE_MODER.B7;
    sbit  MODER20_GPIOE_MODER_bit at GPIOE_MODER.B4;
    sbit  MODER21_GPIOE_MODER_bit at GPIOE_MODER.B5;
    sbit  MODER10_GPIOE_MODER_bit at GPIOE_MODER.B2;
    sbit  MODER11_GPIOE_MODER_bit at GPIOE_MODER.B3;
    sbit  MODER00_GPIOE_MODER_bit at GPIOE_MODER.B0;
    sbit  MODER01_GPIOE_MODER_bit at GPIOE_MODER.B1;

sfr unsigned long   volatile GPIOE_OTYPER         absolute 0x40021004;
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

sfr unsigned long   volatile GPIOE_OSPEEDER       absolute 0x40021008;
    sbit  OSPEEDR150_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B30;
    sbit  OSPEEDR151_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B31;
    sbit  OSPEEDR140_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B28;
    sbit  OSPEEDR141_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B29;
    sbit  OSPEEDR130_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B26;
    sbit  OSPEEDR131_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B27;
    sbit  OSPEEDR120_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B24;
    sbit  OSPEEDR121_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B25;
    sbit  OSPEEDR110_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B22;
    sbit  OSPEEDR111_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B23;
    sbit  OSPEEDR100_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B20;
    sbit  OSPEEDR101_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B21;
    sbit  OSPEEDR90_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B18;
    sbit  OSPEEDR91_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B19;
    sbit  OSPEEDR80_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B16;
    sbit  OSPEEDR81_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B17;
    sbit  OSPEEDR70_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B14;
    sbit  OSPEEDR71_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B15;
    sbit  OSPEEDR60_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B12;
    sbit  OSPEEDR61_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B13;
    sbit  OSPEEDR50_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B10;
    sbit  OSPEEDR51_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B11;
    sbit  OSPEEDR40_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B8;
    sbit  OSPEEDR41_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B9;
    sbit  OSPEEDR30_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B6;
    sbit  OSPEEDR31_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B7;
    sbit  OSPEEDR20_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B4;
    sbit  OSPEEDR21_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B5;
    sbit  OSPEEDR10_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B2;
    sbit  OSPEEDR11_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B3;
    sbit  OSPEEDR00_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B0;
    sbit  OSPEEDR01_GPIOE_OSPEEDER_bit at GPIOE_OSPEEDER.B1;

sfr unsigned long   volatile GPIOE_PUPDR          absolute 0x4002100C;
    sbit  PUPDR150_GPIOE_PUPDR_bit at GPIOE_PUPDR.B30;
    sbit  PUPDR151_GPIOE_PUPDR_bit at GPIOE_PUPDR.B31;
    sbit  PUPDR140_GPIOE_PUPDR_bit at GPIOE_PUPDR.B28;
    sbit  PUPDR141_GPIOE_PUPDR_bit at GPIOE_PUPDR.B29;
    sbit  PUPDR130_GPIOE_PUPDR_bit at GPIOE_PUPDR.B26;
    sbit  PUPDR131_GPIOE_PUPDR_bit at GPIOE_PUPDR.B27;
    sbit  PUPDR120_GPIOE_PUPDR_bit at GPIOE_PUPDR.B24;
    sbit  PUPDR121_GPIOE_PUPDR_bit at GPIOE_PUPDR.B25;
    sbit  PUPDR110_GPIOE_PUPDR_bit at GPIOE_PUPDR.B22;
    sbit  PUPDR111_GPIOE_PUPDR_bit at GPIOE_PUPDR.B23;
    sbit  PUPDR100_GPIOE_PUPDR_bit at GPIOE_PUPDR.B20;
    sbit  PUPDR101_GPIOE_PUPDR_bit at GPIOE_PUPDR.B21;
    sbit  PUPDR90_GPIOE_PUPDR_bit at GPIOE_PUPDR.B18;
    sbit  PUPDR91_GPIOE_PUPDR_bit at GPIOE_PUPDR.B19;
    sbit  PUPDR80_GPIOE_PUPDR_bit at GPIOE_PUPDR.B16;
    sbit  PUPDR81_GPIOE_PUPDR_bit at GPIOE_PUPDR.B17;
    sbit  PUPDR70_GPIOE_PUPDR_bit at GPIOE_PUPDR.B14;
    sbit  PUPDR71_GPIOE_PUPDR_bit at GPIOE_PUPDR.B15;
    sbit  PUPDR60_GPIOE_PUPDR_bit at GPIOE_PUPDR.B12;
    sbit  PUPDR61_GPIOE_PUPDR_bit at GPIOE_PUPDR.B13;
    sbit  PUPDR50_GPIOE_PUPDR_bit at GPIOE_PUPDR.B10;
    sbit  PUPDR51_GPIOE_PUPDR_bit at GPIOE_PUPDR.B11;
    sbit  PUPDR40_GPIOE_PUPDR_bit at GPIOE_PUPDR.B8;
    sbit  PUPDR41_GPIOE_PUPDR_bit at GPIOE_PUPDR.B9;
    sbit  PUPDR30_GPIOE_PUPDR_bit at GPIOE_PUPDR.B6;
    sbit  PUPDR31_GPIOE_PUPDR_bit at GPIOE_PUPDR.B7;
    sbit  PUPDR20_GPIOE_PUPDR_bit at GPIOE_PUPDR.B4;
    sbit  PUPDR21_GPIOE_PUPDR_bit at GPIOE_PUPDR.B5;
    sbit  PUPDR10_GPIOE_PUPDR_bit at GPIOE_PUPDR.B2;
    sbit  PUPDR11_GPIOE_PUPDR_bit at GPIOE_PUPDR.B3;
    sbit  PUPDR00_GPIOE_PUPDR_bit at GPIOE_PUPDR.B0;
    sbit  PUPDR01_GPIOE_PUPDR_bit at GPIOE_PUPDR.B1;

sfr unsigned long   volatile GPIOE_IDR            absolute 0x40021010;
    sbit  IDR15_GPIOE_IDR_bit at GPIOE_IDR.B15;
    sbit  IDR14_GPIOE_IDR_bit at GPIOE_IDR.B14;
    sbit  IDR13_GPIOE_IDR_bit at GPIOE_IDR.B13;
    sbit  IDR12_GPIOE_IDR_bit at GPIOE_IDR.B12;
    sbit  IDR11_GPIOE_IDR_bit at GPIOE_IDR.B11;
    sbit  IDR10_GPIOE_IDR_bit at GPIOE_IDR.B10;
    sbit  IDR9_GPIOE_IDR_bit at GPIOE_IDR.B9;
    sbit  IDR8_GPIOE_IDR_bit at GPIOE_IDR.B8;
    sbit  IDR7_GPIOE_IDR_bit at GPIOE_IDR.B7;
    sbit  IDR6_GPIOE_IDR_bit at GPIOE_IDR.B6;
    sbit  IDR5_GPIOE_IDR_bit at GPIOE_IDR.B5;
    sbit  IDR4_GPIOE_IDR_bit at GPIOE_IDR.B4;
    sbit  IDR3_GPIOE_IDR_bit at GPIOE_IDR.B3;
    sbit  IDR2_GPIOE_IDR_bit at GPIOE_IDR.B2;
    sbit  IDR1_GPIOE_IDR_bit at GPIOE_IDR.B1;
    sbit  IDR0_GPIOE_IDR_bit at GPIOE_IDR.B0;

sfr unsigned long   volatile GPIOE_ODR            absolute 0x40021014;
    sbit  ODR15_GPIOE_ODR_bit at GPIOE_ODR.B15;
    sbit  ODR14_GPIOE_ODR_bit at GPIOE_ODR.B14;
    sbit  ODR13_GPIOE_ODR_bit at GPIOE_ODR.B13;
    sbit  ODR12_GPIOE_ODR_bit at GPIOE_ODR.B12;
    sbit  ODR11_GPIOE_ODR_bit at GPIOE_ODR.B11;
    sbit  ODR10_GPIOE_ODR_bit at GPIOE_ODR.B10;
    sbit  ODR9_GPIOE_ODR_bit at GPIOE_ODR.B9;
    sbit  ODR8_GPIOE_ODR_bit at GPIOE_ODR.B8;
    sbit  ODR7_GPIOE_ODR_bit at GPIOE_ODR.B7;
    sbit  ODR6_GPIOE_ODR_bit at GPIOE_ODR.B6;
    sbit  ODR5_GPIOE_ODR_bit at GPIOE_ODR.B5;
    sbit  ODR4_GPIOE_ODR_bit at GPIOE_ODR.B4;
    sbit  ODR3_GPIOE_ODR_bit at GPIOE_ODR.B3;
    sbit  ODR2_GPIOE_ODR_bit at GPIOE_ODR.B2;
    sbit  ODR1_GPIOE_ODR_bit at GPIOE_ODR.B1;
    sbit  ODR0_GPIOE_ODR_bit at GPIOE_ODR.B0;

sfr unsigned long   volatile GPIOE_BSRR           absolute 0x40021018;
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

sfr unsigned long   volatile GPIOE_LCKR           absolute 0x4002101C;
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

sfr unsigned long   volatile GPIOE_AFRL           absolute 0x40021020;
    sbit  AFRL70_GPIOE_AFRL_bit at GPIOE_AFRL.B28;
    sbit  AFRL71_GPIOE_AFRL_bit at GPIOE_AFRL.B29;
    sbit  AFRL72_GPIOE_AFRL_bit at GPIOE_AFRL.B30;
    sbit  AFRL73_GPIOE_AFRL_bit at GPIOE_AFRL.B31;
    sbit  AFRL60_GPIOE_AFRL_bit at GPIOE_AFRL.B24;
    sbit  AFRL61_GPIOE_AFRL_bit at GPIOE_AFRL.B25;
    sbit  AFRL62_GPIOE_AFRL_bit at GPIOE_AFRL.B26;
    sbit  AFRL63_GPIOE_AFRL_bit at GPIOE_AFRL.B27;
    sbit  AFRL50_GPIOE_AFRL_bit at GPIOE_AFRL.B20;
    sbit  AFRL51_GPIOE_AFRL_bit at GPIOE_AFRL.B21;
    sbit  AFRL52_GPIOE_AFRL_bit at GPIOE_AFRL.B22;
    sbit  AFRL53_GPIOE_AFRL_bit at GPIOE_AFRL.B23;
    sbit  AFRL40_GPIOE_AFRL_bit at GPIOE_AFRL.B16;
    sbit  AFRL41_GPIOE_AFRL_bit at GPIOE_AFRL.B17;
    sbit  AFRL42_GPIOE_AFRL_bit at GPIOE_AFRL.B18;
    sbit  AFRL43_GPIOE_AFRL_bit at GPIOE_AFRL.B19;
    sbit  AFRL30_GPIOE_AFRL_bit at GPIOE_AFRL.B12;
    sbit  AFRL31_GPIOE_AFRL_bit at GPIOE_AFRL.B13;
    sbit  AFRL32_GPIOE_AFRL_bit at GPIOE_AFRL.B14;
    sbit  AFRL33_GPIOE_AFRL_bit at GPIOE_AFRL.B15;
    sbit  AFRL20_GPIOE_AFRL_bit at GPIOE_AFRL.B8;
    sbit  AFRL21_GPIOE_AFRL_bit at GPIOE_AFRL.B9;
    sbit  AFRL22_GPIOE_AFRL_bit at GPIOE_AFRL.B10;
    sbit  AFRL23_GPIOE_AFRL_bit at GPIOE_AFRL.B11;
    sbit  AFRL10_GPIOE_AFRL_bit at GPIOE_AFRL.B4;
    sbit  AFRL11_GPIOE_AFRL_bit at GPIOE_AFRL.B5;
    sbit  AFRL12_GPIOE_AFRL_bit at GPIOE_AFRL.B6;
    sbit  AFRL13_GPIOE_AFRL_bit at GPIOE_AFRL.B7;
    sbit  AFRL00_GPIOE_AFRL_bit at GPIOE_AFRL.B0;
    sbit  AFRL01_GPIOE_AFRL_bit at GPIOE_AFRL.B1;
    sbit  AFRL02_GPIOE_AFRL_bit at GPIOE_AFRL.B2;
    sbit  AFRL03_GPIOE_AFRL_bit at GPIOE_AFRL.B3;

sfr unsigned long   volatile GPIOE_AFRH           absolute 0x40021024;
    sbit  AFRH150_GPIOE_AFRH_bit at GPIOE_AFRH.B28;
    sbit  AFRH151_GPIOE_AFRH_bit at GPIOE_AFRH.B29;
    sbit  AFRH152_GPIOE_AFRH_bit at GPIOE_AFRH.B30;
    sbit  AFRH153_GPIOE_AFRH_bit at GPIOE_AFRH.B31;
    sbit  AFRH140_GPIOE_AFRH_bit at GPIOE_AFRH.B24;
    sbit  AFRH141_GPIOE_AFRH_bit at GPIOE_AFRH.B25;
    sbit  AFRH142_GPIOE_AFRH_bit at GPIOE_AFRH.B26;
    sbit  AFRH143_GPIOE_AFRH_bit at GPIOE_AFRH.B27;
    sbit  AFRH130_GPIOE_AFRH_bit at GPIOE_AFRH.B20;
    sbit  AFRH131_GPIOE_AFRH_bit at GPIOE_AFRH.B21;
    sbit  AFRH132_GPIOE_AFRH_bit at GPIOE_AFRH.B22;
    sbit  AFRH133_GPIOE_AFRH_bit at GPIOE_AFRH.B23;
    sbit  AFRH120_GPIOE_AFRH_bit at GPIOE_AFRH.B16;
    sbit  AFRH121_GPIOE_AFRH_bit at GPIOE_AFRH.B17;
    sbit  AFRH122_GPIOE_AFRH_bit at GPIOE_AFRH.B18;
    sbit  AFRH123_GPIOE_AFRH_bit at GPIOE_AFRH.B19;
    sbit  AFRH110_GPIOE_AFRH_bit at GPIOE_AFRH.B12;
    sbit  AFRH111_GPIOE_AFRH_bit at GPIOE_AFRH.B13;
    sbit  AFRH112_GPIOE_AFRH_bit at GPIOE_AFRH.B14;
    sbit  AFRH113_GPIOE_AFRH_bit at GPIOE_AFRH.B15;
    sbit  AFRH100_GPIOE_AFRH_bit at GPIOE_AFRH.B8;
    sbit  AFRH101_GPIOE_AFRH_bit at GPIOE_AFRH.B9;
    sbit  AFRH102_GPIOE_AFRH_bit at GPIOE_AFRH.B10;
    sbit  AFRH103_GPIOE_AFRH_bit at GPIOE_AFRH.B11;
    sbit  AFRH90_GPIOE_AFRH_bit at GPIOE_AFRH.B4;
    sbit  AFRH91_GPIOE_AFRH_bit at GPIOE_AFRH.B5;
    sbit  AFRH92_GPIOE_AFRH_bit at GPIOE_AFRH.B6;
    sbit  AFRH93_GPIOE_AFRH_bit at GPIOE_AFRH.B7;
    sbit  AFRH80_GPIOE_AFRH_bit at GPIOE_AFRH.B0;
    sbit  AFRH81_GPIOE_AFRH_bit at GPIOE_AFRH.B1;
    sbit  AFRH82_GPIOE_AFRH_bit at GPIOE_AFRH.B2;
    sbit  AFRH83_GPIOE_AFRH_bit at GPIOE_AFRH.B3;

sfr unsigned long   volatile GPIOF_BASE           absolute 0x40021800;
sfr unsigned long   volatile GPIOF_MODER          absolute 0x40021800;
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

sfr unsigned long   volatile GPIOF_OTYPER         absolute 0x40021804;
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

sfr unsigned long   volatile GPIOF_OSPEEDER       absolute 0x40021808;
    sbit  OSPEEDR150_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B30;
    sbit  OSPEEDR151_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B31;
    sbit  OSPEEDR140_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B28;
    sbit  OSPEEDR141_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B29;
    sbit  OSPEEDR130_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B26;
    sbit  OSPEEDR131_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B27;
    sbit  OSPEEDR120_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B24;
    sbit  OSPEEDR121_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B25;
    sbit  OSPEEDR110_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B22;
    sbit  OSPEEDR111_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B23;
    sbit  OSPEEDR100_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B20;
    sbit  OSPEEDR101_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B21;
    sbit  OSPEEDR90_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B18;
    sbit  OSPEEDR91_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B19;
    sbit  OSPEEDR80_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B16;
    sbit  OSPEEDR81_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B17;
    sbit  OSPEEDR70_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B14;
    sbit  OSPEEDR71_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B15;
    sbit  OSPEEDR60_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B12;
    sbit  OSPEEDR61_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B13;
    sbit  OSPEEDR50_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B10;
    sbit  OSPEEDR51_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B11;
    sbit  OSPEEDR40_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B8;
    sbit  OSPEEDR41_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B9;
    sbit  OSPEEDR30_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B6;
    sbit  OSPEEDR31_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B7;
    sbit  OSPEEDR20_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B4;
    sbit  OSPEEDR21_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B5;
    sbit  OSPEEDR10_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B2;
    sbit  OSPEEDR11_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B3;
    sbit  OSPEEDR00_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B0;
    sbit  OSPEEDR01_GPIOF_OSPEEDER_bit at GPIOF_OSPEEDER.B1;

sfr unsigned long   volatile GPIOF_PUPDR          absolute 0x4002180C;
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

sfr unsigned long   volatile GPIOF_IDR            absolute 0x40021810;
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

sfr unsigned long   volatile GPIOF_ODR            absolute 0x40021814;
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

sfr unsigned long   volatile GPIOF_BSRR           absolute 0x40021818;
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

sfr unsigned long   volatile GPIOF_LCKR           absolute 0x4002181C;
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

sfr unsigned long   volatile GPIOF_AFRL           absolute 0x40021820;
    sbit  AFRL70_GPIOF_AFRL_bit at GPIOF_AFRL.B28;
    sbit  AFRL71_GPIOF_AFRL_bit at GPIOF_AFRL.B29;
    sbit  AFRL72_GPIOF_AFRL_bit at GPIOF_AFRL.B30;
    sbit  AFRL73_GPIOF_AFRL_bit at GPIOF_AFRL.B31;
    sbit  AFRL60_GPIOF_AFRL_bit at GPIOF_AFRL.B24;
    sbit  AFRL61_GPIOF_AFRL_bit at GPIOF_AFRL.B25;
    sbit  AFRL62_GPIOF_AFRL_bit at GPIOF_AFRL.B26;
    sbit  AFRL63_GPIOF_AFRL_bit at GPIOF_AFRL.B27;
    sbit  AFRL50_GPIOF_AFRL_bit at GPIOF_AFRL.B20;
    sbit  AFRL51_GPIOF_AFRL_bit at GPIOF_AFRL.B21;
    sbit  AFRL52_GPIOF_AFRL_bit at GPIOF_AFRL.B22;
    sbit  AFRL53_GPIOF_AFRL_bit at GPIOF_AFRL.B23;
    sbit  AFRL40_GPIOF_AFRL_bit at GPIOF_AFRL.B16;
    sbit  AFRL41_GPIOF_AFRL_bit at GPIOF_AFRL.B17;
    sbit  AFRL42_GPIOF_AFRL_bit at GPIOF_AFRL.B18;
    sbit  AFRL43_GPIOF_AFRL_bit at GPIOF_AFRL.B19;
    sbit  AFRL30_GPIOF_AFRL_bit at GPIOF_AFRL.B12;
    sbit  AFRL31_GPIOF_AFRL_bit at GPIOF_AFRL.B13;
    sbit  AFRL32_GPIOF_AFRL_bit at GPIOF_AFRL.B14;
    sbit  AFRL33_GPIOF_AFRL_bit at GPIOF_AFRL.B15;
    sbit  AFRL20_GPIOF_AFRL_bit at GPIOF_AFRL.B8;
    sbit  AFRL21_GPIOF_AFRL_bit at GPIOF_AFRL.B9;
    sbit  AFRL22_GPIOF_AFRL_bit at GPIOF_AFRL.B10;
    sbit  AFRL23_GPIOF_AFRL_bit at GPIOF_AFRL.B11;
    sbit  AFRL10_GPIOF_AFRL_bit at GPIOF_AFRL.B4;
    sbit  AFRL11_GPIOF_AFRL_bit at GPIOF_AFRL.B5;
    sbit  AFRL12_GPIOF_AFRL_bit at GPIOF_AFRL.B6;
    sbit  AFRL13_GPIOF_AFRL_bit at GPIOF_AFRL.B7;
    sbit  AFRL00_GPIOF_AFRL_bit at GPIOF_AFRL.B0;
    sbit  AFRL01_GPIOF_AFRL_bit at GPIOF_AFRL.B1;
    sbit  AFRL02_GPIOF_AFRL_bit at GPIOF_AFRL.B2;
    sbit  AFRL03_GPIOF_AFRL_bit at GPIOF_AFRL.B3;

sfr unsigned long   volatile GPIOF_AFRH           absolute 0x40021824;
    sbit  AFRH150_GPIOF_AFRH_bit at GPIOF_AFRH.B28;
    sbit  AFRH151_GPIOF_AFRH_bit at GPIOF_AFRH.B29;
    sbit  AFRH152_GPIOF_AFRH_bit at GPIOF_AFRH.B30;
    sbit  AFRH153_GPIOF_AFRH_bit at GPIOF_AFRH.B31;
    sbit  AFRH140_GPIOF_AFRH_bit at GPIOF_AFRH.B24;
    sbit  AFRH141_GPIOF_AFRH_bit at GPIOF_AFRH.B25;
    sbit  AFRH142_GPIOF_AFRH_bit at GPIOF_AFRH.B26;
    sbit  AFRH143_GPIOF_AFRH_bit at GPIOF_AFRH.B27;
    sbit  AFRH130_GPIOF_AFRH_bit at GPIOF_AFRH.B20;
    sbit  AFRH131_GPIOF_AFRH_bit at GPIOF_AFRH.B21;
    sbit  AFRH132_GPIOF_AFRH_bit at GPIOF_AFRH.B22;
    sbit  AFRH133_GPIOF_AFRH_bit at GPIOF_AFRH.B23;
    sbit  AFRH120_GPIOF_AFRH_bit at GPIOF_AFRH.B16;
    sbit  AFRH121_GPIOF_AFRH_bit at GPIOF_AFRH.B17;
    sbit  AFRH122_GPIOF_AFRH_bit at GPIOF_AFRH.B18;
    sbit  AFRH123_GPIOF_AFRH_bit at GPIOF_AFRH.B19;
    sbit  AFRH110_GPIOF_AFRH_bit at GPIOF_AFRH.B12;
    sbit  AFRH111_GPIOF_AFRH_bit at GPIOF_AFRH.B13;
    sbit  AFRH112_GPIOF_AFRH_bit at GPIOF_AFRH.B14;
    sbit  AFRH113_GPIOF_AFRH_bit at GPIOF_AFRH.B15;
    sbit  AFRH100_GPIOF_AFRH_bit at GPIOF_AFRH.B8;
    sbit  AFRH101_GPIOF_AFRH_bit at GPIOF_AFRH.B9;
    sbit  AFRH102_GPIOF_AFRH_bit at GPIOF_AFRH.B10;
    sbit  AFRH103_GPIOF_AFRH_bit at GPIOF_AFRH.B11;
    sbit  AFRH90_GPIOF_AFRH_bit at GPIOF_AFRH.B4;
    sbit  AFRH91_GPIOF_AFRH_bit at GPIOF_AFRH.B5;
    sbit  AFRH92_GPIOF_AFRH_bit at GPIOF_AFRH.B6;
    sbit  AFRH93_GPIOF_AFRH_bit at GPIOF_AFRH.B7;
    sbit  AFRH80_GPIOF_AFRH_bit at GPIOF_AFRH.B0;
    sbit  AFRH81_GPIOF_AFRH_bit at GPIOF_AFRH.B1;
    sbit  AFRH82_GPIOF_AFRH_bit at GPIOF_AFRH.B2;
    sbit  AFRH83_GPIOF_AFRH_bit at GPIOF_AFRH.B3;

sfr unsigned long   volatile GPIOG_BASE           absolute 0x40021C00;
sfr unsigned long   volatile GPIOG_MODER          absolute 0x40021C00;
    sbit  MODER150_GPIOG_MODER_bit at GPIOG_MODER.B30;
    sbit  MODER151_GPIOG_MODER_bit at GPIOG_MODER.B31;
    sbit  MODER140_GPIOG_MODER_bit at GPIOG_MODER.B28;
    sbit  MODER141_GPIOG_MODER_bit at GPIOG_MODER.B29;
    sbit  MODER130_GPIOG_MODER_bit at GPIOG_MODER.B26;
    sbit  MODER131_GPIOG_MODER_bit at GPIOG_MODER.B27;
    sbit  MODER120_GPIOG_MODER_bit at GPIOG_MODER.B24;
    sbit  MODER121_GPIOG_MODER_bit at GPIOG_MODER.B25;
    sbit  MODER110_GPIOG_MODER_bit at GPIOG_MODER.B22;
    sbit  MODER111_GPIOG_MODER_bit at GPIOG_MODER.B23;
    sbit  MODER100_GPIOG_MODER_bit at GPIOG_MODER.B20;
    sbit  MODER101_GPIOG_MODER_bit at GPIOG_MODER.B21;
    sbit  MODER90_GPIOG_MODER_bit at GPIOG_MODER.B18;
    sbit  MODER91_GPIOG_MODER_bit at GPIOG_MODER.B19;
    sbit  MODER80_GPIOG_MODER_bit at GPIOG_MODER.B16;
    sbit  MODER81_GPIOG_MODER_bit at GPIOG_MODER.B17;
    sbit  MODER70_GPIOG_MODER_bit at GPIOG_MODER.B14;
    sbit  MODER71_GPIOG_MODER_bit at GPIOG_MODER.B15;
    sbit  MODER60_GPIOG_MODER_bit at GPIOG_MODER.B12;
    sbit  MODER61_GPIOG_MODER_bit at GPIOG_MODER.B13;
    sbit  MODER50_GPIOG_MODER_bit at GPIOG_MODER.B10;
    sbit  MODER51_GPIOG_MODER_bit at GPIOG_MODER.B11;
    sbit  MODER40_GPIOG_MODER_bit at GPIOG_MODER.B8;
    sbit  MODER41_GPIOG_MODER_bit at GPIOG_MODER.B9;
    sbit  MODER30_GPIOG_MODER_bit at GPIOG_MODER.B6;
    sbit  MODER31_GPIOG_MODER_bit at GPIOG_MODER.B7;
    sbit  MODER20_GPIOG_MODER_bit at GPIOG_MODER.B4;
    sbit  MODER21_GPIOG_MODER_bit at GPIOG_MODER.B5;
    sbit  MODER10_GPIOG_MODER_bit at GPIOG_MODER.B2;
    sbit  MODER11_GPIOG_MODER_bit at GPIOG_MODER.B3;
    sbit  MODER00_GPIOG_MODER_bit at GPIOG_MODER.B0;
    sbit  MODER01_GPIOG_MODER_bit at GPIOG_MODER.B1;

sfr unsigned long   volatile GPIOG_OTYPER         absolute 0x40021C04;
    sbit  OT15_GPIOG_OTYPER_bit at GPIOG_OTYPER.B15;
    sbit  OT14_GPIOG_OTYPER_bit at GPIOG_OTYPER.B14;
    sbit  OT13_GPIOG_OTYPER_bit at GPIOG_OTYPER.B13;
    sbit  OT12_GPIOG_OTYPER_bit at GPIOG_OTYPER.B12;
    sbit  OT11_GPIOG_OTYPER_bit at GPIOG_OTYPER.B11;
    sbit  OT10_GPIOG_OTYPER_bit at GPIOG_OTYPER.B10;
    sbit  OT9_GPIOG_OTYPER_bit at GPIOG_OTYPER.B9;
    sbit  OT8_GPIOG_OTYPER_bit at GPIOG_OTYPER.B8;
    sbit  OT7_GPIOG_OTYPER_bit at GPIOG_OTYPER.B7;
    sbit  OT6_GPIOG_OTYPER_bit at GPIOG_OTYPER.B6;
    sbit  OT5_GPIOG_OTYPER_bit at GPIOG_OTYPER.B5;
    sbit  OT4_GPIOG_OTYPER_bit at GPIOG_OTYPER.B4;
    sbit  OT3_GPIOG_OTYPER_bit at GPIOG_OTYPER.B3;
    sbit  OT2_GPIOG_OTYPER_bit at GPIOG_OTYPER.B2;
    sbit  OT1_GPIOG_OTYPER_bit at GPIOG_OTYPER.B1;
    sbit  OT0_GPIOG_OTYPER_bit at GPIOG_OTYPER.B0;

sfr unsigned long   volatile GPIOG_OSPEEDER       absolute 0x40021C08;
    sbit  OSPEEDR150_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B30;
    sbit  OSPEEDR151_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B31;
    sbit  OSPEEDR140_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B28;
    sbit  OSPEEDR141_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B29;
    sbit  OSPEEDR130_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B26;
    sbit  OSPEEDR131_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B27;
    sbit  OSPEEDR120_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B24;
    sbit  OSPEEDR121_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B25;
    sbit  OSPEEDR110_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B22;
    sbit  OSPEEDR111_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B23;
    sbit  OSPEEDR100_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B20;
    sbit  OSPEEDR101_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B21;
    sbit  OSPEEDR90_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B18;
    sbit  OSPEEDR91_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B19;
    sbit  OSPEEDR80_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B16;
    sbit  OSPEEDR81_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B17;
    sbit  OSPEEDR70_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B14;
    sbit  OSPEEDR71_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B15;
    sbit  OSPEEDR60_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B12;
    sbit  OSPEEDR61_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B13;
    sbit  OSPEEDR50_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B10;
    sbit  OSPEEDR51_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B11;
    sbit  OSPEEDR40_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B8;
    sbit  OSPEEDR41_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B9;
    sbit  OSPEEDR30_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B6;
    sbit  OSPEEDR31_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B7;
    sbit  OSPEEDR20_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B4;
    sbit  OSPEEDR21_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B5;
    sbit  OSPEEDR10_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B2;
    sbit  OSPEEDR11_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B3;
    sbit  OSPEEDR00_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B0;
    sbit  OSPEEDR01_GPIOG_OSPEEDER_bit at GPIOG_OSPEEDER.B1;

sfr unsigned long   volatile GPIOG_PUPDR          absolute 0x40021C0C;
    sbit  PUPDR150_GPIOG_PUPDR_bit at GPIOG_PUPDR.B30;
    sbit  PUPDR151_GPIOG_PUPDR_bit at GPIOG_PUPDR.B31;
    sbit  PUPDR140_GPIOG_PUPDR_bit at GPIOG_PUPDR.B28;
    sbit  PUPDR141_GPIOG_PUPDR_bit at GPIOG_PUPDR.B29;
    sbit  PUPDR130_GPIOG_PUPDR_bit at GPIOG_PUPDR.B26;
    sbit  PUPDR131_GPIOG_PUPDR_bit at GPIOG_PUPDR.B27;
    sbit  PUPDR120_GPIOG_PUPDR_bit at GPIOG_PUPDR.B24;
    sbit  PUPDR121_GPIOG_PUPDR_bit at GPIOG_PUPDR.B25;
    sbit  PUPDR110_GPIOG_PUPDR_bit at GPIOG_PUPDR.B22;
    sbit  PUPDR111_GPIOG_PUPDR_bit at GPIOG_PUPDR.B23;
    sbit  PUPDR100_GPIOG_PUPDR_bit at GPIOG_PUPDR.B20;
    sbit  PUPDR101_GPIOG_PUPDR_bit at GPIOG_PUPDR.B21;
    sbit  PUPDR90_GPIOG_PUPDR_bit at GPIOG_PUPDR.B18;
    sbit  PUPDR91_GPIOG_PUPDR_bit at GPIOG_PUPDR.B19;
    sbit  PUPDR80_GPIOG_PUPDR_bit at GPIOG_PUPDR.B16;
    sbit  PUPDR81_GPIOG_PUPDR_bit at GPIOG_PUPDR.B17;
    sbit  PUPDR70_GPIOG_PUPDR_bit at GPIOG_PUPDR.B14;
    sbit  PUPDR71_GPIOG_PUPDR_bit at GPIOG_PUPDR.B15;
    sbit  PUPDR60_GPIOG_PUPDR_bit at GPIOG_PUPDR.B12;
    sbit  PUPDR61_GPIOG_PUPDR_bit at GPIOG_PUPDR.B13;
    sbit  PUPDR50_GPIOG_PUPDR_bit at GPIOG_PUPDR.B10;
    sbit  PUPDR51_GPIOG_PUPDR_bit at GPIOG_PUPDR.B11;
    sbit  PUPDR40_GPIOG_PUPDR_bit at GPIOG_PUPDR.B8;
    sbit  PUPDR41_GPIOG_PUPDR_bit at GPIOG_PUPDR.B9;
    sbit  PUPDR30_GPIOG_PUPDR_bit at GPIOG_PUPDR.B6;
    sbit  PUPDR31_GPIOG_PUPDR_bit at GPIOG_PUPDR.B7;
    sbit  PUPDR20_GPIOG_PUPDR_bit at GPIOG_PUPDR.B4;
    sbit  PUPDR21_GPIOG_PUPDR_bit at GPIOG_PUPDR.B5;
    sbit  PUPDR10_GPIOG_PUPDR_bit at GPIOG_PUPDR.B2;
    sbit  PUPDR11_GPIOG_PUPDR_bit at GPIOG_PUPDR.B3;
    sbit  PUPDR00_GPIOG_PUPDR_bit at GPIOG_PUPDR.B0;
    sbit  PUPDR01_GPIOG_PUPDR_bit at GPIOG_PUPDR.B1;

sfr unsigned long   volatile GPIOG_IDR            absolute 0x40021C10;
    sbit  IDR15_GPIOG_IDR_bit at GPIOG_IDR.B15;
    sbit  IDR14_GPIOG_IDR_bit at GPIOG_IDR.B14;
    sbit  IDR13_GPIOG_IDR_bit at GPIOG_IDR.B13;
    sbit  IDR12_GPIOG_IDR_bit at GPIOG_IDR.B12;
    sbit  IDR11_GPIOG_IDR_bit at GPIOG_IDR.B11;
    sbit  IDR10_GPIOG_IDR_bit at GPIOG_IDR.B10;
    sbit  IDR9_GPIOG_IDR_bit at GPIOG_IDR.B9;
    sbit  IDR8_GPIOG_IDR_bit at GPIOG_IDR.B8;
    sbit  IDR7_GPIOG_IDR_bit at GPIOG_IDR.B7;
    sbit  IDR6_GPIOG_IDR_bit at GPIOG_IDR.B6;
    sbit  IDR5_GPIOG_IDR_bit at GPIOG_IDR.B5;
    sbit  IDR4_GPIOG_IDR_bit at GPIOG_IDR.B4;
    sbit  IDR3_GPIOG_IDR_bit at GPIOG_IDR.B3;
    sbit  IDR2_GPIOG_IDR_bit at GPIOG_IDR.B2;
    sbit  IDR1_GPIOG_IDR_bit at GPIOG_IDR.B1;
    sbit  IDR0_GPIOG_IDR_bit at GPIOG_IDR.B0;

sfr unsigned long   volatile GPIOG_ODR            absolute 0x40021C14;
    sbit  ODR15_GPIOG_ODR_bit at GPIOG_ODR.B15;
    sbit  ODR14_GPIOG_ODR_bit at GPIOG_ODR.B14;
    sbit  ODR13_GPIOG_ODR_bit at GPIOG_ODR.B13;
    sbit  ODR12_GPIOG_ODR_bit at GPIOG_ODR.B12;
    sbit  ODR11_GPIOG_ODR_bit at GPIOG_ODR.B11;
    sbit  ODR10_GPIOG_ODR_bit at GPIOG_ODR.B10;
    sbit  ODR9_GPIOG_ODR_bit at GPIOG_ODR.B9;
    sbit  ODR8_GPIOG_ODR_bit at GPIOG_ODR.B8;
    sbit  ODR7_GPIOG_ODR_bit at GPIOG_ODR.B7;
    sbit  ODR6_GPIOG_ODR_bit at GPIOG_ODR.B6;
    sbit  ODR5_GPIOG_ODR_bit at GPIOG_ODR.B5;
    sbit  ODR4_GPIOG_ODR_bit at GPIOG_ODR.B4;
    sbit  ODR3_GPIOG_ODR_bit at GPIOG_ODR.B3;
    sbit  ODR2_GPIOG_ODR_bit at GPIOG_ODR.B2;
    sbit  ODR1_GPIOG_ODR_bit at GPIOG_ODR.B1;
    sbit  ODR0_GPIOG_ODR_bit at GPIOG_ODR.B0;

sfr unsigned long   volatile GPIOG_BSRR           absolute 0x40021C18;
    sbit  BR15_GPIOG_BSRR_bit at GPIOG_BSRR.B31;
    sbit  BR14_GPIOG_BSRR_bit at GPIOG_BSRR.B30;
    sbit  BR13_GPIOG_BSRR_bit at GPIOG_BSRR.B29;
    sbit  BR12_GPIOG_BSRR_bit at GPIOG_BSRR.B28;
    sbit  BR11_GPIOG_BSRR_bit at GPIOG_BSRR.B27;
    sbit  BR10_GPIOG_BSRR_bit at GPIOG_BSRR.B26;
    sbit  BR9_GPIOG_BSRR_bit at GPIOG_BSRR.B25;
    sbit  BR8_GPIOG_BSRR_bit at GPIOG_BSRR.B24;
    sbit  BR7_GPIOG_BSRR_bit at GPIOG_BSRR.B23;
    sbit  BR6_GPIOG_BSRR_bit at GPIOG_BSRR.B22;
    sbit  BR5_GPIOG_BSRR_bit at GPIOG_BSRR.B21;
    sbit  BR4_GPIOG_BSRR_bit at GPIOG_BSRR.B20;
    sbit  BR3_GPIOG_BSRR_bit at GPIOG_BSRR.B19;
    sbit  BR2_GPIOG_BSRR_bit at GPIOG_BSRR.B18;
    sbit  BR1_GPIOG_BSRR_bit at GPIOG_BSRR.B17;
    sbit  BR0_GPIOG_BSRR_bit at GPIOG_BSRR.B16;
    sbit  BS15_GPIOG_BSRR_bit at GPIOG_BSRR.B15;
    sbit  BS14_GPIOG_BSRR_bit at GPIOG_BSRR.B14;
    sbit  BS13_GPIOG_BSRR_bit at GPIOG_BSRR.B13;
    sbit  BS12_GPIOG_BSRR_bit at GPIOG_BSRR.B12;
    sbit  BS11_GPIOG_BSRR_bit at GPIOG_BSRR.B11;
    sbit  BS10_GPIOG_BSRR_bit at GPIOG_BSRR.B10;
    sbit  BS9_GPIOG_BSRR_bit at GPIOG_BSRR.B9;
    sbit  BS8_GPIOG_BSRR_bit at GPIOG_BSRR.B8;
    sbit  BS7_GPIOG_BSRR_bit at GPIOG_BSRR.B7;
    sbit  BS6_GPIOG_BSRR_bit at GPIOG_BSRR.B6;
    sbit  BS5_GPIOG_BSRR_bit at GPIOG_BSRR.B5;
    sbit  BS4_GPIOG_BSRR_bit at GPIOG_BSRR.B4;
    sbit  BS3_GPIOG_BSRR_bit at GPIOG_BSRR.B3;
    sbit  BS2_GPIOG_BSRR_bit at GPIOG_BSRR.B2;
    sbit  BS1_GPIOG_BSRR_bit at GPIOG_BSRR.B1;
    sbit  BS0_GPIOG_BSRR_bit at GPIOG_BSRR.B0;

sfr unsigned long   volatile GPIOG_LCKR           absolute 0x40021C1C;
    sbit  LCKK_GPIOG_LCKR_bit at GPIOG_LCKR.B16;
    sbit  LCK15_GPIOG_LCKR_bit at GPIOG_LCKR.B15;
    sbit  LCK14_GPIOG_LCKR_bit at GPIOG_LCKR.B14;
    sbit  LCK13_GPIOG_LCKR_bit at GPIOG_LCKR.B13;
    sbit  LCK12_GPIOG_LCKR_bit at GPIOG_LCKR.B12;
    sbit  LCK11_GPIOG_LCKR_bit at GPIOG_LCKR.B11;
    sbit  LCK10_GPIOG_LCKR_bit at GPIOG_LCKR.B10;
    sbit  LCK9_GPIOG_LCKR_bit at GPIOG_LCKR.B9;
    sbit  LCK8_GPIOG_LCKR_bit at GPIOG_LCKR.B8;
    sbit  LCK7_GPIOG_LCKR_bit at GPIOG_LCKR.B7;
    sbit  LCK6_GPIOG_LCKR_bit at GPIOG_LCKR.B6;
    sbit  LCK5_GPIOG_LCKR_bit at GPIOG_LCKR.B5;
    sbit  LCK4_GPIOG_LCKR_bit at GPIOG_LCKR.B4;
    sbit  LCK3_GPIOG_LCKR_bit at GPIOG_LCKR.B3;
    sbit  LCK2_GPIOG_LCKR_bit at GPIOG_LCKR.B2;
    sbit  LCK1_GPIOG_LCKR_bit at GPIOG_LCKR.B1;
    sbit  LCK0_GPIOG_LCKR_bit at GPIOG_LCKR.B0;

sfr unsigned long   volatile GPIOG_AFRL           absolute 0x40021C20;
    sbit  AFRL70_GPIOG_AFRL_bit at GPIOG_AFRL.B28;
    sbit  AFRL71_GPIOG_AFRL_bit at GPIOG_AFRL.B29;
    sbit  AFRL72_GPIOG_AFRL_bit at GPIOG_AFRL.B30;
    sbit  AFRL73_GPIOG_AFRL_bit at GPIOG_AFRL.B31;
    sbit  AFRL60_GPIOG_AFRL_bit at GPIOG_AFRL.B24;
    sbit  AFRL61_GPIOG_AFRL_bit at GPIOG_AFRL.B25;
    sbit  AFRL62_GPIOG_AFRL_bit at GPIOG_AFRL.B26;
    sbit  AFRL63_GPIOG_AFRL_bit at GPIOG_AFRL.B27;
    sbit  AFRL50_GPIOG_AFRL_bit at GPIOG_AFRL.B20;
    sbit  AFRL51_GPIOG_AFRL_bit at GPIOG_AFRL.B21;
    sbit  AFRL52_GPIOG_AFRL_bit at GPIOG_AFRL.B22;
    sbit  AFRL53_GPIOG_AFRL_bit at GPIOG_AFRL.B23;
    sbit  AFRL40_GPIOG_AFRL_bit at GPIOG_AFRL.B16;
    sbit  AFRL41_GPIOG_AFRL_bit at GPIOG_AFRL.B17;
    sbit  AFRL42_GPIOG_AFRL_bit at GPIOG_AFRL.B18;
    sbit  AFRL43_GPIOG_AFRL_bit at GPIOG_AFRL.B19;
    sbit  AFRL30_GPIOG_AFRL_bit at GPIOG_AFRL.B12;
    sbit  AFRL31_GPIOG_AFRL_bit at GPIOG_AFRL.B13;
    sbit  AFRL32_GPIOG_AFRL_bit at GPIOG_AFRL.B14;
    sbit  AFRL33_GPIOG_AFRL_bit at GPIOG_AFRL.B15;
    sbit  AFRL20_GPIOG_AFRL_bit at GPIOG_AFRL.B8;
    sbit  AFRL21_GPIOG_AFRL_bit at GPIOG_AFRL.B9;
    sbit  AFRL22_GPIOG_AFRL_bit at GPIOG_AFRL.B10;
    sbit  AFRL23_GPIOG_AFRL_bit at GPIOG_AFRL.B11;
    sbit  AFRL10_GPIOG_AFRL_bit at GPIOG_AFRL.B4;
    sbit  AFRL11_GPIOG_AFRL_bit at GPIOG_AFRL.B5;
    sbit  AFRL12_GPIOG_AFRL_bit at GPIOG_AFRL.B6;
    sbit  AFRL13_GPIOG_AFRL_bit at GPIOG_AFRL.B7;
    sbit  AFRL00_GPIOG_AFRL_bit at GPIOG_AFRL.B0;
    sbit  AFRL01_GPIOG_AFRL_bit at GPIOG_AFRL.B1;
    sbit  AFRL02_GPIOG_AFRL_bit at GPIOG_AFRL.B2;
    sbit  AFRL03_GPIOG_AFRL_bit at GPIOG_AFRL.B3;

sfr unsigned long   volatile GPIOG_AFRH           absolute 0x40021C24;
    sbit  AFRH150_GPIOG_AFRH_bit at GPIOG_AFRH.B28;
    sbit  AFRH151_GPIOG_AFRH_bit at GPIOG_AFRH.B29;
    sbit  AFRH152_GPIOG_AFRH_bit at GPIOG_AFRH.B30;
    sbit  AFRH153_GPIOG_AFRH_bit at GPIOG_AFRH.B31;
    sbit  AFRH140_GPIOG_AFRH_bit at GPIOG_AFRH.B24;
    sbit  AFRH141_GPIOG_AFRH_bit at GPIOG_AFRH.B25;
    sbit  AFRH142_GPIOG_AFRH_bit at GPIOG_AFRH.B26;
    sbit  AFRH143_GPIOG_AFRH_bit at GPIOG_AFRH.B27;
    sbit  AFRH130_GPIOG_AFRH_bit at GPIOG_AFRH.B20;
    sbit  AFRH131_GPIOG_AFRH_bit at GPIOG_AFRH.B21;
    sbit  AFRH132_GPIOG_AFRH_bit at GPIOG_AFRH.B22;
    sbit  AFRH133_GPIOG_AFRH_bit at GPIOG_AFRH.B23;
    sbit  AFRH120_GPIOG_AFRH_bit at GPIOG_AFRH.B16;
    sbit  AFRH121_GPIOG_AFRH_bit at GPIOG_AFRH.B17;
    sbit  AFRH122_GPIOG_AFRH_bit at GPIOG_AFRH.B18;
    sbit  AFRH123_GPIOG_AFRH_bit at GPIOG_AFRH.B19;
    sbit  AFRH110_GPIOG_AFRH_bit at GPIOG_AFRH.B12;
    sbit  AFRH111_GPIOG_AFRH_bit at GPIOG_AFRH.B13;
    sbit  AFRH112_GPIOG_AFRH_bit at GPIOG_AFRH.B14;
    sbit  AFRH113_GPIOG_AFRH_bit at GPIOG_AFRH.B15;
    sbit  AFRH100_GPIOG_AFRH_bit at GPIOG_AFRH.B8;
    sbit  AFRH101_GPIOG_AFRH_bit at GPIOG_AFRH.B9;
    sbit  AFRH102_GPIOG_AFRH_bit at GPIOG_AFRH.B10;
    sbit  AFRH103_GPIOG_AFRH_bit at GPIOG_AFRH.B11;
    sbit  AFRH90_GPIOG_AFRH_bit at GPIOG_AFRH.B4;
    sbit  AFRH91_GPIOG_AFRH_bit at GPIOG_AFRH.B5;
    sbit  AFRH92_GPIOG_AFRH_bit at GPIOG_AFRH.B6;
    sbit  AFRH93_GPIOG_AFRH_bit at GPIOG_AFRH.B7;
    sbit  AFRH80_GPIOG_AFRH_bit at GPIOG_AFRH.B0;
    sbit  AFRH81_GPIOG_AFRH_bit at GPIOG_AFRH.B1;
    sbit  AFRH82_GPIOG_AFRH_bit at GPIOG_AFRH.B2;
    sbit  AFRH83_GPIOG_AFRH_bit at GPIOG_AFRH.B3;

sfr unsigned long   volatile GPIOH_BASE           absolute 0x40021400;
sfr unsigned long   volatile GPIOH_MODER          absolute 0x40021400;
    sbit  MODER150_GPIOH_MODER_bit at GPIOH_MODER.B30;
    sbit  MODER151_GPIOH_MODER_bit at GPIOH_MODER.B31;
    sbit  MODER140_GPIOH_MODER_bit at GPIOH_MODER.B28;
    sbit  MODER141_GPIOH_MODER_bit at GPIOH_MODER.B29;
    sbit  MODER130_GPIOH_MODER_bit at GPIOH_MODER.B26;
    sbit  MODER131_GPIOH_MODER_bit at GPIOH_MODER.B27;
    sbit  MODER120_GPIOH_MODER_bit at GPIOH_MODER.B24;
    sbit  MODER121_GPIOH_MODER_bit at GPIOH_MODER.B25;
    sbit  MODER110_GPIOH_MODER_bit at GPIOH_MODER.B22;
    sbit  MODER111_GPIOH_MODER_bit at GPIOH_MODER.B23;
    sbit  MODER100_GPIOH_MODER_bit at GPIOH_MODER.B20;
    sbit  MODER101_GPIOH_MODER_bit at GPIOH_MODER.B21;
    sbit  MODER90_GPIOH_MODER_bit at GPIOH_MODER.B18;
    sbit  MODER91_GPIOH_MODER_bit at GPIOH_MODER.B19;
    sbit  MODER80_GPIOH_MODER_bit at GPIOH_MODER.B16;
    sbit  MODER81_GPIOH_MODER_bit at GPIOH_MODER.B17;
    sbit  MODER70_GPIOH_MODER_bit at GPIOH_MODER.B14;
    sbit  MODER71_GPIOH_MODER_bit at GPIOH_MODER.B15;
    sbit  MODER60_GPIOH_MODER_bit at GPIOH_MODER.B12;
    sbit  MODER61_GPIOH_MODER_bit at GPIOH_MODER.B13;
    sbit  MODER50_GPIOH_MODER_bit at GPIOH_MODER.B10;
    sbit  MODER51_GPIOH_MODER_bit at GPIOH_MODER.B11;
    sbit  MODER40_GPIOH_MODER_bit at GPIOH_MODER.B8;
    sbit  MODER41_GPIOH_MODER_bit at GPIOH_MODER.B9;
    sbit  MODER30_GPIOH_MODER_bit at GPIOH_MODER.B6;
    sbit  MODER31_GPIOH_MODER_bit at GPIOH_MODER.B7;
    sbit  MODER20_GPIOH_MODER_bit at GPIOH_MODER.B4;
    sbit  MODER21_GPIOH_MODER_bit at GPIOH_MODER.B5;
    sbit  MODER10_GPIOH_MODER_bit at GPIOH_MODER.B2;
    sbit  MODER11_GPIOH_MODER_bit at GPIOH_MODER.B3;
    sbit  MODER00_GPIOH_MODER_bit at GPIOH_MODER.B0;
    sbit  MODER01_GPIOH_MODER_bit at GPIOH_MODER.B1;

sfr unsigned long   volatile GPIOH_OTYPER         absolute 0x40021404;
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

sfr unsigned long   volatile GPIOH_OSPEEDER       absolute 0x40021408;
    sbit  OSPEEDR150_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B30;
    sbit  OSPEEDR151_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B31;
    sbit  OSPEEDR140_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B28;
    sbit  OSPEEDR141_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B29;
    sbit  OSPEEDR130_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B26;
    sbit  OSPEEDR131_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B27;
    sbit  OSPEEDR120_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B24;
    sbit  OSPEEDR121_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B25;
    sbit  OSPEEDR110_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B22;
    sbit  OSPEEDR111_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B23;
    sbit  OSPEEDR100_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B20;
    sbit  OSPEEDR101_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B21;
    sbit  OSPEEDR90_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B18;
    sbit  OSPEEDR91_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B19;
    sbit  OSPEEDR80_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B16;
    sbit  OSPEEDR81_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B17;
    sbit  OSPEEDR70_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B14;
    sbit  OSPEEDR71_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B15;
    sbit  OSPEEDR60_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B12;
    sbit  OSPEEDR61_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B13;
    sbit  OSPEEDR50_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B10;
    sbit  OSPEEDR51_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B11;
    sbit  OSPEEDR40_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B8;
    sbit  OSPEEDR41_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B9;
    sbit  OSPEEDR30_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B6;
    sbit  OSPEEDR31_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B7;
    sbit  OSPEEDR20_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B4;
    sbit  OSPEEDR21_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B5;
    sbit  OSPEEDR10_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B2;
    sbit  OSPEEDR11_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B3;
    sbit  OSPEEDR00_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B0;
    sbit  OSPEEDR01_GPIOH_OSPEEDER_bit at GPIOH_OSPEEDER.B1;

sfr unsigned long   volatile GPIOH_PUPDR          absolute 0x4002140C;
    sbit  PUPDR150_GPIOH_PUPDR_bit at GPIOH_PUPDR.B30;
    sbit  PUPDR151_GPIOH_PUPDR_bit at GPIOH_PUPDR.B31;
    sbit  PUPDR140_GPIOH_PUPDR_bit at GPIOH_PUPDR.B28;
    sbit  PUPDR141_GPIOH_PUPDR_bit at GPIOH_PUPDR.B29;
    sbit  PUPDR130_GPIOH_PUPDR_bit at GPIOH_PUPDR.B26;
    sbit  PUPDR131_GPIOH_PUPDR_bit at GPIOH_PUPDR.B27;
    sbit  PUPDR120_GPIOH_PUPDR_bit at GPIOH_PUPDR.B24;
    sbit  PUPDR121_GPIOH_PUPDR_bit at GPIOH_PUPDR.B25;
    sbit  PUPDR110_GPIOH_PUPDR_bit at GPIOH_PUPDR.B22;
    sbit  PUPDR111_GPIOH_PUPDR_bit at GPIOH_PUPDR.B23;
    sbit  PUPDR100_GPIOH_PUPDR_bit at GPIOH_PUPDR.B20;
    sbit  PUPDR101_GPIOH_PUPDR_bit at GPIOH_PUPDR.B21;
    sbit  PUPDR90_GPIOH_PUPDR_bit at GPIOH_PUPDR.B18;
    sbit  PUPDR91_GPIOH_PUPDR_bit at GPIOH_PUPDR.B19;
    sbit  PUPDR80_GPIOH_PUPDR_bit at GPIOH_PUPDR.B16;
    sbit  PUPDR81_GPIOH_PUPDR_bit at GPIOH_PUPDR.B17;
    sbit  PUPDR70_GPIOH_PUPDR_bit at GPIOH_PUPDR.B14;
    sbit  PUPDR71_GPIOH_PUPDR_bit at GPIOH_PUPDR.B15;
    sbit  PUPDR60_GPIOH_PUPDR_bit at GPIOH_PUPDR.B12;
    sbit  PUPDR61_GPIOH_PUPDR_bit at GPIOH_PUPDR.B13;
    sbit  PUPDR50_GPIOH_PUPDR_bit at GPIOH_PUPDR.B10;
    sbit  PUPDR51_GPIOH_PUPDR_bit at GPIOH_PUPDR.B11;
    sbit  PUPDR40_GPIOH_PUPDR_bit at GPIOH_PUPDR.B8;
    sbit  PUPDR41_GPIOH_PUPDR_bit at GPIOH_PUPDR.B9;
    sbit  PUPDR30_GPIOH_PUPDR_bit at GPIOH_PUPDR.B6;
    sbit  PUPDR31_GPIOH_PUPDR_bit at GPIOH_PUPDR.B7;
    sbit  PUPDR20_GPIOH_PUPDR_bit at GPIOH_PUPDR.B4;
    sbit  PUPDR21_GPIOH_PUPDR_bit at GPIOH_PUPDR.B5;
    sbit  PUPDR10_GPIOH_PUPDR_bit at GPIOH_PUPDR.B2;
    sbit  PUPDR11_GPIOH_PUPDR_bit at GPIOH_PUPDR.B3;
    sbit  PUPDR00_GPIOH_PUPDR_bit at GPIOH_PUPDR.B0;
    sbit  PUPDR01_GPIOH_PUPDR_bit at GPIOH_PUPDR.B1;

sfr unsigned long   volatile GPIOH_IDR            absolute 0x40021410;
    sbit  IDR15_GPIOH_IDR_bit at GPIOH_IDR.B15;
    sbit  IDR14_GPIOH_IDR_bit at GPIOH_IDR.B14;
    sbit  IDR13_GPIOH_IDR_bit at GPIOH_IDR.B13;
    sbit  IDR12_GPIOH_IDR_bit at GPIOH_IDR.B12;
    sbit  IDR11_GPIOH_IDR_bit at GPIOH_IDR.B11;
    sbit  IDR10_GPIOH_IDR_bit at GPIOH_IDR.B10;
    sbit  IDR9_GPIOH_IDR_bit at GPIOH_IDR.B9;
    sbit  IDR8_GPIOH_IDR_bit at GPIOH_IDR.B8;
    sbit  IDR7_GPIOH_IDR_bit at GPIOH_IDR.B7;
    sbit  IDR6_GPIOH_IDR_bit at GPIOH_IDR.B6;
    sbit  IDR5_GPIOH_IDR_bit at GPIOH_IDR.B5;
    sbit  IDR4_GPIOH_IDR_bit at GPIOH_IDR.B4;
    sbit  IDR3_GPIOH_IDR_bit at GPIOH_IDR.B3;
    sbit  IDR2_GPIOH_IDR_bit at GPIOH_IDR.B2;
    sbit  IDR1_GPIOH_IDR_bit at GPIOH_IDR.B1;
    sbit  IDR0_GPIOH_IDR_bit at GPIOH_IDR.B0;

sfr unsigned long   volatile GPIOH_ODR            absolute 0x40021414;
    sbit  ODR15_GPIOH_ODR_bit at GPIOH_ODR.B15;
    sbit  ODR14_GPIOH_ODR_bit at GPIOH_ODR.B14;
    sbit  ODR13_GPIOH_ODR_bit at GPIOH_ODR.B13;
    sbit  ODR12_GPIOH_ODR_bit at GPIOH_ODR.B12;
    sbit  ODR11_GPIOH_ODR_bit at GPIOH_ODR.B11;
    sbit  ODR10_GPIOH_ODR_bit at GPIOH_ODR.B10;
    sbit  ODR9_GPIOH_ODR_bit at GPIOH_ODR.B9;
    sbit  ODR8_GPIOH_ODR_bit at GPIOH_ODR.B8;
    sbit  ODR7_GPIOH_ODR_bit at GPIOH_ODR.B7;
    sbit  ODR6_GPIOH_ODR_bit at GPIOH_ODR.B6;
    sbit  ODR5_GPIOH_ODR_bit at GPIOH_ODR.B5;
    sbit  ODR4_GPIOH_ODR_bit at GPIOH_ODR.B4;
    sbit  ODR3_GPIOH_ODR_bit at GPIOH_ODR.B3;
    sbit  ODR2_GPIOH_ODR_bit at GPIOH_ODR.B2;
    sbit  ODR1_GPIOH_ODR_bit at GPIOH_ODR.B1;
    sbit  ODR0_GPIOH_ODR_bit at GPIOH_ODR.B0;

sfr unsigned long   volatile GPIOH_BSRR           absolute 0x40021418;
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

sfr unsigned long   volatile GPIOH_LCKR           absolute 0x4002141C;
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

sfr unsigned long   volatile GPIOH_AFRL           absolute 0x40021420;
    sbit  AFRL70_GPIOH_AFRL_bit at GPIOH_AFRL.B28;
    sbit  AFRL71_GPIOH_AFRL_bit at GPIOH_AFRL.B29;
    sbit  AFRL72_GPIOH_AFRL_bit at GPIOH_AFRL.B30;
    sbit  AFRL73_GPIOH_AFRL_bit at GPIOH_AFRL.B31;
    sbit  AFRL60_GPIOH_AFRL_bit at GPIOH_AFRL.B24;
    sbit  AFRL61_GPIOH_AFRL_bit at GPIOH_AFRL.B25;
    sbit  AFRL62_GPIOH_AFRL_bit at GPIOH_AFRL.B26;
    sbit  AFRL63_GPIOH_AFRL_bit at GPIOH_AFRL.B27;
    sbit  AFRL50_GPIOH_AFRL_bit at GPIOH_AFRL.B20;
    sbit  AFRL51_GPIOH_AFRL_bit at GPIOH_AFRL.B21;
    sbit  AFRL52_GPIOH_AFRL_bit at GPIOH_AFRL.B22;
    sbit  AFRL53_GPIOH_AFRL_bit at GPIOH_AFRL.B23;
    sbit  AFRL40_GPIOH_AFRL_bit at GPIOH_AFRL.B16;
    sbit  AFRL41_GPIOH_AFRL_bit at GPIOH_AFRL.B17;
    sbit  AFRL42_GPIOH_AFRL_bit at GPIOH_AFRL.B18;
    sbit  AFRL43_GPIOH_AFRL_bit at GPIOH_AFRL.B19;
    sbit  AFRL30_GPIOH_AFRL_bit at GPIOH_AFRL.B12;
    sbit  AFRL31_GPIOH_AFRL_bit at GPIOH_AFRL.B13;
    sbit  AFRL32_GPIOH_AFRL_bit at GPIOH_AFRL.B14;
    sbit  AFRL33_GPIOH_AFRL_bit at GPIOH_AFRL.B15;
    sbit  AFRL20_GPIOH_AFRL_bit at GPIOH_AFRL.B8;
    sbit  AFRL21_GPIOH_AFRL_bit at GPIOH_AFRL.B9;
    sbit  AFRL22_GPIOH_AFRL_bit at GPIOH_AFRL.B10;
    sbit  AFRL23_GPIOH_AFRL_bit at GPIOH_AFRL.B11;
    sbit  AFRL10_GPIOH_AFRL_bit at GPIOH_AFRL.B4;
    sbit  AFRL11_GPIOH_AFRL_bit at GPIOH_AFRL.B5;
    sbit  AFRL12_GPIOH_AFRL_bit at GPIOH_AFRL.B6;
    sbit  AFRL13_GPIOH_AFRL_bit at GPIOH_AFRL.B7;
    sbit  AFRL00_GPIOH_AFRL_bit at GPIOH_AFRL.B0;
    sbit  AFRL01_GPIOH_AFRL_bit at GPIOH_AFRL.B1;
    sbit  AFRL02_GPIOH_AFRL_bit at GPIOH_AFRL.B2;
    sbit  AFRL03_GPIOH_AFRL_bit at GPIOH_AFRL.B3;

sfr unsigned long   volatile GPIOH_AFRH           absolute 0x40021424;
    sbit  AFRH150_GPIOH_AFRH_bit at GPIOH_AFRH.B28;
    sbit  AFRH151_GPIOH_AFRH_bit at GPIOH_AFRH.B29;
    sbit  AFRH152_GPIOH_AFRH_bit at GPIOH_AFRH.B30;
    sbit  AFRH153_GPIOH_AFRH_bit at GPIOH_AFRH.B31;
    sbit  AFRH140_GPIOH_AFRH_bit at GPIOH_AFRH.B24;
    sbit  AFRH141_GPIOH_AFRH_bit at GPIOH_AFRH.B25;
    sbit  AFRH142_GPIOH_AFRH_bit at GPIOH_AFRH.B26;
    sbit  AFRH143_GPIOH_AFRH_bit at GPIOH_AFRH.B27;
    sbit  AFRH130_GPIOH_AFRH_bit at GPIOH_AFRH.B20;
    sbit  AFRH131_GPIOH_AFRH_bit at GPIOH_AFRH.B21;
    sbit  AFRH132_GPIOH_AFRH_bit at GPIOH_AFRH.B22;
    sbit  AFRH133_GPIOH_AFRH_bit at GPIOH_AFRH.B23;
    sbit  AFRH120_GPIOH_AFRH_bit at GPIOH_AFRH.B16;
    sbit  AFRH121_GPIOH_AFRH_bit at GPIOH_AFRH.B17;
    sbit  AFRH122_GPIOH_AFRH_bit at GPIOH_AFRH.B18;
    sbit  AFRH123_GPIOH_AFRH_bit at GPIOH_AFRH.B19;
    sbit  AFRH110_GPIOH_AFRH_bit at GPIOH_AFRH.B12;
    sbit  AFRH111_GPIOH_AFRH_bit at GPIOH_AFRH.B13;
    sbit  AFRH112_GPIOH_AFRH_bit at GPIOH_AFRH.B14;
    sbit  AFRH113_GPIOH_AFRH_bit at GPIOH_AFRH.B15;
    sbit  AFRH100_GPIOH_AFRH_bit at GPIOH_AFRH.B8;
    sbit  AFRH101_GPIOH_AFRH_bit at GPIOH_AFRH.B9;
    sbit  AFRH102_GPIOH_AFRH_bit at GPIOH_AFRH.B10;
    sbit  AFRH103_GPIOH_AFRH_bit at GPIOH_AFRH.B11;
    sbit  AFRH90_GPIOH_AFRH_bit at GPIOH_AFRH.B4;
    sbit  AFRH91_GPIOH_AFRH_bit at GPIOH_AFRH.B5;
    sbit  AFRH92_GPIOH_AFRH_bit at GPIOH_AFRH.B6;
    sbit  AFRH93_GPIOH_AFRH_bit at GPIOH_AFRH.B7;
    sbit  AFRH80_GPIOH_AFRH_bit at GPIOH_AFRH.B0;
    sbit  AFRH81_GPIOH_AFRH_bit at GPIOH_AFRH.B1;
    sbit  AFRH82_GPIOH_AFRH_bit at GPIOH_AFRH.B2;
    sbit  AFRH83_GPIOH_AFRH_bit at GPIOH_AFRH.B3;

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
    const register unsigned short int ADD_8_90 = 8;
    sbit  ADD_8_90_bit at I2C1_OAR1.B8;
    const register unsigned short int ADD_8_91 = 9;
    sbit  ADD_8_91_bit at I2C1_OAR1.B9;
    const register unsigned short int ADD_1_70 = 1;
    sbit  ADD_1_70_bit at I2C1_OAR1.B1;
    const register unsigned short int ADD_1_71 = 2;
    sbit  ADD_1_71_bit at I2C1_OAR1.B2;
    const register unsigned short int ADD_1_72 = 3;
    sbit  ADD_1_72_bit at I2C1_OAR1.B3;
    const register unsigned short int ADD_1_73 = 4;
    sbit  ADD_1_73_bit at I2C1_OAR1.B4;
    const register unsigned short int ADD_1_74 = 5;
    sbit  ADD_1_74_bit at I2C1_OAR1.B5;
    const register unsigned short int ADD_1_75 = 6;
    sbit  ADD_1_75_bit at I2C1_OAR1.B6;
    const register unsigned short int ADD_1_76 = 7;
    sbit  ADD_1_76_bit at I2C1_OAR1.B7;
    const register unsigned short int ADD_0 = 0;
    sbit  ADD_0_bit at I2C1_OAR1.B0;

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
    sbit  DR0_I2C1_DR_bit at I2C1_DR.B0;
    sbit  DR1_I2C1_DR_bit at I2C1_DR.B1;
    sbit  DR2_I2C1_DR_bit at I2C1_DR.B2;
    sbit  DR3_I2C1_DR_bit at I2C1_DR.B3;
    sbit  DR4_I2C1_DR_bit at I2C1_DR.B4;
    sbit  DR5_I2C1_DR_bit at I2C1_DR.B5;
    sbit  DR6_I2C1_DR_bit at I2C1_DR.B6;
    sbit  DR7_I2C1_DR_bit at I2C1_DR.B7;

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
    const register unsigned short int CCR10 = 10;
    sbit  CCR10_bit at I2C1_CCR.B10;
    const register unsigned short int CCR11 = 11;
    sbit  CCR11_bit at I2C1_CCR.B11;

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
    sbit  ADD_8_90_I2C2_OAR1_bit at I2C2_OAR1.B8;
    sbit  ADD_8_91_I2C2_OAR1_bit at I2C2_OAR1.B9;
    sbit  ADD_1_70_I2C2_OAR1_bit at I2C2_OAR1.B1;
    sbit  ADD_1_71_I2C2_OAR1_bit at I2C2_OAR1.B2;
    sbit  ADD_1_72_I2C2_OAR1_bit at I2C2_OAR1.B3;
    sbit  ADD_1_73_I2C2_OAR1_bit at I2C2_OAR1.B4;
    sbit  ADD_1_74_I2C2_OAR1_bit at I2C2_OAR1.B5;
    sbit  ADD_1_75_I2C2_OAR1_bit at I2C2_OAR1.B6;
    sbit  ADD_1_76_I2C2_OAR1_bit at I2C2_OAR1.B7;
    sbit  ADD_0_I2C2_OAR1_bit at I2C2_OAR1.B0;

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
    const register unsigned short int RVU = 1;
    sbit  RVU_bit at IWDG_SR.B1;
    const register unsigned short int PVU = 0;
    sbit  PVU_bit at IWDG_SR.B0;

sfr unsigned long   volatile LCD_CR               absolute 0x40002400;
    const register unsigned short int MUX_SEG = 7;
    sbit  MUX_SEG_bit at LCD_CR.B7;
    const register unsigned short int BIAS0 = 5;
    sbit  BIAS0_bit at LCD_CR.B5;
    const register unsigned short int BIAS1 = 6;
    sbit  BIAS1_bit at LCD_CR.B6;
    const register unsigned short int DUTY0 = 2;
    sbit  DUTY0_bit at LCD_CR.B2;
    const register unsigned short int DUTY1 = 3;
    sbit  DUTY1_bit at LCD_CR.B3;
    const register unsigned short int DUTY2 = 4;
    sbit  DUTY2_bit at LCD_CR.B4;
    const register unsigned short int VSEL = 1;
    sbit  VSEL_bit at LCD_CR.B1;
    const register unsigned short int LCDEN = 0;
    sbit  LCDEN_bit at LCD_CR.B0;

sfr unsigned long   volatile LCD_FCR              absolute 0x40002404;
    const register unsigned short int PS0 = 22;
    sbit  PS0_bit at LCD_FCR.B22;
    const register unsigned short int PS1 = 23;
    sbit  PS1_bit at LCD_FCR.B23;
    const register unsigned short int PS2 = 24;
    sbit  PS2_bit at LCD_FCR.B24;
    const register unsigned short int PS3 = 25;
    sbit  PS3_bit at LCD_FCR.B25;
    const register unsigned short int DIV0 = 18;
    sbit  DIV0_bit at LCD_FCR.B18;
    const register unsigned short int DIV1 = 19;
    sbit  DIV1_bit at LCD_FCR.B19;
    const register unsigned short int DIV2 = 20;
    sbit  DIV2_bit at LCD_FCR.B20;
    const register unsigned short int DIV3 = 21;
    sbit  DIV3_bit at LCD_FCR.B21;
    const register unsigned short int BLINK0 = 16;
    sbit  BLINK0_bit at LCD_FCR.B16;
    const register unsigned short int BLINK1 = 17;
    sbit  BLINK1_bit at LCD_FCR.B17;
    const register unsigned short int BLINKF0 = 13;
    sbit  BLINKF0_bit at LCD_FCR.B13;
    const register unsigned short int BLINKF1 = 14;
    sbit  BLINKF1_bit at LCD_FCR.B14;
    const register unsigned short int BLINKF2 = 15;
    sbit  BLINKF2_bit at LCD_FCR.B15;
    const register unsigned short int CC0 = 10;
    sbit  CC0_bit at LCD_FCR.B10;
    const register unsigned short int CC1 = 11;
    sbit  CC1_bit at LCD_FCR.B11;
    const register unsigned short int CC2 = 12;
    sbit  CC2_bit at LCD_FCR.B12;
    const register unsigned short int DEAD0 = 7;
    sbit  DEAD0_bit at LCD_FCR.B7;
    const register unsigned short int DEAD1 = 8;
    sbit  DEAD1_bit at LCD_FCR.B8;
    const register unsigned short int DEAD2 = 9;
    sbit  DEAD2_bit at LCD_FCR.B9;
    const register unsigned short int PON0 = 4;
    sbit  PON0_bit at LCD_FCR.B4;
    const register unsigned short int PON1 = 5;
    sbit  PON1_bit at LCD_FCR.B5;
    const register unsigned short int PON2 = 6;
    sbit  PON2_bit at LCD_FCR.B6;
    const register unsigned short int UDDIE = 3;
    sbit  UDDIE_bit at LCD_FCR.B3;
    const register unsigned short int SOFIE = 1;
    sbit  SOFIE_bit at LCD_FCR.B1;
    const register unsigned short int HD = 0;
    sbit  HD_bit at LCD_FCR.B0;

sfr unsigned long   volatile LCD_SR               absolute 0x40002408;
    const register unsigned short int FCRSF = 5;
    sbit  FCRSF_bit at LCD_SR.B5;
    const register unsigned short int RDY = 4;
    sbit  RDY_bit at LCD_SR.B4;
    const register unsigned short int UDD = 3;
    sbit  UDD_bit at LCD_SR.B3;
    const register unsigned short int UDR = 2;
    sbit  UDR_bit at LCD_SR.B2;
    const register unsigned short int SOF = 1;
    sbit  SOF_bit at LCD_SR.B1;
    const register unsigned short int ENS = 0;
    sbit  ENS_bit at LCD_SR.B0;

sfr unsigned long   volatile LCD_CLR              absolute 0x4000240C;
    const register unsigned short int UDDC = 3;
    sbit  UDDC_bit at LCD_CLR.B3;
    const register unsigned short int SOFC = 1;
    sbit  SOFC_bit at LCD_CLR.B1;

sfr unsigned long   volatile LCD_RAM_COM0         absolute 0x40002414;
    const register unsigned short int S31_ = 31;
    sbit  S31_bit at LCD_RAM_COM0.B31;
    const register unsigned short int S30_ = 30;
    sbit  S30_bit at LCD_RAM_COM0.B30;
    const register unsigned short int S29_ = 29;
    sbit  S29_bit at LCD_RAM_COM0.B29;
    const register unsigned short int S28_ = 28;
    sbit  S28_bit at LCD_RAM_COM0.B28;
    const register unsigned short int S27_ = 27;
    sbit  S27_bit at LCD_RAM_COM0.B27;
    const register unsigned short int S26_ = 26;
    sbit  S26_bit at LCD_RAM_COM0.B26;
    const register unsigned short int S25_ = 25;
    sbit  S25_bit at LCD_RAM_COM0.B25;
    const register unsigned short int S24_ = 24;
    sbit  S24_bit at LCD_RAM_COM0.B24;
    const register unsigned short int S23_ = 23;
    sbit  S23_bit at LCD_RAM_COM0.B23;
    const register unsigned short int S22_ = 22;
    sbit  S22_bit at LCD_RAM_COM0.B22;
    const register unsigned short int S21_ = 21;
    sbit  S21_bit at LCD_RAM_COM0.B21;
    const register unsigned short int S20_ = 20;
    sbit  S20_bit at LCD_RAM_COM0.B20;
    const register unsigned short int S19_ = 19;
    sbit  S19_bit at LCD_RAM_COM0.B19;
    const register unsigned short int S18_ = 18;
    sbit  S18_bit at LCD_RAM_COM0.B18;
    const register unsigned short int S17_ = 17;
    sbit  S17_bit at LCD_RAM_COM0.B17;
    const register unsigned short int S16_ = 16;
    sbit  S16_bit at LCD_RAM_COM0.B16;
    const register unsigned short int S15_ = 15;
    sbit  S15_bit at LCD_RAM_COM0.B15;
    const register unsigned short int S14_ = 14;
    sbit  S14_bit at LCD_RAM_COM0.B14;
    const register unsigned short int S13_ = 13;
    sbit  S13_bit at LCD_RAM_COM0.B13;
    const register unsigned short int S12_ = 12;
    sbit  S12_bit at LCD_RAM_COM0.B12;
    const register unsigned short int S11_ = 11;
    sbit  S11_bit at LCD_RAM_COM0.B11;
    const register unsigned short int S10_ = 10;
    sbit  S10_bit at LCD_RAM_COM0.B10;
    const register unsigned short int S09 = 9;
    sbit  S09_bit at LCD_RAM_COM0.B9;
    const register unsigned short int S08 = 8;
    sbit  S08_bit at LCD_RAM_COM0.B8;
    const register unsigned short int S07 = 7;
    sbit  S07_bit at LCD_RAM_COM0.B7;
    const register unsigned short int S06 = 6;
    sbit  S06_bit at LCD_RAM_COM0.B6;
    const register unsigned short int S05 = 5;
    sbit  S05_bit at LCD_RAM_COM0.B5;
    const register unsigned short int S04 = 4;
    sbit  S04_bit at LCD_RAM_COM0.B4;
    const register unsigned short int S03 = 3;
    sbit  S03_bit at LCD_RAM_COM0.B3;
    const register unsigned short int S02 = 2;
    sbit  S02_bit at LCD_RAM_COM0.B2;
    const register unsigned short int S01 = 1;
    sbit  S01_bit at LCD_RAM_COM0.B1;
    const register unsigned short int S00 = 0;
    sbit  S00_bit at LCD_RAM_COM0.B0;

sfr unsigned long   volatile LCD_RAM_COM1         absolute 0x4000241C;
    sbit  S31_LCD_RAM_COM1_bit at LCD_RAM_COM1.B31;
    sbit  S30_LCD_RAM_COM1_bit at LCD_RAM_COM1.B30;
    sbit  S29_LCD_RAM_COM1_bit at LCD_RAM_COM1.B29;
    sbit  S28_LCD_RAM_COM1_bit at LCD_RAM_COM1.B28;
    sbit  S27_LCD_RAM_COM1_bit at LCD_RAM_COM1.B27;
    sbit  S26_LCD_RAM_COM1_bit at LCD_RAM_COM1.B26;
    sbit  S25_LCD_RAM_COM1_bit at LCD_RAM_COM1.B25;
    sbit  S24_LCD_RAM_COM1_bit at LCD_RAM_COM1.B24;
    sbit  S23_LCD_RAM_COM1_bit at LCD_RAM_COM1.B23;
    sbit  S22_LCD_RAM_COM1_bit at LCD_RAM_COM1.B22;
    sbit  S21_LCD_RAM_COM1_bit at LCD_RAM_COM1.B21;
    sbit  S20_LCD_RAM_COM1_bit at LCD_RAM_COM1.B20;
    sbit  S19_LCD_RAM_COM1_bit at LCD_RAM_COM1.B19;
    sbit  S18_LCD_RAM_COM1_bit at LCD_RAM_COM1.B18;
    sbit  S17_LCD_RAM_COM1_bit at LCD_RAM_COM1.B17;
    sbit  S16_LCD_RAM_COM1_bit at LCD_RAM_COM1.B16;
    sbit  S15_LCD_RAM_COM1_bit at LCD_RAM_COM1.B15;
    sbit  S14_LCD_RAM_COM1_bit at LCD_RAM_COM1.B14;
    sbit  S13_LCD_RAM_COM1_bit at LCD_RAM_COM1.B13;
    sbit  S12_LCD_RAM_COM1_bit at LCD_RAM_COM1.B12;
    sbit  S11_LCD_RAM_COM1_bit at LCD_RAM_COM1.B11;
    sbit  S10_LCD_RAM_COM1_bit at LCD_RAM_COM1.B10;
    sbit  S09_LCD_RAM_COM1_bit at LCD_RAM_COM1.B9;
    sbit  S08_LCD_RAM_COM1_bit at LCD_RAM_COM1.B8;
    sbit  S07_LCD_RAM_COM1_bit at LCD_RAM_COM1.B7;
    sbit  S06_LCD_RAM_COM1_bit at LCD_RAM_COM1.B6;
    sbit  S05_LCD_RAM_COM1_bit at LCD_RAM_COM1.B5;
    sbit  S04_LCD_RAM_COM1_bit at LCD_RAM_COM1.B4;
    sbit  S03_LCD_RAM_COM1_bit at LCD_RAM_COM1.B3;
    sbit  S02_LCD_RAM_COM1_bit at LCD_RAM_COM1.B2;
    sbit  S01_LCD_RAM_COM1_bit at LCD_RAM_COM1.B1;
    sbit  S00_LCD_RAM_COM1_bit at LCD_RAM_COM1.B0;

sfr unsigned long   volatile LCD_RAM_COM2         absolute 0x40002424;
    sbit  S31_LCD_RAM_COM2_bit at LCD_RAM_COM2.B31;
    sbit  S30_LCD_RAM_COM2_bit at LCD_RAM_COM2.B30;
    sbit  S29_LCD_RAM_COM2_bit at LCD_RAM_COM2.B29;
    sbit  S28_LCD_RAM_COM2_bit at LCD_RAM_COM2.B28;
    sbit  S27_LCD_RAM_COM2_bit at LCD_RAM_COM2.B27;
    sbit  S26_LCD_RAM_COM2_bit at LCD_RAM_COM2.B26;
    sbit  S25_LCD_RAM_COM2_bit at LCD_RAM_COM2.B25;
    sbit  S24_LCD_RAM_COM2_bit at LCD_RAM_COM2.B24;
    sbit  S23_LCD_RAM_COM2_bit at LCD_RAM_COM2.B23;
    sbit  S22_LCD_RAM_COM2_bit at LCD_RAM_COM2.B22;
    sbit  S21_LCD_RAM_COM2_bit at LCD_RAM_COM2.B21;
    sbit  S20_LCD_RAM_COM2_bit at LCD_RAM_COM2.B20;
    sbit  S19_LCD_RAM_COM2_bit at LCD_RAM_COM2.B19;
    sbit  S18_LCD_RAM_COM2_bit at LCD_RAM_COM2.B18;
    sbit  S17_LCD_RAM_COM2_bit at LCD_RAM_COM2.B17;
    sbit  S16_LCD_RAM_COM2_bit at LCD_RAM_COM2.B16;
    sbit  S15_LCD_RAM_COM2_bit at LCD_RAM_COM2.B15;
    sbit  S14_LCD_RAM_COM2_bit at LCD_RAM_COM2.B14;
    sbit  S13_LCD_RAM_COM2_bit at LCD_RAM_COM2.B13;
    sbit  S12_LCD_RAM_COM2_bit at LCD_RAM_COM2.B12;
    sbit  S11_LCD_RAM_COM2_bit at LCD_RAM_COM2.B11;
    sbit  S10_LCD_RAM_COM2_bit at LCD_RAM_COM2.B10;
    sbit  S09_LCD_RAM_COM2_bit at LCD_RAM_COM2.B9;
    sbit  S08_LCD_RAM_COM2_bit at LCD_RAM_COM2.B8;
    sbit  S07_LCD_RAM_COM2_bit at LCD_RAM_COM2.B7;
    sbit  S06_LCD_RAM_COM2_bit at LCD_RAM_COM2.B6;
    sbit  S05_LCD_RAM_COM2_bit at LCD_RAM_COM2.B5;
    sbit  S04_LCD_RAM_COM2_bit at LCD_RAM_COM2.B4;
    sbit  S03_LCD_RAM_COM2_bit at LCD_RAM_COM2.B3;
    sbit  S02_LCD_RAM_COM2_bit at LCD_RAM_COM2.B2;
    sbit  S01_LCD_RAM_COM2_bit at LCD_RAM_COM2.B1;
    sbit  S00_LCD_RAM_COM2_bit at LCD_RAM_COM2.B0;

sfr unsigned long   volatile LCD_RAM_COM3         absolute 0x4000242C;
    sbit  S31_LCD_RAM_COM3_bit at LCD_RAM_COM3.B31;
    sbit  S30_LCD_RAM_COM3_bit at LCD_RAM_COM3.B30;
    sbit  S29_LCD_RAM_COM3_bit at LCD_RAM_COM3.B29;
    sbit  S28_LCD_RAM_COM3_bit at LCD_RAM_COM3.B28;
    sbit  S27_LCD_RAM_COM3_bit at LCD_RAM_COM3.B27;
    sbit  S26_LCD_RAM_COM3_bit at LCD_RAM_COM3.B26;
    sbit  S25_LCD_RAM_COM3_bit at LCD_RAM_COM3.B25;
    sbit  S24_LCD_RAM_COM3_bit at LCD_RAM_COM3.B24;
    sbit  S23_LCD_RAM_COM3_bit at LCD_RAM_COM3.B23;
    sbit  S22_LCD_RAM_COM3_bit at LCD_RAM_COM3.B22;
    sbit  S21_LCD_RAM_COM3_bit at LCD_RAM_COM3.B21;
    sbit  S20_LCD_RAM_COM3_bit at LCD_RAM_COM3.B20;
    sbit  S19_LCD_RAM_COM3_bit at LCD_RAM_COM3.B19;
    sbit  S18_LCD_RAM_COM3_bit at LCD_RAM_COM3.B18;
    sbit  S17_LCD_RAM_COM3_bit at LCD_RAM_COM3.B17;
    sbit  S16_LCD_RAM_COM3_bit at LCD_RAM_COM3.B16;
    sbit  S15_LCD_RAM_COM3_bit at LCD_RAM_COM3.B15;
    sbit  S14_LCD_RAM_COM3_bit at LCD_RAM_COM3.B14;
    sbit  S13_LCD_RAM_COM3_bit at LCD_RAM_COM3.B13;
    sbit  S12_LCD_RAM_COM3_bit at LCD_RAM_COM3.B12;
    sbit  S11_LCD_RAM_COM3_bit at LCD_RAM_COM3.B11;
    sbit  S10_LCD_RAM_COM3_bit at LCD_RAM_COM3.B10;
    sbit  S09_LCD_RAM_COM3_bit at LCD_RAM_COM3.B9;
    sbit  S08_LCD_RAM_COM3_bit at LCD_RAM_COM3.B8;
    sbit  S07_LCD_RAM_COM3_bit at LCD_RAM_COM3.B7;
    sbit  S06_LCD_RAM_COM3_bit at LCD_RAM_COM3.B6;
    sbit  S05_LCD_RAM_COM3_bit at LCD_RAM_COM3.B5;
    sbit  S04_LCD_RAM_COM3_bit at LCD_RAM_COM3.B4;
    sbit  S03_LCD_RAM_COM3_bit at LCD_RAM_COM3.B3;
    sbit  S02_LCD_RAM_COM3_bit at LCD_RAM_COM3.B2;
    sbit  S01_LCD_RAM_COM3_bit at LCD_RAM_COM3.B1;
    sbit  S00_LCD_RAM_COM3_bit at LCD_RAM_COM3.B0;

sfr unsigned long   volatile LCD_RAM_COM4         absolute 0x40002434;
    sbit  S31_LCD_RAM_COM4_bit at LCD_RAM_COM4.B31;
    sbit  S30_LCD_RAM_COM4_bit at LCD_RAM_COM4.B30;
    sbit  S29_LCD_RAM_COM4_bit at LCD_RAM_COM4.B29;
    sbit  S28_LCD_RAM_COM4_bit at LCD_RAM_COM4.B28;
    sbit  S27_LCD_RAM_COM4_bit at LCD_RAM_COM4.B27;
    sbit  S26_LCD_RAM_COM4_bit at LCD_RAM_COM4.B26;
    sbit  S25_LCD_RAM_COM4_bit at LCD_RAM_COM4.B25;
    sbit  S24_LCD_RAM_COM4_bit at LCD_RAM_COM4.B24;
    sbit  S23_LCD_RAM_COM4_bit at LCD_RAM_COM4.B23;
    sbit  S22_LCD_RAM_COM4_bit at LCD_RAM_COM4.B22;
    sbit  S21_LCD_RAM_COM4_bit at LCD_RAM_COM4.B21;
    sbit  S20_LCD_RAM_COM4_bit at LCD_RAM_COM4.B20;
    sbit  S19_LCD_RAM_COM4_bit at LCD_RAM_COM4.B19;
    sbit  S18_LCD_RAM_COM4_bit at LCD_RAM_COM4.B18;
    sbit  S17_LCD_RAM_COM4_bit at LCD_RAM_COM4.B17;
    sbit  S16_LCD_RAM_COM4_bit at LCD_RAM_COM4.B16;
    sbit  S15_LCD_RAM_COM4_bit at LCD_RAM_COM4.B15;
    sbit  S14_LCD_RAM_COM4_bit at LCD_RAM_COM4.B14;
    sbit  S13_LCD_RAM_COM4_bit at LCD_RAM_COM4.B13;
    sbit  S12_LCD_RAM_COM4_bit at LCD_RAM_COM4.B12;
    sbit  S11_LCD_RAM_COM4_bit at LCD_RAM_COM4.B11;
    sbit  S10_LCD_RAM_COM4_bit at LCD_RAM_COM4.B10;
    sbit  S09_LCD_RAM_COM4_bit at LCD_RAM_COM4.B9;
    sbit  S08_LCD_RAM_COM4_bit at LCD_RAM_COM4.B8;
    sbit  S07_LCD_RAM_COM4_bit at LCD_RAM_COM4.B7;
    sbit  S06_LCD_RAM_COM4_bit at LCD_RAM_COM4.B6;
    sbit  S05_LCD_RAM_COM4_bit at LCD_RAM_COM4.B5;
    sbit  S04_LCD_RAM_COM4_bit at LCD_RAM_COM4.B4;
    sbit  S03_LCD_RAM_COM4_bit at LCD_RAM_COM4.B3;
    sbit  S02_LCD_RAM_COM4_bit at LCD_RAM_COM4.B2;
    sbit  S01_LCD_RAM_COM4_bit at LCD_RAM_COM4.B1;
    sbit  S00_LCD_RAM_COM4_bit at LCD_RAM_COM4.B0;

sfr unsigned long   volatile LCD_RAM_COM5         absolute 0x4000243C;
    sbit  S31_LCD_RAM_COM5_bit at LCD_RAM_COM5.B31;
    sbit  S30_LCD_RAM_COM5_bit at LCD_RAM_COM5.B30;
    sbit  S29_LCD_RAM_COM5_bit at LCD_RAM_COM5.B29;
    sbit  S28_LCD_RAM_COM5_bit at LCD_RAM_COM5.B28;
    sbit  S27_LCD_RAM_COM5_bit at LCD_RAM_COM5.B27;
    sbit  S26_LCD_RAM_COM5_bit at LCD_RAM_COM5.B26;
    sbit  S25_LCD_RAM_COM5_bit at LCD_RAM_COM5.B25;
    sbit  S24_LCD_RAM_COM5_bit at LCD_RAM_COM5.B24;
    sbit  S23_LCD_RAM_COM5_bit at LCD_RAM_COM5.B23;
    sbit  S22_LCD_RAM_COM5_bit at LCD_RAM_COM5.B22;
    sbit  S21_LCD_RAM_COM5_bit at LCD_RAM_COM5.B21;
    sbit  S20_LCD_RAM_COM5_bit at LCD_RAM_COM5.B20;
    sbit  S19_LCD_RAM_COM5_bit at LCD_RAM_COM5.B19;
    sbit  S18_LCD_RAM_COM5_bit at LCD_RAM_COM5.B18;
    sbit  S17_LCD_RAM_COM5_bit at LCD_RAM_COM5.B17;
    sbit  S16_LCD_RAM_COM5_bit at LCD_RAM_COM5.B16;
    sbit  S15_LCD_RAM_COM5_bit at LCD_RAM_COM5.B15;
    sbit  S14_LCD_RAM_COM5_bit at LCD_RAM_COM5.B14;
    sbit  S13_LCD_RAM_COM5_bit at LCD_RAM_COM5.B13;
    sbit  S12_LCD_RAM_COM5_bit at LCD_RAM_COM5.B12;
    sbit  S11_LCD_RAM_COM5_bit at LCD_RAM_COM5.B11;
    sbit  S10_LCD_RAM_COM5_bit at LCD_RAM_COM5.B10;
    sbit  S09_LCD_RAM_COM5_bit at LCD_RAM_COM5.B9;
    sbit  S08_LCD_RAM_COM5_bit at LCD_RAM_COM5.B8;
    sbit  S07_LCD_RAM_COM5_bit at LCD_RAM_COM5.B7;
    sbit  S06_LCD_RAM_COM5_bit at LCD_RAM_COM5.B6;
    sbit  S05_LCD_RAM_COM5_bit at LCD_RAM_COM5.B5;
    sbit  S04_LCD_RAM_COM5_bit at LCD_RAM_COM5.B4;
    sbit  S03_LCD_RAM_COM5_bit at LCD_RAM_COM5.B3;
    sbit  S02_LCD_RAM_COM5_bit at LCD_RAM_COM5.B2;
    sbit  S01_LCD_RAM_COM5_bit at LCD_RAM_COM5.B1;
    sbit  S00_LCD_RAM_COM5_bit at LCD_RAM_COM5.B0;

sfr unsigned long   volatile LCD_RAM_COM6         absolute 0x40002444;
    sbit  S31_LCD_RAM_COM6_bit at LCD_RAM_COM6.B31;
    sbit  S30_LCD_RAM_COM6_bit at LCD_RAM_COM6.B30;
    sbit  S29_LCD_RAM_COM6_bit at LCD_RAM_COM6.B29;
    sbit  S28_LCD_RAM_COM6_bit at LCD_RAM_COM6.B28;
    sbit  S27_LCD_RAM_COM6_bit at LCD_RAM_COM6.B27;
    sbit  S26_LCD_RAM_COM6_bit at LCD_RAM_COM6.B26;
    sbit  S25_LCD_RAM_COM6_bit at LCD_RAM_COM6.B25;
    sbit  S24_LCD_RAM_COM6_bit at LCD_RAM_COM6.B24;
    sbit  S23_LCD_RAM_COM6_bit at LCD_RAM_COM6.B23;
    sbit  S22_LCD_RAM_COM6_bit at LCD_RAM_COM6.B22;
    sbit  S21_LCD_RAM_COM6_bit at LCD_RAM_COM6.B21;
    sbit  S20_LCD_RAM_COM6_bit at LCD_RAM_COM6.B20;
    sbit  S19_LCD_RAM_COM6_bit at LCD_RAM_COM6.B19;
    sbit  S18_LCD_RAM_COM6_bit at LCD_RAM_COM6.B18;
    sbit  S17_LCD_RAM_COM6_bit at LCD_RAM_COM6.B17;
    sbit  S16_LCD_RAM_COM6_bit at LCD_RAM_COM6.B16;
    sbit  S15_LCD_RAM_COM6_bit at LCD_RAM_COM6.B15;
    sbit  S14_LCD_RAM_COM6_bit at LCD_RAM_COM6.B14;
    sbit  S13_LCD_RAM_COM6_bit at LCD_RAM_COM6.B13;
    sbit  S12_LCD_RAM_COM6_bit at LCD_RAM_COM6.B12;
    sbit  S11_LCD_RAM_COM6_bit at LCD_RAM_COM6.B11;
    sbit  S10_LCD_RAM_COM6_bit at LCD_RAM_COM6.B10;
    sbit  S09_LCD_RAM_COM6_bit at LCD_RAM_COM6.B9;
    sbit  S08_LCD_RAM_COM6_bit at LCD_RAM_COM6.B8;
    sbit  S07_LCD_RAM_COM6_bit at LCD_RAM_COM6.B7;
    sbit  S06_LCD_RAM_COM6_bit at LCD_RAM_COM6.B6;
    sbit  S05_LCD_RAM_COM6_bit at LCD_RAM_COM6.B5;
    sbit  S04_LCD_RAM_COM6_bit at LCD_RAM_COM6.B4;
    sbit  S03_LCD_RAM_COM6_bit at LCD_RAM_COM6.B3;
    sbit  S02_LCD_RAM_COM6_bit at LCD_RAM_COM6.B2;
    sbit  S01_LCD_RAM_COM6_bit at LCD_RAM_COM6.B1;
    sbit  S00_LCD_RAM_COM6_bit at LCD_RAM_COM6.B0;

sfr unsigned long   volatile LCD_RAM_COM7         absolute 0x4000244C;
    sbit  S31_LCD_RAM_COM7_bit at LCD_RAM_COM7.B31;
    sbit  S30_LCD_RAM_COM7_bit at LCD_RAM_COM7.B30;
    sbit  S29_LCD_RAM_COM7_bit at LCD_RAM_COM7.B29;
    sbit  S28_LCD_RAM_COM7_bit at LCD_RAM_COM7.B28;
    sbit  S27_LCD_RAM_COM7_bit at LCD_RAM_COM7.B27;
    sbit  S26_LCD_RAM_COM7_bit at LCD_RAM_COM7.B26;
    sbit  S25_LCD_RAM_COM7_bit at LCD_RAM_COM7.B25;
    sbit  S24_LCD_RAM_COM7_bit at LCD_RAM_COM7.B24;
    sbit  S23_LCD_RAM_COM7_bit at LCD_RAM_COM7.B23;
    sbit  S22_LCD_RAM_COM7_bit at LCD_RAM_COM7.B22;
    sbit  S21_LCD_RAM_COM7_bit at LCD_RAM_COM7.B21;
    sbit  S20_LCD_RAM_COM7_bit at LCD_RAM_COM7.B20;
    sbit  S19_LCD_RAM_COM7_bit at LCD_RAM_COM7.B19;
    sbit  S18_LCD_RAM_COM7_bit at LCD_RAM_COM7.B18;
    sbit  S17_LCD_RAM_COM7_bit at LCD_RAM_COM7.B17;
    sbit  S16_LCD_RAM_COM7_bit at LCD_RAM_COM7.B16;
    sbit  S15_LCD_RAM_COM7_bit at LCD_RAM_COM7.B15;
    sbit  S14_LCD_RAM_COM7_bit at LCD_RAM_COM7.B14;
    sbit  S13_LCD_RAM_COM7_bit at LCD_RAM_COM7.B13;
    sbit  S12_LCD_RAM_COM7_bit at LCD_RAM_COM7.B12;
    sbit  S11_LCD_RAM_COM7_bit at LCD_RAM_COM7.B11;
    sbit  S10_LCD_RAM_COM7_bit at LCD_RAM_COM7.B10;
    sbit  S09_LCD_RAM_COM7_bit at LCD_RAM_COM7.B9;
    sbit  S08_LCD_RAM_COM7_bit at LCD_RAM_COM7.B8;
    sbit  S07_LCD_RAM_COM7_bit at LCD_RAM_COM7.B7;
    sbit  S06_LCD_RAM_COM7_bit at LCD_RAM_COM7.B6;
    sbit  S05_LCD_RAM_COM7_bit at LCD_RAM_COM7.B5;
    sbit  S04_LCD_RAM_COM7_bit at LCD_RAM_COM7.B4;
    sbit  S03_LCD_RAM_COM7_bit at LCD_RAM_COM7.B3;
    sbit  S02_LCD_RAM_COM7_bit at LCD_RAM_COM7.B2;
    sbit  S01_LCD_RAM_COM7_bit at LCD_RAM_COM7.B1;
    sbit  S00_LCD_RAM_COM7_bit at LCD_RAM_COM7.B0;

sfr unsigned long   volatile OPAMP_CSR            absolute 0x40007C5C;
    const register unsigned short int OPA3CALOUT = 31;
    sbit  OPA3CALOUT_bit at OPAMP_CSR.B31;
    const register unsigned short int OPA2CALOUT = 30;
    sbit  OPA2CALOUT_bit at OPAMP_CSR.B30;
    const register unsigned short int OPA1CALOUT = 29;
    sbit  OPA1CALOUT_bit at OPAMP_CSR.B29;
    const register unsigned short int AOP_RANGE = 28;
    sbit  AOP_RANGE_bit at OPAMP_CSR.B28;
    const register unsigned short int S7SEL2 = 27;
    sbit  S7SEL2_bit at OPAMP_CSR.B27;
    const register unsigned short int ANAWSEL3 = 26;
    sbit  ANAWSEL3_bit at OPAMP_CSR.B26;
    const register unsigned short int ANAWSEL2 = 25;
    sbit  ANAWSEL2_bit at OPAMP_CSR.B25;
    const register unsigned short int ANAWSEL1 = 24;
    sbit  ANAWSEL1_bit at OPAMP_CSR.B24;
    const register unsigned short int OPA3LPM = 23;
    sbit  OPA3LPM_bit at OPAMP_CSR.B23;
    const register unsigned short int OPA3CAL_H = 22;
    sbit  OPA3CAL_H_bit at OPAMP_CSR.B22;
    const register unsigned short int OPA3CAL_L = 21;
    sbit  OPA3CAL_L_bit at OPAMP_CSR.B21;
    const register unsigned short int S6SEL3 = 20;
    sbit  S6SEL3_bit at OPAMP_CSR.B20;
    const register unsigned short int S5SEL3 = 19;
    sbit  S5SEL3_bit at OPAMP_CSR.B19;
    const register unsigned short int S4SEL3 = 18;
    sbit  S4SEL3_bit at OPAMP_CSR.B18;
    const register unsigned short int S3SEL3 = 17;
    sbit  S3SEL3_bit at OPAMP_CSR.B17;
    const register unsigned short int OPA3PD = 16;
    sbit  OPA3PD_bit at OPAMP_CSR.B16;
    const register unsigned short int OPA2LPM = 15;
    sbit  OPA2LPM_bit at OPAMP_CSR.B15;
    const register unsigned short int OPA2CAL_H = 14;
    sbit  OPA2CAL_H_bit at OPAMP_CSR.B14;
    const register unsigned short int OPA2CAL_L = 13;
    sbit  OPA2CAL_L_bit at OPAMP_CSR.B13;
    const register unsigned short int S6SEL2 = 12;
    sbit  S6SEL2_bit at OPAMP_CSR.B12;
    const register unsigned short int S5SEL2 = 11;
    sbit  S5SEL2_bit at OPAMP_CSR.B11;
    const register unsigned short int S4SEL2 = 10;
    sbit  S4SEL2_bit at OPAMP_CSR.B10;
    const register unsigned short int S3SEL2 = 9;
    sbit  S3SEL2_bit at OPAMP_CSR.B9;
    const register unsigned short int OPA2PD = 8;
    sbit  OPA2PD_bit at OPAMP_CSR.B8;
    const register unsigned short int OPA1LPM = 7;
    sbit  OPA1LPM_bit at OPAMP_CSR.B7;
    const register unsigned short int OPA1CAL_H = 6;
    sbit  OPA1CAL_H_bit at OPAMP_CSR.B6;
    const register unsigned short int OPA1CAL_L = 5;
    sbit  OPA1CAL_L_bit at OPAMP_CSR.B5;
    const register unsigned short int S6SEL1 = 4;
    sbit  S6SEL1_bit at OPAMP_CSR.B4;
    const register unsigned short int S5SEL1 = 3;
    sbit  S5SEL1_bit at OPAMP_CSR.B3;
    const register unsigned short int S4SEL1 = 2;
    sbit  S4SEL1_bit at OPAMP_CSR.B2;
    const register unsigned short int S3SEL1 = 1;
    sbit  S3SEL1_bit at OPAMP_CSR.B1;
    const register unsigned short int OPA1PD = 0;
    sbit  OPA1PD_bit at OPAMP_CSR.B0;

sfr unsigned long   volatile OPAMP_OTR            absolute 0x40007C60;
    const register unsigned short int OT_USER = 31;
    sbit  OT_USER_bit at OPAMP_OTR.B31;
    const register unsigned short int AO3_OPT_OFFSET_TRIM0 = 20;
    sbit  AO3_OPT_OFFSET_TRIM0_bit at OPAMP_OTR.B20;
    const register unsigned short int AO3_OPT_OFFSET_TRIM1 = 21;
    sbit  AO3_OPT_OFFSET_TRIM1_bit at OPAMP_OTR.B21;
    const register unsigned short int AO3_OPT_OFFSET_TRIM2 = 22;
    sbit  AO3_OPT_OFFSET_TRIM2_bit at OPAMP_OTR.B22;
    const register unsigned short int AO3_OPT_OFFSET_TRIM3 = 23;
    sbit  AO3_OPT_OFFSET_TRIM3_bit at OPAMP_OTR.B23;
    const register unsigned short int AO3_OPT_OFFSET_TRIM4 = 24;
    sbit  AO3_OPT_OFFSET_TRIM4_bit at OPAMP_OTR.B24;
    const register unsigned short int AO3_OPT_OFFSET_TRIM5 = 25;
    sbit  AO3_OPT_OFFSET_TRIM5_bit at OPAMP_OTR.B25;
    const register unsigned short int AO3_OPT_OFFSET_TRIM6 = 26;
    sbit  AO3_OPT_OFFSET_TRIM6_bit at OPAMP_OTR.B26;
    const register unsigned short int AO3_OPT_OFFSET_TRIM7 = 27;
    sbit  AO3_OPT_OFFSET_TRIM7_bit at OPAMP_OTR.B27;
    const register unsigned short int AO3_OPT_OFFSET_TRIM8 = 28;
    sbit  AO3_OPT_OFFSET_TRIM8_bit at OPAMP_OTR.B28;
    const register unsigned short int AO3_OPT_OFFSET_TRIM9 = 29;
    sbit  AO3_OPT_OFFSET_TRIM9_bit at OPAMP_OTR.B29;
    const register unsigned short int AO2_OPT_OFFSET_TRIM0 = 10;
    sbit  AO2_OPT_OFFSET_TRIM0_bit at OPAMP_OTR.B10;
    const register unsigned short int AO2_OPT_OFFSET_TRIM1 = 11;
    sbit  AO2_OPT_OFFSET_TRIM1_bit at OPAMP_OTR.B11;
    const register unsigned short int AO2_OPT_OFFSET_TRIM2 = 12;
    sbit  AO2_OPT_OFFSET_TRIM2_bit at OPAMP_OTR.B12;
    const register unsigned short int AO2_OPT_OFFSET_TRIM3 = 13;
    sbit  AO2_OPT_OFFSET_TRIM3_bit at OPAMP_OTR.B13;
    const register unsigned short int AO2_OPT_OFFSET_TRIM4 = 14;
    sbit  AO2_OPT_OFFSET_TRIM4_bit at OPAMP_OTR.B14;
    const register unsigned short int AO2_OPT_OFFSET_TRIM5 = 15;
    sbit  AO2_OPT_OFFSET_TRIM5_bit at OPAMP_OTR.B15;
    const register unsigned short int AO2_OPT_OFFSET_TRIM6 = 16;
    sbit  AO2_OPT_OFFSET_TRIM6_bit at OPAMP_OTR.B16;
    const register unsigned short int AO2_OPT_OFFSET_TRIM7 = 17;
    sbit  AO2_OPT_OFFSET_TRIM7_bit at OPAMP_OTR.B17;
    const register unsigned short int AO2_OPT_OFFSET_TRIM8 = 18;
    sbit  AO2_OPT_OFFSET_TRIM8_bit at OPAMP_OTR.B18;
    const register unsigned short int AO2_OPT_OFFSET_TRIM9 = 19;
    sbit  AO2_OPT_OFFSET_TRIM9_bit at OPAMP_OTR.B19;
    const register unsigned short int AO1_OPT_OFFSET_TRIM0 = 0;
    sbit  AO1_OPT_OFFSET_TRIM0_bit at OPAMP_OTR.B0;
    const register unsigned short int AO1_OPT_OFFSET_TRIM1 = 1;
    sbit  AO1_OPT_OFFSET_TRIM1_bit at OPAMP_OTR.B1;
    const register unsigned short int AO1_OPT_OFFSET_TRIM2 = 2;
    sbit  AO1_OPT_OFFSET_TRIM2_bit at OPAMP_OTR.B2;
    const register unsigned short int AO1_OPT_OFFSET_TRIM3 = 3;
    sbit  AO1_OPT_OFFSET_TRIM3_bit at OPAMP_OTR.B3;
    const register unsigned short int AO1_OPT_OFFSET_TRIM4 = 4;
    sbit  AO1_OPT_OFFSET_TRIM4_bit at OPAMP_OTR.B4;
    const register unsigned short int AO1_OPT_OFFSET_TRIM5 = 5;
    sbit  AO1_OPT_OFFSET_TRIM5_bit at OPAMP_OTR.B5;
    const register unsigned short int AO1_OPT_OFFSET_TRIM6 = 6;
    sbit  AO1_OPT_OFFSET_TRIM6_bit at OPAMP_OTR.B6;
    const register unsigned short int AO1_OPT_OFFSET_TRIM7 = 7;
    sbit  AO1_OPT_OFFSET_TRIM7_bit at OPAMP_OTR.B7;
    const register unsigned short int AO1_OPT_OFFSET_TRIM8 = 8;
    sbit  AO1_OPT_OFFSET_TRIM8_bit at OPAMP_OTR.B8;
    const register unsigned short int AO1_OPT_OFFSET_TRIM9 = 9;
    sbit  AO1_OPT_OFFSET_TRIM9_bit at OPAMP_OTR.B9;

sfr unsigned long   volatile OPAMP_LPOTR          absolute 0x40007C64;
    const register unsigned short int AO3_OPT_OFFSET_TRIM_LP0 = 20;
    sbit  AO3_OPT_OFFSET_TRIM_LP0_bit at OPAMP_LPOTR.B20;
    const register unsigned short int AO3_OPT_OFFSET_TRIM_LP1 = 21;
    sbit  AO3_OPT_OFFSET_TRIM_LP1_bit at OPAMP_LPOTR.B21;
    const register unsigned short int AO3_OPT_OFFSET_TRIM_LP2 = 22;
    sbit  AO3_OPT_OFFSET_TRIM_LP2_bit at OPAMP_LPOTR.B22;
    const register unsigned short int AO3_OPT_OFFSET_TRIM_LP3 = 23;
    sbit  AO3_OPT_OFFSET_TRIM_LP3_bit at OPAMP_LPOTR.B23;
    const register unsigned short int AO3_OPT_OFFSET_TRIM_LP4 = 24;
    sbit  AO3_OPT_OFFSET_TRIM_LP4_bit at OPAMP_LPOTR.B24;
    const register unsigned short int AO3_OPT_OFFSET_TRIM_LP5 = 25;
    sbit  AO3_OPT_OFFSET_TRIM_LP5_bit at OPAMP_LPOTR.B25;
    const register unsigned short int AO3_OPT_OFFSET_TRIM_LP6 = 26;
    sbit  AO3_OPT_OFFSET_TRIM_LP6_bit at OPAMP_LPOTR.B26;
    const register unsigned short int AO3_OPT_OFFSET_TRIM_LP7 = 27;
    sbit  AO3_OPT_OFFSET_TRIM_LP7_bit at OPAMP_LPOTR.B27;
    const register unsigned short int AO3_OPT_OFFSET_TRIM_LP8 = 28;
    sbit  AO3_OPT_OFFSET_TRIM_LP8_bit at OPAMP_LPOTR.B28;
    const register unsigned short int AO3_OPT_OFFSET_TRIM_LP9 = 29;
    sbit  AO3_OPT_OFFSET_TRIM_LP9_bit at OPAMP_LPOTR.B29;
    const register unsigned short int AO2_OPT_OFFSET_TRIM_LP0 = 10;
    sbit  AO2_OPT_OFFSET_TRIM_LP0_bit at OPAMP_LPOTR.B10;
    const register unsigned short int AO2_OPT_OFFSET_TRIM_LP1 = 11;
    sbit  AO2_OPT_OFFSET_TRIM_LP1_bit at OPAMP_LPOTR.B11;
    const register unsigned short int AO2_OPT_OFFSET_TRIM_LP2 = 12;
    sbit  AO2_OPT_OFFSET_TRIM_LP2_bit at OPAMP_LPOTR.B12;
    const register unsigned short int AO2_OPT_OFFSET_TRIM_LP3 = 13;
    sbit  AO2_OPT_OFFSET_TRIM_LP3_bit at OPAMP_LPOTR.B13;
    const register unsigned short int AO2_OPT_OFFSET_TRIM_LP4 = 14;
    sbit  AO2_OPT_OFFSET_TRIM_LP4_bit at OPAMP_LPOTR.B14;
    const register unsigned short int AO2_OPT_OFFSET_TRIM_LP5 = 15;
    sbit  AO2_OPT_OFFSET_TRIM_LP5_bit at OPAMP_LPOTR.B15;
    const register unsigned short int AO2_OPT_OFFSET_TRIM_LP6 = 16;
    sbit  AO2_OPT_OFFSET_TRIM_LP6_bit at OPAMP_LPOTR.B16;
    const register unsigned short int AO2_OPT_OFFSET_TRIM_LP7 = 17;
    sbit  AO2_OPT_OFFSET_TRIM_LP7_bit at OPAMP_LPOTR.B17;
    const register unsigned short int AO2_OPT_OFFSET_TRIM_LP8 = 18;
    sbit  AO2_OPT_OFFSET_TRIM_LP8_bit at OPAMP_LPOTR.B18;
    const register unsigned short int AO2_OPT_OFFSET_TRIM_LP9 = 19;
    sbit  AO2_OPT_OFFSET_TRIM_LP9_bit at OPAMP_LPOTR.B19;
    const register unsigned short int AO1_OPT_OFFSET_TRIM_LP0 = 0;
    sbit  AO1_OPT_OFFSET_TRIM_LP0_bit at OPAMP_LPOTR.B0;
    const register unsigned short int AO1_OPT_OFFSET_TRIM_LP1 = 1;
    sbit  AO1_OPT_OFFSET_TRIM_LP1_bit at OPAMP_LPOTR.B1;
    const register unsigned short int AO1_OPT_OFFSET_TRIM_LP2 = 2;
    sbit  AO1_OPT_OFFSET_TRIM_LP2_bit at OPAMP_LPOTR.B2;
    const register unsigned short int AO1_OPT_OFFSET_TRIM_LP3 = 3;
    sbit  AO1_OPT_OFFSET_TRIM_LP3_bit at OPAMP_LPOTR.B3;
    const register unsigned short int AO1_OPT_OFFSET_TRIM_LP4 = 4;
    sbit  AO1_OPT_OFFSET_TRIM_LP4_bit at OPAMP_LPOTR.B4;
    const register unsigned short int AO1_OPT_OFFSET_TRIM_LP5 = 5;
    sbit  AO1_OPT_OFFSET_TRIM_LP5_bit at OPAMP_LPOTR.B5;
    const register unsigned short int AO1_OPT_OFFSET_TRIM_LP6 = 6;
    sbit  AO1_OPT_OFFSET_TRIM_LP6_bit at OPAMP_LPOTR.B6;
    const register unsigned short int AO1_OPT_OFFSET_TRIM_LP7 = 7;
    sbit  AO1_OPT_OFFSET_TRIM_LP7_bit at OPAMP_LPOTR.B7;
    const register unsigned short int AO1_OPT_OFFSET_TRIM_LP8 = 8;
    sbit  AO1_OPT_OFFSET_TRIM_LP8_bit at OPAMP_LPOTR.B8;
    const register unsigned short int AO1_OPT_OFFSET_TRIM_LP9 = 9;
    sbit  AO1_OPT_OFFSET_TRIM_LP9_bit at OPAMP_LPOTR.B9;

sfr unsigned long   volatile PWR_CR               absolute 0x40007000;
    const register unsigned short int LPRUN = 14;
    sbit  LPRUN_bit at PWR_CR.B14;
    const register unsigned short int VOS0 = 11;
    sbit  VOS0_bit at PWR_CR.B11;
    const register unsigned short int VOS1 = 12;
    sbit  VOS1_bit at PWR_CR.B12;
    const register unsigned short int FWU = 10;
    sbit  FWU_bit at PWR_CR.B10;
    const register unsigned short int ULP = 9;
    sbit  ULP_bit at PWR_CR.B9;
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
    const register unsigned short int LPSDSR = 0;
    sbit  LPSDSR_bit at PWR_CR.B0;

sfr unsigned long   volatile PWR_CSR              absolute 0x40007004;
    const register unsigned short int EWUP3 = 10;
    sbit  EWUP3_bit at PWR_CSR.B10;
    const register unsigned short int EWUP2 = 9;
    sbit  EWUP2_bit at PWR_CSR.B9;
    const register unsigned short int EWUP1 = 8;
    sbit  EWUP1_bit at PWR_CSR.B8;
    const register unsigned short int REGLPF = 5;
    sbit  REGLPF_bit at PWR_CSR.B5;
    const register unsigned short int VOSF = 4;
    sbit  VOSF_bit at PWR_CSR.B4;
    const register unsigned short int VREFINTRDYF = 3;
    sbit  VREFINTRDYF_bit at PWR_CSR.B3;
    const register unsigned short int PVDO = 2;
    sbit  PVDO_bit at PWR_CSR.B2;
    const register unsigned short int SBF = 1;
    sbit  SBF_bit at PWR_CSR.B1;
    const register unsigned short int WUF = 0;
    sbit  WUF_bit at PWR_CSR.B0;

sfr unsigned long   volatile RCC_CR               absolute 0x40023800;
    const register unsigned short int RTCPRE1 = 30;
    sbit  RTCPRE1_bit at RCC_CR.B30;
    const register unsigned short int RTCPRE0 = 29;
    sbit  RTCPRE0_bit at RCC_CR.B29;
    const register unsigned short int CSSON = 28;
    sbit  CSSON_bit at RCC_CR.B28;
    const register unsigned short int PLLRDY = 25;
    sbit  PLLRDY_bit at RCC_CR.B25;
    const register unsigned short int PLLON = 24;
    sbit  PLLON_bit at RCC_CR.B24;
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
    const register unsigned short int HSIRDY = 1;
    sbit  HSIRDY_bit at RCC_CR.B1;
    const register unsigned short int HSION = 0;
    sbit  HSION_bit at RCC_CR.B0;

sfr unsigned long   volatile RCC_ICSCR            absolute 0x40023804;
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

sfr unsigned long   volatile RCC_CFGR             absolute 0x40023808;
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
    sbit  SW1_RCC_CFGR_bit at RCC_CFGR.B1;

sfr unsigned long   volatile RCC_CIR              absolute 0x4002380C;
    const register unsigned short int CSSC = 23;
    sbit  CSSC_bit at RCC_CIR.B23;
    const register unsigned short int LSECSSC = 22;
    sbit  LSECSSC_bit at RCC_CIR.B22;
    const register unsigned short int MSIRDYC = 21;
    sbit  MSIRDYC_bit at RCC_CIR.B21;
    const register unsigned short int PLLRDYC = 20;
    sbit  PLLRDYC_bit at RCC_CIR.B20;
    const register unsigned short int HSERDYC = 19;
    sbit  HSERDYC_bit at RCC_CIR.B19;
    const register unsigned short int HSIRDYC = 18;
    sbit  HSIRDYC_bit at RCC_CIR.B18;
    const register unsigned short int LSERDYC = 17;
    sbit  LSERDYC_bit at RCC_CIR.B17;
    const register unsigned short int LSIRDYC = 16;
    sbit  LSIRDYC_bit at RCC_CIR.B16;
    const register unsigned short int LSECSSIE = 14;
    sbit  LSECSSIE_bit at RCC_CIR.B14;
    const register unsigned short int MSIRDYIE = 13;
    sbit  MSIRDYIE_bit at RCC_CIR.B13;
    const register unsigned short int PLLRDYIE = 12;
    sbit  PLLRDYIE_bit at RCC_CIR.B12;
    const register unsigned short int HSERDYIE = 11;
    sbit  HSERDYIE_bit at RCC_CIR.B11;
    const register unsigned short int HSIRDYIE = 10;
    sbit  HSIRDYIE_bit at RCC_CIR.B10;
    const register unsigned short int LSERDYIE = 9;
    sbit  LSERDYIE_bit at RCC_CIR.B9;
    const register unsigned short int LSIRDYIE = 8;
    sbit  LSIRDYIE_bit at RCC_CIR.B8;
    const register unsigned short int CSSF = 7;
    sbit  CSSF_bit at RCC_CIR.B7;
    const register unsigned short int LSECSSF = 6;
    sbit  LSECSSF_bit at RCC_CIR.B6;
    const register unsigned short int MSIRDYF = 5;
    sbit  MSIRDYF_bit at RCC_CIR.B5;
    const register unsigned short int PLLRDYF = 4;
    sbit  PLLRDYF_bit at RCC_CIR.B4;
    const register unsigned short int HSERDYF = 3;
    sbit  HSERDYF_bit at RCC_CIR.B3;
    const register unsigned short int HSIRDYF = 2;
    sbit  HSIRDYF_bit at RCC_CIR.B2;
    const register unsigned short int LSERDYF = 1;
    sbit  LSERDYF_bit at RCC_CIR.B1;
    const register unsigned short int LSIRDYF = 0;
    sbit  LSIRDYF_bit at RCC_CIR.B0;

sfr unsigned long   volatile RCC_AHBRSTR          absolute 0x40023810;
    const register unsigned short int DMA2RST = 25;
    sbit  DMA2RST_bit at RCC_AHBRSTR.B25;
    const register unsigned short int DMA1RST = 24;
    sbit  DMA1RST_bit at RCC_AHBRSTR.B24;
    const register unsigned short int FLITFRST = 15;
    sbit  FLITFRST_bit at RCC_AHBRSTR.B15;
    const register unsigned short int CRCRST = 12;
    sbit  CRCRST_bit at RCC_AHBRSTR.B12;
    const register unsigned short int GPIOGRST = 7;
    sbit  GPIOGRST_bit at RCC_AHBRSTR.B7;
    const register unsigned short int GPIOFRST = 6;
    sbit  GPIOFRST_bit at RCC_AHBRSTR.B6;
    const register unsigned short int GPIOHRST = 5;
    sbit  GPIOHRST_bit at RCC_AHBRSTR.B5;
    const register unsigned short int GPIOERST = 4;
    sbit  GPIOERST_bit at RCC_AHBRSTR.B4;
    const register unsigned short int GPIODRST = 3;
    sbit  GPIODRST_bit at RCC_AHBRSTR.B3;
    const register unsigned short int GPIOCRST = 2;
    sbit  GPIOCRST_bit at RCC_AHBRSTR.B2;
    const register unsigned short int GPIOBRST = 1;
    sbit  GPIOBRST_bit at RCC_AHBRSTR.B1;
    const register unsigned short int GPIOARST = 0;
    sbit  GPIOARST_bit at RCC_AHBRSTR.B0;

sfr unsigned long   volatile RCC_APB2RSTR         absolute 0x40023814;
    const register unsigned short int USART1RST = 14;
    sbit  USART1RST_bit at RCC_APB2RSTR.B14;
    const register unsigned short int SPI1RST = 12;
    sbit  SPI1RST_bit at RCC_APB2RSTR.B12;
    const register unsigned short int ADC1RST = 9;
    sbit  ADC1RST_bit at RCC_APB2RSTR.B9;
    const register unsigned short int TM11RST = 4;
    sbit  TM11RST_bit at RCC_APB2RSTR.B4;
    const register unsigned short int TM10RST = 3;
    sbit  TM10RST_bit at RCC_APB2RSTR.B3;
    const register unsigned short int TIM9RST = 2;
    sbit  TIM9RST_bit at RCC_APB2RSTR.B2;
    const register unsigned short int SYSCFGRST = 0;
    sbit  SYSCFGRST_bit at RCC_APB2RSTR.B0;

sfr unsigned long   volatile RCC_APB1RSTR         absolute 0x40023818;
    const register unsigned short int COMPRST = 31;
    sbit  COMPRST_bit at RCC_APB1RSTR.B31;
    const register unsigned short int DACRST = 29;
    sbit  DACRST_bit at RCC_APB1RSTR.B29;
    const register unsigned short int PWRRST = 28;
    sbit  PWRRST_bit at RCC_APB1RSTR.B28;
    const register unsigned short int USBRST = 23;
    sbit  USBRST_bit at RCC_APB1RSTR.B23;
    const register unsigned short int I2C2RST = 22;
    sbit  I2C2RST_bit at RCC_APB1RSTR.B22;
    const register unsigned short int I2C1RST = 21;
    sbit  I2C1RST_bit at RCC_APB1RSTR.B21;
    const register unsigned short int USART3RST = 18;
    sbit  USART3RST_bit at RCC_APB1RSTR.B18;
    const register unsigned short int USART2RST = 17;
    sbit  USART2RST_bit at RCC_APB1RSTR.B17;
    const register unsigned short int SPI3RST = 15;
    sbit  SPI3RST_bit at RCC_APB1RSTR.B15;
    const register unsigned short int SPI2RST = 14;
    sbit  SPI2RST_bit at RCC_APB1RSTR.B14;
    const register unsigned short int WWDRST = 11;
    sbit  WWDRST_bit at RCC_APB1RSTR.B11;
    const register unsigned short int LCDRST = 9;
    sbit  LCDRST_bit at RCC_APB1RSTR.B9;
    const register unsigned short int TIM7RST = 5;
    sbit  TIM7RST_bit at RCC_APB1RSTR.B5;
    const register unsigned short int TIM6RST = 4;
    sbit  TIM6RST_bit at RCC_APB1RSTR.B4;
    const register unsigned short int TIM5RST = 3;
    sbit  TIM5RST_bit at RCC_APB1RSTR.B3;
    const register unsigned short int TIM4RST = 2;
    sbit  TIM4RST_bit at RCC_APB1RSTR.B2;
    const register unsigned short int TIM3RST = 1;
    sbit  TIM3RST_bit at RCC_APB1RSTR.B1;
    const register unsigned short int TIM2RST = 0;
    sbit  TIM2RST_bit at RCC_APB1RSTR.B0;

sfr unsigned long   volatile RCC_AHBENR           absolute 0x4002381C;
    const register unsigned short int DMA2EN = 25;
    sbit  DMA2EN_bit at RCC_AHBENR.B25;
    const register unsigned short int DMA1EN = 24;
    sbit  DMA1EN_bit at RCC_AHBENR.B24;
    const register unsigned short int FLITFEN = 15;
    sbit  FLITFEN_bit at RCC_AHBENR.B15;
    const register unsigned short int CRCEN = 12;
    sbit  CRCEN_bit at RCC_AHBENR.B12;
    const register unsigned short int GPIOPGEN = 7;
    sbit  GPIOPGEN_bit at RCC_AHBENR.B7;
    const register unsigned short int GPIOPFEN = 6;
    sbit  GPIOPFEN_bit at RCC_AHBENR.B6;
    const register unsigned short int GPIOPHEN = 5;
    sbit  GPIOPHEN_bit at RCC_AHBENR.B5;
    const register unsigned short int GPIOPEEN = 4;
    sbit  GPIOPEEN_bit at RCC_AHBENR.B4;
    const register unsigned short int GPIOPDEN = 3;
    sbit  GPIOPDEN_bit at RCC_AHBENR.B3;
    const register unsigned short int GPIOPCEN = 2;
    sbit  GPIOPCEN_bit at RCC_AHBENR.B2;
    const register unsigned short int GPIOPBEN = 1;
    sbit  GPIOPBEN_bit at RCC_AHBENR.B1;
    const register unsigned short int GPIOPAEN = 0;
    sbit  GPIOPAEN_bit at RCC_AHBENR.B0;

sfr unsigned long   volatile RCC_APB2ENR          absolute 0x40023820;
    const register unsigned short int USART1EN = 14;
    sbit  USART1EN_bit at RCC_APB2ENR.B14;
    const register unsigned short int SPI1EN = 12;
    sbit  SPI1EN_bit at RCC_APB2ENR.B12;
    const register unsigned short int ADC1EN = 9;
    sbit  ADC1EN_bit at RCC_APB2ENR.B9;
    const register unsigned short int TIM11EN = 4;
    sbit  TIM11EN_bit at RCC_APB2ENR.B4;
    const register unsigned short int TIM10EN = 3;
    sbit  TIM10EN_bit at RCC_APB2ENR.B3;
    const register unsigned short int TIM9EN = 2;
    sbit  TIM9EN_bit at RCC_APB2ENR.B2;
    const register unsigned short int SYSCFGEN = 0;
    sbit  SYSCFGEN_bit at RCC_APB2ENR.B0;

sfr unsigned long   volatile RCC_APB1ENR          absolute 0x40023824;
    const register unsigned short int COMPEN = 31;
    sbit  COMPEN_bit at RCC_APB1ENR.B31;
    const register unsigned short int DACEN = 29;
    sbit  DACEN_bit at RCC_APB1ENR.B29;
    const register unsigned short int PWREN = 28;
    sbit  PWREN_bit at RCC_APB1ENR.B28;
    const register unsigned short int USBEN = 23;
    sbit  USBEN_bit at RCC_APB1ENR.B23;
    const register unsigned short int I2C2EN = 22;
    sbit  I2C2EN_bit at RCC_APB1ENR.B22;
    const register unsigned short int I2C1EN = 21;
    sbit  I2C1EN_bit at RCC_APB1ENR.B21;
    const register unsigned short int USART3EN = 18;
    sbit  USART3EN_bit at RCC_APB1ENR.B18;
    const register unsigned short int USART2EN = 17;
    sbit  USART2EN_bit at RCC_APB1ENR.B17;
    const register unsigned short int SPI3EN = 15;
    sbit  SPI3EN_bit at RCC_APB1ENR.B15;
    const register unsigned short int SPI2EN = 14;
    sbit  SPI2EN_bit at RCC_APB1ENR.B14;
    const register unsigned short int WWDGEN = 11;
    sbit  WWDGEN_bit at RCC_APB1ENR.B11;
    sbit  LCDEN_RCC_APB1ENR_bit at RCC_APB1ENR.B9;
    const register unsigned short int TIM7EN = 5;
    sbit  TIM7EN_bit at RCC_APB1ENR.B5;
    const register unsigned short int TIM6EN = 4;
    sbit  TIM6EN_bit at RCC_APB1ENR.B4;
    const register unsigned short int TIM5EN = 3;
    sbit  TIM5EN_bit at RCC_APB1ENR.B3;
    const register unsigned short int TIM4EN = 2;
    sbit  TIM4EN_bit at RCC_APB1ENR.B2;
    const register unsigned short int TIM3EN = 1;
    sbit  TIM3EN_bit at RCC_APB1ENR.B1;
    const register unsigned short int TIM2EN = 0;
    sbit  TIM2EN_bit at RCC_APB1ENR.B0;

sfr unsigned long   volatile RCC_AHBLPENR         absolute 0x40023828;
    const register unsigned short int DMA2LPEN = 25;
    sbit  DMA2LPEN_bit at RCC_AHBLPENR.B25;
    const register unsigned short int DMA1LPEN = 24;
    sbit  DMA1LPEN_bit at RCC_AHBLPENR.B24;
    const register unsigned short int SRAMLPEN = 16;
    sbit  SRAMLPEN_bit at RCC_AHBLPENR.B16;
    const register unsigned short int FLITFLPEN = 15;
    sbit  FLITFLPEN_bit at RCC_AHBLPENR.B15;
    const register unsigned short int CRCLPEN = 12;
    sbit  CRCLPEN_bit at RCC_AHBLPENR.B12;
    const register unsigned short int GPIOGLPEN = 7;
    sbit  GPIOGLPEN_bit at RCC_AHBLPENR.B7;
    const register unsigned short int GPIOFLPEN = 6;
    sbit  GPIOFLPEN_bit at RCC_AHBLPENR.B6;
    const register unsigned short int GPIOHLPEN = 5;
    sbit  GPIOHLPEN_bit at RCC_AHBLPENR.B5;
    const register unsigned short int GPIOELPEN = 4;
    sbit  GPIOELPEN_bit at RCC_AHBLPENR.B4;
    const register unsigned short int GPIODLPEN = 3;
    sbit  GPIODLPEN_bit at RCC_AHBLPENR.B3;
    const register unsigned short int GPIOCLPEN = 2;
    sbit  GPIOCLPEN_bit at RCC_AHBLPENR.B2;
    const register unsigned short int GPIOBLPEN = 1;
    sbit  GPIOBLPEN_bit at RCC_AHBLPENR.B1;
    const register unsigned short int GPIOALPEN = 0;
    sbit  GPIOALPEN_bit at RCC_AHBLPENR.B0;

sfr unsigned long   volatile RCC_APB2LPENR        absolute 0x4002382C;
    const register unsigned short int USART1LPEN = 14;
    sbit  USART1LPEN_bit at RCC_APB2LPENR.B14;
    const register unsigned short int SPI1LPEN = 12;
    sbit  SPI1LPEN_bit at RCC_APB2LPENR.B12;
    const register unsigned short int ADC1LPEN = 9;
    sbit  ADC1LPEN_bit at RCC_APB2LPENR.B9;
    const register unsigned short int TIM11LPEN = 4;
    sbit  TIM11LPEN_bit at RCC_APB2LPENR.B4;
    const register unsigned short int TIM10LPEN = 3;
    sbit  TIM10LPEN_bit at RCC_APB2LPENR.B3;
    const register unsigned short int TIM9LPEN = 2;
    sbit  TIM9LPEN_bit at RCC_APB2LPENR.B2;
    const register unsigned short int SYSCFGLPEN = 0;
    sbit  SYSCFGLPEN_bit at RCC_APB2LPENR.B0;

sfr unsigned long   volatile RCC_APB1LPENR        absolute 0x40023830;
    const register unsigned short int COMPLPEN = 31;
    sbit  COMPLPEN_bit at RCC_APB1LPENR.B31;
    const register unsigned short int DACLPEN = 29;
    sbit  DACLPEN_bit at RCC_APB1LPENR.B29;
    const register unsigned short int PWRLPEN = 28;
    sbit  PWRLPEN_bit at RCC_APB1LPENR.B28;
    const register unsigned short int USBLPEN = 23;
    sbit  USBLPEN_bit at RCC_APB1LPENR.B23;
    const register unsigned short int I2C2LPEN = 22;
    sbit  I2C2LPEN_bit at RCC_APB1LPENR.B22;
    const register unsigned short int I2C1LPEN = 21;
    sbit  I2C1LPEN_bit at RCC_APB1LPENR.B21;
    const register unsigned short int USART3LPEN = 18;
    sbit  USART3LPEN_bit at RCC_APB1LPENR.B18;
    const register unsigned short int USART2LPEN = 17;
    sbit  USART2LPEN_bit at RCC_APB1LPENR.B17;
    const register unsigned short int SPI2LPEN = 14;
    sbit  SPI2LPEN_bit at RCC_APB1LPENR.B14;
    const register unsigned short int WWDGLPEN = 11;
    sbit  WWDGLPEN_bit at RCC_APB1LPENR.B11;
    const register unsigned short int LCDLPEN = 9;
    sbit  LCDLPEN_bit at RCC_APB1LPENR.B9;
    const register unsigned short int TIM7LPEN = 5;
    sbit  TIM7LPEN_bit at RCC_APB1LPENR.B5;
    const register unsigned short int TIM6LPEN = 4;
    sbit  TIM6LPEN_bit at RCC_APB1LPENR.B4;
    const register unsigned short int TIM4LPEN = 2;
    sbit  TIM4LPEN_bit at RCC_APB1LPENR.B2;
    const register unsigned short int TIM3LPEN = 1;
    sbit  TIM3LPEN_bit at RCC_APB1LPENR.B1;
    const register unsigned short int TIM2LPEN = 0;
    sbit  TIM2LPEN_bit at RCC_APB1LPENR.B0;

sfr unsigned long   volatile RCC_CSR              absolute 0x40023834;
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
    const register unsigned short int RMVF = 24;
    sbit  RMVF_bit at RCC_CSR.B24;
    const register unsigned short int RTCRST = 23;
    sbit  RTCRST_bit at RCC_CSR.B23;
    const register unsigned short int RTCEN = 22;
    sbit  RTCEN_bit at RCC_CSR.B22;
    const register unsigned short int RTCSEL0 = 16;
    sbit  RTCSEL0_bit at RCC_CSR.B16;
    const register unsigned short int RTCSEL1 = 17;
    sbit  RTCSEL1_bit at RCC_CSR.B17;
    const register unsigned short int LSECSSD = 12;
    sbit  LSECSSD_bit at RCC_CSR.B12;
    const register unsigned short int LSECSSON = 11;
    sbit  LSECSSON_bit at RCC_CSR.B11;
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

sfr unsigned long   volatile RI_ICR               absolute 0x40007C04;
    const register unsigned short int IC4 = 21;
    sbit  IC4_bit at RI_ICR.B21;
    const register unsigned short int IC3 = 20;
    sbit  IC3_bit at RI_ICR.B20;
    const register unsigned short int IC2 = 19;
    sbit  IC2_bit at RI_ICR.B19;
    const register unsigned short int IC1 = 18;
    sbit  IC1_bit at RI_ICR.B18;
    const register unsigned short int TIM0 = 16;
    sbit  TIM0_bit at RI_ICR.B16;
    const register unsigned short int TIM1 = 17;
    sbit  TIM1_bit at RI_ICR.B17;
    const register unsigned short int IC4IOS0 = 12;
    sbit  IC4IOS0_bit at RI_ICR.B12;
    const register unsigned short int IC4IOS1 = 13;
    sbit  IC4IOS1_bit at RI_ICR.B13;
    const register unsigned short int IC4IOS2 = 14;
    sbit  IC4IOS2_bit at RI_ICR.B14;
    const register unsigned short int IC4IOS3 = 15;
    sbit  IC4IOS3_bit at RI_ICR.B15;
    const register unsigned short int IC3IOS0 = 8;
    sbit  IC3IOS0_bit at RI_ICR.B8;
    const register unsigned short int IC3IOS1 = 9;
    sbit  IC3IOS1_bit at RI_ICR.B9;
    const register unsigned short int IC3IOS2 = 10;
    sbit  IC3IOS2_bit at RI_ICR.B10;
    const register unsigned short int IC3IOS3 = 11;
    sbit  IC3IOS3_bit at RI_ICR.B11;
    const register unsigned short int IC2IOS0 = 4;
    sbit  IC2IOS0_bit at RI_ICR.B4;
    const register unsigned short int IC2IOS1 = 5;
    sbit  IC2IOS1_bit at RI_ICR.B5;
    const register unsigned short int IC2IOS2 = 6;
    sbit  IC2IOS2_bit at RI_ICR.B6;
    const register unsigned short int IC2IOS3 = 7;
    sbit  IC2IOS3_bit at RI_ICR.B7;
    const register unsigned short int IC1IOS0 = 0;
    sbit  IC1IOS0_bit at RI_ICR.B0;
    const register unsigned short int IC1IOS1 = 1;
    sbit  IC1IOS1_bit at RI_ICR.B1;
    const register unsigned short int IC1IOS2 = 2;
    sbit  IC1IOS2_bit at RI_ICR.B2;
    const register unsigned short int IC1IOS3 = 3;
    sbit  IC1IOS3_bit at RI_ICR.B3;

sfr unsigned long   volatile RI_ASCR1             absolute 0x40007C08;
    const register unsigned short int SCM = 31;
    sbit  SCM_bit at RI_ASCR1.B31;
    const register unsigned short int CH30GR11_4 = 30;
    sbit  CH30GR11_4_bit at RI_ASCR1.B30;
    const register unsigned short int CH29GR11_3 = 29;
    sbit  CH29GR11_3_bit at RI_ASCR1.B29;
    const register unsigned short int CH28GR11_2 = 28;
    sbit  CH28GR11_2_bit at RI_ASCR1.B28;
    const register unsigned short int CH27GR11_1 = 27;
    sbit  CH27GR11_1_bit at RI_ASCR1.B27;
    const register unsigned short int VCOMP = 26;
    sbit  VCOMP_bit at RI_ASCR1.B26;
    const register unsigned short int CH25 = 25;
    sbit  CH25_bit at RI_ASCR1.B25;
    const register unsigned short int CH24 = 24;
    sbit  CH24_bit at RI_ASCR1.B24;
    const register unsigned short int CH23 = 23;
    sbit  CH23_bit at RI_ASCR1.B23;
    const register unsigned short int CH22 = 22;
    sbit  CH22_bit at RI_ASCR1.B22;
    const register unsigned short int CH21GR7_4 = 21;
    sbit  CH21GR7_4_bit at RI_ASCR1.B21;
    const register unsigned short int CH20GR7_3 = 20;
    sbit  CH20GR7_3_bit at RI_ASCR1.B20;
    const register unsigned short int CH19GR7_2 = 19;
    sbit  CH19GR7_2_bit at RI_ASCR1.B19;
    const register unsigned short int CH18GR7_1 = 18;
    sbit  CH18GR7_1_bit at RI_ASCR1.B18;
    const register unsigned short int CH31GR7_1 = 16;
    sbit  CH31GR7_1_bit at RI_ASCR1.B16;
    const register unsigned short int CH15GR9_2 = 15;
    sbit  CH15GR9_2_bit at RI_ASCR1.B15;
    const register unsigned short int CH14GR9_1 = 14;
    sbit  CH14GR9_1_bit at RI_ASCR1.B14;
    const register unsigned short int CH13GR8_4 = 13;
    sbit  CH13GR8_4_bit at RI_ASCR1.B13;
    const register unsigned short int CH12GR8_3 = 12;
    sbit  CH12GR8_3_bit at RI_ASCR1.B12;
    const register unsigned short int CH11GR8_2 = 11;
    sbit  CH11GR8_2_bit at RI_ASCR1.B11;
    const register unsigned short int CH10GR8_1 = 10;
    sbit  CH10GR8_1_bit at RI_ASCR1.B10;
    const register unsigned short int CH9GR3_2 = 9;
    sbit  CH9GR3_2_bit at RI_ASCR1.B9;
    const register unsigned short int CH8GR3_1 = 8;
    sbit  CH8GR3_1_bit at RI_ASCR1.B8;
    const register unsigned short int CH7GR2_2 = 7;
    sbit  CH7GR2_2_bit at RI_ASCR1.B7;
    const register unsigned short int CH6GR2_1 = 6;
    sbit  CH6GR2_1_bit at RI_ASCR1.B6;
    const register unsigned short int COMP1_SW1 = 5;
    sbit  COMP1_SW1_bit at RI_ASCR1.B5;
    const register unsigned short int CH31GR11_5 = 4;
    sbit  CH31GR11_5_bit at RI_ASCR1.B4;
    const register unsigned short int CH3GR1_4 = 3;
    sbit  CH3GR1_4_bit at RI_ASCR1.B3;
    const register unsigned short int CH2GR1_3 = 2;
    sbit  CH2GR1_3_bit at RI_ASCR1.B2;
    const register unsigned short int CH1GR1_2 = 1;
    sbit  CH1GR1_2_bit at RI_ASCR1.B1;
    const register unsigned short int CH0GR1_1 = 0;
    sbit  CH0GR1_1_bit at RI_ASCR1.B0;

sfr unsigned long   volatile RI_ASCR2             absolute 0x40007C0C;
    const register unsigned short int GR5_4 = 29;
    sbit  GR5_4_bit at RI_ASCR2.B29;
    const register unsigned short int GR6_4 = 28;
    sbit  GR6_4_bit at RI_ASCR2.B28;
    const register unsigned short int GR6_3 = 27;
    sbit  GR6_3_bit at RI_ASCR2.B27;
    const register unsigned short int GR7_7 = 26;
    sbit  GR7_7_bit at RI_ASCR2.B26;
    const register unsigned short int GR7_6 = 25;
    sbit  GR7_6_bit at RI_ASCR2.B25;
    const register unsigned short int GR7_5 = 24;
    sbit  GR7_5_bit at RI_ASCR2.B24;
    const register unsigned short int GR2_5 = 23;
    sbit  GR2_5_bit at RI_ASCR2.B23;
    const register unsigned short int GR2_4 = 22;
    sbit  GR2_4_bit at RI_ASCR2.B22;
    const register unsigned short int GR2_3 = 21;
    sbit  GR2_3_bit at RI_ASCR2.B21;
    const register unsigned short int GR9_4 = 20;
    sbit  GR9_4_bit at RI_ASCR2.B20;
    const register unsigned short int GR9_3 = 19;
    sbit  GR9_3_bit at RI_ASCR2.B19;
    const register unsigned short int GR3_5 = 18;
    sbit  GR3_5_bit at RI_ASCR2.B18;
    const register unsigned short int GR3_4 = 17;
    sbit  GR3_4_bit at RI_ASCR2.B17;
    const register unsigned short int GR3_3 = 16;
    sbit  GR3_3_bit at RI_ASCR2.B16;
    const register unsigned short int GR4_3 = 11;
    sbit  GR4_3_bit at RI_ASCR2.B11;
    const register unsigned short int GR4_2 = 10;
    sbit  GR4_2_bit at RI_ASCR2.B10;
    const register unsigned short int GR4_1 = 9;
    sbit  GR4_1_bit at RI_ASCR2.B9;
    const register unsigned short int GR5_3 = 8;
    sbit  GR5_3_bit at RI_ASCR2.B8;
    const register unsigned short int GR5_2 = 7;
    sbit  GR5_2_bit at RI_ASCR2.B7;
    const register unsigned short int GR5_1 = 6;
    sbit  GR5_1_bit at RI_ASCR2.B6;
    const register unsigned short int GR6_2 = 5;
    sbit  GR6_2_bit at RI_ASCR2.B5;
    const register unsigned short int GR6_1 = 4;
    sbit  GR6_1_bit at RI_ASCR2.B4;
    const register unsigned short int GR10_4 = 3;
    sbit  GR10_4_bit at RI_ASCR2.B3;
    const register unsigned short int GR10_3 = 2;
    sbit  GR10_3_bit at RI_ASCR2.B2;
    const register unsigned short int GR10_2 = 1;
    sbit  GR10_2_bit at RI_ASCR2.B1;
    const register unsigned short int GR10_1 = 0;
    sbit  GR10_1_bit at RI_ASCR2.B0;

sfr unsigned long   volatile RI_HYSCR1            absolute 0x40007C10;
    const register unsigned short int PB0 = 16;
    sbit  PB0_bit at RI_HYSCR1.B16;
    const register unsigned short int PB1 = 17;
    sbit  PB1_bit at RI_HYSCR1.B17;
    const register unsigned short int PB2 = 18;
    sbit  PB2_bit at RI_HYSCR1.B18;
    const register unsigned short int PB3 = 19;
    sbit  PB3_bit at RI_HYSCR1.B19;
    const register unsigned short int PB4 = 20;
    sbit  PB4_bit at RI_HYSCR1.B20;
    const register unsigned short int PB5 = 21;
    sbit  PB5_bit at RI_HYSCR1.B21;
    const register unsigned short int PB6 = 22;
    sbit  PB6_bit at RI_HYSCR1.B22;
    const register unsigned short int PB7 = 23;
    sbit  PB7_bit at RI_HYSCR1.B23;
    const register unsigned short int PB8 = 24;
    sbit  PB8_bit at RI_HYSCR1.B24;
    const register unsigned short int PB9 = 25;
    sbit  PB9_bit at RI_HYSCR1.B25;
    const register unsigned short int PB10 = 26;
    sbit  PB10_bit at RI_HYSCR1.B26;
    const register unsigned short int PB11 = 27;
    sbit  PB11_bit at RI_HYSCR1.B27;
    const register unsigned short int PB12 = 28;
    sbit  PB12_bit at RI_HYSCR1.B28;
    const register unsigned short int PB13 = 29;
    sbit  PB13_bit at RI_HYSCR1.B29;
    const register unsigned short int PB14 = 30;
    sbit  PB14_bit at RI_HYSCR1.B30;
    const register unsigned short int PB15 = 31;
    sbit  PB15_bit at RI_HYSCR1.B31;
    sbit  PA0_RI_HYSCR1_bit at RI_HYSCR1.B0;
    sbit  PA1_RI_HYSCR1_bit at RI_HYSCR1.B1;
    sbit  PA2_RI_HYSCR1_bit at RI_HYSCR1.B2;
    sbit  PA3_RI_HYSCR1_bit at RI_HYSCR1.B3;
    sbit  PA4_RI_HYSCR1_bit at RI_HYSCR1.B4;
    sbit  PA5_RI_HYSCR1_bit at RI_HYSCR1.B5;
    sbit  PA6_RI_HYSCR1_bit at RI_HYSCR1.B6;
    sbit  PA7_RI_HYSCR1_bit at RI_HYSCR1.B7;
    sbit  PA8_RI_HYSCR1_bit at RI_HYSCR1.B8;
    sbit  PA9_RI_HYSCR1_bit at RI_HYSCR1.B9;
    sbit  PA10_RI_HYSCR1_bit at RI_HYSCR1.B10;
    sbit  PA11_RI_HYSCR1_bit at RI_HYSCR1.B11;
    sbit  PA12_RI_HYSCR1_bit at RI_HYSCR1.B12;
    sbit  PA13_RI_HYSCR1_bit at RI_HYSCR1.B13;
    sbit  PA14_RI_HYSCR1_bit at RI_HYSCR1.B14;
    sbit  PA15_RI_HYSCR1_bit at RI_HYSCR1.B15;

sfr unsigned long   volatile RI_HYSCR2            absolute 0x40007C14;
    const register unsigned short int PD0 = 16;
    sbit  PD0_bit at RI_HYSCR2.B16;
    const register unsigned short int PD1 = 17;
    sbit  PD1_bit at RI_HYSCR2.B17;
    const register unsigned short int PD2 = 18;
    sbit  PD2_bit at RI_HYSCR2.B18;
    const register unsigned short int PD3 = 19;
    sbit  PD3_bit at RI_HYSCR2.B19;
    const register unsigned short int PD4 = 20;
    sbit  PD4_bit at RI_HYSCR2.B20;
    const register unsigned short int PD5 = 21;
    sbit  PD5_bit at RI_HYSCR2.B21;
    const register unsigned short int PD6 = 22;
    sbit  PD6_bit at RI_HYSCR2.B22;
    const register unsigned short int PD7 = 23;
    sbit  PD7_bit at RI_HYSCR2.B23;
    const register unsigned short int PD8 = 24;
    sbit  PD8_bit at RI_HYSCR2.B24;
    const register unsigned short int PD9 = 25;
    sbit  PD9_bit at RI_HYSCR2.B25;
    const register unsigned short int PD10 = 26;
    sbit  PD10_bit at RI_HYSCR2.B26;
    const register unsigned short int PD11 = 27;
    sbit  PD11_bit at RI_HYSCR2.B27;
    const register unsigned short int PD12 = 28;
    sbit  PD12_bit at RI_HYSCR2.B28;
    const register unsigned short int PD13 = 29;
    sbit  PD13_bit at RI_HYSCR2.B29;
    const register unsigned short int PD14 = 30;
    sbit  PD14_bit at RI_HYSCR2.B30;
    const register unsigned short int PD15 = 31;
    sbit  PD15_bit at RI_HYSCR2.B31;
    const register unsigned short int PC0 = 0;
    sbit  PC0_bit at RI_HYSCR2.B0;
    const register unsigned short int PC1 = 1;
    sbit  PC1_bit at RI_HYSCR2.B1;
    const register unsigned short int PC2 = 2;
    sbit  PC2_bit at RI_HYSCR2.B2;
    const register unsigned short int PC3 = 3;
    sbit  PC3_bit at RI_HYSCR2.B3;
    const register unsigned short int PC4 = 4;
    sbit  PC4_bit at RI_HYSCR2.B4;
    const register unsigned short int PC5 = 5;
    sbit  PC5_bit at RI_HYSCR2.B5;
    const register unsigned short int PC6 = 6;
    sbit  PC6_bit at RI_HYSCR2.B6;
    const register unsigned short int PC7 = 7;
    sbit  PC7_bit at RI_HYSCR2.B7;
    const register unsigned short int PC8 = 8;
    sbit  PC8_bit at RI_HYSCR2.B8;
    const register unsigned short int PC9 = 9;
    sbit  PC9_bit at RI_HYSCR2.B9;
    const register unsigned short int PC10 = 10;
    sbit  PC10_bit at RI_HYSCR2.B10;
    const register unsigned short int PC11 = 11;
    sbit  PC11_bit at RI_HYSCR2.B11;
    const register unsigned short int PC12 = 12;
    sbit  PC12_bit at RI_HYSCR2.B12;
    const register unsigned short int PC13 = 13;
    sbit  PC13_bit at RI_HYSCR2.B13;
    const register unsigned short int PC14 = 14;
    sbit  PC14_bit at RI_HYSCR2.B14;
    const register unsigned short int PC15 = 15;
    sbit  PC15_bit at RI_HYSCR2.B15;

sfr unsigned long   volatile RI_HYSCR3            absolute 0x40007C18;
    const register unsigned short int PF0 = 16;
    sbit  PF0_bit at RI_HYSCR3.B16;
    const register unsigned short int PF1 = 17;
    sbit  PF1_bit at RI_HYSCR3.B17;
    const register unsigned short int PF2 = 18;
    sbit  PF2_bit at RI_HYSCR3.B18;
    const register unsigned short int PF3 = 19;
    sbit  PF3_bit at RI_HYSCR3.B19;
    const register unsigned short int PF4 = 20;
    sbit  PF4_bit at RI_HYSCR3.B20;
    const register unsigned short int PF5 = 21;
    sbit  PF5_bit at RI_HYSCR3.B21;
    const register unsigned short int PF6 = 22;
    sbit  PF6_bit at RI_HYSCR3.B22;
    const register unsigned short int PF7 = 23;
    sbit  PF7_bit at RI_HYSCR3.B23;
    const register unsigned short int PF8 = 24;
    sbit  PF8_bit at RI_HYSCR3.B24;
    const register unsigned short int PF9 = 25;
    sbit  PF9_bit at RI_HYSCR3.B25;
    const register unsigned short int PF10 = 26;
    sbit  PF10_bit at RI_HYSCR3.B26;
    const register unsigned short int PF11 = 27;
    sbit  PF11_bit at RI_HYSCR3.B27;
    const register unsigned short int PF12 = 28;
    sbit  PF12_bit at RI_HYSCR3.B28;
    const register unsigned short int PF13 = 29;
    sbit  PF13_bit at RI_HYSCR3.B29;
    const register unsigned short int PF14 = 30;
    sbit  PF14_bit at RI_HYSCR3.B30;
    const register unsigned short int PF15 = 31;
    sbit  PF15_bit at RI_HYSCR3.B31;
    const register unsigned short int PE0 = 0;
    sbit  PE0_bit at RI_HYSCR3.B0;
    const register unsigned short int PE1 = 1;
    sbit  PE1_bit at RI_HYSCR3.B1;
    const register unsigned short int PE2 = 2;
    sbit  PE2_bit at RI_HYSCR3.B2;
    const register unsigned short int PE3 = 3;
    sbit  PE3_bit at RI_HYSCR3.B3;
    const register unsigned short int PE4 = 4;
    sbit  PE4_bit at RI_HYSCR3.B4;
    const register unsigned short int PE5 = 5;
    sbit  PE5_bit at RI_HYSCR3.B5;
    const register unsigned short int PE6 = 6;
    sbit  PE6_bit at RI_HYSCR3.B6;
    const register unsigned short int PE7 = 7;
    sbit  PE7_bit at RI_HYSCR3.B7;
    const register unsigned short int PE8 = 8;
    sbit  PE8_bit at RI_HYSCR3.B8;
    const register unsigned short int PE9 = 9;
    sbit  PE9_bit at RI_HYSCR3.B9;
    const register unsigned short int PE10 = 10;
    sbit  PE10_bit at RI_HYSCR3.B10;
    const register unsigned short int PE11 = 11;
    sbit  PE11_bit at RI_HYSCR3.B11;
    const register unsigned short int PE12 = 12;
    sbit  PE12_bit at RI_HYSCR3.B12;
    const register unsigned short int PE13 = 13;
    sbit  PE13_bit at RI_HYSCR3.B13;
    const register unsigned short int PE14 = 14;
    sbit  PE14_bit at RI_HYSCR3.B14;
    const register unsigned short int PE15 = 15;
    sbit  PE15_bit at RI_HYSCR3.B15;

sfr unsigned long   volatile RI_HYSCR4            absolute 0x40007C1C;
    const register unsigned short int PG0 = 0;
    sbit  PG0_bit at RI_HYSCR4.B0;
    const register unsigned short int PG1 = 1;
    sbit  PG1_bit at RI_HYSCR4.B1;
    const register unsigned short int PG2 = 2;
    sbit  PG2_bit at RI_HYSCR4.B2;
    const register unsigned short int PG3 = 3;
    sbit  PG3_bit at RI_HYSCR4.B3;
    const register unsigned short int PG4 = 4;
    sbit  PG4_bit at RI_HYSCR4.B4;
    const register unsigned short int PG5 = 5;
    sbit  PG5_bit at RI_HYSCR4.B5;
    const register unsigned short int PG6 = 6;
    sbit  PG6_bit at RI_HYSCR4.B6;
    const register unsigned short int PG7 = 7;
    sbit  PG7_bit at RI_HYSCR4.B7;
    const register unsigned short int PG8 = 8;
    sbit  PG8_bit at RI_HYSCR4.B8;
    const register unsigned short int PG9 = 9;
    sbit  PG9_bit at RI_HYSCR4.B9;
    const register unsigned short int PG10 = 10;
    sbit  PG10_bit at RI_HYSCR4.B10;
    const register unsigned short int PG11 = 11;
    sbit  PG11_bit at RI_HYSCR4.B11;
    const register unsigned short int PG12 = 12;
    sbit  PG12_bit at RI_HYSCR4.B12;
    const register unsigned short int PG13 = 13;
    sbit  PG13_bit at RI_HYSCR4.B13;
    const register unsigned short int PG14 = 14;
    sbit  PG14_bit at RI_HYSCR4.B14;
    const register unsigned short int PG15 = 15;
    sbit  PG15_bit at RI_HYSCR4.B15;

sfr unsigned long   volatile RI_ASMR1             absolute 0x40007C20;
    sbit  PA0_RI_ASMR1_bit at RI_ASMR1.B0;
    sbit  PA1_RI_ASMR1_bit at RI_ASMR1.B1;
    sbit  PA2_RI_ASMR1_bit at RI_ASMR1.B2;
    sbit  PA3_RI_ASMR1_bit at RI_ASMR1.B3;
    sbit  PA4_RI_ASMR1_bit at RI_ASMR1.B4;
    sbit  PA5_RI_ASMR1_bit at RI_ASMR1.B5;
    sbit  PA6_RI_ASMR1_bit at RI_ASMR1.B6;
    sbit  PA7_RI_ASMR1_bit at RI_ASMR1.B7;
    sbit  PA8_RI_ASMR1_bit at RI_ASMR1.B8;
    sbit  PA9_RI_ASMR1_bit at RI_ASMR1.B9;
    sbit  PA10_RI_ASMR1_bit at RI_ASMR1.B10;
    sbit  PA11_RI_ASMR1_bit at RI_ASMR1.B11;
    sbit  PA12_RI_ASMR1_bit at RI_ASMR1.B12;
    sbit  PA13_RI_ASMR1_bit at RI_ASMR1.B13;
    sbit  PA14_RI_ASMR1_bit at RI_ASMR1.B14;
    sbit  PA15_RI_ASMR1_bit at RI_ASMR1.B15;

sfr unsigned long   volatile RI_CMR1              absolute 0x40007C24;
    sbit  PA0_RI_CMR1_bit at RI_CMR1.B0;
    sbit  PA1_RI_CMR1_bit at RI_CMR1.B1;
    sbit  PA2_RI_CMR1_bit at RI_CMR1.B2;
    sbit  PA3_RI_CMR1_bit at RI_CMR1.B3;
    sbit  PA4_RI_CMR1_bit at RI_CMR1.B4;
    sbit  PA5_RI_CMR1_bit at RI_CMR1.B5;
    sbit  PA6_RI_CMR1_bit at RI_CMR1.B6;
    sbit  PA7_RI_CMR1_bit at RI_CMR1.B7;
    sbit  PA8_RI_CMR1_bit at RI_CMR1.B8;
    sbit  PA9_RI_CMR1_bit at RI_CMR1.B9;
    sbit  PA10_RI_CMR1_bit at RI_CMR1.B10;
    sbit  PA11_RI_CMR1_bit at RI_CMR1.B11;
    sbit  PA12_RI_CMR1_bit at RI_CMR1.B12;
    sbit  PA13_RI_CMR1_bit at RI_CMR1.B13;
    sbit  PA14_RI_CMR1_bit at RI_CMR1.B14;
    sbit  PA15_RI_CMR1_bit at RI_CMR1.B15;

sfr unsigned long   volatile RI_CICR1             absolute 0x40007C28;
    sbit  PA0_RI_CICR1_bit at RI_CICR1.B0;
    sbit  PA1_RI_CICR1_bit at RI_CICR1.B1;
    sbit  PA2_RI_CICR1_bit at RI_CICR1.B2;
    sbit  PA3_RI_CICR1_bit at RI_CICR1.B3;
    sbit  PA4_RI_CICR1_bit at RI_CICR1.B4;
    sbit  PA5_RI_CICR1_bit at RI_CICR1.B5;
    sbit  PA6_RI_CICR1_bit at RI_CICR1.B6;
    sbit  PA7_RI_CICR1_bit at RI_CICR1.B7;
    sbit  PA8_RI_CICR1_bit at RI_CICR1.B8;
    sbit  PA9_RI_CICR1_bit at RI_CICR1.B9;
    sbit  PA10_RI_CICR1_bit at RI_CICR1.B10;
    sbit  PA11_RI_CICR1_bit at RI_CICR1.B11;
    sbit  PA12_RI_CICR1_bit at RI_CICR1.B12;
    sbit  PA13_RI_CICR1_bit at RI_CICR1.B13;
    sbit  PA14_RI_CICR1_bit at RI_CICR1.B14;
    sbit  PA15_RI_CICR1_bit at RI_CICR1.B15;

sfr unsigned long   volatile RI_ASMR2             absolute 0x40007C2C;
    sbit  PB0_RI_ASMR2_bit at RI_ASMR2.B0;
    sbit  PB1_RI_ASMR2_bit at RI_ASMR2.B1;
    sbit  PB2_RI_ASMR2_bit at RI_ASMR2.B2;
    sbit  PB3_RI_ASMR2_bit at RI_ASMR2.B3;
    sbit  PB4_RI_ASMR2_bit at RI_ASMR2.B4;
    sbit  PB5_RI_ASMR2_bit at RI_ASMR2.B5;
    sbit  PB6_RI_ASMR2_bit at RI_ASMR2.B6;
    sbit  PB7_RI_ASMR2_bit at RI_ASMR2.B7;
    sbit  PB8_RI_ASMR2_bit at RI_ASMR2.B8;
    sbit  PB9_RI_ASMR2_bit at RI_ASMR2.B9;
    sbit  PB10_RI_ASMR2_bit at RI_ASMR2.B10;
    sbit  PB11_RI_ASMR2_bit at RI_ASMR2.B11;
    sbit  PB12_RI_ASMR2_bit at RI_ASMR2.B12;
    sbit  PB13_RI_ASMR2_bit at RI_ASMR2.B13;
    sbit  PB14_RI_ASMR2_bit at RI_ASMR2.B14;
    sbit  PB15_RI_ASMR2_bit at RI_ASMR2.B15;

sfr unsigned long   volatile RI_CMR2              absolute 0x40007C30;
    sbit  PB0_RI_CMR2_bit at RI_CMR2.B0;
    sbit  PB1_RI_CMR2_bit at RI_CMR2.B1;
    sbit  PB2_RI_CMR2_bit at RI_CMR2.B2;
    sbit  PB3_RI_CMR2_bit at RI_CMR2.B3;
    sbit  PB4_RI_CMR2_bit at RI_CMR2.B4;
    sbit  PB5_RI_CMR2_bit at RI_CMR2.B5;
    sbit  PB6_RI_CMR2_bit at RI_CMR2.B6;
    sbit  PB7_RI_CMR2_bit at RI_CMR2.B7;
    sbit  PB8_RI_CMR2_bit at RI_CMR2.B8;
    sbit  PB9_RI_CMR2_bit at RI_CMR2.B9;
    sbit  PB10_RI_CMR2_bit at RI_CMR2.B10;
    sbit  PB11_RI_CMR2_bit at RI_CMR2.B11;
    sbit  PB12_RI_CMR2_bit at RI_CMR2.B12;
    sbit  PB13_RI_CMR2_bit at RI_CMR2.B13;
    sbit  PB14_RI_CMR2_bit at RI_CMR2.B14;
    sbit  PB15_RI_CMR2_bit at RI_CMR2.B15;

sfr unsigned long   volatile RI_CICR2             absolute 0x40007C34;
    sbit  PB0_RI_CICR2_bit at RI_CICR2.B0;
    sbit  PB1_RI_CICR2_bit at RI_CICR2.B1;
    sbit  PB2_RI_CICR2_bit at RI_CICR2.B2;
    sbit  PB3_RI_CICR2_bit at RI_CICR2.B3;
    sbit  PB4_RI_CICR2_bit at RI_CICR2.B4;
    sbit  PB5_RI_CICR2_bit at RI_CICR2.B5;
    sbit  PB6_RI_CICR2_bit at RI_CICR2.B6;
    sbit  PB7_RI_CICR2_bit at RI_CICR2.B7;
    sbit  PB8_RI_CICR2_bit at RI_CICR2.B8;
    sbit  PB9_RI_CICR2_bit at RI_CICR2.B9;
    sbit  PB10_RI_CICR2_bit at RI_CICR2.B10;
    sbit  PB11_RI_CICR2_bit at RI_CICR2.B11;
    sbit  PB12_RI_CICR2_bit at RI_CICR2.B12;
    sbit  PB13_RI_CICR2_bit at RI_CICR2.B13;
    sbit  PB14_RI_CICR2_bit at RI_CICR2.B14;
    sbit  PB15_RI_CICR2_bit at RI_CICR2.B15;

sfr unsigned long   volatile RI_ASMR3             absolute 0x40007C38;
    sbit  PC0_RI_ASMR3_bit at RI_ASMR3.B0;
    sbit  PC1_RI_ASMR3_bit at RI_ASMR3.B1;
    sbit  PC2_RI_ASMR3_bit at RI_ASMR3.B2;
    sbit  PC3_RI_ASMR3_bit at RI_ASMR3.B3;
    sbit  PC4_RI_ASMR3_bit at RI_ASMR3.B4;
    sbit  PC5_RI_ASMR3_bit at RI_ASMR3.B5;
    sbit  PC6_RI_ASMR3_bit at RI_ASMR3.B6;
    sbit  PC7_RI_ASMR3_bit at RI_ASMR3.B7;
    sbit  PC8_RI_ASMR3_bit at RI_ASMR3.B8;
    sbit  PC9_RI_ASMR3_bit at RI_ASMR3.B9;
    sbit  PC10_RI_ASMR3_bit at RI_ASMR3.B10;
    sbit  PC11_RI_ASMR3_bit at RI_ASMR3.B11;
    sbit  PC12_RI_ASMR3_bit at RI_ASMR3.B12;
    sbit  PC13_RI_ASMR3_bit at RI_ASMR3.B13;
    sbit  PC14_RI_ASMR3_bit at RI_ASMR3.B14;
    sbit  PC15_RI_ASMR3_bit at RI_ASMR3.B15;

sfr unsigned long   volatile RI_CMR3              absolute 0x40007C3C;
    sbit  PC0_RI_CMR3_bit at RI_CMR3.B0;
    sbit  PC1_RI_CMR3_bit at RI_CMR3.B1;
    sbit  PC2_RI_CMR3_bit at RI_CMR3.B2;
    sbit  PC3_RI_CMR3_bit at RI_CMR3.B3;
    sbit  PC4_RI_CMR3_bit at RI_CMR3.B4;
    sbit  PC5_RI_CMR3_bit at RI_CMR3.B5;
    sbit  PC6_RI_CMR3_bit at RI_CMR3.B6;
    sbit  PC7_RI_CMR3_bit at RI_CMR3.B7;
    sbit  PC8_RI_CMR3_bit at RI_CMR3.B8;
    sbit  PC9_RI_CMR3_bit at RI_CMR3.B9;
    sbit  PC10_RI_CMR3_bit at RI_CMR3.B10;
    sbit  PC11_RI_CMR3_bit at RI_CMR3.B11;
    sbit  PC12_RI_CMR3_bit at RI_CMR3.B12;
    sbit  PC13_RI_CMR3_bit at RI_CMR3.B13;
    sbit  PC14_RI_CMR3_bit at RI_CMR3.B14;
    sbit  PC15_RI_CMR3_bit at RI_CMR3.B15;

sfr unsigned long   volatile RI_CICR3             absolute 0x40007C40;
    sbit  PC0_RI_CICR3_bit at RI_CICR3.B0;
    sbit  PC1_RI_CICR3_bit at RI_CICR3.B1;
    sbit  PC2_RI_CICR3_bit at RI_CICR3.B2;
    sbit  PC3_RI_CICR3_bit at RI_CICR3.B3;
    sbit  PC4_RI_CICR3_bit at RI_CICR3.B4;
    sbit  PC5_RI_CICR3_bit at RI_CICR3.B5;
    sbit  PC6_RI_CICR3_bit at RI_CICR3.B6;
    sbit  PC7_RI_CICR3_bit at RI_CICR3.B7;
    sbit  PC8_RI_CICR3_bit at RI_CICR3.B8;
    sbit  PC9_RI_CICR3_bit at RI_CICR3.B9;
    sbit  PC10_RI_CICR3_bit at RI_CICR3.B10;
    sbit  PC11_RI_CICR3_bit at RI_CICR3.B11;
    sbit  PC12_RI_CICR3_bit at RI_CICR3.B12;
    sbit  PC13_RI_CICR3_bit at RI_CICR3.B13;
    sbit  PC14_RI_CICR3_bit at RI_CICR3.B14;
    sbit  PC15_RI_CICR3_bit at RI_CICR3.B15;

sfr unsigned long   volatile RI_ASMR4             absolute 0x40007C44;
    sbit  PF0_RI_ASMR4_bit at RI_ASMR4.B0;
    sbit  PF1_RI_ASMR4_bit at RI_ASMR4.B1;
    sbit  PF2_RI_ASMR4_bit at RI_ASMR4.B2;
    sbit  PF3_RI_ASMR4_bit at RI_ASMR4.B3;
    sbit  PF4_RI_ASMR4_bit at RI_ASMR4.B4;
    sbit  PF5_RI_ASMR4_bit at RI_ASMR4.B5;
    sbit  PF6_RI_ASMR4_bit at RI_ASMR4.B6;
    sbit  PF7_RI_ASMR4_bit at RI_ASMR4.B7;
    sbit  PF8_RI_ASMR4_bit at RI_ASMR4.B8;
    sbit  PF9_RI_ASMR4_bit at RI_ASMR4.B9;
    sbit  PF10_RI_ASMR4_bit at RI_ASMR4.B10;
    sbit  PF11_RI_ASMR4_bit at RI_ASMR4.B11;
    sbit  PF12_RI_ASMR4_bit at RI_ASMR4.B12;
    sbit  PF13_RI_ASMR4_bit at RI_ASMR4.B13;
    sbit  PF14_RI_ASMR4_bit at RI_ASMR4.B14;
    sbit  PF15_RI_ASMR4_bit at RI_ASMR4.B15;

sfr unsigned long   volatile RI_CMR4              absolute 0x40007C48;
    sbit  PF0_RI_CMR4_bit at RI_CMR4.B0;
    sbit  PF1_RI_CMR4_bit at RI_CMR4.B1;
    sbit  PF2_RI_CMR4_bit at RI_CMR4.B2;
    sbit  PF3_RI_CMR4_bit at RI_CMR4.B3;
    sbit  PF4_RI_CMR4_bit at RI_CMR4.B4;
    sbit  PF5_RI_CMR4_bit at RI_CMR4.B5;
    sbit  PF6_RI_CMR4_bit at RI_CMR4.B6;
    sbit  PF7_RI_CMR4_bit at RI_CMR4.B7;
    sbit  PF8_RI_CMR4_bit at RI_CMR4.B8;
    sbit  PF9_RI_CMR4_bit at RI_CMR4.B9;
    sbit  PF10_RI_CMR4_bit at RI_CMR4.B10;
    sbit  PF11_RI_CMR4_bit at RI_CMR4.B11;
    sbit  PF12_RI_CMR4_bit at RI_CMR4.B12;
    sbit  PF13_RI_CMR4_bit at RI_CMR4.B13;
    sbit  PF14_RI_CMR4_bit at RI_CMR4.B14;
    sbit  PF15_RI_CMR4_bit at RI_CMR4.B15;

sfr unsigned long   volatile RI_CICR4             absolute 0x40007C4C;
    sbit  PF0_RI_CICR4_bit at RI_CICR4.B0;
    sbit  PF1_RI_CICR4_bit at RI_CICR4.B1;
    sbit  PF2_RI_CICR4_bit at RI_CICR4.B2;
    sbit  PF3_RI_CICR4_bit at RI_CICR4.B3;
    sbit  PF4_RI_CICR4_bit at RI_CICR4.B4;
    sbit  PF5_RI_CICR4_bit at RI_CICR4.B5;
    sbit  PF6_RI_CICR4_bit at RI_CICR4.B6;
    sbit  PF7_RI_CICR4_bit at RI_CICR4.B7;
    sbit  PF8_RI_CICR4_bit at RI_CICR4.B8;
    sbit  PF9_RI_CICR4_bit at RI_CICR4.B9;
    sbit  PF10_RI_CICR4_bit at RI_CICR4.B10;
    sbit  PF11_RI_CICR4_bit at RI_CICR4.B11;
    sbit  PF12_RI_CICR4_bit at RI_CICR4.B12;
    sbit  PF13_RI_CICR4_bit at RI_CICR4.B13;
    sbit  PF14_RI_CICR4_bit at RI_CICR4.B14;
    sbit  PF15_RI_CICR4_bit at RI_CICR4.B15;

sfr unsigned long   volatile RI_ASMR5             absolute 0x40007C50;
    sbit  PG0_RI_ASMR5_bit at RI_ASMR5.B0;
    sbit  PG1_RI_ASMR5_bit at RI_ASMR5.B1;
    sbit  PG2_RI_ASMR5_bit at RI_ASMR5.B2;
    sbit  PG3_RI_ASMR5_bit at RI_ASMR5.B3;
    sbit  PG4_RI_ASMR5_bit at RI_ASMR5.B4;
    sbit  PG5_RI_ASMR5_bit at RI_ASMR5.B5;
    sbit  PG6_RI_ASMR5_bit at RI_ASMR5.B6;
    sbit  PG7_RI_ASMR5_bit at RI_ASMR5.B7;
    sbit  PG8_RI_ASMR5_bit at RI_ASMR5.B8;
    sbit  PG9_RI_ASMR5_bit at RI_ASMR5.B9;
    sbit  PG10_RI_ASMR5_bit at RI_ASMR5.B10;
    sbit  PG11_RI_ASMR5_bit at RI_ASMR5.B11;
    sbit  PG12_RI_ASMR5_bit at RI_ASMR5.B12;
    sbit  PG13_RI_ASMR5_bit at RI_ASMR5.B13;
    sbit  PG14_RI_ASMR5_bit at RI_ASMR5.B14;
    sbit  PG15_RI_ASMR5_bit at RI_ASMR5.B15;

sfr unsigned long   volatile RI_CMR5              absolute 0x40007C54;
    sbit  PG0_RI_CMR5_bit at RI_CMR5.B0;
    sbit  PG1_RI_CMR5_bit at RI_CMR5.B1;
    sbit  PG2_RI_CMR5_bit at RI_CMR5.B2;
    sbit  PG3_RI_CMR5_bit at RI_CMR5.B3;
    sbit  PG4_RI_CMR5_bit at RI_CMR5.B4;
    sbit  PG5_RI_CMR5_bit at RI_CMR5.B5;
    sbit  PG6_RI_CMR5_bit at RI_CMR5.B6;
    sbit  PG7_RI_CMR5_bit at RI_CMR5.B7;
    sbit  PG8_RI_CMR5_bit at RI_CMR5.B8;
    sbit  PG9_RI_CMR5_bit at RI_CMR5.B9;
    sbit  PG10_RI_CMR5_bit at RI_CMR5.B10;
    sbit  PG11_RI_CMR5_bit at RI_CMR5.B11;
    sbit  PG12_RI_CMR5_bit at RI_CMR5.B12;
    sbit  PG13_RI_CMR5_bit at RI_CMR5.B13;
    sbit  PG14_RI_CMR5_bit at RI_CMR5.B14;
    sbit  PG15_RI_CMR5_bit at RI_CMR5.B15;

sfr unsigned long   volatile RI_CICR5             absolute 0x40007C58;
    sbit  PG0_RI_CICR5_bit at RI_CICR5.B0;
    sbit  PG1_RI_CICR5_bit at RI_CICR5.B1;
    sbit  PG2_RI_CICR5_bit at RI_CICR5.B2;
    sbit  PG3_RI_CICR5_bit at RI_CICR5.B3;
    sbit  PG4_RI_CICR5_bit at RI_CICR5.B4;
    sbit  PG5_RI_CICR5_bit at RI_CICR5.B5;
    sbit  PG6_RI_CICR5_bit at RI_CICR5.B6;
    sbit  PG7_RI_CICR5_bit at RI_CICR5.B7;
    sbit  PG8_RI_CICR5_bit at RI_CICR5.B8;
    sbit  PG9_RI_CICR5_bit at RI_CICR5.B9;
    sbit  PG10_RI_CICR5_bit at RI_CICR5.B10;
    sbit  PG11_RI_CICR5_bit at RI_CICR5.B11;
    sbit  PG12_RI_CICR5_bit at RI_CICR5.B12;
    sbit  PG13_RI_CICR5_bit at RI_CICR5.B13;
    sbit  PG14_RI_CICR5_bit at RI_CICR5.B14;
    sbit  PG15_RI_CICR5_bit at RI_CICR5.B15;

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
    const register unsigned short int DCE = 7;
    sbit  DCE_bit at RTC_CR.B7;
    const register unsigned short int FMT = 6;
    sbit  FMT_bit at RTC_CR.B6;
    const register unsigned short int BYPSHAD = 5;
    sbit  BYPSHAD_bit at RTC_CR.B5;
    const register unsigned short int REFCKON = 4;
    sbit  REFCKON_bit at RTC_CR.B4;
    const register unsigned short int TSEDGE = 3;
    sbit  TSEDGE_bit at RTC_CR.B3;
    const register unsigned short int WCKSEL0 = 0;
    sbit  WCKSEL0_bit at RTC_CR.B0;
    const register unsigned short int WCKSEL1 = 1;
    sbit  WCKSEL1_bit at RTC_CR.B1;
    const register unsigned short int WCKSEL2 = 2;
    sbit  WCKSEL2_bit at RTC_CR.B2;

sfr unsigned long   volatile RTC_ISR              absolute 0x4000280C;
    const register unsigned short int RECALPF = 16;
    sbit  RECALPF_bit at RTC_ISR.B16;
    const register unsigned short int TAMP3F = 15;
    sbit  TAMP3F_bit at RTC_ISR.B15;
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

sfr unsigned long   volatile RTC_CALIBR           absolute 0x40002818;
    const register unsigned short int DCS = 7;
    sbit  DCS_bit at RTC_CALIBR.B7;
    const register unsigned short int DC0 = 0;
    sbit  DC0_bit at RTC_CALIBR.B0;
    const register unsigned short int DC1 = 1;
    sbit  DC1_bit at RTC_CALIBR.B1;
    const register unsigned short int DC2 = 2;
    sbit  DC2_bit at RTC_CALIBR.B2;
    const register unsigned short int DC3 = 3;
    sbit  DC3_bit at RTC_CALIBR.B3;
    const register unsigned short int DC4 = 4;
    sbit  DC4_bit at RTC_CALIBR.B4;

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
    const register unsigned short int ALARMOUTTYPE = 18;
    sbit  ALARMOUTTYPE_bit at RTC_TAFCR.B18;
    const register unsigned short int TAMPPUDIS = 15;
    sbit  TAMPPUDIS_bit at RTC_TAFCR.B15;
    const register unsigned short int TAMPPRCH0 = 13;
    sbit  TAMPPRCH0_bit at RTC_TAFCR.B13;
    const register unsigned short int TAMPPRCH1 = 14;
    sbit  TAMPPRCH1_bit at RTC_TAFCR.B14;
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
    const register unsigned short int TAMP3TRG = 6;
    sbit  TAMP3TRG_bit at RTC_TAFCR.B6;
    const register unsigned short int TAMP3E = 5;
    sbit  TAMP3E_bit at RTC_TAFCR.B5;
    const register unsigned short int TAMP2TRG = 4;
    sbit  TAMP2TRG_bit at RTC_TAFCR.B4;
    const register unsigned short int TAMP2E = 3;
    sbit  TAMP2E_bit at RTC_TAFCR.B3;
    const register unsigned short int TAMPIE = 2;
    sbit  TAMPIE_bit at RTC_TAFCR.B2;
    const register unsigned short int TAMP1ETRG = 1;
    sbit  TAMP1ETRG_bit at RTC_TAFCR.B1;
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

sfr unsigned long   volatile RTC_BKP5R            absolute 0x40002864;
    sbit  BKP0_RTC_BKP5R_bit at RTC_BKP5R.B0;
    sbit  BKP1_RTC_BKP5R_bit at RTC_BKP5R.B1;
    sbit  BKP2_RTC_BKP5R_bit at RTC_BKP5R.B2;
    sbit  BKP3_RTC_BKP5R_bit at RTC_BKP5R.B3;
    sbit  BKP4_RTC_BKP5R_bit at RTC_BKP5R.B4;
    sbit  BKP5_RTC_BKP5R_bit at RTC_BKP5R.B5;
    sbit  BKP6_RTC_BKP5R_bit at RTC_BKP5R.B6;
    sbit  BKP7_RTC_BKP5R_bit at RTC_BKP5R.B7;
    sbit  BKP8_RTC_BKP5R_bit at RTC_BKP5R.B8;
    sbit  BKP9_RTC_BKP5R_bit at RTC_BKP5R.B9;
    sbit  BKP10_RTC_BKP5R_bit at RTC_BKP5R.B10;
    sbit  BKP11_RTC_BKP5R_bit at RTC_BKP5R.B11;
    sbit  BKP12_RTC_BKP5R_bit at RTC_BKP5R.B12;
    sbit  BKP13_RTC_BKP5R_bit at RTC_BKP5R.B13;
    sbit  BKP14_RTC_BKP5R_bit at RTC_BKP5R.B14;
    sbit  BKP15_RTC_BKP5R_bit at RTC_BKP5R.B15;
    sbit  BKP16_RTC_BKP5R_bit at RTC_BKP5R.B16;
    sbit  BKP17_RTC_BKP5R_bit at RTC_BKP5R.B17;
    sbit  BKP18_RTC_BKP5R_bit at RTC_BKP5R.B18;
    sbit  BKP19_RTC_BKP5R_bit at RTC_BKP5R.B19;
    sbit  BKP20_RTC_BKP5R_bit at RTC_BKP5R.B20;
    sbit  BKP21_RTC_BKP5R_bit at RTC_BKP5R.B21;
    sbit  BKP22_RTC_BKP5R_bit at RTC_BKP5R.B22;
    sbit  BKP23_RTC_BKP5R_bit at RTC_BKP5R.B23;
    sbit  BKP24_RTC_BKP5R_bit at RTC_BKP5R.B24;
    sbit  BKP25_RTC_BKP5R_bit at RTC_BKP5R.B25;
    sbit  BKP26_RTC_BKP5R_bit at RTC_BKP5R.B26;
    sbit  BKP27_RTC_BKP5R_bit at RTC_BKP5R.B27;
    sbit  BKP28_RTC_BKP5R_bit at RTC_BKP5R.B28;
    sbit  BKP29_RTC_BKP5R_bit at RTC_BKP5R.B29;
    sbit  BKP30_RTC_BKP5R_bit at RTC_BKP5R.B30;
    sbit  BKP31_RTC_BKP5R_bit at RTC_BKP5R.B31;

sfr unsigned long   volatile RTC_BKP6R            absolute 0x40002868;
    sbit  BKP0_RTC_BKP6R_bit at RTC_BKP6R.B0;
    sbit  BKP1_RTC_BKP6R_bit at RTC_BKP6R.B1;
    sbit  BKP2_RTC_BKP6R_bit at RTC_BKP6R.B2;
    sbit  BKP3_RTC_BKP6R_bit at RTC_BKP6R.B3;
    sbit  BKP4_RTC_BKP6R_bit at RTC_BKP6R.B4;
    sbit  BKP5_RTC_BKP6R_bit at RTC_BKP6R.B5;
    sbit  BKP6_RTC_BKP6R_bit at RTC_BKP6R.B6;
    sbit  BKP7_RTC_BKP6R_bit at RTC_BKP6R.B7;
    sbit  BKP8_RTC_BKP6R_bit at RTC_BKP6R.B8;
    sbit  BKP9_RTC_BKP6R_bit at RTC_BKP6R.B9;
    sbit  BKP10_RTC_BKP6R_bit at RTC_BKP6R.B10;
    sbit  BKP11_RTC_BKP6R_bit at RTC_BKP6R.B11;
    sbit  BKP12_RTC_BKP6R_bit at RTC_BKP6R.B12;
    sbit  BKP13_RTC_BKP6R_bit at RTC_BKP6R.B13;
    sbit  BKP14_RTC_BKP6R_bit at RTC_BKP6R.B14;
    sbit  BKP15_RTC_BKP6R_bit at RTC_BKP6R.B15;
    sbit  BKP16_RTC_BKP6R_bit at RTC_BKP6R.B16;
    sbit  BKP17_RTC_BKP6R_bit at RTC_BKP6R.B17;
    sbit  BKP18_RTC_BKP6R_bit at RTC_BKP6R.B18;
    sbit  BKP19_RTC_BKP6R_bit at RTC_BKP6R.B19;
    sbit  BKP20_RTC_BKP6R_bit at RTC_BKP6R.B20;
    sbit  BKP21_RTC_BKP6R_bit at RTC_BKP6R.B21;
    sbit  BKP22_RTC_BKP6R_bit at RTC_BKP6R.B22;
    sbit  BKP23_RTC_BKP6R_bit at RTC_BKP6R.B23;
    sbit  BKP24_RTC_BKP6R_bit at RTC_BKP6R.B24;
    sbit  BKP25_RTC_BKP6R_bit at RTC_BKP6R.B25;
    sbit  BKP26_RTC_BKP6R_bit at RTC_BKP6R.B26;
    sbit  BKP27_RTC_BKP6R_bit at RTC_BKP6R.B27;
    sbit  BKP28_RTC_BKP6R_bit at RTC_BKP6R.B28;
    sbit  BKP29_RTC_BKP6R_bit at RTC_BKP6R.B29;
    sbit  BKP30_RTC_BKP6R_bit at RTC_BKP6R.B30;
    sbit  BKP31_RTC_BKP6R_bit at RTC_BKP6R.B31;

sfr unsigned long   volatile RTC_BKP7R            absolute 0x4000286C;
    sbit  BKP0_RTC_BKP7R_bit at RTC_BKP7R.B0;
    sbit  BKP1_RTC_BKP7R_bit at RTC_BKP7R.B1;
    sbit  BKP2_RTC_BKP7R_bit at RTC_BKP7R.B2;
    sbit  BKP3_RTC_BKP7R_bit at RTC_BKP7R.B3;
    sbit  BKP4_RTC_BKP7R_bit at RTC_BKP7R.B4;
    sbit  BKP5_RTC_BKP7R_bit at RTC_BKP7R.B5;
    sbit  BKP6_RTC_BKP7R_bit at RTC_BKP7R.B6;
    sbit  BKP7_RTC_BKP7R_bit at RTC_BKP7R.B7;
    sbit  BKP8_RTC_BKP7R_bit at RTC_BKP7R.B8;
    sbit  BKP9_RTC_BKP7R_bit at RTC_BKP7R.B9;
    sbit  BKP10_RTC_BKP7R_bit at RTC_BKP7R.B10;
    sbit  BKP11_RTC_BKP7R_bit at RTC_BKP7R.B11;
    sbit  BKP12_RTC_BKP7R_bit at RTC_BKP7R.B12;
    sbit  BKP13_RTC_BKP7R_bit at RTC_BKP7R.B13;
    sbit  BKP14_RTC_BKP7R_bit at RTC_BKP7R.B14;
    sbit  BKP15_RTC_BKP7R_bit at RTC_BKP7R.B15;
    sbit  BKP16_RTC_BKP7R_bit at RTC_BKP7R.B16;
    sbit  BKP17_RTC_BKP7R_bit at RTC_BKP7R.B17;
    sbit  BKP18_RTC_BKP7R_bit at RTC_BKP7R.B18;
    sbit  BKP19_RTC_BKP7R_bit at RTC_BKP7R.B19;
    sbit  BKP20_RTC_BKP7R_bit at RTC_BKP7R.B20;
    sbit  BKP21_RTC_BKP7R_bit at RTC_BKP7R.B21;
    sbit  BKP22_RTC_BKP7R_bit at RTC_BKP7R.B22;
    sbit  BKP23_RTC_BKP7R_bit at RTC_BKP7R.B23;
    sbit  BKP24_RTC_BKP7R_bit at RTC_BKP7R.B24;
    sbit  BKP25_RTC_BKP7R_bit at RTC_BKP7R.B25;
    sbit  BKP26_RTC_BKP7R_bit at RTC_BKP7R.B26;
    sbit  BKP27_RTC_BKP7R_bit at RTC_BKP7R.B27;
    sbit  BKP28_RTC_BKP7R_bit at RTC_BKP7R.B28;
    sbit  BKP29_RTC_BKP7R_bit at RTC_BKP7R.B29;
    sbit  BKP30_RTC_BKP7R_bit at RTC_BKP7R.B30;
    sbit  BKP31_RTC_BKP7R_bit at RTC_BKP7R.B31;

sfr unsigned long   volatile RTC_BKP8R            absolute 0x40002870;
    sbit  BKP0_RTC_BKP8R_bit at RTC_BKP8R.B0;
    sbit  BKP1_RTC_BKP8R_bit at RTC_BKP8R.B1;
    sbit  BKP2_RTC_BKP8R_bit at RTC_BKP8R.B2;
    sbit  BKP3_RTC_BKP8R_bit at RTC_BKP8R.B3;
    sbit  BKP4_RTC_BKP8R_bit at RTC_BKP8R.B4;
    sbit  BKP5_RTC_BKP8R_bit at RTC_BKP8R.B5;
    sbit  BKP6_RTC_BKP8R_bit at RTC_BKP8R.B6;
    sbit  BKP7_RTC_BKP8R_bit at RTC_BKP8R.B7;
    sbit  BKP8_RTC_BKP8R_bit at RTC_BKP8R.B8;
    sbit  BKP9_RTC_BKP8R_bit at RTC_BKP8R.B9;
    sbit  BKP10_RTC_BKP8R_bit at RTC_BKP8R.B10;
    sbit  BKP11_RTC_BKP8R_bit at RTC_BKP8R.B11;
    sbit  BKP12_RTC_BKP8R_bit at RTC_BKP8R.B12;
    sbit  BKP13_RTC_BKP8R_bit at RTC_BKP8R.B13;
    sbit  BKP14_RTC_BKP8R_bit at RTC_BKP8R.B14;
    sbit  BKP15_RTC_BKP8R_bit at RTC_BKP8R.B15;
    sbit  BKP16_RTC_BKP8R_bit at RTC_BKP8R.B16;
    sbit  BKP17_RTC_BKP8R_bit at RTC_BKP8R.B17;
    sbit  BKP18_RTC_BKP8R_bit at RTC_BKP8R.B18;
    sbit  BKP19_RTC_BKP8R_bit at RTC_BKP8R.B19;
    sbit  BKP20_RTC_BKP8R_bit at RTC_BKP8R.B20;
    sbit  BKP21_RTC_BKP8R_bit at RTC_BKP8R.B21;
    sbit  BKP22_RTC_BKP8R_bit at RTC_BKP8R.B22;
    sbit  BKP23_RTC_BKP8R_bit at RTC_BKP8R.B23;
    sbit  BKP24_RTC_BKP8R_bit at RTC_BKP8R.B24;
    sbit  BKP25_RTC_BKP8R_bit at RTC_BKP8R.B25;
    sbit  BKP26_RTC_BKP8R_bit at RTC_BKP8R.B26;
    sbit  BKP27_RTC_BKP8R_bit at RTC_BKP8R.B27;
    sbit  BKP28_RTC_BKP8R_bit at RTC_BKP8R.B28;
    sbit  BKP29_RTC_BKP8R_bit at RTC_BKP8R.B29;
    sbit  BKP30_RTC_BKP8R_bit at RTC_BKP8R.B30;
    sbit  BKP31_RTC_BKP8R_bit at RTC_BKP8R.B31;

sfr unsigned long   volatile RTC_BKP9R            absolute 0x40002874;
    sbit  BKP0_RTC_BKP9R_bit at RTC_BKP9R.B0;
    sbit  BKP1_RTC_BKP9R_bit at RTC_BKP9R.B1;
    sbit  BKP2_RTC_BKP9R_bit at RTC_BKP9R.B2;
    sbit  BKP3_RTC_BKP9R_bit at RTC_BKP9R.B3;
    sbit  BKP4_RTC_BKP9R_bit at RTC_BKP9R.B4;
    sbit  BKP5_RTC_BKP9R_bit at RTC_BKP9R.B5;
    sbit  BKP6_RTC_BKP9R_bit at RTC_BKP9R.B6;
    sbit  BKP7_RTC_BKP9R_bit at RTC_BKP9R.B7;
    sbit  BKP8_RTC_BKP9R_bit at RTC_BKP9R.B8;
    sbit  BKP9_RTC_BKP9R_bit at RTC_BKP9R.B9;
    sbit  BKP10_RTC_BKP9R_bit at RTC_BKP9R.B10;
    sbit  BKP11_RTC_BKP9R_bit at RTC_BKP9R.B11;
    sbit  BKP12_RTC_BKP9R_bit at RTC_BKP9R.B12;
    sbit  BKP13_RTC_BKP9R_bit at RTC_BKP9R.B13;
    sbit  BKP14_RTC_BKP9R_bit at RTC_BKP9R.B14;
    sbit  BKP15_RTC_BKP9R_bit at RTC_BKP9R.B15;
    sbit  BKP16_RTC_BKP9R_bit at RTC_BKP9R.B16;
    sbit  BKP17_RTC_BKP9R_bit at RTC_BKP9R.B17;
    sbit  BKP18_RTC_BKP9R_bit at RTC_BKP9R.B18;
    sbit  BKP19_RTC_BKP9R_bit at RTC_BKP9R.B19;
    sbit  BKP20_RTC_BKP9R_bit at RTC_BKP9R.B20;
    sbit  BKP21_RTC_BKP9R_bit at RTC_BKP9R.B21;
    sbit  BKP22_RTC_BKP9R_bit at RTC_BKP9R.B22;
    sbit  BKP23_RTC_BKP9R_bit at RTC_BKP9R.B23;
    sbit  BKP24_RTC_BKP9R_bit at RTC_BKP9R.B24;
    sbit  BKP25_RTC_BKP9R_bit at RTC_BKP9R.B25;
    sbit  BKP26_RTC_BKP9R_bit at RTC_BKP9R.B26;
    sbit  BKP27_RTC_BKP9R_bit at RTC_BKP9R.B27;
    sbit  BKP28_RTC_BKP9R_bit at RTC_BKP9R.B28;
    sbit  BKP29_RTC_BKP9R_bit at RTC_BKP9R.B29;
    sbit  BKP30_RTC_BKP9R_bit at RTC_BKP9R.B30;
    sbit  BKP31_RTC_BKP9R_bit at RTC_BKP9R.B31;

sfr unsigned long   volatile RTC_BKP10R           absolute 0x40002878;
    sbit  BKP0_RTC_BKP10R_bit at RTC_BKP10R.B0;
    sbit  BKP1_RTC_BKP10R_bit at RTC_BKP10R.B1;
    sbit  BKP2_RTC_BKP10R_bit at RTC_BKP10R.B2;
    sbit  BKP3_RTC_BKP10R_bit at RTC_BKP10R.B3;
    sbit  BKP4_RTC_BKP10R_bit at RTC_BKP10R.B4;
    sbit  BKP5_RTC_BKP10R_bit at RTC_BKP10R.B5;
    sbit  BKP6_RTC_BKP10R_bit at RTC_BKP10R.B6;
    sbit  BKP7_RTC_BKP10R_bit at RTC_BKP10R.B7;
    sbit  BKP8_RTC_BKP10R_bit at RTC_BKP10R.B8;
    sbit  BKP9_RTC_BKP10R_bit at RTC_BKP10R.B9;
    sbit  BKP10_RTC_BKP10R_bit at RTC_BKP10R.B10;
    sbit  BKP11_RTC_BKP10R_bit at RTC_BKP10R.B11;
    sbit  BKP12_RTC_BKP10R_bit at RTC_BKP10R.B12;
    sbit  BKP13_RTC_BKP10R_bit at RTC_BKP10R.B13;
    sbit  BKP14_RTC_BKP10R_bit at RTC_BKP10R.B14;
    sbit  BKP15_RTC_BKP10R_bit at RTC_BKP10R.B15;
    sbit  BKP16_RTC_BKP10R_bit at RTC_BKP10R.B16;
    sbit  BKP17_RTC_BKP10R_bit at RTC_BKP10R.B17;
    sbit  BKP18_RTC_BKP10R_bit at RTC_BKP10R.B18;
    sbit  BKP19_RTC_BKP10R_bit at RTC_BKP10R.B19;
    sbit  BKP20_RTC_BKP10R_bit at RTC_BKP10R.B20;
    sbit  BKP21_RTC_BKP10R_bit at RTC_BKP10R.B21;
    sbit  BKP22_RTC_BKP10R_bit at RTC_BKP10R.B22;
    sbit  BKP23_RTC_BKP10R_bit at RTC_BKP10R.B23;
    sbit  BKP24_RTC_BKP10R_bit at RTC_BKP10R.B24;
    sbit  BKP25_RTC_BKP10R_bit at RTC_BKP10R.B25;
    sbit  BKP26_RTC_BKP10R_bit at RTC_BKP10R.B26;
    sbit  BKP27_RTC_BKP10R_bit at RTC_BKP10R.B27;
    sbit  BKP28_RTC_BKP10R_bit at RTC_BKP10R.B28;
    sbit  BKP29_RTC_BKP10R_bit at RTC_BKP10R.B29;
    sbit  BKP30_RTC_BKP10R_bit at RTC_BKP10R.B30;
    sbit  BKP31_RTC_BKP10R_bit at RTC_BKP10R.B31;

sfr unsigned long   volatile RTC_BKP11R           absolute 0x4000287C;
    sbit  BKP0_RTC_BKP11R_bit at RTC_BKP11R.B0;
    sbit  BKP1_RTC_BKP11R_bit at RTC_BKP11R.B1;
    sbit  BKP2_RTC_BKP11R_bit at RTC_BKP11R.B2;
    sbit  BKP3_RTC_BKP11R_bit at RTC_BKP11R.B3;
    sbit  BKP4_RTC_BKP11R_bit at RTC_BKP11R.B4;
    sbit  BKP5_RTC_BKP11R_bit at RTC_BKP11R.B5;
    sbit  BKP6_RTC_BKP11R_bit at RTC_BKP11R.B6;
    sbit  BKP7_RTC_BKP11R_bit at RTC_BKP11R.B7;
    sbit  BKP8_RTC_BKP11R_bit at RTC_BKP11R.B8;
    sbit  BKP9_RTC_BKP11R_bit at RTC_BKP11R.B9;
    sbit  BKP10_RTC_BKP11R_bit at RTC_BKP11R.B10;
    sbit  BKP11_RTC_BKP11R_bit at RTC_BKP11R.B11;
    sbit  BKP12_RTC_BKP11R_bit at RTC_BKP11R.B12;
    sbit  BKP13_RTC_BKP11R_bit at RTC_BKP11R.B13;
    sbit  BKP14_RTC_BKP11R_bit at RTC_BKP11R.B14;
    sbit  BKP15_RTC_BKP11R_bit at RTC_BKP11R.B15;
    sbit  BKP16_RTC_BKP11R_bit at RTC_BKP11R.B16;
    sbit  BKP17_RTC_BKP11R_bit at RTC_BKP11R.B17;
    sbit  BKP18_RTC_BKP11R_bit at RTC_BKP11R.B18;
    sbit  BKP19_RTC_BKP11R_bit at RTC_BKP11R.B19;
    sbit  BKP20_RTC_BKP11R_bit at RTC_BKP11R.B20;
    sbit  BKP21_RTC_BKP11R_bit at RTC_BKP11R.B21;
    sbit  BKP22_RTC_BKP11R_bit at RTC_BKP11R.B22;
    sbit  BKP23_RTC_BKP11R_bit at RTC_BKP11R.B23;
    sbit  BKP24_RTC_BKP11R_bit at RTC_BKP11R.B24;
    sbit  BKP25_RTC_BKP11R_bit at RTC_BKP11R.B25;
    sbit  BKP26_RTC_BKP11R_bit at RTC_BKP11R.B26;
    sbit  BKP27_RTC_BKP11R_bit at RTC_BKP11R.B27;
    sbit  BKP28_RTC_BKP11R_bit at RTC_BKP11R.B28;
    sbit  BKP29_RTC_BKP11R_bit at RTC_BKP11R.B29;
    sbit  BKP30_RTC_BKP11R_bit at RTC_BKP11R.B30;
    sbit  BKP31_RTC_BKP11R_bit at RTC_BKP11R.B31;

sfr unsigned long   volatile RTC_BKP12R           absolute 0x40002880;
    sbit  BKP0_RTC_BKP12R_bit at RTC_BKP12R.B0;
    sbit  BKP1_RTC_BKP12R_bit at RTC_BKP12R.B1;
    sbit  BKP2_RTC_BKP12R_bit at RTC_BKP12R.B2;
    sbit  BKP3_RTC_BKP12R_bit at RTC_BKP12R.B3;
    sbit  BKP4_RTC_BKP12R_bit at RTC_BKP12R.B4;
    sbit  BKP5_RTC_BKP12R_bit at RTC_BKP12R.B5;
    sbit  BKP6_RTC_BKP12R_bit at RTC_BKP12R.B6;
    sbit  BKP7_RTC_BKP12R_bit at RTC_BKP12R.B7;
    sbit  BKP8_RTC_BKP12R_bit at RTC_BKP12R.B8;
    sbit  BKP9_RTC_BKP12R_bit at RTC_BKP12R.B9;
    sbit  BKP10_RTC_BKP12R_bit at RTC_BKP12R.B10;
    sbit  BKP11_RTC_BKP12R_bit at RTC_BKP12R.B11;
    sbit  BKP12_RTC_BKP12R_bit at RTC_BKP12R.B12;
    sbit  BKP13_RTC_BKP12R_bit at RTC_BKP12R.B13;
    sbit  BKP14_RTC_BKP12R_bit at RTC_BKP12R.B14;
    sbit  BKP15_RTC_BKP12R_bit at RTC_BKP12R.B15;
    sbit  BKP16_RTC_BKP12R_bit at RTC_BKP12R.B16;
    sbit  BKP17_RTC_BKP12R_bit at RTC_BKP12R.B17;
    sbit  BKP18_RTC_BKP12R_bit at RTC_BKP12R.B18;
    sbit  BKP19_RTC_BKP12R_bit at RTC_BKP12R.B19;
    sbit  BKP20_RTC_BKP12R_bit at RTC_BKP12R.B20;
    sbit  BKP21_RTC_BKP12R_bit at RTC_BKP12R.B21;
    sbit  BKP22_RTC_BKP12R_bit at RTC_BKP12R.B22;
    sbit  BKP23_RTC_BKP12R_bit at RTC_BKP12R.B23;
    sbit  BKP24_RTC_BKP12R_bit at RTC_BKP12R.B24;
    sbit  BKP25_RTC_BKP12R_bit at RTC_BKP12R.B25;
    sbit  BKP26_RTC_BKP12R_bit at RTC_BKP12R.B26;
    sbit  BKP27_RTC_BKP12R_bit at RTC_BKP12R.B27;
    sbit  BKP28_RTC_BKP12R_bit at RTC_BKP12R.B28;
    sbit  BKP29_RTC_BKP12R_bit at RTC_BKP12R.B29;
    sbit  BKP30_RTC_BKP12R_bit at RTC_BKP12R.B30;
    sbit  BKP31_RTC_BKP12R_bit at RTC_BKP12R.B31;

sfr unsigned long   volatile RTC_BKP13R           absolute 0x40002884;
    sbit  BKP0_RTC_BKP13R_bit at RTC_BKP13R.B0;
    sbit  BKP1_RTC_BKP13R_bit at RTC_BKP13R.B1;
    sbit  BKP2_RTC_BKP13R_bit at RTC_BKP13R.B2;
    sbit  BKP3_RTC_BKP13R_bit at RTC_BKP13R.B3;
    sbit  BKP4_RTC_BKP13R_bit at RTC_BKP13R.B4;
    sbit  BKP5_RTC_BKP13R_bit at RTC_BKP13R.B5;
    sbit  BKP6_RTC_BKP13R_bit at RTC_BKP13R.B6;
    sbit  BKP7_RTC_BKP13R_bit at RTC_BKP13R.B7;
    sbit  BKP8_RTC_BKP13R_bit at RTC_BKP13R.B8;
    sbit  BKP9_RTC_BKP13R_bit at RTC_BKP13R.B9;
    sbit  BKP10_RTC_BKP13R_bit at RTC_BKP13R.B10;
    sbit  BKP11_RTC_BKP13R_bit at RTC_BKP13R.B11;
    sbit  BKP12_RTC_BKP13R_bit at RTC_BKP13R.B12;
    sbit  BKP13_RTC_BKP13R_bit at RTC_BKP13R.B13;
    sbit  BKP14_RTC_BKP13R_bit at RTC_BKP13R.B14;
    sbit  BKP15_RTC_BKP13R_bit at RTC_BKP13R.B15;
    sbit  BKP16_RTC_BKP13R_bit at RTC_BKP13R.B16;
    sbit  BKP17_RTC_BKP13R_bit at RTC_BKP13R.B17;
    sbit  BKP18_RTC_BKP13R_bit at RTC_BKP13R.B18;
    sbit  BKP19_RTC_BKP13R_bit at RTC_BKP13R.B19;
    sbit  BKP20_RTC_BKP13R_bit at RTC_BKP13R.B20;
    sbit  BKP21_RTC_BKP13R_bit at RTC_BKP13R.B21;
    sbit  BKP22_RTC_BKP13R_bit at RTC_BKP13R.B22;
    sbit  BKP23_RTC_BKP13R_bit at RTC_BKP13R.B23;
    sbit  BKP24_RTC_BKP13R_bit at RTC_BKP13R.B24;
    sbit  BKP25_RTC_BKP13R_bit at RTC_BKP13R.B25;
    sbit  BKP26_RTC_BKP13R_bit at RTC_BKP13R.B26;
    sbit  BKP27_RTC_BKP13R_bit at RTC_BKP13R.B27;
    sbit  BKP28_RTC_BKP13R_bit at RTC_BKP13R.B28;
    sbit  BKP29_RTC_BKP13R_bit at RTC_BKP13R.B29;
    sbit  BKP30_RTC_BKP13R_bit at RTC_BKP13R.B30;
    sbit  BKP31_RTC_BKP13R_bit at RTC_BKP13R.B31;

sfr unsigned long   volatile RTC_BKP14R           absolute 0x40002888;
    sbit  BKP0_RTC_BKP14R_bit at RTC_BKP14R.B0;
    sbit  BKP1_RTC_BKP14R_bit at RTC_BKP14R.B1;
    sbit  BKP2_RTC_BKP14R_bit at RTC_BKP14R.B2;
    sbit  BKP3_RTC_BKP14R_bit at RTC_BKP14R.B3;
    sbit  BKP4_RTC_BKP14R_bit at RTC_BKP14R.B4;
    sbit  BKP5_RTC_BKP14R_bit at RTC_BKP14R.B5;
    sbit  BKP6_RTC_BKP14R_bit at RTC_BKP14R.B6;
    sbit  BKP7_RTC_BKP14R_bit at RTC_BKP14R.B7;
    sbit  BKP8_RTC_BKP14R_bit at RTC_BKP14R.B8;
    sbit  BKP9_RTC_BKP14R_bit at RTC_BKP14R.B9;
    sbit  BKP10_RTC_BKP14R_bit at RTC_BKP14R.B10;
    sbit  BKP11_RTC_BKP14R_bit at RTC_BKP14R.B11;
    sbit  BKP12_RTC_BKP14R_bit at RTC_BKP14R.B12;
    sbit  BKP13_RTC_BKP14R_bit at RTC_BKP14R.B13;
    sbit  BKP14_RTC_BKP14R_bit at RTC_BKP14R.B14;
    sbit  BKP15_RTC_BKP14R_bit at RTC_BKP14R.B15;
    sbit  BKP16_RTC_BKP14R_bit at RTC_BKP14R.B16;
    sbit  BKP17_RTC_BKP14R_bit at RTC_BKP14R.B17;
    sbit  BKP18_RTC_BKP14R_bit at RTC_BKP14R.B18;
    sbit  BKP19_RTC_BKP14R_bit at RTC_BKP14R.B19;
    sbit  BKP20_RTC_BKP14R_bit at RTC_BKP14R.B20;
    sbit  BKP21_RTC_BKP14R_bit at RTC_BKP14R.B21;
    sbit  BKP22_RTC_BKP14R_bit at RTC_BKP14R.B22;
    sbit  BKP23_RTC_BKP14R_bit at RTC_BKP14R.B23;
    sbit  BKP24_RTC_BKP14R_bit at RTC_BKP14R.B24;
    sbit  BKP25_RTC_BKP14R_bit at RTC_BKP14R.B25;
    sbit  BKP26_RTC_BKP14R_bit at RTC_BKP14R.B26;
    sbit  BKP27_RTC_BKP14R_bit at RTC_BKP14R.B27;
    sbit  BKP28_RTC_BKP14R_bit at RTC_BKP14R.B28;
    sbit  BKP29_RTC_BKP14R_bit at RTC_BKP14R.B29;
    sbit  BKP30_RTC_BKP14R_bit at RTC_BKP14R.B30;
    sbit  BKP31_RTC_BKP14R_bit at RTC_BKP14R.B31;

sfr unsigned long   volatile RTC_BKP15R           absolute 0x4000288C;
    sbit  BKP0_RTC_BKP15R_bit at RTC_BKP15R.B0;
    sbit  BKP1_RTC_BKP15R_bit at RTC_BKP15R.B1;
    sbit  BKP2_RTC_BKP15R_bit at RTC_BKP15R.B2;
    sbit  BKP3_RTC_BKP15R_bit at RTC_BKP15R.B3;
    sbit  BKP4_RTC_BKP15R_bit at RTC_BKP15R.B4;
    sbit  BKP5_RTC_BKP15R_bit at RTC_BKP15R.B5;
    sbit  BKP6_RTC_BKP15R_bit at RTC_BKP15R.B6;
    sbit  BKP7_RTC_BKP15R_bit at RTC_BKP15R.B7;
    sbit  BKP8_RTC_BKP15R_bit at RTC_BKP15R.B8;
    sbit  BKP9_RTC_BKP15R_bit at RTC_BKP15R.B9;
    sbit  BKP10_RTC_BKP15R_bit at RTC_BKP15R.B10;
    sbit  BKP11_RTC_BKP15R_bit at RTC_BKP15R.B11;
    sbit  BKP12_RTC_BKP15R_bit at RTC_BKP15R.B12;
    sbit  BKP13_RTC_BKP15R_bit at RTC_BKP15R.B13;
    sbit  BKP14_RTC_BKP15R_bit at RTC_BKP15R.B14;
    sbit  BKP15_RTC_BKP15R_bit at RTC_BKP15R.B15;
    sbit  BKP16_RTC_BKP15R_bit at RTC_BKP15R.B16;
    sbit  BKP17_RTC_BKP15R_bit at RTC_BKP15R.B17;
    sbit  BKP18_RTC_BKP15R_bit at RTC_BKP15R.B18;
    sbit  BKP19_RTC_BKP15R_bit at RTC_BKP15R.B19;
    sbit  BKP20_RTC_BKP15R_bit at RTC_BKP15R.B20;
    sbit  BKP21_RTC_BKP15R_bit at RTC_BKP15R.B21;
    sbit  BKP22_RTC_BKP15R_bit at RTC_BKP15R.B22;
    sbit  BKP23_RTC_BKP15R_bit at RTC_BKP15R.B23;
    sbit  BKP24_RTC_BKP15R_bit at RTC_BKP15R.B24;
    sbit  BKP25_RTC_BKP15R_bit at RTC_BKP15R.B25;
    sbit  BKP26_RTC_BKP15R_bit at RTC_BKP15R.B26;
    sbit  BKP27_RTC_BKP15R_bit at RTC_BKP15R.B27;
    sbit  BKP28_RTC_BKP15R_bit at RTC_BKP15R.B28;
    sbit  BKP29_RTC_BKP15R_bit at RTC_BKP15R.B29;
    sbit  BKP30_RTC_BKP15R_bit at RTC_BKP15R.B30;
    sbit  BKP31_RTC_BKP15R_bit at RTC_BKP15R.B31;

sfr unsigned long   volatile RTC_BKP16R           absolute 0x40002890;
    sbit  BKP0_RTC_BKP16R_bit at RTC_BKP16R.B0;
    sbit  BKP1_RTC_BKP16R_bit at RTC_BKP16R.B1;
    sbit  BKP2_RTC_BKP16R_bit at RTC_BKP16R.B2;
    sbit  BKP3_RTC_BKP16R_bit at RTC_BKP16R.B3;
    sbit  BKP4_RTC_BKP16R_bit at RTC_BKP16R.B4;
    sbit  BKP5_RTC_BKP16R_bit at RTC_BKP16R.B5;
    sbit  BKP6_RTC_BKP16R_bit at RTC_BKP16R.B6;
    sbit  BKP7_RTC_BKP16R_bit at RTC_BKP16R.B7;
    sbit  BKP8_RTC_BKP16R_bit at RTC_BKP16R.B8;
    sbit  BKP9_RTC_BKP16R_bit at RTC_BKP16R.B9;
    sbit  BKP10_RTC_BKP16R_bit at RTC_BKP16R.B10;
    sbit  BKP11_RTC_BKP16R_bit at RTC_BKP16R.B11;
    sbit  BKP12_RTC_BKP16R_bit at RTC_BKP16R.B12;
    sbit  BKP13_RTC_BKP16R_bit at RTC_BKP16R.B13;
    sbit  BKP14_RTC_BKP16R_bit at RTC_BKP16R.B14;
    sbit  BKP15_RTC_BKP16R_bit at RTC_BKP16R.B15;
    sbit  BKP16_RTC_BKP16R_bit at RTC_BKP16R.B16;
    sbit  BKP17_RTC_BKP16R_bit at RTC_BKP16R.B17;
    sbit  BKP18_RTC_BKP16R_bit at RTC_BKP16R.B18;
    sbit  BKP19_RTC_BKP16R_bit at RTC_BKP16R.B19;
    sbit  BKP20_RTC_BKP16R_bit at RTC_BKP16R.B20;
    sbit  BKP21_RTC_BKP16R_bit at RTC_BKP16R.B21;
    sbit  BKP22_RTC_BKP16R_bit at RTC_BKP16R.B22;
    sbit  BKP23_RTC_BKP16R_bit at RTC_BKP16R.B23;
    sbit  BKP24_RTC_BKP16R_bit at RTC_BKP16R.B24;
    sbit  BKP25_RTC_BKP16R_bit at RTC_BKP16R.B25;
    sbit  BKP26_RTC_BKP16R_bit at RTC_BKP16R.B26;
    sbit  BKP27_RTC_BKP16R_bit at RTC_BKP16R.B27;
    sbit  BKP28_RTC_BKP16R_bit at RTC_BKP16R.B28;
    sbit  BKP29_RTC_BKP16R_bit at RTC_BKP16R.B29;
    sbit  BKP30_RTC_BKP16R_bit at RTC_BKP16R.B30;
    sbit  BKP31_RTC_BKP16R_bit at RTC_BKP16R.B31;

sfr unsigned long   volatile RTC_BKP17R           absolute 0x40002894;
    sbit  BKP0_RTC_BKP17R_bit at RTC_BKP17R.B0;
    sbit  BKP1_RTC_BKP17R_bit at RTC_BKP17R.B1;
    sbit  BKP2_RTC_BKP17R_bit at RTC_BKP17R.B2;
    sbit  BKP3_RTC_BKP17R_bit at RTC_BKP17R.B3;
    sbit  BKP4_RTC_BKP17R_bit at RTC_BKP17R.B4;
    sbit  BKP5_RTC_BKP17R_bit at RTC_BKP17R.B5;
    sbit  BKP6_RTC_BKP17R_bit at RTC_BKP17R.B6;
    sbit  BKP7_RTC_BKP17R_bit at RTC_BKP17R.B7;
    sbit  BKP8_RTC_BKP17R_bit at RTC_BKP17R.B8;
    sbit  BKP9_RTC_BKP17R_bit at RTC_BKP17R.B9;
    sbit  BKP10_RTC_BKP17R_bit at RTC_BKP17R.B10;
    sbit  BKP11_RTC_BKP17R_bit at RTC_BKP17R.B11;
    sbit  BKP12_RTC_BKP17R_bit at RTC_BKP17R.B12;
    sbit  BKP13_RTC_BKP17R_bit at RTC_BKP17R.B13;
    sbit  BKP14_RTC_BKP17R_bit at RTC_BKP17R.B14;
    sbit  BKP15_RTC_BKP17R_bit at RTC_BKP17R.B15;
    sbit  BKP16_RTC_BKP17R_bit at RTC_BKP17R.B16;
    sbit  BKP17_RTC_BKP17R_bit at RTC_BKP17R.B17;
    sbit  BKP18_RTC_BKP17R_bit at RTC_BKP17R.B18;
    sbit  BKP19_RTC_BKP17R_bit at RTC_BKP17R.B19;
    sbit  BKP20_RTC_BKP17R_bit at RTC_BKP17R.B20;
    sbit  BKP21_RTC_BKP17R_bit at RTC_BKP17R.B21;
    sbit  BKP22_RTC_BKP17R_bit at RTC_BKP17R.B22;
    sbit  BKP23_RTC_BKP17R_bit at RTC_BKP17R.B23;
    sbit  BKP24_RTC_BKP17R_bit at RTC_BKP17R.B24;
    sbit  BKP25_RTC_BKP17R_bit at RTC_BKP17R.B25;
    sbit  BKP26_RTC_BKP17R_bit at RTC_BKP17R.B26;
    sbit  BKP27_RTC_BKP17R_bit at RTC_BKP17R.B27;
    sbit  BKP28_RTC_BKP17R_bit at RTC_BKP17R.B28;
    sbit  BKP29_RTC_BKP17R_bit at RTC_BKP17R.B29;
    sbit  BKP30_RTC_BKP17R_bit at RTC_BKP17R.B30;
    sbit  BKP31_RTC_BKP17R_bit at RTC_BKP17R.B31;

sfr unsigned long   volatile RTC_BKP18R           absolute 0x40002898;
    sbit  BKP0_RTC_BKP18R_bit at RTC_BKP18R.B0;
    sbit  BKP1_RTC_BKP18R_bit at RTC_BKP18R.B1;
    sbit  BKP2_RTC_BKP18R_bit at RTC_BKP18R.B2;
    sbit  BKP3_RTC_BKP18R_bit at RTC_BKP18R.B3;
    sbit  BKP4_RTC_BKP18R_bit at RTC_BKP18R.B4;
    sbit  BKP5_RTC_BKP18R_bit at RTC_BKP18R.B5;
    sbit  BKP6_RTC_BKP18R_bit at RTC_BKP18R.B6;
    sbit  BKP7_RTC_BKP18R_bit at RTC_BKP18R.B7;
    sbit  BKP8_RTC_BKP18R_bit at RTC_BKP18R.B8;
    sbit  BKP9_RTC_BKP18R_bit at RTC_BKP18R.B9;
    sbit  BKP10_RTC_BKP18R_bit at RTC_BKP18R.B10;
    sbit  BKP11_RTC_BKP18R_bit at RTC_BKP18R.B11;
    sbit  BKP12_RTC_BKP18R_bit at RTC_BKP18R.B12;
    sbit  BKP13_RTC_BKP18R_bit at RTC_BKP18R.B13;
    sbit  BKP14_RTC_BKP18R_bit at RTC_BKP18R.B14;
    sbit  BKP15_RTC_BKP18R_bit at RTC_BKP18R.B15;
    sbit  BKP16_RTC_BKP18R_bit at RTC_BKP18R.B16;
    sbit  BKP17_RTC_BKP18R_bit at RTC_BKP18R.B17;
    sbit  BKP18_RTC_BKP18R_bit at RTC_BKP18R.B18;
    sbit  BKP19_RTC_BKP18R_bit at RTC_BKP18R.B19;
    sbit  BKP20_RTC_BKP18R_bit at RTC_BKP18R.B20;
    sbit  BKP21_RTC_BKP18R_bit at RTC_BKP18R.B21;
    sbit  BKP22_RTC_BKP18R_bit at RTC_BKP18R.B22;
    sbit  BKP23_RTC_BKP18R_bit at RTC_BKP18R.B23;
    sbit  BKP24_RTC_BKP18R_bit at RTC_BKP18R.B24;
    sbit  BKP25_RTC_BKP18R_bit at RTC_BKP18R.B25;
    sbit  BKP26_RTC_BKP18R_bit at RTC_BKP18R.B26;
    sbit  BKP27_RTC_BKP18R_bit at RTC_BKP18R.B27;
    sbit  BKP28_RTC_BKP18R_bit at RTC_BKP18R.B28;
    sbit  BKP29_RTC_BKP18R_bit at RTC_BKP18R.B29;
    sbit  BKP30_RTC_BKP18R_bit at RTC_BKP18R.B30;
    sbit  BKP31_RTC_BKP18R_bit at RTC_BKP18R.B31;

sfr unsigned long   volatile RTC_BKP19R           absolute 0x4000289C;
    sbit  BKP0_RTC_BKP19R_bit at RTC_BKP19R.B0;
    sbit  BKP1_RTC_BKP19R_bit at RTC_BKP19R.B1;
    sbit  BKP2_RTC_BKP19R_bit at RTC_BKP19R.B2;
    sbit  BKP3_RTC_BKP19R_bit at RTC_BKP19R.B3;
    sbit  BKP4_RTC_BKP19R_bit at RTC_BKP19R.B4;
    sbit  BKP5_RTC_BKP19R_bit at RTC_BKP19R.B5;
    sbit  BKP6_RTC_BKP19R_bit at RTC_BKP19R.B6;
    sbit  BKP7_RTC_BKP19R_bit at RTC_BKP19R.B7;
    sbit  BKP8_RTC_BKP19R_bit at RTC_BKP19R.B8;
    sbit  BKP9_RTC_BKP19R_bit at RTC_BKP19R.B9;
    sbit  BKP10_RTC_BKP19R_bit at RTC_BKP19R.B10;
    sbit  BKP11_RTC_BKP19R_bit at RTC_BKP19R.B11;
    sbit  BKP12_RTC_BKP19R_bit at RTC_BKP19R.B12;
    sbit  BKP13_RTC_BKP19R_bit at RTC_BKP19R.B13;
    sbit  BKP14_RTC_BKP19R_bit at RTC_BKP19R.B14;
    sbit  BKP15_RTC_BKP19R_bit at RTC_BKP19R.B15;
    sbit  BKP16_RTC_BKP19R_bit at RTC_BKP19R.B16;
    sbit  BKP17_RTC_BKP19R_bit at RTC_BKP19R.B17;
    sbit  BKP18_RTC_BKP19R_bit at RTC_BKP19R.B18;
    sbit  BKP19_RTC_BKP19R_bit at RTC_BKP19R.B19;
    sbit  BKP20_RTC_BKP19R_bit at RTC_BKP19R.B20;
    sbit  BKP21_RTC_BKP19R_bit at RTC_BKP19R.B21;
    sbit  BKP22_RTC_BKP19R_bit at RTC_BKP19R.B22;
    sbit  BKP23_RTC_BKP19R_bit at RTC_BKP19R.B23;
    sbit  BKP24_RTC_BKP19R_bit at RTC_BKP19R.B24;
    sbit  BKP25_RTC_BKP19R_bit at RTC_BKP19R.B25;
    sbit  BKP26_RTC_BKP19R_bit at RTC_BKP19R.B26;
    sbit  BKP27_RTC_BKP19R_bit at RTC_BKP19R.B27;
    sbit  BKP28_RTC_BKP19R_bit at RTC_BKP19R.B28;
    sbit  BKP29_RTC_BKP19R_bit at RTC_BKP19R.B29;
    sbit  BKP30_RTC_BKP19R_bit at RTC_BKP19R.B30;
    sbit  BKP31_RTC_BKP19R_bit at RTC_BKP19R.B31;

sfr unsigned long   volatile RTC_BKP20R           absolute 0x400028A0;
    sbit  BKP0_RTC_BKP20R_bit at RTC_BKP20R.B0;
    sbit  BKP1_RTC_BKP20R_bit at RTC_BKP20R.B1;
    sbit  BKP2_RTC_BKP20R_bit at RTC_BKP20R.B2;
    sbit  BKP3_RTC_BKP20R_bit at RTC_BKP20R.B3;
    sbit  BKP4_RTC_BKP20R_bit at RTC_BKP20R.B4;
    sbit  BKP5_RTC_BKP20R_bit at RTC_BKP20R.B5;
    sbit  BKP6_RTC_BKP20R_bit at RTC_BKP20R.B6;
    sbit  BKP7_RTC_BKP20R_bit at RTC_BKP20R.B7;
    sbit  BKP8_RTC_BKP20R_bit at RTC_BKP20R.B8;
    sbit  BKP9_RTC_BKP20R_bit at RTC_BKP20R.B9;
    sbit  BKP10_RTC_BKP20R_bit at RTC_BKP20R.B10;
    sbit  BKP11_RTC_BKP20R_bit at RTC_BKP20R.B11;
    sbit  BKP12_RTC_BKP20R_bit at RTC_BKP20R.B12;
    sbit  BKP13_RTC_BKP20R_bit at RTC_BKP20R.B13;
    sbit  BKP14_RTC_BKP20R_bit at RTC_BKP20R.B14;
    sbit  BKP15_RTC_BKP20R_bit at RTC_BKP20R.B15;
    sbit  BKP16_RTC_BKP20R_bit at RTC_BKP20R.B16;
    sbit  BKP17_RTC_BKP20R_bit at RTC_BKP20R.B17;
    sbit  BKP18_RTC_BKP20R_bit at RTC_BKP20R.B18;
    sbit  BKP19_RTC_BKP20R_bit at RTC_BKP20R.B19;
    sbit  BKP20_RTC_BKP20R_bit at RTC_BKP20R.B20;
    sbit  BKP21_RTC_BKP20R_bit at RTC_BKP20R.B21;
    sbit  BKP22_RTC_BKP20R_bit at RTC_BKP20R.B22;
    sbit  BKP23_RTC_BKP20R_bit at RTC_BKP20R.B23;
    sbit  BKP24_RTC_BKP20R_bit at RTC_BKP20R.B24;
    sbit  BKP25_RTC_BKP20R_bit at RTC_BKP20R.B25;
    sbit  BKP26_RTC_BKP20R_bit at RTC_BKP20R.B26;
    sbit  BKP27_RTC_BKP20R_bit at RTC_BKP20R.B27;
    sbit  BKP28_RTC_BKP20R_bit at RTC_BKP20R.B28;
    sbit  BKP29_RTC_BKP20R_bit at RTC_BKP20R.B29;
    sbit  BKP30_RTC_BKP20R_bit at RTC_BKP20R.B30;
    sbit  BKP31_RTC_BKP20R_bit at RTC_BKP20R.B31;

sfr unsigned long   volatile RTC_BKP21R           absolute 0x400028A4;
    sbit  BKP0_RTC_BKP21R_bit at RTC_BKP21R.B0;
    sbit  BKP1_RTC_BKP21R_bit at RTC_BKP21R.B1;
    sbit  BKP2_RTC_BKP21R_bit at RTC_BKP21R.B2;
    sbit  BKP3_RTC_BKP21R_bit at RTC_BKP21R.B3;
    sbit  BKP4_RTC_BKP21R_bit at RTC_BKP21R.B4;
    sbit  BKP5_RTC_BKP21R_bit at RTC_BKP21R.B5;
    sbit  BKP6_RTC_BKP21R_bit at RTC_BKP21R.B6;
    sbit  BKP7_RTC_BKP21R_bit at RTC_BKP21R.B7;
    sbit  BKP8_RTC_BKP21R_bit at RTC_BKP21R.B8;
    sbit  BKP9_RTC_BKP21R_bit at RTC_BKP21R.B9;
    sbit  BKP10_RTC_BKP21R_bit at RTC_BKP21R.B10;
    sbit  BKP11_RTC_BKP21R_bit at RTC_BKP21R.B11;
    sbit  BKP12_RTC_BKP21R_bit at RTC_BKP21R.B12;
    sbit  BKP13_RTC_BKP21R_bit at RTC_BKP21R.B13;
    sbit  BKP14_RTC_BKP21R_bit at RTC_BKP21R.B14;
    sbit  BKP15_RTC_BKP21R_bit at RTC_BKP21R.B15;
    sbit  BKP16_RTC_BKP21R_bit at RTC_BKP21R.B16;
    sbit  BKP17_RTC_BKP21R_bit at RTC_BKP21R.B17;
    sbit  BKP18_RTC_BKP21R_bit at RTC_BKP21R.B18;
    sbit  BKP19_RTC_BKP21R_bit at RTC_BKP21R.B19;
    sbit  BKP20_RTC_BKP21R_bit at RTC_BKP21R.B20;
    sbit  BKP21_RTC_BKP21R_bit at RTC_BKP21R.B21;
    sbit  BKP22_RTC_BKP21R_bit at RTC_BKP21R.B22;
    sbit  BKP23_RTC_BKP21R_bit at RTC_BKP21R.B23;
    sbit  BKP24_RTC_BKP21R_bit at RTC_BKP21R.B24;
    sbit  BKP25_RTC_BKP21R_bit at RTC_BKP21R.B25;
    sbit  BKP26_RTC_BKP21R_bit at RTC_BKP21R.B26;
    sbit  BKP27_RTC_BKP21R_bit at RTC_BKP21R.B27;
    sbit  BKP28_RTC_BKP21R_bit at RTC_BKP21R.B28;
    sbit  BKP29_RTC_BKP21R_bit at RTC_BKP21R.B29;
    sbit  BKP30_RTC_BKP21R_bit at RTC_BKP21R.B30;
    sbit  BKP31_RTC_BKP21R_bit at RTC_BKP21R.B31;

sfr unsigned long   volatile RTC_BKP22R           absolute 0x400028A8;
    sbit  BKP0_RTC_BKP22R_bit at RTC_BKP22R.B0;
    sbit  BKP1_RTC_BKP22R_bit at RTC_BKP22R.B1;
    sbit  BKP2_RTC_BKP22R_bit at RTC_BKP22R.B2;
    sbit  BKP3_RTC_BKP22R_bit at RTC_BKP22R.B3;
    sbit  BKP4_RTC_BKP22R_bit at RTC_BKP22R.B4;
    sbit  BKP5_RTC_BKP22R_bit at RTC_BKP22R.B5;
    sbit  BKP6_RTC_BKP22R_bit at RTC_BKP22R.B6;
    sbit  BKP7_RTC_BKP22R_bit at RTC_BKP22R.B7;
    sbit  BKP8_RTC_BKP22R_bit at RTC_BKP22R.B8;
    sbit  BKP9_RTC_BKP22R_bit at RTC_BKP22R.B9;
    sbit  BKP10_RTC_BKP22R_bit at RTC_BKP22R.B10;
    sbit  BKP11_RTC_BKP22R_bit at RTC_BKP22R.B11;
    sbit  BKP12_RTC_BKP22R_bit at RTC_BKP22R.B12;
    sbit  BKP13_RTC_BKP22R_bit at RTC_BKP22R.B13;
    sbit  BKP14_RTC_BKP22R_bit at RTC_BKP22R.B14;
    sbit  BKP15_RTC_BKP22R_bit at RTC_BKP22R.B15;
    sbit  BKP16_RTC_BKP22R_bit at RTC_BKP22R.B16;
    sbit  BKP17_RTC_BKP22R_bit at RTC_BKP22R.B17;
    sbit  BKP18_RTC_BKP22R_bit at RTC_BKP22R.B18;
    sbit  BKP19_RTC_BKP22R_bit at RTC_BKP22R.B19;
    sbit  BKP20_RTC_BKP22R_bit at RTC_BKP22R.B20;
    sbit  BKP21_RTC_BKP22R_bit at RTC_BKP22R.B21;
    sbit  BKP22_RTC_BKP22R_bit at RTC_BKP22R.B22;
    sbit  BKP23_RTC_BKP22R_bit at RTC_BKP22R.B23;
    sbit  BKP24_RTC_BKP22R_bit at RTC_BKP22R.B24;
    sbit  BKP25_RTC_BKP22R_bit at RTC_BKP22R.B25;
    sbit  BKP26_RTC_BKP22R_bit at RTC_BKP22R.B26;
    sbit  BKP27_RTC_BKP22R_bit at RTC_BKP22R.B27;
    sbit  BKP28_RTC_BKP22R_bit at RTC_BKP22R.B28;
    sbit  BKP29_RTC_BKP22R_bit at RTC_BKP22R.B29;
    sbit  BKP30_RTC_BKP22R_bit at RTC_BKP22R.B30;
    sbit  BKP31_RTC_BKP22R_bit at RTC_BKP22R.B31;

sfr unsigned long   volatile RTC_BKP23R           absolute 0x400028AC;
    sbit  BKP0_RTC_BKP23R_bit at RTC_BKP23R.B0;
    sbit  BKP1_RTC_BKP23R_bit at RTC_BKP23R.B1;
    sbit  BKP2_RTC_BKP23R_bit at RTC_BKP23R.B2;
    sbit  BKP3_RTC_BKP23R_bit at RTC_BKP23R.B3;
    sbit  BKP4_RTC_BKP23R_bit at RTC_BKP23R.B4;
    sbit  BKP5_RTC_BKP23R_bit at RTC_BKP23R.B5;
    sbit  BKP6_RTC_BKP23R_bit at RTC_BKP23R.B6;
    sbit  BKP7_RTC_BKP23R_bit at RTC_BKP23R.B7;
    sbit  BKP8_RTC_BKP23R_bit at RTC_BKP23R.B8;
    sbit  BKP9_RTC_BKP23R_bit at RTC_BKP23R.B9;
    sbit  BKP10_RTC_BKP23R_bit at RTC_BKP23R.B10;
    sbit  BKP11_RTC_BKP23R_bit at RTC_BKP23R.B11;
    sbit  BKP12_RTC_BKP23R_bit at RTC_BKP23R.B12;
    sbit  BKP13_RTC_BKP23R_bit at RTC_BKP23R.B13;
    sbit  BKP14_RTC_BKP23R_bit at RTC_BKP23R.B14;
    sbit  BKP15_RTC_BKP23R_bit at RTC_BKP23R.B15;
    sbit  BKP16_RTC_BKP23R_bit at RTC_BKP23R.B16;
    sbit  BKP17_RTC_BKP23R_bit at RTC_BKP23R.B17;
    sbit  BKP18_RTC_BKP23R_bit at RTC_BKP23R.B18;
    sbit  BKP19_RTC_BKP23R_bit at RTC_BKP23R.B19;
    sbit  BKP20_RTC_BKP23R_bit at RTC_BKP23R.B20;
    sbit  BKP21_RTC_BKP23R_bit at RTC_BKP23R.B21;
    sbit  BKP22_RTC_BKP23R_bit at RTC_BKP23R.B22;
    sbit  BKP23_RTC_BKP23R_bit at RTC_BKP23R.B23;
    sbit  BKP24_RTC_BKP23R_bit at RTC_BKP23R.B24;
    sbit  BKP25_RTC_BKP23R_bit at RTC_BKP23R.B25;
    sbit  BKP26_RTC_BKP23R_bit at RTC_BKP23R.B26;
    sbit  BKP27_RTC_BKP23R_bit at RTC_BKP23R.B27;
    sbit  BKP28_RTC_BKP23R_bit at RTC_BKP23R.B28;
    sbit  BKP29_RTC_BKP23R_bit at RTC_BKP23R.B29;
    sbit  BKP30_RTC_BKP23R_bit at RTC_BKP23R.B30;
    sbit  BKP31_RTC_BKP23R_bit at RTC_BKP23R.B31;

sfr unsigned long   volatile RTC_BKP24R           absolute 0x400028B0;
    sbit  BKP0_RTC_BKP24R_bit at RTC_BKP24R.B0;
    sbit  BKP1_RTC_BKP24R_bit at RTC_BKP24R.B1;
    sbit  BKP2_RTC_BKP24R_bit at RTC_BKP24R.B2;
    sbit  BKP3_RTC_BKP24R_bit at RTC_BKP24R.B3;
    sbit  BKP4_RTC_BKP24R_bit at RTC_BKP24R.B4;
    sbit  BKP5_RTC_BKP24R_bit at RTC_BKP24R.B5;
    sbit  BKP6_RTC_BKP24R_bit at RTC_BKP24R.B6;
    sbit  BKP7_RTC_BKP24R_bit at RTC_BKP24R.B7;
    sbit  BKP8_RTC_BKP24R_bit at RTC_BKP24R.B8;
    sbit  BKP9_RTC_BKP24R_bit at RTC_BKP24R.B9;
    sbit  BKP10_RTC_BKP24R_bit at RTC_BKP24R.B10;
    sbit  BKP11_RTC_BKP24R_bit at RTC_BKP24R.B11;
    sbit  BKP12_RTC_BKP24R_bit at RTC_BKP24R.B12;
    sbit  BKP13_RTC_BKP24R_bit at RTC_BKP24R.B13;
    sbit  BKP14_RTC_BKP24R_bit at RTC_BKP24R.B14;
    sbit  BKP15_RTC_BKP24R_bit at RTC_BKP24R.B15;
    sbit  BKP16_RTC_BKP24R_bit at RTC_BKP24R.B16;
    sbit  BKP17_RTC_BKP24R_bit at RTC_BKP24R.B17;
    sbit  BKP18_RTC_BKP24R_bit at RTC_BKP24R.B18;
    sbit  BKP19_RTC_BKP24R_bit at RTC_BKP24R.B19;
    sbit  BKP20_RTC_BKP24R_bit at RTC_BKP24R.B20;
    sbit  BKP21_RTC_BKP24R_bit at RTC_BKP24R.B21;
    sbit  BKP22_RTC_BKP24R_bit at RTC_BKP24R.B22;
    sbit  BKP23_RTC_BKP24R_bit at RTC_BKP24R.B23;
    sbit  BKP24_RTC_BKP24R_bit at RTC_BKP24R.B24;
    sbit  BKP25_RTC_BKP24R_bit at RTC_BKP24R.B25;
    sbit  BKP26_RTC_BKP24R_bit at RTC_BKP24R.B26;
    sbit  BKP27_RTC_BKP24R_bit at RTC_BKP24R.B27;
    sbit  BKP28_RTC_BKP24R_bit at RTC_BKP24R.B28;
    sbit  BKP29_RTC_BKP24R_bit at RTC_BKP24R.B29;
    sbit  BKP30_RTC_BKP24R_bit at RTC_BKP24R.B30;
    sbit  BKP31_RTC_BKP24R_bit at RTC_BKP24R.B31;

sfr unsigned long   volatile RTC_BKP25R           absolute 0x400028B4;
    sbit  BKP0_RTC_BKP25R_bit at RTC_BKP25R.B0;
    sbit  BKP1_RTC_BKP25R_bit at RTC_BKP25R.B1;
    sbit  BKP2_RTC_BKP25R_bit at RTC_BKP25R.B2;
    sbit  BKP3_RTC_BKP25R_bit at RTC_BKP25R.B3;
    sbit  BKP4_RTC_BKP25R_bit at RTC_BKP25R.B4;
    sbit  BKP5_RTC_BKP25R_bit at RTC_BKP25R.B5;
    sbit  BKP6_RTC_BKP25R_bit at RTC_BKP25R.B6;
    sbit  BKP7_RTC_BKP25R_bit at RTC_BKP25R.B7;
    sbit  BKP8_RTC_BKP25R_bit at RTC_BKP25R.B8;
    sbit  BKP9_RTC_BKP25R_bit at RTC_BKP25R.B9;
    sbit  BKP10_RTC_BKP25R_bit at RTC_BKP25R.B10;
    sbit  BKP11_RTC_BKP25R_bit at RTC_BKP25R.B11;
    sbit  BKP12_RTC_BKP25R_bit at RTC_BKP25R.B12;
    sbit  BKP13_RTC_BKP25R_bit at RTC_BKP25R.B13;
    sbit  BKP14_RTC_BKP25R_bit at RTC_BKP25R.B14;
    sbit  BKP15_RTC_BKP25R_bit at RTC_BKP25R.B15;
    sbit  BKP16_RTC_BKP25R_bit at RTC_BKP25R.B16;
    sbit  BKP17_RTC_BKP25R_bit at RTC_BKP25R.B17;
    sbit  BKP18_RTC_BKP25R_bit at RTC_BKP25R.B18;
    sbit  BKP19_RTC_BKP25R_bit at RTC_BKP25R.B19;
    sbit  BKP20_RTC_BKP25R_bit at RTC_BKP25R.B20;
    sbit  BKP21_RTC_BKP25R_bit at RTC_BKP25R.B21;
    sbit  BKP22_RTC_BKP25R_bit at RTC_BKP25R.B22;
    sbit  BKP23_RTC_BKP25R_bit at RTC_BKP25R.B23;
    sbit  BKP24_RTC_BKP25R_bit at RTC_BKP25R.B24;
    sbit  BKP25_RTC_BKP25R_bit at RTC_BKP25R.B25;
    sbit  BKP26_RTC_BKP25R_bit at RTC_BKP25R.B26;
    sbit  BKP27_RTC_BKP25R_bit at RTC_BKP25R.B27;
    sbit  BKP28_RTC_BKP25R_bit at RTC_BKP25R.B28;
    sbit  BKP29_RTC_BKP25R_bit at RTC_BKP25R.B29;
    sbit  BKP30_RTC_BKP25R_bit at RTC_BKP25R.B30;
    sbit  BKP31_RTC_BKP25R_bit at RTC_BKP25R.B31;

sfr unsigned long   volatile RTC_BKP26R           absolute 0x400028B8;
    sbit  BKP0_RTC_BKP26R_bit at RTC_BKP26R.B0;
    sbit  BKP1_RTC_BKP26R_bit at RTC_BKP26R.B1;
    sbit  BKP2_RTC_BKP26R_bit at RTC_BKP26R.B2;
    sbit  BKP3_RTC_BKP26R_bit at RTC_BKP26R.B3;
    sbit  BKP4_RTC_BKP26R_bit at RTC_BKP26R.B4;
    sbit  BKP5_RTC_BKP26R_bit at RTC_BKP26R.B5;
    sbit  BKP6_RTC_BKP26R_bit at RTC_BKP26R.B6;
    sbit  BKP7_RTC_BKP26R_bit at RTC_BKP26R.B7;
    sbit  BKP8_RTC_BKP26R_bit at RTC_BKP26R.B8;
    sbit  BKP9_RTC_BKP26R_bit at RTC_BKP26R.B9;
    sbit  BKP10_RTC_BKP26R_bit at RTC_BKP26R.B10;
    sbit  BKP11_RTC_BKP26R_bit at RTC_BKP26R.B11;
    sbit  BKP12_RTC_BKP26R_bit at RTC_BKP26R.B12;
    sbit  BKP13_RTC_BKP26R_bit at RTC_BKP26R.B13;
    sbit  BKP14_RTC_BKP26R_bit at RTC_BKP26R.B14;
    sbit  BKP15_RTC_BKP26R_bit at RTC_BKP26R.B15;
    sbit  BKP16_RTC_BKP26R_bit at RTC_BKP26R.B16;
    sbit  BKP17_RTC_BKP26R_bit at RTC_BKP26R.B17;
    sbit  BKP18_RTC_BKP26R_bit at RTC_BKP26R.B18;
    sbit  BKP19_RTC_BKP26R_bit at RTC_BKP26R.B19;
    sbit  BKP20_RTC_BKP26R_bit at RTC_BKP26R.B20;
    sbit  BKP21_RTC_BKP26R_bit at RTC_BKP26R.B21;
    sbit  BKP22_RTC_BKP26R_bit at RTC_BKP26R.B22;
    sbit  BKP23_RTC_BKP26R_bit at RTC_BKP26R.B23;
    sbit  BKP24_RTC_BKP26R_bit at RTC_BKP26R.B24;
    sbit  BKP25_RTC_BKP26R_bit at RTC_BKP26R.B25;
    sbit  BKP26_RTC_BKP26R_bit at RTC_BKP26R.B26;
    sbit  BKP27_RTC_BKP26R_bit at RTC_BKP26R.B27;
    sbit  BKP28_RTC_BKP26R_bit at RTC_BKP26R.B28;
    sbit  BKP29_RTC_BKP26R_bit at RTC_BKP26R.B29;
    sbit  BKP30_RTC_BKP26R_bit at RTC_BKP26R.B30;
    sbit  BKP31_RTC_BKP26R_bit at RTC_BKP26R.B31;

sfr unsigned long   volatile RTC_BKP27R           absolute 0x400028BC;
    sbit  BKP0_RTC_BKP27R_bit at RTC_BKP27R.B0;
    sbit  BKP1_RTC_BKP27R_bit at RTC_BKP27R.B1;
    sbit  BKP2_RTC_BKP27R_bit at RTC_BKP27R.B2;
    sbit  BKP3_RTC_BKP27R_bit at RTC_BKP27R.B3;
    sbit  BKP4_RTC_BKP27R_bit at RTC_BKP27R.B4;
    sbit  BKP5_RTC_BKP27R_bit at RTC_BKP27R.B5;
    sbit  BKP6_RTC_BKP27R_bit at RTC_BKP27R.B6;
    sbit  BKP7_RTC_BKP27R_bit at RTC_BKP27R.B7;
    sbit  BKP8_RTC_BKP27R_bit at RTC_BKP27R.B8;
    sbit  BKP9_RTC_BKP27R_bit at RTC_BKP27R.B9;
    sbit  BKP10_RTC_BKP27R_bit at RTC_BKP27R.B10;
    sbit  BKP11_RTC_BKP27R_bit at RTC_BKP27R.B11;
    sbit  BKP12_RTC_BKP27R_bit at RTC_BKP27R.B12;
    sbit  BKP13_RTC_BKP27R_bit at RTC_BKP27R.B13;
    sbit  BKP14_RTC_BKP27R_bit at RTC_BKP27R.B14;
    sbit  BKP15_RTC_BKP27R_bit at RTC_BKP27R.B15;
    sbit  BKP16_RTC_BKP27R_bit at RTC_BKP27R.B16;
    sbit  BKP17_RTC_BKP27R_bit at RTC_BKP27R.B17;
    sbit  BKP18_RTC_BKP27R_bit at RTC_BKP27R.B18;
    sbit  BKP19_RTC_BKP27R_bit at RTC_BKP27R.B19;
    sbit  BKP20_RTC_BKP27R_bit at RTC_BKP27R.B20;
    sbit  BKP21_RTC_BKP27R_bit at RTC_BKP27R.B21;
    sbit  BKP22_RTC_BKP27R_bit at RTC_BKP27R.B22;
    sbit  BKP23_RTC_BKP27R_bit at RTC_BKP27R.B23;
    sbit  BKP24_RTC_BKP27R_bit at RTC_BKP27R.B24;
    sbit  BKP25_RTC_BKP27R_bit at RTC_BKP27R.B25;
    sbit  BKP26_RTC_BKP27R_bit at RTC_BKP27R.B26;
    sbit  BKP27_RTC_BKP27R_bit at RTC_BKP27R.B27;
    sbit  BKP28_RTC_BKP27R_bit at RTC_BKP27R.B28;
    sbit  BKP29_RTC_BKP27R_bit at RTC_BKP27R.B29;
    sbit  BKP30_RTC_BKP27R_bit at RTC_BKP27R.B30;
    sbit  BKP31_RTC_BKP27R_bit at RTC_BKP27R.B31;

sfr unsigned long   volatile RTC_BKP28R           absolute 0x400028C0;
    sbit  BKP0_RTC_BKP28R_bit at RTC_BKP28R.B0;
    sbit  BKP1_RTC_BKP28R_bit at RTC_BKP28R.B1;
    sbit  BKP2_RTC_BKP28R_bit at RTC_BKP28R.B2;
    sbit  BKP3_RTC_BKP28R_bit at RTC_BKP28R.B3;
    sbit  BKP4_RTC_BKP28R_bit at RTC_BKP28R.B4;
    sbit  BKP5_RTC_BKP28R_bit at RTC_BKP28R.B5;
    sbit  BKP6_RTC_BKP28R_bit at RTC_BKP28R.B6;
    sbit  BKP7_RTC_BKP28R_bit at RTC_BKP28R.B7;
    sbit  BKP8_RTC_BKP28R_bit at RTC_BKP28R.B8;
    sbit  BKP9_RTC_BKP28R_bit at RTC_BKP28R.B9;
    sbit  BKP10_RTC_BKP28R_bit at RTC_BKP28R.B10;
    sbit  BKP11_RTC_BKP28R_bit at RTC_BKP28R.B11;
    sbit  BKP12_RTC_BKP28R_bit at RTC_BKP28R.B12;
    sbit  BKP13_RTC_BKP28R_bit at RTC_BKP28R.B13;
    sbit  BKP14_RTC_BKP28R_bit at RTC_BKP28R.B14;
    sbit  BKP15_RTC_BKP28R_bit at RTC_BKP28R.B15;
    sbit  BKP16_RTC_BKP28R_bit at RTC_BKP28R.B16;
    sbit  BKP17_RTC_BKP28R_bit at RTC_BKP28R.B17;
    sbit  BKP18_RTC_BKP28R_bit at RTC_BKP28R.B18;
    sbit  BKP19_RTC_BKP28R_bit at RTC_BKP28R.B19;
    sbit  BKP20_RTC_BKP28R_bit at RTC_BKP28R.B20;
    sbit  BKP21_RTC_BKP28R_bit at RTC_BKP28R.B21;
    sbit  BKP22_RTC_BKP28R_bit at RTC_BKP28R.B22;
    sbit  BKP23_RTC_BKP28R_bit at RTC_BKP28R.B23;
    sbit  BKP24_RTC_BKP28R_bit at RTC_BKP28R.B24;
    sbit  BKP25_RTC_BKP28R_bit at RTC_BKP28R.B25;
    sbit  BKP26_RTC_BKP28R_bit at RTC_BKP28R.B26;
    sbit  BKP27_RTC_BKP28R_bit at RTC_BKP28R.B27;
    sbit  BKP28_RTC_BKP28R_bit at RTC_BKP28R.B28;
    sbit  BKP29_RTC_BKP28R_bit at RTC_BKP28R.B29;
    sbit  BKP30_RTC_BKP28R_bit at RTC_BKP28R.B30;
    sbit  BKP31_RTC_BKP28R_bit at RTC_BKP28R.B31;

sfr unsigned long   volatile RTC_BKP29R           absolute 0x400028C4;
    sbit  BKP0_RTC_BKP29R_bit at RTC_BKP29R.B0;
    sbit  BKP1_RTC_BKP29R_bit at RTC_BKP29R.B1;
    sbit  BKP2_RTC_BKP29R_bit at RTC_BKP29R.B2;
    sbit  BKP3_RTC_BKP29R_bit at RTC_BKP29R.B3;
    sbit  BKP4_RTC_BKP29R_bit at RTC_BKP29R.B4;
    sbit  BKP5_RTC_BKP29R_bit at RTC_BKP29R.B5;
    sbit  BKP6_RTC_BKP29R_bit at RTC_BKP29R.B6;
    sbit  BKP7_RTC_BKP29R_bit at RTC_BKP29R.B7;
    sbit  BKP8_RTC_BKP29R_bit at RTC_BKP29R.B8;
    sbit  BKP9_RTC_BKP29R_bit at RTC_BKP29R.B9;
    sbit  BKP10_RTC_BKP29R_bit at RTC_BKP29R.B10;
    sbit  BKP11_RTC_BKP29R_bit at RTC_BKP29R.B11;
    sbit  BKP12_RTC_BKP29R_bit at RTC_BKP29R.B12;
    sbit  BKP13_RTC_BKP29R_bit at RTC_BKP29R.B13;
    sbit  BKP14_RTC_BKP29R_bit at RTC_BKP29R.B14;
    sbit  BKP15_RTC_BKP29R_bit at RTC_BKP29R.B15;
    sbit  BKP16_RTC_BKP29R_bit at RTC_BKP29R.B16;
    sbit  BKP17_RTC_BKP29R_bit at RTC_BKP29R.B17;
    sbit  BKP18_RTC_BKP29R_bit at RTC_BKP29R.B18;
    sbit  BKP19_RTC_BKP29R_bit at RTC_BKP29R.B19;
    sbit  BKP20_RTC_BKP29R_bit at RTC_BKP29R.B20;
    sbit  BKP21_RTC_BKP29R_bit at RTC_BKP29R.B21;
    sbit  BKP22_RTC_BKP29R_bit at RTC_BKP29R.B22;
    sbit  BKP23_RTC_BKP29R_bit at RTC_BKP29R.B23;
    sbit  BKP24_RTC_BKP29R_bit at RTC_BKP29R.B24;
    sbit  BKP25_RTC_BKP29R_bit at RTC_BKP29R.B25;
    sbit  BKP26_RTC_BKP29R_bit at RTC_BKP29R.B26;
    sbit  BKP27_RTC_BKP29R_bit at RTC_BKP29R.B27;
    sbit  BKP28_RTC_BKP29R_bit at RTC_BKP29R.B28;
    sbit  BKP29_RTC_BKP29R_bit at RTC_BKP29R.B29;
    sbit  BKP30_RTC_BKP29R_bit at RTC_BKP29R.B30;
    sbit  BKP31_RTC_BKP29R_bit at RTC_BKP29R.B31;

sfr unsigned long   volatile RTC_BKP30R           absolute 0x400028C8;
    sbit  BKP0_RTC_BKP30R_bit at RTC_BKP30R.B0;
    sbit  BKP1_RTC_BKP30R_bit at RTC_BKP30R.B1;
    sbit  BKP2_RTC_BKP30R_bit at RTC_BKP30R.B2;
    sbit  BKP3_RTC_BKP30R_bit at RTC_BKP30R.B3;
    sbit  BKP4_RTC_BKP30R_bit at RTC_BKP30R.B4;
    sbit  BKP5_RTC_BKP30R_bit at RTC_BKP30R.B5;
    sbit  BKP6_RTC_BKP30R_bit at RTC_BKP30R.B6;
    sbit  BKP7_RTC_BKP30R_bit at RTC_BKP30R.B7;
    sbit  BKP8_RTC_BKP30R_bit at RTC_BKP30R.B8;
    sbit  BKP9_RTC_BKP30R_bit at RTC_BKP30R.B9;
    sbit  BKP10_RTC_BKP30R_bit at RTC_BKP30R.B10;
    sbit  BKP11_RTC_BKP30R_bit at RTC_BKP30R.B11;
    sbit  BKP12_RTC_BKP30R_bit at RTC_BKP30R.B12;
    sbit  BKP13_RTC_BKP30R_bit at RTC_BKP30R.B13;
    sbit  BKP14_RTC_BKP30R_bit at RTC_BKP30R.B14;
    sbit  BKP15_RTC_BKP30R_bit at RTC_BKP30R.B15;
    sbit  BKP16_RTC_BKP30R_bit at RTC_BKP30R.B16;
    sbit  BKP17_RTC_BKP30R_bit at RTC_BKP30R.B17;
    sbit  BKP18_RTC_BKP30R_bit at RTC_BKP30R.B18;
    sbit  BKP19_RTC_BKP30R_bit at RTC_BKP30R.B19;
    sbit  BKP20_RTC_BKP30R_bit at RTC_BKP30R.B20;
    sbit  BKP21_RTC_BKP30R_bit at RTC_BKP30R.B21;
    sbit  BKP22_RTC_BKP30R_bit at RTC_BKP30R.B22;
    sbit  BKP23_RTC_BKP30R_bit at RTC_BKP30R.B23;
    sbit  BKP24_RTC_BKP30R_bit at RTC_BKP30R.B24;
    sbit  BKP25_RTC_BKP30R_bit at RTC_BKP30R.B25;
    sbit  BKP26_RTC_BKP30R_bit at RTC_BKP30R.B26;
    sbit  BKP27_RTC_BKP30R_bit at RTC_BKP30R.B27;
    sbit  BKP28_RTC_BKP30R_bit at RTC_BKP30R.B28;
    sbit  BKP29_RTC_BKP30R_bit at RTC_BKP30R.B29;
    sbit  BKP30_RTC_BKP30R_bit at RTC_BKP30R.B30;
    sbit  BKP31_RTC_BKP30R_bit at RTC_BKP30R.B31;

sfr unsigned long   volatile RTC_BKP31R           absolute 0x400028CC;
    sbit  BKP0_RTC_BKP31R_bit at RTC_BKP31R.B0;
    sbit  BKP1_RTC_BKP31R_bit at RTC_BKP31R.B1;
    sbit  BKP2_RTC_BKP31R_bit at RTC_BKP31R.B2;
    sbit  BKP3_RTC_BKP31R_bit at RTC_BKP31R.B3;
    sbit  BKP4_RTC_BKP31R_bit at RTC_BKP31R.B4;
    sbit  BKP5_RTC_BKP31R_bit at RTC_BKP31R.B5;
    sbit  BKP6_RTC_BKP31R_bit at RTC_BKP31R.B6;
    sbit  BKP7_RTC_BKP31R_bit at RTC_BKP31R.B7;
    sbit  BKP8_RTC_BKP31R_bit at RTC_BKP31R.B8;
    sbit  BKP9_RTC_BKP31R_bit at RTC_BKP31R.B9;
    sbit  BKP10_RTC_BKP31R_bit at RTC_BKP31R.B10;
    sbit  BKP11_RTC_BKP31R_bit at RTC_BKP31R.B11;
    sbit  BKP12_RTC_BKP31R_bit at RTC_BKP31R.B12;
    sbit  BKP13_RTC_BKP31R_bit at RTC_BKP31R.B13;
    sbit  BKP14_RTC_BKP31R_bit at RTC_BKP31R.B14;
    sbit  BKP15_RTC_BKP31R_bit at RTC_BKP31R.B15;
    sbit  BKP16_RTC_BKP31R_bit at RTC_BKP31R.B16;
    sbit  BKP17_RTC_BKP31R_bit at RTC_BKP31R.B17;
    sbit  BKP18_RTC_BKP31R_bit at RTC_BKP31R.B18;
    sbit  BKP19_RTC_BKP31R_bit at RTC_BKP31R.B19;
    sbit  BKP20_RTC_BKP31R_bit at RTC_BKP31R.B20;
    sbit  BKP21_RTC_BKP31R_bit at RTC_BKP31R.B21;
    sbit  BKP22_RTC_BKP31R_bit at RTC_BKP31R.B22;
    sbit  BKP23_RTC_BKP31R_bit at RTC_BKP31R.B23;
    sbit  BKP24_RTC_BKP31R_bit at RTC_BKP31R.B24;
    sbit  BKP25_RTC_BKP31R_bit at RTC_BKP31R.B25;
    sbit  BKP26_RTC_BKP31R_bit at RTC_BKP31R.B26;
    sbit  BKP27_RTC_BKP31R_bit at RTC_BKP31R.B27;
    sbit  BKP28_RTC_BKP31R_bit at RTC_BKP31R.B28;
    sbit  BKP29_RTC_BKP31R_bit at RTC_BKP31R.B29;
    sbit  BKP30_RTC_BKP31R_bit at RTC_BKP31R.B30;
    sbit  BKP31_RTC_BKP31R_bit at RTC_BKP31R.B31;

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
    const register unsigned short int FRF = 4;
    sbit  FRF_bit at SPI1_CR2.B4;
    const register unsigned short int SSOE = 2;
    sbit  SSOE_bit at SPI1_CR2.B2;
    const register unsigned short int TXDMAEN = 1;
    sbit  TXDMAEN_bit at SPI1_CR2.B1;
    const register unsigned short int RXDMAEN = 0;
    sbit  RXDMAEN_bit at SPI1_CR2.B0;

sfr unsigned long   volatile SPI1_SR              absolute 0x40013008;
    const register unsigned short int TIFRFE = 8;
    sbit  TIFRFE_bit at SPI1_SR.B8;
    sbit  BSY_SPI1_SR_bit at SPI1_SR.B7;
    sbit  OVR_SPI1_SR_bit at SPI1_SR.B6;
    const register unsigned short int MODF_ = 5;
    sbit  MODF_bit at SPI1_SR.B5;
    const register unsigned short int CRCERR = 4;
    sbit  CRCERR_bit at SPI1_SR.B4;
    sbit  UDR_SPI1_SR_bit at SPI1_SR.B3;
    const register unsigned short int CHSIDE = 2;
    sbit  CHSIDE_bit at SPI1_SR.B2;
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
    sbit  TXEIE_SPI2_CR2_bit at SPI2_CR2.B7;
    sbit  RXNEIE_SPI2_CR2_bit at SPI2_CR2.B6;
    sbit  ERRIE_SPI2_CR2_bit at SPI2_CR2.B5;
    sbit  FRF_SPI2_CR2_bit at SPI2_CR2.B4;
    sbit  SSOE_SPI2_CR2_bit at SPI2_CR2.B2;
    sbit  TXDMAEN_SPI2_CR2_bit at SPI2_CR2.B1;
    sbit  RXDMAEN_SPI2_CR2_bit at SPI2_CR2.B0;

sfr unsigned long   volatile SPI2_SR              absolute 0x40003808;
    sbit  TIFRFE_SPI2_SR_bit at SPI2_SR.B8;
    sbit  BSY_SPI2_SR_bit at SPI2_SR.B7;
    sbit  OVR_SPI2_SR_bit at SPI2_SR.B6;
    sbit  MODF_SPI2_SR_bit at SPI2_SR.B5;
    sbit  CRCERR_SPI2_SR_bit at SPI2_SR.B4;
    sbit  UDR_SPI2_SR_bit at SPI2_SR.B3;
    sbit  CHSIDE_SPI2_SR_bit at SPI2_SR.B2;
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
    sbit  FRF_SPI3_CR2_bit at SPI3_CR2.B4;
    sbit  SSOE_SPI3_CR2_bit at SPI3_CR2.B2;
    sbit  TXDMAEN_SPI3_CR2_bit at SPI3_CR2.B1;
    sbit  RXDMAEN_SPI3_CR2_bit at SPI3_CR2.B0;

sfr unsigned long   volatile SPI3_SR              absolute 0x40003C08;
    sbit  TIFRFE_SPI3_SR_bit at SPI3_SR.B8;
    sbit  BSY_SPI3_SR_bit at SPI3_SR.B7;
    sbit  OVR_SPI3_SR_bit at SPI3_SR.B6;
    sbit  MODF_SPI3_SR_bit at SPI3_SR.B5;
    sbit  CRCERR_SPI3_SR_bit at SPI3_SR.B4;
    sbit  UDR_SPI3_SR_bit at SPI3_SR.B3;
    sbit  CHSIDE_SPI3_SR_bit at SPI3_SR.B2;
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

sfr unsigned long   volatile SPI3_I2SCFGR         absolute 0x40003C1C;
    sbit  I2SMOD_SPI3_I2SCFGR_bit at SPI3_I2SCFGR.B11;
    sbit  I2SE_SPI3_I2SCFGR_bit at SPI3_I2SCFGR.B10;
    sbit  I2SCFG0_SPI3_I2SCFGR_bit at SPI3_I2SCFGR.B8;
    sbit  I2SCFG1_SPI3_I2SCFGR_bit at SPI3_I2SCFGR.B9;
    sbit  PCMSYNC_SPI3_I2SCFGR_bit at SPI3_I2SCFGR.B7;
    sbit  I2SSTD0_SPI3_I2SCFGR_bit at SPI3_I2SCFGR.B4;
    sbit  I2SSTD1_SPI3_I2SCFGR_bit at SPI3_I2SCFGR.B5;
    sbit  CKPOL_SPI3_I2SCFGR_bit at SPI3_I2SCFGR.B3;
    sbit  DATLEN0_SPI3_I2SCFGR_bit at SPI3_I2SCFGR.B1;
    sbit  DATLEN1_SPI3_I2SCFGR_bit at SPI3_I2SCFGR.B2;
    sbit  CHLEN_SPI3_I2SCFGR_bit at SPI3_I2SCFGR.B0;

sfr unsigned long   volatile SPI3_I2SPR           absolute 0x40003C20;
    sbit  MCKOE_SPI3_I2SPR_bit at SPI3_I2SPR.B9;
    sbit  ODD_SPI3_I2SPR_bit at SPI3_I2SPR.B8;
    sbit  I2SDIV0_SPI3_I2SPR_bit at SPI3_I2SPR.B0;
    sbit  I2SDIV1_SPI3_I2SPR_bit at SPI3_I2SPR.B1;
    sbit  I2SDIV2_SPI3_I2SPR_bit at SPI3_I2SPR.B2;
    sbit  I2SDIV3_SPI3_I2SPR_bit at SPI3_I2SPR.B3;
    sbit  I2SDIV4_SPI3_I2SPR_bit at SPI3_I2SPR.B4;
    sbit  I2SDIV5_SPI3_I2SPR_bit at SPI3_I2SPR.B5;
    sbit  I2SDIV6_SPI3_I2SPR_bit at SPI3_I2SPR.B6;
    sbit  I2SDIV7_SPI3_I2SPR_bit at SPI3_I2SPR.B7;

sfr unsigned long   volatile SYSCFG_MEMRMP        absolute 0x40010000;
    const register unsigned short int MEM_MODE0 = 0;
    sbit  MEM_MODE0_bit at SYSCFG_MEMRMP.B0;
    const register unsigned short int MEM_MODE1 = 1;
    sbit  MEM_MODE1_bit at SYSCFG_MEMRMP.B1;
    const register unsigned short int BOOT_MODE0 = 8;
    sbit  BOOT_MODE0_bit at SYSCFG_MEMRMP.B8;
    const register unsigned short int BOOT_MODE1 = 9;
    sbit  BOOT_MODE1_bit at SYSCFG_MEMRMP.B9;

sfr unsigned long   volatile SYSCFG_PMC           absolute 0x40010004;
    const register unsigned short int USB_PU = 0;
    sbit  USB_PU_bit at SYSCFG_PMC.B0;

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

sfr unsigned long   volatile TIM10_CR1            absolute 0x40010C00;
    const register unsigned short int CKD0 = 8;
    sbit  CKD0_bit at TIM10_CR1.B8;
    const register unsigned short int CKD1 = 9;
    sbit  CKD1_bit at TIM10_CR1.B9;
    const register unsigned short int ARPE = 7;
    sbit  ARPE_bit at TIM10_CR1.B7;
    const register unsigned short int URS = 2;
    sbit  URS_bit at TIM10_CR1.B2;
    const register unsigned short int UDIS = 1;
    sbit  UDIS_bit at TIM10_CR1.B1;
    const register unsigned short int CEN = 0;
    sbit  CEN_bit at TIM10_CR1.B0;

sfr unsigned long   volatile TIM10_DIER           absolute 0x40010C0C;
    const register unsigned short int CC1IE = 1;
    sbit  CC1IE_bit at TIM10_DIER.B1;
    const register unsigned short int UIE = 0;
    sbit  UIE_bit at TIM10_DIER.B0;

sfr unsigned long   volatile TIM10_SR             absolute 0x40010C10;
    const register unsigned short int CC1OF = 9;
    sbit  CC1OF_bit at TIM10_SR.B9;
    const register unsigned short int CC1IF = 1;
    sbit  CC1IF_bit at TIM10_SR.B1;
    const register unsigned short int UIF = 0;
    sbit  UIF_bit at TIM10_SR.B0;

sfr unsigned long   volatile TIM10_EGR            absolute 0x40010C14;
    const register unsigned short int CC1G = 1;
    sbit  CC1G_bit at TIM10_EGR.B1;
    const register unsigned short int UG = 0;
    sbit  UG_bit at TIM10_EGR.B0;

sfr unsigned long   volatile TIM10_CCMR1_Output   absolute 0x40010C18;
    const register unsigned short int OC1M0 = 4;
    sbit  OC1M0_bit at TIM10_CCMR1_Output.B4;
    const register unsigned short int OC1M1 = 5;
    sbit  OC1M1_bit at TIM10_CCMR1_Output.B5;
    const register unsigned short int OC1M2 = 6;
    sbit  OC1M2_bit at TIM10_CCMR1_Output.B6;
    const register unsigned short int OC1PE = 3;
    sbit  OC1PE_bit at TIM10_CCMR1_Output.B3;
    const register unsigned short int OC1FE = 2;
    sbit  OC1FE_bit at TIM10_CCMR1_Output.B2;
    const register unsigned short int CC1S0 = 0;
    sbit  CC1S0_bit at TIM10_CCMR1_Output.B0;
    const register unsigned short int CC1S1 = 1;
    sbit  CC1S1_bit at TIM10_CCMR1_Output.B1;

sfr unsigned long   volatile TIM10_CCMR1_Input    absolute 0x40010C18;
    const register unsigned short int IC1F0 = 4;
    sbit  IC1F0_bit at TIM10_CCMR1_Input.B4;
    const register unsigned short int IC1F1 = 5;
    sbit  IC1F1_bit at TIM10_CCMR1_Input.B5;
    const register unsigned short int IC1F2 = 6;
    sbit  IC1F2_bit at TIM10_CCMR1_Input.B6;
    const register unsigned short int IC1F3 = 7;
    sbit  IC1F3_bit at TIM10_CCMR1_Input.B7;
    const register unsigned short int ICPCS0 = 2;
    sbit  ICPCS0_bit at TIM10_CCMR1_Input.B2;
    const register unsigned short int ICPCS1 = 3;
    sbit  ICPCS1_bit at TIM10_CCMR1_Input.B3;
    sbit  CC1S0_TIM10_CCMR1_Input_bit at TIM10_CCMR1_Input.B0;
    sbit  CC1S1_TIM10_CCMR1_Input_bit at TIM10_CCMR1_Input.B1;

sfr unsigned long   volatile TIM10_CCER           absolute 0x40010C20;
    const register unsigned short int CC1NP = 3;
    sbit  CC1NP_bit at TIM10_CCER.B3;
    const register unsigned short int CC1P = 1;
    sbit  CC1P_bit at TIM10_CCER.B1;
    const register unsigned short int CC1E = 0;
    sbit  CC1E_bit at TIM10_CCER.B0;

sfr unsigned long   volatile TIM10_CNT            absolute 0x40010C24;
    const register unsigned short int CNT0 = 0;
    sbit  CNT0_bit at TIM10_CNT.B0;
    const register unsigned short int CNT1 = 1;
    sbit  CNT1_bit at TIM10_CNT.B1;
    const register unsigned short int CNT2 = 2;
    sbit  CNT2_bit at TIM10_CNT.B2;
    const register unsigned short int CNT3 = 3;
    sbit  CNT3_bit at TIM10_CNT.B3;
    const register unsigned short int CNT4 = 4;
    sbit  CNT4_bit at TIM10_CNT.B4;
    const register unsigned short int CNT5 = 5;
    sbit  CNT5_bit at TIM10_CNT.B5;
    const register unsigned short int CNT6 = 6;
    sbit  CNT6_bit at TIM10_CNT.B6;
    const register unsigned short int CNT7 = 7;
    sbit  CNT7_bit at TIM10_CNT.B7;
    const register unsigned short int CNT8 = 8;
    sbit  CNT8_bit at TIM10_CNT.B8;
    const register unsigned short int CNT9 = 9;
    sbit  CNT9_bit at TIM10_CNT.B9;
    const register unsigned short int CNT10 = 10;
    sbit  CNT10_bit at TIM10_CNT.B10;
    const register unsigned short int CNT11 = 11;
    sbit  CNT11_bit at TIM10_CNT.B11;
    const register unsigned short int CNT12 = 12;
    sbit  CNT12_bit at TIM10_CNT.B12;
    const register unsigned short int CNT13 = 13;
    sbit  CNT13_bit at TIM10_CNT.B13;
    const register unsigned short int CNT14 = 14;
    sbit  CNT14_bit at TIM10_CNT.B14;
    const register unsigned short int CNT15 = 15;
    sbit  CNT15_bit at TIM10_CNT.B15;

sfr unsigned long   volatile TIM10_PSC            absolute 0x40010C28;
    const register unsigned short int PSC0 = 0;
    sbit  PSC0_bit at TIM10_PSC.B0;
    const register unsigned short int PSC1 = 1;
    sbit  PSC1_bit at TIM10_PSC.B1;
    const register unsigned short int PSC2 = 2;
    sbit  PSC2_bit at TIM10_PSC.B2;
    const register unsigned short int PSC3 = 3;
    sbit  PSC3_bit at TIM10_PSC.B3;
    const register unsigned short int PSC4 = 4;
    sbit  PSC4_bit at TIM10_PSC.B4;
    const register unsigned short int PSC5 = 5;
    sbit  PSC5_bit at TIM10_PSC.B5;
    const register unsigned short int PSC6 = 6;
    sbit  PSC6_bit at TIM10_PSC.B6;
    const register unsigned short int PSC7 = 7;
    sbit  PSC7_bit at TIM10_PSC.B7;
    const register unsigned short int PSC8 = 8;
    sbit  PSC8_bit at TIM10_PSC.B8;
    const register unsigned short int PSC9 = 9;
    sbit  PSC9_bit at TIM10_PSC.B9;
    const register unsigned short int PSC10 = 10;
    sbit  PSC10_bit at TIM10_PSC.B10;
    const register unsigned short int PSC11 = 11;
    sbit  PSC11_bit at TIM10_PSC.B11;
    const register unsigned short int PSC12 = 12;
    sbit  PSC12_bit at TIM10_PSC.B12;
    const register unsigned short int PSC13 = 13;
    sbit  PSC13_bit at TIM10_PSC.B13;
    const register unsigned short int PSC14 = 14;
    sbit  PSC14_bit at TIM10_PSC.B14;
    const register unsigned short int PSC15 = 15;
    sbit  PSC15_bit at TIM10_PSC.B15;

sfr unsigned long   volatile TIM10_ARR            absolute 0x40010C2C;
    const register unsigned short int ARR0 = 0;
    sbit  ARR0_bit at TIM10_ARR.B0;
    const register unsigned short int ARR1 = 1;
    sbit  ARR1_bit at TIM10_ARR.B1;
    const register unsigned short int ARR2 = 2;
    sbit  ARR2_bit at TIM10_ARR.B2;
    const register unsigned short int ARR3 = 3;
    sbit  ARR3_bit at TIM10_ARR.B3;
    const register unsigned short int ARR4 = 4;
    sbit  ARR4_bit at TIM10_ARR.B4;
    const register unsigned short int ARR5 = 5;
    sbit  ARR5_bit at TIM10_ARR.B5;
    const register unsigned short int ARR6 = 6;
    sbit  ARR6_bit at TIM10_ARR.B6;
    const register unsigned short int ARR7 = 7;
    sbit  ARR7_bit at TIM10_ARR.B7;
    const register unsigned short int ARR8 = 8;
    sbit  ARR8_bit at TIM10_ARR.B8;
    const register unsigned short int ARR9 = 9;
    sbit  ARR9_bit at TIM10_ARR.B9;
    const register unsigned short int ARR10 = 10;
    sbit  ARR10_bit at TIM10_ARR.B10;
    const register unsigned short int ARR11 = 11;
    sbit  ARR11_bit at TIM10_ARR.B11;
    const register unsigned short int ARR12 = 12;
    sbit  ARR12_bit at TIM10_ARR.B12;
    const register unsigned short int ARR13 = 13;
    sbit  ARR13_bit at TIM10_ARR.B13;
    const register unsigned short int ARR14 = 14;
    sbit  ARR14_bit at TIM10_ARR.B14;
    const register unsigned short int ARR15 = 15;
    sbit  ARR15_bit at TIM10_ARR.B15;

sfr unsigned long   volatile TIM10_CCR1           absolute 0x40010C34;
    sbit  CCR10_TIM10_CCR1_bit at TIM10_CCR1.B0;
    sbit  CCR11_TIM10_CCR1_bit at TIM10_CCR1.B1;
    const register unsigned short int CCR12 = 2;
    sbit  CCR12_bit at TIM10_CCR1.B2;
    const register unsigned short int CCR13 = 3;
    sbit  CCR13_bit at TIM10_CCR1.B3;
    const register unsigned short int CCR14 = 4;
    sbit  CCR14_bit at TIM10_CCR1.B4;
    const register unsigned short int CCR15 = 5;
    sbit  CCR15_bit at TIM10_CCR1.B5;
    const register unsigned short int CCR16 = 6;
    sbit  CCR16_bit at TIM10_CCR1.B6;
    const register unsigned short int CCR17 = 7;
    sbit  CCR17_bit at TIM10_CCR1.B7;
    const register unsigned short int CCR18 = 8;
    sbit  CCR18_bit at TIM10_CCR1.B8;
    const register unsigned short int CCR19 = 9;
    sbit  CCR19_bit at TIM10_CCR1.B9;
    const register unsigned short int CCR110 = 10;
    sbit  CCR110_bit at TIM10_CCR1.B10;
    const register unsigned short int CCR111 = 11;
    sbit  CCR111_bit at TIM10_CCR1.B11;
    const register unsigned short int CCR112 = 12;
    sbit  CCR112_bit at TIM10_CCR1.B12;
    const register unsigned short int CCR113 = 13;
    sbit  CCR113_bit at TIM10_CCR1.B13;
    const register unsigned short int CCR114 = 14;
    sbit  CCR114_bit at TIM10_CCR1.B14;
    const register unsigned short int CCR115 = 15;
    sbit  CCR115_bit at TIM10_CCR1.B15;

sfr unsigned long   volatile TIM10_OR             absolute 0x40010C50;
    const register unsigned short int TI1_RMP0 = 0;
    sbit  TI1_RMP0_bit at TIM10_OR.B0;
    const register unsigned short int TI1_RMP1 = 1;
    sbit  TI1_RMP1_bit at TIM10_OR.B1;

sfr unsigned long   volatile TIM11_CR1            absolute 0x40011000;
    sbit  CKD0_TIM11_CR1_bit at TIM11_CR1.B8;
    sbit  CKD1_TIM11_CR1_bit at TIM11_CR1.B9;
    sbit  ARPE_TIM11_CR1_bit at TIM11_CR1.B7;
    sbit  URS_TIM11_CR1_bit at TIM11_CR1.B2;
    sbit  UDIS_TIM11_CR1_bit at TIM11_CR1.B1;
    sbit  CEN_TIM11_CR1_bit at TIM11_CR1.B0;

sfr unsigned long   volatile TIM11_DIER           absolute 0x4001100C;
    sbit  CC1IE_TIM11_DIER_bit at TIM11_DIER.B1;
    sbit  UIE_TIM11_DIER_bit at TIM11_DIER.B0;

sfr unsigned long   volatile TIM11_SR             absolute 0x40011010;
    sbit  CC1OF_TIM11_SR_bit at TIM11_SR.B9;
    sbit  CC1IF_TIM11_SR_bit at TIM11_SR.B1;
    sbit  UIF_TIM11_SR_bit at TIM11_SR.B0;

sfr unsigned long   volatile TIM11_EGR            absolute 0x40011014;
    sbit  CC1G_TIM11_EGR_bit at TIM11_EGR.B1;
    sbit  UG_TIM11_EGR_bit at TIM11_EGR.B0;

sfr unsigned long   volatile TIM11_CCMR1_Output   absolute 0x40011018;
    sbit  OC1M0_TIM11_CCMR1_Output_bit at TIM11_CCMR1_Output.B4;
    sbit  OC1M1_TIM11_CCMR1_Output_bit at TIM11_CCMR1_Output.B5;
    sbit  OC1M2_TIM11_CCMR1_Output_bit at TIM11_CCMR1_Output.B6;
    sbit  OC1PE_TIM11_CCMR1_Output_bit at TIM11_CCMR1_Output.B3;
    sbit  OC1FE_TIM11_CCMR1_Output_bit at TIM11_CCMR1_Output.B2;
    sbit  CC1S0_TIM11_CCMR1_Output_bit at TIM11_CCMR1_Output.B0;
    sbit  CC1S1_TIM11_CCMR1_Output_bit at TIM11_CCMR1_Output.B1;

sfr unsigned long   volatile TIM11_CCMR1_Input    absolute 0x40011018;
    sbit  IC1F0_TIM11_CCMR1_Input_bit at TIM11_CCMR1_Input.B4;
    sbit  IC1F1_TIM11_CCMR1_Input_bit at TIM11_CCMR1_Input.B5;
    sbit  IC1F2_TIM11_CCMR1_Input_bit at TIM11_CCMR1_Input.B6;
    sbit  IC1F3_TIM11_CCMR1_Input_bit at TIM11_CCMR1_Input.B7;
    sbit  ICPCS0_TIM11_CCMR1_Input_bit at TIM11_CCMR1_Input.B2;
    sbit  ICPCS1_TIM11_CCMR1_Input_bit at TIM11_CCMR1_Input.B3;
    sbit  CC1S0_TIM11_CCMR1_Input_bit at TIM11_CCMR1_Input.B0;
    sbit  CC1S1_TIM11_CCMR1_Input_bit at TIM11_CCMR1_Input.B1;

sfr unsigned long   volatile TIM11_CCER           absolute 0x40011020;
    sbit  CC1NP_TIM11_CCER_bit at TIM11_CCER.B3;
    sbit  CC1P_TIM11_CCER_bit at TIM11_CCER.B1;
    sbit  CC1E_TIM11_CCER_bit at TIM11_CCER.B0;

sfr unsigned long   volatile TIM11_CNT            absolute 0x40011024;
    sbit  CNT0_TIM11_CNT_bit at TIM11_CNT.B0;
    sbit  CNT1_TIM11_CNT_bit at TIM11_CNT.B1;
    sbit  CNT2_TIM11_CNT_bit at TIM11_CNT.B2;
    sbit  CNT3_TIM11_CNT_bit at TIM11_CNT.B3;
    sbit  CNT4_TIM11_CNT_bit at TIM11_CNT.B4;
    sbit  CNT5_TIM11_CNT_bit at TIM11_CNT.B5;
    sbit  CNT6_TIM11_CNT_bit at TIM11_CNT.B6;
    sbit  CNT7_TIM11_CNT_bit at TIM11_CNT.B7;
    sbit  CNT8_TIM11_CNT_bit at TIM11_CNT.B8;
    sbit  CNT9_TIM11_CNT_bit at TIM11_CNT.B9;
    sbit  CNT10_TIM11_CNT_bit at TIM11_CNT.B10;
    sbit  CNT11_TIM11_CNT_bit at TIM11_CNT.B11;
    sbit  CNT12_TIM11_CNT_bit at TIM11_CNT.B12;
    sbit  CNT13_TIM11_CNT_bit at TIM11_CNT.B13;
    sbit  CNT14_TIM11_CNT_bit at TIM11_CNT.B14;
    sbit  CNT15_TIM11_CNT_bit at TIM11_CNT.B15;

sfr unsigned long   volatile TIM11_PSC            absolute 0x40011028;
    sbit  PSC0_TIM11_PSC_bit at TIM11_PSC.B0;
    sbit  PSC1_TIM11_PSC_bit at TIM11_PSC.B1;
    sbit  PSC2_TIM11_PSC_bit at TIM11_PSC.B2;
    sbit  PSC3_TIM11_PSC_bit at TIM11_PSC.B3;
    sbit  PSC4_TIM11_PSC_bit at TIM11_PSC.B4;
    sbit  PSC5_TIM11_PSC_bit at TIM11_PSC.B5;
    sbit  PSC6_TIM11_PSC_bit at TIM11_PSC.B6;
    sbit  PSC7_TIM11_PSC_bit at TIM11_PSC.B7;
    sbit  PSC8_TIM11_PSC_bit at TIM11_PSC.B8;
    sbit  PSC9_TIM11_PSC_bit at TIM11_PSC.B9;
    sbit  PSC10_TIM11_PSC_bit at TIM11_PSC.B10;
    sbit  PSC11_TIM11_PSC_bit at TIM11_PSC.B11;
    sbit  PSC12_TIM11_PSC_bit at TIM11_PSC.B12;
    sbit  PSC13_TIM11_PSC_bit at TIM11_PSC.B13;
    sbit  PSC14_TIM11_PSC_bit at TIM11_PSC.B14;
    sbit  PSC15_TIM11_PSC_bit at TIM11_PSC.B15;

sfr unsigned long   volatile TIM11_ARR            absolute 0x4001102C;
    sbit  ARR0_TIM11_ARR_bit at TIM11_ARR.B0;
    sbit  ARR1_TIM11_ARR_bit at TIM11_ARR.B1;
    sbit  ARR2_TIM11_ARR_bit at TIM11_ARR.B2;
    sbit  ARR3_TIM11_ARR_bit at TIM11_ARR.B3;
    sbit  ARR4_TIM11_ARR_bit at TIM11_ARR.B4;
    sbit  ARR5_TIM11_ARR_bit at TIM11_ARR.B5;
    sbit  ARR6_TIM11_ARR_bit at TIM11_ARR.B6;
    sbit  ARR7_TIM11_ARR_bit at TIM11_ARR.B7;
    sbit  ARR8_TIM11_ARR_bit at TIM11_ARR.B8;
    sbit  ARR9_TIM11_ARR_bit at TIM11_ARR.B9;
    sbit  ARR10_TIM11_ARR_bit at TIM11_ARR.B10;
    sbit  ARR11_TIM11_ARR_bit at TIM11_ARR.B11;
    sbit  ARR12_TIM11_ARR_bit at TIM11_ARR.B12;
    sbit  ARR13_TIM11_ARR_bit at TIM11_ARR.B13;
    sbit  ARR14_TIM11_ARR_bit at TIM11_ARR.B14;
    sbit  ARR15_TIM11_ARR_bit at TIM11_ARR.B15;

sfr unsigned long   volatile TIM11_CCR1           absolute 0x40011034;
    sbit  CCR10_TIM11_CCR1_bit at TIM11_CCR1.B0;
    sbit  CCR11_TIM11_CCR1_bit at TIM11_CCR1.B1;
    sbit  CCR12_TIM11_CCR1_bit at TIM11_CCR1.B2;
    sbit  CCR13_TIM11_CCR1_bit at TIM11_CCR1.B3;
    sbit  CCR14_TIM11_CCR1_bit at TIM11_CCR1.B4;
    sbit  CCR15_TIM11_CCR1_bit at TIM11_CCR1.B5;
    sbit  CCR16_TIM11_CCR1_bit at TIM11_CCR1.B6;
    sbit  CCR17_TIM11_CCR1_bit at TIM11_CCR1.B7;
    sbit  CCR18_TIM11_CCR1_bit at TIM11_CCR1.B8;
    sbit  CCR19_TIM11_CCR1_bit at TIM11_CCR1.B9;
    sbit  CCR110_TIM11_CCR1_bit at TIM11_CCR1.B10;
    sbit  CCR111_TIM11_CCR1_bit at TIM11_CCR1.B11;
    sbit  CCR112_TIM11_CCR1_bit at TIM11_CCR1.B12;
    sbit  CCR113_TIM11_CCR1_bit at TIM11_CCR1.B13;
    sbit  CCR114_TIM11_CCR1_bit at TIM11_CCR1.B14;
    sbit  CCR115_TIM11_CCR1_bit at TIM11_CCR1.B15;

sfr unsigned long   volatile TIM11_OR             absolute 0x40011050;
    sbit  TI1_RMP0_TIM11_OR_bit at TIM11_OR.B0;
    sbit  TI1_RMP1_TIM11_OR_bit at TIM11_OR.B1;

sfr unsigned long   volatile TIM2_CR1             absolute 0x40000000;
    sbit  CKD0_TIM2_CR1_bit at TIM2_CR1.B8;
    sbit  CKD1_TIM2_CR1_bit at TIM2_CR1.B9;
    sbit  ARPE_TIM2_CR1_bit at TIM2_CR1.B7;
    const register unsigned short int CMS0 = 5;
    sbit  CMS0_bit at TIM2_CR1.B5;
    const register unsigned short int CMS1 = 6;
    sbit  CMS1_bit at TIM2_CR1.B6;
    sbit  DIR_TIM2_CR1_bit at TIM2_CR1.B4;
    const register unsigned short int OPM = 3;
    sbit  OPM_bit at TIM2_CR1.B3;
    sbit  URS_TIM2_CR1_bit at TIM2_CR1.B2;
    sbit  UDIS_TIM2_CR1_bit at TIM2_CR1.B1;
    sbit  CEN_TIM2_CR1_bit at TIM2_CR1.B0;

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
    const register unsigned short int OCCS = 3;
    sbit  OCCS_bit at TIM2_SMCR.B3;
    const register unsigned short int SMS0 = 0;
    sbit  SMS0_bit at TIM2_SMCR.B0;
    const register unsigned short int SMS1 = 1;
    sbit  SMS1_bit at TIM2_SMCR.B1;
    const register unsigned short int SMS2 = 2;
    sbit  SMS2_bit at TIM2_SMCR.B2;

sfr unsigned long   volatile TIM2_DIER            absolute 0x4000000C;
    const register unsigned short int TDE = 14;
    sbit  TDE_bit at TIM2_DIER.B14;
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
    sbit  CC1IE_TIM2_DIER_bit at TIM2_DIER.B1;
    sbit  UIE_TIM2_DIER_bit at TIM2_DIER.B0;

sfr unsigned long   volatile TIM2_SR              absolute 0x40000010;
    const register unsigned short int CC4OF = 12;
    sbit  CC4OF_bit at TIM2_SR.B12;
    const register unsigned short int CC3OF = 11;
    sbit  CC3OF_bit at TIM2_SR.B11;
    const register unsigned short int CC2OF = 10;
    sbit  CC2OF_bit at TIM2_SR.B10;
    sbit  CC1OF_TIM2_SR_bit at TIM2_SR.B9;
    const register unsigned short int TIF = 6;
    sbit  TIF_bit at TIM2_SR.B6;
    const register unsigned short int CC4IF = 4;
    sbit  CC4IF_bit at TIM2_SR.B4;
    const register unsigned short int CC3IF = 3;
    sbit  CC3IF_bit at TIM2_SR.B3;
    const register unsigned short int CC2IF = 2;
    sbit  CC2IF_bit at TIM2_SR.B2;
    sbit  CC1IF_TIM2_SR_bit at TIM2_SR.B1;
    sbit  UIF_TIM2_SR_bit at TIM2_SR.B0;

sfr unsigned long   volatile TIM2_EGR             absolute 0x40000014;
    const register unsigned short int TG = 6;
    sbit  TG_bit at TIM2_EGR.B6;
    const register unsigned short int CC4G = 4;
    sbit  CC4G_bit at TIM2_EGR.B4;
    const register unsigned short int CC3G = 3;
    sbit  CC3G_bit at TIM2_EGR.B3;
    const register unsigned short int CC2G = 2;
    sbit  CC2G_bit at TIM2_EGR.B2;
    sbit  CC1G_TIM2_EGR_bit at TIM2_EGR.B1;
    sbit  UG_TIM2_EGR_bit at TIM2_EGR.B0;

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
    const register unsigned short int CC2S = 8;
    sbit  CC2S_bit at TIM2_CCMR1_Output.B8;
    const register unsigned short int OC1CE = 7;
    sbit  OC1CE_bit at TIM2_CCMR1_Output.B7;
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
    const register unsigned short int IC2PCS0 = 10;
    sbit  IC2PCS0_bit at TIM2_CCMR1_Input.B10;
    const register unsigned short int IC2PCS1 = 11;
    sbit  IC2PCS1_bit at TIM2_CCMR1_Input.B11;
    const register unsigned short int CC2S0 = 8;
    sbit  CC2S0_bit at TIM2_CCMR1_Input.B8;
    const register unsigned short int CC2S1 = 9;
    sbit  CC2S1_bit at TIM2_CCMR1_Input.B9;
    sbit  IC1F0_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B4;
    sbit  IC1F1_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B5;
    sbit  IC1F2_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B6;
    sbit  IC1F3_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B7;
    sbit  ICPCS0_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B2;
    sbit  ICPCS1_TIM2_CCMR1_Input_bit at TIM2_CCMR1_Input.B3;
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
    const register unsigned short int CC4S = 8;
    sbit  CC4S_bit at TIM2_CCMR2_Output.B8;
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
    const register unsigned short int CC4S0 = 8;
    sbit  CC4S0_bit at TIM2_CCMR2_Input.B8;
    const register unsigned short int CC4S1 = 9;
    sbit  CC4S1_bit at TIM2_CCMR2_Input.B9;
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
    sbit  CC1NP_TIM2_CCER_bit at TIM2_CCER.B3;
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
    const register unsigned short int CCR20 = 0;
    sbit  CCR20_bit at TIM2_CCR2.B0;
    const register unsigned short int CCR21 = 1;
    sbit  CCR21_bit at TIM2_CCR2.B1;
    const register unsigned short int CCR22 = 2;
    sbit  CCR22_bit at TIM2_CCR2.B2;
    const register unsigned short int CCR23 = 3;
    sbit  CCR23_bit at TIM2_CCR2.B3;
    const register unsigned short int CCR24 = 4;
    sbit  CCR24_bit at TIM2_CCR2.B4;
    const register unsigned short int CCR25 = 5;
    sbit  CCR25_bit at TIM2_CCR2.B5;
    const register unsigned short int CCR26 = 6;
    sbit  CCR26_bit at TIM2_CCR2.B6;
    const register unsigned short int CCR27 = 7;
    sbit  CCR27_bit at TIM2_CCR2.B7;
    const register unsigned short int CCR28 = 8;
    sbit  CCR28_bit at TIM2_CCR2.B8;
    const register unsigned short int CCR29 = 9;
    sbit  CCR29_bit at TIM2_CCR2.B9;
    const register unsigned short int CCR210 = 10;
    sbit  CCR210_bit at TIM2_CCR2.B10;
    const register unsigned short int CCR211 = 11;
    sbit  CCR211_bit at TIM2_CCR2.B11;
    const register unsigned short int CCR212 = 12;
    sbit  CCR212_bit at TIM2_CCR2.B12;
    const register unsigned short int CCR213 = 13;
    sbit  CCR213_bit at TIM2_CCR2.B13;
    const register unsigned short int CCR214 = 14;
    sbit  CCR214_bit at TIM2_CCR2.B14;
    const register unsigned short int CCR215 = 15;
    sbit  CCR215_bit at TIM2_CCR2.B15;

sfr unsigned long   volatile TIM2_CCR3            absolute 0x4000003C;
    sbit  CCR10_TIM2_CCR3_bit at TIM2_CCR3.B0;
    sbit  CCR11_TIM2_CCR3_bit at TIM2_CCR3.B1;
    sbit  CCR12_TIM2_CCR3_bit at TIM2_CCR3.B2;
    sbit  CCR13_TIM2_CCR3_bit at TIM2_CCR3.B3;
    sbit  CCR14_TIM2_CCR3_bit at TIM2_CCR3.B4;
    sbit  CCR15_TIM2_CCR3_bit at TIM2_CCR3.B5;
    sbit  CCR16_TIM2_CCR3_bit at TIM2_CCR3.B6;
    sbit  CCR17_TIM2_CCR3_bit at TIM2_CCR3.B7;
    sbit  CCR18_TIM2_CCR3_bit at TIM2_CCR3.B8;
    sbit  CCR19_TIM2_CCR3_bit at TIM2_CCR3.B9;
    sbit  CCR110_TIM2_CCR3_bit at TIM2_CCR3.B10;
    sbit  CCR111_TIM2_CCR3_bit at TIM2_CCR3.B11;
    sbit  CCR112_TIM2_CCR3_bit at TIM2_CCR3.B12;
    sbit  CCR113_TIM2_CCR3_bit at TIM2_CCR3.B13;
    sbit  CCR114_TIM2_CCR3_bit at TIM2_CCR3.B14;
    sbit  CCR115_TIM2_CCR3_bit at TIM2_CCR3.B15;

sfr unsigned long   volatile TIM2_CCR4            absolute 0x40000040;
    const register unsigned short int CCR40 = 0;
    sbit  CCR40_bit at TIM2_CCR4.B0;
    const register unsigned short int CCR41 = 1;
    sbit  CCR41_bit at TIM2_CCR4.B1;
    const register unsigned short int CCR42 = 2;
    sbit  CCR42_bit at TIM2_CCR4.B2;
    const register unsigned short int CCR43 = 3;
    sbit  CCR43_bit at TIM2_CCR4.B3;
    const register unsigned short int CCR44 = 4;
    sbit  CCR44_bit at TIM2_CCR4.B4;
    const register unsigned short int CCR45 = 5;
    sbit  CCR45_bit at TIM2_CCR4.B5;
    const register unsigned short int CCR46 = 6;
    sbit  CCR46_bit at TIM2_CCR4.B6;
    const register unsigned short int CCR47 = 7;
    sbit  CCR47_bit at TIM2_CCR4.B7;
    const register unsigned short int CCR48 = 8;
    sbit  CCR48_bit at TIM2_CCR4.B8;
    const register unsigned short int CCR49 = 9;
    sbit  CCR49_bit at TIM2_CCR4.B9;
    const register unsigned short int CCR410 = 10;
    sbit  CCR410_bit at TIM2_CCR4.B10;
    const register unsigned short int CCR411 = 11;
    sbit  CCR411_bit at TIM2_CCR4.B11;
    const register unsigned short int CCR412 = 12;
    sbit  CCR412_bit at TIM2_CCR4.B12;
    const register unsigned short int CCR413 = 13;
    sbit  CCR413_bit at TIM2_CCR4.B13;
    const register unsigned short int CCR414 = 14;
    sbit  CCR414_bit at TIM2_CCR4.B14;
    const register unsigned short int CCR415 = 15;
    sbit  CCR415_bit at TIM2_CCR4.B15;

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
    sbit  OC2CE_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B15;
    sbit  OC2M0_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B12;
    sbit  OC2M1_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B13;
    sbit  OC2M2_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B14;
    sbit  OC2PE_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B11;
    sbit  OC2FE_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B10;
    sbit  CC2S_TIM3_CCMR1_Output_bit at TIM3_CCMR1_Output.B8;
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
    sbit  IC2PCS0_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B10;
    sbit  IC2PCS1_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B11;
    sbit  CC2S0_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B8;
    sbit  CC2S1_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B9;
    sbit  IC1F0_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B4;
    sbit  IC1F1_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B5;
    sbit  IC1F2_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B6;
    sbit  IC1F3_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B7;
    sbit  ICPCS0_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B2;
    sbit  ICPCS1_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B3;
    sbit  CC1S0_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B0;
    sbit  CC1S1_TIM3_CCMR1_Input_bit at TIM3_CCMR1_Input.B1;

sfr unsigned long   volatile TIM3_CCMR2_Output    absolute 0x4000041C;
    sbit  OC4CE_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B15;
    sbit  OC4M0_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B12;
    sbit  OC4M1_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B13;
    sbit  OC4M2_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B14;
    sbit  OC4PE_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B11;
    sbit  OC4FE_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B10;
    sbit  CC4S_TIM3_CCMR2_Output_bit at TIM3_CCMR2_Output.B8;
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
    sbit  CCR10_TIM3_CCR3_bit at TIM3_CCR3.B0;
    sbit  CCR11_TIM3_CCR3_bit at TIM3_CCR3.B1;
    sbit  CCR12_TIM3_CCR3_bit at TIM3_CCR3.B2;
    sbit  CCR13_TIM3_CCR3_bit at TIM3_CCR3.B3;
    sbit  CCR14_TIM3_CCR3_bit at TIM3_CCR3.B4;
    sbit  CCR15_TIM3_CCR3_bit at TIM3_CCR3.B5;
    sbit  CCR16_TIM3_CCR3_bit at TIM3_CCR3.B6;
    sbit  CCR17_TIM3_CCR3_bit at TIM3_CCR3.B7;
    sbit  CCR18_TIM3_CCR3_bit at TIM3_CCR3.B8;
    sbit  CCR19_TIM3_CCR3_bit at TIM3_CCR3.B9;
    sbit  CCR110_TIM3_CCR3_bit at TIM3_CCR3.B10;
    sbit  CCR111_TIM3_CCR3_bit at TIM3_CCR3.B11;
    sbit  CCR112_TIM3_CCR3_bit at TIM3_CCR3.B12;
    sbit  CCR113_TIM3_CCR3_bit at TIM3_CCR3.B13;
    sbit  CCR114_TIM3_CCR3_bit at TIM3_CCR3.B14;
    sbit  CCR115_TIM3_CCR3_bit at TIM3_CCR3.B15;

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
    sbit  OCCS_TIM4_SMCR_bit at TIM4_SMCR.B3;
    sbit  SMS0_TIM4_SMCR_bit at TIM4_SMCR.B0;
    sbit  SMS1_TIM4_SMCR_bit at TIM4_SMCR.B1;
    sbit  SMS2_TIM4_SMCR_bit at TIM4_SMCR.B2;

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
    sbit  CC2S_TIM4_CCMR1_Output_bit at TIM4_CCMR1_Output.B8;
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
    sbit  IC2PCS0_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B10;
    sbit  IC2PCS1_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B11;
    sbit  CC2S0_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B8;
    sbit  CC2S1_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B9;
    sbit  IC1F0_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B4;
    sbit  IC1F1_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B5;
    sbit  IC1F2_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B6;
    sbit  IC1F3_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B7;
    sbit  ICPCS0_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B2;
    sbit  ICPCS1_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B3;
    sbit  CC1S0_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B0;
    sbit  CC1S1_TIM4_CCMR1_Input_bit at TIM4_CCMR1_Input.B1;

sfr unsigned long   volatile TIM4_CCMR2_Output    absolute 0x4000081C;
    sbit  OC4CE_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B15;
    sbit  OC4M0_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B12;
    sbit  OC4M1_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B13;
    sbit  OC4M2_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B14;
    sbit  OC4PE_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B11;
    sbit  OC4FE_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B10;
    sbit  CC4S_TIM4_CCMR2_Output_bit at TIM4_CCMR2_Output.B8;
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
    sbit  CC4NP_TIM4_CCER_bit at TIM4_CCER.B15;
    sbit  CC4P_TIM4_CCER_bit at TIM4_CCER.B13;
    sbit  CC4E_TIM4_CCER_bit at TIM4_CCER.B12;
    sbit  CC3NP_TIM4_CCER_bit at TIM4_CCER.B11;
    sbit  CC3P_TIM4_CCER_bit at TIM4_CCER.B9;
    sbit  CC3E_TIM4_CCER_bit at TIM4_CCER.B8;
    sbit  CC2NP_TIM4_CCER_bit at TIM4_CCER.B7;
    sbit  CC2P_TIM4_CCER_bit at TIM4_CCER.B5;
    sbit  CC2E_TIM4_CCER_bit at TIM4_CCER.B4;
    sbit  CC1NP_TIM4_CCER_bit at TIM4_CCER.B3;
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
    sbit  CCR10_TIM4_CCR3_bit at TIM4_CCR3.B0;
    sbit  CCR11_TIM4_CCR3_bit at TIM4_CCR3.B1;
    sbit  CCR12_TIM4_CCR3_bit at TIM4_CCR3.B2;
    sbit  CCR13_TIM4_CCR3_bit at TIM4_CCR3.B3;
    sbit  CCR14_TIM4_CCR3_bit at TIM4_CCR3.B4;
    sbit  CCR15_TIM4_CCR3_bit at TIM4_CCR3.B5;
    sbit  CCR16_TIM4_CCR3_bit at TIM4_CCR3.B6;
    sbit  CCR17_TIM4_CCR3_bit at TIM4_CCR3.B7;
    sbit  CCR18_TIM4_CCR3_bit at TIM4_CCR3.B8;
    sbit  CCR19_TIM4_CCR3_bit at TIM4_CCR3.B9;
    sbit  CCR110_TIM4_CCR3_bit at TIM4_CCR3.B10;
    sbit  CCR111_TIM4_CCR3_bit at TIM4_CCR3.B11;
    sbit  CCR112_TIM4_CCR3_bit at TIM4_CCR3.B12;
    sbit  CCR113_TIM4_CCR3_bit at TIM4_CCR3.B13;
    sbit  CCR114_TIM4_CCR3_bit at TIM4_CCR3.B14;
    sbit  CCR115_TIM4_CCR3_bit at TIM4_CCR3.B15;

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
    sbit  OCCS_TIM5_SMCR_bit at TIM5_SMCR.B3;
    sbit  SMS0_TIM5_SMCR_bit at TIM5_SMCR.B0;
    sbit  SMS1_TIM5_SMCR_bit at TIM5_SMCR.B1;
    sbit  SMS2_TIM5_SMCR_bit at TIM5_SMCR.B2;

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
    sbit  CC2S_TIM5_CCMR1_Output_bit at TIM5_CCMR1_Output.B8;
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
    sbit  IC2PCS0_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B10;
    sbit  IC2PCS1_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B11;
    sbit  CC2S0_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B8;
    sbit  CC2S1_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B9;
    sbit  IC1F0_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B4;
    sbit  IC1F1_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B5;
    sbit  IC1F2_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B6;
    sbit  IC1F3_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B7;
    sbit  ICPCS0_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B2;
    sbit  ICPCS1_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B3;
    sbit  CC1S0_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B0;
    sbit  CC1S1_TIM5_CCMR1_Input_bit at TIM5_CCMR1_Input.B1;

sfr unsigned long   volatile TIM5_CCMR2_Output    absolute 0x40000C1C;
    sbit  OC4CE_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B15;
    sbit  OC4M0_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B12;
    sbit  OC4M1_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B13;
    sbit  OC4M2_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B14;
    sbit  OC4PE_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B11;
    sbit  OC4FE_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B10;
    sbit  CC4S_TIM5_CCMR2_Output_bit at TIM5_CCMR2_Output.B8;
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
    sbit  CC4NP_TIM5_CCER_bit at TIM5_CCER.B15;
    sbit  CC4P_TIM5_CCER_bit at TIM5_CCER.B13;
    sbit  CC4E_TIM5_CCER_bit at TIM5_CCER.B12;
    sbit  CC3NP_TIM5_CCER_bit at TIM5_CCER.B11;
    sbit  CC3P_TIM5_CCER_bit at TIM5_CCER.B9;
    sbit  CC3E_TIM5_CCER_bit at TIM5_CCER.B8;
    sbit  CC2NP_TIM5_CCER_bit at TIM5_CCER.B7;
    sbit  CC2P_TIM5_CCER_bit at TIM5_CCER.B5;
    sbit  CC2E_TIM5_CCER_bit at TIM5_CCER.B4;
    sbit  CC1NP_TIM5_CCER_bit at TIM5_CCER.B3;
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
    sbit  CCR10_TIM5_CCR3_bit at TIM5_CCR3.B0;
    sbit  CCR11_TIM5_CCR3_bit at TIM5_CCR3.B1;
    sbit  CCR12_TIM5_CCR3_bit at TIM5_CCR3.B2;
    sbit  CCR13_TIM5_CCR3_bit at TIM5_CCR3.B3;
    sbit  CCR14_TIM5_CCR3_bit at TIM5_CCR3.B4;
    sbit  CCR15_TIM5_CCR3_bit at TIM5_CCR3.B5;
    sbit  CCR16_TIM5_CCR3_bit at TIM5_CCR3.B6;
    sbit  CCR17_TIM5_CCR3_bit at TIM5_CCR3.B7;
    sbit  CCR18_TIM5_CCR3_bit at TIM5_CCR3.B8;
    sbit  CCR19_TIM5_CCR3_bit at TIM5_CCR3.B9;
    sbit  CCR110_TIM5_CCR3_bit at TIM5_CCR3.B10;
    sbit  CCR111_TIM5_CCR3_bit at TIM5_CCR3.B11;
    sbit  CCR112_TIM5_CCR3_bit at TIM5_CCR3.B12;
    sbit  CCR113_TIM5_CCR3_bit at TIM5_CCR3.B13;
    sbit  CCR114_TIM5_CCR3_bit at TIM5_CCR3.B14;
    sbit  CCR115_TIM5_CCR3_bit at TIM5_CCR3.B15;

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

sfr unsigned long   volatile TIM9_CR1             absolute 0x40010800;
    sbit  CKD0_TIM9_CR1_bit at TIM9_CR1.B8;
    sbit  CKD1_TIM9_CR1_bit at TIM9_CR1.B9;
    sbit  ARPE_TIM9_CR1_bit at TIM9_CR1.B7;
    const register unsigned short int OMP = 3;
    sbit  OMP_bit at TIM9_CR1.B3;
    sbit  URS_TIM9_CR1_bit at TIM9_CR1.B2;
    sbit  UDIS_TIM9_CR1_bit at TIM9_CR1.B1;
    sbit  CEN_TIM9_CR1_bit at TIM9_CR1.B0;

sfr unsigned long   volatile TIM9_CR2             absolute 0x40010804;
    sbit  MMS0_TIM9_CR2_bit at TIM9_CR2.B4;
    sbit  MMS1_TIM9_CR2_bit at TIM9_CR2.B5;
    sbit  MMS2_TIM9_CR2_bit at TIM9_CR2.B6;

sfr unsigned long   volatile TIM9_SMCR            absolute 0x40010808;
    sbit  MSM_TIM9_SMCR_bit at TIM9_SMCR.B7;
    sbit  TS0_TIM9_SMCR_bit at TIM9_SMCR.B4;
    sbit  TS1_TIM9_SMCR_bit at TIM9_SMCR.B5;
    sbit  TS2_TIM9_SMCR_bit at TIM9_SMCR.B6;
    sbit  SMS0_TIM9_SMCR_bit at TIM9_SMCR.B0;
    sbit  SMS1_TIM9_SMCR_bit at TIM9_SMCR.B1;
    sbit  SMS2_TIM9_SMCR_bit at TIM9_SMCR.B2;

sfr unsigned long   volatile TIM9_DIER            absolute 0x4001080C;
    sbit  TIE_TIM9_DIER_bit at TIM9_DIER.B6;
    sbit  CC2IE_TIM9_DIER_bit at TIM9_DIER.B2;
    sbit  CC1IE_TIM9_DIER_bit at TIM9_DIER.B1;
    sbit  UIE_TIM9_DIER_bit at TIM9_DIER.B0;

sfr unsigned long   volatile TIM9_SR              absolute 0x40010810;
    sbit  CC2OF_TIM9_SR_bit at TIM9_SR.B10;
    sbit  CC1OF_TIM9_SR_bit at TIM9_SR.B9;
    sbit  TIF_TIM9_SR_bit at TIM9_SR.B6;
    sbit  CC2IF_TIM9_SR_bit at TIM9_SR.B2;
    sbit  CC1IF_TIM9_SR_bit at TIM9_SR.B1;
    sbit  UIF_TIM9_SR_bit at TIM9_SR.B0;

sfr unsigned long   volatile TIM9_EGR             absolute 0x40010814;
    sbit  TG_TIM9_EGR_bit at TIM9_EGR.B6;
    sbit  CC2G_TIM9_EGR_bit at TIM9_EGR.B2;
    sbit  CC1G_TIM9_EGR_bit at TIM9_EGR.B1;
    sbit  UG_TIM9_EGR_bit at TIM9_EGR.B0;

sfr unsigned long   volatile TIM9_CCMR1_Output    absolute 0x40010818;
    sbit  OC2CE_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B15;
    sbit  OC2M0_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B12;
    sbit  OC2M1_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B13;
    sbit  OC2M2_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B14;
    sbit  OC2PE_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B11;
    sbit  OC2FE_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B10;
    sbit  CC2S_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B8;
    sbit  OC1CE_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B7;
    sbit  OC1M0_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B4;
    sbit  OC1M1_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B5;
    sbit  OC1M2_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B6;
    sbit  OC1PE_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B3;
    sbit  OC1FE_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B2;
    sbit  CC1S0_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B0;
    sbit  CC1S1_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B1;

sfr unsigned long   volatile TIM9_CCMR1_Input     absolute 0x40010818;
    sbit  IC2F0_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B12;
    sbit  IC2F1_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B13;
    sbit  IC2F2_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B14;
    sbit  IC2F3_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B15;
    sbit  IC2PCS0_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B10;
    sbit  IC2PCS1_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B11;
    sbit  CC2S0_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B8;
    sbit  CC2S1_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B9;
    sbit  IC1F0_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B4;
    sbit  IC1F1_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B5;
    sbit  IC1F2_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B6;
    sbit  IC1F3_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B7;
    sbit  ICPCS0_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B2;
    sbit  ICPCS1_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B3;
    sbit  CC1S0_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B0;
    sbit  CC1S1_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B1;

sfr unsigned long   volatile TIM9_CNT             absolute 0x40010824;
    sbit  CNT0_TIM9_CNT_bit at TIM9_CNT.B0;
    sbit  CNT1_TIM9_CNT_bit at TIM9_CNT.B1;
    sbit  CNT2_TIM9_CNT_bit at TIM9_CNT.B2;
    sbit  CNT3_TIM9_CNT_bit at TIM9_CNT.B3;
    sbit  CNT4_TIM9_CNT_bit at TIM9_CNT.B4;
    sbit  CNT5_TIM9_CNT_bit at TIM9_CNT.B5;
    sbit  CNT6_TIM9_CNT_bit at TIM9_CNT.B6;
    sbit  CNT7_TIM9_CNT_bit at TIM9_CNT.B7;
    sbit  CNT8_TIM9_CNT_bit at TIM9_CNT.B8;
    sbit  CNT9_TIM9_CNT_bit at TIM9_CNT.B9;
    sbit  CNT10_TIM9_CNT_bit at TIM9_CNT.B10;
    sbit  CNT11_TIM9_CNT_bit at TIM9_CNT.B11;
    sbit  CNT12_TIM9_CNT_bit at TIM9_CNT.B12;
    sbit  CNT13_TIM9_CNT_bit at TIM9_CNT.B13;
    sbit  CNT14_TIM9_CNT_bit at TIM9_CNT.B14;
    sbit  CNT15_TIM9_CNT_bit at TIM9_CNT.B15;

sfr unsigned long   volatile TIM9_PSC             absolute 0x40010828;
    sbit  PSC0_TIM9_PSC_bit at TIM9_PSC.B0;
    sbit  PSC1_TIM9_PSC_bit at TIM9_PSC.B1;
    sbit  PSC2_TIM9_PSC_bit at TIM9_PSC.B2;
    sbit  PSC3_TIM9_PSC_bit at TIM9_PSC.B3;
    sbit  PSC4_TIM9_PSC_bit at TIM9_PSC.B4;
    sbit  PSC5_TIM9_PSC_bit at TIM9_PSC.B5;
    sbit  PSC6_TIM9_PSC_bit at TIM9_PSC.B6;
    sbit  PSC7_TIM9_PSC_bit at TIM9_PSC.B7;
    sbit  PSC8_TIM9_PSC_bit at TIM9_PSC.B8;
    sbit  PSC9_TIM9_PSC_bit at TIM9_PSC.B9;
    sbit  PSC10_TIM9_PSC_bit at TIM9_PSC.B10;
    sbit  PSC11_TIM9_PSC_bit at TIM9_PSC.B11;
    sbit  PSC12_TIM9_PSC_bit at TIM9_PSC.B12;
    sbit  PSC13_TIM9_PSC_bit at TIM9_PSC.B13;
    sbit  PSC14_TIM9_PSC_bit at TIM9_PSC.B14;
    sbit  PSC15_TIM9_PSC_bit at TIM9_PSC.B15;

sfr unsigned long   volatile TIM9_ARR             absolute 0x4001082C;
    sbit  ARR0_TIM9_ARR_bit at TIM9_ARR.B0;
    sbit  ARR1_TIM9_ARR_bit at TIM9_ARR.B1;
    sbit  ARR2_TIM9_ARR_bit at TIM9_ARR.B2;
    sbit  ARR3_TIM9_ARR_bit at TIM9_ARR.B3;
    sbit  ARR4_TIM9_ARR_bit at TIM9_ARR.B4;
    sbit  ARR5_TIM9_ARR_bit at TIM9_ARR.B5;
    sbit  ARR6_TIM9_ARR_bit at TIM9_ARR.B6;
    sbit  ARR7_TIM9_ARR_bit at TIM9_ARR.B7;
    sbit  ARR8_TIM9_ARR_bit at TIM9_ARR.B8;
    sbit  ARR9_TIM9_ARR_bit at TIM9_ARR.B9;
    sbit  ARR10_TIM9_ARR_bit at TIM9_ARR.B10;
    sbit  ARR11_TIM9_ARR_bit at TIM9_ARR.B11;
    sbit  ARR12_TIM9_ARR_bit at TIM9_ARR.B12;
    sbit  ARR13_TIM9_ARR_bit at TIM9_ARR.B13;
    sbit  ARR14_TIM9_ARR_bit at TIM9_ARR.B14;
    sbit  ARR15_TIM9_ARR_bit at TIM9_ARR.B15;

sfr unsigned long   volatile TIM9_CCR1            absolute 0x40010834;
    sbit  CCR10_TIM9_CCR1_bit at TIM9_CCR1.B0;
    sbit  CCR11_TIM9_CCR1_bit at TIM9_CCR1.B1;
    sbit  CCR12_TIM9_CCR1_bit at TIM9_CCR1.B2;
    sbit  CCR13_TIM9_CCR1_bit at TIM9_CCR1.B3;
    sbit  CCR14_TIM9_CCR1_bit at TIM9_CCR1.B4;
    sbit  CCR15_TIM9_CCR1_bit at TIM9_CCR1.B5;
    sbit  CCR16_TIM9_CCR1_bit at TIM9_CCR1.B6;
    sbit  CCR17_TIM9_CCR1_bit at TIM9_CCR1.B7;
    sbit  CCR18_TIM9_CCR1_bit at TIM9_CCR1.B8;
    sbit  CCR19_TIM9_CCR1_bit at TIM9_CCR1.B9;
    sbit  CCR110_TIM9_CCR1_bit at TIM9_CCR1.B10;
    sbit  CCR111_TIM9_CCR1_bit at TIM9_CCR1.B11;
    sbit  CCR112_TIM9_CCR1_bit at TIM9_CCR1.B12;
    sbit  CCR113_TIM9_CCR1_bit at TIM9_CCR1.B13;
    sbit  CCR114_TIM9_CCR1_bit at TIM9_CCR1.B14;
    sbit  CCR115_TIM9_CCR1_bit at TIM9_CCR1.B15;

sfr unsigned long   volatile TIM9_CCR2            absolute 0x40010838;
    sbit  CCR20_TIM9_CCR2_bit at TIM9_CCR2.B0;
    sbit  CCR21_TIM9_CCR2_bit at TIM9_CCR2.B1;
    sbit  CCR22_TIM9_CCR2_bit at TIM9_CCR2.B2;
    sbit  CCR23_TIM9_CCR2_bit at TIM9_CCR2.B3;
    sbit  CCR24_TIM9_CCR2_bit at TIM9_CCR2.B4;
    sbit  CCR25_TIM9_CCR2_bit at TIM9_CCR2.B5;
    sbit  CCR26_TIM9_CCR2_bit at TIM9_CCR2.B6;
    sbit  CCR27_TIM9_CCR2_bit at TIM9_CCR2.B7;
    sbit  CCR28_TIM9_CCR2_bit at TIM9_CCR2.B8;
    sbit  CCR29_TIM9_CCR2_bit at TIM9_CCR2.B9;
    sbit  CCR210_TIM9_CCR2_bit at TIM9_CCR2.B10;
    sbit  CCR211_TIM9_CCR2_bit at TIM9_CCR2.B11;
    sbit  CCR212_TIM9_CCR2_bit at TIM9_CCR2.B12;
    sbit  CCR213_TIM9_CCR2_bit at TIM9_CCR2.B13;
    sbit  CCR214_TIM9_CCR2_bit at TIM9_CCR2.B14;
    sbit  CCR215_TIM9_CCR2_bit at TIM9_CCR2.B15;

sfr unsigned long   volatile TIM9_OR              absolute 0x40010850;
    sbit  TI1_RMP0_TIM9_OR_bit at TIM9_OR.B0;
    sbit  TI1_RMP1_TIM9_OR_bit at TIM9_OR.B1;

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
    const register unsigned short int NF = 2;
    sbit  NF_bit at USART1_SR.B2;
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
    const register unsigned short int OVER8 = 15;
    sbit  OVER8_bit at USART1_CR1.B15;
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
    const register unsigned short int ADD0 = 0;
    sbit  ADD0_bit at USART1_CR2.B0;
    const register unsigned short int ADD1 = 1;
    sbit  ADD1_bit at USART1_CR2.B1;
    const register unsigned short int ADD2 = 2;
    sbit  ADD2_bit at USART1_CR2.B2;
    const register unsigned short int ADD3 = 3;
    sbit  ADD3_bit at USART1_CR2.B3;

sfr unsigned long   volatile USART1_CR3           absolute 0x40013814;
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
    sbit  NF_USART2_SR_bit at USART2_SR.B2;
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
    sbit  OVER8_USART2_CR1_bit at USART2_CR1.B15;
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
    sbit  NF_USART3_SR_bit at USART3_SR.B2;
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
    sbit  OVER8_USART3_CR1_bit at USART3_CR1.B15;
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
    sbit  ONEBIT_USART3_CR3_bit at USART3_CR3.B11;
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

sfr unsigned long   volatile USB_USB_EP0R         absolute 0x40005C00;
    const register unsigned short int EA0 = 0;
    sbit  EA0_bit at USB_USB_EP0R.B0;
    const register unsigned short int EA1 = 1;
    sbit  EA1_bit at USB_USB_EP0R.B1;
    const register unsigned short int EA2 = 2;
    sbit  EA2_bit at USB_USB_EP0R.B2;
    const register unsigned short int EA3 = 3;
    sbit  EA3_bit at USB_USB_EP0R.B3;
    const register unsigned short int STAT_TX0 = 4;
    sbit  STAT_TX0_bit at USB_USB_EP0R.B4;
    const register unsigned short int STAT_TX1 = 5;
    sbit  STAT_TX1_bit at USB_USB_EP0R.B5;
    const register unsigned short int DTOG_TX = 6;
    sbit  DTOG_TX_bit at USB_USB_EP0R.B6;
    const register unsigned short int CTR_TX = 7;
    sbit  CTR_TX_bit at USB_USB_EP0R.B7;
    const register unsigned short int EP_KIND = 8;
    sbit  EP_KIND_bit at USB_USB_EP0R.B8;
    const register unsigned short int EP_TYPE0 = 9;
    sbit  EP_TYPE0_bit at USB_USB_EP0R.B9;
    const register unsigned short int EP_TYPE1 = 10;
    sbit  EP_TYPE1_bit at USB_USB_EP0R.B10;
    const register unsigned short int SETUP = 11;
    sbit  SETUP_bit at USB_USB_EP0R.B11;
    const register unsigned short int STAT_RX0 = 12;
    sbit  STAT_RX0_bit at USB_USB_EP0R.B12;
    const register unsigned short int STAT_RX1 = 13;
    sbit  STAT_RX1_bit at USB_USB_EP0R.B13;
    const register unsigned short int DTOG_RX = 14;
    sbit  DTOG_RX_bit at USB_USB_EP0R.B14;
    const register unsigned short int CTR_RX = 15;
    sbit  CTR_RX_bit at USB_USB_EP0R.B15;

sfr unsigned long   volatile USB_USB_EP1R         absolute 0x40005C04;
    sbit  EA0_USB_USB_EP1R_bit at USB_USB_EP1R.B0;
    sbit  EA1_USB_USB_EP1R_bit at USB_USB_EP1R.B1;
    sbit  EA2_USB_USB_EP1R_bit at USB_USB_EP1R.B2;
    sbit  EA3_USB_USB_EP1R_bit at USB_USB_EP1R.B3;
    sbit  STAT_TX0_USB_USB_EP1R_bit at USB_USB_EP1R.B4;
    sbit  STAT_TX1_USB_USB_EP1R_bit at USB_USB_EP1R.B5;
    sbit  DTOG_TX_USB_USB_EP1R_bit at USB_USB_EP1R.B6;
    sbit  CTR_TX_USB_USB_EP1R_bit at USB_USB_EP1R.B7;
    sbit  EP_KIND_USB_USB_EP1R_bit at USB_USB_EP1R.B8;
    sbit  EP_TYPE0_USB_USB_EP1R_bit at USB_USB_EP1R.B9;
    sbit  EP_TYPE1_USB_USB_EP1R_bit at USB_USB_EP1R.B10;
    sbit  SETUP_USB_USB_EP1R_bit at USB_USB_EP1R.B11;
    sbit  STAT_RX0_USB_USB_EP1R_bit at USB_USB_EP1R.B12;
    sbit  STAT_RX1_USB_USB_EP1R_bit at USB_USB_EP1R.B13;
    sbit  DTOG_RX_USB_USB_EP1R_bit at USB_USB_EP1R.B14;
    sbit  CTR_RX_USB_USB_EP1R_bit at USB_USB_EP1R.B15;

sfr unsigned long   volatile USB_USB_EP2R         absolute 0x40005C08;
    sbit  EA0_USB_USB_EP2R_bit at USB_USB_EP2R.B0;
    sbit  EA1_USB_USB_EP2R_bit at USB_USB_EP2R.B1;
    sbit  EA2_USB_USB_EP2R_bit at USB_USB_EP2R.B2;
    sbit  EA3_USB_USB_EP2R_bit at USB_USB_EP2R.B3;
    sbit  STAT_TX0_USB_USB_EP2R_bit at USB_USB_EP2R.B4;
    sbit  STAT_TX1_USB_USB_EP2R_bit at USB_USB_EP2R.B5;
    sbit  DTOG_TX_USB_USB_EP2R_bit at USB_USB_EP2R.B6;
    sbit  CTR_TX_USB_USB_EP2R_bit at USB_USB_EP2R.B7;
    sbit  EP_KIND_USB_USB_EP2R_bit at USB_USB_EP2R.B8;
    sbit  EP_TYPE0_USB_USB_EP2R_bit at USB_USB_EP2R.B9;
    sbit  EP_TYPE1_USB_USB_EP2R_bit at USB_USB_EP2R.B10;
    sbit  SETUP_USB_USB_EP2R_bit at USB_USB_EP2R.B11;
    sbit  STAT_RX0_USB_USB_EP2R_bit at USB_USB_EP2R.B12;
    sbit  STAT_RX1_USB_USB_EP2R_bit at USB_USB_EP2R.B13;
    sbit  DTOG_RX_USB_USB_EP2R_bit at USB_USB_EP2R.B14;
    sbit  CTR_RX_USB_USB_EP2R_bit at USB_USB_EP2R.B15;

sfr unsigned long   volatile USB_USB_EP3R         absolute 0x40005C0C;
    sbit  EA0_USB_USB_EP3R_bit at USB_USB_EP3R.B0;
    sbit  EA1_USB_USB_EP3R_bit at USB_USB_EP3R.B1;
    sbit  EA2_USB_USB_EP3R_bit at USB_USB_EP3R.B2;
    sbit  EA3_USB_USB_EP3R_bit at USB_USB_EP3R.B3;
    sbit  STAT_TX0_USB_USB_EP3R_bit at USB_USB_EP3R.B4;
    sbit  STAT_TX1_USB_USB_EP3R_bit at USB_USB_EP3R.B5;
    sbit  DTOG_TX_USB_USB_EP3R_bit at USB_USB_EP3R.B6;
    sbit  CTR_TX_USB_USB_EP3R_bit at USB_USB_EP3R.B7;
    sbit  EP_KIND_USB_USB_EP3R_bit at USB_USB_EP3R.B8;
    sbit  EP_TYPE0_USB_USB_EP3R_bit at USB_USB_EP3R.B9;
    sbit  EP_TYPE1_USB_USB_EP3R_bit at USB_USB_EP3R.B10;
    sbit  SETUP_USB_USB_EP3R_bit at USB_USB_EP3R.B11;
    sbit  STAT_RX0_USB_USB_EP3R_bit at USB_USB_EP3R.B12;
    sbit  STAT_RX1_USB_USB_EP3R_bit at USB_USB_EP3R.B13;
    sbit  DTOG_RX_USB_USB_EP3R_bit at USB_USB_EP3R.B14;
    sbit  CTR_RX_USB_USB_EP3R_bit at USB_USB_EP3R.B15;

sfr unsigned long   volatile USB_USB_EP4R         absolute 0x40005C10;
    sbit  EA0_USB_USB_EP4R_bit at USB_USB_EP4R.B0;
    sbit  EA1_USB_USB_EP4R_bit at USB_USB_EP4R.B1;
    sbit  EA2_USB_USB_EP4R_bit at USB_USB_EP4R.B2;
    sbit  EA3_USB_USB_EP4R_bit at USB_USB_EP4R.B3;
    sbit  STAT_TX0_USB_USB_EP4R_bit at USB_USB_EP4R.B4;
    sbit  STAT_TX1_USB_USB_EP4R_bit at USB_USB_EP4R.B5;
    sbit  DTOG_TX_USB_USB_EP4R_bit at USB_USB_EP4R.B6;
    sbit  CTR_TX_USB_USB_EP4R_bit at USB_USB_EP4R.B7;
    sbit  EP_KIND_USB_USB_EP4R_bit at USB_USB_EP4R.B8;
    sbit  EP_TYPE0_USB_USB_EP4R_bit at USB_USB_EP4R.B9;
    sbit  EP_TYPE1_USB_USB_EP4R_bit at USB_USB_EP4R.B10;
    sbit  SETUP_USB_USB_EP4R_bit at USB_USB_EP4R.B11;
    sbit  STAT_RX0_USB_USB_EP4R_bit at USB_USB_EP4R.B12;
    sbit  STAT_RX1_USB_USB_EP4R_bit at USB_USB_EP4R.B13;
    sbit  DTOG_RX_USB_USB_EP4R_bit at USB_USB_EP4R.B14;
    sbit  CTR_RX_USB_USB_EP4R_bit at USB_USB_EP4R.B15;

sfr unsigned long   volatile USB_USB_EP5R         absolute 0x40005C14;
    sbit  EA0_USB_USB_EP5R_bit at USB_USB_EP5R.B0;
    sbit  EA1_USB_USB_EP5R_bit at USB_USB_EP5R.B1;
    sbit  EA2_USB_USB_EP5R_bit at USB_USB_EP5R.B2;
    sbit  EA3_USB_USB_EP5R_bit at USB_USB_EP5R.B3;
    sbit  STAT_TX0_USB_USB_EP5R_bit at USB_USB_EP5R.B4;
    sbit  STAT_TX1_USB_USB_EP5R_bit at USB_USB_EP5R.B5;
    sbit  DTOG_TX_USB_USB_EP5R_bit at USB_USB_EP5R.B6;
    sbit  CTR_TX_USB_USB_EP5R_bit at USB_USB_EP5R.B7;
    sbit  EP_KIND_USB_USB_EP5R_bit at USB_USB_EP5R.B8;
    sbit  EP_TYPE0_USB_USB_EP5R_bit at USB_USB_EP5R.B9;
    sbit  EP_TYPE1_USB_USB_EP5R_bit at USB_USB_EP5R.B10;
    sbit  SETUP_USB_USB_EP5R_bit at USB_USB_EP5R.B11;
    sbit  STAT_RX0_USB_USB_EP5R_bit at USB_USB_EP5R.B12;
    sbit  STAT_RX1_USB_USB_EP5R_bit at USB_USB_EP5R.B13;
    sbit  DTOG_RX_USB_USB_EP5R_bit at USB_USB_EP5R.B14;
    sbit  CTR_RX_USB_USB_EP5R_bit at USB_USB_EP5R.B15;

sfr unsigned long   volatile USB_USB_EP6R         absolute 0x40005C18;
    sbit  EA0_USB_USB_EP6R_bit at USB_USB_EP6R.B0;
    sbit  EA1_USB_USB_EP6R_bit at USB_USB_EP6R.B1;
    sbit  EA2_USB_USB_EP6R_bit at USB_USB_EP6R.B2;
    sbit  EA3_USB_USB_EP6R_bit at USB_USB_EP6R.B3;
    sbit  STAT_TX0_USB_USB_EP6R_bit at USB_USB_EP6R.B4;
    sbit  STAT_TX1_USB_USB_EP6R_bit at USB_USB_EP6R.B5;
    sbit  DTOG_TX_USB_USB_EP6R_bit at USB_USB_EP6R.B6;
    sbit  CTR_TX_USB_USB_EP6R_bit at USB_USB_EP6R.B7;
    sbit  EP_KIND_USB_USB_EP6R_bit at USB_USB_EP6R.B8;
    sbit  EP_TYPE0_USB_USB_EP6R_bit at USB_USB_EP6R.B9;
    sbit  EP_TYPE1_USB_USB_EP6R_bit at USB_USB_EP6R.B10;
    sbit  SETUP_USB_USB_EP6R_bit at USB_USB_EP6R.B11;
    sbit  STAT_RX0_USB_USB_EP6R_bit at USB_USB_EP6R.B12;
    sbit  STAT_RX1_USB_USB_EP6R_bit at USB_USB_EP6R.B13;
    sbit  DTOG_RX_USB_USB_EP6R_bit at USB_USB_EP6R.B14;
    sbit  CTR_RX_USB_USB_EP6R_bit at USB_USB_EP6R.B15;

sfr unsigned long   volatile USB_USB_EP7R         absolute 0x40005C1C;
    sbit  EA0_USB_USB_EP7R_bit at USB_USB_EP7R.B0;
    sbit  EA1_USB_USB_EP7R_bit at USB_USB_EP7R.B1;
    sbit  EA2_USB_USB_EP7R_bit at USB_USB_EP7R.B2;
    sbit  EA3_USB_USB_EP7R_bit at USB_USB_EP7R.B3;
    sbit  STAT_TX0_USB_USB_EP7R_bit at USB_USB_EP7R.B4;
    sbit  STAT_TX1_USB_USB_EP7R_bit at USB_USB_EP7R.B5;
    sbit  DTOG_TX_USB_USB_EP7R_bit at USB_USB_EP7R.B6;
    sbit  CTR_TX_USB_USB_EP7R_bit at USB_USB_EP7R.B7;
    sbit  EP_KIND_USB_USB_EP7R_bit at USB_USB_EP7R.B8;
    sbit  EP_TYPE0_USB_USB_EP7R_bit at USB_USB_EP7R.B9;
    sbit  EP_TYPE1_USB_USB_EP7R_bit at USB_USB_EP7R.B10;
    sbit  SETUP_USB_USB_EP7R_bit at USB_USB_EP7R.B11;
    sbit  STAT_RX0_USB_USB_EP7R_bit at USB_USB_EP7R.B12;
    sbit  STAT_RX1_USB_USB_EP7R_bit at USB_USB_EP7R.B13;
    sbit  DTOG_RX_USB_USB_EP7R_bit at USB_USB_EP7R.B14;
    sbit  CTR_RX_USB_USB_EP7R_bit at USB_USB_EP7R.B15;

sfr unsigned long   volatile USB_USB_CNTR         absolute 0x40005C40;
    const register unsigned short int FRES = 0;
    sbit  FRES_bit at USB_USB_CNTR.B0;
    const register unsigned short int PDWN = 1;
    sbit  PDWN_bit at USB_USB_CNTR.B1;
    const register unsigned short int LPMODE = 2;
    sbit  LPMODE_bit at USB_USB_CNTR.B2;
    const register unsigned short int FSUSP = 3;
    sbit  FSUSP_bit at USB_USB_CNTR.B3;
    const register unsigned short int RESUME_ = 4;
    sbit  RESUME_bit at USB_USB_CNTR.B4;
    const register unsigned short int ESOFM = 8;
    sbit  ESOFM_bit at USB_USB_CNTR.B8;
    const register unsigned short int SOFM = 9;
    sbit  SOFM_bit at USB_USB_CNTR.B9;
    const register unsigned short int RESETM = 10;
    sbit  RESETM_bit at USB_USB_CNTR.B10;
    const register unsigned short int SUSPM = 11;
    sbit  SUSPM_bit at USB_USB_CNTR.B11;
    const register unsigned short int WKUPM = 12;
    sbit  WKUPM_bit at USB_USB_CNTR.B12;
    const register unsigned short int ERRM = 13;
    sbit  ERRM_bit at USB_USB_CNTR.B13;
    const register unsigned short int PMAOVRM = 14;
    sbit  PMAOVRM_bit at USB_USB_CNTR.B14;
    const register unsigned short int CTRM = 15;
    sbit  CTRM_bit at USB_USB_CNTR.B15;

sfr unsigned long   volatile USB_USB_ISTR         absolute 0x40005C44;
    const register unsigned short int EP_ID0 = 0;
    sbit  EP_ID0_bit at USB_USB_ISTR.B0;
    const register unsigned short int EP_ID1 = 1;
    sbit  EP_ID1_bit at USB_USB_ISTR.B1;
    const register unsigned short int EP_ID2 = 2;
    sbit  EP_ID2_bit at USB_USB_ISTR.B2;
    const register unsigned short int EP_ID3 = 3;
    sbit  EP_ID3_bit at USB_USB_ISTR.B3;
    sbit  DIR_USB_USB_ISTR_bit at USB_USB_ISTR.B4;
    const register unsigned short int ESOF = 8;
    sbit  ESOF_bit at USB_USB_ISTR.B8;
    sbit  SOF_USB_USB_ISTR_bit at USB_USB_ISTR.B9;
    sbit  RESET_USB_USB_ISTR_bit at USB_USB_ISTR.B10;
    const register unsigned short int SUSP = 11;
    sbit  SUSP_bit at USB_USB_ISTR.B11;
    const register unsigned short int WKUP = 12;
    sbit  WKUP_bit at USB_USB_ISTR.B12;
    const register unsigned short int ERR_ = 13;
    sbit  ERR_bit at USB_USB_ISTR.B13;
    const register unsigned short int PMAOVR = 14;
    sbit  PMAOVR_bit at USB_USB_ISTR.B14;
    const register unsigned short int CTR = 15;
    sbit  CTR_bit at USB_USB_ISTR.B15;

sfr unsigned long   volatile USB_USB_FNR          absolute 0x40005C48;
    const register unsigned short int FN0 = 0;
    sbit  FN0_bit at USB_USB_FNR.B0;
    const register unsigned short int FN1 = 1;
    sbit  FN1_bit at USB_USB_FNR.B1;
    const register unsigned short int FN2 = 2;
    sbit  FN2_bit at USB_USB_FNR.B2;
    const register unsigned short int FN3 = 3;
    sbit  FN3_bit at USB_USB_FNR.B3;
    const register unsigned short int FN4 = 4;
    sbit  FN4_bit at USB_USB_FNR.B4;
    const register unsigned short int FN5 = 5;
    sbit  FN5_bit at USB_USB_FNR.B5;
    const register unsigned short int FN6 = 6;
    sbit  FN6_bit at USB_USB_FNR.B6;
    const register unsigned short int FN7 = 7;
    sbit  FN7_bit at USB_USB_FNR.B7;
    const register unsigned short int FN8 = 8;
    sbit  FN8_bit at USB_USB_FNR.B8;
    const register unsigned short int FN9 = 9;
    sbit  FN9_bit at USB_USB_FNR.B9;
    const register unsigned short int FN10 = 10;
    sbit  FN10_bit at USB_USB_FNR.B10;
    const register unsigned short int LSOF0 = 11;
    sbit  LSOF0_bit at USB_USB_FNR.B11;
    const register unsigned short int LSOF1 = 12;
    sbit  LSOF1_bit at USB_USB_FNR.B12;
    const register unsigned short int LCK = 13;
    sbit  LCK_bit at USB_USB_FNR.B13;
    const register unsigned short int RXDM = 14;
    sbit  RXDM_bit at USB_USB_FNR.B14;
    const register unsigned short int RXDP = 15;
    sbit  RXDP_bit at USB_USB_FNR.B15;

sfr unsigned long   volatile USB_USB_DADDR        absolute 0x40005C4C;
    sbit  ADD0_USB_USB_DADDR_bit at USB_USB_DADDR.B0;
    sbit  ADD1_USB_USB_DADDR_bit at USB_USB_DADDR.B1;
    sbit  ADD2_USB_USB_DADDR_bit at USB_USB_DADDR.B2;
    sbit  ADD3_USB_USB_DADDR_bit at USB_USB_DADDR.B3;
    const register unsigned short int ADD4 = 4;
    sbit  ADD4_bit at USB_USB_DADDR.B4;
    const register unsigned short int ADD5 = 5;
    sbit  ADD5_bit at USB_USB_DADDR.B5;
    const register unsigned short int ADD6 = 6;
    sbit  ADD6_bit at USB_USB_DADDR.B6;
    const register unsigned short int EF = 7;
    sbit  EF_bit at USB_USB_DADDR.B7;

sfr unsigned long   volatile USB_USB_BTABLE       absolute 0x40005C50;
    const register unsigned short int BTABLE0 = 3;
    sbit  BTABLE0_bit at USB_USB_BTABLE.B3;
    const register unsigned short int BTABLE1 = 4;
    sbit  BTABLE1_bit at USB_USB_BTABLE.B4;
    const register unsigned short int BTABLE2 = 5;
    sbit  BTABLE2_bit at USB_USB_BTABLE.B5;
    const register unsigned short int BTABLE3 = 6;
    sbit  BTABLE3_bit at USB_USB_BTABLE.B6;
    const register unsigned short int BTABLE4 = 7;
    sbit  BTABLE4_bit at USB_USB_BTABLE.B7;
    const register unsigned short int BTABLE5 = 8;
    sbit  BTABLE5_bit at USB_USB_BTABLE.B8;
    const register unsigned short int BTABLE6 = 9;
    sbit  BTABLE6_bit at USB_USB_BTABLE.B9;
    const register unsigned short int BTABLE7 = 10;
    sbit  BTABLE7_bit at USB_USB_BTABLE.B10;
    const register unsigned short int BTABLE8 = 11;
    sbit  BTABLE8_bit at USB_USB_BTABLE.B11;
    const register unsigned short int BTABLE9 = 12;
    sbit  BTABLE9_bit at USB_USB_BTABLE.B12;
    const register unsigned short int BTABLE10 = 13;
    sbit  BTABLE10_bit at USB_USB_BTABLE.B13;
    const register unsigned short int BTABLE11 = 14;
    sbit  BTABLE11_bit at USB_USB_BTABLE.B14;
    const register unsigned short int BTABLE12 = 15;
    sbit  BTABLE12_bit at USB_USB_BTABLE.B15;

sfr unsigned long   volatile USB_SRAM_USB_EP0R    absolute 0x40006000;
    sbit  EA0_USB_SRAM_USB_EP0R_bit at USB_SRAM_USB_EP0R.B0;
    sbit  EA1_USB_SRAM_USB_EP0R_bit at USB_SRAM_USB_EP0R.B1;
    sbit  EA2_USB_SRAM_USB_EP0R_bit at USB_SRAM_USB_EP0R.B2;
    sbit  EA3_USB_SRAM_USB_EP0R_bit at USB_SRAM_USB_EP0R.B3;
    sbit  STAT_TX0_USB_SRAM_USB_EP0R_bit at USB_SRAM_USB_EP0R.B4;
    sbit  STAT_TX1_USB_SRAM_USB_EP0R_bit at USB_SRAM_USB_EP0R.B5;
    sbit  DTOG_TX_USB_SRAM_USB_EP0R_bit at USB_SRAM_USB_EP0R.B6;
    sbit  CTR_TX_USB_SRAM_USB_EP0R_bit at USB_SRAM_USB_EP0R.B7;
    sbit  EP_KIND_USB_SRAM_USB_EP0R_bit at USB_SRAM_USB_EP0R.B8;
    sbit  EP_TYPE0_USB_SRAM_USB_EP0R_bit at USB_SRAM_USB_EP0R.B9;
    sbit  EP_TYPE1_USB_SRAM_USB_EP0R_bit at USB_SRAM_USB_EP0R.B10;
    sbit  SETUP_USB_SRAM_USB_EP0R_bit at USB_SRAM_USB_EP0R.B11;
    sbit  STAT_RX0_USB_SRAM_USB_EP0R_bit at USB_SRAM_USB_EP0R.B12;
    sbit  STAT_RX1_USB_SRAM_USB_EP0R_bit at USB_SRAM_USB_EP0R.B13;
    sbit  DTOG_RX_USB_SRAM_USB_EP0R_bit at USB_SRAM_USB_EP0R.B14;
    sbit  CTR_RX_USB_SRAM_USB_EP0R_bit at USB_SRAM_USB_EP0R.B15;

sfr unsigned long   volatile USB_SRAM_USB_EP1R    absolute 0x40006004;
    sbit  EA0_USB_SRAM_USB_EP1R_bit at USB_SRAM_USB_EP1R.B0;
    sbit  EA1_USB_SRAM_USB_EP1R_bit at USB_SRAM_USB_EP1R.B1;
    sbit  EA2_USB_SRAM_USB_EP1R_bit at USB_SRAM_USB_EP1R.B2;
    sbit  EA3_USB_SRAM_USB_EP1R_bit at USB_SRAM_USB_EP1R.B3;
    sbit  STAT_TX0_USB_SRAM_USB_EP1R_bit at USB_SRAM_USB_EP1R.B4;
    sbit  STAT_TX1_USB_SRAM_USB_EP1R_bit at USB_SRAM_USB_EP1R.B5;
    sbit  DTOG_TX_USB_SRAM_USB_EP1R_bit at USB_SRAM_USB_EP1R.B6;
    sbit  CTR_TX_USB_SRAM_USB_EP1R_bit at USB_SRAM_USB_EP1R.B7;
    sbit  EP_KIND_USB_SRAM_USB_EP1R_bit at USB_SRAM_USB_EP1R.B8;
    sbit  EP_TYPE0_USB_SRAM_USB_EP1R_bit at USB_SRAM_USB_EP1R.B9;
    sbit  EP_TYPE1_USB_SRAM_USB_EP1R_bit at USB_SRAM_USB_EP1R.B10;
    sbit  SETUP_USB_SRAM_USB_EP1R_bit at USB_SRAM_USB_EP1R.B11;
    sbit  STAT_RX0_USB_SRAM_USB_EP1R_bit at USB_SRAM_USB_EP1R.B12;
    sbit  STAT_RX1_USB_SRAM_USB_EP1R_bit at USB_SRAM_USB_EP1R.B13;
    sbit  DTOG_RX_USB_SRAM_USB_EP1R_bit at USB_SRAM_USB_EP1R.B14;
    sbit  CTR_RX_USB_SRAM_USB_EP1R_bit at USB_SRAM_USB_EP1R.B15;

sfr unsigned long   volatile USB_SRAM_USB_EP2R    absolute 0x40006008;
    sbit  EA0_USB_SRAM_USB_EP2R_bit at USB_SRAM_USB_EP2R.B0;
    sbit  EA1_USB_SRAM_USB_EP2R_bit at USB_SRAM_USB_EP2R.B1;
    sbit  EA2_USB_SRAM_USB_EP2R_bit at USB_SRAM_USB_EP2R.B2;
    sbit  EA3_USB_SRAM_USB_EP2R_bit at USB_SRAM_USB_EP2R.B3;
    sbit  STAT_TX0_USB_SRAM_USB_EP2R_bit at USB_SRAM_USB_EP2R.B4;
    sbit  STAT_TX1_USB_SRAM_USB_EP2R_bit at USB_SRAM_USB_EP2R.B5;
    sbit  DTOG_TX_USB_SRAM_USB_EP2R_bit at USB_SRAM_USB_EP2R.B6;
    sbit  CTR_TX_USB_SRAM_USB_EP2R_bit at USB_SRAM_USB_EP2R.B7;
    sbit  EP_KIND_USB_SRAM_USB_EP2R_bit at USB_SRAM_USB_EP2R.B8;
    sbit  EP_TYPE0_USB_SRAM_USB_EP2R_bit at USB_SRAM_USB_EP2R.B9;
    sbit  EP_TYPE1_USB_SRAM_USB_EP2R_bit at USB_SRAM_USB_EP2R.B10;
    sbit  SETUP_USB_SRAM_USB_EP2R_bit at USB_SRAM_USB_EP2R.B11;
    sbit  STAT_RX0_USB_SRAM_USB_EP2R_bit at USB_SRAM_USB_EP2R.B12;
    sbit  STAT_RX1_USB_SRAM_USB_EP2R_bit at USB_SRAM_USB_EP2R.B13;
    sbit  DTOG_RX_USB_SRAM_USB_EP2R_bit at USB_SRAM_USB_EP2R.B14;
    sbit  CTR_RX_USB_SRAM_USB_EP2R_bit at USB_SRAM_USB_EP2R.B15;

sfr unsigned long   volatile USB_SRAM_USB_EP3R    absolute 0x4000600C;
    sbit  EA0_USB_SRAM_USB_EP3R_bit at USB_SRAM_USB_EP3R.B0;
    sbit  EA1_USB_SRAM_USB_EP3R_bit at USB_SRAM_USB_EP3R.B1;
    sbit  EA2_USB_SRAM_USB_EP3R_bit at USB_SRAM_USB_EP3R.B2;
    sbit  EA3_USB_SRAM_USB_EP3R_bit at USB_SRAM_USB_EP3R.B3;
    sbit  STAT_TX0_USB_SRAM_USB_EP3R_bit at USB_SRAM_USB_EP3R.B4;
    sbit  STAT_TX1_USB_SRAM_USB_EP3R_bit at USB_SRAM_USB_EP3R.B5;
    sbit  DTOG_TX_USB_SRAM_USB_EP3R_bit at USB_SRAM_USB_EP3R.B6;
    sbit  CTR_TX_USB_SRAM_USB_EP3R_bit at USB_SRAM_USB_EP3R.B7;
    sbit  EP_KIND_USB_SRAM_USB_EP3R_bit at USB_SRAM_USB_EP3R.B8;
    sbit  EP_TYPE0_USB_SRAM_USB_EP3R_bit at USB_SRAM_USB_EP3R.B9;
    sbit  EP_TYPE1_USB_SRAM_USB_EP3R_bit at USB_SRAM_USB_EP3R.B10;
    sbit  SETUP_USB_SRAM_USB_EP3R_bit at USB_SRAM_USB_EP3R.B11;
    sbit  STAT_RX0_USB_SRAM_USB_EP3R_bit at USB_SRAM_USB_EP3R.B12;
    sbit  STAT_RX1_USB_SRAM_USB_EP3R_bit at USB_SRAM_USB_EP3R.B13;
    sbit  DTOG_RX_USB_SRAM_USB_EP3R_bit at USB_SRAM_USB_EP3R.B14;
    sbit  CTR_RX_USB_SRAM_USB_EP3R_bit at USB_SRAM_USB_EP3R.B15;

sfr unsigned long   volatile USB_SRAM_USB_EP4R    absolute 0x40006010;
    sbit  EA0_USB_SRAM_USB_EP4R_bit at USB_SRAM_USB_EP4R.B0;
    sbit  EA1_USB_SRAM_USB_EP4R_bit at USB_SRAM_USB_EP4R.B1;
    sbit  EA2_USB_SRAM_USB_EP4R_bit at USB_SRAM_USB_EP4R.B2;
    sbit  EA3_USB_SRAM_USB_EP4R_bit at USB_SRAM_USB_EP4R.B3;
    sbit  STAT_TX0_USB_SRAM_USB_EP4R_bit at USB_SRAM_USB_EP4R.B4;
    sbit  STAT_TX1_USB_SRAM_USB_EP4R_bit at USB_SRAM_USB_EP4R.B5;
    sbit  DTOG_TX_USB_SRAM_USB_EP4R_bit at USB_SRAM_USB_EP4R.B6;
    sbit  CTR_TX_USB_SRAM_USB_EP4R_bit at USB_SRAM_USB_EP4R.B7;
    sbit  EP_KIND_USB_SRAM_USB_EP4R_bit at USB_SRAM_USB_EP4R.B8;
    sbit  EP_TYPE0_USB_SRAM_USB_EP4R_bit at USB_SRAM_USB_EP4R.B9;
    sbit  EP_TYPE1_USB_SRAM_USB_EP4R_bit at USB_SRAM_USB_EP4R.B10;
    sbit  SETUP_USB_SRAM_USB_EP4R_bit at USB_SRAM_USB_EP4R.B11;
    sbit  STAT_RX0_USB_SRAM_USB_EP4R_bit at USB_SRAM_USB_EP4R.B12;
    sbit  STAT_RX1_USB_SRAM_USB_EP4R_bit at USB_SRAM_USB_EP4R.B13;
    sbit  DTOG_RX_USB_SRAM_USB_EP4R_bit at USB_SRAM_USB_EP4R.B14;
    sbit  CTR_RX_USB_SRAM_USB_EP4R_bit at USB_SRAM_USB_EP4R.B15;

sfr unsigned long   volatile USB_SRAM_USB_EP5R    absolute 0x40006014;
    sbit  EA0_USB_SRAM_USB_EP5R_bit at USB_SRAM_USB_EP5R.B0;
    sbit  EA1_USB_SRAM_USB_EP5R_bit at USB_SRAM_USB_EP5R.B1;
    sbit  EA2_USB_SRAM_USB_EP5R_bit at USB_SRAM_USB_EP5R.B2;
    sbit  EA3_USB_SRAM_USB_EP5R_bit at USB_SRAM_USB_EP5R.B3;
    sbit  STAT_TX0_USB_SRAM_USB_EP5R_bit at USB_SRAM_USB_EP5R.B4;
    sbit  STAT_TX1_USB_SRAM_USB_EP5R_bit at USB_SRAM_USB_EP5R.B5;
    sbit  DTOG_TX_USB_SRAM_USB_EP5R_bit at USB_SRAM_USB_EP5R.B6;
    sbit  CTR_TX_USB_SRAM_USB_EP5R_bit at USB_SRAM_USB_EP5R.B7;
    sbit  EP_KIND_USB_SRAM_USB_EP5R_bit at USB_SRAM_USB_EP5R.B8;
    sbit  EP_TYPE0_USB_SRAM_USB_EP5R_bit at USB_SRAM_USB_EP5R.B9;
    sbit  EP_TYPE1_USB_SRAM_USB_EP5R_bit at USB_SRAM_USB_EP5R.B10;
    sbit  SETUP_USB_SRAM_USB_EP5R_bit at USB_SRAM_USB_EP5R.B11;
    sbit  STAT_RX0_USB_SRAM_USB_EP5R_bit at USB_SRAM_USB_EP5R.B12;
    sbit  STAT_RX1_USB_SRAM_USB_EP5R_bit at USB_SRAM_USB_EP5R.B13;
    sbit  DTOG_RX_USB_SRAM_USB_EP5R_bit at USB_SRAM_USB_EP5R.B14;
    sbit  CTR_RX_USB_SRAM_USB_EP5R_bit at USB_SRAM_USB_EP5R.B15;

sfr unsigned long   volatile USB_SRAM_USB_EP6R    absolute 0x40006018;
    sbit  EA0_USB_SRAM_USB_EP6R_bit at USB_SRAM_USB_EP6R.B0;
    sbit  EA1_USB_SRAM_USB_EP6R_bit at USB_SRAM_USB_EP6R.B1;
    sbit  EA2_USB_SRAM_USB_EP6R_bit at USB_SRAM_USB_EP6R.B2;
    sbit  EA3_USB_SRAM_USB_EP6R_bit at USB_SRAM_USB_EP6R.B3;
    sbit  STAT_TX0_USB_SRAM_USB_EP6R_bit at USB_SRAM_USB_EP6R.B4;
    sbit  STAT_TX1_USB_SRAM_USB_EP6R_bit at USB_SRAM_USB_EP6R.B5;
    sbit  DTOG_TX_USB_SRAM_USB_EP6R_bit at USB_SRAM_USB_EP6R.B6;
    sbit  CTR_TX_USB_SRAM_USB_EP6R_bit at USB_SRAM_USB_EP6R.B7;
    sbit  EP_KIND_USB_SRAM_USB_EP6R_bit at USB_SRAM_USB_EP6R.B8;
    sbit  EP_TYPE0_USB_SRAM_USB_EP6R_bit at USB_SRAM_USB_EP6R.B9;
    sbit  EP_TYPE1_USB_SRAM_USB_EP6R_bit at USB_SRAM_USB_EP6R.B10;
    sbit  SETUP_USB_SRAM_USB_EP6R_bit at USB_SRAM_USB_EP6R.B11;
    sbit  STAT_RX0_USB_SRAM_USB_EP6R_bit at USB_SRAM_USB_EP6R.B12;
    sbit  STAT_RX1_USB_SRAM_USB_EP6R_bit at USB_SRAM_USB_EP6R.B13;
    sbit  DTOG_RX_USB_SRAM_USB_EP6R_bit at USB_SRAM_USB_EP6R.B14;
    sbit  CTR_RX_USB_SRAM_USB_EP6R_bit at USB_SRAM_USB_EP6R.B15;

sfr unsigned long   volatile USB_SRAM_USB_EP7R    absolute 0x4000601C;
    sbit  EA0_USB_SRAM_USB_EP7R_bit at USB_SRAM_USB_EP7R.B0;
    sbit  EA1_USB_SRAM_USB_EP7R_bit at USB_SRAM_USB_EP7R.B1;
    sbit  EA2_USB_SRAM_USB_EP7R_bit at USB_SRAM_USB_EP7R.B2;
    sbit  EA3_USB_SRAM_USB_EP7R_bit at USB_SRAM_USB_EP7R.B3;
    sbit  STAT_TX0_USB_SRAM_USB_EP7R_bit at USB_SRAM_USB_EP7R.B4;
    sbit  STAT_TX1_USB_SRAM_USB_EP7R_bit at USB_SRAM_USB_EP7R.B5;
    sbit  DTOG_TX_USB_SRAM_USB_EP7R_bit at USB_SRAM_USB_EP7R.B6;
    sbit  CTR_TX_USB_SRAM_USB_EP7R_bit at USB_SRAM_USB_EP7R.B7;
    sbit  EP_KIND_USB_SRAM_USB_EP7R_bit at USB_SRAM_USB_EP7R.B8;
    sbit  EP_TYPE0_USB_SRAM_USB_EP7R_bit at USB_SRAM_USB_EP7R.B9;
    sbit  EP_TYPE1_USB_SRAM_USB_EP7R_bit at USB_SRAM_USB_EP7R.B10;
    sbit  SETUP_USB_SRAM_USB_EP7R_bit at USB_SRAM_USB_EP7R.B11;
    sbit  STAT_RX0_USB_SRAM_USB_EP7R_bit at USB_SRAM_USB_EP7R.B12;
    sbit  STAT_RX1_USB_SRAM_USB_EP7R_bit at USB_SRAM_USB_EP7R.B13;
    sbit  DTOG_RX_USB_SRAM_USB_EP7R_bit at USB_SRAM_USB_EP7R.B14;
    sbit  CTR_RX_USB_SRAM_USB_EP7R_bit at USB_SRAM_USB_EP7R.B15;

sfr unsigned long   volatile USB_SRAM_USB_CNTR    absolute 0x40006040;
    sbit  FRES_USB_SRAM_USB_CNTR_bit at USB_SRAM_USB_CNTR.B0;
    sbit  PDWN_USB_SRAM_USB_CNTR_bit at USB_SRAM_USB_CNTR.B1;
    sbit  LPMODE_USB_SRAM_USB_CNTR_bit at USB_SRAM_USB_CNTR.B2;
    sbit  FSUSP_USB_SRAM_USB_CNTR_bit at USB_SRAM_USB_CNTR.B3;
    sbit  RESUME_USB_SRAM_USB_CNTR_bit at USB_SRAM_USB_CNTR.B4;
    sbit  ESOFM_USB_SRAM_USB_CNTR_bit at USB_SRAM_USB_CNTR.B8;
    sbit  SOFM_USB_SRAM_USB_CNTR_bit at USB_SRAM_USB_CNTR.B9;
    sbit  RESETM_USB_SRAM_USB_CNTR_bit at USB_SRAM_USB_CNTR.B10;
    sbit  SUSPM_USB_SRAM_USB_CNTR_bit at USB_SRAM_USB_CNTR.B11;
    sbit  WKUPM_USB_SRAM_USB_CNTR_bit at USB_SRAM_USB_CNTR.B12;
    sbit  ERRM_USB_SRAM_USB_CNTR_bit at USB_SRAM_USB_CNTR.B13;
    sbit  PMAOVRM_USB_SRAM_USB_CNTR_bit at USB_SRAM_USB_CNTR.B14;
    sbit  CTRM_USB_SRAM_USB_CNTR_bit at USB_SRAM_USB_CNTR.B15;

sfr unsigned long   volatile USB_SRAM_USB_ISTR    absolute 0x40006044;
    sbit  EP_ID0_USB_SRAM_USB_ISTR_bit at USB_SRAM_USB_ISTR.B0;
    sbit  EP_ID1_USB_SRAM_USB_ISTR_bit at USB_SRAM_USB_ISTR.B1;
    sbit  EP_ID2_USB_SRAM_USB_ISTR_bit at USB_SRAM_USB_ISTR.B2;
    sbit  EP_ID3_USB_SRAM_USB_ISTR_bit at USB_SRAM_USB_ISTR.B3;
    sbit  DIR_USB_SRAM_USB_ISTR_bit at USB_SRAM_USB_ISTR.B4;
    sbit  ESOF_USB_SRAM_USB_ISTR_bit at USB_SRAM_USB_ISTR.B8;
    sbit  SOF_USB_SRAM_USB_ISTR_bit at USB_SRAM_USB_ISTR.B9;
    sbit  RESET_USB_SRAM_USB_ISTR_bit at USB_SRAM_USB_ISTR.B10;
    sbit  SUSP_USB_SRAM_USB_ISTR_bit at USB_SRAM_USB_ISTR.B11;
    sbit  WKUP_USB_SRAM_USB_ISTR_bit at USB_SRAM_USB_ISTR.B12;
    sbit  ERR_USB_SRAM_USB_ISTR_bit at USB_SRAM_USB_ISTR.B13;
    sbit  PMAOVR_USB_SRAM_USB_ISTR_bit at USB_SRAM_USB_ISTR.B14;
    sbit  CTR_USB_SRAM_USB_ISTR_bit at USB_SRAM_USB_ISTR.B15;

sfr unsigned long   volatile USB_SRAM_USB_FNR     absolute 0x40006048;
    sbit  FN0_USB_SRAM_USB_FNR_bit at USB_SRAM_USB_FNR.B0;
    sbit  FN1_USB_SRAM_USB_FNR_bit at USB_SRAM_USB_FNR.B1;
    sbit  FN2_USB_SRAM_USB_FNR_bit at USB_SRAM_USB_FNR.B2;
    sbit  FN3_USB_SRAM_USB_FNR_bit at USB_SRAM_USB_FNR.B3;
    sbit  FN4_USB_SRAM_USB_FNR_bit at USB_SRAM_USB_FNR.B4;
    sbit  FN5_USB_SRAM_USB_FNR_bit at USB_SRAM_USB_FNR.B5;
    sbit  FN6_USB_SRAM_USB_FNR_bit at USB_SRAM_USB_FNR.B6;
    sbit  FN7_USB_SRAM_USB_FNR_bit at USB_SRAM_USB_FNR.B7;
    sbit  FN8_USB_SRAM_USB_FNR_bit at USB_SRAM_USB_FNR.B8;
    sbit  FN9_USB_SRAM_USB_FNR_bit at USB_SRAM_USB_FNR.B9;
    sbit  FN10_USB_SRAM_USB_FNR_bit at USB_SRAM_USB_FNR.B10;
    sbit  LSOF0_USB_SRAM_USB_FNR_bit at USB_SRAM_USB_FNR.B11;
    sbit  LSOF1_USB_SRAM_USB_FNR_bit at USB_SRAM_USB_FNR.B12;
    sbit  LCK_USB_SRAM_USB_FNR_bit at USB_SRAM_USB_FNR.B13;
    sbit  RXDM_USB_SRAM_USB_FNR_bit at USB_SRAM_USB_FNR.B14;
    sbit  RXDP_USB_SRAM_USB_FNR_bit at USB_SRAM_USB_FNR.B15;

sfr unsigned long   volatile USB_SRAM_USB_DADDR   absolute 0x4000604C;
    sbit  ADD0_USB_SRAM_USB_DADDR_bit at USB_SRAM_USB_DADDR.B0;
    sbit  ADD1_USB_SRAM_USB_DADDR_bit at USB_SRAM_USB_DADDR.B1;
    sbit  ADD2_USB_SRAM_USB_DADDR_bit at USB_SRAM_USB_DADDR.B2;
    sbit  ADD3_USB_SRAM_USB_DADDR_bit at USB_SRAM_USB_DADDR.B3;
    sbit  ADD4_USB_SRAM_USB_DADDR_bit at USB_SRAM_USB_DADDR.B4;
    sbit  ADD5_USB_SRAM_USB_DADDR_bit at USB_SRAM_USB_DADDR.B5;
    sbit  ADD6_USB_SRAM_USB_DADDR_bit at USB_SRAM_USB_DADDR.B6;
    sbit  EF_USB_SRAM_USB_DADDR_bit at USB_SRAM_USB_DADDR.B7;

sfr unsigned long   volatile USB_SRAM_USB_BTABLE  absolute 0x40006050;
    sbit  BTABLE0_USB_SRAM_USB_BTABLE_bit at USB_SRAM_USB_BTABLE.B3;
    sbit  BTABLE1_USB_SRAM_USB_BTABLE_bit at USB_SRAM_USB_BTABLE.B4;
    sbit  BTABLE2_USB_SRAM_USB_BTABLE_bit at USB_SRAM_USB_BTABLE.B5;
    sbit  BTABLE3_USB_SRAM_USB_BTABLE_bit at USB_SRAM_USB_BTABLE.B6;
    sbit  BTABLE4_USB_SRAM_USB_BTABLE_bit at USB_SRAM_USB_BTABLE.B7;
    sbit  BTABLE5_USB_SRAM_USB_BTABLE_bit at USB_SRAM_USB_BTABLE.B8;
    sbit  BTABLE6_USB_SRAM_USB_BTABLE_bit at USB_SRAM_USB_BTABLE.B9;
    sbit  BTABLE7_USB_SRAM_USB_BTABLE_bit at USB_SRAM_USB_BTABLE.B10;
    sbit  BTABLE8_USB_SRAM_USB_BTABLE_bit at USB_SRAM_USB_BTABLE.B11;
    sbit  BTABLE9_USB_SRAM_USB_BTABLE_bit at USB_SRAM_USB_BTABLE.B12;
    sbit  BTABLE10_USB_SRAM_USB_BTABLE_bit at USB_SRAM_USB_BTABLE.B13;
    sbit  BTABLE11_USB_SRAM_USB_BTABLE_bit at USB_SRAM_USB_BTABLE.B14;
    sbit  BTABLE12_USB_SRAM_USB_BTABLE_bit at USB_SRAM_USB_BTABLE.B15;

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

sfr unsigned long   volatile ADC_SR               absolute 0x40012400;
    const register unsigned short int JCNR = 9;
    sbit  JCNR_bit at ADC_SR.B9;
    const register unsigned short int RCNR = 8;
    sbit  RCNR_bit at ADC_SR.B8;
    const register unsigned short int ADONS = 6;
    sbit  ADONS_bit at ADC_SR.B6;
    sbit  OVR_ADC_SR_bit at ADC_SR.B5;
    const register unsigned short int STRT = 4;
    sbit  STRT_bit at ADC_SR.B4;
    const register unsigned short int JSTRT = 3;
    sbit  JSTRT_bit at ADC_SR.B3;
    const register unsigned short int JEOC = 2;
    sbit  JEOC_bit at ADC_SR.B2;
    const register unsigned short int EOC = 1;
    sbit  EOC_bit at ADC_SR.B1;
    const register unsigned short int AWD = 0;
    sbit  AWD_bit at ADC_SR.B0;

sfr unsigned long   volatile ADC_CR1              absolute 0x40012404;
    const register unsigned short int OVRIE = 26;
    sbit  OVRIE_bit at ADC_CR1.B26;
    const register unsigned short int RES0 = 24;
    sbit  RES0_bit at ADC_CR1.B24;
    const register unsigned short int RES1 = 25;
    sbit  RES1_bit at ADC_CR1.B25;
    const register unsigned short int AWDEN = 23;
    sbit  AWDEN_bit at ADC_CR1.B23;
    const register unsigned short int JAWDEN = 22;
    sbit  JAWDEN_bit at ADC_CR1.B22;
    const register unsigned short int PDI = 17;
    sbit  PDI_bit at ADC_CR1.B17;
    const register unsigned short int PDD = 16;
    sbit  PDD_bit at ADC_CR1.B16;
    const register unsigned short int DISCNUM0 = 13;
    sbit  DISCNUM0_bit at ADC_CR1.B13;
    const register unsigned short int DISCNUM1 = 14;
    sbit  DISCNUM1_bit at ADC_CR1.B14;
    const register unsigned short int DISCNUM2 = 15;
    sbit  DISCNUM2_bit at ADC_CR1.B15;
    const register unsigned short int JDISCEN = 12;
    sbit  JDISCEN_bit at ADC_CR1.B12;
    const register unsigned short int DISCEN = 11;
    sbit  DISCEN_bit at ADC_CR1.B11;
    const register unsigned short int JAUTO = 10;
    sbit  JAUTO_bit at ADC_CR1.B10;
    const register unsigned short int AWDSGL = 9;
    sbit  AWDSGL_bit at ADC_CR1.B9;
    const register unsigned short int SCAN = 8;
    sbit  SCAN_bit at ADC_CR1.B8;
    const register unsigned short int JEOCIE = 7;
    sbit  JEOCIE_bit at ADC_CR1.B7;
    const register unsigned short int AWDIE = 6;
    sbit  AWDIE_bit at ADC_CR1.B6;
    const register unsigned short int EOCIE = 5;
    sbit  EOCIE_bit at ADC_CR1.B5;
    const register unsigned short int AWDCH0 = 0;
    sbit  AWDCH0_bit at ADC_CR1.B0;
    const register unsigned short int AWDCH1 = 1;
    sbit  AWDCH1_bit at ADC_CR1.B1;
    const register unsigned short int AWDCH2 = 2;
    sbit  AWDCH2_bit at ADC_CR1.B2;
    const register unsigned short int AWDCH3 = 3;
    sbit  AWDCH3_bit at ADC_CR1.B3;
    const register unsigned short int AWDCH4 = 4;
    sbit  AWDCH4_bit at ADC_CR1.B4;

sfr unsigned long   volatile ADC_CR2              absolute 0x40012408;
    const register unsigned short int SWSTART = 30;
    sbit  SWSTART_bit at ADC_CR2.B30;
    const register unsigned short int EXTEN0 = 28;
    sbit  EXTEN0_bit at ADC_CR2.B28;
    const register unsigned short int EXTEN1 = 29;
    sbit  EXTEN1_bit at ADC_CR2.B29;
    const register unsigned short int EXTSEL0 = 24;
    sbit  EXTSEL0_bit at ADC_CR2.B24;
    const register unsigned short int EXTSEL1 = 25;
    sbit  EXTSEL1_bit at ADC_CR2.B25;
    const register unsigned short int EXTSEL2 = 26;
    sbit  EXTSEL2_bit at ADC_CR2.B26;
    const register unsigned short int EXTSEL3 = 27;
    sbit  EXTSEL3_bit at ADC_CR2.B27;
    const register unsigned short int JSWSTART = 22;
    sbit  JSWSTART_bit at ADC_CR2.B22;
    const register unsigned short int JEXTEN0 = 20;
    sbit  JEXTEN0_bit at ADC_CR2.B20;
    const register unsigned short int JEXTEN1 = 21;
    sbit  JEXTEN1_bit at ADC_CR2.B21;
    const register unsigned short int JEXTSEL0 = 16;
    sbit  JEXTSEL0_bit at ADC_CR2.B16;
    const register unsigned short int JEXTSEL1 = 17;
    sbit  JEXTSEL1_bit at ADC_CR2.B17;
    const register unsigned short int JEXTSEL2 = 18;
    sbit  JEXTSEL2_bit at ADC_CR2.B18;
    const register unsigned short int JEXTSEL3 = 19;
    sbit  JEXTSEL3_bit at ADC_CR2.B19;
    const register unsigned short int ALIGN = 11;
    sbit  ALIGN_bit at ADC_CR2.B11;
    const register unsigned short int EOCS = 10;
    sbit  EOCS_bit at ADC_CR2.B10;
    const register unsigned short int DDS = 9;
    sbit  DDS_bit at ADC_CR2.B9;
    const register unsigned short int DMA_ = 8;
    sbit  DMA_bit at ADC_CR2.B8;
    const register unsigned short int DELS0 = 4;
    sbit  DELS0_bit at ADC_CR2.B4;
    const register unsigned short int DELS1 = 5;
    sbit  DELS1_bit at ADC_CR2.B5;
    const register unsigned short int DELS2 = 6;
    sbit  DELS2_bit at ADC_CR2.B6;
    const register unsigned short int ADC_CFG = 2;
    sbit  ADC_CFG_bit at ADC_CR2.B2;
    const register unsigned short int CONT = 1;
    sbit  CONT_bit at ADC_CR2.B1;
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADC_CR2.B0;

sfr unsigned long   volatile ADC_SMPR1            absolute 0x4001240C;
    const register unsigned short int SMP200 = 0;
    sbit  SMP200_bit at ADC_SMPR1.B0;
    const register unsigned short int SMP201 = 1;
    sbit  SMP201_bit at ADC_SMPR1.B1;
    const register unsigned short int SMP202 = 2;
    sbit  SMP202_bit at ADC_SMPR1.B2;
    const register unsigned short int SMP210 = 3;
    sbit  SMP210_bit at ADC_SMPR1.B3;
    const register unsigned short int SMP211 = 4;
    sbit  SMP211_bit at ADC_SMPR1.B4;
    const register unsigned short int SMP212 = 5;
    sbit  SMP212_bit at ADC_SMPR1.B5;
    const register unsigned short int SMP220 = 6;
    sbit  SMP220_bit at ADC_SMPR1.B6;
    const register unsigned short int SMP221 = 7;
    sbit  SMP221_bit at ADC_SMPR1.B7;
    const register unsigned short int SMP222 = 8;
    sbit  SMP222_bit at ADC_SMPR1.B8;
    const register unsigned short int SMP230 = 9;
    sbit  SMP230_bit at ADC_SMPR1.B9;
    const register unsigned short int SMP231 = 10;
    sbit  SMP231_bit at ADC_SMPR1.B10;
    const register unsigned short int SMP232 = 11;
    sbit  SMP232_bit at ADC_SMPR1.B11;
    const register unsigned short int SMP240 = 12;
    sbit  SMP240_bit at ADC_SMPR1.B12;
    const register unsigned short int SMP241 = 13;
    sbit  SMP241_bit at ADC_SMPR1.B13;
    const register unsigned short int SMP242 = 14;
    sbit  SMP242_bit at ADC_SMPR1.B14;
    const register unsigned short int SMP250 = 15;
    sbit  SMP250_bit at ADC_SMPR1.B15;
    const register unsigned short int SMP251 = 16;
    sbit  SMP251_bit at ADC_SMPR1.B16;
    const register unsigned short int SMP252 = 17;
    sbit  SMP252_bit at ADC_SMPR1.B17;
    const register unsigned short int SMP260 = 18;
    sbit  SMP260_bit at ADC_SMPR1.B18;
    const register unsigned short int SMP261 = 19;
    sbit  SMP261_bit at ADC_SMPR1.B19;
    const register unsigned short int SMP262 = 20;
    sbit  SMP262_bit at ADC_SMPR1.B20;
    const register unsigned short int SMP270 = 21;
    sbit  SMP270_bit at ADC_SMPR1.B21;
    const register unsigned short int SMP271 = 22;
    sbit  SMP271_bit at ADC_SMPR1.B22;
    const register unsigned short int SMP272 = 23;
    sbit  SMP272_bit at ADC_SMPR1.B23;
    const register unsigned short int SMP280 = 24;
    sbit  SMP280_bit at ADC_SMPR1.B24;
    const register unsigned short int SMP281 = 25;
    sbit  SMP281_bit at ADC_SMPR1.B25;
    const register unsigned short int SMP282 = 26;
    sbit  SMP282_bit at ADC_SMPR1.B26;
    const register unsigned short int SMP290 = 27;
    sbit  SMP290_bit at ADC_SMPR1.B27;
    const register unsigned short int SMP291 = 28;
    sbit  SMP291_bit at ADC_SMPR1.B28;
    const register unsigned short int SMP292 = 29;
    sbit  SMP292_bit at ADC_SMPR1.B29;

sfr unsigned long   volatile ADC_SMPR2            absolute 0x40012410;
    const register unsigned short int SMP100 = 0;
    sbit  SMP100_bit at ADC_SMPR2.B0;
    const register unsigned short int SMP101 = 1;
    sbit  SMP101_bit at ADC_SMPR2.B1;
    const register unsigned short int SMP102 = 2;
    sbit  SMP102_bit at ADC_SMPR2.B2;
    const register unsigned short int SMP110 = 3;
    sbit  SMP110_bit at ADC_SMPR2.B3;
    const register unsigned short int SMP111 = 4;
    sbit  SMP111_bit at ADC_SMPR2.B4;
    const register unsigned short int SMP112 = 5;
    sbit  SMP112_bit at ADC_SMPR2.B5;
    const register unsigned short int SMP120 = 6;
    sbit  SMP120_bit at ADC_SMPR2.B6;
    const register unsigned short int SMP121 = 7;
    sbit  SMP121_bit at ADC_SMPR2.B7;
    const register unsigned short int SMP122 = 8;
    sbit  SMP122_bit at ADC_SMPR2.B8;
    const register unsigned short int SMP130 = 9;
    sbit  SMP130_bit at ADC_SMPR2.B9;
    const register unsigned short int SMP131 = 10;
    sbit  SMP131_bit at ADC_SMPR2.B10;
    const register unsigned short int SMP132 = 11;
    sbit  SMP132_bit at ADC_SMPR2.B11;
    const register unsigned short int SMP140 = 12;
    sbit  SMP140_bit at ADC_SMPR2.B12;
    const register unsigned short int SMP141 = 13;
    sbit  SMP141_bit at ADC_SMPR2.B13;
    const register unsigned short int SMP142 = 14;
    sbit  SMP142_bit at ADC_SMPR2.B14;
    const register unsigned short int SMP150 = 15;
    sbit  SMP150_bit at ADC_SMPR2.B15;
    const register unsigned short int SMP151 = 16;
    sbit  SMP151_bit at ADC_SMPR2.B16;
    const register unsigned short int SMP152 = 17;
    sbit  SMP152_bit at ADC_SMPR2.B17;
    const register unsigned short int SMP160 = 18;
    sbit  SMP160_bit at ADC_SMPR2.B18;
    const register unsigned short int SMP161 = 19;
    sbit  SMP161_bit at ADC_SMPR2.B19;
    const register unsigned short int SMP162 = 20;
    sbit  SMP162_bit at ADC_SMPR2.B20;
    const register unsigned short int SMP170 = 21;
    sbit  SMP170_bit at ADC_SMPR2.B21;
    const register unsigned short int SMP171 = 22;
    sbit  SMP171_bit at ADC_SMPR2.B22;
    const register unsigned short int SMP172 = 23;
    sbit  SMP172_bit at ADC_SMPR2.B23;
    const register unsigned short int SMP180 = 24;
    sbit  SMP180_bit at ADC_SMPR2.B24;
    const register unsigned short int SMP181 = 25;
    sbit  SMP181_bit at ADC_SMPR2.B25;
    const register unsigned short int SMP182 = 26;
    sbit  SMP182_bit at ADC_SMPR2.B26;
    const register unsigned short int SMP190 = 27;
    sbit  SMP190_bit at ADC_SMPR2.B27;
    const register unsigned short int SMP191 = 28;
    sbit  SMP191_bit at ADC_SMPR2.B28;
    const register unsigned short int SMP192 = 29;
    sbit  SMP192_bit at ADC_SMPR2.B29;

sfr unsigned long   volatile ADC_SMPR3            absolute 0x40012414;
    const register unsigned short int SMP00 = 0;
    sbit  SMP00_bit at ADC_SMPR3.B0;
    const register unsigned short int SMP01 = 1;
    sbit  SMP01_bit at ADC_SMPR3.B1;
    const register unsigned short int SMP02 = 2;
    sbit  SMP02_bit at ADC_SMPR3.B2;
    const register unsigned short int SMP10 = 3;
    sbit  SMP10_bit at ADC_SMPR3.B3;
    const register unsigned short int SMP11 = 4;
    sbit  SMP11_bit at ADC_SMPR3.B4;
    const register unsigned short int SMP12 = 5;
    sbit  SMP12_bit at ADC_SMPR3.B5;
    const register unsigned short int SMP20 = 6;
    sbit  SMP20_bit at ADC_SMPR3.B6;
    const register unsigned short int SMP21 = 7;
    sbit  SMP21_bit at ADC_SMPR3.B7;
    const register unsigned short int SMP22 = 8;
    sbit  SMP22_bit at ADC_SMPR3.B8;
    const register unsigned short int SMP30 = 9;
    sbit  SMP30_bit at ADC_SMPR3.B9;
    const register unsigned short int SMP31 = 10;
    sbit  SMP31_bit at ADC_SMPR3.B10;
    const register unsigned short int SMP32 = 11;
    sbit  SMP32_bit at ADC_SMPR3.B11;
    const register unsigned short int SMP40 = 12;
    sbit  SMP40_bit at ADC_SMPR3.B12;
    const register unsigned short int SMP41 = 13;
    sbit  SMP41_bit at ADC_SMPR3.B13;
    const register unsigned short int SMP42 = 14;
    sbit  SMP42_bit at ADC_SMPR3.B14;
    const register unsigned short int SMP50 = 15;
    sbit  SMP50_bit at ADC_SMPR3.B15;
    const register unsigned short int SMP51 = 16;
    sbit  SMP51_bit at ADC_SMPR3.B16;
    const register unsigned short int SMP52 = 17;
    sbit  SMP52_bit at ADC_SMPR3.B17;
    const register unsigned short int SMP60 = 18;
    sbit  SMP60_bit at ADC_SMPR3.B18;
    const register unsigned short int SMP61 = 19;
    sbit  SMP61_bit at ADC_SMPR3.B19;
    const register unsigned short int SMP62 = 20;
    sbit  SMP62_bit at ADC_SMPR3.B20;
    const register unsigned short int SMP70 = 21;
    sbit  SMP70_bit at ADC_SMPR3.B21;
    const register unsigned short int SMP71 = 22;
    sbit  SMP71_bit at ADC_SMPR3.B22;
    const register unsigned short int SMP72 = 23;
    sbit  SMP72_bit at ADC_SMPR3.B23;
    const register unsigned short int SMP80 = 24;
    sbit  SMP80_bit at ADC_SMPR3.B24;
    const register unsigned short int SMP81 = 25;
    sbit  SMP81_bit at ADC_SMPR3.B25;
    const register unsigned short int SMP82 = 26;
    sbit  SMP82_bit at ADC_SMPR3.B26;
    const register unsigned short int SMP90 = 27;
    sbit  SMP90_bit at ADC_SMPR3.B27;
    const register unsigned short int SMP91 = 28;
    sbit  SMP91_bit at ADC_SMPR3.B28;
    const register unsigned short int SMP92 = 29;
    sbit  SMP92_bit at ADC_SMPR3.B29;

sfr unsigned long   volatile ADC_JOFR1            absolute 0x40012418;
    const register unsigned short int JOFFSET10 = 0;
    sbit  JOFFSET10_bit at ADC_JOFR1.B0;
    const register unsigned short int JOFFSET11 = 1;
    sbit  JOFFSET11_bit at ADC_JOFR1.B1;
    const register unsigned short int JOFFSET12 = 2;
    sbit  JOFFSET12_bit at ADC_JOFR1.B2;
    const register unsigned short int JOFFSET13 = 3;
    sbit  JOFFSET13_bit at ADC_JOFR1.B3;
    const register unsigned short int JOFFSET14 = 4;
    sbit  JOFFSET14_bit at ADC_JOFR1.B4;
    const register unsigned short int JOFFSET15 = 5;
    sbit  JOFFSET15_bit at ADC_JOFR1.B5;
    const register unsigned short int JOFFSET16 = 6;
    sbit  JOFFSET16_bit at ADC_JOFR1.B6;
    const register unsigned short int JOFFSET17 = 7;
    sbit  JOFFSET17_bit at ADC_JOFR1.B7;
    const register unsigned short int JOFFSET18 = 8;
    sbit  JOFFSET18_bit at ADC_JOFR1.B8;
    const register unsigned short int JOFFSET19 = 9;
    sbit  JOFFSET19_bit at ADC_JOFR1.B9;
    const register unsigned short int JOFFSET110 = 10;
    sbit  JOFFSET110_bit at ADC_JOFR1.B10;
    const register unsigned short int JOFFSET111 = 11;
    sbit  JOFFSET111_bit at ADC_JOFR1.B11;

sfr unsigned long   volatile ADC_JOFR2            absolute 0x4001241C;
    const register unsigned short int JOFFSET20 = 0;
    sbit  JOFFSET20_bit at ADC_JOFR2.B0;
    const register unsigned short int JOFFSET21 = 1;
    sbit  JOFFSET21_bit at ADC_JOFR2.B1;
    const register unsigned short int JOFFSET22 = 2;
    sbit  JOFFSET22_bit at ADC_JOFR2.B2;
    const register unsigned short int JOFFSET23 = 3;
    sbit  JOFFSET23_bit at ADC_JOFR2.B3;
    const register unsigned short int JOFFSET24 = 4;
    sbit  JOFFSET24_bit at ADC_JOFR2.B4;
    const register unsigned short int JOFFSET25 = 5;
    sbit  JOFFSET25_bit at ADC_JOFR2.B5;
    const register unsigned short int JOFFSET26 = 6;
    sbit  JOFFSET26_bit at ADC_JOFR2.B6;
    const register unsigned short int JOFFSET27 = 7;
    sbit  JOFFSET27_bit at ADC_JOFR2.B7;
    const register unsigned short int JOFFSET28 = 8;
    sbit  JOFFSET28_bit at ADC_JOFR2.B8;
    const register unsigned short int JOFFSET29 = 9;
    sbit  JOFFSET29_bit at ADC_JOFR2.B9;
    const register unsigned short int JOFFSET210 = 10;
    sbit  JOFFSET210_bit at ADC_JOFR2.B10;
    const register unsigned short int JOFFSET211 = 11;
    sbit  JOFFSET211_bit at ADC_JOFR2.B11;

sfr unsigned long   volatile ADC_JOFR3            absolute 0x40012420;
    const register unsigned short int JOFFSET30 = 0;
    sbit  JOFFSET30_bit at ADC_JOFR3.B0;
    const register unsigned short int JOFFSET31 = 1;
    sbit  JOFFSET31_bit at ADC_JOFR3.B1;
    const register unsigned short int JOFFSET32 = 2;
    sbit  JOFFSET32_bit at ADC_JOFR3.B2;
    const register unsigned short int JOFFSET33 = 3;
    sbit  JOFFSET33_bit at ADC_JOFR3.B3;
    const register unsigned short int JOFFSET34 = 4;
    sbit  JOFFSET34_bit at ADC_JOFR3.B4;
    const register unsigned short int JOFFSET35 = 5;
    sbit  JOFFSET35_bit at ADC_JOFR3.B5;
    const register unsigned short int JOFFSET36 = 6;
    sbit  JOFFSET36_bit at ADC_JOFR3.B6;
    const register unsigned short int JOFFSET37 = 7;
    sbit  JOFFSET37_bit at ADC_JOFR3.B7;
    const register unsigned short int JOFFSET38 = 8;
    sbit  JOFFSET38_bit at ADC_JOFR3.B8;
    const register unsigned short int JOFFSET39 = 9;
    sbit  JOFFSET39_bit at ADC_JOFR3.B9;
    const register unsigned short int JOFFSET310 = 10;
    sbit  JOFFSET310_bit at ADC_JOFR3.B10;
    const register unsigned short int JOFFSET311 = 11;
    sbit  JOFFSET311_bit at ADC_JOFR3.B11;

sfr unsigned long   volatile ADC_JOFR4            absolute 0x40012424;
    const register unsigned short int JOFFSET40 = 0;
    sbit  JOFFSET40_bit at ADC_JOFR4.B0;
    const register unsigned short int JOFFSET41 = 1;
    sbit  JOFFSET41_bit at ADC_JOFR4.B1;
    const register unsigned short int JOFFSET42 = 2;
    sbit  JOFFSET42_bit at ADC_JOFR4.B2;
    const register unsigned short int JOFFSET43 = 3;
    sbit  JOFFSET43_bit at ADC_JOFR4.B3;
    const register unsigned short int JOFFSET44 = 4;
    sbit  JOFFSET44_bit at ADC_JOFR4.B4;
    const register unsigned short int JOFFSET45 = 5;
    sbit  JOFFSET45_bit at ADC_JOFR4.B5;
    const register unsigned short int JOFFSET46 = 6;
    sbit  JOFFSET46_bit at ADC_JOFR4.B6;
    const register unsigned short int JOFFSET47 = 7;
    sbit  JOFFSET47_bit at ADC_JOFR4.B7;
    const register unsigned short int JOFFSET48 = 8;
    sbit  JOFFSET48_bit at ADC_JOFR4.B8;
    const register unsigned short int JOFFSET49 = 9;
    sbit  JOFFSET49_bit at ADC_JOFR4.B9;
    const register unsigned short int JOFFSET410 = 10;
    sbit  JOFFSET410_bit at ADC_JOFR4.B10;
    const register unsigned short int JOFFSET411 = 11;
    sbit  JOFFSET411_bit at ADC_JOFR4.B11;

sfr unsigned long   volatile ADC_HTR              absolute 0x40012428;
    sbit  HT0_ADC_HTR_bit at ADC_HTR.B0;
    sbit  HT1_ADC_HTR_bit at ADC_HTR.B1;
    const register unsigned short int HT2 = 2;
    sbit  HT2_bit at ADC_HTR.B2;
    const register unsigned short int HT3 = 3;
    sbit  HT3_bit at ADC_HTR.B3;
    const register unsigned short int HT4 = 4;
    sbit  HT4_bit at ADC_HTR.B4;
    const register unsigned short int HT5 = 5;
    sbit  HT5_bit at ADC_HTR.B5;
    const register unsigned short int HT6 = 6;
    sbit  HT6_bit at ADC_HTR.B6;
    const register unsigned short int HT7 = 7;
    sbit  HT7_bit at ADC_HTR.B7;
    const register unsigned short int HT8 = 8;
    sbit  HT8_bit at ADC_HTR.B8;
    const register unsigned short int HT9 = 9;
    sbit  HT9_bit at ADC_HTR.B9;
    const register unsigned short int HT10 = 10;
    sbit  HT10_bit at ADC_HTR.B10;
    const register unsigned short int HT11 = 11;
    sbit  HT11_bit at ADC_HTR.B11;

sfr unsigned long   volatile ADC_LTR              absolute 0x4001242C;
    const register unsigned short int LT0 = 0;
    sbit  LT0_bit at ADC_LTR.B0;
    const register unsigned short int LT1 = 1;
    sbit  LT1_bit at ADC_LTR.B1;
    const register unsigned short int LT2 = 2;
    sbit  LT2_bit at ADC_LTR.B2;
    const register unsigned short int LT3 = 3;
    sbit  LT3_bit at ADC_LTR.B3;
    const register unsigned short int LT4 = 4;
    sbit  LT4_bit at ADC_LTR.B4;
    const register unsigned short int LT5 = 5;
    sbit  LT5_bit at ADC_LTR.B5;
    const register unsigned short int LT6 = 6;
    sbit  LT6_bit at ADC_LTR.B6;
    const register unsigned short int LT7 = 7;
    sbit  LT7_bit at ADC_LTR.B7;
    const register unsigned short int LT8 = 8;
    sbit  LT8_bit at ADC_LTR.B8;
    const register unsigned short int LT9 = 9;
    sbit  LT9_bit at ADC_LTR.B9;
    const register unsigned short int LT10 = 10;
    sbit  LT10_bit at ADC_LTR.B10;
    const register unsigned short int LT11 = 11;
    sbit  LT11_bit at ADC_LTR.B11;

sfr unsigned long   volatile ADC_SQR1             absolute 0x40012430;
    const register unsigned short int L0 = 20;
    sbit  L0_bit at ADC_SQR1.B20;
    const register unsigned short int L1 = 21;
    sbit  L1_bit at ADC_SQR1.B21;
    const register unsigned short int L2 = 22;
    sbit  L2_bit at ADC_SQR1.B22;
    const register unsigned short int L3 = 23;
    sbit  L3_bit at ADC_SQR1.B23;
    const register unsigned short int SQ280 = 15;
    sbit  SQ280_bit at ADC_SQR1.B15;
    const register unsigned short int SQ281 = 16;
    sbit  SQ281_bit at ADC_SQR1.B16;
    const register unsigned short int SQ282 = 17;
    sbit  SQ282_bit at ADC_SQR1.B17;
    const register unsigned short int SQ283 = 18;
    sbit  SQ283_bit at ADC_SQR1.B18;
    const register unsigned short int SQ284 = 19;
    sbit  SQ284_bit at ADC_SQR1.B19;
    const register unsigned short int SQ270 = 10;
    sbit  SQ270_bit at ADC_SQR1.B10;
    const register unsigned short int SQ271 = 11;
    sbit  SQ271_bit at ADC_SQR1.B11;
    const register unsigned short int SQ272 = 12;
    sbit  SQ272_bit at ADC_SQR1.B12;
    const register unsigned short int SQ273 = 13;
    sbit  SQ273_bit at ADC_SQR1.B13;
    const register unsigned short int SQ274 = 14;
    sbit  SQ274_bit at ADC_SQR1.B14;
    const register unsigned short int SQ260 = 5;
    sbit  SQ260_bit at ADC_SQR1.B5;
    const register unsigned short int SQ261 = 6;
    sbit  SQ261_bit at ADC_SQR1.B6;
    const register unsigned short int SQ262 = 7;
    sbit  SQ262_bit at ADC_SQR1.B7;
    const register unsigned short int SQ263 = 8;
    sbit  SQ263_bit at ADC_SQR1.B8;
    const register unsigned short int SQ264 = 9;
    sbit  SQ264_bit at ADC_SQR1.B9;
    const register unsigned short int SQ250 = 0;
    sbit  SQ250_bit at ADC_SQR1.B0;
    const register unsigned short int SQ251 = 1;
    sbit  SQ251_bit at ADC_SQR1.B1;
    const register unsigned short int SQ252 = 2;
    sbit  SQ252_bit at ADC_SQR1.B2;
    const register unsigned short int SQ253 = 3;
    sbit  SQ253_bit at ADC_SQR1.B3;
    const register unsigned short int SQ254 = 4;
    sbit  SQ254_bit at ADC_SQR1.B4;

sfr unsigned long   volatile ADC_SQR2             absolute 0x40012434;
    const register unsigned short int SQ240 = 25;
    sbit  SQ240_bit at ADC_SQR2.B25;
    const register unsigned short int SQ241 = 26;
    sbit  SQ241_bit at ADC_SQR2.B26;
    const register unsigned short int SQ242 = 27;
    sbit  SQ242_bit at ADC_SQR2.B27;
    const register unsigned short int SQ243 = 28;
    sbit  SQ243_bit at ADC_SQR2.B28;
    const register unsigned short int SQ244 = 29;
    sbit  SQ244_bit at ADC_SQR2.B29;
    const register unsigned short int SQ230 = 20;
    sbit  SQ230_bit at ADC_SQR2.B20;
    const register unsigned short int SQ231 = 21;
    sbit  SQ231_bit at ADC_SQR2.B21;
    const register unsigned short int SQ232 = 22;
    sbit  SQ232_bit at ADC_SQR2.B22;
    const register unsigned short int SQ233 = 23;
    sbit  SQ233_bit at ADC_SQR2.B23;
    const register unsigned short int SQ234 = 24;
    sbit  SQ234_bit at ADC_SQR2.B24;
    const register unsigned short int SQ220 = 15;
    sbit  SQ220_bit at ADC_SQR2.B15;
    const register unsigned short int SQ221 = 16;
    sbit  SQ221_bit at ADC_SQR2.B16;
    const register unsigned short int SQ222 = 17;
    sbit  SQ222_bit at ADC_SQR2.B17;
    const register unsigned short int SQ223 = 18;
    sbit  SQ223_bit at ADC_SQR2.B18;
    const register unsigned short int SQ224 = 19;
    sbit  SQ224_bit at ADC_SQR2.B19;
    const register unsigned short int SQ210 = 10;
    sbit  SQ210_bit at ADC_SQR2.B10;
    const register unsigned short int SQ211 = 11;
    sbit  SQ211_bit at ADC_SQR2.B11;
    const register unsigned short int SQ212 = 12;
    sbit  SQ212_bit at ADC_SQR2.B12;
    const register unsigned short int SQ213 = 13;
    sbit  SQ213_bit at ADC_SQR2.B13;
    const register unsigned short int SQ214 = 14;
    sbit  SQ214_bit at ADC_SQR2.B14;
    const register unsigned short int SQ200 = 5;
    sbit  SQ200_bit at ADC_SQR2.B5;
    const register unsigned short int SQ201 = 6;
    sbit  SQ201_bit at ADC_SQR2.B6;
    const register unsigned short int SQ202 = 7;
    sbit  SQ202_bit at ADC_SQR2.B7;
    const register unsigned short int SQ203 = 8;
    sbit  SQ203_bit at ADC_SQR2.B8;
    const register unsigned short int SQ204 = 9;
    sbit  SQ204_bit at ADC_SQR2.B9;
    const register unsigned short int SQ190 = 0;
    sbit  SQ190_bit at ADC_SQR2.B0;
    const register unsigned short int SQ191 = 1;
    sbit  SQ191_bit at ADC_SQR2.B1;
    const register unsigned short int SQ192 = 2;
    sbit  SQ192_bit at ADC_SQR2.B2;
    const register unsigned short int SQ193 = 3;
    sbit  SQ193_bit at ADC_SQR2.B3;
    const register unsigned short int SQ194 = 4;
    sbit  SQ194_bit at ADC_SQR2.B4;

sfr unsigned long   volatile ADC_SQR3             absolute 0x40012438;
    const register unsigned short int SQ180 = 25;
    sbit  SQ180_bit at ADC_SQR3.B25;
    const register unsigned short int SQ181 = 26;
    sbit  SQ181_bit at ADC_SQR3.B26;
    const register unsigned short int SQ182 = 27;
    sbit  SQ182_bit at ADC_SQR3.B27;
    const register unsigned short int SQ183 = 28;
    sbit  SQ183_bit at ADC_SQR3.B28;
    const register unsigned short int SQ184 = 29;
    sbit  SQ184_bit at ADC_SQR3.B29;
    const register unsigned short int SQ170 = 20;
    sbit  SQ170_bit at ADC_SQR3.B20;
    const register unsigned short int SQ171 = 21;
    sbit  SQ171_bit at ADC_SQR3.B21;
    const register unsigned short int SQ172 = 22;
    sbit  SQ172_bit at ADC_SQR3.B22;
    const register unsigned short int SQ173 = 23;
    sbit  SQ173_bit at ADC_SQR3.B23;
    const register unsigned short int SQ174 = 24;
    sbit  SQ174_bit at ADC_SQR3.B24;
    const register unsigned short int SQ160 = 15;
    sbit  SQ160_bit at ADC_SQR3.B15;
    const register unsigned short int SQ161 = 16;
    sbit  SQ161_bit at ADC_SQR3.B16;
    const register unsigned short int SQ162 = 17;
    sbit  SQ162_bit at ADC_SQR3.B17;
    const register unsigned short int SQ163 = 18;
    sbit  SQ163_bit at ADC_SQR3.B18;
    const register unsigned short int SQ164 = 19;
    sbit  SQ164_bit at ADC_SQR3.B19;
    const register unsigned short int SQ150 = 10;
    sbit  SQ150_bit at ADC_SQR3.B10;
    const register unsigned short int SQ151 = 11;
    sbit  SQ151_bit at ADC_SQR3.B11;
    const register unsigned short int SQ152 = 12;
    sbit  SQ152_bit at ADC_SQR3.B12;
    const register unsigned short int SQ153 = 13;
    sbit  SQ153_bit at ADC_SQR3.B13;
    const register unsigned short int SQ154 = 14;
    sbit  SQ154_bit at ADC_SQR3.B14;
    const register unsigned short int SQ140 = 5;
    sbit  SQ140_bit at ADC_SQR3.B5;
    const register unsigned short int SQ141 = 6;
    sbit  SQ141_bit at ADC_SQR3.B6;
    const register unsigned short int SQ142 = 7;
    sbit  SQ142_bit at ADC_SQR3.B7;
    const register unsigned short int SQ143 = 8;
    sbit  SQ143_bit at ADC_SQR3.B8;
    const register unsigned short int SQ144 = 9;
    sbit  SQ144_bit at ADC_SQR3.B9;
    const register unsigned short int SQ130 = 0;
    sbit  SQ130_bit at ADC_SQR3.B0;
    const register unsigned short int SQ131 = 1;
    sbit  SQ131_bit at ADC_SQR3.B1;
    const register unsigned short int SQ132 = 2;
    sbit  SQ132_bit at ADC_SQR3.B2;
    const register unsigned short int SQ133 = 3;
    sbit  SQ133_bit at ADC_SQR3.B3;
    const register unsigned short int SQ134 = 4;
    sbit  SQ134_bit at ADC_SQR3.B4;

sfr unsigned long   volatile ADC_SQR4             absolute 0x4001243C;
    const register unsigned short int SQ120 = 25;
    sbit  SQ120_bit at ADC_SQR4.B25;
    const register unsigned short int SQ121 = 26;
    sbit  SQ121_bit at ADC_SQR4.B26;
    const register unsigned short int SQ122 = 27;
    sbit  SQ122_bit at ADC_SQR4.B27;
    const register unsigned short int SQ123 = 28;
    sbit  SQ123_bit at ADC_SQR4.B28;
    const register unsigned short int SQ124 = 29;
    sbit  SQ124_bit at ADC_SQR4.B29;
    const register unsigned short int SQ110 = 20;
    sbit  SQ110_bit at ADC_SQR4.B20;
    const register unsigned short int SQ111 = 21;
    sbit  SQ111_bit at ADC_SQR4.B21;
    const register unsigned short int SQ112 = 22;
    sbit  SQ112_bit at ADC_SQR4.B22;
    const register unsigned short int SQ113 = 23;
    sbit  SQ113_bit at ADC_SQR4.B23;
    const register unsigned short int SQ114 = 24;
    sbit  SQ114_bit at ADC_SQR4.B24;
    const register unsigned short int SQ100 = 15;
    sbit  SQ100_bit at ADC_SQR4.B15;
    const register unsigned short int SQ101 = 16;
    sbit  SQ101_bit at ADC_SQR4.B16;
    const register unsigned short int SQ102 = 17;
    sbit  SQ102_bit at ADC_SQR4.B17;
    const register unsigned short int SQ103 = 18;
    sbit  SQ103_bit at ADC_SQR4.B18;
    const register unsigned short int SQ104 = 19;
    sbit  SQ104_bit at ADC_SQR4.B19;
    const register unsigned short int SQ90 = 10;
    sbit  SQ90_bit at ADC_SQR4.B10;
    const register unsigned short int SQ91 = 11;
    sbit  SQ91_bit at ADC_SQR4.B11;
    const register unsigned short int SQ92 = 12;
    sbit  SQ92_bit at ADC_SQR4.B12;
    const register unsigned short int SQ93 = 13;
    sbit  SQ93_bit at ADC_SQR4.B13;
    const register unsigned short int SQ94 = 14;
    sbit  SQ94_bit at ADC_SQR4.B14;
    const register unsigned short int SQ80 = 5;
    sbit  SQ80_bit at ADC_SQR4.B5;
    const register unsigned short int SQ81 = 6;
    sbit  SQ81_bit at ADC_SQR4.B6;
    const register unsigned short int SQ82 = 7;
    sbit  SQ82_bit at ADC_SQR4.B7;
    const register unsigned short int SQ83 = 8;
    sbit  SQ83_bit at ADC_SQR4.B8;
    const register unsigned short int SQ84 = 9;
    sbit  SQ84_bit at ADC_SQR4.B9;
    const register unsigned short int SQ70 = 0;
    sbit  SQ70_bit at ADC_SQR4.B0;
    const register unsigned short int SQ71 = 1;
    sbit  SQ71_bit at ADC_SQR4.B1;
    const register unsigned short int SQ72 = 2;
    sbit  SQ72_bit at ADC_SQR4.B2;
    const register unsigned short int SQ73 = 3;
    sbit  SQ73_bit at ADC_SQR4.B3;
    const register unsigned short int SQ74 = 4;
    sbit  SQ74_bit at ADC_SQR4.B4;

sfr unsigned long   volatile ADC_SQR5             absolute 0x40012440;
    const register unsigned short int SQ60 = 25;
    sbit  SQ60_bit at ADC_SQR5.B25;
    const register unsigned short int SQ61 = 26;
    sbit  SQ61_bit at ADC_SQR5.B26;
    const register unsigned short int SQ62 = 27;
    sbit  SQ62_bit at ADC_SQR5.B27;
    const register unsigned short int SQ63 = 28;
    sbit  SQ63_bit at ADC_SQR5.B28;
    const register unsigned short int SQ64 = 29;
    sbit  SQ64_bit at ADC_SQR5.B29;
    const register unsigned short int SQ50 = 20;
    sbit  SQ50_bit at ADC_SQR5.B20;
    const register unsigned short int SQ51 = 21;
    sbit  SQ51_bit at ADC_SQR5.B21;
    const register unsigned short int SQ52 = 22;
    sbit  SQ52_bit at ADC_SQR5.B22;
    const register unsigned short int SQ53 = 23;
    sbit  SQ53_bit at ADC_SQR5.B23;
    const register unsigned short int SQ54 = 24;
    sbit  SQ54_bit at ADC_SQR5.B24;
    const register unsigned short int SQ40 = 15;
    sbit  SQ40_bit at ADC_SQR5.B15;
    const register unsigned short int SQ41 = 16;
    sbit  SQ41_bit at ADC_SQR5.B16;
    const register unsigned short int SQ42 = 17;
    sbit  SQ42_bit at ADC_SQR5.B17;
    const register unsigned short int SQ43 = 18;
    sbit  SQ43_bit at ADC_SQR5.B18;
    const register unsigned short int SQ44 = 19;
    sbit  SQ44_bit at ADC_SQR5.B19;
    const register unsigned short int SQ30 = 10;
    sbit  SQ30_bit at ADC_SQR5.B10;
    const register unsigned short int SQ31 = 11;
    sbit  SQ31_bit at ADC_SQR5.B11;
    const register unsigned short int SQ32 = 12;
    sbit  SQ32_bit at ADC_SQR5.B12;
    const register unsigned short int SQ33 = 13;
    sbit  SQ33_bit at ADC_SQR5.B13;
    const register unsigned short int SQ34 = 14;
    sbit  SQ34_bit at ADC_SQR5.B14;
    const register unsigned short int SQ20 = 5;
    sbit  SQ20_bit at ADC_SQR5.B5;
    const register unsigned short int SQ21 = 6;
    sbit  SQ21_bit at ADC_SQR5.B6;
    const register unsigned short int SQ22 = 7;
    sbit  SQ22_bit at ADC_SQR5.B7;
    const register unsigned short int SQ23 = 8;
    sbit  SQ23_bit at ADC_SQR5.B8;
    const register unsigned short int SQ24 = 9;
    sbit  SQ24_bit at ADC_SQR5.B9;
    const register unsigned short int SQ10 = 0;
    sbit  SQ10_bit at ADC_SQR5.B0;
    const register unsigned short int SQ11 = 1;
    sbit  SQ11_bit at ADC_SQR5.B1;
    const register unsigned short int SQ12 = 2;
    sbit  SQ12_bit at ADC_SQR5.B2;
    const register unsigned short int SQ13 = 3;
    sbit  SQ13_bit at ADC_SQR5.B3;
    const register unsigned short int SQ14 = 4;
    sbit  SQ14_bit at ADC_SQR5.B4;

sfr unsigned long   volatile ADC_JSQR             absolute 0x40012444;
    const register unsigned short int JL0 = 20;
    sbit  JL0_bit at ADC_JSQR.B20;
    const register unsigned short int JL1 = 21;
    sbit  JL1_bit at ADC_JSQR.B21;
    const register unsigned short int JSQ40 = 15;
    sbit  JSQ40_bit at ADC_JSQR.B15;
    const register unsigned short int JSQ41 = 16;
    sbit  JSQ41_bit at ADC_JSQR.B16;
    const register unsigned short int JSQ42 = 17;
    sbit  JSQ42_bit at ADC_JSQR.B17;
    const register unsigned short int JSQ43 = 18;
    sbit  JSQ43_bit at ADC_JSQR.B18;
    const register unsigned short int JSQ44 = 19;
    sbit  JSQ44_bit at ADC_JSQR.B19;
    const register unsigned short int JSQ30 = 10;
    sbit  JSQ30_bit at ADC_JSQR.B10;
    const register unsigned short int JSQ31 = 11;
    sbit  JSQ31_bit at ADC_JSQR.B11;
    const register unsigned short int JSQ32 = 12;
    sbit  JSQ32_bit at ADC_JSQR.B12;
    const register unsigned short int JSQ33 = 13;
    sbit  JSQ33_bit at ADC_JSQR.B13;
    const register unsigned short int JSQ34 = 14;
    sbit  JSQ34_bit at ADC_JSQR.B14;
    const register unsigned short int JSQ20 = 5;
    sbit  JSQ20_bit at ADC_JSQR.B5;
    const register unsigned short int JSQ21 = 6;
    sbit  JSQ21_bit at ADC_JSQR.B6;
    const register unsigned short int JSQ22 = 7;
    sbit  JSQ22_bit at ADC_JSQR.B7;
    const register unsigned short int JSQ23 = 8;
    sbit  JSQ23_bit at ADC_JSQR.B8;
    const register unsigned short int JSQ24 = 9;
    sbit  JSQ24_bit at ADC_JSQR.B9;
    const register unsigned short int JSQ10 = 0;
    sbit  JSQ10_bit at ADC_JSQR.B0;
    const register unsigned short int JSQ11 = 1;
    sbit  JSQ11_bit at ADC_JSQR.B1;
    const register unsigned short int JSQ12 = 2;
    sbit  JSQ12_bit at ADC_JSQR.B2;
    const register unsigned short int JSQ13 = 3;
    sbit  JSQ13_bit at ADC_JSQR.B3;
    const register unsigned short int JSQ14 = 4;
    sbit  JSQ14_bit at ADC_JSQR.B4;

sfr unsigned long   volatile ADC_JDR1             absolute 0x40012448;
    const register unsigned short int JDATA0 = 0;
    sbit  JDATA0_bit at ADC_JDR1.B0;
    const register unsigned short int JDATA1 = 1;
    sbit  JDATA1_bit at ADC_JDR1.B1;
    const register unsigned short int JDATA2 = 2;
    sbit  JDATA2_bit at ADC_JDR1.B2;
    const register unsigned short int JDATA3 = 3;
    sbit  JDATA3_bit at ADC_JDR1.B3;
    const register unsigned short int JDATA4 = 4;
    sbit  JDATA4_bit at ADC_JDR1.B4;
    const register unsigned short int JDATA5 = 5;
    sbit  JDATA5_bit at ADC_JDR1.B5;
    const register unsigned short int JDATA6 = 6;
    sbit  JDATA6_bit at ADC_JDR1.B6;
    const register unsigned short int JDATA7 = 7;
    sbit  JDATA7_bit at ADC_JDR1.B7;
    const register unsigned short int JDATA8 = 8;
    sbit  JDATA8_bit at ADC_JDR1.B8;
    const register unsigned short int JDATA9 = 9;
    sbit  JDATA9_bit at ADC_JDR1.B9;
    const register unsigned short int JDATA10 = 10;
    sbit  JDATA10_bit at ADC_JDR1.B10;
    const register unsigned short int JDATA11 = 11;
    sbit  JDATA11_bit at ADC_JDR1.B11;
    const register unsigned short int JDATA12 = 12;
    sbit  JDATA12_bit at ADC_JDR1.B12;
    const register unsigned short int JDATA13 = 13;
    sbit  JDATA13_bit at ADC_JDR1.B13;
    const register unsigned short int JDATA14 = 14;
    sbit  JDATA14_bit at ADC_JDR1.B14;
    const register unsigned short int JDATA15 = 15;
    sbit  JDATA15_bit at ADC_JDR1.B15;

sfr unsigned long   volatile ADC_JDR2             absolute 0x4001244C;
    sbit  JDATA0_ADC_JDR2_bit at ADC_JDR2.B0;
    sbit  JDATA1_ADC_JDR2_bit at ADC_JDR2.B1;
    sbit  JDATA2_ADC_JDR2_bit at ADC_JDR2.B2;
    sbit  JDATA3_ADC_JDR2_bit at ADC_JDR2.B3;
    sbit  JDATA4_ADC_JDR2_bit at ADC_JDR2.B4;
    sbit  JDATA5_ADC_JDR2_bit at ADC_JDR2.B5;
    sbit  JDATA6_ADC_JDR2_bit at ADC_JDR2.B6;
    sbit  JDATA7_ADC_JDR2_bit at ADC_JDR2.B7;
    sbit  JDATA8_ADC_JDR2_bit at ADC_JDR2.B8;
    sbit  JDATA9_ADC_JDR2_bit at ADC_JDR2.B9;
    sbit  JDATA10_ADC_JDR2_bit at ADC_JDR2.B10;
    sbit  JDATA11_ADC_JDR2_bit at ADC_JDR2.B11;
    sbit  JDATA12_ADC_JDR2_bit at ADC_JDR2.B12;
    sbit  JDATA13_ADC_JDR2_bit at ADC_JDR2.B13;
    sbit  JDATA14_ADC_JDR2_bit at ADC_JDR2.B14;
    sbit  JDATA15_ADC_JDR2_bit at ADC_JDR2.B15;

sfr unsigned long   volatile ADC_JDR3             absolute 0x40012450;
    sbit  JDATA0_ADC_JDR3_bit at ADC_JDR3.B0;
    sbit  JDATA1_ADC_JDR3_bit at ADC_JDR3.B1;
    sbit  JDATA2_ADC_JDR3_bit at ADC_JDR3.B2;
    sbit  JDATA3_ADC_JDR3_bit at ADC_JDR3.B3;
    sbit  JDATA4_ADC_JDR3_bit at ADC_JDR3.B4;
    sbit  JDATA5_ADC_JDR3_bit at ADC_JDR3.B5;
    sbit  JDATA6_ADC_JDR3_bit at ADC_JDR3.B6;
    sbit  JDATA7_ADC_JDR3_bit at ADC_JDR3.B7;
    sbit  JDATA8_ADC_JDR3_bit at ADC_JDR3.B8;
    sbit  JDATA9_ADC_JDR3_bit at ADC_JDR3.B9;
    sbit  JDATA10_ADC_JDR3_bit at ADC_JDR3.B10;
    sbit  JDATA11_ADC_JDR3_bit at ADC_JDR3.B11;
    sbit  JDATA12_ADC_JDR3_bit at ADC_JDR3.B12;
    sbit  JDATA13_ADC_JDR3_bit at ADC_JDR3.B13;
    sbit  JDATA14_ADC_JDR3_bit at ADC_JDR3.B14;
    sbit  JDATA15_ADC_JDR3_bit at ADC_JDR3.B15;

sfr unsigned long   volatile ADC_JDR4             absolute 0x40012454;
    sbit  JDATA0_ADC_JDR4_bit at ADC_JDR4.B0;
    sbit  JDATA1_ADC_JDR4_bit at ADC_JDR4.B1;
    sbit  JDATA2_ADC_JDR4_bit at ADC_JDR4.B2;
    sbit  JDATA3_ADC_JDR4_bit at ADC_JDR4.B3;
    sbit  JDATA4_ADC_JDR4_bit at ADC_JDR4.B4;
    sbit  JDATA5_ADC_JDR4_bit at ADC_JDR4.B5;
    sbit  JDATA6_ADC_JDR4_bit at ADC_JDR4.B6;
    sbit  JDATA7_ADC_JDR4_bit at ADC_JDR4.B7;
    sbit  JDATA8_ADC_JDR4_bit at ADC_JDR4.B8;
    sbit  JDATA9_ADC_JDR4_bit at ADC_JDR4.B9;
    sbit  JDATA10_ADC_JDR4_bit at ADC_JDR4.B10;
    sbit  JDATA11_ADC_JDR4_bit at ADC_JDR4.B11;
    sbit  JDATA12_ADC_JDR4_bit at ADC_JDR4.B12;
    sbit  JDATA13_ADC_JDR4_bit at ADC_JDR4.B13;
    sbit  JDATA14_ADC_JDR4_bit at ADC_JDR4.B14;
    sbit  JDATA15_ADC_JDR4_bit at ADC_JDR4.B15;

sfr unsigned long   volatile ADC_DR               absolute 0x40012458;
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

sfr unsigned long   volatile ADC_SMPR0            absolute 0x4001245C;
    const register unsigned short int SampletimebitsSMPx_x0 = 0;
    sbit  SampletimebitsSMPx_x0_bit at ADC_SMPR0.B0;
    const register unsigned short int SampletimebitsSMPx_x1 = 1;
    sbit  SampletimebitsSMPx_x1_bit at ADC_SMPR0.B1;
    const register unsigned short int SampletimebitsSMPx_x2 = 2;
    sbit  SampletimebitsSMPx_x2_bit at ADC_SMPR0.B2;
    const register unsigned short int SampletimebitsSMPx_x3 = 3;
    sbit  SampletimebitsSMPx_x3_bit at ADC_SMPR0.B3;
    const register unsigned short int SampletimebitsSMPx_x4 = 4;
    sbit  SampletimebitsSMPx_x4_bit at ADC_SMPR0.B4;
    const register unsigned short int SampletimebitsSMPx_x5 = 5;
    sbit  SampletimebitsSMPx_x5_bit at ADC_SMPR0.B5;
    const register unsigned short int SampletimebitsSMPx_x6 = 6;
    sbit  SampletimebitsSMPx_x6_bit at ADC_SMPR0.B6;
    const register unsigned short int SampletimebitsSMPx_x7 = 7;
    sbit  SampletimebitsSMPx_x7_bit at ADC_SMPR0.B7;
    const register unsigned short int SampletimebitsSMPx_x8 = 8;
    sbit  SampletimebitsSMPx_x8_bit at ADC_SMPR0.B8;
    const register unsigned short int SampletimebitsSMPx_x9 = 9;
    sbit  SampletimebitsSMPx_x9_bit at ADC_SMPR0.B9;
    const register unsigned short int SampletimebitsSMPx_x10 = 10;
    sbit  SampletimebitsSMPx_x10_bit at ADC_SMPR0.B10;
    const register unsigned short int SampletimebitsSMPx_x11 = 11;
    sbit  SampletimebitsSMPx_x11_bit at ADC_SMPR0.B11;
    const register unsigned short int SampletimebitsSMPx_x12 = 12;
    sbit  SampletimebitsSMPx_x12_bit at ADC_SMPR0.B12;
    const register unsigned short int SampletimebitsSMPx_x13 = 13;
    sbit  SampletimebitsSMPx_x13_bit at ADC_SMPR0.B13;
    const register unsigned short int SampletimebitsSMPx_x14 = 14;
    sbit  SampletimebitsSMPx_x14_bit at ADC_SMPR0.B14;
    const register unsigned short int SampletimebitsSMPx_x15 = 15;
    sbit  SampletimebitsSMPx_x15_bit at ADC_SMPR0.B15;
    const register unsigned short int SampletimebitsSMPx_x16 = 16;
    sbit  SampletimebitsSMPx_x16_bit at ADC_SMPR0.B16;
    const register unsigned short int SampletimebitsSMPx_x17 = 17;
    sbit  SampletimebitsSMPx_x17_bit at ADC_SMPR0.B17;
    const register unsigned short int SampletimebitsSMPx_x18 = 18;
    sbit  SampletimebitsSMPx_x18_bit at ADC_SMPR0.B18;
    const register unsigned short int SampletimebitsSMPx_x19 = 19;
    sbit  SampletimebitsSMPx_x19_bit at ADC_SMPR0.B19;
    const register unsigned short int SampletimebitsSMPx_x20 = 20;
    sbit  SampletimebitsSMPx_x20_bit at ADC_SMPR0.B20;
    const register unsigned short int SampletimebitsSMPx_x21 = 21;
    sbit  SampletimebitsSMPx_x21_bit at ADC_SMPR0.B21;
    const register unsigned short int SampletimebitsSMPx_x22 = 22;
    sbit  SampletimebitsSMPx_x22_bit at ADC_SMPR0.B22;
    const register unsigned short int SampletimebitsSMPx_x23 = 23;
    sbit  SampletimebitsSMPx_x23_bit at ADC_SMPR0.B23;
    const register unsigned short int SampletimebitsSMPx_x24 = 24;
    sbit  SampletimebitsSMPx_x24_bit at ADC_SMPR0.B24;
    const register unsigned short int SampletimebitsSMPx_x25 = 25;
    sbit  SampletimebitsSMPx_x25_bit at ADC_SMPR0.B25;
    const register unsigned short int SampletimebitsSMPx_x26 = 26;
    sbit  SampletimebitsSMPx_x26_bit at ADC_SMPR0.B26;
    const register unsigned short int SampletimebitsSMPx_x27 = 27;
    sbit  SampletimebitsSMPx_x27_bit at ADC_SMPR0.B27;
    const register unsigned short int SampletimebitsSMPx_x28 = 28;
    sbit  SampletimebitsSMPx_x28_bit at ADC_SMPR0.B28;
    const register unsigned short int SampletimebitsSMPx_x29 = 29;
    sbit  SampletimebitsSMPx_x29_bit at ADC_SMPR0.B29;
    const register unsigned short int SampletimebitsSMPx_x30 = 30;
    sbit  SampletimebitsSMPx_x30_bit at ADC_SMPR0.B30;
    const register unsigned short int SampletimebitsSMPx_x31 = 31;
    sbit  SampletimebitsSMPx_x31_bit at ADC_SMPR0.B31;

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

sfr far unsigned long   volatile STK_CTRL             absolute 0xE000E010;
    const register unsigned short int COUNTFLAG = 16;
    sbit  COUNTFLAG_bit at STK_CTRL.B16;
    const register unsigned short int CLKSOURCE = 2;
    sbit  CLKSOURCE_bit at STK_CTRL.B2;
    const register unsigned short int TICKINT = 1;
    sbit  TICKINT_bit at STK_CTRL.B1;
    const register unsigned short int ENABLE_ = 0;
    sbit  ENABLE_bit at STK_CTRL.B0;

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
    const register unsigned short int RETOBASE = 11;
    sbit  RETOBASE_bit at SCB_ICSR.B11;
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
    const register unsigned short int PRIGROUP0 = 8;
    sbit  PRIGROUP0_bit at SCB_AIRCR.B8;
    const register unsigned short int PRIGROUP1 = 9;
    sbit  PRIGROUP1_bit at SCB_AIRCR.B9;
    const register unsigned short int PRIGROUP2 = 10;
    sbit  PRIGROUP2_bit at SCB_AIRCR.B10;
    const register unsigned short int SYSRESETREQ = 2;
    sbit  SYSRESETREQ_bit at SCB_AIRCR.B2;
    const register unsigned short int VECTCLRACTIVE = 1;
    sbit  VECTCLRACTIVE_bit at SCB_AIRCR.B1;
    const register unsigned short int VECTRESET = 0;
    sbit  VECTRESET_bit at SCB_AIRCR.B0;

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

sfr far unsigned long   volatile SCB_SHPR1            absolute 0xE000ED18;
    const register unsigned short int PRI_60 = 16;
    sbit  PRI_60_bit at SCB_SHPR1.B16;
    const register unsigned short int PRI_61 = 17;
    sbit  PRI_61_bit at SCB_SHPR1.B17;
    const register unsigned short int PRI_62 = 18;
    sbit  PRI_62_bit at SCB_SHPR1.B18;
    const register unsigned short int PRI_63 = 19;
    sbit  PRI_63_bit at SCB_SHPR1.B19;
    const register unsigned short int PRI_64 = 20;
    sbit  PRI_64_bit at SCB_SHPR1.B20;
    const register unsigned short int PRI_65 = 21;
    sbit  PRI_65_bit at SCB_SHPR1.B21;
    const register unsigned short int PRI_66 = 22;
    sbit  PRI_66_bit at SCB_SHPR1.B22;
    const register unsigned short int PRI_67 = 23;
    sbit  PRI_67_bit at SCB_SHPR1.B23;
    const register unsigned short int PRI_50 = 8;
    sbit  PRI_50_bit at SCB_SHPR1.B8;
    const register unsigned short int PRI_51 = 9;
    sbit  PRI_51_bit at SCB_SHPR1.B9;
    const register unsigned short int PRI_52 = 10;
    sbit  PRI_52_bit at SCB_SHPR1.B10;
    const register unsigned short int PRI_53 = 11;
    sbit  PRI_53_bit at SCB_SHPR1.B11;
    const register unsigned short int PRI_54 = 12;
    sbit  PRI_54_bit at SCB_SHPR1.B12;
    const register unsigned short int PRI_55 = 13;
    sbit  PRI_55_bit at SCB_SHPR1.B13;
    const register unsigned short int PRI_56 = 14;
    sbit  PRI_56_bit at SCB_SHPR1.B14;
    const register unsigned short int PRI_57 = 15;
    sbit  PRI_57_bit at SCB_SHPR1.B15;
    const register unsigned short int PRI_40 = 0;
    sbit  PRI_40_bit at SCB_SHPR1.B0;
    const register unsigned short int PRI_41 = 1;
    sbit  PRI_41_bit at SCB_SHPR1.B1;
    const register unsigned short int PRI_42 = 2;
    sbit  PRI_42_bit at SCB_SHPR1.B2;
    const register unsigned short int PRI_43 = 3;
    sbit  PRI_43_bit at SCB_SHPR1.B3;
    const register unsigned short int PRI_44 = 4;
    sbit  PRI_44_bit at SCB_SHPR1.B4;
    const register unsigned short int PRI_45 = 5;
    sbit  PRI_45_bit at SCB_SHPR1.B5;
    const register unsigned short int PRI_46 = 6;
    sbit  PRI_46_bit at SCB_SHPR1.B6;
    const register unsigned short int PRI_47 = 7;
    sbit  PRI_47_bit at SCB_SHPR1.B7;

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

sfr far unsigned long   volatile SCB_SHCRS            absolute 0xE000ED24;
    const register unsigned short int USGFAULTENA = 18;
    sbit  USGFAULTENA_bit at SCB_SHCRS.B18;
    const register unsigned short int BUSFAULTENA = 17;
    sbit  BUSFAULTENA_bit at SCB_SHCRS.B17;
    const register unsigned short int MEMFAULTENA = 16;
    sbit  MEMFAULTENA_bit at SCB_SHCRS.B16;
    const register unsigned short int SVCALLPENDED = 15;
    sbit  SVCALLPENDED_bit at SCB_SHCRS.B15;
    const register unsigned short int BUSFAULTPENDED = 14;
    sbit  BUSFAULTPENDED_bit at SCB_SHCRS.B14;
    const register unsigned short int MEMFAULTPENDED = 13;
    sbit  MEMFAULTPENDED_bit at SCB_SHCRS.B13;
    const register unsigned short int USGFAULTPENDED = 12;
    sbit  USGFAULTPENDED_bit at SCB_SHCRS.B12;
    const register unsigned short int SYSTICKACT = 11;
    sbit  SYSTICKACT_bit at SCB_SHCRS.B11;
    const register unsigned short int PENDSVACT = 10;
    sbit  PENDSVACT_bit at SCB_SHCRS.B10;
    const register unsigned short int MONITORACT = 8;
    sbit  MONITORACT_bit at SCB_SHCRS.B8;
    const register unsigned short int SVCALLACT = 7;
    sbit  SVCALLACT_bit at SCB_SHCRS.B7;
    const register unsigned short int USGFAULTACT = 3;
    sbit  USGFAULTACT_bit at SCB_SHCRS.B3;
    const register unsigned short int BUSFAULTACT = 1;
    sbit  BUSFAULTACT_bit at SCB_SHCRS.B1;
    const register unsigned short int MEMFAULTACT = 0;
    sbit  MEMFAULTACT_bit at SCB_SHCRS.B0;

sfr far unsigned long   volatile DBG_DBGMCU_IDCODE    absolute 0xE0042000;
    const register unsigned short int DEV_ID0 = 0;
    sbit  DEV_ID0_bit at DBG_DBGMCU_IDCODE.B0;
    const register unsigned short int DEV_ID1 = 1;
    sbit  DEV_ID1_bit at DBG_DBGMCU_IDCODE.B1;
    const register unsigned short int DEV_ID2 = 2;
    sbit  DEV_ID2_bit at DBG_DBGMCU_IDCODE.B2;
    const register unsigned short int DEV_ID3 = 3;
    sbit  DEV_ID3_bit at DBG_DBGMCU_IDCODE.B3;
    const register unsigned short int DEV_ID4 = 4;
    sbit  DEV_ID4_bit at DBG_DBGMCU_IDCODE.B4;
    const register unsigned short int DEV_ID5 = 5;
    sbit  DEV_ID5_bit at DBG_DBGMCU_IDCODE.B5;
    const register unsigned short int DEV_ID6 = 6;
    sbit  DEV_ID6_bit at DBG_DBGMCU_IDCODE.B6;
    const register unsigned short int DEV_ID7 = 7;
    sbit  DEV_ID7_bit at DBG_DBGMCU_IDCODE.B7;
    const register unsigned short int DEV_ID8 = 8;
    sbit  DEV_ID8_bit at DBG_DBGMCU_IDCODE.B8;
    const register unsigned short int DEV_ID9 = 9;
    sbit  DEV_ID9_bit at DBG_DBGMCU_IDCODE.B9;
    const register unsigned short int DEV_ID10 = 10;
    sbit  DEV_ID10_bit at DBG_DBGMCU_IDCODE.B10;
    const register unsigned short int DEV_ID11 = 11;
    sbit  DEV_ID11_bit at DBG_DBGMCU_IDCODE.B11;
    const register unsigned short int REV_ID0 = 16;
    sbit  REV_ID0_bit at DBG_DBGMCU_IDCODE.B16;
    const register unsigned short int REV_ID1 = 17;
    sbit  REV_ID1_bit at DBG_DBGMCU_IDCODE.B17;
    const register unsigned short int REV_ID2 = 18;
    sbit  REV_ID2_bit at DBG_DBGMCU_IDCODE.B18;
    const register unsigned short int REV_ID3 = 19;
    sbit  REV_ID3_bit at DBG_DBGMCU_IDCODE.B19;
    const register unsigned short int REV_ID4 = 20;
    sbit  REV_ID4_bit at DBG_DBGMCU_IDCODE.B20;
    const register unsigned short int REV_ID5 = 21;
    sbit  REV_ID5_bit at DBG_DBGMCU_IDCODE.B21;
    const register unsigned short int REV_ID6 = 22;
    sbit  REV_ID6_bit at DBG_DBGMCU_IDCODE.B22;
    const register unsigned short int REV_ID7 = 23;
    sbit  REV_ID7_bit at DBG_DBGMCU_IDCODE.B23;
    const register unsigned short int REV_ID8 = 24;
    sbit  REV_ID8_bit at DBG_DBGMCU_IDCODE.B24;
    const register unsigned short int REV_ID9 = 25;
    sbit  REV_ID9_bit at DBG_DBGMCU_IDCODE.B25;
    const register unsigned short int REV_ID10 = 26;
    sbit  REV_ID10_bit at DBG_DBGMCU_IDCODE.B26;
    const register unsigned short int REV_ID11 = 27;
    sbit  REV_ID11_bit at DBG_DBGMCU_IDCODE.B27;
    const register unsigned short int REV_ID12 = 28;
    sbit  REV_ID12_bit at DBG_DBGMCU_IDCODE.B28;
    const register unsigned short int REV_ID13 = 29;
    sbit  REV_ID13_bit at DBG_DBGMCU_IDCODE.B29;
    const register unsigned short int REV_ID14 = 30;
    sbit  REV_ID14_bit at DBG_DBGMCU_IDCODE.B30;
    const register unsigned short int REV_ID15 = 31;
    sbit  REV_ID15_bit at DBG_DBGMCU_IDCODE.B31;

sfr far unsigned long   volatile DBG_DBGMCU_CR        absolute 0xE0042004;
    const register unsigned short int DBG_SLEEP = 0;
    sbit  DBG_SLEEP_bit at DBG_DBGMCU_CR.B0;
    const register unsigned short int DBG_STOP = 1;
    sbit  DBG_STOP_bit at DBG_DBGMCU_CR.B1;
    const register unsigned short int DBG_STANDBY = 2;
    sbit  DBG_STANDBY_bit at DBG_DBGMCU_CR.B2;
    const register unsigned short int TRACE_IOEN = 5;
    sbit  TRACE_IOEN_bit at DBG_DBGMCU_CR.B5;
    const register unsigned short int TRACE_MODE0 = 6;
    sbit  TRACE_MODE0_bit at DBG_DBGMCU_CR.B6;
    const register unsigned short int TRACE_MODE1 = 7;
    sbit  TRACE_MODE1_bit at DBG_DBGMCU_CR.B7;
    const register unsigned short int DBG_I2C2_SMBUS_TIMEOUT = 16;
    sbit  DBG_I2C2_SMBUS_TIMEOUT_bit at DBG_DBGMCU_CR.B16;
    const register unsigned short int DBG_TIM8_STOP = 17;
    sbit  DBG_TIM8_STOP_bit at DBG_DBGMCU_CR.B17;
    const register unsigned short int DBG_TIM5_STOP = 18;
    sbit  DBG_TIM5_STOP_bit at DBG_DBGMCU_CR.B18;
    const register unsigned short int DBG_TIM6_STOP = 19;
    sbit  DBG_TIM6_STOP_bit at DBG_DBGMCU_CR.B19;
    const register unsigned short int DBG_TIM7_STOP = 20;
    sbit  DBG_TIM7_STOP_bit at DBG_DBGMCU_CR.B20;

sfr far unsigned long   volatile DBG_DBGMCU_APB1_FZ   absolute 0xE0042008;
    const register unsigned short int DBG_TIM2_STOP = 0;
    sbit  DBG_TIM2_STOP_bit at DBG_DBGMCU_APB1_FZ.B0;
    const register unsigned short int DBG_TIM3_STOP = 1;
    sbit  DBG_TIM3_STOP_bit at DBG_DBGMCU_APB1_FZ.B1;
    const register unsigned short int DBG_TIM4_STOP = 2;
    sbit  DBG_TIM4_STOP_bit at DBG_DBGMCU_APB1_FZ.B2;
    sbit  DBG_TIM5_STOP_DBG_DBGMCU_APB1_FZ_bit at DBG_DBGMCU_APB1_FZ.B3;
    sbit  DBG_TIM6_STOP_DBG_DBGMCU_APB1_FZ_bit at DBG_DBGMCU_APB1_FZ.B4;
    sbit  DBG_TIM7_STOP_DBG_DBGMCU_APB1_FZ_bit at DBG_DBGMCU_APB1_FZ.B5;
    const register unsigned short int DBG_TIM12_STOP = 6;
    sbit  DBG_TIM12_STOP_bit at DBG_DBGMCU_APB1_FZ.B6;
    const register unsigned short int DBG_TIM13_STOP = 7;
    sbit  DBG_TIM13_STOP_bit at DBG_DBGMCU_APB1_FZ.B7;
    const register unsigned short int DBG_TIM14_STOP = 8;
    sbit  DBG_TIM14_STOP_bit at DBG_DBGMCU_APB1_FZ.B8;
    const register unsigned short int DBG_WWDG_STOP = 11;
    sbit  DBG_WWDG_STOP_bit at DBG_DBGMCU_APB1_FZ.B11;
    const register unsigned short int DBG_IWDEG_STOP = 12;
    sbit  DBG_IWDEG_STOP_bit at DBG_DBGMCU_APB1_FZ.B12;
    const register unsigned short int DBG_J2C1_SMBUS_TIMEOUT = 21;
    sbit  DBG_J2C1_SMBUS_TIMEOUT_bit at DBG_DBGMCU_APB1_FZ.B21;
    const register unsigned short int DBG_J2C2_SMBUS_TIMEOUT = 22;
    sbit  DBG_J2C2_SMBUS_TIMEOUT_bit at DBG_DBGMCU_APB1_FZ.B22;
    const register unsigned short int DBG_J2C3SMBUS_TIMEOUT = 23;
    sbit  DBG_J2C3SMBUS_TIMEOUT_bit at DBG_DBGMCU_APB1_FZ.B23;
    const register unsigned short int DBG_CAN1_STOP = 25;
    sbit  DBG_CAN1_STOP_bit at DBG_DBGMCU_APB1_FZ.B25;
    const register unsigned short int DBG_CAN2_STOP = 26;
    sbit  DBG_CAN2_STOP_bit at DBG_DBGMCU_APB1_FZ.B26;

sfr far unsigned long   volatile DBG_DBGMCU_APB2_FZ   absolute 0xE004200C;
    const register unsigned short int DBG_TIM1_STOP = 0;
    sbit  DBG_TIM1_STOP_bit at DBG_DBGMCU_APB2_FZ.B0;
    sbit  DBG_TIM8_STOP_DBG_DBGMCU_APB2_FZ_bit at DBG_DBGMCU_APB2_FZ.B1;
    const register unsigned short int DBG_TIM9_STOP = 16;
    sbit  DBG_TIM9_STOP_bit at DBG_DBGMCU_APB2_FZ.B16;
    const register unsigned short int DBG_TIM10_STOP = 17;
    sbit  DBG_TIM10_STOP_bit at DBG_DBGMCU_APB2_FZ.B17;
    const register unsigned short int DBG_TIM11_STOP = 18;
    sbit  DBG_TIM11_STOP_bit at DBG_DBGMCU_APB2_FZ.B18;


 typedef struct tagADC_CSRBITS {
  union {
    struct {
      unsigned AWD1 : 1;
      unsigned EOC1 : 1;
      unsigned JEOC1 : 1;
      unsigned JSTRT1 : 1;
      unsigned STRT1 : 1;
      unsigned OVR1 : 1;
      unsigned ADONS1 : 1;
      unsigned : 25;
    };
  };
} typeADC_CSRBITS;
sfr volatile typeADC_CSRBITS ADC_CSRbits absolute 0x40012700;

 typedef struct tagADC_CCRBITS {
  union {
    struct {
      unsigned : 16;
      unsigned ADCPRE : 2;
      unsigned : 5;
      unsigned TSVREFE : 1;
      unsigned : 8;
    };
  };
} typeADC_CCRBITS;
sfr volatile typeADC_CCRBITS ADC_CCRbits absolute 0x40012704;

 typedef struct tagCOMP_CSRBITS {
  union {
    struct {
      unsigned PU10K : 1;
      unsigned PU400K : 1;
      unsigned PD10K : 1;
      unsigned PD400K : 1;
      unsigned CMP1EN : 1;
      unsigned SW1 : 1;
      unsigned : 1;
      unsigned CMP1OUT : 1;
      unsigned : 4;
      unsigned SPEED : 1;
      unsigned CMP2OUT : 1;
      unsigned : 2;
      unsigned VREFOUTEN : 1;
      unsigned WNDWE : 1;
      unsigned INSEL : 3;
      unsigned OUTSEL : 3;
      unsigned : 2;
      unsigned FCH3 : 1;
      unsigned FCH8 : 1;
      unsigned RCH13 : 1;
      unsigned CAIE : 1;
      unsigned CAIF : 1;
      unsigned TSUSP : 1;
    };
  };
} typeCOMP_CSRBITS;
sfr volatile typeCOMP_CSRBITS COMP_CSRbits absolute 0x40007C00;

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
      unsigned IDR : 7;
      unsigned : 25;
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
sfr volatile typeDMA1_ISRBITS DMA1_ISRbits absolute 0x40026000;

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
sfr volatile typeDMA1_IFCRBITS DMA1_IFCRbits absolute 0x40026004;

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
sfr volatile typeDMA1_CCR1BITS DMA1_CCR1bits absolute 0x40026008;

 typedef struct tagDMA1_CNDTR1BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_CNDTR1BITS;
sfr volatile typeDMA1_CNDTR1BITS DMA1_CNDTR1bits absolute 0x4002600C;

 typedef struct tagDMA1_CPAR1BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_CPAR1BITS;
sfr volatile typeDMA1_CPAR1BITS DMA1_CPAR1bits absolute 0x40026010;

 typedef struct tagDMA1_CMAR1BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA1_CMAR1BITS;
sfr volatile typeDMA1_CMAR1BITS DMA1_CMAR1bits absolute 0x40026014;

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
sfr volatile typeDMA1_CCR2BITS DMA1_CCR2bits absolute 0x4002601C;

 typedef struct tagDMA1_CNDTR2BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_CNDTR2BITS;
sfr volatile typeDMA1_CNDTR2BITS DMA1_CNDTR2bits absolute 0x40026020;

 typedef struct tagDMA1_CPAR2BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_CPAR2BITS;
sfr volatile typeDMA1_CPAR2BITS DMA1_CPAR2bits absolute 0x40026024;

 typedef struct tagDMA1_CMAR2BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA1_CMAR2BITS;
sfr volatile typeDMA1_CMAR2BITS DMA1_CMAR2bits absolute 0x40026028;

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
sfr volatile typeDMA1_CCR3BITS DMA1_CCR3bits absolute 0x40026030;

 typedef struct tagDMA1_CNDTR3BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_CNDTR3BITS;
sfr volatile typeDMA1_CNDTR3BITS DMA1_CNDTR3bits absolute 0x40026034;

 typedef struct tagDMA1_CPAR3BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_CPAR3BITS;
sfr volatile typeDMA1_CPAR3BITS DMA1_CPAR3bits absolute 0x40026038;

 typedef struct tagDMA1_CMAR3BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA1_CMAR3BITS;
sfr volatile typeDMA1_CMAR3BITS DMA1_CMAR3bits absolute 0x4002603C;

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
sfr volatile typeDMA1_CCR4BITS DMA1_CCR4bits absolute 0x40026044;

 typedef struct tagDMA1_CNDTR4BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_CNDTR4BITS;
sfr volatile typeDMA1_CNDTR4BITS DMA1_CNDTR4bits absolute 0x40026048;

 typedef struct tagDMA1_CPAR4BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_CPAR4BITS;
sfr volatile typeDMA1_CPAR4BITS DMA1_CPAR4bits absolute 0x4002604C;

 typedef struct tagDMA1_CMAR4BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA1_CMAR4BITS;
sfr volatile typeDMA1_CMAR4BITS DMA1_CMAR4bits absolute 0x40026050;

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
sfr volatile typeDMA1_CCR5BITS DMA1_CCR5bits absolute 0x40026058;

 typedef struct tagDMA1_CNDTR5BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_CNDTR5BITS;
sfr volatile typeDMA1_CNDTR5BITS DMA1_CNDTR5bits absolute 0x4002605C;

 typedef struct tagDMA1_CPAR5BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_CPAR5BITS;
sfr volatile typeDMA1_CPAR5BITS DMA1_CPAR5bits absolute 0x40026060;

 typedef struct tagDMA1_CMAR5BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA1_CMAR5BITS;
sfr volatile typeDMA1_CMAR5BITS DMA1_CMAR5bits absolute 0x40026064;

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
sfr volatile typeDMA1_CCR6BITS DMA1_CCR6bits absolute 0x4002606C;

 typedef struct tagDMA1_CNDTR6BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_CNDTR6BITS;
sfr volatile typeDMA1_CNDTR6BITS DMA1_CNDTR6bits absolute 0x40026070;

 typedef struct tagDMA1_CPAR6BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_CPAR6BITS;
sfr volatile typeDMA1_CPAR6BITS DMA1_CPAR6bits absolute 0x40026074;

 typedef struct tagDMA1_CMAR6BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA1_CMAR6BITS;
sfr volatile typeDMA1_CMAR6BITS DMA1_CMAR6bits absolute 0x40026078;

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
sfr volatile typeDMA1_CCR7BITS DMA1_CCR7bits absolute 0x40026080;

 typedef struct tagDMA1_CNDTR7BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_CNDTR7BITS;
sfr volatile typeDMA1_CNDTR7BITS DMA1_CNDTR7bits absolute 0x40026084;

 typedef struct tagDMA1_CPAR7BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_CPAR7BITS;
sfr volatile typeDMA1_CPAR7BITS DMA1_CPAR7bits absolute 0x40026088;

 typedef struct tagDMA1_CMAR7BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA1_CMAR7BITS;
sfr volatile typeDMA1_CMAR7BITS DMA1_CMAR7bits absolute 0x4002608C;

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
sfr volatile typeDMA2_ISRBITS DMA2_ISRbits absolute 0x40026400;

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
sfr volatile typeDMA2_IFCRBITS DMA2_IFCRbits absolute 0x40026404;

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
sfr volatile typeDMA2_CCR1BITS DMA2_CCR1bits absolute 0x40026408;

 typedef struct tagDMA2_CNDTR1BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_CNDTR1BITS;
sfr volatile typeDMA2_CNDTR1BITS DMA2_CNDTR1bits absolute 0x4002640C;

 typedef struct tagDMA2_CPAR1BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_CPAR1BITS;
sfr volatile typeDMA2_CPAR1BITS DMA2_CPAR1bits absolute 0x40026410;

 typedef struct tagDMA2_CMAR1BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA2_CMAR1BITS;
sfr volatile typeDMA2_CMAR1BITS DMA2_CMAR1bits absolute 0x40026414;

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
sfr volatile typeDMA2_CCR2BITS DMA2_CCR2bits absolute 0x4002641C;

 typedef struct tagDMA2_CNDTR2BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_CNDTR2BITS;
sfr volatile typeDMA2_CNDTR2BITS DMA2_CNDTR2bits absolute 0x40026420;

 typedef struct tagDMA2_CPAR2BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_CPAR2BITS;
sfr volatile typeDMA2_CPAR2BITS DMA2_CPAR2bits absolute 0x40026424;

 typedef struct tagDMA2_CMAR2BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA2_CMAR2BITS;
sfr volatile typeDMA2_CMAR2BITS DMA2_CMAR2bits absolute 0x40026428;

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
sfr volatile typeDMA2_CCR3BITS DMA2_CCR3bits absolute 0x40026430;

 typedef struct tagDMA2_CNDTR3BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_CNDTR3BITS;
sfr volatile typeDMA2_CNDTR3BITS DMA2_CNDTR3bits absolute 0x40026434;

 typedef struct tagDMA2_CPAR3BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_CPAR3BITS;
sfr volatile typeDMA2_CPAR3BITS DMA2_CPAR3bits absolute 0x40026438;

 typedef struct tagDMA2_CMAR3BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA2_CMAR3BITS;
sfr volatile typeDMA2_CMAR3BITS DMA2_CMAR3bits absolute 0x4002643C;

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
sfr volatile typeDMA2_CCR4BITS DMA2_CCR4bits absolute 0x40026444;

 typedef struct tagDMA2_CNDTR4BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_CNDTR4BITS;
sfr volatile typeDMA2_CNDTR4BITS DMA2_CNDTR4bits absolute 0x40026448;

 typedef struct tagDMA2_CPAR4BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_CPAR4BITS;
sfr volatile typeDMA2_CPAR4BITS DMA2_CPAR4bits absolute 0x4002644C;

 typedef struct tagDMA2_CMAR4BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA2_CMAR4BITS;
sfr volatile typeDMA2_CMAR4BITS DMA2_CMAR4bits absolute 0x40026450;

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
sfr volatile typeDMA2_CCR5BITS DMA2_CCR5bits absolute 0x40026458;

 typedef struct tagDMA2_CNDTR5BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_CNDTR5BITS;
sfr volatile typeDMA2_CNDTR5BITS DMA2_CNDTR5bits absolute 0x4002645C;

 typedef struct tagDMA2_CPAR5BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_CPAR5BITS;
sfr volatile typeDMA2_CPAR5BITS DMA2_CPAR5bits absolute 0x40026460;

 typedef struct tagDMA2_CMAR5BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA2_CMAR5BITS;
sfr volatile typeDMA2_CMAR5BITS DMA2_CMAR5bits absolute 0x40026464;

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
sfr volatile typeDMA2_CCR6BITS DMA2_CCR6bits absolute 0x4002646C;

 typedef struct tagDMA2_CNDTR6BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_CNDTR6BITS;
sfr volatile typeDMA2_CNDTR6BITS DMA2_CNDTR6bits absolute 0x40026470;

 typedef struct tagDMA2_CPAR6BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_CPAR6BITS;
sfr volatile typeDMA2_CPAR6BITS DMA2_CPAR6bits absolute 0x40026474;

 typedef struct tagDMA2_CMAR6BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA2_CMAR6BITS;
sfr volatile typeDMA2_CMAR6BITS DMA2_CMAR6bits absolute 0x40026478;

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
sfr volatile typeDMA2_CCR7BITS DMA2_CCR7bits absolute 0x40026480;

 typedef struct tagDMA2_CNDTR7BITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_CNDTR7BITS;
sfr volatile typeDMA2_CNDTR7BITS DMA2_CNDTR7bits absolute 0x40026484;

 typedef struct tagDMA2_CPAR7BITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_CPAR7BITS;
sfr volatile typeDMA2_CPAR7BITS DMA2_CPAR7bits absolute 0x40026488;

 typedef struct tagDMA2_CMAR7BITS {
  union {
    struct {
      unsigned MA : 32;
    };
  };
} typeDMA2_CMAR7BITS;
sfr volatile typeDMA2_CMAR7BITS DMA2_CMAR7bits absolute 0x4002648C;

 typedef struct tagEXTI_IMRBITS {
  union {
    struct {
      unsigned MR : 23;
      unsigned : 9;
    };
  };
} typeEXTI_IMRBITS;
sfr volatile typeEXTI_IMRBITS EXTI_IMRbits absolute 0x40010400;

 typedef struct tagEXTI_EMRBITS {
  union {
    struct {
      unsigned MR : 23;
      unsigned : 9;
    };
  };
} typeEXTI_EMRBITS;
sfr volatile typeEXTI_EMRBITS EXTI_EMRbits absolute 0x40010404;

 typedef struct tagEXTI_RTSRBITS {
  union {
    struct {
      unsigned TR : 23;
      unsigned : 9;
    };
  };
} typeEXTI_RTSRBITS;
sfr volatile typeEXTI_RTSRBITS EXTI_RTSRbits absolute 0x40010408;

 typedef struct tagEXTI_FTSRBITS {
  union {
    struct {
      unsigned TR : 23;
      unsigned : 9;
    };
  };
} typeEXTI_FTSRBITS;
sfr volatile typeEXTI_FTSRBITS EXTI_FTSRbits absolute 0x4001040C;

 typedef struct tagEXTI_SWIERBITS {
  union {
    struct {
      unsigned SWIER : 23;
      unsigned : 9;
    };
  };
} typeEXTI_SWIERBITS;
sfr volatile typeEXTI_SWIERBITS EXTI_SWIERbits absolute 0x40010410;

 typedef struct tagEXTI_PRBITS {
  union {
    struct {
      unsigned PR : 23;
      unsigned : 9;
    };
  };
} typeEXTI_PRBITS;
sfr volatile typeEXTI_PRBITS EXTI_PRbits absolute 0x40010414;

 typedef struct tagFLASH_ACRBITS {
  union {
    struct {
      unsigned LATENCY : 1;
      unsigned PRFTEN : 1;
      unsigned ACC64 : 1;
      unsigned SLEEP_PD : 1;
      unsigned RUN_PD : 1;
      unsigned : 27;
    };
  };
} typeFLASH_ACRBITS;
sfr volatile typeFLASH_ACRBITS FLASH_ACRbits absolute 0x40023C00;

 typedef struct tagFLASH_PECRBITS {
  union {
    struct {
      unsigned PELOCK : 1;
      unsigned PRGLOCK : 1;
      unsigned OPTLOCK : 1;
      unsigned PRG : 1;
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
sfr volatile typeFLASH_PECRBITS FLASH_PECRbits absolute 0x40023C04;

 typedef struct tagFLASH_PDKEYRBITS {
  union {
    struct {
      unsigned PDKEYR : 32;
    };
  };
} typeFLASH_PDKEYRBITS;
sfr volatile typeFLASH_PDKEYRBITS FLASH_PDKEYRbits absolute 0x40023C08;

 typedef struct tagFLASH_PEKEYRBITS {
  union {
    struct {
      unsigned PEKEYR : 32;
    };
  };
} typeFLASH_PEKEYRBITS;
sfr volatile typeFLASH_PEKEYRBITS FLASH_PEKEYRbits absolute 0x40023C0C;

 typedef struct tagFLASH_PRGKEYRBITS {
  union {
    struct {
      unsigned PRGKEYR : 32;
    };
  };
} typeFLASH_PRGKEYRBITS;
sfr volatile typeFLASH_PRGKEYRBITS FLASH_PRGKEYRbits absolute 0x40023C10;

 typedef struct tagFLASH_OPTKEYRBITS {
  union {
    struct {
      unsigned OPTKEYR : 32;
    };
  };
} typeFLASH_OPTKEYRBITS;
sfr volatile typeFLASH_OPTKEYRBITS FLASH_OPTKEYRbits absolute 0x40023C14;

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
      unsigned OPTVERRUSR : 1;
      unsigned : 19;
    };
  };
} typeFLASH_SRBITS;
sfr volatile typeFLASH_SRBITS FLASH_SRbits absolute 0x40023C18;

 typedef struct tagFLASH_OBRBITS {
  union {
    struct {
      unsigned RDPRT : 8;
      unsigned : 8;
      unsigned BOR_LEV : 4;
      unsigned IWDG_SW : 1;
      unsigned nRTS_STOP : 1;
      unsigned nRST_STDBY : 1;
      unsigned BFB2 : 1;
      unsigned : 8;
    };
  };
} typeFLASH_OBRBITS;
sfr volatile typeFLASH_OBRBITS FLASH_OBRbits absolute 0x40023C1C;

 typedef struct tagFLASH_WRPR1BITS {
  union {
    struct {
      unsigned WRP1 : 32;
    };
  };
} typeFLASH_WRPR1BITS;
sfr volatile typeFLASH_WRPR1BITS FLASH_WRPR1bits absolute 0x40023C20;

 typedef struct tagFLASH_WRPR2BITS {
  union {
    struct {
      unsigned WRP2 : 32;
    };
  };
} typeFLASH_WRPR2BITS;
sfr volatile typeFLASH_WRPR2BITS FLASH_WRPR2bits absolute 0x40023C80;

 typedef struct tagFLASH_WRPR3BITS {
  union {
    struct {
      unsigned WRP3 : 32;
    };
  };
} typeFLASH_WRPR3BITS;
sfr volatile typeFLASH_WRPR3BITS FLASH_WRPR3bits absolute 0x40023C84;

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
sfr volatile typeGPIOA_MODERBITS GPIOA_MODERbits absolute 0x40020000;

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
sfr volatile typeGPIOA_OTYPERBITS GPIOA_OTYPERbits absolute 0x40020004;

 typedef struct tagGPIOA_OSPEEDERBITS {
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
} typeGPIOA_OSPEEDERBITS;
sfr volatile typeGPIOA_OSPEEDERBITS GPIOA_OSPEEDERbits absolute 0x40020008;

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
sfr volatile typeGPIOA_PUPDRBITS GPIOA_PUPDRbits absolute 0x4002000C;

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
sfr volatile typeGPIOA_IDRBITS GPIOA_IDRbits absolute 0x40020010;

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
sfr volatile typeGPIOA_ODRBITS GPIOA_ODRbits absolute 0x40020014;

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
sfr volatile typeGPIOA_BSRRBITS GPIOA_BSRRbits absolute 0x40020018;

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
sfr volatile typeGPIOA_LCKRBITS GPIOA_LCKRbits absolute 0x4002001C;

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
sfr volatile typeGPIOA_AFRLBITS GPIOA_AFRLbits absolute 0x40020020;

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
sfr volatile typeGPIOA_AFRHBITS GPIOA_AFRHbits absolute 0x40020024;

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
sfr volatile typeGPIOB_MODERBITS GPIOB_MODERbits absolute 0x40020400;

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
sfr volatile typeGPIOB_OTYPERBITS GPIOB_OTYPERbits absolute 0x40020404;

 typedef struct tagGPIOB_OSPEEDERBITS {
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
} typeGPIOB_OSPEEDERBITS;
sfr volatile typeGPIOB_OSPEEDERBITS GPIOB_OSPEEDERbits absolute 0x40020408;

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
sfr volatile typeGPIOB_PUPDRBITS GPIOB_PUPDRbits absolute 0x4002040C;

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
sfr volatile typeGPIOB_IDRBITS GPIOB_IDRbits absolute 0x40020410;

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
sfr volatile typeGPIOB_ODRBITS GPIOB_ODRbits absolute 0x40020414;

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
sfr volatile typeGPIOB_BSRRBITS GPIOB_BSRRbits absolute 0x40020418;

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
sfr volatile typeGPIOB_LCKRBITS GPIOB_LCKRbits absolute 0x4002041C;

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
sfr volatile typeGPIOB_AFRLBITS GPIOB_AFRLbits absolute 0x40020420;

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
sfr volatile typeGPIOB_AFRHBITS GPIOB_AFRHbits absolute 0x40020424;

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
sfr volatile typeGPIOC_MODERBITS GPIOC_MODERbits absolute 0x40020800;

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
sfr volatile typeGPIOC_OTYPERBITS GPIOC_OTYPERbits absolute 0x40020804;

 typedef struct tagGPIOC_OSPEEDERBITS {
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
} typeGPIOC_OSPEEDERBITS;
sfr volatile typeGPIOC_OSPEEDERBITS GPIOC_OSPEEDERbits absolute 0x40020808;

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
sfr volatile typeGPIOC_PUPDRBITS GPIOC_PUPDRbits absolute 0x4002080C;

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
sfr volatile typeGPIOC_IDRBITS GPIOC_IDRbits absolute 0x40020810;

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
sfr volatile typeGPIOC_ODRBITS GPIOC_ODRbits absolute 0x40020814;

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
sfr volatile typeGPIOC_BSRRBITS GPIOC_BSRRbits absolute 0x40020818;

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
sfr volatile typeGPIOC_LCKRBITS GPIOC_LCKRbits absolute 0x4002081C;

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
sfr volatile typeGPIOC_AFRLBITS GPIOC_AFRLbits absolute 0x40020820;

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
sfr volatile typeGPIOC_AFRHBITS GPIOC_AFRHbits absolute 0x40020824;

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
sfr volatile typeGPIOD_MODERBITS GPIOD_MODERbits absolute 0x40020C00;

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
sfr volatile typeGPIOD_OTYPERBITS GPIOD_OTYPERbits absolute 0x40020C04;

 typedef struct tagGPIOD_OSPEEDERBITS {
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
} typeGPIOD_OSPEEDERBITS;
sfr volatile typeGPIOD_OSPEEDERBITS GPIOD_OSPEEDERbits absolute 0x40020C08;

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
sfr volatile typeGPIOD_PUPDRBITS GPIOD_PUPDRbits absolute 0x40020C0C;

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
sfr volatile typeGPIOD_IDRBITS GPIOD_IDRbits absolute 0x40020C10;

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
sfr volatile typeGPIOD_ODRBITS GPIOD_ODRbits absolute 0x40020C14;

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
sfr volatile typeGPIOD_BSRRBITS GPIOD_BSRRbits absolute 0x40020C18;

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
sfr volatile typeGPIOD_LCKRBITS GPIOD_LCKRbits absolute 0x40020C1C;

 typedef struct tagGPIOD_AFRLBITS {
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
} typeGPIOD_AFRLBITS;
sfr volatile typeGPIOD_AFRLBITS GPIOD_AFRLbits absolute 0x40020C20;

 typedef struct tagGPIOD_AFRHBITS {
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
} typeGPIOD_AFRHBITS;
sfr volatile typeGPIOD_AFRHBITS GPIOD_AFRHbits absolute 0x40020C24;

 typedef struct tagGPIOE_MODERBITS {
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
} typeGPIOE_MODERBITS;
sfr volatile typeGPIOE_MODERBITS GPIOE_MODERbits absolute 0x40021000;

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
sfr volatile typeGPIOE_OTYPERBITS GPIOE_OTYPERbits absolute 0x40021004;

 typedef struct tagGPIOE_OSPEEDERBITS {
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
} typeGPIOE_OSPEEDERBITS;
sfr volatile typeGPIOE_OSPEEDERBITS GPIOE_OSPEEDERbits absolute 0x40021008;

 typedef struct tagGPIOE_PUPDRBITS {
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
} typeGPIOE_PUPDRBITS;
sfr volatile typeGPIOE_PUPDRBITS GPIOE_PUPDRbits absolute 0x4002100C;

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
sfr volatile typeGPIOE_IDRBITS GPIOE_IDRbits absolute 0x40021010;

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
sfr volatile typeGPIOE_ODRBITS GPIOE_ODRbits absolute 0x40021014;

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
sfr volatile typeGPIOE_BSRRBITS GPIOE_BSRRbits absolute 0x40021018;

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
sfr volatile typeGPIOE_LCKRBITS GPIOE_LCKRbits absolute 0x4002101C;

 typedef struct tagGPIOE_AFRLBITS {
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
} typeGPIOE_AFRLBITS;
sfr volatile typeGPIOE_AFRLBITS GPIOE_AFRLbits absolute 0x40021020;

 typedef struct tagGPIOE_AFRHBITS {
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
} typeGPIOE_AFRHBITS;
sfr volatile typeGPIOE_AFRHBITS GPIOE_AFRHbits absolute 0x40021024;

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
sfr volatile typeGPIOF_MODERBITS GPIOF_MODERbits absolute 0x40021800;

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
sfr volatile typeGPIOF_OTYPERBITS GPIOF_OTYPERbits absolute 0x40021804;

 typedef struct tagGPIOF_OSPEEDERBITS {
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
} typeGPIOF_OSPEEDERBITS;
sfr volatile typeGPIOF_OSPEEDERBITS GPIOF_OSPEEDERbits absolute 0x40021808;

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
sfr volatile typeGPIOF_PUPDRBITS GPIOF_PUPDRbits absolute 0x4002180C;

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
sfr volatile typeGPIOF_IDRBITS GPIOF_IDRbits absolute 0x40021810;

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
sfr volatile typeGPIOF_ODRBITS GPIOF_ODRbits absolute 0x40021814;

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
sfr volatile typeGPIOF_BSRRBITS GPIOF_BSRRbits absolute 0x40021818;

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
sfr volatile typeGPIOF_LCKRBITS GPIOF_LCKRbits absolute 0x4002181C;

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
sfr volatile typeGPIOF_AFRLBITS GPIOF_AFRLbits absolute 0x40021820;

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
sfr volatile typeGPIOF_AFRHBITS GPIOF_AFRHbits absolute 0x40021824;

 typedef struct tagGPIOG_MODERBITS {
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
} typeGPIOG_MODERBITS;
sfr volatile typeGPIOG_MODERBITS GPIOG_MODERbits absolute 0x40021C00;

 typedef struct tagGPIOG_OTYPERBITS {
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
} typeGPIOG_OTYPERBITS;
sfr volatile typeGPIOG_OTYPERBITS GPIOG_OTYPERbits absolute 0x40021C04;

 typedef struct tagGPIOG_OSPEEDERBITS {
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
} typeGPIOG_OSPEEDERBITS;
sfr volatile typeGPIOG_OSPEEDERBITS GPIOG_OSPEEDERbits absolute 0x40021C08;

 typedef struct tagGPIOG_PUPDRBITS {
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
} typeGPIOG_PUPDRBITS;
sfr volatile typeGPIOG_PUPDRBITS GPIOG_PUPDRbits absolute 0x40021C0C;

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
sfr volatile typeGPIOG_IDRBITS GPIOG_IDRbits absolute 0x40021C10;

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
sfr volatile typeGPIOG_ODRBITS GPIOG_ODRbits absolute 0x40021C14;

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
sfr volatile typeGPIOG_BSRRBITS GPIOG_BSRRbits absolute 0x40021C18;

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
sfr volatile typeGPIOG_LCKRBITS GPIOG_LCKRbits absolute 0x40021C1C;

 typedef struct tagGPIOG_AFRLBITS {
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
} typeGPIOG_AFRLBITS;
sfr volatile typeGPIOG_AFRLBITS GPIOG_AFRLbits absolute 0x40021C20;

 typedef struct tagGPIOG_AFRHBITS {
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
} typeGPIOG_AFRHBITS;
sfr volatile typeGPIOG_AFRHBITS GPIOG_AFRHbits absolute 0x40021C24;

 typedef struct tagGPIOH_MODERBITS {
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
} typeGPIOH_MODERBITS;
sfr volatile typeGPIOH_MODERBITS GPIOH_MODERbits absolute 0x40021400;

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
sfr volatile typeGPIOH_OTYPERBITS GPIOH_OTYPERbits absolute 0x40021404;

 typedef struct tagGPIOH_OSPEEDERBITS {
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
} typeGPIOH_OSPEEDERBITS;
sfr volatile typeGPIOH_OSPEEDERBITS GPIOH_OSPEEDERbits absolute 0x40021408;

 typedef struct tagGPIOH_PUPDRBITS {
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
} typeGPIOH_PUPDRBITS;
sfr volatile typeGPIOH_PUPDRBITS GPIOH_PUPDRbits absolute 0x4002140C;

 typedef struct tagGPIOH_IDRBITS {
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
} typeGPIOH_IDRBITS;
sfr volatile typeGPIOH_IDRBITS GPIOH_IDRbits absolute 0x40021410;

 typedef struct tagGPIOH_ODRBITS {
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
} typeGPIOH_ODRBITS;
sfr volatile typeGPIOH_ODRBITS GPIOH_ODRbits absolute 0x40021414;

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
sfr volatile typeGPIOH_BSRRBITS GPIOH_BSRRbits absolute 0x40021418;

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
sfr volatile typeGPIOH_LCKRBITS GPIOH_LCKRbits absolute 0x4002141C;

 typedef struct tagGPIOH_AFRLBITS {
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
} typeGPIOH_AFRLBITS;
sfr volatile typeGPIOH_AFRLBITS GPIOH_AFRLbits absolute 0x40021420;

 typedef struct tagGPIOH_AFRHBITS {
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
} typeGPIOH_AFRHBITS;
sfr volatile typeGPIOH_AFRHBITS GPIOH_AFRHbits absolute 0x40021424;

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
      unsigned ADD_0 : 1;
      unsigned ADD_1_7 : 7;
      unsigned ADD_8_9 : 2;
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
      unsigned ADD_0 : 1;
      unsigned ADD_1_7 : 7;
      unsigned ADD_8_9 : 2;
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

 typedef struct tagLCD_CRBITS {
  union {
    struct {
      unsigned LCDEN : 1;
      unsigned VSEL : 1;
      unsigned DUTY : 3;
      unsigned BIAS : 2;
      unsigned MUX_SEG : 1;
      unsigned : 24;
    };
  };
} typeLCD_CRBITS;
sfr volatile typeLCD_CRBITS LCD_CRbits absolute 0x40002400;

 typedef struct tagLCD_FCRBITS {
  union {
    struct {
      unsigned HD : 1;
      unsigned SOFIE : 1;
      unsigned : 1;
      unsigned UDDIE : 1;
      unsigned PON : 3;
      unsigned DEAD : 3;
      unsigned CC : 3;
      unsigned BLINKF : 3;
      unsigned BLINK : 2;
      unsigned DIV : 4;
      unsigned PS : 4;
      unsigned : 6;
    };
  };
} typeLCD_FCRBITS;
sfr volatile typeLCD_FCRBITS LCD_FCRbits absolute 0x40002404;

 typedef struct tagLCD_SRBITS {
  union {
    struct {
      unsigned ENS : 1;
      unsigned SOF : 1;
      unsigned UDR : 1;
      unsigned UDD : 1;
      unsigned RDY : 1;
      unsigned FCRSF : 1;
      unsigned : 26;
    };
  };
} typeLCD_SRBITS;
sfr volatile typeLCD_SRBITS LCD_SRbits absolute 0x40002408;

 typedef struct tagLCD_CLRBITS {
  union {
    struct {
      unsigned : 1;
      unsigned SOFC : 1;
      unsigned : 1;
      unsigned UDDC : 1;
      unsigned : 28;
    };
  };
} typeLCD_CLRBITS;
sfr volatile typeLCD_CLRBITS LCD_CLRbits absolute 0x4000240C;

 typedef struct tagLCD_RAM_COM0BITS {
  union {
    struct {
      unsigned S00 : 1;
      unsigned S01 : 1;
      unsigned S02 : 1;
      unsigned S03 : 1;
      unsigned S04 : 1;
      unsigned S05 : 1;
      unsigned S06 : 1;
      unsigned S07 : 1;
      unsigned S08 : 1;
      unsigned S09 : 1;
      unsigned S10_ : 1;
      unsigned S11_ : 1;
      unsigned S12_ : 1;
      unsigned S13_ : 1;
      unsigned S14_ : 1;
      unsigned S15_ : 1;
      unsigned S16_ : 1;
      unsigned S17_ : 1;
      unsigned S18_ : 1;
      unsigned S19_ : 1;
      unsigned S20_ : 1;
      unsigned S21_ : 1;
      unsigned S22_ : 1;
      unsigned S23_ : 1;
      unsigned S24_ : 1;
      unsigned S25_ : 1;
      unsigned S26_ : 1;
      unsigned S27_ : 1;
      unsigned S28_ : 1;
      unsigned S29_ : 1;
      unsigned S30_ : 1;
      unsigned S31_ : 1;
    };
  };
} typeLCD_RAM_COM0BITS;
sfr volatile typeLCD_RAM_COM0BITS LCD_RAM_COM0bits absolute 0x40002414;

 typedef struct tagLCD_RAM_COM1BITS {
  union {
    struct {
      unsigned S00 : 1;
      unsigned S01 : 1;
      unsigned S02 : 1;
      unsigned S03 : 1;
      unsigned S04 : 1;
      unsigned S05 : 1;
      unsigned S06 : 1;
      unsigned S07 : 1;
      unsigned S08 : 1;
      unsigned S09 : 1;
      unsigned S10_ : 1;
      unsigned S11_ : 1;
      unsigned S12_ : 1;
      unsigned S13_ : 1;
      unsigned S14_ : 1;
      unsigned S15_ : 1;
      unsigned S16_ : 1;
      unsigned S17_ : 1;
      unsigned S18_ : 1;
      unsigned S19_ : 1;
      unsigned S20_ : 1;
      unsigned S21_ : 1;
      unsigned S22_ : 1;
      unsigned S23_ : 1;
      unsigned S24_ : 1;
      unsigned S25_ : 1;
      unsigned S26_ : 1;
      unsigned S27_ : 1;
      unsigned S28_ : 1;
      unsigned S29_ : 1;
      unsigned S30_ : 1;
      unsigned S31_ : 1;
    };
  };
} typeLCD_RAM_COM1BITS;
sfr volatile typeLCD_RAM_COM1BITS LCD_RAM_COM1bits absolute 0x4000241C;

 typedef struct tagLCD_RAM_COM2BITS {
  union {
    struct {
      unsigned S00 : 1;
      unsigned S01 : 1;
      unsigned S02 : 1;
      unsigned S03 : 1;
      unsigned S04 : 1;
      unsigned S05 : 1;
      unsigned S06 : 1;
      unsigned S07 : 1;
      unsigned S08 : 1;
      unsigned S09 : 1;
      unsigned S10_ : 1;
      unsigned S11_ : 1;
      unsigned S12_ : 1;
      unsigned S13_ : 1;
      unsigned S14_ : 1;
      unsigned S15_ : 1;
      unsigned S16_ : 1;
      unsigned S17_ : 1;
      unsigned S18_ : 1;
      unsigned S19_ : 1;
      unsigned S20_ : 1;
      unsigned S21_ : 1;
      unsigned S22_ : 1;
      unsigned S23_ : 1;
      unsigned S24_ : 1;
      unsigned S25_ : 1;
      unsigned S26_ : 1;
      unsigned S27_ : 1;
      unsigned S28_ : 1;
      unsigned S29_ : 1;
      unsigned S30_ : 1;
      unsigned S31_ : 1;
    };
  };
} typeLCD_RAM_COM2BITS;
sfr volatile typeLCD_RAM_COM2BITS LCD_RAM_COM2bits absolute 0x40002424;

 typedef struct tagLCD_RAM_COM3BITS {
  union {
    struct {
      unsigned S00 : 1;
      unsigned S01 : 1;
      unsigned S02 : 1;
      unsigned S03 : 1;
      unsigned S04 : 1;
      unsigned S05 : 1;
      unsigned S06 : 1;
      unsigned S07 : 1;
      unsigned S08 : 1;
      unsigned S09 : 1;
      unsigned S10_ : 1;
      unsigned S11_ : 1;
      unsigned S12_ : 1;
      unsigned S13_ : 1;
      unsigned S14_ : 1;
      unsigned S15_ : 1;
      unsigned S16_ : 1;
      unsigned S17_ : 1;
      unsigned S18_ : 1;
      unsigned S19_ : 1;
      unsigned S20_ : 1;
      unsigned S21_ : 1;
      unsigned S22_ : 1;
      unsigned S23_ : 1;
      unsigned S24_ : 1;
      unsigned S25_ : 1;
      unsigned S26_ : 1;
      unsigned S27_ : 1;
      unsigned S28_ : 1;
      unsigned S29_ : 1;
      unsigned S30_ : 1;
      unsigned S31_ : 1;
    };
  };
} typeLCD_RAM_COM3BITS;
sfr volatile typeLCD_RAM_COM3BITS LCD_RAM_COM3bits absolute 0x4000242C;

 typedef struct tagLCD_RAM_COM4BITS {
  union {
    struct {
      unsigned S00 : 1;
      unsigned S01 : 1;
      unsigned S02 : 1;
      unsigned S03 : 1;
      unsigned S04 : 1;
      unsigned S05 : 1;
      unsigned S06 : 1;
      unsigned S07 : 1;
      unsigned S08 : 1;
      unsigned S09 : 1;
      unsigned S10_ : 1;
      unsigned S11_ : 1;
      unsigned S12_ : 1;
      unsigned S13_ : 1;
      unsigned S14_ : 1;
      unsigned S15_ : 1;
      unsigned S16_ : 1;
      unsigned S17_ : 1;
      unsigned S18_ : 1;
      unsigned S19_ : 1;
      unsigned S20_ : 1;
      unsigned S21_ : 1;
      unsigned S22_ : 1;
      unsigned S23_ : 1;
      unsigned S24_ : 1;
      unsigned S25_ : 1;
      unsigned S26_ : 1;
      unsigned S27_ : 1;
      unsigned S28_ : 1;
      unsigned S29_ : 1;
      unsigned S30_ : 1;
      unsigned S31_ : 1;
    };
  };
} typeLCD_RAM_COM4BITS;
sfr volatile typeLCD_RAM_COM4BITS LCD_RAM_COM4bits absolute 0x40002434;

 typedef struct tagLCD_RAM_COM5BITS {
  union {
    struct {
      unsigned S00 : 1;
      unsigned S01 : 1;
      unsigned S02 : 1;
      unsigned S03 : 1;
      unsigned S04 : 1;
      unsigned S05 : 1;
      unsigned S06 : 1;
      unsigned S07 : 1;
      unsigned S08 : 1;
      unsigned S09 : 1;
      unsigned S10_ : 1;
      unsigned S11_ : 1;
      unsigned S12_ : 1;
      unsigned S13_ : 1;
      unsigned S14_ : 1;
      unsigned S15_ : 1;
      unsigned S16_ : 1;
      unsigned S17_ : 1;
      unsigned S18_ : 1;
      unsigned S19_ : 1;
      unsigned S20_ : 1;
      unsigned S21_ : 1;
      unsigned S22_ : 1;
      unsigned S23_ : 1;
      unsigned S24_ : 1;
      unsigned S25_ : 1;
      unsigned S26_ : 1;
      unsigned S27_ : 1;
      unsigned S28_ : 1;
      unsigned S29_ : 1;
      unsigned S30_ : 1;
      unsigned S31_ : 1;
    };
  };
} typeLCD_RAM_COM5BITS;
sfr volatile typeLCD_RAM_COM5BITS LCD_RAM_COM5bits absolute 0x4000243C;

 typedef struct tagLCD_RAM_COM6BITS {
  union {
    struct {
      unsigned S00 : 1;
      unsigned S01 : 1;
      unsigned S02 : 1;
      unsigned S03 : 1;
      unsigned S04 : 1;
      unsigned S05 : 1;
      unsigned S06 : 1;
      unsigned S07 : 1;
      unsigned S08 : 1;
      unsigned S09 : 1;
      unsigned S10_ : 1;
      unsigned S11_ : 1;
      unsigned S12_ : 1;
      unsigned S13_ : 1;
      unsigned S14_ : 1;
      unsigned S15_ : 1;
      unsigned S16_ : 1;
      unsigned S17_ : 1;
      unsigned S18_ : 1;
      unsigned S19_ : 1;
      unsigned S20_ : 1;
      unsigned S21_ : 1;
      unsigned S22_ : 1;
      unsigned S23_ : 1;
      unsigned S24_ : 1;
      unsigned S25_ : 1;
      unsigned S26_ : 1;
      unsigned S27_ : 1;
      unsigned S28_ : 1;
      unsigned S29_ : 1;
      unsigned S30_ : 1;
      unsigned S31_ : 1;
    };
  };
} typeLCD_RAM_COM6BITS;
sfr volatile typeLCD_RAM_COM6BITS LCD_RAM_COM6bits absolute 0x40002444;

 typedef struct tagLCD_RAM_COM7BITS {
  union {
    struct {
      unsigned S00 : 1;
      unsigned S01 : 1;
      unsigned S02 : 1;
      unsigned S03 : 1;
      unsigned S04 : 1;
      unsigned S05 : 1;
      unsigned S06 : 1;
      unsigned S07 : 1;
      unsigned S08 : 1;
      unsigned S09 : 1;
      unsigned S10_ : 1;
      unsigned S11_ : 1;
      unsigned S12_ : 1;
      unsigned S13_ : 1;
      unsigned S14_ : 1;
      unsigned S15_ : 1;
      unsigned S16_ : 1;
      unsigned S17_ : 1;
      unsigned S18_ : 1;
      unsigned S19_ : 1;
      unsigned S20_ : 1;
      unsigned S21_ : 1;
      unsigned S22_ : 1;
      unsigned S23_ : 1;
      unsigned S24_ : 1;
      unsigned S25_ : 1;
      unsigned S26_ : 1;
      unsigned S27_ : 1;
      unsigned S28_ : 1;
      unsigned S29_ : 1;
      unsigned S30_ : 1;
      unsigned S31_ : 1;
    };
  };
} typeLCD_RAM_COM7BITS;
sfr volatile typeLCD_RAM_COM7BITS LCD_RAM_COM7bits absolute 0x4000244C;

 typedef struct tagOPAMP_CSRBITS {
  union {
    struct {
      unsigned OPA1PD : 1;
      unsigned S3SEL1 : 1;
      unsigned S4SEL1 : 1;
      unsigned S5SEL1 : 1;
      unsigned S6SEL1 : 1;
      unsigned OPA1CAL_L : 1;
      unsigned OPA1CAL_H : 1;
      unsigned OPA1LPM : 1;
      unsigned OPA2PD : 1;
      unsigned S3SEL2 : 1;
      unsigned S4SEL2 : 1;
      unsigned S5SEL2 : 1;
      unsigned S6SEL2 : 1;
      unsigned OPA2CAL_L : 1;
      unsigned OPA2CAL_H : 1;
      unsigned OPA2LPM : 1;
      unsigned OPA3PD : 1;
      unsigned S3SEL3 : 1;
      unsigned S4SEL3 : 1;
      unsigned S5SEL3 : 1;
      unsigned S6SEL3 : 1;
      unsigned OPA3CAL_L : 1;
      unsigned OPA3CAL_H : 1;
      unsigned OPA3LPM : 1;
      unsigned ANAWSEL1 : 1;
      unsigned ANAWSEL2 : 1;
      unsigned ANAWSEL3 : 1;
      unsigned S7SEL2 : 1;
      unsigned AOP_RANGE : 1;
      unsigned OPA1CALOUT : 1;
      unsigned OPA2CALOUT : 1;
      unsigned OPA3CALOUT : 1;
    };
  };
} typeOPAMP_CSRBITS;
sfr volatile typeOPAMP_CSRBITS OPAMP_CSRbits absolute 0x40007C5C;

 typedef struct tagOPAMP_OTRBITS {
  union {
    struct {
      unsigned AO1_OPT_OFFSET_TRIM : 10;
      unsigned AO2_OPT_OFFSET_TRIM : 10;
      unsigned AO3_OPT_OFFSET_TRIM : 10;
      unsigned : 1;
      unsigned OT_USER : 1;
    };
  };
} typeOPAMP_OTRBITS;
sfr volatile typeOPAMP_OTRBITS OPAMP_OTRbits absolute 0x40007C60;

 typedef struct tagOPAMP_LPOTRBITS {
  union {
    struct {
      unsigned AO1_OPT_OFFSET_TRIM_LP : 10;
      unsigned AO2_OPT_OFFSET_TRIM_LP : 10;
      unsigned AO3_OPT_OFFSET_TRIM_LP : 10;
      unsigned : 2;
    };
  };
} typeOPAMP_LPOTRBITS;
sfr volatile typeOPAMP_LPOTRBITS OPAMP_LPOTRbits absolute 0x40007C64;

 typedef struct tagPWR_CRBITS {
  union {
    struct {
      unsigned LPSDSR : 1;
      unsigned PDDS : 1;
      unsigned CWUF : 1;
      unsigned CSBF : 1;
      unsigned PVDE : 1;
      unsigned PLS : 3;
      unsigned DBP : 1;
      unsigned ULP : 1;
      unsigned FWU : 1;
      unsigned VOS : 2;
      unsigned : 1;
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
      unsigned VREFINTRDYF : 1;
      unsigned VOSF : 1;
      unsigned REGLPF : 1;
      unsigned : 2;
      unsigned EWUP1 : 1;
      unsigned EWUP2 : 1;
      unsigned EWUP3 : 1;
      unsigned : 21;
    };
  };
} typePWR_CSRBITS;
sfr volatile typePWR_CSRBITS PWR_CSRbits absolute 0x40007004;

 typedef struct tagRCC_CRBITS {
  union {
    struct {
      unsigned HSION : 1;
      unsigned HSIRDY : 1;
      unsigned : 6;
      unsigned MSION : 1;
      unsigned MSIRDY : 1;
      unsigned : 6;
      unsigned HSEON : 1;
      unsigned HSERDY : 1;
      unsigned HSEBYP : 1;
      unsigned : 5;
      unsigned PLLON : 1;
      unsigned PLLRDY : 1;
      unsigned : 2;
      unsigned CSSON : 1;
      unsigned RTCPRE0 : 1;
      unsigned RTCPRE1 : 1;
      unsigned : 1;
    };
  };
} typeRCC_CRBITS;
sfr volatile typeRCC_CRBITS RCC_CRbits absolute 0x40023800;

 typedef struct tagRCC_ICSCRBITS {
  union {
    struct {
      unsigned HSICAL : 8;
      unsigned HSITRIM : 5;
      unsigned MSIRANGE : 3;
      unsigned MSICAL : 8;
      unsigned MSITRIM : 8;
    };
  };
} typeRCC_ICSCRBITS;
sfr volatile typeRCC_ICSCRBITS RCC_ICSCRbits absolute 0x40023804;

 typedef struct tagRCC_CFGRBITS {
  union {
    struct {
      unsigned SW : 2;
      unsigned SWS : 2;
      unsigned HPRE : 4;
      unsigned PPRE1 : 3;
      unsigned PPRE2 : 3;
      unsigned : 2;
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
sfr volatile typeRCC_CFGRBITS RCC_CFGRbits absolute 0x40023808;

 typedef struct tagRCC_CIRBITS {
  union {
    struct {
      unsigned LSIRDYF : 1;
      unsigned LSERDYF : 1;
      unsigned HSIRDYF : 1;
      unsigned HSERDYF : 1;
      unsigned PLLRDYF : 1;
      unsigned MSIRDYF : 1;
      unsigned LSECSSF : 1;
      unsigned CSSF : 1;
      unsigned LSIRDYIE : 1;
      unsigned LSERDYIE : 1;
      unsigned HSIRDYIE : 1;
      unsigned HSERDYIE : 1;
      unsigned PLLRDYIE : 1;
      unsigned MSIRDYIE : 1;
      unsigned LSECSSIE : 1;
      unsigned : 1;
      unsigned LSIRDYC : 1;
      unsigned LSERDYC : 1;
      unsigned HSIRDYC : 1;
      unsigned HSERDYC : 1;
      unsigned PLLRDYC : 1;
      unsigned MSIRDYC : 1;
      unsigned LSECSSC : 1;
      unsigned CSSC : 1;
      unsigned : 8;
    };
  };
} typeRCC_CIRBITS;
sfr volatile typeRCC_CIRBITS RCC_CIRbits absolute 0x4002380C;

 typedef struct tagRCC_AHBRSTRBITS {
  union {
    struct {
      unsigned GPIOARST : 1;
      unsigned GPIOBRST : 1;
      unsigned GPIOCRST : 1;
      unsigned GPIODRST : 1;
      unsigned GPIOERST : 1;
      unsigned GPIOHRST : 1;
      unsigned GPIOFRST : 1;
      unsigned GPIOGRST : 1;
      unsigned : 4;
      unsigned CRCRST : 1;
      unsigned : 2;
      unsigned FLITFRST : 1;
      unsigned : 8;
      unsigned DMA1RST : 1;
      unsigned DMA2RST : 1;
      unsigned : 6;
    };
  };
} typeRCC_AHBRSTRBITS;
sfr volatile typeRCC_AHBRSTRBITS RCC_AHBRSTRbits absolute 0x40023810;

 typedef struct tagRCC_APB2RSTRBITS {
  union {
    struct {
      unsigned SYSCFGRST : 1;
      unsigned : 1;
      unsigned TIM9RST : 1;
      unsigned TM10RST : 1;
      unsigned TM11RST : 1;
      unsigned : 4;
      unsigned ADC1RST : 1;
      unsigned : 2;
      unsigned SPI1RST : 1;
      unsigned : 1;
      unsigned USART1RST : 1;
      unsigned : 17;
    };
  };
} typeRCC_APB2RSTRBITS;
sfr volatile typeRCC_APB2RSTRBITS RCC_APB2RSTRbits absolute 0x40023814;

 typedef struct tagRCC_APB1RSTRBITS {
  union {
    struct {
      unsigned TIM2RST : 1;
      unsigned TIM3RST : 1;
      unsigned TIM4RST : 1;
      unsigned TIM5RST : 1;
      unsigned TIM6RST : 1;
      unsigned TIM7RST : 1;
      unsigned : 3;
      unsigned LCDRST : 1;
      unsigned : 1;
      unsigned WWDRST : 1;
      unsigned : 2;
      unsigned SPI2RST : 1;
      unsigned SPI3RST : 1;
      unsigned : 1;
      unsigned USART2RST : 1;
      unsigned USART3RST : 1;
      unsigned : 2;
      unsigned I2C1RST : 1;
      unsigned I2C2RST : 1;
      unsigned USBRST : 1;
      unsigned : 4;
      unsigned PWRRST : 1;
      unsigned DACRST : 1;
      unsigned : 1;
      unsigned COMPRST : 1;
    };
  };
} typeRCC_APB1RSTRBITS;
sfr volatile typeRCC_APB1RSTRBITS RCC_APB1RSTRbits absolute 0x40023818;

 typedef struct tagRCC_AHBENRBITS {
  union {
    struct {
      unsigned GPIOPAEN : 1;
      unsigned GPIOPBEN : 1;
      unsigned GPIOPCEN : 1;
      unsigned GPIOPDEN : 1;
      unsigned GPIOPEEN : 1;
      unsigned GPIOPHEN : 1;
      unsigned GPIOPFEN : 1;
      unsigned GPIOPGEN : 1;
      unsigned : 4;
      unsigned CRCEN : 1;
      unsigned : 2;
      unsigned FLITFEN : 1;
      unsigned : 8;
      unsigned DMA1EN : 1;
      unsigned DMA2EN : 1;
      unsigned : 6;
    };
  };
} typeRCC_AHBENRBITS;
sfr volatile typeRCC_AHBENRBITS RCC_AHBENRbits absolute 0x4002381C;

 typedef struct tagRCC_APB2ENRBITS {
  union {
    struct {
      unsigned SYSCFGEN : 1;
      unsigned : 1;
      unsigned TIM9EN : 1;
      unsigned TIM10EN : 1;
      unsigned TIM11EN : 1;
      unsigned : 4;
      unsigned ADC1EN : 1;
      unsigned : 2;
      unsigned SPI1EN : 1;
      unsigned : 1;
      unsigned USART1EN : 1;
      unsigned : 17;
    };
  };
} typeRCC_APB2ENRBITS;
sfr volatile typeRCC_APB2ENRBITS RCC_APB2ENRbits absolute 0x40023820;

 typedef struct tagRCC_APB1ENRBITS {
  union {
    struct {
      unsigned TIM2EN : 1;
      unsigned TIM3EN : 1;
      unsigned TIM4EN : 1;
      unsigned TIM5EN : 1;
      unsigned TIM6EN : 1;
      unsigned TIM7EN : 1;
      unsigned : 3;
      unsigned LCDEN : 1;
      unsigned : 1;
      unsigned WWDGEN : 1;
      unsigned : 2;
      unsigned SPI2EN : 1;
      unsigned SPI3EN : 1;
      unsigned : 1;
      unsigned USART2EN : 1;
      unsigned USART3EN : 1;
      unsigned : 2;
      unsigned I2C1EN : 1;
      unsigned I2C2EN : 1;
      unsigned USBEN : 1;
      unsigned : 4;
      unsigned PWREN : 1;
      unsigned DACEN : 1;
      unsigned : 1;
      unsigned COMPEN : 1;
    };
  };
} typeRCC_APB1ENRBITS;
sfr volatile typeRCC_APB1ENRBITS RCC_APB1ENRbits absolute 0x40023824;

 typedef struct tagRCC_AHBLPENRBITS {
  union {
    struct {
      unsigned GPIOALPEN : 1;
      unsigned GPIOBLPEN : 1;
      unsigned GPIOCLPEN : 1;
      unsigned GPIODLPEN : 1;
      unsigned GPIOELPEN : 1;
      unsigned GPIOHLPEN : 1;
      unsigned GPIOFLPEN : 1;
      unsigned GPIOGLPEN : 1;
      unsigned : 4;
      unsigned CRCLPEN : 1;
      unsigned : 2;
      unsigned FLITFLPEN : 1;
      unsigned SRAMLPEN : 1;
      unsigned : 7;
      unsigned DMA1LPEN : 1;
      unsigned DMA2LPEN : 1;
      unsigned : 6;
    };
  };
} typeRCC_AHBLPENRBITS;
sfr volatile typeRCC_AHBLPENRBITS RCC_AHBLPENRbits absolute 0x40023828;

 typedef struct tagRCC_APB2LPENRBITS {
  union {
    struct {
      unsigned SYSCFGLPEN : 1;
      unsigned : 1;
      unsigned TIM9LPEN : 1;
      unsigned TIM10LPEN : 1;
      unsigned TIM11LPEN : 1;
      unsigned : 4;
      unsigned ADC1LPEN : 1;
      unsigned : 2;
      unsigned SPI1LPEN : 1;
      unsigned : 1;
      unsigned USART1LPEN : 1;
      unsigned : 17;
    };
  };
} typeRCC_APB2LPENRBITS;
sfr volatile typeRCC_APB2LPENRBITS RCC_APB2LPENRbits absolute 0x4002382C;

 typedef struct tagRCC_APB1LPENRBITS {
  union {
    struct {
      unsigned TIM2LPEN : 1;
      unsigned TIM3LPEN : 1;
      unsigned TIM4LPEN : 1;
      unsigned : 1;
      unsigned TIM6LPEN : 1;
      unsigned TIM7LPEN : 1;
      unsigned : 3;
      unsigned LCDLPEN : 1;
      unsigned : 1;
      unsigned WWDGLPEN : 1;
      unsigned : 2;
      unsigned SPI2LPEN : 1;
      unsigned : 2;
      unsigned USART2LPEN : 1;
      unsigned USART3LPEN : 1;
      unsigned : 2;
      unsigned I2C1LPEN : 1;
      unsigned I2C2LPEN : 1;
      unsigned USBLPEN : 1;
      unsigned : 4;
      unsigned PWRLPEN : 1;
      unsigned DACLPEN : 1;
      unsigned : 1;
      unsigned COMPLPEN : 1;
    };
  };
} typeRCC_APB1LPENRBITS;
sfr volatile typeRCC_APB1LPENRBITS RCC_APB1LPENRbits absolute 0x40023830;

 typedef struct tagRCC_CSRBITS {
  union {
    struct {
      unsigned LSION : 1;
      unsigned LSIRDY : 1;
      unsigned : 6;
      unsigned LSEON : 1;
      unsigned LSERDY : 1;
      unsigned LSEBYP : 1;
      unsigned LSECSSON : 1;
      unsigned LSECSSD : 1;
      unsigned : 3;
      unsigned RTCSEL : 2;
      unsigned : 4;
      unsigned RTCEN : 1;
      unsigned RTCRST : 1;
      unsigned RMVF : 1;
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
sfr volatile typeRCC_CSRBITS RCC_CSRbits absolute 0x40023834;

 typedef struct tagRI_ICRBITS {
  union {
    struct {
      unsigned IC1IOS : 4;
      unsigned IC2IOS : 4;
      unsigned IC3IOS : 4;
      unsigned IC4IOS : 4;
      unsigned TIM : 2;
      unsigned IC1 : 1;
      unsigned IC2 : 1;
      unsigned IC3 : 1;
      unsigned IC4 : 1;
      unsigned : 10;
    };
  };
} typeRI_ICRBITS;
sfr volatile typeRI_ICRBITS RI_ICRbits absolute 0x40007C04;

 typedef struct tagRI_ASCR1BITS {
  union {
    struct {
      unsigned CH0GR1_1 : 1;
      unsigned CH1GR1_2 : 1;
      unsigned CH2GR1_3 : 1;
      unsigned CH3GR1_4 : 1;
      unsigned CH31GR11_5 : 1;
      unsigned COMP1_SW1 : 1;
      unsigned CH6GR2_1 : 1;
      unsigned CH7GR2_2 : 1;
      unsigned CH8GR3_1 : 1;
      unsigned CH9GR3_2 : 1;
      unsigned CH10GR8_1 : 1;
      unsigned CH11GR8_2 : 1;
      unsigned CH12GR8_3 : 1;
      unsigned CH13GR8_4 : 1;
      unsigned CH14GR9_1 : 1;
      unsigned CH15GR9_2 : 1;
      unsigned CH31GR7_1 : 1;
      unsigned : 1;
      unsigned CH18GR7_1 : 1;
      unsigned CH19GR7_2 : 1;
      unsigned CH20GR7_3 : 1;
      unsigned CH21GR7_4 : 1;
      unsigned CH22 : 1;
      unsigned CH23 : 1;
      unsigned CH24 : 1;
      unsigned CH25 : 1;
      unsigned VCOMP : 1;
      unsigned CH27GR11_1 : 1;
      unsigned CH28GR11_2 : 1;
      unsigned CH29GR11_3 : 1;
      unsigned CH30GR11_4 : 1;
      unsigned SCM : 1;
    };
  };
} typeRI_ASCR1BITS;
sfr volatile typeRI_ASCR1BITS RI_ASCR1bits absolute 0x40007C08;

 typedef struct tagRI_ASCR2BITS {
  union {
    struct {
      unsigned GR10_1 : 1;
      unsigned GR10_2 : 1;
      unsigned GR10_3 : 1;
      unsigned GR10_4 : 1;
      unsigned GR6_1 : 1;
      unsigned GR6_2 : 1;
      unsigned GR5_1 : 1;
      unsigned GR5_2 : 1;
      unsigned GR5_3 : 1;
      unsigned GR4_1 : 1;
      unsigned GR4_2 : 1;
      unsigned GR4_3 : 1;
      unsigned : 4;
      unsigned GR3_3 : 1;
      unsigned GR3_4 : 1;
      unsigned GR3_5 : 1;
      unsigned GR9_3 : 1;
      unsigned GR9_4 : 1;
      unsigned GR2_3 : 1;
      unsigned GR2_4 : 1;
      unsigned GR2_5 : 1;
      unsigned GR7_5 : 1;
      unsigned GR7_6 : 1;
      unsigned GR7_7 : 1;
      unsigned GR6_3 : 1;
      unsigned GR6_4 : 1;
      unsigned GR5_4 : 1;
      unsigned : 2;
    };
  };
} typeRI_ASCR2BITS;
sfr volatile typeRI_ASCR2BITS RI_ASCR2bits absolute 0x40007C0C;

 typedef struct tagRI_HYSCR1BITS {
  union {
    struct {
      unsigned PA : 16;
      unsigned PB : 16;
    };
  };
} typeRI_HYSCR1BITS;
sfr volatile typeRI_HYSCR1BITS RI_HYSCR1bits absolute 0x40007C10;

 typedef struct tagRI_HYSCR2BITS {
  union {
    struct {
      unsigned PC : 16;
      unsigned PD : 16;
    };
  };
} typeRI_HYSCR2BITS;
sfr volatile typeRI_HYSCR2BITS RI_HYSCR2bits absolute 0x40007C14;

 typedef struct tagRI_HYSCR3BITS {
  union {
    struct {
      unsigned PE : 16;
      unsigned PF : 16;
    };
  };
} typeRI_HYSCR3BITS;
sfr volatile typeRI_HYSCR3BITS RI_HYSCR3bits absolute 0x40007C18;

 typedef struct tagRI_HYSCR4BITS {
  union {
    struct {
      unsigned PG : 16;
      unsigned : 16;
    };
  };
} typeRI_HYSCR4BITS;
sfr volatile typeRI_HYSCR4BITS RI_HYSCR4bits absolute 0x40007C1C;

 typedef struct tagRI_ASMR1BITS {
  union {
    struct {
      unsigned PA : 16;
      unsigned : 16;
    };
  };
} typeRI_ASMR1BITS;
sfr volatile typeRI_ASMR1BITS RI_ASMR1bits absolute 0x40007C20;

 typedef struct tagRI_CMR1BITS {
  union {
    struct {
      unsigned PA : 16;
      unsigned : 16;
    };
  };
} typeRI_CMR1BITS;
sfr volatile typeRI_CMR1BITS RI_CMR1bits absolute 0x40007C24;

 typedef struct tagRI_CICR1BITS {
  union {
    struct {
      unsigned PA : 16;
      unsigned : 16;
    };
  };
} typeRI_CICR1BITS;
sfr volatile typeRI_CICR1BITS RI_CICR1bits absolute 0x40007C28;

 typedef struct tagRI_ASMR2BITS {
  union {
    struct {
      unsigned PB : 16;
      unsigned : 16;
    };
  };
} typeRI_ASMR2BITS;
sfr volatile typeRI_ASMR2BITS RI_ASMR2bits absolute 0x40007C2C;

 typedef struct tagRI_CMR2BITS {
  union {
    struct {
      unsigned PB : 16;
      unsigned : 16;
    };
  };
} typeRI_CMR2BITS;
sfr volatile typeRI_CMR2BITS RI_CMR2bits absolute 0x40007C30;

 typedef struct tagRI_CICR2BITS {
  union {
    struct {
      unsigned PB : 16;
      unsigned : 16;
    };
  };
} typeRI_CICR2BITS;
sfr volatile typeRI_CICR2BITS RI_CICR2bits absolute 0x40007C34;

 typedef struct tagRI_ASMR3BITS {
  union {
    struct {
      unsigned PC : 16;
      unsigned : 16;
    };
  };
} typeRI_ASMR3BITS;
sfr volatile typeRI_ASMR3BITS RI_ASMR3bits absolute 0x40007C38;

 typedef struct tagRI_CMR3BITS {
  union {
    struct {
      unsigned PC : 16;
      unsigned : 16;
    };
  };
} typeRI_CMR3BITS;
sfr volatile typeRI_CMR3BITS RI_CMR3bits absolute 0x40007C3C;

 typedef struct tagRI_CICR3BITS {
  union {
    struct {
      unsigned PC : 16;
      unsigned : 16;
    };
  };
} typeRI_CICR3BITS;
sfr volatile typeRI_CICR3BITS RI_CICR3bits absolute 0x40007C40;

 typedef struct tagRI_ASMR4BITS {
  union {
    struct {
      unsigned PF : 16;
      unsigned : 16;
    };
  };
} typeRI_ASMR4BITS;
sfr volatile typeRI_ASMR4BITS RI_ASMR4bits absolute 0x40007C44;

 typedef struct tagRI_CMR4BITS {
  union {
    struct {
      unsigned PF : 16;
      unsigned : 16;
    };
  };
} typeRI_CMR4BITS;
sfr volatile typeRI_CMR4BITS RI_CMR4bits absolute 0x40007C48;

 typedef struct tagRI_CICR4BITS {
  union {
    struct {
      unsigned PF : 16;
      unsigned : 16;
    };
  };
} typeRI_CICR4BITS;
sfr volatile typeRI_CICR4BITS RI_CICR4bits absolute 0x40007C4C;

 typedef struct tagRI_ASMR5BITS {
  union {
    struct {
      unsigned PG : 16;
      unsigned : 16;
    };
  };
} typeRI_ASMR5BITS;
sfr volatile typeRI_ASMR5BITS RI_ASMR5bits absolute 0x40007C50;

 typedef struct tagRI_CMR5BITS {
  union {
    struct {
      unsigned PG : 16;
      unsigned : 16;
    };
  };
} typeRI_CMR5BITS;
sfr volatile typeRI_CMR5BITS RI_CMR5bits absolute 0x40007C54;

 typedef struct tagRI_CICR5BITS {
  union {
    struct {
      unsigned PG : 16;
      unsigned : 16;
    };
  };
} typeRI_CICR5BITS;
sfr volatile typeRI_CICR5BITS RI_CICR5bits absolute 0x40007C58;

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
      unsigned WCKSEL : 3;
      unsigned TSEDGE : 1;
      unsigned REFCKON : 1;
      unsigned BYPSHAD : 1;
      unsigned FMT : 1;
      unsigned DCE : 1;
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
      unsigned TAMP3F : 1;
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

 typedef struct tagRTC_WUTRBITS {
  union {
    struct {
      unsigned WUT : 16;
      unsigned : 16;
    };
  };
} typeRTC_WUTRBITS;
sfr volatile typeRTC_WUTRBITS RTC_WUTRbits absolute 0x40002814;

 typedef struct tagRTC_CALIBRBITS {
  union {
    struct {
      unsigned DC : 5;
      unsigned : 2;
      unsigned DCS : 1;
      unsigned : 24;
    };
  };
} typeRTC_CALIBRBITS;
sfr volatile typeRTC_CALIBRBITS RTC_CALIBRbits absolute 0x40002818;

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

 typedef struct tagRTC_TAFCRBITS {
  union {
    struct {
      unsigned TAMP1E : 1;
      unsigned TAMP1ETRG : 1;
      unsigned TAMPIE : 1;
      unsigned TAMP2E : 1;
      unsigned TAMP2TRG : 1;
      unsigned TAMP3E : 1;
      unsigned TAMP3TRG : 1;
      unsigned TAMPTS : 1;
      unsigned TAMPFREQ : 3;
      unsigned TAMPFLT : 2;
      unsigned TAMPPRCH : 2;
      unsigned TAMPPUDIS : 1;
      unsigned : 2;
      unsigned ALARMOUTTYPE : 1;
      unsigned : 13;
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

 typedef struct tagRTC_BKP5RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP5RBITS;
sfr volatile typeRTC_BKP5RBITS RTC_BKP5Rbits absolute 0x40002864;

 typedef struct tagRTC_BKP6RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP6RBITS;
sfr volatile typeRTC_BKP6RBITS RTC_BKP6Rbits absolute 0x40002868;

 typedef struct tagRTC_BKP7RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP7RBITS;
sfr volatile typeRTC_BKP7RBITS RTC_BKP7Rbits absolute 0x4000286C;

 typedef struct tagRTC_BKP8RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP8RBITS;
sfr volatile typeRTC_BKP8RBITS RTC_BKP8Rbits absolute 0x40002870;

 typedef struct tagRTC_BKP9RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP9RBITS;
sfr volatile typeRTC_BKP9RBITS RTC_BKP9Rbits absolute 0x40002874;

 typedef struct tagRTC_BKP10RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP10RBITS;
sfr volatile typeRTC_BKP10RBITS RTC_BKP10Rbits absolute 0x40002878;

 typedef struct tagRTC_BKP11RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP11RBITS;
sfr volatile typeRTC_BKP11RBITS RTC_BKP11Rbits absolute 0x4000287C;

 typedef struct tagRTC_BKP12RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP12RBITS;
sfr volatile typeRTC_BKP12RBITS RTC_BKP12Rbits absolute 0x40002880;

 typedef struct tagRTC_BKP13RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP13RBITS;
sfr volatile typeRTC_BKP13RBITS RTC_BKP13Rbits absolute 0x40002884;

 typedef struct tagRTC_BKP14RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP14RBITS;
sfr volatile typeRTC_BKP14RBITS RTC_BKP14Rbits absolute 0x40002888;

 typedef struct tagRTC_BKP15RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP15RBITS;
sfr volatile typeRTC_BKP15RBITS RTC_BKP15Rbits absolute 0x4000288C;

 typedef struct tagRTC_BKP16RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP16RBITS;
sfr volatile typeRTC_BKP16RBITS RTC_BKP16Rbits absolute 0x40002890;

 typedef struct tagRTC_BKP17RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP17RBITS;
sfr volatile typeRTC_BKP17RBITS RTC_BKP17Rbits absolute 0x40002894;

 typedef struct tagRTC_BKP18RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP18RBITS;
sfr volatile typeRTC_BKP18RBITS RTC_BKP18Rbits absolute 0x40002898;

 typedef struct tagRTC_BKP19RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP19RBITS;
sfr volatile typeRTC_BKP19RBITS RTC_BKP19Rbits absolute 0x4000289C;

 typedef struct tagRTC_BKP20RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP20RBITS;
sfr volatile typeRTC_BKP20RBITS RTC_BKP20Rbits absolute 0x400028A0;

 typedef struct tagRTC_BKP21RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP21RBITS;
sfr volatile typeRTC_BKP21RBITS RTC_BKP21Rbits absolute 0x400028A4;

 typedef struct tagRTC_BKP22RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP22RBITS;
sfr volatile typeRTC_BKP22RBITS RTC_BKP22Rbits absolute 0x400028A8;

 typedef struct tagRTC_BKP23RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP23RBITS;
sfr volatile typeRTC_BKP23RBITS RTC_BKP23Rbits absolute 0x400028AC;

 typedef struct tagRTC_BKP24RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP24RBITS;
sfr volatile typeRTC_BKP24RBITS RTC_BKP24Rbits absolute 0x400028B0;

 typedef struct tagRTC_BKP25RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP25RBITS;
sfr volatile typeRTC_BKP25RBITS RTC_BKP25Rbits absolute 0x400028B4;

 typedef struct tagRTC_BKP26RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP26RBITS;
sfr volatile typeRTC_BKP26RBITS RTC_BKP26Rbits absolute 0x400028B8;

 typedef struct tagRTC_BKP27RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP27RBITS;
sfr volatile typeRTC_BKP27RBITS RTC_BKP27Rbits absolute 0x400028BC;

 typedef struct tagRTC_BKP28RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP28RBITS;
sfr volatile typeRTC_BKP28RBITS RTC_BKP28Rbits absolute 0x400028C0;

 typedef struct tagRTC_BKP29RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP29RBITS;
sfr volatile typeRTC_BKP29RBITS RTC_BKP29Rbits absolute 0x400028C4;

 typedef struct tagRTC_BKP30RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP30RBITS;
sfr volatile typeRTC_BKP30RBITS RTC_BKP30Rbits absolute 0x400028C8;

 typedef struct tagRTC_BKP31RBITS {
  union {
    struct {
      unsigned BKP : 32;
    };
  };
} typeRTC_BKP31RBITS;
sfr volatile typeRTC_BKP31RBITS RTC_BKP31Rbits absolute 0x400028CC;

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
      unsigned : 1;
      unsigned FRF : 1;
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

 typedef struct tagSPI3_I2SCFGRBITS {
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
} typeSPI3_I2SCFGRBITS;
sfr volatile typeSPI3_I2SCFGRBITS SPI3_I2SCFGRbits absolute 0x40003C1C;

 typedef struct tagSPI3_I2SPRBITS {
  union {
    struct {
      unsigned I2SDIV : 8;
      unsigned ODD : 1;
      unsigned MCKOE : 1;
      unsigned : 22;
    };
  };
} typeSPI3_I2SPRBITS;
sfr volatile typeSPI3_I2SPRBITS SPI3_I2SPRbits absolute 0x40003C20;

 typedef struct tagSYSCFG_MEMRMPBITS {
  union {
    struct {
      unsigned MEM_MODE : 2;
      unsigned : 6;
      unsigned BOOT_MODE : 2;
      unsigned : 22;
    };
  };
} typeSYSCFG_MEMRMPBITS;
sfr volatile typeSYSCFG_MEMRMPBITS SYSCFG_MEMRMPbits absolute 0x40010000;

 typedef struct tagSYSCFG_PMCBITS {
  union {
    struct {
      unsigned USB_PU : 1;
      unsigned : 31;
    };
  };
} typeSYSCFG_PMCBITS;
sfr volatile typeSYSCFG_PMCBITS SYSCFG_PMCbits absolute 0x40010004;

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

 typedef struct tagTIM10_CR1BITS {
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
} typeTIM10_CR1BITS;
sfr volatile typeTIM10_CR1BITS TIM10_CR1bits absolute 0x40010C00;

 typedef struct tagTIM10_DIERBITS {
  union {
    struct {
      unsigned UIE : 1;
      unsigned CC1IE : 1;
      unsigned : 30;
    };
  };
} typeTIM10_DIERBITS;
sfr volatile typeTIM10_DIERBITS TIM10_DIERbits absolute 0x40010C0C;

 typedef struct tagTIM10_SRBITS {
  union {
    struct {
      unsigned UIF : 1;
      unsigned CC1IF : 1;
      unsigned : 7;
      unsigned CC1OF : 1;
      unsigned : 22;
    };
  };
} typeTIM10_SRBITS;
sfr volatile typeTIM10_SRBITS TIM10_SRbits absolute 0x40010C10;

 typedef struct tagTIM10_EGRBITS {
  union {
    struct {
      unsigned UG : 1;
      unsigned CC1G : 1;
      unsigned : 30;
    };
  };
} typeTIM10_EGRBITS;
sfr volatile typeTIM10_EGRBITS TIM10_EGRbits absolute 0x40010C14;

 typedef struct tagTIM10_CCMR1_OutputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned OC1FE : 1;
      unsigned OC1PE : 1;
      unsigned OC1M : 3;
      unsigned : 25;
    };
  };
} typeTIM10_CCMR1_OutputBITS;
sfr volatile typeTIM10_CCMR1_OutputBITS TIM10_CCMR1_Outputbits absolute 0x40010C18;

 typedef struct tagTIM10_CCMR1_InputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned ICPCS : 2;
      unsigned IC1F : 4;
      unsigned : 24;
    };
  };
} typeTIM10_CCMR1_InputBITS;
sfr volatile typeTIM10_CCMR1_InputBITS TIM10_CCMR1_Inputbits absolute 0x40010C18;

 typedef struct tagTIM10_CCERBITS {
  union {
    struct {
      unsigned CC1E : 1;
      unsigned CC1P : 1;
      unsigned : 1;
      unsigned CC1NP : 1;
      unsigned : 28;
    };
  };
} typeTIM10_CCERBITS;
sfr volatile typeTIM10_CCERBITS TIM10_CCERbits absolute 0x40010C20;

 typedef struct tagTIM10_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
    };
  };
} typeTIM10_CNTBITS;
sfr volatile typeTIM10_CNTBITS TIM10_CNTbits absolute 0x40010C24;

 typedef struct tagTIM10_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM10_PSCBITS;
sfr volatile typeTIM10_PSCBITS TIM10_PSCbits absolute 0x40010C28;

 typedef struct tagTIM10_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM10_ARRBITS;
sfr volatile typeTIM10_ARRBITS TIM10_ARRbits absolute 0x40010C2C;

 typedef struct tagTIM10_CCR1BITS {
  union {
    struct {
      unsigned CCR1 : 16;
      unsigned : 16;
    };
  };
} typeTIM10_CCR1BITS;
sfr volatile typeTIM10_CCR1BITS TIM10_CCR1bits absolute 0x40010C34;

 typedef struct tagTIM10_ORBITS {
  union {
    struct {
      unsigned TI1_RMP : 2;
      unsigned : 30;
    };
  };
} typeTIM10_ORBITS;
sfr volatile typeTIM10_ORBITS TIM10_ORbits absolute 0x40010C50;

 typedef struct tagTIM11_CR1BITS {
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
} typeTIM11_CR1BITS;
sfr volatile typeTIM11_CR1BITS TIM11_CR1bits absolute 0x40011000;

 typedef struct tagTIM11_DIERBITS {
  union {
    struct {
      unsigned UIE : 1;
      unsigned CC1IE : 1;
      unsigned : 30;
    };
  };
} typeTIM11_DIERBITS;
sfr volatile typeTIM11_DIERBITS TIM11_DIERbits absolute 0x4001100C;

 typedef struct tagTIM11_SRBITS {
  union {
    struct {
      unsigned UIF : 1;
      unsigned CC1IF : 1;
      unsigned : 7;
      unsigned CC1OF : 1;
      unsigned : 22;
    };
  };
} typeTIM11_SRBITS;
sfr volatile typeTIM11_SRBITS TIM11_SRbits absolute 0x40011010;

 typedef struct tagTIM11_EGRBITS {
  union {
    struct {
      unsigned UG : 1;
      unsigned CC1G : 1;
      unsigned : 30;
    };
  };
} typeTIM11_EGRBITS;
sfr volatile typeTIM11_EGRBITS TIM11_EGRbits absolute 0x40011014;

 typedef struct tagTIM11_CCMR1_OutputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned OC1FE : 1;
      unsigned OC1PE : 1;
      unsigned OC1M : 3;
      unsigned : 25;
    };
  };
} typeTIM11_CCMR1_OutputBITS;
sfr volatile typeTIM11_CCMR1_OutputBITS TIM11_CCMR1_Outputbits absolute 0x40011018;

 typedef struct tagTIM11_CCMR1_InputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned ICPCS : 2;
      unsigned IC1F : 4;
      unsigned : 24;
    };
  };
} typeTIM11_CCMR1_InputBITS;
sfr volatile typeTIM11_CCMR1_InputBITS TIM11_CCMR1_Inputbits absolute 0x40011018;

 typedef struct tagTIM11_CCERBITS {
  union {
    struct {
      unsigned CC1E : 1;
      unsigned CC1P : 1;
      unsigned : 1;
      unsigned CC1NP : 1;
      unsigned : 28;
    };
  };
} typeTIM11_CCERBITS;
sfr volatile typeTIM11_CCERBITS TIM11_CCERbits absolute 0x40011020;

 typedef struct tagTIM11_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
    };
  };
} typeTIM11_CNTBITS;
sfr volatile typeTIM11_CNTBITS TIM11_CNTbits absolute 0x40011024;

 typedef struct tagTIM11_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM11_PSCBITS;
sfr volatile typeTIM11_PSCBITS TIM11_PSCbits absolute 0x40011028;

 typedef struct tagTIM11_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM11_ARRBITS;
sfr volatile typeTIM11_ARRBITS TIM11_ARRbits absolute 0x4001102C;

 typedef struct tagTIM11_CCR1BITS {
  union {
    struct {
      unsigned CCR1 : 16;
      unsigned : 16;
    };
  };
} typeTIM11_CCR1BITS;
sfr volatile typeTIM11_CCR1BITS TIM11_CCR1bits absolute 0x40011034;

 typedef struct tagTIM11_ORBITS {
  union {
    struct {
      unsigned TI1_RMP : 2;
      unsigned : 30;
    };
  };
} typeTIM11_ORBITS;
sfr volatile typeTIM11_ORBITS TIM11_ORbits absolute 0x40011050;

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
      unsigned CC2S : 1;
      unsigned : 1;
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
      unsigned ICPCS : 2;
      unsigned IC1F : 4;
      unsigned CC2S : 2;
      unsigned IC2PCS : 2;
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
      unsigned CC4S : 1;
      unsigned : 1;
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
      unsigned CCR1 : 16;
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
      unsigned CC2S : 1;
      unsigned : 1;
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
      unsigned ICPCS : 2;
      unsigned IC1F : 4;
      unsigned CC2S : 2;
      unsigned IC2PCS : 2;
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
      unsigned CC4S : 1;
      unsigned : 1;
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
      unsigned CCR1 : 16;
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
      unsigned CC2S : 1;
      unsigned : 1;
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
      unsigned ICPCS : 2;
      unsigned IC1F : 4;
      unsigned CC2S : 2;
      unsigned IC2PCS : 2;
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
      unsigned CC4S : 1;
      unsigned : 1;
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
      unsigned CCR1 : 16;
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
      unsigned CC2S : 1;
      unsigned : 1;
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
      unsigned ICPCS : 2;
      unsigned IC1F : 4;
      unsigned CC2S : 2;
      unsigned IC2PCS : 2;
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
      unsigned CC4S : 1;
      unsigned : 1;
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
      unsigned CCR1 : 16;
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

 typedef struct tagTIM9_CR1BITS {
  union {
    struct {
      unsigned CEN : 1;
      unsigned UDIS : 1;
      unsigned URS : 1;
      unsigned OMP : 1;
      unsigned : 3;
      unsigned ARPE : 1;
      unsigned CKD : 2;
      unsigned : 22;
    };
  };
} typeTIM9_CR1BITS;
sfr volatile typeTIM9_CR1BITS TIM9_CR1bits absolute 0x40010800;

 typedef struct tagTIM9_CR2BITS {
  union {
    struct {
      unsigned : 4;
      unsigned MMS : 3;
      unsigned : 25;
    };
  };
} typeTIM9_CR2BITS;
sfr volatile typeTIM9_CR2BITS TIM9_CR2bits absolute 0x40010804;

 typedef struct tagTIM9_SMCRBITS {
  union {
    struct {
      unsigned SMS : 3;
      unsigned : 1;
      unsigned TS : 3;
      unsigned MSM : 1;
      unsigned : 24;
    };
  };
} typeTIM9_SMCRBITS;
sfr volatile typeTIM9_SMCRBITS TIM9_SMCRbits absolute 0x40010808;

 typedef struct tagTIM9_DIERBITS {
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
} typeTIM9_DIERBITS;
sfr volatile typeTIM9_DIERBITS TIM9_DIERbits absolute 0x4001080C;

 typedef struct tagTIM9_SRBITS {
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
} typeTIM9_SRBITS;
sfr volatile typeTIM9_SRBITS TIM9_SRbits absolute 0x40010810;

 typedef struct tagTIM9_EGRBITS {
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
} typeTIM9_EGRBITS;
sfr volatile typeTIM9_EGRBITS TIM9_EGRbits absolute 0x40010814;

 typedef struct tagTIM9_CCMR1_OutputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned OC1FE : 1;
      unsigned OC1PE : 1;
      unsigned OC1M : 3;
      unsigned OC1CE : 1;
      unsigned CC2S : 1;
      unsigned : 1;
      unsigned OC2FE : 1;
      unsigned OC2PE : 1;
      unsigned OC2M : 3;
      unsigned OC2CE : 1;
      unsigned : 16;
    };
  };
} typeTIM9_CCMR1_OutputBITS;
sfr volatile typeTIM9_CCMR1_OutputBITS TIM9_CCMR1_Outputbits absolute 0x40010818;

 typedef struct tagTIM9_CCMR1_InputBITS {
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
} typeTIM9_CCMR1_InputBITS;
sfr volatile typeTIM9_CCMR1_InputBITS TIM9_CCMR1_Inputbits absolute 0x40010818;

 typedef struct tagTIM9_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
    };
  };
} typeTIM9_CNTBITS;
sfr volatile typeTIM9_CNTBITS TIM9_CNTbits absolute 0x40010824;

 typedef struct tagTIM9_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM9_PSCBITS;
sfr volatile typeTIM9_PSCBITS TIM9_PSCbits absolute 0x40010828;

 typedef struct tagTIM9_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM9_ARRBITS;
sfr volatile typeTIM9_ARRBITS TIM9_ARRbits absolute 0x4001082C;

 typedef struct tagTIM9_CCR1BITS {
  union {
    struct {
      unsigned CCR1 : 16;
      unsigned : 16;
    };
  };
} typeTIM9_CCR1BITS;
sfr volatile typeTIM9_CCR1BITS TIM9_CCR1bits absolute 0x40010834;

 typedef struct tagTIM9_CCR2BITS {
  union {
    struct {
      unsigned CCR2 : 16;
      unsigned : 16;
    };
  };
} typeTIM9_CCR2BITS;
sfr volatile typeTIM9_CCR2BITS TIM9_CCR2bits absolute 0x40010838;

 typedef struct tagTIM9_ORBITS {
  union {
    struct {
      unsigned TI1_RMP : 2;
      unsigned : 30;
    };
  };
} typeTIM9_ORBITS;
sfr volatile typeTIM9_ORBITS TIM9_ORbits absolute 0x40010850;

 typedef struct tagUSART1_SRBITS {
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
      unsigned : 1;
      unsigned OVER8 : 1;
      unsigned : 16;
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
      unsigned ONEBIT : 1;
      unsigned : 20;
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
      unsigned NF : 1;
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
      unsigned : 1;
      unsigned OVER8 : 1;
      unsigned : 16;
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
      unsigned ONEBIT : 1;
      unsigned : 20;
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
      unsigned NF : 1;
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
      unsigned : 1;
      unsigned OVER8 : 1;
      unsigned : 16;
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
      unsigned ONEBIT : 1;
      unsigned : 20;
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

 typedef struct tagUSB_USB_EP0RBITS {
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
} typeUSB_USB_EP0RBITS;
sfr volatile typeUSB_USB_EP0RBITS USB_USB_EP0Rbits absolute 0x40005C00;

 typedef struct tagUSB_USB_EP1RBITS {
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
} typeUSB_USB_EP1RBITS;
sfr volatile typeUSB_USB_EP1RBITS USB_USB_EP1Rbits absolute 0x40005C04;

 typedef struct tagUSB_USB_EP2RBITS {
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
} typeUSB_USB_EP2RBITS;
sfr volatile typeUSB_USB_EP2RBITS USB_USB_EP2Rbits absolute 0x40005C08;

 typedef struct tagUSB_USB_EP3RBITS {
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
} typeUSB_USB_EP3RBITS;
sfr volatile typeUSB_USB_EP3RBITS USB_USB_EP3Rbits absolute 0x40005C0C;

 typedef struct tagUSB_USB_EP4RBITS {
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
} typeUSB_USB_EP4RBITS;
sfr volatile typeUSB_USB_EP4RBITS USB_USB_EP4Rbits absolute 0x40005C10;

 typedef struct tagUSB_USB_EP5RBITS {
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
} typeUSB_USB_EP5RBITS;
sfr volatile typeUSB_USB_EP5RBITS USB_USB_EP5Rbits absolute 0x40005C14;

 typedef struct tagUSB_USB_EP6RBITS {
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
} typeUSB_USB_EP6RBITS;
sfr volatile typeUSB_USB_EP6RBITS USB_USB_EP6Rbits absolute 0x40005C18;

 typedef struct tagUSB_USB_EP7RBITS {
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
} typeUSB_USB_EP7RBITS;
sfr volatile typeUSB_USB_EP7RBITS USB_USB_EP7Rbits absolute 0x40005C1C;

 typedef struct tagUSB_USB_CNTRBITS {
  union {
    struct {
      unsigned FRES : 1;
      unsigned PDWN : 1;
      unsigned LPMODE : 1;
      unsigned FSUSP : 1;
      unsigned RESUME_ : 1;
      unsigned : 3;
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
} typeUSB_USB_CNTRBITS;
sfr volatile typeUSB_USB_CNTRBITS USB_USB_CNTRbits absolute 0x40005C40;

 typedef struct tagUSB_USB_ISTRBITS {
  union {
    struct {
      unsigned EP_ID : 4;
      unsigned DIR_ : 1;
      unsigned : 3;
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
} typeUSB_USB_ISTRBITS;
sfr volatile typeUSB_USB_ISTRBITS USB_USB_ISTRbits absolute 0x40005C44;

 typedef struct tagUSB_USB_FNRBITS {
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
} typeUSB_USB_FNRBITS;
sfr volatile typeUSB_USB_FNRBITS USB_USB_FNRbits absolute 0x40005C48;

 typedef struct tagUSB_USB_DADDRBITS {
  union {
    struct {
      unsigned ADD : 7;
      unsigned EF : 1;
      unsigned : 24;
    };
  };
} typeUSB_USB_DADDRBITS;
sfr volatile typeUSB_USB_DADDRBITS USB_USB_DADDRbits absolute 0x40005C4C;

 typedef struct tagUSB_USB_BTABLEBITS {
  union {
    struct {
      unsigned : 3;
      unsigned BTABLE : 13;
      unsigned : 16;
    };
  };
} typeUSB_USB_BTABLEBITS;
sfr volatile typeUSB_USB_BTABLEBITS USB_USB_BTABLEbits absolute 0x40005C50;

 typedef struct tagUSB_SRAM_USB_EP0RBITS {
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
} typeUSB_SRAM_USB_EP0RBITS;
sfr volatile typeUSB_SRAM_USB_EP0RBITS USB_SRAM_USB_EP0Rbits absolute 0x40006000;

 typedef struct tagUSB_SRAM_USB_EP1RBITS {
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
} typeUSB_SRAM_USB_EP1RBITS;
sfr volatile typeUSB_SRAM_USB_EP1RBITS USB_SRAM_USB_EP1Rbits absolute 0x40006004;

 typedef struct tagUSB_SRAM_USB_EP2RBITS {
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
} typeUSB_SRAM_USB_EP2RBITS;
sfr volatile typeUSB_SRAM_USB_EP2RBITS USB_SRAM_USB_EP2Rbits absolute 0x40006008;

 typedef struct tagUSB_SRAM_USB_EP3RBITS {
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
} typeUSB_SRAM_USB_EP3RBITS;
sfr volatile typeUSB_SRAM_USB_EP3RBITS USB_SRAM_USB_EP3Rbits absolute 0x4000600C;

 typedef struct tagUSB_SRAM_USB_EP4RBITS {
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
} typeUSB_SRAM_USB_EP4RBITS;
sfr volatile typeUSB_SRAM_USB_EP4RBITS USB_SRAM_USB_EP4Rbits absolute 0x40006010;

 typedef struct tagUSB_SRAM_USB_EP5RBITS {
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
} typeUSB_SRAM_USB_EP5RBITS;
sfr volatile typeUSB_SRAM_USB_EP5RBITS USB_SRAM_USB_EP5Rbits absolute 0x40006014;

 typedef struct tagUSB_SRAM_USB_EP6RBITS {
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
} typeUSB_SRAM_USB_EP6RBITS;
sfr volatile typeUSB_SRAM_USB_EP6RBITS USB_SRAM_USB_EP6Rbits absolute 0x40006018;

 typedef struct tagUSB_SRAM_USB_EP7RBITS {
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
} typeUSB_SRAM_USB_EP7RBITS;
sfr volatile typeUSB_SRAM_USB_EP7RBITS USB_SRAM_USB_EP7Rbits absolute 0x4000601C;

 typedef struct tagUSB_SRAM_USB_CNTRBITS {
  union {
    struct {
      unsigned FRES : 1;
      unsigned PDWN : 1;
      unsigned LPMODE : 1;
      unsigned FSUSP : 1;
      unsigned RESUME_ : 1;
      unsigned : 3;
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
} typeUSB_SRAM_USB_CNTRBITS;
sfr volatile typeUSB_SRAM_USB_CNTRBITS USB_SRAM_USB_CNTRbits absolute 0x40006040;

 typedef struct tagUSB_SRAM_USB_ISTRBITS {
  union {
    struct {
      unsigned EP_ID : 4;
      unsigned DIR_ : 1;
      unsigned : 3;
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
} typeUSB_SRAM_USB_ISTRBITS;
sfr volatile typeUSB_SRAM_USB_ISTRBITS USB_SRAM_USB_ISTRbits absolute 0x40006044;

 typedef struct tagUSB_SRAM_USB_FNRBITS {
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
} typeUSB_SRAM_USB_FNRBITS;
sfr volatile typeUSB_SRAM_USB_FNRBITS USB_SRAM_USB_FNRbits absolute 0x40006048;

 typedef struct tagUSB_SRAM_USB_DADDRBITS {
  union {
    struct {
      unsigned ADD : 7;
      unsigned EF : 1;
      unsigned : 24;
    };
  };
} typeUSB_SRAM_USB_DADDRBITS;
sfr volatile typeUSB_SRAM_USB_DADDRBITS USB_SRAM_USB_DADDRbits absolute 0x4000604C;

 typedef struct tagUSB_SRAM_USB_BTABLEBITS {
  union {
    struct {
      unsigned : 3;
      unsigned BTABLE : 13;
      unsigned : 16;
    };
  };
} typeUSB_SRAM_USB_BTABLEBITS;
sfr volatile typeUSB_SRAM_USB_BTABLEBITS USB_SRAM_USB_BTABLEbits absolute 0x40006050;

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

 typedef struct tagADC_SRBITS {
  union {
    struct {
      unsigned AWD : 1;
      unsigned EOC : 1;
      unsigned JEOC : 1;
      unsigned JSTRT : 1;
      unsigned STRT : 1;
      unsigned OVR : 1;
      unsigned ADONS : 1;
      unsigned : 1;
      unsigned RCNR : 1;
      unsigned JCNR : 1;
      unsigned : 22;
    };
  };
} typeADC_SRBITS;
sfr volatile typeADC_SRBITS ADC_SRbits absolute 0x40012400;

 typedef struct tagADC_CR1BITS {
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
      unsigned PDD : 1;
      unsigned PDI : 1;
      unsigned : 4;
      unsigned JAWDEN : 1;
      unsigned AWDEN : 1;
      unsigned RES : 2;
      unsigned OVRIE : 1;
      unsigned : 5;
    };
  };
} typeADC_CR1BITS;
sfr volatile typeADC_CR1BITS ADC_CR1bits absolute 0x40012404;

 typedef struct tagADC_CR2BITS {
  union {
    struct {
      unsigned ADON : 1;
      unsigned CONT : 1;
      unsigned ADC_CFG : 1;
      unsigned : 1;
      unsigned DELS : 3;
      unsigned : 1;
      unsigned DMA_ : 1;
      unsigned DDS : 1;
      unsigned EOCS : 1;
      unsigned ALIGN : 1;
      unsigned : 4;
      unsigned JEXTSEL : 4;
      unsigned JEXTEN : 2;
      unsigned JSWSTART : 1;
      unsigned : 1;
      unsigned EXTSEL : 4;
      unsigned EXTEN : 2;
      unsigned SWSTART : 1;
      unsigned : 1;
    };
  };
} typeADC_CR2BITS;
sfr volatile typeADC_CR2BITS ADC_CR2bits absolute 0x40012408;

 typedef struct tagADC_SMPR1BITS {
  union {
    struct {
      unsigned SMP20 : 3;
      unsigned SMP21 : 3;
      unsigned SMP22 : 3;
      unsigned SMP23 : 3;
      unsigned SMP24 : 3;
      unsigned SMP25 : 3;
      unsigned SMP26 : 3;
      unsigned SMP27 : 3;
      unsigned SMP28 : 3;
      unsigned SMP29 : 3;
      unsigned : 2;
    };
  };
} typeADC_SMPR1BITS;
sfr volatile typeADC_SMPR1BITS ADC_SMPR1bits absolute 0x4001240C;

 typedef struct tagADC_SMPR2BITS {
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
      unsigned SMP18 : 3;
      unsigned SMP19 : 3;
      unsigned : 2;
    };
  };
} typeADC_SMPR2BITS;
sfr volatile typeADC_SMPR2BITS ADC_SMPR2bits absolute 0x40012410;

 typedef struct tagADC_SMPR3BITS {
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
} typeADC_SMPR3BITS;
sfr volatile typeADC_SMPR3BITS ADC_SMPR3bits absolute 0x40012414;

 typedef struct tagADC_JOFR1BITS {
  union {
    struct {
      unsigned JOFFSET1 : 12;
      unsigned : 20;
    };
  };
} typeADC_JOFR1BITS;
sfr volatile typeADC_JOFR1BITS ADC_JOFR1bits absolute 0x40012418;

 typedef struct tagADC_JOFR2BITS {
  union {
    struct {
      unsigned JOFFSET2 : 12;
      unsigned : 20;
    };
  };
} typeADC_JOFR2BITS;
sfr volatile typeADC_JOFR2BITS ADC_JOFR2bits absolute 0x4001241C;

 typedef struct tagADC_JOFR3BITS {
  union {
    struct {
      unsigned JOFFSET3 : 12;
      unsigned : 20;
    };
  };
} typeADC_JOFR3BITS;
sfr volatile typeADC_JOFR3BITS ADC_JOFR3bits absolute 0x40012420;

 typedef struct tagADC_JOFR4BITS {
  union {
    struct {
      unsigned JOFFSET4 : 12;
      unsigned : 20;
    };
  };
} typeADC_JOFR4BITS;
sfr volatile typeADC_JOFR4BITS ADC_JOFR4bits absolute 0x40012424;

 typedef struct tagADC_HTRBITS {
  union {
    struct {
      unsigned HT : 12;
      unsigned : 20;
    };
  };
} typeADC_HTRBITS;
sfr volatile typeADC_HTRBITS ADC_HTRbits absolute 0x40012428;

 typedef struct tagADC_LTRBITS {
  union {
    struct {
      unsigned LT : 12;
      unsigned : 20;
    };
  };
} typeADC_LTRBITS;
sfr volatile typeADC_LTRBITS ADC_LTRbits absolute 0x4001242C;

 typedef struct tagADC_SQR1BITS {
  union {
    struct {
      unsigned SQ25 : 5;
      unsigned SQ26 : 5;
      unsigned SQ27 : 5;
      unsigned SQ28 : 5;
      unsigned L : 4;
      unsigned : 8;
    };
  };
} typeADC_SQR1BITS;
sfr volatile typeADC_SQR1BITS ADC_SQR1bits absolute 0x40012430;

 typedef struct tagADC_SQR2BITS {
  union {
    struct {
      unsigned SQ19 : 5;
      unsigned SQ20 : 5;
      unsigned SQ21 : 5;
      unsigned SQ22 : 5;
      unsigned SQ23 : 5;
      unsigned SQ24 : 5;
      unsigned : 2;
    };
  };
} typeADC_SQR2BITS;
sfr volatile typeADC_SQR2BITS ADC_SQR2bits absolute 0x40012434;

 typedef struct tagADC_SQR3BITS {
  union {
    struct {
      unsigned SQ13 : 5;
      unsigned SQ14 : 5;
      unsigned SQ15 : 5;
      unsigned SQ16 : 5;
      unsigned SQ17 : 5;
      unsigned SQ18 : 5;
      unsigned : 2;
    };
  };
} typeADC_SQR3BITS;
sfr volatile typeADC_SQR3BITS ADC_SQR3bits absolute 0x40012438;

 typedef struct tagADC_SQR4BITS {
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
} typeADC_SQR4BITS;
sfr volatile typeADC_SQR4BITS ADC_SQR4bits absolute 0x4001243C;

 typedef struct tagADC_SQR5BITS {
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
} typeADC_SQR5BITS;
sfr volatile typeADC_SQR5BITS ADC_SQR5bits absolute 0x40012440;

 typedef struct tagADC_JSQRBITS {
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
} typeADC_JSQRBITS;
sfr volatile typeADC_JSQRBITS ADC_JSQRbits absolute 0x40012444;

 typedef struct tagADC_JDR1BITS {
  union {
    struct {
      unsigned JDATA : 16;
      unsigned : 16;
    };
  };
} typeADC_JDR1BITS;
sfr volatile typeADC_JDR1BITS ADC_JDR1bits absolute 0x40012448;

 typedef struct tagADC_JDR2BITS {
  union {
    struct {
      unsigned JDATA : 16;
      unsigned : 16;
    };
  };
} typeADC_JDR2BITS;
sfr volatile typeADC_JDR2BITS ADC_JDR2bits absolute 0x4001244C;

 typedef struct tagADC_JDR3BITS {
  union {
    struct {
      unsigned JDATA : 16;
      unsigned : 16;
    };
  };
} typeADC_JDR3BITS;
sfr volatile typeADC_JDR3BITS ADC_JDR3bits absolute 0x40012450;

 typedef struct tagADC_JDR4BITS {
  union {
    struct {
      unsigned JDATA : 16;
      unsigned : 16;
    };
  };
} typeADC_JDR4BITS;
sfr volatile typeADC_JDR4BITS ADC_JDR4bits absolute 0x40012454;

 typedef struct tagADC_DRBITS {
  union {
    struct {
      unsigned DATA : 16;
      unsigned : 16;
    };
  };
} typeADC_DRBITS;
sfr volatile typeADC_DRBITS ADC_DRbits absolute 0x40012458;

 typedef struct tagADC_SMPR0BITS {
  union {
    struct {
      unsigned SampletimebitsSMPx_x : 32;
    };
  };
} typeADC_SMPR0BITS;
sfr volatile typeADC_SMPR0BITS ADC_SMPR0bits absolute 0x4001245C;

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
      unsigned : 5;
      unsigned RETOBASE : 1;
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

 typedef struct tagSCB_SHPR1BITS {
  union {
    struct {
      unsigned PRI_4 : 8;
      unsigned PRI_5 : 8;
      unsigned PRI_6 : 8;
      unsigned : 8;
    };
  };
} typeSCB_SHPR1BITS;
sfr far volatile typeSCB_SHPR1BITS SCB_SHPR1bits absolute 0xE000ED18;

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

 typedef struct tagDBG_DBGMCU_IDCODEBITS {
  union {
    struct {
      unsigned DEV_ID : 12;
      unsigned : 4;
      unsigned REV_ID : 16;
    };
  };
} typeDBG_DBGMCU_IDCODEBITS;
sfr far volatile typeDBG_DBGMCU_IDCODEBITS DBG_DBGMCU_IDCODEbits absolute 0xE0042000;

 typedef struct tagDBG_DBGMCU_CRBITS {
  union {
    struct {
      unsigned DBG_SLEEP : 1;
      unsigned DBG_STOP : 1;
      unsigned DBG_STANDBY : 1;
      unsigned : 2;
      unsigned TRACE_IOEN : 1;
      unsigned TRACE_MODE : 2;
      unsigned : 8;
      unsigned DBG_I2C2_SMBUS_TIMEOUT : 1;
      unsigned DBG_TIM8_STOP : 1;
      unsigned DBG_TIM5_STOP : 1;
      unsigned DBG_TIM6_STOP : 1;
      unsigned DBG_TIM7_STOP : 1;
      unsigned : 11;
    };
  };
} typeDBG_DBGMCU_CRBITS;
sfr far volatile typeDBG_DBGMCU_CRBITS DBG_DBGMCU_CRbits absolute 0xE0042004;

 typedef struct tagDBG_DBGMCU_APB1_FZBITS {
  union {
    struct {
      unsigned DBG_TIM2_STOP : 1;
      unsigned DBG_TIM3_STOP : 1;
      unsigned DBG_TIM4_STOP : 1;
      unsigned DBG_TIM5_STOP : 1;
      unsigned DBG_TIM6_STOP : 1;
      unsigned DBG_TIM7_STOP : 1;
      unsigned DBG_TIM12_STOP : 1;
      unsigned DBG_TIM13_STOP : 1;
      unsigned DBG_TIM14_STOP : 1;
      unsigned : 2;
      unsigned DBG_WWDG_STOP : 1;
      unsigned DBG_IWDEG_STOP : 1;
      unsigned : 8;
      unsigned DBG_J2C1_SMBUS_TIMEOUT : 1;
      unsigned DBG_J2C2_SMBUS_TIMEOUT : 1;
      unsigned DBG_J2C3SMBUS_TIMEOUT : 1;
      unsigned : 1;
      unsigned DBG_CAN1_STOP : 1;
      unsigned DBG_CAN2_STOP : 1;
      unsigned : 5;
    };
  };
} typeDBG_DBGMCU_APB1_FZBITS;
sfr far volatile typeDBG_DBGMCU_APB1_FZBITS DBG_DBGMCU_APB1_FZbits absolute 0xE0042008;

 typedef struct tagDBG_DBGMCU_APB2_FZBITS {
  union {
    struct {
      unsigned DBG_TIM1_STOP : 1;
      unsigned DBG_TIM8_STOP : 1;
      unsigned : 14;
      unsigned DBG_TIM9_STOP : 1;
      unsigned DBG_TIM10_STOP : 1;
      unsigned DBG_TIM11_STOP : 1;
      unsigned : 13;
    };
  };
} typeDBG_DBGMCU_APB2_FZBITS;
sfr far volatile typeDBG_DBGMCU_APB2_FZBITS DBG_DBGMCU_APB2_FZbits absolute 0xE004200C;
