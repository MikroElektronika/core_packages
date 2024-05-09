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

const unsigned long __FLASH_SIZE = 0x00018000;


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
const IVT_INT_I2C0               = 16;
const IVT_INT_I2C1               = 17;
const IVT_INT_I2C2               = 18;
const IVT_INT_I2C3               = 19;
const IVT_INT_DMA0               = 20;
const IVT_INT_DMA1               = 21;
const IVT_INT_DMA2               = 22;
const IVT_INT_DMA3               = 23;
const IVT_INT_DMA4               = 24;
const IVT_INT_DMA5               = 25;
const IVT_INT_DMA6               = 26;
const IVT_INT_DMA7               = 27;
const IVT_INT_LPC                = 28;
const IVT_INT_UART_0             = 29;
const IVT_INT_EMI_0              = 30;
const IVT_INT_ACPIEC0_IBF        = 31;
const IVT_INT_ACPIEC0_OBF        = 32;
const IVT_INT_ACPIEC1_IBF        = 33;
const IVT_INT_ACPIEC1_OBF        = 34;
const IVT_INT_ACPIPM1_CTL        = 35;
const IVT_INT_ACPIPM1_EN         = 36;
const IVT_INT_ACPIPM1_STS        = 37;
const IVT_INT_KBC8042_OBF        = 38;
const IVT_INT_KBC8042_IBF        = 39;
const IVT_INT_MAILBOX            = 40;
const IVT_INT_PECIHOST           = 41;
const IVT_INT_TACH_0             = 42;
const IVT_INT_TACH_1             = 43;
const IVT_INT_ADC_SNGL           = 44;
const IVT_INT_ADC_RPT            = 45;
const IVT_INT_ADC2PWM_N1         = 46;
const IVT_INT_ADC2PWM_N2         = 47;
const IVT_INT_PS2_0              = 48;
const IVT_INT_PS2_1              = 49;
const IVT_INT_PS2_2              = 50;
const IVT_INT_PS2_3              = 51;
const IVT_INT_SPI0_TX            = 52;
const IVT_INT_SPI0_RX            = 53;
const IVT_INT_HTIMER             = 54;
const IVT_INT_KSC_INT            = 55;
const IVT_INT_MAILBOX_DATA       = 56;
const IVT_INT_RPM_Stall          = 57;
const IVT_INT_RPM_Spin           = 58;
const IVT_INT_PFR_STS            = 59;
const IVT_INT_PWM_WDT0           = 60;
const IVT_INT_PWM_WDT1           = 61;
const IVT_INT_PWM_WDT2           = 62;
const IVT_INT_BCM_Err            = 63;
const IVT_INT_BCM_Busy           = 64;
const IVT_INT_TIMER0             = 65;
const IVT_INT_TIMER1             = 66;
const IVT_INT_TIMER2             = 67;
const IVT_INT_TIMER3             = 68;
const IVT_INT_TIMER4             = 69;
const IVT_INT_TIMER5             = 70;
const IVT_INT_SPI1_TX            = 71;
const IVT_INT_SPI1_RX            = 72;
const IVT_INT_GIRQ08             = 73;
const IVT_INT_GIRQ09             = 74;
const IVT_INT_GIRQ10             = 75;
const IVT_INT_GIRQ11             = 76;
const IVT_INT_GIRQ12             = 77;
const IVT_INT_GIRQ13             = 78;
const IVT_INT_GIRQ14             = 79;
const IVT_INT_GIRQ15             = 80;
const IVT_INT_GIRQ16             = 81;
const IVT_INT_GIRQ17             = 82;
const IVT_INT_GIRQ18             = 83;
const IVT_INT_GIRQ19             = 84;
const IVT_INT_GIRQ20             = 85;
const IVT_INT_GIRQ21             = 86;
const IVT_INT_GIRQ22             = 87;
const IVT_INT_GIRQ23             = 88;
const IVT_INT_DMA8               = 97;
const IVT_INT_DMA9               = 98;
const IVT_INT_DMA10              = 99;
const IVT_INT_DMA11              = 100;
const IVT_INT_PWM_WDT3           = 101;
const IVT_INT_RTC                = 107;
const IVT_INT_RTC_ALARM          = 108;

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
sfr far unsigned long   volatile PCR_CHIP_SLP_EN      absolute 0x40080100;
sfr far unsigned long   volatile PCR_CHIP_CLK_REQ_STS absolute 0x40080104;
sfr far unsigned long   volatile PCR_EC_SLP_EN        absolute 0x40080108;
    const register unsigned short int INT_SLP_EN = 0;
    sbit  INT_SLP_EN_bit at PCR_EC_SLP_EN.B0;
    const register unsigned short int PECI_SLP_EN = 1;
    sbit  PECI_SLP_EN_bit at PCR_EC_SLP_EN.B1;
    const register unsigned short int TACH0_SLP_EN = 2;
    sbit  TACH0_SLP_EN_bit at PCR_EC_SLP_EN.B2;
    const register unsigned short int PWM0_SLP_EN = 4;
    sbit  PWM0_SLP_EN_bit at PCR_EC_SLP_EN.B4;
    const register unsigned short int PMC_SLP_EN = 5;
    sbit  PMC_SLP_EN_bit at PCR_EC_SLP_EN.B5;
    const register unsigned short int DMA_SLP_EN = 6;
    sbit  DMA_SLP_EN_bit at PCR_EC_SLP_EN.B6;
    const register unsigned short int TFDP_SLP_EN = 7;
    sbit  TFDP_SLP_EN_bit at PCR_EC_SLP_EN.B7;
    const register unsigned short int PROCESSOR_SLP_EN = 8;
    sbit  PROCESSOR_SLP_EN_bit at PCR_EC_SLP_EN.B8;
    const register unsigned short int WDT_SLP_EN = 9;
    sbit  WDT_SLP_EN_bit at PCR_EC_SLP_EN.B9;
    const register unsigned short int SMB0_SLP_EN = 10;
    sbit  SMB0_SLP_EN_bit at PCR_EC_SLP_EN.B10;
    const register unsigned short int TACH1_SLP_EN = 11;
    sbit  TACH1_SLP_EN_bit at PCR_EC_SLP_EN.B11;
    const register unsigned short int PWM1_SLP_EN = 20;
    sbit  PWM1_SLP_EN_bit at PCR_EC_SLP_EN.B20;
    const register unsigned short int PWM2_SLP_EN = 21;
    sbit  PWM2_SLP_EN_bit at PCR_EC_SLP_EN.B21;
    const register unsigned short int PWM3_SLP_EN = 22;
    sbit  PWM3_SLP_EN_bit at PCR_EC_SLP_EN.B22;
    const register unsigned short int EC_REG_BANK_SLP_EN = 29;
    sbit  EC_REG_BANK_SLP_EN_bit at PCR_EC_SLP_EN.B29;
    const register unsigned short int TIMER16_0_SLP_EN = 30;
    sbit  TIMER16_0_SLP_EN_bit at PCR_EC_SLP_EN.B30;
    const register unsigned short int TIMER16_1_SLP_EN = 31;
    sbit  TIMER16_1_SLP_EN_bit at PCR_EC_SLP_EN.B31;

sfr far unsigned long   volatile PCR_EC_CLK_REQ_STS   absolute 0x4008010C;
    const register unsigned short int INT_CLK_REQ = 0;
    sbit  INT_CLK_REQ_bit at PCR_EC_CLK_REQ_STS.B0;
    const register unsigned short int PECI_CLK_REQ = 1;
    sbit  PECI_CLK_REQ_bit at PCR_EC_CLK_REQ_STS.B1;
    const register unsigned short int TACH0_CLK_REQ = 2;
    sbit  TACH0_CLK_REQ_bit at PCR_EC_CLK_REQ_STS.B2;
    const register unsigned short int PWM0_CLK_REQ = 4;
    sbit  PWM0_CLK_REQ_bit at PCR_EC_CLK_REQ_STS.B4;
    const register unsigned short int PMC_CLK_REQ = 5;
    sbit  PMC_CLK_REQ_bit at PCR_EC_CLK_REQ_STS.B5;
    const register unsigned short int DMA_CLK_REQ = 6;
    sbit  DMA_CLK_REQ_bit at PCR_EC_CLK_REQ_STS.B6;
    const register unsigned short int TFDP_CLK_REQ = 7;
    sbit  TFDP_CLK_REQ_bit at PCR_EC_CLK_REQ_STS.B7;
    const register unsigned short int PROCESSOR_CLK_REQ = 8;
    sbit  PROCESSOR_CLK_REQ_bit at PCR_EC_CLK_REQ_STS.B8;
    const register unsigned short int WDT_CLK_REQ = 9;
    sbit  WDT_CLK_REQ_bit at PCR_EC_CLK_REQ_STS.B9;
    const register unsigned short int SMB0_CLK_REQ = 10;
    sbit  SMB0_CLK_REQ_bit at PCR_EC_CLK_REQ_STS.B10;
    const register unsigned short int TACH1_CLK_REQ = 11;
    sbit  TACH1_CLK_REQ_bit at PCR_EC_CLK_REQ_STS.B11;
    const register unsigned short int PWM1_CLK_REQ = 20;
    sbit  PWM1_CLK_REQ_bit at PCR_EC_CLK_REQ_STS.B20;
    const register unsigned short int PWM2_CLK_REQ = 21;
    sbit  PWM2_CLK_REQ_bit at PCR_EC_CLK_REQ_STS.B21;
    const register unsigned short int PWM3_CLK_REQ = 22;
    sbit  PWM3_CLK_REQ_bit at PCR_EC_CLK_REQ_STS.B22;
    const register unsigned short int EC_REG_BANK_CLK_REQ = 29;
    sbit  EC_REG_BANK_CLK_REQ_bit at PCR_EC_CLK_REQ_STS.B29;
    const register unsigned short int TIMER16_0_CLK_REQ = 30;
    sbit  TIMER16_0_CLK_REQ_bit at PCR_EC_CLK_REQ_STS.B30;
    const register unsigned short int TIMER16_1_CLK_REQ = 31;
    sbit  TIMER16_1_CLK_REQ_bit at PCR_EC_CLK_REQ_STS.B31;

sfr far unsigned long   volatile PCR_HOST_SLP_EN      absolute 0x40080110;
    const register unsigned short int LPC_SLP_EN = 0;
    sbit  LPC_SLP_EN_bit at PCR_HOST_SLP_EN.B0;
    const register unsigned short int M16550_0_SLP_EN = 1;
    sbit  M16550_0_SLP_EN_bit at PCR_HOST_SLP_EN.B1;
    const register unsigned short int GLBL_CFG_SLP_EN = 12;
    sbit  GLBL_CFG_SLP_EN_bit at PCR_HOST_SLP_EN.B12;
    const register unsigned short int ACPI_EC_0_SLP_EN = 13;
    sbit  ACPI_EC_0_SLP_EN_bit at PCR_HOST_SLP_EN.B13;
    const register unsigned short int ACPI_EC_1_SLP_EN = 14;
    sbit  ACPI_EC_1_SLP_EN_bit at PCR_HOST_SLP_EN.B14;
    const register unsigned short int ACPI_PM1_SLP_EN = 15;
    sbit  ACPI_PM1_SLP_EN_bit at PCR_HOST_SLP_EN.B15;
    const register unsigned short int KBCEM_SLP_EN = 16;
    sbit  KBCEM_SLP_EN_bit at PCR_HOST_SLP_EN.B16;
    const register unsigned short int RTC_SLP_EN = 18;
    sbit  RTC_SLP_EN_bit at PCR_HOST_SLP_EN.B18;

sfr far unsigned long   volatile PCR_HOST_CLK_REQ     absolute 0x40080114;
    const register unsigned short int LPC_CLK_REQ = 0;
    sbit  LPC_CLK_REQ_bit at PCR_HOST_CLK_REQ.B0;
    const register unsigned short int M16550_0_CLK_REQ = 1;
    sbit  M16550_0_CLK_REQ_bit at PCR_HOST_CLK_REQ.B1;
    const register unsigned short int GLBL_CFG_CLK_REQ = 12;
    sbit  GLBL_CFG_CLK_REQ_bit at PCR_HOST_CLK_REQ.B12;
    const register unsigned short int ACPI_EC_0_CLK_REQ = 13;
    sbit  ACPI_EC_0_CLK_REQ_bit at PCR_HOST_CLK_REQ.B13;
    const register unsigned short int ACPI_EC_1_CLK_REQ = 14;
    sbit  ACPI_EC_1_CLK_REQ_bit at PCR_HOST_CLK_REQ.B14;
    const register unsigned short int ACPI_PM1_CLK_REQ = 15;
    sbit  ACPI_PM1_CLK_REQ_bit at PCR_HOST_CLK_REQ.B15;
    const register unsigned short int KBCEM_CLK_REQ = 16;
    sbit  KBCEM_CLK_REQ_bit at PCR_HOST_CLK_REQ.B16;
    const register unsigned short int RTC_CLK_REQ = 18;
    sbit  RTC_CLK_REQ_bit at PCR_HOST_CLK_REQ.B18;

sfr far unsigned long   volatile PCR_SYS_SLP_CNTRL    absolute 0x40080118;
    const register unsigned short int ROSC_PD = 0;
    sbit  ROSC_PD_bit at PCR_SYS_SLP_CNTRL.B0;
    const register unsigned short int ROSC_GATE = 1;
    sbit  ROSC_GATE_bit at PCR_SYS_SLP_CNTRL.B1;
    const register unsigned short int REG_STDBY = 2;
    sbit  REG_STDBY_bit at PCR_SYS_SLP_CNTRL.B2;

sfr far unsigned long   volatile PCR_PROC_CLK_CNTRL   absolute 0x40080120;
sfr far unsigned long   volatile PCR_EC_SLP_EN2       absolute 0x40080124;
    const register unsigned short int ADC_SLP_EN = 3;
    sbit  ADC_SLP_EN_bit at PCR_EC_SLP_EN2.B3;
    const register unsigned short int PS2_0_SLP_EN = 5;
    sbit  PS2_0_SLP_EN_bit at PCR_EC_SLP_EN2.B5;
    const register unsigned short int PS2_1_SLP_EN = 6;
    sbit  PS2_1_SLP_EN_bit at PCR_EC_SLP_EN2.B6;
    const register unsigned short int PS2_2_SLP_EN = 7;
    sbit  PS2_2_SLP_EN_bit at PCR_EC_SLP_EN2.B7;
    const register unsigned short int PS2_3_SLP_EN = 8;
    sbit  PS2_3_SLP_EN_bit at PCR_EC_SLP_EN2.B8;
    const register unsigned short int SPI0_SLP_EN = 9;
    sbit  SPI0_SLP_EN_bit at PCR_EC_SLP_EN2.B9;
    const register unsigned short int HTIMER_SLP_EN = 10;
    sbit  HTIMER_SLP_EN_bit at PCR_EC_SLP_EN2.B10;
    const register unsigned short int KEYSCAN_SLP_EN = 11;
    sbit  KEYSCAN_SLP_EN_bit at PCR_EC_SLP_EN2.B11;
    const register unsigned short int RPMPWM_SLP_EN = 12;
    sbit  RPMPWM_SLP_EN_bit at PCR_EC_SLP_EN2.B12;
    const register unsigned short int SMB1_SLP_EN = 13;
    sbit  SMB1_SLP_EN_bit at PCR_EC_SLP_EN2.B13;
    const register unsigned short int SMB2_SLP_EN = 14;
    sbit  SMB2_SLP_EN_bit at PCR_EC_SLP_EN2.B14;
    const register unsigned short int SMB3_SLP_EN = 15;
    sbit  SMB3_SLP_EN_bit at PCR_EC_SLP_EN2.B15;
    const register unsigned short int LED0_SLP_EN = 16;
    sbit  LED0_SLP_EN_bit at PCR_EC_SLP_EN2.B16;
    const register unsigned short int LED1_SLP_EN = 17;
    sbit  LED1_SLP_EN_bit at PCR_EC_SLP_EN2.B17;
    const register unsigned short int LED2_SLP_EN = 18;
    sbit  LED2_SLP_EN_bit at PCR_EC_SLP_EN2.B18;
    const register unsigned short int BCM_SLP_EN = 19;
    sbit  BCM_SLP_EN_bit at PCR_EC_SLP_EN2.B19;
    const register unsigned short int SPI1_SLP_EN = 20;
    sbit  SPI1_SLP_EN_bit at PCR_EC_SLP_EN2.B20;
    const register unsigned short int TIMER16_2_SLP_EN = 21;
    sbit  TIMER16_2_SLP_EN_bit at PCR_EC_SLP_EN2.B21;
    const register unsigned short int TIMER16_3_SLP_EN = 22;
    sbit  TIMER16_3_SLP_EN_bit at PCR_EC_SLP_EN2.B22;
    const register unsigned short int TIMER32_0_SLP_EN = 23;
    sbit  TIMER32_0_SLP_EN_bit at PCR_EC_SLP_EN2.B23;
    const register unsigned short int TIMER32_1_SLP_EN = 24;
    sbit  TIMER32_1_SLP_EN_bit at PCR_EC_SLP_EN2.B24;
    const register unsigned short int LED3_SLP_EN = 25;
    sbit  LED3_SLP_EN_bit at PCR_EC_SLP_EN2.B25;

sfr far unsigned long   volatile PCR_EC_CLK_REQ2_STS  absolute 0x40080128;
    const register unsigned short int ADC_CLK_REQ = 3;
    sbit  ADC_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B3;
    const register unsigned short int PS2_0_SLP_CLK_REQ = 5;
    sbit  PS2_0_SLP_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B5;
    const register unsigned short int PS2_1_SLP_CLK_REQ = 6;
    sbit  PS2_1_SLP_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B6;
    const register unsigned short int PS2_2_SLP_CLK_REQ = 7;
    sbit  PS2_2_SLP_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B7;
    const register unsigned short int PS2_3_SLP_CLK_REQ = 8;
    sbit  PS2_3_SLP_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B8;
    const register unsigned short int SPI0_SLP_CLK_REQ = 9;
    sbit  SPI0_SLP_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B9;
    const register unsigned short int HTIMER_SLP_CLK_REQ = 10;
    sbit  HTIMER_SLP_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B10;
    const register unsigned short int KEYSCAN_SLP_CLK_REQ = 11;
    sbit  KEYSCAN_SLP_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B11;
    const register unsigned short int RPMPWM_SLP_CLK_REQ = 12;
    sbit  RPMPWM_SLP_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B12;
    const register unsigned short int SMB1_SLP_CLK_REQ = 13;
    sbit  SMB1_SLP_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B13;
    const register unsigned short int SMB2_SLP_CLK_REQ = 14;
    sbit  SMB2_SLP_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B14;
    const register unsigned short int SMB3_SLP_CLK_REQ = 15;
    sbit  SMB3_SLP_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B15;
    const register unsigned short int LED0_SLP_CLK_REQ = 16;
    sbit  LED0_SLP_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B16;
    const register unsigned short int LED1_SLP_CLK_REQ = 17;
    sbit  LED1_SLP_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B17;
    const register unsigned short int LED2_SLP_CLK_REQ = 18;
    sbit  LED2_SLP_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B18;
    const register unsigned short int BCM_SLP_CLK_REQ = 19;
    sbit  BCM_SLP_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B19;
    const register unsigned short int SPI1_SLP_CLK_REQ = 20;
    sbit  SPI1_SLP_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B20;
    const register unsigned short int TIMER16_2_SLP_CLK_REQ = 21;
    sbit  TIMER16_2_SLP_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B21;
    const register unsigned short int TIMER16_3_SLP_CLK_REQ = 22;
    sbit  TIMER16_3_SLP_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B22;
    const register unsigned short int TIMER32_0_SLP_CLK_REQ = 23;
    sbit  TIMER32_0_SLP_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B23;
    const register unsigned short int TIMER32_1_SLP_CLK_REQ = 24;
    sbit  TIMER32_1_SLP_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B24;
    const register unsigned short int LED3_SLP_CLK_REQ = 25;
    sbit  LED3_SLP_CLK_REQ_bit at PCR_EC_CLK_REQ2_STS.B25;

sfr far unsigned long   volatile PCR_SLOW_CLK_CNTRL   absolute 0x4008012C;
sfr far unsigned long   volatile PCR_CHIP_OSC_ID      absolute 0x40080130;
    const register unsigned short int OSC_LOCK = 8;
    sbit  OSC_LOCK_bit at PCR_CHIP_OSC_ID.B8;

sfr far unsigned long   volatile PCR_CHIP_PWR_RST_STS absolute 0x40080134;
    const register unsigned short int VCC_RST_N = 2;
    sbit  VCC_RST_N_bit at PCR_CHIP_PWR_RST_STS.B2;
    const register unsigned short int SIO_RST_N = 3;
    sbit  SIO_RST_N_bit at PCR_CHIP_PWR_RST_STS.B3;
    const register unsigned short int VBAT_RST_N = 5;
    sbit  VBAT_RST_N_bit at PCR_CHIP_PWR_RST_STS.B5;
    const register unsigned short int VCC1_RST_N = 6;
    sbit  VCC1_RST_N_bit at PCR_CHIP_PWR_RST_STS.B6;
    const register unsigned short int _32K_ACTIVE = 10;
    sbit  _32K_ACTIVE_bit at PCR_CHIP_PWR_RST_STS.B10;
    const register unsigned short int PCICLK_ACTIVE = 11;
    sbit  PCICLK_ACTIVE_bit at PCR_CHIP_PWR_RST_STS.B11;

sfr far unsigned long   volatile PCR_CHIP_RST_EN      absolute 0x40080138;
sfr far unsigned long   volatile PCR_HOST_RST_EN      absolute 0x4008013C;
    const register unsigned short int LPC_RST_EN = 0;
    sbit  LPC_RST_EN_bit at PCR_HOST_RST_EN.B0;
    const register unsigned short int M16550_0_RST_EN = 1;
    sbit  M16550_0_RST_EN_bit at PCR_HOST_RST_EN.B1;
    const register unsigned short int GLBL_CFG_RST_EN = 12;
    sbit  GLBL_CFG_RST_EN_bit at PCR_HOST_RST_EN.B12;
    const register unsigned short int ACPI_EC_0_RST_EN = 13;
    sbit  ACPI_EC_0_RST_EN_bit at PCR_HOST_RST_EN.B13;
    const register unsigned short int ACPI_EC_1_RST_EN = 14;
    sbit  ACPI_EC_1_RST_EN_bit at PCR_HOST_RST_EN.B14;
    const register unsigned short int ACPI_PM1_RST_EN = 15;
    sbit  ACPI_PM1_RST_EN_bit at PCR_HOST_RST_EN.B15;
    const register unsigned short int KBCEM_RST_EN = 16;
    sbit  KBCEM_RST_EN_bit at PCR_HOST_RST_EN.B16;
    const register unsigned short int RTC_RST_EN = 18;
    sbit  RTC_RST_EN_bit at PCR_HOST_RST_EN.B18;

sfr far unsigned long   volatile PCR_EC_RST_EN        absolute 0x40080140;
    const register unsigned short int INT_RST_EN = 0;
    sbit  INT_RST_EN_bit at PCR_EC_RST_EN.B0;
    const register unsigned short int PECI_RST_EN = 1;
    sbit  PECI_RST_EN_bit at PCR_EC_RST_EN.B1;
    const register unsigned short int TACH0_RST_EN = 2;
    sbit  TACH0_RST_EN_bit at PCR_EC_RST_EN.B2;
    const register unsigned short int PWM0_RST_EN = 4;
    sbit  PWM0_RST_EN_bit at PCR_EC_RST_EN.B4;
    const register unsigned short int PMC_RST_EN = 5;
    sbit  PMC_RST_EN_bit at PCR_EC_RST_EN.B5;
    const register unsigned short int DMA_RST_EN = 6;
    sbit  DMA_RST_EN_bit at PCR_EC_RST_EN.B6;
    const register unsigned short int TFDP_RST_EN = 7;
    sbit  TFDP_RST_EN_bit at PCR_EC_RST_EN.B7;
    const register unsigned short int PROCESSOR_RST_EN = 8;
    sbit  PROCESSOR_RST_EN_bit at PCR_EC_RST_EN.B8;
    const register unsigned short int WDT_RST_EN = 9;
    sbit  WDT_RST_EN_bit at PCR_EC_RST_EN.B9;
    const register unsigned short int SMB0_RST_EN = 10;
    sbit  SMB0_RST_EN_bit at PCR_EC_RST_EN.B10;
    const register unsigned short int TACH1_RST_EN = 11;
    sbit  TACH1_RST_EN_bit at PCR_EC_RST_EN.B11;
    const register unsigned short int PWM1_RST_EN = 20;
    sbit  PWM1_RST_EN_bit at PCR_EC_RST_EN.B20;
    const register unsigned short int PWM2_RST_EN = 21;
    sbit  PWM2_RST_EN_bit at PCR_EC_RST_EN.B21;
    const register unsigned short int PWM3_RST_EN = 22;
    sbit  PWM3_RST_EN_bit at PCR_EC_RST_EN.B22;
    const register unsigned short int EC_REG_BANK_RST_EN = 29;
    sbit  EC_REG_BANK_RST_EN_bit at PCR_EC_RST_EN.B29;
    const register unsigned short int TIMER16_0_RST_EN = 30;
    sbit  TIMER16_0_RST_EN_bit at PCR_EC_RST_EN.B30;
    const register unsigned short int TIMER16_1_RST_EN = 31;
    sbit  TIMER16_1_RST_EN_bit at PCR_EC_RST_EN.B31;

sfr far unsigned long   volatile PCR_EC_RST_EN2       absolute 0x40080144;
    const register unsigned short int ADC_RST_EN = 3;
    sbit  ADC_RST_EN_bit at PCR_EC_RST_EN2.B3;
    const register unsigned short int PS2_0_RST_EN = 5;
    sbit  PS2_0_RST_EN_bit at PCR_EC_RST_EN2.B5;
    const register unsigned short int PS2_1_RST_EN = 6;
    sbit  PS2_1_RST_EN_bit at PCR_EC_RST_EN2.B6;
    const register unsigned short int PS2_2_RST_EN = 7;
    sbit  PS2_2_RST_EN_bit at PCR_EC_RST_EN2.B7;
    const register unsigned short int PS2_3_RST_EN = 8;
    sbit  PS2_3_RST_EN_bit at PCR_EC_RST_EN2.B8;
    sbit  SPI0_SLP_EN_PCR_EC_RST_EN2_bit at PCR_EC_RST_EN2.B9;
    const register unsigned short int HTIMER_RST_EN = 10;
    sbit  HTIMER_RST_EN_bit at PCR_EC_RST_EN2.B10;
    const register unsigned short int KEYSCAN_RST_EN = 11;
    sbit  KEYSCAN_RST_EN_bit at PCR_EC_RST_EN2.B11;
    const register unsigned short int RPMPWM_RST_EN = 12;
    sbit  RPMPWM_RST_EN_bit at PCR_EC_RST_EN2.B12;
    const register unsigned short int SMB1_RST_EN = 13;
    sbit  SMB1_RST_EN_bit at PCR_EC_RST_EN2.B13;
    const register unsigned short int SMB2_RST_EN = 14;
    sbit  SMB2_RST_EN_bit at PCR_EC_RST_EN2.B14;
    const register unsigned short int SMB3_RST_EN = 15;
    sbit  SMB3_RST_EN_bit at PCR_EC_RST_EN2.B15;
    const register unsigned short int LED0_RST_EN = 16;
    sbit  LED0_RST_EN_bit at PCR_EC_RST_EN2.B16;
    const register unsigned short int LED1_RST_EN = 17;
    sbit  LED1_RST_EN_bit at PCR_EC_RST_EN2.B17;
    const register unsigned short int LED2_RST_EN = 18;
    sbit  LED2_RST_EN_bit at PCR_EC_RST_EN2.B18;
    const register unsigned short int BCM_RST_EN = 19;
    sbit  BCM_RST_EN_bit at PCR_EC_RST_EN2.B19;
    const register unsigned short int SPI1_RST_EN = 20;
    sbit  SPI1_RST_EN_bit at PCR_EC_RST_EN2.B20;
    const register unsigned short int TIMER16_2_RST_EN = 21;
    sbit  TIMER16_2_RST_EN_bit at PCR_EC_RST_EN2.B21;
    const register unsigned short int TIMER16_3_RST_EN = 22;
    sbit  TIMER16_3_RST_EN_bit at PCR_EC_RST_EN2.B22;
    const register unsigned short int TIMER32_0_RST_EN = 23;
    sbit  TIMER32_0_RST_EN_bit at PCR_EC_RST_EN2.B23;
    const register unsigned short int TIMER32_1_RST_EN = 24;
    sbit  TIMER32_1_RST_EN_bit at PCR_EC_RST_EN2.B24;
    const register unsigned short int LED3_RST_EN = 25;
    sbit  LED3_RST_EN_bit at PCR_EC_RST_EN2.B25;

sfr far unsigned long   volatile PCR_PWR_RST_CTRL     absolute 0x40080148;
    const register unsigned short int IRESET_OUT = 0;
    sbit  IRESET_OUT_bit at PCR_PWR_RST_CTRL.B0;

sfr far unsigned short   volatile VBAT_PFR_STS         absolute 0x4000A400;
    const register unsigned short int DET32K_IN = 0;
    sbit  DET32K_IN_bit at VBAT_PFR_STS.B0;
    const register unsigned short int WDT = 5;
    sbit  WDT_bit at VBAT_PFR_STS.B5;
    const register unsigned short int VBAT_RST = 7;
    sbit  VBAT_RST_bit at VBAT_PFR_STS.B7;

sfr far unsigned long   volatile VBAT_CLOCK_EN        absolute 0x4000A408;
    const register unsigned short int XOSEL = 0;
    sbit  XOSEL_bit at VBAT_CLOCK_EN.B0;
    const register unsigned short int _32K_EN = 1;
    sbit  _32K_EN_bit at VBAT_CLOCK_EN.B1;

sfr far unsigned short   volatile LPC_INDEX            absolute 0x400F3000;
sfr far unsigned short   volatile LPC_DATA             absolute 0x400F3001;
sfr far unsigned long   volatile LPC_BUS_MONITOR      absolute 0x400F3104;
    const register unsigned short int LRESET_STATUS = 1;
    sbit  LRESET_STATUS_bit at LPC_BUS_MONITOR.B1;

sfr far unsigned long   volatile LPC_HOST_BUS_ERROR   absolute 0x400F3108;
    const register unsigned short int LPC_ERR = 0;
    sbit  LPC_ERR_bit at LPC_HOST_BUS_ERROR.B0;
    const register unsigned short int EN_ERR = 1;
    sbit  EN_ERR_bit at LPC_HOST_BUS_ERROR.B1;
    const register unsigned short int BAR_ERR = 2;
    sbit  BAR_ERR_bit at LPC_HOST_BUS_ERROR.B2;
    const register unsigned short int RUNTIME_ERR = 3;
    sbit  RUNTIME_ERR_bit at LPC_HOST_BUS_ERROR.B3;
    const register unsigned short int CONFIG_ERR = 4;
    sbit  CONFIG_ERR_bit at LPC_HOST_BUS_ERROR.B4;
    const register unsigned short int DMA_ERR = 5;
    sbit  DMA_ERR_bit at LPC_HOST_BUS_ERROR.B5;
    const register unsigned short int ERR_ADDR8 = 8;
    sbit  ERR_ADDR8_bit at LPC_HOST_BUS_ERROR.B8;
    const register unsigned short int ERR_ADDR9 = 9;
    sbit  ERR_ADDR9_bit at LPC_HOST_BUS_ERROR.B9;
    const register unsigned short int ERR_ADDR10 = 10;
    sbit  ERR_ADDR10_bit at LPC_HOST_BUS_ERROR.B10;
    const register unsigned short int ERR_ADDR11 = 11;
    sbit  ERR_ADDR11_bit at LPC_HOST_BUS_ERROR.B11;
    const register unsigned short int ERR_ADDR12 = 12;
    sbit  ERR_ADDR12_bit at LPC_HOST_BUS_ERROR.B12;
    const register unsigned short int ERR_ADDR13 = 13;
    sbit  ERR_ADDR13_bit at LPC_HOST_BUS_ERROR.B13;
    const register unsigned short int ERR_ADDR14 = 14;
    sbit  ERR_ADDR14_bit at LPC_HOST_BUS_ERROR.B14;
    const register unsigned short int ERR_ADDR15 = 15;
    sbit  ERR_ADDR15_bit at LPC_HOST_BUS_ERROR.B15;
    const register unsigned short int ERR_ADDR16 = 16;
    sbit  ERR_ADDR16_bit at LPC_HOST_BUS_ERROR.B16;
    const register unsigned short int ERR_ADDR17 = 17;
    sbit  ERR_ADDR17_bit at LPC_HOST_BUS_ERROR.B17;
    const register unsigned short int ERR_ADDR18 = 18;
    sbit  ERR_ADDR18_bit at LPC_HOST_BUS_ERROR.B18;
    const register unsigned short int ERR_ADDR19 = 19;
    sbit  ERR_ADDR19_bit at LPC_HOST_BUS_ERROR.B19;
    const register unsigned short int ERR_ADDR20 = 20;
    sbit  ERR_ADDR20_bit at LPC_HOST_BUS_ERROR.B20;
    const register unsigned short int ERR_ADDR21 = 21;
    sbit  ERR_ADDR21_bit at LPC_HOST_BUS_ERROR.B21;
    const register unsigned short int ERR_ADDR22 = 22;
    sbit  ERR_ADDR22_bit at LPC_HOST_BUS_ERROR.B22;
    const register unsigned short int ERR_ADDR23 = 23;
    sbit  ERR_ADDR23_bit at LPC_HOST_BUS_ERROR.B23;
    const register unsigned short int ERR_ADDR24 = 24;
    sbit  ERR_ADDR24_bit at LPC_HOST_BUS_ERROR.B24;
    const register unsigned short int ERR_ADDR25 = 25;
    sbit  ERR_ADDR25_bit at LPC_HOST_BUS_ERROR.B25;
    const register unsigned short int ERR_ADDR26 = 26;
    sbit  ERR_ADDR26_bit at LPC_HOST_BUS_ERROR.B26;
    const register unsigned short int ERR_ADDR27 = 27;
    sbit  ERR_ADDR27_bit at LPC_HOST_BUS_ERROR.B27;
    const register unsigned short int ERR_ADDR28 = 28;
    sbit  ERR_ADDR28_bit at LPC_HOST_BUS_ERROR.B28;
    const register unsigned short int ERR_ADDR29 = 29;
    sbit  ERR_ADDR29_bit at LPC_HOST_BUS_ERROR.B29;
    const register unsigned short int ERR_ADDR30 = 30;
    sbit  ERR_ADDR30_bit at LPC_HOST_BUS_ERROR.B30;
    const register unsigned short int ERR_ADDR31 = 31;
    sbit  ERR_ADDR31_bit at LPC_HOST_BUS_ERROR.B31;

sfr far unsigned long   volatile LPC_EC_SERIRQ        absolute 0x400F310C;
    const register unsigned short int EC_IRQ = 0;
    sbit  EC_IRQ_bit at LPC_EC_SERIRQ.B0;

sfr far unsigned long   volatile LPC_CLK_CTRL         absolute 0x400F3110;
    const register unsigned short int CR0 = 0;
    sbit  CR0_bit at LPC_CLK_CTRL.B0;
    const register unsigned short int CR1 = 1;
    sbit  CR1_bit at LPC_CLK_CTRL.B1;
    const register unsigned short int HANDSHAKE = 2;
    sbit  HANDSHAKE_bit at LPC_CLK_CTRL.B2;

sfr far unsigned long   volatile LPC_BAR_INHIBIT      absolute 0x400F3120;
sfr far unsigned long   volatile LPC_BAR_INIT         absolute 0x400F3130;
sfr far unsigned short   volatile LPC_ACTIVATE         absolute 0x400F3330;
sfr far unsigned short   volatile LPC_SIRQ0            absolute 0x400F3340;
    const register unsigned short int FRAME0 = 0;
    sbit  FRAME0_bit at LPC_SIRQ0.B0;
    const register unsigned short int FRAME1 = 1;
    sbit  FRAME1_bit at LPC_SIRQ0.B1;
    const register unsigned short int FRAME2 = 2;
    sbit  FRAME2_bit at LPC_SIRQ0.B2;
    const register unsigned short int FRAME3 = 3;
    sbit  FRAME3_bit at LPC_SIRQ0.B3;
    const register unsigned short int FRAME4 = 4;
    sbit  FRAME4_bit at LPC_SIRQ0.B4;
    const register unsigned short int FRAME5 = 5;
    sbit  FRAME5_bit at LPC_SIRQ0.B5;
    const register unsigned short int DEVICE = 6;
    sbit  DEVICE_bit at LPC_SIRQ0.B6;
    const register unsigned short int SELECT_ = 7;
    sbit  SELECT_bit at LPC_SIRQ0.B7;

sfr far unsigned short   volatile LPC_SIRQ1            absolute 0x400F3341;
    sbit  FRAME0_LPC_SIRQ1_bit at LPC_SIRQ1.B0;
    sbit  FRAME1_LPC_SIRQ1_bit at LPC_SIRQ1.B1;
    sbit  FRAME2_LPC_SIRQ1_bit at LPC_SIRQ1.B2;
    sbit  FRAME3_LPC_SIRQ1_bit at LPC_SIRQ1.B3;
    sbit  FRAME4_LPC_SIRQ1_bit at LPC_SIRQ1.B4;
    sbit  FRAME5_LPC_SIRQ1_bit at LPC_SIRQ1.B5;
    sbit  DEVICE_LPC_SIRQ1_bit at LPC_SIRQ1.B6;
    sbit  SELECT_LPC_SIRQ1_bit at LPC_SIRQ1.B7;

sfr far unsigned short   volatile LPC_SIRQ2            absolute 0x400F3342;
    sbit  FRAME0_LPC_SIRQ2_bit at LPC_SIRQ2.B0;
    sbit  FRAME1_LPC_SIRQ2_bit at LPC_SIRQ2.B1;
    sbit  FRAME2_LPC_SIRQ2_bit at LPC_SIRQ2.B2;
    sbit  FRAME3_LPC_SIRQ2_bit at LPC_SIRQ2.B3;
    sbit  FRAME4_LPC_SIRQ2_bit at LPC_SIRQ2.B4;
    sbit  FRAME5_LPC_SIRQ2_bit at LPC_SIRQ2.B5;
    sbit  DEVICE_LPC_SIRQ2_bit at LPC_SIRQ2.B6;
    sbit  SELECT_LPC_SIRQ2_bit at LPC_SIRQ2.B7;

sfr far unsigned short   volatile LPC_SIRQ3            absolute 0x400F3343;
    sbit  FRAME0_LPC_SIRQ3_bit at LPC_SIRQ3.B0;
    sbit  FRAME1_LPC_SIRQ3_bit at LPC_SIRQ3.B1;
    sbit  FRAME2_LPC_SIRQ3_bit at LPC_SIRQ3.B2;
    sbit  FRAME3_LPC_SIRQ3_bit at LPC_SIRQ3.B3;
    sbit  FRAME4_LPC_SIRQ3_bit at LPC_SIRQ3.B4;
    sbit  FRAME5_LPC_SIRQ3_bit at LPC_SIRQ3.B5;
    sbit  DEVICE_LPC_SIRQ3_bit at LPC_SIRQ3.B6;
    sbit  SELECT_LPC_SIRQ3_bit at LPC_SIRQ3.B7;

sfr far unsigned short   volatile LPC_SIRQ4            absolute 0x400F3344;
    sbit  FRAME0_LPC_SIRQ4_bit at LPC_SIRQ4.B0;
    sbit  FRAME1_LPC_SIRQ4_bit at LPC_SIRQ4.B1;
    sbit  FRAME2_LPC_SIRQ4_bit at LPC_SIRQ4.B2;
    sbit  FRAME3_LPC_SIRQ4_bit at LPC_SIRQ4.B3;
    sbit  FRAME4_LPC_SIRQ4_bit at LPC_SIRQ4.B4;
    sbit  FRAME5_LPC_SIRQ4_bit at LPC_SIRQ4.B5;
    sbit  DEVICE_LPC_SIRQ4_bit at LPC_SIRQ4.B6;
    sbit  SELECT_LPC_SIRQ4_bit at LPC_SIRQ4.B7;

sfr far unsigned short   volatile LPC_SIRQ5            absolute 0x400F3345;
    sbit  FRAME0_LPC_SIRQ5_bit at LPC_SIRQ5.B0;
    sbit  FRAME1_LPC_SIRQ5_bit at LPC_SIRQ5.B1;
    sbit  FRAME2_LPC_SIRQ5_bit at LPC_SIRQ5.B2;
    sbit  FRAME3_LPC_SIRQ5_bit at LPC_SIRQ5.B3;
    sbit  FRAME4_LPC_SIRQ5_bit at LPC_SIRQ5.B4;
    sbit  FRAME5_LPC_SIRQ5_bit at LPC_SIRQ5.B5;
    sbit  DEVICE_LPC_SIRQ5_bit at LPC_SIRQ5.B6;
    sbit  SELECT_LPC_SIRQ5_bit at LPC_SIRQ5.B7;

sfr far unsigned short   volatile LPC_SIRQ6            absolute 0x400F3346;
    sbit  FRAME0_LPC_SIRQ6_bit at LPC_SIRQ6.B0;
    sbit  FRAME1_LPC_SIRQ6_bit at LPC_SIRQ6.B1;
    sbit  FRAME2_LPC_SIRQ6_bit at LPC_SIRQ6.B2;
    sbit  FRAME3_LPC_SIRQ6_bit at LPC_SIRQ6.B3;
    sbit  FRAME4_LPC_SIRQ6_bit at LPC_SIRQ6.B4;
    sbit  FRAME5_LPC_SIRQ6_bit at LPC_SIRQ6.B5;
    sbit  DEVICE_LPC_SIRQ6_bit at LPC_SIRQ6.B6;
    sbit  SELECT_LPC_SIRQ6_bit at LPC_SIRQ6.B7;

sfr far unsigned short   volatile LPC_SIRQ7            absolute 0x400F3347;
    sbit  FRAME0_LPC_SIRQ7_bit at LPC_SIRQ7.B0;
    sbit  FRAME1_LPC_SIRQ7_bit at LPC_SIRQ7.B1;
    sbit  FRAME2_LPC_SIRQ7_bit at LPC_SIRQ7.B2;
    sbit  FRAME3_LPC_SIRQ7_bit at LPC_SIRQ7.B3;
    sbit  FRAME4_LPC_SIRQ7_bit at LPC_SIRQ7.B4;
    sbit  FRAME5_LPC_SIRQ7_bit at LPC_SIRQ7.B5;
    sbit  DEVICE_LPC_SIRQ7_bit at LPC_SIRQ7.B6;
    sbit  SELECT_LPC_SIRQ7_bit at LPC_SIRQ7.B7;

sfr far unsigned short   volatile LPC_SIRQ8            absolute 0x400F3348;
    sbit  FRAME0_LPC_SIRQ8_bit at LPC_SIRQ8.B0;
    sbit  FRAME1_LPC_SIRQ8_bit at LPC_SIRQ8.B1;
    sbit  FRAME2_LPC_SIRQ8_bit at LPC_SIRQ8.B2;
    sbit  FRAME3_LPC_SIRQ8_bit at LPC_SIRQ8.B3;
    sbit  FRAME4_LPC_SIRQ8_bit at LPC_SIRQ8.B4;
    sbit  FRAME5_LPC_SIRQ8_bit at LPC_SIRQ8.B5;
    sbit  DEVICE_LPC_SIRQ8_bit at LPC_SIRQ8.B6;
    sbit  SELECT_LPC_SIRQ8_bit at LPC_SIRQ8.B7;

sfr far unsigned short   volatile LPC_SIRQ9            absolute 0x400F3349;
    sbit  FRAME0_LPC_SIRQ9_bit at LPC_SIRQ9.B0;
    sbit  FRAME1_LPC_SIRQ9_bit at LPC_SIRQ9.B1;
    sbit  FRAME2_LPC_SIRQ9_bit at LPC_SIRQ9.B2;
    sbit  FRAME3_LPC_SIRQ9_bit at LPC_SIRQ9.B3;
    sbit  FRAME4_LPC_SIRQ9_bit at LPC_SIRQ9.B4;
    sbit  FRAME5_LPC_SIRQ9_bit at LPC_SIRQ9.B5;
    sbit  DEVICE_LPC_SIRQ9_bit at LPC_SIRQ9.B6;
    sbit  SELECT_LPC_SIRQ9_bit at LPC_SIRQ9.B7;

sfr far unsigned short   volatile LPC_SIRQ10           absolute 0x400F334A;
    sbit  FRAME0_LPC_SIRQ10_bit at LPC_SIRQ10.B0;
    sbit  FRAME1_LPC_SIRQ10_bit at LPC_SIRQ10.B1;
    sbit  FRAME2_LPC_SIRQ10_bit at LPC_SIRQ10.B2;
    sbit  FRAME3_LPC_SIRQ10_bit at LPC_SIRQ10.B3;
    sbit  FRAME4_LPC_SIRQ10_bit at LPC_SIRQ10.B4;
    sbit  FRAME5_LPC_SIRQ10_bit at LPC_SIRQ10.B5;
    sbit  DEVICE_LPC_SIRQ10_bit at LPC_SIRQ10.B6;
    sbit  SELECT_LPC_SIRQ10_bit at LPC_SIRQ10.B7;

sfr far unsigned short   volatile LPC_SIRQ11           absolute 0x400F334B;
    sbit  FRAME0_LPC_SIRQ11_bit at LPC_SIRQ11.B0;
    sbit  FRAME1_LPC_SIRQ11_bit at LPC_SIRQ11.B1;
    sbit  FRAME2_LPC_SIRQ11_bit at LPC_SIRQ11.B2;
    sbit  FRAME3_LPC_SIRQ11_bit at LPC_SIRQ11.B3;
    sbit  FRAME4_LPC_SIRQ11_bit at LPC_SIRQ11.B4;
    sbit  FRAME5_LPC_SIRQ11_bit at LPC_SIRQ11.B5;
    sbit  DEVICE_LPC_SIRQ11_bit at LPC_SIRQ11.B6;
    sbit  SELECT_LPC_SIRQ11_bit at LPC_SIRQ11.B7;

sfr far unsigned short   volatile LPC_SIRQ12           absolute 0x400F334C;
    sbit  FRAME0_LPC_SIRQ12_bit at LPC_SIRQ12.B0;
    sbit  FRAME1_LPC_SIRQ12_bit at LPC_SIRQ12.B1;
    sbit  FRAME2_LPC_SIRQ12_bit at LPC_SIRQ12.B2;
    sbit  FRAME3_LPC_SIRQ12_bit at LPC_SIRQ12.B3;
    sbit  FRAME4_LPC_SIRQ12_bit at LPC_SIRQ12.B4;
    sbit  FRAME5_LPC_SIRQ12_bit at LPC_SIRQ12.B5;
    sbit  DEVICE_LPC_SIRQ12_bit at LPC_SIRQ12.B6;
    sbit  SELECT_LPC_SIRQ12_bit at LPC_SIRQ12.B7;

sfr far unsigned short   volatile LPC_SIRQ13           absolute 0x400F334D;
    sbit  FRAME0_LPC_SIRQ13_bit at LPC_SIRQ13.B0;
    sbit  FRAME1_LPC_SIRQ13_bit at LPC_SIRQ13.B1;
    sbit  FRAME2_LPC_SIRQ13_bit at LPC_SIRQ13.B2;
    sbit  FRAME3_LPC_SIRQ13_bit at LPC_SIRQ13.B3;
    sbit  FRAME4_LPC_SIRQ13_bit at LPC_SIRQ13.B4;
    sbit  FRAME5_LPC_SIRQ13_bit at LPC_SIRQ13.B5;
    sbit  DEVICE_LPC_SIRQ13_bit at LPC_SIRQ13.B6;
    sbit  SELECT_LPC_SIRQ13_bit at LPC_SIRQ13.B7;

sfr far unsigned short   volatile LPC_SIRQ14           absolute 0x400F334E;
    sbit  FRAME0_LPC_SIRQ14_bit at LPC_SIRQ14.B0;
    sbit  FRAME1_LPC_SIRQ14_bit at LPC_SIRQ14.B1;
    sbit  FRAME2_LPC_SIRQ14_bit at LPC_SIRQ14.B2;
    sbit  FRAME3_LPC_SIRQ14_bit at LPC_SIRQ14.B3;
    sbit  FRAME4_LPC_SIRQ14_bit at LPC_SIRQ14.B4;
    sbit  FRAME5_LPC_SIRQ14_bit at LPC_SIRQ14.B5;
    sbit  DEVICE_LPC_SIRQ14_bit at LPC_SIRQ14.B6;
    sbit  SELECT_LPC_SIRQ14_bit at LPC_SIRQ14.B7;

sfr far unsigned short   volatile LPC_SIRQ15           absolute 0x400F334F;
    sbit  FRAME0_LPC_SIRQ15_bit at LPC_SIRQ15.B0;
    sbit  FRAME1_LPC_SIRQ15_bit at LPC_SIRQ15.B1;
    sbit  FRAME2_LPC_SIRQ15_bit at LPC_SIRQ15.B2;
    sbit  FRAME3_LPC_SIRQ15_bit at LPC_SIRQ15.B3;
    sbit  FRAME4_LPC_SIRQ15_bit at LPC_SIRQ15.B4;
    sbit  FRAME5_LPC_SIRQ15_bit at LPC_SIRQ15.B5;
    sbit  DEVICE_LPC_SIRQ15_bit at LPC_SIRQ15.B6;
    sbit  SELECT_LPC_SIRQ15_bit at LPC_SIRQ15.B7;

sfr far unsigned long   volatile LPC_LPC_BAR          absolute 0x400F3360;
    const register unsigned short int MASK0 = 0;
    sbit  MASK0_bit at LPC_LPC_BAR.B0;
    const register unsigned short int MASK1 = 1;
    sbit  MASK1_bit at LPC_LPC_BAR.B1;
    const register unsigned short int MASK2 = 2;
    sbit  MASK2_bit at LPC_LPC_BAR.B2;
    const register unsigned short int MASK3 = 3;
    sbit  MASK3_bit at LPC_LPC_BAR.B3;
    const register unsigned short int MASK4 = 4;
    sbit  MASK4_bit at LPC_LPC_BAR.B4;
    const register unsigned short int MASK5 = 5;
    sbit  MASK5_bit at LPC_LPC_BAR.B5;
    const register unsigned short int MASK6 = 6;
    sbit  MASK6_bit at LPC_LPC_BAR.B6;
    const register unsigned short int MASK7 = 7;
    sbit  MASK7_bit at LPC_LPC_BAR.B7;
    const register unsigned short int FRAME8 = 8;
    sbit  FRAME8_bit at LPC_LPC_BAR.B8;
    const register unsigned short int FRAME9 = 9;
    sbit  FRAME9_bit at LPC_LPC_BAR.B9;
    const register unsigned short int FRAME10 = 10;
    sbit  FRAME10_bit at LPC_LPC_BAR.B10;
    const register unsigned short int FRAME11 = 11;
    sbit  FRAME11_bit at LPC_LPC_BAR.B11;
    const register unsigned short int FRAME12 = 12;
    sbit  FRAME12_bit at LPC_LPC_BAR.B12;
    const register unsigned short int FRAME13 = 13;
    sbit  FRAME13_bit at LPC_LPC_BAR.B13;
    sbit  DEVICE_LPC_LPC_BAR_bit at LPC_LPC_BAR.B14;
    const register unsigned short int VALID = 15;
    sbit  VALID_bit at LPC_LPC_BAR.B15;
    const register unsigned short int LPC_HOST_ADDR16 = 16;
    sbit  LPC_HOST_ADDR16_bit at LPC_LPC_BAR.B16;
    const register unsigned short int LPC_HOST_ADDR17 = 17;
    sbit  LPC_HOST_ADDR17_bit at LPC_LPC_BAR.B17;
    const register unsigned short int LPC_HOST_ADDR18 = 18;
    sbit  LPC_HOST_ADDR18_bit at LPC_LPC_BAR.B18;
    const register unsigned short int LPC_HOST_ADDR19 = 19;
    sbit  LPC_HOST_ADDR19_bit at LPC_LPC_BAR.B19;
    const register unsigned short int LPC_HOST_ADDR20 = 20;
    sbit  LPC_HOST_ADDR20_bit at LPC_LPC_BAR.B20;
    const register unsigned short int LPC_HOST_ADDR21 = 21;
    sbit  LPC_HOST_ADDR21_bit at LPC_LPC_BAR.B21;
    const register unsigned short int LPC_HOST_ADDR22 = 22;
    sbit  LPC_HOST_ADDR22_bit at LPC_LPC_BAR.B22;
    const register unsigned short int LPC_HOST_ADDR23 = 23;
    sbit  LPC_HOST_ADDR23_bit at LPC_LPC_BAR.B23;
    const register unsigned short int LPC_HOST_ADDR24 = 24;
    sbit  LPC_HOST_ADDR24_bit at LPC_LPC_BAR.B24;
    const register unsigned short int LPC_HOST_ADDR25 = 25;
    sbit  LPC_HOST_ADDR25_bit at LPC_LPC_BAR.B25;
    const register unsigned short int LPC_HOST_ADDR26 = 26;
    sbit  LPC_HOST_ADDR26_bit at LPC_LPC_BAR.B26;
    const register unsigned short int LPC_HOST_ADDR27 = 27;
    sbit  LPC_HOST_ADDR27_bit at LPC_LPC_BAR.B27;
    const register unsigned short int LPC_HOST_ADDR28 = 28;
    sbit  LPC_HOST_ADDR28_bit at LPC_LPC_BAR.B28;
    const register unsigned short int LPC_HOST_ADDR29 = 29;
    sbit  LPC_HOST_ADDR29_bit at LPC_LPC_BAR.B29;
    const register unsigned short int LPC_HOST_ADDR30 = 30;
    sbit  LPC_HOST_ADDR30_bit at LPC_LPC_BAR.B30;
    const register unsigned short int LPC_HOST_ADDR31 = 31;
    sbit  LPC_HOST_ADDR31_bit at LPC_LPC_BAR.B31;

sfr far unsigned long   volatile LPC_EM_BAR           absolute 0x400F3364;
    sbit  MASK0_LPC_EM_BAR_bit at LPC_EM_BAR.B0;
    sbit  MASK1_LPC_EM_BAR_bit at LPC_EM_BAR.B1;
    sbit  MASK2_LPC_EM_BAR_bit at LPC_EM_BAR.B2;
    sbit  MASK3_LPC_EM_BAR_bit at LPC_EM_BAR.B3;
    sbit  MASK4_LPC_EM_BAR_bit at LPC_EM_BAR.B4;
    sbit  MASK5_LPC_EM_BAR_bit at LPC_EM_BAR.B5;
    sbit  MASK6_LPC_EM_BAR_bit at LPC_EM_BAR.B6;
    sbit  MASK7_LPC_EM_BAR_bit at LPC_EM_BAR.B7;
    sbit  FRAME8_LPC_EM_BAR_bit at LPC_EM_BAR.B8;
    sbit  FRAME9_LPC_EM_BAR_bit at LPC_EM_BAR.B9;
    sbit  FRAME10_LPC_EM_BAR_bit at LPC_EM_BAR.B10;
    sbit  FRAME11_LPC_EM_BAR_bit at LPC_EM_BAR.B11;
    sbit  FRAME12_LPC_EM_BAR_bit at LPC_EM_BAR.B12;
    sbit  FRAME13_LPC_EM_BAR_bit at LPC_EM_BAR.B13;
    sbit  DEVICE_LPC_EM_BAR_bit at LPC_EM_BAR.B14;
    sbit  VALID_LPC_EM_BAR_bit at LPC_EM_BAR.B15;
    sbit  LPC_HOST_ADDR16_LPC_EM_BAR_bit at LPC_EM_BAR.B16;
    sbit  LPC_HOST_ADDR17_LPC_EM_BAR_bit at LPC_EM_BAR.B17;
    sbit  LPC_HOST_ADDR18_LPC_EM_BAR_bit at LPC_EM_BAR.B18;
    sbit  LPC_HOST_ADDR19_LPC_EM_BAR_bit at LPC_EM_BAR.B19;
    sbit  LPC_HOST_ADDR20_LPC_EM_BAR_bit at LPC_EM_BAR.B20;
    sbit  LPC_HOST_ADDR21_LPC_EM_BAR_bit at LPC_EM_BAR.B21;
    sbit  LPC_HOST_ADDR22_LPC_EM_BAR_bit at LPC_EM_BAR.B22;
    sbit  LPC_HOST_ADDR23_LPC_EM_BAR_bit at LPC_EM_BAR.B23;
    sbit  LPC_HOST_ADDR24_LPC_EM_BAR_bit at LPC_EM_BAR.B24;
    sbit  LPC_HOST_ADDR25_LPC_EM_BAR_bit at LPC_EM_BAR.B25;
    sbit  LPC_HOST_ADDR26_LPC_EM_BAR_bit at LPC_EM_BAR.B26;
    sbit  LPC_HOST_ADDR27_LPC_EM_BAR_bit at LPC_EM_BAR.B27;
    sbit  LPC_HOST_ADDR28_LPC_EM_BAR_bit at LPC_EM_BAR.B28;
    sbit  LPC_HOST_ADDR29_LPC_EM_BAR_bit at LPC_EM_BAR.B29;
    sbit  LPC_HOST_ADDR30_LPC_EM_BAR_bit at LPC_EM_BAR.B30;
    sbit  LPC_HOST_ADDR31_LPC_EM_BAR_bit at LPC_EM_BAR.B31;

sfr far unsigned long   volatile LPC_UART_BAR         absolute 0x400F3368;
    sbit  MASK0_LPC_UART_BAR_bit at LPC_UART_BAR.B0;
    sbit  MASK1_LPC_UART_BAR_bit at LPC_UART_BAR.B1;
    sbit  MASK2_LPC_UART_BAR_bit at LPC_UART_BAR.B2;
    sbit  MASK3_LPC_UART_BAR_bit at LPC_UART_BAR.B3;
    sbit  MASK4_LPC_UART_BAR_bit at LPC_UART_BAR.B4;
    sbit  MASK5_LPC_UART_BAR_bit at LPC_UART_BAR.B5;
    sbit  MASK6_LPC_UART_BAR_bit at LPC_UART_BAR.B6;
    sbit  MASK7_LPC_UART_BAR_bit at LPC_UART_BAR.B7;
    sbit  FRAME8_LPC_UART_BAR_bit at LPC_UART_BAR.B8;
    sbit  FRAME9_LPC_UART_BAR_bit at LPC_UART_BAR.B9;
    sbit  FRAME10_LPC_UART_BAR_bit at LPC_UART_BAR.B10;
    sbit  FRAME11_LPC_UART_BAR_bit at LPC_UART_BAR.B11;
    sbit  FRAME12_LPC_UART_BAR_bit at LPC_UART_BAR.B12;
    sbit  FRAME13_LPC_UART_BAR_bit at LPC_UART_BAR.B13;
    sbit  DEVICE_LPC_UART_BAR_bit at LPC_UART_BAR.B14;
    sbit  VALID_LPC_UART_BAR_bit at LPC_UART_BAR.B15;
    sbit  LPC_HOST_ADDR16_LPC_UART_BAR_bit at LPC_UART_BAR.B16;
    sbit  LPC_HOST_ADDR17_LPC_UART_BAR_bit at LPC_UART_BAR.B17;
    sbit  LPC_HOST_ADDR18_LPC_UART_BAR_bit at LPC_UART_BAR.B18;
    sbit  LPC_HOST_ADDR19_LPC_UART_BAR_bit at LPC_UART_BAR.B19;
    sbit  LPC_HOST_ADDR20_LPC_UART_BAR_bit at LPC_UART_BAR.B20;
    sbit  LPC_HOST_ADDR21_LPC_UART_BAR_bit at LPC_UART_BAR.B21;
    sbit  LPC_HOST_ADDR22_LPC_UART_BAR_bit at LPC_UART_BAR.B22;
    sbit  LPC_HOST_ADDR23_LPC_UART_BAR_bit at LPC_UART_BAR.B23;
    sbit  LPC_HOST_ADDR24_LPC_UART_BAR_bit at LPC_UART_BAR.B24;
    sbit  LPC_HOST_ADDR25_LPC_UART_BAR_bit at LPC_UART_BAR.B25;
    sbit  LPC_HOST_ADDR26_LPC_UART_BAR_bit at LPC_UART_BAR.B26;
    sbit  LPC_HOST_ADDR27_LPC_UART_BAR_bit at LPC_UART_BAR.B27;
    sbit  LPC_HOST_ADDR28_LPC_UART_BAR_bit at LPC_UART_BAR.B28;
    sbit  LPC_HOST_ADDR29_LPC_UART_BAR_bit at LPC_UART_BAR.B29;
    sbit  LPC_HOST_ADDR30_LPC_UART_BAR_bit at LPC_UART_BAR.B30;
    sbit  LPC_HOST_ADDR31_LPC_UART_BAR_bit at LPC_UART_BAR.B31;

sfr far unsigned long   volatile LPC_KBC_BAR          absolute 0x400F3378;
    sbit  MASK0_LPC_KBC_BAR_bit at LPC_KBC_BAR.B0;
    sbit  MASK1_LPC_KBC_BAR_bit at LPC_KBC_BAR.B1;
    sbit  MASK2_LPC_KBC_BAR_bit at LPC_KBC_BAR.B2;
    sbit  MASK3_LPC_KBC_BAR_bit at LPC_KBC_BAR.B3;
    sbit  MASK4_LPC_KBC_BAR_bit at LPC_KBC_BAR.B4;
    sbit  MASK5_LPC_KBC_BAR_bit at LPC_KBC_BAR.B5;
    sbit  MASK6_LPC_KBC_BAR_bit at LPC_KBC_BAR.B6;
    sbit  MASK7_LPC_KBC_BAR_bit at LPC_KBC_BAR.B7;
    sbit  FRAME8_LPC_KBC_BAR_bit at LPC_KBC_BAR.B8;
    sbit  FRAME9_LPC_KBC_BAR_bit at LPC_KBC_BAR.B9;
    sbit  FRAME10_LPC_KBC_BAR_bit at LPC_KBC_BAR.B10;
    sbit  FRAME11_LPC_KBC_BAR_bit at LPC_KBC_BAR.B11;
    sbit  FRAME12_LPC_KBC_BAR_bit at LPC_KBC_BAR.B12;
    sbit  FRAME13_LPC_KBC_BAR_bit at LPC_KBC_BAR.B13;
    sbit  DEVICE_LPC_KBC_BAR_bit at LPC_KBC_BAR.B14;
    sbit  VALID_LPC_KBC_BAR_bit at LPC_KBC_BAR.B15;
    sbit  LPC_HOST_ADDR16_LPC_KBC_BAR_bit at LPC_KBC_BAR.B16;
    sbit  LPC_HOST_ADDR17_LPC_KBC_BAR_bit at LPC_KBC_BAR.B17;
    sbit  LPC_HOST_ADDR18_LPC_KBC_BAR_bit at LPC_KBC_BAR.B18;
    sbit  LPC_HOST_ADDR19_LPC_KBC_BAR_bit at LPC_KBC_BAR.B19;
    sbit  LPC_HOST_ADDR20_LPC_KBC_BAR_bit at LPC_KBC_BAR.B20;
    sbit  LPC_HOST_ADDR21_LPC_KBC_BAR_bit at LPC_KBC_BAR.B21;
    sbit  LPC_HOST_ADDR22_LPC_KBC_BAR_bit at LPC_KBC_BAR.B22;
    sbit  LPC_HOST_ADDR23_LPC_KBC_BAR_bit at LPC_KBC_BAR.B23;
    sbit  LPC_HOST_ADDR24_LPC_KBC_BAR_bit at LPC_KBC_BAR.B24;
    sbit  LPC_HOST_ADDR25_LPC_KBC_BAR_bit at LPC_KBC_BAR.B25;
    sbit  LPC_HOST_ADDR26_LPC_KBC_BAR_bit at LPC_KBC_BAR.B26;
    sbit  LPC_HOST_ADDR27_LPC_KBC_BAR_bit at LPC_KBC_BAR.B27;
    sbit  LPC_HOST_ADDR28_LPC_KBC_BAR_bit at LPC_KBC_BAR.B28;
    sbit  LPC_HOST_ADDR29_LPC_KBC_BAR_bit at LPC_KBC_BAR.B29;
    sbit  LPC_HOST_ADDR30_LPC_KBC_BAR_bit at LPC_KBC_BAR.B30;
    sbit  LPC_HOST_ADDR31_LPC_KBC_BAR_bit at LPC_KBC_BAR.B31;

sfr far unsigned long   volatile LPC_EC0_BAR          absolute 0x400F3388;
    sbit  MASK0_LPC_EC0_BAR_bit at LPC_EC0_BAR.B0;
    sbit  MASK1_LPC_EC0_BAR_bit at LPC_EC0_BAR.B1;
    sbit  MASK2_LPC_EC0_BAR_bit at LPC_EC0_BAR.B2;
    sbit  MASK3_LPC_EC0_BAR_bit at LPC_EC0_BAR.B3;
    sbit  MASK4_LPC_EC0_BAR_bit at LPC_EC0_BAR.B4;
    sbit  MASK5_LPC_EC0_BAR_bit at LPC_EC0_BAR.B5;
    sbit  MASK6_LPC_EC0_BAR_bit at LPC_EC0_BAR.B6;
    sbit  MASK7_LPC_EC0_BAR_bit at LPC_EC0_BAR.B7;
    sbit  FRAME8_LPC_EC0_BAR_bit at LPC_EC0_BAR.B8;
    sbit  FRAME9_LPC_EC0_BAR_bit at LPC_EC0_BAR.B9;
    sbit  FRAME10_LPC_EC0_BAR_bit at LPC_EC0_BAR.B10;
    sbit  FRAME11_LPC_EC0_BAR_bit at LPC_EC0_BAR.B11;
    sbit  FRAME12_LPC_EC0_BAR_bit at LPC_EC0_BAR.B12;
    sbit  FRAME13_LPC_EC0_BAR_bit at LPC_EC0_BAR.B13;
    sbit  DEVICE_LPC_EC0_BAR_bit at LPC_EC0_BAR.B14;
    sbit  VALID_LPC_EC0_BAR_bit at LPC_EC0_BAR.B15;
    sbit  LPC_HOST_ADDR16_LPC_EC0_BAR_bit at LPC_EC0_BAR.B16;
    sbit  LPC_HOST_ADDR17_LPC_EC0_BAR_bit at LPC_EC0_BAR.B17;
    sbit  LPC_HOST_ADDR18_LPC_EC0_BAR_bit at LPC_EC0_BAR.B18;
    sbit  LPC_HOST_ADDR19_LPC_EC0_BAR_bit at LPC_EC0_BAR.B19;
    sbit  LPC_HOST_ADDR20_LPC_EC0_BAR_bit at LPC_EC0_BAR.B20;
    sbit  LPC_HOST_ADDR21_LPC_EC0_BAR_bit at LPC_EC0_BAR.B21;
    sbit  LPC_HOST_ADDR22_LPC_EC0_BAR_bit at LPC_EC0_BAR.B22;
    sbit  LPC_HOST_ADDR23_LPC_EC0_BAR_bit at LPC_EC0_BAR.B23;
    sbit  LPC_HOST_ADDR24_LPC_EC0_BAR_bit at LPC_EC0_BAR.B24;
    sbit  LPC_HOST_ADDR25_LPC_EC0_BAR_bit at LPC_EC0_BAR.B25;
    sbit  LPC_HOST_ADDR26_LPC_EC0_BAR_bit at LPC_EC0_BAR.B26;
    sbit  LPC_HOST_ADDR27_LPC_EC0_BAR_bit at LPC_EC0_BAR.B27;
    sbit  LPC_HOST_ADDR28_LPC_EC0_BAR_bit at LPC_EC0_BAR.B28;
    sbit  LPC_HOST_ADDR29_LPC_EC0_BAR_bit at LPC_EC0_BAR.B29;
    sbit  LPC_HOST_ADDR30_LPC_EC0_BAR_bit at LPC_EC0_BAR.B30;
    sbit  LPC_HOST_ADDR31_LPC_EC0_BAR_bit at LPC_EC0_BAR.B31;

sfr far unsigned long   volatile LPC_EC1_BAR          absolute 0x400F338C;
    sbit  MASK0_LPC_EC1_BAR_bit at LPC_EC1_BAR.B0;
    sbit  MASK1_LPC_EC1_BAR_bit at LPC_EC1_BAR.B1;
    sbit  MASK2_LPC_EC1_BAR_bit at LPC_EC1_BAR.B2;
    sbit  MASK3_LPC_EC1_BAR_bit at LPC_EC1_BAR.B3;
    sbit  MASK4_LPC_EC1_BAR_bit at LPC_EC1_BAR.B4;
    sbit  MASK5_LPC_EC1_BAR_bit at LPC_EC1_BAR.B5;
    sbit  MASK6_LPC_EC1_BAR_bit at LPC_EC1_BAR.B6;
    sbit  MASK7_LPC_EC1_BAR_bit at LPC_EC1_BAR.B7;
    sbit  FRAME8_LPC_EC1_BAR_bit at LPC_EC1_BAR.B8;
    sbit  FRAME9_LPC_EC1_BAR_bit at LPC_EC1_BAR.B9;
    sbit  FRAME10_LPC_EC1_BAR_bit at LPC_EC1_BAR.B10;
    sbit  FRAME11_LPC_EC1_BAR_bit at LPC_EC1_BAR.B11;
    sbit  FRAME12_LPC_EC1_BAR_bit at LPC_EC1_BAR.B12;
    sbit  FRAME13_LPC_EC1_BAR_bit at LPC_EC1_BAR.B13;
    sbit  DEVICE_LPC_EC1_BAR_bit at LPC_EC1_BAR.B14;
    sbit  VALID_LPC_EC1_BAR_bit at LPC_EC1_BAR.B15;
    sbit  LPC_HOST_ADDR16_LPC_EC1_BAR_bit at LPC_EC1_BAR.B16;
    sbit  LPC_HOST_ADDR17_LPC_EC1_BAR_bit at LPC_EC1_BAR.B17;
    sbit  LPC_HOST_ADDR18_LPC_EC1_BAR_bit at LPC_EC1_BAR.B18;
    sbit  LPC_HOST_ADDR19_LPC_EC1_BAR_bit at LPC_EC1_BAR.B19;
    sbit  LPC_HOST_ADDR20_LPC_EC1_BAR_bit at LPC_EC1_BAR.B20;
    sbit  LPC_HOST_ADDR21_LPC_EC1_BAR_bit at LPC_EC1_BAR.B21;
    sbit  LPC_HOST_ADDR22_LPC_EC1_BAR_bit at LPC_EC1_BAR.B22;
    sbit  LPC_HOST_ADDR23_LPC_EC1_BAR_bit at LPC_EC1_BAR.B23;
    sbit  LPC_HOST_ADDR24_LPC_EC1_BAR_bit at LPC_EC1_BAR.B24;
    sbit  LPC_HOST_ADDR25_LPC_EC1_BAR_bit at LPC_EC1_BAR.B25;
    sbit  LPC_HOST_ADDR26_LPC_EC1_BAR_bit at LPC_EC1_BAR.B26;
    sbit  LPC_HOST_ADDR27_LPC_EC1_BAR_bit at LPC_EC1_BAR.B27;
    sbit  LPC_HOST_ADDR28_LPC_EC1_BAR_bit at LPC_EC1_BAR.B28;
    sbit  LPC_HOST_ADDR29_LPC_EC1_BAR_bit at LPC_EC1_BAR.B29;
    sbit  LPC_HOST_ADDR30_LPC_EC1_BAR_bit at LPC_EC1_BAR.B30;
    sbit  LPC_HOST_ADDR31_LPC_EC1_BAR_bit at LPC_EC1_BAR.B31;

sfr far unsigned long   volatile LPC_PM1_BAR          absolute 0x400F3390;
    sbit  MASK0_LPC_PM1_BAR_bit at LPC_PM1_BAR.B0;
    sbit  MASK1_LPC_PM1_BAR_bit at LPC_PM1_BAR.B1;
    sbit  MASK2_LPC_PM1_BAR_bit at LPC_PM1_BAR.B2;
    sbit  MASK3_LPC_PM1_BAR_bit at LPC_PM1_BAR.B3;
    sbit  MASK4_LPC_PM1_BAR_bit at LPC_PM1_BAR.B4;
    sbit  MASK5_LPC_PM1_BAR_bit at LPC_PM1_BAR.B5;
    sbit  MASK6_LPC_PM1_BAR_bit at LPC_PM1_BAR.B6;
    sbit  MASK7_LPC_PM1_BAR_bit at LPC_PM1_BAR.B7;
    sbit  FRAME8_LPC_PM1_BAR_bit at LPC_PM1_BAR.B8;
    sbit  FRAME9_LPC_PM1_BAR_bit at LPC_PM1_BAR.B9;
    sbit  FRAME10_LPC_PM1_BAR_bit at LPC_PM1_BAR.B10;
    sbit  FRAME11_LPC_PM1_BAR_bit at LPC_PM1_BAR.B11;
    sbit  FRAME12_LPC_PM1_BAR_bit at LPC_PM1_BAR.B12;
    sbit  FRAME13_LPC_PM1_BAR_bit at LPC_PM1_BAR.B13;
    sbit  DEVICE_LPC_PM1_BAR_bit at LPC_PM1_BAR.B14;
    sbit  VALID_LPC_PM1_BAR_bit at LPC_PM1_BAR.B15;
    sbit  LPC_HOST_ADDR16_LPC_PM1_BAR_bit at LPC_PM1_BAR.B16;
    sbit  LPC_HOST_ADDR17_LPC_PM1_BAR_bit at LPC_PM1_BAR.B17;
    sbit  LPC_HOST_ADDR18_LPC_PM1_BAR_bit at LPC_PM1_BAR.B18;
    sbit  LPC_HOST_ADDR19_LPC_PM1_BAR_bit at LPC_PM1_BAR.B19;
    sbit  LPC_HOST_ADDR20_LPC_PM1_BAR_bit at LPC_PM1_BAR.B20;
    sbit  LPC_HOST_ADDR21_LPC_PM1_BAR_bit at LPC_PM1_BAR.B21;
    sbit  LPC_HOST_ADDR22_LPC_PM1_BAR_bit at LPC_PM1_BAR.B22;
    sbit  LPC_HOST_ADDR23_LPC_PM1_BAR_bit at LPC_PM1_BAR.B23;
    sbit  LPC_HOST_ADDR24_LPC_PM1_BAR_bit at LPC_PM1_BAR.B24;
    sbit  LPC_HOST_ADDR25_LPC_PM1_BAR_bit at LPC_PM1_BAR.B25;
    sbit  LPC_HOST_ADDR26_LPC_PM1_BAR_bit at LPC_PM1_BAR.B26;
    sbit  LPC_HOST_ADDR27_LPC_PM1_BAR_bit at LPC_PM1_BAR.B27;
    sbit  LPC_HOST_ADDR28_LPC_PM1_BAR_bit at LPC_PM1_BAR.B28;
    sbit  LPC_HOST_ADDR29_LPC_PM1_BAR_bit at LPC_PM1_BAR.B29;
    sbit  LPC_HOST_ADDR30_LPC_PM1_BAR_bit at LPC_PM1_BAR.B30;
    sbit  LPC_HOST_ADDR31_LPC_PM1_BAR_bit at LPC_PM1_BAR.B31;

sfr far unsigned long   volatile LPC_LGC_BAR          absolute 0x400F3394;
    sbit  MASK0_LPC_LGC_BAR_bit at LPC_LGC_BAR.B0;
    sbit  MASK1_LPC_LGC_BAR_bit at LPC_LGC_BAR.B1;
    sbit  MASK2_LPC_LGC_BAR_bit at LPC_LGC_BAR.B2;
    sbit  MASK3_LPC_LGC_BAR_bit at LPC_LGC_BAR.B3;
    sbit  MASK4_LPC_LGC_BAR_bit at LPC_LGC_BAR.B4;
    sbit  MASK5_LPC_LGC_BAR_bit at LPC_LGC_BAR.B5;
    sbit  MASK6_LPC_LGC_BAR_bit at LPC_LGC_BAR.B6;
    sbit  MASK7_LPC_LGC_BAR_bit at LPC_LGC_BAR.B7;
    sbit  FRAME8_LPC_LGC_BAR_bit at LPC_LGC_BAR.B8;
    sbit  FRAME9_LPC_LGC_BAR_bit at LPC_LGC_BAR.B9;
    sbit  FRAME10_LPC_LGC_BAR_bit at LPC_LGC_BAR.B10;
    sbit  FRAME11_LPC_LGC_BAR_bit at LPC_LGC_BAR.B11;
    sbit  FRAME12_LPC_LGC_BAR_bit at LPC_LGC_BAR.B12;
    sbit  FRAME13_LPC_LGC_BAR_bit at LPC_LGC_BAR.B13;
    sbit  DEVICE_LPC_LGC_BAR_bit at LPC_LGC_BAR.B14;
    sbit  VALID_LPC_LGC_BAR_bit at LPC_LGC_BAR.B15;
    sbit  LPC_HOST_ADDR16_LPC_LGC_BAR_bit at LPC_LGC_BAR.B16;
    sbit  LPC_HOST_ADDR17_LPC_LGC_BAR_bit at LPC_LGC_BAR.B17;
    sbit  LPC_HOST_ADDR18_LPC_LGC_BAR_bit at LPC_LGC_BAR.B18;
    sbit  LPC_HOST_ADDR19_LPC_LGC_BAR_bit at LPC_LGC_BAR.B19;
    sbit  LPC_HOST_ADDR20_LPC_LGC_BAR_bit at LPC_LGC_BAR.B20;
    sbit  LPC_HOST_ADDR21_LPC_LGC_BAR_bit at LPC_LGC_BAR.B21;
    sbit  LPC_HOST_ADDR22_LPC_LGC_BAR_bit at LPC_LGC_BAR.B22;
    sbit  LPC_HOST_ADDR23_LPC_LGC_BAR_bit at LPC_LGC_BAR.B23;
    sbit  LPC_HOST_ADDR24_LPC_LGC_BAR_bit at LPC_LGC_BAR.B24;
    sbit  LPC_HOST_ADDR25_LPC_LGC_BAR_bit at LPC_LGC_BAR.B25;
    sbit  LPC_HOST_ADDR26_LPC_LGC_BAR_bit at LPC_LGC_BAR.B26;
    sbit  LPC_HOST_ADDR27_LPC_LGC_BAR_bit at LPC_LGC_BAR.B27;
    sbit  LPC_HOST_ADDR28_LPC_LGC_BAR_bit at LPC_LGC_BAR.B28;
    sbit  LPC_HOST_ADDR29_LPC_LGC_BAR_bit at LPC_LGC_BAR.B29;
    sbit  LPC_HOST_ADDR30_LPC_LGC_BAR_bit at LPC_LGC_BAR.B30;
    sbit  LPC_HOST_ADDR31_LPC_LGC_BAR_bit at LPC_LGC_BAR.B31;

sfr far unsigned long   volatile LPC_MBX_BAR          absolute 0x400F3398;
    sbit  MASK0_LPC_MBX_BAR_bit at LPC_MBX_BAR.B0;
    sbit  MASK1_LPC_MBX_BAR_bit at LPC_MBX_BAR.B1;
    sbit  MASK2_LPC_MBX_BAR_bit at LPC_MBX_BAR.B2;
    sbit  MASK3_LPC_MBX_BAR_bit at LPC_MBX_BAR.B3;
    sbit  MASK4_LPC_MBX_BAR_bit at LPC_MBX_BAR.B4;
    sbit  MASK5_LPC_MBX_BAR_bit at LPC_MBX_BAR.B5;
    sbit  MASK6_LPC_MBX_BAR_bit at LPC_MBX_BAR.B6;
    sbit  MASK7_LPC_MBX_BAR_bit at LPC_MBX_BAR.B7;
    sbit  FRAME8_LPC_MBX_BAR_bit at LPC_MBX_BAR.B8;
    sbit  FRAME9_LPC_MBX_BAR_bit at LPC_MBX_BAR.B9;
    sbit  FRAME10_LPC_MBX_BAR_bit at LPC_MBX_BAR.B10;
    sbit  FRAME11_LPC_MBX_BAR_bit at LPC_MBX_BAR.B11;
    sbit  FRAME12_LPC_MBX_BAR_bit at LPC_MBX_BAR.B12;
    sbit  FRAME13_LPC_MBX_BAR_bit at LPC_MBX_BAR.B13;
    sbit  DEVICE_LPC_MBX_BAR_bit at LPC_MBX_BAR.B14;
    sbit  VALID_LPC_MBX_BAR_bit at LPC_MBX_BAR.B15;
    sbit  LPC_HOST_ADDR16_LPC_MBX_BAR_bit at LPC_MBX_BAR.B16;
    sbit  LPC_HOST_ADDR17_LPC_MBX_BAR_bit at LPC_MBX_BAR.B17;
    sbit  LPC_HOST_ADDR18_LPC_MBX_BAR_bit at LPC_MBX_BAR.B18;
    sbit  LPC_HOST_ADDR19_LPC_MBX_BAR_bit at LPC_MBX_BAR.B19;
    sbit  LPC_HOST_ADDR20_LPC_MBX_BAR_bit at LPC_MBX_BAR.B20;
    sbit  LPC_HOST_ADDR21_LPC_MBX_BAR_bit at LPC_MBX_BAR.B21;
    sbit  LPC_HOST_ADDR22_LPC_MBX_BAR_bit at LPC_MBX_BAR.B22;
    sbit  LPC_HOST_ADDR23_LPC_MBX_BAR_bit at LPC_MBX_BAR.B23;
    sbit  LPC_HOST_ADDR24_LPC_MBX_BAR_bit at LPC_MBX_BAR.B24;
    sbit  LPC_HOST_ADDR25_LPC_MBX_BAR_bit at LPC_MBX_BAR.B25;
    sbit  LPC_HOST_ADDR26_LPC_MBX_BAR_bit at LPC_MBX_BAR.B26;
    sbit  LPC_HOST_ADDR27_LPC_MBX_BAR_bit at LPC_MBX_BAR.B27;
    sbit  LPC_HOST_ADDR28_LPC_MBX_BAR_bit at LPC_MBX_BAR.B28;
    sbit  LPC_HOST_ADDR29_LPC_MBX_BAR_bit at LPC_MBX_BAR.B29;
    sbit  LPC_HOST_ADDR30_LPC_MBX_BAR_bit at LPC_MBX_BAR.B30;
    sbit  LPC_HOST_ADDR31_LPC_MBX_BAR_bit at LPC_MBX_BAR.B31;

sfr far unsigned long   volatile LPC_RTC_BAR          absolute 0x400F339C;
    sbit  MASK0_LPC_RTC_BAR_bit at LPC_RTC_BAR.B0;
    sbit  MASK1_LPC_RTC_BAR_bit at LPC_RTC_BAR.B1;
    sbit  MASK2_LPC_RTC_BAR_bit at LPC_RTC_BAR.B2;
    sbit  MASK3_LPC_RTC_BAR_bit at LPC_RTC_BAR.B3;
    sbit  MASK4_LPC_RTC_BAR_bit at LPC_RTC_BAR.B4;
    sbit  MASK5_LPC_RTC_BAR_bit at LPC_RTC_BAR.B5;
    sbit  MASK6_LPC_RTC_BAR_bit at LPC_RTC_BAR.B6;
    sbit  MASK7_LPC_RTC_BAR_bit at LPC_RTC_BAR.B7;
    sbit  FRAME8_LPC_RTC_BAR_bit at LPC_RTC_BAR.B8;
    sbit  FRAME9_LPC_RTC_BAR_bit at LPC_RTC_BAR.B9;
    sbit  FRAME10_LPC_RTC_BAR_bit at LPC_RTC_BAR.B10;
    sbit  FRAME11_LPC_RTC_BAR_bit at LPC_RTC_BAR.B11;
    sbit  FRAME12_LPC_RTC_BAR_bit at LPC_RTC_BAR.B12;
    sbit  FRAME13_LPC_RTC_BAR_bit at LPC_RTC_BAR.B13;
    sbit  DEVICE_LPC_RTC_BAR_bit at LPC_RTC_BAR.B14;
    sbit  VALID_LPC_RTC_BAR_bit at LPC_RTC_BAR.B15;
    sbit  LPC_HOST_ADDR16_LPC_RTC_BAR_bit at LPC_RTC_BAR.B16;
    sbit  LPC_HOST_ADDR17_LPC_RTC_BAR_bit at LPC_RTC_BAR.B17;
    sbit  LPC_HOST_ADDR18_LPC_RTC_BAR_bit at LPC_RTC_BAR.B18;
    sbit  LPC_HOST_ADDR19_LPC_RTC_BAR_bit at LPC_RTC_BAR.B19;
    sbit  LPC_HOST_ADDR20_LPC_RTC_BAR_bit at LPC_RTC_BAR.B20;
    sbit  LPC_HOST_ADDR21_LPC_RTC_BAR_bit at LPC_RTC_BAR.B21;
    sbit  LPC_HOST_ADDR22_LPC_RTC_BAR_bit at LPC_RTC_BAR.B22;
    sbit  LPC_HOST_ADDR23_LPC_RTC_BAR_bit at LPC_RTC_BAR.B23;
    sbit  LPC_HOST_ADDR24_LPC_RTC_BAR_bit at LPC_RTC_BAR.B24;
    sbit  LPC_HOST_ADDR25_LPC_RTC_BAR_bit at LPC_RTC_BAR.B25;
    sbit  LPC_HOST_ADDR26_LPC_RTC_BAR_bit at LPC_RTC_BAR.B26;
    sbit  LPC_HOST_ADDR27_LPC_RTC_BAR_bit at LPC_RTC_BAR.B27;
    sbit  LPC_HOST_ADDR28_LPC_RTC_BAR_bit at LPC_RTC_BAR.B28;
    sbit  LPC_HOST_ADDR29_LPC_RTC_BAR_bit at LPC_RTC_BAR.B29;
    sbit  LPC_HOST_ADDR30_LPC_RTC_BAR_bit at LPC_RTC_BAR.B30;
    sbit  LPC_HOST_ADDR31_LPC_RTC_BAR_bit at LPC_RTC_BAR.B31;

sfr far unsigned int   volatile LPC_MBX_MEM_BAR_CR   absolute 0x400F33C0;
    sbit  MASK0_LPC_MBX_MEM_BAR_CR_bit at LPC_MBX_MEM_BAR_CR.B0;
    sbit  MASK1_LPC_MBX_MEM_BAR_CR_bit at LPC_MBX_MEM_BAR_CR.B1;
    sbit  MASK2_LPC_MBX_MEM_BAR_CR_bit at LPC_MBX_MEM_BAR_CR.B2;
    sbit  MASK3_LPC_MBX_MEM_BAR_CR_bit at LPC_MBX_MEM_BAR_CR.B3;
    sbit  MASK4_LPC_MBX_MEM_BAR_CR_bit at LPC_MBX_MEM_BAR_CR.B4;
    sbit  MASK5_LPC_MBX_MEM_BAR_CR_bit at LPC_MBX_MEM_BAR_CR.B5;
    sbit  MASK6_LPC_MBX_MEM_BAR_CR_bit at LPC_MBX_MEM_BAR_CR.B6;
    sbit  MASK7_LPC_MBX_MEM_BAR_CR_bit at LPC_MBX_MEM_BAR_CR.B7;
    sbit  FRAME8_LPC_MBX_MEM_BAR_CR_bit at LPC_MBX_MEM_BAR_CR.B8;
    sbit  FRAME9_LPC_MBX_MEM_BAR_CR_bit at LPC_MBX_MEM_BAR_CR.B9;
    sbit  FRAME10_LPC_MBX_MEM_BAR_CR_bit at LPC_MBX_MEM_BAR_CR.B10;
    sbit  FRAME11_LPC_MBX_MEM_BAR_CR_bit at LPC_MBX_MEM_BAR_CR.B11;
    sbit  FRAME12_LPC_MBX_MEM_BAR_CR_bit at LPC_MBX_MEM_BAR_CR.B12;
    sbit  FRAME13_LPC_MBX_MEM_BAR_CR_bit at LPC_MBX_MEM_BAR_CR.B13;
    sbit  VALID_LPC_MBX_MEM_BAR_CR_bit at LPC_MBX_MEM_BAR_CR.B15;

sfr far unsigned int   volatile LPC_MBX_MEM_BAR_HOST_LO_ADDR absolute 0x400F33C2;
sfr far unsigned int   volatile LPC_MBX_MEM_BAR_HOST_HI_ADDR absolute 0x400F33C4;
sfr far unsigned int   volatile LPC_EC0_MEM_BAR_CR   absolute 0x400F33C6;
    sbit  MASK0_LPC_EC0_MEM_BAR_CR_bit at LPC_EC0_MEM_BAR_CR.B0;
    sbit  MASK1_LPC_EC0_MEM_BAR_CR_bit at LPC_EC0_MEM_BAR_CR.B1;
    sbit  MASK2_LPC_EC0_MEM_BAR_CR_bit at LPC_EC0_MEM_BAR_CR.B2;
    sbit  MASK3_LPC_EC0_MEM_BAR_CR_bit at LPC_EC0_MEM_BAR_CR.B3;
    sbit  MASK4_LPC_EC0_MEM_BAR_CR_bit at LPC_EC0_MEM_BAR_CR.B4;
    sbit  MASK5_LPC_EC0_MEM_BAR_CR_bit at LPC_EC0_MEM_BAR_CR.B5;
    sbit  MASK6_LPC_EC0_MEM_BAR_CR_bit at LPC_EC0_MEM_BAR_CR.B6;
    sbit  MASK7_LPC_EC0_MEM_BAR_CR_bit at LPC_EC0_MEM_BAR_CR.B7;
    sbit  FRAME8_LPC_EC0_MEM_BAR_CR_bit at LPC_EC0_MEM_BAR_CR.B8;
    sbit  FRAME9_LPC_EC0_MEM_BAR_CR_bit at LPC_EC0_MEM_BAR_CR.B9;
    sbit  FRAME10_LPC_EC0_MEM_BAR_CR_bit at LPC_EC0_MEM_BAR_CR.B10;
    sbit  FRAME11_LPC_EC0_MEM_BAR_CR_bit at LPC_EC0_MEM_BAR_CR.B11;
    sbit  FRAME12_LPC_EC0_MEM_BAR_CR_bit at LPC_EC0_MEM_BAR_CR.B12;
    sbit  FRAME13_LPC_EC0_MEM_BAR_CR_bit at LPC_EC0_MEM_BAR_CR.B13;
    sbit  VALID_LPC_EC0_MEM_BAR_CR_bit at LPC_EC0_MEM_BAR_CR.B15;

sfr far unsigned int   volatile LPC_EC0_MEM_BAR_HOST_LO_ADDR absolute 0x400F33C8;
sfr far unsigned int   volatile LPC_EC0_MEM_BAR_HOST_HI_ADDR absolute 0x400F33CA;
sfr far unsigned int   volatile LPC_EC1_MEM_BAR_CR   absolute 0x400F33CC;
    sbit  MASK0_LPC_EC1_MEM_BAR_CR_bit at LPC_EC1_MEM_BAR_CR.B0;
    sbit  MASK1_LPC_EC1_MEM_BAR_CR_bit at LPC_EC1_MEM_BAR_CR.B1;
    sbit  MASK2_LPC_EC1_MEM_BAR_CR_bit at LPC_EC1_MEM_BAR_CR.B2;
    sbit  MASK3_LPC_EC1_MEM_BAR_CR_bit at LPC_EC1_MEM_BAR_CR.B3;
    sbit  MASK4_LPC_EC1_MEM_BAR_CR_bit at LPC_EC1_MEM_BAR_CR.B4;
    sbit  MASK5_LPC_EC1_MEM_BAR_CR_bit at LPC_EC1_MEM_BAR_CR.B5;
    sbit  MASK6_LPC_EC1_MEM_BAR_CR_bit at LPC_EC1_MEM_BAR_CR.B6;
    sbit  MASK7_LPC_EC1_MEM_BAR_CR_bit at LPC_EC1_MEM_BAR_CR.B7;
    sbit  FRAME8_LPC_EC1_MEM_BAR_CR_bit at LPC_EC1_MEM_BAR_CR.B8;
    sbit  FRAME9_LPC_EC1_MEM_BAR_CR_bit at LPC_EC1_MEM_BAR_CR.B9;
    sbit  FRAME10_LPC_EC1_MEM_BAR_CR_bit at LPC_EC1_MEM_BAR_CR.B10;
    sbit  FRAME11_LPC_EC1_MEM_BAR_CR_bit at LPC_EC1_MEM_BAR_CR.B11;
    sbit  FRAME12_LPC_EC1_MEM_BAR_CR_bit at LPC_EC1_MEM_BAR_CR.B12;
    sbit  FRAME13_LPC_EC1_MEM_BAR_CR_bit at LPC_EC1_MEM_BAR_CR.B13;
    sbit  VALID_LPC_EC1_MEM_BAR_CR_bit at LPC_EC1_MEM_BAR_CR.B15;

sfr far unsigned int   volatile LPC_EC1_MEM_BAR_HOST_LO_ADDR absolute 0x400F33CE;
sfr far unsigned int   volatile LPC_EC1_MEM_BAR_HOST_HI_ADDR absolute 0x400F33D0;
sfr far unsigned int   volatile LPC_EMI_MEM_BAR_CR   absolute 0x400F33D2;
    sbit  MASK0_LPC_EMI_MEM_BAR_CR_bit at LPC_EMI_MEM_BAR_CR.B0;
    sbit  MASK1_LPC_EMI_MEM_BAR_CR_bit at LPC_EMI_MEM_BAR_CR.B1;
    sbit  MASK2_LPC_EMI_MEM_BAR_CR_bit at LPC_EMI_MEM_BAR_CR.B2;
    sbit  MASK3_LPC_EMI_MEM_BAR_CR_bit at LPC_EMI_MEM_BAR_CR.B3;
    sbit  MASK4_LPC_EMI_MEM_BAR_CR_bit at LPC_EMI_MEM_BAR_CR.B4;
    sbit  MASK5_LPC_EMI_MEM_BAR_CR_bit at LPC_EMI_MEM_BAR_CR.B5;
    sbit  MASK6_LPC_EMI_MEM_BAR_CR_bit at LPC_EMI_MEM_BAR_CR.B6;
    sbit  MASK7_LPC_EMI_MEM_BAR_CR_bit at LPC_EMI_MEM_BAR_CR.B7;
    sbit  FRAME8_LPC_EMI_MEM_BAR_CR_bit at LPC_EMI_MEM_BAR_CR.B8;
    sbit  FRAME9_LPC_EMI_MEM_BAR_CR_bit at LPC_EMI_MEM_BAR_CR.B9;
    sbit  FRAME10_LPC_EMI_MEM_BAR_CR_bit at LPC_EMI_MEM_BAR_CR.B10;
    sbit  FRAME11_LPC_EMI_MEM_BAR_CR_bit at LPC_EMI_MEM_BAR_CR.B11;
    sbit  FRAME12_LPC_EMI_MEM_BAR_CR_bit at LPC_EMI_MEM_BAR_CR.B12;
    sbit  FRAME13_LPC_EMI_MEM_BAR_CR_bit at LPC_EMI_MEM_BAR_CR.B13;
    sbit  VALID_LPC_EMI_MEM_BAR_CR_bit at LPC_EMI_MEM_BAR_CR.B15;

sfr far unsigned int   volatile LPC_EMI_MEM_BAR_HOST_LO_ADDR absolute 0x400F33D4;
sfr far unsigned int   volatile LPC_EMI_MEM_BAR_HOST_HI_ADDR absolute 0x400F33D6;
sfr far unsigned short   volatile GCR_LOGICAL_DEVICE_NUMBER absolute 0x400FFF07;
sfr far unsigned short   volatile GCR_DEVICE_ID        absolute 0x400FFF20;
sfr far unsigned short   volatile GCR_DEVICE_REVISION  absolute 0x400FFF21;
sfr far unsigned short   volatile EMI_HOST_EC_MBX      absolute 0x400F0000;
sfr far unsigned short   volatile EMI_EC_HOST_MBX      absolute 0x400F0001;
sfr far unsigned int   volatile EMI_EC_ADDRESS       absolute 0x400F0002;
    const register unsigned short int ACCESS_TYPE0 = 0;
    sbit  ACCESS_TYPE0_bit at EMI_EC_ADDRESS.B0;
    const register unsigned short int ACCESS_TYPE1 = 1;
    sbit  ACCESS_TYPE1_bit at EMI_EC_ADDRESS.B1;
    const register unsigned short int EC_ADDRESS2 = 2;
    sbit  EC_ADDRESS2_bit at EMI_EC_ADDRESS.B2;
    const register unsigned short int EC_ADDRESS3 = 3;
    sbit  EC_ADDRESS3_bit at EMI_EC_ADDRESS.B3;
    const register unsigned short int EC_ADDRESS4 = 4;
    sbit  EC_ADDRESS4_bit at EMI_EC_ADDRESS.B4;
    const register unsigned short int EC_ADDRESS5 = 5;
    sbit  EC_ADDRESS5_bit at EMI_EC_ADDRESS.B5;
    const register unsigned short int EC_ADDRESS6 = 6;
    sbit  EC_ADDRESS6_bit at EMI_EC_ADDRESS.B6;
    const register unsigned short int EC_ADDRESS7 = 7;
    sbit  EC_ADDRESS7_bit at EMI_EC_ADDRESS.B7;
    const register unsigned short int EC_ADDRESS8 = 8;
    sbit  EC_ADDRESS8_bit at EMI_EC_ADDRESS.B8;
    const register unsigned short int EC_ADDRESS9 = 9;
    sbit  EC_ADDRESS9_bit at EMI_EC_ADDRESS.B9;
    const register unsigned short int EC_ADDRESS10 = 10;
    sbit  EC_ADDRESS10_bit at EMI_EC_ADDRESS.B10;
    const register unsigned short int EC_ADDRESS11 = 11;
    sbit  EC_ADDRESS11_bit at EMI_EC_ADDRESS.B11;
    const register unsigned short int EC_ADDRESS12 = 12;
    sbit  EC_ADDRESS12_bit at EMI_EC_ADDRESS.B12;
    const register unsigned short int EC_ADDRESS13 = 13;
    sbit  EC_ADDRESS13_bit at EMI_EC_ADDRESS.B13;
    const register unsigned short int EC_ADDRESS14 = 14;
    sbit  EC_ADDRESS14_bit at EMI_EC_ADDRESS.B14;
    const register unsigned short int REGION = 15;
    sbit  REGION_bit at EMI_EC_ADDRESS.B15;

sfr far unsigned short   volatile EMI_EC_DATA_BYTE0    absolute 0x400F0004;
sfr far unsigned short   volatile EMI_EC_DATA_BYTE1    absolute 0x400F0005;
sfr far unsigned short   volatile EMI_EC_DATA_BYTE2    absolute 0x400F0006;
sfr far unsigned short   volatile EMI_EC_DATA_BYTE3    absolute 0x400F0007;
sfr far unsigned long   volatile EMI_EC_DATA          absolute 0x400F0004;
sfr far unsigned int   volatile EMI_EC_SWI           absolute 0x400F0008;
sfr far unsigned int   volatile EMI_EC_SWI_EN        absolute 0x400F000A;
sfr far unsigned short   volatile EMI_APPLICATION_ID   absolute 0x400F000C;
sfr far unsigned short   volatile EMI_HOST2EC_MBX      absolute 0x400F0100;
sfr far unsigned short   volatile EMI_EC2HOST_MBX      absolute 0x400F0101;
sfr far unsigned long   volatile EMI_MEMORY_BASE_ADDRESS_0 absolute 0x400F0104;
sfr far unsigned int   volatile EMI_MEMORY_READ_LIMIT_0 absolute 0x400F0108;
sfr far unsigned int   volatile EMI_MEMORY_WRITE_LIMIT_0 absolute 0x400F010A;
sfr far unsigned long   volatile EMI_MEMORY_BASE_ADDRESS_1 absolute 0x400F010C;
sfr far unsigned int   volatile EMI_MEMORY_READ_LIMIT_1 absolute 0x400F0110;
sfr far unsigned int   volatile EMI_MEMORY_WRITE_LIMIT_1 absolute 0x400F0112;
sfr far unsigned int   volatile EMI_EC_SWI_SET       absolute 0x400F0114;
sfr far unsigned int   volatile EMI_CLEAR_ENABLE     absolute 0x400F0116;
sfr far unsigned short   volatile ACPI_EC0_OS_DATA0    absolute 0x400F0C00;
sfr far unsigned short   volatile ACPI_EC0_OS_DATA1    absolute 0x400F0C01;
sfr far unsigned short   volatile ACPI_EC0_OS_DATA2    absolute 0x400F0C02;
sfr far unsigned short   volatile ACPI_EC0_OS_DATA3    absolute 0x400F0C03;
sfr far unsigned short   volatile ACPI_EC0_OS_COMMAND  absolute 0x400F0C04;
sfr far unsigned short   volatile ACPI_EC0_OS_STATUS   absolute 0x400F0C04;
    const register unsigned short int OBF = 0;
    sbit  OBF_bit at ACPI_EC0_OS_STATUS.B0;
    const register unsigned short int IBF = 1;
    sbit  IBF_bit at ACPI_EC0_OS_STATUS.B1;
    const register unsigned short int UD1B = 2;
    sbit  UD1B_bit at ACPI_EC0_OS_STATUS.B2;
    const register unsigned short int CMD = 3;
    sbit  CMD_bit at ACPI_EC0_OS_STATUS.B3;
    const register unsigned short int BURST = 4;
    sbit  BURST_bit at ACPI_EC0_OS_STATUS.B4;
    const register unsigned short int SCI_EVT = 5;
    sbit  SCI_EVT_bit at ACPI_EC0_OS_STATUS.B5;
    const register unsigned short int SMI_EVT = 6;
    sbit  SMI_EVT_bit at ACPI_EC0_OS_STATUS.B6;
    const register unsigned short int UD0B = 7;
    sbit  UD0B_bit at ACPI_EC0_OS_STATUS.B7;

sfr far unsigned short   volatile ACPI_EC0_OS_BYTE_CONTROL absolute 0x400F0C05;
sfr far unsigned short   volatile ACPI_EC0_EC2OS_DATA0 absolute 0x400F0D00;
sfr far unsigned short   volatile ACPI_EC0_EC2OS_DATA1 absolute 0x400F0D01;
sfr far unsigned short   volatile ACPI_EC0_EC2OS_DATA2 absolute 0x400F0D02;
sfr far unsigned short   volatile ACPI_EC0_EC2OS_DATA3 absolute 0x400F0D03;
sfr far unsigned short   volatile ACPI_EC0_EC_STATUS   absolute 0x400F0D04;
    sbit  OBF_ACPI_EC0_EC_STATUS_bit at ACPI_EC0_EC_STATUS.B0;
    sbit  IBF_ACPI_EC0_EC_STATUS_bit at ACPI_EC0_EC_STATUS.B1;
    const register unsigned short int UD1A = 2;
    sbit  UD1A_bit at ACPI_EC0_EC_STATUS.B2;
    sbit  CMD_ACPI_EC0_EC_STATUS_bit at ACPI_EC0_EC_STATUS.B3;
    sbit  BURST_ACPI_EC0_EC_STATUS_bit at ACPI_EC0_EC_STATUS.B4;
    sbit  SCI_EVT_ACPI_EC0_EC_STATUS_bit at ACPI_EC0_EC_STATUS.B5;
    sbit  SMI_EVT_ACPI_EC0_EC_STATUS_bit at ACPI_EC0_EC_STATUS.B6;
    const register unsigned short int UD0A = 7;
    sbit  UD0A_bit at ACPI_EC0_EC_STATUS.B7;

sfr far unsigned short   volatile ACPI_EC0_EC_BYTE_CONTROL absolute 0x400F0D05;
sfr far unsigned short   volatile ACPI_EC0_OS2EC_DATA0 absolute 0x400F0D08;
sfr far unsigned short   volatile ACPI_EC0_OS2EC_DATA1 absolute 0x400F0D09;
sfr far unsigned short   volatile ACPI_EC0_OS2EC_DATA2 absolute 0x400F0D0A;
sfr far unsigned short   volatile ACPI_EC0_OS2EC_DATA3 absolute 0x400F0D0B;
sfr far unsigned short   volatile ACPI_EC1_OS_DATA0    absolute 0x400F1000;
sfr far unsigned short   volatile ACPI_EC1_OS_DATA1    absolute 0x400F1001;
sfr far unsigned short   volatile ACPI_EC1_OS_DATA2    absolute 0x400F1002;
sfr far unsigned short   volatile ACPI_EC1_OS_DATA3    absolute 0x400F1003;
sfr far unsigned short   volatile ACPI_EC1_OS_COMMAND  absolute 0x400F1004;
sfr far unsigned short   volatile ACPI_EC1_OS_STATUS   absolute 0x400F1004;
    sbit  OBF_ACPI_EC1_OS_STATUS_bit at ACPI_EC1_OS_STATUS.B0;
    sbit  IBF_ACPI_EC1_OS_STATUS_bit at ACPI_EC1_OS_STATUS.B1;
    sbit  UD1B_ACPI_EC1_OS_STATUS_bit at ACPI_EC1_OS_STATUS.B2;
    sbit  CMD_ACPI_EC1_OS_STATUS_bit at ACPI_EC1_OS_STATUS.B3;
    sbit  BURST_ACPI_EC1_OS_STATUS_bit at ACPI_EC1_OS_STATUS.B4;
    sbit  SCI_EVT_ACPI_EC1_OS_STATUS_bit at ACPI_EC1_OS_STATUS.B5;
    sbit  SMI_EVT_ACPI_EC1_OS_STATUS_bit at ACPI_EC1_OS_STATUS.B6;
    sbit  UD0B_ACPI_EC1_OS_STATUS_bit at ACPI_EC1_OS_STATUS.B7;

sfr far unsigned short   volatile ACPI_EC1_OS_BYTE_CONTROL absolute 0x400F1005;
sfr far unsigned short   volatile ACPI_EC1_EC2OS_DATA0 absolute 0x400F1100;
sfr far unsigned short   volatile ACPI_EC1_EC2OS_DATA1 absolute 0x400F1101;
sfr far unsigned short   volatile ACPI_EC1_EC2OS_DATA2 absolute 0x400F1102;
sfr far unsigned short   volatile ACPI_EC1_EC2OS_DATA3 absolute 0x400F1103;
sfr far unsigned short   volatile ACPI_EC1_EC_STATUS   absolute 0x400F1104;
    sbit  OBF_ACPI_EC1_EC_STATUS_bit at ACPI_EC1_EC_STATUS.B0;
    sbit  IBF_ACPI_EC1_EC_STATUS_bit at ACPI_EC1_EC_STATUS.B1;
    sbit  UD1A_ACPI_EC1_EC_STATUS_bit at ACPI_EC1_EC_STATUS.B2;
    sbit  CMD_ACPI_EC1_EC_STATUS_bit at ACPI_EC1_EC_STATUS.B3;
    sbit  BURST_ACPI_EC1_EC_STATUS_bit at ACPI_EC1_EC_STATUS.B4;
    sbit  SCI_EVT_ACPI_EC1_EC_STATUS_bit at ACPI_EC1_EC_STATUS.B5;
    sbit  SMI_EVT_ACPI_EC1_EC_STATUS_bit at ACPI_EC1_EC_STATUS.B6;
    sbit  UD0A_ACPI_EC1_EC_STATUS_bit at ACPI_EC1_EC_STATUS.B7;

sfr far unsigned short   volatile ACPI_EC1_EC_BYTE_CONTROL absolute 0x400F1105;
sfr far unsigned short   volatile ACPI_EC1_OS2EC_DATA0 absolute 0x400F1108;
sfr far unsigned short   volatile ACPI_EC1_OS2EC_DATA1 absolute 0x400F1109;
sfr far unsigned short   volatile ACPI_EC1_OS2EC_DATA2 absolute 0x400F110A;
sfr far unsigned short   volatile ACPI_EC1_OS2EC_DATA3 absolute 0x400F110B;
sfr far unsigned short   volatile KBC_RD_PORT60_DATA   absolute 0x400F0400;
sfr far unsigned short   volatile KBC_WT_PORT60_DATA   absolute 0x400F0400;
sfr far unsigned short   volatile KBC_WT_PORT64_CMD    absolute 0x400F0404;
sfr far unsigned short   volatile KBC_RD_PORT64_STATUS absolute 0x400F0404;
    sbit  OBF_KBC_RD_PORT64_STATUS_bit at KBC_RD_PORT64_STATUS.B0;
    sbit  IBF_KBC_RD_PORT64_STATUS_bit at KBC_RD_PORT64_STATUS.B1;
    const register unsigned short int UD0 = 2;
    sbit  UD0_bit at KBC_RD_PORT64_STATUS.B2;
    const register unsigned short int CMDnDATA = 3;
    sbit  CMDnDATA_bit at KBC_RD_PORT64_STATUS.B3;
    const register unsigned short int UD1 = 4;
    sbit  UD1_bit at KBC_RD_PORT64_STATUS.B4;
    const register unsigned short int AUXOBF = 5;
    sbit  AUXOBF_bit at KBC_RD_PORT64_STATUS.B5;
    const register unsigned short int UD26 = 6;
    sbit  UD26_bit at KBC_RD_PORT64_STATUS.B6;
    const register unsigned short int UD27 = 7;
    sbit  UD27_bit at KBC_RD_PORT64_STATUS.B7;

sfr far unsigned short   volatile KBC_HOST2EC_DATA     absolute 0x400F0500;
sfr far unsigned short   volatile KBC_EC_DATA          absolute 0x400F0500;
sfr far unsigned short   volatile KBC_STATUS           absolute 0x400F0504;
    sbit  OBF_KBC_STATUS_bit at KBC_STATUS.B0;
    sbit  IBF_KBC_STATUS_bit at KBC_STATUS.B1;
    sbit  UD0_KBC_STATUS_bit at KBC_STATUS.B2;
    sbit  CMDnDATA_KBC_STATUS_bit at KBC_STATUS.B3;
    sbit  UD1_KBC_STATUS_bit at KBC_STATUS.B4;
    sbit  AUXOBF_KBC_STATUS_bit at KBC_STATUS.B5;
    sbit  UD26_KBC_STATUS_bit at KBC_STATUS.B6;
    sbit  UD27_KBC_STATUS_bit at KBC_STATUS.B7;

sfr far unsigned short   volatile KBC_CONTROL          absolute 0x400F0508;
    const register unsigned short int UD3 = 0;
    sbit  UD3_bit at KBC_CONTROL.B0;
    const register unsigned short int SAEN = 1;
    sbit  SAEN_bit at KBC_CONTROL.B1;
    const register unsigned short int PCOBFEN = 2;
    sbit  PCOBFEN_bit at KBC_CONTROL.B2;
    const register unsigned short int UD43 = 3;
    sbit  UD43_bit at KBC_CONTROL.B3;
    const register unsigned short int UD44 = 4;
    sbit  UD44_bit at KBC_CONTROL.B4;
    const register unsigned short int OBFEN = 5;
    sbit  OBFEN_bit at KBC_CONTROL.B5;
    const register unsigned short int UD5 = 6;
    sbit  UD5_bit at KBC_CONTROL.B6;
    const register unsigned short int AUXH = 7;
    sbit  AUXH_bit at KBC_CONTROL.B7;

sfr far unsigned short   volatile KBC_AUX_DATA         absolute 0x400F050C;
sfr far unsigned short   volatile KBC_PCOBF            absolute 0x400F0514;
sfr far unsigned short   volatile KBC_ACTIVATE         absolute 0x400F0730;
sfr far unsigned short   volatile PORT92_PORT92        absolute 0x400F1800;
    const register unsigned short int ALT_CPU_RESET = 0;
    sbit  ALT_CPU_RESET_bit at PORT92_PORT92.B0;
    const register unsigned short int ALT_GATE_A20 = 1;
    sbit  ALT_GATE_A20_bit at PORT92_PORT92.B1;

sfr far unsigned short   volatile PORT92_GATEA20       absolute 0x400F1900;
sfr far unsigned short   volatile PORT92_SETGA20L      absolute 0x400F1908;
sfr far unsigned short   volatile PORT92_RSTGA20L      absolute 0x400F190C;
sfr far unsigned short   volatile PORT92_PORT92_ENABLE absolute 0x400F1B30;
sfr far unsigned short   volatile MBX_INDEX            absolute 0x400F2400;
sfr far unsigned short   volatile MBX_DATA             absolute 0x400F2404;
sfr far unsigned long   volatile MBX_HOST_TO_EC       absolute 0x400F2500;
sfr far unsigned short   volatile MBX_EC_TO_HOST       absolute 0x400F2504;
sfr far unsigned long   volatile MBX_SMI_SOURCE       absolute 0x400F2508;
    const register unsigned short int EC_WR = 0;
    sbit  EC_WR_bit at MBX_SMI_SOURCE.B0;
    const register unsigned short int EC_SWI1 = 1;
    sbit  EC_SWI1_bit at MBX_SMI_SOURCE.B1;
    const register unsigned short int EC_SWI2 = 2;
    sbit  EC_SWI2_bit at MBX_SMI_SOURCE.B2;
    const register unsigned short int EC_SWI3 = 3;
    sbit  EC_SWI3_bit at MBX_SMI_SOURCE.B3;
    const register unsigned short int EC_SWI4 = 4;
    sbit  EC_SWI4_bit at MBX_SMI_SOURCE.B4;
    const register unsigned short int EC_SWI5 = 5;
    sbit  EC_SWI5_bit at MBX_SMI_SOURCE.B5;
    const register unsigned short int EC_SWI6 = 6;
    sbit  EC_SWI6_bit at MBX_SMI_SOURCE.B6;
    const register unsigned short int EC_SWI7 = 7;
    sbit  EC_SWI7_bit at MBX_SMI_SOURCE.B7;

sfr far unsigned long   volatile MBX_SMI_MASK         absolute 0x400F250C;
    const register unsigned short int EC_WR_EN = 0;
    sbit  EC_WR_EN_bit at MBX_SMI_MASK.B0;
    const register unsigned short int EC_SWI_EN1 = 1;
    sbit  EC_SWI_EN1_bit at MBX_SMI_MASK.B1;
    const register unsigned short int EC_SWI_EN2 = 2;
    sbit  EC_SWI_EN2_bit at MBX_SMI_MASK.B2;
    const register unsigned short int EC_SWI_EN3 = 3;
    sbit  EC_SWI_EN3_bit at MBX_SMI_MASK.B3;
    const register unsigned short int EC_SWI_EN4 = 4;
    sbit  EC_SWI_EN4_bit at MBX_SMI_MASK.B4;
    const register unsigned short int EC_SWI_EN5 = 5;
    sbit  EC_SWI_EN5_bit at MBX_SMI_MASK.B5;
    const register unsigned short int EC_SWI_EN6 = 6;
    sbit  EC_SWI_EN6_bit at MBX_SMI_MASK.B6;
    const register unsigned short int EC_SWI_EN7 = 7;
    sbit  EC_SWI_EN7_bit at MBX_SMI_MASK.B7;

sfr far unsigned long   volatile MBX_REG0             absolute 0x400F2510;
sfr far unsigned long   volatile MBX_REG1             absolute 0x400F2514;
sfr far unsigned long   volatile MBX_REG2             absolute 0x400F2518;
sfr far unsigned long   volatile MBX_REG3             absolute 0x400F251C;
sfr far unsigned long   volatile MBX_REG4             absolute 0x400F2520;
sfr far unsigned long   volatile MBX_REG5             absolute 0x400F2524;
sfr far unsigned long   volatile MBX_REG6             absolute 0x400F2528;
sfr far unsigned long   volatile MBX_REG7             absolute 0x400F252C;
sfr far unsigned long   volatile MBX_REG8             absolute 0x400F2530;
sfr far unsigned long   volatile MBX_REG9             absolute 0x400F2534;
sfr far unsigned long   volatile MBX_REG10            absolute 0x400F2538;
sfr far unsigned short   volatile PM1_STS2             absolute 0x400F1401;
    const register unsigned short int PWRBTN_STS = 0;
    sbit  PWRBTN_STS_bit at PM1_STS2.B0;
    const register unsigned short int SLPBTN_STS = 1;
    sbit  SLPBTN_STS_bit at PM1_STS2.B1;
    const register unsigned short int RTC_STS = 2;
    sbit  RTC_STS_bit at PM1_STS2.B2;
    const register unsigned short int PWRBTNOR_STS = 3;
    sbit  PWRBTNOR_STS_bit at PM1_STS2.B3;
    const register unsigned short int WAK_STS = 7;
    sbit  WAK_STS_bit at PM1_STS2.B7;

sfr far unsigned short   volatile PM1_EN2              absolute 0x400F1403;
    const register unsigned short int PWRBTN_EN = 0;
    sbit  PWRBTN_EN_bit at PM1_EN2.B0;
    const register unsigned short int SLPBTN_EN = 1;
    sbit  SLPBTN_EN_bit at PM1_EN2.B1;
    const register unsigned short int RTC_EN = 2;
    sbit  RTC_EN_bit at PM1_EN2.B2;

sfr far unsigned short   volatile PM1_CTRL2            absolute 0x400F1405;
    const register unsigned short int PWRBTNOR_EN = 1;
    sbit  PWRBTNOR_EN_bit at PM1_CTRL2.B1;
    const register unsigned short int SLP_TYP2 = 2;
    sbit  SLP_TYP2_bit at PM1_CTRL2.B2;
    const register unsigned short int SLP_TYP3 = 3;
    sbit  SLP_TYP3_bit at PM1_CTRL2.B3;
    const register unsigned short int SLP_TYP4 = 4;
    sbit  SLP_TYP4_bit at PM1_CTRL2.B4;
    const register unsigned short int SLP_EN = 5;
    sbit  SLP_EN_bit at PM1_CTRL2.B5;

sfr far unsigned short   volatile PM1_STS_2            absolute 0x400F1501;
    sbit  PWRBTN_STS_PM1_STS_2_bit at PM1_STS_2.B0;
    sbit  SLPBTN_STS_PM1_STS_2_bit at PM1_STS_2.B1;
    sbit  RTC_STS_PM1_STS_2_bit at PM1_STS_2.B2;
    sbit  PWRBTNOR_STS_PM1_STS_2_bit at PM1_STS_2.B3;
    sbit  WAK_STS_PM1_STS_2_bit at PM1_STS_2.B7;

sfr far unsigned short   volatile PM1_EN_2             absolute 0x400F1503;
    sbit  PWRBTN_EN_PM1_EN_2_bit at PM1_EN_2.B0;
    sbit  SLPBTN_EN_PM1_EN_2_bit at PM1_EN_2.B1;
    sbit  RTC_EN_PM1_EN_2_bit at PM1_EN_2.B2;

sfr far unsigned short   volatile PM1_CTRL_2           absolute 0x400F1505;
    sbit  PWRBTNOR_EN_PM1_CTRL_2_bit at PM1_CTRL_2.B1;
    sbit  SLP_TYP2_PM1_CTRL_2_bit at PM1_CTRL_2.B2;
    sbit  SLP_TYP3_PM1_CTRL_2_bit at PM1_CTRL_2.B3;
    sbit  SLP_TYP4_PM1_CTRL_2_bit at PM1_CTRL_2.B4;
    sbit  SLP_EN_PM1_CTRL_2_bit at PM1_CTRL_2.B5;

sfr far unsigned short   volatile PM1_PM_STS           absolute 0x400F1510;
sfr far unsigned short   volatile UART_BAUDRATE_LSB    absolute 0x400F1C00;
sfr far unsigned short   volatile UART_RX_DATA         absolute 0x400F1C00;
sfr far unsigned short   volatile UART_TX_DATA         absolute 0x400F1C00;
sfr far unsigned short   volatile UART_BAUDRATE_MSB    absolute 0x400F1C01;
sfr far unsigned short   volatile UART_INT_EN          absolute 0x400F1C01;
    const register unsigned short int ERDAI = 0;
    sbit  ERDAI_bit at UART_INT_EN.B0;
    const register unsigned short int ETHREI = 1;
    sbit  ETHREI_bit at UART_INT_EN.B1;
    const register unsigned short int ELSI = 2;
    sbit  ELSI_bit at UART_INT_EN.B2;
    const register unsigned short int EMSI = 3;
    sbit  EMSI_bit at UART_INT_EN.B3;

sfr far unsigned short   volatile UART_FIFO_CR         absolute 0x400F1C02;
    const register unsigned short int EXRF = 0;
    sbit  EXRF_bit at UART_FIFO_CR.B0;
    const register unsigned short int CLEAR_RECV_FIFO = 1;
    sbit  CLEAR_RECV_FIFO_bit at UART_FIFO_CR.B1;
    const register unsigned short int CLEAR_XMIT_FIFO = 2;
    sbit  CLEAR_XMIT_FIFO_bit at UART_FIFO_CR.B2;
    const register unsigned short int DMA_MODE_SELECT = 3;
    sbit  DMA_MODE_SELECT_bit at UART_FIFO_CR.B3;
    const register unsigned short int RECV_FIFO_TRIGGER_LEVEL6 = 6;
    sbit  RECV_FIFO_TRIGGER_LEVEL6_bit at UART_FIFO_CR.B6;
    const register unsigned short int RECV_FIFO_TRIGGER_LEVEL7 = 7;
    sbit  RECV_FIFO_TRIGGER_LEVEL7_bit at UART_FIFO_CR.B7;

sfr far unsigned short   volatile UART_INT_ID          absolute 0x400F1C02;
    const register unsigned short int IPEND = 0;
    sbit  IPEND_bit at UART_INT_ID.B0;
    const register unsigned short int INTID1 = 1;
    sbit  INTID1_bit at UART_INT_ID.B1;
    const register unsigned short int INTID2 = 2;
    sbit  INTID2_bit at UART_INT_ID.B2;
    const register unsigned short int INTID3 = 3;
    sbit  INTID3_bit at UART_INT_ID.B3;
    const register unsigned short int FIFO_EN6 = 6;
    sbit  FIFO_EN6_bit at UART_INT_ID.B6;
    const register unsigned short int FIFO_EN7 = 7;
    sbit  FIFO_EN7_bit at UART_INT_ID.B7;

sfr far unsigned short   volatile UART_LINE_CR         absolute 0x400F1C03;
    const register unsigned short int WORD_LENGTH0 = 0;
    sbit  WORD_LENGTH0_bit at UART_LINE_CR.B0;
    const register unsigned short int WORD_LENGTH1 = 1;
    sbit  WORD_LENGTH1_bit at UART_LINE_CR.B1;
    const register unsigned short int STOP_BITS = 2;
    sbit  STOP_BITS_bit at UART_LINE_CR.B2;
    const register unsigned short int ENABLE_PARITY = 3;
    sbit  ENABLE_PARITY_bit at UART_LINE_CR.B3;
    const register unsigned short int PARITY_SELECT = 4;
    sbit  PARITY_SELECT_bit at UART_LINE_CR.B4;
    const register unsigned short int STICK_PARITY = 5;
    sbit  STICK_PARITY_bit at UART_LINE_CR.B5;
    const register unsigned short int BREAK_CONTROL = 6;
    sbit  BREAK_CONTROL_bit at UART_LINE_CR.B6;
    const register unsigned short int DLAB = 7;
    sbit  DLAB_bit at UART_LINE_CR.B7;

sfr far unsigned short   volatile UART_MODEM_CR        absolute 0x400F1C04;
    const register unsigned short int DTR = 0;
    sbit  DTR_bit at UART_MODEM_CR.B0;
    const register unsigned short int RTS = 1;
    sbit  RTS_bit at UART_MODEM_CR.B1;
    const register unsigned short int OUT1 = 2;
    sbit  OUT1_bit at UART_MODEM_CR.B2;
    const register unsigned short int OUT2 = 3;
    sbit  OUT2_bit at UART_MODEM_CR.B3;
    const register unsigned short int LOOPBACK = 4;
    sbit  LOOPBACK_bit at UART_MODEM_CR.B4;

sfr far unsigned short   volatile UART_LINE_STS        absolute 0x400F1C05;
    const register unsigned short int DATA_READY = 0;
    sbit  DATA_READY_bit at UART_LINE_STS.B0;
    const register unsigned short int OVERRUN = 1;
    sbit  OVERRUN_bit at UART_LINE_STS.B1;
    const register unsigned short int PE = 2;
    sbit  PE_bit at UART_LINE_STS.B2;
    const register unsigned short int FRAME_ERROR = 3;
    sbit  FRAME_ERROR_bit at UART_LINE_STS.B3;
    const register unsigned short int BREAK_INTERRUPT = 4;
    sbit  BREAK_INTERRUPT_bit at UART_LINE_STS.B4;
    const register unsigned short int TRANSMIT_EMPTY = 5;
    sbit  TRANSMIT_EMPTY_bit at UART_LINE_STS.B5;
    const register unsigned short int TRANSMIT_ERROR = 6;
    sbit  TRANSMIT_ERROR_bit at UART_LINE_STS.B6;
    const register unsigned short int FIFO_ERROR = 7;
    sbit  FIFO_ERROR_bit at UART_LINE_STS.B7;

sfr far unsigned short   volatile UART_MODEM_STS       absolute 0x400F1C06;
    const register unsigned short int CTS = 0;
    sbit  CTS_bit at UART_MODEM_STS.B0;
    const register unsigned short int DSR = 1;
    sbit  DSR_bit at UART_MODEM_STS.B1;
    const register unsigned short int RI = 2;
    sbit  RI_bit at UART_MODEM_STS.B2;
    const register unsigned short int DCD = 3;
    sbit  DCD_bit at UART_MODEM_STS.B3;
    const register unsigned short int nCTS = 4;
    sbit  nCTS_bit at UART_MODEM_STS.B4;
    const register unsigned short int nDSR = 5;
    sbit  nDSR_bit at UART_MODEM_STS.B5;
    const register unsigned short int nRI = 6;
    sbit  nRI_bit at UART_MODEM_STS.B6;
    const register unsigned short int nDCD = 7;
    sbit  nDCD_bit at UART_MODEM_STS.B7;

sfr far unsigned short   volatile UART_SCRATCHPAD      absolute 0x400F1C07;
sfr far unsigned short   volatile UART_ACTIVATE        absolute 0x400F1F30;
sfr far unsigned short   volatile UART_CONFIG          absolute 0x400F1FF0;
    const register unsigned short int CLK_SRC = 0;
    sbit  CLK_SRC_bit at UART_CONFIG.B0;
    const register unsigned short int POWER = 1;
    sbit  POWER_bit at UART_CONFIG.B1;
    const register unsigned short int POLARITY = 2;
    sbit  POLARITY_bit at UART_CONFIG.B2;

sfr far unsigned long   volatile INTS_IRQ8_SOURCE     absolute 0x4000C000;
sfr far unsigned long   volatile INTS_IRQ8_ENABLE_SET absolute 0x4000C004;
sfr far unsigned long   volatile INTS_IRQ8_RESULT     absolute 0x4000C008;
sfr far unsigned long   volatile INTS_IRQ8_ENABLE_CLEAR absolute 0x4000C00C;
sfr far unsigned long   volatile INTS_IRQ9_SOURCE     absolute 0x4000C014;
sfr far unsigned long   volatile INTS_IRQ9_ENABLE_SET absolute 0x4000C018;
sfr far unsigned long   volatile INTS_IRQ9_RESULT     absolute 0x4000C01C;
sfr far unsigned long   volatile INTS_IRQ9_ENABLE_CLEAR absolute 0x4000C020;
sfr far unsigned long   volatile INTS_IRQ10_SOURCE    absolute 0x4000C028;
sfr far unsigned long   volatile INTS_IRQ10_ENABLE_SET absolute 0x4000C02C;
sfr far unsigned long   volatile INTS_IRQ10_RESULT    absolute 0x4000C030;
sfr far unsigned long   volatile INTS_IRQ10_ENABLE_CLEAR absolute 0x4000C034;
sfr far unsigned long   volatile INTS_IRQ11_SOURCE    absolute 0x4000C03C;
sfr far unsigned long   volatile INTS_IRQ11_ENABLE_SET absolute 0x4000C040;
sfr far unsigned long   volatile INTS_IRQ11_RESULT    absolute 0x4000C044;
sfr far unsigned long   volatile INTS_IRQ11_ENABLE_CLEAR absolute 0x4000C048;
sfr far unsigned long   volatile INTS_IRQ12_SOURCE    absolute 0x4000C050;
sfr far unsigned long   volatile INTS_IRQ12_ENABLE_SET absolute 0x4000C054;
sfr far unsigned long   volatile INTS_IRQ12_RESULT    absolute 0x4000C058;
sfr far unsigned long   volatile INTS_IRQ12_ENABLE_CLEAR absolute 0x4000C05C;
sfr far unsigned long   volatile INTS_IRQ13_SOURCE    absolute 0x4000C064;
sfr far unsigned long   volatile INTS_IRQ13_ENABLE_SET absolute 0x4000C068;
sfr far unsigned long   volatile INTS_IRQ13_RESULT    absolute 0x4000C06C;
sfr far unsigned long   volatile INTS_IRQ13_ENABLE_CLEAR absolute 0x4000C070;
sfr far unsigned long   volatile INTS_IRQ14_SOURCE    absolute 0x4000C078;
sfr far unsigned long   volatile INTS_IRQ14_ENABLE_SET absolute 0x4000C07C;
sfr far unsigned long   volatile INTS_IRQ14_RESULT    absolute 0x4000C080;
sfr far unsigned long   volatile INTS_IRQ14_ENABLE_CLEAR absolute 0x4000C084;
sfr far unsigned long   volatile INTS_IRQ15_SOURCE    absolute 0x4000C08C;
sfr far unsigned long   volatile INTS_IRQ15_ENABLE_SET absolute 0x4000C090;
sfr far unsigned long   volatile INTS_IRQ15_RESULT    absolute 0x4000C094;
sfr far unsigned long   volatile INTS_IRQ15_ENABLE_CLEAR absolute 0x4000C098;
sfr far unsigned long   volatile INTS_IRQ16_SOURCE    absolute 0x4000C0A0;
sfr far unsigned long   volatile INTS_IRQ16_ENABLE_SET absolute 0x4000C0A4;
sfr far unsigned long   volatile INTS_IRQ16_RESULT    absolute 0x4000C0A8;
sfr far unsigned long   volatile INTS_IRQ16_ENABLE_CLEAR absolute 0x4000C0AC;
sfr far unsigned long   volatile INTS_IRQ17_SOURCE    absolute 0x4000C0B4;
sfr far unsigned long   volatile INTS_IRQ17_ENABLE_SET absolute 0x4000C0B8;
sfr far unsigned long   volatile INTS_IRQ17_RESULT    absolute 0x4000C0BC;
sfr far unsigned long   volatile INTS_IRQ17_ENABLE_CLEAR absolute 0x4000C0C0;
sfr far unsigned long   volatile INTS_IRQ18_SOURCE    absolute 0x4000C0C8;
sfr far unsigned long   volatile INTS_IRQ18_ENABLE_SET absolute 0x4000C0CC;
sfr far unsigned long   volatile INTS_IRQ18_RESULT    absolute 0x4000C0D0;
sfr far unsigned long   volatile INTS_IRQ18_ENABLE_CLEAR absolute 0x4000C0D4;
sfr far unsigned long   volatile INTS_IRQ19_SOURCE    absolute 0x4000C0DC;
sfr far unsigned long   volatile INTS_IRQ19_ENABLE_SET absolute 0x4000C0E0;
sfr far unsigned long   volatile INTS_IRQ19_RESULT    absolute 0x4000C0E4;
sfr far unsigned long   volatile INTS_IRQ19_ENABLE_CLEAR absolute 0x4000C0E8;
sfr far unsigned long   volatile INTS_IRQ20_SOURCE    absolute 0x4000C0F0;
sfr far unsigned long   volatile INTS_IRQ20_ENABLE_SET absolute 0x4000C0F4;
sfr far unsigned long   volatile INTS_IRQ20_RESULT    absolute 0x4000C0F8;
sfr far unsigned long   volatile INTS_IRQ20_ENABLE_CLEAR absolute 0x4000C0FC;
sfr far unsigned long   volatile INTS_IRQ21_SOURCE    absolute 0x4000C104;
sfr far unsigned long   volatile INTS_IRQ21_ENABLE_SET absolute 0x4000C108;
sfr far unsigned long   volatile INTS_IRQ21_RESULT    absolute 0x4000C10C;
sfr far unsigned long   volatile INTS_IRQ21_ENABLE_CLEAR absolute 0x4000C110;
sfr far unsigned long   volatile INTS_IRQ22_SOURCE    absolute 0x4000C118;
sfr far unsigned long   volatile INTS_IRQ22_ENABLE_SET absolute 0x4000C11C;
sfr far unsigned long   volatile INTS_IRQ22_RESULT    absolute 0x4000C120;
sfr far unsigned long   volatile INTS_IRQ22_ENABLE_CLEAR absolute 0x4000C124;
sfr far unsigned long   volatile INTS_IRQ23_SOURCE    absolute 0x4000C12C;
sfr far unsigned long   volatile INTS_IRQ23_ENABLE_SET absolute 0x4000C130;
sfr far unsigned long   volatile INTS_IRQ23_RESULT    absolute 0x4000C134;
sfr far unsigned long   volatile INTS_IRQ23_ENABLE_CLEAR absolute 0x4000C138;
sfr far unsigned long   volatile INTS_BLOCK_ENABLE_SET absolute 0x4000C200;
sfr far unsigned long   volatile INTS_BLOCK_ENABLE_CLEAR absolute 0x4000C204;
sfr far unsigned long   volatile INTS_IRQ_VECTOR_STATE absolute 0x4000C208;
sfr far unsigned int   volatile WDT_LOAD             absolute 0x40000400;
sfr far unsigned int   volatile WDT_CONTROL          absolute 0x40000404;
    const register unsigned short int ENABLE_ = 0;
    sbit  ENABLE_bit at WDT_CONTROL.B0;
    const register unsigned short int STATUS = 1;
    sbit  STATUS_bit at WDT_CONTROL.B1;

sfr far unsigned short   volatile WDT_KICK             absolute 0x40000408;
sfr far unsigned int   volatile WDT_COUNT            absolute 0x4000040C;
sfr far unsigned long   volatile TIMER_CH0_COUNT      absolute 0x40000C00;
sfr far unsigned long   volatile TIMER_CH0_PRELOAD    absolute 0x40000C04;
sfr far unsigned long   volatile TIMER_CH0_STATUS     absolute 0x40000C08;
    const register unsigned short int INT_EVT = 0;
    sbit  INT_EVT_bit at TIMER_CH0_STATUS.B0;

sfr far unsigned long   volatile TIMER_CH0_INT_EN     absolute 0x40000C0C;
    sbit  ENABLE_TIMER_CH0_INT_EN_bit at TIMER_CH0_INT_EN.B0;

sfr far unsigned long   volatile TIMER_CH0_CONTROL    absolute 0x40000C10;
    sbit  ENABLE_TIMER_CH0_CONTROL_bit at TIMER_CH0_CONTROL.B0;
    const register unsigned short int COUNT_UP = 2;
    sbit  COUNT_UP_bit at TIMER_CH0_CONTROL.B2;
    const register unsigned short int AUTO_RESTART = 3;
    sbit  AUTO_RESTART_bit at TIMER_CH0_CONTROL.B3;
    const register unsigned short int SOFT_RESET = 4;
    sbit  SOFT_RESET_bit at TIMER_CH0_CONTROL.B4;
    const register unsigned short int START = 5;
    sbit  START_bit at TIMER_CH0_CONTROL.B5;
    const register unsigned short int RELOAD = 6;
    sbit  RELOAD_bit at TIMER_CH0_CONTROL.B6;
    const register unsigned short int HALT = 7;
    sbit  HALT_bit at TIMER_CH0_CONTROL.B7;
    const register unsigned short int PRE_SCALE16 = 16;
    sbit  PRE_SCALE16_bit at TIMER_CH0_CONTROL.B16;
    const register unsigned short int PRE_SCALE17 = 17;
    sbit  PRE_SCALE17_bit at TIMER_CH0_CONTROL.B17;
    const register unsigned short int PRE_SCALE18 = 18;
    sbit  PRE_SCALE18_bit at TIMER_CH0_CONTROL.B18;
    const register unsigned short int PRE_SCALE19 = 19;
    sbit  PRE_SCALE19_bit at TIMER_CH0_CONTROL.B19;
    const register unsigned short int PRE_SCALE20 = 20;
    sbit  PRE_SCALE20_bit at TIMER_CH0_CONTROL.B20;
    const register unsigned short int PRE_SCALE21 = 21;
    sbit  PRE_SCALE21_bit at TIMER_CH0_CONTROL.B21;
    const register unsigned short int PRE_SCALE22 = 22;
    sbit  PRE_SCALE22_bit at TIMER_CH0_CONTROL.B22;
    const register unsigned short int PRE_SCALE23 = 23;
    sbit  PRE_SCALE23_bit at TIMER_CH0_CONTROL.B23;
    const register unsigned short int PRE_SCALE24 = 24;
    sbit  PRE_SCALE24_bit at TIMER_CH0_CONTROL.B24;
    const register unsigned short int PRE_SCALE25 = 25;
    sbit  PRE_SCALE25_bit at TIMER_CH0_CONTROL.B25;
    const register unsigned short int PRE_SCALE26 = 26;
    sbit  PRE_SCALE26_bit at TIMER_CH0_CONTROL.B26;
    const register unsigned short int PRE_SCALE27 = 27;
    sbit  PRE_SCALE27_bit at TIMER_CH0_CONTROL.B27;
    const register unsigned short int PRE_SCALE28 = 28;
    sbit  PRE_SCALE28_bit at TIMER_CH0_CONTROL.B28;
    const register unsigned short int PRE_SCALE29 = 29;
    sbit  PRE_SCALE29_bit at TIMER_CH0_CONTROL.B29;
    const register unsigned short int PRE_SCALE30 = 30;
    sbit  PRE_SCALE30_bit at TIMER_CH0_CONTROL.B30;
    const register unsigned short int PRE_SCALE31 = 31;
    sbit  PRE_SCALE31_bit at TIMER_CH0_CONTROL.B31;

sfr far unsigned long   volatile TIMER_CH1_COUNT      absolute 0x40000C20;
sfr far unsigned long   volatile TIMER_CH1_PRELOAD    absolute 0x40000C24;
sfr far unsigned long   volatile TIMER_CH1_STATUS     absolute 0x40000C28;
    sbit  INT_EVT_TIMER_CH1_STATUS_bit at TIMER_CH1_STATUS.B0;

sfr far unsigned long   volatile TIMER_CH1_INT_EN     absolute 0x40000C2C;
    sbit  ENABLE_TIMER_CH1_INT_EN_bit at TIMER_CH1_INT_EN.B0;

sfr far unsigned long   volatile TIMER_CH1_CONTROL    absolute 0x40000C30;
    sbit  ENABLE_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B0;
    sbit  COUNT_UP_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B2;
    sbit  AUTO_RESTART_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B3;
    sbit  SOFT_RESET_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B4;
    sbit  START_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B5;
    sbit  RELOAD_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B6;
    sbit  HALT_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B7;
    sbit  PRE_SCALE16_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B16;
    sbit  PRE_SCALE17_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B17;
    sbit  PRE_SCALE18_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B18;
    sbit  PRE_SCALE19_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B19;
    sbit  PRE_SCALE20_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B20;
    sbit  PRE_SCALE21_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B21;
    sbit  PRE_SCALE22_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B22;
    sbit  PRE_SCALE23_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B23;
    sbit  PRE_SCALE24_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B24;
    sbit  PRE_SCALE25_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B25;
    sbit  PRE_SCALE26_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B26;
    sbit  PRE_SCALE27_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B27;
    sbit  PRE_SCALE28_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B28;
    sbit  PRE_SCALE29_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B29;
    sbit  PRE_SCALE30_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B30;
    sbit  PRE_SCALE31_TIMER_CH1_CONTROL_bit at TIMER_CH1_CONTROL.B31;

sfr far unsigned long   volatile TIMER_CH2_COUNT      absolute 0x40000C40;
sfr far unsigned long   volatile TIMER_CH2_PRELOAD    absolute 0x40000C44;
sfr far unsigned long   volatile TIMER_CH2_STATUS     absolute 0x40000C48;
    sbit  INT_EVT_TIMER_CH2_STATUS_bit at TIMER_CH2_STATUS.B0;

sfr far unsigned long   volatile TIMER_CH2_INT_EN     absolute 0x40000C4C;
    sbit  ENABLE_TIMER_CH2_INT_EN_bit at TIMER_CH2_INT_EN.B0;

sfr far unsigned long   volatile TIMER_CH2_CONTROL    absolute 0x40000C50;
    sbit  ENABLE_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B0;
    sbit  COUNT_UP_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B2;
    sbit  AUTO_RESTART_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B3;
    sbit  SOFT_RESET_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B4;
    sbit  START_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B5;
    sbit  RELOAD_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B6;
    sbit  HALT_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B7;
    sbit  PRE_SCALE16_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B16;
    sbit  PRE_SCALE17_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B17;
    sbit  PRE_SCALE18_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B18;
    sbit  PRE_SCALE19_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B19;
    sbit  PRE_SCALE20_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B20;
    sbit  PRE_SCALE21_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B21;
    sbit  PRE_SCALE22_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B22;
    sbit  PRE_SCALE23_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B23;
    sbit  PRE_SCALE24_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B24;
    sbit  PRE_SCALE25_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B25;
    sbit  PRE_SCALE26_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B26;
    sbit  PRE_SCALE27_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B27;
    sbit  PRE_SCALE28_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B28;
    sbit  PRE_SCALE29_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B29;
    sbit  PRE_SCALE30_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B30;
    sbit  PRE_SCALE31_TIMER_CH2_CONTROL_bit at TIMER_CH2_CONTROL.B31;

sfr far unsigned long   volatile TIMER_CH3_COUNT      absolute 0x40000C60;
sfr far unsigned long   volatile TIMER_CH3_PRELOAD    absolute 0x40000C64;
sfr far unsigned long   volatile TIMER_CH3_STATUS     absolute 0x40000C68;
    sbit  INT_EVT_TIMER_CH3_STATUS_bit at TIMER_CH3_STATUS.B0;

sfr far unsigned long   volatile TIMER_CH3_INT_EN     absolute 0x40000C6C;
    sbit  ENABLE_TIMER_CH3_INT_EN_bit at TIMER_CH3_INT_EN.B0;

sfr far unsigned long   volatile TIMER_CH3_CONTROL    absolute 0x40000C70;
    sbit  ENABLE_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B0;
    sbit  COUNT_UP_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B2;
    sbit  AUTO_RESTART_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B3;
    sbit  SOFT_RESET_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B4;
    sbit  START_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B5;
    sbit  RELOAD_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B6;
    sbit  HALT_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B7;
    sbit  PRE_SCALE16_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B16;
    sbit  PRE_SCALE17_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B17;
    sbit  PRE_SCALE18_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B18;
    sbit  PRE_SCALE19_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B19;
    sbit  PRE_SCALE20_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B20;
    sbit  PRE_SCALE21_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B21;
    sbit  PRE_SCALE22_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B22;
    sbit  PRE_SCALE23_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B23;
    sbit  PRE_SCALE24_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B24;
    sbit  PRE_SCALE25_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B25;
    sbit  PRE_SCALE26_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B26;
    sbit  PRE_SCALE27_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B27;
    sbit  PRE_SCALE28_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B28;
    sbit  PRE_SCALE29_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B29;
    sbit  PRE_SCALE30_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B30;
    sbit  PRE_SCALE31_TIMER_CH3_CONTROL_bit at TIMER_CH3_CONTROL.B31;

sfr far unsigned long   volatile TIMER_CH4_COUNT      absolute 0x40000C80;
sfr far unsigned long   volatile TIMER_CH4_PRELOAD    absolute 0x40000C84;
sfr far unsigned long   volatile TIMER_CH4_STATUS     absolute 0x40000C88;
    sbit  INT_EVT_TIMER_CH4_STATUS_bit at TIMER_CH4_STATUS.B0;

sfr far unsigned long   volatile TIMER_CH4_INT_EN     absolute 0x40000C8C;
    sbit  ENABLE_TIMER_CH4_INT_EN_bit at TIMER_CH4_INT_EN.B0;

sfr far unsigned long   volatile TIMER_CH4_CONTROL    absolute 0x40000C90;
    sbit  ENABLE_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B0;
    sbit  COUNT_UP_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B2;
    sbit  AUTO_RESTART_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B3;
    sbit  SOFT_RESET_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B4;
    sbit  START_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B5;
    sbit  RELOAD_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B6;
    sbit  HALT_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B7;
    sbit  PRE_SCALE16_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B16;
    sbit  PRE_SCALE17_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B17;
    sbit  PRE_SCALE18_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B18;
    sbit  PRE_SCALE19_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B19;
    sbit  PRE_SCALE20_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B20;
    sbit  PRE_SCALE21_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B21;
    sbit  PRE_SCALE22_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B22;
    sbit  PRE_SCALE23_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B23;
    sbit  PRE_SCALE24_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B24;
    sbit  PRE_SCALE25_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B25;
    sbit  PRE_SCALE26_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B26;
    sbit  PRE_SCALE27_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B27;
    sbit  PRE_SCALE28_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B28;
    sbit  PRE_SCALE29_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B29;
    sbit  PRE_SCALE30_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B30;
    sbit  PRE_SCALE31_TIMER_CH4_CONTROL_bit at TIMER_CH4_CONTROL.B31;

sfr far unsigned long   volatile TIMER_CH5_COUNT      absolute 0x40000CA0;
sfr far unsigned long   volatile TIMER_CH5_PRELOAD    absolute 0x40000CA4;
sfr far unsigned long   volatile TIMER_CH5_STATUS     absolute 0x40000CA8;
    sbit  INT_EVT_TIMER_CH5_STATUS_bit at TIMER_CH5_STATUS.B0;

sfr far unsigned long   volatile TIMER_CH5_INT_EN     absolute 0x40000CAC;
    sbit  ENABLE_TIMER_CH5_INT_EN_bit at TIMER_CH5_INT_EN.B0;

sfr far unsigned long   volatile TIMER_CH5_CONTROL    absolute 0x40000CB0;
    sbit  ENABLE_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B0;
    sbit  COUNT_UP_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B2;
    sbit  AUTO_RESTART_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B3;
    sbit  SOFT_RESET_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B4;
    sbit  START_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B5;
    sbit  RELOAD_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B6;
    sbit  HALT_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B7;
    sbit  PRE_SCALE16_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B16;
    sbit  PRE_SCALE17_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B17;
    sbit  PRE_SCALE18_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B18;
    sbit  PRE_SCALE19_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B19;
    sbit  PRE_SCALE20_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B20;
    sbit  PRE_SCALE21_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B21;
    sbit  PRE_SCALE22_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B22;
    sbit  PRE_SCALE23_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B23;
    sbit  PRE_SCALE24_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B24;
    sbit  PRE_SCALE25_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B25;
    sbit  PRE_SCALE26_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B26;
    sbit  PRE_SCALE27_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B27;
    sbit  PRE_SCALE28_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B28;
    sbit  PRE_SCALE29_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B29;
    sbit  PRE_SCALE30_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B30;
    sbit  PRE_SCALE31_TIMER_CH5_CONTROL_bit at TIMER_CH5_CONTROL.B31;

sfr far unsigned int   volatile HTM_PRELOAD          absolute 0x40009800;
sfr far unsigned int   volatile HTM_CONTROL          absolute 0x40009804;
sfr far unsigned int   volatile HTM_COUNT            absolute 0x40009808;
sfr far unsigned short   volatile RTC_SEC              absolute 0x400F2C00;
sfr far unsigned short   volatile RTC_SEC_ALARM        absolute 0x400F2C01;
sfr far unsigned short   volatile RTC_MIN              absolute 0x400F2C02;
sfr far unsigned short   volatile RTC_MIN_ALARM        absolute 0x400F2C03;
sfr far unsigned short   volatile RTC_HR               absolute 0x400F2C04;
sfr far unsigned short   volatile RTC_HR_ALARM         absolute 0x400F2C05;
sfr far unsigned short   volatile RTC_DAY_WEEK         absolute 0x400F2C06;
sfr far unsigned short   volatile RTC_DAY_MONTH        absolute 0x400F2C07;
sfr far unsigned short   volatile RTC_MONTH            absolute 0x400F2C08;
sfr far unsigned short   volatile RTC_YEAR             absolute 0x400F2C09;
sfr far unsigned short   volatile RTC_REG_A            absolute 0x400F2C0A;
sfr far unsigned short   volatile RTC_REG_B            absolute 0x400F2C0B;
sfr far unsigned short   volatile RTC_REG_C            absolute 0x400F2C0C;
sfr far unsigned short   volatile RTC_REG_D            absolute 0x400F2C0D;
sfr far unsigned long   volatile RTC_CONTROL          absolute 0x400F2C10;
    const register unsigned short int BLOCK_ENABLE = 0;
    sbit  BLOCK_ENABLE_bit at RTC_CONTROL.B0;
    sbit  SOFT_RESET_RTC_CONTROL_bit at RTC_CONTROL.B1;
    const register unsigned short int ALARM_ENABLE = 3;
    sbit  ALARM_ENABLE_bit at RTC_CONTROL.B3;

sfr far unsigned long   volatile RTC_WEEK_ALARM       absolute 0x400F2C14;
sfr far unsigned long   volatile RTC_DAYLIGHT_SAVINGS_FORWARD absolute 0x400F2C18;
    const register unsigned short int DST_MONTH0 = 0;
    sbit  DST_MONTH0_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B0;
    const register unsigned short int DST_MONTH1 = 1;
    sbit  DST_MONTH1_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B1;
    const register unsigned short int DST_MONTH2 = 2;
    sbit  DST_MONTH2_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B2;
    const register unsigned short int DST_MONTH3 = 3;
    sbit  DST_MONTH3_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B3;
    const register unsigned short int DST_MONTH4 = 4;
    sbit  DST_MONTH4_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B4;
    const register unsigned short int DST_MONTH5 = 5;
    sbit  DST_MONTH5_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B5;
    const register unsigned short int DST_MONTH6 = 6;
    sbit  DST_MONTH6_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B6;
    const register unsigned short int DST_MONTH7 = 7;
    sbit  DST_MONTH7_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B7;
    const register unsigned short int DST_DAY_OF_WEEK8 = 8;
    sbit  DST_DAY_OF_WEEK8_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B8;
    const register unsigned short int DST_DAY_OF_WEEK9 = 9;
    sbit  DST_DAY_OF_WEEK9_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B9;
    const register unsigned short int DST_DAY_OF_WEEK10 = 10;
    sbit  DST_DAY_OF_WEEK10_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B10;
    const register unsigned short int DST_WEEK16 = 16;
    sbit  DST_WEEK16_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B16;
    const register unsigned short int DST_WEEK17 = 17;
    sbit  DST_WEEK17_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B17;
    const register unsigned short int DST_WEEK18 = 18;
    sbit  DST_WEEK18_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B18;
    const register unsigned short int DST_HOUR24 = 24;
    sbit  DST_HOUR24_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B24;
    const register unsigned short int DST_HOUR25 = 25;
    sbit  DST_HOUR25_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B25;
    const register unsigned short int DST_HOUR26 = 26;
    sbit  DST_HOUR26_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B26;
    const register unsigned short int DST_HOUR27 = 27;
    sbit  DST_HOUR27_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B27;
    const register unsigned short int DST_HOUR28 = 28;
    sbit  DST_HOUR28_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B28;
    const register unsigned short int DST_HOUR29 = 29;
    sbit  DST_HOUR29_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B29;
    const register unsigned short int DST_HOUR30 = 30;
    sbit  DST_HOUR30_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B30;
    const register unsigned short int DST_AM_PM = 31;
    sbit  DST_AM_PM_bit at RTC_DAYLIGHT_SAVINGS_FORWARD.B31;

sfr far unsigned long   volatile RTC_DAYLIGHT_SAVINGS_BACKWARD absolute 0x400F2C1C;
    sbit  DST_MONTH0_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B0;
    sbit  DST_MONTH1_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B1;
    sbit  DST_MONTH2_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B2;
    sbit  DST_MONTH3_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B3;
    sbit  DST_MONTH4_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B4;
    sbit  DST_MONTH5_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B5;
    sbit  DST_MONTH6_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B6;
    sbit  DST_MONTH7_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B7;
    sbit  DST_DAY_OF_WEEK8_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B8;
    sbit  DST_DAY_OF_WEEK9_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B9;
    sbit  DST_DAY_OF_WEEK10_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B10;
    sbit  DST_WEEK16_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B16;
    sbit  DST_WEEK17_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B17;
    sbit  DST_WEEK18_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B18;
    sbit  DST_HOUR24_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B24;
    sbit  DST_HOUR25_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B25;
    sbit  DST_HOUR26_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B26;
    sbit  DST_HOUR27_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B27;
    sbit  DST_HOUR28_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B28;
    sbit  DST_HOUR29_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B29;
    sbit  DST_HOUR30_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B30;
    sbit  DST_AM_PM_RTC_DAYLIGHT_SAVINGS_BACKWARD_bit at RTC_DAYLIGHT_SAVINGS_BACKWARD.B31;

sfr far unsigned long   volatile GPIO_PORT_000_007    absolute 0x40081000;
sfr far unsigned long   volatile GPIO_PIN_CONTROL_000 absolute 0x40081000;
    const register unsigned short int PU_PD0 = 0;
    sbit  PU_PD0_bit at GPIO_PIN_CONTROL_000.B0;
    const register unsigned short int PU_PD1 = 1;
    sbit  PU_PD1_bit at GPIO_PIN_CONTROL_000.B1;
    const register unsigned short int PWR2 = 2;
    sbit  PWR2_bit at GPIO_PIN_CONTROL_000.B2;
    const register unsigned short int PWR3 = 3;
    sbit  PWR3_bit at GPIO_PIN_CONTROL_000.B3;
    const register unsigned short int INT_DET4 = 4;
    sbit  INT_DET4_bit at GPIO_PIN_CONTROL_000.B4;
    const register unsigned short int INT_DET5 = 5;
    sbit  INT_DET5_bit at GPIO_PIN_CONTROL_000.B5;
    const register unsigned short int INT_DET6 = 6;
    sbit  INT_DET6_bit at GPIO_PIN_CONTROL_000.B6;
    const register unsigned short int EDGE_EN = 7;
    sbit  EDGE_EN_bit at GPIO_PIN_CONTROL_000.B7;
    const register unsigned short int BUFFER = 8;
    sbit  BUFFER_bit at GPIO_PIN_CONTROL_000.B8;
    const register unsigned short int DIR_ = 9;
    sbit  DIR_bit at GPIO_PIN_CONTROL_000.B9;
    const register unsigned short int OUTPUT_WRITE_EN = 10;
    sbit  OUTPUT_WRITE_EN_bit at GPIO_PIN_CONTROL_000.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_000_bit at GPIO_PIN_CONTROL_000.B11;
    const register unsigned short int MUX12 = 12;
    sbit  MUX12_bit at GPIO_PIN_CONTROL_000.B12;
    const register unsigned short int MUX13 = 13;
    sbit  MUX13_bit at GPIO_PIN_CONTROL_000.B13;
    const register unsigned short int OUTPUT_ALT = 16;
    sbit  OUTPUT_ALT_bit at GPIO_PIN_CONTROL_000.B16;
    const register unsigned short int INPUT_ = 24;
    sbit  INPUT_bit at GPIO_PIN_CONTROL_000.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_001 absolute 0x40081004;
    sbit  PU_PD0_GPIO_PIN_CONTROL_001_bit at GPIO_PIN_CONTROL_001.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_001_bit at GPIO_PIN_CONTROL_001.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_001_bit at GPIO_PIN_CONTROL_001.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_001_bit at GPIO_PIN_CONTROL_001.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_001_bit at GPIO_PIN_CONTROL_001.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_001_bit at GPIO_PIN_CONTROL_001.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_001_bit at GPIO_PIN_CONTROL_001.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_001_bit at GPIO_PIN_CONTROL_001.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_001_bit at GPIO_PIN_CONTROL_001.B8;
    sbit  DIR_GPIO_PIN_CONTROL_001_bit at GPIO_PIN_CONTROL_001.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_001_bit at GPIO_PIN_CONTROL_001.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_001_bit at GPIO_PIN_CONTROL_001.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_001_bit at GPIO_PIN_CONTROL_001.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_001_bit at GPIO_PIN_CONTROL_001.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_001_bit at GPIO_PIN_CONTROL_001.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_001_bit at GPIO_PIN_CONTROL_001.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_002 absolute 0x40081008;
    sbit  PU_PD0_GPIO_PIN_CONTROL_002_bit at GPIO_PIN_CONTROL_002.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_002_bit at GPIO_PIN_CONTROL_002.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_002_bit at GPIO_PIN_CONTROL_002.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_002_bit at GPIO_PIN_CONTROL_002.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_002_bit at GPIO_PIN_CONTROL_002.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_002_bit at GPIO_PIN_CONTROL_002.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_002_bit at GPIO_PIN_CONTROL_002.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_002_bit at GPIO_PIN_CONTROL_002.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_002_bit at GPIO_PIN_CONTROL_002.B8;
    sbit  DIR_GPIO_PIN_CONTROL_002_bit at GPIO_PIN_CONTROL_002.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_002_bit at GPIO_PIN_CONTROL_002.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_002_bit at GPIO_PIN_CONTROL_002.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_002_bit at GPIO_PIN_CONTROL_002.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_002_bit at GPIO_PIN_CONTROL_002.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_002_bit at GPIO_PIN_CONTROL_002.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_002_bit at GPIO_PIN_CONTROL_002.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_003 absolute 0x4008100C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_003_bit at GPIO_PIN_CONTROL_003.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_003_bit at GPIO_PIN_CONTROL_003.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_003_bit at GPIO_PIN_CONTROL_003.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_003_bit at GPIO_PIN_CONTROL_003.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_003_bit at GPIO_PIN_CONTROL_003.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_003_bit at GPIO_PIN_CONTROL_003.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_003_bit at GPIO_PIN_CONTROL_003.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_003_bit at GPIO_PIN_CONTROL_003.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_003_bit at GPIO_PIN_CONTROL_003.B8;
    sbit  DIR_GPIO_PIN_CONTROL_003_bit at GPIO_PIN_CONTROL_003.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_003_bit at GPIO_PIN_CONTROL_003.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_003_bit at GPIO_PIN_CONTROL_003.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_003_bit at GPIO_PIN_CONTROL_003.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_003_bit at GPIO_PIN_CONTROL_003.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_003_bit at GPIO_PIN_CONTROL_003.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_003_bit at GPIO_PIN_CONTROL_003.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_004 absolute 0x40081010;
    sbit  PU_PD0_GPIO_PIN_CONTROL_004_bit at GPIO_PIN_CONTROL_004.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_004_bit at GPIO_PIN_CONTROL_004.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_004_bit at GPIO_PIN_CONTROL_004.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_004_bit at GPIO_PIN_CONTROL_004.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_004_bit at GPIO_PIN_CONTROL_004.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_004_bit at GPIO_PIN_CONTROL_004.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_004_bit at GPIO_PIN_CONTROL_004.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_004_bit at GPIO_PIN_CONTROL_004.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_004_bit at GPIO_PIN_CONTROL_004.B8;
    sbit  DIR_GPIO_PIN_CONTROL_004_bit at GPIO_PIN_CONTROL_004.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_004_bit at GPIO_PIN_CONTROL_004.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_004_bit at GPIO_PIN_CONTROL_004.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_004_bit at GPIO_PIN_CONTROL_004.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_004_bit at GPIO_PIN_CONTROL_004.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_004_bit at GPIO_PIN_CONTROL_004.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_004_bit at GPIO_PIN_CONTROL_004.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_005 absolute 0x40081014;
    sbit  PU_PD0_GPIO_PIN_CONTROL_005_bit at GPIO_PIN_CONTROL_005.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_005_bit at GPIO_PIN_CONTROL_005.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_005_bit at GPIO_PIN_CONTROL_005.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_005_bit at GPIO_PIN_CONTROL_005.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_005_bit at GPIO_PIN_CONTROL_005.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_005_bit at GPIO_PIN_CONTROL_005.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_005_bit at GPIO_PIN_CONTROL_005.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_005_bit at GPIO_PIN_CONTROL_005.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_005_bit at GPIO_PIN_CONTROL_005.B8;
    sbit  DIR_GPIO_PIN_CONTROL_005_bit at GPIO_PIN_CONTROL_005.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_005_bit at GPIO_PIN_CONTROL_005.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_005_bit at GPIO_PIN_CONTROL_005.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_005_bit at GPIO_PIN_CONTROL_005.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_005_bit at GPIO_PIN_CONTROL_005.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_005_bit at GPIO_PIN_CONTROL_005.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_005_bit at GPIO_PIN_CONTROL_005.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_006 absolute 0x40081018;
    sbit  PU_PD0_GPIO_PIN_CONTROL_006_bit at GPIO_PIN_CONTROL_006.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_006_bit at GPIO_PIN_CONTROL_006.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_006_bit at GPIO_PIN_CONTROL_006.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_006_bit at GPIO_PIN_CONTROL_006.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_006_bit at GPIO_PIN_CONTROL_006.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_006_bit at GPIO_PIN_CONTROL_006.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_006_bit at GPIO_PIN_CONTROL_006.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_006_bit at GPIO_PIN_CONTROL_006.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_006_bit at GPIO_PIN_CONTROL_006.B8;
    sbit  DIR_GPIO_PIN_CONTROL_006_bit at GPIO_PIN_CONTROL_006.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_006_bit at GPIO_PIN_CONTROL_006.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_006_bit at GPIO_PIN_CONTROL_006.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_006_bit at GPIO_PIN_CONTROL_006.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_006_bit at GPIO_PIN_CONTROL_006.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_006_bit at GPIO_PIN_CONTROL_006.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_006_bit at GPIO_PIN_CONTROL_006.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_007 absolute 0x4008101C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_007_bit at GPIO_PIN_CONTROL_007.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_007_bit at GPIO_PIN_CONTROL_007.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_007_bit at GPIO_PIN_CONTROL_007.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_007_bit at GPIO_PIN_CONTROL_007.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_007_bit at GPIO_PIN_CONTROL_007.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_007_bit at GPIO_PIN_CONTROL_007.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_007_bit at GPIO_PIN_CONTROL_007.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_007_bit at GPIO_PIN_CONTROL_007.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_007_bit at GPIO_PIN_CONTROL_007.B8;
    sbit  DIR_GPIO_PIN_CONTROL_007_bit at GPIO_PIN_CONTROL_007.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_007_bit at GPIO_PIN_CONTROL_007.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_007_bit at GPIO_PIN_CONTROL_007.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_007_bit at GPIO_PIN_CONTROL_007.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_007_bit at GPIO_PIN_CONTROL_007.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_007_bit at GPIO_PIN_CONTROL_007.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_007_bit at GPIO_PIN_CONTROL_007.B24;

sfr far unsigned long   volatile GPIO_PORT_010_017    absolute 0x40081020;
sfr far unsigned long   volatile GPIO_PIN_CONTROL_010 absolute 0x40081020;
    sbit  PU_PD0_GPIO_PIN_CONTROL_010_bit at GPIO_PIN_CONTROL_010.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_010_bit at GPIO_PIN_CONTROL_010.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_010_bit at GPIO_PIN_CONTROL_010.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_010_bit at GPIO_PIN_CONTROL_010.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_010_bit at GPIO_PIN_CONTROL_010.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_010_bit at GPIO_PIN_CONTROL_010.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_010_bit at GPIO_PIN_CONTROL_010.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_010_bit at GPIO_PIN_CONTROL_010.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_010_bit at GPIO_PIN_CONTROL_010.B8;
    sbit  DIR_GPIO_PIN_CONTROL_010_bit at GPIO_PIN_CONTROL_010.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_010_bit at GPIO_PIN_CONTROL_010.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_010_bit at GPIO_PIN_CONTROL_010.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_010_bit at GPIO_PIN_CONTROL_010.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_010_bit at GPIO_PIN_CONTROL_010.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_010_bit at GPIO_PIN_CONTROL_010.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_010_bit at GPIO_PIN_CONTROL_010.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_011 absolute 0x40081024;
    sbit  PU_PD0_GPIO_PIN_CONTROL_011_bit at GPIO_PIN_CONTROL_011.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_011_bit at GPIO_PIN_CONTROL_011.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_011_bit at GPIO_PIN_CONTROL_011.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_011_bit at GPIO_PIN_CONTROL_011.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_011_bit at GPIO_PIN_CONTROL_011.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_011_bit at GPIO_PIN_CONTROL_011.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_011_bit at GPIO_PIN_CONTROL_011.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_011_bit at GPIO_PIN_CONTROL_011.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_011_bit at GPIO_PIN_CONTROL_011.B8;
    sbit  DIR_GPIO_PIN_CONTROL_011_bit at GPIO_PIN_CONTROL_011.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_011_bit at GPIO_PIN_CONTROL_011.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_011_bit at GPIO_PIN_CONTROL_011.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_011_bit at GPIO_PIN_CONTROL_011.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_011_bit at GPIO_PIN_CONTROL_011.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_011_bit at GPIO_PIN_CONTROL_011.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_011_bit at GPIO_PIN_CONTROL_011.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_012 absolute 0x40081028;
    sbit  PU_PD0_GPIO_PIN_CONTROL_012_bit at GPIO_PIN_CONTROL_012.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_012_bit at GPIO_PIN_CONTROL_012.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_012_bit at GPIO_PIN_CONTROL_012.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_012_bit at GPIO_PIN_CONTROL_012.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_012_bit at GPIO_PIN_CONTROL_012.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_012_bit at GPIO_PIN_CONTROL_012.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_012_bit at GPIO_PIN_CONTROL_012.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_012_bit at GPIO_PIN_CONTROL_012.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_012_bit at GPIO_PIN_CONTROL_012.B8;
    sbit  DIR_GPIO_PIN_CONTROL_012_bit at GPIO_PIN_CONTROL_012.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_012_bit at GPIO_PIN_CONTROL_012.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_012_bit at GPIO_PIN_CONTROL_012.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_012_bit at GPIO_PIN_CONTROL_012.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_012_bit at GPIO_PIN_CONTROL_012.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_012_bit at GPIO_PIN_CONTROL_012.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_012_bit at GPIO_PIN_CONTROL_012.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_013 absolute 0x4008102C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_013_bit at GPIO_PIN_CONTROL_013.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_013_bit at GPIO_PIN_CONTROL_013.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_013_bit at GPIO_PIN_CONTROL_013.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_013_bit at GPIO_PIN_CONTROL_013.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_013_bit at GPIO_PIN_CONTROL_013.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_013_bit at GPIO_PIN_CONTROL_013.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_013_bit at GPIO_PIN_CONTROL_013.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_013_bit at GPIO_PIN_CONTROL_013.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_013_bit at GPIO_PIN_CONTROL_013.B8;
    sbit  DIR_GPIO_PIN_CONTROL_013_bit at GPIO_PIN_CONTROL_013.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_013_bit at GPIO_PIN_CONTROL_013.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_013_bit at GPIO_PIN_CONTROL_013.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_013_bit at GPIO_PIN_CONTROL_013.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_013_bit at GPIO_PIN_CONTROL_013.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_013_bit at GPIO_PIN_CONTROL_013.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_013_bit at GPIO_PIN_CONTROL_013.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_014 absolute 0x40081030;
    sbit  PU_PD0_GPIO_PIN_CONTROL_014_bit at GPIO_PIN_CONTROL_014.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_014_bit at GPIO_PIN_CONTROL_014.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_014_bit at GPIO_PIN_CONTROL_014.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_014_bit at GPIO_PIN_CONTROL_014.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_014_bit at GPIO_PIN_CONTROL_014.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_014_bit at GPIO_PIN_CONTROL_014.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_014_bit at GPIO_PIN_CONTROL_014.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_014_bit at GPIO_PIN_CONTROL_014.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_014_bit at GPIO_PIN_CONTROL_014.B8;
    sbit  DIR_GPIO_PIN_CONTROL_014_bit at GPIO_PIN_CONTROL_014.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_014_bit at GPIO_PIN_CONTROL_014.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_014_bit at GPIO_PIN_CONTROL_014.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_014_bit at GPIO_PIN_CONTROL_014.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_014_bit at GPIO_PIN_CONTROL_014.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_014_bit at GPIO_PIN_CONTROL_014.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_014_bit at GPIO_PIN_CONTROL_014.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_015 absolute 0x40081034;
    sbit  PU_PD0_GPIO_PIN_CONTROL_015_bit at GPIO_PIN_CONTROL_015.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_015_bit at GPIO_PIN_CONTROL_015.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_015_bit at GPIO_PIN_CONTROL_015.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_015_bit at GPIO_PIN_CONTROL_015.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_015_bit at GPIO_PIN_CONTROL_015.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_015_bit at GPIO_PIN_CONTROL_015.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_015_bit at GPIO_PIN_CONTROL_015.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_015_bit at GPIO_PIN_CONTROL_015.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_015_bit at GPIO_PIN_CONTROL_015.B8;
    sbit  DIR_GPIO_PIN_CONTROL_015_bit at GPIO_PIN_CONTROL_015.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_015_bit at GPIO_PIN_CONTROL_015.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_015_bit at GPIO_PIN_CONTROL_015.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_015_bit at GPIO_PIN_CONTROL_015.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_015_bit at GPIO_PIN_CONTROL_015.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_015_bit at GPIO_PIN_CONTROL_015.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_015_bit at GPIO_PIN_CONTROL_015.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_016 absolute 0x40081038;
    sbit  PU_PD0_GPIO_PIN_CONTROL_016_bit at GPIO_PIN_CONTROL_016.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_016_bit at GPIO_PIN_CONTROL_016.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_016_bit at GPIO_PIN_CONTROL_016.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_016_bit at GPIO_PIN_CONTROL_016.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_016_bit at GPIO_PIN_CONTROL_016.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_016_bit at GPIO_PIN_CONTROL_016.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_016_bit at GPIO_PIN_CONTROL_016.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_016_bit at GPIO_PIN_CONTROL_016.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_016_bit at GPIO_PIN_CONTROL_016.B8;
    sbit  DIR_GPIO_PIN_CONTROL_016_bit at GPIO_PIN_CONTROL_016.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_016_bit at GPIO_PIN_CONTROL_016.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_016_bit at GPIO_PIN_CONTROL_016.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_016_bit at GPIO_PIN_CONTROL_016.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_016_bit at GPIO_PIN_CONTROL_016.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_016_bit at GPIO_PIN_CONTROL_016.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_016_bit at GPIO_PIN_CONTROL_016.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_017 absolute 0x4008103C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_017_bit at GPIO_PIN_CONTROL_017.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_017_bit at GPIO_PIN_CONTROL_017.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_017_bit at GPIO_PIN_CONTROL_017.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_017_bit at GPIO_PIN_CONTROL_017.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_017_bit at GPIO_PIN_CONTROL_017.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_017_bit at GPIO_PIN_CONTROL_017.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_017_bit at GPIO_PIN_CONTROL_017.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_017_bit at GPIO_PIN_CONTROL_017.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_017_bit at GPIO_PIN_CONTROL_017.B8;
    sbit  DIR_GPIO_PIN_CONTROL_017_bit at GPIO_PIN_CONTROL_017.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_017_bit at GPIO_PIN_CONTROL_017.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_017_bit at GPIO_PIN_CONTROL_017.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_017_bit at GPIO_PIN_CONTROL_017.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_017_bit at GPIO_PIN_CONTROL_017.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_017_bit at GPIO_PIN_CONTROL_017.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_017_bit at GPIO_PIN_CONTROL_017.B24;

sfr far unsigned long   volatile GPIO_PORT_020_027    absolute 0x40081040;
sfr far unsigned long   volatile GPIO_PIN_CONTROL_020 absolute 0x40081040;
    sbit  PU_PD0_GPIO_PIN_CONTROL_020_bit at GPIO_PIN_CONTROL_020.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_020_bit at GPIO_PIN_CONTROL_020.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_020_bit at GPIO_PIN_CONTROL_020.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_020_bit at GPIO_PIN_CONTROL_020.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_020_bit at GPIO_PIN_CONTROL_020.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_020_bit at GPIO_PIN_CONTROL_020.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_020_bit at GPIO_PIN_CONTROL_020.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_020_bit at GPIO_PIN_CONTROL_020.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_020_bit at GPIO_PIN_CONTROL_020.B8;
    sbit  DIR_GPIO_PIN_CONTROL_020_bit at GPIO_PIN_CONTROL_020.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_020_bit at GPIO_PIN_CONTROL_020.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_020_bit at GPIO_PIN_CONTROL_020.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_020_bit at GPIO_PIN_CONTROL_020.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_020_bit at GPIO_PIN_CONTROL_020.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_020_bit at GPIO_PIN_CONTROL_020.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_020_bit at GPIO_PIN_CONTROL_020.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_021 absolute 0x40081044;
    sbit  PU_PD0_GPIO_PIN_CONTROL_021_bit at GPIO_PIN_CONTROL_021.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_021_bit at GPIO_PIN_CONTROL_021.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_021_bit at GPIO_PIN_CONTROL_021.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_021_bit at GPIO_PIN_CONTROL_021.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_021_bit at GPIO_PIN_CONTROL_021.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_021_bit at GPIO_PIN_CONTROL_021.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_021_bit at GPIO_PIN_CONTROL_021.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_021_bit at GPIO_PIN_CONTROL_021.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_021_bit at GPIO_PIN_CONTROL_021.B8;
    sbit  DIR_GPIO_PIN_CONTROL_021_bit at GPIO_PIN_CONTROL_021.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_021_bit at GPIO_PIN_CONTROL_021.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_021_bit at GPIO_PIN_CONTROL_021.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_021_bit at GPIO_PIN_CONTROL_021.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_021_bit at GPIO_PIN_CONTROL_021.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_021_bit at GPIO_PIN_CONTROL_021.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_021_bit at GPIO_PIN_CONTROL_021.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_022 absolute 0x40081048;
    sbit  PU_PD0_GPIO_PIN_CONTROL_022_bit at GPIO_PIN_CONTROL_022.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_022_bit at GPIO_PIN_CONTROL_022.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_022_bit at GPIO_PIN_CONTROL_022.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_022_bit at GPIO_PIN_CONTROL_022.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_022_bit at GPIO_PIN_CONTROL_022.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_022_bit at GPIO_PIN_CONTROL_022.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_022_bit at GPIO_PIN_CONTROL_022.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_022_bit at GPIO_PIN_CONTROL_022.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_022_bit at GPIO_PIN_CONTROL_022.B8;
    sbit  DIR_GPIO_PIN_CONTROL_022_bit at GPIO_PIN_CONTROL_022.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_022_bit at GPIO_PIN_CONTROL_022.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_022_bit at GPIO_PIN_CONTROL_022.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_022_bit at GPIO_PIN_CONTROL_022.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_022_bit at GPIO_PIN_CONTROL_022.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_022_bit at GPIO_PIN_CONTROL_022.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_022_bit at GPIO_PIN_CONTROL_022.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_023 absolute 0x4008104C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_023_bit at GPIO_PIN_CONTROL_023.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_023_bit at GPIO_PIN_CONTROL_023.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_023_bit at GPIO_PIN_CONTROL_023.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_023_bit at GPIO_PIN_CONTROL_023.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_023_bit at GPIO_PIN_CONTROL_023.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_023_bit at GPIO_PIN_CONTROL_023.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_023_bit at GPIO_PIN_CONTROL_023.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_023_bit at GPIO_PIN_CONTROL_023.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_023_bit at GPIO_PIN_CONTROL_023.B8;
    sbit  DIR_GPIO_PIN_CONTROL_023_bit at GPIO_PIN_CONTROL_023.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_023_bit at GPIO_PIN_CONTROL_023.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_023_bit at GPIO_PIN_CONTROL_023.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_023_bit at GPIO_PIN_CONTROL_023.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_023_bit at GPIO_PIN_CONTROL_023.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_023_bit at GPIO_PIN_CONTROL_023.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_023_bit at GPIO_PIN_CONTROL_023.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_024 absolute 0x40081050;
    sbit  PU_PD0_GPIO_PIN_CONTROL_024_bit at GPIO_PIN_CONTROL_024.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_024_bit at GPIO_PIN_CONTROL_024.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_024_bit at GPIO_PIN_CONTROL_024.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_024_bit at GPIO_PIN_CONTROL_024.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_024_bit at GPIO_PIN_CONTROL_024.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_024_bit at GPIO_PIN_CONTROL_024.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_024_bit at GPIO_PIN_CONTROL_024.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_024_bit at GPIO_PIN_CONTROL_024.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_024_bit at GPIO_PIN_CONTROL_024.B8;
    sbit  DIR_GPIO_PIN_CONTROL_024_bit at GPIO_PIN_CONTROL_024.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_024_bit at GPIO_PIN_CONTROL_024.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_024_bit at GPIO_PIN_CONTROL_024.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_024_bit at GPIO_PIN_CONTROL_024.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_024_bit at GPIO_PIN_CONTROL_024.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_024_bit at GPIO_PIN_CONTROL_024.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_024_bit at GPIO_PIN_CONTROL_024.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_025 absolute 0x40081054;
    sbit  PU_PD0_GPIO_PIN_CONTROL_025_bit at GPIO_PIN_CONTROL_025.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_025_bit at GPIO_PIN_CONTROL_025.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_025_bit at GPIO_PIN_CONTROL_025.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_025_bit at GPIO_PIN_CONTROL_025.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_025_bit at GPIO_PIN_CONTROL_025.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_025_bit at GPIO_PIN_CONTROL_025.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_025_bit at GPIO_PIN_CONTROL_025.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_025_bit at GPIO_PIN_CONTROL_025.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_025_bit at GPIO_PIN_CONTROL_025.B8;
    sbit  DIR_GPIO_PIN_CONTROL_025_bit at GPIO_PIN_CONTROL_025.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_025_bit at GPIO_PIN_CONTROL_025.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_025_bit at GPIO_PIN_CONTROL_025.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_025_bit at GPIO_PIN_CONTROL_025.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_025_bit at GPIO_PIN_CONTROL_025.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_025_bit at GPIO_PIN_CONTROL_025.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_025_bit at GPIO_PIN_CONTROL_025.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_026 absolute 0x40081058;
    sbit  PU_PD0_GPIO_PIN_CONTROL_026_bit at GPIO_PIN_CONTROL_026.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_026_bit at GPIO_PIN_CONTROL_026.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_026_bit at GPIO_PIN_CONTROL_026.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_026_bit at GPIO_PIN_CONTROL_026.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_026_bit at GPIO_PIN_CONTROL_026.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_026_bit at GPIO_PIN_CONTROL_026.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_026_bit at GPIO_PIN_CONTROL_026.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_026_bit at GPIO_PIN_CONTROL_026.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_026_bit at GPIO_PIN_CONTROL_026.B8;
    sbit  DIR_GPIO_PIN_CONTROL_026_bit at GPIO_PIN_CONTROL_026.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_026_bit at GPIO_PIN_CONTROL_026.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_026_bit at GPIO_PIN_CONTROL_026.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_026_bit at GPIO_PIN_CONTROL_026.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_026_bit at GPIO_PIN_CONTROL_026.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_026_bit at GPIO_PIN_CONTROL_026.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_026_bit at GPIO_PIN_CONTROL_026.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_027 absolute 0x4008105C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_027_bit at GPIO_PIN_CONTROL_027.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_027_bit at GPIO_PIN_CONTROL_027.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_027_bit at GPIO_PIN_CONTROL_027.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_027_bit at GPIO_PIN_CONTROL_027.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_027_bit at GPIO_PIN_CONTROL_027.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_027_bit at GPIO_PIN_CONTROL_027.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_027_bit at GPIO_PIN_CONTROL_027.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_027_bit at GPIO_PIN_CONTROL_027.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_027_bit at GPIO_PIN_CONTROL_027.B8;
    sbit  DIR_GPIO_PIN_CONTROL_027_bit at GPIO_PIN_CONTROL_027.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_027_bit at GPIO_PIN_CONTROL_027.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_027_bit at GPIO_PIN_CONTROL_027.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_027_bit at GPIO_PIN_CONTROL_027.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_027_bit at GPIO_PIN_CONTROL_027.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_027_bit at GPIO_PIN_CONTROL_027.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_027_bit at GPIO_PIN_CONTROL_027.B24;

sfr far unsigned long   volatile GPIO_PORT_030_037    absolute 0x40081060;
sfr far unsigned long   volatile GPIO_PIN_CONTROL_030 absolute 0x40081060;
    sbit  PU_PD0_GPIO_PIN_CONTROL_030_bit at GPIO_PIN_CONTROL_030.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_030_bit at GPIO_PIN_CONTROL_030.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_030_bit at GPIO_PIN_CONTROL_030.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_030_bit at GPIO_PIN_CONTROL_030.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_030_bit at GPIO_PIN_CONTROL_030.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_030_bit at GPIO_PIN_CONTROL_030.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_030_bit at GPIO_PIN_CONTROL_030.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_030_bit at GPIO_PIN_CONTROL_030.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_030_bit at GPIO_PIN_CONTROL_030.B8;
    sbit  DIR_GPIO_PIN_CONTROL_030_bit at GPIO_PIN_CONTROL_030.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_030_bit at GPIO_PIN_CONTROL_030.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_030_bit at GPIO_PIN_CONTROL_030.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_030_bit at GPIO_PIN_CONTROL_030.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_030_bit at GPIO_PIN_CONTROL_030.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_030_bit at GPIO_PIN_CONTROL_030.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_030_bit at GPIO_PIN_CONTROL_030.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_031 absolute 0x40081064;
    sbit  PU_PD0_GPIO_PIN_CONTROL_031_bit at GPIO_PIN_CONTROL_031.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_031_bit at GPIO_PIN_CONTROL_031.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_031_bit at GPIO_PIN_CONTROL_031.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_031_bit at GPIO_PIN_CONTROL_031.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_031_bit at GPIO_PIN_CONTROL_031.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_031_bit at GPIO_PIN_CONTROL_031.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_031_bit at GPIO_PIN_CONTROL_031.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_031_bit at GPIO_PIN_CONTROL_031.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_031_bit at GPIO_PIN_CONTROL_031.B8;
    sbit  DIR_GPIO_PIN_CONTROL_031_bit at GPIO_PIN_CONTROL_031.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_031_bit at GPIO_PIN_CONTROL_031.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_031_bit at GPIO_PIN_CONTROL_031.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_031_bit at GPIO_PIN_CONTROL_031.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_031_bit at GPIO_PIN_CONTROL_031.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_031_bit at GPIO_PIN_CONTROL_031.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_031_bit at GPIO_PIN_CONTROL_031.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_032 absolute 0x40081068;
    sbit  PU_PD0_GPIO_PIN_CONTROL_032_bit at GPIO_PIN_CONTROL_032.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_032_bit at GPIO_PIN_CONTROL_032.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_032_bit at GPIO_PIN_CONTROL_032.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_032_bit at GPIO_PIN_CONTROL_032.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_032_bit at GPIO_PIN_CONTROL_032.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_032_bit at GPIO_PIN_CONTROL_032.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_032_bit at GPIO_PIN_CONTROL_032.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_032_bit at GPIO_PIN_CONTROL_032.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_032_bit at GPIO_PIN_CONTROL_032.B8;
    sbit  DIR_GPIO_PIN_CONTROL_032_bit at GPIO_PIN_CONTROL_032.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_032_bit at GPIO_PIN_CONTROL_032.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_032_bit at GPIO_PIN_CONTROL_032.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_032_bit at GPIO_PIN_CONTROL_032.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_032_bit at GPIO_PIN_CONTROL_032.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_032_bit at GPIO_PIN_CONTROL_032.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_032_bit at GPIO_PIN_CONTROL_032.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_033 absolute 0x4008106C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_033_bit at GPIO_PIN_CONTROL_033.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_033_bit at GPIO_PIN_CONTROL_033.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_033_bit at GPIO_PIN_CONTROL_033.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_033_bit at GPIO_PIN_CONTROL_033.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_033_bit at GPIO_PIN_CONTROL_033.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_033_bit at GPIO_PIN_CONTROL_033.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_033_bit at GPIO_PIN_CONTROL_033.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_033_bit at GPIO_PIN_CONTROL_033.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_033_bit at GPIO_PIN_CONTROL_033.B8;
    sbit  DIR_GPIO_PIN_CONTROL_033_bit at GPIO_PIN_CONTROL_033.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_033_bit at GPIO_PIN_CONTROL_033.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_033_bit at GPIO_PIN_CONTROL_033.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_033_bit at GPIO_PIN_CONTROL_033.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_033_bit at GPIO_PIN_CONTROL_033.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_033_bit at GPIO_PIN_CONTROL_033.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_033_bit at GPIO_PIN_CONTROL_033.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_034 absolute 0x40081070;
    sbit  PU_PD0_GPIO_PIN_CONTROL_034_bit at GPIO_PIN_CONTROL_034.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_034_bit at GPIO_PIN_CONTROL_034.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_034_bit at GPIO_PIN_CONTROL_034.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_034_bit at GPIO_PIN_CONTROL_034.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_034_bit at GPIO_PIN_CONTROL_034.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_034_bit at GPIO_PIN_CONTROL_034.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_034_bit at GPIO_PIN_CONTROL_034.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_034_bit at GPIO_PIN_CONTROL_034.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_034_bit at GPIO_PIN_CONTROL_034.B8;
    sbit  DIR_GPIO_PIN_CONTROL_034_bit at GPIO_PIN_CONTROL_034.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_034_bit at GPIO_PIN_CONTROL_034.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_034_bit at GPIO_PIN_CONTROL_034.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_034_bit at GPIO_PIN_CONTROL_034.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_034_bit at GPIO_PIN_CONTROL_034.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_034_bit at GPIO_PIN_CONTROL_034.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_034_bit at GPIO_PIN_CONTROL_034.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_035 absolute 0x40081074;
    sbit  PU_PD0_GPIO_PIN_CONTROL_035_bit at GPIO_PIN_CONTROL_035.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_035_bit at GPIO_PIN_CONTROL_035.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_035_bit at GPIO_PIN_CONTROL_035.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_035_bit at GPIO_PIN_CONTROL_035.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_035_bit at GPIO_PIN_CONTROL_035.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_035_bit at GPIO_PIN_CONTROL_035.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_035_bit at GPIO_PIN_CONTROL_035.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_035_bit at GPIO_PIN_CONTROL_035.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_035_bit at GPIO_PIN_CONTROL_035.B8;
    sbit  DIR_GPIO_PIN_CONTROL_035_bit at GPIO_PIN_CONTROL_035.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_035_bit at GPIO_PIN_CONTROL_035.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_035_bit at GPIO_PIN_CONTROL_035.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_035_bit at GPIO_PIN_CONTROL_035.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_035_bit at GPIO_PIN_CONTROL_035.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_035_bit at GPIO_PIN_CONTROL_035.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_035_bit at GPIO_PIN_CONTROL_035.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_036 absolute 0x40081078;
    sbit  PU_PD0_GPIO_PIN_CONTROL_036_bit at GPIO_PIN_CONTROL_036.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_036_bit at GPIO_PIN_CONTROL_036.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_036_bit at GPIO_PIN_CONTROL_036.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_036_bit at GPIO_PIN_CONTROL_036.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_036_bit at GPIO_PIN_CONTROL_036.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_036_bit at GPIO_PIN_CONTROL_036.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_036_bit at GPIO_PIN_CONTROL_036.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_036_bit at GPIO_PIN_CONTROL_036.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_036_bit at GPIO_PIN_CONTROL_036.B8;
    sbit  DIR_GPIO_PIN_CONTROL_036_bit at GPIO_PIN_CONTROL_036.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_036_bit at GPIO_PIN_CONTROL_036.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_036_bit at GPIO_PIN_CONTROL_036.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_036_bit at GPIO_PIN_CONTROL_036.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_036_bit at GPIO_PIN_CONTROL_036.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_036_bit at GPIO_PIN_CONTROL_036.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_036_bit at GPIO_PIN_CONTROL_036.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_037 absolute 0x4008107C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_037_bit at GPIO_PIN_CONTROL_037.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_037_bit at GPIO_PIN_CONTROL_037.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_037_bit at GPIO_PIN_CONTROL_037.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_037_bit at GPIO_PIN_CONTROL_037.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_037_bit at GPIO_PIN_CONTROL_037.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_037_bit at GPIO_PIN_CONTROL_037.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_037_bit at GPIO_PIN_CONTROL_037.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_037_bit at GPIO_PIN_CONTROL_037.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_037_bit at GPIO_PIN_CONTROL_037.B8;
    sbit  DIR_GPIO_PIN_CONTROL_037_bit at GPIO_PIN_CONTROL_037.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_037_bit at GPIO_PIN_CONTROL_037.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_037_bit at GPIO_PIN_CONTROL_037.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_037_bit at GPIO_PIN_CONTROL_037.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_037_bit at GPIO_PIN_CONTROL_037.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_037_bit at GPIO_PIN_CONTROL_037.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_037_bit at GPIO_PIN_CONTROL_037.B24;

sfr far unsigned long   volatile GPIO_PORT_040_047    absolute 0x40081080;
sfr far unsigned long   volatile GPIO_PIN_CONTROL_040 absolute 0x40081080;
    sbit  PU_PD0_GPIO_PIN_CONTROL_040_bit at GPIO_PIN_CONTROL_040.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_040_bit at GPIO_PIN_CONTROL_040.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_040_bit at GPIO_PIN_CONTROL_040.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_040_bit at GPIO_PIN_CONTROL_040.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_040_bit at GPIO_PIN_CONTROL_040.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_040_bit at GPIO_PIN_CONTROL_040.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_040_bit at GPIO_PIN_CONTROL_040.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_040_bit at GPIO_PIN_CONTROL_040.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_040_bit at GPIO_PIN_CONTROL_040.B8;
    sbit  DIR_GPIO_PIN_CONTROL_040_bit at GPIO_PIN_CONTROL_040.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_040_bit at GPIO_PIN_CONTROL_040.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_040_bit at GPIO_PIN_CONTROL_040.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_040_bit at GPIO_PIN_CONTROL_040.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_040_bit at GPIO_PIN_CONTROL_040.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_040_bit at GPIO_PIN_CONTROL_040.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_040_bit at GPIO_PIN_CONTROL_040.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_041 absolute 0x40081084;
    sbit  PU_PD0_GPIO_PIN_CONTROL_041_bit at GPIO_PIN_CONTROL_041.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_041_bit at GPIO_PIN_CONTROL_041.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_041_bit at GPIO_PIN_CONTROL_041.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_041_bit at GPIO_PIN_CONTROL_041.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_041_bit at GPIO_PIN_CONTROL_041.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_041_bit at GPIO_PIN_CONTROL_041.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_041_bit at GPIO_PIN_CONTROL_041.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_041_bit at GPIO_PIN_CONTROL_041.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_041_bit at GPIO_PIN_CONTROL_041.B8;
    sbit  DIR_GPIO_PIN_CONTROL_041_bit at GPIO_PIN_CONTROL_041.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_041_bit at GPIO_PIN_CONTROL_041.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_041_bit at GPIO_PIN_CONTROL_041.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_041_bit at GPIO_PIN_CONTROL_041.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_041_bit at GPIO_PIN_CONTROL_041.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_041_bit at GPIO_PIN_CONTROL_041.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_041_bit at GPIO_PIN_CONTROL_041.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_042 absolute 0x40081088;
    sbit  PU_PD0_GPIO_PIN_CONTROL_042_bit at GPIO_PIN_CONTROL_042.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_042_bit at GPIO_PIN_CONTROL_042.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_042_bit at GPIO_PIN_CONTROL_042.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_042_bit at GPIO_PIN_CONTROL_042.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_042_bit at GPIO_PIN_CONTROL_042.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_042_bit at GPIO_PIN_CONTROL_042.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_042_bit at GPIO_PIN_CONTROL_042.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_042_bit at GPIO_PIN_CONTROL_042.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_042_bit at GPIO_PIN_CONTROL_042.B8;
    sbit  DIR_GPIO_PIN_CONTROL_042_bit at GPIO_PIN_CONTROL_042.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_042_bit at GPIO_PIN_CONTROL_042.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_042_bit at GPIO_PIN_CONTROL_042.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_042_bit at GPIO_PIN_CONTROL_042.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_042_bit at GPIO_PIN_CONTROL_042.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_042_bit at GPIO_PIN_CONTROL_042.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_042_bit at GPIO_PIN_CONTROL_042.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_043 absolute 0x4008108C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_043_bit at GPIO_PIN_CONTROL_043.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_043_bit at GPIO_PIN_CONTROL_043.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_043_bit at GPIO_PIN_CONTROL_043.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_043_bit at GPIO_PIN_CONTROL_043.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_043_bit at GPIO_PIN_CONTROL_043.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_043_bit at GPIO_PIN_CONTROL_043.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_043_bit at GPIO_PIN_CONTROL_043.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_043_bit at GPIO_PIN_CONTROL_043.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_043_bit at GPIO_PIN_CONTROL_043.B8;
    sbit  DIR_GPIO_PIN_CONTROL_043_bit at GPIO_PIN_CONTROL_043.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_043_bit at GPIO_PIN_CONTROL_043.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_043_bit at GPIO_PIN_CONTROL_043.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_043_bit at GPIO_PIN_CONTROL_043.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_043_bit at GPIO_PIN_CONTROL_043.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_043_bit at GPIO_PIN_CONTROL_043.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_043_bit at GPIO_PIN_CONTROL_043.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_044 absolute 0x40081090;
    sbit  PU_PD0_GPIO_PIN_CONTROL_044_bit at GPIO_PIN_CONTROL_044.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_044_bit at GPIO_PIN_CONTROL_044.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_044_bit at GPIO_PIN_CONTROL_044.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_044_bit at GPIO_PIN_CONTROL_044.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_044_bit at GPIO_PIN_CONTROL_044.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_044_bit at GPIO_PIN_CONTROL_044.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_044_bit at GPIO_PIN_CONTROL_044.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_044_bit at GPIO_PIN_CONTROL_044.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_044_bit at GPIO_PIN_CONTROL_044.B8;
    sbit  DIR_GPIO_PIN_CONTROL_044_bit at GPIO_PIN_CONTROL_044.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_044_bit at GPIO_PIN_CONTROL_044.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_044_bit at GPIO_PIN_CONTROL_044.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_044_bit at GPIO_PIN_CONTROL_044.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_044_bit at GPIO_PIN_CONTROL_044.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_044_bit at GPIO_PIN_CONTROL_044.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_044_bit at GPIO_PIN_CONTROL_044.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_045 absolute 0x40081094;
    sbit  PU_PD0_GPIO_PIN_CONTROL_045_bit at GPIO_PIN_CONTROL_045.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_045_bit at GPIO_PIN_CONTROL_045.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_045_bit at GPIO_PIN_CONTROL_045.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_045_bit at GPIO_PIN_CONTROL_045.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_045_bit at GPIO_PIN_CONTROL_045.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_045_bit at GPIO_PIN_CONTROL_045.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_045_bit at GPIO_PIN_CONTROL_045.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_045_bit at GPIO_PIN_CONTROL_045.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_045_bit at GPIO_PIN_CONTROL_045.B8;
    sbit  DIR_GPIO_PIN_CONTROL_045_bit at GPIO_PIN_CONTROL_045.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_045_bit at GPIO_PIN_CONTROL_045.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_045_bit at GPIO_PIN_CONTROL_045.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_045_bit at GPIO_PIN_CONTROL_045.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_045_bit at GPIO_PIN_CONTROL_045.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_045_bit at GPIO_PIN_CONTROL_045.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_045_bit at GPIO_PIN_CONTROL_045.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_046 absolute 0x40081098;
    sbit  PU_PD0_GPIO_PIN_CONTROL_046_bit at GPIO_PIN_CONTROL_046.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_046_bit at GPIO_PIN_CONTROL_046.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_046_bit at GPIO_PIN_CONTROL_046.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_046_bit at GPIO_PIN_CONTROL_046.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_046_bit at GPIO_PIN_CONTROL_046.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_046_bit at GPIO_PIN_CONTROL_046.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_046_bit at GPIO_PIN_CONTROL_046.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_046_bit at GPIO_PIN_CONTROL_046.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_046_bit at GPIO_PIN_CONTROL_046.B8;
    sbit  DIR_GPIO_PIN_CONTROL_046_bit at GPIO_PIN_CONTROL_046.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_046_bit at GPIO_PIN_CONTROL_046.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_046_bit at GPIO_PIN_CONTROL_046.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_046_bit at GPIO_PIN_CONTROL_046.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_046_bit at GPIO_PIN_CONTROL_046.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_046_bit at GPIO_PIN_CONTROL_046.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_046_bit at GPIO_PIN_CONTROL_046.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_047 absolute 0x4008109C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_047_bit at GPIO_PIN_CONTROL_047.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_047_bit at GPIO_PIN_CONTROL_047.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_047_bit at GPIO_PIN_CONTROL_047.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_047_bit at GPIO_PIN_CONTROL_047.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_047_bit at GPIO_PIN_CONTROL_047.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_047_bit at GPIO_PIN_CONTROL_047.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_047_bit at GPIO_PIN_CONTROL_047.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_047_bit at GPIO_PIN_CONTROL_047.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_047_bit at GPIO_PIN_CONTROL_047.B8;
    sbit  DIR_GPIO_PIN_CONTROL_047_bit at GPIO_PIN_CONTROL_047.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_047_bit at GPIO_PIN_CONTROL_047.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_047_bit at GPIO_PIN_CONTROL_047.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_047_bit at GPIO_PIN_CONTROL_047.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_047_bit at GPIO_PIN_CONTROL_047.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_047_bit at GPIO_PIN_CONTROL_047.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_047_bit at GPIO_PIN_CONTROL_047.B24;

sfr far unsigned long   volatile GPIO_PORT_050_057    absolute 0x400810A0;
sfr far unsigned long   volatile GPIO_PIN_CONTROL_050 absolute 0x400810A0;
    sbit  PU_PD0_GPIO_PIN_CONTROL_050_bit at GPIO_PIN_CONTROL_050.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_050_bit at GPIO_PIN_CONTROL_050.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_050_bit at GPIO_PIN_CONTROL_050.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_050_bit at GPIO_PIN_CONTROL_050.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_050_bit at GPIO_PIN_CONTROL_050.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_050_bit at GPIO_PIN_CONTROL_050.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_050_bit at GPIO_PIN_CONTROL_050.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_050_bit at GPIO_PIN_CONTROL_050.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_050_bit at GPIO_PIN_CONTROL_050.B8;
    sbit  DIR_GPIO_PIN_CONTROL_050_bit at GPIO_PIN_CONTROL_050.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_050_bit at GPIO_PIN_CONTROL_050.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_050_bit at GPIO_PIN_CONTROL_050.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_050_bit at GPIO_PIN_CONTROL_050.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_050_bit at GPIO_PIN_CONTROL_050.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_050_bit at GPIO_PIN_CONTROL_050.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_050_bit at GPIO_PIN_CONTROL_050.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_051 absolute 0x400810A4;
    sbit  PU_PD0_GPIO_PIN_CONTROL_051_bit at GPIO_PIN_CONTROL_051.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_051_bit at GPIO_PIN_CONTROL_051.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_051_bit at GPIO_PIN_CONTROL_051.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_051_bit at GPIO_PIN_CONTROL_051.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_051_bit at GPIO_PIN_CONTROL_051.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_051_bit at GPIO_PIN_CONTROL_051.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_051_bit at GPIO_PIN_CONTROL_051.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_051_bit at GPIO_PIN_CONTROL_051.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_051_bit at GPIO_PIN_CONTROL_051.B8;
    sbit  DIR_GPIO_PIN_CONTROL_051_bit at GPIO_PIN_CONTROL_051.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_051_bit at GPIO_PIN_CONTROL_051.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_051_bit at GPIO_PIN_CONTROL_051.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_051_bit at GPIO_PIN_CONTROL_051.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_051_bit at GPIO_PIN_CONTROL_051.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_051_bit at GPIO_PIN_CONTROL_051.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_051_bit at GPIO_PIN_CONTROL_051.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_052 absolute 0x400810A8;
    sbit  PU_PD0_GPIO_PIN_CONTROL_052_bit at GPIO_PIN_CONTROL_052.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_052_bit at GPIO_PIN_CONTROL_052.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_052_bit at GPIO_PIN_CONTROL_052.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_052_bit at GPIO_PIN_CONTROL_052.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_052_bit at GPIO_PIN_CONTROL_052.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_052_bit at GPIO_PIN_CONTROL_052.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_052_bit at GPIO_PIN_CONTROL_052.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_052_bit at GPIO_PIN_CONTROL_052.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_052_bit at GPIO_PIN_CONTROL_052.B8;
    sbit  DIR_GPIO_PIN_CONTROL_052_bit at GPIO_PIN_CONTROL_052.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_052_bit at GPIO_PIN_CONTROL_052.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_052_bit at GPIO_PIN_CONTROL_052.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_052_bit at GPIO_PIN_CONTROL_052.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_052_bit at GPIO_PIN_CONTROL_052.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_052_bit at GPIO_PIN_CONTROL_052.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_052_bit at GPIO_PIN_CONTROL_052.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_053 absolute 0x400810AC;
    sbit  PU_PD0_GPIO_PIN_CONTROL_053_bit at GPIO_PIN_CONTROL_053.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_053_bit at GPIO_PIN_CONTROL_053.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_053_bit at GPIO_PIN_CONTROL_053.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_053_bit at GPIO_PIN_CONTROL_053.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_053_bit at GPIO_PIN_CONTROL_053.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_053_bit at GPIO_PIN_CONTROL_053.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_053_bit at GPIO_PIN_CONTROL_053.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_053_bit at GPIO_PIN_CONTROL_053.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_053_bit at GPIO_PIN_CONTROL_053.B8;
    sbit  DIR_GPIO_PIN_CONTROL_053_bit at GPIO_PIN_CONTROL_053.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_053_bit at GPIO_PIN_CONTROL_053.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_053_bit at GPIO_PIN_CONTROL_053.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_053_bit at GPIO_PIN_CONTROL_053.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_053_bit at GPIO_PIN_CONTROL_053.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_053_bit at GPIO_PIN_CONTROL_053.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_053_bit at GPIO_PIN_CONTROL_053.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_054 absolute 0x400810B0;
    sbit  PU_PD0_GPIO_PIN_CONTROL_054_bit at GPIO_PIN_CONTROL_054.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_054_bit at GPIO_PIN_CONTROL_054.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_054_bit at GPIO_PIN_CONTROL_054.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_054_bit at GPIO_PIN_CONTROL_054.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_054_bit at GPIO_PIN_CONTROL_054.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_054_bit at GPIO_PIN_CONTROL_054.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_054_bit at GPIO_PIN_CONTROL_054.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_054_bit at GPIO_PIN_CONTROL_054.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_054_bit at GPIO_PIN_CONTROL_054.B8;
    sbit  DIR_GPIO_PIN_CONTROL_054_bit at GPIO_PIN_CONTROL_054.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_054_bit at GPIO_PIN_CONTROL_054.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_054_bit at GPIO_PIN_CONTROL_054.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_054_bit at GPIO_PIN_CONTROL_054.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_054_bit at GPIO_PIN_CONTROL_054.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_054_bit at GPIO_PIN_CONTROL_054.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_054_bit at GPIO_PIN_CONTROL_054.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_055 absolute 0x400810B4;
    sbit  PU_PD0_GPIO_PIN_CONTROL_055_bit at GPIO_PIN_CONTROL_055.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_055_bit at GPIO_PIN_CONTROL_055.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_055_bit at GPIO_PIN_CONTROL_055.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_055_bit at GPIO_PIN_CONTROL_055.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_055_bit at GPIO_PIN_CONTROL_055.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_055_bit at GPIO_PIN_CONTROL_055.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_055_bit at GPIO_PIN_CONTROL_055.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_055_bit at GPIO_PIN_CONTROL_055.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_055_bit at GPIO_PIN_CONTROL_055.B8;
    sbit  DIR_GPIO_PIN_CONTROL_055_bit at GPIO_PIN_CONTROL_055.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_055_bit at GPIO_PIN_CONTROL_055.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_055_bit at GPIO_PIN_CONTROL_055.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_055_bit at GPIO_PIN_CONTROL_055.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_055_bit at GPIO_PIN_CONTROL_055.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_055_bit at GPIO_PIN_CONTROL_055.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_055_bit at GPIO_PIN_CONTROL_055.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_056 absolute 0x400810B8;
    sbit  PU_PD0_GPIO_PIN_CONTROL_056_bit at GPIO_PIN_CONTROL_056.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_056_bit at GPIO_PIN_CONTROL_056.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_056_bit at GPIO_PIN_CONTROL_056.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_056_bit at GPIO_PIN_CONTROL_056.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_056_bit at GPIO_PIN_CONTROL_056.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_056_bit at GPIO_PIN_CONTROL_056.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_056_bit at GPIO_PIN_CONTROL_056.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_056_bit at GPIO_PIN_CONTROL_056.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_056_bit at GPIO_PIN_CONTROL_056.B8;
    sbit  DIR_GPIO_PIN_CONTROL_056_bit at GPIO_PIN_CONTROL_056.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_056_bit at GPIO_PIN_CONTROL_056.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_056_bit at GPIO_PIN_CONTROL_056.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_056_bit at GPIO_PIN_CONTROL_056.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_056_bit at GPIO_PIN_CONTROL_056.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_056_bit at GPIO_PIN_CONTROL_056.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_056_bit at GPIO_PIN_CONTROL_056.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_057 absolute 0x400810BC;
    sbit  PU_PD0_GPIO_PIN_CONTROL_057_bit at GPIO_PIN_CONTROL_057.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_057_bit at GPIO_PIN_CONTROL_057.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_057_bit at GPIO_PIN_CONTROL_057.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_057_bit at GPIO_PIN_CONTROL_057.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_057_bit at GPIO_PIN_CONTROL_057.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_057_bit at GPIO_PIN_CONTROL_057.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_057_bit at GPIO_PIN_CONTROL_057.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_057_bit at GPIO_PIN_CONTROL_057.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_057_bit at GPIO_PIN_CONTROL_057.B8;
    sbit  DIR_GPIO_PIN_CONTROL_057_bit at GPIO_PIN_CONTROL_057.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_057_bit at GPIO_PIN_CONTROL_057.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_057_bit at GPIO_PIN_CONTROL_057.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_057_bit at GPIO_PIN_CONTROL_057.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_057_bit at GPIO_PIN_CONTROL_057.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_057_bit at GPIO_PIN_CONTROL_057.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_057_bit at GPIO_PIN_CONTROL_057.B24;

sfr far unsigned long   volatile GPIO_PORT_060_067    absolute 0x400810C0;
sfr far unsigned long   volatile GPIO_PIN_CONTROL_060 absolute 0x400810C0;
    sbit  PU_PD0_GPIO_PIN_CONTROL_060_bit at GPIO_PIN_CONTROL_060.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_060_bit at GPIO_PIN_CONTROL_060.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_060_bit at GPIO_PIN_CONTROL_060.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_060_bit at GPIO_PIN_CONTROL_060.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_060_bit at GPIO_PIN_CONTROL_060.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_060_bit at GPIO_PIN_CONTROL_060.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_060_bit at GPIO_PIN_CONTROL_060.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_060_bit at GPIO_PIN_CONTROL_060.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_060_bit at GPIO_PIN_CONTROL_060.B8;
    sbit  DIR_GPIO_PIN_CONTROL_060_bit at GPIO_PIN_CONTROL_060.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_060_bit at GPIO_PIN_CONTROL_060.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_060_bit at GPIO_PIN_CONTROL_060.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_060_bit at GPIO_PIN_CONTROL_060.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_060_bit at GPIO_PIN_CONTROL_060.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_060_bit at GPIO_PIN_CONTROL_060.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_060_bit at GPIO_PIN_CONTROL_060.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_061 absolute 0x400810C4;
    sbit  PU_PD0_GPIO_PIN_CONTROL_061_bit at GPIO_PIN_CONTROL_061.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_061_bit at GPIO_PIN_CONTROL_061.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_061_bit at GPIO_PIN_CONTROL_061.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_061_bit at GPIO_PIN_CONTROL_061.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_061_bit at GPIO_PIN_CONTROL_061.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_061_bit at GPIO_PIN_CONTROL_061.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_061_bit at GPIO_PIN_CONTROL_061.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_061_bit at GPIO_PIN_CONTROL_061.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_061_bit at GPIO_PIN_CONTROL_061.B8;
    sbit  DIR_GPIO_PIN_CONTROL_061_bit at GPIO_PIN_CONTROL_061.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_061_bit at GPIO_PIN_CONTROL_061.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_061_bit at GPIO_PIN_CONTROL_061.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_061_bit at GPIO_PIN_CONTROL_061.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_061_bit at GPIO_PIN_CONTROL_061.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_061_bit at GPIO_PIN_CONTROL_061.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_061_bit at GPIO_PIN_CONTROL_061.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_062 absolute 0x400810C8;
    sbit  PU_PD0_GPIO_PIN_CONTROL_062_bit at GPIO_PIN_CONTROL_062.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_062_bit at GPIO_PIN_CONTROL_062.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_062_bit at GPIO_PIN_CONTROL_062.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_062_bit at GPIO_PIN_CONTROL_062.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_062_bit at GPIO_PIN_CONTROL_062.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_062_bit at GPIO_PIN_CONTROL_062.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_062_bit at GPIO_PIN_CONTROL_062.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_062_bit at GPIO_PIN_CONTROL_062.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_062_bit at GPIO_PIN_CONTROL_062.B8;
    sbit  DIR_GPIO_PIN_CONTROL_062_bit at GPIO_PIN_CONTROL_062.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_062_bit at GPIO_PIN_CONTROL_062.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_062_bit at GPIO_PIN_CONTROL_062.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_062_bit at GPIO_PIN_CONTROL_062.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_062_bit at GPIO_PIN_CONTROL_062.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_062_bit at GPIO_PIN_CONTROL_062.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_062_bit at GPIO_PIN_CONTROL_062.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_063 absolute 0x400810CC;
    sbit  PU_PD0_GPIO_PIN_CONTROL_063_bit at GPIO_PIN_CONTROL_063.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_063_bit at GPIO_PIN_CONTROL_063.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_063_bit at GPIO_PIN_CONTROL_063.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_063_bit at GPIO_PIN_CONTROL_063.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_063_bit at GPIO_PIN_CONTROL_063.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_063_bit at GPIO_PIN_CONTROL_063.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_063_bit at GPIO_PIN_CONTROL_063.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_063_bit at GPIO_PIN_CONTROL_063.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_063_bit at GPIO_PIN_CONTROL_063.B8;
    sbit  DIR_GPIO_PIN_CONTROL_063_bit at GPIO_PIN_CONTROL_063.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_063_bit at GPIO_PIN_CONTROL_063.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_063_bit at GPIO_PIN_CONTROL_063.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_063_bit at GPIO_PIN_CONTROL_063.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_063_bit at GPIO_PIN_CONTROL_063.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_063_bit at GPIO_PIN_CONTROL_063.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_063_bit at GPIO_PIN_CONTROL_063.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_064 absolute 0x400810D0;
    sbit  PU_PD0_GPIO_PIN_CONTROL_064_bit at GPIO_PIN_CONTROL_064.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_064_bit at GPIO_PIN_CONTROL_064.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_064_bit at GPIO_PIN_CONTROL_064.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_064_bit at GPIO_PIN_CONTROL_064.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_064_bit at GPIO_PIN_CONTROL_064.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_064_bit at GPIO_PIN_CONTROL_064.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_064_bit at GPIO_PIN_CONTROL_064.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_064_bit at GPIO_PIN_CONTROL_064.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_064_bit at GPIO_PIN_CONTROL_064.B8;
    sbit  DIR_GPIO_PIN_CONTROL_064_bit at GPIO_PIN_CONTROL_064.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_064_bit at GPIO_PIN_CONTROL_064.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_064_bit at GPIO_PIN_CONTROL_064.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_064_bit at GPIO_PIN_CONTROL_064.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_064_bit at GPIO_PIN_CONTROL_064.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_064_bit at GPIO_PIN_CONTROL_064.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_064_bit at GPIO_PIN_CONTROL_064.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_065 absolute 0x400810D4;
    sbit  PU_PD0_GPIO_PIN_CONTROL_065_bit at GPIO_PIN_CONTROL_065.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_065_bit at GPIO_PIN_CONTROL_065.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_065_bit at GPIO_PIN_CONTROL_065.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_065_bit at GPIO_PIN_CONTROL_065.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_065_bit at GPIO_PIN_CONTROL_065.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_065_bit at GPIO_PIN_CONTROL_065.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_065_bit at GPIO_PIN_CONTROL_065.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_065_bit at GPIO_PIN_CONTROL_065.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_065_bit at GPIO_PIN_CONTROL_065.B8;
    sbit  DIR_GPIO_PIN_CONTROL_065_bit at GPIO_PIN_CONTROL_065.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_065_bit at GPIO_PIN_CONTROL_065.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_065_bit at GPIO_PIN_CONTROL_065.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_065_bit at GPIO_PIN_CONTROL_065.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_065_bit at GPIO_PIN_CONTROL_065.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_065_bit at GPIO_PIN_CONTROL_065.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_065_bit at GPIO_PIN_CONTROL_065.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_066 absolute 0x400810D8;
    sbit  PU_PD0_GPIO_PIN_CONTROL_066_bit at GPIO_PIN_CONTROL_066.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_066_bit at GPIO_PIN_CONTROL_066.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_066_bit at GPIO_PIN_CONTROL_066.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_066_bit at GPIO_PIN_CONTROL_066.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_066_bit at GPIO_PIN_CONTROL_066.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_066_bit at GPIO_PIN_CONTROL_066.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_066_bit at GPIO_PIN_CONTROL_066.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_066_bit at GPIO_PIN_CONTROL_066.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_066_bit at GPIO_PIN_CONTROL_066.B8;
    sbit  DIR_GPIO_PIN_CONTROL_066_bit at GPIO_PIN_CONTROL_066.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_066_bit at GPIO_PIN_CONTROL_066.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_066_bit at GPIO_PIN_CONTROL_066.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_066_bit at GPIO_PIN_CONTROL_066.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_066_bit at GPIO_PIN_CONTROL_066.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_066_bit at GPIO_PIN_CONTROL_066.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_066_bit at GPIO_PIN_CONTROL_066.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_067 absolute 0x400810DC;
    sbit  PU_PD0_GPIO_PIN_CONTROL_067_bit at GPIO_PIN_CONTROL_067.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_067_bit at GPIO_PIN_CONTROL_067.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_067_bit at GPIO_PIN_CONTROL_067.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_067_bit at GPIO_PIN_CONTROL_067.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_067_bit at GPIO_PIN_CONTROL_067.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_067_bit at GPIO_PIN_CONTROL_067.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_067_bit at GPIO_PIN_CONTROL_067.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_067_bit at GPIO_PIN_CONTROL_067.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_067_bit at GPIO_PIN_CONTROL_067.B8;
    sbit  DIR_GPIO_PIN_CONTROL_067_bit at GPIO_PIN_CONTROL_067.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_067_bit at GPIO_PIN_CONTROL_067.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_067_bit at GPIO_PIN_CONTROL_067.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_067_bit at GPIO_PIN_CONTROL_067.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_067_bit at GPIO_PIN_CONTROL_067.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_067_bit at GPIO_PIN_CONTROL_067.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_067_bit at GPIO_PIN_CONTROL_067.B24;

sfr far unsigned long   volatile GPIO_PORT_100_107    absolute 0x40081100;
sfr far unsigned long   volatile GPIO_PIN_CONTROL_100 absolute 0x40081100;
    sbit  PU_PD0_GPIO_PIN_CONTROL_100_bit at GPIO_PIN_CONTROL_100.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_100_bit at GPIO_PIN_CONTROL_100.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_100_bit at GPIO_PIN_CONTROL_100.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_100_bit at GPIO_PIN_CONTROL_100.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_100_bit at GPIO_PIN_CONTROL_100.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_100_bit at GPIO_PIN_CONTROL_100.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_100_bit at GPIO_PIN_CONTROL_100.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_100_bit at GPIO_PIN_CONTROL_100.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_100_bit at GPIO_PIN_CONTROL_100.B8;
    sbit  DIR_GPIO_PIN_CONTROL_100_bit at GPIO_PIN_CONTROL_100.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_100_bit at GPIO_PIN_CONTROL_100.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_100_bit at GPIO_PIN_CONTROL_100.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_100_bit at GPIO_PIN_CONTROL_100.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_100_bit at GPIO_PIN_CONTROL_100.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_100_bit at GPIO_PIN_CONTROL_100.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_100_bit at GPIO_PIN_CONTROL_100.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_101 absolute 0x40081104;
    sbit  PU_PD0_GPIO_PIN_CONTROL_101_bit at GPIO_PIN_CONTROL_101.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_101_bit at GPIO_PIN_CONTROL_101.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_101_bit at GPIO_PIN_CONTROL_101.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_101_bit at GPIO_PIN_CONTROL_101.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_101_bit at GPIO_PIN_CONTROL_101.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_101_bit at GPIO_PIN_CONTROL_101.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_101_bit at GPIO_PIN_CONTROL_101.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_101_bit at GPIO_PIN_CONTROL_101.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_101_bit at GPIO_PIN_CONTROL_101.B8;
    sbit  DIR_GPIO_PIN_CONTROL_101_bit at GPIO_PIN_CONTROL_101.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_101_bit at GPIO_PIN_CONTROL_101.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_101_bit at GPIO_PIN_CONTROL_101.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_101_bit at GPIO_PIN_CONTROL_101.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_101_bit at GPIO_PIN_CONTROL_101.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_101_bit at GPIO_PIN_CONTROL_101.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_101_bit at GPIO_PIN_CONTROL_101.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_102 absolute 0x40081108;
    sbit  PU_PD0_GPIO_PIN_CONTROL_102_bit at GPIO_PIN_CONTROL_102.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_102_bit at GPIO_PIN_CONTROL_102.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_102_bit at GPIO_PIN_CONTROL_102.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_102_bit at GPIO_PIN_CONTROL_102.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_102_bit at GPIO_PIN_CONTROL_102.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_102_bit at GPIO_PIN_CONTROL_102.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_102_bit at GPIO_PIN_CONTROL_102.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_102_bit at GPIO_PIN_CONTROL_102.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_102_bit at GPIO_PIN_CONTROL_102.B8;
    sbit  DIR_GPIO_PIN_CONTROL_102_bit at GPIO_PIN_CONTROL_102.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_102_bit at GPIO_PIN_CONTROL_102.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_102_bit at GPIO_PIN_CONTROL_102.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_102_bit at GPIO_PIN_CONTROL_102.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_102_bit at GPIO_PIN_CONTROL_102.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_102_bit at GPIO_PIN_CONTROL_102.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_102_bit at GPIO_PIN_CONTROL_102.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_103 absolute 0x4008110C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_103_bit at GPIO_PIN_CONTROL_103.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_103_bit at GPIO_PIN_CONTROL_103.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_103_bit at GPIO_PIN_CONTROL_103.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_103_bit at GPIO_PIN_CONTROL_103.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_103_bit at GPIO_PIN_CONTROL_103.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_103_bit at GPIO_PIN_CONTROL_103.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_103_bit at GPIO_PIN_CONTROL_103.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_103_bit at GPIO_PIN_CONTROL_103.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_103_bit at GPIO_PIN_CONTROL_103.B8;
    sbit  DIR_GPIO_PIN_CONTROL_103_bit at GPIO_PIN_CONTROL_103.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_103_bit at GPIO_PIN_CONTROL_103.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_103_bit at GPIO_PIN_CONTROL_103.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_103_bit at GPIO_PIN_CONTROL_103.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_103_bit at GPIO_PIN_CONTROL_103.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_103_bit at GPIO_PIN_CONTROL_103.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_103_bit at GPIO_PIN_CONTROL_103.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_104 absolute 0x40081110;
    sbit  PU_PD0_GPIO_PIN_CONTROL_104_bit at GPIO_PIN_CONTROL_104.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_104_bit at GPIO_PIN_CONTROL_104.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_104_bit at GPIO_PIN_CONTROL_104.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_104_bit at GPIO_PIN_CONTROL_104.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_104_bit at GPIO_PIN_CONTROL_104.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_104_bit at GPIO_PIN_CONTROL_104.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_104_bit at GPIO_PIN_CONTROL_104.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_104_bit at GPIO_PIN_CONTROL_104.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_104_bit at GPIO_PIN_CONTROL_104.B8;
    sbit  DIR_GPIO_PIN_CONTROL_104_bit at GPIO_PIN_CONTROL_104.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_104_bit at GPIO_PIN_CONTROL_104.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_104_bit at GPIO_PIN_CONTROL_104.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_104_bit at GPIO_PIN_CONTROL_104.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_104_bit at GPIO_PIN_CONTROL_104.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_104_bit at GPIO_PIN_CONTROL_104.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_104_bit at GPIO_PIN_CONTROL_104.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_105 absolute 0x40081114;
    sbit  PU_PD0_GPIO_PIN_CONTROL_105_bit at GPIO_PIN_CONTROL_105.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_105_bit at GPIO_PIN_CONTROL_105.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_105_bit at GPIO_PIN_CONTROL_105.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_105_bit at GPIO_PIN_CONTROL_105.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_105_bit at GPIO_PIN_CONTROL_105.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_105_bit at GPIO_PIN_CONTROL_105.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_105_bit at GPIO_PIN_CONTROL_105.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_105_bit at GPIO_PIN_CONTROL_105.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_105_bit at GPIO_PIN_CONTROL_105.B8;
    sbit  DIR_GPIO_PIN_CONTROL_105_bit at GPIO_PIN_CONTROL_105.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_105_bit at GPIO_PIN_CONTROL_105.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_105_bit at GPIO_PIN_CONTROL_105.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_105_bit at GPIO_PIN_CONTROL_105.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_105_bit at GPIO_PIN_CONTROL_105.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_105_bit at GPIO_PIN_CONTROL_105.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_105_bit at GPIO_PIN_CONTROL_105.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_106 absolute 0x40081118;
    sbit  PU_PD0_GPIO_PIN_CONTROL_106_bit at GPIO_PIN_CONTROL_106.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_106_bit at GPIO_PIN_CONTROL_106.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_106_bit at GPIO_PIN_CONTROL_106.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_106_bit at GPIO_PIN_CONTROL_106.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_106_bit at GPIO_PIN_CONTROL_106.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_106_bit at GPIO_PIN_CONTROL_106.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_106_bit at GPIO_PIN_CONTROL_106.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_106_bit at GPIO_PIN_CONTROL_106.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_106_bit at GPIO_PIN_CONTROL_106.B8;
    sbit  DIR_GPIO_PIN_CONTROL_106_bit at GPIO_PIN_CONTROL_106.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_106_bit at GPIO_PIN_CONTROL_106.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_106_bit at GPIO_PIN_CONTROL_106.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_106_bit at GPIO_PIN_CONTROL_106.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_106_bit at GPIO_PIN_CONTROL_106.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_106_bit at GPIO_PIN_CONTROL_106.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_106_bit at GPIO_PIN_CONTROL_106.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_107 absolute 0x4008111C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_107_bit at GPIO_PIN_CONTROL_107.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_107_bit at GPIO_PIN_CONTROL_107.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_107_bit at GPIO_PIN_CONTROL_107.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_107_bit at GPIO_PIN_CONTROL_107.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_107_bit at GPIO_PIN_CONTROL_107.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_107_bit at GPIO_PIN_CONTROL_107.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_107_bit at GPIO_PIN_CONTROL_107.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_107_bit at GPIO_PIN_CONTROL_107.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_107_bit at GPIO_PIN_CONTROL_107.B8;
    sbit  DIR_GPIO_PIN_CONTROL_107_bit at GPIO_PIN_CONTROL_107.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_107_bit at GPIO_PIN_CONTROL_107.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_107_bit at GPIO_PIN_CONTROL_107.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_107_bit at GPIO_PIN_CONTROL_107.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_107_bit at GPIO_PIN_CONTROL_107.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_107_bit at GPIO_PIN_CONTROL_107.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_107_bit at GPIO_PIN_CONTROL_107.B24;

sfr far unsigned long   volatile GPIO_PORT_110_117    absolute 0x40081120;
sfr far unsigned long   volatile GPIO_PIN_CONTROL_110 absolute 0x40081120;
    sbit  PU_PD0_GPIO_PIN_CONTROL_110_bit at GPIO_PIN_CONTROL_110.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_110_bit at GPIO_PIN_CONTROL_110.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_110_bit at GPIO_PIN_CONTROL_110.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_110_bit at GPIO_PIN_CONTROL_110.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_110_bit at GPIO_PIN_CONTROL_110.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_110_bit at GPIO_PIN_CONTROL_110.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_110_bit at GPIO_PIN_CONTROL_110.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_110_bit at GPIO_PIN_CONTROL_110.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_110_bit at GPIO_PIN_CONTROL_110.B8;
    sbit  DIR_GPIO_PIN_CONTROL_110_bit at GPIO_PIN_CONTROL_110.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_110_bit at GPIO_PIN_CONTROL_110.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_110_bit at GPIO_PIN_CONTROL_110.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_110_bit at GPIO_PIN_CONTROL_110.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_110_bit at GPIO_PIN_CONTROL_110.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_110_bit at GPIO_PIN_CONTROL_110.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_110_bit at GPIO_PIN_CONTROL_110.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_111 absolute 0x40081124;
    sbit  PU_PD0_GPIO_PIN_CONTROL_111_bit at GPIO_PIN_CONTROL_111.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_111_bit at GPIO_PIN_CONTROL_111.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_111_bit at GPIO_PIN_CONTROL_111.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_111_bit at GPIO_PIN_CONTROL_111.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_111_bit at GPIO_PIN_CONTROL_111.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_111_bit at GPIO_PIN_CONTROL_111.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_111_bit at GPIO_PIN_CONTROL_111.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_111_bit at GPIO_PIN_CONTROL_111.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_111_bit at GPIO_PIN_CONTROL_111.B8;
    sbit  DIR_GPIO_PIN_CONTROL_111_bit at GPIO_PIN_CONTROL_111.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_111_bit at GPIO_PIN_CONTROL_111.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_111_bit at GPIO_PIN_CONTROL_111.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_111_bit at GPIO_PIN_CONTROL_111.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_111_bit at GPIO_PIN_CONTROL_111.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_111_bit at GPIO_PIN_CONTROL_111.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_111_bit at GPIO_PIN_CONTROL_111.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_112 absolute 0x40081128;
    sbit  PU_PD0_GPIO_PIN_CONTROL_112_bit at GPIO_PIN_CONTROL_112.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_112_bit at GPIO_PIN_CONTROL_112.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_112_bit at GPIO_PIN_CONTROL_112.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_112_bit at GPIO_PIN_CONTROL_112.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_112_bit at GPIO_PIN_CONTROL_112.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_112_bit at GPIO_PIN_CONTROL_112.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_112_bit at GPIO_PIN_CONTROL_112.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_112_bit at GPIO_PIN_CONTROL_112.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_112_bit at GPIO_PIN_CONTROL_112.B8;
    sbit  DIR_GPIO_PIN_CONTROL_112_bit at GPIO_PIN_CONTROL_112.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_112_bit at GPIO_PIN_CONTROL_112.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_112_bit at GPIO_PIN_CONTROL_112.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_112_bit at GPIO_PIN_CONTROL_112.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_112_bit at GPIO_PIN_CONTROL_112.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_112_bit at GPIO_PIN_CONTROL_112.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_112_bit at GPIO_PIN_CONTROL_112.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_113 absolute 0x4008112C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_113_bit at GPIO_PIN_CONTROL_113.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_113_bit at GPIO_PIN_CONTROL_113.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_113_bit at GPIO_PIN_CONTROL_113.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_113_bit at GPIO_PIN_CONTROL_113.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_113_bit at GPIO_PIN_CONTROL_113.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_113_bit at GPIO_PIN_CONTROL_113.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_113_bit at GPIO_PIN_CONTROL_113.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_113_bit at GPIO_PIN_CONTROL_113.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_113_bit at GPIO_PIN_CONTROL_113.B8;
    sbit  DIR_GPIO_PIN_CONTROL_113_bit at GPIO_PIN_CONTROL_113.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_113_bit at GPIO_PIN_CONTROL_113.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_113_bit at GPIO_PIN_CONTROL_113.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_113_bit at GPIO_PIN_CONTROL_113.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_113_bit at GPIO_PIN_CONTROL_113.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_113_bit at GPIO_PIN_CONTROL_113.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_113_bit at GPIO_PIN_CONTROL_113.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_114 absolute 0x40081130;
    sbit  PU_PD0_GPIO_PIN_CONTROL_114_bit at GPIO_PIN_CONTROL_114.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_114_bit at GPIO_PIN_CONTROL_114.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_114_bit at GPIO_PIN_CONTROL_114.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_114_bit at GPIO_PIN_CONTROL_114.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_114_bit at GPIO_PIN_CONTROL_114.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_114_bit at GPIO_PIN_CONTROL_114.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_114_bit at GPIO_PIN_CONTROL_114.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_114_bit at GPIO_PIN_CONTROL_114.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_114_bit at GPIO_PIN_CONTROL_114.B8;
    sbit  DIR_GPIO_PIN_CONTROL_114_bit at GPIO_PIN_CONTROL_114.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_114_bit at GPIO_PIN_CONTROL_114.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_114_bit at GPIO_PIN_CONTROL_114.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_114_bit at GPIO_PIN_CONTROL_114.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_114_bit at GPIO_PIN_CONTROL_114.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_114_bit at GPIO_PIN_CONTROL_114.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_114_bit at GPIO_PIN_CONTROL_114.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_115 absolute 0x40081134;
    sbit  PU_PD0_GPIO_PIN_CONTROL_115_bit at GPIO_PIN_CONTROL_115.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_115_bit at GPIO_PIN_CONTROL_115.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_115_bit at GPIO_PIN_CONTROL_115.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_115_bit at GPIO_PIN_CONTROL_115.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_115_bit at GPIO_PIN_CONTROL_115.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_115_bit at GPIO_PIN_CONTROL_115.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_115_bit at GPIO_PIN_CONTROL_115.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_115_bit at GPIO_PIN_CONTROL_115.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_115_bit at GPIO_PIN_CONTROL_115.B8;
    sbit  DIR_GPIO_PIN_CONTROL_115_bit at GPIO_PIN_CONTROL_115.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_115_bit at GPIO_PIN_CONTROL_115.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_115_bit at GPIO_PIN_CONTROL_115.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_115_bit at GPIO_PIN_CONTROL_115.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_115_bit at GPIO_PIN_CONTROL_115.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_115_bit at GPIO_PIN_CONTROL_115.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_115_bit at GPIO_PIN_CONTROL_115.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_116 absolute 0x40081138;
    sbit  PU_PD0_GPIO_PIN_CONTROL_116_bit at GPIO_PIN_CONTROL_116.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_116_bit at GPIO_PIN_CONTROL_116.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_116_bit at GPIO_PIN_CONTROL_116.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_116_bit at GPIO_PIN_CONTROL_116.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_116_bit at GPIO_PIN_CONTROL_116.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_116_bit at GPIO_PIN_CONTROL_116.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_116_bit at GPIO_PIN_CONTROL_116.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_116_bit at GPIO_PIN_CONTROL_116.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_116_bit at GPIO_PIN_CONTROL_116.B8;
    sbit  DIR_GPIO_PIN_CONTROL_116_bit at GPIO_PIN_CONTROL_116.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_116_bit at GPIO_PIN_CONTROL_116.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_116_bit at GPIO_PIN_CONTROL_116.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_116_bit at GPIO_PIN_CONTROL_116.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_116_bit at GPIO_PIN_CONTROL_116.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_116_bit at GPIO_PIN_CONTROL_116.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_116_bit at GPIO_PIN_CONTROL_116.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_117 absolute 0x4008113C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_117_bit at GPIO_PIN_CONTROL_117.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_117_bit at GPIO_PIN_CONTROL_117.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_117_bit at GPIO_PIN_CONTROL_117.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_117_bit at GPIO_PIN_CONTROL_117.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_117_bit at GPIO_PIN_CONTROL_117.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_117_bit at GPIO_PIN_CONTROL_117.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_117_bit at GPIO_PIN_CONTROL_117.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_117_bit at GPIO_PIN_CONTROL_117.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_117_bit at GPIO_PIN_CONTROL_117.B8;
    sbit  DIR_GPIO_PIN_CONTROL_117_bit at GPIO_PIN_CONTROL_117.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_117_bit at GPIO_PIN_CONTROL_117.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_117_bit at GPIO_PIN_CONTROL_117.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_117_bit at GPIO_PIN_CONTROL_117.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_117_bit at GPIO_PIN_CONTROL_117.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_117_bit at GPIO_PIN_CONTROL_117.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_117_bit at GPIO_PIN_CONTROL_117.B24;

sfr far unsigned long   volatile GPIO_PORT_120_127    absolute 0x40081140;
sfr far unsigned long   volatile GPIO_PIN_CONTROL_120 absolute 0x40081140;
    sbit  PU_PD0_GPIO_PIN_CONTROL_120_bit at GPIO_PIN_CONTROL_120.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_120_bit at GPIO_PIN_CONTROL_120.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_120_bit at GPIO_PIN_CONTROL_120.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_120_bit at GPIO_PIN_CONTROL_120.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_120_bit at GPIO_PIN_CONTROL_120.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_120_bit at GPIO_PIN_CONTROL_120.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_120_bit at GPIO_PIN_CONTROL_120.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_120_bit at GPIO_PIN_CONTROL_120.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_120_bit at GPIO_PIN_CONTROL_120.B8;
    sbit  DIR_GPIO_PIN_CONTROL_120_bit at GPIO_PIN_CONTROL_120.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_120_bit at GPIO_PIN_CONTROL_120.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_120_bit at GPIO_PIN_CONTROL_120.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_120_bit at GPIO_PIN_CONTROL_120.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_120_bit at GPIO_PIN_CONTROL_120.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_120_bit at GPIO_PIN_CONTROL_120.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_120_bit at GPIO_PIN_CONTROL_120.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_121 absolute 0x40081144;
    sbit  PU_PD0_GPIO_PIN_CONTROL_121_bit at GPIO_PIN_CONTROL_121.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_121_bit at GPIO_PIN_CONTROL_121.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_121_bit at GPIO_PIN_CONTROL_121.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_121_bit at GPIO_PIN_CONTROL_121.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_121_bit at GPIO_PIN_CONTROL_121.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_121_bit at GPIO_PIN_CONTROL_121.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_121_bit at GPIO_PIN_CONTROL_121.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_121_bit at GPIO_PIN_CONTROL_121.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_121_bit at GPIO_PIN_CONTROL_121.B8;
    sbit  DIR_GPIO_PIN_CONTROL_121_bit at GPIO_PIN_CONTROL_121.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_121_bit at GPIO_PIN_CONTROL_121.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_121_bit at GPIO_PIN_CONTROL_121.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_121_bit at GPIO_PIN_CONTROL_121.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_121_bit at GPIO_PIN_CONTROL_121.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_121_bit at GPIO_PIN_CONTROL_121.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_121_bit at GPIO_PIN_CONTROL_121.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_122 absolute 0x40081148;
    sbit  PU_PD0_GPIO_PIN_CONTROL_122_bit at GPIO_PIN_CONTROL_122.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_122_bit at GPIO_PIN_CONTROL_122.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_122_bit at GPIO_PIN_CONTROL_122.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_122_bit at GPIO_PIN_CONTROL_122.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_122_bit at GPIO_PIN_CONTROL_122.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_122_bit at GPIO_PIN_CONTROL_122.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_122_bit at GPIO_PIN_CONTROL_122.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_122_bit at GPIO_PIN_CONTROL_122.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_122_bit at GPIO_PIN_CONTROL_122.B8;
    sbit  DIR_GPIO_PIN_CONTROL_122_bit at GPIO_PIN_CONTROL_122.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_122_bit at GPIO_PIN_CONTROL_122.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_122_bit at GPIO_PIN_CONTROL_122.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_122_bit at GPIO_PIN_CONTROL_122.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_122_bit at GPIO_PIN_CONTROL_122.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_122_bit at GPIO_PIN_CONTROL_122.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_122_bit at GPIO_PIN_CONTROL_122.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_123 absolute 0x4008114C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_123_bit at GPIO_PIN_CONTROL_123.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_123_bit at GPIO_PIN_CONTROL_123.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_123_bit at GPIO_PIN_CONTROL_123.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_123_bit at GPIO_PIN_CONTROL_123.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_123_bit at GPIO_PIN_CONTROL_123.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_123_bit at GPIO_PIN_CONTROL_123.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_123_bit at GPIO_PIN_CONTROL_123.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_123_bit at GPIO_PIN_CONTROL_123.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_123_bit at GPIO_PIN_CONTROL_123.B8;
    sbit  DIR_GPIO_PIN_CONTROL_123_bit at GPIO_PIN_CONTROL_123.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_123_bit at GPIO_PIN_CONTROL_123.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_123_bit at GPIO_PIN_CONTROL_123.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_123_bit at GPIO_PIN_CONTROL_123.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_123_bit at GPIO_PIN_CONTROL_123.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_123_bit at GPIO_PIN_CONTROL_123.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_123_bit at GPIO_PIN_CONTROL_123.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_124 absolute 0x40081150;
    sbit  PU_PD0_GPIO_PIN_CONTROL_124_bit at GPIO_PIN_CONTROL_124.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_124_bit at GPIO_PIN_CONTROL_124.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_124_bit at GPIO_PIN_CONTROL_124.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_124_bit at GPIO_PIN_CONTROL_124.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_124_bit at GPIO_PIN_CONTROL_124.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_124_bit at GPIO_PIN_CONTROL_124.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_124_bit at GPIO_PIN_CONTROL_124.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_124_bit at GPIO_PIN_CONTROL_124.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_124_bit at GPIO_PIN_CONTROL_124.B8;
    sbit  DIR_GPIO_PIN_CONTROL_124_bit at GPIO_PIN_CONTROL_124.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_124_bit at GPIO_PIN_CONTROL_124.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_124_bit at GPIO_PIN_CONTROL_124.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_124_bit at GPIO_PIN_CONTROL_124.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_124_bit at GPIO_PIN_CONTROL_124.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_124_bit at GPIO_PIN_CONTROL_124.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_124_bit at GPIO_PIN_CONTROL_124.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_125 absolute 0x40081154;
    sbit  PU_PD0_GPIO_PIN_CONTROL_125_bit at GPIO_PIN_CONTROL_125.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_125_bit at GPIO_PIN_CONTROL_125.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_125_bit at GPIO_PIN_CONTROL_125.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_125_bit at GPIO_PIN_CONTROL_125.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_125_bit at GPIO_PIN_CONTROL_125.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_125_bit at GPIO_PIN_CONTROL_125.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_125_bit at GPIO_PIN_CONTROL_125.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_125_bit at GPIO_PIN_CONTROL_125.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_125_bit at GPIO_PIN_CONTROL_125.B8;
    sbit  DIR_GPIO_PIN_CONTROL_125_bit at GPIO_PIN_CONTROL_125.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_125_bit at GPIO_PIN_CONTROL_125.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_125_bit at GPIO_PIN_CONTROL_125.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_125_bit at GPIO_PIN_CONTROL_125.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_125_bit at GPIO_PIN_CONTROL_125.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_125_bit at GPIO_PIN_CONTROL_125.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_125_bit at GPIO_PIN_CONTROL_125.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_126 absolute 0x40081158;
    sbit  PU_PD0_GPIO_PIN_CONTROL_126_bit at GPIO_PIN_CONTROL_126.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_126_bit at GPIO_PIN_CONTROL_126.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_126_bit at GPIO_PIN_CONTROL_126.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_126_bit at GPIO_PIN_CONTROL_126.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_126_bit at GPIO_PIN_CONTROL_126.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_126_bit at GPIO_PIN_CONTROL_126.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_126_bit at GPIO_PIN_CONTROL_126.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_126_bit at GPIO_PIN_CONTROL_126.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_126_bit at GPIO_PIN_CONTROL_126.B8;
    sbit  DIR_GPIO_PIN_CONTROL_126_bit at GPIO_PIN_CONTROL_126.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_126_bit at GPIO_PIN_CONTROL_126.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_126_bit at GPIO_PIN_CONTROL_126.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_126_bit at GPIO_PIN_CONTROL_126.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_126_bit at GPIO_PIN_CONTROL_126.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_126_bit at GPIO_PIN_CONTROL_126.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_126_bit at GPIO_PIN_CONTROL_126.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_127 absolute 0x4008115C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_127_bit at GPIO_PIN_CONTROL_127.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_127_bit at GPIO_PIN_CONTROL_127.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_127_bit at GPIO_PIN_CONTROL_127.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_127_bit at GPIO_PIN_CONTROL_127.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_127_bit at GPIO_PIN_CONTROL_127.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_127_bit at GPIO_PIN_CONTROL_127.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_127_bit at GPIO_PIN_CONTROL_127.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_127_bit at GPIO_PIN_CONTROL_127.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_127_bit at GPIO_PIN_CONTROL_127.B8;
    sbit  DIR_GPIO_PIN_CONTROL_127_bit at GPIO_PIN_CONTROL_127.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_127_bit at GPIO_PIN_CONTROL_127.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_127_bit at GPIO_PIN_CONTROL_127.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_127_bit at GPIO_PIN_CONTROL_127.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_127_bit at GPIO_PIN_CONTROL_127.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_127_bit at GPIO_PIN_CONTROL_127.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_127_bit at GPIO_PIN_CONTROL_127.B24;

sfr far unsigned long   volatile GPIO_PORT_130_137    absolute 0x40081160;
sfr far unsigned long   volatile GPIO_PIN_CONTROL_130 absolute 0x40081160;
    sbit  PU_PD0_GPIO_PIN_CONTROL_130_bit at GPIO_PIN_CONTROL_130.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_130_bit at GPIO_PIN_CONTROL_130.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_130_bit at GPIO_PIN_CONTROL_130.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_130_bit at GPIO_PIN_CONTROL_130.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_130_bit at GPIO_PIN_CONTROL_130.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_130_bit at GPIO_PIN_CONTROL_130.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_130_bit at GPIO_PIN_CONTROL_130.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_130_bit at GPIO_PIN_CONTROL_130.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_130_bit at GPIO_PIN_CONTROL_130.B8;
    sbit  DIR_GPIO_PIN_CONTROL_130_bit at GPIO_PIN_CONTROL_130.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_130_bit at GPIO_PIN_CONTROL_130.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_130_bit at GPIO_PIN_CONTROL_130.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_130_bit at GPIO_PIN_CONTROL_130.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_130_bit at GPIO_PIN_CONTROL_130.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_130_bit at GPIO_PIN_CONTROL_130.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_130_bit at GPIO_PIN_CONTROL_130.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_131 absolute 0x40081164;
    sbit  PU_PD0_GPIO_PIN_CONTROL_131_bit at GPIO_PIN_CONTROL_131.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_131_bit at GPIO_PIN_CONTROL_131.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_131_bit at GPIO_PIN_CONTROL_131.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_131_bit at GPIO_PIN_CONTROL_131.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_131_bit at GPIO_PIN_CONTROL_131.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_131_bit at GPIO_PIN_CONTROL_131.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_131_bit at GPIO_PIN_CONTROL_131.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_131_bit at GPIO_PIN_CONTROL_131.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_131_bit at GPIO_PIN_CONTROL_131.B8;
    sbit  DIR_GPIO_PIN_CONTROL_131_bit at GPIO_PIN_CONTROL_131.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_131_bit at GPIO_PIN_CONTROL_131.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_131_bit at GPIO_PIN_CONTROL_131.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_131_bit at GPIO_PIN_CONTROL_131.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_131_bit at GPIO_PIN_CONTROL_131.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_131_bit at GPIO_PIN_CONTROL_131.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_131_bit at GPIO_PIN_CONTROL_131.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_132 absolute 0x40081168;
    sbit  PU_PD0_GPIO_PIN_CONTROL_132_bit at GPIO_PIN_CONTROL_132.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_132_bit at GPIO_PIN_CONTROL_132.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_132_bit at GPIO_PIN_CONTROL_132.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_132_bit at GPIO_PIN_CONTROL_132.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_132_bit at GPIO_PIN_CONTROL_132.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_132_bit at GPIO_PIN_CONTROL_132.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_132_bit at GPIO_PIN_CONTROL_132.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_132_bit at GPIO_PIN_CONTROL_132.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_132_bit at GPIO_PIN_CONTROL_132.B8;
    sbit  DIR_GPIO_PIN_CONTROL_132_bit at GPIO_PIN_CONTROL_132.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_132_bit at GPIO_PIN_CONTROL_132.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_132_bit at GPIO_PIN_CONTROL_132.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_132_bit at GPIO_PIN_CONTROL_132.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_132_bit at GPIO_PIN_CONTROL_132.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_132_bit at GPIO_PIN_CONTROL_132.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_132_bit at GPIO_PIN_CONTROL_132.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_133 absolute 0x4008116C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_133_bit at GPIO_PIN_CONTROL_133.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_133_bit at GPIO_PIN_CONTROL_133.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_133_bit at GPIO_PIN_CONTROL_133.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_133_bit at GPIO_PIN_CONTROL_133.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_133_bit at GPIO_PIN_CONTROL_133.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_133_bit at GPIO_PIN_CONTROL_133.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_133_bit at GPIO_PIN_CONTROL_133.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_133_bit at GPIO_PIN_CONTROL_133.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_133_bit at GPIO_PIN_CONTROL_133.B8;
    sbit  DIR_GPIO_PIN_CONTROL_133_bit at GPIO_PIN_CONTROL_133.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_133_bit at GPIO_PIN_CONTROL_133.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_133_bit at GPIO_PIN_CONTROL_133.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_133_bit at GPIO_PIN_CONTROL_133.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_133_bit at GPIO_PIN_CONTROL_133.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_133_bit at GPIO_PIN_CONTROL_133.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_133_bit at GPIO_PIN_CONTROL_133.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_134 absolute 0x40081170;
    sbit  PU_PD0_GPIO_PIN_CONTROL_134_bit at GPIO_PIN_CONTROL_134.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_134_bit at GPIO_PIN_CONTROL_134.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_134_bit at GPIO_PIN_CONTROL_134.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_134_bit at GPIO_PIN_CONTROL_134.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_134_bit at GPIO_PIN_CONTROL_134.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_134_bit at GPIO_PIN_CONTROL_134.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_134_bit at GPIO_PIN_CONTROL_134.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_134_bit at GPIO_PIN_CONTROL_134.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_134_bit at GPIO_PIN_CONTROL_134.B8;
    sbit  DIR_GPIO_PIN_CONTROL_134_bit at GPIO_PIN_CONTROL_134.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_134_bit at GPIO_PIN_CONTROL_134.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_134_bit at GPIO_PIN_CONTROL_134.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_134_bit at GPIO_PIN_CONTROL_134.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_134_bit at GPIO_PIN_CONTROL_134.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_134_bit at GPIO_PIN_CONTROL_134.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_134_bit at GPIO_PIN_CONTROL_134.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_135 absolute 0x40081174;
    sbit  PU_PD0_GPIO_PIN_CONTROL_135_bit at GPIO_PIN_CONTROL_135.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_135_bit at GPIO_PIN_CONTROL_135.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_135_bit at GPIO_PIN_CONTROL_135.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_135_bit at GPIO_PIN_CONTROL_135.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_135_bit at GPIO_PIN_CONTROL_135.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_135_bit at GPIO_PIN_CONTROL_135.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_135_bit at GPIO_PIN_CONTROL_135.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_135_bit at GPIO_PIN_CONTROL_135.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_135_bit at GPIO_PIN_CONTROL_135.B8;
    sbit  DIR_GPIO_PIN_CONTROL_135_bit at GPIO_PIN_CONTROL_135.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_135_bit at GPIO_PIN_CONTROL_135.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_135_bit at GPIO_PIN_CONTROL_135.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_135_bit at GPIO_PIN_CONTROL_135.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_135_bit at GPIO_PIN_CONTROL_135.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_135_bit at GPIO_PIN_CONTROL_135.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_135_bit at GPIO_PIN_CONTROL_135.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_136 absolute 0x40081178;
    sbit  PU_PD0_GPIO_PIN_CONTROL_136_bit at GPIO_PIN_CONTROL_136.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_136_bit at GPIO_PIN_CONTROL_136.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_136_bit at GPIO_PIN_CONTROL_136.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_136_bit at GPIO_PIN_CONTROL_136.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_136_bit at GPIO_PIN_CONTROL_136.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_136_bit at GPIO_PIN_CONTROL_136.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_136_bit at GPIO_PIN_CONTROL_136.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_136_bit at GPIO_PIN_CONTROL_136.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_136_bit at GPIO_PIN_CONTROL_136.B8;
    sbit  DIR_GPIO_PIN_CONTROL_136_bit at GPIO_PIN_CONTROL_136.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_136_bit at GPIO_PIN_CONTROL_136.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_136_bit at GPIO_PIN_CONTROL_136.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_136_bit at GPIO_PIN_CONTROL_136.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_136_bit at GPIO_PIN_CONTROL_136.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_136_bit at GPIO_PIN_CONTROL_136.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_136_bit at GPIO_PIN_CONTROL_136.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_137 absolute 0x4008117C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_137_bit at GPIO_PIN_CONTROL_137.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_137_bit at GPIO_PIN_CONTROL_137.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_137_bit at GPIO_PIN_CONTROL_137.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_137_bit at GPIO_PIN_CONTROL_137.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_137_bit at GPIO_PIN_CONTROL_137.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_137_bit at GPIO_PIN_CONTROL_137.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_137_bit at GPIO_PIN_CONTROL_137.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_137_bit at GPIO_PIN_CONTROL_137.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_137_bit at GPIO_PIN_CONTROL_137.B8;
    sbit  DIR_GPIO_PIN_CONTROL_137_bit at GPIO_PIN_CONTROL_137.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_137_bit at GPIO_PIN_CONTROL_137.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_137_bit at GPIO_PIN_CONTROL_137.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_137_bit at GPIO_PIN_CONTROL_137.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_137_bit at GPIO_PIN_CONTROL_137.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_137_bit at GPIO_PIN_CONTROL_137.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_137_bit at GPIO_PIN_CONTROL_137.B24;

sfr far unsigned long   volatile GPIO_PORT_140_147    absolute 0x40081180;
sfr far unsigned long   volatile GPIO_PIN_CONTROL_140 absolute 0x40081180;
    sbit  PU_PD0_GPIO_PIN_CONTROL_140_bit at GPIO_PIN_CONTROL_140.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_140_bit at GPIO_PIN_CONTROL_140.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_140_bit at GPIO_PIN_CONTROL_140.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_140_bit at GPIO_PIN_CONTROL_140.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_140_bit at GPIO_PIN_CONTROL_140.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_140_bit at GPIO_PIN_CONTROL_140.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_140_bit at GPIO_PIN_CONTROL_140.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_140_bit at GPIO_PIN_CONTROL_140.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_140_bit at GPIO_PIN_CONTROL_140.B8;
    sbit  DIR_GPIO_PIN_CONTROL_140_bit at GPIO_PIN_CONTROL_140.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_140_bit at GPIO_PIN_CONTROL_140.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_140_bit at GPIO_PIN_CONTROL_140.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_140_bit at GPIO_PIN_CONTROL_140.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_140_bit at GPIO_PIN_CONTROL_140.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_140_bit at GPIO_PIN_CONTROL_140.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_140_bit at GPIO_PIN_CONTROL_140.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_141 absolute 0x40081184;
    sbit  PU_PD0_GPIO_PIN_CONTROL_141_bit at GPIO_PIN_CONTROL_141.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_141_bit at GPIO_PIN_CONTROL_141.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_141_bit at GPIO_PIN_CONTROL_141.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_141_bit at GPIO_PIN_CONTROL_141.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_141_bit at GPIO_PIN_CONTROL_141.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_141_bit at GPIO_PIN_CONTROL_141.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_141_bit at GPIO_PIN_CONTROL_141.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_141_bit at GPIO_PIN_CONTROL_141.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_141_bit at GPIO_PIN_CONTROL_141.B8;
    sbit  DIR_GPIO_PIN_CONTROL_141_bit at GPIO_PIN_CONTROL_141.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_141_bit at GPIO_PIN_CONTROL_141.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_141_bit at GPIO_PIN_CONTROL_141.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_141_bit at GPIO_PIN_CONTROL_141.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_141_bit at GPIO_PIN_CONTROL_141.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_141_bit at GPIO_PIN_CONTROL_141.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_141_bit at GPIO_PIN_CONTROL_141.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_142 absolute 0x40081188;
    sbit  PU_PD0_GPIO_PIN_CONTROL_142_bit at GPIO_PIN_CONTROL_142.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_142_bit at GPIO_PIN_CONTROL_142.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_142_bit at GPIO_PIN_CONTROL_142.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_142_bit at GPIO_PIN_CONTROL_142.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_142_bit at GPIO_PIN_CONTROL_142.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_142_bit at GPIO_PIN_CONTROL_142.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_142_bit at GPIO_PIN_CONTROL_142.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_142_bit at GPIO_PIN_CONTROL_142.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_142_bit at GPIO_PIN_CONTROL_142.B8;
    sbit  DIR_GPIO_PIN_CONTROL_142_bit at GPIO_PIN_CONTROL_142.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_142_bit at GPIO_PIN_CONTROL_142.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_142_bit at GPIO_PIN_CONTROL_142.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_142_bit at GPIO_PIN_CONTROL_142.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_142_bit at GPIO_PIN_CONTROL_142.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_142_bit at GPIO_PIN_CONTROL_142.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_142_bit at GPIO_PIN_CONTROL_142.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_143 absolute 0x4008118C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_143_bit at GPIO_PIN_CONTROL_143.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_143_bit at GPIO_PIN_CONTROL_143.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_143_bit at GPIO_PIN_CONTROL_143.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_143_bit at GPIO_PIN_CONTROL_143.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_143_bit at GPIO_PIN_CONTROL_143.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_143_bit at GPIO_PIN_CONTROL_143.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_143_bit at GPIO_PIN_CONTROL_143.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_143_bit at GPIO_PIN_CONTROL_143.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_143_bit at GPIO_PIN_CONTROL_143.B8;
    sbit  DIR_GPIO_PIN_CONTROL_143_bit at GPIO_PIN_CONTROL_143.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_143_bit at GPIO_PIN_CONTROL_143.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_143_bit at GPIO_PIN_CONTROL_143.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_143_bit at GPIO_PIN_CONTROL_143.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_143_bit at GPIO_PIN_CONTROL_143.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_143_bit at GPIO_PIN_CONTROL_143.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_143_bit at GPIO_PIN_CONTROL_143.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_144 absolute 0x40081190;
    sbit  PU_PD0_GPIO_PIN_CONTROL_144_bit at GPIO_PIN_CONTROL_144.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_144_bit at GPIO_PIN_CONTROL_144.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_144_bit at GPIO_PIN_CONTROL_144.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_144_bit at GPIO_PIN_CONTROL_144.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_144_bit at GPIO_PIN_CONTROL_144.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_144_bit at GPIO_PIN_CONTROL_144.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_144_bit at GPIO_PIN_CONTROL_144.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_144_bit at GPIO_PIN_CONTROL_144.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_144_bit at GPIO_PIN_CONTROL_144.B8;
    sbit  DIR_GPIO_PIN_CONTROL_144_bit at GPIO_PIN_CONTROL_144.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_144_bit at GPIO_PIN_CONTROL_144.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_144_bit at GPIO_PIN_CONTROL_144.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_144_bit at GPIO_PIN_CONTROL_144.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_144_bit at GPIO_PIN_CONTROL_144.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_144_bit at GPIO_PIN_CONTROL_144.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_144_bit at GPIO_PIN_CONTROL_144.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_145 absolute 0x40081194;
    sbit  PU_PD0_GPIO_PIN_CONTROL_145_bit at GPIO_PIN_CONTROL_145.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_145_bit at GPIO_PIN_CONTROL_145.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_145_bit at GPIO_PIN_CONTROL_145.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_145_bit at GPIO_PIN_CONTROL_145.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_145_bit at GPIO_PIN_CONTROL_145.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_145_bit at GPIO_PIN_CONTROL_145.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_145_bit at GPIO_PIN_CONTROL_145.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_145_bit at GPIO_PIN_CONTROL_145.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_145_bit at GPIO_PIN_CONTROL_145.B8;
    sbit  DIR_GPIO_PIN_CONTROL_145_bit at GPIO_PIN_CONTROL_145.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_145_bit at GPIO_PIN_CONTROL_145.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_145_bit at GPIO_PIN_CONTROL_145.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_145_bit at GPIO_PIN_CONTROL_145.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_145_bit at GPIO_PIN_CONTROL_145.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_145_bit at GPIO_PIN_CONTROL_145.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_145_bit at GPIO_PIN_CONTROL_145.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_146 absolute 0x40081198;
    sbit  PU_PD0_GPIO_PIN_CONTROL_146_bit at GPIO_PIN_CONTROL_146.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_146_bit at GPIO_PIN_CONTROL_146.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_146_bit at GPIO_PIN_CONTROL_146.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_146_bit at GPIO_PIN_CONTROL_146.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_146_bit at GPIO_PIN_CONTROL_146.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_146_bit at GPIO_PIN_CONTROL_146.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_146_bit at GPIO_PIN_CONTROL_146.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_146_bit at GPIO_PIN_CONTROL_146.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_146_bit at GPIO_PIN_CONTROL_146.B8;
    sbit  DIR_GPIO_PIN_CONTROL_146_bit at GPIO_PIN_CONTROL_146.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_146_bit at GPIO_PIN_CONTROL_146.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_146_bit at GPIO_PIN_CONTROL_146.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_146_bit at GPIO_PIN_CONTROL_146.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_146_bit at GPIO_PIN_CONTROL_146.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_146_bit at GPIO_PIN_CONTROL_146.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_146_bit at GPIO_PIN_CONTROL_146.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_147 absolute 0x4008119C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_147_bit at GPIO_PIN_CONTROL_147.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_147_bit at GPIO_PIN_CONTROL_147.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_147_bit at GPIO_PIN_CONTROL_147.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_147_bit at GPIO_PIN_CONTROL_147.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_147_bit at GPIO_PIN_CONTROL_147.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_147_bit at GPIO_PIN_CONTROL_147.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_147_bit at GPIO_PIN_CONTROL_147.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_147_bit at GPIO_PIN_CONTROL_147.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_147_bit at GPIO_PIN_CONTROL_147.B8;
    sbit  DIR_GPIO_PIN_CONTROL_147_bit at GPIO_PIN_CONTROL_147.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_147_bit at GPIO_PIN_CONTROL_147.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_147_bit at GPIO_PIN_CONTROL_147.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_147_bit at GPIO_PIN_CONTROL_147.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_147_bit at GPIO_PIN_CONTROL_147.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_147_bit at GPIO_PIN_CONTROL_147.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_147_bit at GPIO_PIN_CONTROL_147.B24;

sfr far unsigned long   volatile GPIO_PORT_150_157    absolute 0x400811A0;
sfr far unsigned long   volatile GPIO_PIN_CONTROL_150 absolute 0x400811A0;
    sbit  PU_PD0_GPIO_PIN_CONTROL_150_bit at GPIO_PIN_CONTROL_150.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_150_bit at GPIO_PIN_CONTROL_150.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_150_bit at GPIO_PIN_CONTROL_150.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_150_bit at GPIO_PIN_CONTROL_150.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_150_bit at GPIO_PIN_CONTROL_150.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_150_bit at GPIO_PIN_CONTROL_150.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_150_bit at GPIO_PIN_CONTROL_150.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_150_bit at GPIO_PIN_CONTROL_150.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_150_bit at GPIO_PIN_CONTROL_150.B8;
    sbit  DIR_GPIO_PIN_CONTROL_150_bit at GPIO_PIN_CONTROL_150.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_150_bit at GPIO_PIN_CONTROL_150.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_150_bit at GPIO_PIN_CONTROL_150.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_150_bit at GPIO_PIN_CONTROL_150.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_150_bit at GPIO_PIN_CONTROL_150.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_150_bit at GPIO_PIN_CONTROL_150.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_150_bit at GPIO_PIN_CONTROL_150.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_151 absolute 0x400811A4;
    sbit  PU_PD0_GPIO_PIN_CONTROL_151_bit at GPIO_PIN_CONTROL_151.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_151_bit at GPIO_PIN_CONTROL_151.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_151_bit at GPIO_PIN_CONTROL_151.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_151_bit at GPIO_PIN_CONTROL_151.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_151_bit at GPIO_PIN_CONTROL_151.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_151_bit at GPIO_PIN_CONTROL_151.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_151_bit at GPIO_PIN_CONTROL_151.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_151_bit at GPIO_PIN_CONTROL_151.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_151_bit at GPIO_PIN_CONTROL_151.B8;
    sbit  DIR_GPIO_PIN_CONTROL_151_bit at GPIO_PIN_CONTROL_151.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_151_bit at GPIO_PIN_CONTROL_151.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_151_bit at GPIO_PIN_CONTROL_151.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_151_bit at GPIO_PIN_CONTROL_151.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_151_bit at GPIO_PIN_CONTROL_151.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_151_bit at GPIO_PIN_CONTROL_151.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_151_bit at GPIO_PIN_CONTROL_151.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_152 absolute 0x400811A8;
    sbit  PU_PD0_GPIO_PIN_CONTROL_152_bit at GPIO_PIN_CONTROL_152.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_152_bit at GPIO_PIN_CONTROL_152.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_152_bit at GPIO_PIN_CONTROL_152.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_152_bit at GPIO_PIN_CONTROL_152.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_152_bit at GPIO_PIN_CONTROL_152.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_152_bit at GPIO_PIN_CONTROL_152.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_152_bit at GPIO_PIN_CONTROL_152.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_152_bit at GPIO_PIN_CONTROL_152.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_152_bit at GPIO_PIN_CONTROL_152.B8;
    sbit  DIR_GPIO_PIN_CONTROL_152_bit at GPIO_PIN_CONTROL_152.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_152_bit at GPIO_PIN_CONTROL_152.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_152_bit at GPIO_PIN_CONTROL_152.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_152_bit at GPIO_PIN_CONTROL_152.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_152_bit at GPIO_PIN_CONTROL_152.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_152_bit at GPIO_PIN_CONTROL_152.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_152_bit at GPIO_PIN_CONTROL_152.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_153 absolute 0x400811AC;
    sbit  PU_PD0_GPIO_PIN_CONTROL_153_bit at GPIO_PIN_CONTROL_153.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_153_bit at GPIO_PIN_CONTROL_153.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_153_bit at GPIO_PIN_CONTROL_153.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_153_bit at GPIO_PIN_CONTROL_153.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_153_bit at GPIO_PIN_CONTROL_153.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_153_bit at GPIO_PIN_CONTROL_153.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_153_bit at GPIO_PIN_CONTROL_153.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_153_bit at GPIO_PIN_CONTROL_153.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_153_bit at GPIO_PIN_CONTROL_153.B8;
    sbit  DIR_GPIO_PIN_CONTROL_153_bit at GPIO_PIN_CONTROL_153.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_153_bit at GPIO_PIN_CONTROL_153.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_153_bit at GPIO_PIN_CONTROL_153.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_153_bit at GPIO_PIN_CONTROL_153.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_153_bit at GPIO_PIN_CONTROL_153.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_153_bit at GPIO_PIN_CONTROL_153.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_153_bit at GPIO_PIN_CONTROL_153.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_154 absolute 0x400811B0;
    sbit  PU_PD0_GPIO_PIN_CONTROL_154_bit at GPIO_PIN_CONTROL_154.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_154_bit at GPIO_PIN_CONTROL_154.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_154_bit at GPIO_PIN_CONTROL_154.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_154_bit at GPIO_PIN_CONTROL_154.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_154_bit at GPIO_PIN_CONTROL_154.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_154_bit at GPIO_PIN_CONTROL_154.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_154_bit at GPIO_PIN_CONTROL_154.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_154_bit at GPIO_PIN_CONTROL_154.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_154_bit at GPIO_PIN_CONTROL_154.B8;
    sbit  DIR_GPIO_PIN_CONTROL_154_bit at GPIO_PIN_CONTROL_154.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_154_bit at GPIO_PIN_CONTROL_154.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_154_bit at GPIO_PIN_CONTROL_154.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_154_bit at GPIO_PIN_CONTROL_154.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_154_bit at GPIO_PIN_CONTROL_154.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_154_bit at GPIO_PIN_CONTROL_154.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_154_bit at GPIO_PIN_CONTROL_154.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_155 absolute 0x400811B4;
    sbit  PU_PD0_GPIO_PIN_CONTROL_155_bit at GPIO_PIN_CONTROL_155.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_155_bit at GPIO_PIN_CONTROL_155.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_155_bit at GPIO_PIN_CONTROL_155.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_155_bit at GPIO_PIN_CONTROL_155.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_155_bit at GPIO_PIN_CONTROL_155.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_155_bit at GPIO_PIN_CONTROL_155.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_155_bit at GPIO_PIN_CONTROL_155.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_155_bit at GPIO_PIN_CONTROL_155.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_155_bit at GPIO_PIN_CONTROL_155.B8;
    sbit  DIR_GPIO_PIN_CONTROL_155_bit at GPIO_PIN_CONTROL_155.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_155_bit at GPIO_PIN_CONTROL_155.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_155_bit at GPIO_PIN_CONTROL_155.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_155_bit at GPIO_PIN_CONTROL_155.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_155_bit at GPIO_PIN_CONTROL_155.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_155_bit at GPIO_PIN_CONTROL_155.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_155_bit at GPIO_PIN_CONTROL_155.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_156 absolute 0x400811B8;
    sbit  PU_PD0_GPIO_PIN_CONTROL_156_bit at GPIO_PIN_CONTROL_156.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_156_bit at GPIO_PIN_CONTROL_156.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_156_bit at GPIO_PIN_CONTROL_156.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_156_bit at GPIO_PIN_CONTROL_156.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_156_bit at GPIO_PIN_CONTROL_156.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_156_bit at GPIO_PIN_CONTROL_156.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_156_bit at GPIO_PIN_CONTROL_156.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_156_bit at GPIO_PIN_CONTROL_156.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_156_bit at GPIO_PIN_CONTROL_156.B8;
    sbit  DIR_GPIO_PIN_CONTROL_156_bit at GPIO_PIN_CONTROL_156.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_156_bit at GPIO_PIN_CONTROL_156.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_156_bit at GPIO_PIN_CONTROL_156.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_156_bit at GPIO_PIN_CONTROL_156.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_156_bit at GPIO_PIN_CONTROL_156.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_156_bit at GPIO_PIN_CONTROL_156.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_156_bit at GPIO_PIN_CONTROL_156.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_157 absolute 0x400811BC;
    sbit  PU_PD0_GPIO_PIN_CONTROL_157_bit at GPIO_PIN_CONTROL_157.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_157_bit at GPIO_PIN_CONTROL_157.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_157_bit at GPIO_PIN_CONTROL_157.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_157_bit at GPIO_PIN_CONTROL_157.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_157_bit at GPIO_PIN_CONTROL_157.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_157_bit at GPIO_PIN_CONTROL_157.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_157_bit at GPIO_PIN_CONTROL_157.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_157_bit at GPIO_PIN_CONTROL_157.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_157_bit at GPIO_PIN_CONTROL_157.B8;
    sbit  DIR_GPIO_PIN_CONTROL_157_bit at GPIO_PIN_CONTROL_157.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_157_bit at GPIO_PIN_CONTROL_157.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_157_bit at GPIO_PIN_CONTROL_157.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_157_bit at GPIO_PIN_CONTROL_157.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_157_bit at GPIO_PIN_CONTROL_157.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_157_bit at GPIO_PIN_CONTROL_157.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_157_bit at GPIO_PIN_CONTROL_157.B24;

sfr far unsigned long   volatile GPIO_PORT_160_167    absolute 0x400811C0;
sfr far unsigned long   volatile GPIO_PIN_CONTROL_160 absolute 0x400811C0;
    sbit  PU_PD0_GPIO_PIN_CONTROL_160_bit at GPIO_PIN_CONTROL_160.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_160_bit at GPIO_PIN_CONTROL_160.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_160_bit at GPIO_PIN_CONTROL_160.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_160_bit at GPIO_PIN_CONTROL_160.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_160_bit at GPIO_PIN_CONTROL_160.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_160_bit at GPIO_PIN_CONTROL_160.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_160_bit at GPIO_PIN_CONTROL_160.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_160_bit at GPIO_PIN_CONTROL_160.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_160_bit at GPIO_PIN_CONTROL_160.B8;
    sbit  DIR_GPIO_PIN_CONTROL_160_bit at GPIO_PIN_CONTROL_160.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_160_bit at GPIO_PIN_CONTROL_160.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_160_bit at GPIO_PIN_CONTROL_160.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_160_bit at GPIO_PIN_CONTROL_160.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_160_bit at GPIO_PIN_CONTROL_160.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_160_bit at GPIO_PIN_CONTROL_160.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_160_bit at GPIO_PIN_CONTROL_160.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_161 absolute 0x400811C4;
    sbit  PU_PD0_GPIO_PIN_CONTROL_161_bit at GPIO_PIN_CONTROL_161.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_161_bit at GPIO_PIN_CONTROL_161.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_161_bit at GPIO_PIN_CONTROL_161.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_161_bit at GPIO_PIN_CONTROL_161.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_161_bit at GPIO_PIN_CONTROL_161.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_161_bit at GPIO_PIN_CONTROL_161.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_161_bit at GPIO_PIN_CONTROL_161.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_161_bit at GPIO_PIN_CONTROL_161.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_161_bit at GPIO_PIN_CONTROL_161.B8;
    sbit  DIR_GPIO_PIN_CONTROL_161_bit at GPIO_PIN_CONTROL_161.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_161_bit at GPIO_PIN_CONTROL_161.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_161_bit at GPIO_PIN_CONTROL_161.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_161_bit at GPIO_PIN_CONTROL_161.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_161_bit at GPIO_PIN_CONTROL_161.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_161_bit at GPIO_PIN_CONTROL_161.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_161_bit at GPIO_PIN_CONTROL_161.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_162 absolute 0x400811C8;
    sbit  PU_PD0_GPIO_PIN_CONTROL_162_bit at GPIO_PIN_CONTROL_162.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_162_bit at GPIO_PIN_CONTROL_162.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_162_bit at GPIO_PIN_CONTROL_162.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_162_bit at GPIO_PIN_CONTROL_162.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_162_bit at GPIO_PIN_CONTROL_162.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_162_bit at GPIO_PIN_CONTROL_162.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_162_bit at GPIO_PIN_CONTROL_162.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_162_bit at GPIO_PIN_CONTROL_162.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_162_bit at GPIO_PIN_CONTROL_162.B8;
    sbit  DIR_GPIO_PIN_CONTROL_162_bit at GPIO_PIN_CONTROL_162.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_162_bit at GPIO_PIN_CONTROL_162.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_162_bit at GPIO_PIN_CONTROL_162.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_162_bit at GPIO_PIN_CONTROL_162.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_162_bit at GPIO_PIN_CONTROL_162.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_162_bit at GPIO_PIN_CONTROL_162.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_162_bit at GPIO_PIN_CONTROL_162.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_163 absolute 0x400811CC;
    sbit  PU_PD0_GPIO_PIN_CONTROL_163_bit at GPIO_PIN_CONTROL_163.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_163_bit at GPIO_PIN_CONTROL_163.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_163_bit at GPIO_PIN_CONTROL_163.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_163_bit at GPIO_PIN_CONTROL_163.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_163_bit at GPIO_PIN_CONTROL_163.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_163_bit at GPIO_PIN_CONTROL_163.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_163_bit at GPIO_PIN_CONTROL_163.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_163_bit at GPIO_PIN_CONTROL_163.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_163_bit at GPIO_PIN_CONTROL_163.B8;
    sbit  DIR_GPIO_PIN_CONTROL_163_bit at GPIO_PIN_CONTROL_163.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_163_bit at GPIO_PIN_CONTROL_163.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_163_bit at GPIO_PIN_CONTROL_163.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_163_bit at GPIO_PIN_CONTROL_163.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_163_bit at GPIO_PIN_CONTROL_163.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_163_bit at GPIO_PIN_CONTROL_163.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_163_bit at GPIO_PIN_CONTROL_163.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_164 absolute 0x400811D0;
    sbit  PU_PD0_GPIO_PIN_CONTROL_164_bit at GPIO_PIN_CONTROL_164.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_164_bit at GPIO_PIN_CONTROL_164.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_164_bit at GPIO_PIN_CONTROL_164.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_164_bit at GPIO_PIN_CONTROL_164.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_164_bit at GPIO_PIN_CONTROL_164.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_164_bit at GPIO_PIN_CONTROL_164.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_164_bit at GPIO_PIN_CONTROL_164.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_164_bit at GPIO_PIN_CONTROL_164.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_164_bit at GPIO_PIN_CONTROL_164.B8;
    sbit  DIR_GPIO_PIN_CONTROL_164_bit at GPIO_PIN_CONTROL_164.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_164_bit at GPIO_PIN_CONTROL_164.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_164_bit at GPIO_PIN_CONTROL_164.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_164_bit at GPIO_PIN_CONTROL_164.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_164_bit at GPIO_PIN_CONTROL_164.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_164_bit at GPIO_PIN_CONTROL_164.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_164_bit at GPIO_PIN_CONTROL_164.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_165 absolute 0x400811D4;
    sbit  PU_PD0_GPIO_PIN_CONTROL_165_bit at GPIO_PIN_CONTROL_165.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_165_bit at GPIO_PIN_CONTROL_165.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_165_bit at GPIO_PIN_CONTROL_165.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_165_bit at GPIO_PIN_CONTROL_165.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_165_bit at GPIO_PIN_CONTROL_165.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_165_bit at GPIO_PIN_CONTROL_165.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_165_bit at GPIO_PIN_CONTROL_165.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_165_bit at GPIO_PIN_CONTROL_165.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_165_bit at GPIO_PIN_CONTROL_165.B8;
    sbit  DIR_GPIO_PIN_CONTROL_165_bit at GPIO_PIN_CONTROL_165.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_165_bit at GPIO_PIN_CONTROL_165.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_165_bit at GPIO_PIN_CONTROL_165.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_165_bit at GPIO_PIN_CONTROL_165.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_165_bit at GPIO_PIN_CONTROL_165.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_165_bit at GPIO_PIN_CONTROL_165.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_165_bit at GPIO_PIN_CONTROL_165.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_166 absolute 0x400811D8;
    sbit  PU_PD0_GPIO_PIN_CONTROL_166_bit at GPIO_PIN_CONTROL_166.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_166_bit at GPIO_PIN_CONTROL_166.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_166_bit at GPIO_PIN_CONTROL_166.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_166_bit at GPIO_PIN_CONTROL_166.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_166_bit at GPIO_PIN_CONTROL_166.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_166_bit at GPIO_PIN_CONTROL_166.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_166_bit at GPIO_PIN_CONTROL_166.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_166_bit at GPIO_PIN_CONTROL_166.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_166_bit at GPIO_PIN_CONTROL_166.B8;
    sbit  DIR_GPIO_PIN_CONTROL_166_bit at GPIO_PIN_CONTROL_166.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_166_bit at GPIO_PIN_CONTROL_166.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_166_bit at GPIO_PIN_CONTROL_166.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_166_bit at GPIO_PIN_CONTROL_166.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_166_bit at GPIO_PIN_CONTROL_166.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_166_bit at GPIO_PIN_CONTROL_166.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_166_bit at GPIO_PIN_CONTROL_166.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_167 absolute 0x400811DC;
    sbit  PU_PD0_GPIO_PIN_CONTROL_167_bit at GPIO_PIN_CONTROL_167.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_167_bit at GPIO_PIN_CONTROL_167.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_167_bit at GPIO_PIN_CONTROL_167.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_167_bit at GPIO_PIN_CONTROL_167.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_167_bit at GPIO_PIN_CONTROL_167.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_167_bit at GPIO_PIN_CONTROL_167.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_167_bit at GPIO_PIN_CONTROL_167.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_167_bit at GPIO_PIN_CONTROL_167.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_167_bit at GPIO_PIN_CONTROL_167.B8;
    sbit  DIR_GPIO_PIN_CONTROL_167_bit at GPIO_PIN_CONTROL_167.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_167_bit at GPIO_PIN_CONTROL_167.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_167_bit at GPIO_PIN_CONTROL_167.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_167_bit at GPIO_PIN_CONTROL_167.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_167_bit at GPIO_PIN_CONTROL_167.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_167_bit at GPIO_PIN_CONTROL_167.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_167_bit at GPIO_PIN_CONTROL_167.B24;

sfr far unsigned long   volatile GPIO_PORT_200_207    absolute 0x40081200;
sfr far unsigned long   volatile GPIO_PIN_CONTROL_200 absolute 0x40081200;
    sbit  PU_PD0_GPIO_PIN_CONTROL_200_bit at GPIO_PIN_CONTROL_200.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_200_bit at GPIO_PIN_CONTROL_200.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_200_bit at GPIO_PIN_CONTROL_200.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_200_bit at GPIO_PIN_CONTROL_200.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_200_bit at GPIO_PIN_CONTROL_200.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_200_bit at GPIO_PIN_CONTROL_200.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_200_bit at GPIO_PIN_CONTROL_200.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_200_bit at GPIO_PIN_CONTROL_200.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_200_bit at GPIO_PIN_CONTROL_200.B8;
    sbit  DIR_GPIO_PIN_CONTROL_200_bit at GPIO_PIN_CONTROL_200.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_200_bit at GPIO_PIN_CONTROL_200.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_200_bit at GPIO_PIN_CONTROL_200.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_200_bit at GPIO_PIN_CONTROL_200.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_200_bit at GPIO_PIN_CONTROL_200.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_200_bit at GPIO_PIN_CONTROL_200.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_200_bit at GPIO_PIN_CONTROL_200.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_201 absolute 0x40081204;
    sbit  PU_PD0_GPIO_PIN_CONTROL_201_bit at GPIO_PIN_CONTROL_201.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_201_bit at GPIO_PIN_CONTROL_201.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_201_bit at GPIO_PIN_CONTROL_201.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_201_bit at GPIO_PIN_CONTROL_201.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_201_bit at GPIO_PIN_CONTROL_201.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_201_bit at GPIO_PIN_CONTROL_201.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_201_bit at GPIO_PIN_CONTROL_201.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_201_bit at GPIO_PIN_CONTROL_201.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_201_bit at GPIO_PIN_CONTROL_201.B8;
    sbit  DIR_GPIO_PIN_CONTROL_201_bit at GPIO_PIN_CONTROL_201.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_201_bit at GPIO_PIN_CONTROL_201.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_201_bit at GPIO_PIN_CONTROL_201.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_201_bit at GPIO_PIN_CONTROL_201.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_201_bit at GPIO_PIN_CONTROL_201.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_201_bit at GPIO_PIN_CONTROL_201.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_201_bit at GPIO_PIN_CONTROL_201.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_202 absolute 0x40081208;
    sbit  PU_PD0_GPIO_PIN_CONTROL_202_bit at GPIO_PIN_CONTROL_202.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_202_bit at GPIO_PIN_CONTROL_202.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_202_bit at GPIO_PIN_CONTROL_202.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_202_bit at GPIO_PIN_CONTROL_202.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_202_bit at GPIO_PIN_CONTROL_202.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_202_bit at GPIO_PIN_CONTROL_202.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_202_bit at GPIO_PIN_CONTROL_202.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_202_bit at GPIO_PIN_CONTROL_202.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_202_bit at GPIO_PIN_CONTROL_202.B8;
    sbit  DIR_GPIO_PIN_CONTROL_202_bit at GPIO_PIN_CONTROL_202.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_202_bit at GPIO_PIN_CONTROL_202.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_202_bit at GPIO_PIN_CONTROL_202.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_202_bit at GPIO_PIN_CONTROL_202.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_202_bit at GPIO_PIN_CONTROL_202.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_202_bit at GPIO_PIN_CONTROL_202.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_202_bit at GPIO_PIN_CONTROL_202.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_203 absolute 0x4008120C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_203_bit at GPIO_PIN_CONTROL_203.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_203_bit at GPIO_PIN_CONTROL_203.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_203_bit at GPIO_PIN_CONTROL_203.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_203_bit at GPIO_PIN_CONTROL_203.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_203_bit at GPIO_PIN_CONTROL_203.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_203_bit at GPIO_PIN_CONTROL_203.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_203_bit at GPIO_PIN_CONTROL_203.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_203_bit at GPIO_PIN_CONTROL_203.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_203_bit at GPIO_PIN_CONTROL_203.B8;
    sbit  DIR_GPIO_PIN_CONTROL_203_bit at GPIO_PIN_CONTROL_203.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_203_bit at GPIO_PIN_CONTROL_203.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_203_bit at GPIO_PIN_CONTROL_203.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_203_bit at GPIO_PIN_CONTROL_203.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_203_bit at GPIO_PIN_CONTROL_203.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_203_bit at GPIO_PIN_CONTROL_203.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_203_bit at GPIO_PIN_CONTROL_203.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_204 absolute 0x40081210;
    sbit  PU_PD0_GPIO_PIN_CONTROL_204_bit at GPIO_PIN_CONTROL_204.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_204_bit at GPIO_PIN_CONTROL_204.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_204_bit at GPIO_PIN_CONTROL_204.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_204_bit at GPIO_PIN_CONTROL_204.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_204_bit at GPIO_PIN_CONTROL_204.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_204_bit at GPIO_PIN_CONTROL_204.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_204_bit at GPIO_PIN_CONTROL_204.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_204_bit at GPIO_PIN_CONTROL_204.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_204_bit at GPIO_PIN_CONTROL_204.B8;
    sbit  DIR_GPIO_PIN_CONTROL_204_bit at GPIO_PIN_CONTROL_204.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_204_bit at GPIO_PIN_CONTROL_204.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_204_bit at GPIO_PIN_CONTROL_204.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_204_bit at GPIO_PIN_CONTROL_204.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_204_bit at GPIO_PIN_CONTROL_204.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_204_bit at GPIO_PIN_CONTROL_204.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_204_bit at GPIO_PIN_CONTROL_204.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_205 absolute 0x40081214;
    sbit  PU_PD0_GPIO_PIN_CONTROL_205_bit at GPIO_PIN_CONTROL_205.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_205_bit at GPIO_PIN_CONTROL_205.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_205_bit at GPIO_PIN_CONTROL_205.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_205_bit at GPIO_PIN_CONTROL_205.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_205_bit at GPIO_PIN_CONTROL_205.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_205_bit at GPIO_PIN_CONTROL_205.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_205_bit at GPIO_PIN_CONTROL_205.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_205_bit at GPIO_PIN_CONTROL_205.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_205_bit at GPIO_PIN_CONTROL_205.B8;
    sbit  DIR_GPIO_PIN_CONTROL_205_bit at GPIO_PIN_CONTROL_205.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_205_bit at GPIO_PIN_CONTROL_205.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_205_bit at GPIO_PIN_CONTROL_205.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_205_bit at GPIO_PIN_CONTROL_205.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_205_bit at GPIO_PIN_CONTROL_205.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_205_bit at GPIO_PIN_CONTROL_205.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_205_bit at GPIO_PIN_CONTROL_205.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_206 absolute 0x40081218;
    sbit  PU_PD0_GPIO_PIN_CONTROL_206_bit at GPIO_PIN_CONTROL_206.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_206_bit at GPIO_PIN_CONTROL_206.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_206_bit at GPIO_PIN_CONTROL_206.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_206_bit at GPIO_PIN_CONTROL_206.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_206_bit at GPIO_PIN_CONTROL_206.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_206_bit at GPIO_PIN_CONTROL_206.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_206_bit at GPIO_PIN_CONTROL_206.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_206_bit at GPIO_PIN_CONTROL_206.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_206_bit at GPIO_PIN_CONTROL_206.B8;
    sbit  DIR_GPIO_PIN_CONTROL_206_bit at GPIO_PIN_CONTROL_206.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_206_bit at GPIO_PIN_CONTROL_206.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_206_bit at GPIO_PIN_CONTROL_206.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_206_bit at GPIO_PIN_CONTROL_206.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_206_bit at GPIO_PIN_CONTROL_206.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_206_bit at GPIO_PIN_CONTROL_206.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_206_bit at GPIO_PIN_CONTROL_206.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_207 absolute 0x4008121C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_207_bit at GPIO_PIN_CONTROL_207.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_207_bit at GPIO_PIN_CONTROL_207.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_207_bit at GPIO_PIN_CONTROL_207.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_207_bit at GPIO_PIN_CONTROL_207.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_207_bit at GPIO_PIN_CONTROL_207.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_207_bit at GPIO_PIN_CONTROL_207.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_207_bit at GPIO_PIN_CONTROL_207.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_207_bit at GPIO_PIN_CONTROL_207.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_207_bit at GPIO_PIN_CONTROL_207.B8;
    sbit  DIR_GPIO_PIN_CONTROL_207_bit at GPIO_PIN_CONTROL_207.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_207_bit at GPIO_PIN_CONTROL_207.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_207_bit at GPIO_PIN_CONTROL_207.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_207_bit at GPIO_PIN_CONTROL_207.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_207_bit at GPIO_PIN_CONTROL_207.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_207_bit at GPIO_PIN_CONTROL_207.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_207_bit at GPIO_PIN_CONTROL_207.B24;

sfr far unsigned long   volatile GPIO_PORT_210_217    absolute 0x40081220;
sfr far unsigned long   volatile GPIO_PIN_CONTROL_210 absolute 0x40081220;
    sbit  PU_PD0_GPIO_PIN_CONTROL_210_bit at GPIO_PIN_CONTROL_210.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_210_bit at GPIO_PIN_CONTROL_210.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_210_bit at GPIO_PIN_CONTROL_210.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_210_bit at GPIO_PIN_CONTROL_210.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_210_bit at GPIO_PIN_CONTROL_210.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_210_bit at GPIO_PIN_CONTROL_210.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_210_bit at GPIO_PIN_CONTROL_210.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_210_bit at GPIO_PIN_CONTROL_210.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_210_bit at GPIO_PIN_CONTROL_210.B8;
    sbit  DIR_GPIO_PIN_CONTROL_210_bit at GPIO_PIN_CONTROL_210.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_210_bit at GPIO_PIN_CONTROL_210.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_210_bit at GPIO_PIN_CONTROL_210.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_210_bit at GPIO_PIN_CONTROL_210.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_210_bit at GPIO_PIN_CONTROL_210.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_210_bit at GPIO_PIN_CONTROL_210.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_210_bit at GPIO_PIN_CONTROL_210.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_211 absolute 0x40081224;
    sbit  PU_PD0_GPIO_PIN_CONTROL_211_bit at GPIO_PIN_CONTROL_211.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_211_bit at GPIO_PIN_CONTROL_211.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_211_bit at GPIO_PIN_CONTROL_211.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_211_bit at GPIO_PIN_CONTROL_211.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_211_bit at GPIO_PIN_CONTROL_211.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_211_bit at GPIO_PIN_CONTROL_211.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_211_bit at GPIO_PIN_CONTROL_211.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_211_bit at GPIO_PIN_CONTROL_211.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_211_bit at GPIO_PIN_CONTROL_211.B8;
    sbit  DIR_GPIO_PIN_CONTROL_211_bit at GPIO_PIN_CONTROL_211.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_211_bit at GPIO_PIN_CONTROL_211.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_211_bit at GPIO_PIN_CONTROL_211.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_211_bit at GPIO_PIN_CONTROL_211.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_211_bit at GPIO_PIN_CONTROL_211.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_211_bit at GPIO_PIN_CONTROL_211.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_211_bit at GPIO_PIN_CONTROL_211.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_212 absolute 0x40081228;
    sbit  PU_PD0_GPIO_PIN_CONTROL_212_bit at GPIO_PIN_CONTROL_212.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_212_bit at GPIO_PIN_CONTROL_212.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_212_bit at GPIO_PIN_CONTROL_212.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_212_bit at GPIO_PIN_CONTROL_212.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_212_bit at GPIO_PIN_CONTROL_212.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_212_bit at GPIO_PIN_CONTROL_212.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_212_bit at GPIO_PIN_CONTROL_212.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_212_bit at GPIO_PIN_CONTROL_212.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_212_bit at GPIO_PIN_CONTROL_212.B8;
    sbit  DIR_GPIO_PIN_CONTROL_212_bit at GPIO_PIN_CONTROL_212.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_212_bit at GPIO_PIN_CONTROL_212.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_212_bit at GPIO_PIN_CONTROL_212.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_212_bit at GPIO_PIN_CONTROL_212.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_212_bit at GPIO_PIN_CONTROL_212.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_212_bit at GPIO_PIN_CONTROL_212.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_212_bit at GPIO_PIN_CONTROL_212.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_213 absolute 0x4008122C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_213_bit at GPIO_PIN_CONTROL_213.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_213_bit at GPIO_PIN_CONTROL_213.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_213_bit at GPIO_PIN_CONTROL_213.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_213_bit at GPIO_PIN_CONTROL_213.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_213_bit at GPIO_PIN_CONTROL_213.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_213_bit at GPIO_PIN_CONTROL_213.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_213_bit at GPIO_PIN_CONTROL_213.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_213_bit at GPIO_PIN_CONTROL_213.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_213_bit at GPIO_PIN_CONTROL_213.B8;
    sbit  DIR_GPIO_PIN_CONTROL_213_bit at GPIO_PIN_CONTROL_213.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_213_bit at GPIO_PIN_CONTROL_213.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_213_bit at GPIO_PIN_CONTROL_213.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_213_bit at GPIO_PIN_CONTROL_213.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_213_bit at GPIO_PIN_CONTROL_213.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_213_bit at GPIO_PIN_CONTROL_213.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_213_bit at GPIO_PIN_CONTROL_213.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_214 absolute 0x40081230;
    sbit  PU_PD0_GPIO_PIN_CONTROL_214_bit at GPIO_PIN_CONTROL_214.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_214_bit at GPIO_PIN_CONTROL_214.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_214_bit at GPIO_PIN_CONTROL_214.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_214_bit at GPIO_PIN_CONTROL_214.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_214_bit at GPIO_PIN_CONTROL_214.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_214_bit at GPIO_PIN_CONTROL_214.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_214_bit at GPIO_PIN_CONTROL_214.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_214_bit at GPIO_PIN_CONTROL_214.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_214_bit at GPIO_PIN_CONTROL_214.B8;
    sbit  DIR_GPIO_PIN_CONTROL_214_bit at GPIO_PIN_CONTROL_214.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_214_bit at GPIO_PIN_CONTROL_214.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_214_bit at GPIO_PIN_CONTROL_214.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_214_bit at GPIO_PIN_CONTROL_214.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_214_bit at GPIO_PIN_CONTROL_214.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_214_bit at GPIO_PIN_CONTROL_214.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_214_bit at GPIO_PIN_CONTROL_214.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_215 absolute 0x40081234;
    sbit  PU_PD0_GPIO_PIN_CONTROL_215_bit at GPIO_PIN_CONTROL_215.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_215_bit at GPIO_PIN_CONTROL_215.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_215_bit at GPIO_PIN_CONTROL_215.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_215_bit at GPIO_PIN_CONTROL_215.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_215_bit at GPIO_PIN_CONTROL_215.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_215_bit at GPIO_PIN_CONTROL_215.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_215_bit at GPIO_PIN_CONTROL_215.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_215_bit at GPIO_PIN_CONTROL_215.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_215_bit at GPIO_PIN_CONTROL_215.B8;
    sbit  DIR_GPIO_PIN_CONTROL_215_bit at GPIO_PIN_CONTROL_215.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_215_bit at GPIO_PIN_CONTROL_215.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_215_bit at GPIO_PIN_CONTROL_215.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_215_bit at GPIO_PIN_CONTROL_215.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_215_bit at GPIO_PIN_CONTROL_215.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_215_bit at GPIO_PIN_CONTROL_215.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_215_bit at GPIO_PIN_CONTROL_215.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_216 absolute 0x40081238;
    sbit  PU_PD0_GPIO_PIN_CONTROL_216_bit at GPIO_PIN_CONTROL_216.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_216_bit at GPIO_PIN_CONTROL_216.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_216_bit at GPIO_PIN_CONTROL_216.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_216_bit at GPIO_PIN_CONTROL_216.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_216_bit at GPIO_PIN_CONTROL_216.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_216_bit at GPIO_PIN_CONTROL_216.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_216_bit at GPIO_PIN_CONTROL_216.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_216_bit at GPIO_PIN_CONTROL_216.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_216_bit at GPIO_PIN_CONTROL_216.B8;
    sbit  DIR_GPIO_PIN_CONTROL_216_bit at GPIO_PIN_CONTROL_216.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_216_bit at GPIO_PIN_CONTROL_216.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_216_bit at GPIO_PIN_CONTROL_216.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_216_bit at GPIO_PIN_CONTROL_216.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_216_bit at GPIO_PIN_CONTROL_216.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_216_bit at GPIO_PIN_CONTROL_216.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_216_bit at GPIO_PIN_CONTROL_216.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_217 absolute 0x4008123C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_217_bit at GPIO_PIN_CONTROL_217.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_217_bit at GPIO_PIN_CONTROL_217.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_217_bit at GPIO_PIN_CONTROL_217.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_217_bit at GPIO_PIN_CONTROL_217.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_217_bit at GPIO_PIN_CONTROL_217.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_217_bit at GPIO_PIN_CONTROL_217.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_217_bit at GPIO_PIN_CONTROL_217.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_217_bit at GPIO_PIN_CONTROL_217.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_217_bit at GPIO_PIN_CONTROL_217.B8;
    sbit  DIR_GPIO_PIN_CONTROL_217_bit at GPIO_PIN_CONTROL_217.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_217_bit at GPIO_PIN_CONTROL_217.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_217_bit at GPIO_PIN_CONTROL_217.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_217_bit at GPIO_PIN_CONTROL_217.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_217_bit at GPIO_PIN_CONTROL_217.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_217_bit at GPIO_PIN_CONTROL_217.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_217_bit at GPIO_PIN_CONTROL_217.B24;

sfr far unsigned long   volatile GPIO_PORT_220_227    absolute 0x40081240;
sfr far unsigned long   volatile GPIO_PIN_CONTROL_220 absolute 0x40081240;
    sbit  PU_PD0_GPIO_PIN_CONTROL_220_bit at GPIO_PIN_CONTROL_220.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_220_bit at GPIO_PIN_CONTROL_220.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_220_bit at GPIO_PIN_CONTROL_220.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_220_bit at GPIO_PIN_CONTROL_220.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_220_bit at GPIO_PIN_CONTROL_220.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_220_bit at GPIO_PIN_CONTROL_220.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_220_bit at GPIO_PIN_CONTROL_220.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_220_bit at GPIO_PIN_CONTROL_220.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_220_bit at GPIO_PIN_CONTROL_220.B8;
    sbit  DIR_GPIO_PIN_CONTROL_220_bit at GPIO_PIN_CONTROL_220.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_220_bit at GPIO_PIN_CONTROL_220.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_220_bit at GPIO_PIN_CONTROL_220.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_220_bit at GPIO_PIN_CONTROL_220.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_220_bit at GPIO_PIN_CONTROL_220.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_220_bit at GPIO_PIN_CONTROL_220.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_220_bit at GPIO_PIN_CONTROL_220.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_221 absolute 0x40081244;
    sbit  PU_PD0_GPIO_PIN_CONTROL_221_bit at GPIO_PIN_CONTROL_221.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_221_bit at GPIO_PIN_CONTROL_221.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_221_bit at GPIO_PIN_CONTROL_221.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_221_bit at GPIO_PIN_CONTROL_221.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_221_bit at GPIO_PIN_CONTROL_221.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_221_bit at GPIO_PIN_CONTROL_221.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_221_bit at GPIO_PIN_CONTROL_221.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_221_bit at GPIO_PIN_CONTROL_221.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_221_bit at GPIO_PIN_CONTROL_221.B8;
    sbit  DIR_GPIO_PIN_CONTROL_221_bit at GPIO_PIN_CONTROL_221.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_221_bit at GPIO_PIN_CONTROL_221.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_221_bit at GPIO_PIN_CONTROL_221.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_221_bit at GPIO_PIN_CONTROL_221.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_221_bit at GPIO_PIN_CONTROL_221.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_221_bit at GPIO_PIN_CONTROL_221.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_221_bit at GPIO_PIN_CONTROL_221.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_222 absolute 0x40081248;
    sbit  PU_PD0_GPIO_PIN_CONTROL_222_bit at GPIO_PIN_CONTROL_222.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_222_bit at GPIO_PIN_CONTROL_222.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_222_bit at GPIO_PIN_CONTROL_222.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_222_bit at GPIO_PIN_CONTROL_222.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_222_bit at GPIO_PIN_CONTROL_222.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_222_bit at GPIO_PIN_CONTROL_222.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_222_bit at GPIO_PIN_CONTROL_222.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_222_bit at GPIO_PIN_CONTROL_222.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_222_bit at GPIO_PIN_CONTROL_222.B8;
    sbit  DIR_GPIO_PIN_CONTROL_222_bit at GPIO_PIN_CONTROL_222.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_222_bit at GPIO_PIN_CONTROL_222.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_222_bit at GPIO_PIN_CONTROL_222.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_222_bit at GPIO_PIN_CONTROL_222.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_222_bit at GPIO_PIN_CONTROL_222.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_222_bit at GPIO_PIN_CONTROL_222.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_222_bit at GPIO_PIN_CONTROL_222.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_223 absolute 0x4008124C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_223_bit at GPIO_PIN_CONTROL_223.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_223_bit at GPIO_PIN_CONTROL_223.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_223_bit at GPIO_PIN_CONTROL_223.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_223_bit at GPIO_PIN_CONTROL_223.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_223_bit at GPIO_PIN_CONTROL_223.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_223_bit at GPIO_PIN_CONTROL_223.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_223_bit at GPIO_PIN_CONTROL_223.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_223_bit at GPIO_PIN_CONTROL_223.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_223_bit at GPIO_PIN_CONTROL_223.B8;
    sbit  DIR_GPIO_PIN_CONTROL_223_bit at GPIO_PIN_CONTROL_223.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_223_bit at GPIO_PIN_CONTROL_223.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_223_bit at GPIO_PIN_CONTROL_223.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_223_bit at GPIO_PIN_CONTROL_223.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_223_bit at GPIO_PIN_CONTROL_223.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_223_bit at GPIO_PIN_CONTROL_223.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_223_bit at GPIO_PIN_CONTROL_223.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_224 absolute 0x40081250;
    sbit  PU_PD0_GPIO_PIN_CONTROL_224_bit at GPIO_PIN_CONTROL_224.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_224_bit at GPIO_PIN_CONTROL_224.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_224_bit at GPIO_PIN_CONTROL_224.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_224_bit at GPIO_PIN_CONTROL_224.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_224_bit at GPIO_PIN_CONTROL_224.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_224_bit at GPIO_PIN_CONTROL_224.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_224_bit at GPIO_PIN_CONTROL_224.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_224_bit at GPIO_PIN_CONTROL_224.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_224_bit at GPIO_PIN_CONTROL_224.B8;
    sbit  DIR_GPIO_PIN_CONTROL_224_bit at GPIO_PIN_CONTROL_224.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_224_bit at GPIO_PIN_CONTROL_224.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_224_bit at GPIO_PIN_CONTROL_224.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_224_bit at GPIO_PIN_CONTROL_224.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_224_bit at GPIO_PIN_CONTROL_224.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_224_bit at GPIO_PIN_CONTROL_224.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_224_bit at GPIO_PIN_CONTROL_224.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_225 absolute 0x40081254;
    sbit  PU_PD0_GPIO_PIN_CONTROL_225_bit at GPIO_PIN_CONTROL_225.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_225_bit at GPIO_PIN_CONTROL_225.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_225_bit at GPIO_PIN_CONTROL_225.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_225_bit at GPIO_PIN_CONTROL_225.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_225_bit at GPIO_PIN_CONTROL_225.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_225_bit at GPIO_PIN_CONTROL_225.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_225_bit at GPIO_PIN_CONTROL_225.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_225_bit at GPIO_PIN_CONTROL_225.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_225_bit at GPIO_PIN_CONTROL_225.B8;
    sbit  DIR_GPIO_PIN_CONTROL_225_bit at GPIO_PIN_CONTROL_225.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_225_bit at GPIO_PIN_CONTROL_225.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_225_bit at GPIO_PIN_CONTROL_225.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_225_bit at GPIO_PIN_CONTROL_225.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_225_bit at GPIO_PIN_CONTROL_225.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_225_bit at GPIO_PIN_CONTROL_225.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_225_bit at GPIO_PIN_CONTROL_225.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_226 absolute 0x40081258;
    sbit  PU_PD0_GPIO_PIN_CONTROL_226_bit at GPIO_PIN_CONTROL_226.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_226_bit at GPIO_PIN_CONTROL_226.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_226_bit at GPIO_PIN_CONTROL_226.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_226_bit at GPIO_PIN_CONTROL_226.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_226_bit at GPIO_PIN_CONTROL_226.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_226_bit at GPIO_PIN_CONTROL_226.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_226_bit at GPIO_PIN_CONTROL_226.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_226_bit at GPIO_PIN_CONTROL_226.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_226_bit at GPIO_PIN_CONTROL_226.B8;
    sbit  DIR_GPIO_PIN_CONTROL_226_bit at GPIO_PIN_CONTROL_226.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_226_bit at GPIO_PIN_CONTROL_226.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_226_bit at GPIO_PIN_CONTROL_226.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_226_bit at GPIO_PIN_CONTROL_226.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_226_bit at GPIO_PIN_CONTROL_226.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_226_bit at GPIO_PIN_CONTROL_226.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_226_bit at GPIO_PIN_CONTROL_226.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_227 absolute 0x4008125C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_227_bit at GPIO_PIN_CONTROL_227.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_227_bit at GPIO_PIN_CONTROL_227.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_227_bit at GPIO_PIN_CONTROL_227.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_227_bit at GPIO_PIN_CONTROL_227.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_227_bit at GPIO_PIN_CONTROL_227.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_227_bit at GPIO_PIN_CONTROL_227.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_227_bit at GPIO_PIN_CONTROL_227.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_227_bit at GPIO_PIN_CONTROL_227.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_227_bit at GPIO_PIN_CONTROL_227.B8;
    sbit  DIR_GPIO_PIN_CONTROL_227_bit at GPIO_PIN_CONTROL_227.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_227_bit at GPIO_PIN_CONTROL_227.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_227_bit at GPIO_PIN_CONTROL_227.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_227_bit at GPIO_PIN_CONTROL_227.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_227_bit at GPIO_PIN_CONTROL_227.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_227_bit at GPIO_PIN_CONTROL_227.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_227_bit at GPIO_PIN_CONTROL_227.B24;

sfr far unsigned long   volatile GPIO_PORT_230_237    absolute 0x40081260;
sfr far unsigned long   volatile GPIO_PIN_CONTROL_230 absolute 0x40081260;
    sbit  PU_PD0_GPIO_PIN_CONTROL_230_bit at GPIO_PIN_CONTROL_230.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_230_bit at GPIO_PIN_CONTROL_230.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_230_bit at GPIO_PIN_CONTROL_230.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_230_bit at GPIO_PIN_CONTROL_230.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_230_bit at GPIO_PIN_CONTROL_230.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_230_bit at GPIO_PIN_CONTROL_230.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_230_bit at GPIO_PIN_CONTROL_230.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_230_bit at GPIO_PIN_CONTROL_230.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_230_bit at GPIO_PIN_CONTROL_230.B8;
    sbit  DIR_GPIO_PIN_CONTROL_230_bit at GPIO_PIN_CONTROL_230.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_230_bit at GPIO_PIN_CONTROL_230.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_230_bit at GPIO_PIN_CONTROL_230.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_230_bit at GPIO_PIN_CONTROL_230.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_230_bit at GPIO_PIN_CONTROL_230.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_230_bit at GPIO_PIN_CONTROL_230.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_230_bit at GPIO_PIN_CONTROL_230.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_231 absolute 0x40081264;
    sbit  PU_PD0_GPIO_PIN_CONTROL_231_bit at GPIO_PIN_CONTROL_231.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_231_bit at GPIO_PIN_CONTROL_231.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_231_bit at GPIO_PIN_CONTROL_231.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_231_bit at GPIO_PIN_CONTROL_231.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_231_bit at GPIO_PIN_CONTROL_231.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_231_bit at GPIO_PIN_CONTROL_231.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_231_bit at GPIO_PIN_CONTROL_231.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_231_bit at GPIO_PIN_CONTROL_231.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_231_bit at GPIO_PIN_CONTROL_231.B8;
    sbit  DIR_GPIO_PIN_CONTROL_231_bit at GPIO_PIN_CONTROL_231.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_231_bit at GPIO_PIN_CONTROL_231.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_231_bit at GPIO_PIN_CONTROL_231.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_231_bit at GPIO_PIN_CONTROL_231.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_231_bit at GPIO_PIN_CONTROL_231.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_231_bit at GPIO_PIN_CONTROL_231.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_231_bit at GPIO_PIN_CONTROL_231.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_232 absolute 0x40081268;
    sbit  PU_PD0_GPIO_PIN_CONTROL_232_bit at GPIO_PIN_CONTROL_232.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_232_bit at GPIO_PIN_CONTROL_232.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_232_bit at GPIO_PIN_CONTROL_232.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_232_bit at GPIO_PIN_CONTROL_232.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_232_bit at GPIO_PIN_CONTROL_232.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_232_bit at GPIO_PIN_CONTROL_232.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_232_bit at GPIO_PIN_CONTROL_232.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_232_bit at GPIO_PIN_CONTROL_232.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_232_bit at GPIO_PIN_CONTROL_232.B8;
    sbit  DIR_GPIO_PIN_CONTROL_232_bit at GPIO_PIN_CONTROL_232.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_232_bit at GPIO_PIN_CONTROL_232.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_232_bit at GPIO_PIN_CONTROL_232.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_232_bit at GPIO_PIN_CONTROL_232.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_232_bit at GPIO_PIN_CONTROL_232.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_232_bit at GPIO_PIN_CONTROL_232.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_232_bit at GPIO_PIN_CONTROL_232.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_233 absolute 0x4008126C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_233_bit at GPIO_PIN_CONTROL_233.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_233_bit at GPIO_PIN_CONTROL_233.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_233_bit at GPIO_PIN_CONTROL_233.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_233_bit at GPIO_PIN_CONTROL_233.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_233_bit at GPIO_PIN_CONTROL_233.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_233_bit at GPIO_PIN_CONTROL_233.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_233_bit at GPIO_PIN_CONTROL_233.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_233_bit at GPIO_PIN_CONTROL_233.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_233_bit at GPIO_PIN_CONTROL_233.B8;
    sbit  DIR_GPIO_PIN_CONTROL_233_bit at GPIO_PIN_CONTROL_233.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_233_bit at GPIO_PIN_CONTROL_233.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_233_bit at GPIO_PIN_CONTROL_233.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_233_bit at GPIO_PIN_CONTROL_233.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_233_bit at GPIO_PIN_CONTROL_233.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_233_bit at GPIO_PIN_CONTROL_233.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_233_bit at GPIO_PIN_CONTROL_233.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_234 absolute 0x40081270;
    sbit  PU_PD0_GPIO_PIN_CONTROL_234_bit at GPIO_PIN_CONTROL_234.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_234_bit at GPIO_PIN_CONTROL_234.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_234_bit at GPIO_PIN_CONTROL_234.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_234_bit at GPIO_PIN_CONTROL_234.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_234_bit at GPIO_PIN_CONTROL_234.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_234_bit at GPIO_PIN_CONTROL_234.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_234_bit at GPIO_PIN_CONTROL_234.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_234_bit at GPIO_PIN_CONTROL_234.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_234_bit at GPIO_PIN_CONTROL_234.B8;
    sbit  DIR_GPIO_PIN_CONTROL_234_bit at GPIO_PIN_CONTROL_234.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_234_bit at GPIO_PIN_CONTROL_234.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_234_bit at GPIO_PIN_CONTROL_234.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_234_bit at GPIO_PIN_CONTROL_234.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_234_bit at GPIO_PIN_CONTROL_234.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_234_bit at GPIO_PIN_CONTROL_234.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_234_bit at GPIO_PIN_CONTROL_234.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_235 absolute 0x40081274;
    sbit  PU_PD0_GPIO_PIN_CONTROL_235_bit at GPIO_PIN_CONTROL_235.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_235_bit at GPIO_PIN_CONTROL_235.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_235_bit at GPIO_PIN_CONTROL_235.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_235_bit at GPIO_PIN_CONTROL_235.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_235_bit at GPIO_PIN_CONTROL_235.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_235_bit at GPIO_PIN_CONTROL_235.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_235_bit at GPIO_PIN_CONTROL_235.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_235_bit at GPIO_PIN_CONTROL_235.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_235_bit at GPIO_PIN_CONTROL_235.B8;
    sbit  DIR_GPIO_PIN_CONTROL_235_bit at GPIO_PIN_CONTROL_235.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_235_bit at GPIO_PIN_CONTROL_235.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_235_bit at GPIO_PIN_CONTROL_235.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_235_bit at GPIO_PIN_CONTROL_235.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_235_bit at GPIO_PIN_CONTROL_235.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_235_bit at GPIO_PIN_CONTROL_235.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_235_bit at GPIO_PIN_CONTROL_235.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_236 absolute 0x40081278;
    sbit  PU_PD0_GPIO_PIN_CONTROL_236_bit at GPIO_PIN_CONTROL_236.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_236_bit at GPIO_PIN_CONTROL_236.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_236_bit at GPIO_PIN_CONTROL_236.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_236_bit at GPIO_PIN_CONTROL_236.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_236_bit at GPIO_PIN_CONTROL_236.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_236_bit at GPIO_PIN_CONTROL_236.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_236_bit at GPIO_PIN_CONTROL_236.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_236_bit at GPIO_PIN_CONTROL_236.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_236_bit at GPIO_PIN_CONTROL_236.B8;
    sbit  DIR_GPIO_PIN_CONTROL_236_bit at GPIO_PIN_CONTROL_236.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_236_bit at GPIO_PIN_CONTROL_236.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_236_bit at GPIO_PIN_CONTROL_236.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_236_bit at GPIO_PIN_CONTROL_236.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_236_bit at GPIO_PIN_CONTROL_236.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_236_bit at GPIO_PIN_CONTROL_236.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_236_bit at GPIO_PIN_CONTROL_236.B24;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_237 absolute 0x4008127C;
    sbit  PU_PD0_GPIO_PIN_CONTROL_237_bit at GPIO_PIN_CONTROL_237.B0;
    sbit  PU_PD1_GPIO_PIN_CONTROL_237_bit at GPIO_PIN_CONTROL_237.B1;
    sbit  PWR2_GPIO_PIN_CONTROL_237_bit at GPIO_PIN_CONTROL_237.B2;
    sbit  PWR3_GPIO_PIN_CONTROL_237_bit at GPIO_PIN_CONTROL_237.B3;
    sbit  INT_DET4_GPIO_PIN_CONTROL_237_bit at GPIO_PIN_CONTROL_237.B4;
    sbit  INT_DET5_GPIO_PIN_CONTROL_237_bit at GPIO_PIN_CONTROL_237.B5;
    sbit  INT_DET6_GPIO_PIN_CONTROL_237_bit at GPIO_PIN_CONTROL_237.B6;
    sbit  EDGE_EN_GPIO_PIN_CONTROL_237_bit at GPIO_PIN_CONTROL_237.B7;
    sbit  BUFFER_GPIO_PIN_CONTROL_237_bit at GPIO_PIN_CONTROL_237.B8;
    sbit  DIR_GPIO_PIN_CONTROL_237_bit at GPIO_PIN_CONTROL_237.B9;
    sbit  OUTPUT_WRITE_EN_GPIO_PIN_CONTROL_237_bit at GPIO_PIN_CONTROL_237.B10;
    sbit  POLARITY_GPIO_PIN_CONTROL_237_bit at GPIO_PIN_CONTROL_237.B11;
    sbit  MUX12_GPIO_PIN_CONTROL_237_bit at GPIO_PIN_CONTROL_237.B12;
    sbit  MUX13_GPIO_PIN_CONTROL_237_bit at GPIO_PIN_CONTROL_237.B13;
    sbit  OUTPUT_ALT_GPIO_PIN_CONTROL_237_bit at GPIO_PIN_CONTROL_237.B16;
    sbit  INPUT_GPIO_PIN_CONTROL_237_bit at GPIO_PIN_CONTROL_237.B24;

sfr far unsigned long   volatile GPIO_OUTPUT0         absolute 0x40081280;
    sbit  GPIO_OUTPUT_PIN_000_bit at GPIO_OUTPUT0.B0;
    sbit  GPIO_OUTPUT_PIN_001_bit at GPIO_OUTPUT0.B1;
    sbit  GPIO_OUTPUT_PIN_002_bit at GPIO_OUTPUT0.B2;
    sbit  GPIO_OUTPUT_PIN_003_bit at GPIO_OUTPUT0.B3;
    sbit  GPIO_OUTPUT_PIN_004_bit at GPIO_OUTPUT0.B4;
    sbit  GPIO_OUTPUT_PIN_005_bit at GPIO_OUTPUT0.B5;
    sbit  GPIO_OUTPUT_PIN_006_bit at GPIO_OUTPUT0.B6;
    sbit  GPIO_OUTPUT_PIN_007_bit at GPIO_OUTPUT0.B7;
    
    sbit  GPIO_OUTPUT_PIN_010_bit at GPIO_OUTPUT0.B8;
    sbit  GPIO_OUTPUT_PIN_011_bit at GPIO_OUTPUT0.B9;
    sbit  GPIO_OUTPUT_PIN_012_bit at GPIO_OUTPUT0.B10;
    sbit  GPIO_OUTPUT_PIN_013_bit at GPIO_OUTPUT0.B11;
    sbit  GPIO_OUTPUT_PIN_014_bit at GPIO_OUTPUT0.B12;
    sbit  GPIO_OUTPUT_PIN_015_bit at GPIO_OUTPUT0.B13;
    sbit  GPIO_OUTPUT_PIN_016_bit at GPIO_OUTPUT0.B14;
    sbit  GPIO_OUTPUT_PIN_017_bit at GPIO_OUTPUT0.B15;
    
    sbit  GPIO_OUTPUT_PIN_020_bit at GPIO_OUTPUT0.B16;
    sbit  GPIO_OUTPUT_PIN_021_bit at GPIO_OUTPUT0.B17;
    sbit  GPIO_OUTPUT_PIN_022_bit at GPIO_OUTPUT0.B18;
    sbit  GPIO_OUTPUT_PIN_023_bit at GPIO_OUTPUT0.B19;
    sbit  GPIO_OUTPUT_PIN_024_bit at GPIO_OUTPUT0.B20;
    sbit  GPIO_OUTPUT_PIN_025_bit at GPIO_OUTPUT0.B21;
    sbit  GPIO_OUTPUT_PIN_026_bit at GPIO_OUTPUT0.B22;
    sbit  GPIO_OUTPUT_PIN_027_bit at GPIO_OUTPUT0.B23;
    
    sbit  GPIO_OUTPUT_PIN_030_bit at GPIO_OUTPUT0.B24;
    sbit  GPIO_OUTPUT_PIN_031_bit at GPIO_OUTPUT0.B25;
    sbit  GPIO_OUTPUT_PIN_032_bit at GPIO_OUTPUT0.B26;
    sbit  GPIO_OUTPUT_PIN_033_bit at GPIO_OUTPUT0.B27;
    sbit  GPIO_OUTPUT_PIN_034_bit at GPIO_OUTPUT0.B28;
    sbit  GPIO_OUTPUT_PIN_035_bit at GPIO_OUTPUT0.B29;
    sbit  GPIO_OUTPUT_PIN_036_bit at GPIO_OUTPUT0.B30;
    sbit  GPIO_OUTPUT_PIN_037_bit at GPIO_OUTPUT0.B31;

sfr far unsigned long   volatile GPIO_OUTPUT1         absolute 0x40081284;
    sbit  GPIO_OUTPUT_PIN_040_bit at GPIO_OUTPUT1.B0;
    sbit  GPIO_OUTPUT_PIN_041_bit at GPIO_OUTPUT1.B1;
    sbit  GPIO_OUTPUT_PIN_042_bit at GPIO_OUTPUT1.B2;
    sbit  GPIO_OUTPUT_PIN_043_bit at GPIO_OUTPUT1.B3;
    sbit  GPIO_OUTPUT_PIN_044_bit at GPIO_OUTPUT1.B4;
    sbit  GPIO_OUTPUT_PIN_045_bit at GPIO_OUTPUT1.B5;
    sbit  GPIO_OUTPUT_PIN_046_bit at GPIO_OUTPUT1.B6;
    sbit  GPIO_OUTPUT_PIN_047_bit at GPIO_OUTPUT1.B7;
    sbit  GPIO_OUTPUT_PIN_050_bit at GPIO_OUTPUT1.B8;
    sbit  GPIO_OUTPUT_PIN_051_bit at GPIO_OUTPUT1.B9;
    sbit  GPIO_OUTPUT_PIN_052_bit at GPIO_OUTPUT1.B10;
    sbit  GPIO_OUTPUT_PIN_053_bit at GPIO_OUTPUT1.B11;
    sbit  GPIO_OUTPUT_PIN_054_bit at GPIO_OUTPUT1.B12;
    sbit  GPIO_OUTPUT_PIN_055_bit at GPIO_OUTPUT1.B13;
    sbit  GPIO_OUTPUT_PIN_056_bit at GPIO_OUTPUT1.B14;
    sbit  GPIO_OUTPUT_PIN_057_bit at GPIO_OUTPUT1.B15;
    sbit  GPIO_OUTPUT_PIN_060_bit at GPIO_OUTPUT1.B16;
    sbit  GPIO_OUTPUT_PIN_061_bit at GPIO_OUTPUT1.B17;
    sbit  GPIO_OUTPUT_PIN_062_bit at GPIO_OUTPUT1.B18;
    sbit  GPIO_OUTPUT_PIN_063_bit at GPIO_OUTPUT1.B19;
    sbit  GPIO_OUTPUT_PIN_064_bit at GPIO_OUTPUT1.B20;
    sbit  GPIO_OUTPUT_PIN_065_bit at GPIO_OUTPUT1.B21;
    sbit  GPIO_OUTPUT_PIN_066_bit at GPIO_OUTPUT1.B22;
    sbit  GPIO_OUTPUT_PIN_067_bit at GPIO_OUTPUT1.B23;

sfr far unsigned long   volatile GPIO_OUTPUT2         absolute 0x40081288;
    sbit  GPIO_OUTPUT_PIN_100_bit at GPIO_OUTPUT2.B0;
    sbit  GPIO_OUTPUT_PIN_101_bit at GPIO_OUTPUT2.B1;
    sbit  GPIO_OUTPUT_PIN_102_bit at GPIO_OUTPUT2.B2;
    sbit  GPIO_OUTPUT_PIN_103_bit at GPIO_OUTPUT2.B3;
    sbit  GPIO_OUTPUT_PIN_104_bit at GPIO_OUTPUT2.B4;
    sbit  GPIO_OUTPUT_PIN_105_bit at GPIO_OUTPUT2.B5;
    sbit  GPIO_OUTPUT_PIN_106_bit at GPIO_OUTPUT2.B6;
    sbit  GPIO_OUTPUT_PIN_107_bit at GPIO_OUTPUT2.B7;
    
    sbit  GPIO_OUTPUT_PIN_110_bit at GPIO_OUTPUT2.B8;
    sbit  GPIO_OUTPUT_PIN_111_bit at GPIO_OUTPUT2.B9;
    sbit  GPIO_OUTPUT_PIN_112_bit at GPIO_OUTPUT2.B10;
    sbit  GPIO_OUTPUT_PIN_113_bit at GPIO_OUTPUT2.B11;
    sbit  GPIO_OUTPUT_PIN_114_bit at GPIO_OUTPUT2.B12;
    sbit  GPIO_OUTPUT_PIN_115_bit at GPIO_OUTPUT2.B13;
    sbit  GPIO_OUTPUT_PIN_116_bit at GPIO_OUTPUT2.B14;
    sbit  GPIO_OUTPUT_PIN_117_bit at GPIO_OUTPUT2.B15;
    
    sbit  GPIO_OUTPUT_PIN_120_bit at GPIO_OUTPUT2.B16;
    sbit  GPIO_OUTPUT_PIN_121_bit at GPIO_OUTPUT2.B17;
    sbit  GPIO_OUTPUT_PIN_122_bit at GPIO_OUTPUT2.B18;
    sbit  GPIO_OUTPUT_PIN_123_bit at GPIO_OUTPUT2.B19;
    sbit  GPIO_OUTPUT_PIN_124_bit at GPIO_OUTPUT2.B20;
    sbit  GPIO_OUTPUT_PIN_125_bit at GPIO_OUTPUT2.B21;
    sbit  GPIO_OUTPUT_PIN_126_bit at GPIO_OUTPUT2.B22;
    sbit  GPIO_OUTPUT_PIN_127_bit at GPIO_OUTPUT2.B23;
    
    sbit  GPIO_OUTPUT_PIN_130_bit at GPIO_OUTPUT2.B24;
    sbit  GPIO_OUTPUT_PIN_131_bit at GPIO_OUTPUT2.B25;
    sbit  GPIO_OUTPUT_PIN_132_bit at GPIO_OUTPUT2.B26;
    sbit  GPIO_OUTPUT_PIN_133_bit at GPIO_OUTPUT2.B27;
    sbit  GPIO_OUTPUT_PIN_134_bit at GPIO_OUTPUT2.B28;
    sbit  GPIO_OUTPUT_PIN_135_bit at GPIO_OUTPUT2.B29;
    sbit  GPIO_OUTPUT_PIN_136_bit at GPIO_OUTPUT2.B30;
    sbit  GPIO_OUTPUT_PIN_137_bit at GPIO_OUTPUT2.B31;

sfr far unsigned long   volatile GPIO_OUTPUT3         absolute 0x4008128C;
    sbit  GPIO_OUTPUT_PIN_140_bit at GPIO_OUTPUT3.B0;
    sbit  GPIO_OUTPUT_PIN_141_bit at GPIO_OUTPUT3.B1;
    sbit  GPIO_OUTPUT_PIN_142_bit at GPIO_OUTPUT3.B2;
    sbit  GPIO_OUTPUT_PIN_143_bit at GPIO_OUTPUT3.B3;
    sbit  GPIO_OUTPUT_PIN_144_bit at GPIO_OUTPUT3.B4;
    sbit  GPIO_OUTPUT_PIN_145_bit at GPIO_OUTPUT3.B5;
    sbit  GPIO_OUTPUT_PIN_146_bit at GPIO_OUTPUT3.B6;
    sbit  GPIO_OUTPUT_PIN_147_bit at GPIO_OUTPUT3.B7;
    sbit  GPIO_OUTPUT_PIN_150_bit at GPIO_OUTPUT3.B8;
    sbit  GPIO_OUTPUT_PIN_151_bit at GPIO_OUTPUT3.B9;
    sbit  GPIO_OUTPUT_PIN_152_bit at GPIO_OUTPUT3.B10;
    sbit  GPIO_OUTPUT_PIN_153_bit at GPIO_OUTPUT3.B11;
    sbit  GPIO_OUTPUT_PIN_154_bit at GPIO_OUTPUT3.B12;
    sbit  GPIO_OUTPUT_PIN_155_bit at GPIO_OUTPUT3.B13;
    sbit  GPIO_OUTPUT_PIN_156_bit at GPIO_OUTPUT3.B14;
    sbit  GPIO_OUTPUT_PIN_157_bit at GPIO_OUTPUT3.B15;
    sbit  GPIO_OUTPUT_PIN_160_bit at GPIO_OUTPUT3.B16;
    sbit  GPIO_OUTPUT_PIN_161_bit at GPIO_OUTPUT3.B17;
    sbit  GPIO_OUTPUT_PIN_162_bit at GPIO_OUTPUT3.B18;
    sbit  GPIO_OUTPUT_PIN_163_bit at GPIO_OUTPUT3.B19;
    sbit  GPIO_OUTPUT_PIN_164_bit at GPIO_OUTPUT3.B20;
    sbit  GPIO_OUTPUT_PIN_165_bit at GPIO_OUTPUT3.B21;
    sbit  GPIO_OUTPUT_PIN_166_bit at GPIO_OUTPUT3.B22;
    sbit  GPIO_OUTPUT_PIN_167_bit at GPIO_OUTPUT3.B23;

sfr far unsigned long   volatile GPIO_OUTPUT4         absolute 0x40081290;
    sbit  GPIO_OUTPUT_PIN_200_bit at GPIO_OUTPUT4.B0;
    sbit  GPIO_OUTPUT_PIN_201_bit at GPIO_OUTPUT4.B1;
    sbit  GPIO_OUTPUT_PIN_202_bit at GPIO_OUTPUT4.B2;
    sbit  GPIO_OUTPUT_PIN_203_bit at GPIO_OUTPUT4.B3;
    sbit  GPIO_OUTPUT_PIN_204_bit at GPIO_OUTPUT4.B4;
    sbit  GPIO_OUTPUT_PIN_205_bit at GPIO_OUTPUT4.B5;
    sbit  GPIO_OUTPUT_PIN_206_bit at GPIO_OUTPUT4.B6;
    sbit  GPIO_OUTPUT_PIN_207_bit at GPIO_OUTPUT4.B7;
    sbit  GPIO_OUTPUT_PIN_210_bit at GPIO_OUTPUT4.B8;
    sbit  GPIO_OUTPUT_PIN_211_bit at GPIO_OUTPUT4.B9;
    sbit  GPIO_OUTPUT_PIN_212_bit at GPIO_OUTPUT4.B10;
    sbit  GPIO_OUTPUT_PIN_213_bit at GPIO_OUTPUT4.B11;
    sbit  GPIO_OUTPUT_PIN_214_bit at GPIO_OUTPUT4.B12;
    sbit  GPIO_OUTPUT_PIN_215_bit at GPIO_OUTPUT4.B13;
    sbit  GPIO_OUTPUT_PIN_216_bit at GPIO_OUTPUT4.B14;
    sbit  GPIO_OUTPUT_PIN_217_bit at GPIO_OUTPUT4.B15;
    sbit  GPIO_OUTPUT_PIN_220_bit at GPIO_OUTPUT4.B16;
    sbit  GPIO_OUTPUT_PIN_221_bit at GPIO_OUTPUT4.B17;
    sbit  GPIO_OUTPUT_PIN_222_bit at GPIO_OUTPUT4.B18;
    sbit  GPIO_OUTPUT_PIN_223_bit at GPIO_OUTPUT4.B19;
    sbit  GPIO_OUTPUT_PIN_224_bit at GPIO_OUTPUT4.B20;
    sbit  GPIO_OUTPUT_PIN_225_bit at GPIO_OUTPUT4.B21;
    sbit  GPIO_OUTPUT_PIN_226_bit at GPIO_OUTPUT4.B22;
    sbit  GPIO_OUTPUT_PIN_227_bit at GPIO_OUTPUT4.B23;
    sbit  GPIO_OUTPUT_PIN_230_bit at GPIO_OUTPUT4.B24;
    sbit  GPIO_OUTPUT_PIN_231_bit at GPIO_OUTPUT4.B25;
    sbit  GPIO_OUTPUT_PIN_232_bit at GPIO_OUTPUT4.B26;
    sbit  GPIO_OUTPUT_PIN_233_bit at GPIO_OUTPUT4.B27;
    sbit  GPIO_OUTPUT_PIN_234_bit at GPIO_OUTPUT4.B28;
    sbit  GPIO_OUTPUT_PIN_235_bit at GPIO_OUTPUT4.B29;
    sbit  GPIO_OUTPUT_PIN_236_bit at GPIO_OUTPUT4.B30;
    sbit  GPIO_OUTPUT_PIN_237_bit at GPIO_OUTPUT4.B31;

sfr far unsigned long   volatile GPIO_INPUT0          absolute 0x40081300;
    sbit  GPIO_INPUT_PIN_000_bit at GPIO_INPUT0.B0;
    sbit  GPIO_INPUT_PIN_001_bit at GPIO_INPUT0.B1;
    sbit  GPIO_INPUT_PIN_002_bit at GPIO_INPUT0.B2;
    sbit  GPIO_INPUT_PIN_003_bit at GPIO_INPUT0.B3;
    sbit  GPIO_INPUT_PIN_004_bit at GPIO_INPUT0.B4;
    sbit  GPIO_INPUT_PIN_005_bit at GPIO_INPUT0.B5;
    sbit  GPIO_INPUT_PIN_006_bit at GPIO_INPUT0.B6;
    sbit  GPIO_INPUT_PIN_007_bit at GPIO_INPUT0.B7;
    sbit  GPIO_INPUT_PIN_010_bit at GPIO_INPUT0.B8;
    sbit  GPIO_INPUT_PIN_011_bit at GPIO_INPUT0.B9;
    sbit  GPIO_INPUT_PIN_012_bit at GPIO_INPUT0.B10;
    sbit  GPIO_INPUT_PIN_013_bit at GPIO_INPUT0.B11;
    sbit  GPIO_INPUT_PIN_014_bit at GPIO_INPUT0.B12;
    sbit  GPIO_INPUT_PIN_015_bit at GPIO_INPUT0.B13;
    sbit  GPIO_INPUT_PIN_016_bit at GPIO_INPUT0.B14;
    sbit  GPIO_INPUT_PIN_017_bit at GPIO_INPUT0.B15;
    sbit  GPIO_INPUT_PIN_020_bit at GPIO_INPUT0.B16;
    sbit  GPIO_INPUT_PIN_021_bit at GPIO_INPUT0.B17;
    sbit  GPIO_INPUT_PIN_022_bit at GPIO_INPUT0.B18;
    sbit  GPIO_INPUT_PIN_023_bit at GPIO_INPUT0.B19;
    sbit  GPIO_INPUT_PIN_024_bit at GPIO_INPUT0.B20;
    sbit  GPIO_INPUT_PIN_025_bit at GPIO_INPUT0.B21;
    sbit  GPIO_INPUT_PIN_026_bit at GPIO_INPUT0.B22;
    sbit  GPIO_INPUT_PIN_027_bit at GPIO_INPUT0.B23;
    sbit  GPIO_INPUT_PIN_030_bit at GPIO_INPUT0.B24;
    sbit  GPIO_INPUT_PIN_031_bit at GPIO_INPUT0.B25;
    sbit  GPIO_INPUT_PIN_032_bit at GPIO_INPUT0.B26;
    sbit  GPIO_INPUT_PIN_033_bit at GPIO_INPUT0.B27;
    sbit  GPIO_INPUT_PIN_034_bit at GPIO_INPUT0.B28;
    sbit  GPIO_INPUT_PIN_035_bit at GPIO_INPUT0.B29;
    sbit  GPIO_INPUT_PIN_036_bit at GPIO_INPUT0.B30;
    sbit  GPIO_INPUT_PIN_037_bit at GPIO_INPUT0.B31;
    
sfr far unsigned long   volatile GPIO_INPUT1          absolute 0x40081304;
    sbit  GPIO_INPUT_PIN_040_bit at GPIO_INPUT1.B0;
    sbit  GPIO_INPUT_PIN_041_bit at GPIO_INPUT1.B1;
    sbit  GPIO_INPUT_PIN_042_bit at GPIO_INPUT1.B2;
    sbit  GPIO_INPUT_PIN_043_bit at GPIO_INPUT1.B3;
    sbit  GPIO_INPUT_PIN_044_bit at GPIO_INPUT1.B4;
    sbit  GPIO_INPUT_PIN_045_bit at GPIO_INPUT1.B5;
    sbit  GPIO_INPUT_PIN_046_bit at GPIO_INPUT1.B6;
    sbit  GPIO_INPUT_PIN_047_bit at GPIO_INPUT1.B7;
    sbit  GPIO_INPUT_PIN_050_bit at GPIO_INPUT1.B8;
    sbit  GPIO_INPUT_PIN_051_bit at GPIO_INPUT1.B9;
    sbit  GPIO_INPUT_PIN_052_bit at GPIO_INPUT1.B10;
    sbit  GPIO_INPUT_PIN_053_bit at GPIO_INPUT1.B11;
    sbit  GPIO_INPUT_PIN_054_bit at GPIO_INPUT1.B12;
    sbit  GPIO_INPUT_PIN_055_bit at GPIO_INPUT1.B13;
    sbit  GPIO_INPUT_PIN_056_bit at GPIO_INPUT1.B14;
    sbit  GPIO_INPUT_PIN_057_bit at GPIO_INPUT1.B15;
    sbit  GPIO_INPUT_PIN_060_bit at GPIO_INPUT1.B16;
    sbit  GPIO_INPUT_PIN_061_bit at GPIO_INPUT1.B17;
    sbit  GPIO_INPUT_PIN_062_bit at GPIO_INPUT1.B18;
    sbit  GPIO_INPUT_PIN_063_bit at GPIO_INPUT1.B19;
    sbit  GPIO_INPUT_PIN_064_bit at GPIO_INPUT1.B20;
    sbit  GPIO_INPUT_PIN_065_bit at GPIO_INPUT1.B21;
    sbit  GPIO_INPUT_PIN_066_bit at GPIO_INPUT1.B22;
    sbit  GPIO_INPUT_PIN_067_bit at GPIO_INPUT1.B23;
    
sfr far unsigned long   volatile GPIO_INPUT2          absolute 0x40081308;
    sbit  GPIO_INPUT_PIN_100_bit at GPIO_INPUT2.B0;
    sbit  GPIO_INPUT_PIN_101_bit at GPIO_INPUT2.B1;
    sbit  GPIO_INPUT_PIN_102_bit at GPIO_INPUT2.B2;
    sbit  GPIO_INPUT_PIN_103_bit at GPIO_INPUT2.B3;
    sbit  GPIO_INPUT_PIN_104_bit at GPIO_INPUT2.B4;
    sbit  GPIO_INPUT_PIN_105_bit at GPIO_INPUT2.B5;
    sbit  GPIO_INPUT_PIN_106_bit at GPIO_INPUT2.B6;
    sbit  GPIO_INPUT_PIN_107_bit at GPIO_INPUT2.B7;
    sbit  GPIO_INPUT_PIN_110_bit at GPIO_INPUT2.B8;
    sbit  GPIO_INPUT_PIN_111_bit at GPIO_INPUT2.B9;
    sbit  GPIO_INPUT_PIN_112_bit at GPIO_INPUT2.B10;
    sbit  GPIO_INPUT_PIN_113_bit at GPIO_INPUT2.B11;
    sbit  GPIO_INPUT_PIN_114_bit at GPIO_INPUT2.B12;
    sbit  GPIO_INPUT_PIN_115_bit at GPIO_INPUT2.B13;
    sbit  GPIO_INPUT_PIN_116_bit at GPIO_INPUT2.B14;
    sbit  GPIO_INPUT_PIN_117_bit at GPIO_INPUT2.B15;
    sbit  GPIO_INPUT_PIN_120_bit at GPIO_INPUT2.B16;
    sbit  GPIO_INPUT_PIN_121_bit at GPIO_INPUT2.B17;
    sbit  GPIO_INPUT_PIN_122_bit at GPIO_INPUT2.B18;
    sbit  GPIO_INPUT_PIN_123_bit at GPIO_INPUT2.B19;
    sbit  GPIO_INPUT_PIN_124_bit at GPIO_INPUT2.B20;
    sbit  GPIO_INPUT_PIN_125_bit at GPIO_INPUT2.B21;
    sbit  GPIO_INPUT_PIN_126_bit at GPIO_INPUT2.B22;
    sbit  GPIO_INPUT_PIN_127_bit at GPIO_INPUT2.B23;
    sbit  GPIO_INPUT_PIN_130_bit at GPIO_INPUT2.B24;
    sbit  GPIO_INPUT_PIN_131_bit at GPIO_INPUT2.B25;
    sbit  GPIO_INPUT_PIN_132_bit at GPIO_INPUT2.B26;
    sbit  GPIO_INPUT_PIN_133_bit at GPIO_INPUT2.B27;
    sbit  GPIO_INPUT_PIN_134_bit at GPIO_INPUT2.B28;
    sbit  GPIO_INPUT_PIN_135_bit at GPIO_INPUT2.B29;
    sbit  GPIO_INPUT_PIN_136_bit at GPIO_INPUT2.B30;
    sbit  GPIO_INPUT_PIN_137_bit at GPIO_INPUT2.B31;
    
sfr far unsigned long   volatile GPIO_INPUT3          absolute 0x4008130C;
    sbit  GPIO_INPUT_PIN_140_bit at GPIO_INPUT3.B0;
    sbit  GPIO_INPUT_PIN_141_bit at GPIO_INPUT3.B1;
    sbit  GPIO_INPUT_PIN_142_bit at GPIO_INPUT3.B2;
    sbit  GPIO_INPUT_PIN_143_bit at GPIO_INPUT3.B3;
    sbit  GPIO_INPUT_PIN_144_bit at GPIO_INPUT3.B4;
    sbit  GPIO_INPUT_PIN_145_bit at GPIO_INPUT3.B5;
    sbit  GPIO_INPUT_PIN_146_bit at GPIO_INPUT3.B6;
    sbit  GPIO_INPUT_PIN_147_bit at GPIO_INPUT3.B7;
    sbit  GPIO_INPUT_PIN_150_bit at GPIO_INPUT3.B8;
    sbit  GPIO_INPUT_PIN_151_bit at GPIO_INPUT3.B9;
    sbit  GPIO_INPUT_PIN_152_bit at GPIO_INPUT3.B10;
    sbit  GPIO_INPUT_PIN_153_bit at GPIO_INPUT3.B11;
    sbit  GPIO_INPUT_PIN_154_bit at GPIO_INPUT3.B12;
    sbit  GPIO_INPUT_PIN_155_bit at GPIO_INPUT3.B13;
    sbit  GPIO_INPUT_PIN_156_bit at GPIO_INPUT3.B14;
    sbit  GPIO_INPUT_PIN_157_bit at GPIO_INPUT3.B15;
    sbit  GPIO_INPUT_PIN_160_bit at GPIO_INPUT3.B16;
    sbit  GPIO_INPUT_PIN_161_bit at GPIO_INPUT3.B17;
    sbit  GPIO_INPUT_PIN_162_bit at GPIO_INPUT3.B18;
    sbit  GPIO_INPUT_PIN_163_bit at GPIO_INPUT3.B19;
    sbit  GPIO_INPUT_PIN_164_bit at GPIO_INPUT3.B20;
    sbit  GPIO_INPUT_PIN_165_bit at GPIO_INPUT3.B21;
    sbit  GPIO_INPUT_PIN_166_bit at GPIO_INPUT3.B22;
    sbit  GPIO_INPUT_PIN_167_bit at GPIO_INPUT3.B23;
    
sfr far unsigned long   volatile GPIO_INPUT4          absolute 0x40081310;
    sbit  GPIO_INPUT_PIN_200_bit at GPIO_INPUT4.B0;
    sbit  GPIO_INPUT_PIN_201_bit at GPIO_INPUT4.B1;
    sbit  GPIO_INPUT_PIN_202_bit at GPIO_INPUT4.B2;
    sbit  GPIO_INPUT_PIN_203_bit at GPIO_INPUT4.B3;
    sbit  GPIO_INPUT_PIN_204_bit at GPIO_INPUT4.B4;
    sbit  GPIO_INPUT_PIN_205_bit at GPIO_INPUT4.B5;
    sbit  GPIO_INPUT_PIN_206_bit at GPIO_INPUT4.B6;
    sbit  GPIO_INPUT_PIN_207_bit at GPIO_INPUT4.B7;
    sbit  GPIO_INPUT_PIN_210_bit at GPIO_INPUT4.B8;
    sbit  GPIO_INPUT_PIN_211_bit at GPIO_INPUT4.B9;
    sbit  GPIO_INPUT_PIN_212_bit at GPIO_INPUT4.B10;
    sbit  GPIO_INPUT_PIN_213_bit at GPIO_INPUT4.B11;
    sbit  GPIO_INPUT_PIN_214_bit at GPIO_INPUT4.B12;
    sbit  GPIO_INPUT_PIN_215_bit at GPIO_INPUT4.B13;
    sbit  GPIO_INPUT_PIN_216_bit at GPIO_INPUT4.B14;
    sbit  GPIO_INPUT_PIN_217_bit at GPIO_INPUT4.B15;
    sbit  GPIO_INPUT_PIN_220_bit at GPIO_INPUT4.B16;
    sbit  GPIO_INPUT_PIN_221_bit at GPIO_INPUT4.B17;
    sbit  GPIO_INPUT_PIN_222_bit at GPIO_INPUT4.B18;
    sbit  GPIO_INPUT_PIN_223_bit at GPIO_INPUT4.B19;
    sbit  GPIO_INPUT_PIN_224_bit at GPIO_INPUT4.B20;
    sbit  GPIO_INPUT_PIN_225_bit at GPIO_INPUT4.B21;
    sbit  GPIO_INPUT_PIN_226_bit at GPIO_INPUT4.B22;
    sbit  GPIO_INPUT_PIN_227_bit at GPIO_INPUT4.B23;
    sbit  GPIO_INPUT_PIN_230_bit at GPIO_INPUT4.B24;
    sbit  GPIO_INPUT_PIN_231_bit at GPIO_INPUT4.B25;
    sbit  GPIO_INPUT_PIN_232_bit at GPIO_INPUT4.B26;
    sbit  GPIO_INPUT_PIN_233_bit at GPIO_INPUT4.B27;
    sbit  GPIO_INPUT_PIN_234_bit at GPIO_INPUT4.B28;
    sbit  GPIO_INPUT_PIN_235_bit at GPIO_INPUT4.B29;
    sbit  GPIO_INPUT_PIN_236_bit at GPIO_INPUT4.B30;
    sbit  GPIO_INPUT_PIN_237_bit at GPIO_INPUT4.B31;
    
sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_000 absolute 0x40081500;
    const register unsigned short int SLEW_RATE = 0;
    sbit  SLEW_RATE_bit at GPIO_PIN_CONTROL_2_000.B0;
    const register unsigned short int DRIVE_STRENGTH4 = 4;
    sbit  DRIVE_STRENGTH4_bit at GPIO_PIN_CONTROL_2_000.B4;
    const register unsigned short int DRIVE_STRENGTH5 = 5;
    sbit  DRIVE_STRENGTH5_bit at GPIO_PIN_CONTROL_2_000.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_001 absolute 0x40081504;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_001_bit at GPIO_PIN_CONTROL_2_001.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_001_bit at GPIO_PIN_CONTROL_2_001.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_001_bit at GPIO_PIN_CONTROL_2_001.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_002 absolute 0x40081508;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_002_bit at GPIO_PIN_CONTROL_2_002.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_002_bit at GPIO_PIN_CONTROL_2_002.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_002_bit at GPIO_PIN_CONTROL_2_002.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_003 absolute 0x4008150C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_003_bit at GPIO_PIN_CONTROL_2_003.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_003_bit at GPIO_PIN_CONTROL_2_003.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_003_bit at GPIO_PIN_CONTROL_2_003.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_004 absolute 0x40081510;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_004_bit at GPIO_PIN_CONTROL_2_004.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_004_bit at GPIO_PIN_CONTROL_2_004.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_004_bit at GPIO_PIN_CONTROL_2_004.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_005 absolute 0x40081514;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_005_bit at GPIO_PIN_CONTROL_2_005.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_005_bit at GPIO_PIN_CONTROL_2_005.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_005_bit at GPIO_PIN_CONTROL_2_005.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_006 absolute 0x40081518;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_006_bit at GPIO_PIN_CONTROL_2_006.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_006_bit at GPIO_PIN_CONTROL_2_006.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_006_bit at GPIO_PIN_CONTROL_2_006.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_007 absolute 0x4008151C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_007_bit at GPIO_PIN_CONTROL_2_007.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_007_bit at GPIO_PIN_CONTROL_2_007.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_007_bit at GPIO_PIN_CONTROL_2_007.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_010 absolute 0x40081520;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_010_bit at GPIO_PIN_CONTROL_2_010.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_010_bit at GPIO_PIN_CONTROL_2_010.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_010_bit at GPIO_PIN_CONTROL_2_010.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_011 absolute 0x40081524;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_011_bit at GPIO_PIN_CONTROL_2_011.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_011_bit at GPIO_PIN_CONTROL_2_011.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_011_bit at GPIO_PIN_CONTROL_2_011.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_012 absolute 0x40081528;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_012_bit at GPIO_PIN_CONTROL_2_012.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_012_bit at GPIO_PIN_CONTROL_2_012.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_012_bit at GPIO_PIN_CONTROL_2_012.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_013 absolute 0x4008152C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_013_bit at GPIO_PIN_CONTROL_2_013.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_013_bit at GPIO_PIN_CONTROL_2_013.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_013_bit at GPIO_PIN_CONTROL_2_013.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_014 absolute 0x40081530;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_014_bit at GPIO_PIN_CONTROL_2_014.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_014_bit at GPIO_PIN_CONTROL_2_014.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_014_bit at GPIO_PIN_CONTROL_2_014.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_015 absolute 0x40081534;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_015_bit at GPIO_PIN_CONTROL_2_015.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_015_bit at GPIO_PIN_CONTROL_2_015.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_015_bit at GPIO_PIN_CONTROL_2_015.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_016 absolute 0x40081538;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_016_bit at GPIO_PIN_CONTROL_2_016.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_016_bit at GPIO_PIN_CONTROL_2_016.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_016_bit at GPIO_PIN_CONTROL_2_016.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_017 absolute 0x4008153C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_017_bit at GPIO_PIN_CONTROL_2_017.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_017_bit at GPIO_PIN_CONTROL_2_017.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_017_bit at GPIO_PIN_CONTROL_2_017.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_020 absolute 0x40081540;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_020_bit at GPIO_PIN_CONTROL_2_020.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_020_bit at GPIO_PIN_CONTROL_2_020.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_020_bit at GPIO_PIN_CONTROL_2_020.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_021 absolute 0x40081544;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_021_bit at GPIO_PIN_CONTROL_2_021.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_021_bit at GPIO_PIN_CONTROL_2_021.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_021_bit at GPIO_PIN_CONTROL_2_021.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_022 absolute 0x40081548;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_022_bit at GPIO_PIN_CONTROL_2_022.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_022_bit at GPIO_PIN_CONTROL_2_022.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_022_bit at GPIO_PIN_CONTROL_2_022.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_023 absolute 0x4008154C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_023_bit at GPIO_PIN_CONTROL_2_023.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_023_bit at GPIO_PIN_CONTROL_2_023.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_023_bit at GPIO_PIN_CONTROL_2_023.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_024 absolute 0x40081550;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_024_bit at GPIO_PIN_CONTROL_2_024.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_024_bit at GPIO_PIN_CONTROL_2_024.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_024_bit at GPIO_PIN_CONTROL_2_024.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_025 absolute 0x40081554;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_025_bit at GPIO_PIN_CONTROL_2_025.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_025_bit at GPIO_PIN_CONTROL_2_025.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_025_bit at GPIO_PIN_CONTROL_2_025.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_026 absolute 0x40081558;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_026_bit at GPIO_PIN_CONTROL_2_026.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_026_bit at GPIO_PIN_CONTROL_2_026.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_026_bit at GPIO_PIN_CONTROL_2_026.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_027 absolute 0x4008155C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_027_bit at GPIO_PIN_CONTROL_2_027.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_027_bit at GPIO_PIN_CONTROL_2_027.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_027_bit at GPIO_PIN_CONTROL_2_027.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_030 absolute 0x40081560;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_030_bit at GPIO_PIN_CONTROL_2_030.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_030_bit at GPIO_PIN_CONTROL_2_030.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_030_bit at GPIO_PIN_CONTROL_2_030.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_031 absolute 0x40081564;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_031_bit at GPIO_PIN_CONTROL_2_031.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_031_bit at GPIO_PIN_CONTROL_2_031.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_031_bit at GPIO_PIN_CONTROL_2_031.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_032 absolute 0x40081568;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_032_bit at GPIO_PIN_CONTROL_2_032.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_032_bit at GPIO_PIN_CONTROL_2_032.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_032_bit at GPIO_PIN_CONTROL_2_032.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_033 absolute 0x4008156C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_033_bit at GPIO_PIN_CONTROL_2_033.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_033_bit at GPIO_PIN_CONTROL_2_033.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_033_bit at GPIO_PIN_CONTROL_2_033.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_034 absolute 0x40081570;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_034_bit at GPIO_PIN_CONTROL_2_034.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_034_bit at GPIO_PIN_CONTROL_2_034.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_034_bit at GPIO_PIN_CONTROL_2_034.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_035 absolute 0x40081574;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_035_bit at GPIO_PIN_CONTROL_2_035.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_035_bit at GPIO_PIN_CONTROL_2_035.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_035_bit at GPIO_PIN_CONTROL_2_035.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_036 absolute 0x40081578;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_036_bit at GPIO_PIN_CONTROL_2_036.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_036_bit at GPIO_PIN_CONTROL_2_036.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_036_bit at GPIO_PIN_CONTROL_2_036.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_037 absolute 0x4008157C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_037_bit at GPIO_PIN_CONTROL_2_037.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_037_bit at GPIO_PIN_CONTROL_2_037.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_037_bit at GPIO_PIN_CONTROL_2_037.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_040 absolute 0x40081580;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_040_bit at GPIO_PIN_CONTROL_2_040.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_040_bit at GPIO_PIN_CONTROL_2_040.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_040_bit at GPIO_PIN_CONTROL_2_040.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_041 absolute 0x40081584;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_041_bit at GPIO_PIN_CONTROL_2_041.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_041_bit at GPIO_PIN_CONTROL_2_041.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_041_bit at GPIO_PIN_CONTROL_2_041.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_042 absolute 0x40081588;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_042_bit at GPIO_PIN_CONTROL_2_042.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_042_bit at GPIO_PIN_CONTROL_2_042.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_042_bit at GPIO_PIN_CONTROL_2_042.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_043 absolute 0x4008158C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_043_bit at GPIO_PIN_CONTROL_2_043.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_043_bit at GPIO_PIN_CONTROL_2_043.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_043_bit at GPIO_PIN_CONTROL_2_043.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_044 absolute 0x40081590;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_044_bit at GPIO_PIN_CONTROL_2_044.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_044_bit at GPIO_PIN_CONTROL_2_044.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_044_bit at GPIO_PIN_CONTROL_2_044.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_045 absolute 0x40081594;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_045_bit at GPIO_PIN_CONTROL_2_045.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_045_bit at GPIO_PIN_CONTROL_2_045.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_045_bit at GPIO_PIN_CONTROL_2_045.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_046 absolute 0x40081598;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_046_bit at GPIO_PIN_CONTROL_2_046.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_046_bit at GPIO_PIN_CONTROL_2_046.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_046_bit at GPIO_PIN_CONTROL_2_046.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_047 absolute 0x4008159C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_047_bit at GPIO_PIN_CONTROL_2_047.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_047_bit at GPIO_PIN_CONTROL_2_047.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_047_bit at GPIO_PIN_CONTROL_2_047.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_050 absolute 0x400815A0;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_050_bit at GPIO_PIN_CONTROL_2_050.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_050_bit at GPIO_PIN_CONTROL_2_050.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_050_bit at GPIO_PIN_CONTROL_2_050.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_051 absolute 0x400815A4;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_051_bit at GPIO_PIN_CONTROL_2_051.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_051_bit at GPIO_PIN_CONTROL_2_051.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_051_bit at GPIO_PIN_CONTROL_2_051.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_052 absolute 0x400815A8;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_052_bit at GPIO_PIN_CONTROL_2_052.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_052_bit at GPIO_PIN_CONTROL_2_052.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_052_bit at GPIO_PIN_CONTROL_2_052.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_053 absolute 0x400815AC;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_053_bit at GPIO_PIN_CONTROL_2_053.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_053_bit at GPIO_PIN_CONTROL_2_053.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_053_bit at GPIO_PIN_CONTROL_2_053.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_054 absolute 0x400815B0;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_054_bit at GPIO_PIN_CONTROL_2_054.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_054_bit at GPIO_PIN_CONTROL_2_054.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_054_bit at GPIO_PIN_CONTROL_2_054.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_055 absolute 0x400815B4;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_055_bit at GPIO_PIN_CONTROL_2_055.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_055_bit at GPIO_PIN_CONTROL_2_055.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_055_bit at GPIO_PIN_CONTROL_2_055.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_056 absolute 0x400815B8;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_056_bit at GPIO_PIN_CONTROL_2_056.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_056_bit at GPIO_PIN_CONTROL_2_056.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_056_bit at GPIO_PIN_CONTROL_2_056.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_057 absolute 0x400815BC;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_057_bit at GPIO_PIN_CONTROL_2_057.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_057_bit at GPIO_PIN_CONTROL_2_057.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_057_bit at GPIO_PIN_CONTROL_2_057.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_060 absolute 0x400815C0;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_060_bit at GPIO_PIN_CONTROL_2_060.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_060_bit at GPIO_PIN_CONTROL_2_060.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_060_bit at GPIO_PIN_CONTROL_2_060.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_061 absolute 0x400815C4;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_061_bit at GPIO_PIN_CONTROL_2_061.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_061_bit at GPIO_PIN_CONTROL_2_061.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_061_bit at GPIO_PIN_CONTROL_2_061.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_062 absolute 0x400815C8;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_062_bit at GPIO_PIN_CONTROL_2_062.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_062_bit at GPIO_PIN_CONTROL_2_062.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_062_bit at GPIO_PIN_CONTROL_2_062.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_063 absolute 0x400815CC;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_063_bit at GPIO_PIN_CONTROL_2_063.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_063_bit at GPIO_PIN_CONTROL_2_063.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_063_bit at GPIO_PIN_CONTROL_2_063.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_064 absolute 0x400815D0;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_064_bit at GPIO_PIN_CONTROL_2_064.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_064_bit at GPIO_PIN_CONTROL_2_064.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_064_bit at GPIO_PIN_CONTROL_2_064.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_065 absolute 0x400815D4;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_065_bit at GPIO_PIN_CONTROL_2_065.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_065_bit at GPIO_PIN_CONTROL_2_065.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_065_bit at GPIO_PIN_CONTROL_2_065.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_066 absolute 0x400815D8;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_066_bit at GPIO_PIN_CONTROL_2_066.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_066_bit at GPIO_PIN_CONTROL_2_066.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_066_bit at GPIO_PIN_CONTROL_2_066.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_067 absolute 0x400815DC;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_067_bit at GPIO_PIN_CONTROL_2_067.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_067_bit at GPIO_PIN_CONTROL_2_067.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_067_bit at GPIO_PIN_CONTROL_2_067.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_100 absolute 0x400815E0;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_100_bit at GPIO_PIN_CONTROL_2_100.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_100_bit at GPIO_PIN_CONTROL_2_100.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_100_bit at GPIO_PIN_CONTROL_2_100.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_101 absolute 0x400815E4;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_101_bit at GPIO_PIN_CONTROL_2_101.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_101_bit at GPIO_PIN_CONTROL_2_101.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_101_bit at GPIO_PIN_CONTROL_2_101.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_102 absolute 0x400815E8;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_102_bit at GPIO_PIN_CONTROL_2_102.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_102_bit at GPIO_PIN_CONTROL_2_102.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_102_bit at GPIO_PIN_CONTROL_2_102.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_103 absolute 0x400815EC;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_103_bit at GPIO_PIN_CONTROL_2_103.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_103_bit at GPIO_PIN_CONTROL_2_103.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_103_bit at GPIO_PIN_CONTROL_2_103.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_104 absolute 0x400815F0;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_104_bit at GPIO_PIN_CONTROL_2_104.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_104_bit at GPIO_PIN_CONTROL_2_104.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_104_bit at GPIO_PIN_CONTROL_2_104.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_105 absolute 0x400815F4;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_105_bit at GPIO_PIN_CONTROL_2_105.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_105_bit at GPIO_PIN_CONTROL_2_105.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_105_bit at GPIO_PIN_CONTROL_2_105.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_106 absolute 0x400815F8;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_106_bit at GPIO_PIN_CONTROL_2_106.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_106_bit at GPIO_PIN_CONTROL_2_106.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_106_bit at GPIO_PIN_CONTROL_2_106.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_107 absolute 0x400815FC;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_107_bit at GPIO_PIN_CONTROL_2_107.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_107_bit at GPIO_PIN_CONTROL_2_107.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_107_bit at GPIO_PIN_CONTROL_2_107.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_110 absolute 0x40081600;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_110_bit at GPIO_PIN_CONTROL_2_110.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_110_bit at GPIO_PIN_CONTROL_2_110.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_110_bit at GPIO_PIN_CONTROL_2_110.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_111 absolute 0x40081604;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_111_bit at GPIO_PIN_CONTROL_2_111.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_111_bit at GPIO_PIN_CONTROL_2_111.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_111_bit at GPIO_PIN_CONTROL_2_111.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_112 absolute 0x40081608;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_112_bit at GPIO_PIN_CONTROL_2_112.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_112_bit at GPIO_PIN_CONTROL_2_112.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_112_bit at GPIO_PIN_CONTROL_2_112.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_113 absolute 0x4008160C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_113_bit at GPIO_PIN_CONTROL_2_113.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_113_bit at GPIO_PIN_CONTROL_2_113.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_113_bit at GPIO_PIN_CONTROL_2_113.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_114 absolute 0x40081610;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_114_bit at GPIO_PIN_CONTROL_2_114.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_114_bit at GPIO_PIN_CONTROL_2_114.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_114_bit at GPIO_PIN_CONTROL_2_114.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_115 absolute 0x40081614;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_115_bit at GPIO_PIN_CONTROL_2_115.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_115_bit at GPIO_PIN_CONTROL_2_115.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_115_bit at GPIO_PIN_CONTROL_2_115.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_116 absolute 0x40081618;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_116_bit at GPIO_PIN_CONTROL_2_116.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_116_bit at GPIO_PIN_CONTROL_2_116.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_116_bit at GPIO_PIN_CONTROL_2_116.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_117 absolute 0x4008161C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_117_bit at GPIO_PIN_CONTROL_2_117.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_117_bit at GPIO_PIN_CONTROL_2_117.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_117_bit at GPIO_PIN_CONTROL_2_117.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_120 absolute 0x40081620;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_120_bit at GPIO_PIN_CONTROL_2_120.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_120_bit at GPIO_PIN_CONTROL_2_120.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_120_bit at GPIO_PIN_CONTROL_2_120.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_121 absolute 0x40081624;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_121_bit at GPIO_PIN_CONTROL_2_121.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_121_bit at GPIO_PIN_CONTROL_2_121.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_121_bit at GPIO_PIN_CONTROL_2_121.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_122 absolute 0x40081628;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_122_bit at GPIO_PIN_CONTROL_2_122.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_122_bit at GPIO_PIN_CONTROL_2_122.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_122_bit at GPIO_PIN_CONTROL_2_122.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_123 absolute 0x4008162C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_123_bit at GPIO_PIN_CONTROL_2_123.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_123_bit at GPIO_PIN_CONTROL_2_123.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_123_bit at GPIO_PIN_CONTROL_2_123.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_124 absolute 0x40081630;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_124_bit at GPIO_PIN_CONTROL_2_124.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_124_bit at GPIO_PIN_CONTROL_2_124.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_124_bit at GPIO_PIN_CONTROL_2_124.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_125 absolute 0x40081634;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_125_bit at GPIO_PIN_CONTROL_2_125.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_125_bit at GPIO_PIN_CONTROL_2_125.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_125_bit at GPIO_PIN_CONTROL_2_125.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_126 absolute 0x40081638;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_126_bit at GPIO_PIN_CONTROL_2_126.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_126_bit at GPIO_PIN_CONTROL_2_126.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_126_bit at GPIO_PIN_CONTROL_2_126.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_127 absolute 0x4008163C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_127_bit at GPIO_PIN_CONTROL_2_127.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_127_bit at GPIO_PIN_CONTROL_2_127.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_127_bit at GPIO_PIN_CONTROL_2_127.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_130 absolute 0x40081640;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_130_bit at GPIO_PIN_CONTROL_2_130.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_130_bit at GPIO_PIN_CONTROL_2_130.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_130_bit at GPIO_PIN_CONTROL_2_130.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_131 absolute 0x40081644;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_131_bit at GPIO_PIN_CONTROL_2_131.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_131_bit at GPIO_PIN_CONTROL_2_131.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_131_bit at GPIO_PIN_CONTROL_2_131.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_132 absolute 0x40081648;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_132_bit at GPIO_PIN_CONTROL_2_132.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_132_bit at GPIO_PIN_CONTROL_2_132.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_132_bit at GPIO_PIN_CONTROL_2_132.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_133 absolute 0x4008164C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_133_bit at GPIO_PIN_CONTROL_2_133.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_133_bit at GPIO_PIN_CONTROL_2_133.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_133_bit at GPIO_PIN_CONTROL_2_133.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_134 absolute 0x40081650;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_134_bit at GPIO_PIN_CONTROL_2_134.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_134_bit at GPIO_PIN_CONTROL_2_134.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_134_bit at GPIO_PIN_CONTROL_2_134.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_135 absolute 0x40081654;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_135_bit at GPIO_PIN_CONTROL_2_135.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_135_bit at GPIO_PIN_CONTROL_2_135.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_135_bit at GPIO_PIN_CONTROL_2_135.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_136 absolute 0x40081658;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_136_bit at GPIO_PIN_CONTROL_2_136.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_136_bit at GPIO_PIN_CONTROL_2_136.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_136_bit at GPIO_PIN_CONTROL_2_136.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_137 absolute 0x4008165C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_137_bit at GPIO_PIN_CONTROL_2_137.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_137_bit at GPIO_PIN_CONTROL_2_137.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_137_bit at GPIO_PIN_CONTROL_2_137.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_140 absolute 0x40081660;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_140_bit at GPIO_PIN_CONTROL_2_140.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_140_bit at GPIO_PIN_CONTROL_2_140.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_140_bit at GPIO_PIN_CONTROL_2_140.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_141 absolute 0x40081664;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_141_bit at GPIO_PIN_CONTROL_2_141.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_141_bit at GPIO_PIN_CONTROL_2_141.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_141_bit at GPIO_PIN_CONTROL_2_141.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_142 absolute 0x40081668;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_142_bit at GPIO_PIN_CONTROL_2_142.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_142_bit at GPIO_PIN_CONTROL_2_142.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_142_bit at GPIO_PIN_CONTROL_2_142.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_143 absolute 0x4008166C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_143_bit at GPIO_PIN_CONTROL_2_143.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_143_bit at GPIO_PIN_CONTROL_2_143.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_143_bit at GPIO_PIN_CONTROL_2_143.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_144 absolute 0x40081670;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_144_bit at GPIO_PIN_CONTROL_2_144.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_144_bit at GPIO_PIN_CONTROL_2_144.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_144_bit at GPIO_PIN_CONTROL_2_144.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_145 absolute 0x40081674;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_145_bit at GPIO_PIN_CONTROL_2_145.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_145_bit at GPIO_PIN_CONTROL_2_145.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_145_bit at GPIO_PIN_CONTROL_2_145.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_146 absolute 0x40081678;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_146_bit at GPIO_PIN_CONTROL_2_146.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_146_bit at GPIO_PIN_CONTROL_2_146.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_146_bit at GPIO_PIN_CONTROL_2_146.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_147 absolute 0x4008167C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_147_bit at GPIO_PIN_CONTROL_2_147.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_147_bit at GPIO_PIN_CONTROL_2_147.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_147_bit at GPIO_PIN_CONTROL_2_147.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_150 absolute 0x40081680;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_150_bit at GPIO_PIN_CONTROL_2_150.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_150_bit at GPIO_PIN_CONTROL_2_150.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_150_bit at GPIO_PIN_CONTROL_2_150.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_151 absolute 0x40081684;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_151_bit at GPIO_PIN_CONTROL_2_151.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_151_bit at GPIO_PIN_CONTROL_2_151.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_151_bit at GPIO_PIN_CONTROL_2_151.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_152 absolute 0x40081688;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_152_bit at GPIO_PIN_CONTROL_2_152.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_152_bit at GPIO_PIN_CONTROL_2_152.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_152_bit at GPIO_PIN_CONTROL_2_152.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_153 absolute 0x4008168C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_153_bit at GPIO_PIN_CONTROL_2_153.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_153_bit at GPIO_PIN_CONTROL_2_153.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_153_bit at GPIO_PIN_CONTROL_2_153.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_154 absolute 0x40081690;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_154_bit at GPIO_PIN_CONTROL_2_154.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_154_bit at GPIO_PIN_CONTROL_2_154.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_154_bit at GPIO_PIN_CONTROL_2_154.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_155 absolute 0x40081694;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_155_bit at GPIO_PIN_CONTROL_2_155.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_155_bit at GPIO_PIN_CONTROL_2_155.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_155_bit at GPIO_PIN_CONTROL_2_155.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_156 absolute 0x40081698;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_156_bit at GPIO_PIN_CONTROL_2_156.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_156_bit at GPIO_PIN_CONTROL_2_156.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_156_bit at GPIO_PIN_CONTROL_2_156.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_157 absolute 0x4008169C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_157_bit at GPIO_PIN_CONTROL_2_157.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_157_bit at GPIO_PIN_CONTROL_2_157.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_157_bit at GPIO_PIN_CONTROL_2_157.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_160 absolute 0x400816A0;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_160_bit at GPIO_PIN_CONTROL_2_160.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_160_bit at GPIO_PIN_CONTROL_2_160.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_160_bit at GPIO_PIN_CONTROL_2_160.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_161 absolute 0x400816A4;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_161_bit at GPIO_PIN_CONTROL_2_161.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_161_bit at GPIO_PIN_CONTROL_2_161.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_161_bit at GPIO_PIN_CONTROL_2_161.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_162 absolute 0x400816A8;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_162_bit at GPIO_PIN_CONTROL_2_162.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_162_bit at GPIO_PIN_CONTROL_2_162.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_162_bit at GPIO_PIN_CONTROL_2_162.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_163 absolute 0x400816AC;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_163_bit at GPIO_PIN_CONTROL_2_163.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_163_bit at GPIO_PIN_CONTROL_2_163.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_163_bit at GPIO_PIN_CONTROL_2_163.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_164 absolute 0x400816B0;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_164_bit at GPIO_PIN_CONTROL_2_164.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_164_bit at GPIO_PIN_CONTROL_2_164.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_164_bit at GPIO_PIN_CONTROL_2_164.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_165 absolute 0x400816B4;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_165_bit at GPIO_PIN_CONTROL_2_165.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_165_bit at GPIO_PIN_CONTROL_2_165.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_165_bit at GPIO_PIN_CONTROL_2_165.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_166 absolute 0x400816B8;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_166_bit at GPIO_PIN_CONTROL_2_166.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_166_bit at GPIO_PIN_CONTROL_2_166.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_166_bit at GPIO_PIN_CONTROL_2_166.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_167 absolute 0x400816BC;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_167_bit at GPIO_PIN_CONTROL_2_167.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_167_bit at GPIO_PIN_CONTROL_2_167.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_167_bit at GPIO_PIN_CONTROL_2_167.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_170 absolute 0x400816C0;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_170_bit at GPIO_PIN_CONTROL_2_170.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_170_bit at GPIO_PIN_CONTROL_2_170.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_170_bit at GPIO_PIN_CONTROL_2_170.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_171 absolute 0x400816C4;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_171_bit at GPIO_PIN_CONTROL_2_171.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_171_bit at GPIO_PIN_CONTROL_2_171.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_171_bit at GPIO_PIN_CONTROL_2_171.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_172 absolute 0x400816C8;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_172_bit at GPIO_PIN_CONTROL_2_172.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_172_bit at GPIO_PIN_CONTROL_2_172.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_172_bit at GPIO_PIN_CONTROL_2_172.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_173 absolute 0x400816CC;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_173_bit at GPIO_PIN_CONTROL_2_173.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_173_bit at GPIO_PIN_CONTROL_2_173.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_173_bit at GPIO_PIN_CONTROL_2_173.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_174 absolute 0x400816D0;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_174_bit at GPIO_PIN_CONTROL_2_174.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_174_bit at GPIO_PIN_CONTROL_2_174.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_174_bit at GPIO_PIN_CONTROL_2_174.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_175 absolute 0x400816D4;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_175_bit at GPIO_PIN_CONTROL_2_175.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_175_bit at GPIO_PIN_CONTROL_2_175.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_175_bit at GPIO_PIN_CONTROL_2_175.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_176 absolute 0x400816D8;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_176_bit at GPIO_PIN_CONTROL_2_176.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_176_bit at GPIO_PIN_CONTROL_2_176.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_176_bit at GPIO_PIN_CONTROL_2_176.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_177 absolute 0x400816DC;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_177_bit at GPIO_PIN_CONTROL_2_177.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_177_bit at GPIO_PIN_CONTROL_2_177.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_177_bit at GPIO_PIN_CONTROL_2_177.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_200 absolute 0x40081720;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_200_bit at GPIO_PIN_CONTROL_2_200.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_200_bit at GPIO_PIN_CONTROL_2_200.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_200_bit at GPIO_PIN_CONTROL_2_200.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_201 absolute 0x40081724;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_201_bit at GPIO_PIN_CONTROL_2_201.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_201_bit at GPIO_PIN_CONTROL_2_201.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_201_bit at GPIO_PIN_CONTROL_2_201.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_202 absolute 0x40081728;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_202_bit at GPIO_PIN_CONTROL_2_202.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_202_bit at GPIO_PIN_CONTROL_2_202.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_202_bit at GPIO_PIN_CONTROL_2_202.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_203 absolute 0x4008172C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_203_bit at GPIO_PIN_CONTROL_2_203.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_203_bit at GPIO_PIN_CONTROL_2_203.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_203_bit at GPIO_PIN_CONTROL_2_203.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_204 absolute 0x40081730;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_204_bit at GPIO_PIN_CONTROL_2_204.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_204_bit at GPIO_PIN_CONTROL_2_204.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_204_bit at GPIO_PIN_CONTROL_2_204.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_205 absolute 0x40081734;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_205_bit at GPIO_PIN_CONTROL_2_205.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_205_bit at GPIO_PIN_CONTROL_2_205.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_205_bit at GPIO_PIN_CONTROL_2_205.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_206 absolute 0x40081738;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_206_bit at GPIO_PIN_CONTROL_2_206.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_206_bit at GPIO_PIN_CONTROL_2_206.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_206_bit at GPIO_PIN_CONTROL_2_206.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_207 absolute 0x4008173C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_207_bit at GPIO_PIN_CONTROL_2_207.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_207_bit at GPIO_PIN_CONTROL_2_207.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_207_bit at GPIO_PIN_CONTROL_2_207.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_210 absolute 0x40081740;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_210_bit at GPIO_PIN_CONTROL_2_210.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_210_bit at GPIO_PIN_CONTROL_2_210.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_210_bit at GPIO_PIN_CONTROL_2_210.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_211 absolute 0x40081744;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_211_bit at GPIO_PIN_CONTROL_2_211.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_211_bit at GPIO_PIN_CONTROL_2_211.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_211_bit at GPIO_PIN_CONTROL_2_211.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_212 absolute 0x40081748;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_212_bit at GPIO_PIN_CONTROL_2_212.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_212_bit at GPIO_PIN_CONTROL_2_212.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_212_bit at GPIO_PIN_CONTROL_2_212.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_213 absolute 0x4008174C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_213_bit at GPIO_PIN_CONTROL_2_213.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_213_bit at GPIO_PIN_CONTROL_2_213.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_213_bit at GPIO_PIN_CONTROL_2_213.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_214 absolute 0x40081750;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_214_bit at GPIO_PIN_CONTROL_2_214.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_214_bit at GPIO_PIN_CONTROL_2_214.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_214_bit at GPIO_PIN_CONTROL_2_214.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_215 absolute 0x40081754;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_215_bit at GPIO_PIN_CONTROL_2_215.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_215_bit at GPIO_PIN_CONTROL_2_215.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_215_bit at GPIO_PIN_CONTROL_2_215.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_216 absolute 0x40081758;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_216_bit at GPIO_PIN_CONTROL_2_216.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_216_bit at GPIO_PIN_CONTROL_2_216.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_216_bit at GPIO_PIN_CONTROL_2_216.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_217 absolute 0x4008175C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_217_bit at GPIO_PIN_CONTROL_2_217.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_217_bit at GPIO_PIN_CONTROL_2_217.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_217_bit at GPIO_PIN_CONTROL_2_217.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_220 absolute 0x40081760;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_220_bit at GPIO_PIN_CONTROL_2_220.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_220_bit at GPIO_PIN_CONTROL_2_220.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_220_bit at GPIO_PIN_CONTROL_2_220.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_221 absolute 0x40081764;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_221_bit at GPIO_PIN_CONTROL_2_221.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_221_bit at GPIO_PIN_CONTROL_2_221.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_221_bit at GPIO_PIN_CONTROL_2_221.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_222 absolute 0x40081768;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_222_bit at GPIO_PIN_CONTROL_2_222.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_222_bit at GPIO_PIN_CONTROL_2_222.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_222_bit at GPIO_PIN_CONTROL_2_222.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_223 absolute 0x4008176C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_223_bit at GPIO_PIN_CONTROL_2_223.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_223_bit at GPIO_PIN_CONTROL_2_223.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_223_bit at GPIO_PIN_CONTROL_2_223.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_224 absolute 0x40081770;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_224_bit at GPIO_PIN_CONTROL_2_224.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_224_bit at GPIO_PIN_CONTROL_2_224.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_224_bit at GPIO_PIN_CONTROL_2_224.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_225 absolute 0x40081774;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_225_bit at GPIO_PIN_CONTROL_2_225.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_225_bit at GPIO_PIN_CONTROL_2_225.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_225_bit at GPIO_PIN_CONTROL_2_225.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_226 absolute 0x40081778;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_226_bit at GPIO_PIN_CONTROL_2_226.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_226_bit at GPIO_PIN_CONTROL_2_226.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_226_bit at GPIO_PIN_CONTROL_2_226.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_227 absolute 0x4008177C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_227_bit at GPIO_PIN_CONTROL_2_227.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_227_bit at GPIO_PIN_CONTROL_2_227.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_227_bit at GPIO_PIN_CONTROL_2_227.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_230 absolute 0x40081780;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_230_bit at GPIO_PIN_CONTROL_2_230.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_230_bit at GPIO_PIN_CONTROL_2_230.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_230_bit at GPIO_PIN_CONTROL_2_230.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_231 absolute 0x40081784;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_231_bit at GPIO_PIN_CONTROL_2_231.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_231_bit at GPIO_PIN_CONTROL_2_231.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_231_bit at GPIO_PIN_CONTROL_2_231.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_232 absolute 0x40081788;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_232_bit at GPIO_PIN_CONTROL_2_232.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_232_bit at GPIO_PIN_CONTROL_2_232.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_232_bit at GPIO_PIN_CONTROL_2_232.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_233 absolute 0x4008178C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_233_bit at GPIO_PIN_CONTROL_2_233.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_233_bit at GPIO_PIN_CONTROL_2_233.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_233_bit at GPIO_PIN_CONTROL_2_233.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_234 absolute 0x40081790;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_234_bit at GPIO_PIN_CONTROL_2_234.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_234_bit at GPIO_PIN_CONTROL_2_234.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_234_bit at GPIO_PIN_CONTROL_2_234.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_235 absolute 0x40081794;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_235_bit at GPIO_PIN_CONTROL_2_235.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_235_bit at GPIO_PIN_CONTROL_2_235.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_235_bit at GPIO_PIN_CONTROL_2_235.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_236 absolute 0x40081798;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_236_bit at GPIO_PIN_CONTROL_2_236.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_236_bit at GPIO_PIN_CONTROL_2_236.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_236_bit at GPIO_PIN_CONTROL_2_236.B5;

sfr far unsigned long   volatile GPIO_PIN_CONTROL_2_237 absolute 0x4008179C;
    sbit  SLEW_RATE_GPIO_PIN_CONTROL_2_237_bit at GPIO_PIN_CONTROL_2_237.B0;
    sbit  DRIVE_STRENGTH4_GPIO_PIN_CONTROL_2_237_bit at GPIO_PIN_CONTROL_2_237.B4;
    sbit  DRIVE_STRENGTH5_GPIO_PIN_CONTROL_2_237_bit at GPIO_PIN_CONTROL_2_237.B5;

sfr far unsigned short   volatile DMA_CONTROL          absolute 0x40002400;
    const register unsigned short int ACTIVATE = 0;
    sbit  ACTIVATE_bit at DMA_CONTROL.B0;
    sbit  SOFT_RESET_DMA_CONTROL_bit at DMA_CONTROL.B1;

sfr far unsigned long   volatile DMA_DATA_PACKET      absolute 0x40002404;
sfr far unsigned short   volatile DMA_CH0_ACTIVATE     absolute 0x40002410;
    const register unsigned short int EN = 0;
    sbit  EN_bit at DMA_CH0_ACTIVATE.B0;

sfr far unsigned long   volatile DMA_CH0_MEM_START_ADDR absolute 0x40002414;
sfr far unsigned long   volatile DMA_CH0_MEM_END_ADDR absolute 0x40002418;
sfr far unsigned long   volatile DMA_CH0_DEVICE_ADDR  absolute 0x4000241C;
sfr far unsigned long   volatile DMA_CH0_CONTROL      absolute 0x40002420;
    const register unsigned short int RUN = 0;
    sbit  RUN_bit at DMA_CH0_CONTROL.B0;
    const register unsigned short int REQUEST = 1;
    sbit  REQUEST_bit at DMA_CH0_CONTROL.B1;
    const register unsigned short int DONE = 2;
    sbit  DONE_bit at DMA_CH0_CONTROL.B2;
    const register unsigned short int STATUS3 = 3;
    sbit  STATUS3_bit at DMA_CH0_CONTROL.B3;
    const register unsigned short int STATUS4 = 4;
    sbit  STATUS4_bit at DMA_CH0_CONTROL.B4;
    const register unsigned short int BUSY = 5;
    sbit  BUSY_bit at DMA_CH0_CONTROL.B5;
    const register unsigned short int TX_DIRECTION = 8;
    sbit  TX_DIRECTION_bit at DMA_CH0_CONTROL.B8;
    const register unsigned short int HARDWARE_FLOW_CONTROL_DEVICE9 = 9;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE9_bit at DMA_CH0_CONTROL.B9;
    const register unsigned short int HARDWARE_FLOW_CONTROL_DEVICE10 = 10;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE10_bit at DMA_CH0_CONTROL.B10;
    const register unsigned short int HARDWARE_FLOW_CONTROL_DEVICE11 = 11;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE11_bit at DMA_CH0_CONTROL.B11;
    const register unsigned short int HARDWARE_FLOW_CONTROL_DEVICE12 = 12;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE12_bit at DMA_CH0_CONTROL.B12;
    const register unsigned short int HARDWARE_FLOW_CONTROL_DEVICE13 = 13;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE13_bit at DMA_CH0_CONTROL.B13;
    const register unsigned short int HARDWARE_FLOW_CONTROL_DEVICE14 = 14;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE14_bit at DMA_CH0_CONTROL.B14;
    const register unsigned short int HARDWARE_FLOW_CONTROL_DEVICE15 = 15;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE15_bit at DMA_CH0_CONTROL.B15;
    const register unsigned short int INCREMENT_MEM_ADDR = 16;
    sbit  INCREMENT_MEM_ADDR_bit at DMA_CH0_CONTROL.B16;
    const register unsigned short int INCREMENT_DEVICE_ADDR = 17;
    sbit  INCREMENT_DEVICE_ADDR_bit at DMA_CH0_CONTROL.B17;
    const register unsigned short int LOCK_ = 18;
    sbit  LOCK_bit at DMA_CH0_CONTROL.B18;
    const register unsigned short int DISABLE_HW_FLOW_CONTROL = 19;
    sbit  DISABLE_HW_FLOW_CONTROL_bit at DMA_CH0_CONTROL.B19;
    const register unsigned short int TRANSFER_SIZE20 = 20;
    sbit  TRANSFER_SIZE20_bit at DMA_CH0_CONTROL.B20;
    const register unsigned short int TRANSFER_SIZE21 = 21;
    sbit  TRANSFER_SIZE21_bit at DMA_CH0_CONTROL.B21;
    const register unsigned short int TRANSFER_SIZE22 = 22;
    sbit  TRANSFER_SIZE22_bit at DMA_CH0_CONTROL.B22;
    const register unsigned short int TRANSFER_GO = 24;
    sbit  TRANSFER_GO_bit at DMA_CH0_CONTROL.B24;
    const register unsigned short int TRANSFER_ABORT = 25;
    sbit  TRANSFER_ABORT_bit at DMA_CH0_CONTROL.B25;

sfr far unsigned short   volatile DMA_CH0_INT_STATUS   absolute 0x40002424;
    const register unsigned short int BUS_ERROR = 0;
    sbit  BUS_ERROR_bit at DMA_CH0_INT_STATUS.B0;
    const register unsigned short int FLOW_CONTROL = 1;
    sbit  FLOW_CONTROL_bit at DMA_CH0_INT_STATUS.B1;
    sbit  DONE_DMA_CH0_INT_STATUS_bit at DMA_CH0_INT_STATUS.B2;

sfr far unsigned short   volatile DMA_CH0_INT_EN       absolute 0x40002428;
    sbit  BUS_ERROR_DMA_CH0_INT_EN_bit at DMA_CH0_INT_EN.B0;
    sbit  FLOW_CONTROL_DMA_CH0_INT_EN_bit at DMA_CH0_INT_EN.B1;
    sbit  DONE_DMA_CH0_INT_EN_bit at DMA_CH0_INT_EN.B2;

sfr far unsigned short   volatile DMA_CH1_ACTIVATE     absolute 0x40002430;
    sbit  EN_DMA_CH1_ACTIVATE_bit at DMA_CH1_ACTIVATE.B0;

sfr far unsigned long   volatile DMA_CH1_MEM_START_ADDR absolute 0x40002434;
sfr far unsigned long   volatile DMA_CH1_MEM_END_ADDR absolute 0x40002438;
sfr far unsigned long   volatile DMA_CH1_DEVICE_ADDR  absolute 0x4000243C;
sfr far unsigned long   volatile DMA_CH1_CONTROL      absolute 0x40002440;
    sbit  RUN_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B0;
    sbit  REQUEST_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B1;
    sbit  DONE_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B2;
    sbit  STATUS3_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B3;
    sbit  STATUS4_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B4;
    sbit  BUSY_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B5;
    sbit  TX_DIRECTION_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B8;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE9_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B9;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE10_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B10;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE11_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B11;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE12_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B12;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE13_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B13;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE14_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B14;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE15_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B15;
    sbit  INCREMENT_MEM_ADDR_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B16;
    sbit  INCREMENT_DEVICE_ADDR_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B17;
    sbit  LOCK_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B18;
    sbit  DISABLE_HW_FLOW_CONTROL_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B19;
    sbit  TRANSFER_SIZE20_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B20;
    sbit  TRANSFER_SIZE21_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B21;
    sbit  TRANSFER_SIZE22_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B22;
    sbit  TRANSFER_GO_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B24;
    sbit  TRANSFER_ABORT_DMA_CH1_CONTROL_bit at DMA_CH1_CONTROL.B25;

sfr far unsigned short   volatile DMA_CH1_INT_STATUS   absolute 0x40002444;
    sbit  BUS_ERROR_DMA_CH1_INT_STATUS_bit at DMA_CH1_INT_STATUS.B0;
    sbit  FLOW_CONTROL_DMA_CH1_INT_STATUS_bit at DMA_CH1_INT_STATUS.B1;
    sbit  DONE_DMA_CH1_INT_STATUS_bit at DMA_CH1_INT_STATUS.B2;

sfr far unsigned short   volatile DMA_CH1_INT_EN       absolute 0x40002448;
    sbit  BUS_ERROR_DMA_CH1_INT_EN_bit at DMA_CH1_INT_EN.B0;
    sbit  FLOW_CONTROL_DMA_CH1_INT_EN_bit at DMA_CH1_INT_EN.B1;
    sbit  DONE_DMA_CH1_INT_EN_bit at DMA_CH1_INT_EN.B2;

sfr far unsigned short   volatile DMA_CH2_ACTIVATE     absolute 0x40002450;
    sbit  EN_DMA_CH2_ACTIVATE_bit at DMA_CH2_ACTIVATE.B0;

sfr far unsigned long   volatile DMA_CH2_MEM_START_ADDR absolute 0x40002454;
sfr far unsigned long   volatile DMA_CH2_MEM_END_ADDR absolute 0x40002458;
sfr far unsigned long   volatile DMA_CH2_DEVICE_ADDR  absolute 0x4000245C;
sfr far unsigned long   volatile DMA_CH2_CONTROL      absolute 0x40002460;
    sbit  RUN_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B0;
    sbit  REQUEST_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B1;
    sbit  DONE_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B2;
    sbit  STATUS3_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B3;
    sbit  STATUS4_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B4;
    sbit  BUSY_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B5;
    sbit  TX_DIRECTION_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B8;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE9_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B9;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE10_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B10;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE11_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B11;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE12_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B12;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE13_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B13;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE14_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B14;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE15_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B15;
    sbit  INCREMENT_MEM_ADDR_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B16;
    sbit  INCREMENT_DEVICE_ADDR_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B17;
    sbit  LOCK_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B18;
    sbit  DISABLE_HW_FLOW_CONTROL_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B19;
    sbit  TRANSFER_SIZE20_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B20;
    sbit  TRANSFER_SIZE21_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B21;
    sbit  TRANSFER_SIZE22_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B22;
    sbit  TRANSFER_GO_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B24;
    sbit  TRANSFER_ABORT_DMA_CH2_CONTROL_bit at DMA_CH2_CONTROL.B25;

sfr far unsigned short   volatile DMA_CH2_INT_STATUS   absolute 0x40002464;
    sbit  BUS_ERROR_DMA_CH2_INT_STATUS_bit at DMA_CH2_INT_STATUS.B0;
    sbit  FLOW_CONTROL_DMA_CH2_INT_STATUS_bit at DMA_CH2_INT_STATUS.B1;
    sbit  DONE_DMA_CH2_INT_STATUS_bit at DMA_CH2_INT_STATUS.B2;

sfr far unsigned short   volatile DMA_CH2_INT_EN       absolute 0x40002468;
    sbit  BUS_ERROR_DMA_CH2_INT_EN_bit at DMA_CH2_INT_EN.B0;
    sbit  FLOW_CONTROL_DMA_CH2_INT_EN_bit at DMA_CH2_INT_EN.B1;
    sbit  DONE_DMA_CH2_INT_EN_bit at DMA_CH2_INT_EN.B2;

sfr far unsigned short   volatile DMA_CH3_ACTIVATE     absolute 0x40002470;
    sbit  EN_DMA_CH3_ACTIVATE_bit at DMA_CH3_ACTIVATE.B0;

sfr far unsigned long   volatile DMA_CH3_MEM_START_ADDR absolute 0x40002474;
sfr far unsigned long   volatile DMA_CH3_MEM_END_ADDR absolute 0x40002478;
sfr far unsigned long   volatile DMA_CH3_DEVICE_ADDR  absolute 0x4000247C;
sfr far unsigned long   volatile DMA_CH3_CONTROL      absolute 0x40002480;
    sbit  RUN_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B0;
    sbit  REQUEST_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B1;
    sbit  DONE_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B2;
    sbit  STATUS3_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B3;
    sbit  STATUS4_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B4;
    sbit  BUSY_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B5;
    sbit  TX_DIRECTION_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B8;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE9_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B9;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE10_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B10;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE11_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B11;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE12_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B12;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE13_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B13;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE14_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B14;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE15_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B15;
    sbit  INCREMENT_MEM_ADDR_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B16;
    sbit  INCREMENT_DEVICE_ADDR_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B17;
    sbit  LOCK_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B18;
    sbit  DISABLE_HW_FLOW_CONTROL_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B19;
    sbit  TRANSFER_SIZE20_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B20;
    sbit  TRANSFER_SIZE21_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B21;
    sbit  TRANSFER_SIZE22_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B22;
    sbit  TRANSFER_GO_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B24;
    sbit  TRANSFER_ABORT_DMA_CH3_CONTROL_bit at DMA_CH3_CONTROL.B25;

sfr far unsigned short   volatile DMA_CH3_INT_STATUS   absolute 0x40002484;
    sbit  BUS_ERROR_DMA_CH3_INT_STATUS_bit at DMA_CH3_INT_STATUS.B0;
    sbit  FLOW_CONTROL_DMA_CH3_INT_STATUS_bit at DMA_CH3_INT_STATUS.B1;
    sbit  DONE_DMA_CH3_INT_STATUS_bit at DMA_CH3_INT_STATUS.B2;

sfr far unsigned short   volatile DMA_CH3_INT_EN       absolute 0x40002488;
    sbit  BUS_ERROR_DMA_CH3_INT_EN_bit at DMA_CH3_INT_EN.B0;
    sbit  FLOW_CONTROL_DMA_CH3_INT_EN_bit at DMA_CH3_INT_EN.B1;
    sbit  DONE_DMA_CH3_INT_EN_bit at DMA_CH3_INT_EN.B2;

sfr far unsigned short   volatile DMA_CH4_ACTIVATE     absolute 0x40002490;
    sbit  EN_DMA_CH4_ACTIVATE_bit at DMA_CH4_ACTIVATE.B0;

sfr far unsigned long   volatile DMA_CH4_MEM_START_ADDR absolute 0x40002494;
sfr far unsigned long   volatile DMA_CH4_MEM_END_ADDR absolute 0x40002498;
sfr far unsigned long   volatile DMA_CH4_DEVICE_ADDR  absolute 0x4000249C;
sfr far unsigned long   volatile DMA_CH4_CONTROL      absolute 0x400024A0;
    sbit  RUN_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B0;
    sbit  REQUEST_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B1;
    sbit  DONE_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B2;
    sbit  STATUS3_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B3;
    sbit  STATUS4_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B4;
    sbit  BUSY_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B5;
    sbit  TX_DIRECTION_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B8;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE9_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B9;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE10_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B10;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE11_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B11;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE12_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B12;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE13_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B13;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE14_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B14;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE15_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B15;
    sbit  INCREMENT_MEM_ADDR_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B16;
    sbit  INCREMENT_DEVICE_ADDR_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B17;
    sbit  LOCK_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B18;
    sbit  DISABLE_HW_FLOW_CONTROL_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B19;
    sbit  TRANSFER_SIZE20_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B20;
    sbit  TRANSFER_SIZE21_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B21;
    sbit  TRANSFER_SIZE22_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B22;
    sbit  TRANSFER_GO_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B24;
    sbit  TRANSFER_ABORT_DMA_CH4_CONTROL_bit at DMA_CH4_CONTROL.B25;

sfr far unsigned short   volatile DMA_CH4_INT_STATUS   absolute 0x400024A4;
    sbit  BUS_ERROR_DMA_CH4_INT_STATUS_bit at DMA_CH4_INT_STATUS.B0;
    sbit  FLOW_CONTROL_DMA_CH4_INT_STATUS_bit at DMA_CH4_INT_STATUS.B1;
    sbit  DONE_DMA_CH4_INT_STATUS_bit at DMA_CH4_INT_STATUS.B2;

sfr far unsigned short   volatile DMA_CH4_INT_EN       absolute 0x400024A8;
    sbit  BUS_ERROR_DMA_CH4_INT_EN_bit at DMA_CH4_INT_EN.B0;
    sbit  FLOW_CONTROL_DMA_CH4_INT_EN_bit at DMA_CH4_INT_EN.B1;
    sbit  DONE_DMA_CH4_INT_EN_bit at DMA_CH4_INT_EN.B2;

sfr far unsigned short   volatile DMA_CH5_ACTIVATE     absolute 0x400024B0;
    sbit  EN_DMA_CH5_ACTIVATE_bit at DMA_CH5_ACTIVATE.B0;

sfr far unsigned long   volatile DMA_CH5_MEM_START_ADDR absolute 0x400024B4;
sfr far unsigned long   volatile DMA_CH5_MEM_END_ADDR absolute 0x400024B8;
sfr far unsigned long   volatile DMA_CH5_DEVICE_ADDR  absolute 0x400024BC;
sfr far unsigned long   volatile DMA_CH5_CONTROL      absolute 0x400024C0;
    sbit  RUN_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B0;
    sbit  REQUEST_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B1;
    sbit  DONE_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B2;
    sbit  STATUS3_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B3;
    sbit  STATUS4_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B4;
    sbit  BUSY_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B5;
    sbit  TX_DIRECTION_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B8;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE9_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B9;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE10_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B10;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE11_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B11;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE12_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B12;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE13_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B13;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE14_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B14;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE15_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B15;
    sbit  INCREMENT_MEM_ADDR_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B16;
    sbit  INCREMENT_DEVICE_ADDR_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B17;
    sbit  LOCK_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B18;
    sbit  DISABLE_HW_FLOW_CONTROL_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B19;
    sbit  TRANSFER_SIZE20_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B20;
    sbit  TRANSFER_SIZE21_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B21;
    sbit  TRANSFER_SIZE22_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B22;
    sbit  TRANSFER_GO_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B24;
    sbit  TRANSFER_ABORT_DMA_CH5_CONTROL_bit at DMA_CH5_CONTROL.B25;

sfr far unsigned short   volatile DMA_CH5_INT_STATUS   absolute 0x400024C4;
    sbit  BUS_ERROR_DMA_CH5_INT_STATUS_bit at DMA_CH5_INT_STATUS.B0;
    sbit  FLOW_CONTROL_DMA_CH5_INT_STATUS_bit at DMA_CH5_INT_STATUS.B1;
    sbit  DONE_DMA_CH5_INT_STATUS_bit at DMA_CH5_INT_STATUS.B2;

sfr far unsigned short   volatile DMA_CH5_INT_EN       absolute 0x400024C8;
    sbit  BUS_ERROR_DMA_CH5_INT_EN_bit at DMA_CH5_INT_EN.B0;
    sbit  FLOW_CONTROL_DMA_CH5_INT_EN_bit at DMA_CH5_INT_EN.B1;
    sbit  DONE_DMA_CH5_INT_EN_bit at DMA_CH5_INT_EN.B2;

sfr far unsigned short   volatile DMA_CH6_ACTIVATE     absolute 0x400024D0;
    sbit  EN_DMA_CH6_ACTIVATE_bit at DMA_CH6_ACTIVATE.B0;

sfr far unsigned long   volatile DMA_CH6_MEM_START_ADDR absolute 0x400024D4;
sfr far unsigned long   volatile DMA_CH6_MEM_END_ADDR absolute 0x400024D8;
sfr far unsigned long   volatile DMA_CH6_DEVICE_ADDR  absolute 0x400024DC;
sfr far unsigned long   volatile DMA_CH6_CONTROL      absolute 0x400024E0;
    sbit  RUN_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B0;
    sbit  REQUEST_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B1;
    sbit  DONE_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B2;
    sbit  STATUS3_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B3;
    sbit  STATUS4_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B4;
    sbit  BUSY_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B5;
    sbit  TX_DIRECTION_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B8;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE9_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B9;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE10_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B10;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE11_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B11;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE12_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B12;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE13_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B13;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE14_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B14;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE15_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B15;
    sbit  INCREMENT_MEM_ADDR_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B16;
    sbit  INCREMENT_DEVICE_ADDR_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B17;
    sbit  LOCK_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B18;
    sbit  DISABLE_HW_FLOW_CONTROL_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B19;
    sbit  TRANSFER_SIZE20_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B20;
    sbit  TRANSFER_SIZE21_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B21;
    sbit  TRANSFER_SIZE22_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B22;
    sbit  TRANSFER_GO_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B24;
    sbit  TRANSFER_ABORT_DMA_CH6_CONTROL_bit at DMA_CH6_CONTROL.B25;

sfr far unsigned short   volatile DMA_CH6_INT_STATUS   absolute 0x400024E4;
    sbit  BUS_ERROR_DMA_CH6_INT_STATUS_bit at DMA_CH6_INT_STATUS.B0;
    sbit  FLOW_CONTROL_DMA_CH6_INT_STATUS_bit at DMA_CH6_INT_STATUS.B1;
    sbit  DONE_DMA_CH6_INT_STATUS_bit at DMA_CH6_INT_STATUS.B2;

sfr far unsigned short   volatile DMA_CH6_INT_EN       absolute 0x400024E8;
    sbit  BUS_ERROR_DMA_CH6_INT_EN_bit at DMA_CH6_INT_EN.B0;
    sbit  FLOW_CONTROL_DMA_CH6_INT_EN_bit at DMA_CH6_INT_EN.B1;
    sbit  DONE_DMA_CH6_INT_EN_bit at DMA_CH6_INT_EN.B2;

sfr far unsigned short   volatile DMA_CH7_ACTIVATE     absolute 0x400024F0;
    sbit  EN_DMA_CH7_ACTIVATE_bit at DMA_CH7_ACTIVATE.B0;

sfr far unsigned long   volatile DMA_CH7_MEM_START_ADDR absolute 0x400024F4;
sfr far unsigned long   volatile DMA_CH7_MEM_END_ADDR absolute 0x400024F8;
sfr far unsigned long   volatile DMA_CH7_DEVICE_ADDR  absolute 0x400024FC;
sfr far unsigned long   volatile DMA_CH7_CONTROL      absolute 0x40002500;
    sbit  RUN_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B0;
    sbit  REQUEST_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B1;
    sbit  DONE_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B2;
    sbit  STATUS3_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B3;
    sbit  STATUS4_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B4;
    sbit  BUSY_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B5;
    sbit  TX_DIRECTION_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B8;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE9_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B9;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE10_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B10;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE11_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B11;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE12_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B12;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE13_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B13;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE14_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B14;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE15_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B15;
    sbit  INCREMENT_MEM_ADDR_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B16;
    sbit  INCREMENT_DEVICE_ADDR_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B17;
    sbit  LOCK_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B18;
    sbit  DISABLE_HW_FLOW_CONTROL_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B19;
    sbit  TRANSFER_SIZE20_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B20;
    sbit  TRANSFER_SIZE21_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B21;
    sbit  TRANSFER_SIZE22_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B22;
    sbit  TRANSFER_GO_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B24;
    sbit  TRANSFER_ABORT_DMA_CH7_CONTROL_bit at DMA_CH7_CONTROL.B25;

sfr far unsigned short   volatile DMA_CH7_INT_STATUS   absolute 0x40002504;
    sbit  BUS_ERROR_DMA_CH7_INT_STATUS_bit at DMA_CH7_INT_STATUS.B0;
    sbit  FLOW_CONTROL_DMA_CH7_INT_STATUS_bit at DMA_CH7_INT_STATUS.B1;
    sbit  DONE_DMA_CH7_INT_STATUS_bit at DMA_CH7_INT_STATUS.B2;

sfr far unsigned short   volatile DMA_CH7_INT_EN       absolute 0x40002508;
    sbit  BUS_ERROR_DMA_CH7_INT_EN_bit at DMA_CH7_INT_EN.B0;
    sbit  FLOW_CONTROL_DMA_CH7_INT_EN_bit at DMA_CH7_INT_EN.B1;
    sbit  DONE_DMA_CH7_INT_EN_bit at DMA_CH7_INT_EN.B2;

sfr far unsigned short   volatile DMA_CH8_ACTIVATE     absolute 0x40002510;
    sbit  EN_DMA_CH8_ACTIVATE_bit at DMA_CH8_ACTIVATE.B0;

sfr far unsigned long   volatile DMA_CH8_MEM_START_ADDR absolute 0x40002514;
sfr far unsigned long   volatile DMA_CH8_MEM_END_ADDR absolute 0x40002518;
sfr far unsigned long   volatile DMA_CH8_DEVICE_ADDR  absolute 0x4000251C;
sfr far unsigned long   volatile DMA_CH8_CONTROL      absolute 0x40002520;
    sbit  RUN_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B0;
    sbit  REQUEST_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B1;
    sbit  DONE_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B2;
    sbit  STATUS3_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B3;
    sbit  STATUS4_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B4;
    sbit  BUSY_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B5;
    sbit  TX_DIRECTION_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B8;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE9_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B9;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE10_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B10;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE11_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B11;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE12_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B12;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE13_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B13;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE14_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B14;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE15_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B15;
    sbit  INCREMENT_MEM_ADDR_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B16;
    sbit  INCREMENT_DEVICE_ADDR_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B17;
    sbit  LOCK_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B18;
    sbit  DISABLE_HW_FLOW_CONTROL_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B19;
    sbit  TRANSFER_SIZE20_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B20;
    sbit  TRANSFER_SIZE21_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B21;
    sbit  TRANSFER_SIZE22_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B22;
    sbit  TRANSFER_GO_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B24;
    sbit  TRANSFER_ABORT_DMA_CH8_CONTROL_bit at DMA_CH8_CONTROL.B25;

sfr far unsigned short   volatile DMA_CH8_INT_STATUS   absolute 0x40002524;
    sbit  BUS_ERROR_DMA_CH8_INT_STATUS_bit at DMA_CH8_INT_STATUS.B0;
    sbit  FLOW_CONTROL_DMA_CH8_INT_STATUS_bit at DMA_CH8_INT_STATUS.B1;
    sbit  DONE_DMA_CH8_INT_STATUS_bit at DMA_CH8_INT_STATUS.B2;

sfr far unsigned short   volatile DMA_CH8_INT_EN       absolute 0x40002528;
    sbit  BUS_ERROR_DMA_CH8_INT_EN_bit at DMA_CH8_INT_EN.B0;
    sbit  FLOW_CONTROL_DMA_CH8_INT_EN_bit at DMA_CH8_INT_EN.B1;
    sbit  DONE_DMA_CH8_INT_EN_bit at DMA_CH8_INT_EN.B2;

sfr far unsigned short   volatile DMA_CH9_ACTIVATE     absolute 0x40002530;
    sbit  EN_DMA_CH9_ACTIVATE_bit at DMA_CH9_ACTIVATE.B0;

sfr far unsigned long   volatile DMA_CH9_MEM_START_ADDR absolute 0x40002534;
sfr far unsigned long   volatile DMA_CH9_MEM_END_ADDR absolute 0x40002538;
sfr far unsigned long   volatile DMA_CH9_DEVICE_ADDR  absolute 0x4000253C;
sfr far unsigned long   volatile DMA_CH9_CONTROL      absolute 0x40002540;
    sbit  RUN_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B0;
    sbit  REQUEST_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B1;
    sbit  DONE_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B2;
    sbit  STATUS3_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B3;
    sbit  STATUS4_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B4;
    sbit  BUSY_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B5;
    sbit  TX_DIRECTION_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B8;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE9_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B9;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE10_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B10;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE11_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B11;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE12_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B12;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE13_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B13;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE14_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B14;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE15_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B15;
    sbit  INCREMENT_MEM_ADDR_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B16;
    sbit  INCREMENT_DEVICE_ADDR_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B17;
    sbit  LOCK_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B18;
    sbit  DISABLE_HW_FLOW_CONTROL_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B19;
    sbit  TRANSFER_SIZE20_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B20;
    sbit  TRANSFER_SIZE21_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B21;
    sbit  TRANSFER_SIZE22_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B22;
    sbit  TRANSFER_GO_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B24;
    sbit  TRANSFER_ABORT_DMA_CH9_CONTROL_bit at DMA_CH9_CONTROL.B25;

sfr far unsigned short   volatile DMA_CH9_INT_STATUS   absolute 0x40002544;
    sbit  BUS_ERROR_DMA_CH9_INT_STATUS_bit at DMA_CH9_INT_STATUS.B0;
    sbit  FLOW_CONTROL_DMA_CH9_INT_STATUS_bit at DMA_CH9_INT_STATUS.B1;
    sbit  DONE_DMA_CH9_INT_STATUS_bit at DMA_CH9_INT_STATUS.B2;

sfr far unsigned short   volatile DMA_CH9_INT_EN       absolute 0x40002548;
    sbit  BUS_ERROR_DMA_CH9_INT_EN_bit at DMA_CH9_INT_EN.B0;
    sbit  FLOW_CONTROL_DMA_CH9_INT_EN_bit at DMA_CH9_INT_EN.B1;
    sbit  DONE_DMA_CH9_INT_EN_bit at DMA_CH9_INT_EN.B2;

sfr far unsigned short   volatile DMA_CH10_ACTIVATE    absolute 0x40002550;
    sbit  EN_DMA_CH10_ACTIVATE_bit at DMA_CH10_ACTIVATE.B0;

sfr far unsigned long   volatile DMA_CH10_MEM_START_ADDR absolute 0x40002554;
sfr far unsigned long   volatile DMA_CH10_MEM_END_ADDR absolute 0x40002558;
sfr far unsigned long   volatile DMA_CH10_DEVICE_ADDR absolute 0x4000255C;
sfr far unsigned long   volatile DMA_CH10_CONTROL     absolute 0x40002560;
    sbit  RUN_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B0;
    sbit  REQUEST_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B1;
    sbit  DONE_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B2;
    sbit  STATUS3_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B3;
    sbit  STATUS4_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B4;
    sbit  BUSY_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B5;
    sbit  TX_DIRECTION_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B8;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE9_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B9;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE10_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B10;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE11_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B11;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE12_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B12;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE13_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B13;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE14_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B14;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE15_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B15;
    sbit  INCREMENT_MEM_ADDR_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B16;
    sbit  INCREMENT_DEVICE_ADDR_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B17;
    sbit  LOCK_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B18;
    sbit  DISABLE_HW_FLOW_CONTROL_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B19;
    sbit  TRANSFER_SIZE20_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B20;
    sbit  TRANSFER_SIZE21_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B21;
    sbit  TRANSFER_SIZE22_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B22;
    sbit  TRANSFER_GO_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B24;
    sbit  TRANSFER_ABORT_DMA_CH10_CONTROL_bit at DMA_CH10_CONTROL.B25;

sfr far unsigned short   volatile DMA_CH10_INT_STATUS  absolute 0x40002564;
    sbit  BUS_ERROR_DMA_CH10_INT_STATUS_bit at DMA_CH10_INT_STATUS.B0;
    sbit  FLOW_CONTROL_DMA_CH10_INT_STATUS_bit at DMA_CH10_INT_STATUS.B1;
    sbit  DONE_DMA_CH10_INT_STATUS_bit at DMA_CH10_INT_STATUS.B2;

sfr far unsigned short   volatile DMA_CH10_INT_EN      absolute 0x40002568;
    sbit  BUS_ERROR_DMA_CH10_INT_EN_bit at DMA_CH10_INT_EN.B0;
    sbit  FLOW_CONTROL_DMA_CH10_INT_EN_bit at DMA_CH10_INT_EN.B1;
    sbit  DONE_DMA_CH10_INT_EN_bit at DMA_CH10_INT_EN.B2;

sfr far unsigned short   volatile DMA_CH11_ACTIVATE    absolute 0x40002570;
    sbit  EN_DMA_CH11_ACTIVATE_bit at DMA_CH11_ACTIVATE.B0;

sfr far unsigned long   volatile DMA_CH11_MEM_START_ADDR absolute 0x40002574;
sfr far unsigned long   volatile DMA_CH11_MEM_END_ADDR absolute 0x40002578;
sfr far unsigned long   volatile DMA_CH11_DEVICE_ADDR absolute 0x4000257C;
sfr far unsigned long   volatile DMA_CH11_CONTROL     absolute 0x40002580;
    sbit  RUN_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B0;
    sbit  REQUEST_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B1;
    sbit  DONE_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B2;
    sbit  STATUS3_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B3;
    sbit  STATUS4_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B4;
    sbit  BUSY_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B5;
    sbit  TX_DIRECTION_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B8;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE9_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B9;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE10_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B10;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE11_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B11;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE12_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B12;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE13_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B13;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE14_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B14;
    sbit  HARDWARE_FLOW_CONTROL_DEVICE15_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B15;
    sbit  INCREMENT_MEM_ADDR_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B16;
    sbit  INCREMENT_DEVICE_ADDR_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B17;
    sbit  LOCK_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B18;
    sbit  DISABLE_HW_FLOW_CONTROL_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B19;
    sbit  TRANSFER_SIZE20_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B20;
    sbit  TRANSFER_SIZE21_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B21;
    sbit  TRANSFER_SIZE22_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B22;
    sbit  TRANSFER_GO_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B24;
    sbit  TRANSFER_ABORT_DMA_CH11_CONTROL_bit at DMA_CH11_CONTROL.B25;

sfr far unsigned short   volatile DMA_CH11_INT_STATUS  absolute 0x40002584;
    sbit  BUS_ERROR_DMA_CH11_INT_STATUS_bit at DMA_CH11_INT_STATUS.B0;
    sbit  FLOW_CONTROL_DMA_CH11_INT_STATUS_bit at DMA_CH11_INT_STATUS.B1;
    sbit  DONE_DMA_CH11_INT_STATUS_bit at DMA_CH11_INT_STATUS.B2;

sfr far unsigned short   volatile DMA_CH11_INT_EN      absolute 0x40002588;
    sbit  BUS_ERROR_DMA_CH11_INT_EN_bit at DMA_CH11_INT_EN.B0;
    sbit  FLOW_CONTROL_DMA_CH11_INT_EN_bit at DMA_CH11_INT_EN.B1;
    sbit  DONE_DMA_CH11_INT_EN_bit at DMA_CH11_INT_EN.B2;

sfr far unsigned short   volatile SMB0_CONTROL         absolute 0x40001800;
    const register unsigned short int ACK = 0;
    sbit  ACK_bit at SMB0_CONTROL.B0;
    const register unsigned short int STO = 1;
    sbit  STO_bit at SMB0_CONTROL.B1;
    const register unsigned short int STA = 2;
    sbit  STA_bit at SMB0_CONTROL.B2;
    const register unsigned short int ENI = 3;
    sbit  ENI_bit at SMB0_CONTROL.B3;
    const register unsigned short int ESO = 6;
    sbit  ESO_bit at SMB0_CONTROL.B6;
    const register unsigned short int PIN = 7;
    sbit  PIN_bit at SMB0_CONTROL.B7;

sfr far unsigned short   volatile SMB0_STATUS          absolute 0x40001800;
    const register unsigned short int nBB = 0;
    sbit  nBB_bit at SMB0_STATUS.B0;
    const register unsigned short int LAB = 1;
    sbit  LAB_bit at SMB0_STATUS.B1;
    const register unsigned short int AAS = 2;
    sbit  AAS_bit at SMB0_STATUS.B2;
    const register unsigned short int LRB_AD0 = 3;
    sbit  LRB_AD0_bit at SMB0_STATUS.B3;
    const register unsigned short int BER = 4;
    sbit  BER_bit at SMB0_STATUS.B4;
    const register unsigned short int STS = 5;
    sbit  STS_bit at SMB0_STATUS.B5;
    const register unsigned short int SAD = 6;
    sbit  SAD_bit at SMB0_STATUS.B6;
    sbit  PIN_SMB0_STATUS_bit at SMB0_STATUS.B7;

sfr far unsigned int   volatile SMB0_OWN             absolute 0x40001804;
    const register unsigned short int ADDRESS_10 = 0;
    sbit  ADDRESS_10_bit at SMB0_OWN.B0;
    const register unsigned short int ADDRESS_11 = 1;
    sbit  ADDRESS_11_bit at SMB0_OWN.B1;
    const register unsigned short int ADDRESS_12 = 2;
    sbit  ADDRESS_12_bit at SMB0_OWN.B2;
    const register unsigned short int ADDRESS_13 = 3;
    sbit  ADDRESS_13_bit at SMB0_OWN.B3;
    const register unsigned short int ADDRESS_14 = 4;
    sbit  ADDRESS_14_bit at SMB0_OWN.B4;
    const register unsigned short int ADDRESS_15 = 5;
    sbit  ADDRESS_15_bit at SMB0_OWN.B5;
    const register unsigned short int ADDRESS_16 = 6;
    sbit  ADDRESS_16_bit at SMB0_OWN.B6;
    const register unsigned short int ADDRESS_28 = 8;
    sbit  ADDRESS_28_bit at SMB0_OWN.B8;
    const register unsigned short int ADDRESS_29 = 9;
    sbit  ADDRESS_29_bit at SMB0_OWN.B9;
    const register unsigned short int ADDRESS_210 = 10;
    sbit  ADDRESS_210_bit at SMB0_OWN.B10;
    const register unsigned short int ADDRESS_211 = 11;
    sbit  ADDRESS_211_bit at SMB0_OWN.B11;
    const register unsigned short int ADDRESS_212 = 12;
    sbit  ADDRESS_212_bit at SMB0_OWN.B12;
    const register unsigned short int ADDRESS_213 = 13;
    sbit  ADDRESS_213_bit at SMB0_OWN.B13;
    const register unsigned short int ADDRESS_214 = 14;
    sbit  ADDRESS_214_bit at SMB0_OWN.B14;

sfr far unsigned short   volatile SMB0_DATA            absolute 0x40001808;
sfr far unsigned long   volatile SMB0_MASTER_COMMAND  absolute 0x4000180C;
    const register unsigned short int MRUN = 0;
    sbit  MRUN_bit at SMB0_MASTER_COMMAND.B0;
    const register unsigned short int MPROCEED = 1;
    sbit  MPROCEED_bit at SMB0_MASTER_COMMAND.B1;
    const register unsigned short int START0 = 8;
    sbit  START0_bit at SMB0_MASTER_COMMAND.B8;
    const register unsigned short int STARTN = 9;
    sbit  STARTN_bit at SMB0_MASTER_COMMAND.B9;
    const register unsigned short int STOP_ = 10;
    sbit  STOP_bit at SMB0_MASTER_COMMAND.B10;
    const register unsigned short int PEC_TERM = 11;
    sbit  PEC_TERM_bit at SMB0_MASTER_COMMAND.B11;
    const register unsigned short int READM = 12;
    sbit  READM_bit at SMB0_MASTER_COMMAND.B12;
    const register unsigned short int READ_PEC = 13;
    sbit  READ_PEC_bit at SMB0_MASTER_COMMAND.B13;
    const register unsigned short int WRITECOUNT16 = 16;
    sbit  WRITECOUNT16_bit at SMB0_MASTER_COMMAND.B16;
    const register unsigned short int WRITECOUNT17 = 17;
    sbit  WRITECOUNT17_bit at SMB0_MASTER_COMMAND.B17;
    const register unsigned short int WRITECOUNT18 = 18;
    sbit  WRITECOUNT18_bit at SMB0_MASTER_COMMAND.B18;
    const register unsigned short int WRITECOUNT19 = 19;
    sbit  WRITECOUNT19_bit at SMB0_MASTER_COMMAND.B19;
    const register unsigned short int WRITECOUNT20 = 20;
    sbit  WRITECOUNT20_bit at SMB0_MASTER_COMMAND.B20;
    const register unsigned short int WRITECOUNT21 = 21;
    sbit  WRITECOUNT21_bit at SMB0_MASTER_COMMAND.B21;
    const register unsigned short int WRITECOUNT22 = 22;
    sbit  WRITECOUNT22_bit at SMB0_MASTER_COMMAND.B22;
    const register unsigned short int WRITECOUNT23 = 23;
    sbit  WRITECOUNT23_bit at SMB0_MASTER_COMMAND.B23;
    const register unsigned short int READCOUNT24 = 24;
    sbit  READCOUNT24_bit at SMB0_MASTER_COMMAND.B24;
    const register unsigned short int READCOUNT25 = 25;
    sbit  READCOUNT25_bit at SMB0_MASTER_COMMAND.B25;
    const register unsigned short int READCOUNT26 = 26;
    sbit  READCOUNT26_bit at SMB0_MASTER_COMMAND.B26;
    const register unsigned short int READCOUNT27 = 27;
    sbit  READCOUNT27_bit at SMB0_MASTER_COMMAND.B27;
    const register unsigned short int READCOUNT28 = 28;
    sbit  READCOUNT28_bit at SMB0_MASTER_COMMAND.B28;
    const register unsigned short int READCOUNT29 = 29;
    sbit  READCOUNT29_bit at SMB0_MASTER_COMMAND.B29;
    const register unsigned short int READCOUNT30 = 30;
    sbit  READCOUNT30_bit at SMB0_MASTER_COMMAND.B30;
    const register unsigned short int READCOUNT31 = 31;
    sbit  READCOUNT31_bit at SMB0_MASTER_COMMAND.B31;

sfr far unsigned long   volatile SMB0_SLAVE_COMMAND   absolute 0x40001810;
    const register unsigned short int SRUN = 0;
    sbit  SRUN_bit at SMB0_SLAVE_COMMAND.B0;
    const register unsigned short int SPROCEED = 1;
    sbit  SPROCEED_bit at SMB0_SLAVE_COMMAND.B1;
    const register unsigned short int SLAVE_PEC = 2;
    sbit  SLAVE_PEC_bit at SMB0_SLAVE_COMMAND.B2;
    const register unsigned short int SLAVE_WRITECOUNT8 = 8;
    sbit  SLAVE_WRITECOUNT8_bit at SMB0_SLAVE_COMMAND.B8;
    const register unsigned short int SLAVE_WRITECOUNT9 = 9;
    sbit  SLAVE_WRITECOUNT9_bit at SMB0_SLAVE_COMMAND.B9;
    const register unsigned short int SLAVE_WRITECOUNT10 = 10;
    sbit  SLAVE_WRITECOUNT10_bit at SMB0_SLAVE_COMMAND.B10;
    const register unsigned short int SLAVE_WRITECOUNT11 = 11;
    sbit  SLAVE_WRITECOUNT11_bit at SMB0_SLAVE_COMMAND.B11;
    const register unsigned short int SLAVE_WRITECOUNT12 = 12;
    sbit  SLAVE_WRITECOUNT12_bit at SMB0_SLAVE_COMMAND.B12;
    const register unsigned short int SLAVE_WRITECOUNT13 = 13;
    sbit  SLAVE_WRITECOUNT13_bit at SMB0_SLAVE_COMMAND.B13;
    const register unsigned short int SLAVE_WRITECOUNT14 = 14;
    sbit  SLAVE_WRITECOUNT14_bit at SMB0_SLAVE_COMMAND.B14;
    const register unsigned short int SLAVE_WRITECOUNT15 = 15;
    sbit  SLAVE_WRITECOUNT15_bit at SMB0_SLAVE_COMMAND.B15;
    const register unsigned short int SLAVE_READCOUNT16 = 16;
    sbit  SLAVE_READCOUNT16_bit at SMB0_SLAVE_COMMAND.B16;
    const register unsigned short int SLAVE_READCOUNT17 = 17;
    sbit  SLAVE_READCOUNT17_bit at SMB0_SLAVE_COMMAND.B17;
    const register unsigned short int SLAVE_READCOUNT18 = 18;
    sbit  SLAVE_READCOUNT18_bit at SMB0_SLAVE_COMMAND.B18;
    const register unsigned short int SLAVE_READCOUNT19 = 19;
    sbit  SLAVE_READCOUNT19_bit at SMB0_SLAVE_COMMAND.B19;
    const register unsigned short int SLAVE_READCOUNT20 = 20;
    sbit  SLAVE_READCOUNT20_bit at SMB0_SLAVE_COMMAND.B20;
    const register unsigned short int SLAVE_READCOUNT21 = 21;
    sbit  SLAVE_READCOUNT21_bit at SMB0_SLAVE_COMMAND.B21;
    const register unsigned short int SLAVE_READCOUNT22 = 22;
    sbit  SLAVE_READCOUNT22_bit at SMB0_SLAVE_COMMAND.B22;
    const register unsigned short int SLAVE_READCOUNT23 = 23;
    sbit  SLAVE_READCOUNT23_bit at SMB0_SLAVE_COMMAND.B23;

sfr far unsigned short   volatile SMB0_PEC             absolute 0x40001814;
sfr far unsigned short   volatile SMB0_DATA_TIMING2    absolute 0x40001818;
sfr far unsigned long   volatile SMB0_COMPLETION      absolute 0x40001820;
    const register unsigned short int DTEN = 2;
    sbit  DTEN_bit at SMB0_COMPLETION.B2;
    const register unsigned short int MCEN = 3;
    sbit  MCEN_bit at SMB0_COMPLETION.B3;
    const register unsigned short int SCEN = 4;
    sbit  SCEN_bit at SMB0_COMPLETION.B4;
    const register unsigned short int BIDEN = 5;
    sbit  BIDEN_bit at SMB0_COMPLETION.B5;
    const register unsigned short int TIMERR = 6;
    sbit  TIMERR_bit at SMB0_COMPLETION.B6;
    const register unsigned short int DTO = 8;
    sbit  DTO_bit at SMB0_COMPLETION.B8;
    const register unsigned short int MCTO = 9;
    sbit  MCTO_bit at SMB0_COMPLETION.B9;
    const register unsigned short int SCTO = 10;
    sbit  SCTO_bit at SMB0_COMPLETION.B10;
    const register unsigned short int CHDL = 11;
    sbit  CHDL_bit at SMB0_COMPLETION.B11;
    const register unsigned short int CHDH = 12;
    sbit  CHDH_bit at SMB0_COMPLETION.B12;
    sbit  BER_SMB0_COMPLETION_bit at SMB0_COMPLETION.B13;
    sbit  LAB_SMB0_COMPLETION_bit at SMB0_COMPLETION.B14;
    const register unsigned short int SNAKR = 16;
    sbit  SNAKR_bit at SMB0_COMPLETION.B16;
    const register unsigned short int STR_ = 17;
    sbit  STR_bit at SMB0_COMPLETION.B17;
    const register unsigned short int SPROT = 19;
    sbit  SPROT_bit at SMB0_COMPLETION.B19;
    const register unsigned short int REPEAT_READ = 20;
    sbit  REPEAT_READ_bit at SMB0_COMPLETION.B20;
    const register unsigned short int REPEAT_WRITE = 21;
    sbit  REPEAT_WRITE_bit at SMB0_COMPLETION.B21;
    const register unsigned short int MNAKX = 24;
    sbit  MNAKX_bit at SMB0_COMPLETION.B24;
    const register unsigned short int MTR = 25;
    sbit  MTR_bit at SMB0_COMPLETION.B25;
    const register unsigned short int IDLE = 29;
    sbit  IDLE_bit at SMB0_COMPLETION.B29;
    const register unsigned short int MDONE = 30;
    sbit  MDONE_bit at SMB0_COMPLETION.B30;
    const register unsigned short int SDONE = 31;
    sbit  SDONE_bit at SMB0_COMPLETION.B31;

sfr far unsigned long   volatile SMB0_IDLE_SCALING    absolute 0x40001824;
    const register unsigned short int FAIR_BUS_IDLE_MIN0 = 0;
    sbit  FAIR_BUS_IDLE_MIN0_bit at SMB0_IDLE_SCALING.B0;
    const register unsigned short int FAIR_BUS_IDLE_MIN1 = 1;
    sbit  FAIR_BUS_IDLE_MIN1_bit at SMB0_IDLE_SCALING.B1;
    const register unsigned short int FAIR_BUS_IDLE_MIN2 = 2;
    sbit  FAIR_BUS_IDLE_MIN2_bit at SMB0_IDLE_SCALING.B2;
    const register unsigned short int FAIR_BUS_IDLE_MIN3 = 3;
    sbit  FAIR_BUS_IDLE_MIN3_bit at SMB0_IDLE_SCALING.B3;
    const register unsigned short int FAIR_BUS_IDLE_MIN4 = 4;
    sbit  FAIR_BUS_IDLE_MIN4_bit at SMB0_IDLE_SCALING.B4;
    const register unsigned short int FAIR_BUS_IDLE_MIN5 = 5;
    sbit  FAIR_BUS_IDLE_MIN5_bit at SMB0_IDLE_SCALING.B5;
    const register unsigned short int FAIR_BUS_IDLE_MIN6 = 6;
    sbit  FAIR_BUS_IDLE_MIN6_bit at SMB0_IDLE_SCALING.B6;
    const register unsigned short int FAIR_BUS_IDLE_MIN7 = 7;
    sbit  FAIR_BUS_IDLE_MIN7_bit at SMB0_IDLE_SCALING.B7;
    const register unsigned short int FAIR_BUS_IDLE_MIN8 = 8;
    sbit  FAIR_BUS_IDLE_MIN8_bit at SMB0_IDLE_SCALING.B8;
    const register unsigned short int FAIR_BUS_IDLE_MIN9 = 9;
    sbit  FAIR_BUS_IDLE_MIN9_bit at SMB0_IDLE_SCALING.B9;
    const register unsigned short int FAIR_BUS_IDLE_MIN10 = 10;
    sbit  FAIR_BUS_IDLE_MIN10_bit at SMB0_IDLE_SCALING.B10;
    const register unsigned short int FAIR_BUS_IDLE_MIN11 = 11;
    sbit  FAIR_BUS_IDLE_MIN11_bit at SMB0_IDLE_SCALING.B11;
    const register unsigned short int FAIR_IDLE_DELAY16 = 16;
    sbit  FAIR_IDLE_DELAY16_bit at SMB0_IDLE_SCALING.B16;
    const register unsigned short int FAIR_IDLE_DELAY17 = 17;
    sbit  FAIR_IDLE_DELAY17_bit at SMB0_IDLE_SCALING.B17;
    const register unsigned short int FAIR_IDLE_DELAY18 = 18;
    sbit  FAIR_IDLE_DELAY18_bit at SMB0_IDLE_SCALING.B18;
    const register unsigned short int FAIR_IDLE_DELAY19 = 19;
    sbit  FAIR_IDLE_DELAY19_bit at SMB0_IDLE_SCALING.B19;
    const register unsigned short int FAIR_IDLE_DELAY20 = 20;
    sbit  FAIR_IDLE_DELAY20_bit at SMB0_IDLE_SCALING.B20;
    const register unsigned short int FAIR_IDLE_DELAY21 = 21;
    sbit  FAIR_IDLE_DELAY21_bit at SMB0_IDLE_SCALING.B21;
    const register unsigned short int FAIR_IDLE_DELAY22 = 22;
    sbit  FAIR_IDLE_DELAY22_bit at SMB0_IDLE_SCALING.B22;
    const register unsigned short int FAIR_IDLE_DELAY23 = 23;
    sbit  FAIR_IDLE_DELAY23_bit at SMB0_IDLE_SCALING.B23;
    const register unsigned short int FAIR_IDLE_DELAY24 = 24;
    sbit  FAIR_IDLE_DELAY24_bit at SMB0_IDLE_SCALING.B24;
    const register unsigned short int FAIR_IDLE_DELAY25 = 25;
    sbit  FAIR_IDLE_DELAY25_bit at SMB0_IDLE_SCALING.B25;
    const register unsigned short int FAIR_IDLE_DELAY26 = 26;
    sbit  FAIR_IDLE_DELAY26_bit at SMB0_IDLE_SCALING.B26;
    const register unsigned short int FAIR_IDLE_DELAY27 = 27;
    sbit  FAIR_IDLE_DELAY27_bit at SMB0_IDLE_SCALING.B27;

sfr far unsigned long   volatile SMB0_CONFIGURATION   absolute 0x40001828;
    const register unsigned short int PORT_SEL0 = 0;
    sbit  PORT_SEL0_bit at SMB0_CONFIGURATION.B0;
    const register unsigned short int PORT_SEL1 = 1;
    sbit  PORT_SEL1_bit at SMB0_CONFIGURATION.B1;
    const register unsigned short int PORT_SEL2 = 2;
    sbit  PORT_SEL2_bit at SMB0_CONFIGURATION.B2;
    const register unsigned short int PORT_SEL3 = 3;
    sbit  PORT_SEL3_bit at SMB0_CONFIGURATION.B3;
    const register unsigned short int TCEN = 4;
    sbit  TCEN_bit at SMB0_CONFIGURATION.B4;
    const register unsigned short int SLOW_CLOCK = 5;
    sbit  SLOW_CLOCK_bit at SMB0_CONFIGURATION.B5;
    const register unsigned short int PECEN = 7;
    sbit  PECEN_bit at SMB0_CONFIGURATION.B7;
    const register unsigned short int DFEN = 8;
    sbit  DFEN_bit at SMB0_CONFIGURATION.B8;
    const register unsigned short int RESET_ = 9;
    sbit  RESET_bit at SMB0_CONFIGURATION.B9;
    const register unsigned short int ENAB = 10;
    sbit  ENAB_bit at SMB0_CONFIGURATION.B10;
    const register unsigned short int DSA = 11;
    sbit  DSA_bit at SMB0_CONFIGURATION.B11;
    const register unsigned short int FAIR = 12;
    sbit  FAIR_bit at SMB0_CONFIGURATION.B12;
    const register unsigned short int GC_DIS = 14;
    sbit  GC_DIS_bit at SMB0_CONFIGURATION.B14;
    const register unsigned short int FLUSH_SXBUF = 16;
    sbit  FLUSH_SXBUF_bit at SMB0_CONFIGURATION.B16;
    const register unsigned short int FLUSH_SRBUF = 17;
    sbit  FLUSH_SRBUF_bit at SMB0_CONFIGURATION.B17;
    const register unsigned short int FLUSH_MXBUF = 18;
    sbit  FLUSH_MXBUF_bit at SMB0_CONFIGURATION.B18;
    const register unsigned short int FLUSH_MRBUF = 19;
    sbit  FLUSH_MRBUF_bit at SMB0_CONFIGURATION.B19;
    const register unsigned short int EN_AAS = 28;
    sbit  EN_AAS_bit at SMB0_CONFIGURATION.B28;
    const register unsigned short int ENIDI = 29;
    sbit  ENIDI_bit at SMB0_CONFIGURATION.B29;
    const register unsigned short int ENMI = 30;
    sbit  ENMI_bit at SMB0_CONFIGURATION.B30;
    const register unsigned short int ENSI = 31;
    sbit  ENSI_bit at SMB0_CONFIGURATION.B31;

sfr far unsigned int   volatile SMB0_BUS_CLOCK       absolute 0x4000182C;
    const register unsigned short int LOW_PERIOD0 = 0;
    sbit  LOW_PERIOD0_bit at SMB0_BUS_CLOCK.B0;
    const register unsigned short int LOW_PERIOD1 = 1;
    sbit  LOW_PERIOD1_bit at SMB0_BUS_CLOCK.B1;
    const register unsigned short int LOW_PERIOD2 = 2;
    sbit  LOW_PERIOD2_bit at SMB0_BUS_CLOCK.B2;
    const register unsigned short int LOW_PERIOD3 = 3;
    sbit  LOW_PERIOD3_bit at SMB0_BUS_CLOCK.B3;
    const register unsigned short int LOW_PERIOD4 = 4;
    sbit  LOW_PERIOD4_bit at SMB0_BUS_CLOCK.B4;
    const register unsigned short int LOW_PERIOD5 = 5;
    sbit  LOW_PERIOD5_bit at SMB0_BUS_CLOCK.B5;
    const register unsigned short int LOW_PERIOD6 = 6;
    sbit  LOW_PERIOD6_bit at SMB0_BUS_CLOCK.B6;
    const register unsigned short int LOW_PERIOD7 = 7;
    sbit  LOW_PERIOD7_bit at SMB0_BUS_CLOCK.B7;
    const register unsigned short int HIGH_PERIOD8 = 8;
    sbit  HIGH_PERIOD8_bit at SMB0_BUS_CLOCK.B8;
    const register unsigned short int HIGH_PERIOD9 = 9;
    sbit  HIGH_PERIOD9_bit at SMB0_BUS_CLOCK.B9;
    const register unsigned short int HIGH_PERIOD10 = 10;
    sbit  HIGH_PERIOD10_bit at SMB0_BUS_CLOCK.B10;
    const register unsigned short int HIGH_PERIOD11 = 11;
    sbit  HIGH_PERIOD11_bit at SMB0_BUS_CLOCK.B11;
    const register unsigned short int HIGH_PERIOD12 = 12;
    sbit  HIGH_PERIOD12_bit at SMB0_BUS_CLOCK.B12;
    const register unsigned short int HIGH_PERIOD13 = 13;
    sbit  HIGH_PERIOD13_bit at SMB0_BUS_CLOCK.B13;
    const register unsigned short int HIGH_PERIOD14 = 14;
    sbit  HIGH_PERIOD14_bit at SMB0_BUS_CLOCK.B14;
    const register unsigned short int HIGH_PERIOD15 = 15;
    sbit  HIGH_PERIOD15_bit at SMB0_BUS_CLOCK.B15;

sfr far unsigned short   volatile SMB0_BLOCK_ID        absolute 0x40001830;
sfr far unsigned short   volatile SMB0_REVISION        absolute 0x40001834;
sfr far unsigned short   volatile SMB0_BIT_BANG_CONTROL absolute 0x40001838;
    const register unsigned short int BBEN = 0;
    sbit  BBEN_bit at SMB0_BIT_BANG_CONTROL.B0;
    const register unsigned short int CLDIR = 1;
    sbit  CLDIR_bit at SMB0_BIT_BANG_CONTROL.B1;
    const register unsigned short int DADIR = 2;
    sbit  DADIR_bit at SMB0_BIT_BANG_CONTROL.B2;
    const register unsigned short int BBCLK = 3;
    sbit  BBCLK_bit at SMB0_BIT_BANG_CONTROL.B3;
    const register unsigned short int BBDAT = 4;
    sbit  BBDAT_bit at SMB0_BIT_BANG_CONTROL.B4;
    const register unsigned short int BBCLKI = 5;
    sbit  BBCLKI_bit at SMB0_BIT_BANG_CONTROL.B5;
    const register unsigned short int BBDATI = 6;
    sbit  BBDATI_bit at SMB0_BIT_BANG_CONTROL.B6;

sfr far unsigned long   volatile SMB0_DATA_TIMING     absolute 0x40001840;
    const register unsigned short int DATA_HOLD0 = 0;
    sbit  DATA_HOLD0_bit at SMB0_DATA_TIMING.B0;
    const register unsigned short int DATA_HOLD1 = 1;
    sbit  DATA_HOLD1_bit at SMB0_DATA_TIMING.B1;
    const register unsigned short int DATA_HOLD2 = 2;
    sbit  DATA_HOLD2_bit at SMB0_DATA_TIMING.B2;
    const register unsigned short int DATA_HOLD3 = 3;
    sbit  DATA_HOLD3_bit at SMB0_DATA_TIMING.B3;
    const register unsigned short int DATA_HOLD4 = 4;
    sbit  DATA_HOLD4_bit at SMB0_DATA_TIMING.B4;
    const register unsigned short int DATA_HOLD5 = 5;
    sbit  DATA_HOLD5_bit at SMB0_DATA_TIMING.B5;
    const register unsigned short int DATA_HOLD6 = 6;
    sbit  DATA_HOLD6_bit at SMB0_DATA_TIMING.B6;
    const register unsigned short int DATA_HOLD7 = 7;
    sbit  DATA_HOLD7_bit at SMB0_DATA_TIMING.B7;
    const register unsigned short int RESTART_SETUP8 = 8;
    sbit  RESTART_SETUP8_bit at SMB0_DATA_TIMING.B8;
    const register unsigned short int RESTART_SETUP9 = 9;
    sbit  RESTART_SETUP9_bit at SMB0_DATA_TIMING.B9;
    const register unsigned short int RESTART_SETUP10 = 10;
    sbit  RESTART_SETUP10_bit at SMB0_DATA_TIMING.B10;
    const register unsigned short int RESTART_SETUP11 = 11;
    sbit  RESTART_SETUP11_bit at SMB0_DATA_TIMING.B11;
    const register unsigned short int RESTART_SETUP12 = 12;
    sbit  RESTART_SETUP12_bit at SMB0_DATA_TIMING.B12;
    const register unsigned short int RESTART_SETUP13 = 13;
    sbit  RESTART_SETUP13_bit at SMB0_DATA_TIMING.B13;
    const register unsigned short int RESTART_SETUP14 = 14;
    sbit  RESTART_SETUP14_bit at SMB0_DATA_TIMING.B14;
    const register unsigned short int RESTART_SETUP15 = 15;
    sbit  RESTART_SETUP15_bit at SMB0_DATA_TIMING.B15;
    const register unsigned short int STOP_SETUP16 = 16;
    sbit  STOP_SETUP16_bit at SMB0_DATA_TIMING.B16;
    const register unsigned short int STOP_SETUP17 = 17;
    sbit  STOP_SETUP17_bit at SMB0_DATA_TIMING.B17;
    const register unsigned short int STOP_SETUP18 = 18;
    sbit  STOP_SETUP18_bit at SMB0_DATA_TIMING.B18;
    const register unsigned short int STOP_SETUP19 = 19;
    sbit  STOP_SETUP19_bit at SMB0_DATA_TIMING.B19;
    const register unsigned short int STOP_SETUP20 = 20;
    sbit  STOP_SETUP20_bit at SMB0_DATA_TIMING.B20;
    const register unsigned short int STOP_SETUP21 = 21;
    sbit  STOP_SETUP21_bit at SMB0_DATA_TIMING.B21;
    const register unsigned short int STOP_SETUP22 = 22;
    sbit  STOP_SETUP22_bit at SMB0_DATA_TIMING.B22;
    const register unsigned short int STOP_SETUP23 = 23;
    sbit  STOP_SETUP23_bit at SMB0_DATA_TIMING.B23;
    const register unsigned short int START_HOLD24 = 24;
    sbit  START_HOLD24_bit at SMB0_DATA_TIMING.B24;
    const register unsigned short int START_HOLD25 = 25;
    sbit  START_HOLD25_bit at SMB0_DATA_TIMING.B25;
    const register unsigned short int START_HOLD26 = 26;
    sbit  START_HOLD26_bit at SMB0_DATA_TIMING.B26;
    const register unsigned short int START_HOLD27 = 27;
    sbit  START_HOLD27_bit at SMB0_DATA_TIMING.B27;
    const register unsigned short int START_HOLD28 = 28;
    sbit  START_HOLD28_bit at SMB0_DATA_TIMING.B28;
    const register unsigned short int START_HOLD29 = 29;
    sbit  START_HOLD29_bit at SMB0_DATA_TIMING.B29;
    const register unsigned short int START_HOLD30 = 30;
    sbit  START_HOLD30_bit at SMB0_DATA_TIMING.B30;
    const register unsigned short int START_HOLD31 = 31;
    sbit  START_HOLD31_bit at SMB0_DATA_TIMING.B31;

sfr far unsigned long   volatile SMB0_TIME_OUT_SCALING absolute 0x40001844;
    const register unsigned short int CLOCK_HIGH0 = 0;
    sbit  CLOCK_HIGH0_bit at SMB0_TIME_OUT_SCALING.B0;
    const register unsigned short int CLOCK_HIGH1 = 1;
    sbit  CLOCK_HIGH1_bit at SMB0_TIME_OUT_SCALING.B1;
    const register unsigned short int CLOCK_HIGH2 = 2;
    sbit  CLOCK_HIGH2_bit at SMB0_TIME_OUT_SCALING.B2;
    const register unsigned short int CLOCK_HIGH3 = 3;
    sbit  CLOCK_HIGH3_bit at SMB0_TIME_OUT_SCALING.B3;
    const register unsigned short int CLOCK_HIGH4 = 4;
    sbit  CLOCK_HIGH4_bit at SMB0_TIME_OUT_SCALING.B4;
    const register unsigned short int CLOCK_HIGH5 = 5;
    sbit  CLOCK_HIGH5_bit at SMB0_TIME_OUT_SCALING.B5;
    const register unsigned short int CLOCK_HIGH6 = 6;
    sbit  CLOCK_HIGH6_bit at SMB0_TIME_OUT_SCALING.B6;
    const register unsigned short int CLOCK_HIGH7 = 7;
    sbit  CLOCK_HIGH7_bit at SMB0_TIME_OUT_SCALING.B7;
    const register unsigned short int SLAVE_CUM8 = 8;
    sbit  SLAVE_CUM8_bit at SMB0_TIME_OUT_SCALING.B8;
    const register unsigned short int SLAVE_CUM9 = 9;
    sbit  SLAVE_CUM9_bit at SMB0_TIME_OUT_SCALING.B9;
    const register unsigned short int SLAVE_CUM10 = 10;
    sbit  SLAVE_CUM10_bit at SMB0_TIME_OUT_SCALING.B10;
    const register unsigned short int SLAVE_CUM11 = 11;
    sbit  SLAVE_CUM11_bit at SMB0_TIME_OUT_SCALING.B11;
    const register unsigned short int SLAVE_CUM12 = 12;
    sbit  SLAVE_CUM12_bit at SMB0_TIME_OUT_SCALING.B12;
    const register unsigned short int SLAVE_CUM13 = 13;
    sbit  SLAVE_CUM13_bit at SMB0_TIME_OUT_SCALING.B13;
    const register unsigned short int SLAVE_CUM14 = 14;
    sbit  SLAVE_CUM14_bit at SMB0_TIME_OUT_SCALING.B14;
    const register unsigned short int SLAVE_CUM15 = 15;
    sbit  SLAVE_CUM15_bit at SMB0_TIME_OUT_SCALING.B15;
    const register unsigned short int MASTER_CUM16 = 16;
    sbit  MASTER_CUM16_bit at SMB0_TIME_OUT_SCALING.B16;
    const register unsigned short int MASTER_CUM17 = 17;
    sbit  MASTER_CUM17_bit at SMB0_TIME_OUT_SCALING.B17;
    const register unsigned short int MASTER_CUM18 = 18;
    sbit  MASTER_CUM18_bit at SMB0_TIME_OUT_SCALING.B18;
    const register unsigned short int MASTER_CUM19 = 19;
    sbit  MASTER_CUM19_bit at SMB0_TIME_OUT_SCALING.B19;
    const register unsigned short int MASTER_CUM20 = 20;
    sbit  MASTER_CUM20_bit at SMB0_TIME_OUT_SCALING.B20;
    const register unsigned short int MASTER_CUM21 = 21;
    sbit  MASTER_CUM21_bit at SMB0_TIME_OUT_SCALING.B21;
    const register unsigned short int MASTER_CUM22 = 22;
    sbit  MASTER_CUM22_bit at SMB0_TIME_OUT_SCALING.B22;
    const register unsigned short int MASTER_CUM23 = 23;
    sbit  MASTER_CUM23_bit at SMB0_TIME_OUT_SCALING.B23;
    const register unsigned short int BUS_IDLE_MIN24 = 24;
    sbit  BUS_IDLE_MIN24_bit at SMB0_TIME_OUT_SCALING.B24;
    const register unsigned short int BUS_IDLE_MIN25 = 25;
    sbit  BUS_IDLE_MIN25_bit at SMB0_TIME_OUT_SCALING.B25;
    const register unsigned short int BUS_IDLE_MIN26 = 26;
    sbit  BUS_IDLE_MIN26_bit at SMB0_TIME_OUT_SCALING.B26;
    const register unsigned short int BUS_IDLE_MIN27 = 27;
    sbit  BUS_IDLE_MIN27_bit at SMB0_TIME_OUT_SCALING.B27;
    const register unsigned short int BUS_IDLE_MIN28 = 28;
    sbit  BUS_IDLE_MIN28_bit at SMB0_TIME_OUT_SCALING.B28;
    const register unsigned short int BUS_IDLE_MIN29 = 29;
    sbit  BUS_IDLE_MIN29_bit at SMB0_TIME_OUT_SCALING.B29;
    const register unsigned short int BUS_IDLE_MIN30 = 30;
    sbit  BUS_IDLE_MIN30_bit at SMB0_TIME_OUT_SCALING.B30;
    const register unsigned short int BUS_IDLE_MIN31 = 31;
    sbit  BUS_IDLE_MIN31_bit at SMB0_TIME_OUT_SCALING.B31;

sfr far unsigned short   volatile SMB0_SLAVE_TRANSMIT_BUFFER absolute 0x40001848;
sfr far unsigned short   volatile SMB0_SLAVE_RECEIVE_BUFFER absolute 0x4000184C;
sfr far unsigned short   volatile SMB0_MASTER_TRANSMIT_BUFER absolute 0x40001850;
sfr far unsigned short   volatile SMB0_MASTER_RECEIVE_BUFFER absolute 0x40001854;
sfr far unsigned short   volatile SMB1_CONTROL         absolute 0x4000AC00;
    sbit  ACK_SMB1_CONTROL_bit at SMB1_CONTROL.B0;
    sbit  STO_SMB1_CONTROL_bit at SMB1_CONTROL.B1;
    sbit  STA_SMB1_CONTROL_bit at SMB1_CONTROL.B2;
    sbit  ENI_SMB1_CONTROL_bit at SMB1_CONTROL.B3;
    sbit  ESO_SMB1_CONTROL_bit at SMB1_CONTROL.B6;
    sbit  PIN_SMB1_CONTROL_bit at SMB1_CONTROL.B7;

sfr far unsigned short   volatile SMB1_STATUS          absolute 0x4000AC00;
    sbit  nBB_SMB1_STATUS_bit at SMB1_STATUS.B0;
    sbit  LAB_SMB1_STATUS_bit at SMB1_STATUS.B1;
    sbit  AAS_SMB1_STATUS_bit at SMB1_STATUS.B2;
    sbit  LRB_AD0_SMB1_STATUS_bit at SMB1_STATUS.B3;
    sbit  BER_SMB1_STATUS_bit at SMB1_STATUS.B4;
    sbit  STS_SMB1_STATUS_bit at SMB1_STATUS.B5;
    sbit  SAD_SMB1_STATUS_bit at SMB1_STATUS.B6;
    sbit  PIN_SMB1_STATUS_bit at SMB1_STATUS.B7;

sfr far unsigned int   volatile SMB1_OWN             absolute 0x4000AC04;
    sbit  ADDRESS_10_SMB1_OWN_bit at SMB1_OWN.B0;
    sbit  ADDRESS_11_SMB1_OWN_bit at SMB1_OWN.B1;
    sbit  ADDRESS_12_SMB1_OWN_bit at SMB1_OWN.B2;
    sbit  ADDRESS_13_SMB1_OWN_bit at SMB1_OWN.B3;
    sbit  ADDRESS_14_SMB1_OWN_bit at SMB1_OWN.B4;
    sbit  ADDRESS_15_SMB1_OWN_bit at SMB1_OWN.B5;
    sbit  ADDRESS_16_SMB1_OWN_bit at SMB1_OWN.B6;
    sbit  ADDRESS_28_SMB1_OWN_bit at SMB1_OWN.B8;
    sbit  ADDRESS_29_SMB1_OWN_bit at SMB1_OWN.B9;
    sbit  ADDRESS_210_SMB1_OWN_bit at SMB1_OWN.B10;
    sbit  ADDRESS_211_SMB1_OWN_bit at SMB1_OWN.B11;
    sbit  ADDRESS_212_SMB1_OWN_bit at SMB1_OWN.B12;
    sbit  ADDRESS_213_SMB1_OWN_bit at SMB1_OWN.B13;
    sbit  ADDRESS_214_SMB1_OWN_bit at SMB1_OWN.B14;

sfr far unsigned short   volatile SMB1_DATA            absolute 0x4000AC08;
sfr far unsigned long   volatile SMB1_MASTER_COMMAND  absolute 0x4000AC0C;
    sbit  MRUN_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B0;
    sbit  MPROCEED_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B1;
    sbit  START0_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B8;
    sbit  STARTN_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B9;
    sbit  STOP_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B10;
    sbit  PEC_TERM_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B11;
    sbit  READM_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B12;
    sbit  READ_PEC_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B13;
    sbit  WRITECOUNT16_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B16;
    sbit  WRITECOUNT17_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B17;
    sbit  WRITECOUNT18_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B18;
    sbit  WRITECOUNT19_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B19;
    sbit  WRITECOUNT20_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B20;
    sbit  WRITECOUNT21_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B21;
    sbit  WRITECOUNT22_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B22;
    sbit  WRITECOUNT23_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B23;
    sbit  READCOUNT24_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B24;
    sbit  READCOUNT25_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B25;
    sbit  READCOUNT26_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B26;
    sbit  READCOUNT27_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B27;
    sbit  READCOUNT28_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B28;
    sbit  READCOUNT29_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B29;
    sbit  READCOUNT30_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B30;
    sbit  READCOUNT31_SMB1_MASTER_COMMAND_bit at SMB1_MASTER_COMMAND.B31;

sfr far unsigned long   volatile SMB1_SLAVE_COMMAND   absolute 0x4000AC10;
    sbit  SRUN_SMB1_SLAVE_COMMAND_bit at SMB1_SLAVE_COMMAND.B0;
    sbit  SPROCEED_SMB1_SLAVE_COMMAND_bit at SMB1_SLAVE_COMMAND.B1;
    sbit  SLAVE_PEC_SMB1_SLAVE_COMMAND_bit at SMB1_SLAVE_COMMAND.B2;
    sbit  SLAVE_WRITECOUNT8_SMB1_SLAVE_COMMAND_bit at SMB1_SLAVE_COMMAND.B8;
    sbit  SLAVE_WRITECOUNT9_SMB1_SLAVE_COMMAND_bit at SMB1_SLAVE_COMMAND.B9;
    sbit  SLAVE_WRITECOUNT10_SMB1_SLAVE_COMMAND_bit at SMB1_SLAVE_COMMAND.B10;
    sbit  SLAVE_WRITECOUNT11_SMB1_SLAVE_COMMAND_bit at SMB1_SLAVE_COMMAND.B11;
    sbit  SLAVE_WRITECOUNT12_SMB1_SLAVE_COMMAND_bit at SMB1_SLAVE_COMMAND.B12;
    sbit  SLAVE_WRITECOUNT13_SMB1_SLAVE_COMMAND_bit at SMB1_SLAVE_COMMAND.B13;
    sbit  SLAVE_WRITECOUNT14_SMB1_SLAVE_COMMAND_bit at SMB1_SLAVE_COMMAND.B14;
    sbit  SLAVE_WRITECOUNT15_SMB1_SLAVE_COMMAND_bit at SMB1_SLAVE_COMMAND.B15;
    sbit  SLAVE_READCOUNT16_SMB1_SLAVE_COMMAND_bit at SMB1_SLAVE_COMMAND.B16;
    sbit  SLAVE_READCOUNT17_SMB1_SLAVE_COMMAND_bit at SMB1_SLAVE_COMMAND.B17;
    sbit  SLAVE_READCOUNT18_SMB1_SLAVE_COMMAND_bit at SMB1_SLAVE_COMMAND.B18;
    sbit  SLAVE_READCOUNT19_SMB1_SLAVE_COMMAND_bit at SMB1_SLAVE_COMMAND.B19;
    sbit  SLAVE_READCOUNT20_SMB1_SLAVE_COMMAND_bit at SMB1_SLAVE_COMMAND.B20;
    sbit  SLAVE_READCOUNT21_SMB1_SLAVE_COMMAND_bit at SMB1_SLAVE_COMMAND.B21;
    sbit  SLAVE_READCOUNT22_SMB1_SLAVE_COMMAND_bit at SMB1_SLAVE_COMMAND.B22;
    sbit  SLAVE_READCOUNT23_SMB1_SLAVE_COMMAND_bit at SMB1_SLAVE_COMMAND.B23;

sfr far unsigned short   volatile SMB1_PEC             absolute 0x4000AC14;
sfr far unsigned short   volatile SMB1_DATA_TIMING2    absolute 0x4000AC18;
sfr far unsigned long   volatile SMB1_COMPLETION      absolute 0x4000AC20;
    sbit  DTEN_SMB1_COMPLETION_bit at SMB1_COMPLETION.B2;
    sbit  MCEN_SMB1_COMPLETION_bit at SMB1_COMPLETION.B3;
    sbit  SCEN_SMB1_COMPLETION_bit at SMB1_COMPLETION.B4;
    sbit  BIDEN_SMB1_COMPLETION_bit at SMB1_COMPLETION.B5;
    sbit  TIMERR_SMB1_COMPLETION_bit at SMB1_COMPLETION.B6;
    sbit  DTO_SMB1_COMPLETION_bit at SMB1_COMPLETION.B8;
    sbit  MCTO_SMB1_COMPLETION_bit at SMB1_COMPLETION.B9;
    sbit  SCTO_SMB1_COMPLETION_bit at SMB1_COMPLETION.B10;
    sbit  CHDL_SMB1_COMPLETION_bit at SMB1_COMPLETION.B11;
    sbit  CHDH_SMB1_COMPLETION_bit at SMB1_COMPLETION.B12;
    sbit  BER_SMB1_COMPLETION_bit at SMB1_COMPLETION.B13;
    sbit  LAB_SMB1_COMPLETION_bit at SMB1_COMPLETION.B14;
    sbit  SNAKR_SMB1_COMPLETION_bit at SMB1_COMPLETION.B16;
    sbit  STR_SMB1_COMPLETION_bit at SMB1_COMPLETION.B17;
    sbit  SPROT_SMB1_COMPLETION_bit at SMB1_COMPLETION.B19;
    sbit  REPEAT_READ_SMB1_COMPLETION_bit at SMB1_COMPLETION.B20;
    sbit  REPEAT_WRITE_SMB1_COMPLETION_bit at SMB1_COMPLETION.B21;
    sbit  MNAKX_SMB1_COMPLETION_bit at SMB1_COMPLETION.B24;
    sbit  MTR_SMB1_COMPLETION_bit at SMB1_COMPLETION.B25;
    sbit  IDLE_SMB1_COMPLETION_bit at SMB1_COMPLETION.B29;
    sbit  MDONE_SMB1_COMPLETION_bit at SMB1_COMPLETION.B30;
    sbit  SDONE_SMB1_COMPLETION_bit at SMB1_COMPLETION.B31;

sfr far unsigned long   volatile SMB1_IDLE_SCALING    absolute 0x4000AC24;
    sbit  FAIR_BUS_IDLE_MIN0_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B0;
    sbit  FAIR_BUS_IDLE_MIN1_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B1;
    sbit  FAIR_BUS_IDLE_MIN2_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B2;
    sbit  FAIR_BUS_IDLE_MIN3_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B3;
    sbit  FAIR_BUS_IDLE_MIN4_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B4;
    sbit  FAIR_BUS_IDLE_MIN5_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B5;
    sbit  FAIR_BUS_IDLE_MIN6_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B6;
    sbit  FAIR_BUS_IDLE_MIN7_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B7;
    sbit  FAIR_BUS_IDLE_MIN8_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B8;
    sbit  FAIR_BUS_IDLE_MIN9_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B9;
    sbit  FAIR_BUS_IDLE_MIN10_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B10;
    sbit  FAIR_BUS_IDLE_MIN11_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B11;
    sbit  FAIR_IDLE_DELAY16_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B16;
    sbit  FAIR_IDLE_DELAY17_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B17;
    sbit  FAIR_IDLE_DELAY18_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B18;
    sbit  FAIR_IDLE_DELAY19_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B19;
    sbit  FAIR_IDLE_DELAY20_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B20;
    sbit  FAIR_IDLE_DELAY21_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B21;
    sbit  FAIR_IDLE_DELAY22_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B22;
    sbit  FAIR_IDLE_DELAY23_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B23;
    sbit  FAIR_IDLE_DELAY24_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B24;
    sbit  FAIR_IDLE_DELAY25_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B25;
    sbit  FAIR_IDLE_DELAY26_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B26;
    sbit  FAIR_IDLE_DELAY27_SMB1_IDLE_SCALING_bit at SMB1_IDLE_SCALING.B27;

sfr far unsigned long   volatile SMB1_CONFIGURATION   absolute 0x4000AC28;
    sbit  PORT_SEL0_SMB1_CONFIGURATION_bit at SMB1_CONFIGURATION.B0;
    sbit  PORT_SEL1_SMB1_CONFIGURATION_bit at SMB1_CONFIGURATION.B1;
    sbit  PORT_SEL2_SMB1_CONFIGURATION_bit at SMB1_CONFIGURATION.B2;
    sbit  PORT_SEL3_SMB1_CONFIGURATION_bit at SMB1_CONFIGURATION.B3;
    sbit  TCEN_SMB1_CONFIGURATION_bit at SMB1_CONFIGURATION.B4;
    sbit  SLOW_CLOCK_SMB1_CONFIGURATION_bit at SMB1_CONFIGURATION.B5;
    sbit  PECEN_SMB1_CONFIGURATION_bit at SMB1_CONFIGURATION.B7;
    sbit  DFEN_SMB1_CONFIGURATION_bit at SMB1_CONFIGURATION.B8;
    sbit  RESET_SMB1_CONFIGURATION_bit at SMB1_CONFIGURATION.B9;
    sbit  ENAB_SMB1_CONFIGURATION_bit at SMB1_CONFIGURATION.B10;
    sbit  DSA_SMB1_CONFIGURATION_bit at SMB1_CONFIGURATION.B11;
    sbit  FAIR_SMB1_CONFIGURATION_bit at SMB1_CONFIGURATION.B12;
    sbit  GC_DIS_SMB1_CONFIGURATION_bit at SMB1_CONFIGURATION.B14;
    sbit  FLUSH_SXBUF_SMB1_CONFIGURATION_bit at SMB1_CONFIGURATION.B16;
    sbit  FLUSH_SRBUF_SMB1_CONFIGURATION_bit at SMB1_CONFIGURATION.B17;
    sbit  FLUSH_MXBUF_SMB1_CONFIGURATION_bit at SMB1_CONFIGURATION.B18;
    sbit  FLUSH_MRBUF_SMB1_CONFIGURATION_bit at SMB1_CONFIGURATION.B19;
    sbit  EN_AAS_SMB1_CONFIGURATION_bit at SMB1_CONFIGURATION.B28;
    sbit  ENIDI_SMB1_CONFIGURATION_bit at SMB1_CONFIGURATION.B29;
    sbit  ENMI_SMB1_CONFIGURATION_bit at SMB1_CONFIGURATION.B30;
    sbit  ENSI_SMB1_CONFIGURATION_bit at SMB1_CONFIGURATION.B31;

sfr far unsigned int   volatile SMB1_BUS_CLOCK       absolute 0x4000AC2C;
    sbit  LOW_PERIOD0_SMB1_BUS_CLOCK_bit at SMB1_BUS_CLOCK.B0;
    sbit  LOW_PERIOD1_SMB1_BUS_CLOCK_bit at SMB1_BUS_CLOCK.B1;
    sbit  LOW_PERIOD2_SMB1_BUS_CLOCK_bit at SMB1_BUS_CLOCK.B2;
    sbit  LOW_PERIOD3_SMB1_BUS_CLOCK_bit at SMB1_BUS_CLOCK.B3;
    sbit  LOW_PERIOD4_SMB1_BUS_CLOCK_bit at SMB1_BUS_CLOCK.B4;
    sbit  LOW_PERIOD5_SMB1_BUS_CLOCK_bit at SMB1_BUS_CLOCK.B5;
    sbit  LOW_PERIOD6_SMB1_BUS_CLOCK_bit at SMB1_BUS_CLOCK.B6;
    sbit  LOW_PERIOD7_SMB1_BUS_CLOCK_bit at SMB1_BUS_CLOCK.B7;
    sbit  HIGH_PERIOD8_SMB1_BUS_CLOCK_bit at SMB1_BUS_CLOCK.B8;
    sbit  HIGH_PERIOD9_SMB1_BUS_CLOCK_bit at SMB1_BUS_CLOCK.B9;
    sbit  HIGH_PERIOD10_SMB1_BUS_CLOCK_bit at SMB1_BUS_CLOCK.B10;
    sbit  HIGH_PERIOD11_SMB1_BUS_CLOCK_bit at SMB1_BUS_CLOCK.B11;
    sbit  HIGH_PERIOD12_SMB1_BUS_CLOCK_bit at SMB1_BUS_CLOCK.B12;
    sbit  HIGH_PERIOD13_SMB1_BUS_CLOCK_bit at SMB1_BUS_CLOCK.B13;
    sbit  HIGH_PERIOD14_SMB1_BUS_CLOCK_bit at SMB1_BUS_CLOCK.B14;
    sbit  HIGH_PERIOD15_SMB1_BUS_CLOCK_bit at SMB1_BUS_CLOCK.B15;

sfr far unsigned short   volatile SMB1_BLOCK_ID        absolute 0x4000AC30;
sfr far unsigned short   volatile SMB1_REVISION        absolute 0x4000AC34;
sfr far unsigned short   volatile SMB1_BIT_BANG_CONTROL absolute 0x4000AC38;
    sbit  BBEN_SMB1_BIT_BANG_CONTROL_bit at SMB1_BIT_BANG_CONTROL.B0;
    sbit  CLDIR_SMB1_BIT_BANG_CONTROL_bit at SMB1_BIT_BANG_CONTROL.B1;
    sbit  DADIR_SMB1_BIT_BANG_CONTROL_bit at SMB1_BIT_BANG_CONTROL.B2;
    sbit  BBCLK_SMB1_BIT_BANG_CONTROL_bit at SMB1_BIT_BANG_CONTROL.B3;
    sbit  BBDAT_SMB1_BIT_BANG_CONTROL_bit at SMB1_BIT_BANG_CONTROL.B4;
    sbit  BBCLKI_SMB1_BIT_BANG_CONTROL_bit at SMB1_BIT_BANG_CONTROL.B5;
    sbit  BBDATI_SMB1_BIT_BANG_CONTROL_bit at SMB1_BIT_BANG_CONTROL.B6;

sfr far unsigned long   volatile SMB1_DATA_TIMING     absolute 0x4000AC40;
    sbit  DATA_HOLD0_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B0;
    sbit  DATA_HOLD1_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B1;
    sbit  DATA_HOLD2_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B2;
    sbit  DATA_HOLD3_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B3;
    sbit  DATA_HOLD4_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B4;
    sbit  DATA_HOLD5_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B5;
    sbit  DATA_HOLD6_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B6;
    sbit  DATA_HOLD7_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B7;
    sbit  RESTART_SETUP8_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B8;
    sbit  RESTART_SETUP9_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B9;
    sbit  RESTART_SETUP10_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B10;
    sbit  RESTART_SETUP11_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B11;
    sbit  RESTART_SETUP12_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B12;
    sbit  RESTART_SETUP13_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B13;
    sbit  RESTART_SETUP14_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B14;
    sbit  RESTART_SETUP15_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B15;
    sbit  STOP_SETUP16_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B16;
    sbit  STOP_SETUP17_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B17;
    sbit  STOP_SETUP18_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B18;
    sbit  STOP_SETUP19_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B19;
    sbit  STOP_SETUP20_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B20;
    sbit  STOP_SETUP21_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B21;
    sbit  STOP_SETUP22_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B22;
    sbit  STOP_SETUP23_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B23;
    sbit  START_HOLD24_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B24;
    sbit  START_HOLD25_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B25;
    sbit  START_HOLD26_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B26;
    sbit  START_HOLD27_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B27;
    sbit  START_HOLD28_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B28;
    sbit  START_HOLD29_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B29;
    sbit  START_HOLD30_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B30;
    sbit  START_HOLD31_SMB1_DATA_TIMING_bit at SMB1_DATA_TIMING.B31;

sfr far unsigned long   volatile SMB1_TIME_OUT_SCALING absolute 0x4000AC44;
    sbit  CLOCK_HIGH0_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B0;
    sbit  CLOCK_HIGH1_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B1;
    sbit  CLOCK_HIGH2_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B2;
    sbit  CLOCK_HIGH3_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B3;
    sbit  CLOCK_HIGH4_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B4;
    sbit  CLOCK_HIGH5_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B5;
    sbit  CLOCK_HIGH6_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B6;
    sbit  CLOCK_HIGH7_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B7;
    sbit  SLAVE_CUM8_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B8;
    sbit  SLAVE_CUM9_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B9;
    sbit  SLAVE_CUM10_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B10;
    sbit  SLAVE_CUM11_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B11;
    sbit  SLAVE_CUM12_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B12;
    sbit  SLAVE_CUM13_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B13;
    sbit  SLAVE_CUM14_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B14;
    sbit  SLAVE_CUM15_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B15;
    sbit  MASTER_CUM16_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B16;
    sbit  MASTER_CUM17_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B17;
    sbit  MASTER_CUM18_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B18;
    sbit  MASTER_CUM19_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B19;
    sbit  MASTER_CUM20_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B20;
    sbit  MASTER_CUM21_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B21;
    sbit  MASTER_CUM22_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B22;
    sbit  MASTER_CUM23_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B23;
    sbit  BUS_IDLE_MIN24_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B24;
    sbit  BUS_IDLE_MIN25_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B25;
    sbit  BUS_IDLE_MIN26_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B26;
    sbit  BUS_IDLE_MIN27_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B27;
    sbit  BUS_IDLE_MIN28_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B28;
    sbit  BUS_IDLE_MIN29_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B29;
    sbit  BUS_IDLE_MIN30_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B30;
    sbit  BUS_IDLE_MIN31_SMB1_TIME_OUT_SCALING_bit at SMB1_TIME_OUT_SCALING.B31;

sfr far unsigned short   volatile SMB1_SLAVE_TRANSMIT_BUFFER absolute 0x4000AC48;
sfr far unsigned short   volatile SMB1_SLAVE_RECEIVE_BUFFER absolute 0x4000AC4C;
sfr far unsigned short   volatile SMB1_MASTER_TRANSMIT_BUFER absolute 0x4000AC50;
sfr far unsigned short   volatile SMB1_MASTER_RECEIVE_BUFFER absolute 0x4000AC54;
sfr far unsigned short   volatile SMB2_CONTROL         absolute 0x4000B000;
    sbit  ACK_SMB2_CONTROL_bit at SMB2_CONTROL.B0;
    sbit  STO_SMB2_CONTROL_bit at SMB2_CONTROL.B1;
    sbit  STA_SMB2_CONTROL_bit at SMB2_CONTROL.B2;
    sbit  ENI_SMB2_CONTROL_bit at SMB2_CONTROL.B3;
    sbit  ESO_SMB2_CONTROL_bit at SMB2_CONTROL.B6;
    sbit  PIN_SMB2_CONTROL_bit at SMB2_CONTROL.B7;

sfr far unsigned short   volatile SMB2_STATUS          absolute 0x4000B000;
    sbit  nBB_SMB2_STATUS_bit at SMB2_STATUS.B0;
    sbit  LAB_SMB2_STATUS_bit at SMB2_STATUS.B1;
    sbit  AAS_SMB2_STATUS_bit at SMB2_STATUS.B2;
    sbit  LRB_AD0_SMB2_STATUS_bit at SMB2_STATUS.B3;
    sbit  BER_SMB2_STATUS_bit at SMB2_STATUS.B4;
    sbit  STS_SMB2_STATUS_bit at SMB2_STATUS.B5;
    sbit  SAD_SMB2_STATUS_bit at SMB2_STATUS.B6;
    sbit  PIN_SMB2_STATUS_bit at SMB2_STATUS.B7;

sfr far unsigned int   volatile SMB2_OWN             absolute 0x4000B004;
    sbit  ADDRESS_10_SMB2_OWN_bit at SMB2_OWN.B0;
    sbit  ADDRESS_11_SMB2_OWN_bit at SMB2_OWN.B1;
    sbit  ADDRESS_12_SMB2_OWN_bit at SMB2_OWN.B2;
    sbit  ADDRESS_13_SMB2_OWN_bit at SMB2_OWN.B3;
    sbit  ADDRESS_14_SMB2_OWN_bit at SMB2_OWN.B4;
    sbit  ADDRESS_15_SMB2_OWN_bit at SMB2_OWN.B5;
    sbit  ADDRESS_16_SMB2_OWN_bit at SMB2_OWN.B6;
    sbit  ADDRESS_28_SMB2_OWN_bit at SMB2_OWN.B8;
    sbit  ADDRESS_29_SMB2_OWN_bit at SMB2_OWN.B9;
    sbit  ADDRESS_210_SMB2_OWN_bit at SMB2_OWN.B10;
    sbit  ADDRESS_211_SMB2_OWN_bit at SMB2_OWN.B11;
    sbit  ADDRESS_212_SMB2_OWN_bit at SMB2_OWN.B12;
    sbit  ADDRESS_213_SMB2_OWN_bit at SMB2_OWN.B13;
    sbit  ADDRESS_214_SMB2_OWN_bit at SMB2_OWN.B14;

sfr far unsigned short   volatile SMB2_DATA            absolute 0x4000B008;
sfr far unsigned long   volatile SMB2_MASTER_COMMAND  absolute 0x4000B00C;
    sbit  MRUN_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B0;
    sbit  MPROCEED_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B1;
    sbit  START0_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B8;
    sbit  STARTN_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B9;
    sbit  STOP_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B10;
    sbit  PEC_TERM_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B11;
    sbit  READM_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B12;
    sbit  READ_PEC_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B13;
    sbit  WRITECOUNT16_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B16;
    sbit  WRITECOUNT17_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B17;
    sbit  WRITECOUNT18_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B18;
    sbit  WRITECOUNT19_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B19;
    sbit  WRITECOUNT20_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B20;
    sbit  WRITECOUNT21_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B21;
    sbit  WRITECOUNT22_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B22;
    sbit  WRITECOUNT23_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B23;
    sbit  READCOUNT24_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B24;
    sbit  READCOUNT25_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B25;
    sbit  READCOUNT26_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B26;
    sbit  READCOUNT27_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B27;
    sbit  READCOUNT28_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B28;
    sbit  READCOUNT29_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B29;
    sbit  READCOUNT30_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B30;
    sbit  READCOUNT31_SMB2_MASTER_COMMAND_bit at SMB2_MASTER_COMMAND.B31;

sfr far unsigned long   volatile SMB2_SLAVE_COMMAND   absolute 0x4000B010;
    sbit  SRUN_SMB2_SLAVE_COMMAND_bit at SMB2_SLAVE_COMMAND.B0;
    sbit  SPROCEED_SMB2_SLAVE_COMMAND_bit at SMB2_SLAVE_COMMAND.B1;
    sbit  SLAVE_PEC_SMB2_SLAVE_COMMAND_bit at SMB2_SLAVE_COMMAND.B2;
    sbit  SLAVE_WRITECOUNT8_SMB2_SLAVE_COMMAND_bit at SMB2_SLAVE_COMMAND.B8;
    sbit  SLAVE_WRITECOUNT9_SMB2_SLAVE_COMMAND_bit at SMB2_SLAVE_COMMAND.B9;
    sbit  SLAVE_WRITECOUNT10_SMB2_SLAVE_COMMAND_bit at SMB2_SLAVE_COMMAND.B10;
    sbit  SLAVE_WRITECOUNT11_SMB2_SLAVE_COMMAND_bit at SMB2_SLAVE_COMMAND.B11;
    sbit  SLAVE_WRITECOUNT12_SMB2_SLAVE_COMMAND_bit at SMB2_SLAVE_COMMAND.B12;
    sbit  SLAVE_WRITECOUNT13_SMB2_SLAVE_COMMAND_bit at SMB2_SLAVE_COMMAND.B13;
    sbit  SLAVE_WRITECOUNT14_SMB2_SLAVE_COMMAND_bit at SMB2_SLAVE_COMMAND.B14;
    sbit  SLAVE_WRITECOUNT15_SMB2_SLAVE_COMMAND_bit at SMB2_SLAVE_COMMAND.B15;
    sbit  SLAVE_READCOUNT16_SMB2_SLAVE_COMMAND_bit at SMB2_SLAVE_COMMAND.B16;
    sbit  SLAVE_READCOUNT17_SMB2_SLAVE_COMMAND_bit at SMB2_SLAVE_COMMAND.B17;
    sbit  SLAVE_READCOUNT18_SMB2_SLAVE_COMMAND_bit at SMB2_SLAVE_COMMAND.B18;
    sbit  SLAVE_READCOUNT19_SMB2_SLAVE_COMMAND_bit at SMB2_SLAVE_COMMAND.B19;
    sbit  SLAVE_READCOUNT20_SMB2_SLAVE_COMMAND_bit at SMB2_SLAVE_COMMAND.B20;
    sbit  SLAVE_READCOUNT21_SMB2_SLAVE_COMMAND_bit at SMB2_SLAVE_COMMAND.B21;
    sbit  SLAVE_READCOUNT22_SMB2_SLAVE_COMMAND_bit at SMB2_SLAVE_COMMAND.B22;
    sbit  SLAVE_READCOUNT23_SMB2_SLAVE_COMMAND_bit at SMB2_SLAVE_COMMAND.B23;

sfr far unsigned short   volatile SMB2_PEC             absolute 0x4000B014;
sfr far unsigned short   volatile SMB2_DATA_TIMING2    absolute 0x4000B018;
sfr far unsigned long   volatile SMB2_COMPLETION      absolute 0x4000B020;
    sbit  DTEN_SMB2_COMPLETION_bit at SMB2_COMPLETION.B2;
    sbit  MCEN_SMB2_COMPLETION_bit at SMB2_COMPLETION.B3;
    sbit  SCEN_SMB2_COMPLETION_bit at SMB2_COMPLETION.B4;
    sbit  BIDEN_SMB2_COMPLETION_bit at SMB2_COMPLETION.B5;
    sbit  TIMERR_SMB2_COMPLETION_bit at SMB2_COMPLETION.B6;
    sbit  DTO_SMB2_COMPLETION_bit at SMB2_COMPLETION.B8;
    sbit  MCTO_SMB2_COMPLETION_bit at SMB2_COMPLETION.B9;
    sbit  SCTO_SMB2_COMPLETION_bit at SMB2_COMPLETION.B10;
    sbit  CHDL_SMB2_COMPLETION_bit at SMB2_COMPLETION.B11;
    sbit  CHDH_SMB2_COMPLETION_bit at SMB2_COMPLETION.B12;
    sbit  BER_SMB2_COMPLETION_bit at SMB2_COMPLETION.B13;
    sbit  LAB_SMB2_COMPLETION_bit at SMB2_COMPLETION.B14;
    sbit  SNAKR_SMB2_COMPLETION_bit at SMB2_COMPLETION.B16;
    sbit  STR_SMB2_COMPLETION_bit at SMB2_COMPLETION.B17;
    sbit  SPROT_SMB2_COMPLETION_bit at SMB2_COMPLETION.B19;
    sbit  REPEAT_READ_SMB2_COMPLETION_bit at SMB2_COMPLETION.B20;
    sbit  REPEAT_WRITE_SMB2_COMPLETION_bit at SMB2_COMPLETION.B21;
    sbit  MNAKX_SMB2_COMPLETION_bit at SMB2_COMPLETION.B24;
    sbit  MTR_SMB2_COMPLETION_bit at SMB2_COMPLETION.B25;
    sbit  IDLE_SMB2_COMPLETION_bit at SMB2_COMPLETION.B29;
    sbit  MDONE_SMB2_COMPLETION_bit at SMB2_COMPLETION.B30;
    sbit  SDONE_SMB2_COMPLETION_bit at SMB2_COMPLETION.B31;

sfr far unsigned long   volatile SMB2_IDLE_SCALING    absolute 0x4000B024;
    sbit  FAIR_BUS_IDLE_MIN0_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B0;
    sbit  FAIR_BUS_IDLE_MIN1_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B1;
    sbit  FAIR_BUS_IDLE_MIN2_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B2;
    sbit  FAIR_BUS_IDLE_MIN3_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B3;
    sbit  FAIR_BUS_IDLE_MIN4_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B4;
    sbit  FAIR_BUS_IDLE_MIN5_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B5;
    sbit  FAIR_BUS_IDLE_MIN6_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B6;
    sbit  FAIR_BUS_IDLE_MIN7_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B7;
    sbit  FAIR_BUS_IDLE_MIN8_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B8;
    sbit  FAIR_BUS_IDLE_MIN9_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B9;
    sbit  FAIR_BUS_IDLE_MIN10_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B10;
    sbit  FAIR_BUS_IDLE_MIN11_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B11;
    sbit  FAIR_IDLE_DELAY16_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B16;
    sbit  FAIR_IDLE_DELAY17_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B17;
    sbit  FAIR_IDLE_DELAY18_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B18;
    sbit  FAIR_IDLE_DELAY19_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B19;
    sbit  FAIR_IDLE_DELAY20_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B20;
    sbit  FAIR_IDLE_DELAY21_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B21;
    sbit  FAIR_IDLE_DELAY22_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B22;
    sbit  FAIR_IDLE_DELAY23_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B23;
    sbit  FAIR_IDLE_DELAY24_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B24;
    sbit  FAIR_IDLE_DELAY25_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B25;
    sbit  FAIR_IDLE_DELAY26_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B26;
    sbit  FAIR_IDLE_DELAY27_SMB2_IDLE_SCALING_bit at SMB2_IDLE_SCALING.B27;

sfr far unsigned long   volatile SMB2_CONFIGURATION   absolute 0x4000B028;
    sbit  PORT_SEL0_SMB2_CONFIGURATION_bit at SMB2_CONFIGURATION.B0;
    sbit  PORT_SEL1_SMB2_CONFIGURATION_bit at SMB2_CONFIGURATION.B1;
    sbit  PORT_SEL2_SMB2_CONFIGURATION_bit at SMB2_CONFIGURATION.B2;
    sbit  PORT_SEL3_SMB2_CONFIGURATION_bit at SMB2_CONFIGURATION.B3;
    sbit  TCEN_SMB2_CONFIGURATION_bit at SMB2_CONFIGURATION.B4;
    sbit  SLOW_CLOCK_SMB2_CONFIGURATION_bit at SMB2_CONFIGURATION.B5;
    sbit  PECEN_SMB2_CONFIGURATION_bit at SMB2_CONFIGURATION.B7;
    sbit  DFEN_SMB2_CONFIGURATION_bit at SMB2_CONFIGURATION.B8;
    sbit  RESET_SMB2_CONFIGURATION_bit at SMB2_CONFIGURATION.B9;
    sbit  ENAB_SMB2_CONFIGURATION_bit at SMB2_CONFIGURATION.B10;
    sbit  DSA_SMB2_CONFIGURATION_bit at SMB2_CONFIGURATION.B11;
    sbit  FAIR_SMB2_CONFIGURATION_bit at SMB2_CONFIGURATION.B12;
    sbit  GC_DIS_SMB2_CONFIGURATION_bit at SMB2_CONFIGURATION.B14;
    sbit  FLUSH_SXBUF_SMB2_CONFIGURATION_bit at SMB2_CONFIGURATION.B16;
    sbit  FLUSH_SRBUF_SMB2_CONFIGURATION_bit at SMB2_CONFIGURATION.B17;
    sbit  FLUSH_MXBUF_SMB2_CONFIGURATION_bit at SMB2_CONFIGURATION.B18;
    sbit  FLUSH_MRBUF_SMB2_CONFIGURATION_bit at SMB2_CONFIGURATION.B19;
    sbit  EN_AAS_SMB2_CONFIGURATION_bit at SMB2_CONFIGURATION.B28;
    sbit  ENIDI_SMB2_CONFIGURATION_bit at SMB2_CONFIGURATION.B29;
    sbit  ENMI_SMB2_CONFIGURATION_bit at SMB2_CONFIGURATION.B30;
    sbit  ENSI_SMB2_CONFIGURATION_bit at SMB2_CONFIGURATION.B31;

sfr far unsigned int   volatile SMB2_BUS_CLOCK       absolute 0x4000B02C;
    sbit  LOW_PERIOD0_SMB2_BUS_CLOCK_bit at SMB2_BUS_CLOCK.B0;
    sbit  LOW_PERIOD1_SMB2_BUS_CLOCK_bit at SMB2_BUS_CLOCK.B1;
    sbit  LOW_PERIOD2_SMB2_BUS_CLOCK_bit at SMB2_BUS_CLOCK.B2;
    sbit  LOW_PERIOD3_SMB2_BUS_CLOCK_bit at SMB2_BUS_CLOCK.B3;
    sbit  LOW_PERIOD4_SMB2_BUS_CLOCK_bit at SMB2_BUS_CLOCK.B4;
    sbit  LOW_PERIOD5_SMB2_BUS_CLOCK_bit at SMB2_BUS_CLOCK.B5;
    sbit  LOW_PERIOD6_SMB2_BUS_CLOCK_bit at SMB2_BUS_CLOCK.B6;
    sbit  LOW_PERIOD7_SMB2_BUS_CLOCK_bit at SMB2_BUS_CLOCK.B7;
    sbit  HIGH_PERIOD8_SMB2_BUS_CLOCK_bit at SMB2_BUS_CLOCK.B8;
    sbit  HIGH_PERIOD9_SMB2_BUS_CLOCK_bit at SMB2_BUS_CLOCK.B9;
    sbit  HIGH_PERIOD10_SMB2_BUS_CLOCK_bit at SMB2_BUS_CLOCK.B10;
    sbit  HIGH_PERIOD11_SMB2_BUS_CLOCK_bit at SMB2_BUS_CLOCK.B11;
    sbit  HIGH_PERIOD12_SMB2_BUS_CLOCK_bit at SMB2_BUS_CLOCK.B12;
    sbit  HIGH_PERIOD13_SMB2_BUS_CLOCK_bit at SMB2_BUS_CLOCK.B13;
    sbit  HIGH_PERIOD14_SMB2_BUS_CLOCK_bit at SMB2_BUS_CLOCK.B14;
    sbit  HIGH_PERIOD15_SMB2_BUS_CLOCK_bit at SMB2_BUS_CLOCK.B15;

sfr far unsigned short   volatile SMB2_BLOCK_ID        absolute 0x4000B030;
sfr far unsigned short   volatile SMB2_REVISION        absolute 0x4000B034;
sfr far unsigned short   volatile SMB2_BIT_BANG_CONTROL absolute 0x4000B038;
    sbit  BBEN_SMB2_BIT_BANG_CONTROL_bit at SMB2_BIT_BANG_CONTROL.B0;
    sbit  CLDIR_SMB2_BIT_BANG_CONTROL_bit at SMB2_BIT_BANG_CONTROL.B1;
    sbit  DADIR_SMB2_BIT_BANG_CONTROL_bit at SMB2_BIT_BANG_CONTROL.B2;
    sbit  BBCLK_SMB2_BIT_BANG_CONTROL_bit at SMB2_BIT_BANG_CONTROL.B3;
    sbit  BBDAT_SMB2_BIT_BANG_CONTROL_bit at SMB2_BIT_BANG_CONTROL.B4;
    sbit  BBCLKI_SMB2_BIT_BANG_CONTROL_bit at SMB2_BIT_BANG_CONTROL.B5;
    sbit  BBDATI_SMB2_BIT_BANG_CONTROL_bit at SMB2_BIT_BANG_CONTROL.B6;

sfr far unsigned long   volatile SMB2_DATA_TIMING     absolute 0x4000B040;
    sbit  DATA_HOLD0_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B0;
    sbit  DATA_HOLD1_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B1;
    sbit  DATA_HOLD2_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B2;
    sbit  DATA_HOLD3_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B3;
    sbit  DATA_HOLD4_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B4;
    sbit  DATA_HOLD5_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B5;
    sbit  DATA_HOLD6_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B6;
    sbit  DATA_HOLD7_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B7;
    sbit  RESTART_SETUP8_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B8;
    sbit  RESTART_SETUP9_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B9;
    sbit  RESTART_SETUP10_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B10;
    sbit  RESTART_SETUP11_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B11;
    sbit  RESTART_SETUP12_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B12;
    sbit  RESTART_SETUP13_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B13;
    sbit  RESTART_SETUP14_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B14;
    sbit  RESTART_SETUP15_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B15;
    sbit  STOP_SETUP16_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B16;
    sbit  STOP_SETUP17_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B17;
    sbit  STOP_SETUP18_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B18;
    sbit  STOP_SETUP19_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B19;
    sbit  STOP_SETUP20_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B20;
    sbit  STOP_SETUP21_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B21;
    sbit  STOP_SETUP22_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B22;
    sbit  STOP_SETUP23_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B23;
    sbit  START_HOLD24_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B24;
    sbit  START_HOLD25_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B25;
    sbit  START_HOLD26_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B26;
    sbit  START_HOLD27_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B27;
    sbit  START_HOLD28_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B28;
    sbit  START_HOLD29_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B29;
    sbit  START_HOLD30_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B30;
    sbit  START_HOLD31_SMB2_DATA_TIMING_bit at SMB2_DATA_TIMING.B31;

sfr far unsigned long   volatile SMB2_TIME_OUT_SCALING absolute 0x4000B044;
    sbit  CLOCK_HIGH0_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B0;
    sbit  CLOCK_HIGH1_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B1;
    sbit  CLOCK_HIGH2_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B2;
    sbit  CLOCK_HIGH3_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B3;
    sbit  CLOCK_HIGH4_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B4;
    sbit  CLOCK_HIGH5_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B5;
    sbit  CLOCK_HIGH6_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B6;
    sbit  CLOCK_HIGH7_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B7;
    sbit  SLAVE_CUM8_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B8;
    sbit  SLAVE_CUM9_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B9;
    sbit  SLAVE_CUM10_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B10;
    sbit  SLAVE_CUM11_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B11;
    sbit  SLAVE_CUM12_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B12;
    sbit  SLAVE_CUM13_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B13;
    sbit  SLAVE_CUM14_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B14;
    sbit  SLAVE_CUM15_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B15;
    sbit  MASTER_CUM16_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B16;
    sbit  MASTER_CUM17_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B17;
    sbit  MASTER_CUM18_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B18;
    sbit  MASTER_CUM19_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B19;
    sbit  MASTER_CUM20_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B20;
    sbit  MASTER_CUM21_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B21;
    sbit  MASTER_CUM22_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B22;
    sbit  MASTER_CUM23_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B23;
    sbit  BUS_IDLE_MIN24_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B24;
    sbit  BUS_IDLE_MIN25_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B25;
    sbit  BUS_IDLE_MIN26_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B26;
    sbit  BUS_IDLE_MIN27_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B27;
    sbit  BUS_IDLE_MIN28_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B28;
    sbit  BUS_IDLE_MIN29_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B29;
    sbit  BUS_IDLE_MIN30_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B30;
    sbit  BUS_IDLE_MIN31_SMB2_TIME_OUT_SCALING_bit at SMB2_TIME_OUT_SCALING.B31;

sfr far unsigned short   volatile SMB2_SLAVE_TRANSMIT_BUFFER absolute 0x4000B048;
sfr far unsigned short   volatile SMB2_SLAVE_RECEIVE_BUFFER absolute 0x4000B04C;
sfr far unsigned short   volatile SMB2_MASTER_TRANSMIT_BUFER absolute 0x4000B050;
sfr far unsigned short   volatile SMB2_MASTER_RECEIVE_BUFFER absolute 0x4000B054;
sfr far unsigned short   volatile SMB3_CONTROL         absolute 0x4000B400;
    sbit  ACK_SMB3_CONTROL_bit at SMB3_CONTROL.B0;
    sbit  STO_SMB3_CONTROL_bit at SMB3_CONTROL.B1;
    sbit  STA_SMB3_CONTROL_bit at SMB3_CONTROL.B2;
    sbit  ENI_SMB3_CONTROL_bit at SMB3_CONTROL.B3;
    sbit  ESO_SMB3_CONTROL_bit at SMB3_CONTROL.B6;
    sbit  PIN_SMB3_CONTROL_bit at SMB3_CONTROL.B7;

sfr far unsigned short   volatile SMB3_STATUS          absolute 0x4000B400;
    sbit  nBB_SMB3_STATUS_bit at SMB3_STATUS.B0;
    sbit  LAB_SMB3_STATUS_bit at SMB3_STATUS.B1;
    sbit  AAS_SMB3_STATUS_bit at SMB3_STATUS.B2;
    sbit  LRB_AD0_SMB3_STATUS_bit at SMB3_STATUS.B3;
    sbit  BER_SMB3_STATUS_bit at SMB3_STATUS.B4;
    sbit  STS_SMB3_STATUS_bit at SMB3_STATUS.B5;
    sbit  SAD_SMB3_STATUS_bit at SMB3_STATUS.B6;
    sbit  PIN_SMB3_STATUS_bit at SMB3_STATUS.B7;

sfr far unsigned int   volatile SMB3_OWN             absolute 0x4000B404;
    sbit  ADDRESS_10_SMB3_OWN_bit at SMB3_OWN.B0;
    sbit  ADDRESS_11_SMB3_OWN_bit at SMB3_OWN.B1;
    sbit  ADDRESS_12_SMB3_OWN_bit at SMB3_OWN.B2;
    sbit  ADDRESS_13_SMB3_OWN_bit at SMB3_OWN.B3;
    sbit  ADDRESS_14_SMB3_OWN_bit at SMB3_OWN.B4;
    sbit  ADDRESS_15_SMB3_OWN_bit at SMB3_OWN.B5;
    sbit  ADDRESS_16_SMB3_OWN_bit at SMB3_OWN.B6;
    sbit  ADDRESS_28_SMB3_OWN_bit at SMB3_OWN.B8;
    sbit  ADDRESS_29_SMB3_OWN_bit at SMB3_OWN.B9;
    sbit  ADDRESS_210_SMB3_OWN_bit at SMB3_OWN.B10;
    sbit  ADDRESS_211_SMB3_OWN_bit at SMB3_OWN.B11;
    sbit  ADDRESS_212_SMB3_OWN_bit at SMB3_OWN.B12;
    sbit  ADDRESS_213_SMB3_OWN_bit at SMB3_OWN.B13;
    sbit  ADDRESS_214_SMB3_OWN_bit at SMB3_OWN.B14;

sfr far unsigned short   volatile SMB3_DATA            absolute 0x4000B408;
sfr far unsigned long   volatile SMB3_MASTER_COMMAND  absolute 0x4000B40C;
    sbit  MRUN_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B0;
    sbit  MPROCEED_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B1;
    sbit  START0_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B8;
    sbit  STARTN_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B9;
    sbit  STOP_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B10;
    sbit  PEC_TERM_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B11;
    sbit  READM_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B12;
    sbit  READ_PEC_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B13;
    sbit  WRITECOUNT16_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B16;
    sbit  WRITECOUNT17_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B17;
    sbit  WRITECOUNT18_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B18;
    sbit  WRITECOUNT19_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B19;
    sbit  WRITECOUNT20_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B20;
    sbit  WRITECOUNT21_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B21;
    sbit  WRITECOUNT22_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B22;
    sbit  WRITECOUNT23_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B23;
    sbit  READCOUNT24_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B24;
    sbit  READCOUNT25_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B25;
    sbit  READCOUNT26_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B26;
    sbit  READCOUNT27_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B27;
    sbit  READCOUNT28_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B28;
    sbit  READCOUNT29_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B29;
    sbit  READCOUNT30_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B30;
    sbit  READCOUNT31_SMB3_MASTER_COMMAND_bit at SMB3_MASTER_COMMAND.B31;

sfr far unsigned long   volatile SMB3_SLAVE_COMMAND   absolute 0x4000B410;
    sbit  SRUN_SMB3_SLAVE_COMMAND_bit at SMB3_SLAVE_COMMAND.B0;
    sbit  SPROCEED_SMB3_SLAVE_COMMAND_bit at SMB3_SLAVE_COMMAND.B1;
    sbit  SLAVE_PEC_SMB3_SLAVE_COMMAND_bit at SMB3_SLAVE_COMMAND.B2;
    sbit  SLAVE_WRITECOUNT8_SMB3_SLAVE_COMMAND_bit at SMB3_SLAVE_COMMAND.B8;
    sbit  SLAVE_WRITECOUNT9_SMB3_SLAVE_COMMAND_bit at SMB3_SLAVE_COMMAND.B9;
    sbit  SLAVE_WRITECOUNT10_SMB3_SLAVE_COMMAND_bit at SMB3_SLAVE_COMMAND.B10;
    sbit  SLAVE_WRITECOUNT11_SMB3_SLAVE_COMMAND_bit at SMB3_SLAVE_COMMAND.B11;
    sbit  SLAVE_WRITECOUNT12_SMB3_SLAVE_COMMAND_bit at SMB3_SLAVE_COMMAND.B12;
    sbit  SLAVE_WRITECOUNT13_SMB3_SLAVE_COMMAND_bit at SMB3_SLAVE_COMMAND.B13;
    sbit  SLAVE_WRITECOUNT14_SMB3_SLAVE_COMMAND_bit at SMB3_SLAVE_COMMAND.B14;
    sbit  SLAVE_WRITECOUNT15_SMB3_SLAVE_COMMAND_bit at SMB3_SLAVE_COMMAND.B15;
    sbit  SLAVE_READCOUNT16_SMB3_SLAVE_COMMAND_bit at SMB3_SLAVE_COMMAND.B16;
    sbit  SLAVE_READCOUNT17_SMB3_SLAVE_COMMAND_bit at SMB3_SLAVE_COMMAND.B17;
    sbit  SLAVE_READCOUNT18_SMB3_SLAVE_COMMAND_bit at SMB3_SLAVE_COMMAND.B18;
    sbit  SLAVE_READCOUNT19_SMB3_SLAVE_COMMAND_bit at SMB3_SLAVE_COMMAND.B19;
    sbit  SLAVE_READCOUNT20_SMB3_SLAVE_COMMAND_bit at SMB3_SLAVE_COMMAND.B20;
    sbit  SLAVE_READCOUNT21_SMB3_SLAVE_COMMAND_bit at SMB3_SLAVE_COMMAND.B21;
    sbit  SLAVE_READCOUNT22_SMB3_SLAVE_COMMAND_bit at SMB3_SLAVE_COMMAND.B22;
    sbit  SLAVE_READCOUNT23_SMB3_SLAVE_COMMAND_bit at SMB3_SLAVE_COMMAND.B23;

sfr far unsigned short   volatile SMB3_PEC             absolute 0x4000B414;
sfr far unsigned short   volatile SMB3_DATA_TIMING2    absolute 0x4000B418;
sfr far unsigned long   volatile SMB3_COMPLETION      absolute 0x4000B420;
    sbit  DTEN_SMB3_COMPLETION_bit at SMB3_COMPLETION.B2;
    sbit  MCEN_SMB3_COMPLETION_bit at SMB3_COMPLETION.B3;
    sbit  SCEN_SMB3_COMPLETION_bit at SMB3_COMPLETION.B4;
    sbit  BIDEN_SMB3_COMPLETION_bit at SMB3_COMPLETION.B5;
    sbit  TIMERR_SMB3_COMPLETION_bit at SMB3_COMPLETION.B6;
    sbit  DTO_SMB3_COMPLETION_bit at SMB3_COMPLETION.B8;
    sbit  MCTO_SMB3_COMPLETION_bit at SMB3_COMPLETION.B9;
    sbit  SCTO_SMB3_COMPLETION_bit at SMB3_COMPLETION.B10;
    sbit  CHDL_SMB3_COMPLETION_bit at SMB3_COMPLETION.B11;
    sbit  CHDH_SMB3_COMPLETION_bit at SMB3_COMPLETION.B12;
    sbit  BER_SMB3_COMPLETION_bit at SMB3_COMPLETION.B13;
    sbit  LAB_SMB3_COMPLETION_bit at SMB3_COMPLETION.B14;
    sbit  SNAKR_SMB3_COMPLETION_bit at SMB3_COMPLETION.B16;
    sbit  STR_SMB3_COMPLETION_bit at SMB3_COMPLETION.B17;
    sbit  SPROT_SMB3_COMPLETION_bit at SMB3_COMPLETION.B19;
    sbit  REPEAT_READ_SMB3_COMPLETION_bit at SMB3_COMPLETION.B20;
    sbit  REPEAT_WRITE_SMB3_COMPLETION_bit at SMB3_COMPLETION.B21;
    sbit  MNAKX_SMB3_COMPLETION_bit at SMB3_COMPLETION.B24;
    sbit  MTR_SMB3_COMPLETION_bit at SMB3_COMPLETION.B25;
    sbit  IDLE_SMB3_COMPLETION_bit at SMB3_COMPLETION.B29;
    sbit  MDONE_SMB3_COMPLETION_bit at SMB3_COMPLETION.B30;
    sbit  SDONE_SMB3_COMPLETION_bit at SMB3_COMPLETION.B31;

sfr far unsigned long   volatile SMB3_IDLE_SCALING    absolute 0x4000B424;
    sbit  FAIR_BUS_IDLE_MIN0_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B0;
    sbit  FAIR_BUS_IDLE_MIN1_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B1;
    sbit  FAIR_BUS_IDLE_MIN2_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B2;
    sbit  FAIR_BUS_IDLE_MIN3_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B3;
    sbit  FAIR_BUS_IDLE_MIN4_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B4;
    sbit  FAIR_BUS_IDLE_MIN5_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B5;
    sbit  FAIR_BUS_IDLE_MIN6_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B6;
    sbit  FAIR_BUS_IDLE_MIN7_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B7;
    sbit  FAIR_BUS_IDLE_MIN8_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B8;
    sbit  FAIR_BUS_IDLE_MIN9_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B9;
    sbit  FAIR_BUS_IDLE_MIN10_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B10;
    sbit  FAIR_BUS_IDLE_MIN11_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B11;
    sbit  FAIR_IDLE_DELAY16_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B16;
    sbit  FAIR_IDLE_DELAY17_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B17;
    sbit  FAIR_IDLE_DELAY18_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B18;
    sbit  FAIR_IDLE_DELAY19_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B19;
    sbit  FAIR_IDLE_DELAY20_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B20;
    sbit  FAIR_IDLE_DELAY21_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B21;
    sbit  FAIR_IDLE_DELAY22_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B22;
    sbit  FAIR_IDLE_DELAY23_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B23;
    sbit  FAIR_IDLE_DELAY24_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B24;
    sbit  FAIR_IDLE_DELAY25_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B25;
    sbit  FAIR_IDLE_DELAY26_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B26;
    sbit  FAIR_IDLE_DELAY27_SMB3_IDLE_SCALING_bit at SMB3_IDLE_SCALING.B27;

sfr far unsigned long   volatile SMB3_CONFIGURATION   absolute 0x4000B428;
    sbit  PORT_SEL0_SMB3_CONFIGURATION_bit at SMB3_CONFIGURATION.B0;
    sbit  PORT_SEL1_SMB3_CONFIGURATION_bit at SMB3_CONFIGURATION.B1;
    sbit  PORT_SEL2_SMB3_CONFIGURATION_bit at SMB3_CONFIGURATION.B2;
    sbit  PORT_SEL3_SMB3_CONFIGURATION_bit at SMB3_CONFIGURATION.B3;
    sbit  TCEN_SMB3_CONFIGURATION_bit at SMB3_CONFIGURATION.B4;
    sbit  SLOW_CLOCK_SMB3_CONFIGURATION_bit at SMB3_CONFIGURATION.B5;
    sbit  PECEN_SMB3_CONFIGURATION_bit at SMB3_CONFIGURATION.B7;
    sbit  DFEN_SMB3_CONFIGURATION_bit at SMB3_CONFIGURATION.B8;
    sbit  RESET_SMB3_CONFIGURATION_bit at SMB3_CONFIGURATION.B9;
    sbit  ENAB_SMB3_CONFIGURATION_bit at SMB3_CONFIGURATION.B10;
    sbit  DSA_SMB3_CONFIGURATION_bit at SMB3_CONFIGURATION.B11;
    sbit  FAIR_SMB3_CONFIGURATION_bit at SMB3_CONFIGURATION.B12;
    sbit  GC_DIS_SMB3_CONFIGURATION_bit at SMB3_CONFIGURATION.B14;
    sbit  FLUSH_SXBUF_SMB3_CONFIGURATION_bit at SMB3_CONFIGURATION.B16;
    sbit  FLUSH_SRBUF_SMB3_CONFIGURATION_bit at SMB3_CONFIGURATION.B17;
    sbit  FLUSH_MXBUF_SMB3_CONFIGURATION_bit at SMB3_CONFIGURATION.B18;
    sbit  FLUSH_MRBUF_SMB3_CONFIGURATION_bit at SMB3_CONFIGURATION.B19;
    sbit  EN_AAS_SMB3_CONFIGURATION_bit at SMB3_CONFIGURATION.B28;
    sbit  ENIDI_SMB3_CONFIGURATION_bit at SMB3_CONFIGURATION.B29;
    sbit  ENMI_SMB3_CONFIGURATION_bit at SMB3_CONFIGURATION.B30;
    sbit  ENSI_SMB3_CONFIGURATION_bit at SMB3_CONFIGURATION.B31;

sfr far unsigned int   volatile SMB3_BUS_CLOCK       absolute 0x4000B42C;
    sbit  LOW_PERIOD0_SMB3_BUS_CLOCK_bit at SMB3_BUS_CLOCK.B0;
    sbit  LOW_PERIOD1_SMB3_BUS_CLOCK_bit at SMB3_BUS_CLOCK.B1;
    sbit  LOW_PERIOD2_SMB3_BUS_CLOCK_bit at SMB3_BUS_CLOCK.B2;
    sbit  LOW_PERIOD3_SMB3_BUS_CLOCK_bit at SMB3_BUS_CLOCK.B3;
    sbit  LOW_PERIOD4_SMB3_BUS_CLOCK_bit at SMB3_BUS_CLOCK.B4;
    sbit  LOW_PERIOD5_SMB3_BUS_CLOCK_bit at SMB3_BUS_CLOCK.B5;
    sbit  LOW_PERIOD6_SMB3_BUS_CLOCK_bit at SMB3_BUS_CLOCK.B6;
    sbit  LOW_PERIOD7_SMB3_BUS_CLOCK_bit at SMB3_BUS_CLOCK.B7;
    sbit  HIGH_PERIOD8_SMB3_BUS_CLOCK_bit at SMB3_BUS_CLOCK.B8;
    sbit  HIGH_PERIOD9_SMB3_BUS_CLOCK_bit at SMB3_BUS_CLOCK.B9;
    sbit  HIGH_PERIOD10_SMB3_BUS_CLOCK_bit at SMB3_BUS_CLOCK.B10;
    sbit  HIGH_PERIOD11_SMB3_BUS_CLOCK_bit at SMB3_BUS_CLOCK.B11;
    sbit  HIGH_PERIOD12_SMB3_BUS_CLOCK_bit at SMB3_BUS_CLOCK.B12;
    sbit  HIGH_PERIOD13_SMB3_BUS_CLOCK_bit at SMB3_BUS_CLOCK.B13;
    sbit  HIGH_PERIOD14_SMB3_BUS_CLOCK_bit at SMB3_BUS_CLOCK.B14;
    sbit  HIGH_PERIOD15_SMB3_BUS_CLOCK_bit at SMB3_BUS_CLOCK.B15;

sfr far unsigned short   volatile SMB3_BLOCK_ID        absolute 0x4000B430;
sfr far unsigned short   volatile SMB3_REVISION        absolute 0x4000B434;
sfr far unsigned short   volatile SMB3_BIT_BANG_CONTROL absolute 0x4000B438;
    sbit  BBEN_SMB3_BIT_BANG_CONTROL_bit at SMB3_BIT_BANG_CONTROL.B0;
    sbit  CLDIR_SMB3_BIT_BANG_CONTROL_bit at SMB3_BIT_BANG_CONTROL.B1;
    sbit  DADIR_SMB3_BIT_BANG_CONTROL_bit at SMB3_BIT_BANG_CONTROL.B2;
    sbit  BBCLK_SMB3_BIT_BANG_CONTROL_bit at SMB3_BIT_BANG_CONTROL.B3;
    sbit  BBDAT_SMB3_BIT_BANG_CONTROL_bit at SMB3_BIT_BANG_CONTROL.B4;
    sbit  BBCLKI_SMB3_BIT_BANG_CONTROL_bit at SMB3_BIT_BANG_CONTROL.B5;
    sbit  BBDATI_SMB3_BIT_BANG_CONTROL_bit at SMB3_BIT_BANG_CONTROL.B6;

sfr far unsigned long   volatile SMB3_DATA_TIMING     absolute 0x4000B440;
    sbit  DATA_HOLD0_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B0;
    sbit  DATA_HOLD1_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B1;
    sbit  DATA_HOLD2_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B2;
    sbit  DATA_HOLD3_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B3;
    sbit  DATA_HOLD4_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B4;
    sbit  DATA_HOLD5_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B5;
    sbit  DATA_HOLD6_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B6;
    sbit  DATA_HOLD7_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B7;
    sbit  RESTART_SETUP8_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B8;
    sbit  RESTART_SETUP9_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B9;
    sbit  RESTART_SETUP10_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B10;
    sbit  RESTART_SETUP11_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B11;
    sbit  RESTART_SETUP12_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B12;
    sbit  RESTART_SETUP13_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B13;
    sbit  RESTART_SETUP14_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B14;
    sbit  RESTART_SETUP15_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B15;
    sbit  STOP_SETUP16_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B16;
    sbit  STOP_SETUP17_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B17;
    sbit  STOP_SETUP18_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B18;
    sbit  STOP_SETUP19_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B19;
    sbit  STOP_SETUP20_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B20;
    sbit  STOP_SETUP21_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B21;
    sbit  STOP_SETUP22_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B22;
    sbit  STOP_SETUP23_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B23;
    sbit  START_HOLD24_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B24;
    sbit  START_HOLD25_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B25;
    sbit  START_HOLD26_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B26;
    sbit  START_HOLD27_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B27;
    sbit  START_HOLD28_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B28;
    sbit  START_HOLD29_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B29;
    sbit  START_HOLD30_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B30;
    sbit  START_HOLD31_SMB3_DATA_TIMING_bit at SMB3_DATA_TIMING.B31;

sfr far unsigned long   volatile SMB3_TIME_OUT_SCALING absolute 0x4000B444;
    sbit  CLOCK_HIGH0_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B0;
    sbit  CLOCK_HIGH1_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B1;
    sbit  CLOCK_HIGH2_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B2;
    sbit  CLOCK_HIGH3_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B3;
    sbit  CLOCK_HIGH4_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B4;
    sbit  CLOCK_HIGH5_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B5;
    sbit  CLOCK_HIGH6_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B6;
    sbit  CLOCK_HIGH7_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B7;
    sbit  SLAVE_CUM8_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B8;
    sbit  SLAVE_CUM9_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B9;
    sbit  SLAVE_CUM10_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B10;
    sbit  SLAVE_CUM11_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B11;
    sbit  SLAVE_CUM12_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B12;
    sbit  SLAVE_CUM13_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B13;
    sbit  SLAVE_CUM14_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B14;
    sbit  SLAVE_CUM15_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B15;
    sbit  MASTER_CUM16_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B16;
    sbit  MASTER_CUM17_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B17;
    sbit  MASTER_CUM18_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B18;
    sbit  MASTER_CUM19_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B19;
    sbit  MASTER_CUM20_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B20;
    sbit  MASTER_CUM21_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B21;
    sbit  MASTER_CUM22_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B22;
    sbit  MASTER_CUM23_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B23;
    sbit  BUS_IDLE_MIN24_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B24;
    sbit  BUS_IDLE_MIN25_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B25;
    sbit  BUS_IDLE_MIN26_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B26;
    sbit  BUS_IDLE_MIN27_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B27;
    sbit  BUS_IDLE_MIN28_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B28;
    sbit  BUS_IDLE_MIN29_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B29;
    sbit  BUS_IDLE_MIN30_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B30;
    sbit  BUS_IDLE_MIN31_SMB3_TIME_OUT_SCALING_bit at SMB3_TIME_OUT_SCALING.B31;

sfr far unsigned short   volatile SMB3_SLAVE_TRANSMIT_BUFFER absolute 0x4000B448;
sfr far unsigned short   volatile SMB3_SLAVE_RECEIVE_BUFFER absolute 0x4000B44C;
sfr far unsigned short   volatile SMB3_MASTER_TRANSMIT_BUFER absolute 0x4000B450;
sfr far unsigned short   volatile SMB3_MASTER_RECEIVE_BUFFER absolute 0x4000B454;
sfr far unsigned short   volatile PECI_WRITE_DATA      absolute 0x40006400;
sfr far unsigned short   volatile PECI_READ_DATA       absolute 0x40006404;
sfr far unsigned short   volatile PECI_CONTROL         absolute 0x40006408;
    const register unsigned short int PD = 0;
    sbit  PD_bit at PECI_CONTROL.B0;
    const register unsigned short int RST = 3;
    sbit  RST_bit at PECI_CONTROL.B3;
    const register unsigned short int FRST = 5;
    sbit  FRST_bit at PECI_CONTROL.B5;
    const register unsigned short int TXEN = 6;
    sbit  TXEN_bit at PECI_CONTROL.B6;
    const register unsigned short int MIEN = 7;
    sbit  MIEN_bit at PECI_CONTROL.B7;

sfr far unsigned short   volatile PECI_STATUS1         absolute 0x4000640C;
    const register unsigned short int BOF = 0;
    sbit  BOF_bit at PECI_STATUS1.B0;
    const register unsigned short int EOF_ = 1;
    sbit  EOF_bit at PECI_STATUS1.B1;
    const register unsigned short int ERR_ = 2;
    sbit  ERR_bit at PECI_STATUS1.B2;
    const register unsigned short int RDY = 3;
    sbit  RDY_bit at PECI_STATUS1.B3;
    const register unsigned short int RDYLO = 4;
    sbit  RDYLO_bit at PECI_STATUS1.B4;
    const register unsigned short int RDYHI = 5;
    sbit  RDYHI_bit at PECI_STATUS1.B5;
    const register unsigned short int MINT = 7;
    sbit  MINT_bit at PECI_STATUS1.B7;

sfr far unsigned short   volatile PECI_STATUS2         absolute 0x40006410;
    const register unsigned short int WFF = 0;
    sbit  WFF_bit at PECI_STATUS2.B0;
    const register unsigned short int WFE = 1;
    sbit  WFE_bit at PECI_STATUS2.B1;
    const register unsigned short int RFF = 2;
    sbit  RFF_bit at PECI_STATUS2.B2;
    const register unsigned short int RFE = 3;
    sbit  RFE_bit at PECI_STATUS2.B3;
    sbit  IDLE_PECI_STATUS2_bit at PECI_STATUS2.B7;

sfr far unsigned short   volatile PECI_ERROR           absolute 0x40006414;
    const register unsigned short int FERR = 0;
    sbit  FERR_bit at PECI_ERROR.B0;
    const register unsigned short int BERR = 1;
    sbit  BERR_bit at PECI_ERROR.B1;
    const register unsigned short int REQERR = 3;
    sbit  REQERR_bit at PECI_ERROR.B3;
    const register unsigned short int WROV = 4;
    sbit  WROV_bit at PECI_ERROR.B4;
    const register unsigned short int WRUN = 5;
    sbit  WRUN_bit at PECI_ERROR.B5;
    const register unsigned short int RDOV = 6;
    sbit  RDOV_bit at PECI_ERROR.B6;
    const register unsigned short int CLKERR = 7;
    sbit  CLKERR_bit at PECI_ERROR.B7;

sfr far unsigned short   volatile PECI_INT_EN1         absolute 0x40006418;
    const register unsigned short int BIEN = 0;
    sbit  BIEN_bit at PECI_INT_EN1.B0;
    const register unsigned short int EIEN = 1;
    sbit  EIEN_bit at PECI_INT_EN1.B1;
    const register unsigned short int EREN = 2;
    sbit  EREN_bit at PECI_INT_EN1.B2;
    const register unsigned short int RLEN = 4;
    sbit  RLEN_bit at PECI_INT_EN1.B4;
    const register unsigned short int RHEN = 5;
    sbit  RHEN_bit at PECI_INT_EN1.B5;

sfr far unsigned short   volatile PECI_INT_EN2         absolute 0x4000641C;
    const register unsigned short int ENWFE = 1;
    sbit  ENWFE_bit at PECI_INT_EN2.B1;
    const register unsigned short int ENRFF = 2;
    sbit  ENRFF_bit at PECI_INT_EN2.B2;

sfr far unsigned short   volatile PECI_OBT1            absolute 0x40006420;
sfr far unsigned short   volatile PECI_OBT2            absolute 0x40006424;
sfr far unsigned long   volatile PECI_ID              absolute 0x40006440;
sfr far unsigned long   volatile PECI_REV             absolute 0x40006444;
sfr far unsigned long   volatile TACH_CH0_CONTROL     absolute 0x40006000;
    const register unsigned short int OUT_LIMIT_ENABLE = 0;
    sbit  OUT_LIMIT_ENABLE_bit at TACH_CH0_CONTROL.B0;
    const register unsigned short int TACH_EN = 1;
    sbit  TACH_EN_bit at TACH_CH0_CONTROL.B1;
    const register unsigned short int FILTER_EN = 8;
    sbit  FILTER_EN_bit at TACH_CH0_CONTROL.B8;
    const register unsigned short int MODE_SELECT = 10;
    sbit  MODE_SELECT_bit at TACH_CH0_CONTROL.B10;
    const register unsigned short int EDGES11 = 11;
    sbit  EDGES11_bit at TACH_CH0_CONTROL.B11;
    const register unsigned short int EDGES12 = 12;
    sbit  EDGES12_bit at TACH_CH0_CONTROL.B12;
    const register unsigned short int READY_INT_EN = 14;
    sbit  READY_INT_EN_bit at TACH_CH0_CONTROL.B14;
    const register unsigned short int INPUT_INT_EN = 15;
    sbit  INPUT_INT_EN_bit at TACH_CH0_CONTROL.B15;
    const register unsigned short int COUNTER16 = 16;
    sbit  COUNTER16_bit at TACH_CH0_CONTROL.B16;
    const register unsigned short int COUNTER17 = 17;
    sbit  COUNTER17_bit at TACH_CH0_CONTROL.B17;
    const register unsigned short int COUNTER18 = 18;
    sbit  COUNTER18_bit at TACH_CH0_CONTROL.B18;
    const register unsigned short int COUNTER19 = 19;
    sbit  COUNTER19_bit at TACH_CH0_CONTROL.B19;
    const register unsigned short int COUNTER20 = 20;
    sbit  COUNTER20_bit at TACH_CH0_CONTROL.B20;
    const register unsigned short int COUNTER21 = 21;
    sbit  COUNTER21_bit at TACH_CH0_CONTROL.B21;
    const register unsigned short int COUNTER22 = 22;
    sbit  COUNTER22_bit at TACH_CH0_CONTROL.B22;
    const register unsigned short int COUNTER23 = 23;
    sbit  COUNTER23_bit at TACH_CH0_CONTROL.B23;
    const register unsigned short int COUNTER24 = 24;
    sbit  COUNTER24_bit at TACH_CH0_CONTROL.B24;
    const register unsigned short int COUNTER25 = 25;
    sbit  COUNTER25_bit at TACH_CH0_CONTROL.B25;
    const register unsigned short int COUNTER26 = 26;
    sbit  COUNTER26_bit at TACH_CH0_CONTROL.B26;
    const register unsigned short int COUNTER27 = 27;
    sbit  COUNTER27_bit at TACH_CH0_CONTROL.B27;
    const register unsigned short int COUNTER28 = 28;
    sbit  COUNTER28_bit at TACH_CH0_CONTROL.B28;
    const register unsigned short int COUNTER29 = 29;
    sbit  COUNTER29_bit at TACH_CH0_CONTROL.B29;
    const register unsigned short int COUNTER30 = 30;
    sbit  COUNTER30_bit at TACH_CH0_CONTROL.B30;
    const register unsigned short int COUNTER31 = 31;
    sbit  COUNTER31_bit at TACH_CH0_CONTROL.B31;

sfr far unsigned long   volatile TACH_CH0_STATUS      absolute 0x40006004;
    const register unsigned short int OUT_LIMIT = 0;
    sbit  OUT_LIMIT_bit at TACH_CH0_STATUS.B0;
    sbit  PIN_TACH_CH0_STATUS_bit at TACH_CH0_STATUS.B1;
    const register unsigned short int TOGGLE = 2;
    sbit  TOGGLE_bit at TACH_CH0_STATUS.B2;
    const register unsigned short int COUNT_READY = 3;
    sbit  COUNT_READY_bit at TACH_CH0_STATUS.B3;

sfr far unsigned int   volatile TACH_CH0_HIGH_LIMIT  absolute 0x40006008;
sfr far unsigned int   volatile TACH_CH0_LOW_LIMIT   absolute 0x4000600C;
sfr far unsigned long   volatile TACH_CH1_CONTROL     absolute 0x40006010;
    sbit  OUT_LIMIT_ENABLE_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B0;
    sbit  TACH_EN_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B1;
    sbit  FILTER_EN_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B8;
    sbit  MODE_SELECT_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B10;
    sbit  EDGES11_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B11;
    sbit  EDGES12_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B12;
    sbit  READY_INT_EN_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B14;
    sbit  INPUT_INT_EN_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B15;
    sbit  COUNTER16_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B16;
    sbit  COUNTER17_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B17;
    sbit  COUNTER18_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B18;
    sbit  COUNTER19_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B19;
    sbit  COUNTER20_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B20;
    sbit  COUNTER21_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B21;
    sbit  COUNTER22_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B22;
    sbit  COUNTER23_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B23;
    sbit  COUNTER24_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B24;
    sbit  COUNTER25_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B25;
    sbit  COUNTER26_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B26;
    sbit  COUNTER27_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B27;
    sbit  COUNTER28_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B28;
    sbit  COUNTER29_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B29;
    sbit  COUNTER30_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B30;
    sbit  COUNTER31_TACH_CH1_CONTROL_bit at TACH_CH1_CONTROL.B31;

sfr far unsigned long   volatile TACH_CH1_STATUS      absolute 0x40006014;
    sbit  OUT_LIMIT_TACH_CH1_STATUS_bit at TACH_CH1_STATUS.B0;
    sbit  PIN_TACH_CH1_STATUS_bit at TACH_CH1_STATUS.B1;
    sbit  TOGGLE_TACH_CH1_STATUS_bit at TACH_CH1_STATUS.B2;
    sbit  COUNT_READY_TACH_CH1_STATUS_bit at TACH_CH1_STATUS.B3;

sfr far unsigned int   volatile TACH_CH1_HIGH_LIMIT  absolute 0x40006018;
sfr far unsigned int   volatile TACH_CH1_LOW_LIMIT   absolute 0x4000601C;
sfr far unsigned long   volatile PWM_CH0_COUNTER_ON_TIME absolute 0x40005800;
sfr far unsigned long   volatile PWM_CH0_COUNTER_OFF_TIME absolute 0x40005804;
sfr far unsigned long   volatile PWM_CH0_CONFIG       absolute 0x40005808;
    sbit  EN_PWM_CH0_CONFIG_bit at PWM_CH0_CONFIG.B0;
    const register unsigned short int CLK_SELECT = 1;
    sbit  CLK_SELECT_bit at PWM_CH0_CONFIG.B1;
    const register unsigned short int INVERT = 2;
    sbit  INVERT_bit at PWM_CH0_CONFIG.B2;
    const register unsigned short int CLK_PRE_DIVIDER3 = 3;
    sbit  CLK_PRE_DIVIDER3_bit at PWM_CH0_CONFIG.B3;
    const register unsigned short int CLK_PRE_DIVIDER4 = 4;
    sbit  CLK_PRE_DIVIDER4_bit at PWM_CH0_CONFIG.B4;
    const register unsigned short int CLK_PRE_DIVIDER5 = 5;
    sbit  CLK_PRE_DIVIDER5_bit at PWM_CH0_CONFIG.B5;
    const register unsigned short int CLK_PRE_DIVIDER6 = 6;
    sbit  CLK_PRE_DIVIDER6_bit at PWM_CH0_CONFIG.B6;

sfr far unsigned long   volatile PWM_CH1_COUNTER_ON_TIME absolute 0x40005810;
sfr far unsigned long   volatile PWM_CH1_COUNTER_OFF_TIME absolute 0x40005814;
sfr far unsigned long   volatile PWM_CH1_CONFIG       absolute 0x40005818;
    sbit  EN_PWM_CH1_CONFIG_bit at PWM_CH1_CONFIG.B0;
    sbit  CLK_SELECT_PWM_CH1_CONFIG_bit at PWM_CH1_CONFIG.B1;
    sbit  INVERT_PWM_CH1_CONFIG_bit at PWM_CH1_CONFIG.B2;
    sbit  CLK_PRE_DIVIDER3_PWM_CH1_CONFIG_bit at PWM_CH1_CONFIG.B3;
    sbit  CLK_PRE_DIVIDER4_PWM_CH1_CONFIG_bit at PWM_CH1_CONFIG.B4;
    sbit  CLK_PRE_DIVIDER5_PWM_CH1_CONFIG_bit at PWM_CH1_CONFIG.B5;
    sbit  CLK_PRE_DIVIDER6_PWM_CH1_CONFIG_bit at PWM_CH1_CONFIG.B6;

sfr far unsigned long   volatile PWM_CH2_COUNTER_ON_TIME absolute 0x40005820;
sfr far unsigned long   volatile PWM_CH2_COUNTER_OFF_TIME absolute 0x40005824;
sfr far unsigned long   volatile PWM_CH2_CONFIG       absolute 0x40005828;
    sbit  EN_PWM_CH2_CONFIG_bit at PWM_CH2_CONFIG.B0;
    sbit  CLK_SELECT_PWM_CH2_CONFIG_bit at PWM_CH2_CONFIG.B1;
    sbit  INVERT_PWM_CH2_CONFIG_bit at PWM_CH2_CONFIG.B2;
    sbit  CLK_PRE_DIVIDER3_PWM_CH2_CONFIG_bit at PWM_CH2_CONFIG.B3;
    sbit  CLK_PRE_DIVIDER4_PWM_CH2_CONFIG_bit at PWM_CH2_CONFIG.B4;
    sbit  CLK_PRE_DIVIDER5_PWM_CH2_CONFIG_bit at PWM_CH2_CONFIG.B5;
    sbit  CLK_PRE_DIVIDER6_PWM_CH2_CONFIG_bit at PWM_CH2_CONFIG.B6;

sfr far unsigned long   volatile PWM_CH3_COUNTER_ON_TIME absolute 0x40005830;
sfr far unsigned long   volatile PWM_CH3_COUNTER_OFF_TIME absolute 0x40005834;
sfr far unsigned long   volatile PWM_CH3_CONFIG       absolute 0x40005838;
    sbit  EN_PWM_CH3_CONFIG_bit at PWM_CH3_CONFIG.B0;
    sbit  CLK_SELECT_PWM_CH3_CONFIG_bit at PWM_CH3_CONFIG.B1;
    sbit  INVERT_PWM_CH3_CONFIG_bit at PWM_CH3_CONFIG.B2;
    sbit  CLK_PRE_DIVIDER3_PWM_CH3_CONFIG_bit at PWM_CH3_CONFIG.B3;
    sbit  CLK_PRE_DIVIDER4_PWM_CH3_CONFIG_bit at PWM_CH3_CONFIG.B4;
    sbit  CLK_PRE_DIVIDER5_PWM_CH3_CONFIG_bit at PWM_CH3_CONFIG.B5;
    sbit  CLK_PRE_DIVIDER6_PWM_CH3_CONFIG_bit at PWM_CH3_CONFIG.B6;

sfr far unsigned short   volatile FAN_SETTING          absolute 0x4000A000;
sfr far unsigned short   volatile FAN_PWM_DIVIDE       absolute 0x4000A001;
sfr far unsigned int   volatile FAN_CONFIGURATION    absolute 0x4000A002;
    const register unsigned short int UPDATE0 = 0;
    sbit  UPDATE0_bit at FAN_CONFIGURATION.B0;
    const register unsigned short int UPDATE1 = 1;
    sbit  UPDATE1_bit at FAN_CONFIGURATION.B1;
    const register unsigned short int UPDATE2 = 2;
    sbit  UPDATE2_bit at FAN_CONFIGURATION.B2;
    const register unsigned short int EDGES3 = 3;
    sbit  EDGES3_bit at FAN_CONFIGURATION.B3;
    const register unsigned short int EDGES4 = 4;
    sbit  EDGES4_bit at FAN_CONFIGURATION.B4;
    const register unsigned short int RANGE5 = 5;
    sbit  RANGE5_bit at FAN_CONFIGURATION.B5;
    const register unsigned short int RANGE6 = 6;
    sbit  RANGE6_bit at FAN_CONFIGURATION.B6;
    const register unsigned short int EN_ALGO = 7;
    sbit  EN_ALGO_bit at FAN_CONFIGURATION.B7;
    sbit  POLARITY_FAN_CONFIGURATION_bit at FAN_CONFIGURATION.B8;
    const register unsigned short int ERR_RNG9 = 9;
    sbit  ERR_RNG9_bit at FAN_CONFIGURATION.B9;
    const register unsigned short int ERR_RNG10 = 10;
    sbit  ERR_RNG10_bit at FAN_CONFIGURATION.B10;
    const register unsigned short int DER_OPT11 = 11;
    sbit  DER_OPT11_bit at FAN_CONFIGURATION.B11;
    const register unsigned short int DER_OPT12 = 12;
    sbit  DER_OPT12_bit at FAN_CONFIGURATION.B12;
    const register unsigned short int DIS_GLITCH = 13;
    sbit  DIS_GLITCH_bit at FAN_CONFIGURATION.B13;
    const register unsigned short int EN_RRC = 14;
    sbit  EN_RRC_bit at FAN_CONFIGURATION.B14;

sfr far unsigned short   volatile FAN_GAIN             absolute 0x4000A005;
    const register unsigned short int GAINP0 = 0;
    sbit  GAINP0_bit at FAN_GAIN.B0;
    const register unsigned short int GAINP1 = 1;
    sbit  GAINP1_bit at FAN_GAIN.B1;
    const register unsigned short int GAINI2 = 2;
    sbit  GAINI2_bit at FAN_GAIN.B2;
    const register unsigned short int GAINI3 = 3;
    sbit  GAINI3_bit at FAN_GAIN.B3;
    const register unsigned short int GAIND4 = 4;
    sbit  GAIND4_bit at FAN_GAIN.B4;
    const register unsigned short int GAIND5 = 5;
    sbit  GAIND5_bit at FAN_GAIN.B5;

sfr far unsigned short   volatile FAN_SPIN_UP_CONFIGURATION absolute 0x4000A006;
    const register unsigned short int SPINUP_TIME0 = 0;
    sbit  SPINUP_TIME0_bit at FAN_SPIN_UP_CONFIGURATION.B0;
    const register unsigned short int SPINUP_TIME1 = 1;
    sbit  SPINUP_TIME1_bit at FAN_SPIN_UP_CONFIGURATION.B1;
    const register unsigned short int SPIN_LVL2 = 2;
    sbit  SPIN_LVL2_bit at FAN_SPIN_UP_CONFIGURATION.B2;
    const register unsigned short int SPIN_LVL3 = 3;
    sbit  SPIN_LVL3_bit at FAN_SPIN_UP_CONFIGURATION.B3;
    const register unsigned short int SPIN_LVL4 = 4;
    sbit  SPIN_LVL4_bit at FAN_SPIN_UP_CONFIGURATION.B4;
    const register unsigned short int NOKICK = 5;
    sbit  NOKICK_bit at FAN_SPIN_UP_CONFIGURATION.B5;
    const register unsigned short int DRIVE_FAIL_CNT6 = 6;
    sbit  DRIVE_FAIL_CNT6_bit at FAN_SPIN_UP_CONFIGURATION.B6;
    const register unsigned short int DRIVE_FAIL_CNT7 = 7;
    sbit  DRIVE_FAIL_CNT7_bit at FAN_SPIN_UP_CONFIGURATION.B7;

sfr far unsigned short   volatile FAN_STEP             absolute 0x4000A007;
sfr far unsigned short   volatile FAN_MINIMUM_DRIVE    absolute 0x4000A008;
sfr far unsigned short   volatile FAN_VALID_TACH_COUNT absolute 0x4000A009;
sfr far unsigned int   volatile FAN_DRIVE_FAIL_BAND  absolute 0x4000A00A;
sfr far unsigned int   volatile FAN_TACH_TARGET      absolute 0x4000A00C;
sfr far unsigned short   volatile FAN_TACH_READING     absolute 0x4000A00E;
sfr far unsigned short   volatile FAN_DRIVER_BASE_FREQUENCY absolute 0x4000A010;
sfr far unsigned short   volatile FAN_STATUS           absolute 0x4000A011;
    const register unsigned short int FAN_STALL = 0;
    sbit  FAN_STALL_bit at FAN_STATUS.B0;
    const register unsigned short int FAN_SPIN = 1;
    sbit  FAN_SPIN_bit at FAN_STATUS.B1;
    const register unsigned short int DRIVE_FAIL = 5;
    sbit  DRIVE_FAIL_bit at FAN_STATUS.B5;

sfr far unsigned long   volatile SPI_CH0_ENABLE       absolute 0x40009400;
sfr far unsigned long   volatile SPI_CH0_CONTROL      absolute 0x40009404;
    const register unsigned short int LSBF = 0;
    sbit  LSBF_bit at SPI_CH0_CONTROL.B0;
    const register unsigned short int BIOEN = 1;
    sbit  BIOEN_bit at SPI_CH0_CONTROL.B1;
    const register unsigned short int SPDIN_SELECT2 = 2;
    sbit  SPDIN_SELECT2_bit at SPI_CH0_CONTROL.B2;
    const register unsigned short int SPDIN_SELECT3 = 3;
    sbit  SPDIN_SELECT3_bit at SPI_CH0_CONTROL.B3;
    sbit  SOFT_RESET_SPI_CH0_CONTROL_bit at SPI_CH0_CONTROL.B4;
    const register unsigned short int AUTO_READ = 5;
    sbit  AUTO_READ_bit at SPI_CH0_CONTROL.B5;
    const register unsigned short int CE = 6;
    sbit  CE_bit at SPI_CH0_CONTROL.B6;

sfr far unsigned long   volatile SPI_CH0_STATUS       absolute 0x40009408;
    const register unsigned short int TXBE = 0;
    sbit  TXBE_bit at SPI_CH0_STATUS.B0;
    const register unsigned short int RXBF = 1;
    sbit  RXBF_bit at SPI_CH0_STATUS.B1;
    const register unsigned short int ACTIVE = 2;
    sbit  ACTIVE_bit at SPI_CH0_STATUS.B2;

sfr far unsigned long   volatile SPI_CH0_TX_DATA      absolute 0x4000940C;
sfr far unsigned long   volatile SPI_CH0_RX_DATA      absolute 0x40009410;
sfr far unsigned long   volatile SPI_CH0_CLOCK_CONTROL absolute 0x40009414;
    const register unsigned short int TCLKPH = 0;
    sbit  TCLKPH_bit at SPI_CH0_CLOCK_CONTROL.B0;
    const register unsigned short int RCLKPH = 1;
    sbit  RCLKPH_bit at SPI_CH0_CLOCK_CONTROL.B1;
    const register unsigned short int CLKPOL = 2;
    sbit  CLKPOL_bit at SPI_CH0_CLOCK_CONTROL.B2;
    const register unsigned short int CLKSRC = 4;
    sbit  CLKSRC_bit at SPI_CH0_CLOCK_CONTROL.B4;

sfr far unsigned long   volatile SPI_CH0_CLOCK_GENERATOR absolute 0x40009418;
sfr far unsigned long   volatile SPI_CH1_ENABLE       absolute 0x40009480;
sfr far unsigned long   volatile SPI_CH1_CONTROL      absolute 0x40009484;
    sbit  LSBF_SPI_CH1_CONTROL_bit at SPI_CH1_CONTROL.B0;
    sbit  BIOEN_SPI_CH1_CONTROL_bit at SPI_CH1_CONTROL.B1;
    sbit  SPDIN_SELECT2_SPI_CH1_CONTROL_bit at SPI_CH1_CONTROL.B2;
    sbit  SPDIN_SELECT3_SPI_CH1_CONTROL_bit at SPI_CH1_CONTROL.B3;
    sbit  SOFT_RESET_SPI_CH1_CONTROL_bit at SPI_CH1_CONTROL.B4;
    sbit  AUTO_READ_SPI_CH1_CONTROL_bit at SPI_CH1_CONTROL.B5;
    sbit  CE_SPI_CH1_CONTROL_bit at SPI_CH1_CONTROL.B6;

sfr far unsigned long   volatile SPI_CH1_STATUS       absolute 0x40009488;
    sbit  TXBE_SPI_CH1_STATUS_bit at SPI_CH1_STATUS.B0;
    sbit  RXBF_SPI_CH1_STATUS_bit at SPI_CH1_STATUS.B1;
    sbit  ACTIVE_SPI_CH1_STATUS_bit at SPI_CH1_STATUS.B2;

sfr far unsigned long   volatile SPI_CH1_TX_DATA      absolute 0x4000948C;
sfr far unsigned long   volatile SPI_CH1_RX_DATA      absolute 0x40009490;
sfr far unsigned long   volatile SPI_CH1_CLOCK_CONTROL absolute 0x40009494;
    sbit  TCLKPH_SPI_CH1_CLOCK_Control_bit at SPI_CH1_CLOCK_CONTROL.B0;
    sbit  RCLKPH_SPI_CH1_CLOCK_Control_bit at SPI_CH1_CLOCK_CONTROL.B1;
    sbit  CLKPOL_SPI_CH1_CLOCK_Control_bit at SPI_CH1_CLOCK_CONTROL.B2;
    sbit  CLKSRC_SPI_CH1_CLOCK_Control_bit at SPI_CH1_CLOCK_CONTROL.B4;

sfr far unsigned long   volatile SPI_CH1_CLOCK_GENERATOR absolute 0x40009498;
sfr far unsigned long   volatile LED_CH0_CONFIG       absolute 0x4000B800;
    const register unsigned short int CONTROL0 = 0;
    sbit  CONTROL0_bit at LED_CH0_CONFIG.B0;
    const register unsigned short int CONTROL1 = 1;
    sbit  CONTROL1_bit at LED_CH0_CONFIG.B1;
    const register unsigned short int CLOCK_SOURCE = 2;
    sbit  CLOCK_SOURCE_bit at LED_CH0_CONFIG.B2;
    const register unsigned short int SYNCHRONIZE = 3;
    sbit  SYNCHRONIZE_bit at LED_CH0_CONFIG.B3;
    const register unsigned short int PWM_SIZE4 = 4;
    sbit  PWM_SIZE4_bit at LED_CH0_CONFIG.B4;
    const register unsigned short int PWM_SIZE5 = 5;
    sbit  PWM_SIZE5_bit at LED_CH0_CONFIG.B5;
    const register unsigned short int ENABLE_UPDATE = 6;
    sbit  ENABLE_UPDATE_bit at LED_CH0_CONFIG.B6;
    sbit  RESET_LED_CH0_CONFIG_bit at LED_CH0_CONFIG.B7;
    const register unsigned short int WDT_RELOAD8 = 8;
    sbit  WDT_RELOAD8_bit at LED_CH0_CONFIG.B8;
    const register unsigned short int WDT_RELOAD9 = 9;
    sbit  WDT_RELOAD9_bit at LED_CH0_CONFIG.B9;
    const register unsigned short int WDT_RELOAD10 = 10;
    sbit  WDT_RELOAD10_bit at LED_CH0_CONFIG.B10;
    const register unsigned short int WDT_RELOAD11 = 11;
    sbit  WDT_RELOAD11_bit at LED_CH0_CONFIG.B11;
    const register unsigned short int WDT_RELOAD12 = 12;
    sbit  WDT_RELOAD12_bit at LED_CH0_CONFIG.B12;
    const register unsigned short int WDT_RELOAD13 = 13;
    sbit  WDT_RELOAD13_bit at LED_CH0_CONFIG.B13;
    const register unsigned short int WDT_RELOAD14 = 14;
    sbit  WDT_RELOAD14_bit at LED_CH0_CONFIG.B14;
    const register unsigned short int WDT_RELOAD15 = 15;
    sbit  WDT_RELOAD15_bit at LED_CH0_CONFIG.B15;
    const register unsigned short int SYMMETRY = 16;
    sbit  SYMMETRY_bit at LED_CH0_CONFIG.B16;

sfr far unsigned long   volatile LED_CH0_LIMITS       absolute 0x4000B804;
    const register unsigned short int MINIMUM0 = 0;
    sbit  MINIMUM0_bit at LED_CH0_LIMITS.B0;
    const register unsigned short int MINIMUM1 = 1;
    sbit  MINIMUM1_bit at LED_CH0_LIMITS.B1;
    const register unsigned short int MINIMUM2 = 2;
    sbit  MINIMUM2_bit at LED_CH0_LIMITS.B2;
    const register unsigned short int MINIMUM3 = 3;
    sbit  MINIMUM3_bit at LED_CH0_LIMITS.B3;
    const register unsigned short int MINIMUM4 = 4;
    sbit  MINIMUM4_bit at LED_CH0_LIMITS.B4;
    const register unsigned short int MINIMUM5 = 5;
    sbit  MINIMUM5_bit at LED_CH0_LIMITS.B5;
    const register unsigned short int MINIMUM6 = 6;
    sbit  MINIMUM6_bit at LED_CH0_LIMITS.B6;
    const register unsigned short int MINIMUM7 = 7;
    sbit  MINIMUM7_bit at LED_CH0_LIMITS.B7;
    const register unsigned short int MAXIMUM8 = 8;
    sbit  MAXIMUM8_bit at LED_CH0_LIMITS.B8;
    const register unsigned short int MAXIMUM9 = 9;
    sbit  MAXIMUM9_bit at LED_CH0_LIMITS.B9;
    const register unsigned short int MAXIMUM10 = 10;
    sbit  MAXIMUM10_bit at LED_CH0_LIMITS.B10;
    const register unsigned short int MAXIMUM11 = 11;
    sbit  MAXIMUM11_bit at LED_CH0_LIMITS.B11;
    const register unsigned short int MAXIMUM12 = 12;
    sbit  MAXIMUM12_bit at LED_CH0_LIMITS.B12;
    const register unsigned short int MAXIMUM13 = 13;
    sbit  MAXIMUM13_bit at LED_CH0_LIMITS.B13;
    const register unsigned short int MAXIMUM14 = 14;
    sbit  MAXIMUM14_bit at LED_CH0_LIMITS.B14;
    const register unsigned short int MAXIMUM15 = 15;
    sbit  MAXIMUM15_bit at LED_CH0_LIMITS.B15;

sfr far unsigned long   volatile LED_CH0_DELAY        absolute 0x4000B808;
    const register unsigned short int LOW0 = 0;
    sbit  LOW0_bit at LED_CH0_DELAY.B0;
    const register unsigned short int LOW1 = 1;
    sbit  LOW1_bit at LED_CH0_DELAY.B1;
    const register unsigned short int LOW2 = 2;
    sbit  LOW2_bit at LED_CH0_DELAY.B2;
    const register unsigned short int LOW3 = 3;
    sbit  LOW3_bit at LED_CH0_DELAY.B3;
    const register unsigned short int LOW4 = 4;
    sbit  LOW4_bit at LED_CH0_DELAY.B4;
    const register unsigned short int LOW5 = 5;
    sbit  LOW5_bit at LED_CH0_DELAY.B5;
    const register unsigned short int LOW6 = 6;
    sbit  LOW6_bit at LED_CH0_DELAY.B6;
    const register unsigned short int LOW7 = 7;
    sbit  LOW7_bit at LED_CH0_DELAY.B7;
    const register unsigned short int LOW8 = 8;
    sbit  LOW8_bit at LED_CH0_DELAY.B8;
    const register unsigned short int LOW9 = 9;
    sbit  LOW9_bit at LED_CH0_DELAY.B9;
    const register unsigned short int LOW10 = 10;
    sbit  LOW10_bit at LED_CH0_DELAY.B10;
    const register unsigned short int LOW11 = 11;
    sbit  LOW11_bit at LED_CH0_DELAY.B11;
    const register unsigned short int HIGH12 = 12;
    sbit  HIGH12_bit at LED_CH0_DELAY.B12;
    const register unsigned short int HIGH13 = 13;
    sbit  HIGH13_bit at LED_CH0_DELAY.B13;
    const register unsigned short int HIGH14 = 14;
    sbit  HIGH14_bit at LED_CH0_DELAY.B14;
    const register unsigned short int HIGH15 = 15;
    sbit  HIGH15_bit at LED_CH0_DELAY.B15;
    const register unsigned short int HIGH16 = 16;
    sbit  HIGH16_bit at LED_CH0_DELAY.B16;
    const register unsigned short int HIGH17 = 17;
    sbit  HIGH17_bit at LED_CH0_DELAY.B17;
    const register unsigned short int HIGH18 = 18;
    sbit  HIGH18_bit at LED_CH0_DELAY.B18;
    const register unsigned short int HIGH19 = 19;
    sbit  HIGH19_bit at LED_CH0_DELAY.B19;
    const register unsigned short int HIGH20 = 20;
    sbit  HIGH20_bit at LED_CH0_DELAY.B20;
    const register unsigned short int HIGH21 = 21;
    sbit  HIGH21_bit at LED_CH0_DELAY.B21;
    const register unsigned short int HIGH22 = 22;
    sbit  HIGH22_bit at LED_CH0_DELAY.B22;
    const register unsigned short int HIGH23 = 23;
    sbit  HIGH23_bit at LED_CH0_DELAY.B23;

sfr far unsigned long   volatile LED_CH0_UPDATE_STEPSIZE absolute 0x4000B80C;
    const register unsigned short int STEP00 = 0;
    sbit  STEP00_bit at LED_CH0_UPDATE_STEPSIZE.B0;
    const register unsigned short int STEP01 = 1;
    sbit  STEP01_bit at LED_CH0_UPDATE_STEPSIZE.B1;
    const register unsigned short int STEP02 = 2;
    sbit  STEP02_bit at LED_CH0_UPDATE_STEPSIZE.B2;
    const register unsigned short int STEP03 = 3;
    sbit  STEP03_bit at LED_CH0_UPDATE_STEPSIZE.B3;
    const register unsigned short int STEP14 = 4;
    sbit  STEP14_bit at LED_CH0_UPDATE_STEPSIZE.B4;
    const register unsigned short int STEP15 = 5;
    sbit  STEP15_bit at LED_CH0_UPDATE_STEPSIZE.B5;
    const register unsigned short int STEP16 = 6;
    sbit  STEP16_bit at LED_CH0_UPDATE_STEPSIZE.B6;
    const register unsigned short int STEP17 = 7;
    sbit  STEP17_bit at LED_CH0_UPDATE_STEPSIZE.B7;
    const register unsigned short int STEP28 = 8;
    sbit  STEP28_bit at LED_CH0_UPDATE_STEPSIZE.B8;
    const register unsigned short int STEP29 = 9;
    sbit  STEP29_bit at LED_CH0_UPDATE_STEPSIZE.B9;
    const register unsigned short int STEP210 = 10;
    sbit  STEP210_bit at LED_CH0_UPDATE_STEPSIZE.B10;
    const register unsigned short int STEP211 = 11;
    sbit  STEP211_bit at LED_CH0_UPDATE_STEPSIZE.B11;
    const register unsigned short int STEP312 = 12;
    sbit  STEP312_bit at LED_CH0_UPDATE_STEPSIZE.B12;
    const register unsigned short int STEP313 = 13;
    sbit  STEP313_bit at LED_CH0_UPDATE_STEPSIZE.B13;
    const register unsigned short int STEP314 = 14;
    sbit  STEP314_bit at LED_CH0_UPDATE_STEPSIZE.B14;
    const register unsigned short int STEP315 = 15;
    sbit  STEP315_bit at LED_CH0_UPDATE_STEPSIZE.B15;
    const register unsigned short int STEP416 = 16;
    sbit  STEP416_bit at LED_CH0_UPDATE_STEPSIZE.B16;
    const register unsigned short int STEP417 = 17;
    sbit  STEP417_bit at LED_CH0_UPDATE_STEPSIZE.B17;
    const register unsigned short int STEP418 = 18;
    sbit  STEP418_bit at LED_CH0_UPDATE_STEPSIZE.B18;
    const register unsigned short int STEP419 = 19;
    sbit  STEP419_bit at LED_CH0_UPDATE_STEPSIZE.B19;
    const register unsigned short int STEP520 = 20;
    sbit  STEP520_bit at LED_CH0_UPDATE_STEPSIZE.B20;
    const register unsigned short int STEP521 = 21;
    sbit  STEP521_bit at LED_CH0_UPDATE_STEPSIZE.B21;
    const register unsigned short int STEP522 = 22;
    sbit  STEP522_bit at LED_CH0_UPDATE_STEPSIZE.B22;
    const register unsigned short int STEP523 = 23;
    sbit  STEP523_bit at LED_CH0_UPDATE_STEPSIZE.B23;
    const register unsigned short int STEP624 = 24;
    sbit  STEP624_bit at LED_CH0_UPDATE_STEPSIZE.B24;
    const register unsigned short int STEP625 = 25;
    sbit  STEP625_bit at LED_CH0_UPDATE_STEPSIZE.B25;
    const register unsigned short int STEP626 = 26;
    sbit  STEP626_bit at LED_CH0_UPDATE_STEPSIZE.B26;
    const register unsigned short int STEP627 = 27;
    sbit  STEP627_bit at LED_CH0_UPDATE_STEPSIZE.B27;
    const register unsigned short int STEP728 = 28;
    sbit  STEP728_bit at LED_CH0_UPDATE_STEPSIZE.B28;
    const register unsigned short int STEP729 = 29;
    sbit  STEP729_bit at LED_CH0_UPDATE_STEPSIZE.B29;
    const register unsigned short int STEP730 = 30;
    sbit  STEP730_bit at LED_CH0_UPDATE_STEPSIZE.B30;
    const register unsigned short int STEP731 = 31;
    sbit  STEP731_bit at LED_CH0_UPDATE_STEPSIZE.B31;

sfr far unsigned long   volatile LED_CH0_UPDATE_INTERVAL absolute 0x4000B810;
    const register unsigned short int INTERVAL00 = 0;
    sbit  INTERVAL00_bit at LED_CH0_UPDATE_INTERVAL.B0;
    const register unsigned short int INTERVAL01 = 1;
    sbit  INTERVAL01_bit at LED_CH0_UPDATE_INTERVAL.B1;
    const register unsigned short int INTERVAL02 = 2;
    sbit  INTERVAL02_bit at LED_CH0_UPDATE_INTERVAL.B2;
    const register unsigned short int INTERVAL03 = 3;
    sbit  INTERVAL03_bit at LED_CH0_UPDATE_INTERVAL.B3;
    const register unsigned short int INTERVAL14 = 4;
    sbit  INTERVAL14_bit at LED_CH0_UPDATE_INTERVAL.B4;
    const register unsigned short int INTERVAL15 = 5;
    sbit  INTERVAL15_bit at LED_CH0_UPDATE_INTERVAL.B5;
    const register unsigned short int INTERVAL16 = 6;
    sbit  INTERVAL16_bit at LED_CH0_UPDATE_INTERVAL.B6;
    const register unsigned short int INTERVAL17 = 7;
    sbit  INTERVAL17_bit at LED_CH0_UPDATE_INTERVAL.B7;
    const register unsigned short int INTERVAL28 = 8;
    sbit  INTERVAL28_bit at LED_CH0_UPDATE_INTERVAL.B8;
    const register unsigned short int INTERVAL29 = 9;
    sbit  INTERVAL29_bit at LED_CH0_UPDATE_INTERVAL.B9;
    const register unsigned short int INTERVAL210 = 10;
    sbit  INTERVAL210_bit at LED_CH0_UPDATE_INTERVAL.B10;
    const register unsigned short int INTERVAL211 = 11;
    sbit  INTERVAL211_bit at LED_CH0_UPDATE_INTERVAL.B11;
    const register unsigned short int INTERVAL312 = 12;
    sbit  INTERVAL312_bit at LED_CH0_UPDATE_INTERVAL.B12;
    const register unsigned short int INTERVAL313 = 13;
    sbit  INTERVAL313_bit at LED_CH0_UPDATE_INTERVAL.B13;
    const register unsigned short int INTERVAL314 = 14;
    sbit  INTERVAL314_bit at LED_CH0_UPDATE_INTERVAL.B14;
    const register unsigned short int INTERVAL315 = 15;
    sbit  INTERVAL315_bit at LED_CH0_UPDATE_INTERVAL.B15;
    const register unsigned short int INTERVAL416 = 16;
    sbit  INTERVAL416_bit at LED_CH0_UPDATE_INTERVAL.B16;
    const register unsigned short int INTERVAL417 = 17;
    sbit  INTERVAL417_bit at LED_CH0_UPDATE_INTERVAL.B17;
    const register unsigned short int INTERVAL418 = 18;
    sbit  INTERVAL418_bit at LED_CH0_UPDATE_INTERVAL.B18;
    const register unsigned short int INTERVAL419 = 19;
    sbit  INTERVAL419_bit at LED_CH0_UPDATE_INTERVAL.B19;
    const register unsigned short int INTERVAL520 = 20;
    sbit  INTERVAL520_bit at LED_CH0_UPDATE_INTERVAL.B20;
    const register unsigned short int INTERVAL521 = 21;
    sbit  INTERVAL521_bit at LED_CH0_UPDATE_INTERVAL.B21;
    const register unsigned short int INTERVAL522 = 22;
    sbit  INTERVAL522_bit at LED_CH0_UPDATE_INTERVAL.B22;
    const register unsigned short int INTERVAL523 = 23;
    sbit  INTERVAL523_bit at LED_CH0_UPDATE_INTERVAL.B23;
    const register unsigned short int UPDATE_INTERVAL624 = 24;
    sbit  UPDATE_INTERVAL624_bit at LED_CH0_UPDATE_INTERVAL.B24;
    const register unsigned short int UPDATE_INTERVAL625 = 25;
    sbit  UPDATE_INTERVAL625_bit at LED_CH0_UPDATE_INTERVAL.B25;
    const register unsigned short int UPDATE_INTERVAL626 = 26;
    sbit  UPDATE_INTERVAL626_bit at LED_CH0_UPDATE_INTERVAL.B26;
    const register unsigned short int UPDATE_INTERVAL627 = 27;
    sbit  UPDATE_INTERVAL627_bit at LED_CH0_UPDATE_INTERVAL.B27;
    const register unsigned short int INTERVAL728 = 28;
    sbit  INTERVAL728_bit at LED_CH0_UPDATE_INTERVAL.B28;
    const register unsigned short int INTERVAL729 = 29;
    sbit  INTERVAL729_bit at LED_CH0_UPDATE_INTERVAL.B29;
    const register unsigned short int INTERVAL730 = 30;
    sbit  INTERVAL730_bit at LED_CH0_UPDATE_INTERVAL.B30;
    const register unsigned short int INTERVAL731 = 31;
    sbit  INTERVAL731_bit at LED_CH0_UPDATE_INTERVAL.B31;

sfr far unsigned long   volatile LED_CH1_CONFIG       absolute 0x4000B900;
    sbit  CONTROL0_LED_CH1_CONFIG_bit at LED_CH1_CONFIG.B0;
    sbit  CONTROL1_LED_CH1_CONFIG_bit at LED_CH1_CONFIG.B1;
    sbit  CLOCK_SOURCE_LED_CH1_CONFIG_bit at LED_CH1_CONFIG.B2;
    sbit  SYNCHRONIZE_LED_CH1_CONFIG_bit at LED_CH1_CONFIG.B3;
    sbit  PWM_SIZE4_LED_CH1_CONFIG_bit at LED_CH1_CONFIG.B4;
    sbit  PWM_SIZE5_LED_CH1_CONFIG_bit at LED_CH1_CONFIG.B5;
    sbit  ENABLE_UPDATE_LED_CH1_CONFIG_bit at LED_CH1_CONFIG.B6;
    sbit  RESET_LED_CH1_CONFIG_bit at LED_CH1_CONFIG.B7;
    sbit  WDT_RELOAD8_LED_CH1_CONFIG_bit at LED_CH1_CONFIG.B8;
    sbit  WDT_RELOAD9_LED_CH1_CONFIG_bit at LED_CH1_CONFIG.B9;
    sbit  WDT_RELOAD10_LED_CH1_CONFIG_bit at LED_CH1_CONFIG.B10;
    sbit  WDT_RELOAD11_LED_CH1_CONFIG_bit at LED_CH1_CONFIG.B11;
    sbit  WDT_RELOAD12_LED_CH1_CONFIG_bit at LED_CH1_CONFIG.B12;
    sbit  WDT_RELOAD13_LED_CH1_CONFIG_bit at LED_CH1_CONFIG.B13;
    sbit  WDT_RELOAD14_LED_CH1_CONFIG_bit at LED_CH1_CONFIG.B14;
    sbit  WDT_RELOAD15_LED_CH1_CONFIG_bit at LED_CH1_CONFIG.B15;
    sbit  SYMMETRY_LED_CH1_CONFIG_bit at LED_CH1_CONFIG.B16;

sfr far unsigned long   volatile LED_CH1_LIMITS       absolute 0x4000B904;
    sbit  MINIMUM0_LED_CH1_LIMITS_bit at LED_CH1_LIMITS.B0;
    sbit  MINIMUM1_LED_CH1_LIMITS_bit at LED_CH1_LIMITS.B1;
    sbit  MINIMUM2_LED_CH1_LIMITS_bit at LED_CH1_LIMITS.B2;
    sbit  MINIMUM3_LED_CH1_LIMITS_bit at LED_CH1_LIMITS.B3;
    sbit  MINIMUM4_LED_CH1_LIMITS_bit at LED_CH1_LIMITS.B4;
    sbit  MINIMUM5_LED_CH1_LIMITS_bit at LED_CH1_LIMITS.B5;
    sbit  MINIMUM6_LED_CH1_LIMITS_bit at LED_CH1_LIMITS.B6;
    sbit  MINIMUM7_LED_CH1_LIMITS_bit at LED_CH1_LIMITS.B7;
    sbit  MAXIMUM8_LED_CH1_LIMITS_bit at LED_CH1_LIMITS.B8;
    sbit  MAXIMUM9_LED_CH1_LIMITS_bit at LED_CH1_LIMITS.B9;
    sbit  MAXIMUM10_LED_CH1_LIMITS_bit at LED_CH1_LIMITS.B10;
    sbit  MAXIMUM11_LED_CH1_LIMITS_bit at LED_CH1_LIMITS.B11;
    sbit  MAXIMUM12_LED_CH1_LIMITS_bit at LED_CH1_LIMITS.B12;
    sbit  MAXIMUM13_LED_CH1_LIMITS_bit at LED_CH1_LIMITS.B13;
    sbit  MAXIMUM14_LED_CH1_LIMITS_bit at LED_CH1_LIMITS.B14;
    sbit  MAXIMUM15_LED_CH1_LIMITS_bit at LED_CH1_LIMITS.B15;

sfr far unsigned long   volatile LED_CH1_DELAY        absolute 0x4000B908;
    sbit  LOW0_LED_CH1_DELAY_bit at LED_CH1_DELAY.B0;
    sbit  LOW1_LED_CH1_DELAY_bit at LED_CH1_DELAY.B1;
    sbit  LOW2_LED_CH1_DELAY_bit at LED_CH1_DELAY.B2;
    sbit  LOW3_LED_CH1_DELAY_bit at LED_CH1_DELAY.B3;
    sbit  LOW4_LED_CH1_DELAY_bit at LED_CH1_DELAY.B4;
    sbit  LOW5_LED_CH1_DELAY_bit at LED_CH1_DELAY.B5;
    sbit  LOW6_LED_CH1_DELAY_bit at LED_CH1_DELAY.B6;
    sbit  LOW7_LED_CH1_DELAY_bit at LED_CH1_DELAY.B7;
    sbit  LOW8_LED_CH1_DELAY_bit at LED_CH1_DELAY.B8;
    sbit  LOW9_LED_CH1_DELAY_bit at LED_CH1_DELAY.B9;
    sbit  LOW10_LED_CH1_DELAY_bit at LED_CH1_DELAY.B10;
    sbit  LOW11_LED_CH1_DELAY_bit at LED_CH1_DELAY.B11;
    sbit  HIGH12_LED_CH1_DELAY_bit at LED_CH1_DELAY.B12;
    sbit  HIGH13_LED_CH1_DELAY_bit at LED_CH1_DELAY.B13;
    sbit  HIGH14_LED_CH1_DELAY_bit at LED_CH1_DELAY.B14;
    sbit  HIGH15_LED_CH1_DELAY_bit at LED_CH1_DELAY.B15;
    sbit  HIGH16_LED_CH1_DELAY_bit at LED_CH1_DELAY.B16;
    sbit  HIGH17_LED_CH1_DELAY_bit at LED_CH1_DELAY.B17;
    sbit  HIGH18_LED_CH1_DELAY_bit at LED_CH1_DELAY.B18;
    sbit  HIGH19_LED_CH1_DELAY_bit at LED_CH1_DELAY.B19;
    sbit  HIGH20_LED_CH1_DELAY_bit at LED_CH1_DELAY.B20;
    sbit  HIGH21_LED_CH1_DELAY_bit at LED_CH1_DELAY.B21;
    sbit  HIGH22_LED_CH1_DELAY_bit at LED_CH1_DELAY.B22;
    sbit  HIGH23_LED_CH1_DELAY_bit at LED_CH1_DELAY.B23;

sfr far unsigned long   volatile LED_CH1_UPDATE_STEPSIZE absolute 0x4000B90C;
    sbit  STEP00_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B0;
    sbit  STEP01_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B1;
    sbit  STEP02_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B2;
    sbit  STEP03_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B3;
    sbit  STEP14_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B4;
    sbit  STEP15_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B5;
    sbit  STEP16_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B6;
    sbit  STEP17_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B7;
    sbit  STEP28_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B8;
    sbit  STEP29_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B9;
    sbit  STEP210_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B10;
    sbit  STEP211_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B11;
    sbit  STEP312_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B12;
    sbit  STEP313_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B13;
    sbit  STEP314_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B14;
    sbit  STEP315_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B15;
    sbit  STEP416_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B16;
    sbit  STEP417_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B17;
    sbit  STEP418_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B18;
    sbit  STEP419_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B19;
    sbit  STEP520_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B20;
    sbit  STEP521_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B21;
    sbit  STEP522_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B22;
    sbit  STEP523_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B23;
    sbit  STEP624_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B24;
    sbit  STEP625_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B25;
    sbit  STEP626_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B26;
    sbit  STEP627_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B27;
    sbit  STEP728_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B28;
    sbit  STEP729_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B29;
    sbit  STEP730_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B30;
    sbit  STEP731_LED_CH1_UPDATE_STEPSIZE_bit at LED_CH1_UPDATE_STEPSIZE.B31;

sfr far unsigned long   volatile LED_CH1_UPDATE_INTERVAL absolute 0x4000B910;
    sbit  INTERVAL00_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B0;
    sbit  INTERVAL01_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B1;
    sbit  INTERVAL02_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B2;
    sbit  INTERVAL03_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B3;
    sbit  INTERVAL14_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B4;
    sbit  INTERVAL15_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B5;
    sbit  INTERVAL16_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B6;
    sbit  INTERVAL17_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B7;
    sbit  INTERVAL28_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B8;
    sbit  INTERVAL29_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B9;
    sbit  INTERVAL210_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B10;
    sbit  INTERVAL211_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B11;
    sbit  INTERVAL312_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B12;
    sbit  INTERVAL313_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B13;
    sbit  INTERVAL314_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B14;
    sbit  INTERVAL315_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B15;
    sbit  INTERVAL416_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B16;
    sbit  INTERVAL417_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B17;
    sbit  INTERVAL418_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B18;
    sbit  INTERVAL419_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B19;
    sbit  INTERVAL520_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B20;
    sbit  INTERVAL521_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B21;
    sbit  INTERVAL522_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B22;
    sbit  INTERVAL523_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B23;
    sbit  UPDATE_INTERVAL624_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B24;
    sbit  UPDATE_INTERVAL625_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B25;
    sbit  UPDATE_INTERVAL626_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B26;
    sbit  UPDATE_INTERVAL627_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B27;
    sbit  INTERVAL728_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B28;
    sbit  INTERVAL729_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B29;
    sbit  INTERVAL730_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B30;
    sbit  INTERVAL731_LED_CH1_UPDATE_INTERVAL_bit at LED_CH1_UPDATE_INTERVAL.B31;

sfr far unsigned long   volatile LED_CH2_CONFIG       absolute 0x4000BA00;
    sbit  CONTROL0_LED_CH2_CONFIG_bit at LED_CH2_CONFIG.B0;
    sbit  CONTROL1_LED_CH2_CONFIG_bit at LED_CH2_CONFIG.B1;
    sbit  CLOCK_SOURCE_LED_CH2_CONFIG_bit at LED_CH2_CONFIG.B2;
    sbit  SYNCHRONIZE_LED_CH2_CONFIG_bit at LED_CH2_CONFIG.B3;
    sbit  PWM_SIZE4_LED_CH2_CONFIG_bit at LED_CH2_CONFIG.B4;
    sbit  PWM_SIZE5_LED_CH2_CONFIG_bit at LED_CH2_CONFIG.B5;
    sbit  ENABLE_UPDATE_LED_CH2_CONFIG_bit at LED_CH2_CONFIG.B6;
    sbit  RESET_LED_CH2_CONFIG_bit at LED_CH2_CONFIG.B7;
    sbit  WDT_RELOAD8_LED_CH2_CONFIG_bit at LED_CH2_CONFIG.B8;
    sbit  WDT_RELOAD9_LED_CH2_CONFIG_bit at LED_CH2_CONFIG.B9;
    sbit  WDT_RELOAD10_LED_CH2_CONFIG_bit at LED_CH2_CONFIG.B10;
    sbit  WDT_RELOAD11_LED_CH2_CONFIG_bit at LED_CH2_CONFIG.B11;
    sbit  WDT_RELOAD12_LED_CH2_CONFIG_bit at LED_CH2_CONFIG.B12;
    sbit  WDT_RELOAD13_LED_CH2_CONFIG_bit at LED_CH2_CONFIG.B13;
    sbit  WDT_RELOAD14_LED_CH2_CONFIG_bit at LED_CH2_CONFIG.B14;
    sbit  WDT_RELOAD15_LED_CH2_CONFIG_bit at LED_CH2_CONFIG.B15;
    sbit  SYMMETRY_LED_CH2_CONFIG_bit at LED_CH2_CONFIG.B16;

sfr far unsigned long   volatile LED_CH2_LIMITS       absolute 0x4000BA04;
    sbit  MINIMUM0_LED_CH2_LIMITS_bit at LED_CH2_LIMITS.B0;
    sbit  MINIMUM1_LED_CH2_LIMITS_bit at LED_CH2_LIMITS.B1;
    sbit  MINIMUM2_LED_CH2_LIMITS_bit at LED_CH2_LIMITS.B2;
    sbit  MINIMUM3_LED_CH2_LIMITS_bit at LED_CH2_LIMITS.B3;
    sbit  MINIMUM4_LED_CH2_LIMITS_bit at LED_CH2_LIMITS.B4;
    sbit  MINIMUM5_LED_CH2_LIMITS_bit at LED_CH2_LIMITS.B5;
    sbit  MINIMUM6_LED_CH2_LIMITS_bit at LED_CH2_LIMITS.B6;
    sbit  MINIMUM7_LED_CH2_LIMITS_bit at LED_CH2_LIMITS.B7;
    sbit  MAXIMUM8_LED_CH2_LIMITS_bit at LED_CH2_LIMITS.B8;
    sbit  MAXIMUM9_LED_CH2_LIMITS_bit at LED_CH2_LIMITS.B9;
    sbit  MAXIMUM10_LED_CH2_LIMITS_bit at LED_CH2_LIMITS.B10;
    sbit  MAXIMUM11_LED_CH2_LIMITS_bit at LED_CH2_LIMITS.B11;
    sbit  MAXIMUM12_LED_CH2_LIMITS_bit at LED_CH2_LIMITS.B12;
    sbit  MAXIMUM13_LED_CH2_LIMITS_bit at LED_CH2_LIMITS.B13;
    sbit  MAXIMUM14_LED_CH2_LIMITS_bit at LED_CH2_LIMITS.B14;
    sbit  MAXIMUM15_LED_CH2_LIMITS_bit at LED_CH2_LIMITS.B15;

sfr far unsigned long   volatile LED_CH2_DELAY        absolute 0x4000BA08;
    sbit  LOW0_LED_CH2_DELAY_bit at LED_CH2_DELAY.B0;
    sbit  LOW1_LED_CH2_DELAY_bit at LED_CH2_DELAY.B1;
    sbit  LOW2_LED_CH2_DELAY_bit at LED_CH2_DELAY.B2;
    sbit  LOW3_LED_CH2_DELAY_bit at LED_CH2_DELAY.B3;
    sbit  LOW4_LED_CH2_DELAY_bit at LED_CH2_DELAY.B4;
    sbit  LOW5_LED_CH2_DELAY_bit at LED_CH2_DELAY.B5;
    sbit  LOW6_LED_CH2_DELAY_bit at LED_CH2_DELAY.B6;
    sbit  LOW7_LED_CH2_DELAY_bit at LED_CH2_DELAY.B7;
    sbit  LOW8_LED_CH2_DELAY_bit at LED_CH2_DELAY.B8;
    sbit  LOW9_LED_CH2_DELAY_bit at LED_CH2_DELAY.B9;
    sbit  LOW10_LED_CH2_DELAY_bit at LED_CH2_DELAY.B10;
    sbit  LOW11_LED_CH2_DELAY_bit at LED_CH2_DELAY.B11;
    sbit  HIGH12_LED_CH2_DELAY_bit at LED_CH2_DELAY.B12;
    sbit  HIGH13_LED_CH2_DELAY_bit at LED_CH2_DELAY.B13;
    sbit  HIGH14_LED_CH2_DELAY_bit at LED_CH2_DELAY.B14;
    sbit  HIGH15_LED_CH2_DELAY_bit at LED_CH2_DELAY.B15;
    sbit  HIGH16_LED_CH2_DELAY_bit at LED_CH2_DELAY.B16;
    sbit  HIGH17_LED_CH2_DELAY_bit at LED_CH2_DELAY.B17;
    sbit  HIGH18_LED_CH2_DELAY_bit at LED_CH2_DELAY.B18;
    sbit  HIGH19_LED_CH2_DELAY_bit at LED_CH2_DELAY.B19;
    sbit  HIGH20_LED_CH2_DELAY_bit at LED_CH2_DELAY.B20;
    sbit  HIGH21_LED_CH2_DELAY_bit at LED_CH2_DELAY.B21;
    sbit  HIGH22_LED_CH2_DELAY_bit at LED_CH2_DELAY.B22;
    sbit  HIGH23_LED_CH2_DELAY_bit at LED_CH2_DELAY.B23;

sfr far unsigned long   volatile LED_CH2_UPDATE_STEPSIZE absolute 0x4000BA0C;
    sbit  STEP00_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B0;
    sbit  STEP01_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B1;
    sbit  STEP02_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B2;
    sbit  STEP03_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B3;
    sbit  STEP14_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B4;
    sbit  STEP15_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B5;
    sbit  STEP16_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B6;
    sbit  STEP17_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B7;
    sbit  STEP28_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B8;
    sbit  STEP29_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B9;
    sbit  STEP210_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B10;
    sbit  STEP211_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B11;
    sbit  STEP312_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B12;
    sbit  STEP313_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B13;
    sbit  STEP314_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B14;
    sbit  STEP315_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B15;
    sbit  STEP416_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B16;
    sbit  STEP417_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B17;
    sbit  STEP418_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B18;
    sbit  STEP419_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B19;
    sbit  STEP520_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B20;
    sbit  STEP521_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B21;
    sbit  STEP522_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B22;
    sbit  STEP523_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B23;
    sbit  STEP624_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B24;
    sbit  STEP625_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B25;
    sbit  STEP626_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B26;
    sbit  STEP627_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B27;
    sbit  STEP728_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B28;
    sbit  STEP729_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B29;
    sbit  STEP730_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B30;
    sbit  STEP731_LED_CH2_UPDATE_STEPSIZE_bit at LED_CH2_UPDATE_STEPSIZE.B31;

sfr far unsigned long   volatile LED_CH2_UPDATE_INTERVAL absolute 0x4000BA10;
    sbit  INTERVAL00_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B0;
    sbit  INTERVAL01_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B1;
    sbit  INTERVAL02_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B2;
    sbit  INTERVAL03_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B3;
    sbit  INTERVAL14_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B4;
    sbit  INTERVAL15_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B5;
    sbit  INTERVAL16_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B6;
    sbit  INTERVAL17_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B7;
    sbit  INTERVAL28_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B8;
    sbit  INTERVAL29_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B9;
    sbit  INTERVAL210_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B10;
    sbit  INTERVAL211_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B11;
    sbit  INTERVAL312_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B12;
    sbit  INTERVAL313_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B13;
    sbit  INTERVAL314_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B14;
    sbit  INTERVAL315_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B15;
    sbit  INTERVAL416_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B16;
    sbit  INTERVAL417_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B17;
    sbit  INTERVAL418_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B18;
    sbit  INTERVAL419_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B19;
    sbit  INTERVAL520_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B20;
    sbit  INTERVAL521_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B21;
    sbit  INTERVAL522_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B22;
    sbit  INTERVAL523_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B23;
    sbit  UPDATE_INTERVAL624_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B24;
    sbit  UPDATE_INTERVAL625_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B25;
    sbit  UPDATE_INTERVAL626_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B26;
    sbit  UPDATE_INTERVAL627_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B27;
    sbit  INTERVAL728_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B28;
    sbit  INTERVAL729_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B29;
    sbit  INTERVAL730_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B30;
    sbit  INTERVAL731_LED_CH2_UPDATE_INTERVAL_bit at LED_CH2_UPDATE_INTERVAL.B31;

sfr far unsigned long   volatile LED_CH3_CONFIG       absolute 0x4000BB00;
    sbit  CONTROL0_LED_CH3_CONFIG_bit at LED_CH3_CONFIG.B0;
    sbit  CONTROL1_LED_CH3_CONFIG_bit at LED_CH3_CONFIG.B1;
    sbit  CLOCK_SOURCE_LED_CH3_CONFIG_bit at LED_CH3_CONFIG.B2;
    sbit  SYNCHRONIZE_LED_CH3_CONFIG_bit at LED_CH3_CONFIG.B3;
    sbit  PWM_SIZE4_LED_CH3_CONFIG_bit at LED_CH3_CONFIG.B4;
    sbit  PWM_SIZE5_LED_CH3_CONFIG_bit at LED_CH3_CONFIG.B5;
    sbit  ENABLE_UPDATE_LED_CH3_CONFIG_bit at LED_CH3_CONFIG.B6;
    sbit  RESET_LED_CH3_CONFIG_bit at LED_CH3_CONFIG.B7;
    sbit  WDT_RELOAD8_LED_CH3_CONFIG_bit at LED_CH3_CONFIG.B8;
    sbit  WDT_RELOAD9_LED_CH3_CONFIG_bit at LED_CH3_CONFIG.B9;
    sbit  WDT_RELOAD10_LED_CH3_CONFIG_bit at LED_CH3_CONFIG.B10;
    sbit  WDT_RELOAD11_LED_CH3_CONFIG_bit at LED_CH3_CONFIG.B11;
    sbit  WDT_RELOAD12_LED_CH3_CONFIG_bit at LED_CH3_CONFIG.B12;
    sbit  WDT_RELOAD13_LED_CH3_CONFIG_bit at LED_CH3_CONFIG.B13;
    sbit  WDT_RELOAD14_LED_CH3_CONFIG_bit at LED_CH3_CONFIG.B14;
    sbit  WDT_RELOAD15_LED_CH3_CONFIG_bit at LED_CH3_CONFIG.B15;
    sbit  SYMMETRY_LED_CH3_CONFIG_bit at LED_CH3_CONFIG.B16;

sfr far unsigned long   volatile LED_CH3_LIMITS       absolute 0x4000BB04;
    sbit  MINIMUM0_LED_CH3_LIMITS_bit at LED_CH3_LIMITS.B0;
    sbit  MINIMUM1_LED_CH3_LIMITS_bit at LED_CH3_LIMITS.B1;
    sbit  MINIMUM2_LED_CH3_LIMITS_bit at LED_CH3_LIMITS.B2;
    sbit  MINIMUM3_LED_CH3_LIMITS_bit at LED_CH3_LIMITS.B3;
    sbit  MINIMUM4_LED_CH3_LIMITS_bit at LED_CH3_LIMITS.B4;
    sbit  MINIMUM5_LED_CH3_LIMITS_bit at LED_CH3_LIMITS.B5;
    sbit  MINIMUM6_LED_CH3_LIMITS_bit at LED_CH3_LIMITS.B6;
    sbit  MINIMUM7_LED_CH3_LIMITS_bit at LED_CH3_LIMITS.B7;
    sbit  MAXIMUM8_LED_CH3_LIMITS_bit at LED_CH3_LIMITS.B8;
    sbit  MAXIMUM9_LED_CH3_LIMITS_bit at LED_CH3_LIMITS.B9;
    sbit  MAXIMUM10_LED_CH3_LIMITS_bit at LED_CH3_LIMITS.B10;
    sbit  MAXIMUM11_LED_CH3_LIMITS_bit at LED_CH3_LIMITS.B11;
    sbit  MAXIMUM12_LED_CH3_LIMITS_bit at LED_CH3_LIMITS.B12;
    sbit  MAXIMUM13_LED_CH3_LIMITS_bit at LED_CH3_LIMITS.B13;
    sbit  MAXIMUM14_LED_CH3_LIMITS_bit at LED_CH3_LIMITS.B14;
    sbit  MAXIMUM15_LED_CH3_LIMITS_bit at LED_CH3_LIMITS.B15;

sfr far unsigned long   volatile LED_CH3_DELAY        absolute 0x4000BB08;
    sbit  LOW0_LED_CH3_DELAY_bit at LED_CH3_DELAY.B0;
    sbit  LOW1_LED_CH3_DELAY_bit at LED_CH3_DELAY.B1;
    sbit  LOW2_LED_CH3_DELAY_bit at LED_CH3_DELAY.B2;
    sbit  LOW3_LED_CH3_DELAY_bit at LED_CH3_DELAY.B3;
    sbit  LOW4_LED_CH3_DELAY_bit at LED_CH3_DELAY.B4;
    sbit  LOW5_LED_CH3_DELAY_bit at LED_CH3_DELAY.B5;
    sbit  LOW6_LED_CH3_DELAY_bit at LED_CH3_DELAY.B6;
    sbit  LOW7_LED_CH3_DELAY_bit at LED_CH3_DELAY.B7;
    sbit  LOW8_LED_CH3_DELAY_bit at LED_CH3_DELAY.B8;
    sbit  LOW9_LED_CH3_DELAY_bit at LED_CH3_DELAY.B9;
    sbit  LOW10_LED_CH3_DELAY_bit at LED_CH3_DELAY.B10;
    sbit  LOW11_LED_CH3_DELAY_bit at LED_CH3_DELAY.B11;
    sbit  HIGH12_LED_CH3_DELAY_bit at LED_CH3_DELAY.B12;
    sbit  HIGH13_LED_CH3_DELAY_bit at LED_CH3_DELAY.B13;
    sbit  HIGH14_LED_CH3_DELAY_bit at LED_CH3_DELAY.B14;
    sbit  HIGH15_LED_CH3_DELAY_bit at LED_CH3_DELAY.B15;
    sbit  HIGH16_LED_CH3_DELAY_bit at LED_CH3_DELAY.B16;
    sbit  HIGH17_LED_CH3_DELAY_bit at LED_CH3_DELAY.B17;
    sbit  HIGH18_LED_CH3_DELAY_bit at LED_CH3_DELAY.B18;
    sbit  HIGH19_LED_CH3_DELAY_bit at LED_CH3_DELAY.B19;
    sbit  HIGH20_LED_CH3_DELAY_bit at LED_CH3_DELAY.B20;
    sbit  HIGH21_LED_CH3_DELAY_bit at LED_CH3_DELAY.B21;
    sbit  HIGH22_LED_CH3_DELAY_bit at LED_CH3_DELAY.B22;
    sbit  HIGH23_LED_CH3_DELAY_bit at LED_CH3_DELAY.B23;

sfr far unsigned long   volatile LED_CH3_UPDATE_STEPSIZE absolute 0x4000BB0C;
    sbit  STEP00_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B0;
    sbit  STEP01_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B1;
    sbit  STEP02_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B2;
    sbit  STEP03_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B3;
    sbit  STEP14_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B4;
    sbit  STEP15_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B5;
    sbit  STEP16_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B6;
    sbit  STEP17_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B7;
    sbit  STEP28_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B8;
    sbit  STEP29_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B9;
    sbit  STEP210_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B10;
    sbit  STEP211_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B11;
    sbit  STEP312_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B12;
    sbit  STEP313_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B13;
    sbit  STEP314_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B14;
    sbit  STEP315_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B15;
    sbit  STEP416_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B16;
    sbit  STEP417_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B17;
    sbit  STEP418_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B18;
    sbit  STEP419_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B19;
    sbit  STEP520_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B20;
    sbit  STEP521_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B21;
    sbit  STEP522_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B22;
    sbit  STEP523_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B23;
    sbit  STEP624_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B24;
    sbit  STEP625_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B25;
    sbit  STEP626_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B26;
    sbit  STEP627_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B27;
    sbit  STEP728_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B28;
    sbit  STEP729_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B29;
    sbit  STEP730_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B30;
    sbit  STEP731_LED_CH3_UPDATE_STEPSIZE_bit at LED_CH3_UPDATE_STEPSIZE.B31;

sfr far unsigned long   volatile LED_CH3_UPDATE_INTERVAL absolute 0x4000BB10;
    sbit  INTERVAL00_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B0;
    sbit  INTERVAL01_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B1;
    sbit  INTERVAL02_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B2;
    sbit  INTERVAL03_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B3;
    sbit  INTERVAL14_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B4;
    sbit  INTERVAL15_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B5;
    sbit  INTERVAL16_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B6;
    sbit  INTERVAL17_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B7;
    sbit  INTERVAL28_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B8;
    sbit  INTERVAL29_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B9;
    sbit  INTERVAL210_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B10;
    sbit  INTERVAL211_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B11;
    sbit  INTERVAL312_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B12;
    sbit  INTERVAL313_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B13;
    sbit  INTERVAL314_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B14;
    sbit  INTERVAL315_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B15;
    sbit  INTERVAL416_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B16;
    sbit  INTERVAL417_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B17;
    sbit  INTERVAL418_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B18;
    sbit  INTERVAL419_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B19;
    sbit  INTERVAL520_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B20;
    sbit  INTERVAL521_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B21;
    sbit  INTERVAL522_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B22;
    sbit  INTERVAL523_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B23;
    sbit  UPDATE_INTERVAL624_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B24;
    sbit  UPDATE_INTERVAL625_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B25;
    sbit  UPDATE_INTERVAL626_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B26;
    sbit  UPDATE_INTERVAL627_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B27;
    sbit  INTERVAL728_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B28;
    sbit  INTERVAL729_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B29;
    sbit  INTERVAL730_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B30;
    sbit  INTERVAL731_LED_CH3_UPDATE_INTERVAL_bit at LED_CH3_UPDATE_INTERVAL.B31;

sfr far unsigned long   volatile PS2_CH0TX_DATA       absolute 0x40009000;
sfr far unsigned long   volatile PS2_CH0RX_DATA       absolute 0x40009000;
sfr far unsigned long   volatile PS2_CH0CONTROL       absolute 0x40009004;
    const register unsigned short int TR = 0;
    sbit  TR_bit at PS2_CH0CONTROL.B0;
    sbit  EN_PS2_CH0CONTROL_bit at PS2_CH0CONTROL.B1;
    const register unsigned short int PARITY2 = 2;
    sbit  PARITY2_bit at PS2_CH0CONTROL.B2;
    const register unsigned short int PARITY3 = 3;
    sbit  PARITY3_bit at PS2_CH0CONTROL.B3;
    const register unsigned short int STOP4 = 4;
    sbit  STOP4_bit at PS2_CH0CONTROL.B4;
    const register unsigned short int STOP5 = 5;
    sbit  STOP5_bit at PS2_CH0CONTROL.B5;

sfr far unsigned long   volatile PS2_CH0STATUS        absolute 0x40009008;
    const register unsigned short int RDATA_RDY = 0;
    sbit  RDATA_RDY_bit at PS2_CH0STATUS.B0;
    const register unsigned short int REC_TIMEOUT = 1;
    sbit  REC_TIMEOUT_bit at PS2_CH0STATUS.B1;
    sbit  PE_PS2_CH0STATUS_bit at PS2_CH0STATUS.B2;
    const register unsigned short int FE = 3;
    sbit  FE_bit at PS2_CH0STATUS.B3;
    const register unsigned short int XMIT_IDLE = 4;
    sbit  XMIT_IDLE_bit at PS2_CH0STATUS.B4;
    const register unsigned short int XMIT_TIME_OUT = 5;
    sbit  XMIT_TIME_OUT_bit at PS2_CH0STATUS.B5;
    const register unsigned short int RX_BUSY = 6;
    sbit  RX_BUSY_bit at PS2_CH0STATUS.B6;
    const register unsigned short int XMIT_START_TIMEOUT = 7;
    sbit  XMIT_START_TIMEOUT_bit at PS2_CH0STATUS.B7;

sfr far unsigned long   volatile PS2_CH1TX_DATA       absolute 0x40009040;
sfr far unsigned long   volatile PS2_CH1RX_DATA       absolute 0x40009040;
sfr far unsigned long   volatile PS2_CH1CONTROL       absolute 0x40009044;
    sbit  TR_PS2_CH1CONTROL_bit at PS2_CH1CONTROL.B0;
    sbit  EN_PS2_CH1CONTROL_bit at PS2_CH1CONTROL.B1;
    sbit  PARITY2_PS2_CH1CONTROL_bit at PS2_CH1CONTROL.B2;
    sbit  PARITY3_PS2_CH1CONTROL_bit at PS2_CH1CONTROL.B3;
    sbit  STOP4_PS2_CH1CONTROL_bit at PS2_CH1CONTROL.B4;
    sbit  STOP5_PS2_CH1CONTROL_bit at PS2_CH1CONTROL.B5;

sfr far unsigned long   volatile PS2_CH1STATUS        absolute 0x40009048;
    sbit  RDATA_RDY_PS2_CH1STATUS_bit at PS2_CH1STATUS.B0;
    sbit  REC_TIMEOUT_PS2_CH1STATUS_bit at PS2_CH1STATUS.B1;
    sbit  PE_PS2_CH1STATUS_bit at PS2_CH1STATUS.B2;
    sbit  FE_PS2_CH1STATUS_bit at PS2_CH1STATUS.B3;
    sbit  XMIT_IDLE_PS2_CH1STATUS_bit at PS2_CH1STATUS.B4;
    sbit  XMIT_TIME_OUT_PS2_CH1STATUS_bit at PS2_CH1STATUS.B5;
    sbit  RX_BUSY_PS2_CH1STATUS_bit at PS2_CH1STATUS.B6;
    sbit  XMIT_START_TIMEOUT_PS2_CH1STATUS_bit at PS2_CH1STATUS.B7;

sfr far unsigned long   volatile PS2_CH2TX_DATA       absolute 0x40009080;
sfr far unsigned long   volatile PS2_CH2RX_DATA       absolute 0x40009080;
sfr far unsigned long   volatile PS2_CH2CONTROL       absolute 0x40009084;
    sbit  TR_PS2_CH2CONTROL_bit at PS2_CH2CONTROL.B0;
    sbit  EN_PS2_CH2CONTROL_bit at PS2_CH2CONTROL.B1;
    sbit  PARITY2_PS2_CH2CONTROL_bit at PS2_CH2CONTROL.B2;
    sbit  PARITY3_PS2_CH2CONTROL_bit at PS2_CH2CONTROL.B3;
    sbit  STOP4_PS2_CH2CONTROL_bit at PS2_CH2CONTROL.B4;
    sbit  STOP5_PS2_CH2CONTROL_bit at PS2_CH2CONTROL.B5;

sfr far unsigned long   volatile PS2_CH2STATUS        absolute 0x40009088;
    sbit  RDATA_RDY_PS2_CH2STATUS_bit at PS2_CH2STATUS.B0;
    sbit  REC_TIMEOUT_PS2_CH2STATUS_bit at PS2_CH2STATUS.B1;
    sbit  PE_PS2_CH2STATUS_bit at PS2_CH2STATUS.B2;
    sbit  FE_PS2_CH2STATUS_bit at PS2_CH2STATUS.B3;
    sbit  XMIT_IDLE_PS2_CH2STATUS_bit at PS2_CH2STATUS.B4;
    sbit  XMIT_TIME_OUT_PS2_CH2STATUS_bit at PS2_CH2STATUS.B5;
    sbit  RX_BUSY_PS2_CH2STATUS_bit at PS2_CH2STATUS.B6;
    sbit  XMIT_START_TIMEOUT_PS2_CH2STATUS_bit at PS2_CH2STATUS.B7;

sfr far unsigned long   volatile PS2_CH3TX_DATA       absolute 0x400090C0;
sfr far unsigned long   volatile PS2_CH3RX_DATA       absolute 0x400090C0;
sfr far unsigned long   volatile PS2_CH3CONTROL       absolute 0x400090C4;
    sbit  TR_PS2_CH3CONTROL_bit at PS2_CH3CONTROL.B0;
    sbit  EN_PS2_CH3CONTROL_bit at PS2_CH3CONTROL.B1;
    sbit  PARITY2_PS2_CH3CONTROL_bit at PS2_CH3CONTROL.B2;
    sbit  PARITY3_PS2_CH3CONTROL_bit at PS2_CH3CONTROL.B3;
    sbit  STOP4_PS2_CH3CONTROL_bit at PS2_CH3CONTROL.B4;
    sbit  STOP5_PS2_CH3CONTROL_bit at PS2_CH3CONTROL.B5;

sfr far unsigned long   volatile PS2_CH3STATUS        absolute 0x400090C8;
    sbit  RDATA_RDY_PS2_CH3STATUS_bit at PS2_CH3STATUS.B0;
    sbit  REC_TIMEOUT_PS2_CH3STATUS_bit at PS2_CH3STATUS.B1;
    sbit  PE_PS2_CH3STATUS_bit at PS2_CH3STATUS.B2;
    sbit  FE_PS2_CH3STATUS_bit at PS2_CH3STATUS.B3;
    sbit  XMIT_IDLE_PS2_CH3STATUS_bit at PS2_CH3STATUS.B4;
    sbit  XMIT_TIME_OUT_PS2_CH3STATUS_bit at PS2_CH3STATUS.B5;
    sbit  RX_BUSY_PS2_CH3STATUS_bit at PS2_CH3STATUS.B6;
    sbit  XMIT_START_TIMEOUT_PS2_CH3STATUS_bit at PS2_CH3STATUS.B7;

sfr far unsigned long   volatile KMS_KSO_CONTROL      absolute 0x40009C04;
    const register unsigned short int SELECT0 = 0;
    sbit  SELECT0_bit at KMS_KSO_CONTROL.B0;
    const register unsigned short int SELECT1 = 1;
    sbit  SELECT1_bit at KMS_KSO_CONTROL.B1;
    const register unsigned short int SELECT2 = 2;
    sbit  SELECT2_bit at KMS_KSO_CONTROL.B2;
    const register unsigned short int SELECT3 = 3;
    sbit  SELECT3_bit at KMS_KSO_CONTROL.B3;
    const register unsigned short int SELECT4 = 4;
    sbit  SELECT4_bit at KMS_KSO_CONTROL.B4;
    const register unsigned short int ALL = 5;
    sbit  ALL_bit at KMS_KSO_CONTROL.B5;
    const register unsigned short int KSEN = 6;
    sbit  KSEN_bit at KMS_KSO_CONTROL.B6;
    sbit  INVERT_KMS_KSO_CONTROL_bit at KMS_KSO_CONTROL.B7;

sfr far unsigned long   volatile KMS_KSI              absolute 0x40009C08;
sfr far unsigned long   volatile KMS_KSI_STATUS       absolute 0x40009C0C;
sfr far unsigned long   volatile KMS_KSI_INT_EN       absolute 0x40009C10;
sfr far unsigned long   volatile KMS_EXTENDED_CONTROL absolute 0x40009C14;
sfr far unsigned long   volatile BC_LINK_STATUS       absolute 0x4000BC00;
    sbit  BUSY_BC_LINK_STATUS_bit at BC_LINK_STATUS.B0;
    const register unsigned short int BUSY_CLR_INT_EN = 4;
    sbit  BUSY_CLR_INT_EN_bit at BC_LINK_STATUS.B4;
    const register unsigned short int ERR_INT_EN = 5;
    sbit  ERR_INT_EN_bit at BC_LINK_STATUS.B5;
    const register unsigned short int ERROR_ = 6;
    sbit  ERROR_bit at BC_LINK_STATUS.B6;
    sbit  RESET_BC_LINK_STATUS_bit at BC_LINK_STATUS.B7;

sfr far unsigned long   volatile BC_LINK_ADDRESS      absolute 0x4000BC04;
sfr far unsigned long   volatile BC_LINK_DATA         absolute 0x4000BC08;
sfr far unsigned long   volatile BC_LINK_CLOCK_SELECT absolute 0x4000BC0C;
sfr far unsigned int   volatile TFDP_DATA            absolute 0x40008C00;
sfr far unsigned short   volatile TFDP_CONTROL         absolute 0x40008C04;
    sbit  EN_TFDP_CONTROL_bit at TFDP_CONTROL.B0;
    const register unsigned short int EDGE_SEL = 1;
    sbit  EDGE_SEL_bit at TFDP_CONTROL.B1;
    const register unsigned short int DIVSEL2 = 2;
    sbit  DIVSEL2_bit at TFDP_CONTROL.B2;
    const register unsigned short int DIVSEL3 = 3;
    sbit  DIVSEL3_bit at TFDP_CONTROL.B3;
    const register unsigned short int IP_DELAY4 = 4;
    sbit  IP_DELAY4_bit at TFDP_CONTROL.B4;
    const register unsigned short int IP_DELAY5 = 5;
    sbit  IP_DELAY5_bit at TFDP_CONTROL.B5;
    const register unsigned short int IP_DELAY6 = 6;
    sbit  IP_DELAY6_bit at TFDP_CONTROL.B6;

sfr far unsigned long   volatile ADC_CONTROL          absolute 0x40007C00;
    sbit  ACTIVATE_ADC_CONTROL_bit at ADC_CONTROL.B0;
    const register unsigned short int START_SINGLE = 1;
    sbit  START_SINGLE_bit at ADC_CONTROL.B1;
    const register unsigned short int START_REPEAT = 2;
    sbit  START_REPEAT_bit at ADC_CONTROL.B2;
    const register unsigned short int POWER_SAVER_DIS = 3;
    sbit  POWER_SAVER_DIS_bit at ADC_CONTROL.B3;
    sbit  SOFT_RESET_ADC_CONTROL_bit at ADC_CONTROL.B4;
    const register unsigned short int REPEAT_DONE_STAT = 6;
    sbit  REPEAT_DONE_STAT_bit at ADC_CONTROL.B6;
    const register unsigned short int SINGLE_DONE_STAT = 7;
    sbit  SINGLE_DONE_STAT_bit at ADC_CONTROL.B7;

sfr far unsigned long   volatile ADC_DELAY            absolute 0x40007C04;
    sbit  START0_ADC_DELAY_bit at ADC_DELAY.B0;
    const register unsigned short int START1 = 1;
    sbit  START1_bit at ADC_DELAY.B1;
    const register unsigned short int START2 = 2;
    sbit  START2_bit at ADC_DELAY.B2;
    const register unsigned short int START3 = 3;
    sbit  START3_bit at ADC_DELAY.B3;
    const register unsigned short int START4 = 4;
    sbit  START4_bit at ADC_DELAY.B4;
    const register unsigned short int START5 = 5;
    sbit  START5_bit at ADC_DELAY.B5;
    const register unsigned short int START6 = 6;
    sbit  START6_bit at ADC_DELAY.B6;
    const register unsigned short int START7 = 7;
    sbit  START7_bit at ADC_DELAY.B7;
    const register unsigned short int START8 = 8;
    sbit  START8_bit at ADC_DELAY.B8;
    const register unsigned short int START9 = 9;
    sbit  START9_bit at ADC_DELAY.B9;
    const register unsigned short int START10 = 10;
    sbit  START10_bit at ADC_DELAY.B10;
    const register unsigned short int START11 = 11;
    sbit  START11_bit at ADC_DELAY.B11;
    const register unsigned short int START12 = 12;
    sbit  START12_bit at ADC_DELAY.B12;
    const register unsigned short int START13 = 13;
    sbit  START13_bit at ADC_DELAY.B13;
    const register unsigned short int START14 = 14;
    sbit  START14_bit at ADC_DELAY.B14;
    const register unsigned short int START15 = 15;
    sbit  START15_bit at ADC_DELAY.B15;
    const register unsigned short int REPEAT16 = 16;
    sbit  REPEAT16_bit at ADC_DELAY.B16;
    const register unsigned short int REPEAT17 = 17;
    sbit  REPEAT17_bit at ADC_DELAY.B17;
    const register unsigned short int REPEAT18 = 18;
    sbit  REPEAT18_bit at ADC_DELAY.B18;
    const register unsigned short int REPEAT19 = 19;
    sbit  REPEAT19_bit at ADC_DELAY.B19;
    const register unsigned short int REPEAT20 = 20;
    sbit  REPEAT20_bit at ADC_DELAY.B20;
    const register unsigned short int REPEAT21 = 21;
    sbit  REPEAT21_bit at ADC_DELAY.B21;
    const register unsigned short int REPEAT22 = 22;
    sbit  REPEAT22_bit at ADC_DELAY.B22;
    const register unsigned short int REPEAT23 = 23;
    sbit  REPEAT23_bit at ADC_DELAY.B23;
    const register unsigned short int REPEAT24 = 24;
    sbit  REPEAT24_bit at ADC_DELAY.B24;
    const register unsigned short int REPEAT25 = 25;
    sbit  REPEAT25_bit at ADC_DELAY.B25;
    const register unsigned short int REPEAT26 = 26;
    sbit  REPEAT26_bit at ADC_DELAY.B26;
    const register unsigned short int REPEAT27 = 27;
    sbit  REPEAT27_bit at ADC_DELAY.B27;
    const register unsigned short int REPEAT28 = 28;
    sbit  REPEAT28_bit at ADC_DELAY.B28;
    const register unsigned short int REPEAT29 = 29;
    sbit  REPEAT29_bit at ADC_DELAY.B29;
    const register unsigned short int REPEAT30 = 30;
    sbit  REPEAT30_bit at ADC_DELAY.B30;
    const register unsigned short int REPEAT31 = 31;
    sbit  REPEAT31_bit at ADC_DELAY.B31;

sfr far unsigned long   volatile ADC_STATUS           absolute 0x40007C08;
    const register unsigned short int CH0 = 0;
    sbit  CH0_bit at ADC_STATUS.B0;
    const register unsigned short int CH1 = 1;
    sbit  CH1_bit at ADC_STATUS.B1;
    const register unsigned short int CH2 = 2;
    sbit  CH2_bit at ADC_STATUS.B2;
    const register unsigned short int CH3 = 3;
    sbit  CH3_bit at ADC_STATUS.B3;
    const register unsigned short int CH4 = 4;
    sbit  CH4_bit at ADC_STATUS.B4;

sfr far unsigned long   volatile ADC_SINGLE_EN        absolute 0x40007C0C;
    sbit  CH0_ADC_SINGLE_EN_bit at ADC_SINGLE_EN.B0;
    sbit  CH1_ADC_SINGLE_EN_bit at ADC_SINGLE_EN.B1;
    sbit  CH2_ADC_SINGLE_EN_bit at ADC_SINGLE_EN.B2;
    sbit  CH3_ADC_SINGLE_EN_bit at ADC_SINGLE_EN.B3;
    sbit  CH4_ADC_SINGLE_EN_bit at ADC_SINGLE_EN.B4;

sfr far unsigned long   volatile ADC_REPEAT           absolute 0x40007C10;
    sbit  CH0_ADC_REPEAT_bit at ADC_REPEAT.B0;
    sbit  CH1_ADC_REPEAT_bit at ADC_REPEAT.B1;
    sbit  CH2_ADC_REPEAT_bit at ADC_REPEAT.B2;
    sbit  CH3_ADC_REPEAT_bit at ADC_REPEAT.B3;
    sbit  CH4_ADC_REPEAT_bit at ADC_REPEAT.B4;

sfr far unsigned long   volatile ADC_READ0            absolute 0x40007C14;
sfr far unsigned long   volatile ADC_READ1            absolute 0x40007C18;
sfr far unsigned long   volatile ADC_READ2            absolute 0x40007C1C;
sfr far unsigned long   volatile ADC_READ3            absolute 0x40007C20;
sfr far unsigned long   volatile ADC_READ4            absolute 0x40007C24;
sfr far unsigned short   volatile EC_REG_BANK_AHB_ERROR_CONTROL absolute 0x4000FC14;
sfr far unsigned long   volatile EC_REG_BANK_INTERRUPT_CONTROL absolute 0x4000FC18;
sfr far unsigned long   volatile EC_REG_BANK_ETM_TRACE_ENABLE absolute 0x4000FC1C;
sfr far unsigned long   volatile EC_REG_BANK_JTAG_Enable absolute 0x4000FC20;
sfr far unsigned long   volatile EC_REG_BANK_WDT_EVENT_COUNT absolute 0x4000FC28;
sfr far unsigned long   volatile EC_REG_BANK_ADC_VREF_PD absolute 0x4000FC38;
sfr far unsigned long   volatile JTAG_MESSAGE_OBF     absolute 0x40080000;
sfr far unsigned long   volatile JTAG_MESSAGE_IBF     absolute 0x40080004;
sfr far unsigned short   volatile JTAG_OBF_STATUS      absolute 0x40080008;
sfr far unsigned short   volatile JTAG_IBF_STATUS      absolute 0x40080009;
sfr far unsigned long   volatile JTAG_DBG_CTRL        absolute 0x4008000C;
sfr far unsigned long   volatile NVIC_ICTR            absolute 0xE000E004;
    const register unsigned short int INTLINESNUM0 = 0;
    sbit  INTLINESNUM0_bit at NVIC_ICTR.B0;
    const register unsigned short int INTLINESNUM1 = 1;
    sbit  INTLINESNUM1_bit at NVIC_ICTR.B1;
    const register unsigned short int INTLINESNUM2 = 2;
    sbit  INTLINESNUM2_bit at NVIC_ICTR.B2;
    const register unsigned short int INTLINESNUM3 = 3;
    sbit  INTLINESNUM3_bit at NVIC_ICTR.B3;

sfr far unsigned long   volatile NVIC_ACTLR           absolute 0xE000E008;
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
    const register unsigned short int SETENA = 31;
    sbit  SETENA_bit at NVIC_ISER2.B31;

sfr far unsigned long   volatile NVIC_ISER3           absolute 0xE000E10C;
    sbit  SETENA_NVIC_ISER3_bit at NVIC_ISER3.B31;

sfr far unsigned long   volatile NVIC_ISER4           absolute 0xE000E110;
    sbit  SETENA_NVIC_ISER4_bit at NVIC_ISER4.B31;

sfr far unsigned long   volatile NVIC_ISER5           absolute 0xE000E114;
    sbit  SETENA_NVIC_ISER5_bit at NVIC_ISER5.B31;

sfr far unsigned long   volatile NVIC_ISER6           absolute 0xE000E118;
    sbit  SETENA_NVIC_ISER6_bit at NVIC_ISER6.B31;

sfr far unsigned long   volatile NVIC_ISER7           absolute 0xE000E11C;
    sbit  SETENA_NVIC_ISER7_bit at NVIC_ISER7.B31;

sfr far unsigned long   volatile NVIC_ICER0           absolute 0xE000E180;
    const register unsigned short int CLRENA = 31;
    sbit  CLRENA_bit at NVIC_ICER0.B31;

sfr far unsigned long   volatile NVIC_ICER1           absolute 0xE000E184;
    sbit  CLRENA_NVIC_ICER1_bit at NVIC_ICER1.B31;

sfr far unsigned long   volatile NVIC_ICER2           absolute 0xE000E188;
    sbit  CLRENA_NVIC_ICER2_bit at NVIC_ICER2.B31;

sfr far unsigned long   volatile NVIC_ICER3           absolute 0xE000E18C;
    sbit  CLRENA_NVIC_ICER3_bit at NVIC_ICER3.B31;

sfr far unsigned long   volatile NVIC_ICER4           absolute 0xE000E190;
    sbit  CLRENA_NVIC_ICER4_bit at NVIC_ICER4.B31;

sfr far unsigned long   volatile NVIC_ICER5           absolute 0xE000E194;
    sbit  CLRENA_NVIC_ICER5_bit at NVIC_ICER5.B31;

sfr far unsigned long   volatile NVIC_ICER6           absolute 0xE000E198;
    sbit  CLRENA_NVIC_ICER6_bit at NVIC_ICER6.B31;

sfr far unsigned long   volatile NVIC_ICER7           absolute 0xE000E19C;
    sbit  CLRENA_NVIC_ICER7_bit at NVIC_ICER7.B31;

sfr far unsigned long   volatile NVIC_ISPR0           absolute 0xE000E200;
    const register unsigned short int SETPEND = 31;
    sbit  SETPEND_bit at NVIC_ISPR0.B31;

sfr far unsigned long   volatile NVIC_ISPR1           absolute 0xE000E204;
    sbit  SETPEND_NVIC_ISPR1_bit at NVIC_ISPR1.B31;

sfr far unsigned long   volatile NVIC_ISPR2           absolute 0xE000E208;
    sbit  SETPEND_NVIC_ISPR2_bit at NVIC_ISPR2.B31;

sfr far unsigned long   volatile NVIC_ISPR3           absolute 0xE000E20C;
    sbit  SETPEND_NVIC_ISPR3_bit at NVIC_ISPR3.B31;

sfr far unsigned long   volatile NVIC_ISPR4           absolute 0xE000E210;
    sbit  SETPEND_NVIC_ISPR4_bit at NVIC_ISPR4.B31;

sfr far unsigned long   volatile NVIC_ISPR5           absolute 0xE000E214;
    sbit  SETPEND_NVIC_ISPR5_bit at NVIC_ISPR5.B31;

sfr far unsigned long   volatile NVIC_ISPR6           absolute 0xE000E218;
    sbit  SETPEND_NVIC_ISPR6_bit at NVIC_ISPR6.B31;

sfr far unsigned long   volatile NVIC_ISPR7           absolute 0xE000E21C;
    sbit  SETPEND_NVIC_ISPR7_bit at NVIC_ISPR7.B31;

sfr far unsigned long   volatile NVIC_ICPR0           absolute 0xE000E280;
    const register unsigned short int CLRPEND = 31;
    sbit  CLRPEND_bit at NVIC_ICPR0.B31;

sfr far unsigned long   volatile NVIC_ICPR1           absolute 0xE000E284;
    sbit  CLRPEND_NVIC_ICPR1_bit at NVIC_ICPR1.B31;

sfr far unsigned long   volatile NVIC_ICPR2           absolute 0xE000E288;
    sbit  CLRPEND_NVIC_ICPR2_bit at NVIC_ICPR2.B31;

sfr far unsigned long   volatile NVIC_ICPR3           absolute 0xE000E28C;
    sbit  CLRPEND_NVIC_ICPR3_bit at NVIC_ICPR3.B31;

sfr far unsigned long   volatile NVIC_ICPR4           absolute 0xE000E290;
    sbit  CLRPEND_NVIC_ICPR4_bit at NVIC_ICPR4.B31;

sfr far unsigned long   volatile NVIC_ICPR5           absolute 0xE000E294;
    sbit  CLRPEND_NVIC_ICPR5_bit at NVIC_ICPR5.B31;

sfr far unsigned long   volatile NVIC_ICPR6           absolute 0xE000E298;
    sbit  CLRPEND_NVIC_ICPR6_bit at NVIC_ICPR6.B31;

sfr far unsigned long   volatile NVIC_ICPR7           absolute 0xE000E29C;
    sbit  CLRPEND_NVIC_ICPR7_bit at NVIC_ICPR7.B31;

sfr far unsigned long   volatile NVIC_IABR0           absolute 0xE000E300;
    sbit  ACTIVE_NVIC_IABR0_bit at NVIC_IABR0.B31;

sfr far unsigned long   volatile NVIC_IABR1           absolute 0xE000E304;
    sbit  ACTIVE_NVIC_IABR1_bit at NVIC_IABR1.B31;

sfr far unsigned long   volatile NVIC_IABR2           absolute 0xE000E308;
    sbit  ACTIVE_NVIC_IABR2_bit at NVIC_IABR2.B31;

sfr far unsigned long   volatile NVIC_IABR3           absolute 0xE000E30C;
    sbit  ACTIVE_NVIC_IABR3_bit at NVIC_IABR3.B31;

sfr far unsigned long   volatile NVIC_IABR4           absolute 0xE000E30C;
    sbit  ACTIVE_NVIC_IABR4_bit at NVIC_IABR4.B31;

sfr far unsigned long   volatile NVIC_IABR5           absolute 0xE000E310;
    sbit  ACTIVE_NVIC_IABR5_bit at NVIC_IABR5.B31;

sfr far unsigned long   volatile NVIC_IABR6           absolute 0xE000E314;
    sbit  ACTIVE_NVIC_IABR6_bit at NVIC_IABR6.B31;

sfr far unsigned long   volatile NVIC_IABR7           absolute 0xE000E318;
    sbit  ACTIVE_NVIC_IABR7_bit at NVIC_IABR7.B31;

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
    const register unsigned short int IPR_N18 = 8;
    sbit  IPR_N18_bit at NVIC_IPR0.B8;
    const register unsigned short int IPR_N19 = 9;
    sbit  IPR_N19_bit at NVIC_IPR0.B9;
    const register unsigned short int IPR_N110 = 10;
    sbit  IPR_N110_bit at NVIC_IPR0.B10;
    const register unsigned short int IPR_N111 = 11;
    sbit  IPR_N111_bit at NVIC_IPR0.B11;
    const register unsigned short int IPR_N112 = 12;
    sbit  IPR_N112_bit at NVIC_IPR0.B12;
    const register unsigned short int IPR_N113 = 13;
    sbit  IPR_N113_bit at NVIC_IPR0.B13;
    const register unsigned short int IPR_N114 = 14;
    sbit  IPR_N114_bit at NVIC_IPR0.B14;
    const register unsigned short int IPR_N115 = 15;
    sbit  IPR_N115_bit at NVIC_IPR0.B15;
    const register unsigned short int IPR_N216 = 16;
    sbit  IPR_N216_bit at NVIC_IPR0.B16;
    const register unsigned short int IPR_N217 = 17;
    sbit  IPR_N217_bit at NVIC_IPR0.B17;
    const register unsigned short int IPR_N218 = 18;
    sbit  IPR_N218_bit at NVIC_IPR0.B18;
    const register unsigned short int IPR_N219 = 19;
    sbit  IPR_N219_bit at NVIC_IPR0.B19;
    const register unsigned short int IPR_N220 = 20;
    sbit  IPR_N220_bit at NVIC_IPR0.B20;
    const register unsigned short int IPR_N221 = 21;
    sbit  IPR_N221_bit at NVIC_IPR0.B21;
    const register unsigned short int IPR_N222 = 22;
    sbit  IPR_N222_bit at NVIC_IPR0.B22;
    const register unsigned short int IPR_N223 = 23;
    sbit  IPR_N223_bit at NVIC_IPR0.B23;
    const register unsigned short int IPR_N324 = 24;
    sbit  IPR_N324_bit at NVIC_IPR0.B24;
    const register unsigned short int IPR_N325 = 25;
    sbit  IPR_N325_bit at NVIC_IPR0.B25;
    const register unsigned short int IPR_N326 = 26;
    sbit  IPR_N326_bit at NVIC_IPR0.B26;
    const register unsigned short int IPR_N327 = 27;
    sbit  IPR_N327_bit at NVIC_IPR0.B27;
    const register unsigned short int IPR_N328 = 28;
    sbit  IPR_N328_bit at NVIC_IPR0.B28;
    const register unsigned short int IPR_N329 = 29;
    sbit  IPR_N329_bit at NVIC_IPR0.B29;
    const register unsigned short int IPR_N330 = 30;
    sbit  IPR_N330_bit at NVIC_IPR0.B30;
    const register unsigned short int IPR_N331 = 31;
    sbit  IPR_N331_bit at NVIC_IPR0.B31;

sfr far unsigned long   volatile NVIC_IPR1            absolute 0xE000E404;
    sbit  IPR_N00_NVIC_IPR1_bit at NVIC_IPR1.B0;
    sbit  IPR_N01_NVIC_IPR1_bit at NVIC_IPR1.B1;
    sbit  IPR_N02_NVIC_IPR1_bit at NVIC_IPR1.B2;
    sbit  IPR_N03_NVIC_IPR1_bit at NVIC_IPR1.B3;
    sbit  IPR_N04_NVIC_IPR1_bit at NVIC_IPR1.B4;
    sbit  IPR_N05_NVIC_IPR1_bit at NVIC_IPR1.B5;
    sbit  IPR_N06_NVIC_IPR1_bit at NVIC_IPR1.B6;
    sbit  IPR_N07_NVIC_IPR1_bit at NVIC_IPR1.B7;
    sbit  IPR_N18_NVIC_IPR1_bit at NVIC_IPR1.B8;
    sbit  IPR_N19_NVIC_IPR1_bit at NVIC_IPR1.B9;
    sbit  IPR_N110_NVIC_IPR1_bit at NVIC_IPR1.B10;
    sbit  IPR_N111_NVIC_IPR1_bit at NVIC_IPR1.B11;
    sbit  IPR_N112_NVIC_IPR1_bit at NVIC_IPR1.B12;
    sbit  IPR_N113_NVIC_IPR1_bit at NVIC_IPR1.B13;
    sbit  IPR_N114_NVIC_IPR1_bit at NVIC_IPR1.B14;
    sbit  IPR_N115_NVIC_IPR1_bit at NVIC_IPR1.B15;
    sbit  IPR_N216_NVIC_IPR1_bit at NVIC_IPR1.B16;
    sbit  IPR_N217_NVIC_IPR1_bit at NVIC_IPR1.B17;
    sbit  IPR_N218_NVIC_IPR1_bit at NVIC_IPR1.B18;
    sbit  IPR_N219_NVIC_IPR1_bit at NVIC_IPR1.B19;
    sbit  IPR_N220_NVIC_IPR1_bit at NVIC_IPR1.B20;
    sbit  IPR_N221_NVIC_IPR1_bit at NVIC_IPR1.B21;
    sbit  IPR_N222_NVIC_IPR1_bit at NVIC_IPR1.B22;
    sbit  IPR_N223_NVIC_IPR1_bit at NVIC_IPR1.B23;
    sbit  IPR_N324_NVIC_IPR1_bit at NVIC_IPR1.B24;
    sbit  IPR_N325_NVIC_IPR1_bit at NVIC_IPR1.B25;
    sbit  IPR_N326_NVIC_IPR1_bit at NVIC_IPR1.B26;
    sbit  IPR_N327_NVIC_IPR1_bit at NVIC_IPR1.B27;
    sbit  IPR_N328_NVIC_IPR1_bit at NVIC_IPR1.B28;
    sbit  IPR_N329_NVIC_IPR1_bit at NVIC_IPR1.B29;
    sbit  IPR_N330_NVIC_IPR1_bit at NVIC_IPR1.B30;
    sbit  IPR_N331_NVIC_IPR1_bit at NVIC_IPR1.B31;

sfr far unsigned long   volatile NVIC_IPR2            absolute 0xE000E408;
    sbit  IPR_N00_NVIC_IPR2_bit at NVIC_IPR2.B0;
    sbit  IPR_N01_NVIC_IPR2_bit at NVIC_IPR2.B1;
    sbit  IPR_N02_NVIC_IPR2_bit at NVIC_IPR2.B2;
    sbit  IPR_N03_NVIC_IPR2_bit at NVIC_IPR2.B3;
    sbit  IPR_N04_NVIC_IPR2_bit at NVIC_IPR2.B4;
    sbit  IPR_N05_NVIC_IPR2_bit at NVIC_IPR2.B5;
    sbit  IPR_N06_NVIC_IPR2_bit at NVIC_IPR2.B6;
    sbit  IPR_N07_NVIC_IPR2_bit at NVIC_IPR2.B7;
    sbit  IPR_N18_NVIC_IPR2_bit at NVIC_IPR2.B8;
    sbit  IPR_N19_NVIC_IPR2_bit at NVIC_IPR2.B9;
    sbit  IPR_N110_NVIC_IPR2_bit at NVIC_IPR2.B10;
    sbit  IPR_N111_NVIC_IPR2_bit at NVIC_IPR2.B11;
    sbit  IPR_N112_NVIC_IPR2_bit at NVIC_IPR2.B12;
    sbit  IPR_N113_NVIC_IPR2_bit at NVIC_IPR2.B13;
    sbit  IPR_N114_NVIC_IPR2_bit at NVIC_IPR2.B14;
    sbit  IPR_N115_NVIC_IPR2_bit at NVIC_IPR2.B15;
    sbit  IPR_N216_NVIC_IPR2_bit at NVIC_IPR2.B16;
    sbit  IPR_N217_NVIC_IPR2_bit at NVIC_IPR2.B17;
    sbit  IPR_N218_NVIC_IPR2_bit at NVIC_IPR2.B18;
    sbit  IPR_N219_NVIC_IPR2_bit at NVIC_IPR2.B19;
    sbit  IPR_N220_NVIC_IPR2_bit at NVIC_IPR2.B20;
    sbit  IPR_N221_NVIC_IPR2_bit at NVIC_IPR2.B21;
    sbit  IPR_N222_NVIC_IPR2_bit at NVIC_IPR2.B22;
    sbit  IPR_N223_NVIC_IPR2_bit at NVIC_IPR2.B23;
    sbit  IPR_N324_NVIC_IPR2_bit at NVIC_IPR2.B24;
    sbit  IPR_N325_NVIC_IPR2_bit at NVIC_IPR2.B25;
    sbit  IPR_N326_NVIC_IPR2_bit at NVIC_IPR2.B26;
    sbit  IPR_N327_NVIC_IPR2_bit at NVIC_IPR2.B27;
    sbit  IPR_N328_NVIC_IPR2_bit at NVIC_IPR2.B28;
    sbit  IPR_N329_NVIC_IPR2_bit at NVIC_IPR2.B29;
    sbit  IPR_N330_NVIC_IPR2_bit at NVIC_IPR2.B30;
    sbit  IPR_N331_NVIC_IPR2_bit at NVIC_IPR2.B31;

sfr far unsigned long   volatile NVIC_IPR3            absolute 0xE000E40C;
    sbit  IPR_N00_NVIC_IPR3_bit at NVIC_IPR3.B0;
    sbit  IPR_N01_NVIC_IPR3_bit at NVIC_IPR3.B1;
    sbit  IPR_N02_NVIC_IPR3_bit at NVIC_IPR3.B2;
    sbit  IPR_N03_NVIC_IPR3_bit at NVIC_IPR3.B3;
    sbit  IPR_N04_NVIC_IPR3_bit at NVIC_IPR3.B4;
    sbit  IPR_N05_NVIC_IPR3_bit at NVIC_IPR3.B5;
    sbit  IPR_N06_NVIC_IPR3_bit at NVIC_IPR3.B6;
    sbit  IPR_N07_NVIC_IPR3_bit at NVIC_IPR3.B7;
    sbit  IPR_N18_NVIC_IPR3_bit at NVIC_IPR3.B8;
    sbit  IPR_N19_NVIC_IPR3_bit at NVIC_IPR3.B9;
    sbit  IPR_N110_NVIC_IPR3_bit at NVIC_IPR3.B10;
    sbit  IPR_N111_NVIC_IPR3_bit at NVIC_IPR3.B11;
    sbit  IPR_N112_NVIC_IPR3_bit at NVIC_IPR3.B12;
    sbit  IPR_N113_NVIC_IPR3_bit at NVIC_IPR3.B13;
    sbit  IPR_N114_NVIC_IPR3_bit at NVIC_IPR3.B14;
    sbit  IPR_N115_NVIC_IPR3_bit at NVIC_IPR3.B15;
    sbit  IPR_N216_NVIC_IPR3_bit at NVIC_IPR3.B16;
    sbit  IPR_N217_NVIC_IPR3_bit at NVIC_IPR3.B17;
    sbit  IPR_N218_NVIC_IPR3_bit at NVIC_IPR3.B18;
    sbit  IPR_N219_NVIC_IPR3_bit at NVIC_IPR3.B19;
    sbit  IPR_N220_NVIC_IPR3_bit at NVIC_IPR3.B20;
    sbit  IPR_N221_NVIC_IPR3_bit at NVIC_IPR3.B21;
    sbit  IPR_N222_NVIC_IPR3_bit at NVIC_IPR3.B22;
    sbit  IPR_N223_NVIC_IPR3_bit at NVIC_IPR3.B23;
    sbit  IPR_N324_NVIC_IPR3_bit at NVIC_IPR3.B24;
    sbit  IPR_N325_NVIC_IPR3_bit at NVIC_IPR3.B25;
    sbit  IPR_N326_NVIC_IPR3_bit at NVIC_IPR3.B26;
    sbit  IPR_N327_NVIC_IPR3_bit at NVIC_IPR3.B27;
    sbit  IPR_N328_NVIC_IPR3_bit at NVIC_IPR3.B28;
    sbit  IPR_N329_NVIC_IPR3_bit at NVIC_IPR3.B29;
    sbit  IPR_N330_NVIC_IPR3_bit at NVIC_IPR3.B30;
    sbit  IPR_N331_NVIC_IPR3_bit at NVIC_IPR3.B31;

sfr far unsigned long   volatile NVIC_IPR4            absolute 0xE000E410;
    sbit  IPR_N00_NVIC_IPR4_bit at NVIC_IPR4.B0;
    sbit  IPR_N01_NVIC_IPR4_bit at NVIC_IPR4.B1;
    sbit  IPR_N02_NVIC_IPR4_bit at NVIC_IPR4.B2;
    sbit  IPR_N03_NVIC_IPR4_bit at NVIC_IPR4.B3;
    sbit  IPR_N04_NVIC_IPR4_bit at NVIC_IPR4.B4;
    sbit  IPR_N05_NVIC_IPR4_bit at NVIC_IPR4.B5;
    sbit  IPR_N06_NVIC_IPR4_bit at NVIC_IPR4.B6;
    sbit  IPR_N07_NVIC_IPR4_bit at NVIC_IPR4.B7;
    sbit  IPR_N18_NVIC_IPR4_bit at NVIC_IPR4.B8;
    sbit  IPR_N19_NVIC_IPR4_bit at NVIC_IPR4.B9;
    sbit  IPR_N110_NVIC_IPR4_bit at NVIC_IPR4.B10;
    sbit  IPR_N111_NVIC_IPR4_bit at NVIC_IPR4.B11;
    sbit  IPR_N112_NVIC_IPR4_bit at NVIC_IPR4.B12;
    sbit  IPR_N113_NVIC_IPR4_bit at NVIC_IPR4.B13;
    sbit  IPR_N114_NVIC_IPR4_bit at NVIC_IPR4.B14;
    sbit  IPR_N115_NVIC_IPR4_bit at NVIC_IPR4.B15;
    sbit  IPR_N216_NVIC_IPR4_bit at NVIC_IPR4.B16;
    sbit  IPR_N217_NVIC_IPR4_bit at NVIC_IPR4.B17;
    sbit  IPR_N218_NVIC_IPR4_bit at NVIC_IPR4.B18;
    sbit  IPR_N219_NVIC_IPR4_bit at NVIC_IPR4.B19;
    sbit  IPR_N220_NVIC_IPR4_bit at NVIC_IPR4.B20;
    sbit  IPR_N221_NVIC_IPR4_bit at NVIC_IPR4.B21;
    sbit  IPR_N222_NVIC_IPR4_bit at NVIC_IPR4.B22;
    sbit  IPR_N223_NVIC_IPR4_bit at NVIC_IPR4.B23;
    sbit  IPR_N324_NVIC_IPR4_bit at NVIC_IPR4.B24;
    sbit  IPR_N325_NVIC_IPR4_bit at NVIC_IPR4.B25;
    sbit  IPR_N326_NVIC_IPR4_bit at NVIC_IPR4.B26;
    sbit  IPR_N327_NVIC_IPR4_bit at NVIC_IPR4.B27;
    sbit  IPR_N328_NVIC_IPR4_bit at NVIC_IPR4.B28;
    sbit  IPR_N329_NVIC_IPR4_bit at NVIC_IPR4.B29;
    sbit  IPR_N330_NVIC_IPR4_bit at NVIC_IPR4.B30;
    sbit  IPR_N331_NVIC_IPR4_bit at NVIC_IPR4.B31;

sfr far unsigned long   volatile NVIC_IPR5            absolute 0xE000E414;
    sbit  IPR_N00_NVIC_IPR5_bit at NVIC_IPR5.B0;
    sbit  IPR_N01_NVIC_IPR5_bit at NVIC_IPR5.B1;
    sbit  IPR_N02_NVIC_IPR5_bit at NVIC_IPR5.B2;
    sbit  IPR_N03_NVIC_IPR5_bit at NVIC_IPR5.B3;
    sbit  IPR_N04_NVIC_IPR5_bit at NVIC_IPR5.B4;
    sbit  IPR_N05_NVIC_IPR5_bit at NVIC_IPR5.B5;
    sbit  IPR_N06_NVIC_IPR5_bit at NVIC_IPR5.B6;
    sbit  IPR_N07_NVIC_IPR5_bit at NVIC_IPR5.B7;
    sbit  IPR_N18_NVIC_IPR5_bit at NVIC_IPR5.B8;
    sbit  IPR_N19_NVIC_IPR5_bit at NVIC_IPR5.B9;
    sbit  IPR_N110_NVIC_IPR5_bit at NVIC_IPR5.B10;
    sbit  IPR_N111_NVIC_IPR5_bit at NVIC_IPR5.B11;
    sbit  IPR_N112_NVIC_IPR5_bit at NVIC_IPR5.B12;
    sbit  IPR_N113_NVIC_IPR5_bit at NVIC_IPR5.B13;
    sbit  IPR_N114_NVIC_IPR5_bit at NVIC_IPR5.B14;
    sbit  IPR_N115_NVIC_IPR5_bit at NVIC_IPR5.B15;
    sbit  IPR_N216_NVIC_IPR5_bit at NVIC_IPR5.B16;
    sbit  IPR_N217_NVIC_IPR5_bit at NVIC_IPR5.B17;
    sbit  IPR_N218_NVIC_IPR5_bit at NVIC_IPR5.B18;
    sbit  IPR_N219_NVIC_IPR5_bit at NVIC_IPR5.B19;
    sbit  IPR_N220_NVIC_IPR5_bit at NVIC_IPR5.B20;
    sbit  IPR_N221_NVIC_IPR5_bit at NVIC_IPR5.B21;
    sbit  IPR_N222_NVIC_IPR5_bit at NVIC_IPR5.B22;
    sbit  IPR_N223_NVIC_IPR5_bit at NVIC_IPR5.B23;
    sbit  IPR_N324_NVIC_IPR5_bit at NVIC_IPR5.B24;
    sbit  IPR_N325_NVIC_IPR5_bit at NVIC_IPR5.B25;
    sbit  IPR_N326_NVIC_IPR5_bit at NVIC_IPR5.B26;
    sbit  IPR_N327_NVIC_IPR5_bit at NVIC_IPR5.B27;
    sbit  IPR_N328_NVIC_IPR5_bit at NVIC_IPR5.B28;
    sbit  IPR_N329_NVIC_IPR5_bit at NVIC_IPR5.B29;
    sbit  IPR_N330_NVIC_IPR5_bit at NVIC_IPR5.B30;
    sbit  IPR_N331_NVIC_IPR5_bit at NVIC_IPR5.B31;

sfr far unsigned long   volatile NVIC_IPR6            absolute 0xE000E418;
    sbit  IPR_N00_NVIC_IPR6_bit at NVIC_IPR6.B0;
    sbit  IPR_N01_NVIC_IPR6_bit at NVIC_IPR6.B1;
    sbit  IPR_N02_NVIC_IPR6_bit at NVIC_IPR6.B2;
    sbit  IPR_N03_NVIC_IPR6_bit at NVIC_IPR6.B3;
    sbit  IPR_N04_NVIC_IPR6_bit at NVIC_IPR6.B4;
    sbit  IPR_N05_NVIC_IPR6_bit at NVIC_IPR6.B5;
    sbit  IPR_N06_NVIC_IPR6_bit at NVIC_IPR6.B6;
    sbit  IPR_N07_NVIC_IPR6_bit at NVIC_IPR6.B7;
    sbit  IPR_N18_NVIC_IPR6_bit at NVIC_IPR6.B8;
    sbit  IPR_N19_NVIC_IPR6_bit at NVIC_IPR6.B9;
    sbit  IPR_N110_NVIC_IPR6_bit at NVIC_IPR6.B10;
    sbit  IPR_N111_NVIC_IPR6_bit at NVIC_IPR6.B11;
    sbit  IPR_N112_NVIC_IPR6_bit at NVIC_IPR6.B12;
    sbit  IPR_N113_NVIC_IPR6_bit at NVIC_IPR6.B13;
    sbit  IPR_N114_NVIC_IPR6_bit at NVIC_IPR6.B14;
    sbit  IPR_N115_NVIC_IPR6_bit at NVIC_IPR6.B15;
    sbit  IPR_N216_NVIC_IPR6_bit at NVIC_IPR6.B16;
    sbit  IPR_N217_NVIC_IPR6_bit at NVIC_IPR6.B17;
    sbit  IPR_N218_NVIC_IPR6_bit at NVIC_IPR6.B18;
    sbit  IPR_N219_NVIC_IPR6_bit at NVIC_IPR6.B19;
    sbit  IPR_N220_NVIC_IPR6_bit at NVIC_IPR6.B20;
    sbit  IPR_N221_NVIC_IPR6_bit at NVIC_IPR6.B21;
    sbit  IPR_N222_NVIC_IPR6_bit at NVIC_IPR6.B22;
    sbit  IPR_N223_NVIC_IPR6_bit at NVIC_IPR6.B23;
    sbit  IPR_N324_NVIC_IPR6_bit at NVIC_IPR6.B24;
    sbit  IPR_N325_NVIC_IPR6_bit at NVIC_IPR6.B25;
    sbit  IPR_N326_NVIC_IPR6_bit at NVIC_IPR6.B26;
    sbit  IPR_N327_NVIC_IPR6_bit at NVIC_IPR6.B27;
    sbit  IPR_N328_NVIC_IPR6_bit at NVIC_IPR6.B28;
    sbit  IPR_N329_NVIC_IPR6_bit at NVIC_IPR6.B29;
    sbit  IPR_N330_NVIC_IPR6_bit at NVIC_IPR6.B30;
    sbit  IPR_N331_NVIC_IPR6_bit at NVIC_IPR6.B31;

sfr far unsigned long   volatile NVIC_IPR7            absolute 0xE000E41C;
    sbit  IPR_N00_NVIC_IPR7_bit at NVIC_IPR7.B0;
    sbit  IPR_N01_NVIC_IPR7_bit at NVIC_IPR7.B1;
    sbit  IPR_N02_NVIC_IPR7_bit at NVIC_IPR7.B2;
    sbit  IPR_N03_NVIC_IPR7_bit at NVIC_IPR7.B3;
    sbit  IPR_N04_NVIC_IPR7_bit at NVIC_IPR7.B4;
    sbit  IPR_N05_NVIC_IPR7_bit at NVIC_IPR7.B5;
    sbit  IPR_N06_NVIC_IPR7_bit at NVIC_IPR7.B6;
    sbit  IPR_N07_NVIC_IPR7_bit at NVIC_IPR7.B7;
    sbit  IPR_N18_NVIC_IPR7_bit at NVIC_IPR7.B8;
    sbit  IPR_N19_NVIC_IPR7_bit at NVIC_IPR7.B9;
    sbit  IPR_N110_NVIC_IPR7_bit at NVIC_IPR7.B10;
    sbit  IPR_N111_NVIC_IPR7_bit at NVIC_IPR7.B11;
    sbit  IPR_N112_NVIC_IPR7_bit at NVIC_IPR7.B12;
    sbit  IPR_N113_NVIC_IPR7_bit at NVIC_IPR7.B13;
    sbit  IPR_N114_NVIC_IPR7_bit at NVIC_IPR7.B14;
    sbit  IPR_N115_NVIC_IPR7_bit at NVIC_IPR7.B15;
    sbit  IPR_N216_NVIC_IPR7_bit at NVIC_IPR7.B16;
    sbit  IPR_N217_NVIC_IPR7_bit at NVIC_IPR7.B17;
    sbit  IPR_N218_NVIC_IPR7_bit at NVIC_IPR7.B18;
    sbit  IPR_N219_NVIC_IPR7_bit at NVIC_IPR7.B19;
    sbit  IPR_N220_NVIC_IPR7_bit at NVIC_IPR7.B20;
    sbit  IPR_N221_NVIC_IPR7_bit at NVIC_IPR7.B21;
    sbit  IPR_N222_NVIC_IPR7_bit at NVIC_IPR7.B22;
    sbit  IPR_N223_NVIC_IPR7_bit at NVIC_IPR7.B23;
    sbit  IPR_N324_NVIC_IPR7_bit at NVIC_IPR7.B24;
    sbit  IPR_N325_NVIC_IPR7_bit at NVIC_IPR7.B25;
    sbit  IPR_N326_NVIC_IPR7_bit at NVIC_IPR7.B26;
    sbit  IPR_N327_NVIC_IPR7_bit at NVIC_IPR7.B27;
    sbit  IPR_N328_NVIC_IPR7_bit at NVIC_IPR7.B28;
    sbit  IPR_N329_NVIC_IPR7_bit at NVIC_IPR7.B29;
    sbit  IPR_N330_NVIC_IPR7_bit at NVIC_IPR7.B30;
    sbit  IPR_N331_NVIC_IPR7_bit at NVIC_IPR7.B31;

sfr far unsigned long   volatile NVIC_IPR8            absolute 0xE000E420;
    sbit  IPR_N00_NVIC_IPR8_bit at NVIC_IPR8.B0;
    sbit  IPR_N01_NVIC_IPR8_bit at NVIC_IPR8.B1;
    sbit  IPR_N02_NVIC_IPR8_bit at NVIC_IPR8.B2;
    sbit  IPR_N03_NVIC_IPR8_bit at NVIC_IPR8.B3;
    sbit  IPR_N04_NVIC_IPR8_bit at NVIC_IPR8.B4;
    sbit  IPR_N05_NVIC_IPR8_bit at NVIC_IPR8.B5;
    sbit  IPR_N06_NVIC_IPR8_bit at NVIC_IPR8.B6;
    sbit  IPR_N07_NVIC_IPR8_bit at NVIC_IPR8.B7;
    sbit  IPR_N18_NVIC_IPR8_bit at NVIC_IPR8.B8;
    sbit  IPR_N19_NVIC_IPR8_bit at NVIC_IPR8.B9;
    sbit  IPR_N110_NVIC_IPR8_bit at NVIC_IPR8.B10;
    sbit  IPR_N111_NVIC_IPR8_bit at NVIC_IPR8.B11;
    sbit  IPR_N112_NVIC_IPR8_bit at NVIC_IPR8.B12;
    sbit  IPR_N113_NVIC_IPR8_bit at NVIC_IPR8.B13;
    sbit  IPR_N114_NVIC_IPR8_bit at NVIC_IPR8.B14;
    sbit  IPR_N115_NVIC_IPR8_bit at NVIC_IPR8.B15;
    sbit  IPR_N216_NVIC_IPR8_bit at NVIC_IPR8.B16;
    sbit  IPR_N217_NVIC_IPR8_bit at NVIC_IPR8.B17;
    sbit  IPR_N218_NVIC_IPR8_bit at NVIC_IPR8.B18;
    sbit  IPR_N219_NVIC_IPR8_bit at NVIC_IPR8.B19;
    sbit  IPR_N220_NVIC_IPR8_bit at NVIC_IPR8.B20;
    sbit  IPR_N221_NVIC_IPR8_bit at NVIC_IPR8.B21;
    sbit  IPR_N222_NVIC_IPR8_bit at NVIC_IPR8.B22;
    sbit  IPR_N223_NVIC_IPR8_bit at NVIC_IPR8.B23;
    sbit  IPR_N324_NVIC_IPR8_bit at NVIC_IPR8.B24;
    sbit  IPR_N325_NVIC_IPR8_bit at NVIC_IPR8.B25;
    sbit  IPR_N326_NVIC_IPR8_bit at NVIC_IPR8.B26;
    sbit  IPR_N327_NVIC_IPR8_bit at NVIC_IPR8.B27;
    sbit  IPR_N328_NVIC_IPR8_bit at NVIC_IPR8.B28;
    sbit  IPR_N329_NVIC_IPR8_bit at NVIC_IPR8.B29;
    sbit  IPR_N330_NVIC_IPR8_bit at NVIC_IPR8.B30;
    sbit  IPR_N331_NVIC_IPR8_bit at NVIC_IPR8.B31;

sfr far unsigned long   volatile NVIC_IPR9            absolute 0xE000E424;
    sbit  IPR_N00_NVIC_IPR9_bit at NVIC_IPR9.B0;
    sbit  IPR_N01_NVIC_IPR9_bit at NVIC_IPR9.B1;
    sbit  IPR_N02_NVIC_IPR9_bit at NVIC_IPR9.B2;
    sbit  IPR_N03_NVIC_IPR9_bit at NVIC_IPR9.B3;
    sbit  IPR_N04_NVIC_IPR9_bit at NVIC_IPR9.B4;
    sbit  IPR_N05_NVIC_IPR9_bit at NVIC_IPR9.B5;
    sbit  IPR_N06_NVIC_IPR9_bit at NVIC_IPR9.B6;
    sbit  IPR_N07_NVIC_IPR9_bit at NVIC_IPR9.B7;
    sbit  IPR_N18_NVIC_IPR9_bit at NVIC_IPR9.B8;
    sbit  IPR_N19_NVIC_IPR9_bit at NVIC_IPR9.B9;
    sbit  IPR_N110_NVIC_IPR9_bit at NVIC_IPR9.B10;
    sbit  IPR_N111_NVIC_IPR9_bit at NVIC_IPR9.B11;
    sbit  IPR_N112_NVIC_IPR9_bit at NVIC_IPR9.B12;
    sbit  IPR_N113_NVIC_IPR9_bit at NVIC_IPR9.B13;
    sbit  IPR_N114_NVIC_IPR9_bit at NVIC_IPR9.B14;
    sbit  IPR_N115_NVIC_IPR9_bit at NVIC_IPR9.B15;
    sbit  IPR_N216_NVIC_IPR9_bit at NVIC_IPR9.B16;
    sbit  IPR_N217_NVIC_IPR9_bit at NVIC_IPR9.B17;
    sbit  IPR_N218_NVIC_IPR9_bit at NVIC_IPR9.B18;
    sbit  IPR_N219_NVIC_IPR9_bit at NVIC_IPR9.B19;
    sbit  IPR_N220_NVIC_IPR9_bit at NVIC_IPR9.B20;
    sbit  IPR_N221_NVIC_IPR9_bit at NVIC_IPR9.B21;
    sbit  IPR_N222_NVIC_IPR9_bit at NVIC_IPR9.B22;
    sbit  IPR_N223_NVIC_IPR9_bit at NVIC_IPR9.B23;
    sbit  IPR_N324_NVIC_IPR9_bit at NVIC_IPR9.B24;
    sbit  IPR_N325_NVIC_IPR9_bit at NVIC_IPR9.B25;
    sbit  IPR_N326_NVIC_IPR9_bit at NVIC_IPR9.B26;
    sbit  IPR_N327_NVIC_IPR9_bit at NVIC_IPR9.B27;
    sbit  IPR_N328_NVIC_IPR9_bit at NVIC_IPR9.B28;
    sbit  IPR_N329_NVIC_IPR9_bit at NVIC_IPR9.B29;
    sbit  IPR_N330_NVIC_IPR9_bit at NVIC_IPR9.B30;
    sbit  IPR_N331_NVIC_IPR9_bit at NVIC_IPR9.B31;

sfr far unsigned long   volatile NVIC_IPR10           absolute 0xE000E428;
    sbit  IPR_N00_NVIC_IPR10_bit at NVIC_IPR10.B0;
    sbit  IPR_N01_NVIC_IPR10_bit at NVIC_IPR10.B1;
    sbit  IPR_N02_NVIC_IPR10_bit at NVIC_IPR10.B2;
    sbit  IPR_N03_NVIC_IPR10_bit at NVIC_IPR10.B3;
    sbit  IPR_N04_NVIC_IPR10_bit at NVIC_IPR10.B4;
    sbit  IPR_N05_NVIC_IPR10_bit at NVIC_IPR10.B5;
    sbit  IPR_N06_NVIC_IPR10_bit at NVIC_IPR10.B6;
    sbit  IPR_N07_NVIC_IPR10_bit at NVIC_IPR10.B7;
    sbit  IPR_N18_NVIC_IPR10_bit at NVIC_IPR10.B8;
    sbit  IPR_N19_NVIC_IPR10_bit at NVIC_IPR10.B9;
    sbit  IPR_N110_NVIC_IPR10_bit at NVIC_IPR10.B10;
    sbit  IPR_N111_NVIC_IPR10_bit at NVIC_IPR10.B11;
    sbit  IPR_N112_NVIC_IPR10_bit at NVIC_IPR10.B12;
    sbit  IPR_N113_NVIC_IPR10_bit at NVIC_IPR10.B13;
    sbit  IPR_N114_NVIC_IPR10_bit at NVIC_IPR10.B14;
    sbit  IPR_N115_NVIC_IPR10_bit at NVIC_IPR10.B15;
    sbit  IPR_N216_NVIC_IPR10_bit at NVIC_IPR10.B16;
    sbit  IPR_N217_NVIC_IPR10_bit at NVIC_IPR10.B17;
    sbit  IPR_N218_NVIC_IPR10_bit at NVIC_IPR10.B18;
    sbit  IPR_N219_NVIC_IPR10_bit at NVIC_IPR10.B19;
    sbit  IPR_N220_NVIC_IPR10_bit at NVIC_IPR10.B20;
    sbit  IPR_N221_NVIC_IPR10_bit at NVIC_IPR10.B21;
    sbit  IPR_N222_NVIC_IPR10_bit at NVIC_IPR10.B22;
    sbit  IPR_N223_NVIC_IPR10_bit at NVIC_IPR10.B23;
    sbit  IPR_N324_NVIC_IPR10_bit at NVIC_IPR10.B24;
    sbit  IPR_N325_NVIC_IPR10_bit at NVIC_IPR10.B25;
    sbit  IPR_N326_NVIC_IPR10_bit at NVIC_IPR10.B26;
    sbit  IPR_N327_NVIC_IPR10_bit at NVIC_IPR10.B27;
    sbit  IPR_N328_NVIC_IPR10_bit at NVIC_IPR10.B28;
    sbit  IPR_N329_NVIC_IPR10_bit at NVIC_IPR10.B29;
    sbit  IPR_N330_NVIC_IPR10_bit at NVIC_IPR10.B30;
    sbit  IPR_N331_NVIC_IPR10_bit at NVIC_IPR10.B31;

sfr far unsigned long   volatile NVIC_IPR11           absolute 0xE000E42C;
    sbit  IPR_N00_NVIC_IPR11_bit at NVIC_IPR11.B0;
    sbit  IPR_N01_NVIC_IPR11_bit at NVIC_IPR11.B1;
    sbit  IPR_N02_NVIC_IPR11_bit at NVIC_IPR11.B2;
    sbit  IPR_N03_NVIC_IPR11_bit at NVIC_IPR11.B3;
    sbit  IPR_N04_NVIC_IPR11_bit at NVIC_IPR11.B4;
    sbit  IPR_N05_NVIC_IPR11_bit at NVIC_IPR11.B5;
    sbit  IPR_N06_NVIC_IPR11_bit at NVIC_IPR11.B6;
    sbit  IPR_N07_NVIC_IPR11_bit at NVIC_IPR11.B7;
    sbit  IPR_N18_NVIC_IPR11_bit at NVIC_IPR11.B8;
    sbit  IPR_N19_NVIC_IPR11_bit at NVIC_IPR11.B9;
    sbit  IPR_N110_NVIC_IPR11_bit at NVIC_IPR11.B10;
    sbit  IPR_N111_NVIC_IPR11_bit at NVIC_IPR11.B11;
    sbit  IPR_N112_NVIC_IPR11_bit at NVIC_IPR11.B12;
    sbit  IPR_N113_NVIC_IPR11_bit at NVIC_IPR11.B13;
    sbit  IPR_N114_NVIC_IPR11_bit at NVIC_IPR11.B14;
    sbit  IPR_N115_NVIC_IPR11_bit at NVIC_IPR11.B15;
    sbit  IPR_N216_NVIC_IPR11_bit at NVIC_IPR11.B16;
    sbit  IPR_N217_NVIC_IPR11_bit at NVIC_IPR11.B17;
    sbit  IPR_N218_NVIC_IPR11_bit at NVIC_IPR11.B18;
    sbit  IPR_N219_NVIC_IPR11_bit at NVIC_IPR11.B19;
    sbit  IPR_N220_NVIC_IPR11_bit at NVIC_IPR11.B20;
    sbit  IPR_N221_NVIC_IPR11_bit at NVIC_IPR11.B21;
    sbit  IPR_N222_NVIC_IPR11_bit at NVIC_IPR11.B22;
    sbit  IPR_N223_NVIC_IPR11_bit at NVIC_IPR11.B23;
    sbit  IPR_N324_NVIC_IPR11_bit at NVIC_IPR11.B24;
    sbit  IPR_N325_NVIC_IPR11_bit at NVIC_IPR11.B25;
    sbit  IPR_N326_NVIC_IPR11_bit at NVIC_IPR11.B26;
    sbit  IPR_N327_NVIC_IPR11_bit at NVIC_IPR11.B27;
    sbit  IPR_N328_NVIC_IPR11_bit at NVIC_IPR11.B28;
    sbit  IPR_N329_NVIC_IPR11_bit at NVIC_IPR11.B29;
    sbit  IPR_N330_NVIC_IPR11_bit at NVIC_IPR11.B30;
    sbit  IPR_N331_NVIC_IPR11_bit at NVIC_IPR11.B31;

sfr far unsigned long   volatile NVIC_IPR12           absolute 0xE000E430;
    sbit  IPR_N00_NVIC_IPR12_bit at NVIC_IPR12.B0;
    sbit  IPR_N01_NVIC_IPR12_bit at NVIC_IPR12.B1;
    sbit  IPR_N02_NVIC_IPR12_bit at NVIC_IPR12.B2;
    sbit  IPR_N03_NVIC_IPR12_bit at NVIC_IPR12.B3;
    sbit  IPR_N04_NVIC_IPR12_bit at NVIC_IPR12.B4;
    sbit  IPR_N05_NVIC_IPR12_bit at NVIC_IPR12.B5;
    sbit  IPR_N06_NVIC_IPR12_bit at NVIC_IPR12.B6;
    sbit  IPR_N07_NVIC_IPR12_bit at NVIC_IPR12.B7;
    sbit  IPR_N18_NVIC_IPR12_bit at NVIC_IPR12.B8;
    sbit  IPR_N19_NVIC_IPR12_bit at NVIC_IPR12.B9;
    sbit  IPR_N110_NVIC_IPR12_bit at NVIC_IPR12.B10;
    sbit  IPR_N111_NVIC_IPR12_bit at NVIC_IPR12.B11;
    sbit  IPR_N112_NVIC_IPR12_bit at NVIC_IPR12.B12;
    sbit  IPR_N113_NVIC_IPR12_bit at NVIC_IPR12.B13;
    sbit  IPR_N114_NVIC_IPR12_bit at NVIC_IPR12.B14;
    sbit  IPR_N115_NVIC_IPR12_bit at NVIC_IPR12.B15;
    sbit  IPR_N216_NVIC_IPR12_bit at NVIC_IPR12.B16;
    sbit  IPR_N217_NVIC_IPR12_bit at NVIC_IPR12.B17;
    sbit  IPR_N218_NVIC_IPR12_bit at NVIC_IPR12.B18;
    sbit  IPR_N219_NVIC_IPR12_bit at NVIC_IPR12.B19;
    sbit  IPR_N220_NVIC_IPR12_bit at NVIC_IPR12.B20;
    sbit  IPR_N221_NVIC_IPR12_bit at NVIC_IPR12.B21;
    sbit  IPR_N222_NVIC_IPR12_bit at NVIC_IPR12.B22;
    sbit  IPR_N223_NVIC_IPR12_bit at NVIC_IPR12.B23;
    sbit  IPR_N324_NVIC_IPR12_bit at NVIC_IPR12.B24;
    sbit  IPR_N325_NVIC_IPR12_bit at NVIC_IPR12.B25;
    sbit  IPR_N326_NVIC_IPR12_bit at NVIC_IPR12.B26;
    sbit  IPR_N327_NVIC_IPR12_bit at NVIC_IPR12.B27;
    sbit  IPR_N328_NVIC_IPR12_bit at NVIC_IPR12.B28;
    sbit  IPR_N329_NVIC_IPR12_bit at NVIC_IPR12.B29;
    sbit  IPR_N330_NVIC_IPR12_bit at NVIC_IPR12.B30;
    sbit  IPR_N331_NVIC_IPR12_bit at NVIC_IPR12.B31;

sfr far unsigned long   volatile NVIC_IPR13           absolute 0xE000E434;
    sbit  IPR_N00_NVIC_IPR13_bit at NVIC_IPR13.B0;
    sbit  IPR_N01_NVIC_IPR13_bit at NVIC_IPR13.B1;
    sbit  IPR_N02_NVIC_IPR13_bit at NVIC_IPR13.B2;
    sbit  IPR_N03_NVIC_IPR13_bit at NVIC_IPR13.B3;
    sbit  IPR_N04_NVIC_IPR13_bit at NVIC_IPR13.B4;
    sbit  IPR_N05_NVIC_IPR13_bit at NVIC_IPR13.B5;
    sbit  IPR_N06_NVIC_IPR13_bit at NVIC_IPR13.B6;
    sbit  IPR_N07_NVIC_IPR13_bit at NVIC_IPR13.B7;
    sbit  IPR_N18_NVIC_IPR13_bit at NVIC_IPR13.B8;
    sbit  IPR_N19_NVIC_IPR13_bit at NVIC_IPR13.B9;
    sbit  IPR_N110_NVIC_IPR13_bit at NVIC_IPR13.B10;
    sbit  IPR_N111_NVIC_IPR13_bit at NVIC_IPR13.B11;
    sbit  IPR_N112_NVIC_IPR13_bit at NVIC_IPR13.B12;
    sbit  IPR_N113_NVIC_IPR13_bit at NVIC_IPR13.B13;
    sbit  IPR_N114_NVIC_IPR13_bit at NVIC_IPR13.B14;
    sbit  IPR_N115_NVIC_IPR13_bit at NVIC_IPR13.B15;
    sbit  IPR_N216_NVIC_IPR13_bit at NVIC_IPR13.B16;
    sbit  IPR_N217_NVIC_IPR13_bit at NVIC_IPR13.B17;
    sbit  IPR_N218_NVIC_IPR13_bit at NVIC_IPR13.B18;
    sbit  IPR_N219_NVIC_IPR13_bit at NVIC_IPR13.B19;
    sbit  IPR_N220_NVIC_IPR13_bit at NVIC_IPR13.B20;
    sbit  IPR_N221_NVIC_IPR13_bit at NVIC_IPR13.B21;
    sbit  IPR_N222_NVIC_IPR13_bit at NVIC_IPR13.B22;
    sbit  IPR_N223_NVIC_IPR13_bit at NVIC_IPR13.B23;
    sbit  IPR_N324_NVIC_IPR13_bit at NVIC_IPR13.B24;
    sbit  IPR_N325_NVIC_IPR13_bit at NVIC_IPR13.B25;
    sbit  IPR_N326_NVIC_IPR13_bit at NVIC_IPR13.B26;
    sbit  IPR_N327_NVIC_IPR13_bit at NVIC_IPR13.B27;
    sbit  IPR_N328_NVIC_IPR13_bit at NVIC_IPR13.B28;
    sbit  IPR_N329_NVIC_IPR13_bit at NVIC_IPR13.B29;
    sbit  IPR_N330_NVIC_IPR13_bit at NVIC_IPR13.B30;
    sbit  IPR_N331_NVIC_IPR13_bit at NVIC_IPR13.B31;

sfr far unsigned long   volatile NVIC_IPR14           absolute 0xE000E438;
    sbit  IPR_N00_NVIC_IPR14_bit at NVIC_IPR14.B0;
    sbit  IPR_N01_NVIC_IPR14_bit at NVIC_IPR14.B1;
    sbit  IPR_N02_NVIC_IPR14_bit at NVIC_IPR14.B2;
    sbit  IPR_N03_NVIC_IPR14_bit at NVIC_IPR14.B3;
    sbit  IPR_N04_NVIC_IPR14_bit at NVIC_IPR14.B4;
    sbit  IPR_N05_NVIC_IPR14_bit at NVIC_IPR14.B5;
    sbit  IPR_N06_NVIC_IPR14_bit at NVIC_IPR14.B6;
    sbit  IPR_N07_NVIC_IPR14_bit at NVIC_IPR14.B7;
    sbit  IPR_N18_NVIC_IPR14_bit at NVIC_IPR14.B8;
    sbit  IPR_N19_NVIC_IPR14_bit at NVIC_IPR14.B9;
    sbit  IPR_N110_NVIC_IPR14_bit at NVIC_IPR14.B10;
    sbit  IPR_N111_NVIC_IPR14_bit at NVIC_IPR14.B11;
    sbit  IPR_N112_NVIC_IPR14_bit at NVIC_IPR14.B12;
    sbit  IPR_N113_NVIC_IPR14_bit at NVIC_IPR14.B13;
    sbit  IPR_N114_NVIC_IPR14_bit at NVIC_IPR14.B14;
    sbit  IPR_N115_NVIC_IPR14_bit at NVIC_IPR14.B15;
    sbit  IPR_N216_NVIC_IPR14_bit at NVIC_IPR14.B16;
    sbit  IPR_N217_NVIC_IPR14_bit at NVIC_IPR14.B17;
    sbit  IPR_N218_NVIC_IPR14_bit at NVIC_IPR14.B18;
    sbit  IPR_N219_NVIC_IPR14_bit at NVIC_IPR14.B19;
    sbit  IPR_N220_NVIC_IPR14_bit at NVIC_IPR14.B20;
    sbit  IPR_N221_NVIC_IPR14_bit at NVIC_IPR14.B21;
    sbit  IPR_N222_NVIC_IPR14_bit at NVIC_IPR14.B22;
    sbit  IPR_N223_NVIC_IPR14_bit at NVIC_IPR14.B23;
    sbit  IPR_N324_NVIC_IPR14_bit at NVIC_IPR14.B24;
    sbit  IPR_N325_NVIC_IPR14_bit at NVIC_IPR14.B25;
    sbit  IPR_N326_NVIC_IPR14_bit at NVIC_IPR14.B26;
    sbit  IPR_N327_NVIC_IPR14_bit at NVIC_IPR14.B27;
    sbit  IPR_N328_NVIC_IPR14_bit at NVIC_IPR14.B28;
    sbit  IPR_N329_NVIC_IPR14_bit at NVIC_IPR14.B29;
    sbit  IPR_N330_NVIC_IPR14_bit at NVIC_IPR14.B30;
    sbit  IPR_N331_NVIC_IPR14_bit at NVIC_IPR14.B31;

sfr far unsigned long   volatile NVIC_IPR15           absolute 0xE000E43C;
    sbit  IPR_N00_NVIC_IPR15_bit at NVIC_IPR15.B0;
    sbit  IPR_N01_NVIC_IPR15_bit at NVIC_IPR15.B1;
    sbit  IPR_N02_NVIC_IPR15_bit at NVIC_IPR15.B2;
    sbit  IPR_N03_NVIC_IPR15_bit at NVIC_IPR15.B3;
    sbit  IPR_N04_NVIC_IPR15_bit at NVIC_IPR15.B4;
    sbit  IPR_N05_NVIC_IPR15_bit at NVIC_IPR15.B5;
    sbit  IPR_N06_NVIC_IPR15_bit at NVIC_IPR15.B6;
    sbit  IPR_N07_NVIC_IPR15_bit at NVIC_IPR15.B7;
    sbit  IPR_N18_NVIC_IPR15_bit at NVIC_IPR15.B8;
    sbit  IPR_N19_NVIC_IPR15_bit at NVIC_IPR15.B9;
    sbit  IPR_N110_NVIC_IPR15_bit at NVIC_IPR15.B10;
    sbit  IPR_N111_NVIC_IPR15_bit at NVIC_IPR15.B11;
    sbit  IPR_N112_NVIC_IPR15_bit at NVIC_IPR15.B12;
    sbit  IPR_N113_NVIC_IPR15_bit at NVIC_IPR15.B13;
    sbit  IPR_N114_NVIC_IPR15_bit at NVIC_IPR15.B14;
    sbit  IPR_N115_NVIC_IPR15_bit at NVIC_IPR15.B15;
    sbit  IPR_N216_NVIC_IPR15_bit at NVIC_IPR15.B16;
    sbit  IPR_N217_NVIC_IPR15_bit at NVIC_IPR15.B17;
    sbit  IPR_N218_NVIC_IPR15_bit at NVIC_IPR15.B18;
    sbit  IPR_N219_NVIC_IPR15_bit at NVIC_IPR15.B19;
    sbit  IPR_N220_NVIC_IPR15_bit at NVIC_IPR15.B20;
    sbit  IPR_N221_NVIC_IPR15_bit at NVIC_IPR15.B21;
    sbit  IPR_N222_NVIC_IPR15_bit at NVIC_IPR15.B22;
    sbit  IPR_N223_NVIC_IPR15_bit at NVIC_IPR15.B23;
    sbit  IPR_N324_NVIC_IPR15_bit at NVIC_IPR15.B24;
    sbit  IPR_N325_NVIC_IPR15_bit at NVIC_IPR15.B25;
    sbit  IPR_N326_NVIC_IPR15_bit at NVIC_IPR15.B26;
    sbit  IPR_N327_NVIC_IPR15_bit at NVIC_IPR15.B27;
    sbit  IPR_N328_NVIC_IPR15_bit at NVIC_IPR15.B28;
    sbit  IPR_N329_NVIC_IPR15_bit at NVIC_IPR15.B29;
    sbit  IPR_N330_NVIC_IPR15_bit at NVIC_IPR15.B30;
    sbit  IPR_N331_NVIC_IPR15_bit at NVIC_IPR15.B31;

sfr far unsigned long   volatile NVIC_IPR16           absolute 0xE000E440;
    sbit  IPR_N00_NVIC_IPR16_bit at NVIC_IPR16.B0;
    sbit  IPR_N01_NVIC_IPR16_bit at NVIC_IPR16.B1;
    sbit  IPR_N02_NVIC_IPR16_bit at NVIC_IPR16.B2;
    sbit  IPR_N03_NVIC_IPR16_bit at NVIC_IPR16.B3;
    sbit  IPR_N04_NVIC_IPR16_bit at NVIC_IPR16.B4;
    sbit  IPR_N05_NVIC_IPR16_bit at NVIC_IPR16.B5;
    sbit  IPR_N06_NVIC_IPR16_bit at NVIC_IPR16.B6;
    sbit  IPR_N07_NVIC_IPR16_bit at NVIC_IPR16.B7;
    sbit  IPR_N18_NVIC_IPR16_bit at NVIC_IPR16.B8;
    sbit  IPR_N19_NVIC_IPR16_bit at NVIC_IPR16.B9;
    sbit  IPR_N110_NVIC_IPR16_bit at NVIC_IPR16.B10;
    sbit  IPR_N111_NVIC_IPR16_bit at NVIC_IPR16.B11;
    sbit  IPR_N112_NVIC_IPR16_bit at NVIC_IPR16.B12;
    sbit  IPR_N113_NVIC_IPR16_bit at NVIC_IPR16.B13;
    sbit  IPR_N114_NVIC_IPR16_bit at NVIC_IPR16.B14;
    sbit  IPR_N115_NVIC_IPR16_bit at NVIC_IPR16.B15;
    sbit  IPR_N216_NVIC_IPR16_bit at NVIC_IPR16.B16;
    sbit  IPR_N217_NVIC_IPR16_bit at NVIC_IPR16.B17;
    sbit  IPR_N218_NVIC_IPR16_bit at NVIC_IPR16.B18;
    sbit  IPR_N219_NVIC_IPR16_bit at NVIC_IPR16.B19;
    sbit  IPR_N220_NVIC_IPR16_bit at NVIC_IPR16.B20;
    sbit  IPR_N221_NVIC_IPR16_bit at NVIC_IPR16.B21;
    sbit  IPR_N222_NVIC_IPR16_bit at NVIC_IPR16.B22;
    sbit  IPR_N223_NVIC_IPR16_bit at NVIC_IPR16.B23;
    sbit  IPR_N324_NVIC_IPR16_bit at NVIC_IPR16.B24;
    sbit  IPR_N325_NVIC_IPR16_bit at NVIC_IPR16.B25;
    sbit  IPR_N326_NVIC_IPR16_bit at NVIC_IPR16.B26;
    sbit  IPR_N327_NVIC_IPR16_bit at NVIC_IPR16.B27;
    sbit  IPR_N328_NVIC_IPR16_bit at NVIC_IPR16.B28;
    sbit  IPR_N329_NVIC_IPR16_bit at NVIC_IPR16.B29;
    sbit  IPR_N330_NVIC_IPR16_bit at NVIC_IPR16.B30;
    sbit  IPR_N331_NVIC_IPR16_bit at NVIC_IPR16.B31;

sfr far unsigned long   volatile NVIC_IPR17           absolute 0xE000E444;
    sbit  IPR_N00_NVIC_IPR17_bit at NVIC_IPR17.B0;
    sbit  IPR_N01_NVIC_IPR17_bit at NVIC_IPR17.B1;
    sbit  IPR_N02_NVIC_IPR17_bit at NVIC_IPR17.B2;
    sbit  IPR_N03_NVIC_IPR17_bit at NVIC_IPR17.B3;
    sbit  IPR_N04_NVIC_IPR17_bit at NVIC_IPR17.B4;
    sbit  IPR_N05_NVIC_IPR17_bit at NVIC_IPR17.B5;
    sbit  IPR_N06_NVIC_IPR17_bit at NVIC_IPR17.B6;
    sbit  IPR_N07_NVIC_IPR17_bit at NVIC_IPR17.B7;
    sbit  IPR_N18_NVIC_IPR17_bit at NVIC_IPR17.B8;
    sbit  IPR_N19_NVIC_IPR17_bit at NVIC_IPR17.B9;
    sbit  IPR_N110_NVIC_IPR17_bit at NVIC_IPR17.B10;
    sbit  IPR_N111_NVIC_IPR17_bit at NVIC_IPR17.B11;
    sbit  IPR_N112_NVIC_IPR17_bit at NVIC_IPR17.B12;
    sbit  IPR_N113_NVIC_IPR17_bit at NVIC_IPR17.B13;
    sbit  IPR_N114_NVIC_IPR17_bit at NVIC_IPR17.B14;
    sbit  IPR_N115_NVIC_IPR17_bit at NVIC_IPR17.B15;
    sbit  IPR_N216_NVIC_IPR17_bit at NVIC_IPR17.B16;
    sbit  IPR_N217_NVIC_IPR17_bit at NVIC_IPR17.B17;
    sbit  IPR_N218_NVIC_IPR17_bit at NVIC_IPR17.B18;
    sbit  IPR_N219_NVIC_IPR17_bit at NVIC_IPR17.B19;
    sbit  IPR_N220_NVIC_IPR17_bit at NVIC_IPR17.B20;
    sbit  IPR_N221_NVIC_IPR17_bit at NVIC_IPR17.B21;
    sbit  IPR_N222_NVIC_IPR17_bit at NVIC_IPR17.B22;
    sbit  IPR_N223_NVIC_IPR17_bit at NVIC_IPR17.B23;
    sbit  IPR_N324_NVIC_IPR17_bit at NVIC_IPR17.B24;
    sbit  IPR_N325_NVIC_IPR17_bit at NVIC_IPR17.B25;
    sbit  IPR_N326_NVIC_IPR17_bit at NVIC_IPR17.B26;
    sbit  IPR_N327_NVIC_IPR17_bit at NVIC_IPR17.B27;
    sbit  IPR_N328_NVIC_IPR17_bit at NVIC_IPR17.B28;
    sbit  IPR_N329_NVIC_IPR17_bit at NVIC_IPR17.B29;
    sbit  IPR_N330_NVIC_IPR17_bit at NVIC_IPR17.B30;
    sbit  IPR_N331_NVIC_IPR17_bit at NVIC_IPR17.B31;

sfr far unsigned long   volatile NVIC_IPR18           absolute 0xE000E448;
    sbit  IPR_N00_NVIC_IPR18_bit at NVIC_IPR18.B0;
    sbit  IPR_N01_NVIC_IPR18_bit at NVIC_IPR18.B1;
    sbit  IPR_N02_NVIC_IPR18_bit at NVIC_IPR18.B2;
    sbit  IPR_N03_NVIC_IPR18_bit at NVIC_IPR18.B3;
    sbit  IPR_N04_NVIC_IPR18_bit at NVIC_IPR18.B4;
    sbit  IPR_N05_NVIC_IPR18_bit at NVIC_IPR18.B5;
    sbit  IPR_N06_NVIC_IPR18_bit at NVIC_IPR18.B6;
    sbit  IPR_N07_NVIC_IPR18_bit at NVIC_IPR18.B7;
    sbit  IPR_N18_NVIC_IPR18_bit at NVIC_IPR18.B8;
    sbit  IPR_N19_NVIC_IPR18_bit at NVIC_IPR18.B9;
    sbit  IPR_N110_NVIC_IPR18_bit at NVIC_IPR18.B10;
    sbit  IPR_N111_NVIC_IPR18_bit at NVIC_IPR18.B11;
    sbit  IPR_N112_NVIC_IPR18_bit at NVIC_IPR18.B12;
    sbit  IPR_N113_NVIC_IPR18_bit at NVIC_IPR18.B13;
    sbit  IPR_N114_NVIC_IPR18_bit at NVIC_IPR18.B14;
    sbit  IPR_N115_NVIC_IPR18_bit at NVIC_IPR18.B15;
    sbit  IPR_N216_NVIC_IPR18_bit at NVIC_IPR18.B16;
    sbit  IPR_N217_NVIC_IPR18_bit at NVIC_IPR18.B17;
    sbit  IPR_N218_NVIC_IPR18_bit at NVIC_IPR18.B18;
    sbit  IPR_N219_NVIC_IPR18_bit at NVIC_IPR18.B19;
    sbit  IPR_N220_NVIC_IPR18_bit at NVIC_IPR18.B20;
    sbit  IPR_N221_NVIC_IPR18_bit at NVIC_IPR18.B21;
    sbit  IPR_N222_NVIC_IPR18_bit at NVIC_IPR18.B22;
    sbit  IPR_N223_NVIC_IPR18_bit at NVIC_IPR18.B23;
    sbit  IPR_N324_NVIC_IPR18_bit at NVIC_IPR18.B24;
    sbit  IPR_N325_NVIC_IPR18_bit at NVIC_IPR18.B25;
    sbit  IPR_N326_NVIC_IPR18_bit at NVIC_IPR18.B26;
    sbit  IPR_N327_NVIC_IPR18_bit at NVIC_IPR18.B27;
    sbit  IPR_N328_NVIC_IPR18_bit at NVIC_IPR18.B28;
    sbit  IPR_N329_NVIC_IPR18_bit at NVIC_IPR18.B29;
    sbit  IPR_N330_NVIC_IPR18_bit at NVIC_IPR18.B30;
    sbit  IPR_N331_NVIC_IPR18_bit at NVIC_IPR18.B31;

sfr far unsigned long   volatile NVIC_IPR19           absolute 0xE000E44C;
    sbit  IPR_N00_NVIC_IPR19_bit at NVIC_IPR19.B0;
    sbit  IPR_N01_NVIC_IPR19_bit at NVIC_IPR19.B1;
    sbit  IPR_N02_NVIC_IPR19_bit at NVIC_IPR19.B2;
    sbit  IPR_N03_NVIC_IPR19_bit at NVIC_IPR19.B3;
    sbit  IPR_N04_NVIC_IPR19_bit at NVIC_IPR19.B4;
    sbit  IPR_N05_NVIC_IPR19_bit at NVIC_IPR19.B5;
    sbit  IPR_N06_NVIC_IPR19_bit at NVIC_IPR19.B6;
    sbit  IPR_N07_NVIC_IPR19_bit at NVIC_IPR19.B7;
    sbit  IPR_N18_NVIC_IPR19_bit at NVIC_IPR19.B8;
    sbit  IPR_N19_NVIC_IPR19_bit at NVIC_IPR19.B9;
    sbit  IPR_N110_NVIC_IPR19_bit at NVIC_IPR19.B10;
    sbit  IPR_N111_NVIC_IPR19_bit at NVIC_IPR19.B11;
    sbit  IPR_N112_NVIC_IPR19_bit at NVIC_IPR19.B12;
    sbit  IPR_N113_NVIC_IPR19_bit at NVIC_IPR19.B13;
    sbit  IPR_N114_NVIC_IPR19_bit at NVIC_IPR19.B14;
    sbit  IPR_N115_NVIC_IPR19_bit at NVIC_IPR19.B15;
    sbit  IPR_N216_NVIC_IPR19_bit at NVIC_IPR19.B16;
    sbit  IPR_N217_NVIC_IPR19_bit at NVIC_IPR19.B17;
    sbit  IPR_N218_NVIC_IPR19_bit at NVIC_IPR19.B18;
    sbit  IPR_N219_NVIC_IPR19_bit at NVIC_IPR19.B19;
    sbit  IPR_N220_NVIC_IPR19_bit at NVIC_IPR19.B20;
    sbit  IPR_N221_NVIC_IPR19_bit at NVIC_IPR19.B21;
    sbit  IPR_N222_NVIC_IPR19_bit at NVIC_IPR19.B22;
    sbit  IPR_N223_NVIC_IPR19_bit at NVIC_IPR19.B23;
    sbit  IPR_N324_NVIC_IPR19_bit at NVIC_IPR19.B24;
    sbit  IPR_N325_NVIC_IPR19_bit at NVIC_IPR19.B25;
    sbit  IPR_N326_NVIC_IPR19_bit at NVIC_IPR19.B26;
    sbit  IPR_N327_NVIC_IPR19_bit at NVIC_IPR19.B27;
    sbit  IPR_N328_NVIC_IPR19_bit at NVIC_IPR19.B28;
    sbit  IPR_N329_NVIC_IPR19_bit at NVIC_IPR19.B29;
    sbit  IPR_N330_NVIC_IPR19_bit at NVIC_IPR19.B30;
    sbit  IPR_N331_NVIC_IPR19_bit at NVIC_IPR19.B31;

sfr far unsigned long   volatile NVIC_IPR20           absolute 0xE000E450;
    sbit  IPR_N00_NVIC_IPR20_bit at NVIC_IPR20.B0;
    sbit  IPR_N01_NVIC_IPR20_bit at NVIC_IPR20.B1;
    sbit  IPR_N02_NVIC_IPR20_bit at NVIC_IPR20.B2;
    sbit  IPR_N03_NVIC_IPR20_bit at NVIC_IPR20.B3;
    sbit  IPR_N04_NVIC_IPR20_bit at NVIC_IPR20.B4;
    sbit  IPR_N05_NVIC_IPR20_bit at NVIC_IPR20.B5;
    sbit  IPR_N06_NVIC_IPR20_bit at NVIC_IPR20.B6;
    sbit  IPR_N07_NVIC_IPR20_bit at NVIC_IPR20.B7;
    sbit  IPR_N18_NVIC_IPR20_bit at NVIC_IPR20.B8;
    sbit  IPR_N19_NVIC_IPR20_bit at NVIC_IPR20.B9;
    sbit  IPR_N110_NVIC_IPR20_bit at NVIC_IPR20.B10;
    sbit  IPR_N111_NVIC_IPR20_bit at NVIC_IPR20.B11;
    sbit  IPR_N112_NVIC_IPR20_bit at NVIC_IPR20.B12;
    sbit  IPR_N113_NVIC_IPR20_bit at NVIC_IPR20.B13;
    sbit  IPR_N114_NVIC_IPR20_bit at NVIC_IPR20.B14;
    sbit  IPR_N115_NVIC_IPR20_bit at NVIC_IPR20.B15;
    sbit  IPR_N216_NVIC_IPR20_bit at NVIC_IPR20.B16;
    sbit  IPR_N217_NVIC_IPR20_bit at NVIC_IPR20.B17;
    sbit  IPR_N218_NVIC_IPR20_bit at NVIC_IPR20.B18;
    sbit  IPR_N219_NVIC_IPR20_bit at NVIC_IPR20.B19;
    sbit  IPR_N220_NVIC_IPR20_bit at NVIC_IPR20.B20;
    sbit  IPR_N221_NVIC_IPR20_bit at NVIC_IPR20.B21;
    sbit  IPR_N222_NVIC_IPR20_bit at NVIC_IPR20.B22;
    sbit  IPR_N223_NVIC_IPR20_bit at NVIC_IPR20.B23;
    sbit  IPR_N324_NVIC_IPR20_bit at NVIC_IPR20.B24;
    sbit  IPR_N325_NVIC_IPR20_bit at NVIC_IPR20.B25;
    sbit  IPR_N326_NVIC_IPR20_bit at NVIC_IPR20.B26;
    sbit  IPR_N327_NVIC_IPR20_bit at NVIC_IPR20.B27;
    sbit  IPR_N328_NVIC_IPR20_bit at NVIC_IPR20.B28;
    sbit  IPR_N329_NVIC_IPR20_bit at NVIC_IPR20.B29;
    sbit  IPR_N330_NVIC_IPR20_bit at NVIC_IPR20.B30;
    sbit  IPR_N331_NVIC_IPR20_bit at NVIC_IPR20.B31;

sfr far unsigned long   volatile NVIC_STIR            absolute 0xE000EF00;
    const register unsigned short int INTID0 = 0;
    sbit  INTID0_bit at NVIC_STIR.B0;
    sbit  INTID1_NVIC_STIR_bit at NVIC_STIR.B1;
    sbit  INTID2_NVIC_STIR_bit at NVIC_STIR.B2;
    sbit  INTID3_NVIC_STIR_bit at NVIC_STIR.B3;
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

sfr far unsigned long   volatile STK_CTRL             absolute 0xE000E010;
    const register unsigned short int COUNTFLAG = 16;
    sbit  COUNTFLAG_bit at STK_CTRL.B16;
    const register unsigned short int CLKSOURCE = 2;
    sbit  CLKSOURCE_bit at STK_CTRL.B2;
    const register unsigned short int TICKINT = 1;
    sbit  TICKINT_bit at STK_CTRL.B1;
    sbit  ENABLE_STK_CTRL_bit at STK_CTRL.B0;

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
    const register unsigned short int IMPLEMENTER24 = 24;
    sbit  IMPLEMENTER24_bit at SCB_CPUID.B24;
    const register unsigned short int IMPLEMENTER25 = 25;
    sbit  IMPLEMENTER25_bit at SCB_CPUID.B25;
    const register unsigned short int IMPLEMENTER26 = 26;
    sbit  IMPLEMENTER26_bit at SCB_CPUID.B26;
    const register unsigned short int IMPLEMENTER27 = 27;
    sbit  IMPLEMENTER27_bit at SCB_CPUID.B27;
    const register unsigned short int IMPLEMENTER28 = 28;
    sbit  IMPLEMENTER28_bit at SCB_CPUID.B28;
    const register unsigned short int IMPLEMENTER29 = 29;
    sbit  IMPLEMENTER29_bit at SCB_CPUID.B29;
    const register unsigned short int IMPLEMENTER30 = 30;
    sbit  IMPLEMENTER30_bit at SCB_CPUID.B30;
    const register unsigned short int IMPLEMENTER31 = 31;
    sbit  IMPLEMENTER31_bit at SCB_CPUID.B31;
    const register unsigned short int VARIANT20 = 20;
    sbit  VARIANT20_bit at SCB_CPUID.B20;
    const register unsigned short int VARIANT21 = 21;
    sbit  VARIANT21_bit at SCB_CPUID.B21;
    const register unsigned short int VARIANT22 = 22;
    sbit  VARIANT22_bit at SCB_CPUID.B22;
    const register unsigned short int VARIANT23 = 23;
    sbit  VARIANT23_bit at SCB_CPUID.B23;
    const register unsigned short int CONSTANT16 = 16;
    sbit  CONSTANT16_bit at SCB_CPUID.B16;
    const register unsigned short int CONSTANT17 = 17;
    sbit  CONSTANT17_bit at SCB_CPUID.B17;
    const register unsigned short int CONSTANT18 = 18;
    sbit  CONSTANT18_bit at SCB_CPUID.B18;
    const register unsigned short int CONSTANT19 = 19;
    sbit  CONSTANT19_bit at SCB_CPUID.B19;
    const register unsigned short int PARTNO4 = 4;
    sbit  PARTNO4_bit at SCB_CPUID.B4;
    const register unsigned short int PARTNO5 = 5;
    sbit  PARTNO5_bit at SCB_CPUID.B5;
    const register unsigned short int PARTNO6 = 6;
    sbit  PARTNO6_bit at SCB_CPUID.B6;
    const register unsigned short int PARTNO7 = 7;
    sbit  PARTNO7_bit at SCB_CPUID.B7;
    const register unsigned short int PARTNO8 = 8;
    sbit  PARTNO8_bit at SCB_CPUID.B8;
    const register unsigned short int PARTNO9 = 9;
    sbit  PARTNO9_bit at SCB_CPUID.B9;
    const register unsigned short int PARTNO10 = 10;
    sbit  PARTNO10_bit at SCB_CPUID.B10;
    const register unsigned short int PARTNO11 = 11;
    sbit  PARTNO11_bit at SCB_CPUID.B11;
    const register unsigned short int PARTNO12 = 12;
    sbit  PARTNO12_bit at SCB_CPUID.B12;
    const register unsigned short int PARTNO13 = 13;
    sbit  PARTNO13_bit at SCB_CPUID.B13;
    const register unsigned short int PARTNO14 = 14;
    sbit  PARTNO14_bit at SCB_CPUID.B14;
    const register unsigned short int PARTNO15 = 15;
    sbit  PARTNO15_bit at SCB_CPUID.B15;
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
    const register unsigned short int VECTPENDING12 = 12;
    sbit  VECTPENDING12_bit at SCB_ICSR.B12;
    const register unsigned short int VECTPENDING13 = 13;
    sbit  VECTPENDING13_bit at SCB_ICSR.B13;
    const register unsigned short int VECTPENDING14 = 14;
    sbit  VECTPENDING14_bit at SCB_ICSR.B14;
    const register unsigned short int VECTPENDING15 = 15;
    sbit  VECTPENDING15_bit at SCB_ICSR.B15;
    const register unsigned short int VECTPENDING16 = 16;
    sbit  VECTPENDING16_bit at SCB_ICSR.B16;
    const register unsigned short int VECTPENDING17 = 17;
    sbit  VECTPENDING17_bit at SCB_ICSR.B17;
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
    const register unsigned short int TBLOFF7 = 7;
    sbit  TBLOFF7_bit at SCB_VTOR.B7;
    const register unsigned short int TBLOFF8 = 8;
    sbit  TBLOFF8_bit at SCB_VTOR.B8;
    const register unsigned short int TBLOFF9 = 9;
    sbit  TBLOFF9_bit at SCB_VTOR.B9;
    const register unsigned short int TBLOFF10 = 10;
    sbit  TBLOFF10_bit at SCB_VTOR.B10;
    const register unsigned short int TBLOFF11 = 11;
    sbit  TBLOFF11_bit at SCB_VTOR.B11;
    const register unsigned short int TBLOFF12 = 12;
    sbit  TBLOFF12_bit at SCB_VTOR.B12;
    const register unsigned short int TBLOFF13 = 13;
    sbit  TBLOFF13_bit at SCB_VTOR.B13;
    const register unsigned short int TBLOFF14 = 14;
    sbit  TBLOFF14_bit at SCB_VTOR.B14;
    const register unsigned short int TBLOFF15 = 15;
    sbit  TBLOFF15_bit at SCB_VTOR.B15;
    const register unsigned short int TBLOFF16 = 16;
    sbit  TBLOFF16_bit at SCB_VTOR.B16;
    const register unsigned short int TBLOFF17 = 17;
    sbit  TBLOFF17_bit at SCB_VTOR.B17;
    const register unsigned short int TBLOFF18 = 18;
    sbit  TBLOFF18_bit at SCB_VTOR.B18;
    const register unsigned short int TBLOFF19 = 19;
    sbit  TBLOFF19_bit at SCB_VTOR.B19;
    const register unsigned short int TBLOFF20 = 20;
    sbit  TBLOFF20_bit at SCB_VTOR.B20;
    const register unsigned short int TBLOFF21 = 21;
    sbit  TBLOFF21_bit at SCB_VTOR.B21;
    const register unsigned short int TBLOFF22 = 22;
    sbit  TBLOFF22_bit at SCB_VTOR.B22;
    const register unsigned short int TBLOFF23 = 23;
    sbit  TBLOFF23_bit at SCB_VTOR.B23;
    const register unsigned short int TBLOFF24 = 24;
    sbit  TBLOFF24_bit at SCB_VTOR.B24;
    const register unsigned short int TBLOFF25 = 25;
    sbit  TBLOFF25_bit at SCB_VTOR.B25;
    const register unsigned short int TBLOFF26 = 26;
    sbit  TBLOFF26_bit at SCB_VTOR.B26;
    const register unsigned short int TBLOFF27 = 27;
    sbit  TBLOFF27_bit at SCB_VTOR.B27;
    const register unsigned short int TBLOFF28 = 28;
    sbit  TBLOFF28_bit at SCB_VTOR.B28;
    const register unsigned short int TBLOFF29 = 29;
    sbit  TBLOFF29_bit at SCB_VTOR.B29;
    const register unsigned short int TBLOFF30 = 30;
    sbit  TBLOFF30_bit at SCB_VTOR.B30;
    const register unsigned short int TBLOFF31 = 31;
    sbit  TBLOFF31_bit at SCB_VTOR.B31;

sfr far unsigned long   volatile SCB_AIRCR            absolute 0xE000ED0C;
    const register unsigned short int VECTKEY16 = 16;
    sbit  VECTKEY16_bit at SCB_AIRCR.B16;
    const register unsigned short int VECTKEY17 = 17;
    sbit  VECTKEY17_bit at SCB_AIRCR.B17;
    const register unsigned short int VECTKEY18 = 18;
    sbit  VECTKEY18_bit at SCB_AIRCR.B18;
    const register unsigned short int VECTKEY19 = 19;
    sbit  VECTKEY19_bit at SCB_AIRCR.B19;
    const register unsigned short int VECTKEY20 = 20;
    sbit  VECTKEY20_bit at SCB_AIRCR.B20;
    const register unsigned short int VECTKEY21 = 21;
    sbit  VECTKEY21_bit at SCB_AIRCR.B21;
    const register unsigned short int VECTKEY22 = 22;
    sbit  VECTKEY22_bit at SCB_AIRCR.B22;
    const register unsigned short int VECTKEY23 = 23;
    sbit  VECTKEY23_bit at SCB_AIRCR.B23;
    const register unsigned short int VECTKEY24 = 24;
    sbit  VECTKEY24_bit at SCB_AIRCR.B24;
    const register unsigned short int VECTKEY25 = 25;
    sbit  VECTKEY25_bit at SCB_AIRCR.B25;
    const register unsigned short int VECTKEY26 = 26;
    sbit  VECTKEY26_bit at SCB_AIRCR.B26;
    const register unsigned short int VECTKEY27 = 27;
    sbit  VECTKEY27_bit at SCB_AIRCR.B27;
    const register unsigned short int VECTKEY28 = 28;
    sbit  VECTKEY28_bit at SCB_AIRCR.B28;
    const register unsigned short int VECTKEY29 = 29;
    sbit  VECTKEY29_bit at SCB_AIRCR.B29;
    const register unsigned short int VECTKEY30 = 30;
    sbit  VECTKEY30_bit at SCB_AIRCR.B30;
    const register unsigned short int VECTKEY31 = 31;
    sbit  VECTKEY31_bit at SCB_AIRCR.B31;
    const register unsigned short int ENDIANESS = 15;
    sbit  ENDIANESS_bit at SCB_AIRCR.B15;
    const register unsigned short int PRIGROUP8 = 8;
    sbit  PRIGROUP8_bit at SCB_AIRCR.B8;
    const register unsigned short int PRIGROUP9 = 9;
    sbit  PRIGROUP9_bit at SCB_AIRCR.B9;
    const register unsigned short int PRIGROUP10 = 10;
    sbit  PRIGROUP10_bit at SCB_AIRCR.B10;
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
    const register unsigned short int PRI_616 = 16;
    sbit  PRI_616_bit at SCB_SHPR1.B16;
    const register unsigned short int PRI_617 = 17;
    sbit  PRI_617_bit at SCB_SHPR1.B17;
    const register unsigned short int PRI_618 = 18;
    sbit  PRI_618_bit at SCB_SHPR1.B18;
    const register unsigned short int PRI_619 = 19;
    sbit  PRI_619_bit at SCB_SHPR1.B19;
    const register unsigned short int PRI_620 = 20;
    sbit  PRI_620_bit at SCB_SHPR1.B20;
    const register unsigned short int PRI_621 = 21;
    sbit  PRI_621_bit at SCB_SHPR1.B21;
    const register unsigned short int PRI_622 = 22;
    sbit  PRI_622_bit at SCB_SHPR1.B22;
    const register unsigned short int PRI_623 = 23;
    sbit  PRI_623_bit at SCB_SHPR1.B23;
    const register unsigned short int PRI_58 = 8;
    sbit  PRI_58_bit at SCB_SHPR1.B8;
    const register unsigned short int PRI_59 = 9;
    sbit  PRI_59_bit at SCB_SHPR1.B9;
    const register unsigned short int PRI_510 = 10;
    sbit  PRI_510_bit at SCB_SHPR1.B10;
    const register unsigned short int PRI_511 = 11;
    sbit  PRI_511_bit at SCB_SHPR1.B11;
    const register unsigned short int PRI_512 = 12;
    sbit  PRI_512_bit at SCB_SHPR1.B12;
    const register unsigned short int PRI_513 = 13;
    sbit  PRI_513_bit at SCB_SHPR1.B13;
    const register unsigned short int PRI_514 = 14;
    sbit  PRI_514_bit at SCB_SHPR1.B14;
    const register unsigned short int PRI_515 = 15;
    sbit  PRI_515_bit at SCB_SHPR1.B15;
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
    const register unsigned short int PRI_1124 = 24;
    sbit  PRI_1124_bit at SCB_SHPR2.B24;
    const register unsigned short int PRI_1125 = 25;
    sbit  PRI_1125_bit at SCB_SHPR2.B25;
    const register unsigned short int PRI_1126 = 26;
    sbit  PRI_1126_bit at SCB_SHPR2.B26;
    const register unsigned short int PRI_1127 = 27;
    sbit  PRI_1127_bit at SCB_SHPR2.B27;
    const register unsigned short int PRI_1128 = 28;
    sbit  PRI_1128_bit at SCB_SHPR2.B28;
    const register unsigned short int PRI_1129 = 29;
    sbit  PRI_1129_bit at SCB_SHPR2.B29;
    const register unsigned short int PRI_1130 = 30;
    sbit  PRI_1130_bit at SCB_SHPR2.B30;
    const register unsigned short int PRI_1131 = 31;
    sbit  PRI_1131_bit at SCB_SHPR2.B31;

sfr far unsigned long   volatile SCB_SHPR3            absolute 0xE000ED20;
    const register unsigned short int PRI_1524 = 24;
    sbit  PRI_1524_bit at SCB_SHPR3.B24;
    const register unsigned short int PRI_1525 = 25;
    sbit  PRI_1525_bit at SCB_SHPR3.B25;
    const register unsigned short int PRI_1526 = 26;
    sbit  PRI_1526_bit at SCB_SHPR3.B26;
    const register unsigned short int PRI_1527 = 27;
    sbit  PRI_1527_bit at SCB_SHPR3.B27;
    const register unsigned short int PRI_1528 = 28;
    sbit  PRI_1528_bit at SCB_SHPR3.B28;
    const register unsigned short int PRI_1529 = 29;
    sbit  PRI_1529_bit at SCB_SHPR3.B29;
    const register unsigned short int PRI_1530 = 30;
    sbit  PRI_1530_bit at SCB_SHPR3.B30;
    const register unsigned short int PRI_1531 = 31;
    sbit  PRI_1531_bit at SCB_SHPR3.B31;
    const register unsigned short int PRI_1416 = 16;
    sbit  PRI_1416_bit at SCB_SHPR3.B16;
    const register unsigned short int PRI_1417 = 17;
    sbit  PRI_1417_bit at SCB_SHPR3.B17;
    const register unsigned short int PRI_1418 = 18;
    sbit  PRI_1418_bit at SCB_SHPR3.B18;
    const register unsigned short int PRI_1419 = 19;
    sbit  PRI_1419_bit at SCB_SHPR3.B19;
    const register unsigned short int PRI_1420 = 20;
    sbit  PRI_1420_bit at SCB_SHPR3.B20;
    const register unsigned short int PRI_1421 = 21;
    sbit  PRI_1421_bit at SCB_SHPR3.B21;
    const register unsigned short int PRI_1422 = 22;
    sbit  PRI_1422_bit at SCB_SHPR3.B22;
    const register unsigned short int PRI_1423 = 23;
    sbit  PRI_1423_bit at SCB_SHPR3.B23;

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

sfr unsigned short  volatile GPIO_OUTPUT_000_007         absolute 0x40081280;
sfr unsigned short  volatile GPIO_OUTPUT_010_017         absolute 0x40081281;
sfr unsigned short  volatile GPIO_OUTPUT_020_027         absolute 0x40081282;
sfr unsigned short  volatile GPIO_OUTPUT_030_037         absolute 0x40081283;

sfr unsigned short  volatile GPIO_OUTPUT_040_047         absolute 0x40081284;
sfr unsigned short  volatile GPIO_OUTPUT_050_057         absolute 0x40081285;
sfr unsigned short  volatile GPIO_OUTPUT_060_067         absolute 0x40081286;

sfr unsigned short  volatile GPIO_OUTPUT_100_107         absolute 0x40081288;
sfr unsigned short  volatile GPIO_OUTPUT_110_117         absolute 0x40081289;
sfr unsigned short  volatile GPIO_OUTPUT_120_127         absolute 0x4008128A;
sfr unsigned short  volatile GPIO_OUTPUT_130_137         absolute 0x4008128B;

sfr unsigned short  volatile GPIO_OUTPUT_140_147         absolute 0x4008128C;
sfr unsigned short  volatile GPIO_OUTPUT_150_157         absolute 0x4008128D;
sfr unsigned short  volatile GPIO_OUTPUT_160_167         absolute 0x4008128E;

sfr unsigned short  volatile GPIO_OUTPUT_200_207         absolute 0x40081290;
sfr unsigned short  volatile GPIO_OUTPUT_210_217         absolute 0x40081291;
sfr unsigned short  volatile GPIO_OUTPUT_220_227         absolute 0x40081292;
sfr unsigned short  volatile GPIO_OUTPUT_230_237         absolute 0x40081293;

sfr unsigned short  volatile GPIO_INPUT_000_007          absolute 0x40081300;
sfr unsigned short  volatile GPIO_INPUT_010_017          absolute 0x40081301;
sfr unsigned short  volatile GPIO_INPUT_020_027          absolute 0x40081302;
sfr unsigned short  volatile GPIO_INPUT_030_037          absolute 0x40081303;

sfr unsigned short  volatile GPIO_INPUT_040_047          absolute 0x40081304;
sfr unsigned short  volatile GPIO_INPUT_050_057          absolute 0x40081305;
sfr unsigned short  volatile GPIO_INPUT_060_067          absolute 0x40081306;

sfr unsigned short  volatile GPIO_INPUT_100_107          absolute 0x40081308;
sfr unsigned short  volatile GPIO_INPUT_110_117          absolute 0x40081309;
sfr unsigned short  volatile GPIO_INPUT_120_127          absolute 0x4008130A;
sfr unsigned short  volatile GPIO_INPUT_130_137          absolute 0x4008130B;

sfr unsigned short  volatile GPIO_INPUT_140_147          absolute 0x4008130C;
sfr unsigned short  volatile GPIO_INPUT_150_157          absolute 0x4008130D;
sfr unsigned short  volatile GPIO_INPUT_160_167          absolute 0x4008130E;

sfr unsigned short  volatile GPIO_INPUT_200_207          absolute 0x40081310;
sfr unsigned short  volatile GPIO_INPUT_210_217          absolute 0x40081311;
sfr unsigned short  volatile GPIO_INPUT_220_227          absolute 0x40081312;
sfr unsigned short  volatile GPIO_INPUT_230_237          absolute 0x40081313;

 typedef struct tagPCR_EC_SLP_ENBITS {
  union {
    struct {
      unsigned INT_SLP_EN : 1;
      unsigned PECI_SLP_EN : 1;
      unsigned TACH0_SLP_EN : 1;
      unsigned : 1;
      unsigned PWM0_SLP_EN : 1;
      unsigned PMC_SLP_EN : 1;
      unsigned DMA_SLP_EN : 1;
      unsigned TFDP_SLP_EN : 1;
      unsigned PROCESSOR_SLP_EN : 1;
      unsigned WDT_SLP_EN : 1;
      unsigned SMB0_SLP_EN : 1;
      unsigned TACH1_SLP_EN : 1;
      unsigned : 8;
      unsigned PWM1_SLP_EN : 1;
      unsigned PWM2_SLP_EN : 1;
      unsigned PWM3_SLP_EN : 1;
      unsigned : 6;
      unsigned EC_REG_BANK_SLP_EN : 1;
      unsigned TIMER16_0_SLP_EN : 1;
      unsigned TIMER16_1_SLP_EN : 1;
    };
  };
} typePCR_EC_SLP_ENBITS;
sfr far volatile typePCR_EC_SLP_ENBITS PCR_EC_SLP_ENbits absolute 0x40080108;

 typedef struct tagPCR_EC_CLK_REQ_STSBITS {
  union {
    struct {
      unsigned INT_CLK_REQ : 1;
      unsigned PECI_CLK_REQ : 1;
      unsigned TACH0_CLK_REQ : 1;
      unsigned : 1;
      unsigned PWM0_CLK_REQ : 1;
      unsigned PMC_CLK_REQ : 1;
      unsigned DMA_CLK_REQ : 1;
      unsigned TFDP_CLK_REQ : 1;
      unsigned PROCESSOR_CLK_REQ : 1;
      unsigned WDT_CLK_REQ : 1;
      unsigned SMB0_CLK_REQ : 1;
      unsigned TACH1_CLK_REQ : 1;
      unsigned : 8;
      unsigned PWM1_CLK_REQ : 1;
      unsigned PWM2_CLK_REQ : 1;
      unsigned PWM3_CLK_REQ : 1;
      unsigned : 6;
      unsigned EC_REG_BANK_CLK_REQ : 1;
      unsigned TIMER16_0_CLK_REQ : 1;
      unsigned TIMER16_1_CLK_REQ : 1;
    };
  };
} typePCR_EC_CLK_REQ_STSBITS;
sfr far volatile typePCR_EC_CLK_REQ_STSBITS PCR_EC_CLK_REQ_STSbits absolute 0x4008010C;

 typedef struct tagPCR_HOST_SLP_ENBITS {
  union {
    struct {
      unsigned LPC_SLP_EN : 1;
      unsigned M16550_0_SLP_EN : 1;
      unsigned : 10;
      unsigned GLBL_CFG_SLP_EN : 1;
      unsigned ACPI_EC_0_SLP_EN : 1;
      unsigned ACPI_EC_1_SLP_EN : 1;
      unsigned ACPI_PM1_SLP_EN : 1;
      unsigned KBCEM_SLP_EN : 1;
      unsigned : 1;
      unsigned RTC_SLP_EN : 1;
      unsigned : 13;
    };
  };
} typePCR_HOST_SLP_ENBITS;
sfr far volatile typePCR_HOST_SLP_ENBITS PCR_HOST_SLP_ENbits absolute 0x40080110;

 typedef struct tagPCR_HOST_CLK_REQBITS {
  union {
    struct {
      unsigned LPC_CLK_REQ : 1;
      unsigned M16550_0_CLK_REQ : 1;
      unsigned : 10;
      unsigned GLBL_CFG_CLK_REQ : 1;
      unsigned ACPI_EC_0_CLK_REQ : 1;
      unsigned ACPI_EC_1_CLK_REQ : 1;
      unsigned ACPI_PM1_CLK_REQ : 1;
      unsigned KBCEM_CLK_REQ : 1;
      unsigned : 1;
      unsigned RTC_CLK_REQ : 1;
      unsigned : 13;
    };
  };
} typePCR_HOST_CLK_REQBITS;
sfr far volatile typePCR_HOST_CLK_REQBITS PCR_HOST_CLK_REQbits absolute 0x40080114;

 typedef struct tagPCR_SYS_SLP_CNTRLBITS {
  union {
    struct {
      unsigned ROSC_PD : 1;
      unsigned ROSC_GATE : 1;
      unsigned REG_STDBY : 1;
      unsigned : 29;
    };
  };
} typePCR_SYS_SLP_CNTRLBITS;
sfr far volatile typePCR_SYS_SLP_CNTRLBITS PCR_SYS_SLP_CNTRLbits absolute 0x40080118;

 typedef struct tagPCR_EC_SLP_EN2BITS {
  union {
    struct {
      unsigned : 3;
      unsigned ADC_SLP_EN : 1;
      unsigned : 1;
      unsigned PS2_0_SLP_EN : 1;
      unsigned PS2_1_SLP_EN : 1;
      unsigned PS2_2_SLP_EN : 1;
      unsigned PS2_3_SLP_EN : 1;
      unsigned SPI0_SLP_EN : 1;
      unsigned HTIMER_SLP_EN : 1;
      unsigned KEYSCAN_SLP_EN : 1;
      unsigned RPMPWM_SLP_EN : 1;
      unsigned SMB1_SLP_EN : 1;
      unsigned SMB2_SLP_EN : 1;
      unsigned SMB3_SLP_EN : 1;
      unsigned LED0_SLP_EN : 1;
      unsigned LED1_SLP_EN : 1;
      unsigned LED2_SLP_EN : 1;
      unsigned BCM_SLP_EN : 1;
      unsigned SPI1_SLP_EN : 1;
      unsigned TIMER16_2_SLP_EN : 1;
      unsigned TIMER16_3_SLP_EN : 1;
      unsigned TIMER32_0_SLP_EN : 1;
      unsigned TIMER32_1_SLP_EN : 1;
      unsigned LED3_SLP_EN : 1;
      unsigned : 6;
    };
  };
} typePCR_EC_SLP_EN2BITS;
sfr far volatile typePCR_EC_SLP_EN2BITS PCR_EC_SLP_EN2bits absolute 0x40080124;

 typedef struct tagPCR_EC_CLK_REQ2_STSBITS {
  union {
    struct {
      unsigned : 3;
      unsigned ADC_CLK_REQ : 1;
      unsigned : 1;
      unsigned PS2_0_SLP_CLK_REQ : 1;
      unsigned PS2_1_SLP_CLK_REQ : 1;
      unsigned PS2_2_SLP_CLK_REQ : 1;
      unsigned PS2_3_SLP_CLK_REQ : 1;
      unsigned SPI0_SLP_CLK_REQ : 1;
      unsigned HTIMER_SLP_CLK_REQ : 1;
      unsigned KEYSCAN_SLP_CLK_REQ : 1;
      unsigned RPMPWM_SLP_CLK_REQ : 1;
      unsigned SMB1_SLP_CLK_REQ : 1;
      unsigned SMB2_SLP_CLK_REQ : 1;
      unsigned SMB3_SLP_CLK_REQ : 1;
      unsigned LED0_SLP_CLK_REQ : 1;
      unsigned LED1_SLP_CLK_REQ : 1;
      unsigned LED2_SLP_CLK_REQ : 1;
      unsigned BCM_SLP_CLK_REQ : 1;
      unsigned SPI1_SLP_CLK_REQ : 1;
      unsigned TIMER16_2_SLP_CLK_REQ : 1;
      unsigned TIMER16_3_SLP_CLK_REQ : 1;
      unsigned TIMER32_0_SLP_CLK_REQ : 1;
      unsigned TIMER32_1_SLP_CLK_REQ : 1;
      unsigned LED3_SLP_CLK_REQ : 1;
      unsigned : 6;
    };
  };
} typePCR_EC_CLK_REQ2_STSBITS;
sfr far volatile typePCR_EC_CLK_REQ2_STSBITS PCR_EC_CLK_REQ2_STSbits absolute 0x40080128;

 typedef struct tagPCR_CHIP_OSC_IDBITS {
  union {
    struct {
      unsigned : 8;
      unsigned OSC_LOCK : 1;
      unsigned : 23;
    };
  };
} typePCR_CHIP_OSC_IDBITS;
sfr far volatile typePCR_CHIP_OSC_IDBITS PCR_CHIP_OSC_IDbits absolute 0x40080130;

 typedef struct tagPCR_CHIP_PWR_RST_STSBITS {
  union {
    struct {
      unsigned : 2;
      unsigned VCC_RST_N : 1;
      unsigned SIO_RST_N : 1;
      unsigned : 1;
      unsigned VBAT_RST_N : 1;
      unsigned VCC1_RST_N : 1;
      unsigned : 3;
      unsigned _32K_ACTIVE : 1;
      unsigned PCICLK_ACTIVE : 1;
      unsigned : 20;
    };
  };
} typePCR_CHIP_PWR_RST_STSBITS;
sfr far volatile typePCR_CHIP_PWR_RST_STSBITS PCR_CHIP_PWR_RST_STSbits absolute 0x40080134;

 typedef struct tagPCR_HOST_RST_ENBITS {
  union {
    struct {
      unsigned LPC_RST_EN : 1;
      unsigned M16550_0_RST_EN : 1;
      unsigned : 10;
      unsigned GLBL_CFG_RST_EN : 1;
      unsigned ACPI_EC_0_RST_EN : 1;
      unsigned ACPI_EC_1_RST_EN : 1;
      unsigned ACPI_PM1_RST_EN : 1;
      unsigned KBCEM_RST_EN : 1;
      unsigned : 1;
      unsigned RTC_RST_EN : 1;
      unsigned : 13;
    };
  };
} typePCR_HOST_RST_ENBITS;
sfr far volatile typePCR_HOST_RST_ENBITS PCR_HOST_RST_ENbits absolute 0x4008013C;

 typedef struct tagPCR_EC_RST_ENBITS {
  union {
    struct {
      unsigned INT_RST_EN : 1;
      unsigned PECI_RST_EN : 1;
      unsigned TACH0_RST_EN : 1;
      unsigned : 1;
      unsigned PWM0_RST_EN : 1;
      unsigned PMC_RST_EN : 1;
      unsigned DMA_RST_EN : 1;
      unsigned TFDP_RST_EN : 1;
      unsigned PROCESSOR_RST_EN : 1;
      unsigned WDT_RST_EN : 1;
      unsigned SMB0_RST_EN : 1;
      unsigned TACH1_RST_EN : 1;
      unsigned : 8;
      unsigned PWM1_RST_EN : 1;
      unsigned PWM2_RST_EN : 1;
      unsigned PWM3_RST_EN : 1;
      unsigned : 6;
      unsigned EC_REG_BANK_RST_EN : 1;
      unsigned TIMER16_0_RST_EN : 1;
      unsigned TIMER16_1_RST_EN : 1;
    };
  };
} typePCR_EC_RST_ENBITS;
sfr far volatile typePCR_EC_RST_ENBITS PCR_EC_RST_ENbits absolute 0x40080140;

 typedef struct tagPCR_EC_RST_EN2BITS {
  union {
    struct {
      unsigned : 3;
      unsigned ADC_RST_EN : 1;
      unsigned : 1;
      unsigned PS2_0_RST_EN : 1;
      unsigned PS2_1_RST_EN : 1;
      unsigned PS2_2_RST_EN : 1;
      unsigned PS2_3_RST_EN : 1;
      unsigned SPI0_SLP_EN : 1;
      unsigned HTIMER_RST_EN : 1;
      unsigned KEYSCAN_RST_EN : 1;
      unsigned RPMPWM_RST_EN : 1;
      unsigned SMB1_RST_EN : 1;
      unsigned SMB2_RST_EN : 1;
      unsigned SMB3_RST_EN : 1;
      unsigned LED0_RST_EN : 1;
      unsigned LED1_RST_EN : 1;
      unsigned LED2_RST_EN : 1;
      unsigned BCM_RST_EN : 1;
      unsigned SPI1_RST_EN : 1;
      unsigned TIMER16_2_RST_EN : 1;
      unsigned TIMER16_3_RST_EN : 1;
      unsigned TIMER32_0_RST_EN : 1;
      unsigned TIMER32_1_RST_EN : 1;
      unsigned LED3_RST_EN : 1;
      unsigned : 6;
    };
  };
} typePCR_EC_RST_EN2BITS;
sfr far volatile typePCR_EC_RST_EN2BITS PCR_EC_RST_EN2bits absolute 0x40080144;

 typedef struct tagPCR_PWR_RST_CTRLBITS {
  union {
    struct {
      unsigned IRESET_OUT : 1;
      unsigned : 31;
    };
  };
} typePCR_PWR_RST_CTRLBITS;
sfr far volatile typePCR_PWR_RST_CTRLBITS PCR_PWR_RST_CTRLbits absolute 0x40080148;

 typedef struct tagVBAT_PFR_STSBITS {
  union {
    struct {
      unsigned DET32K_IN : 1;
      unsigned : 4;
      unsigned WDT : 1;
      unsigned : 1;
      unsigned VBAT_RST : 1;
    };
  };
} typeVBAT_PFR_STSBITS;
sfr far volatile typeVBAT_PFR_STSBITS VBAT_PFR_STSbits absolute 0x4000A400;

 typedef struct tagVBAT_CLOCK_ENBITS {
  union {
    struct {
      unsigned XOSEL : 1;
      unsigned _32K_EN : 1;
      unsigned : 30;
    };
  };
} typeVBAT_CLOCK_ENBITS;
sfr far volatile typeVBAT_CLOCK_ENBITS VBAT_CLOCK_ENbits absolute 0x4000A408;

 typedef struct tagLPC_BUS_MONITORBITS {
  union {
    struct {
      unsigned : 1;
      unsigned LRESET_STATUS : 1;
      unsigned : 30;
    };
  };
} typeLPC_BUS_MONITORBITS;
sfr far volatile typeLPC_BUS_MONITORBITS LPC_BUS_MONITORbits absolute 0x400F3104;

 typedef struct tagLPC_HOST_BUS_ERRORBITS {
  union {
    struct {
      unsigned LPC_ERR : 1;
      unsigned EN_ERR : 1;
      unsigned BAR_ERR : 1;
      unsigned RUNTIME_ERR : 1;
      unsigned CONFIG_ERR : 1;
      unsigned DMA_ERR : 1;
      unsigned : 2;
      unsigned ERR_ADDR : 24;
    };
  };
} typeLPC_HOST_BUS_ERRORBITS;
sfr far volatile typeLPC_HOST_BUS_ERRORBITS LPC_HOST_BUS_ERRORbits absolute 0x400F3108;

 typedef struct tagLPC_EC_SERIRQBITS {
  union {
    struct {
      unsigned EC_IRQ : 1;
      unsigned : 31;
    };
  };
} typeLPC_EC_SERIRQBITS;
sfr far volatile typeLPC_EC_SERIRQBITS LPC_EC_SERIRQbits absolute 0x400F310C;

 typedef struct tagLPC_CLK_CTRLBITS {
  union {
    struct {
      unsigned CR : 2;
      unsigned HANDSHAKE : 1;
      unsigned : 29;
    };
  };
} typeLPC_CLK_CTRLBITS;
sfr far volatile typeLPC_CLK_CTRLBITS LPC_CLK_CTRLbits absolute 0x400F3110;

 typedef struct tagLPC_SIRQ0BITS {
  union {
    struct {
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned SELECT_ : 1;
    };
  };
} typeLPC_SIRQ0BITS;
sfr far volatile typeLPC_SIRQ0BITS LPC_SIRQ0bits absolute 0x400F3340;

 typedef struct tagLPC_SIRQ1BITS {
  union {
    struct {
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned SELECT_ : 1;
    };
  };
} typeLPC_SIRQ1BITS;
sfr far volatile typeLPC_SIRQ1BITS LPC_SIRQ1bits absolute 0x400F3341;

 typedef struct tagLPC_SIRQ2BITS {
  union {
    struct {
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned SELECT_ : 1;
    };
  };
} typeLPC_SIRQ2BITS;
sfr far volatile typeLPC_SIRQ2BITS LPC_SIRQ2bits absolute 0x400F3342;

 typedef struct tagLPC_SIRQ3BITS {
  union {
    struct {
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned SELECT_ : 1;
    };
  };
} typeLPC_SIRQ3BITS;
sfr far volatile typeLPC_SIRQ3BITS LPC_SIRQ3bits absolute 0x400F3343;

 typedef struct tagLPC_SIRQ4BITS {
  union {
    struct {
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned SELECT_ : 1;
    };
  };
} typeLPC_SIRQ4BITS;
sfr far volatile typeLPC_SIRQ4BITS LPC_SIRQ4bits absolute 0x400F3344;

 typedef struct tagLPC_SIRQ5BITS {
  union {
    struct {
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned SELECT_ : 1;
    };
  };
} typeLPC_SIRQ5BITS;
sfr far volatile typeLPC_SIRQ5BITS LPC_SIRQ5bits absolute 0x400F3345;

 typedef struct tagLPC_SIRQ6BITS {
  union {
    struct {
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned SELECT_ : 1;
    };
  };
} typeLPC_SIRQ6BITS;
sfr far volatile typeLPC_SIRQ6BITS LPC_SIRQ6bits absolute 0x400F3346;

 typedef struct tagLPC_SIRQ7BITS {
  union {
    struct {
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned SELECT_ : 1;
    };
  };
} typeLPC_SIRQ7BITS;
sfr far volatile typeLPC_SIRQ7BITS LPC_SIRQ7bits absolute 0x400F3347;

 typedef struct tagLPC_SIRQ8BITS {
  union {
    struct {
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned SELECT_ : 1;
    };
  };
} typeLPC_SIRQ8BITS;
sfr far volatile typeLPC_SIRQ8BITS LPC_SIRQ8bits absolute 0x400F3348;

 typedef struct tagLPC_SIRQ9BITS {
  union {
    struct {
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned SELECT_ : 1;
    };
  };
} typeLPC_SIRQ9BITS;
sfr far volatile typeLPC_SIRQ9BITS LPC_SIRQ9bits absolute 0x400F3349;

 typedef struct tagLPC_SIRQ10BITS {
  union {
    struct {
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned SELECT_ : 1;
    };
  };
} typeLPC_SIRQ10BITS;
sfr far volatile typeLPC_SIRQ10BITS LPC_SIRQ10bits absolute 0x400F334A;

 typedef struct tagLPC_SIRQ11BITS {
  union {
    struct {
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned SELECT_ : 1;
    };
  };
} typeLPC_SIRQ11BITS;
sfr far volatile typeLPC_SIRQ11BITS LPC_SIRQ11bits absolute 0x400F334B;

 typedef struct tagLPC_SIRQ12BITS {
  union {
    struct {
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned SELECT_ : 1;
    };
  };
} typeLPC_SIRQ12BITS;
sfr far volatile typeLPC_SIRQ12BITS LPC_SIRQ12bits absolute 0x400F334C;

 typedef struct tagLPC_SIRQ13BITS {
  union {
    struct {
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned SELECT_ : 1;
    };
  };
} typeLPC_SIRQ13BITS;
sfr far volatile typeLPC_SIRQ13BITS LPC_SIRQ13bits absolute 0x400F334D;

 typedef struct tagLPC_SIRQ14BITS {
  union {
    struct {
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned SELECT_ : 1;
    };
  };
} typeLPC_SIRQ14BITS;
sfr far volatile typeLPC_SIRQ14BITS LPC_SIRQ14bits absolute 0x400F334E;

 typedef struct tagLPC_SIRQ15BITS {
  union {
    struct {
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned SELECT_ : 1;
    };
  };
} typeLPC_SIRQ15BITS;
sfr far volatile typeLPC_SIRQ15BITS LPC_SIRQ15bits absolute 0x400F334F;

 typedef struct tagLPC_LPC_BARBITS {
  union {
    struct {
      unsigned MASK : 8;
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned VALID : 1;
      unsigned LPC_HOST_ADDR : 16;
    };
  };
} typeLPC_LPC_BARBITS;
sfr far volatile typeLPC_LPC_BARBITS LPC_LPC_BARbits absolute 0x400F3360;

 typedef struct tagLPC_EM_BARBITS {
  union {
    struct {
      unsigned MASK : 8;
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned VALID : 1;
      unsigned LPC_HOST_ADDR : 16;
    };
  };
} typeLPC_EM_BARBITS;
sfr far volatile typeLPC_EM_BARBITS LPC_EM_BARbits absolute 0x400F3364;

 typedef struct tagLPC_UART_BARBITS {
  union {
    struct {
      unsigned MASK : 8;
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned VALID : 1;
      unsigned LPC_HOST_ADDR : 16;
    };
  };
} typeLPC_UART_BARBITS;
sfr far volatile typeLPC_UART_BARBITS LPC_UART_BARbits absolute 0x400F3368;

 typedef struct tagLPC_KBC_BARBITS {
  union {
    struct {
      unsigned MASK : 8;
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned VALID : 1;
      unsigned LPC_HOST_ADDR : 16;
    };
  };
} typeLPC_KBC_BARBITS;
sfr far volatile typeLPC_KBC_BARBITS LPC_KBC_BARbits absolute 0x400F3378;

 typedef struct tagLPC_EC0_BARBITS {
  union {
    struct {
      unsigned MASK : 8;
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned VALID : 1;
      unsigned LPC_HOST_ADDR : 16;
    };
  };
} typeLPC_EC0_BARBITS;
sfr far volatile typeLPC_EC0_BARBITS LPC_EC0_BARbits absolute 0x400F3388;

 typedef struct tagLPC_EC1_BARBITS {
  union {
    struct {
      unsigned MASK : 8;
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned VALID : 1;
      unsigned LPC_HOST_ADDR : 16;
    };
  };
} typeLPC_EC1_BARBITS;
sfr far volatile typeLPC_EC1_BARBITS LPC_EC1_BARbits absolute 0x400F338C;

 typedef struct tagLPC_PM1_BARBITS {
  union {
    struct {
      unsigned MASK : 8;
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned VALID : 1;
      unsigned LPC_HOST_ADDR : 16;
    };
  };
} typeLPC_PM1_BARBITS;
sfr far volatile typeLPC_PM1_BARBITS LPC_PM1_BARbits absolute 0x400F3390;

 typedef struct tagLPC_LGC_BARBITS {
  union {
    struct {
      unsigned MASK : 8;
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned VALID : 1;
      unsigned LPC_HOST_ADDR : 16;
    };
  };
} typeLPC_LGC_BARBITS;
sfr far volatile typeLPC_LGC_BARBITS LPC_LGC_BARbits absolute 0x400F3394;

 typedef struct tagLPC_MBX_BARBITS {
  union {
    struct {
      unsigned MASK : 8;
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned VALID : 1;
      unsigned LPC_HOST_ADDR : 16;
    };
  };
} typeLPC_MBX_BARBITS;
sfr far volatile typeLPC_MBX_BARBITS LPC_MBX_BARbits absolute 0x400F3398;

 typedef struct tagLPC_RTC_BARBITS {
  union {
    struct {
      unsigned MASK : 8;
      unsigned FRAME : 6;
      unsigned DEVICE : 1;
      unsigned VALID : 1;
      unsigned LPC_HOST_ADDR : 16;
    };
  };
} typeLPC_RTC_BARBITS;
sfr far volatile typeLPC_RTC_BARBITS LPC_RTC_BARbits absolute 0x400F339C;

 typedef struct tagLPC_MBX_MEM_BAR_CRBITS {
  union {
    struct {
      unsigned MASK : 8;
      unsigned FRAME : 6;
      unsigned : 1;
      unsigned VALID : 1;
    };
  };
} typeLPC_MBX_MEM_BAR_CRBITS;
sfr far volatile typeLPC_MBX_MEM_BAR_CRBITS LPC_MBX_MEM_BAR_CRbits absolute 0x400F33C0;

 typedef struct tagLPC_EC0_MEM_BAR_CRBITS {
  union {
    struct {
      unsigned MASK : 8;
      unsigned FRAME : 6;
      unsigned : 1;
      unsigned VALID : 1;
    };
  };
} typeLPC_EC0_MEM_BAR_CRBITS;
sfr far volatile typeLPC_EC0_MEM_BAR_CRBITS LPC_EC0_MEM_BAR_CRbits absolute 0x400F33C6;

 typedef struct tagLPC_EC1_MEM_BAR_CRBITS {
  union {
    struct {
      unsigned MASK : 8;
      unsigned FRAME : 6;
      unsigned : 1;
      unsigned VALID : 1;
    };
  };
} typeLPC_EC1_MEM_BAR_CRBITS;
sfr far volatile typeLPC_EC1_MEM_BAR_CRBITS LPC_EC1_MEM_BAR_CRbits absolute 0x400F33CC;

 typedef struct tagLPC_EMI_MEM_BAR_CRBITS {
  union {
    struct {
      unsigned MASK : 8;
      unsigned FRAME : 6;
      unsigned : 1;
      unsigned VALID : 1;
    };
  };
} typeLPC_EMI_MEM_BAR_CRBITS;
sfr far volatile typeLPC_EMI_MEM_BAR_CRBITS LPC_EMI_MEM_BAR_CRbits absolute 0x400F33D2;

 typedef struct tagEMI_EC_ADDRESSBITS {
  union {
    struct {
      unsigned ACCESS_TYPE : 2;
      unsigned EC_ADDRESS : 13;
      unsigned REGION : 1;
    };
  };
} typeEMI_EC_ADDRESSBITS;
sfr far volatile typeEMI_EC_ADDRESSBITS EMI_EC_ADDRESSbits absolute 0x400F0002;

 typedef struct tagACPI_EC0_OS_STATUSBITS {
  union {
    struct {
      unsigned OBF : 1;
      unsigned IBF : 1;
      unsigned UD1B : 1;
      unsigned CMD : 1;
      unsigned BURST : 1;
      unsigned SCI_EVT : 1;
      unsigned SMI_EVT : 1;
      unsigned UD0B : 1;
    };
  };
} typeACPI_EC0_OS_STATUSBITS;
sfr far volatile typeACPI_EC0_OS_STATUSBITS ACPI_EC0_OS_STATUSbits absolute 0x400F0C04;

 typedef struct tagACPI_EC0_EC_STATUSBITS {
  union {
    struct {
      unsigned OBF : 1;
      unsigned IBF : 1;
      unsigned UD1A : 1;
      unsigned CMD : 1;
      unsigned BURST : 1;
      unsigned SCI_EVT : 1;
      unsigned SMI_EVT : 1;
      unsigned UD0A : 1;
    };
  };
} typeACPI_EC0_EC_STATUSBITS;
sfr far volatile typeACPI_EC0_EC_STATUSBITS ACPI_EC0_EC_STATUSbits absolute 0x400F0D04;

 typedef struct tagACPI_EC1_OS_STATUSBITS {
  union {
    struct {
      unsigned OBF : 1;
      unsigned IBF : 1;
      unsigned UD1B : 1;
      unsigned CMD : 1;
      unsigned BURST : 1;
      unsigned SCI_EVT : 1;
      unsigned SMI_EVT : 1;
      unsigned UD0B : 1;
    };
  };
} typeACPI_EC1_OS_STATUSBITS;
sfr far volatile typeACPI_EC1_OS_STATUSBITS ACPI_EC1_OS_STATUSbits absolute 0x400F1004;

 typedef struct tagACPI_EC1_EC_STATUSBITS {
  union {
    struct {
      unsigned OBF : 1;
      unsigned IBF : 1;
      unsigned UD1A : 1;
      unsigned CMD : 1;
      unsigned BURST : 1;
      unsigned SCI_EVT : 1;
      unsigned SMI_EVT : 1;
      unsigned UD0A : 1;
    };
  };
} typeACPI_EC1_EC_STATUSBITS;
sfr far volatile typeACPI_EC1_EC_STATUSBITS ACPI_EC1_EC_STATUSbits absolute 0x400F1104;

 typedef struct tagKBC_RD_PORT64_STATUSBITS {
  union {
    struct {
      unsigned OBF : 1;
      unsigned IBF : 1;
      unsigned UD0 : 1;
      unsigned CMDnDATA : 1;
      unsigned UD1 : 1;
      unsigned AUXOBF : 1;
      unsigned UD2 : 2;
    };
  };
} typeKBC_RD_PORT64_STATUSBITS;
sfr far volatile typeKBC_RD_PORT64_STATUSBITS KBC_RD_PORT64_STATUSbits absolute 0x400F0404;

 typedef struct tagKBC_STATUSBITS {
  union {
    struct {
      unsigned OBF : 1;
      unsigned IBF : 1;
      unsigned UD0 : 1;
      unsigned CMDnDATA : 1;
      unsigned UD1 : 1;
      unsigned AUXOBF : 1;
      unsigned UD2 : 2;
    };
  };
} typeKBC_STATUSBITS;
sfr far volatile typeKBC_STATUSBITS KBC_STATUSbits absolute 0x400F0504;

 typedef struct tagKBC_CONTROLBITS {
  union {
    struct {
      unsigned UD3 : 1;
      unsigned SAEN : 1;
      unsigned PCOBFEN : 1;
      unsigned UD4 : 2;
      unsigned OBFEN : 1;
      unsigned UD5 : 1;
      unsigned AUXH : 1;
    };
  };
} typeKBC_CONTROLBITS;
sfr far volatile typeKBC_CONTROLBITS KBC_CONTROLbits absolute 0x400F0508;

 typedef struct tagPORT92_PORT92BITS {
  union {
    struct {
      unsigned ALT_CPU_RESET : 1;
      unsigned ALT_GATE_A20 : 1;
      unsigned : 6;
    };
  };
} typePORT92_PORT92BITS;
sfr far volatile typePORT92_PORT92BITS PORT92_PORT92bits absolute 0x400F1800;

 typedef struct tagMBX_SMI_SOURCEBITS {
  union {
    struct {
      unsigned EC_WR : 1;
      unsigned EC_SWI : 7;
      unsigned : 24;
    };
  };
} typeMBX_SMI_SOURCEBITS;
sfr far volatile typeMBX_SMI_SOURCEBITS MBX_SMI_SOURCEbits absolute 0x400F2508;

 typedef struct tagMBX_SMI_MASKBITS {
  union {
    struct {
      unsigned EC_WR_EN : 1;
      unsigned EC_SWI_EN : 7;
      unsigned : 24;
    };
  };
} typeMBX_SMI_MASKBITS;
sfr far volatile typeMBX_SMI_MASKBITS MBX_SMI_MASKbits absolute 0x400F250C;

 typedef struct tagPM1_STS2BITS {
  union {
    struct {
      unsigned PWRBTN_STS : 1;
      unsigned SLPBTN_STS : 1;
      unsigned RTC_STS : 1;
      unsigned PWRBTNOR_STS : 1;
      unsigned : 3;
      unsigned WAK_STS : 1;
    };
  };
} typePM1_STS2BITS;
sfr far volatile typePM1_STS2BITS PM1_STS2bits absolute 0x400F1401;

 typedef struct tagPM1_EN2BITS {
  union {
    struct {
      unsigned PWRBTN_EN : 1;
      unsigned SLPBTN_EN : 1;
      unsigned RTC_EN : 1;
      unsigned : 5;
    };
  };
} typePM1_EN2BITS;
sfr far volatile typePM1_EN2BITS PM1_EN2bits absolute 0x400F1403;

 typedef struct tagPM1_CTRL2BITS {
  union {
    struct {
      unsigned : 1;
      unsigned PWRBTNOR_EN : 1;
      unsigned SLP_TYP : 3;
      unsigned SLP_EN : 1;
      unsigned : 2;
    };
  };
} typePM1_CTRL2BITS;
sfr far volatile typePM1_CTRL2BITS PM1_CTRL2bits absolute 0x400F1405;

 typedef struct tagPM1_STS_2BITS {
  union {
    struct {
      unsigned PWRBTN_STS : 1;
      unsigned SLPBTN_STS : 1;
      unsigned RTC_STS : 1;
      unsigned PWRBTNOR_STS : 1;
      unsigned : 3;
      unsigned WAK_STS : 1;
    };
  };
} typePM1_STS_2BITS;
sfr far volatile typePM1_STS_2BITS PM1_STS_2bits absolute 0x400F1501;

 typedef struct tagPM1_EN_2BITS {
  union {
    struct {
      unsigned PWRBTN_EN : 1;
      unsigned SLPBTN_EN : 1;
      unsigned RTC_EN : 1;
      unsigned : 5;
    };
  };
} typePM1_EN_2BITS;
sfr far volatile typePM1_EN_2BITS PM1_EN_2bits absolute 0x400F1503;

 typedef struct tagPM1_CTRL_2BITS {
  union {
    struct {
      unsigned : 1;
      unsigned PWRBTNOR_EN : 1;
      unsigned SLP_TYP : 3;
      unsigned SLP_EN : 1;
      unsigned : 2;
    };
  };
} typePM1_CTRL_2BITS;
sfr far volatile typePM1_CTRL_2BITS PM1_CTRL_2bits absolute 0x400F1505;

 typedef struct tagUART_INT_ENBITS {
  union {
    struct {
      unsigned ERDAI : 1;
      unsigned ETHREI : 1;
      unsigned ELSI : 1;
      unsigned EMSI : 1;
      unsigned : 4;
    };
  };
} typeUART_INT_ENBITS;
sfr far volatile typeUART_INT_ENBITS UART_INT_ENbits absolute 0x400F1C01;

 typedef struct tagUART_FIFO_CRBITS {
  union {
    struct {
      unsigned EXRF : 1;
      unsigned CLEAR_RECV_FIFO : 1;
      unsigned CLEAR_XMIT_FIFO : 1;
      unsigned DMA_MODE_SELECT : 1;
      unsigned : 2;
      unsigned RECV_FIFO_TRIGGER_LEVEL : 2;
    };
  };
} typeUART_FIFO_CRBITS;
sfr far volatile typeUART_FIFO_CRBITS UART_FIFO_CRbits absolute 0x400F1C02;

 typedef struct tagUART_INT_IDBITS {
  union {
    struct {
      unsigned IPEND : 1;
      unsigned INTID : 3;
      unsigned : 2;
      unsigned FIFO_EN : 2;
    };
  };
} typeUART_INT_IDBITS;
sfr far volatile typeUART_INT_IDBITS UART_INT_IDbits absolute 0x400F1C02;

 typedef struct tagUART_LINE_CRBITS {
  union {
    struct {
      unsigned WORD_LENGTH : 2;
      unsigned STOP_BITS : 1;
      unsigned ENABLE_PARITY : 1;
      unsigned PARITY_SELECT : 1;
      unsigned STICK_PARITY : 1;
      unsigned BREAK_CONTROL : 1;
      unsigned DLAB : 1;
    };
  };
} typeUART_LINE_CRBITS;
sfr far volatile typeUART_LINE_CRBITS UART_LINE_CRbits absolute 0x400F1C03;

 typedef struct tagUART_MODEM_CRBITS {
  union {
    struct {
      unsigned DTR : 1;
      unsigned RTS : 1;
      unsigned OUT1 : 1;
      unsigned OUT2 : 1;
      unsigned LOOPBACK : 1;
      unsigned : 3;
    };
  };
} typeUART_MODEM_CRBITS;
sfr far volatile typeUART_MODEM_CRBITS UART_MODEM_CRbits absolute 0x400F1C04;

 typedef struct tagUART_LINE_STSBITS {
  union {
    struct {
      unsigned DATA_READY : 1;
      unsigned OVERRUN : 1;
      unsigned PE : 1;
      unsigned FRAME_ERROR : 1;
      unsigned BREAK_INTERRUPT : 1;
      unsigned TRANSMIT_EMPTY : 1;
      unsigned TRANSMIT_ERROR : 1;
      unsigned FIFO_ERROR : 1;
    };
  };
} typeUART_LINE_STSBITS;
sfr far volatile typeUART_LINE_STSBITS UART_LINE_STSbits absolute 0x400F1C05;

 typedef struct tagUART_MODEM_STSBITS {
  union {
    struct {
      unsigned CTS : 1;
      unsigned DSR : 1;
      unsigned RI : 1;
      unsigned DCD : 1;
      unsigned nCTS : 1;
      unsigned nDSR : 1;
      unsigned nRI : 1;
      unsigned nDCD : 1;
    };
  };
} typeUART_MODEM_STSBITS;
sfr far volatile typeUART_MODEM_STSBITS UART_MODEM_STSbits absolute 0x400F1C06;

 typedef struct tagUART_CONFIGBITS {
  union {
    struct {
      unsigned CLK_SRC : 1;
      unsigned POWER : 1;
      unsigned POLARITY : 1;
      unsigned : 5;
    };
  };
} typeUART_CONFIGBITS;
sfr far volatile typeUART_CONFIGBITS UART_CONFIGbits absolute 0x400F1FF0;

 typedef struct tagWDT_CONTROLBITS {
  union {
    struct {
      unsigned ENABLE_ : 1;
      unsigned STATUS : 1;
      unsigned : 14;
    };
  };
} typeWDT_CONTROLBITS;
sfr far volatile typeWDT_CONTROLBITS WDT_CONTROLbits absolute 0x40000404;

 typedef struct tagTIMER_CH0_STATUSBITS {
  union {
    struct {
      unsigned INT_EVT : 1;
      unsigned : 31;
    };
  };
} typeTIMER_CH0_STATUSBITS;
sfr far volatile typeTIMER_CH0_STATUSBITS TIMER_CH0_STATUSbits absolute 0x40000C08;

 typedef struct tagTIMER_CH0_INT_ENBITS {
  union {
    struct {
      unsigned ENABLE_ : 1;
      unsigned : 31;
    };
  };
} typeTIMER_CH0_INT_ENBITS;
sfr far volatile typeTIMER_CH0_INT_ENBITS TIMER_CH0_INT_ENbits absolute 0x40000C0C;

 typedef struct tagTIMER_CH0_CONTROLBITS {
  union {
    struct {
      unsigned ENABLE_ : 1;
      unsigned : 1;
      unsigned COUNT_UP : 1;
      unsigned AUTO_RESTART : 1;
      unsigned SOFT_RESET : 1;
      unsigned START : 1;
      unsigned RELOAD : 1;
      unsigned HALT : 1;
      unsigned : 8;
      unsigned PRE_SCALE : 16;
    };
  };
} typeTIMER_CH0_CONTROLBITS;
sfr far volatile typeTIMER_CH0_CONTROLBITS TIMER_CH0_CONTROLbits absolute 0x40000C10;

 typedef struct tagTIMER_CH1_STATUSBITS {
  union {
    struct {
      unsigned INT_EVT : 1;
      unsigned : 31;
    };
  };
} typeTIMER_CH1_STATUSBITS;
sfr far volatile typeTIMER_CH1_STATUSBITS TIMER_CH1_STATUSbits absolute 0x40000C28;

 typedef struct tagTIMER_CH1_INT_ENBITS {
  union {
    struct {
      unsigned ENABLE_ : 1;
      unsigned : 31;
    };
  };
} typeTIMER_CH1_INT_ENBITS;
sfr far volatile typeTIMER_CH1_INT_ENBITS TIMER_CH1_INT_ENbits absolute 0x40000C2C;

 typedef struct tagTIMER_CH1_CONTROLBITS {
  union {
    struct {
      unsigned ENABLE_ : 1;
      unsigned : 1;
      unsigned COUNT_UP : 1;
      unsigned AUTO_RESTART : 1;
      unsigned SOFT_RESET : 1;
      unsigned START : 1;
      unsigned RELOAD : 1;
      unsigned HALT : 1;
      unsigned : 8;
      unsigned PRE_SCALE : 16;
    };
  };
} typeTIMER_CH1_CONTROLBITS;
sfr far volatile typeTIMER_CH1_CONTROLBITS TIMER_CH1_CONTROLbits absolute 0x40000C30;

 typedef struct tagTIMER_CH2_STATUSBITS {
  union {
    struct {
      unsigned INT_EVT : 1;
      unsigned : 31;
    };
  };
} typeTIMER_CH2_STATUSBITS;
sfr far volatile typeTIMER_CH2_STATUSBITS TIMER_CH2_STATUSbits absolute 0x40000C48;

 typedef struct tagTIMER_CH2_INT_ENBITS {
  union {
    struct {
      unsigned ENABLE_ : 1;
      unsigned : 31;
    };
  };
} typeTIMER_CH2_INT_ENBITS;
sfr far volatile typeTIMER_CH2_INT_ENBITS TIMER_CH2_INT_ENbits absolute 0x40000C4C;

 typedef struct tagTIMER_CH2_CONTROLBITS {
  union {
    struct {
      unsigned ENABLE_ : 1;
      unsigned : 1;
      unsigned COUNT_UP : 1;
      unsigned AUTO_RESTART : 1;
      unsigned SOFT_RESET : 1;
      unsigned START : 1;
      unsigned RELOAD : 1;
      unsigned HALT : 1;
      unsigned : 8;
      unsigned PRE_SCALE : 16;
    };
  };
} typeTIMER_CH2_CONTROLBITS;
sfr far volatile typeTIMER_CH2_CONTROLBITS TIMER_CH2_CONTROLbits absolute 0x40000C50;

 typedef struct tagTIMER_CH3_STATUSBITS {
  union {
    struct {
      unsigned INT_EVT : 1;
      unsigned : 31;
    };
  };
} typeTIMER_CH3_STATUSBITS;
sfr far volatile typeTIMER_CH3_STATUSBITS TIMER_CH3_STATUSbits absolute 0x40000C68;

 typedef struct tagTIMER_CH3_INT_ENBITS {
  union {
    struct {
      unsigned ENABLE_ : 1;
      unsigned : 31;
    };
  };
} typeTIMER_CH3_INT_ENBITS;
sfr far volatile typeTIMER_CH3_INT_ENBITS TIMER_CH3_INT_ENbits absolute 0x40000C6C;

 typedef struct tagTIMER_CH3_CONTROLBITS {
  union {
    struct {
      unsigned ENABLE_ : 1;
      unsigned : 1;
      unsigned COUNT_UP : 1;
      unsigned AUTO_RESTART : 1;
      unsigned SOFT_RESET : 1;
      unsigned START : 1;
      unsigned RELOAD : 1;
      unsigned HALT : 1;
      unsigned : 8;
      unsigned PRE_SCALE : 16;
    };
  };
} typeTIMER_CH3_CONTROLBITS;
sfr far volatile typeTIMER_CH3_CONTROLBITS TIMER_CH3_CONTROLbits absolute 0x40000C70;

 typedef struct tagTIMER_CH4_STATUSBITS {
  union {
    struct {
      unsigned INT_EVT : 1;
      unsigned : 31;
    };
  };
} typeTIMER_CH4_STATUSBITS;
sfr far volatile typeTIMER_CH4_STATUSBITS TIMER_CH4_STATUSbits absolute 0x40000C88;

 typedef struct tagTIMER_CH4_INT_ENBITS {
  union {
    struct {
      unsigned ENABLE_ : 1;
      unsigned : 31;
    };
  };
} typeTIMER_CH4_INT_ENBITS;
sfr far volatile typeTIMER_CH4_INT_ENBITS TIMER_CH4_INT_ENbits absolute 0x40000C8C;

 typedef struct tagTIMER_CH4_CONTROLBITS {
  union {
    struct {
      unsigned ENABLE_ : 1;
      unsigned : 1;
      unsigned COUNT_UP : 1;
      unsigned AUTO_RESTART : 1;
      unsigned SOFT_RESET : 1;
      unsigned START : 1;
      unsigned RELOAD : 1;
      unsigned HALT : 1;
      unsigned : 8;
      unsigned PRE_SCALE : 16;
    };
  };
} typeTIMER_CH4_CONTROLBITS;
sfr far volatile typeTIMER_CH4_CONTROLBITS TIMER_CH4_CONTROLbits absolute 0x40000C90;

 typedef struct tagTIMER_CH5_STATUSBITS {
  union {
    struct {
      unsigned INT_EVT : 1;
      unsigned : 31;
    };
  };
} typeTIMER_CH5_STATUSBITS;
sfr far volatile typeTIMER_CH5_STATUSBITS TIMER_CH5_STATUSbits absolute 0x40000CA8;

 typedef struct tagTIMER_CH5_INT_ENBITS {
  union {
    struct {
      unsigned ENABLE_ : 1;
      unsigned : 31;
    };
  };
} typeTIMER_CH5_INT_ENBITS;
sfr far volatile typeTIMER_CH5_INT_ENBITS TIMER_CH5_INT_ENbits absolute 0x40000CAC;

 typedef struct tagTIMER_CH5_CONTROLBITS {
  union {
    struct {
      unsigned ENABLE_ : 1;
      unsigned : 1;
      unsigned COUNT_UP : 1;
      unsigned AUTO_RESTART : 1;
      unsigned SOFT_RESET : 1;
      unsigned START : 1;
      unsigned RELOAD : 1;
      unsigned HALT : 1;
      unsigned : 8;
      unsigned PRE_SCALE : 16;
    };
  };
} typeTIMER_CH5_CONTROLBITS;
sfr far volatile typeTIMER_CH5_CONTROLBITS TIMER_CH5_CONTROLbits absolute 0x40000CB0;

 typedef struct tagRTC_CONTROLBITS {
  union {
    struct {
      unsigned BLOCK_ENABLE : 1;
      unsigned SOFT_RESET : 1;
      unsigned : 1;
      unsigned ALARM_ENABLE : 1;
      unsigned : 28;
    };
  };
} typeRTC_CONTROLBITS;
sfr far volatile typeRTC_CONTROLBITS RTC_CONTROLbits absolute 0x400F2C10;

 typedef struct tagRTC_DAYLIGHT_SAVINGS_FORWARDBITS {
  union {
    struct {
      unsigned DST_MONTH : 8;
      unsigned DST_DAY_OF_WEEK : 3;
      unsigned : 5;
      unsigned DST_WEEK : 3;
      unsigned : 5;
      unsigned DST_HOUR : 7;
      unsigned DST_AM_PM : 1;
    };
  };
} typeRTC_DAYLIGHT_SAVINGS_FORWARDBITS;
sfr far volatile typeRTC_DAYLIGHT_SAVINGS_FORWARDBITS RTC_DAYLIGHT_SAVINGS_FORWARDbits absolute 0x400F2C18;

 typedef struct tagRTC_DAYLIGHT_SAVINGS_BACKWARDBITS {
  union {
    struct {
      unsigned DST_MONTH : 8;
      unsigned DST_DAY_OF_WEEK : 3;
      unsigned : 5;
      unsigned DST_WEEK : 3;
      unsigned : 5;
      unsigned DST_HOUR : 7;
      unsigned DST_AM_PM : 1;
    };
  };
} typeRTC_DAYLIGHT_SAVINGS_BACKWARDBITS;
sfr far volatile typeRTC_DAYLIGHT_SAVINGS_BACKWARDBITS RTC_DAYLIGHT_SAVINGS_BACKWARDbits absolute 0x400F2C1C;

 typedef struct tagGPIO_PIN_CONTROL_000BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_000BITS;
sfr far volatile typeGPIO_PIN_CONTROL_000BITS GPIO_PIN_CONTROL_000bits absolute 0x40081000;

 typedef struct tagGPIO_PIN_CONTROL_001BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_001BITS;
sfr far volatile typeGPIO_PIN_CONTROL_001BITS GPIO_PIN_CONTROL_001bits absolute 0x40081004;

 typedef struct tagGPIO_PIN_CONTROL_002BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_002BITS;
sfr far volatile typeGPIO_PIN_CONTROL_002BITS GPIO_PIN_CONTROL_002bits absolute 0x40081008;

 typedef struct tagGPIO_PIN_CONTROL_003BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_003BITS;
sfr far volatile typeGPIO_PIN_CONTROL_003BITS GPIO_PIN_CONTROL_003bits absolute 0x4008100C;

 typedef struct tagGPIO_PIN_CONTROL_004BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_004BITS;
sfr far volatile typeGPIO_PIN_CONTROL_004BITS GPIO_PIN_CONTROL_004bits absolute 0x40081010;

 typedef struct tagGPIO_PIN_CONTROL_005BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_005BITS;
sfr far volatile typeGPIO_PIN_CONTROL_005BITS GPIO_PIN_CONTROL_005bits absolute 0x40081014;

 typedef struct tagGPIO_PIN_CONTROL_006BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_006BITS;
sfr far volatile typeGPIO_PIN_CONTROL_006BITS GPIO_PIN_CONTROL_006bits absolute 0x40081018;

 typedef struct tagGPIO_PIN_CONTROL_007BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_007BITS;
sfr far volatile typeGPIO_PIN_CONTROL_007BITS GPIO_PIN_CONTROL_007bits absolute 0x4008101C;

 typedef struct tagGPIO_PIN_CONTROL_010BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_010BITS;
sfr far volatile typeGPIO_PIN_CONTROL_010BITS GPIO_PIN_CONTROL_010bits absolute 0x40081020;

 typedef struct tagGPIO_PIN_CONTROL_011BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_011BITS;
sfr far volatile typeGPIO_PIN_CONTROL_011BITS GPIO_PIN_CONTROL_011bits absolute 0x40081024;

 typedef struct tagGPIO_PIN_CONTROL_012BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_012BITS;
sfr far volatile typeGPIO_PIN_CONTROL_012BITS GPIO_PIN_CONTROL_012bits absolute 0x40081028;

 typedef struct tagGPIO_PIN_CONTROL_013BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_013BITS;
sfr far volatile typeGPIO_PIN_CONTROL_013BITS GPIO_PIN_CONTROL_013bits absolute 0x4008102C;

 typedef struct tagGPIO_PIN_CONTROL_014BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_014BITS;
sfr far volatile typeGPIO_PIN_CONTROL_014BITS GPIO_PIN_CONTROL_014bits absolute 0x40081030;

 typedef struct tagGPIO_PIN_CONTROL_015BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_015BITS;
sfr far volatile typeGPIO_PIN_CONTROL_015BITS GPIO_PIN_CONTROL_015bits absolute 0x40081034;

 typedef struct tagGPIO_PIN_CONTROL_016BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_016BITS;
sfr far volatile typeGPIO_PIN_CONTROL_016BITS GPIO_PIN_CONTROL_016bits absolute 0x40081038;

 typedef struct tagGPIO_PIN_CONTROL_017BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_017BITS;
sfr far volatile typeGPIO_PIN_CONTROL_017BITS GPIO_PIN_CONTROL_017bits absolute 0x4008103C;

 typedef struct tagGPIO_PIN_CONTROL_020BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_020BITS;
sfr far volatile typeGPIO_PIN_CONTROL_020BITS GPIO_PIN_CONTROL_020bits absolute 0x40081040;

 typedef struct tagGPIO_PIN_CONTROL_021BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_021BITS;
sfr far volatile typeGPIO_PIN_CONTROL_021BITS GPIO_PIN_CONTROL_021bits absolute 0x40081044;

 typedef struct tagGPIO_PIN_CONTROL_022BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_022BITS;
sfr far volatile typeGPIO_PIN_CONTROL_022BITS GPIO_PIN_CONTROL_022bits absolute 0x40081048;

 typedef struct tagGPIO_PIN_CONTROL_023BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_023BITS;
sfr far volatile typeGPIO_PIN_CONTROL_023BITS GPIO_PIN_CONTROL_023bits absolute 0x4008104C;

 typedef struct tagGPIO_PIN_CONTROL_024BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_024BITS;
sfr far volatile typeGPIO_PIN_CONTROL_024BITS GPIO_PIN_CONTROL_024bits absolute 0x40081050;

 typedef struct tagGPIO_PIN_CONTROL_025BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_025BITS;
sfr far volatile typeGPIO_PIN_CONTROL_025BITS GPIO_PIN_CONTROL_025bits absolute 0x40081054;

 typedef struct tagGPIO_PIN_CONTROL_026BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_026BITS;
sfr far volatile typeGPIO_PIN_CONTROL_026BITS GPIO_PIN_CONTROL_026bits absolute 0x40081058;

 typedef struct tagGPIO_PIN_CONTROL_027BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_027BITS;
sfr far volatile typeGPIO_PIN_CONTROL_027BITS GPIO_PIN_CONTROL_027bits absolute 0x4008105C;

 typedef struct tagGPIO_PIN_CONTROL_030BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_030BITS;
sfr far volatile typeGPIO_PIN_CONTROL_030BITS GPIO_PIN_CONTROL_030bits absolute 0x40081060;

 typedef struct tagGPIO_PIN_CONTROL_031BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_031BITS;
sfr far volatile typeGPIO_PIN_CONTROL_031BITS GPIO_PIN_CONTROL_031bits absolute 0x40081064;

 typedef struct tagGPIO_PIN_CONTROL_032BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_032BITS;
sfr far volatile typeGPIO_PIN_CONTROL_032BITS GPIO_PIN_CONTROL_032bits absolute 0x40081068;

 typedef struct tagGPIO_PIN_CONTROL_033BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_033BITS;
sfr far volatile typeGPIO_PIN_CONTROL_033BITS GPIO_PIN_CONTROL_033bits absolute 0x4008106C;

 typedef struct tagGPIO_PIN_CONTROL_034BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_034BITS;
sfr far volatile typeGPIO_PIN_CONTROL_034BITS GPIO_PIN_CONTROL_034bits absolute 0x40081070;

 typedef struct tagGPIO_PIN_CONTROL_035BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_035BITS;
sfr far volatile typeGPIO_PIN_CONTROL_035BITS GPIO_PIN_CONTROL_035bits absolute 0x40081074;

 typedef struct tagGPIO_PIN_CONTROL_036BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_036BITS;
sfr far volatile typeGPIO_PIN_CONTROL_036BITS GPIO_PIN_CONTROL_036bits absolute 0x40081078;

 typedef struct tagGPIO_PIN_CONTROL_037BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_037BITS;
sfr far volatile typeGPIO_PIN_CONTROL_037BITS GPIO_PIN_CONTROL_037bits absolute 0x4008107C;

 typedef struct tagGPIO_PIN_CONTROL_040BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_040BITS;
sfr far volatile typeGPIO_PIN_CONTROL_040BITS GPIO_PIN_CONTROL_040bits absolute 0x40081080;

 typedef struct tagGPIO_PIN_CONTROL_041BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_041BITS;
sfr far volatile typeGPIO_PIN_CONTROL_041BITS GPIO_PIN_CONTROL_041bits absolute 0x40081084;

 typedef struct tagGPIO_PIN_CONTROL_042BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_042BITS;
sfr far volatile typeGPIO_PIN_CONTROL_042BITS GPIO_PIN_CONTROL_042bits absolute 0x40081088;

 typedef struct tagGPIO_PIN_CONTROL_043BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_043BITS;
sfr far volatile typeGPIO_PIN_CONTROL_043BITS GPIO_PIN_CONTROL_043bits absolute 0x4008108C;

 typedef struct tagGPIO_PIN_CONTROL_044BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_044BITS;
sfr far volatile typeGPIO_PIN_CONTROL_044BITS GPIO_PIN_CONTROL_044bits absolute 0x40081090;

 typedef struct tagGPIO_PIN_CONTROL_045BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_045BITS;
sfr far volatile typeGPIO_PIN_CONTROL_045BITS GPIO_PIN_CONTROL_045bits absolute 0x40081094;

 typedef struct tagGPIO_PIN_CONTROL_046BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_046BITS;
sfr far volatile typeGPIO_PIN_CONTROL_046BITS GPIO_PIN_CONTROL_046bits absolute 0x40081098;

 typedef struct tagGPIO_PIN_CONTROL_047BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_047BITS;
sfr far volatile typeGPIO_PIN_CONTROL_047BITS GPIO_PIN_CONTROL_047bits absolute 0x4008109C;

 typedef struct tagGPIO_PIN_CONTROL_050BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_050BITS;
sfr far volatile typeGPIO_PIN_CONTROL_050BITS GPIO_PIN_CONTROL_050bits absolute 0x400810A0;

 typedef struct tagGPIO_PIN_CONTROL_051BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_051BITS;
sfr far volatile typeGPIO_PIN_CONTROL_051BITS GPIO_PIN_CONTROL_051bits absolute 0x400810A4;

 typedef struct tagGPIO_PIN_CONTROL_052BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_052BITS;
sfr far volatile typeGPIO_PIN_CONTROL_052BITS GPIO_PIN_CONTROL_052bits absolute 0x400810A8;

 typedef struct tagGPIO_PIN_CONTROL_053BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_053BITS;
sfr far volatile typeGPIO_PIN_CONTROL_053BITS GPIO_PIN_CONTROL_053bits absolute 0x400810AC;

 typedef struct tagGPIO_PIN_CONTROL_054BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_054BITS;
sfr far volatile typeGPIO_PIN_CONTROL_054BITS GPIO_PIN_CONTROL_054bits absolute 0x400810B0;

 typedef struct tagGPIO_PIN_CONTROL_055BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_055BITS;
sfr far volatile typeGPIO_PIN_CONTROL_055BITS GPIO_PIN_CONTROL_055bits absolute 0x400810B4;

 typedef struct tagGPIO_PIN_CONTROL_056BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_056BITS;
sfr far volatile typeGPIO_PIN_CONTROL_056BITS GPIO_PIN_CONTROL_056bits absolute 0x400810B8;

 typedef struct tagGPIO_PIN_CONTROL_057BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_057BITS;
sfr far volatile typeGPIO_PIN_CONTROL_057BITS GPIO_PIN_CONTROL_057bits absolute 0x400810BC;

 typedef struct tagGPIO_PIN_CONTROL_060BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_060BITS;
sfr far volatile typeGPIO_PIN_CONTROL_060BITS GPIO_PIN_CONTROL_060bits absolute 0x400810C0;

 typedef struct tagGPIO_PIN_CONTROL_061BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_061BITS;
sfr far volatile typeGPIO_PIN_CONTROL_061BITS GPIO_PIN_CONTROL_061bits absolute 0x400810C4;

 typedef struct tagGPIO_PIN_CONTROL_062BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_062BITS;
sfr far volatile typeGPIO_PIN_CONTROL_062BITS GPIO_PIN_CONTROL_062bits absolute 0x400810C8;

 typedef struct tagGPIO_PIN_CONTROL_063BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_063BITS;
sfr far volatile typeGPIO_PIN_CONTROL_063BITS GPIO_PIN_CONTROL_063bits absolute 0x400810CC;

 typedef struct tagGPIO_PIN_CONTROL_064BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_064BITS;
sfr far volatile typeGPIO_PIN_CONTROL_064BITS GPIO_PIN_CONTROL_064bits absolute 0x400810D0;

 typedef struct tagGPIO_PIN_CONTROL_065BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_065BITS;
sfr far volatile typeGPIO_PIN_CONTROL_065BITS GPIO_PIN_CONTROL_065bits absolute 0x400810D4;

 typedef struct tagGPIO_PIN_CONTROL_066BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_066BITS;
sfr far volatile typeGPIO_PIN_CONTROL_066BITS GPIO_PIN_CONTROL_066bits absolute 0x400810D8;

 typedef struct tagGPIO_PIN_CONTROL_067BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_067BITS;
sfr far volatile typeGPIO_PIN_CONTROL_067BITS GPIO_PIN_CONTROL_067bits absolute 0x400810DC;

 typedef struct tagGPIO_PIN_CONTROL_100BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_100BITS;
sfr far volatile typeGPIO_PIN_CONTROL_100BITS GPIO_PIN_CONTROL_100bits absolute 0x40081100;

 typedef struct tagGPIO_PIN_CONTROL_101BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_101BITS;
sfr far volatile typeGPIO_PIN_CONTROL_101BITS GPIO_PIN_CONTROL_101bits absolute 0x40081104;

 typedef struct tagGPIO_PIN_CONTROL_102BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_102BITS;
sfr far volatile typeGPIO_PIN_CONTROL_102BITS GPIO_PIN_CONTROL_102bits absolute 0x40081108;

 typedef struct tagGPIO_PIN_CONTROL_103BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_103BITS;
sfr far volatile typeGPIO_PIN_CONTROL_103BITS GPIO_PIN_CONTROL_103bits absolute 0x4008110C;

 typedef struct tagGPIO_PIN_CONTROL_104BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_104BITS;
sfr far volatile typeGPIO_PIN_CONTROL_104BITS GPIO_PIN_CONTROL_104bits absolute 0x40081110;

 typedef struct tagGPIO_PIN_CONTROL_105BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_105BITS;
sfr far volatile typeGPIO_PIN_CONTROL_105BITS GPIO_PIN_CONTROL_105bits absolute 0x40081114;

 typedef struct tagGPIO_PIN_CONTROL_106BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_106BITS;
sfr far volatile typeGPIO_PIN_CONTROL_106BITS GPIO_PIN_CONTROL_106bits absolute 0x40081118;

 typedef struct tagGPIO_PIN_CONTROL_107BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_107BITS;
sfr far volatile typeGPIO_PIN_CONTROL_107BITS GPIO_PIN_CONTROL_107bits absolute 0x4008111C;

 typedef struct tagGPIO_PIN_CONTROL_110BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_110BITS;
sfr far volatile typeGPIO_PIN_CONTROL_110BITS GPIO_PIN_CONTROL_110bits absolute 0x40081120;

 typedef struct tagGPIO_PIN_CONTROL_111BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_111BITS;
sfr far volatile typeGPIO_PIN_CONTROL_111BITS GPIO_PIN_CONTROL_111bits absolute 0x40081124;

 typedef struct tagGPIO_PIN_CONTROL_112BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_112BITS;
sfr far volatile typeGPIO_PIN_CONTROL_112BITS GPIO_PIN_CONTROL_112bits absolute 0x40081128;

 typedef struct tagGPIO_PIN_CONTROL_113BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_113BITS;
sfr far volatile typeGPIO_PIN_CONTROL_113BITS GPIO_PIN_CONTROL_113bits absolute 0x4008112C;

 typedef struct tagGPIO_PIN_CONTROL_114BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_114BITS;
sfr far volatile typeGPIO_PIN_CONTROL_114BITS GPIO_PIN_CONTROL_114bits absolute 0x40081130;

 typedef struct tagGPIO_PIN_CONTROL_115BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_115BITS;
sfr far volatile typeGPIO_PIN_CONTROL_115BITS GPIO_PIN_CONTROL_115bits absolute 0x40081134;

 typedef struct tagGPIO_PIN_CONTROL_116BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_116BITS;
sfr far volatile typeGPIO_PIN_CONTROL_116BITS GPIO_PIN_CONTROL_116bits absolute 0x40081138;

 typedef struct tagGPIO_PIN_CONTROL_117BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_117BITS;
sfr far volatile typeGPIO_PIN_CONTROL_117BITS GPIO_PIN_CONTROL_117bits absolute 0x4008113C;

 typedef struct tagGPIO_PIN_CONTROL_120BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_120BITS;
sfr far volatile typeGPIO_PIN_CONTROL_120BITS GPIO_PIN_CONTROL_120bits absolute 0x40081140;

 typedef struct tagGPIO_PIN_CONTROL_121BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_121BITS;
sfr far volatile typeGPIO_PIN_CONTROL_121BITS GPIO_PIN_CONTROL_121bits absolute 0x40081144;

 typedef struct tagGPIO_PIN_CONTROL_122BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_122BITS;
sfr far volatile typeGPIO_PIN_CONTROL_122BITS GPIO_PIN_CONTROL_122bits absolute 0x40081148;

 typedef struct tagGPIO_PIN_CONTROL_123BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_123BITS;
sfr far volatile typeGPIO_PIN_CONTROL_123BITS GPIO_PIN_CONTROL_123bits absolute 0x4008114C;

 typedef struct tagGPIO_PIN_CONTROL_124BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_124BITS;
sfr far volatile typeGPIO_PIN_CONTROL_124BITS GPIO_PIN_CONTROL_124bits absolute 0x40081150;

 typedef struct tagGPIO_PIN_CONTROL_125BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_125BITS;
sfr far volatile typeGPIO_PIN_CONTROL_125BITS GPIO_PIN_CONTROL_125bits absolute 0x40081154;

 typedef struct tagGPIO_PIN_CONTROL_126BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_126BITS;
sfr far volatile typeGPIO_PIN_CONTROL_126BITS GPIO_PIN_CONTROL_126bits absolute 0x40081158;

 typedef struct tagGPIO_PIN_CONTROL_127BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_127BITS;
sfr far volatile typeGPIO_PIN_CONTROL_127BITS GPIO_PIN_CONTROL_127bits absolute 0x4008115C;

 typedef struct tagGPIO_PIN_CONTROL_130BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_130BITS;
sfr far volatile typeGPIO_PIN_CONTROL_130BITS GPIO_PIN_CONTROL_130bits absolute 0x40081160;

 typedef struct tagGPIO_PIN_CONTROL_131BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_131BITS;
sfr far volatile typeGPIO_PIN_CONTROL_131BITS GPIO_PIN_CONTROL_131bits absolute 0x40081164;

 typedef struct tagGPIO_PIN_CONTROL_132BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_132BITS;
sfr far volatile typeGPIO_PIN_CONTROL_132BITS GPIO_PIN_CONTROL_132bits absolute 0x40081168;

 typedef struct tagGPIO_PIN_CONTROL_133BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_133BITS;
sfr far volatile typeGPIO_PIN_CONTROL_133BITS GPIO_PIN_CONTROL_133bits absolute 0x4008116C;

 typedef struct tagGPIO_PIN_CONTROL_134BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_134BITS;
sfr far volatile typeGPIO_PIN_CONTROL_134BITS GPIO_PIN_CONTROL_134bits absolute 0x40081170;

 typedef struct tagGPIO_PIN_CONTROL_135BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_135BITS;
sfr far volatile typeGPIO_PIN_CONTROL_135BITS GPIO_PIN_CONTROL_135bits absolute 0x40081174;

 typedef struct tagGPIO_PIN_CONTROL_136BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_136BITS;
sfr far volatile typeGPIO_PIN_CONTROL_136BITS GPIO_PIN_CONTROL_136bits absolute 0x40081178;

 typedef struct tagGPIO_PIN_CONTROL_137BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_137BITS;
sfr far volatile typeGPIO_PIN_CONTROL_137BITS GPIO_PIN_CONTROL_137bits absolute 0x4008117C;

 typedef struct tagGPIO_PIN_CONTROL_140BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_140BITS;
sfr far volatile typeGPIO_PIN_CONTROL_140BITS GPIO_PIN_CONTROL_140bits absolute 0x40081180;

 typedef struct tagGPIO_PIN_CONTROL_141BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_141BITS;
sfr far volatile typeGPIO_PIN_CONTROL_141BITS GPIO_PIN_CONTROL_141bits absolute 0x40081184;

 typedef struct tagGPIO_PIN_CONTROL_142BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_142BITS;
sfr far volatile typeGPIO_PIN_CONTROL_142BITS GPIO_PIN_CONTROL_142bits absolute 0x40081188;

 typedef struct tagGPIO_PIN_CONTROL_143BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_143BITS;
sfr far volatile typeGPIO_PIN_CONTROL_143BITS GPIO_PIN_CONTROL_143bits absolute 0x4008118C;

 typedef struct tagGPIO_PIN_CONTROL_144BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_144BITS;
sfr far volatile typeGPIO_PIN_CONTROL_144BITS GPIO_PIN_CONTROL_144bits absolute 0x40081190;

 typedef struct tagGPIO_PIN_CONTROL_145BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_145BITS;
sfr far volatile typeGPIO_PIN_CONTROL_145BITS GPIO_PIN_CONTROL_145bits absolute 0x40081194;

 typedef struct tagGPIO_PIN_CONTROL_146BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_146BITS;
sfr far volatile typeGPIO_PIN_CONTROL_146BITS GPIO_PIN_CONTROL_146bits absolute 0x40081198;

 typedef struct tagGPIO_PIN_CONTROL_147BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_147BITS;
sfr far volatile typeGPIO_PIN_CONTROL_147BITS GPIO_PIN_CONTROL_147bits absolute 0x4008119C;

 typedef struct tagGPIO_PIN_CONTROL_150BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_150BITS;
sfr far volatile typeGPIO_PIN_CONTROL_150BITS GPIO_PIN_CONTROL_150bits absolute 0x400811A0;

 typedef struct tagGPIO_PIN_CONTROL_151BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_151BITS;
sfr far volatile typeGPIO_PIN_CONTROL_151BITS GPIO_PIN_CONTROL_151bits absolute 0x400811A4;

 typedef struct tagGPIO_PIN_CONTROL_152BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_152BITS;
sfr far volatile typeGPIO_PIN_CONTROL_152BITS GPIO_PIN_CONTROL_152bits absolute 0x400811A8;

 typedef struct tagGPIO_PIN_CONTROL_153BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_153BITS;
sfr far volatile typeGPIO_PIN_CONTROL_153BITS GPIO_PIN_CONTROL_153bits absolute 0x400811AC;

 typedef struct tagGPIO_PIN_CONTROL_154BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_154BITS;
sfr far volatile typeGPIO_PIN_CONTROL_154BITS GPIO_PIN_CONTROL_154bits absolute 0x400811B0;

 typedef struct tagGPIO_PIN_CONTROL_155BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_155BITS;
sfr far volatile typeGPIO_PIN_CONTROL_155BITS GPIO_PIN_CONTROL_155bits absolute 0x400811B4;

 typedef struct tagGPIO_PIN_CONTROL_156BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_156BITS;
sfr far volatile typeGPIO_PIN_CONTROL_156BITS GPIO_PIN_CONTROL_156bits absolute 0x400811B8;

 typedef struct tagGPIO_PIN_CONTROL_157BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_157BITS;
sfr far volatile typeGPIO_PIN_CONTROL_157BITS GPIO_PIN_CONTROL_157bits absolute 0x400811BC;

 typedef struct tagGPIO_PIN_CONTROL_160BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_160BITS;
sfr far volatile typeGPIO_PIN_CONTROL_160BITS GPIO_PIN_CONTROL_160bits absolute 0x400811C0;

 typedef struct tagGPIO_PIN_CONTROL_161BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_161BITS;
sfr far volatile typeGPIO_PIN_CONTROL_161BITS GPIO_PIN_CONTROL_161bits absolute 0x400811C4;

 typedef struct tagGPIO_PIN_CONTROL_162BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_162BITS;
sfr far volatile typeGPIO_PIN_CONTROL_162BITS GPIO_PIN_CONTROL_162bits absolute 0x400811C8;

 typedef struct tagGPIO_PIN_CONTROL_163BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_163BITS;
sfr far volatile typeGPIO_PIN_CONTROL_163BITS GPIO_PIN_CONTROL_163bits absolute 0x400811CC;

 typedef struct tagGPIO_PIN_CONTROL_164BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_164BITS;
sfr far volatile typeGPIO_PIN_CONTROL_164BITS GPIO_PIN_CONTROL_164bits absolute 0x400811D0;

 typedef struct tagGPIO_PIN_CONTROL_165BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_165BITS;
sfr far volatile typeGPIO_PIN_CONTROL_165BITS GPIO_PIN_CONTROL_165bits absolute 0x400811D4;

 typedef struct tagGPIO_PIN_CONTROL_166BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_166BITS;
sfr far volatile typeGPIO_PIN_CONTROL_166BITS GPIO_PIN_CONTROL_166bits absolute 0x400811D8;

 typedef struct tagGPIO_PIN_CONTROL_167BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_167BITS;
sfr far volatile typeGPIO_PIN_CONTROL_167BITS GPIO_PIN_CONTROL_167bits absolute 0x400811DC;

 typedef struct tagGPIO_PIN_CONTROL_200BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_200BITS;
sfr far volatile typeGPIO_PIN_CONTROL_200BITS GPIO_PIN_CONTROL_200bits absolute 0x40081200;

 typedef struct tagGPIO_PIN_CONTROL_201BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_201BITS;
sfr far volatile typeGPIO_PIN_CONTROL_201BITS GPIO_PIN_CONTROL_201bits absolute 0x40081204;

 typedef struct tagGPIO_PIN_CONTROL_202BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_202BITS;
sfr far volatile typeGPIO_PIN_CONTROL_202BITS GPIO_PIN_CONTROL_202bits absolute 0x40081208;

 typedef struct tagGPIO_PIN_CONTROL_203BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_203BITS;
sfr far volatile typeGPIO_PIN_CONTROL_203BITS GPIO_PIN_CONTROL_203bits absolute 0x4008120C;

 typedef struct tagGPIO_PIN_CONTROL_204BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_204BITS;
sfr far volatile typeGPIO_PIN_CONTROL_204BITS GPIO_PIN_CONTROL_204bits absolute 0x40081210;

 typedef struct tagGPIO_PIN_CONTROL_205BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_205BITS;
sfr far volatile typeGPIO_PIN_CONTROL_205BITS GPIO_PIN_CONTROL_205bits absolute 0x40081214;

 typedef struct tagGPIO_PIN_CONTROL_206BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_206BITS;
sfr far volatile typeGPIO_PIN_CONTROL_206BITS GPIO_PIN_CONTROL_206bits absolute 0x40081218;

 typedef struct tagGPIO_PIN_CONTROL_207BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_207BITS;
sfr far volatile typeGPIO_PIN_CONTROL_207BITS GPIO_PIN_CONTROL_207bits absolute 0x4008121C;

 typedef struct tagGPIO_PIN_CONTROL_210BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_210BITS;
sfr far volatile typeGPIO_PIN_CONTROL_210BITS GPIO_PIN_CONTROL_210bits absolute 0x40081220;

 typedef struct tagGPIO_PIN_CONTROL_211BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_211BITS;
sfr far volatile typeGPIO_PIN_CONTROL_211BITS GPIO_PIN_CONTROL_211bits absolute 0x40081224;

 typedef struct tagGPIO_PIN_CONTROL_212BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_212BITS;
sfr far volatile typeGPIO_PIN_CONTROL_212BITS GPIO_PIN_CONTROL_212bits absolute 0x40081228;

 typedef struct tagGPIO_PIN_CONTROL_213BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_213BITS;
sfr far volatile typeGPIO_PIN_CONTROL_213BITS GPIO_PIN_CONTROL_213bits absolute 0x4008122C;

 typedef struct tagGPIO_PIN_CONTROL_214BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_214BITS;
sfr far volatile typeGPIO_PIN_CONTROL_214BITS GPIO_PIN_CONTROL_214bits absolute 0x40081230;

 typedef struct tagGPIO_PIN_CONTROL_215BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_215BITS;
sfr far volatile typeGPIO_PIN_CONTROL_215BITS GPIO_PIN_CONTROL_215bits absolute 0x40081234;

 typedef struct tagGPIO_PIN_CONTROL_216BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_216BITS;
sfr far volatile typeGPIO_PIN_CONTROL_216BITS GPIO_PIN_CONTROL_216bits absolute 0x40081238;

 typedef struct tagGPIO_PIN_CONTROL_217BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_217BITS;
sfr far volatile typeGPIO_PIN_CONTROL_217BITS GPIO_PIN_CONTROL_217bits absolute 0x4008123C;

 typedef struct tagGPIO_PIN_CONTROL_220BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_220BITS;
sfr far volatile typeGPIO_PIN_CONTROL_220BITS GPIO_PIN_CONTROL_220bits absolute 0x40081240;

 typedef struct tagGPIO_PIN_CONTROL_221BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_221BITS;
sfr far volatile typeGPIO_PIN_CONTROL_221BITS GPIO_PIN_CONTROL_221bits absolute 0x40081244;

 typedef struct tagGPIO_PIN_CONTROL_222BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_222BITS;
sfr far volatile typeGPIO_PIN_CONTROL_222BITS GPIO_PIN_CONTROL_222bits absolute 0x40081248;

 typedef struct tagGPIO_PIN_CONTROL_223BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_223BITS;
sfr far volatile typeGPIO_PIN_CONTROL_223BITS GPIO_PIN_CONTROL_223bits absolute 0x4008124C;

 typedef struct tagGPIO_PIN_CONTROL_224BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_224BITS;
sfr far volatile typeGPIO_PIN_CONTROL_224BITS GPIO_PIN_CONTROL_224bits absolute 0x40081250;

 typedef struct tagGPIO_PIN_CONTROL_225BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_225BITS;
sfr far volatile typeGPIO_PIN_CONTROL_225BITS GPIO_PIN_CONTROL_225bits absolute 0x40081254;

 typedef struct tagGPIO_PIN_CONTROL_226BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_226BITS;
sfr far volatile typeGPIO_PIN_CONTROL_226BITS GPIO_PIN_CONTROL_226bits absolute 0x40081258;

 typedef struct tagGPIO_PIN_CONTROL_227BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_227BITS;
sfr far volatile typeGPIO_PIN_CONTROL_227BITS GPIO_PIN_CONTROL_227bits absolute 0x4008125C;

 typedef struct tagGPIO_PIN_CONTROL_230BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_230BITS;
sfr far volatile typeGPIO_PIN_CONTROL_230BITS GPIO_PIN_CONTROL_230bits absolute 0x40081260;

 typedef struct tagGPIO_PIN_CONTROL_231BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_231BITS;
sfr far volatile typeGPIO_PIN_CONTROL_231BITS GPIO_PIN_CONTROL_231bits absolute 0x40081264;

 typedef struct tagGPIO_PIN_CONTROL_232BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_232BITS;
sfr far volatile typeGPIO_PIN_CONTROL_232BITS GPIO_PIN_CONTROL_232bits absolute 0x40081268;

 typedef struct tagGPIO_PIN_CONTROL_233BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_233BITS;
sfr far volatile typeGPIO_PIN_CONTROL_233BITS GPIO_PIN_CONTROL_233bits absolute 0x4008126C;

 typedef struct tagGPIO_PIN_CONTROL_234BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_234BITS;
sfr far volatile typeGPIO_PIN_CONTROL_234BITS GPIO_PIN_CONTROL_234bits absolute 0x40081270;

 typedef struct tagGPIO_PIN_CONTROL_235BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_235BITS;
sfr far volatile typeGPIO_PIN_CONTROL_235BITS GPIO_PIN_CONTROL_235bits absolute 0x40081274;

 typedef struct tagGPIO_PIN_CONTROL_236BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_236BITS;
sfr far volatile typeGPIO_PIN_CONTROL_236BITS GPIO_PIN_CONTROL_236bits absolute 0x40081278;

 typedef struct tagGPIO_PIN_CONTROL_237BITS {
  union {
    struct {
      unsigned PU_PD : 2;
      unsigned PWR : 2;
      unsigned INT_DET : 3;
      unsigned EDGE_EN : 1;
      unsigned BUFFER : 1;
      unsigned DIR_ : 1;
      unsigned OUTPUT_WRITE_EN : 1;
      unsigned POLARITY : 1;
      unsigned MUX : 2;
      unsigned : 2;
      unsigned OUTPUT_ALT : 1;
      unsigned : 7;
      unsigned INPUT_ : 1;
      unsigned : 7;
    };
  };
} typeGPIO_PIN_CONTROL_237BITS;
sfr far volatile typeGPIO_PIN_CONTROL_237BITS GPIO_PIN_CONTROL_237bits absolute 0x4008127C;

 typedef struct tagGPIO_PIN_CONTROL_2_000BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_000BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_000BITS GPIO_PIN_CONTROL_2_000bits absolute 0x40081500;

 typedef struct tagGPIO_PIN_CONTROL_2_001BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_001BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_001BITS GPIO_PIN_CONTROL_2_001bits absolute 0x40081504;

 typedef struct tagGPIO_PIN_CONTROL_2_002BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_002BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_002BITS GPIO_PIN_CONTROL_2_002bits absolute 0x40081508;

 typedef struct tagGPIO_PIN_CONTROL_2_003BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_003BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_003BITS GPIO_PIN_CONTROL_2_003bits absolute 0x4008150C;

 typedef struct tagGPIO_PIN_CONTROL_2_004BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_004BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_004BITS GPIO_PIN_CONTROL_2_004bits absolute 0x40081510;

 typedef struct tagGPIO_PIN_CONTROL_2_005BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_005BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_005BITS GPIO_PIN_CONTROL_2_005bits absolute 0x40081514;

 typedef struct tagGPIO_PIN_CONTROL_2_006BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_006BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_006BITS GPIO_PIN_CONTROL_2_006bits absolute 0x40081518;

 typedef struct tagGPIO_PIN_CONTROL_2_007BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_007BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_007BITS GPIO_PIN_CONTROL_2_007bits absolute 0x4008151C;

 typedef struct tagGPIO_PIN_CONTROL_2_010BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_010BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_010BITS GPIO_PIN_CONTROL_2_010bits absolute 0x40081520;

 typedef struct tagGPIO_PIN_CONTROL_2_011BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_011BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_011BITS GPIO_PIN_CONTROL_2_011bits absolute 0x40081524;

 typedef struct tagGPIO_PIN_CONTROL_2_012BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_012BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_012BITS GPIO_PIN_CONTROL_2_012bits absolute 0x40081528;

 typedef struct tagGPIO_PIN_CONTROL_2_013BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_013BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_013BITS GPIO_PIN_CONTROL_2_013bits absolute 0x4008152C;

 typedef struct tagGPIO_PIN_CONTROL_2_014BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_014BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_014BITS GPIO_PIN_CONTROL_2_014bits absolute 0x40081530;

 typedef struct tagGPIO_PIN_CONTROL_2_015BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_015BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_015BITS GPIO_PIN_CONTROL_2_015bits absolute 0x40081534;

 typedef struct tagGPIO_PIN_CONTROL_2_016BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_016BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_016BITS GPIO_PIN_CONTROL_2_016bits absolute 0x40081538;

 typedef struct tagGPIO_PIN_CONTROL_2_017BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_017BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_017BITS GPIO_PIN_CONTROL_2_017bits absolute 0x4008153C;

 typedef struct tagGPIO_PIN_CONTROL_2_020BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_020BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_020BITS GPIO_PIN_CONTROL_2_020bits absolute 0x40081540;

 typedef struct tagGPIO_PIN_CONTROL_2_021BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_021BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_021BITS GPIO_PIN_CONTROL_2_021bits absolute 0x40081544;

 typedef struct tagGPIO_PIN_CONTROL_2_022BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_022BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_022BITS GPIO_PIN_CONTROL_2_022bits absolute 0x40081548;

 typedef struct tagGPIO_PIN_CONTROL_2_023BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_023BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_023BITS GPIO_PIN_CONTROL_2_023bits absolute 0x4008154C;

 typedef struct tagGPIO_PIN_CONTROL_2_024BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_024BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_024BITS GPIO_PIN_CONTROL_2_024bits absolute 0x40081550;

 typedef struct tagGPIO_PIN_CONTROL_2_025BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_025BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_025BITS GPIO_PIN_CONTROL_2_025bits absolute 0x40081554;

 typedef struct tagGPIO_PIN_CONTROL_2_026BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_026BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_026BITS GPIO_PIN_CONTROL_2_026bits absolute 0x40081558;

 typedef struct tagGPIO_PIN_CONTROL_2_027BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_027BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_027BITS GPIO_PIN_CONTROL_2_027bits absolute 0x4008155C;

 typedef struct tagGPIO_PIN_CONTROL_2_030BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_030BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_030BITS GPIO_PIN_CONTROL_2_030bits absolute 0x40081560;

 typedef struct tagGPIO_PIN_CONTROL_2_031BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_031BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_031BITS GPIO_PIN_CONTROL_2_031bits absolute 0x40081564;

 typedef struct tagGPIO_PIN_CONTROL_2_032BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_032BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_032BITS GPIO_PIN_CONTROL_2_032bits absolute 0x40081568;

 typedef struct tagGPIO_PIN_CONTROL_2_033BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_033BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_033BITS GPIO_PIN_CONTROL_2_033bits absolute 0x4008156C;

 typedef struct tagGPIO_PIN_CONTROL_2_034BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_034BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_034BITS GPIO_PIN_CONTROL_2_034bits absolute 0x40081570;

 typedef struct tagGPIO_PIN_CONTROL_2_035BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_035BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_035BITS GPIO_PIN_CONTROL_2_035bits absolute 0x40081574;

 typedef struct tagGPIO_PIN_CONTROL_2_036BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_036BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_036BITS GPIO_PIN_CONTROL_2_036bits absolute 0x40081578;

 typedef struct tagGPIO_PIN_CONTROL_2_037BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_037BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_037BITS GPIO_PIN_CONTROL_2_037bits absolute 0x4008157C;

 typedef struct tagGPIO_PIN_CONTROL_2_040BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_040BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_040BITS GPIO_PIN_CONTROL_2_040bits absolute 0x40081580;

 typedef struct tagGPIO_PIN_CONTROL_2_041BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_041BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_041BITS GPIO_PIN_CONTROL_2_041bits absolute 0x40081584;

 typedef struct tagGPIO_PIN_CONTROL_2_042BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_042BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_042BITS GPIO_PIN_CONTROL_2_042bits absolute 0x40081588;

 typedef struct tagGPIO_PIN_CONTROL_2_043BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_043BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_043BITS GPIO_PIN_CONTROL_2_043bits absolute 0x4008158C;

 typedef struct tagGPIO_PIN_CONTROL_2_044BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_044BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_044BITS GPIO_PIN_CONTROL_2_044bits absolute 0x40081590;

 typedef struct tagGPIO_PIN_CONTROL_2_045BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_045BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_045BITS GPIO_PIN_CONTROL_2_045bits absolute 0x40081594;

 typedef struct tagGPIO_PIN_CONTROL_2_046BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_046BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_046BITS GPIO_PIN_CONTROL_2_046bits absolute 0x40081598;

 typedef struct tagGPIO_PIN_CONTROL_2_047BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_047BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_047BITS GPIO_PIN_CONTROL_2_047bits absolute 0x4008159C;

 typedef struct tagGPIO_PIN_CONTROL_2_050BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_050BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_050BITS GPIO_PIN_CONTROL_2_050bits absolute 0x400815A0;

 typedef struct tagGPIO_PIN_CONTROL_2_051BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_051BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_051BITS GPIO_PIN_CONTROL_2_051bits absolute 0x400815A4;

 typedef struct tagGPIO_PIN_CONTROL_2_052BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_052BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_052BITS GPIO_PIN_CONTROL_2_052bits absolute 0x400815A8;

 typedef struct tagGPIO_PIN_CONTROL_2_053BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_053BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_053BITS GPIO_PIN_CONTROL_2_053bits absolute 0x400815AC;

 typedef struct tagGPIO_PIN_CONTROL_2_054BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_054BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_054BITS GPIO_PIN_CONTROL_2_054bits absolute 0x400815B0;

 typedef struct tagGPIO_PIN_CONTROL_2_055BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_055BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_055BITS GPIO_PIN_CONTROL_2_055bits absolute 0x400815B4;

 typedef struct tagGPIO_PIN_CONTROL_2_056BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_056BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_056BITS GPIO_PIN_CONTROL_2_056bits absolute 0x400815B8;

 typedef struct tagGPIO_PIN_CONTROL_2_057BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_057BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_057BITS GPIO_PIN_CONTROL_2_057bits absolute 0x400815BC;

 typedef struct tagGPIO_PIN_CONTROL_2_060BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_060BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_060BITS GPIO_PIN_CONTROL_2_060bits absolute 0x400815C0;

 typedef struct tagGPIO_PIN_CONTROL_2_061BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_061BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_061BITS GPIO_PIN_CONTROL_2_061bits absolute 0x400815C4;

 typedef struct tagGPIO_PIN_CONTROL_2_062BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_062BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_062BITS GPIO_PIN_CONTROL_2_062bits absolute 0x400815C8;

 typedef struct tagGPIO_PIN_CONTROL_2_063BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_063BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_063BITS GPIO_PIN_CONTROL_2_063bits absolute 0x400815CC;

 typedef struct tagGPIO_PIN_CONTROL_2_064BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_064BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_064BITS GPIO_PIN_CONTROL_2_064bits absolute 0x400815D0;

 typedef struct tagGPIO_PIN_CONTROL_2_065BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_065BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_065BITS GPIO_PIN_CONTROL_2_065bits absolute 0x400815D4;

 typedef struct tagGPIO_PIN_CONTROL_2_066BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_066BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_066BITS GPIO_PIN_CONTROL_2_066bits absolute 0x400815D8;

 typedef struct tagGPIO_PIN_CONTROL_2_067BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_067BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_067BITS GPIO_PIN_CONTROL_2_067bits absolute 0x400815DC;

 typedef struct tagGPIO_PIN_CONTROL_2_100BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_100BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_100BITS GPIO_PIN_CONTROL_2_100bits absolute 0x400815E0;

 typedef struct tagGPIO_PIN_CONTROL_2_101BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_101BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_101BITS GPIO_PIN_CONTROL_2_101bits absolute 0x400815E4;

 typedef struct tagGPIO_PIN_CONTROL_2_102BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_102BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_102BITS GPIO_PIN_CONTROL_2_102bits absolute 0x400815E8;

 typedef struct tagGPIO_PIN_CONTROL_2_103BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_103BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_103BITS GPIO_PIN_CONTROL_2_103bits absolute 0x400815EC;

 typedef struct tagGPIO_PIN_CONTROL_2_104BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_104BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_104BITS GPIO_PIN_CONTROL_2_104bits absolute 0x400815F0;

 typedef struct tagGPIO_PIN_CONTROL_2_105BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_105BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_105BITS GPIO_PIN_CONTROL_2_105bits absolute 0x400815F4;

 typedef struct tagGPIO_PIN_CONTROL_2_106BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_106BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_106BITS GPIO_PIN_CONTROL_2_106bits absolute 0x400815F8;

 typedef struct tagGPIO_PIN_CONTROL_2_107BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_107BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_107BITS GPIO_PIN_CONTROL_2_107bits absolute 0x400815FC;

 typedef struct tagGPIO_PIN_CONTROL_2_110BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_110BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_110BITS GPIO_PIN_CONTROL_2_110bits absolute 0x40081600;

 typedef struct tagGPIO_PIN_CONTROL_2_111BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_111BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_111BITS GPIO_PIN_CONTROL_2_111bits absolute 0x40081604;

 typedef struct tagGPIO_PIN_CONTROL_2_112BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_112BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_112BITS GPIO_PIN_CONTROL_2_112bits absolute 0x40081608;

 typedef struct tagGPIO_PIN_CONTROL_2_113BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_113BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_113BITS GPIO_PIN_CONTROL_2_113bits absolute 0x4008160C;

 typedef struct tagGPIO_PIN_CONTROL_2_114BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_114BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_114BITS GPIO_PIN_CONTROL_2_114bits absolute 0x40081610;

 typedef struct tagGPIO_PIN_CONTROL_2_115BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_115BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_115BITS GPIO_PIN_CONTROL_2_115bits absolute 0x40081614;

 typedef struct tagGPIO_PIN_CONTROL_2_116BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_116BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_116BITS GPIO_PIN_CONTROL_2_116bits absolute 0x40081618;

 typedef struct tagGPIO_PIN_CONTROL_2_117BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_117BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_117BITS GPIO_PIN_CONTROL_2_117bits absolute 0x4008161C;

 typedef struct tagGPIO_PIN_CONTROL_2_120BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_120BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_120BITS GPIO_PIN_CONTROL_2_120bits absolute 0x40081620;

 typedef struct tagGPIO_PIN_CONTROL_2_121BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_121BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_121BITS GPIO_PIN_CONTROL_2_121bits absolute 0x40081624;

 typedef struct tagGPIO_PIN_CONTROL_2_122BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_122BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_122BITS GPIO_PIN_CONTROL_2_122bits absolute 0x40081628;

 typedef struct tagGPIO_PIN_CONTROL_2_123BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_123BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_123BITS GPIO_PIN_CONTROL_2_123bits absolute 0x4008162C;

 typedef struct tagGPIO_PIN_CONTROL_2_124BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_124BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_124BITS GPIO_PIN_CONTROL_2_124bits absolute 0x40081630;

 typedef struct tagGPIO_PIN_CONTROL_2_125BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_125BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_125BITS GPIO_PIN_CONTROL_2_125bits absolute 0x40081634;

 typedef struct tagGPIO_PIN_CONTROL_2_126BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_126BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_126BITS GPIO_PIN_CONTROL_2_126bits absolute 0x40081638;

 typedef struct tagGPIO_PIN_CONTROL_2_127BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_127BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_127BITS GPIO_PIN_CONTROL_2_127bits absolute 0x4008163C;

 typedef struct tagGPIO_PIN_CONTROL_2_130BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_130BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_130BITS GPIO_PIN_CONTROL_2_130bits absolute 0x40081640;

 typedef struct tagGPIO_PIN_CONTROL_2_131BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_131BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_131BITS GPIO_PIN_CONTROL_2_131bits absolute 0x40081644;

 typedef struct tagGPIO_PIN_CONTROL_2_132BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_132BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_132BITS GPIO_PIN_CONTROL_2_132bits absolute 0x40081648;

 typedef struct tagGPIO_PIN_CONTROL_2_133BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_133BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_133BITS GPIO_PIN_CONTROL_2_133bits absolute 0x4008164C;

 typedef struct tagGPIO_PIN_CONTROL_2_134BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_134BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_134BITS GPIO_PIN_CONTROL_2_134bits absolute 0x40081650;

 typedef struct tagGPIO_PIN_CONTROL_2_135BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_135BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_135BITS GPIO_PIN_CONTROL_2_135bits absolute 0x40081654;

 typedef struct tagGPIO_PIN_CONTROL_2_136BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_136BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_136BITS GPIO_PIN_CONTROL_2_136bits absolute 0x40081658;

 typedef struct tagGPIO_PIN_CONTROL_2_137BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_137BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_137BITS GPIO_PIN_CONTROL_2_137bits absolute 0x4008165C;

 typedef struct tagGPIO_PIN_CONTROL_2_140BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_140BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_140BITS GPIO_PIN_CONTROL_2_140bits absolute 0x40081660;

 typedef struct tagGPIO_PIN_CONTROL_2_141BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_141BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_141BITS GPIO_PIN_CONTROL_2_141bits absolute 0x40081664;

 typedef struct tagGPIO_PIN_CONTROL_2_142BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_142BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_142BITS GPIO_PIN_CONTROL_2_142bits absolute 0x40081668;

 typedef struct tagGPIO_PIN_CONTROL_2_143BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_143BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_143BITS GPIO_PIN_CONTROL_2_143bits absolute 0x4008166C;

 typedef struct tagGPIO_PIN_CONTROL_2_144BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_144BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_144BITS GPIO_PIN_CONTROL_2_144bits absolute 0x40081670;

 typedef struct tagGPIO_PIN_CONTROL_2_145BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_145BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_145BITS GPIO_PIN_CONTROL_2_145bits absolute 0x40081674;

 typedef struct tagGPIO_PIN_CONTROL_2_146BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_146BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_146BITS GPIO_PIN_CONTROL_2_146bits absolute 0x40081678;

 typedef struct tagGPIO_PIN_CONTROL_2_147BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_147BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_147BITS GPIO_PIN_CONTROL_2_147bits absolute 0x4008167C;

 typedef struct tagGPIO_PIN_CONTROL_2_150BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_150BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_150BITS GPIO_PIN_CONTROL_2_150bits absolute 0x40081680;

 typedef struct tagGPIO_PIN_CONTROL_2_151BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_151BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_151BITS GPIO_PIN_CONTROL_2_151bits absolute 0x40081684;

 typedef struct tagGPIO_PIN_CONTROL_2_152BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_152BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_152BITS GPIO_PIN_CONTROL_2_152bits absolute 0x40081688;

 typedef struct tagGPIO_PIN_CONTROL_2_153BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_153BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_153BITS GPIO_PIN_CONTROL_2_153bits absolute 0x4008168C;

 typedef struct tagGPIO_PIN_CONTROL_2_154BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_154BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_154BITS GPIO_PIN_CONTROL_2_154bits absolute 0x40081690;

 typedef struct tagGPIO_PIN_CONTROL_2_155BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_155BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_155BITS GPIO_PIN_CONTROL_2_155bits absolute 0x40081694;

 typedef struct tagGPIO_PIN_CONTROL_2_156BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_156BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_156BITS GPIO_PIN_CONTROL_2_156bits absolute 0x40081698;

 typedef struct tagGPIO_PIN_CONTROL_2_157BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_157BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_157BITS GPIO_PIN_CONTROL_2_157bits absolute 0x4008169C;

 typedef struct tagGPIO_PIN_CONTROL_2_160BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_160BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_160BITS GPIO_PIN_CONTROL_2_160bits absolute 0x400816A0;

 typedef struct tagGPIO_PIN_CONTROL_2_161BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_161BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_161BITS GPIO_PIN_CONTROL_2_161bits absolute 0x400816A4;

 typedef struct tagGPIO_PIN_CONTROL_2_162BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_162BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_162BITS GPIO_PIN_CONTROL_2_162bits absolute 0x400816A8;

 typedef struct tagGPIO_PIN_CONTROL_2_163BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_163BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_163BITS GPIO_PIN_CONTROL_2_163bits absolute 0x400816AC;

 typedef struct tagGPIO_PIN_CONTROL_2_164BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_164BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_164BITS GPIO_PIN_CONTROL_2_164bits absolute 0x400816B0;

 typedef struct tagGPIO_PIN_CONTROL_2_165BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_165BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_165BITS GPIO_PIN_CONTROL_2_165bits absolute 0x400816B4;

 typedef struct tagGPIO_PIN_CONTROL_2_166BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_166BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_166BITS GPIO_PIN_CONTROL_2_166bits absolute 0x400816B8;

 typedef struct tagGPIO_PIN_CONTROL_2_167BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_167BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_167BITS GPIO_PIN_CONTROL_2_167bits absolute 0x400816BC;

 typedef struct tagGPIO_PIN_CONTROL_2_170BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_170BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_170BITS GPIO_PIN_CONTROL_2_170bits absolute 0x400816C0;

 typedef struct tagGPIO_PIN_CONTROL_2_171BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_171BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_171BITS GPIO_PIN_CONTROL_2_171bits absolute 0x400816C4;

 typedef struct tagGPIO_PIN_CONTROL_2_172BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_172BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_172BITS GPIO_PIN_CONTROL_2_172bits absolute 0x400816C8;

 typedef struct tagGPIO_PIN_CONTROL_2_173BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_173BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_173BITS GPIO_PIN_CONTROL_2_173bits absolute 0x400816CC;

 typedef struct tagGPIO_PIN_CONTROL_2_174BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_174BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_174BITS GPIO_PIN_CONTROL_2_174bits absolute 0x400816D0;

 typedef struct tagGPIO_PIN_CONTROL_2_175BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_175BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_175BITS GPIO_PIN_CONTROL_2_175bits absolute 0x400816D4;

 typedef struct tagGPIO_PIN_CONTROL_2_176BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_176BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_176BITS GPIO_PIN_CONTROL_2_176bits absolute 0x400816D8;

 typedef struct tagGPIO_PIN_CONTROL_2_177BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_177BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_177BITS GPIO_PIN_CONTROL_2_177bits absolute 0x400816DC;

 typedef struct tagGPIO_PIN_CONTROL_2_200BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_200BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_200BITS GPIO_PIN_CONTROL_2_200bits absolute 0x40081720;

 typedef struct tagGPIO_PIN_CONTROL_2_201BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_201BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_201BITS GPIO_PIN_CONTROL_2_201bits absolute 0x40081724;

 typedef struct tagGPIO_PIN_CONTROL_2_202BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_202BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_202BITS GPIO_PIN_CONTROL_2_202bits absolute 0x40081728;

 typedef struct tagGPIO_PIN_CONTROL_2_203BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_203BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_203BITS GPIO_PIN_CONTROL_2_203bits absolute 0x4008172C;

 typedef struct tagGPIO_PIN_CONTROL_2_204BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_204BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_204BITS GPIO_PIN_CONTROL_2_204bits absolute 0x40081730;

 typedef struct tagGPIO_PIN_CONTROL_2_205BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_205BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_205BITS GPIO_PIN_CONTROL_2_205bits absolute 0x40081734;

 typedef struct tagGPIO_PIN_CONTROL_2_206BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_206BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_206BITS GPIO_PIN_CONTROL_2_206bits absolute 0x40081738;

 typedef struct tagGPIO_PIN_CONTROL_2_207BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_207BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_207BITS GPIO_PIN_CONTROL_2_207bits absolute 0x4008173C;

 typedef struct tagGPIO_PIN_CONTROL_2_210BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_210BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_210BITS GPIO_PIN_CONTROL_2_210bits absolute 0x40081740;

 typedef struct tagGPIO_PIN_CONTROL_2_211BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_211BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_211BITS GPIO_PIN_CONTROL_2_211bits absolute 0x40081744;

 typedef struct tagGPIO_PIN_CONTROL_2_212BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_212BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_212BITS GPIO_PIN_CONTROL_2_212bits absolute 0x40081748;

 typedef struct tagGPIO_PIN_CONTROL_2_213BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_213BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_213BITS GPIO_PIN_CONTROL_2_213bits absolute 0x4008174C;

 typedef struct tagGPIO_PIN_CONTROL_2_214BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_214BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_214BITS GPIO_PIN_CONTROL_2_214bits absolute 0x40081750;

 typedef struct tagGPIO_PIN_CONTROL_2_215BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_215BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_215BITS GPIO_PIN_CONTROL_2_215bits absolute 0x40081754;

 typedef struct tagGPIO_PIN_CONTROL_2_216BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_216BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_216BITS GPIO_PIN_CONTROL_2_216bits absolute 0x40081758;

 typedef struct tagGPIO_PIN_CONTROL_2_217BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_217BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_217BITS GPIO_PIN_CONTROL_2_217bits absolute 0x4008175C;

 typedef struct tagGPIO_PIN_CONTROL_2_220BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_220BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_220BITS GPIO_PIN_CONTROL_2_220bits absolute 0x40081760;

 typedef struct tagGPIO_PIN_CONTROL_2_221BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_221BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_221BITS GPIO_PIN_CONTROL_2_221bits absolute 0x40081764;

 typedef struct tagGPIO_PIN_CONTROL_2_222BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_222BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_222BITS GPIO_PIN_CONTROL_2_222bits absolute 0x40081768;

 typedef struct tagGPIO_PIN_CONTROL_2_223BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_223BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_223BITS GPIO_PIN_CONTROL_2_223bits absolute 0x4008176C;

 typedef struct tagGPIO_PIN_CONTROL_2_224BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_224BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_224BITS GPIO_PIN_CONTROL_2_224bits absolute 0x40081770;

 typedef struct tagGPIO_PIN_CONTROL_2_225BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_225BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_225BITS GPIO_PIN_CONTROL_2_225bits absolute 0x40081774;

 typedef struct tagGPIO_PIN_CONTROL_2_226BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_226BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_226BITS GPIO_PIN_CONTROL_2_226bits absolute 0x40081778;

 typedef struct tagGPIO_PIN_CONTROL_2_227BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_227BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_227BITS GPIO_PIN_CONTROL_2_227bits absolute 0x4008177C;

 typedef struct tagGPIO_PIN_CONTROL_2_230BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_230BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_230BITS GPIO_PIN_CONTROL_2_230bits absolute 0x40081780;

 typedef struct tagGPIO_PIN_CONTROL_2_231BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_231BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_231BITS GPIO_PIN_CONTROL_2_231bits absolute 0x40081784;

 typedef struct tagGPIO_PIN_CONTROL_2_232BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_232BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_232BITS GPIO_PIN_CONTROL_2_232bits absolute 0x40081788;

 typedef struct tagGPIO_PIN_CONTROL_2_233BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_233BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_233BITS GPIO_PIN_CONTROL_2_233bits absolute 0x4008178C;

 typedef struct tagGPIO_PIN_CONTROL_2_234BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_234BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_234BITS GPIO_PIN_CONTROL_2_234bits absolute 0x40081790;

 typedef struct tagGPIO_PIN_CONTROL_2_235BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_235BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_235BITS GPIO_PIN_CONTROL_2_235bits absolute 0x40081794;

 typedef struct tagGPIO_PIN_CONTROL_2_236BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_236BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_236BITS GPIO_PIN_CONTROL_2_236bits absolute 0x40081798;

 typedef struct tagGPIO_PIN_CONTROL_2_237BITS {
  union {
    struct {
      unsigned SLEW_RATE : 1;
      unsigned : 3;
      unsigned DRIVE_STRENGTH : 2;
      unsigned : 26;
    };
  };
} typeGPIO_PIN_CONTROL_2_237BITS;
sfr far volatile typeGPIO_PIN_CONTROL_2_237BITS GPIO_PIN_CONTROL_2_237bits absolute 0x4008179C;

 typedef struct tagDMA_CONTROLBITS {
  union {
    struct {
      unsigned ACTIVATE : 1;
      unsigned SOFT_RESET : 1;
      unsigned : 6;
    };
  };
} typeDMA_CONTROLBITS;
sfr far volatile typeDMA_CONTROLBITS DMA_CONTROLbits absolute 0x40002400;

 typedef struct tagDMA_CH0_ACTIVATEBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned : 7;
    };
  };
} typeDMA_CH0_ACTIVATEBITS;
sfr far volatile typeDMA_CH0_ACTIVATEBITS DMA_CH0_ACTIVATEbits absolute 0x40002410;

 typedef struct tagDMA_CH0_CONTROLBITS {
  union {
    struct {
      unsigned RUN : 1;
      unsigned REQUEST : 1;
      unsigned DONE : 1;
      unsigned STATUS : 2;
      unsigned BUSY : 1;
      unsigned : 2;
      unsigned TX_DIRECTION : 1;
      unsigned HARDWARE_FLOW_CONTROL_DEVICE : 7;
      unsigned INCREMENT_MEM_ADDR : 1;
      unsigned INCREMENT_DEVICE_ADDR : 1;
      unsigned LOCK_ : 1;
      unsigned DISABLE_HW_FLOW_CONTROL : 1;
      unsigned TRANSFER_SIZE : 3;
      unsigned : 1;
      unsigned TRANSFER_GO : 1;
      unsigned TRANSFER_ABORT : 1;
      unsigned : 6;
    };
  };
} typeDMA_CH0_CONTROLBITS;
sfr far volatile typeDMA_CH0_CONTROLBITS DMA_CH0_CONTROLbits absolute 0x40002420;

 typedef struct tagDMA_CH0_INT_STATUSBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH0_INT_STATUSBITS;
sfr far volatile typeDMA_CH0_INT_STATUSBITS DMA_CH0_INT_STATUSbits absolute 0x40002424;

 typedef struct tagDMA_CH0_INT_ENBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH0_INT_ENBITS;
sfr far volatile typeDMA_CH0_INT_ENBITS DMA_CH0_INT_ENbits absolute 0x40002428;

 typedef struct tagDMA_CH1_ACTIVATEBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned : 7;
    };
  };
} typeDMA_CH1_ACTIVATEBITS;
sfr far volatile typeDMA_CH1_ACTIVATEBITS DMA_CH1_ACTIVATEbits absolute 0x40002430;

 typedef struct tagDMA_CH1_CONTROLBITS {
  union {
    struct {
      unsigned RUN : 1;
      unsigned REQUEST : 1;
      unsigned DONE : 1;
      unsigned STATUS : 2;
      unsigned BUSY : 1;
      unsigned : 2;
      unsigned TX_DIRECTION : 1;
      unsigned HARDWARE_FLOW_CONTROL_DEVICE : 7;
      unsigned INCREMENT_MEM_ADDR : 1;
      unsigned INCREMENT_DEVICE_ADDR : 1;
      unsigned LOCK_ : 1;
      unsigned DISABLE_HW_FLOW_CONTROL : 1;
      unsigned TRANSFER_SIZE : 3;
      unsigned : 1;
      unsigned TRANSFER_GO : 1;
      unsigned TRANSFER_ABORT : 1;
      unsigned : 6;
    };
  };
} typeDMA_CH1_CONTROLBITS;
sfr far volatile typeDMA_CH1_CONTROLBITS DMA_CH1_CONTROLbits absolute 0x40002440;

 typedef struct tagDMA_CH1_INT_STATUSBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH1_INT_STATUSBITS;
sfr far volatile typeDMA_CH1_INT_STATUSBITS DMA_CH1_INT_STATUSbits absolute 0x40002444;

 typedef struct tagDMA_CH1_INT_ENBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH1_INT_ENBITS;
sfr far volatile typeDMA_CH1_INT_ENBITS DMA_CH1_INT_ENbits absolute 0x40002448;

 typedef struct tagDMA_CH2_ACTIVATEBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned : 7;
    };
  };
} typeDMA_CH2_ACTIVATEBITS;
sfr far volatile typeDMA_CH2_ACTIVATEBITS DMA_CH2_ACTIVATEbits absolute 0x40002450;

 typedef struct tagDMA_CH2_CONTROLBITS {
  union {
    struct {
      unsigned RUN : 1;
      unsigned REQUEST : 1;
      unsigned DONE : 1;
      unsigned STATUS : 2;
      unsigned BUSY : 1;
      unsigned : 2;
      unsigned TX_DIRECTION : 1;
      unsigned HARDWARE_FLOW_CONTROL_DEVICE : 7;
      unsigned INCREMENT_MEM_ADDR : 1;
      unsigned INCREMENT_DEVICE_ADDR : 1;
      unsigned LOCK_ : 1;
      unsigned DISABLE_HW_FLOW_CONTROL : 1;
      unsigned TRANSFER_SIZE : 3;
      unsigned : 1;
      unsigned TRANSFER_GO : 1;
      unsigned TRANSFER_ABORT : 1;
      unsigned : 6;
    };
  };
} typeDMA_CH2_CONTROLBITS;
sfr far volatile typeDMA_CH2_CONTROLBITS DMA_CH2_CONTROLbits absolute 0x40002460;

 typedef struct tagDMA_CH2_INT_STATUSBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH2_INT_STATUSBITS;
sfr far volatile typeDMA_CH2_INT_STATUSBITS DMA_CH2_INT_STATUSbits absolute 0x40002464;

 typedef struct tagDMA_CH2_INT_ENBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH2_INT_ENBITS;
sfr far volatile typeDMA_CH2_INT_ENBITS DMA_CH2_INT_ENbits absolute 0x40002468;

 typedef struct tagDMA_CH3_ACTIVATEBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned : 7;
    };
  };
} typeDMA_CH3_ACTIVATEBITS;
sfr far volatile typeDMA_CH3_ACTIVATEBITS DMA_CH3_ACTIVATEbits absolute 0x40002470;

 typedef struct tagDMA_CH3_CONTROLBITS {
  union {
    struct {
      unsigned RUN : 1;
      unsigned REQUEST : 1;
      unsigned DONE : 1;
      unsigned STATUS : 2;
      unsigned BUSY : 1;
      unsigned : 2;
      unsigned TX_DIRECTION : 1;
      unsigned HARDWARE_FLOW_CONTROL_DEVICE : 7;
      unsigned INCREMENT_MEM_ADDR : 1;
      unsigned INCREMENT_DEVICE_ADDR : 1;
      unsigned LOCK_ : 1;
      unsigned DISABLE_HW_FLOW_CONTROL : 1;
      unsigned TRANSFER_SIZE : 3;
      unsigned : 1;
      unsigned TRANSFER_GO : 1;
      unsigned TRANSFER_ABORT : 1;
      unsigned : 6;
    };
  };
} typeDMA_CH3_CONTROLBITS;
sfr far volatile typeDMA_CH3_CONTROLBITS DMA_CH3_CONTROLbits absolute 0x40002480;

 typedef struct tagDMA_CH3_INT_STATUSBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH3_INT_STATUSBITS;
sfr far volatile typeDMA_CH3_INT_STATUSBITS DMA_CH3_INT_STATUSbits absolute 0x40002484;

 typedef struct tagDMA_CH3_INT_ENBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH3_INT_ENBITS;
sfr far volatile typeDMA_CH3_INT_ENBITS DMA_CH3_INT_ENbits absolute 0x40002488;

 typedef struct tagDMA_CH4_ACTIVATEBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned : 7;
    };
  };
} typeDMA_CH4_ACTIVATEBITS;
sfr far volatile typeDMA_CH4_ACTIVATEBITS DMA_CH4_ACTIVATEbits absolute 0x40002490;

 typedef struct tagDMA_CH4_CONTROLBITS {
  union {
    struct {
      unsigned RUN : 1;
      unsigned REQUEST : 1;
      unsigned DONE : 1;
      unsigned STATUS : 2;
      unsigned BUSY : 1;
      unsigned : 2;
      unsigned TX_DIRECTION : 1;
      unsigned HARDWARE_FLOW_CONTROL_DEVICE : 7;
      unsigned INCREMENT_MEM_ADDR : 1;
      unsigned INCREMENT_DEVICE_ADDR : 1;
      unsigned LOCK_ : 1;
      unsigned DISABLE_HW_FLOW_CONTROL : 1;
      unsigned TRANSFER_SIZE : 3;
      unsigned : 1;
      unsigned TRANSFER_GO : 1;
      unsigned TRANSFER_ABORT : 1;
      unsigned : 6;
    };
  };
} typeDMA_CH4_CONTROLBITS;
sfr far volatile typeDMA_CH4_CONTROLBITS DMA_CH4_CONTROLbits absolute 0x400024A0;

 typedef struct tagDMA_CH4_INT_STATUSBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH4_INT_STATUSBITS;
sfr far volatile typeDMA_CH4_INT_STATUSBITS DMA_CH4_INT_STATUSbits absolute 0x400024A4;

 typedef struct tagDMA_CH4_INT_ENBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH4_INT_ENBITS;
sfr far volatile typeDMA_CH4_INT_ENBITS DMA_CH4_INT_ENbits absolute 0x400024A8;

 typedef struct tagDMA_CH5_ACTIVATEBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned : 7;
    };
  };
} typeDMA_CH5_ACTIVATEBITS;
sfr far volatile typeDMA_CH5_ACTIVATEBITS DMA_CH5_ACTIVATEbits absolute 0x400024B0;

 typedef struct tagDMA_CH5_CONTROLBITS {
  union {
    struct {
      unsigned RUN : 1;
      unsigned REQUEST : 1;
      unsigned DONE : 1;
      unsigned STATUS : 2;
      unsigned BUSY : 1;
      unsigned : 2;
      unsigned TX_DIRECTION : 1;
      unsigned HARDWARE_FLOW_CONTROL_DEVICE : 7;
      unsigned INCREMENT_MEM_ADDR : 1;
      unsigned INCREMENT_DEVICE_ADDR : 1;
      unsigned LOCK_ : 1;
      unsigned DISABLE_HW_FLOW_CONTROL : 1;
      unsigned TRANSFER_SIZE : 3;
      unsigned : 1;
      unsigned TRANSFER_GO : 1;
      unsigned TRANSFER_ABORT : 1;
      unsigned : 6;
    };
  };
} typeDMA_CH5_CONTROLBITS;
sfr far volatile typeDMA_CH5_CONTROLBITS DMA_CH5_CONTROLbits absolute 0x400024C0;

 typedef struct tagDMA_CH5_INT_STATUSBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH5_INT_STATUSBITS;
sfr far volatile typeDMA_CH5_INT_STATUSBITS DMA_CH5_INT_STATUSbits absolute 0x400024C4;

 typedef struct tagDMA_CH5_INT_ENBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH5_INT_ENBITS;
sfr far volatile typeDMA_CH5_INT_ENBITS DMA_CH5_INT_ENbits absolute 0x400024C8;

 typedef struct tagDMA_CH6_ACTIVATEBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned : 7;
    };
  };
} typeDMA_CH6_ACTIVATEBITS;
sfr far volatile typeDMA_CH6_ACTIVATEBITS DMA_CH6_ACTIVATEbits absolute 0x400024D0;

 typedef struct tagDMA_CH6_CONTROLBITS {
  union {
    struct {
      unsigned RUN : 1;
      unsigned REQUEST : 1;
      unsigned DONE : 1;
      unsigned STATUS : 2;
      unsigned BUSY : 1;
      unsigned : 2;
      unsigned TX_DIRECTION : 1;
      unsigned HARDWARE_FLOW_CONTROL_DEVICE : 7;
      unsigned INCREMENT_MEM_ADDR : 1;
      unsigned INCREMENT_DEVICE_ADDR : 1;
      unsigned LOCK_ : 1;
      unsigned DISABLE_HW_FLOW_CONTROL : 1;
      unsigned TRANSFER_SIZE : 3;
      unsigned : 1;
      unsigned TRANSFER_GO : 1;
      unsigned TRANSFER_ABORT : 1;
      unsigned : 6;
    };
  };
} typeDMA_CH6_CONTROLBITS;
sfr far volatile typeDMA_CH6_CONTROLBITS DMA_CH6_CONTROLbits absolute 0x400024E0;

 typedef struct tagDMA_CH6_INT_STATUSBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH6_INT_STATUSBITS;
sfr far volatile typeDMA_CH6_INT_STATUSBITS DMA_CH6_INT_STATUSbits absolute 0x400024E4;

 typedef struct tagDMA_CH6_INT_ENBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH6_INT_ENBITS;
sfr far volatile typeDMA_CH6_INT_ENBITS DMA_CH6_INT_ENbits absolute 0x400024E8;

 typedef struct tagDMA_CH7_ACTIVATEBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned : 7;
    };
  };
} typeDMA_CH7_ACTIVATEBITS;
sfr far volatile typeDMA_CH7_ACTIVATEBITS DMA_CH7_ACTIVATEbits absolute 0x400024F0;

 typedef struct tagDMA_CH7_CONTROLBITS {
  union {
    struct {
      unsigned RUN : 1;
      unsigned REQUEST : 1;
      unsigned DONE : 1;
      unsigned STATUS : 2;
      unsigned BUSY : 1;
      unsigned : 2;
      unsigned TX_DIRECTION : 1;
      unsigned HARDWARE_FLOW_CONTROL_DEVICE : 7;
      unsigned INCREMENT_MEM_ADDR : 1;
      unsigned INCREMENT_DEVICE_ADDR : 1;
      unsigned LOCK_ : 1;
      unsigned DISABLE_HW_FLOW_CONTROL : 1;
      unsigned TRANSFER_SIZE : 3;
      unsigned : 1;
      unsigned TRANSFER_GO : 1;
      unsigned TRANSFER_ABORT : 1;
      unsigned : 6;
    };
  };
} typeDMA_CH7_CONTROLBITS;
sfr far volatile typeDMA_CH7_CONTROLBITS DMA_CH7_CONTROLbits absolute 0x40002500;

 typedef struct tagDMA_CH7_INT_STATUSBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH7_INT_STATUSBITS;
sfr far volatile typeDMA_CH7_INT_STATUSBITS DMA_CH7_INT_STATUSbits absolute 0x40002504;

 typedef struct tagDMA_CH7_INT_ENBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH7_INT_ENBITS;
sfr far volatile typeDMA_CH7_INT_ENBITS DMA_CH7_INT_ENbits absolute 0x40002508;

 typedef struct tagDMA_CH8_ACTIVATEBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned : 7;
    };
  };
} typeDMA_CH8_ACTIVATEBITS;
sfr far volatile typeDMA_CH8_ACTIVATEBITS DMA_CH8_ACTIVATEbits absolute 0x40002510;

 typedef struct tagDMA_CH8_CONTROLBITS {
  union {
    struct {
      unsigned RUN : 1;
      unsigned REQUEST : 1;
      unsigned DONE : 1;
      unsigned STATUS : 2;
      unsigned BUSY : 1;
      unsigned : 2;
      unsigned TX_DIRECTION : 1;
      unsigned HARDWARE_FLOW_CONTROL_DEVICE : 7;
      unsigned INCREMENT_MEM_ADDR : 1;
      unsigned INCREMENT_DEVICE_ADDR : 1;
      unsigned LOCK_ : 1;
      unsigned DISABLE_HW_FLOW_CONTROL : 1;
      unsigned TRANSFER_SIZE : 3;
      unsigned : 1;
      unsigned TRANSFER_GO : 1;
      unsigned TRANSFER_ABORT : 1;
      unsigned : 6;
    };
  };
} typeDMA_CH8_CONTROLBITS;
sfr far volatile typeDMA_CH8_CONTROLBITS DMA_CH8_CONTROLbits absolute 0x40002520;

 typedef struct tagDMA_CH8_INT_STATUSBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH8_INT_STATUSBITS;
sfr far volatile typeDMA_CH8_INT_STATUSBITS DMA_CH8_INT_STATUSbits absolute 0x40002524;

 typedef struct tagDMA_CH8_INT_ENBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH8_INT_ENBITS;
sfr far volatile typeDMA_CH8_INT_ENBITS DMA_CH8_INT_ENbits absolute 0x40002528;

 typedef struct tagDMA_CH9_ACTIVATEBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned : 7;
    };
  };
} typeDMA_CH9_ACTIVATEBITS;
sfr far volatile typeDMA_CH9_ACTIVATEBITS DMA_CH9_ACTIVATEbits absolute 0x40002530;

 typedef struct tagDMA_CH9_CONTROLBITS {
  union {
    struct {
      unsigned RUN : 1;
      unsigned REQUEST : 1;
      unsigned DONE : 1;
      unsigned STATUS : 2;
      unsigned BUSY : 1;
      unsigned : 2;
      unsigned TX_DIRECTION : 1;
      unsigned HARDWARE_FLOW_CONTROL_DEVICE : 7;
      unsigned INCREMENT_MEM_ADDR : 1;
      unsigned INCREMENT_DEVICE_ADDR : 1;
      unsigned LOCK_ : 1;
      unsigned DISABLE_HW_FLOW_CONTROL : 1;
      unsigned TRANSFER_SIZE : 3;
      unsigned : 1;
      unsigned TRANSFER_GO : 1;
      unsigned TRANSFER_ABORT : 1;
      unsigned : 6;
    };
  };
} typeDMA_CH9_CONTROLBITS;
sfr far volatile typeDMA_CH9_CONTROLBITS DMA_CH9_CONTROLbits absolute 0x40002540;

 typedef struct tagDMA_CH9_INT_STATUSBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH9_INT_STATUSBITS;
sfr far volatile typeDMA_CH9_INT_STATUSBITS DMA_CH9_INT_STATUSbits absolute 0x40002544;

 typedef struct tagDMA_CH9_INT_ENBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH9_INT_ENBITS;
sfr far volatile typeDMA_CH9_INT_ENBITS DMA_CH9_INT_ENbits absolute 0x40002548;

 typedef struct tagDMA_CH10_ACTIVATEBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned : 7;
    };
  };
} typeDMA_CH10_ACTIVATEBITS;
sfr far volatile typeDMA_CH10_ACTIVATEBITS DMA_CH10_ACTIVATEbits absolute 0x40002550;

 typedef struct tagDMA_CH10_CONTROLBITS {
  union {
    struct {
      unsigned RUN : 1;
      unsigned REQUEST : 1;
      unsigned DONE : 1;
      unsigned STATUS : 2;
      unsigned BUSY : 1;
      unsigned : 2;
      unsigned TX_DIRECTION : 1;
      unsigned HARDWARE_FLOW_CONTROL_DEVICE : 7;
      unsigned INCREMENT_MEM_ADDR : 1;
      unsigned INCREMENT_DEVICE_ADDR : 1;
      unsigned LOCK_ : 1;
      unsigned DISABLE_HW_FLOW_CONTROL : 1;
      unsigned TRANSFER_SIZE : 3;
      unsigned : 1;
      unsigned TRANSFER_GO : 1;
      unsigned TRANSFER_ABORT : 1;
      unsigned : 6;
    };
  };
} typeDMA_CH10_CONTROLBITS;
sfr far volatile typeDMA_CH10_CONTROLBITS DMA_CH10_CONTROLbits absolute 0x40002560;

 typedef struct tagDMA_CH10_INT_STATUSBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH10_INT_STATUSBITS;
sfr far volatile typeDMA_CH10_INT_STATUSBITS DMA_CH10_INT_STATUSbits absolute 0x40002564;

 typedef struct tagDMA_CH10_INT_ENBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH10_INT_ENBITS;
sfr far volatile typeDMA_CH10_INT_ENBITS DMA_CH10_INT_ENbits absolute 0x40002568;

 typedef struct tagDMA_CH11_ACTIVATEBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned : 7;
    };
  };
} typeDMA_CH11_ACTIVATEBITS;
sfr far volatile typeDMA_CH11_ACTIVATEBITS DMA_CH11_ACTIVATEbits absolute 0x40002570;

 typedef struct tagDMA_CH11_CONTROLBITS {
  union {
    struct {
      unsigned RUN : 1;
      unsigned REQUEST : 1;
      unsigned DONE : 1;
      unsigned STATUS : 2;
      unsigned BUSY : 1;
      unsigned : 2;
      unsigned TX_DIRECTION : 1;
      unsigned HARDWARE_FLOW_CONTROL_DEVICE : 7;
      unsigned INCREMENT_MEM_ADDR : 1;
      unsigned INCREMENT_DEVICE_ADDR : 1;
      unsigned LOCK_ : 1;
      unsigned DISABLE_HW_FLOW_CONTROL : 1;
      unsigned TRANSFER_SIZE : 3;
      unsigned : 1;
      unsigned TRANSFER_GO : 1;
      unsigned TRANSFER_ABORT : 1;
      unsigned : 6;
    };
  };
} typeDMA_CH11_CONTROLBITS;
sfr far volatile typeDMA_CH11_CONTROLBITS DMA_CH11_CONTROLbits absolute 0x40002580;

 typedef struct tagDMA_CH11_INT_STATUSBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH11_INT_STATUSBITS;
sfr far volatile typeDMA_CH11_INT_STATUSBITS DMA_CH11_INT_STATUSbits absolute 0x40002584;

 typedef struct tagDMA_CH11_INT_ENBITS {
  union {
    struct {
      unsigned BUS_ERROR : 1;
      unsigned FLOW_CONTROL : 1;
      unsigned DONE : 1;
      unsigned : 5;
    };
  };
} typeDMA_CH11_INT_ENBITS;
sfr far volatile typeDMA_CH11_INT_ENBITS DMA_CH11_INT_ENbits absolute 0x40002588;

 typedef struct tagSMB0_CONTROLBITS {
  union {
    struct {
      unsigned ACK : 1;
      unsigned STO : 1;
      unsigned STA : 1;
      unsigned ENI : 1;
      unsigned : 2;
      unsigned ESO : 1;
      unsigned PIN : 1;
    };
  };
} typeSMB0_CONTROLBITS;
sfr far volatile typeSMB0_CONTROLBITS SMB0_CONTROLbits absolute 0x40001800;

 typedef struct tagSMB0_STATUSBITS {
  union {
    struct {
      unsigned nBB : 1;
      unsigned LAB : 1;
      unsigned AAS : 1;
      unsigned LRB_AD0 : 1;
      unsigned BER : 1;
      unsigned STS : 1;
      unsigned SAD : 1;
      unsigned PIN : 1;
    };
  };
} typeSMB0_STATUSBITS;
sfr far volatile typeSMB0_STATUSBITS SMB0_STATUSbits absolute 0x40001800;

 typedef struct tagSMB0_OWNBITS {
  union {
    struct {
      unsigned ADDRESS_1 : 7;
      unsigned : 1;
      unsigned ADDRESS_2 : 7;
      unsigned : 1;
    };
  };
} typeSMB0_OWNBITS;
sfr far volatile typeSMB0_OWNBITS SMB0_OWNbits absolute 0x40001804;

 typedef struct tagSMB0_MASTER_COMMANDBITS {
  union {
    struct {
      unsigned MRUN : 1;
      unsigned MPROCEED : 1;
      unsigned : 6;
      unsigned START0 : 1;
      unsigned STARTN : 1;
      unsigned STOP_ : 1;
      unsigned PEC_TERM : 1;
      unsigned READM : 1;
      unsigned READ_PEC : 1;
      unsigned : 2;
      unsigned WRITECOUNT : 8;
      unsigned READCOUNT : 8;
    };
  };
} typeSMB0_MASTER_COMMANDBITS;
sfr far volatile typeSMB0_MASTER_COMMANDBITS SMB0_MASTER_COMMANDbits absolute 0x4000180C;

 typedef struct tagSMB0_SLAVE_COMMANDBITS {
  union {
    struct {
      unsigned SRUN : 1;
      unsigned SPROCEED : 1;
      unsigned SLAVE_PEC : 1;
      unsigned : 5;
      unsigned SLAVE_WRITECOUNT : 8;
      unsigned SLAVE_READCOUNT : 8;
      unsigned : 8;
    };
  };
} typeSMB0_SLAVE_COMMANDBITS;
sfr far volatile typeSMB0_SLAVE_COMMANDBITS SMB0_SLAVE_COMMANDbits absolute 0x40001810;

 typedef struct tagSMB0_COMPLETIONBITS {
  union {
    struct {
      unsigned : 2;
      unsigned DTEN : 1;
      unsigned MCEN : 1;
      unsigned SCEN : 1;
      unsigned BIDEN : 1;
      unsigned TIMERR : 1;
      unsigned : 1;
      unsigned DTO : 1;
      unsigned MCTO : 1;
      unsigned SCTO : 1;
      unsigned CHDL : 1;
      unsigned CHDH : 1;
      unsigned BER : 1;
      unsigned LAB : 1;
      unsigned : 1;
      unsigned SNAKR : 1;
      unsigned STR_ : 1;
      unsigned : 1;
      unsigned SPROT : 1;
      unsigned REPEAT_READ : 1;
      unsigned REPEAT_WRITE : 1;
      unsigned : 2;
      unsigned MNAKX : 1;
      unsigned MTR : 1;
      unsigned : 3;
      unsigned IDLE : 1;
      unsigned MDONE : 1;
      unsigned SDONE : 1;
    };
  };
} typeSMB0_COMPLETIONBITS;
sfr far volatile typeSMB0_COMPLETIONBITS SMB0_COMPLETIONbits absolute 0x40001820;

 typedef struct tagSMB0_IDLE_SCALINGBITS {
  union {
    struct {
      unsigned FAIR_BUS_IDLE_MIN : 12;
      unsigned : 4;
      unsigned FAIR_IDLE_DELAY : 12;
      unsigned : 4;
    };
  };
} typeSMB0_IDLE_SCALINGBITS;
sfr far volatile typeSMB0_IDLE_SCALINGBITS SMB0_IDLE_SCALINGbits absolute 0x40001824;

 typedef struct tagSMB0_CONFIGURATIONBITS {
  union {
    struct {
      unsigned PORT_SEL : 4;
      unsigned TCEN : 1;
      unsigned SLOW_CLOCK : 1;
      unsigned : 1;
      unsigned PECEN : 1;
      unsigned DFEN : 1;
      unsigned RESET_ : 1;
      unsigned ENAB : 1;
      unsigned DSA : 1;
      unsigned FAIR : 1;
      unsigned : 1;
      unsigned GC_DIS : 1;
      unsigned : 1;
      unsigned FLUSH_SXBUF : 1;
      unsigned FLUSH_SRBUF : 1;
      unsigned FLUSH_MXBUF : 1;
      unsigned FLUSH_MRBUF : 1;
      unsigned : 8;
      unsigned EN_AAS : 1;
      unsigned ENIDI : 1;
      unsigned ENMI : 1;
      unsigned ENSI : 1;
    };
  };
} typeSMB0_CONFIGURATIONBITS;
sfr far volatile typeSMB0_CONFIGURATIONBITS SMB0_CONFIGURATIONbits absolute 0x40001828;

 typedef struct tagSMB0_BUS_CLOCKBITS {
  union {
    struct {
      unsigned LOW_PERIOD : 8;
      unsigned HIGH_PERIOD : 8;
    };
  };
} typeSMB0_BUS_CLOCKBITS;
sfr far volatile typeSMB0_BUS_CLOCKBITS SMB0_BUS_CLOCKbits absolute 0x4000182C;

 typedef struct tagSMB0_BIT_BANG_CONTROLBITS {
  union {
    struct {
      unsigned BBEN : 1;
      unsigned CLDIR : 1;
      unsigned DADIR : 1;
      unsigned BBCLK : 1;
      unsigned BBDAT : 1;
      unsigned BBCLKI : 1;
      unsigned BBDATI : 1;
      unsigned : 1;
    };
  };
} typeSMB0_BIT_BANG_CONTROLBITS;
sfr far volatile typeSMB0_BIT_BANG_CONTROLBITS SMB0_BIT_BANG_CONTROLbits absolute 0x40001838;

 typedef struct tagSMB0_DATA_TIMINGBITS {
  union {
    struct {
      unsigned DATA_HOLD : 8;
      unsigned RESTART_SETUP : 8;
      unsigned STOP_SETUP : 8;
      unsigned START_HOLD : 8;
    };
  };
} typeSMB0_DATA_TIMINGBITS;
sfr far volatile typeSMB0_DATA_TIMINGBITS SMB0_DATA_TIMINGbits absolute 0x40001840;

 typedef struct tagSMB0_TIME_OUT_SCALINGBITS {
  union {
    struct {
      unsigned CLOCK_HIGH : 8;
      unsigned SLAVE_CUM : 8;
      unsigned MASTER_CUM : 8;
      unsigned BUS_IDLE_MIN : 8;
    };
  };
} typeSMB0_TIME_OUT_SCALINGBITS;
sfr far volatile typeSMB0_TIME_OUT_SCALINGBITS SMB0_TIME_OUT_SCALINGbits absolute 0x40001844;

 typedef struct tagSMB1_CONTROLBITS {
  union {
    struct {
      unsigned ACK : 1;
      unsigned STO : 1;
      unsigned STA : 1;
      unsigned ENI : 1;
      unsigned : 2;
      unsigned ESO : 1;
      unsigned PIN : 1;
    };
  };
} typeSMB1_CONTROLBITS;
sfr far volatile typeSMB1_CONTROLBITS SMB1_CONTROLbits absolute 0x4000AC00;

 typedef struct tagSMB1_STATUSBITS {
  union {
    struct {
      unsigned nBB : 1;
      unsigned LAB : 1;
      unsigned AAS : 1;
      unsigned LRB_AD0 : 1;
      unsigned BER : 1;
      unsigned STS : 1;
      unsigned SAD : 1;
      unsigned PIN : 1;
    };
  };
} typeSMB1_STATUSBITS;
sfr far volatile typeSMB1_STATUSBITS SMB1_STATUSbits absolute 0x4000AC00;

 typedef struct tagSMB1_OWNBITS {
  union {
    struct {
      unsigned ADDRESS_1 : 7;
      unsigned : 1;
      unsigned ADDRESS_2 : 7;
      unsigned : 1;
    };
  };
} typeSMB1_OWNBITS;
sfr far volatile typeSMB1_OWNBITS SMB1_OWNbits absolute 0x4000AC04;

 typedef struct tagSMB1_MASTER_COMMANDBITS {
  union {
    struct {
      unsigned MRUN : 1;
      unsigned MPROCEED : 1;
      unsigned : 6;
      unsigned START0 : 1;
      unsigned STARTN : 1;
      unsigned STOP_ : 1;
      unsigned PEC_TERM : 1;
      unsigned READM : 1;
      unsigned READ_PEC : 1;
      unsigned : 2;
      unsigned WRITECOUNT : 8;
      unsigned READCOUNT : 8;
    };
  };
} typeSMB1_MASTER_COMMANDBITS;
sfr far volatile typeSMB1_MASTER_COMMANDBITS SMB1_MASTER_COMMANDbits absolute 0x4000AC0C;

 typedef struct tagSMB1_SLAVE_COMMANDBITS {
  union {
    struct {
      unsigned SRUN : 1;
      unsigned SPROCEED : 1;
      unsigned SLAVE_PEC : 1;
      unsigned : 5;
      unsigned SLAVE_WRITECOUNT : 8;
      unsigned SLAVE_READCOUNT : 8;
      unsigned : 8;
    };
  };
} typeSMB1_SLAVE_COMMANDBITS;
sfr far volatile typeSMB1_SLAVE_COMMANDBITS SMB1_SLAVE_COMMANDbits absolute 0x4000AC10;

 typedef struct tagSMB1_COMPLETIONBITS {
  union {
    struct {
      unsigned : 2;
      unsigned DTEN : 1;
      unsigned MCEN : 1;
      unsigned SCEN : 1;
      unsigned BIDEN : 1;
      unsigned TIMERR : 1;
      unsigned : 1;
      unsigned DTO : 1;
      unsigned MCTO : 1;
      unsigned SCTO : 1;
      unsigned CHDL : 1;
      unsigned CHDH : 1;
      unsigned BER : 1;
      unsigned LAB : 1;
      unsigned : 1;
      unsigned SNAKR : 1;
      unsigned STR_ : 1;
      unsigned : 1;
      unsigned SPROT : 1;
      unsigned REPEAT_READ : 1;
      unsigned REPEAT_WRITE : 1;
      unsigned : 2;
      unsigned MNAKX : 1;
      unsigned MTR : 1;
      unsigned : 3;
      unsigned IDLE : 1;
      unsigned MDONE : 1;
      unsigned SDONE : 1;
    };
  };
} typeSMB1_COMPLETIONBITS;
sfr far volatile typeSMB1_COMPLETIONBITS SMB1_COMPLETIONbits absolute 0x4000AC20;

 typedef struct tagSMB1_IDLE_SCALINGBITS {
  union {
    struct {
      unsigned FAIR_BUS_IDLE_MIN : 12;
      unsigned : 4;
      unsigned FAIR_IDLE_DELAY : 12;
      unsigned : 4;
    };
  };
} typeSMB1_IDLE_SCALINGBITS;
sfr far volatile typeSMB1_IDLE_SCALINGBITS SMB1_IDLE_SCALINGbits absolute 0x4000AC24;

 typedef struct tagSMB1_CONFIGURATIONBITS {
  union {
    struct {
      unsigned PORT_SEL : 4;
      unsigned TCEN : 1;
      unsigned SLOW_CLOCK : 1;
      unsigned : 1;
      unsigned PECEN : 1;
      unsigned DFEN : 1;
      unsigned RESET_ : 1;
      unsigned ENAB : 1;
      unsigned DSA : 1;
      unsigned FAIR : 1;
      unsigned : 1;
      unsigned GC_DIS : 1;
      unsigned : 1;
      unsigned FLUSH_SXBUF : 1;
      unsigned FLUSH_SRBUF : 1;
      unsigned FLUSH_MXBUF : 1;
      unsigned FLUSH_MRBUF : 1;
      unsigned : 8;
      unsigned EN_AAS : 1;
      unsigned ENIDI : 1;
      unsigned ENMI : 1;
      unsigned ENSI : 1;
    };
  };
} typeSMB1_CONFIGURATIONBITS;
sfr far volatile typeSMB1_CONFIGURATIONBITS SMB1_CONFIGURATIONbits absolute 0x4000AC28;

 typedef struct tagSMB1_BUS_CLOCKBITS {
  union {
    struct {
      unsigned LOW_PERIOD : 8;
      unsigned HIGH_PERIOD : 8;
    };
  };
} typeSMB1_BUS_CLOCKBITS;
sfr far volatile typeSMB1_BUS_CLOCKBITS SMB1_BUS_CLOCKbits absolute 0x4000AC2C;

 typedef struct tagSMB1_BIT_BANG_CONTROLBITS {
  union {
    struct {
      unsigned BBEN : 1;
      unsigned CLDIR : 1;
      unsigned DADIR : 1;
      unsigned BBCLK : 1;
      unsigned BBDAT : 1;
      unsigned BBCLKI : 1;
      unsigned BBDATI : 1;
      unsigned : 1;
    };
  };
} typeSMB1_BIT_BANG_CONTROLBITS;
sfr far volatile typeSMB1_BIT_BANG_CONTROLBITS SMB1_BIT_BANG_CONTROLbits absolute 0x4000AC38;

 typedef struct tagSMB1_DATA_TIMINGBITS {
  union {
    struct {
      unsigned DATA_HOLD : 8;
      unsigned RESTART_SETUP : 8;
      unsigned STOP_SETUP : 8;
      unsigned START_HOLD : 8;
    };
  };
} typeSMB1_DATA_TIMINGBITS;
sfr far volatile typeSMB1_DATA_TIMINGBITS SMB1_DATA_TIMINGbits absolute 0x4000AC40;

 typedef struct tagSMB1_TIME_OUT_SCALINGBITS {
  union {
    struct {
      unsigned CLOCK_HIGH : 8;
      unsigned SLAVE_CUM : 8;
      unsigned MASTER_CUM : 8;
      unsigned BUS_IDLE_MIN : 8;
    };
  };
} typeSMB1_TIME_OUT_SCALINGBITS;
sfr far volatile typeSMB1_TIME_OUT_SCALINGBITS SMB1_TIME_OUT_SCALINGbits absolute 0x4000AC44;

 typedef struct tagSMB2_CONTROLBITS {
  union {
    struct {
      unsigned ACK : 1;
      unsigned STO : 1;
      unsigned STA : 1;
      unsigned ENI : 1;
      unsigned : 2;
      unsigned ESO : 1;
      unsigned PIN : 1;
    };
  };
} typeSMB2_CONTROLBITS;
sfr far volatile typeSMB2_CONTROLBITS SMB2_CONTROLbits absolute 0x4000B000;

 typedef struct tagSMB2_STATUSBITS {
  union {
    struct {
      unsigned nBB : 1;
      unsigned LAB : 1;
      unsigned AAS : 1;
      unsigned LRB_AD0 : 1;
      unsigned BER : 1;
      unsigned STS : 1;
      unsigned SAD : 1;
      unsigned PIN : 1;
    };
  };
} typeSMB2_STATUSBITS;
sfr far volatile typeSMB2_STATUSBITS SMB2_STATUSbits absolute 0x4000B000;

 typedef struct tagSMB2_OWNBITS {
  union {
    struct {
      unsigned ADDRESS_1 : 7;
      unsigned : 1;
      unsigned ADDRESS_2 : 7;
      unsigned : 1;
    };
  };
} typeSMB2_OWNBITS;
sfr far volatile typeSMB2_OWNBITS SMB2_OWNbits absolute 0x4000B004;

 typedef struct tagSMB2_MASTER_COMMANDBITS {
  union {
    struct {
      unsigned MRUN : 1;
      unsigned MPROCEED : 1;
      unsigned : 6;
      unsigned START0 : 1;
      unsigned STARTN : 1;
      unsigned STOP_ : 1;
      unsigned PEC_TERM : 1;
      unsigned READM : 1;
      unsigned READ_PEC : 1;
      unsigned : 2;
      unsigned WRITECOUNT : 8;
      unsigned READCOUNT : 8;
    };
  };
} typeSMB2_MASTER_COMMANDBITS;
sfr far volatile typeSMB2_MASTER_COMMANDBITS SMB2_MASTER_COMMANDbits absolute 0x4000B00C;

 typedef struct tagSMB2_SLAVE_COMMANDBITS {
  union {
    struct {
      unsigned SRUN : 1;
      unsigned SPROCEED : 1;
      unsigned SLAVE_PEC : 1;
      unsigned : 5;
      unsigned SLAVE_WRITECOUNT : 8;
      unsigned SLAVE_READCOUNT : 8;
      unsigned : 8;
    };
  };
} typeSMB2_SLAVE_COMMANDBITS;
sfr far volatile typeSMB2_SLAVE_COMMANDBITS SMB2_SLAVE_COMMANDbits absolute 0x4000B010;

 typedef struct tagSMB2_COMPLETIONBITS {
  union {
    struct {
      unsigned : 2;
      unsigned DTEN : 1;
      unsigned MCEN : 1;
      unsigned SCEN : 1;
      unsigned BIDEN : 1;
      unsigned TIMERR : 1;
      unsigned : 1;
      unsigned DTO : 1;
      unsigned MCTO : 1;
      unsigned SCTO : 1;
      unsigned CHDL : 1;
      unsigned CHDH : 1;
      unsigned BER : 1;
      unsigned LAB : 1;
      unsigned : 1;
      unsigned SNAKR : 1;
      unsigned STR_ : 1;
      unsigned : 1;
      unsigned SPROT : 1;
      unsigned REPEAT_READ : 1;
      unsigned REPEAT_WRITE : 1;
      unsigned : 2;
      unsigned MNAKX : 1;
      unsigned MTR : 1;
      unsigned : 3;
      unsigned IDLE : 1;
      unsigned MDONE : 1;
      unsigned SDONE : 1;
    };
  };
} typeSMB2_COMPLETIONBITS;
sfr far volatile typeSMB2_COMPLETIONBITS SMB2_COMPLETIONbits absolute 0x4000B020;

 typedef struct tagSMB2_IDLE_SCALINGBITS {
  union {
    struct {
      unsigned FAIR_BUS_IDLE_MIN : 12;
      unsigned : 4;
      unsigned FAIR_IDLE_DELAY : 12;
      unsigned : 4;
    };
  };
} typeSMB2_IDLE_SCALINGBITS;
sfr far volatile typeSMB2_IDLE_SCALINGBITS SMB2_IDLE_SCALINGbits absolute 0x4000B024;

 typedef struct tagSMB2_CONFIGURATIONBITS {
  union {
    struct {
      unsigned PORT_SEL : 4;
      unsigned TCEN : 1;
      unsigned SLOW_CLOCK : 1;
      unsigned : 1;
      unsigned PECEN : 1;
      unsigned DFEN : 1;
      unsigned RESET_ : 1;
      unsigned ENAB : 1;
      unsigned DSA : 1;
      unsigned FAIR : 1;
      unsigned : 1;
      unsigned GC_DIS : 1;
      unsigned : 1;
      unsigned FLUSH_SXBUF : 1;
      unsigned FLUSH_SRBUF : 1;
      unsigned FLUSH_MXBUF : 1;
      unsigned FLUSH_MRBUF : 1;
      unsigned : 8;
      unsigned EN_AAS : 1;
      unsigned ENIDI : 1;
      unsigned ENMI : 1;
      unsigned ENSI : 1;
    };
  };
} typeSMB2_CONFIGURATIONBITS;
sfr far volatile typeSMB2_CONFIGURATIONBITS SMB2_CONFIGURATIONbits absolute 0x4000B028;

 typedef struct tagSMB2_BUS_CLOCKBITS {
  union {
    struct {
      unsigned LOW_PERIOD : 8;
      unsigned HIGH_PERIOD : 8;
    };
  };
} typeSMB2_BUS_CLOCKBITS;
sfr far volatile typeSMB2_BUS_CLOCKBITS SMB2_BUS_CLOCKbits absolute 0x4000B02C;

 typedef struct tagSMB2_BIT_BANG_CONTROLBITS {
  union {
    struct {
      unsigned BBEN : 1;
      unsigned CLDIR : 1;
      unsigned DADIR : 1;
      unsigned BBCLK : 1;
      unsigned BBDAT : 1;
      unsigned BBCLKI : 1;
      unsigned BBDATI : 1;
      unsigned : 1;
    };
  };
} typeSMB2_BIT_BANG_CONTROLBITS;
sfr far volatile typeSMB2_BIT_BANG_CONTROLBITS SMB2_BIT_BANG_CONTROLbits absolute 0x4000B038;

 typedef struct tagSMB2_DATA_TIMINGBITS {
  union {
    struct {
      unsigned DATA_HOLD : 8;
      unsigned RESTART_SETUP : 8;
      unsigned STOP_SETUP : 8;
      unsigned START_HOLD : 8;
    };
  };
} typeSMB2_DATA_TIMINGBITS;
sfr far volatile typeSMB2_DATA_TIMINGBITS SMB2_DATA_TIMINGbits absolute 0x4000B040;

 typedef struct tagSMB2_TIME_OUT_SCALINGBITS {
  union {
    struct {
      unsigned CLOCK_HIGH : 8;
      unsigned SLAVE_CUM : 8;
      unsigned MASTER_CUM : 8;
      unsigned BUS_IDLE_MIN : 8;
    };
  };
} typeSMB2_TIME_OUT_SCALINGBITS;
sfr far volatile typeSMB2_TIME_OUT_SCALINGBITS SMB2_TIME_OUT_SCALINGbits absolute 0x4000B044;

 typedef struct tagSMB3_CONTROLBITS {
  union {
    struct {
      unsigned ACK : 1;
      unsigned STO : 1;
      unsigned STA : 1;
      unsigned ENI : 1;
      unsigned : 2;
      unsigned ESO : 1;
      unsigned PIN : 1;
    };
  };
} typeSMB3_CONTROLBITS;
sfr far volatile typeSMB3_CONTROLBITS SMB3_CONTROLbits absolute 0x4000B400;

 typedef struct tagSMB3_STATUSBITS {
  union {
    struct {
      unsigned nBB : 1;
      unsigned LAB : 1;
      unsigned AAS : 1;
      unsigned LRB_AD0 : 1;
      unsigned BER : 1;
      unsigned STS : 1;
      unsigned SAD : 1;
      unsigned PIN : 1;
    };
  };
} typeSMB3_STATUSBITS;
sfr far volatile typeSMB3_STATUSBITS SMB3_STATUSbits absolute 0x4000B400;

 typedef struct tagSMB3_OWNBITS {
  union {
    struct {
      unsigned ADDRESS_1 : 7;
      unsigned : 1;
      unsigned ADDRESS_2 : 7;
      unsigned : 1;
    };
  };
} typeSMB3_OWNBITS;
sfr far volatile typeSMB3_OWNBITS SMB3_OWNbits absolute 0x4000B404;

 typedef struct tagSMB3_MASTER_COMMANDBITS {
  union {
    struct {
      unsigned MRUN : 1;
      unsigned MPROCEED : 1;
      unsigned : 6;
      unsigned START0 : 1;
      unsigned STARTN : 1;
      unsigned STOP_ : 1;
      unsigned PEC_TERM : 1;
      unsigned READM : 1;
      unsigned READ_PEC : 1;
      unsigned : 2;
      unsigned WRITECOUNT : 8;
      unsigned READCOUNT : 8;
    };
  };
} typeSMB3_MASTER_COMMANDBITS;
sfr far volatile typeSMB3_MASTER_COMMANDBITS SMB3_MASTER_COMMANDbits absolute 0x4000B40C;

 typedef struct tagSMB3_SLAVE_COMMANDBITS {
  union {
    struct {
      unsigned SRUN : 1;
      unsigned SPROCEED : 1;
      unsigned SLAVE_PEC : 1;
      unsigned : 5;
      unsigned SLAVE_WRITECOUNT : 8;
      unsigned SLAVE_READCOUNT : 8;
      unsigned : 8;
    };
  };
} typeSMB3_SLAVE_COMMANDBITS;
sfr far volatile typeSMB3_SLAVE_COMMANDBITS SMB3_SLAVE_COMMANDbits absolute 0x4000B410;

 typedef struct tagSMB3_COMPLETIONBITS {
  union {
    struct {
      unsigned : 2;
      unsigned DTEN : 1;
      unsigned MCEN : 1;
      unsigned SCEN : 1;
      unsigned BIDEN : 1;
      unsigned TIMERR : 1;
      unsigned : 1;
      unsigned DTO : 1;
      unsigned MCTO : 1;
      unsigned SCTO : 1;
      unsigned CHDL : 1;
      unsigned CHDH : 1;
      unsigned BER : 1;
      unsigned LAB : 1;
      unsigned : 1;
      unsigned SNAKR : 1;
      unsigned STR_ : 1;
      unsigned : 1;
      unsigned SPROT : 1;
      unsigned REPEAT_READ : 1;
      unsigned REPEAT_WRITE : 1;
      unsigned : 2;
      unsigned MNAKX : 1;
      unsigned MTR : 1;
      unsigned : 3;
      unsigned IDLE : 1;
      unsigned MDONE : 1;
      unsigned SDONE : 1;
    };
  };
} typeSMB3_COMPLETIONBITS;
sfr far volatile typeSMB3_COMPLETIONBITS SMB3_COMPLETIONbits absolute 0x4000B420;

 typedef struct tagSMB3_IDLE_SCALINGBITS {
  union {
    struct {
      unsigned FAIR_BUS_IDLE_MIN : 12;
      unsigned : 4;
      unsigned FAIR_IDLE_DELAY : 12;
      unsigned : 4;
    };
  };
} typeSMB3_IDLE_SCALINGBITS;
sfr far volatile typeSMB3_IDLE_SCALINGBITS SMB3_IDLE_SCALINGbits absolute 0x4000B424;

 typedef struct tagSMB3_CONFIGURATIONBITS {
  union {
    struct {
      unsigned PORT_SEL : 4;
      unsigned TCEN : 1;
      unsigned SLOW_CLOCK : 1;
      unsigned : 1;
      unsigned PECEN : 1;
      unsigned DFEN : 1;
      unsigned RESET_ : 1;
      unsigned ENAB : 1;
      unsigned DSA : 1;
      unsigned FAIR : 1;
      unsigned : 1;
      unsigned GC_DIS : 1;
      unsigned : 1;
      unsigned FLUSH_SXBUF : 1;
      unsigned FLUSH_SRBUF : 1;
      unsigned FLUSH_MXBUF : 1;
      unsigned FLUSH_MRBUF : 1;
      unsigned : 8;
      unsigned EN_AAS : 1;
      unsigned ENIDI : 1;
      unsigned ENMI : 1;
      unsigned ENSI : 1;
    };
  };
} typeSMB3_CONFIGURATIONBITS;
sfr far volatile typeSMB3_CONFIGURATIONBITS SMB3_CONFIGURATIONbits absolute 0x4000B428;

 typedef struct tagSMB3_BUS_CLOCKBITS {
  union {
    struct {
      unsigned LOW_PERIOD : 8;
      unsigned HIGH_PERIOD : 8;
    };
  };
} typeSMB3_BUS_CLOCKBITS;
sfr far volatile typeSMB3_BUS_CLOCKBITS SMB3_BUS_CLOCKbits absolute 0x4000B42C;

 typedef struct tagSMB3_BIT_BANG_CONTROLBITS {
  union {
    struct {
      unsigned BBEN : 1;
      unsigned CLDIR : 1;
      unsigned DADIR : 1;
      unsigned BBCLK : 1;
      unsigned BBDAT : 1;
      unsigned BBCLKI : 1;
      unsigned BBDATI : 1;
      unsigned : 1;
    };
  };
} typeSMB3_BIT_BANG_CONTROLBITS;
sfr far volatile typeSMB3_BIT_BANG_CONTROLBITS SMB3_BIT_BANG_CONTROLbits absolute 0x4000B438;

 typedef struct tagSMB3_DATA_TIMINGBITS {
  union {
    struct {
      unsigned DATA_HOLD : 8;
      unsigned RESTART_SETUP : 8;
      unsigned STOP_SETUP : 8;
      unsigned START_HOLD : 8;
    };
  };
} typeSMB3_DATA_TIMINGBITS;
sfr far volatile typeSMB3_DATA_TIMINGBITS SMB3_DATA_TIMINGbits absolute 0x4000B440;

 typedef struct tagSMB3_TIME_OUT_SCALINGBITS {
  union {
    struct {
      unsigned CLOCK_HIGH : 8;
      unsigned SLAVE_CUM : 8;
      unsigned MASTER_CUM : 8;
      unsigned BUS_IDLE_MIN : 8;
    };
  };
} typeSMB3_TIME_OUT_SCALINGBITS;
sfr far volatile typeSMB3_TIME_OUT_SCALINGBITS SMB3_TIME_OUT_SCALINGbits absolute 0x4000B444;

 typedef struct tagPECI_CONTROLBITS {
  union {
    struct {
      unsigned PD : 1;
      unsigned : 2;
      unsigned RST : 1;
      unsigned : 1;
      unsigned FRST : 1;
      unsigned TXEN : 1;
      unsigned MIEN : 1;
    };
  };
} typePECI_CONTROLBITS;
sfr far volatile typePECI_CONTROLBITS PECI_CONTROLbits absolute 0x40006408;

 typedef struct tagPECI_STATUS1BITS {
  union {
    struct {
      unsigned BOF : 1;
      unsigned EOF_ : 1;
      unsigned ERR_ : 1;
      unsigned RDY : 1;
      unsigned RDYLO : 1;
      unsigned RDYHI : 1;
      unsigned : 1;
      unsigned MINT : 1;
    };
  };
} typePECI_STATUS1BITS;
sfr far volatile typePECI_STATUS1BITS PECI_STATUS1bits absolute 0x4000640C;

 typedef struct tagPECI_STATUS2BITS {
  union {
    struct {
      unsigned WFF : 1;
      unsigned WFE : 1;
      unsigned RFF : 1;
      unsigned RFE : 1;
      unsigned : 3;
      unsigned IDLE : 1;
    };
  };
} typePECI_STATUS2BITS;
sfr far volatile typePECI_STATUS2BITS PECI_STATUS2bits absolute 0x40006410;

 typedef struct tagPECI_ERRORBITS {
  union {
    struct {
      unsigned FERR : 1;
      unsigned BERR : 1;
      unsigned : 1;
      unsigned REQERR : 1;
      unsigned WROV : 1;
      unsigned WRUN : 1;
      unsigned RDOV : 1;
      unsigned CLKERR : 1;
    };
  };
} typePECI_ERRORBITS;
sfr far volatile typePECI_ERRORBITS PECI_ERRORbits absolute 0x40006414;

 typedef struct tagPECI_INT_EN1BITS {
  union {
    struct {
      unsigned BIEN : 1;
      unsigned EIEN : 1;
      unsigned EREN : 1;
      unsigned : 1;
      unsigned RLEN : 1;
      unsigned RHEN : 1;
      unsigned : 2;
    };
  };
} typePECI_INT_EN1BITS;
sfr far volatile typePECI_INT_EN1BITS PECI_INT_EN1bits absolute 0x40006418;

 typedef struct tagPECI_INT_EN2BITS {
  union {
    struct {
      unsigned : 1;
      unsigned ENWFE : 1;
      unsigned ENRFF : 1;
      unsigned : 5;
    };
  };
} typePECI_INT_EN2BITS;
sfr far volatile typePECI_INT_EN2BITS PECI_INT_EN2bits absolute 0x4000641C;

 typedef struct tagTACH_CH0_CONTROLBITS {
  union {
    struct {
      unsigned OUT_LIMIT_ENABLE : 1;
      unsigned TACH_EN : 1;
      unsigned : 6;
      unsigned FILTER_EN : 1;
      unsigned : 1;
      unsigned MODE_SELECT : 1;
      unsigned EDGES : 2;
      unsigned : 1;
      unsigned READY_INT_EN : 1;
      unsigned INPUT_INT_EN : 1;
      unsigned COUNTER : 16;
    };
  };
} typeTACH_CH0_CONTROLBITS;
sfr far volatile typeTACH_CH0_CONTROLBITS TACH_CH0_CONTROLbits absolute 0x40006000;

 typedef struct tagTACH_CH0_STATUSBITS {
  union {
    struct {
      unsigned OUT_LIMIT : 1;
      unsigned PIN : 1;
      unsigned TOGGLE : 1;
      unsigned COUNT_READY : 1;
      unsigned : 28;
    };
  };
} typeTACH_CH0_STATUSBITS;
sfr far volatile typeTACH_CH0_STATUSBITS TACH_CH0_STATUSbits absolute 0x40006004;

 typedef struct tagTACH_CH1_CONTROLBITS {
  union {
    struct {
      unsigned OUT_LIMIT_ENABLE : 1;
      unsigned TACH_EN : 1;
      unsigned : 6;
      unsigned FILTER_EN : 1;
      unsigned : 1;
      unsigned MODE_SELECT : 1;
      unsigned EDGES : 2;
      unsigned : 1;
      unsigned READY_INT_EN : 1;
      unsigned INPUT_INT_EN : 1;
      unsigned COUNTER : 16;
    };
  };
} typeTACH_CH1_CONTROLBITS;
sfr far volatile typeTACH_CH1_CONTROLBITS TACH_CH1_CONTROLbits absolute 0x40006010;

 typedef struct tagTACH_CH1_STATUSBITS {
  union {
    struct {
      unsigned OUT_LIMIT : 1;
      unsigned PIN : 1;
      unsigned TOGGLE : 1;
      unsigned COUNT_READY : 1;
      unsigned : 28;
    };
  };
} typeTACH_CH1_STATUSBITS;
sfr far volatile typeTACH_CH1_STATUSBITS TACH_CH1_STATUSbits absolute 0x40006014;

 typedef struct tagPWM_CH0_CONFIGBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned CLK_SELECT : 1;
      unsigned INVERT : 1;
      unsigned CLK_PRE_DIVIDER : 4;
      unsigned : 25;
    };
  };
} typePWM_CH0_CONFIGBITS;
sfr far volatile typePWM_CH0_CONFIGBITS PWM_CH0_CONFIGbits absolute 0x40005808;

 typedef struct tagPWM_CH1_CONFIGBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned CLK_SELECT : 1;
      unsigned INVERT : 1;
      unsigned CLK_PRE_DIVIDER : 4;
      unsigned : 25;
    };
  };
} typePWM_CH1_CONFIGBITS;
sfr far volatile typePWM_CH1_CONFIGBITS PWM_CH1_CONFIGbits absolute 0x40005818;

 typedef struct tagPWM_CH2_CONFIGBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned CLK_SELECT : 1;
      unsigned INVERT : 1;
      unsigned CLK_PRE_DIVIDER : 4;
      unsigned : 25;
    };
  };
} typePWM_CH2_CONFIGBITS;
sfr far volatile typePWM_CH2_CONFIGBITS PWM_CH2_CONFIGbits absolute 0x40005828;

 typedef struct tagPWM_CH3_CONFIGBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned CLK_SELECT : 1;
      unsigned INVERT : 1;
      unsigned CLK_PRE_DIVIDER : 4;
      unsigned : 25;
    };
  };
} typePWM_CH3_CONFIGBITS;
sfr far volatile typePWM_CH3_CONFIGBITS PWM_CH3_CONFIGbits absolute 0x40005838;

 typedef struct tagFAN_CONFIGURATIONBITS {
  union {
    struct {
      unsigned UPDATE : 3;
      unsigned EDGES : 2;
      unsigned RANGE : 2;
      unsigned EN_ALGO : 1;
      unsigned POLARITY : 1;
      unsigned ERR_RNG : 2;
      unsigned DER_OPT : 2;
      unsigned DIS_GLITCH : 1;
      unsigned EN_RRC : 1;
      unsigned : 1;
    };
  };
} typeFAN_CONFIGURATIONBITS;
sfr far volatile typeFAN_CONFIGURATIONBITS FAN_CONFIGURATIONbits absolute 0x4000A002;

 typedef struct tagFAN_GAINBITS {
  union {
    struct {
      unsigned GAINP : 2;
      unsigned GAINI : 2;
      unsigned GAIND : 2;
      unsigned : 2;
    };
  };
} typeFAN_GAINBITS;
sfr far volatile typeFAN_GAINBITS FAN_GAINbits absolute 0x4000A005;

 typedef struct tagFAN_SPIN_UP_CONFIGURATIONBITS {
  union {
    struct {
      unsigned SPINUP_TIME : 2;
      unsigned SPIN_LVL : 3;
      unsigned NOKICK : 1;
      unsigned DRIVE_FAIL_CNT : 2;
    };
  };
} typeFAN_SPIN_UP_CONFIGURATIONBITS;
sfr far volatile typeFAN_SPIN_UP_CONFIGURATIONBITS FAN_SPIN_UP_CONFIGURATIONbits absolute 0x4000A006;

 typedef struct tagFAN_STATUSBITS {
  union {
    struct {
      unsigned FAN_STALL : 1;
      unsigned FAN_SPIN : 1;
      unsigned : 3;
      unsigned DRIVE_FAIL : 1;
      unsigned : 2;
    };
  };
} typeFAN_STATUSBITS;
sfr far volatile typeFAN_STATUSBITS FAN_STATUSbits absolute 0x4000A011;

 typedef struct tagSPI_CH0_CONTROLBITS {
  union {
    struct {
      unsigned LSBF : 1;
      unsigned BIOEN : 1;
      unsigned SPDIN_SELECT : 2;
      unsigned SOFT_RESET : 1;
      unsigned AUTO_READ : 1;
      unsigned CE : 1;
      unsigned : 25;
    };
  };
} typeSPI_CH0_CONTROLBITS;
sfr far volatile typeSPI_CH0_CONTROLBITS SPI_CH0_CONTROLbits absolute 0x40009404;

 typedef struct tagSPI_CH0_STATUSBITS {
  union {
    struct {
      unsigned TXBE : 1;
      unsigned RXBF : 1;
      unsigned ACTIVE : 1;
      unsigned : 29;
    };
  };
} typeSPI_CH0_STATUSBITS;
sfr far volatile typeSPI_CH0_STATUSBITS SPI_CH0_STATUSbits absolute 0x40009408;

 typedef struct tagSPI_CH0_CLOCK_CONTROLBITS {
  union {
    struct {
      unsigned TCLKPH : 1;
      unsigned RCLKPH : 1;
      unsigned CLKPOL : 1;
      unsigned : 1;
      unsigned CLKSRC : 1;
      unsigned : 27;
    };
  };
} typeSPI_CH0_CLOCK_CONTROLBITS;
sfr far volatile typeSPI_CH0_CLOCK_CONTROLBITS SPI_CH0_CLOCK_CONTROLbits absolute 0x40009414;

 typedef struct tagSPI_CH1_CONTROLBITS {
  union {
    struct {
      unsigned LSBF : 1;
      unsigned BIOEN : 1;
      unsigned SPDIN_SELECT : 2;
      unsigned SOFT_RESET : 1;
      unsigned AUTO_READ : 1;
      unsigned CE : 1;
      unsigned : 25;
    };
  };
} typeSPI_CH1_CONTROLBITS;
sfr far volatile typeSPI_CH1_CONTROLBITS SPI_CH1_CONTROLbits absolute 0x40009484;

 typedef struct tagSPI_CH1_STATUSBITS {
  union {
    struct {
      unsigned TXBE : 1;
      unsigned RXBF : 1;
      unsigned ACTIVE : 1;
      unsigned : 29;
    };
  };
} typeSPI_CH1_STATUSBITS;
sfr far volatile typeSPI_CH1_STATUSBITS SPI_CH1_STATUSbits absolute 0x40009488;

 typedef struct tagSPI_CH1_CLOCK_CONTROLBITS {
  union {
    struct {
      unsigned TCLKPH : 1;
      unsigned RCLKPH : 1;
      unsigned CLKPOL : 1;
      unsigned : 1;
      unsigned CLKSRC : 1;
      unsigned : 27;
    };
  };
} typeSPI_CH1_CLOCK_CONTROLBITS;
sfr far volatile typeSPI_CH1_CLOCK_CONTROLBITS SPI_CH1_CLOCK_CONTROLbits absolute 0x40009494;

 typedef struct tagLED_CH0_CONFIGBITS {
  union {
    struct {
      unsigned CONTROL : 2;
      unsigned CLOCK_SOURCE : 1;
      unsigned SYNCHRONIZE : 1;
      unsigned PWM_SIZE : 2;
      unsigned ENABLE_UPDATE : 1;
      unsigned RESET_ : 1;
      unsigned WDT_RELOAD : 8;
      unsigned SYMMETRY : 1;
      unsigned : 15;
    };
  };
} typeLED_CH0_CONFIGBITS;
sfr far volatile typeLED_CH0_CONFIGBITS LED_CH0_CONFIGbits absolute 0x4000B800;

 typedef struct tagLED_CH0_LIMITSBITS {
  union {
    struct {
      unsigned MINIMUM : 8;
      unsigned MAXIMUM : 8;
      unsigned : 16;
    };
  };
} typeLED_CH0_LIMITSBITS;
sfr far volatile typeLED_CH0_LIMITSBITS LED_CH0_LIMITSbits absolute 0x4000B804;

 typedef struct tagLED_CH0_DELAYBITS {
  union {
    struct {
      unsigned LOW : 12;
      unsigned HIGH : 12;
      unsigned : 8;
    };
  };
} typeLED_CH0_DELAYBITS;
sfr far volatile typeLED_CH0_DELAYBITS LED_CH0_DELAYbits absolute 0x4000B808;

 typedef struct tagLED_CH0_UPDATE_STEPSIZEBITS {
  union {
    struct {
      unsigned STEP0 : 4;
      unsigned STEP1 : 4;
      unsigned STEP2 : 4;
      unsigned STEP3 : 4;
      unsigned STEP4 : 4;
      unsigned STEP5 : 4;
      unsigned STEP6 : 4;
      unsigned STEP7 : 4;
    };
  };
} typeLED_CH0_UPDATE_STEPSIZEBITS;
sfr far volatile typeLED_CH0_UPDATE_STEPSIZEBITS LED_CH0_UPDATE_STEPSIZEbits absolute 0x4000B80C;

 typedef struct tagLED_CH0_UPDATE_INTERVALBITS {
  union {
    struct {
      unsigned INTERVAL0 : 4;
      unsigned INTERVAL1 : 4;
      unsigned INTERVAL2 : 4;
      unsigned INTERVAL3 : 4;
      unsigned INTERVAL4 : 4;
      unsigned INTERVAL5 : 4;
      unsigned UPDATE_INTERVAL6 : 4;
      unsigned INTERVAL7 : 4;
    };
  };
} typeLED_CH0_UPDATE_INTERVALBITS;
sfr far volatile typeLED_CH0_UPDATE_INTERVALBITS LED_CH0_UPDATE_INTERVALbits absolute 0x4000B810;

 typedef struct tagLED_CH1_CONFIGBITS {
  union {
    struct {
      unsigned CONTROL : 2;
      unsigned CLOCK_SOURCE : 1;
      unsigned SYNCHRONIZE : 1;
      unsigned PWM_SIZE : 2;
      unsigned ENABLE_UPDATE : 1;
      unsigned RESET_ : 1;
      unsigned WDT_RELOAD : 8;
      unsigned SYMMETRY : 1;
      unsigned : 15;
    };
  };
} typeLED_CH1_CONFIGBITS;
sfr far volatile typeLED_CH1_CONFIGBITS LED_CH1_CONFIGbits absolute 0x4000B900;

 typedef struct tagLED_CH1_LIMITSBITS {
  union {
    struct {
      unsigned MINIMUM : 8;
      unsigned MAXIMUM : 8;
      unsigned : 16;
    };
  };
} typeLED_CH1_LIMITSBITS;
sfr far volatile typeLED_CH1_LIMITSBITS LED_CH1_LIMITSbits absolute 0x4000B904;

 typedef struct tagLED_CH1_DELAYBITS {
  union {
    struct {
      unsigned LOW : 12;
      unsigned HIGH : 12;
      unsigned : 8;
    };
  };
} typeLED_CH1_DELAYBITS;
sfr far volatile typeLED_CH1_DELAYBITS LED_CH1_DELAYbits absolute 0x4000B908;

 typedef struct tagLED_CH1_UPDATE_STEPSIZEBITS {
  union {
    struct {
      unsigned STEP0 : 4;
      unsigned STEP1 : 4;
      unsigned STEP2 : 4;
      unsigned STEP3 : 4;
      unsigned STEP4 : 4;
      unsigned STEP5 : 4;
      unsigned STEP6 : 4;
      unsigned STEP7 : 4;
    };
  };
} typeLED_CH1_UPDATE_STEPSIZEBITS;
sfr far volatile typeLED_CH1_UPDATE_STEPSIZEBITS LED_CH1_UPDATE_STEPSIZEbits absolute 0x4000B90C;

 typedef struct tagLED_CH1_UPDATE_INTERVALBITS {
  union {
    struct {
      unsigned INTERVAL0 : 4;
      unsigned INTERVAL1 : 4;
      unsigned INTERVAL2 : 4;
      unsigned INTERVAL3 : 4;
      unsigned INTERVAL4 : 4;
      unsigned INTERVAL5 : 4;
      unsigned UPDATE_INTERVAL6 : 4;
      unsigned INTERVAL7 : 4;
    };
  };
} typeLED_CH1_UPDATE_INTERVALBITS;
sfr far volatile typeLED_CH1_UPDATE_INTERVALBITS LED_CH1_UPDATE_INTERVALbits absolute 0x4000B910;

 typedef struct tagLED_CH2_CONFIGBITS {
  union {
    struct {
      unsigned CONTROL : 2;
      unsigned CLOCK_SOURCE : 1;
      unsigned SYNCHRONIZE : 1;
      unsigned PWM_SIZE : 2;
      unsigned ENABLE_UPDATE : 1;
      unsigned RESET_ : 1;
      unsigned WDT_RELOAD : 8;
      unsigned SYMMETRY : 1;
      unsigned : 15;
    };
  };
} typeLED_CH2_CONFIGBITS;
sfr far volatile typeLED_CH2_CONFIGBITS LED_CH2_CONFIGbits absolute 0x4000BA00;

 typedef struct tagLED_CH2_LIMITSBITS {
  union {
    struct {
      unsigned MINIMUM : 8;
      unsigned MAXIMUM : 8;
      unsigned : 16;
    };
  };
} typeLED_CH2_LIMITSBITS;
sfr far volatile typeLED_CH2_LIMITSBITS LED_CH2_LIMITSbits absolute 0x4000BA04;

 typedef struct tagLED_CH2_DELAYBITS {
  union {
    struct {
      unsigned LOW : 12;
      unsigned HIGH : 12;
      unsigned : 8;
    };
  };
} typeLED_CH2_DELAYBITS;
sfr far volatile typeLED_CH2_DELAYBITS LED_CH2_DELAYbits absolute 0x4000BA08;

 typedef struct tagLED_CH2_UPDATE_STEPSIZEBITS {
  union {
    struct {
      unsigned STEP0 : 4;
      unsigned STEP1 : 4;
      unsigned STEP2 : 4;
      unsigned STEP3 : 4;
      unsigned STEP4 : 4;
      unsigned STEP5 : 4;
      unsigned STEP6 : 4;
      unsigned STEP7 : 4;
    };
  };
} typeLED_CH2_UPDATE_STEPSIZEBITS;
sfr far volatile typeLED_CH2_UPDATE_STEPSIZEBITS LED_CH2_UPDATE_STEPSIZEbits absolute 0x4000BA0C;

 typedef struct tagLED_CH2_UPDATE_INTERVALBITS {
  union {
    struct {
      unsigned INTERVAL0 : 4;
      unsigned INTERVAL1 : 4;
      unsigned INTERVAL2 : 4;
      unsigned INTERVAL3 : 4;
      unsigned INTERVAL4 : 4;
      unsigned INTERVAL5 : 4;
      unsigned UPDATE_INTERVAL6 : 4;
      unsigned INTERVAL7 : 4;
    };
  };
} typeLED_CH2_UPDATE_INTERVALBITS;
sfr far volatile typeLED_CH2_UPDATE_INTERVALBITS LED_CH2_UPDATE_INTERVALbits absolute 0x4000BA10;

 typedef struct tagLED_CH3_CONFIGBITS {
  union {
    struct {
      unsigned CONTROL : 2;
      unsigned CLOCK_SOURCE : 1;
      unsigned SYNCHRONIZE : 1;
      unsigned PWM_SIZE : 2;
      unsigned ENABLE_UPDATE : 1;
      unsigned RESET_ : 1;
      unsigned WDT_RELOAD : 8;
      unsigned SYMMETRY : 1;
      unsigned : 15;
    };
  };
} typeLED_CH3_CONFIGBITS;
sfr far volatile typeLED_CH3_CONFIGBITS LED_CH3_CONFIGbits absolute 0x4000BB00;

 typedef struct tagLED_CH3_LIMITSBITS {
  union {
    struct {
      unsigned MINIMUM : 8;
      unsigned MAXIMUM : 8;
      unsigned : 16;
    };
  };
} typeLED_CH3_LIMITSBITS;
sfr far volatile typeLED_CH3_LIMITSBITS LED_CH3_LIMITSbits absolute 0x4000BB04;

 typedef struct tagLED_CH3_DELAYBITS {
  union {
    struct {
      unsigned LOW : 12;
      unsigned HIGH : 12;
      unsigned : 8;
    };
  };
} typeLED_CH3_DELAYBITS;
sfr far volatile typeLED_CH3_DELAYBITS LED_CH3_DELAYbits absolute 0x4000BB08;

 typedef struct tagLED_CH3_UPDATE_STEPSIZEBITS {
  union {
    struct {
      unsigned STEP0 : 4;
      unsigned STEP1 : 4;
      unsigned STEP2 : 4;
      unsigned STEP3 : 4;
      unsigned STEP4 : 4;
      unsigned STEP5 : 4;
      unsigned STEP6 : 4;
      unsigned STEP7 : 4;
    };
  };
} typeLED_CH3_UPDATE_STEPSIZEBITS;
sfr far volatile typeLED_CH3_UPDATE_STEPSIZEBITS LED_CH3_UPDATE_STEPSIZEbits absolute 0x4000BB0C;

 typedef struct tagLED_CH3_UPDATE_INTERVALBITS {
  union {
    struct {
      unsigned INTERVAL0 : 4;
      unsigned INTERVAL1 : 4;
      unsigned INTERVAL2 : 4;
      unsigned INTERVAL3 : 4;
      unsigned INTERVAL4 : 4;
      unsigned INTERVAL5 : 4;
      unsigned UPDATE_INTERVAL6 : 4;
      unsigned INTERVAL7 : 4;
    };
  };
} typeLED_CH3_UPDATE_INTERVALBITS;
sfr far volatile typeLED_CH3_UPDATE_INTERVALBITS LED_CH3_UPDATE_INTERVALbits absolute 0x4000BB10;

 typedef struct tagPS2_CH0CONTROLBITS {
  union {
    struct {
      unsigned TR : 1;
      unsigned EN : 1;
      unsigned PARITY : 2;
      unsigned STOP : 2;
      unsigned : 26;
    };
  };
} typePS2_CH0CONTROLBITS;
sfr far volatile typePS2_CH0CONTROLBITS PS2_CH0CONTROLbits absolute 0x40009004;

 typedef struct tagPS2_CH0STATUSBITS {
  union {
    struct {
      unsigned RDATA_RDY : 1;
      unsigned REC_TIMEOUT : 1;
      unsigned PE : 1;
      unsigned FE : 1;
      unsigned XMIT_IDLE : 1;
      unsigned XMIT_TIME_OUT : 1;
      unsigned RX_BUSY : 1;
      unsigned XMIT_START_TIMEOUT : 1;
      unsigned : 24;
    };
  };
} typePS2_CH0STATUSBITS;
sfr far volatile typePS2_CH0STATUSBITS PS2_CH0STATUSbits absolute 0x40009008;

 typedef struct tagPS2_CH1CONTROLBITS {
  union {
    struct {
      unsigned TR : 1;
      unsigned EN : 1;
      unsigned PARITY : 2;
      unsigned STOP : 2;
      unsigned : 26;
    };
  };
} typePS2_CH1CONTROLBITS;
sfr far volatile typePS2_CH1CONTROLBITS PS2_CH1CONTROLbits absolute 0x40009044;

 typedef struct tagPS2_CH1STATUSBITS {
  union {
    struct {
      unsigned RDATA_RDY : 1;
      unsigned REC_TIMEOUT : 1;
      unsigned PE : 1;
      unsigned FE : 1;
      unsigned XMIT_IDLE : 1;
      unsigned XMIT_TIME_OUT : 1;
      unsigned RX_BUSY : 1;
      unsigned XMIT_START_TIMEOUT : 1;
      unsigned : 24;
    };
  };
} typePS2_CH1STATUSBITS;
sfr far volatile typePS2_CH1STATUSBITS PS2_CH1STATUSbits absolute 0x40009048;

 typedef struct tagPS2_CH2CONTROLBITS {
  union {
    struct {
      unsigned TR : 1;
      unsigned EN : 1;
      unsigned PARITY : 2;
      unsigned STOP : 2;
      unsigned : 26;
    };
  };
} typePS2_CH2CONTROLBITS;
sfr far volatile typePS2_CH2CONTROLBITS PS2_CH2CONTROLbits absolute 0x40009084;

 typedef struct tagPS2_CH2STATUSBITS {
  union {
    struct {
      unsigned RDATA_RDY : 1;
      unsigned REC_TIMEOUT : 1;
      unsigned PE : 1;
      unsigned FE : 1;
      unsigned XMIT_IDLE : 1;
      unsigned XMIT_TIME_OUT : 1;
      unsigned RX_BUSY : 1;
      unsigned XMIT_START_TIMEOUT : 1;
      unsigned : 24;
    };
  };
} typePS2_CH2STATUSBITS;
sfr far volatile typePS2_CH2STATUSBITS PS2_CH2STATUSbits absolute 0x40009088;

 typedef struct tagPS2_CH3CONTROLBITS {
  union {
    struct {
      unsigned TR : 1;
      unsigned EN : 1;
      unsigned PARITY : 2;
      unsigned STOP : 2;
      unsigned : 26;
    };
  };
} typePS2_CH3CONTROLBITS;
sfr far volatile typePS2_CH3CONTROLBITS PS2_CH3CONTROLbits absolute 0x400090C4;

 typedef struct tagPS2_CH3STATUSBITS {
  union {
    struct {
      unsigned RDATA_RDY : 1;
      unsigned REC_TIMEOUT : 1;
      unsigned PE : 1;
      unsigned FE : 1;
      unsigned XMIT_IDLE : 1;
      unsigned XMIT_TIME_OUT : 1;
      unsigned RX_BUSY : 1;
      unsigned XMIT_START_TIMEOUT : 1;
      unsigned : 24;
    };
  };
} typePS2_CH3STATUSBITS;
sfr far volatile typePS2_CH3STATUSBITS PS2_CH3STATUSbits absolute 0x400090C8;

 typedef struct tagKMS_KSO_CONTROLBITS {
  union {
    struct {
      unsigned SELECT : 5;
      unsigned ALL : 1;
      unsigned KSEN : 1;
      unsigned INVERT : 1;
      unsigned : 24;
    };
  };
} typeKMS_KSO_CONTROLBITS;
sfr far volatile typeKMS_KSO_CONTROLBITS KMS_KSO_CONTROLbits absolute 0x40009C04;

 typedef struct tagBC_LINK_STATUSBITS {
  union {
    struct {
      unsigned BUSY : 1;
      unsigned : 3;
      unsigned BUSY_CLR_INT_EN : 1;
      unsigned ERR_INT_EN : 1;
      unsigned ERROR_ : 1;
      unsigned RESET_ : 1;
      unsigned : 24;
    };
  };
} typeBC_LINK_STATUSBITS;
sfr far volatile typeBC_LINK_STATUSBITS BC_LINK_STATUSbits absolute 0x4000BC00;

 typedef struct tagTFDP_CONTROLBITS {
  union {
    struct {
      unsigned EN : 1;
      unsigned EDGE_SEL : 1;
      unsigned DIVSEL : 2;
      unsigned IP_DELAY : 3;
      unsigned : 1;
    };
  };
} typeTFDP_CONTROLBITS;
sfr far volatile typeTFDP_CONTROLBITS TFDP_CONTROLbits absolute 0x40008C04;

 typedef struct tagADC_CONTROLBITS {
  union {
    struct {
      unsigned ACTIVATE : 1;
      unsigned START_SINGLE : 1;
      unsigned START_REPEAT : 1;
      unsigned POWER_SAVER_DIS : 1;
      unsigned SOFT_RESET : 1;
      unsigned : 1;
      unsigned REPEAT_DONE_STAT : 1;
      unsigned SINGLE_DONE_STAT : 1;
      unsigned : 24;
    };
  };
} typeADC_CONTROLBITS;
sfr far volatile typeADC_CONTROLBITS ADC_CONTROLbits absolute 0x40007C00;

 typedef struct tagADC_DELAYBITS {
  union {
    struct {
      unsigned START : 16;
      unsigned REPEAT : 16;
    };
  };
} typeADC_DELAYBITS;
sfr far volatile typeADC_DELAYBITS ADC_DELAYbits absolute 0x40007C04;

 typedef struct tagADC_STATUSBITS {
  union {
    struct {
      unsigned CH0 : 1;
      unsigned CH1 : 1;
      unsigned CH2 : 1;
      unsigned CH3 : 1;
      unsigned CH4 : 1;
      unsigned : 27;
    };
  };
} typeADC_STATUSBITS;
sfr far volatile typeADC_STATUSBITS ADC_STATUSbits absolute 0x40007C08;

 typedef struct tagADC_SINGLE_ENBITS {
  union {
    struct {
      unsigned CH0 : 1;
      unsigned CH1 : 1;
      unsigned CH2 : 1;
      unsigned CH3 : 1;
      unsigned CH4 : 1;
      unsigned : 27;
    };
  };
} typeADC_SINGLE_ENBITS;
sfr far volatile typeADC_SINGLE_ENBITS ADC_SINGLE_ENbits absolute 0x40007C0C;

 typedef struct tagADC_REPEATBITS {
  union {
    struct {
      unsigned CH0 : 1;
      unsigned CH1 : 1;
      unsigned CH2 : 1;
      unsigned CH3 : 1;
      unsigned CH4 : 1;
      unsigned : 27;
    };
  };
} typeADC_REPEATBITS;
sfr far volatile typeADC_REPEATBITS ADC_REPEATbits absolute 0x40007C10;

 typedef struct tagNVIC_ICTRBITS {
  union {
    struct {
      unsigned INTLINESNUM : 4;
      unsigned : 28;
    };
  };
} typeNVIC_ICTRBITS;
sfr far volatile typeNVIC_ICTRBITS NVIC_ICTRbits absolute 0xE000E004;

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
      unsigned : 31;
      unsigned SETENA : 1;
    };
  };
} typeNVIC_ISER2BITS;
sfr far volatile typeNVIC_ISER2BITS NVIC_ISER2bits absolute 0xE000E108;

 typedef struct tagNVIC_ISER3BITS {
  union {
    struct {
      unsigned : 31;
      unsigned SETENA : 1;
    };
  };
} typeNVIC_ISER3BITS;
sfr far volatile typeNVIC_ISER3BITS NVIC_ISER3bits absolute 0xE000E10C;

 typedef struct tagNVIC_ISER4BITS {
  union {
    struct {
      unsigned : 31;
      unsigned SETENA : 1;
    };
  };
} typeNVIC_ISER4BITS;
sfr far volatile typeNVIC_ISER4BITS NVIC_ISER4bits absolute 0xE000E110;

 typedef struct tagNVIC_ISER5BITS {
  union {
    struct {
      unsigned : 31;
      unsigned SETENA : 1;
    };
  };
} typeNVIC_ISER5BITS;
sfr far volatile typeNVIC_ISER5BITS NVIC_ISER5bits absolute 0xE000E114;

 typedef struct tagNVIC_ISER6BITS {
  union {
    struct {
      unsigned : 31;
      unsigned SETENA : 1;
    };
  };
} typeNVIC_ISER6BITS;
sfr far volatile typeNVIC_ISER6BITS NVIC_ISER6bits absolute 0xE000E118;

 typedef struct tagNVIC_ISER7BITS {
  union {
    struct {
      unsigned : 31;
      unsigned SETENA : 1;
    };
  };
} typeNVIC_ISER7BITS;
sfr far volatile typeNVIC_ISER7BITS NVIC_ISER7bits absolute 0xE000E11C;

 typedef struct tagNVIC_ICER0BITS {
  union {
    struct {
      unsigned : 31;
      unsigned CLRENA : 1;
    };
  };
} typeNVIC_ICER0BITS;
sfr far volatile typeNVIC_ICER0BITS NVIC_ICER0bits absolute 0xE000E180;

 typedef struct tagNVIC_ICER1BITS {
  union {
    struct {
      unsigned : 31;
      unsigned CLRENA : 1;
    };
  };
} typeNVIC_ICER1BITS;
sfr far volatile typeNVIC_ICER1BITS NVIC_ICER1bits absolute 0xE000E184;

 typedef struct tagNVIC_ICER2BITS {
  union {
    struct {
      unsigned : 31;
      unsigned CLRENA : 1;
    };
  };
} typeNVIC_ICER2BITS;
sfr far volatile typeNVIC_ICER2BITS NVIC_ICER2bits absolute 0xE000E188;

 typedef struct tagNVIC_ICER3BITS {
  union {
    struct {
      unsigned : 31;
      unsigned CLRENA : 1;
    };
  };
} typeNVIC_ICER3BITS;
sfr far volatile typeNVIC_ICER3BITS NVIC_ICER3bits absolute 0xE000E18C;

 typedef struct tagNVIC_ICER4BITS {
  union {
    struct {
      unsigned : 31;
      unsigned CLRENA : 1;
    };
  };
} typeNVIC_ICER4BITS;
sfr far volatile typeNVIC_ICER4BITS NVIC_ICER4bits absolute 0xE000E190;

 typedef struct tagNVIC_ICER5BITS {
  union {
    struct {
      unsigned : 31;
      unsigned CLRENA : 1;
    };
  };
} typeNVIC_ICER5BITS;
sfr far volatile typeNVIC_ICER5BITS NVIC_ICER5bits absolute 0xE000E194;

 typedef struct tagNVIC_ICER6BITS {
  union {
    struct {
      unsigned : 31;
      unsigned CLRENA : 1;
    };
  };
} typeNVIC_ICER6BITS;
sfr far volatile typeNVIC_ICER6BITS NVIC_ICER6bits absolute 0xE000E198;

 typedef struct tagNVIC_ICER7BITS {
  union {
    struct {
      unsigned : 31;
      unsigned CLRENA : 1;
    };
  };
} typeNVIC_ICER7BITS;
sfr far volatile typeNVIC_ICER7BITS NVIC_ICER7bits absolute 0xE000E19C;

 typedef struct tagNVIC_ISPR0BITS {
  union {
    struct {
      unsigned : 31;
      unsigned SETPEND : 1;
    };
  };
} typeNVIC_ISPR0BITS;
sfr far volatile typeNVIC_ISPR0BITS NVIC_ISPR0bits absolute 0xE000E200;

 typedef struct tagNVIC_ISPR1BITS {
  union {
    struct {
      unsigned : 31;
      unsigned SETPEND : 1;
    };
  };
} typeNVIC_ISPR1BITS;
sfr far volatile typeNVIC_ISPR1BITS NVIC_ISPR1bits absolute 0xE000E204;

 typedef struct tagNVIC_ISPR2BITS {
  union {
    struct {
      unsigned : 31;
      unsigned SETPEND : 1;
    };
  };
} typeNVIC_ISPR2BITS;
sfr far volatile typeNVIC_ISPR2BITS NVIC_ISPR2bits absolute 0xE000E208;

 typedef struct tagNVIC_ISPR3BITS {
  union {
    struct {
      unsigned : 31;
      unsigned SETPEND : 1;
    };
  };
} typeNVIC_ISPR3BITS;
sfr far volatile typeNVIC_ISPR3BITS NVIC_ISPR3bits absolute 0xE000E20C;

 typedef struct tagNVIC_ISPR4BITS {
  union {
    struct {
      unsigned : 31;
      unsigned SETPEND : 1;
    };
  };
} typeNVIC_ISPR4BITS;
sfr far volatile typeNVIC_ISPR4BITS NVIC_ISPR4bits absolute 0xE000E210;

 typedef struct tagNVIC_ISPR5BITS {
  union {
    struct {
      unsigned : 31;
      unsigned SETPEND : 1;
    };
  };
} typeNVIC_ISPR5BITS;
sfr far volatile typeNVIC_ISPR5BITS NVIC_ISPR5bits absolute 0xE000E214;

 typedef struct tagNVIC_ISPR6BITS {
  union {
    struct {
      unsigned : 31;
      unsigned SETPEND : 1;
    };
  };
} typeNVIC_ISPR6BITS;
sfr far volatile typeNVIC_ISPR6BITS NVIC_ISPR6bits absolute 0xE000E218;

 typedef struct tagNVIC_ISPR7BITS {
  union {
    struct {
      unsigned : 31;
      unsigned SETPEND : 1;
    };
  };
} typeNVIC_ISPR7BITS;
sfr far volatile typeNVIC_ISPR7BITS NVIC_ISPR7bits absolute 0xE000E21C;

 typedef struct tagNVIC_ICPR0BITS {
  union {
    struct {
      unsigned : 31;
      unsigned CLRPEND : 1;
    };
  };
} typeNVIC_ICPR0BITS;
sfr far volatile typeNVIC_ICPR0BITS NVIC_ICPR0bits absolute 0xE000E280;

 typedef struct tagNVIC_ICPR1BITS {
  union {
    struct {
      unsigned : 31;
      unsigned CLRPEND : 1;
    };
  };
} typeNVIC_ICPR1BITS;
sfr far volatile typeNVIC_ICPR1BITS NVIC_ICPR1bits absolute 0xE000E284;

 typedef struct tagNVIC_ICPR2BITS {
  union {
    struct {
      unsigned : 31;
      unsigned CLRPEND : 1;
    };
  };
} typeNVIC_ICPR2BITS;
sfr far volatile typeNVIC_ICPR2BITS NVIC_ICPR2bits absolute 0xE000E288;

 typedef struct tagNVIC_ICPR3BITS {
  union {
    struct {
      unsigned : 31;
      unsigned CLRPEND : 1;
    };
  };
} typeNVIC_ICPR3BITS;
sfr far volatile typeNVIC_ICPR3BITS NVIC_ICPR3bits absolute 0xE000E28C;

 typedef struct tagNVIC_ICPR4BITS {
  union {
    struct {
      unsigned : 31;
      unsigned CLRPEND : 1;
    };
  };
} typeNVIC_ICPR4BITS;
sfr far volatile typeNVIC_ICPR4BITS NVIC_ICPR4bits absolute 0xE000E290;

 typedef struct tagNVIC_ICPR5BITS {
  union {
    struct {
      unsigned : 31;
      unsigned CLRPEND : 1;
    };
  };
} typeNVIC_ICPR5BITS;
sfr far volatile typeNVIC_ICPR5BITS NVIC_ICPR5bits absolute 0xE000E294;

 typedef struct tagNVIC_ICPR6BITS {
  union {
    struct {
      unsigned : 31;
      unsigned CLRPEND : 1;
    };
  };
} typeNVIC_ICPR6BITS;
sfr far volatile typeNVIC_ICPR6BITS NVIC_ICPR6bits absolute 0xE000E298;

 typedef struct tagNVIC_ICPR7BITS {
  union {
    struct {
      unsigned : 31;
      unsigned CLRPEND : 1;
    };
  };
} typeNVIC_ICPR7BITS;
sfr far volatile typeNVIC_ICPR7BITS NVIC_ICPR7bits absolute 0xE000E29C;

 typedef struct tagNVIC_IABR0BITS {
  union {
    struct {
      unsigned : 31;
      unsigned ACTIVE : 1;
    };
  };
} typeNVIC_IABR0BITS;
sfr far volatile typeNVIC_IABR0BITS NVIC_IABR0bits absolute 0xE000E300;

 typedef struct tagNVIC_IABR1BITS {
  union {
    struct {
      unsigned : 31;
      unsigned ACTIVE : 1;
    };
  };
} typeNVIC_IABR1BITS;
sfr far volatile typeNVIC_IABR1BITS NVIC_IABR1bits absolute 0xE000E304;

 typedef struct tagNVIC_IABR2BITS {
  union {
    struct {
      unsigned : 31;
      unsigned ACTIVE : 1;
    };
  };
} typeNVIC_IABR2BITS;
sfr far volatile typeNVIC_IABR2BITS NVIC_IABR2bits absolute 0xE000E308;

 typedef struct tagNVIC_IABR3BITS {
  union {
    struct {
      unsigned : 31;
      unsigned ACTIVE : 1;
    };
  };
} typeNVIC_IABR3BITS;
sfr far volatile typeNVIC_IABR3BITS NVIC_IABR3bits absolute 0xE000E30C;

 typedef struct tagNVIC_IABR4BITS {
  union {
    struct {
      unsigned : 31;
      unsigned ACTIVE : 1;
    };
  };
} typeNVIC_IABR4BITS;
sfr far volatile typeNVIC_IABR4BITS NVIC_IABR4bits absolute 0xE000E30C;

 typedef struct tagNVIC_IABR5BITS {
  union {
    struct {
      unsigned : 31;
      unsigned ACTIVE : 1;
    };
  };
} typeNVIC_IABR5BITS;
sfr far volatile typeNVIC_IABR5BITS NVIC_IABR5bits absolute 0xE000E310;

 typedef struct tagNVIC_IABR6BITS {
  union {
    struct {
      unsigned : 31;
      unsigned ACTIVE : 1;
    };
  };
} typeNVIC_IABR6BITS;
sfr far volatile typeNVIC_IABR6BITS NVIC_IABR6bits absolute 0xE000E314;

 typedef struct tagNVIC_IABR7BITS {
  union {
    struct {
      unsigned : 31;
      unsigned ACTIVE : 1;
    };
  };
} typeNVIC_IABR7BITS;
sfr far volatile typeNVIC_IABR7BITS NVIC_IABR7bits absolute 0xE000E318;

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

 typedef struct tagNVIC_STIRBITS {
  union {
    struct {
      unsigned INTID : 9;
      unsigned : 23;
    };
  };
} typeNVIC_STIRBITS;
sfr far volatile typeNVIC_STIRBITS NVIC_STIRbits absolute 0xE000EF00;

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
       
sfr far unsigned long volatile RNG_BASE_ADDRESS  absolute 0x4000BE00;
sfr far unsigned long volatile RNG_CONTROL       absolute 0x4000BE00;
sfr far unsigned long volatile RNG_FIFO_LEVEL    absolute 0x4000BE04;
sfr far unsigned long volatile RNG_VERSION       absolute 0x4000BE08;
sfr far unsigned long volatile RNG_FIFO_ADDR     absolute 0x40108000;
sfr far unsigned long volatile RNG_FIFO_END      absolute 0x40108020;

// sybsistem registers
sfr far unsigned long volatile ECS_ID            absolute 0x4000FC10;
sfr far unsigned long volatile TREG              absolute 0x4000BE00;

#define AES_MAX_KEY_WLEN    (8)
#define AES_MAX_IV_WLEN     (4)

typedef struct
{
    unsigned long CONFIG;                /*!< Offset: 0x0000  Configuration */
    unsigned long COMMAND1;               /*!< Offset: 0x0004  Command */
    unsigned long CONTROL;               /*!< Offset: 0x0008  Control */
    unsigned long STATUS;                /*!< Offset: 0x000C  Status */
    unsigned long VERSION1;               /*!< Offset: 0x0010  Version */
    unsigned long NB_HEADER;             /*!< Offset: 0x0014  Number of Headers */
    unsigned long LAST_HEADER;           /*!< Offset: 0x0018  Last Header */
    unsigned long NB_BLOCK;              /*!< Offset: 0x001C  Number of Blocks */
    unsigned long LAST_BLOCK;            /*!< Offset: 0x0020  Last Block */
    unsigned long DMA_IN;                /*!< Offset: 0x0024  DMA Input Address */
    unsigned long DMA_OUT;               /*!< Offset: 0x0028  DMA Output Address */
    unsigned long RESERVEDA[(0xFC - 0x2C)/4 + 1];
    unsigned long KEY1[AES_MAX_KEY_WLEN];/*!< Offset: 0x0100  KeyIn1[159:128]
                                              !< Offset: 0x0104  KeyIn1[191:160]
                                              !< Offset: 0x0108  KeyIn1[223:192]
                                              !< Offset: 0x010C  KeyIn1[255:224]
                                              !< Offset: 0x0110  KeyIn1[31:0]
                                              !< Offset: 0x0114  KeyIn1[63:32]
                                              !< Offset: 0x0118  KeyIn1[95:64]
                                              !< Offset: 0x011C  KeyIn1[127:96] */
    unsigned long IV[AES_MAX_IV_WLEN];   /*!< Offset: 0x0120  IV[31:0]
                                              !< Offset: 0x0124  IV[63:32]
                                              !< Offset: 0x0128  IV[95:64]
                                              !< Offset: 0x012C  IV[127:96] */
    unsigned long RESERVEDB[4];
    unsigned long KEY2[AES_MAX_KEY_WLEN];/*!< Offset: 0x0140  KeyIn1[159:128]
                                              !< Offset: 0x0144  KeyIn1[191:160]
                                              !< Offset: 0x0148  KeyIn1[223:192]
                                              !< Offset: 0x014C  KeyIn1[255:224]
                                              !< Offset: 0x0150  KeyIn1[31:0]
                                              !< Offset: 0x0154  KeyIn1[63:32]
                                              !< Offset: 0x0158  KeyIn1[95:64]
                                              !< Offset: 0x015C  KeyIn1[127:96] */
} AES_TypeDef;
sfr far volatile AES_TypeDef CEC1302_AES absolute 0x4000D200;
 
sfr far volatile ECS_AES_HASH_SW  absolute 0x4000FC2C ; // 32-bit register.

/*------------- Hash Subsystem (HASH) -----------------------------*/
/** @addtogroup MEC1322_HASH Hash Security (HASH)
  @{
*/
typedef struct
{
    unsigned long SHA_MODE;              /*!< Offset: 0x0000  SHA Mode */
    unsigned long NB_BLOCK;              /*!< Offset: 0x0004  NbBlock */
    unsigned long CONTROL;               /*!< Offset: 0x0008  Config */
    unsigned long STATUS;                /*!< Offset: 0x000C  Status, Read to clear interrupt */
    unsigned long VERSION1;               /*!< Offset: 0x0010  Version */
    unsigned long GENERIC_VALUE;         /*!< Offset: 0x0014  Generic Value */
    unsigned long INIT_HASH_ADDR;        /*!< Offset: 0x0018  Initial Hash value Address */
    unsigned long DATA_SOURCE_ADDR;      /*!< Offset: 0x001C  Data to hash Address */
    unsigned long HASH_RESULT_ADDR;      /*!< Offset: 0x0020  Hash result address */
} HASH_TypeDef;
sfr far volatile HASH_TypeDef CEC1302_HASH absolute 0x4000D000;

// Hash
sfr far unsigned long volatile HASH_BASE_ADDR     absolute 0x4000D000;
sfr far unsigned long volatile HASH_MODE          absolute 0x4000D000;
sfr far unsigned long volatile HASH_NBLOCK        absolute 0x4000D004;
sfr far unsigned long volatile HASH_CONTROL       absolute 0x4000D008;
sfr far unsigned long volatile HASH_STATUS_REG        absolute 0x4000D00C;
sfr far unsigned long volatile HASH_VERSION       absolute 0x4000D010;
sfr far unsigned long volatile HASH_SUPP_MODES    absolute 0x4000D014;
sfr far unsigned long volatile HASH_INIT_ADDR     absolute 0x4000D018;
sfr far unsigned long volatile HASH_DATA_ADDR     absolute 0x4000D01C;
sfr far unsigned long volatile HASH_RESULT_ADDR   absolute 0x4000D020;

// AES
sfr far unsigned long volatile AES_BASE_ADDR      absolute 0x4000D200;
sfr far unsigned long volatile AES_CONFIG         absolute 0x4000D200;
sfr far unsigned long volatile AES_COMMAND        absolute 0x4000D204;
sfr far unsigned long volatile AES_CONTROL        absolute 0x4000D208;
sfr far unsigned long volatile AES_STATUS_REG     absolute 0x4000D20C;
sfr far unsigned long volatile AES_VERSION        absolute 0x4000D210;
sfr far unsigned long volatile AES_NHDRS          absolute 0x4000D214;
sfr far unsigned long volatile AES_LAST_HDR       absolute 0x4000D218;
sfr far unsigned long volatile AES_NBLOCKS        absolute 0x4000D21C;
sfr far unsigned long volatile AES_LAST_BLOCK     absolute 0x4000D220;
sfr far unsigned long volatile AES_DATA_IN_ADDR   absolute 0x4000D224;
sfr far unsigned long volatile AES_DATA_OUT_ADDR  absolute 0x4000D228;
sfr far unsigned long volatile AES_KEY1_BASE      absolute 0x4000D300;
sfr far unsigned long volatile AES_KEY1_159_128   absolute 0x4000D300;
sfr far unsigned long volatile AES_KEY1_191_160   absolute 0x4000D304;
sfr far unsigned long volatile AES_KEY1_223_192   absolute 0x4000D308;
sfr far unsigned long volatile AES_KEY1_255_224   absolute 0x4000D30C;
sfr far unsigned long volatile AES_KEY1_31_0      absolute 0x4000D310;
sfr far unsigned long volatile AES_KEY1_63_32     absolute 0x4000D314;
sfr far unsigned long volatile AES_KEY1_95_64     absolute 0x4000D318;
sfr far unsigned long volatile AES_KEY1_127_96    absolute 0x4000D31C;
sfr far unsigned long volatile AES_IV_31_0        absolute 0x4000D320;
sfr far unsigned long volatile AES_IV_63_32       absolute 0x4000D324;
sfr far unsigned long volatile AES_IV_95_64       absolute 0x4000D328;
sfr far unsigned long volatile AES_IV_127_96      absolute 0x4000D32C;
sfr far unsigned long volatile AES_KEY2_159_128   absolute 0x4000D340;
sfr far unsigned long volatile AES_KEY2_191_160   absolute 0x4000D344;
sfr far unsigned long volatile AES_KEY2_223_192   absolute 0x4000D348;
sfr far unsigned long volatile AES_KEY2_255_224   absolute 0x4000D34C;
sfr far unsigned long volatile AES_KEY2_31_0      absolute 0x4000D350;
sfr far unsigned long volatile AES_KEY2_63_32     absolute 0x4000D354;
sfr far unsigned long volatile AES_KEY2_95_64     absolute 0x4000D358;
sfr far unsigned long volatile AES_KEY2_127_96    absolute 0x4000D35C;

typedef struct
{
    unsigned long CONFIG;
    unsigned long COMMAND;
    unsigned long CONTROL;
    unsigned long STATUS;
    unsigned long VERSION;
    unsigned long LOAD;
} PKE_TypeDef;
sfr far volatile PKE_TypeDef CEC1302_PKE absolute 0x4000BD00UL;

sfr far unsigned long volatile PKE_CONFIG   absolute 0x4000BD00;
sfr far unsigned long volatile PKE_COMMAND  absolute 0x4000BD04;
sfr far unsigned long volatile PKE_CONTROL  absolute 0x4000BD08;
sfr far unsigned long volatile PKE_STAT   absolute 0x4000BD0C;
sfr far unsigned long volatile PKE_VERSION  absolute 0x4000BD10;
sfr far unsigned long volatile PKE_LOAD     absolute 0x4000BD14;



 /* ================================================================================ */
/* ================                     TACH_0                     ================ */
/* ================================================================================ */


/**
  * @brief This block monitors TACH output signals (or locked rotor signals) from
 various types of fans, and determines their speed.  (TACH_0)
  */

typedef struct {                                    /*!< TACH_0 Structure                                                      */

  union {
      unsigned long  CONTROL;                         /*!< TACHx Control Register                                                */

      struct {
      unsigned long  OUT_LIMIT_ENABLE:  1;          /*!< 1=Enable interrupt output from Tach block                             */
      unsigned long  TACH_EN    :  1;               /*!< 1= TACH Monitoring/ clock enabled, 0= TACH Idle                       */
      unsigned long             :  6;
      unsigned long  FILTER_EN  :  1;               /*!< remove high frequency glitches. 1=Filter enabled                      */
      unsigned long             :  1;
      unsigned long  MODE_SELECT:  1;               /*!< 1=Counter is incremented on rising edge                               */
      unsigned long  EDGES      :  2;               /*!< 00/01/10/11: 2/3/5/9 Tach edges                                       */
      unsigned long             :  1;
      unsigned long  READY_INT_EN:  1;              /*!< 1=Enable Count Ready interrupt, 0=Disable                             */
      unsigned long  INPUT_INT_EN:  1;              /*!< 1=Enable Tach Input toggle interrupt, 0=Disable                       */
      unsigned long  COUNTER    : 16;               /*!< latched value of the internal Tach pulse counter                      */
      } CONTROL_b;                                    /*!< BitSize                                                               */
  };

  union {
      unsigned long  STATUS;                          /*!< TACHx Status Register                                                 */

      struct {
      unsigned long  OUT_LIMIT  :  1;               /*!< 1=Tach is outside of limits (R/WC)                                    */
      unsigned long  PIN        :  1;               /*!< 1= Tach Input is high, 0= Input is low                                */
      unsigned long  TOGGLE     :  1;               /*!< 1=Tach Input changed state, 0= stable (R/WC)                          */
      unsigned long  COUNT_READY:  1;               /*!< 1=Reading ready, 0=Reading not ready                                  */
      } STATUS_b;                                     /*!< BitSize                                                               */
  };
      unsigned int  HIGH_LIMIT;                        /*!< value is compared with TACHX_COUNTER field.                           */
      unsigned int  RESERVED;
      unsigned int  LOW_LIMIT;                         /*!< value is compared with TACHX_COUNTER field.                           */
} TACH_0_Type;