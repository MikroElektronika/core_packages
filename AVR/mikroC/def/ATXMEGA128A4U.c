// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00022000;

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
const unsigned short IVT_ADDR_OSC_OSCF = 0x0002; // Oscillator Failure Interrupt (NMI)

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

// TCC2 interrupt vectors
const unsigned short IVT_ADDR_TCC2_LUNF = 0x001C; // Low Byte Underflow Interrupt
const unsigned short IVT_ADDR_TCC2_HUNF = 0x001E; // High Byte Underflow Interrupt
const unsigned short IVT_ADDR_TCC2_LCMPA = 0x0020; // Low Byte Compare A Interrupt
const unsigned short IVT_ADDR_TCC2_LCMPB = 0x0022; // Low Byte Compare B Interrupt
const unsigned short IVT_ADDR_TCC2_LCMPC = 0x0024; // Low Byte Compare C Interrupt
const unsigned short IVT_ADDR_TCC2_LCMPD = 0x0026; // Low Byte Compare D Interrupt

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

// USARTE0 interrupt vectors
const unsigned short IVT_ADDR_USARTE0_RXC = 0x0074; // Reception Complete Interrupt
const unsigned short IVT_ADDR_USARTE0_DRE = 0x0076; // Data Register Empty Interrupt
const unsigned short IVT_ADDR_USARTE0_TXC = 0x0078; // Transmission Complete Interrupt

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

// TCD2 interrupt vectors
const unsigned short IVT_ADDR_TCD2_LUNF = 0x009A; // Low Byte Underflow Interrupt
const unsigned short IVT_ADDR_TCD2_HUNF = 0x009C; // High Byte Underflow Interrupt
const unsigned short IVT_ADDR_TCD2_LCMPA = 0x009E; // Low Byte Compare A Interrupt
const unsigned short IVT_ADDR_TCD2_LCMPB = 0x00A0; // Low Byte Compare B Interrupt
const unsigned short IVT_ADDR_TCD2_LCMPC = 0x00A2; // Low Byte Compare C Interrupt
const unsigned short IVT_ADDR_TCD2_LCMPD = 0x00A4; // Low Byte Compare D Interrupt

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

// USB interrupt vectors
const unsigned short IVT_ADDR_USB_BUSEVENT = 0x00FA; // SOF, suspend, resume, reset bus event interrupts, crc, underflow, overflow and stall error interrupts
const unsigned short IVT_ADDR_USB_TRNCOMPL = 0x00FC; // Transaction complete interrupt

sfr io   unsigned char volatile GPIO_GPIOR0               absolute 0x0000;
sfr io   unsigned char volatile GPIO_GPIOR1               absolute 0x0001;
sfr io   unsigned char volatile GPIO_GPIOR2               absolute 0x0002;
sfr io   unsigned char volatile GPIO_GPIOR3               absolute 0x0003;
sfr io   unsigned char volatile GPIO_GPIOR4               absolute 0x0004;
sfr io   unsigned char volatile GPIO_GPIOR5               absolute 0x0005;
sfr io   unsigned char volatile GPIO_GPIOR6               absolute 0x0006;
sfr io   unsigned char volatile GPIO_GPIOR7               absolute 0x0007;
sfr io   unsigned char volatile GPIO_GPIOR8               absolute 0x0008;
sfr io   unsigned char volatile GPIO_GPIOR9               absolute 0x0009;
sfr io   unsigned char volatile GPIO_GPIORA               absolute 0x000A;
sfr io   unsigned char volatile GPIO_GPIORB               absolute 0x000B;
sfr io   unsigned char volatile GPIO_GPIORC               absolute 0x000C;
sfr io   unsigned char volatile GPIO_GPIORD               absolute 0x000D;
sfr io   unsigned char volatile GPIO_GPIORE               absolute 0x000E;
sfr io   unsigned char volatile GPIO_GPIORF               absolute 0x000F;
sfr io   unsigned char volatile VPORT0_DIR                absolute 0x0010;
sfr io   unsigned char volatile VPORT0_OUT                absolute 0x0011;
sfr io   unsigned char volatile VPORT0_IN                 absolute 0x0012;
sfr io   unsigned char volatile VPORT0_INTFLAGS           absolute 0x0013;
    const register unsigned short int INT1IF = 1;
    sbit  INT1IF_bit at VPORT0_INTFLAGS.B1;
    const register unsigned short int INT0IF = 0;
    sbit  INT0IF_bit at VPORT0_INTFLAGS.B0;

sfr io   unsigned char volatile VPORT1_DIR                absolute 0x0014;
sfr io   unsigned char volatile VPORT1_OUT                absolute 0x0015;
sfr io   unsigned char volatile VPORT1_IN                 absolute 0x0016;
sfr io   unsigned char volatile VPORT1_INTFLAGS           absolute 0x0017;
    sbit  INT1IF_VPORT1_INTFLAGS_bit at VPORT1_INTFLAGS.B1;
    sbit  INT0IF_VPORT1_INTFLAGS_bit at VPORT1_INTFLAGS.B0;

sfr io   unsigned char volatile VPORT2_DIR                absolute 0x0018;
sfr io   unsigned char volatile VPORT2_OUT                absolute 0x0019;
sfr io   unsigned char volatile VPORT2_IN                 absolute 0x001A;
sfr io   unsigned char volatile VPORT2_INTFLAGS           absolute 0x001B;
    sbit  INT1IF_VPORT2_INTFLAGS_bit at VPORT2_INTFLAGS.B1;
    sbit  INT0IF_VPORT2_INTFLAGS_bit at VPORT2_INTFLAGS.B0;

sfr io   unsigned char volatile VPORT3_DIR                absolute 0x001C;
sfr io   unsigned char volatile VPORT3_OUT                absolute 0x001D;
sfr io   unsigned char volatile VPORT3_IN                 absolute 0x001E;
sfr io   unsigned char volatile VPORT3_INTFLAGS           absolute 0x001F;
    sbit  INT1IF_VPORT3_INTFLAGS_bit at VPORT3_INTFLAGS.B1;
    sbit  INT0IF_VPORT3_INTFLAGS_bit at VPORT3_INTFLAGS.B0;

sfr io   unsigned char volatile OCD_OCDR0                 absolute 0x002E;
    const register unsigned short int OCDRD0 = 0;
    sbit  OCDRD0_bit at OCD_OCDR0.B0;
    const register unsigned short int OCDRD1 = 1;
    sbit  OCDRD1_bit at OCD_OCDR0.B1;
    const register unsigned short int OCDRD2 = 2;
    sbit  OCDRD2_bit at OCD_OCDR0.B2;
    const register unsigned short int OCDRD3 = 3;
    sbit  OCDRD3_bit at OCD_OCDR0.B3;
    const register unsigned short int OCDRD4 = 4;
    sbit  OCDRD4_bit at OCD_OCDR0.B4;
    const register unsigned short int OCDRD5 = 5;
    sbit  OCDRD5_bit at OCD_OCDR0.B5;
    const register unsigned short int OCDRD6 = 6;
    sbit  OCDRD6_bit at OCD_OCDR0.B6;
    const register unsigned short int OCDRD7 = 7;
    sbit  OCDRD7_bit at OCD_OCDR0.B7;

sfr io   unsigned char volatile OCD_OCDR1                 absolute 0x002F;
    const register unsigned short int OCDRD = 0;
    sbit  OCDRD_bit at OCD_OCDR1.B0;

sfr io   unsigned char volatile CPU_CCP                   absolute 0x0034;
    const register unsigned short int CCP0 = 0;
    sbit  CCP0_bit at CPU_CCP.B0;
    const register unsigned short int CCP1 = 1;
    sbit  CCP1_bit at CPU_CCP.B1;
    const register unsigned short int CCP2 = 2;
    sbit  CCP2_bit at CPU_CCP.B2;
    const register unsigned short int CCP3 = 3;
    sbit  CCP3_bit at CPU_CCP.B3;
    const register unsigned short int CCP4 = 4;
    sbit  CCP4_bit at CPU_CCP.B4;
    const register unsigned short int CCP5 = 5;
    sbit  CCP5_bit at CPU_CCP.B5;
    const register unsigned short int CCP6 = 6;
    sbit  CCP6_bit at CPU_CCP.B6;
    const register unsigned short int CCP7 = 7;
    sbit  CCP7_bit at CPU_CCP.B7;

sfr io   unsigned char volatile CPU_RAMPD                 absolute 0x0038;
sfr io   unsigned char volatile CPU_RAMPX                 absolute 0x0039;
sfr io   unsigned char volatile CPU_RAMPY                 absolute 0x003A;
sfr io   unsigned char volatile CPU_RAMPZ                 absolute 0x003B;
sfr io   unsigned char volatile CPU_EIND                  absolute 0x003C;
sfr io   unsigned char volatile CPU_SPL                   absolute 0x003D;
sfr io   unsigned char volatile SPL                       absolute 0x003D;
sfr io   unsigned char volatile CPU_SPH                   absolute 0x003E;
sfr io   unsigned char volatile SPH                       absolute 0x003E;
sfr io   unsigned char volatile CPU_SREG                  absolute 0x003F;
sfr io   unsigned char volatile SREG                      absolute 0x003F;
    const register unsigned short int SREG_I = 7;
    sbit  SREG_I_bit at CPU_SREG.B7;
    const register unsigned short int SREG_T = 6;
    sbit  SREG_T_bit at CPU_SREG.B6;
    const register unsigned short int SREG_H = 5;
    sbit  SREG_H_bit at CPU_SREG.B5;
    const register unsigned short int SREG_S = 4;
    sbit  SREG_S_bit at CPU_SREG.B4;
    const register unsigned short int SREG_V = 3;
    sbit  SREG_V_bit at CPU_SREG.B3;
    const register unsigned short int SREG_N = 2;
    sbit  SREG_N_bit at CPU_SREG.B2;
    const register unsigned short int SREG_Z = 1;
    sbit  SREG_Z_bit at CPU_SREG.B1;
    const register unsigned short int SREG_C = 0;
    sbit  SREG_C_bit at CPU_SREG.B0;

sfr data unsigned char volatile CLK_CTRL                  absolute 0x0040;
    const register unsigned short int SCLKSEL0 = 0;
    sbit  SCLKSEL0_bit at CLK_CTRL.B0;
    const register unsigned short int SCLKSEL1 = 1;
    sbit  SCLKSEL1_bit at CLK_CTRL.B1;
    const register unsigned short int SCLKSEL2 = 2;
    sbit  SCLKSEL2_bit at CLK_CTRL.B2;

sfr data unsigned char volatile CLK_PSCTRL                absolute 0x0041;
    const register unsigned short int PSADIV0 = 2;
    sbit  PSADIV0_bit at CLK_PSCTRL.B2;
    const register unsigned short int PSADIV1 = 3;
    sbit  PSADIV1_bit at CLK_PSCTRL.B3;
    const register unsigned short int PSADIV2 = 4;
    sbit  PSADIV2_bit at CLK_PSCTRL.B4;
    const register unsigned short int PSADIV3 = 5;
    sbit  PSADIV3_bit at CLK_PSCTRL.B5;
    const register unsigned short int PSADIV4 = 6;
    sbit  PSADIV4_bit at CLK_PSCTRL.B6;
    const register unsigned short int PSBCDIV0 = 0;
    sbit  PSBCDIV0_bit at CLK_PSCTRL.B0;
    const register unsigned short int PSBCDIV1 = 1;
    sbit  PSBCDIV1_bit at CLK_PSCTRL.B1;

sfr data unsigned char volatile CLK_LOCK                  absolute 0x0042;
    const register unsigned short int LOCK_ = 0;
    sbit  LOCK_bit at CLK_LOCK.B0;

sfr data unsigned char volatile CLK_RTCCTRL               absolute 0x0043;
    const register unsigned short int RTCSRC0 = 1;
    sbit  RTCSRC0_bit at CLK_RTCCTRL.B1;
    const register unsigned short int RTCSRC1 = 2;
    sbit  RTCSRC1_bit at CLK_RTCCTRL.B2;
    const register unsigned short int RTCSRC2 = 3;
    sbit  RTCSRC2_bit at CLK_RTCCTRL.B3;
    const register unsigned short int RTCEN = 0;
    sbit  RTCEN_bit at CLK_RTCCTRL.B0;

sfr data unsigned char volatile CLK_USBCTRL               absolute 0x0044;
    const register unsigned short int USBPSDIV0 = 3;
    sbit  USBPSDIV0_bit at CLK_USBCTRL.B3;
    const register unsigned short int USBPSDIV1 = 4;
    sbit  USBPSDIV1_bit at CLK_USBCTRL.B4;
    const register unsigned short int USBPSDIV2 = 5;
    sbit  USBPSDIV2_bit at CLK_USBCTRL.B5;
    const register unsigned short int USBSRC0 = 1;
    sbit  USBSRC0_bit at CLK_USBCTRL.B1;
    const register unsigned short int USBSRC1 = 2;
    sbit  USBSRC1_bit at CLK_USBCTRL.B2;
    const register unsigned short int USBSEN = 0;
    sbit  USBSEN_bit at CLK_USBCTRL.B0;

sfr data unsigned char volatile PR_PRGEN                  absolute 0x0070;
    const register unsigned short int USB = 6;
    sbit  USB_bit at PR_PRGEN.B6;
    const register unsigned short int AES = 4;
    sbit  AES_bit at PR_PRGEN.B4;
    const register unsigned short int EBI = 3;
    sbit  EBI_bit at PR_PRGEN.B3;
    const register unsigned short int RTC = 2;
    sbit  RTC_bit at PR_PRGEN.B2;
    const register unsigned short int EVSYS = 1;
    sbit  EVSYS_bit at PR_PRGEN.B1;
    const register unsigned short int DMA_ = 0;
    sbit  DMA_bit at PR_PRGEN.B0;

sfr data unsigned char volatile PR_PRPA                   absolute 0x0071;
    const register unsigned short int DAC = 2;
    sbit  DAC_bit at PR_PRPA.B2;
    const register unsigned short int ADC = 1;
    sbit  ADC_bit at PR_PRPA.B1;
    const register unsigned short int AC = 0;
    sbit  AC_bit at PR_PRPA.B0;

sfr data unsigned char volatile PR_PRPB                   absolute 0x0072;
    sbit  DAC_PR_PRPB_bit at PR_PRPB.B2;
    sbit  ADC_PR_PRPB_bit at PR_PRPB.B1;
    sbit  AC_PR_PRPB_bit at PR_PRPB.B0;

sfr data unsigned char volatile PR_PRPC                   absolute 0x0073;
    const register unsigned short int TWI = 6;
    sbit  TWI_bit at PR_PRPC.B6;
    const register unsigned short int USART1 = 5;
    sbit  USART1_bit at PR_PRPC.B5;
    const register unsigned short int USART0 = 4;
    sbit  USART0_bit at PR_PRPC.B4;
    const register unsigned short int SPI = 3;
    sbit  SPI_bit at PR_PRPC.B3;
    const register unsigned short int HIRES = 2;
    sbit  HIRES_bit at PR_PRPC.B2;
    const register unsigned short int TC1 = 1;
    sbit  TC1_bit at PR_PRPC.B1;
    const register unsigned short int TC0 = 0;
    sbit  TC0_bit at PR_PRPC.B0;

sfr data unsigned char volatile PR_PRPD                   absolute 0x0074;
    sbit  TWI_PR_PRPD_bit at PR_PRPD.B6;
    sbit  USART1_PR_PRPD_bit at PR_PRPD.B5;
    sbit  USART0_PR_PRPD_bit at PR_PRPD.B4;
    sbit  SPI_PR_PRPD_bit at PR_PRPD.B3;
    sbit  HIRES_PR_PRPD_bit at PR_PRPD.B2;
    sbit  TC1_PR_PRPD_bit at PR_PRPD.B1;
    sbit  TC0_PR_PRPD_bit at PR_PRPD.B0;

sfr data unsigned char volatile PR_PRPE                   absolute 0x0075;
    sbit  TWI_PR_PRPE_bit at PR_PRPE.B6;
    sbit  USART1_PR_PRPE_bit at PR_PRPE.B5;
    sbit  USART0_PR_PRPE_bit at PR_PRPE.B4;
    sbit  SPI_PR_PRPE_bit at PR_PRPE.B3;
    sbit  HIRES_PR_PRPE_bit at PR_PRPE.B2;
    sbit  TC1_PR_PRPE_bit at PR_PRPE.B1;
    sbit  TC0_PR_PRPE_bit at PR_PRPE.B0;

sfr data unsigned char volatile PR_PRPF                   absolute 0x0076;
    sbit  TWI_PR_PRPF_bit at PR_PRPF.B6;
    sbit  USART1_PR_PRPF_bit at PR_PRPF.B5;
    sbit  USART0_PR_PRPF_bit at PR_PRPF.B4;
    sbit  SPI_PR_PRPF_bit at PR_PRPF.B3;
    sbit  HIRES_PR_PRPF_bit at PR_PRPF.B2;
    sbit  TC1_PR_PRPF_bit at PR_PRPF.B1;
    sbit  TC0_PR_PRPF_bit at PR_PRPF.B0;

sfr data unsigned char volatile SLEEP_CTRL                absolute 0x0048;
    const register unsigned short int SMODE0 = 1;
    sbit  SMODE0_bit at SLEEP_CTRL.B1;
    const register unsigned short int SMODE1 = 2;
    sbit  SMODE1_bit at SLEEP_CTRL.B2;
    const register unsigned short int SMODE2 = 3;
    sbit  SMODE2_bit at SLEEP_CTRL.B3;
    const register unsigned short int SEN = 0;
    sbit  SEN_bit at SLEEP_CTRL.B0;

sfr data unsigned char volatile OSC_CTRL                  absolute 0x0050;
    const register unsigned short int PLLEN = 4;
    sbit  PLLEN_bit at OSC_CTRL.B4;
    const register unsigned short int XOSCEN = 3;
    sbit  XOSCEN_bit at OSC_CTRL.B3;
    const register unsigned short int RC32KEN = 2;
    sbit  RC32KEN_bit at OSC_CTRL.B2;
    const register unsigned short int RC32MEN = 1;
    sbit  RC32MEN_bit at OSC_CTRL.B1;
    const register unsigned short int RC2MEN = 0;
    sbit  RC2MEN_bit at OSC_CTRL.B0;

sfr data unsigned char volatile OSC_STATUS                absolute 0x0051;
    const register unsigned short int PLLRDY = 4;
    sbit  PLLRDY_bit at OSC_STATUS.B4;
    const register unsigned short int XOSCRDY = 3;
    sbit  XOSCRDY_bit at OSC_STATUS.B3;
    const register unsigned short int RC32KRDY = 2;
    sbit  RC32KRDY_bit at OSC_STATUS.B2;
    const register unsigned short int RC32MRDY = 1;
    sbit  RC32MRDY_bit at OSC_STATUS.B1;
    const register unsigned short int RC2MRDY = 0;
    sbit  RC2MRDY_bit at OSC_STATUS.B0;

sfr data unsigned char volatile OSC_XOSCCTRL              absolute 0x0052;
    const register unsigned short int FRQRANGE0 = 6;
    sbit  FRQRANGE0_bit at OSC_XOSCCTRL.B6;
    const register unsigned short int FRQRANGE1 = 7;
    sbit  FRQRANGE1_bit at OSC_XOSCCTRL.B7;
    const register unsigned short int X32KLPM = 5;
    sbit  X32KLPM_bit at OSC_XOSCCTRL.B5;
    const register unsigned short int XOSCPWR = 4;
    sbit  XOSCPWR_bit at OSC_XOSCCTRL.B4;
    const register unsigned short int XOSCSEL0 = 0;
    sbit  XOSCSEL0_bit at OSC_XOSCCTRL.B0;
    const register unsigned short int XOSCSEL1 = 1;
    sbit  XOSCSEL1_bit at OSC_XOSCCTRL.B1;
    const register unsigned short int XOSCSEL2 = 2;
    sbit  XOSCSEL2_bit at OSC_XOSCCTRL.B2;
    const register unsigned short int XOSCSEL3 = 3;
    sbit  XOSCSEL3_bit at OSC_XOSCCTRL.B3;

sfr data unsigned char volatile OSC_XOSCFAIL              absolute 0x0053;
    const register unsigned short int PLLFDIF = 3;
    sbit  PLLFDIF_bit at OSC_XOSCFAIL.B3;
    const register unsigned short int PLLFDEN = 2;
    sbit  PLLFDEN_bit at OSC_XOSCFAIL.B2;
    const register unsigned short int XOSCFDIF = 1;
    sbit  XOSCFDIF_bit at OSC_XOSCFAIL.B1;
    const register unsigned short int XOSCFDEN = 0;
    sbit  XOSCFDEN_bit at OSC_XOSCFAIL.B0;

sfr data unsigned char volatile OSC_RC32KCAL              absolute 0x0054;
sfr data unsigned char volatile OSC_PLLCTRL               absolute 0x0055;
    const register unsigned short int PLLSRC0 = 6;
    sbit  PLLSRC0_bit at OSC_PLLCTRL.B6;
    const register unsigned short int PLLSRC1 = 7;
    sbit  PLLSRC1_bit at OSC_PLLCTRL.B7;
    const register unsigned short int PLLDIV = 5;
    sbit  PLLDIV_bit at OSC_PLLCTRL.B5;
    const register unsigned short int PLLFAC0 = 0;
    sbit  PLLFAC0_bit at OSC_PLLCTRL.B0;
    const register unsigned short int PLLFAC1 = 1;
    sbit  PLLFAC1_bit at OSC_PLLCTRL.B1;
    const register unsigned short int PLLFAC2 = 2;
    sbit  PLLFAC2_bit at OSC_PLLCTRL.B2;
    const register unsigned short int PLLFAC3 = 3;
    sbit  PLLFAC3_bit at OSC_PLLCTRL.B3;
    const register unsigned short int PLLFAC4 = 4;
    sbit  PLLFAC4_bit at OSC_PLLCTRL.B4;

sfr data unsigned char volatile OSC_DFLLCTRL              absolute 0x0056;
    const register unsigned short int RC32MCREF0 = 1;
    sbit  RC32MCREF0_bit at OSC_DFLLCTRL.B1;
    const register unsigned short int RC32MCREF1 = 2;
    sbit  RC32MCREF1_bit at OSC_DFLLCTRL.B2;
    const register unsigned short int RC2MCREF = 0;
    sbit  RC2MCREF_bit at OSC_DFLLCTRL.B0;

sfr data unsigned char volatile DFLLRC32M_CTRL            absolute 0x0060;
    const register unsigned short int ENABLE = 0;
    sbit  ENABLE_bit at DFLLRC32M_CTRL.B0;

sfr data unsigned char volatile DFLLRC32M_CALA            absolute 0x0062;
    const register unsigned short int CALL0 = 0;
    sbit  CALL0_bit at DFLLRC32M_CALA.B0;
    const register unsigned short int CALL1 = 1;
    sbit  CALL1_bit at DFLLRC32M_CALA.B1;
    const register unsigned short int CALL2 = 2;
    sbit  CALL2_bit at DFLLRC32M_CALA.B2;
    const register unsigned short int CALL3 = 3;
    sbit  CALL3_bit at DFLLRC32M_CALA.B3;
    const register unsigned short int CALL4 = 4;
    sbit  CALL4_bit at DFLLRC32M_CALA.B4;
    const register unsigned short int CALL5 = 5;
    sbit  CALL5_bit at DFLLRC32M_CALA.B5;
    const register unsigned short int CALL6 = 6;
    sbit  CALL6_bit at DFLLRC32M_CALA.B6;

sfr data unsigned char volatile DFLLRC32M_CALB            absolute 0x0063;
    const register unsigned short int CALH0 = 0;
    sbit  CALH0_bit at DFLLRC32M_CALB.B0;
    const register unsigned short int CALH1 = 1;
    sbit  CALH1_bit at DFLLRC32M_CALB.B1;
    const register unsigned short int CALH2 = 2;
    sbit  CALH2_bit at DFLLRC32M_CALB.B2;
    const register unsigned short int CALH3 = 3;
    sbit  CALH3_bit at DFLLRC32M_CALB.B3;
    const register unsigned short int CALH4 = 4;
    sbit  CALH4_bit at DFLLRC32M_CALB.B4;
    const register unsigned short int CALH5 = 5;
    sbit  CALH5_bit at DFLLRC32M_CALB.B5;

sfr data unsigned char volatile DFLLRC32M_COMP0           absolute 0x0064;
sfr data unsigned char volatile DFLLRC32M_COMP1           absolute 0x0065;
sfr data unsigned char volatile DFLLRC32M_COMP2           absolute 0x0066;
sfr data unsigned char volatile DFLLRC2M_CTRL             absolute 0x0068;
    sbit  ENABLE_DFLLRC2M_CTRL_bit at DFLLRC2M_CTRL.B0;

sfr data unsigned char volatile DFLLRC2M_CALA             absolute 0x006A;
    sbit  CALL0_DFLLRC2M_CALA_bit at DFLLRC2M_CALA.B0;
    sbit  CALL1_DFLLRC2M_CALA_bit at DFLLRC2M_CALA.B1;
    sbit  CALL2_DFLLRC2M_CALA_bit at DFLLRC2M_CALA.B2;
    sbit  CALL3_DFLLRC2M_CALA_bit at DFLLRC2M_CALA.B3;
    sbit  CALL4_DFLLRC2M_CALA_bit at DFLLRC2M_CALA.B4;
    sbit  CALL5_DFLLRC2M_CALA_bit at DFLLRC2M_CALA.B5;
    sbit  CALL6_DFLLRC2M_CALA_bit at DFLLRC2M_CALA.B6;

sfr data unsigned char volatile DFLLRC2M_CALB             absolute 0x006B;
    sbit  CALH0_DFLLRC2M_CALB_bit at DFLLRC2M_CALB.B0;
    sbit  CALH1_DFLLRC2M_CALB_bit at DFLLRC2M_CALB.B1;
    sbit  CALH2_DFLLRC2M_CALB_bit at DFLLRC2M_CALB.B2;
    sbit  CALH3_DFLLRC2M_CALB_bit at DFLLRC2M_CALB.B3;
    sbit  CALH4_DFLLRC2M_CALB_bit at DFLLRC2M_CALB.B4;
    sbit  CALH5_DFLLRC2M_CALB_bit at DFLLRC2M_CALB.B5;

sfr data unsigned char volatile DFLLRC2M_COMP0            absolute 0x006C;
sfr data unsigned char volatile DFLLRC2M_COMP1            absolute 0x006D;
sfr data unsigned char volatile DFLLRC2M_COMP2            absolute 0x006E;
sfr data unsigned char volatile RST_STATUS                absolute 0x0078;
    const register unsigned short int SDRF = 6;
    sbit  SDRF_bit at RST_STATUS.B6;
    const register unsigned short int SRF = 5;
    sbit  SRF_bit at RST_STATUS.B5;
    const register unsigned short int PDIRF = 4;
    sbit  PDIRF_bit at RST_STATUS.B4;
    const register unsigned short int WDRF = 3;
    sbit  WDRF_bit at RST_STATUS.B3;
    const register unsigned short int BORF = 2;
    sbit  BORF_bit at RST_STATUS.B2;
    const register unsigned short int EXTRF = 1;
    sbit  EXTRF_bit at RST_STATUS.B1;
    const register unsigned short int PORF = 0;
    sbit  PORF_bit at RST_STATUS.B0;

sfr data unsigned char volatile RST_CTRL                  absolute 0x0079;
    const register unsigned short int SWRST = 0;
    sbit  SWRST_bit at RST_CTRL.B0;

sfr data unsigned char volatile WDT_CTRL                  absolute 0x0080;
    const register unsigned short int PER0 = 2;
    sbit  PER0_bit at WDT_CTRL.B2;
    const register unsigned short int PER1 = 3;
    sbit  PER1_bit at WDT_CTRL.B3;
    const register unsigned short int PER2 = 4;
    sbit  PER2_bit at WDT_CTRL.B4;
    const register unsigned short int PER3 = 5;
    sbit  PER3_bit at WDT_CTRL.B5;
    sbit  ENABLE_WDT_CTRL_bit at WDT_CTRL.B1;
    const register unsigned short int CEN = 0;
    sbit  CEN_bit at WDT_CTRL.B0;

sfr data unsigned char volatile WDT_WINCTRL               absolute 0x0081;
    const register unsigned short int WPER0 = 2;
    sbit  WPER0_bit at WDT_WINCTRL.B2;
    const register unsigned short int WPER1 = 3;
    sbit  WPER1_bit at WDT_WINCTRL.B3;
    const register unsigned short int WPER2 = 4;
    sbit  WPER2_bit at WDT_WINCTRL.B4;
    const register unsigned short int WPER3 = 5;
    sbit  WPER3_bit at WDT_WINCTRL.B5;
    const register unsigned short int WEN = 1;
    sbit  WEN_bit at WDT_WINCTRL.B1;
    const register unsigned short int WCEN = 0;
    sbit  WCEN_bit at WDT_WINCTRL.B0;

sfr data unsigned char volatile WDT_STATUS                absolute 0x0082;
    const register unsigned short int SYNCBUSY = 0;
    sbit  SYNCBUSY_bit at WDT_STATUS.B0;

sfr data unsigned char volatile MCU_DEVID0                absolute 0x0090;
sfr data unsigned char volatile MCU_DEVID1                absolute 0x0091;
sfr data unsigned char volatile MCU_DEVID2                absolute 0x0092;
sfr data unsigned char volatile MCU_REVID                 absolute 0x0093;
sfr data unsigned char volatile MCU_JTAGUID               absolute 0x0094;
sfr data unsigned char volatile MCU_MCUCR                 absolute 0x0096;
    const register unsigned short int JTAGD = 0;
    sbit  JTAGD_bit at MCU_MCUCR.B0;

sfr data unsigned char volatile MCU_ANAINIT               absolute 0x0097;
    const register unsigned short int STARTUPDLYB0 = 2;
    sbit  STARTUPDLYB0_bit at MCU_ANAINIT.B2;
    const register unsigned short int STARTUPDLYB1 = 3;
    sbit  STARTUPDLYB1_bit at MCU_ANAINIT.B3;
    const register unsigned short int STARTUPDLYA0 = 0;
    sbit  STARTUPDLYA0_bit at MCU_ANAINIT.B0;
    const register unsigned short int STARTUPDLYA1 = 1;
    sbit  STARTUPDLYA1_bit at MCU_ANAINIT.B1;

sfr data unsigned char volatile MCU_EVSYSLOCK             absolute 0x0098;
    const register unsigned short int EVSYS1LOCK = 4;
    sbit  EVSYS1LOCK_bit at MCU_EVSYSLOCK.B4;
    const register unsigned short int EVSYS0LOCK = 0;
    sbit  EVSYS0LOCK_bit at MCU_EVSYSLOCK.B0;

sfr data unsigned char volatile MCU_AWEXLOCK              absolute 0x0099;
    const register unsigned short int AWEXFLOCK = 3;
    sbit  AWEXFLOCK_bit at MCU_AWEXLOCK.B3;
    const register unsigned short int AWEXELOCK = 2;
    sbit  AWEXELOCK_bit at MCU_AWEXLOCK.B2;
    const register unsigned short int AWEXDLOCK = 1;
    sbit  AWEXDLOCK_bit at MCU_AWEXLOCK.B1;
    const register unsigned short int AWEXCLOCK = 0;
    sbit  AWEXCLOCK_bit at MCU_AWEXLOCK.B0;

sfr data unsigned char volatile PMIC_STATUS               absolute 0x00A0;
    const register unsigned short int NMIEX = 7;
    sbit  NMIEX_bit at PMIC_STATUS.B7;
    const register unsigned short int HILVLEX = 2;
    sbit  HILVLEX_bit at PMIC_STATUS.B2;
    const register unsigned short int MEDLVLEX = 1;
    sbit  MEDLVLEX_bit at PMIC_STATUS.B1;
    const register unsigned short int LOLVLEX = 0;
    sbit  LOLVLEX_bit at PMIC_STATUS.B0;

sfr data unsigned char volatile PMIC_INTPRI               absolute 0x00A1;
    const register unsigned short int INTPRI0 = 0;
    sbit  INTPRI0_bit at PMIC_INTPRI.B0;
    const register unsigned short int INTPRI1 = 1;
    sbit  INTPRI1_bit at PMIC_INTPRI.B1;
    const register unsigned short int INTPRI2 = 2;
    sbit  INTPRI2_bit at PMIC_INTPRI.B2;
    const register unsigned short int INTPRI3 = 3;
    sbit  INTPRI3_bit at PMIC_INTPRI.B3;
    const register unsigned short int INTPRI4 = 4;
    sbit  INTPRI4_bit at PMIC_INTPRI.B4;
    const register unsigned short int INTPRI5 = 5;
    sbit  INTPRI5_bit at PMIC_INTPRI.B5;
    const register unsigned short int INTPRI6 = 6;
    sbit  INTPRI6_bit at PMIC_INTPRI.B6;
    const register unsigned short int INTPRI7 = 7;
    sbit  INTPRI7_bit at PMIC_INTPRI.B7;

sfr data unsigned char volatile PMIC_CTRL                 absolute 0x00A2;
    const register unsigned short int RREN = 7;
    sbit  RREN_bit at PMIC_CTRL.B7;
    const register unsigned short int IVSEL = 6;
    sbit  IVSEL_bit at PMIC_CTRL.B6;
    const register unsigned short int HILVLEN = 2;
    sbit  HILVLEN_bit at PMIC_CTRL.B2;
    const register unsigned short int MEDLVLEN = 1;
    sbit  MEDLVLEN_bit at PMIC_CTRL.B1;
    const register unsigned short int LOLVLEN = 0;
    sbit  LOLVLEN_bit at PMIC_CTRL.B0;

sfr data unsigned char volatile PORTCFG_MPCMASK           absolute 0x00B0;
sfr data unsigned char volatile PORTCFG_VPCTRLA           absolute 0x00B2;
    const register unsigned short int VP1MAP0 = 4;
    sbit  VP1MAP0_bit at PORTCFG_VPCTRLA.B4;
    const register unsigned short int VP1MAP1 = 5;
    sbit  VP1MAP1_bit at PORTCFG_VPCTRLA.B5;
    const register unsigned short int VP1MAP2 = 6;
    sbit  VP1MAP2_bit at PORTCFG_VPCTRLA.B6;
    const register unsigned short int VP1MAP3 = 7;
    sbit  VP1MAP3_bit at PORTCFG_VPCTRLA.B7;
    const register unsigned short int VP0MAP0 = 0;
    sbit  VP0MAP0_bit at PORTCFG_VPCTRLA.B0;
    const register unsigned short int VP0MAP1 = 1;
    sbit  VP0MAP1_bit at PORTCFG_VPCTRLA.B1;
    const register unsigned short int VP0MAP2 = 2;
    sbit  VP0MAP2_bit at PORTCFG_VPCTRLA.B2;
    const register unsigned short int VP0MAP3 = 3;
    sbit  VP0MAP3_bit at PORTCFG_VPCTRLA.B3;

sfr data unsigned char volatile PORTCFG_VPCTRLB           absolute 0x00B3;
    const register unsigned short int VP3MAP0 = 4;
    sbit  VP3MAP0_bit at PORTCFG_VPCTRLB.B4;
    const register unsigned short int VP3MAP1 = 5;
    sbit  VP3MAP1_bit at PORTCFG_VPCTRLB.B5;
    const register unsigned short int VP3MAP2 = 6;
    sbit  VP3MAP2_bit at PORTCFG_VPCTRLB.B6;
    const register unsigned short int VP3MAP3 = 7;
    sbit  VP3MAP3_bit at PORTCFG_VPCTRLB.B7;
    const register unsigned short int VP2MAP0 = 0;
    sbit  VP2MAP0_bit at PORTCFG_VPCTRLB.B0;
    const register unsigned short int VP2MAP1 = 1;
    sbit  VP2MAP1_bit at PORTCFG_VPCTRLB.B1;
    const register unsigned short int VP2MAP2 = 2;
    sbit  VP2MAP2_bit at PORTCFG_VPCTRLB.B2;
    const register unsigned short int VP2MAP3 = 3;
    sbit  VP2MAP3_bit at PORTCFG_VPCTRLB.B3;

sfr data unsigned char volatile PORTCFG_CLKEVOUT          absolute 0x00B4;
    const register unsigned short int CLKOUT0 = 0;
    sbit  CLKOUT0_bit at PORTCFG_CLKEVOUT.B0;
    const register unsigned short int CLKOUT1 = 1;
    sbit  CLKOUT1_bit at PORTCFG_CLKEVOUT.B1;
    const register unsigned short int CLKOUTSEL0 = 2;
    sbit  CLKOUTSEL0_bit at PORTCFG_CLKEVOUT.B2;
    const register unsigned short int CLKOUTSEL1 = 3;
    sbit  CLKOUTSEL1_bit at PORTCFG_CLKEVOUT.B3;
    const register unsigned short int EVOUT0 = 4;
    sbit  EVOUT0_bit at PORTCFG_CLKEVOUT.B4;
    const register unsigned short int EVOUT1 = 5;
    sbit  EVOUT1_bit at PORTCFG_CLKEVOUT.B5;
    const register unsigned short int RTCOUT = 6;
    sbit  RTCOUT_bit at PORTCFG_CLKEVOUT.B6;
    const register unsigned short int CLKEVPIN = 7;
    sbit  CLKEVPIN_bit at PORTCFG_CLKEVOUT.B7;

sfr data unsigned char volatile PORTCFG_EBIOUT            absolute 0x00B5;
    const register unsigned short int EBICSOUT0 = 0;
    sbit  EBICSOUT0_bit at PORTCFG_EBIOUT.B0;
    const register unsigned short int EBICSOUT1 = 1;
    sbit  EBICSOUT1_bit at PORTCFG_EBIOUT.B1;
    const register unsigned short int EBIADROUT0 = 2;
    sbit  EBIADROUT0_bit at PORTCFG_EBIOUT.B2;
    const register unsigned short int EBIADROUT1 = 3;
    sbit  EBIADROUT1_bit at PORTCFG_EBIOUT.B3;

sfr data unsigned char volatile PORTCFG_EVOUTSEL          absolute 0x00B6;
    const register unsigned short int EVOUTSEL0 = 0;
    sbit  EVOUTSEL0_bit at PORTCFG_EVOUTSEL.B0;
    const register unsigned short int EVOUTSEL1 = 1;
    sbit  EVOUTSEL1_bit at PORTCFG_EVOUTSEL.B1;
    const register unsigned short int EVOUTSEL2 = 2;
    sbit  EVOUTSEL2_bit at PORTCFG_EVOUTSEL.B2;

