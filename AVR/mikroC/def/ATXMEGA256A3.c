// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00042000;

// Flash page size in program words
const int __FLASH_PAGE_SIZE = 256;

const unsigned short ICS_AUTO                  =     0;
const unsigned short ICS_OFF                   =     3;

// Addres offset from Output to Input (port) registers
const signed short   OUTPUT_TO_INPUT_OFFSET    =     4;

// Rx space registers
sfr rx unsigned short R0  absolute 0x00;
sfr rx unsigned short R1  absolute 0x01;
sfr rx unsigned short R2  absolute 0x02;
sfr rx unsigned short R3  absolute 0x03;
sfr rx unsigned short R4  absolute 0x04;
sfr rx unsigned short R5  absolute 0x05;
sfr rx unsigned short R6  absolute 0x06;
sfr rx unsigned short R7  absolute 0x07;
sfr rx unsigned short R8  absolute 0x08;
sfr rx unsigned short R9  absolute 0x09;
sfr rx unsigned short R10 absolute 0x0A;
sfr rx unsigned short R11 absolute 0x0B;
sfr rx unsigned short R12 absolute 0x0C;
sfr rx unsigned short R13 absolute 0x0D;
sfr rx unsigned short R14 absolute 0x0E;
sfr rx unsigned short R15 absolute 0x0F;
sfr rx unsigned short R16 absolute 0x10;
sfr rx unsigned short R17 absolute 0x11;
sfr rx unsigned short R18 absolute 0x12;
sfr rx unsigned short R19 absolute 0x13;
sfr rx unsigned short R20 absolute 0x14;
sfr rx unsigned short R21 absolute 0x15;
sfr rx unsigned short R22 absolute 0x16;
sfr rx unsigned short R23 absolute 0x17;
sfr rx unsigned short R24 absolute 0x18;
sfr rx unsigned short R25 absolute 0x19;
sfr rx unsigned short R26 absolute 0x1A;
sfr rx unsigned short R27 absolute 0x1B;
sfr rx unsigned short R28 absolute 0x1C;
sfr rx unsigned short R29 absolute 0x1D;
sfr rx unsigned short R30 absolute 0x1E;
sfr rx unsigned short R31 absolute 0x1F;

// X, Y and Z registers
sfr rx unsigned short XL absolute 0x1A;
sfr rx unsigned short XH absolute 0x1B;
sfr rx unsigned short YL absolute 0x1C;
sfr rx unsigned short YH absolute 0x1D;
sfr rx unsigned short ZL absolute 0x1E;
sfr rx unsigned short ZH absolute 0x1F;
sfr rx unsigned int   X  absolute 0x1A;
sfr rx unsigned int   Y  absolute 0x1C;
sfr rx unsigned int   Z  absolute 0x1E;


// Interrupt Vector Table Constants

// OSC interrupt vectors
const unsigned short IVT_ADDR_OSC_XOSCF = 0x0002; // External Oscillator Failure Interrupt (NMI)

// PORTC interrupt vectors
const unsigned short IVT_ADDR_PORTC_INT0 = 0x0004; // External Interrupt 0
const unsigned short IVT_ADDR_PORTC_INT1 = 0x0006; // External Interrupt 1

// PORTR interrupt vectors
const unsigned short IVT_ADDR_PORTR_INT0 = 0x0008; // External Interrupt 0
const unsigned short IVT_ADDR_PORTR_INT1 = 0x000A; // External Interrupt 1

// DMA interrupt vectors
const unsigned short IVT_ADDR_DMA_CH0 = 0x000C; // Channel 0 Interrupt
const unsigned short IVT_ADDR_DMA_CH1 = 0x000E; // Channel 1 Interrupt
const unsigned short IVT_ADDR_DMA_CH2 = 0x0010; // Channel 2 Interrupt
const unsigned short IVT_ADDR_DMA_CH3 = 0x0012; // Channel 3 Interrupt

// RTC interrupt vectors
const unsigned short IVT_ADDR_RTC_OVF = 0x0014; // Overflow Interrupt
const unsigned short IVT_ADDR_RTC_COMP = 0x0016; // Compare Interrupt

// TWIC interrupt vectors
const unsigned short IVT_ADDR_TWIC_TWIS = 0x0018; // TWI Slave Interrupt
const unsigned short IVT_ADDR_TWIC_TWIM = 0x001A; // TWI Master Interrupt

// TCC0 interrupt vectors
const unsigned short IVT_ADDR_TCC0_OVF = 0x001C; // Overflow Interrupt
const unsigned short IVT_ADDR_TCC0_ERR = 0x001E; // Error Interrupt
const unsigned short IVT_ADDR_TCC0_CCA = 0x0020; // Compare or Capture A Interrupt
const unsigned short IVT_ADDR_TCC0_CCB = 0x0022; // Compare or Capture B Interrupt
const unsigned short IVT_ADDR_TCC0_CCC = 0x0024; // Compare or Capture C Interrupt
const unsigned short IVT_ADDR_TCC0_CCD = 0x0026; // Compare or Capture D Interrupt

// TCC1 interrupt vectors
const unsigned short IVT_ADDR_TCC1_OVF = 0x0028; // Overflow Interrupt
const unsigned short IVT_ADDR_TCC1_ERR = 0x002A; // Error Interrupt
const unsigned short IVT_ADDR_TCC1_CCA = 0x002C; // Compare or Capture A Interrupt
const unsigned short IVT_ADDR_TCC1_CCB = 0x002E; // Compare or Capture B Interrupt

// SPIC interrupt vectors
const unsigned short IVT_ADDR_SPIC_INT = 0x0030; // SPI Interrupt

// USARTC0 interrupt vectors
const unsigned short IVT_ADDR_USARTC0_RXC = 0x0032; // Reception Complete Interrupt
const unsigned short IVT_ADDR_USARTC0_DRE = 0x0034; // Data Register Empty Interrupt
const unsigned short IVT_ADDR_USARTC0_TXC = 0x0036; // Transmission Complete Interrupt

// USARTC1 interrupt vectors
const unsigned short IVT_ADDR_USARTC1_RXC = 0x0038; // Reception Complete Interrupt
const unsigned short IVT_ADDR_USARTC1_DRE = 0x003A; // Data Register Empty Interrupt
const unsigned short IVT_ADDR_USARTC1_TXC = 0x003C; // Transmission Complete Interrupt

// AES interrupt vectors
const unsigned short IVT_ADDR_AES_INT = 0x003E; // AES Interrupt

// NVM interrupt vectors
const unsigned short IVT_ADDR_NVM_EE = 0x0040; // EE Interrupt
const unsigned short IVT_ADDR_NVM_SPM = 0x0042; // SPM Interrupt

// PORTB interrupt vectors
const unsigned short IVT_ADDR_PORTB_INT0 = 0x0044; // External Interrupt 0
const unsigned short IVT_ADDR_PORTB_INT1 = 0x0046; // External Interrupt 1

// ACB interrupt vectors
const unsigned short IVT_ADDR_ACB_AC0 = 0x0048; // AC0 Interrupt
const unsigned short IVT_ADDR_ACB_AC1 = 0x004A; // AC1 Interrupt
const unsigned short IVT_ADDR_ACB_ACW = 0x004C; // ACW Window Mode Interrupt

// ADCB interrupt vectors
const unsigned short IVT_ADDR_ADCB_CH0 = 0x004E; // Interrupt 0
const unsigned short IVT_ADDR_ADCB_CH1 = 0x0050; // Interrupt 1
const unsigned short IVT_ADDR_ADCB_CH2 = 0x0052; // Interrupt 2
const unsigned short IVT_ADDR_ADCB_CH3 = 0x0054; // Interrupt 3

// PORTE interrupt vectors
const unsigned short IVT_ADDR_PORTE_INT0 = 0x0056; // External Interrupt 0
const unsigned short IVT_ADDR_PORTE_INT1 = 0x0058; // External Interrupt 1

// TWIE interrupt vectors
const unsigned short IVT_ADDR_TWIE_TWIS = 0x005A; // TWI Slave Interrupt
const unsigned short IVT_ADDR_TWIE_TWIM = 0x005C; // TWI Master Interrupt

// TCE0 interrupt vectors
const unsigned short IVT_ADDR_TCE0_OVF = 0x005E; // Overflow Interrupt
const unsigned short IVT_ADDR_TCE0_ERR = 0x0060; // Error Interrupt
const unsigned short IVT_ADDR_TCE0_CCA = 0x0062; // Compare or Capture A Interrupt
const unsigned short IVT_ADDR_TCE0_CCB = 0x0064; // Compare or Capture B Interrupt
const unsigned short IVT_ADDR_TCE0_CCC = 0x0066; // Compare or Capture C Interrupt
const unsigned short IVT_ADDR_TCE0_CCD = 0x0068; // Compare or Capture D Interrupt

// TCE1 interrupt vectors
const unsigned short IVT_ADDR_TCE1_OVF = 0x006A; // Overflow Interrupt
const unsigned short IVT_ADDR_TCE1_ERR = 0x006C; // Error Interrupt
const unsigned short IVT_ADDR_TCE1_CCA = 0x006E; // Compare or Capture A Interrupt
const unsigned short IVT_ADDR_TCE1_CCB = 0x0070; // Compare or Capture B Interrupt

// SPIE interrupt vectors
const unsigned short IVT_ADDR_SPIE_INT = 0x0072; // SPI Interrupt

// USARTE0 interrupt vectors
const unsigned short IVT_ADDR_USARTE0_RXC = 0x0074; // Reception Complete Interrupt
const unsigned short IVT_ADDR_USARTE0_DRE = 0x0076; // Data Register Empty Interrupt
const unsigned short IVT_ADDR_USARTE0_TXC = 0x0078; // Transmission Complete Interrupt

// USARTE1 interrupt vectors
const unsigned short IVT_ADDR_USARTE1_RXC = 0x007A; // Reception Complete Interrupt
const unsigned short IVT_ADDR_USARTE1_DRE = 0x007C; // Data Register Empty Interrupt
const unsigned short IVT_ADDR_USARTE1_TXC = 0x007E; // Transmission Complete Interrupt

// PORTD interrupt vectors
const unsigned short IVT_ADDR_PORTD_INT0 = 0x0080; // External Interrupt 0
const unsigned short IVT_ADDR_PORTD_INT1 = 0x0082; // External Interrupt 1

// PORTA interrupt vectors
const unsigned short IVT_ADDR_PORTA_INT0 = 0x0084; // External Interrupt 0
const unsigned short IVT_ADDR_PORTA_INT1 = 0x0086; // External Interrupt 1

// ACA interrupt vectors
const unsigned short IVT_ADDR_ACA_AC0 = 0x0088; // AC0 Interrupt
const unsigned short IVT_ADDR_ACA_AC1 = 0x008A; // AC1 Interrupt
const unsigned short IVT_ADDR_ACA_ACW = 0x008C; // ACW Window Mode Interrupt

// ADCA interrupt vectors
const unsigned short IVT_ADDR_ADCA_CH0 = 0x008E; // Interrupt 0
const unsigned short IVT_ADDR_ADCA_CH1 = 0x0090; // Interrupt 1
const unsigned short IVT_ADDR_ADCA_CH2 = 0x0092; // Interrupt 2
const unsigned short IVT_ADDR_ADCA_CH3 = 0x0094; // Interrupt 3

// TCD0 interrupt vectors
const unsigned short IVT_ADDR_TCD0_OVF = 0x009A; // Overflow Interrupt
const unsigned short IVT_ADDR_TCD0_ERR = 0x009C; // Error Interrupt
const unsigned short IVT_ADDR_TCD0_CCA = 0x009E; // Compare or Capture A Interrupt
const unsigned short IVT_ADDR_TCD0_CCB = 0x00A0; // Compare or Capture B Interrupt
const unsigned short IVT_ADDR_TCD0_CCC = 0x00A2; // Compare or Capture C Interrupt
const unsigned short IVT_ADDR_TCD0_CCD = 0x00A4; // Compare or Capture D Interrupt

// TCD1 interrupt vectors
const unsigned short IVT_ADDR_TCD1_OVF = 0x00A6; // Overflow Interrupt
const unsigned short IVT_ADDR_TCD1_ERR = 0x00A8; // Error Interrupt
const unsigned short IVT_ADDR_TCD1_CCA = 0x00AA; // Compare or Capture A Interrupt
const unsigned short IVT_ADDR_TCD1_CCB = 0x00AC; // Compare or Capture B Interrupt

// SPID interrupt vectors
const unsigned short IVT_ADDR_SPID_INT = 0x00AE; // SPI Interrupt

// USARTD0 interrupt vectors
const unsigned short IVT_ADDR_USARTD0_RXC = 0x00B0; // Reception Complete Interrupt
const unsigned short IVT_ADDR_USARTD0_DRE = 0x00B2; // Data Register Empty Interrupt
const unsigned short IVT_ADDR_USARTD0_TXC = 0x00B4; // Transmission Complete Interrupt

// USARTD1 interrupt vectors
const unsigned short IVT_ADDR_USARTD1_RXC = 0x00B6; // Reception Complete Interrupt
const unsigned short IVT_ADDR_USARTD1_DRE = 0x00B8; // Data Register Empty Interrupt
const unsigned short IVT_ADDR_USARTD1_TXC = 0x00BA; // Transmission Complete Interrupt

// PORTF interrupt vectors
const unsigned short IVT_ADDR_PORTF_INT0 = 0x00D0; // External Interrupt 0
const unsigned short IVT_ADDR_PORTF_INT1 = 0x00D2; // External Interrupt 1

// TCF0 interrupt vectors
const unsigned short IVT_ADDR_TCF0_OVF = 0x00D8; // Overflow Interrupt
const unsigned short IVT_ADDR_TCF0_ERR = 0x00DA; // Error Interrupt
const unsigned short IVT_ADDR_TCF0_CCA = 0x00DC; // Compare or Capture A Interrupt
const unsigned short IVT_ADDR_TCF0_CCB = 0x00DE; // Compare or Capture B Interrupt
const unsigned short IVT_ADDR_TCF0_CCC = 0x00E0; // Compare or Capture C Interrupt
const unsigned short IVT_ADDR_TCF0_CCD = 0x00E2; // Compare or Capture D Interrupt

// USARTF0 interrupt vectors
const unsigned short IVT_ADDR_USARTF0_RXC = 0x00EE; // Reception Complete Interrupt
const unsigned short IVT_ADDR_USARTF0_DRE = 0x00F0; // Data Register Empty Interrupt
const unsigned short IVT_ADDR_USARTF0_TXC = 0x00F2; // Transmission Complete Interrupt

