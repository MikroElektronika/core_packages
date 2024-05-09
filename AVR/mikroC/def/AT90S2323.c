// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00000800;

const unsigned short ICS_AUTO                  =     0;
const unsigned short ICS_OFF                   =     3;

// Addres offset from Output to Input (port) registers
const signed short   OUTPUT_TO_INPUT_OFFSET    =     -2;

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

const unsigned int IVT_ADDR_RESET            = 0x0000;
const unsigned int IVT_ADDR_INT0             = 0x0001;
const unsigned int IVT_ADDR_TIMER0_OVF0      = 0x0002;


sfr io unsigned short volatile SREG absolute 0x5F;
    sbit  SREG_C_bit at SREG.B0;
    const register unsigned short int SREG_C = 0;
    sbit  SREG_Z_bit at SREG.B1;
    const register unsigned short int SREG_Z = 1;
    sbit  SREG_N_bit at SREG.B2;
    const register unsigned short int SREG_N = 2;
    sbit  SREG_V_bit at SREG.B3;
    const register unsigned short int SREG_V = 3;
    sbit  SREG_S_bit at SREG.B4;
    const register unsigned short int SREG_S = 4;
    sbit  SREG_H_bit at SREG.B5;
    const register unsigned short int SREG_H = 5;
    sbit  SREG_T_bit at SREG.B6;
    const register unsigned short int SREG_T = 6;
    sbit  SREG_I_bit at SREG.B7;
    const register unsigned short int SREG_I = 7;

sfr io unsigned short volatile SPL absolute 0x5D;
    sbit  SP0_bit at SPL.B0;
    const register unsigned short int SP0 = 0;
    sbit  SP1_bit at SPL.B1;
    const register unsigned short int SP1 = 1;
    sbit  SP2_bit at SPL.B2;
    const register unsigned short int SP2 = 2;
    sbit  SP3_bit at SPL.B3;
    const register unsigned short int SP3 = 3;
    sbit  SP4_bit at SPL.B4;
    const register unsigned short int SP4 = 4;
    sbit  SP5_bit at SPL.B5;
    const register unsigned short int SP5 = 5;
    sbit  SP6_bit at SPL.B6;
    const register unsigned short int SP6 = 6;
    sbit  SP7_bit at SPL.B7;
    const register unsigned short int SP7 = 7;

sfr io unsigned short volatile GIMSK absolute 0x5B;
    sbit  INT0_bit at GIMSK.B6;
    const register unsigned short int INT0 = 6;

sfr io unsigned short volatile GIFR absolute 0x5A;
    sbit  INTF0_bit at GIFR.B6;
    const register unsigned short int INTF0 = 6;

sfr io unsigned short TIMSK absolute 0x59;
    sbit  TOIE0_bit at TIMSK.B1;
    const register unsigned short int TOIE0 = 1;

sfr io unsigned short volatile TIFR absolute 0x58;
    sbit  TOV0_bit at TIFR.B1;
    const register unsigned short int TOV0 = 1;

sfr io unsigned short volatile MCUCR absolute 0x55;
    sbit  ISC00_bit at MCUCR.B0;
    const register unsigned short int ISC00 = 0;
    sbit  ISC01_bit at MCUCR.B1;
    const register unsigned short int ISC01 = 1;
    sbit  SM_bit at MCUCR.B4;
    const register unsigned short int SM = 4;
    sbit  SE_bit at MCUCR.B5;
    const register unsigned short int SE = 5;

sfr io unsigned short volatile MCUSR absolute 0x54;
    sbit  PORF_bit at MCUSR.B0;
    const register unsigned short int PORF = 0;
    sbit  EXTRF_bit at MCUSR.B1;
    const register unsigned short int EXTRF = 1;

sfr io unsigned short TCCR0 absolute 0x53;
    sbit  CS00_bit at TCCR0.B0;
    const register unsigned short int CS00 = 0;
    sbit  CS01_bit at TCCR0.B1;
    const register unsigned short int CS01 = 1;
    sbit  CS02_bit at TCCR0.B2;
    const register unsigned short int CS02 = 2;

