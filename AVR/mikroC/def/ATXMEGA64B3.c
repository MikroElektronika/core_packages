// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00011000;

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

// USB interrupt vectors
const unsigned short IVT_ADDR_USB_BUSEVENT = 0x003E; // SOF, suspend, resume, reset bus event interrupts, crc, underflow, overflow and stall error interrupts
const unsigned short IVT_ADDR_USB_TRNCOMPL = 0x0040; // Transaction complete interrupt

// LCD interrupt vectors
const unsigned short IVT_ADDR_LCD_INT = 0x0046; // LCD Interrupt

// AES interrupt vectors
const unsigned short IVT_ADDR_AES_INT = 0x0048; // AES Interrupt

// NVM interrupt vectors
const unsigned short IVT_ADDR_NVM_EE = 0x004A; // EE Interrupt
const unsigned short IVT_ADDR_NVM_SPM = 0x004C; // SPM Interrupt

// PORTB interrupt vectors
const unsigned short IVT_ADDR_PORTB_INT0 = 0x004E; // External Interrupt 0
const unsigned short IVT_ADDR_PORTB_INT1 = 0x0050; // External Interrupt 1

// ACB interrupt vectors
const unsigned short IVT_ADDR_ACB_AC0 = 0x0052; // AC0 Interrupt
const unsigned short IVT_ADDR_ACB_AC1 = 0x0054; // AC1 Interrupt
const unsigned short IVT_ADDR_ACB_ACW = 0x0056; // ACW Window Mode Interrupt

// ADCB interrupt vectors
const unsigned short IVT_ADDR_ADCB_CH0 = 0x0058; // Interrupt 0

// PORTD interrupt vectors
const unsigned short IVT_ADDR_PORTD_INT0 = 0x0060; // External Interrupt 0
const unsigned short IVT_ADDR_PORTD_INT1 = 0x0062; // External Interrupt 1

// PORTG interrupt vectors
const unsigned short IVT_ADDR_PORTG_INT0 = 0x0064; // External Interrupt 0
const unsigned short IVT_ADDR_PORTG_INT1 = 0x0066; // External Interrupt 1

// PORTM interrupt vectors
const unsigned short IVT_ADDR_PORTM_INT0 = 0x0068; // External Interrupt 0
const unsigned short IVT_ADDR_PORTM_INT1 = 0x006A; // External Interrupt 1

sfr io   unsigned char volatile GPIO_GPIOR0               absolute 0x0000;
sfr io   unsigned char volatile GPIO_GPIOR1               absolute 0x0001;
sfr io   unsigned char volatile GPIO_GPIOR2               absolute 0x0002;
sfr io   unsigned char volatile GPIO_GPIOR3               absolute 0x0003;
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
    const register unsigned short int XOSCSEL4 = 4;
    sbit  XOSCSEL4_bit at OSC_XOSCCTRL.B4;

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
sfr data unsigned char volatile PR_PRGEN                  absolute 0x0070;
    const register unsigned short int LCD = 7;
    sbit  LCD_bit at PR_PRGEN.B7;
    const register unsigned short int USB = 6;
    sbit  USB_bit at PR_PRGEN.B6;
    const register unsigned short int AES = 4;
    sbit  AES_bit at PR_PRGEN.B4;
    const register unsigned short int RTC = 2;
    sbit  RTC_bit at PR_PRGEN.B2;
    const register unsigned short int EVSYS = 1;
    sbit  EVSYS_bit at PR_PRGEN.B1;
    const register unsigned short int DMA_ = 0;
    sbit  DMA_bit at PR_PRGEN.B0;

sfr data unsigned char volatile PR_PRPA                   absolute 0x0071;
    const register unsigned short int ADC = 1;
    sbit  ADC_bit at PR_PRPA.B1;
    const register unsigned short int AC = 0;
    sbit  AC_bit at PR_PRPA.B0;

sfr data unsigned char volatile PR_PRPB                   absolute 0x0072;
    sbit  ADC_PR_PRPB_bit at PR_PRPB.B1;
    sbit  AC_PR_PRPB_bit at PR_PRPB.B0;

sfr data unsigned char volatile PR_PRPC                   absolute 0x0073;
    const register unsigned short int TWI = 6;
    sbit  TWI_bit at PR_PRPC.B6;
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

sfr data unsigned char volatile PR_PRPE                   absolute 0x0075;
    sbit  USART0_PR_PRPE_bit at PR_PRPE.B4;
    sbit  TC0_PR_PRPE_bit at PR_PRPE.B0;

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

sfr data unsigned char volatile PORTCFG_EVOUTSEL          absolute 0x00B6;
    const register unsigned short int EVOUTSEL = 2;
    sbit  EVOUTSEL_bit at PORTCFG_EVOUTSEL.B2;

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
    const register unsigned short int DBUFMODE = 2;
    sbit  DBUFMODE_bit at DMA_CTRL.B2;
    const register unsigned short int PRIMODE = 0;
    sbit  PRIMODE_bit at DMA_CTRL.B0;

sfr data unsigned char volatile DMA_INTFLAGS              absolute 0x0103;
    const register unsigned short int CH1ERRIF = 5;
    sbit  CH1ERRIF_bit at DMA_INTFLAGS.B5;
    const register unsigned short int CH0ERRIF = 4;
    sbit  CH0ERRIF_bit at DMA_INTFLAGS.B4;
    const register unsigned short int CH1TRNIF = 1;
    sbit  CH1TRNIF_bit at DMA_INTFLAGS.B1;
    const register unsigned short int CH0TRNIF = 0;
    sbit  CH0TRNIF_bit at DMA_INTFLAGS.B0;

sfr data unsigned char volatile DMA_STATUS                absolute 0x0104;
    const register unsigned short int CH1BUSY = 5;
    sbit  CH1BUSY_bit at DMA_STATUS.B5;
    const register unsigned short int CH0BUSY = 4;
    sbit  CH0BUSY_bit at DMA_STATUS.B4;
    const register unsigned short int CH1PEND = 1;
    sbit  CH1PEND_bit at DMA_STATUS.B1;
    const register unsigned short int CH0PEND = 0;
    sbit  CH0PEND_bit at DMA_STATUS.B0;

sfr data unsigned int  volatile DMA_TEMP                  absolute 0x0106;
sfr data unsigned char volatile DMA_CH0_CTRLA             absolute 0x0110;
    const register unsigned short int CHEN = 7;
    sbit  CHEN_bit at DMA_CH0_CTRLA.B7;
    const register unsigned short int CHRST = 6;
    sbit  CHRST_bit at DMA_CH0_CTRLA.B6;
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
sfr data unsigned char volatile DMA_CH0_DESTADDR0         absolute 0x011C;
sfr data unsigned char volatile DMA_CH0_DESTADDR1         absolute 0x011D;
sfr data unsigned char volatile DMA_CH1_CTRLA             absolute 0x0120;
    sbit  CHEN_DMA_CH1_CTRLA_bit at DMA_CH1_CTRLA.B7;
    sbit  CHRST_DMA_CH1_CTRLA_bit at DMA_CH1_CTRLA.B6;
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
sfr data unsigned char volatile DMA_CH1_DESTADDR0         absolute 0x012C;
sfr data unsigned char volatile DMA_CH1_DESTADDR1         absolute 0x012D;
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
    sbit  DIGFILT0_EVSYS_CH2CTRL_bit at EVSYS_CH2CTRL.B0;
    sbit  DIGFILT1_EVSYS_CH2CTRL_bit at EVSYS_CH2CTRL.B1;
    sbit  DIGFILT2_EVSYS_CH2CTRL_bit at EVSYS_CH2CTRL.B2;

