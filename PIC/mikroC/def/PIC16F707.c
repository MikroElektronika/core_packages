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
sfr unsigned short volatile PIR2             absolute 0x000D;
sfr unsigned short volatile TMR1L            absolute 0x000E;
sfr unsigned short volatile TMR1H            absolute 0x000F;
sfr unsigned short volatile T1CON            absolute 0x0010;
sfr unsigned short volatile TMR2             absolute 0x0011;
sfr unsigned short volatile T2CON            absolute 0x0012;
sfr unsigned short volatile SSPBUF           absolute 0x0013;
sfr unsigned short volatile SSPCON           absolute 0x0014;
sfr unsigned int   volatile CCPR1            absolute 0x0015;
sfr unsigned short volatile CCPR1L           absolute 0x0015;
sfr unsigned short volatile CCPR1H           absolute 0x0016;
sfr unsigned short volatile CCP1CON          absolute 0x0017;
sfr unsigned short volatile RCSTA            absolute 0x0018;
sfr unsigned short volatile TXREG            absolute 0x0019;
sfr unsigned short volatile RCREG            absolute 0x001A;
sfr unsigned short volatile CCP2CON          absolute 0x001D;
sfr unsigned short volatile ADCON0           absolute 0x001F;
sfr unsigned short volatile OPTION_REG       absolute 0x0081;
sfr unsigned short volatile PIE1             absolute 0x008C;
sfr unsigned short volatile PIE2             absolute 0x008D;
sfr unsigned short volatile PCON             absolute 0x008E;
sfr unsigned short volatile T1GCON           absolute 0x008F;
sfr unsigned short volatile OSCCON           absolute 0x0090;
sfr unsigned short volatile OSCTUNE          absolute 0x0091;
sfr unsigned short volatile PR2              absolute 0x0092;
sfr unsigned short volatile SSPADD           absolute 0x0093;
sfr unsigned short volatile SSPMSK           absolute 0x0093;
sfr unsigned short volatile SSPSTAT          absolute 0x0094;
sfr unsigned short          WPUB             absolute 0x0095;
sfr unsigned short volatile IOCB             absolute 0x0096;
sfr unsigned short volatile T3CON            absolute 0x0097;
sfr unsigned short volatile TXSTA            absolute 0x0098;
sfr unsigned short          SPBRG            absolute 0x0099;
sfr unsigned short volatile TMR3L            absolute 0x009A;
sfr unsigned short volatile TMR3H            absolute 0x009B;
sfr unsigned short          APFCON           absolute 0x009C;
sfr unsigned short volatile FVRCON           absolute 0x009D;
sfr unsigned short volatile T3GCON           absolute 0x009E;
sfr unsigned short volatile ADCON1           absolute 0x009F;
sfr unsigned short volatile TACON            absolute 0x0105;
sfr unsigned short volatile CPSBCON0         absolute 0x0106;
sfr unsigned short volatile CPSBCON1         absolute 0x0107;
sfr unsigned short volatile CPSACON0         absolute 0x0108;
sfr unsigned short volatile CPSACON1         absolute 0x0109;
sfr unsigned short volatile PMDATL           absolute 0x010C;
sfr unsigned short volatile PMADRL           absolute 0x010D;
sfr unsigned short volatile PMDATH           absolute 0x010E;
sfr unsigned short volatile PMADRH           absolute 0x010F;
sfr unsigned short volatile TMRA             absolute 0x0110;
sfr unsigned short volatile TBCON            absolute 0x0111;
sfr unsigned short volatile TMRB             absolute 0x0112;
sfr unsigned short volatile DACCON0          absolute 0x0113;
sfr unsigned short volatile DACCON1          absolute 0x0114;
sfr unsigned short volatile ANSELA           absolute 0x0185;
sfr unsigned short volatile ANSELB           absolute 0x0186;
sfr unsigned short volatile ANSELC           absolute 0x0187;
sfr unsigned short volatile ANSELD           absolute 0x0188;
sfr unsigned short volatile ANSELE           absolute 0x0189;
sfr unsigned short volatile PMCON1           absolute 0x018C;
sfr unsigned short volatile PORTA            absolute 0x0005;
sfr unsigned short volatile PORTB            absolute 0x0006;
sfr unsigned short volatile PORTC            absolute 0x0007;
sfr unsigned short volatile PORTD            absolute 0x0008;
sfr unsigned short volatile PORTE            absolute 0x0009;
sfr unsigned int   volatile CCPR2            absolute 0x001B;
sfr unsigned short volatile CCPR2L           absolute 0x001B;
sfr unsigned short volatile CCPR2H           absolute 0x001C;
sfr unsigned short volatile ADRES            absolute 0x001E;
sfr unsigned short volatile TRISA            absolute 0x0085;
sfr unsigned short volatile TRISB            absolute 0x0086;
sfr unsigned short volatile TRISC            absolute 0x0087;
sfr unsigned short volatile TRISD            absolute 0x0088;
sfr unsigned short volatile TRISE            absolute 0x0089;

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
    const register unsigned short int AN4 = 5;
    sbit  AN4_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int OSC2 = 6;
    sbit  OSC2_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int OSC1 = 7;
    sbit  OSC1_bit at PORTA.B7;

    // Alternative bit function
    const register unsigned short int CPSA0 = 1;
    sbit  CPSA0_bit at PORTA.B1;

    // Alternative bit function
    const register unsigned short int CPSA1 = 2;
    sbit  CPSA1_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int CPSA2 = 3;
    sbit  CPSA2_bit at PORTA.B3;

    // Alternative bit function
    const register unsigned short int CPSA3 = 4;
    sbit  CPSA3_bit at PORTA.B4;

    // Alternative bit function
    const register unsigned short int CPSA4 = 5;
    sbit  CPSA4_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int CPSB1 = 6;
    sbit  CPSB1_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int CPSB0 = 7;
    sbit  CPSB0_bit at PORTA.B7;

    // Alternative bit function
    const register unsigned short int DACOUT = 2;
    sbit  DACOUT_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int T0CKI = 4;
    sbit  T0CKI_bit at PORTA.B4;

    // Alternative bit function
    const register unsigned short int CLKOUT = 6;
    sbit  CLKOUT_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int CLKIN = 7;
    sbit  CLKIN_bit at PORTA.B7;

    // Alternative bit function
    const register unsigned short int TACKI = 4;
    sbit  TACKI_bit at PORTA.B4;

    // Alternative bit function
    const register unsigned short int AN12 = 0;
    sbit  AN12_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int AN10 = 1;
    sbit  AN10_bit at PORTB.B1;

    // Alternative bit function
    const register unsigned short int AN8 = 2;
    sbit  AN8_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int AN9 = 3;
    sbit  AN9_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int AN11 = 4;
    sbit  AN11_bit at PORTB.B4;

    // Alternative bit function
    const register unsigned short int AN13 = 5;
    sbit  AN13_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int CPSB8 = 0;
    sbit  CPSB8_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int CPSB9 = 1;
    sbit  CPSB9_bit at PORTB.B1;

    // Alternative bit function
    const register unsigned short int CPSB10 = 2;
    sbit  CPSB10_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int CPSB11 = 3;
    sbit  CPSB11_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int CPSB12 = 4;
    sbit  CPSB12_bit at PORTB.B4;

    // Alternative bit function
    const register unsigned short int CPSB13 = 5;
    sbit  CPSB13_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int CPSB14 = 6;
    sbit  CPSB14_bit at PORTB.B6;

    // Alternative bit function
    const register unsigned short int CPSB15 = 7;
    sbit  CPSB15_bit at PORTB.B7;

    // Alternative bit function
    const register unsigned short int CCP2_PORTB = 3;
    sbit  CCP2_PORTB_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int T1G = 5;
    sbit  T1G_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int T3CKI = 5;
    sbit  T3CKI_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int CPSB2 = 0;
    sbit  CPSB2_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int CPSB3 = 1;
    sbit  CPSB3_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int CPSB4 = 2;
    sbit  CPSB4_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int CPSA9 = 5;
    sbit  CPSA9_bit at PORTC.B5;

    // Alternative bit function
    const register unsigned short int CPSA10 = 6;
    sbit  CPSA10_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int CPSA11 = 7;
    sbit  CPSA11_bit at PORTC.B7;

    // Alternative bit function
    const register unsigned short int T1OSO = 0;
    sbit  T1OSO_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int T1OSI = 1;
    sbit  T1OSI_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int TBCKI = 2;
    sbit  TBCKI_bit at PORTC.B2;

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
    const register unsigned short int TX = 6;
    sbit  TX_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int RX_ = 7;
    sbit  RX__bit at PORTC.B7;

    // Alternative bit function
    const register unsigned short int T1CKI = 0;
    sbit  T1CKI_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int CCP2_PORTC = 1;
    sbit  CCP2_PORTC_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int CCP1 = 2;
    sbit  CCP1_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int SCL = 3;
    sbit  SCL_bit at PORTC.B3;

    // Alternative bit function
    const register unsigned short int SDA = 4;
    sbit  SDA_bit at PORTC.B4;

    // Alternative bit function
    const register unsigned short int CK = 6;
    sbit  CK_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int CPSB5 = 0;
    sbit  CPSB5_bit at PORTD.B0;

    // Alternative bit function
    const register unsigned short int CPSB6 = 1;
    sbit  CPSB6_bit at PORTD.B1;

    // Alternative bit function
    const register unsigned short int CPSB7 = 2;
    sbit  CPSB7_bit at PORTD.B2;

    // Alternative bit function
    const register unsigned short int CPSA8 = 3;
    sbit  CPSA8_bit at PORTD.B3;

    // Alternative bit function
    const register unsigned short int CPSA12 = 4;
    sbit  CPSA12_bit at PORTD.B4;

    // Alternative bit function
    const register unsigned short int CPSA13 = 5;
    sbit  CPSA13_bit at PORTD.B5;

    // Alternative bit function
    const register unsigned short int CPSA14 = 6;
    sbit  CPSA14_bit at PORTD.B6;

    // Alternative bit function
    const register unsigned short int CPSA15 = 7;
    sbit  CPSA15_bit at PORTD.B7;

    // Alternative bit function
    const register unsigned short int T3G = 0;
    sbit  T3G_bit at PORTD.B0;

    // Alternative bit function
    const register unsigned short int AN5 = 0;
    sbit  AN5_bit at PORTE.B0;

    // Alternative bit function
    const register unsigned short int AN6 = 1;
    sbit  AN6_bit at PORTE.B1;

    // Alternative bit function
    const register unsigned short int AN7 = 2;
    sbit  AN7_bit at PORTE.B2;

    // Alternative bit function
    const register unsigned short int NOT_MCLR = 3;
    sbit  NOT_MCLR_bit at PORTE.B3;

    // Alternative bit function
    const register unsigned short int CPSA5 = 0;
    sbit  CPSA5_bit at PORTE.B0;

    // Alternative bit function
    const register unsigned short int CPSA6 = 1;
    sbit  CPSA6_bit at PORTE.B1;

    // Alternative bit function
    const register unsigned short int CPSA7 = 2;
    sbit  CPSA7_bit at PORTE.B2;

    // INTCON bits
    const register unsigned short int RBIF = 0;
    sbit  RBIF_bit at INTCON.B0;
    const register unsigned short int INTF = 1;
    sbit  INTF_bit at INTCON.B1;
    const register unsigned short int TMR0IF = 2;
    sbit  TMR0IF_bit at INTCON.B2;
    const register unsigned short int RBIE = 3;
    sbit  RBIE_bit at INTCON.B3;
    const register unsigned short int INTE = 4;
    sbit  INTE_bit at INTCON.B4;
    const register unsigned short int TMR0IE = 5;
    sbit  TMR0IE_bit at INTCON.B5;
    const register unsigned short int PEIE = 6;
    sbit  PEIE_bit at INTCON.B6;
    const register unsigned short int GIE = 7;
    sbit  GIE_bit at INTCON.B7;
    const register unsigned short int T0IF = 2;
    sbit  T0IF_bit at INTCON.B2;
    const register unsigned short int T0IE = 5;
    sbit  T0IE_bit at INTCON.B5;

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
    const register unsigned short int TMR1GIF = 7;
    sbit  TMR1GIF_bit at PIR1.B7;

    // PIR2 bits
    const register unsigned short int CCP2IF = 0;
    sbit  CCP2IF_bit at PIR2.B0;
    const register unsigned short int TMRAIF = 4;
    sbit  TMRAIF_bit at PIR2.B4;
    const register unsigned short int TMRBIF = 5;
    sbit  TMRBIF_bit at PIR2.B5;
    const register unsigned short int TMR3IF = 6;
    sbit  TMR3IF_bit at PIR2.B6;
    const register unsigned short int TMR3GIF = 7;
    sbit  TMR3GIF_bit at PIR2.B7;

    // T1CON bits
    const register unsigned short int TMR1ON = 0;
    sbit  TMR1ON_bit at T1CON.B0;
    const register unsigned short int NOT_T1SYNC = 2;
    sbit  NOT_T1SYNC_bit at T1CON.B2;
    const register unsigned short int T1OSCEN = 3;
    sbit  T1OSCEN_bit at T1CON.B3;
    const register unsigned short int T1SYNC = 2;
    sbit  T1SYNC_bit at T1CON.B2;
    const register unsigned short int T1CKPS0 = 4;
    sbit  T1CKPS0_bit at T1CON.B4;
    const register unsigned short int T1CKPS1 = 5;
    sbit  T1CKPS1_bit at T1CON.B5;
    const register unsigned short int TMRCS0 = 6;
    sbit  TMRCS0_bit at T1CON.B6;
    const register unsigned short int TMRCS1 = 7;
    sbit  TMRCS1_bit at T1CON.B7;

    // T2CON bits
    const register unsigned short int TMR2ON = 2;
    sbit  TMR2ON_bit at T2CON.B2;
    const register unsigned short int T2CKPS0 = 0;
    sbit  T2CKPS0_bit at T2CON.B0;
    const register unsigned short int T2CKPS1 = 1;
    sbit  T2CKPS1_bit at T2CON.B1;
    const register unsigned short int TOUTPS0 = 3;
    sbit  TOUTPS0_bit at T2CON.B3;
    const register unsigned short int TOUTPS1 = 4;
    sbit  TOUTPS1_bit at T2CON.B4;
    const register unsigned short int TOUTPS2 = 5;
    sbit  TOUTPS2_bit at T2CON.B5;
    const register unsigned short int TOUTPS3 = 6;
    sbit  TOUTPS3_bit at T2CON.B6;

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

    // ADCON0 bits
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADCON0.B0;
    const register unsigned short int GO_NOT_DONE = 1;
    sbit  GO_NOT_DONE_bit at ADCON0.B1;
    const register unsigned short int CHS0 = 2;
    sbit  CHS0_bit at ADCON0.B2;
    const register unsigned short int CHS1 = 3;
    sbit  CHS1_bit at ADCON0.B3;
    const register unsigned short int CHS2 = 4;
    sbit  CHS2_bit at ADCON0.B4;
    const register unsigned short int CHS3 = 5;
    sbit  CHS3_bit at ADCON0.B5;

    // OPTION_REG bits
    const register unsigned short int PSA = 3;
    sbit  PSA_bit at OPTION_REG.B3;
    const register unsigned short int TMR0SE = 4;
    sbit  TMR0SE_bit at OPTION_REG.B4;
    const register unsigned short int TMR0CS = 5;
    sbit  TMR0CS_bit at OPTION_REG.B5;
    const register unsigned short int INTEDG = 6;
    sbit  INTEDG_bit at OPTION_REG.B6;
    const register unsigned short int NOT_RBPU = 7;
    sbit  NOT_RBPU_bit at OPTION_REG.B7;
    const register unsigned short int PS0 = 0;
    sbit  PS0_bit at OPTION_REG.B0;
    const register unsigned short int PS1 = 1;
    sbit  PS1_bit at OPTION_REG.B1;
    const register unsigned short int PS2 = 2;
    sbit  PS2_bit at OPTION_REG.B2;
    const register unsigned short int T0SE = 4;
    sbit  T0SE_bit at OPTION_REG.B4;
    const register unsigned short int T0CS = 5;
    sbit  T0CS_bit at OPTION_REG.B5;

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
    const register unsigned short int TMR1GIE = 7;
    sbit  TMR1GIE_bit at PIE1.B7;

    // PIE2 bits
    const register unsigned short int CCP2IE = 0;
    sbit  CCP2IE_bit at PIE2.B0;
    const register unsigned short int TMRAIE = 4;
    sbit  TMRAIE_bit at PIE2.B4;
    const register unsigned short int TMRBIE = 5;
    sbit  TMRBIE_bit at PIE2.B5;
    const register unsigned short int TMR3IE = 6;
    sbit  TMR3IE_bit at PIE2.B6;
    const register unsigned short int TMR3GIE = 7;
    sbit  TMR3GIE_bit at PIE2.B7;

    // PCON bits
    const register unsigned short int NOT_BOR = 0;
    sbit  NOT_BOR_bit at PCON.B0;
    const register unsigned short int NOT_POR = 1;
    sbit  NOT_POR_bit at PCON.B1;

    // T1GCON bits
    const register unsigned short int T1GVAL = 2;
    sbit  T1GVAL_bit at T1GCON.B2;
    const register unsigned short int T1GGO_NOT_DONE = 3;
    sbit  T1GGO_NOT_DONE_bit at T1GCON.B3;
    const register unsigned short int T1GSPM = 4;
    sbit  T1GSPM_bit at T1GCON.B4;
    const register unsigned short int T1GTM = 5;
    sbit  T1GTM_bit at T1GCON.B5;
    const register unsigned short int T1GPOL = 6;
    sbit  T1GPOL_bit at T1GCON.B6;
    const register unsigned short int TMR1GE = 7;
    sbit  TMR1GE_bit at T1GCON.B7;
    const register unsigned short int T1GSS0 = 0;
    sbit  T1GSS0_bit at T1GCON.B0;
    const register unsigned short int T1GSS1 = 1;
    sbit  T1GSS1_bit at T1GCON.B1;

    // OSCCON bits
    const register unsigned short int ICSS = 2;
    sbit  ICSS_bit at OSCCON.B2;
    const register unsigned short int ICSL = 3;
    sbit  ICSL_bit at OSCCON.B3;
    const register unsigned short int IRCF0 = 4;
    sbit  IRCF0_bit at OSCCON.B4;
    const register unsigned short int IRCF1 = 5;
    sbit  IRCF1_bit at OSCCON.B5;

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

    // WPUB bits
    const register unsigned short int WPUB0 = 0;
    sbit  WPUB0_bit at WPUB.B0;
    const register unsigned short int WPUB1 = 1;
    sbit  WPUB1_bit at WPUB.B1;
    const register unsigned short int WPUB2 = 2;
    sbit  WPUB2_bit at WPUB.B2;
    const register unsigned short int WPUB3 = 3;
    sbit  WPUB3_bit at WPUB.B3;
    const register unsigned short int WPUB4 = 4;
    sbit  WPUB4_bit at WPUB.B4;
    const register unsigned short int WPUB5 = 5;
    sbit  WPUB5_bit at WPUB.B5;
    const register unsigned short int WPUB6 = 6;
    sbit  WPUB6_bit at WPUB.B6;
    const register unsigned short int WPUB7 = 7;
    sbit  WPUB7_bit at WPUB.B7;

    // IOCB bits
    const register unsigned short int IOCB0 = 0;
    sbit  IOCB0_bit at IOCB.B0;
    const register unsigned short int IOCB1 = 1;
    sbit  IOCB1_bit at IOCB.B1;
    const register unsigned short int IOCB2 = 2;
    sbit  IOCB2_bit at IOCB.B2;
    const register unsigned short int IOCB3 = 3;
    sbit  IOCB3_bit at IOCB.B3;
    const register unsigned short int IOCB4 = 4;
    sbit  IOCB4_bit at IOCB.B4;
    const register unsigned short int IOCB5 = 5;
    sbit  IOCB5_bit at IOCB.B5;
    const register unsigned short int IOCB6 = 6;
    sbit  IOCB6_bit at IOCB.B6;
    const register unsigned short int IOCB7 = 7;
    sbit  IOCB7_bit at IOCB.B7;

    // T3CON bits
    const register unsigned short int TMR3ON = 0;
    sbit  TMR3ON_bit at T3CON.B0;
    const register unsigned short int T3SYNC = 2;
    sbit  T3SYNC_bit at T3CON.B2;
    const register unsigned short int T3CKPS0 = 4;
    sbit  T3CKPS0_bit at T3CON.B4;
    const register unsigned short int T3CKPS1 = 5;
    sbit  T3CKPS1_bit at T3CON.B5;
    const register unsigned short int TMR3CS0 = 6;
    sbit  TMR3CS0_bit at T3CON.B6;
    const register unsigned short int TMR3CS1 = 7;
    sbit  TMR3CS1_bit at T3CON.B7;

    // TXSTA bits
    const register unsigned short int TX9D = 0;
    sbit  TX9D_bit at TXSTA.B0;
    const register unsigned short int TRMT = 1;
    sbit  TRMT_bit at TXSTA.B1;
    const register unsigned short int BRGH = 2;
    sbit  BRGH_bit at TXSTA.B2;
    const register unsigned short int SYNC = 4;
    sbit  SYNC_bit at TXSTA.B4;
    const register unsigned short int TXEN = 5;
    sbit  TXEN_bit at TXSTA.B5;
    const register unsigned short int TX9 = 6;
    sbit  TX9_bit at TXSTA.B6;
    const register unsigned short int CSRC = 7;
    sbit  CSRC_bit at TXSTA.B7;

    // APFCON bits
    const register unsigned short int CCP2SEL = 0;
    sbit  CCP2SEL_bit at APFCON.B0;
    const register unsigned short int SSSEL = 1;
    sbit  SSSEL_bit at APFCON.B1;

    // FVRCON bits
    const register unsigned short int FVREN = 6;
    sbit  FVREN_bit at FVRCON.B6;
    const register unsigned short int FVRRDY = 7;
    sbit  FVRRDY_bit at FVRCON.B7;
    const register unsigned short int ADFVR0 = 0;
    sbit  ADFVR0_bit at FVRCON.B0;
    const register unsigned short int ADFVR1 = 1;
    sbit  ADFVR1_bit at FVRCON.B1;
    const register unsigned short int CDAFVR0 = 2;
    sbit  CDAFVR0_bit at FVRCON.B2;
    const register unsigned short int CDAFVR1 = 3;
    sbit  CDAFVR1_bit at FVRCON.B3;

    // T3GCON bits
    const register unsigned short int T3GVAL = 2;
    sbit  T3GVAL_bit at T3GCON.B2;
    const register unsigned short int T3GGO_NOT_DONE = 3;
    sbit  T3GGO_NOT_DONE_bit at T3GCON.B3;
    const register unsigned short int T3GSPM = 4;
    sbit  T3GSPM_bit at T3GCON.B4;
    const register unsigned short int T3GTM = 5;
    sbit  T3GTM_bit at T3GCON.B5;
    const register unsigned short int T3GPOL = 6;
    sbit  T3GPOL_bit at T3GCON.B6;
    const register unsigned short int TMR3GE = 7;
    sbit  TMR3GE_bit at T3GCON.B7;
    const register unsigned short int T3GSS0 = 0;
    sbit  T3GSS0_bit at T3GCON.B0;
    const register unsigned short int T3GSS1 = 1;
    sbit  T3GSS1_bit at T3GCON.B1;

    // ADCON1 bits
    const register unsigned short int ADREF0 = 0;
    sbit  ADREF0_bit at ADCON1.B0;
    const register unsigned short int ADREF1 = 1;
    sbit  ADREF1_bit at ADCON1.B1;
    const register unsigned short int ADCS0 = 4;
    sbit  ADCS0_bit at ADCON1.B4;
    const register unsigned short int ADCS1 = 5;
    sbit  ADCS1_bit at ADCON1.B5;
    const register unsigned short int ADCS2 = 6;
    sbit  ADCS2_bit at ADCON1.B6;

    // TACON bits
    const register unsigned short int TAPSA = 3;
    sbit  TAPSA_bit at TACON.B3;
    const register unsigned short int TASE = 4;
    sbit  TASE_bit at TACON.B4;
    const register unsigned short int TACS = 5;
    sbit  TACS_bit at TACON.B5;
    const register unsigned short int TMRAON = 7;
    sbit  TMRAON_bit at TACON.B7;
    const register unsigned short int TAPS0 = 0;
    sbit  TAPS0_bit at TACON.B0;
    const register unsigned short int TAPS1 = 1;
    sbit  TAPS1_bit at TACON.B1;
    const register unsigned short int TAPS2 = 2;
    sbit  TAPS2_bit at TACON.B2;
    const register unsigned short int TMRAPSA = 3;
    sbit  TMRAPSA_bit at TACON.B3;
    const register unsigned short int TMRASE = 4;
    sbit  TMRASE_bit at TACON.B4;
    const register unsigned short int TMRACS = 5;
    sbit  TMRACS_bit at TACON.B5;
    const register unsigned short int TMRAPS0 = 0;
    sbit  TMRAPS0_bit at TACON.B0;
    const register unsigned short int TMRAPS1 = 1;
    sbit  TMRAPS1_bit at TACON.B1;
    const register unsigned short int TMRAPS2 = 2;
    sbit  TMRAPS2_bit at TACON.B2;

    // CPSBCON0 bits
    const register unsigned short int TBXCS = 0;
    sbit  TBXCS_bit at CPSBCON0.B0;
    const register unsigned short int CPSBOUT = 1;
    sbit  CPSBOUT_bit at CPSBCON0.B1;
    const register unsigned short int CPSBRM = 6;
    sbit  CPSBRM_bit at CPSBCON0.B6;
    const register unsigned short int CPSBON = 7;
    sbit  CPSBON_bit at CPSBCON0.B7;
    const register unsigned short int CPSBRNG0 = 2;
    sbit  CPSBRNG0_bit at CPSBCON0.B2;
    const register unsigned short int CPSBRNG1 = 3;
    sbit  CPSBRNG1_bit at CPSBCON0.B3;

    // CPSBCON1 bits
    const register unsigned short int CPSBCH0 = 0;
    sbit  CPSBCH0_bit at CPSBCON1.B0;
    const register unsigned short int CPSBCH1 = 1;
    sbit  CPSBCH1_bit at CPSBCON1.B1;
    const register unsigned short int CPSBCH2 = 2;
    sbit  CPSBCH2_bit at CPSBCON1.B2;
    const register unsigned short int CPSBCH3 = 3;
    sbit  CPSBCH3_bit at CPSBCON1.B3;

    // CPSACON0 bits
    const register unsigned short int TAXCS = 0;
    sbit  TAXCS_bit at CPSACON0.B0;
    const register unsigned short int CPSAOUT = 1;
    sbit  CPSAOUT_bit at CPSACON0.B1;
    const register unsigned short int CPSARM = 6;
    sbit  CPSARM_bit at CPSACON0.B6;
    const register unsigned short int CPSAON = 7;
    sbit  CPSAON_bit at CPSACON0.B7;
    const register unsigned short int CPSARNG0 = 2;
    sbit  CPSARNG0_bit at CPSACON0.B2;
    const register unsigned short int CPSARNG1 = 3;
    sbit  CPSARNG1_bit at CPSACON0.B3;

    // CPSACON1 bits
    const register unsigned short int CPSACH0 = 0;
    sbit  CPSACH0_bit at CPSACON1.B0;
    const register unsigned short int CPSACH1 = 1;
    sbit  CPSACH1_bit at CPSACON1.B1;
    const register unsigned short int CPSACH2 = 2;
    sbit  CPSACH2_bit at CPSACON1.B2;
    const register unsigned short int CPSACH3 = 3;
    sbit  CPSACH3_bit at CPSACON1.B3;

    // TBCON bits
    const register unsigned short int TBPSA = 3;
    sbit  TBPSA_bit at TBCON.B3;
    const register unsigned short int TBSE = 4;
    sbit  TBSE_bit at TBCON.B4;
    const register unsigned short int TBCS = 5;
    sbit  TBCS_bit at TBCON.B5;
    const register unsigned short int TMRBON = 7;
    sbit  TMRBON_bit at TBCON.B7;
    const register unsigned short int TBPS0 = 0;
    sbit  TBPS0_bit at TBCON.B0;
    const register unsigned short int TBPS1 = 1;
    sbit  TBPS1_bit at TBCON.B1;
    const register unsigned short int TBPS2 = 2;
    sbit  TBPS2_bit at TBCON.B2;
    const register unsigned short int TMRBPSA = 3;
    sbit  TMRBPSA_bit at TBCON.B3;
    const register unsigned short int TMRBSE = 4;
    sbit  TMRBSE_bit at TBCON.B4;
    const register unsigned short int TMRBCS = 5;
    sbit  TMRBCS_bit at TBCON.B5;
    const register unsigned short int TMRBPS0 = 0;
    sbit  TMRBPS0_bit at TBCON.B0;
    const register unsigned short int TMRBPS1 = 1;
    sbit  TMRBPS1_bit at TBCON.B1;
    const register unsigned short int TMRBPS2 = 2;
    sbit  TMRBPS2_bit at TBCON.B2;

    // DACCON0 bits
    const register unsigned short int DACOE = 5;
    sbit  DACOE_bit at DACCON0.B5;
    const register unsigned short int DACLPS = 6;
    sbit  DACLPS_bit at DACCON0.B6;
    const register unsigned short int DACEN = 7;
    sbit  DACEN_bit at DACCON0.B7;
    const register unsigned short int DACPSS0 = 2;
    sbit  DACPSS0_bit at DACCON0.B2;
    const register unsigned short int DACPSS1 = 3;
    sbit  DACPSS1_bit at DACCON0.B3;

    // DACCON1 bits
    const register unsigned short int DACR0 = 0;
    sbit  DACR0_bit at DACCON1.B0;
    const register unsigned short int DACR1 = 1;
    sbit  DACR1_bit at DACCON1.B1;
    const register unsigned short int DACR2 = 2;
    sbit  DACR2_bit at DACCON1.B2;
    const register unsigned short int DACR3 = 3;
    sbit  DACR3_bit at DACCON1.B3;
    const register unsigned short int DACR4 = 4;
    sbit  DACR4_bit at DACCON1.B4;

    // ANSELA bits
    const register unsigned short int ANSA0 = 0;
    sbit  ANSA0_bit at ANSELA.B0;
    const register unsigned short int ANSA1 = 1;
    sbit  ANSA1_bit at ANSELA.B1;
    const register unsigned short int ANSA2 = 2;
    sbit  ANSA2_bit at ANSELA.B2;
    const register unsigned short int ANSA3 = 3;
    sbit  ANSA3_bit at ANSELA.B3;
    const register unsigned short int ANSA4 = 4;
    sbit  ANSA4_bit at ANSELA.B4;
    const register unsigned short int ANSA5 = 5;
    sbit  ANSA5_bit at ANSELA.B5;
    const register unsigned short int ANSA6 = 6;
    sbit  ANSA6_bit at ANSELA.B6;
    const register unsigned short int ANSA7 = 7;
    sbit  ANSA7_bit at ANSELA.B7;

    // ANSELB bits
    const register unsigned short int ANSB0 = 0;
    sbit  ANSB0_bit at ANSELB.B0;
    const register unsigned short int ANSB1 = 1;
    sbit  ANSB1_bit at ANSELB.B1;
    const register unsigned short int ANSB2 = 2;
    sbit  ANSB2_bit at ANSELB.B2;
    const register unsigned short int ANSB3 = 3;
    sbit  ANSB3_bit at ANSELB.B3;
    const register unsigned short int ANSB4 = 4;
    sbit  ANSB4_bit at ANSELB.B4;
    const register unsigned short int ANSB5 = 5;
    sbit  ANSB5_bit at ANSELB.B5;
    const register unsigned short int ANSB6 = 6;
    sbit  ANSB6_bit at ANSELB.B6;
    const register unsigned short int ANSB7 = 7;
    sbit  ANSB7_bit at ANSELB.B7;

    // ANSELC bits
    const register unsigned short int ANSC0 = 0;
    sbit  ANSC0_bit at ANSELC.B0;
    const register unsigned short int ANSC1 = 1;
    sbit  ANSC1_bit at ANSELC.B1;
    const register unsigned short int ANSC2 = 2;
    sbit  ANSC2_bit at ANSELC.B2;
    const register unsigned short int ANSC5 = 5;
    sbit  ANSC5_bit at ANSELC.B5;
    const register unsigned short int ANSC6 = 6;
    sbit  ANSC6_bit at ANSELC.B6;
    const register unsigned short int ANSC7 = 7;
    sbit  ANSC7_bit at ANSELC.B7;

    // ANSELD bits
    const register unsigned short int ANSD0 = 0;
    sbit  ANSD0_bit at ANSELD.B0;
    const register unsigned short int ANSD1 = 1;
    sbit  ANSD1_bit at ANSELD.B1;
    const register unsigned short int ANSD2 = 2;
    sbit  ANSD2_bit at ANSELD.B2;
    const register unsigned short int ANSD3 = 3;
    sbit  ANSD3_bit at ANSELD.B3;
    const register unsigned short int ANSD4 = 4;
    sbit  ANSD4_bit at ANSELD.B4;
    const register unsigned short int ANSD5 = 5;
    sbit  ANSD5_bit at ANSELD.B5;
    const register unsigned short int ANSD6 = 6;
    sbit  ANSD6_bit at ANSELD.B6;
    const register unsigned short int ANSD7 = 7;
    sbit  ANSD7_bit at ANSELD.B7;

    // ANSELE bits
    const register unsigned short int ANSE0 = 0;
    sbit  ANSE0_bit at ANSELE.B0;
    const register unsigned short int ANSE1 = 1;
    sbit  ANSE1_bit at ANSELE.B1;
    const register unsigned short int ANSE2 = 2;
    sbit  ANSE2_bit at ANSELE.B2;

    // PMCON1 bits
    const register unsigned short int RD = 0;
    sbit  RD_bit at PMCON1.B0;

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
    const register unsigned short int TRISE3 = 3;
    sbit  TRISE3_bit at TRISE.B3;
    const register unsigned short int TRISE2 = 2;
    sbit  TRISE2_bit at TRISE.B2;
    const register unsigned short int TRISE1 = 1;
    sbit  TRISE1_bit at TRISE.B1;
    const register unsigned short int TRISE0 = 0;
    sbit  TRISE0_bit at TRISE.B0;

    // OSCTUNE bits
    const register unsigned short int TUN5 = 5;
    sbit  TUN5_bit at OSCTUNE.B5;
    const register unsigned short int TUN4 = 4;
    sbit  TUN4_bit at OSCTUNE.B4;
    const register unsigned short int TUN3 = 3;
    sbit  TUN3_bit at OSCTUNE.B3;
    const register unsigned short int TUN2 = 2;
    sbit  TUN2_bit at OSCTUNE.B2;
    const register unsigned short int TUN1 = 1;
    sbit  TUN1_bit at OSCTUNE.B1;
    const register unsigned short int TUN0 = 0;
    sbit  TUN0_bit at OSCTUNE.B0;