sfr data unsigned char volatile AES_CTRL                  absolute 0x00C0;
    const register unsigned short int START = 7;
    sbit  START_bit at AES_CTRL.B7;
    const register unsigned short int AUTO_ = 6;
    sbit  AUTO_bit at AES_CTRL.B6;
    const register unsigned short int RESET_ = 5;
    sbit  RESET_bit at AES_CTRL.B5;
    const register unsigned short int DECRYPT = 4;
    sbit  DECRYPT_bit at AES_CTRL.B4;
    const register unsigned short int XOR_ = 2;
    sbit  XOR_bit at AES_CTRL.B2;

sfr data unsigned char volatile AES_STATUS                absolute 0x00C1;
    const register unsigned short int ERROR_ = 7;
    sbit  ERROR_bit at AES_STATUS.B7;
    const register unsigned short int SRIF = 0;
    sbit  SRIF_bit at AES_STATUS.B0;

sfr data unsigned char volatile AES_STATE                 absolute 0x00C2;
sfr data unsigned char volatile AES_KEY                   absolute 0x00C3;
sfr data unsigned char volatile AES_INTCTRL               absolute 0x00C4;
    const register unsigned short int INTLVL0 = 0;
    sbit  INTLVL0_bit at AES_INTCTRL.B0;
    const register unsigned short int INTLVL1 = 1;
    sbit  INTLVL1_bit at AES_INTCTRL.B1;

sfr data unsigned char volatile CRC_CTRL                  absolute 0x00D0;
    const register unsigned short int RESET0 = 6;
    sbit  RESET0_bit at CRC_CTRL.B6;
    const register unsigned short int RESET1 = 7;
    sbit  RESET1_bit at CRC_CTRL.B7;
    const register unsigned short int CRC32 = 5;
    sbit  CRC32_bit at CRC_CTRL.B5;
    const register unsigned short int SOURCE0 = 0;
    sbit  SOURCE0_bit at CRC_CTRL.B0;
    const register unsigned short int SOURCE1 = 1;
    sbit  SOURCE1_bit at CRC_CTRL.B1;
    const register unsigned short int SOURCE2 = 2;
    sbit  SOURCE2_bit at CRC_CTRL.B2;
    const register unsigned short int SOURCE3 = 3;
    sbit  SOURCE3_bit at CRC_CTRL.B3;

sfr data unsigned char volatile CRC_STATUS                absolute 0x00D1;
    const register unsigned short int ZERO = 1;
    sbit  ZERO_bit at CRC_STATUS.B1;
    const register unsigned short int BUSY = 0;
    sbit  BUSY_bit at CRC_STATUS.B0;

sfr data unsigned char volatile CRC_DATAIN                absolute 0x00D3;
sfr data unsigned char volatile CRC_CHECKSUM0             absolute 0x00D4;
sfr data unsigned char volatile CRC_CHECKSUM1             absolute 0x00D5;
sfr data unsigned char volatile CRC_CHECKSUM2             absolute 0x00D6;
sfr data unsigned char volatile CRC_CHECKSUM3             absolute 0x00D7;
sfr data unsigned char volatile DMA_CTRL                  absolute 0x0100;
    sbit  ENABLE_DMA_CTRL_bit at DMA_CTRL.B7;
    sbit  RESET__DMA_CTRL_bit at DMA_CTRL.B6;
    const register unsigned short int DBUFMODE0 = 2;
    sbit  DBUFMODE0_bit at DMA_CTRL.B2;
    const register unsigned short int DBUFMODE1 = 3;
    sbit  DBUFMODE1_bit at DMA_CTRL.B3;
    const register unsigned short int PRIMODE0 = 0;
    sbit  PRIMODE0_bit at DMA_CTRL.B0;
    const register unsigned short int PRIMODE1 = 1;
    sbit  PRIMODE1_bit at DMA_CTRL.B1;

sfr data unsigned char volatile DMA_INTFLAGS              absolute 0x0103;
    const register unsigned short int CH3ERRIF = 7;
    sbit  CH3ERRIF_bit at DMA_INTFLAGS.B7;
    const register unsigned short int CH2ERRIF = 6;
    sbit  CH2ERRIF_bit at DMA_INTFLAGS.B6;
    const register unsigned short int CH1ERRIF = 5;
    sbit  CH1ERRIF_bit at DMA_INTFLAGS.B5;
    const register unsigned short int CH0ERRIF = 4;
    sbit  CH0ERRIF_bit at DMA_INTFLAGS.B4;
    const register unsigned short int CH3TRNIF = 3;
    sbit  CH3TRNIF_bit at DMA_INTFLAGS.B3;
    const register unsigned short int CH2TRNIF = 2;
    sbit  CH2TRNIF_bit at DMA_INTFLAGS.B2;
    const register unsigned short int CH1TRNIF = 1;
    sbit  CH1TRNIF_bit at DMA_INTFLAGS.B1;
    const register unsigned short int CH0TRNIF = 0;
    sbit  CH0TRNIF_bit at DMA_INTFLAGS.B0;

sfr data unsigned char volatile DMA_STATUS                absolute 0x0104;
    const register unsigned short int CH3BUSY = 7;
    sbit  CH3BUSY_bit at DMA_STATUS.B7;
    const register unsigned short int CH2BUSY = 6;
    sbit  CH2BUSY_bit at DMA_STATUS.B6;
    const register unsigned short int CH1BUSY = 5;
    sbit  CH1BUSY_bit at DMA_STATUS.B5;
    const register unsigned short int CH0BUSY = 4;
    sbit  CH0BUSY_bit at DMA_STATUS.B4;
    const register unsigned short int CH3PEND = 3;
    sbit  CH3PEND_bit at DMA_STATUS.B3;
    const register unsigned short int CH2PEND = 2;
    sbit  CH2PEND_bit at DMA_STATUS.B2;
    const register unsigned short int CH1PEND = 1;
    sbit  CH1PEND_bit at DMA_STATUS.B1;
    const register unsigned short int CH0PEND = 0;
    sbit  CH0PEND_bit at DMA_STATUS.B0;

sfr data unsigned int  volatile DMA_TEMP                  absolute 0x0106;
sfr data unsigned char volatile DMA_CH0_CTRLA             absolute 0x0110;
    sbit  ENABLE_DMA_CH0_CTRLA_bit at DMA_CH0_CTRLA.B7;
    sbit  RESET__DMA_CH0_CTRLA_bit at DMA_CH0_CTRLA.B6;
    const register unsigned short int REPEAT_ = 5;
    sbit  REPEAT_bit at DMA_CH0_CTRLA.B5;
    const register unsigned short int TRFREQ = 4;
    sbit  TRFREQ_bit at DMA_CH0_CTRLA.B4;
    const register unsigned short int SINGLE_ = 2;
    sbit  SINGLE_bit at DMA_CH0_CTRLA.B2;
    const register unsigned short int BURSTLEN0 = 0;
    sbit  BURSTLEN0_bit at DMA_CH0_CTRLA.B0;
    const register unsigned short int BURSTLEN1 = 1;
    sbit  BURSTLEN1_bit at DMA_CH0_CTRLA.B1;

sfr data unsigned char volatile DMA_CH0_CTRLB             absolute 0x0111;
    const register unsigned short int CHBUSY = 7;
    sbit  CHBUSY_bit at DMA_CH0_CTRLB.B7;
    const register unsigned short int CHPEND = 6;
    sbit  CHPEND_bit at DMA_CH0_CTRLB.B6;
    const register unsigned short int ERRIF = 5;
    sbit  ERRIF_bit at DMA_CH0_CTRLB.B5;
    const register unsigned short int TRNIF = 4;
    sbit  TRNIF_bit at DMA_CH0_CTRLB.B4;
    const register unsigned short int ERRINTLVL0 = 2;
    sbit  ERRINTLVL0_bit at DMA_CH0_CTRLB.B2;
    const register unsigned short int ERRINTLVL1 = 3;
    sbit  ERRINTLVL1_bit at DMA_CH0_CTRLB.B3;
    const register unsigned short int TRNINTLVL0 = 0;
    sbit  TRNINTLVL0_bit at DMA_CH0_CTRLB.B0;
    const register unsigned short int TRNINTLVL1 = 1;
    sbit  TRNINTLVL1_bit at DMA_CH0_CTRLB.B1;

sfr data unsigned char volatile DMA_CH0_ADDRCTRL          absolute 0x0112;
    const register unsigned short int SRCRELOAD0 = 6;
    sbit  SRCRELOAD0_bit at DMA_CH0_ADDRCTRL.B6;
    const register unsigned short int SRCRELOAD1 = 7;
    sbit  SRCRELOAD1_bit at DMA_CH0_ADDRCTRL.B7;
    const register unsigned short int SRCDIR0 = 4;
    sbit  SRCDIR0_bit at DMA_CH0_ADDRCTRL.B4;
    const register unsigned short int SRCDIR1 = 5;
    sbit  SRCDIR1_bit at DMA_CH0_ADDRCTRL.B5;
    const register unsigned short int DESTRELOAD0 = 2;
    sbit  DESTRELOAD0_bit at DMA_CH0_ADDRCTRL.B2;
    const register unsigned short int DESTRELOAD1 = 3;
    sbit  DESTRELOAD1_bit at DMA_CH0_ADDRCTRL.B3;
    const register unsigned short int DESTDIR0 = 0;
    sbit  DESTDIR0_bit at DMA_CH0_ADDRCTRL.B0;
    const register unsigned short int DESTDIR1 = 1;
    sbit  DESTDIR1_bit at DMA_CH0_ADDRCTRL.B1;

sfr data unsigned char volatile DMA_CH0_TRIGSRC           absolute 0x0113;
    const register unsigned short int TRIGSRC0 = 0;
    sbit  TRIGSRC0_bit at DMA_CH0_TRIGSRC.B0;
    const register unsigned short int TRIGSRC1 = 1;
    sbit  TRIGSRC1_bit at DMA_CH0_TRIGSRC.B1;
    const register unsigned short int TRIGSRC2 = 2;
    sbit  TRIGSRC2_bit at DMA_CH0_TRIGSRC.B2;
    const register unsigned short int TRIGSRC3 = 3;
    sbit  TRIGSRC3_bit at DMA_CH0_TRIGSRC.B3;
    const register unsigned short int TRIGSRC4 = 4;
    sbit  TRIGSRC4_bit at DMA_CH0_TRIGSRC.B4;
    const register unsigned short int TRIGSRC5 = 5;
    sbit  TRIGSRC5_bit at DMA_CH0_TRIGSRC.B5;
    const register unsigned short int TRIGSRC6 = 6;
    sbit  TRIGSRC6_bit at DMA_CH0_TRIGSRC.B6;
    const register unsigned short int TRIGSRC7 = 7;
    sbit  TRIGSRC7_bit at DMA_CH0_TRIGSRC.B7;

sfr data unsigned int  volatile DMA_CH0_TRFCNT            absolute 0x0114;
sfr data unsigned char volatile DMA_CH0_TRFCNTL           absolute 0x0114;
sfr data unsigned char volatile DMA_CH0_TRFCNTH           absolute 0x0115;
sfr data unsigned char volatile DMA_CH0_REPCNT            absolute 0x0116;
sfr data unsigned char volatile DMA_CH0_SRCADDR0          absolute 0x0118;
sfr data unsigned char volatile DMA_CH0_SRCADDR1          absolute 0x0119;
sfr data unsigned char volatile DMA_CH0_SRCADDR2          absolute 0x011A;
sfr data unsigned char volatile DMA_CH0_DESTADDR0         absolute 0x011C;
sfr data unsigned char volatile DMA_CH0_DESTADDR1         absolute 0x011D;
sfr data unsigned char volatile DMA_CH0_DESTADDR2         absolute 0x011E;
sfr data unsigned char volatile DMA_CH1_CTRLA             absolute 0x0120;
    sbit  ENABLE_DMA_CH1_CTRLA_bit at DMA_CH1_CTRLA.B7;
    sbit  RESET__DMA_CH1_CTRLA_bit at DMA_CH1_CTRLA.B6;
    sbit  REPEAT__DMA_CH1_CTRLA_bit at DMA_CH1_CTRLA.B5;
    sbit  TRFREQ_DMA_CH1_CTRLA_bit at DMA_CH1_CTRLA.B4;
    sbit  SINGLE__DMA_CH1_CTRLA_bit at DMA_CH1_CTRLA.B2;
    sbit  BURSTLEN0_DMA_CH1_CTRLA_bit at DMA_CH1_CTRLA.B0;
    sbit  BURSTLEN1_DMA_CH1_CTRLA_bit at DMA_CH1_CTRLA.B1;

sfr data unsigned char volatile DMA_CH1_CTRLB             absolute 0x0121;
    sbit  CHBUSY_DMA_CH1_CTRLB_bit at DMA_CH1_CTRLB.B7;
    sbit  CHPEND_DMA_CH1_CTRLB_bit at DMA_CH1_CTRLB.B6;
    sbit  ERRIF_DMA_CH1_CTRLB_bit at DMA_CH1_CTRLB.B5;
    sbit  TRNIF_DMA_CH1_CTRLB_bit at DMA_CH1_CTRLB.B4;
    sbit  ERRINTLVL0_DMA_CH1_CTRLB_bit at DMA_CH1_CTRLB.B2;
    sbit  ERRINTLVL1_DMA_CH1_CTRLB_bit at DMA_CH1_CTRLB.B3;
    sbit  TRNINTLVL0_DMA_CH1_CTRLB_bit at DMA_CH1_CTRLB.B0;
    sbit  TRNINTLVL1_DMA_CH1_CTRLB_bit at DMA_CH1_CTRLB.B1;

sfr data unsigned char volatile DMA_CH1_ADDRCTRL          absolute 0x0122;
    sbit  SRCRELOAD0_DMA_CH1_ADDRCTRL_bit at DMA_CH1_ADDRCTRL.B6;
    sbit  SRCRELOAD1_DMA_CH1_ADDRCTRL_bit at DMA_CH1_ADDRCTRL.B7;
    sbit  SRCDIR0_DMA_CH1_ADDRCTRL_bit at DMA_CH1_ADDRCTRL.B4;
    sbit  SRCDIR1_DMA_CH1_ADDRCTRL_bit at DMA_CH1_ADDRCTRL.B5;
    sbit  DESTRELOAD0_DMA_CH1_ADDRCTRL_bit at DMA_CH1_ADDRCTRL.B2;
    sbit  DESTRELOAD1_DMA_CH1_ADDRCTRL_bit at DMA_CH1_ADDRCTRL.B3;
    sbit  DESTDIR0_DMA_CH1_ADDRCTRL_bit at DMA_CH1_ADDRCTRL.B0;
    sbit  DESTDIR1_DMA_CH1_ADDRCTRL_bit at DMA_CH1_ADDRCTRL.B1;

sfr data unsigned char volatile DMA_CH1_TRIGSRC           absolute 0x0123;
    sbit  TRIGSRC0_DMA_CH1_TRIGSRC_bit at DMA_CH1_TRIGSRC.B0;
    sbit  TRIGSRC1_DMA_CH1_TRIGSRC_bit at DMA_CH1_TRIGSRC.B1;
    sbit  TRIGSRC2_DMA_CH1_TRIGSRC_bit at DMA_CH1_TRIGSRC.B2;
    sbit  TRIGSRC3_DMA_CH1_TRIGSRC_bit at DMA_CH1_TRIGSRC.B3;
    sbit  TRIGSRC4_DMA_CH1_TRIGSRC_bit at DMA_CH1_TRIGSRC.B4;
    sbit  TRIGSRC5_DMA_CH1_TRIGSRC_bit at DMA_CH1_TRIGSRC.B5;
    sbit  TRIGSRC6_DMA_CH1_TRIGSRC_bit at DMA_CH1_TRIGSRC.B6;
    sbit  TRIGSRC7_DMA_CH1_TRIGSRC_bit at DMA_CH1_TRIGSRC.B7;

sfr data unsigned int  volatile DMA_CH1_TRFCNT            absolute 0x0124;
sfr data unsigned char volatile DMA_CH1_TRFCNTL           absolute 0x0124;
sfr data unsigned char volatile DMA_CH1_TRFCNTH           absolute 0x0125;
sfr data unsigned char volatile DMA_CH1_REPCNT            absolute 0x0126;
sfr data unsigned char volatile DMA_CH1_SRCADDR0          absolute 0x0128;
sfr data unsigned char volatile DMA_CH1_SRCADDR1          absolute 0x0129;
sfr data unsigned char volatile DMA_CH1_SRCADDR2          absolute 0x012A;
sfr data unsigned char volatile DMA_CH1_DESTADDR0         absolute 0x012C;
sfr data unsigned char volatile DMA_CH1_DESTADDR1         absolute 0x012D;
sfr data unsigned char volatile DMA_CH1_DESTADDR2         absolute 0x012E;
sfr data unsigned char volatile DMA_CH2_CTRLA             absolute 0x0130;
    sbit  ENABLE_DMA_CH2_CTRLA_bit at DMA_CH2_CTRLA.B7;
    sbit  RESET__DMA_CH2_CTRLA_bit at DMA_CH2_CTRLA.B6;
    sbit  REPEAT__DMA_CH2_CTRLA_bit at DMA_CH2_CTRLA.B5;
    sbit  TRFREQ_DMA_CH2_CTRLA_bit at DMA_CH2_CTRLA.B4;
    sbit  SINGLE__DMA_CH2_CTRLA_bit at DMA_CH2_CTRLA.B2;
    sbit  BURSTLEN0_DMA_CH2_CTRLA_bit at DMA_CH2_CTRLA.B0;
    sbit  BURSTLEN1_DMA_CH2_CTRLA_bit at DMA_CH2_CTRLA.B1;

sfr data unsigned char volatile DMA_CH2_CTRLB             absolute 0x0131;
    sbit  CHBUSY_DMA_CH2_CTRLB_bit at DMA_CH2_CTRLB.B7;
    sbit  CHPEND_DMA_CH2_CTRLB_bit at DMA_CH2_CTRLB.B6;
    sbit  ERRIF_DMA_CH2_CTRLB_bit at DMA_CH2_CTRLB.B5;
    sbit  TRNIF_DMA_CH2_CTRLB_bit at DMA_CH2_CTRLB.B4;
    sbit  ERRINTLVL0_DMA_CH2_CTRLB_bit at DMA_CH2_CTRLB.B2;
    sbit  ERRINTLVL1_DMA_CH2_CTRLB_bit at DMA_CH2_CTRLB.B3;
    sbit  TRNINTLVL0_DMA_CH2_CTRLB_bit at DMA_CH2_CTRLB.B0;
    sbit  TRNINTLVL1_DMA_CH2_CTRLB_bit at DMA_CH2_CTRLB.B1;

sfr data unsigned char volatile DMA_CH2_ADDRCTRL          absolute 0x0132;
    sbit  SRCRELOAD0_DMA_CH2_ADDRCTRL_bit at DMA_CH2_ADDRCTRL.B6;
    sbit  SRCRELOAD1_DMA_CH2_ADDRCTRL_bit at DMA_CH2_ADDRCTRL.B7;
    sbit  SRCDIR0_DMA_CH2_ADDRCTRL_bit at DMA_CH2_ADDRCTRL.B4;
    sbit  SRCDIR1_DMA_CH2_ADDRCTRL_bit at DMA_CH2_ADDRCTRL.B5;
    sbit  DESTRELOAD0_DMA_CH2_ADDRCTRL_bit at DMA_CH2_ADDRCTRL.B2;
    sbit  DESTRELOAD1_DMA_CH2_ADDRCTRL_bit at DMA_CH2_ADDRCTRL.B3;
    sbit  DESTDIR0_DMA_CH2_ADDRCTRL_bit at DMA_CH2_ADDRCTRL.B0;
    sbit  DESTDIR1_DMA_CH2_ADDRCTRL_bit at DMA_CH2_ADDRCTRL.B1;

sfr data unsigned char volatile DMA_CH2_TRIGSRC           absolute 0x0133;
    sbit  TRIGSRC0_DMA_CH2_TRIGSRC_bit at DMA_CH2_TRIGSRC.B0;
    sbit  TRIGSRC1_DMA_CH2_TRIGSRC_bit at DMA_CH2_TRIGSRC.B1;
    sbit  TRIGSRC2_DMA_CH2_TRIGSRC_bit at DMA_CH2_TRIGSRC.B2;
    sbit  TRIGSRC3_DMA_CH2_TRIGSRC_bit at DMA_CH2_TRIGSRC.B3;
    sbit  TRIGSRC4_DMA_CH2_TRIGSRC_bit at DMA_CH2_TRIGSRC.B4;
    sbit  TRIGSRC5_DMA_CH2_TRIGSRC_bit at DMA_CH2_TRIGSRC.B5;
    sbit  TRIGSRC6_DMA_CH2_TRIGSRC_bit at DMA_CH2_TRIGSRC.B6;
    sbit  TRIGSRC7_DMA_CH2_TRIGSRC_bit at DMA_CH2_TRIGSRC.B7;

sfr data unsigned int  volatile DMA_CH2_TRFCNT            absolute 0x0134;
sfr data unsigned char volatile DMA_CH2_TRFCNTL           absolute 0x0134;
sfr data unsigned char volatile DMA_CH2_TRFCNTH           absolute 0x0135;
sfr data unsigned char volatile DMA_CH2_REPCNT            absolute 0x0136;
sfr data unsigned char volatile DMA_CH2_SRCADDR0          absolute 0x0138;
sfr data unsigned char volatile DMA_CH2_SRCADDR1          absolute 0x0139;
sfr data unsigned char volatile DMA_CH2_SRCADDR2          absolute 0x013A;
sfr data unsigned char volatile DMA_CH2_DESTADDR0         absolute 0x013C;
sfr data unsigned char volatile DMA_CH2_DESTADDR1         absolute 0x013D;
sfr data unsigned char volatile DMA_CH2_DESTADDR2         absolute 0x013E;
sfr data unsigned char volatile DMA_CH3_CTRLA             absolute 0x0140;
    sbit  ENABLE_DMA_CH3_CTRLA_bit at DMA_CH3_CTRLA.B7;
    sbit  RESET__DMA_CH3_CTRLA_bit at DMA_CH3_CTRLA.B6;
    sbit  REPEAT__DMA_CH3_CTRLA_bit at DMA_CH3_CTRLA.B5;
    sbit  TRFREQ_DMA_CH3_CTRLA_bit at DMA_CH3_CTRLA.B4;
    sbit  SINGLE__DMA_CH3_CTRLA_bit at DMA_CH3_CTRLA.B2;
    sbit  BURSTLEN0_DMA_CH3_CTRLA_bit at DMA_CH3_CTRLA.B0;
    sbit  BURSTLEN1_DMA_CH3_CTRLA_bit at DMA_CH3_CTRLA.B1;

sfr data unsigned char volatile DMA_CH3_CTRLB             absolute 0x0141;
    sbit  CHBUSY_DMA_CH3_CTRLB_bit at DMA_CH3_CTRLB.B7;
    sbit  CHPEND_DMA_CH3_CTRLB_bit at DMA_CH3_CTRLB.B6;
    sbit  ERRIF_DMA_CH3_CTRLB_bit at DMA_CH3_CTRLB.B5;
    sbit  TRNIF_DMA_CH3_CTRLB_bit at DMA_CH3_CTRLB.B4;
    sbit  ERRINTLVL0_DMA_CH3_CTRLB_bit at DMA_CH3_CTRLB.B2;
    sbit  ERRINTLVL1_DMA_CH3_CTRLB_bit at DMA_CH3_CTRLB.B3;
    sbit  TRNINTLVL0_DMA_CH3_CTRLB_bit at DMA_CH3_CTRLB.B0;
    sbit  TRNINTLVL1_DMA_CH3_CTRLB_bit at DMA_CH3_CTRLB.B1;

sfr data unsigned char volatile DMA_CH3_ADDRCTRL          absolute 0x0142;
    sbit  SRCRELOAD0_DMA_CH3_ADDRCTRL_bit at DMA_CH3_ADDRCTRL.B6;
    sbit  SRCRELOAD1_DMA_CH3_ADDRCTRL_bit at DMA_CH3_ADDRCTRL.B7;
    sbit  SRCDIR0_DMA_CH3_ADDRCTRL_bit at DMA_CH3_ADDRCTRL.B4;
    sbit  SRCDIR1_DMA_CH3_ADDRCTRL_bit at DMA_CH3_ADDRCTRL.B5;
    sbit  DESTRELOAD0_DMA_CH3_ADDRCTRL_bit at DMA_CH3_ADDRCTRL.B2;
    sbit  DESTRELOAD1_DMA_CH3_ADDRCTRL_bit at DMA_CH3_ADDRCTRL.B3;
    sbit  DESTDIR0_DMA_CH3_ADDRCTRL_bit at DMA_CH3_ADDRCTRL.B0;
    sbit  DESTDIR1_DMA_CH3_ADDRCTRL_bit at DMA_CH3_ADDRCTRL.B1;

sfr data unsigned char volatile DMA_CH3_TRIGSRC           absolute 0x0143;
    sbit  TRIGSRC0_DMA_CH3_TRIGSRC_bit at DMA_CH3_TRIGSRC.B0;
    sbit  TRIGSRC1_DMA_CH3_TRIGSRC_bit at DMA_CH3_TRIGSRC.B1;
    sbit  TRIGSRC2_DMA_CH3_TRIGSRC_bit at DMA_CH3_TRIGSRC.B2;
    sbit  TRIGSRC3_DMA_CH3_TRIGSRC_bit at DMA_CH3_TRIGSRC.B3;
    sbit  TRIGSRC4_DMA_CH3_TRIGSRC_bit at DMA_CH3_TRIGSRC.B4;
    sbit  TRIGSRC5_DMA_CH3_TRIGSRC_bit at DMA_CH3_TRIGSRC.B5;
    sbit  TRIGSRC6_DMA_CH3_TRIGSRC_bit at DMA_CH3_TRIGSRC.B6;
    sbit  TRIGSRC7_DMA_CH3_TRIGSRC_bit at DMA_CH3_TRIGSRC.B7;

sfr data unsigned int  volatile DMA_CH3_TRFCNT            absolute 0x0144;
sfr data unsigned char volatile DMA_CH3_TRFCNTL           absolute 0x0144;
sfr data unsigned char volatile DMA_CH3_TRFCNTH           absolute 0x0145;
sfr data unsigned char volatile DMA_CH3_REPCNT            absolute 0x0146;
sfr data unsigned char volatile DMA_CH3_SRCADDR0          absolute 0x0148;
sfr data unsigned char volatile DMA_CH3_SRCADDR1          absolute 0x0149;
sfr data unsigned char volatile DMA_CH3_SRCADDR2          absolute 0x014A;
sfr data unsigned char volatile DMA_CH3_DESTADDR0         absolute 0x014C;
sfr data unsigned char volatile DMA_CH3_DESTADDR1         absolute 0x014D;
sfr data unsigned char volatile DMA_CH3_DESTADDR2         absolute 0x014E;
sfr data unsigned char volatile EVSYS_CH0MUX              absolute 0x0180;
    const register unsigned short int CHMUX0 = 0;
    sbit  CHMUX0_bit at EVSYS_CH0MUX.B0;
    const register unsigned short int CHMUX1 = 1;
    sbit  CHMUX1_bit at EVSYS_CH0MUX.B1;
    const register unsigned short int CHMUX2 = 2;
    sbit  CHMUX2_bit at EVSYS_CH0MUX.B2;
    const register unsigned short int CHMUX3 = 3;
    sbit  CHMUX3_bit at EVSYS_CH0MUX.B3;
    const register unsigned short int CHMUX4 = 4;
    sbit  CHMUX4_bit at EVSYS_CH0MUX.B4;
    const register unsigned short int CHMUX5 = 5;
    sbit  CHMUX5_bit at EVSYS_CH0MUX.B5;
    const register unsigned short int CHMUX6 = 6;
    sbit  CHMUX6_bit at EVSYS_CH0MUX.B6;
    const register unsigned short int CHMUX7 = 7;
    sbit  CHMUX7_bit at EVSYS_CH0MUX.B7;

sfr data unsigned char volatile EVSYS_CH1MUX              absolute 0x0181;
    sbit  CHMUX0_EVSYS_CH1MUX_bit at EVSYS_CH1MUX.B0;
    sbit  CHMUX1_EVSYS_CH1MUX_bit at EVSYS_CH1MUX.B1;
    sbit  CHMUX2_EVSYS_CH1MUX_bit at EVSYS_CH1MUX.B2;
    sbit  CHMUX3_EVSYS_CH1MUX_bit at EVSYS_CH1MUX.B3;
    sbit  CHMUX4_EVSYS_CH1MUX_bit at EVSYS_CH1MUX.B4;
    sbit  CHMUX5_EVSYS_CH1MUX_bit at EVSYS_CH1MUX.B5;
    sbit  CHMUX6_EVSYS_CH1MUX_bit at EVSYS_CH1MUX.B6;
    sbit  CHMUX7_EVSYS_CH1MUX_bit at EVSYS_CH1MUX.B7;

sfr data unsigned char volatile EVSYS_CH2MUX              absolute 0x0182;
    sbit  CHMUX0_EVSYS_CH2MUX_bit at EVSYS_CH2MUX.B0;
    sbit  CHMUX1_EVSYS_CH2MUX_bit at EVSYS_CH2MUX.B1;
    sbit  CHMUX2_EVSYS_CH2MUX_bit at EVSYS_CH2MUX.B2;
    sbit  CHMUX3_EVSYS_CH2MUX_bit at EVSYS_CH2MUX.B3;
    sbit  CHMUX4_EVSYS_CH2MUX_bit at EVSYS_CH2MUX.B4;
    sbit  CHMUX5_EVSYS_CH2MUX_bit at EVSYS_CH2MUX.B5;
    sbit  CHMUX6_EVSYS_CH2MUX_bit at EVSYS_CH2MUX.B6;
    sbit  CHMUX7_EVSYS_CH2MUX_bit at EVSYS_CH2MUX.B7;

sfr data unsigned char volatile EVSYS_CH3MUX              absolute 0x0183;
    sbit  CHMUX0_EVSYS_CH3MUX_bit at EVSYS_CH3MUX.B0;
    sbit  CHMUX1_EVSYS_CH3MUX_bit at EVSYS_CH3MUX.B1;
    sbit  CHMUX2_EVSYS_CH3MUX_bit at EVSYS_CH3MUX.B2;
    sbit  CHMUX3_EVSYS_CH3MUX_bit at EVSYS_CH3MUX.B3;
    sbit  CHMUX4_EVSYS_CH3MUX_bit at EVSYS_CH3MUX.B4;
    sbit  CHMUX5_EVSYS_CH3MUX_bit at EVSYS_CH3MUX.B5;
    sbit  CHMUX6_EVSYS_CH3MUX_bit at EVSYS_CH3MUX.B6;
    sbit  CHMUX7_EVSYS_CH3MUX_bit at EVSYS_CH3MUX.B7;

sfr data unsigned char volatile EVSYS_CH4MUX              absolute 0x0184;
    sbit  CHMUX0_EVSYS_CH4MUX_bit at EVSYS_CH4MUX.B0;
    sbit  CHMUX1_EVSYS_CH4MUX_bit at EVSYS_CH4MUX.B1;
    sbit  CHMUX2_EVSYS_CH4MUX_bit at EVSYS_CH4MUX.B2;
    sbit  CHMUX3_EVSYS_CH4MUX_bit at EVSYS_CH4MUX.B3;
    sbit  CHMUX4_EVSYS_CH4MUX_bit at EVSYS_CH4MUX.B4;
    sbit  CHMUX5_EVSYS_CH4MUX_bit at EVSYS_CH4MUX.B5;
    sbit  CHMUX6_EVSYS_CH4MUX_bit at EVSYS_CH4MUX.B6;
    sbit  CHMUX7_EVSYS_CH4MUX_bit at EVSYS_CH4MUX.B7;

sfr data unsigned char volatile EVSYS_CH5MUX              absolute 0x0185;
    sbit  CHMUX0_EVSYS_CH5MUX_bit at EVSYS_CH5MUX.B0;
    sbit  CHMUX1_EVSYS_CH5MUX_bit at EVSYS_CH5MUX.B1;
    sbit  CHMUX2_EVSYS_CH5MUX_bit at EVSYS_CH5MUX.B2;
    sbit  CHMUX3_EVSYS_CH5MUX_bit at EVSYS_CH5MUX.B3;
    sbit  CHMUX4_EVSYS_CH5MUX_bit at EVSYS_CH5MUX.B4;
    sbit  CHMUX5_EVSYS_CH5MUX_bit at EVSYS_CH5MUX.B5;
    sbit  CHMUX6_EVSYS_CH5MUX_bit at EVSYS_CH5MUX.B6;
    sbit  CHMUX7_EVSYS_CH5MUX_bit at EVSYS_CH5MUX.B7;

sfr data unsigned char volatile EVSYS_CH6MUX              absolute 0x0186;
    sbit  CHMUX0_EVSYS_CH6MUX_bit at EVSYS_CH6MUX.B0;
    sbit  CHMUX1_EVSYS_CH6MUX_bit at EVSYS_CH6MUX.B1;
    sbit  CHMUX2_EVSYS_CH6MUX_bit at EVSYS_CH6MUX.B2;
    sbit  CHMUX3_EVSYS_CH6MUX_bit at EVSYS_CH6MUX.B3;
    sbit  CHMUX4_EVSYS_CH6MUX_bit at EVSYS_CH6MUX.B4;
    sbit  CHMUX5_EVSYS_CH6MUX_bit at EVSYS_CH6MUX.B5;
    sbit  CHMUX6_EVSYS_CH6MUX_bit at EVSYS_CH6MUX.B6;
    sbit  CHMUX7_EVSYS_CH6MUX_bit at EVSYS_CH6MUX.B7;

sfr data unsigned char volatile EVSYS_CH7MUX              absolute 0x0187;
    sbit  CHMUX0_EVSYS_CH7MUX_bit at EVSYS_CH7MUX.B0;
    sbit  CHMUX1_EVSYS_CH7MUX_bit at EVSYS_CH7MUX.B1;
    sbit  CHMUX2_EVSYS_CH7MUX_bit at EVSYS_CH7MUX.B2;
    sbit  CHMUX3_EVSYS_CH7MUX_bit at EVSYS_CH7MUX.B3;
    sbit  CHMUX4_EVSYS_CH7MUX_bit at EVSYS_CH7MUX.B4;
    sbit  CHMUX5_EVSYS_CH7MUX_bit at EVSYS_CH7MUX.B5;
    sbit  CHMUX6_EVSYS_CH7MUX_bit at EVSYS_CH7MUX.B6;
    sbit  CHMUX7_EVSYS_CH7MUX_bit at EVSYS_CH7MUX.B7;

sfr data unsigned char volatile EVSYS_CH0CTRL             absolute 0x0188;
    const register unsigned short int QDIRM0 = 5;
    sbit  QDIRM0_bit at EVSYS_CH0CTRL.B5;
    const register unsigned short int QDIRM1 = 6;
    sbit  QDIRM1_bit at EVSYS_CH0CTRL.B6;
    const register unsigned short int QDIEN = 4;
    sbit  QDIEN_bit at EVSYS_CH0CTRL.B4;
    const register unsigned short int QDEN = 3;
    sbit  QDEN_bit at EVSYS_CH0CTRL.B3;
    const register unsigned short int DIGFILT0 = 0;
    sbit  DIGFILT0_bit at EVSYS_CH0CTRL.B0;
    const register unsigned short int DIGFILT1 = 1;
    sbit  DIGFILT1_bit at EVSYS_CH0CTRL.B1;
    const register unsigned short int DIGFILT2 = 2;
    sbit  DIGFILT2_bit at EVSYS_CH0CTRL.B2;

sfr data unsigned char volatile EVSYS_CH1CTRL             absolute 0x0189;
    sbit  DIGFILT0_EVSYS_CH1CTRL_bit at EVSYS_CH1CTRL.B0;
    sbit  DIGFILT1_EVSYS_CH1CTRL_bit at EVSYS_CH1CTRL.B1;
    sbit  DIGFILT2_EVSYS_CH1CTRL_bit at EVSYS_CH1CTRL.B2;

sfr data unsigned char volatile EVSYS_CH2CTRL             absolute 0x018A;
    sbit  QDIRM0_EVSYS_CH2CTRL_bit at EVSYS_CH2CTRL.B5;
    sbit  QDIRM1_EVSYS_CH2CTRL_bit at EVSYS_CH2CTRL.B6;
    sbit  QDIEN_EVSYS_CH2CTRL_bit at EVSYS_CH2CTRL.B4;
    sbit  QDEN_EVSYS_CH2CTRL_bit at EVSYS_CH2CTRL.B3;
    sbit  DIGFILT0_EVSYS_CH2CTRL_bit at EVSYS_CH2CTRL.B0;
    sbit  DIGFILT1_EVSYS_CH2CTRL_bit at EVSYS_CH2CTRL.B1;
    sbit  DIGFILT2_EVSYS_CH2CTRL_bit at EVSYS_CH2CTRL.B2;

sfr data unsigned char volatile EVSYS_CH3CTRL             absolute 0x018B;
    sbit  DIGFILT0_EVSYS_CH3CTRL_bit at EVSYS_CH3CTRL.B0;
    sbit  DIGFILT1_EVSYS_CH3CTRL_bit at EVSYS_CH3CTRL.B1;
    sbit  DIGFILT2_EVSYS_CH3CTRL_bit at EVSYS_CH3CTRL.B2;

sfr data unsigned char volatile EVSYS_CH4CTRL             absolute 0x018C;
    sbit  QDIRM0_EVSYS_CH4CTRL_bit at EVSYS_CH4CTRL.B5;
    sbit  QDIRM1_EVSYS_CH4CTRL_bit at EVSYS_CH4CTRL.B6;
    sbit  QDIEN_EVSYS_CH4CTRL_bit at EVSYS_CH4CTRL.B4;
    sbit  QDEN_EVSYS_CH4CTRL_bit at EVSYS_CH4CTRL.B3;
    sbit  DIGFILT0_EVSYS_CH4CTRL_bit at EVSYS_CH4CTRL.B0;
    sbit  DIGFILT1_EVSYS_CH4CTRL_bit at EVSYS_CH4CTRL.B1;
    sbit  DIGFILT2_EVSYS_CH4CTRL_bit at EVSYS_CH4CTRL.B2;