sfr data unsigned char volatile EVSYS_CH3CTRL             absolute 0x018B;
    sbit  DIGFILT0_EVSYS_CH3CTRL_bit at EVSYS_CH3CTRL.B0;
    sbit  DIGFILT1_EVSYS_CH3CTRL_bit at EVSYS_CH3CTRL.B1;
    sbit  DIGFILT2_EVSYS_CH3CTRL_bit at EVSYS_CH3CTRL.B2;

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

sfr data unsigned char volatile ADCB_CTRLA                absolute 0x0240;
    const register unsigned short int CH0START = 2;
    sbit  CH0START_bit at ADCB_CTRLA.B2;
    const register unsigned short int FLUSH = 1;
    sbit  FLUSH_bit at ADCB_CTRLA.B1;
    sbit  ENABLE_ADCB_CTRLA_bit at ADCB_CTRLA.B0;

sfr data unsigned char volatile ADCB_CTRLB                absolute 0x0241;
    const register unsigned short int CURRLIMIT0 = 5;
    sbit  CURRLIMIT0_bit at ADCB_CTRLB.B5;
    const register unsigned short int CURRLIMIT1 = 6;
    sbit  CURRLIMIT1_bit at ADCB_CTRLB.B6;
    const register unsigned short int CONMODE = 4;
    sbit  CONMODE_bit at ADCB_CTRLB.B4;
    const register unsigned short int FREERUN = 3;
    sbit  FREERUN_bit at ADCB_CTRLB.B3;
    const register unsigned short int RESOLUTION0 = 1;
    sbit  RESOLUTION0_bit at ADCB_CTRLB.B1;
    const register unsigned short int RESOLUTION1 = 2;
    sbit  RESOLUTION1_bit at ADCB_CTRLB.B2;

sfr data unsigned char volatile ADCB_REFCTRL              absolute 0x0242;
    const register unsigned short int REFSEL0 = 4;
    sbit  REFSEL0_bit at ADCB_REFCTRL.B4;
    const register unsigned short int REFSEL1 = 5;
    sbit  REFSEL1_bit at ADCB_REFCTRL.B5;
    const register unsigned short int REFSEL2 = 6;
    sbit  REFSEL2_bit at ADCB_REFCTRL.B6;
    const register unsigned short int BANDGAP = 1;
    sbit  BANDGAP_bit at ADCB_REFCTRL.B1;
    const register unsigned short int TEMPREF = 0;
    sbit  TEMPREF_bit at ADCB_REFCTRL.B0;

sfr data unsigned char volatile ADCB_EVCTRL               absolute 0x0243;
    const register unsigned short int EVSEL0 = 3;
    sbit  EVSEL0_bit at ADCB_EVCTRL.B3;
    const register unsigned short int EVSEL1 = 4;
    sbit  EVSEL1_bit at ADCB_EVCTRL.B4;
    const register unsigned short int EVACT0 = 0;
    sbit  EVACT0_bit at ADCB_EVCTRL.B0;
    const register unsigned short int EVACT1 = 1;
    sbit  EVACT1_bit at ADCB_EVCTRL.B1;
    const register unsigned short int EVACT2 = 2;
    sbit  EVACT2_bit at ADCB_EVCTRL.B2;

sfr data unsigned char volatile ADCB_PRESCALER            absolute 0x0244;
    const register unsigned short int PRESCALER0 = 0;
    sbit  PRESCALER0_bit at ADCB_PRESCALER.B0;
    const register unsigned short int PRESCALER1 = 1;
    sbit  PRESCALER1_bit at ADCB_PRESCALER.B1;
    const register unsigned short int PRESCALER2 = 2;
    sbit  PRESCALER2_bit at ADCB_PRESCALER.B2;

sfr data unsigned char volatile ADCB_INTFLAGS             absolute 0x0246;
    const register unsigned short int CH0IF = 0;
    sbit  CH0IF_bit at ADCB_INTFLAGS.B0;

sfr data unsigned char volatile ADCB_TEMP                 absolute 0x0247;
sfr data unsigned char volatile ADCB_SAMPCTRL             absolute 0x0248;
    const register unsigned short int SAMPVAL0 = 0;
    sbit  SAMPVAL0_bit at ADCB_SAMPCTRL.B0;
    const register unsigned short int SAMPVAL1 = 1;
    sbit  SAMPVAL1_bit at ADCB_SAMPCTRL.B1;
    const register unsigned short int SAMPVAL2 = 2;
    sbit  SAMPVAL2_bit at ADCB_SAMPCTRL.B2;
    const register unsigned short int SAMPVAL3 = 3;
    sbit  SAMPVAL3_bit at ADCB_SAMPCTRL.B3;
    const register unsigned short int SAMPVAL4 = 4;
    sbit  SAMPVAL4_bit at ADCB_SAMPCTRL.B4;
    const register unsigned short int SAMPVAL5 = 5;
    sbit  SAMPVAL5_bit at ADCB_SAMPCTRL.B5;

sfr data unsigned int  volatile ADCB_CAL                  absolute 0x024C;
sfr data unsigned int  volatile ADCB_CH0RES               absolute 0x0250;
sfr data unsigned char volatile ADCB_CH0RESL              absolute 0x0250;
sfr data unsigned char volatile ADCB_CH0RESH              absolute 0x0251;
sfr data unsigned int  volatile ADCB_CMP                  absolute 0x0258;
sfr data unsigned char volatile ADCB_CH0_CTRL             absolute 0x0260;
    sbit  START_ADCB_CH0_CTRL_bit at ADCB_CH0_CTRL.B7;
    const register unsigned short int GAIN0 = 2;
    sbit  GAIN0_bit at ADCB_CH0_CTRL.B2;
    const register unsigned short int GAIN1 = 3;
    sbit  GAIN1_bit at ADCB_CH0_CTRL.B3;
    const register unsigned short int GAIN2 = 4;
    sbit  GAIN2_bit at ADCB_CH0_CTRL.B4;
    const register unsigned short int INPUTMODE0 = 0;
    sbit  INPUTMODE0_bit at ADCB_CH0_CTRL.B0;
    const register unsigned short int INPUTMODE1 = 1;
    sbit  INPUTMODE1_bit at ADCB_CH0_CTRL.B1;

sfr data unsigned char volatile ADCB_CH0_MUXCTRL          absolute 0x0261;
    const register unsigned short int MUXPOS0 = 3;
    sbit  MUXPOS0_bit at ADCB_CH0_MUXCTRL.B3;
    const register unsigned short int MUXPOS1 = 4;
    sbit  MUXPOS1_bit at ADCB_CH0_MUXCTRL.B4;
    const register unsigned short int MUXPOS2 = 5;
    sbit  MUXPOS2_bit at ADCB_CH0_MUXCTRL.B5;
    const register unsigned short int MUXPOS3 = 6;
    sbit  MUXPOS3_bit at ADCB_CH0_MUXCTRL.B6;
    const register unsigned short int MUXINT0 = 3;
    sbit  MUXINT0_bit at ADCB_CH0_MUXCTRL.B3;
    const register unsigned short int MUXINT1 = 4;
    sbit  MUXINT1_bit at ADCB_CH0_MUXCTRL.B4;
    const register unsigned short int MUXINT2 = 5;
    sbit  MUXINT2_bit at ADCB_CH0_MUXCTRL.B5;
    const register unsigned short int MUXINT3 = 6;
    sbit  MUXINT3_bit at ADCB_CH0_MUXCTRL.B6;
    const register unsigned short int MUXNEG0 = 0;
    sbit  MUXNEG0_bit at ADCB_CH0_MUXCTRL.B0;
    const register unsigned short int MUXNEG1 = 1;
    sbit  MUXNEG1_bit at ADCB_CH0_MUXCTRL.B1;

