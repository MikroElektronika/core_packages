// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00010000;

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

sfr unsigned short volatile ECCP2DEL         absolute 0x0F67;
sfr unsigned short          PWM2CON          absolute 0x0F67;
sfr unsigned short volatile ECCP2AS          absolute 0x0F68;
sfr unsigned short volatile ECCP3DEL         absolute 0x0F69;
sfr unsigned short          PWM3CON          absolute 0x0F69;
sfr unsigned short volatile ECCP3AS          absolute 0x0F6A;
sfr unsigned short volatile RCSTA2           absolute 0x0F6B;
sfr unsigned short volatile TXSTA2           absolute 0x0F6C;
sfr unsigned short volatile TXREG2           absolute 0x0F6D;
sfr unsigned short volatile RCREG2           absolute 0x0F6E;
sfr unsigned short          SPBRG2           absolute 0x0F6F;
sfr unsigned short volatile CCP5CON          absolute 0x0F70;
sfr unsigned short volatile CCP4CON          absolute 0x0F73;
sfr unsigned short volatile T4CON            absolute 0x0F76;
sfr unsigned short volatile PR4              absolute 0x0F77;
sfr unsigned short volatile TMR4             absolute 0x0F78;
sfr unsigned short volatile ECCP1DEL         absolute 0x0F79;
sfr unsigned short          PWM1CON          absolute 0x0F79;
sfr unsigned short          BAUDCON2         absolute 0x0F7C;
sfr unsigned short          BAUDCTL2         absolute 0x0F7C;
sfr unsigned short          SPBRGH2          absolute 0x0F7D;
sfr unsigned short          BAUDCON          absolute 0x0F7E;
sfr unsigned short          BAUDCON1         absolute 0x0F7E;
sfr unsigned short          BAUDCTL1         absolute 0x0F7E;
sfr unsigned short          SPBRGH           absolute 0x0F7F;
sfr unsigned short          SPBRGH1          absolute 0x0F7F;
sfr unsigned short volatile LATA             absolute 0x0F89;
sfr unsigned short volatile LATB             absolute 0x0F8A;
sfr unsigned short volatile LATC             absolute 0x0F8B;
sfr unsigned short volatile LATD             absolute 0x0F8C;
sfr unsigned short volatile LATE             absolute 0x0F8D;
sfr unsigned short volatile LATF             absolute 0x0F8E;
sfr unsigned short volatile LATG             absolute 0x0F8F;
sfr unsigned short volatile LATH             absolute 0x0F90;
sfr unsigned short volatile LATJ             absolute 0x0F91;
sfr unsigned short volatile MEMCON           absolute 0x0F9C;
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
sfr unsigned short volatile EEADRH           absolute 0x0FAA;
sfr unsigned short volatile RCSTA            absolute 0x0FAB;
sfr unsigned short volatile RCSTA1           absolute 0x0FAB;
sfr unsigned short volatile TXSTA            absolute 0x0FAC;
sfr unsigned short volatile TXSTA1           absolute 0x0FAC;
sfr unsigned short volatile TXREG            absolute 0x0FAD;
sfr unsigned short volatile TXREG1           absolute 0x0FAD;
sfr unsigned short volatile RCREG            absolute 0x0FAE;
sfr unsigned short volatile RCREG1           absolute 0x0FAE;
sfr unsigned short          SPBRG            absolute 0x0FAF;
sfr unsigned short          SPBRG1           absolute 0x0FAF;
sfr unsigned short volatile PSPCON           absolute 0x0FB0;
sfr unsigned short volatile T3CON            absolute 0x0FB1;
sfr unsigned short volatile TMR3L            absolute 0x0FB2;
sfr unsigned short volatile TMR3H            absolute 0x0FB3;
sfr unsigned short volatile CMCON            absolute 0x0FB4;
sfr unsigned short volatile CVRCON           absolute 0x0FB5;
sfr unsigned short volatile ECCP1AS          absolute 0x0FB6;
sfr unsigned short volatile CCP3CON          absolute 0x0FB7;
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
sfr unsigned short volatile SSPCON2          absolute 0x0FC5;
sfr unsigned short volatile SSPCON1          absolute 0x0FC6;
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
sfr unsigned int   volatile CCPR5            absolute 0x0F71;
sfr unsigned short volatile CCPR5L           absolute 0x0F71;
sfr unsigned short volatile CCPR5H           absolute 0x0F72;
sfr unsigned int   volatile CCPR4            absolute 0x0F74;
sfr unsigned short volatile CCPR4L           absolute 0x0F74;
sfr unsigned short volatile CCPR4H           absolute 0x0F75;
sfr unsigned short volatile PORTA            absolute 0x0F80;
sfr unsigned short volatile PORTB            absolute 0x0F81;
sfr unsigned short volatile PORTC            absolute 0x0F82;
sfr unsigned short volatile PORTD            absolute 0x0F83;
sfr unsigned short volatile PORTE            absolute 0x0F84;
sfr unsigned short volatile PORTF            absolute 0x0F85;
sfr unsigned short volatile PORTG            absolute 0x0F86;
sfr unsigned short volatile PORTH            absolute 0x0F87;
sfr unsigned short volatile PORTJ            absolute 0x0F88;
sfr unsigned short volatile TRISA            absolute 0x0F92;
sfr unsigned short volatile TRISB            absolute 0x0F93;
sfr unsigned short volatile TRISC            absolute 0x0F94;
sfr unsigned short volatile TRISD            absolute 0x0F95;
sfr unsigned short volatile TRISE            absolute 0x0F96;
sfr unsigned short volatile TRISF            absolute 0x0F97;
sfr unsigned short volatile TRISG            absolute 0x0F98;
sfr unsigned short volatile TRISH            absolute 0x0F99;
sfr unsigned short volatile TRISJ            absolute 0x0F9A;
sfr unsigned int   volatile CCPR3            absolute 0x0FB8;
sfr unsigned short volatile CCPR3L           absolute 0x0FB8;
sfr unsigned short volatile CCPR3H           absolute 0x0FB9;
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

    // ECCP2DEL, PWM2CON bits
    const register unsigned short int P2RSEN = 7;
    sbit  P2RSEN_bit at ECCP2DEL.B7;
    const register unsigned short int P2DC0 = 0;
    sbit  P2DC0_bit at ECCP2DEL.B0;
    const register unsigned short int P2DC1 = 1;
    sbit  P2DC1_bit at ECCP2DEL.B1;
    const register unsigned short int P2DC2 = 2;
    sbit  P2DC2_bit at ECCP2DEL.B2;
    const register unsigned short int P2DC3 = 3;
    sbit  P2DC3_bit at ECCP2DEL.B3;
    const register unsigned short int P2DC4 = 4;
    sbit  P2DC4_bit at ECCP2DEL.B4;
    const register unsigned short int P2DC5 = 5;
    sbit  P2DC5_bit at ECCP2DEL.B5;
    const register unsigned short int P2DC6 = 6;
    sbit  P2DC6_bit at ECCP2DEL.B6;
    const register unsigned short int PDC0 = 0;
    sbit  PDC0_bit at ECCP2DEL.B0;
    const register unsigned short int PDC1 = 1;
    sbit  PDC1_bit at ECCP2DEL.B1;
    const register unsigned short int PDC2 = 2;
    sbit  PDC2_bit at ECCP2DEL.B2;
    const register unsigned short int PDC3 = 3;
    sbit  PDC3_bit at ECCP2DEL.B3;
    const register unsigned short int PDC4 = 4;
    sbit  PDC4_bit at ECCP2DEL.B4;
    const register unsigned short int PDC5 = 5;
    sbit  PDC5_bit at ECCP2DEL.B5;
    const register unsigned short int PDC6 = 6;
    sbit  PDC6_bit at ECCP2DEL.B6;
    const register unsigned short int PRSEN = 7;
    sbit  PRSEN_bit at ECCP2DEL.B7;

    // ECCP2AS bits
    const register unsigned short int ECCP2ASE = 7;
    sbit  ECCP2ASE_bit at ECCP2AS.B7;
    const register unsigned short int PSS2BD0 = 0;
    sbit  PSS2BD0_bit at ECCP2AS.B0;
    const register unsigned short int PSS2BD1 = 1;
    sbit  PSS2BD1_bit at ECCP2AS.B1;
    const register unsigned short int PSS2AC0 = 2;
    sbit  PSS2AC0_bit at ECCP2AS.B2;
    const register unsigned short int PSS2AC1 = 3;
    sbit  PSS2AC1_bit at ECCP2AS.B3;
    const register unsigned short int ECCP2AS0 = 4;
    sbit  ECCP2AS0_bit at ECCP2AS.B4;
    const register unsigned short int ECCP2AS1 = 5;
    sbit  ECCP2AS1_bit at ECCP2AS.B5;
    const register unsigned short int ECCP2AS2 = 6;
    sbit  ECCP2AS2_bit at ECCP2AS.B6;
    const register unsigned short int PSSBD0 = 0;
    sbit  PSSBD0_bit at ECCP2AS.B0;
    const register unsigned short int PSSBD1 = 1;
    sbit  PSSBD1_bit at ECCP2AS.B1;
    const register unsigned short int PSSAC0 = 2;
    sbit  PSSAC0_bit at ECCP2AS.B2;
    const register unsigned short int PSSAC1 = 3;
    sbit  PSSAC1_bit at ECCP2AS.B3;

    // ECCP3DEL, PWM3CON bits
    const register unsigned short int P3RSEN = 7;
    sbit  P3RSEN_bit at ECCP3DEL.B7;
    const register unsigned short int P3DC0 = 0;
    sbit  P3DC0_bit at ECCP3DEL.B0;
    const register unsigned short int P3DC1 = 1;
    sbit  P3DC1_bit at ECCP3DEL.B1;
    const register unsigned short int P3DC2 = 2;
    sbit  P3DC2_bit at ECCP3DEL.B2;
    const register unsigned short int P3DC3 = 3;
    sbit  P3DC3_bit at ECCP3DEL.B3;
    const register unsigned short int P3DC4 = 4;
    sbit  P3DC4_bit at ECCP3DEL.B4;
    const register unsigned short int P3DC5 = 5;
    sbit  P3DC5_bit at ECCP3DEL.B5;
    const register unsigned short int P3DC6 = 6;
    sbit  P3DC6_bit at ECCP3DEL.B6;
    sbit  PDC0_ECCP3DEL_bit at ECCP3DEL.B0;
    sbit  PDC1_ECCP3DEL_bit at ECCP3DEL.B1;
    sbit  PDC2_ECCP3DEL_bit at ECCP3DEL.B2;
    sbit  PDC3_ECCP3DEL_bit at ECCP3DEL.B3;
    sbit  PDC4_ECCP3DEL_bit at ECCP3DEL.B4;
    sbit  PDC5_ECCP3DEL_bit at ECCP3DEL.B5;
    sbit  PDC6_ECCP3DEL_bit at ECCP3DEL.B6;
    sbit  PRSEN_ECCP3DEL_bit at ECCP3DEL.B7;

    // ECCP3AS bits
    const register unsigned short int ECCP3ASE = 7;
    sbit  ECCP3ASE_bit at ECCP3AS.B7;
    const register unsigned short int PSS3BD0 = 0;
    sbit  PSS3BD0_bit at ECCP3AS.B0;
    const register unsigned short int PSS3BD1 = 1;
    sbit  PSS3BD1_bit at ECCP3AS.B1;
    const register unsigned short int PSS3AC0 = 2;
    sbit  PSS3AC0_bit at ECCP3AS.B2;
    const register unsigned short int PSS3AC1 = 3;
    sbit  PSS3AC1_bit at ECCP3AS.B3;
    const register unsigned short int ECCP3AS0 = 4;
    sbit  ECCP3AS0_bit at ECCP3AS.B4;
    const register unsigned short int ECCP3AS1 = 5;
    sbit  ECCP3AS1_bit at ECCP3AS.B5;
    const register unsigned short int ECCP3AS2 = 6;
    sbit  ECCP3AS2_bit at ECCP3AS.B6;
    sbit  PSSBD0_ECCP3AS_bit at ECCP3AS.B0;
    sbit  PSSBD1_ECCP3AS_bit at ECCP3AS.B1;
    sbit  PSSAC0_ECCP3AS_bit at ECCP3AS.B2;
    sbit  PSSAC1_ECCP3AS_bit at ECCP3AS.B3;

    // RCSTA2 bits
    const register unsigned short int RX9D = 0;
    sbit  RX9D_bit at RCSTA2.B0;
    const register unsigned short int OERR = 1;
    sbit  OERR_bit at RCSTA2.B1;
    const register unsigned short int FERR = 2;
    sbit  FERR_bit at RCSTA2.B2;
    const register unsigned short int ADDEN = 3;
    sbit  ADDEN_bit at RCSTA2.B3;
    const register unsigned short int CREN = 4;
    sbit  CREN_bit at RCSTA2.B4;
    const register unsigned short int SREN = 5;
    sbit  SREN_bit at RCSTA2.B5;
    const register unsigned short int RX9 = 6;
    sbit  RX9_bit at RCSTA2.B6;
    const register unsigned short int SPEN = 7;
    sbit  SPEN_bit at RCSTA2.B7;
    const register unsigned short int ADEN = 3;
    sbit  ADEN_bit at RCSTA2.B3;
    const register unsigned short int RX9D2 = 0;
    sbit  RX9D2_bit at RCSTA2.B0;
    const register unsigned short int OERR2 = 1;
    sbit  OERR2_bit at RCSTA2.B1;
    const register unsigned short int FERR2 = 2;
    sbit  FERR2_bit at RCSTA2.B2;
    const register unsigned short int ADDEN2 = 3;
    sbit  ADDEN2_bit at RCSTA2.B3;
    const register unsigned short int CREN2 = 4;
    sbit  CREN2_bit at RCSTA2.B4;
    const register unsigned short int SREN2 = 5;
    sbit  SREN2_bit at RCSTA2.B5;
    const register unsigned short int RX92 = 6;
    sbit  RX92_bit at RCSTA2.B6;
    const register unsigned short int SPEN2 = 7;
    sbit  SPEN2_bit at RCSTA2.B7;
    const register unsigned short int ADEN2 = 3;
    sbit  ADEN2_bit at RCSTA2.B3;

    // TXSTA2 bits
    const register unsigned short int TX9D = 0;
    sbit  TX9D_bit at TXSTA2.B0;
    const register unsigned short int TRMT = 1;
    sbit  TRMT_bit at TXSTA2.B1;
    const register unsigned short int BRGH = 2;
    sbit  BRGH_bit at TXSTA2.B2;
    const register unsigned short int SENDB = 3;
    sbit  SENDB_bit at TXSTA2.B3;
    const register unsigned short int SYNC = 4;
    sbit  SYNC_bit at TXSTA2.B4;
    const register unsigned short int TXEN = 5;
    sbit  TXEN_bit at TXSTA2.B5;
    const register unsigned short int TX9 = 6;
    sbit  TX9_bit at TXSTA2.B6;
    const register unsigned short int CSRC = 7;
    sbit  CSRC_bit at TXSTA2.B7;
    const register unsigned short int TX9D2 = 0;
    sbit  TX9D2_bit at TXSTA2.B0;
    const register unsigned short int TRMT2 = 1;
    sbit  TRMT2_bit at TXSTA2.B1;
    const register unsigned short int BRGH2 = 2;
    sbit  BRGH2_bit at TXSTA2.B2;
    const register unsigned short int SENDB2 = 3;
    sbit  SENDB2_bit at TXSTA2.B3;
    const register unsigned short int SYNC2 = 4;
    sbit  SYNC2_bit at TXSTA2.B4;
    const register unsigned short int TXEN2 = 5;
    sbit  TXEN2_bit at TXSTA2.B5;
    const register unsigned short int TX92 = 6;
    sbit  TX92_bit at TXSTA2.B6;
    const register unsigned short int CSRC2 = 7;
    sbit  CSRC2_bit at TXSTA2.B7;

    // CCP5CON bits
    const register unsigned short int CCP5M0 = 0;
    sbit  CCP5M0_bit at CCP5CON.B0;
    const register unsigned short int CCP5M1 = 1;
    sbit  CCP5M1_bit at CCP5CON.B1;
    const register unsigned short int CCP5M2 = 2;
    sbit  CCP5M2_bit at CCP5CON.B2;
    const register unsigned short int CCP5M3 = 3;
    sbit  CCP5M3_bit at CCP5CON.B3;
    const register unsigned short int CCP5Y = 4;
    sbit  CCP5Y_bit at CCP5CON.B4;
    const register unsigned short int CCP5X = 5;
    sbit  CCP5X_bit at CCP5CON.B5;
    const register unsigned short int DC5B0 = 4;
    sbit  DC5B0_bit at CCP5CON.B4;
    const register unsigned short int DC5B1 = 5;
    sbit  DC5B1_bit at CCP5CON.B5;

    // CCP4CON bits
    const register unsigned short int CCP4M0 = 0;
    sbit  CCP4M0_bit at CCP4CON.B0;
    const register unsigned short int CCP4M1 = 1;
    sbit  CCP4M1_bit at CCP4CON.B1;
    const register unsigned short int CCP4M2 = 2;
    sbit  CCP4M2_bit at CCP4CON.B2;
    const register unsigned short int CCP4M3 = 3;
    sbit  CCP4M3_bit at CCP4CON.B3;
    const register unsigned short int CCP4Y = 4;
    sbit  CCP4Y_bit at CCP4CON.B4;
    const register unsigned short int CCP4X = 5;
    sbit  CCP4X_bit at CCP4CON.B5;
    const register unsigned short int DC4B0 = 4;
    sbit  DC4B0_bit at CCP4CON.B4;
    const register unsigned short int DC4B1 = 5;
    sbit  DC4B1_bit at CCP4CON.B5;

    // T4CON bits
    const register unsigned short int TMR4ON = 2;
    sbit  TMR4ON_bit at T4CON.B2;
    const register unsigned short int T4CKPS0 = 0;
    sbit  T4CKPS0_bit at T4CON.B0;
    const register unsigned short int T4CKPS1 = 1;
    sbit  T4CKPS1_bit at T4CON.B1;
    const register unsigned short int TOUTPS0 = 3;
    sbit  TOUTPS0_bit at T4CON.B3;
    const register unsigned short int TOUTPS1 = 4;
    sbit  TOUTPS1_bit at T4CON.B4;
    const register unsigned short int TOUTPS2 = 5;
    sbit  TOUTPS2_bit at T4CON.B5;
    const register unsigned short int TOUTPS3 = 6;
    sbit  TOUTPS3_bit at T4CON.B6;
    const register unsigned short int T4OUTPS0 = 3;
    sbit  T4OUTPS0_bit at T4CON.B3;
    const register unsigned short int T4OUTPS1 = 4;
    sbit  T4OUTPS1_bit at T4CON.B4;
    const register unsigned short int T4OUTPS2 = 5;
    sbit  T4OUTPS2_bit at T4CON.B5;
    const register unsigned short int T4OUTPS3 = 6;
    sbit  T4OUTPS3_bit at T4CON.B6;

    // ECCP1DEL, PWM1CON bits
    const register unsigned short int P1RSEN = 7;
    sbit  P1RSEN_bit at ECCP1DEL.B7;
    const register unsigned short int P1DC0 = 0;
    sbit  P1DC0_bit at ECCP1DEL.B0;
    const register unsigned short int P1DC1 = 1;
    sbit  P1DC1_bit at ECCP1DEL.B1;
    const register unsigned short int P1DC2 = 2;
    sbit  P1DC2_bit at ECCP1DEL.B2;
    const register unsigned short int P1DC3 = 3;
    sbit  P1DC3_bit at ECCP1DEL.B3;
    const register unsigned short int P1DC4 = 4;
    sbit  P1DC4_bit at ECCP1DEL.B4;
    const register unsigned short int P1DC5 = 5;
    sbit  P1DC5_bit at ECCP1DEL.B5;
    const register unsigned short int P1DC6 = 6;
    sbit  P1DC6_bit at ECCP1DEL.B6;
    const register unsigned short int P1DC7 = 7;
    sbit  P1DC7_bit at ECCP1DEL.B7;
    sbit  PDC0_ECCP1DEL_bit at ECCP1DEL.B0;
    sbit  PDC1_ECCP1DEL_bit at ECCP1DEL.B1;
    sbit  PDC2_ECCP1DEL_bit at ECCP1DEL.B2;
    sbit  PDC3_ECCP1DEL_bit at ECCP1DEL.B3;
    sbit  PDC4_ECCP1DEL_bit at ECCP1DEL.B4;
    sbit  PDC5_ECCP1DEL_bit at ECCP1DEL.B5;
    sbit  PDC6_ECCP1DEL_bit at ECCP1DEL.B6;
    sbit  PRSEN_ECCP1DEL_bit at ECCP1DEL.B7;

    // BAUDCON2, BAUDCTL2 bits
    const register unsigned short int ABDEN = 0;
    sbit  ABDEN_bit at BAUDCON2.B0;
    const register unsigned short int WUE = 1;
    sbit  WUE_bit at BAUDCON2.B1;
    const register unsigned short int BRG16 = 3;
    sbit  BRG16_bit at BAUDCON2.B3;
    const register unsigned short int SCKP = 4;
    sbit  SCKP_bit at BAUDCON2.B4;
    const register unsigned short int RCIDL = 6;
    sbit  RCIDL_bit at BAUDCON2.B6;
    const register unsigned short int RCMT = 6;
    sbit  RCMT_bit at BAUDCON2.B6;
    const register unsigned short int ABDEN2 = 0;
    sbit  ABDEN2_bit at BAUDCON2.B0;
    const register unsigned short int WUE2 = 1;
    sbit  WUE2_bit at BAUDCON2.B1;
    const register unsigned short int BRG162 = 3;
    sbit  BRG162_bit at BAUDCON2.B3;
    const register unsigned short int SCKP2 = 4;
    sbit  SCKP2_bit at BAUDCON2.B4;
    const register unsigned short int RCIDL2 = 6;
    sbit  RCIDL2_bit at BAUDCON2.B6;

    // BAUDCON, BAUDCON1, BAUDCTL1 bits
    sbit  ABDEN_BAUDCON_bit at BAUDCON.B0;
    sbit  WUE_BAUDCON_bit at BAUDCON.B1;
    sbit  BRG16_BAUDCON_bit at BAUDCON.B3;
    sbit  SCKP_BAUDCON_bit at BAUDCON.B4;
    sbit  RCIDL_BAUDCON_bit at BAUDCON.B6;
    sbit  RCMT_BAUDCON_bit at BAUDCON.B6;

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
    const register unsigned short int T0CKI = 4;
    sbit  T0CKI_bit at PORTA.B4;

    // Alternative bit function
    const register unsigned short int AN4 = 5;
    sbit  AN4_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int OSC2 = 6;
    sbit  OSC2_bit at PORTA.B6;

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
    const register unsigned short int INT0 = 0;
    sbit  INT0_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int INT1 = 1;
    sbit  INT1_bit at PORTB.B1;

    // Alternative bit function
    const register unsigned short int INT2 = 2;
    sbit  INT2_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int INT3 = 3;
    sbit  INT3_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int KBI0 = 4;
    sbit  KBI0_bit at PORTB.B4;

    // Alternative bit function
    const register unsigned short int KBI1 = 5;
    sbit  KBI1_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int KBI2 = 6;
    sbit  KBI2_bit at PORTB.B6;

    // Alternative bit function
    const register unsigned short int KBI3 = 7;
    sbit  KBI3_bit at PORTB.B7;

    // Alternative bit function
    const register unsigned short int PGM = 5;
    sbit  PGM_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int PGC = 6;
    sbit  PGC_bit at PORTB.B6;

    // Alternative bit function
    const register unsigned short int PGD = 7;
    sbit  PGD_bit at PORTB.B7;

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
    const register unsigned short int SCK = 3;
    sbit  SCK_bit at PORTC.B3;

    // Alternative bit function
    const register unsigned short int SDI = 4;
    sbit  SDI_bit at PORTC.B4;

    // Alternative bit function
    const register unsigned short int SDO = 5;
    sbit  SDO_bit at PORTC.B5;

    // Alternative bit function
    const register unsigned short int TX1 = 6;
    sbit  TX1_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int RX1 = 7;
    sbit  RX1_bit at PORTC.B7;

    // Alternative bit function
    const register unsigned short int T13CKI = 0;
    sbit  T13CKI_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int P1A = 2;
    sbit  P1A_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int SCL = 3;
    sbit  SCL_bit at PORTC.B3;

    // Alternative bit function
    const register unsigned short int SDA = 4;
    sbit  SDA_bit at PORTC.B4;

    // Alternative bit function
    const register unsigned short int CK1 = 6;
    sbit  CK1_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int DT1 = 7;
    sbit  DT1_bit at PORTC.B7;

    // Alternative bit function
    const register unsigned short int PSP0 = 0;
    sbit  PSP0_bit at PORTD.B0;

    // Alternative bit function
    const register unsigned short int PSP1 = 1;
    sbit  PSP1_bit at PORTD.B1;

    // Alternative bit function
    const register unsigned short int PSP2 = 2;
    sbit  PSP2_bit at PORTD.B2;

    // Alternative bit function
    const register unsigned short int PSP3 = 3;
    sbit  PSP3_bit at PORTD.B3;

    // Alternative bit function
    const register unsigned short int PSP4 = 4;
    sbit  PSP4_bit at PORTD.B4;

    // Alternative bit function
    const register unsigned short int PSP5 = 5;
    sbit  PSP5_bit at PORTD.B5;

    // Alternative bit function
    const register unsigned short int PSP6 = 6;
    sbit  PSP6_bit at PORTD.B6;

    // Alternative bit function
    const register unsigned short int PSP7 = 7;
    sbit  PSP7_bit at PORTD.B7;

    // Alternative bit function
    const register unsigned short int AD0 = 0;
    sbit  AD0_bit at PORTD.B0;

    // Alternative bit function
    const register unsigned short int AD1 = 1;
    sbit  AD1_bit at PORTD.B1;

    // Alternative bit function
    const register unsigned short int AD2 = 2;
    sbit  AD2_bit at PORTD.B2;

    // Alternative bit function
    const register unsigned short int AD3 = 3;
    sbit  AD3_bit at PORTD.B3;

    // Alternative bit function
    const register unsigned short int AD4 = 4;
    sbit  AD4_bit at PORTD.B4;

    // Alternative bit function
    const register unsigned short int AD5 = 5;
    sbit  AD5_bit at PORTD.B5;

    // Alternative bit function
    const register unsigned short int AD6 = 6;
    sbit  AD6_bit at PORTD.B6;

    // Alternative bit function
    const register unsigned short int AD7 = 7;
    sbit  AD7_bit at PORTD.B7;

    // Alternative bit function
    const register unsigned short int RD = 0;
    sbit  RD_bit at PORTE.B0;

    // Alternative bit function
    const register unsigned short int WR = 1;
    sbit  WR_bit at PORTE.B1;

    // Alternative bit function
    const register unsigned short int CS = 2;
    sbit  CS_bit at PORTE.B2;

    // Alternative bit function
    const register unsigned short int AD8 = 0;
    sbit  AD8_bit at PORTE.B0;

    // Alternative bit function
    const register unsigned short int AD9 = 1;
    sbit  AD9_bit at PORTE.B1;

    // Alternative bit function
    const register unsigned short int AD10 = 2;
    sbit  AD10_bit at PORTE.B2;

    // Alternative bit function
    const register unsigned short int AD11 = 3;
    sbit  AD11_bit at PORTE.B3;

    // Alternative bit function
    const register unsigned short int AD12 = 4;
    sbit  AD12_bit at PORTE.B4;

    // Alternative bit function
    const register unsigned short int AD13 = 5;
    sbit  AD13_bit at PORTE.B5;

    // Alternative bit function
    const register unsigned short int AD14 = 6;
    sbit  AD14_bit at PORTE.B6;

    // Alternative bit function
    const register unsigned short int AD15 = 7;
    sbit  AD15_bit at PORTE.B7;

    // Alternative bit function
    const register unsigned short int P2D = 0;
    sbit  P2D_bit at PORTE.B0;

    // Alternative bit function
    const register unsigned short int P2C = 1;
    sbit  P2C_bit at PORTE.B1;

    // Alternative bit function
    const register unsigned short int P2B = 2;
    sbit  P2B_bit at PORTE.B2;

    // Alternative bit function
    const register unsigned short int P3C = 3;
    sbit  P3C_bit at PORTE.B3;

    // Alternative bit function
    const register unsigned short int P3B = 4;
    sbit  P3B_bit at PORTE.B4;

    // Alternative bit function
    const register unsigned short int P1C = 5;
    sbit  P1C_bit at PORTE.B5;

    // Alternative bit function
    const register unsigned short int P1B = 6;
    sbit  P1B_bit at PORTE.B6;

    // Alternative bit function
    const register unsigned short int AN5 = 0;
    sbit  AN5_bit at PORTF.B0;

    // Alternative bit function
    const register unsigned short int AN6 = 1;
    sbit  AN6_bit at PORTF.B1;

    // Alternative bit function
    const register unsigned short int AN7 = 2;
    sbit  AN7_bit at PORTF.B2;

    // Alternative bit function
    const register unsigned short int AN8 = 3;
    sbit  AN8_bit at PORTF.B3;

    // Alternative bit function
    const register unsigned short int AN9 = 4;
    sbit  AN9_bit at PORTF.B4;

    // Alternative bit function
    const register unsigned short int AN10 = 5;
    sbit  AN10_bit at PORTF.B5;

    // Alternative bit function
    const register unsigned short int AN11 = 6;
    sbit  AN11_bit at PORTF.B6;

    // Alternative bit function
    const register unsigned short int SS = 7;
    sbit  SS_bit at PORTF.B7;

    // Alternative bit function
    const register unsigned short int C2OUTF = 1;
    sbit  C2OUTF_bit at PORTF.B1;

    // Alternative bit function
    const register unsigned short int C1OUTF = 2;
    sbit  C1OUTF_bit at PORTF.B2;

    // Alternative bit function
    const register unsigned short int CVREFF = 5;
    sbit  CVREFF_bit at PORTF.B5;

    // Alternative bit function
    const register unsigned short int CCP3 = 0;
    sbit  CCP3_bit at PORTG.B0;

    // Alternative bit function
    const register unsigned short int TX2 = 1;
    sbit  TX2_bit at PORTG.B1;

    // Alternative bit function
    const register unsigned short int RX2 = 2;
    sbit  RX2_bit at PORTG.B2;

    // Alternative bit function
    const register unsigned short int CCP4 = 3;
    sbit  CCP4_bit at PORTG.B3;

    // Alternative bit function
    const register unsigned short int CCP5 = 4;
    sbit  CCP5_bit at PORTG.B4;

    // Alternative bit function
    const register unsigned short int MCLR = 5;
    sbit  MCLR_bit at PORTG.B5;

    // Alternative bit function
    const register unsigned short int P3A = 0;
    sbit  P3A_bit at PORTG.B0;

    // Alternative bit function
    const register unsigned short int CK2 = 1;
    sbit  CK2_bit at PORTG.B1;

    // Alternative bit function
    const register unsigned short int DT2 = 2;
    sbit  DT2_bit at PORTG.B2;

    // Alternative bit function
    const register unsigned short int P3D = 3;
    sbit  P3D_bit at PORTG.B3;

    // Alternative bit function
    const register unsigned short int P1D = 4;
    sbit  P1D_bit at PORTG.B4;

    // Alternative bit function
    const register unsigned short int VPP = 5;
    sbit  VPP_bit at PORTG.B5;

    // Alternative bit function
    const register unsigned short int AD16 = 0;
    sbit  AD16_bit at PORTH.B0;

    // Alternative bit function
    const register unsigned short int AD17 = 1;
    sbit  AD17_bit at PORTH.B1;

    // Alternative bit function
    const register unsigned short int AD18 = 2;
    sbit  AD18_bit at PORTH.B2;

    // Alternative bit function
    const register unsigned short int AD19 = 3;
    sbit  AD19_bit at PORTH.B3;

    // Alternative bit function
    const register unsigned short int AN12 = 4;
    sbit  AN12_bit at PORTH.B4;

    // Alternative bit function
    const register unsigned short int AN13 = 5;
    sbit  AN13_bit at PORTH.B5;

    // Alternative bit function
    const register unsigned short int AN14 = 6;
    sbit  AN14_bit at PORTH.B6;

    // Alternative bit function
    const register unsigned short int AN15 = 7;
    sbit  AN15_bit at PORTH.B7;

    // Alternative bit function
    const register unsigned short int ALE = 0;
    sbit  ALE_bit at PORTJ.B0;

    // Alternative bit function
    const register unsigned short int OE = 1;
    sbit  OE_bit at PORTJ.B1;

    // Alternative bit function
    const register unsigned short int WRL = 2;
    sbit  WRL_bit at PORTJ.B2;

    // Alternative bit function
    const register unsigned short int WRH = 3;
    sbit  WRH_bit at PORTJ.B3;

    // Alternative bit function
    const register unsigned short int BA0 = 4;
    sbit  BA0_bit at PORTJ.B4;

    // Alternative bit function
    const register unsigned short int CE = 5;
    sbit  CE_bit at PORTJ.B5;

    // Alternative bit function
    const register unsigned short int LB = 6;
    sbit  LB_bit at PORTJ.B6;

    // Alternative bit function
    const register unsigned short int UB = 7;
    sbit  UB_bit at PORTJ.B7;

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
    const register unsigned short int LATE3 = 3;
    sbit  LATE3_bit at LATE.B3;
    const register unsigned short int LATE4 = 4;
    sbit  LATE4_bit at LATE.B4;
    const register unsigned short int LATE5 = 5;
    sbit  LATE5_bit at LATE.B5;
    const register unsigned short int LATE6 = 6;
    sbit  LATE6_bit at LATE.B6;
    const register unsigned short int LATE7 = 7;
    sbit  LATE7_bit at LATE.B7;

    // LATF bits
    const register unsigned short int LATF0 = 0;
    sbit  LATF0_bit at LATF.B0;
    const register unsigned short int LATF1 = 1;
    sbit  LATF1_bit at LATF.B1;
    const register unsigned short int LATF2 = 2;
    sbit  LATF2_bit at LATF.B2;
    const register unsigned short int LATF3 = 3;
    sbit  LATF3_bit at LATF.B3;
    const register unsigned short int LATF4 = 4;
    sbit  LATF4_bit at LATF.B4;
    const register unsigned short int LATF5 = 5;
    sbit  LATF5_bit at LATF.B5;
    const register unsigned short int LATF6 = 6;
    sbit  LATF6_bit at LATF.B6;
    const register unsigned short int LATF7 = 7;
    sbit  LATF7_bit at LATF.B7;

    // LATG bits
    const register unsigned short int LATG0 = 0;
    sbit  LATG0_bit at LATG.B0;
    const register unsigned short int LATG1 = 1;
    sbit  LATG1_bit at LATG.B1;
    const register unsigned short int LATG2 = 2;
    sbit  LATG2_bit at LATG.B2;
    const register unsigned short int LATG3 = 3;
    sbit  LATG3_bit at LATG.B3;
    const register unsigned short int LATG4 = 4;
    sbit  LATG4_bit at LATG.B4;

    // LATH bits
    const register unsigned short int LATH0 = 0;
    sbit  LATH0_bit at LATH.B0;
    const register unsigned short int LATH1 = 1;
    sbit  LATH1_bit at LATH.B1;
    const register unsigned short int LATH2 = 2;
    sbit  LATH2_bit at LATH.B2;
    const register unsigned short int LATH3 = 3;
    sbit  LATH3_bit at LATH.B3;
    const register unsigned short int LATH4 = 4;
    sbit  LATH4_bit at LATH.B4;
    const register unsigned short int LATH5 = 5;
    sbit  LATH5_bit at LATH.B5;
    const register unsigned short int LATH6 = 6;
    sbit  LATH6_bit at LATH.B6;
    const register unsigned short int LATH7 = 7;
    sbit  LATH7_bit at LATH.B7;

    // LATJ bits
    const register unsigned short int LATJ0 = 0;
    sbit  LATJ0_bit at LATJ.B0;
    const register unsigned short int LATJ1 = 1;
    sbit  LATJ1_bit at LATJ.B1;
    const register unsigned short int LATJ2 = 2;
    sbit  LATJ2_bit at LATJ.B2;
    const register unsigned short int LATJ3 = 3;
    sbit  LATJ3_bit at LATJ.B3;
    const register unsigned short int LATJ4 = 4;
    sbit  LATJ4_bit at LATJ.B4;
    const register unsigned short int LATJ5 = 5;
    sbit  LATJ5_bit at LATJ.B5;
    const register unsigned short int LATJ6 = 6;
    sbit  LATJ6_bit at LATJ.B6;
    const register unsigned short int LATJ7 = 7;
    sbit  LATJ7_bit at LATJ.B7;

    // MEMCON bits
    const register unsigned short int EBDIS = 7;
    sbit  EBDIS_bit at MEMCON.B7;
    const register unsigned short int WM0 = 0;
    sbit  WM0_bit at MEMCON.B0;
    const register unsigned short int WM1 = 1;
    sbit  WM1_bit at MEMCON.B1;
    const register unsigned short int WAIT0 = 4;
    sbit  WAIT0_bit at MEMCON.B4;
    const register unsigned short int WAIT1 = 5;
    sbit  WAIT1_bit at MEMCON.B5;

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
    const register unsigned short int PSPIE = 7;
    sbit  PSPIE_bit at PIE1.B7;
    const register unsigned short int TX1IE = 4;
    sbit  TX1IE_bit at PIE1.B4;
    const register unsigned short int RC1IE = 5;
    sbit  RC1IE_bit at PIE1.B5;

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
    const register unsigned short int PSPIF = 7;
    sbit  PSPIF_bit at PIR1.B7;
    const register unsigned short int TX1IF = 4;
    sbit  TX1IF_bit at PIR1.B4;
    const register unsigned short int RC1IF = 5;
    sbit  RC1IF_bit at PIR1.B5;

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
    const register unsigned short int PSPIP = 7;
    sbit  PSPIP_bit at IPR1.B7;
    const register unsigned short int TX1IP = 4;
    sbit  TX1IP_bit at IPR1.B4;
    const register unsigned short int RC1IP = 5;
    sbit  RC1IP_bit at IPR1.B5;

    // PIE2 bits
    const register unsigned short int CCP2IE = 0;
    sbit  CCP2IE_bit at PIE2.B0;
    const register unsigned short int TMR3IE = 1;
    sbit  TMR3IE_bit at PIE2.B1;
    const register unsigned short int LVDIE = 2;
    sbit  LVDIE_bit at PIE2.B2;
    const register unsigned short int BCLIE = 3;
    sbit  BCLIE_bit at PIE2.B3;
    const register unsigned short int EEIE = 4;
    sbit  EEIE_bit at PIE2.B4;
    const register unsigned short int CMIE = 6;
    sbit  CMIE_bit at PIE2.B6;

    // PIR2 bits
    const register unsigned short int CCP2IF = 0;
    sbit  CCP2IF_bit at PIR2.B0;
    const register unsigned short int TMR3IF = 1;
    sbit  TMR3IF_bit at PIR2.B1;
    const register unsigned short int LVDIF = 2;
    sbit  LVDIF_bit at PIR2.B2;
    const register unsigned short int BCLIF = 3;
    sbit  BCLIF_bit at PIR2.B3;
    const register unsigned short int EEIF = 4;
    sbit  EEIF_bit at PIR2.B4;
    const register unsigned short int CMIF = 6;
    sbit  CMIF_bit at PIR2.B6;

    // IPR2 bits
    const register unsigned short int CCP2IP = 0;
    sbit  CCP2IP_bit at IPR2.B0;
    const register unsigned short int TMR3IP = 1;
    sbit  TMR3IP_bit at IPR2.B1;
    const register unsigned short int LVDIP = 2;
    sbit  LVDIP_bit at IPR2.B2;
    const register unsigned short int BCLIP = 3;
    sbit  BCLIP_bit at IPR2.B3;
    const register unsigned short int EEIP = 4;
    sbit  EEIP_bit at IPR2.B4;
    const register unsigned short int CMIP = 6;
    sbit  CMIP_bit at IPR2.B6;

    // PIE3 bits
    const register unsigned short int CCP3IE = 0;
    sbit  CCP3IE_bit at PIE3.B0;
    const register unsigned short int CCP4IE = 1;
    sbit  CCP4IE_bit at PIE3.B1;
    const register unsigned short int CCP5IE = 2;
    sbit  CCP5IE_bit at PIE3.B2;
    const register unsigned short int TMR4IE = 3;
    sbit  TMR4IE_bit at PIE3.B3;
    const register unsigned short int TX2IE = 4;
    sbit  TX2IE_bit at PIE3.B4;
    const register unsigned short int RC2IE = 5;
    sbit  RC2IE_bit at PIE3.B5;

    // PIR3 bits
    const register unsigned short int CCP3IF = 0;
    sbit  CCP3IF_bit at PIR3.B0;
    const register unsigned short int CCP4IF = 1;
    sbit  CCP4IF_bit at PIR3.B1;
    const register unsigned short int CCP5IF = 2;
    sbit  CCP5IF_bit at PIR3.B2;
    const register unsigned short int TMR4IF = 3;
    sbit  TMR4IF_bit at PIR3.B3;
    const register unsigned short int TX2IF = 4;
    sbit  TX2IF_bit at PIR3.B4;
    const register unsigned short int RC2IF = 5;
    sbit  RC2IF_bit at PIR3.B5;

    // IPR3 bits
    const register unsigned short int CCP3IP = 0;
    sbit  CCP3IP_bit at IPR3.B0;
    const register unsigned short int CCP4IP = 1;
    sbit  CCP4IP_bit at IPR3.B1;
    const register unsigned short int CCP5IP = 2;
    sbit  CCP5IP_bit at IPR3.B2;
    const register unsigned short int TMR4IP = 3;
    sbit  TMR4IP_bit at IPR3.B3;
    const register unsigned short int TX2IP = 4;
    sbit  TX2IP_bit at IPR3.B4;
    const register unsigned short int RC2IP = 5;
    sbit  RC2IP_bit at IPR3.B5;

    // EECON1 bits
    sbit  RD_EECON1_bit at EECON1.B0;
    sbit  WR_EECON1_bit at EECON1.B1;
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

    // RCSTA, RCSTA1 bits
    sbit  RX9D_RCSTA_bit at RCSTA.B0;
    sbit  OERR_RCSTA_bit at RCSTA.B1;
    sbit  FERR_RCSTA_bit at RCSTA.B2;
    sbit  ADDEN_RCSTA_bit at RCSTA.B3;
    sbit  CREN_RCSTA_bit at RCSTA.B4;
    sbit  SREN_RCSTA_bit at RCSTA.B5;
    sbit  RX9_RCSTA_bit at RCSTA.B6;
    sbit  SPEN_RCSTA_bit at RCSTA.B7;
    sbit  ADEN_RCSTA_bit at RCSTA.B3;
    const register unsigned short int RX9D1 = 0;
    sbit  RX9D1_bit at RCSTA.B0;
    const register unsigned short int OERR1 = 1;
    sbit  OERR1_bit at RCSTA.B1;
    const register unsigned short int FERR1 = 2;
    sbit  FERR1_bit at RCSTA.B2;
    const register unsigned short int ADDEN1 = 3;
    sbit  ADDEN1_bit at RCSTA.B3;
    const register unsigned short int CREN1 = 4;
    sbit  CREN1_bit at RCSTA.B4;
    const register unsigned short int SREN1 = 5;
    sbit  SREN1_bit at RCSTA.B5;
    const register unsigned short int RX91 = 6;
    sbit  RX91_bit at RCSTA.B6;
    const register unsigned short int SPEN1 = 7;
    sbit  SPEN1_bit at RCSTA.B7;

    // TXSTA, TXSTA1 bits
    sbit  TX9D_TXSTA_bit at TXSTA.B0;
    sbit  TRMT_TXSTA_bit at TXSTA.B1;
    sbit  BRGH_TXSTA_bit at TXSTA.B2;
    sbit  SENDB_TXSTA_bit at TXSTA.B3;
    sbit  SYNC_TXSTA_bit at TXSTA.B4;
    sbit  TXEN_TXSTA_bit at TXSTA.B5;
    sbit  TX9_TXSTA_bit at TXSTA.B6;
    sbit  CSRC_TXSTA_bit at TXSTA.B7;
    const register unsigned short int TX9D1 = 0;
    sbit  TX9D1_bit at TXSTA.B0;
    const register unsigned short int TRMT1 = 1;
    sbit  TRMT1_bit at TXSTA.B1;
    const register unsigned short int BRGH1 = 2;
    sbit  BRGH1_bit at TXSTA.B2;
    const register unsigned short int SENDB1 = 3;
    sbit  SENDB1_bit at TXSTA.B3;
    const register unsigned short int SYNC1 = 4;
    sbit  SYNC1_bit at TXSTA.B4;
    const register unsigned short int TXEN1 = 5;
    sbit  TXEN1_bit at TXSTA.B5;
    const register unsigned short int TX91 = 6;
    sbit  TX91_bit at TXSTA.B6;
    const register unsigned short int CSRC1 = 7;
    sbit  CSRC1_bit at TXSTA.B7;

    // PSPCON bits
    const register unsigned short int PSPMODE = 4;
    sbit  PSPMODE_bit at PSPCON.B4;
    const register unsigned short int IBOV = 5;
    sbit  IBOV_bit at PSPCON.B5;
    const register unsigned short int OBF = 6;
    sbit  OBF_bit at PSPCON.B6;
    const register unsigned short int IBF = 7;
    sbit  IBF_bit at PSPCON.B7;

    // T3CON bits
    const register unsigned short int TMR3ON = 0;
    sbit  TMR3ON_bit at T3CON.B0;
    const register unsigned short int TMR3CS = 1;
    sbit  TMR3CS_bit at T3CON.B1;
    const register unsigned short int NOT_T3SYNC = 2;
    sbit  NOT_T3SYNC_bit at T3CON.B2;
    const register unsigned short int T3CCP1 = 3;
    sbit  T3CCP1_bit at T3CON.B3;
    const register unsigned short int T3CCP2 = 6;
    sbit  T3CCP2_bit at T3CON.B6;
    const register unsigned short int RD16 = 7;
    sbit  RD16_bit at T3CON.B7;
    const register unsigned short int T3SYNC = 2;
    sbit  T3SYNC_bit at T3CON.B2;
    const register unsigned short int T3CKPS0 = 4;
    sbit  T3CKPS0_bit at T3CON.B4;
    const register unsigned short int T3CKPS1 = 5;
    sbit  T3CKPS1_bit at T3CON.B5;
    const register unsigned short int T3NSYNC = 2;
    sbit  T3NSYNC_bit at T3CON.B2;

    // CMCON bits
    const register unsigned short int CIS = 3;
    sbit  CIS_bit at CMCON.B3;
    const register unsigned short int C1INV = 4;
    sbit  C1INV_bit at CMCON.B4;
    const register unsigned short int C2INV = 5;
    sbit  C2INV_bit at CMCON.B5;
    const register unsigned short int C1OUT = 6;
    sbit  C1OUT_bit at CMCON.B6;
    const register unsigned short int C2OUT = 7;
    sbit  C2OUT_bit at CMCON.B7;
    const register unsigned short int CM0 = 0;
    sbit  CM0_bit at CMCON.B0;
    const register unsigned short int CM1 = 1;
    sbit  CM1_bit at CMCON.B1;
    const register unsigned short int CM2 = 2;
    sbit  CM2_bit at CMCON.B2;

    // CVRCON bits
    const register unsigned short int CVRSS = 4;
    sbit  CVRSS_bit at CVRCON.B4;
    const register unsigned short int CVRR = 5;
    sbit  CVRR_bit at CVRCON.B5;
    const register unsigned short int CVROE = 6;
    sbit  CVROE_bit at CVRCON.B6;
    const register unsigned short int CVREN = 7;
    sbit  CVREN_bit at CVRCON.B7;
    const register unsigned short int CVR0 = 0;
    sbit  CVR0_bit at CVRCON.B0;
    const register unsigned short int CVR1 = 1;
    sbit  CVR1_bit at CVRCON.B1;
    const register unsigned short int CVR2 = 2;
    sbit  CVR2_bit at CVRCON.B2;
    const register unsigned short int CVR3 = 3;
    sbit  CVR3_bit at CVRCON.B3;
    const register unsigned short int CVREF = 4;
    sbit  CVREF_bit at CVRCON.B4;

    // ECCP1AS bits
    const register unsigned short int ECCP1ASE = 7;
    sbit  ECCP1ASE_bit at ECCP1AS.B7;
    const register unsigned short int PSS1BD0 = 0;
    sbit  PSS1BD0_bit at ECCP1AS.B0;
    const register unsigned short int PSS1BD1 = 1;
    sbit  PSS1BD1_bit at ECCP1AS.B1;
    const register unsigned short int PSS1AC0 = 2;
    sbit  PSS1AC0_bit at ECCP1AS.B2;
    const register unsigned short int PSS1AC1 = 3;
    sbit  PSS1AC1_bit at ECCP1AS.B3;
    const register unsigned short int ECCP1AS0 = 4;
    sbit  ECCP1AS0_bit at ECCP1AS.B4;
    const register unsigned short int ECCP1AS1 = 5;
    sbit  ECCP1AS1_bit at ECCP1AS.B5;
    const register unsigned short int ECCP1AS2 = 6;
    sbit  ECCP1AS2_bit at ECCP1AS.B6;
    sbit  PSSBD0_ECCP1AS_bit at ECCP1AS.B0;
    sbit  PSSBD1_ECCP1AS_bit at ECCP1AS.B1;
    sbit  PSSAC0_ECCP1AS_bit at ECCP1AS.B2;
    sbit  PSSAC1_ECCP1AS_bit at ECCP1AS.B3;

    // CCP3CON bits
    const register unsigned short int CCP3M0 = 0;
    sbit  CCP3M0_bit at CCP3CON.B0;
    const register unsigned short int CCP3M1 = 1;
    sbit  CCP3M1_bit at CCP3CON.B1;
    const register unsigned short int CCP3M2 = 2;
    sbit  CCP3M2_bit at CCP3CON.B2;
    const register unsigned short int CCP3M3 = 3;
    sbit  CCP3M3_bit at CCP3CON.B3;
    const register unsigned short int CCP3Y = 4;
    sbit  CCP3Y_bit at CCP3CON.B4;
    const register unsigned short int CCP3X = 5;
    sbit  CCP3X_bit at CCP3CON.B5;
    const register unsigned short int P3M0 = 6;
    sbit  P3M0_bit at CCP3CON.B6;
    const register unsigned short int P3M1 = 7;
    sbit  P3M1_bit at CCP3CON.B7;
    const register unsigned short int DC3B0 = 4;
    sbit  DC3B0_bit at CCP3CON.B4;
    const register unsigned short int DC3B1 = 5;
    sbit  DC3B1_bit at CCP3CON.B5;

    // CCP2CON bits
    const register unsigned short int CCP2M0 = 0;
    sbit  CCP2M0_bit at CCP2CON.B0;
    const register unsigned short int CCP2M1 = 1;
    sbit  CCP2M1_bit at CCP2CON.B1;
    const register unsigned short int CCP2M2 = 2;
    sbit  CCP2M2_bit at CCP2CON.B2;
    const register unsigned short int CCP2M3 = 3;
    sbit  CCP2M3_bit at CCP2CON.B3;
    const register unsigned short int DC2B0 = 4;
    sbit  DC2B0_bit at CCP2CON.B4;
    const register unsigned short int DC2B1 = 5;
    sbit  DC2B1_bit at CCP2CON.B5;
    const register unsigned short int P2M0 = 6;
    sbit  P2M0_bit at CCP2CON.B6;
    const register unsigned short int P2M1 = 7;
    sbit  P2M1_bit at CCP2CON.B7;
    const register unsigned short int CCP2Y = 4;
    sbit  CCP2Y_bit at CCP2CON.B4;
    const register unsigned short int CCP2X = 5;
    sbit  CCP2X_bit at CCP2CON.B5;

    // CCP1CON bits
    const register unsigned short int CCP1M0 = 0;
    sbit  CCP1M0_bit at CCP1CON.B0;
    const register unsigned short int CCP1M1 = 1;
    sbit  CCP1M1_bit at CCP1CON.B1;
    const register unsigned short int CCP1M2 = 2;
    sbit  CCP1M2_bit at CCP1CON.B2;
    const register unsigned short int CCP1M3 = 3;
    sbit  CCP1M3_bit at CCP1CON.B3;
    const register unsigned short int DC1B0 = 4;
    sbit  DC1B0_bit at CCP1CON.B4;
    const register unsigned short int DC1B1 = 5;
    sbit  DC1B1_bit at CCP1CON.B5;
    const register unsigned short int P1M0 = 6;
    sbit  P1M0_bit at CCP1CON.B6;
    const register unsigned short int P1M1 = 7;
    sbit  P1M1_bit at CCP1CON.B7;
    const register unsigned short int CCP1Y = 4;
    sbit  CCP1Y_bit at CCP1CON.B4;
    const register unsigned short int CCP1X = 5;
    sbit  CCP1X_bit at CCP1CON.B5;

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

    // ADCON1 bits
    const register unsigned short int PCFG0 = 0;
    sbit  PCFG0_bit at ADCON1.B0;
    const register unsigned short int PCFG1 = 1;
    sbit  PCFG1_bit at ADCON1.B1;
    const register unsigned short int PCFG2 = 2;
    sbit  PCFG2_bit at ADCON1.B2;
    const register unsigned short int PCFG3 = 3;
    sbit  PCFG3_bit at ADCON1.B3;
    const register unsigned short int VCFG0 = 4;
    sbit  VCFG0_bit at ADCON1.B4;
    const register unsigned short int VCFG1 = 5;
    sbit  VCFG1_bit at ADCON1.B5;

    // ADCON0 bits
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADCON0.B0;
    const register unsigned short int GO_NOT_DONE = 1;
    sbit  GO_NOT_DONE_bit at ADCON0.B1;
    const register unsigned short int GO_DONE = 1;
    sbit  GO_DONE_bit at ADCON0.B1;
    const register unsigned short int CHS0 = 2;
    sbit  CHS0_bit at ADCON0.B2;
    const register unsigned short int CHS1 = 3;
    sbit  CHS1_bit at ADCON0.B3;
    const register unsigned short int CHS2 = 4;
    sbit  CHS2_bit at ADCON0.B4;
    const register unsigned short int CHS3 = 5;
    sbit  CHS3_bit at ADCON0.B5;
    const register unsigned short int DONE = 1;
    sbit  DONE_bit at ADCON0.B1;
    const register unsigned short int GO = 1;
    sbit  GO_bit at ADCON0.B1;
    const register unsigned short int NOT_DONE = 1;
    sbit  NOT_DONE_bit at ADCON0.B1;
    const register unsigned short int GODONE = 1;
    sbit  GODONE_bit at ADCON0.B1;

    // SSPCON2 bits
    const register unsigned short int SEN = 0;
    sbit  SEN_bit at SSPCON2.B0;
    const register unsigned short int RSEN = 1;
    sbit  RSEN_bit at SSPCON2.B1;
    const register unsigned short int PEN = 2;
    sbit  PEN_bit at SSPCON2.B2;
    const register unsigned short int RCEN = 3;
    sbit  RCEN_bit at SSPCON2.B3;
    const register unsigned short int ACKEN = 4;
    sbit  ACKEN_bit at SSPCON2.B4;
    const register unsigned short int ACKDT = 5;
    sbit  ACKDT_bit at SSPCON2.B5;
    const register unsigned short int ACKSTAT = 6;
    sbit  ACKSTAT_bit at SSPCON2.B6;
    const register unsigned short int GCEN = 7;
    sbit  GCEN_bit at SSPCON2.B7;

    // SSPCON1 bits
    const register unsigned short int CKP = 4;
    sbit  CKP_bit at SSPCON1.B4;
    const register unsigned short int SSPEN = 5;
    sbit  SSPEN_bit at SSPCON1.B5;
    const register unsigned short int SSPOV = 6;
    sbit  SSPOV_bit at SSPCON1.B6;
    const register unsigned short int WCOL = 7;
    sbit  WCOL_bit at SSPCON1.B7;
    const register unsigned short int SSPM0 = 0;
    sbit  SSPM0_bit at SSPCON1.B0;
    const register unsigned short int SSPM1 = 1;
    sbit  SSPM1_bit at SSPCON1.B1;
    const register unsigned short int SSPM2 = 2;
    sbit  SSPM2_bit at SSPCON1.B2;
    const register unsigned short int SSPM3 = 3;
    sbit  SSPM3_bit at SSPCON1.B3;

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
    const register unsigned short int I2C_DAT = 5;
    sbit  I2C_DAT_bit at SSPSTAT.B5;
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

    // T1CON bits
    const register unsigned short int TMR1ON = 0;
    sbit  TMR1ON_bit at T1CON.B0;
    const register unsigned short int TMR1CS = 1;
    sbit  TMR1CS_bit at T1CON.B1;
    const register unsigned short int NOT_T1SYNC = 2;
    sbit  NOT_T1SYNC_bit at T1CON.B2;
    const register unsigned short int T1OSCEN = 3;
    sbit  T1OSCEN_bit at T1CON.B3;
    sbit  RD16_T1CON_bit at T1CON.B7;
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
    const register unsigned short int SWDTE = 0;
    sbit  SWDTE_bit at WDTCON.B0;

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
    const register unsigned short int LVV0 = 0;
    sbit  LVV0_bit at LVDCON.B0;
    const register unsigned short int LVV1 = 1;
    sbit  LVV1_bit at LVDCON.B1;
    const register unsigned short int LVV2 = 2;
    sbit  LVV2_bit at LVDCON.B2;
    const register unsigned short int LVV3 = 3;
    sbit  LVV3_bit at LVDCON.B3;
    const register unsigned short int BGST = 5;
    sbit  BGST_bit at LVDCON.B5;

    // OSCCON bits
    const register unsigned short int PLLEN = 2;
    sbit  PLLEN_bit at OSCCON.B2;
    const register unsigned short int LOCK_ = 3;
    sbit  LOCK__bit at OSCCON.B3;
    const register unsigned short int SCS0 = 0;
    sbit  SCS0_bit at OSCCON.B0;
    const register unsigned short int SCS1 = 1;
    sbit  SCS1_bit at OSCCON.B1;

    // T0CON bits
    const register unsigned short int PSA = 3;
    sbit  PSA_bit at T0CON.B3;
    const register unsigned short int T0SE = 4;
    sbit  T0SE_bit at T0CON.B4;
    const register unsigned short int T0CS = 5;
    sbit  T0CS_bit at T0CON.B5;
    const register unsigned short int T08BIT = 6;
    sbit  T08BIT_bit at T0CON.B6;
    const register unsigned short int TMR0ON = 7;
    sbit  TMR0ON_bit at T0CON.B7;
    const register unsigned short int T0PS0 = 0;
    sbit  T0PS0_bit at T0CON.B0;
    const register unsigned short int T0PS1 = 1;
    sbit  T0PS1_bit at T0CON.B1;
    const register unsigned short int T0PS2 = 2;
    sbit  T0PS2_bit at T0CON.B2;

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
    const register unsigned short int INT3IF = 2;
    sbit  INT3IF_bit at INTCON3.B2;
    const register unsigned short int INT1IE = 3;
    sbit  INT1IE_bit at INTCON3.B3;
    const register unsigned short int INT2IE = 4;
    sbit  INT2IE_bit at INTCON3.B4;
    const register unsigned short int INT3IE = 5;
    sbit  INT3IE_bit at INTCON3.B5;
    const register unsigned short int INT1IP = 6;
    sbit  INT1IP_bit at INTCON3.B6;
    const register unsigned short int INT2IP = 7;
    sbit  INT2IP_bit at INTCON3.B7;
    const register unsigned short int INT1F = 0;
    sbit  INT1F_bit at INTCON3.B0;
    const register unsigned short int INT2F = 1;
    sbit  INT2F_bit at INTCON3.B1;
    const register unsigned short int INT3F = 2;
    sbit  INT3F_bit at INTCON3.B2;
    const register unsigned short int INT1E = 3;
    sbit  INT1E_bit at INTCON3.B3;
    const register unsigned short int INT2E = 4;
    sbit  INT2E_bit at INTCON3.B4;
    const register unsigned short int INT3E = 5;
    sbit  INT3E_bit at INTCON3.B5;
    const register unsigned short int INT1P = 6;
    sbit  INT1P_bit at INTCON3.B6;
    const register unsigned short int INT2P = 7;
    sbit  INT2P_bit at INTCON3.B7;

    // INTCON2 bits
    const register unsigned short int RBIP = 0;
    sbit  RBIP_bit at INTCON2.B0;
    const register unsigned short int INT3IP = 1;
    sbit  INT3IP_bit at INTCON2.B1;
    const register unsigned short int TMR0IP = 2;
    sbit  TMR0IP_bit at INTCON2.B2;
    const register unsigned short int INTEDG3 = 3;
    sbit  INTEDG3_bit at INTCON2.B3;
    const register unsigned short int INTEDG2 = 4;
    sbit  INTEDG2_bit at INTCON2.B4;
    const register unsigned short int INTEDG1 = 5;
    sbit  INTEDG1_bit at INTCON2.B5;
    const register unsigned short int INTEDG0 = 6;
    sbit  INTEDG0_bit at INTCON2.B6;
    const register unsigned short int NOT_RBPU = 7;
    sbit  NOT_RBPU_bit at INTCON2.B7;
    const register unsigned short int INT3P = 1;
    sbit  INT3P_bit at INTCON2.B1;
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
    const register unsigned short int RE7 = 7;
    sbit  RE7_bit at PORTE.B7;
    const register unsigned short int RE6 = 6;
    sbit  RE6_bit at PORTE.B6;
    const register unsigned short int RE5 = 5;
    sbit  RE5_bit at PORTE.B5;
    const register unsigned short int RE4 = 4;
    sbit  RE4_bit at PORTE.B4;
    const register unsigned short int RE3 = 3;
    sbit  RE3_bit at PORTE.B3;
    const register unsigned short int RE2 = 2;
    sbit  RE2_bit at PORTE.B2;
    const register unsigned short int RE1 = 1;
    sbit  RE1_bit at PORTE.B1;
    const register unsigned short int RE0 = 0;
    sbit  RE0_bit at PORTE.B0;

    // PORTF bits
    const register unsigned short int RF7 = 7;
    sbit  RF7_bit at PORTF.B7;
    const register unsigned short int RF6 = 6;
    sbit  RF6_bit at PORTF.B6;
    const register unsigned short int RF5 = 5;
    sbit  RF5_bit at PORTF.B5;
    const register unsigned short int RF4 = 4;
    sbit  RF4_bit at PORTF.B4;
    const register unsigned short int RF3 = 3;
    sbit  RF3_bit at PORTF.B3;
    const register unsigned short int RF2 = 2;
    sbit  RF2_bit at PORTF.B2;
    const register unsigned short int RF1 = 1;
    sbit  RF1_bit at PORTF.B1;
    const register unsigned short int RF0 = 0;
    sbit  RF0_bit at PORTF.B0;

    // PORTG bits
    const register unsigned short int RG5 = 5;
    sbit  RG5_bit at PORTG.B5;
    const register unsigned short int RG4 = 4;
    sbit  RG4_bit at PORTG.B4;
    const register unsigned short int RG3 = 3;
    sbit  RG3_bit at PORTG.B3;
    const register unsigned short int RG2 = 2;
    sbit  RG2_bit at PORTG.B2;
    const register unsigned short int RG1 = 1;
    sbit  RG1_bit at PORTG.B1;
    const register unsigned short int RG0 = 0;
    sbit  RG0_bit at PORTG.B0;

    // PORTH bits
    const register unsigned short int RH7 = 7;
    sbit  RH7_bit at PORTH.B7;
    const register unsigned short int RH6 = 6;
    sbit  RH6_bit at PORTH.B6;
    const register unsigned short int RH5 = 5;
    sbit  RH5_bit at PORTH.B5;
    const register unsigned short int RH4 = 4;
    sbit  RH4_bit at PORTH.B4;
    const register unsigned short int RH3 = 3;
    sbit  RH3_bit at PORTH.B3;
    const register unsigned short int RH2 = 2;
    sbit  RH2_bit at PORTH.B2;
    const register unsigned short int RH1 = 1;
    sbit  RH1_bit at PORTH.B1;
    const register unsigned short int RH0 = 0;
    sbit  RH0_bit at PORTH.B0;

    // PORTJ bits
    const register unsigned short int RJ7 = 7;
    sbit  RJ7_bit at PORTJ.B7;
    const register unsigned short int RJ6 = 6;
    sbit  RJ6_bit at PORTJ.B6;
    const register unsigned short int RJ5 = 5;
    sbit  RJ5_bit at PORTJ.B5;
    const register unsigned short int RJ4 = 4;
    sbit  RJ4_bit at PORTJ.B4;
    const register unsigned short int RJ3 = 3;
    sbit  RJ3_bit at PORTJ.B3;
    const register unsigned short int RJ2 = 2;
    sbit  RJ2_bit at PORTJ.B2;
    const register unsigned short int RJ1 = 1;
    sbit  RJ1_bit at PORTJ.B1;
    const register unsigned short int RJ0 = 0;
    sbit  RJ0_bit at PORTJ.B0;

    // TRISA bits
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
    const register unsigned short int TRISE7 = 7;
    sbit  TRISE7_bit at TRISE.B7;
    const register unsigned short int TRISE6 = 6;
    sbit  TRISE6_bit at TRISE.B6;
    const register unsigned short int TRISE5 = 5;
    sbit  TRISE5_bit at TRISE.B5;
    const register unsigned short int TRISE4 = 4;
    sbit  TRISE4_bit at TRISE.B4;
    const register unsigned short int TRISE3 = 3;
    sbit  TRISE3_bit at TRISE.B3;
    const register unsigned short int TRISE2 = 2;
    sbit  TRISE2_bit at TRISE.B2;
    const register unsigned short int TRISE1 = 1;
    sbit  TRISE1_bit at TRISE.B1;
    const register unsigned short int TRISE0 = 0;
    sbit  TRISE0_bit at TRISE.B0;

    // TRISF bits
    const register unsigned short int TRISF7 = 7;
    sbit  TRISF7_bit at TRISF.B7;
    const register unsigned short int TRISF6 = 6;
    sbit  TRISF6_bit at TRISF.B6;
    const register unsigned short int TRISF5 = 5;
    sbit  TRISF5_bit at TRISF.B5;
    const register unsigned short int TRISF4 = 4;
    sbit  TRISF4_bit at TRISF.B4;
    const register unsigned short int TRISF3 = 3;
    sbit  TRISF3_bit at TRISF.B3;
    const register unsigned short int TRISF2 = 2;
    sbit  TRISF2_bit at TRISF.B2;
    const register unsigned short int TRISF1 = 1;
    sbit  TRISF1_bit at TRISF.B1;
    const register unsigned short int TRISF0 = 0;
    sbit  TRISF0_bit at TRISF.B0;

    // TRISG bits
    const register unsigned short int TRISG4 = 4;
    sbit  TRISG4_bit at TRISG.B4;
    const register unsigned short int TRISG3 = 3;
    sbit  TRISG3_bit at TRISG.B3;
    const register unsigned short int TRISG2 = 2;
    sbit  TRISG2_bit at TRISG.B2;
    const register unsigned short int TRISG1 = 1;
    sbit  TRISG1_bit at TRISG.B1;
    const register unsigned short int TRISG0 = 0;
    sbit  TRISG0_bit at TRISG.B0;

    // TRISH bits
    const register unsigned short int TRISH7 = 7;
    sbit  TRISH7_bit at TRISH.B7;
    const register unsigned short int TRISH6 = 6;
    sbit  TRISH6_bit at TRISH.B6;
    const register unsigned short int TRISH5 = 5;
    sbit  TRISH5_bit at TRISH.B5;
    const register unsigned short int TRISH4 = 4;
    sbit  TRISH4_bit at TRISH.B4;
    const register unsigned short int TRISH3 = 3;
    sbit  TRISH3_bit at TRISH.B3;
    const register unsigned short int TRISH2 = 2;
    sbit  TRISH2_bit at TRISH.B2;
    const register unsigned short int TRISH1 = 1;
    sbit  TRISH1_bit at TRISH.B1;
    const register unsigned short int TRISH0 = 0;
    sbit  TRISH0_bit at TRISH.B0;

    // TRISJ bits
    const register unsigned short int TRISJ7 = 7;
    sbit  TRISJ7_bit at TRISJ.B7;
    const register unsigned short int TRISJ6 = 6;
    sbit  TRISJ6_bit at TRISJ.B6;
    const register unsigned short int TRISJ5 = 5;
    sbit  TRISJ5_bit at TRISJ.B5;
    const register unsigned short int TRISJ4 = 4;
    sbit  TRISJ4_bit at TRISJ.B4;
    const register unsigned short int TRISJ3 = 3;
    sbit  TRISJ3_bit at TRISJ.B3;
    const register unsigned short int TRISJ2 = 2;
    sbit  TRISJ2_bit at TRISJ.B2;
    const register unsigned short int TRISJ1 = 1;
    sbit  TRISJ1_bit at TRISJ.B1;
    const register unsigned short int TRISJ0 = 0;
    sbit  TRISJ0_bit at TRISJ.B0;

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
