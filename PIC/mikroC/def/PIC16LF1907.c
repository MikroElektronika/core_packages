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
sfr unsigned short volatile LATD             absolute 0x010F;
sfr unsigned short volatile LATE             absolute 0x0110;
sfr unsigned short volatile BORCON           absolute 0x0116;
sfr unsigned short volatile FVRCON           absolute 0x0117;
sfr unsigned short volatile ANSELA           absolute 0x018C;
sfr unsigned short volatile ANSELB           absolute 0x018D;
sfr unsigned short volatile ANSELE           absolute 0x0190;
sfr unsigned int   volatile PMADR            absolute 0x0191;
sfr unsigned short volatile PMADRL           absolute 0x0191;
sfr unsigned short volatile PMADRH           absolute 0x0192;
sfr unsigned int   volatile PMDAT            absolute 0x0193;
sfr unsigned short volatile PMDATL           absolute 0x0193;
sfr unsigned short volatile PMDATH           absolute 0x0194;
sfr unsigned short volatile PMCON1           absolute 0x0195;
sfr unsigned short volatile PMCON2           absolute 0x0196;
sfr unsigned short volatile RC1REG           absolute 0x0199;
sfr unsigned short volatile RCREG            absolute 0x0199;
sfr unsigned short volatile RCREG1           absolute 0x0199;
sfr unsigned short volatile TX1REG           absolute 0x019A;
sfr unsigned short volatile TXREG            absolute 0x019A;
sfr unsigned short volatile TXREG1           absolute 0x019A;
sfr unsigned short volatile SP1BRGL          absolute 0x019B;
sfr unsigned short          SPBRG            absolute 0x019B;
sfr unsigned short volatile SPBRGL           absolute 0x019B;
sfr unsigned short volatile SPBRGL1          absolute 0x019B;
sfr unsigned short volatile SP1BRGH          absolute 0x019C;
sfr unsigned short          SPBRGH           absolute 0x019C;
sfr unsigned short          SPBRGH1          absolute 0x019C;
sfr unsigned short volatile RC1STA           absolute 0x019D;
sfr unsigned short volatile RCSTA            absolute 0x019D;
sfr unsigned short volatile RCSTA1           absolute 0x019D;
sfr unsigned short volatile TX1STA           absolute 0x019E;
sfr unsigned short volatile TXSTA            absolute 0x019E;
sfr unsigned short volatile TXSTA1           absolute 0x019E;
sfr unsigned short volatile BAUD1CON         absolute 0x019F;
sfr unsigned short          BAUDCON          absolute 0x019F;
sfr unsigned short          BAUDCON1         absolute 0x019F;
sfr unsigned short          WPUB             absolute 0x020D;
sfr unsigned short volatile WPUE             absolute 0x0210;
sfr unsigned short volatile IOCBP            absolute 0x0394;
sfr unsigned short volatile IOCBN            absolute 0x0395;
sfr unsigned short volatile IOCBF            absolute 0x0396;
sfr unsigned short volatile LCDCON           absolute 0x0791;
sfr unsigned short volatile LCDPS            absolute 0x0792;
sfr unsigned short volatile LCDREF           absolute 0x0793;
sfr unsigned short volatile LCDCST           absolute 0x0794;
sfr unsigned short volatile LCDRL            absolute 0x0795;
sfr unsigned short volatile LCDSE0           absolute 0x0798;
sfr unsigned short volatile LCDSE1           absolute 0x0799;
sfr unsigned short volatile LCDSE2           absolute 0x079A;
sfr unsigned short volatile LCDSE3           absolute 0x079B;
sfr unsigned short volatile LCDDATA0         absolute 0x07A0;
sfr unsigned short volatile LCDDATA1         absolute 0x07A1;
sfr unsigned short volatile LCDDATA2         absolute 0x07A2;
sfr unsigned short volatile LCDDATA3         absolute 0x07A3;
sfr unsigned short volatile LCDDATA4         absolute 0x07A4;
sfr unsigned short volatile LCDDATA5         absolute 0x07A5;
sfr unsigned short volatile LCDDATA6         absolute 0x07A6;
sfr unsigned short volatile LCDDATA7         absolute 0x07A7;
sfr unsigned short volatile LCDDATA8         absolute 0x07A8;
sfr unsigned short volatile LCDDATA9         absolute 0x07A9;
sfr unsigned short volatile LCDDATA10        absolute 0x07AA;
sfr unsigned short volatile LCDDATA11        absolute 0x07AB;
sfr unsigned short volatile LCDDATA12        absolute 0x07AC;
sfr unsigned short volatile LCDDATA15        absolute 0x07AF;
sfr unsigned short volatile LCDDATA18        absolute 0x07B2;
sfr unsigned short volatile LCDDATA21        absolute 0x07B5;
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
sfr unsigned short volatile PORTD            absolute 0x000F;
sfr unsigned short volatile PORTE            absolute 0x0010;
sfr unsigned short volatile TRISA            absolute 0x008C;
sfr unsigned short volatile TRISB            absolute 0x008D;
sfr unsigned short volatile TRISC            absolute 0x008E;
sfr unsigned short volatile TRISD            absolute 0x008F;
sfr unsigned short volatile TRISE            absolute 0x0090;
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
    const register unsigned short int TXIF = 4;
    sbit  TXIF_bit at PIR1.B4;
    const register unsigned short int RCIF = 5;
    sbit  RCIF_bit at PIR1.B5;
    const register unsigned short int ADIF = 6;
    sbit  ADIF_bit at PIR1.B6;
    const register unsigned short int TMR1GIF = 7;
    sbit  TMR1GIF_bit at PIR1.B7;

    // PIR2 bits
    const register unsigned short int LCDIF = 2;
    sbit  LCDIF_bit at PIR2.B2;

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
    const register unsigned short int T1GSS0 = 0;
    sbit  T1GSS0_bit at T1GCON.B0;
    const register unsigned short int T1GSS1 = 1;
    sbit  T1GSS1_bit at T1GCON.B1;
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
    const register unsigned short int T1GGO = 3;
    sbit  T1GGO_bit at T1GCON.B3;

    // PIE1 bits
    const register unsigned short int TMR1IE = 0;
    sbit  TMR1IE_bit at PIE1.B0;
    const register unsigned short int TXIE = 4;
    sbit  TXIE_bit at PIE1.B4;
    const register unsigned short int RCIE = 5;
    sbit  RCIE_bit at PIE1.B5;
    const register unsigned short int ADIE = 6;
    sbit  ADIE_bit at PIE1.B6;
    const register unsigned short int TMR1GIE = 7;
    sbit  TMR1GIE_bit at PIE1.B7;

    // PIE2 bits
    const register unsigned short int LCDIE = 2;
    sbit  LCDIE_bit at PIE2.B2;

    // OPTION_REG bits
    const register unsigned short int PS0 = 0;
    sbit  PS0_bit at OPTION_REG.B0;
    const register unsigned short int PS1 = 1;
    sbit  PS1_bit at OPTION_REG.B1;
    const register unsigned short int PS2 = 2;
    sbit  PS2_bit at OPTION_REG.B2;
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
    const register unsigned short int T1OSCR = 7;
    sbit  T1OSCR_bit at OSCSTAT.B7;

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
    const register unsigned short int CHS4 = 6;
    sbit  CHS4_bit at ADCON0.B6;
    const register unsigned short int ADGO = 1;
    sbit  ADGO_bit at ADCON0.B1;
    const register unsigned short int GO = 1;
    sbit  GO_bit at ADCON0.B1;
    const register unsigned short int NOT_DONE = 1;
    sbit  NOT_DONE_bit at ADCON0.B1;

    // ADCON1 bits
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
    const register unsigned short int ADFM = 7;
    sbit  ADFM_bit at ADCON1.B7;

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

    // BORCON bits
    const register unsigned short int BORRDY = 0;
    sbit  BORRDY_bit at BORCON.B0;
    const register unsigned short int BORFS = 6;
    sbit  BORFS_bit at BORCON.B6;
    const register unsigned short int SBOREN = 7;
    sbit  SBOREN_bit at BORCON.B7;

    // FVRCON bits
    const register unsigned short int ADFVR0 = 0;
    sbit  ADFVR0_bit at FVRCON.B0;
    const register unsigned short int ADFVR1 = 1;
    sbit  ADFVR1_bit at FVRCON.B1;
    const register unsigned short int TSRNG = 4;
    sbit  TSRNG_bit at FVRCON.B4;
    const register unsigned short int TSEN = 5;
    sbit  TSEN_bit at FVRCON.B5;
    const register unsigned short int FVRRDY = 6;
    sbit  FVRRDY_bit at FVRCON.B6;
    const register unsigned short int FVREN = 7;
    sbit  FVREN_bit at FVRCON.B7;

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

    // SP1BRGL, SPBRG, SPBRGL, SPBRGL1 bits
    const register unsigned short int BRG0 = 0;
    sbit  BRG0_bit at SP1BRGL.B0;
    const register unsigned short int BRG1 = 1;
    sbit  BRG1_bit at SP1BRGL.B1;
    const register unsigned short int BRG2 = 2;
    sbit  BRG2_bit at SP1BRGL.B2;
    const register unsigned short int BRG3 = 3;
    sbit  BRG3_bit at SP1BRGL.B3;
    const register unsigned short int BRG4 = 4;
    sbit  BRG4_bit at SP1BRGL.B4;
    const register unsigned short int BRG5 = 5;
    sbit  BRG5_bit at SP1BRGL.B5;
    const register unsigned short int BRG6 = 6;
    sbit  BRG6_bit at SP1BRGL.B6;
    const register unsigned short int BRG7 = 7;
    sbit  BRG7_bit at SP1BRGL.B7;

    // SP1BRGH, SPBRGH, SPBRGH1 bits
    const register unsigned short int BRG8 = 0;
    sbit  BRG8_bit at SP1BRGH.B0;
    const register unsigned short int BRG9 = 1;
    sbit  BRG9_bit at SP1BRGH.B1;
    const register unsigned short int BRG10 = 2;
    sbit  BRG10_bit at SP1BRGH.B2;
    const register unsigned short int BRG11 = 3;
    sbit  BRG11_bit at SP1BRGH.B3;
    const register unsigned short int BRG12 = 4;
    sbit  BRG12_bit at SP1BRGH.B4;
    const register unsigned short int BRG13 = 5;
    sbit  BRG13_bit at SP1BRGH.B5;
    const register unsigned short int BRG14 = 6;
    sbit  BRG14_bit at SP1BRGH.B6;
    const register unsigned short int BRG15 = 7;
    sbit  BRG15_bit at SP1BRGH.B7;

    // RC1STA, RCSTA, RCSTA1 bits
    const register unsigned short int RX9D = 0;
    sbit  RX9D_bit at RC1STA.B0;
    const register unsigned short int OERR = 1;
    sbit  OERR_bit at RC1STA.B1;
    const register unsigned short int FERR = 2;
    sbit  FERR_bit at RC1STA.B2;
    const register unsigned short int ADDEN = 3;
    sbit  ADDEN_bit at RC1STA.B3;
    const register unsigned short int CREN = 4;
    sbit  CREN_bit at RC1STA.B4;
    const register unsigned short int SREN = 5;
    sbit  SREN_bit at RC1STA.B5;
    const register unsigned short int RX9 = 6;
    sbit  RX9_bit at RC1STA.B6;
    const register unsigned short int SPEN = 7;
    sbit  SPEN_bit at RC1STA.B7;

    // TX1STA, TXSTA, TXSTA1 bits
    const register unsigned short int TX9D = 0;
    sbit  TX9D_bit at TX1STA.B0;
    const register unsigned short int TRMT = 1;
    sbit  TRMT_bit at TX1STA.B1;
    const register unsigned short int BRGH = 2;
    sbit  BRGH_bit at TX1STA.B2;
    const register unsigned short int SENDB = 3;
    sbit  SENDB_bit at TX1STA.B3;
    const register unsigned short int SYNC = 4;
    sbit  SYNC_bit at TX1STA.B4;
    const register unsigned short int TXEN = 5;
    sbit  TXEN_bit at TX1STA.B5;
    const register unsigned short int TX9 = 6;
    sbit  TX9_bit at TX1STA.B6;
    const register unsigned short int CSRC = 7;
    sbit  CSRC_bit at TX1STA.B7;

    // BAUD1CON, BAUDCON, BAUDCON1 bits
    const register unsigned short int ABDEN = 0;
    sbit  ABDEN_bit at BAUD1CON.B0;
    const register unsigned short int WUE = 1;
    sbit  WUE_bit at BAUD1CON.B1;
    const register unsigned short int BRG16 = 3;
    sbit  BRG16_bit at BAUD1CON.B3;
    const register unsigned short int SCKP = 4;
    sbit  SCKP_bit at BAUD1CON.B4;
    const register unsigned short int RCIDL = 6;
    sbit  RCIDL_bit at BAUD1CON.B6;
    const register unsigned short int ABDOVF = 7;
    sbit  ABDOVF_bit at BAUD1CON.B7;

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

    // LCDREF bits
    const register unsigned short int VLCD1PE = 1;
    sbit  VLCD1PE_bit at LCDREF.B1;
    const register unsigned short int VLCD2PE = 2;
    sbit  VLCD2PE_bit at LCDREF.B2;
    const register unsigned short int VLCD3PE = 3;
    sbit  VLCD3PE_bit at LCDREF.B3;
    const register unsigned short int LCDIRI = 5;
    sbit  LCDIRI_bit at LCDREF.B5;
    const register unsigned short int LCDIRE = 7;
    sbit  LCDIRE_bit at LCDREF.B7;

    // LCDCST bits
    const register unsigned short int LCDCST0 = 0;
    sbit  LCDCST0_bit at LCDCST.B0;
    const register unsigned short int LCDCST1 = 1;
    sbit  LCDCST1_bit at LCDCST.B1;
    const register unsigned short int LCDCST2 = 2;
    sbit  LCDCST2_bit at LCDCST.B2;

    // LCDRL bits
    const register unsigned short int LRLAT0 = 0;
    sbit  LRLAT0_bit at LCDRL.B0;
    const register unsigned short int LRLAT1 = 1;
    sbit  LRLAT1_bit at LCDRL.B1;
    const register unsigned short int LRLAT2 = 2;
    sbit  LRLAT2_bit at LCDRL.B2;
    const register unsigned short int LRLBP0 = 4;
    sbit  LRLBP0_bit at LCDRL.B4;
    const register unsigned short int LRLBP1 = 5;
    sbit  LRLBP1_bit at LCDRL.B5;
    const register unsigned short int LRLAP0 = 6;
    sbit  LRLAP0_bit at LCDRL.B6;
    const register unsigned short int LRLAP1 = 7;
    sbit  LRLAP1_bit at LCDRL.B7;

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

    // LCDDATA0 bits
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

    // LCDDATA1 bits
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

    // LCDDATA2 bits
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
    const register unsigned short int SEG0COM1 = 0;
    sbit  SEG0COM1_bit at LCDDATA3.B0;
    const register unsigned short int SEG1COM1 = 1;
    sbit  SEG1COM1_bit at LCDDATA3.B1;
    const register unsigned short int SEG2COM1 = 2;
    sbit  SEG2COM1_bit at LCDDATA3.B2;
    const register unsigned short int SEG3COM1 = 3;
    sbit  SEG3COM1_bit at LCDDATA3.B3;
    const register unsigned short int SEG4COM1 = 4;
    sbit  SEG4COM1_bit at LCDDATA3.B4;
    const register unsigned short int SEG5COM1 = 5;
    sbit  SEG5COM1_bit at LCDDATA3.B5;
    const register unsigned short int SEG6COM1 = 6;
    sbit  SEG6COM1_bit at LCDDATA3.B6;
    const register unsigned short int SEG7COM1 = 7;
    sbit  SEG7COM1_bit at LCDDATA3.B7;

    // LCDDATA4 bits
    const register unsigned short int SEG8COM1 = 0;
    sbit  SEG8COM1_bit at LCDDATA4.B0;
    const register unsigned short int SEG9COM1 = 1;
    sbit  SEG9COM1_bit at LCDDATA4.B1;
    const register unsigned short int SEG10COM1 = 2;
    sbit  SEG10COM1_bit at LCDDATA4.B2;
    const register unsigned short int SEG11COM1 = 3;
    sbit  SEG11COM1_bit at LCDDATA4.B3;
    const register unsigned short int SEG12COM1 = 4;
    sbit  SEG12COM1_bit at LCDDATA4.B4;
    const register unsigned short int SEG13COM1 = 5;
    sbit  SEG13COM1_bit at LCDDATA4.B5;
    const register unsigned short int SEG14COM1 = 6;
    sbit  SEG14COM1_bit at LCDDATA4.B6;
    const register unsigned short int SEG15COM1 = 7;
    sbit  SEG15COM1_bit at LCDDATA4.B7;

    // LCDDATA5 bits
    const register unsigned short int SEG16COM1 = 0;
    sbit  SEG16COM1_bit at LCDDATA5.B0;
    const register unsigned short int SEG17COM1 = 1;
    sbit  SEG17COM1_bit at LCDDATA5.B1;
    const register unsigned short int SEG18COM1 = 2;
    sbit  SEG18COM1_bit at LCDDATA5.B2;
    const register unsigned short int SEG19COM1 = 3;
    sbit  SEG19COM1_bit at LCDDATA5.B3;
    const register unsigned short int SEG20COM1 = 4;
    sbit  SEG20COM1_bit at LCDDATA5.B4;
    const register unsigned short int SEG21COM1 = 5;
    sbit  SEG21COM1_bit at LCDDATA5.B5;
    const register unsigned short int SEG22COM1 = 6;
    sbit  SEG22COM1_bit at LCDDATA5.B6;
    const register unsigned short int SEG23COM1 = 7;
    sbit  SEG23COM1_bit at LCDDATA5.B7;

    // LCDDATA6 bits
    const register unsigned short int SEG0COM2 = 0;
    sbit  SEG0COM2_bit at LCDDATA6.B0;
    const register unsigned short int SEG1COM2 = 1;
    sbit  SEG1COM2_bit at LCDDATA6.B1;
    const register unsigned short int SEG2COM2 = 2;
    sbit  SEG2COM2_bit at LCDDATA6.B2;
    const register unsigned short int SEG3COM2 = 3;
    sbit  SEG3COM2_bit at LCDDATA6.B3;
    const register unsigned short int SEG4COM2 = 4;
    sbit  SEG4COM2_bit at LCDDATA6.B4;
    const register unsigned short int SEG5COM2 = 5;
    sbit  SEG5COM2_bit at LCDDATA6.B5;
    const register unsigned short int SEG6COM2 = 6;
    sbit  SEG6COM2_bit at LCDDATA6.B6;
    const register unsigned short int SEG7COM2 = 7;
    sbit  SEG7COM2_bit at LCDDATA6.B7;

    // LCDDATA7 bits
    const register unsigned short int SEG8COM2 = 0;
    sbit  SEG8COM2_bit at LCDDATA7.B0;
    const register unsigned short int SEG9COM2 = 1;
    sbit  SEG9COM2_bit at LCDDATA7.B1;
    const register unsigned short int SEG10COM2 = 2;
    sbit  SEG10COM2_bit at LCDDATA7.B2;
    const register unsigned short int SEG11COM2 = 3;
    sbit  SEG11COM2_bit at LCDDATA7.B3;
    const register unsigned short int SEG12COM2 = 4;
    sbit  SEG12COM2_bit at LCDDATA7.B4;
    const register unsigned short int SEG13COM2 = 5;
    sbit  SEG13COM2_bit at LCDDATA7.B5;
    const register unsigned short int SEG14COM2 = 6;
    sbit  SEG14COM2_bit at LCDDATA7.B6;
    const register unsigned short int SEG15COM2 = 7;
    sbit  SEG15COM2_bit at LCDDATA7.B7;

    // LCDDATA8 bits
    const register unsigned short int SEG16COM2 = 0;
    sbit  SEG16COM2_bit at LCDDATA8.B0;
    const register unsigned short int SEG17COM2 = 1;
    sbit  SEG17COM2_bit at LCDDATA8.B1;
    const register unsigned short int SEG18COM2 = 2;
    sbit  SEG18COM2_bit at LCDDATA8.B2;
    const register unsigned short int SEG19COM2 = 3;
    sbit  SEG19COM2_bit at LCDDATA8.B3;
    const register unsigned short int SEG20COM2 = 4;
    sbit  SEG20COM2_bit at LCDDATA8.B4;
    const register unsigned short int SEG21COM2 = 5;
    sbit  SEG21COM2_bit at LCDDATA8.B5;
    const register unsigned short int SEG22COM2 = 6;
    sbit  SEG22COM2_bit at LCDDATA8.B6;
    const register unsigned short int SEG23COM2 = 7;
    sbit  SEG23COM2_bit at LCDDATA8.B7;

    // LCDDATA9 bits
    const register unsigned short int SEG0COM3 = 0;
    sbit  SEG0COM3_bit at LCDDATA9.B0;
    const register unsigned short int SEG1COM3 = 1;
    sbit  SEG1COM3_bit at LCDDATA9.B1;
    const register unsigned short int SEG2COM3 = 2;
    sbit  SEG2COM3_bit at LCDDATA9.B2;
    const register unsigned short int SEG3COM3 = 3;
    sbit  SEG3COM3_bit at LCDDATA9.B3;
    const register unsigned short int SEG4COM3 = 4;
    sbit  SEG4COM3_bit at LCDDATA9.B4;
    const register unsigned short int SEG5COM3 = 5;
    sbit  SEG5COM3_bit at LCDDATA9.B5;
    const register unsigned short int SEG6COM3 = 6;
    sbit  SEG6COM3_bit at LCDDATA9.B6;
    const register unsigned short int SEG7COM3 = 7;
    sbit  SEG7COM3_bit at LCDDATA9.B7;

    // LCDDATA10 bits
    const register unsigned short int SEG8COM3 = 0;
    sbit  SEG8COM3_bit at LCDDATA10.B0;
    const register unsigned short int SEG9COM3 = 1;
    sbit  SEG9COM3_bit at LCDDATA10.B1;
    const register unsigned short int SEG10COM3 = 2;
    sbit  SEG10COM3_bit at LCDDATA10.B2;
    const register unsigned short int SEG11COM3 = 3;
    sbit  SEG11COM3_bit at LCDDATA10.B3;
    const register unsigned short int SEG12COM3 = 4;
    sbit  SEG12COM3_bit at LCDDATA10.B4;
    const register unsigned short int SEG13COM3 = 5;
    sbit  SEG13COM3_bit at LCDDATA10.B5;
    const register unsigned short int SEG14COM3 = 6;
    sbit  SEG14COM3_bit at LCDDATA10.B6;
    const register unsigned short int SEG15COM3 = 7;
    sbit  SEG15COM3_bit at LCDDATA10.B7;

    // LCDDATA11 bits
    const register unsigned short int SEG16COM3 = 0;
    sbit  SEG16COM3_bit at LCDDATA11.B0;
    const register unsigned short int SEG17COM3 = 1;
    sbit  SEG17COM3_bit at LCDDATA11.B1;
    const register unsigned short int SEG18COM3 = 2;
    sbit  SEG18COM3_bit at LCDDATA11.B2;
    const register unsigned short int SEG19COM3 = 3;
    sbit  SEG19COM3_bit at LCDDATA11.B3;
    const register unsigned short int SEG20COM3 = 4;
    sbit  SEG20COM3_bit at LCDDATA11.B4;
    const register unsigned short int SEG21COM3 = 5;
    sbit  SEG21COM3_bit at LCDDATA11.B5;
    const register unsigned short int SEG22COM3 = 6;
    sbit  SEG22COM3_bit at LCDDATA11.B6;
    const register unsigned short int SEG23COM3 = 7;
    sbit  SEG23COM3_bit at LCDDATA11.B7;

    // LCDDATA12 bits
    const register unsigned short int SEG24COM0 = 0;
    sbit  SEG24COM0_bit at LCDDATA12.B0;
    const register unsigned short int SEG25COM0 = 1;
    sbit  SEG25COM0_bit at LCDDATA12.B1;
    const register unsigned short int SEG26COM0 = 2;
    sbit  SEG26COM0_bit at LCDDATA12.B2;
    const register unsigned short int SEG27COM0 = 3;
    sbit  SEG27COM0_bit at LCDDATA12.B3;
    const register unsigned short int SEG28COM0 = 4;
    sbit  SEG28COM0_bit at LCDDATA12.B4;

    // LCDDATA15 bits
    const register unsigned short int SEG24COM1 = 0;
    sbit  SEG24COM1_bit at LCDDATA15.B0;
    const register unsigned short int SEG25COM1 = 1;
    sbit  SEG25COM1_bit at LCDDATA15.B1;
    const register unsigned short int SEG26COM1 = 2;
    sbit  SEG26COM1_bit at LCDDATA15.B2;
    const register unsigned short int SEG27COM1 = 3;
    sbit  SEG27COM1_bit at LCDDATA15.B3;
    const register unsigned short int SEG28COM1 = 4;
    sbit  SEG28COM1_bit at LCDDATA15.B4;

    // LCDDATA18 bits
    const register unsigned short int SEG24COM2 = 0;
    sbit  SEG24COM2_bit at LCDDATA18.B0;
    const register unsigned short int SEG25COM2 = 1;
    sbit  SEG25COM2_bit at LCDDATA18.B1;
    const register unsigned short int SEG26COM2 = 2;
    sbit  SEG26COM2_bit at LCDDATA18.B2;
    const register unsigned short int SEG27COM2 = 3;
    sbit  SEG27COM2_bit at LCDDATA18.B3;
    const register unsigned short int SEG28COM2 = 4;
    sbit  SEG28COM2_bit at LCDDATA18.B4;

    // LCDDATA21 bits
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