sfr data unsigned char volatile ADCB_CH0_INTCTRL          absolute 0x0262;
    const register unsigned short int INTMODE0 = 2;
    sbit  INTMODE0_bit at ADCB_CH0_INTCTRL.B2;
    const register unsigned short int INTMODE1 = 3;
    sbit  INTMODE1_bit at ADCB_CH0_INTCTRL.B3;
    sbit  INTLVL0_ADCB_CH0_INTCTRL_bit at ADCB_CH0_INTCTRL.B0;
    sbit  INTLVL1_ADCB_CH0_INTCTRL_bit at ADCB_CH0_INTCTRL.B1;

sfr data unsigned char volatile ADCB_CH0_INTFLAGS         absolute 0x0263;
    const register unsigned short int CHIF = 0;
    sbit  CHIF_bit at ADCB_CH0_INTFLAGS.B0;

sfr data unsigned int  volatile ADCB_CH0_RES              absolute 0x0264;
sfr data unsigned char volatile ADCB_CH0_RESL             absolute 0x0264;
sfr data unsigned char volatile ADCB_CH0_RESH             absolute 0x0265;
sfr data unsigned char volatile ADCB_CH0_SCAN             absolute 0x0266;
    const register unsigned short int OFFSET0 = 4;
    sbit  OFFSET0_bit at ADCB_CH0_SCAN.B4;
    const register unsigned short int OFFSET1 = 5;
    sbit  OFFSET1_bit at ADCB_CH0_SCAN.B5;
    const register unsigned short int OFFSET2 = 6;
    sbit  OFFSET2_bit at ADCB_CH0_SCAN.B6;
    const register unsigned short int OFFSET3 = 7;
    sbit  OFFSET3_bit at ADCB_CH0_SCAN.B7;
    const register unsigned short int COUNT0 = 0;
    sbit  COUNT0_bit at ADCB_CH0_SCAN.B0;
    const register unsigned short int COUNT1 = 1;
    sbit  COUNT1_bit at ADCB_CH0_SCAN.B1;
    const register unsigned short int COUNT2 = 2;
    sbit  COUNT2_bit at ADCB_CH0_SCAN.B2;
    const register unsigned short int COUNT3 = 3;
    sbit  COUNT3_bit at ADCB_CH0_SCAN.B3;

sfr data unsigned char volatile ACB_AC0CTRL               absolute 0x0390;
    sbit  INTMODE0_ACB_AC0CTRL_bit at ACB_AC0CTRL.B6;
    sbit  INTMODE1_ACB_AC0CTRL_bit at ACB_AC0CTRL.B7;
    sbit  INTLVL0_ACB_AC0CTRL_bit at ACB_AC0CTRL.B4;
    sbit  INTLVL1_ACB_AC0CTRL_bit at ACB_AC0CTRL.B5;
    const register unsigned short int HYSMODE0 = 1;
    sbit  HYSMODE0_bit at ACB_AC0CTRL.B1;
    const register unsigned short int HYSMODE1 = 2;
    sbit  HYSMODE1_bit at ACB_AC0CTRL.B2;
    sbit  ENABLE_ACB_AC0CTRL_bit at ACB_AC0CTRL.B0;

sfr data unsigned char volatile ACB_AC1CTRL               absolute 0x0391;
    sbit  INTMODE0_ACB_AC1CTRL_bit at ACB_AC1CTRL.B6;
    sbit  INTMODE1_ACB_AC1CTRL_bit at ACB_AC1CTRL.B7;
    sbit  INTLVL0_ACB_AC1CTRL_bit at ACB_AC1CTRL.B4;
    sbit  INTLVL1_ACB_AC1CTRL_bit at ACB_AC1CTRL.B5;
    sbit  HYSMODE0_ACB_AC1CTRL_bit at ACB_AC1CTRL.B1;
    sbit  HYSMODE1_ACB_AC1CTRL_bit at ACB_AC1CTRL.B2;
    sbit  ENABLE_ACB_AC1CTRL_bit at ACB_AC1CTRL.B0;

sfr data unsigned char volatile ACB_AC0MUXCTRL            absolute 0x0392;
    sbit  MUXPOS0_ACB_AC0MUXCTRL_bit at ACB_AC0MUXCTRL.B3;
    sbit  MUXPOS1_ACB_AC0MUXCTRL_bit at ACB_AC0MUXCTRL.B4;
    sbit  MUXPOS2_ACB_AC0MUXCTRL_bit at ACB_AC0MUXCTRL.B5;
    sbit  MUXNEG0_ACB_AC0MUXCTRL_bit at ACB_AC0MUXCTRL.B0;
    sbit  MUXNEG1_ACB_AC0MUXCTRL_bit at ACB_AC0MUXCTRL.B1;
    const register unsigned short int MUXNEG2 = 2;
    sbit  MUXNEG2_bit at ACB_AC0MUXCTRL.B2;

sfr data unsigned char volatile ACB_AC1MUXCTRL            absolute 0x0393;
    sbit  MUXPOS0_ACB_AC1MUXCTRL_bit at ACB_AC1MUXCTRL.B3;
    sbit  MUXPOS1_ACB_AC1MUXCTRL_bit at ACB_AC1MUXCTRL.B4;
    sbit  MUXPOS2_ACB_AC1MUXCTRL_bit at ACB_AC1MUXCTRL.B5;
    sbit  MUXNEG0_ACB_AC1MUXCTRL_bit at ACB_AC1MUXCTRL.B0;
    sbit  MUXNEG1_ACB_AC1MUXCTRL_bit at ACB_AC1MUXCTRL.B1;
    sbit  MUXNEG2_ACB_AC1MUXCTRL_bit at ACB_AC1MUXCTRL.B2;

sfr data unsigned char volatile ACB_CTRLA                 absolute 0x0394;
    const register unsigned short int AC1OUT = 1;
    sbit  AC1OUT_bit at ACB_CTRLA.B1;
    const register unsigned short int AC0OUT = 0;
    sbit  AC0OUT_bit at ACB_CTRLA.B0;

sfr data unsigned char volatile ACB_CTRLB                 absolute 0x0395;
    const register unsigned short int SCALEFAC0 = 0;
    sbit  SCALEFAC0_bit at ACB_CTRLB.B0;
    const register unsigned short int SCALEFAC1 = 1;
    sbit  SCALEFAC1_bit at ACB_CTRLB.B1;
    const register unsigned short int SCALEFAC2 = 2;
    sbit  SCALEFAC2_bit at ACB_CTRLB.B2;
    const register unsigned short int SCALEFAC3 = 3;
    sbit  SCALEFAC3_bit at ACB_CTRLB.B3;
    const register unsigned short int SCALEFAC4 = 4;
    sbit  SCALEFAC4_bit at ACB_CTRLB.B4;
    const register unsigned short int SCALEFAC5 = 5;
    sbit  SCALEFAC5_bit at ACB_CTRLB.B5;

sfr data unsigned char volatile ACB_WINCTRL               absolute 0x0396;
    sbit  WEN_ACB_WINCTRL_bit at ACB_WINCTRL.B4;
    const register unsigned short int WINTMODE0 = 2;
    sbit  WINTMODE0_bit at ACB_WINCTRL.B2;
    const register unsigned short int WINTMODE1 = 3;
    sbit  WINTMODE1_bit at ACB_WINCTRL.B3;
    const register unsigned short int WINTLVL0 = 0;
    sbit  WINTLVL0_bit at ACB_WINCTRL.B0;
    const register unsigned short int WINTLVL1 = 1;
    sbit  WINTLVL1_bit at ACB_WINCTRL.B1;

