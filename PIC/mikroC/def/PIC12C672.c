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

// Working space registers
rx unsigned short R0 ;
rx unsigned short R1 ;
rx unsigned short R2 ;
rx unsigned short R3 ;
rx unsigned short R4 ;
rx unsigned short R5 ;
rx unsigned short R6 ;
rx unsigned short R7 ;
rx unsigned short R8 ;
rx unsigned short R9 ;
rx unsigned short R10;
rx unsigned short R11;
rx unsigned short R12;
rx unsigned short R13;
rx unsigned short R14;
rx unsigned short R15;

const register unsigned short int W = 0;
const register unsigned short int F = 1;

// Special function registers (SFRs)

const signed int   PORT_TO_TRIS_OFFSET    =     128;

const unsigned short ICS_AUTO                  =     0;
const unsigned short ICS_OFF                   =     3;

sfr unsigned short volatile INDF             absolute 0x0000;
sfr unsigned short volatile TMR0             absolute 0x0001;
sfr unsigned short volatile PCL              absolute 0x0002;
sfr unsigned short volatile STATUS           absolute 0x0003;
sfr unsigned short          FSR              absolute 0x0004;
register unsigned short     *FSRPTR          absolute 0x0004;
sfr unsigned short volatile PCLATH           absolute 0x000A;
sfr unsigned short volatile INTCON           absolute 0x000B;
sfr unsigned short volatile PIR1             absolute 0x000C;
sfr unsigned short volatile ADCON0           absolute 0x001F;
sfr unsigned short volatile OPTION_REG       absolute 0x0081;
sfr unsigned short volatile PIE1             absolute 0x008C;
sfr unsigned short volatile PCON             absolute 0x008E;
sfr unsigned short volatile OSCCAL           absolute 0x008F;
sfr unsigned short volatile ADCON1           absolute 0x009F;
sfr unsigned short volatile GPIO             absolute 0x0005;
sfr unsigned short volatile ADRES            absolute 0x001E;
sfr unsigned short volatile TRIS             absolute 0x0085;

    // STATUS bits
    const register unsigned short int C = 0;
    sbit  C_bit at STATUS.B0;
    const register unsigned short int DC = 1;
    sbit  DC_bit at STATUS.B1;
    const register unsigned short int Z = 2;
    sbit  Z_bit at STATUS.B2;
    const register unsigned short int NOT_PD = 3;
    sbit  NOT_PD_bit at STATUS.B3;
    const register unsigned short int NOT_TO = 4;
    sbit  NOT_TO_bit at STATUS.B4;
    const register unsigned short int IRP = 7;
    sbit  IRP_bit at STATUS.B7;
    const register unsigned short int RP0 = 5;
    sbit  RP0_bit at STATUS.B5;
    const register unsigned short int RP1 = 6;
    sbit  RP1_bit at STATUS.B6;

    // INTCON bits
    const register unsigned short int GPIF = 0;
    sbit  GPIF_bit at INTCON.B0;
    const register unsigned short int INTF = 1;
    sbit  INTF_bit at INTCON.B1;
    const register unsigned short int T0IF = 2;
    sbit  T0IF_bit at INTCON.B2;
    const register unsigned short int GPIE = 3;
    sbit  GPIE_bit at INTCON.B3;
    const register unsigned short int INTE = 4;
    sbit  INTE_bit at INTCON.B4;
    const register unsigned short int T0IE = 5;
    sbit  T0IE_bit at INTCON.B5;
    const register unsigned short int PEIE = 6;
    sbit  PEIE_bit at INTCON.B6;
    const register unsigned short int GIE = 7;
    sbit  GIE_bit at INTCON.B7;

    // PIR1 bits
    const register unsigned short int ADIF = 6;
    sbit  ADIF_bit at PIR1.B6;

    // ADCON0 bits
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADCON0.B0;
    const register unsigned short int GO_NOT_DONE = 2;
    sbit  GO_NOT_DONE_bit at ADCON0.B2;
    const register unsigned short int GO_DONE = 2;
    sbit  GO_DONE_bit at ADCON0.B2;
    const register unsigned short int CHS0 = 3;
    sbit  CHS0_bit at ADCON0.B3;
    const register unsigned short int CHS1 = 4;
    sbit  CHS1_bit at ADCON0.B4;
    const register unsigned short int ADCS0 = 6;
    sbit  ADCS0_bit at ADCON0.B6;
    const register unsigned short int ADCS1 = 7;
    sbit  ADCS1_bit at ADCON0.B7;
    const register unsigned short int NOT_DONE = 2;
    sbit  NOT_DONE_bit at ADCON0.B2;
    const register unsigned short int GO = 2;
    sbit  GO_bit at ADCON0.B2;

    // OPTION_REG bits
    const register unsigned short int PSA = 3;
    sbit  PSA_bit at OPTION_REG.B3;
    const register unsigned short int T0SE = 4;
    sbit  T0SE_bit at OPTION_REG.B4;
    const register unsigned short int T0CS = 5;
    sbit  T0CS_bit at OPTION_REG.B5;
    const register unsigned short int INTEDG = 6;
    sbit  INTEDG_bit at OPTION_REG.B6;
    const register unsigned short int NOT_GPPU = 7;
    sbit  NOT_GPPU_bit at OPTION_REG.B7;
    const register unsigned short int PS0 = 0;
    sbit  PS0_bit at OPTION_REG.B0;
    const register unsigned short int PS1 = 1;
    sbit  PS1_bit at OPTION_REG.B1;
    const register unsigned short int PS2 = 2;
    sbit  PS2_bit at OPTION_REG.B2;

    // PIE1 bits
    const register unsigned short int ADIE = 6;
    sbit  ADIE_bit at PIE1.B6;

    // PCON bits
    const register unsigned short int NOT_POR = 1;
    sbit  NOT_POR_bit at PCON.B1;

    // OSCCAL bits
    const register unsigned short int CALSLW = 2;
    sbit  CALSLW_bit at OSCCAL.B2;
    const register unsigned short int CALFST = 3;
    sbit  CALFST_bit at OSCCAL.B3;
    const register unsigned short int CAL0 = 4;
    sbit  CAL0_bit at OSCCAL.B4;
    const register unsigned short int CAL1 = 5;
    sbit  CAL1_bit at OSCCAL.B5;
    const register unsigned short int CAL2 = 6;
    sbit  CAL2_bit at OSCCAL.B6;
    const register unsigned short int CAL3 = 7;
    sbit  CAL3_bit at OSCCAL.B7;

    // ADCON1 bits
    const register unsigned short int PCFG0 = 0;
    sbit  PCFG0_bit at ADCON1.B0;
    const register unsigned short int PCFG1 = 1;
    sbit  PCFG1_bit at ADCON1.B1;
    const register unsigned short int PCFG2 = 2;
    sbit  PCFG2_bit at ADCON1.B2;

    // GPIO bits
    const register unsigned short int GP5 = 5;
    sbit  GP5_bit at GPIO.B5;
    const register unsigned short int GP4 = 4;
    sbit  GP4_bit at GPIO.B4;
    const register unsigned short int GP3 = 3;
    sbit  GP3_bit at GPIO.B3;
    const register unsigned short int GP2 = 2;
    sbit  GP2_bit at GPIO.B2;
    const register unsigned short int GP1 = 1;
    sbit  GP1_bit at GPIO.B1;
    const register unsigned short int GP0 = 0;
    sbit  GP0_bit at GPIO.B0;

    // TRIS bits
    const register unsigned short int TRIS5 = 5;
    sbit  TRIS5_bit at TRIS.B5;
    const register unsigned short int TRIS4 = 4;
    sbit  TRIS4_bit at TRIS.B4;
    const register unsigned short int TRIS3 = 3;
    sbit  TRIS3_bit at TRIS.B3;
    const register unsigned short int TRIS2 = 2;
    sbit  TRIS2_bit at TRIS.B2;
    const register unsigned short int TRIS1 = 1;
    sbit  TRIS1_bit at TRIS.B1;
    const register unsigned short int TRIS0 = 0;
    sbit  TRIS0_bit at TRIS.B0;
