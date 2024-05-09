// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00000400;

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
sfr unsigned short volatile TMR1L            absolute 0x000E;
sfr unsigned short volatile TMR1H            absolute 0x000F;
sfr unsigned short volatile T1CON            absolute 0x0010;
sfr unsigned short volatile CMCON            absolute 0x0019;
sfr unsigned short volatile ADRESH           absolute 0x001E;
sfr unsigned short volatile ADCON0           absolute 0x001F;
sfr unsigned short volatile OPTION_REG       absolute 0x0081;
sfr unsigned short volatile PIE1             absolute 0x008C;
sfr unsigned short volatile PCON             absolute 0x008E;
sfr unsigned short volatile OSCCAL           absolute 0x0090;
sfr unsigned short          WPU              absolute 0x0095;
sfr unsigned short volatile IOC              absolute 0x0096;
sfr unsigned short volatile IOCB             absolute 0x0096;
sfr unsigned short volatile VRCON            absolute 0x0099;
sfr unsigned short volatile EEDAT            absolute 0x009A;
sfr unsigned short volatile EEDATA           absolute 0x009A;
sfr unsigned short volatile EEADR            absolute 0x009B;
sfr unsigned short volatile EECON1           absolute 0x009C;
sfr unsigned short volatile EECON2           absolute 0x009D;
sfr unsigned short volatile ADRESL           absolute 0x009E;
sfr unsigned short          ANSEL            absolute 0x009F;
sfr unsigned short volatile GPIO             absolute 0x0005;
sfr unsigned short volatile TRISIO           absolute 0x0085;

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
    const register unsigned short int TMR0IF = 2;
    sbit  TMR0IF_bit at INTCON.B2;
    const register unsigned short int TMR0IE = 5;
    sbit  TMR0IE_bit at INTCON.B5;

    // PIR1 bits
    const register unsigned short int TMR1IF = 0;
    sbit  TMR1IF_bit at PIR1.B0;
    const register unsigned short int CMIF = 3;
    sbit  CMIF_bit at PIR1.B3;
    const register unsigned short int ADIF = 6;
    sbit  ADIF_bit at PIR1.B6;
    const register unsigned short int EEIF = 7;
    sbit  EEIF_bit at PIR1.B7;
    const register unsigned short int T1IF = 0;
    sbit  T1IF_bit at PIR1.B0;

    // T1CON bits
    const register unsigned short int TMR1ON = 0;
    sbit  TMR1ON_bit at T1CON.B0;
    const register unsigned short int TMR1CS = 1;
    sbit  TMR1CS_bit at T1CON.B1;
    const register unsigned short int NOT_T1SYNC = 2;
    sbit  NOT_T1SYNC_bit at T1CON.B2;
    const register unsigned short int T1OSCEN = 3;
    sbit  T1OSCEN_bit at T1CON.B3;
    const register unsigned short int TMR1GE = 6;
    sbit  TMR1GE_bit at T1CON.B6;
    const register unsigned short int T1CKPS0 = 4;
    sbit  T1CKPS0_bit at T1CON.B4;
    const register unsigned short int T1CKPS1 = 5;
    sbit  T1CKPS1_bit at T1CON.B5;

    // CMCON bits
    const register unsigned short int CIS = 3;
    sbit  CIS_bit at CMCON.B3;
    const register unsigned short int CINV = 4;
    sbit  CINV_bit at CMCON.B4;
    const register unsigned short int COUT = 6;
    sbit  COUT_bit at CMCON.B6;
    const register unsigned short int CM0 = 0;
    sbit  CM0_bit at CMCON.B0;
    const register unsigned short int CM1 = 1;
    sbit  CM1_bit at CMCON.B1;
    const register unsigned short int CM2 = 2;
    sbit  CM2_bit at CMCON.B2;

    // ADCON0 bits
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADCON0.B0;
    const register unsigned short int GO_NOT_DONE = 1;
    sbit  GO_NOT_DONE_bit at ADCON0.B1;
    const register unsigned short int VCFG = 6;
    sbit  VCFG_bit at ADCON0.B6;
    const register unsigned short int ADFM = 7;
    sbit  ADFM_bit at ADCON0.B7;
    const register unsigned short int GO_DONE = 1;
    sbit  GO_DONE_bit at ADCON0.B1;
    const register unsigned short int CHS0 = 2;
    sbit  CHS0_bit at ADCON0.B2;
    const register unsigned short int CHS1 = 3;
    sbit  CHS1_bit at ADCON0.B3;
    const register unsigned short int NOT_DONE = 1;
    sbit  NOT_DONE_bit at ADCON0.B1;
    const register unsigned short int GO = 1;
    sbit  GO_bit at ADCON0.B1;

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
    const register unsigned short int TMR1IE = 0;
    sbit  TMR1IE_bit at PIE1.B0;
    const register unsigned short int CMIE = 3;
    sbit  CMIE_bit at PIE1.B3;
    const register unsigned short int ADIE = 6;
    sbit  ADIE_bit at PIE1.B6;
    const register unsigned short int EEIE = 7;
    sbit  EEIE_bit at PIE1.B7;
    const register unsigned short int T1IE = 0;
    sbit  T1IE_bit at PIE1.B0;

    // PCON bits
    const register unsigned short int NOT_BOR = 0;
    sbit  NOT_BOR_bit at PCON.B0;
    const register unsigned short int NOT_POR = 1;
    sbit  NOT_POR_bit at PCON.B1;
    const register unsigned short int NOT_BOD = 0;
    sbit  NOT_BOD_bit at PCON.B0;

    // OSCCAL bits
    const register unsigned short int CAL0 = 2;
    sbit  CAL0_bit at OSCCAL.B2;
    const register unsigned short int CAL1 = 3;
    sbit  CAL1_bit at OSCCAL.B3;
    const register unsigned short int CAL2 = 4;
    sbit  CAL2_bit at OSCCAL.B4;
    const register unsigned short int CAL3 = 5;
    sbit  CAL3_bit at OSCCAL.B5;
    const register unsigned short int CAL4 = 6;
    sbit  CAL4_bit at OSCCAL.B6;
    const register unsigned short int CAL5 = 7;
    sbit  CAL5_bit at OSCCAL.B7;

    // WPU bits
    const register unsigned short int WPU0 = 0;
    sbit  WPU0_bit at WPU.B0;
    const register unsigned short int WPU1 = 1;
    sbit  WPU1_bit at WPU.B1;
    const register unsigned short int WPU2 = 2;
    sbit  WPU2_bit at WPU.B2;
    const register unsigned short int WPU4 = 4;
    sbit  WPU4_bit at WPU.B4;
    const register unsigned short int WPU5 = 5;
    sbit  WPU5_bit at WPU.B5;

    // IOC, IOCB bits
    const register unsigned short int IOC0 = 0;
    sbit  IOC0_bit at IOC.B0;
    const register unsigned short int IOC1 = 1;
    sbit  IOC1_bit at IOC.B1;
    const register unsigned short int IOC2 = 2;
    sbit  IOC2_bit at IOC.B2;
    const register unsigned short int IOC3 = 3;
    sbit  IOC3_bit at IOC.B3;
    const register unsigned short int IOC4 = 4;
    sbit  IOC4_bit at IOC.B4;
    const register unsigned short int IOC5 = 5;
    sbit  IOC5_bit at IOC.B5;
    const register unsigned short int IOCB0 = 0;
    sbit  IOCB0_bit at IOC.B0;
    const register unsigned short int IOCB1 = 1;
    sbit  IOCB1_bit at IOC.B1;
    const register unsigned short int IOCB2 = 2;
    sbit  IOCB2_bit at IOC.B2;
    const register unsigned short int IOCB3 = 3;
    sbit  IOCB3_bit at IOC.B3;
    const register unsigned short int IOCB4 = 4;
    sbit  IOCB4_bit at IOC.B4;
    const register unsigned short int IOCB5 = 5;
    sbit  IOCB5_bit at IOC.B5;

    // VRCON bits
    const register unsigned short int VRR = 5;
    sbit  VRR_bit at VRCON.B5;
    const register unsigned short int VREN = 7;
    sbit  VREN_bit at VRCON.B7;
    const register unsigned short int VR0 = 0;
    sbit  VR0_bit at VRCON.B0;
    const register unsigned short int VR1 = 1;
    sbit  VR1_bit at VRCON.B1;
    const register unsigned short int VR2 = 2;
    sbit  VR2_bit at VRCON.B2;
    const register unsigned short int VR3 = 3;
    sbit  VR3_bit at VRCON.B3;

    // EECON1 bits
    const register unsigned short int RD = 0;
    sbit  RD_bit at EECON1.B0;
    const register unsigned short int WR = 1;
    sbit  WR_bit at EECON1.B1;
    const register unsigned short int WREN = 2;
    sbit  WREN_bit at EECON1.B2;
    const register unsigned short int WRERR = 3;
    sbit  WRERR_bit at EECON1.B3;

    // ANSEL bits
    const register unsigned short int ANS0 = 0;
    sbit  ANS0_bit at ANSEL.B0;
    const register unsigned short int ANS1 = 1;
    sbit  ANS1_bit at ANSEL.B1;
    const register unsigned short int ANS2 = 2;
    sbit  ANS2_bit at ANSEL.B2;
    const register unsigned short int ANS3 = 3;
    sbit  ANS3_bit at ANSEL.B3;
    const register unsigned short int ADCS0 = 4;
    sbit  ADCS0_bit at ANSEL.B4;
    const register unsigned short int ADCS1 = 5;
    sbit  ADCS1_bit at ANSEL.B5;
    const register unsigned short int ADCS2 = 6;
    sbit  ADCS2_bit at ANSEL.B6;

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

    // TRISIO bits
    const register unsigned short int TRISIO5 = 5;
    sbit  TRISIO5_bit at TRISIO.B5;
    const register unsigned short int TRISIO4 = 4;
    sbit  TRISIO4_bit at TRISIO.B4;
    const register unsigned short int TRISIO3 = 3;
    sbit  TRISIO3_bit at TRISIO.B3;
    const register unsigned short int TRISIO2 = 2;
    sbit  TRISIO2_bit at TRISIO.B2;
    const register unsigned short int TRISIO1 = 1;
    sbit  TRISIO1_bit at TRISIO.B1;
    const register unsigned short int TRISIO0 = 0;
    sbit  TRISIO0_bit at TRISIO.B0;