sfr data unsigned char volatile ACB_STATUS                absolute 0x0397;
    const register unsigned short int WSTATE0 = 6;
    sbit  WSTATE0_bit at ACB_STATUS.B6;
    const register unsigned short int WSTATE1 = 7;
    sbit  WSTATE1_bit at ACB_STATUS.B7;
    const register unsigned short int AC1STATE = 5;
    sbit  AC1STATE_bit at ACB_STATUS.B5;
    const register unsigned short int AC0STATE = 4;
    sbit  AC0STATE_bit at ACB_STATUS.B4;
    const register unsigned short int WIF = 2;
    sbit  WIF_bit at ACB_STATUS.B2;
    const register unsigned short int AC1IF = 1;
    sbit  AC1IF_bit at ACB_STATUS.B1;
    const register unsigned short int AC0IF = 0;
    sbit  AC0IF_bit at ACB_STATUS.B0;

sfr data unsigned char volatile ACB_CURRCTRL              absolute 0x0398;
    const register unsigned short int CURREN = 7;
    sbit  CURREN_bit at ACB_CURRCTRL.B7;
    const register unsigned short int CURRMODE = 6;
    sbit  CURRMODE_bit at ACB_CURRCTRL.B6;
    const register unsigned short int AC1CURR = 1;
    sbit  AC1CURR_bit at ACB_CURRCTRL.B1;
    const register unsigned short int AC0CURR = 0;
    sbit  AC0CURR_bit at ACB_CURRCTRL.B0;

sfr data unsigned char volatile ACB_CURRCALIB             absolute 0x0399;
    const register unsigned short int CALIB0 = 0;
    sbit  CALIB0_bit at ACB_CURRCALIB.B0;
    const register unsigned short int CALIB1 = 1;
    sbit  CALIB1_bit at ACB_CURRCALIB.B1;
    const register unsigned short int CALIB2 = 2;
    sbit  CALIB2_bit at ACB_CURRCALIB.B2;
    const register unsigned short int CALIB3 = 3;
    sbit  CALIB3_bit at ACB_CURRCALIB.B3;

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
    const register unsigned short int INT1LVL0 = 2;
    sbit  INT1LVL0_bit at PORTB_INTCTRL.B2;
    const register unsigned short int INT1LVL1 = 3;
    sbit  INT1LVL1_bit at PORTB_INTCTRL.B3;
    const register unsigned short int INT0LVL0 = 0;
    sbit  INT0LVL0_bit at PORTB_INTCTRL.B0;
    const register unsigned short int INT0LVL1 = 1;
    sbit  INT0LVL1_bit at PORTB_INTCTRL.B1;

sfr data unsigned char volatile PORTB_INT0MASK            absolute 0x062A;
sfr data unsigned char volatile PORTB_INT1MASK            absolute 0x062B;
sfr data unsigned char volatile PORTB_INTFLAGS            absolute 0x062C;
    sbit  INT1IF_PORTB_INTFLAGS_bit at PORTB_INTFLAGS.B1;
    sbit  INT0IF_PORTB_INTFLAGS_bit at PORTB_INTFLAGS.B0;

sfr data unsigned char volatile PORTB_REMAP               absolute 0x062E;
    sbit  SPI_PORTB_REMAP_bit at PORTB_REMAP.B5;
    sbit  USART0_PORTB_REMAP_bit at PORTB_REMAP.B4;
    const register unsigned short int TC0D = 3;
    sbit  TC0D_bit at PORTB_REMAP.B3;
    const register unsigned short int TC0C = 2;
    sbit  TC0C_bit at PORTB_REMAP.B2;
    const register unsigned short int TC0B = 1;
    sbit  TC0B_bit at PORTB_REMAP.B1;
    const register unsigned short int TC0A = 0;
    sbit  TC0A_bit at PORTB_REMAP.B0;

sfr data unsigned char volatile PORTB_PIN0CTRL            absolute 0x0630;
    const register unsigned short int SRLEN = 7;
    sbit  SRLEN_bit at PORTB_PIN0CTRL.B7;
    const register unsigned short int INVEN = 6;
    sbit  INVEN_bit at PORTB_PIN0CTRL.B6;
    const register unsigned short int OPC0 = 3;
    sbit  OPC0_bit at PORTB_PIN0CTRL.B3;
    const register unsigned short int OPC1 = 4;
    sbit  OPC1_bit at PORTB_PIN0CTRL.B4;
    const register unsigned short int OPC2 = 5;
    sbit  OPC2_bit at PORTB_PIN0CTRL.B5;
    const register unsigned short int ISC0 = 0;
    sbit  ISC0_bit at PORTB_PIN0CTRL.B0;
    const register unsigned short int ISC1 = 1;
    sbit  ISC1_bit at PORTB_PIN0CTRL.B1;
    const register unsigned short int ISC2 = 2;
    sbit  ISC2_bit at PORTB_PIN0CTRL.B2;

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

sfr data unsigned char volatile PORTG_DIR                 absolute 0x06C0;
sfr data unsigned char volatile PORTG_DIRSET              absolute 0x06C1;
sfr data unsigned char volatile PORTG_DIRCLR              absolute 0x06C2;
sfr data unsigned char volatile PORTG_DIRTGL              absolute 0x06C3;
sfr data unsigned char volatile PORTG_OUT                 absolute 0x06C4;
sfr data unsigned char volatile PORTG_OUTSET              absolute 0x06C5;
sfr data unsigned char volatile PORTG_OUTCLR              absolute 0x06C6;
sfr data unsigned char volatile PORTG_OUTTGL              absolute 0x06C7;
sfr data unsigned char volatile PORTG_IN                  absolute 0x06C8;
sfr data unsigned char volatile PORTG_INTCTRL             absolute 0x06C9;
    sbit  INT1LVL0_PORTG_INTCTRL_bit at PORTG_INTCTRL.B2;
    sbit  INT1LVL1_PORTG_INTCTRL_bit at PORTG_INTCTRL.B3;
    sbit  INT0LVL0_PORTG_INTCTRL_bit at PORTG_INTCTRL.B0;
    sbit  INT0LVL1_PORTG_INTCTRL_bit at PORTG_INTCTRL.B1;

sfr data unsigned char volatile PORTG_INT0MASK            absolute 0x06CA;
sfr data unsigned char volatile PORTG_INT1MASK            absolute 0x06CB;
sfr data unsigned char volatile PORTG_INTFLAGS            absolute 0x06CC;
    sbit  INT1IF_PORTG_INTFLAGS_bit at PORTG_INTFLAGS.B1;
    sbit  INT0IF_PORTG_INTFLAGS_bit at PORTG_INTFLAGS.B0;

sfr data unsigned char volatile PORTG_REMAP               absolute 0x06CE;
    sbit  SPI_PORTG_REMAP_bit at PORTG_REMAP.B5;
    sbit  USART0_PORTG_REMAP_bit at PORTG_REMAP.B4;
    sbit  TC0D_PORTG_REMAP_bit at PORTG_REMAP.B3;
    sbit  TC0C_PORTG_REMAP_bit at PORTG_REMAP.B2;
    sbit  TC0B_PORTG_REMAP_bit at PORTG_REMAP.B1;
    sbit  TC0A_PORTG_REMAP_bit at PORTG_REMAP.B0;