sfr io   unsigned short volatile GPIO_GPIOR0          absolute 0x0000;
sfr io   unsigned short volatile GPIO_GPIOR1          absolute 0x0001;
sfr io   unsigned short volatile GPIO_GPIOR2          absolute 0x0002;
sfr io   unsigned short volatile GPIO_GPIOR3          absolute 0x0003;
sfr io   unsigned short volatile GPIO_GPIOR4          absolute 0x0004;
sfr io   unsigned short volatile GPIO_GPIOR5          absolute 0x0005;
sfr io   unsigned short volatile GPIO_GPIOR6          absolute 0x0006;
sfr io   unsigned short volatile GPIO_GPIOR7          absolute 0x0007;
sfr io   unsigned short volatile GPIO_GPIOR8          absolute 0x0008;
sfr io   unsigned short volatile GPIO_GPIOR9          absolute 0x0009;
sfr io   unsigned short volatile GPIO_GPIOR10         absolute 0x000A;
sfr io   unsigned short volatile GPIO_GPIOR11         absolute 0x000B;
sfr io   unsigned short volatile GPIO_GPIOR12         absolute 0x000C;
sfr io   unsigned short volatile GPIO_GPIOR13         absolute 0x000D;
sfr io   unsigned short volatile GPIO_GPIOR14         absolute 0x000E;
sfr io   unsigned short volatile GPIO_GPIOR15         absolute 0x000F;
sfr io   unsigned short volatile OCD_OCDR0            absolute 0x002E;
sfr io   unsigned short volatile OCD_OCDR1            absolute 0x002F;
sfr io   unsigned short volatile CPU_CCP              absolute 0x0034;
sfr io   unsigned short volatile CPU_RAMPD            absolute 0x0038;
sfr io   unsigned short volatile CPU_RAMPX            absolute 0x0039;
sfr io   unsigned short volatile CPU_RAMPY            absolute 0x003A;
sfr io   unsigned short volatile CPU_RAMPZ            absolute 0x003B;
sfr io   unsigned short volatile CPU_EIND             absolute 0x003C;
sfr io   unsigned short volatile CPU_SPL              absolute 0x003D;
sfr io   unsigned short volatile SPL                  absolute 0x003D;
sfr io   unsigned short volatile CPU_SPH              absolute 0x003E;
sfr io   unsigned short volatile SPH                  absolute 0x003E;
sfr io   unsigned short volatile CPU_SREG             absolute 0x003F;
sfr io   unsigned short volatile SREG                 absolute 0x003F;
sfr data unsigned short volatile CLK_CTRL             absolute 0x0040;
sfr data unsigned short volatile CLK_PSCTRL           absolute 0x0041;
sfr data unsigned short volatile CLK_LOCK             absolute 0x0042;
sfr data unsigned short volatile CLK_RTCCTRL          absolute 0x0043;
sfr data unsigned short volatile SLEEP_CTRL           absolute 0x0048;
sfr data unsigned short volatile OSC_CTRL             absolute 0x0050;
sfr data unsigned short volatile OSC_STATUS           absolute 0x0051;
sfr data unsigned short volatile OSC_XOSCCTRL         absolute 0x0052;
sfr data unsigned short volatile OSC_XOSCFAIL         absolute 0x0053;
sfr data unsigned short volatile OSC_RC32KCAL         absolute 0x0054;
sfr data unsigned short volatile OSC_PLLCTRL          absolute 0x0055;
sfr data unsigned short volatile OSC_DFLLCTRL         absolute 0x0056;
sfr data unsigned short volatile DFLLRC32M_CTRL       absolute 0x0060;
sfr data unsigned short volatile DFLLRC32M_CALA       absolute 0x0062;
sfr data unsigned short volatile DFLLRC32M_CALB       absolute 0x0063;
sfr data unsigned short volatile DFLLRC32M_COMP0      absolute 0x0064;
sfr data unsigned short volatile DFLLRC32M_COMP1      absolute 0x0065;
sfr data unsigned short volatile DFLLRC32M_COMP2      absolute 0x0066;
sfr data unsigned short volatile DFLLRC2M_CTRL        absolute 0x0068;
sfr data unsigned short volatile DFLLRC2M_CALA        absolute 0x006A;
sfr data unsigned short volatile DFLLRC2M_CALB        absolute 0x006B;
sfr data unsigned short volatile DFLLRC2M_COMP0       absolute 0x006C;
sfr data unsigned short volatile DFLLRC2M_COMP1       absolute 0x006D;
sfr data unsigned short volatile DFLLRC2M_COMP2       absolute 0x006E;
sfr data unsigned short volatile PR_PRGEN             absolute 0x0070;
sfr data unsigned short volatile PR_PRPA              absolute 0x0071;
sfr data unsigned short volatile PR_PRPB              absolute 0x0072;
sfr data unsigned short volatile PR_PRPC              absolute 0x0073;
sfr data unsigned short volatile PR_PRPD              absolute 0x0074;
sfr data unsigned short volatile PR_PRPE              absolute 0x0075;
sfr data unsigned short volatile PR_PRPF              absolute 0x0076;
sfr data unsigned short volatile RST_STATUS           absolute 0x0078;
sfr data unsigned short volatile RST_CTRL             absolute 0x0079;
sfr data unsigned short volatile WDT_CTRL             absolute 0x0080;
sfr data unsigned short volatile WDT_WINCTRL          absolute 0x0081;
sfr data unsigned short volatile WDT_STATUS           absolute 0x0082;
sfr data unsigned short volatile MCU_DEVID0           absolute 0x0090;
sfr data unsigned short volatile MCU_DEVID1           absolute 0x0091;
sfr data unsigned short volatile MCU_DEVID2           absolute 0x0092;
sfr data unsigned short volatile MCU_REVID            absolute 0x0093;
sfr data unsigned short volatile MCU_JTAGUID          absolute 0x0094;
sfr data unsigned short volatile MCU_MCUCR            absolute 0x0096;
sfr data unsigned short volatile MCU_EVSYSLOCK        absolute 0x0098;
sfr data unsigned short volatile MCU_AWEXLOCK         absolute 0x0099;
sfr data unsigned short volatile PMIC_STATUS          absolute 0x00A0;
sfr data unsigned short volatile PMIC_INTPRI          absolute 0x00A1;
sfr data unsigned short volatile PMIC_CTRL            absolute 0x00A2;
sfr data unsigned short volatile DMA_CTRL             absolute 0x0100;
sfr data unsigned short volatile DMA_INTFLAGS         absolute 0x0103;
sfr data unsigned short volatile DMA_STATUS           absolute 0x0104;
sfr data unsigned short volatile DMA_TEMP             absolute 0x0106;
sfr data unsigned short volatile DMA_CH0_CTRLA        absolute 0x0110;
sfr data unsigned short volatile DMA_CH0_CTRLB        absolute 0x0111;
sfr data unsigned short volatile DMA_CH0_ADDRCTRL     absolute 0x0112;
sfr data unsigned short volatile DMA_CH0_TRIGSRC      absolute 0x0113;
sfr data unsigned int   volatile DMA_CH0_TRFCNT       absolute 0x0114;
sfr data unsigned short volatile DMA_CH0_TRFCNTL      absolute 0x0114;
sfr data unsigned short volatile DMA_CH0_TRFCNTH      absolute 0x0115;
sfr data unsigned short volatile DMA_CH0_REPCNT       absolute 0x0116;
sfr data unsigned short volatile DMA_CH0_SRCADDR0     absolute 0x0118;
sfr data unsigned short volatile DMA_CH0_SRCADDR1     absolute 0x0119;
sfr data unsigned short volatile DMA_CH0_SRCADDR2     absolute 0x011A;
sfr data unsigned short volatile DMA_CH0_DESTADDR0    absolute 0x011C;
sfr data unsigned short volatile DMA_CH0_DESTADDR1    absolute 0x011D;
sfr data unsigned short volatile DMA_CH0_DESTADDR2    absolute 0x011E;
sfr data unsigned short volatile DMA_CH1_CTRLA        absolute 0x0120;
sfr data unsigned short volatile DMA_CH1_CTRLB        absolute 0x0121;
sfr data unsigned short volatile DMA_CH1_ADDRCTRL     absolute 0x0122;
sfr data unsigned short volatile DMA_CH1_TRIGSRC      absolute 0x0123;
sfr data unsigned int   volatile DMA_CH1_TRFCNT       absolute 0x0124;
sfr data unsigned short volatile DMA_CH1_TRFCNTL      absolute 0x0124;
sfr data unsigned short volatile DMA_CH1_TRFCNTH      absolute 0x0125;
sfr data unsigned short volatile DMA_CH1_REPCNT       absolute 0x0126;
sfr data unsigned short volatile DMA_CH1_SRCADDR0     absolute 0x0128;
sfr data unsigned short volatile DMA_CH1_SRCADDR1     absolute 0x0129;
sfr data unsigned short volatile DMA_CH1_SRCADDR2     absolute 0x012A;
sfr data unsigned short volatile DMA_CH1_DESTADDR0    absolute 0x012C;
sfr data unsigned short volatile DMA_CH1_DESTADDR1    absolute 0x012D;
sfr data unsigned short volatile DMA_CH1_DESTADDR2    absolute 0x012E;
sfr data unsigned short volatile DMA_CH2_CTRLA        absolute 0x0130;
sfr data unsigned short volatile DMA_CH2_CTRLB        absolute 0x0131;
sfr data unsigned short volatile DMA_CH2_ADDRCTRL     absolute 0x0132;
sfr data unsigned short volatile DMA_CH2_TRIGSRC      absolute 0x0133;
sfr data unsigned int   volatile DMA_CH2_TRFCNT       absolute 0x0134;
sfr data unsigned short volatile DMA_CH2_TRFCNTL      absolute 0x0134;
sfr data unsigned short volatile DMA_CH2_TRFCNTH      absolute 0x0135;
sfr data unsigned short volatile DMA_CH2_REPCNT       absolute 0x0136;
sfr data unsigned short volatile DMA_CH2_SRCADDR0     absolute 0x0138;
sfr data unsigned short volatile DMA_CH2_SRCADDR1     absolute 0x0139;
sfr data unsigned short volatile DMA_CH2_SRCADDR2     absolute 0x013A;
sfr data unsigned short volatile DMA_CH2_DESTADDR0    absolute 0x013C;
sfr data unsigned short volatile DMA_CH2_DESTADDR1    absolute 0x013D;
sfr data unsigned short volatile DMA_CH2_DESTADDR2    absolute 0x013E;
sfr data unsigned short volatile DMA_CH3_CTRLA        absolute 0x0140;
sfr data unsigned short volatile DMA_CH3_CTRLB        absolute 0x0141;
sfr data unsigned short volatile DMA_CH3_ADDRCTRL     absolute 0x0142;
sfr data unsigned short volatile DMA_CH3_TRIGSRC      absolute 0x0143;
sfr data unsigned int   volatile DMA_CH3_TRFCNT       absolute 0x0144;
sfr data unsigned short volatile DMA_CH3_TRFCNTL      absolute 0x0144;
sfr data unsigned short volatile DMA_CH3_TRFCNTH      absolute 0x0145;
sfr data unsigned short volatile DMA_CH3_REPCNT       absolute 0x0146;
sfr data unsigned short volatile DMA_CH3_SRCADDR0     absolute 0x0148;
sfr data unsigned short volatile DMA_CH3_SRCADDR1     absolute 0x0149;
sfr data unsigned short volatile DMA_CH3_SRCADDR2     absolute 0x014A;
sfr data unsigned short volatile DMA_CH3_DESTADDR0    absolute 0x014C;
sfr data unsigned short volatile DMA_CH3_DESTADDR1    absolute 0x014D;
sfr data unsigned short volatile DMA_CH3_DESTADDR2    absolute 0x014E;
sfr data unsigned short volatile EVSYS_CH0MUX         absolute 0x0180;
sfr data unsigned short volatile EVSYS_CH1MUX         absolute 0x0181;
sfr data unsigned short volatile EVSYS_CH2MUX         absolute 0x0182;
sfr data unsigned short volatile EVSYS_CH3MUX         absolute 0x0183;
sfr data unsigned short volatile EVSYS_CH4MUX         absolute 0x0184;
sfr data unsigned short volatile EVSYS_CH5MUX         absolute 0x0185;
sfr data unsigned short volatile EVSYS_CH6MUX         absolute 0x0186;
sfr data unsigned short volatile EVSYS_CH7MUX         absolute 0x0187;
sfr data unsigned short volatile EVSYS_CH0CTRL        absolute 0x0188;
sfr data unsigned short volatile EVSYS_CH1CTRL        absolute 0x0189;
sfr data unsigned short volatile EVSYS_CH2CTRL        absolute 0x018A;
sfr data unsigned short volatile EVSYS_CH3CTRL        absolute 0x018B;
sfr data unsigned short volatile EVSYS_CH4CTRL        absolute 0x018C;
sfr data unsigned short volatile EVSYS_CH5CTRL        absolute 0x018D;
sfr data unsigned short volatile EVSYS_CH6CTRL        absolute 0x018E;
sfr data unsigned short volatile EVSYS_CH7CTRL        absolute 0x018F;
sfr data unsigned short volatile EVSYS_STROBE         absolute 0x0190;
sfr data unsigned short volatile EVSYS_DATA           absolute 0x0191;
sfr data unsigned short volatile NVM_ADDR0            absolute 0x01C0;
sfr data unsigned short volatile NVM_ADDR1            absolute 0x01C1;
sfr data unsigned short volatile NVM_ADDR2            absolute 0x01C2;
sfr data unsigned short volatile NVM_DATA0            absolute 0x01C4;
sfr data unsigned short volatile NVM_DATA1            absolute 0x01C5;
sfr data unsigned short volatile NVM_DATA2            absolute 0x01C6;
sfr data unsigned short volatile NVM_CMD              absolute 0x01CA;
sfr data unsigned short volatile NVM_CTRLA            absolute 0x01CB;
sfr data unsigned short volatile NVM_CTRLB            absolute 0x01CC;
sfr data unsigned short volatile NVM_INTCTRL          absolute 0x01CD;
sfr data unsigned short volatile NVM_STATUS           absolute 0x01CF;
sfr data unsigned short volatile NVM_LOCKBITS         absolute 0x01D0;
sfr data unsigned short volatile ACA_AC0CTRL          absolute 0x0380;
sfr data unsigned short volatile ACA_AC1CTRL          absolute 0x0381;
sfr data unsigned short volatile ACA_AC0MUXCTRL       absolute 0x0382;
sfr data unsigned short volatile ACA_AC1MUXCTRL       absolute 0x0383;
sfr data unsigned short volatile ACA_CTRLA            absolute 0x0384;
sfr data unsigned short volatile ACA_CTRLB            absolute 0x0385;
sfr data unsigned short volatile ACA_WINCTRL          absolute 0x0386;
sfr data unsigned short volatile ACA_STATUS           absolute 0x0387;
sfr data unsigned short volatile ACB_AC0CTRL          absolute 0x0390;
sfr data unsigned short volatile ACB_AC1CTRL          absolute 0x0391;
sfr data unsigned short volatile ACB_AC0MUXCTRL       absolute 0x0392;
sfr data unsigned short volatile ACB_AC1MUXCTRL       absolute 0x0393;
sfr data unsigned short volatile ACB_CTRLA            absolute 0x0394;
sfr data unsigned short volatile ACB_CTRLB            absolute 0x0395;
sfr data unsigned short volatile ACB_WINCTRL          absolute 0x0396;
sfr data unsigned short volatile ACB_STATUS           absolute 0x0397;
sfr data unsigned short volatile ADCA_CTRLA           absolute 0x0200;
sfr data unsigned short volatile ADCA_CTRLB           absolute 0x0201;
sfr data unsigned short volatile ADCA_REFCTRL         absolute 0x0202;
sfr data unsigned short volatile ADCA_EVCTRL          absolute 0x0203;
sfr data unsigned short volatile ADCA_PRESCALER       absolute 0x0204;
sfr data unsigned short volatile ADCA_INTFLAGS        absolute 0x0206;
sfr data unsigned short volatile ADCA_TEMP            absolute 0x0207;
sfr data unsigned short volatile ADCA_CAL             absolute 0x020C;
sfr data unsigned int   volatile ADCA_CH0RES          absolute 0x0210;
sfr data unsigned short volatile ADCA_CH0RESL         absolute 0x0210;
sfr data unsigned short volatile ADCA_CH0RESH         absolute 0x0211;
sfr data unsigned int   volatile ADCA_CH1RES          absolute 0x0212;
sfr data unsigned short volatile ADCA_CH1RESL         absolute 0x0212;
sfr data unsigned short volatile ADCA_CH1RESH         absolute 0x0213;
sfr data unsigned int   volatile ADCA_CH2RES          absolute 0x0214;
sfr data unsigned short volatile ADCA_CH2RESL         absolute 0x0214;
sfr data unsigned short volatile ADCA_CH2RESH         absolute 0x0215;
sfr data unsigned int   volatile ADCA_CH3RES          absolute 0x0216;
sfr data unsigned short volatile ADCA_CH3RESL         absolute 0x0216;
sfr data unsigned short volatile ADCA_CH3RESH         absolute 0x0217;
sfr data unsigned int   volatile ADCA_CMP             absolute 0x0218;
sfr data unsigned short volatile ADCA_CH0_CTRL        absolute 0x0220;
sfr data unsigned short volatile ADCA_CH0_MUXCTRL     absolute 0x0221;
sfr data unsigned short volatile ADCA_CH0_INTCTRL     absolute 0x0222;
sfr data unsigned short volatile ADCA_CH0_INTFLAGS    absolute 0x0223;
sfr data unsigned int   volatile ADCA_CH0_RES         absolute 0x0224;
sfr data unsigned short volatile ADCA_CH0_RESL        absolute 0x0224;
sfr data unsigned short volatile ADCA_CH0_RESH        absolute 0x0225;
sfr data unsigned short volatile ADCA_CH1_CTRL        absolute 0x0228;
sfr data unsigned short volatile ADCA_CH1_MUXCTRL     absolute 0x0229;
sfr data unsigned short volatile ADCA_CH1_INTCTRL     absolute 0x022A;
sfr data unsigned short volatile ADCA_CH1_INTFLAGS    absolute 0x022B;
sfr data unsigned int   volatile ADCA_CH1_RES         absolute 0x022C;
sfr data unsigned short volatile ADCA_CH1_RESL        absolute 0x022C;
sfr data unsigned short volatile ADCA_CH1_RESH        absolute 0x022D;
sfr data unsigned short volatile ADCA_CH2_CTRL        absolute 0x0230;
sfr data unsigned short volatile ADCA_CH2_MUXCTRL     absolute 0x0231;
sfr data unsigned short volatile ADCA_CH2_INTCTRL     absolute 0x0232;
sfr data unsigned short volatile ADCA_CH2_INTFLAGS    absolute 0x0233;
sfr data unsigned int   volatile ADCA_CH2_RES         absolute 0x0234;
sfr data unsigned short volatile ADCA_CH2_RESL        absolute 0x0234;
sfr data unsigned short volatile ADCA_CH2_RESH        absolute 0x0235;
sfr data unsigned short volatile ADCA_CH3_CTRL        absolute 0x0238;
sfr data unsigned short volatile ADCA_CH3_MUXCTRL     absolute 0x0239;
sfr data unsigned short volatile ADCA_CH3_INTCTRL     absolute 0x023A;
sfr data unsigned short volatile ADCA_CH3_INTFLAGS    absolute 0x023B;
sfr data unsigned int   volatile ADCA_CH3_RES         absolute 0x023C;
sfr data unsigned short volatile ADCA_CH3_RESL        absolute 0x023C;
sfr data unsigned short volatile ADCA_CH3_RESH        absolute 0x023D;
sfr data unsigned short volatile ADCB_CTRLA           absolute 0x0240;
sfr data unsigned short volatile ADCB_CTRLB           absolute 0x0241;
sfr data unsigned short volatile ADCB_REFCTRL         absolute 0x0242;
sfr data unsigned short volatile ADCB_EVCTRL          absolute 0x0243;
sfr data unsigned short volatile ADCB_PRESCALER       absolute 0x0244;
sfr data unsigned short volatile ADCB_INTFLAGS        absolute 0x0246;
sfr data unsigned short volatile ADCB_TEMP            absolute 0x0247;
sfr data unsigned short volatile ADCB_CAL             absolute 0x024C;
sfr data unsigned int   volatile ADCB_CH0RES          absolute 0x0250;
sfr data unsigned short volatile ADCB_CH0RESL         absolute 0x0250;
sfr data unsigned short volatile ADCB_CH0RESH         absolute 0x0251;
sfr data unsigned int   volatile ADCB_CH1RES          absolute 0x0252;
sfr data unsigned short volatile ADCB_CH1RESL         absolute 0x0252;
sfr data unsigned short volatile ADCB_CH1RESH         absolute 0x0253;
sfr data unsigned int   volatile ADCB_CH2RES          absolute 0x0254;
sfr data unsigned short volatile ADCB_CH2RESL         absolute 0x0254;
sfr data unsigned short volatile ADCB_CH2RESH         absolute 0x0255;
sfr data unsigned int   volatile ADCB_CH3RES          absolute 0x0256;
sfr data unsigned short volatile ADCB_CH3RESL         absolute 0x0256;
sfr data unsigned short volatile ADCB_CH3RESH         absolute 0x0257;
sfr data unsigned int   volatile ADCB_CMP             absolute 0x0258;
sfr data unsigned short volatile ADCB_CH0_CTRL        absolute 0x0260;
sfr data unsigned short volatile ADCB_CH0_MUXCTRL     absolute 0x0261;
sfr data unsigned short volatile ADCB_CH0_INTCTRL     absolute 0x0262;
sfr data unsigned short volatile ADCB_CH0_INTFLAGS    absolute 0x0263;
sfr data unsigned int   volatile ADCB_CH0_RES         absolute 0x0264;
sfr data unsigned short volatile ADCB_CH0_RESL        absolute 0x0264;
sfr data unsigned short volatile ADCB_CH0_RESH        absolute 0x0265;
sfr data unsigned short volatile ADCB_CH1_CTRL        absolute 0x0268;
sfr data unsigned short volatile ADCB_CH1_MUXCTRL     absolute 0x0269;
sfr data unsigned short volatile ADCB_CH1_INTCTRL     absolute 0x026A;
sfr data unsigned short volatile ADCB_CH1_INTFLAGS    absolute 0x026B;
sfr data unsigned int   volatile ADCB_CH1_RES         absolute 0x026C;
sfr data unsigned short volatile ADCB_CH1_RESL        absolute 0x026C;
sfr data unsigned short volatile ADCB_CH1_RESH        absolute 0x026D;
sfr data unsigned short volatile ADCB_CH2_CTRL        absolute 0x0270;
sfr data unsigned short volatile ADCB_CH2_MUXCTRL     absolute 0x0271;
sfr data unsigned short volatile ADCB_CH2_INTCTRL     absolute 0x0272;
sfr data unsigned short volatile ADCB_CH2_INTFLAGS    absolute 0x0273;
sfr data unsigned int   volatile ADCB_CH2_RES         absolute 0x0274;
sfr data unsigned short volatile ADCB_CH2_RESL        absolute 0x0274;
sfr data unsigned short volatile ADCB_CH2_RESH        absolute 0x0275;
sfr data unsigned short volatile ADCB_CH3_CTRL        absolute 0x0278;
sfr data unsigned short volatile ADCB_CH3_MUXCTRL     absolute 0x0279;
sfr data unsigned short volatile ADCB_CH3_INTCTRL     absolute 0x027A;
sfr data unsigned short volatile ADCB_CH3_INTFLAGS    absolute 0x027B;
sfr data unsigned int   volatile ADCB_CH3_RES         absolute 0x027C;
sfr data unsigned short volatile ADCB_CH3_RESL        absolute 0x027C;
sfr data unsigned short volatile ADCB_CH3_RESH        absolute 0x027D;
sfr data unsigned short volatile DACB_CTRLA           absolute 0x0320;
sfr data unsigned short volatile DACB_CTRLB           absolute 0x0321;
sfr data unsigned short volatile DACB_CTRLC           absolute 0x0322;
sfr data unsigned short volatile DACB_EVCTRL          absolute 0x0323;
sfr data unsigned short volatile DACB_TIMCTRL         absolute 0x0324;
sfr data unsigned short volatile DACB_STATUS          absolute 0x0325;
sfr data unsigned short volatile DACB_GAINCAL         absolute 0x0328;
sfr data unsigned short volatile DACB_OFFSETCAL       absolute 0x0329;
sfr data unsigned int   volatile DACB_CH0DATA         absolute 0x0338;
sfr data unsigned short volatile DACB_CH0DATAL        absolute 0x0338;
sfr data unsigned short volatile DACB_CH0DATAH        absolute 0x0339;
sfr data unsigned int   volatile DACB_CH1DATA         absolute 0x033A;
sfr data unsigned short volatile DACB_CH1DATAL        absolute 0x033A;
sfr data unsigned short volatile DACB_CH1DATAH        absolute 0x033B;
sfr data unsigned short volatile RTC_CTRL             absolute 0x0400;
sfr data unsigned short volatile RTC_STATUS           absolute 0x0401;
sfr data unsigned short volatile RTC_INTCTRL          absolute 0x0402;
sfr data unsigned short volatile RTC_INTFLAGS         absolute 0x0403;
sfr data unsigned short volatile RTC_TEMP             absolute 0x0404;
sfr data unsigned int   volatile RTC_CNT              absolute 0x0408;
sfr data unsigned short volatile RTC_CNTL             absolute 0x0408;
sfr data unsigned short volatile RTC_CNTH             absolute 0x0409;
sfr data unsigned int   volatile RTC_PER              absolute 0x040A;
sfr data unsigned short volatile RTC_PERL             absolute 0x040A;
sfr data unsigned short volatile RTC_PERH             absolute 0x040B;
sfr data unsigned int   volatile RTC_COMP             absolute 0x040C;
sfr data unsigned short volatile RTC_COMPL            absolute 0x040C;
sfr data unsigned short volatile RTC_COMPH            absolute 0x040D;
sfr data unsigned short volatile TWIC_CTRL            absolute 0x0480;
sfr data unsigned short volatile TWIC_MASTER_CTRLA    absolute 0x0481;
sfr data unsigned short volatile TWIC_MASTER_CTRLB    absolute 0x0482;
sfr data unsigned short volatile TWIC_MASTER_CTRLC    absolute 0x0483;
sfr data unsigned short volatile TWIC_MASTER_STATUS   absolute 0x0484;
sfr data unsigned short volatile TWIC_MASTER_BAUD     absolute 0x0485;
sfr data unsigned short volatile TWIC_MASTER_ADDR     absolute 0x0486;
sfr data unsigned short volatile TWIC_MASTER_DATA     absolute 0x0487;
sfr data unsigned short volatile TWIC_SLAVE_CTRLA     absolute 0x0488;
sfr data unsigned short volatile TWIC_SLAVE_CTRLB     absolute 0x0489;
sfr data unsigned short volatile TWIC_SLAVE_STATUS    absolute 0x048A;
sfr data unsigned short volatile TWIC_SLAVE_ADDR      absolute 0x048B;
sfr data unsigned short volatile TWIC_SLAVE_DATA      absolute 0x048C;
sfr data unsigned short volatile TWIC_SLAVE_ADDRMASK  absolute 0x048D;
sfr data unsigned short volatile TWIE_CTRL            absolute 0x04A0;
sfr data unsigned short volatile TWIE_MASTER_CTRLA    absolute 0x04A1;
sfr data unsigned short volatile TWIE_MASTER_CTRLB    absolute 0x04A2;
sfr data unsigned short volatile TWIE_MASTER_CTRLC    absolute 0x04A3;
sfr data unsigned short volatile TWIE_MASTER_STATUS   absolute 0x04A4;
sfr data unsigned short volatile TWIE_MASTER_BAUD     absolute 0x04A5;
sfr data unsigned short volatile TWIE_MASTER_ADDR     absolute 0x04A6;
sfr data unsigned short volatile TWIE_MASTER_DATA     absolute 0x04A7;
sfr data unsigned short volatile TWIE_SLAVE_CTRLA     absolute 0x04A8;
sfr data unsigned short volatile TWIE_SLAVE_CTRLB     absolute 0x04A9;
sfr data unsigned short volatile TWIE_SLAVE_STATUS    absolute 0x04AA;
sfr data unsigned short volatile TWIE_SLAVE_ADDR      absolute 0x04AB;
sfr data unsigned short volatile TWIE_SLAVE_DATA      absolute 0x04AC;
sfr data unsigned short volatile TWIE_SLAVE_ADDRMASK  absolute 0x04AD;
sfr data unsigned short volatile PORTCFG_MPCMASK      absolute 0x00B0;
sfr data unsigned short volatile PORTCFG_VPCTRLA      absolute 0x00B2;
sfr data unsigned short volatile PORTCFG_VPCTRLB      absolute 0x00B3;
sfr data unsigned short volatile PORTCFG_CLKEVOUT     absolute 0x00B4;
sfr io   unsigned short volatile VPORT0_DIR           absolute 0x0010;
sfr io   unsigned short volatile VPORT0_OUT           absolute 0x0011;
sfr io   unsigned short volatile VPORT0_IN            absolute 0x0012;
sfr io   unsigned short volatile VPORT0_INTFLAGS      absolute 0x0013;
sfr io   unsigned short volatile VPORT1_DIR           absolute 0x0014;
sfr io   unsigned short volatile VPORT1_OUT           absolute 0x0015;
sfr io   unsigned short volatile VPORT1_IN            absolute 0x0016;
sfr io   unsigned short volatile VPORT1_INTFLAGS      absolute 0x0017;
sfr io   unsigned short volatile VPORT2_DIR           absolute 0x0018;
sfr io   unsigned short volatile VPORT2_OUT           absolute 0x0019;
sfr io   unsigned short volatile VPORT2_IN            absolute 0x001A;
sfr io   unsigned short volatile VPORT2_INTFLAGS      absolute 0x001B;
sfr io   unsigned short volatile VPORT3_DIR           absolute 0x001C;
sfr io   unsigned short volatile VPORT3_OUT           absolute 0x001D;
sfr io   unsigned short volatile VPORT3_IN            absolute 0x001E;
sfr io   unsigned short volatile VPORT3_INTFLAGS      absolute 0x001F;
sfr data unsigned short volatile PORTA_DIR            absolute 0x0600;
sfr data unsigned short volatile PORTA_DIRSET         absolute 0x0601;
sfr data unsigned short volatile PORTA_DIRCLR         absolute 0x0602;
sfr data unsigned short volatile PORTA_DIRTGL         absolute 0x0603;
sfr data unsigned short volatile PORTA_OUT            absolute 0x0604;
sfr data unsigned short volatile PORTA_OUTSET         absolute 0x0605;
sfr data unsigned short volatile PORTA_OUTCLR         absolute 0x0606;
sfr data unsigned short volatile PORTA_OUTTGL         absolute 0x0607;
sfr data unsigned short volatile PORTA_IN             absolute 0x0608;
sfr data unsigned short volatile PORTA_INTCTRL        absolute 0x0609;
sfr data unsigned short volatile PORTA_INT0MASK       absolute 0x060A;
sfr data unsigned short volatile PORTA_INT1MASK       absolute 0x060B;
sfr data unsigned short volatile PORTA_INTFLAGS       absolute 0x060C;
sfr data unsigned short volatile PORTA_PIN0CTRL       absolute 0x0610;
sfr data unsigned short volatile PORTA_PIN1CTRL       absolute 0x0611;
sfr data unsigned short volatile PORTA_PIN2CTRL       absolute 0x0612;
sfr data unsigned short volatile PORTA_PIN3CTRL       absolute 0x0613;
sfr data unsigned short volatile PORTA_PIN4CTRL       absolute 0x0614;
sfr data unsigned short volatile PORTA_PIN5CTRL       absolute 0x0615;
sfr data unsigned short volatile PORTA_PIN6CTRL       absolute 0x0616;
sfr data unsigned short volatile PORTA_PIN7CTRL       absolute 0x0617;
sfr data unsigned short volatile PORTB_DIR            absolute 0x0620;
sfr data unsigned short volatile PORTB_DIRSET         absolute 0x0621;
sfr data unsigned short volatile PORTB_DIRCLR         absolute 0x0622;
sfr data unsigned short volatile PORTB_DIRTGL         absolute 0x0623;
sfr data unsigned short volatile PORTB_OUT            absolute 0x0624;
sfr data unsigned short volatile PORTB_OUTSET         absolute 0x0625;
sfr data unsigned short volatile PORTB_OUTCLR         absolute 0x0626;
sfr data unsigned short volatile PORTB_OUTTGL         absolute 0x0627;
sfr data unsigned short volatile PORTB_IN             absolute 0x0628;
sfr data unsigned short volatile PORTB_INTCTRL        absolute 0x0629;
sfr data unsigned short volatile PORTB_INT0MASK       absolute 0x062A;
sfr data unsigned short volatile PORTB_INT1MASK       absolute 0x062B;
sfr data unsigned short volatile PORTB_INTFLAGS       absolute 0x062C;
sfr data unsigned short volatile PORTB_PIN0CTRL       absolute 0x0630;
sfr data unsigned short volatile PORTB_PIN1CTRL       absolute 0x0631;
sfr data unsigned short volatile PORTB_PIN2CTRL       absolute 0x0632;
sfr data unsigned short volatile PORTB_PIN3CTRL       absolute 0x0633;
sfr data unsigned short volatile PORTB_PIN4CTRL       absolute 0x0634;
sfr data unsigned short volatile PORTB_PIN5CTRL       absolute 0x0635;
sfr data unsigned short volatile PORTB_PIN6CTRL       absolute 0x0636;
sfr data unsigned short volatile PORTB_PIN7CTRL       absolute 0x0637;
sfr data unsigned short volatile PORTC_DIR            absolute 0x0640;
sfr data unsigned short volatile PORTC_DIRSET         absolute 0x0641;
sfr data unsigned short volatile PORTC_DIRCLR         absolute 0x0642;
sfr data unsigned short volatile PORTC_DIRTGL         absolute 0x0643;
sfr data unsigned short volatile PORTC_OUT            absolute 0x0644;
sfr data unsigned short volatile PORTC_OUTSET         absolute 0x0645;
sfr data unsigned short volatile PORTC_OUTCLR         absolute 0x0646;
sfr data unsigned short volatile PORTC_OUTTGL         absolute 0x0647;
sfr data unsigned short volatile PORTC_IN             absolute 0x0648;
sfr data unsigned short volatile PORTC_INTCTRL        absolute 0x0649;
sfr data unsigned short volatile PORTC_INT0MASK       absolute 0x064A;
sfr data unsigned short volatile PORTC_INT1MASK       absolute 0x064B;
sfr data unsigned short volatile PORTC_INTFLAGS       absolute 0x064C;
sfr data unsigned short volatile PORTC_PIN0CTRL       absolute 0x0650;
sfr data unsigned short volatile PORTC_PIN1CTRL       absolute 0x0651;
sfr data unsigned short volatile PORTC_PIN2CTRL       absolute 0x0652;
sfr data unsigned short volatile PORTC_PIN3CTRL       absolute 0x0653;
sfr data unsigned short volatile PORTC_PIN4CTRL       absolute 0x0654;
sfr data unsigned short volatile PORTC_PIN5CTRL       absolute 0x0655;
sfr data unsigned short volatile PORTC_PIN6CTRL       absolute 0x0656;
sfr data unsigned short volatile PORTC_PIN7CTRL       absolute 0x0657;
sfr data unsigned short volatile PORTD_DIR            absolute 0x0660;
sfr data unsigned short volatile PORTD_DIRSET         absolute 0x0661;
sfr data unsigned short volatile PORTD_DIRCLR         absolute 0x0662;
sfr data unsigned short volatile PORTD_DIRTGL         absolute 0x0663;
sfr data unsigned short volatile PORTD_OUT            absolute 0x0664;
sfr data unsigned short volatile PORTD_OUTSET         absolute 0x0665;
sfr data unsigned short volatile PORTD_OUTCLR         absolute 0x0666;
sfr data unsigned short volatile PORTD_OUTTGL         absolute 0x0667;
sfr data unsigned short volatile PORTD_IN             absolute 0x0668;
sfr data unsigned short volatile PORTD_INTCTRL        absolute 0x0669;
sfr data unsigned short volatile PORTD_INT0MASK       absolute 0x066A;
sfr data unsigned short volatile PORTD_INT1MASK       absolute 0x066B;
sfr data unsigned short volatile PORTD_INTFLAGS       absolute 0x066C;
sfr data unsigned short volatile PORTD_PIN0CTRL       absolute 0x0670;
sfr data unsigned short volatile PORTD_PIN1CTRL       absolute 0x0671;
sfr data unsigned short volatile PORTD_PIN2CTRL       absolute 0x0672;
sfr data unsigned short volatile PORTD_PIN3CTRL       absolute 0x0673;
sfr data unsigned short volatile PORTD_PIN4CTRL       absolute 0x0674;
sfr data unsigned short volatile PORTD_PIN5CTRL       absolute 0x0675;
sfr data unsigned short volatile PORTD_PIN6CTRL       absolute 0x0676;
sfr data unsigned short volatile PORTD_PIN7CTRL       absolute 0x0677;
sfr data unsigned short volatile PORTE_DIR            absolute 0x0680;
sfr data unsigned short volatile PORTE_DIRSET         absolute 0x0681;
sfr data unsigned short volatile PORTE_DIRCLR         absolute 0x0682;
sfr data unsigned short volatile PORTE_DIRTGL         absolute 0x0683;
sfr data unsigned short volatile PORTE_OUT            absolute 0x0684;
sfr data unsigned short volatile PORTE_OUTSET         absolute 0x0685;
sfr data unsigned short volatile PORTE_OUTCLR         absolute 0x0686;
sfr data unsigned short volatile PORTE_OUTTGL         absolute 0x0687;
sfr data unsigned short volatile PORTE_IN             absolute 0x0688;
sfr data unsigned short volatile PORTE_INTCTRL        absolute 0x0689;
sfr data unsigned short volatile PORTE_INT0MASK       absolute 0x068A;
sfr data unsigned short volatile PORTE_INT1MASK       absolute 0x068B;
sfr data unsigned short volatile PORTE_INTFLAGS       absolute 0x068C;
sfr data unsigned short volatile PORTE_PIN0CTRL       absolute 0x0690;
sfr data unsigned short volatile PORTE_PIN1CTRL       absolute 0x0691;
sfr data unsigned short volatile PORTE_PIN2CTRL       absolute 0x0692;
sfr data unsigned short volatile PORTE_PIN3CTRL       absolute 0x0693;
sfr data unsigned short volatile PORTE_PIN4CTRL       absolute 0x0694;
sfr data unsigned short volatile PORTE_PIN5CTRL       absolute 0x0695;
sfr data unsigned short volatile PORTE_PIN6CTRL       absolute 0x0696;
sfr data unsigned short volatile PORTE_PIN7CTRL       absolute 0x0697;
sfr data unsigned short volatile PORTF_DIR            absolute 0x06A0;
sfr data unsigned short volatile PORTF_DIRSET         absolute 0x06A1;
sfr data unsigned short volatile PORTF_DIRCLR         absolute 0x06A2;
sfr data unsigned short volatile PORTF_DIRTGL         absolute 0x06A3;
sfr data unsigned short volatile PORTF_OUT            absolute 0x06A4;
sfr data unsigned short volatile PORTF_OUTSET         absolute 0x06A5;
sfr data unsigned short volatile PORTF_OUTCLR         absolute 0x06A6;
sfr data unsigned short volatile PORTF_OUTTGL         absolute 0x06A7;
sfr data unsigned short volatile PORTF_IN             absolute 0x06A8;
sfr data unsigned short volatile PORTF_INTCTRL        absolute 0x06A9;
sfr data unsigned short volatile PORTF_INT0MASK       absolute 0x06AA;
sfr data unsigned short volatile PORTF_INT1MASK       absolute 0x06AB;
sfr data unsigned short volatile PORTF_INTFLAGS       absolute 0x06AC;
sfr data unsigned short volatile PORTF_PIN0CTRL       absolute 0x06B0;
sfr data unsigned short volatile PORTF_PIN1CTRL       absolute 0x06B1;
sfr data unsigned short volatile PORTF_PIN2CTRL       absolute 0x06B2;
sfr data unsigned short volatile PORTF_PIN3CTRL       absolute 0x06B3;
sfr data unsigned short volatile PORTF_PIN4CTRL       absolute 0x06B4;
sfr data unsigned short volatile PORTF_PIN5CTRL       absolute 0x06B5;
sfr data unsigned short volatile PORTF_PIN6CTRL       absolute 0x06B6;
sfr data unsigned short volatile PORTF_PIN7CTRL       absolute 0x06B7;
sfr data unsigned short volatile PORTR_DIR            absolute 0x07E0;
sfr data unsigned short volatile PORTR_DIRSET         absolute 0x07E1;
sfr data unsigned short volatile PORTR_DIRCLR         absolute 0x07E2;
sfr data unsigned short volatile PORTR_DIRTGL         absolute 0x07E3;
sfr data unsigned short volatile PORTR_OUT            absolute 0x07E4;
sfr data unsigned short volatile PORTR_OUTSET         absolute 0x07E5;
sfr data unsigned short volatile PORTR_OUTCLR         absolute 0x07E6;
sfr data unsigned short volatile PORTR_OUTTGL         absolute 0x07E7;
sfr data unsigned short volatile PORTR_IN             absolute 0x07E8;
sfr data unsigned short volatile PORTR_INTCTRL        absolute 0x07E9;
sfr data unsigned short volatile PORTR_INT0MASK       absolute 0x07EA;
sfr data unsigned short volatile PORTR_INT1MASK       absolute 0x07EB;
sfr data unsigned short volatile PORTR_INTFLAGS       absolute 0x07EC;
sfr data unsigned short volatile PORTR_PIN0CTRL       absolute 0x07F0;
sfr data unsigned short volatile PORTR_PIN1CTRL       absolute 0x07F1;
sfr data unsigned short volatile PORTR_PIN2CTRL       absolute 0x07F2;
sfr data unsigned short volatile PORTR_PIN3CTRL       absolute 0x07F3;
sfr data unsigned short volatile PORTR_PIN4CTRL       absolute 0x07F4;
sfr data unsigned short volatile PORTR_PIN5CTRL       absolute 0x07F5;
sfr data unsigned short volatile PORTR_PIN6CTRL       absolute 0x07F6;
sfr data unsigned short volatile PORTR_PIN7CTRL       absolute 0x07F7;
sfr data unsigned short volatile TCC0_CTRLA           absolute 0x0800;
sfr data unsigned short volatile TCC0_CTRLB           absolute 0x0801;
sfr data unsigned short volatile TCC0_CTRLC           absolute 0x0802;
sfr data unsigned short volatile TCC0_CTRLD           absolute 0x0803;
sfr data unsigned short volatile TCC0_CTRLE           absolute 0x0804;
sfr data unsigned short volatile TCC0_INTCTRLA        absolute 0x0806;
sfr data unsigned short volatile TCC0_INTCTRLB        absolute 0x0807;
sfr data unsigned short volatile TCC0_CTRLFCLR        absolute 0x0808;
sfr data unsigned short volatile TCC0_CTRLFSET        absolute 0x0809;
sfr data unsigned short volatile TCC0_CTRLGCLR        absolute 0x080A;
sfr data unsigned short volatile TCC0_CTRLGSET        absolute 0x080B;
sfr data unsigned short volatile TCC0_INTFLAGS        absolute 0x080C;
sfr data unsigned short volatile TCC0_TEMP            absolute 0x080F;
sfr data unsigned int   volatile TCC0_CNT             absolute 0x0820;
sfr data unsigned short volatile TCC0_CNTL            absolute 0x0820;
sfr data unsigned short volatile TCC0_CNTH            absolute 0x0821;
sfr data unsigned int   volatile TCC0_PER             absolute 0x0826;
sfr data unsigned short volatile TCC0_PERL            absolute 0x0826;
sfr data unsigned short volatile TCC0_PERH            absolute 0x0827;
sfr data unsigned int   volatile TCC0_CCA             absolute 0x0828;
sfr data unsigned short volatile TCC0_CCAL            absolute 0x0828;
sfr data unsigned short volatile TCC0_CCAH            absolute 0x0829;
sfr data unsigned int   volatile TCC0_CCB             absolute 0x082A;
sfr data unsigned short volatile TCC0_CCBL            absolute 0x082A;
sfr data unsigned short volatile TCC0_CCBH            absolute 0x082B;
sfr data unsigned int   volatile TCC0_CCC             absolute 0x082C;
sfr data unsigned short volatile TCC0_CCCL            absolute 0x082C;
sfr data unsigned short volatile TCC0_CCCH            absolute 0x082D;
sfr data unsigned int   volatile TCC0_CCD             absolute 0x082E;
sfr data unsigned short volatile TCC0_CCDL            absolute 0x082E;
sfr data unsigned short volatile TCC0_CCDH            absolute 0x082F;
sfr data unsigned int   volatile TCC0_PERBUF          absolute 0x0836;
sfr data unsigned short volatile TCC0_PERBUFL         absolute 0x0836;
sfr data unsigned short volatile TCC0_PERBUFH         absolute 0x0837;
sfr data unsigned int   volatile TCC0_CCABUF          absolute 0x0838;
sfr data unsigned short volatile TCC0_CCABUFL         absolute 0x0838;
sfr data unsigned short volatile TCC0_CCABUFH         absolute 0x0839;
sfr data unsigned int   volatile TCC0_CCBBUF          absolute 0x083A;
sfr data unsigned short volatile TCC0_CCBBUFL         absolute 0x083A;
sfr data unsigned short volatile TCC0_CCBBUFH         absolute 0x083B;
sfr data unsigned int   volatile TCC0_CCCBUF          absolute 0x083C;
sfr data unsigned short volatile TCC0_CCCBUFL         absolute 0x083C;
sfr data unsigned short volatile TCC0_CCCBUFH         absolute 0x083D;
sfr data unsigned int   volatile TCC0_CCDBUF          absolute 0x083E;
sfr data unsigned short volatile TCC0_CCDBUFL         absolute 0x083E;
sfr data unsigned short volatile TCC0_CCDBUFH         absolute 0x083F;
sfr data unsigned short volatile TCC1_CTRLA           absolute 0x0840;
sfr data unsigned short volatile TCC1_CTRLB           absolute 0x0841;
sfr data unsigned short volatile TCC1_CTRLC           absolute 0x0842;
sfr data unsigned short volatile TCC1_CTRLD           absolute 0x0843;
sfr data unsigned short volatile TCC1_CTRLE           absolute 0x0844;
sfr data unsigned short volatile TCC1_INTCTRLA        absolute 0x0846;
sfr data unsigned short volatile TCC1_INTCTRLB        absolute 0x0847;
sfr data unsigned short volatile TCC1_CTRLFCLR        absolute 0x0848;
sfr data unsigned short volatile TCC1_CTRLFSET        absolute 0x0849;
sfr data unsigned short volatile TCC1_CTRLGCLR        absolute 0x084A;
sfr data unsigned short volatile TCC1_CTRLGSET        absolute 0x084B;
sfr data unsigned short volatile TCC1_INTFLAGS        absolute 0x084C;
sfr data unsigned short volatile TCC1_TEMP            absolute 0x084F;
sfr data unsigned int   volatile TCC1_CNT             absolute 0x0860;
sfr data unsigned short volatile TCC1_CNTL            absolute 0x0860;
sfr data unsigned short volatile TCC1_CNTH            absolute 0x0861;
sfr data unsigned int   volatile TCC1_PER             absolute 0x0866;
sfr data unsigned short volatile TCC1_PERL            absolute 0x0866;
sfr data unsigned short volatile TCC1_PERH            absolute 0x0867;
sfr data unsigned int   volatile TCC1_CCA             absolute 0x0868;
sfr data unsigned short volatile TCC1_CCAL            absolute 0x0868;
sfr data unsigned short volatile TCC1_CCAH            absolute 0x0869;
sfr data unsigned int   volatile TCC1_CCB             absolute 0x086A;
sfr data unsigned short volatile TCC1_CCBL            absolute 0x086A;
sfr data unsigned short volatile TCC1_CCBH            absolute 0x086B;
sfr data unsigned int   volatile TCC1_PERBUF          absolute 0x0876;
sfr data unsigned short volatile TCC1_PERBUFL         absolute 0x0876;
sfr data unsigned short volatile TCC1_PERBUFH         absolute 0x0877;
sfr data unsigned int   volatile TCC1_CCABUF          absolute 0x0878;
sfr data unsigned short volatile TCC1_CCABUFL         absolute 0x0878;
sfr data unsigned short volatile TCC1_CCABUFH         absolute 0x0879;
sfr data unsigned int   volatile TCC1_CCBBUF          absolute 0x087A;
sfr data unsigned short volatile TCC1_CCBBUFL         absolute 0x087A;
sfr data unsigned short volatile TCC1_CCBBUFH         absolute 0x087B;
sfr data unsigned short volatile AWEXC_CTRL           absolute 0x0880;
sfr data unsigned short volatile AWEXC_FDEMASK        absolute 0x0882;
sfr data unsigned short volatile AWEXC_FDCTRL         absolute 0x0883;
sfr data unsigned short volatile AWEXC_STATUS         absolute 0x0884;
sfr data unsigned short volatile AWEXC_DTBOTH         absolute 0x0886;
sfr data unsigned short volatile AWEXC_DTBOTHBUF      absolute 0x0887;
sfr data unsigned short volatile AWEXC_DTLS           absolute 0x0888;
sfr data unsigned short volatile AWEXC_DTHS           absolute 0x0889;
sfr data unsigned short volatile AWEXC_DTLSBUF        absolute 0x088A;
sfr data unsigned short volatile AWEXC_DTHSBUF        absolute 0x088B;
sfr data unsigned short volatile AWEXC_OUTOVEN        absolute 0x088C;
sfr data unsigned short volatile HIRESC_CTRLA         absolute 0x0890;
sfr data unsigned short volatile USARTC0_DATA         absolute 0x08A0;
sfr data unsigned short volatile USARTC0_STATUS       absolute 0x08A1;
sfr data unsigned short volatile USARTC0_CTRLA        absolute 0x08A3;
sfr data unsigned short volatile USARTC0_CTRLB        absolute 0x08A4;
sfr data unsigned short volatile USARTC0_CTRLC        absolute 0x08A5;
sfr data unsigned short volatile USARTC0_BAUDCTRLA    absolute 0x08A6;
sfr data unsigned short volatile USARTC0_BAUDCTRLB    absolute 0x08A7;
sfr data unsigned short volatile USARTC1_DATA         absolute 0x08B0;
sfr data unsigned short volatile USARTC1_STATUS       absolute 0x08B1;
sfr data unsigned short volatile USARTC1_CTRLA        absolute 0x08B3;
sfr data unsigned short volatile USARTC1_CTRLB        absolute 0x08B4;
sfr data unsigned short volatile USARTC1_CTRLC        absolute 0x08B5;
sfr data unsigned short volatile USARTC1_BAUDCTRLA    absolute 0x08B6;
sfr data unsigned short volatile USARTC1_BAUDCTRLB    absolute 0x08B7;
sfr data unsigned short volatile SPIC_CTRL            absolute 0x08C0;
sfr data unsigned short volatile SPIC_INTCTRL         absolute 0x08C1;
sfr data unsigned short volatile SPIC_STATUS          absolute 0x08C2;
sfr data unsigned short volatile SPIC_DATA            absolute 0x08C3;
sfr data unsigned short volatile TCD0_CTRLA           absolute 0x0900;
sfr data unsigned short volatile TCD0_CTRLB           absolute 0x0901;
sfr data unsigned short volatile TCD0_CTRLC           absolute 0x0902;
sfr data unsigned short volatile TCD0_CTRLD           absolute 0x0903;
sfr data unsigned short volatile TCD0_CTRLE           absolute 0x0904;
sfr data unsigned short volatile TCD0_INTCTRLA        absolute 0x0906;
sfr data unsigned short volatile TCD0_INTCTRLB        absolute 0x0907;
sfr data unsigned short volatile TCD0_CTRLFCLR        absolute 0x0908;
sfr data unsigned short volatile TCD0_CTRLFSET        absolute 0x0909;
sfr data unsigned short volatile TCD0_CTRLGCLR        absolute 0x090A;
sfr data unsigned short volatile TCD0_CTRLGSET        absolute 0x090B;
sfr data unsigned short volatile TCD0_INTFLAGS        absolute 0x090C;
sfr data unsigned short volatile TCD0_TEMP            absolute 0x090F;
sfr data unsigned int   volatile TCD0_CNT             absolute 0x0920;
sfr data unsigned short volatile TCD0_CNTL            absolute 0x0920;
sfr data unsigned short volatile TCD0_CNTH            absolute 0x0921;
sfr data unsigned int   volatile TCD0_PER             absolute 0x0926;
sfr data unsigned short volatile TCD0_PERL            absolute 0x0926;
sfr data unsigned short volatile TCD0_PERH            absolute 0x0927;
sfr data unsigned int   volatile TCD0_CCA             absolute 0x0928;
sfr data unsigned short volatile TCD0_CCAL            absolute 0x0928;
sfr data unsigned short volatile TCD0_CCAH            absolute 0x0929;
sfr data unsigned int   volatile TCD0_CCB             absolute 0x092A;
sfr data unsigned short volatile TCD0_CCBL            absolute 0x092A;
sfr data unsigned short volatile TCD0_CCBH            absolute 0x092B;
sfr data unsigned int   volatile TCD0_CCC             absolute 0x092C;
sfr data unsigned short volatile TCD0_CCCL            absolute 0x092C;
sfr data unsigned short volatile TCD0_CCCH            absolute 0x092D;
sfr data unsigned int   volatile TCD0_CCD             absolute 0x092E;
sfr data unsigned short volatile TCD0_CCDL            absolute 0x092E;
sfr data unsigned short volatile TCD0_CCDH            absolute 0x092F;
sfr data unsigned int   volatile TCD0_PERBUF          absolute 0x0936;
sfr data unsigned short volatile TCD0_PERBUFL         absolute 0x0936;
sfr data unsigned short volatile TCD0_PERBUFH         absolute 0x0937;
sfr data unsigned int   volatile TCD0_CCABUF          absolute 0x0938;
sfr data unsigned short volatile TCD0_CCABUFL         absolute 0x0938;
sfr data unsigned short volatile TCD0_CCABUFH         absolute 0x0939;
sfr data unsigned int   volatile TCD0_CCBBUF          absolute 0x093A;
sfr data unsigned short volatile TCD0_CCBBUFL         absolute 0x093A;
sfr data unsigned short volatile TCD0_CCBBUFH         absolute 0x093B;
sfr data unsigned int   volatile TCD0_CCCBUF          absolute 0x093C;
sfr data unsigned short volatile TCD0_CCCBUFL         absolute 0x093C;
sfr data unsigned short volatile TCD0_CCCBUFH         absolute 0x093D;
sfr data unsigned int   volatile TCD0_CCDBUF          absolute 0x093E;
sfr data unsigned short volatile TCD0_CCDBUFL         absolute 0x093E;
sfr data unsigned short volatile TCD0_CCDBUFH         absolute 0x093F;
sfr data unsigned short volatile TCD1_CTRLA           absolute 0x0940;
sfr data unsigned short volatile TCD1_CTRLB           absolute 0x0941;
sfr data unsigned short volatile TCD1_CTRLC           absolute 0x0942;
sfr data unsigned short volatile TCD1_CTRLD           absolute 0x0943;
sfr data unsigned short volatile TCD1_CTRLE           absolute 0x0944;
sfr data unsigned short volatile TCD1_INTCTRLA        absolute 0x0946;
sfr data unsigned short volatile TCD1_INTCTRLB        absolute 0x0947;
sfr data unsigned short volatile TCD1_CTRLFCLR        absolute 0x0948;
sfr data unsigned short volatile TCD1_CTRLFSET        absolute 0x0949;
sfr data unsigned short volatile TCD1_CTRLGCLR        absolute 0x094A;
sfr data unsigned short volatile TCD1_CTRLGSET        absolute 0x094B;
sfr data unsigned short volatile TCD1_INTFLAGS        absolute 0x094C;
sfr data unsigned short volatile TCD1_TEMP            absolute 0x094F;
sfr data unsigned int   volatile TCD1_CNT             absolute 0x0960;
sfr data unsigned short volatile TCD1_CNTL            absolute 0x0960;
sfr data unsigned short volatile TCD1_CNTH            absolute 0x0961;
sfr data unsigned int   volatile TCD1_PER             absolute 0x0966;
sfr data unsigned short volatile TCD1_PERL            absolute 0x0966;
sfr data unsigned short volatile TCD1_PERH            absolute 0x0967;
sfr data unsigned int   volatile TCD1_CCA             absolute 0x0968;
sfr data unsigned short volatile TCD1_CCAL            absolute 0x0968;
sfr data unsigned short volatile TCD1_CCAH            absolute 0x0969;
sfr data unsigned int   volatile TCD1_CCB             absolute 0x096A;
sfr data unsigned short volatile TCD1_CCBL            absolute 0x096A;
sfr data unsigned short volatile TCD1_CCBH            absolute 0x096B;
sfr data unsigned int   volatile TCD1_PERBUF          absolute 0x0976;
sfr data unsigned short volatile TCD1_PERBUFL         absolute 0x0976;
sfr data unsigned short volatile TCD1_PERBUFH         absolute 0x0977;
sfr data unsigned int   volatile TCD1_CCABUF          absolute 0x0978;
sfr data unsigned short volatile TCD1_CCABUFL         absolute 0x0978;
sfr data unsigned short volatile TCD1_CCABUFH         absolute 0x0979;
sfr data unsigned int   volatile TCD1_CCBBUF          absolute 0x097A;
sfr data unsigned short volatile TCD1_CCBBUFL         absolute 0x097A;
sfr data unsigned short volatile TCD1_CCBBUFH         absolute 0x097B;
sfr data unsigned short volatile HIRESD_CTRLA         absolute 0x0990;
sfr data unsigned short volatile USARTD0_DATA         absolute 0x09A0;
sfr data unsigned short volatile USARTD0_STATUS       absolute 0x09A1;
sfr data unsigned short volatile USARTD0_CTRLA        absolute 0x09A3;
sfr data unsigned short volatile USARTD0_CTRLB        absolute 0x09A4;
sfr data unsigned short volatile USARTD0_CTRLC        absolute 0x09A5;
sfr data unsigned short volatile USARTD0_BAUDCTRLA    absolute 0x09A6;
sfr data unsigned short volatile USARTD0_BAUDCTRLB    absolute 0x09A7;
sfr data unsigned short volatile USARTD1_DATA         absolute 0x09B0;
sfr data unsigned short volatile USARTD1_STATUS       absolute 0x09B1;
sfr data unsigned short volatile USARTD1_CTRLA        absolute 0x09B3;
sfr data unsigned short volatile USARTD1_CTRLB        absolute 0x09B4;
sfr data unsigned short volatile USARTD1_CTRLC        absolute 0x09B5;
sfr data unsigned short volatile USARTD1_BAUDCTRLA    absolute 0x09B6;
sfr data unsigned short volatile USARTD1_BAUDCTRLB    absolute 0x09B7;
sfr data unsigned short volatile SPID_CTRL            absolute 0x09C0;
sfr data unsigned short volatile SPID_INTCTRL         absolute 0x09C1;
sfr data unsigned short volatile SPID_STATUS          absolute 0x09C2;
sfr data unsigned short volatile SPID_DATA            absolute 0x09C3;
sfr data unsigned short volatile TCE0_CTRLA           absolute 0x0A00;
sfr data unsigned short volatile TCE0_CTRLB           absolute 0x0A01;
sfr data unsigned short volatile TCE0_CTRLC           absolute 0x0A02;
sfr data unsigned short volatile TCE0_CTRLD           absolute 0x0A03;
sfr data unsigned short volatile TCE0_CTRLE           absolute 0x0A04;
sfr data unsigned short volatile TCE0_INTCTRLA        absolute 0x0A06;
sfr data unsigned short volatile TCE0_INTCTRLB        absolute 0x0A07;
sfr data unsigned short volatile TCE0_CTRLFCLR        absolute 0x0A08;
sfr data unsigned short volatile TCE0_CTRLFSET        absolute 0x0A09;
sfr data unsigned short volatile TCE0_CTRLGCLR        absolute 0x0A0A;
sfr data unsigned short volatile TCE0_CTRLGSET        absolute 0x0A0B;
sfr data unsigned short volatile TCE0_INTFLAGS        absolute 0x0A0C;
sfr data unsigned short volatile TCE0_TEMP            absolute 0x0A0F;
sfr data unsigned int   volatile TCE0_CNT             absolute 0x0A20;
sfr data unsigned short volatile TCE0_CNTL            absolute 0x0A20;
sfr data unsigned short volatile TCE0_CNTH            absolute 0x0A21;
sfr data unsigned int   volatile TCE0_PER             absolute 0x0A26;
sfr data unsigned short volatile TCE0_PERL            absolute 0x0A26;
sfr data unsigned short volatile TCE0_PERH            absolute 0x0A27;
sfr data unsigned int   volatile TCE0_CCA             absolute 0x0A28;
sfr data unsigned short volatile TCE0_CCAL            absolute 0x0A28;
sfr data unsigned short volatile TCE0_CCAH            absolute 0x0A29;
sfr data unsigned int   volatile TCE0_CCB             absolute 0x0A2A;
sfr data unsigned short volatile TCE0_CCBL            absolute 0x0A2A;
sfr data unsigned short volatile TCE0_CCBH            absolute 0x0A2B;
sfr data unsigned int   volatile TCE0_CCC             absolute 0x0A2C;
sfr data unsigned short volatile TCE0_CCCL            absolute 0x0A2C;
sfr data unsigned short volatile TCE0_CCCH            absolute 0x0A2D;
sfr data unsigned int   volatile TCE0_CCD             absolute 0x0A2E;
sfr data unsigned short volatile TCE0_CCDL            absolute 0x0A2E;
sfr data unsigned short volatile TCE0_CCDH            absolute 0x0A2F;
sfr data unsigned int   volatile TCE0_PERBUF          absolute 0x0A36;
sfr data unsigned short volatile TCE0_PERBUFL         absolute 0x0A36;
sfr data unsigned short volatile TCE0_PERBUFH         absolute 0x0A37;
sfr data unsigned int   volatile TCE0_CCABUF          absolute 0x0A38;
sfr data unsigned short volatile TCE0_CCABUFL         absolute 0x0A38;
sfr data unsigned short volatile TCE0_CCABUFH         absolute 0x0A39;
sfr data unsigned int   volatile TCE0_CCBBUF          absolute 0x0A3A;
sfr data unsigned short volatile TCE0_CCBBUFL         absolute 0x0A3A;
sfr data unsigned short volatile TCE0_CCBBUFH         absolute 0x0A3B;
sfr data unsigned int   volatile TCE0_CCCBUF          absolute 0x0A3C;
sfr data unsigned short volatile TCE0_CCCBUFL         absolute 0x0A3C;
sfr data unsigned short volatile TCE0_CCCBUFH         absolute 0x0A3D;
sfr data unsigned int   volatile TCE0_CCDBUF          absolute 0x0A3E;
sfr data unsigned short volatile TCE0_CCDBUFL         absolute 0x0A3E;
sfr data unsigned short volatile TCE0_CCDBUFH         absolute 0x0A3F;
sfr data unsigned short volatile TCE1_CTRLA           absolute 0x0A40;
sfr data unsigned short volatile TCE1_CTRLB           absolute 0x0A41;
sfr data unsigned short volatile TCE1_CTRLC           absolute 0x0A42;
sfr data unsigned short volatile TCE1_CTRLD           absolute 0x0A43;
sfr data unsigned short volatile TCE1_CTRLE           absolute 0x0A44;
sfr data unsigned short volatile TCE1_INTCTRLA        absolute 0x0A46;
sfr data unsigned short volatile TCE1_INTCTRLB        absolute 0x0A47;
sfr data unsigned short volatile TCE1_CTRLFCLR        absolute 0x0A48;
sfr data unsigned short volatile TCE1_CTRLFSET        absolute 0x0A49;
sfr data unsigned short volatile TCE1_CTRLGCLR        absolute 0x0A4A;
sfr data unsigned short volatile TCE1_CTRLGSET        absolute 0x0A4B;
sfr data unsigned short volatile TCE1_INTFLAGS        absolute 0x0A4C;
sfr data unsigned short volatile TCE1_TEMP            absolute 0x0A4F;
sfr data unsigned int   volatile TCE1_CNT             absolute 0x0A60;
sfr data unsigned short volatile TCE1_CNTL            absolute 0x0A60;
sfr data unsigned short volatile TCE1_CNTH            absolute 0x0A61;
sfr data unsigned int   volatile TCE1_PER             absolute 0x0A66;
sfr data unsigned short volatile TCE1_PERL            absolute 0x0A66;
sfr data unsigned short volatile TCE1_PERH            absolute 0x0A67;
sfr data unsigned int   volatile TCE1_CCA             absolute 0x0A68;
sfr data unsigned short volatile TCE1_CCAL            absolute 0x0A68;
sfr data unsigned short volatile TCE1_CCAH            absolute 0x0A69;
sfr data unsigned int   volatile TCE1_CCB             absolute 0x0A6A;
sfr data unsigned short volatile TCE1_CCBL            absolute 0x0A6A;
sfr data unsigned short volatile TCE1_CCBH            absolute 0x0A6B;
sfr data unsigned int   volatile TCE1_PERBUF          absolute 0x0A76;
sfr data unsigned short volatile TCE1_PERBUFL         absolute 0x0A76;
sfr data unsigned short volatile TCE1_PERBUFH         absolute 0x0A77;
sfr data unsigned int   volatile TCE1_CCABUF          absolute 0x0A78;
sfr data unsigned short volatile TCE1_CCABUFL         absolute 0x0A78;
sfr data unsigned short volatile TCE1_CCABUFH         absolute 0x0A79;
sfr data unsigned int   volatile TCE1_CCBBUF          absolute 0x0A7A;
sfr data unsigned short volatile TCE1_CCBBUFL         absolute 0x0A7A;
sfr data unsigned short volatile TCE1_CCBBUFH         absolute 0x0A7B;
sfr data unsigned short volatile AWEXE_CTRL           absolute 0x0A80;
sfr data unsigned short volatile AWEXE_FDEMASK        absolute 0x0A82;
sfr data unsigned short volatile AWEXE_FDCTRL         absolute 0x0A83;
sfr data unsigned short volatile AWEXE_STATUS         absolute 0x0A84;
sfr data unsigned short volatile AWEXE_DTBOTH         absolute 0x0A86;
sfr data unsigned short volatile AWEXE_DTBOTHBUF      absolute 0x0A87;
sfr data unsigned short volatile AWEXE_DTLS           absolute 0x0A88;
sfr data unsigned short volatile AWEXE_DTHS           absolute 0x0A89;
sfr data unsigned short volatile AWEXE_DTLSBUF        absolute 0x0A8A;
sfr data unsigned short volatile AWEXE_DTHSBUF        absolute 0x0A8B;
sfr data unsigned short volatile AWEXE_OUTOVEN        absolute 0x0A8C;
sfr data unsigned short volatile HIRESE_CTRLA         absolute 0x0A90;
sfr data unsigned short volatile USARTE0_DATA         absolute 0x0AA0;
sfr data unsigned short volatile USARTE0_STATUS       absolute 0x0AA1;
sfr data unsigned short volatile USARTE0_CTRLA        absolute 0x0AA3;
sfr data unsigned short volatile USARTE0_CTRLB        absolute 0x0AA4;
sfr data unsigned short volatile USARTE0_CTRLC        absolute 0x0AA5;
sfr data unsigned short volatile USARTE0_BAUDCTRLA    absolute 0x0AA6;
sfr data unsigned short volatile USARTE0_BAUDCTRLB    absolute 0x0AA7;
sfr data unsigned short volatile USARTE1_DATA         absolute 0x0AB0;
sfr data unsigned short volatile USARTE1_STATUS       absolute 0x0AB1;
sfr data unsigned short volatile USARTE1_CTRLA        absolute 0x0AB3;
sfr data unsigned short volatile USARTE1_CTRLB        absolute 0x0AB4;
sfr data unsigned short volatile USARTE1_CTRLC        absolute 0x0AB5;
sfr data unsigned short volatile USARTE1_BAUDCTRLA    absolute 0x0AB6;
sfr data unsigned short volatile USARTE1_BAUDCTRLB    absolute 0x0AB7;
sfr data unsigned short volatile SPIE_CTRL            absolute 0x0AC0;
sfr data unsigned short volatile SPIE_INTCTRL         absolute 0x0AC1;
sfr data unsigned short volatile SPIE_STATUS          absolute 0x0AC2;
sfr data unsigned short volatile SPIE_DATA            absolute 0x0AC3;
sfr data unsigned short volatile TCF0_CTRLA           absolute 0x0B00;
sfr data unsigned short volatile TCF0_CTRLB           absolute 0x0B01;
sfr data unsigned short volatile TCF0_CTRLC           absolute 0x0B02;
sfr data unsigned short volatile TCF0_CTRLD           absolute 0x0B03;
sfr data unsigned short volatile TCF0_CTRLE           absolute 0x0B04;
sfr data unsigned short volatile TCF0_INTCTRLA        absolute 0x0B06;
sfr data unsigned short volatile TCF0_INTCTRLB        absolute 0x0B07;
sfr data unsigned short volatile TCF0_CTRLFCLR        absolute 0x0B08;
sfr data unsigned short volatile TCF0_CTRLFSET        absolute 0x0B09;
sfr data unsigned short volatile TCF0_CTRLGCLR        absolute 0x0B0A;
sfr data unsigned short volatile TCF0_CTRLGSET        absolute 0x0B0B;
sfr data unsigned short volatile TCF0_INTFLAGS        absolute 0x0B0C;
sfr data unsigned short volatile TCF0_TEMP            absolute 0x0B0F;
sfr data unsigned int   volatile TCF0_CNT             absolute 0x0B20;
sfr data unsigned short volatile TCF0_CNTL            absolute 0x0B20;
sfr data unsigned short volatile TCF0_CNTH            absolute 0x0B21;
sfr data unsigned int   volatile TCF0_PER             absolute 0x0B26;
sfr data unsigned short volatile TCF0_PERL            absolute 0x0B26;
sfr data unsigned short volatile TCF0_PERH            absolute 0x0B27;
sfr data unsigned int   volatile TCF0_CCA             absolute 0x0B28;
sfr data unsigned short volatile TCF0_CCAL            absolute 0x0B28;
sfr data unsigned short volatile TCF0_CCAH            absolute 0x0B29;
sfr data unsigned int   volatile TCF0_CCB             absolute 0x0B2A;
sfr data unsigned short volatile TCF0_CCBL            absolute 0x0B2A;
sfr data unsigned short volatile TCF0_CCBH            absolute 0x0B2B;
sfr data unsigned int   volatile TCF0_CCC             absolute 0x0B2C;
sfr data unsigned short volatile TCF0_CCCL            absolute 0x0B2C;
sfr data unsigned short volatile TCF0_CCCH            absolute 0x0B2D;
sfr data unsigned int   volatile TCF0_CCD             absolute 0x0B2E;
sfr data unsigned short volatile TCF0_CCDL            absolute 0x0B2E;
sfr data unsigned short volatile TCF0_CCDH            absolute 0x0B2F;
sfr data unsigned int   volatile TCF0_PERBUF          absolute 0x0B36;
sfr data unsigned short volatile TCF0_PERBUFL         absolute 0x0B36;
sfr data unsigned short volatile TCF0_PERBUFH         absolute 0x0B37;
sfr data unsigned int   volatile TCF0_CCABUF          absolute 0x0B38;
sfr data unsigned short volatile TCF0_CCABUFL         absolute 0x0B38;
sfr data unsigned short volatile TCF0_CCABUFH         absolute 0x0B39;
sfr data unsigned int   volatile TCF0_CCBBUF          absolute 0x0B3A;
sfr data unsigned short volatile TCF0_CCBBUFL         absolute 0x0B3A;
sfr data unsigned short volatile TCF0_CCBBUFH         absolute 0x0B3B;
sfr data unsigned int   volatile TCF0_CCCBUF          absolute 0x0B3C;
sfr data unsigned short volatile TCF0_CCCBUFL         absolute 0x0B3C;
sfr data unsigned short volatile TCF0_CCCBUFH         absolute 0x0B3D;
sfr data unsigned int   volatile TCF0_CCDBUF          absolute 0x0B3E;
sfr data unsigned short volatile TCF0_CCDBUFL         absolute 0x0B3E;
sfr data unsigned short volatile TCF0_CCDBUFH         absolute 0x0B3F;
sfr data unsigned short volatile HIRESF_CTRLA         absolute 0x0B90;
sfr data unsigned short volatile USARTF0_DATA         absolute 0x0BA0;
sfr data unsigned short volatile USARTF0_STATUS       absolute 0x0BA1;
sfr data unsigned short volatile USARTF0_CTRLA        absolute 0x0BA3;
sfr data unsigned short volatile USARTF0_CTRLB        absolute 0x0BA4;
sfr data unsigned short volatile USARTF0_CTRLC        absolute 0x0BA5;
sfr data unsigned short volatile USARTF0_BAUDCTRLA    absolute 0x0BA6;
sfr data unsigned short volatile USARTF0_BAUDCTRLB    absolute 0x0BA7;
sfr data unsigned short volatile USARTF1_DATA         absolute 0x0BB0;
sfr data unsigned short volatile USARTF1_STATUS       absolute 0x0BB1;
sfr data unsigned short volatile USARTF1_CTRLA        absolute 0x0BB3;
sfr data unsigned short volatile USARTF1_CTRLB        absolute 0x0BB4;
sfr data unsigned short volatile USARTF1_CTRLC        absolute 0x0BB5;
sfr data unsigned short volatile USARTF1_BAUDCTRLA    absolute 0x0BB6;
sfr data unsigned short volatile USARTF1_BAUDCTRLB    absolute 0x0BB7;
sfr data unsigned short volatile SPIF_CTRL            absolute 0x0BC0;
sfr data unsigned short volatile SPIF_INTCTRL         absolute 0x0BC1;
sfr data unsigned short volatile SPIF_STATUS          absolute 0x0BC2;
sfr data unsigned short volatile SPIF_DATA            absolute 0x0BC3;
sfr data unsigned short volatile IRCOM_CTRL           absolute 0x08F8;
sfr data unsigned short volatile IRCOM_TXPLCTRL       absolute 0x08F9;
sfr data unsigned short volatile IRCOM_RXPLCTRL       absolute 0x08FA;
sfr data unsigned short volatile AES_CTRL             absolute 0x00C0;
sfr data unsigned short volatile AES_STATUS           absolute 0x00C1;
sfr data unsigned short volatile AES_STATE            absolute 0x00C2;
sfr data unsigned short volatile AES_KEY              absolute 0x00C3;
sfr data unsigned short volatile AES_INTCTRL          absolute 0x00C4;


    // OCD_OCDR1 bits
    sbit  OCDRD_bit at OCD_OCDR1.B0;
    const register unsigned short int OCDRD = 0;

    // CPU_CCP bits
    sbit  CCP0_bit at CPU_CCP.B0;
    const register unsigned short int CCP0 = 0;
    sbit  CCP1_bit at CPU_CCP.B1;
    const register unsigned short int CCP1 = 1;
    sbit  CCP2_bit at CPU_CCP.B2;
    const register unsigned short int CCP2 = 2;
    sbit  CCP3_bit at CPU_CCP.B3;
    const register unsigned short int CCP3 = 3;
    sbit  CCP4_bit at CPU_CCP.B4;
    const register unsigned short int CCP4 = 4;
    sbit  CCP5_bit at CPU_CCP.B5;
    const register unsigned short int CCP5 = 5;
    sbit  CCP6_bit at CPU_CCP.B6;
    const register unsigned short int CCP6 = 6;
    sbit  CCP7_bit at CPU_CCP.B7;
    const register unsigned short int CCP7 = 7;

    // CPU_SREG bits
    sbit  I_bit at CPU_SREG.B7;
    const register unsigned short int CPU_SREG_I = 7;
    sbit  T_bit at CPU_SREG.B6;
    const register unsigned short int CPU_SREG_T = 6;
    sbit  H_bit at CPU_SREG.B5;
    const register unsigned short int CPU_SREG_H = 5;
    sbit  S_bit at CPU_SREG.B4;
    const register unsigned short int CPU_SREG_S = 4;
    sbit  V_bit at CPU_SREG.B3;
    const register unsigned short int CPU_SREG_V = 3;
    sbit  N_bit at CPU_SREG.B2;
    const register unsigned short int CPU_SREG_N = 2;
    sbit  Z_bit at CPU_SREG.B1;
    const register unsigned short int CPU_SREG_Z = 1;
    sbit  C_bit at CPU_SREG.B0;
    const register unsigned short int CPU_SREG_C = 0;

    // CLK_CTRL bits
    sbit  SCLKSEL0_bit at CLK_CTRL.B0;
    const register unsigned short int SCLKSEL0 = 0;
    sbit  SCLKSEL1_bit at CLK_CTRL.B1;
    const register unsigned short int SCLKSEL1 = 1;
    sbit  SCLKSEL2_bit at CLK_CTRL.B2;
    const register unsigned short int SCLKSEL2 = 2;

    // CLK_PSCTRL bits
    sbit  PSADIV0_bit at CLK_PSCTRL.B2;
    const register unsigned short int PSADIV0 = 2;
    sbit  PSADIV1_bit at CLK_PSCTRL.B3;
    const register unsigned short int PSADIV1 = 3;
    sbit  PSADIV2_bit at CLK_PSCTRL.B4;
    const register unsigned short int PSADIV2 = 4;
    sbit  PSADIV3_bit at CLK_PSCTRL.B5;
    const register unsigned short int PSADIV3 = 5;
    sbit  PSADIV4_bit at CLK_PSCTRL.B6;
    const register unsigned short int PSADIV4 = 6;
    sbit  PSBCDIV0_bit at CLK_PSCTRL.B0;
    const register unsigned short int PSBCDIV0 = 0;
    sbit  PSBCDIV1_bit at CLK_PSCTRL.B1;
    const register unsigned short int PSBCDIV1 = 1;

    // CLK_LOCK bits
    sbit  LOCK_bit at CLK_LOCK.B0;
    const register unsigned short int LOCK_ = 0;

    // CLK_RTCCTRL bits
    sbit  RTCSRC0_bit at CLK_RTCCTRL.B1;
    const register unsigned short int RTCSRC0 = 1;
    sbit  RTCSRC1_bit at CLK_RTCCTRL.B2;
    const register unsigned short int RTCSRC1 = 2;
    sbit  RTCSRC2_bit at CLK_RTCCTRL.B3;
    const register unsigned short int RTCSRC2 = 3;
    sbit  RTCEN_bit at CLK_RTCCTRL.B0;
    const register unsigned short int RTCEN = 0;

    // PR_PRGEN bits
    sbit  AES_bit at PR_PRGEN.B4;
    const register unsigned short int AES = 4;
    sbit  EBI_bit at PR_PRGEN.B3;
    const register unsigned short int EBI = 3;
    sbit  RTC_bit at PR_PRGEN.B2;
    const register unsigned short int RTC = 2;
    sbit  EVSYS_bit at PR_PRGEN.B1;
    const register unsigned short int EVSYS = 1;
    sbit  DMA_bit at PR_PRGEN.B0;
    const register unsigned short int DMA_ = 0;

    // PR_PRPA bits
    sbit  DAC_bit at PR_PRPA.B2;
    const register unsigned short int DAC = 2;
    sbit  ADC_bit at PR_PRPA.B1;
    const register unsigned short int ADC = 1;
    sbit  AC_bit at PR_PRPA.B0;
    const register unsigned short int AC = 0;

    // PR_PRPB bits

    // PR_PRPC bits
    sbit  TWI_bit at PR_PRPC.B6;
    const register unsigned short int TWI = 6;
    sbit  USART1_bit at PR_PRPC.B5;
    const register unsigned short int USART1 = 5;
    sbit  USART0_bit at PR_PRPC.B4;
    const register unsigned short int USART0 = 4;
    sbit  SPI_bit at PR_PRPC.B3;
    const register unsigned short int SPI = 3;
    sbit  HIRES_bit at PR_PRPC.B2;
    const register unsigned short int HIRES = 2;
    sbit  TC1_bit at PR_PRPC.B1;
    const register unsigned short int TC1 = 1;
    sbit  TC0_bit at PR_PRPC.B0;
    const register unsigned short int TC0 = 0;

    // PR_PRPD bits

    // PR_PRPE bits

    // PR_PRPF bits

    // SLEEP_CTRL bits
    sbit  SMODE0_bit at SLEEP_CTRL.B1;
    const register unsigned short int SMODE0 = 1;
    sbit  SMODE1_bit at SLEEP_CTRL.B2;
    const register unsigned short int SMODE1 = 2;
    sbit  SMODE2_bit at SLEEP_CTRL.B3;
    const register unsigned short int SMODE2 = 3;
    sbit  SEN_bit at SLEEP_CTRL.B0;
    const register unsigned short int SEN = 0;

    // OSC_CTRL bits
    sbit  PLLEN_bit at OSC_CTRL.B4;
    const register unsigned short int PLLEN = 4;
    sbit  XOSCEN_bit at OSC_CTRL.B3;
    const register unsigned short int XOSCEN = 3;
    sbit  RC32KEN_bit at OSC_CTRL.B2;
    const register unsigned short int RC32KEN = 2;
    sbit  RC32MEN_bit at OSC_CTRL.B1;
    const register unsigned short int RC32MEN = 1;
    sbit  RC2MEN_bit at OSC_CTRL.B0;
    const register unsigned short int RC2MEN = 0;

    // OSC_STATUS bits
    sbit  PLLRDY_bit at OSC_STATUS.B4;
    const register unsigned short int PLLRDY = 4;
    sbit  XOSCRDY_bit at OSC_STATUS.B3;
    const register unsigned short int XOSCRDY = 3;
    sbit  RC32KRDY_bit at OSC_STATUS.B2;
    const register unsigned short int RC32KRDY = 2;
    sbit  RC32MRDY_bit at OSC_STATUS.B1;
    const register unsigned short int RC32MRDY = 1;
    sbit  RC2MRDY_bit at OSC_STATUS.B0;
    const register unsigned short int RC2MRDY = 0;

    // OSC_XOSCCTRL bits
    sbit  FRQRANGE0_bit at OSC_XOSCCTRL.B6;
    const register unsigned short int FRQRANGE0 = 6;
    sbit  FRQRANGE1_bit at OSC_XOSCCTRL.B7;
    const register unsigned short int FRQRANGE1 = 7;
    sbit  X32KLPM_bit at OSC_XOSCCTRL.B5;
    const register unsigned short int X32KLPM = 5;
    sbit  XOSCSEL0_bit at OSC_XOSCCTRL.B0;
    const register unsigned short int XOSCSEL0 = 0;
    sbit  XOSCSEL1_bit at OSC_XOSCCTRL.B1;
    const register unsigned short int XOSCSEL1 = 1;
    sbit  XOSCSEL2_bit at OSC_XOSCCTRL.B2;
    const register unsigned short int XOSCSEL2 = 2;
    sbit  XOSCSEL3_bit at OSC_XOSCCTRL.B3;
    const register unsigned short int XOSCSEL3 = 3;

    // OSC_XOSCFAIL bits
    sbit  XOSCFDIF_bit at OSC_XOSCFAIL.B1;
    const register unsigned short int XOSCFDIF = 1;
    sbit  XOSCFDEN_bit at OSC_XOSCFAIL.B0;
    const register unsigned short int XOSCFDEN = 0;

    // OSC_PLLCTRL bits
    sbit  PLLSRC0_bit at OSC_PLLCTRL.B6;
    const register unsigned short int PLLSRC0 = 6;
    sbit  PLLSRC1_bit at OSC_PLLCTRL.B7;
    const register unsigned short int PLLSRC1 = 7;
    sbit  PLLFAC0_bit at OSC_PLLCTRL.B0;
    const register unsigned short int PLLFAC0 = 0;
    sbit  PLLFAC1_bit at OSC_PLLCTRL.B1;
    const register unsigned short int PLLFAC1 = 1;
    sbit  PLLFAC2_bit at OSC_PLLCTRL.B2;
    const register unsigned short int PLLFAC2 = 2;
    sbit  PLLFAC3_bit at OSC_PLLCTRL.B3;
    const register unsigned short int PLLFAC3 = 3;
    sbit  PLLFAC4_bit at OSC_PLLCTRL.B4;
    const register unsigned short int PLLFAC4 = 4;

    // OSC_DFLLCTRL bits
    sbit  RC32MCREF_bit at OSC_DFLLCTRL.B1;
    const register unsigned short int RC32MCREF = 1;
    sbit  RC2MCREF_bit at OSC_DFLLCTRL.B0;
    const register unsigned short int RC2MCREF = 0;

    // DFLL_CTRL bits
    sbit  ENABLE_bit at DFLLRC2M_CTRL.B0;
    const register unsigned short int ENABLE = 0;
    sbit  ENABLE_DFLLRC32M_CTRL_bit at DFLLRC32M_CTRL.B0;

    // DFLL_CALA bits
    sbit  CALL0_bit at DFLLRC2M_CALA.B0;
    const register unsigned short int CALL0 = 0;
    sbit  CALL0_DFLLRC32M_CALA_bit at DFLLRC32M_CALA.B0;
    sbit  CALL1_bit at DFLLRC32M_CALA.B1;
    const register unsigned short int CALL1 = 1;
    sbit  CALL2_bit at DFLLRC32M_CALA.B2;
    const register unsigned short int CALL2 = 2;
    sbit  CALL3_bit at DFLLRC32M_CALA.B3;
    const register unsigned short int CALL3 = 3;
    sbit  CALL4_bit at DFLLRC32M_CALA.B4;
    const register unsigned short int CALL4 = 4;
    sbit  CALL5_bit at DFLLRC32M_CALA.B5;
    const register unsigned short int CALL5 = 5;
    sbit  CALL6_bit at DFLLRC32M_CALA.B6;
    const register unsigned short int CALL6 = 6;

    // DFLL_CALB bits
    sbit  CALH0_bit at DFLLRC2M_CALB.B0;
    const register unsigned short int CALH0 = 0;
    sbit  CALH0_DFLLRC32M_CALB_bit at DFLLRC32M_CALB.B0;
    sbit  CALH1_bit at DFLLRC32M_CALB.B1;
    const register unsigned short int CALH1 = 1;
    sbit  CALH2_bit at DFLLRC32M_CALB.B2;
    const register unsigned short int CALH2 = 2;
    sbit  CALH3_bit at DFLLRC32M_CALB.B3;
    const register unsigned short int CALH3 = 3;
    sbit  CALH4_bit at DFLLRC32M_CALB.B4;
    const register unsigned short int CALH4 = 4;
    sbit  CALH5_bit at DFLLRC32M_CALB.B5;
    const register unsigned short int CALH5 = 5;

    // RST_STATUS bits
    sbit  SDRF_bit at RST_STATUS.B6;
    const register unsigned short int SDRF = 6;
    sbit  SRF_bit at RST_STATUS.B5;
    const register unsigned short int SRF = 5;
    sbit  PDIRF_bit at RST_STATUS.B4;
    const register unsigned short int PDIRF = 4;
    sbit  WDRF_bit at RST_STATUS.B3;
    const register unsigned short int WDRF = 3;
    sbit  BORF_bit at RST_STATUS.B2;
    const register unsigned short int BORF = 2;
    sbit  EXTRF_bit at RST_STATUS.B1;
    const register unsigned short int EXTRF = 1;
    sbit  PORF_bit at RST_STATUS.B0;
    const register unsigned short int PORF = 0;

    // RST_CTRL bits
    sbit  SWRST_bit at RST_CTRL.B0;
    const register unsigned short int SWRST = 0;

    // WDT_CTRL bits
    sbit  PER0_bit at WDT_CTRL.B2;
    const register unsigned short int PER0 = 2;
    sbit  PER1_bit at WDT_CTRL.B3;
    const register unsigned short int PER1 = 3;
    sbit  PER2_bit at WDT_CTRL.B4;
    const register unsigned short int PER2 = 4;
    sbit  PER3_bit at WDT_CTRL.B5;
    const register unsigned short int PER3 = 5;
    sbit  ENABLE_WDT_CTRL_bit at WDT_CTRL.B1;
    const register unsigned short int ENABLE_WDT_CTRL = 1;
    sbit  CEN_bit at WDT_CTRL.B0;
    const register unsigned short int CEN = 0;

    // WDT_WINCTRL bits
    sbit  WPER0_bit at WDT_WINCTRL.B2;
    const register unsigned short int WPER0 = 2;
    sbit  WPER1_bit at WDT_WINCTRL.B3;
    const register unsigned short int WPER1 = 3;
    sbit  WPER2_bit at WDT_WINCTRL.B4;
    const register unsigned short int WPER2 = 4;
    sbit  WPER3_bit at WDT_WINCTRL.B5;
    const register unsigned short int WPER3 = 5;
    sbit  WEN_bit at WDT_WINCTRL.B1;
    const register unsigned short int WEN = 1;
    sbit  WCEN_bit at WDT_WINCTRL.B0;
    const register unsigned short int WCEN = 0;

    // WDT_STATUS bits
    sbit  SYNCBUSY_bit at WDT_STATUS.B0;
    const register unsigned short int SYNCBUSY = 0;

    // MCU_MCUCR bits
    sbit  JTAGD_bit at MCU_MCUCR.B0;
    const register unsigned short int JTAGD = 0;

    // MCU_EVSYSLOCK bits
    sbit  EVSYS1LOCK_bit at MCU_EVSYSLOCK.B4;
    const register unsigned short int EVSYS1LOCK = 4;
    sbit  EVSYS0LOCK_bit at MCU_EVSYSLOCK.B0;
    const register unsigned short int EVSYS0LOCK = 0;

    // MCU_AWEXLOCK bits
    sbit  AWEXELOCK_bit at MCU_AWEXLOCK.B2;
    const register unsigned short int AWEXELOCK = 2;
    sbit  AWEXCLOCK_bit at MCU_AWEXLOCK.B0;
    const register unsigned short int AWEXCLOCK = 0;

    // PMIC_STATUS bits
    sbit  NMIEX_bit at PMIC_STATUS.B7;
    const register unsigned short int NMIEX = 7;
    sbit  HILVLEX_bit at PMIC_STATUS.B2;
    const register unsigned short int HILVLEX = 2;
    sbit  MEDLVLEX_bit at PMIC_STATUS.B1;
    const register unsigned short int MEDLVLEX = 1;
    sbit  LOLVLEX_bit at PMIC_STATUS.B0;
    const register unsigned short int LOLVLEX = 0;

    // PMIC_CTRL bits
    sbit  RREN_bit at PMIC_CTRL.B7;
    const register unsigned short int RREN = 7;
    sbit  IVSEL_bit at PMIC_CTRL.B6;
    const register unsigned short int IVSEL = 6;
    sbit  HILVLEN_bit at PMIC_CTRL.B2;
    const register unsigned short int HILVLEN = 2;
    sbit  MEDLVLEN_bit at PMIC_CTRL.B1;
    const register unsigned short int MEDLVLEN = 1;
    sbit  LOLVLEN_bit at PMIC_CTRL.B0;
    const register unsigned short int LOLVLEN = 0;

    // DMA_CH_CTRLA bits
    sbit  CH_ENABLE_bit at DMA_CH0_CTRLA.B7;
    const register unsigned short int CH_ENABLE = 7;
    sbit  CH1_ENABLE_bit at DMA_CH1_CTRLA.B7;
    const register unsigned short int CH1_ENABLE = 7;
    sbit  CH2_ENABLE_bit at DMA_CH2_CTRLA.B7;
    const register unsigned short int CH2_ENABLE = 7;
    sbit  CH3_ENABLE_bit at DMA_CH3_CTRLA.B7;
    const register unsigned short int CH3_ENABLE = 7;
    sbit  CH_RESET_bit at DMA_CH0_CTRLA.B6;
    const register unsigned short int CH_RESET = 6;
    sbit  CH1_RESET_bit at DMA_CH1_CTRLA.B6;
    const register unsigned short int CH1_RESET = 6;
    sbit  CH2_RESET_bit at DMA_CH2_CTRLA.B6;
    const register unsigned short int CH2_RESET = 6;
    sbit  CH3_RESET_bit at DMA_CH3_CTRLA.B6;
    const register unsigned short int CH3_RESET = 6;
    sbit  CH_REPEAT_bit at DMA_CH0_CTRLA.B5;
    const register unsigned short int CH_REPEAT = 5;
    sbit  CH1_REPEAT_bit at DMA_CH1_CTRLA.B5;
    const register unsigned short int CH1_REPEAT = 5;
    sbit  CH2_REPEAT_bit at DMA_CH2_CTRLA.B5;
    const register unsigned short int CH2_REPEAT = 5;
    sbit  CH3_REPEAT_bit at DMA_CH3_CTRLA.B5;
    const register unsigned short int CH3_REPEAT = 5;
    sbit  CH_TRFREQ_bit at DMA_CH0_CTRLA.B4;
    const register unsigned short int CH_TRFREQ = 4;
    sbit  CH1_TRFREQ_bit at DMA_CH1_CTRLA.B4;
    const register unsigned short int CH1_TRFREQ = 4;
    sbit  CH2_TRFREQ_bit at DMA_CH2_CTRLA.B4;
    const register unsigned short int CH2_TRFREQ = 4;
    sbit  CH3_TRFREQ_bit at DMA_CH3_CTRLA.B4;
    const register unsigned short int CH3_TRFREQ = 4;
    sbit  CH_SINGLE_bit at DMA_CH0_CTRLA.B2;
    const register unsigned short int CH_SINGLE = 2;
    sbit  CH1_SINGLE_bit at DMA_CH1_CTRLA.B2;
    const register unsigned short int CH1_SINGLE = 2;
    sbit  CH2_SINGLE_bit at DMA_CH2_CTRLA.B2;
    const register unsigned short int CH2_SINGLE = 2;
    sbit  CH3_SINGLE_bit at DMA_CH3_CTRLA.B2;
    const register unsigned short int CH3_SINGLE = 2;
    sbit  CH_BURSTLEN0_bit at DMA_CH0_CTRLA.B0;
    const register unsigned short int CH_BURSTLEN0 = 0;
    sbit  CH1_BURSTLEN0_bit at DMA_CH1_CTRLA.B0;
    const register unsigned short int CH1_BURSTLEN0 = 0;
    sbit  CH2_BURSTLEN0_bit at DMA_CH2_CTRLA.B0;
    const register unsigned short int CH2_BURSTLEN0 = 0;
    sbit  CH3_BURSTLEN0_bit at DMA_CH3_CTRLA.B0;
    const register unsigned short int CH3_BURSTLEN0 = 0;
    sbit  CH_BURSTLEN1_bit at DMA_CH0_CTRLA.B1;
    const register unsigned short int CH_BURSTLEN1 = 1;
    sbit  CH1_BURSTLEN1_bit at DMA_CH1_CTRLA.B1;
    const register unsigned short int CH1_BURSTLEN1 = 1;
    sbit  CH2_BURSTLEN1_bit at DMA_CH2_CTRLA.B1;
    const register unsigned short int CH2_BURSTLEN1 = 1;
    sbit  CH3_BURSTLEN1_bit at DMA_CH3_CTRLA.B1;
    const register unsigned short int CH3_BURSTLEN1 = 1;

    // DMA_CH_CTRLB bits
    sbit  CH_CHBUSY_bit at DMA_CH0_CTRLB.B7;
    const register unsigned short int CH_CHBUSY = 7;
    sbit  CH1_CHBUSY_bit at DMA_CH1_CTRLB.B7;
    const register unsigned short int CH1_CHBUSY = 7;
    sbit  CH2_CHBUSY_bit at DMA_CH2_CTRLB.B7;
    const register unsigned short int CH2_CHBUSY = 7;
    sbit  CH3_CHBUSY_bit at DMA_CH3_CTRLB.B7;
    const register unsigned short int CH3_CHBUSY = 7;
    sbit  CH_CHPEND_bit at DMA_CH0_CTRLB.B6;
    const register unsigned short int CH_CHPEND = 6;
    sbit  CH1_CHPEND_bit at DMA_CH1_CTRLB.B6;
    const register unsigned short int CH1_CHPEND = 6;
    sbit  CH2_CHPEND_bit at DMA_CH2_CTRLB.B6;
    const register unsigned short int CH2_CHPEND = 6;
    sbit  CH3_CHPEND_bit at DMA_CH3_CTRLB.B6;
    const register unsigned short int CH3_CHPEND = 6;
    sbit  CH_ERRIF_bit at DMA_CH0_CTRLB.B5;
    const register unsigned short int CH_ERRIF = 5;
    sbit  CH1_ERRIF_bit at DMA_CH1_CTRLB.B5;
    const register unsigned short int CH1_ERRIF = 5;
    sbit  CH2_ERRIF_bit at DMA_CH2_CTRLB.B5;
    const register unsigned short int CH2_ERRIF = 5;
    sbit  CH3_ERRIF_bit at DMA_CH3_CTRLB.B5;
    const register unsigned short int CH3_ERRIF = 5;
    sbit  CH_TRNIF_bit at DMA_CH0_CTRLB.B4;
    const register unsigned short int CH_TRNIF = 4;
    sbit  CH1_TRNIF_bit at DMA_CH1_CTRLB.B4;
    const register unsigned short int CH1_TRNIF = 4;
    sbit  CH2_TRNIF_bit at DMA_CH2_CTRLB.B4;
    const register unsigned short int CH2_TRNIF = 4;
    sbit  CH3_TRNIF_bit at DMA_CH3_CTRLB.B4;
    const register unsigned short int CH3_TRNIF = 4;
    sbit  CH_ERRINTLVL0_bit at DMA_CH0_CTRLB.B2;
    const register unsigned short int CH_ERRINTLVL0 = 2;
    sbit  CH1_ERRINTLVL0_bit at DMA_CH1_CTRLB.B2;
    const register unsigned short int CH1_ERRINTLVL0 = 2;
    sbit  CH2_ERRINTLVL0_bit at DMA_CH2_CTRLB.B2;
    const register unsigned short int CH2_ERRINTLVL0 = 2;
    sbit  CH3_ERRINTLVL0_bit at DMA_CH3_CTRLB.B2;
    const register unsigned short int CH3_ERRINTLVL0 = 2;
    sbit  CH_ERRINTLVL1_bit at DMA_CH0_CTRLB.B3;
    const register unsigned short int CH_ERRINTLVL1 = 3;
    sbit  CH1_ERRINTLVL1_bit at DMA_CH1_CTRLB.B3;
    const register unsigned short int CH1_ERRINTLVL1 = 3;
    sbit  CH2_ERRINTLVL1_bit at DMA_CH2_CTRLB.B3;
    const register unsigned short int CH2_ERRINTLVL1 = 3;
    sbit  CH3_ERRINTLVL1_bit at DMA_CH3_CTRLB.B3;
    const register unsigned short int CH3_ERRINTLVL1 = 3;
    sbit  CH_TRNINTLVL0_bit at DMA_CH0_CTRLB.B0;
    const register unsigned short int CH_TRNINTLVL0 = 0;
    sbit  CH1_TRNINTLVL0_bit at DMA_CH1_CTRLB.B0;
    const register unsigned short int CH1_TRNINTLVL0 = 0;
    sbit  CH2_TRNINTLVL0_bit at DMA_CH2_CTRLB.B0;
    const register unsigned short int CH2_TRNINTLVL0 = 0;
    sbit  CH3_TRNINTLVL0_bit at DMA_CH3_CTRLB.B0;
    const register unsigned short int CH3_TRNINTLVL0 = 0;
    sbit  CH_TRNINTLVL1_bit at DMA_CH0_CTRLB.B1;
    const register unsigned short int CH_TRNINTLVL1 = 1;
    sbit  CH1_TRNINTLVL1_bit at DMA_CH1_CTRLB.B1;
    const register unsigned short int CH1_TRNINTLVL1 = 1;
    sbit  CH2_TRNINTLVL1_bit at DMA_CH2_CTRLB.B1;
    const register unsigned short int CH2_TRNINTLVL1 = 1;
    sbit  CH3_TRNINTLVL1_bit at DMA_CH3_CTRLB.B1;
    const register unsigned short int CH3_TRNINTLVL1 = 1;

    // DMA_CH_ADDRCTRL bits
    sbit  CH_SRCRELOAD0_bit at DMA_CH0_ADDRCTRL.B6;
    const register unsigned short int CH_SRCRELOAD0 = 6;
    sbit  CH1_SRCRELOAD0_bit at DMA_CH1_ADDRCTRL.B6;
    const register unsigned short int CH1_SRCRELOAD0 = 6;
    sbit  CH2_SRCRELOAD0_bit at DMA_CH2_ADDRCTRL.B6;
    const register unsigned short int CH2_SRCRELOAD0 = 6;
    sbit  CH3_SRCRELOAD0_bit at DMA_CH3_ADDRCTRL.B6;
    const register unsigned short int CH3_SRCRELOAD0 = 6;
    sbit  CH_SRCRELOAD1_bit at DMA_CH0_ADDRCTRL.B7;
    const register unsigned short int CH_SRCRELOAD1 = 7;
    sbit  CH1_SRCRELOAD1_bit at DMA_CH1_ADDRCTRL.B7;
    const register unsigned short int CH1_SRCRELOAD1 = 7;
    sbit  CH2_SRCRELOAD1_bit at DMA_CH2_ADDRCTRL.B7;
    const register unsigned short int CH2_SRCRELOAD1 = 7;
    sbit  CH3_SRCRELOAD1_bit at DMA_CH3_ADDRCTRL.B7;
    const register unsigned short int CH3_SRCRELOAD1 = 7;
    sbit  CH_SRCDIR0_bit at DMA_CH0_ADDRCTRL.B4;
    const register unsigned short int CH_SRCDIR0 = 4;
    sbit  CH1_SRCDIR0_bit at DMA_CH1_ADDRCTRL.B4;
    const register unsigned short int CH1_SRCDIR0 = 4;
    sbit  CH2_SRCDIR0_bit at DMA_CH2_ADDRCTRL.B4;
    const register unsigned short int CH2_SRCDIR0 = 4;
    sbit  CH3_SRCDIR0_bit at DMA_CH3_ADDRCTRL.B4;
    const register unsigned short int CH3_SRCDIR0 = 4;
    sbit  CH_SRCDIR1_bit at DMA_CH0_ADDRCTRL.B5;
    const register unsigned short int CH_SRCDIR1 = 5;
    sbit  CH1_SRCDIR1_bit at DMA_CH1_ADDRCTRL.B5;
    const register unsigned short int CH1_SRCDIR1 = 5;
    sbit  CH2_SRCDIR1_bit at DMA_CH2_ADDRCTRL.B5;
    const register unsigned short int CH2_SRCDIR1 = 5;
    sbit  CH3_SRCDIR1_bit at DMA_CH3_ADDRCTRL.B5;
    const register unsigned short int CH3_SRCDIR1 = 5;
    sbit  CH_DESTRELOAD0_bit at DMA_CH0_ADDRCTRL.B2;
    const register unsigned short int CH_DESTRELOAD0 = 2;
    sbit  CH1_DESTRELOAD0_bit at DMA_CH1_ADDRCTRL.B2;
    const register unsigned short int CH1_DESTRELOAD0 = 2;
    sbit  CH2_DESTRELOAD0_bit at DMA_CH2_ADDRCTRL.B2;
    const register unsigned short int CH2_DESTRELOAD0 = 2;
    sbit  CH3_DESTRELOAD0_bit at DMA_CH3_ADDRCTRL.B2;
    const register unsigned short int CH3_DESTRELOAD0 = 2;
    sbit  CH_DESTRELOAD1_bit at DMA_CH0_ADDRCTRL.B3;
    const register unsigned short int CH_DESTRELOAD1 = 3;
    sbit  CH1_DESTRELOAD1_bit at DMA_CH1_ADDRCTRL.B3;
    const register unsigned short int CH1_DESTRELOAD1 = 3;
    sbit  CH2_DESTRELOAD1_bit at DMA_CH2_ADDRCTRL.B3;
    const register unsigned short int CH2_DESTRELOAD1 = 3;
    sbit  CH3_DESTRELOAD1_bit at DMA_CH3_ADDRCTRL.B3;
    const register unsigned short int CH3_DESTRELOAD1 = 3;
    sbit  CH_DESTDIR0_bit at DMA_CH0_ADDRCTRL.B0;
    const register unsigned short int CH_DESTDIR0 = 0;
    sbit  CH1_DESTDIR0_bit at DMA_CH1_ADDRCTRL.B0;
    const register unsigned short int CH1_DESTDIR0 = 0;
    sbit  CH2_DESTDIR0_bit at DMA_CH2_ADDRCTRL.B0;
    const register unsigned short int CH2_DESTDIR0 = 0;
    sbit  CH3_DESTDIR0_bit at DMA_CH3_ADDRCTRL.B0;
    const register unsigned short int CH3_DESTDIR0 = 0;
    sbit  CH_DESTDIR1_bit at DMA_CH0_ADDRCTRL.B1;
    const register unsigned short int CH_DESTDIR1 = 1;
    sbit  CH1_DESTDIR1_bit at DMA_CH1_ADDRCTRL.B1;
    const register unsigned short int CH1_DESTDIR1 = 1;
    sbit  CH2_DESTDIR1_bit at DMA_CH2_ADDRCTRL.B1;
    const register unsigned short int CH2_DESTDIR1 = 1;
    sbit  CH3_DESTDIR1_bit at DMA_CH3_ADDRCTRL.B1;
    const register unsigned short int CH3_DESTDIR1 = 1;

    // DMA_CH_TRIGSRC bits
    sbit  CH_TRIGSRC0_bit at DMA_CH0_TRIGSRC.B0;
    const register unsigned short int CH_TRIGSRC0 = 0;
    sbit  CH1_TRIGSRC0_bit at DMA_CH1_TRIGSRC.B0;
    const register unsigned short int CH1_TRIGSRC0 = 0;
    sbit  CH2_TRIGSRC0_bit at DMA_CH2_TRIGSRC.B0;
    const register unsigned short int CH2_TRIGSRC0 = 0;
    sbit  CH3_TRIGSRC0_bit at DMA_CH3_TRIGSRC.B0;
    const register unsigned short int CH3_TRIGSRC0 = 0;
    sbit  CH_TRIGSRC1_bit at DMA_CH0_TRIGSRC.B1;
    const register unsigned short int CH_TRIGSRC1 = 1;
    sbit  CH1_TRIGSRC1_bit at DMA_CH1_TRIGSRC.B1;
    const register unsigned short int CH1_TRIGSRC1 = 1;
    sbit  CH2_TRIGSRC1_bit at DMA_CH2_TRIGSRC.B1;
    const register unsigned short int CH2_TRIGSRC1 = 1;
    sbit  CH3_TRIGSRC1_bit at DMA_CH3_TRIGSRC.B1;
    const register unsigned short int CH3_TRIGSRC1 = 1;
    sbit  CH_TRIGSRC2_bit at DMA_CH0_TRIGSRC.B2;
    const register unsigned short int CH_TRIGSRC2 = 2;
    sbit  CH1_TRIGSRC2_bit at DMA_CH1_TRIGSRC.B2;
    const register unsigned short int CH1_TRIGSRC2 = 2;
    sbit  CH2_TRIGSRC2_bit at DMA_CH2_TRIGSRC.B2;
    const register unsigned short int CH2_TRIGSRC2 = 2;
    sbit  CH3_TRIGSRC2_bit at DMA_CH3_TRIGSRC.B2;
    const register unsigned short int CH3_TRIGSRC2 = 2;
    sbit  CH_TRIGSRC3_bit at DMA_CH0_TRIGSRC.B3;
    const register unsigned short int CH_TRIGSRC3 = 3;
    sbit  CH1_TRIGSRC3_bit at DMA_CH1_TRIGSRC.B3;
    const register unsigned short int CH1_TRIGSRC3 = 3;
    sbit  CH2_TRIGSRC3_bit at DMA_CH2_TRIGSRC.B3;
    const register unsigned short int CH2_TRIGSRC3 = 3;
    sbit  CH3_TRIGSRC3_bit at DMA_CH3_TRIGSRC.B3;
    const register unsigned short int CH3_TRIGSRC3 = 3;
    sbit  CH_TRIGSRC4_bit at DMA_CH0_TRIGSRC.B4;
    const register unsigned short int CH_TRIGSRC4 = 4;
    sbit  CH1_TRIGSRC4_bit at DMA_CH1_TRIGSRC.B4;
    const register unsigned short int CH1_TRIGSRC4 = 4;
    sbit  CH2_TRIGSRC4_bit at DMA_CH2_TRIGSRC.B4;
    const register unsigned short int CH2_TRIGSRC4 = 4;
    sbit  CH3_TRIGSRC4_bit at DMA_CH3_TRIGSRC.B4;
    const register unsigned short int CH3_TRIGSRC4 = 4;
    sbit  CH_TRIGSRC5_bit at DMA_CH0_TRIGSRC.B5;
    const register unsigned short int CH_TRIGSRC5 = 5;
    sbit  CH1_TRIGSRC5_bit at DMA_CH1_TRIGSRC.B5;
    const register unsigned short int CH1_TRIGSRC5 = 5;
    sbit  CH2_TRIGSRC5_bit at DMA_CH2_TRIGSRC.B5;
    const register unsigned short int CH2_TRIGSRC5 = 5;
    sbit  CH3_TRIGSRC5_bit at DMA_CH3_TRIGSRC.B5;
    const register unsigned short int CH3_TRIGSRC5 = 5;
    sbit  CH_TRIGSRC6_bit at DMA_CH0_TRIGSRC.B6;
    const register unsigned short int CH_TRIGSRC6 = 6;
    sbit  CH1_TRIGSRC6_bit at DMA_CH1_TRIGSRC.B6;
    const register unsigned short int CH1_TRIGSRC6 = 6;
    sbit  CH2_TRIGSRC6_bit at DMA_CH2_TRIGSRC.B6;
    const register unsigned short int CH2_TRIGSRC6 = 6;
    sbit  CH3_TRIGSRC6_bit at DMA_CH3_TRIGSRC.B6;
    const register unsigned short int CH3_TRIGSRC6 = 6;
    sbit  CH_TRIGSRC7_bit at DMA_CH0_TRIGSRC.B7;
    const register unsigned short int CH_TRIGSRC7 = 7;
    sbit  CH1_TRIGSRC7_bit at DMA_CH1_TRIGSRC.B7;
    const register unsigned short int CH1_TRIGSRC7 = 7;
    sbit  CH2_TRIGSRC7_bit at DMA_CH2_TRIGSRC.B7;
    const register unsigned short int CH2_TRIGSRC7 = 7;
    sbit  CH3_TRIGSRC7_bit at DMA_CH3_TRIGSRC.B7;
    const register unsigned short int CH3_TRIGSRC7 = 7;

    // DMA_CTRL bits
    sbit  ENABLE_DMA_CTRL_bit at DMA_CTRL.B7;
    const register unsigned short int ENABLE_DMA_CTRL = 7;
    sbit  RESET_bit at DMA_CTRL.B6;
    const register unsigned short int RESET_ = 6;
    sbit  DBUFMODE0_bit at DMA_CTRL.B2;
    const register unsigned short int DBUFMODE0 = 2;
    sbit  DBUFMODE1_bit at DMA_CTRL.B3;
    const register unsigned short int DBUFMODE1 = 3;
    sbit  PRIMODE0_bit at DMA_CTRL.B0;
    const register unsigned short int PRIMODE0 = 0;
    sbit  PRIMODE1_bit at DMA_CTRL.B1;
    const register unsigned short int PRIMODE1 = 1;

    // DMA_INTFLAGS bits
    sbit  CH3ERRIF_bit at DMA_INTFLAGS.B7;
    const register unsigned short int CH3ERRIF = 7;
    sbit  CH2ERRIF_bit at DMA_INTFLAGS.B6;
    const register unsigned short int CH2ERRIF = 6;
    sbit  CH1ERRIF_bit at DMA_INTFLAGS.B5;
    const register unsigned short int CH1ERRIF = 5;
    sbit  CH0ERRIF_bit at DMA_INTFLAGS.B4;
    const register unsigned short int CH0ERRIF = 4;
    sbit  CH3TRNIF_bit at DMA_INTFLAGS.B3;
    const register unsigned short int CH3TRNIF = 3;
    sbit  CH2TRNIF_bit at DMA_INTFLAGS.B2;
    const register unsigned short int CH2TRNIF = 2;
    sbit  CH1TRNIF_bit at DMA_INTFLAGS.B1;
    const register unsigned short int CH1TRNIF = 1;
    sbit  CH0TRNIF_bit at DMA_INTFLAGS.B0;
    const register unsigned short int CH0TRNIF = 0;

    // DMA_STATUS bits
    sbit  CH3BUSY_bit at DMA_STATUS.B7;
    const register unsigned short int CH3BUSY = 7;
    sbit  CH2BUSY_bit at DMA_STATUS.B6;
    const register unsigned short int CH2BUSY = 6;
    sbit  CH1BUSY_bit at DMA_STATUS.B5;
    const register unsigned short int CH1BUSY = 5;
    sbit  CH0BUSY_bit at DMA_STATUS.B4;
    const register unsigned short int CH0BUSY = 4;
    sbit  CH3PEND_bit at DMA_STATUS.B3;
    const register unsigned short int CH3PEND = 3;
    sbit  CH2PEND_bit at DMA_STATUS.B2;
    const register unsigned short int CH2PEND = 2;
    sbit  CH1PEND_bit at DMA_STATUS.B1;
    const register unsigned short int CH1PEND = 1;
    sbit  CH0PEND_bit at DMA_STATUS.B0;
    const register unsigned short int CH0PEND = 0;

    // EVSYS_CH0MUX bits
    sbit  CHMUX0_bit at EVSYS_CH0MUX.B0;
    const register unsigned short int CHMUX0 = 0;
    sbit  CHMUX1_bit at EVSYS_CH0MUX.B1;
    const register unsigned short int CHMUX1 = 1;
    sbit  CHMUX2_bit at EVSYS_CH0MUX.B2;
    const register unsigned short int CHMUX2 = 2;
    sbit  CHMUX3_bit at EVSYS_CH0MUX.B3;
    const register unsigned short int CHMUX3 = 3;
    sbit  CHMUX4_bit at EVSYS_CH0MUX.B4;
    const register unsigned short int CHMUX4 = 4;
    sbit  CHMUX5_bit at EVSYS_CH0MUX.B5;
    const register unsigned short int CHMUX5 = 5;
    sbit  CHMUX6_bit at EVSYS_CH0MUX.B6;
    const register unsigned short int CHMUX6 = 6;
    sbit  CHMUX7_bit at EVSYS_CH0MUX.B7;
    const register unsigned short int CHMUX7 = 7;

    // EVSYS_CH1MUX bits

    // EVSYS_CH2MUX bits

    // EVSYS_CH3MUX bits

    // EVSYS_CH4MUX bits

    // EVSYS_CH5MUX bits

    // EVSYS_CH6MUX bits

    // EVSYS_CH7MUX bits

    // EVSYS_CH0CTRL bits
    sbit  QDIRM0_bit at EVSYS_CH0CTRL.B5;
    const register unsigned short int QDIRM0 = 5;
    sbit  QDIRM1_bit at EVSYS_CH0CTRL.B6;
    const register unsigned short int QDIRM1 = 6;
    sbit  QDIEN_bit at EVSYS_CH0CTRL.B4;
    const register unsigned short int QDIEN = 4;
    sbit  QDEN_bit at EVSYS_CH0CTRL.B3;
    const register unsigned short int QDEN = 3;
    sbit  DIGFILT0_bit at EVSYS_CH0CTRL.B0;
    const register unsigned short int DIGFILT0 = 0;
    sbit  DIGFILT1_bit at EVSYS_CH0CTRL.B1;
    const register unsigned short int DIGFILT1 = 1;
    sbit  DIGFILT2_bit at EVSYS_CH0CTRL.B2;
    const register unsigned short int DIGFILT2 = 2;

    // EVSYS_CH1CTRL bits

    // EVSYS_CH2CTRL bits

    // EVSYS_CH3CTRL bits

    // EVSYS_CH4CTRL bits

    // EVSYS_CH5CTRL bits

    // EVSYS_CH6CTRL bits

    // EVSYS_CH7CTRL bits

    // NVM_CMD bits
    sbit  CMD0_bit at NVM_CMD.B0;
    const register unsigned short int CMD0 = 0;
    sbit  CMD1_bit at NVM_CMD.B1;
    const register unsigned short int CMD1 = 1;
    sbit  CMD2_bit at NVM_CMD.B2;
    const register unsigned short int CMD2 = 2;
    sbit  CMD3_bit at NVM_CMD.B3;
    const register unsigned short int CMD3 = 3;
    sbit  CMD4_bit at NVM_CMD.B4;
    const register unsigned short int CMD4 = 4;
    sbit  CMD5_bit at NVM_CMD.B5;
    const register unsigned short int CMD5 = 5;
    sbit  CMD6_bit at NVM_CMD.B6;
    const register unsigned short int CMD6 = 6;

    // NVM_CTRLA bits
    sbit  CMDEX_bit at NVM_CTRLA.B0;
    const register unsigned short int CMDEX = 0;

    // NVM_CTRLB bits
    sbit  EEMAPEN_bit at NVM_CTRLB.B3;
    const register unsigned short int EEMAPEN = 3;
    sbit  FPRM_bit at NVM_CTRLB.B2;
    const register unsigned short int FPRM = 2;
    sbit  EPRM_bit at NVM_CTRLB.B1;
    const register unsigned short int EPRM = 1;
    sbit  SPMLOCK_bit at NVM_CTRLB.B0;
    const register unsigned short int SPMLOCK = 0;

    // NVM_INTCTRL bits
    sbit  SPMLVL0_bit at NVM_INTCTRL.B2;
    const register unsigned short int SPMLVL0 = 2;
    sbit  SPMLVL1_bit at NVM_INTCTRL.B3;
    const register unsigned short int SPMLVL1 = 3;
    sbit  EELVL0_bit at NVM_INTCTRL.B0;
    const register unsigned short int EELVL0 = 0;
    sbit  EELVL1_bit at NVM_INTCTRL.B1;
    const register unsigned short int EELVL1 = 1;

    // NVM_STATUS bits
    sbit  NVMBUSY_bit at NVM_STATUS.B7;
    const register unsigned short int NVMBUSY = 7;
    sbit  FBUSY_bit at NVM_STATUS.B6;
    const register unsigned short int FBUSY = 6;
    sbit  EELOAD_bit at NVM_STATUS.B1;
    const register unsigned short int EELOAD = 1;
    sbit  FLOAD_bit at NVM_STATUS.B0;
    const register unsigned short int FLOAD = 0;

    // NVM_LOCKBITS bits
    sbit  BLBB0_bit at NVM_LOCKBITS.B6;
    const register unsigned short int BLBB0 = 6;
    sbit  BLBB1_bit at NVM_LOCKBITS.B7;
    const register unsigned short int BLBB1 = 7;
    sbit  BLBA0_bit at NVM_LOCKBITS.B4;
    const register unsigned short int BLBA0 = 4;
    sbit  BLBA1_bit at NVM_LOCKBITS.B5;
    const register unsigned short int BLBA1 = 5;
    sbit  BLBAT0_bit at NVM_LOCKBITS.B2;
    const register unsigned short int BLBAT0 = 2;
    sbit  BLBAT1_bit at NVM_LOCKBITS.B3;
    const register unsigned short int BLBAT1 = 3;
    sbit  LB0_bit at NVM_LOCKBITS.B0;
    const register unsigned short int LB0 = 0;
    sbit  LB1_bit at NVM_LOCKBITS.B1;
    const register unsigned short int LB1 = 1;

    // NVM_LOCKBITS_LOCKBITS bits

    // NVM_FUSES_FUSEBYTE0 bits

    // NVM_FUSES_FUSEBYTE1 bits

    // NVM_FUSES_FUSEBYTE2 bits

    // NVM_FUSES_FUSEBYTE4 bits

    // NVM_FUSES_FUSEBYTE5 bits

    // AC_AC0CTRL bits
    sbit  INTMODE0_bit at ACA_AC0CTRL.B6;
    const register unsigned short int INTMODE0 = 6;
    sbit  INTMODE0_ACA_AC1CTRL_bit at ACA_AC1CTRL.B6;
    sbit  INTMODE1_bit at ACA_AC0CTRL.B7;
    const register unsigned short int INTMODE1 = 7;
    sbit  INTMODE1_ACA_AC1CTRL_bit at ACA_AC1CTRL.B7;
    sbit  INTLVL0_bit at ACA_AC0CTRL.B4;
    const register unsigned short int INTLVL0 = 4;
    sbit  INTLVL0_ACA_AC1CTRL_bit at ACA_AC1CTRL.B4;
    sbit  INTLVL1_bit at ACA_AC0CTRL.B5;
    const register unsigned short int INTLVL1 = 5;
    sbit  INTLVL1_ACA_AC1CTRL_bit at ACA_AC1CTRL.B5;
    sbit  HSMODE_bit at ACA_AC0CTRL.B3;
    const register unsigned short int HSMODE = 3;
    sbit  HSMODE_ACA_AC1CTRL_bit at ACA_AC1CTRL.B3;
    sbit  HYSMODE0_bit at ACA_AC0CTRL.B1;
    const register unsigned short int HYSMODE0 = 1;
    sbit  HYSMODE0_ACA_AC1CTRL_bit at ACA_AC1CTRL.B1;
    sbit  HYSMODE1_bit at ACA_AC0CTRL.B2;
    const register unsigned short int HYSMODE1 = 2;
    sbit  HYSMODE1_ACA_AC1CTRL_bit at ACA_AC1CTRL.B2;
    sbit  ENABLE_ACA_AC0CTRL_bit at ACA_AC0CTRL.B0;
    sbit  ENABLE_ACA_AC1CTRL_bit at ACA_AC1CTRL.B0;

    // AC_AC1CTRL bits

    // AC_AC0MUXCTRL bits
    sbit  MUXPOS0_bit at ACA_AC0MUXCTRL.B3;
    const register unsigned short int MUXPOS0 = 3;
    sbit  MUXPOS0_ACA_AC1MUXCTRL_bit at ACA_AC1MUXCTRL.B3;
    sbit  MUXPOS0_ACB_AC0MUXCTRL_bit at ACB_AC0MUXCTRL.B3;
    sbit  MUXPOS0_ACB_AC1MUXCTRL_bit at ACB_AC1MUXCTRL.B3;
    sbit  MUXPOS1_bit at ACA_AC0MUXCTRL.B4;
    const register unsigned short int MUXPOS1 = 4;
    sbit  MUXPOS1_ACA_AC1MUXCTRL_bit at ACA_AC1MUXCTRL.B4;
    sbit  MUXPOS1_ACB_AC0MUXCTRL_bit at ACB_AC0MUXCTRL.B4;
    sbit  MUXPOS1_ACB_AC1MUXCTRL_bit at ACB_AC1MUXCTRL.B4;
    sbit  MUXPOS2_bit at ACA_AC0MUXCTRL.B5;
    const register unsigned short int MUXPOS2 = 5;
    sbit  MUXPOS2_ACA_AC1MUXCTRL_bit at ACA_AC1MUXCTRL.B5;
    sbit  MUXPOS2_ACB_AC0MUXCTRL_bit at ACB_AC0MUXCTRL.B5;
    sbit  MUXPOS2_ACB_AC1MUXCTRL_bit at ACB_AC1MUXCTRL.B5;
    sbit  MUXNEG0_bit at ACA_AC0MUXCTRL.B0;
    const register unsigned short int MUXNEG0 = 0;
    sbit  MUXNEG0_ACA_AC1MUXCTRL_bit at ACA_AC1MUXCTRL.B0;
    sbit  MUXNEG0_ACB_AC0MUXCTRL_bit at ACB_AC0MUXCTRL.B0;
    sbit  MUXNEG0_ACB_AC1MUXCTRL_bit at ACB_AC1MUXCTRL.B0;
    sbit  MUXNEG1_bit at ACA_AC0MUXCTRL.B1;
    const register unsigned short int MUXNEG1 = 1;
    sbit  MUXNEG1_ACA_AC1MUXCTRL_bit at ACA_AC1MUXCTRL.B1;
    sbit  MUXNEG1_ACB_AC0MUXCTRL_bit at ACB_AC0MUXCTRL.B1;
    sbit  MUXNEG1_ACB_AC1MUXCTRL_bit at ACB_AC1MUXCTRL.B1;
    sbit  MUXNEG2_bit at ACA_AC0MUXCTRL.B2;
    const register unsigned short int MUXNEG2 = 2;
    sbit  MUXNEG2_ACA_AC1MUXCTRL_bit at ACA_AC1MUXCTRL.B2;
    sbit  MUXNEG2_ACB_AC0MUXCTRL_bit at ACB_AC0MUXCTRL.B2;
    sbit  MUXNEG2_ACB_AC1MUXCTRL_bit at ACB_AC1MUXCTRL.B2;

    // AC_AC1MUXCTRL bits

    // AC_CTRLA bits
    sbit  AC0OUT_bit at ACA_CTRLA.B0;
    const register unsigned short int AC0OUT = 0;
    sbit  AC0OUT_ACB_CTRLA_bit at ACB_CTRLA.B0;

    // AC_CTRLB bits
    sbit  SCALEFAC0_bit at ACA_CTRLB.B0;
    const register unsigned short int SCALEFAC0 = 0;
    sbit  SCALEFAC0_ACA_CTRLB_bit at ACA_CTRLB.B0;
    sbit  SCALEFAC1_bit at ACA_CTRLB.B1;
    const register unsigned short int SCALEFAC1 = 1;
    sbit  SCALEFAC1_ACA_CTRLB_bit at ACA_CTRLB.B1;
    sbit  SCALEFAC2_bit at ACA_CTRLB.B2;
    const register unsigned short int SCALEFAC2 = 2;
    sbit  SCALEFAC2_ACA_CTRLB_bit at ACA_CTRLB.B2;
    sbit  SCALEFAC3_bit at ACA_CTRLB.B3;
    const register unsigned short int SCALEFAC3 = 3;
    sbit  SCALEFAC3_ACA_CTRLB_bit at ACA_CTRLB.B3;
    sbit  SCALEFAC4_bit at ACA_CTRLB.B4;
    const register unsigned short int SCALEFAC4 = 4;
    sbit  SCALEFAC4_ACA_CTRLB_bit at ACA_CTRLB.B4;
    sbit  SCALEFAC5_bit at ACA_CTRLB.B5;
    const register unsigned short int SCALEFAC5 = 5;
    sbit  SCALEFAC5_ACA_CTRLB_bit at ACA_CTRLB.B5;

    // AC_WINCTRL bits
    sbit  WEN_ACA_WINCTRL_bit at ACA_WINCTRL.B4;
    const register unsigned short int WEN_ACA_WINCTRL = 4;
    sbit  WEN_ACB_WINCTRL_bit at ACB_WINCTRL.B4;
    const register unsigned short int WEN_ACB_WINCTRL = 4;
    sbit  WINTMODE0_bit at ACA_WINCTRL.B2;
    const register unsigned short int WINTMODE0 = 2;
    sbit  WINTMODE0_ACB_WINCTRL_bit at ACB_WINCTRL.B2;
    sbit  WINTMODE1_bit at ACA_WINCTRL.B3;
    const register unsigned short int WINTMODE1 = 3;
    sbit  WINTMODE1_ACB_WINCTRL_bit at ACB_WINCTRL.B3;
    sbit  WINTLVL0_bit at ACA_WINCTRL.B0;
    const register unsigned short int WINTLVL0 = 0;
    sbit  WINTLVL0_ACB_WINCTRL_bit at ACB_WINCTRL.B0;
    sbit  WINTLVL1_bit at ACA_WINCTRL.B1;
    const register unsigned short int WINTLVL1 = 1;
    sbit  WINTLVL1_ACB_WINCTRL_bit at ACB_WINCTRL.B1;

    // AC_STATUS bits
    sbit  WSTATE0_bit at ACA_STATUS.B6;
    const register unsigned short int WSTATE0 = 6;
    sbit  WSTATE0_ACB_STATUS_bit at ACB_STATUS.B6;
    sbit  WSTATE1_bit at ACA_STATUS.B7;
    const register unsigned short int WSTATE1 = 7;
    sbit  WSTATE1_ACB_STATUS_bit at ACB_STATUS.B7;
    sbit  AC1STATE_bit at ACA_STATUS.B5;
    const register unsigned short int AC1STATE = 5;
    sbit  AC1STATE_ACB_STATUS_bit at ACB_STATUS.B5;
    sbit  AC0STATE_bit at ACA_STATUS.B4;
    const register unsigned short int AC0STATE = 4;
    sbit  AC0STATE_ACB_STATUS_bit at ACB_STATUS.B4;
    sbit  WIF_bit at ACA_STATUS.B2;
    const register unsigned short int WIF = 2;
    sbit  WIF_ACB_STATUS_bit at ACB_STATUS.B2;
    sbit  AC1IF_bit at ACA_STATUS.B1;
    const register unsigned short int AC1IF = 1;
    sbit  AC1IF_ACB_STATUS_bit at ACB_STATUS.B1;
    sbit  AC0IF_bit at ACA_STATUS.B0;
    const register unsigned short int AC0IF = 0;
    sbit  AC0IF_ACB_STATUS_bit at ACB_STATUS.B0;

    // ADC_CH_CTRL bits
    sbit  CH_START_bit at ADCA_CH0_CTRL.B7;
    const register unsigned short int CH_START = 7;
    sbit  CH_START_ADCA_CH1_CTRL_bit at ADCA_CH1_CTRL.B7;
    sbit  CH_START_ADCA_CH2_CTRL_bit at ADCA_CH2_CTRL.B7;
    sbit  CH_START_ADCA_CH3_CTRL_bit at ADCA_CH3_CTRL.B7;
    sbit  CH_GAINFAC0_bit at ADCA_CH0_CTRL.B2;
    const register unsigned short int CH_GAINFAC0 = 2;
    sbit  CH_GAINFAC0_ADCA_CH1_CTRL_bit at ADCA_CH1_CTRL.B2;
    sbit  CH_GAINFAC0_ADCA_CH2_CTRL_bit at ADCA_CH2_CTRL.B2;
    sbit  CH_GAINFAC0_ADCA_CH3_CTRL_bit at ADCA_CH3_CTRL.B2;
    sbit  CH_GAINFAC1_bit at ADCA_CH0_CTRL.B3;
    const register unsigned short int CH_GAINFAC1 = 3;
    sbit  CH_GAINFAC1_ADCA_CH1_CTRL_bit at ADCA_CH1_CTRL.B3;
    sbit  CH_GAINFAC1_ADCA_CH2_CTRL_bit at ADCA_CH2_CTRL.B3;
    sbit  CH_GAINFAC1_ADCA_CH3_CTRL_bit at ADCA_CH3_CTRL.B3;
    sbit  CH_GAINFAC2_bit at ADCA_CH0_CTRL.B4;
    const register unsigned short int CH_GAINFAC2 = 4;
    sbit  CH_GAINFAC2_ADCA_CH1_CTRL_bit at ADCA_CH1_CTRL.B4;
    sbit  CH_GAINFAC2_ADCA_CH2_CTRL_bit at ADCA_CH2_CTRL.B4;
    sbit  CH_GAINFAC2_ADCA_CH3_CTRL_bit at ADCA_CH3_CTRL.B4;
    sbit  CH_INPUTMODE0_bit at ADCA_CH0_CTRL.B0;
    const register unsigned short int CH_INPUTMODE0 = 0;
    sbit  CH_INPUTMODE0_ADCA_CH1_CTRL_bit at ADCA_CH1_CTRL.B0;
    sbit  CH_INPUTMODE0_ADCA_CH2_CTRL_bit at ADCA_CH2_CTRL.B0;
    sbit  CH_INPUTMODE0_ADCA_CH3_CTRL_bit at ADCA_CH3_CTRL.B0;
    sbit  CH_INPUTMODE1_bit at ADCA_CH0_CTRL.B1;
    const register unsigned short int CH_INPUTMODE1 = 1;
    sbit  CH_INPUTMODE1_ADCA_CH1_CTRL_bit at ADCA_CH1_CTRL.B1;
    sbit  CH_INPUTMODE1_ADCA_CH2_CTRL_bit at ADCA_CH2_CTRL.B1;
    sbit  CH_INPUTMODE1_ADCA_CH3_CTRL_bit at ADCA_CH3_CTRL.B1;

    // ADC_CH_MUXCTRL bits
    sbit  CH_MUXPOS0_bit at ADCA_CH0_MUXCTRL.B3;
    const register unsigned short int CH_MUXPOS0 = 3;
    sbit  CH_MUXPOS0_ADCA_CH1_MUXCTRL_bit at ADCA_CH1_MUXCTRL.B3;
    sbit  CH_MUXPOS0_ADCA_CH2_MUXCTRL_bit at ADCA_CH2_MUXCTRL.B3;
    sbit  CH_MUXPOS0_ADCA_CH3_MUXCTRL_bit at ADCA_CH3_MUXCTRL.B3;
    sbit  CH_MUXPOS1_bit at ADCA_CH0_MUXCTRL.B4;
    const register unsigned short int CH_MUXPOS1 = 4;
    sbit  CH_MUXPOS1_ADCA_CH1_MUXCTRL_bit at ADCA_CH1_MUXCTRL.B4;
    sbit  CH_MUXPOS1_ADCA_CH2_MUXCTRL_bit at ADCA_CH2_MUXCTRL.B4;
    sbit  CH_MUXPOS1_ADCA_CH3_MUXCTRL_bit at ADCA_CH3_MUXCTRL.B4;
    sbit  CH_MUXPOS2_bit at ADCA_CH0_MUXCTRL.B5;
    const register unsigned short int CH_MUXPOS2 = 5;
    sbit  CH_MUXPOS2_ADCA_CH1_MUXCTRL_bit at ADCA_CH1_MUXCTRL.B5;
    sbit  CH_MUXPOS2_ADCA_CH2_MUXCTRL_bit at ADCA_CH2_MUXCTRL.B5;
    sbit  CH_MUXPOS2_ADCA_CH3_MUXCTRL_bit at ADCA_CH3_MUXCTRL.B5;
    sbit  CH_MUXPOS3_bit at ADCA_CH0_MUXCTRL.B6;
    const register unsigned short int CH_MUXPOS3 = 6;
    sbit  CH_MUXPOS3_ADCA_CH1_MUXCTRL_bit at ADCA_CH1_MUXCTRL.B6;
    sbit  CH_MUXPOS3_ADCA_CH2_MUXCTRL_bit at ADCA_CH2_MUXCTRL.B6;
    sbit  CH_MUXPOS3_ADCA_CH3_MUXCTRL_bit at ADCA_CH3_MUXCTRL.B6;
    sbit  CH_MUXINT0_bit at ADCA_CH0_MUXCTRL.B3;
    const register unsigned short int CH_MUXINT0 = 3;
    sbit  CH_MUXINT0_ADCA_CH1_MUXCTRL_bit at ADCA_CH1_MUXCTRL.B3;
    sbit  CH_MUXINT0_ADCA_CH2_MUXCTRL_bit at ADCA_CH2_MUXCTRL.B3;
    sbit  CH_MUXINT0_ADCA_CH3_MUXCTRL_bit at ADCA_CH3_MUXCTRL.B3;
    sbit  CH_MUXINT1_bit at ADCA_CH0_MUXCTRL.B4;
    const register unsigned short int CH_MUXINT1 = 4;
    sbit  CH_MUXINT1_ADCA_CH1_MUXCTRL_bit at ADCA_CH1_MUXCTRL.B4;
    sbit  CH_MUXINT1_ADCA_CH2_MUXCTRL_bit at ADCA_CH2_MUXCTRL.B4;
    sbit  CH_MUXINT1_ADCA_CH3_MUXCTRL_bit at ADCA_CH3_MUXCTRL.B4;
    sbit  CH_MUXINT2_bit at ADCA_CH0_MUXCTRL.B5;
    const register unsigned short int CH_MUXINT2 = 5;
    sbit  CH_MUXINT2_ADCA_CH1_MUXCTRL_bit at ADCA_CH1_MUXCTRL.B5;
    sbit  CH_MUXINT2_ADCA_CH2_MUXCTRL_bit at ADCA_CH2_MUXCTRL.B5;
    sbit  CH_MUXINT2_ADCA_CH3_MUXCTRL_bit at ADCA_CH3_MUXCTRL.B5;
    sbit  CH_MUXINT3_bit at ADCA_CH0_MUXCTRL.B6;
    const register unsigned short int CH_MUXINT3 = 6;
    sbit  CH_MUXINT3_ADCA_CH1_MUXCTRL_bit at ADCA_CH1_MUXCTRL.B6;
    sbit  CH_MUXINT3_ADCA_CH2_MUXCTRL_bit at ADCA_CH2_MUXCTRL.B6;
    sbit  CH_MUXINT3_ADCA_CH3_MUXCTRL_bit at ADCA_CH3_MUXCTRL.B6;
    sbit  CH_MUXNEG0_bit at ADCA_CH0_MUXCTRL.B0;
    const register unsigned short int CH_MUXNEG0 = 0;
    sbit  CH_MUXNEG0_ADCA_CH1_MUXCTRL_bit at ADCA_CH1_MUXCTRL.B0;
    sbit  CH_MUXNEG0_ADCA_CH2_MUXCTRL_bit at ADCA_CH2_MUXCTRL.B0;
    sbit  CH_MUXNEG0_ADCA_CH3_MUXCTRL_bit at ADCA_CH3_MUXCTRL.B0;
    sbit  CH_MUXNEG1_bit at ADCA_CH0_MUXCTRL.B1;
    const register unsigned short int CH_MUXNEG1 = 1;
    sbit  CH_MUXNEG1_ADCA_CH1_MUXCTRL_bit at ADCA_CH1_MUXCTRL.B1;
    sbit  CH_MUXNEG1_ADCA_CH2_MUXCTRL_bit at ADCA_CH2_MUXCTRL.B1;
    sbit  CH_MUXNEG1_ADCA_CH3_MUXCTRL_bit at ADCA_CH3_MUXCTRL.B1;

    // ADC_CH_INTCTRL bits
    sbit  CH_INTMODE0_bit at ADCA_CH0_INTCTRL.B2;
    const register unsigned short int CH_INTMODE0 = 2;
    sbit  CH_INTMODE0_ADCA_CH1_INTCTRL_bit at ADCA_CH1_INTCTRL.B2;
    sbit  CH_INTMODE0_ADCA_CH2_INTCTRL_bit at ADCA_CH2_INTCTRL.B2;
    sbit  CH_INTMODE0_ADCA_CH3_INTCTRL_bit at ADCA_CH3_INTCTRL.B2;
    sbit  CH_INTMODE1_bit at ADCA_CH0_INTCTRL.B3;
    const register unsigned short int CH_INTMODE1 = 3;
    sbit  CH_INTMODE1_ADCA_CH1_INTCTRL_bit at ADCA_CH1_INTCTRL.B3;
    sbit  CH_INTMODE1_ADCA_CH2_INTCTRL_bit at ADCA_CH2_INTCTRL.B3;
    sbit  CH_INTMODE1_ADCA_CH3_INTCTRL_bit at ADCA_CH3_INTCTRL.B3;
    sbit  CH_INTLVL0_bit at ADCA_CH0_INTCTRL.B0;
    const register unsigned short int CH_INTLVL0 = 0;
    sbit  CH_INTLVL0_ADCA_CH1_INTCTRL_bit at ADCA_CH1_INTCTRL.B0;
    sbit  CH_INTLVL0_ADCA_CH2_INTCTRL_bit at ADCA_CH2_INTCTRL.B0;
    sbit  CH_INTLVL0_ADCA_CH3_INTCTRL_bit at ADCA_CH3_INTCTRL.B0;
    sbit  CH_INTLVL1_bit at ADCA_CH0_INTCTRL.B1;
    const register unsigned short int CH_INTLVL1 = 1;
    sbit  CH_INTLVL1_ADCA_CH1_INTCTRL_bit at ADCA_CH1_INTCTRL.B1;
    sbit  CH_INTLVL1_ADCA_CH2_INTCTRL_bit at ADCA_CH2_INTCTRL.B1;
    sbit  CH_INTLVL1_ADCA_CH3_INTCTRL_bit at ADCA_CH3_INTCTRL.B1;

    // ADC_CH_INTFLAGS bits
    sbit  CH_CHIF_bit at ADCA_CH0_INTFLAGS.B0;
    const register unsigned short int CH_CHIF = 0;
    sbit  CH_CHIF_ADCA_CH1_INTFLAGS_bit at ADCA_CH1_INTFLAGS.B0;
    sbit  CH_CHIF_ADCA_CH2_INTFLAGS_bit at ADCA_CH2_INTFLAGS.B0;
    sbit  CH_CHIF_ADCA_CH3_INTFLAGS_bit at ADCA_CH3_INTFLAGS.B0;

    // ADC_CTRLA bits
    sbit  DMASEL0_bit at ADCA_CTRLA.B6;
    const register unsigned short int DMASEL0 = 6;
    sbit  DMASEL0_ADCB_CTRLA_bit at ADCB_CTRLA.B6;
    sbit  DMASEL1_bit at ADCA_CTRLA.B7;
    const register unsigned short int DMASEL1 = 7;
    sbit  DMASEL1_ADCB_CTRLA_bit at ADCB_CTRLA.B7;
    sbit  CH3START_bit at ADCA_CTRLA.B5;
    const register unsigned short int CH3START = 5;
    sbit  CH3START_ADCB_CTRLA_bit at ADCB_CTRLA.B5;
    sbit  CH2START_bit at ADCA_CTRLA.B4;
    const register unsigned short int CH2START = 4;
    sbit  CH2START_ADCB_CTRLA_bit at ADCB_CTRLA.B4;
    sbit  CH1START_bit at ADCA_CTRLA.B3;
    const register unsigned short int CH1START = 3;
    sbit  CH1START_ADCB_CTRLA_bit at ADCB_CTRLA.B3;
    sbit  CH0START_bit at ADCA_CTRLA.B2;
    const register unsigned short int CH0START = 2;
    sbit  CH0START_ADCB_CTRLA_bit at ADCB_CTRLA.B2;
    sbit  FLUSH_bit at ADCA_CTRLA.B1;
    const register unsigned short int FLUSH = 1;
    sbit  FLUSH_ADCB_CTRLA_bit at ADCB_CTRLA.B1;
    sbit  ENABLE_ADCA_CTRLA_bit at ADCA_CTRLA.B0;
    sbit  ENABLE_ADCB_CTRLA_bit at ADCB_CTRLA.B0;

    // ADC_CTRLB bits
    sbit  CONMODE_bit at ADCA_CTRLB.B4;
    const register unsigned short int CONMODE = 4;
    sbit  CONMODE_ADCB_CTRLB_bit at ADCB_CTRLB.B4;
    sbit  FREERUN_bit at ADCA_CTRLB.B3;
    const register unsigned short int FREERUN = 3;
    sbit  FREERUN_ADCB_CTRLB_bit at ADCB_CTRLB.B3;
    sbit  RESOLUTION0_bit at ADCA_CTRLB.B1;
    const register unsigned short int RESOLUTION0 = 1;
    sbit  RESOLUTION0_ADCB_CTRLB_bit at ADCB_CTRLB.B1;
    sbit  RESOLUTION1_bit at ADCA_CTRLB.B2;
    const register unsigned short int RESOLUTION1 = 2;
    sbit  RESOLUTION1_ADCB_CTRLB_bit at ADCB_CTRLB.B2;

    // ADC_REFCTRL bits
    sbit  REFSEL0_bit at ADCA_REFCTRL.B4;
    const register unsigned short int REFSEL0 = 4;
    sbit  REFSEL0_ADCB_REFCTRL_bit at ADCB_REFCTRL.B4;
    sbit  REFSEL1_bit at ADCA_REFCTRL.B5;
    const register unsigned short int REFSEL1 = 5;
    sbit  REFSEL1_ADCB_REFCTRL_bit at ADCB_REFCTRL.B5;
    sbit  BANDGAP_bit at ADCA_REFCTRL.B1;
    const register unsigned short int BANDGAP = 1;
    sbit  BANDGAP_ADCB_REFCTRL_bit at ADCB_REFCTRL.B1;
    sbit  TEMPREF_bit at ADCA_REFCTRL.B0;
    const register unsigned short int TEMPREF = 0;
    sbit  TEMPREF_ADCB_REFCTRL_bit at ADCB_REFCTRL.B0;

    // ADC_EVCTRL bits
    sbit  SWEEP0_bit at ADCA_EVCTRL.B6;
    const register unsigned short int SWEEP0 = 6;
    sbit  SWEEP0_ADCB_EVCTRL_bit at ADCB_EVCTRL.B6;
    sbit  SWEEP1_bit at ADCA_EVCTRL.B7;
    const register unsigned short int SWEEP1 = 7;
    sbit  SWEEP1_ADCB_EVCTRL_bit at ADCB_EVCTRL.B7;
    sbit  EVSEL0_bit at ADCA_EVCTRL.B3;
    const register unsigned short int EVSEL0 = 3;
    sbit  EVSEL0_ADCB_EVCTRL_bit at ADCB_EVCTRL.B3;
    sbit  EVSEL1_bit at ADCA_EVCTRL.B4;
    const register unsigned short int EVSEL1 = 4;
    sbit  EVSEL1_ADCB_EVCTRL_bit at ADCB_EVCTRL.B4;
    sbit  EVSEL2_bit at ADCA_EVCTRL.B5;
    const register unsigned short int EVSEL2 = 5;
    sbit  EVSEL2_ADCB_EVCTRL_bit at ADCB_EVCTRL.B5;
    sbit  EVACT0_bit at ADCA_EVCTRL.B0;
    const register unsigned short int EVACT0 = 0;
    sbit  EVACT0_ADCB_EVCTRL_bit at ADCB_EVCTRL.B0;
    sbit  EVACT1_bit at ADCA_EVCTRL.B1;
    const register unsigned short int EVACT1 = 1;
    sbit  EVACT1_ADCB_EVCTRL_bit at ADCB_EVCTRL.B1;
    sbit  EVACT2_bit at ADCA_EVCTRL.B2;
    const register unsigned short int EVACT2 = 2;
    sbit  EVACT2_ADCB_EVCTRL_bit at ADCB_EVCTRL.B2;

    // ADC_PRESCALER bits
    sbit  PRESCALER0_bit at ADCA_PRESCALER.B0;
    const register unsigned short int PRESCALER0 = 0;
    sbit  PRESCALER0_ADCB_PRESCALER_bit at ADCB_PRESCALER.B0;
    sbit  PRESCALER1_bit at ADCA_PRESCALER.B1;
    const register unsigned short int PRESCALER1 = 1;
    sbit  PRESCALER1_ADCB_PRESCALER_bit at ADCB_PRESCALER.B1;
    sbit  PRESCALER2_bit at ADCA_PRESCALER.B2;
    const register unsigned short int PRESCALER2 = 2;
    sbit  PRESCALER2_ADCB_PRESCALER_bit at ADCB_PRESCALER.B2;

    // ADC_INTFLAGS bits
    sbit  CH3IF_bit at ADCA_INTFLAGS.B3;
    const register unsigned short int CH3IF = 3;
    sbit  CH3IF_ADCB_INTFLAGS_bit at ADCB_INTFLAGS.B3;
    sbit  CH2IF_bit at ADCA_INTFLAGS.B2;
    const register unsigned short int CH2IF = 2;
    sbit  CH2IF_ADCB_INTFLAGS_bit at ADCB_INTFLAGS.B2;
    sbit  CH1IF_bit at ADCA_INTFLAGS.B1;
    const register unsigned short int CH1IF = 1;
    sbit  CH1IF_ADCB_INTFLAGS_bit at ADCB_INTFLAGS.B1;
    sbit  CH0IF_bit at ADCA_INTFLAGS.B0;
    const register unsigned short int CH0IF = 0;
    sbit  CH0IF_ADCB_INTFLAGS_bit at ADCB_INTFLAGS.B0;

    // DAC_CTRLA bits
    sbit  IDOEN_bit at DACB_CTRLA.B4;
    const register unsigned short int IDOEN = 4;
    sbit  CH1EN_bit at DACB_CTRLA.B3;
    const register unsigned short int CH1EN = 3;
    sbit  CH0EN_bit at DACB_CTRLA.B2;
    const register unsigned short int CH0EN = 2;
    sbit  LPMODE_bit at DACB_CTRLA.B1;
    const register unsigned short int LPMODE = 1;
    sbit  ENABLE_DACB_CTRLA_bit at DACB_CTRLA.B0;

    // DAC_CTRLB bits
    sbit  CHSEL0_bit at DACB_CTRLB.B5;
    const register unsigned short int CHSEL0 = 5;
    sbit  CHSEL1_bit at DACB_CTRLB.B6;
    const register unsigned short int CHSEL1 = 6;
    sbit  CH1TRIG_bit at DACB_CTRLB.B1;
    const register unsigned short int CH1TRIG = 1;
    sbit  CH0TRIG_bit at DACB_CTRLB.B0;
    const register unsigned short int CH0TRIG = 0;

    // DAC_CTRLC bits
    sbit  REFSEL0_DACB_CTRLC_bit at DACB_CTRLC.B3;
    const register unsigned short int REFSEL0_DACB_CTRLC = 3;
    sbit  REFSEL1_DACB_CTRLC_bit at DACB_CTRLC.B4;
    const register unsigned short int REFSEL1_DACB_CTRLC = 4;
    sbit  LEFTADJ_bit at DACB_CTRLC.B0;
    const register unsigned short int LEFTADJ = 0;

    // DAC_EVCTRL bits
    sbit  EVSEL0_DACB_EVCTRL_bit at DACB_EVCTRL.B0;
    const register unsigned short int EVSEL0_DACB_EVCTRL = 0;
    sbit  EVSEL1_DACB_EVCTRL_bit at DACB_EVCTRL.B1;
    const register unsigned short int EVSEL1_DACB_EVCTRL = 1;
    sbit  EVSEL2_DACB_EVCTRL_bit at DACB_EVCTRL.B2;
    const register unsigned short int EVSEL2_DACB_EVCTRL = 2;

    // DAC_TIMCTRL bits
    sbit  CONINTVAL0_bit at DACB_TIMCTRL.B4;
    const register unsigned short int CONINTVAL0 = 4;
    sbit  CONINTVAL1_bit at DACB_TIMCTRL.B5;
    const register unsigned short int CONINTVAL1 = 5;
    sbit  CONINTVAL2_bit at DACB_TIMCTRL.B6;
    const register unsigned short int CONINTVAL2 = 6;
    sbit  REFRESH0_bit at DACB_TIMCTRL.B0;
    const register unsigned short int REFRESH0 = 0;
    sbit  REFRESH1_bit at DACB_TIMCTRL.B1;
    const register unsigned short int REFRESH1 = 1;
    sbit  REFRESH2_bit at DACB_TIMCTRL.B2;
    const register unsigned short int REFRESH2 = 2;
    sbit  REFRESH3_bit at DACB_TIMCTRL.B3;
    const register unsigned short int REFRESH3 = 3;

    // DAC_STATUS bits
    sbit  CH1DRE_bit at DACB_STATUS.B1;
    const register unsigned short int CH1DRE = 1;
    sbit  CH0DRE_bit at DACB_STATUS.B0;
    const register unsigned short int CH0DRE = 0;

    // DAC_GAINCAL bits
    sbit  GAINCAL0_bit at DACB_GAINCAL.B0;
    const register unsigned short int GAINCAL0 = 0;
    sbit  GAINCAL1_bit at DACB_GAINCAL.B1;
    const register unsigned short int GAINCAL1 = 1;
    sbit  GAINCAL2_bit at DACB_GAINCAL.B2;
    const register unsigned short int GAINCAL2 = 2;
    sbit  GAINCAL3_bit at DACB_GAINCAL.B3;
    const register unsigned short int GAINCAL3 = 3;
    sbit  GAINCAL4_bit at DACB_GAINCAL.B4;
    const register unsigned short int GAINCAL4 = 4;
    sbit  GAINCAL5_bit at DACB_GAINCAL.B5;
    const register unsigned short int GAINCAL5 = 5;
    sbit  GAINCAL6_bit at DACB_GAINCAL.B6;
    const register unsigned short int GAINCAL6 = 6;

    // DAC_OFFSETCAL bits
    sbit  OFFSETCAL0_bit at DACB_OFFSETCAL.B0;
    const register unsigned short int OFFSETCAL0 = 0;
    sbit  OFFSETCAL1_bit at DACB_OFFSETCAL.B1;
    const register unsigned short int OFFSETCAL1 = 1;
    sbit  OFFSETCAL2_bit at DACB_OFFSETCAL.B2;
    const register unsigned short int OFFSETCAL2 = 2;
    sbit  OFFSETCAL3_bit at DACB_OFFSETCAL.B3;
    const register unsigned short int OFFSETCAL3 = 3;
    sbit  OFFSETCAL4_bit at DACB_OFFSETCAL.B4;
    const register unsigned short int OFFSETCAL4 = 4;
    sbit  OFFSETCAL5_bit at DACB_OFFSETCAL.B5;
    const register unsigned short int OFFSETCAL5 = 5;
    sbit  OFFSETCAL6_bit at DACB_OFFSETCAL.B6;
    const register unsigned short int OFFSETCAL6 = 6;

    // RTC_CTRL bits
    sbit  PRESCALER0_RTC_CTRL_bit at RTC_CTRL.B0;
    sbit  PRESCALER1_RTC_CTRL_bit at RTC_CTRL.B1;
    sbit  PRESCALER2_RTC_CTRL_bit at RTC_CTRL.B2;

    // RTC_STATUS bits
    sbit  SYNCBUSY_RTC_STATUS_bit at RTC_STATUS.B0;

    // RTC_INTCTRL bits
    sbit  COMPINTLVL0_bit at RTC_INTCTRL.B2;
    const register unsigned short int COMPINTLVL0 = 2;
    sbit  COMPINTLVL1_bit at RTC_INTCTRL.B3;
    const register unsigned short int COMPINTLVL1 = 3;
    sbit  OVFINTLVL0_bit at RTC_INTCTRL.B0;
    const register unsigned short int OVFINTLVL0 = 0;
    sbit  OVFINTLVL1_bit at RTC_INTCTRL.B1;
    const register unsigned short int OVFINTLVL1 = 1;

    // RTC_INTFLAGS bits
    sbit  COMPIF_bit at RTC_INTFLAGS.B1;
    const register unsigned short int COMPIF = 1;
    sbit  OVFIF_bit at RTC_INTFLAGS.B0;
    const register unsigned short int OVFIF = 0;

    // EBI_CS_CTRLA bits

    // EBI_CS_CTRLB bits

    // EBI_CTRL bits

    // EBI_SDRAMCTRLA bits

    // EBI_SDRAMCTRLB bits

    // EBI_SDRAMCTRLC bits

    // TWI_MASTER_CTRLA bits
    sbit  MASTER_INTLVL0_bit at TWIC_MASTER_CTRLA.B6;
    const register unsigned short int MASTER_INTLVL0 = 6;
    sbit  MASTER_INTLVL0_TWIE_MASTER_CTRLA_bit at TWIE_MASTER_CTRLA.B6;
    sbit  MASTER_INTLVL1_bit at TWIC_MASTER_CTRLA.B7;
    const register unsigned short int MASTER_INTLVL1 = 7;
    sbit  MASTER_INTLVL1_TWIE_MASTER_CTRLA_bit at TWIE_MASTER_CTRLA.B7;
    sbit  MASTER_RIEN_bit at TWIC_MASTER_CTRLA.B5;
    const register unsigned short int MASTER_RIEN = 5;
    sbit  MASTER_RIEN_TWIE_MASTER_CTRLA_bit at TWIE_MASTER_CTRLA.B5;
    sbit  MASTER_WIEN_bit at TWIC_MASTER_CTRLA.B4;
    const register unsigned short int MASTER_WIEN = 4;
    sbit  MASTER_WIEN_TWIE_MASTER_CTRLA_bit at TWIE_MASTER_CTRLA.B4;
    sbit  MASTER_ENABLE_bit at TWIC_MASTER_CTRLA.B3;
    const register unsigned short int MASTER_ENABLE = 3;
    sbit  MASTER_ENABLE_TWIE_MASTER_CTRLA_bit at TWIE_MASTER_CTRLA.B3;

    // TWI_MASTER_CTRLB bits
    sbit  MASTER_TIMEOUT0_bit at TWIC_MASTER_CTRLB.B2;
    const register unsigned short int MASTER_TIMEOUT0 = 2;
    sbit  MASTER_TIMEOUT0_TWIE_MASTER_CTRLB_bit at TWIE_MASTER_CTRLB.B2;
    sbit  MASTER_TIMEOUT1_bit at TWIC_MASTER_CTRLB.B3;
    const register unsigned short int MASTER_TIMEOUT1 = 3;
    sbit  MASTER_TIMEOUT1_TWIE_MASTER_CTRLB_bit at TWIE_MASTER_CTRLB.B3;
    sbit  MASTER_QCEN_bit at TWIC_MASTER_CTRLB.B1;
    const register unsigned short int MASTER_QCEN = 1;
    sbit  MASTER_QCEN_TWIE_MASTER_CTRLB_bit at TWIE_MASTER_CTRLB.B1;
    sbit  MASTER_SMEN_bit at TWIC_MASTER_CTRLB.B0;
    const register unsigned short int MASTER_SMEN = 0;
    sbit  MASTER_SMEN_TWIE_MASTER_CTRLB_bit at TWIE_MASTER_CTRLB.B0;

    // TWI_MASTER_CTRLC bits
    sbit  MASTER_ACKACT_bit at TWIC_MASTER_CTRLC.B2;
    const register unsigned short int MASTER_ACKACT = 2;
    sbit  MASTER_ACKACT_TWIE_MASTER_CTRLC_bit at TWIE_MASTER_CTRLC.B2;
    sbit  MASTER_CMD0_bit at TWIC_MASTER_CTRLC.B0;
    const register unsigned short int MASTER_CMD0 = 0;
    sbit  MASTER_CMD0_TWIE_MASTER_CTRLC_bit at TWIE_MASTER_CTRLC.B0;
    sbit  MASTER_CMD1_bit at TWIC_MASTER_CTRLC.B1;
    const register unsigned short int MASTER_CMD1 = 1;
    sbit  MASTER_CMD1_TWIE_MASTER_CTRLC_bit at TWIE_MASTER_CTRLC.B1;

    // TWI_MASTER_STATUS bits
    sbit  MASTER_RIF_bit at TWIC_MASTER_STATUS.B7;
    const register unsigned short int MASTER_RIF = 7;
    sbit  MASTER_RIF_TWIE_MASTER_STATUS_bit at TWIE_MASTER_STATUS.B7;
    sbit  MASTER_WIF_bit at TWIC_MASTER_STATUS.B6;
    const register unsigned short int MASTER_WIF = 6;
    sbit  MASTER_WIF_TWIE_MASTER_STATUS_bit at TWIE_MASTER_STATUS.B6;
    sbit  MASTER_CLKHOLD_bit at TWIC_MASTER_STATUS.B5;
    const register unsigned short int MASTER_CLKHOLD = 5;
    sbit  MASTER_CLKHOLD_TWIE_MASTER_STATUS_bit at TWIE_MASTER_STATUS.B5;
    sbit  MASTER_RXACK_bit at TWIC_MASTER_STATUS.B4;
    const register unsigned short int MASTER_RXACK = 4;
    sbit  MASTER_RXACK_TWIE_MASTER_STATUS_bit at TWIE_MASTER_STATUS.B4;
    sbit  MASTER_ARBLOST_bit at TWIC_MASTER_STATUS.B3;
    const register unsigned short int MASTER_ARBLOST = 3;
    sbit  MASTER_ARBLOST_TWIE_MASTER_STATUS_bit at TWIE_MASTER_STATUS.B3;
    sbit  MASTER_BUSERR_bit at TWIC_MASTER_STATUS.B2;
    const register unsigned short int MASTER_BUSERR = 2;
    sbit  MASTER_BUSERR_TWIE_MASTER_STATUS_bit at TWIE_MASTER_STATUS.B2;
    sbit  MASTER_BUSSTATE0_bit at TWIC_MASTER_STATUS.B0;
    const register unsigned short int MASTER_BUSSTATE0 = 0;
    sbit  MASTER_BUSSTATE0_TWIE_MASTER_STATUS_bit at TWIE_MASTER_STATUS.B0;
    sbit  MASTER_BUSSTATE1_bit at TWIC_MASTER_STATUS.B1;
    const register unsigned short int MASTER_BUSSTATE1 = 1;
    sbit  MASTER_BUSSTATE1_TWIE_MASTER_STATUS_bit at TWIE_MASTER_STATUS.B1;

    // TWI_SLAVE_CTRLA bits
    sbit  SLAVE_INTLVL0_bit at TWIC_SLAVE_CTRLA.B6;
    const register unsigned short int SLAVE_INTLVL0 = 6;
    sbit  SLAVE_INTLVL0_TWIE_SLAVE_CTRLA_bit at TWIE_SLAVE_CTRLA.B6;
    sbit  SLAVE_INTLVL1_bit at TWIC_SLAVE_CTRLA.B7;
    const register unsigned short int SLAVE_INTLVL1 = 7;
    sbit  SLAVE_INTLVL1_TWIE_SLAVE_CTRLA_bit at TWIE_SLAVE_CTRLA.B7;
    sbit  SLAVE_DIEN_bit at TWIC_SLAVE_CTRLA.B5;
    const register unsigned short int SLAVE_DIEN = 5;
    sbit  SLAVE_DIEN_TWIE_SLAVE_CTRLA_bit at TWIE_SLAVE_CTRLA.B5;
    sbit  SLAVE_APIEN_bit at TWIC_SLAVE_CTRLA.B4;
    const register unsigned short int SLAVE_APIEN = 4;
    sbit  SLAVE_APIEN_TWIE_SLAVE_CTRLA_bit at TWIE_SLAVE_CTRLA.B4;
    sbit  SLAVE_ENABLE_bit at TWIC_SLAVE_CTRLA.B3;
    const register unsigned short int SLAVE_ENABLE = 3;
    sbit  SLAVE_ENABLE_TWIE_SLAVE_CTRLA_bit at TWIE_SLAVE_CTRLA.B3;
    sbit  SLAVE_PIEN_bit at TWIC_SLAVE_CTRLA.B2;
    const register unsigned short int SLAVE_PIEN = 2;
    sbit  SLAVE_PIEN_TWIE_SLAVE_CTRLA_bit at TWIE_SLAVE_CTRLA.B2;
    sbit  SLAVE_PMEN_bit at TWIC_SLAVE_CTRLA.B1;
    const register unsigned short int SLAVE_PMEN = 1;
    sbit  SLAVE_PMEN_TWIE_SLAVE_CTRLA_bit at TWIE_SLAVE_CTRLA.B1;
    sbit  SLAVE_SMEN_bit at TWIC_SLAVE_CTRLA.B0;
    const register unsigned short int SLAVE_SMEN = 0;
    sbit  SLAVE_SMEN_TWIE_SLAVE_CTRLA_bit at TWIE_SLAVE_CTRLA.B0;

    // TWI_SLAVE_CTRLB bits
    sbit  SLAVE_ACKACT_bit at TWIC_SLAVE_CTRLB.B2;
    const register unsigned short int SLAVE_ACKACT = 2;
    sbit  SLAVE_ACKACT_TWIE_SLAVE_CTRLB_bit at TWIE_SLAVE_CTRLB.B2;
    sbit  SLAVE_CMD0_bit at TWIC_SLAVE_CTRLB.B0;
    const register unsigned short int SLAVE_CMD0 = 0;
    sbit  SLAVE_CMD0_TWIE_SLAVE_CTRLB_bit at TWIE_SLAVE_CTRLB.B0;
    sbit  SLAVE_CMD1_bit at TWIC_SLAVE_CTRLB.B1;
    const register unsigned short int SLAVE_CMD1 = 1;
    sbit  SLAVE_CMD1_TWIE_SLAVE_CTRLB_bit at TWIE_SLAVE_CTRLB.B1;

    // TWI_SLAVE_STATUS bits
    sbit  SLAVE_DIF_bit at TWIC_SLAVE_STATUS.B7;
    const register unsigned short int SLAVE_DIF = 7;
    sbit  SLAVE_DIF_TWIE_SLAVE_STATUS_bit at TWIE_SLAVE_STATUS.B7;
    sbit  SLAVE_APIF_bit at TWIC_SLAVE_STATUS.B6;
    const register unsigned short int SLAVE_APIF = 6;
    sbit  SLAVE_APIF_TWIE_SLAVE_STATUS_bit at TWIE_SLAVE_STATUS.B6;
    sbit  SLAVE_CLKHOLD_bit at TWIC_SLAVE_STATUS.B5;
    const register unsigned short int SLAVE_CLKHOLD = 5;
    sbit  SLAVE_CLKHOLD_TWIE_SLAVE_STATUS_bit at TWIE_SLAVE_STATUS.B5;
    sbit  SLAVE_RXACK_bit at TWIC_SLAVE_STATUS.B4;
    const register unsigned short int SLAVE_RXACK = 4;
    sbit  SLAVE_RXACK_TWIE_SLAVE_STATUS_bit at TWIE_SLAVE_STATUS.B4;
    sbit  SLAVE_COLL_bit at TWIC_SLAVE_STATUS.B3;
    const register unsigned short int SLAVE_COLL = 3;
    sbit  SLAVE_COLL_TWIE_SLAVE_STATUS_bit at TWIE_SLAVE_STATUS.B3;
    sbit  SLAVE_BUSERR_bit at TWIC_SLAVE_STATUS.B2;
    const register unsigned short int SLAVE_BUSERR = 2;
    sbit  SLAVE_BUSERR_TWIE_SLAVE_STATUS_bit at TWIE_SLAVE_STATUS.B2;
    sbit  SLAVE_DIR_bit at TWIC_SLAVE_STATUS.B1;
    const register unsigned short int SLAVE_DIR = 1;
    sbit  SLAVE_DIR_TWIE_SLAVE_STATUS_bit at TWIE_SLAVE_STATUS.B1;
    sbit  SLAVE_AP_bit at TWIC_SLAVE_STATUS.B0;
    const register unsigned short int SLAVE_AP = 0;
    sbit  SLAVE_AP_TWIE_SLAVE_STATUS_bit at TWIE_SLAVE_STATUS.B0;

    // TWI_SLAVE_ADDRMASK bits
    sbit  SLAVE_ADDRMASK0_bit at TWIC_SLAVE_ADDRMASK.B1;
    const register unsigned short int SLAVE_ADDRMASK0 = 1;
    sbit  SLAVE_ADDRMASK0_TWIE_SLAVE_ADDRMASK_bit at TWIE_SLAVE_ADDRMASK.B1;
    sbit  SLAVE_ADDRMASK1_bit at TWIC_SLAVE_ADDRMASK.B2;
    const register unsigned short int SLAVE_ADDRMASK1 = 2;
    sbit  SLAVE_ADDRMASK1_TWIE_SLAVE_ADDRMASK_bit at TWIE_SLAVE_ADDRMASK.B2;
    sbit  SLAVE_ADDRMASK2_bit at TWIC_SLAVE_ADDRMASK.B3;
    const register unsigned short int SLAVE_ADDRMASK2 = 3;
    sbit  SLAVE_ADDRMASK2_TWIE_SLAVE_ADDRMASK_bit at TWIE_SLAVE_ADDRMASK.B3;
    sbit  SLAVE_ADDRMASK3_bit at TWIC_SLAVE_ADDRMASK.B4;
    const register unsigned short int SLAVE_ADDRMASK3 = 4;
    sbit  SLAVE_ADDRMASK3_TWIE_SLAVE_ADDRMASK_bit at TWIE_SLAVE_ADDRMASK.B4;
    sbit  SLAVE_ADDRMASK4_bit at TWIC_SLAVE_ADDRMASK.B5;
    const register unsigned short int SLAVE_ADDRMASK4 = 5;
    sbit  SLAVE_ADDRMASK4_TWIE_SLAVE_ADDRMASK_bit at TWIE_SLAVE_ADDRMASK.B5;
    sbit  SLAVE_ADDRMASK5_bit at TWIC_SLAVE_ADDRMASK.B6;
    const register unsigned short int SLAVE_ADDRMASK5 = 6;
    sbit  SLAVE_ADDRMASK5_TWIE_SLAVE_ADDRMASK_bit at TWIE_SLAVE_ADDRMASK.B6;
    sbit  SLAVE_ADDRMASK6_bit at TWIC_SLAVE_ADDRMASK.B7;
    const register unsigned short int SLAVE_ADDRMASK6 = 7;
    sbit  SLAVE_ADDRMASK6_TWIE_SLAVE_ADDRMASK_bit at TWIE_SLAVE_ADDRMASK.B7;
    sbit  SLAVE_ADDREN_bit at TWIC_SLAVE_ADDRMASK.B0;
    const register unsigned short int SLAVE_ADDREN = 0;
    sbit  SLAVE_ADDREN_TWIE_SLAVE_ADDRMASK_bit at TWIE_SLAVE_ADDRMASK.B0;

    // TWI_CTRL bits
    sbit  SDAHOLD_bit at TWIC_CTRL.B1;
    const register unsigned short int SDAHOLD = 1;
    sbit  SDAHOLD_TWIE_CTRL_bit at TWIE_CTRL.B1;
    sbit  EDIEN_bit at TWIC_CTRL.B0;
    const register unsigned short int EDIEN = 0;
    sbit  EDIEN_TWIE_CTRL_bit at TWIE_CTRL.B0;

    // PORTCFG_VPCTRLA bits
    sbit  VP1MAP0_bit at PORTCFG_VPCTRLA.B4;
    const register unsigned short int VP1MAP0 = 4;
    sbit  VP1MAP1_bit at PORTCFG_VPCTRLA.B5;
    const register unsigned short int VP1MAP1 = 5;
    sbit  VP1MAP2_bit at PORTCFG_VPCTRLA.B6;
    const register unsigned short int VP1MAP2 = 6;
    sbit  VP1MAP3_bit at PORTCFG_VPCTRLA.B7;
    const register unsigned short int VP1MAP3 = 7;
    sbit  VP0MAP0_bit at PORTCFG_VPCTRLA.B0;
    const register unsigned short int VP0MAP0 = 0;
    sbit  VP0MAP1_bit at PORTCFG_VPCTRLA.B1;
    const register unsigned short int VP0MAP1 = 1;
    sbit  VP0MAP2_bit at PORTCFG_VPCTRLA.B2;
    const register unsigned short int VP0MAP2 = 2;
    sbit  VP0MAP3_bit at PORTCFG_VPCTRLA.B3;
    const register unsigned short int VP0MAP3 = 3;

    // PORTCFG_VPCTRLB bits
    sbit  VP3MAP0_bit at PORTCFG_VPCTRLB.B4;
    const register unsigned short int VP3MAP0 = 4;
    sbit  VP3MAP1_bit at PORTCFG_VPCTRLB.B5;
    const register unsigned short int VP3MAP1 = 5;
    sbit  VP3MAP2_bit at PORTCFG_VPCTRLB.B6;
    const register unsigned short int VP3MAP2 = 6;
    sbit  VP3MAP3_bit at PORTCFG_VPCTRLB.B7;
    const register unsigned short int VP3MAP3 = 7;
    sbit  VP2MAP0_bit at PORTCFG_VPCTRLB.B0;
    const register unsigned short int VP2MAP0 = 0;
    sbit  VP2MAP1_bit at PORTCFG_VPCTRLB.B1;
    const register unsigned short int VP2MAP1 = 1;
    sbit  VP2MAP2_bit at PORTCFG_VPCTRLB.B2;
    const register unsigned short int VP2MAP2 = 2;
    sbit  VP2MAP3_bit at PORTCFG_VPCTRLB.B3;
    const register unsigned short int VP2MAP3 = 3;

    // PORTCFG_CLKEVOUT bits
    sbit  CLKOUT0_bit at PORTCFG_CLKEVOUT.B0;
    const register unsigned short int CLKOUT0 = 0;
    sbit  CLKOUT1_bit at PORTCFG_CLKEVOUT.B1;
    const register unsigned short int CLKOUT1 = 1;
    sbit  EVOUT0_bit at PORTCFG_CLKEVOUT.B4;
    const register unsigned short int EVOUT0 = 4;
    sbit  EVOUT1_bit at PORTCFG_CLKEVOUT.B5;
    const register unsigned short int EVOUT1 = 5;

    // VPORT_INTFLAGS bits
    sbit  INT1IF_bit at VPORT0_INTFLAGS.B1;
    const register unsigned short int INT1IF = 1;
    sbit  INT1IF_VPORT1_INTFLAGS_bit at VPORT1_INTFLAGS.B1;
    sbit  INT1IF_VPORT2_INTFLAGS_bit at VPORT2_INTFLAGS.B1;
    sbit  INT1IF_VPORT3_INTFLAGS_bit at VPORT3_INTFLAGS.B1;
    sbit  INT0IF_bit at VPORT0_INTFLAGS.B0;
    const register unsigned short int INT0IF = 0;
    sbit  INT0IF_VPORT1_INTFLAGS_bit at VPORT1_INTFLAGS.B0;
    sbit  INT0IF_VPORT2_INTFLAGS_bit at VPORT2_INTFLAGS.B0;
    sbit  INT0IF_VPORT3_INTFLAGS_bit at VPORT3_INTFLAGS.B0;

    // PORT_INTCTRL bits
    sbit  INT1LVL0_bit at PORTA_INTCTRL.B2;
    const register unsigned short int INT1LVL0 = 2;
    sbit  INT1LVL0_PORTB_INTCTRL_bit at PORTB_INTCTRL.B2;
    sbit  INT1LVL0_PORTC_INTCTRL_bit at PORTC_INTCTRL.B2;
    sbit  INT1LVL0_PORTD_INTCTRL_bit at PORTD_INTCTRL.B2;
    sbit  INT1LVL0_PORTE_INTCTRL_bit at PORTE_INTCTRL.B2;
    sbit  INT1LVL0_PORTF_INTCTRL_bit at PORTF_INTCTRL.B2;
    sbit  INT1LVL1_bit at PORTA_INTCTRL.B3;
    const register unsigned short int INT1LVL1 = 3;
    sbit  INT1LVL1_PORTB_INTCTRL_bit at PORTB_INTCTRL.B3;
    sbit  INT1LVL1_PORTC_INTCTRL_bit at PORTC_INTCTRL.B3;
    sbit  INT1LVL1_PORTD_INTCTRL_bit at PORTD_INTCTRL.B3;
    sbit  INT1LVL1_PORTE_INTCTRL_bit at PORTE_INTCTRL.B3;
    sbit  INT1LVL1_PORTF_INTCTRL_bit at PORTF_INTCTRL.B3;
    sbit  INT0LVL0_bit at PORTA_INTCTRL.B0;
    const register unsigned short int INT0LVL0 = 0;
    sbit  INT0LVL0_PORTB_INTCTRL_bit at PORTB_INTCTRL.B0;
    sbit  INT0LVL0_PORTC_INTCTRL_bit at PORTC_INTCTRL.B0;
    sbit  INT0LVL0_PORTD_INTCTRL_bit at PORTD_INTCTRL.B0;
    sbit  INT0LVL0_PORTE_INTCTRL_bit at PORTE_INTCTRL.B0;
    sbit  INT0LVL0_PORTF_INTCTRL_bit at PORTF_INTCTRL.B0;
    sbit  INT0LVL1_bit at PORTA_INTCTRL.B1;
    const register unsigned short int INT0LVL1 = 1;
    sbit  INT0LVL1_PORTB_INTCTRL_bit at PORTB_INTCTRL.B1;
    sbit  INT0LVL1_PORTC_INTCTRL_bit at PORTC_INTCTRL.B1;
    sbit  INT0LVL1_PORTD_INTCTRL_bit at PORTD_INTCTRL.B1;
    sbit  INT0LVL1_PORTE_INTCTRL_bit at PORTE_INTCTRL.B1;
    sbit  INT0LVL1_PORTF_INTCTRL_bit at PORTF_INTCTRL.B1;

    // PORT_INTFLAGS bits
    sbit  INT1IF_PORTA_INTFLAGS_bit at PORTA_INTFLAGS.B1;
    sbit  INT1IF_PORTB_INTFLAGS_bit at PORTB_INTFLAGS.B1;
    sbit  INT1IF_PORTC_INTFLAGS_bit at PORTC_INTFLAGS.B1;
    sbit  INT1IF_PORTD_INTFLAGS_bit at PORTD_INTFLAGS.B1;
    sbit  INT1IF_PORTE_INTFLAGS_bit at PORTE_INTFLAGS.B1;
    sbit  INT1IF_PORTF_INTFLAGS_bit at PORTF_INTFLAGS.B1;
    sbit  INT0IF_PORTA_INTFLAGS_bit at PORTA_INTFLAGS.B0;
    sbit  INT0IF_PORTB_INTFLAGS_bit at PORTB_INTFLAGS.B0;
    sbit  INT0IF_PORTC_INTFLAGS_bit at PORTC_INTFLAGS.B0;
    sbit  INT0IF_PORTD_INTFLAGS_bit at PORTD_INTFLAGS.B0;
    sbit  INT0IF_PORTE_INTFLAGS_bit at PORTE_INTFLAGS.B0;
    sbit  INT0IF_PORTF_INTFLAGS_bit at PORTF_INTFLAGS.B0;

    // PORT_PIN0CTRL bits
    sbit  SRLEN_bit at PORTA_PIN0CTRL.B7;
    const register unsigned short int SRLEN = 7;
    sbit  SRLEN_PORTB_PIN0CTRL_bit at PORTB_PIN0CTRL.B7;
    sbit  SRLEN_PORTC_PIN0CTRL_bit at PORTC_PIN0CTRL.B7;
    sbit  SRLEN_PORTD_PIN0CTRL_bit at PORTD_PIN0CTRL.B7;
    sbit  SRLEN_PORTE_PIN0CTRL_bit at PORTE_PIN0CTRL.B7;
    sbit  SRLEN_PORTF_PIN0CTRL_bit at PORTF_PIN0CTRL.B7;
    sbit  INVEN_bit at PORTA_PIN0CTRL.B6;
    const register unsigned short int INVEN = 6;
    sbit  INVEN_PORTB_PIN0CTRL_bit at PORTB_PIN0CTRL.B6;
    sbit  INVEN_PORTC_PIN0CTRL_bit at PORTC_PIN0CTRL.B6;
    sbit  INVEN_PORTD_PIN0CTRL_bit at PORTD_PIN0CTRL.B6;
    sbit  INVEN_PORTE_PIN0CTRL_bit at PORTE_PIN0CTRL.B6;
    sbit  INVEN_PORTF_PIN0CTRL_bit at PORTF_PIN0CTRL.B6;
    sbit  OPC0_bit at PORTA_PIN0CTRL.B3;
    const register unsigned short int OPC0 = 3;
    sbit  OPC0_PORTB_PIN0CTRL_bit at PORTB_PIN0CTRL.B3;
    sbit  OPC0_PORTC_PIN0CTRL_bit at PORTC_PIN0CTRL.B3;
    sbit  OPC0_PORTD_PIN0CTRL_bit at PORTD_PIN0CTRL.B3;
    sbit  OPC0_PORTE_PIN0CTRL_bit at PORTE_PIN0CTRL.B3;
    sbit  OPC0_PORTF_PIN0CTRL_bit at PORTF_PIN0CTRL.B3;
    sbit  OPC1_bit at PORTA_PIN0CTRL.B4;
    const register unsigned short int OPC1 = 4;
    sbit  OPC1_PORTB_PIN0CTRL_bit at PORTB_PIN0CTRL.B4;
    sbit  OPC1_PORTC_PIN0CTRL_bit at PORTC_PIN0CTRL.B4;
    sbit  OPC1_PORTD_PIN0CTRL_bit at PORTD_PIN0CTRL.B4;
    sbit  OPC1_PORTE_PIN0CTRL_bit at PORTE_PIN0CTRL.B4;
    sbit  OPC1_PORTF_PIN0CTRL_bit at PORTF_PIN0CTRL.B4;
    sbit  OPC2_bit at PORTA_PIN0CTRL.B5;
    const register unsigned short int OPC2 = 5;
    sbit  OPC2_PORTB_PIN0CTRL_bit at PORTB_PIN0CTRL.B5;
    sbit  OPC2_PORTC_PIN0CTRL_bit at PORTC_PIN0CTRL.B5;
    sbit  OPC2_PORTD_PIN0CTRL_bit at PORTD_PIN0CTRL.B5;
    sbit  OPC2_PORTE_PIN0CTRL_bit at PORTE_PIN0CTRL.B5;
    sbit  OPC2_PORTF_PIN0CTRL_bit at PORTF_PIN0CTRL.B5;
    sbit  ISC0_bit at PORTA_PIN0CTRL.B0;
    const register unsigned short int ISC0 = 0;
    sbit  ISC0_PORTB_PIN0CTRL_bit at PORTB_PIN0CTRL.B0;
    sbit  ISC0_PORTC_PIN0CTRL_bit at PORTC_PIN0CTRL.B0;
    sbit  ISC0_PORTD_PIN0CTRL_bit at PORTD_PIN0CTRL.B0;
    sbit  ISC0_PORTE_PIN0CTRL_bit at PORTE_PIN0CTRL.B0;
    sbit  ISC0_PORTF_PIN0CTRL_bit at PORTF_PIN0CTRL.B0;
    sbit  ISC1_bit at PORTA_PIN0CTRL.B1;
    const register unsigned short int ISC1 = 1;
    sbit  ISC1_PORTB_PIN0CTRL_bit at PORTB_PIN0CTRL.B1;
    sbit  ISC1_PORTC_PIN0CTRL_bit at PORTC_PIN0CTRL.B1;
    sbit  ISC1_PORTD_PIN0CTRL_bit at PORTD_PIN0CTRL.B1;
    sbit  ISC1_PORTE_PIN0CTRL_bit at PORTE_PIN0CTRL.B1;
    sbit  ISC1_PORTF_PIN0CTRL_bit at PORTF_PIN0CTRL.B1;
    sbit  ISC2_bit at PORTA_PIN0CTRL.B2;
    const register unsigned short int ISC2 = 2;
    sbit  ISC2_PORTB_PIN0CTRL_bit at PORTB_PIN0CTRL.B2;
    sbit  ISC2_PORTC_PIN0CTRL_bit at PORTC_PIN0CTRL.B2;
    sbit  ISC2_PORTD_PIN0CTRL_bit at PORTD_PIN0CTRL.B2;
    sbit  ISC2_PORTE_PIN0CTRL_bit at PORTE_PIN0CTRL.B2;
    sbit  ISC2_PORTF_PIN0CTRL_bit at PORTF_PIN0CTRL.B2;

    // PORT_PIN1CTRL bits

    // PORT_PIN2CTRL bits

    // PORT_PIN3CTRL bits

    // PORT_PIN4CTRL bits

    // PORT_PIN5CTRL bits

    // PORT_PIN6CTRL bits

    // PORT_PIN7CTRL bits

    // TC0_CTRLA bits
    sbit  CLKSEL0_bit at TCC0_CTRLA.B0;
    const register unsigned short int CLKSEL0 = 0;
    sbit  CLKSEL1_bit at TCC0_CTRLA.B1;
    const register unsigned short int CLKSEL1 = 1;
    sbit  CLKSEL2_bit at TCC0_CTRLA.B2;
    const register unsigned short int CLKSEL2 = 2;
    sbit  CLKSEL3_bit at TCC0_CTRLA.B3;
    const register unsigned short int CLKSEL3 = 3;

    // TC0_CTRLB bits
    sbit  CCDEN_bit at TCC0_CTRLB.B7;
    const register unsigned short int CCDEN = 7;
    sbit  CCCEN_bit at TCC0_CTRLB.B6;
    const register unsigned short int CCCEN = 6;
    sbit  CCBEN_bit at TCC0_CTRLB.B5;
    const register unsigned short int CCBEN = 5;
    sbit  CCAEN_bit at TCC0_CTRLB.B4;
    const register unsigned short int CCAEN = 4;
    sbit  WGMODE0_bit at TCC0_CTRLB.B0;
    const register unsigned short int WGMODE0 = 0;
    sbit  WGMODE1_bit at TCC0_CTRLB.B1;
    const register unsigned short int WGMODE1 = 1;
    sbit  WGMODE2_bit at TCC0_CTRLB.B2;
    const register unsigned short int WGMODE2 = 2;

    // TC0_CTRLC bits
    sbit  CMPD_bit at TCC0_CTRLC.B3;
    const register unsigned short int CMPD = 3;
    sbit  CMPC_bit at TCC0_CTRLC.B2;
    const register unsigned short int CMPC = 2;
    sbit  CMPB_bit at TCC0_CTRLC.B1;
    const register unsigned short int CMPB = 1;
    sbit  CMPA_bit at TCC0_CTRLC.B0;
    const register unsigned short int CMPA = 0;

    // TC0_CTRLD bits
    sbit  EVACT0_TCC0_CTRLD_bit at TCC0_CTRLD.B5;
    const register unsigned short int EVACT0_TCC0_CTRLD = 5;
    sbit  EVACT1_TCC0_CTRLD_bit at TCC0_CTRLD.B6;
    const register unsigned short int EVACT1_TCC0_CTRLD = 6;
    sbit  EVACT2_TCC0_CTRLD_bit at TCC0_CTRLD.B7;
    const register unsigned short int EVACT2_TCC0_CTRLD = 7;
    sbit  EVDLY_bit at TCC0_CTRLD.B4;
    const register unsigned short int EVDLY = 4;
    sbit  EVSEL0_TCC0_CTRLD_bit at TCC0_CTRLD.B0;
    const register unsigned short int EVSEL0_TCC0_CTRLD = 0;
    sbit  EVSEL1_TCC0_CTRLD_bit at TCC0_CTRLD.B1;
    const register unsigned short int EVSEL1_TCC0_CTRLD = 1;
    sbit  EVSEL2_TCC0_CTRLD_bit at TCC0_CTRLD.B2;
    const register unsigned short int EVSEL2_TCC0_CTRLD = 2;
    sbit  EVSEL3_bit at TCC0_CTRLD.B3;
    const register unsigned short int EVSEL3 = 3;

    // TC0_CTRLE bits
    sbit  BYTEM_bit at TCC0_CTRLE.B0;
    const register unsigned short int BYTEM = 0;

    // TC0_INTCTRLA bits
    sbit  ERRINTLVL0_bit at TCC0_INTCTRLA.B2;
    const register unsigned short int ERRINTLVL0 = 2;
    sbit  ERRINTLVL1_bit at TCC0_INTCTRLA.B3;
    const register unsigned short int ERRINTLVL1 = 3;
    sbit  OVFINTLVL0_TCC0_INTCTRLA_bit at TCC0_INTCTRLA.B0;
    sbit  OVFINTLVL1_TCC0_INTCTRLA_bit at TCC0_INTCTRLA.B1;

    // TC0_INTCTRLB bits
    sbit  CCDINTLVL0_bit at TCC0_INTCTRLB.B6;
    const register unsigned short int CCDINTLVL0 = 6;
    sbit  CCDINTLVL1_bit at TCC0_INTCTRLB.B7;
    const register unsigned short int CCDINTLVL1 = 7;
    sbit  CCCINTLVL0_bit at TCC0_INTCTRLB.B4;
    const register unsigned short int CCCINTLVL0 = 4;
    sbit  CCCINTLVL1_bit at TCC0_INTCTRLB.B5;
    const register unsigned short int CCCINTLVL1 = 5;
    sbit  CCBINTLVL0_bit at TCC0_INTCTRLB.B2;
    const register unsigned short int CCBINTLVL0 = 2;
    sbit  CCBINTLVL1_bit at TCC0_INTCTRLB.B3;
    const register unsigned short int CCBINTLVL1 = 3;
    sbit  CCAINTLVL0_bit at TCC0_INTCTRLB.B0;
    const register unsigned short int CCAINTLVL0 = 0;
    sbit  CCAINTLVL1_bit at TCC0_INTCTRLB.B1;
    const register unsigned short int CCAINTLVL1 = 1;

    // TC0_CTRLFCLR bits
    sbit  CMD0_TCC0_CTRLFCLR_bit at TCC0_CTRLFCLR.B2;
    const register unsigned short int CMD0_TCC0_CTRLFCLR = 2;
    sbit  CMD0_TCC0_CTRLFSET_bit at TCC0_CTRLFSET.B2;
    const register unsigned short int CMD0_TCC0_CTRLFSET = 2;
    sbit  CMD1_TCC0_CTRLFCLR_bit at TCC0_CTRLFCLR.B3;
    const register unsigned short int CMD1_TCC0_CTRLFCLR = 3;
    sbit  CMD1_TCC0_CTRLFSET_bit at TCC0_CTRLFSET.B3;
    const register unsigned short int CMD1_TCC0_CTRLFSET = 3;
    sbit  LUPD_bit at TCC0_CTRLFCLR.B1;
    const register unsigned short int LUPD = 1;
    sbit  LUPD_TCC0_CTRLFSET_bit at TCC0_CTRLFSET.B1;
    sbit  DIR_bit at TCC0_CTRLFCLR.B0;
    const register unsigned short int DIR_ = 0;
    sbit  DIR_TCC0_CTRLFSET_bit at TCC0_CTRLFSET.B0;
    const register unsigned short int DIR_TCC0_CTRLFSET = 0;

    // TC0_CTRLFSET bits

    // TC0_CTRLGCLR bits
    sbit  CCDBV_bit at TCC0_CTRLGCLR.B4;
    const register unsigned short int CCDBV = 4;
    sbit  CCCBV_bit at TCC0_CTRLGCLR.B3;
    const register unsigned short int CCCBV = 3;
    sbit  CCBBV_bit at TCC0_CTRLGCLR.B2;
    const register unsigned short int CCBBV = 2;
    sbit  CCABV_bit at TCC0_CTRLGCLR.B1;
    const register unsigned short int CCABV = 1;
    sbit  PERBV_bit at TCC0_CTRLGCLR.B0;
    const register unsigned short int PERBV = 0;

    // TC0_CTRLGSET bits

    // TC0_INTFLAGS bits
    sbit  CCDIF_bit at TCC0_INTFLAGS.B7;
    const register unsigned short int CCDIF = 7;
    sbit  CCCIF_bit at TCC0_INTFLAGS.B6;
    const register unsigned short int CCCIF = 6;
    sbit  CCBIF_bit at TCC0_INTFLAGS.B5;
    const register unsigned short int CCBIF = 5;
    sbit  CCAIF_bit at TCC0_INTFLAGS.B4;
    const register unsigned short int CCAIF = 4;
    sbit  ERRIF_bit at TCC0_INTFLAGS.B1;
    const register unsigned short int ERRIF = 1;
    sbit  OVFIF_TCC0_INTFLAGS_bit at TCC0_INTFLAGS.B0;

    // TC1_CTRLA bits
    sbit  CLKSEL0_TCC1_CTRLA_bit at TCC1_CTRLA.B0;
    sbit  CLKSEL1_TCC1_CTRLA_bit at TCC1_CTRLA.B1;
    sbit  CLKSEL2_TCC1_CTRLA_bit at TCC1_CTRLA.B2;
    sbit  CLKSEL3_TCC1_CTRLA_bit at TCC1_CTRLA.B3;

    // TC1_CTRLB bits
    sbit  CCBEN_TCC1_CTRLB_bit at TCC1_CTRLB.B5;
    sbit  CCAEN_TCC1_CTRLB_bit at TCC1_CTRLB.B4;
    sbit  WGMODE0_TCC1_CTRLB_bit at TCC1_CTRLB.B0;
    sbit  WGMODE1_TCC1_CTRLB_bit at TCC1_CTRLB.B1;
    sbit  WGMODE2_TCC1_CTRLB_bit at TCC1_CTRLB.B2;

    // TC1_CTRLC bits
    sbit  CMPB_TCC1_CTRLC_bit at TCC1_CTRLC.B1;
    sbit  CMPA_TCC1_CTRLC_bit at TCC1_CTRLC.B0;

    // TC1_CTRLD bits
    sbit  EVACT0_TCC1_CTRLD_bit at TCC1_CTRLD.B5;
    const register unsigned short int EVACT0_TCC1_CTRLD = 5;
    sbit  EVACT1_TCC1_CTRLD_bit at TCC1_CTRLD.B6;
    const register unsigned short int EVACT1_TCC1_CTRLD = 6;
    sbit  EVACT2_TCC1_CTRLD_bit at TCC1_CTRLD.B7;
    const register unsigned short int EVACT2_TCC1_CTRLD = 7;
    sbit  EVDLY_TCC1_CTRLD_bit at TCC1_CTRLD.B4;
    sbit  EVSEL0_TCC1_CTRLD_bit at TCC1_CTRLD.B0;
    const register unsigned short int EVSEL0_TCC1_CTRLD = 0;
    sbit  EVSEL1_TCC1_CTRLD_bit at TCC1_CTRLD.B1;
    const register unsigned short int EVSEL1_TCC1_CTRLD = 1;
    sbit  EVSEL2_TCC1_CTRLD_bit at TCC1_CTRLD.B2;
    const register unsigned short int EVSEL2_TCC1_CTRLD = 2;
    sbit  EVSEL3_TCC1_CTRLD_bit at TCC1_CTRLD.B3;

    // TC1_CTRLE bits
    sbit  BYTEM_TCC1_CTRLE_bit at TCC1_CTRLE.B0;

    // TC1_INTCTRLA bits
    sbit  ERRINTLVL0_TCC1_INTCTRLA_bit at TCC1_INTCTRLA.B2;
    sbit  ERRINTLVL1_TCC1_INTCTRLA_bit at TCC1_INTCTRLA.B3;
    sbit  OVFINTLVL0_TCC1_INTCTRLA_bit at TCC1_INTCTRLA.B0;
    sbit  OVFINTLVL1_TCC1_INTCTRLA_bit at TCC1_INTCTRLA.B1;

    // TC1_INTCTRLB bits
    sbit  CCBINTLVL0_TCC1_INTCTRLB_bit at TCC1_INTCTRLB.B2;
    sbit  CCBINTLVL1_TCC1_INTCTRLB_bit at TCC1_INTCTRLB.B3;
    sbit  CCAINTLVL0_TCC1_INTCTRLB_bit at TCC1_INTCTRLB.B0;
    sbit  CCAINTLVL1_TCC1_INTCTRLB_bit at TCC1_INTCTRLB.B1;

    // TC1_CTRLFCLR bits
    sbit  CMD0_TCC1_CTRLFCLR_bit at TCC1_CTRLFCLR.B2;
    const register unsigned short int CMD0_TCC1_CTRLFCLR = 2;
    sbit  CMD0_TCC1_CTRLFSET_bit at TCC1_CTRLFSET.B2;
    const register unsigned short int CMD0_TCC1_CTRLFSET = 2;
    sbit  CMD1_TCC1_CTRLFCLR_bit at TCC1_CTRLFCLR.B3;
    const register unsigned short int CMD1_TCC1_CTRLFCLR = 3;
    sbit  CMD1_TCC1_CTRLFSET_bit at TCC1_CTRLFSET.B3;
    const register unsigned short int CMD1_TCC1_CTRLFSET = 3;
    sbit  LUPD_TCC1_CTRLFCLR_bit at TCC1_CTRLFCLR.B1;
    sbit  LUPD_TCC1_CTRLFSET_bit at TCC1_CTRLFSET.B1;
    sbit  DIR_TCC1_CTRLFCLR_bit at TCC1_CTRLFCLR.B0;
    const register unsigned short int DIR_TCC1_CTRLFCLR = 0;
    sbit  DIR_TCC1_CTRLFSET_bit at TCC1_CTRLFSET.B0;
    const register unsigned short int DIR_TCC1_CTRLFSET = 0;

    // TC1_CTRLFSET bits

    // TC1_CTRLGCLR bits
    sbit  CCBBV_TCC1_CTRLGCLR_bit at TCC1_CTRLGCLR.B2;
    sbit  CCABV_TCC1_CTRLGCLR_bit at TCC1_CTRLGCLR.B1;
    sbit  PERBV_TCC1_CTRLGCLR_bit at TCC1_CTRLGCLR.B0;

    // TC1_CTRLGSET bits

    // TC1_INTFLAGS bits
    sbit  CCBIF_TCC1_INTFLAGS_bit at TCC1_INTFLAGS.B5;
    sbit  CCAIF_TCC1_INTFLAGS_bit at TCC1_INTFLAGS.B4;
    sbit  ERRIF_TCC1_INTFLAGS_bit at TCC1_INTFLAGS.B1;
    sbit  OVFIF_TCC1_INTFLAGS_bit at TCC1_INTFLAGS.B0;

    // AWEX_CTRL bits
    sbit  PGM_bit at AWEXC_CTRL.B5;
    const register unsigned short int PGM = 5;
    sbit  PGM_AWEXE_CTRL_bit at AWEXE_CTRL.B5;
    sbit  CWCM_bit at AWEXC_CTRL.B4;
    const register unsigned short int CWCM = 4;
    sbit  CWCM_AWEXE_CTRL_bit at AWEXE_CTRL.B4;
    sbit  DTICCDEN_bit at AWEXC_CTRL.B3;
    const register unsigned short int DTICCDEN = 3;
    sbit  DTICCDEN_AWEXE_CTRL_bit at AWEXE_CTRL.B3;
    sbit  DTICCCEN_bit at AWEXC_CTRL.B2;
    const register unsigned short int DTICCCEN = 2;
    sbit  DTICCCEN_AWEXE_CTRL_bit at AWEXE_CTRL.B2;
    sbit  DTICCBEN_bit at AWEXC_CTRL.B1;
    const register unsigned short int DTICCBEN = 1;
    sbit  DTICCBEN_AWEXE_CTRL_bit at AWEXE_CTRL.B1;
    sbit  DTICCAEN_bit at AWEXC_CTRL.B0;
    const register unsigned short int DTICCAEN = 0;
    sbit  DTICCAEN_AWEXE_CTRL_bit at AWEXE_CTRL.B0;

    // AWEX_FDCTRL bits
    sbit  FDDBD_bit at AWEXC_FDCTRL.B4;
    const register unsigned short int FDDBD = 4;
    sbit  FDDBD_AWEXE_FDCTRL_bit at AWEXE_FDCTRL.B4;
    sbit  FDMODE_bit at AWEXC_FDCTRL.B2;
    const register unsigned short int FDMODE = 2;
    sbit  FDMODE_AWEXE_FDCTRL_bit at AWEXE_FDCTRL.B2;
    sbit  FDACT0_bit at AWEXC_FDCTRL.B0;
    const register unsigned short int FDACT0 = 0;
    sbit  FDACT0_AWEXE_FDCTRL_bit at AWEXE_FDCTRL.B0;
    sbit  FDACT1_bit at AWEXC_FDCTRL.B1;
    const register unsigned short int FDACT1 = 1;
    sbit  FDACT1_AWEXE_FDCTRL_bit at AWEXE_FDCTRL.B1;

    // AWEX_STATUS bits
    sbit  FDF_bit at AWEXC_STATUS.B2;
    const register unsigned short int FDF = 2;
    sbit  FDF_AWEXE_STATUS_bit at AWEXE_STATUS.B2;
    sbit  DTHSBUFV_bit at AWEXC_STATUS.B1;
    const register unsigned short int DTHSBUFV = 1;
    sbit  DTHSBUFV_AWEXE_STATUS_bit at AWEXE_STATUS.B1;
    sbit  DTLSBUFV_bit at AWEXC_STATUS.B0;
    const register unsigned short int DTLSBUFV = 0;
    sbit  DTLSBUFV_AWEXE_STATUS_bit at AWEXE_STATUS.B0;

    // HIRES_CTRLA bits
    sbit  HREN0_bit at HIRESC_CTRLA.B0;
    const register unsigned short int HREN0 = 0;
    sbit  HREN0_HIRESD_CTRLA_bit at HIRESD_CTRLA.B0;
    sbit  HREN0_HIRESE_CTRLA_bit at HIRESE_CTRLA.B0;
    sbit  HREN0_HIRESF_CTRLA_bit at HIRESF_CTRLA.B0;
    sbit  HREN1_bit at HIRESC_CTRLA.B1;
    const register unsigned short int HREN1 = 1;
    sbit  HREN1_HIRESD_CTRLA_bit at HIRESD_CTRLA.B1;
    sbit  HREN1_HIRESE_CTRLA_bit at HIRESE_CTRLA.B1;
    sbit  HREN1_HIRESF_CTRLA_bit at HIRESF_CTRLA.B1;

    // USART_STATUS bits
    sbit  RXCIF_bit at USARTC0_STATUS.B7;
    const register unsigned short int RXCIF = 7;
    sbit  RXCIF_USARTC1_STATUS_bit at USARTC1_STATUS.B7;
    sbit  RXCIF_USARTD0_STATUS_bit at USARTD0_STATUS.B7;
    sbit  RXCIF_USARTD1_STATUS_bit at USARTD1_STATUS.B7;
    sbit  RXCIF_USARTE0_STATUS_bit at USARTE0_STATUS.B7;
    sbit  RXCIF_USARTE1_STATUS_bit at USARTE1_STATUS.B7;
    sbit  RXCIF_USARTF0_STATUS_bit at USARTF0_STATUS.B7;
    sbit  RXCIF_USARTF1_STATUS_bit at USARTF1_STATUS.B7;
    sbit  TXCIF_bit at USARTC0_STATUS.B6;
    const register unsigned short int TXCIF = 6;
    sbit  TXCIF_USARTC1_STATUS_bit at USARTC1_STATUS.B6;
    sbit  TXCIF_USARTD0_STATUS_bit at USARTD0_STATUS.B6;
    sbit  TXCIF_USARTD1_STATUS_bit at USARTD1_STATUS.B6;
    sbit  TXCIF_USARTE0_STATUS_bit at USARTE0_STATUS.B6;
    sbit  TXCIF_USARTE1_STATUS_bit at USARTE1_STATUS.B6;
    sbit  TXCIF_USARTF0_STATUS_bit at USARTF0_STATUS.B6;
    sbit  TXCIF_USARTF1_STATUS_bit at USARTF1_STATUS.B6;
    sbit  DREIF_bit at USARTC0_STATUS.B5;
    const register unsigned short int DREIF = 5;
    sbit  DREIF_USARTC1_STATUS_bit at USARTC1_STATUS.B5;
    sbit  DREIF_USARTD0_STATUS_bit at USARTD0_STATUS.B5;
    sbit  DREIF_USARTD1_STATUS_bit at USARTD1_STATUS.B5;
    sbit  DREIF_USARTE0_STATUS_bit at USARTE0_STATUS.B5;
    sbit  DREIF_USARTE1_STATUS_bit at USARTE1_STATUS.B5;
    sbit  DREIF_USARTF0_STATUS_bit at USARTF0_STATUS.B5;
    sbit  DREIF_USARTF1_STATUS_bit at USARTF1_STATUS.B5;
    sbit  FERR_bit at USARTC0_STATUS.B4;
    const register unsigned short int FERR = 4;
    sbit  FERR_USARTC1_STATUS_bit at USARTC1_STATUS.B4;
    sbit  FERR_USARTD0_STATUS_bit at USARTD0_STATUS.B4;
    sbit  FERR_USARTD1_STATUS_bit at USARTD1_STATUS.B4;
    sbit  FERR_USARTE0_STATUS_bit at USARTE0_STATUS.B4;
    sbit  FERR_USARTE1_STATUS_bit at USARTE1_STATUS.B4;
    sbit  FERR_USARTF0_STATUS_bit at USARTF0_STATUS.B4;
    sbit  FERR_USARTF1_STATUS_bit at USARTF1_STATUS.B4;
    sbit  BUFOVF_bit at USARTC0_STATUS.B3;
    const register unsigned short int BUFOVF = 3;
    sbit  BUFOVF_USARTC1_STATUS_bit at USARTC1_STATUS.B3;
    sbit  BUFOVF_USARTD0_STATUS_bit at USARTD0_STATUS.B3;
    sbit  BUFOVF_USARTD1_STATUS_bit at USARTD1_STATUS.B3;
    sbit  BUFOVF_USARTE0_STATUS_bit at USARTE0_STATUS.B3;
    sbit  BUFOVF_USARTE1_STATUS_bit at USARTE1_STATUS.B3;
    sbit  BUFOVF_USARTF0_STATUS_bit at USARTF0_STATUS.B3;
    sbit  BUFOVF_USARTF1_STATUS_bit at USARTF1_STATUS.B3;
    sbit  PERR_bit at USARTC0_STATUS.B2;
    const register unsigned short int PERR = 2;
    sbit  PERR_USARTC1_STATUS_bit at USARTC1_STATUS.B2;
    sbit  PERR_USARTD0_STATUS_bit at USARTD0_STATUS.B2;
    sbit  PERR_USARTD1_STATUS_bit at USARTD1_STATUS.B2;
    sbit  PERR_USARTE0_STATUS_bit at USARTE0_STATUS.B2;
    sbit  PERR_USARTE1_STATUS_bit at USARTE1_STATUS.B2;
    sbit  PERR_USARTF0_STATUS_bit at USARTF0_STATUS.B2;
    sbit  PERR_USARTF1_STATUS_bit at USARTF1_STATUS.B2;
    sbit  RXB8_bit at USARTC0_STATUS.B0;
    const register unsigned short int RXB8 = 0;
    sbit  RXB8_USARTC1_STATUS_bit at USARTC1_STATUS.B0;
    sbit  RXB8_USARTD0_STATUS_bit at USARTD0_STATUS.B0;
    sbit  RXB8_USARTD1_STATUS_bit at USARTD1_STATUS.B0;
    sbit  RXB8_USARTE0_STATUS_bit at USARTE0_STATUS.B0;
    sbit  RXB8_USARTE1_STATUS_bit at USARTE1_STATUS.B0;
    sbit  RXB8_USARTF0_STATUS_bit at USARTF0_STATUS.B0;
    sbit  RXB8_USARTF1_STATUS_bit at USARTF1_STATUS.B0;

    // USART_CTRLA bits
    sbit  RXCINTLVL0_bit at USARTC0_CTRLA.B4;
    const register unsigned short int RXCINTLVL0 = 4;
    sbit  RXCINTLVL0_USARTC1_CTRLA_bit at USARTC1_CTRLA.B4;
    sbit  RXCINTLVL0_USARTD0_CTRLA_bit at USARTD0_CTRLA.B4;
    sbit  RXCINTLVL0_USARTD1_CTRLA_bit at USARTD1_CTRLA.B4;
    sbit  RXCINTLVL0_USARTE0_CTRLA_bit at USARTE0_CTRLA.B4;
    sbit  RXCINTLVL0_USARTE1_CTRLA_bit at USARTE1_CTRLA.B4;
    sbit  RXCINTLVL0_USARTF0_CTRLA_bit at USARTF0_CTRLA.B4;
    sbit  RXCINTLVL0_USARTF1_CTRLA_bit at USARTF1_CTRLA.B4;
    sbit  RXCINTLVL1_bit at USARTC0_CTRLA.B5;
    const register unsigned short int RXCINTLVL1 = 5;
    sbit  RXCINTLVL1_USARTC1_CTRLA_bit at USARTC1_CTRLA.B5;
    sbit  RXCINTLVL1_USARTD0_CTRLA_bit at USARTD0_CTRLA.B5;
    sbit  RXCINTLVL1_USARTD1_CTRLA_bit at USARTD1_CTRLA.B5;
    sbit  RXCINTLVL1_USARTE0_CTRLA_bit at USARTE0_CTRLA.B5;
    sbit  RXCINTLVL1_USARTE1_CTRLA_bit at USARTE1_CTRLA.B5;
    sbit  RXCINTLVL1_USARTF0_CTRLA_bit at USARTF0_CTRLA.B5;
    sbit  RXCINTLVL1_USARTF1_CTRLA_bit at USARTF1_CTRLA.B5;
    sbit  TXCINTLVL0_bit at USARTC0_CTRLA.B2;
    const register unsigned short int TXCINTLVL0 = 2;
    sbit  TXCINTLVL0_USARTC1_CTRLA_bit at USARTC1_CTRLA.B2;
    sbit  TXCINTLVL0_USARTD0_CTRLA_bit at USARTD0_CTRLA.B2;
    sbit  TXCINTLVL0_USARTD1_CTRLA_bit at USARTD1_CTRLA.B2;
    sbit  TXCINTLVL0_USARTE0_CTRLA_bit at USARTE0_CTRLA.B2;
    sbit  TXCINTLVL0_USARTE1_CTRLA_bit at USARTE1_CTRLA.B2;
    sbit  TXCINTLVL0_USARTF0_CTRLA_bit at USARTF0_CTRLA.B2;
    sbit  TXCINTLVL0_USARTF1_CTRLA_bit at USARTF1_CTRLA.B2;
    sbit  TXCINTLVL1_bit at USARTC0_CTRLA.B3;
    const register unsigned short int TXCINTLVL1 = 3;
    sbit  TXCINTLVL1_USARTC1_CTRLA_bit at USARTC1_CTRLA.B3;
    sbit  TXCINTLVL1_USARTD0_CTRLA_bit at USARTD0_CTRLA.B3;
    sbit  TXCINTLVL1_USARTD1_CTRLA_bit at USARTD1_CTRLA.B3;
    sbit  TXCINTLVL1_USARTE0_CTRLA_bit at USARTE0_CTRLA.B3;
    sbit  TXCINTLVL1_USARTE1_CTRLA_bit at USARTE1_CTRLA.B3;
    sbit  TXCINTLVL1_USARTF0_CTRLA_bit at USARTF0_CTRLA.B3;
    sbit  TXCINTLVL1_USARTF1_CTRLA_bit at USARTF1_CTRLA.B3;
    sbit  DREINTLVL0_bit at USARTC0_CTRLA.B0;
    const register unsigned short int DREINTLVL0 = 0;
    sbit  DREINTLVL0_USARTC1_CTRLA_bit at USARTC1_CTRLA.B0;
    sbit  DREINTLVL0_USARTD0_CTRLA_bit at USARTD0_CTRLA.B0;
    sbit  DREINTLVL0_USARTD1_CTRLA_bit at USARTD1_CTRLA.B0;
    sbit  DREINTLVL0_USARTE0_CTRLA_bit at USARTE0_CTRLA.B0;
    sbit  DREINTLVL0_USARTE1_CTRLA_bit at USARTE1_CTRLA.B0;
    sbit  DREINTLVL0_USARTF0_CTRLA_bit at USARTF0_CTRLA.B0;
    sbit  DREINTLVL0_USARTF1_CTRLA_bit at USARTF1_CTRLA.B0;
    sbit  DREINTLVL1_bit at USARTC0_CTRLA.B1;
    const register unsigned short int DREINTLVL1 = 1;
    sbit  DREINTLVL1_USARTC1_CTRLA_bit at USARTC1_CTRLA.B1;
    sbit  DREINTLVL1_USARTD0_CTRLA_bit at USARTD0_CTRLA.B1;
    sbit  DREINTLVL1_USARTD1_CTRLA_bit at USARTD1_CTRLA.B1;
    sbit  DREINTLVL1_USARTE0_CTRLA_bit at USARTE0_CTRLA.B1;
    sbit  DREINTLVL1_USARTE1_CTRLA_bit at USARTE1_CTRLA.B1;
    sbit  DREINTLVL1_USARTF0_CTRLA_bit at USARTF0_CTRLA.B1;
    sbit  DREINTLVL1_USARTF1_CTRLA_bit at USARTF1_CTRLA.B1;

    // USART_CTRLB bits
    sbit  RXEN_bit at USARTC0_CTRLB.B4;
    const register unsigned short int RXEN = 4;
    sbit  RXEN_USARTC1_CTRLB_bit at USARTC1_CTRLB.B4;
    sbit  RXEN_USARTD0_CTRLB_bit at USARTD0_CTRLB.B4;
    sbit  RXEN_USARTD1_CTRLB_bit at USARTD1_CTRLB.B4;
    sbit  RXEN_USARTE0_CTRLB_bit at USARTE0_CTRLB.B4;
    sbit  RXEN_USARTE1_CTRLB_bit at USARTE1_CTRLB.B4;
    sbit  RXEN_USARTF0_CTRLB_bit at USARTF0_CTRLB.B4;
    sbit  RXEN_USARTF1_CTRLB_bit at USARTF1_CTRLB.B4;
    sbit  TXEN_bit at USARTC0_CTRLB.B3;
    const register unsigned short int TXEN = 3;
    sbit  TXEN_USARTC1_CTRLB_bit at USARTC1_CTRLB.B3;
    sbit  TXEN_USARTD0_CTRLB_bit at USARTD0_CTRLB.B3;
    sbit  TXEN_USARTD1_CTRLB_bit at USARTD1_CTRLB.B3;
    sbit  TXEN_USARTE0_CTRLB_bit at USARTE0_CTRLB.B3;
    sbit  TXEN_USARTE1_CTRLB_bit at USARTE1_CTRLB.B3;
    sbit  TXEN_USARTF0_CTRLB_bit at USARTF0_CTRLB.B3;
    sbit  TXEN_USARTF1_CTRLB_bit at USARTF1_CTRLB.B3;
    sbit  CLK2X_bit at USARTC0_CTRLB.B2;
    const register unsigned short int CLK2X = 2;
    sbit  CLK2X_USARTC1_CTRLB_bit at USARTC1_CTRLB.B2;
    sbit  CLK2X_USARTD0_CTRLB_bit at USARTD0_CTRLB.B2;
    sbit  CLK2X_USARTD1_CTRLB_bit at USARTD1_CTRLB.B2;
    sbit  CLK2X_USARTE0_CTRLB_bit at USARTE0_CTRLB.B2;
    sbit  CLK2X_USARTE1_CTRLB_bit at USARTE1_CTRLB.B2;
    sbit  CLK2X_USARTF0_CTRLB_bit at USARTF0_CTRLB.B2;
    sbit  CLK2X_USARTF1_CTRLB_bit at USARTF1_CTRLB.B2;
    sbit  MPCM_bit at USARTC0_CTRLB.B1;
    const register unsigned short int MPCM = 1;
    sbit  MPCM_USARTC1_CTRLB_bit at USARTC1_CTRLB.B1;
    sbit  MPCM_USARTD0_CTRLB_bit at USARTD0_CTRLB.B1;
    sbit  MPCM_USARTD1_CTRLB_bit at USARTD1_CTRLB.B1;
    sbit  MPCM_USARTE0_CTRLB_bit at USARTE0_CTRLB.B1;
    sbit  MPCM_USARTE1_CTRLB_bit at USARTE1_CTRLB.B1;
    sbit  MPCM_USARTF0_CTRLB_bit at USARTF0_CTRLB.B1;
    sbit  MPCM_USARTF1_CTRLB_bit at USARTF1_CTRLB.B1;
    sbit  TXB8_bit at USARTC0_CTRLB.B0;
    const register unsigned short int TXB8 = 0;
    sbit  TXB8_USARTC1_CTRLB_bit at USARTC1_CTRLB.B0;
    sbit  TXB8_USARTD0_CTRLB_bit at USARTD0_CTRLB.B0;
    sbit  TXB8_USARTD1_CTRLB_bit at USARTD1_CTRLB.B0;
    sbit  TXB8_USARTE0_CTRLB_bit at USARTE0_CTRLB.B0;
    sbit  TXB8_USARTE1_CTRLB_bit at USARTE1_CTRLB.B0;
    sbit  TXB8_USARTF0_CTRLB_bit at USARTF0_CTRLB.B0;
    sbit  TXB8_USARTF1_CTRLB_bit at USARTF1_CTRLB.B0;

    // USART_CTRLC bits
    sbit  CMODE0_bit at USARTC0_CTRLC.B6;
    const register unsigned short int CMODE0 = 6;
    sbit  CMODE0_USARTC1_CTRLC_bit at USARTC1_CTRLC.B6;
    sbit  CMODE0_USARTD0_CTRLC_bit at USARTD0_CTRLC.B6;
    sbit  CMODE0_USARTD1_CTRLC_bit at USARTD1_CTRLC.B6;
    sbit  CMODE0_USARTE0_CTRLC_bit at USARTE0_CTRLC.B6;
    sbit  CMODE0_USARTE1_CTRLC_bit at USARTE1_CTRLC.B6;
    sbit  CMODE0_USARTF0_CTRLC_bit at USARTF0_CTRLC.B6;
    sbit  CMODE0_USARTF1_CTRLC_bit at USARTF1_CTRLC.B6;
    sbit  CMODE1_bit at USARTC0_CTRLC.B7;
    const register unsigned short int CMODE1 = 7;
    sbit  CMODE1_USARTC1_CTRLC_bit at USARTC1_CTRLC.B7;
    sbit  CMODE1_USARTD0_CTRLC_bit at USARTD0_CTRLC.B7;
    sbit  CMODE1_USARTD1_CTRLC_bit at USARTD1_CTRLC.B7;
    sbit  CMODE1_USARTE0_CTRLC_bit at USARTE0_CTRLC.B7;
    sbit  CMODE1_USARTE1_CTRLC_bit at USARTE1_CTRLC.B7;
    sbit  CMODE1_USARTF0_CTRLC_bit at USARTF0_CTRLC.B7;
    sbit  CMODE1_USARTF1_CTRLC_bit at USARTF1_CTRLC.B7;
    sbit  PMODE0_bit at USARTC0_CTRLC.B4;
    const register unsigned short int PMODE0 = 4;
    sbit  PMODE0_USARTC1_CTRLC_bit at USARTC1_CTRLC.B4;
    sbit  PMODE0_USARTD0_CTRLC_bit at USARTD0_CTRLC.B4;
    sbit  PMODE0_USARTD1_CTRLC_bit at USARTD1_CTRLC.B4;
    sbit  PMODE0_USARTE0_CTRLC_bit at USARTE0_CTRLC.B4;
    sbit  PMODE0_USARTE1_CTRLC_bit at USARTE1_CTRLC.B4;
    sbit  PMODE0_USARTF0_CTRLC_bit at USARTF0_CTRLC.B4;
    sbit  PMODE0_USARTF1_CTRLC_bit at USARTF1_CTRLC.B4;
    sbit  PMODE1_bit at USARTC0_CTRLC.B5;
    const register unsigned short int PMODE1 = 5;
    sbit  PMODE1_USARTC1_CTRLC_bit at USARTC1_CTRLC.B5;
    sbit  PMODE1_USARTD0_CTRLC_bit at USARTD0_CTRLC.B5;
    sbit  PMODE1_USARTD1_CTRLC_bit at USARTD1_CTRLC.B5;
    sbit  PMODE1_USARTE0_CTRLC_bit at USARTE0_CTRLC.B5;
    sbit  PMODE1_USARTE1_CTRLC_bit at USARTE1_CTRLC.B5;
    sbit  PMODE1_USARTF0_CTRLC_bit at USARTF0_CTRLC.B5;
    sbit  PMODE1_USARTF1_CTRLC_bit at USARTF1_CTRLC.B5;
    sbit  SBMODE_bit at USARTC0_CTRLC.B3;
    const register unsigned short int SBMODE = 3;
    sbit  SBMODE_USARTC1_CTRLC_bit at USARTC1_CTRLC.B3;
    sbit  SBMODE_USARTD0_CTRLC_bit at USARTD0_CTRLC.B3;
    sbit  SBMODE_USARTD1_CTRLC_bit at USARTD1_CTRLC.B3;
    sbit  SBMODE_USARTE0_CTRLC_bit at USARTE0_CTRLC.B3;
    sbit  SBMODE_USARTE1_CTRLC_bit at USARTE1_CTRLC.B3;
    sbit  SBMODE_USARTF0_CTRLC_bit at USARTF0_CTRLC.B3;
    sbit  SBMODE_USARTF1_CTRLC_bit at USARTF1_CTRLC.B3;
    sbit  CHSIZE0_bit at USARTC0_CTRLC.B0;
    const register unsigned short int CHSIZE0 = 0;
    sbit  CHSIZE0_USARTC1_CTRLC_bit at USARTC1_CTRLC.B0;
    sbit  CHSIZE0_USARTD0_CTRLC_bit at USARTD0_CTRLC.B0;
    sbit  CHSIZE0_USARTD1_CTRLC_bit at USARTD1_CTRLC.B0;
    sbit  CHSIZE0_USARTE0_CTRLC_bit at USARTE0_CTRLC.B0;
    sbit  CHSIZE0_USARTE1_CTRLC_bit at USARTE1_CTRLC.B0;
    sbit  CHSIZE0_USARTF0_CTRLC_bit at USARTF0_CTRLC.B0;
    sbit  CHSIZE0_USARTF1_CTRLC_bit at USARTF1_CTRLC.B0;
    sbit  CHSIZE1_bit at USARTC0_CTRLC.B1;
    const register unsigned short int CHSIZE1 = 1;
    sbit  CHSIZE1_USARTC1_CTRLC_bit at USARTC1_CTRLC.B1;
    sbit  CHSIZE1_USARTD0_CTRLC_bit at USARTD0_CTRLC.B1;
    sbit  CHSIZE1_USARTD1_CTRLC_bit at USARTD1_CTRLC.B1;
    sbit  CHSIZE1_USARTE0_CTRLC_bit at USARTE0_CTRLC.B1;
    sbit  CHSIZE1_USARTE1_CTRLC_bit at USARTE1_CTRLC.B1;
    sbit  CHSIZE1_USARTF0_CTRLC_bit at USARTF0_CTRLC.B1;
    sbit  CHSIZE1_USARTF1_CTRLC_bit at USARTF1_CTRLC.B1;
    sbit  CHSIZE2_bit at USARTC0_CTRLC.B2;
    const register unsigned short int CHSIZE2 = 2;
    sbit  CHSIZE2_USARTC1_CTRLC_bit at USARTC1_CTRLC.B2;
    sbit  CHSIZE2_USARTD0_CTRLC_bit at USARTD0_CTRLC.B2;
    sbit  CHSIZE2_USARTD1_CTRLC_bit at USARTD1_CTRLC.B2;
    sbit  CHSIZE2_USARTE0_CTRLC_bit at USARTE0_CTRLC.B2;
    sbit  CHSIZE2_USARTE1_CTRLC_bit at USARTE1_CTRLC.B2;
    sbit  CHSIZE2_USARTF0_CTRLC_bit at USARTF0_CTRLC.B2;
    sbit  CHSIZE2_USARTF1_CTRLC_bit at USARTF1_CTRLC.B2;

    // USART_BAUDCTRLA bits
    sbit  BSEL0_bit at USARTC0_BAUDCTRLA.B0;
    const register unsigned short int BSEL0 = 0;
    sbit  BSEL0_USARTC1_BAUDCTRLA_bit at USARTC1_BAUDCTRLA.B0;
    sbit  BSEL0_USARTD0_BAUDCTRLA_bit at USARTD0_BAUDCTRLA.B0;
    sbit  BSEL0_USARTD1_BAUDCTRLA_bit at USARTD1_BAUDCTRLA.B0;
    sbit  BSEL0_USARTE0_BAUDCTRLA_bit at USARTE0_BAUDCTRLA.B0;
    sbit  BSEL0_USARTE1_BAUDCTRLA_bit at USARTE1_BAUDCTRLA.B0;
    sbit  BSEL0_USARTF0_BAUDCTRLA_bit at USARTF0_BAUDCTRLA.B0;
    sbit  BSEL0_USARTF1_BAUDCTRLA_bit at USARTF1_BAUDCTRLA.B0;
    sbit  BSEL1_bit at USARTC0_BAUDCTRLA.B1;
    const register unsigned short int BSEL1 = 1;
    sbit  BSEL1_USARTC1_BAUDCTRLA_bit at USARTC1_BAUDCTRLA.B1;
    sbit  BSEL1_USARTD0_BAUDCTRLA_bit at USARTD0_BAUDCTRLA.B1;
    sbit  BSEL1_USARTD1_BAUDCTRLA_bit at USARTD1_BAUDCTRLA.B1;
    sbit  BSEL1_USARTE0_BAUDCTRLA_bit at USARTE0_BAUDCTRLA.B1;
    sbit  BSEL1_USARTE1_BAUDCTRLA_bit at USARTE1_BAUDCTRLA.B1;
    sbit  BSEL1_USARTF0_BAUDCTRLA_bit at USARTF0_BAUDCTRLA.B1;
    sbit  BSEL1_USARTF1_BAUDCTRLA_bit at USARTF1_BAUDCTRLA.B1;
    sbit  BSEL2_bit at USARTC0_BAUDCTRLA.B2;
    const register unsigned short int BSEL2 = 2;
    sbit  BSEL2_USARTC1_BAUDCTRLA_bit at USARTC1_BAUDCTRLA.B2;
    sbit  BSEL2_USARTD0_BAUDCTRLA_bit at USARTD0_BAUDCTRLA.B2;
    sbit  BSEL2_USARTD1_BAUDCTRLA_bit at USARTD1_BAUDCTRLA.B2;
    sbit  BSEL2_USARTE0_BAUDCTRLA_bit at USARTE0_BAUDCTRLA.B2;
    sbit  BSEL2_USARTE1_BAUDCTRLA_bit at USARTE1_BAUDCTRLA.B2;
    sbit  BSEL2_USARTF0_BAUDCTRLA_bit at USARTF0_BAUDCTRLA.B2;
    sbit  BSEL2_USARTF1_BAUDCTRLA_bit at USARTF1_BAUDCTRLA.B2;
    sbit  BSEL3_bit at USARTC0_BAUDCTRLA.B3;
    const register unsigned short int BSEL3 = 3;
    sbit  BSEL3_USARTC1_BAUDCTRLA_bit at USARTC1_BAUDCTRLA.B3;
    sbit  BSEL3_USARTD0_BAUDCTRLA_bit at USARTD0_BAUDCTRLA.B3;
    sbit  BSEL3_USARTD1_BAUDCTRLA_bit at USARTD1_BAUDCTRLA.B3;
    sbit  BSEL3_USARTE0_BAUDCTRLA_bit at USARTE0_BAUDCTRLA.B3;
    sbit  BSEL3_USARTE1_BAUDCTRLA_bit at USARTE1_BAUDCTRLA.B3;
    sbit  BSEL3_USARTF0_BAUDCTRLA_bit at USARTF0_BAUDCTRLA.B3;
    sbit  BSEL3_USARTF1_BAUDCTRLA_bit at USARTF1_BAUDCTRLA.B3;
    sbit  BSEL4_bit at USARTC0_BAUDCTRLA.B4;
    const register unsigned short int BSEL4 = 4;
    sbit  BSEL4_USARTC1_BAUDCTRLA_bit at USARTC1_BAUDCTRLA.B4;
    sbit  BSEL4_USARTD0_BAUDCTRLA_bit at USARTD0_BAUDCTRLA.B4;
    sbit  BSEL4_USARTD1_BAUDCTRLA_bit at USARTD1_BAUDCTRLA.B4;
    sbit  BSEL4_USARTE0_BAUDCTRLA_bit at USARTE0_BAUDCTRLA.B4;
    sbit  BSEL4_USARTE1_BAUDCTRLA_bit at USARTE1_BAUDCTRLA.B4;
    sbit  BSEL4_USARTF0_BAUDCTRLA_bit at USARTF0_BAUDCTRLA.B4;
    sbit  BSEL4_USARTF1_BAUDCTRLA_bit at USARTF1_BAUDCTRLA.B4;
    sbit  BSEL5_bit at USARTC0_BAUDCTRLA.B5;
    const register unsigned short int BSEL5 = 5;
    sbit  BSEL5_USARTC1_BAUDCTRLA_bit at USARTC1_BAUDCTRLA.B5;
    sbit  BSEL5_USARTD0_BAUDCTRLA_bit at USARTD0_BAUDCTRLA.B5;
    sbit  BSEL5_USARTD1_BAUDCTRLA_bit at USARTD1_BAUDCTRLA.B5;
    sbit  BSEL5_USARTE0_BAUDCTRLA_bit at USARTE0_BAUDCTRLA.B5;
    sbit  BSEL5_USARTE1_BAUDCTRLA_bit at USARTE1_BAUDCTRLA.B5;
    sbit  BSEL5_USARTF0_BAUDCTRLA_bit at USARTF0_BAUDCTRLA.B5;
    sbit  BSEL5_USARTF1_BAUDCTRLA_bit at USARTF1_BAUDCTRLA.B5;
    sbit  BSEL6_bit at USARTC0_BAUDCTRLA.B6;
    const register unsigned short int BSEL6 = 6;
    sbit  BSEL6_USARTC1_BAUDCTRLA_bit at USARTC1_BAUDCTRLA.B6;
    sbit  BSEL6_USARTD0_BAUDCTRLA_bit at USARTD0_BAUDCTRLA.B6;
    sbit  BSEL6_USARTD1_BAUDCTRLA_bit at USARTD1_BAUDCTRLA.B6;
    sbit  BSEL6_USARTE0_BAUDCTRLA_bit at USARTE0_BAUDCTRLA.B6;
    sbit  BSEL6_USARTE1_BAUDCTRLA_bit at USARTE1_BAUDCTRLA.B6;
    sbit  BSEL6_USARTF0_BAUDCTRLA_bit at USARTF0_BAUDCTRLA.B6;
    sbit  BSEL6_USARTF1_BAUDCTRLA_bit at USARTF1_BAUDCTRLA.B6;
    sbit  BSEL7_bit at USARTC0_BAUDCTRLA.B7;
    const register unsigned short int BSEL7 = 7;
    sbit  BSEL7_USARTC1_BAUDCTRLA_bit at USARTC1_BAUDCTRLA.B7;
    sbit  BSEL7_USARTD0_BAUDCTRLA_bit at USARTD0_BAUDCTRLA.B7;
    sbit  BSEL7_USARTD1_BAUDCTRLA_bit at USARTD1_BAUDCTRLA.B7;
    sbit  BSEL7_USARTE0_BAUDCTRLA_bit at USARTE0_BAUDCTRLA.B7;
    sbit  BSEL7_USARTE1_BAUDCTRLA_bit at USARTE1_BAUDCTRLA.B7;
    sbit  BSEL7_USARTF0_BAUDCTRLA_bit at USARTF0_BAUDCTRLA.B7;
    sbit  BSEL7_USARTF1_BAUDCTRLA_bit at USARTF1_BAUDCTRLA.B7;

    // USART_BAUDCTRLB bits
    sbit  BSCALE0_bit at USARTC0_BAUDCTRLB.B4;
    const register unsigned short int BSCALE0 = 4;
    sbit  BSCALE0_USARTC1_BAUDCTRLB_bit at USARTC1_BAUDCTRLB.B4;
    sbit  BSCALE0_USARTD0_BAUDCTRLB_bit at USARTD0_BAUDCTRLB.B4;
    sbit  BSCALE0_USARTD1_BAUDCTRLB_bit at USARTD1_BAUDCTRLB.B4;
    sbit  BSCALE0_USARTE0_BAUDCTRLB_bit at USARTE0_BAUDCTRLB.B4;
    sbit  BSCALE0_USARTE1_BAUDCTRLB_bit at USARTE1_BAUDCTRLB.B4;
    sbit  BSCALE0_USARTF0_BAUDCTRLB_bit at USARTF0_BAUDCTRLB.B4;
    sbit  BSCALE0_USARTF1_BAUDCTRLB_bit at USARTF1_BAUDCTRLB.B4;
    sbit  BSCALE1_bit at USARTC0_BAUDCTRLB.B5;
    const register unsigned short int BSCALE1 = 5;
    sbit  BSCALE1_USARTC1_BAUDCTRLB_bit at USARTC1_BAUDCTRLB.B5;
    sbit  BSCALE1_USARTD0_BAUDCTRLB_bit at USARTD0_BAUDCTRLB.B5;
    sbit  BSCALE1_USARTD1_BAUDCTRLB_bit at USARTD1_BAUDCTRLB.B5;
    sbit  BSCALE1_USARTE0_BAUDCTRLB_bit at USARTE0_BAUDCTRLB.B5;
    sbit  BSCALE1_USARTE1_BAUDCTRLB_bit at USARTE1_BAUDCTRLB.B5;
    sbit  BSCALE1_USARTF0_BAUDCTRLB_bit at USARTF0_BAUDCTRLB.B5;
    sbit  BSCALE1_USARTF1_BAUDCTRLB_bit at USARTF1_BAUDCTRLB.B5;
    sbit  BSCALE2_bit at USARTC0_BAUDCTRLB.B6;
    const register unsigned short int BSCALE2 = 6;
    sbit  BSCALE2_USARTC1_BAUDCTRLB_bit at USARTC1_BAUDCTRLB.B6;
    sbit  BSCALE2_USARTD0_BAUDCTRLB_bit at USARTD0_BAUDCTRLB.B6;
    sbit  BSCALE2_USARTD1_BAUDCTRLB_bit at USARTD1_BAUDCTRLB.B6;
    sbit  BSCALE2_USARTE0_BAUDCTRLB_bit at USARTE0_BAUDCTRLB.B6;
    sbit  BSCALE2_USARTE1_BAUDCTRLB_bit at USARTE1_BAUDCTRLB.B6;
    sbit  BSCALE2_USARTF0_BAUDCTRLB_bit at USARTF0_BAUDCTRLB.B6;
    sbit  BSCALE2_USARTF1_BAUDCTRLB_bit at USARTF1_BAUDCTRLB.B6;
    sbit  BSCALE3_bit at USARTC0_BAUDCTRLB.B7;
    const register unsigned short int BSCALE3 = 7;
    sbit  BSCALE3_USARTC1_BAUDCTRLB_bit at USARTC1_BAUDCTRLB.B7;
    sbit  BSCALE3_USARTD0_BAUDCTRLB_bit at USARTD0_BAUDCTRLB.B7;
    sbit  BSCALE3_USARTD1_BAUDCTRLB_bit at USARTD1_BAUDCTRLB.B7;
    sbit  BSCALE3_USARTE0_BAUDCTRLB_bit at USARTE0_BAUDCTRLB.B7;
    sbit  BSCALE3_USARTE1_BAUDCTRLB_bit at USARTE1_BAUDCTRLB.B7;
    sbit  BSCALE3_USARTF0_BAUDCTRLB_bit at USARTF0_BAUDCTRLB.B7;
    sbit  BSCALE3_USARTF1_BAUDCTRLB_bit at USARTF1_BAUDCTRLB.B7;

    // SPI_CTRL bits
    sbit  CLK2X_SPIC_CTRL_bit at SPIC_CTRL.B7;
    const register unsigned short int CLK2X_SPIC_CTRL = 7;
    sbit  CLK2X_SPID_CTRL_bit at SPID_CTRL.B7;
    const register unsigned short int CLK2X_SPID_CTRL = 7;
    sbit  CLK2X_SPIE_CTRL_bit at SPIE_CTRL.B7;
    const register unsigned short int CLK2X_SPIE_CTRL = 7;
    sbit  CLK2X_SPIF_CTRL_bit at SPIF_CTRL.B7;
    const register unsigned short int CLK2X_SPIF_CTRL = 7;
    sbit  ENABLE_SPIC_CTRL_bit at SPIC_CTRL.B6;
    const register unsigned short int ENABLE_SPIC_CTRL = 6;
    sbit  ENABLE_SPID_CTRL_bit at SPID_CTRL.B6;
    const register unsigned short int ENABLE_SPID_CTRL = 6;
    sbit  ENABLE_SPIE_CTRL_bit at SPIE_CTRL.B6;
    const register unsigned short int ENABLE_SPIE_CTRL = 6;
    sbit  ENABLE_SPIF_CTRL_bit at SPIF_CTRL.B6;
    const register unsigned short int ENABLE_SPIF_CTRL = 6;
    sbit  DORD_bit at SPIC_CTRL.B5;
    const register unsigned short int DORD = 5;
    sbit  DORD_SPID_CTRL_bit at SPID_CTRL.B5;
    sbit  DORD_SPIE_CTRL_bit at SPIE_CTRL.B5;
    sbit  DORD_SPIF_CTRL_bit at SPIF_CTRL.B5;
    sbit  MASTER_bit at SPIC_CTRL.B4;
    const register unsigned short int MASTER = 4;
    sbit  MASTER_SPID_CTRL_bit at SPID_CTRL.B4;
    sbit  MASTER_SPIE_CTRL_bit at SPIE_CTRL.B4;
    sbit  MASTER_SPIF_CTRL_bit at SPIF_CTRL.B4;
    sbit  MODE0_bit at SPIC_CTRL.B2;
    const register unsigned short int MODE0 = 2;
    sbit  MODE0_SPID_CTRL_bit at SPID_CTRL.B2;
    sbit  MODE0_SPIE_CTRL_bit at SPIE_CTRL.B2;
    sbit  MODE0_SPIF_CTRL_bit at SPIF_CTRL.B2;
    sbit  MODE1_bit at SPIC_CTRL.B3;
    const register unsigned short int MODE1 = 3;
    sbit  MODE1_SPID_CTRL_bit at SPID_CTRL.B3;
    sbit  MODE1_SPIE_CTRL_bit at SPIE_CTRL.B3;
    sbit  MODE1_SPIF_CTRL_bit at SPIF_CTRL.B3;
    sbit  PRESCALER0_SPIC_CTRL_bit at SPIC_CTRL.B0;
    sbit  PRESCALER0_SPID_CTRL_bit at SPID_CTRL.B0;
    sbit  PRESCALER0_SPIE_CTRL_bit at SPIE_CTRL.B0;
    sbit  PRESCALER0_SPIF_CTRL_bit at SPIF_CTRL.B0;
    sbit  PRESCALER1_SPIC_CTRL_bit at SPIC_CTRL.B1;
    sbit  PRESCALER1_SPID_CTRL_bit at SPID_CTRL.B1;
    sbit  PRESCALER1_SPIE_CTRL_bit at SPIE_CTRL.B1;
    sbit  PRESCALER1_SPIF_CTRL_bit at SPIF_CTRL.B1;

    // SPI_INTCTRL bits
    sbit  INTLVL0_SPIC_INTCTRL_bit at SPIC_INTCTRL.B0;
    const register unsigned short int INTLVL0_SPIC_INTCTRL = 0;
    sbit  INTLVL0_SPID_INTCTRL_bit at SPID_INTCTRL.B0;
    const register unsigned short int INTLVL0_SPID_INTCTRL = 0;
    sbit  INTLVL0_SPIE_INTCTRL_bit at SPIE_INTCTRL.B0;
    const register unsigned short int INTLVL0_SPIE_INTCTRL = 0;
    sbit  INTLVL0_SPIF_INTCTRL_bit at SPIF_INTCTRL.B0;
    const register unsigned short int INTLVL0_SPIF_INTCTRL = 0;
    sbit  INTLVL1_SPIC_INTCTRL_bit at SPIC_INTCTRL.B1;
    const register unsigned short int INTLVL1_SPIC_INTCTRL = 1;
    sbit  INTLVL1_SPID_INTCTRL_bit at SPID_INTCTRL.B1;
    const register unsigned short int INTLVL1_SPID_INTCTRL = 1;
    sbit  INTLVL1_SPIE_INTCTRL_bit at SPIE_INTCTRL.B1;
    const register unsigned short int INTLVL1_SPIE_INTCTRL = 1;
    sbit  INTLVL1_SPIF_INTCTRL_bit at SPIF_INTCTRL.B1;
    const register unsigned short int INTLVL1_SPIF_INTCTRL = 1;

    // SPI_STATUS bits
    sbit  IF_bit at SPIC_STATUS.B7;
    const register unsigned short int IF_ = 7;
    sbit  IF_SPID_STATUS_bit at SPID_STATUS.B7;
    const register unsigned short int IF_SPID_STATUS = 7;
    sbit  IF_SPIE_STATUS_bit at SPIE_STATUS.B7;
    const register unsigned short int IF_SPIE_STATUS = 7;
    sbit  IF_SPIF_STATUS_bit at SPIF_STATUS.B7;
    const register unsigned short int IF_SPIF_STATUS = 7;
    sbit  WRCOL_bit at SPIC_STATUS.B6;
    const register unsigned short int WRCOL = 6;
    sbit  WRCOL_SPID_STATUS_bit at SPID_STATUS.B6;
    sbit  WRCOL_SPIE_STATUS_bit at SPIE_STATUS.B6;
    sbit  WRCOL_SPIF_STATUS_bit at SPIF_STATUS.B6;

    // IRCOM_CTRL bits
    sbit  EVSEL0_IRCOM_CTRL_bit at IRCOM_CTRL.B0;
    const register unsigned short int EVSEL0_IRCOM_CTRL = 0;
    sbit  EVSEL1_IRCOM_CTRL_bit at IRCOM_CTRL.B1;
    const register unsigned short int EVSEL1_IRCOM_CTRL = 1;
    sbit  EVSEL2_IRCOM_CTRL_bit at IRCOM_CTRL.B2;
    const register unsigned short int EVSEL2_IRCOM_CTRL = 2;
    sbit  EVSEL3_IRCOM_CTRL_bit at IRCOM_CTRL.B3;

    // AES_CTRL bits
    sbit  START_bit at AES_CTRL.B7;
    const register unsigned short int START = 7;
    sbit  AUTO_bit at AES_CTRL.B6;
    const register unsigned short int AUTO_ = 6;
    sbit  RESET_AES_CTRL_bit at AES_CTRL.B5;
    const register unsigned short int RESET_AES_CTRL = 5;
    sbit  DECRYPT_bit at AES_CTRL.B4;
    const register unsigned short int DECRYPT = 4;
    sbit  XOR_bit at AES_CTRL.B2;
    const register unsigned short int XOR_ = 2;

    // AES_STATUS bits
    sbit  ERROR_bit at AES_STATUS.B7;
    const register unsigned short int ERROR_ = 7;
    sbit  SRIF_bit at AES_STATUS.B0;
    const register unsigned short int SRIF = 0;

    // AES_INTCTRL bits
    sbit  INTLVL0_AES_INTCTRL_bit at AES_INTCTRL.B0;
    const register unsigned short int INTLVL0_AES_INTCTRL = 0;
    sbit  INTLVL1_AES_INTCTRL_bit at AES_INTCTRL.B1;
    const register unsigned short int INTLVL1_AES_INTCTRL = 1;
