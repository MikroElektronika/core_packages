// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x0000FFF8;

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

sfr unsigned short volatile PADCFG1          absolute 0x0F54;
sfr unsigned short volatile CTMUICON         absolute 0x0F55;
sfr unsigned short volatile CTMUCONL         absolute 0x0F56;
sfr unsigned short volatile CTMUCONH         absolute 0x0F57;
sfr unsigned short volatile ALRMVALL         absolute 0x0F58;
sfr unsigned short volatile ALRMVALH         absolute 0x0F59;
sfr unsigned short volatile ALRMRPT          absolute 0x0F5A;
sfr unsigned short volatile ALRMCFG          absolute 0x0F5B;
sfr unsigned short volatile RTCVALL          absolute 0x0F5C;
sfr unsigned short volatile RTCVALH          absolute 0x0F5D;
sfr unsigned short volatile RTCCAL           absolute 0x0F5E;
sfr unsigned short volatile RTCCFG           absolute 0x0F5F;
sfr unsigned short volatile RCSTA2           absolute 0x0F60;
sfr unsigned short volatile TXSTA2           absolute 0x0F61;
sfr unsigned short volatile TXREG2           absolute 0x0F62;
sfr unsigned short volatile RCREG2           absolute 0x0F63;
sfr unsigned short          SPBRG2           absolute 0x0F64;
sfr unsigned short volatile CCP2CON          absolute 0x0F65;
sfr unsigned short volatile ECCP2CON         absolute 0x0F65;
sfr unsigned short volatile CCP1CON          absolute 0x0F68;
sfr unsigned short volatile ECCP1CON         absolute 0x0F68;
sfr unsigned int   volatile CCPR1            absolute 0x0F69;
sfr unsigned short volatile CCPR1L           absolute 0x0F69;
sfr unsigned short volatile CCPR1H           absolute 0x0F6A;
sfr unsigned short volatile LCDDATA6         absolute 0x0F6C;
sfr unsigned short volatile LCDDATA7         absolute 0x0F6D;
sfr unsigned short volatile LCDDATA8         absolute 0x0F6E;
sfr unsigned short volatile LCDDATA9         absolute 0x0F6F;
sfr unsigned short volatile LCDDATA10        absolute 0x0F70;
sfr unsigned short volatile LCDDATA12        absolute 0x0F72;
sfr unsigned short volatile LCDDATA13        absolute 0x0F73;
sfr unsigned short volatile LCDDATA14        absolute 0x0F74;
sfr unsigned short volatile LCDDATA15        absolute 0x0F75;
sfr unsigned short volatile LCDDATA16        absolute 0x0F76;
sfr unsigned short volatile LCDDATA18        absolute 0x0F78;
sfr unsigned short volatile LCDDATA19        absolute 0x0F79;
sfr unsigned short volatile LCDDATA20        absolute 0x0F7A;
sfr unsigned short volatile LCDDATA21        absolute 0x0F7B;
sfr unsigned short volatile LCDDATA22        absolute 0x0F7C;
sfr unsigned short          BAUDCON          absolute 0x0F7E;
sfr unsigned short          BAUDCON1         absolute 0x0F7E;
sfr unsigned short          SPBRGH           absolute 0x0F7F;
sfr unsigned short          SPBRGH1          absolute 0x0F7F;
sfr unsigned short volatile LATA             absolute 0x0F89;
sfr unsigned short volatile LATB             absolute 0x0F8A;
sfr unsigned short volatile LATC             absolute 0x0F8B;
sfr unsigned short volatile LATD             absolute 0x0F8C;
sfr unsigned short volatile LATE             absolute 0x0F8D;
sfr unsigned short volatile LATF             absolute 0x0F8E;
sfr unsigned short volatile LATG             absolute 0x0F8F;
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
sfr unsigned short volatile LCDCON           absolute 0x0FA8;
sfr unsigned short volatile LCDSE0           absolute 0x0FA9;
sfr unsigned short volatile LCDPS            absolute 0x0FAA;
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
sfr unsigned short volatile T3CON            absolute 0x0FB1;
sfr unsigned short volatile TMR3L            absolute 0x0FB2;
sfr unsigned short volatile TMR3H            absolute 0x0FB3;
sfr unsigned short volatile CMCON            absolute 0x0FB4;
sfr unsigned short volatile CVRCON           absolute 0x0FB5;
sfr unsigned short volatile LCDSE1           absolute 0x0FB6;
sfr unsigned short volatile LCDSE2           absolute 0x0FB7;
sfr unsigned short volatile LCDSE3           absolute 0x0FB8;
sfr unsigned short volatile LCDSE4           absolute 0x0FB9;
sfr unsigned short volatile LCDDATA0         absolute 0x0FBB;
sfr unsigned short volatile LCDDATA1         absolute 0x0FBC;
sfr unsigned short volatile LCDDATA2         absolute 0x0FBD;
sfr unsigned short volatile LCDDATA3         absolute 0x0FBE;
sfr unsigned short volatile LCDDATA4         absolute 0x0FBF;
sfr unsigned short volatile ADCON2           absolute 0x0FC0;
sfr unsigned short volatile ADCON1           absolute 0x0FC1;
sfr unsigned short volatile ADCON0           absolute 0x0FC2;
sfr unsigned short volatile ADRESL           absolute 0x0FC3;
sfr unsigned short volatile ADRESH           absolute 0x0FC4;
sfr unsigned short volatile SSP1CON2         absolute 0x0FC5;
sfr unsigned short volatile SSPCON2          absolute 0x0FC5;
sfr unsigned short volatile SSP1CON1         absolute 0x0FC6;
sfr unsigned short volatile SSPCON1          absolute 0x0FC6;
sfr unsigned short volatile SSP1STAT         absolute 0x0FC7;
sfr unsigned short volatile SSPSTAT          absolute 0x0FC7;
sfr unsigned short volatile SSP1ADD          absolute 0x0FC8;
sfr unsigned short volatile SSPADD           absolute 0x0FC8;
sfr unsigned short volatile SSP1BUF          absolute 0x0FC9;
sfr unsigned short volatile SSPBUF           absolute 0x0FC9;
sfr unsigned short volatile T2CON            absolute 0x0FCA;
sfr unsigned short volatile PR2              absolute 0x0FCB;
sfr unsigned short volatile TMR2             absolute 0x0FCC;
sfr unsigned short volatile T1CON            absolute 0x0FCD;
sfr unsigned short volatile TMR1L            absolute 0x0FCE;
sfr unsigned short volatile TMR1H            absolute 0x0FCF;
sfr unsigned short volatile RCON             absolute 0x0FD0;
sfr unsigned short          WDTCON           absolute 0x0FD1;
sfr unsigned short volatile LCDREG           absolute 0x0FD2;
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
sfr unsigned short volatile CCPR2L           absolute 0x0F66;
sfr unsigned short volatile CCPR2H           absolute 0x0F67;
sfr unsigned short volatile PORTA            absolute 0x0F80;
sfr unsigned short volatile PORTB            absolute 0x0F81;
sfr unsigned short volatile PORTC            absolute 0x0F82;
sfr unsigned short volatile PORTD            absolute 0x0F83;
sfr unsigned short volatile PORTE            absolute 0x0F84;
sfr unsigned short volatile PORTF            absolute 0x0F85;
sfr unsigned short volatile PORTG            absolute 0x0F86;
sfr unsigned short volatile TRISA            absolute 0x0F92;
sfr unsigned short volatile TRISB            absolute 0x0F93;
sfr unsigned short volatile TRISC            absolute 0x0F94;
sfr unsigned short volatile TRISD            absolute 0x0F95;
sfr unsigned short volatile TRISE            absolute 0x0F96;
sfr unsigned short volatile TRISF            absolute 0x0F97;
sfr unsigned short volatile TRISG            absolute 0x0F98;
sfr unsigned int   volatile ADRES            absolute 0x0FC3;
sfr unsigned int            PROD             absolute 0x0FF3;
sfr unsigned short          PRODL            absolute 0x0FF3;
sfr unsigned short          PRODH            absolute 0x0FF4;
sfr unsigned int   volatile TOS              absolute 0x0FFD;
sfr unsigned short volatile TOSL             absolute 0x0FFD;
sfr unsigned short volatile TOSH             absolute 0x0FFE;
sfr unsigned short volatile TOSU             absolute 0x0FFF;

    // PADCFG1 bits
    const register unsigned short int RTSECSEL0 = 1;
    sbit  RTSECSEL0_bit at PADCFG1.B1;
    const register unsigned short int RTSECSEL1 = 2;
    sbit  RTSECSEL1_bit at PADCFG1.B2;

    // CTMUICON bits
    const register unsigned short int IRNG0 = 0;
    sbit  IRNG0_bit at CTMUICON.B0;
    const register unsigned short int IRNG1 = 1;
    sbit  IRNG1_bit at CTMUICON.B1;
    const register unsigned short int ITRIM0 = 2;
    sbit  ITRIM0_bit at CTMUICON.B2;
    const register unsigned short int ITRIM1 = 3;
    sbit  ITRIM1_bit at CTMUICON.B3;
    const register unsigned short int ITRIM2 = 4;
    sbit  ITRIM2_bit at CTMUICON.B4;
    const register unsigned short int ITRIM3 = 5;
    sbit  ITRIM3_bit at CTMUICON.B5;
    const register unsigned short int ITRIM4 = 6;
    sbit  ITRIM4_bit at CTMUICON.B6;
    const register unsigned short int ITRIM5 = 7;
    sbit  ITRIM5_bit at CTMUICON.B7;

    // CTMUCONL bits
    const register unsigned short int EDG1STAT = 0;
    sbit  EDG1STAT_bit at CTMUCONL.B0;
    const register unsigned short int EDG2STAT = 1;
    sbit  EDG2STAT_bit at CTMUCONL.B1;
    const register unsigned short int EDG1SEL0 = 2;
    sbit  EDG1SEL0_bit at CTMUCONL.B2;
    const register unsigned short int EDG1SEL1 = 3;
    sbit  EDG1SEL1_bit at CTMUCONL.B3;
    const register unsigned short int EDG1POL = 4;
    sbit  EDG1POL_bit at CTMUCONL.B4;
    const register unsigned short int EDG2SEL0 = 5;
    sbit  EDG2SEL0_bit at CTMUCONL.B5;
    const register unsigned short int EDG2SEL1 = 6;
    sbit  EDG2SEL1_bit at CTMUCONL.B6;
    const register unsigned short int EDG2POL = 7;
    sbit  EDG2POL_bit at CTMUCONL.B7;

    // CTMUCONH bits
    const register unsigned short int CTTRIG = 0;
    sbit  CTTRIG_bit at CTMUCONH.B0;
    const register unsigned short int IDISSEN = 1;
    sbit  IDISSEN_bit at CTMUCONH.B1;
    const register unsigned short int EDGSEQEN = 2;
    sbit  EDGSEQEN_bit at CTMUCONH.B2;
    const register unsigned short int EDGEN = 3;
    sbit  EDGEN_bit at CTMUCONH.B3;
    const register unsigned short int TGEN = 4;
    sbit  TGEN_bit at CTMUCONH.B4;
    const register unsigned short int CTMUSIDL = 5;
    sbit  CTMUSIDL_bit at CTMUCONH.B5;
    const register unsigned short int CTMUEN = 7;
    sbit  CTMUEN_bit at CTMUCONH.B7;

    // ALRMRPT bits
    const register unsigned short int ARPT0 = 0;
    sbit  ARPT0_bit at ALRMRPT.B0;
    const register unsigned short int ARPT1 = 1;
    sbit  ARPT1_bit at ALRMRPT.B1;
    const register unsigned short int ARPT2 = 2;
    sbit  ARPT2_bit at ALRMRPT.B2;
    const register unsigned short int ARPT3 = 3;
    sbit  ARPT3_bit at ALRMRPT.B3;
    const register unsigned short int ARPT4 = 4;
    sbit  ARPT4_bit at ALRMRPT.B4;
    const register unsigned short int ARPT5 = 5;
    sbit  ARPT5_bit at ALRMRPT.B5;
    const register unsigned short int ARPT6 = 6;
    sbit  ARPT6_bit at ALRMRPT.B6;
    const register unsigned short int ARPT7 = 7;
    sbit  ARPT7_bit at ALRMRPT.B7;

    // ALRMCFG bits
    const register unsigned short int CHIME = 6;
    sbit  CHIME_bit at ALRMCFG.B6;
    const register unsigned short int ALRMEN = 7;
    sbit  ALRMEN_bit at ALRMCFG.B7;
    const register unsigned short int ALRMPTR0 = 0;
    sbit  ALRMPTR0_bit at ALRMCFG.B0;
    const register unsigned short int ALRMPTR1 = 1;
    sbit  ALRMPTR1_bit at ALRMCFG.B1;
    const register unsigned short int AMASK0 = 2;
    sbit  AMASK0_bit at ALRMCFG.B2;
    const register unsigned short int AMASK1 = 3;
    sbit  AMASK1_bit at ALRMCFG.B3;
    const register unsigned short int AMASK2 = 4;
    sbit  AMASK2_bit at ALRMCFG.B4;
    const register unsigned short int AMASK3 = 5;
    sbit  AMASK3_bit at ALRMCFG.B5;

    // RTCCAL bits
    const register unsigned short int CAL0 = 0;
    sbit  CAL0_bit at RTCCAL.B0;
    const register unsigned short int CAL1 = 1;
    sbit  CAL1_bit at RTCCAL.B1;
    const register unsigned short int CAL2 = 2;
    sbit  CAL2_bit at RTCCAL.B2;
    const register unsigned short int CAL3 = 3;
    sbit  CAL3_bit at RTCCAL.B3;
    const register unsigned short int CAL4 = 4;
    sbit  CAL4_bit at RTCCAL.B4;
    const register unsigned short int CAL5 = 5;
    sbit  CAL5_bit at RTCCAL.B5;
    const register unsigned short int CAL6 = 6;
    sbit  CAL6_bit at RTCCAL.B6;
    const register unsigned short int CAL7 = 7;
    sbit  CAL7_bit at RTCCAL.B7;

    // RTCCFG bits
    const register unsigned short int RTCPTR0 = 0;
    sbit  RTCPTR0_bit at RTCCFG.B0;
    const register unsigned short int RTCPTR1 = 1;
    sbit  RTCPTR1_bit at RTCCFG.B1;
    const register unsigned short int RTCOE = 2;
    sbit  RTCOE_bit at RTCCFG.B2;
    const register unsigned short int HALFSEC = 3;
    sbit  HALFSEC_bit at RTCCFG.B3;
    const register unsigned short int RTCSYNC = 4;
    sbit  RTCSYNC_bit at RTCCFG.B4;
    const register unsigned short int RTCWREN = 5;
    sbit  RTCWREN_bit at RTCCFG.B5;
    const register unsigned short int RTCEN = 7;
    sbit  RTCEN_bit at RTCCFG.B7;

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
    const register unsigned short int RCD8 = 0;
    sbit  RCD8_bit at RCSTA2.B0;
    const register unsigned short int RC9 = 6;
    sbit  RC9_bit at RCSTA2.B6;
    const register unsigned short int NOT_RC8 = 6;
    sbit  NOT_RC8_bit at RCSTA2.B6;
    const register unsigned short int RC8_9 = 6;
    sbit  RC8_9_bit at RCSTA2.B6;
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

    // TXSTA2 bits
    const register unsigned short int TX9D = 0;
    sbit  TX9D_bit at TXSTA2.B0;
    const register unsigned short int TRMT = 1;
    sbit  TRMT_bit at TXSTA2.B1;
    const register unsigned short int BRGH = 2;
    sbit  BRGH_bit at TXSTA2.B2;
    const register unsigned short int SYNC = 4;
    sbit  SYNC_bit at TXSTA2.B4;
    const register unsigned short int TXEN = 5;
    sbit  TXEN_bit at TXSTA2.B5;
    const register unsigned short int TX9 = 6;
    sbit  TX9_bit at TXSTA2.B6;
    const register unsigned short int CSRC = 7;
    sbit  CSRC_bit at TXSTA2.B7;
    const register unsigned short int TXD8 = 0;
    sbit  TXD8_bit at TXSTA2.B0;
    const register unsigned short int TX8_9 = 6;
    sbit  TX8_9_bit at TXSTA2.B6;
    const register unsigned short int NOT_TX8 = 6;
    sbit  NOT_TX8_bit at TXSTA2.B6;
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

    // CCP2CON, ECCP2CON bits
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
    const register unsigned short int DCCP2Y = 4;
    sbit  DCCP2Y_bit at CCP2CON.B4;
    const register unsigned short int DCCP2X = 5;
    sbit  DCCP2X_bit at CCP2CON.B5;

    // CCP1CON, ECCP1CON bits
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
    const register unsigned short int DCCP1Y = 4;
    sbit  DCCP1Y_bit at CCP1CON.B4;
    const register unsigned short int DCCP1X = 5;
    sbit  DCCP1X_bit at CCP1CON.B5;

    // LCDDATA6 bits
    const register unsigned short int S00C1 = 0;
    sbit  S00C1_bit at LCDDATA6.B0;
    const register unsigned short int S01C1 = 1;
    sbit  S01C1_bit at LCDDATA6.B1;
    const register unsigned short int S02C1 = 2;
    sbit  S02C1_bit at LCDDATA6.B2;
    const register unsigned short int S03C1 = 3;
    sbit  S03C1_bit at LCDDATA6.B3;
    const register unsigned short int S04C1 = 4;
    sbit  S04C1_bit at LCDDATA6.B4;
    const register unsigned short int S05C1 = 5;
    sbit  S05C1_bit at LCDDATA6.B5;
    const register unsigned short int S06C1 = 6;
    sbit  S06C1_bit at LCDDATA6.B6;
    const register unsigned short int S07C1 = 7;
    sbit  S07C1_bit at LCDDATA6.B7;
    const register unsigned short int SEG0COM1 = 0;
    sbit  SEG0COM1_bit at LCDDATA6.B0;
    const register unsigned short int SEG1COM1 = 1;
    sbit  SEG1COM1_bit at LCDDATA6.B1;
    const register unsigned short int SEG2COM1 = 2;
    sbit  SEG2COM1_bit at LCDDATA6.B2;
    const register unsigned short int SEG3COM1 = 3;
    sbit  SEG3COM1_bit at LCDDATA6.B3;
    const register unsigned short int SEG4COM1 = 4;
    sbit  SEG4COM1_bit at LCDDATA6.B4;
    const register unsigned short int SEG5COM1 = 5;
    sbit  SEG5COM1_bit at LCDDATA6.B5;
    const register unsigned short int SEG6COM1 = 6;
    sbit  SEG6COM1_bit at LCDDATA6.B6;
    const register unsigned short int SEG7COM1 = 7;
    sbit  SEG7COM1_bit at LCDDATA6.B7;
    const register unsigned short int S0C1 = 0;
    sbit  S0C1_bit at LCDDATA6.B0;
    const register unsigned short int S1C1 = 1;
    sbit  S1C1_bit at LCDDATA6.B1;
    const register unsigned short int S2C1 = 2;
    sbit  S2C1_bit at LCDDATA6.B2;
    const register unsigned short int S3C1 = 3;
    sbit  S3C1_bit at LCDDATA6.B3;
    const register unsigned short int S4C1 = 4;
    sbit  S4C1_bit at LCDDATA6.B4;
    const register unsigned short int S5C1 = 5;
    sbit  S5C1_bit at LCDDATA6.B5;
    const register unsigned short int S6C1 = 6;
    sbit  S6C1_bit at LCDDATA6.B6;
    const register unsigned short int S7C1 = 7;
    sbit  S7C1_bit at LCDDATA6.B7;

    // LCDDATA7 bits
    const register unsigned short int S8C1 = 0;
    sbit  S8C1_bit at LCDDATA7.B0;
    const register unsigned short int S9C1 = 1;
    sbit  S9C1_bit at LCDDATA7.B1;
    const register unsigned short int S10C1 = 2;
    sbit  S10C1_bit at LCDDATA7.B2;
    const register unsigned short int S11C1 = 3;
    sbit  S11C1_bit at LCDDATA7.B3;
    const register unsigned short int S12C1 = 4;
    sbit  S12C1_bit at LCDDATA7.B4;
    const register unsigned short int S13C1 = 5;
    sbit  S13C1_bit at LCDDATA7.B5;
    const register unsigned short int S14C1 = 6;
    sbit  S14C1_bit at LCDDATA7.B6;
    const register unsigned short int S15C1 = 7;
    sbit  S15C1_bit at LCDDATA7.B7;
    const register unsigned short int SEG8COM1 = 0;
    sbit  SEG8COM1_bit at LCDDATA7.B0;
    const register unsigned short int SEG9COM1 = 1;
    sbit  SEG9COM1_bit at LCDDATA7.B1;
    const register unsigned short int SEG10COM1 = 2;
    sbit  SEG10COM1_bit at LCDDATA7.B2;
    const register unsigned short int SEG11COM1 = 3;
    sbit  SEG11COM1_bit at LCDDATA7.B3;
    const register unsigned short int SEG12COM1 = 4;
    sbit  SEG12COM1_bit at LCDDATA7.B4;
    const register unsigned short int SEG13COM1 = 5;
    sbit  SEG13COM1_bit at LCDDATA7.B5;
    const register unsigned short int SEG14COM1 = 6;
    sbit  SEG14COM1_bit at LCDDATA7.B6;
    const register unsigned short int SEG15COM1 = 7;
    sbit  SEG15COM1_bit at LCDDATA7.B7;
    const register unsigned short int S08C1 = 0;
    sbit  S08C1_bit at LCDDATA7.B0;
    const register unsigned short int S09C1 = 1;
    sbit  S09C1_bit at LCDDATA7.B1;

    // LCDDATA8 bits
    const register unsigned short int S16C1 = 0;
    sbit  S16C1_bit at LCDDATA8.B0;
    const register unsigned short int S17C1 = 1;
    sbit  S17C1_bit at LCDDATA8.B1;
    const register unsigned short int S18C1 = 2;
    sbit  S18C1_bit at LCDDATA8.B2;
    const register unsigned short int S19C1 = 3;
    sbit  S19C1_bit at LCDDATA8.B3;
    const register unsigned short int S20C1 = 4;
    sbit  S20C1_bit at LCDDATA8.B4;
    const register unsigned short int S21C1 = 5;
    sbit  S21C1_bit at LCDDATA8.B5;
    const register unsigned short int S22C1 = 6;
    sbit  S22C1_bit at LCDDATA8.B6;
    const register unsigned short int S23C1 = 7;
    sbit  S23C1_bit at LCDDATA8.B7;
    const register unsigned short int SEG16COM1 = 0;
    sbit  SEG16COM1_bit at LCDDATA8.B0;
    const register unsigned short int SEG17COM1 = 1;
    sbit  SEG17COM1_bit at LCDDATA8.B1;
    const register unsigned short int SEG18COM1 = 2;
    sbit  SEG18COM1_bit at LCDDATA8.B2;
    const register unsigned short int SEG19COM1 = 3;
    sbit  SEG19COM1_bit at LCDDATA8.B3;
    const register unsigned short int SEG20COM1 = 4;
    sbit  SEG20COM1_bit at LCDDATA8.B4;
    const register unsigned short int SEG21COM1 = 5;
    sbit  SEG21COM1_bit at LCDDATA8.B5;
    const register unsigned short int SEG22COM1 = 6;
    sbit  SEG22COM1_bit at LCDDATA8.B6;
    const register unsigned short int SEG23COM1 = 7;
    sbit  SEG23COM1_bit at LCDDATA8.B7;

    // LCDDATA9 bits
    const register unsigned short int S24C1 = 0;
    sbit  S24C1_bit at LCDDATA9.B0;
    const register unsigned short int S25C1 = 1;
    sbit  S25C1_bit at LCDDATA9.B1;
    const register unsigned short int S26C1 = 2;
    sbit  S26C1_bit at LCDDATA9.B2;
    const register unsigned short int S27C1 = 3;
    sbit  S27C1_bit at LCDDATA9.B3;
    const register unsigned short int S28C1 = 4;
    sbit  S28C1_bit at LCDDATA9.B4;
    const register unsigned short int S29C1 = 5;
    sbit  S29C1_bit at LCDDATA9.B5;
    const register unsigned short int S30C1 = 6;
    sbit  S30C1_bit at LCDDATA9.B6;
    const register unsigned short int S31C1 = 7;
    sbit  S31C1_bit at LCDDATA9.B7;
    const register unsigned short int SEG24COM1 = 0;
    sbit  SEG24COM1_bit at LCDDATA9.B0;
    const register unsigned short int SEG25COM1 = 1;
    sbit  SEG25COM1_bit at LCDDATA9.B1;
    const register unsigned short int SEG26COM1 = 2;
    sbit  SEG26COM1_bit at LCDDATA9.B2;
    const register unsigned short int SEG27COM1 = 3;
    sbit  SEG27COM1_bit at LCDDATA9.B3;
    const register unsigned short int SEG28COM1 = 4;
    sbit  SEG28COM1_bit at LCDDATA9.B4;
    const register unsigned short int SEG29COM1 = 5;
    sbit  SEG29COM1_bit at LCDDATA9.B5;
    const register unsigned short int SEG30COM1 = 6;
    sbit  SEG30COM1_bit at LCDDATA9.B6;
    const register unsigned short int SEG31COM1 = 7;
    sbit  SEG31COM1_bit at LCDDATA9.B7;

    // LCDDATA10 bits
    const register unsigned short int S32C1 = 0;
    sbit  S32C1_bit at LCDDATA10.B0;
    const register unsigned short int SEG32COM1 = 0;
    sbit  SEG32COM1_bit at LCDDATA10.B0;

    // LCDDATA12 bits
    const register unsigned short int S00C2 = 0;
    sbit  S00C2_bit at LCDDATA12.B0;
    const register unsigned short int S01C2 = 1;
    sbit  S01C2_bit at LCDDATA12.B1;
    const register unsigned short int S02C2 = 2;
    sbit  S02C2_bit at LCDDATA12.B2;
    const register unsigned short int S03C2 = 3;
    sbit  S03C2_bit at LCDDATA12.B3;
    const register unsigned short int S04C2 = 4;
    sbit  S04C2_bit at LCDDATA12.B4;
    const register unsigned short int S05C2 = 5;
    sbit  S05C2_bit at LCDDATA12.B5;
    const register unsigned short int S06C2 = 6;
    sbit  S06C2_bit at LCDDATA12.B6;
    const register unsigned short int S07C2 = 7;
    sbit  S07C2_bit at LCDDATA12.B7;
    const register unsigned short int SEG0COM2 = 0;
    sbit  SEG0COM2_bit at LCDDATA12.B0;
    const register unsigned short int SEG1COM2 = 1;
    sbit  SEG1COM2_bit at LCDDATA12.B1;
    const register unsigned short int SEG2COM2 = 2;
    sbit  SEG2COM2_bit at LCDDATA12.B2;
    const register unsigned short int SEG3COM2 = 3;
    sbit  SEG3COM2_bit at LCDDATA12.B3;
    const register unsigned short int SEG4COM2 = 4;
    sbit  SEG4COM2_bit at LCDDATA12.B4;
    const register unsigned short int SEG5COM2 = 5;
    sbit  SEG5COM2_bit at LCDDATA12.B5;
    const register unsigned short int SEG6COM2 = 6;
    sbit  SEG6COM2_bit at LCDDATA12.B6;
    const register unsigned short int SEG7COM2 = 7;
    sbit  SEG7COM2_bit at LCDDATA12.B7;
    const register unsigned short int S0C2 = 0;
    sbit  S0C2_bit at LCDDATA12.B0;
    const register unsigned short int S1C2 = 1;
    sbit  S1C2_bit at LCDDATA12.B1;
    const register unsigned short int S2C2 = 2;
    sbit  S2C2_bit at LCDDATA12.B2;
    const register unsigned short int S3C2 = 3;
    sbit  S3C2_bit at LCDDATA12.B3;
    const register unsigned short int S4C2 = 4;
    sbit  S4C2_bit at LCDDATA12.B4;
    const register unsigned short int S5C2 = 5;
    sbit  S5C2_bit at LCDDATA12.B5;
    const register unsigned short int S6C2 = 6;
    sbit  S6C2_bit at LCDDATA12.B6;
    const register unsigned short int S7C2 = 7;
    sbit  S7C2_bit at LCDDATA12.B7;

    // LCDDATA13 bits
    const register unsigned short int S8C2 = 0;
    sbit  S8C2_bit at LCDDATA13.B0;
    const register unsigned short int S9C2 = 1;
    sbit  S9C2_bit at LCDDATA13.B1;
    const register unsigned short int S10C2 = 2;
    sbit  S10C2_bit at LCDDATA13.B2;
    const register unsigned short int S11C2 = 3;
    sbit  S11C2_bit at LCDDATA13.B3;
    const register unsigned short int S12C2 = 4;
    sbit  S12C2_bit at LCDDATA13.B4;
    const register unsigned short int S13C2 = 5;
    sbit  S13C2_bit at LCDDATA13.B5;
    const register unsigned short int S14C2 = 6;
    sbit  S14C2_bit at LCDDATA13.B6;
    const register unsigned short int S15C2 = 7;
    sbit  S15C2_bit at LCDDATA13.B7;
    const register unsigned short int SEG8COM2 = 0;
    sbit  SEG8COM2_bit at LCDDATA13.B0;
    const register unsigned short int SEG9COM2 = 1;
    sbit  SEG9COM2_bit at LCDDATA13.B1;
    const register unsigned short int SEG10COM2 = 2;
    sbit  SEG10COM2_bit at LCDDATA13.B2;
    const register unsigned short int SEG11COM2 = 3;
    sbit  SEG11COM2_bit at LCDDATA13.B3;
    const register unsigned short int SEG12COM2 = 4;
    sbit  SEG12COM2_bit at LCDDATA13.B4;
    const register unsigned short int SEG13COM2 = 5;
    sbit  SEG13COM2_bit at LCDDATA13.B5;
    const register unsigned short int SEG14COM2 = 6;
    sbit  SEG14COM2_bit at LCDDATA13.B6;
    const register unsigned short int SEG15COM2 = 7;
    sbit  SEG15COM2_bit at LCDDATA13.B7;
    const register unsigned short int S08C2 = 0;
    sbit  S08C2_bit at LCDDATA13.B0;
    const register unsigned short int S09C2 = 1;
    sbit  S09C2_bit at LCDDATA13.B1;

    // LCDDATA14 bits
    const register unsigned short int S16C2 = 0;
    sbit  S16C2_bit at LCDDATA14.B0;
    const register unsigned short int S17C2 = 1;
    sbit  S17C2_bit at LCDDATA14.B1;
    const register unsigned short int S18C2 = 2;
    sbit  S18C2_bit at LCDDATA14.B2;
    const register unsigned short int S19C2 = 3;
    sbit  S19C2_bit at LCDDATA14.B3;
    const register unsigned short int S20C2 = 4;
    sbit  S20C2_bit at LCDDATA14.B4;
    const register unsigned short int S21C2 = 5;
    sbit  S21C2_bit at LCDDATA14.B5;
    const register unsigned short int S22C2 = 6;
    sbit  S22C2_bit at LCDDATA14.B6;
    const register unsigned short int S23C2 = 7;
    sbit  S23C2_bit at LCDDATA14.B7;
    const register unsigned short int SEG16COM2 = 0;
    sbit  SEG16COM2_bit at LCDDATA14.B0;
    const register unsigned short int SEG17COM2 = 1;
    sbit  SEG17COM2_bit at LCDDATA14.B1;
    const register unsigned short int SEG18COM2 = 2;
    sbit  SEG18COM2_bit at LCDDATA14.B2;
    const register unsigned short int SEG19COM2 = 3;
    sbit  SEG19COM2_bit at LCDDATA14.B3;
    const register unsigned short int SEG20COM2 = 4;
    sbit  SEG20COM2_bit at LCDDATA14.B4;
    const register unsigned short int SEG21COM2 = 5;
    sbit  SEG21COM2_bit at LCDDATA14.B5;
    const register unsigned short int SEG22COM2 = 6;
    sbit  SEG22COM2_bit at LCDDATA14.B6;
    const register unsigned short int SEG23COM2 = 7;
    sbit  SEG23COM2_bit at LCDDATA14.B7;

    // LCDDATA15 bits
    const register unsigned short int S24C2 = 0;
    sbit  S24C2_bit at LCDDATA15.B0;
    const register unsigned short int S25C2 = 1;
    sbit  S25C2_bit at LCDDATA15.B1;
    const register unsigned short int S26C2 = 2;
    sbit  S26C2_bit at LCDDATA15.B2;
    const register unsigned short int S27C2 = 3;
    sbit  S27C2_bit at LCDDATA15.B3;
    const register unsigned short int S28C2 = 4;
    sbit  S28C2_bit at LCDDATA15.B4;
    const register unsigned short int S29C2 = 5;
    sbit  S29C2_bit at LCDDATA15.B5;
    const register unsigned short int S30C2 = 6;
    sbit  S30C2_bit at LCDDATA15.B6;
    const register unsigned short int S31C2 = 7;
    sbit  S31C2_bit at LCDDATA15.B7;
    const register unsigned short int SEG24COM2 = 0;
    sbit  SEG24COM2_bit at LCDDATA15.B0;
    const register unsigned short int SEG25COM2 = 1;
    sbit  SEG25COM2_bit at LCDDATA15.B1;
    const register unsigned short int SEG26COM2 = 2;
    sbit  SEG26COM2_bit at LCDDATA15.B2;
    const register unsigned short int SEG27COM2 = 3;
    sbit  SEG27COM2_bit at LCDDATA15.B3;
    const register unsigned short int SEG28COM2 = 4;
    sbit  SEG28COM2_bit at LCDDATA15.B4;
    const register unsigned short int SEG29COM2 = 5;
    sbit  SEG29COM2_bit at LCDDATA15.B5;
    const register unsigned short int SEG30COM2 = 6;
    sbit  SEG30COM2_bit at LCDDATA15.B6;
    const register unsigned short int SEG31COM2 = 7;
    sbit  SEG31COM2_bit at LCDDATA15.B7;

    // LCDDATA16 bits
    const register unsigned short int S32C2 = 0;
    sbit  S32C2_bit at LCDDATA16.B0;
    const register unsigned short int SEG32COM2 = 0;
    sbit  SEG32COM2_bit at LCDDATA16.B0;

    // LCDDATA18 bits
    const register unsigned short int S00C3 = 0;
    sbit  S00C3_bit at LCDDATA18.B0;
    const register unsigned short int S01C3 = 1;
    sbit  S01C3_bit at LCDDATA18.B1;
    const register unsigned short int S02C3 = 2;
    sbit  S02C3_bit at LCDDATA18.B2;
    const register unsigned short int S03C3 = 3;
    sbit  S03C3_bit at LCDDATA18.B3;
    const register unsigned short int S04C3 = 4;
    sbit  S04C3_bit at LCDDATA18.B4;
    const register unsigned short int S05C3 = 5;
    sbit  S05C3_bit at LCDDATA18.B5;
    const register unsigned short int S06C3 = 6;
    sbit  S06C3_bit at LCDDATA18.B6;
    const register unsigned short int S07C3 = 7;
    sbit  S07C3_bit at LCDDATA18.B7;
    const register unsigned short int SEG00COM3 = 0;
    sbit  SEG00COM3_bit at LCDDATA18.B0;
    const register unsigned short int SEG01COM3 = 1;
    sbit  SEG01COM3_bit at LCDDATA18.B1;
    const register unsigned short int SEG02COM3 = 2;
    sbit  SEG02COM3_bit at LCDDATA18.B2;
    const register unsigned short int SEG03COM3 = 3;
    sbit  SEG03COM3_bit at LCDDATA18.B3;
    const register unsigned short int SEG04COM3 = 4;
    sbit  SEG04COM3_bit at LCDDATA18.B4;
    const register unsigned short int SEG05COM3 = 5;
    sbit  SEG05COM3_bit at LCDDATA18.B5;
    const register unsigned short int SEG06COM3 = 6;
    sbit  SEG06COM3_bit at LCDDATA18.B6;
    const register unsigned short int SEG07COM3 = 7;
    sbit  SEG07COM3_bit at LCDDATA18.B7;
    const register unsigned short int S0C3 = 0;
    sbit  S0C3_bit at LCDDATA18.B0;
    const register unsigned short int S1C3 = 1;
    sbit  S1C3_bit at LCDDATA18.B1;
    const register unsigned short int S2C3 = 2;
    sbit  S2C3_bit at LCDDATA18.B2;
    const register unsigned short int S3C3 = 3;
    sbit  S3C3_bit at LCDDATA18.B3;
    const register unsigned short int S4C3 = 4;
    sbit  S4C3_bit at LCDDATA18.B4;
    const register unsigned short int S5C3 = 5;
    sbit  S5C3_bit at LCDDATA18.B5;
    const register unsigned short int S6C3 = 6;
    sbit  S6C3_bit at LCDDATA18.B6;
    const register unsigned short int S7C3 = 7;
    sbit  S7C3_bit at LCDDATA18.B7;

    // LCDDATA19 bits
    const register unsigned short int S8C3 = 0;
    sbit  S8C3_bit at LCDDATA19.B0;
    const register unsigned short int S9C3 = 1;
    sbit  S9C3_bit at LCDDATA19.B1;
    const register unsigned short int S10C3 = 2;
    sbit  S10C3_bit at LCDDATA19.B2;
    const register unsigned short int S11C3 = 3;
    sbit  S11C3_bit at LCDDATA19.B3;
    const register unsigned short int S12C3 = 4;
    sbit  S12C3_bit at LCDDATA19.B4;
    const register unsigned short int S13C3 = 5;
    sbit  S13C3_bit at LCDDATA19.B5;
    const register unsigned short int S14C3 = 6;
    sbit  S14C3_bit at LCDDATA19.B6;
    const register unsigned short int S15C3 = 7;
    sbit  S15C3_bit at LCDDATA19.B7;
    const register unsigned short int SEG8COM3 = 0;
    sbit  SEG8COM3_bit at LCDDATA19.B0;
    const register unsigned short int SEG9COM3 = 1;
    sbit  SEG9COM3_bit at LCDDATA19.B1;
    const register unsigned short int SEG10COM3 = 2;
    sbit  SEG10COM3_bit at LCDDATA19.B2;
    const register unsigned short int SEG11COM3 = 3;
    sbit  SEG11COM3_bit at LCDDATA19.B3;
    const register unsigned short int SEG12COM3 = 4;
    sbit  SEG12COM3_bit at LCDDATA19.B4;
    const register unsigned short int SEG13COM3 = 5;
    sbit  SEG13COM3_bit at LCDDATA19.B5;
    const register unsigned short int SEG14COM3 = 6;
    sbit  SEG14COM3_bit at LCDDATA19.B6;
    const register unsigned short int SEG15COM3 = 7;
    sbit  SEG15COM3_bit at LCDDATA19.B7;
    const register unsigned short int S08C3 = 0;
    sbit  S08C3_bit at LCDDATA19.B0;
    const register unsigned short int S09C3 = 1;
    sbit  S09C3_bit at LCDDATA19.B1;

    // LCDDATA20 bits
    const register unsigned short int S16C3 = 0;
    sbit  S16C3_bit at LCDDATA20.B0;
    const register unsigned short int S17C3 = 1;
    sbit  S17C3_bit at LCDDATA20.B1;
    const register unsigned short int S18C3 = 2;
    sbit  S18C3_bit at LCDDATA20.B2;
    const register unsigned short int S19C3 = 3;
    sbit  S19C3_bit at LCDDATA20.B3;
    const register unsigned short int S20C3 = 4;
    sbit  S20C3_bit at LCDDATA20.B4;
    const register unsigned short int S21C3 = 5;
    sbit  S21C3_bit at LCDDATA20.B5;
    const register unsigned short int S22C3 = 6;
    sbit  S22C3_bit at LCDDATA20.B6;
    const register unsigned short int S23C3 = 7;
    sbit  S23C3_bit at LCDDATA20.B7;
    const register unsigned short int SEG16COM3 = 0;
    sbit  SEG16COM3_bit at LCDDATA20.B0;
    const register unsigned short int SEG17COM3 = 1;
    sbit  SEG17COM3_bit at LCDDATA20.B1;
    const register unsigned short int SEG18COM3 = 2;
    sbit  SEG18COM3_bit at LCDDATA20.B2;
    const register unsigned short int SEG19COM3 = 3;
    sbit  SEG19COM3_bit at LCDDATA20.B3;
    const register unsigned short int SEG20COM3 = 4;
    sbit  SEG20COM3_bit at LCDDATA20.B4;
    const register unsigned short int SEG21COM3 = 5;
    sbit  SEG21COM3_bit at LCDDATA20.B5;
    const register unsigned short int SEG22COM3 = 6;
    sbit  SEG22COM3_bit at LCDDATA20.B6;
    const register unsigned short int SEG23COM3 = 7;
    sbit  SEG23COM3_bit at LCDDATA20.B7;

    // LCDDATA21 bits
    const register unsigned short int S24C3 = 0;
    sbit  S24C3_bit at LCDDATA21.B0;
    const register unsigned short int S25C3 = 1;
    sbit  S25C3_bit at LCDDATA21.B1;
    const register unsigned short int S26C3 = 2;
    sbit  S26C3_bit at LCDDATA21.B2;
    const register unsigned short int S27C3 = 3;
    sbit  S27C3_bit at LCDDATA21.B3;
    const register unsigned short int S28C3 = 4;
    sbit  S28C3_bit at LCDDATA21.B4;
    const register unsigned short int S29C3 = 5;
    sbit  S29C3_bit at LCDDATA21.B5;
    const register unsigned short int S30C3 = 6;
    sbit  S30C3_bit at LCDDATA21.B6;
    const register unsigned short int S31C3 = 7;
    sbit  S31C3_bit at LCDDATA21.B7;
    const register unsigned short int SEG24COM3 = 0;
    sbit  SEG24COM3_bit at LCDDATA21.B0;
    const register unsigned short int SEG25COM3 = 1;
    sbit  SEG25COM3_bit at LCDDATA21.B1;
    const register unsigned short int SEG26COM3 = 2;
    sbit  SEG26COM3_bit at LCDDATA21.B2;
    const register unsigned short int SEG27COM3 = 3;
    sbit  SEG27COM3_bit at LCDDATA21.B3;
    const register unsigned short int SEG28COM3 = 4;
    sbit  SEG28COM3_bit at LCDDATA21.B4;
    const register unsigned short int SEG29COM3 = 5;
    sbit  SEG29COM3_bit at LCDDATA21.B5;
    const register unsigned short int SEG30COM3 = 6;
    sbit  SEG30COM3_bit at LCDDATA21.B6;
    const register unsigned short int SEG31COM3 = 7;
    sbit  SEG31COM3_bit at LCDDATA21.B7;

    // LCDDATA22 bits
    const register unsigned short int S32C3 = 0;
    sbit  S32C3_bit at LCDDATA22.B0;
    const register unsigned short int SEG32COM3 = 0;
    sbit  SEG32COM3_bit at LCDDATA22.B0;

    // BAUDCON, BAUDCON1 bits
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
    const register unsigned short int RCMT = 6;
    sbit  RCMT_bit at BAUDCON.B6;
    const register unsigned short int ABDOVF = 7;
    sbit  ABDOVF_bit at BAUDCON.B7;
    const register unsigned short int RCIDL = 6;
    sbit  RCIDL_bit at BAUDCON.B6;

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
    const register unsigned short int TOCKI = 4;
    sbit  TOCKI_bit at PORTA.B4;

    // Alternative bit function
    const register unsigned short int AN4 = 5;
    sbit  AN4_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int OSC2 = 6;
    sbit  OSC2_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int OSC1 = 7;
    sbit  OSC1_bit at PORTA.B7;

    // Alternative bit function
    const register unsigned short int SEG18 = 1;
    sbit  SEG18_bit at PORTA.B1;

    // Alternative bit function
    const register unsigned short int VREFM = 2;
    sbit  VREFM_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int VREFP = 3;
    sbit  VREFP_bit at PORTA.B3;

    // Alternative bit function
    const register unsigned short int SEG14 = 4;
    sbit  SEG14_bit at PORTA.B4;

    // Alternative bit function
    const register unsigned short int SEG15 = 5;
    sbit  SEG15_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int CLKO = 6;
    sbit  CLKO_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int CLKI = 7;
    sbit  CLKI_bit at PORTA.B7;

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
    const register unsigned short int SEG30 = 0;
    sbit  SEG30_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int SEG8 = 1;
    sbit  SEG8_bit at PORTB.B1;

    // Alternative bit function
    const register unsigned short int SEG9 = 2;
    sbit  SEG9_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int SEG10 = 3;
    sbit  SEG10_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int SEG11 = 4;
    sbit  SEG11_bit at PORTB.B4;

    // Alternative bit function
    const register unsigned short int SEG29 = 5;
    sbit  SEG29_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int PGC = 6;
    sbit  PGC_bit at PORTB.B6;

    // Alternative bit function
    const register unsigned short int PGD = 7;
    sbit  PGD_bit at PORTB.B7;

    // Alternative bit function
    const register unsigned short int CTED1 = 2;
    sbit  CTED1_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int CTED2 = 3;
    sbit  CTED2_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int T1OSO = 0;
    sbit  T1OSO_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int T1OSI = 1;
    sbit  T1OSI_bit at PORTC.B1;

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
    const register unsigned short int T13CKI = 0;
    sbit  T13CKI_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int CCP2_PORTC = 1;
    sbit  CCP2_PORTC_bit at PORTC.B1;

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
    const register unsigned short int SEG32 = 1;
    sbit  SEG32_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int SEG13 = 2;
    sbit  SEG13_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int SEG17 = 3;
    sbit  SEG17_bit at PORTC.B3;

    // Alternative bit function
    const register unsigned short int SEG16 = 4;
    sbit  SEG16_bit at PORTC.B4;

    // Alternative bit function
    const register unsigned short int SEG12 = 5;
    sbit  SEG12_bit at PORTC.B5;

    // Alternative bit function
    const register unsigned short int SEG27 = 6;
    sbit  SEG27_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int SEG28 = 7;
    sbit  SEG28_bit at PORTC.B7;

    // Alternative bit function
    const register unsigned short int SEG0 = 0;
    sbit  SEG0_bit at PORTD.B0;

    // Alternative bit function
    const register unsigned short int SEG1 = 1;
    sbit  SEG1_bit at PORTD.B1;

    // Alternative bit function
    const register unsigned short int SEG2 = 2;
    sbit  SEG2_bit at PORTD.B2;

    // Alternative bit function
    const register unsigned short int SEG3 = 3;
    sbit  SEG3_bit at PORTD.B3;

    // Alternative bit function
    const register unsigned short int SEG4 = 4;
    sbit  SEG4_bit at PORTD.B4;

    // Alternative bit function
    const register unsigned short int SEG5 = 5;
    sbit  SEG5_bit at PORTD.B5;

    // Alternative bit function
    const register unsigned short int SEG6 = 6;
    sbit  SEG6_bit at PORTD.B6;

    // Alternative bit function
    const register unsigned short int SEG7 = 7;
    sbit  SEG7_bit at PORTD.B7;

    // Alternative bit function
    const register unsigned short int CTPLS = 0;
    sbit  CTPLS_bit at PORTD.B0;

    // Alternative bit function
    const register unsigned short int LCDBIAS1 = 0;
    sbit  LCDBIAS1_bit at PORTE.B0;

    // Alternative bit function
    const register unsigned short int LCDBIAS2 = 1;
    sbit  LCDBIAS2_bit at PORTE.B1;

    // Alternative bit function
    const register unsigned short int COM0 = 3;
    sbit  COM0_bit at PORTE.B3;

    // Alternative bit function
    const register unsigned short int COM1 = 4;
    sbit  COM1_bit at PORTE.B4;

    // Alternative bit function
    const register unsigned short int COM2 = 5;
    sbit  COM2_bit at PORTE.B5;

    // Alternative bit function
    const register unsigned short int COM3 = 6;
    sbit  COM3_bit at PORTE.B6;

    // Alternative bit function
    const register unsigned short int CCP2_PORTE = 7;
    sbit  CCP2_PORTE_bit at PORTE.B7;

    // Alternative bit function
    const register unsigned short int SEG31 = 7;
    sbit  SEG31_bit at PORTE.B7;

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
    const register unsigned short int AN5 = 7;
    sbit  AN5_bit at PORTF.B7;

    // Alternative bit function
    const register unsigned short int C2OUT_PORTF = 1;
    sbit  C2OUT_PORTF_bit at PORTF.B1;

    // Alternative bit function
    const register unsigned short int C1OUT_PORTF = 2;
    sbit  C1OUT_PORTF_bit at PORTF.B2;

    // Alternative bit function
    const register unsigned short int C2INB = 3;
    sbit  C2INB_bit at PORTF.B3;

    // Alternative bit function
    const register unsigned short int C2INA = 4;
    sbit  C2INA_bit at PORTF.B4;

    // Alternative bit function
    const register unsigned short int C1INB = 5;
    sbit  C1INB_bit at PORTF.B5;

    // Alternative bit function
    const register unsigned short int C1INA = 6;
    sbit  C1INA_bit at PORTF.B6;

    // Alternative bit function
    const register unsigned short int SS1 = 7;
    sbit  SS1_bit at PORTF.B7;

    // Alternative bit function
    const register unsigned short int SEG19 = 1;
    sbit  SEG19_bit at PORTF.B1;

    // Alternative bit function
    const register unsigned short int SEG20 = 2;
    sbit  SEG20_bit at PORTF.B2;

    // Alternative bit function
    const register unsigned short int SEG21 = 3;
    sbit  SEG21_bit at PORTF.B3;

    // Alternative bit function
    const register unsigned short int SEG22 = 4;
    sbit  SEG22_bit at PORTF.B4;

    // Alternative bit function
    const register unsigned short int SEG23 = 5;
    sbit  SEG23_bit at PORTF.B5;

    // Alternative bit function
    const register unsigned short int SEG24 = 6;
    sbit  SEG24_bit at PORTF.B6;

    // Alternative bit function
    const register unsigned short int SEG25 = 7;
    sbit  SEG25_bit at PORTF.B7;

    // Alternative bit function
    const register unsigned short int CVREF = 5;
    sbit  CVREF_bit at PORTF.B5;

    // Alternative bit function
    const register unsigned short int RJPU = 5;
    sbit  RJPU_bit at PORTG.B5;

    // Alternative bit function
    const register unsigned short int REPU = 6;
    sbit  REPU_bit at PORTG.B6;

    // Alternative bit function
    const register unsigned short int RDPU = 7;
    sbit  RDPU_bit at PORTG.B7;

    // Alternative bit function
    const register unsigned short int LCDBIAS0 = 0;
    sbit  LCDBIAS0_bit at PORTG.B0;

    // Alternative bit function
    const register unsigned short int CK2 = 1;
    sbit  CK2_bit at PORTG.B1;

    // Alternative bit function
    const register unsigned short int DT2 = 2;
    sbit  DT2_bit at PORTG.B2;

    // Alternative bit function
    const register unsigned short int VLCAP2 = 3;
    sbit  VLCAP2_bit at PORTG.B3;

    // Alternative bit function
    const register unsigned short int SEG26 = 4;
    sbit  SEG26_bit at PORTG.B4;

    // Alternative bit function
    const register unsigned short int TX2 = 1;
    sbit  TX2_bit at PORTG.B1;

    // Alternative bit function
    const register unsigned short int RX2 = 2;
    sbit  RX2_bit at PORTG.B2;

    // Alternative bit function
    const register unsigned short int RTCC = 4;
    sbit  RTCC_bit at PORTG.B4;

    // Alternative bit function
    const register unsigned short int VLCAP1 = 2;
    sbit  VLCAP1_bit at PORTG.B2;

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
    const register unsigned short int U1OD = 6;
    sbit  U1OD_bit at LATG.B6;
    const register unsigned short int U2OD = 7;
    sbit  U2OD_bit at LATG.B7;

    // Alternative bit function
    const register unsigned short int CCP1OD = 5;
    sbit  CCP1OD_bit at TRISG.B5;

    // Alternative bit function
    const register unsigned short int CCP2OD = 6;
    sbit  CCP2OD_bit at TRISG.B6;

    // Alternative bit function
    const register unsigned short int SPIOD = 7;
    sbit  SPIOD_bit at TRISG.B7;

    // OSCTUNE bits
    const register unsigned short int PLLEN = 6;
    sbit  PLLEN_bit at OSCTUNE.B6;
    const register unsigned short int INTSRC = 7;
    sbit  INTSRC_bit at OSCTUNE.B7;
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
    const register unsigned short int SSPIE = 3;
    sbit  SSPIE_bit at PIE1.B3;
    const register unsigned short int TX1IE = 4;
    sbit  TX1IE_bit at PIE1.B4;
    const register unsigned short int RC1IE = 5;
    sbit  RC1IE_bit at PIE1.B5;
    const register unsigned short int ADIE = 6;
    sbit  ADIE_bit at PIE1.B6;
    const register unsigned short int SSP1IE = 3;
    sbit  SSP1IE_bit at PIE1.B3;
    const register unsigned short int TXIE = 4;
    sbit  TXIE_bit at PIE1.B4;
    const register unsigned short int RCIE = 5;
    sbit  RCIE_bit at PIE1.B5;

    // PIR1 bits
    const register unsigned short int TMR1IF = 0;
    sbit  TMR1IF_bit at PIR1.B0;
    const register unsigned short int TMR2IF = 1;
    sbit  TMR2IF_bit at PIR1.B1;
    const register unsigned short int SSPIF = 3;
    sbit  SSPIF_bit at PIR1.B3;
    const register unsigned short int TX1IF = 4;
    sbit  TX1IF_bit at PIR1.B4;
    const register unsigned short int RC1IF = 5;
    sbit  RC1IF_bit at PIR1.B5;
    const register unsigned short int ADIF = 6;
    sbit  ADIF_bit at PIR1.B6;
    const register unsigned short int SSP1IF = 3;
    sbit  SSP1IF_bit at PIR1.B3;
    const register unsigned short int TXIF = 4;
    sbit  TXIF_bit at PIR1.B4;
    const register unsigned short int RCIF = 5;
    sbit  RCIF_bit at PIR1.B5;

    // IPR1 bits
    const register unsigned short int TMR1IP = 0;
    sbit  TMR1IP_bit at IPR1.B0;
    const register unsigned short int TMR2IP = 1;
    sbit  TMR2IP_bit at IPR1.B1;
    const register unsigned short int SSPIP = 3;
    sbit  SSPIP_bit at IPR1.B3;
    const register unsigned short int TX1IP = 4;
    sbit  TX1IP_bit at IPR1.B4;
    const register unsigned short int RC1IP = 5;
    sbit  RC1IP_bit at IPR1.B5;
    const register unsigned short int ADIP = 6;
    sbit  ADIP_bit at IPR1.B6;
    const register unsigned short int SSP1IP = 3;
    sbit  SSP1IP_bit at IPR1.B3;
    const register unsigned short int TXIP = 4;
    sbit  TXIP_bit at IPR1.B4;
    const register unsigned short int RCIP = 5;
    sbit  RCIP_bit at IPR1.B5;

    // PIE2 bits
    const register unsigned short int TMR3IE = 1;
    sbit  TMR3IE_bit at PIE2.B1;
    const register unsigned short int LVDIE = 2;
    sbit  LVDIE_bit at PIE2.B2;
    const register unsigned short int BCLIE = 3;
    sbit  BCLIE_bit at PIE2.B3;
    const register unsigned short int CMIE = 6;
    sbit  CMIE_bit at PIE2.B6;
    const register unsigned short int OSCFIE = 7;
    sbit  OSCFIE_bit at PIE2.B7;
    const register unsigned short int BCL1IE = 3;
    sbit  BCL1IE_bit at PIE2.B3;

    // PIR2 bits
    const register unsigned short int TMR3IF = 1;
    sbit  TMR3IF_bit at PIR2.B1;
    const register unsigned short int LVDIF = 2;
    sbit  LVDIF_bit at PIR2.B2;
    const register unsigned short int BCLIF = 3;
    sbit  BCLIF_bit at PIR2.B3;
    const register unsigned short int CMIF = 6;
    sbit  CMIF_bit at PIR2.B6;
    const register unsigned short int OSCFIF = 7;
    sbit  OSCFIF_bit at PIR2.B7;
    const register unsigned short int BCL1IF = 3;
    sbit  BCL1IF_bit at PIR2.B3;

    // IPR2 bits
    const register unsigned short int TMR3IP = 1;
    sbit  TMR3IP_bit at IPR2.B1;
    const register unsigned short int LVDIP = 2;
    sbit  LVDIP_bit at IPR2.B2;
    const register unsigned short int BCLIP = 3;
    sbit  BCLIP_bit at IPR2.B3;
    const register unsigned short int CMIP = 6;
    sbit  CMIP_bit at IPR2.B6;
    const register unsigned short int OSCFIP = 7;
    sbit  OSCFIP_bit at IPR2.B7;
    const register unsigned short int BCL1IP = 3;
    sbit  BCL1IP_bit at IPR2.B3;

    // PIE3 bits
    const register unsigned short int RTCCIE = 0;
    sbit  RTCCIE_bit at PIE3.B0;
    const register unsigned short int CCP1IE = 1;
    sbit  CCP1IE_bit at PIE3.B1;
    const register unsigned short int CCP2IE = 2;
    sbit  CCP2IE_bit at PIE3.B2;
    const register unsigned short int CTMUIE = 3;
    sbit  CTMUIE_bit at PIE3.B3;
    const register unsigned short int TX2IE = 4;
    sbit  TX2IE_bit at PIE3.B4;
    const register unsigned short int RC2IE = 5;
    sbit  RC2IE_bit at PIE3.B5;
    const register unsigned short int LCDIE = 6;
    sbit  LCDIE_bit at PIE3.B6;

    // PIR3 bits
    const register unsigned short int RTCCIF = 0;
    sbit  RTCCIF_bit at PIR3.B0;
    const register unsigned short int CCP1IF = 1;
    sbit  CCP1IF_bit at PIR3.B1;
    const register unsigned short int CCP2IF = 2;
    sbit  CCP2IF_bit at PIR3.B2;
    const register unsigned short int CTMUIF = 3;
    sbit  CTMUIF_bit at PIR3.B3;
    const register unsigned short int TX2IF = 4;
    sbit  TX2IF_bit at PIR3.B4;
    const register unsigned short int RC2IF = 5;
    sbit  RC2IF_bit at PIR3.B5;
    const register unsigned short int LCDIF = 6;
    sbit  LCDIF_bit at PIR3.B6;

    // IPR3 bits
    const register unsigned short int RTCCIP = 0;
    sbit  RTCCIP_bit at IPR3.B0;
    const register unsigned short int CCP1IP = 1;
    sbit  CCP1IP_bit at IPR3.B1;
    const register unsigned short int CCP2IP = 2;
    sbit  CCP2IP_bit at IPR3.B2;
    const register unsigned short int CTMUIP = 3;
    sbit  CTMUIP_bit at IPR3.B3;
    const register unsigned short int TX2IP = 4;
    sbit  TX2IP_bit at IPR3.B4;
    const register unsigned short int RC2IP = 5;
    sbit  RC2IP_bit at IPR3.B5;
    const register unsigned short int LCDIP = 6;
    sbit  LCDIP_bit at IPR3.B6;

    // EECON1 bits
    const register unsigned short int WR = 1;
    sbit  WR_bit at EECON1.B1;
    const register unsigned short int WREN = 2;
    sbit  WREN_bit at EECON1.B2;
    const register unsigned short int WRERR = 3;
    sbit  WRERR_bit at EECON1.B3;
    const register unsigned short int FREE = 4;
    sbit  FREE_bit at EECON1.B4;
    const register unsigned short int WPROG = 5;
    sbit  WPROG_bit at EECON1.B5;

    // LCDCON bits
    const register unsigned short int LMUX0 = 0;
    sbit  LMUX0_bit at LCDCON.B0;
    const register unsigned short int LMUX1 = 1;
    sbit  LMUX1_bit at LCDCON.B1;
    const register unsigned short int CS0 = 2;
    sbit  CS0_bit at LCDCON.B2;
    const register unsigned short int CS1 = 3;
    sbit  CS1_bit at LCDCON.B3;
    const register unsigned short int WERR = 5;
    sbit  WERR_bit at LCDCON.B5;
    const register unsigned short int SLPEN = 6;
    sbit  SLPEN_bit at LCDCON.B6;
    const register unsigned short int LCDEN = 7;
    sbit  LCDEN_bit at LCDCON.B7;
    const register unsigned short int LCDCS0 = 2;
    sbit  LCDCS0_bit at LCDCON.B2;
    const register unsigned short int LCDCS1 = 3;
    sbit  LCDCS1_bit at LCDCON.B3;
    const register unsigned short int LCDWERR = 5;
    sbit  LCDWERR_bit at LCDCON.B5;
    const register unsigned short int LCDSLPEN = 6;
    sbit  LCDSLPEN_bit at LCDCON.B6;

    // LCDSE0 bits
    const register unsigned short int SE0 = 0;
    sbit  SE0_bit at LCDSE0.B0;
    const register unsigned short int SE1 = 1;
    sbit  SE1_bit at LCDSE0.B1;
    const register unsigned short int SE2 = 2;
    sbit  SE2_bit at LCDSE0.B2;
    const register unsigned short int SE3 = 3;
    sbit  SE3_bit at LCDSE0.B3;
    const register unsigned short int SE4 = 4;
    sbit  SE4_bit at LCDSE0.B4;
    const register unsigned short int SE5 = 5;
    sbit  SE5_bit at LCDSE0.B5;
    const register unsigned short int SE6 = 6;
    sbit  SE6_bit at LCDSE0.B6;
    const register unsigned short int SE7 = 7;
    sbit  SE7_bit at LCDSE0.B7;
    const register unsigned short int SEGEN0 = 0;
    sbit  SEGEN0_bit at LCDSE0.B0;
    const register unsigned short int SEGEN1 = 1;
    sbit  SEGEN1_bit at LCDSE0.B1;
    const register unsigned short int SEGEN2 = 2;
    sbit  SEGEN2_bit at LCDSE0.B2;
    const register unsigned short int SEGEN3 = 3;
    sbit  SEGEN3_bit at LCDSE0.B3;
    const register unsigned short int SEGEN4 = 4;
    sbit  SEGEN4_bit at LCDSE0.B4;
    const register unsigned short int SEGEN5 = 5;
    sbit  SEGEN5_bit at LCDSE0.B5;
    const register unsigned short int SEGEN6 = 6;
    sbit  SEGEN6_bit at LCDSE0.B6;
    const register unsigned short int SEGEN7 = 7;
    sbit  SEGEN7_bit at LCDSE0.B7;
    const register unsigned short int SE00 = 0;
    sbit  SE00_bit at LCDSE0.B0;
    const register unsigned short int SE01 = 1;
    sbit  SE01_bit at LCDSE0.B1;
    const register unsigned short int SE02 = 2;
    sbit  SE02_bit at LCDSE0.B2;
    const register unsigned short int SE03 = 3;
    sbit  SE03_bit at LCDSE0.B3;
    const register unsigned short int SE04 = 4;
    sbit  SE04_bit at LCDSE0.B4;
    const register unsigned short int SE05 = 5;
    sbit  SE05_bit at LCDSE0.B5;
    const register unsigned short int SE06 = 6;
    sbit  SE06_bit at LCDSE0.B6;
    const register unsigned short int SE07 = 7;
    sbit  SE07_bit at LCDSE0.B7;

    // LCDPS bits
    const register unsigned short int LP0 = 0;
    sbit  LP0_bit at LCDPS.B0;
    const register unsigned short int LP1 = 1;
    sbit  LP1_bit at LCDPS.B1;
    const register unsigned short int LP2 = 2;
    sbit  LP2_bit at LCDPS.B2;
    const register unsigned short int LP3 = 3;
    sbit  LP3_bit at LCDPS.B3;
    const register unsigned short int WA = 4;
    sbit  WA_bit at LCDPS.B4;
    const register unsigned short int LCDA = 5;
    sbit  LCDA_bit at LCDPS.B5;
    const register unsigned short int BIASMD = 6;
    sbit  BIASMD_bit at LCDPS.B6;
    const register unsigned short int WFT = 7;
    sbit  WFT_bit at LCDPS.B7;
    const register unsigned short int LCDPS0 = 0;
    sbit  LCDPS0_bit at LCDPS.B0;
    const register unsigned short int LCDPS1 = 1;
    sbit  LCDPS1_bit at LCDPS.B1;
    const register unsigned short int LCDPS2 = 2;
    sbit  LCDPS2_bit at LCDPS.B2;
    const register unsigned short int LCDPS3 = 3;
    sbit  LCDPS3_bit at LCDPS.B3;

    // RCSTA, RCSTA1 bits
    sbit  RX9D_RCSTA_bit at RCSTA.B0;
    sbit  OERR_RCSTA_bit at RCSTA.B1;
    sbit  FERR_RCSTA_bit at RCSTA.B2;
    sbit  ADDEN_RCSTA_bit at RCSTA.B3;
    sbit  CREN_RCSTA_bit at RCSTA.B4;
    sbit  SREN_RCSTA_bit at RCSTA.B5;
    sbit  RX9_RCSTA_bit at RCSTA.B6;
    sbit  SPEN_RCSTA_bit at RCSTA.B7;
    sbit  RCD8_RCSTA_bit at RCSTA.B0;
    const register unsigned short int ADEN = 3;
    sbit  ADEN_bit at RCSTA.B3;
    sbit  RC9_RCSTA_bit at RCSTA.B6;
    sbit  NOT_RC8_RCSTA_bit at RCSTA.B6;
    sbit  RC8_9_RCSTA_bit at RCSTA.B6;
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
    const register unsigned short int SENDB = 3;
    sbit  SENDB_bit at TXSTA.B3;
    sbit  SYNC_TXSTA_bit at TXSTA.B4;
    sbit  TXEN_TXSTA_bit at TXSTA.B5;
    sbit  TX9_TXSTA_bit at TXSTA.B6;
    sbit  CSRC_TXSTA_bit at TXSTA.B7;
    sbit  TXD8_TXSTA_bit at TXSTA.B0;
    sbit  TX8_9_TXSTA_bit at TXSTA.B6;
    sbit  NOT_TX8_TXSTA_bit at TXSTA.B6;
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
    const register unsigned short int T3RD16 = 7;
    sbit  T3RD16_bit at T3CON.B7;
    const register unsigned short int T3INSYNC = 2;
    sbit  T3INSYNC_bit at T3CON.B2;

    // CMCON bits
    const register unsigned short int CIS = 3;
    sbit  CIS_bit at CMCON.B3;
    const register unsigned short int C1INV = 4;
    sbit  C1INV_bit at CMCON.B4;
    const register unsigned short int C2INV = 5;
    sbit  C2INV_bit at CMCON.B5;
    const register unsigned short int C1OUT_CMCON = 6;
    sbit  C1OUT_CMCON_bit at CMCON.B6;
    const register unsigned short int C2OUT_CMCON = 7;
    sbit  C2OUT_CMCON_bit at CMCON.B7;
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

    // LCDSE1 bits
    const register unsigned short int SE8 = 0;
    sbit  SE8_bit at LCDSE1.B0;
    const register unsigned short int SE9 = 1;
    sbit  SE9_bit at LCDSE1.B1;
    const register unsigned short int SE10 = 2;
    sbit  SE10_bit at LCDSE1.B2;
    const register unsigned short int SE11 = 3;
    sbit  SE11_bit at LCDSE1.B3;
    const register unsigned short int SE12 = 4;
    sbit  SE12_bit at LCDSE1.B4;
    const register unsigned short int SE13 = 5;
    sbit  SE13_bit at LCDSE1.B5;
    const register unsigned short int SE14 = 6;
    sbit  SE14_bit at LCDSE1.B6;
    const register unsigned short int SE15 = 7;
    sbit  SE15_bit at LCDSE1.B7;
    const register unsigned short int SEGEN8 = 0;
    sbit  SEGEN8_bit at LCDSE1.B0;
    const register unsigned short int SEGEN9 = 1;
    sbit  SEGEN9_bit at LCDSE1.B1;
    const register unsigned short int SEGEN10 = 2;
    sbit  SEGEN10_bit at LCDSE1.B2;
    const register unsigned short int SEGEN11 = 3;
    sbit  SEGEN11_bit at LCDSE1.B3;
    const register unsigned short int SEGEN12 = 4;
    sbit  SEGEN12_bit at LCDSE1.B4;
    const register unsigned short int SEGEN13 = 5;
    sbit  SEGEN13_bit at LCDSE1.B5;
    const register unsigned short int SEGEN14 = 6;
    sbit  SEGEN14_bit at LCDSE1.B6;
    const register unsigned short int SEGEN15 = 7;
    sbit  SEGEN15_bit at LCDSE1.B7;
    const register unsigned short int SE08 = 0;
    sbit  SE08_bit at LCDSE1.B0;
    const register unsigned short int SE09 = 1;
    sbit  SE09_bit at LCDSE1.B1;

    // LCDSE2 bits
    const register unsigned short int SE16 = 0;
    sbit  SE16_bit at LCDSE2.B0;
    const register unsigned short int SE17 = 1;
    sbit  SE17_bit at LCDSE2.B1;
    const register unsigned short int SE18 = 2;
    sbit  SE18_bit at LCDSE2.B2;
    const register unsigned short int SE19 = 3;
    sbit  SE19_bit at LCDSE2.B3;
    const register unsigned short int SE20 = 4;
    sbit  SE20_bit at LCDSE2.B4;
    const register unsigned short int SE21 = 5;
    sbit  SE21_bit at LCDSE2.B5;
    const register unsigned short int SE22 = 6;
    sbit  SE22_bit at LCDSE2.B6;
    const register unsigned short int SE23 = 7;
    sbit  SE23_bit at LCDSE2.B7;
    const register unsigned short int SEGEN16 = 0;
    sbit  SEGEN16_bit at LCDSE2.B0;
    const register unsigned short int SEGEN17 = 1;
    sbit  SEGEN17_bit at LCDSE2.B1;
    const register unsigned short int SEGEN18 = 2;
    sbit  SEGEN18_bit at LCDSE2.B2;
    const register unsigned short int SEGEN19 = 3;
    sbit  SEGEN19_bit at LCDSE2.B3;
    const register unsigned short int SEGEN20 = 4;
    sbit  SEGEN20_bit at LCDSE2.B4;
    const register unsigned short int SEGEN21 = 5;
    sbit  SEGEN21_bit at LCDSE2.B5;
    const register unsigned short int SEGEN22 = 6;
    sbit  SEGEN22_bit at LCDSE2.B6;
    const register unsigned short int SEGEN23 = 7;
    sbit  SEGEN23_bit at LCDSE2.B7;

    // LCDSE3 bits
    const register unsigned short int SE24 = 0;
    sbit  SE24_bit at LCDSE3.B0;
    const register unsigned short int SE25 = 1;
    sbit  SE25_bit at LCDSE3.B1;
    const register unsigned short int SE26 = 2;
    sbit  SE26_bit at LCDSE3.B2;
    const register unsigned short int SE27 = 3;
    sbit  SE27_bit at LCDSE3.B3;
    const register unsigned short int SE28 = 4;
    sbit  SE28_bit at LCDSE3.B4;
    const register unsigned short int SE29 = 5;
    sbit  SE29_bit at LCDSE3.B5;
    const register unsigned short int SE30 = 6;
    sbit  SE30_bit at LCDSE3.B6;
    const register unsigned short int SE31 = 7;
    sbit  SE31_bit at LCDSE3.B7;
    const register unsigned short int SEGEN24 = 0;
    sbit  SEGEN24_bit at LCDSE3.B0;
    const register unsigned short int SEGEN25 = 1;
    sbit  SEGEN25_bit at LCDSE3.B1;
    const register unsigned short int SEGEN26 = 2;
    sbit  SEGEN26_bit at LCDSE3.B2;
    const register unsigned short int SEGEN27 = 3;
    sbit  SEGEN27_bit at LCDSE3.B3;
    const register unsigned short int SEGEN28 = 4;
    sbit  SEGEN28_bit at LCDSE3.B4;
    const register unsigned short int SEGEN29 = 5;
    sbit  SEGEN29_bit at LCDSE3.B5;
    const register unsigned short int SEGEN30 = 6;
    sbit  SEGEN30_bit at LCDSE3.B6;
    const register unsigned short int SEGEN31 = 7;
    sbit  SEGEN31_bit at LCDSE3.B7;

    // LCDSE4 bits
    const register unsigned short int SE32 = 0;
    sbit  SE32_bit at LCDSE4.B0;
    const register unsigned short int SEGEN32 = 0;
    sbit  SEGEN32_bit at LCDSE4.B0;

    // LCDDATA0 bits
    const register unsigned short int S0C0 = 0;
    sbit  S0C0_bit at LCDDATA0.B0;
    const register unsigned short int S1C0 = 1;
    sbit  S1C0_bit at LCDDATA0.B1;
    const register unsigned short int S2C0 = 2;
    sbit  S2C0_bit at LCDDATA0.B2;
    const register unsigned short int S3C0 = 3;
    sbit  S3C0_bit at LCDDATA0.B3;
    const register unsigned short int S4C0 = 4;
    sbit  S4C0_bit at LCDDATA0.B4;
    const register unsigned short int S5C0 = 5;
    sbit  S5C0_bit at LCDDATA0.B5;
    const register unsigned short int S6C0 = 6;
    sbit  S6C0_bit at LCDDATA0.B6;
    const register unsigned short int S7C0 = 7;
    sbit  S7C0_bit at LCDDATA0.B7;
    const register unsigned short int SEG0COM0 = 0;
    sbit  SEG0COM0_bit at LCDDATA0.B0;
    const register unsigned short int SEG1COM0 = 1;
    sbit  SEG1COM0_bit at LCDDATA0.B1;
    const register unsigned short int SEG2COM0 = 2;
    sbit  SEG2COM0_bit at LCDDATA0.B2;
    const register unsigned short int SEG3COM0 = 3;
    sbit  SEG3COM0_bit at LCDDATA0.B3;
    const register unsigned short int SEG4COM0 = 4;
    sbit  SEG4COM0_bit at LCDDATA0.B4;
    const register unsigned short int SEG5COM0 = 5;
    sbit  SEG5COM0_bit at LCDDATA0.B5;
    const register unsigned short int SEG6COM0 = 6;
    sbit  SEG6COM0_bit at LCDDATA0.B6;
    const register unsigned short int SEG7COM0 = 7;
    sbit  SEG7COM0_bit at LCDDATA0.B7;
    const register unsigned short int S00C0 = 0;
    sbit  S00C0_bit at LCDDATA0.B0;
    const register unsigned short int S01C0 = 1;
    sbit  S01C0_bit at LCDDATA0.B1;
    const register unsigned short int S02C0 = 2;
    sbit  S02C0_bit at LCDDATA0.B2;
    const register unsigned short int S03C0 = 3;
    sbit  S03C0_bit at LCDDATA0.B3;
    const register unsigned short int S04C0 = 4;
    sbit  S04C0_bit at LCDDATA0.B4;
    const register unsigned short int S05C0 = 5;
    sbit  S05C0_bit at LCDDATA0.B5;
    const register unsigned short int S06C0 = 6;
    sbit  S06C0_bit at LCDDATA0.B6;
    const register unsigned short int S07C0 = 7;
    sbit  S07C0_bit at LCDDATA0.B7;

    // LCDDATA1 bits
    const register unsigned short int S8C0 = 0;
    sbit  S8C0_bit at LCDDATA1.B0;
    const register unsigned short int S9C0 = 1;
    sbit  S9C0_bit at LCDDATA1.B1;
    const register unsigned short int S10C0 = 2;
    sbit  S10C0_bit at LCDDATA1.B2;
    const register unsigned short int S11C0 = 3;
    sbit  S11C0_bit at LCDDATA1.B3;
    const register unsigned short int S12C0 = 4;
    sbit  S12C0_bit at LCDDATA1.B4;
    const register unsigned short int S13C0 = 5;
    sbit  S13C0_bit at LCDDATA1.B5;
    const register unsigned short int S14C0 = 6;
    sbit  S14C0_bit at LCDDATA1.B6;
    const register unsigned short int S15C0 = 7;
    sbit  S15C0_bit at LCDDATA1.B7;
    const register unsigned short int SEG8COM0 = 0;
    sbit  SEG8COM0_bit at LCDDATA1.B0;
    const register unsigned short int SEG9COM0 = 1;
    sbit  SEG9COM0_bit at LCDDATA1.B1;
    const register unsigned short int SEG10COM0 = 2;
    sbit  SEG10COM0_bit at LCDDATA1.B2;
    const register unsigned short int SEG11COM0 = 3;
    sbit  SEG11COM0_bit at LCDDATA1.B3;
    const register unsigned short int SEG12COM0 = 4;
    sbit  SEG12COM0_bit at LCDDATA1.B4;
    const register unsigned short int SEG13COM0 = 5;
    sbit  SEG13COM0_bit at LCDDATA1.B5;
    const register unsigned short int SEG14COM0 = 6;
    sbit  SEG14COM0_bit at LCDDATA1.B6;
    const register unsigned short int SEG15COM0 = 7;
    sbit  SEG15COM0_bit at LCDDATA1.B7;
    const register unsigned short int S08C0 = 0;
    sbit  S08C0_bit at LCDDATA1.B0;
    const register unsigned short int S09C0 = 1;
    sbit  S09C0_bit at LCDDATA1.B1;

    // LCDDATA2 bits
    const register unsigned short int S16C0 = 0;
    sbit  S16C0_bit at LCDDATA2.B0;
    const register unsigned short int S17C0 = 1;
    sbit  S17C0_bit at LCDDATA2.B1;
    const register unsigned short int S18C0 = 2;
    sbit  S18C0_bit at LCDDATA2.B2;
    const register unsigned short int S19C0 = 3;
    sbit  S19C0_bit at LCDDATA2.B3;
    const register unsigned short int S20C0 = 4;
    sbit  S20C0_bit at LCDDATA2.B4;
    const register unsigned short int S21C0 = 5;
    sbit  S21C0_bit at LCDDATA2.B5;
    const register unsigned short int S22C0 = 6;
    sbit  S22C0_bit at LCDDATA2.B6;
    const register unsigned short int S23C0 = 7;
    sbit  S23C0_bit at LCDDATA2.B7;
    const register unsigned short int SEG16COM0 = 0;
    sbit  SEG16COM0_bit at LCDDATA2.B0;
    const register unsigned short int SEG17COM0 = 1;
    sbit  SEG17COM0_bit at LCDDATA2.B1;
    const register unsigned short int SEG18COM0 = 2;
    sbit  SEG18COM0_bit at LCDDATA2.B2;
    const register unsigned short int SEG19COM0 = 3;
    sbit  SEG19COM0_bit at LCDDATA2.B3;
    const register unsigned short int SEG20COM0 = 4;
    sbit  SEG20COM0_bit at LCDDATA2.B4;
    const register unsigned short int SEG21COM0 = 5;
    sbit  SEG21COM0_bit at LCDDATA2.B5;
    const register unsigned short int SEG22COM0 = 6;
    sbit  SEG22COM0_bit at LCDDATA2.B6;
    const register unsigned short int SEG23COM0 = 7;
    sbit  SEG23COM0_bit at LCDDATA2.B7;

    // LCDDATA3 bits
    const register unsigned short int S24C0 = 0;
    sbit  S24C0_bit at LCDDATA3.B0;
    const register unsigned short int S25C0 = 1;
    sbit  S25C0_bit at LCDDATA3.B1;
    const register unsigned short int S26C0 = 2;
    sbit  S26C0_bit at LCDDATA3.B2;
    const register unsigned short int S27C0 = 3;
    sbit  S27C0_bit at LCDDATA3.B3;
    const register unsigned short int S28C0 = 4;
    sbit  S28C0_bit at LCDDATA3.B4;
    const register unsigned short int S29C0 = 5;
    sbit  S29C0_bit at LCDDATA3.B5;
    const register unsigned short int S30C0 = 6;
    sbit  S30C0_bit at LCDDATA3.B6;
    const register unsigned short int S31C0 = 7;
    sbit  S31C0_bit at LCDDATA3.B7;
    const register unsigned short int SEG24COM0 = 0;
    sbit  SEG24COM0_bit at LCDDATA3.B0;
    const register unsigned short int SEG25COM0 = 1;
    sbit  SEG25COM0_bit at LCDDATA3.B1;
    const register unsigned short int SEG26COM0 = 2;
    sbit  SEG26COM0_bit at LCDDATA3.B2;
    const register unsigned short int SEG27COM0 = 3;
    sbit  SEG27COM0_bit at LCDDATA3.B3;
    const register unsigned short int SEG28COM0 = 4;
    sbit  SEG28COM0_bit at LCDDATA3.B4;
    const register unsigned short int SEG29COM0 = 5;
    sbit  SEG29COM0_bit at LCDDATA3.B5;
    const register unsigned short int SEG30COM0 = 6;
    sbit  SEG30COM0_bit at LCDDATA3.B6;
    const register unsigned short int SEG31COM0 = 7;
    sbit  SEG31COM0_bit at LCDDATA3.B7;

    // LCDDATA4 bits
    const register unsigned short int S32C0 = 0;
    sbit  S32C0_bit at LCDDATA4.B0;
    const register unsigned short int S33C0 = 1;
    sbit  S33C0_bit at LCDDATA4.B1;
    const register unsigned short int S34C0 = 2;
    sbit  S34C0_bit at LCDDATA4.B2;
    const register unsigned short int S35C0 = 3;
    sbit  S35C0_bit at LCDDATA4.B3;
    const register unsigned short int S36C0 = 4;
    sbit  S36C0_bit at LCDDATA4.B4;
    const register unsigned short int S37C0 = 5;
    sbit  S37C0_bit at LCDDATA4.B5;
    const register unsigned short int S38C0 = 6;
    sbit  S38C0_bit at LCDDATA4.B6;
    const register unsigned short int S39C0 = 7;
    sbit  S39C0_bit at LCDDATA4.B7;
    const register unsigned short int SEG32COM0 = 0;
    sbit  SEG32COM0_bit at LCDDATA4.B0;
    const register unsigned short int SEG33COM0 = 1;
    sbit  SEG33COM0_bit at LCDDATA4.B1;
    const register unsigned short int SEG34COM0 = 2;
    sbit  SEG34COM0_bit at LCDDATA4.B2;
    const register unsigned short int SEG35COM0 = 3;
    sbit  SEG35COM0_bit at LCDDATA4.B3;
    const register unsigned short int SEG36COM0 = 4;
    sbit  SEG36COM0_bit at LCDDATA4.B4;
    const register unsigned short int SEG37COM0 = 5;
    sbit  SEG37COM0_bit at LCDDATA4.B5;
    const register unsigned short int SEG38COM0 = 6;
    sbit  SEG38COM0_bit at LCDDATA4.B6;
    const register unsigned short int SEG39COM0 = 7;
    sbit  SEG39COM0_bit at LCDDATA4.B7;

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
    const register unsigned short int TRIGSEL = 7;
    sbit  TRIGSEL_bit at ADCON1.B7;
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
    const register unsigned short int ADCAL = 7;
    sbit  ADCAL_bit at ADCON0.B7;
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

    // SSP1CON2, SSPCON2 bits
    const register unsigned short int SEN = 0;
    sbit  SEN_bit at SSP1CON2.B0;
    const register unsigned short int RSEN = 1;
    sbit  RSEN_bit at SSP1CON2.B1;
    const register unsigned short int PEN = 2;
    sbit  PEN_bit at SSP1CON2.B2;
    const register unsigned short int RCEN = 3;
    sbit  RCEN_bit at SSP1CON2.B3;
    const register unsigned short int ACKEN = 4;
    sbit  ACKEN_bit at SSP1CON2.B4;
    const register unsigned short int ACKDT = 5;
    sbit  ACKDT_bit at SSP1CON2.B5;
    const register unsigned short int ACKSTAT = 6;
    sbit  ACKSTAT_bit at SSP1CON2.B6;
    const register unsigned short int GCEN = 7;
    sbit  GCEN_bit at SSP1CON2.B7;
    const register unsigned short int ADMSK1 = 1;
    sbit  ADMSK1_bit at SSP1CON2.B1;
    const register unsigned short int ADMSK2 = 2;
    sbit  ADMSK2_bit at SSP1CON2.B2;
    const register unsigned short int ADMSK3 = 3;
    sbit  ADMSK3_bit at SSP1CON2.B3;
    const register unsigned short int ADMSK4 = 4;
    sbit  ADMSK4_bit at SSP1CON2.B4;
    const register unsigned short int ADMSK5 = 5;
    sbit  ADMSK5_bit at SSP1CON2.B5;

    // SSP1CON1, SSPCON1 bits
    const register unsigned short int CKP = 4;
    sbit  CKP_bit at SSP1CON1.B4;
    const register unsigned short int SSPEN = 5;
    sbit  SSPEN_bit at SSP1CON1.B5;
    const register unsigned short int SSPOV = 6;
    sbit  SSPOV_bit at SSP1CON1.B6;
    const register unsigned short int WCOL = 7;
    sbit  WCOL_bit at SSP1CON1.B7;
    const register unsigned short int SSPM0 = 0;
    sbit  SSPM0_bit at SSP1CON1.B0;
    const register unsigned short int SSPM1 = 1;
    sbit  SSPM1_bit at SSP1CON1.B1;
    const register unsigned short int SSPM2 = 2;
    sbit  SSPM2_bit at SSP1CON1.B2;
    const register unsigned short int SSPM3 = 3;
    sbit  SSPM3_bit at SSP1CON1.B3;

    // SSP1STAT, SSPSTAT bits
    const register unsigned short int BF = 0;
    sbit  BF_bit at SSP1STAT.B0;
    const register unsigned short int UA = 1;
    sbit  UA_bit at SSP1STAT.B1;
    const register unsigned short int R_NOT_W = 2;
    sbit  R_NOT_W_bit at SSP1STAT.B2;
    const register unsigned short int S = 3;
    sbit  S_bit at SSP1STAT.B3;
    const register unsigned short int P = 4;
    sbit  P_bit at SSP1STAT.B4;
    const register unsigned short int D_NOT_A = 5;
    sbit  D_NOT_A_bit at SSP1STAT.B5;
    const register unsigned short int CKE = 6;
    sbit  CKE_bit at SSP1STAT.B6;
    const register unsigned short int SMP = 7;
    sbit  SMP_bit at SSP1STAT.B7;
    const register unsigned short int R = 2;
    sbit  R_bit at SSP1STAT.B2;
    const register unsigned short int D = 5;
    sbit  D_bit at SSP1STAT.B5;
    const register unsigned short int R_W = 2;
    sbit  R_W_bit at SSP1STAT.B2;
    const register unsigned short int D_A = 5;
    sbit  D_A_bit at SSP1STAT.B5;
    const register unsigned short int NOT_W = 2;
    sbit  NOT_W_bit at SSP1STAT.B2;
    const register unsigned short int NOT_A = 5;
    sbit  NOT_A_bit at SSP1STAT.B5;
    const register unsigned short int NOT_WRITE = 2;
    sbit  NOT_WRITE_bit at SSP1STAT.B2;
    const register unsigned short int NOT_ADDRESS = 5;
    sbit  NOT_ADDRESS_bit at SSP1STAT.B5;
    const register unsigned short int READ_WRITE = 2;
    sbit  READ_WRITE_bit at SSP1STAT.B2;
    const register unsigned short int DATA_ADDRESS = 5;
    sbit  DATA_ADDRESS_bit at SSP1STAT.B5;
    const register unsigned short int I2C_DAT = 5;
    sbit  I2C_DAT_bit at SSP1STAT.B5;

    // SSP1ADD, SSPADD bits
    const register unsigned short int MSK0 = 0;
    sbit  MSK0_bit at SSP1ADD.B0;
    const register unsigned short int MSK1 = 1;
    sbit  MSK1_bit at SSP1ADD.B1;
    const register unsigned short int MSK2 = 2;
    sbit  MSK2_bit at SSP1ADD.B2;
    const register unsigned short int MSK3 = 3;
    sbit  MSK3_bit at SSP1ADD.B3;
    const register unsigned short int MSK4 = 4;
    sbit  MSK4_bit at SSP1ADD.B4;
    const register unsigned short int MSK5 = 5;
    sbit  MSK5_bit at SSP1ADD.B5;
    const register unsigned short int MSK6 = 6;
    sbit  MSK6_bit at SSP1ADD.B6;
    const register unsigned short int MSK7 = 7;
    sbit  MSK7_bit at SSP1ADD.B7;

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
    const register unsigned short int T1RUN = 6;
    sbit  T1RUN_bit at T1CON.B6;
    sbit  RD16_T1CON_bit at T1CON.B7;
    const register unsigned short int T1INSYNC = 2;
    sbit  T1INSYNC_bit at T1CON.B2;
    const register unsigned short int T1CKPS0 = 4;
    sbit  T1CKPS0_bit at T1CON.B4;
    const register unsigned short int T1CKPS1 = 5;
    sbit  T1CKPS1_bit at T1CON.B5;
    const register unsigned short int T1RD16 = 7;
    sbit  T1RD16_bit at T1CON.B7;
    const register unsigned short int T1SYNC = 2;
    sbit  T1SYNC_bit at T1CON.B2;

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
    const register unsigned short int NOT_CM = 5;
    sbit  NOT_CM_bit at RCON.B5;
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
    const register unsigned short int CM = 5;
    sbit  CM_bit at RCON.B5;

    // WDTCON bits
    const register unsigned short int SWDTEN = 0;
    sbit  SWDTEN_bit at WDTCON.B0;
    const register unsigned short int REGSLP = 7;
    sbit  REGSLP_bit at WDTCON.B7;
    const register unsigned short int SWDTE = 0;
    sbit  SWDTE_bit at WDTCON.B0;

    // LCDREG bits
    const register unsigned short int MODE13 = 2;
    sbit  MODE13_bit at LCDREG.B2;
    const register unsigned short int CPEN = 6;
    sbit  CPEN_bit at LCDREG.B6;
    const register unsigned short int CKSEL0 = 0;
    sbit  CKSEL0_bit at LCDREG.B0;
    const register unsigned short int CKSEL1 = 1;
    sbit  CKSEL1_bit at LCDREG.B1;
    const register unsigned short int BIAS0 = 3;
    sbit  BIAS0_bit at LCDREG.B3;
    const register unsigned short int BIAS1 = 4;
    sbit  BIAS1_bit at LCDREG.B4;
    const register unsigned short int BIAS2 = 5;
    sbit  BIAS2_bit at LCDREG.B5;

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
    const register unsigned short int SP0 = 0;
    sbit  SP0_bit at STKPTR.B0;
    const register unsigned short int SP1 = 1;
    sbit  SP1_bit at STKPTR.B1;
    const register unsigned short int SP2 = 2;
    sbit  SP2_bit at STKPTR.B2;
    const register unsigned short int SP3 = 3;
    sbit  SP3_bit at STKPTR.B3;
    const register unsigned short int SP4 = 4;
    sbit  SP4_bit at STKPTR.B4;
    const register unsigned short int STKOVF = 7;
    sbit  STKOVF_bit at STKPTR.B7;
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

    // PORTG bits
    sbit  RDPU_PORTG_bit at PORTG.B7;
    sbit  REPU_PORTG_bit at PORTG.B6;
    sbit  RJPU_PORTG_bit at PORTG.B5;
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

    // TRISG bits
    sbit  SPIOD_TRISG_bit at TRISG.B7;
    sbit  CCP2OD_TRISG_bit at TRISG.B6;
    sbit  CCP1OD_TRISG_bit at TRISG.B5;
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