sfr io unsigned short volatile TCNT0 absolute 0x52;
    sbit  TCNT00_bit at TCNT0.B0;
    const register unsigned short int TCNT00 = 0;
    sbit  TCNT01_bit at TCNT0.B1;
    const register unsigned short int TCNT01 = 1;
    sbit  TCNT02_bit at TCNT0.B2;
    const register unsigned short int TCNT02 = 2;
    sbit  TCNT03_bit at TCNT0.B3;
    const register unsigned short int TCNT03 = 3;
    sbit  TCNT04_bit at TCNT0.B4;
    const register unsigned short int TCNT04 = 4;
    sbit  TCNT05_bit at TCNT0.B5;
    const register unsigned short int TCNT05 = 5;
    sbit  TCNT06_bit at TCNT0.B6;
    const register unsigned short int TCNT06 = 6;
    sbit  TCNT07_bit at TCNT0.B7;
    const register unsigned short int TCNT07 = 7;

sfr io unsigned short volatile WDTCR absolute 0x41;
    sbit  WDP0_bit at WDTCR.B0;
    const register unsigned short int WDP0 = 0;
    sbit  WDP1_bit at WDTCR.B1;
    const register unsigned short int WDP1 = 1;
    sbit  WDP2_bit at WDTCR.B2;
    const register unsigned short int WDP2 = 2;
    sbit  WDE_bit at WDTCR.B3;
    const register unsigned short int WDE = 3;
    sbit  WDTOE_bit at WDTCR.B4;
    const register unsigned short int WDTOE = 4;

sfr io unsigned short volatile EEARL absolute 0x3E;
sfr io unsigned short volatile EEAR absolute 0x3E;
    sbit  EEAR0_bit at EEAR.B0;
    const register unsigned short int EEAR0 = 0;
    sbit  EEAR1_bit at EEAR.B1;
    const register unsigned short int EEAR1 = 1;
    sbit  EEAR2_bit at EEAR.B2;
    const register unsigned short int EEAR2 = 2;
    sbit  EEAR3_bit at EEAR.B3;
    const register unsigned short int EEAR3 = 3;
    sbit  EEAR4_bit at EEAR.B4;
    const register unsigned short int EEAR4 = 4;
    sbit  EEAR5_bit at EEAR.B5;
    const register unsigned short int EEAR5 = 5;
    sbit  EEAR6_bit at EEAR.B6;
    const register unsigned short int EEAR6 = 6;

sfr io unsigned short volatile EEDR absolute 0x3D;
    sbit  EEDR0_bit at EEDR.B0;
    const register unsigned short int EEDR0 = 0;
    sbit  EEDR1_bit at EEDR.B1;
    const register unsigned short int EEDR1 = 1;
    sbit  EEDR2_bit at EEDR.B2;
    const register unsigned short int EEDR2 = 2;
    sbit  EEDR3_bit at EEDR.B3;
    const register unsigned short int EEDR3 = 3;
    sbit  EEDR4_bit at EEDR.B4;
    const register unsigned short int EEDR4 = 4;
    sbit  EEDR5_bit at EEDR.B5;
    const register unsigned short int EEDR5 = 5;
    sbit  EEDR6_bit at EEDR.B6;
    const register unsigned short int EEDR6 = 6;
    sbit  EEDR7_bit at EEDR.B7;
    const register unsigned short int EEDR7 = 7;

sfr io unsigned short volatile EECR absolute 0x3C;
    sbit  EERE_bit at EECR.B0;
    const register unsigned short int EERE = 0;
    sbit  EEWE_bit at EECR.B1;
    const register unsigned short int EEWE = 1;
    sbit  EEMWE_bit at EECR.B2;
    const register unsigned short int EEMWE = 2;

sfr io unsigned short PORTB absolute 0x38;
    sbit  PORTB0_bit at PORTB.B0;
    const register unsigned short int PORTB0 = 0;
    sbit  PORTB1_bit at PORTB.B1;
    const register unsigned short int PORTB1 = 1;
    sbit  PORTB2_bit at PORTB.B2;
    const register unsigned short int PORTB2 = 2;

sfr io unsigned short DDRB absolute 0x37;
    sbit  DDB0_bit at DDRB.B0;
    const register unsigned short int DDB0 = 0;
    sbit  DDB1_bit at DDRB.B1;
    const register unsigned short int DDB1 = 1;
    sbit  DDB2_bit at DDRB.B2;
    const register unsigned short int DDB2 = 2;

sfr io unsigned short volatile PINB absolute 0x36;
    sbit  PINB0_bit at PINB.B0;
    const register unsigned short int PINB0 = 0;
    sbit  PINB1_bit at PINB.B1;
    const register unsigned short int PINB1 = 1;
    sbit  PINB2_bit at PINB.B2;
    const register unsigned short int PINB2 = 2;