sfr data unsigned char volatile PORTG_PIN0CTRL            absolute 0x06D0;
    sbit  SRLEN_PORTG_PIN0CTRL_bit at PORTG_PIN0CTRL.B7;
    sbit  INVEN_PORTG_PIN0CTRL_bit at PORTG_PIN0CTRL.B6;
    sbit  OPC0_PORTG_PIN0CTRL_bit at PORTG_PIN0CTRL.B3;
    sbit  OPC1_PORTG_PIN0CTRL_bit at PORTG_PIN0CTRL.B4;
    sbit  OPC2_PORTG_PIN0CTRL_bit at PORTG_PIN0CTRL.B5;
    sbit  ISC0_PORTG_PIN0CTRL_bit at PORTG_PIN0CTRL.B0;
    sbit  ISC1_PORTG_PIN0CTRL_bit at PORTG_PIN0CTRL.B1;
    sbit  ISC2_PORTG_PIN0CTRL_bit at PORTG_PIN0CTRL.B2;

sfr data unsigned char volatile PORTG_PIN1CTRL            absolute 0x06D1;
    sbit  SRLEN_PORTG_PIN1CTRL_bit at PORTG_PIN1CTRL.B7;
    sbit  INVEN_PORTG_PIN1CTRL_bit at PORTG_PIN1CTRL.B6;
    sbit  OPC0_PORTG_PIN1CTRL_bit at PORTG_PIN1CTRL.B3;
    sbit  OPC1_PORTG_PIN1CTRL_bit at PORTG_PIN1CTRL.B4;
    sbit  OPC2_PORTG_PIN1CTRL_bit at PORTG_PIN1CTRL.B5;
    sbit  ISC0_PORTG_PIN1CTRL_bit at PORTG_PIN1CTRL.B0;
    sbit  ISC1_PORTG_PIN1CTRL_bit at PORTG_PIN1CTRL.B1;
    sbit  ISC2_PORTG_PIN1CTRL_bit at PORTG_PIN1CTRL.B2;

sfr data unsigned char volatile PORTG_PIN2CTRL            absolute 0x06D2;
    sbit  SRLEN_PORTG_PIN2CTRL_bit at PORTG_PIN2CTRL.B7;
    sbit  INVEN_PORTG_PIN2CTRL_bit at PORTG_PIN2CTRL.B6;
    sbit  OPC0_PORTG_PIN2CTRL_bit at PORTG_PIN2CTRL.B3;
    sbit  OPC1_PORTG_PIN2CTRL_bit at PORTG_PIN2CTRL.B4;
    sbit  OPC2_PORTG_PIN2CTRL_bit at PORTG_PIN2CTRL.B5;
    sbit  ISC0_PORTG_PIN2CTRL_bit at PORTG_PIN2CTRL.B0;
    sbit  ISC1_PORTG_PIN2CTRL_bit at PORTG_PIN2CTRL.B1;
    sbit  ISC2_PORTG_PIN2CTRL_bit at PORTG_PIN2CTRL.B2;

sfr data unsigned char volatile PORTG_PIN3CTRL            absolute 0x06D3;
    sbit  SRLEN_PORTG_PIN3CTRL_bit at PORTG_PIN3CTRL.B7;
    sbit  INVEN_PORTG_PIN3CTRL_bit at PORTG_PIN3CTRL.B6;
    sbit  OPC0_PORTG_PIN3CTRL_bit at PORTG_PIN3CTRL.B3;
    sbit  OPC1_PORTG_PIN3CTRL_bit at PORTG_PIN3CTRL.B4;
    sbit  OPC2_PORTG_PIN3CTRL_bit at PORTG_PIN3CTRL.B5;
    sbit  ISC0_PORTG_PIN3CTRL_bit at PORTG_PIN3CTRL.B0;
    sbit  ISC1_PORTG_PIN3CTRL_bit at PORTG_PIN3CTRL.B1;
    sbit  ISC2_PORTG_PIN3CTRL_bit at PORTG_PIN3CTRL.B2;

sfr data unsigned char volatile PORTG_PIN4CTRL            absolute 0x06D4;
    sbit  SRLEN_PORTG_PIN4CTRL_bit at PORTG_PIN4CTRL.B7;
    sbit  INVEN_PORTG_PIN4CTRL_bit at PORTG_PIN4CTRL.B6;
    sbit  OPC0_PORTG_PIN4CTRL_bit at PORTG_PIN4CTRL.B3;
    sbit  OPC1_PORTG_PIN4CTRL_bit at PORTG_PIN4CTRL.B4;
    sbit  OPC2_PORTG_PIN4CTRL_bit at PORTG_PIN4CTRL.B5;
    sbit  ISC0_PORTG_PIN4CTRL_bit at PORTG_PIN4CTRL.B0;
    sbit  ISC1_PORTG_PIN4CTRL_bit at PORTG_PIN4CTRL.B1;
    sbit  ISC2_PORTG_PIN4CTRL_bit at PORTG_PIN4CTRL.B2;

sfr data unsigned char volatile PORTG_PIN5CTRL            absolute 0x06D5;
    sbit  SRLEN_PORTG_PIN5CTRL_bit at PORTG_PIN5CTRL.B7;
    sbit  INVEN_PORTG_PIN5CTRL_bit at PORTG_PIN5CTRL.B6;
    sbit  OPC0_PORTG_PIN5CTRL_bit at PORTG_PIN5CTRL.B3;
    sbit  OPC1_PORTG_PIN5CTRL_bit at PORTG_PIN5CTRL.B4;
    sbit  OPC2_PORTG_PIN5CTRL_bit at PORTG_PIN5CTRL.B5;
    sbit  ISC0_PORTG_PIN5CTRL_bit at PORTG_PIN5CTRL.B0;
    sbit  ISC1_PORTG_PIN5CTRL_bit at PORTG_PIN5CTRL.B1;
    sbit  ISC2_PORTG_PIN5CTRL_bit at PORTG_PIN5CTRL.B2;

sfr data unsigned char volatile PORTG_PIN6CTRL            absolute 0x06D6;
    sbit  SRLEN_PORTG_PIN6CTRL_bit at PORTG_PIN6CTRL.B7;
    sbit  INVEN_PORTG_PIN6CTRL_bit at PORTG_PIN6CTRL.B6;
    sbit  OPC0_PORTG_PIN6CTRL_bit at PORTG_PIN6CTRL.B3;
    sbit  OPC1_PORTG_PIN6CTRL_bit at PORTG_PIN6CTRL.B4;
    sbit  OPC2_PORTG_PIN6CTRL_bit at PORTG_PIN6CTRL.B5;
    sbit  ISC0_PORTG_PIN6CTRL_bit at PORTG_PIN6CTRL.B0;
    sbit  ISC1_PORTG_PIN6CTRL_bit at PORTG_PIN6CTRL.B1;
    sbit  ISC2_PORTG_PIN6CTRL_bit at PORTG_PIN6CTRL.B2;

sfr data unsigned char volatile PORTG_PIN7CTRL            absolute 0x06D7;
    sbit  SRLEN_PORTG_PIN7CTRL_bit at PORTG_PIN7CTRL.B7;
    sbit  INVEN_PORTG_PIN7CTRL_bit at PORTG_PIN7CTRL.B6;
    sbit  OPC0_PORTG_PIN7CTRL_bit at PORTG_PIN7CTRL.B3;
    sbit  OPC1_PORTG_PIN7CTRL_bit at PORTG_PIN7CTRL.B4;
    sbit  OPC2_PORTG_PIN7CTRL_bit at PORTG_PIN7CTRL.B5;
    sbit  ISC0_PORTG_PIN7CTRL_bit at PORTG_PIN7CTRL.B0;
    sbit  ISC1_PORTG_PIN7CTRL_bit at PORTG_PIN7CTRL.B1;
    sbit  ISC2_PORTG_PIN7CTRL_bit at PORTG_PIN7CTRL.B2;

