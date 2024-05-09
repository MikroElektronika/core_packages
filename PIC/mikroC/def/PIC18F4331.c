// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00002000;

// Working space registers
rx unsigned short R0;
rx unsigned short R1;
rx unsigned short R2;
rx unsigned short R3;
rx unsigned short R4;
rx unsigned short R5;
rx unsigned short R6;
rx unsigned short R7;
rx unsigned short R8;
rx unsigned short R9;
rx unsigned short R10;
rx unsigned short R11;
rx unsigned short R12;
rx unsigned short R13;
rx unsigned short R14;
rx unsigned short R15;
rx unsigned short R16;
rx unsigned short R17;
rx unsigned short R18;
rx unsigned short R19;
rx unsigned short R20;

const register unsigned short int W = 0;
const register unsigned short int F = 1;
const register unsigned short int FAST   = 1;
const register unsigned short int A      = 0;
const register unsigned short int ACCESS = 0;
const register unsigned short int BANKED = 1;

// Special function registers (SFRs)

const signed int   PORT_TO_TRIS_OFFSET    =     18;

const unsigned short ICS_AUTO                  =     0;
const unsigned short ICS_OFF                   =     3;

sfr unsigned short volatile DFLTCON          absolute 0x0F60;
sfr unsigned short          CAP3CON          absolute 0x0F61;
sfr unsigned short          CAP2CON          absolute 0x0F62;
sfr unsigned short          CAP1CON          absolute 0x0F63;
sfr unsigned short          CAP3BUFL         absolute 0x0F64;
sfr unsigned short volatile MAXCNTL          absolute 0x0F64;
sfr unsigned short          CAP3BUFH         absolute 0x0F65;
sfr unsigned short volatile MAXCNTH          absolute 0x0F65;
sfr unsigned short          CAP2BUFL         absolute 0x0F66;
sfr unsigned short volatile POSCNTL          absolute 0x0F66;
sfr unsigned short          CAP2BUFH         absolute 0x0F67;
sfr unsigned short volatile POSCNTH          absolute 0x0F67;
sfr unsigned short          CAP1BUFL         absolute 0x0F68;
sfr unsigned short volatile VELRL            absolute 0x0F68;
sfr unsigned short          CAP1BUFH         absolute 0x0F69;
sfr unsigned short volatile VELRH            absolute 0x0F69;
sfr unsigned short volatile OVDCONS          absolute 0x0F6A;
sfr unsigned short volatile OVDCOND          absolute 0x0F6B;
sfr unsigned short volatile FLTCONFIG        absolute 0x0F6C;
sfr unsigned short volatile DTCON            absolute 0x0F6D;
sfr unsigned short          PWMCON1          absolute 0x0F6E;
sfr unsigned short          PWMCON0          absolute 0x0F6F;
sfr unsigned short volatile SEVTCMPH         absolute 0x0F70;
sfr unsigned short volatile SEVTCMPL         absolute 0x0F71;
sfr unsigned short volatile PDC3H            absolute 0x0F72;
sfr unsigned short volatile PDC3L            absolute 0x0F73;
sfr unsigned short volatile PDC2H            absolute 0x0F74;
sfr unsigned short volatile PDC2L            absolute 0x0F75;
sfr unsigned short volatile PDC1H            absolute 0x0F76;
sfr unsigned short volatile PDC1L            absolute 0x0F77;
sfr unsigned short volatile PDC0H            absolute 0x0F78;
sfr unsigned short volatile PDC0L            absolute 0x0F79;
sfr unsigned short volatile PTPERH           absolute 0x0F7A;
sfr unsigned short volatile PTPERL           absolute 0x0F7B;
sfr unsigned short volatile PTMRH            absolute 0x0F7C;
sfr unsigned short volatile PTMRL            absolute 0x0F7D;
sfr unsigned short volatile PTCON1           absolute 0x0F7E;
sfr unsigned short volatile PTCON0           absolute 0x0F7F;
sfr unsigned short volatile TMR5L            absolute 0x0F87;
sfr unsigned short volatile TMR5H            absolute 0x0F88;
sfr unsigned short volatile LATA             absolute 0x0F89;
sfr unsigned short volatile LATB             absolute 0x0F8A;
sfr unsigned short volatile LATC             absolute 0x0F8B;
sfr unsigned short volatile LATD             absolute 0x0F8C;
sfr unsigned short volatile LATE             absolute 0x0F8D;
sfr unsigned int   volatile PR5              absolute 0x0F90;
sfr unsigned short volatile PR5L             absolute 0x0F90;
sfr unsigned short volatile PR5H             absolute 0x0F91;
sfr unsigned short          ADCHS            absolute 0x0F99;
sfr unsigned short volatile ADCON3           absolute 0x0F9A;
sfr unsigned short volatile OSCTUNE          absolute 0x0F9B;
sfr unsigned short volatile PIE1             absolute 0x0F9D;
sfr unsigned short volatile PIR1             absolute 0x0F9E;
sfr unsigned short volatile IPR1             absolute 0x0F9F;
sfr unsigned short volatile PIE2             absolute 0x0FA0;
sfr unsigned short volatile PIR2             absolute 0x0FA1;
sfr unsigned short volatile IPR2             absolute 0x0FA2;
sfr unsigned short volatile PIE3             absolute 0x0FA3;
sfr unsigned short volatile PIR3             absolute 0x0FA4;
sfr unsigned short volatile IPR3             absolute 0x0FA5;
sfr unsigned short volatile EECON1           absolute 0x0FA6;
sfr unsigned short volatile EECON2           absolute 0x0FA7;
sfr unsigned short volatile EEDATA           absolute 0x0FA8;
sfr unsigned short volatile EEADR            absolute 0x0FA9;
sfr unsigned short          BAUDCON          absolute 0x0FAA;
sfr unsigned short          BAUDCTL          absolute 0x0FAA;
sfr unsigned short volatile RCSTA            absolute 0x0FAB;
sfr unsigned short volatile TXSTA            absolute 0x0FAC;
sfr unsigned short volatile TXREG            absolute 0x0FAD;
sfr unsigned short volatile RCREG            absolute 0x0FAE;
sfr unsigned short          SPBRG            absolute 0x0FAF;
sfr unsigned short          SPBRGH           absolute 0x0FB0;
sfr unsigned short volatile QEICON           absolute 0x0FB6;
sfr unsigned short volatile T5CON            absolute 0x0FB7;
sfr unsigned short          ANSEL0           absolute 0x0FB8;
sfr unsigned short          ANSEL1           absolute 0x0FB9;
sfr unsigned short volatile CCP2CON          absolute 0x0FBA;
sfr unsigned short volatile CCP1CON          absolute 0x0FBD;
sfr unsigned int   volatile CCPR1            absolute 0x0FBE;
sfr unsigned short volatile CCPR1L           absolute 0x0FBE;
sfr unsigned short volatile CCPR1H           absolute 0x0FBF;
sfr unsigned short volatile ADCON2           absolute 0x0FC0;
sfr unsigned short volatile ADCON1           absolute 0x0FC1;
sfr unsigned short volatile ADCON0           absolute 0x0FC2;
sfr unsigned short volatile ADRESL           absolute 0x0FC3;
sfr unsigned short volatile ADRESH           absolute 0x0FC4;
sfr unsigned short volatile SSPCON           absolute 0x0FC6;
sfr unsigned short volatile SSPSTAT          absolute 0x0FC7;
sfr unsigned short volatile SSPADD           absolute 0x0FC8;
sfr unsigned short volatile SSPBUF           absolute 0x0FC9;
sfr unsigned short volatile T2CON            absolute 0x0FCA;
sfr unsigned short volatile PR2              absolute 0x0FCB;
sfr unsigned short volatile TMR2             absolute 0x0FCC;
sfr unsigned short volatile T1CON            absolute 0x0FCD;
sfr unsigned short volatile TMR1L            absolute 0x0FCE;
sfr unsigned short volatile TMR1H            absolute 0x0FCF;
sfr unsigned short volatile RCON             absolute 0x0FD0;
sfr unsigned short          WDTCON           absolute 0x0FD1;
sfr unsigned short volatile LVDCON           absolute 0x0FD2;
sfr unsigned short volatile OSCCON           absolute 0x0FD3;
sfr unsigned short volatile T0CON            absolute 0x0FD5;
sfr unsigned short volatile TMR0L            absolute 0x0FD6;
sfr unsigned short volatile TMR0H            absolute 0x0FD7;
sfr unsigned short volatile STATUS           absolute 0x0FD8;
sfr unsigned short          FSR2L            absolute 0x0FD9;
register unsigned short     *FSR2PTR         absolute 0x0FD9;
sfr unsigned int            FSR2             absolute 0x0FD9;
sfr unsigned short          FSR2H            absolute 0x0FDA;
sfr unsigned short volatile PLUSW2           absolute 0x0FDB;
sfr unsigned short volatile PREINC2          absolute 0x0FDC;
sfr unsigned short volatile POSTDEC2         absolute 0x0FDD;
sfr unsigned short volatile POSTINC2         absolute 0x0FDE;
sfr unsigned short volatile INDF2            absolute 0x0FDF;
sfr unsigned short          BSR              absolute 0x0FE0;
sfr unsigned short          FSR1L            absolute 0x0FE1;
register unsigned short     *FSR1PTR         absolute 0x0FE1;
sfr unsigned int            FSR1             absolute 0x0FE1;
sfr unsigned short          FSR1H            absolute 0x0FE2;
sfr unsigned short volatile PLUSW1           absolute 0x0FE3;
sfr unsigned short volatile PREINC1          absolute 0x0FE4;
sfr unsigned short volatile POSTDEC1         absolute 0x0FE5;
sfr unsigned short volatile POSTINC1         absolute 0x0FE6;
sfr unsigned short volatile INDF1            absolute 0x0FE7;
sfr unsigned short volatile WREG             absolute 0x0FE8;
sfr unsigned short          FSR0L            absolute 0x0FE9;
register unsigned short     *FSR0PTR         absolute 0x0FE9;
sfr unsigned int            FSR0             absolute 0x0FE9;
sfr unsigned short          FSR0H            absolute 0x0FEA;
sfr unsigned short volatile PLUSW0           absolute 0x0FEB;
sfr unsigned short volatile PREINC0          absolute 0x0FEC;
sfr unsigned short volatile POSTDEC0         absolute 0x0FED;
sfr unsigned short volatile POSTINC0         absolute 0x0FEE;
sfr unsigned short volatile INDF0            absolute 0x0FEF;
sfr unsigned short volatile INTCON3          absolute 0x0FF0;
sfr unsigned short volatile INTCON2          absolute 0x0FF1;
sfr unsigned short volatile INTCON           absolute 0x0FF2;
sfr unsigned short volatile TABLAT           absolute 0x0FF5;
const register unsigned short *TBLPTR        absolute 0x0FF6;
sfr unsigned short          TBLPTRL          absolute 0x0FF6;
sfr unsigned short          TBLPTRH          absolute 0x0FF7;
sfr unsigned short          TBLPTRU          absolute 0x0FF8;
sfr unsigned short volatile PC               absolute 0x0FF9;
sfr unsigned short volatile PCL              absolute 0x0FF9;
sfr unsigned short volatile PCLATH           absolute 0x0FFA;
sfr unsigned short volatile PCLATU           absolute 0x0FFB;
sfr unsigned short volatile STKPTR           absolute 0x0FFC;
sfr unsigned short volatile PORTA            absolute 0x0F80;
sfr unsigned short volatile PORTB            absolute 0x0F81;
sfr unsigned short volatile PORTC            absolute 0x0F82;
sfr unsigned short volatile PORTD            absolute 0x0F83;
sfr unsigned short volatile PORTE            absolute 0x0F84;
sfr unsigned short volatile TRISA            absolute 0x0F92;
sfr unsigned short volatile TRISB            absolute 0x0F93;
sfr unsigned short volatile TRISC            absolute 0x0F94;
sfr unsigned short volatile TRISD            absolute 0x0F95;
sfr unsigned short volatile TRISE            absolute 0x0F96;
sfr unsigned int   volatile CCPR2            absolute 0x0FBB;
sfr unsigned short volatile CCPR2L           absolute 0x0FBB;
sfr unsigned short volatile CCPR2H           absolute 0x0FBC;
sfr unsigned int   volatile ADRES            absolute 0x0FC3;
sfr unsigned int            PROD             absolute 0x0FF3;
sfr unsigned short          PRODL            absolute 0x0FF3;
sfr unsigned short          PRODH            absolute 0x0FF4;
sfr unsigned short volatile TOSL             absolute 0x0FFD;
sfr unsigned short volatile TOSH             absolute 0x0FFE;
sfr unsigned short volatile TOSU             absolute 0x0FFF;

    // DFLTCON bits
    const register unsigned short int FLT1EN = 3;
    sbit  FLT1EN_bit at DFLTCON.B3;
    const register unsigned short int FLT2EN = 4;
    sbit  FLT2EN_bit at DFLTCON.B4;
    const register unsigned short int FLT3EN = 5;
    sbit  FLT3EN_bit at DFLTCON.B5;
    const register unsigned short int FLT4EN = 6;
    sbit  FLT4EN_bit at DFLTCON.B6;
    const register unsigned short int FLTCK0 = 0;
    sbit  FLTCK0_bit at DFLTCON.B0;
    const register unsigned short int FLTCK1 = 1;
    sbit  FLTCK1_bit at DFLTCON.B1;
    const register unsigned short int FLTCK2 = 2;
    sbit  FLTCK2_bit at DFLTCON.B2;

    // CAP3CON bits
    const register unsigned short int CAP3TMR = 5;
    sbit  CAP3TMR_bit at CAP3CON.B5;
    const register unsigned short int CAP3REN = 6;
    sbit  CAP3REN_bit at CAP3CON.B6;
    const register unsigned short int CAP3M0 = 0;
    sbit  CAP3M0_bit at CAP3CON.B0;
    const register unsigned short int CAP3M1 = 1;
    sbit  CAP3M1_bit at CAP3CON.B1;
    const register unsigned short int CAP3M2 = 2;
    sbit  CAP3M2_bit at CAP3CON.B2;
    const register unsigned short int CAP3M3 = 3;
    sbit  CAP3M3_bit at CAP3CON.B3;

    // CAP2CON bits
    const register unsigned short int CAP2TMR = 5;
    sbit  CAP2TMR_bit at CAP2CON.B5;
    const register unsigned short int CAP2REN = 6;
    sbit  CAP2REN_bit at CAP2CON.B6;
    const register unsigned short int CAP2M0 = 0;
    sbit  CAP2M0_bit at CAP2CON.B0;
    const register unsigned short int CAP2M1 = 1;
    sbit  CAP2M1_bit at CAP2CON.B1;
    const register unsigned short int CAP2M2 = 2;
    sbit  CAP2M2_bit at CAP2CON.B2;
    const register unsigned short int CAP2M3 = 3;
    sbit  CAP2M3_bit at CAP2CON.B3;

    // CAP1CON bits
    const register unsigned short int CAP1TMR = 5;
    sbit  CAP1TMR_bit at CAP1CON.B5;
    const register unsigned short int CAP1REN = 6;
    sbit  CAP1REN_bit at CAP1CON.B6;
    const register unsigned short int CAP1M0 = 0;
    sbit  CAP1M0_bit at CAP1CON.B0;
    const register unsigned short int CAP1M1 = 1;
    sbit  CAP1M1_bit at CAP1CON.B1;
    const register unsigned short int CAP1M2 = 2;
    sbit  CAP1M2_bit at CAP1CON.B2;
    const register unsigned short int CAP1M3 = 3;
    sbit  CAP1M3_bit at CAP1CON.B3;

    // OVDCONS bits
    const register unsigned short int POUT0 = 0;
    sbit  POUT0_bit at OVDCONS.B0;
    const register unsigned short int POUT1 = 1;
    sbit  POUT1_bit at OVDCONS.B1;
    const register unsigned short int POUT2 = 2;
    sbit  POUT2_bit at OVDCONS.B2;
    const register unsigned short int POUT3 = 3;
    sbit  POUT3_bit at OVDCONS.B3;
    const register unsigned short int POUT4 = 4;
    sbit  POUT4_bit at OVDCONS.B4;
    const register unsigned short int POUT5 = 5;
    sbit  POUT5_bit at OVDCONS.B5;
    const register unsigned short int POUT6 = 6;
    sbit  POUT6_bit at OVDCONS.B6;
    const register unsigned short int POUT7 = 7;
    sbit  POUT7_bit at OVDCONS.B7;

    // OVDCOND bits
    const register unsigned short int POVD0 = 0;
    sbit  POVD0_bit at OVDCOND.B0;
    const register unsigned short int POVD1 = 1;
    sbit  POVD1_bit at OVDCOND.B1;
    const register unsigned short int POVD2 = 2;
    sbit  POVD2_bit at OVDCOND.B2;
    const register unsigned short int POVD3 = 3;
    sbit  POVD3_bit at OVDCOND.B3;
    const register unsigned short int POVD4 = 4;
    sbit  POVD4_bit at OVDCOND.B4;
    const register unsigned short int POVD5 = 5;
    sbit  POVD5_bit at OVDCOND.B5;
    const register unsigned short int POVD6 = 6;
    sbit  POVD6_bit at OVDCOND.B6;
    const register unsigned short int POVD7 = 7;
    sbit  POVD7_bit at OVDCOND.B7;

    // FLTCONFIG bits
    const register unsigned short int FLTAEN = 0;
    sbit  FLTAEN_bit at FLTCONFIG.B0;
    const register unsigned short int FLTAMOD = 1;
    sbit  FLTAMOD_bit at FLTCONFIG.B1;
    const register unsigned short int FLTAS = 2;
    sbit  FLTAS_bit at FLTCONFIG.B2;
    const register unsigned short int FLTCON = 3;
    sbit  FLTCON_bit at FLTCONFIG.B3;
    const register unsigned short int FLTBEN = 4;
    sbit  FLTBEN_bit at FLTCONFIG.B4;
    const register unsigned short int FLTBMOD = 5;
    sbit  FLTBMOD_bit at FLTCONFIG.B5;
    const register unsigned short int FLTBS = 6;
    sbit  FLTBS_bit at FLTCONFIG.B6;
    const register unsigned short int BRFEN = 7;
    sbit  BRFEN_bit at FLTCONFIG.B7;

    // DTCON bits
    const register unsigned short int DT0 = 0;
    sbit  DT0_bit at DTCON.B0;
    const register unsigned short int DT1 = 1;
    sbit  DT1_bit at DTCON.B1;
    const register unsigned short int DT2 = 2;
    sbit  DT2_bit at DTCON.B2;
    const register unsigned short int DT3 = 3;
    sbit  DT3_bit at DTCON.B3;
    const register unsigned short int DT4 = 4;
    sbit  DT4_bit at DTCON.B4;
    const register unsigned short int DT5 = 5;
    sbit  DT5_bit at DTCON.B5;
    const register unsigned short int DTPS0 = 6;
    sbit  DTPS0_bit at DTCON.B6;
    const register unsigned short int DTPS1 = 7;
    sbit  DTPS1_bit at DTCON.B7;
    const register unsigned short int DTA0 = 0;
    sbit  DTA0_bit at DTCON.B0;
    const register unsigned short int DTA1 = 1;
    sbit  DTA1_bit at DTCON.B1;
    const register unsigned short int DTA2 = 2;
    sbit  DTA2_bit at DTCON.B2;
    const register unsigned short int DTA3 = 3;
    sbit  DTA3_bit at DTCON.B3;
    const register unsigned short int DTA4 = 4;
    sbit  DTA4_bit at DTCON.B4;
    const register unsigned short int DTA5 = 5;
    sbit  DTA5_bit at DTCON.B5;
    const register unsigned short int DTAPS0 = 6;
    sbit  DTAPS0_bit at DTCON.B6;
    const register unsigned short int DTAPS1 = 7;
    sbit  DTAPS1_bit at DTCON.B7;

    // PWMCON1 bits
    const register unsigned short int OSYNC = 0;
    sbit  OSYNC_bit at PWMCON1.B0;
    const register unsigned short int UDIS = 1;
    sbit  UDIS_bit at PWMCON1.B1;
    const register unsigned short int SEVTDIR = 3;
    sbit  SEVTDIR_bit at PWMCON1.B3;
    const register unsigned short int SEVOPS0 = 4;
    sbit  SEVOPS0_bit at PWMCON1.B4;
    const register unsigned short int SEVOPS1 = 5;
    sbit  SEVOPS1_bit at PWMCON1.B5;
    const register unsigned short int SEVOPS2 = 6;
    sbit  SEVOPS2_bit at PWMCON1.B6;
    const register unsigned short int SEVOPS3 = 7;
    sbit  SEVOPS3_bit at PWMCON1.B7;

    // PWMCON0 bits
    const register unsigned short int PMOD0 = 0;
    sbit  PMOD0_bit at PWMCON0.B0;
    const register unsigned short int PMOD1 = 1;
    sbit  PMOD1_bit at PWMCON0.B1;
    const register unsigned short int PMOD2 = 2;
    sbit  PMOD2_bit at PWMCON0.B2;
    const register unsigned short int PMOD3 = 3;
    sbit  PMOD3_bit at PWMCON0.B3;
    const register unsigned short int PWMEN0 = 4;
    sbit  PWMEN0_bit at PWMCON0.B4;
    const register unsigned short int PWMEN1 = 5;
    sbit  PWMEN1_bit at PWMCON0.B5;
    const register unsigned short int PWMEN2 = 6;
    sbit  PWMEN2_bit at PWMCON0.B6;

    // PTCON1 bits
    const register unsigned short int PTDIR = 6;
    sbit  PTDIR_bit at PTCON1.B6;
    const register unsigned short int PTEN = 7;
    sbit  PTEN_bit at PTCON1.B7;

    // PTCON0 bits
    const register unsigned short int PTMOD0 = 0;
    sbit  PTMOD0_bit at PTCON0.B0;
    const register unsigned short int PTMOD1 = 1;
    sbit  PTMOD1_bit at PTCON0.B1;
    const register unsigned short int PTCKPS0 = 2;
    sbit  PTCKPS0_bit at PTCON0.B2;
    const register unsigned short int PTCKPS1 = 3;
    sbit  PTCKPS1_bit at PTCON0.B3;
    const register unsigned short int PTOPS0 = 4;
    sbit  PTOPS0_bit at PTCON0.B4;
    const register unsigned short int PTOPS1 = 5;
    sbit  PTOPS1_bit at PTCON0.B5;
    const register unsigned short int PTOPS2 = 6;
    sbit  PTOPS2_bit at PTCON0.B6;
    const register unsigned short int PTOPS3 = 7;
    sbit  PTOPS3_bit at PTCON0.B7;

    // Alternative bit function
    const register unsigned short int AN0 = 0;
    sbit  AN0_bit at PORTA.B0;

    // Alternative bit function
    const register unsigned short int AN1 = 1;
    sbit  AN1_bit at PORTA.B1;

    // Alternative bit function
    const register unsigned short int AN2 = 2;
    sbit  AN2_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int AN3 = 3;
    sbit  AN3_bit at PORTA.B3;

    // Alternative bit function
    const register unsigned short int AN4 = 4;
    sbit  AN4_bit at PORTA.B4;

    // Alternative bit function
    const register unsigned short int AN5 = 5;
    sbit  AN5_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int OSC2 = 6;
    sbit  OSC2_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int OSC1 = 7;
    sbit  OSC1_bit at PORTA.B7;

    // Alternative bit function
    const register unsigned short int VREFM = 2;
    sbit  VREFM_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int VREFP = 3;
    sbit  VREFP_bit at PORTA.B3;

    // Alternative bit function
    const register unsigned short int LVDIN = 5;
    sbit  LVDIN_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int CLKO = 6;
    sbit  CLKO_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int CLKI = 7;
    sbit  CLKI_bit at PORTA.B7;

    // Alternative bit function
    const register unsigned short int T1OSO = 0;
    sbit  T1OSO_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int T1OSI = 1;
    sbit  T1OSI_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int CCP1 = 2;
    sbit  CCP1_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int INT0 = 3;
    sbit  INT0_bit at PORTC.B3;

    // Alternative bit function
    const register unsigned short int INT1 = 4;
    sbit  INT1_bit at PORTC.B4;

    // Alternative bit function
    const register unsigned short int INT2 = 5;
    sbit  INT2_bit at PORTC.B5;

    // Alternative bit function
    const register unsigned short int TX = 6;
    sbit  TX_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int RX_ = 7;
    sbit  RX__bit at PORTC.B7;

    // Alternative bit function
    const register unsigned short int T13CKI = 0;
    sbit  T13CKI_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int CCP2 = 1;
    sbit  CCP2_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int T0CKI = 3;
    sbit  T0CKI_bit at PORTC.B3;

    // Alternative bit function
    const register unsigned short int SDA = 4;
    sbit  SDA_bit at PORTC.B4;

    // Alternative bit function
    const register unsigned short int SCK = 5;
    sbit  SCK_bit at PORTC.B5;

    // Alternative bit function
    const register unsigned short int CK = 6;
    sbit  CK_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int NOT_FLTA = 1;
    sbit  NOT_FLTA_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int NOT_FLTB = 2;
    sbit  NOT_FLTB_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int T5CKI = 3;
    sbit  T5CKI_bit at PORTC.B3;

    // Alternative bit function
    const register unsigned short int SDI = 4;
    sbit  SDI_bit at PORTC.B4;

    // Alternative bit function
    const register unsigned short int SCL = 5;
    sbit  SCL_bit at PORTC.B5;

    // Alternative bit function
    const register unsigned short int NOT_SS = 6;
    sbit  NOT_SS_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int SDO = 7;
    sbit  SDO_bit at PORTC.B7;

    // Alternative bit function
    const register unsigned short int FLTA = 1;
    sbit  FLTA_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int FLTB = 2;
    sbit  FLTB_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int SS = 6;
    sbit  SS_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int NOT_MCLR = 3;
    sbit  NOT_MCLR_bit at PORTE.B3;

    // Alternative bit function
    const register unsigned short int MCLR = 3;
    sbit  MCLR_bit at PORTE.B3;

    // LATA bits
    const register unsigned short int LATA0 = 0;
    sbit  LATA0_bit at LATA.B0;
    const register unsigned short int LATA1 = 1;
    sbit  LATA1_bit at LATA.B1;
    const register unsigned short int LATA2 = 2;
    sbit  LATA2_bit at LATA.B2;
    const register unsigned short int LATA3 = 3;
    sbit  LATA3_bit at LATA.B3;
    const register unsigned short int LATA4 = 4;
    sbit  LATA4_bit at LATA.B4;
    const register unsigned short int LATA5 = 5;
    sbit  LATA5_bit at LATA.B5;
    const register unsigned short int LATA6 = 6;
    sbit  LATA6_bit at LATA.B6;
    const register unsigned short int LATA7 = 7;
    sbit  LATA7_bit at LATA.B7;

    // LATB bits
    const register unsigned short int LATB0 = 0;
    sbit  LATB0_bit at LATB.B0;
    const register unsigned short int LATB1 = 1;
    sbit  LATB1_bit at LATB.B1;
    const register unsigned short int LATB2 = 2;
    sbit  LATB2_bit at LATB.B2;
    const register unsigned short int LATB3 = 3;
    sbit  LATB3_bit at LATB.B3;
    const register unsigned short int LATB4 = 4;
    sbit  LATB4_bit at LATB.B4;
    const register unsigned short int LATB5 = 5;
    sbit  LATB5_bit at LATB.B5;
    const register unsigned short int LATB6 = 6;
    sbit  LATB6_bit at LATB.B6;
    const register unsigned short int LATB7 = 7;
    sbit  LATB7_bit at LATB.B7;

    // LATC bits
    const register unsigned short int LATC0 = 0;
    sbit  LATC0_bit at LATC.B0;
    const register unsigned short int LATC1 = 1;
    sbit  LATC1_bit at LATC.B1;
    const register unsigned short int LATC2 = 2;
    sbit  LATC2_bit at LATC.B2;
    const register unsigned short int LATC3 = 3;
    sbit  LATC3_bit at LATC.B3;
    const register unsigned short int LATC4 = 4;
    sbit  LATC4_bit at LATC.B4;
    const register unsigned short int LATC5 = 5;
    sbit  LATC5_bit at LATC.B5;
    const register unsigned short int LATC6 = 6;
    sbit  LATC6_bit at LATC.B6;
    const register unsigned short int LATC7 = 7;
    sbit  LATC7_bit at LATC.B7;

    // LATD bits
    const register unsigned short int LATD0 = 0;
    sbit  LATD0_bit at LATD.B0;
    const register unsigned short int LATD1 = 1;
    sbit  LATD1_bit at LATD.B1;
    const register unsigned short int LATD2 = 2;
    sbit  LATD2_bit at LATD.B2;
    const register unsigned short int LATD3 = 3;
    sbit  LATD3_bit at LATD.B3;
    const register unsigned short int LATD4 = 4;
    sbit  LATD4_bit at LATD.B4;
    const register unsigned short int LATD5 = 5;
    sbit  LATD5_bit at LATD.B5;
    const register unsigned short int LATD6 = 6;
    sbit  LATD6_bit at LATD.B6;
    const register unsigned short int LATD7 = 7;
    sbit  LATD7_bit at LATD.B7;

    // LATE bits
    const register unsigned short int LATE0 = 0;
    sbit  LATE0_bit at LATE.B0;
    const register unsigned short int LATE1 = 1;
    sbit  LATE1_bit at LATE.B1;
    const register unsigned short int LATE2 = 2;
    sbit  LATE2_bit at LATE.B2;

    // ADCHS bits
    const register unsigned short int GASEL0 = 0;
    sbit  GASEL0_bit at ADCHS.B0;
    const register unsigned short int GASEL1 = 1;
    sbit  GASEL1_bit at ADCHS.B1;
    const register unsigned short int GCSEL0 = 2;
    sbit  GCSEL0_bit at ADCHS.B2;
    const register unsigned short int GCSEL1 = 3;
    sbit  GCSEL1_bit at ADCHS.B3;
    const register unsigned short int GBSEL0 = 4;
    sbit  GBSEL0_bit at ADCHS.B4;
    const register unsigned short int GBSEL1 = 5;
    sbit  GBSEL1_bit at ADCHS.B5;
    const register unsigned short int GDSEL0 = 6;
    sbit  GDSEL0_bit at ADCHS.B6;
    const register unsigned short int GDSEL1 = 7;
    sbit  GDSEL1_bit at ADCHS.B7;
    const register unsigned short int SASEL0 = 0;
    sbit  SASEL0_bit at ADCHS.B0;
    const register unsigned short int SASEL1 = 1;
    sbit  SASEL1_bit at ADCHS.B1;
    const register unsigned short int SCSEL0 = 2;
    sbit  SCSEL0_bit at ADCHS.B2;
    const register unsigned short int SCSEL1 = 3;
    sbit  SCSEL1_bit at ADCHS.B3;
    const register unsigned short int SBSEL0 = 4;
    sbit  SBSEL0_bit at ADCHS.B4;
    const register unsigned short int SBSEL1 = 5;
    sbit  SBSEL1_bit at ADCHS.B5;
    const register unsigned short int SDSEL0 = 6;
    sbit  SDSEL0_bit at ADCHS.B6;
    const register unsigned short int SDSEL1 = 7;
    sbit  SDSEL1_bit at ADCHS.B7;

    // ADCON3 bits
    const register unsigned short int SSRC0 = 0;
    sbit  SSRC0_bit at ADCON3.B0;
    const register unsigned short int SSRC1 = 1;
    sbit  SSRC1_bit at ADCON3.B1;
    const register unsigned short int SSRC2 = 2;
    sbit  SSRC2_bit at ADCON3.B2;
    const register unsigned short int SSRC3 = 3;
    sbit  SSRC3_bit at ADCON3.B3;
    const register unsigned short int SSRC4 = 4;
    sbit  SSRC4_bit at ADCON3.B4;
    const register unsigned short int ADRS0 = 6;
    sbit  ADRS0_bit at ADCON3.B6;
    const register unsigned short int ADRS1 = 7;
    sbit  ADRS1_bit at ADCON3.B7;

    // OSCTUNE bits
    const register unsigned short int TUN0 = 0;
    sbit  TUN0_bit at OSCTUNE.B0;
    const register unsigned short int TUN1 = 1;
    sbit  TUN1_bit at OSCTUNE.B1;
    const register unsigned short int TUN2 = 2;
    sbit  TUN2_bit at OSCTUNE.B2;
    const register unsigned short int TUN3 = 3;
    sbit  TUN3_bit at OSCTUNE.B3;
    const register unsigned short int TUN4 = 4;
    sbit  TUN4_bit at OSCTUNE.B4;
    const register unsigned short int TUN5 = 5;
    sbit  TUN5_bit at OSCTUNE.B5;

    // PIE1 bits
    const register unsigned short int TMR1IE = 0;
    sbit  TMR1IE_bit at PIE1.B0;
    const register unsigned short int TMR2IE = 1;
    sbit  TMR2IE_bit at PIE1.B1;
    const register unsigned short int CCP1IE = 2;
    sbit  CCP1IE_bit at PIE1.B2;
    const register unsigned short int SSPIE = 3;
    sbit  SSPIE_bit at PIE1.B3;
    const register unsigned short int TXIE = 4;
    sbit  TXIE_bit at PIE1.B4;
    const register unsigned short int RCIE = 5;
    sbit  RCIE_bit at PIE1.B5;
    const register unsigned short int ADIE = 6;
    sbit  ADIE_bit at PIE1.B6;
    const register unsigned short int TBIE = 4;
    sbit  TBIE_bit at PIE1.B4;

    // PIR1 bits
    const register unsigned short int TMR1IF = 0;
    sbit  TMR1IF_bit at PIR1.B0;
    const register unsigned short int TMR2IF = 1;
    sbit  TMR2IF_bit at PIR1.B1;
    const register unsigned short int CCP1IF = 2;
    sbit  CCP1IF_bit at PIR1.B2;
    const register unsigned short int SSPIF = 3;
    sbit  SSPIF_bit at PIR1.B3;
    const register unsigned short int TXIF = 4;
    sbit  TXIF_bit at PIR1.B4;
    const register unsigned short int RCIF = 5;
    sbit  RCIF_bit at PIR1.B5;
    const register unsigned short int ADIF = 6;
    sbit  ADIF_bit at PIR1.B6;
    const register unsigned short int TBIF = 4;
    sbit  TBIF_bit at PIR1.B4;

    // IPR1 bits
    const register unsigned short int TMR1IP = 0;
    sbit  TMR1IP_bit at IPR1.B0;
    const register unsigned short int TMR2IP = 1;
    sbit  TMR2IP_bit at IPR1.B1;
    const register unsigned short int CCP1IP = 2;
    sbit  CCP1IP_bit at IPR1.B2;
    const register unsigned short int SSPIP = 3;
    sbit  SSPIP_bit at IPR1.B3;
    const register unsigned short int TXIP = 4;
    sbit  TXIP_bit at IPR1.B4;
    const register unsigned short int RCIP = 5;
    sbit  RCIP_bit at IPR1.B5;
    const register unsigned short int ADIP = 6;
    sbit  ADIP_bit at IPR1.B6;
    const register unsigned short int TBIP = 4;
    sbit  TBIP_bit at IPR1.B4;

    // PIE2 bits
    const register unsigned short int CCP2IE = 0;
    sbit  CCP2IE_bit at PIE2.B0;
    const register unsigned short int LVDIE = 2;
    sbit  LVDIE_bit at PIE2.B2;
    const register unsigned short int EEIE = 4;
    sbit  EEIE_bit at PIE2.B4;
    const register unsigned short int OSFIE = 7;
    sbit  OSFIE_bit at PIE2.B7;

    // PIR2 bits
    const register unsigned short int CCP2IF = 0;
    sbit  CCP2IF_bit at PIR2.B0;
    const register unsigned short int LVDIF = 2;
    sbit  LVDIF_bit at PIR2.B2;
    const register unsigned short int EEIF = 4;
    sbit  EEIF_bit at PIR2.B4;
    const register unsigned short int OSFIF = 7;
    sbit  OSFIF_bit at PIR2.B7;

    // IPR2 bits
    const register unsigned short int CCP2IP = 0;
    sbit  CCP2IP_bit at IPR2.B0;
    const register unsigned short int LVDIP = 2;
    sbit  LVDIP_bit at IPR2.B2;
    const register unsigned short int EEIP = 4;
    sbit  EEIP_bit at IPR2.B4;
    const register unsigned short int OSFIP = 7;
    sbit  OSFIP_bit at IPR2.B7;

    // PIE3 bits
    const register unsigned short int TMR5IE = 0;
    sbit  TMR5IE_bit at PIE3.B0;
    const register unsigned short int IC1IE = 1;
    sbit  IC1IE_bit at PIE3.B1;
    const register unsigned short int IC2QEIE = 2;
    sbit  IC2QEIE_bit at PIE3.B2;
    const register unsigned short int IC3DRIE = 3;
    sbit  IC3DRIE_bit at PIE3.B3;
    const register unsigned short int PTIE = 4;
    sbit  PTIE_bit at PIE3.B4;

    // PIR3 bits
    const register unsigned short int TMR5IF = 0;
    sbit  TMR5IF_bit at PIR3.B0;
    const register unsigned short int IC1IF = 1;
    sbit  IC1IF_bit at PIR3.B1;
    const register unsigned short int IC2QEIF = 2;
    sbit  IC2QEIF_bit at PIR3.B2;
    const register unsigned short int IC3DRIF = 3;
    sbit  IC3DRIF_bit at PIR3.B3;
    const register unsigned short int PTIF = 4;
    sbit  PTIF_bit at PIR3.B4;

    // IPR3 bits
    const register unsigned short int TMR5IP = 0;
    sbit  TMR5IP_bit at IPR3.B0;
    const register unsigned short int IC1IP = 1;
    sbit  IC1IP_bit at IPR3.B1;
    const register unsigned short int IC2QEIP = 2;
    sbit  IC2QEIP_bit at IPR3.B2;
    const register unsigned short int IC3DRIP = 3;
    sbit  IC3DRIP_bit at IPR3.B3;
    const register unsigned short int PTIP = 4;
    sbit  PTIP_bit at IPR3.B4;

    // EECON1 bits
    const register unsigned short int RD = 0;
    sbit  RD_bit at EECON1.B0;
    const register unsigned short int WR = 1;
    sbit  WR_bit at EECON1.B1;
    const register unsigned short int WREN = 2;
    sbit  WREN_bit at EECON1.B2;
    const register unsigned short int WRERR = 3;
    sbit  WRERR_bit at EECON1.B3;
    const register unsigned short int FREE = 4;
    sbit  FREE_bit at EECON1.B4;
    const register unsigned short int CFGS = 6;
    sbit  CFGS_bit at EECON1.B6;
    const register unsigned short int EEPGD = 7;
    sbit  EEPGD_bit at EECON1.B7;

    // BAUDCON, BAUDCTL bits
    const register unsigned short int ABDEN = 0;
    sbit  ABDEN_bit at BAUDCON.B0;
    const register unsigned short int WUE = 1;
    sbit  WUE_bit at BAUDCON.B1;
    const register unsigned short int BRG16 = 3;
    sbit  BRG16_bit at BAUDCON.B3;
    const register unsigned short int TXCKP = 4;
    sbit  TXCKP_bit at BAUDCON.B4;
    const register unsigned short int RXDTP = 5;
    sbit  RXDTP_bit at BAUDCON.B5;
    const register unsigned short int RCIDL = 6;
    sbit  RCIDL_bit at BAUDCON.B6;
    const register unsigned short int ABDOVF = 7;
    sbit  ABDOVF_bit at BAUDCON.B7;
    const register unsigned short int SCKP = 4;
    sbit  SCKP_bit at BAUDCON.B4;
    const register unsigned short int RCMT = 6;
    sbit  RCMT_bit at BAUDCON.B6;

    // RCSTA bits
    const register unsigned short int RX9D = 0;
    sbit  RX9D_bit at RCSTA.B0;
    const register unsigned short int OERR = 1;
    sbit  OERR_bit at RCSTA.B1;
    const register unsigned short int FERR = 2;
    sbit  FERR_bit at RCSTA.B2;
    const register unsigned short int ADDEN = 3;
    sbit  ADDEN_bit at RCSTA.B3;
    const register unsigned short int CREN = 4;
    sbit  CREN_bit at RCSTA.B4;
    const register unsigned short int SREN = 5;
    sbit  SREN_bit at RCSTA.B5;
    const register unsigned short int RX9 = 6;
    sbit  RX9_bit at RCSTA.B6;
    const register unsigned short int SPEN = 7;
    sbit  SPEN_bit at RCSTA.B7;
    const register unsigned short int ADEN = 3;
    sbit  ADEN_bit at RCSTA.B3;

    // TXSTA bits
    const register unsigned short int TX9D = 0;
    sbit  TX9D_bit at TXSTA.B0;
    const register unsigned short int TRMT = 1;
    sbit  TRMT_bit at TXSTA.B1;
    const register unsigned short int BRGH = 2;
    sbit  BRGH_bit at TXSTA.B2;
    const register unsigned short int SENDB = 3;
    sbit  SENDB_bit at TXSTA.B3;
    const register unsigned short int SYNC = 4;
    sbit  SYNC_bit at TXSTA.B4;
    const register unsigned short int TXEN = 5;
    sbit  TXEN_bit at TXSTA.B5;
    const register unsigned short int TX9 = 6;
    sbit  TX9_bit at TXSTA.B6;
    const register unsigned short int CSRC = 7;
    sbit  CSRC_bit at TXSTA.B7;

    // QEICON bits
    const register unsigned short int UP_NOT_DOWN = 5;
    sbit  UP_NOT_DOWN_bit at QEICON.B5;
    const register unsigned short int NOT_VELM = 7;
    sbit  NOT_VELM_bit at QEICON.B7;
    const register unsigned short int PDEC0 = 0;
    sbit  PDEC0_bit at QEICON.B0;
    const register unsigned short int PDEC1 = 1;
    sbit  PDEC1_bit at QEICON.B1;
    const register unsigned short int QEIM0 = 2;
    sbit  QEIM0_bit at QEICON.B2;
    const register unsigned short int QEIM1 = 3;
    sbit  QEIM1_bit at QEICON.B3;
    const register unsigned short int QEIM2 = 4;
    sbit  QEIM2_bit at QEICON.B4;
    const register unsigned short int UP_DOWN = 5;
    sbit  UP_DOWN_bit at QEICON.B5;
    const register unsigned short int VELM = 7;
    sbit  VELM_bit at QEICON.B7;
    const register unsigned short int UP = 5;
    sbit  UP_bit at QEICON.B5;
    const register unsigned short int DOWN = 5;
    sbit  DOWN_bit at QEICON.B5;
    const register unsigned short int NOT_DOWN = 5;
    sbit  NOT_DOWN_bit at QEICON.B5;
    const register unsigned short int UPDOWN = 5;
    sbit  UPDOWN_bit at QEICON.B5;

    // T5CON bits
    const register unsigned short int TMR5ON = 0;
    sbit  TMR5ON_bit at T5CON.B0;
    const register unsigned short int TMR5CS = 1;
    sbit  TMR5CS_bit at T5CON.B1;
    const register unsigned short int NOT_T5SYNC = 2;
    sbit  NOT_T5SYNC_bit at T5CON.B2;
    const register unsigned short int T5MOD = 5;
    sbit  T5MOD_bit at T5CON.B5;
    const register unsigned short int NOT_RESEN = 6;
    sbit  NOT_RESEN_bit at T5CON.B6;
    const register unsigned short int T5SEN = 7;
    sbit  T5SEN_bit at T5CON.B7;
    const register unsigned short int T5SYNC = 2;
    sbit  T5SYNC_bit at T5CON.B2;
    const register unsigned short int T5PS0 = 3;
    sbit  T5PS0_bit at T5CON.B3;
    const register unsigned short int T5PS1 = 4;
    sbit  T5PS1_bit at T5CON.B4;
    const register unsigned short int RESEN = 6;
    sbit  RESEN_bit at T5CON.B6;

    // ANSEL0 bits
    const register unsigned short int ANS0 = 0;
    sbit  ANS0_bit at ANSEL0.B0;
    const register unsigned short int ANS1 = 1;
    sbit  ANS1_bit at ANSEL0.B1;
    const register unsigned short int ANS2 = 2;
    sbit  ANS2_bit at ANSEL0.B2;
    const register unsigned short int ANS3 = 3;
    sbit  ANS3_bit at ANSEL0.B3;
    const register unsigned short int ANS4 = 4;
    sbit  ANS4_bit at ANSEL0.B4;
    const register unsigned short int ANS5 = 5;
    sbit  ANS5_bit at ANSEL0.B5;
    const register unsigned short int ANS6 = 6;
    sbit  ANS6_bit at ANSEL0.B6;
    const register unsigned short int ANS7 = 7;
    sbit  ANS7_bit at ANSEL0.B7;

    // ANSEL1 bits
    const register unsigned short int ANS8 = 0;
    sbit  ANS8_bit at ANSEL1.B0;

    // CCP2CON bits
    const register unsigned short int CCP2M0 = 0;
    sbit  CCP2M0_bit at CCP2CON.B0;
    const register unsigned short int CCP2M1 = 1;
    sbit  CCP2M1_bit at CCP2CON.B1;
    const register unsigned short int CCP2M2 = 2;
    sbit  CCP2M2_bit at CCP2CON.B2;
    const register unsigned short int CCP2M3 = 3;
    sbit  CCP2M3_bit at CCP2CON.B3;
    const register unsigned short int CCP2Y = 4;
    sbit  CCP2Y_bit at CCP2CON.B4;
    const register unsigned short int CCP2X = 5;
    sbit  CCP2X_bit at CCP2CON.B5;
    const register unsigned short int DC2B0 = 4;
    sbit  DC2B0_bit at CCP2CON.B4;
    const register unsigned short int DC2B1 = 5;
    sbit  DC2B1_bit at CCP2CON.B5;

    // CCP1CON bits
    const register unsigned short int CCP1M0 = 0;
    sbit  CCP1M0_bit at CCP1CON.B0;
    const register unsigned short int CCP1M1 = 1;
    sbit  CCP1M1_bit at CCP1CON.B1;
    const register unsigned short int CCP1M2 = 2;
    sbit  CCP1M2_bit at CCP1CON.B2;
    const register unsigned short int CCP1M3 = 3;
    sbit  CCP1M3_bit at CCP1CON.B3;
    const register unsigned short int CCP1Y = 4;
    sbit  CCP1Y_bit at CCP1CON.B4;
    const register unsigned short int CCP1X = 5;
    sbit  CCP1X_bit at CCP1CON.B5;
    const register unsigned short int DC1B0 = 4;
    sbit  DC1B0_bit at CCP1CON.B4;
    const register unsigned short int DC1B1 = 5;
    sbit  DC1B1_bit at CCP1CON.B5;

    // ADCON2 bits
    const register unsigned short int ADFM = 7;
    sbit  ADFM_bit at ADCON2.B7;
    const register unsigned short int ADCS0 = 0;
    sbit  ADCS0_bit at ADCON2.B0;
    const register unsigned short int ADCS1 = 1;
    sbit  ADCS1_bit at ADCON2.B1;
    const register unsigned short int ADCS2 = 2;
    sbit  ADCS2_bit at ADCON2.B2;
    const register unsigned short int ACQT0 = 3;
    sbit  ACQT0_bit at ADCON2.B3;
    const register unsigned short int ACQT1 = 4;
    sbit  ACQT1_bit at ADCON2.B4;
    const register unsigned short int ACQT2 = 5;
    sbit  ACQT2_bit at ADCON2.B5;
    const register unsigned short int ACQT3 = 6;
    sbit  ACQT3_bit at ADCON2.B6;

    // ADCON1 bits
    const register unsigned short int BFOVFL = 2;
    sbit  BFOVFL_bit at ADCON1.B2;
    const register unsigned short int BFEMT = 3;
    sbit  BFEMT_bit at ADCON1.B3;
    const register unsigned short int FIFOEN = 4;
    sbit  FIFOEN_bit at ADCON1.B4;
    const register unsigned short int ADPNT0 = 0;
    sbit  ADPNT0_bit at ADCON1.B0;
    const register unsigned short int ADPNT1 = 1;
    sbit  ADPNT1_bit at ADCON1.B1;
    const register unsigned short int VCFG0 = 6;
    sbit  VCFG0_bit at ADCON1.B6;
    const register unsigned short int VCFG1 = 7;
    sbit  VCFG1_bit at ADCON1.B7;
    const register unsigned short int FFOVFL = 2;
    sbit  FFOVFL_bit at ADCON1.B2;

    // ADCON0 bits
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADCON0.B0;
    const register unsigned short int GO_NOT_DONE = 1;
    sbit  GO_NOT_DONE_bit at ADCON0.B1;
    const register unsigned short int ACSCH = 4;
    sbit  ACSCH_bit at ADCON0.B4;
    const register unsigned short int ACONV = 5;
    sbit  ACONV_bit at ADCON0.B5;
    const register unsigned short int GO_DONE = 1;
    sbit  GO_DONE_bit at ADCON0.B1;
    const register unsigned short int ACMOD0 = 2;
    sbit  ACMOD0_bit at ADCON0.B2;
    const register unsigned short int ACMOD1 = 3;
    sbit  ACMOD1_bit at ADCON0.B3;
    const register unsigned short int DONE = 1;
    sbit  DONE_bit at ADCON0.B1;
    const register unsigned short int GO = 1;
    sbit  GO_bit at ADCON0.B1;
    const register unsigned short int NOT_DONE = 1;
    sbit  NOT_DONE_bit at ADCON0.B1;
    const register unsigned short int GODONE = 1;
    sbit  GODONE_bit at ADCON0.B1;

    // SSPCON bits
    const register unsigned short int CKP = 4;
    sbit  CKP_bit at SSPCON.B4;
    const register unsigned short int SSPEN = 5;
    sbit  SSPEN_bit at SSPCON.B5;
    const register unsigned short int SSPOV = 6;
    sbit  SSPOV_bit at SSPCON.B6;
    const register unsigned short int WCOL = 7;
    sbit  WCOL_bit at SSPCON.B7;
    const register unsigned short int SSPM0 = 0;
    sbit  SSPM0_bit at SSPCON.B0;
    const register unsigned short int SSPM1 = 1;
    sbit  SSPM1_bit at SSPCON.B1;
    const register unsigned short int SSPM2 = 2;
    sbit  SSPM2_bit at SSPCON.B2;
    const register unsigned short int SSPM3 = 3;
    sbit  SSPM3_bit at SSPCON.B3;

    // SSPSTAT bits
    const register unsigned short int BF = 0;
    sbit  BF_bit at SSPSTAT.B0;
    const register unsigned short int UA = 1;
    sbit  UA_bit at SSPSTAT.B1;
    const register unsigned short int R_NOT_W = 2;
    sbit  R_NOT_W_bit at SSPSTAT.B2;
    const register unsigned short int S = 3;
    sbit  S_bit at SSPSTAT.B3;
    const register unsigned short int P = 4;
    sbit  P_bit at SSPSTAT.B4;
    const register unsigned short int D_NOT_A = 5;
    sbit  D_NOT_A_bit at SSPSTAT.B5;
    const register unsigned short int CKE = 6;
    sbit  CKE_bit at SSPSTAT.B6;
    const register unsigned short int SMP = 7;
    sbit  SMP_bit at SSPSTAT.B7;
    const register unsigned short int R_W = 2;
    sbit  R_W_bit at SSPSTAT.B2;
    const register unsigned short int D_A = 5;
    sbit  D_A_bit at SSPSTAT.B5;
    const register unsigned short int NOT_W = 2;
    sbit  NOT_W_bit at SSPSTAT.B2;
    const register unsigned short int NOT_A = 5;
    sbit  NOT_A_bit at SSPSTAT.B5;
    const register unsigned short int NOT_WRITE = 2;
    sbit  NOT_WRITE_bit at SSPSTAT.B2;
    const register unsigned short int NOT_ADDRESS = 5;
    sbit  NOT_ADDRESS_bit at SSPSTAT.B5;
    const register unsigned short int READ_WRITE = 2;
    sbit  READ_WRITE_bit at SSPSTAT.B2;
    const register unsigned short int DATA_ADDRESS = 5;
    sbit  DATA_ADDRESS_bit at SSPSTAT.B5;
    const register unsigned short int R = 2;
    sbit  R_bit at SSPSTAT.B2;
    const register unsigned short int D = 5;
    sbit  D_bit at SSPSTAT.B5;

    // T2CON bits
    const register unsigned short int TMR2ON = 2;
    sbit  TMR2ON_bit at T2CON.B2;
    const register unsigned short int T2CKPS0 = 0;
    sbit  T2CKPS0_bit at T2CON.B0;
    const register unsigned short int T2CKPS1 = 1;
    sbit  T2CKPS1_bit at T2CON.B1;
    const register unsigned short int T2OUTPS0 = 3;
    sbit  T2OUTPS0_bit at T2CON.B3;
    const register unsigned short int T2OUTPS1 = 4;
    sbit  T2OUTPS1_bit at T2CON.B4;
    const register unsigned short int T2OUTPS2 = 5;
    sbit  T2OUTPS2_bit at T2CON.B5;
    const register unsigned short int T2OUTPS3 = 6;
    sbit  T2OUTPS3_bit at T2CON.B6;
    const register unsigned short int TOUTPS0 = 3;
    sbit  TOUTPS0_bit at T2CON.B3;
    const register unsigned short int TOUTPS1 = 4;
    sbit  TOUTPS1_bit at T2CON.B4;
    const register unsigned short int TOUTPS2 = 5;
    sbit  TOUTPS2_bit at T2CON.B5;
    const register unsigned short int TOUTPS3 = 6;
    sbit  TOUTPS3_bit at T2CON.B6;

    // T1CON bits
    const register unsigned short int TMR1ON = 0;
    sbit  TMR1ON_bit at T1CON.B0;
    const register unsigned short int TMR1CS = 1;
    sbit  TMR1CS_bit at T1CON.B1;
    const register unsigned short int NOT_T1SYNC = 2;
    sbit  NOT_T1SYNC_bit at T1CON.B2;
    const register unsigned short int T1OSCEN = 3;
    sbit  T1OSCEN_bit at T1CON.B3;
    const register unsigned short int T1RUN = 6;
    sbit  T1RUN_bit at T1CON.B6;
    const register unsigned short int RD16 = 7;
    sbit  RD16_bit at T1CON.B7;
    const register unsigned short int T1SYNC = 2;
    sbit  T1SYNC_bit at T1CON.B2;
    const register unsigned short int T1CKPS0 = 4;
    sbit  T1CKPS0_bit at T1CON.B4;
    const register unsigned short int T1CKPS1 = 5;
    sbit  T1CKPS1_bit at T1CON.B5;
    const register unsigned short int T1INSYNC = 2;
    sbit  T1INSYNC_bit at T1CON.B2;

    // RCON bits
    const register unsigned short int NOT_BOR = 0;
    sbit  NOT_BOR_bit at RCON.B0;
    const register unsigned short int NOT_POR = 1;
    sbit  NOT_POR_bit at RCON.B1;
    const register unsigned short int NOT_PD = 2;
    sbit  NOT_PD_bit at RCON.B2;
    const register unsigned short int NOT_TO = 3;
    sbit  NOT_TO_bit at RCON.B3;
    const register unsigned short int NOT_RI = 4;
    sbit  NOT_RI_bit at RCON.B4;
    const register unsigned short int IPEN = 7;
    sbit  IPEN_bit at RCON.B7;
    const register unsigned short int BOR = 0;
    sbit  BOR_bit at RCON.B0;
    const register unsigned short int POR = 1;
    sbit  POR_bit at RCON.B1;
    const register unsigned short int PD = 2;
    sbit  PD_bit at RCON.B2;
    const register unsigned short int TO_ = 3;
    sbit  TO__bit at RCON.B3;
    const register unsigned short int RI = 4;
    sbit  RI_bit at RCON.B4;
    const register unsigned short int NOT_IPEN = 7;
    sbit  NOT_IPEN_bit at RCON.B7;

    // WDTCON bits
    const register unsigned short int SWDTEN = 0;
    sbit  SWDTEN_bit at WDTCON.B0;
    const register unsigned short int WDTW = 7;
    sbit  WDTW_bit at WDTCON.B7;

    // LVDCON bits
    const register unsigned short int LVDEN = 4;
    sbit  LVDEN_bit at LVDCON.B4;
    const register unsigned short int IRVST = 5;
    sbit  IRVST_bit at LVDCON.B5;
    const register unsigned short int LVDL0 = 0;
    sbit  LVDL0_bit at LVDCON.B0;
    const register unsigned short int LVDL1 = 1;
    sbit  LVDL1_bit at LVDCON.B1;
    const register unsigned short int LVDL2 = 2;
    sbit  LVDL2_bit at LVDCON.B2;
    const register unsigned short int LVDL3 = 3;
    sbit  LVDL3_bit at LVDCON.B3;
    const register unsigned short int IVRST = 5;
    sbit  IVRST_bit at LVDCON.B5;

    // OSCCON bits
    const register unsigned short int IOFS = 2;
    sbit  IOFS_bit at OSCCON.B2;
    const register unsigned short int OSTS = 3;
    sbit  OSTS_bit at OSCCON.B3;
    const register unsigned short int IDLEN = 7;
    sbit  IDLEN_bit at OSCCON.B7;
    const register unsigned short int SCS0 = 0;
    sbit  SCS0_bit at OSCCON.B0;
    const register unsigned short int SCS1 = 1;
    sbit  SCS1_bit at OSCCON.B1;
    const register unsigned short int IRCF0 = 4;
    sbit  IRCF0_bit at OSCCON.B4;
    const register unsigned short int IRCF1 = 5;
    sbit  IRCF1_bit at OSCCON.B5;
    const register unsigned short int IRCF2 = 6;
    sbit  IRCF2_bit at OSCCON.B6;
    const register unsigned short int FLTS = 2;
    sbit  FLTS_bit at OSCCON.B2;

    // T0CON bits
    const register unsigned short int PSA = 3;
    sbit  PSA_bit at T0CON.B3;
    const register unsigned short int T0SE = 4;
    sbit  T0SE_bit at T0CON.B4;
    const register unsigned short int T0CS = 5;
    sbit  T0CS_bit at T0CON.B5;
    const register unsigned short int T016BIT = 6;
    sbit  T016BIT_bit at T0CON.B6;
    const register unsigned short int TMR0ON = 7;
    sbit  TMR0ON_bit at T0CON.B7;
    const register unsigned short int T0PS0 = 0;
    sbit  T0PS0_bit at T0CON.B0;
    const register unsigned short int T0PS1 = 1;
    sbit  T0PS1_bit at T0CON.B1;
    const register unsigned short int T0PS2 = 2;
    sbit  T0PS2_bit at T0CON.B2;
    const register unsigned short int T0PS3 = 3;
    sbit  T0PS3_bit at T0CON.B3;

    // STATUS bits
    const register unsigned short int C = 0;
    sbit  C_bit at STATUS.B0;
    const register unsigned short int DC = 1;
    sbit  DC_bit at STATUS.B1;
    const register unsigned short int Z = 2;
    sbit  Z_bit at STATUS.B2;
    const register unsigned short int OV = 3;
    sbit  OV_bit at STATUS.B3;
    const register unsigned short int N = 4;
    sbit  N_bit at STATUS.B4;

    // INTCON3 bits
    const register unsigned short int INT1IF = 0;
    sbit  INT1IF_bit at INTCON3.B0;
    const register unsigned short int INT2IF = 1;
    sbit  INT2IF_bit at INTCON3.B1;
    const register unsigned short int INT1IE = 3;
    sbit  INT1IE_bit at INTCON3.B3;
    const register unsigned short int INT2IE = 4;
    sbit  INT2IE_bit at INTCON3.B4;
    const register unsigned short int INT1IP = 6;
    sbit  INT1IP_bit at INTCON3.B6;
    const register unsigned short int INT2IP = 7;
    sbit  INT2IP_bit at INTCON3.B7;
    const register unsigned short int INT1F = 0;
    sbit  INT1F_bit at INTCON3.B0;
    const register unsigned short int INT2F = 1;
    sbit  INT2F_bit at INTCON3.B1;
    const register unsigned short int INT1E = 3;
    sbit  INT1E_bit at INTCON3.B3;
    const register unsigned short int INT2E = 4;
    sbit  INT2E_bit at INTCON3.B4;
    const register unsigned short int INT1P = 6;
    sbit  INT1P_bit at INTCON3.B6;
    const register unsigned short int INT2P = 7;
    sbit  INT2P_bit at INTCON3.B7;

    // INTCON2 bits
    const register unsigned short int RBIP = 0;
    sbit  RBIP_bit at INTCON2.B0;
    const register unsigned short int TMR0IP = 2;
    sbit  TMR0IP_bit at INTCON2.B2;
    const register unsigned short int INTEDG2 = 4;
    sbit  INTEDG2_bit at INTCON2.B4;
    const register unsigned short int INTEDG1 = 5;
    sbit  INTEDG1_bit at INTCON2.B5;
    const register unsigned short int INTEDG0 = 6;
    sbit  INTEDG0_bit at INTCON2.B6;
    const register unsigned short int NOT_RBPU = 7;
    sbit  NOT_RBPU_bit at INTCON2.B7;
    const register unsigned short int T0IP = 2;
    sbit  T0IP_bit at INTCON2.B2;
    const register unsigned short int RBPU = 7;
    sbit  RBPU_bit at INTCON2.B7;

    // INTCON bits
    const register unsigned short int RBIF = 0;
    sbit  RBIF_bit at INTCON.B0;
    const register unsigned short int INT0IF = 1;
    sbit  INT0IF_bit at INTCON.B1;
    const register unsigned short int TMR0IF = 2;
    sbit  TMR0IF_bit at INTCON.B2;
    const register unsigned short int RBIE = 3;
    sbit  RBIE_bit at INTCON.B3;
    const register unsigned short int INT0IE = 4;
    sbit  INT0IE_bit at INTCON.B4;
    const register unsigned short int TMR0IE = 5;
    sbit  TMR0IE_bit at INTCON.B5;
    const register unsigned short int PEIE_GIEL = 6;
    sbit  PEIE_GIEL_bit at INTCON.B6;
    const register unsigned short int GIE_GIEH = 7;
    sbit  GIE_GIEH_bit at INTCON.B7;
    const register unsigned short int INT0F = 1;
    sbit  INT0F_bit at INTCON.B1;
    const register unsigned short int T0IF = 2;
    sbit  T0IF_bit at INTCON.B2;
    const register unsigned short int INT0E = 4;
    sbit  INT0E_bit at INTCON.B4;
    const register unsigned short int T0IE = 5;
    sbit  T0IE_bit at INTCON.B5;
    const register unsigned short int PEIE = 6;
    sbit  PEIE_bit at INTCON.B6;
    const register unsigned short int GIE = 7;
    sbit  GIE_bit at INTCON.B7;
    const register unsigned short int GIEL = 6;
    sbit  GIEL_bit at INTCON.B6;
    const register unsigned short int GIEH = 7;
    sbit  GIEH_bit at INTCON.B7;

    // STKPTR bits
    const register unsigned short int STKUNF = 6;
    sbit  STKUNF_bit at STKPTR.B6;
    const register unsigned short int STKFUL = 7;
    sbit  STKFUL_bit at STKPTR.B7;
    const register unsigned short int STKPTR0 = 0;
    sbit  STKPTR0_bit at STKPTR.B0;
    const register unsigned short int STKPTR1 = 1;
    sbit  STKPTR1_bit at STKPTR.B1;
    const register unsigned short int STKPTR2 = 2;
    sbit  STKPTR2_bit at STKPTR.B2;
    const register unsigned short int STKPTR3 = 3;
    sbit  STKPTR3_bit at STKPTR.B3;
    const register unsigned short int STKPTR4 = 4;
    sbit  STKPTR4_bit at STKPTR.B4;
    const register unsigned short int STKOVF = 7;
    sbit  STKOVF_bit at STKPTR.B7;

    // PORTA bits
    const register unsigned short int RA7 = 7;
    sbit  RA7_bit at PORTA.B7;
    const register unsigned short int RA6 = 6;
    sbit  RA6_bit at PORTA.B6;
    const register unsigned short int RA5 = 5;
    sbit  RA5_bit at PORTA.B5;
    const register unsigned short int RA4 = 4;
    sbit  RA4_bit at PORTA.B4;
    const register unsigned short int RA3 = 3;
    sbit  RA3_bit at PORTA.B3;
    const register unsigned short int RA2 = 2;
    sbit  RA2_bit at PORTA.B2;
    const register unsigned short int RA1 = 1;
    sbit  RA1_bit at PORTA.B1;
    const register unsigned short int RA0 = 0;
    sbit  RA0_bit at PORTA.B0;

    // PORTB bits
    const register unsigned short int RB7 = 7;
    sbit  RB7_bit at PORTB.B7;
    const register unsigned short int RB6 = 6;
    sbit  RB6_bit at PORTB.B6;
    const register unsigned short int RB5 = 5;
    sbit  RB5_bit at PORTB.B5;
    const register unsigned short int RB4 = 4;
    sbit  RB4_bit at PORTB.B4;
    const register unsigned short int RB3 = 3;
    sbit  RB3_bit at PORTB.B3;
    const register unsigned short int RB2 = 2;
    sbit  RB2_bit at PORTB.B2;
    const register unsigned short int RB1 = 1;
    sbit  RB1_bit at PORTB.B1;
    const register unsigned short int RB0 = 0;
    sbit  RB0_bit at PORTB.B0;

    // PORTC bits
    const register unsigned short int RC7 = 7;
    sbit  RC7_bit at PORTC.B7;
    const register unsigned short int RC6 = 6;
    sbit  RC6_bit at PORTC.B6;
    const register unsigned short int RC5 = 5;
    sbit  RC5_bit at PORTC.B5;
    const register unsigned short int RC4 = 4;
    sbit  RC4_bit at PORTC.B4;
    const register unsigned short int RC3 = 3;
    sbit  RC3_bit at PORTC.B3;
    const register unsigned short int RC2 = 2;
    sbit  RC2_bit at PORTC.B2;
    const register unsigned short int RC1 = 1;
    sbit  RC1_bit at PORTC.B1;
    const register unsigned short int RC0 = 0;
    sbit  RC0_bit at PORTC.B0;

    // PORTD bits
    const register unsigned short int RD7 = 7;
    sbit  RD7_bit at PORTD.B7;
    const register unsigned short int RD6 = 6;
    sbit  RD6_bit at PORTD.B6;
    const register unsigned short int RD5 = 5;
    sbit  RD5_bit at PORTD.B5;
    const register unsigned short int RD4 = 4;
    sbit  RD4_bit at PORTD.B4;
    const register unsigned short int RD3 = 3;
    sbit  RD3_bit at PORTD.B3;
    const register unsigned short int RD2 = 2;
    sbit  RD2_bit at PORTD.B2;
    const register unsigned short int RD1 = 1;
    sbit  RD1_bit at PORTD.B1;
    const register unsigned short int RD0 = 0;
    sbit  RD0_bit at PORTD.B0;

    // PORTE bits
    const register unsigned short int RE3 = 3;
    sbit  RE3_bit at PORTE.B3;
    const register unsigned short int RE2 = 2;
    sbit  RE2_bit at PORTE.B2;
    const register unsigned short int RE1 = 1;
    sbit  RE1_bit at PORTE.B1;
    const register unsigned short int RE0 = 0;
    sbit  RE0_bit at PORTE.B0;

    // TRISA bits
    const register unsigned short int TRISA7 = 7;
    sbit  TRISA7_bit at TRISA.B7;
    const register unsigned short int TRISA6 = 6;
    sbit  TRISA6_bit at TRISA.B6;
    const register unsigned short int TRISA5 = 5;
    sbit  TRISA5_bit at TRISA.B5;
    const register unsigned short int TRISA4 = 4;
    sbit  TRISA4_bit at TRISA.B4;
    const register unsigned short int TRISA3 = 3;
    sbit  TRISA3_bit at TRISA.B3;
    const register unsigned short int TRISA2 = 2;
    sbit  TRISA2_bit at TRISA.B2;
    const register unsigned short int TRISA1 = 1;
    sbit  TRISA1_bit at TRISA.B1;
    const register unsigned short int TRISA0 = 0;
    sbit  TRISA0_bit at TRISA.B0;

    // TRISB bits
    const register unsigned short int TRISB7 = 7;
    sbit  TRISB7_bit at TRISB.B7;
    const register unsigned short int TRISB6 = 6;
    sbit  TRISB6_bit at TRISB.B6;
    const register unsigned short int TRISB5 = 5;
    sbit  TRISB5_bit at TRISB.B5;
    const register unsigned short int TRISB4 = 4;
    sbit  TRISB4_bit at TRISB.B4;
    const register unsigned short int TRISB3 = 3;
    sbit  TRISB3_bit at TRISB.B3;
    const register unsigned short int TRISB2 = 2;
    sbit  TRISB2_bit at TRISB.B2;
    const register unsigned short int TRISB1 = 1;
    sbit  TRISB1_bit at TRISB.B1;
    const register unsigned short int TRISB0 = 0;
    sbit  TRISB0_bit at TRISB.B0;

    // TRISC bits
    const register unsigned short int TRISC7 = 7;
    sbit  TRISC7_bit at TRISC.B7;
    const register unsigned short int TRISC6 = 6;
    sbit  TRISC6_bit at TRISC.B6;
    const register unsigned short int TRISC5 = 5;
    sbit  TRISC5_bit at TRISC.B5;
    const register unsigned short int TRISC4 = 4;
    sbit  TRISC4_bit at TRISC.B4;
    const register unsigned short int TRISC3 = 3;
    sbit  TRISC3_bit at TRISC.B3;
    const register unsigned short int TRISC2 = 2;
    sbit  TRISC2_bit at TRISC.B2;
    const register unsigned short int TRISC1 = 1;
    sbit  TRISC1_bit at TRISC.B1;
    const register unsigned short int TRISC0 = 0;
    sbit  TRISC0_bit at TRISC.B0;

    // TRISD bits
    const register unsigned short int TRISD7 = 7;
    sbit  TRISD7_bit at TRISD.B7;
    const register unsigned short int TRISD6 = 6;
    sbit  TRISD6_bit at TRISD.B6;
    const register unsigned short int TRISD5 = 5;
    sbit  TRISD5_bit at TRISD.B5;
    const register unsigned short int TRISD4 = 4;
    sbit  TRISD4_bit at TRISD.B4;
    const register unsigned short int TRISD3 = 3;
    sbit  TRISD3_bit at TRISD.B3;
    const register unsigned short int TRISD2 = 2;
    sbit  TRISD2_bit at TRISD.B2;
    const register unsigned short int TRISD1 = 1;
    sbit  TRISD1_bit at TRISD.B1;
    const register unsigned short int TRISD0 = 0;
    sbit  TRISD0_bit at TRISD.B0;

    // TRISE bits
    const register unsigned short int TRISE2 = 2;
    sbit  TRISE2_bit at TRISE.B2;
    const register unsigned short int TRISE1 = 1;
    sbit  TRISE1_bit at TRISE.B1;
    const register unsigned short int TRISE0 = 0;
    sbit  TRISE0_bit at TRISE.B0;

    // TBLPTRU bits
    const register unsigned short int ACSS = 5;
    sbit  ACSS_bit at TBLPTRU.B5;
    const register unsigned short int TBLPTRU4 = 4;
    sbit  TBLPTRU4_bit at TBLPTRU.B4;
    const register unsigned short int TBLPTRU3 = 3;
    sbit  TBLPTRU3_bit at TBLPTRU.B3;
    const register unsigned short int TBLPTRU2 = 2;
    sbit  TBLPTRU2_bit at TBLPTRU.B2;
    const register unsigned short int TBLPTRU1 = 1;
    sbit  TBLPTRU1_bit at TBLPTRU.B1;
    const register unsigned short int TBLPTRU0 = 0;
    sbit  TBLPTRU0_bit at TBLPTRU.B0;

    // PCLATU bits
    const register unsigned short int PCU4 = 4;
    sbit  PCU4_bit at PCLATU.B4;
    const register unsigned short int PCU3 = 3;
    sbit  PCU3_bit at PCLATU.B3;
    const register unsigned short int PCU2 = 2;
    sbit  PCU2_bit at PCLATU.B2;
    const register unsigned short int PCU1 = 1;
    sbit  PCU1_bit at PCLATU.B1;
    const register unsigned short int PCU0 = 0;
    sbit  PCU0_bit at PCLATU.B0;
