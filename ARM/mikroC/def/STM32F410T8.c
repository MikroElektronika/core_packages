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

const unsigned long __FLASH_SIZE = 0x00010000;


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
const IVT_INT_EXTI16_PVD         = 17;
const IVT_INT_EXTI21_TAMP_STAMP  = 18;
const IVT_INT_EXTI22_RTC_WKUP    = 19;
const IVT_INT_FLASH              = 20;
const IVT_INT_RCC                = 21;
const IVT_INT_EXTI0              = 22;
const IVT_INT_EXTI1              = 23;
const IVT_INT_EXTI2              = 24;
const IVT_INT_EXTI3              = 25;
const IVT_INT_EXTI4              = 26;
const IVT_INT_DMA1_Stream0       = 27;
const IVT_INT_DMA1_Stream1       = 28;
const IVT_INT_DMA1_Stream2       = 29;
const IVT_INT_DMA1_Stream3       = 30;
const IVT_INT_DMA1_Stream4       = 31;
const IVT_INT_DMA1_Stream5       = 32;
const IVT_INT_DMA1_Stream6       = 33;
const IVT_INT_ADC                = 34;
const IVT_INT_RESERVED6          = 35;
const IVT_INT_RESERVED7          = 36;
const IVT_INT_RESERVED8          = 37;
const IVT_INT_RESERVED9          = 38;
const IVT_INT_EXTI9_5            = 39;
const IVT_INT_TIM1_BRK_TIM9      = 40;
const IVT_INT_TIM1_UP_TIM10      = 41;
const IVT_INT_TIM1_TRG_COM_TIM11 = 42;
const IVT_INT_TIM1_CC            = 43;
const IVT_INT_RESERVED10         = 44;
const IVT_INT_RESERVED11         = 45;
const IVT_INT_RESERVED12         = 46;
const IVT_INT_I2C1_EV            = 47;
const IVT_INT_I2C1_ER            = 48;
const IVT_INT_I2C2_EV            = 49;
const IVT_INT_I2C2_ER            = 50;
const IVT_INT_SPI1               = 51;
const IVT_INT_SPI2               = 52;
const IVT_INT_USART1             = 53;
const IVT_INT_USART2             = 54;
const IVT_INT_RESERVED13         = 55;
const IVT_INT_EXTI15_10          = 56;
const IVT_INT_EXTI17_RTC_ALARM   = 57;
const IVT_INT_RESERVED14         = 58;
const IVT_INT_RESERVED15         = 59;
const IVT_INT_RESERVED16         = 60;
const IVT_INT_RESERVED17         = 61;
const IVT_INT_RESERVED18         = 62;
const IVT_INT_DMA1_Stream7       = 63;
const IVT_INT_RESERVED19         = 64;
const IVT_INT_RESERVED20         = 65;
const IVT_INT_TIM5               = 66;
const IVT_INT_RESERVED21         = 67;
const IVT_INT_RESERVED22         = 68;
const IVT_INT_RESERVED23         = 69;
const IVT_INT_TIM6_DAC           = 70;
const IVT_INT_RESERVED24         = 71;
const IVT_INT_DMA2_Stream0       = 72;
const IVT_INT_DMA2_Stream1       = 73;
const IVT_INT_DMA2_Stream2       = 74;
const IVT_INT_DMA2_Stream3       = 75;
const IVT_INT_DMA2_Stream4       = 76;
const IVT_INT_RESERVED25         = 77;
const IVT_INT_EXTI19             = 78;
const IVT_INT_RESERVED26         = 79;
const IVT_INT_RESERVED27         = 80;
const IVT_INT_RESERVED28         = 81;
const IVT_INT_RESERVED29         = 82;
const IVT_INT_RESERVED30         = 83;
const IVT_INT_DMA2_Stream5       = 84;
const IVT_INT_DMA2_Stream6       = 85;
const IVT_INT_DMA2_Stream7       = 86;
const IVT_INT_USART6             = 87;
const IVT_INT_RESERVED31         = 88;
const IVT_INT_RESERVED32         = 89;
const IVT_INT_RESERVED33         = 90;
const IVT_INT_RESERVED34         = 91;
const IVT_INT_EXTI20             = 92;
const IVT_INT_RESERVED35         = 93;
const IVT_INT_RESERVED36         = 94;
const IVT_INT_RESERVED37         = 95;
const IVT_INT_RNG                = 96;
const IVT_INT_FPU                = 97;
const IVT_INT_RESERVED38         = 98;
const IVT_INT_RESERVED39         = 99;
const IVT_INT_RESERVED40         = 100;
const IVT_INT_SPI5               = 101;
const IVT_INT_RESERVED41         = 102;
const IVT_INT_RESERVED42         = 103;
const IVT_INT_RESERVED43         = 104;
const IVT_INT_RESERVED44         = 105;
const IVT_INT_RESERVED45         = 106;
const IVT_INT_RESERVED46         = 107;
const IVT_INT_RESERVED47         = 108;
const IVT_INT_RESERVED48         = 109;
const IVT_INT_RESERVED49         = 110;
const IVT_INT_I2C4_EV            = 111;
const IVT_INT_I2C4_ER            = 112;
const IVT_INT_LPTIM1_EXTI23      = 113;

const register unsigned long S0  = 0x0000;
const register unsigned long S1  = 0x0004;
const register unsigned long S2  = 0x0008;
const register unsigned long S3  = 0x000C;
const register unsigned long S4  = 0x0010;
const register unsigned long S5  = 0x0014;
const register unsigned long S6  = 0x0018;
const register unsigned long S7  = 0x001C;
const register unsigned long S8  = 0x0020;
const register unsigned long S9  = 0x0024;
const register unsigned long S10 = 0x0028;
const register unsigned long S11 = 0x002C;
const register unsigned long S12 = 0x0030;
const register unsigned long S13 = 0x0034;
const register unsigned long S14 = 0x0038;
const register unsigned long S15 = 0x003C;
const register unsigned long S16 = 0x0040;
const register unsigned long S17 = 0x0044;
const register unsigned long S18 = 0x0048;
const register unsigned long S19 = 0x004C;
const register unsigned long S20 = 0x0050;
const register unsigned long S21 = 0x0054;
const register unsigned long S22 = 0x0058;
const register unsigned long S23 = 0x005C;
const register unsigned long S24 = 0x0060;
const register unsigned long S25 = 0x0064;
const register unsigned long S26 = 0x0068;
const register unsigned long S27 = 0x006C;
const register unsigned long S28 = 0x0070;
const register unsigned long S29 = 0x0074;
const register unsigned long S30 = 0x0078;
const register unsigned long S31 = 0x007C;

const register unsigned long D0  = 0x0000;
const register unsigned long D1  = 0x0008;
const register unsigned long D2  = 0x0010;
const register unsigned long D3  = 0x0018;
const register unsigned long D4  = 0x0020;
const register unsigned long D5  = 0x0028;
const register unsigned long D6  = 0x0030;
const register unsigned long D7  = 0x0038;
const register unsigned long D8  = 0x0040;
const register unsigned long D9  = 0x0048;
const register unsigned long D10 = 0x0050;
const register unsigned long D11 = 0x0058;
const register unsigned long D12 = 0x0060;
const register unsigned long D13 = 0x0068;
const register unsigned long D14 = 0x0070;
const register unsigned long D15 = 0x0078;

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
sfr unsigned long   volatile ADC_CSR              absolute 0x40012300;
    const register unsigned short int OVR3 = 21;
    sbit  OVR3_bit at ADC_CSR.B21;
    const register unsigned short int STRT3 = 20;
    sbit  STRT3_bit at ADC_CSR.B20;
    const register unsigned short int JSTRT3 = 19;
    sbit  JSTRT3_bit at ADC_CSR.B19;
    const register unsigned short int JEOC3 = 18;
    sbit  JEOC3_bit at ADC_CSR.B18;
    const register unsigned short int EOC3 = 17;
    sbit  EOC3_bit at ADC_CSR.B17;
    const register unsigned short int AWD3 = 16;
    sbit  AWD3_bit at ADC_CSR.B16;
    const register unsigned short int OVR2 = 13;
    sbit  OVR2_bit at ADC_CSR.B13;
    const register unsigned short int STRT2 = 12;
    sbit  STRT2_bit at ADC_CSR.B12;
    const register unsigned short int JSTRT2 = 11;
    sbit  JSTRT2_bit at ADC_CSR.B11;
    const register unsigned short int JEOC2 = 10;
    sbit  JEOC2_bit at ADC_CSR.B10;
    const register unsigned short int EOC2 = 9;
    sbit  EOC2_bit at ADC_CSR.B9;
    const register unsigned short int AWD2 = 8;
    sbit  AWD2_bit at ADC_CSR.B8;
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

sfr unsigned long   volatile ADC_CCR              absolute 0x40012304;
    const register unsigned short int TSVREFE = 23;
    sbit  TSVREFE_bit at ADC_CCR.B23;
    const register unsigned short int VBATE = 22;
    sbit  VBATE_bit at ADC_CCR.B22;
    const register unsigned short int ADCPRE0 = 16;
    sbit  ADCPRE0_bit at ADC_CCR.B16;
    const register unsigned short int ADCPRE1 = 17;
    sbit  ADCPRE1_bit at ADC_CCR.B17;
    const register unsigned short int DMA0 = 14;
    sbit  DMA0_bit at ADC_CCR.B14;
    const register unsigned short int DMA1 = 15;
    sbit  DMA1_bit at ADC_CCR.B15;
    const register unsigned short int DDS = 13;
    sbit  DDS_bit at ADC_CCR.B13;
    const register unsigned short int DELAY0 = 8;
    sbit  DELAY0_bit at ADC_CCR.B8;
    const register unsigned short int DELAY1 = 9;
    sbit  DELAY1_bit at ADC_CCR.B9;
    const register unsigned short int DELAY2 = 10;
    sbit  DELAY2_bit at ADC_CCR.B10;
    const register unsigned short int DELAY3 = 11;
    sbit  DELAY3_bit at ADC_CCR.B11;

sfr unsigned long   volatile ADC1_SR              absolute 0x40012000;
    const register unsigned short int OVR = 5;
    sbit  OVR_bit at ADC1_SR.B5;
    const register unsigned short int STRT = 4;
    sbit  STRT_bit at ADC1_SR.B4;
    const register unsigned short int JSTRT = 3;
    sbit  JSTRT_bit at ADC1_SR.B3;
    const register unsigned short int JEOC = 2;
    sbit  JEOC_bit at ADC1_SR.B2;
    const register unsigned short int EOC = 1;
    sbit  EOC_bit at ADC1_SR.B1;
    const register unsigned short int AWD = 0;
    sbit  AWD_bit at ADC1_SR.B0;

sfr unsigned long   volatile ADC1_CR1             absolute 0x40012004;
    const register unsigned short int OVRIE = 26;
    sbit  OVRIE_bit at ADC1_CR1.B26;
    const register unsigned short int RES0 = 24;
    sbit  RES0_bit at ADC1_CR1.B24;
    const register unsigned short int RES1 = 25;
    sbit  RES1_bit at ADC1_CR1.B25;
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

sfr unsigned long   volatile ADC1_CR2             absolute 0x40012008;
    const register unsigned short int SWSTART = 30;
    sbit  SWSTART_bit at ADC1_CR2.B30;
    const register unsigned short int EXTEN0 = 28;
    sbit  EXTEN0_bit at ADC1_CR2.B28;
    const register unsigned short int EXTEN1 = 29;
    sbit  EXTEN1_bit at ADC1_CR2.B29;
    const register unsigned short int EXTSEL0 = 24;
    sbit  EXTSEL0_bit at ADC1_CR2.B24;
    const register unsigned short int EXTSEL1 = 25;
    sbit  EXTSEL1_bit at ADC1_CR2.B25;
    const register unsigned short int EXTSEL2 = 26;
    sbit  EXTSEL2_bit at ADC1_CR2.B26;
    const register unsigned short int EXTSEL3 = 27;
    sbit  EXTSEL3_bit at ADC1_CR2.B27;
    const register unsigned short int JSWSTART = 22;
    sbit  JSWSTART_bit at ADC1_CR2.B22;
    const register unsigned short int JEXTEN0 = 20;
    sbit  JEXTEN0_bit at ADC1_CR2.B20;
    const register unsigned short int JEXTEN1 = 21;
    sbit  JEXTEN1_bit at ADC1_CR2.B21;
    const register unsigned short int JEXTSEL0 = 16;
    sbit  JEXTSEL0_bit at ADC1_CR2.B16;
    const register unsigned short int JEXTSEL1 = 17;
    sbit  JEXTSEL1_bit at ADC1_CR2.B17;
    const register unsigned short int JEXTSEL2 = 18;
    sbit  JEXTSEL2_bit at ADC1_CR2.B18;
    const register unsigned short int JEXTSEL3 = 19;
    sbit  JEXTSEL3_bit at ADC1_CR2.B19;
    const register unsigned short int ALIGN = 11;
    sbit  ALIGN_bit at ADC1_CR2.B11;
    const register unsigned short int EOCS = 10;
    sbit  EOCS_bit at ADC1_CR2.B10;
    sbit  DDS_ADC1_CR2_bit at ADC1_CR2.B9;
    const register unsigned short int DMA_ = 8;
    sbit  DMA_bit at ADC1_CR2.B8;
    const register unsigned short int CONT = 1;
    sbit  CONT_bit at ADC1_CR2.B1;
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADC1_CR2.B0;

sfr unsigned long   volatile ADC1_SMPR1           absolute 0x4001200C;
    const register unsigned short int SMPx_x0 = 0;
    sbit  SMPx_x0_bit at ADC1_SMPR1.B0;
    const register unsigned short int SMPx_x1 = 1;
    sbit  SMPx_x1_bit at ADC1_SMPR1.B1;
    const register unsigned short int SMPx_x2 = 2;
    sbit  SMPx_x2_bit at ADC1_SMPR1.B2;
    const register unsigned short int SMPx_x3 = 3;
    sbit  SMPx_x3_bit at ADC1_SMPR1.B3;
    const register unsigned short int SMPx_x4 = 4;
    sbit  SMPx_x4_bit at ADC1_SMPR1.B4;
    const register unsigned short int SMPx_x5 = 5;
    sbit  SMPx_x5_bit at ADC1_SMPR1.B5;
    const register unsigned short int SMPx_x6 = 6;
    sbit  SMPx_x6_bit at ADC1_SMPR1.B6;
    const register unsigned short int SMPx_x7 = 7;
    sbit  SMPx_x7_bit at ADC1_SMPR1.B7;
    const register unsigned short int SMPx_x8 = 8;
    sbit  SMPx_x8_bit at ADC1_SMPR1.B8;
    const register unsigned short int SMPx_x9 = 9;
    sbit  SMPx_x9_bit at ADC1_SMPR1.B9;
    const register unsigned short int SMPx_x10 = 10;
    sbit  SMPx_x10_bit at ADC1_SMPR1.B10;
    const register unsigned short int SMPx_x11 = 11;
    sbit  SMPx_x11_bit at ADC1_SMPR1.B11;
    const register unsigned short int SMPx_x12 = 12;
    sbit  SMPx_x12_bit at ADC1_SMPR1.B12;
    const register unsigned short int SMPx_x13 = 13;
    sbit  SMPx_x13_bit at ADC1_SMPR1.B13;
    const register unsigned short int SMPx_x14 = 14;
    sbit  SMPx_x14_bit at ADC1_SMPR1.B14;
    const register unsigned short int SMPx_x15 = 15;
    sbit  SMPx_x15_bit at ADC1_SMPR1.B15;
    const register unsigned short int SMPx_x16 = 16;
    sbit  SMPx_x16_bit at ADC1_SMPR1.B16;
    const register unsigned short int SMPx_x17 = 17;
    sbit  SMPx_x17_bit at ADC1_SMPR1.B17;
    const register unsigned short int SMPx_x18 = 18;
    sbit  SMPx_x18_bit at ADC1_SMPR1.B18;
    const register unsigned short int SMPx_x19 = 19;
    sbit  SMPx_x19_bit at ADC1_SMPR1.B19;
    const register unsigned short int SMPx_x20 = 20;
    sbit  SMPx_x20_bit at ADC1_SMPR1.B20;
    const register unsigned short int SMPx_x21 = 21;
    sbit  SMPx_x21_bit at ADC1_SMPR1.B21;
    const register unsigned short int SMPx_x22 = 22;
    sbit  SMPx_x22_bit at ADC1_SMPR1.B22;
    const register unsigned short int SMPx_x23 = 23;
    sbit  SMPx_x23_bit at ADC1_SMPR1.B23;
    const register unsigned short int SMPx_x24 = 24;
    sbit  SMPx_x24_bit at ADC1_SMPR1.B24;
    const register unsigned short int SMPx_x25 = 25;
    sbit  SMPx_x25_bit at ADC1_SMPR1.B25;
    const register unsigned short int SMPx_x26 = 26;
    sbit  SMPx_x26_bit at ADC1_SMPR1.B26;
    const register unsigned short int SMPx_x27 = 27;
    sbit  SMPx_x27_bit at ADC1_SMPR1.B27;
    const register unsigned short int SMPx_x28 = 28;
    sbit  SMPx_x28_bit at ADC1_SMPR1.B28;
    const register unsigned short int SMPx_x29 = 29;
    sbit  SMPx_x29_bit at ADC1_SMPR1.B29;
    const register unsigned short int SMPx_x30 = 30;
    sbit  SMPx_x30_bit at ADC1_SMPR1.B30;
    const register unsigned short int SMPx_x31 = 31;
    sbit  SMPx_x31_bit at ADC1_SMPR1.B31;

sfr unsigned long   volatile ADC1_SMPR2           absolute 0x40012010;
    sbit  SMPx_x0_ADC1_SMPR2_bit at ADC1_SMPR2.B0;
    sbit  SMPx_x1_ADC1_SMPR2_bit at ADC1_SMPR2.B1;
    sbit  SMPx_x2_ADC1_SMPR2_bit at ADC1_SMPR2.B2;
    sbit  SMPx_x3_ADC1_SMPR2_bit at ADC1_SMPR2.B3;
    sbit  SMPx_x4_ADC1_SMPR2_bit at ADC1_SMPR2.B4;
    sbit  SMPx_x5_ADC1_SMPR2_bit at ADC1_SMPR2.B5;
    sbit  SMPx_x6_ADC1_SMPR2_bit at ADC1_SMPR2.B6;
    sbit  SMPx_x7_ADC1_SMPR2_bit at ADC1_SMPR2.B7;
    sbit  SMPx_x8_ADC1_SMPR2_bit at ADC1_SMPR2.B8;
    sbit  SMPx_x9_ADC1_SMPR2_bit at ADC1_SMPR2.B9;
    sbit  SMPx_x10_ADC1_SMPR2_bit at ADC1_SMPR2.B10;
    sbit  SMPx_x11_ADC1_SMPR2_bit at ADC1_SMPR2.B11;
    sbit  SMPx_x12_ADC1_SMPR2_bit at ADC1_SMPR2.B12;
    sbit  SMPx_x13_ADC1_SMPR2_bit at ADC1_SMPR2.B13;
    sbit  SMPx_x14_ADC1_SMPR2_bit at ADC1_SMPR2.B14;
    sbit  SMPx_x15_ADC1_SMPR2_bit at ADC1_SMPR2.B15;
    sbit  SMPx_x16_ADC1_SMPR2_bit at ADC1_SMPR2.B16;
    sbit  SMPx_x17_ADC1_SMPR2_bit at ADC1_SMPR2.B17;
    sbit  SMPx_x18_ADC1_SMPR2_bit at ADC1_SMPR2.B18;
    sbit  SMPx_x19_ADC1_SMPR2_bit at ADC1_SMPR2.B19;
    sbit  SMPx_x20_ADC1_SMPR2_bit at ADC1_SMPR2.B20;
    sbit  SMPx_x21_ADC1_SMPR2_bit at ADC1_SMPR2.B21;
    sbit  SMPx_x22_ADC1_SMPR2_bit at ADC1_SMPR2.B22;
    sbit  SMPx_x23_ADC1_SMPR2_bit at ADC1_SMPR2.B23;
    sbit  SMPx_x24_ADC1_SMPR2_bit at ADC1_SMPR2.B24;
    sbit  SMPx_x25_ADC1_SMPR2_bit at ADC1_SMPR2.B25;
    sbit  SMPx_x26_ADC1_SMPR2_bit at ADC1_SMPR2.B26;
    sbit  SMPx_x27_ADC1_SMPR2_bit at ADC1_SMPR2.B27;
    sbit  SMPx_x28_ADC1_SMPR2_bit at ADC1_SMPR2.B28;
    sbit  SMPx_x29_ADC1_SMPR2_bit at ADC1_SMPR2.B29;
    sbit  SMPx_x30_ADC1_SMPR2_bit at ADC1_SMPR2.B30;
    sbit  SMPx_x31_ADC1_SMPR2_bit at ADC1_SMPR2.B31;

sfr unsigned long   volatile ADC1_JOFR1           absolute 0x40012014;
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

sfr unsigned long   volatile ADC1_JOFR2           absolute 0x40012018;
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

sfr unsigned long   volatile ADC1_JOFR3           absolute 0x4001201C;
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

sfr unsigned long   volatile ADC1_JOFR4           absolute 0x40012020;
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

sfr unsigned long   volatile ADC1_HTR             absolute 0x40012024;
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

sfr unsigned long   volatile ADC1_LTR             absolute 0x40012028;
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

sfr unsigned long   volatile ADC1_SQR1            absolute 0x4001202C;
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

sfr unsigned long   volatile ADC1_SQR2            absolute 0x40012030;
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

sfr unsigned long   volatile ADC1_SQR3            absolute 0x40012034;
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

sfr unsigned long   volatile ADC1_JSQR            absolute 0x40012038;
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

sfr unsigned long   volatile ADC1_JDR1            absolute 0x4001203C;
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

sfr unsigned long   volatile ADC1_JDR2            absolute 0x40012040;
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

sfr unsigned long   volatile ADC1_JDR3            absolute 0x40012044;
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

sfr unsigned long   volatile ADC1_JDR4            absolute 0x40012048;
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

sfr unsigned long   volatile ADC1_DR              absolute 0x4001204C;
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
    const register unsigned short int DATA10 = 10;
    sbit  DATA10_bit at ADC1_DR.B10;
    const register unsigned short int DATA11 = 11;
    sbit  DATA11_bit at ADC1_DR.B11;
    const register unsigned short int DATA12 = 12;
    sbit  DATA12_bit at ADC1_DR.B12;
    const register unsigned short int DATA13 = 13;
    sbit  DATA13_bit at ADC1_DR.B13;
    const register unsigned short int DATA14 = 14;
    sbit  DATA14_bit at ADC1_DR.B14;
    const register unsigned short int DATA15 = 15;
    sbit  DATA15_bit at ADC1_DR.B15;

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
    const register unsigned short int CR = 0;
    sbit  CR_bit at CRC_CR.B0;

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

sfr far unsigned long   volatile DBG_DBGMCU_APB1_FZ   absolute 0xE0042008;
    const register unsigned short int DBG_TIM2_STOP = 0;
    sbit  DBG_TIM2_STOP_bit at DBG_DBGMCU_APB1_FZ.B0;
    const register unsigned short int DBG_TIM3_STOP = 1;
    sbit  DBG_TIM3_STOP_bit at DBG_DBGMCU_APB1_FZ.B1;
    const register unsigned short int DBG_TIM4_STOP = 2;
    sbit  DBG_TIM4_STOP_bit at DBG_DBGMCU_APB1_FZ.B2;
    const register unsigned short int DBG_TIM5_STOP = 3;
    sbit  DBG_TIM5_STOP_bit at DBG_DBGMCU_APB1_FZ.B3;
    const register unsigned short int DBG_RTC_Stop = 10;
    sbit  DBG_RTC_Stop_bit at DBG_DBGMCU_APB1_FZ.B10;
    const register unsigned short int DBG_WWDG_STOP = 11;
    sbit  DBG_WWDG_STOP_bit at DBG_DBGMCU_APB1_FZ.B11;
    const register unsigned short int DBG_IWDEG_STOP = 12;
    sbit  DBG_IWDEG_STOP_bit at DBG_DBGMCU_APB1_FZ.B12;
    const register unsigned short int DBG_I2C1_SMBUS_TIMEOUT = 21;
    sbit  DBG_I2C1_SMBUS_TIMEOUT_bit at DBG_DBGMCU_APB1_FZ.B21;
    const register unsigned short int DBG_I2C2_SMBUS_TIMEOUT = 22;
    sbit  DBG_I2C2_SMBUS_TIMEOUT_bit at DBG_DBGMCU_APB1_FZ.B22;
    const register unsigned short int DBG_I2C3SMBUS_TIMEOUT = 23;
    sbit  DBG_I2C3SMBUS_TIMEOUT_bit at DBG_DBGMCU_APB1_FZ.B23;

sfr far unsigned long   volatile DBG_DBGMCU_APB2_FZ   absolute 0xE004200C;
    const register unsigned short int DBG_TIM1_STOP = 0;
    sbit  DBG_TIM1_STOP_bit at DBG_DBGMCU_APB2_FZ.B0;
    const register unsigned short int DBG_TIM9_STOP = 16;
    sbit  DBG_TIM9_STOP_bit at DBG_DBGMCU_APB2_FZ.B16;
    const register unsigned short int DBG_TIM10_STOP = 17;
    sbit  DBG_TIM10_STOP_bit at DBG_DBGMCU_APB2_FZ.B17;
    const register unsigned short int DBG_TIM11_STOP = 18;
    sbit  DBG_TIM11_STOP_bit at DBG_DBGMCU_APB2_FZ.B18;

sfr unsigned long   volatile EXTI_IMR             absolute 0x40013C00;
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

sfr unsigned long   volatile EXTI_EMR             absolute 0x40013C04;
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

sfr unsigned long   volatile EXTI_RTSR            absolute 0x40013C08;
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

sfr unsigned long   volatile EXTI_FTSR            absolute 0x40013C0C;
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

sfr unsigned long   volatile EXTI_SWIER           absolute 0x40013C10;
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

sfr unsigned long   volatile EXTI_PR              absolute 0x40013C14;
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
    const register unsigned short int DCEN = 10;
    sbit  DCEN_bit at FLASH_ACR.B10;
    const register unsigned short int ICRST = 11;
    sbit  ICRST_bit at FLASH_ACR.B11;
    const register unsigned short int DCRST = 12;
    sbit  DCRST_bit at FLASH_ACR.B12;

sfr unsigned long   volatile FLASH_KEYR           absolute 0x40023C04;
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

sfr unsigned long   volatile FLASH_OPTKEYR        absolute 0x40023C08;
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

sfr unsigned long   volatile FLASH_SR             absolute 0x40023C0C;
    const register unsigned short int EOP = 0;
    sbit  EOP_bit at FLASH_SR.B0;
    const register unsigned short int OPERR = 1;
    sbit  OPERR_bit at FLASH_SR.B1;
    const register unsigned short int WRPERR = 4;
    sbit  WRPERR_bit at FLASH_SR.B4;
    const register unsigned short int PGAERR = 5;
    sbit  PGAERR_bit at FLASH_SR.B5;
    const register unsigned short int PGPERR = 6;
    sbit  PGPERR_bit at FLASH_SR.B6;
    const register unsigned short int PGSERR = 7;
    sbit  PGSERR_bit at FLASH_SR.B7;
    const register unsigned short int BSY = 16;
    sbit  BSY_bit at FLASH_SR.B16;

sfr unsigned long   volatile FLASH_CR             absolute 0x40023C10;
    const register unsigned short int PG = 0;
    sbit  PG_bit at FLASH_CR.B0;
    const register unsigned short int SER = 1;
    sbit  SER_bit at FLASH_CR.B1;
    const register unsigned short int MER = 2;
    sbit  MER_bit at FLASH_CR.B2;
    const register unsigned short int SNB0 = 3;
    sbit  SNB0_bit at FLASH_CR.B3;
    const register unsigned short int SNB1 = 4;
    sbit  SNB1_bit at FLASH_CR.B4;
    const register unsigned short int SNB2 = 5;
    sbit  SNB2_bit at FLASH_CR.B5;
    const register unsigned short int SNB3 = 6;
    sbit  SNB3_bit at FLASH_CR.B6;
    const register unsigned short int PSIZE0 = 8;
    sbit  PSIZE0_bit at FLASH_CR.B8;
    const register unsigned short int PSIZE1 = 9;
    sbit  PSIZE1_bit at FLASH_CR.B9;
    sbit  STRT_FLASH_CR_bit at FLASH_CR.B16;
    const register unsigned short int EOPIE = 24;
    sbit  EOPIE_bit at FLASH_CR.B24;
    const register unsigned short int ERRIE = 25;
    sbit  ERRIE_bit at FLASH_CR.B25;
    const register unsigned short int LOCK_ = 31;
    sbit  LOCK_bit at FLASH_CR.B31;

sfr unsigned long   volatile FLASH_OPTCR          absolute 0x40023C14;
    const register unsigned short int OPTLOCK = 0;
    sbit  OPTLOCK_bit at FLASH_OPTCR.B0;
    const register unsigned short int OPTSTRT = 1;
    sbit  OPTSTRT_bit at FLASH_OPTCR.B1;
    const register unsigned short int BOR_LEV0 = 2;
    sbit  BOR_LEV0_bit at FLASH_OPTCR.B2;
    const register unsigned short int BOR_LEV1 = 3;
    sbit  BOR_LEV1_bit at FLASH_OPTCR.B3;
    const register unsigned short int WDG_SW = 5;
    sbit  WDG_SW_bit at FLASH_OPTCR.B5;
    const register unsigned short int nRST_STOP = 6;
    sbit  nRST_STOP_bit at FLASH_OPTCR.B6;
    const register unsigned short int nRST_STDBY = 7;
    sbit  nRST_STDBY_bit at FLASH_OPTCR.B7;
    const register unsigned short int RDP0 = 8;
    sbit  RDP0_bit at FLASH_OPTCR.B8;
    const register unsigned short int RDP1 = 9;
    sbit  RDP1_bit at FLASH_OPTCR.B9;
    const register unsigned short int RDP2 = 10;
    sbit  RDP2_bit at FLASH_OPTCR.B10;
    const register unsigned short int RDP3 = 11;
    sbit  RDP3_bit at FLASH_OPTCR.B11;
    const register unsigned short int RDP4 = 12;
    sbit  RDP4_bit at FLASH_OPTCR.B12;
    const register unsigned short int RDP5 = 13;
    sbit  RDP5_bit at FLASH_OPTCR.B13;
    const register unsigned short int RDP6 = 14;
    sbit  RDP6_bit at FLASH_OPTCR.B14;
    const register unsigned short int RDP7 = 15;
    sbit  RDP7_bit at FLASH_OPTCR.B15;
    const register unsigned short int nWRP0 = 16;
    sbit  nWRP0_bit at FLASH_OPTCR.B16;
    const register unsigned short int nWRP1 = 17;
    sbit  nWRP1_bit at FLASH_OPTCR.B17;
    const register unsigned short int nWRP2 = 18;
    sbit  nWRP2_bit at FLASH_OPTCR.B18;
    const register unsigned short int nWRP3 = 19;
    sbit  nWRP3_bit at FLASH_OPTCR.B19;
    const register unsigned short int nWRP4 = 20;
    sbit  nWRP4_bit at FLASH_OPTCR.B20;
    const register unsigned short int SPRMOD = 31;
    sbit  SPRMOD_bit at FLASH_OPTCR.B31;

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
    const register unsigned short int RVU = 1;
    sbit  RVU_bit at IWDG_SR.B1;
    const register unsigned short int PVU = 0;
    sbit  PVU_bit at IWDG_SR.B0;

sfr unsigned long   volatile PWR_CR               absolute 0x40007000;
    const register unsigned short int VOS0 = 14;
    sbit  VOS0_bit at PWR_CR.B14;
    const register unsigned short int VOS1 = 15;
    sbit  VOS1_bit at PWR_CR.B15;
    const register unsigned short int ADCDC1 = 13;
    sbit  ADCDC1_bit at PWR_CR.B13;
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
    const register unsigned short int WUF = 0;
    sbit  WUF_bit at PWR_CSR.B0;
    const register unsigned short int SBF = 1;
    sbit  SBF_bit at PWR_CSR.B1;
    const register unsigned short int PVDO = 2;
    sbit  PVDO_bit at PWR_CSR.B2;
    const register unsigned short int BRR = 3;
    sbit  BRR_bit at PWR_CSR.B3;
    const register unsigned short int EWUP3 = 6;
    sbit  EWUP3_bit at PWR_CSR.B6;
    const register unsigned short int EWUP2 = 7;
    sbit  EWUP2_bit at PWR_CSR.B7;
    const register unsigned short int EWUP1 = 8;
    sbit  EWUP1_bit at PWR_CSR.B8;
    const register unsigned short int BRE = 9;
    sbit  BRE_bit at PWR_CSR.B9;
    const register unsigned short int VOSRDY = 14;
    sbit  VOSRDY_bit at PWR_CSR.B14;

sfr unsigned long   volatile RCC_CR               absolute 0x40023800;
    const register unsigned short int PLLRDY = 25;
    sbit  PLLRDY_bit at RCC_CR.B25;
    const register unsigned short int PLLON = 24;
    sbit  PLLON_bit at RCC_CR.B24;
    const register unsigned short int CSSON = 19;
    sbit  CSSON_bit at RCC_CR.B19;
    const register unsigned short int HSEBYP = 18;
    sbit  HSEBYP_bit at RCC_CR.B18;
    const register unsigned short int HSERDY = 17;
    sbit  HSERDY_bit at RCC_CR.B17;
    const register unsigned short int HSEON = 16;
    sbit  HSEON_bit at RCC_CR.B16;
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
    const register unsigned short int HSIRDY = 1;
    sbit  HSIRDY_bit at RCC_CR.B1;
    const register unsigned short int HSION = 0;
    sbit  HSION_bit at RCC_CR.B0;

sfr unsigned long   volatile RCC_PLLCFGR          absolute 0x40023804;
    const register unsigned short int PLLM0 = 0;
    sbit  PLLM0_bit at RCC_PLLCFGR.B0;
    const register unsigned short int PLLM1 = 1;
    sbit  PLLM1_bit at RCC_PLLCFGR.B1;
    const register unsigned short int PLLM2 = 2;
    sbit  PLLM2_bit at RCC_PLLCFGR.B2;
    const register unsigned short int PLLM3 = 3;
    sbit  PLLM3_bit at RCC_PLLCFGR.B3;
    const register unsigned short int PLLM4 = 4;
    sbit  PLLM4_bit at RCC_PLLCFGR.B4;
    const register unsigned short int PLLM5 = 5;
    sbit  PLLM5_bit at RCC_PLLCFGR.B5;
    const register unsigned short int PLLN0 = 6;
    sbit  PLLN0_bit at RCC_PLLCFGR.B6;
    const register unsigned short int PLLN1 = 7;
    sbit  PLLN1_bit at RCC_PLLCFGR.B7;
    const register unsigned short int PLLN2 = 8;
    sbit  PLLN2_bit at RCC_PLLCFGR.B8;
    const register unsigned short int PLLN3 = 9;
    sbit  PLLN3_bit at RCC_PLLCFGR.B9;
    const register unsigned short int PLLN4 = 10;
    sbit  PLLN4_bit at RCC_PLLCFGR.B10;
    const register unsigned short int PLLN5 = 11;
    sbit  PLLN5_bit at RCC_PLLCFGR.B11;
    const register unsigned short int PLLN6 = 12;
    sbit  PLLN6_bit at RCC_PLLCFGR.B12;
    const register unsigned short int PLLN7 = 13;
    sbit  PLLN7_bit at RCC_PLLCFGR.B13;
    const register unsigned short int PLLN8 = 14;
    sbit  PLLN8_bit at RCC_PLLCFGR.B14;
    const register unsigned short int PLLP0 = 16;
    sbit  PLLP0_bit at RCC_PLLCFGR.B16;
    const register unsigned short int PLLP1 = 17;
    sbit  PLLP1_bit at RCC_PLLCFGR.B17;
    const register unsigned short int PLLSRC = 22;
    sbit  PLLSRC_bit at RCC_PLLCFGR.B22;
    const register unsigned short int PLLQ0 = 24;
    sbit  PLLQ0_bit at RCC_PLLCFGR.B24;
    const register unsigned short int PLLQ1 = 25;
    sbit  PLLQ1_bit at RCC_PLLCFGR.B25;
    const register unsigned short int PLLQ2 = 26;
    sbit  PLLQ2_bit at RCC_PLLCFGR.B26;
    const register unsigned short int PLLQ3 = 27;
    sbit  PLLQ3_bit at RCC_PLLCFGR.B27;
    const register unsigned short int PLLR1 = 28;
    sbit  PLLR1_bit at RCC_PLLCFGR.B28;
    const register unsigned short int PLLR2 = 29;
    sbit  PLLR2_bit at RCC_PLLCFGR.B29;
    const register unsigned short int PLLR3 = 30;
    sbit  PLLR3_bit at RCC_PLLCFGR.B30;

sfr unsigned long   volatile RCC_CFGR             absolute 0x40023808;
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
    const register unsigned short int MCO1EN = 8;
    sbit  MCO1EN_bit at RCC_CFGR.B8;
    const register unsigned short int MCO2EN = 9;
    sbit  MCO2EN_bit at RCC_CFGR.B9;
    const register unsigned short int PPRE10 = 10;
    sbit  PPRE10_bit at RCC_CFGR.B10;
    const register unsigned short int PPRE11 = 11;
    sbit  PPRE11_bit at RCC_CFGR.B11;
    const register unsigned short int PPRE12 = 12;
    sbit  PPRE12_bit at RCC_CFGR.B12;
    const register unsigned short int PPRE20 = 13;
    sbit  PPRE20_bit at RCC_CFGR.B13;
    const register unsigned short int PPRE21 = 14;
    sbit  PPRE21_bit at RCC_CFGR.B14;
    const register unsigned short int PPRE22 = 15;
    sbit  PPRE22_bit at RCC_CFGR.B15;
    const register unsigned short int RTCPRE0 = 16;
    sbit  RTCPRE0_bit at RCC_CFGR.B16;
    const register unsigned short int RTCPRE1 = 17;
    sbit  RTCPRE1_bit at RCC_CFGR.B17;
    const register unsigned short int RTCPRE2 = 18;
    sbit  RTCPRE2_bit at RCC_CFGR.B18;
    const register unsigned short int RTCPRE3 = 19;
    sbit  RTCPRE3_bit at RCC_CFGR.B19;
    const register unsigned short int RTCPRE4 = 20;
    sbit  RTCPRE4_bit at RCC_CFGR.B20;
    const register unsigned short int MCO10 = 21;
    sbit  MCO10_bit at RCC_CFGR.B21;
    const register unsigned short int MCO11 = 22;
    sbit  MCO11_bit at RCC_CFGR.B22;
    const register unsigned short int MCO1PRE0 = 24;
    sbit  MCO1PRE0_bit at RCC_CFGR.B24;
    const register unsigned short int MCO1PRE1 = 25;
    sbit  MCO1PRE1_bit at RCC_CFGR.B25;
    const register unsigned short int MCO1PRE2 = 26;
    sbit  MCO1PRE2_bit at RCC_CFGR.B26;
    const register unsigned short int MCO2PRE0 = 27;
    sbit  MCO2PRE0_bit at RCC_CFGR.B27;
    const register unsigned short int MCO2PRE1 = 28;
    sbit  MCO2PRE1_bit at RCC_CFGR.B28;
    const register unsigned short int MCO2PRE2 = 29;
    sbit  MCO2PRE2_bit at RCC_CFGR.B29;
    const register unsigned short int MCO20 = 30;
    sbit  MCO20_bit at RCC_CFGR.B30;
    const register unsigned short int MCO21 = 31;
    sbit  MCO21_bit at RCC_CFGR.B31;

sfr unsigned long   volatile RCC_CIR              absolute 0x4002380C;
    const register unsigned short int CSSC = 23;
    sbit  CSSC_bit at RCC_CIR.B23;
    const register unsigned short int PLLI2SRDYC = 21;
    sbit  PLLI2SRDYC_bit at RCC_CIR.B21;
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

sfr unsigned long   volatile RCC_AHB1RSTR         absolute 0x40023810;
    const register unsigned short int GPIOARST = 0;
    sbit  GPIOARST_bit at RCC_AHB1RSTR.B0;
    const register unsigned short int GPIOBRST = 1;
    sbit  GPIOBRST_bit at RCC_AHB1RSTR.B1;
    const register unsigned short int GPIOCRST = 2;
    sbit  GPIOCRST_bit at RCC_AHB1RSTR.B2;
    const register unsigned short int GPIOHRST = 7;
    sbit  GPIOHRST_bit at RCC_AHB1RSTR.B7;
    const register unsigned short int CRCRST = 12;
    sbit  CRCRST_bit at RCC_AHB1RSTR.B12;
    const register unsigned short int DMA1RST = 21;
    sbit  DMA1RST_bit at RCC_AHB1RSTR.B21;
    const register unsigned short int DMA2RST = 22;
    sbit  DMA2RST_bit at RCC_AHB1RSTR.B22;
    const register unsigned short int RNGRST = 31;
    sbit  RNGRST_bit at RCC_AHB1RSTR.B31;

sfr unsigned long   volatile RCC_APB1RSTR         absolute 0x40023820;
    const register unsigned short int TIM5RST = 3;
    sbit  TIM5RST_bit at RCC_APB1RSTR.B3;
    const register unsigned short int TIM6RST = 4;
    sbit  TIM6RST_bit at RCC_APB1RSTR.B4;
    const register unsigned short int LPTIM1RST = 9;
    sbit  LPTIM1RST_bit at RCC_APB1RSTR.B9;
    const register unsigned short int WWDGRST = 11;
    sbit  WWDGRST_bit at RCC_APB1RSTR.B11;
    const register unsigned short int SPI2RST = 14;
    sbit  SPI2RST_bit at RCC_APB1RSTR.B14;
    const register unsigned short int UART2RST = 17;
    sbit  UART2RST_bit at RCC_APB1RSTR.B17;
    const register unsigned short int I2C1RST = 21;
    sbit  I2C1RST_bit at RCC_APB1RSTR.B21;
    const register unsigned short int I2C2RST = 22;
    sbit  I2C2RST_bit at RCC_APB1RSTR.B22;
    const register unsigned short int I2C4RST = 24;
    sbit  I2C4RST_bit at RCC_APB1RSTR.B24;
    const register unsigned short int PWRRST = 28;
    sbit  PWRRST_bit at RCC_APB1RSTR.B28;
    const register unsigned short int DACRST = 29;
    sbit  DACRST_bit at RCC_APB1RSTR.B29;

sfr unsigned long   volatile RCC_APB2RSTR         absolute 0x40023824;
    const register unsigned short int SPI5RST = 20;
    sbit  SPI5RST_bit at RCC_APB2RSTR.B20;
    const register unsigned short int TIM11RST = 18;
    sbit  TIM11RST_bit at RCC_APB2RSTR.B18;
    const register unsigned short int TIM9RST = 16;
    sbit  TIM9RST_bit at RCC_APB2RSTR.B16;
    const register unsigned short int SYSCFGRST = 14;
    sbit  SYSCFGRST_bit at RCC_APB2RSTR.B14;
    const register unsigned short int SPI1RST = 12;
    sbit  SPI1RST_bit at RCC_APB2RSTR.B12;
    const register unsigned short int ADCRST = 8;
    sbit  ADCRST_bit at RCC_APB2RSTR.B8;
    const register unsigned short int USART6RST = 5;
    sbit  USART6RST_bit at RCC_APB2RSTR.B5;
    const register unsigned short int USART1RST = 4;
    sbit  USART1RST_bit at RCC_APB2RSTR.B4;
    const register unsigned short int TIM1RST = 0;
    sbit  TIM1RST_bit at RCC_APB2RSTR.B0;

sfr unsigned long   volatile RCC_AHB1ENR          absolute 0x40023830;
    const register unsigned short int GPIOAEN = 0;
    sbit  GPIOAEN_bit at RCC_AHB1ENR.B0;
    const register unsigned short int GPIOBEN = 1;
    sbit  GPIOBEN_bit at RCC_AHB1ENR.B1;
    const register unsigned short int GPIOCEN = 2;
    sbit  GPIOCEN_bit at RCC_AHB1ENR.B2;
    const register unsigned short int GPIOHEN = 7;
    sbit  GPIOHEN_bit at RCC_AHB1ENR.B7;
    const register unsigned short int CRCEN = 12;
    sbit  CRCEN_bit at RCC_AHB1ENR.B12;
    const register unsigned short int DMA1EN = 21;
    sbit  DMA1EN_bit at RCC_AHB1ENR.B21;
    const register unsigned short int DMA2EN = 22;
    sbit  DMA2EN_bit at RCC_AHB1ENR.B22;
    const register unsigned short int RNGEN = 31;
    sbit  RNGEN_bit at RCC_AHB1ENR.B31;

sfr unsigned long   volatile RCC_APB1ENR          absolute 0x40023840;
    const register unsigned short int TIM5EN = 3;
    sbit  TIM5EN_bit at RCC_APB1ENR.B3;
    const register unsigned short int TIM6EN = 4;
    sbit  TIM6EN_bit at RCC_APB1ENR.B4;
    const register unsigned short int LPTIM1EN = 9;
    sbit  LPTIM1EN_bit at RCC_APB1ENR.B9;
    const register unsigned short int RTCAPBEN = 10;
    sbit  RTCAPBEN_bit at RCC_APB1ENR.B10;
    const register unsigned short int WWDGEN = 11;
    sbit  WWDGEN_bit at RCC_APB1ENR.B11;
    const register unsigned short int SPI2EN = 14;
    sbit  SPI2EN_bit at RCC_APB1ENR.B14;
    const register unsigned short int USART2EN = 17;
    sbit  USART2EN_bit at RCC_APB1ENR.B17;
    const register unsigned short int I2C1EN = 21;
    sbit  I2C1EN_bit at RCC_APB1ENR.B21;
    const register unsigned short int I2C2EN = 22;
    sbit  I2C2EN_bit at RCC_APB1ENR.B22;
    const register unsigned short int I2C4EN = 24;
    sbit  I2C4EN_bit at RCC_APB1ENR.B24;
    const register unsigned short int PWREN = 28;
    sbit  PWREN_bit at RCC_APB1ENR.B28;
    const register unsigned short int DACEN = 29;
    sbit  DACEN_bit at RCC_APB1ENR.B29;

sfr unsigned long   volatile RCC_APB2ENR          absolute 0x40023844;
    const register unsigned short int TIM1EN = 0;
    sbit  TIM1EN_bit at RCC_APB2ENR.B0;
    const register unsigned short int USART1EN = 4;
    sbit  USART1EN_bit at RCC_APB2ENR.B4;
    const register unsigned short int USART6EN = 5;
    sbit  USART6EN_bit at RCC_APB2ENR.B5;
    const register unsigned short int ADC1EN = 8;
    sbit  ADC1EN_bit at RCC_APB2ENR.B8;
    const register unsigned short int SPI1EN = 12;
    sbit  SPI1EN_bit at RCC_APB2ENR.B12;
    const register unsigned short int SYSCFGEN = 14;
    sbit  SYSCFGEN_bit at RCC_APB2ENR.B14;
    const register unsigned short int EXTITEN = 15;
    sbit  EXTITEN_bit at RCC_APB2ENR.B15;
    const register unsigned short int TIM9EN = 16;
    sbit  TIM9EN_bit at RCC_APB2ENR.B16;
    const register unsigned short int TIM11EN = 18;
    sbit  TIM11EN_bit at RCC_APB2ENR.B18;
    const register unsigned short int SPI5EN = 20;
    sbit  SPI5EN_bit at RCC_APB2ENR.B20;

sfr unsigned long   volatile RCC_AHB1LPENR        absolute 0x40023850;
    const register unsigned short int GPIOALPEN = 0;
    sbit  GPIOALPEN_bit at RCC_AHB1LPENR.B0;
    const register unsigned short int GPIOBLPEN = 1;
    sbit  GPIOBLPEN_bit at RCC_AHB1LPENR.B1;
    const register unsigned short int GPIOCLPEN = 2;
    sbit  GPIOCLPEN_bit at RCC_AHB1LPENR.B2;
    const register unsigned short int GPIOHLPEN = 7;
    sbit  GPIOHLPEN_bit at RCC_AHB1LPENR.B7;
    const register unsigned short int CRCLPEN = 12;
    sbit  CRCLPEN_bit at RCC_AHB1LPENR.B12;
    const register unsigned short int FLITFLPEN = 15;
    sbit  FLITFLPEN_bit at RCC_AHB1LPENR.B15;
    const register unsigned short int SRAM1LPEN = 16;
    sbit  SRAM1LPEN_bit at RCC_AHB1LPENR.B16;
    const register unsigned short int DMA1LPEN = 21;
    sbit  DMA1LPEN_bit at RCC_AHB1LPENR.B21;
    const register unsigned short int DMA2LPEN = 22;
    sbit  DMA2LPEN_bit at RCC_AHB1LPENR.B22;
    const register unsigned short int RNGLPEN = 31;
    sbit  RNGLPEN_bit at RCC_AHB1LPENR.B31;

sfr unsigned long   volatile RCC_APB1LPENR        absolute 0x40023860;
    const register unsigned short int TIM5LPEN = 3;
    sbit  TIM5LPEN_bit at RCC_APB1LPENR.B3;
    const register unsigned short int TIM6LPEN = 4;
    sbit  TIM6LPEN_bit at RCC_APB1LPENR.B4;
    const register unsigned short int LPTIM1LPEN = 9;
    sbit  LPTIM1LPEN_bit at RCC_APB1LPENR.B9;
    const register unsigned short int RTCAPBLPEN = 10;
    sbit  RTCAPBLPEN_bit at RCC_APB1LPENR.B10;
    const register unsigned short int WWDGLPEN = 11;
    sbit  WWDGLPEN_bit at RCC_APB1LPENR.B11;
    const register unsigned short int SPI2LPEN = 14;
    sbit  SPI2LPEN_bit at RCC_APB1LPENR.B14;
    const register unsigned short int USART2LPEN = 17;
    sbit  USART2LPEN_bit at RCC_APB1LPENR.B17;
    const register unsigned short int I2C1LPEN = 21;
    sbit  I2C1LPEN_bit at RCC_APB1LPENR.B21;
    const register unsigned short int I2C2LPEN = 22;
    sbit  I2C2LPEN_bit at RCC_APB1LPENR.B22;
    const register unsigned short int I2C4LPEN = 24;
    sbit  I2C4LPEN_bit at RCC_APB1LPENR.B24;
    const register unsigned short int PWRLPEN = 28;
    sbit  PWRLPEN_bit at RCC_APB1LPENR.B28;
    const register unsigned short int DACLPEN = 29;
    sbit  DACLPEN_bit at RCC_APB1LPENR.B29;

sfr unsigned long   volatile RCC_APB2LPENR        absolute 0x40023864;
    const register unsigned short int TIM1LPEN = 0;
    sbit  TIM1LPEN_bit at RCC_APB2LPENR.B0;
    const register unsigned short int USART1LPEN = 4;
    sbit  USART1LPEN_bit at RCC_APB2LPENR.B4;
    const register unsigned short int USART6LPEN = 5;
    sbit  USART6LPEN_bit at RCC_APB2LPENR.B5;
    const register unsigned short int ADC1LPEN = 8;
    sbit  ADC1LPEN_bit at RCC_APB2LPENR.B8;
    const register unsigned short int SDIOLPEN = 11;
    sbit  SDIOLPEN_bit at RCC_APB2LPENR.B11;
    const register unsigned short int SPI1LPEN = 12;
    sbit  SPI1LPEN_bit at RCC_APB2LPENR.B12;
    const register unsigned short int SYSCFGLPEN = 14;
    sbit  SYSCFGLPEN_bit at RCC_APB2LPENR.B14;
    const register unsigned short int EXTITLPEN = 15;
    sbit  EXTITLPEN_bit at RCC_APB2LPENR.B15;
    const register unsigned short int TIM9LPEN = 16;
    sbit  TIM9LPEN_bit at RCC_APB2LPENR.B16;
    const register unsigned short int TIM11LPEN = 18;
    sbit  TIM11LPEN_bit at RCC_APB2LPENR.B18;
    const register unsigned short int SPI5LPEN = 20;
    sbit  SPI5LPEN_bit at RCC_APB2LPENR.B20;

sfr unsigned long   volatile RCC_BDCR             absolute 0x40023870;
    const register unsigned short int BDRST = 16;
    sbit  BDRST_bit at RCC_BDCR.B16;
    const register unsigned short int RTCEN = 15;
    sbit  RTCEN_bit at RCC_BDCR.B15;
    const register unsigned short int RTCSEL1 = 9;
    sbit  RTCSEL1_bit at RCC_BDCR.B9;
    const register unsigned short int RTCSEL0 = 8;
    sbit  RTCSEL0_bit at RCC_BDCR.B8;
    const register unsigned short int LSEBYP = 2;
    sbit  LSEBYP_bit at RCC_BDCR.B2;
    const register unsigned short int LSERDY = 1;
    sbit  LSERDY_bit at RCC_BDCR.B1;
    const register unsigned short int LSEON = 0;
    sbit  LSEON_bit at RCC_BDCR.B0;

sfr unsigned long   volatile RCC_CSR              absolute 0x40023874;
    const register unsigned short int LPWRRSTF = 31;
    sbit  LPWRRSTF_bit at RCC_CSR.B31;
    const register unsigned short int WWDGRSTF = 30;
    sbit  WWDGRSTF_bit at RCC_CSR.B30;
    const register unsigned short int WDGRSTF = 29;
    sbit  WDGRSTF_bit at RCC_CSR.B29;
    const register unsigned short int SFTRSTF = 28;
    sbit  SFTRSTF_bit at RCC_CSR.B28;
    const register unsigned short int PORRSTF = 27;
    sbit  PORRSTF_bit at RCC_CSR.B27;
    const register unsigned short int PADRSTF = 26;
    sbit  PADRSTF_bit at RCC_CSR.B26;
    const register unsigned short int BORRSTF = 25;
    sbit  BORRSTF_bit at RCC_CSR.B25;
    const register unsigned short int RMVF = 24;
    sbit  RMVF_bit at RCC_CSR.B24;
    const register unsigned short int LSIRDY = 1;
    sbit  LSIRDY_bit at RCC_CSR.B1;
    const register unsigned short int LSION = 0;
    sbit  LSION_bit at RCC_CSR.B0;

sfr unsigned long   volatile RCC_SSCGR            absolute 0x40023880;
    const register unsigned short int SSCGEN = 31;
    sbit  SSCGEN_bit at RCC_SSCGR.B31;
    const register unsigned short int SPREADSEL = 30;
    sbit  SPREADSEL_bit at RCC_SSCGR.B30;
    const register unsigned short int INCSTEP0 = 13;
    sbit  INCSTEP0_bit at RCC_SSCGR.B13;
    const register unsigned short int INCSTEP1 = 14;
    sbit  INCSTEP1_bit at RCC_SSCGR.B14;
    const register unsigned short int INCSTEP2 = 15;
    sbit  INCSTEP2_bit at RCC_SSCGR.B15;
    const register unsigned short int INCSTEP3 = 16;
    sbit  INCSTEP3_bit at RCC_SSCGR.B16;
    const register unsigned short int INCSTEP4 = 17;
    sbit  INCSTEP4_bit at RCC_SSCGR.B17;
    const register unsigned short int INCSTEP5 = 18;
    sbit  INCSTEP5_bit at RCC_SSCGR.B18;
    const register unsigned short int INCSTEP6 = 19;
    sbit  INCSTEP6_bit at RCC_SSCGR.B19;
    const register unsigned short int INCSTEP7 = 20;
    sbit  INCSTEP7_bit at RCC_SSCGR.B20;
    const register unsigned short int INCSTEP8 = 21;
    sbit  INCSTEP8_bit at RCC_SSCGR.B21;
    const register unsigned short int INCSTEP9 = 22;
    sbit  INCSTEP9_bit at RCC_SSCGR.B22;
    const register unsigned short int INCSTEP10 = 23;
    sbit  INCSTEP10_bit at RCC_SSCGR.B23;
    const register unsigned short int INCSTEP11 = 24;
    sbit  INCSTEP11_bit at RCC_SSCGR.B24;
    const register unsigned short int INCSTEP12 = 25;
    sbit  INCSTEP12_bit at RCC_SSCGR.B25;
    const register unsigned short int INCSTEP13 = 26;
    sbit  INCSTEP13_bit at RCC_SSCGR.B26;
    const register unsigned short int INCSTEP14 = 27;
    sbit  INCSTEP14_bit at RCC_SSCGR.B27;
    const register unsigned short int MODPER0 = 0;
    sbit  MODPER0_bit at RCC_SSCGR.B0;
    const register unsigned short int MODPER1 = 1;
    sbit  MODPER1_bit at RCC_SSCGR.B1;
    const register unsigned short int MODPER2 = 2;
    sbit  MODPER2_bit at RCC_SSCGR.B2;
    const register unsigned short int MODPER3 = 3;
    sbit  MODPER3_bit at RCC_SSCGR.B3;
    const register unsigned short int MODPER4 = 4;
    sbit  MODPER4_bit at RCC_SSCGR.B4;
    const register unsigned short int MODPER5 = 5;
    sbit  MODPER5_bit at RCC_SSCGR.B5;
    const register unsigned short int MODPER6 = 6;
    sbit  MODPER6_bit at RCC_SSCGR.B6;
    const register unsigned short int MODPER7 = 7;
    sbit  MODPER7_bit at RCC_SSCGR.B7;
    const register unsigned short int MODPER8 = 8;
    sbit  MODPER8_bit at RCC_SSCGR.B8;
    const register unsigned short int MODPER9 = 9;
    sbit  MODPER9_bit at RCC_SSCGR.B9;
    const register unsigned short int MODPER10 = 10;
    sbit  MODPER10_bit at RCC_SSCGR.B10;
    const register unsigned short int MODPER11 = 11;
    sbit  MODPER11_bit at RCC_SSCGR.B11;
    const register unsigned short int MODPER12 = 12;
    sbit  MODPER12_bit at RCC_SSCGR.B12;

sfr unsigned long   volatile RCC_DCKCFGR          absolute 0x4002388C;
    const register unsigned short int TIMPRE = 24;
    sbit  TIMPRE_bit at RCC_DCKCFGR.B24;
    const register unsigned short int I2SSRC0 = 25;
    sbit  I2SSRC0_bit at RCC_DCKCFGR.B25;
    const register unsigned short int I2SSRC1 = 26;
    sbit  I2SSRC1_bit at RCC_DCKCFGR.B26;

sfr unsigned long   volatile RCC_DCKCFGR2         absolute 0x40023894;
    const register unsigned short int I2C4SEL0 = 22;
    sbit  I2C4SEL0_bit at RCC_DCKCFGR2.B22;
    const register unsigned short int I2C4SEL1 = 23;
    sbit  I2C4SEL1_bit at RCC_DCKCFGR2.B23;
    const register unsigned short int LPTIM1SEL0 = 30;
    sbit  LPTIM1SEL0_bit at RCC_DCKCFGR2.B30;
    const register unsigned short int LPTIM1SEL1 = 31;
    sbit  LPTIM1SEL1_bit at RCC_DCKCFGR2.B31;

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
    const register unsigned short int ALRAWF = 0;
    sbit  ALRAWF_bit at RTC_ISR.B0;
    const register unsigned short int ALRBWF = 1;
    sbit  ALRBWF_bit at RTC_ISR.B1;
    const register unsigned short int WUTWF = 2;
    sbit  WUTWF_bit at RTC_ISR.B2;
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
    const register unsigned short int ALRBF = 9;
    sbit  ALRBF_bit at RTC_ISR.B9;
    const register unsigned short int WUTF = 10;
    sbit  WUTF_bit at RTC_ISR.B10;
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
    const register unsigned short int TSINSEL = 17;
    sbit  TSINSEL_bit at RTC_TAFCR.B17;
    const register unsigned short int TAMP1INSEL = 16;
    sbit  TAMP1INSEL_bit at RTC_TAFCR.B16;
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
    const register unsigned short int TAMP2TRG = 4;
    sbit  TAMP2TRG_bit at RTC_TAFCR.B4;
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

sfr unsigned long   volatile SYSCFG_MEMRM         absolute 0x40013800;
    const register unsigned short int MEM_MODE0 = 0;
    sbit  MEM_MODE0_bit at SYSCFG_MEMRM.B0;
    const register unsigned short int MEM_MODE1 = 1;
    sbit  MEM_MODE1_bit at SYSCFG_MEMRM.B1;

sfr unsigned long   volatile SYSCFG_PMC           absolute 0x40013804;
    const register unsigned short int ADC1DC2 = 16;
    sbit  ADC1DC2_bit at SYSCFG_PMC.B16;

sfr unsigned long   volatile SYSCFG_EXTICR1       absolute 0x40013808;
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

sfr unsigned long   volatile SYSCFG_EXTICR2       absolute 0x4001380C;
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

sfr unsigned long   volatile SYSCFG_EXTICR3       absolute 0x40013810;
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

sfr unsigned long   volatile SYSCFG_EXTICR4       absolute 0x40013814;
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

sfr unsigned long   volatile SYSCFG_CMPCR         absolute 0x40013820;
    const register unsigned short int READY = 8;
    sbit  READY_bit at SYSCFG_CMPCR.B8;
    const register unsigned short int CMP_PD = 0;
    sbit  CMP_PD_bit at SYSCFG_CMPCR.B0;

sfr unsigned long   volatile SYSCFG_CFGR          absolute 0x4001382C;
    const register unsigned short int FMPI2C1_SCL = 0;
    sbit  FMPI2C1_SCL_bit at SYSCFG_CFGR.B0;
    const register unsigned short int FMPI2C1_SDA = 1;
    sbit  FMPI2C1_SDA_bit at SYSCFG_CFGR.B1;

sfr unsigned long   volatile TIM1_CR1             absolute 0x40010000;
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
    const register unsigned short int DIR_ = 4;
    sbit  DIR_bit at TIM1_CR1.B4;
    const register unsigned short int OPM = 3;
    sbit  OPM_bit at TIM1_CR1.B3;
    const register unsigned short int URS = 2;
    sbit  URS_bit at TIM1_CR1.B2;
    const register unsigned short int UDIS = 1;
    sbit  UDIS_bit at TIM1_CR1.B1;
    const register unsigned short int CEN = 0;
    sbit  CEN_bit at TIM1_CR1.B0;

sfr unsigned long   volatile TIM1_CR2             absolute 0x40010004;
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

sfr unsigned long   volatile TIM1_SMCR            absolute 0x40010008;
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

sfr unsigned long   volatile TIM1_DIER            absolute 0x4001000C;
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

sfr unsigned long   volatile TIM1_SR              absolute 0x40010010;
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

sfr unsigned long   volatile TIM1_EGR             absolute 0x40010014;
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

sfr unsigned long   volatile TIM1_CCMR1_Output    absolute 0x40010018;
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

sfr unsigned long   volatile TIM1_CCMR1_Input     absolute 0x40010018;
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

sfr unsigned long   volatile TIM1_CCMR2_Output    absolute 0x4001001C;
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

sfr unsigned long   volatile TIM1_CCMR2_Input     absolute 0x4001001C;
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

sfr unsigned long   volatile TIM1_CCER            absolute 0x40010020;
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

sfr unsigned long   volatile TIM1_CNT             absolute 0x40010024;
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

sfr unsigned long   volatile TIM1_PSC             absolute 0x40010028;
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

sfr unsigned long   volatile TIM1_ARR             absolute 0x4001002C;
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

sfr unsigned long   volatile TIM1_CCR1            absolute 0x40010034;
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

sfr unsigned long   volatile TIM1_CCR2            absolute 0x40010038;
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

sfr unsigned long   volatile TIM1_CCR3            absolute 0x4001003C;
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

sfr unsigned long   volatile TIM1_CCR4            absolute 0x40010040;
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

sfr unsigned long   volatile TIM1_DCR             absolute 0x40010048;
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

sfr unsigned long   volatile TIM1_DMAR            absolute 0x4001004C;
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

sfr unsigned long   volatile TIM1_RCR             absolute 0x40010030;
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

sfr unsigned long   volatile TIM1_BDTR            absolute 0x40010044;
    const register unsigned short int MOE = 15;
    sbit  MOE_bit at TIM1_BDTR.B15;
    const register unsigned short int AOE = 14;
    sbit  AOE_bit at TIM1_BDTR.B14;
    sbit  BKP_TIM1_BDTR_bit at TIM1_BDTR.B13;
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

sfr unsigned long   volatile TIM8_CR1             absolute 0x40010400;
    sbit  CKD0_TIM8_CR1_bit at TIM8_CR1.B8;
    sbit  CKD1_TIM8_CR1_bit at TIM8_CR1.B9;
    sbit  ARPE_TIM8_CR1_bit at TIM8_CR1.B7;
    sbit  CMS0_TIM8_CR1_bit at TIM8_CR1.B5;
    sbit  CMS1_TIM8_CR1_bit at TIM8_CR1.B6;
    sbit  DIR_TIM8_CR1_bit at TIM8_CR1.B4;
    sbit  OPM_TIM8_CR1_bit at TIM8_CR1.B3;
    sbit  URS_TIM8_CR1_bit at TIM8_CR1.B2;
    sbit  UDIS_TIM8_CR1_bit at TIM8_CR1.B1;
    sbit  CEN_TIM8_CR1_bit at TIM8_CR1.B0;

sfr unsigned long   volatile TIM8_CR2             absolute 0x40010404;
    sbit  OIS4_TIM8_CR2_bit at TIM8_CR2.B14;
    sbit  OIS3N_TIM8_CR2_bit at TIM8_CR2.B13;
    sbit  OIS3_TIM8_CR2_bit at TIM8_CR2.B12;
    sbit  OIS2N_TIM8_CR2_bit at TIM8_CR2.B11;
    sbit  OIS2_TIM8_CR2_bit at TIM8_CR2.B10;
    sbit  OIS1N_TIM8_CR2_bit at TIM8_CR2.B9;
    sbit  OIS1_TIM8_CR2_bit at TIM8_CR2.B8;
    sbit  TI1S_TIM8_CR2_bit at TIM8_CR2.B7;
    sbit  MMS0_TIM8_CR2_bit at TIM8_CR2.B4;
    sbit  MMS1_TIM8_CR2_bit at TIM8_CR2.B5;
    sbit  MMS2_TIM8_CR2_bit at TIM8_CR2.B6;
    sbit  CCDS_TIM8_CR2_bit at TIM8_CR2.B3;
    sbit  CCUS_TIM8_CR2_bit at TIM8_CR2.B2;
    sbit  CCPC_TIM8_CR2_bit at TIM8_CR2.B0;

sfr unsigned long   volatile TIM8_SMCR            absolute 0x40010408;
    sbit  ETP_TIM8_SMCR_bit at TIM8_SMCR.B15;
    sbit  ECE_TIM8_SMCR_bit at TIM8_SMCR.B14;
    sbit  ETPS0_TIM8_SMCR_bit at TIM8_SMCR.B12;
    sbit  ETPS1_TIM8_SMCR_bit at TIM8_SMCR.B13;
    sbit  ETF0_TIM8_SMCR_bit at TIM8_SMCR.B8;
    sbit  ETF1_TIM8_SMCR_bit at TIM8_SMCR.B9;
    sbit  ETF2_TIM8_SMCR_bit at TIM8_SMCR.B10;
    sbit  ETF3_TIM8_SMCR_bit at TIM8_SMCR.B11;
    sbit  MSM_TIM8_SMCR_bit at TIM8_SMCR.B7;
    sbit  TS0_TIM8_SMCR_bit at TIM8_SMCR.B4;
    sbit  TS1_TIM8_SMCR_bit at TIM8_SMCR.B5;
    sbit  TS2_TIM8_SMCR_bit at TIM8_SMCR.B6;
    sbit  SMS0_TIM8_SMCR_bit at TIM8_SMCR.B0;
    sbit  SMS1_TIM8_SMCR_bit at TIM8_SMCR.B1;
    sbit  SMS2_TIM8_SMCR_bit at TIM8_SMCR.B2;

sfr unsigned long   volatile TIM8_DIER            absolute 0x4001040C;
    sbit  TDE_TIM8_DIER_bit at TIM8_DIER.B14;
    sbit  COMDE_TIM8_DIER_bit at TIM8_DIER.B13;
    sbit  CC4DE_TIM8_DIER_bit at TIM8_DIER.B12;
    sbit  CC3DE_TIM8_DIER_bit at TIM8_DIER.B11;
    sbit  CC2DE_TIM8_DIER_bit at TIM8_DIER.B10;
    sbit  CC1DE_TIM8_DIER_bit at TIM8_DIER.B9;
    sbit  UDE_TIM8_DIER_bit at TIM8_DIER.B8;
    sbit  BIE_TIM8_DIER_bit at TIM8_DIER.B7;
    sbit  TIE_TIM8_DIER_bit at TIM8_DIER.B6;
    sbit  COMIE_TIM8_DIER_bit at TIM8_DIER.B5;
    sbit  CC4IE_TIM8_DIER_bit at TIM8_DIER.B4;
    sbit  CC3IE_TIM8_DIER_bit at TIM8_DIER.B3;
    sbit  CC2IE_TIM8_DIER_bit at TIM8_DIER.B2;
    sbit  CC1IE_TIM8_DIER_bit at TIM8_DIER.B1;
    sbit  UIE_TIM8_DIER_bit at TIM8_DIER.B0;

sfr unsigned long   volatile TIM8_SR              absolute 0x40010410;
    sbit  CC4OF_TIM8_SR_bit at TIM8_SR.B12;
    sbit  CC3OF_TIM8_SR_bit at TIM8_SR.B11;
    sbit  CC2OF_TIM8_SR_bit at TIM8_SR.B10;
    sbit  CC1OF_TIM8_SR_bit at TIM8_SR.B9;
    sbit  BIF_TIM8_SR_bit at TIM8_SR.B7;
    sbit  TIF_TIM8_SR_bit at TIM8_SR.B6;
    sbit  COMIF_TIM8_SR_bit at TIM8_SR.B5;
    sbit  CC4IF_TIM8_SR_bit at TIM8_SR.B4;
    sbit  CC3IF_TIM8_SR_bit at TIM8_SR.B3;
    sbit  CC2IF_TIM8_SR_bit at TIM8_SR.B2;
    sbit  CC1IF_TIM8_SR_bit at TIM8_SR.B1;
    sbit  UIF_TIM8_SR_bit at TIM8_SR.B0;

sfr unsigned long   volatile TIM8_EGR             absolute 0x40010414;
    sbit  BG_TIM8_EGR_bit at TIM8_EGR.B7;
    sbit  TG_TIM8_EGR_bit at TIM8_EGR.B6;
    sbit  COMG_TIM8_EGR_bit at TIM8_EGR.B5;
    sbit  CC4G_TIM8_EGR_bit at TIM8_EGR.B4;
    sbit  CC3G_TIM8_EGR_bit at TIM8_EGR.B3;
    sbit  CC2G_TIM8_EGR_bit at TIM8_EGR.B2;
    sbit  CC1G_TIM8_EGR_bit at TIM8_EGR.B1;
    sbit  UG_TIM8_EGR_bit at TIM8_EGR.B0;

sfr unsigned long   volatile TIM8_CCMR1_Output    absolute 0x40010418;
    sbit  OC2CE_TIM8_CCMR1_Output_bit at TIM8_CCMR1_Output.B15;
    sbit  OC2M0_TIM8_CCMR1_Output_bit at TIM8_CCMR1_Output.B12;
    sbit  OC2M1_TIM8_CCMR1_Output_bit at TIM8_CCMR1_Output.B13;
    sbit  OC2M2_TIM8_CCMR1_Output_bit at TIM8_CCMR1_Output.B14;
    sbit  OC2PE_TIM8_CCMR1_Output_bit at TIM8_CCMR1_Output.B11;
    sbit  OC2FE_TIM8_CCMR1_Output_bit at TIM8_CCMR1_Output.B10;
    sbit  CC2S0_TIM8_CCMR1_Output_bit at TIM8_CCMR1_Output.B8;
    sbit  CC2S1_TIM8_CCMR1_Output_bit at TIM8_CCMR1_Output.B9;
    sbit  OC1CE_TIM8_CCMR1_Output_bit at TIM8_CCMR1_Output.B7;
    sbit  OC1M0_TIM8_CCMR1_Output_bit at TIM8_CCMR1_Output.B4;
    sbit  OC1M1_TIM8_CCMR1_Output_bit at TIM8_CCMR1_Output.B5;
    sbit  OC1M2_TIM8_CCMR1_Output_bit at TIM8_CCMR1_Output.B6;
    sbit  OC1PE_TIM8_CCMR1_Output_bit at TIM8_CCMR1_Output.B3;
    sbit  OC1FE_TIM8_CCMR1_Output_bit at TIM8_CCMR1_Output.B2;
    sbit  CC1S0_TIM8_CCMR1_Output_bit at TIM8_CCMR1_Output.B0;
    sbit  CC1S1_TIM8_CCMR1_Output_bit at TIM8_CCMR1_Output.B1;

sfr unsigned long   volatile TIM8_CCMR1_Input     absolute 0x40010418;
    sbit  IC2F0_TIM8_CCMR1_Input_bit at TIM8_CCMR1_Input.B12;
    sbit  IC2F1_TIM8_CCMR1_Input_bit at TIM8_CCMR1_Input.B13;
    sbit  IC2F2_TIM8_CCMR1_Input_bit at TIM8_CCMR1_Input.B14;
    sbit  IC2F3_TIM8_CCMR1_Input_bit at TIM8_CCMR1_Input.B15;
    sbit  IC2PCS0_TIM8_CCMR1_Input_bit at TIM8_CCMR1_Input.B10;
    sbit  IC2PCS1_TIM8_CCMR1_Input_bit at TIM8_CCMR1_Input.B11;
    sbit  CC2S0_TIM8_CCMR1_Input_bit at TIM8_CCMR1_Input.B8;
    sbit  CC2S1_TIM8_CCMR1_Input_bit at TIM8_CCMR1_Input.B9;
    sbit  IC1F0_TIM8_CCMR1_Input_bit at TIM8_CCMR1_Input.B4;
    sbit  IC1F1_TIM8_CCMR1_Input_bit at TIM8_CCMR1_Input.B5;
    sbit  IC1F2_TIM8_CCMR1_Input_bit at TIM8_CCMR1_Input.B6;
    sbit  IC1F3_TIM8_CCMR1_Input_bit at TIM8_CCMR1_Input.B7;
    sbit  ICPCS0_TIM8_CCMR1_Input_bit at TIM8_CCMR1_Input.B2;
    sbit  ICPCS1_TIM8_CCMR1_Input_bit at TIM8_CCMR1_Input.B3;
    sbit  CC1S0_TIM8_CCMR1_Input_bit at TIM8_CCMR1_Input.B0;
    sbit  CC1S1_TIM8_CCMR1_Input_bit at TIM8_CCMR1_Input.B1;

sfr unsigned long   volatile TIM8_CCMR2_Output    absolute 0x4001041C;
    sbit  OC4CE_TIM8_CCMR2_Output_bit at TIM8_CCMR2_Output.B15;
    sbit  OC4M0_TIM8_CCMR2_Output_bit at TIM8_CCMR2_Output.B12;
    sbit  OC4M1_TIM8_CCMR2_Output_bit at TIM8_CCMR2_Output.B13;
    sbit  OC4M2_TIM8_CCMR2_Output_bit at TIM8_CCMR2_Output.B14;
    sbit  OC4PE_TIM8_CCMR2_Output_bit at TIM8_CCMR2_Output.B11;
    sbit  OC4FE_TIM8_CCMR2_Output_bit at TIM8_CCMR2_Output.B10;
    sbit  CC4S0_TIM8_CCMR2_Output_bit at TIM8_CCMR2_Output.B8;
    sbit  CC4S1_TIM8_CCMR2_Output_bit at TIM8_CCMR2_Output.B9;
    sbit  OC3CE_TIM8_CCMR2_Output_bit at TIM8_CCMR2_Output.B7;
    sbit  OC3M0_TIM8_CCMR2_Output_bit at TIM8_CCMR2_Output.B4;
    sbit  OC3M1_TIM8_CCMR2_Output_bit at TIM8_CCMR2_Output.B5;
    sbit  OC3M2_TIM8_CCMR2_Output_bit at TIM8_CCMR2_Output.B6;
    sbit  OC3PE_TIM8_CCMR2_Output_bit at TIM8_CCMR2_Output.B3;
    sbit  OC3FE_TIM8_CCMR2_Output_bit at TIM8_CCMR2_Output.B2;
    sbit  CC3S0_TIM8_CCMR2_Output_bit at TIM8_CCMR2_Output.B0;
    sbit  CC3S1_TIM8_CCMR2_Output_bit at TIM8_CCMR2_Output.B1;

sfr unsigned long   volatile TIM8_CCMR2_Input     absolute 0x4001041C;
    sbit  IC4F0_TIM8_CCMR2_Input_bit at TIM8_CCMR2_Input.B12;
    sbit  IC4F1_TIM8_CCMR2_Input_bit at TIM8_CCMR2_Input.B13;
    sbit  IC4F2_TIM8_CCMR2_Input_bit at TIM8_CCMR2_Input.B14;
    sbit  IC4F3_TIM8_CCMR2_Input_bit at TIM8_CCMR2_Input.B15;
    sbit  IC4PSC0_TIM8_CCMR2_Input_bit at TIM8_CCMR2_Input.B10;
    sbit  IC4PSC1_TIM8_CCMR2_Input_bit at TIM8_CCMR2_Input.B11;
    sbit  CC4S0_TIM8_CCMR2_Input_bit at TIM8_CCMR2_Input.B8;
    sbit  CC4S1_TIM8_CCMR2_Input_bit at TIM8_CCMR2_Input.B9;
    sbit  IC3F0_TIM8_CCMR2_Input_bit at TIM8_CCMR2_Input.B4;
    sbit  IC3F1_TIM8_CCMR2_Input_bit at TIM8_CCMR2_Input.B5;
    sbit  IC3F2_TIM8_CCMR2_Input_bit at TIM8_CCMR2_Input.B6;
    sbit  IC3F3_TIM8_CCMR2_Input_bit at TIM8_CCMR2_Input.B7;
    sbit  IC3PSC0_TIM8_CCMR2_Input_bit at TIM8_CCMR2_Input.B2;
    sbit  IC3PSC1_TIM8_CCMR2_Input_bit at TIM8_CCMR2_Input.B3;
    sbit  CC3S0_TIM8_CCMR2_Input_bit at TIM8_CCMR2_Input.B0;
    sbit  CC3S1_TIM8_CCMR2_Input_bit at TIM8_CCMR2_Input.B1;

sfr unsigned long   volatile TIM8_CCER            absolute 0x40010420;
    sbit  CC4P_TIM8_CCER_bit at TIM8_CCER.B13;
    sbit  CC4E_TIM8_CCER_bit at TIM8_CCER.B12;
    sbit  CC3NP_TIM8_CCER_bit at TIM8_CCER.B11;
    sbit  CC3NE_TIM8_CCER_bit at TIM8_CCER.B10;
    sbit  CC3P_TIM8_CCER_bit at TIM8_CCER.B9;
    sbit  CC3E_TIM8_CCER_bit at TIM8_CCER.B8;
    sbit  CC2NP_TIM8_CCER_bit at TIM8_CCER.B7;
    sbit  CC2NE_TIM8_CCER_bit at TIM8_CCER.B6;
    sbit  CC2P_TIM8_CCER_bit at TIM8_CCER.B5;
    sbit  CC2E_TIM8_CCER_bit at TIM8_CCER.B4;
    sbit  CC1NP_TIM8_CCER_bit at TIM8_CCER.B3;
    sbit  CC1NE_TIM8_CCER_bit at TIM8_CCER.B2;
    sbit  CC1P_TIM8_CCER_bit at TIM8_CCER.B1;
    sbit  CC1E_TIM8_CCER_bit at TIM8_CCER.B0;

sfr unsigned long   volatile TIM8_CNT             absolute 0x40010424;
    sbit  CNT0_TIM8_CNT_bit at TIM8_CNT.B0;
    sbit  CNT1_TIM8_CNT_bit at TIM8_CNT.B1;
    sbit  CNT2_TIM8_CNT_bit at TIM8_CNT.B2;
    sbit  CNT3_TIM8_CNT_bit at TIM8_CNT.B3;
    sbit  CNT4_TIM8_CNT_bit at TIM8_CNT.B4;
    sbit  CNT5_TIM8_CNT_bit at TIM8_CNT.B5;
    sbit  CNT6_TIM8_CNT_bit at TIM8_CNT.B6;
    sbit  CNT7_TIM8_CNT_bit at TIM8_CNT.B7;
    sbit  CNT8_TIM8_CNT_bit at TIM8_CNT.B8;
    sbit  CNT9_TIM8_CNT_bit at TIM8_CNT.B9;
    sbit  CNT10_TIM8_CNT_bit at TIM8_CNT.B10;
    sbit  CNT11_TIM8_CNT_bit at TIM8_CNT.B11;
    sbit  CNT12_TIM8_CNT_bit at TIM8_CNT.B12;
    sbit  CNT13_TIM8_CNT_bit at TIM8_CNT.B13;
    sbit  CNT14_TIM8_CNT_bit at TIM8_CNT.B14;
    sbit  CNT15_TIM8_CNT_bit at TIM8_CNT.B15;

sfr unsigned long   volatile TIM8_PSC             absolute 0x40010428;
    sbit  PSC0_TIM8_PSC_bit at TIM8_PSC.B0;
    sbit  PSC1_TIM8_PSC_bit at TIM8_PSC.B1;
    sbit  PSC2_TIM8_PSC_bit at TIM8_PSC.B2;
    sbit  PSC3_TIM8_PSC_bit at TIM8_PSC.B3;
    sbit  PSC4_TIM8_PSC_bit at TIM8_PSC.B4;
    sbit  PSC5_TIM8_PSC_bit at TIM8_PSC.B5;
    sbit  PSC6_TIM8_PSC_bit at TIM8_PSC.B6;
    sbit  PSC7_TIM8_PSC_bit at TIM8_PSC.B7;
    sbit  PSC8_TIM8_PSC_bit at TIM8_PSC.B8;
    sbit  PSC9_TIM8_PSC_bit at TIM8_PSC.B9;
    sbit  PSC10_TIM8_PSC_bit at TIM8_PSC.B10;
    sbit  PSC11_TIM8_PSC_bit at TIM8_PSC.B11;
    sbit  PSC12_TIM8_PSC_bit at TIM8_PSC.B12;
    sbit  PSC13_TIM8_PSC_bit at TIM8_PSC.B13;
    sbit  PSC14_TIM8_PSC_bit at TIM8_PSC.B14;
    sbit  PSC15_TIM8_PSC_bit at TIM8_PSC.B15;

sfr unsigned long   volatile TIM8_ARR             absolute 0x4001042C;
    sbit  ARR0_TIM8_ARR_bit at TIM8_ARR.B0;
    sbit  ARR1_TIM8_ARR_bit at TIM8_ARR.B1;
    sbit  ARR2_TIM8_ARR_bit at TIM8_ARR.B2;
    sbit  ARR3_TIM8_ARR_bit at TIM8_ARR.B3;
    sbit  ARR4_TIM8_ARR_bit at TIM8_ARR.B4;
    sbit  ARR5_TIM8_ARR_bit at TIM8_ARR.B5;
    sbit  ARR6_TIM8_ARR_bit at TIM8_ARR.B6;
    sbit  ARR7_TIM8_ARR_bit at TIM8_ARR.B7;
    sbit  ARR8_TIM8_ARR_bit at TIM8_ARR.B8;
    sbit  ARR9_TIM8_ARR_bit at TIM8_ARR.B9;
    sbit  ARR10_TIM8_ARR_bit at TIM8_ARR.B10;
    sbit  ARR11_TIM8_ARR_bit at TIM8_ARR.B11;
    sbit  ARR12_TIM8_ARR_bit at TIM8_ARR.B12;
    sbit  ARR13_TIM8_ARR_bit at TIM8_ARR.B13;
    sbit  ARR14_TIM8_ARR_bit at TIM8_ARR.B14;
    sbit  ARR15_TIM8_ARR_bit at TIM8_ARR.B15;

sfr unsigned long   volatile TIM8_CCR1            absolute 0x40010434;
    sbit  CCR10_TIM8_CCR1_bit at TIM8_CCR1.B0;
    sbit  CCR11_TIM8_CCR1_bit at TIM8_CCR1.B1;
    sbit  CCR12_TIM8_CCR1_bit at TIM8_CCR1.B2;
    sbit  CCR13_TIM8_CCR1_bit at TIM8_CCR1.B3;
    sbit  CCR14_TIM8_CCR1_bit at TIM8_CCR1.B4;
    sbit  CCR15_TIM8_CCR1_bit at TIM8_CCR1.B5;
    sbit  CCR16_TIM8_CCR1_bit at TIM8_CCR1.B6;
    sbit  CCR17_TIM8_CCR1_bit at TIM8_CCR1.B7;
    sbit  CCR18_TIM8_CCR1_bit at TIM8_CCR1.B8;
    sbit  CCR19_TIM8_CCR1_bit at TIM8_CCR1.B9;
    sbit  CCR110_TIM8_CCR1_bit at TIM8_CCR1.B10;
    sbit  CCR111_TIM8_CCR1_bit at TIM8_CCR1.B11;
    sbit  CCR112_TIM8_CCR1_bit at TIM8_CCR1.B12;
    sbit  CCR113_TIM8_CCR1_bit at TIM8_CCR1.B13;
    sbit  CCR114_TIM8_CCR1_bit at TIM8_CCR1.B14;
    sbit  CCR115_TIM8_CCR1_bit at TIM8_CCR1.B15;

sfr unsigned long   volatile TIM8_CCR2            absolute 0x40010438;
    sbit  CCR20_TIM8_CCR2_bit at TIM8_CCR2.B0;
    sbit  CCR21_TIM8_CCR2_bit at TIM8_CCR2.B1;
    sbit  CCR22_TIM8_CCR2_bit at TIM8_CCR2.B2;
    sbit  CCR23_TIM8_CCR2_bit at TIM8_CCR2.B3;
    sbit  CCR24_TIM8_CCR2_bit at TIM8_CCR2.B4;
    sbit  CCR25_TIM8_CCR2_bit at TIM8_CCR2.B5;
    sbit  CCR26_TIM8_CCR2_bit at TIM8_CCR2.B6;
    sbit  CCR27_TIM8_CCR2_bit at TIM8_CCR2.B7;
    sbit  CCR28_TIM8_CCR2_bit at TIM8_CCR2.B8;
    sbit  CCR29_TIM8_CCR2_bit at TIM8_CCR2.B9;
    sbit  CCR210_TIM8_CCR2_bit at TIM8_CCR2.B10;
    sbit  CCR211_TIM8_CCR2_bit at TIM8_CCR2.B11;
    sbit  CCR212_TIM8_CCR2_bit at TIM8_CCR2.B12;
    sbit  CCR213_TIM8_CCR2_bit at TIM8_CCR2.B13;
    sbit  CCR214_TIM8_CCR2_bit at TIM8_CCR2.B14;
    sbit  CCR215_TIM8_CCR2_bit at TIM8_CCR2.B15;

sfr unsigned long   volatile TIM8_CCR3            absolute 0x4001043C;
    sbit  CCR30_TIM8_CCR3_bit at TIM8_CCR3.B0;
    sbit  CCR31_TIM8_CCR3_bit at TIM8_CCR3.B1;
    sbit  CCR32_TIM8_CCR3_bit at TIM8_CCR3.B2;
    sbit  CCR33_TIM8_CCR3_bit at TIM8_CCR3.B3;
    sbit  CCR34_TIM8_CCR3_bit at TIM8_CCR3.B4;
    sbit  CCR35_TIM8_CCR3_bit at TIM8_CCR3.B5;
    sbit  CCR36_TIM8_CCR3_bit at TIM8_CCR3.B6;
    sbit  CCR37_TIM8_CCR3_bit at TIM8_CCR3.B7;
    sbit  CCR38_TIM8_CCR3_bit at TIM8_CCR3.B8;
    sbit  CCR39_TIM8_CCR3_bit at TIM8_CCR3.B9;
    sbit  CCR310_TIM8_CCR3_bit at TIM8_CCR3.B10;
    sbit  CCR311_TIM8_CCR3_bit at TIM8_CCR3.B11;
    sbit  CCR312_TIM8_CCR3_bit at TIM8_CCR3.B12;
    sbit  CCR313_TIM8_CCR3_bit at TIM8_CCR3.B13;
    sbit  CCR314_TIM8_CCR3_bit at TIM8_CCR3.B14;
    sbit  CCR315_TIM8_CCR3_bit at TIM8_CCR3.B15;

sfr unsigned long   volatile TIM8_CCR4            absolute 0x40010440;
    sbit  CCR40_TIM8_CCR4_bit at TIM8_CCR4.B0;
    sbit  CCR41_TIM8_CCR4_bit at TIM8_CCR4.B1;
    sbit  CCR42_TIM8_CCR4_bit at TIM8_CCR4.B2;
    sbit  CCR43_TIM8_CCR4_bit at TIM8_CCR4.B3;
    sbit  CCR44_TIM8_CCR4_bit at TIM8_CCR4.B4;
    sbit  CCR45_TIM8_CCR4_bit at TIM8_CCR4.B5;
    sbit  CCR46_TIM8_CCR4_bit at TIM8_CCR4.B6;
    sbit  CCR47_TIM8_CCR4_bit at TIM8_CCR4.B7;
    sbit  CCR48_TIM8_CCR4_bit at TIM8_CCR4.B8;
    sbit  CCR49_TIM8_CCR4_bit at TIM8_CCR4.B9;
    sbit  CCR410_TIM8_CCR4_bit at TIM8_CCR4.B10;
    sbit  CCR411_TIM8_CCR4_bit at TIM8_CCR4.B11;
    sbit  CCR412_TIM8_CCR4_bit at TIM8_CCR4.B12;
    sbit  CCR413_TIM8_CCR4_bit at TIM8_CCR4.B13;
    sbit  CCR414_TIM8_CCR4_bit at TIM8_CCR4.B14;
    sbit  CCR415_TIM8_CCR4_bit at TIM8_CCR4.B15;

sfr unsigned long   volatile TIM8_DCR             absolute 0x40010448;
    sbit  DBL0_TIM8_DCR_bit at TIM8_DCR.B8;
    sbit  DBL1_TIM8_DCR_bit at TIM8_DCR.B9;
    sbit  DBL2_TIM8_DCR_bit at TIM8_DCR.B10;
    sbit  DBL3_TIM8_DCR_bit at TIM8_DCR.B11;
    sbit  DBL4_TIM8_DCR_bit at TIM8_DCR.B12;
    sbit  DBA0_TIM8_DCR_bit at TIM8_DCR.B0;
    sbit  DBA1_TIM8_DCR_bit at TIM8_DCR.B1;
    sbit  DBA2_TIM8_DCR_bit at TIM8_DCR.B2;
    sbit  DBA3_TIM8_DCR_bit at TIM8_DCR.B3;
    sbit  DBA4_TIM8_DCR_bit at TIM8_DCR.B4;

sfr unsigned long   volatile TIM8_DMAR            absolute 0x4001044C;
    sbit  DMAB0_TIM8_DMAR_bit at TIM8_DMAR.B0;
    sbit  DMAB1_TIM8_DMAR_bit at TIM8_DMAR.B1;
    sbit  DMAB2_TIM8_DMAR_bit at TIM8_DMAR.B2;
    sbit  DMAB3_TIM8_DMAR_bit at TIM8_DMAR.B3;
    sbit  DMAB4_TIM8_DMAR_bit at TIM8_DMAR.B4;
    sbit  DMAB5_TIM8_DMAR_bit at TIM8_DMAR.B5;
    sbit  DMAB6_TIM8_DMAR_bit at TIM8_DMAR.B6;
    sbit  DMAB7_TIM8_DMAR_bit at TIM8_DMAR.B7;
    sbit  DMAB8_TIM8_DMAR_bit at TIM8_DMAR.B8;
    sbit  DMAB9_TIM8_DMAR_bit at TIM8_DMAR.B9;
    sbit  DMAB10_TIM8_DMAR_bit at TIM8_DMAR.B10;
    sbit  DMAB11_TIM8_DMAR_bit at TIM8_DMAR.B11;
    sbit  DMAB12_TIM8_DMAR_bit at TIM8_DMAR.B12;
    sbit  DMAB13_TIM8_DMAR_bit at TIM8_DMAR.B13;
    sbit  DMAB14_TIM8_DMAR_bit at TIM8_DMAR.B14;
    sbit  DMAB15_TIM8_DMAR_bit at TIM8_DMAR.B15;

sfr unsigned long   volatile TIM8_RCR             absolute 0x40010430;
    sbit  REP0_TIM8_RCR_bit at TIM8_RCR.B0;
    sbit  REP1_TIM8_RCR_bit at TIM8_RCR.B1;
    sbit  REP2_TIM8_RCR_bit at TIM8_RCR.B2;
    sbit  REP3_TIM8_RCR_bit at TIM8_RCR.B3;
    sbit  REP4_TIM8_RCR_bit at TIM8_RCR.B4;
    sbit  REP5_TIM8_RCR_bit at TIM8_RCR.B5;
    sbit  REP6_TIM8_RCR_bit at TIM8_RCR.B6;
    sbit  REP7_TIM8_RCR_bit at TIM8_RCR.B7;

sfr unsigned long   volatile TIM8_BDTR            absolute 0x40010444;
    sbit  MOE_TIM8_BDTR_bit at TIM8_BDTR.B15;
    sbit  AOE_TIM8_BDTR_bit at TIM8_BDTR.B14;
    sbit  BKP_TIM8_BDTR_bit at TIM8_BDTR.B13;
    sbit  BKE_TIM8_BDTR_bit at TIM8_BDTR.B12;
    sbit  OSSR_TIM8_BDTR_bit at TIM8_BDTR.B11;
    sbit  OSSI_TIM8_BDTR_bit at TIM8_BDTR.B10;
    sbit  LOCK0_TIM8_BDTR_bit at TIM8_BDTR.B8;
    sbit  LOCK1_TIM8_BDTR_bit at TIM8_BDTR.B9;
    sbit  DTG0_TIM8_BDTR_bit at TIM8_BDTR.B0;
    sbit  DTG1_TIM8_BDTR_bit at TIM8_BDTR.B1;
    sbit  DTG2_TIM8_BDTR_bit at TIM8_BDTR.B2;
    sbit  DTG3_TIM8_BDTR_bit at TIM8_BDTR.B3;
    sbit  DTG4_TIM8_BDTR_bit at TIM8_BDTR.B4;
    sbit  DTG5_TIM8_BDTR_bit at TIM8_BDTR.B5;
    sbit  DTG6_TIM8_BDTR_bit at TIM8_BDTR.B6;
    sbit  DTG7_TIM8_BDTR_bit at TIM8_BDTR.B7;

sfr unsigned long   volatile TIM11_CR1            absolute 0x40014800;
    sbit  CKD0_TIM11_CR1_bit at TIM11_CR1.B8;
    sbit  CKD1_TIM11_CR1_bit at TIM11_CR1.B9;
    sbit  ARPE_TIM11_CR1_bit at TIM11_CR1.B7;
    sbit  URS_TIM11_CR1_bit at TIM11_CR1.B2;
    sbit  UDIS_TIM11_CR1_bit at TIM11_CR1.B1;
    sbit  CEN_TIM11_CR1_bit at TIM11_CR1.B0;

sfr unsigned long   volatile TIM11_DIER           absolute 0x4001480C;
    sbit  CC1IE_TIM11_DIER_bit at TIM11_DIER.B1;
    sbit  UIE_TIM11_DIER_bit at TIM11_DIER.B0;

sfr unsigned long   volatile TIM11_SR             absolute 0x40014810;
    sbit  CC1OF_TIM11_SR_bit at TIM11_SR.B9;
    sbit  CC1IF_TIM11_SR_bit at TIM11_SR.B1;
    sbit  UIF_TIM11_SR_bit at TIM11_SR.B0;

sfr unsigned long   volatile TIM11_EGR            absolute 0x40014814;
    sbit  CC1G_TIM11_EGR_bit at TIM11_EGR.B1;
    sbit  UG_TIM11_EGR_bit at TIM11_EGR.B0;

sfr unsigned long   volatile TIM11_CCMR1_Output   absolute 0x40014818;
    sbit  OC1M0_TIM11_CCMR1_Output_bit at TIM11_CCMR1_Output.B4;
    sbit  OC1M1_TIM11_CCMR1_Output_bit at TIM11_CCMR1_Output.B5;
    sbit  OC1M2_TIM11_CCMR1_Output_bit at TIM11_CCMR1_Output.B6;
    sbit  OC1PE_TIM11_CCMR1_Output_bit at TIM11_CCMR1_Output.B3;
    sbit  OC1FE_TIM11_CCMR1_Output_bit at TIM11_CCMR1_Output.B2;
    sbit  CC1S0_TIM11_CCMR1_Output_bit at TIM11_CCMR1_Output.B0;
    sbit  CC1S1_TIM11_CCMR1_Output_bit at TIM11_CCMR1_Output.B1;

sfr unsigned long   volatile TIM11_CCMR1_Input    absolute 0x40014818;
    sbit  IC1F0_TIM11_CCMR1_Input_bit at TIM11_CCMR1_Input.B4;
    sbit  IC1F1_TIM11_CCMR1_Input_bit at TIM11_CCMR1_Input.B5;
    sbit  IC1F2_TIM11_CCMR1_Input_bit at TIM11_CCMR1_Input.B6;
    sbit  IC1F3_TIM11_CCMR1_Input_bit at TIM11_CCMR1_Input.B7;
    sbit  ICPCS0_TIM11_CCMR1_Input_bit at TIM11_CCMR1_Input.B2;
    sbit  ICPCS1_TIM11_CCMR1_Input_bit at TIM11_CCMR1_Input.B3;
    sbit  CC1S0_TIM11_CCMR1_Input_bit at TIM11_CCMR1_Input.B0;
    sbit  CC1S1_TIM11_CCMR1_Input_bit at TIM11_CCMR1_Input.B1;

sfr unsigned long   volatile TIM11_CCER           absolute 0x40014820;
    sbit  CC1NP_TIM11_CCER_bit at TIM11_CCER.B3;
    sbit  CC1P_TIM11_CCER_bit at TIM11_CCER.B1;
    sbit  CC1E_TIM11_CCER_bit at TIM11_CCER.B0;

sfr unsigned long   volatile TIM11_CNT            absolute 0x40014824;
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

sfr unsigned long   volatile TIM11_PSC            absolute 0x40014828;
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

sfr unsigned long   volatile TIM11_ARR            absolute 0x4001482C;
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

sfr unsigned long   volatile TIM11_CCR1           absolute 0x40014834;
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

sfr unsigned long   volatile TIM11_OR             absolute 0x40014850;
    const register unsigned short int RMP0 = 0;
    sbit  RMP0_bit at TIM11_OR.B0;
    const register unsigned short int RMP1 = 1;
    sbit  RMP1_bit at TIM11_OR.B1;

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
    const register unsigned short int O24CE = 15;
    sbit  O24CE_bit at TIM5_CCMR2_Output.B15;
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
    const register unsigned short int CC4NP = 15;
    sbit  CC4NP_bit at TIM5_CCER.B15;
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
    const register unsigned short int CNT_H0 = 16;
    sbit  CNT_H0_bit at TIM5_CNT.B16;
    const register unsigned short int CNT_H1 = 17;
    sbit  CNT_H1_bit at TIM5_CNT.B17;
    const register unsigned short int CNT_H2 = 18;
    sbit  CNT_H2_bit at TIM5_CNT.B18;
    const register unsigned short int CNT_H3 = 19;
    sbit  CNT_H3_bit at TIM5_CNT.B19;
    const register unsigned short int CNT_H4 = 20;
    sbit  CNT_H4_bit at TIM5_CNT.B20;
    const register unsigned short int CNT_H5 = 21;
    sbit  CNT_H5_bit at TIM5_CNT.B21;
    const register unsigned short int CNT_H6 = 22;
    sbit  CNT_H6_bit at TIM5_CNT.B22;
    const register unsigned short int CNT_H7 = 23;
    sbit  CNT_H7_bit at TIM5_CNT.B23;
    const register unsigned short int CNT_H8 = 24;
    sbit  CNT_H8_bit at TIM5_CNT.B24;
    const register unsigned short int CNT_H9 = 25;
    sbit  CNT_H9_bit at TIM5_CNT.B25;
    const register unsigned short int CNT_H10 = 26;
    sbit  CNT_H10_bit at TIM5_CNT.B26;
    const register unsigned short int CNT_H11 = 27;
    sbit  CNT_H11_bit at TIM5_CNT.B27;
    const register unsigned short int CNT_H12 = 28;
    sbit  CNT_H12_bit at TIM5_CNT.B28;
    const register unsigned short int CNT_H13 = 29;
    sbit  CNT_H13_bit at TIM5_CNT.B29;
    const register unsigned short int CNT_H14 = 30;
    sbit  CNT_H14_bit at TIM5_CNT.B30;
    const register unsigned short int CNT_H15 = 31;
    sbit  CNT_H15_bit at TIM5_CNT.B31;
    const register unsigned short int CNT_L0 = 0;
    sbit  CNT_L0_bit at TIM5_CNT.B0;
    const register unsigned short int CNT_L1 = 1;
    sbit  CNT_L1_bit at TIM5_CNT.B1;
    const register unsigned short int CNT_L2 = 2;
    sbit  CNT_L2_bit at TIM5_CNT.B2;
    const register unsigned short int CNT_L3 = 3;
    sbit  CNT_L3_bit at TIM5_CNT.B3;
    const register unsigned short int CNT_L4 = 4;
    sbit  CNT_L4_bit at TIM5_CNT.B4;
    const register unsigned short int CNT_L5 = 5;
    sbit  CNT_L5_bit at TIM5_CNT.B5;
    const register unsigned short int CNT_L6 = 6;
    sbit  CNT_L6_bit at TIM5_CNT.B6;
    const register unsigned short int CNT_L7 = 7;
    sbit  CNT_L7_bit at TIM5_CNT.B7;
    const register unsigned short int CNT_L8 = 8;
    sbit  CNT_L8_bit at TIM5_CNT.B8;
    const register unsigned short int CNT_L9 = 9;
    sbit  CNT_L9_bit at TIM5_CNT.B9;
    const register unsigned short int CNT_L10 = 10;
    sbit  CNT_L10_bit at TIM5_CNT.B10;
    const register unsigned short int CNT_L11 = 11;
    sbit  CNT_L11_bit at TIM5_CNT.B11;
    const register unsigned short int CNT_L12 = 12;
    sbit  CNT_L12_bit at TIM5_CNT.B12;
    const register unsigned short int CNT_L13 = 13;
    sbit  CNT_L13_bit at TIM5_CNT.B13;
    const register unsigned short int CNT_L14 = 14;
    sbit  CNT_L14_bit at TIM5_CNT.B14;
    const register unsigned short int CNT_L15 = 15;
    sbit  CNT_L15_bit at TIM5_CNT.B15;

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
    const register unsigned short int ARR_H0 = 16;
    sbit  ARR_H0_bit at TIM5_ARR.B16;
    const register unsigned short int ARR_H1 = 17;
    sbit  ARR_H1_bit at TIM5_ARR.B17;
    const register unsigned short int ARR_H2 = 18;
    sbit  ARR_H2_bit at TIM5_ARR.B18;
    const register unsigned short int ARR_H3 = 19;
    sbit  ARR_H3_bit at TIM5_ARR.B19;
    const register unsigned short int ARR_H4 = 20;
    sbit  ARR_H4_bit at TIM5_ARR.B20;
    const register unsigned short int ARR_H5 = 21;
    sbit  ARR_H5_bit at TIM5_ARR.B21;
    const register unsigned short int ARR_H6 = 22;
    sbit  ARR_H6_bit at TIM5_ARR.B22;
    const register unsigned short int ARR_H7 = 23;
    sbit  ARR_H7_bit at TIM5_ARR.B23;
    const register unsigned short int ARR_H8 = 24;
    sbit  ARR_H8_bit at TIM5_ARR.B24;
    const register unsigned short int ARR_H9 = 25;
    sbit  ARR_H9_bit at TIM5_ARR.B25;
    const register unsigned short int ARR_H10 = 26;
    sbit  ARR_H10_bit at TIM5_ARR.B26;
    const register unsigned short int ARR_H11 = 27;
    sbit  ARR_H11_bit at TIM5_ARR.B27;
    const register unsigned short int ARR_H12 = 28;
    sbit  ARR_H12_bit at TIM5_ARR.B28;
    const register unsigned short int ARR_H13 = 29;
    sbit  ARR_H13_bit at TIM5_ARR.B29;
    const register unsigned short int ARR_H14 = 30;
    sbit  ARR_H14_bit at TIM5_ARR.B30;
    const register unsigned short int ARR_H15 = 31;
    sbit  ARR_H15_bit at TIM5_ARR.B31;
    const register unsigned short int ARR_L0 = 0;
    sbit  ARR_L0_bit at TIM5_ARR.B0;
    const register unsigned short int ARR_L1 = 1;
    sbit  ARR_L1_bit at TIM5_ARR.B1;
    const register unsigned short int ARR_L2 = 2;
    sbit  ARR_L2_bit at TIM5_ARR.B2;
    const register unsigned short int ARR_L3 = 3;
    sbit  ARR_L3_bit at TIM5_ARR.B3;
    const register unsigned short int ARR_L4 = 4;
    sbit  ARR_L4_bit at TIM5_ARR.B4;
    const register unsigned short int ARR_L5 = 5;
    sbit  ARR_L5_bit at TIM5_ARR.B5;
    const register unsigned short int ARR_L6 = 6;
    sbit  ARR_L6_bit at TIM5_ARR.B6;
    const register unsigned short int ARR_L7 = 7;
    sbit  ARR_L7_bit at TIM5_ARR.B7;
    const register unsigned short int ARR_L8 = 8;
    sbit  ARR_L8_bit at TIM5_ARR.B8;
    const register unsigned short int ARR_L9 = 9;
    sbit  ARR_L9_bit at TIM5_ARR.B9;
    const register unsigned short int ARR_L10 = 10;
    sbit  ARR_L10_bit at TIM5_ARR.B10;
    const register unsigned short int ARR_L11 = 11;
    sbit  ARR_L11_bit at TIM5_ARR.B11;
    const register unsigned short int ARR_L12 = 12;
    sbit  ARR_L12_bit at TIM5_ARR.B12;
    const register unsigned short int ARR_L13 = 13;
    sbit  ARR_L13_bit at TIM5_ARR.B13;
    const register unsigned short int ARR_L14 = 14;
    sbit  ARR_L14_bit at TIM5_ARR.B14;
    const register unsigned short int ARR_L15 = 15;
    sbit  ARR_L15_bit at TIM5_ARR.B15;

sfr unsigned long   volatile TIM5_CCR1            absolute 0x40000C34;
    const register unsigned short int CCR1_H0 = 16;
    sbit  CCR1_H0_bit at TIM5_CCR1.B16;
    const register unsigned short int CCR1_H1 = 17;
    sbit  CCR1_H1_bit at TIM5_CCR1.B17;
    const register unsigned short int CCR1_H2 = 18;
    sbit  CCR1_H2_bit at TIM5_CCR1.B18;
    const register unsigned short int CCR1_H3 = 19;
    sbit  CCR1_H3_bit at TIM5_CCR1.B19;
    const register unsigned short int CCR1_H4 = 20;
    sbit  CCR1_H4_bit at TIM5_CCR1.B20;
    const register unsigned short int CCR1_H5 = 21;
    sbit  CCR1_H5_bit at TIM5_CCR1.B21;
    const register unsigned short int CCR1_H6 = 22;
    sbit  CCR1_H6_bit at TIM5_CCR1.B22;
    const register unsigned short int CCR1_H7 = 23;
    sbit  CCR1_H7_bit at TIM5_CCR1.B23;
    const register unsigned short int CCR1_H8 = 24;
    sbit  CCR1_H8_bit at TIM5_CCR1.B24;
    const register unsigned short int CCR1_H9 = 25;
    sbit  CCR1_H9_bit at TIM5_CCR1.B25;
    const register unsigned short int CCR1_H10 = 26;
    sbit  CCR1_H10_bit at TIM5_CCR1.B26;
    const register unsigned short int CCR1_H11 = 27;
    sbit  CCR1_H11_bit at TIM5_CCR1.B27;
    const register unsigned short int CCR1_H12 = 28;
    sbit  CCR1_H12_bit at TIM5_CCR1.B28;
    const register unsigned short int CCR1_H13 = 29;
    sbit  CCR1_H13_bit at TIM5_CCR1.B29;
    const register unsigned short int CCR1_H14 = 30;
    sbit  CCR1_H14_bit at TIM5_CCR1.B30;
    const register unsigned short int CCR1_H15 = 31;
    sbit  CCR1_H15_bit at TIM5_CCR1.B31;
    const register unsigned short int CCR1_L0 = 0;
    sbit  CCR1_L0_bit at TIM5_CCR1.B0;
    const register unsigned short int CCR1_L1 = 1;
    sbit  CCR1_L1_bit at TIM5_CCR1.B1;
    const register unsigned short int CCR1_L2 = 2;
    sbit  CCR1_L2_bit at TIM5_CCR1.B2;
    const register unsigned short int CCR1_L3 = 3;
    sbit  CCR1_L3_bit at TIM5_CCR1.B3;
    const register unsigned short int CCR1_L4 = 4;
    sbit  CCR1_L4_bit at TIM5_CCR1.B4;
    const register unsigned short int CCR1_L5 = 5;
    sbit  CCR1_L5_bit at TIM5_CCR1.B5;
    const register unsigned short int CCR1_L6 = 6;
    sbit  CCR1_L6_bit at TIM5_CCR1.B6;
    const register unsigned short int CCR1_L7 = 7;
    sbit  CCR1_L7_bit at TIM5_CCR1.B7;
    const register unsigned short int CCR1_L8 = 8;
    sbit  CCR1_L8_bit at TIM5_CCR1.B8;
    const register unsigned short int CCR1_L9 = 9;
    sbit  CCR1_L9_bit at TIM5_CCR1.B9;
    const register unsigned short int CCR1_L10 = 10;
    sbit  CCR1_L10_bit at TIM5_CCR1.B10;
    const register unsigned short int CCR1_L11 = 11;
    sbit  CCR1_L11_bit at TIM5_CCR1.B11;
    const register unsigned short int CCR1_L12 = 12;
    sbit  CCR1_L12_bit at TIM5_CCR1.B12;
    const register unsigned short int CCR1_L13 = 13;
    sbit  CCR1_L13_bit at TIM5_CCR1.B13;
    const register unsigned short int CCR1_L14 = 14;
    sbit  CCR1_L14_bit at TIM5_CCR1.B14;
    const register unsigned short int CCR1_L15 = 15;
    sbit  CCR1_L15_bit at TIM5_CCR1.B15;

sfr unsigned long   volatile TIM5_CCR2            absolute 0x40000C38;
    const register unsigned short int CCR2_H0 = 16;
    sbit  CCR2_H0_bit at TIM5_CCR2.B16;
    const register unsigned short int CCR2_H1 = 17;
    sbit  CCR2_H1_bit at TIM5_CCR2.B17;
    const register unsigned short int CCR2_H2 = 18;
    sbit  CCR2_H2_bit at TIM5_CCR2.B18;
    const register unsigned short int CCR2_H3 = 19;
    sbit  CCR2_H3_bit at TIM5_CCR2.B19;
    const register unsigned short int CCR2_H4 = 20;
    sbit  CCR2_H4_bit at TIM5_CCR2.B20;
    const register unsigned short int CCR2_H5 = 21;
    sbit  CCR2_H5_bit at TIM5_CCR2.B21;
    const register unsigned short int CCR2_H6 = 22;
    sbit  CCR2_H6_bit at TIM5_CCR2.B22;
    const register unsigned short int CCR2_H7 = 23;
    sbit  CCR2_H7_bit at TIM5_CCR2.B23;
    const register unsigned short int CCR2_H8 = 24;
    sbit  CCR2_H8_bit at TIM5_CCR2.B24;
    const register unsigned short int CCR2_H9 = 25;
    sbit  CCR2_H9_bit at TIM5_CCR2.B25;
    const register unsigned short int CCR2_H10 = 26;
    sbit  CCR2_H10_bit at TIM5_CCR2.B26;
    const register unsigned short int CCR2_H11 = 27;
    sbit  CCR2_H11_bit at TIM5_CCR2.B27;
    const register unsigned short int CCR2_H12 = 28;
    sbit  CCR2_H12_bit at TIM5_CCR2.B28;
    const register unsigned short int CCR2_H13 = 29;
    sbit  CCR2_H13_bit at TIM5_CCR2.B29;
    const register unsigned short int CCR2_H14 = 30;
    sbit  CCR2_H14_bit at TIM5_CCR2.B30;
    const register unsigned short int CCR2_H15 = 31;
    sbit  CCR2_H15_bit at TIM5_CCR2.B31;
    const register unsigned short int CCR2_L0 = 0;
    sbit  CCR2_L0_bit at TIM5_CCR2.B0;
    const register unsigned short int CCR2_L1 = 1;
    sbit  CCR2_L1_bit at TIM5_CCR2.B1;
    const register unsigned short int CCR2_L2 = 2;
    sbit  CCR2_L2_bit at TIM5_CCR2.B2;
    const register unsigned short int CCR2_L3 = 3;
    sbit  CCR2_L3_bit at TIM5_CCR2.B3;
    const register unsigned short int CCR2_L4 = 4;
    sbit  CCR2_L4_bit at TIM5_CCR2.B4;
    const register unsigned short int CCR2_L5 = 5;
    sbit  CCR2_L5_bit at TIM5_CCR2.B5;
    const register unsigned short int CCR2_L6 = 6;
    sbit  CCR2_L6_bit at TIM5_CCR2.B6;
    const register unsigned short int CCR2_L7 = 7;
    sbit  CCR2_L7_bit at TIM5_CCR2.B7;
    const register unsigned short int CCR2_L8 = 8;
    sbit  CCR2_L8_bit at TIM5_CCR2.B8;
    const register unsigned short int CCR2_L9 = 9;
    sbit  CCR2_L9_bit at TIM5_CCR2.B9;
    const register unsigned short int CCR2_L10 = 10;
    sbit  CCR2_L10_bit at TIM5_CCR2.B10;
    const register unsigned short int CCR2_L11 = 11;
    sbit  CCR2_L11_bit at TIM5_CCR2.B11;
    const register unsigned short int CCR2_L12 = 12;
    sbit  CCR2_L12_bit at TIM5_CCR2.B12;
    const register unsigned short int CCR2_L13 = 13;
    sbit  CCR2_L13_bit at TIM5_CCR2.B13;
    const register unsigned short int CCR2_L14 = 14;
    sbit  CCR2_L14_bit at TIM5_CCR2.B14;
    const register unsigned short int CCR2_L15 = 15;
    sbit  CCR2_L15_bit at TIM5_CCR2.B15;

sfr unsigned long   volatile TIM5_CCR3            absolute 0x40000C3C;
    const register unsigned short int CCR3_H0 = 16;
    sbit  CCR3_H0_bit at TIM5_CCR3.B16;
    const register unsigned short int CCR3_H1 = 17;
    sbit  CCR3_H1_bit at TIM5_CCR3.B17;
    const register unsigned short int CCR3_H2 = 18;
    sbit  CCR3_H2_bit at TIM5_CCR3.B18;
    const register unsigned short int CCR3_H3 = 19;
    sbit  CCR3_H3_bit at TIM5_CCR3.B19;
    const register unsigned short int CCR3_H4 = 20;
    sbit  CCR3_H4_bit at TIM5_CCR3.B20;
    const register unsigned short int CCR3_H5 = 21;
    sbit  CCR3_H5_bit at TIM5_CCR3.B21;
    const register unsigned short int CCR3_H6 = 22;
    sbit  CCR3_H6_bit at TIM5_CCR3.B22;
    const register unsigned short int CCR3_H7 = 23;
    sbit  CCR3_H7_bit at TIM5_CCR3.B23;
    const register unsigned short int CCR3_H8 = 24;
    sbit  CCR3_H8_bit at TIM5_CCR3.B24;
    const register unsigned short int CCR3_H9 = 25;
    sbit  CCR3_H9_bit at TIM5_CCR3.B25;
    const register unsigned short int CCR3_H10 = 26;
    sbit  CCR3_H10_bit at TIM5_CCR3.B26;
    const register unsigned short int CCR3_H11 = 27;
    sbit  CCR3_H11_bit at TIM5_CCR3.B27;
    const register unsigned short int CCR3_H12 = 28;
    sbit  CCR3_H12_bit at TIM5_CCR3.B28;
    const register unsigned short int CCR3_H13 = 29;
    sbit  CCR3_H13_bit at TIM5_CCR3.B29;
    const register unsigned short int CCR3_H14 = 30;
    sbit  CCR3_H14_bit at TIM5_CCR3.B30;
    const register unsigned short int CCR3_H15 = 31;
    sbit  CCR3_H15_bit at TIM5_CCR3.B31;
    const register unsigned short int CCR3_L0 = 0;
    sbit  CCR3_L0_bit at TIM5_CCR3.B0;
    const register unsigned short int CCR3_L1 = 1;
    sbit  CCR3_L1_bit at TIM5_CCR3.B1;
    const register unsigned short int CCR3_L2 = 2;
    sbit  CCR3_L2_bit at TIM5_CCR3.B2;
    const register unsigned short int CCR3_L3 = 3;
    sbit  CCR3_L3_bit at TIM5_CCR3.B3;
    const register unsigned short int CCR3_L4 = 4;
    sbit  CCR3_L4_bit at TIM5_CCR3.B4;
    const register unsigned short int CCR3_L5 = 5;
    sbit  CCR3_L5_bit at TIM5_CCR3.B5;
    const register unsigned short int CCR3_L6 = 6;
    sbit  CCR3_L6_bit at TIM5_CCR3.B6;
    const register unsigned short int CCR3_L7 = 7;
    sbit  CCR3_L7_bit at TIM5_CCR3.B7;
    const register unsigned short int CCR3_L8 = 8;
    sbit  CCR3_L8_bit at TIM5_CCR3.B8;
    const register unsigned short int CCR3_L9 = 9;
    sbit  CCR3_L9_bit at TIM5_CCR3.B9;
    const register unsigned short int CCR3_L10 = 10;
    sbit  CCR3_L10_bit at TIM5_CCR3.B10;
    const register unsigned short int CCR3_L11 = 11;
    sbit  CCR3_L11_bit at TIM5_CCR3.B11;
    const register unsigned short int CCR3_L12 = 12;
    sbit  CCR3_L12_bit at TIM5_CCR3.B12;
    const register unsigned short int CCR3_L13 = 13;
    sbit  CCR3_L13_bit at TIM5_CCR3.B13;
    const register unsigned short int CCR3_L14 = 14;
    sbit  CCR3_L14_bit at TIM5_CCR3.B14;
    const register unsigned short int CCR3_L15 = 15;
    sbit  CCR3_L15_bit at TIM5_CCR3.B15;

sfr unsigned long   volatile TIM5_CCR4            absolute 0x40000C40;
    const register unsigned short int CCR4_H0 = 16;
    sbit  CCR4_H0_bit at TIM5_CCR4.B16;
    const register unsigned short int CCR4_H1 = 17;
    sbit  CCR4_H1_bit at TIM5_CCR4.B17;
    const register unsigned short int CCR4_H2 = 18;
    sbit  CCR4_H2_bit at TIM5_CCR4.B18;
    const register unsigned short int CCR4_H3 = 19;
    sbit  CCR4_H3_bit at TIM5_CCR4.B19;
    const register unsigned short int CCR4_H4 = 20;
    sbit  CCR4_H4_bit at TIM5_CCR4.B20;
    const register unsigned short int CCR4_H5 = 21;
    sbit  CCR4_H5_bit at TIM5_CCR4.B21;
    const register unsigned short int CCR4_H6 = 22;
    sbit  CCR4_H6_bit at TIM5_CCR4.B22;
    const register unsigned short int CCR4_H7 = 23;
    sbit  CCR4_H7_bit at TIM5_CCR4.B23;
    const register unsigned short int CCR4_H8 = 24;
    sbit  CCR4_H8_bit at TIM5_CCR4.B24;
    const register unsigned short int CCR4_H9 = 25;
    sbit  CCR4_H9_bit at TIM5_CCR4.B25;
    const register unsigned short int CCR4_H10 = 26;
    sbit  CCR4_H10_bit at TIM5_CCR4.B26;
    const register unsigned short int CCR4_H11 = 27;
    sbit  CCR4_H11_bit at TIM5_CCR4.B27;
    const register unsigned short int CCR4_H12 = 28;
    sbit  CCR4_H12_bit at TIM5_CCR4.B28;
    const register unsigned short int CCR4_H13 = 29;
    sbit  CCR4_H13_bit at TIM5_CCR4.B29;
    const register unsigned short int CCR4_H14 = 30;
    sbit  CCR4_H14_bit at TIM5_CCR4.B30;
    const register unsigned short int CCR4_H15 = 31;
    sbit  CCR4_H15_bit at TIM5_CCR4.B31;
    const register unsigned short int CCR4_L0 = 0;
    sbit  CCR4_L0_bit at TIM5_CCR4.B0;
    const register unsigned short int CCR4_L1 = 1;
    sbit  CCR4_L1_bit at TIM5_CCR4.B1;
    const register unsigned short int CCR4_L2 = 2;
    sbit  CCR4_L2_bit at TIM5_CCR4.B2;
    const register unsigned short int CCR4_L3 = 3;
    sbit  CCR4_L3_bit at TIM5_CCR4.B3;
    const register unsigned short int CCR4_L4 = 4;
    sbit  CCR4_L4_bit at TIM5_CCR4.B4;
    const register unsigned short int CCR4_L5 = 5;
    sbit  CCR4_L5_bit at TIM5_CCR4.B5;
    const register unsigned short int CCR4_L6 = 6;
    sbit  CCR4_L6_bit at TIM5_CCR4.B6;
    const register unsigned short int CCR4_L7 = 7;
    sbit  CCR4_L7_bit at TIM5_CCR4.B7;
    const register unsigned short int CCR4_L8 = 8;
    sbit  CCR4_L8_bit at TIM5_CCR4.B8;
    const register unsigned short int CCR4_L9 = 9;
    sbit  CCR4_L9_bit at TIM5_CCR4.B9;
    const register unsigned short int CCR4_L10 = 10;
    sbit  CCR4_L10_bit at TIM5_CCR4.B10;
    const register unsigned short int CCR4_L11 = 11;
    sbit  CCR4_L11_bit at TIM5_CCR4.B11;
    const register unsigned short int CCR4_L12 = 12;
    sbit  CCR4_L12_bit at TIM5_CCR4.B12;
    const register unsigned short int CCR4_L13 = 13;
    sbit  CCR4_L13_bit at TIM5_CCR4.B13;
    const register unsigned short int CCR4_L14 = 14;
    sbit  CCR4_L14_bit at TIM5_CCR4.B14;
    const register unsigned short int CCR4_L15 = 15;
    sbit  CCR4_L15_bit at TIM5_CCR4.B15;

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

sfr unsigned long   volatile TIM5_OR              absolute 0x40000C50;
    const register unsigned short int IT4_RMP0 = 6;
    sbit  IT4_RMP0_bit at TIM5_OR.B6;
    const register unsigned short int IT4_RMP1 = 7;
    sbit  IT4_RMP1_bit at TIM5_OR.B7;

sfr unsigned long   volatile TIM9_CR1             absolute 0x40014000;
    sbit  CKD0_TIM9_CR1_bit at TIM9_CR1.B8;
    sbit  CKD1_TIM9_CR1_bit at TIM9_CR1.B9;
    sbit  ARPE_TIM9_CR1_bit at TIM9_CR1.B7;
    sbit  OPM_TIM9_CR1_bit at TIM9_CR1.B3;
    sbit  URS_TIM9_CR1_bit at TIM9_CR1.B2;
    sbit  UDIS_TIM9_CR1_bit at TIM9_CR1.B1;
    sbit  CEN_TIM9_CR1_bit at TIM9_CR1.B0;

sfr unsigned long   volatile TIM9_CR2             absolute 0x40014004;
    sbit  MMS0_TIM9_CR2_bit at TIM9_CR2.B4;
    sbit  MMS1_TIM9_CR2_bit at TIM9_CR2.B5;
    sbit  MMS2_TIM9_CR2_bit at TIM9_CR2.B6;

sfr unsigned long   volatile TIM9_SMCR            absolute 0x40014008;
    sbit  MSM_TIM9_SMCR_bit at TIM9_SMCR.B7;
    sbit  TS0_TIM9_SMCR_bit at TIM9_SMCR.B4;
    sbit  TS1_TIM9_SMCR_bit at TIM9_SMCR.B5;
    sbit  TS2_TIM9_SMCR_bit at TIM9_SMCR.B6;
    sbit  SMS0_TIM9_SMCR_bit at TIM9_SMCR.B0;
    sbit  SMS1_TIM9_SMCR_bit at TIM9_SMCR.B1;
    sbit  SMS2_TIM9_SMCR_bit at TIM9_SMCR.B2;

sfr unsigned long   volatile TIM9_DIER            absolute 0x4001400C;
    sbit  TIE_TIM9_DIER_bit at TIM9_DIER.B6;
    sbit  CC2IE_TIM9_DIER_bit at TIM9_DIER.B2;
    sbit  CC1IE_TIM9_DIER_bit at TIM9_DIER.B1;
    sbit  UIE_TIM9_DIER_bit at TIM9_DIER.B0;

sfr unsigned long   volatile TIM9_SR              absolute 0x40014010;
    sbit  CC2OF_TIM9_SR_bit at TIM9_SR.B10;
    sbit  CC1OF_TIM9_SR_bit at TIM9_SR.B9;
    sbit  TIF_TIM9_SR_bit at TIM9_SR.B6;
    sbit  CC2IF_TIM9_SR_bit at TIM9_SR.B2;
    sbit  CC1IF_TIM9_SR_bit at TIM9_SR.B1;
    sbit  UIF_TIM9_SR_bit at TIM9_SR.B0;

sfr unsigned long   volatile TIM9_EGR             absolute 0x40014014;
    sbit  TG_TIM9_EGR_bit at TIM9_EGR.B6;
    sbit  CC2G_TIM9_EGR_bit at TIM9_EGR.B2;
    sbit  CC1G_TIM9_EGR_bit at TIM9_EGR.B1;
    sbit  UG_TIM9_EGR_bit at TIM9_EGR.B0;

sfr unsigned long   volatile TIM9_CCMR1_Output    absolute 0x40014018;
    sbit  OC2M0_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B12;
    sbit  OC2M1_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B13;
    sbit  OC2M2_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B14;
    sbit  OC2PE_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B11;
    sbit  OC2FE_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B10;
    sbit  CC2S0_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B8;
    sbit  CC2S1_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B9;
    sbit  OC1M0_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B4;
    sbit  OC1M1_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B5;
    sbit  OC1M2_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B6;
    sbit  OC1PE_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B3;
    sbit  OC1FE_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B2;
    sbit  CC1S0_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B0;
    sbit  CC1S1_TIM9_CCMR1_Output_bit at TIM9_CCMR1_Output.B1;

sfr unsigned long   volatile TIM9_CCMR1_Input     absolute 0x40014018;
    sbit  IC2F0_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B12;
    sbit  IC2F1_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B13;
    sbit  IC2F2_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B14;
    sbit  IC2PCS0_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B10;
    sbit  IC2PCS1_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B11;
    sbit  CC2S0_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B8;
    sbit  CC2S1_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B9;
    sbit  IC1F0_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B4;
    sbit  IC1F1_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B5;
    sbit  IC1F2_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B6;
    sbit  ICPCS0_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B2;
    sbit  ICPCS1_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B3;
    sbit  CC1S0_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B0;
    sbit  CC1S1_TIM9_CCMR1_Input_bit at TIM9_CCMR1_Input.B1;

sfr unsigned long   volatile TIM9_CCER            absolute 0x40014020;
    sbit  CC2NP_TIM9_CCER_bit at TIM9_CCER.B7;
    sbit  CC2P_TIM9_CCER_bit at TIM9_CCER.B5;
    sbit  CC2E_TIM9_CCER_bit at TIM9_CCER.B4;
    sbit  CC1NP_TIM9_CCER_bit at TIM9_CCER.B3;
    sbit  CC1P_TIM9_CCER_bit at TIM9_CCER.B1;
    sbit  CC1E_TIM9_CCER_bit at TIM9_CCER.B0;

sfr unsigned long   volatile TIM9_CNT             absolute 0x40014024;
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

sfr unsigned long   volatile TIM9_PSC             absolute 0x40014028;
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

sfr unsigned long   volatile TIM9_ARR             absolute 0x4001402C;
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

sfr unsigned long   volatile TIM9_CCR1            absolute 0x40014034;
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

sfr unsigned long   volatile TIM9_CCR2            absolute 0x40014038;
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

sfr unsigned long   volatile USART1_SR            absolute 0x40011000;
    const register unsigned short int CTS = 9;
    sbit  CTS_bit at USART1_SR.B9;
    const register unsigned short int LBD = 8;
    sbit  LBD_bit at USART1_SR.B8;
    const register unsigned short int TXE = 7;
    sbit  TXE_bit at USART1_SR.B7;
    const register unsigned short int TC = 6;
    sbit  TC_bit at USART1_SR.B6;
    const register unsigned short int RXNE = 5;
    sbit  RXNE_bit at USART1_SR.B5;
    const register unsigned short int IDLE = 4;
    sbit  IDLE_bit at USART1_SR.B4;
    const register unsigned short int ORE = 3;
    sbit  ORE_bit at USART1_SR.B3;
    const register unsigned short int NF = 2;
    sbit  NF_bit at USART1_SR.B2;
    const register unsigned short int FE = 1;
    sbit  FE_bit at USART1_SR.B1;
    const register unsigned short int PE = 0;
    sbit  PE_bit at USART1_SR.B0;

sfr unsigned long   volatile USART1_DR            absolute 0x40011004;
    sbit  DR0_USART1_DR_bit at USART1_DR.B0;
    sbit  DR1_USART1_DR_bit at USART1_DR.B1;
    sbit  DR2_USART1_DR_bit at USART1_DR.B2;
    sbit  DR3_USART1_DR_bit at USART1_DR.B3;
    sbit  DR4_USART1_DR_bit at USART1_DR.B4;
    sbit  DR5_USART1_DR_bit at USART1_DR.B5;
    sbit  DR6_USART1_DR_bit at USART1_DR.B6;
    sbit  DR7_USART1_DR_bit at USART1_DR.B7;
    sbit  DR8_USART1_DR_bit at USART1_DR.B8;

sfr unsigned long   volatile USART1_BRR           absolute 0x40011008;
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

sfr unsigned long   volatile USART1_CR1           absolute 0x4001100C;
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
    const register unsigned short int TXEIE = 7;
    sbit  TXEIE_bit at USART1_CR1.B7;
    const register unsigned short int TCIE = 6;
    sbit  TCIE_bit at USART1_CR1.B6;
    const register unsigned short int RXNEIE = 5;
    sbit  RXNEIE_bit at USART1_CR1.B5;
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

sfr unsigned long   volatile USART1_CR2           absolute 0x40011010;
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
    const register unsigned short int ADD0 = 0;
    sbit  ADD0_bit at USART1_CR2.B0;
    const register unsigned short int ADD1 = 1;
    sbit  ADD1_bit at USART1_CR2.B1;
    const register unsigned short int ADD2 = 2;
    sbit  ADD2_bit at USART1_CR2.B2;
    const register unsigned short int ADD3 = 3;
    sbit  ADD3_bit at USART1_CR2.B3;

sfr unsigned long   volatile USART1_CR3           absolute 0x40011014;
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

sfr unsigned long   volatile USART1_GTPR          absolute 0x40011018;
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

sfr unsigned long   volatile USART6_SR            absolute 0x40011400;
    sbit  CTS_USART6_SR_bit at USART6_SR.B9;
    sbit  LBD_USART6_SR_bit at USART6_SR.B8;
    sbit  TXE_USART6_SR_bit at USART6_SR.B7;
    sbit  TC_USART6_SR_bit at USART6_SR.B6;
    sbit  RXNE_USART6_SR_bit at USART6_SR.B5;
    sbit  IDLE_USART6_SR_bit at USART6_SR.B4;
    sbit  ORE_USART6_SR_bit at USART6_SR.B3;
    sbit  NF_USART6_SR_bit at USART6_SR.B2;
    sbit  FE_USART6_SR_bit at USART6_SR.B1;
    sbit  PE_USART6_SR_bit at USART6_SR.B0;

sfr unsigned long   volatile USART6_DR            absolute 0x40011404;
    sbit  DR0_USART6_DR_bit at USART6_DR.B0;
    sbit  DR1_USART6_DR_bit at USART6_DR.B1;
    sbit  DR2_USART6_DR_bit at USART6_DR.B2;
    sbit  DR3_USART6_DR_bit at USART6_DR.B3;
    sbit  DR4_USART6_DR_bit at USART6_DR.B4;
    sbit  DR5_USART6_DR_bit at USART6_DR.B5;
    sbit  DR6_USART6_DR_bit at USART6_DR.B6;
    sbit  DR7_USART6_DR_bit at USART6_DR.B7;
    sbit  DR8_USART6_DR_bit at USART6_DR.B8;

sfr unsigned long   volatile USART6_BRR           absolute 0x40011408;
    sbit  DIV_Mantissa0_USART6_BRR_bit at USART6_BRR.B4;
    sbit  DIV_Mantissa1_USART6_BRR_bit at USART6_BRR.B5;
    sbit  DIV_Mantissa2_USART6_BRR_bit at USART6_BRR.B6;
    sbit  DIV_Mantissa3_USART6_BRR_bit at USART6_BRR.B7;
    sbit  DIV_Mantissa4_USART6_BRR_bit at USART6_BRR.B8;
    sbit  DIV_Mantissa5_USART6_BRR_bit at USART6_BRR.B9;
    sbit  DIV_Mantissa6_USART6_BRR_bit at USART6_BRR.B10;
    sbit  DIV_Mantissa7_USART6_BRR_bit at USART6_BRR.B11;
    sbit  DIV_Mantissa8_USART6_BRR_bit at USART6_BRR.B12;
    sbit  DIV_Mantissa9_USART6_BRR_bit at USART6_BRR.B13;
    sbit  DIV_Mantissa10_USART6_BRR_bit at USART6_BRR.B14;
    sbit  DIV_Mantissa11_USART6_BRR_bit at USART6_BRR.B15;
    sbit  DIV_Fraction0_USART6_BRR_bit at USART6_BRR.B0;
    sbit  DIV_Fraction1_USART6_BRR_bit at USART6_BRR.B1;
    sbit  DIV_Fraction2_USART6_BRR_bit at USART6_BRR.B2;
    sbit  DIV_Fraction3_USART6_BRR_bit at USART6_BRR.B3;

sfr unsigned long   volatile USART6_CR1           absolute 0x4001140C;
    sbit  OVER8_USART6_CR1_bit at USART6_CR1.B15;
    sbit  UE_USART6_CR1_bit at USART6_CR1.B13;
    sbit  M_USART6_CR1_bit at USART6_CR1.B12;
    sbit  WAKE_USART6_CR1_bit at USART6_CR1.B11;
    sbit  PCE_USART6_CR1_bit at USART6_CR1.B10;
    sbit  PS_USART6_CR1_bit at USART6_CR1.B9;
    sbit  PEIE_USART6_CR1_bit at USART6_CR1.B8;
    sbit  TXEIE_USART6_CR1_bit at USART6_CR1.B7;
    sbit  TCIE_USART6_CR1_bit at USART6_CR1.B6;
    sbit  RXNEIE_USART6_CR1_bit at USART6_CR1.B5;
    sbit  IDLEIE_USART6_CR1_bit at USART6_CR1.B4;
    sbit  TE_USART6_CR1_bit at USART6_CR1.B3;
    sbit  RE_USART6_CR1_bit at USART6_CR1.B2;
    sbit  RWU_USART6_CR1_bit at USART6_CR1.B1;
    sbit  SBK_USART6_CR1_bit at USART6_CR1.B0;

sfr unsigned long   volatile USART6_CR2           absolute 0x40011410;
    sbit  LINEN_USART6_CR2_bit at USART6_CR2.B14;
    sbit  STOP0_USART6_CR2_bit at USART6_CR2.B12;
    sbit  STOP1_USART6_CR2_bit at USART6_CR2.B13;
    sbit  CLKEN_USART6_CR2_bit at USART6_CR2.B11;
    sbit  CPOL_USART6_CR2_bit at USART6_CR2.B10;
    sbit  CPHA_USART6_CR2_bit at USART6_CR2.B9;
    sbit  LBCL_USART6_CR2_bit at USART6_CR2.B8;
    sbit  LBDIE_USART6_CR2_bit at USART6_CR2.B6;
    sbit  LBDL_USART6_CR2_bit at USART6_CR2.B5;
    sbit  ADD0_USART6_CR2_bit at USART6_CR2.B0;
    sbit  ADD1_USART6_CR2_bit at USART6_CR2.B1;
    sbit  ADD2_USART6_CR2_bit at USART6_CR2.B2;
    sbit  ADD3_USART6_CR2_bit at USART6_CR2.B3;

sfr unsigned long   volatile USART6_CR3           absolute 0x40011414;
    sbit  ONEBIT_USART6_CR3_bit at USART6_CR3.B11;
    sbit  CTSIE_USART6_CR3_bit at USART6_CR3.B10;
    sbit  CTSE_USART6_CR3_bit at USART6_CR3.B9;
    sbit  RTSE_USART6_CR3_bit at USART6_CR3.B8;
    sbit  DMAT_USART6_CR3_bit at USART6_CR3.B7;
    sbit  DMAR_USART6_CR3_bit at USART6_CR3.B6;
    sbit  SCEN_USART6_CR3_bit at USART6_CR3.B5;
    sbit  NACK_USART6_CR3_bit at USART6_CR3.B4;
    sbit  HDSEL_USART6_CR3_bit at USART6_CR3.B3;
    sbit  IRLP_USART6_CR3_bit at USART6_CR3.B2;
    sbit  IREN_USART6_CR3_bit at USART6_CR3.B1;
    sbit  EIE_USART6_CR3_bit at USART6_CR3.B0;

sfr unsigned long   volatile USART6_GTPR          absolute 0x40011418;
    sbit  GT0_USART6_GTPR_bit at USART6_GTPR.B8;
    sbit  GT1_USART6_GTPR_bit at USART6_GTPR.B9;
    sbit  GT2_USART6_GTPR_bit at USART6_GTPR.B10;
    sbit  GT3_USART6_GTPR_bit at USART6_GTPR.B11;
    sbit  GT4_USART6_GTPR_bit at USART6_GTPR.B12;
    sbit  GT5_USART6_GTPR_bit at USART6_GTPR.B13;
    sbit  GT6_USART6_GTPR_bit at USART6_GTPR.B14;
    sbit  GT7_USART6_GTPR_bit at USART6_GTPR.B15;
    sbit  PSC0_USART6_GTPR_bit at USART6_GTPR.B0;
    sbit  PSC1_USART6_GTPR_bit at USART6_GTPR.B1;
    sbit  PSC2_USART6_GTPR_bit at USART6_GTPR.B2;
    sbit  PSC3_USART6_GTPR_bit at USART6_GTPR.B3;
    sbit  PSC4_USART6_GTPR_bit at USART6_GTPR.B4;
    sbit  PSC5_USART6_GTPR_bit at USART6_GTPR.B5;
    sbit  PSC6_USART6_GTPR_bit at USART6_GTPR.B6;
    sbit  PSC7_USART6_GTPR_bit at USART6_GTPR.B7;

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

sfr unsigned long   volatile DMA2_LISR            absolute 0x40026400;
    const register unsigned short int TCIF3 = 27;
    sbit  TCIF3_bit at DMA2_LISR.B27;
    const register unsigned short int HTIF3 = 26;
    sbit  HTIF3_bit at DMA2_LISR.B26;
    const register unsigned short int TEIF3 = 25;
    sbit  TEIF3_bit at DMA2_LISR.B25;
    const register unsigned short int DMEIF3 = 24;
    sbit  DMEIF3_bit at DMA2_LISR.B24;
    const register unsigned short int FEIF3 = 22;
    sbit  FEIF3_bit at DMA2_LISR.B22;
    const register unsigned short int TCIF2 = 21;
    sbit  TCIF2_bit at DMA2_LISR.B21;
    const register unsigned short int HTIF2 = 20;
    sbit  HTIF2_bit at DMA2_LISR.B20;
    const register unsigned short int TEIF2 = 19;
    sbit  TEIF2_bit at DMA2_LISR.B19;
    const register unsigned short int DMEIF2 = 18;
    sbit  DMEIF2_bit at DMA2_LISR.B18;
    const register unsigned short int FEIF2 = 16;
    sbit  FEIF2_bit at DMA2_LISR.B16;
    const register unsigned short int TCIF1 = 11;
    sbit  TCIF1_bit at DMA2_LISR.B11;
    const register unsigned short int HTIF1 = 10;
    sbit  HTIF1_bit at DMA2_LISR.B10;
    const register unsigned short int TEIF1 = 9;
    sbit  TEIF1_bit at DMA2_LISR.B9;
    const register unsigned short int DMEIF1 = 8;
    sbit  DMEIF1_bit at DMA2_LISR.B8;
    const register unsigned short int FEIF1 = 6;
    sbit  FEIF1_bit at DMA2_LISR.B6;
    const register unsigned short int TCIF0 = 5;
    sbit  TCIF0_bit at DMA2_LISR.B5;
    const register unsigned short int HTIF0 = 4;
    sbit  HTIF0_bit at DMA2_LISR.B4;
    const register unsigned short int TEIF0 = 3;
    sbit  TEIF0_bit at DMA2_LISR.B3;
    const register unsigned short int DMEIF0 = 2;
    sbit  DMEIF0_bit at DMA2_LISR.B2;
    const register unsigned short int FEIF0 = 0;
    sbit  FEIF0_bit at DMA2_LISR.B0;

sfr unsigned long   volatile DMA2_HISR            absolute 0x40026404;
    const register unsigned short int TCIF7 = 27;
    sbit  TCIF7_bit at DMA2_HISR.B27;
    const register unsigned short int HTIF7 = 26;
    sbit  HTIF7_bit at DMA2_HISR.B26;
    const register unsigned short int TEIF7 = 25;
    sbit  TEIF7_bit at DMA2_HISR.B25;
    const register unsigned short int DMEIF7 = 24;
    sbit  DMEIF7_bit at DMA2_HISR.B24;
    const register unsigned short int FEIF7 = 22;
    sbit  FEIF7_bit at DMA2_HISR.B22;
    const register unsigned short int TCIF6 = 21;
    sbit  TCIF6_bit at DMA2_HISR.B21;
    const register unsigned short int HTIF6 = 20;
    sbit  HTIF6_bit at DMA2_HISR.B20;
    const register unsigned short int TEIF6 = 19;
    sbit  TEIF6_bit at DMA2_HISR.B19;
    const register unsigned short int DMEIF6 = 18;
    sbit  DMEIF6_bit at DMA2_HISR.B18;
    const register unsigned short int FEIF6 = 16;
    sbit  FEIF6_bit at DMA2_HISR.B16;
    const register unsigned short int TCIF5 = 11;
    sbit  TCIF5_bit at DMA2_HISR.B11;
    const register unsigned short int HTIF5 = 10;
    sbit  HTIF5_bit at DMA2_HISR.B10;
    const register unsigned short int TEIF5 = 9;
    sbit  TEIF5_bit at DMA2_HISR.B9;
    const register unsigned short int DMEIF5 = 8;
    sbit  DMEIF5_bit at DMA2_HISR.B8;
    const register unsigned short int FEIF5 = 6;
    sbit  FEIF5_bit at DMA2_HISR.B6;
    const register unsigned short int TCIF4 = 5;
    sbit  TCIF4_bit at DMA2_HISR.B5;
    const register unsigned short int HTIF4 = 4;
    sbit  HTIF4_bit at DMA2_HISR.B4;
    const register unsigned short int TEIF4 = 3;
    sbit  TEIF4_bit at DMA2_HISR.B3;
    const register unsigned short int DMEIF4 = 2;
    sbit  DMEIF4_bit at DMA2_HISR.B2;
    const register unsigned short int FEIF4 = 0;
    sbit  FEIF4_bit at DMA2_HISR.B0;

sfr unsigned long   volatile DMA2_LIFCR           absolute 0x40026408;
    const register unsigned short int CTCIF3 = 27;
    sbit  CTCIF3_bit at DMA2_LIFCR.B27;
    const register unsigned short int CHTIF3 = 26;
    sbit  CHTIF3_bit at DMA2_LIFCR.B26;
    const register unsigned short int CTEIF3 = 25;
    sbit  CTEIF3_bit at DMA2_LIFCR.B25;
    const register unsigned short int CDMEIF3 = 24;
    sbit  CDMEIF3_bit at DMA2_LIFCR.B24;
    const register unsigned short int CFEIF3 = 22;
    sbit  CFEIF3_bit at DMA2_LIFCR.B22;
    const register unsigned short int CTCIF2 = 21;
    sbit  CTCIF2_bit at DMA2_LIFCR.B21;
    const register unsigned short int CHTIF2 = 20;
    sbit  CHTIF2_bit at DMA2_LIFCR.B20;
    const register unsigned short int CTEIF2 = 19;
    sbit  CTEIF2_bit at DMA2_LIFCR.B19;
    const register unsigned short int CDMEIF2 = 18;
    sbit  CDMEIF2_bit at DMA2_LIFCR.B18;
    const register unsigned short int CFEIF2 = 16;
    sbit  CFEIF2_bit at DMA2_LIFCR.B16;
    const register unsigned short int CTCIF1 = 11;
    sbit  CTCIF1_bit at DMA2_LIFCR.B11;
    const register unsigned short int CHTIF1 = 10;
    sbit  CHTIF1_bit at DMA2_LIFCR.B10;
    const register unsigned short int CTEIF1 = 9;
    sbit  CTEIF1_bit at DMA2_LIFCR.B9;
    const register unsigned short int CDMEIF1 = 8;
    sbit  CDMEIF1_bit at DMA2_LIFCR.B8;
    const register unsigned short int CFEIF1 = 6;
    sbit  CFEIF1_bit at DMA2_LIFCR.B6;
    const register unsigned short int CTCIF0 = 5;
    sbit  CTCIF0_bit at DMA2_LIFCR.B5;
    const register unsigned short int CHTIF0 = 4;
    sbit  CHTIF0_bit at DMA2_LIFCR.B4;
    const register unsigned short int CTEIF0 = 3;
    sbit  CTEIF0_bit at DMA2_LIFCR.B3;
    const register unsigned short int CDMEIF0 = 2;
    sbit  CDMEIF0_bit at DMA2_LIFCR.B2;
    const register unsigned short int CFEIF0 = 0;
    sbit  CFEIF0_bit at DMA2_LIFCR.B0;

sfr unsigned long   volatile DMA2_HIFCR           absolute 0x4002640C;
    const register unsigned short int CTCIF7 = 27;
    sbit  CTCIF7_bit at DMA2_HIFCR.B27;
    const register unsigned short int CHTIF7 = 26;
    sbit  CHTIF7_bit at DMA2_HIFCR.B26;
    const register unsigned short int CTEIF7 = 25;
    sbit  CTEIF7_bit at DMA2_HIFCR.B25;
    const register unsigned short int CDMEIF7 = 24;
    sbit  CDMEIF7_bit at DMA2_HIFCR.B24;
    const register unsigned short int CFEIF7 = 22;
    sbit  CFEIF7_bit at DMA2_HIFCR.B22;
    const register unsigned short int CTCIF6 = 21;
    sbit  CTCIF6_bit at DMA2_HIFCR.B21;
    const register unsigned short int CHTIF6 = 20;
    sbit  CHTIF6_bit at DMA2_HIFCR.B20;
    const register unsigned short int CTEIF6 = 19;
    sbit  CTEIF6_bit at DMA2_HIFCR.B19;
    const register unsigned short int CDMEIF6 = 18;
    sbit  CDMEIF6_bit at DMA2_HIFCR.B18;
    const register unsigned short int CFEIF6 = 16;
    sbit  CFEIF6_bit at DMA2_HIFCR.B16;
    const register unsigned short int CTCIF5 = 11;
    sbit  CTCIF5_bit at DMA2_HIFCR.B11;
    const register unsigned short int CHTIF5 = 10;
    sbit  CHTIF5_bit at DMA2_HIFCR.B10;
    const register unsigned short int CTEIF5 = 9;
    sbit  CTEIF5_bit at DMA2_HIFCR.B9;
    const register unsigned short int CDMEIF5 = 8;
    sbit  CDMEIF5_bit at DMA2_HIFCR.B8;
    const register unsigned short int CFEIF5 = 6;
    sbit  CFEIF5_bit at DMA2_HIFCR.B6;
    const register unsigned short int CTCIF4 = 5;
    sbit  CTCIF4_bit at DMA2_HIFCR.B5;
    const register unsigned short int CHTIF4 = 4;
    sbit  CHTIF4_bit at DMA2_HIFCR.B4;
    const register unsigned short int CTEIF4 = 3;
    sbit  CTEIF4_bit at DMA2_HIFCR.B3;
    const register unsigned short int CDMEIF4 = 2;
    sbit  CDMEIF4_bit at DMA2_HIFCR.B2;
    const register unsigned short int CFEIF4 = 0;
    sbit  CFEIF4_bit at DMA2_HIFCR.B0;

sfr unsigned long   volatile DMA2_S0CR            absolute 0x40026410;
    const register unsigned short int CHSEL0 = 25;
    sbit  CHSEL0_bit at DMA2_S0CR.B25;
    const register unsigned short int CHSEL1 = 26;
    sbit  CHSEL1_bit at DMA2_S0CR.B26;
    const register unsigned short int CHSEL2 = 27;
    sbit  CHSEL2_bit at DMA2_S0CR.B27;
    const register unsigned short int MBURST0 = 23;
    sbit  MBURST0_bit at DMA2_S0CR.B23;
    const register unsigned short int MBURST1 = 24;
    sbit  MBURST1_bit at DMA2_S0CR.B24;
    const register unsigned short int PBURST0 = 21;
    sbit  PBURST0_bit at DMA2_S0CR.B21;
    const register unsigned short int PBURST1 = 22;
    sbit  PBURST1_bit at DMA2_S0CR.B22;
    const register unsigned short int CT = 19;
    sbit  CT_bit at DMA2_S0CR.B19;
    const register unsigned short int DBM = 18;
    sbit  DBM_bit at DMA2_S0CR.B18;
    const register unsigned short int PL0 = 16;
    sbit  PL0_bit at DMA2_S0CR.B16;
    const register unsigned short int PL1 = 17;
    sbit  PL1_bit at DMA2_S0CR.B17;
    const register unsigned short int PINCOS = 15;
    sbit  PINCOS_bit at DMA2_S0CR.B15;
    const register unsigned short int MSIZE0 = 13;
    sbit  MSIZE0_bit at DMA2_S0CR.B13;
    const register unsigned short int MSIZE1 = 14;
    sbit  MSIZE1_bit at DMA2_S0CR.B14;
    sbit  PSIZE0_DMA2_S0CR_bit at DMA2_S0CR.B11;
    sbit  PSIZE1_DMA2_S0CR_bit at DMA2_S0CR.B12;
    const register unsigned short int MINC = 10;
    sbit  MINC_bit at DMA2_S0CR.B10;
    const register unsigned short int PINC = 9;
    sbit  PINC_bit at DMA2_S0CR.B9;
    const register unsigned short int CIRC = 8;
    sbit  CIRC_bit at DMA2_S0CR.B8;
    const register unsigned short int DIR0 = 6;
    sbit  DIR0_bit at DMA2_S0CR.B6;
    const register unsigned short int DIR1 = 7;
    sbit  DIR1_bit at DMA2_S0CR.B7;
    const register unsigned short int PFCTRL = 5;
    sbit  PFCTRL_bit at DMA2_S0CR.B5;
    sbit  TCIE_DMA2_S0CR_bit at DMA2_S0CR.B4;
    const register unsigned short int HTIE = 3;
    sbit  HTIE_bit at DMA2_S0CR.B3;
    const register unsigned short int TEIE = 2;
    sbit  TEIE_bit at DMA2_S0CR.B2;
    const register unsigned short int DMEIE = 1;
    sbit  DMEIE_bit at DMA2_S0CR.B1;
    const register unsigned short int EN = 0;
    sbit  EN_bit at DMA2_S0CR.B0;

sfr unsigned long   volatile DMA2_S0NDTR          absolute 0x40026414;
    const register unsigned short int NDT0 = 0;
    sbit  NDT0_bit at DMA2_S0NDTR.B0;
    const register unsigned short int NDT1 = 1;
    sbit  NDT1_bit at DMA2_S0NDTR.B1;
    const register unsigned short int NDT2 = 2;
    sbit  NDT2_bit at DMA2_S0NDTR.B2;
    const register unsigned short int NDT3 = 3;
    sbit  NDT3_bit at DMA2_S0NDTR.B3;
    const register unsigned short int NDT4 = 4;
    sbit  NDT4_bit at DMA2_S0NDTR.B4;
    const register unsigned short int NDT5 = 5;
    sbit  NDT5_bit at DMA2_S0NDTR.B5;
    const register unsigned short int NDT6 = 6;
    sbit  NDT6_bit at DMA2_S0NDTR.B6;
    const register unsigned short int NDT7 = 7;
    sbit  NDT7_bit at DMA2_S0NDTR.B7;
    const register unsigned short int NDT8 = 8;
    sbit  NDT8_bit at DMA2_S0NDTR.B8;
    const register unsigned short int NDT9 = 9;
    sbit  NDT9_bit at DMA2_S0NDTR.B9;
    const register unsigned short int NDT10 = 10;
    sbit  NDT10_bit at DMA2_S0NDTR.B10;
    const register unsigned short int NDT11 = 11;
    sbit  NDT11_bit at DMA2_S0NDTR.B11;
    const register unsigned short int NDT12 = 12;
    sbit  NDT12_bit at DMA2_S0NDTR.B12;
    const register unsigned short int NDT13 = 13;
    sbit  NDT13_bit at DMA2_S0NDTR.B13;
    const register unsigned short int NDT14 = 14;
    sbit  NDT14_bit at DMA2_S0NDTR.B14;
    const register unsigned short int NDT15 = 15;
    sbit  NDT15_bit at DMA2_S0NDTR.B15;

sfr unsigned long   volatile DMA2_S0PAR           absolute 0x40026418;
    const register unsigned short int PA0 = 0;
    sbit  PA0_bit at DMA2_S0PAR.B0;
    const register unsigned short int PA1 = 1;
    sbit  PA1_bit at DMA2_S0PAR.B1;
    const register unsigned short int PA2 = 2;
    sbit  PA2_bit at DMA2_S0PAR.B2;
    const register unsigned short int PA3 = 3;
    sbit  PA3_bit at DMA2_S0PAR.B3;
    const register unsigned short int PA4 = 4;
    sbit  PA4_bit at DMA2_S0PAR.B4;
    const register unsigned short int PA5 = 5;
    sbit  PA5_bit at DMA2_S0PAR.B5;
    const register unsigned short int PA6 = 6;
    sbit  PA6_bit at DMA2_S0PAR.B6;
    const register unsigned short int PA7 = 7;
    sbit  PA7_bit at DMA2_S0PAR.B7;
    const register unsigned short int PA8 = 8;
    sbit  PA8_bit at DMA2_S0PAR.B8;
    const register unsigned short int PA9 = 9;
    sbit  PA9_bit at DMA2_S0PAR.B9;
    const register unsigned short int PA10 = 10;
    sbit  PA10_bit at DMA2_S0PAR.B10;
    const register unsigned short int PA11 = 11;
    sbit  PA11_bit at DMA2_S0PAR.B11;
    const register unsigned short int PA12 = 12;
    sbit  PA12_bit at DMA2_S0PAR.B12;
    const register unsigned short int PA13 = 13;
    sbit  PA13_bit at DMA2_S0PAR.B13;
    const register unsigned short int PA14 = 14;
    sbit  PA14_bit at DMA2_S0PAR.B14;
    const register unsigned short int PA15 = 15;
    sbit  PA15_bit at DMA2_S0PAR.B15;
    const register unsigned short int PA16 = 16;
    sbit  PA16_bit at DMA2_S0PAR.B16;
    const register unsigned short int PA17 = 17;
    sbit  PA17_bit at DMA2_S0PAR.B17;
    const register unsigned short int PA18 = 18;
    sbit  PA18_bit at DMA2_S0PAR.B18;
    const register unsigned short int PA19 = 19;
    sbit  PA19_bit at DMA2_S0PAR.B19;
    const register unsigned short int PA20 = 20;
    sbit  PA20_bit at DMA2_S0PAR.B20;
    const register unsigned short int PA21 = 21;
    sbit  PA21_bit at DMA2_S0PAR.B21;
    const register unsigned short int PA22 = 22;
    sbit  PA22_bit at DMA2_S0PAR.B22;
    const register unsigned short int PA23 = 23;
    sbit  PA23_bit at DMA2_S0PAR.B23;
    const register unsigned short int PA24 = 24;
    sbit  PA24_bit at DMA2_S0PAR.B24;
    const register unsigned short int PA25 = 25;
    sbit  PA25_bit at DMA2_S0PAR.B25;
    const register unsigned short int PA26 = 26;
    sbit  PA26_bit at DMA2_S0PAR.B26;
    const register unsigned short int PA27 = 27;
    sbit  PA27_bit at DMA2_S0PAR.B27;
    const register unsigned short int PA28 = 28;
    sbit  PA28_bit at DMA2_S0PAR.B28;
    const register unsigned short int PA29 = 29;
    sbit  PA29_bit at DMA2_S0PAR.B29;
    const register unsigned short int PA30 = 30;
    sbit  PA30_bit at DMA2_S0PAR.B30;
    const register unsigned short int PA31 = 31;
    sbit  PA31_bit at DMA2_S0PAR.B31;

sfr unsigned long   volatile DMA2_S0M0AR          absolute 0x4002641C;
    const register unsigned short int M0A0 = 0;
    sbit  M0A0_bit at DMA2_S0M0AR.B0;
    const register unsigned short int M0A1 = 1;
    sbit  M0A1_bit at DMA2_S0M0AR.B1;
    const register unsigned short int M0A2 = 2;
    sbit  M0A2_bit at DMA2_S0M0AR.B2;
    const register unsigned short int M0A3 = 3;
    sbit  M0A3_bit at DMA2_S0M0AR.B3;
    const register unsigned short int M0A4 = 4;
    sbit  M0A4_bit at DMA2_S0M0AR.B4;
    const register unsigned short int M0A5 = 5;
    sbit  M0A5_bit at DMA2_S0M0AR.B5;
    const register unsigned short int M0A6 = 6;
    sbit  M0A6_bit at DMA2_S0M0AR.B6;
    const register unsigned short int M0A7 = 7;
    sbit  M0A7_bit at DMA2_S0M0AR.B7;
    const register unsigned short int M0A8 = 8;
    sbit  M0A8_bit at DMA2_S0M0AR.B8;
    const register unsigned short int M0A9 = 9;
    sbit  M0A9_bit at DMA2_S0M0AR.B9;
    const register unsigned short int M0A10 = 10;
    sbit  M0A10_bit at DMA2_S0M0AR.B10;
    const register unsigned short int M0A11 = 11;
    sbit  M0A11_bit at DMA2_S0M0AR.B11;
    const register unsigned short int M0A12 = 12;
    sbit  M0A12_bit at DMA2_S0M0AR.B12;
    const register unsigned short int M0A13 = 13;
    sbit  M0A13_bit at DMA2_S0M0AR.B13;
    const register unsigned short int M0A14 = 14;
    sbit  M0A14_bit at DMA2_S0M0AR.B14;
    const register unsigned short int M0A15 = 15;
    sbit  M0A15_bit at DMA2_S0M0AR.B15;
    const register unsigned short int M0A16 = 16;
    sbit  M0A16_bit at DMA2_S0M0AR.B16;
    const register unsigned short int M0A17 = 17;
    sbit  M0A17_bit at DMA2_S0M0AR.B17;
    const register unsigned short int M0A18 = 18;
    sbit  M0A18_bit at DMA2_S0M0AR.B18;
    const register unsigned short int M0A19 = 19;
    sbit  M0A19_bit at DMA2_S0M0AR.B19;
    const register unsigned short int M0A20 = 20;
    sbit  M0A20_bit at DMA2_S0M0AR.B20;
    const register unsigned short int M0A21 = 21;
    sbit  M0A21_bit at DMA2_S0M0AR.B21;
    const register unsigned short int M0A22 = 22;
    sbit  M0A22_bit at DMA2_S0M0AR.B22;
    const register unsigned short int M0A23 = 23;
    sbit  M0A23_bit at DMA2_S0M0AR.B23;
    const register unsigned short int M0A24 = 24;
    sbit  M0A24_bit at DMA2_S0M0AR.B24;
    const register unsigned short int M0A25 = 25;
    sbit  M0A25_bit at DMA2_S0M0AR.B25;
    const register unsigned short int M0A26 = 26;
    sbit  M0A26_bit at DMA2_S0M0AR.B26;
    const register unsigned short int M0A27 = 27;
    sbit  M0A27_bit at DMA2_S0M0AR.B27;
    const register unsigned short int M0A28 = 28;
    sbit  M0A28_bit at DMA2_S0M0AR.B28;
    const register unsigned short int M0A29 = 29;
    sbit  M0A29_bit at DMA2_S0M0AR.B29;
    const register unsigned short int M0A30 = 30;
    sbit  M0A30_bit at DMA2_S0M0AR.B30;
    const register unsigned short int M0A31 = 31;
    sbit  M0A31_bit at DMA2_S0M0AR.B31;

sfr unsigned long   volatile DMA2_S0M1AR          absolute 0x40026420;
    const register unsigned short int M1A0 = 0;
    sbit  M1A0_bit at DMA2_S0M1AR.B0;
    const register unsigned short int M1A1 = 1;
    sbit  M1A1_bit at DMA2_S0M1AR.B1;
    const register unsigned short int M1A2 = 2;
    sbit  M1A2_bit at DMA2_S0M1AR.B2;
    const register unsigned short int M1A3 = 3;
    sbit  M1A3_bit at DMA2_S0M1AR.B3;
    const register unsigned short int M1A4 = 4;
    sbit  M1A4_bit at DMA2_S0M1AR.B4;
    const register unsigned short int M1A5 = 5;
    sbit  M1A5_bit at DMA2_S0M1AR.B5;
    const register unsigned short int M1A6 = 6;
    sbit  M1A6_bit at DMA2_S0M1AR.B6;
    const register unsigned short int M1A7 = 7;
    sbit  M1A7_bit at DMA2_S0M1AR.B7;
    const register unsigned short int M1A8 = 8;
    sbit  M1A8_bit at DMA2_S0M1AR.B8;
    const register unsigned short int M1A9 = 9;
    sbit  M1A9_bit at DMA2_S0M1AR.B9;
    const register unsigned short int M1A10 = 10;
    sbit  M1A10_bit at DMA2_S0M1AR.B10;
    const register unsigned short int M1A11 = 11;
    sbit  M1A11_bit at DMA2_S0M1AR.B11;
    const register unsigned short int M1A12 = 12;
    sbit  M1A12_bit at DMA2_S0M1AR.B12;
    const register unsigned short int M1A13 = 13;
    sbit  M1A13_bit at DMA2_S0M1AR.B13;
    const register unsigned short int M1A14 = 14;
    sbit  M1A14_bit at DMA2_S0M1AR.B14;
    const register unsigned short int M1A15 = 15;
    sbit  M1A15_bit at DMA2_S0M1AR.B15;
    const register unsigned short int M1A16 = 16;
    sbit  M1A16_bit at DMA2_S0M1AR.B16;
    const register unsigned short int M1A17 = 17;
    sbit  M1A17_bit at DMA2_S0M1AR.B17;
    const register unsigned short int M1A18 = 18;
    sbit  M1A18_bit at DMA2_S0M1AR.B18;
    const register unsigned short int M1A19 = 19;
    sbit  M1A19_bit at DMA2_S0M1AR.B19;
    const register unsigned short int M1A20 = 20;
    sbit  M1A20_bit at DMA2_S0M1AR.B20;
    const register unsigned short int M1A21 = 21;
    sbit  M1A21_bit at DMA2_S0M1AR.B21;
    const register unsigned short int M1A22 = 22;
    sbit  M1A22_bit at DMA2_S0M1AR.B22;
    const register unsigned short int M1A23 = 23;
    sbit  M1A23_bit at DMA2_S0M1AR.B23;
    const register unsigned short int M1A24 = 24;
    sbit  M1A24_bit at DMA2_S0M1AR.B24;
    const register unsigned short int M1A25 = 25;
    sbit  M1A25_bit at DMA2_S0M1AR.B25;
    const register unsigned short int M1A26 = 26;
    sbit  M1A26_bit at DMA2_S0M1AR.B26;
    const register unsigned short int M1A27 = 27;
    sbit  M1A27_bit at DMA2_S0M1AR.B27;
    const register unsigned short int M1A28 = 28;
    sbit  M1A28_bit at DMA2_S0M1AR.B28;
    const register unsigned short int M1A29 = 29;
    sbit  M1A29_bit at DMA2_S0M1AR.B29;
    const register unsigned short int M1A30 = 30;
    sbit  M1A30_bit at DMA2_S0M1AR.B30;
    const register unsigned short int M1A31 = 31;
    sbit  M1A31_bit at DMA2_S0M1AR.B31;

sfr unsigned long   volatile DMA2_S0FCR           absolute 0x40026424;
    const register unsigned short int FEIE = 7;
    sbit  FEIE_bit at DMA2_S0FCR.B7;
    const register unsigned short int FS0 = 3;
    sbit  FS0_bit at DMA2_S0FCR.B3;
    const register unsigned short int FS1 = 4;
    sbit  FS1_bit at DMA2_S0FCR.B4;
    const register unsigned short int FS2 = 5;
    sbit  FS2_bit at DMA2_S0FCR.B5;
    const register unsigned short int DMDIS = 2;
    sbit  DMDIS_bit at DMA2_S0FCR.B2;
    const register unsigned short int FTH0 = 0;
    sbit  FTH0_bit at DMA2_S0FCR.B0;
    const register unsigned short int FTH1 = 1;
    sbit  FTH1_bit at DMA2_S0FCR.B1;

sfr unsigned long   volatile DMA2_S1CR            absolute 0x40026428;
    sbit  CHSEL0_DMA2_S1CR_bit at DMA2_S1CR.B25;
    sbit  CHSEL1_DMA2_S1CR_bit at DMA2_S1CR.B26;
    sbit  CHSEL2_DMA2_S1CR_bit at DMA2_S1CR.B27;
    sbit  MBURST0_DMA2_S1CR_bit at DMA2_S1CR.B23;
    sbit  MBURST1_DMA2_S1CR_bit at DMA2_S1CR.B24;
    sbit  PBURST0_DMA2_S1CR_bit at DMA2_S1CR.B21;
    sbit  PBURST1_DMA2_S1CR_bit at DMA2_S1CR.B22;
    const register unsigned short int ACK = 20;
    sbit  ACK_bit at DMA2_S1CR.B20;
    sbit  CT_DMA2_S1CR_bit at DMA2_S1CR.B19;
    sbit  DBM_DMA2_S1CR_bit at DMA2_S1CR.B18;
    sbit  PL0_DMA2_S1CR_bit at DMA2_S1CR.B16;
    sbit  PL1_DMA2_S1CR_bit at DMA2_S1CR.B17;
    sbit  PINCOS_DMA2_S1CR_bit at DMA2_S1CR.B15;
    sbit  MSIZE0_DMA2_S1CR_bit at DMA2_S1CR.B13;
    sbit  MSIZE1_DMA2_S1CR_bit at DMA2_S1CR.B14;
    sbit  PSIZE0_DMA2_S1CR_bit at DMA2_S1CR.B11;
    sbit  PSIZE1_DMA2_S1CR_bit at DMA2_S1CR.B12;
    sbit  MINC_DMA2_S1CR_bit at DMA2_S1CR.B10;
    sbit  PINC_DMA2_S1CR_bit at DMA2_S1CR.B9;
    sbit  CIRC_DMA2_S1CR_bit at DMA2_S1CR.B8;
    sbit  DIR0_DMA2_S1CR_bit at DMA2_S1CR.B6;
    sbit  DIR1_DMA2_S1CR_bit at DMA2_S1CR.B7;
    sbit  PFCTRL_DMA2_S1CR_bit at DMA2_S1CR.B5;
    sbit  TCIE_DMA2_S1CR_bit at DMA2_S1CR.B4;
    sbit  HTIE_DMA2_S1CR_bit at DMA2_S1CR.B3;
    sbit  TEIE_DMA2_S1CR_bit at DMA2_S1CR.B2;
    sbit  DMEIE_DMA2_S1CR_bit at DMA2_S1CR.B1;
    sbit  EN_DMA2_S1CR_bit at DMA2_S1CR.B0;

sfr unsigned long   volatile DMA2_S1NDTR          absolute 0x4002642C;
    sbit  NDT0_DMA2_S1NDTR_bit at DMA2_S1NDTR.B0;
    sbit  NDT1_DMA2_S1NDTR_bit at DMA2_S1NDTR.B1;
    sbit  NDT2_DMA2_S1NDTR_bit at DMA2_S1NDTR.B2;
    sbit  NDT3_DMA2_S1NDTR_bit at DMA2_S1NDTR.B3;
    sbit  NDT4_DMA2_S1NDTR_bit at DMA2_S1NDTR.B4;
    sbit  NDT5_DMA2_S1NDTR_bit at DMA2_S1NDTR.B5;
    sbit  NDT6_DMA2_S1NDTR_bit at DMA2_S1NDTR.B6;
    sbit  NDT7_DMA2_S1NDTR_bit at DMA2_S1NDTR.B7;
    sbit  NDT8_DMA2_S1NDTR_bit at DMA2_S1NDTR.B8;
    sbit  NDT9_DMA2_S1NDTR_bit at DMA2_S1NDTR.B9;
    sbit  NDT10_DMA2_S1NDTR_bit at DMA2_S1NDTR.B10;
    sbit  NDT11_DMA2_S1NDTR_bit at DMA2_S1NDTR.B11;
    sbit  NDT12_DMA2_S1NDTR_bit at DMA2_S1NDTR.B12;
    sbit  NDT13_DMA2_S1NDTR_bit at DMA2_S1NDTR.B13;
    sbit  NDT14_DMA2_S1NDTR_bit at DMA2_S1NDTR.B14;
    sbit  NDT15_DMA2_S1NDTR_bit at DMA2_S1NDTR.B15;

sfr unsigned long   volatile DMA2_S1PAR           absolute 0x40026430;
    sbit  PA0_DMA2_S1PAR_bit at DMA2_S1PAR.B0;
    sbit  PA1_DMA2_S1PAR_bit at DMA2_S1PAR.B1;
    sbit  PA2_DMA2_S1PAR_bit at DMA2_S1PAR.B2;
    sbit  PA3_DMA2_S1PAR_bit at DMA2_S1PAR.B3;
    sbit  PA4_DMA2_S1PAR_bit at DMA2_S1PAR.B4;
    sbit  PA5_DMA2_S1PAR_bit at DMA2_S1PAR.B5;
    sbit  PA6_DMA2_S1PAR_bit at DMA2_S1PAR.B6;
    sbit  PA7_DMA2_S1PAR_bit at DMA2_S1PAR.B7;
    sbit  PA8_DMA2_S1PAR_bit at DMA2_S1PAR.B8;
    sbit  PA9_DMA2_S1PAR_bit at DMA2_S1PAR.B9;
    sbit  PA10_DMA2_S1PAR_bit at DMA2_S1PAR.B10;
    sbit  PA11_DMA2_S1PAR_bit at DMA2_S1PAR.B11;
    sbit  PA12_DMA2_S1PAR_bit at DMA2_S1PAR.B12;
    sbit  PA13_DMA2_S1PAR_bit at DMA2_S1PAR.B13;
    sbit  PA14_DMA2_S1PAR_bit at DMA2_S1PAR.B14;
    sbit  PA15_DMA2_S1PAR_bit at DMA2_S1PAR.B15;
    sbit  PA16_DMA2_S1PAR_bit at DMA2_S1PAR.B16;
    sbit  PA17_DMA2_S1PAR_bit at DMA2_S1PAR.B17;
    sbit  PA18_DMA2_S1PAR_bit at DMA2_S1PAR.B18;
    sbit  PA19_DMA2_S1PAR_bit at DMA2_S1PAR.B19;
    sbit  PA20_DMA2_S1PAR_bit at DMA2_S1PAR.B20;
    sbit  PA21_DMA2_S1PAR_bit at DMA2_S1PAR.B21;
    sbit  PA22_DMA2_S1PAR_bit at DMA2_S1PAR.B22;
    sbit  PA23_DMA2_S1PAR_bit at DMA2_S1PAR.B23;
    sbit  PA24_DMA2_S1PAR_bit at DMA2_S1PAR.B24;
    sbit  PA25_DMA2_S1PAR_bit at DMA2_S1PAR.B25;
    sbit  PA26_DMA2_S1PAR_bit at DMA2_S1PAR.B26;
    sbit  PA27_DMA2_S1PAR_bit at DMA2_S1PAR.B27;
    sbit  PA28_DMA2_S1PAR_bit at DMA2_S1PAR.B28;
    sbit  PA29_DMA2_S1PAR_bit at DMA2_S1PAR.B29;
    sbit  PA30_DMA2_S1PAR_bit at DMA2_S1PAR.B30;
    sbit  PA31_DMA2_S1PAR_bit at DMA2_S1PAR.B31;

sfr unsigned long   volatile DMA2_S1M0AR          absolute 0x40026434;
    sbit  M0A0_DMA2_S1M0AR_bit at DMA2_S1M0AR.B0;
    sbit  M0A1_DMA2_S1M0AR_bit at DMA2_S1M0AR.B1;
    sbit  M0A2_DMA2_S1M0AR_bit at DMA2_S1M0AR.B2;
    sbit  M0A3_DMA2_S1M0AR_bit at DMA2_S1M0AR.B3;
    sbit  M0A4_DMA2_S1M0AR_bit at DMA2_S1M0AR.B4;
    sbit  M0A5_DMA2_S1M0AR_bit at DMA2_S1M0AR.B5;
    sbit  M0A6_DMA2_S1M0AR_bit at DMA2_S1M0AR.B6;
    sbit  M0A7_DMA2_S1M0AR_bit at DMA2_S1M0AR.B7;
    sbit  M0A8_DMA2_S1M0AR_bit at DMA2_S1M0AR.B8;
    sbit  M0A9_DMA2_S1M0AR_bit at DMA2_S1M0AR.B9;
    sbit  M0A10_DMA2_S1M0AR_bit at DMA2_S1M0AR.B10;
    sbit  M0A11_DMA2_S1M0AR_bit at DMA2_S1M0AR.B11;
    sbit  M0A12_DMA2_S1M0AR_bit at DMA2_S1M0AR.B12;
    sbit  M0A13_DMA2_S1M0AR_bit at DMA2_S1M0AR.B13;
    sbit  M0A14_DMA2_S1M0AR_bit at DMA2_S1M0AR.B14;
    sbit  M0A15_DMA2_S1M0AR_bit at DMA2_S1M0AR.B15;
    sbit  M0A16_DMA2_S1M0AR_bit at DMA2_S1M0AR.B16;
    sbit  M0A17_DMA2_S1M0AR_bit at DMA2_S1M0AR.B17;
    sbit  M0A18_DMA2_S1M0AR_bit at DMA2_S1M0AR.B18;
    sbit  M0A19_DMA2_S1M0AR_bit at DMA2_S1M0AR.B19;
    sbit  M0A20_DMA2_S1M0AR_bit at DMA2_S1M0AR.B20;
    sbit  M0A21_DMA2_S1M0AR_bit at DMA2_S1M0AR.B21;
    sbit  M0A22_DMA2_S1M0AR_bit at DMA2_S1M0AR.B22;
    sbit  M0A23_DMA2_S1M0AR_bit at DMA2_S1M0AR.B23;
    sbit  M0A24_DMA2_S1M0AR_bit at DMA2_S1M0AR.B24;
    sbit  M0A25_DMA2_S1M0AR_bit at DMA2_S1M0AR.B25;
    sbit  M0A26_DMA2_S1M0AR_bit at DMA2_S1M0AR.B26;
    sbit  M0A27_DMA2_S1M0AR_bit at DMA2_S1M0AR.B27;
    sbit  M0A28_DMA2_S1M0AR_bit at DMA2_S1M0AR.B28;
    sbit  M0A29_DMA2_S1M0AR_bit at DMA2_S1M0AR.B29;
    sbit  M0A30_DMA2_S1M0AR_bit at DMA2_S1M0AR.B30;
    sbit  M0A31_DMA2_S1M0AR_bit at DMA2_S1M0AR.B31;

sfr unsigned long   volatile DMA2_S1M1AR          absolute 0x40026438;
    sbit  M1A0_DMA2_S1M1AR_bit at DMA2_S1M1AR.B0;
    sbit  M1A1_DMA2_S1M1AR_bit at DMA2_S1M1AR.B1;
    sbit  M1A2_DMA2_S1M1AR_bit at DMA2_S1M1AR.B2;
    sbit  M1A3_DMA2_S1M1AR_bit at DMA2_S1M1AR.B3;
    sbit  M1A4_DMA2_S1M1AR_bit at DMA2_S1M1AR.B4;
    sbit  M1A5_DMA2_S1M1AR_bit at DMA2_S1M1AR.B5;
    sbit  M1A6_DMA2_S1M1AR_bit at DMA2_S1M1AR.B6;
    sbit  M1A7_DMA2_S1M1AR_bit at DMA2_S1M1AR.B7;
    sbit  M1A8_DMA2_S1M1AR_bit at DMA2_S1M1AR.B8;
    sbit  M1A9_DMA2_S1M1AR_bit at DMA2_S1M1AR.B9;
    sbit  M1A10_DMA2_S1M1AR_bit at DMA2_S1M1AR.B10;
    sbit  M1A11_DMA2_S1M1AR_bit at DMA2_S1M1AR.B11;
    sbit  M1A12_DMA2_S1M1AR_bit at DMA2_S1M1AR.B12;
    sbit  M1A13_DMA2_S1M1AR_bit at DMA2_S1M1AR.B13;
    sbit  M1A14_DMA2_S1M1AR_bit at DMA2_S1M1AR.B14;
    sbit  M1A15_DMA2_S1M1AR_bit at DMA2_S1M1AR.B15;
    sbit  M1A16_DMA2_S1M1AR_bit at DMA2_S1M1AR.B16;
    sbit  M1A17_DMA2_S1M1AR_bit at DMA2_S1M1AR.B17;
    sbit  M1A18_DMA2_S1M1AR_bit at DMA2_S1M1AR.B18;
    sbit  M1A19_DMA2_S1M1AR_bit at DMA2_S1M1AR.B19;
    sbit  M1A20_DMA2_S1M1AR_bit at DMA2_S1M1AR.B20;
    sbit  M1A21_DMA2_S1M1AR_bit at DMA2_S1M1AR.B21;
    sbit  M1A22_DMA2_S1M1AR_bit at DMA2_S1M1AR.B22;
    sbit  M1A23_DMA2_S1M1AR_bit at DMA2_S1M1AR.B23;
    sbit  M1A24_DMA2_S1M1AR_bit at DMA2_S1M1AR.B24;
    sbit  M1A25_DMA2_S1M1AR_bit at DMA2_S1M1AR.B25;
    sbit  M1A26_DMA2_S1M1AR_bit at DMA2_S1M1AR.B26;
    sbit  M1A27_DMA2_S1M1AR_bit at DMA2_S1M1AR.B27;
    sbit  M1A28_DMA2_S1M1AR_bit at DMA2_S1M1AR.B28;
    sbit  M1A29_DMA2_S1M1AR_bit at DMA2_S1M1AR.B29;
    sbit  M1A30_DMA2_S1M1AR_bit at DMA2_S1M1AR.B30;
    sbit  M1A31_DMA2_S1M1AR_bit at DMA2_S1M1AR.B31;

sfr unsigned long   volatile DMA2_S1FCR           absolute 0x4002643C;
    sbit  FEIE_DMA2_S1FCR_bit at DMA2_S1FCR.B7;
    sbit  FS0_DMA2_S1FCR_bit at DMA2_S1FCR.B3;
    sbit  FS1_DMA2_S1FCR_bit at DMA2_S1FCR.B4;
    sbit  FS2_DMA2_S1FCR_bit at DMA2_S1FCR.B5;
    sbit  DMDIS_DMA2_S1FCR_bit at DMA2_S1FCR.B2;
    sbit  FTH0_DMA2_S1FCR_bit at DMA2_S1FCR.B0;
    sbit  FTH1_DMA2_S1FCR_bit at DMA2_S1FCR.B1;

sfr unsigned long   volatile DMA2_S2CR            absolute 0x40026440;
    sbit  CHSEL0_DMA2_S2CR_bit at DMA2_S2CR.B25;
    sbit  CHSEL1_DMA2_S2CR_bit at DMA2_S2CR.B26;
    sbit  CHSEL2_DMA2_S2CR_bit at DMA2_S2CR.B27;
    sbit  MBURST0_DMA2_S2CR_bit at DMA2_S2CR.B23;
    sbit  MBURST1_DMA2_S2CR_bit at DMA2_S2CR.B24;
    sbit  PBURST0_DMA2_S2CR_bit at DMA2_S2CR.B21;
    sbit  PBURST1_DMA2_S2CR_bit at DMA2_S2CR.B22;
    sbit  ACK_DMA2_S2CR_bit at DMA2_S2CR.B20;
    sbit  CT_DMA2_S2CR_bit at DMA2_S2CR.B19;
    sbit  DBM_DMA2_S2CR_bit at DMA2_S2CR.B18;
    sbit  PL0_DMA2_S2CR_bit at DMA2_S2CR.B16;
    sbit  PL1_DMA2_S2CR_bit at DMA2_S2CR.B17;
    sbit  PINCOS_DMA2_S2CR_bit at DMA2_S2CR.B15;
    sbit  MSIZE0_DMA2_S2CR_bit at DMA2_S2CR.B13;
    sbit  MSIZE1_DMA2_S2CR_bit at DMA2_S2CR.B14;
    sbit  PSIZE0_DMA2_S2CR_bit at DMA2_S2CR.B11;
    sbit  PSIZE1_DMA2_S2CR_bit at DMA2_S2CR.B12;
    sbit  MINC_DMA2_S2CR_bit at DMA2_S2CR.B10;
    sbit  PINC_DMA2_S2CR_bit at DMA2_S2CR.B9;
    sbit  CIRC_DMA2_S2CR_bit at DMA2_S2CR.B8;
    sbit  DIR0_DMA2_S2CR_bit at DMA2_S2CR.B6;
    sbit  DIR1_DMA2_S2CR_bit at DMA2_S2CR.B7;
    sbit  PFCTRL_DMA2_S2CR_bit at DMA2_S2CR.B5;
    sbit  TCIE_DMA2_S2CR_bit at DMA2_S2CR.B4;
    sbit  HTIE_DMA2_S2CR_bit at DMA2_S2CR.B3;
    sbit  TEIE_DMA2_S2CR_bit at DMA2_S2CR.B2;
    sbit  DMEIE_DMA2_S2CR_bit at DMA2_S2CR.B1;
    sbit  EN_DMA2_S2CR_bit at DMA2_S2CR.B0;

sfr unsigned long   volatile DMA2_S2NDTR          absolute 0x40026444;
    sbit  NDT0_DMA2_S2NDTR_bit at DMA2_S2NDTR.B0;
    sbit  NDT1_DMA2_S2NDTR_bit at DMA2_S2NDTR.B1;
    sbit  NDT2_DMA2_S2NDTR_bit at DMA2_S2NDTR.B2;
    sbit  NDT3_DMA2_S2NDTR_bit at DMA2_S2NDTR.B3;
    sbit  NDT4_DMA2_S2NDTR_bit at DMA2_S2NDTR.B4;
    sbit  NDT5_DMA2_S2NDTR_bit at DMA2_S2NDTR.B5;
    sbit  NDT6_DMA2_S2NDTR_bit at DMA2_S2NDTR.B6;
    sbit  NDT7_DMA2_S2NDTR_bit at DMA2_S2NDTR.B7;
    sbit  NDT8_DMA2_S2NDTR_bit at DMA2_S2NDTR.B8;
    sbit  NDT9_DMA2_S2NDTR_bit at DMA2_S2NDTR.B9;
    sbit  NDT10_DMA2_S2NDTR_bit at DMA2_S2NDTR.B10;
    sbit  NDT11_DMA2_S2NDTR_bit at DMA2_S2NDTR.B11;
    sbit  NDT12_DMA2_S2NDTR_bit at DMA2_S2NDTR.B12;
    sbit  NDT13_DMA2_S2NDTR_bit at DMA2_S2NDTR.B13;
    sbit  NDT14_DMA2_S2NDTR_bit at DMA2_S2NDTR.B14;
    sbit  NDT15_DMA2_S2NDTR_bit at DMA2_S2NDTR.B15;

sfr unsigned long   volatile DMA2_S2PAR           absolute 0x40026448;
    sbit  PA0_DMA2_S2PAR_bit at DMA2_S2PAR.B0;
    sbit  PA1_DMA2_S2PAR_bit at DMA2_S2PAR.B1;
    sbit  PA2_DMA2_S2PAR_bit at DMA2_S2PAR.B2;
    sbit  PA3_DMA2_S2PAR_bit at DMA2_S2PAR.B3;
    sbit  PA4_DMA2_S2PAR_bit at DMA2_S2PAR.B4;
    sbit  PA5_DMA2_S2PAR_bit at DMA2_S2PAR.B5;
    sbit  PA6_DMA2_S2PAR_bit at DMA2_S2PAR.B6;
    sbit  PA7_DMA2_S2PAR_bit at DMA2_S2PAR.B7;
    sbit  PA8_DMA2_S2PAR_bit at DMA2_S2PAR.B8;
    sbit  PA9_DMA2_S2PAR_bit at DMA2_S2PAR.B9;
    sbit  PA10_DMA2_S2PAR_bit at DMA2_S2PAR.B10;
    sbit  PA11_DMA2_S2PAR_bit at DMA2_S2PAR.B11;
    sbit  PA12_DMA2_S2PAR_bit at DMA2_S2PAR.B12;
    sbit  PA13_DMA2_S2PAR_bit at DMA2_S2PAR.B13;
    sbit  PA14_DMA2_S2PAR_bit at DMA2_S2PAR.B14;
    sbit  PA15_DMA2_S2PAR_bit at DMA2_S2PAR.B15;
    sbit  PA16_DMA2_S2PAR_bit at DMA2_S2PAR.B16;
    sbit  PA17_DMA2_S2PAR_bit at DMA2_S2PAR.B17;
    sbit  PA18_DMA2_S2PAR_bit at DMA2_S2PAR.B18;
    sbit  PA19_DMA2_S2PAR_bit at DMA2_S2PAR.B19;
    sbit  PA20_DMA2_S2PAR_bit at DMA2_S2PAR.B20;
    sbit  PA21_DMA2_S2PAR_bit at DMA2_S2PAR.B21;
    sbit  PA22_DMA2_S2PAR_bit at DMA2_S2PAR.B22;
    sbit  PA23_DMA2_S2PAR_bit at DMA2_S2PAR.B23;
    sbit  PA24_DMA2_S2PAR_bit at DMA2_S2PAR.B24;
    sbit  PA25_DMA2_S2PAR_bit at DMA2_S2PAR.B25;
    sbit  PA26_DMA2_S2PAR_bit at DMA2_S2PAR.B26;
    sbit  PA27_DMA2_S2PAR_bit at DMA2_S2PAR.B27;
    sbit  PA28_DMA2_S2PAR_bit at DMA2_S2PAR.B28;
    sbit  PA29_DMA2_S2PAR_bit at DMA2_S2PAR.B29;
    sbit  PA30_DMA2_S2PAR_bit at DMA2_S2PAR.B30;
    sbit  PA31_DMA2_S2PAR_bit at DMA2_S2PAR.B31;

sfr unsigned long   volatile DMA2_S2M0AR          absolute 0x4002644C;
    sbit  M0A0_DMA2_S2M0AR_bit at DMA2_S2M0AR.B0;
    sbit  M0A1_DMA2_S2M0AR_bit at DMA2_S2M0AR.B1;
    sbit  M0A2_DMA2_S2M0AR_bit at DMA2_S2M0AR.B2;
    sbit  M0A3_DMA2_S2M0AR_bit at DMA2_S2M0AR.B3;
    sbit  M0A4_DMA2_S2M0AR_bit at DMA2_S2M0AR.B4;
    sbit  M0A5_DMA2_S2M0AR_bit at DMA2_S2M0AR.B5;
    sbit  M0A6_DMA2_S2M0AR_bit at DMA2_S2M0AR.B6;
    sbit  M0A7_DMA2_S2M0AR_bit at DMA2_S2M0AR.B7;
    sbit  M0A8_DMA2_S2M0AR_bit at DMA2_S2M0AR.B8;
    sbit  M0A9_DMA2_S2M0AR_bit at DMA2_S2M0AR.B9;
    sbit  M0A10_DMA2_S2M0AR_bit at DMA2_S2M0AR.B10;
    sbit  M0A11_DMA2_S2M0AR_bit at DMA2_S2M0AR.B11;
    sbit  M0A12_DMA2_S2M0AR_bit at DMA2_S2M0AR.B12;
    sbit  M0A13_DMA2_S2M0AR_bit at DMA2_S2M0AR.B13;
    sbit  M0A14_DMA2_S2M0AR_bit at DMA2_S2M0AR.B14;
    sbit  M0A15_DMA2_S2M0AR_bit at DMA2_S2M0AR.B15;
    sbit  M0A16_DMA2_S2M0AR_bit at DMA2_S2M0AR.B16;
    sbit  M0A17_DMA2_S2M0AR_bit at DMA2_S2M0AR.B17;
    sbit  M0A18_DMA2_S2M0AR_bit at DMA2_S2M0AR.B18;
    sbit  M0A19_DMA2_S2M0AR_bit at DMA2_S2M0AR.B19;
    sbit  M0A20_DMA2_S2M0AR_bit at DMA2_S2M0AR.B20;
    sbit  M0A21_DMA2_S2M0AR_bit at DMA2_S2M0AR.B21;
    sbit  M0A22_DMA2_S2M0AR_bit at DMA2_S2M0AR.B22;
    sbit  M0A23_DMA2_S2M0AR_bit at DMA2_S2M0AR.B23;
    sbit  M0A24_DMA2_S2M0AR_bit at DMA2_S2M0AR.B24;
    sbit  M0A25_DMA2_S2M0AR_bit at DMA2_S2M0AR.B25;
    sbit  M0A26_DMA2_S2M0AR_bit at DMA2_S2M0AR.B26;
    sbit  M0A27_DMA2_S2M0AR_bit at DMA2_S2M0AR.B27;
    sbit  M0A28_DMA2_S2M0AR_bit at DMA2_S2M0AR.B28;
    sbit  M0A29_DMA2_S2M0AR_bit at DMA2_S2M0AR.B29;
    sbit  M0A30_DMA2_S2M0AR_bit at DMA2_S2M0AR.B30;
    sbit  M0A31_DMA2_S2M0AR_bit at DMA2_S2M0AR.B31;

sfr unsigned long   volatile DMA2_S2M1AR          absolute 0x40026450;
    sbit  M1A0_DMA2_S2M1AR_bit at DMA2_S2M1AR.B0;
    sbit  M1A1_DMA2_S2M1AR_bit at DMA2_S2M1AR.B1;
    sbit  M1A2_DMA2_S2M1AR_bit at DMA2_S2M1AR.B2;
    sbit  M1A3_DMA2_S2M1AR_bit at DMA2_S2M1AR.B3;
    sbit  M1A4_DMA2_S2M1AR_bit at DMA2_S2M1AR.B4;
    sbit  M1A5_DMA2_S2M1AR_bit at DMA2_S2M1AR.B5;
    sbit  M1A6_DMA2_S2M1AR_bit at DMA2_S2M1AR.B6;
    sbit  M1A7_DMA2_S2M1AR_bit at DMA2_S2M1AR.B7;
    sbit  M1A8_DMA2_S2M1AR_bit at DMA2_S2M1AR.B8;
    sbit  M1A9_DMA2_S2M1AR_bit at DMA2_S2M1AR.B9;
    sbit  M1A10_DMA2_S2M1AR_bit at DMA2_S2M1AR.B10;
    sbit  M1A11_DMA2_S2M1AR_bit at DMA2_S2M1AR.B11;
    sbit  M1A12_DMA2_S2M1AR_bit at DMA2_S2M1AR.B12;
    sbit  M1A13_DMA2_S2M1AR_bit at DMA2_S2M1AR.B13;
    sbit  M1A14_DMA2_S2M1AR_bit at DMA2_S2M1AR.B14;
    sbit  M1A15_DMA2_S2M1AR_bit at DMA2_S2M1AR.B15;
    sbit  M1A16_DMA2_S2M1AR_bit at DMA2_S2M1AR.B16;
    sbit  M1A17_DMA2_S2M1AR_bit at DMA2_S2M1AR.B17;
    sbit  M1A18_DMA2_S2M1AR_bit at DMA2_S2M1AR.B18;
    sbit  M1A19_DMA2_S2M1AR_bit at DMA2_S2M1AR.B19;
    sbit  M1A20_DMA2_S2M1AR_bit at DMA2_S2M1AR.B20;
    sbit  M1A21_DMA2_S2M1AR_bit at DMA2_S2M1AR.B21;
    sbit  M1A22_DMA2_S2M1AR_bit at DMA2_S2M1AR.B22;
    sbit  M1A23_DMA2_S2M1AR_bit at DMA2_S2M1AR.B23;
    sbit  M1A24_DMA2_S2M1AR_bit at DMA2_S2M1AR.B24;
    sbit  M1A25_DMA2_S2M1AR_bit at DMA2_S2M1AR.B25;
    sbit  M1A26_DMA2_S2M1AR_bit at DMA2_S2M1AR.B26;
    sbit  M1A27_DMA2_S2M1AR_bit at DMA2_S2M1AR.B27;
    sbit  M1A28_DMA2_S2M1AR_bit at DMA2_S2M1AR.B28;
    sbit  M1A29_DMA2_S2M1AR_bit at DMA2_S2M1AR.B29;
    sbit  M1A30_DMA2_S2M1AR_bit at DMA2_S2M1AR.B30;
    sbit  M1A31_DMA2_S2M1AR_bit at DMA2_S2M1AR.B31;

sfr unsigned long   volatile DMA2_S2FCR           absolute 0x40026454;
    sbit  FEIE_DMA2_S2FCR_bit at DMA2_S2FCR.B7;
    sbit  FS0_DMA2_S2FCR_bit at DMA2_S2FCR.B3;
    sbit  FS1_DMA2_S2FCR_bit at DMA2_S2FCR.B4;
    sbit  FS2_DMA2_S2FCR_bit at DMA2_S2FCR.B5;
    sbit  DMDIS_DMA2_S2FCR_bit at DMA2_S2FCR.B2;
    sbit  FTH0_DMA2_S2FCR_bit at DMA2_S2FCR.B0;
    sbit  FTH1_DMA2_S2FCR_bit at DMA2_S2FCR.B1;

sfr unsigned long   volatile DMA2_S3CR            absolute 0x40026458;
    sbit  CHSEL0_DMA2_S3CR_bit at DMA2_S3CR.B25;
    sbit  CHSEL1_DMA2_S3CR_bit at DMA2_S3CR.B26;
    sbit  CHSEL2_DMA2_S3CR_bit at DMA2_S3CR.B27;
    sbit  MBURST0_DMA2_S3CR_bit at DMA2_S3CR.B23;
    sbit  MBURST1_DMA2_S3CR_bit at DMA2_S3CR.B24;
    sbit  PBURST0_DMA2_S3CR_bit at DMA2_S3CR.B21;
    sbit  PBURST1_DMA2_S3CR_bit at DMA2_S3CR.B22;
    sbit  ACK_DMA2_S3CR_bit at DMA2_S3CR.B20;
    sbit  CT_DMA2_S3CR_bit at DMA2_S3CR.B19;
    sbit  DBM_DMA2_S3CR_bit at DMA2_S3CR.B18;
    sbit  PL0_DMA2_S3CR_bit at DMA2_S3CR.B16;
    sbit  PL1_DMA2_S3CR_bit at DMA2_S3CR.B17;
    sbit  PINCOS_DMA2_S3CR_bit at DMA2_S3CR.B15;
    sbit  MSIZE0_DMA2_S3CR_bit at DMA2_S3CR.B13;
    sbit  MSIZE1_DMA2_S3CR_bit at DMA2_S3CR.B14;
    sbit  PSIZE0_DMA2_S3CR_bit at DMA2_S3CR.B11;
    sbit  PSIZE1_DMA2_S3CR_bit at DMA2_S3CR.B12;
    sbit  MINC_DMA2_S3CR_bit at DMA2_S3CR.B10;
    sbit  PINC_DMA2_S3CR_bit at DMA2_S3CR.B9;
    sbit  CIRC_DMA2_S3CR_bit at DMA2_S3CR.B8;
    sbit  DIR0_DMA2_S3CR_bit at DMA2_S3CR.B6;
    sbit  DIR1_DMA2_S3CR_bit at DMA2_S3CR.B7;
    sbit  PFCTRL_DMA2_S3CR_bit at DMA2_S3CR.B5;
    sbit  TCIE_DMA2_S3CR_bit at DMA2_S3CR.B4;
    sbit  HTIE_DMA2_S3CR_bit at DMA2_S3CR.B3;
    sbit  TEIE_DMA2_S3CR_bit at DMA2_S3CR.B2;
    sbit  DMEIE_DMA2_S3CR_bit at DMA2_S3CR.B1;
    sbit  EN_DMA2_S3CR_bit at DMA2_S3CR.B0;

sfr unsigned long   volatile DMA2_S3NDTR          absolute 0x4002645C;
    sbit  NDT0_DMA2_S3NDTR_bit at DMA2_S3NDTR.B0;
    sbit  NDT1_DMA2_S3NDTR_bit at DMA2_S3NDTR.B1;
    sbit  NDT2_DMA2_S3NDTR_bit at DMA2_S3NDTR.B2;
    sbit  NDT3_DMA2_S3NDTR_bit at DMA2_S3NDTR.B3;
    sbit  NDT4_DMA2_S3NDTR_bit at DMA2_S3NDTR.B4;
    sbit  NDT5_DMA2_S3NDTR_bit at DMA2_S3NDTR.B5;
    sbit  NDT6_DMA2_S3NDTR_bit at DMA2_S3NDTR.B6;
    sbit  NDT7_DMA2_S3NDTR_bit at DMA2_S3NDTR.B7;
    sbit  NDT8_DMA2_S3NDTR_bit at DMA2_S3NDTR.B8;
    sbit  NDT9_DMA2_S3NDTR_bit at DMA2_S3NDTR.B9;
    sbit  NDT10_DMA2_S3NDTR_bit at DMA2_S3NDTR.B10;
    sbit  NDT11_DMA2_S3NDTR_bit at DMA2_S3NDTR.B11;
    sbit  NDT12_DMA2_S3NDTR_bit at DMA2_S3NDTR.B12;
    sbit  NDT13_DMA2_S3NDTR_bit at DMA2_S3NDTR.B13;
    sbit  NDT14_DMA2_S3NDTR_bit at DMA2_S3NDTR.B14;
    sbit  NDT15_DMA2_S3NDTR_bit at DMA2_S3NDTR.B15;

sfr unsigned long   volatile DMA2_S3PAR           absolute 0x40026460;
    sbit  PA0_DMA2_S3PAR_bit at DMA2_S3PAR.B0;
    sbit  PA1_DMA2_S3PAR_bit at DMA2_S3PAR.B1;
    sbit  PA2_DMA2_S3PAR_bit at DMA2_S3PAR.B2;
    sbit  PA3_DMA2_S3PAR_bit at DMA2_S3PAR.B3;
    sbit  PA4_DMA2_S3PAR_bit at DMA2_S3PAR.B4;
    sbit  PA5_DMA2_S3PAR_bit at DMA2_S3PAR.B5;
    sbit  PA6_DMA2_S3PAR_bit at DMA2_S3PAR.B6;
    sbit  PA7_DMA2_S3PAR_bit at DMA2_S3PAR.B7;
    sbit  PA8_DMA2_S3PAR_bit at DMA2_S3PAR.B8;
    sbit  PA9_DMA2_S3PAR_bit at DMA2_S3PAR.B9;
    sbit  PA10_DMA2_S3PAR_bit at DMA2_S3PAR.B10;
    sbit  PA11_DMA2_S3PAR_bit at DMA2_S3PAR.B11;
    sbit  PA12_DMA2_S3PAR_bit at DMA2_S3PAR.B12;
    sbit  PA13_DMA2_S3PAR_bit at DMA2_S3PAR.B13;
    sbit  PA14_DMA2_S3PAR_bit at DMA2_S3PAR.B14;
    sbit  PA15_DMA2_S3PAR_bit at DMA2_S3PAR.B15;
    sbit  PA16_DMA2_S3PAR_bit at DMA2_S3PAR.B16;
    sbit  PA17_DMA2_S3PAR_bit at DMA2_S3PAR.B17;
    sbit  PA18_DMA2_S3PAR_bit at DMA2_S3PAR.B18;
    sbit  PA19_DMA2_S3PAR_bit at DMA2_S3PAR.B19;
    sbit  PA20_DMA2_S3PAR_bit at DMA2_S3PAR.B20;
    sbit  PA21_DMA2_S3PAR_bit at DMA2_S3PAR.B21;
    sbit  PA22_DMA2_S3PAR_bit at DMA2_S3PAR.B22;
    sbit  PA23_DMA2_S3PAR_bit at DMA2_S3PAR.B23;
    sbit  PA24_DMA2_S3PAR_bit at DMA2_S3PAR.B24;
    sbit  PA25_DMA2_S3PAR_bit at DMA2_S3PAR.B25;
    sbit  PA26_DMA2_S3PAR_bit at DMA2_S3PAR.B26;
    sbit  PA27_DMA2_S3PAR_bit at DMA2_S3PAR.B27;
    sbit  PA28_DMA2_S3PAR_bit at DMA2_S3PAR.B28;
    sbit  PA29_DMA2_S3PAR_bit at DMA2_S3PAR.B29;
    sbit  PA30_DMA2_S3PAR_bit at DMA2_S3PAR.B30;
    sbit  PA31_DMA2_S3PAR_bit at DMA2_S3PAR.B31;

sfr unsigned long   volatile DMA2_S3M0AR          absolute 0x40026464;
    sbit  M0A0_DMA2_S3M0AR_bit at DMA2_S3M0AR.B0;
    sbit  M0A1_DMA2_S3M0AR_bit at DMA2_S3M0AR.B1;
    sbit  M0A2_DMA2_S3M0AR_bit at DMA2_S3M0AR.B2;
    sbit  M0A3_DMA2_S3M0AR_bit at DMA2_S3M0AR.B3;
    sbit  M0A4_DMA2_S3M0AR_bit at DMA2_S3M0AR.B4;
    sbit  M0A5_DMA2_S3M0AR_bit at DMA2_S3M0AR.B5;
    sbit  M0A6_DMA2_S3M0AR_bit at DMA2_S3M0AR.B6;
    sbit  M0A7_DMA2_S3M0AR_bit at DMA2_S3M0AR.B7;
    sbit  M0A8_DMA2_S3M0AR_bit at DMA2_S3M0AR.B8;
    sbit  M0A9_DMA2_S3M0AR_bit at DMA2_S3M0AR.B9;
    sbit  M0A10_DMA2_S3M0AR_bit at DMA2_S3M0AR.B10;
    sbit  M0A11_DMA2_S3M0AR_bit at DMA2_S3M0AR.B11;
    sbit  M0A12_DMA2_S3M0AR_bit at DMA2_S3M0AR.B12;
    sbit  M0A13_DMA2_S3M0AR_bit at DMA2_S3M0AR.B13;
    sbit  M0A14_DMA2_S3M0AR_bit at DMA2_S3M0AR.B14;
    sbit  M0A15_DMA2_S3M0AR_bit at DMA2_S3M0AR.B15;
    sbit  M0A16_DMA2_S3M0AR_bit at DMA2_S3M0AR.B16;
    sbit  M0A17_DMA2_S3M0AR_bit at DMA2_S3M0AR.B17;
    sbit  M0A18_DMA2_S3M0AR_bit at DMA2_S3M0AR.B18;
    sbit  M0A19_DMA2_S3M0AR_bit at DMA2_S3M0AR.B19;
    sbit  M0A20_DMA2_S3M0AR_bit at DMA2_S3M0AR.B20;
    sbit  M0A21_DMA2_S3M0AR_bit at DMA2_S3M0AR.B21;
    sbit  M0A22_DMA2_S3M0AR_bit at DMA2_S3M0AR.B22;
    sbit  M0A23_DMA2_S3M0AR_bit at DMA2_S3M0AR.B23;
    sbit  M0A24_DMA2_S3M0AR_bit at DMA2_S3M0AR.B24;
    sbit  M0A25_DMA2_S3M0AR_bit at DMA2_S3M0AR.B25;
    sbit  M0A26_DMA2_S3M0AR_bit at DMA2_S3M0AR.B26;
    sbit  M0A27_DMA2_S3M0AR_bit at DMA2_S3M0AR.B27;
    sbit  M0A28_DMA2_S3M0AR_bit at DMA2_S3M0AR.B28;
    sbit  M0A29_DMA2_S3M0AR_bit at DMA2_S3M0AR.B29;
    sbit  M0A30_DMA2_S3M0AR_bit at DMA2_S3M0AR.B30;
    sbit  M0A31_DMA2_S3M0AR_bit at DMA2_S3M0AR.B31;

sfr unsigned long   volatile DMA2_S3M1AR          absolute 0x40026468;
    sbit  M1A0_DMA2_S3M1AR_bit at DMA2_S3M1AR.B0;
    sbit  M1A1_DMA2_S3M1AR_bit at DMA2_S3M1AR.B1;
    sbit  M1A2_DMA2_S3M1AR_bit at DMA2_S3M1AR.B2;
    sbit  M1A3_DMA2_S3M1AR_bit at DMA2_S3M1AR.B3;
    sbit  M1A4_DMA2_S3M1AR_bit at DMA2_S3M1AR.B4;
    sbit  M1A5_DMA2_S3M1AR_bit at DMA2_S3M1AR.B5;
    sbit  M1A6_DMA2_S3M1AR_bit at DMA2_S3M1AR.B6;
    sbit  M1A7_DMA2_S3M1AR_bit at DMA2_S3M1AR.B7;
    sbit  M1A8_DMA2_S3M1AR_bit at DMA2_S3M1AR.B8;
    sbit  M1A9_DMA2_S3M1AR_bit at DMA2_S3M1AR.B9;
    sbit  M1A10_DMA2_S3M1AR_bit at DMA2_S3M1AR.B10;
    sbit  M1A11_DMA2_S3M1AR_bit at DMA2_S3M1AR.B11;
    sbit  M1A12_DMA2_S3M1AR_bit at DMA2_S3M1AR.B12;
    sbit  M1A13_DMA2_S3M1AR_bit at DMA2_S3M1AR.B13;
    sbit  M1A14_DMA2_S3M1AR_bit at DMA2_S3M1AR.B14;
    sbit  M1A15_DMA2_S3M1AR_bit at DMA2_S3M1AR.B15;
    sbit  M1A16_DMA2_S3M1AR_bit at DMA2_S3M1AR.B16;
    sbit  M1A17_DMA2_S3M1AR_bit at DMA2_S3M1AR.B17;
    sbit  M1A18_DMA2_S3M1AR_bit at DMA2_S3M1AR.B18;
    sbit  M1A19_DMA2_S3M1AR_bit at DMA2_S3M1AR.B19;
    sbit  M1A20_DMA2_S3M1AR_bit at DMA2_S3M1AR.B20;
    sbit  M1A21_DMA2_S3M1AR_bit at DMA2_S3M1AR.B21;
    sbit  M1A22_DMA2_S3M1AR_bit at DMA2_S3M1AR.B22;
    sbit  M1A23_DMA2_S3M1AR_bit at DMA2_S3M1AR.B23;
    sbit  M1A24_DMA2_S3M1AR_bit at DMA2_S3M1AR.B24;
    sbit  M1A25_DMA2_S3M1AR_bit at DMA2_S3M1AR.B25;
    sbit  M1A26_DMA2_S3M1AR_bit at DMA2_S3M1AR.B26;
    sbit  M1A27_DMA2_S3M1AR_bit at DMA2_S3M1AR.B27;
    sbit  M1A28_DMA2_S3M1AR_bit at DMA2_S3M1AR.B28;
    sbit  M1A29_DMA2_S3M1AR_bit at DMA2_S3M1AR.B29;
    sbit  M1A30_DMA2_S3M1AR_bit at DMA2_S3M1AR.B30;
    sbit  M1A31_DMA2_S3M1AR_bit at DMA2_S3M1AR.B31;

sfr unsigned long   volatile DMA2_S3FCR           absolute 0x4002646C;
    sbit  FEIE_DMA2_S3FCR_bit at DMA2_S3FCR.B7;
    sbit  FS0_DMA2_S3FCR_bit at DMA2_S3FCR.B3;
    sbit  FS1_DMA2_S3FCR_bit at DMA2_S3FCR.B4;
    sbit  FS2_DMA2_S3FCR_bit at DMA2_S3FCR.B5;
    sbit  DMDIS_DMA2_S3FCR_bit at DMA2_S3FCR.B2;
    sbit  FTH0_DMA2_S3FCR_bit at DMA2_S3FCR.B0;
    sbit  FTH1_DMA2_S3FCR_bit at DMA2_S3FCR.B1;

sfr unsigned long   volatile DMA2_S4CR            absolute 0x40026470;
    sbit  CHSEL0_DMA2_S4CR_bit at DMA2_S4CR.B25;
    sbit  CHSEL1_DMA2_S4CR_bit at DMA2_S4CR.B26;
    sbit  CHSEL2_DMA2_S4CR_bit at DMA2_S4CR.B27;
    sbit  MBURST0_DMA2_S4CR_bit at DMA2_S4CR.B23;
    sbit  MBURST1_DMA2_S4CR_bit at DMA2_S4CR.B24;
    sbit  PBURST0_DMA2_S4CR_bit at DMA2_S4CR.B21;
    sbit  PBURST1_DMA2_S4CR_bit at DMA2_S4CR.B22;
    sbit  ACK_DMA2_S4CR_bit at DMA2_S4CR.B20;
    sbit  CT_DMA2_S4CR_bit at DMA2_S4CR.B19;
    sbit  DBM_DMA2_S4CR_bit at DMA2_S4CR.B18;
    sbit  PL0_DMA2_S4CR_bit at DMA2_S4CR.B16;
    sbit  PL1_DMA2_S4CR_bit at DMA2_S4CR.B17;
    sbit  PINCOS_DMA2_S4CR_bit at DMA2_S4CR.B15;
    sbit  MSIZE0_DMA2_S4CR_bit at DMA2_S4CR.B13;
    sbit  MSIZE1_DMA2_S4CR_bit at DMA2_S4CR.B14;
    sbit  PSIZE0_DMA2_S4CR_bit at DMA2_S4CR.B11;
    sbit  PSIZE1_DMA2_S4CR_bit at DMA2_S4CR.B12;
    sbit  MINC_DMA2_S4CR_bit at DMA2_S4CR.B10;
    sbit  PINC_DMA2_S4CR_bit at DMA2_S4CR.B9;
    sbit  CIRC_DMA2_S4CR_bit at DMA2_S4CR.B8;
    sbit  DIR0_DMA2_S4CR_bit at DMA2_S4CR.B6;
    sbit  DIR1_DMA2_S4CR_bit at DMA2_S4CR.B7;
    sbit  PFCTRL_DMA2_S4CR_bit at DMA2_S4CR.B5;
    sbit  TCIE_DMA2_S4CR_bit at DMA2_S4CR.B4;
    sbit  HTIE_DMA2_S4CR_bit at DMA2_S4CR.B3;
    sbit  TEIE_DMA2_S4CR_bit at DMA2_S4CR.B2;
    sbit  DMEIE_DMA2_S4CR_bit at DMA2_S4CR.B1;
    sbit  EN_DMA2_S4CR_bit at DMA2_S4CR.B0;

sfr unsigned long   volatile DMA2_S4NDTR          absolute 0x40026474;
    sbit  NDT0_DMA2_S4NDTR_bit at DMA2_S4NDTR.B0;
    sbit  NDT1_DMA2_S4NDTR_bit at DMA2_S4NDTR.B1;
    sbit  NDT2_DMA2_S4NDTR_bit at DMA2_S4NDTR.B2;
    sbit  NDT3_DMA2_S4NDTR_bit at DMA2_S4NDTR.B3;
    sbit  NDT4_DMA2_S4NDTR_bit at DMA2_S4NDTR.B4;
    sbit  NDT5_DMA2_S4NDTR_bit at DMA2_S4NDTR.B5;
    sbit  NDT6_DMA2_S4NDTR_bit at DMA2_S4NDTR.B6;
    sbit  NDT7_DMA2_S4NDTR_bit at DMA2_S4NDTR.B7;
    sbit  NDT8_DMA2_S4NDTR_bit at DMA2_S4NDTR.B8;
    sbit  NDT9_DMA2_S4NDTR_bit at DMA2_S4NDTR.B9;
    sbit  NDT10_DMA2_S4NDTR_bit at DMA2_S4NDTR.B10;
    sbit  NDT11_DMA2_S4NDTR_bit at DMA2_S4NDTR.B11;
    sbit  NDT12_DMA2_S4NDTR_bit at DMA2_S4NDTR.B12;
    sbit  NDT13_DMA2_S4NDTR_bit at DMA2_S4NDTR.B13;
    sbit  NDT14_DMA2_S4NDTR_bit at DMA2_S4NDTR.B14;
    sbit  NDT15_DMA2_S4NDTR_bit at DMA2_S4NDTR.B15;

sfr unsigned long   volatile DMA2_S4PAR           absolute 0x40026478;
    sbit  PA0_DMA2_S4PAR_bit at DMA2_S4PAR.B0;
    sbit  PA1_DMA2_S4PAR_bit at DMA2_S4PAR.B1;
    sbit  PA2_DMA2_S4PAR_bit at DMA2_S4PAR.B2;
    sbit  PA3_DMA2_S4PAR_bit at DMA2_S4PAR.B3;
    sbit  PA4_DMA2_S4PAR_bit at DMA2_S4PAR.B4;
    sbit  PA5_DMA2_S4PAR_bit at DMA2_S4PAR.B5;
    sbit  PA6_DMA2_S4PAR_bit at DMA2_S4PAR.B6;
    sbit  PA7_DMA2_S4PAR_bit at DMA2_S4PAR.B7;
    sbit  PA8_DMA2_S4PAR_bit at DMA2_S4PAR.B8;
    sbit  PA9_DMA2_S4PAR_bit at DMA2_S4PAR.B9;
    sbit  PA10_DMA2_S4PAR_bit at DMA2_S4PAR.B10;
    sbit  PA11_DMA2_S4PAR_bit at DMA2_S4PAR.B11;
    sbit  PA12_DMA2_S4PAR_bit at DMA2_S4PAR.B12;
    sbit  PA13_DMA2_S4PAR_bit at DMA2_S4PAR.B13;
    sbit  PA14_DMA2_S4PAR_bit at DMA2_S4PAR.B14;
    sbit  PA15_DMA2_S4PAR_bit at DMA2_S4PAR.B15;
    sbit  PA16_DMA2_S4PAR_bit at DMA2_S4PAR.B16;
    sbit  PA17_DMA2_S4PAR_bit at DMA2_S4PAR.B17;
    sbit  PA18_DMA2_S4PAR_bit at DMA2_S4PAR.B18;
    sbit  PA19_DMA2_S4PAR_bit at DMA2_S4PAR.B19;
    sbit  PA20_DMA2_S4PAR_bit at DMA2_S4PAR.B20;
    sbit  PA21_DMA2_S4PAR_bit at DMA2_S4PAR.B21;
    sbit  PA22_DMA2_S4PAR_bit at DMA2_S4PAR.B22;
    sbit  PA23_DMA2_S4PAR_bit at DMA2_S4PAR.B23;
    sbit  PA24_DMA2_S4PAR_bit at DMA2_S4PAR.B24;
    sbit  PA25_DMA2_S4PAR_bit at DMA2_S4PAR.B25;
    sbit  PA26_DMA2_S4PAR_bit at DMA2_S4PAR.B26;
    sbit  PA27_DMA2_S4PAR_bit at DMA2_S4PAR.B27;
    sbit  PA28_DMA2_S4PAR_bit at DMA2_S4PAR.B28;
    sbit  PA29_DMA2_S4PAR_bit at DMA2_S4PAR.B29;
    sbit  PA30_DMA2_S4PAR_bit at DMA2_S4PAR.B30;
    sbit  PA31_DMA2_S4PAR_bit at DMA2_S4PAR.B31;

sfr unsigned long   volatile DMA2_S4M0AR          absolute 0x4002647C;
    sbit  M0A0_DMA2_S4M0AR_bit at DMA2_S4M0AR.B0;
    sbit  M0A1_DMA2_S4M0AR_bit at DMA2_S4M0AR.B1;
    sbit  M0A2_DMA2_S4M0AR_bit at DMA2_S4M0AR.B2;
    sbit  M0A3_DMA2_S4M0AR_bit at DMA2_S4M0AR.B3;
    sbit  M0A4_DMA2_S4M0AR_bit at DMA2_S4M0AR.B4;
    sbit  M0A5_DMA2_S4M0AR_bit at DMA2_S4M0AR.B5;
    sbit  M0A6_DMA2_S4M0AR_bit at DMA2_S4M0AR.B6;
    sbit  M0A7_DMA2_S4M0AR_bit at DMA2_S4M0AR.B7;
    sbit  M0A8_DMA2_S4M0AR_bit at DMA2_S4M0AR.B8;
    sbit  M0A9_DMA2_S4M0AR_bit at DMA2_S4M0AR.B9;
    sbit  M0A10_DMA2_S4M0AR_bit at DMA2_S4M0AR.B10;
    sbit  M0A11_DMA2_S4M0AR_bit at DMA2_S4M0AR.B11;
    sbit  M0A12_DMA2_S4M0AR_bit at DMA2_S4M0AR.B12;
    sbit  M0A13_DMA2_S4M0AR_bit at DMA2_S4M0AR.B13;
    sbit  M0A14_DMA2_S4M0AR_bit at DMA2_S4M0AR.B14;
    sbit  M0A15_DMA2_S4M0AR_bit at DMA2_S4M0AR.B15;
    sbit  M0A16_DMA2_S4M0AR_bit at DMA2_S4M0AR.B16;
    sbit  M0A17_DMA2_S4M0AR_bit at DMA2_S4M0AR.B17;
    sbit  M0A18_DMA2_S4M0AR_bit at DMA2_S4M0AR.B18;
    sbit  M0A19_DMA2_S4M0AR_bit at DMA2_S4M0AR.B19;
    sbit  M0A20_DMA2_S4M0AR_bit at DMA2_S4M0AR.B20;
    sbit  M0A21_DMA2_S4M0AR_bit at DMA2_S4M0AR.B21;
    sbit  M0A22_DMA2_S4M0AR_bit at DMA2_S4M0AR.B22;
    sbit  M0A23_DMA2_S4M0AR_bit at DMA2_S4M0AR.B23;
    sbit  M0A24_DMA2_S4M0AR_bit at DMA2_S4M0AR.B24;
    sbit  M0A25_DMA2_S4M0AR_bit at DMA2_S4M0AR.B25;
    sbit  M0A26_DMA2_S4M0AR_bit at DMA2_S4M0AR.B26;
    sbit  M0A27_DMA2_S4M0AR_bit at DMA2_S4M0AR.B27;
    sbit  M0A28_DMA2_S4M0AR_bit at DMA2_S4M0AR.B28;
    sbit  M0A29_DMA2_S4M0AR_bit at DMA2_S4M0AR.B29;
    sbit  M0A30_DMA2_S4M0AR_bit at DMA2_S4M0AR.B30;
    sbit  M0A31_DMA2_S4M0AR_bit at DMA2_S4M0AR.B31;

sfr unsigned long   volatile DMA2_S4M1AR          absolute 0x40026480;
    sbit  M1A0_DMA2_S4M1AR_bit at DMA2_S4M1AR.B0;
    sbit  M1A1_DMA2_S4M1AR_bit at DMA2_S4M1AR.B1;
    sbit  M1A2_DMA2_S4M1AR_bit at DMA2_S4M1AR.B2;
    sbit  M1A3_DMA2_S4M1AR_bit at DMA2_S4M1AR.B3;
    sbit  M1A4_DMA2_S4M1AR_bit at DMA2_S4M1AR.B4;
    sbit  M1A5_DMA2_S4M1AR_bit at DMA2_S4M1AR.B5;
    sbit  M1A6_DMA2_S4M1AR_bit at DMA2_S4M1AR.B6;
    sbit  M1A7_DMA2_S4M1AR_bit at DMA2_S4M1AR.B7;
    sbit  M1A8_DMA2_S4M1AR_bit at DMA2_S4M1AR.B8;
    sbit  M1A9_DMA2_S4M1AR_bit at DMA2_S4M1AR.B9;
    sbit  M1A10_DMA2_S4M1AR_bit at DMA2_S4M1AR.B10;
    sbit  M1A11_DMA2_S4M1AR_bit at DMA2_S4M1AR.B11;
    sbit  M1A12_DMA2_S4M1AR_bit at DMA2_S4M1AR.B12;
    sbit  M1A13_DMA2_S4M1AR_bit at DMA2_S4M1AR.B13;
    sbit  M1A14_DMA2_S4M1AR_bit at DMA2_S4M1AR.B14;
    sbit  M1A15_DMA2_S4M1AR_bit at DMA2_S4M1AR.B15;
    sbit  M1A16_DMA2_S4M1AR_bit at DMA2_S4M1AR.B16;
    sbit  M1A17_DMA2_S4M1AR_bit at DMA2_S4M1AR.B17;
    sbit  M1A18_DMA2_S4M1AR_bit at DMA2_S4M1AR.B18;
    sbit  M1A19_DMA2_S4M1AR_bit at DMA2_S4M1AR.B19;
    sbit  M1A20_DMA2_S4M1AR_bit at DMA2_S4M1AR.B20;
    sbit  M1A21_DMA2_S4M1AR_bit at DMA2_S4M1AR.B21;
    sbit  M1A22_DMA2_S4M1AR_bit at DMA2_S4M1AR.B22;
    sbit  M1A23_DMA2_S4M1AR_bit at DMA2_S4M1AR.B23;
    sbit  M1A24_DMA2_S4M1AR_bit at DMA2_S4M1AR.B24;
    sbit  M1A25_DMA2_S4M1AR_bit at DMA2_S4M1AR.B25;
    sbit  M1A26_DMA2_S4M1AR_bit at DMA2_S4M1AR.B26;
    sbit  M1A27_DMA2_S4M1AR_bit at DMA2_S4M1AR.B27;
    sbit  M1A28_DMA2_S4M1AR_bit at DMA2_S4M1AR.B28;
    sbit  M1A29_DMA2_S4M1AR_bit at DMA2_S4M1AR.B29;
    sbit  M1A30_DMA2_S4M1AR_bit at DMA2_S4M1AR.B30;
    sbit  M1A31_DMA2_S4M1AR_bit at DMA2_S4M1AR.B31;

sfr unsigned long   volatile DMA2_S4FCR           absolute 0x40026484;
    sbit  FEIE_DMA2_S4FCR_bit at DMA2_S4FCR.B7;
    sbit  FS0_DMA2_S4FCR_bit at DMA2_S4FCR.B3;
    sbit  FS1_DMA2_S4FCR_bit at DMA2_S4FCR.B4;
    sbit  FS2_DMA2_S4FCR_bit at DMA2_S4FCR.B5;
    sbit  DMDIS_DMA2_S4FCR_bit at DMA2_S4FCR.B2;
    sbit  FTH0_DMA2_S4FCR_bit at DMA2_S4FCR.B0;
    sbit  FTH1_DMA2_S4FCR_bit at DMA2_S4FCR.B1;

sfr unsigned long   volatile DMA2_S5CR            absolute 0x40026488;
    sbit  CHSEL0_DMA2_S5CR_bit at DMA2_S5CR.B25;
    sbit  CHSEL1_DMA2_S5CR_bit at DMA2_S5CR.B26;
    sbit  CHSEL2_DMA2_S5CR_bit at DMA2_S5CR.B27;
    sbit  MBURST0_DMA2_S5CR_bit at DMA2_S5CR.B23;
    sbit  MBURST1_DMA2_S5CR_bit at DMA2_S5CR.B24;
    sbit  PBURST0_DMA2_S5CR_bit at DMA2_S5CR.B21;
    sbit  PBURST1_DMA2_S5CR_bit at DMA2_S5CR.B22;
    sbit  ACK_DMA2_S5CR_bit at DMA2_S5CR.B20;
    sbit  CT_DMA2_S5CR_bit at DMA2_S5CR.B19;
    sbit  DBM_DMA2_S5CR_bit at DMA2_S5CR.B18;
    sbit  PL0_DMA2_S5CR_bit at DMA2_S5CR.B16;
    sbit  PL1_DMA2_S5CR_bit at DMA2_S5CR.B17;
    sbit  PINCOS_DMA2_S5CR_bit at DMA2_S5CR.B15;
    sbit  MSIZE0_DMA2_S5CR_bit at DMA2_S5CR.B13;
    sbit  MSIZE1_DMA2_S5CR_bit at DMA2_S5CR.B14;
    sbit  PSIZE0_DMA2_S5CR_bit at DMA2_S5CR.B11;
    sbit  PSIZE1_DMA2_S5CR_bit at DMA2_S5CR.B12;
    sbit  MINC_DMA2_S5CR_bit at DMA2_S5CR.B10;
    sbit  PINC_DMA2_S5CR_bit at DMA2_S5CR.B9;
    sbit  CIRC_DMA2_S5CR_bit at DMA2_S5CR.B8;
    sbit  DIR0_DMA2_S5CR_bit at DMA2_S5CR.B6;
    sbit  DIR1_DMA2_S5CR_bit at DMA2_S5CR.B7;
    sbit  PFCTRL_DMA2_S5CR_bit at DMA2_S5CR.B5;
    sbit  TCIE_DMA2_S5CR_bit at DMA2_S5CR.B4;
    sbit  HTIE_DMA2_S5CR_bit at DMA2_S5CR.B3;
    sbit  TEIE_DMA2_S5CR_bit at DMA2_S5CR.B2;
    sbit  DMEIE_DMA2_S5CR_bit at DMA2_S5CR.B1;
    sbit  EN_DMA2_S5CR_bit at DMA2_S5CR.B0;

sfr unsigned long   volatile DMA2_S5NDTR          absolute 0x4002648C;
    sbit  NDT0_DMA2_S5NDTR_bit at DMA2_S5NDTR.B0;
    sbit  NDT1_DMA2_S5NDTR_bit at DMA2_S5NDTR.B1;
    sbit  NDT2_DMA2_S5NDTR_bit at DMA2_S5NDTR.B2;
    sbit  NDT3_DMA2_S5NDTR_bit at DMA2_S5NDTR.B3;
    sbit  NDT4_DMA2_S5NDTR_bit at DMA2_S5NDTR.B4;
    sbit  NDT5_DMA2_S5NDTR_bit at DMA2_S5NDTR.B5;
    sbit  NDT6_DMA2_S5NDTR_bit at DMA2_S5NDTR.B6;
    sbit  NDT7_DMA2_S5NDTR_bit at DMA2_S5NDTR.B7;
    sbit  NDT8_DMA2_S5NDTR_bit at DMA2_S5NDTR.B8;
    sbit  NDT9_DMA2_S5NDTR_bit at DMA2_S5NDTR.B9;
    sbit  NDT10_DMA2_S5NDTR_bit at DMA2_S5NDTR.B10;
    sbit  NDT11_DMA2_S5NDTR_bit at DMA2_S5NDTR.B11;
    sbit  NDT12_DMA2_S5NDTR_bit at DMA2_S5NDTR.B12;
    sbit  NDT13_DMA2_S5NDTR_bit at DMA2_S5NDTR.B13;
    sbit  NDT14_DMA2_S5NDTR_bit at DMA2_S5NDTR.B14;
    sbit  NDT15_DMA2_S5NDTR_bit at DMA2_S5NDTR.B15;

sfr unsigned long   volatile DMA2_S5PAR           absolute 0x40026490;
    sbit  PA0_DMA2_S5PAR_bit at DMA2_S5PAR.B0;
    sbit  PA1_DMA2_S5PAR_bit at DMA2_S5PAR.B1;
    sbit  PA2_DMA2_S5PAR_bit at DMA2_S5PAR.B2;
    sbit  PA3_DMA2_S5PAR_bit at DMA2_S5PAR.B3;
    sbit  PA4_DMA2_S5PAR_bit at DMA2_S5PAR.B4;
    sbit  PA5_DMA2_S5PAR_bit at DMA2_S5PAR.B5;
    sbit  PA6_DMA2_S5PAR_bit at DMA2_S5PAR.B6;
    sbit  PA7_DMA2_S5PAR_bit at DMA2_S5PAR.B7;
    sbit  PA8_DMA2_S5PAR_bit at DMA2_S5PAR.B8;
    sbit  PA9_DMA2_S5PAR_bit at DMA2_S5PAR.B9;
    sbit  PA10_DMA2_S5PAR_bit at DMA2_S5PAR.B10;
    sbit  PA11_DMA2_S5PAR_bit at DMA2_S5PAR.B11;
    sbit  PA12_DMA2_S5PAR_bit at DMA2_S5PAR.B12;
    sbit  PA13_DMA2_S5PAR_bit at DMA2_S5PAR.B13;
    sbit  PA14_DMA2_S5PAR_bit at DMA2_S5PAR.B14;
    sbit  PA15_DMA2_S5PAR_bit at DMA2_S5PAR.B15;
    sbit  PA16_DMA2_S5PAR_bit at DMA2_S5PAR.B16;
    sbit  PA17_DMA2_S5PAR_bit at DMA2_S5PAR.B17;
    sbit  PA18_DMA2_S5PAR_bit at DMA2_S5PAR.B18;
    sbit  PA19_DMA2_S5PAR_bit at DMA2_S5PAR.B19;
    sbit  PA20_DMA2_S5PAR_bit at DMA2_S5PAR.B20;
    sbit  PA21_DMA2_S5PAR_bit at DMA2_S5PAR.B21;
    sbit  PA22_DMA2_S5PAR_bit at DMA2_S5PAR.B22;
    sbit  PA23_DMA2_S5PAR_bit at DMA2_S5PAR.B23;
    sbit  PA24_DMA2_S5PAR_bit at DMA2_S5PAR.B24;
    sbit  PA25_DMA2_S5PAR_bit at DMA2_S5PAR.B25;
    sbit  PA26_DMA2_S5PAR_bit at DMA2_S5PAR.B26;
    sbit  PA27_DMA2_S5PAR_bit at DMA2_S5PAR.B27;
    sbit  PA28_DMA2_S5PAR_bit at DMA2_S5PAR.B28;
    sbit  PA29_DMA2_S5PAR_bit at DMA2_S5PAR.B29;
    sbit  PA30_DMA2_S5PAR_bit at DMA2_S5PAR.B30;
    sbit  PA31_DMA2_S5PAR_bit at DMA2_S5PAR.B31;

sfr unsigned long   volatile DMA2_S5M0AR          absolute 0x40026494;
    sbit  M0A0_DMA2_S5M0AR_bit at DMA2_S5M0AR.B0;
    sbit  M0A1_DMA2_S5M0AR_bit at DMA2_S5M0AR.B1;
    sbit  M0A2_DMA2_S5M0AR_bit at DMA2_S5M0AR.B2;
    sbit  M0A3_DMA2_S5M0AR_bit at DMA2_S5M0AR.B3;
    sbit  M0A4_DMA2_S5M0AR_bit at DMA2_S5M0AR.B4;
    sbit  M0A5_DMA2_S5M0AR_bit at DMA2_S5M0AR.B5;
    sbit  M0A6_DMA2_S5M0AR_bit at DMA2_S5M0AR.B6;
    sbit  M0A7_DMA2_S5M0AR_bit at DMA2_S5M0AR.B7;
    sbit  M0A8_DMA2_S5M0AR_bit at DMA2_S5M0AR.B8;
    sbit  M0A9_DMA2_S5M0AR_bit at DMA2_S5M0AR.B9;
    sbit  M0A10_DMA2_S5M0AR_bit at DMA2_S5M0AR.B10;
    sbit  M0A11_DMA2_S5M0AR_bit at DMA2_S5M0AR.B11;
    sbit  M0A12_DMA2_S5M0AR_bit at DMA2_S5M0AR.B12;
    sbit  M0A13_DMA2_S5M0AR_bit at DMA2_S5M0AR.B13;
    sbit  M0A14_DMA2_S5M0AR_bit at DMA2_S5M0AR.B14;
    sbit  M0A15_DMA2_S5M0AR_bit at DMA2_S5M0AR.B15;
    sbit  M0A16_DMA2_S5M0AR_bit at DMA2_S5M0AR.B16;
    sbit  M0A17_DMA2_S5M0AR_bit at DMA2_S5M0AR.B17;
    sbit  M0A18_DMA2_S5M0AR_bit at DMA2_S5M0AR.B18;
    sbit  M0A19_DMA2_S5M0AR_bit at DMA2_S5M0AR.B19;
    sbit  M0A20_DMA2_S5M0AR_bit at DMA2_S5M0AR.B20;
    sbit  M0A21_DMA2_S5M0AR_bit at DMA2_S5M0AR.B21;
    sbit  M0A22_DMA2_S5M0AR_bit at DMA2_S5M0AR.B22;
    sbit  M0A23_DMA2_S5M0AR_bit at DMA2_S5M0AR.B23;
    sbit  M0A24_DMA2_S5M0AR_bit at DMA2_S5M0AR.B24;
    sbit  M0A25_DMA2_S5M0AR_bit at DMA2_S5M0AR.B25;
    sbit  M0A26_DMA2_S5M0AR_bit at DMA2_S5M0AR.B26;
    sbit  M0A27_DMA2_S5M0AR_bit at DMA2_S5M0AR.B27;
    sbit  M0A28_DMA2_S5M0AR_bit at DMA2_S5M0AR.B28;
    sbit  M0A29_DMA2_S5M0AR_bit at DMA2_S5M0AR.B29;
    sbit  M0A30_DMA2_S5M0AR_bit at DMA2_S5M0AR.B30;
    sbit  M0A31_DMA2_S5M0AR_bit at DMA2_S5M0AR.B31;

sfr unsigned long   volatile DMA2_S5M1AR          absolute 0x40026498;
    sbit  M1A0_DMA2_S5M1AR_bit at DMA2_S5M1AR.B0;
    sbit  M1A1_DMA2_S5M1AR_bit at DMA2_S5M1AR.B1;
    sbit  M1A2_DMA2_S5M1AR_bit at DMA2_S5M1AR.B2;
    sbit  M1A3_DMA2_S5M1AR_bit at DMA2_S5M1AR.B3;
    sbit  M1A4_DMA2_S5M1AR_bit at DMA2_S5M1AR.B4;
    sbit  M1A5_DMA2_S5M1AR_bit at DMA2_S5M1AR.B5;
    sbit  M1A6_DMA2_S5M1AR_bit at DMA2_S5M1AR.B6;
    sbit  M1A7_DMA2_S5M1AR_bit at DMA2_S5M1AR.B7;
    sbit  M1A8_DMA2_S5M1AR_bit at DMA2_S5M1AR.B8;
    sbit  M1A9_DMA2_S5M1AR_bit at DMA2_S5M1AR.B9;
    sbit  M1A10_DMA2_S5M1AR_bit at DMA2_S5M1AR.B10;
    sbit  M1A11_DMA2_S5M1AR_bit at DMA2_S5M1AR.B11;
    sbit  M1A12_DMA2_S5M1AR_bit at DMA2_S5M1AR.B12;
    sbit  M1A13_DMA2_S5M1AR_bit at DMA2_S5M1AR.B13;
    sbit  M1A14_DMA2_S5M1AR_bit at DMA2_S5M1AR.B14;
    sbit  M1A15_DMA2_S5M1AR_bit at DMA2_S5M1AR.B15;
    sbit  M1A16_DMA2_S5M1AR_bit at DMA2_S5M1AR.B16;
    sbit  M1A17_DMA2_S5M1AR_bit at DMA2_S5M1AR.B17;
    sbit  M1A18_DMA2_S5M1AR_bit at DMA2_S5M1AR.B18;
    sbit  M1A19_DMA2_S5M1AR_bit at DMA2_S5M1AR.B19;
    sbit  M1A20_DMA2_S5M1AR_bit at DMA2_S5M1AR.B20;
    sbit  M1A21_DMA2_S5M1AR_bit at DMA2_S5M1AR.B21;
    sbit  M1A22_DMA2_S5M1AR_bit at DMA2_S5M1AR.B22;
    sbit  M1A23_DMA2_S5M1AR_bit at DMA2_S5M1AR.B23;
    sbit  M1A24_DMA2_S5M1AR_bit at DMA2_S5M1AR.B24;
    sbit  M1A25_DMA2_S5M1AR_bit at DMA2_S5M1AR.B25;
    sbit  M1A26_DMA2_S5M1AR_bit at DMA2_S5M1AR.B26;
    sbit  M1A27_DMA2_S5M1AR_bit at DMA2_S5M1AR.B27;
    sbit  M1A28_DMA2_S5M1AR_bit at DMA2_S5M1AR.B28;
    sbit  M1A29_DMA2_S5M1AR_bit at DMA2_S5M1AR.B29;
    sbit  M1A30_DMA2_S5M1AR_bit at DMA2_S5M1AR.B30;
    sbit  M1A31_DMA2_S5M1AR_bit at DMA2_S5M1AR.B31;

sfr unsigned long   volatile DMA2_S5FCR           absolute 0x4002649C;
    sbit  FEIE_DMA2_S5FCR_bit at DMA2_S5FCR.B7;
    sbit  FS0_DMA2_S5FCR_bit at DMA2_S5FCR.B3;
    sbit  FS1_DMA2_S5FCR_bit at DMA2_S5FCR.B4;
    sbit  FS2_DMA2_S5FCR_bit at DMA2_S5FCR.B5;
    sbit  DMDIS_DMA2_S5FCR_bit at DMA2_S5FCR.B2;
    sbit  FTH0_DMA2_S5FCR_bit at DMA2_S5FCR.B0;
    sbit  FTH1_DMA2_S5FCR_bit at DMA2_S5FCR.B1;

sfr unsigned long   volatile DMA2_S6CR            absolute 0x400264A0;
    sbit  CHSEL0_DMA2_S6CR_bit at DMA2_S6CR.B25;
    sbit  CHSEL1_DMA2_S6CR_bit at DMA2_S6CR.B26;
    sbit  CHSEL2_DMA2_S6CR_bit at DMA2_S6CR.B27;
    sbit  MBURST0_DMA2_S6CR_bit at DMA2_S6CR.B23;
    sbit  MBURST1_DMA2_S6CR_bit at DMA2_S6CR.B24;
    sbit  PBURST0_DMA2_S6CR_bit at DMA2_S6CR.B21;
    sbit  PBURST1_DMA2_S6CR_bit at DMA2_S6CR.B22;
    sbit  ACK_DMA2_S6CR_bit at DMA2_S6CR.B20;
    sbit  CT_DMA2_S6CR_bit at DMA2_S6CR.B19;
    sbit  DBM_DMA2_S6CR_bit at DMA2_S6CR.B18;
    sbit  PL0_DMA2_S6CR_bit at DMA2_S6CR.B16;
    sbit  PL1_DMA2_S6CR_bit at DMA2_S6CR.B17;
    sbit  PINCOS_DMA2_S6CR_bit at DMA2_S6CR.B15;
    sbit  MSIZE0_DMA2_S6CR_bit at DMA2_S6CR.B13;
    sbit  MSIZE1_DMA2_S6CR_bit at DMA2_S6CR.B14;
    sbit  PSIZE0_DMA2_S6CR_bit at DMA2_S6CR.B11;
    sbit  PSIZE1_DMA2_S6CR_bit at DMA2_S6CR.B12;
    sbit  MINC_DMA2_S6CR_bit at DMA2_S6CR.B10;
    sbit  PINC_DMA2_S6CR_bit at DMA2_S6CR.B9;
    sbit  CIRC_DMA2_S6CR_bit at DMA2_S6CR.B8;
    sbit  DIR0_DMA2_S6CR_bit at DMA2_S6CR.B6;
    sbit  DIR1_DMA2_S6CR_bit at DMA2_S6CR.B7;
    sbit  PFCTRL_DMA2_S6CR_bit at DMA2_S6CR.B5;
    sbit  TCIE_DMA2_S6CR_bit at DMA2_S6CR.B4;
    sbit  HTIE_DMA2_S6CR_bit at DMA2_S6CR.B3;
    sbit  TEIE_DMA2_S6CR_bit at DMA2_S6CR.B2;
    sbit  DMEIE_DMA2_S6CR_bit at DMA2_S6CR.B1;
    sbit  EN_DMA2_S6CR_bit at DMA2_S6CR.B0;

sfr unsigned long   volatile DMA2_S6NDTR          absolute 0x400264A4;
    sbit  NDT0_DMA2_S6NDTR_bit at DMA2_S6NDTR.B0;
    sbit  NDT1_DMA2_S6NDTR_bit at DMA2_S6NDTR.B1;
    sbit  NDT2_DMA2_S6NDTR_bit at DMA2_S6NDTR.B2;
    sbit  NDT3_DMA2_S6NDTR_bit at DMA2_S6NDTR.B3;
    sbit  NDT4_DMA2_S6NDTR_bit at DMA2_S6NDTR.B4;
    sbit  NDT5_DMA2_S6NDTR_bit at DMA2_S6NDTR.B5;
    sbit  NDT6_DMA2_S6NDTR_bit at DMA2_S6NDTR.B6;
    sbit  NDT7_DMA2_S6NDTR_bit at DMA2_S6NDTR.B7;
    sbit  NDT8_DMA2_S6NDTR_bit at DMA2_S6NDTR.B8;
    sbit  NDT9_DMA2_S6NDTR_bit at DMA2_S6NDTR.B9;
    sbit  NDT10_DMA2_S6NDTR_bit at DMA2_S6NDTR.B10;
    sbit  NDT11_DMA2_S6NDTR_bit at DMA2_S6NDTR.B11;
    sbit  NDT12_DMA2_S6NDTR_bit at DMA2_S6NDTR.B12;
    sbit  NDT13_DMA2_S6NDTR_bit at DMA2_S6NDTR.B13;
    sbit  NDT14_DMA2_S6NDTR_bit at DMA2_S6NDTR.B14;
    sbit  NDT15_DMA2_S6NDTR_bit at DMA2_S6NDTR.B15;

sfr unsigned long   volatile DMA2_S6PAR           absolute 0x400264A8;
    sbit  PA0_DMA2_S6PAR_bit at DMA2_S6PAR.B0;
    sbit  PA1_DMA2_S6PAR_bit at DMA2_S6PAR.B1;
    sbit  PA2_DMA2_S6PAR_bit at DMA2_S6PAR.B2;
    sbit  PA3_DMA2_S6PAR_bit at DMA2_S6PAR.B3;
    sbit  PA4_DMA2_S6PAR_bit at DMA2_S6PAR.B4;
    sbit  PA5_DMA2_S6PAR_bit at DMA2_S6PAR.B5;
    sbit  PA6_DMA2_S6PAR_bit at DMA2_S6PAR.B6;
    sbit  PA7_DMA2_S6PAR_bit at DMA2_S6PAR.B7;
    sbit  PA8_DMA2_S6PAR_bit at DMA2_S6PAR.B8;
    sbit  PA9_DMA2_S6PAR_bit at DMA2_S6PAR.B9;
    sbit  PA10_DMA2_S6PAR_bit at DMA2_S6PAR.B10;
    sbit  PA11_DMA2_S6PAR_bit at DMA2_S6PAR.B11;
    sbit  PA12_DMA2_S6PAR_bit at DMA2_S6PAR.B12;
    sbit  PA13_DMA2_S6PAR_bit at DMA2_S6PAR.B13;
    sbit  PA14_DMA2_S6PAR_bit at DMA2_S6PAR.B14;
    sbit  PA15_DMA2_S6PAR_bit at DMA2_S6PAR.B15;
    sbit  PA16_DMA2_S6PAR_bit at DMA2_S6PAR.B16;
    sbit  PA17_DMA2_S6PAR_bit at DMA2_S6PAR.B17;
    sbit  PA18_DMA2_S6PAR_bit at DMA2_S6PAR.B18;
    sbit  PA19_DMA2_S6PAR_bit at DMA2_S6PAR.B19;
    sbit  PA20_DMA2_S6PAR_bit at DMA2_S6PAR.B20;
    sbit  PA21_DMA2_S6PAR_bit at DMA2_S6PAR.B21;
    sbit  PA22_DMA2_S6PAR_bit at DMA2_S6PAR.B22;
    sbit  PA23_DMA2_S6PAR_bit at DMA2_S6PAR.B23;
    sbit  PA24_DMA2_S6PAR_bit at DMA2_S6PAR.B24;
    sbit  PA25_DMA2_S6PAR_bit at DMA2_S6PAR.B25;
    sbit  PA26_DMA2_S6PAR_bit at DMA2_S6PAR.B26;
    sbit  PA27_DMA2_S6PAR_bit at DMA2_S6PAR.B27;
    sbit  PA28_DMA2_S6PAR_bit at DMA2_S6PAR.B28;
    sbit  PA29_DMA2_S6PAR_bit at DMA2_S6PAR.B29;
    sbit  PA30_DMA2_S6PAR_bit at DMA2_S6PAR.B30;
    sbit  PA31_DMA2_S6PAR_bit at DMA2_S6PAR.B31;

sfr unsigned long   volatile DMA2_S6M0AR          absolute 0x400264AC;
    sbit  M0A0_DMA2_S6M0AR_bit at DMA2_S6M0AR.B0;
    sbit  M0A1_DMA2_S6M0AR_bit at DMA2_S6M0AR.B1;
    sbit  M0A2_DMA2_S6M0AR_bit at DMA2_S6M0AR.B2;
    sbit  M0A3_DMA2_S6M0AR_bit at DMA2_S6M0AR.B3;
    sbit  M0A4_DMA2_S6M0AR_bit at DMA2_S6M0AR.B4;
    sbit  M0A5_DMA2_S6M0AR_bit at DMA2_S6M0AR.B5;
    sbit  M0A6_DMA2_S6M0AR_bit at DMA2_S6M0AR.B6;
    sbit  M0A7_DMA2_S6M0AR_bit at DMA2_S6M0AR.B7;
    sbit  M0A8_DMA2_S6M0AR_bit at DMA2_S6M0AR.B8;
    sbit  M0A9_DMA2_S6M0AR_bit at DMA2_S6M0AR.B9;
    sbit  M0A10_DMA2_S6M0AR_bit at DMA2_S6M0AR.B10;
    sbit  M0A11_DMA2_S6M0AR_bit at DMA2_S6M0AR.B11;
    sbit  M0A12_DMA2_S6M0AR_bit at DMA2_S6M0AR.B12;
    sbit  M0A13_DMA2_S6M0AR_bit at DMA2_S6M0AR.B13;
    sbit  M0A14_DMA2_S6M0AR_bit at DMA2_S6M0AR.B14;
    sbit  M0A15_DMA2_S6M0AR_bit at DMA2_S6M0AR.B15;
    sbit  M0A16_DMA2_S6M0AR_bit at DMA2_S6M0AR.B16;
    sbit  M0A17_DMA2_S6M0AR_bit at DMA2_S6M0AR.B17;
    sbit  M0A18_DMA2_S6M0AR_bit at DMA2_S6M0AR.B18;
    sbit  M0A19_DMA2_S6M0AR_bit at DMA2_S6M0AR.B19;
    sbit  M0A20_DMA2_S6M0AR_bit at DMA2_S6M0AR.B20;
    sbit  M0A21_DMA2_S6M0AR_bit at DMA2_S6M0AR.B21;
    sbit  M0A22_DMA2_S6M0AR_bit at DMA2_S6M0AR.B22;
    sbit  M0A23_DMA2_S6M0AR_bit at DMA2_S6M0AR.B23;
    sbit  M0A24_DMA2_S6M0AR_bit at DMA2_S6M0AR.B24;
    sbit  M0A25_DMA2_S6M0AR_bit at DMA2_S6M0AR.B25;
    sbit  M0A26_DMA2_S6M0AR_bit at DMA2_S6M0AR.B26;
    sbit  M0A27_DMA2_S6M0AR_bit at DMA2_S6M0AR.B27;
    sbit  M0A28_DMA2_S6M0AR_bit at DMA2_S6M0AR.B28;
    sbit  M0A29_DMA2_S6M0AR_bit at DMA2_S6M0AR.B29;
    sbit  M0A30_DMA2_S6M0AR_bit at DMA2_S6M0AR.B30;
    sbit  M0A31_DMA2_S6M0AR_bit at DMA2_S6M0AR.B31;

sfr unsigned long   volatile DMA2_S6M1AR          absolute 0x400264B0;
    sbit  M1A0_DMA2_S6M1AR_bit at DMA2_S6M1AR.B0;
    sbit  M1A1_DMA2_S6M1AR_bit at DMA2_S6M1AR.B1;
    sbit  M1A2_DMA2_S6M1AR_bit at DMA2_S6M1AR.B2;
    sbit  M1A3_DMA2_S6M1AR_bit at DMA2_S6M1AR.B3;
    sbit  M1A4_DMA2_S6M1AR_bit at DMA2_S6M1AR.B4;
    sbit  M1A5_DMA2_S6M1AR_bit at DMA2_S6M1AR.B5;
    sbit  M1A6_DMA2_S6M1AR_bit at DMA2_S6M1AR.B6;
    sbit  M1A7_DMA2_S6M1AR_bit at DMA2_S6M1AR.B7;
    sbit  M1A8_DMA2_S6M1AR_bit at DMA2_S6M1AR.B8;
    sbit  M1A9_DMA2_S6M1AR_bit at DMA2_S6M1AR.B9;
    sbit  M1A10_DMA2_S6M1AR_bit at DMA2_S6M1AR.B10;
    sbit  M1A11_DMA2_S6M1AR_bit at DMA2_S6M1AR.B11;
    sbit  M1A12_DMA2_S6M1AR_bit at DMA2_S6M1AR.B12;
    sbit  M1A13_DMA2_S6M1AR_bit at DMA2_S6M1AR.B13;
    sbit  M1A14_DMA2_S6M1AR_bit at DMA2_S6M1AR.B14;
    sbit  M1A15_DMA2_S6M1AR_bit at DMA2_S6M1AR.B15;
    sbit  M1A16_DMA2_S6M1AR_bit at DMA2_S6M1AR.B16;
    sbit  M1A17_DMA2_S6M1AR_bit at DMA2_S6M1AR.B17;
    sbit  M1A18_DMA2_S6M1AR_bit at DMA2_S6M1AR.B18;
    sbit  M1A19_DMA2_S6M1AR_bit at DMA2_S6M1AR.B19;
    sbit  M1A20_DMA2_S6M1AR_bit at DMA2_S6M1AR.B20;
    sbit  M1A21_DMA2_S6M1AR_bit at DMA2_S6M1AR.B21;
    sbit  M1A22_DMA2_S6M1AR_bit at DMA2_S6M1AR.B22;
    sbit  M1A23_DMA2_S6M1AR_bit at DMA2_S6M1AR.B23;
    sbit  M1A24_DMA2_S6M1AR_bit at DMA2_S6M1AR.B24;
    sbit  M1A25_DMA2_S6M1AR_bit at DMA2_S6M1AR.B25;
    sbit  M1A26_DMA2_S6M1AR_bit at DMA2_S6M1AR.B26;
    sbit  M1A27_DMA2_S6M1AR_bit at DMA2_S6M1AR.B27;
    sbit  M1A28_DMA2_S6M1AR_bit at DMA2_S6M1AR.B28;
    sbit  M1A29_DMA2_S6M1AR_bit at DMA2_S6M1AR.B29;
    sbit  M1A30_DMA2_S6M1AR_bit at DMA2_S6M1AR.B30;
    sbit  M1A31_DMA2_S6M1AR_bit at DMA2_S6M1AR.B31;

sfr unsigned long   volatile DMA2_S6FCR           absolute 0x400264B4;
    sbit  FEIE_DMA2_S6FCR_bit at DMA2_S6FCR.B7;
    sbit  FS0_DMA2_S6FCR_bit at DMA2_S6FCR.B3;
    sbit  FS1_DMA2_S6FCR_bit at DMA2_S6FCR.B4;
    sbit  FS2_DMA2_S6FCR_bit at DMA2_S6FCR.B5;
    sbit  DMDIS_DMA2_S6FCR_bit at DMA2_S6FCR.B2;
    sbit  FTH0_DMA2_S6FCR_bit at DMA2_S6FCR.B0;
    sbit  FTH1_DMA2_S6FCR_bit at DMA2_S6FCR.B1;

sfr unsigned long   volatile DMA2_S7CR            absolute 0x400264B8;
    sbit  CHSEL0_DMA2_S7CR_bit at DMA2_S7CR.B25;
    sbit  CHSEL1_DMA2_S7CR_bit at DMA2_S7CR.B26;
    sbit  CHSEL2_DMA2_S7CR_bit at DMA2_S7CR.B27;
    sbit  MBURST0_DMA2_S7CR_bit at DMA2_S7CR.B23;
    sbit  MBURST1_DMA2_S7CR_bit at DMA2_S7CR.B24;
    sbit  PBURST0_DMA2_S7CR_bit at DMA2_S7CR.B21;
    sbit  PBURST1_DMA2_S7CR_bit at DMA2_S7CR.B22;
    sbit  ACK_DMA2_S7CR_bit at DMA2_S7CR.B20;
    sbit  CT_DMA2_S7CR_bit at DMA2_S7CR.B19;
    sbit  DBM_DMA2_S7CR_bit at DMA2_S7CR.B18;
    sbit  PL0_DMA2_S7CR_bit at DMA2_S7CR.B16;
    sbit  PL1_DMA2_S7CR_bit at DMA2_S7CR.B17;
    sbit  PINCOS_DMA2_S7CR_bit at DMA2_S7CR.B15;
    sbit  MSIZE0_DMA2_S7CR_bit at DMA2_S7CR.B13;
    sbit  MSIZE1_DMA2_S7CR_bit at DMA2_S7CR.B14;
    sbit  PSIZE0_DMA2_S7CR_bit at DMA2_S7CR.B11;
    sbit  PSIZE1_DMA2_S7CR_bit at DMA2_S7CR.B12;
    sbit  MINC_DMA2_S7CR_bit at DMA2_S7CR.B10;
    sbit  PINC_DMA2_S7CR_bit at DMA2_S7CR.B9;
    sbit  CIRC_DMA2_S7CR_bit at DMA2_S7CR.B8;
    sbit  DIR0_DMA2_S7CR_bit at DMA2_S7CR.B6;
    sbit  DIR1_DMA2_S7CR_bit at DMA2_S7CR.B7;
    sbit  PFCTRL_DMA2_S7CR_bit at DMA2_S7CR.B5;
    sbit  TCIE_DMA2_S7CR_bit at DMA2_S7CR.B4;
    sbit  HTIE_DMA2_S7CR_bit at DMA2_S7CR.B3;
    sbit  TEIE_DMA2_S7CR_bit at DMA2_S7CR.B2;
    sbit  DMEIE_DMA2_S7CR_bit at DMA2_S7CR.B1;
    sbit  EN_DMA2_S7CR_bit at DMA2_S7CR.B0;

sfr unsigned long   volatile DMA2_S7NDTR          absolute 0x400264BC;
    sbit  NDT0_DMA2_S7NDTR_bit at DMA2_S7NDTR.B0;
    sbit  NDT1_DMA2_S7NDTR_bit at DMA2_S7NDTR.B1;
    sbit  NDT2_DMA2_S7NDTR_bit at DMA2_S7NDTR.B2;
    sbit  NDT3_DMA2_S7NDTR_bit at DMA2_S7NDTR.B3;
    sbit  NDT4_DMA2_S7NDTR_bit at DMA2_S7NDTR.B4;
    sbit  NDT5_DMA2_S7NDTR_bit at DMA2_S7NDTR.B5;
    sbit  NDT6_DMA2_S7NDTR_bit at DMA2_S7NDTR.B6;
    sbit  NDT7_DMA2_S7NDTR_bit at DMA2_S7NDTR.B7;
    sbit  NDT8_DMA2_S7NDTR_bit at DMA2_S7NDTR.B8;
    sbit  NDT9_DMA2_S7NDTR_bit at DMA2_S7NDTR.B9;
    sbit  NDT10_DMA2_S7NDTR_bit at DMA2_S7NDTR.B10;
    sbit  NDT11_DMA2_S7NDTR_bit at DMA2_S7NDTR.B11;
    sbit  NDT12_DMA2_S7NDTR_bit at DMA2_S7NDTR.B12;
    sbit  NDT13_DMA2_S7NDTR_bit at DMA2_S7NDTR.B13;
    sbit  NDT14_DMA2_S7NDTR_bit at DMA2_S7NDTR.B14;
    sbit  NDT15_DMA2_S7NDTR_bit at DMA2_S7NDTR.B15;

sfr unsigned long   volatile DMA2_S7PAR           absolute 0x400264C0;
    sbit  PA0_DMA2_S7PAR_bit at DMA2_S7PAR.B0;
    sbit  PA1_DMA2_S7PAR_bit at DMA2_S7PAR.B1;
    sbit  PA2_DMA2_S7PAR_bit at DMA2_S7PAR.B2;
    sbit  PA3_DMA2_S7PAR_bit at DMA2_S7PAR.B3;
    sbit  PA4_DMA2_S7PAR_bit at DMA2_S7PAR.B4;
    sbit  PA5_DMA2_S7PAR_bit at DMA2_S7PAR.B5;
    sbit  PA6_DMA2_S7PAR_bit at DMA2_S7PAR.B6;
    sbit  PA7_DMA2_S7PAR_bit at DMA2_S7PAR.B7;
    sbit  PA8_DMA2_S7PAR_bit at DMA2_S7PAR.B8;
    sbit  PA9_DMA2_S7PAR_bit at DMA2_S7PAR.B9;
    sbit  PA10_DMA2_S7PAR_bit at DMA2_S7PAR.B10;
    sbit  PA11_DMA2_S7PAR_bit at DMA2_S7PAR.B11;
    sbit  PA12_DMA2_S7PAR_bit at DMA2_S7PAR.B12;
    sbit  PA13_DMA2_S7PAR_bit at DMA2_S7PAR.B13;
    sbit  PA14_DMA2_S7PAR_bit at DMA2_S7PAR.B14;
    sbit  PA15_DMA2_S7PAR_bit at DMA2_S7PAR.B15;
    sbit  PA16_DMA2_S7PAR_bit at DMA2_S7PAR.B16;
    sbit  PA17_DMA2_S7PAR_bit at DMA2_S7PAR.B17;
    sbit  PA18_DMA2_S7PAR_bit at DMA2_S7PAR.B18;
    sbit  PA19_DMA2_S7PAR_bit at DMA2_S7PAR.B19;
    sbit  PA20_DMA2_S7PAR_bit at DMA2_S7PAR.B20;
    sbit  PA21_DMA2_S7PAR_bit at DMA2_S7PAR.B21;
    sbit  PA22_DMA2_S7PAR_bit at DMA2_S7PAR.B22;
    sbit  PA23_DMA2_S7PAR_bit at DMA2_S7PAR.B23;
    sbit  PA24_DMA2_S7PAR_bit at DMA2_S7PAR.B24;
    sbit  PA25_DMA2_S7PAR_bit at DMA2_S7PAR.B25;
    sbit  PA26_DMA2_S7PAR_bit at DMA2_S7PAR.B26;
    sbit  PA27_DMA2_S7PAR_bit at DMA2_S7PAR.B27;
    sbit  PA28_DMA2_S7PAR_bit at DMA2_S7PAR.B28;
    sbit  PA29_DMA2_S7PAR_bit at DMA2_S7PAR.B29;
    sbit  PA30_DMA2_S7PAR_bit at DMA2_S7PAR.B30;
    sbit  PA31_DMA2_S7PAR_bit at DMA2_S7PAR.B31;

sfr unsigned long   volatile DMA2_S7M0AR          absolute 0x400264C4;
    sbit  M0A0_DMA2_S7M0AR_bit at DMA2_S7M0AR.B0;
    sbit  M0A1_DMA2_S7M0AR_bit at DMA2_S7M0AR.B1;
    sbit  M0A2_DMA2_S7M0AR_bit at DMA2_S7M0AR.B2;
    sbit  M0A3_DMA2_S7M0AR_bit at DMA2_S7M0AR.B3;
    sbit  M0A4_DMA2_S7M0AR_bit at DMA2_S7M0AR.B4;
    sbit  M0A5_DMA2_S7M0AR_bit at DMA2_S7M0AR.B5;
    sbit  M0A6_DMA2_S7M0AR_bit at DMA2_S7M0AR.B6;
    sbit  M0A7_DMA2_S7M0AR_bit at DMA2_S7M0AR.B7;
    sbit  M0A8_DMA2_S7M0AR_bit at DMA2_S7M0AR.B8;
    sbit  M0A9_DMA2_S7M0AR_bit at DMA2_S7M0AR.B9;
    sbit  M0A10_DMA2_S7M0AR_bit at DMA2_S7M0AR.B10;
    sbit  M0A11_DMA2_S7M0AR_bit at DMA2_S7M0AR.B11;
    sbit  M0A12_DMA2_S7M0AR_bit at DMA2_S7M0AR.B12;
    sbit  M0A13_DMA2_S7M0AR_bit at DMA2_S7M0AR.B13;
    sbit  M0A14_DMA2_S7M0AR_bit at DMA2_S7M0AR.B14;
    sbit  M0A15_DMA2_S7M0AR_bit at DMA2_S7M0AR.B15;
    sbit  M0A16_DMA2_S7M0AR_bit at DMA2_S7M0AR.B16;
    sbit  M0A17_DMA2_S7M0AR_bit at DMA2_S7M0AR.B17;
    sbit  M0A18_DMA2_S7M0AR_bit at DMA2_S7M0AR.B18;
    sbit  M0A19_DMA2_S7M0AR_bit at DMA2_S7M0AR.B19;
    sbit  M0A20_DMA2_S7M0AR_bit at DMA2_S7M0AR.B20;
    sbit  M0A21_DMA2_S7M0AR_bit at DMA2_S7M0AR.B21;
    sbit  M0A22_DMA2_S7M0AR_bit at DMA2_S7M0AR.B22;
    sbit  M0A23_DMA2_S7M0AR_bit at DMA2_S7M0AR.B23;
    sbit  M0A24_DMA2_S7M0AR_bit at DMA2_S7M0AR.B24;
    sbit  M0A25_DMA2_S7M0AR_bit at DMA2_S7M0AR.B25;
    sbit  M0A26_DMA2_S7M0AR_bit at DMA2_S7M0AR.B26;
    sbit  M0A27_DMA2_S7M0AR_bit at DMA2_S7M0AR.B27;
    sbit  M0A28_DMA2_S7M0AR_bit at DMA2_S7M0AR.B28;
    sbit  M0A29_DMA2_S7M0AR_bit at DMA2_S7M0AR.B29;
    sbit  M0A30_DMA2_S7M0AR_bit at DMA2_S7M0AR.B30;
    sbit  M0A31_DMA2_S7M0AR_bit at DMA2_S7M0AR.B31;

sfr unsigned long   volatile DMA2_S7M1AR          absolute 0x400264C8;
    sbit  M1A0_DMA2_S7M1AR_bit at DMA2_S7M1AR.B0;
    sbit  M1A1_DMA2_S7M1AR_bit at DMA2_S7M1AR.B1;
    sbit  M1A2_DMA2_S7M1AR_bit at DMA2_S7M1AR.B2;
    sbit  M1A3_DMA2_S7M1AR_bit at DMA2_S7M1AR.B3;
    sbit  M1A4_DMA2_S7M1AR_bit at DMA2_S7M1AR.B4;
    sbit  M1A5_DMA2_S7M1AR_bit at DMA2_S7M1AR.B5;
    sbit  M1A6_DMA2_S7M1AR_bit at DMA2_S7M1AR.B6;
    sbit  M1A7_DMA2_S7M1AR_bit at DMA2_S7M1AR.B7;
    sbit  M1A8_DMA2_S7M1AR_bit at DMA2_S7M1AR.B8;
    sbit  M1A9_DMA2_S7M1AR_bit at DMA2_S7M1AR.B9;
    sbit  M1A10_DMA2_S7M1AR_bit at DMA2_S7M1AR.B10;
    sbit  M1A11_DMA2_S7M1AR_bit at DMA2_S7M1AR.B11;
    sbit  M1A12_DMA2_S7M1AR_bit at DMA2_S7M1AR.B12;
    sbit  M1A13_DMA2_S7M1AR_bit at DMA2_S7M1AR.B13;
    sbit  M1A14_DMA2_S7M1AR_bit at DMA2_S7M1AR.B14;
    sbit  M1A15_DMA2_S7M1AR_bit at DMA2_S7M1AR.B15;
    sbit  M1A16_DMA2_S7M1AR_bit at DMA2_S7M1AR.B16;
    sbit  M1A17_DMA2_S7M1AR_bit at DMA2_S7M1AR.B17;
    sbit  M1A18_DMA2_S7M1AR_bit at DMA2_S7M1AR.B18;
    sbit  M1A19_DMA2_S7M1AR_bit at DMA2_S7M1AR.B19;
    sbit  M1A20_DMA2_S7M1AR_bit at DMA2_S7M1AR.B20;
    sbit  M1A21_DMA2_S7M1AR_bit at DMA2_S7M1AR.B21;
    sbit  M1A22_DMA2_S7M1AR_bit at DMA2_S7M1AR.B22;
    sbit  M1A23_DMA2_S7M1AR_bit at DMA2_S7M1AR.B23;
    sbit  M1A24_DMA2_S7M1AR_bit at DMA2_S7M1AR.B24;
    sbit  M1A25_DMA2_S7M1AR_bit at DMA2_S7M1AR.B25;
    sbit  M1A26_DMA2_S7M1AR_bit at DMA2_S7M1AR.B26;
    sbit  M1A27_DMA2_S7M1AR_bit at DMA2_S7M1AR.B27;
    sbit  M1A28_DMA2_S7M1AR_bit at DMA2_S7M1AR.B28;
    sbit  M1A29_DMA2_S7M1AR_bit at DMA2_S7M1AR.B29;
    sbit  M1A30_DMA2_S7M1AR_bit at DMA2_S7M1AR.B30;
    sbit  M1A31_DMA2_S7M1AR_bit at DMA2_S7M1AR.B31;

sfr unsigned long   volatile DMA2_S7FCR           absolute 0x400264CC;
    sbit  FEIE_DMA2_S7FCR_bit at DMA2_S7FCR.B7;
    sbit  FS0_DMA2_S7FCR_bit at DMA2_S7FCR.B3;
    sbit  FS1_DMA2_S7FCR_bit at DMA2_S7FCR.B4;
    sbit  FS2_DMA2_S7FCR_bit at DMA2_S7FCR.B5;
    sbit  DMDIS_DMA2_S7FCR_bit at DMA2_S7FCR.B2;
    sbit  FTH0_DMA2_S7FCR_bit at DMA2_S7FCR.B0;
    sbit  FTH1_DMA2_S7FCR_bit at DMA2_S7FCR.B1;

sfr unsigned long   volatile DMA1_LISR            absolute 0x40026000;
    sbit  TCIF3_DMA1_LISR_bit at DMA1_LISR.B27;
    sbit  HTIF3_DMA1_LISR_bit at DMA1_LISR.B26;
    sbit  TEIF3_DMA1_LISR_bit at DMA1_LISR.B25;
    sbit  DMEIF3_DMA1_LISR_bit at DMA1_LISR.B24;
    sbit  FEIF3_DMA1_LISR_bit at DMA1_LISR.B22;
    sbit  TCIF2_DMA1_LISR_bit at DMA1_LISR.B21;
    sbit  HTIF2_DMA1_LISR_bit at DMA1_LISR.B20;
    sbit  TEIF2_DMA1_LISR_bit at DMA1_LISR.B19;
    sbit  DMEIF2_DMA1_LISR_bit at DMA1_LISR.B18;
    sbit  FEIF2_DMA1_LISR_bit at DMA1_LISR.B16;
    sbit  TCIF1_DMA1_LISR_bit at DMA1_LISR.B11;
    sbit  HTIF1_DMA1_LISR_bit at DMA1_LISR.B10;
    sbit  TEIF1_DMA1_LISR_bit at DMA1_LISR.B9;
    sbit  DMEIF1_DMA1_LISR_bit at DMA1_LISR.B8;
    sbit  FEIF1_DMA1_LISR_bit at DMA1_LISR.B6;
    sbit  TCIF0_DMA1_LISR_bit at DMA1_LISR.B5;
    sbit  HTIF0_DMA1_LISR_bit at DMA1_LISR.B4;
    sbit  TEIF0_DMA1_LISR_bit at DMA1_LISR.B3;
    sbit  DMEIF0_DMA1_LISR_bit at DMA1_LISR.B2;
    sbit  FEIF0_DMA1_LISR_bit at DMA1_LISR.B0;

sfr unsigned long   volatile DMA1_HISR            absolute 0x40026004;
    sbit  TCIF7_DMA1_HISR_bit at DMA1_HISR.B27;
    sbit  HTIF7_DMA1_HISR_bit at DMA1_HISR.B26;
    sbit  TEIF7_DMA1_HISR_bit at DMA1_HISR.B25;
    sbit  DMEIF7_DMA1_HISR_bit at DMA1_HISR.B24;
    sbit  FEIF7_DMA1_HISR_bit at DMA1_HISR.B22;
    sbit  TCIF6_DMA1_HISR_bit at DMA1_HISR.B21;
    sbit  HTIF6_DMA1_HISR_bit at DMA1_HISR.B20;
    sbit  TEIF6_DMA1_HISR_bit at DMA1_HISR.B19;
    sbit  DMEIF6_DMA1_HISR_bit at DMA1_HISR.B18;
    sbit  FEIF6_DMA1_HISR_bit at DMA1_HISR.B16;
    sbit  TCIF5_DMA1_HISR_bit at DMA1_HISR.B11;
    sbit  HTIF5_DMA1_HISR_bit at DMA1_HISR.B10;
    sbit  TEIF5_DMA1_HISR_bit at DMA1_HISR.B9;
    sbit  DMEIF5_DMA1_HISR_bit at DMA1_HISR.B8;
    sbit  FEIF5_DMA1_HISR_bit at DMA1_HISR.B6;
    sbit  TCIF4_DMA1_HISR_bit at DMA1_HISR.B5;
    sbit  HTIF4_DMA1_HISR_bit at DMA1_HISR.B4;
    sbit  TEIF4_DMA1_HISR_bit at DMA1_HISR.B3;
    sbit  DMEIF4_DMA1_HISR_bit at DMA1_HISR.B2;
    sbit  FEIF4_DMA1_HISR_bit at DMA1_HISR.B0;

sfr unsigned long   volatile DMA1_LIFCR           absolute 0x40026008;
    sbit  CTCIF3_DMA1_LIFCR_bit at DMA1_LIFCR.B27;
    sbit  CHTIF3_DMA1_LIFCR_bit at DMA1_LIFCR.B26;
    sbit  CTEIF3_DMA1_LIFCR_bit at DMA1_LIFCR.B25;
    sbit  CDMEIF3_DMA1_LIFCR_bit at DMA1_LIFCR.B24;
    sbit  CFEIF3_DMA1_LIFCR_bit at DMA1_LIFCR.B22;
    sbit  CTCIF2_DMA1_LIFCR_bit at DMA1_LIFCR.B21;
    sbit  CHTIF2_DMA1_LIFCR_bit at DMA1_LIFCR.B20;
    sbit  CTEIF2_DMA1_LIFCR_bit at DMA1_LIFCR.B19;
    sbit  CDMEIF2_DMA1_LIFCR_bit at DMA1_LIFCR.B18;
    sbit  CFEIF2_DMA1_LIFCR_bit at DMA1_LIFCR.B16;
    sbit  CTCIF1_DMA1_LIFCR_bit at DMA1_LIFCR.B11;
    sbit  CHTIF1_DMA1_LIFCR_bit at DMA1_LIFCR.B10;
    sbit  CTEIF1_DMA1_LIFCR_bit at DMA1_LIFCR.B9;
    sbit  CDMEIF1_DMA1_LIFCR_bit at DMA1_LIFCR.B8;
    sbit  CFEIF1_DMA1_LIFCR_bit at DMA1_LIFCR.B6;
    sbit  CTCIF0_DMA1_LIFCR_bit at DMA1_LIFCR.B5;
    sbit  CHTIF0_DMA1_LIFCR_bit at DMA1_LIFCR.B4;
    sbit  CTEIF0_DMA1_LIFCR_bit at DMA1_LIFCR.B3;
    sbit  CDMEIF0_DMA1_LIFCR_bit at DMA1_LIFCR.B2;
    sbit  CFEIF0_DMA1_LIFCR_bit at DMA1_LIFCR.B0;

sfr unsigned long   volatile DMA1_HIFCR           absolute 0x4002600C;
    sbit  CTCIF7_DMA1_HIFCR_bit at DMA1_HIFCR.B27;
    sbit  CHTIF7_DMA1_HIFCR_bit at DMA1_HIFCR.B26;
    sbit  CTEIF7_DMA1_HIFCR_bit at DMA1_HIFCR.B25;
    sbit  CDMEIF7_DMA1_HIFCR_bit at DMA1_HIFCR.B24;
    sbit  CFEIF7_DMA1_HIFCR_bit at DMA1_HIFCR.B22;
    sbit  CTCIF6_DMA1_HIFCR_bit at DMA1_HIFCR.B21;
    sbit  CHTIF6_DMA1_HIFCR_bit at DMA1_HIFCR.B20;
    sbit  CTEIF6_DMA1_HIFCR_bit at DMA1_HIFCR.B19;
    sbit  CDMEIF6_DMA1_HIFCR_bit at DMA1_HIFCR.B18;
    sbit  CFEIF6_DMA1_HIFCR_bit at DMA1_HIFCR.B16;
    sbit  CTCIF5_DMA1_HIFCR_bit at DMA1_HIFCR.B11;
    sbit  CHTIF5_DMA1_HIFCR_bit at DMA1_HIFCR.B10;
    sbit  CTEIF5_DMA1_HIFCR_bit at DMA1_HIFCR.B9;
    sbit  CDMEIF5_DMA1_HIFCR_bit at DMA1_HIFCR.B8;
    sbit  CFEIF5_DMA1_HIFCR_bit at DMA1_HIFCR.B6;
    sbit  CTCIF4_DMA1_HIFCR_bit at DMA1_HIFCR.B5;
    sbit  CHTIF4_DMA1_HIFCR_bit at DMA1_HIFCR.B4;
    sbit  CTEIF4_DMA1_HIFCR_bit at DMA1_HIFCR.B3;
    sbit  CDMEIF4_DMA1_HIFCR_bit at DMA1_HIFCR.B2;
    sbit  CFEIF4_DMA1_HIFCR_bit at DMA1_HIFCR.B0;

sfr unsigned long   volatile DMA1_S0CR            absolute 0x40026010;
    sbit  CHSEL0_DMA1_S0CR_bit at DMA1_S0CR.B25;
    sbit  CHSEL1_DMA1_S0CR_bit at DMA1_S0CR.B26;
    sbit  CHSEL2_DMA1_S0CR_bit at DMA1_S0CR.B27;
    sbit  MBURST0_DMA1_S0CR_bit at DMA1_S0CR.B23;
    sbit  MBURST1_DMA1_S0CR_bit at DMA1_S0CR.B24;
    sbit  PBURST0_DMA1_S0CR_bit at DMA1_S0CR.B21;
    sbit  PBURST1_DMA1_S0CR_bit at DMA1_S0CR.B22;
    sbit  CT_DMA1_S0CR_bit at DMA1_S0CR.B19;
    sbit  DBM_DMA1_S0CR_bit at DMA1_S0CR.B18;
    sbit  PL0_DMA1_S0CR_bit at DMA1_S0CR.B16;
    sbit  PL1_DMA1_S0CR_bit at DMA1_S0CR.B17;
    sbit  PINCOS_DMA1_S0CR_bit at DMA1_S0CR.B15;
    sbit  MSIZE0_DMA1_S0CR_bit at DMA1_S0CR.B13;
    sbit  MSIZE1_DMA1_S0CR_bit at DMA1_S0CR.B14;
    sbit  PSIZE0_DMA1_S0CR_bit at DMA1_S0CR.B11;
    sbit  PSIZE1_DMA1_S0CR_bit at DMA1_S0CR.B12;
    sbit  MINC_DMA1_S0CR_bit at DMA1_S0CR.B10;
    sbit  PINC_DMA1_S0CR_bit at DMA1_S0CR.B9;
    sbit  CIRC_DMA1_S0CR_bit at DMA1_S0CR.B8;
    sbit  DIR0_DMA1_S0CR_bit at DMA1_S0CR.B6;
    sbit  DIR1_DMA1_S0CR_bit at DMA1_S0CR.B7;
    sbit  PFCTRL_DMA1_S0CR_bit at DMA1_S0CR.B5;
    sbit  TCIE_DMA1_S0CR_bit at DMA1_S0CR.B4;
    sbit  HTIE_DMA1_S0CR_bit at DMA1_S0CR.B3;
    sbit  TEIE_DMA1_S0CR_bit at DMA1_S0CR.B2;
    sbit  DMEIE_DMA1_S0CR_bit at DMA1_S0CR.B1;
    sbit  EN_DMA1_S0CR_bit at DMA1_S0CR.B0;

sfr unsigned long   volatile DMA1_S0NDTR          absolute 0x40026014;
    sbit  NDT0_DMA1_S0NDTR_bit at DMA1_S0NDTR.B0;
    sbit  NDT1_DMA1_S0NDTR_bit at DMA1_S0NDTR.B1;
    sbit  NDT2_DMA1_S0NDTR_bit at DMA1_S0NDTR.B2;
    sbit  NDT3_DMA1_S0NDTR_bit at DMA1_S0NDTR.B3;
    sbit  NDT4_DMA1_S0NDTR_bit at DMA1_S0NDTR.B4;
    sbit  NDT5_DMA1_S0NDTR_bit at DMA1_S0NDTR.B5;
    sbit  NDT6_DMA1_S0NDTR_bit at DMA1_S0NDTR.B6;
    sbit  NDT7_DMA1_S0NDTR_bit at DMA1_S0NDTR.B7;
    sbit  NDT8_DMA1_S0NDTR_bit at DMA1_S0NDTR.B8;
    sbit  NDT9_DMA1_S0NDTR_bit at DMA1_S0NDTR.B9;
    sbit  NDT10_DMA1_S0NDTR_bit at DMA1_S0NDTR.B10;
    sbit  NDT11_DMA1_S0NDTR_bit at DMA1_S0NDTR.B11;
    sbit  NDT12_DMA1_S0NDTR_bit at DMA1_S0NDTR.B12;
    sbit  NDT13_DMA1_S0NDTR_bit at DMA1_S0NDTR.B13;
    sbit  NDT14_DMA1_S0NDTR_bit at DMA1_S0NDTR.B14;
    sbit  NDT15_DMA1_S0NDTR_bit at DMA1_S0NDTR.B15;

sfr unsigned long   volatile DMA1_S0PAR           absolute 0x40026018;
    sbit  PA0_DMA1_S0PAR_bit at DMA1_S0PAR.B0;
    sbit  PA1_DMA1_S0PAR_bit at DMA1_S0PAR.B1;
    sbit  PA2_DMA1_S0PAR_bit at DMA1_S0PAR.B2;
    sbit  PA3_DMA1_S0PAR_bit at DMA1_S0PAR.B3;
    sbit  PA4_DMA1_S0PAR_bit at DMA1_S0PAR.B4;
    sbit  PA5_DMA1_S0PAR_bit at DMA1_S0PAR.B5;
    sbit  PA6_DMA1_S0PAR_bit at DMA1_S0PAR.B6;
    sbit  PA7_DMA1_S0PAR_bit at DMA1_S0PAR.B7;
    sbit  PA8_DMA1_S0PAR_bit at DMA1_S0PAR.B8;
    sbit  PA9_DMA1_S0PAR_bit at DMA1_S0PAR.B9;
    sbit  PA10_DMA1_S0PAR_bit at DMA1_S0PAR.B10;
    sbit  PA11_DMA1_S0PAR_bit at DMA1_S0PAR.B11;
    sbit  PA12_DMA1_S0PAR_bit at DMA1_S0PAR.B12;
    sbit  PA13_DMA1_S0PAR_bit at DMA1_S0PAR.B13;
    sbit  PA14_DMA1_S0PAR_bit at DMA1_S0PAR.B14;
    sbit  PA15_DMA1_S0PAR_bit at DMA1_S0PAR.B15;
    sbit  PA16_DMA1_S0PAR_bit at DMA1_S0PAR.B16;
    sbit  PA17_DMA1_S0PAR_bit at DMA1_S0PAR.B17;
    sbit  PA18_DMA1_S0PAR_bit at DMA1_S0PAR.B18;
    sbit  PA19_DMA1_S0PAR_bit at DMA1_S0PAR.B19;
    sbit  PA20_DMA1_S0PAR_bit at DMA1_S0PAR.B20;
    sbit  PA21_DMA1_S0PAR_bit at DMA1_S0PAR.B21;
    sbit  PA22_DMA1_S0PAR_bit at DMA1_S0PAR.B22;
    sbit  PA23_DMA1_S0PAR_bit at DMA1_S0PAR.B23;
    sbit  PA24_DMA1_S0PAR_bit at DMA1_S0PAR.B24;
    sbit  PA25_DMA1_S0PAR_bit at DMA1_S0PAR.B25;
    sbit  PA26_DMA1_S0PAR_bit at DMA1_S0PAR.B26;
    sbit  PA27_DMA1_S0PAR_bit at DMA1_S0PAR.B27;
    sbit  PA28_DMA1_S0PAR_bit at DMA1_S0PAR.B28;
    sbit  PA29_DMA1_S0PAR_bit at DMA1_S0PAR.B29;
    sbit  PA30_DMA1_S0PAR_bit at DMA1_S0PAR.B30;
    sbit  PA31_DMA1_S0PAR_bit at DMA1_S0PAR.B31;

sfr unsigned long   volatile DMA1_S0M0AR          absolute 0x4002601C;
    sbit  M0A0_DMA1_S0M0AR_bit at DMA1_S0M0AR.B0;
    sbit  M0A1_DMA1_S0M0AR_bit at DMA1_S0M0AR.B1;
    sbit  M0A2_DMA1_S0M0AR_bit at DMA1_S0M0AR.B2;
    sbit  M0A3_DMA1_S0M0AR_bit at DMA1_S0M0AR.B3;
    sbit  M0A4_DMA1_S0M0AR_bit at DMA1_S0M0AR.B4;
    sbit  M0A5_DMA1_S0M0AR_bit at DMA1_S0M0AR.B5;
    sbit  M0A6_DMA1_S0M0AR_bit at DMA1_S0M0AR.B6;
    sbit  M0A7_DMA1_S0M0AR_bit at DMA1_S0M0AR.B7;
    sbit  M0A8_DMA1_S0M0AR_bit at DMA1_S0M0AR.B8;
    sbit  M0A9_DMA1_S0M0AR_bit at DMA1_S0M0AR.B9;
    sbit  M0A10_DMA1_S0M0AR_bit at DMA1_S0M0AR.B10;
    sbit  M0A11_DMA1_S0M0AR_bit at DMA1_S0M0AR.B11;
    sbit  M0A12_DMA1_S0M0AR_bit at DMA1_S0M0AR.B12;
    sbit  M0A13_DMA1_S0M0AR_bit at DMA1_S0M0AR.B13;
    sbit  M0A14_DMA1_S0M0AR_bit at DMA1_S0M0AR.B14;
    sbit  M0A15_DMA1_S0M0AR_bit at DMA1_S0M0AR.B15;
    sbit  M0A16_DMA1_S0M0AR_bit at DMA1_S0M0AR.B16;
    sbit  M0A17_DMA1_S0M0AR_bit at DMA1_S0M0AR.B17;
    sbit  M0A18_DMA1_S0M0AR_bit at DMA1_S0M0AR.B18;
    sbit  M0A19_DMA1_S0M0AR_bit at DMA1_S0M0AR.B19;
    sbit  M0A20_DMA1_S0M0AR_bit at DMA1_S0M0AR.B20;
    sbit  M0A21_DMA1_S0M0AR_bit at DMA1_S0M0AR.B21;
    sbit  M0A22_DMA1_S0M0AR_bit at DMA1_S0M0AR.B22;
    sbit  M0A23_DMA1_S0M0AR_bit at DMA1_S0M0AR.B23;
    sbit  M0A24_DMA1_S0M0AR_bit at DMA1_S0M0AR.B24;
    sbit  M0A25_DMA1_S0M0AR_bit at DMA1_S0M0AR.B25;
    sbit  M0A26_DMA1_S0M0AR_bit at DMA1_S0M0AR.B26;
    sbit  M0A27_DMA1_S0M0AR_bit at DMA1_S0M0AR.B27;
    sbit  M0A28_DMA1_S0M0AR_bit at DMA1_S0M0AR.B28;
    sbit  M0A29_DMA1_S0M0AR_bit at DMA1_S0M0AR.B29;
    sbit  M0A30_DMA1_S0M0AR_bit at DMA1_S0M0AR.B30;
    sbit  M0A31_DMA1_S0M0AR_bit at DMA1_S0M0AR.B31;

sfr unsigned long   volatile DMA1_S0M1AR          absolute 0x40026020;
    sbit  M1A0_DMA1_S0M1AR_bit at DMA1_S0M1AR.B0;
    sbit  M1A1_DMA1_S0M1AR_bit at DMA1_S0M1AR.B1;
    sbit  M1A2_DMA1_S0M1AR_bit at DMA1_S0M1AR.B2;
    sbit  M1A3_DMA1_S0M1AR_bit at DMA1_S0M1AR.B3;
    sbit  M1A4_DMA1_S0M1AR_bit at DMA1_S0M1AR.B4;
    sbit  M1A5_DMA1_S0M1AR_bit at DMA1_S0M1AR.B5;
    sbit  M1A6_DMA1_S0M1AR_bit at DMA1_S0M1AR.B6;
    sbit  M1A7_DMA1_S0M1AR_bit at DMA1_S0M1AR.B7;
    sbit  M1A8_DMA1_S0M1AR_bit at DMA1_S0M1AR.B8;
    sbit  M1A9_DMA1_S0M1AR_bit at DMA1_S0M1AR.B9;
    sbit  M1A10_DMA1_S0M1AR_bit at DMA1_S0M1AR.B10;
    sbit  M1A11_DMA1_S0M1AR_bit at DMA1_S0M1AR.B11;
    sbit  M1A12_DMA1_S0M1AR_bit at DMA1_S0M1AR.B12;
    sbit  M1A13_DMA1_S0M1AR_bit at DMA1_S0M1AR.B13;
    sbit  M1A14_DMA1_S0M1AR_bit at DMA1_S0M1AR.B14;
    sbit  M1A15_DMA1_S0M1AR_bit at DMA1_S0M1AR.B15;
    sbit  M1A16_DMA1_S0M1AR_bit at DMA1_S0M1AR.B16;
    sbit  M1A17_DMA1_S0M1AR_bit at DMA1_S0M1AR.B17;
    sbit  M1A18_DMA1_S0M1AR_bit at DMA1_S0M1AR.B18;
    sbit  M1A19_DMA1_S0M1AR_bit at DMA1_S0M1AR.B19;
    sbit  M1A20_DMA1_S0M1AR_bit at DMA1_S0M1AR.B20;
    sbit  M1A21_DMA1_S0M1AR_bit at DMA1_S0M1AR.B21;
    sbit  M1A22_DMA1_S0M1AR_bit at DMA1_S0M1AR.B22;
    sbit  M1A23_DMA1_S0M1AR_bit at DMA1_S0M1AR.B23;
    sbit  M1A24_DMA1_S0M1AR_bit at DMA1_S0M1AR.B24;
    sbit  M1A25_DMA1_S0M1AR_bit at DMA1_S0M1AR.B25;
    sbit  M1A26_DMA1_S0M1AR_bit at DMA1_S0M1AR.B26;
    sbit  M1A27_DMA1_S0M1AR_bit at DMA1_S0M1AR.B27;
    sbit  M1A28_DMA1_S0M1AR_bit at DMA1_S0M1AR.B28;
    sbit  M1A29_DMA1_S0M1AR_bit at DMA1_S0M1AR.B29;
    sbit  M1A30_DMA1_S0M1AR_bit at DMA1_S0M1AR.B30;
    sbit  M1A31_DMA1_S0M1AR_bit at DMA1_S0M1AR.B31;

sfr unsigned long   volatile DMA1_S0FCR           absolute 0x40026024;
    sbit  FEIE_DMA1_S0FCR_bit at DMA1_S0FCR.B7;
    sbit  FS0_DMA1_S0FCR_bit at DMA1_S0FCR.B3;
    sbit  FS1_DMA1_S0FCR_bit at DMA1_S0FCR.B4;
    sbit  FS2_DMA1_S0FCR_bit at DMA1_S0FCR.B5;
    sbit  DMDIS_DMA1_S0FCR_bit at DMA1_S0FCR.B2;
    sbit  FTH0_DMA1_S0FCR_bit at DMA1_S0FCR.B0;
    sbit  FTH1_DMA1_S0FCR_bit at DMA1_S0FCR.B1;

sfr unsigned long   volatile DMA1_S1CR            absolute 0x40026028;
    sbit  CHSEL0_DMA1_S1CR_bit at DMA1_S1CR.B25;
    sbit  CHSEL1_DMA1_S1CR_bit at DMA1_S1CR.B26;
    sbit  CHSEL2_DMA1_S1CR_bit at DMA1_S1CR.B27;
    sbit  MBURST0_DMA1_S1CR_bit at DMA1_S1CR.B23;
    sbit  MBURST1_DMA1_S1CR_bit at DMA1_S1CR.B24;
    sbit  PBURST0_DMA1_S1CR_bit at DMA1_S1CR.B21;
    sbit  PBURST1_DMA1_S1CR_bit at DMA1_S1CR.B22;
    sbit  ACK_DMA1_S1CR_bit at DMA1_S1CR.B20;
    sbit  CT_DMA1_S1CR_bit at DMA1_S1CR.B19;
    sbit  DBM_DMA1_S1CR_bit at DMA1_S1CR.B18;
    sbit  PL0_DMA1_S1CR_bit at DMA1_S1CR.B16;
    sbit  PL1_DMA1_S1CR_bit at DMA1_S1CR.B17;
    sbit  PINCOS_DMA1_S1CR_bit at DMA1_S1CR.B15;
    sbit  MSIZE0_DMA1_S1CR_bit at DMA1_S1CR.B13;
    sbit  MSIZE1_DMA1_S1CR_bit at DMA1_S1CR.B14;
    sbit  PSIZE0_DMA1_S1CR_bit at DMA1_S1CR.B11;
    sbit  PSIZE1_DMA1_S1CR_bit at DMA1_S1CR.B12;
    sbit  MINC_DMA1_S1CR_bit at DMA1_S1CR.B10;
    sbit  PINC_DMA1_S1CR_bit at DMA1_S1CR.B9;
    sbit  CIRC_DMA1_S1CR_bit at DMA1_S1CR.B8;
    sbit  DIR0_DMA1_S1CR_bit at DMA1_S1CR.B6;
    sbit  DIR1_DMA1_S1CR_bit at DMA1_S1CR.B7;
    sbit  PFCTRL_DMA1_S1CR_bit at DMA1_S1CR.B5;
    sbit  TCIE_DMA1_S1CR_bit at DMA1_S1CR.B4;
    sbit  HTIE_DMA1_S1CR_bit at DMA1_S1CR.B3;
    sbit  TEIE_DMA1_S1CR_bit at DMA1_S1CR.B2;
    sbit  DMEIE_DMA1_S1CR_bit at DMA1_S1CR.B1;
    sbit  EN_DMA1_S1CR_bit at DMA1_S1CR.B0;

sfr unsigned long   volatile DMA1_S1NDTR          absolute 0x4002602C;
    sbit  NDT0_DMA1_S1NDTR_bit at DMA1_S1NDTR.B0;
    sbit  NDT1_DMA1_S1NDTR_bit at DMA1_S1NDTR.B1;
    sbit  NDT2_DMA1_S1NDTR_bit at DMA1_S1NDTR.B2;
    sbit  NDT3_DMA1_S1NDTR_bit at DMA1_S1NDTR.B3;
    sbit  NDT4_DMA1_S1NDTR_bit at DMA1_S1NDTR.B4;
    sbit  NDT5_DMA1_S1NDTR_bit at DMA1_S1NDTR.B5;
    sbit  NDT6_DMA1_S1NDTR_bit at DMA1_S1NDTR.B6;
    sbit  NDT7_DMA1_S1NDTR_bit at DMA1_S1NDTR.B7;
    sbit  NDT8_DMA1_S1NDTR_bit at DMA1_S1NDTR.B8;
    sbit  NDT9_DMA1_S1NDTR_bit at DMA1_S1NDTR.B9;
    sbit  NDT10_DMA1_S1NDTR_bit at DMA1_S1NDTR.B10;
    sbit  NDT11_DMA1_S1NDTR_bit at DMA1_S1NDTR.B11;
    sbit  NDT12_DMA1_S1NDTR_bit at DMA1_S1NDTR.B12;
    sbit  NDT13_DMA1_S1NDTR_bit at DMA1_S1NDTR.B13;
    sbit  NDT14_DMA1_S1NDTR_bit at DMA1_S1NDTR.B14;
    sbit  NDT15_DMA1_S1NDTR_bit at DMA1_S1NDTR.B15;

sfr unsigned long   volatile DMA1_S1PAR           absolute 0x40026030;
    sbit  PA0_DMA1_S1PAR_bit at DMA1_S1PAR.B0;
    sbit  PA1_DMA1_S1PAR_bit at DMA1_S1PAR.B1;
    sbit  PA2_DMA1_S1PAR_bit at DMA1_S1PAR.B2;
    sbit  PA3_DMA1_S1PAR_bit at DMA1_S1PAR.B3;
    sbit  PA4_DMA1_S1PAR_bit at DMA1_S1PAR.B4;
    sbit  PA5_DMA1_S1PAR_bit at DMA1_S1PAR.B5;
    sbit  PA6_DMA1_S1PAR_bit at DMA1_S1PAR.B6;
    sbit  PA7_DMA1_S1PAR_bit at DMA1_S1PAR.B7;
    sbit  PA8_DMA1_S1PAR_bit at DMA1_S1PAR.B8;
    sbit  PA9_DMA1_S1PAR_bit at DMA1_S1PAR.B9;
    sbit  PA10_DMA1_S1PAR_bit at DMA1_S1PAR.B10;
    sbit  PA11_DMA1_S1PAR_bit at DMA1_S1PAR.B11;
    sbit  PA12_DMA1_S1PAR_bit at DMA1_S1PAR.B12;
    sbit  PA13_DMA1_S1PAR_bit at DMA1_S1PAR.B13;
    sbit  PA14_DMA1_S1PAR_bit at DMA1_S1PAR.B14;
    sbit  PA15_DMA1_S1PAR_bit at DMA1_S1PAR.B15;
    sbit  PA16_DMA1_S1PAR_bit at DMA1_S1PAR.B16;
    sbit  PA17_DMA1_S1PAR_bit at DMA1_S1PAR.B17;
    sbit  PA18_DMA1_S1PAR_bit at DMA1_S1PAR.B18;
    sbit  PA19_DMA1_S1PAR_bit at DMA1_S1PAR.B19;
    sbit  PA20_DMA1_S1PAR_bit at DMA1_S1PAR.B20;
    sbit  PA21_DMA1_S1PAR_bit at DMA1_S1PAR.B21;
    sbit  PA22_DMA1_S1PAR_bit at DMA1_S1PAR.B22;
    sbit  PA23_DMA1_S1PAR_bit at DMA1_S1PAR.B23;
    sbit  PA24_DMA1_S1PAR_bit at DMA1_S1PAR.B24;
    sbit  PA25_DMA1_S1PAR_bit at DMA1_S1PAR.B25;
    sbit  PA26_DMA1_S1PAR_bit at DMA1_S1PAR.B26;
    sbit  PA27_DMA1_S1PAR_bit at DMA1_S1PAR.B27;
    sbit  PA28_DMA1_S1PAR_bit at DMA1_S1PAR.B28;
    sbit  PA29_DMA1_S1PAR_bit at DMA1_S1PAR.B29;
    sbit  PA30_DMA1_S1PAR_bit at DMA1_S1PAR.B30;
    sbit  PA31_DMA1_S1PAR_bit at DMA1_S1PAR.B31;

sfr unsigned long   volatile DMA1_S1M0AR          absolute 0x40026034;
    sbit  M0A0_DMA1_S1M0AR_bit at DMA1_S1M0AR.B0;
    sbit  M0A1_DMA1_S1M0AR_bit at DMA1_S1M0AR.B1;
    sbit  M0A2_DMA1_S1M0AR_bit at DMA1_S1M0AR.B2;
    sbit  M0A3_DMA1_S1M0AR_bit at DMA1_S1M0AR.B3;
    sbit  M0A4_DMA1_S1M0AR_bit at DMA1_S1M0AR.B4;
    sbit  M0A5_DMA1_S1M0AR_bit at DMA1_S1M0AR.B5;
    sbit  M0A6_DMA1_S1M0AR_bit at DMA1_S1M0AR.B6;
    sbit  M0A7_DMA1_S1M0AR_bit at DMA1_S1M0AR.B7;
    sbit  M0A8_DMA1_S1M0AR_bit at DMA1_S1M0AR.B8;
    sbit  M0A9_DMA1_S1M0AR_bit at DMA1_S1M0AR.B9;
    sbit  M0A10_DMA1_S1M0AR_bit at DMA1_S1M0AR.B10;
    sbit  M0A11_DMA1_S1M0AR_bit at DMA1_S1M0AR.B11;
    sbit  M0A12_DMA1_S1M0AR_bit at DMA1_S1M0AR.B12;
    sbit  M0A13_DMA1_S1M0AR_bit at DMA1_S1M0AR.B13;
    sbit  M0A14_DMA1_S1M0AR_bit at DMA1_S1M0AR.B14;
    sbit  M0A15_DMA1_S1M0AR_bit at DMA1_S1M0AR.B15;
    sbit  M0A16_DMA1_S1M0AR_bit at DMA1_S1M0AR.B16;
    sbit  M0A17_DMA1_S1M0AR_bit at DMA1_S1M0AR.B17;
    sbit  M0A18_DMA1_S1M0AR_bit at DMA1_S1M0AR.B18;
    sbit  M0A19_DMA1_S1M0AR_bit at DMA1_S1M0AR.B19;
    sbit  M0A20_DMA1_S1M0AR_bit at DMA1_S1M0AR.B20;
    sbit  M0A21_DMA1_S1M0AR_bit at DMA1_S1M0AR.B21;
    sbit  M0A22_DMA1_S1M0AR_bit at DMA1_S1M0AR.B22;
    sbit  M0A23_DMA1_S1M0AR_bit at DMA1_S1M0AR.B23;
    sbit  M0A24_DMA1_S1M0AR_bit at DMA1_S1M0AR.B24;
    sbit  M0A25_DMA1_S1M0AR_bit at DMA1_S1M0AR.B25;
    sbit  M0A26_DMA1_S1M0AR_bit at DMA1_S1M0AR.B26;
    sbit  M0A27_DMA1_S1M0AR_bit at DMA1_S1M0AR.B27;
    sbit  M0A28_DMA1_S1M0AR_bit at DMA1_S1M0AR.B28;
    sbit  M0A29_DMA1_S1M0AR_bit at DMA1_S1M0AR.B29;
    sbit  M0A30_DMA1_S1M0AR_bit at DMA1_S1M0AR.B30;
    sbit  M0A31_DMA1_S1M0AR_bit at DMA1_S1M0AR.B31;

sfr unsigned long   volatile DMA1_S1M1AR          absolute 0x40026038;
    sbit  M1A0_DMA1_S1M1AR_bit at DMA1_S1M1AR.B0;
    sbit  M1A1_DMA1_S1M1AR_bit at DMA1_S1M1AR.B1;
    sbit  M1A2_DMA1_S1M1AR_bit at DMA1_S1M1AR.B2;
    sbit  M1A3_DMA1_S1M1AR_bit at DMA1_S1M1AR.B3;
    sbit  M1A4_DMA1_S1M1AR_bit at DMA1_S1M1AR.B4;
    sbit  M1A5_DMA1_S1M1AR_bit at DMA1_S1M1AR.B5;
    sbit  M1A6_DMA1_S1M1AR_bit at DMA1_S1M1AR.B6;
    sbit  M1A7_DMA1_S1M1AR_bit at DMA1_S1M1AR.B7;
    sbit  M1A8_DMA1_S1M1AR_bit at DMA1_S1M1AR.B8;
    sbit  M1A9_DMA1_S1M1AR_bit at DMA1_S1M1AR.B9;
    sbit  M1A10_DMA1_S1M1AR_bit at DMA1_S1M1AR.B10;
    sbit  M1A11_DMA1_S1M1AR_bit at DMA1_S1M1AR.B11;
    sbit  M1A12_DMA1_S1M1AR_bit at DMA1_S1M1AR.B12;
    sbit  M1A13_DMA1_S1M1AR_bit at DMA1_S1M1AR.B13;
    sbit  M1A14_DMA1_S1M1AR_bit at DMA1_S1M1AR.B14;
    sbit  M1A15_DMA1_S1M1AR_bit at DMA1_S1M1AR.B15;
    sbit  M1A16_DMA1_S1M1AR_bit at DMA1_S1M1AR.B16;
    sbit  M1A17_DMA1_S1M1AR_bit at DMA1_S1M1AR.B17;
    sbit  M1A18_DMA1_S1M1AR_bit at DMA1_S1M1AR.B18;
    sbit  M1A19_DMA1_S1M1AR_bit at DMA1_S1M1AR.B19;
    sbit  M1A20_DMA1_S1M1AR_bit at DMA1_S1M1AR.B20;
    sbit  M1A21_DMA1_S1M1AR_bit at DMA1_S1M1AR.B21;
    sbit  M1A22_DMA1_S1M1AR_bit at DMA1_S1M1AR.B22;
    sbit  M1A23_DMA1_S1M1AR_bit at DMA1_S1M1AR.B23;
    sbit  M1A24_DMA1_S1M1AR_bit at DMA1_S1M1AR.B24;
    sbit  M1A25_DMA1_S1M1AR_bit at DMA1_S1M1AR.B25;
    sbit  M1A26_DMA1_S1M1AR_bit at DMA1_S1M1AR.B26;
    sbit  M1A27_DMA1_S1M1AR_bit at DMA1_S1M1AR.B27;
    sbit  M1A28_DMA1_S1M1AR_bit at DMA1_S1M1AR.B28;
    sbit  M1A29_DMA1_S1M1AR_bit at DMA1_S1M1AR.B29;
    sbit  M1A30_DMA1_S1M1AR_bit at DMA1_S1M1AR.B30;
    sbit  M1A31_DMA1_S1M1AR_bit at DMA1_S1M1AR.B31;

sfr unsigned long   volatile DMA1_S1FCR           absolute 0x4002603C;
    sbit  FEIE_DMA1_S1FCR_bit at DMA1_S1FCR.B7;
    sbit  FS0_DMA1_S1FCR_bit at DMA1_S1FCR.B3;
    sbit  FS1_DMA1_S1FCR_bit at DMA1_S1FCR.B4;
    sbit  FS2_DMA1_S1FCR_bit at DMA1_S1FCR.B5;
    sbit  DMDIS_DMA1_S1FCR_bit at DMA1_S1FCR.B2;
    sbit  FTH0_DMA1_S1FCR_bit at DMA1_S1FCR.B0;
    sbit  FTH1_DMA1_S1FCR_bit at DMA1_S1FCR.B1;

sfr unsigned long   volatile DMA1_S2CR            absolute 0x40026040;
    sbit  CHSEL0_DMA1_S2CR_bit at DMA1_S2CR.B25;
    sbit  CHSEL1_DMA1_S2CR_bit at DMA1_S2CR.B26;
    sbit  CHSEL2_DMA1_S2CR_bit at DMA1_S2CR.B27;
    sbit  MBURST0_DMA1_S2CR_bit at DMA1_S2CR.B23;
    sbit  MBURST1_DMA1_S2CR_bit at DMA1_S2CR.B24;
    sbit  PBURST0_DMA1_S2CR_bit at DMA1_S2CR.B21;
    sbit  PBURST1_DMA1_S2CR_bit at DMA1_S2CR.B22;
    sbit  ACK_DMA1_S2CR_bit at DMA1_S2CR.B20;
    sbit  CT_DMA1_S2CR_bit at DMA1_S2CR.B19;
    sbit  DBM_DMA1_S2CR_bit at DMA1_S2CR.B18;
    sbit  PL0_DMA1_S2CR_bit at DMA1_S2CR.B16;
    sbit  PL1_DMA1_S2CR_bit at DMA1_S2CR.B17;
    sbit  PINCOS_DMA1_S2CR_bit at DMA1_S2CR.B15;
    sbit  MSIZE0_DMA1_S2CR_bit at DMA1_S2CR.B13;
    sbit  MSIZE1_DMA1_S2CR_bit at DMA1_S2CR.B14;
    sbit  PSIZE0_DMA1_S2CR_bit at DMA1_S2CR.B11;
    sbit  PSIZE1_DMA1_S2CR_bit at DMA1_S2CR.B12;
    sbit  MINC_DMA1_S2CR_bit at DMA1_S2CR.B10;
    sbit  PINC_DMA1_S2CR_bit at DMA1_S2CR.B9;
    sbit  CIRC_DMA1_S2CR_bit at DMA1_S2CR.B8;
    sbit  DIR0_DMA1_S2CR_bit at DMA1_S2CR.B6;
    sbit  DIR1_DMA1_S2CR_bit at DMA1_S2CR.B7;
    sbit  PFCTRL_DMA1_S2CR_bit at DMA1_S2CR.B5;
    sbit  TCIE_DMA1_S2CR_bit at DMA1_S2CR.B4;
    sbit  HTIE_DMA1_S2CR_bit at DMA1_S2CR.B3;
    sbit  TEIE_DMA1_S2CR_bit at DMA1_S2CR.B2;
    sbit  DMEIE_DMA1_S2CR_bit at DMA1_S2CR.B1;
    sbit  EN_DMA1_S2CR_bit at DMA1_S2CR.B0;

sfr unsigned long   volatile DMA1_S2NDTR          absolute 0x40026044;
    sbit  NDT0_DMA1_S2NDTR_bit at DMA1_S2NDTR.B0;
    sbit  NDT1_DMA1_S2NDTR_bit at DMA1_S2NDTR.B1;
    sbit  NDT2_DMA1_S2NDTR_bit at DMA1_S2NDTR.B2;
    sbit  NDT3_DMA1_S2NDTR_bit at DMA1_S2NDTR.B3;
    sbit  NDT4_DMA1_S2NDTR_bit at DMA1_S2NDTR.B4;
    sbit  NDT5_DMA1_S2NDTR_bit at DMA1_S2NDTR.B5;
    sbit  NDT6_DMA1_S2NDTR_bit at DMA1_S2NDTR.B6;
    sbit  NDT7_DMA1_S2NDTR_bit at DMA1_S2NDTR.B7;
    sbit  NDT8_DMA1_S2NDTR_bit at DMA1_S2NDTR.B8;
    sbit  NDT9_DMA1_S2NDTR_bit at DMA1_S2NDTR.B9;
    sbit  NDT10_DMA1_S2NDTR_bit at DMA1_S2NDTR.B10;
    sbit  NDT11_DMA1_S2NDTR_bit at DMA1_S2NDTR.B11;
    sbit  NDT12_DMA1_S2NDTR_bit at DMA1_S2NDTR.B12;
    sbit  NDT13_DMA1_S2NDTR_bit at DMA1_S2NDTR.B13;
    sbit  NDT14_DMA1_S2NDTR_bit at DMA1_S2NDTR.B14;
    sbit  NDT15_DMA1_S2NDTR_bit at DMA1_S2NDTR.B15;

sfr unsigned long   volatile DMA1_S2PAR           absolute 0x40026048;
    sbit  PA0_DMA1_S2PAR_bit at DMA1_S2PAR.B0;
    sbit  PA1_DMA1_S2PAR_bit at DMA1_S2PAR.B1;
    sbit  PA2_DMA1_S2PAR_bit at DMA1_S2PAR.B2;
    sbit  PA3_DMA1_S2PAR_bit at DMA1_S2PAR.B3;
    sbit  PA4_DMA1_S2PAR_bit at DMA1_S2PAR.B4;
    sbit  PA5_DMA1_S2PAR_bit at DMA1_S2PAR.B5;
    sbit  PA6_DMA1_S2PAR_bit at DMA1_S2PAR.B6;
    sbit  PA7_DMA1_S2PAR_bit at DMA1_S2PAR.B7;
    sbit  PA8_DMA1_S2PAR_bit at DMA1_S2PAR.B8;
    sbit  PA9_DMA1_S2PAR_bit at DMA1_S2PAR.B9;
    sbit  PA10_DMA1_S2PAR_bit at DMA1_S2PAR.B10;
    sbit  PA11_DMA1_S2PAR_bit at DMA1_S2PAR.B11;
    sbit  PA12_DMA1_S2PAR_bit at DMA1_S2PAR.B12;
    sbit  PA13_DMA1_S2PAR_bit at DMA1_S2PAR.B13;
    sbit  PA14_DMA1_S2PAR_bit at DMA1_S2PAR.B14;
    sbit  PA15_DMA1_S2PAR_bit at DMA1_S2PAR.B15;
    sbit  PA16_DMA1_S2PAR_bit at DMA1_S2PAR.B16;
    sbit  PA17_DMA1_S2PAR_bit at DMA1_S2PAR.B17;
    sbit  PA18_DMA1_S2PAR_bit at DMA1_S2PAR.B18;
    sbit  PA19_DMA1_S2PAR_bit at DMA1_S2PAR.B19;
    sbit  PA20_DMA1_S2PAR_bit at DMA1_S2PAR.B20;
    sbit  PA21_DMA1_S2PAR_bit at DMA1_S2PAR.B21;
    sbit  PA22_DMA1_S2PAR_bit at DMA1_S2PAR.B22;
    sbit  PA23_DMA1_S2PAR_bit at DMA1_S2PAR.B23;
    sbit  PA24_DMA1_S2PAR_bit at DMA1_S2PAR.B24;
    sbit  PA25_DMA1_S2PAR_bit at DMA1_S2PAR.B25;
    sbit  PA26_DMA1_S2PAR_bit at DMA1_S2PAR.B26;
    sbit  PA27_DMA1_S2PAR_bit at DMA1_S2PAR.B27;
    sbit  PA28_DMA1_S2PAR_bit at DMA1_S2PAR.B28;
    sbit  PA29_DMA1_S2PAR_bit at DMA1_S2PAR.B29;
    sbit  PA30_DMA1_S2PAR_bit at DMA1_S2PAR.B30;
    sbit  PA31_DMA1_S2PAR_bit at DMA1_S2PAR.B31;

sfr unsigned long   volatile DMA1_S2M0AR          absolute 0x4002604C;
    sbit  M0A0_DMA1_S2M0AR_bit at DMA1_S2M0AR.B0;
    sbit  M0A1_DMA1_S2M0AR_bit at DMA1_S2M0AR.B1;
    sbit  M0A2_DMA1_S2M0AR_bit at DMA1_S2M0AR.B2;
    sbit  M0A3_DMA1_S2M0AR_bit at DMA1_S2M0AR.B3;
    sbit  M0A4_DMA1_S2M0AR_bit at DMA1_S2M0AR.B4;
    sbit  M0A5_DMA1_S2M0AR_bit at DMA1_S2M0AR.B5;
    sbit  M0A6_DMA1_S2M0AR_bit at DMA1_S2M0AR.B6;
    sbit  M0A7_DMA1_S2M0AR_bit at DMA1_S2M0AR.B7;
    sbit  M0A8_DMA1_S2M0AR_bit at DMA1_S2M0AR.B8;
    sbit  M0A9_DMA1_S2M0AR_bit at DMA1_S2M0AR.B9;
    sbit  M0A10_DMA1_S2M0AR_bit at DMA1_S2M0AR.B10;
    sbit  M0A11_DMA1_S2M0AR_bit at DMA1_S2M0AR.B11;
    sbit  M0A12_DMA1_S2M0AR_bit at DMA1_S2M0AR.B12;
    sbit  M0A13_DMA1_S2M0AR_bit at DMA1_S2M0AR.B13;
    sbit  M0A14_DMA1_S2M0AR_bit at DMA1_S2M0AR.B14;
    sbit  M0A15_DMA1_S2M0AR_bit at DMA1_S2M0AR.B15;
    sbit  M0A16_DMA1_S2M0AR_bit at DMA1_S2M0AR.B16;
    sbit  M0A17_DMA1_S2M0AR_bit at DMA1_S2M0AR.B17;
    sbit  M0A18_DMA1_S2M0AR_bit at DMA1_S2M0AR.B18;
    sbit  M0A19_DMA1_S2M0AR_bit at DMA1_S2M0AR.B19;
    sbit  M0A20_DMA1_S2M0AR_bit at DMA1_S2M0AR.B20;
    sbit  M0A21_DMA1_S2M0AR_bit at DMA1_S2M0AR.B21;
    sbit  M0A22_DMA1_S2M0AR_bit at DMA1_S2M0AR.B22;
    sbit  M0A23_DMA1_S2M0AR_bit at DMA1_S2M0AR.B23;
    sbit  M0A24_DMA1_S2M0AR_bit at DMA1_S2M0AR.B24;
    sbit  M0A25_DMA1_S2M0AR_bit at DMA1_S2M0AR.B25;
    sbit  M0A26_DMA1_S2M0AR_bit at DMA1_S2M0AR.B26;
    sbit  M0A27_DMA1_S2M0AR_bit at DMA1_S2M0AR.B27;
    sbit  M0A28_DMA1_S2M0AR_bit at DMA1_S2M0AR.B28;
    sbit  M0A29_DMA1_S2M0AR_bit at DMA1_S2M0AR.B29;
    sbit  M0A30_DMA1_S2M0AR_bit at DMA1_S2M0AR.B30;
    sbit  M0A31_DMA1_S2M0AR_bit at DMA1_S2M0AR.B31;

sfr unsigned long   volatile DMA1_S2M1AR          absolute 0x40026050;
    sbit  M1A0_DMA1_S2M1AR_bit at DMA1_S2M1AR.B0;
    sbit  M1A1_DMA1_S2M1AR_bit at DMA1_S2M1AR.B1;
    sbit  M1A2_DMA1_S2M1AR_bit at DMA1_S2M1AR.B2;
    sbit  M1A3_DMA1_S2M1AR_bit at DMA1_S2M1AR.B3;
    sbit  M1A4_DMA1_S2M1AR_bit at DMA1_S2M1AR.B4;
    sbit  M1A5_DMA1_S2M1AR_bit at DMA1_S2M1AR.B5;
    sbit  M1A6_DMA1_S2M1AR_bit at DMA1_S2M1AR.B6;
    sbit  M1A7_DMA1_S2M1AR_bit at DMA1_S2M1AR.B7;
    sbit  M1A8_DMA1_S2M1AR_bit at DMA1_S2M1AR.B8;
    sbit  M1A9_DMA1_S2M1AR_bit at DMA1_S2M1AR.B9;
    sbit  M1A10_DMA1_S2M1AR_bit at DMA1_S2M1AR.B10;
    sbit  M1A11_DMA1_S2M1AR_bit at DMA1_S2M1AR.B11;
    sbit  M1A12_DMA1_S2M1AR_bit at DMA1_S2M1AR.B12;
    sbit  M1A13_DMA1_S2M1AR_bit at DMA1_S2M1AR.B13;
    sbit  M1A14_DMA1_S2M1AR_bit at DMA1_S2M1AR.B14;
    sbit  M1A15_DMA1_S2M1AR_bit at DMA1_S2M1AR.B15;
    sbit  M1A16_DMA1_S2M1AR_bit at DMA1_S2M1AR.B16;
    sbit  M1A17_DMA1_S2M1AR_bit at DMA1_S2M1AR.B17;
    sbit  M1A18_DMA1_S2M1AR_bit at DMA1_S2M1AR.B18;
    sbit  M1A19_DMA1_S2M1AR_bit at DMA1_S2M1AR.B19;
    sbit  M1A20_DMA1_S2M1AR_bit at DMA1_S2M1AR.B20;
    sbit  M1A21_DMA1_S2M1AR_bit at DMA1_S2M1AR.B21;
    sbit  M1A22_DMA1_S2M1AR_bit at DMA1_S2M1AR.B22;
    sbit  M1A23_DMA1_S2M1AR_bit at DMA1_S2M1AR.B23;
    sbit  M1A24_DMA1_S2M1AR_bit at DMA1_S2M1AR.B24;
    sbit  M1A25_DMA1_S2M1AR_bit at DMA1_S2M1AR.B25;
    sbit  M1A26_DMA1_S2M1AR_bit at DMA1_S2M1AR.B26;
    sbit  M1A27_DMA1_S2M1AR_bit at DMA1_S2M1AR.B27;
    sbit  M1A28_DMA1_S2M1AR_bit at DMA1_S2M1AR.B28;
    sbit  M1A29_DMA1_S2M1AR_bit at DMA1_S2M1AR.B29;
    sbit  M1A30_DMA1_S2M1AR_bit at DMA1_S2M1AR.B30;
    sbit  M1A31_DMA1_S2M1AR_bit at DMA1_S2M1AR.B31;

sfr unsigned long   volatile DMA1_S2FCR           absolute 0x40026054;
    sbit  FEIE_DMA1_S2FCR_bit at DMA1_S2FCR.B7;
    sbit  FS0_DMA1_S2FCR_bit at DMA1_S2FCR.B3;
    sbit  FS1_DMA1_S2FCR_bit at DMA1_S2FCR.B4;
    sbit  FS2_DMA1_S2FCR_bit at DMA1_S2FCR.B5;
    sbit  DMDIS_DMA1_S2FCR_bit at DMA1_S2FCR.B2;
    sbit  FTH0_DMA1_S2FCR_bit at DMA1_S2FCR.B0;
    sbit  FTH1_DMA1_S2FCR_bit at DMA1_S2FCR.B1;

sfr unsigned long   volatile DMA1_S3CR            absolute 0x40026058;
    sbit  CHSEL0_DMA1_S3CR_bit at DMA1_S3CR.B25;
    sbit  CHSEL1_DMA1_S3CR_bit at DMA1_S3CR.B26;
    sbit  CHSEL2_DMA1_S3CR_bit at DMA1_S3CR.B27;
    sbit  MBURST0_DMA1_S3CR_bit at DMA1_S3CR.B23;
    sbit  MBURST1_DMA1_S3CR_bit at DMA1_S3CR.B24;
    sbit  PBURST0_DMA1_S3CR_bit at DMA1_S3CR.B21;
    sbit  PBURST1_DMA1_S3CR_bit at DMA1_S3CR.B22;
    sbit  ACK_DMA1_S3CR_bit at DMA1_S3CR.B20;
    sbit  CT_DMA1_S3CR_bit at DMA1_S3CR.B19;
    sbit  DBM_DMA1_S3CR_bit at DMA1_S3CR.B18;
    sbit  PL0_DMA1_S3CR_bit at DMA1_S3CR.B16;
    sbit  PL1_DMA1_S3CR_bit at DMA1_S3CR.B17;
    sbit  PINCOS_DMA1_S3CR_bit at DMA1_S3CR.B15;
    sbit  MSIZE0_DMA1_S3CR_bit at DMA1_S3CR.B13;
    sbit  MSIZE1_DMA1_S3CR_bit at DMA1_S3CR.B14;
    sbit  PSIZE0_DMA1_S3CR_bit at DMA1_S3CR.B11;
    sbit  PSIZE1_DMA1_S3CR_bit at DMA1_S3CR.B12;
    sbit  MINC_DMA1_S3CR_bit at DMA1_S3CR.B10;
    sbit  PINC_DMA1_S3CR_bit at DMA1_S3CR.B9;
    sbit  CIRC_DMA1_S3CR_bit at DMA1_S3CR.B8;
    sbit  DIR0_DMA1_S3CR_bit at DMA1_S3CR.B6;
    sbit  DIR1_DMA1_S3CR_bit at DMA1_S3CR.B7;
    sbit  PFCTRL_DMA1_S3CR_bit at DMA1_S3CR.B5;
    sbit  TCIE_DMA1_S3CR_bit at DMA1_S3CR.B4;
    sbit  HTIE_DMA1_S3CR_bit at DMA1_S3CR.B3;
    sbit  TEIE_DMA1_S3CR_bit at DMA1_S3CR.B2;
    sbit  DMEIE_DMA1_S3CR_bit at DMA1_S3CR.B1;
    sbit  EN_DMA1_S3CR_bit at DMA1_S3CR.B0;

sfr unsigned long   volatile DMA1_S3NDTR          absolute 0x4002605C;
    sbit  NDT0_DMA1_S3NDTR_bit at DMA1_S3NDTR.B0;
    sbit  NDT1_DMA1_S3NDTR_bit at DMA1_S3NDTR.B1;
    sbit  NDT2_DMA1_S3NDTR_bit at DMA1_S3NDTR.B2;
    sbit  NDT3_DMA1_S3NDTR_bit at DMA1_S3NDTR.B3;
    sbit  NDT4_DMA1_S3NDTR_bit at DMA1_S3NDTR.B4;
    sbit  NDT5_DMA1_S3NDTR_bit at DMA1_S3NDTR.B5;
    sbit  NDT6_DMA1_S3NDTR_bit at DMA1_S3NDTR.B6;
    sbit  NDT7_DMA1_S3NDTR_bit at DMA1_S3NDTR.B7;
    sbit  NDT8_DMA1_S3NDTR_bit at DMA1_S3NDTR.B8;
    sbit  NDT9_DMA1_S3NDTR_bit at DMA1_S3NDTR.B9;
    sbit  NDT10_DMA1_S3NDTR_bit at DMA1_S3NDTR.B10;
    sbit  NDT11_DMA1_S3NDTR_bit at DMA1_S3NDTR.B11;
    sbit  NDT12_DMA1_S3NDTR_bit at DMA1_S3NDTR.B12;
    sbit  NDT13_DMA1_S3NDTR_bit at DMA1_S3NDTR.B13;
    sbit  NDT14_DMA1_S3NDTR_bit at DMA1_S3NDTR.B14;
    sbit  NDT15_DMA1_S3NDTR_bit at DMA1_S3NDTR.B15;

sfr unsigned long   volatile DMA1_S3PAR           absolute 0x40026060;
    sbit  PA0_DMA1_S3PAR_bit at DMA1_S3PAR.B0;
    sbit  PA1_DMA1_S3PAR_bit at DMA1_S3PAR.B1;
    sbit  PA2_DMA1_S3PAR_bit at DMA1_S3PAR.B2;
    sbit  PA3_DMA1_S3PAR_bit at DMA1_S3PAR.B3;
    sbit  PA4_DMA1_S3PAR_bit at DMA1_S3PAR.B4;
    sbit  PA5_DMA1_S3PAR_bit at DMA1_S3PAR.B5;
    sbit  PA6_DMA1_S3PAR_bit at DMA1_S3PAR.B6;
    sbit  PA7_DMA1_S3PAR_bit at DMA1_S3PAR.B7;
    sbit  PA8_DMA1_S3PAR_bit at DMA1_S3PAR.B8;
    sbit  PA9_DMA1_S3PAR_bit at DMA1_S3PAR.B9;
    sbit  PA10_DMA1_S3PAR_bit at DMA1_S3PAR.B10;
    sbit  PA11_DMA1_S3PAR_bit at DMA1_S3PAR.B11;
    sbit  PA12_DMA1_S3PAR_bit at DMA1_S3PAR.B12;
    sbit  PA13_DMA1_S3PAR_bit at DMA1_S3PAR.B13;
    sbit  PA14_DMA1_S3PAR_bit at DMA1_S3PAR.B14;
    sbit  PA15_DMA1_S3PAR_bit at DMA1_S3PAR.B15;
    sbit  PA16_DMA1_S3PAR_bit at DMA1_S3PAR.B16;
    sbit  PA17_DMA1_S3PAR_bit at DMA1_S3PAR.B17;
    sbit  PA18_DMA1_S3PAR_bit at DMA1_S3PAR.B18;
    sbit  PA19_DMA1_S3PAR_bit at DMA1_S3PAR.B19;
    sbit  PA20_DMA1_S3PAR_bit at DMA1_S3PAR.B20;
    sbit  PA21_DMA1_S3PAR_bit at DMA1_S3PAR.B21;
    sbit  PA22_DMA1_S3PAR_bit at DMA1_S3PAR.B22;
    sbit  PA23_DMA1_S3PAR_bit at DMA1_S3PAR.B23;
    sbit  PA24_DMA1_S3PAR_bit at DMA1_S3PAR.B24;
    sbit  PA25_DMA1_S3PAR_bit at DMA1_S3PAR.B25;
    sbit  PA26_DMA1_S3PAR_bit at DMA1_S3PAR.B26;
    sbit  PA27_DMA1_S3PAR_bit at DMA1_S3PAR.B27;
    sbit  PA28_DMA1_S3PAR_bit at DMA1_S3PAR.B28;
    sbit  PA29_DMA1_S3PAR_bit at DMA1_S3PAR.B29;
    sbit  PA30_DMA1_S3PAR_bit at DMA1_S3PAR.B30;
    sbit  PA31_DMA1_S3PAR_bit at DMA1_S3PAR.B31;

sfr unsigned long   volatile DMA1_S3M0AR          absolute 0x40026064;
    sbit  M0A0_DMA1_S3M0AR_bit at DMA1_S3M0AR.B0;
    sbit  M0A1_DMA1_S3M0AR_bit at DMA1_S3M0AR.B1;
    sbit  M0A2_DMA1_S3M0AR_bit at DMA1_S3M0AR.B2;
    sbit  M0A3_DMA1_S3M0AR_bit at DMA1_S3M0AR.B3;
    sbit  M0A4_DMA1_S3M0AR_bit at DMA1_S3M0AR.B4;
    sbit  M0A5_DMA1_S3M0AR_bit at DMA1_S3M0AR.B5;
    sbit  M0A6_DMA1_S3M0AR_bit at DMA1_S3M0AR.B6;
    sbit  M0A7_DMA1_S3M0AR_bit at DMA1_S3M0AR.B7;
    sbit  M0A8_DMA1_S3M0AR_bit at DMA1_S3M0AR.B8;
    sbit  M0A9_DMA1_S3M0AR_bit at DMA1_S3M0AR.B9;
    sbit  M0A10_DMA1_S3M0AR_bit at DMA1_S3M0AR.B10;
    sbit  M0A11_DMA1_S3M0AR_bit at DMA1_S3M0AR.B11;
    sbit  M0A12_DMA1_S3M0AR_bit at DMA1_S3M0AR.B12;
    sbit  M0A13_DMA1_S3M0AR_bit at DMA1_S3M0AR.B13;
    sbit  M0A14_DMA1_S3M0AR_bit at DMA1_S3M0AR.B14;
    sbit  M0A15_DMA1_S3M0AR_bit at DMA1_S3M0AR.B15;
    sbit  M0A16_DMA1_S3M0AR_bit at DMA1_S3M0AR.B16;
    sbit  M0A17_DMA1_S3M0AR_bit at DMA1_S3M0AR.B17;
    sbit  M0A18_DMA1_S3M0AR_bit at DMA1_S3M0AR.B18;
    sbit  M0A19_DMA1_S3M0AR_bit at DMA1_S3M0AR.B19;
    sbit  M0A20_DMA1_S3M0AR_bit at DMA1_S3M0AR.B20;
    sbit  M0A21_DMA1_S3M0AR_bit at DMA1_S3M0AR.B21;
    sbit  M0A22_DMA1_S3M0AR_bit at DMA1_S3M0AR.B22;
    sbit  M0A23_DMA1_S3M0AR_bit at DMA1_S3M0AR.B23;
    sbit  M0A24_DMA1_S3M0AR_bit at DMA1_S3M0AR.B24;
    sbit  M0A25_DMA1_S3M0AR_bit at DMA1_S3M0AR.B25;
    sbit  M0A26_DMA1_S3M0AR_bit at DMA1_S3M0AR.B26;
    sbit  M0A27_DMA1_S3M0AR_bit at DMA1_S3M0AR.B27;
    sbit  M0A28_DMA1_S3M0AR_bit at DMA1_S3M0AR.B28;
    sbit  M0A29_DMA1_S3M0AR_bit at DMA1_S3M0AR.B29;
    sbit  M0A30_DMA1_S3M0AR_bit at DMA1_S3M0AR.B30;
    sbit  M0A31_DMA1_S3M0AR_bit at DMA1_S3M0AR.B31;

sfr unsigned long   volatile DMA1_S3M1AR          absolute 0x40026068;
    sbit  M1A0_DMA1_S3M1AR_bit at DMA1_S3M1AR.B0;
    sbit  M1A1_DMA1_S3M1AR_bit at DMA1_S3M1AR.B1;
    sbit  M1A2_DMA1_S3M1AR_bit at DMA1_S3M1AR.B2;
    sbit  M1A3_DMA1_S3M1AR_bit at DMA1_S3M1AR.B3;
    sbit  M1A4_DMA1_S3M1AR_bit at DMA1_S3M1AR.B4;
    sbit  M1A5_DMA1_S3M1AR_bit at DMA1_S3M1AR.B5;
    sbit  M1A6_DMA1_S3M1AR_bit at DMA1_S3M1AR.B6;
    sbit  M1A7_DMA1_S3M1AR_bit at DMA1_S3M1AR.B7;
    sbit  M1A8_DMA1_S3M1AR_bit at DMA1_S3M1AR.B8;
    sbit  M1A9_DMA1_S3M1AR_bit at DMA1_S3M1AR.B9;
    sbit  M1A10_DMA1_S3M1AR_bit at DMA1_S3M1AR.B10;
    sbit  M1A11_DMA1_S3M1AR_bit at DMA1_S3M1AR.B11;
    sbit  M1A12_DMA1_S3M1AR_bit at DMA1_S3M1AR.B12;
    sbit  M1A13_DMA1_S3M1AR_bit at DMA1_S3M1AR.B13;
    sbit  M1A14_DMA1_S3M1AR_bit at DMA1_S3M1AR.B14;
    sbit  M1A15_DMA1_S3M1AR_bit at DMA1_S3M1AR.B15;
    sbit  M1A16_DMA1_S3M1AR_bit at DMA1_S3M1AR.B16;
    sbit  M1A17_DMA1_S3M1AR_bit at DMA1_S3M1AR.B17;
    sbit  M1A18_DMA1_S3M1AR_bit at DMA1_S3M1AR.B18;
    sbit  M1A19_DMA1_S3M1AR_bit at DMA1_S3M1AR.B19;
    sbit  M1A20_DMA1_S3M1AR_bit at DMA1_S3M1AR.B20;
    sbit  M1A21_DMA1_S3M1AR_bit at DMA1_S3M1AR.B21;
    sbit  M1A22_DMA1_S3M1AR_bit at DMA1_S3M1AR.B22;
    sbit  M1A23_DMA1_S3M1AR_bit at DMA1_S3M1AR.B23;
    sbit  M1A24_DMA1_S3M1AR_bit at DMA1_S3M1AR.B24;
    sbit  M1A25_DMA1_S3M1AR_bit at DMA1_S3M1AR.B25;
    sbit  M1A26_DMA1_S3M1AR_bit at DMA1_S3M1AR.B26;
    sbit  M1A27_DMA1_S3M1AR_bit at DMA1_S3M1AR.B27;
    sbit  M1A28_DMA1_S3M1AR_bit at DMA1_S3M1AR.B28;
    sbit  M1A29_DMA1_S3M1AR_bit at DMA1_S3M1AR.B29;
    sbit  M1A30_DMA1_S3M1AR_bit at DMA1_S3M1AR.B30;
    sbit  M1A31_DMA1_S3M1AR_bit at DMA1_S3M1AR.B31;

sfr unsigned long   volatile DMA1_S3FCR           absolute 0x4002606C;
    sbit  FEIE_DMA1_S3FCR_bit at DMA1_S3FCR.B7;
    sbit  FS0_DMA1_S3FCR_bit at DMA1_S3FCR.B3;
    sbit  FS1_DMA1_S3FCR_bit at DMA1_S3FCR.B4;
    sbit  FS2_DMA1_S3FCR_bit at DMA1_S3FCR.B5;
    sbit  DMDIS_DMA1_S3FCR_bit at DMA1_S3FCR.B2;
    sbit  FTH0_DMA1_S3FCR_bit at DMA1_S3FCR.B0;
    sbit  FTH1_DMA1_S3FCR_bit at DMA1_S3FCR.B1;

sfr unsigned long   volatile DMA1_S4CR            absolute 0x40026070;
    sbit  CHSEL0_DMA1_S4CR_bit at DMA1_S4CR.B25;
    sbit  CHSEL1_DMA1_S4CR_bit at DMA1_S4CR.B26;
    sbit  CHSEL2_DMA1_S4CR_bit at DMA1_S4CR.B27;
    sbit  MBURST0_DMA1_S4CR_bit at DMA1_S4CR.B23;
    sbit  MBURST1_DMA1_S4CR_bit at DMA1_S4CR.B24;
    sbit  PBURST0_DMA1_S4CR_bit at DMA1_S4CR.B21;
    sbit  PBURST1_DMA1_S4CR_bit at DMA1_S4CR.B22;
    sbit  ACK_DMA1_S4CR_bit at DMA1_S4CR.B20;
    sbit  CT_DMA1_S4CR_bit at DMA1_S4CR.B19;
    sbit  DBM_DMA1_S4CR_bit at DMA1_S4CR.B18;
    sbit  PL0_DMA1_S4CR_bit at DMA1_S4CR.B16;
    sbit  PL1_DMA1_S4CR_bit at DMA1_S4CR.B17;
    sbit  PINCOS_DMA1_S4CR_bit at DMA1_S4CR.B15;
    sbit  MSIZE0_DMA1_S4CR_bit at DMA1_S4CR.B13;
    sbit  MSIZE1_DMA1_S4CR_bit at DMA1_S4CR.B14;
    sbit  PSIZE0_DMA1_S4CR_bit at DMA1_S4CR.B11;
    sbit  PSIZE1_DMA1_S4CR_bit at DMA1_S4CR.B12;
    sbit  MINC_DMA1_S4CR_bit at DMA1_S4CR.B10;
    sbit  PINC_DMA1_S4CR_bit at DMA1_S4CR.B9;
    sbit  CIRC_DMA1_S4CR_bit at DMA1_S4CR.B8;
    sbit  DIR0_DMA1_S4CR_bit at DMA1_S4CR.B6;
    sbit  DIR1_DMA1_S4CR_bit at DMA1_S4CR.B7;
    sbit  PFCTRL_DMA1_S4CR_bit at DMA1_S4CR.B5;
    sbit  TCIE_DMA1_S4CR_bit at DMA1_S4CR.B4;
    sbit  HTIE_DMA1_S4CR_bit at DMA1_S4CR.B3;
    sbit  TEIE_DMA1_S4CR_bit at DMA1_S4CR.B2;
    sbit  DMEIE_DMA1_S4CR_bit at DMA1_S4CR.B1;
    sbit  EN_DMA1_S4CR_bit at DMA1_S4CR.B0;

sfr unsigned long   volatile DMA1_S4NDTR          absolute 0x40026074;
    sbit  NDT0_DMA1_S4NDTR_bit at DMA1_S4NDTR.B0;
    sbit  NDT1_DMA1_S4NDTR_bit at DMA1_S4NDTR.B1;
    sbit  NDT2_DMA1_S4NDTR_bit at DMA1_S4NDTR.B2;
    sbit  NDT3_DMA1_S4NDTR_bit at DMA1_S4NDTR.B3;
    sbit  NDT4_DMA1_S4NDTR_bit at DMA1_S4NDTR.B4;
    sbit  NDT5_DMA1_S4NDTR_bit at DMA1_S4NDTR.B5;
    sbit  NDT6_DMA1_S4NDTR_bit at DMA1_S4NDTR.B6;
    sbit  NDT7_DMA1_S4NDTR_bit at DMA1_S4NDTR.B7;
    sbit  NDT8_DMA1_S4NDTR_bit at DMA1_S4NDTR.B8;
    sbit  NDT9_DMA1_S4NDTR_bit at DMA1_S4NDTR.B9;
    sbit  NDT10_DMA1_S4NDTR_bit at DMA1_S4NDTR.B10;
    sbit  NDT11_DMA1_S4NDTR_bit at DMA1_S4NDTR.B11;
    sbit  NDT12_DMA1_S4NDTR_bit at DMA1_S4NDTR.B12;
    sbit  NDT13_DMA1_S4NDTR_bit at DMA1_S4NDTR.B13;
    sbit  NDT14_DMA1_S4NDTR_bit at DMA1_S4NDTR.B14;
    sbit  NDT15_DMA1_S4NDTR_bit at DMA1_S4NDTR.B15;

sfr unsigned long   volatile DMA1_S4PAR           absolute 0x40026078;
    sbit  PA0_DMA1_S4PAR_bit at DMA1_S4PAR.B0;
    sbit  PA1_DMA1_S4PAR_bit at DMA1_S4PAR.B1;
    sbit  PA2_DMA1_S4PAR_bit at DMA1_S4PAR.B2;
    sbit  PA3_DMA1_S4PAR_bit at DMA1_S4PAR.B3;
    sbit  PA4_DMA1_S4PAR_bit at DMA1_S4PAR.B4;
    sbit  PA5_DMA1_S4PAR_bit at DMA1_S4PAR.B5;
    sbit  PA6_DMA1_S4PAR_bit at DMA1_S4PAR.B6;
    sbit  PA7_DMA1_S4PAR_bit at DMA1_S4PAR.B7;
    sbit  PA8_DMA1_S4PAR_bit at DMA1_S4PAR.B8;
    sbit  PA9_DMA1_S4PAR_bit at DMA1_S4PAR.B9;
    sbit  PA10_DMA1_S4PAR_bit at DMA1_S4PAR.B10;
    sbit  PA11_DMA1_S4PAR_bit at DMA1_S4PAR.B11;
    sbit  PA12_DMA1_S4PAR_bit at DMA1_S4PAR.B12;
    sbit  PA13_DMA1_S4PAR_bit at DMA1_S4PAR.B13;
    sbit  PA14_DMA1_S4PAR_bit at DMA1_S4PAR.B14;
    sbit  PA15_DMA1_S4PAR_bit at DMA1_S4PAR.B15;
    sbit  PA16_DMA1_S4PAR_bit at DMA1_S4PAR.B16;
    sbit  PA17_DMA1_S4PAR_bit at DMA1_S4PAR.B17;
    sbit  PA18_DMA1_S4PAR_bit at DMA1_S4PAR.B18;
    sbit  PA19_DMA1_S4PAR_bit at DMA1_S4PAR.B19;
    sbit  PA20_DMA1_S4PAR_bit at DMA1_S4PAR.B20;
    sbit  PA21_DMA1_S4PAR_bit at DMA1_S4PAR.B21;
    sbit  PA22_DMA1_S4PAR_bit at DMA1_S4PAR.B22;
    sbit  PA23_DMA1_S4PAR_bit at DMA1_S4PAR.B23;
    sbit  PA24_DMA1_S4PAR_bit at DMA1_S4PAR.B24;
    sbit  PA25_DMA1_S4PAR_bit at DMA1_S4PAR.B25;
    sbit  PA26_DMA1_S4PAR_bit at DMA1_S4PAR.B26;
    sbit  PA27_DMA1_S4PAR_bit at DMA1_S4PAR.B27;
    sbit  PA28_DMA1_S4PAR_bit at DMA1_S4PAR.B28;
    sbit  PA29_DMA1_S4PAR_bit at DMA1_S4PAR.B29;
    sbit  PA30_DMA1_S4PAR_bit at DMA1_S4PAR.B30;
    sbit  PA31_DMA1_S4PAR_bit at DMA1_S4PAR.B31;

sfr unsigned long   volatile DMA1_S4M0AR          absolute 0x4002607C;
    sbit  M0A0_DMA1_S4M0AR_bit at DMA1_S4M0AR.B0;
    sbit  M0A1_DMA1_S4M0AR_bit at DMA1_S4M0AR.B1;
    sbit  M0A2_DMA1_S4M0AR_bit at DMA1_S4M0AR.B2;
    sbit  M0A3_DMA1_S4M0AR_bit at DMA1_S4M0AR.B3;
    sbit  M0A4_DMA1_S4M0AR_bit at DMA1_S4M0AR.B4;
    sbit  M0A5_DMA1_S4M0AR_bit at DMA1_S4M0AR.B5;
    sbit  M0A6_DMA1_S4M0AR_bit at DMA1_S4M0AR.B6;
    sbit  M0A7_DMA1_S4M0AR_bit at DMA1_S4M0AR.B7;
    sbit  M0A8_DMA1_S4M0AR_bit at DMA1_S4M0AR.B8;
    sbit  M0A9_DMA1_S4M0AR_bit at DMA1_S4M0AR.B9;
    sbit  M0A10_DMA1_S4M0AR_bit at DMA1_S4M0AR.B10;
    sbit  M0A11_DMA1_S4M0AR_bit at DMA1_S4M0AR.B11;
    sbit  M0A12_DMA1_S4M0AR_bit at DMA1_S4M0AR.B12;
    sbit  M0A13_DMA1_S4M0AR_bit at DMA1_S4M0AR.B13;
    sbit  M0A14_DMA1_S4M0AR_bit at DMA1_S4M0AR.B14;
    sbit  M0A15_DMA1_S4M0AR_bit at DMA1_S4M0AR.B15;
    sbit  M0A16_DMA1_S4M0AR_bit at DMA1_S4M0AR.B16;
    sbit  M0A17_DMA1_S4M0AR_bit at DMA1_S4M0AR.B17;
    sbit  M0A18_DMA1_S4M0AR_bit at DMA1_S4M0AR.B18;
    sbit  M0A19_DMA1_S4M0AR_bit at DMA1_S4M0AR.B19;
    sbit  M0A20_DMA1_S4M0AR_bit at DMA1_S4M0AR.B20;
    sbit  M0A21_DMA1_S4M0AR_bit at DMA1_S4M0AR.B21;
    sbit  M0A22_DMA1_S4M0AR_bit at DMA1_S4M0AR.B22;
    sbit  M0A23_DMA1_S4M0AR_bit at DMA1_S4M0AR.B23;
    sbit  M0A24_DMA1_S4M0AR_bit at DMA1_S4M0AR.B24;
    sbit  M0A25_DMA1_S4M0AR_bit at DMA1_S4M0AR.B25;
    sbit  M0A26_DMA1_S4M0AR_bit at DMA1_S4M0AR.B26;
    sbit  M0A27_DMA1_S4M0AR_bit at DMA1_S4M0AR.B27;
    sbit  M0A28_DMA1_S4M0AR_bit at DMA1_S4M0AR.B28;
    sbit  M0A29_DMA1_S4M0AR_bit at DMA1_S4M0AR.B29;
    sbit  M0A30_DMA1_S4M0AR_bit at DMA1_S4M0AR.B30;
    sbit  M0A31_DMA1_S4M0AR_bit at DMA1_S4M0AR.B31;

sfr unsigned long   volatile DMA1_S4M1AR          absolute 0x40026080;
    sbit  M1A0_DMA1_S4M1AR_bit at DMA1_S4M1AR.B0;
    sbit  M1A1_DMA1_S4M1AR_bit at DMA1_S4M1AR.B1;
    sbit  M1A2_DMA1_S4M1AR_bit at DMA1_S4M1AR.B2;
    sbit  M1A3_DMA1_S4M1AR_bit at DMA1_S4M1AR.B3;
    sbit  M1A4_DMA1_S4M1AR_bit at DMA1_S4M1AR.B4;
    sbit  M1A5_DMA1_S4M1AR_bit at DMA1_S4M1AR.B5;
    sbit  M1A6_DMA1_S4M1AR_bit at DMA1_S4M1AR.B6;
    sbit  M1A7_DMA1_S4M1AR_bit at DMA1_S4M1AR.B7;
    sbit  M1A8_DMA1_S4M1AR_bit at DMA1_S4M1AR.B8;
    sbit  M1A9_DMA1_S4M1AR_bit at DMA1_S4M1AR.B9;
    sbit  M1A10_DMA1_S4M1AR_bit at DMA1_S4M1AR.B10;
    sbit  M1A11_DMA1_S4M1AR_bit at DMA1_S4M1AR.B11;
    sbit  M1A12_DMA1_S4M1AR_bit at DMA1_S4M1AR.B12;
    sbit  M1A13_DMA1_S4M1AR_bit at DMA1_S4M1AR.B13;
    sbit  M1A14_DMA1_S4M1AR_bit at DMA1_S4M1AR.B14;
    sbit  M1A15_DMA1_S4M1AR_bit at DMA1_S4M1AR.B15;
    sbit  M1A16_DMA1_S4M1AR_bit at DMA1_S4M1AR.B16;
    sbit  M1A17_DMA1_S4M1AR_bit at DMA1_S4M1AR.B17;
    sbit  M1A18_DMA1_S4M1AR_bit at DMA1_S4M1AR.B18;
    sbit  M1A19_DMA1_S4M1AR_bit at DMA1_S4M1AR.B19;
    sbit  M1A20_DMA1_S4M1AR_bit at DMA1_S4M1AR.B20;
    sbit  M1A21_DMA1_S4M1AR_bit at DMA1_S4M1AR.B21;
    sbit  M1A22_DMA1_S4M1AR_bit at DMA1_S4M1AR.B22;
    sbit  M1A23_DMA1_S4M1AR_bit at DMA1_S4M1AR.B23;
    sbit  M1A24_DMA1_S4M1AR_bit at DMA1_S4M1AR.B24;
    sbit  M1A25_DMA1_S4M1AR_bit at DMA1_S4M1AR.B25;
    sbit  M1A26_DMA1_S4M1AR_bit at DMA1_S4M1AR.B26;
    sbit  M1A27_DMA1_S4M1AR_bit at DMA1_S4M1AR.B27;
    sbit  M1A28_DMA1_S4M1AR_bit at DMA1_S4M1AR.B28;
    sbit  M1A29_DMA1_S4M1AR_bit at DMA1_S4M1AR.B29;
    sbit  M1A30_DMA1_S4M1AR_bit at DMA1_S4M1AR.B30;
    sbit  M1A31_DMA1_S4M1AR_bit at DMA1_S4M1AR.B31;

sfr unsigned long   volatile DMA1_S4FCR           absolute 0x40026084;
    sbit  FEIE_DMA1_S4FCR_bit at DMA1_S4FCR.B7;
    sbit  FS0_DMA1_S4FCR_bit at DMA1_S4FCR.B3;
    sbit  FS1_DMA1_S4FCR_bit at DMA1_S4FCR.B4;
    sbit  FS2_DMA1_S4FCR_bit at DMA1_S4FCR.B5;
    sbit  DMDIS_DMA1_S4FCR_bit at DMA1_S4FCR.B2;
    sbit  FTH0_DMA1_S4FCR_bit at DMA1_S4FCR.B0;
    sbit  FTH1_DMA1_S4FCR_bit at DMA1_S4FCR.B1;

sfr unsigned long   volatile DMA1_S5CR            absolute 0x40026088;
    sbit  CHSEL0_DMA1_S5CR_bit at DMA1_S5CR.B25;
    sbit  CHSEL1_DMA1_S5CR_bit at DMA1_S5CR.B26;
    sbit  CHSEL2_DMA1_S5CR_bit at DMA1_S5CR.B27;
    sbit  MBURST0_DMA1_S5CR_bit at DMA1_S5CR.B23;
    sbit  MBURST1_DMA1_S5CR_bit at DMA1_S5CR.B24;
    sbit  PBURST0_DMA1_S5CR_bit at DMA1_S5CR.B21;
    sbit  PBURST1_DMA1_S5CR_bit at DMA1_S5CR.B22;
    sbit  ACK_DMA1_S5CR_bit at DMA1_S5CR.B20;
    sbit  CT_DMA1_S5CR_bit at DMA1_S5CR.B19;
    sbit  DBM_DMA1_S5CR_bit at DMA1_S5CR.B18;
    sbit  PL0_DMA1_S5CR_bit at DMA1_S5CR.B16;
    sbit  PL1_DMA1_S5CR_bit at DMA1_S5CR.B17;
    sbit  PINCOS_DMA1_S5CR_bit at DMA1_S5CR.B15;
    sbit  MSIZE0_DMA1_S5CR_bit at DMA1_S5CR.B13;
    sbit  MSIZE1_DMA1_S5CR_bit at DMA1_S5CR.B14;
    sbit  PSIZE0_DMA1_S5CR_bit at DMA1_S5CR.B11;
    sbit  PSIZE1_DMA1_S5CR_bit at DMA1_S5CR.B12;
    sbit  MINC_DMA1_S5CR_bit at DMA1_S5CR.B10;
    sbit  PINC_DMA1_S5CR_bit at DMA1_S5CR.B9;
    sbit  CIRC_DMA1_S5CR_bit at DMA1_S5CR.B8;
    sbit  DIR0_DMA1_S5CR_bit at DMA1_S5CR.B6;
    sbit  DIR1_DMA1_S5CR_bit at DMA1_S5CR.B7;
    sbit  PFCTRL_DMA1_S5CR_bit at DMA1_S5CR.B5;
    sbit  TCIE_DMA1_S5CR_bit at DMA1_S5CR.B4;
    sbit  HTIE_DMA1_S5CR_bit at DMA1_S5CR.B3;
    sbit  TEIE_DMA1_S5CR_bit at DMA1_S5CR.B2;
    sbit  DMEIE_DMA1_S5CR_bit at DMA1_S5CR.B1;
    sbit  EN_DMA1_S5CR_bit at DMA1_S5CR.B0;

sfr unsigned long   volatile DMA1_S5NDTR          absolute 0x4002608C;
    sbit  NDT0_DMA1_S5NDTR_bit at DMA1_S5NDTR.B0;
    sbit  NDT1_DMA1_S5NDTR_bit at DMA1_S5NDTR.B1;
    sbit  NDT2_DMA1_S5NDTR_bit at DMA1_S5NDTR.B2;
    sbit  NDT3_DMA1_S5NDTR_bit at DMA1_S5NDTR.B3;
    sbit  NDT4_DMA1_S5NDTR_bit at DMA1_S5NDTR.B4;
    sbit  NDT5_DMA1_S5NDTR_bit at DMA1_S5NDTR.B5;
    sbit  NDT6_DMA1_S5NDTR_bit at DMA1_S5NDTR.B6;
    sbit  NDT7_DMA1_S5NDTR_bit at DMA1_S5NDTR.B7;
    sbit  NDT8_DMA1_S5NDTR_bit at DMA1_S5NDTR.B8;
    sbit  NDT9_DMA1_S5NDTR_bit at DMA1_S5NDTR.B9;
    sbit  NDT10_DMA1_S5NDTR_bit at DMA1_S5NDTR.B10;
    sbit  NDT11_DMA1_S5NDTR_bit at DMA1_S5NDTR.B11;
    sbit  NDT12_DMA1_S5NDTR_bit at DMA1_S5NDTR.B12;
    sbit  NDT13_DMA1_S5NDTR_bit at DMA1_S5NDTR.B13;
    sbit  NDT14_DMA1_S5NDTR_bit at DMA1_S5NDTR.B14;
    sbit  NDT15_DMA1_S5NDTR_bit at DMA1_S5NDTR.B15;

sfr unsigned long   volatile DMA1_S5PAR           absolute 0x40026090;
    sbit  PA0_DMA1_S5PAR_bit at DMA1_S5PAR.B0;
    sbit  PA1_DMA1_S5PAR_bit at DMA1_S5PAR.B1;
    sbit  PA2_DMA1_S5PAR_bit at DMA1_S5PAR.B2;
    sbit  PA3_DMA1_S5PAR_bit at DMA1_S5PAR.B3;
    sbit  PA4_DMA1_S5PAR_bit at DMA1_S5PAR.B4;
    sbit  PA5_DMA1_S5PAR_bit at DMA1_S5PAR.B5;
    sbit  PA6_DMA1_S5PAR_bit at DMA1_S5PAR.B6;
    sbit  PA7_DMA1_S5PAR_bit at DMA1_S5PAR.B7;
    sbit  PA8_DMA1_S5PAR_bit at DMA1_S5PAR.B8;
    sbit  PA9_DMA1_S5PAR_bit at DMA1_S5PAR.B9;
    sbit  PA10_DMA1_S5PAR_bit at DMA1_S5PAR.B10;
    sbit  PA11_DMA1_S5PAR_bit at DMA1_S5PAR.B11;
    sbit  PA12_DMA1_S5PAR_bit at DMA1_S5PAR.B12;
    sbit  PA13_DMA1_S5PAR_bit at DMA1_S5PAR.B13;
    sbit  PA14_DMA1_S5PAR_bit at DMA1_S5PAR.B14;
    sbit  PA15_DMA1_S5PAR_bit at DMA1_S5PAR.B15;
    sbit  PA16_DMA1_S5PAR_bit at DMA1_S5PAR.B16;
    sbit  PA17_DMA1_S5PAR_bit at DMA1_S5PAR.B17;
    sbit  PA18_DMA1_S5PAR_bit at DMA1_S5PAR.B18;
    sbit  PA19_DMA1_S5PAR_bit at DMA1_S5PAR.B19;
    sbit  PA20_DMA1_S5PAR_bit at DMA1_S5PAR.B20;
    sbit  PA21_DMA1_S5PAR_bit at DMA1_S5PAR.B21;
    sbit  PA22_DMA1_S5PAR_bit at DMA1_S5PAR.B22;
    sbit  PA23_DMA1_S5PAR_bit at DMA1_S5PAR.B23;
    sbit  PA24_DMA1_S5PAR_bit at DMA1_S5PAR.B24;
    sbit  PA25_DMA1_S5PAR_bit at DMA1_S5PAR.B25;
    sbit  PA26_DMA1_S5PAR_bit at DMA1_S5PAR.B26;
    sbit  PA27_DMA1_S5PAR_bit at DMA1_S5PAR.B27;
    sbit  PA28_DMA1_S5PAR_bit at DMA1_S5PAR.B28;
    sbit  PA29_DMA1_S5PAR_bit at DMA1_S5PAR.B29;
    sbit  PA30_DMA1_S5PAR_bit at DMA1_S5PAR.B30;
    sbit  PA31_DMA1_S5PAR_bit at DMA1_S5PAR.B31;

sfr unsigned long   volatile DMA1_S5M0AR          absolute 0x40026094;
    sbit  M0A0_DMA1_S5M0AR_bit at DMA1_S5M0AR.B0;
    sbit  M0A1_DMA1_S5M0AR_bit at DMA1_S5M0AR.B1;
    sbit  M0A2_DMA1_S5M0AR_bit at DMA1_S5M0AR.B2;
    sbit  M0A3_DMA1_S5M0AR_bit at DMA1_S5M0AR.B3;
    sbit  M0A4_DMA1_S5M0AR_bit at DMA1_S5M0AR.B4;
    sbit  M0A5_DMA1_S5M0AR_bit at DMA1_S5M0AR.B5;
    sbit  M0A6_DMA1_S5M0AR_bit at DMA1_S5M0AR.B6;
    sbit  M0A7_DMA1_S5M0AR_bit at DMA1_S5M0AR.B7;
    sbit  M0A8_DMA1_S5M0AR_bit at DMA1_S5M0AR.B8;
    sbit  M0A9_DMA1_S5M0AR_bit at DMA1_S5M0AR.B9;
    sbit  M0A10_DMA1_S5M0AR_bit at DMA1_S5M0AR.B10;
    sbit  M0A11_DMA1_S5M0AR_bit at DMA1_S5M0AR.B11;
    sbit  M0A12_DMA1_S5M0AR_bit at DMA1_S5M0AR.B12;
    sbit  M0A13_DMA1_S5M0AR_bit at DMA1_S5M0AR.B13;
    sbit  M0A14_DMA1_S5M0AR_bit at DMA1_S5M0AR.B14;
    sbit  M0A15_DMA1_S5M0AR_bit at DMA1_S5M0AR.B15;
    sbit  M0A16_DMA1_S5M0AR_bit at DMA1_S5M0AR.B16;
    sbit  M0A17_DMA1_S5M0AR_bit at DMA1_S5M0AR.B17;
    sbit  M0A18_DMA1_S5M0AR_bit at DMA1_S5M0AR.B18;
    sbit  M0A19_DMA1_S5M0AR_bit at DMA1_S5M0AR.B19;
    sbit  M0A20_DMA1_S5M0AR_bit at DMA1_S5M0AR.B20;
    sbit  M0A21_DMA1_S5M0AR_bit at DMA1_S5M0AR.B21;
    sbit  M0A22_DMA1_S5M0AR_bit at DMA1_S5M0AR.B22;
    sbit  M0A23_DMA1_S5M0AR_bit at DMA1_S5M0AR.B23;
    sbit  M0A24_DMA1_S5M0AR_bit at DMA1_S5M0AR.B24;
    sbit  M0A25_DMA1_S5M0AR_bit at DMA1_S5M0AR.B25;
    sbit  M0A26_DMA1_S5M0AR_bit at DMA1_S5M0AR.B26;
    sbit  M0A27_DMA1_S5M0AR_bit at DMA1_S5M0AR.B27;
    sbit  M0A28_DMA1_S5M0AR_bit at DMA1_S5M0AR.B28;
    sbit  M0A29_DMA1_S5M0AR_bit at DMA1_S5M0AR.B29;
    sbit  M0A30_DMA1_S5M0AR_bit at DMA1_S5M0AR.B30;
    sbit  M0A31_DMA1_S5M0AR_bit at DMA1_S5M0AR.B31;

sfr unsigned long   volatile DMA1_S5M1AR          absolute 0x40026098;
    sbit  M1A0_DMA1_S5M1AR_bit at DMA1_S5M1AR.B0;
    sbit  M1A1_DMA1_S5M1AR_bit at DMA1_S5M1AR.B1;
    sbit  M1A2_DMA1_S5M1AR_bit at DMA1_S5M1AR.B2;
    sbit  M1A3_DMA1_S5M1AR_bit at DMA1_S5M1AR.B3;
    sbit  M1A4_DMA1_S5M1AR_bit at DMA1_S5M1AR.B4;
    sbit  M1A5_DMA1_S5M1AR_bit at DMA1_S5M1AR.B5;
    sbit  M1A6_DMA1_S5M1AR_bit at DMA1_S5M1AR.B6;
    sbit  M1A7_DMA1_S5M1AR_bit at DMA1_S5M1AR.B7;
    sbit  M1A8_DMA1_S5M1AR_bit at DMA1_S5M1AR.B8;
    sbit  M1A9_DMA1_S5M1AR_bit at DMA1_S5M1AR.B9;
    sbit  M1A10_DMA1_S5M1AR_bit at DMA1_S5M1AR.B10;
    sbit  M1A11_DMA1_S5M1AR_bit at DMA1_S5M1AR.B11;
    sbit  M1A12_DMA1_S5M1AR_bit at DMA1_S5M1AR.B12;
    sbit  M1A13_DMA1_S5M1AR_bit at DMA1_S5M1AR.B13;
    sbit  M1A14_DMA1_S5M1AR_bit at DMA1_S5M1AR.B14;
    sbit  M1A15_DMA1_S5M1AR_bit at DMA1_S5M1AR.B15;
    sbit  M1A16_DMA1_S5M1AR_bit at DMA1_S5M1AR.B16;
    sbit  M1A17_DMA1_S5M1AR_bit at DMA1_S5M1AR.B17;
    sbit  M1A18_DMA1_S5M1AR_bit at DMA1_S5M1AR.B18;
    sbit  M1A19_DMA1_S5M1AR_bit at DMA1_S5M1AR.B19;
    sbit  M1A20_DMA1_S5M1AR_bit at DMA1_S5M1AR.B20;
    sbit  M1A21_DMA1_S5M1AR_bit at DMA1_S5M1AR.B21;
    sbit  M1A22_DMA1_S5M1AR_bit at DMA1_S5M1AR.B22;
    sbit  M1A23_DMA1_S5M1AR_bit at DMA1_S5M1AR.B23;
    sbit  M1A24_DMA1_S5M1AR_bit at DMA1_S5M1AR.B24;
    sbit  M1A25_DMA1_S5M1AR_bit at DMA1_S5M1AR.B25;
    sbit  M1A26_DMA1_S5M1AR_bit at DMA1_S5M1AR.B26;
    sbit  M1A27_DMA1_S5M1AR_bit at DMA1_S5M1AR.B27;
    sbit  M1A28_DMA1_S5M1AR_bit at DMA1_S5M1AR.B28;
    sbit  M1A29_DMA1_S5M1AR_bit at DMA1_S5M1AR.B29;
    sbit  M1A30_DMA1_S5M1AR_bit at DMA1_S5M1AR.B30;
    sbit  M1A31_DMA1_S5M1AR_bit at DMA1_S5M1AR.B31;

sfr unsigned long   volatile DMA1_S5FCR           absolute 0x4002609C;
    sbit  FEIE_DMA1_S5FCR_bit at DMA1_S5FCR.B7;
    sbit  FS0_DMA1_S5FCR_bit at DMA1_S5FCR.B3;
    sbit  FS1_DMA1_S5FCR_bit at DMA1_S5FCR.B4;
    sbit  FS2_DMA1_S5FCR_bit at DMA1_S5FCR.B5;
    sbit  DMDIS_DMA1_S5FCR_bit at DMA1_S5FCR.B2;
    sbit  FTH0_DMA1_S5FCR_bit at DMA1_S5FCR.B0;
    sbit  FTH1_DMA1_S5FCR_bit at DMA1_S5FCR.B1;

sfr unsigned long   volatile DMA1_S6CR            absolute 0x400260A0;
    sbit  CHSEL0_DMA1_S6CR_bit at DMA1_S6CR.B25;
    sbit  CHSEL1_DMA1_S6CR_bit at DMA1_S6CR.B26;
    sbit  CHSEL2_DMA1_S6CR_bit at DMA1_S6CR.B27;
    sbit  MBURST0_DMA1_S6CR_bit at DMA1_S6CR.B23;
    sbit  MBURST1_DMA1_S6CR_bit at DMA1_S6CR.B24;
    sbit  PBURST0_DMA1_S6CR_bit at DMA1_S6CR.B21;
    sbit  PBURST1_DMA1_S6CR_bit at DMA1_S6CR.B22;
    sbit  ACK_DMA1_S6CR_bit at DMA1_S6CR.B20;
    sbit  CT_DMA1_S6CR_bit at DMA1_S6CR.B19;
    sbit  DBM_DMA1_S6CR_bit at DMA1_S6CR.B18;
    sbit  PL0_DMA1_S6CR_bit at DMA1_S6CR.B16;
    sbit  PL1_DMA1_S6CR_bit at DMA1_S6CR.B17;
    sbit  PINCOS_DMA1_S6CR_bit at DMA1_S6CR.B15;
    sbit  MSIZE0_DMA1_S6CR_bit at DMA1_S6CR.B13;
    sbit  MSIZE1_DMA1_S6CR_bit at DMA1_S6CR.B14;
    sbit  PSIZE0_DMA1_S6CR_bit at DMA1_S6CR.B11;
    sbit  PSIZE1_DMA1_S6CR_bit at DMA1_S6CR.B12;
    sbit  MINC_DMA1_S6CR_bit at DMA1_S6CR.B10;
    sbit  PINC_DMA1_S6CR_bit at DMA1_S6CR.B9;
    sbit  CIRC_DMA1_S6CR_bit at DMA1_S6CR.B8;
    sbit  DIR0_DMA1_S6CR_bit at DMA1_S6CR.B6;
    sbit  DIR1_DMA1_S6CR_bit at DMA1_S6CR.B7;
    sbit  PFCTRL_DMA1_S6CR_bit at DMA1_S6CR.B5;
    sbit  TCIE_DMA1_S6CR_bit at DMA1_S6CR.B4;
    sbit  HTIE_DMA1_S6CR_bit at DMA1_S6CR.B3;
    sbit  TEIE_DMA1_S6CR_bit at DMA1_S6CR.B2;
    sbit  DMEIE_DMA1_S6CR_bit at DMA1_S6CR.B1;
    sbit  EN_DMA1_S6CR_bit at DMA1_S6CR.B0;

sfr unsigned long   volatile DMA1_S6NDTR          absolute 0x400260A4;
    sbit  NDT0_DMA1_S6NDTR_bit at DMA1_S6NDTR.B0;
    sbit  NDT1_DMA1_S6NDTR_bit at DMA1_S6NDTR.B1;
    sbit  NDT2_DMA1_S6NDTR_bit at DMA1_S6NDTR.B2;
    sbit  NDT3_DMA1_S6NDTR_bit at DMA1_S6NDTR.B3;
    sbit  NDT4_DMA1_S6NDTR_bit at DMA1_S6NDTR.B4;
    sbit  NDT5_DMA1_S6NDTR_bit at DMA1_S6NDTR.B5;
    sbit  NDT6_DMA1_S6NDTR_bit at DMA1_S6NDTR.B6;
    sbit  NDT7_DMA1_S6NDTR_bit at DMA1_S6NDTR.B7;
    sbit  NDT8_DMA1_S6NDTR_bit at DMA1_S6NDTR.B8;
    sbit  NDT9_DMA1_S6NDTR_bit at DMA1_S6NDTR.B9;
    sbit  NDT10_DMA1_S6NDTR_bit at DMA1_S6NDTR.B10;
    sbit  NDT11_DMA1_S6NDTR_bit at DMA1_S6NDTR.B11;
    sbit  NDT12_DMA1_S6NDTR_bit at DMA1_S6NDTR.B12;
    sbit  NDT13_DMA1_S6NDTR_bit at DMA1_S6NDTR.B13;
    sbit  NDT14_DMA1_S6NDTR_bit at DMA1_S6NDTR.B14;
    sbit  NDT15_DMA1_S6NDTR_bit at DMA1_S6NDTR.B15;

sfr unsigned long   volatile DMA1_S6PAR           absolute 0x400260A8;
    sbit  PA0_DMA1_S6PAR_bit at DMA1_S6PAR.B0;
    sbit  PA1_DMA1_S6PAR_bit at DMA1_S6PAR.B1;
    sbit  PA2_DMA1_S6PAR_bit at DMA1_S6PAR.B2;
    sbit  PA3_DMA1_S6PAR_bit at DMA1_S6PAR.B3;
    sbit  PA4_DMA1_S6PAR_bit at DMA1_S6PAR.B4;
    sbit  PA5_DMA1_S6PAR_bit at DMA1_S6PAR.B5;
    sbit  PA6_DMA1_S6PAR_bit at DMA1_S6PAR.B6;
    sbit  PA7_DMA1_S6PAR_bit at DMA1_S6PAR.B7;
    sbit  PA8_DMA1_S6PAR_bit at DMA1_S6PAR.B8;
    sbit  PA9_DMA1_S6PAR_bit at DMA1_S6PAR.B9;
    sbit  PA10_DMA1_S6PAR_bit at DMA1_S6PAR.B10;
    sbit  PA11_DMA1_S6PAR_bit at DMA1_S6PAR.B11;
    sbit  PA12_DMA1_S6PAR_bit at DMA1_S6PAR.B12;
    sbit  PA13_DMA1_S6PAR_bit at DMA1_S6PAR.B13;
    sbit  PA14_DMA1_S6PAR_bit at DMA1_S6PAR.B14;
    sbit  PA15_DMA1_S6PAR_bit at DMA1_S6PAR.B15;
    sbit  PA16_DMA1_S6PAR_bit at DMA1_S6PAR.B16;
    sbit  PA17_DMA1_S6PAR_bit at DMA1_S6PAR.B17;
    sbit  PA18_DMA1_S6PAR_bit at DMA1_S6PAR.B18;
    sbit  PA19_DMA1_S6PAR_bit at DMA1_S6PAR.B19;
    sbit  PA20_DMA1_S6PAR_bit at DMA1_S6PAR.B20;
    sbit  PA21_DMA1_S6PAR_bit at DMA1_S6PAR.B21;
    sbit  PA22_DMA1_S6PAR_bit at DMA1_S6PAR.B22;
    sbit  PA23_DMA1_S6PAR_bit at DMA1_S6PAR.B23;
    sbit  PA24_DMA1_S6PAR_bit at DMA1_S6PAR.B24;
    sbit  PA25_DMA1_S6PAR_bit at DMA1_S6PAR.B25;
    sbit  PA26_DMA1_S6PAR_bit at DMA1_S6PAR.B26;
    sbit  PA27_DMA1_S6PAR_bit at DMA1_S6PAR.B27;
    sbit  PA28_DMA1_S6PAR_bit at DMA1_S6PAR.B28;
    sbit  PA29_DMA1_S6PAR_bit at DMA1_S6PAR.B29;
    sbit  PA30_DMA1_S6PAR_bit at DMA1_S6PAR.B30;
    sbit  PA31_DMA1_S6PAR_bit at DMA1_S6PAR.B31;

sfr unsigned long   volatile DMA1_S6M0AR          absolute 0x400260AC;
    sbit  M0A0_DMA1_S6M0AR_bit at DMA1_S6M0AR.B0;
    sbit  M0A1_DMA1_S6M0AR_bit at DMA1_S6M0AR.B1;
    sbit  M0A2_DMA1_S6M0AR_bit at DMA1_S6M0AR.B2;
    sbit  M0A3_DMA1_S6M0AR_bit at DMA1_S6M0AR.B3;
    sbit  M0A4_DMA1_S6M0AR_bit at DMA1_S6M0AR.B4;
    sbit  M0A5_DMA1_S6M0AR_bit at DMA1_S6M0AR.B5;
    sbit  M0A6_DMA1_S6M0AR_bit at DMA1_S6M0AR.B6;
    sbit  M0A7_DMA1_S6M0AR_bit at DMA1_S6M0AR.B7;
    sbit  M0A8_DMA1_S6M0AR_bit at DMA1_S6M0AR.B8;
    sbit  M0A9_DMA1_S6M0AR_bit at DMA1_S6M0AR.B9;
    sbit  M0A10_DMA1_S6M0AR_bit at DMA1_S6M0AR.B10;
    sbit  M0A11_DMA1_S6M0AR_bit at DMA1_S6M0AR.B11;
    sbit  M0A12_DMA1_S6M0AR_bit at DMA1_S6M0AR.B12;
    sbit  M0A13_DMA1_S6M0AR_bit at DMA1_S6M0AR.B13;
    sbit  M0A14_DMA1_S6M0AR_bit at DMA1_S6M0AR.B14;
    sbit  M0A15_DMA1_S6M0AR_bit at DMA1_S6M0AR.B15;
    sbit  M0A16_DMA1_S6M0AR_bit at DMA1_S6M0AR.B16;
    sbit  M0A17_DMA1_S6M0AR_bit at DMA1_S6M0AR.B17;
    sbit  M0A18_DMA1_S6M0AR_bit at DMA1_S6M0AR.B18;
    sbit  M0A19_DMA1_S6M0AR_bit at DMA1_S6M0AR.B19;
    sbit  M0A20_DMA1_S6M0AR_bit at DMA1_S6M0AR.B20;
    sbit  M0A21_DMA1_S6M0AR_bit at DMA1_S6M0AR.B21;
    sbit  M0A22_DMA1_S6M0AR_bit at DMA1_S6M0AR.B22;
    sbit  M0A23_DMA1_S6M0AR_bit at DMA1_S6M0AR.B23;
    sbit  M0A24_DMA1_S6M0AR_bit at DMA1_S6M0AR.B24;
    sbit  M0A25_DMA1_S6M0AR_bit at DMA1_S6M0AR.B25;
    sbit  M0A26_DMA1_S6M0AR_bit at DMA1_S6M0AR.B26;
    sbit  M0A27_DMA1_S6M0AR_bit at DMA1_S6M0AR.B27;
    sbit  M0A28_DMA1_S6M0AR_bit at DMA1_S6M0AR.B28;
    sbit  M0A29_DMA1_S6M0AR_bit at DMA1_S6M0AR.B29;
    sbit  M0A30_DMA1_S6M0AR_bit at DMA1_S6M0AR.B30;
    sbit  M0A31_DMA1_S6M0AR_bit at DMA1_S6M0AR.B31;

sfr unsigned long   volatile DMA1_S6M1AR          absolute 0x400260B0;
    sbit  M1A0_DMA1_S6M1AR_bit at DMA1_S6M1AR.B0;
    sbit  M1A1_DMA1_S6M1AR_bit at DMA1_S6M1AR.B1;
    sbit  M1A2_DMA1_S6M1AR_bit at DMA1_S6M1AR.B2;
    sbit  M1A3_DMA1_S6M1AR_bit at DMA1_S6M1AR.B3;
    sbit  M1A4_DMA1_S6M1AR_bit at DMA1_S6M1AR.B4;
    sbit  M1A5_DMA1_S6M1AR_bit at DMA1_S6M1AR.B5;
    sbit  M1A6_DMA1_S6M1AR_bit at DMA1_S6M1AR.B6;
    sbit  M1A7_DMA1_S6M1AR_bit at DMA1_S6M1AR.B7;
    sbit  M1A8_DMA1_S6M1AR_bit at DMA1_S6M1AR.B8;
    sbit  M1A9_DMA1_S6M1AR_bit at DMA1_S6M1AR.B9;
    sbit  M1A10_DMA1_S6M1AR_bit at DMA1_S6M1AR.B10;
    sbit  M1A11_DMA1_S6M1AR_bit at DMA1_S6M1AR.B11;
    sbit  M1A12_DMA1_S6M1AR_bit at DMA1_S6M1AR.B12;
    sbit  M1A13_DMA1_S6M1AR_bit at DMA1_S6M1AR.B13;
    sbit  M1A14_DMA1_S6M1AR_bit at DMA1_S6M1AR.B14;
    sbit  M1A15_DMA1_S6M1AR_bit at DMA1_S6M1AR.B15;
    sbit  M1A16_DMA1_S6M1AR_bit at DMA1_S6M1AR.B16;
    sbit  M1A17_DMA1_S6M1AR_bit at DMA1_S6M1AR.B17;
    sbit  M1A18_DMA1_S6M1AR_bit at DMA1_S6M1AR.B18;
    sbit  M1A19_DMA1_S6M1AR_bit at DMA1_S6M1AR.B19;
    sbit  M1A20_DMA1_S6M1AR_bit at DMA1_S6M1AR.B20;
    sbit  M1A21_DMA1_S6M1AR_bit at DMA1_S6M1AR.B21;
    sbit  M1A22_DMA1_S6M1AR_bit at DMA1_S6M1AR.B22;
    sbit  M1A23_DMA1_S6M1AR_bit at DMA1_S6M1AR.B23;
    sbit  M1A24_DMA1_S6M1AR_bit at DMA1_S6M1AR.B24;
    sbit  M1A25_DMA1_S6M1AR_bit at DMA1_S6M1AR.B25;
    sbit  M1A26_DMA1_S6M1AR_bit at DMA1_S6M1AR.B26;
    sbit  M1A27_DMA1_S6M1AR_bit at DMA1_S6M1AR.B27;
    sbit  M1A28_DMA1_S6M1AR_bit at DMA1_S6M1AR.B28;
    sbit  M1A29_DMA1_S6M1AR_bit at DMA1_S6M1AR.B29;
    sbit  M1A30_DMA1_S6M1AR_bit at DMA1_S6M1AR.B30;
    sbit  M1A31_DMA1_S6M1AR_bit at DMA1_S6M1AR.B31;

sfr unsigned long   volatile DMA1_S6FCR           absolute 0x400260B4;
    sbit  FEIE_DMA1_S6FCR_bit at DMA1_S6FCR.B7;
    sbit  FS0_DMA1_S6FCR_bit at DMA1_S6FCR.B3;
    sbit  FS1_DMA1_S6FCR_bit at DMA1_S6FCR.B4;
    sbit  FS2_DMA1_S6FCR_bit at DMA1_S6FCR.B5;
    sbit  DMDIS_DMA1_S6FCR_bit at DMA1_S6FCR.B2;
    sbit  FTH0_DMA1_S6FCR_bit at DMA1_S6FCR.B0;
    sbit  FTH1_DMA1_S6FCR_bit at DMA1_S6FCR.B1;

sfr unsigned long   volatile DMA1_S7CR            absolute 0x400260B8;
    sbit  CHSEL0_DMA1_S7CR_bit at DMA1_S7CR.B25;
    sbit  CHSEL1_DMA1_S7CR_bit at DMA1_S7CR.B26;
    sbit  CHSEL2_DMA1_S7CR_bit at DMA1_S7CR.B27;
    sbit  MBURST0_DMA1_S7CR_bit at DMA1_S7CR.B23;
    sbit  MBURST1_DMA1_S7CR_bit at DMA1_S7CR.B24;
    sbit  PBURST0_DMA1_S7CR_bit at DMA1_S7CR.B21;
    sbit  PBURST1_DMA1_S7CR_bit at DMA1_S7CR.B22;
    sbit  ACK_DMA1_S7CR_bit at DMA1_S7CR.B20;
    sbit  CT_DMA1_S7CR_bit at DMA1_S7CR.B19;
    sbit  DBM_DMA1_S7CR_bit at DMA1_S7CR.B18;
    sbit  PL0_DMA1_S7CR_bit at DMA1_S7CR.B16;
    sbit  PL1_DMA1_S7CR_bit at DMA1_S7CR.B17;
    sbit  PINCOS_DMA1_S7CR_bit at DMA1_S7CR.B15;
    sbit  MSIZE0_DMA1_S7CR_bit at DMA1_S7CR.B13;
    sbit  MSIZE1_DMA1_S7CR_bit at DMA1_S7CR.B14;
    sbit  PSIZE0_DMA1_S7CR_bit at DMA1_S7CR.B11;
    sbit  PSIZE1_DMA1_S7CR_bit at DMA1_S7CR.B12;
    sbit  MINC_DMA1_S7CR_bit at DMA1_S7CR.B10;
    sbit  PINC_DMA1_S7CR_bit at DMA1_S7CR.B9;
    sbit  CIRC_DMA1_S7CR_bit at DMA1_S7CR.B8;
    sbit  DIR0_DMA1_S7CR_bit at DMA1_S7CR.B6;
    sbit  DIR1_DMA1_S7CR_bit at DMA1_S7CR.B7;
    sbit  PFCTRL_DMA1_S7CR_bit at DMA1_S7CR.B5;
    sbit  TCIE_DMA1_S7CR_bit at DMA1_S7CR.B4;
    sbit  HTIE_DMA1_S7CR_bit at DMA1_S7CR.B3;
    sbit  TEIE_DMA1_S7CR_bit at DMA1_S7CR.B2;
    sbit  DMEIE_DMA1_S7CR_bit at DMA1_S7CR.B1;
    sbit  EN_DMA1_S7CR_bit at DMA1_S7CR.B0;

sfr unsigned long   volatile DMA1_S7NDTR          absolute 0x400260BC;
    sbit  NDT0_DMA1_S7NDTR_bit at DMA1_S7NDTR.B0;
    sbit  NDT1_DMA1_S7NDTR_bit at DMA1_S7NDTR.B1;
    sbit  NDT2_DMA1_S7NDTR_bit at DMA1_S7NDTR.B2;
    sbit  NDT3_DMA1_S7NDTR_bit at DMA1_S7NDTR.B3;
    sbit  NDT4_DMA1_S7NDTR_bit at DMA1_S7NDTR.B4;
    sbit  NDT5_DMA1_S7NDTR_bit at DMA1_S7NDTR.B5;
    sbit  NDT6_DMA1_S7NDTR_bit at DMA1_S7NDTR.B6;
    sbit  NDT7_DMA1_S7NDTR_bit at DMA1_S7NDTR.B7;
    sbit  NDT8_DMA1_S7NDTR_bit at DMA1_S7NDTR.B8;
    sbit  NDT9_DMA1_S7NDTR_bit at DMA1_S7NDTR.B9;
    sbit  NDT10_DMA1_S7NDTR_bit at DMA1_S7NDTR.B10;
    sbit  NDT11_DMA1_S7NDTR_bit at DMA1_S7NDTR.B11;
    sbit  NDT12_DMA1_S7NDTR_bit at DMA1_S7NDTR.B12;
    sbit  NDT13_DMA1_S7NDTR_bit at DMA1_S7NDTR.B13;
    sbit  NDT14_DMA1_S7NDTR_bit at DMA1_S7NDTR.B14;
    sbit  NDT15_DMA1_S7NDTR_bit at DMA1_S7NDTR.B15;

sfr unsigned long   volatile DMA1_S7PAR           absolute 0x400260C0;
    sbit  PA0_DMA1_S7PAR_bit at DMA1_S7PAR.B0;
    sbit  PA1_DMA1_S7PAR_bit at DMA1_S7PAR.B1;
    sbit  PA2_DMA1_S7PAR_bit at DMA1_S7PAR.B2;
    sbit  PA3_DMA1_S7PAR_bit at DMA1_S7PAR.B3;
    sbit  PA4_DMA1_S7PAR_bit at DMA1_S7PAR.B4;
    sbit  PA5_DMA1_S7PAR_bit at DMA1_S7PAR.B5;
    sbit  PA6_DMA1_S7PAR_bit at DMA1_S7PAR.B6;
    sbit  PA7_DMA1_S7PAR_bit at DMA1_S7PAR.B7;
    sbit  PA8_DMA1_S7PAR_bit at DMA1_S7PAR.B8;
    sbit  PA9_DMA1_S7PAR_bit at DMA1_S7PAR.B9;
    sbit  PA10_DMA1_S7PAR_bit at DMA1_S7PAR.B10;
    sbit  PA11_DMA1_S7PAR_bit at DMA1_S7PAR.B11;
    sbit  PA12_DMA1_S7PAR_bit at DMA1_S7PAR.B12;
    sbit  PA13_DMA1_S7PAR_bit at DMA1_S7PAR.B13;
    sbit  PA14_DMA1_S7PAR_bit at DMA1_S7PAR.B14;
    sbit  PA15_DMA1_S7PAR_bit at DMA1_S7PAR.B15;
    sbit  PA16_DMA1_S7PAR_bit at DMA1_S7PAR.B16;
    sbit  PA17_DMA1_S7PAR_bit at DMA1_S7PAR.B17;
    sbit  PA18_DMA1_S7PAR_bit at DMA1_S7PAR.B18;
    sbit  PA19_DMA1_S7PAR_bit at DMA1_S7PAR.B19;
    sbit  PA20_DMA1_S7PAR_bit at DMA1_S7PAR.B20;
    sbit  PA21_DMA1_S7PAR_bit at DMA1_S7PAR.B21;
    sbit  PA22_DMA1_S7PAR_bit at DMA1_S7PAR.B22;
    sbit  PA23_DMA1_S7PAR_bit at DMA1_S7PAR.B23;
    sbit  PA24_DMA1_S7PAR_bit at DMA1_S7PAR.B24;
    sbit  PA25_DMA1_S7PAR_bit at DMA1_S7PAR.B25;
    sbit  PA26_DMA1_S7PAR_bit at DMA1_S7PAR.B26;
    sbit  PA27_DMA1_S7PAR_bit at DMA1_S7PAR.B27;
    sbit  PA28_DMA1_S7PAR_bit at DMA1_S7PAR.B28;
    sbit  PA29_DMA1_S7PAR_bit at DMA1_S7PAR.B29;
    sbit  PA30_DMA1_S7PAR_bit at DMA1_S7PAR.B30;
    sbit  PA31_DMA1_S7PAR_bit at DMA1_S7PAR.B31;

sfr unsigned long   volatile DMA1_S7M0AR          absolute 0x400260C4;
    sbit  M0A0_DMA1_S7M0AR_bit at DMA1_S7M0AR.B0;
    sbit  M0A1_DMA1_S7M0AR_bit at DMA1_S7M0AR.B1;
    sbit  M0A2_DMA1_S7M0AR_bit at DMA1_S7M0AR.B2;
    sbit  M0A3_DMA1_S7M0AR_bit at DMA1_S7M0AR.B3;
    sbit  M0A4_DMA1_S7M0AR_bit at DMA1_S7M0AR.B4;
    sbit  M0A5_DMA1_S7M0AR_bit at DMA1_S7M0AR.B5;
    sbit  M0A6_DMA1_S7M0AR_bit at DMA1_S7M0AR.B6;
    sbit  M0A7_DMA1_S7M0AR_bit at DMA1_S7M0AR.B7;
    sbit  M0A8_DMA1_S7M0AR_bit at DMA1_S7M0AR.B8;
    sbit  M0A9_DMA1_S7M0AR_bit at DMA1_S7M0AR.B9;
    sbit  M0A10_DMA1_S7M0AR_bit at DMA1_S7M0AR.B10;
    sbit  M0A11_DMA1_S7M0AR_bit at DMA1_S7M0AR.B11;
    sbit  M0A12_DMA1_S7M0AR_bit at DMA1_S7M0AR.B12;
    sbit  M0A13_DMA1_S7M0AR_bit at DMA1_S7M0AR.B13;
    sbit  M0A14_DMA1_S7M0AR_bit at DMA1_S7M0AR.B14;
    sbit  M0A15_DMA1_S7M0AR_bit at DMA1_S7M0AR.B15;
    sbit  M0A16_DMA1_S7M0AR_bit at DMA1_S7M0AR.B16;
    sbit  M0A17_DMA1_S7M0AR_bit at DMA1_S7M0AR.B17;
    sbit  M0A18_DMA1_S7M0AR_bit at DMA1_S7M0AR.B18;
    sbit  M0A19_DMA1_S7M0AR_bit at DMA1_S7M0AR.B19;
    sbit  M0A20_DMA1_S7M0AR_bit at DMA1_S7M0AR.B20;
    sbit  M0A21_DMA1_S7M0AR_bit at DMA1_S7M0AR.B21;
    sbit  M0A22_DMA1_S7M0AR_bit at DMA1_S7M0AR.B22;
    sbit  M0A23_DMA1_S7M0AR_bit at DMA1_S7M0AR.B23;
    sbit  M0A24_DMA1_S7M0AR_bit at DMA1_S7M0AR.B24;
    sbit  M0A25_DMA1_S7M0AR_bit at DMA1_S7M0AR.B25;
    sbit  M0A26_DMA1_S7M0AR_bit at DMA1_S7M0AR.B26;
    sbit  M0A27_DMA1_S7M0AR_bit at DMA1_S7M0AR.B27;
    sbit  M0A28_DMA1_S7M0AR_bit at DMA1_S7M0AR.B28;
    sbit  M0A29_DMA1_S7M0AR_bit at DMA1_S7M0AR.B29;
    sbit  M0A30_DMA1_S7M0AR_bit at DMA1_S7M0AR.B30;
    sbit  M0A31_DMA1_S7M0AR_bit at DMA1_S7M0AR.B31;

sfr unsigned long   volatile DMA1_S7M1AR          absolute 0x400260C8;
    sbit  M1A0_DMA1_S7M1AR_bit at DMA1_S7M1AR.B0;
    sbit  M1A1_DMA1_S7M1AR_bit at DMA1_S7M1AR.B1;
    sbit  M1A2_DMA1_S7M1AR_bit at DMA1_S7M1AR.B2;
    sbit  M1A3_DMA1_S7M1AR_bit at DMA1_S7M1AR.B3;
    sbit  M1A4_DMA1_S7M1AR_bit at DMA1_S7M1AR.B4;
    sbit  M1A5_DMA1_S7M1AR_bit at DMA1_S7M1AR.B5;
    sbit  M1A6_DMA1_S7M1AR_bit at DMA1_S7M1AR.B6;
    sbit  M1A7_DMA1_S7M1AR_bit at DMA1_S7M1AR.B7;
    sbit  M1A8_DMA1_S7M1AR_bit at DMA1_S7M1AR.B8;
    sbit  M1A9_DMA1_S7M1AR_bit at DMA1_S7M1AR.B9;
    sbit  M1A10_DMA1_S7M1AR_bit at DMA1_S7M1AR.B10;
    sbit  M1A11_DMA1_S7M1AR_bit at DMA1_S7M1AR.B11;
    sbit  M1A12_DMA1_S7M1AR_bit at DMA1_S7M1AR.B12;
    sbit  M1A13_DMA1_S7M1AR_bit at DMA1_S7M1AR.B13;
    sbit  M1A14_DMA1_S7M1AR_bit at DMA1_S7M1AR.B14;
    sbit  M1A15_DMA1_S7M1AR_bit at DMA1_S7M1AR.B15;
    sbit  M1A16_DMA1_S7M1AR_bit at DMA1_S7M1AR.B16;
    sbit  M1A17_DMA1_S7M1AR_bit at DMA1_S7M1AR.B17;
    sbit  M1A18_DMA1_S7M1AR_bit at DMA1_S7M1AR.B18;
    sbit  M1A19_DMA1_S7M1AR_bit at DMA1_S7M1AR.B19;
    sbit  M1A20_DMA1_S7M1AR_bit at DMA1_S7M1AR.B20;
    sbit  M1A21_DMA1_S7M1AR_bit at DMA1_S7M1AR.B21;
    sbit  M1A22_DMA1_S7M1AR_bit at DMA1_S7M1AR.B22;
    sbit  M1A23_DMA1_S7M1AR_bit at DMA1_S7M1AR.B23;
    sbit  M1A24_DMA1_S7M1AR_bit at DMA1_S7M1AR.B24;
    sbit  M1A25_DMA1_S7M1AR_bit at DMA1_S7M1AR.B25;
    sbit  M1A26_DMA1_S7M1AR_bit at DMA1_S7M1AR.B26;
    sbit  M1A27_DMA1_S7M1AR_bit at DMA1_S7M1AR.B27;
    sbit  M1A28_DMA1_S7M1AR_bit at DMA1_S7M1AR.B28;
    sbit  M1A29_DMA1_S7M1AR_bit at DMA1_S7M1AR.B29;
    sbit  M1A30_DMA1_S7M1AR_bit at DMA1_S7M1AR.B30;
    sbit  M1A31_DMA1_S7M1AR_bit at DMA1_S7M1AR.B31;

sfr unsigned long   volatile DMA1_S7FCR           absolute 0x400260CC;
    sbit  FEIE_DMA1_S7FCR_bit at DMA1_S7FCR.B7;
    sbit  FS0_DMA1_S7FCR_bit at DMA1_S7FCR.B3;
    sbit  FS1_DMA1_S7FCR_bit at DMA1_S7FCR.B4;
    sbit  FS2_DMA1_S7FCR_bit at DMA1_S7FCR.B5;
    sbit  DMDIS_DMA1_S7FCR_bit at DMA1_S7FCR.B2;
    sbit  FTH0_DMA1_S7FCR_bit at DMA1_S7FCR.B0;
    sbit  FTH1_DMA1_S7FCR_bit at DMA1_S7FCR.B1;

sfr unsigned long   volatile GPIOH_BASE           absolute 0x40021C00;
sfr unsigned long   volatile GPIOH_MODER          absolute 0x40021C00;
    const register unsigned short int MODER150 = 30;
    sbit  MODER150_bit at GPIOH_MODER.B30;
    const register unsigned short int MODER151 = 31;
    sbit  MODER151_bit at GPIOH_MODER.B31;
    const register unsigned short int MODER140 = 28;
    sbit  MODER140_bit at GPIOH_MODER.B28;
    const register unsigned short int MODER141 = 29;
    sbit  MODER141_bit at GPIOH_MODER.B29;
    const register unsigned short int MODER130 = 26;
    sbit  MODER130_bit at GPIOH_MODER.B26;
    const register unsigned short int MODER131 = 27;
    sbit  MODER131_bit at GPIOH_MODER.B27;
    const register unsigned short int MODER120 = 24;
    sbit  MODER120_bit at GPIOH_MODER.B24;
    const register unsigned short int MODER121 = 25;
    sbit  MODER121_bit at GPIOH_MODER.B25;
    const register unsigned short int MODER110 = 22;
    sbit  MODER110_bit at GPIOH_MODER.B22;
    const register unsigned short int MODER111 = 23;
    sbit  MODER111_bit at GPIOH_MODER.B23;
    const register unsigned short int MODER100 = 20;
    sbit  MODER100_bit at GPIOH_MODER.B20;
    const register unsigned short int MODER101 = 21;
    sbit  MODER101_bit at GPIOH_MODER.B21;
    const register unsigned short int MODER90 = 18;
    sbit  MODER90_bit at GPIOH_MODER.B18;
    const register unsigned short int MODER91 = 19;
    sbit  MODER91_bit at GPIOH_MODER.B19;
    const register unsigned short int MODER80 = 16;
    sbit  MODER80_bit at GPIOH_MODER.B16;
    const register unsigned short int MODER81 = 17;
    sbit  MODER81_bit at GPIOH_MODER.B17;
    const register unsigned short int MODER70 = 14;
    sbit  MODER70_bit at GPIOH_MODER.B14;
    const register unsigned short int MODER71 = 15;
    sbit  MODER71_bit at GPIOH_MODER.B15;
    const register unsigned short int MODER60 = 12;
    sbit  MODER60_bit at GPIOH_MODER.B12;
    const register unsigned short int MODER61 = 13;
    sbit  MODER61_bit at GPIOH_MODER.B13;
    const register unsigned short int MODER50 = 10;
    sbit  MODER50_bit at GPIOH_MODER.B10;
    const register unsigned short int MODER51 = 11;
    sbit  MODER51_bit at GPIOH_MODER.B11;
    const register unsigned short int MODER40 = 8;
    sbit  MODER40_bit at GPIOH_MODER.B8;
    const register unsigned short int MODER41 = 9;
    sbit  MODER41_bit at GPIOH_MODER.B9;
    const register unsigned short int MODER30 = 6;
    sbit  MODER30_bit at GPIOH_MODER.B6;
    const register unsigned short int MODER31 = 7;
    sbit  MODER31_bit at GPIOH_MODER.B7;
    const register unsigned short int MODER20 = 4;
    sbit  MODER20_bit at GPIOH_MODER.B4;
    const register unsigned short int MODER21 = 5;
    sbit  MODER21_bit at GPIOH_MODER.B5;
    const register unsigned short int MODER10 = 2;
    sbit  MODER10_bit at GPIOH_MODER.B2;
    const register unsigned short int MODER11 = 3;
    sbit  MODER11_bit at GPIOH_MODER.B3;
    const register unsigned short int MODER00 = 0;
    sbit  MODER00_bit at GPIOH_MODER.B0;
    const register unsigned short int MODER01 = 1;
    sbit  MODER01_bit at GPIOH_MODER.B1;

sfr unsigned long   volatile GPIOH_OTYPER         absolute 0x40021C04;
    const register unsigned short int OT15 = 15;
    sbit  OT15_bit at GPIOH_OTYPER.B15;
    const register unsigned short int OT14 = 14;
    sbit  OT14_bit at GPIOH_OTYPER.B14;
    const register unsigned short int OT13 = 13;
    sbit  OT13_bit at GPIOH_OTYPER.B13;
    const register unsigned short int OT12 = 12;
    sbit  OT12_bit at GPIOH_OTYPER.B12;
    const register unsigned short int OT11 = 11;
    sbit  OT11_bit at GPIOH_OTYPER.B11;
    const register unsigned short int OT10 = 10;
    sbit  OT10_bit at GPIOH_OTYPER.B10;
    const register unsigned short int OT9 = 9;
    sbit  OT9_bit at GPIOH_OTYPER.B9;
    const register unsigned short int OT8 = 8;
    sbit  OT8_bit at GPIOH_OTYPER.B8;
    const register unsigned short int OT7 = 7;
    sbit  OT7_bit at GPIOH_OTYPER.B7;
    const register unsigned short int OT6 = 6;
    sbit  OT6_bit at GPIOH_OTYPER.B6;
    const register unsigned short int OT5 = 5;
    sbit  OT5_bit at GPIOH_OTYPER.B5;
    const register unsigned short int OT4 = 4;
    sbit  OT4_bit at GPIOH_OTYPER.B4;
    const register unsigned short int OT3 = 3;
    sbit  OT3_bit at GPIOH_OTYPER.B3;
    const register unsigned short int OT2 = 2;
    sbit  OT2_bit at GPIOH_OTYPER.B2;
    const register unsigned short int OT1 = 1;
    sbit  OT1_bit at GPIOH_OTYPER.B1;
    const register unsigned short int OT0 = 0;
    sbit  OT0_bit at GPIOH_OTYPER.B0;

sfr unsigned long   volatile GPIOH_OSPEEDR        absolute 0x40021C08;
    const register unsigned short int OSPEEDR150 = 30;
    sbit  OSPEEDR150_bit at GPIOH_OSPEEDR.B30;
    const register unsigned short int OSPEEDR151 = 31;
    sbit  OSPEEDR151_bit at GPIOH_OSPEEDR.B31;
    const register unsigned short int OSPEEDR140 = 28;
    sbit  OSPEEDR140_bit at GPIOH_OSPEEDR.B28;
    const register unsigned short int OSPEEDR141 = 29;
    sbit  OSPEEDR141_bit at GPIOH_OSPEEDR.B29;
    const register unsigned short int OSPEEDR130 = 26;
    sbit  OSPEEDR130_bit at GPIOH_OSPEEDR.B26;
    const register unsigned short int OSPEEDR131 = 27;
    sbit  OSPEEDR131_bit at GPIOH_OSPEEDR.B27;
    const register unsigned short int OSPEEDR120 = 24;
    sbit  OSPEEDR120_bit at GPIOH_OSPEEDR.B24;
    const register unsigned short int OSPEEDR121 = 25;
    sbit  OSPEEDR121_bit at GPIOH_OSPEEDR.B25;
    const register unsigned short int OSPEEDR110 = 22;
    sbit  OSPEEDR110_bit at GPIOH_OSPEEDR.B22;
    const register unsigned short int OSPEEDR111 = 23;
    sbit  OSPEEDR111_bit at GPIOH_OSPEEDR.B23;
    const register unsigned short int OSPEEDR100 = 20;
    sbit  OSPEEDR100_bit at GPIOH_OSPEEDR.B20;
    const register unsigned short int OSPEEDR101 = 21;
    sbit  OSPEEDR101_bit at GPIOH_OSPEEDR.B21;
    const register unsigned short int OSPEEDR90 = 18;
    sbit  OSPEEDR90_bit at GPIOH_OSPEEDR.B18;
    const register unsigned short int OSPEEDR91 = 19;
    sbit  OSPEEDR91_bit at GPIOH_OSPEEDR.B19;
    const register unsigned short int OSPEEDR80 = 16;
    sbit  OSPEEDR80_bit at GPIOH_OSPEEDR.B16;
    const register unsigned short int OSPEEDR81 = 17;
    sbit  OSPEEDR81_bit at GPIOH_OSPEEDR.B17;
    const register unsigned short int OSPEEDR70 = 14;
    sbit  OSPEEDR70_bit at GPIOH_OSPEEDR.B14;
    const register unsigned short int OSPEEDR71 = 15;
    sbit  OSPEEDR71_bit at GPIOH_OSPEEDR.B15;
    const register unsigned short int OSPEEDR60 = 12;
    sbit  OSPEEDR60_bit at GPIOH_OSPEEDR.B12;
    const register unsigned short int OSPEEDR61 = 13;
    sbit  OSPEEDR61_bit at GPIOH_OSPEEDR.B13;
    const register unsigned short int OSPEEDR50 = 10;
    sbit  OSPEEDR50_bit at GPIOH_OSPEEDR.B10;
    const register unsigned short int OSPEEDR51 = 11;
    sbit  OSPEEDR51_bit at GPIOH_OSPEEDR.B11;
    const register unsigned short int OSPEEDR40 = 8;
    sbit  OSPEEDR40_bit at GPIOH_OSPEEDR.B8;
    const register unsigned short int OSPEEDR41 = 9;
    sbit  OSPEEDR41_bit at GPIOH_OSPEEDR.B9;
    const register unsigned short int OSPEEDR30 = 6;
    sbit  OSPEEDR30_bit at GPIOH_OSPEEDR.B6;
    const register unsigned short int OSPEEDR31 = 7;
    sbit  OSPEEDR31_bit at GPIOH_OSPEEDR.B7;
    const register unsigned short int OSPEEDR20 = 4;
    sbit  OSPEEDR20_bit at GPIOH_OSPEEDR.B4;
    const register unsigned short int OSPEEDR21 = 5;
    sbit  OSPEEDR21_bit at GPIOH_OSPEEDR.B5;
    const register unsigned short int OSPEEDR10 = 2;
    sbit  OSPEEDR10_bit at GPIOH_OSPEEDR.B2;
    const register unsigned short int OSPEEDR11 = 3;
    sbit  OSPEEDR11_bit at GPIOH_OSPEEDR.B3;
    const register unsigned short int OSPEEDR00 = 0;
    sbit  OSPEEDR00_bit at GPIOH_OSPEEDR.B0;
    const register unsigned short int OSPEEDR01 = 1;
    sbit  OSPEEDR01_bit at GPIOH_OSPEEDR.B1;

sfr unsigned long   volatile GPIOH_PUPDR          absolute 0x40021C0C;
    const register unsigned short int PUPDR150 = 30;
    sbit  PUPDR150_bit at GPIOH_PUPDR.B30;
    const register unsigned short int PUPDR151 = 31;
    sbit  PUPDR151_bit at GPIOH_PUPDR.B31;
    const register unsigned short int PUPDR140 = 28;
    sbit  PUPDR140_bit at GPIOH_PUPDR.B28;
    const register unsigned short int PUPDR141 = 29;
    sbit  PUPDR141_bit at GPIOH_PUPDR.B29;
    const register unsigned short int PUPDR130 = 26;
    sbit  PUPDR130_bit at GPIOH_PUPDR.B26;
    const register unsigned short int PUPDR131 = 27;
    sbit  PUPDR131_bit at GPIOH_PUPDR.B27;
    const register unsigned short int PUPDR120 = 24;
    sbit  PUPDR120_bit at GPIOH_PUPDR.B24;
    const register unsigned short int PUPDR121 = 25;
    sbit  PUPDR121_bit at GPIOH_PUPDR.B25;
    const register unsigned short int PUPDR110 = 22;
    sbit  PUPDR110_bit at GPIOH_PUPDR.B22;
    const register unsigned short int PUPDR111 = 23;
    sbit  PUPDR111_bit at GPIOH_PUPDR.B23;
    const register unsigned short int PUPDR100 = 20;
    sbit  PUPDR100_bit at GPIOH_PUPDR.B20;
    const register unsigned short int PUPDR101 = 21;
    sbit  PUPDR101_bit at GPIOH_PUPDR.B21;
    const register unsigned short int PUPDR90 = 18;
    sbit  PUPDR90_bit at GPIOH_PUPDR.B18;
    const register unsigned short int PUPDR91 = 19;
    sbit  PUPDR91_bit at GPIOH_PUPDR.B19;
    const register unsigned short int PUPDR80 = 16;
    sbit  PUPDR80_bit at GPIOH_PUPDR.B16;
    const register unsigned short int PUPDR81 = 17;
    sbit  PUPDR81_bit at GPIOH_PUPDR.B17;
    const register unsigned short int PUPDR70 = 14;
    sbit  PUPDR70_bit at GPIOH_PUPDR.B14;
    const register unsigned short int PUPDR71 = 15;
    sbit  PUPDR71_bit at GPIOH_PUPDR.B15;
    const register unsigned short int PUPDR60 = 12;
    sbit  PUPDR60_bit at GPIOH_PUPDR.B12;
    const register unsigned short int PUPDR61 = 13;
    sbit  PUPDR61_bit at GPIOH_PUPDR.B13;
    const register unsigned short int PUPDR50 = 10;
    sbit  PUPDR50_bit at GPIOH_PUPDR.B10;
    const register unsigned short int PUPDR51 = 11;
    sbit  PUPDR51_bit at GPIOH_PUPDR.B11;
    const register unsigned short int PUPDR40 = 8;
    sbit  PUPDR40_bit at GPIOH_PUPDR.B8;
    const register unsigned short int PUPDR41 = 9;
    sbit  PUPDR41_bit at GPIOH_PUPDR.B9;
    const register unsigned short int PUPDR30 = 6;
    sbit  PUPDR30_bit at GPIOH_PUPDR.B6;
    const register unsigned short int PUPDR31 = 7;
    sbit  PUPDR31_bit at GPIOH_PUPDR.B7;
    const register unsigned short int PUPDR20 = 4;
    sbit  PUPDR20_bit at GPIOH_PUPDR.B4;
    const register unsigned short int PUPDR21 = 5;
    sbit  PUPDR21_bit at GPIOH_PUPDR.B5;
    const register unsigned short int PUPDR10 = 2;
    sbit  PUPDR10_bit at GPIOH_PUPDR.B2;
    const register unsigned short int PUPDR11 = 3;
    sbit  PUPDR11_bit at GPIOH_PUPDR.B3;
    const register unsigned short int PUPDR00 = 0;
    sbit  PUPDR00_bit at GPIOH_PUPDR.B0;
    const register unsigned short int PUPDR01 = 1;
    sbit  PUPDR01_bit at GPIOH_PUPDR.B1;

sfr unsigned long   volatile GPIOH_IDR            absolute 0x40021C10;
    const register unsigned short int IDR15 = 15;
    sbit  IDR15_bit at GPIOH_IDR.B15;
    const register unsigned short int IDR14 = 14;
    sbit  IDR14_bit at GPIOH_IDR.B14;
    const register unsigned short int IDR13 = 13;
    sbit  IDR13_bit at GPIOH_IDR.B13;
    const register unsigned short int IDR12 = 12;
    sbit  IDR12_bit at GPIOH_IDR.B12;
    const register unsigned short int IDR11 = 11;
    sbit  IDR11_bit at GPIOH_IDR.B11;
    const register unsigned short int IDR10 = 10;
    sbit  IDR10_bit at GPIOH_IDR.B10;
    const register unsigned short int IDR9 = 9;
    sbit  IDR9_bit at GPIOH_IDR.B9;
    const register unsigned short int IDR8 = 8;
    sbit  IDR8_bit at GPIOH_IDR.B8;
    sbit  IDR7_GPIOH_IDR_bit at GPIOH_IDR.B7;
    sbit  IDR6_GPIOH_IDR_bit at GPIOH_IDR.B6;
    sbit  IDR5_GPIOH_IDR_bit at GPIOH_IDR.B5;
    sbit  IDR4_GPIOH_IDR_bit at GPIOH_IDR.B4;
    sbit  IDR3_GPIOH_IDR_bit at GPIOH_IDR.B3;
    sbit  IDR2_GPIOH_IDR_bit at GPIOH_IDR.B2;
    sbit  IDR1_GPIOH_IDR_bit at GPIOH_IDR.B1;
    sbit  IDR0_GPIOH_IDR_bit at GPIOH_IDR.B0;

sfr unsigned long   volatile GPIOH_ODR            absolute 0x40021C14;
    const register unsigned short int ODR15 = 15;
    sbit  ODR15_bit at GPIOH_ODR.B15;
    const register unsigned short int ODR14 = 14;
    sbit  ODR14_bit at GPIOH_ODR.B14;
    const register unsigned short int ODR13 = 13;
    sbit  ODR13_bit at GPIOH_ODR.B13;
    const register unsigned short int ODR12 = 12;
    sbit  ODR12_bit at GPIOH_ODR.B12;
    const register unsigned short int ODR11 = 11;
    sbit  ODR11_bit at GPIOH_ODR.B11;
    const register unsigned short int ODR10 = 10;
    sbit  ODR10_bit at GPIOH_ODR.B10;
    const register unsigned short int ODR9 = 9;
    sbit  ODR9_bit at GPIOH_ODR.B9;
    const register unsigned short int ODR8 = 8;
    sbit  ODR8_bit at GPIOH_ODR.B8;
    const register unsigned short int ODR7 = 7;
    sbit  ODR7_bit at GPIOH_ODR.B7;
    const register unsigned short int ODR6 = 6;
    sbit  ODR6_bit at GPIOH_ODR.B6;
    const register unsigned short int ODR5 = 5;
    sbit  ODR5_bit at GPIOH_ODR.B5;
    const register unsigned short int ODR4 = 4;
    sbit  ODR4_bit at GPIOH_ODR.B4;
    const register unsigned short int ODR3 = 3;
    sbit  ODR3_bit at GPIOH_ODR.B3;
    const register unsigned short int ODR2 = 2;
    sbit  ODR2_bit at GPIOH_ODR.B2;
    const register unsigned short int ODR1 = 1;
    sbit  ODR1_bit at GPIOH_ODR.B1;
    const register unsigned short int ODR0 = 0;
    sbit  ODR0_bit at GPIOH_ODR.B0;

sfr unsigned long   volatile GPIOH_BSRR           absolute 0x40021C18;
    const register unsigned short int BR15 = 31;
    sbit  BR15_bit at GPIOH_BSRR.B31;
    const register unsigned short int BR14 = 30;
    sbit  BR14_bit at GPIOH_BSRR.B30;
    const register unsigned short int BR13 = 29;
    sbit  BR13_bit at GPIOH_BSRR.B29;
    const register unsigned short int BR12 = 28;
    sbit  BR12_bit at GPIOH_BSRR.B28;
    const register unsigned short int BR11 = 27;
    sbit  BR11_bit at GPIOH_BSRR.B27;
    const register unsigned short int BR10 = 26;
    sbit  BR10_bit at GPIOH_BSRR.B26;
    const register unsigned short int BR9 = 25;
    sbit  BR9_bit at GPIOH_BSRR.B25;
    const register unsigned short int BR8 = 24;
    sbit  BR8_bit at GPIOH_BSRR.B24;
    const register unsigned short int BR7 = 23;
    sbit  BR7_bit at GPIOH_BSRR.B23;
    const register unsigned short int BR6 = 22;
    sbit  BR6_bit at GPIOH_BSRR.B22;
    const register unsigned short int BR5 = 21;
    sbit  BR5_bit at GPIOH_BSRR.B21;
    const register unsigned short int BR4 = 20;
    sbit  BR4_bit at GPIOH_BSRR.B20;
    const register unsigned short int BR3 = 19;
    sbit  BR3_bit at GPIOH_BSRR.B19;
    const register unsigned short int BR2 = 18;
    sbit  BR2_bit at GPIOH_BSRR.B18;
    const register unsigned short int BR1 = 17;
    sbit  BR1_bit at GPIOH_BSRR.B17;
    const register unsigned short int BR0 = 16;
    sbit  BR0_bit at GPIOH_BSRR.B16;
    const register unsigned short int BS15 = 15;
    sbit  BS15_bit at GPIOH_BSRR.B15;
    const register unsigned short int BS14 = 14;
    sbit  BS14_bit at GPIOH_BSRR.B14;
    const register unsigned short int BS13 = 13;
    sbit  BS13_bit at GPIOH_BSRR.B13;
    const register unsigned short int BS12 = 12;
    sbit  BS12_bit at GPIOH_BSRR.B12;
    const register unsigned short int BS11 = 11;
    sbit  BS11_bit at GPIOH_BSRR.B11;
    const register unsigned short int BS10 = 10;
    sbit  BS10_bit at GPIOH_BSRR.B10;
    const register unsigned short int BS9 = 9;
    sbit  BS9_bit at GPIOH_BSRR.B9;
    const register unsigned short int BS8 = 8;
    sbit  BS8_bit at GPIOH_BSRR.B8;
    const register unsigned short int BS7 = 7;
    sbit  BS7_bit at GPIOH_BSRR.B7;
    const register unsigned short int BS6 = 6;
    sbit  BS6_bit at GPIOH_BSRR.B6;
    const register unsigned short int BS5 = 5;
    sbit  BS5_bit at GPIOH_BSRR.B5;
    const register unsigned short int BS4 = 4;
    sbit  BS4_bit at GPIOH_BSRR.B4;
    const register unsigned short int BS3 = 3;
    sbit  BS3_bit at GPIOH_BSRR.B3;
    const register unsigned short int BS2 = 2;
    sbit  BS2_bit at GPIOH_BSRR.B2;
    const register unsigned short int BS1 = 1;
    sbit  BS1_bit at GPIOH_BSRR.B1;
    const register unsigned short int BS0 = 0;
    sbit  BS0_bit at GPIOH_BSRR.B0;

sfr unsigned long   volatile GPIOH_LCKR           absolute 0x40021C1C;
    const register unsigned short int LCKK = 16;
    sbit  LCKK_bit at GPIOH_LCKR.B16;
    const register unsigned short int LCK15 = 15;
    sbit  LCK15_bit at GPIOH_LCKR.B15;
    const register unsigned short int LCK14 = 14;
    sbit  LCK14_bit at GPIOH_LCKR.B14;
    const register unsigned short int LCK13 = 13;
    sbit  LCK13_bit at GPIOH_LCKR.B13;
    const register unsigned short int LCK12 = 12;
    sbit  LCK12_bit at GPIOH_LCKR.B12;
    const register unsigned short int LCK11 = 11;
    sbit  LCK11_bit at GPIOH_LCKR.B11;
    const register unsigned short int LCK10 = 10;
    sbit  LCK10_bit at GPIOH_LCKR.B10;
    const register unsigned short int LCK9 = 9;
    sbit  LCK9_bit at GPIOH_LCKR.B9;
    const register unsigned short int LCK8 = 8;
    sbit  LCK8_bit at GPIOH_LCKR.B8;
    const register unsigned short int LCK7 = 7;
    sbit  LCK7_bit at GPIOH_LCKR.B7;
    const register unsigned short int LCK6 = 6;
    sbit  LCK6_bit at GPIOH_LCKR.B6;
    const register unsigned short int LCK5 = 5;
    sbit  LCK5_bit at GPIOH_LCKR.B5;
    const register unsigned short int LCK4 = 4;
    sbit  LCK4_bit at GPIOH_LCKR.B4;
    const register unsigned short int LCK3 = 3;
    sbit  LCK3_bit at GPIOH_LCKR.B3;
    const register unsigned short int LCK2 = 2;
    sbit  LCK2_bit at GPIOH_LCKR.B2;
    const register unsigned short int LCK1 = 1;
    sbit  LCK1_bit at GPIOH_LCKR.B1;
    const register unsigned short int LCK0 = 0;
    sbit  LCK0_bit at GPIOH_LCKR.B0;

sfr unsigned long   volatile GPIOH_AFRL           absolute 0x40021C20;
    const register unsigned short int AFRL70 = 28;
    sbit  AFRL70_bit at GPIOH_AFRL.B28;
    const register unsigned short int AFRL71 = 29;
    sbit  AFRL71_bit at GPIOH_AFRL.B29;
    const register unsigned short int AFRL72 = 30;
    sbit  AFRL72_bit at GPIOH_AFRL.B30;
    const register unsigned short int AFRL73 = 31;
    sbit  AFRL73_bit at GPIOH_AFRL.B31;
    const register unsigned short int AFRL60 = 24;
    sbit  AFRL60_bit at GPIOH_AFRL.B24;
    const register unsigned short int AFRL61 = 25;
    sbit  AFRL61_bit at GPIOH_AFRL.B25;
    const register unsigned short int AFRL62 = 26;
    sbit  AFRL62_bit at GPIOH_AFRL.B26;
    const register unsigned short int AFRL63 = 27;
    sbit  AFRL63_bit at GPIOH_AFRL.B27;
    const register unsigned short int AFRL50 = 20;
    sbit  AFRL50_bit at GPIOH_AFRL.B20;
    const register unsigned short int AFRL51 = 21;
    sbit  AFRL51_bit at GPIOH_AFRL.B21;
    const register unsigned short int AFRL52 = 22;
    sbit  AFRL52_bit at GPIOH_AFRL.B22;
    const register unsigned short int AFRL53 = 23;
    sbit  AFRL53_bit at GPIOH_AFRL.B23;
    const register unsigned short int AFRL40 = 16;
    sbit  AFRL40_bit at GPIOH_AFRL.B16;
    const register unsigned short int AFRL41 = 17;
    sbit  AFRL41_bit at GPIOH_AFRL.B17;
    const register unsigned short int AFRL42 = 18;
    sbit  AFRL42_bit at GPIOH_AFRL.B18;
    const register unsigned short int AFRL43 = 19;
    sbit  AFRL43_bit at GPIOH_AFRL.B19;
    const register unsigned short int AFRL30 = 12;
    sbit  AFRL30_bit at GPIOH_AFRL.B12;
    const register unsigned short int AFRL31 = 13;
    sbit  AFRL31_bit at GPIOH_AFRL.B13;
    const register unsigned short int AFRL32 = 14;
    sbit  AFRL32_bit at GPIOH_AFRL.B14;
    const register unsigned short int AFRL33 = 15;
    sbit  AFRL33_bit at GPIOH_AFRL.B15;
    const register unsigned short int AFRL20 = 8;
    sbit  AFRL20_bit at GPIOH_AFRL.B8;
    const register unsigned short int AFRL21 = 9;
    sbit  AFRL21_bit at GPIOH_AFRL.B9;
    const register unsigned short int AFRL22 = 10;
    sbit  AFRL22_bit at GPIOH_AFRL.B10;
    const register unsigned short int AFRL23 = 11;
    sbit  AFRL23_bit at GPIOH_AFRL.B11;
    const register unsigned short int AFRL10 = 4;
    sbit  AFRL10_bit at GPIOH_AFRL.B4;
    const register unsigned short int AFRL11 = 5;
    sbit  AFRL11_bit at GPIOH_AFRL.B5;
    const register unsigned short int AFRL12 = 6;
    sbit  AFRL12_bit at GPIOH_AFRL.B6;
    const register unsigned short int AFRL13 = 7;
    sbit  AFRL13_bit at GPIOH_AFRL.B7;
    const register unsigned short int AFRL00 = 0;
    sbit  AFRL00_bit at GPIOH_AFRL.B0;
    const register unsigned short int AFRL01 = 1;
    sbit  AFRL01_bit at GPIOH_AFRL.B1;
    const register unsigned short int AFRL02 = 2;
    sbit  AFRL02_bit at GPIOH_AFRL.B2;
    const register unsigned short int AFRL03 = 3;
    sbit  AFRL03_bit at GPIOH_AFRL.B3;

sfr unsigned long   volatile GPIOH_AFRH           absolute 0x40021C24;
    const register unsigned short int AFRH150 = 28;
    sbit  AFRH150_bit at GPIOH_AFRH.B28;
    const register unsigned short int AFRH151 = 29;
    sbit  AFRH151_bit at GPIOH_AFRH.B29;
    const register unsigned short int AFRH152 = 30;
    sbit  AFRH152_bit at GPIOH_AFRH.B30;
    const register unsigned short int AFRH153 = 31;
    sbit  AFRH153_bit at GPIOH_AFRH.B31;
    const register unsigned short int AFRH140 = 24;
    sbit  AFRH140_bit at GPIOH_AFRH.B24;
    const register unsigned short int AFRH141 = 25;
    sbit  AFRH141_bit at GPIOH_AFRH.B25;
    const register unsigned short int AFRH142 = 26;
    sbit  AFRH142_bit at GPIOH_AFRH.B26;
    const register unsigned short int AFRH143 = 27;
    sbit  AFRH143_bit at GPIOH_AFRH.B27;
    const register unsigned short int AFRH130 = 20;
    sbit  AFRH130_bit at GPIOH_AFRH.B20;
    const register unsigned short int AFRH131 = 21;
    sbit  AFRH131_bit at GPIOH_AFRH.B21;
    const register unsigned short int AFRH132 = 22;
    sbit  AFRH132_bit at GPIOH_AFRH.B22;
    const register unsigned short int AFRH133 = 23;
    sbit  AFRH133_bit at GPIOH_AFRH.B23;
    const register unsigned short int AFRH120 = 16;
    sbit  AFRH120_bit at GPIOH_AFRH.B16;
    const register unsigned short int AFRH121 = 17;
    sbit  AFRH121_bit at GPIOH_AFRH.B17;
    const register unsigned short int AFRH122 = 18;
    sbit  AFRH122_bit at GPIOH_AFRH.B18;
    const register unsigned short int AFRH123 = 19;
    sbit  AFRH123_bit at GPIOH_AFRH.B19;
    const register unsigned short int AFRH110 = 12;
    sbit  AFRH110_bit at GPIOH_AFRH.B12;
    const register unsigned short int AFRH111 = 13;
    sbit  AFRH111_bit at GPIOH_AFRH.B13;
    const register unsigned short int AFRH112 = 14;
    sbit  AFRH112_bit at GPIOH_AFRH.B14;
    const register unsigned short int AFRH113 = 15;
    sbit  AFRH113_bit at GPIOH_AFRH.B15;
    const register unsigned short int AFRH100 = 8;
    sbit  AFRH100_bit at GPIOH_AFRH.B8;
    const register unsigned short int AFRH101 = 9;
    sbit  AFRH101_bit at GPIOH_AFRH.B9;
    const register unsigned short int AFRH102 = 10;
    sbit  AFRH102_bit at GPIOH_AFRH.B10;
    const register unsigned short int AFRH103 = 11;
    sbit  AFRH103_bit at GPIOH_AFRH.B11;
    const register unsigned short int AFRH90 = 4;
    sbit  AFRH90_bit at GPIOH_AFRH.B4;
    const register unsigned short int AFRH91 = 5;
    sbit  AFRH91_bit at GPIOH_AFRH.B5;
    const register unsigned short int AFRH92 = 6;
    sbit  AFRH92_bit at GPIOH_AFRH.B6;
    const register unsigned short int AFRH93 = 7;
    sbit  AFRH93_bit at GPIOH_AFRH.B7;
    const register unsigned short int AFRH80 = 0;
    sbit  AFRH80_bit at GPIOH_AFRH.B0;
    const register unsigned short int AFRH81 = 1;
    sbit  AFRH81_bit at GPIOH_AFRH.B1;
    const register unsigned short int AFRH82 = 2;
    sbit  AFRH82_bit at GPIOH_AFRH.B2;
    const register unsigned short int AFRH83 = 3;
    sbit  AFRH83_bit at GPIOH_AFRH.B3;

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

sfr unsigned long   volatile GPIOC_OSPEEDR        absolute 0x40020808;
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

sfr unsigned long   volatile GPIOB_OSPEEDR        absolute 0x40020408;
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

sfr unsigned long   volatile GPIOA_BASE           absolute 0x40020000;
sfr unsigned long   volatile GPIOA_MODER          absolute 0x40020000;
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

sfr unsigned long   volatile GPIOA_OTYPER         absolute 0x40020004;
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

sfr unsigned long   volatile GPIOA_OSPEEDR        absolute 0x40020008;
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

sfr unsigned long   volatile GPIOA_PUPDR          absolute 0x4002000C;
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

sfr unsigned long   volatile GPIOA_IDR            absolute 0x40020010;
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

sfr unsigned long   volatile GPIOA_ODR            absolute 0x40020014;
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

sfr unsigned long   volatile GPIOA_BSRR           absolute 0x40020018;
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

sfr unsigned long   volatile GPIOA_LCKR           absolute 0x4002001C;
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

sfr unsigned long   volatile GPIOA_AFRL           absolute 0x40020020;
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

sfr unsigned long   volatile GPIOA_AFRH           absolute 0x40020024;
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

sfr unsigned long   volatile I2C2_CR1             absolute 0x40005800;
    const register unsigned short int SWRST = 15;
    sbit  SWRST_bit at I2C2_CR1.B15;
    const register unsigned short int ALERT = 13;
    sbit  ALERT_bit at I2C2_CR1.B13;
    const register unsigned short int PEC = 12;
    sbit  PEC_bit at I2C2_CR1.B12;
    const register unsigned short int POS = 11;
    sbit  POS_bit at I2C2_CR1.B11;
    sbit  ACK_I2C2_CR1_bit at I2C2_CR1.B10;
    const register unsigned short int STOP_ = 9;
    sbit  STOP_bit at I2C2_CR1.B9;
    const register unsigned short int START = 8;
    sbit  START_bit at I2C2_CR1.B8;
    const register unsigned short int NOSTRETCH = 7;
    sbit  NOSTRETCH_bit at I2C2_CR1.B7;
    const register unsigned short int ENGC = 6;
    sbit  ENGC_bit at I2C2_CR1.B6;
    const register unsigned short int ENPEC = 5;
    sbit  ENPEC_bit at I2C2_CR1.B5;
    const register unsigned short int ENARP = 4;
    sbit  ENARP_bit at I2C2_CR1.B4;
    const register unsigned short int SMBTYPE = 3;
    sbit  SMBTYPE_bit at I2C2_CR1.B3;
    const register unsigned short int SMBUS = 1;
    sbit  SMBUS_bit at I2C2_CR1.B1;
    sbit  PE_I2C2_CR1_bit at I2C2_CR1.B0;

sfr unsigned long   volatile I2C2_CR2             absolute 0x40005804;
    const register unsigned short int LAST = 12;
    sbit  LAST_bit at I2C2_CR2.B12;
    const register unsigned short int DMAEN = 11;
    sbit  DMAEN_bit at I2C2_CR2.B11;
    const register unsigned short int ITBUFEN = 10;
    sbit  ITBUFEN_bit at I2C2_CR2.B10;
    const register unsigned short int ITEVTEN = 9;
    sbit  ITEVTEN_bit at I2C2_CR2.B9;
    const register unsigned short int ITERREN = 8;
    sbit  ITERREN_bit at I2C2_CR2.B8;
    const register unsigned short int FREQ0 = 0;
    sbit  FREQ0_bit at I2C2_CR2.B0;
    const register unsigned short int FREQ1 = 1;
    sbit  FREQ1_bit at I2C2_CR2.B1;
    const register unsigned short int FREQ2 = 2;
    sbit  FREQ2_bit at I2C2_CR2.B2;
    const register unsigned short int FREQ3 = 3;
    sbit  FREQ3_bit at I2C2_CR2.B3;
    const register unsigned short int FREQ4 = 4;
    sbit  FREQ4_bit at I2C2_CR2.B4;
    const register unsigned short int FREQ5 = 5;
    sbit  FREQ5_bit at I2C2_CR2.B5;

sfr unsigned long   volatile I2C2_OAR1            absolute 0x40005808;
    const register unsigned short int ADDMODE = 15;
    sbit  ADDMODE_bit at I2C2_OAR1.B15;
    const register unsigned short int ADD100 = 8;
    sbit  ADD100_bit at I2C2_OAR1.B8;
    const register unsigned short int ADD101 = 9;
    sbit  ADD101_bit at I2C2_OAR1.B9;
    const register unsigned short int ADD70 = 1;
    sbit  ADD70_bit at I2C2_OAR1.B1;
    const register unsigned short int ADD71 = 2;
    sbit  ADD71_bit at I2C2_OAR1.B2;
    const register unsigned short int ADD72 = 3;
    sbit  ADD72_bit at I2C2_OAR1.B3;
    const register unsigned short int ADD73 = 4;
    sbit  ADD73_bit at I2C2_OAR1.B4;
    const register unsigned short int ADD74 = 5;
    sbit  ADD74_bit at I2C2_OAR1.B5;
    const register unsigned short int ADD75 = 6;
    sbit  ADD75_bit at I2C2_OAR1.B6;
    const register unsigned short int ADD76 = 7;
    sbit  ADD76_bit at I2C2_OAR1.B7;
    sbit  ADD0_I2C2_OAR1_bit at I2C2_OAR1.B0;

sfr unsigned long   volatile I2C2_OAR2            absolute 0x4000580C;
    const register unsigned short int ADD20 = 1;
    sbit  ADD20_bit at I2C2_OAR2.B1;
    const register unsigned short int ADD21 = 2;
    sbit  ADD21_bit at I2C2_OAR2.B2;
    const register unsigned short int ADD22 = 3;
    sbit  ADD22_bit at I2C2_OAR2.B3;
    const register unsigned short int ADD23 = 4;
    sbit  ADD23_bit at I2C2_OAR2.B4;
    const register unsigned short int ADD24 = 5;
    sbit  ADD24_bit at I2C2_OAR2.B5;
    const register unsigned short int ADD25 = 6;
    sbit  ADD25_bit at I2C2_OAR2.B6;
    const register unsigned short int ADD26 = 7;
    sbit  ADD26_bit at I2C2_OAR2.B7;
    const register unsigned short int ENDUAL = 0;
    sbit  ENDUAL_bit at I2C2_OAR2.B0;

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
    const register unsigned short int SMBALERT = 15;
    sbit  SMBALERT_bit at I2C2_SR1.B15;
    const register unsigned short int TIMEOUT = 14;
    sbit  TIMEOUT_bit at I2C2_SR1.B14;
    const register unsigned short int PECERR = 12;
    sbit  PECERR_bit at I2C2_SR1.B12;
    sbit  OVR_I2C2_SR1_bit at I2C2_SR1.B11;
    const register unsigned short int AF = 10;
    sbit  AF_bit at I2C2_SR1.B10;
    const register unsigned short int ARLO = 9;
    sbit  ARLO_bit at I2C2_SR1.B9;
    const register unsigned short int BERR = 8;
    sbit  BERR_bit at I2C2_SR1.B8;
    sbit  TxE_I2C2_SR1_bit at I2C2_SR1.B7;
    sbit  RxNE_I2C2_SR1_bit at I2C2_SR1.B6;
    const register unsigned short int STOPF = 4;
    sbit  STOPF_bit at I2C2_SR1.B4;
    const register unsigned short int ADD10 = 3;
    sbit  ADD10_bit at I2C2_SR1.B3;
    const register unsigned short int BTF = 2;
    sbit  BTF_bit at I2C2_SR1.B2;
    const register unsigned short int ADDR = 1;
    sbit  ADDR_bit at I2C2_SR1.B1;
    const register unsigned short int SB = 0;
    sbit  SB_bit at I2C2_SR1.B0;

sfr unsigned long   volatile I2C2_SR2             absolute 0x40005818;
    const register unsigned short int PEC0 = 8;
    sbit  PEC0_bit at I2C2_SR2.B8;
    const register unsigned short int PEC1 = 9;
    sbit  PEC1_bit at I2C2_SR2.B9;
    const register unsigned short int PEC2 = 10;
    sbit  PEC2_bit at I2C2_SR2.B10;
    const register unsigned short int PEC3 = 11;
    sbit  PEC3_bit at I2C2_SR2.B11;
    const register unsigned short int PEC4 = 12;
    sbit  PEC4_bit at I2C2_SR2.B12;
    const register unsigned short int PEC5 = 13;
    sbit  PEC5_bit at I2C2_SR2.B13;
    const register unsigned short int PEC6 = 14;
    sbit  PEC6_bit at I2C2_SR2.B14;
    const register unsigned short int PEC7 = 15;
    sbit  PEC7_bit at I2C2_SR2.B15;
    const register unsigned short int DUALF = 7;
    sbit  DUALF_bit at I2C2_SR2.B7;
    const register unsigned short int SMBHOST = 6;
    sbit  SMBHOST_bit at I2C2_SR2.B6;
    const register unsigned short int SMBDEFAULT = 5;
    sbit  SMBDEFAULT_bit at I2C2_SR2.B5;
    const register unsigned short int GENCALL = 4;
    sbit  GENCALL_bit at I2C2_SR2.B4;
    const register unsigned short int TRA = 2;
    sbit  TRA_bit at I2C2_SR2.B2;
    const register unsigned short int BUSY = 1;
    sbit  BUSY_bit at I2C2_SR2.B1;
    const register unsigned short int MSL = 0;
    sbit  MSL_bit at I2C2_SR2.B0;

sfr unsigned long   volatile I2C2_CCR             absolute 0x4000581C;
    const register unsigned short int F_S = 15;
    sbit  F_S_bit at I2C2_CCR.B15;
    const register unsigned short int DUTY = 14;
    sbit  DUTY_bit at I2C2_CCR.B14;
    const register unsigned short int CCR0 = 0;
    sbit  CCR0_bit at I2C2_CCR.B0;
    const register unsigned short int CCR1 = 1;
    sbit  CCR1_bit at I2C2_CCR.B1;
    const register unsigned short int CCR2 = 2;
    sbit  CCR2_bit at I2C2_CCR.B2;
    const register unsigned short int CCR3 = 3;
    sbit  CCR3_bit at I2C2_CCR.B3;
    const register unsigned short int CCR4 = 4;
    sbit  CCR4_bit at I2C2_CCR.B4;
    const register unsigned short int CCR5 = 5;
    sbit  CCR5_bit at I2C2_CCR.B5;
    const register unsigned short int CCR6 = 6;
    sbit  CCR6_bit at I2C2_CCR.B6;
    const register unsigned short int CCR7 = 7;
    sbit  CCR7_bit at I2C2_CCR.B7;
    const register unsigned short int CCR8 = 8;
    sbit  CCR8_bit at I2C2_CCR.B8;
    const register unsigned short int CCR9 = 9;
    sbit  CCR9_bit at I2C2_CCR.B9;
    sbit  CCR10_I2C2_CCR_bit at I2C2_CCR.B10;
    sbit  CCR11_I2C2_CCR_bit at I2C2_CCR.B11;

sfr unsigned long   volatile I2C2_TRISE           absolute 0x40005820;
    const register unsigned short int TRISE0 = 0;
    sbit  TRISE0_bit at I2C2_TRISE.B0;
    const register unsigned short int TRISE1 = 1;
    sbit  TRISE1_bit at I2C2_TRISE.B1;
    const register unsigned short int TRISE2 = 2;
    sbit  TRISE2_bit at I2C2_TRISE.B2;
    const register unsigned short int TRISE3 = 3;
    sbit  TRISE3_bit at I2C2_TRISE.B3;
    const register unsigned short int TRISE4 = 4;
    sbit  TRISE4_bit at I2C2_TRISE.B4;
    const register unsigned short int TRISE5 = 5;
    sbit  TRISE5_bit at I2C2_TRISE.B5;

sfr unsigned long   volatile I2C1_CR1             absolute 0x40005400;
    sbit  SWRST_I2C1_CR1_bit at I2C1_CR1.B15;
    sbit  ALERT_I2C1_CR1_bit at I2C1_CR1.B13;
    sbit  PEC_I2C1_CR1_bit at I2C1_CR1.B12;
    sbit  POS_I2C1_CR1_bit at I2C1_CR1.B11;
    sbit  ACK_I2C1_CR1_bit at I2C1_CR1.B10;
    sbit  STOP_I2C1_CR1_bit at I2C1_CR1.B9;
    sbit  START_I2C1_CR1_bit at I2C1_CR1.B8;
    sbit  NOSTRETCH_I2C1_CR1_bit at I2C1_CR1.B7;
    sbit  ENGC_I2C1_CR1_bit at I2C1_CR1.B6;
    sbit  ENPEC_I2C1_CR1_bit at I2C1_CR1.B5;
    sbit  ENARP_I2C1_CR1_bit at I2C1_CR1.B4;
    sbit  SMBTYPE_I2C1_CR1_bit at I2C1_CR1.B3;
    sbit  SMBUS_I2C1_CR1_bit at I2C1_CR1.B1;
    sbit  PE_I2C1_CR1_bit at I2C1_CR1.B0;

sfr unsigned long   volatile I2C1_CR2             absolute 0x40005404;
    sbit  LAST_I2C1_CR2_bit at I2C1_CR2.B12;
    sbit  DMAEN_I2C1_CR2_bit at I2C1_CR2.B11;
    sbit  ITBUFEN_I2C1_CR2_bit at I2C1_CR2.B10;
    sbit  ITEVTEN_I2C1_CR2_bit at I2C1_CR2.B9;
    sbit  ITERREN_I2C1_CR2_bit at I2C1_CR2.B8;
    sbit  FREQ0_I2C1_CR2_bit at I2C1_CR2.B0;
    sbit  FREQ1_I2C1_CR2_bit at I2C1_CR2.B1;
    sbit  FREQ2_I2C1_CR2_bit at I2C1_CR2.B2;
    sbit  FREQ3_I2C1_CR2_bit at I2C1_CR2.B3;
    sbit  FREQ4_I2C1_CR2_bit at I2C1_CR2.B4;
    sbit  FREQ5_I2C1_CR2_bit at I2C1_CR2.B5;

sfr unsigned long   volatile I2C1_OAR1            absolute 0x40005408;
    sbit  ADDMODE_I2C1_OAR1_bit at I2C1_OAR1.B15;
    sbit  ADD100_I2C1_OAR1_bit at I2C1_OAR1.B8;
    sbit  ADD101_I2C1_OAR1_bit at I2C1_OAR1.B9;
    sbit  ADD70_I2C1_OAR1_bit at I2C1_OAR1.B1;
    sbit  ADD71_I2C1_OAR1_bit at I2C1_OAR1.B2;
    sbit  ADD72_I2C1_OAR1_bit at I2C1_OAR1.B3;
    sbit  ADD73_I2C1_OAR1_bit at I2C1_OAR1.B4;
    sbit  ADD74_I2C1_OAR1_bit at I2C1_OAR1.B5;
    sbit  ADD75_I2C1_OAR1_bit at I2C1_OAR1.B6;
    sbit  ADD76_I2C1_OAR1_bit at I2C1_OAR1.B7;
    sbit  ADD0_I2C1_OAR1_bit at I2C1_OAR1.B0;

sfr unsigned long   volatile I2C1_OAR2            absolute 0x4000540C;
    sbit  ADD20_I2C1_OAR2_bit at I2C1_OAR2.B1;
    sbit  ADD21_I2C1_OAR2_bit at I2C1_OAR2.B2;
    sbit  ADD22_I2C1_OAR2_bit at I2C1_OAR2.B3;
    sbit  ADD23_I2C1_OAR2_bit at I2C1_OAR2.B4;
    sbit  ADD24_I2C1_OAR2_bit at I2C1_OAR2.B5;
    sbit  ADD25_I2C1_OAR2_bit at I2C1_OAR2.B6;
    sbit  ADD26_I2C1_OAR2_bit at I2C1_OAR2.B7;
    sbit  ENDUAL_I2C1_OAR2_bit at I2C1_OAR2.B0;

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
    sbit  SMBALERT_I2C1_SR1_bit at I2C1_SR1.B15;
    sbit  TIMEOUT_I2C1_SR1_bit at I2C1_SR1.B14;
    sbit  PECERR_I2C1_SR1_bit at I2C1_SR1.B12;
    sbit  OVR_I2C1_SR1_bit at I2C1_SR1.B11;
    sbit  AF_I2C1_SR1_bit at I2C1_SR1.B10;
    sbit  ARLO_I2C1_SR1_bit at I2C1_SR1.B9;
    sbit  BERR_I2C1_SR1_bit at I2C1_SR1.B8;
    sbit  TxE_I2C1_SR1_bit at I2C1_SR1.B7;
    sbit  RxNE_I2C1_SR1_bit at I2C1_SR1.B6;
    sbit  STOPF_I2C1_SR1_bit at I2C1_SR1.B4;
    sbit  ADD10_I2C1_SR1_bit at I2C1_SR1.B3;
    sbit  BTF_I2C1_SR1_bit at I2C1_SR1.B2;
    sbit  ADDR_I2C1_SR1_bit at I2C1_SR1.B1;
    sbit  SB_I2C1_SR1_bit at I2C1_SR1.B0;

sfr unsigned long   volatile I2C1_SR2             absolute 0x40005418;
    sbit  PEC0_I2C1_SR2_bit at I2C1_SR2.B8;
    sbit  PEC1_I2C1_SR2_bit at I2C1_SR2.B9;
    sbit  PEC2_I2C1_SR2_bit at I2C1_SR2.B10;
    sbit  PEC3_I2C1_SR2_bit at I2C1_SR2.B11;
    sbit  PEC4_I2C1_SR2_bit at I2C1_SR2.B12;
    sbit  PEC5_I2C1_SR2_bit at I2C1_SR2.B13;
    sbit  PEC6_I2C1_SR2_bit at I2C1_SR2.B14;
    sbit  PEC7_I2C1_SR2_bit at I2C1_SR2.B15;
    sbit  DUALF_I2C1_SR2_bit at I2C1_SR2.B7;
    sbit  SMBHOST_I2C1_SR2_bit at I2C1_SR2.B6;
    sbit  SMBDEFAULT_I2C1_SR2_bit at I2C1_SR2.B5;
    sbit  GENCALL_I2C1_SR2_bit at I2C1_SR2.B4;
    sbit  TRA_I2C1_SR2_bit at I2C1_SR2.B2;
    sbit  BUSY_I2C1_SR2_bit at I2C1_SR2.B1;
    sbit  MSL_I2C1_SR2_bit at I2C1_SR2.B0;

sfr unsigned long   volatile I2C1_CCR             absolute 0x4000541C;
    sbit  F_S_I2C1_CCR_bit at I2C1_CCR.B15;
    sbit  DUTY_I2C1_CCR_bit at I2C1_CCR.B14;
    sbit  CCR0_I2C1_CCR_bit at I2C1_CCR.B0;
    sbit  CCR1_I2C1_CCR_bit at I2C1_CCR.B1;
    sbit  CCR2_I2C1_CCR_bit at I2C1_CCR.B2;
    sbit  CCR3_I2C1_CCR_bit at I2C1_CCR.B3;
    sbit  CCR4_I2C1_CCR_bit at I2C1_CCR.B4;
    sbit  CCR5_I2C1_CCR_bit at I2C1_CCR.B5;
    sbit  CCR6_I2C1_CCR_bit at I2C1_CCR.B6;
    sbit  CCR7_I2C1_CCR_bit at I2C1_CCR.B7;
    sbit  CCR8_I2C1_CCR_bit at I2C1_CCR.B8;
    sbit  CCR9_I2C1_CCR_bit at I2C1_CCR.B9;
    sbit  CCR10_I2C1_CCR_bit at I2C1_CCR.B10;
    sbit  CCR11_I2C1_CCR_bit at I2C1_CCR.B11;

sfr unsigned long   volatile I2C1_TRISE           absolute 0x40005420;
    sbit  TRISE0_I2C1_TRISE_bit at I2C1_TRISE.B0;
    sbit  TRISE1_I2C1_TRISE_bit at I2C1_TRISE.B1;
    sbit  TRISE2_I2C1_TRISE_bit at I2C1_TRISE.B2;
    sbit  TRISE3_I2C1_TRISE_bit at I2C1_TRISE.B3;
    sbit  TRISE4_I2C1_TRISE_bit at I2C1_TRISE.B4;
    sbit  TRISE5_I2C1_TRISE_bit at I2C1_TRISE.B5;

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
    sbit  TXEIE_SPI1_CR2_bit at SPI1_CR2.B7;
    sbit  RXNEIE_SPI1_CR2_bit at SPI1_CR2.B6;
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
    const register unsigned short int UDR = 3;
    sbit  UDR_bit at SPI1_SR.B3;
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

sfr unsigned long   volatile SPI5_CR1             absolute 0x40015000;
    sbit  BIDIMODE_SPI5_CR1_bit at SPI5_CR1.B15;
    sbit  BIDIOE_SPI5_CR1_bit at SPI5_CR1.B14;
    sbit  CRCEN_SPI5_CR1_bit at SPI5_CR1.B13;
    sbit  CRCNEXT_SPI5_CR1_bit at SPI5_CR1.B12;
    sbit  DFF_SPI5_CR1_bit at SPI5_CR1.B11;
    sbit  RXONLY_SPI5_CR1_bit at SPI5_CR1.B10;
    sbit  SSM_SPI5_CR1_bit at SPI5_CR1.B9;
    sbit  SSI_SPI5_CR1_bit at SPI5_CR1.B8;
    sbit  LSBFIRST_SPI5_CR1_bit at SPI5_CR1.B7;
    sbit  SPE_SPI5_CR1_bit at SPI5_CR1.B6;
    sbit  BR0_SPI5_CR1_bit at SPI5_CR1.B3;
    sbit  BR1_SPI5_CR1_bit at SPI5_CR1.B4;
    sbit  BR2_SPI5_CR1_bit at SPI5_CR1.B5;
    sbit  MSTR_SPI5_CR1_bit at SPI5_CR1.B2;
    sbit  CPOL_SPI5_CR1_bit at SPI5_CR1.B1;
    sbit  CPHA_SPI5_CR1_bit at SPI5_CR1.B0;

sfr unsigned long   volatile SPI5_CR2             absolute 0x40015004;
    sbit  TXEIE_SPI5_CR2_bit at SPI5_CR2.B7;
    sbit  RXNEIE_SPI5_CR2_bit at SPI5_CR2.B6;
    sbit  ERRIE_SPI5_CR2_bit at SPI5_CR2.B5;
    sbit  FRF_SPI5_CR2_bit at SPI5_CR2.B4;
    sbit  SSOE_SPI5_CR2_bit at SPI5_CR2.B2;
    sbit  TXDMAEN_SPI5_CR2_bit at SPI5_CR2.B1;
    sbit  RXDMAEN_SPI5_CR2_bit at SPI5_CR2.B0;

sfr unsigned long   volatile SPI5_SR              absolute 0x40015008;
    sbit  TIFRFE_SPI5_SR_bit at SPI5_SR.B8;
    sbit  BSY_SPI5_SR_bit at SPI5_SR.B7;
    sbit  OVR_SPI5_SR_bit at SPI5_SR.B6;
    sbit  MODF_SPI5_SR_bit at SPI5_SR.B5;
    sbit  CRCERR_SPI5_SR_bit at SPI5_SR.B4;
    sbit  UDR_SPI5_SR_bit at SPI5_SR.B3;
    sbit  CHSIDE_SPI5_SR_bit at SPI5_SR.B2;
    sbit  TXE_SPI5_SR_bit at SPI5_SR.B1;
    sbit  RXNE_SPI5_SR_bit at SPI5_SR.B0;

sfr unsigned long   volatile SPI5_DR              absolute 0x4001500C;
    sbit  DR0_SPI5_DR_bit at SPI5_DR.B0;
    sbit  DR1_SPI5_DR_bit at SPI5_DR.B1;
    sbit  DR2_SPI5_DR_bit at SPI5_DR.B2;
    sbit  DR3_SPI5_DR_bit at SPI5_DR.B3;
    sbit  DR4_SPI5_DR_bit at SPI5_DR.B4;
    sbit  DR5_SPI5_DR_bit at SPI5_DR.B5;
    sbit  DR6_SPI5_DR_bit at SPI5_DR.B6;
    sbit  DR7_SPI5_DR_bit at SPI5_DR.B7;
    sbit  DR8_SPI5_DR_bit at SPI5_DR.B8;
    sbit  DR9_SPI5_DR_bit at SPI5_DR.B9;
    sbit  DR10_SPI5_DR_bit at SPI5_DR.B10;
    sbit  DR11_SPI5_DR_bit at SPI5_DR.B11;
    sbit  DR12_SPI5_DR_bit at SPI5_DR.B12;
    sbit  DR13_SPI5_DR_bit at SPI5_DR.B13;
    sbit  DR14_SPI5_DR_bit at SPI5_DR.B14;
    sbit  DR15_SPI5_DR_bit at SPI5_DR.B15;

sfr unsigned long   volatile SPI5_CRCPR           absolute 0x40015010;
    sbit  CRCPOLY0_SPI5_CRCPR_bit at SPI5_CRCPR.B0;
    sbit  CRCPOLY1_SPI5_CRCPR_bit at SPI5_CRCPR.B1;
    sbit  CRCPOLY2_SPI5_CRCPR_bit at SPI5_CRCPR.B2;
    sbit  CRCPOLY3_SPI5_CRCPR_bit at SPI5_CRCPR.B3;
    sbit  CRCPOLY4_SPI5_CRCPR_bit at SPI5_CRCPR.B4;
    sbit  CRCPOLY5_SPI5_CRCPR_bit at SPI5_CRCPR.B5;
    sbit  CRCPOLY6_SPI5_CRCPR_bit at SPI5_CRCPR.B6;
    sbit  CRCPOLY7_SPI5_CRCPR_bit at SPI5_CRCPR.B7;
    sbit  CRCPOLY8_SPI5_CRCPR_bit at SPI5_CRCPR.B8;
    sbit  CRCPOLY9_SPI5_CRCPR_bit at SPI5_CRCPR.B9;
    sbit  CRCPOLY10_SPI5_CRCPR_bit at SPI5_CRCPR.B10;
    sbit  CRCPOLY11_SPI5_CRCPR_bit at SPI5_CRCPR.B11;
    sbit  CRCPOLY12_SPI5_CRCPR_bit at SPI5_CRCPR.B12;
    sbit  CRCPOLY13_SPI5_CRCPR_bit at SPI5_CRCPR.B13;
    sbit  CRCPOLY14_SPI5_CRCPR_bit at SPI5_CRCPR.B14;
    sbit  CRCPOLY15_SPI5_CRCPR_bit at SPI5_CRCPR.B15;

sfr unsigned long   volatile SPI5_RXCRCR          absolute 0x40015014;
    sbit  RxCRC0_SPI5_RXCRCR_bit at SPI5_RXCRCR.B0;
    sbit  RxCRC1_SPI5_RXCRCR_bit at SPI5_RXCRCR.B1;
    sbit  RxCRC2_SPI5_RXCRCR_bit at SPI5_RXCRCR.B2;
    sbit  RxCRC3_SPI5_RXCRCR_bit at SPI5_RXCRCR.B3;
    sbit  RxCRC4_SPI5_RXCRCR_bit at SPI5_RXCRCR.B4;
    sbit  RxCRC5_SPI5_RXCRCR_bit at SPI5_RXCRCR.B5;
    sbit  RxCRC6_SPI5_RXCRCR_bit at SPI5_RXCRCR.B6;
    sbit  RxCRC7_SPI5_RXCRCR_bit at SPI5_RXCRCR.B7;
    sbit  RxCRC8_SPI5_RXCRCR_bit at SPI5_RXCRCR.B8;
    sbit  RxCRC9_SPI5_RXCRCR_bit at SPI5_RXCRCR.B9;
    sbit  RxCRC10_SPI5_RXCRCR_bit at SPI5_RXCRCR.B10;
    sbit  RxCRC11_SPI5_RXCRCR_bit at SPI5_RXCRCR.B11;
    sbit  RxCRC12_SPI5_RXCRCR_bit at SPI5_RXCRCR.B12;
    sbit  RxCRC13_SPI5_RXCRCR_bit at SPI5_RXCRCR.B13;
    sbit  RxCRC14_SPI5_RXCRCR_bit at SPI5_RXCRCR.B14;
    sbit  RxCRC15_SPI5_RXCRCR_bit at SPI5_RXCRCR.B15;

sfr unsigned long   volatile SPI5_TXCRCR          absolute 0x40015018;
    sbit  TxCRC0_SPI5_TXCRCR_bit at SPI5_TXCRCR.B0;
    sbit  TxCRC1_SPI5_TXCRCR_bit at SPI5_TXCRCR.B1;
    sbit  TxCRC2_SPI5_TXCRCR_bit at SPI5_TXCRCR.B2;
    sbit  TxCRC3_SPI5_TXCRCR_bit at SPI5_TXCRCR.B3;
    sbit  TxCRC4_SPI5_TXCRCR_bit at SPI5_TXCRCR.B4;
    sbit  TxCRC5_SPI5_TXCRCR_bit at SPI5_TXCRCR.B5;
    sbit  TxCRC6_SPI5_TXCRCR_bit at SPI5_TXCRCR.B6;
    sbit  TxCRC7_SPI5_TXCRCR_bit at SPI5_TXCRCR.B7;
    sbit  TxCRC8_SPI5_TXCRCR_bit at SPI5_TXCRCR.B8;
    sbit  TxCRC9_SPI5_TXCRCR_bit at SPI5_TXCRCR.B9;
    sbit  TxCRC10_SPI5_TXCRCR_bit at SPI5_TXCRCR.B10;
    sbit  TxCRC11_SPI5_TXCRCR_bit at SPI5_TXCRCR.B11;
    sbit  TxCRC12_SPI5_TXCRCR_bit at SPI5_TXCRCR.B12;
    sbit  TxCRC13_SPI5_TXCRCR_bit at SPI5_TXCRCR.B13;
    sbit  TxCRC14_SPI5_TXCRCR_bit at SPI5_TXCRCR.B14;
    sbit  TxCRC15_SPI5_TXCRCR_bit at SPI5_TXCRCR.B15;

sfr unsigned long   volatile SPI5_I2SCFGR         absolute 0x4001501C;
    sbit  I2SMOD_SPI5_I2SCFGR_bit at SPI5_I2SCFGR.B11;
    sbit  I2SE_SPI5_I2SCFGR_bit at SPI5_I2SCFGR.B10;
    sbit  I2SCFG0_SPI5_I2SCFGR_bit at SPI5_I2SCFGR.B8;
    sbit  I2SCFG1_SPI5_I2SCFGR_bit at SPI5_I2SCFGR.B9;
    sbit  PCMSYNC_SPI5_I2SCFGR_bit at SPI5_I2SCFGR.B7;
    sbit  I2SSTD0_SPI5_I2SCFGR_bit at SPI5_I2SCFGR.B4;
    sbit  I2SSTD1_SPI5_I2SCFGR_bit at SPI5_I2SCFGR.B5;
    sbit  CKPOL_SPI5_I2SCFGR_bit at SPI5_I2SCFGR.B3;
    sbit  DATLEN0_SPI5_I2SCFGR_bit at SPI5_I2SCFGR.B1;
    sbit  DATLEN1_SPI5_I2SCFGR_bit at SPI5_I2SCFGR.B2;
    sbit  CHLEN_SPI5_I2SCFGR_bit at SPI5_I2SCFGR.B0;

sfr unsigned long   volatile SPI5_I2SPR           absolute 0x40015020;
    sbit  MCKOE_SPI5_I2SPR_bit at SPI5_I2SPR.B9;
    sbit  ODD_SPI5_I2SPR_bit at SPI5_I2SPR.B8;
    sbit  I2SDIV0_SPI5_I2SPR_bit at SPI5_I2SPR.B0;
    sbit  I2SDIV1_SPI5_I2SPR_bit at SPI5_I2SPR.B1;
    sbit  I2SDIV2_SPI5_I2SPR_bit at SPI5_I2SPR.B2;
    sbit  I2SDIV3_SPI5_I2SPR_bit at SPI5_I2SPR.B3;
    sbit  I2SDIV4_SPI5_I2SPR_bit at SPI5_I2SPR.B4;
    sbit  I2SDIV5_SPI5_I2SPR_bit at SPI5_I2SPR.B5;
    sbit  I2SDIV6_SPI5_I2SPR_bit at SPI5_I2SPR.B6;
    sbit  I2SDIV7_SPI5_I2SPR_bit at SPI5_I2SPR.B7;

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
    sbit  SETENA16_NVIC_ISER2_bit at NVIC_ISER2.B16;
    sbit  SETENA17_NVIC_ISER2_bit at NVIC_ISER2.B17;
    sbit  SETENA18_NVIC_ISER2_bit at NVIC_ISER2.B18;
    sbit  SETENA19_NVIC_ISER2_bit at NVIC_ISER2.B19;
    sbit  SETENA20_NVIC_ISER2_bit at NVIC_ISER2.B20;
    sbit  SETENA21_NVIC_ISER2_bit at NVIC_ISER2.B21;
    sbit  SETENA22_NVIC_ISER2_bit at NVIC_ISER2.B22;
    sbit  SETENA23_NVIC_ISER2_bit at NVIC_ISER2.B23;
    sbit  SETENA24_NVIC_ISER2_bit at NVIC_ISER2.B24;
    sbit  SETENA25_NVIC_ISER2_bit at NVIC_ISER2.B25;
    sbit  SETENA26_NVIC_ISER2_bit at NVIC_ISER2.B26;
    sbit  SETENA27_NVIC_ISER2_bit at NVIC_ISER2.B27;
    sbit  SETENA28_NVIC_ISER2_bit at NVIC_ISER2.B28;
    sbit  SETENA29_NVIC_ISER2_bit at NVIC_ISER2.B29;
    sbit  SETENA30_NVIC_ISER2_bit at NVIC_ISER2.B30;
    sbit  SETENA31_NVIC_ISER2_bit at NVIC_ISER2.B31;

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
    sbit  CLRENA16_NVIC_ICER2_bit at NVIC_ICER2.B16;
    sbit  CLRENA17_NVIC_ICER2_bit at NVIC_ICER2.B17;
    sbit  CLRENA18_NVIC_ICER2_bit at NVIC_ICER2.B18;
    sbit  CLRENA19_NVIC_ICER2_bit at NVIC_ICER2.B19;
    sbit  CLRENA20_NVIC_ICER2_bit at NVIC_ICER2.B20;
    sbit  CLRENA21_NVIC_ICER2_bit at NVIC_ICER2.B21;
    sbit  CLRENA22_NVIC_ICER2_bit at NVIC_ICER2.B22;
    sbit  CLRENA23_NVIC_ICER2_bit at NVIC_ICER2.B23;
    sbit  CLRENA24_NVIC_ICER2_bit at NVIC_ICER2.B24;
    sbit  CLRENA25_NVIC_ICER2_bit at NVIC_ICER2.B25;
    sbit  CLRENA26_NVIC_ICER2_bit at NVIC_ICER2.B26;
    sbit  CLRENA27_NVIC_ICER2_bit at NVIC_ICER2.B27;
    sbit  CLRENA28_NVIC_ICER2_bit at NVIC_ICER2.B28;
    sbit  CLRENA29_NVIC_ICER2_bit at NVIC_ICER2.B29;
    sbit  CLRENA30_NVIC_ICER2_bit at NVIC_ICER2.B30;
    sbit  CLRENA31_NVIC_ICER2_bit at NVIC_ICER2.B31;

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
    sbit  SETPEND16_NVIC_ISPR2_bit at NVIC_ISPR2.B16;
    sbit  SETPEND17_NVIC_ISPR2_bit at NVIC_ISPR2.B17;
    sbit  SETPEND18_NVIC_ISPR2_bit at NVIC_ISPR2.B18;
    sbit  SETPEND19_NVIC_ISPR2_bit at NVIC_ISPR2.B19;
    sbit  SETPEND20_NVIC_ISPR2_bit at NVIC_ISPR2.B20;
    sbit  SETPEND21_NVIC_ISPR2_bit at NVIC_ISPR2.B21;
    sbit  SETPEND22_NVIC_ISPR2_bit at NVIC_ISPR2.B22;
    sbit  SETPEND23_NVIC_ISPR2_bit at NVIC_ISPR2.B23;
    sbit  SETPEND24_NVIC_ISPR2_bit at NVIC_ISPR2.B24;
    sbit  SETPEND25_NVIC_ISPR2_bit at NVIC_ISPR2.B25;
    sbit  SETPEND26_NVIC_ISPR2_bit at NVIC_ISPR2.B26;
    sbit  SETPEND27_NVIC_ISPR2_bit at NVIC_ISPR2.B27;
    sbit  SETPEND28_NVIC_ISPR2_bit at NVIC_ISPR2.B28;
    sbit  SETPEND29_NVIC_ISPR2_bit at NVIC_ISPR2.B29;
    sbit  SETPEND30_NVIC_ISPR2_bit at NVIC_ISPR2.B30;
    sbit  SETPEND31_NVIC_ISPR2_bit at NVIC_ISPR2.B31;

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
    sbit  CLRPEND16_NVIC_ICPR2_bit at NVIC_ICPR2.B16;
    sbit  CLRPEND17_NVIC_ICPR2_bit at NVIC_ICPR2.B17;
    sbit  CLRPEND18_NVIC_ICPR2_bit at NVIC_ICPR2.B18;
    sbit  CLRPEND19_NVIC_ICPR2_bit at NVIC_ICPR2.B19;
    sbit  CLRPEND20_NVIC_ICPR2_bit at NVIC_ICPR2.B20;
    sbit  CLRPEND21_NVIC_ICPR2_bit at NVIC_ICPR2.B21;
    sbit  CLRPEND22_NVIC_ICPR2_bit at NVIC_ICPR2.B22;
    sbit  CLRPEND23_NVIC_ICPR2_bit at NVIC_ICPR2.B23;
    sbit  CLRPEND24_NVIC_ICPR2_bit at NVIC_ICPR2.B24;
    sbit  CLRPEND25_NVIC_ICPR2_bit at NVIC_ICPR2.B25;
    sbit  CLRPEND26_NVIC_ICPR2_bit at NVIC_ICPR2.B26;
    sbit  CLRPEND27_NVIC_ICPR2_bit at NVIC_ICPR2.B27;
    sbit  CLRPEND28_NVIC_ICPR2_bit at NVIC_ICPR2.B28;
    sbit  CLRPEND29_NVIC_ICPR2_bit at NVIC_ICPR2.B29;
    sbit  CLRPEND30_NVIC_ICPR2_bit at NVIC_ICPR2.B30;
    sbit  CLRPEND31_NVIC_ICPR2_bit at NVIC_ICPR2.B31;

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
    sbit  ACTIVE16_NVIC_IABR2_bit at NVIC_IABR2.B16;
    sbit  ACTIVE17_NVIC_IABR2_bit at NVIC_IABR2.B17;
    sbit  ACTIVE18_NVIC_IABR2_bit at NVIC_IABR2.B18;
    sbit  ACTIVE19_NVIC_IABR2_bit at NVIC_IABR2.B19;
    sbit  ACTIVE20_NVIC_IABR2_bit at NVIC_IABR2.B20;
    sbit  ACTIVE21_NVIC_IABR2_bit at NVIC_IABR2.B21;
    sbit  ACTIVE22_NVIC_IABR2_bit at NVIC_IABR2.B22;
    sbit  ACTIVE23_NVIC_IABR2_bit at NVIC_IABR2.B23;
    sbit  ACTIVE24_NVIC_IABR2_bit at NVIC_IABR2.B24;
    sbit  ACTIVE25_NVIC_IABR2_bit at NVIC_IABR2.B25;
    sbit  ACTIVE26_NVIC_IABR2_bit at NVIC_IABR2.B26;
    sbit  ACTIVE27_NVIC_IABR2_bit at NVIC_IABR2.B27;
    sbit  ACTIVE28_NVIC_IABR2_bit at NVIC_IABR2.B28;
    sbit  ACTIVE29_NVIC_IABR2_bit at NVIC_IABR2.B29;
    sbit  ACTIVE30_NVIC_IABR2_bit at NVIC_IABR2.B30;
    sbit  ACTIVE31_NVIC_IABR2_bit at NVIC_IABR2.B31;

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

sfr far unsigned long   volatile NVIC_IPR15           absolute 0xE000E43C;
    sbit  IPR_N00_NVIC_IPR15_bit at NVIC_IPR15.B0;
    sbit  IPR_N01_NVIC_IPR15_bit at NVIC_IPR15.B1;
    sbit  IPR_N02_NVIC_IPR15_bit at NVIC_IPR15.B2;
    sbit  IPR_N03_NVIC_IPR15_bit at NVIC_IPR15.B3;
    sbit  IPR_N04_NVIC_IPR15_bit at NVIC_IPR15.B4;
    sbit  IPR_N05_NVIC_IPR15_bit at NVIC_IPR15.B5;
    sbit  IPR_N06_NVIC_IPR15_bit at NVIC_IPR15.B6;
    sbit  IPR_N07_NVIC_IPR15_bit at NVIC_IPR15.B7;
    sbit  IPR_N10_NVIC_IPR15_bit at NVIC_IPR15.B8;
    sbit  IPR_N11_NVIC_IPR15_bit at NVIC_IPR15.B9;
    sbit  IPR_N12_NVIC_IPR15_bit at NVIC_IPR15.B10;
    sbit  IPR_N13_NVIC_IPR15_bit at NVIC_IPR15.B11;
    sbit  IPR_N14_NVIC_IPR15_bit at NVIC_IPR15.B12;
    sbit  IPR_N15_NVIC_IPR15_bit at NVIC_IPR15.B13;
    sbit  IPR_N16_NVIC_IPR15_bit at NVIC_IPR15.B14;
    sbit  IPR_N17_NVIC_IPR15_bit at NVIC_IPR15.B15;
    sbit  IPR_N20_NVIC_IPR15_bit at NVIC_IPR15.B16;
    sbit  IPR_N21_NVIC_IPR15_bit at NVIC_IPR15.B17;
    sbit  IPR_N22_NVIC_IPR15_bit at NVIC_IPR15.B18;
    sbit  IPR_N23_NVIC_IPR15_bit at NVIC_IPR15.B19;
    sbit  IPR_N24_NVIC_IPR15_bit at NVIC_IPR15.B20;
    sbit  IPR_N25_NVIC_IPR15_bit at NVIC_IPR15.B21;
    sbit  IPR_N26_NVIC_IPR15_bit at NVIC_IPR15.B22;
    sbit  IPR_N27_NVIC_IPR15_bit at NVIC_IPR15.B23;
    sbit  IPR_N30_NVIC_IPR15_bit at NVIC_IPR15.B24;
    sbit  IPR_N31_NVIC_IPR15_bit at NVIC_IPR15.B25;
    sbit  IPR_N32_NVIC_IPR15_bit at NVIC_IPR15.B26;
    sbit  IPR_N33_NVIC_IPR15_bit at NVIC_IPR15.B27;
    sbit  IPR_N34_NVIC_IPR15_bit at NVIC_IPR15.B28;
    sbit  IPR_N35_NVIC_IPR15_bit at NVIC_IPR15.B29;
    sbit  IPR_N36_NVIC_IPR15_bit at NVIC_IPR15.B30;
    sbit  IPR_N37_NVIC_IPR15_bit at NVIC_IPR15.B31;

sfr far unsigned long   volatile NVIC_IPR16           absolute 0xE000E440;
    sbit  IPR_N00_NVIC_IPR16_bit at NVIC_IPR16.B0;
    sbit  IPR_N01_NVIC_IPR16_bit at NVIC_IPR16.B1;
    sbit  IPR_N02_NVIC_IPR16_bit at NVIC_IPR16.B2;
    sbit  IPR_N03_NVIC_IPR16_bit at NVIC_IPR16.B3;
    sbit  IPR_N04_NVIC_IPR16_bit at NVIC_IPR16.B4;
    sbit  IPR_N05_NVIC_IPR16_bit at NVIC_IPR16.B5;
    sbit  IPR_N06_NVIC_IPR16_bit at NVIC_IPR16.B6;
    sbit  IPR_N07_NVIC_IPR16_bit at NVIC_IPR16.B7;
    sbit  IPR_N10_NVIC_IPR16_bit at NVIC_IPR16.B8;
    sbit  IPR_N11_NVIC_IPR16_bit at NVIC_IPR16.B9;
    sbit  IPR_N12_NVIC_IPR16_bit at NVIC_IPR16.B10;
    sbit  IPR_N13_NVIC_IPR16_bit at NVIC_IPR16.B11;
    sbit  IPR_N14_NVIC_IPR16_bit at NVIC_IPR16.B12;
    sbit  IPR_N15_NVIC_IPR16_bit at NVIC_IPR16.B13;
    sbit  IPR_N16_NVIC_IPR16_bit at NVIC_IPR16.B14;
    sbit  IPR_N17_NVIC_IPR16_bit at NVIC_IPR16.B15;
    sbit  IPR_N20_NVIC_IPR16_bit at NVIC_IPR16.B16;
    sbit  IPR_N21_NVIC_IPR16_bit at NVIC_IPR16.B17;
    sbit  IPR_N22_NVIC_IPR16_bit at NVIC_IPR16.B18;
    sbit  IPR_N23_NVIC_IPR16_bit at NVIC_IPR16.B19;
    sbit  IPR_N24_NVIC_IPR16_bit at NVIC_IPR16.B20;
    sbit  IPR_N25_NVIC_IPR16_bit at NVIC_IPR16.B21;
    sbit  IPR_N26_NVIC_IPR16_bit at NVIC_IPR16.B22;
    sbit  IPR_N27_NVIC_IPR16_bit at NVIC_IPR16.B23;
    sbit  IPR_N30_NVIC_IPR16_bit at NVIC_IPR16.B24;
    sbit  IPR_N31_NVIC_IPR16_bit at NVIC_IPR16.B25;
    sbit  IPR_N32_NVIC_IPR16_bit at NVIC_IPR16.B26;
    sbit  IPR_N33_NVIC_IPR16_bit at NVIC_IPR16.B27;
    sbit  IPR_N34_NVIC_IPR16_bit at NVIC_IPR16.B28;
    sbit  IPR_N35_NVIC_IPR16_bit at NVIC_IPR16.B29;
    sbit  IPR_N36_NVIC_IPR16_bit at NVIC_IPR16.B30;
    sbit  IPR_N37_NVIC_IPR16_bit at NVIC_IPR16.B31;

sfr far unsigned long   volatile NVIC_IPR17           absolute 0xE000E444;
    sbit  IPR_N00_NVIC_IPR17_bit at NVIC_IPR17.B0;
    sbit  IPR_N01_NVIC_IPR17_bit at NVIC_IPR17.B1;
    sbit  IPR_N02_NVIC_IPR17_bit at NVIC_IPR17.B2;
    sbit  IPR_N03_NVIC_IPR17_bit at NVIC_IPR17.B3;
    sbit  IPR_N04_NVIC_IPR17_bit at NVIC_IPR17.B4;
    sbit  IPR_N05_NVIC_IPR17_bit at NVIC_IPR17.B5;
    sbit  IPR_N06_NVIC_IPR17_bit at NVIC_IPR17.B6;
    sbit  IPR_N07_NVIC_IPR17_bit at NVIC_IPR17.B7;
    sbit  IPR_N10_NVIC_IPR17_bit at NVIC_IPR17.B8;
    sbit  IPR_N11_NVIC_IPR17_bit at NVIC_IPR17.B9;
    sbit  IPR_N12_NVIC_IPR17_bit at NVIC_IPR17.B10;
    sbit  IPR_N13_NVIC_IPR17_bit at NVIC_IPR17.B11;
    sbit  IPR_N14_NVIC_IPR17_bit at NVIC_IPR17.B12;
    sbit  IPR_N15_NVIC_IPR17_bit at NVIC_IPR17.B13;
    sbit  IPR_N16_NVIC_IPR17_bit at NVIC_IPR17.B14;
    sbit  IPR_N17_NVIC_IPR17_bit at NVIC_IPR17.B15;
    sbit  IPR_N20_NVIC_IPR17_bit at NVIC_IPR17.B16;
    sbit  IPR_N21_NVIC_IPR17_bit at NVIC_IPR17.B17;
    sbit  IPR_N22_NVIC_IPR17_bit at NVIC_IPR17.B18;
    sbit  IPR_N23_NVIC_IPR17_bit at NVIC_IPR17.B19;
    sbit  IPR_N24_NVIC_IPR17_bit at NVIC_IPR17.B20;
    sbit  IPR_N25_NVIC_IPR17_bit at NVIC_IPR17.B21;
    sbit  IPR_N26_NVIC_IPR17_bit at NVIC_IPR17.B22;
    sbit  IPR_N27_NVIC_IPR17_bit at NVIC_IPR17.B23;
    sbit  IPR_N30_NVIC_IPR17_bit at NVIC_IPR17.B24;
    sbit  IPR_N31_NVIC_IPR17_bit at NVIC_IPR17.B25;
    sbit  IPR_N32_NVIC_IPR17_bit at NVIC_IPR17.B26;
    sbit  IPR_N33_NVIC_IPR17_bit at NVIC_IPR17.B27;
    sbit  IPR_N34_NVIC_IPR17_bit at NVIC_IPR17.B28;
    sbit  IPR_N35_NVIC_IPR17_bit at NVIC_IPR17.B29;
    sbit  IPR_N36_NVIC_IPR17_bit at NVIC_IPR17.B30;
    sbit  IPR_N37_NVIC_IPR17_bit at NVIC_IPR17.B31;

sfr far unsigned long   volatile NVIC_IPR18           absolute 0xE000E448;
    sbit  IPR_N00_NVIC_IPR18_bit at NVIC_IPR18.B0;
    sbit  IPR_N01_NVIC_IPR18_bit at NVIC_IPR18.B1;
    sbit  IPR_N02_NVIC_IPR18_bit at NVIC_IPR18.B2;
    sbit  IPR_N03_NVIC_IPR18_bit at NVIC_IPR18.B3;
    sbit  IPR_N04_NVIC_IPR18_bit at NVIC_IPR18.B4;
    sbit  IPR_N05_NVIC_IPR18_bit at NVIC_IPR18.B5;
    sbit  IPR_N06_NVIC_IPR18_bit at NVIC_IPR18.B6;
    sbit  IPR_N07_NVIC_IPR18_bit at NVIC_IPR18.B7;
    sbit  IPR_N10_NVIC_IPR18_bit at NVIC_IPR18.B8;
    sbit  IPR_N11_NVIC_IPR18_bit at NVIC_IPR18.B9;
    sbit  IPR_N12_NVIC_IPR18_bit at NVIC_IPR18.B10;
    sbit  IPR_N13_NVIC_IPR18_bit at NVIC_IPR18.B11;
    sbit  IPR_N14_NVIC_IPR18_bit at NVIC_IPR18.B12;
    sbit  IPR_N15_NVIC_IPR18_bit at NVIC_IPR18.B13;
    sbit  IPR_N16_NVIC_IPR18_bit at NVIC_IPR18.B14;
    sbit  IPR_N17_NVIC_IPR18_bit at NVIC_IPR18.B15;
    sbit  IPR_N20_NVIC_IPR18_bit at NVIC_IPR18.B16;
    sbit  IPR_N21_NVIC_IPR18_bit at NVIC_IPR18.B17;
    sbit  IPR_N22_NVIC_IPR18_bit at NVIC_IPR18.B18;
    sbit  IPR_N23_NVIC_IPR18_bit at NVIC_IPR18.B19;
    sbit  IPR_N24_NVIC_IPR18_bit at NVIC_IPR18.B20;
    sbit  IPR_N25_NVIC_IPR18_bit at NVIC_IPR18.B21;
    sbit  IPR_N26_NVIC_IPR18_bit at NVIC_IPR18.B22;
    sbit  IPR_N27_NVIC_IPR18_bit at NVIC_IPR18.B23;
    sbit  IPR_N30_NVIC_IPR18_bit at NVIC_IPR18.B24;
    sbit  IPR_N31_NVIC_IPR18_bit at NVIC_IPR18.B25;
    sbit  IPR_N32_NVIC_IPR18_bit at NVIC_IPR18.B26;
    sbit  IPR_N33_NVIC_IPR18_bit at NVIC_IPR18.B27;
    sbit  IPR_N34_NVIC_IPR18_bit at NVIC_IPR18.B28;
    sbit  IPR_N35_NVIC_IPR18_bit at NVIC_IPR18.B29;
    sbit  IPR_N36_NVIC_IPR18_bit at NVIC_IPR18.B30;
    sbit  IPR_N37_NVIC_IPR18_bit at NVIC_IPR18.B31;

sfr far unsigned long   volatile NVIC_IPR19           absolute 0xE000E44C;
    sbit  IPR_N00_NVIC_IPR19_bit at NVIC_IPR19.B0;
    sbit  IPR_N01_NVIC_IPR19_bit at NVIC_IPR19.B1;
    sbit  IPR_N02_NVIC_IPR19_bit at NVIC_IPR19.B2;
    sbit  IPR_N03_NVIC_IPR19_bit at NVIC_IPR19.B3;
    sbit  IPR_N04_NVIC_IPR19_bit at NVIC_IPR19.B4;
    sbit  IPR_N05_NVIC_IPR19_bit at NVIC_IPR19.B5;
    sbit  IPR_N06_NVIC_IPR19_bit at NVIC_IPR19.B6;
    sbit  IPR_N07_NVIC_IPR19_bit at NVIC_IPR19.B7;
    sbit  IPR_N10_NVIC_IPR19_bit at NVIC_IPR19.B8;
    sbit  IPR_N11_NVIC_IPR19_bit at NVIC_IPR19.B9;
    sbit  IPR_N12_NVIC_IPR19_bit at NVIC_IPR19.B10;
    sbit  IPR_N13_NVIC_IPR19_bit at NVIC_IPR19.B11;
    sbit  IPR_N14_NVIC_IPR19_bit at NVIC_IPR19.B12;
    sbit  IPR_N15_NVIC_IPR19_bit at NVIC_IPR19.B13;
    sbit  IPR_N16_NVIC_IPR19_bit at NVIC_IPR19.B14;
    sbit  IPR_N17_NVIC_IPR19_bit at NVIC_IPR19.B15;
    sbit  IPR_N20_NVIC_IPR19_bit at NVIC_IPR19.B16;
    sbit  IPR_N21_NVIC_IPR19_bit at NVIC_IPR19.B17;
    sbit  IPR_N22_NVIC_IPR19_bit at NVIC_IPR19.B18;
    sbit  IPR_N23_NVIC_IPR19_bit at NVIC_IPR19.B19;
    sbit  IPR_N24_NVIC_IPR19_bit at NVIC_IPR19.B20;
    sbit  IPR_N25_NVIC_IPR19_bit at NVIC_IPR19.B21;
    sbit  IPR_N26_NVIC_IPR19_bit at NVIC_IPR19.B22;
    sbit  IPR_N27_NVIC_IPR19_bit at NVIC_IPR19.B23;
    sbit  IPR_N30_NVIC_IPR19_bit at NVIC_IPR19.B24;
    sbit  IPR_N31_NVIC_IPR19_bit at NVIC_IPR19.B25;
    sbit  IPR_N32_NVIC_IPR19_bit at NVIC_IPR19.B26;
    sbit  IPR_N33_NVIC_IPR19_bit at NVIC_IPR19.B27;
    sbit  IPR_N34_NVIC_IPR19_bit at NVIC_IPR19.B28;
    sbit  IPR_N35_NVIC_IPR19_bit at NVIC_IPR19.B29;
    sbit  IPR_N36_NVIC_IPR19_bit at NVIC_IPR19.B30;
    sbit  IPR_N37_NVIC_IPR19_bit at NVIC_IPR19.B31;

sfr far unsigned long   volatile NVIC_IPR20           absolute 0xE000E450;
    sbit  IPR_N00_NVIC_IPR20_bit at NVIC_IPR20.B0;
    sbit  IPR_N01_NVIC_IPR20_bit at NVIC_IPR20.B1;
    sbit  IPR_N02_NVIC_IPR20_bit at NVIC_IPR20.B2;
    sbit  IPR_N03_NVIC_IPR20_bit at NVIC_IPR20.B3;
    sbit  IPR_N04_NVIC_IPR20_bit at NVIC_IPR20.B4;
    sbit  IPR_N05_NVIC_IPR20_bit at NVIC_IPR20.B5;
    sbit  IPR_N06_NVIC_IPR20_bit at NVIC_IPR20.B6;
    sbit  IPR_N07_NVIC_IPR20_bit at NVIC_IPR20.B7;
    sbit  IPR_N10_NVIC_IPR20_bit at NVIC_IPR20.B8;
    sbit  IPR_N11_NVIC_IPR20_bit at NVIC_IPR20.B9;
    sbit  IPR_N12_NVIC_IPR20_bit at NVIC_IPR20.B10;
    sbit  IPR_N13_NVIC_IPR20_bit at NVIC_IPR20.B11;
    sbit  IPR_N14_NVIC_IPR20_bit at NVIC_IPR20.B12;
    sbit  IPR_N15_NVIC_IPR20_bit at NVIC_IPR20.B13;
    sbit  IPR_N16_NVIC_IPR20_bit at NVIC_IPR20.B14;
    sbit  IPR_N17_NVIC_IPR20_bit at NVIC_IPR20.B15;
    sbit  IPR_N20_NVIC_IPR20_bit at NVIC_IPR20.B16;
    sbit  IPR_N21_NVIC_IPR20_bit at NVIC_IPR20.B17;
    sbit  IPR_N22_NVIC_IPR20_bit at NVIC_IPR20.B18;
    sbit  IPR_N23_NVIC_IPR20_bit at NVIC_IPR20.B19;
    sbit  IPR_N24_NVIC_IPR20_bit at NVIC_IPR20.B20;
    sbit  IPR_N25_NVIC_IPR20_bit at NVIC_IPR20.B21;
    sbit  IPR_N26_NVIC_IPR20_bit at NVIC_IPR20.B22;
    sbit  IPR_N27_NVIC_IPR20_bit at NVIC_IPR20.B23;
    sbit  IPR_N30_NVIC_IPR20_bit at NVIC_IPR20.B24;
    sbit  IPR_N31_NVIC_IPR20_bit at NVIC_IPR20.B25;
    sbit  IPR_N32_NVIC_IPR20_bit at NVIC_IPR20.B26;
    sbit  IPR_N33_NVIC_IPR20_bit at NVIC_IPR20.B27;
    sbit  IPR_N34_NVIC_IPR20_bit at NVIC_IPR20.B28;
    sbit  IPR_N35_NVIC_IPR20_bit at NVIC_IPR20.B29;
    sbit  IPR_N36_NVIC_IPR20_bit at NVIC_IPR20.B30;
    sbit  IPR_N37_NVIC_IPR20_bit at NVIC_IPR20.B31;

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

sfr unsigned long   volatile RNG_CR               absolute 0x40080000;
    const register unsigned short int IE = 3;
    sbit  IE_bit at RNG_CR.B3;
    sbit  RNGEN_RNG_CR_bit at RNG_CR.B2;

sfr unsigned long   volatile RNG_SR               absolute 0x40080004;
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

sfr unsigned long   volatile RNG_DR               absolute 0x40080008;
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

sfr unsigned long   volatile LPTIM1_ISR           absolute 0x40002400;
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

sfr unsigned long   volatile LPTIM1_ICR           absolute 0x40002404;
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

sfr unsigned long   volatile LPTIM1_IER           absolute 0x40002408;
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

sfr unsigned long   volatile LPTIM1_CFGR          absolute 0x4000240C;
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
    const register unsigned short int PRESC0 = 9;
    sbit  PRESC0_bit at LPTIM1_CFGR.B9;
    const register unsigned short int PRESC1 = 10;
    sbit  PRESC1_bit at LPTIM1_CFGR.B10;
    const register unsigned short int PRESC2 = 11;
    sbit  PRESC2_bit at LPTIM1_CFGR.B11;
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

sfr unsigned long   volatile LPTIM1_CR            absolute 0x40002410;
    const register unsigned short int CNTSTRT = 2;
    sbit  CNTSTRT_bit at LPTIM1_CR.B2;
    const register unsigned short int SNGSTRT = 1;
    sbit  SNGSTRT_bit at LPTIM1_CR.B1;
    sbit  ENABLE_LPTIM1_CR_bit at LPTIM1_CR.B0;

sfr unsigned long   volatile LPTIM1_CMP           absolute 0x40002414;
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

sfr unsigned long   volatile LPTIM1_ARR           absolute 0x40002418;
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

sfr unsigned long   volatile LPTIM1_CNT           absolute 0x4000241C;
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

sfr unsigned long   volatile LPTIM1_OPTR          absolute 0x40002420;
    const register unsigned short int OR0 = 0;
    sbit  OR0_bit at LPTIM1_OPTR.B0;
    const register unsigned short int OR1 = 1;
    sbit  OR1_bit at LPTIM1_OPTR.B1;

sfr unsigned long   volatile I2C4_CR1             absolute 0x40006000;
    sbit  PE_I2C4_CR1_bit at I2C4_CR1.B0;
    const register unsigned short int TXIE = 1;
    sbit  TXIE_bit at I2C4_CR1.B1;
    const register unsigned short int RXIE = 2;
    sbit  RXIE_bit at I2C4_CR1.B2;
    const register unsigned short int ADDRIE = 3;
    sbit  ADDRIE_bit at I2C4_CR1.B3;
    const register unsigned short int NACKIE = 4;
    sbit  NACKIE_bit at I2C4_CR1.B4;
    const register unsigned short int STOPIE = 5;
    sbit  STOPIE_bit at I2C4_CR1.B5;
    sbit  TCIE_I2C4_CR1_bit at I2C4_CR1.B6;
    sbit  ERRIE_I2C4_CR1_bit at I2C4_CR1.B7;
    const register unsigned short int DNF0 = 8;
    sbit  DNF0_bit at I2C4_CR1.B8;
    const register unsigned short int DNF1 = 9;
    sbit  DNF1_bit at I2C4_CR1.B9;
    const register unsigned short int DNF2 = 10;
    sbit  DNF2_bit at I2C4_CR1.B10;
    const register unsigned short int DNF3 = 11;
    sbit  DNF3_bit at I2C4_CR1.B11;
    const register unsigned short int ANFOFF = 12;
    sbit  ANFOFF_bit at I2C4_CR1.B12;
    sbit  TXDMAEN_I2C4_CR1_bit at I2C4_CR1.B14;
    sbit  RXDMAEN_I2C4_CR1_bit at I2C4_CR1.B15;
    const register unsigned short int SBC = 16;
    sbit  SBC_bit at I2C4_CR1.B16;
    sbit  NOSTRETCH_I2C4_CR1_bit at I2C4_CR1.B17;
    const register unsigned short int WUPEN = 18;
    sbit  WUPEN_bit at I2C4_CR1.B18;
    const register unsigned short int GCEN = 19;
    sbit  GCEN_bit at I2C4_CR1.B19;
    const register unsigned short int SMBHEN = 20;
    sbit  SMBHEN_bit at I2C4_CR1.B20;
    const register unsigned short int SMBDEN = 21;
    sbit  SMBDEN_bit at I2C4_CR1.B21;
    const register unsigned short int ALERTEN = 22;
    sbit  ALERTEN_bit at I2C4_CR1.B22;
    const register unsigned short int PECEN = 23;
    sbit  PECEN_bit at I2C4_CR1.B23;

sfr unsigned long   volatile I2C4_CR2             absolute 0x40006004;
    const register unsigned short int PECBYTE = 26;
    sbit  PECBYTE_bit at I2C4_CR2.B26;
    const register unsigned short int AUTOEND = 25;
    sbit  AUTOEND_bit at I2C4_CR2.B25;
    const register unsigned short int RELOAD = 24;
    sbit  RELOAD_bit at I2C4_CR2.B24;
    const register unsigned short int NBYTES0 = 16;
    sbit  NBYTES0_bit at I2C4_CR2.B16;
    const register unsigned short int NBYTES1 = 17;
    sbit  NBYTES1_bit at I2C4_CR2.B17;
    const register unsigned short int NBYTES2 = 18;
    sbit  NBYTES2_bit at I2C4_CR2.B18;
    const register unsigned short int NBYTES3 = 19;
    sbit  NBYTES3_bit at I2C4_CR2.B19;
    const register unsigned short int NBYTES4 = 20;
    sbit  NBYTES4_bit at I2C4_CR2.B20;
    const register unsigned short int NBYTES5 = 21;
    sbit  NBYTES5_bit at I2C4_CR2.B21;
    const register unsigned short int NBYTES6 = 22;
    sbit  NBYTES6_bit at I2C4_CR2.B22;
    const register unsigned short int NBYTES7 = 23;
    sbit  NBYTES7_bit at I2C4_CR2.B23;
    sbit  NACK_I2C4_CR2_bit at I2C4_CR2.B15;
    sbit  STOP_I2C4_CR2_bit at I2C4_CR2.B14;
    sbit  START_I2C4_CR2_bit at I2C4_CR2.B13;
    const register unsigned short int HEAD10R = 12;
    sbit  HEAD10R_bit at I2C4_CR2.B12;
    sbit  ADD10_I2C4_CR2_bit at I2C4_CR2.B11;
    const register unsigned short int RD_WRN = 10;
    sbit  RD_WRN_bit at I2C4_CR2.B10;
    const register unsigned short int SADD0 = 0;
    sbit  SADD0_bit at I2C4_CR2.B0;
    const register unsigned short int SADD1 = 1;
    sbit  SADD1_bit at I2C4_CR2.B1;
    const register unsigned short int SADD2 = 2;
    sbit  SADD2_bit at I2C4_CR2.B2;
    const register unsigned short int SADD3 = 3;
    sbit  SADD3_bit at I2C4_CR2.B3;
    const register unsigned short int SADD4 = 4;
    sbit  SADD4_bit at I2C4_CR2.B4;
    const register unsigned short int SADD5 = 5;
    sbit  SADD5_bit at I2C4_CR2.B5;
    const register unsigned short int SADD6 = 6;
    sbit  SADD6_bit at I2C4_CR2.B6;
    const register unsigned short int SADD7 = 7;
    sbit  SADD7_bit at I2C4_CR2.B7;
    const register unsigned short int SADD8 = 8;
    sbit  SADD8_bit at I2C4_CR2.B8;
    const register unsigned short int SADD9 = 9;
    sbit  SADD9_bit at I2C4_CR2.B9;

sfr unsigned long   volatile I2C4_OAR1            absolute 0x40006008;
    const register unsigned short int OA10 = 0;
    sbit  OA10_bit at I2C4_OAR1.B0;
    const register unsigned short int OA11 = 1;
    sbit  OA11_bit at I2C4_OAR1.B1;
    const register unsigned short int OA12 = 2;
    sbit  OA12_bit at I2C4_OAR1.B2;
    const register unsigned short int OA13 = 3;
    sbit  OA13_bit at I2C4_OAR1.B3;
    const register unsigned short int OA14 = 4;
    sbit  OA14_bit at I2C4_OAR1.B4;
    const register unsigned short int OA15 = 5;
    sbit  OA15_bit at I2C4_OAR1.B5;
    const register unsigned short int OA16 = 6;
    sbit  OA16_bit at I2C4_OAR1.B6;
    const register unsigned short int OA17 = 7;
    sbit  OA17_bit at I2C4_OAR1.B7;
    const register unsigned short int OA18 = 8;
    sbit  OA18_bit at I2C4_OAR1.B8;
    const register unsigned short int OA19 = 9;
    sbit  OA19_bit at I2C4_OAR1.B9;
    const register unsigned short int OA1MODE = 10;
    sbit  OA1MODE_bit at I2C4_OAR1.B10;
    const register unsigned short int OA1EN = 15;
    sbit  OA1EN_bit at I2C4_OAR1.B15;

sfr unsigned long   volatile I2C4_OAR2            absolute 0x4000600C;
    const register unsigned short int OA20 = 1;
    sbit  OA20_bit at I2C4_OAR2.B1;
    const register unsigned short int OA21 = 2;
    sbit  OA21_bit at I2C4_OAR2.B2;
    const register unsigned short int OA22 = 3;
    sbit  OA22_bit at I2C4_OAR2.B3;
    const register unsigned short int OA23 = 4;
    sbit  OA23_bit at I2C4_OAR2.B4;
    const register unsigned short int OA24 = 5;
    sbit  OA24_bit at I2C4_OAR2.B5;
    const register unsigned short int OA25 = 6;
    sbit  OA25_bit at I2C4_OAR2.B6;
    const register unsigned short int OA26 = 7;
    sbit  OA26_bit at I2C4_OAR2.B7;
    const register unsigned short int OA2MSK0 = 8;
    sbit  OA2MSK0_bit at I2C4_OAR2.B8;
    const register unsigned short int OA2MSK1 = 9;
    sbit  OA2MSK1_bit at I2C4_OAR2.B9;
    const register unsigned short int OA2MSK2 = 10;
    sbit  OA2MSK2_bit at I2C4_OAR2.B10;
    const register unsigned short int OA2EN = 15;
    sbit  OA2EN_bit at I2C4_OAR2.B15;

sfr unsigned long   volatile I2C4_TIMINGR         absolute 0x40006010;
    const register unsigned short int SCLL0 = 0;
    sbit  SCLL0_bit at I2C4_TIMINGR.B0;
    const register unsigned short int SCLL1 = 1;
    sbit  SCLL1_bit at I2C4_TIMINGR.B1;
    const register unsigned short int SCLL2 = 2;
    sbit  SCLL2_bit at I2C4_TIMINGR.B2;
    const register unsigned short int SCLL3 = 3;
    sbit  SCLL3_bit at I2C4_TIMINGR.B3;
    const register unsigned short int SCLL4 = 4;
    sbit  SCLL4_bit at I2C4_TIMINGR.B4;
    const register unsigned short int SCLL5 = 5;
    sbit  SCLL5_bit at I2C4_TIMINGR.B5;
    const register unsigned short int SCLL6 = 6;
    sbit  SCLL6_bit at I2C4_TIMINGR.B6;
    const register unsigned short int SCLL7 = 7;
    sbit  SCLL7_bit at I2C4_TIMINGR.B7;
    const register unsigned short int SCLH0 = 8;
    sbit  SCLH0_bit at I2C4_TIMINGR.B8;
    const register unsigned short int SCLH1 = 9;
    sbit  SCLH1_bit at I2C4_TIMINGR.B9;
    const register unsigned short int SCLH2 = 10;
    sbit  SCLH2_bit at I2C4_TIMINGR.B10;
    const register unsigned short int SCLH3 = 11;
    sbit  SCLH3_bit at I2C4_TIMINGR.B11;
    const register unsigned short int SCLH4 = 12;
    sbit  SCLH4_bit at I2C4_TIMINGR.B12;
    const register unsigned short int SCLH5 = 13;
    sbit  SCLH5_bit at I2C4_TIMINGR.B13;
    const register unsigned short int SCLH6 = 14;
    sbit  SCLH6_bit at I2C4_TIMINGR.B14;
    const register unsigned short int SCLH7 = 15;
    sbit  SCLH7_bit at I2C4_TIMINGR.B15;
    const register unsigned short int SDADEL0 = 16;
    sbit  SDADEL0_bit at I2C4_TIMINGR.B16;
    const register unsigned short int SDADEL1 = 17;
    sbit  SDADEL1_bit at I2C4_TIMINGR.B17;
    const register unsigned short int SDADEL2 = 18;
    sbit  SDADEL2_bit at I2C4_TIMINGR.B18;
    const register unsigned short int SDADEL3 = 19;
    sbit  SDADEL3_bit at I2C4_TIMINGR.B19;
    const register unsigned short int SCLDEL0 = 20;
    sbit  SCLDEL0_bit at I2C4_TIMINGR.B20;
    const register unsigned short int SCLDEL1 = 21;
    sbit  SCLDEL1_bit at I2C4_TIMINGR.B21;
    const register unsigned short int SCLDEL2 = 22;
    sbit  SCLDEL2_bit at I2C4_TIMINGR.B22;
    const register unsigned short int SCLDEL3 = 23;
    sbit  SCLDEL3_bit at I2C4_TIMINGR.B23;
    sbit  PRESC0_I2C4_TIMINGR_bit at I2C4_TIMINGR.B28;
    sbit  PRESC1_I2C4_TIMINGR_bit at I2C4_TIMINGR.B29;
    sbit  PRESC2_I2C4_TIMINGR_bit at I2C4_TIMINGR.B30;
    const register unsigned short int PRESC3 = 31;
    sbit  PRESC3_bit at I2C4_TIMINGR.B31;

sfr unsigned long   volatile I2C4_TIMEOUTR        absolute 0x40006014;
    const register unsigned short int TIMEOUTA0 = 0;
    sbit  TIMEOUTA0_bit at I2C4_TIMEOUTR.B0;
    const register unsigned short int TIMEOUTA1 = 1;
    sbit  TIMEOUTA1_bit at I2C4_TIMEOUTR.B1;
    const register unsigned short int TIMEOUTA2 = 2;
    sbit  TIMEOUTA2_bit at I2C4_TIMEOUTR.B2;
    const register unsigned short int TIMEOUTA3 = 3;
    sbit  TIMEOUTA3_bit at I2C4_TIMEOUTR.B3;
    const register unsigned short int TIMEOUTA4 = 4;
    sbit  TIMEOUTA4_bit at I2C4_TIMEOUTR.B4;
    const register unsigned short int TIMEOUTA5 = 5;
    sbit  TIMEOUTA5_bit at I2C4_TIMEOUTR.B5;
    const register unsigned short int TIMEOUTA6 = 6;
    sbit  TIMEOUTA6_bit at I2C4_TIMEOUTR.B6;
    const register unsigned short int TIMEOUTA7 = 7;
    sbit  TIMEOUTA7_bit at I2C4_TIMEOUTR.B7;
    const register unsigned short int TIMEOUTA8 = 8;
    sbit  TIMEOUTA8_bit at I2C4_TIMEOUTR.B8;
    const register unsigned short int TIMEOUTA9 = 9;
    sbit  TIMEOUTA9_bit at I2C4_TIMEOUTR.B9;
    const register unsigned short int TIMEOUTA10 = 10;
    sbit  TIMEOUTA10_bit at I2C4_TIMEOUTR.B10;
    const register unsigned short int TIMEOUTA11 = 11;
    sbit  TIMEOUTA11_bit at I2C4_TIMEOUTR.B11;
    const register unsigned short int TIDLE = 12;
    sbit  TIDLE_bit at I2C4_TIMEOUTR.B12;
    const register unsigned short int TIMOUTEN = 15;
    sbit  TIMOUTEN_bit at I2C4_TIMEOUTR.B15;
    const register unsigned short int TIMEOUTB0 = 16;
    sbit  TIMEOUTB0_bit at I2C4_TIMEOUTR.B16;
    const register unsigned short int TIMEOUTB1 = 17;
    sbit  TIMEOUTB1_bit at I2C4_TIMEOUTR.B17;
    const register unsigned short int TIMEOUTB2 = 18;
    sbit  TIMEOUTB2_bit at I2C4_TIMEOUTR.B18;
    const register unsigned short int TIMEOUTB3 = 19;
    sbit  TIMEOUTB3_bit at I2C4_TIMEOUTR.B19;
    const register unsigned short int TIMEOUTB4 = 20;
    sbit  TIMEOUTB4_bit at I2C4_TIMEOUTR.B20;
    const register unsigned short int TIMEOUTB5 = 21;
    sbit  TIMEOUTB5_bit at I2C4_TIMEOUTR.B21;
    const register unsigned short int TIMEOUTB6 = 22;
    sbit  TIMEOUTB6_bit at I2C4_TIMEOUTR.B22;
    const register unsigned short int TIMEOUTB7 = 23;
    sbit  TIMEOUTB7_bit at I2C4_TIMEOUTR.B23;
    const register unsigned short int TIMEOUTB8 = 24;
    sbit  TIMEOUTB8_bit at I2C4_TIMEOUTR.B24;
    const register unsigned short int TIMEOUTB9 = 25;
    sbit  TIMEOUTB9_bit at I2C4_TIMEOUTR.B25;
    const register unsigned short int TIMEOUTB10 = 26;
    sbit  TIMEOUTB10_bit at I2C4_TIMEOUTR.B26;
    const register unsigned short int TIMEOUTB11 = 27;
    sbit  TIMEOUTB11_bit at I2C4_TIMEOUTR.B27;
    const register unsigned short int TEXTEN = 31;
    sbit  TEXTEN_bit at I2C4_TIMEOUTR.B31;

sfr unsigned long   volatile I2C4_ISR             absolute 0x40006018;
    const register unsigned short int ADDCODE0 = 17;
    sbit  ADDCODE0_bit at I2C4_ISR.B17;
    const register unsigned short int ADDCODE1 = 18;
    sbit  ADDCODE1_bit at I2C4_ISR.B18;
    const register unsigned short int ADDCODE2 = 19;
    sbit  ADDCODE2_bit at I2C4_ISR.B19;
    const register unsigned short int ADDCODE3 = 20;
    sbit  ADDCODE3_bit at I2C4_ISR.B20;
    const register unsigned short int ADDCODE4 = 21;
    sbit  ADDCODE4_bit at I2C4_ISR.B21;
    const register unsigned short int ADDCODE5 = 22;
    sbit  ADDCODE5_bit at I2C4_ISR.B22;
    const register unsigned short int ADDCODE6 = 23;
    sbit  ADDCODE6_bit at I2C4_ISR.B23;
    sbit  DIR_I2C4_ISR_bit at I2C4_ISR.B16;
    sbit  BUSY_I2C4_ISR_bit at I2C4_ISR.B15;
    sbit  ALERT_I2C4_ISR_bit at I2C4_ISR.B13;
    sbit  TIMEOUT_I2C4_ISR_bit at I2C4_ISR.B12;
    sbit  PECERR_I2C4_ISR_bit at I2C4_ISR.B11;
    sbit  OVR_I2C4_ISR_bit at I2C4_ISR.B10;
    sbit  ARLO_I2C4_ISR_bit at I2C4_ISR.B9;
    sbit  BERR_I2C4_ISR_bit at I2C4_ISR.B8;
    const register unsigned short int TCR = 7;
    sbit  TCR_bit at I2C4_ISR.B7;
    sbit  TC_I2C4_ISR_bit at I2C4_ISR.B6;
    sbit  STOPF_I2C4_ISR_bit at I2C4_ISR.B5;
    const register unsigned short int NACKF = 4;
    sbit  NACKF_bit at I2C4_ISR.B4;
    sbit  ADDR_I2C4_ISR_bit at I2C4_ISR.B3;
    sbit  RXNE_I2C4_ISR_bit at I2C4_ISR.B2;
    const register unsigned short int TXIS = 1;
    sbit  TXIS_bit at I2C4_ISR.B1;
    sbit  TXE_I2C4_ISR_bit at I2C4_ISR.B0;

sfr unsigned long   volatile I2C4_ICR             absolute 0x4000601C;
    const register unsigned short int ALERTCF = 13;
    sbit  ALERTCF_bit at I2C4_ICR.B13;
    const register unsigned short int TIMOUTCF = 12;
    sbit  TIMOUTCF_bit at I2C4_ICR.B12;
    const register unsigned short int PECCF = 11;
    sbit  PECCF_bit at I2C4_ICR.B11;
    const register unsigned short int OVRCF = 10;
    sbit  OVRCF_bit at I2C4_ICR.B10;
    const register unsigned short int ARLOCF = 9;
    sbit  ARLOCF_bit at I2C4_ICR.B9;
    const register unsigned short int BERRCF = 8;
    sbit  BERRCF_bit at I2C4_ICR.B8;
    const register unsigned short int STOPCF = 5;
    sbit  STOPCF_bit at I2C4_ICR.B5;
    const register unsigned short int NACKCF = 4;
    sbit  NACKCF_bit at I2C4_ICR.B4;
    const register unsigned short int ADDRCF = 3;
    sbit  ADDRCF_bit at I2C4_ICR.B3;

sfr unsigned long   volatile I2C4_PECR            absolute 0x40006020;
    sbit  PEC0_I2C4_PECR_bit at I2C4_PECR.B0;
    sbit  PEC1_I2C4_PECR_bit at I2C4_PECR.B1;
    sbit  PEC2_I2C4_PECR_bit at I2C4_PECR.B2;
    sbit  PEC3_I2C4_PECR_bit at I2C4_PECR.B3;
    sbit  PEC4_I2C4_PECR_bit at I2C4_PECR.B4;
    sbit  PEC5_I2C4_PECR_bit at I2C4_PECR.B5;
    sbit  PEC6_I2C4_PECR_bit at I2C4_PECR.B6;
    sbit  PEC7_I2C4_PECR_bit at I2C4_PECR.B7;

sfr unsigned long   volatile I2C4_RXDR            absolute 0x40006024;
    const register unsigned short int RXDATA0 = 0;
    sbit  RXDATA0_bit at I2C4_RXDR.B0;
    const register unsigned short int RXDATA1 = 1;
    sbit  RXDATA1_bit at I2C4_RXDR.B1;
    const register unsigned short int RXDATA2 = 2;
    sbit  RXDATA2_bit at I2C4_RXDR.B2;
    const register unsigned short int RXDATA3 = 3;
    sbit  RXDATA3_bit at I2C4_RXDR.B3;
    const register unsigned short int RXDATA4 = 4;
    sbit  RXDATA4_bit at I2C4_RXDR.B4;
    const register unsigned short int RXDATA5 = 5;
    sbit  RXDATA5_bit at I2C4_RXDR.B5;
    const register unsigned short int RXDATA6 = 6;
    sbit  RXDATA6_bit at I2C4_RXDR.B6;
    const register unsigned short int RXDATA7 = 7;
    sbit  RXDATA7_bit at I2C4_RXDR.B7;

sfr unsigned long   volatile I2C4_TXDR            absolute 0x40006028;
    const register unsigned short int TXDATA0 = 0;
    sbit  TXDATA0_bit at I2C4_TXDR.B0;
    const register unsigned short int TXDATA1 = 1;
    sbit  TXDATA1_bit at I2C4_TXDR.B1;
    const register unsigned short int TXDATA2 = 2;
    sbit  TXDATA2_bit at I2C4_TXDR.B2;
    const register unsigned short int TXDATA3 = 3;
    sbit  TXDATA3_bit at I2C4_TXDR.B3;
    const register unsigned short int TXDATA4 = 4;
    sbit  TXDATA4_bit at I2C4_TXDR.B4;
    const register unsigned short int TXDATA5 = 5;
    sbit  TXDATA5_bit at I2C4_TXDR.B5;
    const register unsigned short int TXDATA6 = 6;
    sbit  TXDATA6_bit at I2C4_TXDR.B6;
    const register unsigned short int TXDATA7 = 7;
    sbit  TXDATA7_bit at I2C4_TXDR.B7;


 typedef struct tagADC_CSRBITS {
  union {
    struct {
      unsigned AWD1 : 1;
      unsigned EOC1 : 1;
      unsigned JEOC1 : 1;
      unsigned JSTRT1 : 1;
      unsigned STRT1 : 1;
      unsigned OVR1 : 1;
      unsigned : 2;
      unsigned AWD2 : 1;
      unsigned EOC2 : 1;
      unsigned JEOC2 : 1;
      unsigned JSTRT2 : 1;
      unsigned STRT2 : 1;
      unsigned OVR2 : 1;
      unsigned : 2;
      unsigned AWD3 : 1;
      unsigned EOC3 : 1;
      unsigned JEOC3 : 1;
      unsigned JSTRT3 : 1;
      unsigned STRT3 : 1;
      unsigned OVR3 : 1;
      unsigned : 10;
    };
  };
} typeADC_CSRBITS;
sfr volatile typeADC_CSRBITS ADC_CSRbits absolute 0x40012300;

 typedef struct tagADC_CCRBITS {
  union {
    struct {
      unsigned : 8;
      unsigned DELAY : 4;
      unsigned : 1;
      unsigned DDS : 1;
      unsigned DMA : 2;
      unsigned ADCPRE : 2;
      unsigned : 4;
      unsigned VBATE : 1;
      unsigned TSVREFE : 1;
      unsigned : 8;
    };
  };
} typeADC_CCRBITS;
sfr volatile typeADC_CCRBITS ADC_CCRbits absolute 0x40012304;

 typedef struct tagADC1_SRBITS {
  union {
    struct {
      unsigned AWD : 1;
      unsigned EOC : 1;
      unsigned JEOC : 1;
      unsigned JSTRT : 1;
      unsigned STRT : 1;
      unsigned OVR : 1;
      unsigned : 26;
    };
  };
} typeADC1_SRBITS;
sfr volatile typeADC1_SRBITS ADC1_SRbits absolute 0x40012000;

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
      unsigned RES : 2;
      unsigned OVRIE : 1;
      unsigned : 5;
    };
  };
} typeADC1_CR1BITS;
sfr volatile typeADC1_CR1BITS ADC1_CR1bits absolute 0x40012004;

 typedef struct tagADC1_CR2BITS {
  union {
    struct {
      unsigned ADON : 1;
      unsigned CONT : 1;
      unsigned : 6;
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
} typeADC1_CR2BITS;
sfr volatile typeADC1_CR2BITS ADC1_CR2bits absolute 0x40012008;

 typedef struct tagADC1_SMPR1BITS {
  union {
    struct {
      unsigned SMPx_x : 32;
    };
  };
} typeADC1_SMPR1BITS;
sfr volatile typeADC1_SMPR1BITS ADC1_SMPR1bits absolute 0x4001200C;

 typedef struct tagADC1_SMPR2BITS {
  union {
    struct {
      unsigned SMPx_x : 32;
    };
  };
} typeADC1_SMPR2BITS;
sfr volatile typeADC1_SMPR2BITS ADC1_SMPR2bits absolute 0x40012010;

 typedef struct tagADC1_JOFR1BITS {
  union {
    struct {
      unsigned JOFFSET1 : 12;
      unsigned : 20;
    };
  };
} typeADC1_JOFR1BITS;
sfr volatile typeADC1_JOFR1BITS ADC1_JOFR1bits absolute 0x40012014;

 typedef struct tagADC1_JOFR2BITS {
  union {
    struct {
      unsigned JOFFSET2 : 12;
      unsigned : 20;
    };
  };
} typeADC1_JOFR2BITS;
sfr volatile typeADC1_JOFR2BITS ADC1_JOFR2bits absolute 0x40012018;

 typedef struct tagADC1_JOFR3BITS {
  union {
    struct {
      unsigned JOFFSET3 : 12;
      unsigned : 20;
    };
  };
} typeADC1_JOFR3BITS;
sfr volatile typeADC1_JOFR3BITS ADC1_JOFR3bits absolute 0x4001201C;

 typedef struct tagADC1_JOFR4BITS {
  union {
    struct {
      unsigned JOFFSET4 : 12;
      unsigned : 20;
    };
  };
} typeADC1_JOFR4BITS;
sfr volatile typeADC1_JOFR4BITS ADC1_JOFR4bits absolute 0x40012020;

 typedef struct tagADC1_HTRBITS {
  union {
    struct {
      unsigned HT : 12;
      unsigned : 20;
    };
  };
} typeADC1_HTRBITS;
sfr volatile typeADC1_HTRBITS ADC1_HTRbits absolute 0x40012024;

 typedef struct tagADC1_LTRBITS {
  union {
    struct {
      unsigned LT : 12;
      unsigned : 20;
    };
  };
} typeADC1_LTRBITS;
sfr volatile typeADC1_LTRBITS ADC1_LTRbits absolute 0x40012028;

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
sfr volatile typeADC1_SQR1BITS ADC1_SQR1bits absolute 0x4001202C;

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
sfr volatile typeADC1_SQR2BITS ADC1_SQR2bits absolute 0x40012030;

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
sfr volatile typeADC1_SQR3BITS ADC1_SQR3bits absolute 0x40012034;

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
sfr volatile typeADC1_JSQRBITS ADC1_JSQRbits absolute 0x40012038;

 typedef struct tagADC1_JDR1BITS {
  union {
    struct {
      unsigned JDATA : 16;
      unsigned : 16;
    };
  };
} typeADC1_JDR1BITS;
sfr volatile typeADC1_JDR1BITS ADC1_JDR1bits absolute 0x4001203C;

 typedef struct tagADC1_JDR2BITS {
  union {
    struct {
      unsigned JDATA : 16;
      unsigned : 16;
    };
  };
} typeADC1_JDR2BITS;
sfr volatile typeADC1_JDR2BITS ADC1_JDR2bits absolute 0x40012040;

 typedef struct tagADC1_JDR3BITS {
  union {
    struct {
      unsigned JDATA : 16;
      unsigned : 16;
    };
  };
} typeADC1_JDR3BITS;
sfr volatile typeADC1_JDR3BITS ADC1_JDR3bits absolute 0x40012044;

 typedef struct tagADC1_JDR4BITS {
  union {
    struct {
      unsigned JDATA : 16;
      unsigned : 16;
    };
  };
} typeADC1_JDR4BITS;
sfr volatile typeADC1_JDR4BITS ADC1_JDR4bits absolute 0x40012048;

 typedef struct tagADC1_DRBITS {
  union {
    struct {
      unsigned DATA : 16;
      unsigned : 16;
    };
  };
} typeADC1_DRBITS;
sfr volatile typeADC1_DRBITS ADC1_DRbits absolute 0x4001204C;

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
      unsigned CR : 1;
      unsigned : 31;
    };
  };
} typeCRC_CRBITS;
sfr volatile typeCRC_CRBITS CRC_CRbits absolute 0x40023008;

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
      unsigned : 24;
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
      unsigned : 6;
      unsigned DBG_RTC_Stop : 1;
      unsigned DBG_WWDG_STOP : 1;
      unsigned DBG_IWDEG_STOP : 1;
      unsigned : 8;
      unsigned DBG_I2C1_SMBUS_TIMEOUT : 1;
      unsigned DBG_I2C2_SMBUS_TIMEOUT : 1;
      unsigned DBG_I2C3SMBUS_TIMEOUT : 1;
      unsigned : 8;
    };
  };
} typeDBG_DBGMCU_APB1_FZBITS;
sfr far volatile typeDBG_DBGMCU_APB1_FZBITS DBG_DBGMCU_APB1_FZbits absolute 0xE0042008;

 typedef struct tagDBG_DBGMCU_APB2_FZBITS {
  union {
    struct {
      unsigned DBG_TIM1_STOP : 1;
      unsigned : 15;
      unsigned DBG_TIM9_STOP : 1;
      unsigned DBG_TIM10_STOP : 1;
      unsigned DBG_TIM11_STOP : 1;
      unsigned : 13;
    };
  };
} typeDBG_DBGMCU_APB2_FZBITS;
sfr far volatile typeDBG_DBGMCU_APB2_FZBITS DBG_DBGMCU_APB2_FZbits absolute 0xE004200C;

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
      unsigned : 9;
    };
  };
} typeEXTI_IMRBITS;
sfr volatile typeEXTI_IMRBITS EXTI_IMRbits absolute 0x40013C00;

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
      unsigned : 9;
    };
  };
} typeEXTI_EMRBITS;
sfr volatile typeEXTI_EMRBITS EXTI_EMRbits absolute 0x40013C04;

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
      unsigned TR18 : 1;
      unsigned TR19 : 1;
      unsigned TR20 : 1;
      unsigned TR21 : 1;
      unsigned TR22 : 1;
      unsigned : 9;
    };
  };
} typeEXTI_RTSRBITS;
sfr volatile typeEXTI_RTSRBITS EXTI_RTSRbits absolute 0x40013C08;

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
      unsigned TR18 : 1;
      unsigned TR19 : 1;
      unsigned TR20 : 1;
      unsigned TR21 : 1;
      unsigned TR22 : 1;
      unsigned : 9;
    };
  };
} typeEXTI_FTSRBITS;
sfr volatile typeEXTI_FTSRBITS EXTI_FTSRbits absolute 0x40013C0C;

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
      unsigned SWIER18 : 1;
      unsigned SWIER19 : 1;
      unsigned SWIER20 : 1;
      unsigned SWIER21 : 1;
      unsigned SWIER22 : 1;
      unsigned : 9;
    };
  };
} typeEXTI_SWIERBITS;
sfr volatile typeEXTI_SWIERBITS EXTI_SWIERbits absolute 0x40013C10;

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
      unsigned PR18 : 1;
      unsigned PR19 : 1;
      unsigned PR20 : 1;
      unsigned PR21 : 1;
      unsigned PR22 : 1;
      unsigned : 9;
    };
  };
} typeEXTI_PRBITS;
sfr volatile typeEXTI_PRBITS EXTI_PRbits absolute 0x40013C14;

 typedef struct tagFLASH_ACRBITS {
  union {
    struct {
      unsigned LATENCY : 3;
      unsigned : 5;
      unsigned PRFTEN : 1;
      unsigned ICEN : 1;
      unsigned DCEN : 1;
      unsigned ICRST : 1;
      unsigned DCRST : 1;
      unsigned : 19;
    };
  };
} typeFLASH_ACRBITS;
sfr volatile typeFLASH_ACRBITS FLASH_ACRbits absolute 0x40023C00;

 typedef struct tagFLASH_KEYRBITS {
  union {
    struct {
      unsigned KEY : 32;
    };
  };
} typeFLASH_KEYRBITS;
sfr volatile typeFLASH_KEYRBITS FLASH_KEYRbits absolute 0x40023C04;

 typedef struct tagFLASH_OPTKEYRBITS {
  union {
    struct {
      unsigned OPTKEY : 32;
    };
  };
} typeFLASH_OPTKEYRBITS;
sfr volatile typeFLASH_OPTKEYRBITS FLASH_OPTKEYRbits absolute 0x40023C08;

 typedef struct tagFLASH_SRBITS {
  union {
    struct {
      unsigned EOP : 1;
      unsigned OPERR : 1;
      unsigned : 2;
      unsigned WRPERR : 1;
      unsigned PGAERR : 1;
      unsigned PGPERR : 1;
      unsigned PGSERR : 1;
      unsigned : 8;
      unsigned BSY : 1;
      unsigned : 15;
    };
  };
} typeFLASH_SRBITS;
sfr volatile typeFLASH_SRBITS FLASH_SRbits absolute 0x40023C0C;

 typedef struct tagFLASH_CRBITS {
  union {
    struct {
      unsigned PG : 1;
      unsigned SER : 1;
      unsigned MER : 1;
      unsigned SNB : 4;
      unsigned : 1;
      unsigned PSIZE : 2;
      unsigned : 6;
      unsigned STRT : 1;
      unsigned : 7;
      unsigned EOPIE : 1;
      unsigned ERRIE : 1;
      unsigned : 5;
      unsigned LOCK_ : 1;
    };
  };
} typeFLASH_CRBITS;
sfr volatile typeFLASH_CRBITS FLASH_CRbits absolute 0x40023C10;

 typedef struct tagFLASH_OPTCRBITS {
  union {
    struct {
      unsigned OPTLOCK : 1;
      unsigned OPTSTRT : 1;
      unsigned BOR_LEV : 2;
      unsigned : 1;
      unsigned WDG_SW : 1;
      unsigned nRST_STOP : 1;
      unsigned nRST_STDBY : 1;
      unsigned RDP : 8;
      unsigned nWRP : 5;
      unsigned : 10;
      unsigned SPRMOD : 1;
    };
  };
} typeFLASH_OPTCRBITS;
sfr volatile typeFLASH_OPTCRBITS FLASH_OPTCRbits absolute 0x40023C14;

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
      unsigned : 3;
      unsigned ADCDC1 : 1;
      unsigned VOS : 2;
      unsigned : 16;
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
      unsigned : 2;
      unsigned EWUP3 : 1;
      unsigned EWUP2 : 1;
      unsigned EWUP1 : 1;
      unsigned BRE : 1;
      unsigned : 4;
      unsigned VOSRDY : 1;
      unsigned : 17;
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
sfr volatile typeRCC_CRBITS RCC_CRbits absolute 0x40023800;

 typedef struct tagRCC_PLLCFGRBITS {
  union {
    struct {
      unsigned PLLM0 : 1;
      unsigned PLLM1 : 1;
      unsigned PLLM2 : 1;
      unsigned PLLM3 : 1;
      unsigned PLLM4 : 1;
      unsigned PLLM5 : 1;
      unsigned PLLN0 : 1;
      unsigned PLLN1 : 1;
      unsigned PLLN2 : 1;
      unsigned PLLN3 : 1;
      unsigned PLLN4 : 1;
      unsigned PLLN5 : 1;
      unsigned PLLN6 : 1;
      unsigned PLLN7 : 1;
      unsigned PLLN8 : 1;
      unsigned : 1;
      unsigned PLLP0 : 1;
      unsigned PLLP1 : 1;
      unsigned : 4;
      unsigned PLLSRC : 1;
      unsigned : 1;
      unsigned PLLQ0 : 1;
      unsigned PLLQ1 : 1;
      unsigned PLLQ2 : 1;
      unsigned PLLQ3 : 1;
      unsigned PLLR1 : 1;
      unsigned PLLR2 : 1;
      unsigned PLLR3 : 1;
      unsigned : 1;
    };
  };
} typeRCC_PLLCFGRBITS;
sfr volatile typeRCC_PLLCFGRBITS RCC_PLLCFGRbits absolute 0x40023804;

 typedef struct tagRCC_CFGRBITS {
  union {
    struct {
      unsigned SW0 : 1;
      unsigned SW1 : 1;
      unsigned SWS0 : 1;
      unsigned SWS1 : 1;
      unsigned HPRE : 4;
      unsigned MCO1EN : 1;
      unsigned MCO2EN : 1;
      unsigned PPRE1 : 3;
      unsigned PPRE2 : 3;
      unsigned RTCPRE : 5;
      unsigned MCO1 : 2;
      unsigned : 1;
      unsigned MCO1PRE : 3;
      unsigned MCO2PRE : 3;
      unsigned MCO2 : 2;
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
      unsigned PLLI2SRDYC : 1;
      unsigned : 1;
      unsigned CSSC : 1;
      unsigned : 8;
    };
  };
} typeRCC_CIRBITS;
sfr volatile typeRCC_CIRBITS RCC_CIRbits absolute 0x4002380C;

 typedef struct tagRCC_AHB1RSTRBITS {
  union {
    struct {
      unsigned GPIOARST : 1;
      unsigned GPIOBRST : 1;
      unsigned GPIOCRST : 1;
      unsigned : 4;
      unsigned GPIOHRST : 1;
      unsigned : 4;
      unsigned CRCRST : 1;
      unsigned : 8;
      unsigned DMA1RST : 1;
      unsigned DMA2RST : 1;
      unsigned : 8;
      unsigned RNGRST : 1;
    };
  };
} typeRCC_AHB1RSTRBITS;
sfr volatile typeRCC_AHB1RSTRBITS RCC_AHB1RSTRbits absolute 0x40023810;

 typedef struct tagRCC_APB1RSTRBITS {
  union {
    struct {
      unsigned : 3;
      unsigned TIM5RST : 1;
      unsigned TIM6RST : 1;
      unsigned : 4;
      unsigned LPTIM1RST : 1;
      unsigned : 1;
      unsigned WWDGRST : 1;
      unsigned : 2;
      unsigned SPI2RST : 1;
      unsigned : 2;
      unsigned UART2RST : 1;
      unsigned : 3;
      unsigned I2C1RST : 1;
      unsigned I2C2RST : 1;
      unsigned : 1;
      unsigned I2C4RST : 1;
      unsigned : 3;
      unsigned PWRRST : 1;
      unsigned DACRST : 1;
      unsigned : 2;
    };
  };
} typeRCC_APB1RSTRBITS;
sfr volatile typeRCC_APB1RSTRBITS RCC_APB1RSTRbits absolute 0x40023820;

 typedef struct tagRCC_APB2RSTRBITS {
  union {
    struct {
      unsigned TIM1RST : 1;
      unsigned : 3;
      unsigned USART1RST : 1;
      unsigned USART6RST : 1;
      unsigned : 2;
      unsigned ADCRST : 1;
      unsigned : 3;
      unsigned SPI1RST : 1;
      unsigned : 1;
      unsigned SYSCFGRST : 1;
      unsigned : 1;
      unsigned TIM9RST : 1;
      unsigned : 1;
      unsigned TIM11RST : 1;
      unsigned : 1;
      unsigned SPI5RST : 1;
      unsigned : 11;
    };
  };
} typeRCC_APB2RSTRBITS;
sfr volatile typeRCC_APB2RSTRBITS RCC_APB2RSTRbits absolute 0x40023824;

 typedef struct tagRCC_AHB1ENRBITS {
  union {
    struct {
      unsigned GPIOAEN : 1;
      unsigned GPIOBEN : 1;
      unsigned GPIOCEN : 1;
      unsigned : 4;
      unsigned GPIOHEN : 1;
      unsigned : 4;
      unsigned CRCEN : 1;
      unsigned : 8;
      unsigned DMA1EN : 1;
      unsigned DMA2EN : 1;
      unsigned : 8;
      unsigned RNGEN : 1;
    };
  };
} typeRCC_AHB1ENRBITS;
sfr volatile typeRCC_AHB1ENRBITS RCC_AHB1ENRbits absolute 0x40023830;

 typedef struct tagRCC_APB1ENRBITS {
  union {
    struct {
      unsigned : 3;
      unsigned TIM5EN : 1;
      unsigned TIM6EN : 1;
      unsigned : 4;
      unsigned LPTIM1EN : 1;
      unsigned RTCAPBEN : 1;
      unsigned WWDGEN : 1;
      unsigned : 2;
      unsigned SPI2EN : 1;
      unsigned : 2;
      unsigned USART2EN : 1;
      unsigned : 3;
      unsigned I2C1EN : 1;
      unsigned I2C2EN : 1;
      unsigned : 1;
      unsigned I2C4EN : 1;
      unsigned : 3;
      unsigned PWREN : 1;
      unsigned DACEN : 1;
      unsigned : 2;
    };
  };
} typeRCC_APB1ENRBITS;
sfr volatile typeRCC_APB1ENRBITS RCC_APB1ENRbits absolute 0x40023840;

 typedef struct tagRCC_APB2ENRBITS {
  union {
    struct {
      unsigned TIM1EN : 1;
      unsigned : 3;
      unsigned USART1EN : 1;
      unsigned USART6EN : 1;
      unsigned : 2;
      unsigned ADC1EN : 1;
      unsigned : 3;
      unsigned SPI1EN : 1;
      unsigned : 1;
      unsigned SYSCFGEN : 1;
      unsigned EXTITEN : 1;
      unsigned TIM9EN : 1;
      unsigned : 1;
      unsigned TIM11EN : 1;
      unsigned : 1;
      unsigned SPI5EN : 1;
      unsigned : 11;
    };
  };
} typeRCC_APB2ENRBITS;
sfr volatile typeRCC_APB2ENRBITS RCC_APB2ENRbits absolute 0x40023844;

 typedef struct tagRCC_AHB1LPENRBITS {
  union {
    struct {
      unsigned GPIOALPEN : 1;
      unsigned GPIOBLPEN : 1;
      unsigned GPIOCLPEN : 1;
      unsigned : 4;
      unsigned GPIOHLPEN : 1;
      unsigned : 4;
      unsigned CRCLPEN : 1;
      unsigned : 2;
      unsigned FLITFLPEN : 1;
      unsigned SRAM1LPEN : 1;
      unsigned : 4;
      unsigned DMA1LPEN : 1;
      unsigned DMA2LPEN : 1;
      unsigned : 8;
      unsigned RNGLPEN : 1;
    };
  };
} typeRCC_AHB1LPENRBITS;
sfr volatile typeRCC_AHB1LPENRBITS RCC_AHB1LPENRbits absolute 0x40023850;

 typedef struct tagRCC_APB1LPENRBITS {
  union {
    struct {
      unsigned : 3;
      unsigned TIM5LPEN : 1;
      unsigned TIM6LPEN : 1;
      unsigned : 4;
      unsigned LPTIM1LPEN : 1;
      unsigned RTCAPBLPEN : 1;
      unsigned WWDGLPEN : 1;
      unsigned : 2;
      unsigned SPI2LPEN : 1;
      unsigned : 2;
      unsigned USART2LPEN : 1;
      unsigned : 3;
      unsigned I2C1LPEN : 1;
      unsigned I2C2LPEN : 1;
      unsigned : 1;
      unsigned I2C4LPEN : 1;
      unsigned : 3;
      unsigned PWRLPEN : 1;
      unsigned DACLPEN : 1;
      unsigned : 2;
    };
  };
} typeRCC_APB1LPENRBITS;
sfr volatile typeRCC_APB1LPENRBITS RCC_APB1LPENRbits absolute 0x40023860;

 typedef struct tagRCC_APB2LPENRBITS {
  union {
    struct {
      unsigned TIM1LPEN : 1;
      unsigned : 3;
      unsigned USART1LPEN : 1;
      unsigned USART6LPEN : 1;
      unsigned : 2;
      unsigned ADC1LPEN : 1;
      unsigned : 2;
      unsigned SDIOLPEN : 1;
      unsigned SPI1LPEN : 1;
      unsigned : 1;
      unsigned SYSCFGLPEN : 1;
      unsigned EXTITLPEN : 1;
      unsigned TIM9LPEN : 1;
      unsigned : 1;
      unsigned TIM11LPEN : 1;
      unsigned : 1;
      unsigned SPI5LPEN : 1;
      unsigned : 11;
    };
  };
} typeRCC_APB2LPENRBITS;
sfr volatile typeRCC_APB2LPENRBITS RCC_APB2LPENRbits absolute 0x40023864;

 typedef struct tagRCC_BDCRBITS {
  union {
    struct {
      unsigned LSEON : 1;
      unsigned LSERDY : 1;
      unsigned LSEBYP : 1;
      unsigned : 5;
      unsigned RTCSEL0 : 1;
      unsigned RTCSEL1 : 1;
      unsigned : 5;
      unsigned RTCEN : 1;
      unsigned BDRST : 1;
      unsigned : 15;
    };
  };
} typeRCC_BDCRBITS;
sfr volatile typeRCC_BDCRBITS RCC_BDCRbits absolute 0x40023870;

 typedef struct tagRCC_CSRBITS {
  union {
    struct {
      unsigned LSION : 1;
      unsigned LSIRDY : 1;
      unsigned : 22;
      unsigned RMVF : 1;
      unsigned BORRSTF : 1;
      unsigned PADRSTF : 1;
      unsigned PORRSTF : 1;
      unsigned SFTRSTF : 1;
      unsigned WDGRSTF : 1;
      unsigned WWDGRSTF : 1;
      unsigned LPWRRSTF : 1;
    };
  };
} typeRCC_CSRBITS;
sfr volatile typeRCC_CSRBITS RCC_CSRbits absolute 0x40023874;

 typedef struct tagRCC_SSCGRBITS {
  union {
    struct {
      unsigned MODPER : 13;
      unsigned INCSTEP : 15;
      unsigned : 2;
      unsigned SPREADSEL : 1;
      unsigned SSCGEN : 1;
    };
  };
} typeRCC_SSCGRBITS;
sfr volatile typeRCC_SSCGRBITS RCC_SSCGRbits absolute 0x40023880;

 typedef struct tagRCC_DCKCFGRBITS {
  union {
    struct {
      unsigned : 24;
      unsigned TIMPRE : 1;
      unsigned I2SSRC : 2;
      unsigned : 5;
    };
  };
} typeRCC_DCKCFGRBITS;
sfr volatile typeRCC_DCKCFGRBITS RCC_DCKCFGRbits absolute 0x4002388C;

 typedef struct tagRCC_DCKCFGR2BITS {
  union {
    struct {
      unsigned : 22;
      unsigned I2C4SEL : 2;
      unsigned : 6;
      unsigned LPTIM1SEL : 2;
    };
  };
} typeRCC_DCKCFGR2BITS;
sfr volatile typeRCC_DCKCFGR2BITS RCC_DCKCFGR2bits absolute 0x40023894;

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
      unsigned TAMP1TRG : 1;
      unsigned TAMPIE : 1;
      unsigned TAMP2E : 1;
      unsigned TAMP2TRG : 1;
      unsigned : 2;
      unsigned TAMPTS : 1;
      unsigned TAMPFREQ : 3;
      unsigned TAMPFLT : 2;
      unsigned TAMPPRCH : 2;
      unsigned TAMPPUDIS : 1;
      unsigned TAMP1INSEL : 1;
      unsigned TSINSEL : 1;
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

 typedef struct tagSYSCFG_MEMRMBITS {
  union {
    struct {
      unsigned MEM_MODE : 2;
      unsigned : 30;
    };
  };
} typeSYSCFG_MEMRMBITS;
sfr volatile typeSYSCFG_MEMRMBITS SYSCFG_MEMRMbits absolute 0x40013800;

 typedef struct tagSYSCFG_PMCBITS {
  union {
    struct {
      unsigned : 16;
      unsigned ADC1DC2 : 1;
      unsigned : 15;
    };
  };
} typeSYSCFG_PMCBITS;
sfr volatile typeSYSCFG_PMCBITS SYSCFG_PMCbits absolute 0x40013804;

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
sfr volatile typeSYSCFG_EXTICR1BITS SYSCFG_EXTICR1bits absolute 0x40013808;

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
sfr volatile typeSYSCFG_EXTICR2BITS SYSCFG_EXTICR2bits absolute 0x4001380C;

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
sfr volatile typeSYSCFG_EXTICR3BITS SYSCFG_EXTICR3bits absolute 0x40013810;

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
sfr volatile typeSYSCFG_EXTICR4BITS SYSCFG_EXTICR4bits absolute 0x40013814;

 typedef struct tagSYSCFG_CMPCRBITS {
  union {
    struct {
      unsigned CMP_PD : 1;
      unsigned : 7;
      unsigned READY : 1;
      unsigned : 23;
    };
  };
} typeSYSCFG_CMPCRBITS;
sfr volatile typeSYSCFG_CMPCRBITS SYSCFG_CMPCRbits absolute 0x40013820;

 typedef struct tagSYSCFG_CFGRBITS {
  union {
    struct {
      unsigned FMPI2C1_SCL : 1;
      unsigned FMPI2C1_SDA : 1;
      unsigned : 30;
    };
  };
} typeSYSCFG_CFGRBITS;
sfr volatile typeSYSCFG_CFGRBITS SYSCFG_CFGRbits absolute 0x4001382C;

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
sfr volatile typeTIM1_CR1BITS TIM1_CR1bits absolute 0x40010000;

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
sfr volatile typeTIM1_CR2BITS TIM1_CR2bits absolute 0x40010004;

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
sfr volatile typeTIM1_SMCRBITS TIM1_SMCRbits absolute 0x40010008;

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
sfr volatile typeTIM1_DIERBITS TIM1_DIERbits absolute 0x4001000C;

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
sfr volatile typeTIM1_SRBITS TIM1_SRbits absolute 0x40010010;

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
sfr volatile typeTIM1_EGRBITS TIM1_EGRbits absolute 0x40010014;

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
sfr volatile typeTIM1_CCMR1_OutputBITS TIM1_CCMR1_Outputbits absolute 0x40010018;

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
sfr volatile typeTIM1_CCMR1_InputBITS TIM1_CCMR1_Inputbits absolute 0x40010018;

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
sfr volatile typeTIM1_CCMR2_OutputBITS TIM1_CCMR2_Outputbits absolute 0x4001001C;

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
sfr volatile typeTIM1_CCMR2_InputBITS TIM1_CCMR2_Inputbits absolute 0x4001001C;

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
sfr volatile typeTIM1_CCERBITS TIM1_CCERbits absolute 0x40010020;

 typedef struct tagTIM1_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
    };
  };
} typeTIM1_CNTBITS;
sfr volatile typeTIM1_CNTBITS TIM1_CNTbits absolute 0x40010024;

 typedef struct tagTIM1_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM1_PSCBITS;
sfr volatile typeTIM1_PSCBITS TIM1_PSCbits absolute 0x40010028;

 typedef struct tagTIM1_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM1_ARRBITS;
sfr volatile typeTIM1_ARRBITS TIM1_ARRbits absolute 0x4001002C;

 typedef struct tagTIM1_CCR1BITS {
  union {
    struct {
      unsigned CCR1 : 16;
      unsigned : 16;
    };
  };
} typeTIM1_CCR1BITS;
sfr volatile typeTIM1_CCR1BITS TIM1_CCR1bits absolute 0x40010034;

 typedef struct tagTIM1_CCR2BITS {
  union {
    struct {
      unsigned CCR2 : 16;
      unsigned : 16;
    };
  };
} typeTIM1_CCR2BITS;
sfr volatile typeTIM1_CCR2BITS TIM1_CCR2bits absolute 0x40010038;

 typedef struct tagTIM1_CCR3BITS {
  union {
    struct {
      unsigned CCR3 : 16;
      unsigned : 16;
    };
  };
} typeTIM1_CCR3BITS;
sfr volatile typeTIM1_CCR3BITS TIM1_CCR3bits absolute 0x4001003C;

 typedef struct tagTIM1_CCR4BITS {
  union {
    struct {
      unsigned CCR4 : 16;
      unsigned : 16;
    };
  };
} typeTIM1_CCR4BITS;
sfr volatile typeTIM1_CCR4BITS TIM1_CCR4bits absolute 0x40010040;

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
sfr volatile typeTIM1_DCRBITS TIM1_DCRbits absolute 0x40010048;

 typedef struct tagTIM1_DMARBITS {
  union {
    struct {
      unsigned DMAB : 16;
      unsigned : 16;
    };
  };
} typeTIM1_DMARBITS;
sfr volatile typeTIM1_DMARBITS TIM1_DMARbits absolute 0x4001004C;

 typedef struct tagTIM1_RCRBITS {
  union {
    struct {
      unsigned REP : 8;
      unsigned : 24;
    };
  };
} typeTIM1_RCRBITS;
sfr volatile typeTIM1_RCRBITS TIM1_RCRbits absolute 0x40010030;

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
sfr volatile typeTIM1_BDTRBITS TIM1_BDTRbits absolute 0x40010044;

 typedef struct tagTIM8_CR1BITS {
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
} typeTIM8_CR1BITS;
sfr volatile typeTIM8_CR1BITS TIM8_CR1bits absolute 0x40010400;

 typedef struct tagTIM8_CR2BITS {
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
} typeTIM8_CR2BITS;
sfr volatile typeTIM8_CR2BITS TIM8_CR2bits absolute 0x40010404;

 typedef struct tagTIM8_SMCRBITS {
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
} typeTIM8_SMCRBITS;
sfr volatile typeTIM8_SMCRBITS TIM8_SMCRbits absolute 0x40010408;

 typedef struct tagTIM8_DIERBITS {
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
} typeTIM8_DIERBITS;
sfr volatile typeTIM8_DIERBITS TIM8_DIERbits absolute 0x4001040C;

 typedef struct tagTIM8_SRBITS {
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
} typeTIM8_SRBITS;
sfr volatile typeTIM8_SRBITS TIM8_SRbits absolute 0x40010410;

 typedef struct tagTIM8_EGRBITS {
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
} typeTIM8_EGRBITS;
sfr volatile typeTIM8_EGRBITS TIM8_EGRbits absolute 0x40010414;

 typedef struct tagTIM8_CCMR1_OutputBITS {
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
} typeTIM8_CCMR1_OutputBITS;
sfr volatile typeTIM8_CCMR1_OutputBITS TIM8_CCMR1_Outputbits absolute 0x40010418;

 typedef struct tagTIM8_CCMR1_InputBITS {
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
} typeTIM8_CCMR1_InputBITS;
sfr volatile typeTIM8_CCMR1_InputBITS TIM8_CCMR1_Inputbits absolute 0x40010418;

 typedef struct tagTIM8_CCMR2_OutputBITS {
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
} typeTIM8_CCMR2_OutputBITS;
sfr volatile typeTIM8_CCMR2_OutputBITS TIM8_CCMR2_Outputbits absolute 0x4001041C;

 typedef struct tagTIM8_CCMR2_InputBITS {
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
} typeTIM8_CCMR2_InputBITS;
sfr volatile typeTIM8_CCMR2_InputBITS TIM8_CCMR2_Inputbits absolute 0x4001041C;

 typedef struct tagTIM8_CCERBITS {
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
} typeTIM8_CCERBITS;
sfr volatile typeTIM8_CCERBITS TIM8_CCERbits absolute 0x40010420;

 typedef struct tagTIM8_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
    };
  };
} typeTIM8_CNTBITS;
sfr volatile typeTIM8_CNTBITS TIM8_CNTbits absolute 0x40010424;

 typedef struct tagTIM8_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM8_PSCBITS;
sfr volatile typeTIM8_PSCBITS TIM8_PSCbits absolute 0x40010428;

 typedef struct tagTIM8_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM8_ARRBITS;
sfr volatile typeTIM8_ARRBITS TIM8_ARRbits absolute 0x4001042C;

 typedef struct tagTIM8_CCR1BITS {
  union {
    struct {
      unsigned CCR1 : 16;
      unsigned : 16;
    };
  };
} typeTIM8_CCR1BITS;
sfr volatile typeTIM8_CCR1BITS TIM8_CCR1bits absolute 0x40010434;

 typedef struct tagTIM8_CCR2BITS {
  union {
    struct {
      unsigned CCR2 : 16;
      unsigned : 16;
    };
  };
} typeTIM8_CCR2BITS;
sfr volatile typeTIM8_CCR2BITS TIM8_CCR2bits absolute 0x40010438;

 typedef struct tagTIM8_CCR3BITS {
  union {
    struct {
      unsigned CCR3 : 16;
      unsigned : 16;
    };
  };
} typeTIM8_CCR3BITS;
sfr volatile typeTIM8_CCR3BITS TIM8_CCR3bits absolute 0x4001043C;

 typedef struct tagTIM8_CCR4BITS {
  union {
    struct {
      unsigned CCR4 : 16;
      unsigned : 16;
    };
  };
} typeTIM8_CCR4BITS;
sfr volatile typeTIM8_CCR4BITS TIM8_CCR4bits absolute 0x40010440;

 typedef struct tagTIM8_DCRBITS {
  union {
    struct {
      unsigned DBA : 5;
      unsigned : 3;
      unsigned DBL : 5;
      unsigned : 19;
    };
  };
} typeTIM8_DCRBITS;
sfr volatile typeTIM8_DCRBITS TIM8_DCRbits absolute 0x40010448;

 typedef struct tagTIM8_DMARBITS {
  union {
    struct {
      unsigned DMAB : 16;
      unsigned : 16;
    };
  };
} typeTIM8_DMARBITS;
sfr volatile typeTIM8_DMARBITS TIM8_DMARbits absolute 0x4001044C;

 typedef struct tagTIM8_RCRBITS {
  union {
    struct {
      unsigned REP : 8;
      unsigned : 24;
    };
  };
} typeTIM8_RCRBITS;
sfr volatile typeTIM8_RCRBITS TIM8_RCRbits absolute 0x40010430;

 typedef struct tagTIM8_BDTRBITS {
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
} typeTIM8_BDTRBITS;
sfr volatile typeTIM8_BDTRBITS TIM8_BDTRbits absolute 0x40010444;

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
sfr volatile typeTIM11_CR1BITS TIM11_CR1bits absolute 0x40014800;

 typedef struct tagTIM11_DIERBITS {
  union {
    struct {
      unsigned UIE : 1;
      unsigned CC1IE : 1;
      unsigned : 30;
    };
  };
} typeTIM11_DIERBITS;
sfr volatile typeTIM11_DIERBITS TIM11_DIERbits absolute 0x4001480C;

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
sfr volatile typeTIM11_SRBITS TIM11_SRbits absolute 0x40014810;

 typedef struct tagTIM11_EGRBITS {
  union {
    struct {
      unsigned UG : 1;
      unsigned CC1G : 1;
      unsigned : 30;
    };
  };
} typeTIM11_EGRBITS;
sfr volatile typeTIM11_EGRBITS TIM11_EGRbits absolute 0x40014814;

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
sfr volatile typeTIM11_CCMR1_OutputBITS TIM11_CCMR1_Outputbits absolute 0x40014818;

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
sfr volatile typeTIM11_CCMR1_InputBITS TIM11_CCMR1_Inputbits absolute 0x40014818;

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
sfr volatile typeTIM11_CCERBITS TIM11_CCERbits absolute 0x40014820;

 typedef struct tagTIM11_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
    };
  };
} typeTIM11_CNTBITS;
sfr volatile typeTIM11_CNTBITS TIM11_CNTbits absolute 0x40014824;

 typedef struct tagTIM11_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM11_PSCBITS;
sfr volatile typeTIM11_PSCBITS TIM11_PSCbits absolute 0x40014828;

 typedef struct tagTIM11_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM11_ARRBITS;
sfr volatile typeTIM11_ARRBITS TIM11_ARRbits absolute 0x4001482C;

 typedef struct tagTIM11_CCR1BITS {
  union {
    struct {
      unsigned CCR1 : 16;
      unsigned : 16;
    };
  };
} typeTIM11_CCR1BITS;
sfr volatile typeTIM11_CCR1BITS TIM11_CCR1bits absolute 0x40014834;

 typedef struct tagTIM11_ORBITS {
  union {
    struct {
      unsigned RMP : 2;
      unsigned : 30;
    };
  };
} typeTIM11_ORBITS;
sfr volatile typeTIM11_ORBITS TIM11_ORbits absolute 0x40014850;

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
      unsigned CC4S : 2;
      unsigned OC4FE : 1;
      unsigned OC4PE : 1;
      unsigned OC4M : 3;
      unsigned O24CE : 1;
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
      unsigned CNT_L : 16;
      unsigned CNT_H : 16;
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
      unsigned ARR_L : 16;
      unsigned ARR_H : 16;
    };
  };
} typeTIM5_ARRBITS;
sfr volatile typeTIM5_ARRBITS TIM5_ARRbits absolute 0x40000C2C;

 typedef struct tagTIM5_CCR1BITS {
  union {
    struct {
      unsigned CCR1_L : 16;
      unsigned CCR1_H : 16;
    };
  };
} typeTIM5_CCR1BITS;
sfr volatile typeTIM5_CCR1BITS TIM5_CCR1bits absolute 0x40000C34;

 typedef struct tagTIM5_CCR2BITS {
  union {
    struct {
      unsigned CCR2_L : 16;
      unsigned CCR2_H : 16;
    };
  };
} typeTIM5_CCR2BITS;
sfr volatile typeTIM5_CCR2BITS TIM5_CCR2bits absolute 0x40000C38;

 typedef struct tagTIM5_CCR3BITS {
  union {
    struct {
      unsigned CCR3_L : 16;
      unsigned CCR3_H : 16;
    };
  };
} typeTIM5_CCR3BITS;
sfr volatile typeTIM5_CCR3BITS TIM5_CCR3bits absolute 0x40000C3C;

 typedef struct tagTIM5_CCR4BITS {
  union {
    struct {
      unsigned CCR4_L : 16;
      unsigned CCR4_H : 16;
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

 typedef struct tagTIM5_ORBITS {
  union {
    struct {
      unsigned : 6;
      unsigned IT4_RMP : 2;
      unsigned : 24;
    };
  };
} typeTIM5_ORBITS;
sfr volatile typeTIM5_ORBITS TIM5_ORbits absolute 0x40000C50;

 typedef struct tagTIM9_CR1BITS {
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
} typeTIM9_CR1BITS;
sfr volatile typeTIM9_CR1BITS TIM9_CR1bits absolute 0x40014000;

 typedef struct tagTIM9_CR2BITS {
  union {
    struct {
      unsigned : 4;
      unsigned MMS : 3;
      unsigned : 25;
    };
  };
} typeTIM9_CR2BITS;
sfr volatile typeTIM9_CR2BITS TIM9_CR2bits absolute 0x40014004;

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
sfr volatile typeTIM9_SMCRBITS TIM9_SMCRbits absolute 0x40014008;

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
sfr volatile typeTIM9_DIERBITS TIM9_DIERbits absolute 0x4001400C;

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
sfr volatile typeTIM9_SRBITS TIM9_SRbits absolute 0x40014010;

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
sfr volatile typeTIM9_EGRBITS TIM9_EGRbits absolute 0x40014014;

 typedef struct tagTIM9_CCMR1_OutputBITS {
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
} typeTIM9_CCMR1_OutputBITS;
sfr volatile typeTIM9_CCMR1_OutputBITS TIM9_CCMR1_Outputbits absolute 0x40014018;

 typedef struct tagTIM9_CCMR1_InputBITS {
  union {
    struct {
      unsigned CC1S : 2;
      unsigned ICPCS : 2;
      unsigned IC1F : 3;
      unsigned : 1;
      unsigned CC2S : 2;
      unsigned IC2PCS : 2;
      unsigned IC2F : 3;
      unsigned : 17;
    };
  };
} typeTIM9_CCMR1_InputBITS;
sfr volatile typeTIM9_CCMR1_InputBITS TIM9_CCMR1_Inputbits absolute 0x40014018;

 typedef struct tagTIM9_CCERBITS {
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
} typeTIM9_CCERBITS;
sfr volatile typeTIM9_CCERBITS TIM9_CCERbits absolute 0x40014020;

 typedef struct tagTIM9_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
    };
  };
} typeTIM9_CNTBITS;
sfr volatile typeTIM9_CNTBITS TIM9_CNTbits absolute 0x40014024;

 typedef struct tagTIM9_PSCBITS {
  union {
    struct {
      unsigned PSC : 16;
      unsigned : 16;
    };
  };
} typeTIM9_PSCBITS;
sfr volatile typeTIM9_PSCBITS TIM9_PSCbits absolute 0x40014028;

 typedef struct tagTIM9_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeTIM9_ARRBITS;
sfr volatile typeTIM9_ARRBITS TIM9_ARRbits absolute 0x4001402C;

 typedef struct tagTIM9_CCR1BITS {
  union {
    struct {
      unsigned CCR1 : 16;
      unsigned : 16;
    };
  };
} typeTIM9_CCR1BITS;
sfr volatile typeTIM9_CCR1BITS TIM9_CCR1bits absolute 0x40014034;

 typedef struct tagTIM9_CCR2BITS {
  union {
    struct {
      unsigned CCR2 : 16;
      unsigned : 16;
    };
  };
} typeTIM9_CCR2BITS;
sfr volatile typeTIM9_CCR2BITS TIM9_CCR2bits absolute 0x40014038;

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
sfr volatile typeUSART1_SRBITS USART1_SRbits absolute 0x40011000;

 typedef struct tagUSART1_DRBITS {
  union {
    struct {
      unsigned DR : 9;
      unsigned : 23;
    };
  };
} typeUSART1_DRBITS;
sfr volatile typeUSART1_DRBITS USART1_DRbits absolute 0x40011004;

 typedef struct tagUSART1_BRRBITS {
  union {
    struct {
      unsigned DIV_Fraction : 4;
      unsigned DIV_Mantissa : 12;
      unsigned : 16;
    };
  };
} typeUSART1_BRRBITS;
sfr volatile typeUSART1_BRRBITS USART1_BRRbits absolute 0x40011008;

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
sfr volatile typeUSART1_CR1BITS USART1_CR1bits absolute 0x4001100C;

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
sfr volatile typeUSART1_CR2BITS USART1_CR2bits absolute 0x40011010;

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
sfr volatile typeUSART1_CR3BITS USART1_CR3bits absolute 0x40011014;

 typedef struct tagUSART1_GTPRBITS {
  union {
    struct {
      unsigned PSC : 8;
      unsigned GT : 8;
      unsigned : 16;
    };
  };
} typeUSART1_GTPRBITS;
sfr volatile typeUSART1_GTPRBITS USART1_GTPRbits absolute 0x40011018;

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

 typedef struct tagUSART6_SRBITS {
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
} typeUSART6_SRBITS;
sfr volatile typeUSART6_SRBITS USART6_SRbits absolute 0x40011400;

 typedef struct tagUSART6_DRBITS {
  union {
    struct {
      unsigned DR : 9;
      unsigned : 23;
    };
  };
} typeUSART6_DRBITS;
sfr volatile typeUSART6_DRBITS USART6_DRbits absolute 0x40011404;

 typedef struct tagUSART6_BRRBITS {
  union {
    struct {
      unsigned DIV_Fraction : 4;
      unsigned DIV_Mantissa : 12;
      unsigned : 16;
    };
  };
} typeUSART6_BRRBITS;
sfr volatile typeUSART6_BRRBITS USART6_BRRbits absolute 0x40011408;

 typedef struct tagUSART6_CR1BITS {
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
} typeUSART6_CR1BITS;
sfr volatile typeUSART6_CR1BITS USART6_CR1bits absolute 0x4001140C;

 typedef struct tagUSART6_CR2BITS {
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
} typeUSART6_CR2BITS;
sfr volatile typeUSART6_CR2BITS USART6_CR2bits absolute 0x40011410;

 typedef struct tagUSART6_CR3BITS {
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
} typeUSART6_CR3BITS;
sfr volatile typeUSART6_CR3BITS USART6_CR3bits absolute 0x40011414;

 typedef struct tagUSART6_GTPRBITS {
  union {
    struct {
      unsigned PSC : 8;
      unsigned GT : 8;
      unsigned : 16;
    };
  };
} typeUSART6_GTPRBITS;
sfr volatile typeUSART6_GTPRBITS USART6_GTPRbits absolute 0x40011418;

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

 typedef struct tagDMA2_LISRBITS {
  union {
    struct {
      unsigned FEIF0 : 1;
      unsigned : 1;
      unsigned DMEIF0 : 1;
      unsigned TEIF0 : 1;
      unsigned HTIF0 : 1;
      unsigned TCIF0 : 1;
      unsigned FEIF1 : 1;
      unsigned : 1;
      unsigned DMEIF1 : 1;
      unsigned TEIF1 : 1;
      unsigned HTIF1 : 1;
      unsigned TCIF1 : 1;
      unsigned : 4;
      unsigned FEIF2 : 1;
      unsigned : 1;
      unsigned DMEIF2 : 1;
      unsigned TEIF2 : 1;
      unsigned HTIF2 : 1;
      unsigned TCIF2 : 1;
      unsigned FEIF3 : 1;
      unsigned : 1;
      unsigned DMEIF3 : 1;
      unsigned TEIF3 : 1;
      unsigned HTIF3 : 1;
      unsigned TCIF3 : 1;
      unsigned : 4;
    };
  };
} typeDMA2_LISRBITS;
sfr volatile typeDMA2_LISRBITS DMA2_LISRbits absolute 0x40026400;

 typedef struct tagDMA2_HISRBITS {
  union {
    struct {
      unsigned FEIF4 : 1;
      unsigned : 1;
      unsigned DMEIF4 : 1;
      unsigned TEIF4 : 1;
      unsigned HTIF4 : 1;
      unsigned TCIF4 : 1;
      unsigned FEIF5 : 1;
      unsigned : 1;
      unsigned DMEIF5 : 1;
      unsigned TEIF5 : 1;
      unsigned HTIF5 : 1;
      unsigned TCIF5 : 1;
      unsigned : 4;
      unsigned FEIF6 : 1;
      unsigned : 1;
      unsigned DMEIF6 : 1;
      unsigned TEIF6 : 1;
      unsigned HTIF6 : 1;
      unsigned TCIF6 : 1;
      unsigned FEIF7 : 1;
      unsigned : 1;
      unsigned DMEIF7 : 1;
      unsigned TEIF7 : 1;
      unsigned HTIF7 : 1;
      unsigned TCIF7 : 1;
      unsigned : 4;
    };
  };
} typeDMA2_HISRBITS;
sfr volatile typeDMA2_HISRBITS DMA2_HISRbits absolute 0x40026404;

 typedef struct tagDMA2_LIFCRBITS {
  union {
    struct {
      unsigned CFEIF0 : 1;
      unsigned : 1;
      unsigned CDMEIF0 : 1;
      unsigned CTEIF0 : 1;
      unsigned CHTIF0 : 1;
      unsigned CTCIF0 : 1;
      unsigned CFEIF1 : 1;
      unsigned : 1;
      unsigned CDMEIF1 : 1;
      unsigned CTEIF1 : 1;
      unsigned CHTIF1 : 1;
      unsigned CTCIF1 : 1;
      unsigned : 4;
      unsigned CFEIF2 : 1;
      unsigned : 1;
      unsigned CDMEIF2 : 1;
      unsigned CTEIF2 : 1;
      unsigned CHTIF2 : 1;
      unsigned CTCIF2 : 1;
      unsigned CFEIF3 : 1;
      unsigned : 1;
      unsigned CDMEIF3 : 1;
      unsigned CTEIF3 : 1;
      unsigned CHTIF3 : 1;
      unsigned CTCIF3 : 1;
      unsigned : 4;
    };
  };
} typeDMA2_LIFCRBITS;
sfr volatile typeDMA2_LIFCRBITS DMA2_LIFCRbits absolute 0x40026408;

 typedef struct tagDMA2_HIFCRBITS {
  union {
    struct {
      unsigned CFEIF4 : 1;
      unsigned : 1;
      unsigned CDMEIF4 : 1;
      unsigned CTEIF4 : 1;
      unsigned CHTIF4 : 1;
      unsigned CTCIF4 : 1;
      unsigned CFEIF5 : 1;
      unsigned : 1;
      unsigned CDMEIF5 : 1;
      unsigned CTEIF5 : 1;
      unsigned CHTIF5 : 1;
      unsigned CTCIF5 : 1;
      unsigned : 4;
      unsigned CFEIF6 : 1;
      unsigned : 1;
      unsigned CDMEIF6 : 1;
      unsigned CTEIF6 : 1;
      unsigned CHTIF6 : 1;
      unsigned CTCIF6 : 1;
      unsigned CFEIF7 : 1;
      unsigned : 1;
      unsigned CDMEIF7 : 1;
      unsigned CTEIF7 : 1;
      unsigned CHTIF7 : 1;
      unsigned CTCIF7 : 1;
      unsigned : 4;
    };
  };
} typeDMA2_HIFCRBITS;
sfr volatile typeDMA2_HIFCRBITS DMA2_HIFCRbits absolute 0x4002640C;

 typedef struct tagDMA2_S0CRBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned DMEIE : 1;
      unsigned TEIE : 1;
      unsigned HTIE : 1;
      unsigned TCIE : 1;
      unsigned PFCTRL : 1;
      unsigned DIR : 2;
      unsigned CIRC : 1;
      unsigned PINC : 1;
      unsigned MINC : 1;
      unsigned PSIZE : 2;
      unsigned MSIZE : 2;
      unsigned PINCOS : 1;
      unsigned PL : 2;
      unsigned DBM : 1;
      unsigned CT : 1;
      unsigned : 1;
      unsigned PBURST : 2;
      unsigned MBURST : 2;
      unsigned CHSEL : 3;
      unsigned : 4;
    };
  };
} typeDMA2_S0CRBITS;
sfr volatile typeDMA2_S0CRBITS DMA2_S0CRbits absolute 0x40026410;

 typedef struct tagDMA2_S0NDTRBITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_S0NDTRBITS;
sfr volatile typeDMA2_S0NDTRBITS DMA2_S0NDTRbits absolute 0x40026414;

 typedef struct tagDMA2_S0PARBITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_S0PARBITS;
sfr volatile typeDMA2_S0PARBITS DMA2_S0PARbits absolute 0x40026418;

 typedef struct tagDMA2_S0M0ARBITS {
  union {
    struct {
      unsigned M0A : 32;
    };
  };
} typeDMA2_S0M0ARBITS;
sfr volatile typeDMA2_S0M0ARBITS DMA2_S0M0ARbits absolute 0x4002641C;

 typedef struct tagDMA2_S0M1ARBITS {
  union {
    struct {
      unsigned M1A : 32;
    };
  };
} typeDMA2_S0M1ARBITS;
sfr volatile typeDMA2_S0M1ARBITS DMA2_S0M1ARbits absolute 0x40026420;

 typedef struct tagDMA2_S0FCRBITS {
  union {
    struct {
      unsigned FTH : 2;
      unsigned DMDIS : 1;
      unsigned FS : 3;
      unsigned : 1;
      unsigned FEIE : 1;
      unsigned : 24;
    };
  };
} typeDMA2_S0FCRBITS;
sfr volatile typeDMA2_S0FCRBITS DMA2_S0FCRbits absolute 0x40026424;

 typedef struct tagDMA2_S1CRBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned DMEIE : 1;
      unsigned TEIE : 1;
      unsigned HTIE : 1;
      unsigned TCIE : 1;
      unsigned PFCTRL : 1;
      unsigned DIR : 2;
      unsigned CIRC : 1;
      unsigned PINC : 1;
      unsigned MINC : 1;
      unsigned PSIZE : 2;
      unsigned MSIZE : 2;
      unsigned PINCOS : 1;
      unsigned PL : 2;
      unsigned DBM : 1;
      unsigned CT : 1;
      unsigned ACK : 1;
      unsigned PBURST : 2;
      unsigned MBURST : 2;
      unsigned CHSEL : 3;
      unsigned : 4;
    };
  };
} typeDMA2_S1CRBITS;
sfr volatile typeDMA2_S1CRBITS DMA2_S1CRbits absolute 0x40026428;

 typedef struct tagDMA2_S1NDTRBITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_S1NDTRBITS;
sfr volatile typeDMA2_S1NDTRBITS DMA2_S1NDTRbits absolute 0x4002642C;

 typedef struct tagDMA2_S1PARBITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_S1PARBITS;
sfr volatile typeDMA2_S1PARBITS DMA2_S1PARbits absolute 0x40026430;

 typedef struct tagDMA2_S1M0ARBITS {
  union {
    struct {
      unsigned M0A : 32;
    };
  };
} typeDMA2_S1M0ARBITS;
sfr volatile typeDMA2_S1M0ARBITS DMA2_S1M0ARbits absolute 0x40026434;

 typedef struct tagDMA2_S1M1ARBITS {
  union {
    struct {
      unsigned M1A : 32;
    };
  };
} typeDMA2_S1M1ARBITS;
sfr volatile typeDMA2_S1M1ARBITS DMA2_S1M1ARbits absolute 0x40026438;

 typedef struct tagDMA2_S1FCRBITS {
  union {
    struct {
      unsigned FTH : 2;
      unsigned DMDIS : 1;
      unsigned FS : 3;
      unsigned : 1;
      unsigned FEIE : 1;
      unsigned : 24;
    };
  };
} typeDMA2_S1FCRBITS;
sfr volatile typeDMA2_S1FCRBITS DMA2_S1FCRbits absolute 0x4002643C;

 typedef struct tagDMA2_S2CRBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned DMEIE : 1;
      unsigned TEIE : 1;
      unsigned HTIE : 1;
      unsigned TCIE : 1;
      unsigned PFCTRL : 1;
      unsigned DIR : 2;
      unsigned CIRC : 1;
      unsigned PINC : 1;
      unsigned MINC : 1;
      unsigned PSIZE : 2;
      unsigned MSIZE : 2;
      unsigned PINCOS : 1;
      unsigned PL : 2;
      unsigned DBM : 1;
      unsigned CT : 1;
      unsigned ACK : 1;
      unsigned PBURST : 2;
      unsigned MBURST : 2;
      unsigned CHSEL : 3;
      unsigned : 4;
    };
  };
} typeDMA2_S2CRBITS;
sfr volatile typeDMA2_S2CRBITS DMA2_S2CRbits absolute 0x40026440;

 typedef struct tagDMA2_S2NDTRBITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_S2NDTRBITS;
sfr volatile typeDMA2_S2NDTRBITS DMA2_S2NDTRbits absolute 0x40026444;

 typedef struct tagDMA2_S2PARBITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_S2PARBITS;
sfr volatile typeDMA2_S2PARBITS DMA2_S2PARbits absolute 0x40026448;

 typedef struct tagDMA2_S2M0ARBITS {
  union {
    struct {
      unsigned M0A : 32;
    };
  };
} typeDMA2_S2M0ARBITS;
sfr volatile typeDMA2_S2M0ARBITS DMA2_S2M0ARbits absolute 0x4002644C;

 typedef struct tagDMA2_S2M1ARBITS {
  union {
    struct {
      unsigned M1A : 32;
    };
  };
} typeDMA2_S2M1ARBITS;
sfr volatile typeDMA2_S2M1ARBITS DMA2_S2M1ARbits absolute 0x40026450;

 typedef struct tagDMA2_S2FCRBITS {
  union {
    struct {
      unsigned FTH : 2;
      unsigned DMDIS : 1;
      unsigned FS : 3;
      unsigned : 1;
      unsigned FEIE : 1;
      unsigned : 24;
    };
  };
} typeDMA2_S2FCRBITS;
sfr volatile typeDMA2_S2FCRBITS DMA2_S2FCRbits absolute 0x40026454;

 typedef struct tagDMA2_S3CRBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned DMEIE : 1;
      unsigned TEIE : 1;
      unsigned HTIE : 1;
      unsigned TCIE : 1;
      unsigned PFCTRL : 1;
      unsigned DIR : 2;
      unsigned CIRC : 1;
      unsigned PINC : 1;
      unsigned MINC : 1;
      unsigned PSIZE : 2;
      unsigned MSIZE : 2;
      unsigned PINCOS : 1;
      unsigned PL : 2;
      unsigned DBM : 1;
      unsigned CT : 1;
      unsigned ACK : 1;
      unsigned PBURST : 2;
      unsigned MBURST : 2;
      unsigned CHSEL : 3;
      unsigned : 4;
    };
  };
} typeDMA2_S3CRBITS;
sfr volatile typeDMA2_S3CRBITS DMA2_S3CRbits absolute 0x40026458;

 typedef struct tagDMA2_S3NDTRBITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_S3NDTRBITS;
sfr volatile typeDMA2_S3NDTRBITS DMA2_S3NDTRbits absolute 0x4002645C;

 typedef struct tagDMA2_S3PARBITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_S3PARBITS;
sfr volatile typeDMA2_S3PARBITS DMA2_S3PARbits absolute 0x40026460;

 typedef struct tagDMA2_S3M0ARBITS {
  union {
    struct {
      unsigned M0A : 32;
    };
  };
} typeDMA2_S3M0ARBITS;
sfr volatile typeDMA2_S3M0ARBITS DMA2_S3M0ARbits absolute 0x40026464;

 typedef struct tagDMA2_S3M1ARBITS {
  union {
    struct {
      unsigned M1A : 32;
    };
  };
} typeDMA2_S3M1ARBITS;
sfr volatile typeDMA2_S3M1ARBITS DMA2_S3M1ARbits absolute 0x40026468;

 typedef struct tagDMA2_S3FCRBITS {
  union {
    struct {
      unsigned FTH : 2;
      unsigned DMDIS : 1;
      unsigned FS : 3;
      unsigned : 1;
      unsigned FEIE : 1;
      unsigned : 24;
    };
  };
} typeDMA2_S3FCRBITS;
sfr volatile typeDMA2_S3FCRBITS DMA2_S3FCRbits absolute 0x4002646C;

 typedef struct tagDMA2_S4CRBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned DMEIE : 1;
      unsigned TEIE : 1;
      unsigned HTIE : 1;
      unsigned TCIE : 1;
      unsigned PFCTRL : 1;
      unsigned DIR : 2;
      unsigned CIRC : 1;
      unsigned PINC : 1;
      unsigned MINC : 1;
      unsigned PSIZE : 2;
      unsigned MSIZE : 2;
      unsigned PINCOS : 1;
      unsigned PL : 2;
      unsigned DBM : 1;
      unsigned CT : 1;
      unsigned ACK : 1;
      unsigned PBURST : 2;
      unsigned MBURST : 2;
      unsigned CHSEL : 3;
      unsigned : 4;
    };
  };
} typeDMA2_S4CRBITS;
sfr volatile typeDMA2_S4CRBITS DMA2_S4CRbits absolute 0x40026470;

 typedef struct tagDMA2_S4NDTRBITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_S4NDTRBITS;
sfr volatile typeDMA2_S4NDTRBITS DMA2_S4NDTRbits absolute 0x40026474;

 typedef struct tagDMA2_S4PARBITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_S4PARBITS;
sfr volatile typeDMA2_S4PARBITS DMA2_S4PARbits absolute 0x40026478;

 typedef struct tagDMA2_S4M0ARBITS {
  union {
    struct {
      unsigned M0A : 32;
    };
  };
} typeDMA2_S4M0ARBITS;
sfr volatile typeDMA2_S4M0ARBITS DMA2_S4M0ARbits absolute 0x4002647C;

 typedef struct tagDMA2_S4M1ARBITS {
  union {
    struct {
      unsigned M1A : 32;
    };
  };
} typeDMA2_S4M1ARBITS;
sfr volatile typeDMA2_S4M1ARBITS DMA2_S4M1ARbits absolute 0x40026480;

 typedef struct tagDMA2_S4FCRBITS {
  union {
    struct {
      unsigned FTH : 2;
      unsigned DMDIS : 1;
      unsigned FS : 3;
      unsigned : 1;
      unsigned FEIE : 1;
      unsigned : 24;
    };
  };
} typeDMA2_S4FCRBITS;
sfr volatile typeDMA2_S4FCRBITS DMA2_S4FCRbits absolute 0x40026484;

 typedef struct tagDMA2_S5CRBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned DMEIE : 1;
      unsigned TEIE : 1;
      unsigned HTIE : 1;
      unsigned TCIE : 1;
      unsigned PFCTRL : 1;
      unsigned DIR : 2;
      unsigned CIRC : 1;
      unsigned PINC : 1;
      unsigned MINC : 1;
      unsigned PSIZE : 2;
      unsigned MSIZE : 2;
      unsigned PINCOS : 1;
      unsigned PL : 2;
      unsigned DBM : 1;
      unsigned CT : 1;
      unsigned ACK : 1;
      unsigned PBURST : 2;
      unsigned MBURST : 2;
      unsigned CHSEL : 3;
      unsigned : 4;
    };
  };
} typeDMA2_S5CRBITS;
sfr volatile typeDMA2_S5CRBITS DMA2_S5CRbits absolute 0x40026488;

 typedef struct tagDMA2_S5NDTRBITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_S5NDTRBITS;
sfr volatile typeDMA2_S5NDTRBITS DMA2_S5NDTRbits absolute 0x4002648C;

 typedef struct tagDMA2_S5PARBITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_S5PARBITS;
sfr volatile typeDMA2_S5PARBITS DMA2_S5PARbits absolute 0x40026490;

 typedef struct tagDMA2_S5M0ARBITS {
  union {
    struct {
      unsigned M0A : 32;
    };
  };
} typeDMA2_S5M0ARBITS;
sfr volatile typeDMA2_S5M0ARBITS DMA2_S5M0ARbits absolute 0x40026494;

 typedef struct tagDMA2_S5M1ARBITS {
  union {
    struct {
      unsigned M1A : 32;
    };
  };
} typeDMA2_S5M1ARBITS;
sfr volatile typeDMA2_S5M1ARBITS DMA2_S5M1ARbits absolute 0x40026498;

 typedef struct tagDMA2_S5FCRBITS {
  union {
    struct {
      unsigned FTH : 2;
      unsigned DMDIS : 1;
      unsigned FS : 3;
      unsigned : 1;
      unsigned FEIE : 1;
      unsigned : 24;
    };
  };
} typeDMA2_S5FCRBITS;
sfr volatile typeDMA2_S5FCRBITS DMA2_S5FCRbits absolute 0x4002649C;

 typedef struct tagDMA2_S6CRBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned DMEIE : 1;
      unsigned TEIE : 1;
      unsigned HTIE : 1;
      unsigned TCIE : 1;
      unsigned PFCTRL : 1;
      unsigned DIR : 2;
      unsigned CIRC : 1;
      unsigned PINC : 1;
      unsigned MINC : 1;
      unsigned PSIZE : 2;
      unsigned MSIZE : 2;
      unsigned PINCOS : 1;
      unsigned PL : 2;
      unsigned DBM : 1;
      unsigned CT : 1;
      unsigned ACK : 1;
      unsigned PBURST : 2;
      unsigned MBURST : 2;
      unsigned CHSEL : 3;
      unsigned : 4;
    };
  };
} typeDMA2_S6CRBITS;
sfr volatile typeDMA2_S6CRBITS DMA2_S6CRbits absolute 0x400264A0;

 typedef struct tagDMA2_S6NDTRBITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_S6NDTRBITS;
sfr volatile typeDMA2_S6NDTRBITS DMA2_S6NDTRbits absolute 0x400264A4;

 typedef struct tagDMA2_S6PARBITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_S6PARBITS;
sfr volatile typeDMA2_S6PARBITS DMA2_S6PARbits absolute 0x400264A8;

 typedef struct tagDMA2_S6M0ARBITS {
  union {
    struct {
      unsigned M0A : 32;
    };
  };
} typeDMA2_S6M0ARBITS;
sfr volatile typeDMA2_S6M0ARBITS DMA2_S6M0ARbits absolute 0x400264AC;

 typedef struct tagDMA2_S6M1ARBITS {
  union {
    struct {
      unsigned M1A : 32;
    };
  };
} typeDMA2_S6M1ARBITS;
sfr volatile typeDMA2_S6M1ARBITS DMA2_S6M1ARbits absolute 0x400264B0;

 typedef struct tagDMA2_S6FCRBITS {
  union {
    struct {
      unsigned FTH : 2;
      unsigned DMDIS : 1;
      unsigned FS : 3;
      unsigned : 1;
      unsigned FEIE : 1;
      unsigned : 24;
    };
  };
} typeDMA2_S6FCRBITS;
sfr volatile typeDMA2_S6FCRBITS DMA2_S6FCRbits absolute 0x400264B4;

 typedef struct tagDMA2_S7CRBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned DMEIE : 1;
      unsigned TEIE : 1;
      unsigned HTIE : 1;
      unsigned TCIE : 1;
      unsigned PFCTRL : 1;
      unsigned DIR : 2;
      unsigned CIRC : 1;
      unsigned PINC : 1;
      unsigned MINC : 1;
      unsigned PSIZE : 2;
      unsigned MSIZE : 2;
      unsigned PINCOS : 1;
      unsigned PL : 2;
      unsigned DBM : 1;
      unsigned CT : 1;
      unsigned ACK : 1;
      unsigned PBURST : 2;
      unsigned MBURST : 2;
      unsigned CHSEL : 3;
      unsigned : 4;
    };
  };
} typeDMA2_S7CRBITS;
sfr volatile typeDMA2_S7CRBITS DMA2_S7CRbits absolute 0x400264B8;

 typedef struct tagDMA2_S7NDTRBITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA2_S7NDTRBITS;
sfr volatile typeDMA2_S7NDTRBITS DMA2_S7NDTRbits absolute 0x400264BC;

 typedef struct tagDMA2_S7PARBITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA2_S7PARBITS;
sfr volatile typeDMA2_S7PARBITS DMA2_S7PARbits absolute 0x400264C0;

 typedef struct tagDMA2_S7M0ARBITS {
  union {
    struct {
      unsigned M0A : 32;
    };
  };
} typeDMA2_S7M0ARBITS;
sfr volatile typeDMA2_S7M0ARBITS DMA2_S7M0ARbits absolute 0x400264C4;

 typedef struct tagDMA2_S7M1ARBITS {
  union {
    struct {
      unsigned M1A : 32;
    };
  };
} typeDMA2_S7M1ARBITS;
sfr volatile typeDMA2_S7M1ARBITS DMA2_S7M1ARbits absolute 0x400264C8;

 typedef struct tagDMA2_S7FCRBITS {
  union {
    struct {
      unsigned FTH : 2;
      unsigned DMDIS : 1;
      unsigned FS : 3;
      unsigned : 1;
      unsigned FEIE : 1;
      unsigned : 24;
    };
  };
} typeDMA2_S7FCRBITS;
sfr volatile typeDMA2_S7FCRBITS DMA2_S7FCRbits absolute 0x400264CC;

 typedef struct tagDMA1_LISRBITS {
  union {
    struct {
      unsigned FEIF0 : 1;
      unsigned : 1;
      unsigned DMEIF0 : 1;
      unsigned TEIF0 : 1;
      unsigned HTIF0 : 1;
      unsigned TCIF0 : 1;
      unsigned FEIF1 : 1;
      unsigned : 1;
      unsigned DMEIF1 : 1;
      unsigned TEIF1 : 1;
      unsigned HTIF1 : 1;
      unsigned TCIF1 : 1;
      unsigned : 4;
      unsigned FEIF2 : 1;
      unsigned : 1;
      unsigned DMEIF2 : 1;
      unsigned TEIF2 : 1;
      unsigned HTIF2 : 1;
      unsigned TCIF2 : 1;
      unsigned FEIF3 : 1;
      unsigned : 1;
      unsigned DMEIF3 : 1;
      unsigned TEIF3 : 1;
      unsigned HTIF3 : 1;
      unsigned TCIF3 : 1;
      unsigned : 4;
    };
  };
} typeDMA1_LISRBITS;
sfr volatile typeDMA1_LISRBITS DMA1_LISRbits absolute 0x40026000;

 typedef struct tagDMA1_HISRBITS {
  union {
    struct {
      unsigned FEIF4 : 1;
      unsigned : 1;
      unsigned DMEIF4 : 1;
      unsigned TEIF4 : 1;
      unsigned HTIF4 : 1;
      unsigned TCIF4 : 1;
      unsigned FEIF5 : 1;
      unsigned : 1;
      unsigned DMEIF5 : 1;
      unsigned TEIF5 : 1;
      unsigned HTIF5 : 1;
      unsigned TCIF5 : 1;
      unsigned : 4;
      unsigned FEIF6 : 1;
      unsigned : 1;
      unsigned DMEIF6 : 1;
      unsigned TEIF6 : 1;
      unsigned HTIF6 : 1;
      unsigned TCIF6 : 1;
      unsigned FEIF7 : 1;
      unsigned : 1;
      unsigned DMEIF7 : 1;
      unsigned TEIF7 : 1;
      unsigned HTIF7 : 1;
      unsigned TCIF7 : 1;
      unsigned : 4;
    };
  };
} typeDMA1_HISRBITS;
sfr volatile typeDMA1_HISRBITS DMA1_HISRbits absolute 0x40026004;

 typedef struct tagDMA1_LIFCRBITS {
  union {
    struct {
      unsigned CFEIF0 : 1;
      unsigned : 1;
      unsigned CDMEIF0 : 1;
      unsigned CTEIF0 : 1;
      unsigned CHTIF0 : 1;
      unsigned CTCIF0 : 1;
      unsigned CFEIF1 : 1;
      unsigned : 1;
      unsigned CDMEIF1 : 1;
      unsigned CTEIF1 : 1;
      unsigned CHTIF1 : 1;
      unsigned CTCIF1 : 1;
      unsigned : 4;
      unsigned CFEIF2 : 1;
      unsigned : 1;
      unsigned CDMEIF2 : 1;
      unsigned CTEIF2 : 1;
      unsigned CHTIF2 : 1;
      unsigned CTCIF2 : 1;
      unsigned CFEIF3 : 1;
      unsigned : 1;
      unsigned CDMEIF3 : 1;
      unsigned CTEIF3 : 1;
      unsigned CHTIF3 : 1;
      unsigned CTCIF3 : 1;
      unsigned : 4;
    };
  };
} typeDMA1_LIFCRBITS;
sfr volatile typeDMA1_LIFCRBITS DMA1_LIFCRbits absolute 0x40026008;

 typedef struct tagDMA1_HIFCRBITS {
  union {
    struct {
      unsigned CFEIF4 : 1;
      unsigned : 1;
      unsigned CDMEIF4 : 1;
      unsigned CTEIF4 : 1;
      unsigned CHTIF4 : 1;
      unsigned CTCIF4 : 1;
      unsigned CFEIF5 : 1;
      unsigned : 1;
      unsigned CDMEIF5 : 1;
      unsigned CTEIF5 : 1;
      unsigned CHTIF5 : 1;
      unsigned CTCIF5 : 1;
      unsigned : 4;
      unsigned CFEIF6 : 1;
      unsigned : 1;
      unsigned CDMEIF6 : 1;
      unsigned CTEIF6 : 1;
      unsigned CHTIF6 : 1;
      unsigned CTCIF6 : 1;
      unsigned CFEIF7 : 1;
      unsigned : 1;
      unsigned CDMEIF7 : 1;
      unsigned CTEIF7 : 1;
      unsigned CHTIF7 : 1;
      unsigned CTCIF7 : 1;
      unsigned : 4;
    };
  };
} typeDMA1_HIFCRBITS;
sfr volatile typeDMA1_HIFCRBITS DMA1_HIFCRbits absolute 0x4002600C;

 typedef struct tagDMA1_S0CRBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned DMEIE : 1;
      unsigned TEIE : 1;
      unsigned HTIE : 1;
      unsigned TCIE : 1;
      unsigned PFCTRL : 1;
      unsigned DIR : 2;
      unsigned CIRC : 1;
      unsigned PINC : 1;
      unsigned MINC : 1;
      unsigned PSIZE : 2;
      unsigned MSIZE : 2;
      unsigned PINCOS : 1;
      unsigned PL : 2;
      unsigned DBM : 1;
      unsigned CT : 1;
      unsigned : 1;
      unsigned PBURST : 2;
      unsigned MBURST : 2;
      unsigned CHSEL : 3;
      unsigned : 4;
    };
  };
} typeDMA1_S0CRBITS;
sfr volatile typeDMA1_S0CRBITS DMA1_S0CRbits absolute 0x40026010;

 typedef struct tagDMA1_S0NDTRBITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_S0NDTRBITS;
sfr volatile typeDMA1_S0NDTRBITS DMA1_S0NDTRbits absolute 0x40026014;

 typedef struct tagDMA1_S0PARBITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_S0PARBITS;
sfr volatile typeDMA1_S0PARBITS DMA1_S0PARbits absolute 0x40026018;

 typedef struct tagDMA1_S0M0ARBITS {
  union {
    struct {
      unsigned M0A : 32;
    };
  };
} typeDMA1_S0M0ARBITS;
sfr volatile typeDMA1_S0M0ARBITS DMA1_S0M0ARbits absolute 0x4002601C;

 typedef struct tagDMA1_S0M1ARBITS {
  union {
    struct {
      unsigned M1A : 32;
    };
  };
} typeDMA1_S0M1ARBITS;
sfr volatile typeDMA1_S0M1ARBITS DMA1_S0M1ARbits absolute 0x40026020;

 typedef struct tagDMA1_S0FCRBITS {
  union {
    struct {
      unsigned FTH : 2;
      unsigned DMDIS : 1;
      unsigned FS : 3;
      unsigned : 1;
      unsigned FEIE : 1;
      unsigned : 24;
    };
  };
} typeDMA1_S0FCRBITS;
sfr volatile typeDMA1_S0FCRBITS DMA1_S0FCRbits absolute 0x40026024;

 typedef struct tagDMA1_S1CRBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned DMEIE : 1;
      unsigned TEIE : 1;
      unsigned HTIE : 1;
      unsigned TCIE : 1;
      unsigned PFCTRL : 1;
      unsigned DIR : 2;
      unsigned CIRC : 1;
      unsigned PINC : 1;
      unsigned MINC : 1;
      unsigned PSIZE : 2;
      unsigned MSIZE : 2;
      unsigned PINCOS : 1;
      unsigned PL : 2;
      unsigned DBM : 1;
      unsigned CT : 1;
      unsigned ACK : 1;
      unsigned PBURST : 2;
      unsigned MBURST : 2;
      unsigned CHSEL : 3;
      unsigned : 4;
    };
  };
} typeDMA1_S1CRBITS;
sfr volatile typeDMA1_S1CRBITS DMA1_S1CRbits absolute 0x40026028;

 typedef struct tagDMA1_S1NDTRBITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_S1NDTRBITS;
sfr volatile typeDMA1_S1NDTRBITS DMA1_S1NDTRbits absolute 0x4002602C;

 typedef struct tagDMA1_S1PARBITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_S1PARBITS;
sfr volatile typeDMA1_S1PARBITS DMA1_S1PARbits absolute 0x40026030;

 typedef struct tagDMA1_S1M0ARBITS {
  union {
    struct {
      unsigned M0A : 32;
    };
  };
} typeDMA1_S1M0ARBITS;
sfr volatile typeDMA1_S1M0ARBITS DMA1_S1M0ARbits absolute 0x40026034;

 typedef struct tagDMA1_S1M1ARBITS {
  union {
    struct {
      unsigned M1A : 32;
    };
  };
} typeDMA1_S1M1ARBITS;
sfr volatile typeDMA1_S1M1ARBITS DMA1_S1M1ARbits absolute 0x40026038;

 typedef struct tagDMA1_S1FCRBITS {
  union {
    struct {
      unsigned FTH : 2;
      unsigned DMDIS : 1;
      unsigned FS : 3;
      unsigned : 1;
      unsigned FEIE : 1;
      unsigned : 24;
    };
  };
} typeDMA1_S1FCRBITS;
sfr volatile typeDMA1_S1FCRBITS DMA1_S1FCRbits absolute 0x4002603C;

 typedef struct tagDMA1_S2CRBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned DMEIE : 1;
      unsigned TEIE : 1;
      unsigned HTIE : 1;
      unsigned TCIE : 1;
      unsigned PFCTRL : 1;
      unsigned DIR : 2;
      unsigned CIRC : 1;
      unsigned PINC : 1;
      unsigned MINC : 1;
      unsigned PSIZE : 2;
      unsigned MSIZE : 2;
      unsigned PINCOS : 1;
      unsigned PL : 2;
      unsigned DBM : 1;
      unsigned CT : 1;
      unsigned ACK : 1;
      unsigned PBURST : 2;
      unsigned MBURST : 2;
      unsigned CHSEL : 3;
      unsigned : 4;
    };
  };
} typeDMA1_S2CRBITS;
sfr volatile typeDMA1_S2CRBITS DMA1_S2CRbits absolute 0x40026040;

 typedef struct tagDMA1_S2NDTRBITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_S2NDTRBITS;
sfr volatile typeDMA1_S2NDTRBITS DMA1_S2NDTRbits absolute 0x40026044;

 typedef struct tagDMA1_S2PARBITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_S2PARBITS;
sfr volatile typeDMA1_S2PARBITS DMA1_S2PARbits absolute 0x40026048;

 typedef struct tagDMA1_S2M0ARBITS {
  union {
    struct {
      unsigned M0A : 32;
    };
  };
} typeDMA1_S2M0ARBITS;
sfr volatile typeDMA1_S2M0ARBITS DMA1_S2M0ARbits absolute 0x4002604C;

 typedef struct tagDMA1_S2M1ARBITS {
  union {
    struct {
      unsigned M1A : 32;
    };
  };
} typeDMA1_S2M1ARBITS;
sfr volatile typeDMA1_S2M1ARBITS DMA1_S2M1ARbits absolute 0x40026050;

 typedef struct tagDMA1_S2FCRBITS {
  union {
    struct {
      unsigned FTH : 2;
      unsigned DMDIS : 1;
      unsigned FS : 3;
      unsigned : 1;
      unsigned FEIE : 1;
      unsigned : 24;
    };
  };
} typeDMA1_S2FCRBITS;
sfr volatile typeDMA1_S2FCRBITS DMA1_S2FCRbits absolute 0x40026054;

 typedef struct tagDMA1_S3CRBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned DMEIE : 1;
      unsigned TEIE : 1;
      unsigned HTIE : 1;
      unsigned TCIE : 1;
      unsigned PFCTRL : 1;
      unsigned DIR : 2;
      unsigned CIRC : 1;
      unsigned PINC : 1;
      unsigned MINC : 1;
      unsigned PSIZE : 2;
      unsigned MSIZE : 2;
      unsigned PINCOS : 1;
      unsigned PL : 2;
      unsigned DBM : 1;
      unsigned CT : 1;
      unsigned ACK : 1;
      unsigned PBURST : 2;
      unsigned MBURST : 2;
      unsigned CHSEL : 3;
      unsigned : 4;
    };
  };
} typeDMA1_S3CRBITS;
sfr volatile typeDMA1_S3CRBITS DMA1_S3CRbits absolute 0x40026058;

 typedef struct tagDMA1_S3NDTRBITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_S3NDTRBITS;
sfr volatile typeDMA1_S3NDTRBITS DMA1_S3NDTRbits absolute 0x4002605C;

 typedef struct tagDMA1_S3PARBITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_S3PARBITS;
sfr volatile typeDMA1_S3PARBITS DMA1_S3PARbits absolute 0x40026060;

 typedef struct tagDMA1_S3M0ARBITS {
  union {
    struct {
      unsigned M0A : 32;
    };
  };
} typeDMA1_S3M0ARBITS;
sfr volatile typeDMA1_S3M0ARBITS DMA1_S3M0ARbits absolute 0x40026064;

 typedef struct tagDMA1_S3M1ARBITS {
  union {
    struct {
      unsigned M1A : 32;
    };
  };
} typeDMA1_S3M1ARBITS;
sfr volatile typeDMA1_S3M1ARBITS DMA1_S3M1ARbits absolute 0x40026068;

 typedef struct tagDMA1_S3FCRBITS {
  union {
    struct {
      unsigned FTH : 2;
      unsigned DMDIS : 1;
      unsigned FS : 3;
      unsigned : 1;
      unsigned FEIE : 1;
      unsigned : 24;
    };
  };
} typeDMA1_S3FCRBITS;
sfr volatile typeDMA1_S3FCRBITS DMA1_S3FCRbits absolute 0x4002606C;

 typedef struct tagDMA1_S4CRBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned DMEIE : 1;
      unsigned TEIE : 1;
      unsigned HTIE : 1;
      unsigned TCIE : 1;
      unsigned PFCTRL : 1;
      unsigned DIR : 2;
      unsigned CIRC : 1;
      unsigned PINC : 1;
      unsigned MINC : 1;
      unsigned PSIZE : 2;
      unsigned MSIZE : 2;
      unsigned PINCOS : 1;
      unsigned PL : 2;
      unsigned DBM : 1;
      unsigned CT : 1;
      unsigned ACK : 1;
      unsigned PBURST : 2;
      unsigned MBURST : 2;
      unsigned CHSEL : 3;
      unsigned : 4;
    };
  };
} typeDMA1_S4CRBITS;
sfr volatile typeDMA1_S4CRBITS DMA1_S4CRbits absolute 0x40026070;

 typedef struct tagDMA1_S4NDTRBITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_S4NDTRBITS;
sfr volatile typeDMA1_S4NDTRBITS DMA1_S4NDTRbits absolute 0x40026074;

 typedef struct tagDMA1_S4PARBITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_S4PARBITS;
sfr volatile typeDMA1_S4PARBITS DMA1_S4PARbits absolute 0x40026078;

 typedef struct tagDMA1_S4M0ARBITS {
  union {
    struct {
      unsigned M0A : 32;
    };
  };
} typeDMA1_S4M0ARBITS;
sfr volatile typeDMA1_S4M0ARBITS DMA1_S4M0ARbits absolute 0x4002607C;

 typedef struct tagDMA1_S4M1ARBITS {
  union {
    struct {
      unsigned M1A : 32;
    };
  };
} typeDMA1_S4M1ARBITS;
sfr volatile typeDMA1_S4M1ARBITS DMA1_S4M1ARbits absolute 0x40026080;

 typedef struct tagDMA1_S4FCRBITS {
  union {
    struct {
      unsigned FTH : 2;
      unsigned DMDIS : 1;
      unsigned FS : 3;
      unsigned : 1;
      unsigned FEIE : 1;
      unsigned : 24;
    };
  };
} typeDMA1_S4FCRBITS;
sfr volatile typeDMA1_S4FCRBITS DMA1_S4FCRbits absolute 0x40026084;

 typedef struct tagDMA1_S5CRBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned DMEIE : 1;
      unsigned TEIE : 1;
      unsigned HTIE : 1;
      unsigned TCIE : 1;
      unsigned PFCTRL : 1;
      unsigned DIR : 2;
      unsigned CIRC : 1;
      unsigned PINC : 1;
      unsigned MINC : 1;
      unsigned PSIZE : 2;
      unsigned MSIZE : 2;
      unsigned PINCOS : 1;
      unsigned PL : 2;
      unsigned DBM : 1;
      unsigned CT : 1;
      unsigned ACK : 1;
      unsigned PBURST : 2;
      unsigned MBURST : 2;
      unsigned CHSEL : 3;
      unsigned : 4;
    };
  };
} typeDMA1_S5CRBITS;
sfr volatile typeDMA1_S5CRBITS DMA1_S5CRbits absolute 0x40026088;

 typedef struct tagDMA1_S5NDTRBITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_S5NDTRBITS;
sfr volatile typeDMA1_S5NDTRBITS DMA1_S5NDTRbits absolute 0x4002608C;

 typedef struct tagDMA1_S5PARBITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_S5PARBITS;
sfr volatile typeDMA1_S5PARBITS DMA1_S5PARbits absolute 0x40026090;

 typedef struct tagDMA1_S5M0ARBITS {
  union {
    struct {
      unsigned M0A : 32;
    };
  };
} typeDMA1_S5M0ARBITS;
sfr volatile typeDMA1_S5M0ARBITS DMA1_S5M0ARbits absolute 0x40026094;

 typedef struct tagDMA1_S5M1ARBITS {
  union {
    struct {
      unsigned M1A : 32;
    };
  };
} typeDMA1_S5M1ARBITS;
sfr volatile typeDMA1_S5M1ARBITS DMA1_S5M1ARbits absolute 0x40026098;

 typedef struct tagDMA1_S5FCRBITS {
  union {
    struct {
      unsigned FTH : 2;
      unsigned DMDIS : 1;
      unsigned FS : 3;
      unsigned : 1;
      unsigned FEIE : 1;
      unsigned : 24;
    };
  };
} typeDMA1_S5FCRBITS;
sfr volatile typeDMA1_S5FCRBITS DMA1_S5FCRbits absolute 0x4002609C;

 typedef struct tagDMA1_S6CRBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned DMEIE : 1;
      unsigned TEIE : 1;
      unsigned HTIE : 1;
      unsigned TCIE : 1;
      unsigned PFCTRL : 1;
      unsigned DIR : 2;
      unsigned CIRC : 1;
      unsigned PINC : 1;
      unsigned MINC : 1;
      unsigned PSIZE : 2;
      unsigned MSIZE : 2;
      unsigned PINCOS : 1;
      unsigned PL : 2;
      unsigned DBM : 1;
      unsigned CT : 1;
      unsigned ACK : 1;
      unsigned PBURST : 2;
      unsigned MBURST : 2;
      unsigned CHSEL : 3;
      unsigned : 4;
    };
  };
} typeDMA1_S6CRBITS;
sfr volatile typeDMA1_S6CRBITS DMA1_S6CRbits absolute 0x400260A0;

 typedef struct tagDMA1_S6NDTRBITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_S6NDTRBITS;
sfr volatile typeDMA1_S6NDTRBITS DMA1_S6NDTRbits absolute 0x400260A4;

 typedef struct tagDMA1_S6PARBITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_S6PARBITS;
sfr volatile typeDMA1_S6PARBITS DMA1_S6PARbits absolute 0x400260A8;

 typedef struct tagDMA1_S6M0ARBITS {
  union {
    struct {
      unsigned M0A : 32;
    };
  };
} typeDMA1_S6M0ARBITS;
sfr volatile typeDMA1_S6M0ARBITS DMA1_S6M0ARbits absolute 0x400260AC;

 typedef struct tagDMA1_S6M1ARBITS {
  union {
    struct {
      unsigned M1A : 32;
    };
  };
} typeDMA1_S6M1ARBITS;
sfr volatile typeDMA1_S6M1ARBITS DMA1_S6M1ARbits absolute 0x400260B0;

 typedef struct tagDMA1_S6FCRBITS {
  union {
    struct {
      unsigned FTH : 2;
      unsigned DMDIS : 1;
      unsigned FS : 3;
      unsigned : 1;
      unsigned FEIE : 1;
      unsigned : 24;
    };
  };
} typeDMA1_S6FCRBITS;
sfr volatile typeDMA1_S6FCRBITS DMA1_S6FCRbits absolute 0x400260B4;

 typedef struct tagDMA1_S7CRBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned DMEIE : 1;
      unsigned TEIE : 1;
      unsigned HTIE : 1;
      unsigned TCIE : 1;
      unsigned PFCTRL : 1;
      unsigned DIR : 2;
      unsigned CIRC : 1;
      unsigned PINC : 1;
      unsigned MINC : 1;
      unsigned PSIZE : 2;
      unsigned MSIZE : 2;
      unsigned PINCOS : 1;
      unsigned PL : 2;
      unsigned DBM : 1;
      unsigned CT : 1;
      unsigned ACK : 1;
      unsigned PBURST : 2;
      unsigned MBURST : 2;
      unsigned CHSEL : 3;
      unsigned : 4;
    };
  };
} typeDMA1_S7CRBITS;
sfr volatile typeDMA1_S7CRBITS DMA1_S7CRbits absolute 0x400260B8;

 typedef struct tagDMA1_S7NDTRBITS {
  union {
    struct {
      unsigned NDT : 16;
      unsigned : 16;
    };
  };
} typeDMA1_S7NDTRBITS;
sfr volatile typeDMA1_S7NDTRBITS DMA1_S7NDTRbits absolute 0x400260BC;

 typedef struct tagDMA1_S7PARBITS {
  union {
    struct {
      unsigned PA : 32;
    };
  };
} typeDMA1_S7PARBITS;
sfr volatile typeDMA1_S7PARBITS DMA1_S7PARbits absolute 0x400260C0;

 typedef struct tagDMA1_S7M0ARBITS {
  union {
    struct {
      unsigned M0A : 32;
    };
  };
} typeDMA1_S7M0ARBITS;
sfr volatile typeDMA1_S7M0ARBITS DMA1_S7M0ARbits absolute 0x400260C4;

 typedef struct tagDMA1_S7M1ARBITS {
  union {
    struct {
      unsigned M1A : 32;
    };
  };
} typeDMA1_S7M1ARBITS;
sfr volatile typeDMA1_S7M1ARBITS DMA1_S7M1ARbits absolute 0x400260C8;

 typedef struct tagDMA1_S7FCRBITS {
  union {
    struct {
      unsigned FTH : 2;
      unsigned DMDIS : 1;
      unsigned FS : 3;
      unsigned : 1;
      unsigned FEIE : 1;
      unsigned : 24;
    };
  };
} typeDMA1_S7FCRBITS;
sfr volatile typeDMA1_S7FCRBITS DMA1_S7FCRbits absolute 0x400260CC;

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
sfr volatile typeGPIOH_MODERBITS GPIOH_MODERbits absolute 0x40021C00;

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
sfr volatile typeGPIOH_OTYPERBITS GPIOH_OTYPERbits absolute 0x40021C04;

 typedef struct tagGPIOH_OSPEEDRBITS {
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
} typeGPIOH_OSPEEDRBITS;
sfr volatile typeGPIOH_OSPEEDRBITS GPIOH_OSPEEDRbits absolute 0x40021C08;

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
sfr volatile typeGPIOH_PUPDRBITS GPIOH_PUPDRbits absolute 0x40021C0C;

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
sfr volatile typeGPIOH_IDRBITS GPIOH_IDRbits absolute 0x40021C10;

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
sfr volatile typeGPIOH_ODRBITS GPIOH_ODRbits absolute 0x40021C14;

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
sfr volatile typeGPIOH_BSRRBITS GPIOH_BSRRbits absolute 0x40021C18;

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
sfr volatile typeGPIOH_LCKRBITS GPIOH_LCKRbits absolute 0x40021C1C;

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
sfr volatile typeGPIOH_AFRLBITS GPIOH_AFRLbits absolute 0x40021C20;

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
sfr volatile typeGPIOH_AFRHBITS GPIOH_AFRHbits absolute 0x40021C24;

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
sfr volatile typeGPIOC_OSPEEDRBITS GPIOC_OSPEEDRbits absolute 0x40020808;

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
sfr volatile typeGPIOB_OSPEEDRBITS GPIOB_OSPEEDRbits absolute 0x40020408;

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
sfr volatile typeGPIOA_OSPEEDRBITS GPIOA_OSPEEDRbits absolute 0x40020008;

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

 typedef struct tagSPI5_CR1BITS {
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
} typeSPI5_CR1BITS;
sfr volatile typeSPI5_CR1BITS SPI5_CR1bits absolute 0x40015000;

 typedef struct tagSPI5_CR2BITS {
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
} typeSPI5_CR2BITS;
sfr volatile typeSPI5_CR2BITS SPI5_CR2bits absolute 0x40015004;

 typedef struct tagSPI5_SRBITS {
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
} typeSPI5_SRBITS;
sfr volatile typeSPI5_SRBITS SPI5_SRbits absolute 0x40015008;

 typedef struct tagSPI5_DRBITS {
  union {
    struct {
      unsigned DR : 16;
      unsigned : 16;
    };
  };
} typeSPI5_DRBITS;
sfr volatile typeSPI5_DRBITS SPI5_DRbits absolute 0x4001500C;

 typedef struct tagSPI5_CRCPRBITS {
  union {
    struct {
      unsigned CRCPOLY : 16;
      unsigned : 16;
    };
  };
} typeSPI5_CRCPRBITS;
sfr volatile typeSPI5_CRCPRBITS SPI5_CRCPRbits absolute 0x40015010;

 typedef struct tagSPI5_RXCRCRBITS {
  union {
    struct {
      unsigned RxCRC : 16;
      unsigned : 16;
    };
  };
} typeSPI5_RXCRCRBITS;
sfr volatile typeSPI5_RXCRCRBITS SPI5_RXCRCRbits absolute 0x40015014;

 typedef struct tagSPI5_TXCRCRBITS {
  union {
    struct {
      unsigned TxCRC : 16;
      unsigned : 16;
    };
  };
} typeSPI5_TXCRCRBITS;
sfr volatile typeSPI5_TXCRCRBITS SPI5_TXCRCRbits absolute 0x40015018;

 typedef struct tagSPI5_I2SCFGRBITS {
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
} typeSPI5_I2SCFGRBITS;
sfr volatile typeSPI5_I2SCFGRBITS SPI5_I2SCFGRbits absolute 0x4001501C;

 typedef struct tagSPI5_I2SPRBITS {
  union {
    struct {
      unsigned I2SDIV : 8;
      unsigned ODD : 1;
      unsigned MCKOE : 1;
      unsigned : 22;
    };
  };
} typeSPI5_I2SPRBITS;
sfr volatile typeSPI5_I2SPRBITS SPI5_I2SPRbits absolute 0x40015020;

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
      unsigned SETENA : 32;
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
      unsigned CLRENA : 32;
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
      unsigned SETPEND : 32;
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
      unsigned CLRPEND : 32;
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
      unsigned ACTIVE : 32;
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

 typedef struct tagNVIC_IPR15BITS {
  union {
    struct {
      unsigned IPR_N0 : 8;
      unsigned IPR_N1 : 8;
      unsigned IPR_N2 : 8;
      unsigned IPR_N3 : 8;
    };
  };
} typeNVIC_IPR15BITS;
sfr far volatile typeNVIC_IPR15BITS NVIC_IPR15bits absolute 0xE000E43C;

 typedef struct tagNVIC_IPR16BITS {
  union {
    struct {
      unsigned IPR_N0 : 8;
      unsigned IPR_N1 : 8;
      unsigned IPR_N2 : 8;
      unsigned IPR_N3 : 8;
    };
  };
} typeNVIC_IPR16BITS;
sfr far volatile typeNVIC_IPR16BITS NVIC_IPR16bits absolute 0xE000E440;

 typedef struct tagNVIC_IPR17BITS {
  union {
    struct {
      unsigned IPR_N0 : 8;
      unsigned IPR_N1 : 8;
      unsigned IPR_N2 : 8;
      unsigned IPR_N3 : 8;
    };
  };
} typeNVIC_IPR17BITS;
sfr far volatile typeNVIC_IPR17BITS NVIC_IPR17bits absolute 0xE000E444;

 typedef struct tagNVIC_IPR18BITS {
  union {
    struct {
      unsigned IPR_N0 : 8;
      unsigned IPR_N1 : 8;
      unsigned IPR_N2 : 8;
      unsigned IPR_N3 : 8;
    };
  };
} typeNVIC_IPR18BITS;
sfr far volatile typeNVIC_IPR18BITS NVIC_IPR18bits absolute 0xE000E448;

 typedef struct tagNVIC_IPR19BITS {
  union {
    struct {
      unsigned IPR_N0 : 8;
      unsigned IPR_N1 : 8;
      unsigned IPR_N2 : 8;
      unsigned IPR_N3 : 8;
    };
  };
} typeNVIC_IPR19BITS;
sfr far volatile typeNVIC_IPR19BITS NVIC_IPR19bits absolute 0xE000E44C;

 typedef struct tagNVIC_IPR20BITS {
  union {
    struct {
      unsigned IPR_N0 : 8;
      unsigned IPR_N1 : 8;
      unsigned IPR_N2 : 8;
      unsigned IPR_N3 : 8;
    };
  };
} typeNVIC_IPR20BITS;
sfr far volatile typeNVIC_IPR20BITS NVIC_IPR20bits absolute 0xE000E450;

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

 typedef struct tagRNG_CRBITS {
  union {
    struct {
      unsigned : 2;
      unsigned RNGEN : 1;
      unsigned IE : 1;
      unsigned : 28;
    };
  };
} typeRNG_CRBITS;
sfr volatile typeRNG_CRBITS RNG_CRbits absolute 0x40080000;

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
sfr volatile typeRNG_SRBITS RNG_SRbits absolute 0x40080004;

 typedef struct tagRNG_DRBITS {
  union {
    struct {
      unsigned RNDATA : 32;
    };
  };
} typeRNG_DRBITS;
sfr volatile typeRNG_DRBITS RNG_DRbits absolute 0x40080008;

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
sfr volatile typeLPTIM1_ISRBITS LPTIM1_ISRbits absolute 0x40002400;

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
sfr volatile typeLPTIM1_ICRBITS LPTIM1_ICRbits absolute 0x40002404;

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
sfr volatile typeLPTIM1_IERBITS LPTIM1_IERbits absolute 0x40002408;

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
sfr volatile typeLPTIM1_CFGRBITS LPTIM1_CFGRbits absolute 0x4000240C;

 typedef struct tagLPTIM1_CRBITS {
  union {
    struct {
      unsigned ENABLE_ : 1;
      unsigned SNGSTRT : 1;
      unsigned CNTSTRT : 1;
      unsigned : 29;
    };
  };
} typeLPTIM1_CRBITS;
sfr volatile typeLPTIM1_CRBITS LPTIM1_CRbits absolute 0x40002410;

 typedef struct tagLPTIM1_CMPBITS {
  union {
    struct {
      unsigned CMP : 16;
      unsigned : 16;
    };
  };
} typeLPTIM1_CMPBITS;
sfr volatile typeLPTIM1_CMPBITS LPTIM1_CMPbits absolute 0x40002414;

 typedef struct tagLPTIM1_ARRBITS {
  union {
    struct {
      unsigned ARR : 16;
      unsigned : 16;
    };
  };
} typeLPTIM1_ARRBITS;
sfr volatile typeLPTIM1_ARRBITS LPTIM1_ARRbits absolute 0x40002418;

 typedef struct tagLPTIM1_CNTBITS {
  union {
    struct {
      unsigned CNT : 16;
      unsigned : 16;
    };
  };
} typeLPTIM1_CNTBITS;
sfr volatile typeLPTIM1_CNTBITS LPTIM1_CNTbits absolute 0x4000241C;

 typedef struct tagLPTIM1_OPTRBITS {
  union {
    struct {
      unsigned OR : 2;
      unsigned : 30;
    };
  };
} typeLPTIM1_OPTRBITS;
sfr volatile typeLPTIM1_OPTRBITS LPTIM1_OPTRbits absolute 0x40002420;

 typedef struct tagI2C4_CR1BITS {
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
} typeI2C4_CR1BITS;
sfr volatile typeI2C4_CR1BITS I2C4_CR1bits absolute 0x40006000;

 typedef struct tagI2C4_CR2BITS {
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
} typeI2C4_CR2BITS;
sfr volatile typeI2C4_CR2BITS I2C4_CR2bits absolute 0x40006004;

 typedef struct tagI2C4_OAR1BITS {
  union {
    struct {
      unsigned OA1 : 10;
      unsigned OA1MODE : 1;
      unsigned : 4;
      unsigned OA1EN : 1;
      unsigned : 16;
    };
  };
} typeI2C4_OAR1BITS;
sfr volatile typeI2C4_OAR1BITS I2C4_OAR1bits absolute 0x40006008;

 typedef struct tagI2C4_OAR2BITS {
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
} typeI2C4_OAR2BITS;
sfr volatile typeI2C4_OAR2BITS I2C4_OAR2bits absolute 0x4000600C;

 typedef struct tagI2C4_TIMINGRBITS {
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
} typeI2C4_TIMINGRBITS;
sfr volatile typeI2C4_TIMINGRBITS I2C4_TIMINGRbits absolute 0x40006010;

 typedef struct tagI2C4_TIMEOUTRBITS {
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
} typeI2C4_TIMEOUTRBITS;
sfr volatile typeI2C4_TIMEOUTRBITS I2C4_TIMEOUTRbits absolute 0x40006014;

 typedef struct tagI2C4_ISRBITS {
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
} typeI2C4_ISRBITS;
sfr volatile typeI2C4_ISRBITS I2C4_ISRbits absolute 0x40006018;

 typedef struct tagI2C4_ICRBITS {
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
} typeI2C4_ICRBITS;
sfr volatile typeI2C4_ICRBITS I2C4_ICRbits absolute 0x4000601C;

 typedef struct tagI2C4_PECRBITS {
  union {
    struct {
      unsigned PEC : 8;
      unsigned : 24;
    };
  };
} typeI2C4_PECRBITS;
sfr volatile typeI2C4_PECRBITS I2C4_PECRbits absolute 0x40006020;

 typedef struct tagI2C4_RXDRBITS {
  union {
    struct {
      unsigned RXDATA : 8;
      unsigned : 24;
    };
  };
} typeI2C4_RXDRBITS;
sfr volatile typeI2C4_RXDRBITS I2C4_RXDRbits absolute 0x40006024;

 typedef struct tagI2C4_TXDRBITS {
  union {
    struct {
      unsigned TXDATA : 8;
      unsigned : 24;
    };
  };
} typeI2C4_TXDRBITS;
sfr volatile typeI2C4_TXDRBITS I2C4_TXDRbits absolute 0x40006028;