sfr data unsigned char volatile PORTM_DIR                 absolute 0x0760;
sfr data unsigned char volatile PORTM_DIRSET              absolute 0x0761;
sfr data unsigned char volatile PORTM_DIRCLR              absolute 0x0762;
sfr data unsigned char volatile PORTM_DIRTGL              absolute 0x0763;
sfr data unsigned char volatile PORTM_OUT                 absolute 0x0764;
sfr data unsigned char volatile PORTM_OUTSET              absolute 0x0765;
sfr data unsigned char volatile PORTM_OUTCLR              absolute 0x0766;
sfr data unsigned char volatile PORTM_OUTTGL              absolute 0x0767;
sfr data unsigned char volatile PORTM_IN                  absolute 0x0768;
sfr data unsigned char volatile PORTM_INTCTRL             absolute 0x0769;
    sbit  INT1LVL0_PORTM_INTCTRL_bit at PORTM_INTCTRL.B2;
    sbit  INT1LVL1_PORTM_INTCTRL_bit at PORTM_INTCTRL.B3;
    sbit  INT0LVL0_PORTM_INTCTRL_bit at PORTM_INTCTRL.B0;
    sbit  INT0LVL1_PORTM_INTCTRL_bit at PORTM_INTCTRL.B1;

sfr data unsigned char volatile PORTM_INT0MASK            absolute 0x076A;
sfr data unsigned char volatile PORTM_INT1MASK            absolute 0x076B;
sfr data unsigned char volatile PORTM_INTFLAGS            absolute 0x076C;
    sbit  INT1IF_PORTM_INTFLAGS_bit at PORTM_INTFLAGS.B1;
    sbit  INT0IF_PORTM_INTFLAGS_bit at PORTM_INTFLAGS.B0;

sfr data unsigned char volatile PORTM_REMAP               absolute 0x076E;
    sbit  SPI_PORTM_REMAP_bit at PORTM_REMAP.B5;
    sbit  USART0_PORTM_REMAP_bit at PORTM_REMAP.B4;
    sbit  TC0D_PORTM_REMAP_bit at PORTM_REMAP.B3;
    sbit  TC0C_PORTM_REMAP_bit at PORTM_REMAP.B2;
    sbit  TC0B_PORTM_REMAP_bit at PORTM_REMAP.B1;
    sbit  TC0A_PORTM_REMAP_bit at PORTM_REMAP.B0;

sfr data unsigned char volatile PORTM_PIN0CTRL            absolute 0x0770;
    sbit  SRLEN_PORTM_PIN0CTRL_bit at PORTM_PIN0CTRL.B7;
    sbit  INVEN_PORTM_PIN0CTRL_bit at PORTM_PIN0CTRL.B6;
    sbit  OPC0_PORTM_PIN0CTRL_bit at PORTM_PIN0CTRL.B3;
    sbit  OPC1_PORTM_PIN0CTRL_bit at PORTM_PIN0CTRL.B4;
    sbit  OPC2_PORTM_PIN0CTRL_bit at PORTM_PIN0CTRL.B5;
    sbit  ISC0_PORTM_PIN0CTRL_bit at PORTM_PIN0CTRL.B0;
    sbit  ISC1_PORTM_PIN0CTRL_bit at PORTM_PIN0CTRL.B1;
    sbit  ISC2_PORTM_PIN0CTRL_bit at PORTM_PIN0CTRL.B2;

sfr data unsigned char volatile PORTM_PIN1CTRL            absolute 0x0771;
    sbit  SRLEN_PORTM_PIN1CTRL_bit at PORTM_PIN1CTRL.B7;
    sbit  INVEN_PORTM_PIN1CTRL_bit at PORTM_PIN1CTRL.B6;
    sbit  OPC0_PORTM_PIN1CTRL_bit at PORTM_PIN1CTRL.B3;
    sbit  OPC1_PORTM_PIN1CTRL_bit at PORTM_PIN1CTRL.B4;
    sbit  OPC2_PORTM_PIN1CTRL_bit at PORTM_PIN1CTRL.B5;
    sbit  ISC0_PORTM_PIN1CTRL_bit at PORTM_PIN1CTRL.B0;
    sbit  ISC1_PORTM_PIN1CTRL_bit at PORTM_PIN1CTRL.B1;
    sbit  ISC2_PORTM_PIN1CTRL_bit at PORTM_PIN1CTRL.B2;

sfr data unsigned char volatile PORTM_PIN2CTRL            absolute 0x0772;
    sbit  SRLEN_PORTM_PIN2CTRL_bit at PORTM_PIN2CTRL.B7;
    sbit  INVEN_PORTM_PIN2CTRL_bit at PORTM_PIN2CTRL.B6;
    sbit  OPC0_PORTM_PIN2CTRL_bit at PORTM_PIN2CTRL.B3;
    sbit  OPC1_PORTM_PIN2CTRL_bit at PORTM_PIN2CTRL.B4;
    sbit  OPC2_PORTM_PIN2CTRL_bit at PORTM_PIN2CTRL.B5;
    sbit  ISC0_PORTM_PIN2CTRL_bit at PORTM_PIN2CTRL.B0;
    sbit  ISC1_PORTM_PIN2CTRL_bit at PORTM_PIN2CTRL.B1;
    sbit  ISC2_PORTM_PIN2CTRL_bit at PORTM_PIN2CTRL.B2;

sfr data unsigned char volatile PORTM_PIN3CTRL            absolute 0x0773;
    sbit  SRLEN_PORTM_PIN3CTRL_bit at PORTM_PIN3CTRL.B7;
    sbit  INVEN_PORTM_PIN3CTRL_bit at PORTM_PIN3CTRL.B6;
    sbit  OPC0_PORTM_PIN3CTRL_bit at PORTM_PIN3CTRL.B3;
    sbit  OPC1_PORTM_PIN3CTRL_bit at PORTM_PIN3CTRL.B4;
    sbit  OPC2_PORTM_PIN3CTRL_bit at PORTM_PIN3CTRL.B5;
    sbit  ISC0_PORTM_PIN3CTRL_bit at PORTM_PIN3CTRL.B0;
    sbit  ISC1_PORTM_PIN3CTRL_bit at PORTM_PIN3CTRL.B1;
    sbit  ISC2_PORTM_PIN3CTRL_bit at PORTM_PIN3CTRL.B2;

sfr data unsigned char volatile PORTM_PIN4CTRL            absolute 0x0774;
    sbit  SRLEN_PORTM_PIN4CTRL_bit at PORTM_PIN4CTRL.B7;
    sbit  INVEN_PORTM_PIN4CTRL_bit at PORTM_PIN4CTRL.B6;
    sbit  OPC0_PORTM_PIN4CTRL_bit at PORTM_PIN4CTRL.B3;
    sbit  OPC1_PORTM_PIN4CTRL_bit at PORTM_PIN4CTRL.B4;
    sbit  OPC2_PORTM_PIN4CTRL_bit at PORTM_PIN4CTRL.B5;
    sbit  ISC0_PORTM_PIN4CTRL_bit at PORTM_PIN4CTRL.B0;
    sbit  ISC1_PORTM_PIN4CTRL_bit at PORTM_PIN4CTRL.B1;
    sbit  ISC2_PORTM_PIN4CTRL_bit at PORTM_PIN4CTRL.B2;