sfr data unsigned char volatile EVSYS_CH5CTRL             absolute 0x018D;
    sbit  DIGFILT0_EVSYS_CH5CTRL_bit at EVSYS_CH5CTRL.B0;
    sbit  DIGFILT1_EVSYS_CH5CTRL_bit at EVSYS_CH5CTRL.B1;
    sbit  DIGFILT2_EVSYS_CH5CTRL_bit at EVSYS_CH5CTRL.B2;

sfr data unsigned char volatile EVSYS_CH6CTRL             absolute 0x018E;
    sbit  DIGFILT0_EVSYS_CH6CTRL_bit at EVSYS_CH6CTRL.B0;
    sbit  DIGFILT1_EVSYS_CH6CTRL_bit at EVSYS_CH6CTRL.B1;
    sbit  DIGFILT2_EVSYS_CH6CTRL_bit at EVSYS_CH6CTRL.B2;

sfr data unsigned char volatile EVSYS_CH7CTRL             absolute 0x018F;
    sbit  DIGFILT0_EVSYS_CH7CTRL_bit at EVSYS_CH7CTRL.B0;
    sbit  DIGFILT1_EVSYS_CH7CTRL_bit at EVSYS_CH7CTRL.B1;
    sbit  DIGFILT2_EVSYS_CH7CTRL_bit at EVSYS_CH7CTRL.B2;

sfr data unsigned char volatile EVSYS_STROBE              absolute 0x0190;
sfr data unsigned char volatile EVSYS_DATA                absolute 0x0191;
sfr data unsigned char volatile NVM_ADDR0                 absolute 0x01C0;
sfr data unsigned char volatile NVM_ADDR1                 absolute 0x01C1;
sfr data unsigned char volatile NVM_ADDR2                 absolute 0x01C2;
sfr data unsigned char volatile NVM_DATA0                 absolute 0x01C4;
sfr data unsigned char volatile NVM_DATA1                 absolute 0x01C5;
sfr data unsigned char volatile NVM_DATA2                 absolute 0x01C6;
sfr data unsigned char volatile NVM_CMD                   absolute 0x01CA;
    const register unsigned short int CMD0 = 0;
    sbit  CMD0_bit at NVM_CMD.B0;
    const register unsigned short int CMD1 = 1;
    sbit  CMD1_bit at NVM_CMD.B1;
    const register unsigned short int CMD2 = 2;
    sbit  CMD2_bit at NVM_CMD.B2;
    const register unsigned short int CMD3 = 3;
    sbit  CMD3_bit at NVM_CMD.B3;
    const register unsigned short int CMD4 = 4;
    sbit  CMD4_bit at NVM_CMD.B4;
    const register unsigned short int CMD5 = 5;
    sbit  CMD5_bit at NVM_CMD.B5;
    const register unsigned short int CMD6 = 6;
    sbit  CMD6_bit at NVM_CMD.B6;

sfr data unsigned char volatile NVM_CTRLA                 absolute 0x01CB;
    const register unsigned short int CMDEX = 0;
    sbit  CMDEX_bit at NVM_CTRLA.B0;

sfr data unsigned char volatile NVM_CTRLB                 absolute 0x01CC;
    const register unsigned short int EEMAPEN = 3;
    sbit  EEMAPEN_bit at NVM_CTRLB.B3;
    const register unsigned short int FPRM = 2;
    sbit  FPRM_bit at NVM_CTRLB.B2;
    const register unsigned short int EPRM = 1;
    sbit  EPRM_bit at NVM_CTRLB.B1;
    const register unsigned short int SPMLOCK = 0;
    sbit  SPMLOCK_bit at NVM_CTRLB.B0;

sfr data unsigned char volatile NVM_INTCTRL               absolute 0x01CD;
    const register unsigned short int SPMLVL0 = 2;
    sbit  SPMLVL0_bit at NVM_INTCTRL.B2;
    const register unsigned short int SPMLVL1 = 3;
    sbit  SPMLVL1_bit at NVM_INTCTRL.B3;
    const register unsigned short int EELVL0 = 0;
    sbit  EELVL0_bit at NVM_INTCTRL.B0;
    const register unsigned short int EELVL1 = 1;
    sbit  EELVL1_bit at NVM_INTCTRL.B1;

sfr data unsigned char volatile NVM_STATUS                absolute 0x01CF;
    const register unsigned short int NVMBUSY = 7;
    sbit  NVMBUSY_bit at NVM_STATUS.B7;
    const register unsigned short int FBUSY = 6;
    sbit  FBUSY_bit at NVM_STATUS.B6;
    const register unsigned short int EELOAD = 1;
    sbit  EELOAD_bit at NVM_STATUS.B1;
    const register unsigned short int FLOAD = 0;
    sbit  FLOAD_bit at NVM_STATUS.B0;

sfr data unsigned char volatile NVM_LOCKBITS              absolute 0x01D0;
    const register unsigned short int BLBB0 = 6;
    sbit  BLBB0_bit at NVM_LOCKBITS.B6;
    const register unsigned short int BLBB1 = 7;
    sbit  BLBB1_bit at NVM_LOCKBITS.B7;
    const register unsigned short int BLBA0 = 4;
    sbit  BLBA0_bit at NVM_LOCKBITS.B4;
    const register unsigned short int BLBA1 = 5;
    sbit  BLBA1_bit at NVM_LOCKBITS.B5;
    const register unsigned short int BLBAT0 = 2;
    sbit  BLBAT0_bit at NVM_LOCKBITS.B2;
    const register unsigned short int BLBAT1 = 3;
    sbit  BLBAT1_bit at NVM_LOCKBITS.B3;
    const register unsigned short int LB0 = 0;
    sbit  LB0_bit at NVM_LOCKBITS.B0;
    const register unsigned short int LB1 = 1;
    sbit  LB1_bit at NVM_LOCKBITS.B1;

sfr data unsigned char volatile ADCA_CTRLA                absolute 0x0200;
    const register unsigned short int DMASEL0 = 6;
    sbit  DMASEL0_bit at ADCA_CTRLA.B6;
    const register unsigned short int DMASEL1 = 7;
    sbit  DMASEL1_bit at ADCA_CTRLA.B7;
    const register unsigned short int CH3START = 5;
    sbit  CH3START_bit at ADCA_CTRLA.B5;
    const register unsigned short int CH2START = 4;
    sbit  CH2START_bit at ADCA_CTRLA.B4;
    const register unsigned short int CH1START = 3;
    sbit  CH1START_bit at ADCA_CTRLA.B3;
    const register unsigned short int CH0START = 2;
    sbit  CH0START_bit at ADCA_CTRLA.B2;
    const register unsigned short int FLUSH = 1;
    sbit  FLUSH_bit at ADCA_CTRLA.B1;
    sbit  ENABLE_ADCA_CTRLA_bit at ADCA_CTRLA.B0;

sfr data unsigned char volatile ADCA_CTRLB                absolute 0x0201;
    const register unsigned short int IMPMODE = 7;
    sbit  IMPMODE_bit at ADCA_CTRLB.B7;
    const register unsigned short int CURRLIMIT0 = 5;
    sbit  CURRLIMIT0_bit at ADCA_CTRLB.B5;
    const register unsigned short int CURRLIMIT1 = 6;
    sbit  CURRLIMIT1_bit at ADCA_CTRLB.B6;
    const register unsigned short int CONMODE = 4;
    sbit  CONMODE_bit at ADCA_CTRLB.B4;
    const register unsigned short int FREERUN = 3;
    sbit  FREERUN_bit at ADCA_CTRLB.B3;
    const register unsigned short int RESOLUTION0 = 1;
    sbit  RESOLUTION0_bit at ADCA_CTRLB.B1;
    const register unsigned short int RESOLUTION1 = 2;
    sbit  RESOLUTION1_bit at ADCA_CTRLB.B2;

sfr data unsigned char volatile ADCA_REFCTRL              absolute 0x0202;
    const register unsigned short int REFSEL0 = 4;
    sbit  REFSEL0_bit at ADCA_REFCTRL.B4;
    const register unsigned short int REFSEL1 = 5;
    sbit  REFSEL1_bit at ADCA_REFCTRL.B5;
    const register unsigned short int REFSEL2 = 6;
    sbit  REFSEL2_bit at ADCA_REFCTRL.B6;
    const register unsigned short int BANDGAP = 1;
    sbit  BANDGAP_bit at ADCA_REFCTRL.B1;
    const register unsigned short int TEMPREF = 0;
    sbit  TEMPREF_bit at ADCA_REFCTRL.B0;

sfr data unsigned char volatile ADCA_EVCTRL               absolute 0x0203;
    const register unsigned short int SWEEP0 = 6;
    sbit  SWEEP0_bit at ADCA_EVCTRL.B6;
    const register unsigned short int SWEEP1 = 7;
    sbit  SWEEP1_bit at ADCA_EVCTRL.B7;
    const register unsigned short int EVSEL0 = 3;
    sbit  EVSEL0_bit at ADCA_EVCTRL.B3;
    const register unsigned short int EVSEL1 = 4;
    sbit  EVSEL1_bit at ADCA_EVCTRL.B4;
    const register unsigned short int EVSEL2 = 5;
    sbit  EVSEL2_bit at ADCA_EVCTRL.B5;
    const register unsigned short int EVACT0 = 0;
    sbit  EVACT0_bit at ADCA_EVCTRL.B0;
    const register unsigned short int EVACT1 = 1;
    sbit  EVACT1_bit at ADCA_EVCTRL.B1;
    const register unsigned short int EVACT2 = 2;
    sbit  EVACT2_bit at ADCA_EVCTRL.B2;

sfr data unsigned char volatile ADCA_PRESCALER            absolute 0x0204;
    const register unsigned short int PRESCALER0 = 0;
    sbit  PRESCALER0_bit at ADCA_PRESCALER.B0;
    const register unsigned short int PRESCALER1 = 1;
    sbit  PRESCALER1_bit at ADCA_PRESCALER.B1;
    const register unsigned short int PRESCALER2 = 2;
    sbit  PRESCALER2_bit at ADCA_PRESCALER.B2;

sfr data unsigned char volatile ADCA_INTFLAGS             absolute 0x0206;
    const register unsigned short int CH3IF = 3;
    sbit  CH3IF_bit at ADCA_INTFLAGS.B3;
    const register unsigned short int CH2IF = 2;
    sbit  CH2IF_bit at ADCA_INTFLAGS.B2;
    const register unsigned short int CH1IF = 1;
    sbit  CH1IF_bit at ADCA_INTFLAGS.B1;
    const register unsigned short int CH0IF = 0;
    sbit  CH0IF_bit at ADCA_INTFLAGS.B0;

sfr data unsigned char volatile ADCA_TEMP                 absolute 0x0207;
sfr data unsigned int  volatile ADCA_CAL                  absolute 0x020C;
sfr data unsigned int  volatile ADCA_CH0RES               absolute 0x0210;
sfr data unsigned char volatile ADCA_CH0RESL              absolute 0x0210;
sfr data unsigned char volatile ADCA_CH0RESH              absolute 0x0211;
sfr data unsigned int  volatile ADCA_CH1RES               absolute 0x0212;
sfr data unsigned char volatile ADCA_CH1RESL              absolute 0x0212;
sfr data unsigned char volatile ADCA_CH1RESH              absolute 0x0213;
sfr data unsigned int  volatile ADCA_CH2RES               absolute 0x0214;
sfr data unsigned char volatile ADCA_CH2RESL              absolute 0x0214;
sfr data unsigned char volatile ADCA_CH2RESH              absolute 0x0215;
sfr data unsigned int  volatile ADCA_CH3RES               absolute 0x0216;
sfr data unsigned char volatile ADCA_CH3RESL              absolute 0x0216;
sfr data unsigned char volatile ADCA_CH3RESH              absolute 0x0217;
sfr data unsigned int  volatile ADCA_CMP                  absolute 0x0218;
sfr data unsigned char volatile ADCA_CH0_CTRL             absolute 0x0220;
    sbit  START_ADCA_CH0_CTRL_bit at ADCA_CH0_CTRL.B7;
    const register unsigned short int GAIN0 = 2;
    sbit  GAIN0_bit at ADCA_CH0_CTRL.B2;
    const register unsigned short int GAIN1 = 3;
    sbit  GAIN1_bit at ADCA_CH0_CTRL.B3;
    const register unsigned short int GAIN2 = 4;
    sbit  GAIN2_bit at ADCA_CH0_CTRL.B4;
    const register unsigned short int INPUTMODE0 = 0;
    sbit  INPUTMODE0_bit at ADCA_CH0_CTRL.B0;
    const register unsigned short int INPUTMODE1 = 1;
    sbit  INPUTMODE1_bit at ADCA_CH0_CTRL.B1;

sfr data unsigned char volatile ADCA_CH0_MUXCTRL          absolute 0x0221;
    const register unsigned short int MUXPOS0 = 3;
    sbit  MUXPOS0_bit at ADCA_CH0_MUXCTRL.B3;
    const register unsigned short int MUXPOS1 = 4;
    sbit  MUXPOS1_bit at ADCA_CH0_MUXCTRL.B4;
    const register unsigned short int MUXPOS2 = 5;
    sbit  MUXPOS2_bit at ADCA_CH0_MUXCTRL.B5;
    const register unsigned short int MUXPOS3 = 6;
    sbit  MUXPOS3_bit at ADCA_CH0_MUXCTRL.B6;
    const register unsigned short int MUXINT0 = 3;
    sbit  MUXINT0_bit at ADCA_CH0_MUXCTRL.B3;
    const register unsigned short int MUXINT1 = 4;
    sbit  MUXINT1_bit at ADCA_CH0_MUXCTRL.B4;
    const register unsigned short int MUXINT2 = 5;
    sbit  MUXINT2_bit at ADCA_CH0_MUXCTRL.B5;
    const register unsigned short int MUXINT3 = 6;
    sbit  MUXINT3_bit at ADCA_CH0_MUXCTRL.B6;
    const register unsigned short int MUXNEG0 = 0;
    sbit  MUXNEG0_bit at ADCA_CH0_MUXCTRL.B0;
    const register unsigned short int MUXNEG1 = 1;
    sbit  MUXNEG1_bit at ADCA_CH0_MUXCTRL.B1;
    const register unsigned short int MUXNEG2 = 2;
    sbit  MUXNEG2_bit at ADCA_CH0_MUXCTRL.B2;

sfr data unsigned char volatile ADCA_CH0_INTCTRL          absolute 0x0222;
    const register unsigned short int INTMODE0 = 2;
    sbit  INTMODE0_bit at ADCA_CH0_INTCTRL.B2;
    const register unsigned short int INTMODE1 = 3;
    sbit  INTMODE1_bit at ADCA_CH0_INTCTRL.B3;
    sbit  INTLVL0_ADCA_CH0_INTCTRL_bit at ADCA_CH0_INTCTRL.B0;
    sbit  INTLVL1_ADCA_CH0_INTCTRL_bit at ADCA_CH0_INTCTRL.B1;

sfr data unsigned char volatile ADCA_CH0_INTFLAGS         absolute 0x0223;
    const register unsigned short int CHIF = 0;
    sbit  CHIF_bit at ADCA_CH0_INTFLAGS.B0;

sfr data unsigned int  volatile ADCA_CH0_RES              absolute 0x0224;
sfr data unsigned char volatile ADCA_CH0_RESL             absolute 0x0224;
sfr data unsigned char volatile ADCA_CH0_RESH             absolute 0x0225;
sfr data unsigned char volatile ADCA_CH0_SCAN             absolute 0x0226;
    const register unsigned short int OFFSET0 = 4;
    sbit  OFFSET0_bit at ADCA_CH0_SCAN.B4;
    const register unsigned short int OFFSET1 = 5;
    sbit  OFFSET1_bit at ADCA_CH0_SCAN.B5;
    const register unsigned short int OFFSET2 = 6;
    sbit  OFFSET2_bit at ADCA_CH0_SCAN.B6;
    const register unsigned short int OFFSET3 = 7;
    sbit  OFFSET3_bit at ADCA_CH0_SCAN.B7;
    const register unsigned short int SCANNUM0 = 0;
    sbit  SCANNUM0_bit at ADCA_CH0_SCAN.B0;
    const register unsigned short int SCANNUM1 = 1;
    sbit  SCANNUM1_bit at ADCA_CH0_SCAN.B1;
    const register unsigned short int SCANNUM2 = 2;
    sbit  SCANNUM2_bit at ADCA_CH0_SCAN.B2;
    const register unsigned short int SCANNUM3 = 3;
    sbit  SCANNUM3_bit at ADCA_CH0_SCAN.B3;

sfr data unsigned char volatile ADCA_CH1_CTRL             absolute 0x0228;
    sbit  START_ADCA_CH1_CTRL_bit at ADCA_CH1_CTRL.B7;
    sbit  GAIN0_ADCA_CH1_CTRL_bit at ADCA_CH1_CTRL.B2;
    sbit  GAIN1_ADCA_CH1_CTRL_bit at ADCA_CH1_CTRL.B3;
    sbit  GAIN2_ADCA_CH1_CTRL_bit at ADCA_CH1_CTRL.B4;
    sbit  INPUTMODE0_ADCA_CH1_CTRL_bit at ADCA_CH1_CTRL.B0;
    sbit  INPUTMODE1_ADCA_CH1_CTRL_bit at ADCA_CH1_CTRL.B1;

sfr data unsigned char volatile ADCA_CH1_MUXCTRL          absolute 0x0229;
    sbit  MUXPOS0_ADCA_CH1_MUXCTRL_bit at ADCA_CH1_MUXCTRL.B3;
    sbit  MUXPOS1_ADCA_CH1_MUXCTRL_bit at ADCA_CH1_MUXCTRL.B4;
    sbit  MUXPOS2_ADCA_CH1_MUXCTRL_bit at ADCA_CH1_MUXCTRL.B5;
    sbit  MUXPOS3_ADCA_CH1_MUXCTRL_bit at ADCA_CH1_MUXCTRL.B6;
    sbit  MUXINT0_ADCA_CH1_MUXCTRL_bit at ADCA_CH1_MUXCTRL.B3;
    sbit  MUXINT1_ADCA_CH1_MUXCTRL_bit at ADCA_CH1_MUXCTRL.B4;
    sbit  MUXINT2_ADCA_CH1_MUXCTRL_bit at ADCA_CH1_MUXCTRL.B5;
    sbit  MUXINT3_ADCA_CH1_MUXCTRL_bit at ADCA_CH1_MUXCTRL.B6;
    sbit  MUXNEG0_ADCA_CH1_MUXCTRL_bit at ADCA_CH1_MUXCTRL.B0;
    sbit  MUXNEG1_ADCA_CH1_MUXCTRL_bit at ADCA_CH1_MUXCTRL.B1;
    sbit  MUXNEG2_ADCA_CH1_MUXCTRL_bit at ADCA_CH1_MUXCTRL.B2;

sfr data unsigned char volatile ADCA_CH1_INTCTRL          absolute 0x022A;
    sbit  INTMODE0_ADCA_CH1_INTCTRL_bit at ADCA_CH1_INTCTRL.B2;
    sbit  INTMODE1_ADCA_CH1_INTCTRL_bit at ADCA_CH1_INTCTRL.B3;
    sbit  INTLVL0_ADCA_CH1_INTCTRL_bit at ADCA_CH1_INTCTRL.B0;
    sbit  INTLVL1_ADCA_CH1_INTCTRL_bit at ADCA_CH1_INTCTRL.B1;

sfr data unsigned char volatile ADCA_CH1_INTFLAGS         absolute 0x022B;
    sbit  CHIF_ADCA_CH1_INTFLAGS_bit at ADCA_CH1_INTFLAGS.B0;

sfr data unsigned int  volatile ADCA_CH1_RES              absolute 0x022C;
sfr data unsigned char volatile ADCA_CH1_RESL             absolute 0x022C;
sfr data unsigned char volatile ADCA_CH1_RESH             absolute 0x022D;
sfr data unsigned char volatile ADCA_CH1_SCAN             absolute 0x022E;
    sbit  OFFSET0_ADCA_CH1_SCAN_bit at ADCA_CH1_SCAN.B4;
    sbit  OFFSET1_ADCA_CH1_SCAN_bit at ADCA_CH1_SCAN.B5;
    sbit  OFFSET2_ADCA_CH1_SCAN_bit at ADCA_CH1_SCAN.B6;
    sbit  OFFSET3_ADCA_CH1_SCAN_bit at ADCA_CH1_SCAN.B7;
    sbit  SCANNUM0_ADCA_CH1_SCAN_bit at ADCA_CH1_SCAN.B0;
    sbit  SCANNUM1_ADCA_CH1_SCAN_bit at ADCA_CH1_SCAN.B1;
    sbit  SCANNUM2_ADCA_CH1_SCAN_bit at ADCA_CH1_SCAN.B2;
    sbit  SCANNUM3_ADCA_CH1_SCAN_bit at ADCA_CH1_SCAN.B3;

sfr data unsigned char volatile ADCA_CH2_CTRL             absolute 0x0230;
    sbit  START_ADCA_CH2_CTRL_bit at ADCA_CH2_CTRL.B7;
    sbit  GAIN0_ADCA_CH2_CTRL_bit at ADCA_CH2_CTRL.B2;
    sbit  GAIN1_ADCA_CH2_CTRL_bit at ADCA_CH2_CTRL.B3;
    sbit  GAIN2_ADCA_CH2_CTRL_bit at ADCA_CH2_CTRL.B4;
    sbit  INPUTMODE0_ADCA_CH2_CTRL_bit at ADCA_CH2_CTRL.B0;
    sbit  INPUTMODE1_ADCA_CH2_CTRL_bit at ADCA_CH2_CTRL.B1;

sfr data unsigned char volatile ADCA_CH2_MUXCTRL          absolute 0x0231;
    sbit  MUXPOS0_ADCA_CH2_MUXCTRL_bit at ADCA_CH2_MUXCTRL.B3;
    sbit  MUXPOS1_ADCA_CH2_MUXCTRL_bit at ADCA_CH2_MUXCTRL.B4;
    sbit  MUXPOS2_ADCA_CH2_MUXCTRL_bit at ADCA_CH2_MUXCTRL.B5;
    sbit  MUXPOS3_ADCA_CH2_MUXCTRL_bit at ADCA_CH2_MUXCTRL.B6;
    sbit  MUXINT0_ADCA_CH2_MUXCTRL_bit at ADCA_CH2_MUXCTRL.B3;
    sbit  MUXINT1_ADCA_CH2_MUXCTRL_bit at ADCA_CH2_MUXCTRL.B4;
    sbit  MUXINT2_ADCA_CH2_MUXCTRL_bit at ADCA_CH2_MUXCTRL.B5;
    sbit  MUXINT3_ADCA_CH2_MUXCTRL_bit at ADCA_CH2_MUXCTRL.B6;
    sbit  MUXNEG0_ADCA_CH2_MUXCTRL_bit at ADCA_CH2_MUXCTRL.B0;
    sbit  MUXNEG1_ADCA_CH2_MUXCTRL_bit at ADCA_CH2_MUXCTRL.B1;
    sbit  MUXNEG2_ADCA_CH2_MUXCTRL_bit at ADCA_CH2_MUXCTRL.B2;

sfr data unsigned char volatile ADCA_CH2_INTCTRL          absolute 0x0232;
    sbit  INTMODE0_ADCA_CH2_INTCTRL_bit at ADCA_CH2_INTCTRL.B2;
    sbit  INTMODE1_ADCA_CH2_INTCTRL_bit at ADCA_CH2_INTCTRL.B3;
    sbit  INTLVL0_ADCA_CH2_INTCTRL_bit at ADCA_CH2_INTCTRL.B0;
    sbit  INTLVL1_ADCA_CH2_INTCTRL_bit at ADCA_CH2_INTCTRL.B1;

sfr data unsigned char volatile ADCA_CH2_INTFLAGS         absolute 0x0233;
    sbit  CHIF_ADCA_CH2_INTFLAGS_bit at ADCA_CH2_INTFLAGS.B0;

sfr data unsigned int  volatile ADCA_CH2_RES              absolute 0x0234;
sfr data unsigned char volatile ADCA_CH2_RESL             absolute 0x0234;
sfr data unsigned char volatile ADCA_CH2_RESH             absolute 0x0235;
sfr data unsigned char volatile ADCA_CH2_SCAN             absolute 0x0236;
    sbit  OFFSET0_ADCA_CH2_SCAN_bit at ADCA_CH2_SCAN.B4;
    sbit  OFFSET1_ADCA_CH2_SCAN_bit at ADCA_CH2_SCAN.B5;
    sbit  OFFSET2_ADCA_CH2_SCAN_bit at ADCA_CH2_SCAN.B6;
    sbit  OFFSET3_ADCA_CH2_SCAN_bit at ADCA_CH2_SCAN.B7;
    sbit  SCANNUM0_ADCA_CH2_SCAN_bit at ADCA_CH2_SCAN.B0;
    sbit  SCANNUM1_ADCA_CH2_SCAN_bit at ADCA_CH2_SCAN.B1;
    sbit  SCANNUM2_ADCA_CH2_SCAN_bit at ADCA_CH2_SCAN.B2;
    sbit  SCANNUM3_ADCA_CH2_SCAN_bit at ADCA_CH2_SCAN.B3;

sfr data unsigned char volatile ADCA_CH3_CTRL             absolute 0x0238;
    sbit  START_ADCA_CH3_CTRL_bit at ADCA_CH3_CTRL.B7;
    sbit  GAIN0_ADCA_CH3_CTRL_bit at ADCA_CH3_CTRL.B2;
    sbit  GAIN1_ADCA_CH3_CTRL_bit at ADCA_CH3_CTRL.B3;
    sbit  GAIN2_ADCA_CH3_CTRL_bit at ADCA_CH3_CTRL.B4;
    sbit  INPUTMODE0_ADCA_CH3_CTRL_bit at ADCA_CH3_CTRL.B0;
    sbit  INPUTMODE1_ADCA_CH3_CTRL_bit at ADCA_CH3_CTRL.B1;

sfr data unsigned char volatile ADCA_CH3_MUXCTRL          absolute 0x0239;
    sbit  MUXPOS0_ADCA_CH3_MUXCTRL_bit at ADCA_CH3_MUXCTRL.B3;
    sbit  MUXPOS1_ADCA_CH3_MUXCTRL_bit at ADCA_CH3_MUXCTRL.B4;
    sbit  MUXPOS2_ADCA_CH3_MUXCTRL_bit at ADCA_CH3_MUXCTRL.B5;
    sbit  MUXPOS3_ADCA_CH3_MUXCTRL_bit at ADCA_CH3_MUXCTRL.B6;
    sbit  MUXINT0_ADCA_CH3_MUXCTRL_bit at ADCA_CH3_MUXCTRL.B3;
    sbit  MUXINT1_ADCA_CH3_MUXCTRL_bit at ADCA_CH3_MUXCTRL.B4;
    sbit  MUXINT2_ADCA_CH3_MUXCTRL_bit at ADCA_CH3_MUXCTRL.B5;
    sbit  MUXINT3_ADCA_CH3_MUXCTRL_bit at ADCA_CH3_MUXCTRL.B6;
    sbit  MUXNEG0_ADCA_CH3_MUXCTRL_bit at ADCA_CH3_MUXCTRL.B0;
    sbit  MUXNEG1_ADCA_CH3_MUXCTRL_bit at ADCA_CH3_MUXCTRL.B1;
    sbit  MUXNEG2_ADCA_CH3_MUXCTRL_bit at ADCA_CH3_MUXCTRL.B2;

sfr data unsigned char volatile ADCA_CH3_INTCTRL          absolute 0x023A;
    sbit  INTMODE0_ADCA_CH3_INTCTRL_bit at ADCA_CH3_INTCTRL.B2;
    sbit  INTMODE1_ADCA_CH3_INTCTRL_bit at ADCA_CH3_INTCTRL.B3;
    sbit  INTLVL0_ADCA_CH3_INTCTRL_bit at ADCA_CH3_INTCTRL.B0;
    sbit  INTLVL1_ADCA_CH3_INTCTRL_bit at ADCA_CH3_INTCTRL.B1;

sfr data unsigned char volatile ADCA_CH3_INTFLAGS         absolute 0x023B;
    sbit  CHIF_ADCA_CH3_INTFLAGS_bit at ADCA_CH3_INTFLAGS.B0;

sfr data unsigned int  volatile ADCA_CH3_RES              absolute 0x023C;
sfr data unsigned char volatile ADCA_CH3_RESL             absolute 0x023C;
sfr data unsigned char volatile ADCA_CH3_RESH             absolute 0x023D;
sfr data unsigned char volatile ADCA_CH3_SCAN             absolute 0x023E;
    sbit  OFFSET0_ADCA_CH3_SCAN_bit at ADCA_CH3_SCAN.B4;
    sbit  OFFSET1_ADCA_CH3_SCAN_bit at ADCA_CH3_SCAN.B5;
    sbit  OFFSET2_ADCA_CH3_SCAN_bit at ADCA_CH3_SCAN.B6;
    sbit  OFFSET3_ADCA_CH3_SCAN_bit at ADCA_CH3_SCAN.B7;
    sbit  SCANNUM0_ADCA_CH3_SCAN_bit at ADCA_CH3_SCAN.B0;
    sbit  SCANNUM1_ADCA_CH3_SCAN_bit at ADCA_CH3_SCAN.B1;
    sbit  SCANNUM2_ADCA_CH3_SCAN_bit at ADCA_CH3_SCAN.B2;
    sbit  SCANNUM3_ADCA_CH3_SCAN_bit at ADCA_CH3_SCAN.B3;

sfr data unsigned char volatile DACB_CTRLA                absolute 0x0320;
    const register unsigned short int IDOEN = 4;
    sbit  IDOEN_bit at DACB_CTRLA.B4;
    const register unsigned short int CH1EN = 3;
    sbit  CH1EN_bit at DACB_CTRLA.B3;
    const register unsigned short int CH0EN = 2;
    sbit  CH0EN_bit at DACB_CTRLA.B2;
    const register unsigned short int LPMODE = 1;
    sbit  LPMODE_bit at DACB_CTRLA.B1;
    sbit  ENABLE_DACB_CTRLA_bit at DACB_CTRLA.B0;

sfr data unsigned char volatile DACB_CTRLB                absolute 0x0321;
    const register unsigned short int CHSEL0 = 5;
    sbit  CHSEL0_bit at DACB_CTRLB.B5;
    const register unsigned short int CHSEL1 = 6;
    sbit  CHSEL1_bit at DACB_CTRLB.B6;
    const register unsigned short int CH1TRIG = 1;
    sbit  CH1TRIG_bit at DACB_CTRLB.B1;
    const register unsigned short int CH0TRIG = 0;
    sbit  CH0TRIG_bit at DACB_CTRLB.B0;

sfr data unsigned char volatile DACB_CTRLC                absolute 0x0322;
    sbit  REFSEL0_DACB_CTRLC_bit at DACB_CTRLC.B3;
    sbit  REFSEL1_DACB_CTRLC_bit at DACB_CTRLC.B4;
    const register unsigned short int LEFTADJ = 0;
    sbit  LEFTADJ_bit at DACB_CTRLC.B0;

sfr data unsigned char volatile DACB_EVCTRL               absolute 0x0323;
    const register unsigned short int EVSPLIT = 3;
    sbit  EVSPLIT_bit at DACB_EVCTRL.B3;
    sbit  EVSEL0_DACB_EVCTRL_bit at DACB_EVCTRL.B0;
    sbit  EVSEL1_DACB_EVCTRL_bit at DACB_EVCTRL.B1;
    sbit  EVSEL2_DACB_EVCTRL_bit at DACB_EVCTRL.B2;

sfr data unsigned char volatile DACB_STATUS               absolute 0x0325;
    const register unsigned short int CH1DRE = 1;
    sbit  CH1DRE_bit at DACB_STATUS.B1;
    const register unsigned short int CH0DRE = 0;
    sbit  CH0DRE_bit at DACB_STATUS.B0;

sfr data unsigned char volatile DACB_CH0GAINCAL           absolute 0x0328;
    const register unsigned short int CH0GAINCAL0 = 0;
    sbit  CH0GAINCAL0_bit at DACB_CH0GAINCAL.B0;
    const register unsigned short int CH0GAINCAL1 = 1;
    sbit  CH0GAINCAL1_bit at DACB_CH0GAINCAL.B1;
    const register unsigned short int CH0GAINCAL2 = 2;
    sbit  CH0GAINCAL2_bit at DACB_CH0GAINCAL.B2;
    const register unsigned short int CH0GAINCAL3 = 3;
    sbit  CH0GAINCAL3_bit at DACB_CH0GAINCAL.B3;
    const register unsigned short int CH0GAINCAL4 = 4;
    sbit  CH0GAINCAL4_bit at DACB_CH0GAINCAL.B4;
    const register unsigned short int CH0GAINCAL5 = 5;
    sbit  CH0GAINCAL5_bit at DACB_CH0GAINCAL.B5;
    const register unsigned short int CH0GAINCAL6 = 6;
    sbit  CH0GAINCAL6_bit at DACB_CH0GAINCAL.B6;

sfr data unsigned char volatile DACB_CH0OFFSETCAL         absolute 0x0329;
    const register unsigned short int CH0OFFSETCAL0 = 0;
    sbit  CH0OFFSETCAL0_bit at DACB_CH0OFFSETCAL.B0;
    const register unsigned short int CH0OFFSETCAL1 = 1;
    sbit  CH0OFFSETCAL1_bit at DACB_CH0OFFSETCAL.B1;
    const register unsigned short int CH0OFFSETCAL2 = 2;
    sbit  CH0OFFSETCAL2_bit at DACB_CH0OFFSETCAL.B2;
    const register unsigned short int CH0OFFSETCAL3 = 3;
    sbit  CH0OFFSETCAL3_bit at DACB_CH0OFFSETCAL.B3;
    const register unsigned short int CH0OFFSETCAL4 = 4;
    sbit  CH0OFFSETCAL4_bit at DACB_CH0OFFSETCAL.B4;
    const register unsigned short int CH0OFFSETCAL5 = 5;
    sbit  CH0OFFSETCAL5_bit at DACB_CH0OFFSETCAL.B5;
    const register unsigned short int CH0OFFSETCAL6 = 6;
    sbit  CH0OFFSETCAL6_bit at DACB_CH0OFFSETCAL.B6;

sfr data unsigned char volatile DACB_CH1GAINCAL           absolute 0x032A;
    const register unsigned short int CH1GAINCAL0 = 0;
    sbit  CH1GAINCAL0_bit at DACB_CH1GAINCAL.B0;
    const register unsigned short int CH1GAINCAL1 = 1;
    sbit  CH1GAINCAL1_bit at DACB_CH1GAINCAL.B1;
    const register unsigned short int CH1GAINCAL2 = 2;
    sbit  CH1GAINCAL2_bit at DACB_CH1GAINCAL.B2;
    const register unsigned short int CH1GAINCAL3 = 3;
    sbit  CH1GAINCAL3_bit at DACB_CH1GAINCAL.B3;
    const register unsigned short int CH1GAINCAL4 = 4;
    sbit  CH1GAINCAL4_bit at DACB_CH1GAINCAL.B4;
    const register unsigned short int CH1GAINCAL5 = 5;
    sbit  CH1GAINCAL5_bit at DACB_CH1GAINCAL.B5;
    const register unsigned short int CH1GAINCAL6 = 6;
    sbit  CH1GAINCAL6_bit at DACB_CH1GAINCAL.B6;

sfr data unsigned char volatile DACB_CH1OFFSETCAL         absolute 0x032B;
    const register unsigned short int CH1OFFSETCAL0 = 0;
    sbit  CH1OFFSETCAL0_bit at DACB_CH1OFFSETCAL.B0;
    const register unsigned short int CH1OFFSETCAL1 = 1;
    sbit  CH1OFFSETCAL1_bit at DACB_CH1OFFSETCAL.B1;
    const register unsigned short int CH1OFFSETCAL2 = 2;
    sbit  CH1OFFSETCAL2_bit at DACB_CH1OFFSETCAL.B2;
    const register unsigned short int CH1OFFSETCAL3 = 3;
    sbit  CH1OFFSETCAL3_bit at DACB_CH1OFFSETCAL.B3;
    const register unsigned short int CH1OFFSETCAL4 = 4;
    sbit  CH1OFFSETCAL4_bit at DACB_CH1OFFSETCAL.B4;
    const register unsigned short int CH1OFFSETCAL5 = 5;
    sbit  CH1OFFSETCAL5_bit at DACB_CH1OFFSETCAL.B5;
    const register unsigned short int CH1OFFSETCAL6 = 6;
    sbit  CH1OFFSETCAL6_bit at DACB_CH1OFFSETCAL.B6;

sfr data unsigned int  volatile DACB_CH0DATA              absolute 0x0338;
sfr data unsigned char volatile DACB_CH0DATAL             absolute 0x0338;
sfr data unsigned char volatile DACB_CH0DATAH             absolute 0x0339;
sfr data unsigned int  volatile DACB_CH1DATA              absolute 0x033A;
sfr data unsigned char volatile DACB_CH1DATAL             absolute 0x033A;
sfr data unsigned char volatile DACB_CH1DATAH             absolute 0x033B;
sfr data unsigned char volatile ACA_AC0CTRL               absolute 0x0380;
    sbit  INTMODE0_ACA_AC0CTRL_bit at ACA_AC0CTRL.B6;
    sbit  INTMODE1_ACA_AC0CTRL_bit at ACA_AC0CTRL.B7;
    sbit  INTLVL0_ACA_AC0CTRL_bit at ACA_AC0CTRL.B4;
    sbit  INTLVL1_ACA_AC0CTRL_bit at ACA_AC0CTRL.B5;
    const register unsigned short int HSMODE = 3;
    sbit  HSMODE_bit at ACA_AC0CTRL.B3;
    const register unsigned short int HYSMODE0 = 1;
    sbit  HYSMODE0_bit at ACA_AC0CTRL.B1;
    const register unsigned short int HYSMODE1 = 2;
    sbit  HYSMODE1_bit at ACA_AC0CTRL.B2;
    sbit  ENABLE_ACA_AC0CTRL_bit at ACA_AC0CTRL.B0;

