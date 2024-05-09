// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00004000;

// Working space registers
rx unsigned short R0  absolute 0x0070;
rx unsigned short R1  absolute 0x0071;
rx unsigned short R2  absolute 0x0072;
rx unsigned short R3  absolute 0x0073;
rx unsigned short R4  absolute 0x0074;
rx unsigned short R5  absolute 0x0075;
rx unsigned short R6  absolute 0x0076;
rx unsigned short R7  absolute 0x0077;
rx unsigned short R8  absolute 0x0078;
rx unsigned short R9  absolute 0x0079;
rx unsigned short R10 absolute 0x007A;
rx unsigned short R11 absolute 0x007B;
rx unsigned short R12 absolute 0x007C;
rx unsigned short R13 absolute 0x007D;
rx unsigned short R14 absolute 0x007E;
rx unsigned short R15 absolute 0x007F;

const register unsigned short int W = 0;
const register unsigned short int F = 1;

// Special function registers (SFRs)

const signed int   PORT_TO_TRIS_OFFSET    =     128;

const unsigned short ICS_AUTO                  =     0;
const unsigned short ICS_OFF                   =     3;

sfr unsigned short volatile INDF0            absolute 0x0000;
sfr unsigned short volatile INDF1            absolute 0x0001;
sfr unsigned short volatile PCL              absolute 0x0002;
sfr unsigned short volatile STATUS           absolute 0x0003;
sfr unsigned int            FSR0             absolute 0x0004;
sfr unsigned short          FSR0L            absolute 0x0004;
register unsigned short     *FSR0PTR         absolute 0x0004;
sfr unsigned short          FSR0H            absolute 0x0005;
sfr unsigned int            FSR1             absolute 0x0006;
sfr unsigned short          FSR1L            absolute 0x0006;
register unsigned short     *FSR1PTR         absolute 0x0006;
sfr unsigned short          FSR1H            absolute 0x0007;
sfr unsigned short          BSR              absolute 0x0008;
sfr unsigned short volatile WREG             absolute 0x0009;
sfr unsigned short volatile PCLATH           absolute 0x000A;
sfr unsigned short volatile INTCON           absolute 0x000B;
sfr unsigned short volatile PIR1             absolute 0x0011;
sfr unsigned short volatile PIR2             absolute 0x0012;
sfr unsigned short volatile TMR0             absolute 0x0015;
sfr unsigned short volatile TMR1L            absolute 0x0016;
sfr unsigned short volatile TMR1H            absolute 0x0017;
sfr unsigned short volatile T1CON            absolute 0x0018;
sfr unsigned short volatile T1GCON           absolute 0x0019;
sfr unsigned short volatile TMR2             absolute 0x001A;
sfr unsigned short volatile PR2              absolute 0x001B;
sfr unsigned short volatile T2CON            absolute 0x001C;
sfr unsigned short volatile PIE1             absolute 0x0091;
sfr unsigned short volatile PIE2             absolute 0x0092;
sfr unsigned short volatile OPTION_REG       absolute 0x0095;
sfr unsigned short volatile PCON             absolute 0x0096;
sfr unsigned short          WDTCON           absolute 0x0097;
sfr unsigned short volatile OSCCON           absolute 0x0099;
sfr unsigned short volatile OSCSTAT          absolute 0x009A;
sfr unsigned short volatile ADRESL           absolute 0x009B;
sfr unsigned short volatile ADRESH           absolute 0x009C;
sfr unsigned short volatile ADCON0           absolute 0x009D;
sfr unsigned short volatile ADCON1           absolute 0x009E;
sfr unsigned short volatile LATA             absolute 0x010C;
sfr unsigned short volatile LATB             absolute 0x010D;
sfr unsigned short volatile LATC             absolute 0x010E;
sfr unsigned short volatile BORCON           absolute 0x0116;
sfr unsigned short volatile FVRCON           absolute 0x0117;
sfr unsigned short          APFCON           absolute 0x011D;
sfr unsigned short volatile ANSELA           absolute 0x018C;
sfr unsigned short volatile ANSELB           absolute 0x018D;
sfr unsigned short volatile ANSELC           absolute 0x018E;
sfr unsigned int   volatile PMADR            absolute 0x0191;
sfr unsigned short volatile PMADRL           absolute 0x0191;
sfr unsigned short volatile PMADRH           absolute 0x0192;
sfr unsigned int   volatile PMDAT            absolute 0x0193;
sfr unsigned short volatile PMDATL           absolute 0x0193;
sfr unsigned short volatile PMDATH           absolute 0x0194;
sfr unsigned short volatile PMCON1           absolute 0x0195;
sfr unsigned short volatile PMCON2           absolute 0x0196;
sfr unsigned short volatile VREGCON          absolute 0x0197;
sfr unsigned short volatile RCREG            absolute 0x0199;
sfr unsigned short volatile TXREG            absolute 0x019A;
sfr unsigned int            SPBRG            absolute 0x019B;
sfr unsigned short volatile SPBRGL           absolute 0x019B;
sfr unsigned short          SPBRGH           absolute 0x019C;
sfr unsigned short volatile RCSTA            absolute 0x019D;
sfr unsigned short volatile TXSTA            absolute 0x019E;
sfr unsigned short          BAUDCON          absolute 0x019F;
sfr unsigned short          WPUB             absolute 0x020D;
sfr unsigned short volatile WPUE             absolute 0x0210;
sfr unsigned short volatile SSP1BUF          absolute 0x0211;
sfr unsigned short volatile SSPBUF           absolute 0x0211;
sfr unsigned short volatile SSP1ADD          absolute 0x0212;
sfr unsigned short volatile SSPADD           absolute 0x0212;
sfr unsigned short volatile SSP1MSK          absolute 0x0213;
sfr unsigned short volatile SSPMSK           absolute 0x0213;
sfr unsigned short volatile SSP1STAT         absolute 0x0214;
sfr unsigned short volatile SSPSTAT          absolute 0x0214;
sfr unsigned short volatile SSP1CON1         absolute 0x0215;
sfr unsigned short volatile SSPCON           absolute 0x0215;
sfr unsigned short volatile SSPCON1          absolute 0x0215;
sfr unsigned short volatile SSP1CON2         absolute 0x0216;
sfr unsigned short volatile SSPCON2          absolute 0x0216;
sfr unsigned short volatile SSP1CON3         absolute 0x0217;
sfr unsigned short volatile SSPCON3          absolute 0x0217;
sfr unsigned short volatile CCPR1L           absolute 0x0291;
sfr unsigned short volatile CCPR1H           absolute 0x0292;
sfr unsigned short volatile CCP1CON          absolute 0x0293;
sfr unsigned short volatile CCP2CON          absolute 0x029A;
sfr unsigned short volatile IOCBP            absolute 0x0394;
sfr unsigned short volatile IOCBN            absolute 0x0395;
sfr unsigned short volatile IOCBF            absolute 0x0396;
sfr unsigned short volatile STATUS_SHAD      absolute 0x0FE4;
sfr unsigned short volatile WREG_SHAD        absolute 0x0FE5;
sfr unsigned short volatile BSR_SHAD         absolute 0x0FE6;
sfr unsigned short volatile PCLATH_SHAD      absolute 0x0FE7;
sfr unsigned short volatile FSR0L_SHAD       absolute 0x0FE8;
sfr unsigned short volatile FSR0H_SHAD       absolute 0x0FE9;
sfr unsigned short volatile FSR1L_SHAD       absolute 0x0FEA;
sfr unsigned short volatile FSR1H_SHAD       absolute 0x0FEB;
sfr unsigned short volatile STKPTR           absolute 0x0FED;
sfr unsigned short volatile PORTA            absolute 0x000C;
sfr unsigned short volatile PORTB            absolute 0x000D;
sfr unsigned short volatile PORTC            absolute 0x000E;
sfr unsigned short volatile PORTE            absolute 0x0010;
sfr unsigned short volatile TRISA            absolute 0x008C;
sfr unsigned short volatile TRISB            absolute 0x008D;
sfr unsigned short volatile TRISC            absolute 0x008E;
sfr unsigned short volatile TRISE            absolute 0x0090;
sfr unsigned short volatile CCPR2L           absolute 0x0298;
sfr unsigned short volatile CCPR2H           absolute 0x0299;
sfr unsigned short volatile TOSL             absolute 0x0FEE;
sfr unsigned short volatile TOSH             absolute 0x0FEF;

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

    // BSR bits
    const register unsigned short int BSR0 = 0;
    sbit  BSR0_bit at BSR.B0;
    const register unsigned short int BSR1 = 1;
    sbit  BSR1_bit at BSR.B1;
    const register unsigned short int BSR2 = 2;
    sbit  BSR2_bit at BSR.B2;
    const register unsigned short int BSR3 = 3;
    sbit  BSR3_bit at BSR.B3;
    const register unsigned short int BSR4 = 4;
    sbit  BSR4_bit at BSR.B4;

    // INTCON bits
    const register unsigned short int IOCIF = 0;
    sbit  IOCIF_bit at INTCON.B0;
    const register unsigned short int INTF = 1;
    sbit  INTF_bit at INTCON.B1;
    const register unsigned short int TMR0IF = 2;
    sbit  TMR0IF_bit at INTCON.B2;
    const register unsigned short int IOCIE = 3;
    sbit  IOCIE_bit at INTCON.B3;
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
    const register unsigned short int BCLIF = 3;
    sbit  BCLIF_bit at PIR2.B3;
    const register unsigned short int OSFIF = 7;
    sbit  OSFIF_bit at PIR2.B7;

    // T1CON bits
    const register unsigned short int TMR1ON = 0;
    sbit  TMR1ON_bit at T1CON.B0;
    const register unsigned short int NOT_T1SYNC = 2;
    sbit  NOT_T1SYNC_bit at T1CON.B2;
    const register unsigned short int T1OSCEN = 3;
    sbit  T1OSCEN_bit at T1CON.B3;
    const register unsigned short int T1CKPS0 = 4;
    sbit  T1CKPS0_bit at T1CON.B4;
    const register unsigned short int T1CKPS1 = 5;
    sbit  T1CKPS1_bit at T1CON.B5;
    const register unsigned short int TMR1CS0 = 6;
    sbit  TMR1CS0_bit at T1CON.B6;
    const register unsigned short int TMR1CS1 = 7;
    sbit  TMR1CS1_bit at T1CON.B7;

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
    const register unsigned short int BCLIE = 3;
    sbit  BCLIE_bit at PIE2.B3;
    const register unsigned short int OSFIE = 7;
    sbit  OSFIE_bit at PIE2.B7;

    // OPTION_REG bits
    const register unsigned short int PSA = 3;
    sbit  PSA_bit at OPTION_REG.B3;
    const register unsigned short int TMR0SE = 4;
    sbit  TMR0SE_bit at OPTION_REG.B4;
    const register unsigned short int TMR0CS = 5;
    sbit  TMR0CS_bit at OPTION_REG.B5;
    const register unsigned short int INTEDG = 6;
    sbit  INTEDG_bit at OPTION_REG.B6;
    const register unsigned short int NOT_WPUEN = 7;
    sbit  NOT_WPUEN_bit at OPTION_REG.B7;
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

    // PCON bits
    const register unsigned short int NOT_BOR = 0;
    sbit  NOT_BOR_bit at PCON.B0;
    const register unsigned short int NOT_POR = 1;
    sbit  NOT_POR_bit at PCON.B1;
    const register unsigned short int NOT_RI = 2;
    sbit  NOT_RI_bit at PCON.B2;
    const register unsigned short int NOT_RMCLR = 3;
    sbit  NOT_RMCLR_bit at PCON.B3;
    const register unsigned short int NOT_RWDT = 4;
    sbit  NOT_RWDT_bit at PCON.B4;
    const register unsigned short int STKUNF = 6;
    sbit  STKUNF_bit at PCON.B6;
    const register unsigned short int STKOVF = 7;
    sbit  STKOVF_bit at PCON.B7;

    // WDTCON bits
    const register unsigned short int SWDTEN = 0;
    sbit  SWDTEN_bit at WDTCON.B0;
    const register unsigned short int WDTPS0 = 1;
    sbit  WDTPS0_bit at WDTCON.B1;
    const register unsigned short int WDTPS1 = 2;
    sbit  WDTPS1_bit at WDTCON.B2;
    const register unsigned short int WDTPS2 = 3;
    sbit  WDTPS2_bit at WDTCON.B3;
    const register unsigned short int WDTPS3 = 4;
    sbit  WDTPS3_bit at WDTCON.B4;
    const register unsigned short int WDTPS4 = 5;
    sbit  WDTPS4_bit at WDTCON.B5;

    // OSCCON bits
    const register unsigned short int SCS0 = 0;
    sbit  SCS0_bit at OSCCON.B0;
    const register unsigned short int SCS1 = 1;
    sbit  SCS1_bit at OSCCON.B1;
    const register unsigned short int IRCF0 = 3;
    sbit  IRCF0_bit at OSCCON.B3;
    const register unsigned short int IRCF1 = 4;
    sbit  IRCF1_bit at OSCCON.B4;
    const register unsigned short int IRCF2 = 5;
    sbit  IRCF2_bit at OSCCON.B5;
    const register unsigned short int IRCF3 = 6;
    sbit  IRCF3_bit at OSCCON.B6;

    // OSCSTAT bits
    const register unsigned short int HFIOFS = 0;
    sbit  HFIOFS_bit at OSCSTAT.B0;
    const register unsigned short int LFIOFR = 1;
    sbit  LFIOFR_bit at OSCSTAT.B1;
    const register unsigned short int HFIOFR = 4;
    sbit  HFIOFR_bit at OSCSTAT.B4;
    const register unsigned short int OSTS = 5;
    sbit  OSTS_bit at OSCSTAT.B5;
    const register unsigned short int SOSCR = 7;
    sbit  SOSCR_bit at OSCSTAT.B7;
    const register unsigned short int T1OSCR = 7;
    sbit  T1OSCR_bit at OSCSTAT.B7;

    // ADCON0 bits
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADCON0.B0;
    const register unsigned short int GO_NOT_DONE = 1;
    sbit  GO_NOT_DONE_bit at ADCON0.B1;
    const register unsigned short int ADGO = 1;
    sbit  ADGO_bit at ADCON0.B1;
    const register unsigned short int CHS0 = 2;
    sbit  CHS0_bit at ADCON0.B2;
    const register unsigned short int CHS1 = 3;
    sbit  CHS1_bit at ADCON0.B3;
    const register unsigned short int CHS2 = 4;
    sbit  CHS2_bit at ADCON0.B4;
    const register unsigned short int CHS3 = 5;
    sbit  CHS3_bit at ADCON0.B5;
    const register unsigned short int CHS4 = 6;
    sbit  CHS4_bit at ADCON0.B6;
    const register unsigned short int GO = 1;
    sbit  GO_bit at ADCON0.B1;

    // ADCON1 bits
    const register unsigned short int ADFM = 7;
    sbit  ADFM_bit at ADCON1.B7;
    const register unsigned short int ADPREF0 = 0;
    sbit  ADPREF0_bit at ADCON1.B0;
    const register unsigned short int ADPREF1 = 1;
    sbit  ADPREF1_bit at ADCON1.B1;
    const register unsigned short int ADCS0 = 4;
    sbit  ADCS0_bit at ADCON1.B4;
    const register unsigned short int ADCS1 = 5;
    sbit  ADCS1_bit at ADCON1.B5;
    const register unsigned short int ADCS2 = 6;
    sbit  ADCS2_bit at ADCON1.B6;

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

    // BORCON bits
    const register unsigned short int BORRDY = 0;
    sbit  BORRDY_bit at BORCON.B0;
    const register unsigned short int BORFS = 6;
    sbit  BORFS_bit at BORCON.B6;
    const register unsigned short int SBOREN = 7;
    sbit  SBOREN_bit at BORCON.B7;

    // FVRCON bits
    const register unsigned short int TSRNG = 4;
    sbit  TSRNG_bit at FVRCON.B4;
    const register unsigned short int TSEN = 5;
    sbit  TSEN_bit at FVRCON.B5;
    const register unsigned short int FVRRDY = 6;
    sbit  FVRRDY_bit at FVRCON.B6;
    const register unsigned short int FVREN = 7;
    sbit  FVREN_bit at FVRCON.B7;
    const register unsigned short int ADFVR0 = 0;
    sbit  ADFVR0_bit at FVRCON.B0;
    const register unsigned short int ADFVR1 = 1;
    sbit  ADFVR1_bit at FVRCON.B1;

    // APFCON bits
    const register unsigned short int CCP2SEL = 0;
    sbit  CCP2SEL_bit at APFCON.B0;
    const register unsigned short int SSSEL = 1;
    sbit  SSSEL_bit at APFCON.B1;

    // ANSELA bits
    const register unsigned short int ANSA0 = 0;
    sbit  ANSA0_bit at ANSELA.B0;
    const register unsigned short int ANSA1 = 1;
    sbit  ANSA1_bit at ANSELA.B1;
    const register unsigned short int ANSA2 = 2;
    sbit  ANSA2_bit at ANSELA.B2;
    const register unsigned short int ANSA3 = 3;
    sbit  ANSA3_bit at ANSELA.B3;
    const register unsigned short int ANSA5 = 5;
    sbit  ANSA5_bit at ANSELA.B5;

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

    // ANSELC bits
    const register unsigned short int ANSC0 = 0;
    sbit  ANSC0_bit at ANSELC.B0;
    const register unsigned short int ANSC1 = 1;
    sbit  ANSC1_bit at ANSELC.B1;
    const register unsigned short int ANSC2 = 2;
    sbit  ANSC2_bit at ANSELC.B2;
    const register unsigned short int ANSC3 = 3;
    sbit  ANSC3_bit at ANSELC.B3;
    const register unsigned short int ANSC4 = 4;
    sbit  ANSC4_bit at ANSELC.B4;
    const register unsigned short int ANSC5 = 5;
    sbit  ANSC5_bit at ANSELC.B5;
    const register unsigned short int ANSC6 = 6;
    sbit  ANSC6_bit at ANSELC.B6;
    const register unsigned short int ANSC7 = 7;
    sbit  ANSC7_bit at ANSELC.B7;

    // PMCON1 bits
    const register unsigned short int RD = 0;
    sbit  RD_bit at PMCON1.B0;
    const register unsigned short int WR = 1;
    sbit  WR_bit at PMCON1.B1;
    const register unsigned short int WREN = 2;
    sbit  WREN_bit at PMCON1.B2;
    const register unsigned short int WRERR = 3;
    sbit  WRERR_bit at PMCON1.B3;
    const register unsigned short int FREE = 4;
    sbit  FREE_bit at PMCON1.B4;
    const register unsigned short int LWLO = 5;
    sbit  LWLO_bit at PMCON1.B5;
    const register unsigned short int CFGS = 6;
    sbit  CFGS_bit at PMCON1.B6;

    // VREGCON bits
    const register unsigned short int reserved = 0;
    sbit  reserved_bit at VREGCON.B0;
    const register unsigned short int VREGPM = 1;
    sbit  VREGPM_bit at VREGCON.B1;

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

    // BAUDCON bits
    const register unsigned short int ABDEN = 0;
    sbit  ABDEN_bit at BAUDCON.B0;
    const register unsigned short int WUE = 1;
    sbit  WUE_bit at BAUDCON.B1;
    const register unsigned short int BRG16 = 3;
    sbit  BRG16_bit at BAUDCON.B3;
    const register unsigned short int SCKP = 4;
    sbit  SCKP_bit at BAUDCON.B4;
    const register unsigned short int RCIDL = 6;
    sbit  RCIDL_bit at BAUDCON.B6;
    const register unsigned short int ABDOVF = 7;
    sbit  ABDOVF_bit at BAUDCON.B7;

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

    // WPUE bits
    const register unsigned short int WPUE3 = 3;
    sbit  WPUE3_bit at WPUE.B3;

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

    // SSP1CON1, SSPCON, SSPCON1 bits
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

    // SSP1CON3, SSPCON3 bits
    const register unsigned short int DHEN = 0;
    sbit  DHEN_bit at SSP1CON3.B0;
    const register unsigned short int AHEN = 1;
    sbit  AHEN_bit at SSP1CON3.B1;
    const register unsigned short int SBCDE = 2;
    sbit  SBCDE_bit at SSP1CON3.B2;
    const register unsigned short int SDAHT = 3;
    sbit  SDAHT_bit at SSP1CON3.B3;
    const register unsigned short int BOEN = 4;
    sbit  BOEN_bit at SSP1CON3.B4;
    const register unsigned short int SCIE = 5;
    sbit  SCIE_bit at SSP1CON3.B5;
    const register unsigned short int PCIE = 6;
    sbit  PCIE_bit at SSP1CON3.B6;
    const register unsigned short int ACKTIM = 7;
    sbit  ACKTIM_bit at SSP1CON3.B7;

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

    // IOCBP bits
    const register unsigned short int IOCBP0 = 0;
    sbit  IOCBP0_bit at IOCBP.B0;
    const register unsigned short int IOCBP1 = 1;
    sbit  IOCBP1_bit at IOCBP.B1;
    const register unsigned short int IOCBP2 = 2;
    sbit  IOCBP2_bit at IOCBP.B2;
    const register unsigned short int IOCBP3 = 3;
    sbit  IOCBP3_bit at IOCBP.B3;
    const register unsigned short int IOCBP4 = 4;
    sbit  IOCBP4_bit at IOCBP.B4;
    const register unsigned short int IOCBP5 = 5;
    sbit  IOCBP5_bit at IOCBP.B5;
    const register unsigned short int IOCBP6 = 6;
    sbit  IOCBP6_bit at IOCBP.B6;
    const register unsigned short int IOCBP7 = 7;
    sbit  IOCBP7_bit at IOCBP.B7;

    // IOCBN bits
    const register unsigned short int IOCBN0 = 0;
    sbit  IOCBN0_bit at IOCBN.B0;
    const register unsigned short int IOCBN1 = 1;
    sbit  IOCBN1_bit at IOCBN.B1;
    const register unsigned short int IOCBN2 = 2;
    sbit  IOCBN2_bit at IOCBN.B2;
    const register unsigned short int IOCBN3 = 3;
    sbit  IOCBN3_bit at IOCBN.B3;
    const register unsigned short int IOCBN4 = 4;
    sbit  IOCBN4_bit at IOCBN.B4;
    const register unsigned short int IOCBN5 = 5;
    sbit  IOCBN5_bit at IOCBN.B5;
    const register unsigned short int IOCBN6 = 6;
    sbit  IOCBN6_bit at IOCBN.B6;
    const register unsigned short int IOCBN7 = 7;
    sbit  IOCBN7_bit at IOCBN.B7;

    // IOCBF bits
    const register unsigned short int IOCBF0 = 0;
    sbit  IOCBF0_bit at IOCBF.B0;
    const register unsigned short int IOCBF1 = 1;
    sbit  IOCBF1_bit at IOCBF.B1;
    const register unsigned short int IOCBF2 = 2;
    sbit  IOCBF2_bit at IOCBF.B2;
    const register unsigned short int IOCBF3 = 3;
    sbit  IOCBF3_bit at IOCBF.B3;
    const register unsigned short int IOCBF4 = 4;
    sbit  IOCBF4_bit at IOCBF.B4;
    const register unsigned short int IOCBF5 = 5;
    sbit  IOCBF5_bit at IOCBF.B5;
    const register unsigned short int IOCBF6 = 6;
    sbit  IOCBF6_bit at IOCBF.B6;
    const register unsigned short int IOCBF7 = 7;
    sbit  IOCBF7_bit at IOCBF.B7;

    // STATUS_SHAD bits
    const register unsigned short int C_SHAD = 0;
    sbit  C_SHAD_bit at STATUS_SHAD.B0;
    const register unsigned short int DC_SHAD = 1;
    sbit  DC_SHAD_bit at STATUS_SHAD.B1;
    const register unsigned short int Z_SHAD = 2;
    sbit  Z_SHAD_bit at STATUS_SHAD.B2;

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

    // PORTE bits
    const register unsigned short int RE3 = 3;
    sbit  RE3_bit at PORTE.B3;

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

    // TRISE bits