sfr data unsigned char volatile PORTM_PIN5CTRL            absolute 0x0775;
    sbit  SRLEN_PORTM_PIN5CTRL_bit at PORTM_PIN5CTRL.B7;
    sbit  INVEN_PORTM_PIN5CTRL_bit at PORTM_PIN5CTRL.B6;
    sbit  OPC0_PORTM_PIN5CTRL_bit at PORTM_PIN5CTRL.B3;
    sbit  OPC1_PORTM_PIN5CTRL_bit at PORTM_PIN5CTRL.B4;
    sbit  OPC2_PORTM_PIN5CTRL_bit at PORTM_PIN5CTRL.B5;
    sbit  ISC0_PORTM_PIN5CTRL_bit at PORTM_PIN5CTRL.B0;
    sbit  ISC1_PORTM_PIN5CTRL_bit at PORTM_PIN5CTRL.B1;
    sbit  ISC2_PORTM_PIN5CTRL_bit at PORTM_PIN5CTRL.B2;

sfr data unsigned char volatile PORTM_PIN6CTRL            absolute 0x0776;
    sbit  SRLEN_PORTM_PIN6CTRL_bit at PORTM_PIN6CTRL.B7;
    sbit  INVEN_PORTM_PIN6CTRL_bit at PORTM_PIN6CTRL.B6;
    sbit  OPC0_PORTM_PIN6CTRL_bit at PORTM_PIN6CTRL.B3;
    sbit  OPC1_PORTM_PIN6CTRL_bit at PORTM_PIN6CTRL.B4;
    sbit  OPC2_PORTM_PIN6CTRL_bit at PORTM_PIN6CTRL.B5;
    sbit  ISC0_PORTM_PIN6CTRL_bit at PORTM_PIN6CTRL.B0;
    sbit  ISC1_PORTM_PIN6CTRL_bit at PORTM_PIN6CTRL.B1;
    sbit  ISC2_PORTM_PIN6CTRL_bit at PORTM_PIN6CTRL.B2;

sfr data unsigned char volatile PORTM_PIN7CTRL            absolute 0x0777;
    sbit  SRLEN_PORTM_PIN7CTRL_bit at PORTM_PIN7CTRL.B7;
    sbit  INVEN_PORTM_PIN7CTRL_bit at PORTM_PIN7CTRL.B6;
    sbit  OPC0_PORTM_PIN7CTRL_bit at PORTM_PIN7CTRL.B3;
    sbit  OPC1_PORTM_PIN7CTRL_bit at PORTM_PIN7CTRL.B4;
    sbit  OPC2_PORTM_PIN7CTRL_bit at PORTM_PIN7CTRL.B5;
    sbit  ISC0_PORTM_PIN7CTRL_bit at PORTM_PIN7CTRL.B0;
    sbit  ISC1_PORTM_PIN7CTRL_bit at PORTM_PIN7CTRL.B1;
    sbit  ISC2_PORTM_PIN7CTRL_bit at PORTM_PIN7CTRL.B2;

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
    const register unsigned short int EVSEL2 = 2;
    sbit  EVSEL2_bit at TCC0_CTRLD.B2;
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
sfr data unsigned char volatile IRCOM_CTRL                absolute 0x08F8;
    sbit  EVSEL0_IRCOM_CTRL_bit at IRCOM_CTRL.B0;
    sbit  EVSEL1_IRCOM_CTRL_bit at IRCOM_CTRL.B1;
    sbit  EVSEL2_IRCOM_CTRL_bit at IRCOM_CTRL.B2;
    sbit  EVSEL3_IRCOM_CTRL_bit at IRCOM_CTRL.B3;

sfr data unsigned char volatile IRCOM_TXPLCTRL            absolute 0x08F9;
sfr data unsigned char volatile IRCOM_RXPLCTRL            absolute 0x08FA;
sfr data unsigned char volatile LCD_CTRLA                 absolute 0x0D00;
    sbit  ENABLE_LCD_CTRLA_bit at LCD_CTRLA.B7;
    const register unsigned short int XBIAS = 6;
    sbit  XBIAS_bit at LCD_CTRLA.B6;
    const register unsigned short int DATCLK = 5;
    sbit  DATCLK_bit at LCD_CTRLA.B5;
    const register unsigned short int COMSWP = 4;
    sbit  COMSWP_bit at LCD_CTRLA.B4;
    const register unsigned short int SEGSWP = 3;
    sbit  SEGSWP_bit at LCD_CTRLA.B3;
    const register unsigned short int CLRDT = 2;
    sbit  CLRDT_bit at LCD_CTRLA.B2;
    const register unsigned short int SEGON = 1;
    sbit  SEGON_bit at LCD_CTRLA.B1;
    const register unsigned short int BLANK = 0;
    sbit  BLANK_bit at LCD_CTRLA.B0;

sfr data unsigned char volatile LCD_CTRLB                 absolute 0x0D01;
    const register unsigned short int PRESC = 7;
    sbit  PRESC_bit at LCD_CTRLB.B7;
    const register unsigned short int CLKDIV0 = 4;
    sbit  CLKDIV0_bit at LCD_CTRLB.B4;
    const register unsigned short int CLKDIV1 = 5;
    sbit  CLKDIV1_bit at LCD_CTRLB.B5;
    const register unsigned short int CLKDIV2 = 6;
    sbit  CLKDIV2_bit at LCD_CTRLB.B6;
    const register unsigned short int LPWAV = 3;
    sbit  LPWAV_bit at LCD_CTRLB.B3;
    const register unsigned short int DUTY0 = 0;
    sbit  DUTY0_bit at LCD_CTRLB.B0;
    const register unsigned short int DUTY1 = 1;
    sbit  DUTY1_bit at LCD_CTRLB.B1;

sfr data unsigned char volatile LCD_CTRLC                 absolute 0x0D02;
    const register unsigned short int PMSK0 = 0;
    sbit  PMSK0_bit at LCD_CTRLC.B0;
    const register unsigned short int PMSK1 = 1;
    sbit  PMSK1_bit at LCD_CTRLC.B1;
    const register unsigned short int PMSK2 = 2;
    sbit  PMSK2_bit at LCD_CTRLC.B2;
    const register unsigned short int PMSK3 = 3;
    sbit  PMSK3_bit at LCD_CTRLC.B3;
    const register unsigned short int PMSK4 = 4;
    sbit  PMSK4_bit at LCD_CTRLC.B4;
    const register unsigned short int PMSK5 = 5;
    sbit  PMSK5_bit at LCD_CTRLC.B5;

sfr data unsigned char volatile LCD_INTCTRL               absolute 0x0D03;
    const register unsigned short int XIME0 = 3;
    sbit  XIME0_bit at LCD_INTCTRL.B3;
    const register unsigned short int XIME1 = 4;
    sbit  XIME1_bit at LCD_INTCTRL.B4;
    const register unsigned short int XIME2 = 5;
    sbit  XIME2_bit at LCD_INTCTRL.B5;
    const register unsigned short int XIME3 = 6;
    sbit  XIME3_bit at LCD_INTCTRL.B6;
    const register unsigned short int XIME4 = 7;
    sbit  XIME4_bit at LCD_INTCTRL.B7;
    const register unsigned short int FCINTLVL0 = 0;
    sbit  FCINTLVL0_bit at LCD_INTCTRL.B0;
    const register unsigned short int FCINTLVL1 = 1;
    sbit  FCINTLVL1_bit at LCD_INTCTRL.B1;