sfr data unsigned char volatile ACA_AC1CTRL               absolute 0x0381;
    sbit  INTMODE0_ACA_AC1CTRL_bit at ACA_AC1CTRL.B6;
    sbit  INTMODE1_ACA_AC1CTRL_bit at ACA_AC1CTRL.B7;
    sbit  INTLVL0_ACA_AC1CTRL_bit at ACA_AC1CTRL.B4;
    sbit  INTLVL1_ACA_AC1CTRL_bit at ACA_AC1CTRL.B5;
    sbit  HSMODE_ACA_AC1CTRL_bit at ACA_AC1CTRL.B3;
    sbit  HYSMODE0_ACA_AC1CTRL_bit at ACA_AC1CTRL.B1;
    sbit  HYSMODE1_ACA_AC1CTRL_bit at ACA_AC1CTRL.B2;
    sbit  ENABLE_ACA_AC1CTRL_bit at ACA_AC1CTRL.B0;

sfr data unsigned char volatile ACA_AC0MUXCTRL            absolute 0x0382;
    sbit  MUXPOS0_ACA_AC0MUXCTRL_bit at ACA_AC0MUXCTRL.B3;
    sbit  MUXPOS1_ACA_AC0MUXCTRL_bit at ACA_AC0MUXCTRL.B4;
    sbit  MUXPOS2_ACA_AC0MUXCTRL_bit at ACA_AC0MUXCTRL.B5;
    sbit  MUXNEG0_ACA_AC0MUXCTRL_bit at ACA_AC0MUXCTRL.B0;
    sbit  MUXNEG1_ACA_AC0MUXCTRL_bit at ACA_AC0MUXCTRL.B1;
    sbit  MUXNEG2_ACA_AC0MUXCTRL_bit at ACA_AC0MUXCTRL.B2;

sfr data unsigned char volatile ACA_AC1MUXCTRL            absolute 0x0383;
    sbit  MUXPOS0_ACA_AC1MUXCTRL_bit at ACA_AC1MUXCTRL.B3;
    sbit  MUXPOS1_ACA_AC1MUXCTRL_bit at ACA_AC1MUXCTRL.B4;
    sbit  MUXPOS2_ACA_AC1MUXCTRL_bit at ACA_AC1MUXCTRL.B5;
    sbit  MUXNEG0_ACA_AC1MUXCTRL_bit at ACA_AC1MUXCTRL.B0;
    sbit  MUXNEG1_ACA_AC1MUXCTRL_bit at ACA_AC1MUXCTRL.B1;
    sbit  MUXNEG2_ACA_AC1MUXCTRL_bit at ACA_AC1MUXCTRL.B2;

sfr data unsigned char volatile ACA_CTRLA                 absolute 0x0384;
    const register unsigned short int AC1OUT = 1;
    sbit  AC1OUT_bit at ACA_CTRLA.B1;
    const register unsigned short int AC0OUT = 0;
    sbit  AC0OUT_bit at ACA_CTRLA.B0;

sfr data unsigned char volatile ACA_CTRLB                 absolute 0x0385;
    const register unsigned short int SCALEFAC0 = 0;
    sbit  SCALEFAC0_bit at ACA_CTRLB.B0;
    const register unsigned short int SCALEFAC1 = 1;
    sbit  SCALEFAC1_bit at ACA_CTRLB.B1;
    const register unsigned short int SCALEFAC2 = 2;
    sbit  SCALEFAC2_bit at ACA_CTRLB.B2;
    const register unsigned short int SCALEFAC3 = 3;
    sbit  SCALEFAC3_bit at ACA_CTRLB.B3;
    const register unsigned short int SCALEFAC4 = 4;
    sbit  SCALEFAC4_bit at ACA_CTRLB.B4;
    const register unsigned short int SCALEFAC5 = 5;
    sbit  SCALEFAC5_bit at ACA_CTRLB.B5;

sfr data unsigned char volatile ACA_WINCTRL               absolute 0x0386;
    sbit  WEN_ACA_WINCTRL_bit at ACA_WINCTRL.B4;
    const register unsigned short int WINTMODE0 = 2;
    sbit  WINTMODE0_bit at ACA_WINCTRL.B2;
    const register unsigned short int WINTMODE1 = 3;
    sbit  WINTMODE1_bit at ACA_WINCTRL.B3;
    const register unsigned short int WINTLVL0 = 0;
    sbit  WINTLVL0_bit at ACA_WINCTRL.B0;
    const register unsigned short int WINTLVL1 = 1;
    sbit  WINTLVL1_bit at ACA_WINCTRL.B1;

sfr data unsigned char volatile ACA_STATUS                absolute 0x0387;
    const register unsigned short int WSTATE0 = 6;
    sbit  WSTATE0_bit at ACA_STATUS.B6;
    const register unsigned short int WSTATE1 = 7;
    sbit  WSTATE1_bit at ACA_STATUS.B7;
    const register unsigned short int AC1STATE = 5;
    sbit  AC1STATE_bit at ACA_STATUS.B5;
    const register unsigned short int AC0STATE = 4;
    sbit  AC0STATE_bit at ACA_STATUS.B4;
    const register unsigned short int WIF = 2;
    sbit  WIF_bit at ACA_STATUS.B2;
    const register unsigned short int AC1IF = 1;
    sbit  AC1IF_bit at ACA_STATUS.B1;
    const register unsigned short int AC0IF = 0;
    sbit  AC0IF_bit at ACA_STATUS.B0;

sfr data unsigned char volatile RTC_CTRL                  absolute 0x0400;
    sbit  PRESCALER0_RTC_CTRL_bit at RTC_CTRL.B0;
    sbit  PRESCALER1_RTC_CTRL_bit at RTC_CTRL.B1;
    sbit  PRESCALER2_RTC_CTRL_bit at RTC_CTRL.B2;

sfr data unsigned char volatile RTC_STATUS                absolute 0x0401;
    sbit  SYNCBUSY_RTC_STATUS_bit at RTC_STATUS.B0;

sfr data unsigned char volatile RTC_INTCTRL               absolute 0x0402;
    const register unsigned short int COMPINTLVL0 = 2;
    sbit  COMPINTLVL0_bit at RTC_INTCTRL.B2;
    const register unsigned short int COMPINTLVL1 = 3;
    sbit  COMPINTLVL1_bit at RTC_INTCTRL.B3;
    const register unsigned short int OVFINTLVL0 = 0;
    sbit  OVFINTLVL0_bit at RTC_INTCTRL.B0;
    const register unsigned short int OVFINTLVL1 = 1;
    sbit  OVFINTLVL1_bit at RTC_INTCTRL.B1;

sfr data unsigned char volatile RTC_INTFLAGS              absolute 0x0403;
    const register unsigned short int COMPIF = 1;
    sbit  COMPIF_bit at RTC_INTFLAGS.B1;
    const register unsigned short int OVFIF = 0;
    sbit  OVFIF_bit at RTC_INTFLAGS.B0;

sfr data unsigned char volatile RTC_TEMP                  absolute 0x0404;
sfr data unsigned int  volatile RTC_CNT                   absolute 0x0408;
sfr data unsigned char volatile RTC_CNTL                  absolute 0x0408;
sfr data unsigned char volatile RTC_CNTH                  absolute 0x0409;
sfr data unsigned int  volatile RTC_PER                   absolute 0x040A;
sfr data unsigned char volatile RTC_PERL                  absolute 0x040A;
sfr data unsigned char volatile RTC_PERH                  absolute 0x040B;
sfr data unsigned int  volatile RTC_COMP                  absolute 0x040C;
sfr data unsigned char volatile RTC_COMPL                 absolute 0x040C;
sfr data unsigned char volatile RTC_COMPH                 absolute 0x040D;
sfr data unsigned char volatile TWIC_CTRL                 absolute 0x0480;
    const register unsigned short int SDAHOLD0 = 1;
    sbit  SDAHOLD0_bit at TWIC_CTRL.B1;
    const register unsigned short int SDAHOLD1 = 2;
    sbit  SDAHOLD1_bit at TWIC_CTRL.B2;
    const register unsigned short int EDIEN = 0;
    sbit  EDIEN_bit at TWIC_CTRL.B0;

sfr data unsigned char volatile TWIC_MASTER_CTRLA         absolute 0x0481;
    sbit  INTLVL0_TWIC_MASTER_CTRLA_bit at TWIC_MASTER_CTRLA.B6;
    sbit  INTLVL1_TWIC_MASTER_CTRLA_bit at TWIC_MASTER_CTRLA.B7;
    const register unsigned short int RIEN = 5;
    sbit  RIEN_bit at TWIC_MASTER_CTRLA.B5;
    const register unsigned short int WIEN = 4;
    sbit  WIEN_bit at TWIC_MASTER_CTRLA.B4;
    sbit  ENABLE_TWIC_MASTER_CTRLA_bit at TWIC_MASTER_CTRLA.B3;

sfr data unsigned char volatile TWIC_MASTER_CTRLB         absolute 0x0482;
    const register unsigned short int TIMEOUT0 = 2;
    sbit  TIMEOUT0_bit at TWIC_MASTER_CTRLB.B2;
    const register unsigned short int TIMEOUT1 = 3;
    sbit  TIMEOUT1_bit at TWIC_MASTER_CTRLB.B3;
    const register unsigned short int QCEN = 1;
    sbit  QCEN_bit at TWIC_MASTER_CTRLB.B1;
    const register unsigned short int SMEN = 0;
    sbit  SMEN_bit at TWIC_MASTER_CTRLB.B0;

sfr data unsigned char volatile TWIC_MASTER_CTRLC         absolute 0x0483;
    const register unsigned short int ACKACT = 2;
    sbit  ACKACT_bit at TWIC_MASTER_CTRLC.B2;
    sbit  CMD0_TWIC_MASTER_CTRLC_bit at TWIC_MASTER_CTRLC.B0;
    sbit  CMD1_TWIC_MASTER_CTRLC_bit at TWIC_MASTER_CTRLC.B1;

sfr data unsigned char volatile TWIC_MASTER_STATUS        absolute 0x0484;
    const register unsigned short int RIF = 7;
    sbit  RIF_bit at TWIC_MASTER_STATUS.B7;
    sbit  WIF_TWIC_MASTER_STATUS_bit at TWIC_MASTER_STATUS.B6;
    const register unsigned short int CLKHOLD = 5;
    sbit  CLKHOLD_bit at TWIC_MASTER_STATUS.B5;
    const register unsigned short int RXACK = 4;
    sbit  RXACK_bit at TWIC_MASTER_STATUS.B4;
    const register unsigned short int ARBLOST = 3;
    sbit  ARBLOST_bit at TWIC_MASTER_STATUS.B3;
    const register unsigned short int BUSERR = 2;
    sbit  BUSERR_bit at TWIC_MASTER_STATUS.B2;
    const register unsigned short int BUSSTATE0 = 0;
    sbit  BUSSTATE0_bit at TWIC_MASTER_STATUS.B0;
    const register unsigned short int BUSSTATE1 = 1;
    sbit  BUSSTATE1_bit at TWIC_MASTER_STATUS.B1;

sfr data unsigned char volatile TWIC_MASTER_BAUD          absolute 0x0485;
sfr data unsigned char volatile TWIC_MASTER_ADDR          absolute 0x0486;
sfr data unsigned char volatile TWIC_MASTER_DATA          absolute 0x0487;
sfr data unsigned char volatile TWIC_SLAVE_CTRLA          absolute 0x0488;
    sbit  INTLVL0_TWIC_SLAVE_CTRLA_bit at TWIC_SLAVE_CTRLA.B6;
    sbit  INTLVL1_TWIC_SLAVE_CTRLA_bit at TWIC_SLAVE_CTRLA.B7;
    const register unsigned short int DIEN = 5;
    sbit  DIEN_bit at TWIC_SLAVE_CTRLA.B5;
    const register unsigned short int APIEN = 4;
    sbit  APIEN_bit at TWIC_SLAVE_CTRLA.B4;
    sbit  ENABLE_TWIC_SLAVE_CTRLA_bit at TWIC_SLAVE_CTRLA.B3;
    const register unsigned short int PIEN = 2;
    sbit  PIEN_bit at TWIC_SLAVE_CTRLA.B2;
    const register unsigned short int PMEN = 1;
    sbit  PMEN_bit at TWIC_SLAVE_CTRLA.B1;
    sbit  SMEN_TWIC_SLAVE_CTRLA_bit at TWIC_SLAVE_CTRLA.B0;

sfr data unsigned char volatile TWIC_SLAVE_CTRLB          absolute 0x0489;
    sbit  ACKACT_TWIC_SLAVE_CTRLB_bit at TWIC_SLAVE_CTRLB.B2;
    sbit  CMD0_TWIC_SLAVE_CTRLB_bit at TWIC_SLAVE_CTRLB.B0;
    sbit  CMD1_TWIC_SLAVE_CTRLB_bit at TWIC_SLAVE_CTRLB.B1;

sfr data unsigned char volatile TWIC_SLAVE_STATUS         absolute 0x048A;
    const register unsigned short int DIF = 7;
    sbit  DIF_bit at TWIC_SLAVE_STATUS.B7;
    const register unsigned short int APIF = 6;
    sbit  APIF_bit at TWIC_SLAVE_STATUS.B6;
    sbit  CLKHOLD_TWIC_SLAVE_STATUS_bit at TWIC_SLAVE_STATUS.B5;
    sbit  RXACK_TWIC_SLAVE_STATUS_bit at TWIC_SLAVE_STATUS.B4;
    const register unsigned short int COLL = 3;
    sbit  COLL_bit at TWIC_SLAVE_STATUS.B3;
    sbit  BUSERR_TWIC_SLAVE_STATUS_bit at TWIC_SLAVE_STATUS.B2;
    const register unsigned short int DIR_ = 1;
    sbit  DIR_bit at TWIC_SLAVE_STATUS.B1;
    const register unsigned short int AP = 0;
    sbit  AP_bit at TWIC_SLAVE_STATUS.B0;

sfr data unsigned char volatile TWIC_SLAVE_ADDR           absolute 0x048B;
sfr data unsigned char volatile TWIC_SLAVE_DATA           absolute 0x048C;
sfr data unsigned char volatile TWIC_SLAVE_ADDRMASK       absolute 0x048D;
    const register unsigned short int ADDRMASK0 = 1;
    sbit  ADDRMASK0_bit at TWIC_SLAVE_ADDRMASK.B1;
    const register unsigned short int ADDRMASK1 = 2;
    sbit  ADDRMASK1_bit at TWIC_SLAVE_ADDRMASK.B2;
    const register unsigned short int ADDRMASK2 = 3;
    sbit  ADDRMASK2_bit at TWIC_SLAVE_ADDRMASK.B3;
    const register unsigned short int ADDRMASK3 = 4;
    sbit  ADDRMASK3_bit at TWIC_SLAVE_ADDRMASK.B4;
    const register unsigned short int ADDRMASK4 = 5;
    sbit  ADDRMASK4_bit at TWIC_SLAVE_ADDRMASK.B5;
    const register unsigned short int ADDRMASK5 = 6;
    sbit  ADDRMASK5_bit at TWIC_SLAVE_ADDRMASK.B6;
    const register unsigned short int ADDRMASK6 = 7;
    sbit  ADDRMASK6_bit at TWIC_SLAVE_ADDRMASK.B7;
    const register unsigned short int ADDREN = 0;
    sbit  ADDREN_bit at TWIC_SLAVE_ADDRMASK.B0;

sfr data unsigned char volatile TWIE_CTRL                 absolute 0x04A0;
    sbit  SDAHOLD0_TWIE_CTRL_bit at TWIE_CTRL.B1;
    sbit  SDAHOLD1_TWIE_CTRL_bit at TWIE_CTRL.B2;
    sbit  EDIEN_TWIE_CTRL_bit at TWIE_CTRL.B0;

sfr data unsigned char volatile TWIE_MASTER_CTRLA         absolute 0x04A1;
    sbit  INTLVL0_TWIE_MASTER_CTRLA_bit at TWIE_MASTER_CTRLA.B6;
    sbit  INTLVL1_TWIE_MASTER_CTRLA_bit at TWIE_MASTER_CTRLA.B7;
    sbit  RIEN_TWIE_MASTER_CTRLA_bit at TWIE_MASTER_CTRLA.B5;
    sbit  WIEN_TWIE_MASTER_CTRLA_bit at TWIE_MASTER_CTRLA.B4;
    sbit  ENABLE_TWIE_MASTER_CTRLA_bit at TWIE_MASTER_CTRLA.B3;

sfr data unsigned char volatile TWIE_MASTER_CTRLB         absolute 0x04A2;
    sbit  TIMEOUT0_TWIE_MASTER_CTRLB_bit at TWIE_MASTER_CTRLB.B2;
    sbit  TIMEOUT1_TWIE_MASTER_CTRLB_bit at TWIE_MASTER_CTRLB.B3;
    sbit  QCEN_TWIE_MASTER_CTRLB_bit at TWIE_MASTER_CTRLB.B1;
    sbit  SMEN_TWIE_MASTER_CTRLB_bit at TWIE_MASTER_CTRLB.B0;

sfr data unsigned char volatile TWIE_MASTER_CTRLC         absolute 0x04A3;
    sbit  ACKACT_TWIE_MASTER_CTRLC_bit at TWIE_MASTER_CTRLC.B2;
    sbit  CMD0_TWIE_MASTER_CTRLC_bit at TWIE_MASTER_CTRLC.B0;
    sbit  CMD1_TWIE_MASTER_CTRLC_bit at TWIE_MASTER_CTRLC.B1;

sfr data unsigned char volatile TWIE_MASTER_STATUS        absolute 0x04A4;
    sbit  RIF_TWIE_MASTER_STATUS_bit at TWIE_MASTER_STATUS.B7;
    sbit  WIF_TWIE_MASTER_STATUS_bit at TWIE_MASTER_STATUS.B6;
    sbit  CLKHOLD_TWIE_MASTER_STATUS_bit at TWIE_MASTER_STATUS.B5;
    sbit  RXACK_TWIE_MASTER_STATUS_bit at TWIE_MASTER_STATUS.B4;
    sbit  ARBLOST_TWIE_MASTER_STATUS_bit at TWIE_MASTER_STATUS.B3;
    sbit  BUSERR_TWIE_MASTER_STATUS_bit at TWIE_MASTER_STATUS.B2;
    sbit  BUSSTATE0_TWIE_MASTER_STATUS_bit at TWIE_MASTER_STATUS.B0;
    sbit  BUSSTATE1_TWIE_MASTER_STATUS_bit at TWIE_MASTER_STATUS.B1;

sfr data unsigned char volatile TWIE_MASTER_BAUD          absolute 0x04A5;
sfr data unsigned char volatile TWIE_MASTER_ADDR          absolute 0x04A6;
sfr data unsigned char volatile TWIE_MASTER_DATA          absolute 0x04A7;
sfr data unsigned char volatile TWIE_SLAVE_CTRLA          absolute 0x04A8;
    sbit  INTLVL0_TWIE_SLAVE_CTRLA_bit at TWIE_SLAVE_CTRLA.B6;
    sbit  INTLVL1_TWIE_SLAVE_CTRLA_bit at TWIE_SLAVE_CTRLA.B7;
    sbit  DIEN_TWIE_SLAVE_CTRLA_bit at TWIE_SLAVE_CTRLA.B5;
    sbit  APIEN_TWIE_SLAVE_CTRLA_bit at TWIE_SLAVE_CTRLA.B4;
    sbit  ENABLE_TWIE_SLAVE_CTRLA_bit at TWIE_SLAVE_CTRLA.B3;
    sbit  PIEN_TWIE_SLAVE_CTRLA_bit at TWIE_SLAVE_CTRLA.B2;
    sbit  PMEN_TWIE_SLAVE_CTRLA_bit at TWIE_SLAVE_CTRLA.B1;
    sbit  SMEN_TWIE_SLAVE_CTRLA_bit at TWIE_SLAVE_CTRLA.B0;

sfr data unsigned char volatile TWIE_SLAVE_CTRLB          absolute 0x04A9;
    sbit  ACKACT_TWIE_SLAVE_CTRLB_bit at TWIE_SLAVE_CTRLB.B2;
    sbit  CMD0_TWIE_SLAVE_CTRLB_bit at TWIE_SLAVE_CTRLB.B0;
    sbit  CMD1_TWIE_SLAVE_CTRLB_bit at TWIE_SLAVE_CTRLB.B1;

sfr data unsigned char volatile TWIE_SLAVE_STATUS         absolute 0x04AA;
    sbit  DIF_TWIE_SLAVE_STATUS_bit at TWIE_SLAVE_STATUS.B7;
    sbit  APIF_TWIE_SLAVE_STATUS_bit at TWIE_SLAVE_STATUS.B6;
    sbit  CLKHOLD_TWIE_SLAVE_STATUS_bit at TWIE_SLAVE_STATUS.B5;
    sbit  RXACK_TWIE_SLAVE_STATUS_bit at TWIE_SLAVE_STATUS.B4;
    sbit  COLL_TWIE_SLAVE_STATUS_bit at TWIE_SLAVE_STATUS.B3;
    sbit  BUSERR_TWIE_SLAVE_STATUS_bit at TWIE_SLAVE_STATUS.B2;
    sbit  DIR__TWIE_SLAVE_STATUS_bit at TWIE_SLAVE_STATUS.B1;
    sbit  AP_TWIE_SLAVE_STATUS_bit at TWIE_SLAVE_STATUS.B0;

sfr data unsigned char volatile TWIE_SLAVE_ADDR           absolute 0x04AB;
sfr data unsigned char volatile TWIE_SLAVE_DATA           absolute 0x04AC;
sfr data unsigned char volatile TWIE_SLAVE_ADDRMASK       absolute 0x04AD;
    sbit  ADDRMASK0_TWIE_SLAVE_ADDRMASK_bit at TWIE_SLAVE_ADDRMASK.B1;
    sbit  ADDRMASK1_TWIE_SLAVE_ADDRMASK_bit at TWIE_SLAVE_ADDRMASK.B2;
    sbit  ADDRMASK2_TWIE_SLAVE_ADDRMASK_bit at TWIE_SLAVE_ADDRMASK.B3;
    sbit  ADDRMASK3_TWIE_SLAVE_ADDRMASK_bit at TWIE_SLAVE_ADDRMASK.B4;
    sbit  ADDRMASK4_TWIE_SLAVE_ADDRMASK_bit at TWIE_SLAVE_ADDRMASK.B5;
    sbit  ADDRMASK5_TWIE_SLAVE_ADDRMASK_bit at TWIE_SLAVE_ADDRMASK.B6;
    sbit  ADDRMASK6_TWIE_SLAVE_ADDRMASK_bit at TWIE_SLAVE_ADDRMASK.B7;
    sbit  ADDREN_TWIE_SLAVE_ADDRMASK_bit at TWIE_SLAVE_ADDRMASK.B0;

sfr data unsigned char volatile USB_CTRLA                 absolute 0x04C0;
    sbit  ENABLE_USB_CTRLA_bit at USB_CTRLA.B7;
    const register unsigned short int SPEED = 6;
    sbit  SPEED_bit at USB_CTRLA.B6;
    const register unsigned short int FIFOEN = 5;
    sbit  FIFOEN_bit at USB_CTRLA.B5;
    const register unsigned short int STFRNUM = 4;
    sbit  STFRNUM_bit at USB_CTRLA.B4;
    const register unsigned short int MAXEP0 = 0;
    sbit  MAXEP0_bit at USB_CTRLA.B0;
    const register unsigned short int MAXEP1 = 1;
    sbit  MAXEP1_bit at USB_CTRLA.B1;
    const register unsigned short int MAXEP2 = 2;
    sbit  MAXEP2_bit at USB_CTRLA.B2;
    const register unsigned short int MAXEP3 = 3;
    sbit  MAXEP3_bit at USB_CTRLA.B3;

sfr data unsigned char volatile USB_CTRLB                 absolute 0x04C1;
    const register unsigned short int PULLRST = 4;
    sbit  PULLRST_bit at USB_CTRLB.B4;
    const register unsigned short int RWAKEUP = 2;
    sbit  RWAKEUP_bit at USB_CTRLB.B2;
    const register unsigned short int GNACK = 1;
    sbit  GNACK_bit at USB_CTRLB.B1;
    const register unsigned short int ATTACH = 0;
    sbit  ATTACH_bit at USB_CTRLB.B0;

sfr data unsigned char volatile USB_STATUS                absolute 0x04C2;
    const register unsigned short int URESUME = 3;
    sbit  URESUME_bit at USB_STATUS.B3;
    const register unsigned short int RESUME_ = 2;
    sbit  RESUME_bit at USB_STATUS.B2;
    const register unsigned short int SUSPEND = 1;
    sbit  SUSPEND_bit at USB_STATUS.B1;
    const register unsigned short int BUSRST = 0;
    sbit  BUSRST_bit at USB_STATUS.B0;

sfr data unsigned char volatile USB_ADDR                  absolute 0x04C3;
    const register unsigned short int ADDR0 = 0;
    sbit  ADDR0_bit at USB_ADDR.B0;
    const register unsigned short int ADDR1 = 1;
    sbit  ADDR1_bit at USB_ADDR.B1;
    const register unsigned short int ADDR2 = 2;
    sbit  ADDR2_bit at USB_ADDR.B2;
    const register unsigned short int ADDR3 = 3;
    sbit  ADDR3_bit at USB_ADDR.B3;
    const register unsigned short int ADDR4 = 4;
    sbit  ADDR4_bit at USB_ADDR.B4;
    const register unsigned short int ADDR5 = 5;
    sbit  ADDR5_bit at USB_ADDR.B5;
    const register unsigned short int ADDR6 = 6;
    sbit  ADDR6_bit at USB_ADDR.B6;

sfr data unsigned char volatile USB_FIFOWP                absolute 0x04C4;
    const register unsigned short int FIFOWP0 = 0;
    sbit  FIFOWP0_bit at USB_FIFOWP.B0;
    const register unsigned short int FIFOWP1 = 1;
    sbit  FIFOWP1_bit at USB_FIFOWP.B1;
    const register unsigned short int FIFOWP2 = 2;
    sbit  FIFOWP2_bit at USB_FIFOWP.B2;
    const register unsigned short int FIFOWP3 = 3;
    sbit  FIFOWP3_bit at USB_FIFOWP.B3;
    const register unsigned short int FIFOWP4 = 4;
    sbit  FIFOWP4_bit at USB_FIFOWP.B4;

sfr data unsigned char volatile USB_FIFORP                absolute 0x04C5;
    const register unsigned short int FIFORP0 = 0;
    sbit  FIFORP0_bit at USB_FIFORP.B0;
    const register unsigned short int FIFORP1 = 1;
    sbit  FIFORP1_bit at USB_FIFORP.B1;
    const register unsigned short int FIFORP2 = 2;
    sbit  FIFORP2_bit at USB_FIFORP.B2;
    const register unsigned short int FIFORP3 = 3;
    sbit  FIFORP3_bit at USB_FIFORP.B3;
    const register unsigned short int FIFORP4 = 4;
    sbit  FIFORP4_bit at USB_FIFORP.B4;

sfr data unsigned int  volatile USB_EPPTR                 absolute 0x04C6;
sfr data unsigned char volatile USB_INTCTRLA              absolute 0x04C8;
    const register unsigned short int SOFIE = 7;
    sbit  SOFIE_bit at USB_INTCTRLA.B7;
    const register unsigned short int BUSEVIE = 6;
    sbit  BUSEVIE_bit at USB_INTCTRLA.B6;
    const register unsigned short int BUSERRIE = 5;
    sbit  BUSERRIE_bit at USB_INTCTRLA.B5;
    const register unsigned short int STALLIE = 4;
    sbit  STALLIE_bit at USB_INTCTRLA.B4;
    sbit  INTLVL0_USB_INTCTRLA_bit at USB_INTCTRLA.B0;
    sbit  INTLVL1_USB_INTCTRLA_bit at USB_INTCTRLA.B1;

sfr data unsigned char volatile USB_INTCTRLB              absolute 0x04C9;
    const register unsigned short int TRNIE = 1;
    sbit  TRNIE_bit at USB_INTCTRLB.B1;
    const register unsigned short int SETUPIE = 0;
    sbit  SETUPIE_bit at USB_INTCTRLB.B0;

sfr data unsigned char volatile USB_INTFLAGSACLR          absolute 0x04CA;
    const register unsigned short int SOFIF = 7;
    sbit  SOFIF_bit at USB_INTFLAGSACLR.B7;
    const register unsigned short int SUSPENDIF = 6;
    sbit  SUSPENDIF_bit at USB_INTFLAGSACLR.B6;
    const register unsigned short int RESUMEIF = 5;
    sbit  RESUMEIF_bit at USB_INTFLAGSACLR.B5;
    const register unsigned short int RSTIF = 4;
    sbit  RSTIF_bit at USB_INTFLAGSACLR.B4;
    const register unsigned short int CRCIF = 3;
    sbit  CRCIF_bit at USB_INTFLAGSACLR.B3;
    const register unsigned short int UNFIF = 2;
    sbit  UNFIF_bit at USB_INTFLAGSACLR.B2;
    sbit  OVFIF_USB_INTFLAGSACLR_bit at USB_INTFLAGSACLR.B1;
    const register unsigned short int STALLIF = 0;
    sbit  STALLIF_bit at USB_INTFLAGSACLR.B0;

sfr data unsigned char volatile USB_INTFLAGSASET          absolute 0x04CB;
    sbit  SOFIF_USB_INTFLAGSASET_bit at USB_INTFLAGSASET.B7;
    sbit  SUSPENDIF_USB_INTFLAGSASET_bit at USB_INTFLAGSASET.B6;
    sbit  RESUMEIF_USB_INTFLAGSASET_bit at USB_INTFLAGSASET.B5;
    sbit  RSTIF_USB_INTFLAGSASET_bit at USB_INTFLAGSASET.B4;
    sbit  CRCIF_USB_INTFLAGSASET_bit at USB_INTFLAGSASET.B3;
    sbit  UNFIF_USB_INTFLAGSASET_bit at USB_INTFLAGSASET.B2;
    sbit  OVFIF_USB_INTFLAGSASET_bit at USB_INTFLAGSASET.B1;
    sbit  STALLIF_USB_INTFLAGSASET_bit at USB_INTFLAGSASET.B0;

sfr data unsigned char volatile USB_INTFLAGSBCLR          absolute 0x04CC;
    sbit  TRNIF_USB_INTFLAGSBCLR_bit at USB_INTFLAGSBCLR.B1;
    const register unsigned short int SETUPIF = 0;
    sbit  SETUPIF_bit at USB_INTFLAGSBCLR.B0;

sfr data unsigned char volatile USB_INTFLAGSBSET          absolute 0x04CD;
    sbit  TRNIF_USB_INTFLAGSBSET_bit at USB_INTFLAGSBSET.B1;
    sbit  SETUPIF_USB_INTFLAGSBSET_bit at USB_INTFLAGSBSET.B0;

sfr data unsigned char volatile USB_CAL0                  absolute 0x04FA;
sfr data unsigned char volatile USB_CAL1                  absolute 0x04FB;
sfr data unsigned char volatile PORTA_DIR                 absolute 0x0600;
sfr data unsigned char volatile PORTA_DIRSET              absolute 0x0601;
sfr data unsigned char volatile PORTA_DIRCLR              absolute 0x0602;
sfr data unsigned char volatile PORTA_DIRTGL              absolute 0x0603;
sfr data unsigned char volatile PORTA_OUT                 absolute 0x0604;
sfr data unsigned char volatile PORTA_OUTSET              absolute 0x0605;
sfr data unsigned char volatile PORTA_OUTCLR              absolute 0x0606;
sfr data unsigned char volatile PORTA_OUTTGL              absolute 0x0607;
sfr data unsigned char volatile PORTA_IN                  absolute 0x0608;
sfr data unsigned char volatile PORTA_INTCTRL             absolute 0x0609;
    const register unsigned short int INT1LVL0 = 2;
    sbit  INT1LVL0_bit at PORTA_INTCTRL.B2;
    const register unsigned short int INT1LVL1 = 3;
    sbit  INT1LVL1_bit at PORTA_INTCTRL.B3;
    const register unsigned short int INT0LVL0 = 0;
    sbit  INT0LVL0_bit at PORTA_INTCTRL.B0;
    const register unsigned short int INT0LVL1 = 1;
    sbit  INT0LVL1_bit at PORTA_INTCTRL.B1;

sfr data unsigned char volatile PORTA_INT0MASK            absolute 0x060A;
sfr data unsigned char volatile PORTA_INT1MASK            absolute 0x060B;
sfr data unsigned char volatile PORTA_INTFLAGS            absolute 0x060C;
    sbit  INT1IF_PORTA_INTFLAGS_bit at PORTA_INTFLAGS.B1;
    sbit  INT0IF_PORTA_INTFLAGS_bit at PORTA_INTFLAGS.B0;

sfr data unsigned char volatile PORTA_REMAP               absolute 0x060E;
    sbit  SPI_PORTA_REMAP_bit at PORTA_REMAP.B5;
    sbit  USART0_PORTA_REMAP_bit at PORTA_REMAP.B4;
    const register unsigned short int TC0D = 3;
    sbit  TC0D_bit at PORTA_REMAP.B3;
    const register unsigned short int TC0C = 2;
    sbit  TC0C_bit at PORTA_REMAP.B2;
    const register unsigned short int TC0B = 1;
    sbit  TC0B_bit at PORTA_REMAP.B1;
    const register unsigned short int TC0A = 0;
    sbit  TC0A_bit at PORTA_REMAP.B0;

sfr data unsigned char volatile PORTA_PIN0CTRL            absolute 0x0610;
    const register unsigned short int SRLEN = 7;
    sbit  SRLEN_bit at PORTA_PIN0CTRL.B7;
    const register unsigned short int INVEN = 6;
    sbit  INVEN_bit at PORTA_PIN0CTRL.B6;
    const register unsigned short int OPC0 = 3;
    sbit  OPC0_bit at PORTA_PIN0CTRL.B3;
    const register unsigned short int OPC1 = 4;
    sbit  OPC1_bit at PORTA_PIN0CTRL.B4;
    const register unsigned short int OPC2 = 5;
    sbit  OPC2_bit at PORTA_PIN0CTRL.B5;
    const register unsigned short int ISC0 = 0;
    sbit  ISC0_bit at PORTA_PIN0CTRL.B0;
    const register unsigned short int ISC1 = 1;
    sbit  ISC1_bit at PORTA_PIN0CTRL.B1;
    const register unsigned short int ISC2 = 2;
    sbit  ISC2_bit at PORTA_PIN0CTRL.B2;

sfr data unsigned char volatile PORTA_PIN1CTRL            absolute 0x0611;
    sbit  SRLEN_PORTA_PIN1CTRL_bit at PORTA_PIN1CTRL.B7;
    sbit  INVEN_PORTA_PIN1CTRL_bit at PORTA_PIN1CTRL.B6;
    sbit  OPC0_PORTA_PIN1CTRL_bit at PORTA_PIN1CTRL.B3;
    sbit  OPC1_PORTA_PIN1CTRL_bit at PORTA_PIN1CTRL.B4;
    sbit  OPC2_PORTA_PIN1CTRL_bit at PORTA_PIN1CTRL.B5;
    sbit  ISC0_PORTA_PIN1CTRL_bit at PORTA_PIN1CTRL.B0;
    sbit  ISC1_PORTA_PIN1CTRL_bit at PORTA_PIN1CTRL.B1;
    sbit  ISC2_PORTA_PIN1CTRL_bit at PORTA_PIN1CTRL.B2;

sfr data unsigned char volatile PORTA_PIN2CTRL            absolute 0x0612;
    sbit  SRLEN_PORTA_PIN2CTRL_bit at PORTA_PIN2CTRL.B7;
    sbit  INVEN_PORTA_PIN2CTRL_bit at PORTA_PIN2CTRL.B6;
    sbit  OPC0_PORTA_PIN2CTRL_bit at PORTA_PIN2CTRL.B3;
    sbit  OPC1_PORTA_PIN2CTRL_bit at PORTA_PIN2CTRL.B4;
    sbit  OPC2_PORTA_PIN2CTRL_bit at PORTA_PIN2CTRL.B5;
    sbit  ISC0_PORTA_PIN2CTRL_bit at PORTA_PIN2CTRL.B0;
    sbit  ISC1_PORTA_PIN2CTRL_bit at PORTA_PIN2CTRL.B1;
    sbit  ISC2_PORTA_PIN2CTRL_bit at PORTA_PIN2CTRL.B2;

sfr data unsigned char volatile PORTA_PIN3CTRL            absolute 0x0613;
    sbit  SRLEN_PORTA_PIN3CTRL_bit at PORTA_PIN3CTRL.B7;
    sbit  INVEN_PORTA_PIN3CTRL_bit at PORTA_PIN3CTRL.B6;
    sbit  OPC0_PORTA_PIN3CTRL_bit at PORTA_PIN3CTRL.B3;
    sbit  OPC1_PORTA_PIN3CTRL_bit at PORTA_PIN3CTRL.B4;
    sbit  OPC2_PORTA_PIN3CTRL_bit at PORTA_PIN3CTRL.B5;
    sbit  ISC0_PORTA_PIN3CTRL_bit at PORTA_PIN3CTRL.B0;
    sbit  ISC1_PORTA_PIN3CTRL_bit at PORTA_PIN3CTRL.B1;
    sbit  ISC2_PORTA_PIN3CTRL_bit at PORTA_PIN3CTRL.B2;

sfr data unsigned char volatile PORTA_PIN4CTRL            absolute 0x0614;
    sbit  SRLEN_PORTA_PIN4CTRL_bit at PORTA_PIN4CTRL.B7;
    sbit  INVEN_PORTA_PIN4CTRL_bit at PORTA_PIN4CTRL.B6;
    sbit  OPC0_PORTA_PIN4CTRL_bit at PORTA_PIN4CTRL.B3;
    sbit  OPC1_PORTA_PIN4CTRL_bit at PORTA_PIN4CTRL.B4;
    sbit  OPC2_PORTA_PIN4CTRL_bit at PORTA_PIN4CTRL.B5;
    sbit  ISC0_PORTA_PIN4CTRL_bit at PORTA_PIN4CTRL.B0;
    sbit  ISC1_PORTA_PIN4CTRL_bit at PORTA_PIN4CTRL.B1;
    sbit  ISC2_PORTA_PIN4CTRL_bit at PORTA_PIN4CTRL.B2;

