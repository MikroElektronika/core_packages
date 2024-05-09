// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00001000;

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
sfr unsigned short volatile PIR3             absolute 0x0013;
sfr unsigned short volatile TMR0             absolute 0x0015;
sfr unsigned short volatile TMR1L            absolute 0x0016;
sfr unsigned short volatile TMR1H            absolute 0x0017;
sfr unsigned short volatile T1CON            absolute 0x0018;
sfr unsigned short volatile T1GCON           absolute 0x0019;
sfr unsigned short volatile TMR2             absolute 0x001A;
sfr unsigned short volatile PR2              absolute 0x001B;
sfr unsigned short volatile T2CON            absolute 0x001C;
sfr unsigned short volatile CPSCON0          absolute 0x001E;
sfr unsigned short volatile CPSCON1          absolute 0x001F;
sfr unsigned short volatile PIE1             absolute 0x0091;
sfr unsigned short volatile PIE2             absolute 0x0092;
sfr unsigned short volatile PIE3             absolute 0x0093;
sfr unsigned short volatile OPTION_REG       absolute 0x0095;
sfr unsigned short volatile PCON             absolute 0x0096;
sfr unsigned short          WDTCON           absolute 0x0097;
sfr unsigned short volatile OSCTUNE          absolute 0x0098;
sfr unsigned short volatile OSCCON           absolute 0x0099;
sfr unsigned short volatile OSCSTAT          absolute 0x009A;
sfr unsigned short volatile ADRESL           absolute 0x009B;
sfr unsigned short volatile ADRESH           absolute 0x009C;
sfr unsigned short volatile ADCON0           absolute 0x009D;
sfr unsigned short volatile ADCON1           absolute 0x009E;
sfr unsigned short volatile LATA             absolute 0x010C;
sfr unsigned short volatile LATB             absolute 0x010D;
sfr unsigned short volatile LATC             absolute 0x010E;
sfr unsigned short volatile LATE             absolute 0x0110;
sfr unsigned short volatile CM1CON0          absolute 0x0111;
sfr unsigned short volatile CM1CON1          absolute 0x0112;
sfr unsigned short volatile CM2CON0          absolute 0x0113;
sfr unsigned short volatile CM2CON1          absolute 0x0114;
sfr unsigned short volatile CMOUT            absolute 0x0115;
sfr unsigned short volatile BORCON           absolute 0x0116;
sfr unsigned short volatile FVRCON           absolute 0x0117;
sfr unsigned short volatile DACCON0          absolute 0x0118;
sfr unsigned short volatile DACCON1          absolute 0x0119;
sfr unsigned short volatile SRCON0           absolute 0x011A;
sfr unsigned short volatile SRCON1           absolute 0x011B;
sfr unsigned short          APFCON           absolute 0x011D;
sfr unsigned short volatile ANSELA           absolute 0x018C;
sfr unsigned short volatile ANSELB           absolute 0x018D;
sfr unsigned int   volatile EEADR            absolute 0x0191;
sfr unsigned short volatile EEADRL           absolute 0x0191;
sfr unsigned short volatile EEADRH           absolute 0x0192;
sfr unsigned int   volatile EEDAT            absolute 0x0193;
sfr unsigned short volatile EEDATL           absolute 0x0193;
sfr unsigned short volatile EEDATH           absolute 0x0194;
sfr unsigned short volatile EECON1           absolute 0x0195;
sfr unsigned short volatile EECON2           absolute 0x0196;
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
sfr unsigned short volatile SSPBUF           absolute 0x0211;
sfr unsigned short volatile SSPADD           absolute 0x0212;
sfr unsigned short volatile SSPMSK           absolute 0x0213;
sfr unsigned short volatile SSPSTAT          absolute 0x0214;
sfr unsigned short volatile SSPCON           absolute 0x0215;
sfr unsigned short volatile SSPCON1          absolute 0x0215;
sfr unsigned short volatile SSPCON2          absolute 0x0216;
sfr unsigned short volatile SSPCON3          absolute 0x0217;
sfr unsigned short volatile CCPR1L           absolute 0x0291;
sfr unsigned short volatile CCPR1H           absolute 0x0292;
sfr unsigned short volatile CCP1CON          absolute 0x0293;
sfr unsigned short          PWM1CON          absolute 0x0294;
sfr unsigned short volatile CCP1AS           absolute 0x0295;
sfr unsigned short volatile ECCP1AS          absolute 0x0295;
sfr unsigned short volatile PSTR1CON         absolute 0x0296;
sfr unsigned short volatile CCP2CON          absolute 0x029A;
sfr unsigned short          PWM2CON          absolute 0x029B;
sfr unsigned short volatile CCP2AS           absolute 0x029C;
sfr unsigned short volatile ECCP2AS          absolute 0x029C;
sfr unsigned short volatile PSTR2CON         absolute 0x029D;
sfr unsigned short volatile CCPTMRS0         absolute 0x029E;
sfr unsigned short volatile CCPTMRS1         absolute 0x029F;
sfr unsigned short volatile CCP3CON          absolute 0x0313;
sfr unsigned short          PWM3CON          absolute 0x0314;
sfr unsigned short volatile CCP3AS           absolute 0x0315;
sfr unsigned short volatile ECCP3AS          absolute 0x0315;
sfr unsigned short volatile PSTR3CON         absolute 0x0316;
sfr unsigned short volatile CCP4CON          absolute 0x031A;
sfr unsigned short volatile CCP5CON          absolute 0x031E;
sfr unsigned short volatile IOCBP            absolute 0x0394;
sfr unsigned short volatile IOCBN            absolute 0x0395;
sfr unsigned short volatile IOCBF            absolute 0x0396;
sfr unsigned short volatile TMR4             absolute 0x0415;
sfr unsigned short volatile PR4              absolute 0x0416;
sfr unsigned short volatile T4CON            absolute 0x0417;
sfr unsigned short volatile TMR6             absolute 0x041C;
sfr unsigned short volatile PR6              absolute 0x041D;
sfr unsigned short volatile T6CON            absolute 0x041E;
sfr unsigned short volatile LCDCON           absolute 0x0791;
sfr unsigned short volatile LCDPS            absolute 0x0792;
sfr unsigned short volatile LCDREF           absolute 0x0793;
sfr unsigned short volatile LCDCST           absolute 0x0794;
sfr unsigned short volatile LCDRL            absolute 0x0795;
sfr unsigned short volatile LCDSE0           absolute 0x0798;
sfr unsigned short volatile LCDSE1           absolute 0x0799;
sfr unsigned short volatile LCDDATA0         absolute 0x07A0;
sfr unsigned short volatile LCDDATA1         absolute 0x07A1;
sfr unsigned short volatile LCDDATA3         absolute 0x07A3;
sfr unsigned short volatile LCDDATA4         absolute 0x07A4;
sfr unsigned short volatile LCDDATA6         absolute 0x07A6;
sfr unsigned short volatile LCDDATA7         absolute 0x07A7;
sfr unsigned short volatile LCDDATA9         absolute 0x07A9;
sfr unsigned short volatile LCDDATA10        absolute 0x07AA;
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
sfr unsigned short volatile CCPR3L           absolute 0x0311;
sfr unsigned short volatile CCPR3H           absolute 0x0312;
sfr unsigned short volatile CCPR4L           absolute 0x0318;
sfr unsigned short volatile CCPR4H           absolute 0x0319;
sfr unsigned short volatile CCPR5L           absolute 0x031C;
sfr unsigned short volatile CCPR5H           absolute 0x031D;
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
    const register unsigned short int LCDIF = 2;
    sbit  LCDIF_bit at PIR2.B2;
    const register unsigned short int BCLIF = 3;
    sbit  BCLIF_bit at PIR2.B3;
    const register unsigned short int EEIF = 4;
    sbit  EEIF_bit at PIR2.B4;
    const register unsigned short int C1IF = 5;
    sbit  C1IF_bit at PIR2.B5;
    const register unsigned short int C2IF = 6;
    sbit  C2IF_bit at PIR2.B6;
    const register unsigned short int OSFIF = 7;
    sbit  OSFIF_bit at PIR2.B7;

    // PIR3 bits
    const register unsigned short int TMR4IF = 1;
    sbit  TMR4IF_bit at PIR3.B1;
    const register unsigned short int TMR6IF = 3;
    sbit  TMR6IF_bit at PIR3.B3;
    const register unsigned short int CCP3IF = 4;
    sbit  CCP3IF_bit at PIR3.B4;
    const register unsigned short int CCP4IF = 5;
    sbit  CCP4IF_bit at PIR3.B5;
    const register unsigned short int CCP5IF = 6;
    sbit  CCP5IF_bit at PIR3.B6;

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

    // T2CON bits
    const register unsigned short int T2CKPS0 = 0;
    sbit  T2CKPS0_bit at T2CON.B0;
    const register unsigned short int T2CKPS1 = 1;
    sbit  T2CKPS1_bit at T2CON.B1;
    const register unsigned short int TMR2ON = 2;
    sbit  TMR2ON_bit at T2CON.B2;
    const register unsigned short int T2OUTPS0 = 3;
    sbit  T2OUTPS0_bit at T2CON.B3;
    const register unsigned short int T2OUTPS1 = 4;
    sbit  T2OUTPS1_bit at T2CON.B4;
    const register unsigned short int T2OUTPS2 = 5;
    sbit  T2OUTPS2_bit at T2CON.B5;
    const register unsigned short int T2OUTPS3 = 6;
    sbit  T2OUTPS3_bit at T2CON.B6;

    // CPSCON0 bits
    const register unsigned short int T0XCS = 0;
    sbit  T0XCS_bit at CPSCON0.B0;
    const register unsigned short int CPSOUT = 1;
    sbit  CPSOUT_bit at CPSCON0.B1;
    const register unsigned short int CPSRNG0 = 2;
    sbit  CPSRNG0_bit at CPSCON0.B2;
    const register unsigned short int CPSRNG1 = 3;
    sbit  CPSRNG1_bit at CPSCON0.B3;
    const register unsigned short int CPSRM = 6;
    sbit  CPSRM_bit at CPSCON0.B6;
    const register unsigned short int CPSON = 7;
    sbit  CPSON_bit at CPSCON0.B7;

    // CPSCON1 bits
    const register unsigned short int CPSCH0 = 0;
    sbit  CPSCH0_bit at CPSCON1.B0;
    const register unsigned short int CPSCH1 = 1;
    sbit  CPSCH1_bit at CPSCON1.B1;
    const register unsigned short int CPSCH2 = 2;
    sbit  CPSCH2_bit at CPSCON1.B2;

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
    const register unsigned short int LCDIE = 2;
    sbit  LCDIE_bit at PIE2.B2;
    const register unsigned short int BCLIE = 3;
    sbit  BCLIE_bit at PIE2.B3;
    const register unsigned short int EEIE = 4;
    sbit  EEIE_bit at PIE2.B4;
    const register unsigned short int C1IE = 5;
    sbit  C1IE_bit at PIE2.B5;
    const register unsigned short int C2IE = 6;
    sbit  C2IE_bit at PIE2.B6;
    const register unsigned short int OSFIE = 7;
    sbit  OSFIE_bit at PIE2.B7;

    // PIE3 bits
    const register unsigned short int TMR4IE = 1;
    sbit  TMR4IE_bit at PIE3.B1;
    const register unsigned short int TMR6IE = 3;
    sbit  TMR6IE_bit at PIE3.B3;
    const register unsigned short int CCP3IE = 4;
    sbit  CCP3IE_bit at PIE3.B4;
    const register unsigned short int CCP4IE = 5;
    sbit  CCP4IE_bit at PIE3.B5;
    const register unsigned short int CCP5IE = 6;
    sbit  CCP5IE_bit at PIE3.B6;

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
    const register unsigned short int SPLLEN = 7;
    sbit  SPLLEN_bit at OSCCON.B7;

    // OSCSTAT bits
    const register unsigned short int HFIOFS = 0;
    sbit  HFIOFS_bit at OSCSTAT.B0;
    const register unsigned short int LFIOFR = 1;
    sbit  LFIOFR_bit at OSCSTAT.B1;
    const register unsigned short int MFIOFR = 2;
    sbit  MFIOFR_bit at OSCSTAT.B2;
    const register unsigned short int HFIOFL = 3;
    sbit  HFIOFL_bit at OSCSTAT.B3;
    const register unsigned short int HFIOFR = 4;
    sbit  HFIOFR_bit at OSCSTAT.B4;
    const register unsigned short int OSTS = 5;
    sbit  OSTS_bit at OSCSTAT.B5;
    const register unsigned short int PLLR = 6;
    sbit  PLLR_bit at OSCSTAT.B6;
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
    const register unsigned short int ADNREF = 2;
    sbit  ADNREF_bit at ADCON1.B2;
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

    // LATE bits
    const register unsigned short int LATE3 = 3;
    sbit  LATE3_bit at LATE.B3;

    // CM1CON0 bits
    const register unsigned short int C1SYNC = 0;
    sbit  C1SYNC_bit at CM1CON0.B0;
    const register unsigned short int C1HYS = 1;
    sbit  C1HYS_bit at CM1CON0.B1;
    const register unsigned short int C1SP = 2;
    sbit  C1SP_bit at CM1CON0.B2;
    const register unsigned short int C1POL = 4;
    sbit  C1POL_bit at CM1CON0.B4;
    const register unsigned short int C1OE = 5;
    sbit  C1OE_bit at CM1CON0.B5;
    const register unsigned short int C1OUT = 6;
    sbit  C1OUT_bit at CM1CON0.B6;
    const register unsigned short int C1ON = 7;
    sbit  C1ON_bit at CM1CON0.B7;

    // CM1CON1 bits
    const register unsigned short int C1NCH0 = 0;
    sbit  C1NCH0_bit at CM1CON1.B0;
    const register unsigned short int C1NCH1 = 1;
    sbit  C1NCH1_bit at CM1CON1.B1;
    const register unsigned short int C1PCH0 = 4;
    sbit  C1PCH0_bit at CM1CON1.B4;
    const register unsigned short int C1PCH1 = 5;
    sbit  C1PCH1_bit at CM1CON1.B5;
    const register unsigned short int C1INTN = 6;
    sbit  C1INTN_bit at CM1CON1.B6;
    const register unsigned short int C1INTP = 7;
    sbit  C1INTP_bit at CM1CON1.B7;

    // CM2CON0 bits
    const register unsigned short int C2SYNC = 0;
    sbit  C2SYNC_bit at CM2CON0.B0;
    const register unsigned short int C2HYS = 1;
    sbit  C2HYS_bit at CM2CON0.B1;
    const register unsigned short int C2SP = 2;
    sbit  C2SP_bit at CM2CON0.B2;
    const register unsigned short int C2POL = 4;
    sbit  C2POL_bit at CM2CON0.B4;
    const register unsigned short int C2OE = 5;
    sbit  C2OE_bit at CM2CON0.B5;
    const register unsigned short int C2OUT = 6;
    sbit  C2OUT_bit at CM2CON0.B6;
    const register unsigned short int C2ON = 7;
    sbit  C2ON_bit at CM2CON0.B7;

    // CM2CON1 bits
    const register unsigned short int C2NCH0 = 0;
    sbit  C2NCH0_bit at CM2CON1.B0;
    const register unsigned short int C2NCH1 = 1;
    sbit  C2NCH1_bit at CM2CON1.B1;
    const register unsigned short int C2PCH0 = 4;
    sbit  C2PCH0_bit at CM2CON1.B4;
    const register unsigned short int C2PCH1 = 5;
    sbit  C2PCH1_bit at CM2CON1.B5;
    const register unsigned short int C2INTN = 6;
    sbit  C2INTN_bit at CM2CON1.B6;
    const register unsigned short int C2INTP = 7;
    sbit  C2INTP_bit at CM2CON1.B7;

    // CMOUT bits
    const register unsigned short int MC1OUT = 0;
    sbit  MC1OUT_bit at CMOUT.B0;
    const register unsigned short int MC2OUT = 1;
    sbit  MC2OUT_bit at CMOUT.B1;

    // BORCON bits
    const register unsigned short int BORRDY = 0;
    sbit  BORRDY_bit at BORCON.B0;
    const register unsigned short int SBOREN = 7;
    sbit  SBOREN_bit at BORCON.B7;

    // FVRCON bits
    const register unsigned short int ADFVR0 = 0;
    sbit  ADFVR0_bit at FVRCON.B0;
    const register unsigned short int ADFVR1 = 1;
    sbit  ADFVR1_bit at FVRCON.B1;
    const register unsigned short int CDAFVR0 = 2;
    sbit  CDAFVR0_bit at FVRCON.B2;
    const register unsigned short int CDAFVR1 = 3;
    sbit  CDAFVR1_bit at FVRCON.B3;
    const register unsigned short int TSRNG = 4;
    sbit  TSRNG_bit at FVRCON.B4;
    const register unsigned short int TSEN = 5;
    sbit  TSEN_bit at FVRCON.B5;
    const register unsigned short int FVRRDY = 6;
    sbit  FVRRDY_bit at FVRCON.B6;
    const register unsigned short int FVREN = 7;
    sbit  FVREN_bit at FVRCON.B7;

    // DACCON0 bits
    const register unsigned short int DACNSS = 0;
    sbit  DACNSS_bit at DACCON0.B0;
    const register unsigned short int DACPSS0 = 2;
    sbit  DACPSS0_bit at DACCON0.B2;
    const register unsigned short int DACPSS1 = 3;
    sbit  DACPSS1_bit at DACCON0.B3;
    const register unsigned short int DACOE = 5;
    sbit  DACOE_bit at DACCON0.B5;
    const register unsigned short int DACLPS = 6;
    sbit  DACLPS_bit at DACCON0.B6;
    const register unsigned short int DACEN = 7;
    sbit  DACEN_bit at DACCON0.B7;

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

    // SRCON0 bits
    const register unsigned short int SRPR = 0;
    sbit  SRPR_bit at SRCON0.B0;
    const register unsigned short int SRPS = 1;
    sbit  SRPS_bit at SRCON0.B1;
    const register unsigned short int SRNQEN = 2;
    sbit  SRNQEN_bit at SRCON0.B2;
    const register unsigned short int SRQEN = 3;
    sbit  SRQEN_bit at SRCON0.B3;
    const register unsigned short int SRCLK0 = 4;
    sbit  SRCLK0_bit at SRCON0.B4;
    const register unsigned short int SRCLK1 = 5;
    sbit  SRCLK1_bit at SRCON0.B5;
    const register unsigned short int SRCLK2 = 6;
    sbit  SRCLK2_bit at SRCON0.B6;
    const register unsigned short int SRLEN = 7;
    sbit  SRLEN_bit at SRCON0.B7;

    // SRCON1 bits
    const register unsigned short int SRRC1E = 0;
    sbit  SRRC1E_bit at SRCON1.B0;
    const register unsigned short int SRRC2E = 1;
    sbit  SRRC2E_bit at SRCON1.B1;
    const register unsigned short int SRRCKE = 2;
    sbit  SRRCKE_bit at SRCON1.B2;
    const register unsigned short int SRRPE = 3;
    sbit  SRRPE_bit at SRCON1.B3;
    const register unsigned short int SRSC1E = 4;
    sbit  SRSC1E_bit at SRCON1.B4;
    const register unsigned short int SRSC2E = 5;
    sbit  SRSC2E_bit at SRCON1.B5;
    const register unsigned short int SRSCKE = 6;
    sbit  SRSCKE_bit at SRCON1.B6;
    const register unsigned short int SRSPE = 7;
    sbit  SRSPE_bit at SRCON1.B7;

    // APFCON bits
    const register unsigned short int CCP2SEL = 0;
    sbit  CCP2SEL_bit at APFCON.B0;
    const register unsigned short int SSSEL = 1;
    sbit  SSSEL_bit at APFCON.B1;
    const register unsigned short int C2OUTSEL = 2;
    sbit  C2OUTSEL_bit at APFCON.B2;
    const register unsigned short int SRNQSEL = 3;
    sbit  SRNQSEL_bit at APFCON.B3;
    const register unsigned short int P2BSEL = 4;
    sbit  P2BSEL_bit at APFCON.B4;
    const register unsigned short int T1GSEL = 5;
    sbit  T1GSEL_bit at APFCON.B5;
    const register unsigned short int CCP3SEL = 6;
    sbit  CCP3SEL_bit at APFCON.B6;

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
    const register unsigned short int LWLO = 5;
    sbit  LWLO_bit at EECON1.B5;
    const register unsigned short int CFGS = 6;
    sbit  CFGS_bit at EECON1.B6;
    const register unsigned short int EEPGD = 7;
    sbit  EEPGD_bit at EECON1.B7;

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

    // SSPCON, SSPCON1 bits
    const register unsigned short int SSPM0 = 0;
    sbit  SSPM0_bit at SSPCON.B0;
    const register unsigned short int SSPM1 = 1;
    sbit  SSPM1_bit at SSPCON.B1;
    const register unsigned short int SSPM2 = 2;
    sbit  SSPM2_bit at SSPCON.B2;
    const register unsigned short int SSPM3 = 3;
    sbit  SSPM3_bit at SSPCON.B3;
    const register unsigned short int CKP = 4;
    sbit  CKP_bit at SSPCON.B4;
    const register unsigned short int SSPEN = 5;
    sbit  SSPEN_bit at SSPCON.B5;
    const register unsigned short int SSPOV = 6;
    sbit  SSPOV_bit at SSPCON.B6;
    const register unsigned short int WCOL = 7;
    sbit  WCOL_bit at SSPCON.B7;

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

    // SSPCON3 bits
    const register unsigned short int DHEN = 0;
    sbit  DHEN_bit at SSPCON3.B0;
    const register unsigned short int AHEN = 1;
    sbit  AHEN_bit at SSPCON3.B1;
    const register unsigned short int SBCDE = 2;
    sbit  SBCDE_bit at SSPCON3.B2;
    const register unsigned short int SDAHT = 3;
    sbit  SDAHT_bit at SSPCON3.B3;
    const register unsigned short int BOEN = 4;
    sbit  BOEN_bit at SSPCON3.B4;
    const register unsigned short int SCIE = 5;
    sbit  SCIE_bit at SSPCON3.B5;
    const register unsigned short int PCIE = 6;
    sbit  PCIE_bit at SSPCON3.B6;
    const register unsigned short int ACKTIM = 7;
    sbit  ACKTIM_bit at SSPCON3.B7;

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

    // PWM1CON bits
    const register unsigned short int P1DC0 = 0;
    sbit  P1DC0_bit at PWM1CON.B0;
    const register unsigned short int P1DC1 = 1;
    sbit  P1DC1_bit at PWM1CON.B1;
    const register unsigned short int P1DC2 = 2;
    sbit  P1DC2_bit at PWM1CON.B2;
    const register unsigned short int P1DC3 = 3;
    sbit  P1DC3_bit at PWM1CON.B3;
    const register unsigned short int P1DC4 = 4;
    sbit  P1DC4_bit at PWM1CON.B4;
    const register unsigned short int P1DC5 = 5;
    sbit  P1DC5_bit at PWM1CON.B5;
    const register unsigned short int P1DC6 = 6;
    sbit  P1DC6_bit at PWM1CON.B6;
    const register unsigned short int P1RSEN = 7;
    sbit  P1RSEN_bit at PWM1CON.B7;

    // CCP1AS, ECCP1AS bits
    const register unsigned short int PSS1BD0 = 0;
    sbit  PSS1BD0_bit at CCP1AS.B0;
    const register unsigned short int PSS1BD1 = 1;
    sbit  PSS1BD1_bit at CCP1AS.B1;
    const register unsigned short int PSS1AC0 = 2;
    sbit  PSS1AC0_bit at CCP1AS.B2;
    const register unsigned short int PSS1AC1 = 3;
    sbit  PSS1AC1_bit at CCP1AS.B3;
    const register unsigned short int CCP1AS0 = 4;
    sbit  CCP1AS0_bit at CCP1AS.B4;
    const register unsigned short int CCP1AS1 = 5;
    sbit  CCP1AS1_bit at CCP1AS.B5;
    const register unsigned short int CCP1AS2 = 6;
    sbit  CCP1AS2_bit at CCP1AS.B6;
    const register unsigned short int CCP1ASE = 7;
    sbit  CCP1ASE_bit at CCP1AS.B7;

    // PSTR1CON bits
    const register unsigned short int STR1A = 0;
    sbit  STR1A_bit at PSTR1CON.B0;
    const register unsigned short int STR1B = 1;
    sbit  STR1B_bit at PSTR1CON.B1;
    const register unsigned short int STR1C = 2;
    sbit  STR1C_bit at PSTR1CON.B2;
    const register unsigned short int STR1D = 3;
    sbit  STR1D_bit at PSTR1CON.B3;
    const register unsigned short int STR1SYNC = 4;
    sbit  STR1SYNC_bit at PSTR1CON.B4;

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

    // PWM2CON bits
    const register unsigned short int P2DC0 = 0;
    sbit  P2DC0_bit at PWM2CON.B0;
    const register unsigned short int P2DC1 = 1;
    sbit  P2DC1_bit at PWM2CON.B1;
    const register unsigned short int P2DC2 = 2;
    sbit  P2DC2_bit at PWM2CON.B2;
    const register unsigned short int P2DC3 = 3;
    sbit  P2DC3_bit at PWM2CON.B3;
    const register unsigned short int P2DC4 = 4;
    sbit  P2DC4_bit at PWM2CON.B4;
    const register unsigned short int P2DC5 = 5;
    sbit  P2DC5_bit at PWM2CON.B5;
    const register unsigned short int P2DC6 = 6;
    sbit  P2DC6_bit at PWM2CON.B6;
    const register unsigned short int P2RSEN = 7;
    sbit  P2RSEN_bit at PWM2CON.B7;

    // CCP2AS, ECCP2AS bits
    const register unsigned short int PSS2BD0 = 0;
    sbit  PSS2BD0_bit at CCP2AS.B0;
    const register unsigned short int PSS2BD1 = 1;
    sbit  PSS2BD1_bit at CCP2AS.B1;
    const register unsigned short int PSS2AC0 = 2;
    sbit  PSS2AC0_bit at CCP2AS.B2;
    const register unsigned short int PSS2AC1 = 3;
    sbit  PSS2AC1_bit at CCP2AS.B3;
    const register unsigned short int CCP2AS0 = 4;
    sbit  CCP2AS0_bit at CCP2AS.B4;
    const register unsigned short int CCP2AS1 = 5;
    sbit  CCP2AS1_bit at CCP2AS.B5;
    const register unsigned short int CCP2AS2 = 6;
    sbit  CCP2AS2_bit at CCP2AS.B6;
    const register unsigned short int CCP2ASE = 7;
    sbit  CCP2ASE_bit at CCP2AS.B7;

    // PSTR2CON bits
    const register unsigned short int STR2A = 0;
    sbit  STR2A_bit at PSTR2CON.B0;
    const register unsigned short int STR2B = 1;
    sbit  STR2B_bit at PSTR2CON.B1;
    const register unsigned short int STR2C = 2;
    sbit  STR2C_bit at PSTR2CON.B2;
    const register unsigned short int STR2D = 3;
    sbit  STR2D_bit at PSTR2CON.B3;
    const register unsigned short int STR2SYNC = 4;
    sbit  STR2SYNC_bit at PSTR2CON.B4;

    // CCPTMRS0 bits
    const register unsigned short int C1TSEL0 = 0;
    sbit  C1TSEL0_bit at CCPTMRS0.B0;
    const register unsigned short int C1TSEL1 = 1;
    sbit  C1TSEL1_bit at CCPTMRS0.B1;
    const register unsigned short int C2TSEL0 = 2;
    sbit  C2TSEL0_bit at CCPTMRS0.B2;
    const register unsigned short int C2TSEL1 = 3;
    sbit  C2TSEL1_bit at CCPTMRS0.B3;
    const register unsigned short int C3TSEL0 = 4;
    sbit  C3TSEL0_bit at CCPTMRS0.B4;
    const register unsigned short int C3TSEL1 = 5;
    sbit  C3TSEL1_bit at CCPTMRS0.B5;
    const register unsigned short int C4TSEL0 = 6;
    sbit  C4TSEL0_bit at CCPTMRS0.B6;
    const register unsigned short int C4TSEL1 = 7;
    sbit  C4TSEL1_bit at CCPTMRS0.B7;

    // CCPTMRS1 bits
    const register unsigned short int C5TSEL0 = 0;
    sbit  C5TSEL0_bit at CCPTMRS1.B0;
    const register unsigned short int C5TSEL1 = 1;
    sbit  C5TSEL1_bit at CCPTMRS1.B1;

    // CCP3CON bits
    const register unsigned short int CCP3M0 = 0;
    sbit  CCP3M0_bit at CCP3CON.B0;
    const register unsigned short int CCP3M1 = 1;
    sbit  CCP3M1_bit at CCP3CON.B1;
    const register unsigned short int CCP3M2 = 2;
    sbit  CCP3M2_bit at CCP3CON.B2;
    const register unsigned short int CCP3M3 = 3;
    sbit  CCP3M3_bit at CCP3CON.B3;
    const register unsigned short int DC3B0 = 4;
    sbit  DC3B0_bit at CCP3CON.B4;
    const register unsigned short int DC3B1 = 5;
    sbit  DC3B1_bit at CCP3CON.B5;
    const register unsigned short int P3M0 = 6;
    sbit  P3M0_bit at CCP3CON.B6;
    const register unsigned short int P3M1 = 7;
    sbit  P3M1_bit at CCP3CON.B7;

    // PWM3CON bits
    const register unsigned short int P3DC0 = 0;
    sbit  P3DC0_bit at PWM3CON.B0;
    const register unsigned short int P3DC1 = 1;
    sbit  P3DC1_bit at PWM3CON.B1;
    const register unsigned short int P3DC2 = 2;
    sbit  P3DC2_bit at PWM3CON.B2;
    const register unsigned short int P3DC3 = 3;
    sbit  P3DC3_bit at PWM3CON.B3;
    const register unsigned short int P3DC4 = 4;
    sbit  P3DC4_bit at PWM3CON.B4;
    const register unsigned short int P3DC5 = 5;
    sbit  P3DC5_bit at PWM3CON.B5;
    const register unsigned short int P3DC6 = 6;
    sbit  P3DC6_bit at PWM3CON.B6;
    const register unsigned short int P3RSEN = 7;
    sbit  P3RSEN_bit at PWM3CON.B7;

    // CCP3AS, ECCP3AS bits
    const register unsigned short int PSS3BD0 = 0;
    sbit  PSS3BD0_bit at CCP3AS.B0;
    const register unsigned short int PSS3BD1 = 1;
    sbit  PSS3BD1_bit at CCP3AS.B1;
    const register unsigned short int PSS3AC0 = 2;
    sbit  PSS3AC0_bit at CCP3AS.B2;
    const register unsigned short int PSS3AC1 = 3;
    sbit  PSS3AC1_bit at CCP3AS.B3;
    const register unsigned short int CCP3AS0 = 4;
    sbit  CCP3AS0_bit at CCP3AS.B4;
    const register unsigned short int CCP3AS1 = 5;
    sbit  CCP3AS1_bit at CCP3AS.B5;
    const register unsigned short int CCP3AS2 = 6;
    sbit  CCP3AS2_bit at CCP3AS.B6;
    const register unsigned short int CCP3ASE = 7;
    sbit  CCP3ASE_bit at CCP3AS.B7;

    // PSTR3CON bits
    const register unsigned short int STR3A = 0;
    sbit  STR3A_bit at PSTR3CON.B0;
    const register unsigned short int STR3B = 1;
    sbit  STR3B_bit at PSTR3CON.B1;
    const register unsigned short int STR3C = 2;
    sbit  STR3C_bit at PSTR3CON.B2;
    const register unsigned short int STR3D = 3;
    sbit  STR3D_bit at PSTR3CON.B3;
    const register unsigned short int STR3SYNC = 4;
    sbit  STR3SYNC_bit at PSTR3CON.B4;

    // CCP4CON bits
    const register unsigned short int CCP4M0 = 0;
    sbit  CCP4M0_bit at CCP4CON.B0;
    const register unsigned short int CCP4M1 = 1;
    sbit  CCP4M1_bit at CCP4CON.B1;
    const register unsigned short int CCP4M2 = 2;
    sbit  CCP4M2_bit at CCP4CON.B2;
    const register unsigned short int CCP4M3 = 3;
    sbit  CCP4M3_bit at CCP4CON.B3;
    const register unsigned short int DC4B0 = 4;
    sbit  DC4B0_bit at CCP4CON.B4;
    const register unsigned short int DC4B1 = 5;
    sbit  DC4B1_bit at CCP4CON.B5;

    // CCP5CON bits
    const register unsigned short int CCP5M0 = 0;
    sbit  CCP5M0_bit at CCP5CON.B0;
    const register unsigned short int CCP5M1 = 1;
    sbit  CCP5M1_bit at CCP5CON.B1;
    const register unsigned short int CCP5M2 = 2;
    sbit  CCP5M2_bit at CCP5CON.B2;
    const register unsigned short int CCP5M3 = 3;
    sbit  CCP5M3_bit at CCP5CON.B3;
    const register unsigned short int DC5B0 = 4;
    sbit  DC5B0_bit at CCP5CON.B4;
    const register unsigned short int DC5B1 = 5;
    sbit  DC5B1_bit at CCP5CON.B5;

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

    // T4CON bits
    const register unsigned short int T4CKPS0 = 0;
    sbit  T4CKPS0_bit at T4CON.B0;
    const register unsigned short int T4CKPS1 = 1;
    sbit  T4CKPS1_bit at T4CON.B1;
    const register unsigned short int TMR4ON = 2;
    sbit  TMR4ON_bit at T4CON.B2;
    const register unsigned short int T4OUTPS0 = 3;
    sbit  T4OUTPS0_bit at T4CON.B3;
    const register unsigned short int T4OUTPS1 = 4;
    sbit  T4OUTPS1_bit at T4CON.B4;
    const register unsigned short int T4OUTPS2 = 5;
    sbit  T4OUTPS2_bit at T4CON.B5;
    const register unsigned short int T4OUTPS3 = 6;
    sbit  T4OUTPS3_bit at T4CON.B6;

    // T6CON bits
    const register unsigned short int T6CKPS0 = 0;
    sbit  T6CKPS0_bit at T6CON.B0;
    const register unsigned short int T6CKPS1 = 1;
    sbit  T6CKPS1_bit at T6CON.B1;
    const register unsigned short int TMR6ON = 2;
    sbit  TMR6ON_bit at T6CON.B2;
    const register unsigned short int T6OUTPS0 = 3;
    sbit  T6OUTPS0_bit at T6CON.B3;
    const register unsigned short int T6OUTPS1 = 4;
    sbit  T6OUTPS1_bit at T6CON.B4;
    const register unsigned short int T6OUTPS2 = 5;
    sbit  T6OUTPS2_bit at T6CON.B5;
    const register unsigned short int T6OUTPS3 = 6;
    sbit  T6OUTPS3_bit at T6CON.B6;

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
    const register unsigned short int LCDIRS = 6;
    sbit  LCDIRS_bit at LCDREF.B6;
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
    const register unsigned short int TRISE3 = 3;
    sbit  TRISE3_bit at TRISE.B3;