sfr data unsigned char volatile LCD_INTFLAG               absolute 0x0D04;
    const register unsigned short int FCIF = 0;
    sbit  FCIF_bit at LCD_INTFLAG.B0;

sfr data unsigned char volatile LCD_CTRLD                 absolute 0x0D05;
    const register unsigned short int BLINKEN = 3;
    sbit  BLINKEN_bit at LCD_CTRLD.B3;
    const register unsigned short int BLINKRATE0 = 0;
    sbit  BLINKRATE0_bit at LCD_CTRLD.B0;
    const register unsigned short int BLINKRATE1 = 1;
    sbit  BLINKRATE1_bit at LCD_CTRLD.B1;

sfr data unsigned char volatile LCD_CTRLE                 absolute 0x0D06;
    const register unsigned short int BPS10 = 4;
    sbit  BPS10_bit at LCD_CTRLE.B4;
    const register unsigned short int BPS11 = 5;
    sbit  BPS11_bit at LCD_CTRLE.B5;
    const register unsigned short int BPS12 = 6;
    sbit  BPS12_bit at LCD_CTRLE.B6;
    const register unsigned short int BPS13 = 7;
    sbit  BPS13_bit at LCD_CTRLE.B7;
    const register unsigned short int BPS00 = 0;
    sbit  BPS00_bit at LCD_CTRLE.B0;
    const register unsigned short int BPS01 = 1;
    sbit  BPS01_bit at LCD_CTRLE.B1;
    const register unsigned short int BPS02 = 2;
    sbit  BPS02_bit at LCD_CTRLE.B2;
    const register unsigned short int BPS03 = 3;
    sbit  BPS03_bit at LCD_CTRLE.B3;

sfr data unsigned char volatile LCD_CTRLF                 absolute 0x0D07;
    const register unsigned short int FCONT0 = 0;
    sbit  FCONT0_bit at LCD_CTRLF.B0;
    const register unsigned short int FCONT1 = 1;
    sbit  FCONT1_bit at LCD_CTRLF.B1;
    const register unsigned short int FCONT2 = 2;
    sbit  FCONT2_bit at LCD_CTRLF.B2;
    const register unsigned short int FCONT3 = 3;
    sbit  FCONT3_bit at LCD_CTRLF.B3;
    const register unsigned short int FCONT4 = 4;
    sbit  FCONT4_bit at LCD_CTRLF.B4;
    const register unsigned short int FCONT5 = 5;
    sbit  FCONT5_bit at LCD_CTRLF.B5;

sfr data unsigned char volatile LCD_CTRLG                 absolute 0x0D08;
    const register unsigned short int TDG0 = 6;
    sbit  TDG0_bit at LCD_CTRLG.B6;
    const register unsigned short int TDG1 = 7;
    sbit  TDG1_bit at LCD_CTRLG.B7;
    const register unsigned short int STSEG0 = 0;
    sbit  STSEG0_bit at LCD_CTRLG.B0;
    const register unsigned short int STSEG1 = 1;
    sbit  STSEG1_bit at LCD_CTRLG.B1;
    const register unsigned short int STSEG2 = 2;
    sbit  STSEG2_bit at LCD_CTRLG.B2;
    const register unsigned short int STSEG3 = 3;
    sbit  STSEG3_bit at LCD_CTRLG.B3;
    const register unsigned short int STSEG4 = 4;
    sbit  STSEG4_bit at LCD_CTRLG.B4;
    const register unsigned short int STSEG5 = 5;
    sbit  STSEG5_bit at LCD_CTRLG.B5;

sfr data unsigned char volatile LCD_CTRLH                 absolute 0x0D09;
    const register unsigned short int DEC = 7;
    sbit  DEC_bit at LCD_CTRLH.B7;
    const register unsigned short int DCODE0 = 0;
    sbit  DCODE0_bit at LCD_CTRLH.B0;
    const register unsigned short int DCODE1 = 1;
    sbit  DCODE1_bit at LCD_CTRLH.B1;
    const register unsigned short int DCODE2 = 2;
    sbit  DCODE2_bit at LCD_CTRLH.B2;
    const register unsigned short int DCODE3 = 3;
    sbit  DCODE3_bit at LCD_CTRLH.B3;
    const register unsigned short int DCODE4 = 4;
    sbit  DCODE4_bit at LCD_CTRLH.B4;
    const register unsigned short int DCODE5 = 5;
    sbit  DCODE5_bit at LCD_CTRLH.B5;
    const register unsigned short int DCODE6 = 6;
    sbit  DCODE6_bit at LCD_CTRLH.B6;

sfr data unsigned char volatile LCD_DATA0                 absolute 0x0D10;
sfr data unsigned char volatile LCD_DATA1                 absolute 0x0D11;
sfr data unsigned char volatile LCD_DATA2                 absolute 0x0D12;
sfr data unsigned char volatile LCD_DATA3                 absolute 0x0D13;
sfr data unsigned char volatile LCD_DATA4                 absolute 0x0D14;
sfr data unsigned char volatile LCD_DATA5                 absolute 0x0D15;
sfr data unsigned char volatile LCD_DATA6                 absolute 0x0D16;
sfr data unsigned char volatile LCD_DATA7                 absolute 0x0D17;
sfr data unsigned char volatile LCD_DATA8                 absolute 0x0D18;
sfr data unsigned char volatile LCD_DATA9                 absolute 0x0D19;
sfr data unsigned char volatile LCD_DATA10                absolute 0x0D1A;
sfr data unsigned char volatile LCD_DATA11                absolute 0x0D1B;
sfr data unsigned char volatile LCD_DATA12                absolute 0x0D1C;
sfr data unsigned char volatile LCD_DATA13                absolute 0x0D1D;
sfr data unsigned char volatile LCD_DATA14                absolute 0x0D1E;
sfr data unsigned char volatile LCD_DATA15                absolute 0x0D1F;
sfr data unsigned char volatile LCD_DATA16                absolute 0x0D20;
sfr data unsigned char volatile LCD_DATA17                absolute 0x0D21;
sfr data unsigned char volatile LCD_DATA18                absolute 0x0D22;
sfr data unsigned char volatile LCD_DATA19                absolute 0x0D23;
sfr io   unsigned char volatile FUSE_FUSEBYTE0            absolute 0x0000;
    const register unsigned short int JTAGUSERID0 = 0;
    sbit  JTAGUSERID0_bit at FUSE_FUSEBYTE0.B0;
    const register unsigned short int JTAGUSERID1 = 1;
    sbit  JTAGUSERID1_bit at FUSE_FUSEBYTE0.B1;
    const register unsigned short int JTAGUSERID2 = 2;
    sbit  JTAGUSERID2_bit at FUSE_FUSEBYTE0.B2;
    const register unsigned short int JTAGUSERID3 = 3;
    sbit  JTAGUSERID3_bit at FUSE_FUSEBYTE0.B3;
    const register unsigned short int JTAGUSERID4 = 4;
    sbit  JTAGUSERID4_bit at FUSE_FUSEBYTE0.B4;
    const register unsigned short int JTAGUSERID5 = 5;
    sbit  JTAGUSERID5_bit at FUSE_FUSEBYTE0.B5;
    const register unsigned short int JTAGUSERID6 = 6;
    sbit  JTAGUSERID6_bit at FUSE_FUSEBYTE0.B6;
    const register unsigned short int JTAGUSERID7 = 7;
    sbit  JTAGUSERID7_bit at FUSE_FUSEBYTE0.B7;

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
    const register unsigned short int JTAGEN = 0;
    sbit  JTAGEN_bit at FUSE_FUSEBYTE4.B0;

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