sfr data unsigned char volatile PORTA_PIN5CTRL            absolute 0x0615;
    sbit  SRLEN_PORTA_PIN5CTRL_bit at PORTA_PIN5CTRL.B7;
    sbit  INVEN_PORTA_PIN5CTRL_bit at PORTA_PIN5CTRL.B6;
    sbit  OPC0_PORTA_PIN5CTRL_bit at PORTA_PIN5CTRL.B3;
    sbit  OPC1_PORTA_PIN5CTRL_bit at PORTA_PIN5CTRL.B4;
    sbit  OPC2_PORTA_PIN5CTRL_bit at PORTA_PIN5CTRL.B5;
    sbit  ISC0_PORTA_PIN5CTRL_bit at PORTA_PIN5CTRL.B0;
    sbit  ISC1_PORTA_PIN5CTRL_bit at PORTA_PIN5CTRL.B1;
    sbit  ISC2_PORTA_PIN5CTRL_bit at PORTA_PIN5CTRL.B2;

sfr data unsigned char volatile PORTA_PIN6CTRL            absolute 0x0616;
    sbit  SRLEN_PORTA_PIN6CTRL_bit at PORTA_PIN6CTRL.B7;
    sbit  INVEN_PORTA_PIN6CTRL_bit at PORTA_PIN6CTRL.B6;
    sbit  OPC0_PORTA_PIN6CTRL_bit at PORTA_PIN6CTRL.B3;
    sbit  OPC1_PORTA_PIN6CTRL_bit at PORTA_PIN6CTRL.B4;
    sbit  OPC2_PORTA_PIN6CTRL_bit at PORTA_PIN6CTRL.B5;
    sbit  ISC0_PORTA_PIN6CTRL_bit at PORTA_PIN6CTRL.B0;
    sbit  ISC1_PORTA_PIN6CTRL_bit at PORTA_PIN6CTRL.B1;
    sbit  ISC2_PORTA_PIN6CTRL_bit at PORTA_PIN6CTRL.B2;

sfr data unsigned char volatile PORTA_PIN7CTRL            absolute 0x0617;
    sbit  SRLEN_PORTA_PIN7CTRL_bit at PORTA_PIN7CTRL.B7;
    sbit  INVEN_PORTA_PIN7CTRL_bit at PORTA_PIN7CTRL.B6;
    sbit  OPC0_PORTA_PIN7CTRL_bit at PORTA_PIN7CTRL.B3;
    sbit  OPC1_PORTA_PIN7CTRL_bit at PORTA_PIN7CTRL.B4;
    sbit  OPC2_PORTA_PIN7CTRL_bit at PORTA_PIN7CTRL.B5;
    sbit  ISC0_PORTA_PIN7CTRL_bit at PORTA_PIN7CTRL.B0;
    sbit  ISC1_PORTA_PIN7CTRL_bit at PORTA_PIN7CTRL.B1;
    sbit  ISC2_PORTA_PIN7CTRL_bit at PORTA_PIN7CTRL.B2;

sfr data unsigned char volatile PORTB_DIR                 absolute 0x0620;
sfr data unsigned char volatile PORTB_DIRSET              absolute 0x0621;
sfr data unsigned char volatile PORTB_DIRCLR              absolute 0x0622;
sfr data unsigned char volatile PORTB_DIRTGL              absolute 0x0623;
sfr data unsigned char volatile PORTB_OUT                 absolute 0x0624;
sfr data unsigned char volatile PORTB_OUTSET              absolute 0x0625;
sfr data unsigned char volatile PORTB_OUTCLR              absolute 0x0626;
sfr data unsigned char volatile PORTB_OUTTGL              absolute 0x0627;
sfr data unsigned char volatile PORTB_IN                  absolute 0x0628;
sfr data unsigned char volatile PORTB_INTCTRL             absolute 0x0629;
    sbit  INT1LVL0_PORTB_INTCTRL_bit at PORTB_INTCTRL.B2;
    sbit  INT1LVL1_PORTB_INTCTRL_bit at PORTB_INTCTRL.B3;
    sbit  INT0LVL0_PORTB_INTCTRL_bit at PORTB_INTCTRL.B0;
    sbit  INT0LVL1_PORTB_INTCTRL_bit at PORTB_INTCTRL.B1;

sfr data unsigned char volatile PORTB_INT0MASK            absolute 0x062A;
sfr data unsigned char volatile PORTB_INT1MASK            absolute 0x062B;
sfr data unsigned char volatile PORTB_INTFLAGS            absolute 0x062C;
    sbit  INT1IF_PORTB_INTFLAGS_bit at PORTB_INTFLAGS.B1;
    sbit  INT0IF_PORTB_INTFLAGS_bit at PORTB_INTFLAGS.B0;

sfr data unsigned char volatile PORTB_REMAP               absolute 0x062E;
    sbit  SPI_PORTB_REMAP_bit at PORTB_REMAP.B5;
    sbit  USART0_PORTB_REMAP_bit at PORTB_REMAP.B4;
    sbit  TC0D_PORTB_REMAP_bit at PORTB_REMAP.B3;
    sbit  TC0C_PORTB_REMAP_bit at PORTB_REMAP.B2;
    sbit  TC0B_PORTB_REMAP_bit at PORTB_REMAP.B1;
    sbit  TC0A_PORTB_REMAP_bit at PORTB_REMAP.B0;

sfr data unsigned char volatile PORTB_PIN0CTRL            absolute 0x0630;
    sbit  SRLEN_PORTB_PIN0CTRL_bit at PORTB_PIN0CTRL.B7;
    sbit  INVEN_PORTB_PIN0CTRL_bit at PORTB_PIN0CTRL.B6;
    sbit  OPC0_PORTB_PIN0CTRL_bit at PORTB_PIN0CTRL.B3;
    sbit  OPC1_PORTB_PIN0CTRL_bit at PORTB_PIN0CTRL.B4;
    sbit  OPC2_PORTB_PIN0CTRL_bit at PORTB_PIN0CTRL.B5;
    sbit  ISC0_PORTB_PIN0CTRL_bit at PORTB_PIN0CTRL.B0;
    sbit  ISC1_PORTB_PIN0CTRL_bit at PORTB_PIN0CTRL.B1;
    sbit  ISC2_PORTB_PIN0CTRL_bit at PORTB_PIN0CTRL.B2;

sfr data unsigned char volatile PORTB_PIN1CTRL            absolute 0x0631;
    sbit  SRLEN_PORTB_PIN1CTRL_bit at PORTB_PIN1CTRL.B7;
    sbit  INVEN_PORTB_PIN1CTRL_bit at PORTB_PIN1CTRL.B6;
    sbit  OPC0_PORTB_PIN1CTRL_bit at PORTB_PIN1CTRL.B3;
    sbit  OPC1_PORTB_PIN1CTRL_bit at PORTB_PIN1CTRL.B4;
    sbit  OPC2_PORTB_PIN1CTRL_bit at PORTB_PIN1CTRL.B5;
    sbit  ISC0_PORTB_PIN1CTRL_bit at PORTB_PIN1CTRL.B0;
    sbit  ISC1_PORTB_PIN1CTRL_bit at PORTB_PIN1CTRL.B1;
    sbit  ISC2_PORTB_PIN1CTRL_bit at PORTB_PIN1CTRL.B2;

sfr data unsigned char volatile PORTB_PIN2CTRL            absolute 0x0632;
    sbit  SRLEN_PORTB_PIN2CTRL_bit at PORTB_PIN2CTRL.B7;
    sbit  INVEN_PORTB_PIN2CTRL_bit at PORTB_PIN2CTRL.B6;
    sbit  OPC0_PORTB_PIN2CTRL_bit at PORTB_PIN2CTRL.B3;
    sbit  OPC1_PORTB_PIN2CTRL_bit at PORTB_PIN2CTRL.B4;
    sbit  OPC2_PORTB_PIN2CTRL_bit at PORTB_PIN2CTRL.B5;
    sbit  ISC0_PORTB_PIN2CTRL_bit at PORTB_PIN2CTRL.B0;
    sbit  ISC1_PORTB_PIN2CTRL_bit at PORTB_PIN2CTRL.B1;
    sbit  ISC2_PORTB_PIN2CTRL_bit at PORTB_PIN2CTRL.B2;

sfr data unsigned char volatile PORTB_PIN3CTRL            absolute 0x0633;
    sbit  SRLEN_PORTB_PIN3CTRL_bit at PORTB_PIN3CTRL.B7;
    sbit  INVEN_PORTB_PIN3CTRL_bit at PORTB_PIN3CTRL.B6;
    sbit  OPC0_PORTB_PIN3CTRL_bit at PORTB_PIN3CTRL.B3;
    sbit  OPC1_PORTB_PIN3CTRL_bit at PORTB_PIN3CTRL.B4;
    sbit  OPC2_PORTB_PIN3CTRL_bit at PORTB_PIN3CTRL.B5;
    sbit  ISC0_PORTB_PIN3CTRL_bit at PORTB_PIN3CTRL.B0;
    sbit  ISC1_PORTB_PIN3CTRL_bit at PORTB_PIN3CTRL.B1;
    sbit  ISC2_PORTB_PIN3CTRL_bit at PORTB_PIN3CTRL.B2;

sfr data unsigned char volatile PORTB_PIN4CTRL            absolute 0x0634;
    sbit  SRLEN_PORTB_PIN4CTRL_bit at PORTB_PIN4CTRL.B7;
    sbit  INVEN_PORTB_PIN4CTRL_bit at PORTB_PIN4CTRL.B6;
    sbit  OPC0_PORTB_PIN4CTRL_bit at PORTB_PIN4CTRL.B3;
    sbit  OPC1_PORTB_PIN4CTRL_bit at PORTB_PIN4CTRL.B4;
    sbit  OPC2_PORTB_PIN4CTRL_bit at PORTB_PIN4CTRL.B5;
    sbit  ISC0_PORTB_PIN4CTRL_bit at PORTB_PIN4CTRL.B0;
    sbit  ISC1_PORTB_PIN4CTRL_bit at PORTB_PIN4CTRL.B1;
    sbit  ISC2_PORTB_PIN4CTRL_bit at PORTB_PIN4CTRL.B2;

sfr data unsigned char volatile PORTB_PIN5CTRL            absolute 0x0635;
    sbit  SRLEN_PORTB_PIN5CTRL_bit at PORTB_PIN5CTRL.B7;
    sbit  INVEN_PORTB_PIN5CTRL_bit at PORTB_PIN5CTRL.B6;
    sbit  OPC0_PORTB_PIN5CTRL_bit at PORTB_PIN5CTRL.B3;
    sbit  OPC1_PORTB_PIN5CTRL_bit at PORTB_PIN5CTRL.B4;
    sbit  OPC2_PORTB_PIN5CTRL_bit at PORTB_PIN5CTRL.B5;
    sbit  ISC0_PORTB_PIN5CTRL_bit at PORTB_PIN5CTRL.B0;
    sbit  ISC1_PORTB_PIN5CTRL_bit at PORTB_PIN5CTRL.B1;
    sbit  ISC2_PORTB_PIN5CTRL_bit at PORTB_PIN5CTRL.B2;

sfr data unsigned char volatile PORTB_PIN6CTRL            absolute 0x0636;
    sbit  SRLEN_PORTB_PIN6CTRL_bit at PORTB_PIN6CTRL.B7;
    sbit  INVEN_PORTB_PIN6CTRL_bit at PORTB_PIN6CTRL.B6;
    sbit  OPC0_PORTB_PIN6CTRL_bit at PORTB_PIN6CTRL.B3;
    sbit  OPC1_PORTB_PIN6CTRL_bit at PORTB_PIN6CTRL.B4;
    sbit  OPC2_PORTB_PIN6CTRL_bit at PORTB_PIN6CTRL.B5;
    sbit  ISC0_PORTB_PIN6CTRL_bit at PORTB_PIN6CTRL.B0;
    sbit  ISC1_PORTB_PIN6CTRL_bit at PORTB_PIN6CTRL.B1;
    sbit  ISC2_PORTB_PIN6CTRL_bit at PORTB_PIN6CTRL.B2;

sfr data unsigned char volatile PORTB_PIN7CTRL            absolute 0x0637;
    sbit  SRLEN_PORTB_PIN7CTRL_bit at PORTB_PIN7CTRL.B7;
    sbit  INVEN_PORTB_PIN7CTRL_bit at PORTB_PIN7CTRL.B6;
    sbit  OPC0_PORTB_PIN7CTRL_bit at PORTB_PIN7CTRL.B3;
    sbit  OPC1_PORTB_PIN7CTRL_bit at PORTB_PIN7CTRL.B4;
    sbit  OPC2_PORTB_PIN7CTRL_bit at PORTB_PIN7CTRL.B5;
    sbit  ISC0_PORTB_PIN7CTRL_bit at PORTB_PIN7CTRL.B0;
    sbit  ISC1_PORTB_PIN7CTRL_bit at PORTB_PIN7CTRL.B1;
    sbit  ISC2_PORTB_PIN7CTRL_bit at PORTB_PIN7CTRL.B2;

sfr data unsigned char volatile PORTC_DIR                 absolute 0x0640;
sfr data unsigned char volatile PORTC_DIRSET              absolute 0x0641;
sfr data unsigned char volatile PORTC_DIRCLR              absolute 0x0642;
sfr data unsigned char volatile PORTC_DIRTGL              absolute 0x0643;
sfr data unsigned char volatile PORTC_OUT                 absolute 0x0644;
sfr data unsigned char volatile PORTC_OUTSET              absolute 0x0645;
sfr data unsigned char volatile PORTC_OUTCLR              absolute 0x0646;
sfr data unsigned char volatile PORTC_OUTTGL              absolute 0x0647;
sfr data unsigned char volatile PORTC_IN                  absolute 0x0648;
sfr data unsigned char volatile PORTC_INTCTRL             absolute 0x0649;
    sbit  INT1LVL0_PORTC_INTCTRL_bit at PORTC_INTCTRL.B2;
    sbit  INT1LVL1_PORTC_INTCTRL_bit at PORTC_INTCTRL.B3;
    sbit  INT0LVL0_PORTC_INTCTRL_bit at PORTC_INTCTRL.B0;
    sbit  INT0LVL1_PORTC_INTCTRL_bit at PORTC_INTCTRL.B1;

sfr data unsigned char volatile PORTC_INT0MASK            absolute 0x064A;
sfr data unsigned char volatile PORTC_INT1MASK            absolute 0x064B;
sfr data unsigned char volatile PORTC_INTFLAGS            absolute 0x064C;
    sbit  INT1IF_PORTC_INTFLAGS_bit at PORTC_INTFLAGS.B1;
    sbit  INT0IF_PORTC_INTFLAGS_bit at PORTC_INTFLAGS.B0;

sfr data unsigned char volatile PORTC_REMAP               absolute 0x064E;
    sbit  SPI_PORTC_REMAP_bit at PORTC_REMAP.B5;
    sbit  USART0_PORTC_REMAP_bit at PORTC_REMAP.B4;
    sbit  TC0D_PORTC_REMAP_bit at PORTC_REMAP.B3;
    sbit  TC0C_PORTC_REMAP_bit at PORTC_REMAP.B2;
    sbit  TC0B_PORTC_REMAP_bit at PORTC_REMAP.B1;
    sbit  TC0A_PORTC_REMAP_bit at PORTC_REMAP.B0;

sfr data unsigned char volatile PORTC_PIN0CTRL            absolute 0x0650;
    sbit  SRLEN_PORTC_PIN0CTRL_bit at PORTC_PIN0CTRL.B7;
    sbit  INVEN_PORTC_PIN0CTRL_bit at PORTC_PIN0CTRL.B6;
    sbit  OPC0_PORTC_PIN0CTRL_bit at PORTC_PIN0CTRL.B3;
    sbit  OPC1_PORTC_PIN0CTRL_bit at PORTC_PIN0CTRL.B4;
    sbit  OPC2_PORTC_PIN0CTRL_bit at PORTC_PIN0CTRL.B5;
    sbit  ISC0_PORTC_PIN0CTRL_bit at PORTC_PIN0CTRL.B0;
    sbit  ISC1_PORTC_PIN0CTRL_bit at PORTC_PIN0CTRL.B1;
    sbit  ISC2_PORTC_PIN0CTRL_bit at PORTC_PIN0CTRL.B2;

sfr data unsigned char volatile PORTC_PIN1CTRL            absolute 0x0651;
    sbit  SRLEN_PORTC_PIN1CTRL_bit at PORTC_PIN1CTRL.B7;
    sbit  INVEN_PORTC_PIN1CTRL_bit at PORTC_PIN1CTRL.B6;
    sbit  OPC0_PORTC_PIN1CTRL_bit at PORTC_PIN1CTRL.B3;
    sbit  OPC1_PORTC_PIN1CTRL_bit at PORTC_PIN1CTRL.B4;
    sbit  OPC2_PORTC_PIN1CTRL_bit at PORTC_PIN1CTRL.B5;
    sbit  ISC0_PORTC_PIN1CTRL_bit at PORTC_PIN1CTRL.B0;
    sbit  ISC1_PORTC_PIN1CTRL_bit at PORTC_PIN1CTRL.B1;
    sbit  ISC2_PORTC_PIN1CTRL_bit at PORTC_PIN1CTRL.B2;

sfr data unsigned char volatile PORTC_PIN2CTRL            absolute 0x0652;
    sbit  SRLEN_PORTC_PIN2CTRL_bit at PORTC_PIN2CTRL.B7;
    sbit  INVEN_PORTC_PIN2CTRL_bit at PORTC_PIN2CTRL.B6;
    sbit  OPC0_PORTC_PIN2CTRL_bit at PORTC_PIN2CTRL.B3;
    sbit  OPC1_PORTC_PIN2CTRL_bit at PORTC_PIN2CTRL.B4;
    sbit  OPC2_PORTC_PIN2CTRL_bit at PORTC_PIN2CTRL.B5;
    sbit  ISC0_PORTC_PIN2CTRL_bit at PORTC_PIN2CTRL.B0;
    sbit  ISC1_PORTC_PIN2CTRL_bit at PORTC_PIN2CTRL.B1;
    sbit  ISC2_PORTC_PIN2CTRL_bit at PORTC_PIN2CTRL.B2;

sfr data unsigned char volatile PORTC_PIN3CTRL            absolute 0x0653;
    sbit  SRLEN_PORTC_PIN3CTRL_bit at PORTC_PIN3CTRL.B7;
    sbit  INVEN_PORTC_PIN3CTRL_bit at PORTC_PIN3CTRL.B6;
    sbit  OPC0_PORTC_PIN3CTRL_bit at PORTC_PIN3CTRL.B3;
    sbit  OPC1_PORTC_PIN3CTRL_bit at PORTC_PIN3CTRL.B4;
    sbit  OPC2_PORTC_PIN3CTRL_bit at PORTC_PIN3CTRL.B5;
    sbit  ISC0_PORTC_PIN3CTRL_bit at PORTC_PIN3CTRL.B0;
    sbit  ISC1_PORTC_PIN3CTRL_bit at PORTC_PIN3CTRL.B1;
    sbit  ISC2_PORTC_PIN3CTRL_bit at PORTC_PIN3CTRL.B2;

sfr data unsigned char volatile PORTC_PIN4CTRL            absolute 0x0654;
    sbit  SRLEN_PORTC_PIN4CTRL_bit at PORTC_PIN4CTRL.B7;
    sbit  INVEN_PORTC_PIN4CTRL_bit at PORTC_PIN4CTRL.B6;
    sbit  OPC0_PORTC_PIN4CTRL_bit at PORTC_PIN4CTRL.B3;
    sbit  OPC1_PORTC_PIN4CTRL_bit at PORTC_PIN4CTRL.B4;
    sbit  OPC2_PORTC_PIN4CTRL_bit at PORTC_PIN4CTRL.B5;
    sbit  ISC0_PORTC_PIN4CTRL_bit at PORTC_PIN4CTRL.B0;
    sbit  ISC1_PORTC_PIN4CTRL_bit at PORTC_PIN4CTRL.B1;
    sbit  ISC2_PORTC_PIN4CTRL_bit at PORTC_PIN4CTRL.B2;

sfr data unsigned char volatile PORTC_PIN5CTRL            absolute 0x0655;
    sbit  SRLEN_PORTC_PIN5CTRL_bit at PORTC_PIN5CTRL.B7;
    sbit  INVEN_PORTC_PIN5CTRL_bit at PORTC_PIN5CTRL.B6;
    sbit  OPC0_PORTC_PIN5CTRL_bit at PORTC_PIN5CTRL.B3;
    sbit  OPC1_PORTC_PIN5CTRL_bit at PORTC_PIN5CTRL.B4;
    sbit  OPC2_PORTC_PIN5CTRL_bit at PORTC_PIN5CTRL.B5;
    sbit  ISC0_PORTC_PIN5CTRL_bit at PORTC_PIN5CTRL.B0;
    sbit  ISC1_PORTC_PIN5CTRL_bit at PORTC_PIN5CTRL.B1;
    sbit  ISC2_PORTC_PIN5CTRL_bit at PORTC_PIN5CTRL.B2;

sfr data unsigned char volatile PORTC_PIN6CTRL            absolute 0x0656;
    sbit  SRLEN_PORTC_PIN6CTRL_bit at PORTC_PIN6CTRL.B7;
    sbit  INVEN_PORTC_PIN6CTRL_bit at PORTC_PIN6CTRL.B6;
    sbit  OPC0_PORTC_PIN6CTRL_bit at PORTC_PIN6CTRL.B3;
    sbit  OPC1_PORTC_PIN6CTRL_bit at PORTC_PIN6CTRL.B4;
    sbit  OPC2_PORTC_PIN6CTRL_bit at PORTC_PIN6CTRL.B5;
    sbit  ISC0_PORTC_PIN6CTRL_bit at PORTC_PIN6CTRL.B0;
    sbit  ISC1_PORTC_PIN6CTRL_bit at PORTC_PIN6CTRL.B1;
    sbit  ISC2_PORTC_PIN6CTRL_bit at PORTC_PIN6CTRL.B2;

sfr data unsigned char volatile PORTC_PIN7CTRL            absolute 0x0657;
    sbit  SRLEN_PORTC_PIN7CTRL_bit at PORTC_PIN7CTRL.B7;
    sbit  INVEN_PORTC_PIN7CTRL_bit at PORTC_PIN7CTRL.B6;
    sbit  OPC0_PORTC_PIN7CTRL_bit at PORTC_PIN7CTRL.B3;
    sbit  OPC1_PORTC_PIN7CTRL_bit at PORTC_PIN7CTRL.B4;
    sbit  OPC2_PORTC_PIN7CTRL_bit at PORTC_PIN7CTRL.B5;
    sbit  ISC0_PORTC_PIN7CTRL_bit at PORTC_PIN7CTRL.B0;
    sbit  ISC1_PORTC_PIN7CTRL_bit at PORTC_PIN7CTRL.B1;
    sbit  ISC2_PORTC_PIN7CTRL_bit at PORTC_PIN7CTRL.B2;

sfr data unsigned char volatile PORTD_DIR                 absolute 0x0660;
sfr data unsigned char volatile PORTD_DIRSET              absolute 0x0661;
sfr data unsigned char volatile PORTD_DIRCLR              absolute 0x0662;
sfr data unsigned char volatile PORTD_DIRTGL              absolute 0x0663;
sfr data unsigned char volatile PORTD_OUT                 absolute 0x0664;
sfr data unsigned char volatile PORTD_OUTSET              absolute 0x0665;
sfr data unsigned char volatile PORTD_OUTCLR              absolute 0x0666;
sfr data unsigned char volatile PORTD_OUTTGL              absolute 0x0667;
sfr data unsigned char volatile PORTD_IN                  absolute 0x0668;
sfr data unsigned char volatile PORTD_INTCTRL             absolute 0x0669;
    sbit  INT1LVL0_PORTD_INTCTRL_bit at PORTD_INTCTRL.B2;
    sbit  INT1LVL1_PORTD_INTCTRL_bit at PORTD_INTCTRL.B3;
    sbit  INT0LVL0_PORTD_INTCTRL_bit at PORTD_INTCTRL.B0;
    sbit  INT0LVL1_PORTD_INTCTRL_bit at PORTD_INTCTRL.B1;

sfr data unsigned char volatile PORTD_INT0MASK            absolute 0x066A;
sfr data unsigned char volatile PORTD_INT1MASK            absolute 0x066B;
sfr data unsigned char volatile PORTD_INTFLAGS            absolute 0x066C;
    sbit  INT1IF_PORTD_INTFLAGS_bit at PORTD_INTFLAGS.B1;
    sbit  INT0IF_PORTD_INTFLAGS_bit at PORTD_INTFLAGS.B0;

sfr data unsigned char volatile PORTD_REMAP               absolute 0x066E;
    sbit  SPI_PORTD_REMAP_bit at PORTD_REMAP.B5;
    sbit  USART0_PORTD_REMAP_bit at PORTD_REMAP.B4;
    sbit  TC0D_PORTD_REMAP_bit at PORTD_REMAP.B3;
    sbit  TC0C_PORTD_REMAP_bit at PORTD_REMAP.B2;
    sbit  TC0B_PORTD_REMAP_bit at PORTD_REMAP.B1;
    sbit  TC0A_PORTD_REMAP_bit at PORTD_REMAP.B0;

sfr data unsigned char volatile PORTD_PIN0CTRL            absolute 0x0670;
    sbit  SRLEN_PORTD_PIN0CTRL_bit at PORTD_PIN0CTRL.B7;
    sbit  INVEN_PORTD_PIN0CTRL_bit at PORTD_PIN0CTRL.B6;
    sbit  OPC0_PORTD_PIN0CTRL_bit at PORTD_PIN0CTRL.B3;
    sbit  OPC1_PORTD_PIN0CTRL_bit at PORTD_PIN0CTRL.B4;
    sbit  OPC2_PORTD_PIN0CTRL_bit at PORTD_PIN0CTRL.B5;
    sbit  ISC0_PORTD_PIN0CTRL_bit at PORTD_PIN0CTRL.B0;
    sbit  ISC1_PORTD_PIN0CTRL_bit at PORTD_PIN0CTRL.B1;
    sbit  ISC2_PORTD_PIN0CTRL_bit at PORTD_PIN0CTRL.B2;

sfr data unsigned char volatile PORTD_PIN1CTRL            absolute 0x0671;
    sbit  SRLEN_PORTD_PIN1CTRL_bit at PORTD_PIN1CTRL.B7;
    sbit  INVEN_PORTD_PIN1CTRL_bit at PORTD_PIN1CTRL.B6;
    sbit  OPC0_PORTD_PIN1CTRL_bit at PORTD_PIN1CTRL.B3;
    sbit  OPC1_PORTD_PIN1CTRL_bit at PORTD_PIN1CTRL.B4;
    sbit  OPC2_PORTD_PIN1CTRL_bit at PORTD_PIN1CTRL.B5;
    sbit  ISC0_PORTD_PIN1CTRL_bit at PORTD_PIN1CTRL.B0;
    sbit  ISC1_PORTD_PIN1CTRL_bit at PORTD_PIN1CTRL.B1;
    sbit  ISC2_PORTD_PIN1CTRL_bit at PORTD_PIN1CTRL.B2;

sfr data unsigned char volatile PORTD_PIN2CTRL            absolute 0x0672;
    sbit  SRLEN_PORTD_PIN2CTRL_bit at PORTD_PIN2CTRL.B7;
    sbit  INVEN_PORTD_PIN2CTRL_bit at PORTD_PIN2CTRL.B6;
    sbit  OPC0_PORTD_PIN2CTRL_bit at PORTD_PIN2CTRL.B3;
    sbit  OPC1_PORTD_PIN2CTRL_bit at PORTD_PIN2CTRL.B4;
    sbit  OPC2_PORTD_PIN2CTRL_bit at PORTD_PIN2CTRL.B5;
    sbit  ISC0_PORTD_PIN2CTRL_bit at PORTD_PIN2CTRL.B0;
    sbit  ISC1_PORTD_PIN2CTRL_bit at PORTD_PIN2CTRL.B1;
    sbit  ISC2_PORTD_PIN2CTRL_bit at PORTD_PIN2CTRL.B2;

sfr data unsigned char volatile PORTD_PIN3CTRL            absolute 0x0673;
    sbit  SRLEN_PORTD_PIN3CTRL_bit at PORTD_PIN3CTRL.B7;
    sbit  INVEN_PORTD_PIN3CTRL_bit at PORTD_PIN3CTRL.B6;
    sbit  OPC0_PORTD_PIN3CTRL_bit at PORTD_PIN3CTRL.B3;
    sbit  OPC1_PORTD_PIN3CTRL_bit at PORTD_PIN3CTRL.B4;
    sbit  OPC2_PORTD_PIN3CTRL_bit at PORTD_PIN3CTRL.B5;
    sbit  ISC0_PORTD_PIN3CTRL_bit at PORTD_PIN3CTRL.B0;
    sbit  ISC1_PORTD_PIN3CTRL_bit at PORTD_PIN3CTRL.B1;
    sbit  ISC2_PORTD_PIN3CTRL_bit at PORTD_PIN3CTRL.B2;

sfr data unsigned char volatile PORTD_PIN4CTRL            absolute 0x0674;
    sbit  SRLEN_PORTD_PIN4CTRL_bit at PORTD_PIN4CTRL.B7;
    sbit  INVEN_PORTD_PIN4CTRL_bit at PORTD_PIN4CTRL.B6;
    sbit  OPC0_PORTD_PIN4CTRL_bit at PORTD_PIN4CTRL.B3;
    sbit  OPC1_PORTD_PIN4CTRL_bit at PORTD_PIN4CTRL.B4;
    sbit  OPC2_PORTD_PIN4CTRL_bit at PORTD_PIN4CTRL.B5;
    sbit  ISC0_PORTD_PIN4CTRL_bit at PORTD_PIN4CTRL.B0;
    sbit  ISC1_PORTD_PIN4CTRL_bit at PORTD_PIN4CTRL.B1;
    sbit  ISC2_PORTD_PIN4CTRL_bit at PORTD_PIN4CTRL.B2;

sfr data unsigned char volatile PORTD_PIN5CTRL            absolute 0x0675;
    sbit  SRLEN_PORTD_PIN5CTRL_bit at PORTD_PIN5CTRL.B7;
    sbit  INVEN_PORTD_PIN5CTRL_bit at PORTD_PIN5CTRL.B6;
    sbit  OPC0_PORTD_PIN5CTRL_bit at PORTD_PIN5CTRL.B3;
    sbit  OPC1_PORTD_PIN5CTRL_bit at PORTD_PIN5CTRL.B4;
    sbit  OPC2_PORTD_PIN5CTRL_bit at PORTD_PIN5CTRL.B5;
    sbit  ISC0_PORTD_PIN5CTRL_bit at PORTD_PIN5CTRL.B0;
    sbit  ISC1_PORTD_PIN5CTRL_bit at PORTD_PIN5CTRL.B1;
    sbit  ISC2_PORTD_PIN5CTRL_bit at PORTD_PIN5CTRL.B2;

sfr data unsigned char volatile PORTD_PIN6CTRL            absolute 0x0676;
    sbit  SRLEN_PORTD_PIN6CTRL_bit at PORTD_PIN6CTRL.B7;
    sbit  INVEN_PORTD_PIN6CTRL_bit at PORTD_PIN6CTRL.B6;
    sbit  OPC0_PORTD_PIN6CTRL_bit at PORTD_PIN6CTRL.B3;
    sbit  OPC1_PORTD_PIN6CTRL_bit at PORTD_PIN6CTRL.B4;
    sbit  OPC2_PORTD_PIN6CTRL_bit at PORTD_PIN6CTRL.B5;
    sbit  ISC0_PORTD_PIN6CTRL_bit at PORTD_PIN6CTRL.B0;
    sbit  ISC1_PORTD_PIN6CTRL_bit at PORTD_PIN6CTRL.B1;
    sbit  ISC2_PORTD_PIN6CTRL_bit at PORTD_PIN6CTRL.B2;

sfr data unsigned char volatile PORTD_PIN7CTRL            absolute 0x0677;
    sbit  SRLEN_PORTD_PIN7CTRL_bit at PORTD_PIN7CTRL.B7;
    sbit  INVEN_PORTD_PIN7CTRL_bit at PORTD_PIN7CTRL.B6;
    sbit  OPC0_PORTD_PIN7CTRL_bit at PORTD_PIN7CTRL.B3;
    sbit  OPC1_PORTD_PIN7CTRL_bit at PORTD_PIN7CTRL.B4;
    sbit  OPC2_PORTD_PIN7CTRL_bit at PORTD_PIN7CTRL.B5;
    sbit  ISC0_PORTD_PIN7CTRL_bit at PORTD_PIN7CTRL.B0;
    sbit  ISC1_PORTD_PIN7CTRL_bit at PORTD_PIN7CTRL.B1;
    sbit  ISC2_PORTD_PIN7CTRL_bit at PORTD_PIN7CTRL.B2;

sfr data unsigned char volatile PORTE_DIR                 absolute 0x0680;
sfr data unsigned char volatile PORTE_DIRSET              absolute 0x0681;
sfr data unsigned char volatile PORTE_DIRCLR              absolute 0x0682;
sfr data unsigned char volatile PORTE_DIRTGL              absolute 0x0683;
sfr data unsigned char volatile PORTE_OUT                 absolute 0x0684;
sfr data unsigned char volatile PORTE_OUTSET              absolute 0x0685;
sfr data unsigned char volatile PORTE_OUTCLR              absolute 0x0686;
sfr data unsigned char volatile PORTE_OUTTGL              absolute 0x0687;
sfr data unsigned char volatile PORTE_IN                  absolute 0x0688;
sfr data unsigned char volatile PORTE_INTCTRL             absolute 0x0689;
    sbit  INT1LVL0_PORTE_INTCTRL_bit at PORTE_INTCTRL.B2;
    sbit  INT1LVL1_PORTE_INTCTRL_bit at PORTE_INTCTRL.B3;
    sbit  INT0LVL0_PORTE_INTCTRL_bit at PORTE_INTCTRL.B0;
    sbit  INT0LVL1_PORTE_INTCTRL_bit at PORTE_INTCTRL.B1;

sfr data unsigned char volatile PORTE_INT0MASK            absolute 0x068A;
sfr data unsigned char volatile PORTE_INT1MASK            absolute 0x068B;
sfr data unsigned char volatile PORTE_INTFLAGS            absolute 0x068C;
    sbit  INT1IF_PORTE_INTFLAGS_bit at PORTE_INTFLAGS.B1;
    sbit  INT0IF_PORTE_INTFLAGS_bit at PORTE_INTFLAGS.B0;

sfr data unsigned char volatile PORTE_REMAP               absolute 0x068E;
    sbit  SPI_PORTE_REMAP_bit at PORTE_REMAP.B5;
    sbit  USART0_PORTE_REMAP_bit at PORTE_REMAP.B4;
    sbit  TC0D_PORTE_REMAP_bit at PORTE_REMAP.B3;
    sbit  TC0C_PORTE_REMAP_bit at PORTE_REMAP.B2;
    sbit  TC0B_PORTE_REMAP_bit at PORTE_REMAP.B1;
    sbit  TC0A_PORTE_REMAP_bit at PORTE_REMAP.B0;

sfr data unsigned char volatile PORTE_PIN0CTRL            absolute 0x0690;
    sbit  SRLEN_PORTE_PIN0CTRL_bit at PORTE_PIN0CTRL.B7;
    sbit  INVEN_PORTE_PIN0CTRL_bit at PORTE_PIN0CTRL.B6;
    sbit  OPC0_PORTE_PIN0CTRL_bit at PORTE_PIN0CTRL.B3;
    sbit  OPC1_PORTE_PIN0CTRL_bit at PORTE_PIN0CTRL.B4;
    sbit  OPC2_PORTE_PIN0CTRL_bit at PORTE_PIN0CTRL.B5;
    sbit  ISC0_PORTE_PIN0CTRL_bit at PORTE_PIN0CTRL.B0;
    sbit  ISC1_PORTE_PIN0CTRL_bit at PORTE_PIN0CTRL.B1;
    sbit  ISC2_PORTE_PIN0CTRL_bit at PORTE_PIN0CTRL.B2;

sfr data unsigned char volatile PORTE_PIN1CTRL            absolute 0x0691;
    sbit  SRLEN_PORTE_PIN1CTRL_bit at PORTE_PIN1CTRL.B7;
    sbit  INVEN_PORTE_PIN1CTRL_bit at PORTE_PIN1CTRL.B6;
    sbit  OPC0_PORTE_PIN1CTRL_bit at PORTE_PIN1CTRL.B3;
    sbit  OPC1_PORTE_PIN1CTRL_bit at PORTE_PIN1CTRL.B4;
    sbit  OPC2_PORTE_PIN1CTRL_bit at PORTE_PIN1CTRL.B5;
    sbit  ISC0_PORTE_PIN1CTRL_bit at PORTE_PIN1CTRL.B0;
    sbit  ISC1_PORTE_PIN1CTRL_bit at PORTE_PIN1CTRL.B1;
    sbit  ISC2_PORTE_PIN1CTRL_bit at PORTE_PIN1CTRL.B2;

sfr data unsigned char volatile PORTE_PIN2CTRL            absolute 0x0692;
    sbit  SRLEN_PORTE_PIN2CTRL_bit at PORTE_PIN2CTRL.B7;
    sbit  INVEN_PORTE_PIN2CTRL_bit at PORTE_PIN2CTRL.B6;
    sbit  OPC0_PORTE_PIN2CTRL_bit at PORTE_PIN2CTRL.B3;
    sbit  OPC1_PORTE_PIN2CTRL_bit at PORTE_PIN2CTRL.B4;
    sbit  OPC2_PORTE_PIN2CTRL_bit at PORTE_PIN2CTRL.B5;
    sbit  ISC0_PORTE_PIN2CTRL_bit at PORTE_PIN2CTRL.B0;
    sbit  ISC1_PORTE_PIN2CTRL_bit at PORTE_PIN2CTRL.B1;
    sbit  ISC2_PORTE_PIN2CTRL_bit at PORTE_PIN2CTRL.B2;

sfr data unsigned char volatile PORTE_PIN3CTRL            absolute 0x0693;
    sbit  SRLEN_PORTE_PIN3CTRL_bit at PORTE_PIN3CTRL.B7;
    sbit  INVEN_PORTE_PIN3CTRL_bit at PORTE_PIN3CTRL.B6;
    sbit  OPC0_PORTE_PIN3CTRL_bit at PORTE_PIN3CTRL.B3;
    sbit  OPC1_PORTE_PIN3CTRL_bit at PORTE_PIN3CTRL.B4;
    sbit  OPC2_PORTE_PIN3CTRL_bit at PORTE_PIN3CTRL.B5;
    sbit  ISC0_PORTE_PIN3CTRL_bit at PORTE_PIN3CTRL.B0;
    sbit  ISC1_PORTE_PIN3CTRL_bit at PORTE_PIN3CTRL.B1;
    sbit  ISC2_PORTE_PIN3CTRL_bit at PORTE_PIN3CTRL.B2;

sfr data unsigned char volatile PORTE_PIN4CTRL            absolute 0x0694;
    sbit  SRLEN_PORTE_PIN4CTRL_bit at PORTE_PIN4CTRL.B7;
    sbit  INVEN_PORTE_PIN4CTRL_bit at PORTE_PIN4CTRL.B6;
    sbit  OPC0_PORTE_PIN4CTRL_bit at PORTE_PIN4CTRL.B3;
    sbit  OPC1_PORTE_PIN4CTRL_bit at PORTE_PIN4CTRL.B4;
    sbit  OPC2_PORTE_PIN4CTRL_bit at PORTE_PIN4CTRL.B5;
    sbit  ISC0_PORTE_PIN4CTRL_bit at PORTE_PIN4CTRL.B0;
    sbit  ISC1_PORTE_PIN4CTRL_bit at PORTE_PIN4CTRL.B1;
    sbit  ISC2_PORTE_PIN4CTRL_bit at PORTE_PIN4CTRL.B2;

sfr data unsigned char volatile PORTE_PIN5CTRL            absolute 0x0695;
    sbit  SRLEN_PORTE_PIN5CTRL_bit at PORTE_PIN5CTRL.B7;
    sbit  INVEN_PORTE_PIN5CTRL_bit at PORTE_PIN5CTRL.B6;
    sbit  OPC0_PORTE_PIN5CTRL_bit at PORTE_PIN5CTRL.B3;
    sbit  OPC1_PORTE_PIN5CTRL_bit at PORTE_PIN5CTRL.B4;
    sbit  OPC2_PORTE_PIN5CTRL_bit at PORTE_PIN5CTRL.B5;
    sbit  ISC0_PORTE_PIN5CTRL_bit at PORTE_PIN5CTRL.B0;
    sbit  ISC1_PORTE_PIN5CTRL_bit at PORTE_PIN5CTRL.B1;
    sbit  ISC2_PORTE_PIN5CTRL_bit at PORTE_PIN5CTRL.B2;

sfr data unsigned char volatile PORTE_PIN6CTRL            absolute 0x0696;
    sbit  SRLEN_PORTE_PIN6CTRL_bit at PORTE_PIN6CTRL.B7;
    sbit  INVEN_PORTE_PIN6CTRL_bit at PORTE_PIN6CTRL.B6;
    sbit  OPC0_PORTE_PIN6CTRL_bit at PORTE_PIN6CTRL.B3;
    sbit  OPC1_PORTE_PIN6CTRL_bit at PORTE_PIN6CTRL.B4;
    sbit  OPC2_PORTE_PIN6CTRL_bit at PORTE_PIN6CTRL.B5;
    sbit  ISC0_PORTE_PIN6CTRL_bit at PORTE_PIN6CTRL.B0;
    sbit  ISC1_PORTE_PIN6CTRL_bit at PORTE_PIN6CTRL.B1;
    sbit  ISC2_PORTE_PIN6CTRL_bit at PORTE_PIN6CTRL.B2;

sfr data unsigned char volatile PORTE_PIN7CTRL            absolute 0x0697;
    sbit  SRLEN_PORTE_PIN7CTRL_bit at PORTE_PIN7CTRL.B7;
    sbit  INVEN_PORTE_PIN7CTRL_bit at PORTE_PIN7CTRL.B6;
    sbit  OPC0_PORTE_PIN7CTRL_bit at PORTE_PIN7CTRL.B3;
    sbit  OPC1_PORTE_PIN7CTRL_bit at PORTE_PIN7CTRL.B4;
    sbit  OPC2_PORTE_PIN7CTRL_bit at PORTE_PIN7CTRL.B5;
    sbit  ISC0_PORTE_PIN7CTRL_bit at PORTE_PIN7CTRL.B0;
    sbit  ISC1_PORTE_PIN7CTRL_bit at PORTE_PIN7CTRL.B1;
    sbit  ISC2_PORTE_PIN7CTRL_bit at PORTE_PIN7CTRL.B2;

sfr data unsigned char volatile PORTR_DIR                 absolute 0x07E0;
sfr data unsigned char volatile PORTR_DIRSET              absolute 0x07E1;
sfr data unsigned char volatile PORTR_DIRCLR              absolute 0x07E2;
sfr data unsigned char volatile PORTR_DIRTGL              absolute 0x07E3;
sfr data unsigned char volatile PORTR_OUT                 absolute 0x07E4;
sfr data unsigned char volatile PORTR_OUTSET              absolute 0x07E5;
sfr data unsigned char volatile PORTR_OUTCLR              absolute 0x07E6;
sfr data unsigned char volatile PORTR_OUTTGL              absolute 0x07E7;
sfr data unsigned char volatile PORTR_IN                  absolute 0x07E8;
sfr data unsigned char volatile PORTR_INTCTRL             absolute 0x07E9;
    sbit  INT1LVL0_PORTR_INTCTRL_bit at PORTR_INTCTRL.B2;
    sbit  INT1LVL1_PORTR_INTCTRL_bit at PORTR_INTCTRL.B3;
    sbit  INT0LVL0_PORTR_INTCTRL_bit at PORTR_INTCTRL.B0;
    sbit  INT0LVL1_PORTR_INTCTRL_bit at PORTR_INTCTRL.B1;

sfr data unsigned char volatile PORTR_INT0MASK            absolute 0x07EA;
sfr data unsigned char volatile PORTR_INT1MASK            absolute 0x07EB;
sfr data unsigned char volatile PORTR_INTFLAGS            absolute 0x07EC;
    sbit  INT1IF_PORTR_INTFLAGS_bit at PORTR_INTFLAGS.B1;
    sbit  INT0IF_PORTR_INTFLAGS_bit at PORTR_INTFLAGS.B0;

sfr data unsigned char volatile PORTR_REMAP               absolute 0x07EE;
    sbit  SPI_PORTR_REMAP_bit at PORTR_REMAP.B5;
    sbit  USART0_PORTR_REMAP_bit at PORTR_REMAP.B4;
    sbit  TC0D_PORTR_REMAP_bit at PORTR_REMAP.B3;
    sbit  TC0C_PORTR_REMAP_bit at PORTR_REMAP.B2;
    sbit  TC0B_PORTR_REMAP_bit at PORTR_REMAP.B1;
    sbit  TC0A_PORTR_REMAP_bit at PORTR_REMAP.B0;

sfr data unsigned char volatile PORTR_PIN0CTRL            absolute 0x07F0;
    sbit  SRLEN_PORTR_PIN0CTRL_bit at PORTR_PIN0CTRL.B7;
    sbit  INVEN_PORTR_PIN0CTRL_bit at PORTR_PIN0CTRL.B6;
    sbit  OPC0_PORTR_PIN0CTRL_bit at PORTR_PIN0CTRL.B3;
    sbit  OPC1_PORTR_PIN0CTRL_bit at PORTR_PIN0CTRL.B4;
    sbit  OPC2_PORTR_PIN0CTRL_bit at PORTR_PIN0CTRL.B5;
    sbit  ISC0_PORTR_PIN0CTRL_bit at PORTR_PIN0CTRL.B0;
    sbit  ISC1_PORTR_PIN0CTRL_bit at PORTR_PIN0CTRL.B1;
    sbit  ISC2_PORTR_PIN0CTRL_bit at PORTR_PIN0CTRL.B2;

sfr data unsigned char volatile PORTR_PIN1CTRL            absolute 0x07F1;
    sbit  SRLEN_PORTR_PIN1CTRL_bit at PORTR_PIN1CTRL.B7;
    sbit  INVEN_PORTR_PIN1CTRL_bit at PORTR_PIN1CTRL.B6;
    sbit  OPC0_PORTR_PIN1CTRL_bit at PORTR_PIN1CTRL.B3;
    sbit  OPC1_PORTR_PIN1CTRL_bit at PORTR_PIN1CTRL.B4;
    sbit  OPC2_PORTR_PIN1CTRL_bit at PORTR_PIN1CTRL.B5;
    sbit  ISC0_PORTR_PIN1CTRL_bit at PORTR_PIN1CTRL.B0;
    sbit  ISC1_PORTR_PIN1CTRL_bit at PORTR_PIN1CTRL.B1;
    sbit  ISC2_PORTR_PIN1CTRL_bit at PORTR_PIN1CTRL.B2;

sfr data unsigned char volatile PORTR_PIN2CTRL            absolute 0x07F2;
    sbit  SRLEN_PORTR_PIN2CTRL_bit at PORTR_PIN2CTRL.B7;
    sbit  INVEN_PORTR_PIN2CTRL_bit at PORTR_PIN2CTRL.B6;
    sbit  OPC0_PORTR_PIN2CTRL_bit at PORTR_PIN2CTRL.B3;
    sbit  OPC1_PORTR_PIN2CTRL_bit at PORTR_PIN2CTRL.B4;
    sbit  OPC2_PORTR_PIN2CTRL_bit at PORTR_PIN2CTRL.B5;
    sbit  ISC0_PORTR_PIN2CTRL_bit at PORTR_PIN2CTRL.B0;
    sbit  ISC1_PORTR_PIN2CTRL_bit at PORTR_PIN2CTRL.B1;
    sbit  ISC2_PORTR_PIN2CTRL_bit at PORTR_PIN2CTRL.B2;

sfr data unsigned char volatile PORTR_PIN3CTRL            absolute 0x07F3;
    sbit  SRLEN_PORTR_PIN3CTRL_bit at PORTR_PIN3CTRL.B7;
    sbit  INVEN_PORTR_PIN3CTRL_bit at PORTR_PIN3CTRL.B6;
    sbit  OPC0_PORTR_PIN3CTRL_bit at PORTR_PIN3CTRL.B3;
    sbit  OPC1_PORTR_PIN3CTRL_bit at PORTR_PIN3CTRL.B4;
    sbit  OPC2_PORTR_PIN3CTRL_bit at PORTR_PIN3CTRL.B5;
    sbit  ISC0_PORTR_PIN3CTRL_bit at PORTR_PIN3CTRL.B0;
    sbit  ISC1_PORTR_PIN3CTRL_bit at PORTR_PIN3CTRL.B1;
    sbit  ISC2_PORTR_PIN3CTRL_bit at PORTR_PIN3CTRL.B2;

sfr data unsigned char volatile PORTR_PIN4CTRL            absolute 0x07F4;
    sbit  SRLEN_PORTR_PIN4CTRL_bit at PORTR_PIN4CTRL.B7;
    sbit  INVEN_PORTR_PIN4CTRL_bit at PORTR_PIN4CTRL.B6;
    sbit  OPC0_PORTR_PIN4CTRL_bit at PORTR_PIN4CTRL.B3;
    sbit  OPC1_PORTR_PIN4CTRL_bit at PORTR_PIN4CTRL.B4;
    sbit  OPC2_PORTR_PIN4CTRL_bit at PORTR_PIN4CTRL.B5;
    sbit  ISC0_PORTR_PIN4CTRL_bit at PORTR_PIN4CTRL.B0;
    sbit  ISC1_PORTR_PIN4CTRL_bit at PORTR_PIN4CTRL.B1;
    sbit  ISC2_PORTR_PIN4CTRL_bit at PORTR_PIN4CTRL.B2;

sfr data unsigned char volatile PORTR_PIN5CTRL            absolute 0x07F5;
    sbit  SRLEN_PORTR_PIN5CTRL_bit at PORTR_PIN5CTRL.B7;
    sbit  INVEN_PORTR_PIN5CTRL_bit at PORTR_PIN5CTRL.B6;
    sbit  OPC0_PORTR_PIN5CTRL_bit at PORTR_PIN5CTRL.B3;
    sbit  OPC1_PORTR_PIN5CTRL_bit at PORTR_PIN5CTRL.B4;
    sbit  OPC2_PORTR_PIN5CTRL_bit at PORTR_PIN5CTRL.B5;
    sbit  ISC0_PORTR_PIN5CTRL_bit at PORTR_PIN5CTRL.B0;
    sbit  ISC1_PORTR_PIN5CTRL_bit at PORTR_PIN5CTRL.B1;
    sbit  ISC2_PORTR_PIN5CTRL_bit at PORTR_PIN5CTRL.B2;

sfr data unsigned char volatile PORTR_PIN6CTRL            absolute 0x07F6;
    sbit  SRLEN_PORTR_PIN6CTRL_bit at PORTR_PIN6CTRL.B7;
    sbit  INVEN_PORTR_PIN6CTRL_bit at PORTR_PIN6CTRL.B6;
    sbit  OPC0_PORTR_PIN6CTRL_bit at PORTR_PIN6CTRL.B3;
    sbit  OPC1_PORTR_PIN6CTRL_bit at PORTR_PIN6CTRL.B4;
    sbit  OPC2_PORTR_PIN6CTRL_bit at PORTR_PIN6CTRL.B5;
    sbit  ISC0_PORTR_PIN6CTRL_bit at PORTR_PIN6CTRL.B0;
    sbit  ISC1_PORTR_PIN6CTRL_bit at PORTR_PIN6CTRL.B1;
    sbit  ISC2_PORTR_PIN6CTRL_bit at PORTR_PIN6CTRL.B2;

sfr data unsigned char volatile PORTR_PIN7CTRL            absolute 0x07F7;
    sbit  SRLEN_PORTR_PIN7CTRL_bit at PORTR_PIN7CTRL.B7;
    sbit  INVEN_PORTR_PIN7CTRL_bit at PORTR_PIN7CTRL.B6;
    sbit  OPC0_PORTR_PIN7CTRL_bit at PORTR_PIN7CTRL.B3;
    sbit  OPC1_PORTR_PIN7CTRL_bit at PORTR_PIN7CTRL.B4;
    sbit  OPC2_PORTR_PIN7CTRL_bit at PORTR_PIN7CTRL.B5;
    sbit  ISC0_PORTR_PIN7CTRL_bit at PORTR_PIN7CTRL.B0;
    sbit  ISC1_PORTR_PIN7CTRL_bit at PORTR_PIN7CTRL.B1;
    sbit  ISC2_PORTR_PIN7CTRL_bit at PORTR_PIN7CTRL.B2;

sfr data unsigned char volatile TCC0_CTRLA                absolute 0x0800;
    const register unsigned short int CLKSEL0 = 0;
    sbit  CLKSEL0_bit at TCC0_CTRLA.B0;
    const register unsigned short int CLKSEL1 = 1;
    sbit  CLKSEL1_bit at TCC0_CTRLA.B1;
    const register unsigned short int CLKSEL2 = 2;
    sbit  CLKSEL2_bit at TCC0_CTRLA.B2;
    const register unsigned short int CLKSEL3 = 3;
    sbit  CLKSEL3_bit at TCC0_CTRLA.B3;

sfr data unsigned char volatile TCC0_CTRLB                absolute 0x0801;
    const register unsigned short int CCDEN = 7;
    sbit  CCDEN_bit at TCC0_CTRLB.B7;
    const register unsigned short int CCCEN = 6;
    sbit  CCCEN_bit at TCC0_CTRLB.B6;
    const register unsigned short int CCBEN = 5;
    sbit  CCBEN_bit at TCC0_CTRLB.B5;
    const register unsigned short int CCAEN = 4;
    sbit  CCAEN_bit at TCC0_CTRLB.B4;
    const register unsigned short int WGMODE0 = 0;
    sbit  WGMODE0_bit at TCC0_CTRLB.B0;
    const register unsigned short int WGMODE1 = 1;
    sbit  WGMODE1_bit at TCC0_CTRLB.B1;
    const register unsigned short int WGMODE2 = 2;
    sbit  WGMODE2_bit at TCC0_CTRLB.B2;

sfr data unsigned char volatile TCC0_CTRLC                absolute 0x0802;
    const register unsigned short int CMPD = 3;
    sbit  CMPD_bit at TCC0_CTRLC.B3;
    const register unsigned short int CMPC = 2;
    sbit  CMPC_bit at TCC0_CTRLC.B2;
    const register unsigned short int CMPB = 1;
    sbit  CMPB_bit at TCC0_CTRLC.B1;
    const register unsigned short int CMPA = 0;
    sbit  CMPA_bit at TCC0_CTRLC.B0;

sfr data unsigned char volatile TCC0_CTRLD                absolute 0x0803;
    sbit  EVACT0_TCC0_CTRLD_bit at TCC0_CTRLD.B5;
    sbit  EVACT1_TCC0_CTRLD_bit at TCC0_CTRLD.B6;
    sbit  EVACT2_TCC0_CTRLD_bit at TCC0_CTRLD.B7;
    const register unsigned short int EVDLY = 4;
    sbit  EVDLY_bit at TCC0_CTRLD.B4;
    sbit  EVSEL0_TCC0_CTRLD_bit at TCC0_CTRLD.B0;
    sbit  EVSEL1_TCC0_CTRLD_bit at TCC0_CTRLD.B1;
    sbit  EVSEL2_TCC0_CTRLD_bit at TCC0_CTRLD.B2;
    const register unsigned short int EVSEL3 = 3;
    sbit  EVSEL3_bit at TCC0_CTRLD.B3;

sfr data unsigned char volatile TCC0_CTRLE                absolute 0x0804;
    const register unsigned short int BYTEM0 = 0;
    sbit  BYTEM0_bit at TCC0_CTRLE.B0;
    const register unsigned short int BYTEM1 = 1;
    sbit  BYTEM1_bit at TCC0_CTRLE.B1;

sfr data unsigned char volatile TCC0_INTCTRLA             absolute 0x0806;
    sbit  ERRINTLVL0_TCC0_INTCTRLA_bit at TCC0_INTCTRLA.B2;
    sbit  ERRINTLVL1_TCC0_INTCTRLA_bit at TCC0_INTCTRLA.B3;
    sbit  OVFINTLVL0_TCC0_INTCTRLA_bit at TCC0_INTCTRLA.B0;
    sbit  OVFINTLVL1_TCC0_INTCTRLA_bit at TCC0_INTCTRLA.B1;

sfr data unsigned char volatile TCC0_INTCTRLB             absolute 0x0807;
    const register unsigned short int CCDINTLVL0 = 6;
    sbit  CCDINTLVL0_bit at TCC0_INTCTRLB.B6;
    const register unsigned short int CCDINTLVL1 = 7;
    sbit  CCDINTLVL1_bit at TCC0_INTCTRLB.B7;
    const register unsigned short int CCCINTLVL0 = 4;
    sbit  CCCINTLVL0_bit at TCC0_INTCTRLB.B4;
    const register unsigned short int CCCINTLVL1 = 5;
    sbit  CCCINTLVL1_bit at TCC0_INTCTRLB.B5;
    const register unsigned short int CCBINTLVL0 = 2;
    sbit  CCBINTLVL0_bit at TCC0_INTCTRLB.B2;
    const register unsigned short int CCBINTLVL1 = 3;
    sbit  CCBINTLVL1_bit at TCC0_INTCTRLB.B3;
    const register unsigned short int CCAINTLVL0 = 0;
    sbit  CCAINTLVL0_bit at TCC0_INTCTRLB.B0;
    const register unsigned short int CCAINTLVL1 = 1;
    sbit  CCAINTLVL1_bit at TCC0_INTCTRLB.B1;

sfr data unsigned char volatile TCC0_CTRLFCLR             absolute 0x0808;
    sbit  CMD0_TCC0_CTRLFCLR_bit at TCC0_CTRLFCLR.B2;
    sbit  CMD1_TCC0_CTRLFCLR_bit at TCC0_CTRLFCLR.B3;
    const register unsigned short int LUPD = 1;
    sbit  LUPD_bit at TCC0_CTRLFCLR.B1;
    sbit  DIR__TCC0_CTRLFCLR_bit at TCC0_CTRLFCLR.B0;

sfr data unsigned char volatile TCC0_CTRLFSET             absolute 0x0809;
    sbit  CMD0_TCC0_CTRLFSET_bit at TCC0_CTRLFSET.B2;
    sbit  CMD1_TCC0_CTRLFSET_bit at TCC0_CTRLFSET.B3;
    sbit  LUPD_TCC0_CTRLFSET_bit at TCC0_CTRLFSET.B1;
    sbit  DIR__TCC0_CTRLFSET_bit at TCC0_CTRLFSET.B0;

sfr data unsigned char volatile TCC0_CTRLGCLR             absolute 0x080A;
    const register unsigned short int CCDBV = 4;
    sbit  CCDBV_bit at TCC0_CTRLGCLR.B4;
    const register unsigned short int CCCBV = 3;
    sbit  CCCBV_bit at TCC0_CTRLGCLR.B3;
    const register unsigned short int CCBBV = 2;
    sbit  CCBBV_bit at TCC0_CTRLGCLR.B2;
    const register unsigned short int CCABV = 1;
    sbit  CCABV_bit at TCC0_CTRLGCLR.B1;
    const register unsigned short int PERBV = 0;
    sbit  PERBV_bit at TCC0_CTRLGCLR.B0;

sfr data unsigned char volatile TCC0_CTRLGSET             absolute 0x080B;
    sbit  CCDBV_TCC0_CTRLGSET_bit at TCC0_CTRLGSET.B4;
    sbit  CCCBV_TCC0_CTRLGSET_bit at TCC0_CTRLGSET.B3;
    sbit  CCBBV_TCC0_CTRLGSET_bit at TCC0_CTRLGSET.B2;
    sbit  CCABV_TCC0_CTRLGSET_bit at TCC0_CTRLGSET.B1;
    sbit  PERBV_TCC0_CTRLGSET_bit at TCC0_CTRLGSET.B0;

sfr data unsigned char volatile TCC0_INTFLAGS             absolute 0x080C;
    const register unsigned short int CCDIF = 7;
    sbit  CCDIF_bit at TCC0_INTFLAGS.B7;
    const register unsigned short int CCCIF = 6;
    sbit  CCCIF_bit at TCC0_INTFLAGS.B6;
    const register unsigned short int CCBIF = 5;
    sbit  CCBIF_bit at TCC0_INTFLAGS.B5;
    const register unsigned short int CCAIF = 4;
    sbit  CCAIF_bit at TCC0_INTFLAGS.B4;
    sbit  ERRIF_TCC0_INTFLAGS_bit at TCC0_INTFLAGS.B1;
    sbit  OVFIF_TCC0_INTFLAGS_bit at TCC0_INTFLAGS.B0;

sfr data unsigned char volatile TCC0_TEMP                 absolute 0x080F;
sfr data unsigned int  volatile TCC0_CNT                  absolute 0x0820;
sfr data unsigned int  volatile TCC0_PER                  absolute 0x0826;
sfr data unsigned char volatile TCC0_PERL                 absolute 0x0826;
sfr data unsigned char volatile TCC0_PERH                 absolute 0x0827;
sfr data unsigned int  volatile TCC0_CCA                  absolute 0x0828;
sfr data unsigned char volatile TCC0_CCAL                 absolute 0x0828;
sfr data unsigned char volatile TCC0_CCAH                 absolute 0x0829;
sfr data unsigned int  volatile TCC0_CCB                  absolute 0x082A;
sfr data unsigned char volatile TCC0_CCBL                 absolute 0x082A;
sfr data unsigned char volatile TCC0_CCBH                 absolute 0x082B;
sfr data unsigned int  volatile TCC0_CCC                  absolute 0x082C;
sfr data unsigned char volatile TCC0_CCCL                 absolute 0x082C;
sfr data unsigned char volatile TCC0_CCCH                 absolute 0x082D;
sfr data unsigned int  volatile TCC0_CCD                  absolute 0x082E;
sfr data unsigned char volatile TCC0_CCDL                 absolute 0x082E;
sfr data unsigned char volatile TCC0_CCDH                 absolute 0x082F;
sfr data unsigned int  volatile TCC0_PERBUF               absolute 0x0836;
sfr data unsigned char volatile TCC0_PERBUFL              absolute 0x0836;
sfr data unsigned char volatile TCC0_PERBUFH              absolute 0x0837;
sfr data unsigned int  volatile TCC0_CCABUF               absolute 0x0838;
sfr data unsigned char volatile TCC0_CCABUFL              absolute 0x0838;
sfr data unsigned char volatile TCC0_CCABUFH              absolute 0x0839;
sfr data unsigned int  volatile TCC0_CCBBUF               absolute 0x083A;
sfr data unsigned char volatile TCC0_CCBBUFL              absolute 0x083A;
sfr data unsigned char volatile TCC0_CCBBUFH              absolute 0x083B;
sfr data unsigned int  volatile TCC0_CCCBUF               absolute 0x083C;
sfr data unsigned char volatile TCC0_CCCBUFL              absolute 0x083C;
sfr data unsigned char volatile TCC0_CCCBUFH              absolute 0x083D;
sfr data unsigned int  volatile TCC0_CCDBUF               absolute 0x083E;
sfr data unsigned char volatile TCC0_CCDBUFL              absolute 0x083E;
sfr data unsigned char volatile TCC0_CCDBUFH              absolute 0x083F;
sfr data unsigned char volatile TCC1_CTRLA                absolute 0x0840;
    sbit  CLKSEL0_TCC1_CTRLA_bit at TCC1_CTRLA.B0;
    sbit  CLKSEL1_TCC1_CTRLA_bit at TCC1_CTRLA.B1;
    sbit  CLKSEL2_TCC1_CTRLA_bit at TCC1_CTRLA.B2;
    sbit  CLKSEL3_TCC1_CTRLA_bit at TCC1_CTRLA.B3;

sfr data unsigned char volatile TCC1_CTRLB                absolute 0x0841;
    sbit  CCBEN_TCC1_CTRLB_bit at TCC1_CTRLB.B5;
    sbit  CCAEN_TCC1_CTRLB_bit at TCC1_CTRLB.B4;
    sbit  WGMODE0_TCC1_CTRLB_bit at TCC1_CTRLB.B0;
    sbit  WGMODE1_TCC1_CTRLB_bit at TCC1_CTRLB.B1;
    sbit  WGMODE2_TCC1_CTRLB_bit at TCC1_CTRLB.B2;

sfr data unsigned char volatile TCC1_CTRLC                absolute 0x0842;
    sbit  CMPB_TCC1_CTRLC_bit at TCC1_CTRLC.B1;
    sbit  CMPA_TCC1_CTRLC_bit at TCC1_CTRLC.B0;

sfr data unsigned char volatile TCC1_CTRLD                absolute 0x0843;
    sbit  EVACT0_TCC1_CTRLD_bit at TCC1_CTRLD.B5;
    sbit  EVACT1_TCC1_CTRLD_bit at TCC1_CTRLD.B6;
    sbit  EVACT2_TCC1_CTRLD_bit at TCC1_CTRLD.B7;
    sbit  EVDLY_TCC1_CTRLD_bit at TCC1_CTRLD.B4;
    sbit  EVSEL0_TCC1_CTRLD_bit at TCC1_CTRLD.B0;
    sbit  EVSEL1_TCC1_CTRLD_bit at TCC1_CTRLD.B1;
    sbit  EVSEL2_TCC1_CTRLD_bit at TCC1_CTRLD.B2;
    sbit  EVSEL3_TCC1_CTRLD_bit at TCC1_CTRLD.B3;

sfr data unsigned char volatile TCC1_CTRLE                absolute 0x0844;
    const register unsigned short int BYTEM = 0;
    sbit  BYTEM_bit at TCC1_CTRLE.B0;

sfr data unsigned char volatile TCC1_INTCTRLA             absolute 0x0846;
    sbit  ERRINTLVL0_TCC1_INTCTRLA_bit at TCC1_INTCTRLA.B2;
    sbit  ERRINTLVL1_TCC1_INTCTRLA_bit at TCC1_INTCTRLA.B3;
    sbit  OVFINTLVL0_TCC1_INTCTRLA_bit at TCC1_INTCTRLA.B0;
    sbit  OVFINTLVL1_TCC1_INTCTRLA_bit at TCC1_INTCTRLA.B1;

sfr data unsigned char volatile TCC1_INTCTRLB             absolute 0x0847;
    sbit  CCBINTLVL0_TCC1_INTCTRLB_bit at TCC1_INTCTRLB.B2;
    sbit  CCBINTLVL1_TCC1_INTCTRLB_bit at TCC1_INTCTRLB.B3;
    sbit  CCAINTLVL0_TCC1_INTCTRLB_bit at TCC1_INTCTRLB.B0;
    sbit  CCAINTLVL1_TCC1_INTCTRLB_bit at TCC1_INTCTRLB.B1;

sfr data unsigned char volatile TCC1_CTRLFCLR             absolute 0x0848;
    sbit  CMD0_TCC1_CTRLFCLR_bit at TCC1_CTRLFCLR.B2;
    sbit  CMD1_TCC1_CTRLFCLR_bit at TCC1_CTRLFCLR.B3;
    sbit  LUPD_TCC1_CTRLFCLR_bit at TCC1_CTRLFCLR.B1;
    sbit  DIR__TCC1_CTRLFCLR_bit at TCC1_CTRLFCLR.B0;

sfr data unsigned char volatile TCC1_CTRLFSET             absolute 0x0849;
    sbit  CMD0_TCC1_CTRLFSET_bit at TCC1_CTRLFSET.B2;
    sbit  CMD1_TCC1_CTRLFSET_bit at TCC1_CTRLFSET.B3;
    sbit  LUPD_TCC1_CTRLFSET_bit at TCC1_CTRLFSET.B1;
    sbit  DIR__TCC1_CTRLFSET_bit at TCC1_CTRLFSET.B0;

sfr data unsigned char volatile TCC1_CTRLGCLR             absolute 0x084A;
    sbit  CCBBV_TCC1_CTRLGCLR_bit at TCC1_CTRLGCLR.B2;
    sbit  CCABV_TCC1_CTRLGCLR_bit at TCC1_CTRLGCLR.B1;
    sbit  PERBV_TCC1_CTRLGCLR_bit at TCC1_CTRLGCLR.B0;

sfr data unsigned char volatile TCC1_CTRLGSET             absolute 0x084B;
    sbit  CCBBV_TCC1_CTRLGSET_bit at TCC1_CTRLGSET.B2;
    sbit  CCABV_TCC1_CTRLGSET_bit at TCC1_CTRLGSET.B1;
    sbit  PERBV_TCC1_CTRLGSET_bit at TCC1_CTRLGSET.B0;

sfr data unsigned char volatile TCC1_INTFLAGS             absolute 0x084C;
    sbit  CCBIF_TCC1_INTFLAGS_bit at TCC1_INTFLAGS.B5;
    sbit  CCAIF_TCC1_INTFLAGS_bit at TCC1_INTFLAGS.B4;
    sbit  ERRIF_TCC1_INTFLAGS_bit at TCC1_INTFLAGS.B1;
    sbit  OVFIF_TCC1_INTFLAGS_bit at TCC1_INTFLAGS.B0;

sfr data unsigned char volatile TCC1_TEMP                 absolute 0x084F;
sfr data unsigned int  volatile TCC1_CNT                  absolute 0x0860;
sfr data unsigned int  volatile TCC1_PER                  absolute 0x0866;
sfr data unsigned char volatile TCC1_PERL                 absolute 0x0866;
sfr data unsigned char volatile TCC1_PERH                 absolute 0x0867;
sfr data unsigned int  volatile TCC1_CCA                  absolute 0x0868;
sfr data unsigned char volatile TCC1_CCAL                 absolute 0x0868;
sfr data unsigned char volatile TCC1_CCAH                 absolute 0x0869;
sfr data unsigned int  volatile TCC1_CCB                  absolute 0x086A;
sfr data unsigned char volatile TCC1_CCBL                 absolute 0x086A;
sfr data unsigned char volatile TCC1_CCBH                 absolute 0x086B;
sfr data unsigned int  volatile TCC1_PERBUF               absolute 0x0876;
sfr data unsigned char volatile TCC1_PERBUFL              absolute 0x0876;
sfr data unsigned char volatile TCC1_PERBUFH              absolute 0x0877;
sfr data unsigned int  volatile TCC1_CCABUF               absolute 0x0878;
sfr data unsigned char volatile TCC1_CCABUFL              absolute 0x0878;
sfr data unsigned char volatile TCC1_CCABUFH              absolute 0x0879;
sfr data unsigned int  volatile TCC1_CCBBUF               absolute 0x087A;
sfr data unsigned char volatile TCC1_CCBBUFL              absolute 0x087A;
sfr data unsigned char volatile TCC1_CCBBUFH              absolute 0x087B;
sfr data unsigned char volatile TCD0_CTRLA                absolute 0x0900;
    sbit  CLKSEL0_TCD0_CTRLA_bit at TCD0_CTRLA.B0;
    sbit  CLKSEL1_TCD0_CTRLA_bit at TCD0_CTRLA.B1;
    sbit  CLKSEL2_TCD0_CTRLA_bit at TCD0_CTRLA.B2;
    sbit  CLKSEL3_TCD0_CTRLA_bit at TCD0_CTRLA.B3;

sfr data unsigned char volatile TCD0_CTRLB                absolute 0x0901;
    sbit  CCDEN_TCD0_CTRLB_bit at TCD0_CTRLB.B7;
    sbit  CCCEN_TCD0_CTRLB_bit at TCD0_CTRLB.B6;
    sbit  CCBEN_TCD0_CTRLB_bit at TCD0_CTRLB.B5;
    sbit  CCAEN_TCD0_CTRLB_bit at TCD0_CTRLB.B4;
    sbit  WGMODE0_TCD0_CTRLB_bit at TCD0_CTRLB.B0;
    sbit  WGMODE1_TCD0_CTRLB_bit at TCD0_CTRLB.B1;
    sbit  WGMODE2_TCD0_CTRLB_bit at TCD0_CTRLB.B2;

sfr data unsigned char volatile TCD0_CTRLC                absolute 0x0902;
    sbit  CMPD_TCD0_CTRLC_bit at TCD0_CTRLC.B3;
    sbit  CMPC_TCD0_CTRLC_bit at TCD0_CTRLC.B2;
    sbit  CMPB_TCD0_CTRLC_bit at TCD0_CTRLC.B1;
    sbit  CMPA_TCD0_CTRLC_bit at TCD0_CTRLC.B0;

sfr data unsigned char volatile TCD0_CTRLD                absolute 0x0903;
    sbit  EVACT0_TCD0_CTRLD_bit at TCD0_CTRLD.B5;
    sbit  EVACT1_TCD0_CTRLD_bit at TCD0_CTRLD.B6;
    sbit  EVACT2_TCD0_CTRLD_bit at TCD0_CTRLD.B7;
    sbit  EVDLY_TCD0_CTRLD_bit at TCD0_CTRLD.B4;
    sbit  EVSEL0_TCD0_CTRLD_bit at TCD0_CTRLD.B0;
    sbit  EVSEL1_TCD0_CTRLD_bit at TCD0_CTRLD.B1;
    sbit  EVSEL2_TCD0_CTRLD_bit at TCD0_CTRLD.B2;
    sbit  EVSEL3_TCD0_CTRLD_bit at TCD0_CTRLD.B3;

sfr data unsigned char volatile TCD0_CTRLE                absolute 0x0904;
    sbit  BYTEM0_TCD0_CTRLE_bit at TCD0_CTRLE.B0;
    sbit  BYTEM1_TCD0_CTRLE_bit at TCD0_CTRLE.B1;

sfr data unsigned char volatile TCD0_INTCTRLA             absolute 0x0906;
    sbit  ERRINTLVL0_TCD0_INTCTRLA_bit at TCD0_INTCTRLA.B2;
    sbit  ERRINTLVL1_TCD0_INTCTRLA_bit at TCD0_INTCTRLA.B3;
    sbit  OVFINTLVL0_TCD0_INTCTRLA_bit at TCD0_INTCTRLA.B0;
    sbit  OVFINTLVL1_TCD0_INTCTRLA_bit at TCD0_INTCTRLA.B1;

sfr data unsigned char volatile TCD0_INTCTRLB             absolute 0x0907;
    sbit  CCDINTLVL0_TCD0_INTCTRLB_bit at TCD0_INTCTRLB.B6;
    sbit  CCDINTLVL1_TCD0_INTCTRLB_bit at TCD0_INTCTRLB.B7;
    sbit  CCCINTLVL0_TCD0_INTCTRLB_bit at TCD0_INTCTRLB.B4;
    sbit  CCCINTLVL1_TCD0_INTCTRLB_bit at TCD0_INTCTRLB.B5;
    sbit  CCBINTLVL0_TCD0_INTCTRLB_bit at TCD0_INTCTRLB.B2;
    sbit  CCBINTLVL1_TCD0_INTCTRLB_bit at TCD0_INTCTRLB.B3;
    sbit  CCAINTLVL0_TCD0_INTCTRLB_bit at TCD0_INTCTRLB.B0;
    sbit  CCAINTLVL1_TCD0_INTCTRLB_bit at TCD0_INTCTRLB.B1;

sfr data unsigned char volatile TCD0_CTRLFCLR             absolute 0x0908;
    sbit  CMD0_TCD0_CTRLFCLR_bit at TCD0_CTRLFCLR.B2;
    sbit  CMD1_TCD0_CTRLFCLR_bit at TCD0_CTRLFCLR.B3;
    sbit  LUPD_TCD0_CTRLFCLR_bit at TCD0_CTRLFCLR.B1;
    sbit  DIR__TCD0_CTRLFCLR_bit at TCD0_CTRLFCLR.B0;

sfr data unsigned char volatile TCD0_CTRLFSET             absolute 0x0909;
    sbit  CMD0_TCD0_CTRLFSET_bit at TCD0_CTRLFSET.B2;
    sbit  CMD1_TCD0_CTRLFSET_bit at TCD0_CTRLFSET.B3;
    sbit  LUPD_TCD0_CTRLFSET_bit at TCD0_CTRLFSET.B1;
    sbit  DIR__TCD0_CTRLFSET_bit at TCD0_CTRLFSET.B0;

sfr data unsigned char volatile TCD0_CTRLGCLR             absolute 0x090A;
    sbit  CCDBV_TCD0_CTRLGCLR_bit at TCD0_CTRLGCLR.B4;
    sbit  CCCBV_TCD0_CTRLGCLR_bit at TCD0_CTRLGCLR.B3;
    sbit  CCBBV_TCD0_CTRLGCLR_bit at TCD0_CTRLGCLR.B2;
    sbit  CCABV_TCD0_CTRLGCLR_bit at TCD0_CTRLGCLR.B1;
    sbit  PERBV_TCD0_CTRLGCLR_bit at TCD0_CTRLGCLR.B0;

sfr data unsigned char volatile TCD0_CTRLGSET             absolute 0x090B;
    sbit  CCDBV_TCD0_CTRLGSET_bit at TCD0_CTRLGSET.B4;
    sbit  CCCBV_TCD0_CTRLGSET_bit at TCD0_CTRLGSET.B3;
    sbit  CCBBV_TCD0_CTRLGSET_bit at TCD0_CTRLGSET.B2;
    sbit  CCABV_TCD0_CTRLGSET_bit at TCD0_CTRLGSET.B1;
    sbit  PERBV_TCD0_CTRLGSET_bit at TCD0_CTRLGSET.B0;

sfr data unsigned char volatile TCD0_INTFLAGS             absolute 0x090C;
    sbit  CCDIF_TCD0_INTFLAGS_bit at TCD0_INTFLAGS.B7;
    sbit  CCCIF_TCD0_INTFLAGS_bit at TCD0_INTFLAGS.B6;
    sbit  CCBIF_TCD0_INTFLAGS_bit at TCD0_INTFLAGS.B5;
    sbit  CCAIF_TCD0_INTFLAGS_bit at TCD0_INTFLAGS.B4;
    sbit  ERRIF_TCD0_INTFLAGS_bit at TCD0_INTFLAGS.B1;
    sbit  OVFIF_TCD0_INTFLAGS_bit at TCD0_INTFLAGS.B0;

sfr data unsigned char volatile TCD0_TEMP                 absolute 0x090F;
sfr data unsigned int  volatile TCD0_CNT                  absolute 0x0920;
sfr data unsigned int  volatile TCD0_PER                  absolute 0x0926;
sfr data unsigned char volatile TCD0_PERL                 absolute 0x0926;
sfr data unsigned char volatile TCD0_PERH                 absolute 0x0927;
sfr data unsigned int  volatile TCD0_CCA                  absolute 0x0928;
sfr data unsigned char volatile TCD0_CCAL                 absolute 0x0928;
sfr data unsigned char volatile TCD0_CCAH                 absolute 0x0929;
sfr data unsigned int  volatile TCD0_CCB                  absolute 0x092A;
sfr data unsigned char volatile TCD0_CCBL                 absolute 0x092A;
sfr data unsigned char volatile TCD0_CCBH                 absolute 0x092B;
sfr data unsigned int  volatile TCD0_CCC                  absolute 0x092C;
sfr data unsigned char volatile TCD0_CCCL                 absolute 0x092C;
sfr data unsigned char volatile TCD0_CCCH                 absolute 0x092D;
sfr data unsigned int  volatile TCD0_CCD                  absolute 0x092E;
sfr data unsigned char volatile TCD0_CCDL                 absolute 0x092E;
sfr data unsigned char volatile TCD0_CCDH                 absolute 0x092F;
sfr data unsigned int  volatile TCD0_PERBUF               absolute 0x0936;
sfr data unsigned char volatile TCD0_PERBUFL              absolute 0x0936;
sfr data unsigned char volatile TCD0_PERBUFH              absolute 0x0937;
sfr data unsigned int  volatile TCD0_CCABUF               absolute 0x0938;
sfr data unsigned char volatile TCD0_CCABUFL              absolute 0x0938;
sfr data unsigned char volatile TCD0_CCABUFH              absolute 0x0939;
sfr data unsigned int  volatile TCD0_CCBBUF               absolute 0x093A;
sfr data unsigned char volatile TCD0_CCBBUFL              absolute 0x093A;
sfr data unsigned char volatile TCD0_CCBBUFH              absolute 0x093B;
sfr data unsigned int  volatile TCD0_CCCBUF               absolute 0x093C;
sfr data unsigned char volatile TCD0_CCCBUFL              absolute 0x093C;
sfr data unsigned char volatile TCD0_CCCBUFH              absolute 0x093D;
sfr data unsigned int  volatile TCD0_CCDBUF               absolute 0x093E;
sfr data unsigned char volatile TCD0_CCDBUFL              absolute 0x093E;
sfr data unsigned char volatile TCD0_CCDBUFH              absolute 0x093F;
sfr data unsigned char volatile TCD1_CTRLA                absolute 0x0940;
    sbit  CLKSEL0_TCD1_CTRLA_bit at TCD1_CTRLA.B0;
    sbit  CLKSEL1_TCD1_CTRLA_bit at TCD1_CTRLA.B1;
    sbit  CLKSEL2_TCD1_CTRLA_bit at TCD1_CTRLA.B2;
    sbit  CLKSEL3_TCD1_CTRLA_bit at TCD1_CTRLA.B3;

sfr data unsigned char volatile TCD1_CTRLB                absolute 0x0941;
    sbit  CCBEN_TCD1_CTRLB_bit at TCD1_CTRLB.B5;
    sbit  CCAEN_TCD1_CTRLB_bit at TCD1_CTRLB.B4;
    sbit  WGMODE0_TCD1_CTRLB_bit at TCD1_CTRLB.B0;
    sbit  WGMODE1_TCD1_CTRLB_bit at TCD1_CTRLB.B1;
    sbit  WGMODE2_TCD1_CTRLB_bit at TCD1_CTRLB.B2;

sfr data unsigned char volatile TCD1_CTRLC                absolute 0x0942;
    sbit  CMPB_TCD1_CTRLC_bit at TCD1_CTRLC.B1;
    sbit  CMPA_TCD1_CTRLC_bit at TCD1_CTRLC.B0;

sfr data unsigned char volatile TCD1_CTRLD                absolute 0x0943;
    sbit  EVACT0_TCD1_CTRLD_bit at TCD1_CTRLD.B5;
    sbit  EVACT1_TCD1_CTRLD_bit at TCD1_CTRLD.B6;
    sbit  EVACT2_TCD1_CTRLD_bit at TCD1_CTRLD.B7;
    sbit  EVDLY_TCD1_CTRLD_bit at TCD1_CTRLD.B4;
    sbit  EVSEL0_TCD1_CTRLD_bit at TCD1_CTRLD.B0;
    sbit  EVSEL1_TCD1_CTRLD_bit at TCD1_CTRLD.B1;
    sbit  EVSEL2_TCD1_CTRLD_bit at TCD1_CTRLD.B2;
    sbit  EVSEL3_TCD1_CTRLD_bit at TCD1_CTRLD.B3;

sfr data unsigned char volatile TCD1_CTRLE                absolute 0x0944;
    sbit  BYTEM_TCD1_CTRLE_bit at TCD1_CTRLE.B0;

sfr data unsigned char volatile TCD1_INTCTRLA             absolute 0x0946;
    sbit  ERRINTLVL0_TCD1_INTCTRLA_bit at TCD1_INTCTRLA.B2;
    sbit  ERRINTLVL1_TCD1_INTCTRLA_bit at TCD1_INTCTRLA.B3;
    sbit  OVFINTLVL0_TCD1_INTCTRLA_bit at TCD1_INTCTRLA.B0;
    sbit  OVFINTLVL1_TCD1_INTCTRLA_bit at TCD1_INTCTRLA.B1;

sfr data unsigned char volatile TCD1_INTCTRLB             absolute 0x0947;
    sbit  CCBINTLVL0_TCD1_INTCTRLB_bit at TCD1_INTCTRLB.B2;
    sbit  CCBINTLVL1_TCD1_INTCTRLB_bit at TCD1_INTCTRLB.B3;
    sbit  CCAINTLVL0_TCD1_INTCTRLB_bit at TCD1_INTCTRLB.B0;
    sbit  CCAINTLVL1_TCD1_INTCTRLB_bit at TCD1_INTCTRLB.B1;

sfr data unsigned char volatile TCD1_CTRLFCLR             absolute 0x0948;
    sbit  CMD0_TCD1_CTRLFCLR_bit at TCD1_CTRLFCLR.B2;
    sbit  CMD1_TCD1_CTRLFCLR_bit at TCD1_CTRLFCLR.B3;
    sbit  LUPD_TCD1_CTRLFCLR_bit at TCD1_CTRLFCLR.B1;
    sbit  DIR__TCD1_CTRLFCLR_bit at TCD1_CTRLFCLR.B0;

sfr data unsigned char volatile TCD1_CTRLFSET             absolute 0x0949;
    sbit  CMD0_TCD1_CTRLFSET_bit at TCD1_CTRLFSET.B2;
    sbit  CMD1_TCD1_CTRLFSET_bit at TCD1_CTRLFSET.B3;
    sbit  LUPD_TCD1_CTRLFSET_bit at TCD1_CTRLFSET.B1;
    sbit  DIR__TCD1_CTRLFSET_bit at TCD1_CTRLFSET.B0;

sfr data unsigned char volatile TCD1_CTRLGCLR             absolute 0x094A;
    sbit  CCBBV_TCD1_CTRLGCLR_bit at TCD1_CTRLGCLR.B2;
    sbit  CCABV_TCD1_CTRLGCLR_bit at TCD1_CTRLGCLR.B1;
    sbit  PERBV_TCD1_CTRLGCLR_bit at TCD1_CTRLGCLR.B0;

sfr data unsigned char volatile TCD1_CTRLGSET             absolute 0x094B;
    sbit  CCBBV_TCD1_CTRLGSET_bit at TCD1_CTRLGSET.B2;
    sbit  CCABV_TCD1_CTRLGSET_bit at TCD1_CTRLGSET.B1;
    sbit  PERBV_TCD1_CTRLGSET_bit at TCD1_CTRLGSET.B0;

sfr data unsigned char volatile TCD1_INTFLAGS             absolute 0x094C;
    sbit  CCBIF_TCD1_INTFLAGS_bit at TCD1_INTFLAGS.B5;
    sbit  CCAIF_TCD1_INTFLAGS_bit at TCD1_INTFLAGS.B4;
    sbit  ERRIF_TCD1_INTFLAGS_bit at TCD1_INTFLAGS.B1;
    sbit  OVFIF_TCD1_INTFLAGS_bit at TCD1_INTFLAGS.B0;

sfr data unsigned char volatile TCD1_TEMP                 absolute 0x094F;
sfr data unsigned int  volatile TCD1_CNT                  absolute 0x0960;
sfr data unsigned int  volatile TCD1_PER                  absolute 0x0966;
sfr data unsigned char volatile TCD1_PERL                 absolute 0x0966;
sfr data unsigned char volatile TCD1_PERH                 absolute 0x0967;
sfr data unsigned int  volatile TCD1_CCA                  absolute 0x0968;
sfr data unsigned char volatile TCD1_CCAL                 absolute 0x0968;
sfr data unsigned char volatile TCD1_CCAH                 absolute 0x0969;
sfr data unsigned int  volatile TCD1_CCB                  absolute 0x096A;
sfr data unsigned char volatile TCD1_CCBL                 absolute 0x096A;
sfr data unsigned char volatile TCD1_CCBH                 absolute 0x096B;
sfr data unsigned int  volatile TCD1_PERBUF               absolute 0x0976;
sfr data unsigned char volatile TCD1_PERBUFL              absolute 0x0976;
sfr data unsigned char volatile TCD1_PERBUFH              absolute 0x0977;
sfr data unsigned int  volatile TCD1_CCABUF               absolute 0x0978;
sfr data unsigned char volatile TCD1_CCABUFL              absolute 0x0978;
sfr data unsigned char volatile TCD1_CCABUFH              absolute 0x0979;
sfr data unsigned int  volatile TCD1_CCBBUF               absolute 0x097A;
sfr data unsigned char volatile TCD1_CCBBUFL              absolute 0x097A;
sfr data unsigned char volatile TCD1_CCBBUFH              absolute 0x097B;
sfr data unsigned char volatile TCE0_CTRLA                absolute 0x0A00;
    sbit  CLKSEL0_TCE0_CTRLA_bit at TCE0_CTRLA.B0;
    sbit  CLKSEL1_TCE0_CTRLA_bit at TCE0_CTRLA.B1;
    sbit  CLKSEL2_TCE0_CTRLA_bit at TCE0_CTRLA.B2;
    sbit  CLKSEL3_TCE0_CTRLA_bit at TCE0_CTRLA.B3;

sfr data unsigned char volatile TCE0_CTRLB                absolute 0x0A01;
    sbit  CCDEN_TCE0_CTRLB_bit at TCE0_CTRLB.B7;
    sbit  CCCEN_TCE0_CTRLB_bit at TCE0_CTRLB.B6;
    sbit  CCBEN_TCE0_CTRLB_bit at TCE0_CTRLB.B5;
    sbit  CCAEN_TCE0_CTRLB_bit at TCE0_CTRLB.B4;
    sbit  WGMODE0_TCE0_CTRLB_bit at TCE0_CTRLB.B0;
    sbit  WGMODE1_TCE0_CTRLB_bit at TCE0_CTRLB.B1;
    sbit  WGMODE2_TCE0_CTRLB_bit at TCE0_CTRLB.B2;

sfr data unsigned char volatile TCE0_CTRLC                absolute 0x0A02;
    sbit  CMPD_TCE0_CTRLC_bit at TCE0_CTRLC.B3;
    sbit  CMPC_TCE0_CTRLC_bit at TCE0_CTRLC.B2;
    sbit  CMPB_TCE0_CTRLC_bit at TCE0_CTRLC.B1;
    sbit  CMPA_TCE0_CTRLC_bit at TCE0_CTRLC.B0;

sfr data unsigned char volatile TCE0_CTRLD                absolute 0x0A03;
    sbit  EVACT0_TCE0_CTRLD_bit at TCE0_CTRLD.B5;
    sbit  EVACT1_TCE0_CTRLD_bit at TCE0_CTRLD.B6;
    sbit  EVACT2_TCE0_CTRLD_bit at TCE0_CTRLD.B7;
    sbit  EVDLY_TCE0_CTRLD_bit at TCE0_CTRLD.B4;
    sbit  EVSEL0_TCE0_CTRLD_bit at TCE0_CTRLD.B0;
    sbit  EVSEL1_TCE0_CTRLD_bit at TCE0_CTRLD.B1;
    sbit  EVSEL2_TCE0_CTRLD_bit at TCE0_CTRLD.B2;
    sbit  EVSEL3_TCE0_CTRLD_bit at TCE0_CTRLD.B3;

sfr data unsigned char volatile TCE0_CTRLE                absolute 0x0A04;
    sbit  BYTEM0_TCE0_CTRLE_bit at TCE0_CTRLE.B0;
    sbit  BYTEM1_TCE0_CTRLE_bit at TCE0_CTRLE.B1;

sfr data unsigned char volatile TCE0_INTCTRLA             absolute 0x0A06;
    sbit  ERRINTLVL0_TCE0_INTCTRLA_bit at TCE0_INTCTRLA.B2;
    sbit  ERRINTLVL1_TCE0_INTCTRLA_bit at TCE0_INTCTRLA.B3;
    sbit  OVFINTLVL0_TCE0_INTCTRLA_bit at TCE0_INTCTRLA.B0;
    sbit  OVFINTLVL1_TCE0_INTCTRLA_bit at TCE0_INTCTRLA.B1;

sfr data unsigned char volatile TCE0_INTCTRLB             absolute 0x0A07;
    sbit  CCDINTLVL0_TCE0_INTCTRLB_bit at TCE0_INTCTRLB.B6;
    sbit  CCDINTLVL1_TCE0_INTCTRLB_bit at TCE0_INTCTRLB.B7;
    sbit  CCCINTLVL0_TCE0_INTCTRLB_bit at TCE0_INTCTRLB.B4;
    sbit  CCCINTLVL1_TCE0_INTCTRLB_bit at TCE0_INTCTRLB.B5;
    sbit  CCBINTLVL0_TCE0_INTCTRLB_bit at TCE0_INTCTRLB.B2;
    sbit  CCBINTLVL1_TCE0_INTCTRLB_bit at TCE0_INTCTRLB.B3;
    sbit  CCAINTLVL0_TCE0_INTCTRLB_bit at TCE0_INTCTRLB.B0;
    sbit  CCAINTLVL1_TCE0_INTCTRLB_bit at TCE0_INTCTRLB.B1;

sfr data unsigned char volatile TCE0_CTRLFCLR             absolute 0x0A08;
    sbit  CMD0_TCE0_CTRLFCLR_bit at TCE0_CTRLFCLR.B2;
    sbit  CMD1_TCE0_CTRLFCLR_bit at TCE0_CTRLFCLR.B3;
    sbit  LUPD_TCE0_CTRLFCLR_bit at TCE0_CTRLFCLR.B1;
    sbit  DIR__TCE0_CTRLFCLR_bit at TCE0_CTRLFCLR.B0;

sfr data unsigned char volatile TCE0_CTRLFSET             absolute 0x0A09;
    sbit  CMD0_TCE0_CTRLFSET_bit at TCE0_CTRLFSET.B2;
    sbit  CMD1_TCE0_CTRLFSET_bit at TCE0_CTRLFSET.B3;
    sbit  LUPD_TCE0_CTRLFSET_bit at TCE0_CTRLFSET.B1;
    sbit  DIR__TCE0_CTRLFSET_bit at TCE0_CTRLFSET.B0;

sfr data unsigned char volatile TCE0_CTRLGCLR             absolute 0x0A0A;
    sbit  CCDBV_TCE0_CTRLGCLR_bit at TCE0_CTRLGCLR.B4;
    sbit  CCCBV_TCE0_CTRLGCLR_bit at TCE0_CTRLGCLR.B3;
    sbit  CCBBV_TCE0_CTRLGCLR_bit at TCE0_CTRLGCLR.B2;
    sbit  CCABV_TCE0_CTRLGCLR_bit at TCE0_CTRLGCLR.B1;
    sbit  PERBV_TCE0_CTRLGCLR_bit at TCE0_CTRLGCLR.B0;

sfr data unsigned char volatile TCE0_CTRLGSET             absolute 0x0A0B;
    sbit  CCDBV_TCE0_CTRLGSET_bit at TCE0_CTRLGSET.B4;
    sbit  CCCBV_TCE0_CTRLGSET_bit at TCE0_CTRLGSET.B3;
    sbit  CCBBV_TCE0_CTRLGSET_bit at TCE0_CTRLGSET.B2;
    sbit  CCABV_TCE0_CTRLGSET_bit at TCE0_CTRLGSET.B1;
    sbit  PERBV_TCE0_CTRLGSET_bit at TCE0_CTRLGSET.B0;

sfr data unsigned char volatile TCE0_INTFLAGS             absolute 0x0A0C;
    sbit  CCDIF_TCE0_INTFLAGS_bit at TCE0_INTFLAGS.B7;
    sbit  CCCIF_TCE0_INTFLAGS_bit at TCE0_INTFLAGS.B6;
    sbit  CCBIF_TCE0_INTFLAGS_bit at TCE0_INTFLAGS.B5;
    sbit  CCAIF_TCE0_INTFLAGS_bit at TCE0_INTFLAGS.B4;
    sbit  ERRIF_TCE0_INTFLAGS_bit at TCE0_INTFLAGS.B1;
    sbit  OVFIF_TCE0_INTFLAGS_bit at TCE0_INTFLAGS.B0;

sfr data unsigned char volatile TCE0_TEMP                 absolute 0x0A0F;
sfr data unsigned int  volatile TCE0_CNT                  absolute 0x0A20;
sfr data unsigned int  volatile TCE0_PER                  absolute 0x0A26;
sfr data unsigned char volatile TCE0_PERL                 absolute 0x0A26;
sfr data unsigned char volatile TCE0_PERH                 absolute 0x0A27;
sfr data unsigned int  volatile TCE0_CCA                  absolute 0x0A28;
sfr data unsigned char volatile TCE0_CCAL                 absolute 0x0A28;
sfr data unsigned char volatile TCE0_CCAH                 absolute 0x0A29;
sfr data unsigned int  volatile TCE0_CCB                  absolute 0x0A2A;
sfr data unsigned char volatile TCE0_CCBL                 absolute 0x0A2A;
sfr data unsigned char volatile TCE0_CCBH                 absolute 0x0A2B;
sfr data unsigned int  volatile TCE0_CCC                  absolute 0x0A2C;
sfr data unsigned char volatile TCE0_CCCL                 absolute 0x0A2C;
sfr data unsigned char volatile TCE0_CCCH                 absolute 0x0A2D;
sfr data unsigned int  volatile TCE0_CCD                  absolute 0x0A2E;
sfr data unsigned char volatile TCE0_CCDL                 absolute 0x0A2E;
sfr data unsigned char volatile TCE0_CCDH                 absolute 0x0A2F;
sfr data unsigned int  volatile TCE0_PERBUF               absolute 0x0A36;
sfr data unsigned char volatile TCE0_PERBUFL              absolute 0x0A36;
sfr data unsigned char volatile TCE0_PERBUFH              absolute 0x0A37;
sfr data unsigned int  volatile TCE0_CCABUF               absolute 0x0A38;
sfr data unsigned char volatile TCE0_CCABUFL              absolute 0x0A38;
sfr data unsigned char volatile TCE0_CCABUFH              absolute 0x0A39;
sfr data unsigned int  volatile TCE0_CCBBUF               absolute 0x0A3A;
sfr data unsigned char volatile TCE0_CCBBUFL              absolute 0x0A3A;
sfr data unsigned char volatile TCE0_CCBBUFH              absolute 0x0A3B;
sfr data unsigned int  volatile TCE0_CCCBUF               absolute 0x0A3C;
sfr data unsigned char volatile TCE0_CCCBUFL              absolute 0x0A3C;
sfr data unsigned char volatile TCE0_CCCBUFH              absolute 0x0A3D;
sfr data unsigned int  volatile TCE0_CCDBUF               absolute 0x0A3E;
sfr data unsigned char volatile TCE0_CCDBUFL              absolute 0x0A3E;
sfr data unsigned char volatile TCE0_CCDBUFH              absolute 0x0A3F;
sfr data unsigned char volatile TCC2_CTRLA                absolute 0x0800;
    sbit  CLKSEL0_TCC2_CTRLA_bit at TCC2_CTRLA.B0;
    sbit  CLKSEL1_TCC2_CTRLA_bit at TCC2_CTRLA.B1;
    sbit  CLKSEL2_TCC2_CTRLA_bit at TCC2_CTRLA.B2;
    sbit  CLKSEL3_TCC2_CTRLA_bit at TCC2_CTRLA.B3;

sfr data unsigned char volatile TCC2_CTRLB                absolute 0x0801;
    const register unsigned short int HCMPDEN = 7;
    sbit  HCMPDEN_bit at TCC2_CTRLB.B7;
    const register unsigned short int HCMPCEN = 6;
    sbit  HCMPCEN_bit at TCC2_CTRLB.B6;
    const register unsigned short int HCMPBEN = 5;
    sbit  HCMPBEN_bit at TCC2_CTRLB.B5;
    const register unsigned short int HCMPAEN = 4;
    sbit  HCMPAEN_bit at TCC2_CTRLB.B4;
    const register unsigned short int LCMPDEN = 3;
    sbit  LCMPDEN_bit at TCC2_CTRLB.B3;
    const register unsigned short int LCMPCEN = 2;
    sbit  LCMPCEN_bit at TCC2_CTRLB.B2;
    const register unsigned short int LCMPBEN = 1;
    sbit  LCMPBEN_bit at TCC2_CTRLB.B1;
    const register unsigned short int LCMPAEN = 0;
    sbit  LCMPAEN_bit at TCC2_CTRLB.B0;

sfr data unsigned char volatile TCC2_CTRLC                absolute 0x0802;
    const register unsigned short int HCMPD = 7;
    sbit  HCMPD_bit at TCC2_CTRLC.B7;
    const register unsigned short int HCMPC = 6;
    sbit  HCMPC_bit at TCC2_CTRLC.B6;
    const register unsigned short int HCMPB = 5;
    sbit  HCMPB_bit at TCC2_CTRLC.B5;
    const register unsigned short int HCMPA = 4;
    sbit  HCMPA_bit at TCC2_CTRLC.B4;
    const register unsigned short int LCMPD = 3;
    sbit  LCMPD_bit at TCC2_CTRLC.B3;
    const register unsigned short int LCMPC = 2;
    sbit  LCMPC_bit at TCC2_CTRLC.B2;
    const register unsigned short int LCMPB = 1;
    sbit  LCMPB_bit at TCC2_CTRLC.B1;
    const register unsigned short int LCMPA = 0;
    sbit  LCMPA_bit at TCC2_CTRLC.B0;

sfr data unsigned char volatile TCC2_CTRLE                absolute 0x0804;
    sbit  BYTEM0_TCC2_CTRLE_bit at TCC2_CTRLE.B0;
    sbit  BYTEM1_TCC2_CTRLE_bit at TCC2_CTRLE.B1;

sfr data unsigned char volatile TCC2_INTCTRLA             absolute 0x0806;
    const register unsigned short int HUNFINTLVL0 = 2;
    sbit  HUNFINTLVL0_bit at TCC2_INTCTRLA.B2;
    const register unsigned short int HUNFINTLVL1 = 3;
    sbit  HUNFINTLVL1_bit at TCC2_INTCTRLA.B3;
    const register unsigned short int LUNFINTLVL0 = 0;
    sbit  LUNFINTLVL0_bit at TCC2_INTCTRLA.B0;
    const register unsigned short int LUNFINTLVL1 = 1;
    sbit  LUNFINTLVL1_bit at TCC2_INTCTRLA.B1;

sfr data unsigned char volatile TCC2_INTCTRLB             absolute 0x0807;
    const register unsigned short int LCMPDINTLVL0 = 6;
    sbit  LCMPDINTLVL0_bit at TCC2_INTCTRLB.B6;
    const register unsigned short int LCMPDINTLVL1 = 7;
    sbit  LCMPDINTLVL1_bit at TCC2_INTCTRLB.B7;
    const register unsigned short int LCMPCINTLVL0 = 4;
    sbit  LCMPCINTLVL0_bit at TCC2_INTCTRLB.B4;
    const register unsigned short int LCMPCINTLVL1 = 5;
    sbit  LCMPCINTLVL1_bit at TCC2_INTCTRLB.B5;
    const register unsigned short int LCMPBINTLVL0 = 2;
    sbit  LCMPBINTLVL0_bit at TCC2_INTCTRLB.B2;
    const register unsigned short int LCMPBINTLVL1 = 3;
    sbit  LCMPBINTLVL1_bit at TCC2_INTCTRLB.B3;
    const register unsigned short int LCMPAINTLVL0 = 0;
    sbit  LCMPAINTLVL0_bit at TCC2_INTCTRLB.B0;
    const register unsigned short int LCMPAINTLVL1 = 1;
    sbit  LCMPAINTLVL1_bit at TCC2_INTCTRLB.B1;

sfr data unsigned char volatile TCC2_CTRLF                absolute 0x0809;
    sbit  CMD0_TCC2_CTRLF_bit at TCC2_CTRLF.B2;
    sbit  CMD1_TCC2_CTRLF_bit at TCC2_CTRLF.B3;
    const register unsigned short int CMDEN0 = 0;
    sbit  CMDEN0_bit at TCC2_CTRLF.B0;
    const register unsigned short int CMDEN1 = 1;
    sbit  CMDEN1_bit at TCC2_CTRLF.B1;

sfr data unsigned char volatile TCC2_INTFLAGS             absolute 0x080C;
    const register unsigned short int LCMPDIF = 7;
    sbit  LCMPDIF_bit at TCC2_INTFLAGS.B7;
    const register unsigned short int LCMPCIF = 6;
    sbit  LCMPCIF_bit at TCC2_INTFLAGS.B6;
    const register unsigned short int LCMPBIF = 5;
    sbit  LCMPBIF_bit at TCC2_INTFLAGS.B5;
    const register unsigned short int LCMPAIF = 4;
    sbit  LCMPAIF_bit at TCC2_INTFLAGS.B4;
    const register unsigned short int HUNFIF = 1;
    sbit  HUNFIF_bit at TCC2_INTFLAGS.B1;
    const register unsigned short int LUNFIF = 0;
    sbit  LUNFIF_bit at TCC2_INTFLAGS.B0;

sfr data unsigned char volatile TCC2_LCNT                 absolute 0x0820;
sfr data unsigned char volatile TCC2_HCNT                 absolute 0x0821;
sfr data unsigned char volatile TCC2_LPER                 absolute 0x0826;
sfr data unsigned char volatile TCC2_HPER                 absolute 0x0827;
sfr data unsigned char volatile TCC2_LCMPA                absolute 0x0828;
sfr data unsigned char volatile TCC2_HCMPA                absolute 0x0829;
sfr data unsigned char volatile TCC2_LCMPB                absolute 0x082A;
sfr data unsigned char volatile TCC2_HCMPB                absolute 0x082B;
sfr data unsigned char volatile TCC2_LCMPC                absolute 0x082C;
sfr data unsigned char volatile TCC2_HCMPC                absolute 0x082D;
sfr data unsigned char volatile TCC2_LCMPD                absolute 0x082E;
sfr data unsigned char volatile TCC2_HCMPD                absolute 0x082F;
sfr data unsigned char volatile TCD2_CTRLA                absolute 0x0900;
    sbit  CLKSEL0_TCD2_CTRLA_bit at TCD2_CTRLA.B0;
    sbit  CLKSEL1_TCD2_CTRLA_bit at TCD2_CTRLA.B1;
    sbit  CLKSEL2_TCD2_CTRLA_bit at TCD2_CTRLA.B2;
    sbit  CLKSEL3_TCD2_CTRLA_bit at TCD2_CTRLA.B3;

sfr data unsigned char volatile TCD2_CTRLB                absolute 0x0901;
    sbit  HCMPDEN_TCD2_CTRLB_bit at TCD2_CTRLB.B7;
    sbit  HCMPCEN_TCD2_CTRLB_bit at TCD2_CTRLB.B6;
    sbit  HCMPBEN_TCD2_CTRLB_bit at TCD2_CTRLB.B5;
    sbit  HCMPAEN_TCD2_CTRLB_bit at TCD2_CTRLB.B4;
    sbit  LCMPDEN_TCD2_CTRLB_bit at TCD2_CTRLB.B3;
    sbit  LCMPCEN_TCD2_CTRLB_bit at TCD2_CTRLB.B2;
    sbit  LCMPBEN_TCD2_CTRLB_bit at TCD2_CTRLB.B1;
    sbit  LCMPAEN_TCD2_CTRLB_bit at TCD2_CTRLB.B0;

sfr data unsigned char volatile TCD2_CTRLC                absolute 0x0902;
    sbit  HCMPD_TCD2_CTRLC_bit at TCD2_CTRLC.B7;
    sbit  HCMPC_TCD2_CTRLC_bit at TCD2_CTRLC.B6;
    sbit  HCMPB_TCD2_CTRLC_bit at TCD2_CTRLC.B5;
    sbit  HCMPA_TCD2_CTRLC_bit at TCD2_CTRLC.B4;
    sbit  LCMPD_TCD2_CTRLC_bit at TCD2_CTRLC.B3;
    sbit  LCMPC_TCD2_CTRLC_bit at TCD2_CTRLC.B2;
    sbit  LCMPB_TCD2_CTRLC_bit at TCD2_CTRLC.B1;
    sbit  LCMPA_TCD2_CTRLC_bit at TCD2_CTRLC.B0;

sfr data unsigned char volatile TCD2_CTRLE                absolute 0x0904;
    sbit  BYTEM0_TCD2_CTRLE_bit at TCD2_CTRLE.B0;
    sbit  BYTEM1_TCD2_CTRLE_bit at TCD2_CTRLE.B1;

sfr data unsigned char volatile TCD2_INTCTRLA             absolute 0x0906;
    sbit  HUNFINTLVL0_TCD2_INTCTRLA_bit at TCD2_INTCTRLA.B2;
    sbit  HUNFINTLVL1_TCD2_INTCTRLA_bit at TCD2_INTCTRLA.B3;
    sbit  LUNFINTLVL0_TCD2_INTCTRLA_bit at TCD2_INTCTRLA.B0;
    sbit  LUNFINTLVL1_TCD2_INTCTRLA_bit at TCD2_INTCTRLA.B1;

sfr data unsigned char volatile TCD2_INTCTRLB             absolute 0x0907;
    sbit  LCMPDINTLVL0_TCD2_INTCTRLB_bit at TCD2_INTCTRLB.B6;
    sbit  LCMPDINTLVL1_TCD2_INTCTRLB_bit at TCD2_INTCTRLB.B7;
    sbit  LCMPCINTLVL0_TCD2_INTCTRLB_bit at TCD2_INTCTRLB.B4;
    sbit  LCMPCINTLVL1_TCD2_INTCTRLB_bit at TCD2_INTCTRLB.B5;
    sbit  LCMPBINTLVL0_TCD2_INTCTRLB_bit at TCD2_INTCTRLB.B2;
    sbit  LCMPBINTLVL1_TCD2_INTCTRLB_bit at TCD2_INTCTRLB.B3;
    sbit  LCMPAINTLVL0_TCD2_INTCTRLB_bit at TCD2_INTCTRLB.B0;
    sbit  LCMPAINTLVL1_TCD2_INTCTRLB_bit at TCD2_INTCTRLB.B1;

sfr data unsigned char volatile TCD2_CTRLF                absolute 0x0909;
    sbit  CMD0_TCD2_CTRLF_bit at TCD2_CTRLF.B2;
    sbit  CMD1_TCD2_CTRLF_bit at TCD2_CTRLF.B3;
    sbit  CMDEN0_TCD2_CTRLF_bit at TCD2_CTRLF.B0;
    sbit  CMDEN1_TCD2_CTRLF_bit at TCD2_CTRLF.B1;

sfr data unsigned char volatile TCD2_INTFLAGS             absolute 0x090C;
    sbit  LCMPDIF_TCD2_INTFLAGS_bit at TCD2_INTFLAGS.B7;
    sbit  LCMPCIF_TCD2_INTFLAGS_bit at TCD2_INTFLAGS.B6;
    sbit  LCMPBIF_TCD2_INTFLAGS_bit at TCD2_INTFLAGS.B5;
    sbit  LCMPAIF_TCD2_INTFLAGS_bit at TCD2_INTFLAGS.B4;
    sbit  HUNFIF_TCD2_INTFLAGS_bit at TCD2_INTFLAGS.B1;
    sbit  LUNFIF_TCD2_INTFLAGS_bit at TCD2_INTFLAGS.B0;

sfr data unsigned char volatile TCD2_LCNT                 absolute 0x0920;
sfr data unsigned char volatile TCD2_HCNT                 absolute 0x0921;
sfr data unsigned char volatile TCD2_LPER                 absolute 0x0926;
sfr data unsigned char volatile TCD2_HPER                 absolute 0x0927;
sfr data unsigned char volatile TCD2_LCMPA                absolute 0x0928;
sfr data unsigned char volatile TCD2_HCMPA                absolute 0x0929;
sfr data unsigned char volatile TCD2_LCMPB                absolute 0x092A;
sfr data unsigned char volatile TCD2_HCMPB                absolute 0x092B;
sfr data unsigned char volatile TCD2_LCMPC                absolute 0x092C;
sfr data unsigned char volatile TCD2_HCMPC                absolute 0x092D;
sfr data unsigned char volatile TCD2_LCMPD                absolute 0x092E;
sfr data unsigned char volatile TCD2_HCMPD                absolute 0x092F;
sfr data unsigned char volatile AWEXC_CTRL                absolute 0x0880;
    const register unsigned short int PGM = 5;
    sbit  PGM_bit at AWEXC_CTRL.B5;
    const register unsigned short int CWCM = 4;
    sbit  CWCM_bit at AWEXC_CTRL.B4;
    const register unsigned short int DTICCDEN = 3;
    sbit  DTICCDEN_bit at AWEXC_CTRL.B3;
    const register unsigned short int DTICCCEN = 2;
    sbit  DTICCCEN_bit at AWEXC_CTRL.B2;
    const register unsigned short int DTICCBEN = 1;
    sbit  DTICCBEN_bit at AWEXC_CTRL.B1;
    const register unsigned short int DTICCAEN = 0;
    sbit  DTICCAEN_bit at AWEXC_CTRL.B0;

sfr data unsigned char volatile AWEXC_FDEMASK             absolute 0x0882;
sfr data unsigned char volatile AWEXC_FDCTRL              absolute 0x0883;
    const register unsigned short int FDDBD = 4;
    sbit  FDDBD_bit at AWEXC_FDCTRL.B4;
    const register unsigned short int FDMODE = 2;
    sbit  FDMODE_bit at AWEXC_FDCTRL.B2;
    const register unsigned short int FDACT0 = 0;
    sbit  FDACT0_bit at AWEXC_FDCTRL.B0;
    const register unsigned short int FDACT1 = 1;
    sbit  FDACT1_bit at AWEXC_FDCTRL.B1;

sfr data unsigned char volatile AWEXC_STATUS              absolute 0x0884;
    const register unsigned short int FDF = 2;
    sbit  FDF_bit at AWEXC_STATUS.B2;
    const register unsigned short int DTHSBUFV = 1;
    sbit  DTHSBUFV_bit at AWEXC_STATUS.B1;
    const register unsigned short int DTLSBUFV = 0;
    sbit  DTLSBUFV_bit at AWEXC_STATUS.B0;

sfr data unsigned char volatile AWEXC_STATUSSET           absolute 0x0885;
    sbit  FDF_AWEXC_STATUSSET_bit at AWEXC_STATUSSET.B2;
    sbit  DTHSBUFV_AWEXC_STATUSSET_bit at AWEXC_STATUSSET.B1;
    sbit  DTLSBUFV_AWEXC_STATUSSET_bit at AWEXC_STATUSSET.B0;

sfr data unsigned char volatile AWEXC_DTBOTH              absolute 0x0886;
sfr data unsigned char volatile AWEXC_DTBOTHBUF           absolute 0x0887;
sfr data unsigned char volatile AWEXC_DTLS                absolute 0x0888;
sfr data unsigned char volatile AWEXC_DTHS                absolute 0x0889;
sfr data unsigned char volatile AWEXC_DTLSBUF             absolute 0x088A;
sfr data unsigned char volatile AWEXC_DTHSBUF             absolute 0x088B;
sfr data unsigned char volatile AWEXC_OUTOVEN             absolute 0x088C;
sfr data unsigned char volatile HIRESC_CTRLA              absolute 0x0890;
    const register unsigned short int HREN0 = 0;
    sbit  HREN0_bit at HIRESC_CTRLA.B0;
    const register unsigned short int HREN1 = 1;
    sbit  HREN1_bit at HIRESC_CTRLA.B1;

sfr data unsigned char volatile HIRESD_CTRLA              absolute 0x0990;
    sbit  HREN0_HIRESD_CTRLA_bit at HIRESD_CTRLA.B0;
    sbit  HREN1_HIRESD_CTRLA_bit at HIRESD_CTRLA.B1;

sfr data unsigned char volatile HIRESE_CTRLA              absolute 0x0A90;
    sbit  HREN0_HIRESE_CTRLA_bit at HIRESE_CTRLA.B0;
    sbit  HREN1_HIRESE_CTRLA_bit at HIRESE_CTRLA.B1;

sfr data unsigned char volatile USARTC0_DATA              absolute 0x08A0;
sfr data unsigned char volatile USARTC0_STATUS            absolute 0x08A1;
    const register unsigned short int RXCIF = 7;
    sbit  RXCIF_bit at USARTC0_STATUS.B7;
    const register unsigned short int TXCIF = 6;
    sbit  TXCIF_bit at USARTC0_STATUS.B6;
    const register unsigned short int DREIF = 5;
    sbit  DREIF_bit at USARTC0_STATUS.B5;
    const register unsigned short int FERR = 4;
    sbit  FERR_bit at USARTC0_STATUS.B4;
    const register unsigned short int BUFOVF = 3;
    sbit  BUFOVF_bit at USARTC0_STATUS.B3;
    const register unsigned short int PERR = 2;
    sbit  PERR_bit at USARTC0_STATUS.B2;
    const register unsigned short int RXB8 = 0;
    sbit  RXB8_bit at USARTC0_STATUS.B0;

sfr data unsigned char volatile USARTC0_CTRLA             absolute 0x08A3;
    const register unsigned short int RXCINTLVL0 = 4;
    sbit  RXCINTLVL0_bit at USARTC0_CTRLA.B4;
    const register unsigned short int RXCINTLVL1 = 5;
    sbit  RXCINTLVL1_bit at USARTC0_CTRLA.B5;
    const register unsigned short int TXCINTLVL0 = 2;
    sbit  TXCINTLVL0_bit at USARTC0_CTRLA.B2;
    const register unsigned short int TXCINTLVL1 = 3;
    sbit  TXCINTLVL1_bit at USARTC0_CTRLA.B3;
    const register unsigned short int DREINTLVL0 = 0;
    sbit  DREINTLVL0_bit at USARTC0_CTRLA.B0;
    const register unsigned short int DREINTLVL1 = 1;
    sbit  DREINTLVL1_bit at USARTC0_CTRLA.B1;

sfr data unsigned char volatile USARTC0_CTRLB             absolute 0x08A4;
    const register unsigned short int RXEN = 4;
    sbit  RXEN_bit at USARTC0_CTRLB.B4;
    const register unsigned short int TXEN = 3;
    sbit  TXEN_bit at USARTC0_CTRLB.B3;
    const register unsigned short int CLK2X = 2;
    sbit  CLK2X_bit at USARTC0_CTRLB.B2;
    const register unsigned short int MPCM = 1;
    sbit  MPCM_bit at USARTC0_CTRLB.B1;
    const register unsigned short int TXB8 = 0;
    sbit  TXB8_bit at USARTC0_CTRLB.B0;

sfr data unsigned char volatile USARTC0_CTRLC             absolute 0x08A5;
    const register unsigned short int CMODE0 = 6;
    sbit  CMODE0_bit at USARTC0_CTRLC.B6;
    const register unsigned short int CMODE1 = 7;
    sbit  CMODE1_bit at USARTC0_CTRLC.B7;
    const register unsigned short int PMODE0 = 4;
    sbit  PMODE0_bit at USARTC0_CTRLC.B4;
    const register unsigned short int PMODE1 = 5;
    sbit  PMODE1_bit at USARTC0_CTRLC.B5;
    const register unsigned short int SBMODE = 3;
    sbit  SBMODE_bit at USARTC0_CTRLC.B3;
    const register unsigned short int CHSIZE0 = 0;
    sbit  CHSIZE0_bit at USARTC0_CTRLC.B0;
    const register unsigned short int CHSIZE1 = 1;
    sbit  CHSIZE1_bit at USARTC0_CTRLC.B1;
    const register unsigned short int CHSIZE2 = 2;
    sbit  CHSIZE2_bit at USARTC0_CTRLC.B2;

sfr data unsigned char volatile USARTC0_BAUDCTRLA         absolute 0x08A6;
    const register unsigned short int BSEL0 = 0;
    sbit  BSEL0_bit at USARTC0_BAUDCTRLA.B0;
    const register unsigned short int BSEL1 = 1;
    sbit  BSEL1_bit at USARTC0_BAUDCTRLA.B1;
    const register unsigned short int BSEL2 = 2;
    sbit  BSEL2_bit at USARTC0_BAUDCTRLA.B2;
    const register unsigned short int BSEL3 = 3;
    sbit  BSEL3_bit at USARTC0_BAUDCTRLA.B3;
    const register unsigned short int BSEL4 = 4;
    sbit  BSEL4_bit at USARTC0_BAUDCTRLA.B4;
    const register unsigned short int BSEL5 = 5;
    sbit  BSEL5_bit at USARTC0_BAUDCTRLA.B5;
    const register unsigned short int BSEL6 = 6;
    sbit  BSEL6_bit at USARTC0_BAUDCTRLA.B6;
    const register unsigned short int BSEL7 = 7;
    sbit  BSEL7_bit at USARTC0_BAUDCTRLA.B7;

sfr data unsigned char volatile USARTC0_BAUDCTRLB         absolute 0x08A7;
    const register unsigned short int BSCALE0 = 4;
    sbit  BSCALE0_bit at USARTC0_BAUDCTRLB.B4;
    const register unsigned short int BSCALE1 = 5;
    sbit  BSCALE1_bit at USARTC0_BAUDCTRLB.B5;
    const register unsigned short int BSCALE2 = 6;
    sbit  BSCALE2_bit at USARTC0_BAUDCTRLB.B6;
    const register unsigned short int BSCALE3 = 7;
    sbit  BSCALE3_bit at USARTC0_BAUDCTRLB.B7;
    sbit  BSEL0_USARTC0_BAUDCTRLB_bit at USARTC0_BAUDCTRLB.B0;
    sbit  BSEL1_USARTC0_BAUDCTRLB_bit at USARTC0_BAUDCTRLB.B1;
    sbit  BSEL2_USARTC0_BAUDCTRLB_bit at USARTC0_BAUDCTRLB.B2;
    sbit  BSEL3_USARTC0_BAUDCTRLB_bit at USARTC0_BAUDCTRLB.B3;

sfr data unsigned char volatile USARTC1_DATA              absolute 0x08B0;
sfr data unsigned char volatile USARTC1_STATUS            absolute 0x08B1;
    sbit  RXCIF_USARTC1_STATUS_bit at USARTC1_STATUS.B7;
    sbit  TXCIF_USARTC1_STATUS_bit at USARTC1_STATUS.B6;
    sbit  DREIF_USARTC1_STATUS_bit at USARTC1_STATUS.B5;
    sbit  FERR_USARTC1_STATUS_bit at USARTC1_STATUS.B4;
    sbit  BUFOVF_USARTC1_STATUS_bit at USARTC1_STATUS.B3;
    sbit  PERR_USARTC1_STATUS_bit at USARTC1_STATUS.B2;
    sbit  RXB8_USARTC1_STATUS_bit at USARTC1_STATUS.B0;

sfr data unsigned char volatile USARTC1_CTRLA             absolute 0x08B3;
    sbit  RXCINTLVL0_USARTC1_CTRLA_bit at USARTC1_CTRLA.B4;
    sbit  RXCINTLVL1_USARTC1_CTRLA_bit at USARTC1_CTRLA.B5;
    sbit  TXCINTLVL0_USARTC1_CTRLA_bit at USARTC1_CTRLA.B2;
    sbit  TXCINTLVL1_USARTC1_CTRLA_bit at USARTC1_CTRLA.B3;
    sbit  DREINTLVL0_USARTC1_CTRLA_bit at USARTC1_CTRLA.B0;
    sbit  DREINTLVL1_USARTC1_CTRLA_bit at USARTC1_CTRLA.B1;

sfr data unsigned char volatile USARTC1_CTRLB             absolute 0x08B4;
    sbit  RXEN_USARTC1_CTRLB_bit at USARTC1_CTRLB.B4;
    sbit  TXEN_USARTC1_CTRLB_bit at USARTC1_CTRLB.B3;
    sbit  CLK2X_USARTC1_CTRLB_bit at USARTC1_CTRLB.B2;
    sbit  MPCM_USARTC1_CTRLB_bit at USARTC1_CTRLB.B1;
    sbit  TXB8_USARTC1_CTRLB_bit at USARTC1_CTRLB.B0;

sfr data unsigned char volatile USARTC1_CTRLC             absolute 0x08B5;
    sbit  CMODE0_USARTC1_CTRLC_bit at USARTC1_CTRLC.B6;
    sbit  CMODE1_USARTC1_CTRLC_bit at USARTC1_CTRLC.B7;
    sbit  PMODE0_USARTC1_CTRLC_bit at USARTC1_CTRLC.B4;
    sbit  PMODE1_USARTC1_CTRLC_bit at USARTC1_CTRLC.B5;
    sbit  SBMODE_USARTC1_CTRLC_bit at USARTC1_CTRLC.B3;
    sbit  CHSIZE0_USARTC1_CTRLC_bit at USARTC1_CTRLC.B0;
    sbit  CHSIZE1_USARTC1_CTRLC_bit at USARTC1_CTRLC.B1;
    sbit  CHSIZE2_USARTC1_CTRLC_bit at USARTC1_CTRLC.B2;

sfr data unsigned char volatile USARTC1_BAUDCTRLA         absolute 0x08B6;
    sbit  BSEL0_USARTC1_BAUDCTRLA_bit at USARTC1_BAUDCTRLA.B0;
    sbit  BSEL1_USARTC1_BAUDCTRLA_bit at USARTC1_BAUDCTRLA.B1;
    sbit  BSEL2_USARTC1_BAUDCTRLA_bit at USARTC1_BAUDCTRLA.B2;
    sbit  BSEL3_USARTC1_BAUDCTRLA_bit at USARTC1_BAUDCTRLA.B3;
    sbit  BSEL4_USARTC1_BAUDCTRLA_bit at USARTC1_BAUDCTRLA.B4;
    sbit  BSEL5_USARTC1_BAUDCTRLA_bit at USARTC1_BAUDCTRLA.B5;
    sbit  BSEL6_USARTC1_BAUDCTRLA_bit at USARTC1_BAUDCTRLA.B6;
    sbit  BSEL7_USARTC1_BAUDCTRLA_bit at USARTC1_BAUDCTRLA.B7;

sfr data unsigned char volatile USARTC1_BAUDCTRLB         absolute 0x08B7;
    sbit  BSCALE0_USARTC1_BAUDCTRLB_bit at USARTC1_BAUDCTRLB.B4;
    sbit  BSCALE1_USARTC1_BAUDCTRLB_bit at USARTC1_BAUDCTRLB.B5;
    sbit  BSCALE2_USARTC1_BAUDCTRLB_bit at USARTC1_BAUDCTRLB.B6;
    sbit  BSCALE3_USARTC1_BAUDCTRLB_bit at USARTC1_BAUDCTRLB.B7;
    sbit  BSEL0_USARTC1_BAUDCTRLB_bit at USARTC1_BAUDCTRLB.B0;
    sbit  BSEL1_USARTC1_BAUDCTRLB_bit at USARTC1_BAUDCTRLB.B1;
    sbit  BSEL2_USARTC1_BAUDCTRLB_bit at USARTC1_BAUDCTRLB.B2;
    sbit  BSEL3_USARTC1_BAUDCTRLB_bit at USARTC1_BAUDCTRLB.B3;

sfr data unsigned char volatile USARTD0_DATA              absolute 0x09A0;
sfr data unsigned char volatile USARTD0_STATUS            absolute 0x09A1;
    sbit  RXCIF_USARTD0_STATUS_bit at USARTD0_STATUS.B7;
    sbit  TXCIF_USARTD0_STATUS_bit at USARTD0_STATUS.B6;
    sbit  DREIF_USARTD0_STATUS_bit at USARTD0_STATUS.B5;
    sbit  FERR_USARTD0_STATUS_bit at USARTD0_STATUS.B4;
    sbit  BUFOVF_USARTD0_STATUS_bit at USARTD0_STATUS.B3;
    sbit  PERR_USARTD0_STATUS_bit at USARTD0_STATUS.B2;
    sbit  RXB8_USARTD0_STATUS_bit at USARTD0_STATUS.B0;

sfr data unsigned char volatile USARTD0_CTRLA             absolute 0x09A3;
    sbit  RXCINTLVL0_USARTD0_CTRLA_bit at USARTD0_CTRLA.B4;
    sbit  RXCINTLVL1_USARTD0_CTRLA_bit at USARTD0_CTRLA.B5;
    sbit  TXCINTLVL0_USARTD0_CTRLA_bit at USARTD0_CTRLA.B2;
    sbit  TXCINTLVL1_USARTD0_CTRLA_bit at USARTD0_CTRLA.B3;
    sbit  DREINTLVL0_USARTD0_CTRLA_bit at USARTD0_CTRLA.B0;
    sbit  DREINTLVL1_USARTD0_CTRLA_bit at USARTD0_CTRLA.B1;

sfr data unsigned char volatile USARTD0_CTRLB             absolute 0x09A4;
    sbit  RXEN_USARTD0_CTRLB_bit at USARTD0_CTRLB.B4;
    sbit  TXEN_USARTD0_CTRLB_bit at USARTD0_CTRLB.B3;
    sbit  CLK2X_USARTD0_CTRLB_bit at USARTD0_CTRLB.B2;
    sbit  MPCM_USARTD0_CTRLB_bit at USARTD0_CTRLB.B1;
    sbit  TXB8_USARTD0_CTRLB_bit at USARTD0_CTRLB.B0;

sfr data unsigned char volatile USARTD0_CTRLC             absolute 0x09A5;
    sbit  CMODE0_USARTD0_CTRLC_bit at USARTD0_CTRLC.B6;
    sbit  CMODE1_USARTD0_CTRLC_bit at USARTD0_CTRLC.B7;
    sbit  PMODE0_USARTD0_CTRLC_bit at USARTD0_CTRLC.B4;
    sbit  PMODE1_USARTD0_CTRLC_bit at USARTD0_CTRLC.B5;
    sbit  SBMODE_USARTD0_CTRLC_bit at USARTD0_CTRLC.B3;
    sbit  CHSIZE0_USARTD0_CTRLC_bit at USARTD0_CTRLC.B0;
    sbit  CHSIZE1_USARTD0_CTRLC_bit at USARTD0_CTRLC.B1;
    sbit  CHSIZE2_USARTD0_CTRLC_bit at USARTD0_CTRLC.B2;

sfr data unsigned char volatile USARTD0_BAUDCTRLA         absolute 0x09A6;
    sbit  BSEL0_USARTD0_BAUDCTRLA_bit at USARTD0_BAUDCTRLA.B0;
    sbit  BSEL1_USARTD0_BAUDCTRLA_bit at USARTD0_BAUDCTRLA.B1;
    sbit  BSEL2_USARTD0_BAUDCTRLA_bit at USARTD0_BAUDCTRLA.B2;
    sbit  BSEL3_USARTD0_BAUDCTRLA_bit at USARTD0_BAUDCTRLA.B3;
    sbit  BSEL4_USARTD0_BAUDCTRLA_bit at USARTD0_BAUDCTRLA.B4;
    sbit  BSEL5_USARTD0_BAUDCTRLA_bit at USARTD0_BAUDCTRLA.B5;
    sbit  BSEL6_USARTD0_BAUDCTRLA_bit at USARTD0_BAUDCTRLA.B6;
    sbit  BSEL7_USARTD0_BAUDCTRLA_bit at USARTD0_BAUDCTRLA.B7;

sfr data unsigned char volatile USARTD0_BAUDCTRLB         absolute 0x09A7;
    sbit  BSCALE0_USARTD0_BAUDCTRLB_bit at USARTD0_BAUDCTRLB.B4;
    sbit  BSCALE1_USARTD0_BAUDCTRLB_bit at USARTD0_BAUDCTRLB.B5;
    sbit  BSCALE2_USARTD0_BAUDCTRLB_bit at USARTD0_BAUDCTRLB.B6;
    sbit  BSCALE3_USARTD0_BAUDCTRLB_bit at USARTD0_BAUDCTRLB.B7;
    sbit  BSEL0_USARTD0_BAUDCTRLB_bit at USARTD0_BAUDCTRLB.B0;
    sbit  BSEL1_USARTD0_BAUDCTRLB_bit at USARTD0_BAUDCTRLB.B1;
    sbit  BSEL2_USARTD0_BAUDCTRLB_bit at USARTD0_BAUDCTRLB.B2;
    sbit  BSEL3_USARTD0_BAUDCTRLB_bit at USARTD0_BAUDCTRLB.B3;

sfr data unsigned char volatile USARTD1_DATA              absolute 0x09B0;
sfr data unsigned char volatile USARTD1_STATUS            absolute 0x09B1;
    sbit  RXCIF_USARTD1_STATUS_bit at USARTD1_STATUS.B7;
    sbit  TXCIF_USARTD1_STATUS_bit at USARTD1_STATUS.B6;
    sbit  DREIF_USARTD1_STATUS_bit at USARTD1_STATUS.B5;
    sbit  FERR_USARTD1_STATUS_bit at USARTD1_STATUS.B4;
    sbit  BUFOVF_USARTD1_STATUS_bit at USARTD1_STATUS.B3;
    sbit  PERR_USARTD1_STATUS_bit at USARTD1_STATUS.B2;
    sbit  RXB8_USARTD1_STATUS_bit at USARTD1_STATUS.B0;

sfr data unsigned char volatile USARTD1_CTRLA             absolute 0x09B3;
    sbit  RXCINTLVL0_USARTD1_CTRLA_bit at USARTD1_CTRLA.B4;
    sbit  RXCINTLVL1_USARTD1_CTRLA_bit at USARTD1_CTRLA.B5;
    sbit  TXCINTLVL0_USARTD1_CTRLA_bit at USARTD1_CTRLA.B2;
    sbit  TXCINTLVL1_USARTD1_CTRLA_bit at USARTD1_CTRLA.B3;
    sbit  DREINTLVL0_USARTD1_CTRLA_bit at USARTD1_CTRLA.B0;
    sbit  DREINTLVL1_USARTD1_CTRLA_bit at USARTD1_CTRLA.B1;

sfr data unsigned char volatile USARTD1_CTRLB             absolute 0x09B4;
    sbit  RXEN_USARTD1_CTRLB_bit at USARTD1_CTRLB.B4;
    sbit  TXEN_USARTD1_CTRLB_bit at USARTD1_CTRLB.B3;
    sbit  CLK2X_USARTD1_CTRLB_bit at USARTD1_CTRLB.B2;
    sbit  MPCM_USARTD1_CTRLB_bit at USARTD1_CTRLB.B1;
    sbit  TXB8_USARTD1_CTRLB_bit at USARTD1_CTRLB.B0;

sfr data unsigned char volatile USARTD1_CTRLC             absolute 0x09B5;
    sbit  CMODE0_USARTD1_CTRLC_bit at USARTD1_CTRLC.B6;
    sbit  CMODE1_USARTD1_CTRLC_bit at USARTD1_CTRLC.B7;
    sbit  PMODE0_USARTD1_CTRLC_bit at USARTD1_CTRLC.B4;
    sbit  PMODE1_USARTD1_CTRLC_bit at USARTD1_CTRLC.B5;
    sbit  SBMODE_USARTD1_CTRLC_bit at USARTD1_CTRLC.B3;
    sbit  CHSIZE0_USARTD1_CTRLC_bit at USARTD1_CTRLC.B0;
    sbit  CHSIZE1_USARTD1_CTRLC_bit at USARTD1_CTRLC.B1;
    sbit  CHSIZE2_USARTD1_CTRLC_bit at USARTD1_CTRLC.B2;

sfr data unsigned char volatile USARTD1_BAUDCTRLA         absolute 0x09B6;
    sbit  BSEL0_USARTD1_BAUDCTRLA_bit at USARTD1_BAUDCTRLA.B0;
    sbit  BSEL1_USARTD1_BAUDCTRLA_bit at USARTD1_BAUDCTRLA.B1;
    sbit  BSEL2_USARTD1_BAUDCTRLA_bit at USARTD1_BAUDCTRLA.B2;
    sbit  BSEL3_USARTD1_BAUDCTRLA_bit at USARTD1_BAUDCTRLA.B3;
    sbit  BSEL4_USARTD1_BAUDCTRLA_bit at USARTD1_BAUDCTRLA.B4;
    sbit  BSEL5_USARTD1_BAUDCTRLA_bit at USARTD1_BAUDCTRLA.B5;
    sbit  BSEL6_USARTD1_BAUDCTRLA_bit at USARTD1_BAUDCTRLA.B6;
    sbit  BSEL7_USARTD1_BAUDCTRLA_bit at USARTD1_BAUDCTRLA.B7;

sfr data unsigned char volatile USARTD1_BAUDCTRLB         absolute 0x09B7;
    sbit  BSCALE0_USARTD1_BAUDCTRLB_bit at USARTD1_BAUDCTRLB.B4;
    sbit  BSCALE1_USARTD1_BAUDCTRLB_bit at USARTD1_BAUDCTRLB.B5;
    sbit  BSCALE2_USARTD1_BAUDCTRLB_bit at USARTD1_BAUDCTRLB.B6;
    sbit  BSCALE3_USARTD1_BAUDCTRLB_bit at USARTD1_BAUDCTRLB.B7;
    sbit  BSEL0_USARTD1_BAUDCTRLB_bit at USARTD1_BAUDCTRLB.B0;
    sbit  BSEL1_USARTD1_BAUDCTRLB_bit at USARTD1_BAUDCTRLB.B1;
    sbit  BSEL2_USARTD1_BAUDCTRLB_bit at USARTD1_BAUDCTRLB.B2;
    sbit  BSEL3_USARTD1_BAUDCTRLB_bit at USARTD1_BAUDCTRLB.B3;

sfr data unsigned char volatile USARTE0_DATA              absolute 0x0AA0;
sfr data unsigned char volatile USARTE0_STATUS            absolute 0x0AA1;
    sbit  RXCIF_USARTE0_STATUS_bit at USARTE0_STATUS.B7;
    sbit  TXCIF_USARTE0_STATUS_bit at USARTE0_STATUS.B6;
    sbit  DREIF_USARTE0_STATUS_bit at USARTE0_STATUS.B5;
    sbit  FERR_USARTE0_STATUS_bit at USARTE0_STATUS.B4;
    sbit  BUFOVF_USARTE0_STATUS_bit at USARTE0_STATUS.B3;
    sbit  PERR_USARTE0_STATUS_bit at USARTE0_STATUS.B2;
    sbit  RXB8_USARTE0_STATUS_bit at USARTE0_STATUS.B0;

sfr data unsigned char volatile USARTE0_CTRLA             absolute 0x0AA3;
    sbit  RXCINTLVL0_USARTE0_CTRLA_bit at USARTE0_CTRLA.B4;
    sbit  RXCINTLVL1_USARTE0_CTRLA_bit at USARTE0_CTRLA.B5;
    sbit  TXCINTLVL0_USARTE0_CTRLA_bit at USARTE0_CTRLA.B2;
    sbit  TXCINTLVL1_USARTE0_CTRLA_bit at USARTE0_CTRLA.B3;
    sbit  DREINTLVL0_USARTE0_CTRLA_bit at USARTE0_CTRLA.B0;
    sbit  DREINTLVL1_USARTE0_CTRLA_bit at USARTE0_CTRLA.B1;

sfr data unsigned char volatile USARTE0_CTRLB             absolute 0x0AA4;
    sbit  RXEN_USARTE0_CTRLB_bit at USARTE0_CTRLB.B4;
    sbit  TXEN_USARTE0_CTRLB_bit at USARTE0_CTRLB.B3;
    sbit  CLK2X_USARTE0_CTRLB_bit at USARTE0_CTRLB.B2;
    sbit  MPCM_USARTE0_CTRLB_bit at USARTE0_CTRLB.B1;
    sbit  TXB8_USARTE0_CTRLB_bit at USARTE0_CTRLB.B0;

sfr data unsigned char volatile USARTE0_CTRLC             absolute 0x0AA5;
    sbit  CMODE0_USARTE0_CTRLC_bit at USARTE0_CTRLC.B6;
    sbit  CMODE1_USARTE0_CTRLC_bit at USARTE0_CTRLC.B7;
    sbit  PMODE0_USARTE0_CTRLC_bit at USARTE0_CTRLC.B4;
    sbit  PMODE1_USARTE0_CTRLC_bit at USARTE0_CTRLC.B5;
    sbit  SBMODE_USARTE0_CTRLC_bit at USARTE0_CTRLC.B3;
    sbit  CHSIZE0_USARTE0_CTRLC_bit at USARTE0_CTRLC.B0;
    sbit  CHSIZE1_USARTE0_CTRLC_bit at USARTE0_CTRLC.B1;
    sbit  CHSIZE2_USARTE0_CTRLC_bit at USARTE0_CTRLC.B2;

sfr data unsigned char volatile USARTE0_BAUDCTRLA         absolute 0x0AA6;
    sbit  BSEL0_USARTE0_BAUDCTRLA_bit at USARTE0_BAUDCTRLA.B0;
    sbit  BSEL1_USARTE0_BAUDCTRLA_bit at USARTE0_BAUDCTRLA.B1;
    sbit  BSEL2_USARTE0_BAUDCTRLA_bit at USARTE0_BAUDCTRLA.B2;
    sbit  BSEL3_USARTE0_BAUDCTRLA_bit at USARTE0_BAUDCTRLA.B3;
    sbit  BSEL4_USARTE0_BAUDCTRLA_bit at USARTE0_BAUDCTRLA.B4;
    sbit  BSEL5_USARTE0_BAUDCTRLA_bit at USARTE0_BAUDCTRLA.B5;
    sbit  BSEL6_USARTE0_BAUDCTRLA_bit at USARTE0_BAUDCTRLA.B6;
    sbit  BSEL7_USARTE0_BAUDCTRLA_bit at USARTE0_BAUDCTRLA.B7;

sfr data unsigned char volatile USARTE0_BAUDCTRLB         absolute 0x0AA7;
    sbit  BSCALE0_USARTE0_BAUDCTRLB_bit at USARTE0_BAUDCTRLB.B4;
    sbit  BSCALE1_USARTE0_BAUDCTRLB_bit at USARTE0_BAUDCTRLB.B5;
    sbit  BSCALE2_USARTE0_BAUDCTRLB_bit at USARTE0_BAUDCTRLB.B6;
    sbit  BSCALE3_USARTE0_BAUDCTRLB_bit at USARTE0_BAUDCTRLB.B7;
    sbit  BSEL0_USARTE0_BAUDCTRLB_bit at USARTE0_BAUDCTRLB.B0;
    sbit  BSEL1_USARTE0_BAUDCTRLB_bit at USARTE0_BAUDCTRLB.B1;
    sbit  BSEL2_USARTE0_BAUDCTRLB_bit at USARTE0_BAUDCTRLB.B2;
    sbit  BSEL3_USARTE0_BAUDCTRLB_bit at USARTE0_BAUDCTRLB.B3;

sfr data unsigned char volatile SPIC_CTRL                 absolute 0x08C0;
    sbit  CLK2X_SPIC_CTRL_bit at SPIC_CTRL.B7;
    sbit  ENABLE_SPIC_CTRL_bit at SPIC_CTRL.B6;
    const register unsigned short int DORD = 5;
    sbit  DORD_bit at SPIC_CTRL.B5;
    const register unsigned short int MASTER = 4;
    sbit  MASTER_bit at SPIC_CTRL.B4;
    const register unsigned short int MODE0 = 2;
    sbit  MODE0_bit at SPIC_CTRL.B2;
    const register unsigned short int MODE1 = 3;
    sbit  MODE1_bit at SPIC_CTRL.B3;
    sbit  PRESCALER0_SPIC_CTRL_bit at SPIC_CTRL.B0;
    sbit  PRESCALER1_SPIC_CTRL_bit at SPIC_CTRL.B1;

sfr data unsigned char volatile SPIC_INTCTRL              absolute 0x08C1;
    sbit  INTLVL0_SPIC_INTCTRL_bit at SPIC_INTCTRL.B0;
    sbit  INTLVL1_SPIC_INTCTRL_bit at SPIC_INTCTRL.B1;

sfr data unsigned char volatile SPIC_STATUS               absolute 0x08C2;
    const register unsigned short int IF_ = 7;
    sbit  IF_bit at SPIC_STATUS.B7;
    const register unsigned short int WRCOL = 6;
    sbit  WRCOL_bit at SPIC_STATUS.B6;

sfr data unsigned char volatile SPIC_DATA                 absolute 0x08C3;
sfr data unsigned char volatile SPID_CTRL                 absolute 0x09C0;
    sbit  CLK2X_SPID_CTRL_bit at SPID_CTRL.B7;
    sbit  ENABLE_SPID_CTRL_bit at SPID_CTRL.B6;
    sbit  DORD_SPID_CTRL_bit at SPID_CTRL.B5;
    sbit  MASTER_SPID_CTRL_bit at SPID_CTRL.B4;
    sbit  MODE0_SPID_CTRL_bit at SPID_CTRL.B2;
    sbit  MODE1_SPID_CTRL_bit at SPID_CTRL.B3;
    sbit  PRESCALER0_SPID_CTRL_bit at SPID_CTRL.B0;
    sbit  PRESCALER1_SPID_CTRL_bit at SPID_CTRL.B1;

sfr data unsigned char volatile SPID_INTCTRL              absolute 0x09C1;
    sbit  INTLVL0_SPID_INTCTRL_bit at SPID_INTCTRL.B0;
    sbit  INTLVL1_SPID_INTCTRL_bit at SPID_INTCTRL.B1;

sfr data unsigned char volatile SPID_STATUS               absolute 0x09C2;
    sbit  IF__SPID_STATUS_bit at SPID_STATUS.B7;
    sbit  WRCOL_SPID_STATUS_bit at SPID_STATUS.B6;

sfr data unsigned char volatile SPID_DATA                 absolute 0x09C3;
sfr data unsigned char volatile IRCOM_CTRL                absolute 0x08F8;
    sbit  EVSEL0_IRCOM_CTRL_bit at IRCOM_CTRL.B0;
    sbit  EVSEL1_IRCOM_CTRL_bit at IRCOM_CTRL.B1;
    sbit  EVSEL2_IRCOM_CTRL_bit at IRCOM_CTRL.B2;
    sbit  EVSEL3_IRCOM_CTRL_bit at IRCOM_CTRL.B3;

sfr data unsigned char volatile IRCOM_TXPLCTRL            absolute 0x08F9;
sfr data unsigned char volatile IRCOM_RXPLCTRL            absolute 0x08FA;
sfr io   unsigned char volatile FUSE_FUSEBYTE1            absolute 0x0001;
    const register unsigned short int WDWP0 = 4;
    sbit  WDWP0_bit at FUSE_FUSEBYTE1.B4;
    const register unsigned short int WDWP1 = 5;
    sbit  WDWP1_bit at FUSE_FUSEBYTE1.B5;
    const register unsigned short int WDWP2 = 6;
    sbit  WDWP2_bit at FUSE_FUSEBYTE1.B6;
    const register unsigned short int WDWP3 = 7;
    sbit  WDWP3_bit at FUSE_FUSEBYTE1.B7;
    const register unsigned short int WDP0 = 0;
    sbit  WDP0_bit at FUSE_FUSEBYTE1.B0;
    const register unsigned short int WDP1 = 1;
    sbit  WDP1_bit at FUSE_FUSEBYTE1.B1;
    const register unsigned short int WDP2 = 2;
    sbit  WDP2_bit at FUSE_FUSEBYTE1.B2;
    const register unsigned short int WDP3 = 3;
    sbit  WDP3_bit at FUSE_FUSEBYTE1.B3;

sfr io   unsigned char volatile FUSE_FUSEBYTE2            absolute 0x0002;
    const register unsigned short int BOOTRST = 6;
    sbit  BOOTRST_bit at FUSE_FUSEBYTE2.B6;
    const register unsigned short int TOSCSEL = 5;
    sbit  TOSCSEL_bit at FUSE_FUSEBYTE2.B5;
    const register unsigned short int BODPD0 = 0;
    sbit  BODPD0_bit at FUSE_FUSEBYTE2.B0;
    const register unsigned short int BODPD1 = 1;
    sbit  BODPD1_bit at FUSE_FUSEBYTE2.B1;

sfr io   unsigned char volatile FUSE_FUSEBYTE4            absolute 0x0004;
    const register unsigned short int RSTDISBL = 4;
    sbit  RSTDISBL_bit at FUSE_FUSEBYTE4.B4;
    const register unsigned short int SUT0 = 2;
    sbit  SUT0_bit at FUSE_FUSEBYTE4.B2;
    const register unsigned short int SUT1 = 3;
    sbit  SUT1_bit at FUSE_FUSEBYTE4.B3;
    const register unsigned short int WDLOCK = 1;
    sbit  WDLOCK_bit at FUSE_FUSEBYTE4.B1;

sfr io   unsigned char volatile FUSE_FUSEBYTE5            absolute 0x0005;
    const register unsigned short int BODACT0 = 4;
    sbit  BODACT0_bit at FUSE_FUSEBYTE5.B4;
    const register unsigned short int BODACT1 = 5;
    sbit  BODACT1_bit at FUSE_FUSEBYTE5.B5;
    const register unsigned short int EESAVE = 3;
    sbit  EESAVE_bit at FUSE_FUSEBYTE5.B3;
    const register unsigned short int BODLVL0 = 0;
    sbit  BODLVL0_bit at FUSE_FUSEBYTE5.B0;
    const register unsigned short int BODLVL1 = 1;
    sbit  BODLVL1_bit at FUSE_FUSEBYTE5.B1;
    const register unsigned short int BODLVL2 = 2;
    sbit  BODLVL2_bit at FUSE_FUSEBYTE5.B2;

sfr io   unsigned char volatile LOCKBIT_LOCKBITS          absolute 0x0000;
    sbit  BLBB0_LOCKBIT_LOCKBITS_bit at LOCKBIT_LOCKBITS.B6;
    sbit  BLBB1_LOCKBIT_LOCKBITS_bit at LOCKBIT_LOCKBITS.B7;
    sbit  BLBA0_LOCKBIT_LOCKBITS_bit at LOCKBIT_LOCKBITS.B4;
    sbit  BLBA1_LOCKBIT_LOCKBITS_bit at LOCKBIT_LOCKBITS.B5;
    sbit  BLBAT0_LOCKBIT_LOCKBITS_bit at LOCKBIT_LOCKBITS.B2;
    sbit  BLBAT1_LOCKBIT_LOCKBITS_bit at LOCKBIT_LOCKBITS.B3;
    sbit  LB0_LOCKBIT_LOCKBITS_bit at LOCKBIT_LOCKBITS.B0;
    sbit  LB1_LOCKBIT_LOCKBITS_bit at LOCKBIT_LOCKBITS.B1;

sfr io   unsigned char volatile PROD_SIGNATURES_RCOSC2M   absolute 0x0000;
sfr io   unsigned char volatile PROD_SIGNATURES_RCOSC2MA  absolute 0x0001;
sfr io   unsigned char volatile PROD_SIGNATURES_RCOSC32K  absolute 0x0002;
sfr io   unsigned char volatile PROD_SIGNATURES_RCOSC32M  absolute 0x0003;
sfr io   unsigned char volatile PROD_SIGNATURES_RCOSC32MA absolute 0x0004;
sfr io   unsigned char volatile PROD_SIGNATURES_LOTNUM0   absolute 0x0008;
sfr io   unsigned char volatile PROD_SIGNATURES_LOTNUM1   absolute 0x0009;
sfr io   unsigned char volatile PROD_SIGNATURES_LOTNUM2   absolute 0x000A;
sfr io   unsigned char volatile PROD_SIGNATURES_LOTNUM3   absolute 0x000B;
sfr io   unsigned char volatile PROD_SIGNATURES_LOTNUM4   absolute 0x000C;
sfr io   unsigned char volatile PROD_SIGNATURES_LOTNUM5   absolute 0x000D;
sfr io   unsigned char volatile PROD_SIGNATURES_WAFNUM    absolute 0x0010;
sfr io   unsigned char volatile PROD_SIGNATURES_COORDX0   absolute 0x0012;
sfr io   unsigned char volatile PROD_SIGNATURES_COORDX1   absolute 0x0013;
sfr io   unsigned char volatile PROD_SIGNATURES_COORDY0   absolute 0x0014;
sfr io   unsigned char volatile PROD_SIGNATURES_COORDY1   absolute 0x0015;
sfr io   unsigned char volatile PROD_SIGNATURES_USBCAL0   absolute 0x001A;
sfr io   unsigned char volatile PROD_SIGNATURES_USBCAL1   absolute 0x001B;
sfr io   unsigned char volatile PROD_SIGNATURES_USBRCOSC  absolute 0x001C;
sfr io   unsigned char volatile PROD_SIGNATURES_USBRCOSCA absolute 0x001D;
sfr io   unsigned char volatile PROD_SIGNATURES_ADCACAL0  absolute 0x0020;
sfr io   unsigned char volatile PROD_SIGNATURES_ADCACAL1  absolute 0x0021;
sfr io   unsigned char volatile PROD_SIGNATURES_ADCBCAL0  absolute 0x0024;
sfr io   unsigned char volatile PROD_SIGNATURES_ADCBCAL1  absolute 0x0025;
sfr io   unsigned char volatile PROD_SIGNATURES_TEMPSENSE0 absolute 0x002E;
sfr io   unsigned char volatile PROD_SIGNATURES_TEMPSENSE1 absolute 0x002F;
sfr io   unsigned char volatile PROD_SIGNATURES_DACA0OFFCAL absolute 0x0030;
sfr io   unsigned char volatile PROD_SIGNATURES_DACA0GAINCAL absolute 0x0031;
sfr io   unsigned char volatile PROD_SIGNATURES_DACB0OFFCAL absolute 0x0032;
sfr io   unsigned char volatile PROD_SIGNATURES_DACB0GAINCAL absolute 0x0033;
sfr io   unsigned char volatile PROD_SIGNATURES_DACA1OFFCAL absolute 0x0034;
sfr io   unsigned char volatile PROD_SIGNATURES_DACA1GAINCAL absolute 0x0035;
sfr io   unsigned char volatile PROD_SIGNATURES_DACB1OFFCAL absolute 0x0036;
sfr io   unsigned char volatile PROD_SIGNATURES_DACB1GAINCAL absolute 0x0037;
